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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00003fb4 };

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
0xbf67,	// (0x0000ff1b) Screen

0xbf79,	// (0x0000ff2d) application_window_ParamLimits

0xbf79,	// (0x0000ff2d) application_window

0xbf91,	// (0x0000ff45) screen_g1

0xbf9b,	// (0x0000ff4f) area_bottom_pane_ParamLimits

0xbf9b,	// (0x0000ff4f) area_bottom_pane

0xc000,	// (0x0000ffb4) area_top_pane_ParamLimits

0xc000,	// (0x0000ffb4) area_top_pane

0xa66f,	// (0x0000e623) main_pane_ParamLimits

0xa66f,	// (0x0000e623) main_pane

0xc078,	// (0x0001002c) misc_graphics

0xe481,	// (0x00012435) battery_pane_ParamLimits

0xe481,	// (0x00012435) battery_pane

0xf14d,	// (0x00013101) bg_status_flat_pane_g8

0xf155,	// (0x00013109) bg_status_flat_pane_g9

0xe536,	// (0x000124ea) context_pane_ParamLimits

0xe536,	// (0x000124ea) context_pane

0xe64d,	// (0x00012601) navi_pane_ParamLimits

0xe64d,	// (0x00012601) navi_pane

0xe6ca,	// (0x0001267e) signal_pane_ParamLimits

0xe6ca,	// (0x0001267e) signal_pane

0x0008,

0xf879,	// (0x0001382d) bg_status_flat_pane_g

0xe733,	// (0x000126e7) status_pane_g1_ParamLimits

0xe733,	// (0x000126e7) status_pane_g1

0xe73f,	// (0x000126f3) status_pane_g2_ParamLimits

0xe73f,	// (0x000126f3) status_pane_g2

0xe74b,	// (0x000126ff) status_pane_g3_ParamLimits

0xe74b,	// (0x000126ff) status_pane_g3

0x0004,

0xf7b3,	// (0x00013767) status_pane_g_ParamLimits

0xf7b3,	// (0x00013767) status_pane_g

0xe77d,	// (0x00012731) title_pane_ParamLimits

0xe77d,	// (0x00012731) title_pane

0xe7ba,	// (0x0001276e) uni_indicator_pane_ParamLimits

0xe7ba,	// (0x0001276e) uni_indicator_pane

0xdf0b,	// (0x00011ebf) bg_list_pane_ParamLimits

0xdf0b,	// (0x00011ebf) bg_list_pane

0xdf2b,	// (0x00011edf) find_pane

0xdf33,	// (0x00011ee7) listscroll_app_pane_ParamLimits

0xdf33,	// (0x00011ee7) listscroll_app_pane

0xdf3f,	// (0x00011ef3) listscroll_form_pane

0xdf47,	// (0x00011efb) listscroll_gen_pane_ParamLimits

0xdf47,	// (0x00011efb) listscroll_gen_pane

0xdf3f,	// (0x00011ef3) listscroll_set_pane

0xd1a9,	// (0x0001115d) main_idle_act_pane

0xdbfb,	// (0x00011baf) main_idle_trad_pane

0xdbfb,	// (0x00011baf) main_list_empty_pane

0xdf6e,	// (0x00011f22) main_midp_pane

0xdf7a,	// (0x00011f2e) main_pane_g1_ParamLimits

0xdf7a,	// (0x00011f2e) main_pane_g1

0xdf88,	// (0x00011f3c) popup_ai_message_window_ParamLimits

0xdf88,	// (0x00011f3c) popup_ai_message_window

0xe026,	// (0x00011fda) popup_fep_china_uni_window_ParamLimits

0xe026,	// (0x00011fda) popup_fep_china_uni_window

0xe064,	// (0x00012018) popup_fep_japan_candidate_window_ParamLimits

0xe064,	// (0x00012018) popup_fep_japan_candidate_window

0xe082,	// (0x00012036) popup_fep_japan_predictive_window_ParamLimits

0xe082,	// (0x00012036) popup_fep_japan_predictive_window

0xe0ae,	// (0x00012062) popup_find_window

0xe0bb,	// (0x0001206f) popup_grid_graphic_window_ParamLimits

0xe0bb,	// (0x0001206f) popup_grid_graphic_window

0xe0d9,	// (0x0001208d) popup_large_graphic_colour_window

0xe0f8,	// (0x000120ac) popup_menu_window_ParamLimits

0xe0f8,	// (0x000120ac) popup_menu_window

0xe230,	// (0x000121e4) popup_note_image_window

0xe21e,	// (0x000121d2) popup_note_wait_window_ParamLimits

0xe21e,	// (0x000121d2) popup_note_wait_window

0xe21e,	// (0x000121d2) popup_note_window_ParamLimits

0xe21e,	// (0x000121d2) popup_note_window

0xe284,	// (0x00012238) popup_query_code_window_ParamLimits

0xe284,	// (0x00012238) popup_query_code_window

0xe296,	// (0x0001224a) popup_query_data_code_window_ParamLimits

0xe296,	// (0x0001224a) popup_query_data_code_window

0xe2ab,	// (0x0001225f) popup_query_data_window_ParamLimits

0xe2ab,	// (0x0001225f) popup_query_data_window

0xe2c1,	// (0x00012275) popup_query_sat_info_window_ParamLimits

0xe2c1,	// (0x00012275) popup_query_sat_info_window

0xe2f2,	// (0x000122a6) popup_snote_single_graphic_window_ParamLimits

0xe2f2,	// (0x000122a6) popup_snote_single_graphic_window

0xe2f2,	// (0x000122a6) popup_snote_single_text_window_ParamLimits

0xe2f2,	// (0x000122a6) popup_snote_single_text_window

0xe305,	// (0x000122b9) popup_sub_window_general

0xe409,	// (0x000123bd) popup_window_general_ParamLimits

0xe409,	// (0x000123bd) popup_window_general

0xe41c,	// (0x000123d0) power_save_pane

0xad02,	// (0x0000ecb6) control_pane_g1_ParamLimits

0xad02,	// (0x0000ecb6) control_pane_g1

0xad23,	// (0x0000ecd7) control_pane_g2_ParamLimits

0xad23,	// (0x0000ecd7) control_pane_g2

0xdeb4,	// (0x00011e68) control_pane_g3_ParamLimits

0xdeb4,	// (0x00011e68) control_pane_g3

0x0007,

0xf79b,	// (0x0001374f) control_pane_g_ParamLimits

0xf79b,	// (0x0001374f) control_pane_g

0xad66,	// (0x0000ed1a) control_pane_t1_ParamLimits

0xad66,	// (0x0000ed1a) control_pane_t1

0xadb8,	// (0x0000ed6c) control_pane_t2_ParamLimits

0xadb8,	// (0x0000ed6c) control_pane_t2

0x0002,

0xf7ac,	// (0x00013760) control_pane_t_ParamLimits

0xf7ac,	// (0x00013760) control_pane_t

0xddd7,	// (0x00011d8b) navi_navi_volume_pane_cp1

0xdde0,	// (0x00011d94) status_small_icon_pane

0xdde8,	// (0x00011d9c) status_small_pane_g1_ParamLimits

0xdde8,	// (0x00011d9c) status_small_pane_g1

0xde1c,	// (0x00011dd0) status_small_pane_g2_ParamLimits

0xde1c,	// (0x00011dd0) status_small_pane_g2

0xde28,	// (0x00011ddc) status_small_pane_g3_ParamLimits

0xde28,	// (0x00011ddc) status_small_pane_g3

0xde34,	// (0x00011de8) status_small_pane_g4_ParamLimits

0xde34,	// (0x00011de8) status_small_pane_g4

0xde40,	// (0x00011df4) status_small_pane_g5_ParamLimits

0xde40,	// (0x00011df4) status_small_pane_g5

0xde4d,	// (0x00011e01) status_small_pane_g6_ParamLimits

0xde4d,	// (0x00011e01) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001373e) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001373e) status_small_pane_g

0xde7d,	// (0x00011e31) status_small_pane_t1

0xdea0,	// (0x00011e54) status_small_wait_pane_ParamLimits

0xdea0,	// (0x00011e54) status_small_wait_pane

0xd691,	// (0x00011645) aid_levels_signal_ParamLimits

0xd691,	// (0x00011645) aid_levels_signal

0xd6a2,	// (0x00011656) signal_pane_g1_ParamLimits

0xd6a2,	// (0x00011656) signal_pane_g1

0xd6b8,	// (0x0001166c) signal_pane_g2_ParamLimits

0xd6b8,	// (0x0001166c) signal_pane_g2

0x0001,

0xf71f,	// (0x000136d3) signal_pane_g_ParamLimits

0xf71f,	// (0x000136d3) signal_pane_g

0xd6ce,	// (0x00011682) context_pane_g1

0xc082,	// (0x00010036) title_pane_g1

0xc0b8,	// (0x0001006c) title_pane_t1

0xc120,	// (0x000100d4) title_pane_t2

0xc146,	// (0x000100fa) title_pane_t3

0x0002,

0xf573,	// (0x00013527) title_pane_t

0xe7d0,	// (0x00012784) aid_levels_battery_ParamLimits

0xe7d0,	// (0x00012784) aid_levels_battery

0xe7e3,	// (0x00012797) battery_pane_g1_ParamLimits

0xe7e3,	// (0x00012797) battery_pane_g1

0xe7f8,	// (0x000127ac) battery_pane_g2_ParamLimits

0xe7f8,	// (0x000127ac) battery_pane_g2

0x0001,

0xf7be,	// (0x00013772) battery_pane_g_ParamLimits

0xf7be,	// (0x00013772) battery_pane_g

0x05fc,	// (0x000045b0) uni_indicator_pane_g1

0x0611,	// (0x000045c5) uni_indicator_pane_g2

0x0627,	// (0x000045db) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x000138d5) uni_indicator_pane_g

0xd086,	// (0x0001103a) navi_icon_pane_ParamLimits

0xd086,	// (0x0001103a) navi_icon_pane

0xc078,	// (0x0001002c) navi_midp_pane

0xc078,	// (0x0001002c) navi_navi_pane

0xd086,	// (0x0001103a) navi_text_pane_ParamLimits

0xd086,	// (0x0001103a) navi_text_pane

0xbf91,	// (0x0000ff45) status_small_wait_pane_g1

0xc593,	// (0x00010547) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x000138d0) status_small_wait_pane_g

0x032f,	// (0x000042e3) navi_navi_icon_text_pane

0x0349,	// (0x000042fd) navi_navi_pane_g1_ParamLimits

0x0349,	// (0x000042fd) navi_navi_pane_g1

0x0337,	// (0x000042eb) navi_navi_pane_g2_ParamLimits

0x0337,	// (0x000042eb) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0001389e) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0001389e) navi_navi_pane_g

0x035b,	// (0x0000430f) navi_navi_tabs_pane

0x032f,	// (0x000042e3) navi_navi_text_pane

0x032f,	// (0x000042e3) navi_navi_volume_pane

0x030b,	// (0x000042bf) navi_text_pane_t1

0x02ff,	// (0x000042b3) navi_icon_pane_g1

0x0253,	// (0x00004207) navi_navi_text_pane_t1

0xb12b,	// (0x0000f0df) navi_navi_volume_pane_g1

0xb133,	// (0x0000f0e7) volume_small_pane

0x01a8,	// (0x0000415c) navi_navi_icon_text_pane_g1

0x01b0,	// (0x00004164) navi_navi_icon_text_pane_t1

0xf1ad,	// (0x00013161) navi_tabs_2_long_pane

0xf1ad,	// (0x00013161) navi_tabs_2_pane

0xf1ad,	// (0x00013161) navi_tabs_3_long_pane

0xf1ad,	// (0x00013161) navi_tabs_3_pane

0xf1ad,	// (0x00013161) navi_tabs_4_pane

0xb10b,	// (0x0000f0bf) tabs_2_active_pane_ParamLimits

0xb10b,	// (0x0000f0bf) tabs_2_active_pane

0xb11b,	// (0x0000f0cf) tabs_2_passive_pane_ParamLimits

0xb11b,	// (0x0000f0cf) tabs_2_passive_pane

0xb0d9,	// (0x0000f08d) tabs_3_active_pane_ParamLimits

0xb0d9,	// (0x0000f08d) tabs_3_active_pane

0xb0e9,	// (0x0000f09d) tabs_3_passive_pane_ParamLimits

0xb0e9,	// (0x0000f09d) tabs_3_passive_pane

0xb0fa,	// (0x0000f0ae) tabs_3_passive_pane_cp_ParamLimits

0xb0fa,	// (0x0000f0ae) tabs_3_passive_pane_cp

0xb095,	// (0x0000f049) tabs_4_active_pane_ParamLimits

0xb095,	// (0x0000f049) tabs_4_active_pane

0xb0a6,	// (0x0000f05a) tabs_4_passive_pane_ParamLimits

0xb0a6,	// (0x0000f05a) tabs_4_passive_pane

0xb0b7,	// (0x0000f06b) tabs_4_passive_pane_cp_ParamLimits

0xb0b7,	// (0x0000f06b) tabs_4_passive_pane_cp

0xb0c8,	// (0x0000f07c) tabs_4_passive_pane_cp2_ParamLimits

0xb0c8,	// (0x0000f07c) tabs_4_passive_pane_cp2

0xb075,	// (0x0000f029) tabs_2_long_active_pane_ParamLimits

0xb075,	// (0x0000f029) tabs_2_long_active_pane

0xb085,	// (0x0000f039) tabs_2_long_passive_pane_ParamLimits

0xb085,	// (0x0000f039) tabs_2_long_passive_pane

0xb040,	// (0x0000eff4) tabs_3_long_active_pane_ParamLimits

0xb040,	// (0x0000eff4) tabs_3_long_active_pane

0xb051,	// (0x0000f005) tabs_3_long_passive_pane_ParamLimits

0xb051,	// (0x0000f005) tabs_3_long_passive_pane

0xb064,	// (0x0000f018) tabs_3_long_passive_pane_cp_ParamLimits

0xb064,	// (0x0000f018) tabs_3_long_passive_pane_cp

0xafe6,	// (0x0000ef9a) volume_small_pane_g1

0xafef,	// (0x0000efa3) volume_small_pane_g2

0xaff8,	// (0x0000efac) volume_small_pane_g3

0xb001,	// (0x0000efb5) volume_small_pane_g4

0xb00a,	// (0x0000efbe) volume_small_pane_g5

0xb013,	// (0x0000efc7) volume_small_pane_g6

0xb01c,	// (0x0000efd0) volume_small_pane_g7

0xb025,	// (0x0000efd9) volume_small_pane_g8

0xb02e,	// (0x0000efe2) volume_small_pane_g9

0xb037,	// (0x0000efeb) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0001386a) volume_small_pane_g

0xc158,	// (0x0001010c) bg_active_tab_pane_cp2_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp2

0xc166,	// (0x0001011a) tabs_3_active_pane_g1

0xc16e,	// (0x00010122) tabs_3_active_pane_t1

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp2_ParamLimits

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp2

0xc166,	// (0x0001011a) tabs_3_passive_pane_g1

0xc16e,	// (0x00010122) tabs_3_passive_pane_t1

0xc158,	// (0x0001010c) bg_active_tab_pane_cp3_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp3

0xc180,	// (0x00010134) tabs_4_active_pane_g1

0xc188,	// (0x0001013c) tabs_4_active_pane_t1

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp3_ParamLimits

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp3

0xc180,	// (0x00010134) tabs_4_1_passive_pane_g1

0xc188,	// (0x0001013c) tabs_4_1_passive_pane_t1

0xdf6e,	// (0x00011f22) list_highlight_pane_cp2

0x092a,	// (0x000048de) list_set_pane_ParamLimits

0x092a,	// (0x000048de) list_set_pane

0x09b8,	// (0x0000496c) main_pane_set_t1_ParamLimits

0x09b8,	// (0x0000496c) main_pane_set_t1

0x09d8,	// (0x0000498c) main_pane_set_t2_ParamLimits

0x09d8,	// (0x0000498c) main_pane_set_t2

0x09ea,	// (0x0000499e) main_pane_set_t3_ParamLimits

0x09ea,	// (0x0000499e) main_pane_set_t3

0x09fc,	// (0x000049b0) main_pane_set_t4_ParamLimits

0x09fc,	// (0x000049b0) main_pane_set_t4

0x0003,

0xf986,	// (0x0001393a) main_pane_set_t_ParamLimits

0xf986,	// (0x0001393a) main_pane_set_t

0x0a0e,	// (0x000049c2) setting_code_pane

0x0a16,	// (0x000049ca) setting_slider_graphic_pane

0x0a16,	// (0x000049ca) setting_slider_pane

0x0a16,	// (0x000049ca) setting_text_pane

0x0a16,	// (0x000049ca) setting_volume_pane

0xa86e,	// (0x0000e822) volume_set_pane

0xc158,	// (0x0001010c) bg_set_opt_pane_cp

0xa876,	// (0x0000e82a) setting_slider_pane_t1

0xa88c,	// (0x0000e840) setting_slider_pane_t2

0xa8a5,	// (0x0000e859) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001352e) setting_slider_pane_t

0xa8bc,	// (0x0000e870) slider_set_pane

0xc078,	// (0x0001002c) bg_set_opt_pane_cp2

0xc19a,	// (0x0001014e) setting_slider_graphic_pane_g1

0xa8d2,	// (0x0000e886) setting_slider_graphic_pane_t1

0xa8e1,	// (0x0000e895) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00013535) setting_slider_graphic_pane_t

0xa8f0,	// (0x0000e8a4) slider_set_pane_cp

0xc078,	// (0x0001002c) input_focus_pane_cp1

0x08f0,	// (0x000048a4) list_set_text_pane

0xbf91,	// (0x0000ff45) setting_text_pane_g1

0xc078,	// (0x0001002c) input_focus_pane_cp2

0xbf91,	// (0x0000ff45) setting_code_pane_g1

0xc1a3,	// (0x00010157) setting_code_pane_t1

0xc1b1,	// (0x00010165) set_text_pane_t1_ParamLimits

0xc1b1,	// (0x00010165) set_text_pane_t1

0xcf94,	// (0x00010f48) set_opt_bg_pane_g1

0xcf9c,	// (0x00010f50) set_opt_bg_pane_g2

0x08d0,	// (0x00004884) set_opt_bg_pane_g3

0xcfac,	// (0x00010f60) set_opt_bg_pane_g4

0xcfb4,	// (0x00010f68) set_opt_bg_pane_g5

0xcfbc,	// (0x00010f70) set_opt_bg_pane_g6

0x08d8,	// (0x0000488c) set_opt_bg_pane_g7

0x08e0,	// (0x00004894) set_opt_bg_pane_g8

0x08e8,	// (0x0000489c) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00013927) set_opt_bg_pane_g

0x085f,	// (0x00004813) slider_set_pane_g1

0xb1a0,	// (0x0000f154) slider_set_pane_g2

0x0006,

0xf964,	// (0x00013918) slider_set_pane_g

0xb13c,	// (0x0000f0f0) volume_set_pane_g1

0xb144,	// (0x0000f0f8) volume_set_pane_g2

0xb14c,	// (0x0000f100) volume_set_pane_g3

0xb154,	// (0x0000f108) volume_set_pane_g4

0xb15c,	// (0x0000f110) volume_set_pane_g5

0xb164,	// (0x0000f118) volume_set_pane_g6

0xb16c,	// (0x0000f120) volume_set_pane_g7

0xb174,	// (0x0000f128) volume_set_pane_g8

0xb17c,	// (0x0000f130) volume_set_pane_g9

0xb184,	// (0x0000f138) volume_set_pane_g10

0x0009,

0xf93c,	// (0x000138f0) volume_set_pane_g

0xc1cc,	// (0x00010180) indicator_pane_ParamLimits

0xc1cc,	// (0x00010180) indicator_pane

0xc1d8,	// (0x0001018c) main_idle_pane_g2_ParamLimits

0xc1d8,	// (0x0001018c) main_idle_pane_g2

0xc1fc,	// (0x000101b0) main_pane_idle_g1_ParamLimits

0xc1fc,	// (0x000101b0) main_pane_idle_g1

0xc209,	// (0x000101bd) popup_clock_digital_analogue_window_ParamLimits

0xc209,	// (0x000101bd) popup_clock_digital_analogue_window

0xc220,	// (0x000101d4) soft_indicator_pane_ParamLimits

0xc220,	// (0x000101d4) soft_indicator_pane

0xc22c,	// (0x000101e0) wallpaper_pane_ParamLimits

0xc22c,	// (0x000101e0) wallpaper_pane

0xbf91,	// (0x0000ff45) wallpaper_pane_g1

0xc240,	// (0x000101f4) indicator_pane_g1_ParamLimits

0xc240,	// (0x000101f4) indicator_pane_g1

0x0d81,	// (0x00004d35) navi_navi_icon_text_pane_srt_g1

0xc25b,	// (0x0001020f) soft_indicator_pane_t1

0xc275,	// (0x00010229) aid_ps_area_pane

0xc286,	// (0x0001023a) aid_ps_clock_pane

0xc292,	// (0x00010246) aid_ps_indicator_pane

0xc29e,	// (0x00010252) indicator_ps_pane_ParamLimits

0xc29e,	// (0x00010252) indicator_ps_pane

0xc2ad,	// (0x00010261) power_save_pane_g1_ParamLimits

0xc2ad,	// (0x00010261) power_save_pane_g1

0xc2b9,	// (0x0001026d) power_save_pane_g2_ParamLimits

0xc2b9,	// (0x0001026d) power_save_pane_g2

0xa5e1,	// (0x0000e595) aid_navinavi_width_pane

0xc275,	// (0x00010229) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001353a) power_save_pane_g_ParamLimits

0xf586,	// (0x0001353a) power_save_pane_g

0xc2c7,	// (0x0001027b) power_save_pane_t1_ParamLimits

0xc2c7,	// (0x0001027b) power_save_pane_t1

0xc286,	// (0x0001023a) aid_ps_clock_pane_ParamLimits

0xc292,	// (0x00010246) aid_ps_indicator_pane_ParamLimits

0xc2d9,	// (0x0001028d) power_save_pane_t4_ParamLimits

0xc2d9,	// (0x0001028d) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001353f) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001353f) power_save_pane_t

0xc303,	// (0x000102b7) power_save_t3_ParamLimits

0xc303,	// (0x000102b7) power_save_t3

0xc2ee,	// (0x000102a2) power_save_t2_ParamLimits

0xc2ee,	// (0x000102a2) power_save_t2

0xc318,	// (0x000102cc) indicator_ps_pane_g1

0xc321,	// (0x000102d5) ai_gene_pane_ParamLimits

0xc321,	// (0x000102d5) ai_gene_pane

0xc32d,	// (0x000102e1) ai_links_pane_ParamLimits

0xc32d,	// (0x000102e1) ai_links_pane

0xc339,	// (0x000102ed) indicator_pane_cp1_ParamLimits

0xc339,	// (0x000102ed) indicator_pane_cp1

0xc345,	// (0x000102f9) main_pane_idle_g1_cp_ParamLimits

0xc345,	// (0x000102f9) main_pane_idle_g1_cp

0xc351,	// (0x00010305) popup_ai_links_title_window

0xc35a,	// (0x0001030e) soft_indicator_pane_cp1_ParamLimits

0xc35a,	// (0x0001030e) soft_indicator_pane_cp1

0x05ea,	// (0x0000459e) ai_links_pane_g1

0x05f3,	// (0x000045a7) grid_ai_links_pane

0x05cf,	// (0x00004583) ai_gene_pane_1

0x05d8,	// (0x0000458c) ai_gene_pane_2

0x05e1,	// (0x00004595) list_highlight_pane_cp4

0x05b3,	// (0x00004567) cell_ai_link_pane_ParamLimits

0x05b3,	// (0x00004567) cell_ai_link_pane

0x05ab,	// (0x0000455f) cell_ai_link_pane_g1

0xc593,	// (0x00010547) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x000138cb) cell_ai_link_pane_g

0xc078,	// (0x0001002c) grid_highlight_cp2

0xc078,	// (0x0001002c) bg_popup_sub_pane_cp1

0xc374,	// (0x00010328) popup_ai_links_title_window_t1

0x04fd,	// (0x000044b1) ai_gene_pane_1_g1_ParamLimits

0x04fd,	// (0x000044b1) ai_gene_pane_1_g1

0x0509,	// (0x000044bd) ai_gene_pane_1_g2_ParamLimits

0x0509,	// (0x000044bd) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000138c1) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000138c1) ai_gene_pane_1_g

0x0516,	// (0x000044ca) ai_gene_pane_1_t1_ParamLimits

0x0516,	// (0x000044ca) ai_gene_pane_1_t1

0x054a,	// (0x000044fe) grid_ai_soft_ind_pane

0x04e8,	// (0x0000449c) ai_gene_pane_2_t1_ParamLimits

0x04e8,	// (0x0000449c) ai_gene_pane_2_t1

0xc383,	// (0x00010337) main_pane_empty_t1_ParamLimits

0xc383,	// (0x00010337) main_pane_empty_t1

0xc3a0,	// (0x00010354) main_pane_empty_t2_ParamLimits

0xc3a0,	// (0x00010354) main_pane_empty_t2

0xc3b8,	// (0x0001036c) main_pane_empty_t3_ParamLimits

0xc3b8,	// (0x0001036c) main_pane_empty_t3

0xc3cb,	// (0x0001037f) main_pane_empty_t4_ParamLimits

0xc3cb,	// (0x0001037f) main_pane_empty_t4

0xc3de,	// (0x00010392) main_pane_empty_t5_ParamLimits

0xc3de,	// (0x00010392) main_pane_empty_t5

0x0004,

0xf590,	// (0x00013544) main_pane_empty_t_ParamLimits

0xf590,	// (0x00013544) main_pane_empty_t

0xd086,	// (0x0001103a) bg_popup_window_pane_ParamLimits

0xd086,	// (0x0001103a) bg_popup_window_pane

0x0262,	// (0x00004216) find_popup_pane_cp2_ParamLimits

0x0262,	// (0x00004216) find_popup_pane_cp2

0x026e,	// (0x00004222) heading_pane_ParamLimits

0x026e,	// (0x00004222) heading_pane

0xc078,	// (0x0001002c) bg_popup_sub_pane

0x01ca,	// (0x0000417e) bg_popup_window_pane_g1_ParamLimits

0x01ca,	// (0x0000417e) bg_popup_window_pane_g1

0x01d6,	// (0x0000418a) bg_popup_window_pane_g2_ParamLimits

0x01d6,	// (0x0000418a) bg_popup_window_pane_g2

0x01e2,	// (0x00004196) bg_popup_window_pane_g3_ParamLimits

0x01e2,	// (0x00004196) bg_popup_window_pane_g3

0x01ee,	// (0x000041a2) bg_popup_window_pane_g4_ParamLimits

0x01ee,	// (0x000041a2) bg_popup_window_pane_g4

0x01fa,	// (0x000041ae) bg_popup_window_pane_g5_ParamLimits

0x01fa,	// (0x000041ae) bg_popup_window_pane_g5

0x0206,	// (0x000041ba) bg_popup_window_pane_g6_ParamLimits

0x0206,	// (0x000041ba) bg_popup_window_pane_g6

0x0212,	// (0x000041c6) bg_popup_window_pane_g7_ParamLimits

0x0212,	// (0x000041c6) bg_popup_window_pane_g7

0x021e,	// (0x000041d2) bg_popup_window_pane_g8_ParamLimits

0x021e,	// (0x000041d2) bg_popup_window_pane_g8

0x022a,	// (0x000041de) bg_popup_window_pane_g9_ParamLimits

0x022a,	// (0x000041de) bg_popup_window_pane_g9

0x0236,	// (0x000041ea) bg_popup_window_pane_g10_ParamLimits

0x0236,	// (0x000041ea) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00013889) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00013889) bg_popup_window_pane_g

0x015f,	// (0x00004113) bg_popup_heading_pane_ParamLimits

0x015f,	// (0x00004113) bg_popup_heading_pane

0xb228,	// (0x0000f1dc) tabs_4_passive_pane_cp_srt_ParamLimits

0xb228,	// (0x0000f1dc) tabs_4_passive_pane_cp_srt

0xb23a,	// (0x0000f1ee) tabs_4_passive_pane_srt_ParamLimits

0x0173,	// (0x00004127) heading_pane_g2

0xb23a,	// (0x0000f1ee) tabs_4_passive_pane_srt

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp3_srt_ParamLimits

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp3_srt

0x017b,	// (0x0000412f) heading_pane_t1_ParamLimits

0x017b,	// (0x0000412f) heading_pane_t1

0x0192,	// (0x00004146) heading_pane_t2_ParamLimits

0x0192,	// (0x00004146) heading_pane_t2

0x0001,

0xf8d0,	// (0x00013884) heading_pane_t_ParamLimits

0xf8d0,	// (0x00013884) heading_pane_t

0xf115,	// (0x000130c9) bg_popup_heading_pane_g1

0xf1be,	// (0x00013172) bg_popup_heading_pane_g2

0xf1c6,	// (0x0001317a) bg_popup_heading_pane_g3

0xf1ce,	// (0x00013182) bg_popup_heading_pane_g4

0xf1d6,	// (0x0001318a) bg_popup_heading_pane_g5

0xf1de,	// (0x00013192) bg_popup_heading_pane_g6

0xf1e6,	// (0x0001319a) bg_popup_heading_pane_g7

0xf1ee,	// (0x000131a2) bg_popup_heading_pane_g8

0xf1f6,	// (0x000131aa) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00013840) bg_popup_heading_pane_g

0xe8c3,	// (0x00012877) bg_popup_sub_pane_g1

0xe8d3,	// (0x00012887) bg_popup_sub_pane_g2

0xe8cb,	// (0x0001287f) bg_popup_sub_pane_g3

0xe8e3,	// (0x00012897) bg_popup_sub_pane_g4

0xe8db,	// (0x0001288f) bg_popup_sub_pane_g5

0xe8eb,	// (0x0001289f) bg_popup_sub_pane_g6

0xe8f3,	// (0x000128a7) bg_popup_sub_pane_g7

0xe903,	// (0x000128b7) bg_popup_sub_pane_g8

0xe8fb,	// (0x000128af) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0001381a) bg_popup_sub_pane_g

0xc3f1,	// (0x000103a5) bg_popup_window_pane_cp5_ParamLimits

0xc3f1,	// (0x000103a5) bg_popup_window_pane_cp5

0xc40d,	// (0x000103c1) popup_note_window_g1_ParamLimits

0xc40d,	// (0x000103c1) popup_note_window_g1

0xc419,	// (0x000103cd) popup_note_window_t1_ParamLimits

0xc419,	// (0x000103cd) popup_note_window_t1

0xc42f,	// (0x000103e3) popup_note_window_t2_ParamLimits

0xc42f,	// (0x000103e3) popup_note_window_t2

0xc445,	// (0x000103f9) popup_note_window_t3_ParamLimits

0xc445,	// (0x000103f9) popup_note_window_t3

0xc45b,	// (0x0001040f) popup_note_window_t4_ParamLimits

0xc45b,	// (0x0001040f) popup_note_window_t4

0xc483,	// (0x00010437) popup_note_window_t5_ParamLimits

0xc483,	// (0x00010437) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001354f) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001354f) popup_note_window_t

0xc4a7,	// (0x0001045b) bg_popup_window_pane_cp6_ParamLimits

0xc4a7,	// (0x0001045b) bg_popup_window_pane_cp6

0xf091,	// (0x00013045) popup_note_image_window_g1_ParamLimits

0xf091,	// (0x00013045) popup_note_image_window_g1

0xf09d,	// (0x00013051) popup_note_image_window_g2_ParamLimits

0xf09d,	// (0x00013051) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0001380e) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0001380e) popup_note_image_window_g

0xf0b6,	// (0x0001306a) popup_note_image_window_t1_ParamLimits

0xf0b6,	// (0x0001306a) popup_note_image_window_t1

0xf0cf,	// (0x00013083) popup_note_image_window_t2_ParamLimits

0xf0cf,	// (0x00013083) popup_note_image_window_t2

0xf0e8,	// (0x0001309c) popup_note_image_window_t3_ParamLimits

0xf0e8,	// (0x0001309c) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00013813) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00013813) popup_note_image_window_t

0xef60,	// (0x00012f14) bg_popup_window_pane_cp7_ParamLimits

0xef60,	// (0x00012f14) bg_popup_window_pane_cp7

0xef90,	// (0x00012f44) popup_note_wait_window_g1_ParamLimits

0xef90,	// (0x00012f44) popup_note_wait_window_g1

0xef9c,	// (0x00012f50) popup_note_wait_window_g2_ParamLimits

0xef9c,	// (0x00012f50) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x000137fc) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x000137fc) popup_note_wait_window_g

0xefb4,	// (0x00012f68) popup_note_wait_window_t1_ParamLimits

0xefb4,	// (0x00012f68) popup_note_wait_window_t1

0xefdb,	// (0x00012f8f) popup_note_wait_window_t2_ParamLimits

0xefdb,	// (0x00012f8f) popup_note_wait_window_t2

0xeff8,	// (0x00012fac) popup_note_wait_window_t3_ParamLimits

0xeff8,	// (0x00012fac) popup_note_wait_window_t3

0xf00b,	// (0x00012fbf) popup_note_wait_window_t4_ParamLimits

0xf00b,	// (0x00012fbf) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00013803) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00013803) popup_note_wait_window_t

0xf030,	// (0x00012fe4) wait_bar_pane_ParamLimits

0xf030,	// (0x00012fe4) wait_bar_pane

0xc078,	// (0x0001002c) wait_anim_pane

0xc078,	// (0x0001002c) wait_border_pane

0xbf91,	// (0x0000ff45) wait_anim_pane_g1

0xbf91,	// (0x0000ff45) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x000136ce) wait_anim_pane_g

0xef10,	// (0x00012ec4) wait_border_pane_g1

0xef19,	// (0x00012ecd) wait_border_pane_g2

0xef22,	// (0x00012ed6) wait_border_pane_g3

0x0002,

0xf841,	// (0x000137f5) wait_border_pane_g

0xed80,	// (0x00012d34) bg_popup_window_pane_cp16_ParamLimits

0xed80,	// (0x00012d34) bg_popup_window_pane_cp16

0xee80,	// (0x00012e34) indicator_popup_pane_cp4_ParamLimits

0xee80,	// (0x00012e34) indicator_popup_pane_cp4

0xee94,	// (0x00012e48) popup_query_data_window_t1_ParamLimits

0xee94,	// (0x00012e48) popup_query_data_window_t1

0xeea6,	// (0x00012e5a) popup_query_data_window_t2_ParamLimits

0xeea6,	// (0x00012e5a) popup_query_data_window_t2

0xeebf,	// (0x00012e73) popup_query_data_window_t3_ParamLimits

0xeebf,	// (0x00012e73) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x000137ee) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x000137ee) popup_query_data_window_t

0xeed9,	// (0x00012e8d) query_popup_data_pane_ParamLimits

0xeed9,	// (0x00012e8d) query_popup_data_pane

0xeeed,	// (0x00012ea1) query_popup_data_pane_cp1_ParamLimits

0xeeed,	// (0x00012ea1) query_popup_data_pane_cp1

0xed80,	// (0x00012d34) bg_popup_window_pane_cp10_ParamLimits

0xed80,	// (0x00012d34) bg_popup_window_pane_cp10

0xedb2,	// (0x00012d66) indicator_popup_pane_ParamLimits

0xedb2,	// (0x00012d66) indicator_popup_pane

0xedd4,	// (0x00012d88) popup_query_code_window_t1_ParamLimits

0xedd4,	// (0x00012d88) popup_query_code_window_t1

0xedee,	// (0x00012da2) popup_query_code_window_t2_ParamLimits

0xedee,	// (0x00012da2) popup_query_code_window_t2

0xee37,	// (0x00012deb) popup_query_code_window_t3_ParamLimits

0xee37,	// (0x00012deb) popup_query_code_window_t3

0x0002,

0xf833,	// (0x000137e7) popup_query_code_window_t_ParamLimits

0xf833,	// (0x000137e7) popup_query_code_window_t

0xee66,	// (0x00012e1a) query_popup_pane_ParamLimits

0xee66,	// (0x00012e1a) query_popup_pane

0xc4a7,	// (0x0001045b) bg_popup_window_pane_cp15_ParamLimits

0xc4a7,	// (0x0001045b) bg_popup_window_pane_cp15

0xc4c5,	// (0x00010479) indicator_popup_pane_cp1_ParamLimits

0xc4c5,	// (0x00010479) indicator_popup_pane_cp1

0xc4d8,	// (0x0001048c) indicator_popup_pane_cp2_ParamLimits

0xc4d8,	// (0x0001048c) indicator_popup_pane_cp2

0xc4eb,	// (0x0001049f) popup_query_data_code_window_g1_ParamLimits

0xc4eb,	// (0x0001049f) popup_query_data_code_window_g1

0xc4fe,	// (0x000104b2) popup_query_data_code_window_t1_ParamLimits

0xc4fe,	// (0x000104b2) popup_query_data_code_window_t1

0xc510,	// (0x000104c4) popup_query_data_code_window_t2_ParamLimits

0xc510,	// (0x000104c4) popup_query_data_code_window_t2

0xc522,	// (0x000104d6) popup_query_data_code_window_t3_ParamLimits

0xc522,	// (0x000104d6) popup_query_data_code_window_t3

0xc538,	// (0x000104ec) popup_query_data_code_window_t4_ParamLimits

0xc538,	// (0x000104ec) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001355a) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001355a) popup_query_data_code_window_t

0xaf01,	// (0x0000eeb5) list_single_midp_graphic_pane_g3

0xc550,	// (0x00010504) query_popup_data_pane_cp2_ParamLimits

0xc563,	// (0x00010517) query_popup_pane_cp2_ParamLimits

0xc563,	// (0x00010517) query_popup_pane_cp2

0xc078,	// (0x0001002c) bg_popup_window_pane_cp11

0xed78,	// (0x00012d2c) heading_pane_cp5

0xc673,	// (0x00010627) listscroll_popup_info_pane

0xc078,	// (0x0001002c) input_focus_pane_cp3

0xc576,	// (0x0001052a) query_popup_pane_t1

0xc584,	// (0x00010538) list_popup_info_pane_ParamLimits

0xc584,	// (0x00010538) list_popup_info_pane

0xc593,	// (0x00010547) listscroll_popup_info_pane_g1

0xc59b,	// (0x0001054f) scroll_pane_cp7

0xc5a3,	// (0x00010557) popup_info_list_pane_t1_ParamLimits

0xc5a3,	// (0x00010557) popup_info_list_pane_t1

0xc5bd,	// (0x00010571) popup_info_list_pane_t2_ParamLimits

0xc5bd,	// (0x00010571) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00013563) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00013563) popup_info_list_pane_t

0xc078,	// (0x0001002c) bg_popup_window_pane_cp12

0x0db8,	// (0x00004d6c) find_popup_pane

0xc158,	// (0x0001010c) bg_popup_window_pane_cp3

0xc5d7,	// (0x0001058b) heading_pane_cp3

0xc5e3,	// (0x00010597) listscroll_popup_graphic_pane

0xc078,	// (0x0001002c) bg_popup_window_pane_cp4

0xc66b,	// (0x0001061f) heading_pane_cp4

0xc673,	// (0x00010627) listscroll_popup_colour_pane

0xc67b,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc67b,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane

0xc68b,	// (0x0001063f) grid_large_graphic_colour_popup_pane_ParamLimits

0xc68b,	// (0x0001063f) grid_large_graphic_colour_popup_pane

0xc6a7,	// (0x0001065b) listscroll_popup_colour_pane_g1_ParamLimits

0xc6a7,	// (0x0001065b) listscroll_popup_colour_pane_g1

0xc6be,	// (0x00010672) listscroll_popup_colour_pane_g2_ParamLimits

0xc6be,	// (0x00010672) listscroll_popup_colour_pane_g2

0xc6d2,	// (0x00010686) listscroll_popup_colour_pane_g3_ParamLimits

0xc6d2,	// (0x00010686) listscroll_popup_colour_pane_g3

0xc6e2,	// (0x00010696) listscroll_popup_colour_pane_g4_ParamLimits

0xc6e2,	// (0x00010696) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00013568) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00013568) listscroll_popup_colour_pane_g

0xc6f1,	// (0x000106a5) scroll_pane_cp6_ParamLimits

0xc6f1,	// (0x000106a5) scroll_pane_cp6

0xc703,	// (0x000106b7) cell_large_graphic_colour_popup_pane_ParamLimits

0xc703,	// (0x000106b7) cell_large_graphic_colour_popup_pane

0xc722,	// (0x000106d6) cell_large_graphic_colour_none_popup_pane_t1

0xc078,	// (0x0001002c) grid_highlight_pane_cp5

0xc731,	// (0x000106e5) cell_large_graphic_colour_popup_pane_g1

0xc739,	// (0x000106ed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00013571) cell_large_graphic_colour_popup_pane_g

0xc741,	// (0x000106f5) cell_large_graphic_colour_popup_pane_g2_copy1

0xc74a,	// (0x000106fe) grid_highlight_pane_cp4

0xc752,	// (0x00010706) bg_popup_window_pane_cp8_ParamLimits

0xc752,	// (0x00010706) bg_popup_window_pane_cp8

0xc76d,	// (0x00010721) popup_snote_single_text_window_g1_ParamLimits

0xc76d,	// (0x00010721) popup_snote_single_text_window_g1

0xc77f,	// (0x00010733) popup_snote_single_text_window_t1_ParamLimits

0xc77f,	// (0x00010733) popup_snote_single_text_window_t1

0xc792,	// (0x00010746) popup_snote_single_text_window_t2_ParamLimits

0xc792,	// (0x00010746) popup_snote_single_text_window_t2

0xc7a5,	// (0x00010759) popup_snote_single_text_window_t3_ParamLimits

0xc7a5,	// (0x00010759) popup_snote_single_text_window_t3

0xc7de,	// (0x00010792) popup_snote_single_text_window_t4_ParamLimits

0xc7de,	// (0x00010792) popup_snote_single_text_window_t4

0xc812,	// (0x000107c6) popup_snote_single_text_window_t5_ParamLimits

0xc812,	// (0x000107c6) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00013576) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00013576) popup_snote_single_text_window_t

0xc841,	// (0x000107f5) bg_popup_window_pane_cp9_ParamLimits

0xc841,	// (0x000107f5) bg_popup_window_pane_cp9

0xc76d,	// (0x00010721) popup_snote_single_graphic_window_g1_ParamLimits

0xc76d,	// (0x00010721) popup_snote_single_graphic_window_g1

0xc84f,	// (0x00010803) popup_snote_single_graphic_window_g2_ParamLimits

0xc84f,	// (0x00010803) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00013581) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00013581) popup_snote_single_graphic_window_g

0xc85b,	// (0x0001080f) popup_snote_single_graphic_window_t1_ParamLimits

0xc85b,	// (0x0001080f) popup_snote_single_graphic_window_t1

0xc86e,	// (0x00010822) popup_snote_single_graphic_window_t2_ParamLimits

0xc86e,	// (0x00010822) popup_snote_single_graphic_window_t2

0xc7a5,	// (0x00010759) popup_snote_single_graphic_window_t3_ParamLimits

0xc7a5,	// (0x00010759) popup_snote_single_graphic_window_t3

0xc7de,	// (0x00010792) popup_snote_single_graphic_window_t4_ParamLimits

0xc7de,	// (0x00010792) popup_snote_single_graphic_window_t4

0xc812,	// (0x000107c6) popup_snote_single_graphic_window_t5_ParamLimits

0xc812,	// (0x000107c6) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00013586) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00013586) popup_snote_single_graphic_window_t

0x0c6d,	// (0x00004c21) grid_graphic_popup_pane_ParamLimits

0x0c6d,	// (0x00004c21) grid_graphic_popup_pane

0x0c90,	// (0x00004c44) listscroll_popup_graphic_pane_g1_ParamLimits

0x0c90,	// (0x00004c44) listscroll_popup_graphic_pane_g1

0x0ca4,	// (0x00004c58) listscroll_popup_graphic_pane_g2_ParamLimits

0x0ca4,	// (0x00004c58) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00013964) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00013964) listscroll_popup_graphic_pane_g

0x0cb8,	// (0x00004c6c) scroll_pane_cp5

0x0c10,	// (0x00004bc4) cell_graphic_popup_pane_ParamLimits

0x0c10,	// (0x00004bc4) cell_graphic_popup_pane

0x0bf1,	// (0x00004ba5) cell_graphic_popup_pane_g1

0x0bf9,	// (0x00004bad) cell_graphic_popup_pane_g2

0xc741,	// (0x000106f5) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0001395d) cell_graphic_popup_pane_g

0x0c02,	// (0x00004bb6) cell_graphic_popup_pane_t2

0xc74a,	// (0x000106fe) grid_highlight_pane_cp3

0xc893,	// (0x00010847) list_gen_pane_ParamLimits

0xc893,	// (0x00010847) list_gen_pane

0xc8c4,	// (0x00010878) scroll_pane

0x0b71,	// (0x00004b25) bg_list_pane_g1_ParamLimits

0x0b71,	// (0x00004b25) bg_list_pane_g1

0x0b88,	// (0x00004b3c) bg_list_pane_g2_ParamLimits

0x0b88,	// (0x00004b3c) bg_list_pane_g2

0x0b9b,	// (0x00004b4f) bg_list_pane_g3_ParamLimits

0x0b9b,	// (0x00004b4f) bg_list_pane_g3

0x0bad,	// (0x00004b61) bg_list_pane_g4_ParamLimits

0x0bad,	// (0x00004b61) bg_list_pane_g4

0x0bbf,	// (0x00004b73) bg_list_pane_g5_ParamLimits

0x0bbf,	// (0x00004b73) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00013952) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00013952) bg_list_pane_g

0x0abc,	// (0x00004a70) list_double2_graphic_large_graphic_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double2_graphic_large_graphic_pane

0x0abc,	// (0x00004a70) list_double2_graphic_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double2_graphic_pane

0x0abc,	// (0x00004a70) list_double2_large_graphic_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double2_large_graphic_pane

0x0abc,	// (0x00004a70) list_double2_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double2_pane

0x0abc,	// (0x00004a70) list_double_graphic_heading_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_graphic_heading_pane

0x0abc,	// (0x00004a70) list_double_graphic_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_graphic_pane

0x0abc,	// (0x00004a70) list_double_heading_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_heading_pane

0x0abc,	// (0x00004a70) list_double_large_graphic_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_large_graphic_pane

0x0abc,	// (0x00004a70) list_double_number_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_number_pane

0x0abc,	// (0x00004a70) list_double_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_pane

0x0abc,	// (0x00004a70) list_double_time_pane_ParamLimits

0x0abc,	// (0x00004a70) list_double_time_pane

0x0abc,	// (0x00004a70) list_setting_number_pane_ParamLimits

0x0abc,	// (0x00004a70) list_setting_number_pane

0x0abc,	// (0x00004a70) list_setting_pane_ParamLimits

0x0abc,	// (0x00004a70) list_setting_pane

0x0b07,	// (0x00004abb) list_single_2graphic_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_2graphic_pane

0x0b07,	// (0x00004abb) list_single_graphic_heading_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_graphic_heading_pane

0x0b07,	// (0x00004abb) list_single_graphic_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_graphic_pane

0x0b07,	// (0x00004abb) list_single_heading_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_heading_pane

0x0b5b,	// (0x00004b0f) list_single_large_graphic_pane_ParamLimits

0x0b5b,	// (0x00004b0f) list_single_large_graphic_pane

0x0b07,	// (0x00004abb) list_single_number_heading_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_number_heading_pane

0x0b07,	// (0x00004abb) list_single_number_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_number_pane

0x0b07,	// (0x00004abb) list_single_pane_ParamLimits

0x0b07,	// (0x00004abb) list_single_pane

0xc078,	// (0x0001002c) list_highlight_pane_cp1

0xc905,	// (0x000108b9) list_single_pane_g1_ParamLimits

0xc905,	// (0x000108b9) list_single_pane_g1

0xc911,	// (0x000108c5) list_single_pane_g2_ParamLimits

0xc911,	// (0x000108c5) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00013598) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00013598) list_single_pane_g

0x0a87,	// (0x00004a3b) list_single_pane_t1_ParamLimits

0x0a87,	// (0x00004a3b) list_single_pane_t1

0xc905,	// (0x000108b9) list_single_number_pane_g1_ParamLimits

0xc905,	// (0x000108b9) list_single_number_pane_g1

0xc911,	// (0x000108c5) list_single_number_pane_g2_ParamLimits

0xc911,	// (0x000108c5) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00013598) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00013598) list_single_number_pane_g

0xc91d,	// (0x000108d1) list_single_number_pane_t1_ParamLimits

0xc91d,	// (0x000108d1) list_single_number_pane_t1

0x0802,	// (0x000047b6) list_single_number_pane_t2_ParamLimits

0x0802,	// (0x000047b6) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00013913) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00013913) list_single_number_pane_t

0xc8f9,	// (0x000108ad) list_single_graphic_pane_g1_ParamLimits

0xc8f9,	// (0x000108ad) list_single_graphic_pane_g1

0xc905,	// (0x000108b9) list_single_graphic_pane_g2_ParamLimits

0xc905,	// (0x000108b9) list_single_graphic_pane_g2

0xc911,	// (0x000108c5) list_single_graphic_pane_g3_ParamLimits

0xc911,	// (0x000108c5) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00013591) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00013591) list_single_graphic_pane_g

0xc91d,	// (0x000108d1) list_single_graphic_pane_t1_ParamLimits

0xc91d,	// (0x000108d1) list_single_graphic_pane_t1

0xc905,	// (0x000108b9) list_single_heading_pane_g1_ParamLimits

0xc905,	// (0x000108b9) list_single_heading_pane_g1

0xc911,	// (0x000108c5) list_single_heading_pane_g2_ParamLimits

0xc911,	// (0x000108c5) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00013598) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00013598) list_single_heading_pane_g

0xc933,	// (0x000108e7) list_single_heading_pane_t1_ParamLimits

0xc933,	// (0x000108e7) list_single_heading_pane_t1

0xc949,	// (0x000108fd) list_single_heading_pane_t2_ParamLimits

0xc949,	// (0x000108fd) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001359d) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001359d) list_single_heading_pane_t

0xc905,	// (0x000108b9) list_single_number_heading_pane_g1_ParamLimits

0xc905,	// (0x000108b9) list_single_number_heading_pane_g1

0xc911,	// (0x000108c5) list_single_number_heading_pane_g2_ParamLimits

0xc911,	// (0x000108c5) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00013598) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00013598) list_single_number_heading_pane_g

0xc933,	// (0x000108e7) list_single_number_heading_pane_t1_ParamLimits

0xc933,	// (0x000108e7) list_single_number_heading_pane_t1

0xc95b,	// (0x0001090f) list_single_number_heading_pane_t2_ParamLimits

0xc95b,	// (0x0001090f) list_single_number_heading_pane_t2

0xc96d,	// (0x00010921) list_single_number_heading_pane_t3_ParamLimits

0xc96d,	// (0x00010921) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000135a2) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000135a2) list_single_number_heading_pane_t

0xc8f9,	// (0x000108ad) list_single_graphic_heading_pane_g1_ParamLimits

0xc8f9,	// (0x000108ad) list_single_graphic_heading_pane_g1

0xc97f,	// (0x00010933) list_single_graphic_heading_pane_g4_ParamLimits

0xc97f,	// (0x00010933) list_single_graphic_heading_pane_g4

0xc911,	// (0x000108c5) list_single_graphic_heading_pane_g5_ParamLimits

0xc911,	// (0x000108c5) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x000135a9) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x000135a9) list_single_graphic_heading_pane_g

0xc933,	// (0x000108e7) list_single_graphic_heading_pane_t1_ParamLimits

0xc933,	// (0x000108e7) list_single_graphic_heading_pane_t1

0xc98e,	// (0x00010942) list_single_graphic_heading_pane_t2_ParamLimits

0xc98e,	// (0x00010942) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x000135b0) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x000135b0) list_single_graphic_heading_pane_t

0xc9a0,	// (0x00010954) list_single_large_graphic_pane_g1_ParamLimits

0xc9a0,	// (0x00010954) list_single_large_graphic_pane_g1

0xc9ac,	// (0x00010960) list_single_large_graphic_pane_g2_ParamLimits

0xc9ac,	// (0x00010960) list_single_large_graphic_pane_g2

0xc9b8,	// (0x0001096c) list_single_large_graphic_pane_g3_ParamLimits

0xc9b8,	// (0x0001096c) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x000135b5) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000135b5) list_single_large_graphic_pane_g

0xef19,	// (0x00012ecd) wait_border_pane_g2_copy1

0xc9c4,	// (0x00010978) list_single_large_graphic_pane_g4_cp2

0xc9cc,	// (0x00010980) list_single_large_graphic_pane_t1_ParamLimits

0xc9cc,	// (0x00010980) list_single_large_graphic_pane_t1

0xc9e2,	// (0x00010996) list_double_pane_g1_ParamLimits

0xc9e2,	// (0x00010996) list_double_pane_g1

0xc9ee,	// (0x000109a2) list_double_pane_g2_ParamLimits

0xc9ee,	// (0x000109a2) list_double_pane_g2

0x0001,

0xf608,	// (0x000135bc) list_double_pane_g_ParamLimits

0xf608,	// (0x000135bc) list_double_pane_g

0xc9fa,	// (0x000109ae) list_double_pane_t1_ParamLimits

0xc9fa,	// (0x000109ae) list_double_pane_t1

0xca10,	// (0x000109c4) list_double_pane_t2_ParamLimits

0xca10,	// (0x000109c4) list_double_pane_t2

0x0001,

0xf60d,	// (0x000135c1) list_double_pane_t_ParamLimits

0xf60d,	// (0x000135c1) list_double_pane_t

0xca22,	// (0x000109d6) list_double2_pane_g1_ParamLimits

0xca22,	// (0x000109d6) list_double2_pane_g1

0xca31,	// (0x000109e5) list_double2_pane_g2_ParamLimits

0xca31,	// (0x000109e5) list_double2_pane_g2

0x0001,

0xf612,	// (0x000135c6) list_double2_pane_g_ParamLimits

0xf612,	// (0x000135c6) list_double2_pane_g

0xca3d,	// (0x000109f1) list_double2_pane_t1_ParamLimits

0xca3d,	// (0x000109f1) list_double2_pane_t1

0xca53,	// (0x00010a07) list_double2_pane_t2_ParamLimits

0xca53,	// (0x00010a07) list_double2_pane_t2

0x0001,

0xf617,	// (0x000135cb) list_double2_pane_t_ParamLimits

0xf617,	// (0x000135cb) list_double2_pane_t

0xc9e2,	// (0x00010996) list_double_number_pane_g1_ParamLimits

0xc9e2,	// (0x00010996) list_double_number_pane_g1

0xc9ee,	// (0x000109a2) list_double_number_pane_g2_ParamLimits

0xc9ee,	// (0x000109a2) list_double_number_pane_g2

0x0001,

0xf608,	// (0x000135bc) list_double_number_pane_g_ParamLimits

0xf608,	// (0x000135bc) list_double_number_pane_g

0xca65,	// (0x00010a19) list_double_number_pane_t1_ParamLimits

0xca65,	// (0x00010a19) list_double_number_pane_t1

0xca77,	// (0x00010a2b) list_double_number_pane_t2_ParamLimits

0xca77,	// (0x00010a2b) list_double_number_pane_t2

0xca8d,	// (0x00010a41) list_double_number_pane_t3_ParamLimits

0xca8d,	// (0x00010a41) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x000135d0) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x000135d0) list_double_number_pane_t

0xca9f,	// (0x00010a53) list_double_graphic_pane_g1_ParamLimits

0xca9f,	// (0x00010a53) list_double_graphic_pane_g1

0xcaab,	// (0x00010a5f) list_double_graphic_pane_g2_ParamLimits

0xcaab,	// (0x00010a5f) list_double_graphic_pane_g2

0xcaba,	// (0x00010a6e) list_double_graphic_pane_g3_ParamLimits

0xcaba,	// (0x00010a6e) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x000135d7) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x000135d7) list_double_graphic_pane_g

0xcad2,	// (0x00010a86) list_double_graphic_pane_t1_ParamLimits

0xcad2,	// (0x00010a86) list_double_graphic_pane_t1

0xcae8,	// (0x00010a9c) list_double_graphic_pane_t2_ParamLimits

0xcae8,	// (0x00010a9c) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x000135e0) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x000135e0) list_double_graphic_pane_t

0xcafa,	// (0x00010aae) list_double2_graphic_pane_g1_ParamLimits

0xcafa,	// (0x00010aae) list_double2_graphic_pane_g1

0xcb06,	// (0x00010aba) list_double2_graphic_pane_g2_ParamLimits

0xcb06,	// (0x00010aba) list_double2_graphic_pane_g2

0xca31,	// (0x000109e5) list_double2_graphic_pane_g3_ParamLimits

0xca31,	// (0x000109e5) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x000135e5) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x000135e5) list_double2_graphic_pane_g

0xcb12,	// (0x00010ac6) list_double2_graphic_pane_t1_ParamLimits

0xcb12,	// (0x00010ac6) list_double2_graphic_pane_t1

0xcb28,	// (0x00010adc) list_double2_graphic_pane_t2_ParamLimits

0xcb28,	// (0x00010adc) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x000135ec) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x000135ec) list_double2_graphic_pane_t

0xcb3a,	// (0x00010aee) list_double_large_graphic_pane_g1_ParamLimits

0xcb3a,	// (0x00010aee) list_double_large_graphic_pane_g1

0xcb63,	// (0x00010b17) list_double_large_graphic_pane_g2_ParamLimits

0xcb63,	// (0x00010b17) list_double_large_graphic_pane_g2

0xc9ee,	// (0x000109a2) list_double_large_graphic_pane_g3_ParamLimits

0xc9ee,	// (0x000109a2) list_double_large_graphic_pane_g3

0xcb72,	// (0x00010b26) list_double_large_graphic_pane_g4_ParamLimits

0xcb72,	// (0x00010b26) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x000135f1) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x000135f1) list_double_large_graphic_pane_g

0xcb98,	// (0x00010b4c) list_double_large_graphic_pane_t1_ParamLimits

0xcb98,	// (0x00010b4c) list_double_large_graphic_pane_t1

0xcbb1,	// (0x00010b65) list_double_large_graphic_pane_t2_ParamLimits

0xcbb1,	// (0x00010b65) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x000135fc) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x000135fc) list_double_large_graphic_pane_t

0xcbc3,	// (0x00010b77) list_double2_large_graphic_pane_g1_ParamLimits

0xcbc3,	// (0x00010b77) list_double2_large_graphic_pane_g1

0xca22,	// (0x000109d6) list_double2_large_graphic_pane_g2_ParamLimits

0xca22,	// (0x000109d6) list_double2_large_graphic_pane_g2

0xca31,	// (0x000109e5) list_double2_large_graphic_pane_g3_ParamLimits

0xca31,	// (0x000109e5) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00013601) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00013601) list_double2_large_graphic_pane_g

0xcbcf,	// (0x00010b83) list_double2_large_graphic_pane_t1_ParamLimits

0xcbcf,	// (0x00010b83) list_double2_large_graphic_pane_t1

0xcbe5,	// (0x00010b99) list_double2_large_graphic_pane_t2_ParamLimits

0xcbe5,	// (0x00010b99) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00013608) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00013608) list_double2_large_graphic_pane_t

0xcbf7,	// (0x00010bab) list_double_heading_pane_g1_ParamLimits

0xcbf7,	// (0x00010bab) list_double_heading_pane_g1

0xcc06,	// (0x00010bba) list_double_heading_pane_g2_ParamLimits

0xcc06,	// (0x00010bba) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001360d) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001360d) list_double_heading_pane_g

0xcc12,	// (0x00010bc6) list_double_heading_pane_t1_ParamLimits

0xcc12,	// (0x00010bc6) list_double_heading_pane_t1

0xca53,	// (0x00010a07) list_double_heading_pane_t2_ParamLimits

0xca53,	// (0x00010a07) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00013612) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00013612) list_double_heading_pane_t

0xca9f,	// (0x00010a53) list_double_graphic_heading_pane_g1_ParamLimits

0xca9f,	// (0x00010a53) list_double_graphic_heading_pane_g1

0xcbf7,	// (0x00010bab) list_double_graphic_heading_pane_g2_ParamLimits

0xcbf7,	// (0x00010bab) list_double_graphic_heading_pane_g2

0xcc06,	// (0x00010bba) list_double_graphic_heading_pane_g3_ParamLimits

0xcc06,	// (0x00010bba) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00013617) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00013617) list_double_graphic_heading_pane_g

0xcc28,	// (0x00010bdc) list_double_graphic_heading_pane_t1_ParamLimits

0xcc28,	// (0x00010bdc) list_double_graphic_heading_pane_t1

0xcb28,	// (0x00010adc) list_double_graphic_heading_pane_t2_ParamLimits

0xcb28,	// (0x00010adc) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001361e) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001361e) list_double_graphic_heading_pane_t

0xcb63,	// (0x00010b17) list_double_time_pane_g1_ParamLimits

0xcb63,	// (0x00010b17) list_double_time_pane_g1

0xc9ee,	// (0x000109a2) list_double_time_pane_g2_ParamLimits

0xc9ee,	// (0x000109a2) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00013623) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00013623) list_double_time_pane_g

0xcc3e,	// (0x00010bf2) list_double_time_pane_t1_ParamLimits

0xcc3e,	// (0x00010bf2) list_double_time_pane_t1

0xcc54,	// (0x00010c08) list_double_time_pane_t2_ParamLimits

0xcc54,	// (0x00010c08) list_double_time_pane_t2

0xcc66,	// (0x00010c1a) list_double_time_pane_t3_ParamLimits

0xcc66,	// (0x00010c1a) list_double_time_pane_t3

0xcc78,	// (0x00010c2c) list_double_time_pane_t4_ParamLimits

0xcc78,	// (0x00010c2c) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00013628) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00013628) list_double_time_pane_t

0xcb06,	// (0x00010aba) list_setting_pane_g1_ParamLimits

0xcb06,	// (0x00010aba) list_setting_pane_g1

0xca31,	// (0x000109e5) list_setting_pane_g2_ParamLimits

0xca31,	// (0x000109e5) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00013631) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00013631) list_setting_pane_g

0xcc8a,	// (0x00010c3e) list_setting_pane_t1_ParamLimits

0xcc8a,	// (0x00010c3e) list_setting_pane_t1

0xcca1,	// (0x00010c55) list_setting_pane_t2_ParamLimits

0xcca1,	// (0x00010c55) list_setting_pane_t2

0x0002,

0xf682,	// (0x00013636) list_setting_pane_t_ParamLimits

0xf682,	// (0x00013636) list_setting_pane_t

0xccde,	// (0x00010c92) set_value_pane_cp_ParamLimits

0xccde,	// (0x00010c92) set_value_pane_cp

0xcb06,	// (0x00010aba) list_setting_number_pane_g1_ParamLimits

0xcb06,	// (0x00010aba) list_setting_number_pane_g1

0xca31,	// (0x000109e5) list_setting_number_pane_g2_ParamLimits

0xca31,	// (0x000109e5) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x00013631) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x00013631) list_setting_number_pane_g

0xccea,	// (0x00010c9e) list_setting_number_pane_t1_ParamLimits

0xccea,	// (0x00010c9e) list_setting_number_pane_t1

0xccfc,	// (0x00010cb0) list_setting_number_pane_t2_ParamLimits

0xccfc,	// (0x00010cb0) list_setting_number_pane_t2

0xcd13,	// (0x00010cc7) list_setting_number_pane_t3_ParamLimits

0xcd13,	// (0x00010cc7) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001363d) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001363d) list_setting_number_pane_t

0xccde,	// (0x00010c92) set_value_pane_ParamLimits

0xccde,	// (0x00010c92) set_value_pane

0xcd54,	// (0x00010d08) bg_set_opt_pane_ParamLimits

0xcd54,	// (0x00010d08) bg_set_opt_pane

0xcd75,	// (0x00010d29) set_value_pane_t1

0xcd83,	// (0x00010d37) slider_set_pane_cp3

0xcd8c,	// (0x00010d40) volume_small_pane_cp

0xcd95,	// (0x00010d49) list_form_gen_pane

0xc8e8,	// (0x0001089c) scroll_pane_cp8

0xcdae,	// (0x00010d62) form_field_data_pane_ParamLimits

0xcdae,	// (0x00010d62) form_field_data_pane

0xcdce,	// (0x00010d82) form_field_data_wide_pane_ParamLimits

0xcdce,	// (0x00010d82) form_field_data_wide_pane

0xcded,	// (0x00010da1) form_field_popup_pane_ParamLimits

0xcded,	// (0x00010da1) form_field_popup_pane

0xce05,	// (0x00010db9) form_field_popup_wide_pane_ParamLimits

0xce05,	// (0x00010db9) form_field_popup_wide_pane

0xce1c,	// (0x00010dd0) form_field_slider_pane_ParamLimits

0xce1c,	// (0x00010dd0) form_field_slider_pane

0xce2f,	// (0x00010de3) form_field_slider_wide_pane_ParamLimits

0xce2f,	// (0x00010de3) form_field_slider_wide_pane

0xce42,	// (0x00010df6) data_form_pane

0xce56,	// (0x00010e0a) form_field_data_pane_t1

0xce6e,	// (0x00010e22) input_focus_pane

0xce7c,	// (0x00010e30) data_form_wide_pane

0xcea8,	// (0x00010e5c) form_field_data_wide_pane_t1

0xc75f,	// (0x00010713) input_focus_pane_cp6

0xceca,	// (0x00010e7e) form_field_popup_pane_t1

0xce6e,	// (0x00010e22) input_focus_pane_cp7

0xce42,	// (0x00010df6) list_form_pane

0xceea,	// (0x00010e9e) form_field_popup_wide_pane_t1

0xce6e,	// (0x00010e22) input_focus_pane_cp8

0xceff,	// (0x00010eb3) list_form_wide_pane

0xcf16,	// (0x00010eca) form_field_slider_pane_t1_ParamLimits

0xcf16,	// (0x00010eca) form_field_slider_pane_t1

0xcf2c,	// (0x00010ee0) form_field_slider_pane_t2_ParamLimits

0xcf2c,	// (0x00010ee0) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001364d) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001364d) form_field_slider_pane_t

0xc3f1,	// (0x000103a5) input_focus_pane_cp9_ParamLimits

0xc3f1,	// (0x000103a5) input_focus_pane_cp9

0xcf3e,	// (0x00010ef2) slider_cont_pane_ParamLimits

0xcf3e,	// (0x00010ef2) slider_cont_pane

0xcf52,	// (0x00010f06) form_field_slider_wide_pane_t1_ParamLimits

0xcf52,	// (0x00010f06) form_field_slider_wide_pane_t1

0xcf64,	// (0x00010f18) form_field_slider_wide_pane_t2_ParamLimits

0xcf64,	// (0x00010f18) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x00013652) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x00013652) form_field_slider_wide_pane_t

0xc3f1,	// (0x000103a5) input_focus_pane_cp10_ParamLimits

0xc3f1,	// (0x000103a5) input_focus_pane_cp10

0xcf76,	// (0x00010f2a) slider_cont_pane_cp1_ParamLimits

0xcf76,	// (0x00010f2a) slider_cont_pane_cp1

0xcf8c,	// (0x00010f40) slider_form_pane_cp

0xcf94,	// (0x00010f48) input_focus_pane_g1

0xcf9c,	// (0x00010f50) input_focus_pane_g2

0xcfa4,	// (0x00010f58) input_focus_pane_g3

0xcfac,	// (0x00010f60) input_focus_pane_g4

0xcfb4,	// (0x00010f68) input_focus_pane_g5

0xcfbc,	// (0x00010f70) input_focus_pane_g6

0xcfc4,	// (0x00010f78) input_focus_pane_g7

0xcfcc,	// (0x00010f80) input_focus_pane_g8

0xcfd4,	// (0x00010f88) input_focus_pane_g9

0xbf91,	// (0x0000ff45) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x00013657) input_focus_pane_g

0xef22,	// (0x00012ed6) wait_border_pane_g3_copy1

0xcfdc,	// (0x00010f90) data_form_pane_t1

0xbf91,	// (0x0000ff45) wait_anim_pane_g1_copy1

0x0a6d,	// (0x00004a21) data_form_wide_pane_t1

0xcff6,	// (0x00010faa) list_form_graphic_pane_cp_ParamLimits

0xcff6,	// (0x00010faa) list_form_graphic_pane_cp

0x0a3a,	// (0x000049ee) slider_form_pane_g1

0x0a43,	// (0x000049f7) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00013943) slider_form_pane_g

0xd00b,	// (0x00010fbf) list_form_graphic_pane_ParamLimits

0xd00b,	// (0x00010fbf) list_form_graphic_pane

0xd021,	// (0x00010fd5) list_form_graphic_pane_g1

0xd029,	// (0x00010fdd) list_form_graphic_pane_t1_ParamLimits

0xd029,	// (0x00010fdd) list_form_graphic_pane_t1

0xc158,	// (0x0001010c) list_highlight_pane_cp5_ParamLimits

0xc158,	// (0x0001010c) list_highlight_pane_cp5

0xd03e,	// (0x00010ff2) find_pane_g1

0xd047,	// (0x00010ffb) input_find_pane

0xd050,	// (0x00011004) input_find_pane_g1_ParamLimits

0xd050,	// (0x00011004) input_find_pane_g1

0xd05c,	// (0x00011010) input_find_pane_t1_ParamLimits

0xd05c,	// (0x00011010) input_find_pane_t1

0xd071,	// (0x00011025) input_find_pane_t2_ParamLimits

0xd071,	// (0x00011025) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001366c) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001366c) input_find_pane_t

0xd086,	// (0x0001103a) input_focus_pane_cp5_ParamLimits

0xd086,	// (0x0001103a) input_focus_pane_cp5

0xc3f1,	// (0x000103a5) bg_popup_window_pane_cp2_ParamLimits

0xc3f1,	// (0x000103a5) bg_popup_window_pane_cp2

0xd0a0,	// (0x00011054) listscroll_menu_pane_ParamLimits

0xd0a0,	// (0x00011054) listscroll_menu_pane

0xd0ac,	// (0x00011060) popup_submenu_window_ParamLimits

0xd0ac,	// (0x00011060) popup_submenu_window

0xd0d0,	// (0x00011084) find_popup_pane_g1

0xd0d8,	// (0x0001108c) input_popup_find_pane_cp

0xd086,	// (0x0001103a) input_focus_pane_cp4_ParamLimits

0xd086,	// (0x0001103a) input_focus_pane_cp4

0xd0ee,	// (0x000110a2) input_popup_find_pane_t1_ParamLimits

0xd0ee,	// (0x000110a2) input_popup_find_pane_t1

0xc078,	// (0x0001002c) bg_popup_sub_pane_cp

0xd11c,	// (0x000110d0) listscroll_popup_sub_pane

0xd124,	// (0x000110d8) list_submenu_pane_ParamLimits

0xd124,	// (0x000110d8) list_submenu_pane

0xd135,	// (0x000110e9) scroll_pane_cp4

0xd13d,	// (0x000110f1) list_single_popup_submenu_pane_ParamLimits

0xd13d,	// (0x000110f1) list_single_popup_submenu_pane

0xd151,	// (0x00011105) list_single_popup_submenu_pane_g1

0xd159,	// (0x0001110d) list_single_popup_submenu_pane_t1_ParamLimits

0xd159,	// (0x0001110d) list_single_popup_submenu_pane_t1

0xc158,	// (0x0001010c) bg_active_tab_pane_cp1_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp1

0xd16e,	// (0x00011122) tabs_2_active_pane_g1

0xd176,	// (0x0001112a) tabs_2_active_pane_t1

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp1_ParamLimits

0xc158,	// (0x0001010c) bg_passive_tab_pane_cp1

0xd16e,	// (0x00011122) tabs_2_passive_pane_g1

0xd176,	// (0x0001112a) tabs_2_passive_pane_t1

0xd188,	// (0x0001113c) bg_active_tab_pane_cp4

0xd196,	// (0x0001114a) tabs_2_long_active_pane_t1

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp4

0xaf09,	// (0x0000eebd) list_single_midp_graphic_pane_g4_ParamLimits

0xd188,	// (0x0001113c) bg_active_tab_pane_cp5

0xd1b5,	// (0x00011169) tabs_3_long_active_pane_t1

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp5

0xaf09,	// (0x0000eebd) list_single_midp_graphic_pane_g4

0xc158,	// (0x0001010c) bg_popup_window_pane_cp13_ParamLimits

0xc158,	// (0x0001010c) bg_popup_window_pane_cp13

0xd1d0,	// (0x00011184) listscroll_popup_fast_pane_ParamLimits

0xd1d0,	// (0x00011184) listscroll_popup_fast_pane

0xd1df,	// (0x00011193) grid_popup_fast_pane_ParamLimits

0xd1df,	// (0x00011193) grid_popup_fast_pane

0xd1f1,	// (0x000111a5) scroll_pane_cp9_ParamLimits

0xd1f1,	// (0x000111a5) scroll_pane_cp9

0x29e1,	// (0x00006995) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x29e1,	// (0x00006995) list_single_graphic_hl_pane_t1_cp2

0xd215,	// (0x000111c9) input_focus_pane_cp20_ParamLimits

0xd215,	// (0x000111c9) input_focus_pane_cp20

0xd223,	// (0x000111d7) query_popup_data_pane_t1_ParamLimits

0xd223,	// (0x000111d7) query_popup_data_pane_t1

0xd236,	// (0x000111ea) query_popup_data_pane_t2_ParamLimits

0xd236,	// (0x000111ea) query_popup_data_pane_t2

0xd27c,	// (0x00011230) query_popup_data_pane_t3_ParamLimits

0xd27c,	// (0x00011230) query_popup_data_pane_t3

0xd2bd,	// (0x00011271) query_popup_data_pane_t4_ParamLimits

0xd2bd,	// (0x00011271) query_popup_data_pane_t4

0xd2f9,	// (0x000112ad) query_popup_data_pane_t5_ParamLimits

0xd2f9,	// (0x000112ad) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x00013671) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x00013671) query_popup_data_pane_t

0xcf94,	// (0x00010f48) bg_set_opt_pane_g1

0xcf9c,	// (0x00010f50) bg_set_opt_pane_g2

0xcfa4,	// (0x00010f58) bg_set_opt_pane_g3

0xcfac,	// (0x00010f60) bg_set_opt_pane_g4

0xcfb4,	// (0x00010f68) bg_set_opt_pane_g5

0xcfbc,	// (0x00010f70) bg_set_opt_pane_g6

0xcfc4,	// (0x00010f78) bg_set_opt_pane_g7

0xcfcc,	// (0x00010f80) bg_set_opt_pane_g8

0xcfd4,	// (0x00010f88) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001367c) bg_set_opt_pane_g

0xab2c,	// (0x0000eae0) control_top_pane_stacon_ParamLimits

0xab2c,	// (0x0000eae0) control_top_pane_stacon

0xab7f,	// (0x0000eb33) signal_pane_stacon_ParamLimits

0xab7f,	// (0x0000eb33) signal_pane_stacon

0xd90e,	// (0x000118c2) stacon_top_pane_g1_ParamLimits

0xd90e,	// (0x000118c2) stacon_top_pane_g1

0xaba4,	// (0x0000eb58) title_pane_stacon_ParamLimits

0xaba4,	// (0x0000eb58) title_pane_stacon

0xabc6,	// (0x0000eb7a) uni_indicator_pane_stacon_ParamLimits

0xabc6,	// (0x0000eb7a) uni_indicator_pane_stacon

0xabdb,	// (0x0000eb8f) battery_pane_stacon_ParamLimits

0xabdb,	// (0x0000eb8f) battery_pane_stacon

0xac1b,	// (0x0000ebcf) control_bottom_pane_stacon_ParamLimits

0xac1b,	// (0x0000ebcf) control_bottom_pane_stacon

0xac3a,	// (0x0000ebee) navi_pane_stacon_ParamLimits

0xac3a,	// (0x0000ebee) navi_pane_stacon

0xd930,	// (0x000118e4) stacon_bottom_pane_g1_ParamLimits

0xd930,	// (0x000118e4) stacon_bottom_pane_g1

0xd330,	// (0x000112e4) aid_levels_signal_lsc_ParamLimits

0xd330,	// (0x000112e4) aid_levels_signal_lsc

0xa8f8,	// (0x0000e8ac) signal_pane_stacon_g1_ParamLimits

0xa8f8,	// (0x0000e8ac) signal_pane_stacon_g1

0xa904,	// (0x0000e8b8) signal_pane_stacon_g2_ParamLimits

0xa904,	// (0x0000e8b8) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001368f) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001368f) signal_pane_stacon_g

0xa938,	// (0x0000e8ec) title_pane_stacon_t1_ParamLimits

0xa938,	// (0x0000e8ec) title_pane_stacon_t1

0xd34a,	// (0x000112fe) uni_indicator_pane_stacon_g1

0xd354,	// (0x00011308) uni_indicator_pane_stacon_g2

0xd35e,	// (0x00011312) uni_indicator_pane_stacon_g3

0xd368,	// (0x0001131c) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001369b) uni_indicator_pane_stacon_g

0xa95d,	// (0x0000e911) control_top_pane_stacon_g1

0xa965,	// (0x0000e919) control_top_pane_stacon_t1_ParamLimits

0xa965,	// (0x0000e919) control_top_pane_stacon_t1

0xd372,	// (0x00011326) aid_levels_battery_lsc_ParamLimits

0xd372,	// (0x00011326) aid_levels_battery_lsc

0xa996,	// (0x0000e94a) battery_pane_stacon_g1_ParamLimits

0xa996,	// (0x0000e94a) battery_pane_stacon_g1

0xa9a2,	// (0x0000e956) battery_pane_stacon_g2_ParamLimits

0xa9a2,	// (0x0000e956) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000136a4) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000136a4) battery_pane_stacon_g

0xa9d1,	// (0x0000e985) navi_icon_pane_stacon

0xa9e1,	// (0x0000e995) navi_navi_pane_stacon

0xa9d1,	// (0x0000e985) navi_text_pane_stacon

0xa95d,	// (0x0000e911) control_bottom_pane_stacon_g1

0xa9f1,	// (0x0000e9a5) control_bottom_pane_stacon_t1_ParamLimits

0xa9f1,	// (0x0000e9a5) control_bottom_pane_stacon_t1

0xd39a,	// (0x0001134e) grid_app_pane_ParamLimits

0xd39a,	// (0x0001134e) grid_app_pane

0xd3b6,	// (0x0001136a) scroll_pane_cp15_ParamLimits

0xd3b6,	// (0x0001136a) scroll_pane_cp15

0xd3c9,	// (0x0001137d) cell_app_pane_ParamLimits

0xd3c9,	// (0x0001137d) cell_app_pane

0xd3eb,	// (0x0001139f) cell_app_pane_g1_ParamLimits

0xd3eb,	// (0x0001139f) cell_app_pane_g1

0xd40f,	// (0x000113c3) cell_app_pane_g2_ParamLimits

0xd40f,	// (0x000113c3) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000136a9) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000136a9) cell_app_pane_g

0xd41b,	// (0x000113cf) cell_app_pane_t1_ParamLimits

0xd41b,	// (0x000113cf) cell_app_pane_t1

0xd42d,	// (0x000113e1) grid_highlight_pane_ParamLimits

0xd42d,	// (0x000113e1) grid_highlight_pane

0xcf94,	// (0x00010f48) cell_highlight_pane_g1

0xcf9c,	// (0x00010f50) cell_highlight_pane_g2

0xcfa4,	// (0x00010f58) cell_highlight_pane_g3

0xcfac,	// (0x00010f60) cell_highlight_pane_g4

0xcfb4,	// (0x00010f68) cell_highlight_pane_g5

0xcfbc,	// (0x00010f70) cell_highlight_pane_g6

0xcfc4,	// (0x00010f78) cell_highlight_pane_g7

0xcfcc,	// (0x00010f80) cell_highlight_pane_g8

0xcfd4,	// (0x00010f88) cell_highlight_pane_g9

0xbf91,	// (0x0000ff45) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x00013657) cell_highlight_pane_g

0xd43e,	// (0x000113f2) bg_scroll_pane

0xaa35,	// (0x0000e9e9) scroll_handle_pane

0xd485,	// (0x00011439) scroll_bg_pane_g1

0xd49a,	// (0x0001144e) scroll_bg_pane_g2

0xd4b2,	// (0x00011466) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000136ae) scroll_bg_pane_g

0xd4c7,	// (0x0001147b) scroll_handle_focus_pane_ParamLimits

0xd4c7,	// (0x0001147b) scroll_handle_focus_pane

0xd485,	// (0x00011439) scroll_handle_pane_g1

0xd4d4,	// (0x00011488) scroll_handle_pane_g2

0xd4b2,	// (0x00011466) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x000136b5) scroll_handle_pane_g

0xd086,	// (0x0001103a) bg_popup_sub_pane_cp21_ParamLimits

0xd086,	// (0x0001103a) bg_popup_sub_pane_cp21

0xd4e8,	// (0x0001149c) popup_fep_japan_predictive_window_t1_ParamLimits

0xd4e8,	// (0x0001149c) popup_fep_japan_predictive_window_t1

0xd4ff,	// (0x000114b3) popup_fep_japan_predictive_window_t2_ParamLimits

0xd4ff,	// (0x000114b3) popup_fep_japan_predictive_window_t2

0xd532,	// (0x000114e6) popup_fep_japan_predictive_window_t3_ParamLimits

0xd532,	// (0x000114e6) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x000136bc) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x000136bc) popup_fep_japan_predictive_window_t

0xc078,	// (0x0001002c) bg_popup_sub_pane_cp23

0xd569,	// (0x0001151d) listscroll_japin_cand_pane

0xd571,	// (0x00011525) popup_fep_japan_candidate_window_t1

0xd57f,	// (0x00011533) candidate_pane_ParamLimits

0xd57f,	// (0x00011533) candidate_pane

0xd592,	// (0x00011546) scroll_pane_cp30

0xd59a,	// (0x0001154e) list_single_popup_jap_candidate_pane_ParamLimits

0xd59a,	// (0x0001154e) list_single_popup_jap_candidate_pane

0xc078,	// (0x0001002c) list_highlight_pane_cp30

0xd5af,	// (0x00011563) list_single_popup_jap_candidate_pane_t1

0xd5be,	// (0x00011572) level_1_signal

0xd5cb,	// (0x0001157f) level_2_signal

0xd5d8,	// (0x0001158c) level_3_signal

0xd5e5,	// (0x00011599) level_4_signal

0xd5f2,	// (0x000115a6) level_5_signal

0xd5ff,	// (0x000115b3) level_6_signal

0xd60c,	// (0x000115c0) level_7_signal

0xd5be,	// (0x00011572) level_1_battery

0xd5cb,	// (0x0001157f) level_2_battery

0xd5d8,	// (0x0001158c) level_3_battery

0xd5e5,	// (0x00011599) level_4_battery

0xd5f2,	// (0x000115a6) level_5_battery

0xd5ff,	// (0x000115b3) level_6_battery

0xd60c,	// (0x000115c0) level_7_battery

0xd631,	// (0x000115e5) list_menu_pane_ParamLimits

0xd631,	// (0x000115e5) list_menu_pane

0xd642,	// (0x000115f6) scroll_pane_cp25_ParamLimits

0xd642,	// (0x000115f6) scroll_pane_cp25

0xd65b,	// (0x0001160f) list_double2_graphic_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double2_graphic_pane_cp2

0xd65b,	// (0x0001160f) list_double2_large_graphic_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double2_large_graphic_pane_cp2

0xd65b,	// (0x0001160f) list_double2_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double2_pane_cp2

0xd65b,	// (0x0001160f) list_double_graphic_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double_graphic_pane_cp2

0xd65b,	// (0x0001160f) list_double_large_graphic_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double_large_graphic_pane_cp2

0xd65b,	// (0x0001160f) list_double_number_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double_number_pane_cp2

0xd65b,	// (0x0001160f) list_double_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double_pane_cp2

0xd66b,	// (0x0001161f) list_single_2graphic_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_2graphic_pane_cp2

0xd66b,	// (0x0001161f) list_single_graphic_heading_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_graphic_heading_pane_cp2

0xd66b,	// (0x0001161f) list_single_graphic_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_graphic_pane_cp2

0xd66b,	// (0x0001161f) list_single_heading_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_heading_pane_cp2

0xd680,	// (0x00011634) list_single_large_graphic_pane_cp2_ParamLimits

0xd680,	// (0x00011634) list_single_large_graphic_pane_cp2

0xd66b,	// (0x0001161f) list_single_number_heading_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_number_heading_pane_cp2

0xd66b,	// (0x0001161f) list_single_number_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_number_pane_cp2

0xd66b,	// (0x0001161f) list_single_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_pane_cp2

0xd6d7,	// (0x0001168b) bg_popup_sub_pane_cp22

0xaae4,	// (0x0000ea98) popup_side_volume_key_window_g1

0xab08,	// (0x0000eabc) popup_side_volume_key_window_t1

0xab24,	// (0x0000ead8) volume_small_pane_cp1

0xc3f1,	// (0x000103a5) bg_popup_sub_pane_cp24_ParamLimits

0xc3f1,	// (0x000103a5) bg_popup_sub_pane_cp24

0xd6ed,	// (0x000116a1) fep_china_uni_candidate_pane_ParamLimits

0xd6ed,	// (0x000116a1) fep_china_uni_candidate_pane

0xd701,	// (0x000116b5) fep_china_uni_entry_pane

0xd711,	// (0x000116c5) popup_fep_china_uni_window_g1

0xd72d,	// (0x000116e1) fep_china_uni_entry_pane_g1

0xd735,	// (0x000116e9) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x000136e9) fep_china_uni_entry_pane_g

0xd73d,	// (0x000116f1) fep_entry_item_pane

0xd747,	// (0x000116fb) fep_candidate_item_pane

0xd74f,	// (0x00011703) fep_china_uni_candidate_pane_g1

0xd757,	// (0x0001170b) fep_china_uni_candidate_pane_g2

0xd75f,	// (0x00011713) fep_china_uni_candidate_pane_g3

0xd767,	// (0x0001171b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x000136ee) fep_china_uni_candidate_pane_g

0xbf91,	// (0x0000ff45) fep_entry_item_pane_g1

0xd76f,	// (0x00011723) fep_entry_item_pane_t1_ParamLimits

0xd76f,	// (0x00011723) fep_entry_item_pane_t1

0xd785,	// (0x00011739) fep_candidate_item_pane_t1_ParamLimits

0xd785,	// (0x00011739) fep_candidate_item_pane_t1

0xd79a,	// (0x0001174e) fep_candidate_item_pane_t2_ParamLimits

0xd79a,	// (0x0001174e) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x000136f7) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x000136f7) fep_candidate_item_pane_t

0xc158,	// (0x0001010c) list_highlight_pane_cp31_ParamLimits

0xc158,	// (0x0001010c) list_highlight_pane_cp31

0xd7ac,	// (0x00011760) level_1_signal_lsc

0xd7b5,	// (0x00011769) level_2_signal_lsc

0xd7be,	// (0x00011772) level_3_signal_lsc

0xd7c7,	// (0x0001177b) level_4_signal_lsc

0xd7d0,	// (0x00011784) level_5_signal_lsc

0xd7d9,	// (0x0001178d) level_6_signal_lsc

0xd7e2,	// (0x00011796) level_7_signal_lsc

0xd7e2,	// (0x00011796) level_1_battery_lsc

0xd7eb,	// (0x0001179f) level_2_battery_lsc

0xd7f4,	// (0x000117a8) level_3_battery_lsc

0xd7fd,	// (0x000117b1) level_4_battery_lsc

0xd806,	// (0x000117ba) level_5_battery_lsc

0xd80f,	// (0x000117c3) level_6_battery_lsc

0xd7ac,	// (0x00011760) level_7_battery_lsc

0xd818,	// (0x000117cc) scroll_handle_focus_pane_g1

0xd821,	// (0x000117d5) scroll_handle_focus_pane_g2

0xd82a,	// (0x000117de) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x000136fc) scroll_handle_focus_pane_g

0xd833,	// (0x000117e7) list_single_2graphic_pane_g1_ParamLimits

0xd833,	// (0x000117e7) list_single_2graphic_pane_g1

0xc97f,	// (0x00010933) list_single_2graphic_pane_g2_ParamLimits

0xc97f,	// (0x00010933) list_single_2graphic_pane_g2

0xc911,	// (0x000108c5) list_single_2graphic_pane_g3_ParamLimits

0xc911,	// (0x000108c5) list_single_2graphic_pane_g3

0xd83f,	// (0x000117f3) list_single_2graphic_pane_g4_ParamLimits

0xd83f,	// (0x000117f3) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00013703) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00013703) list_single_2graphic_pane_g

0xd84b,	// (0x000117ff) list_single_2graphic_pane_t1_ParamLimits

0xd84b,	// (0x000117ff) list_single_2graphic_pane_t1

0xd879,	// (0x0001182d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd879,	// (0x0001182d) list_double2_graphic_large_graphic_pane_g1

0xca22,	// (0x000109d6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xca22,	// (0x000109d6) list_double2_graphic_large_graphic_pane_g2

0xca31,	// (0x000109e5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xca31,	// (0x000109e5) list_double2_graphic_large_graphic_pane_g3

0xd889,	// (0x0001183d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd889,	// (0x0001183d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001370c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001370c) list_double2_graphic_large_graphic_pane_g

0xd895,	// (0x00011849) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd895,	// (0x00011849) list_double2_graphic_large_graphic_pane_t1

0xd8ab,	// (0x0001185f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd8ab,	// (0x0001185f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00013715) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00013715) list_double2_graphic_large_graphic_pane_t

0xd9d7,	// (0x0001198b) popup_fast_swap_window_ParamLimits

0xd9d7,	// (0x0001198b) popup_fast_swap_window

0xd9f3,	// (0x000119a7) popup_side_volume_key_window

0xda0d,	// (0x000119c1) stacon_top_pane

0xda17,	// (0x000119cb) status_pane_ParamLimits

0xda17,	// (0x000119cb) status_pane

0xda0d,	// (0x000119c1) status_small_pane

0xc078,	// (0x0001002c) control_pane

0xc078,	// (0x0001002c) stacon_bottom_pane

0xc8e8,	// (0x0001089c) scroll_pane_cp121

0xcd95,	// (0x00010d49) set_content_pane

0xd8bd,	// (0x00011871) bg_active_tab_pane_g1_cp1

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp1

0xd8cf,	// (0x00011883) bg_active_tab_pane_g3_cp1

0xd8bd,	// (0x00011871) bg_passive_tab_pane_g1_cp1

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp1

0xd8cf,	// (0x00011883) bg_passive_tab_pane_g3_cp1

0xd8d8,	// (0x0001188c) bg_active_tab_pane_g1_cp2

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp2

0xd8e1,	// (0x00011895) bg_active_tab_pane_g3_cp2

0xd8d8,	// (0x0001188c) bg_passive_tab_pane_g1_cp2

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp2

0xd8e1,	// (0x00011895) bg_passive_tab_pane_g3_cp2

0xd8ea,	// (0x0001189e) bg_active_tab_pane_g1_cp3

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp3

0xd8f3,	// (0x000118a7) bg_active_tab_pane_g3_cp3

0xd8ea,	// (0x0001189e) bg_passive_tab_pane_g1_cp3

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp3

0xd8f3,	// (0x000118a7) bg_passive_tab_pane_g3_cp3

0xd8fc,	// (0x000118b0) bg_active_tab_pane_g1_cp4

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp4

0xd905,	// (0x000118b9) bg_active_tab_pane_g3_cp4

0xd8fc,	// (0x000118b0) bg_passive_tab_pane_g1_cp4

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp4

0xd905,	// (0x000118b9) bg_passive_tab_pane_g3_cp4

0xd94c,	// (0x00011900) bg_active_tab_pane_g1_cp5

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp5

0xd955,	// (0x00011909) bg_active_tab_pane_g3_cp5

0xd94c,	// (0x00011900) bg_passive_tab_pane_g1_cp5

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp5

0xd955,	// (0x00011909) bg_passive_tab_pane_g3_cp5

0xd00b,	// (0x00010fbf) list_set_graphic_pane_ParamLimits

0xd00b,	// (0x00010fbf) list_set_graphic_pane

0xc078,	// (0x0001002c) bg_set_opt_pane_cp4

0xd95e,	// (0x00011912) list_set_graphic_pane_g1_ParamLimits

0xd95e,	// (0x00011912) list_set_graphic_pane_g1

0xd96a,	// (0x0001191e) list_set_graphic_pane_g2_ParamLimits

0xd96a,	// (0x0001191e) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001371a) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001371a) list_set_graphic_pane_g

0x0009,

0xfac6,	// (0x00013a7a) volume_small_pane_cp_g

0xd98c,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd98c,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2

0xd998,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd998,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2

0xd9a7,	// (0x0001195b) list_double2_large_graphic_pane_g3_cp2

0xd9af,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd9af,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2

0xd9c5,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd9c5,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2

0x055a,	// (0x0000450e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x055a,	// (0x0000450e) list_double_large_graphic_pane_g1_cp2

0x056b,	// (0x0000451f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x056b,	// (0x0000451f) list_double_large_graphic_pane_g2_cp2

0xdaf2,	// (0x00011aa6) list_double_large_graphic_pane_g3_cp2

0x057a,	// (0x0000452e) list_double_large_graphic_pane_g4_cp

0x0582,	// (0x00004536) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x0582,	// (0x00004536) list_double_large_graphic_pane_t1_cp2

0x0599,	// (0x0000454d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x0599,	// (0x0000454d) list_double_large_graphic_pane_t2_cp2

0xda25,	// (0x000119d9) list_double2_graphic_pane_g1_cp2_ParamLimits

0xda25,	// (0x000119d9) list_double2_graphic_pane_g1_cp2

0xda31,	// (0x000119e5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xda31,	// (0x000119e5) list_double2_graphic_pane_g2_cp2

0xda40,	// (0x000119f4) list_double2_graphic_pane_g3_cp2

0xda48,	// (0x000119fc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xda48,	// (0x000119fc) list_double2_graphic_pane_t1_cp2

0xda5e,	// (0x00011a12) list_double2_graphic_pane_t2_cp2_ParamLimits

0xda5e,	// (0x00011a12) list_double2_graphic_pane_t2_cp2

0xda70,	// (0x00011a24) list_single_number_heading_pane_g1_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_number_heading_pane_g1_cp2

0xda7c,	// (0x00011a30) list_single_number_heading_pane_g2_cp2

0xda84,	// (0x00011a38) list_single_number_heading_pane_t1_cp2_ParamLimits

0xda84,	// (0x00011a38) list_single_number_heading_pane_t1_cp2

0xda9a,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xda9a,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2

0xdaac,	// (0x00011a60) list_single_number_heading_pane_t3_cp2_ParamLimits

0xdaac,	// (0x00011a60) list_single_number_heading_pane_t3_cp2

0xda70,	// (0x00011a24) list_single_heading_pane_g1_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_heading_pane_g1_cp2

0xda7c,	// (0x00011a30) list_single_heading_pane_g2_cp2

0xda84,	// (0x00011a38) list_single_heading_pane_t1_cp2_ParamLimits

0xda84,	// (0x00011a38) list_single_heading_pane_t1_cp2

0x0364,	// (0x00004318) list_single_heading_pane_t2_cp2_ParamLimits

0x0364,	// (0x00004318) list_single_heading_pane_t2_cp2

0x02b4,	// (0x00004268) list_double_graphic_pane_g1_cp2_ParamLimits

0x02b4,	// (0x00004268) list_double_graphic_pane_g1_cp2

0x02c0,	// (0x00004274) list_double_graphic_pane_g2_cp2_ParamLimits

0x02c0,	// (0x00004274) list_double_graphic_pane_g2_cp2

0x02cf,	// (0x00004283) list_double_graphic_pane_g3_cp2

0x02d7,	// (0x0000428b) list_double_graphic_pane_t1_cp2_ParamLimits

0x02d7,	// (0x0000428b) list_double_graphic_pane_t1_cp2

0x02ed,	// (0x000042a1) list_double_graphic_pane_t2_cp2_ParamLimits

0x02ed,	// (0x000042a1) list_double_graphic_pane_t2_cp2

0xdae6,	// (0x00011a9a) list_double_number_pane_g1_cp2_ParamLimits

0xdae6,	// (0x00011a9a) list_double_number_pane_g1_cp2

0xdaf2,	// (0x00011aa6) list_double_number_pane_g2_cp2

0x027a,	// (0x0000422e) list_double_number_pane_t1_cp2_ParamLimits

0x027a,	// (0x0000422e) list_double_number_pane_t1_cp2

0x028c,	// (0x00004240) list_double_number_pane_t2_cp2_ParamLimits

0x028c,	// (0x00004240) list_double_number_pane_t2_cp2

0x02a2,	// (0x00004256) list_double_number_pane_t3_cp2_ParamLimits

0x02a2,	// (0x00004256) list_double_number_pane_t3_cp2

0x0153,	// (0x00004107) list_single_graphic_pane_g1_cp2_ParamLimits

0x0153,	// (0x00004107) list_single_graphic_pane_g1_cp2

0xda70,	// (0x00011a24) list_single_graphic_pane_g2_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_graphic_pane_g2_cp2

0xda7c,	// (0x00011a30) list_single_graphic_pane_g3_cp2

0x012b,	// (0x000040df) list_single_graphic_pane_t1_cp2_ParamLimits

0x012b,	// (0x000040df) list_single_graphic_pane_t1_cp2

0xda70,	// (0x00011a24) list_single_number_pane_g1_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_number_pane_g1_cp2

0xda7c,	// (0x00011a30) list_single_number_pane_g2_cp2

0x012b,	// (0x000040df) list_single_number_pane_t1_cp2_ParamLimits

0x012b,	// (0x000040df) list_single_number_pane_t1_cp2

0x0141,	// (0x000040f5) list_single_number_pane_t2_cp2_ParamLimits

0x0141,	// (0x000040f5) list_single_number_pane_t2_cp2

0xd998,	// (0x0001194c) list_double2_pane_g1_cp2_ParamLimits

0xd998,	// (0x0001194c) list_double2_pane_g1_cp2

0xd9a7,	// (0x0001195b) list_double2_pane_g2_cp2

0xdabe,	// (0x00011a72) list_double2_pane_t1_cp2_ParamLimits

0xdabe,	// (0x00011a72) list_double2_pane_t1_cp2

0xdad4,	// (0x00011a88) list_double2_pane_t2_cp2_ParamLimits

0xdad4,	// (0x00011a88) list_double2_pane_t2_cp2

0xdae6,	// (0x00011a9a) list_double_pane_g1_cp2_ParamLimits

0xdae6,	// (0x00011a9a) list_double_pane_g1_cp2

0xdaf2,	// (0x00011aa6) list_double_pane_g2_cp2

0xdafa,	// (0x00011aae) list_double_pane_t1_cp2_ParamLimits

0xdafa,	// (0x00011aae) list_double_pane_t1_cp2

0xdb10,	// (0x00011ac4) list_double_pane_t2_cp2_ParamLimits

0xdb10,	// (0x00011ac4) list_double_pane_t2_cp2

0xdb38,	// (0x00011aec) list_single_pane_cp2_g3

0xda70,	// (0x00011a24) list_single_pane_g1_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_pane_g1_cp2

0xda7c,	// (0x00011a30) list_single_pane_g2_cp2

0xdb48,	// (0x00011afc) list_single_pane_t1_cp2_ParamLimits

0xdb48,	// (0x00011afc) list_single_pane_t1_cp2

0xdb60,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xdb60,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2

0xdb6c,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xdb6c,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2

0xdb78,	// (0x00011b2c) list_single_large_graphic_pane_g3_cp2

0xdb80,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xdb80,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1

0xdb9a,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xdb9a,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2

0xf54c,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xf54c,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2

0xf527,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xf527,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2

0xda7c,	// (0x00011a30) list_single_graphic_heading_pane_g5_cp2

0xda84,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda84,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2

0xf558,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xf558,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2

0xf51b,	// (0x000134cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0xf51b,	// (0x000134cf) list_single_2graphic_pane_g1_cp2

0xf527,	// (0x000134db) list_single_2graphic_pane_g2_cp2_ParamLimits

0xf527,	// (0x000134db) list_single_2graphic_pane_g2_cp2

0xda7c,	// (0x00011a30) list_single_2graphic_pane_g3_cp2

0xe90b,	// (0x000128bf) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe90b,	// (0x000128bf) list_single_2graphic_pane_g4_cp2

0xf536,	// (0x000134ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0xf536,	// (0x000134ea) list_single_2graphic_pane_t1_cp2

0xbf91,	// (0x0000ff45) list_highlight_pane_g10_cp1

0xf115,	// (0x000130c9) list_highlight_pane_g1_cp1

0xf11d,	// (0x000130d1) list_highlight_pane_g2_cp1

0xf125,	// (0x000130d9) list_highlight_pane_g3_cp1

0xf12d,	// (0x000130e1) list_highlight_pane_g4_cp1

0xf135,	// (0x000130e9) list_highlight_pane_g5_cp1

0xf13d,	// (0x000130f1) list_highlight_pane_g6_cp1

0xf145,	// (0x000130f9) list_highlight_pane_g7_cp1

0xf14d,	// (0x00013101) list_highlight_pane_g8_cp1

0xf155,	// (0x00013109) list_highlight_pane_g9_cp1

0xf043,	// (0x00012ff7) form_field_slider_pane_t3

0xf051,	// (0x00013005) form_field_slider_pane_t4

0xf05f,	// (0x00013013) slider_form_pane_ParamLimits

0xf05f,	// (0x00013013) slider_form_pane

0xc078,	// (0x0001002c) control_abbreviations

0xc078,	// (0x0001002c) control_conventions

0xc078,	// (0x0001002c) control_definitions

0xc078,	// (0x0001002c) format_table_attribute

0x03ae,	// (0x00004362) bg_popup_preview_window_pane_g9

0xc078,	// (0x0001002c) format_table_data2

0xc078,	// (0x0001002c) format_table_data3

0xc078,	// (0x0001002c) format_table_data_example

0x0008,

0xc078,	// (0x0001002c) intro_purpose

0xf8ef,	// (0x000138a3) bg_popup_preview_window_pane_g

0xc078,	// (0x0001002c) texts_category

0xc078,	// (0x0001002c) texts_graphics

0xdbb0,	// (0x00011b64) text_digital

0xdbbf,	// (0x00011b73) text_primary

0xdbce,	// (0x00011b82) text_primary_small

0xdbdd,	// (0x00011b91) text_secondary

0xdbec,	// (0x00011ba0) text_title

0x0be0,	// (0x00004b94) bg_passive_tab_pane_g1_cp3_srt

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp3_srt

0x0bd7,	// (0x00004b8b) bg_passive_tab_pane_g3_cp3_srt

0xc158,	// (0x0001010c) bg_active_tab_pane_cp3_srt_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp3_srt

0x0be9,	// (0x00004b9d) tabs_4_active_pane_srt_g1

0xc188,	// (0x0001013c) tabs_4_active_pane_srt_t1_ParamLimits

0xc188,	// (0x0001013c) tabs_4_active_pane_srt_t1

0x0be0,	// (0x00004b94) bg_active_tab_pane_g1_cp3_copy1

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp3_copy1

0x0bd7,	// (0x00004b8b) bg_active_tab_pane_g3_cp3_copy1

0xc158,	// (0x0001010c) tabs_2_long_active_pane_srt_ParamLimits

0xc158,	// (0x0001010c) tabs_2_long_active_pane_srt

0xc158,	// (0x0001010c) tabs_2_long_passive_pane_srt_ParamLimits

0xc158,	// (0x0001010c) tabs_2_long_passive_pane_srt

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp4_srt

0x0842,	// (0x000047f6) bg_passive_tab_pane_g1_cp4_srt

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp4_srt

0x0839,	// (0x000047ed) bg_passive_tab_pane_g3_cp4_srt

0xd188,	// (0x0001113c) bg_active_tab_pane_cp4_srt_ParamLimits

0xd188,	// (0x0001113c) bg_active_tab_pane_cp4_srt

0xd196,	// (0x0001114a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd196,	// (0x0001114a) tabs_2_long_active_pane_srt_t1

0x0842,	// (0x000047f6) bg_active_tab_pane_g1_cp4_srt

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp4_srt

0x0839,	// (0x000047ed) bg_active_tab_pane_g3_cp4_srt

0xc3f1,	// (0x000103a5) tabs_3_long_active_pane_srt_ParamLimits

0xc3f1,	// (0x000103a5) tabs_3_long_active_pane_srt

0xc3f1,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc3f1,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt

0xc3f1,	// (0x000103a5) tabs_3_long_passive_pane_srt_ParamLimits

0xc3f1,	// (0x000103a5) tabs_3_long_passive_pane_srt

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp5_srt

0xd94c,	// (0x00011900) bg_passive_tab_pane_g1_cp5_srt

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp5_srt

0xd955,	// (0x00011909) bg_passive_tab_pane_g3_cp5_srt

0xd188,	// (0x0001113c) bg_active_tab_pane_cp5_srt_ParamLimits

0xd188,	// (0x0001113c) bg_active_tab_pane_cp5_srt

0xd1b5,	// (0x00011169) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd1b5,	// (0x00011169) tabs_3_long_active_pane_srt_t1

0xd94c,	// (0x00011900) bg_active_tab_pane_g1_cp5_srt

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp5_srt

0xd955,	// (0x00011909) bg_active_tab_pane_g3_cp5_srt

0x082b,	// (0x000047df) navi_text_pane_srt_t1

0x0823,	// (0x000047d7) navi_icon_pane_srt_g1

0xddb1,	// (0x00011d65) midp_editing_number_pane_srt

0xdbfb,	// (0x00011baf) midp_ticker_pane_srt

0xddb9,	// (0x00011d6d) midp_ticker_pane_srt_g1

0xddc1,	// (0x00011d75) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00013739) midp_ticker_pane_srt_g

0xddc9,	// (0x00011d7d) midp_ticker_pane_srt_t1

0x0814,	// (0x000047c8) midp_editing_number_pane_t1_copy1

0xdc03,	// (0x00011bb7) listscroll_midp_pane

0xdc03,	// (0x00011bb7) midp_form_pane

0xdc6b,	// (0x00011c1f) midp_info_popup_window_ParamLimits

0xdc6b,	// (0x00011c1f) midp_info_popup_window

0xd086,	// (0x0001103a) bg_popup_sub_pane_cp50_ParamLimits

0xd086,	// (0x0001103a) bg_popup_sub_pane_cp50

0xed6c,	// (0x00012d20) listscroll_midp_info_pane_ParamLimits

0xed6c,	// (0x00012d20) listscroll_midp_info_pane

0xed54,	// (0x00012d08) listscroll_form_midp_pane_ParamLimits

0xed54,	// (0x00012d08) listscroll_form_midp_pane

0xed60,	// (0x00012d14) scroll_bar_cp050

0xed34,	// (0x00012ce8) list_midp_pane

0x1804,	// (0x000057b8) signal_pane_g2_cp

0xec6e,	// (0x00012c22) listscroll_midp_info_pane_t1_ParamLimits

0xec6e,	// (0x00012c22) listscroll_midp_info_pane_t1

0xec86,	// (0x00012c3a) listscroll_midp_info_pane_t2_ParamLimits

0xec86,	// (0x00012c3a) listscroll_midp_info_pane_t2

0xecc4,	// (0x00012c78) listscroll_midp_info_pane_t3_ParamLimits

0xecc4,	// (0x00012c78) listscroll_midp_info_pane_t3

0xecfe,	// (0x00012cb2) listscroll_midp_info_pane_t4_ParamLimits

0xecfe,	// (0x00012cb2) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x000137de) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x000137de) listscroll_midp_info_pane_t

0xd135,	// (0x000110e9) scroll_pane_cp21

0xec12,	// (0x00012bc6) form_midp_field_choice_group_pane

0xec1b,	// (0x00012bcf) form_midp_field_text_pane

0xec54,	// (0x00012c08) form_midp_field_time_pane

0xec5c,	// (0x00012c10) form_midp_gauge_slider_pane

0xec65,	// (0x00012c19) form_midp_gauge_wait_pane

0xc078,	// (0x0001002c) form_midp_image_pane

0xebfa,	// (0x00012bae) list_single_midp_pane_ParamLimits

0xebfa,	// (0x00012bae) list_single_midp_pane

0xebc6,	// (0x00012b7a) form_midp_field_text_pane_t1

0xe9e5,	// (0x00012999) input_focus_pane_cp050

0xebe9,	// (0x00012b9d) list_midp_form_text_pane

0xeb95,	// (0x00012b49) form_midp_field_choice_group_pane_t1

0xeba3,	// (0x00012b57) input_focus_pane_cp051

0xebb7,	// (0x00012b6b) list_midp_choice_pane

0xc078,	// (0x0001002c) status_idle_pane

0xeb79,	// (0x00012b2d) form_midp_field_time_pane_t1

0xbf91,	// (0x0000ff45) wait_anim_pane_g2_copy1

0xeb87,	// (0x00012b3b) form_midp_field_time_pane_t2

0x0001,

0xdd13,	// (0x00011cc7) aid_navinavi_width_2_pane

0xf825,	// (0x000137d9) form_midp_field_time_pane_t

0xc078,	// (0x0001002c) input_focus_pane_cp052

0xc078,	// (0x0001002c) bg_input_focus_pane_cp040

0xeb39,	// (0x00012aed) form_midp_gauge_slider_pane_t1

0xeb47,	// (0x00012afb) form_midp_gauge_slider_pane_t2

0xeb55,	// (0x00012b09) form_midp_gauge_slider_pane_t3

0xeb63,	// (0x00012b17) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x000137d0) form_midp_gauge_slider_pane_t

0xeb71,	// (0x00012b25) form_midp_slider_pane

0xc158,	// (0x0001010c) bg_input_focus_pane_cp041_ParamLimits

0xc158,	// (0x0001010c) bg_input_focus_pane_cp041

0xeb09,	// (0x00012abd) form_midp_gauge_wait_pane_t1_ParamLimits

0xeb09,	// (0x00012abd) form_midp_gauge_wait_pane_t1

0xeb1b,	// (0x00012acf) form_midp_gauge_wait_pane_t2_ParamLimits

0xeb1b,	// (0x00012acf) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x000137cb) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x000137cb) form_midp_gauge_wait_pane_t

0xeb2d,	// (0x00012ae1) form_midp_wait_pane_ParamLimits

0xeb2d,	// (0x00012ae1) form_midp_wait_pane

0xead3,	// (0x00012a87) form_midp_image_pane_g1

0xeadc,	// (0x00012a90) form_midp_image_pane_t1

0xeaeb,	// (0x00012a9f) form_midp_image_pane_t2

0xeafa,	// (0x00012aae) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000137c4) form_midp_image_pane_t

0xeabb,	// (0x00012a6f) list_single_midp_pane_g1

0xeac4,	// (0x00012a78) list_single_midp_pane_t1

0xeaa5,	// (0x00012a59) list_midp_form_item_pane_ParamLimits

0xeaa5,	// (0x00012a59) list_midp_form_item_pane

0xdcbb,	// (0x00011c6f) list_midp_form_item_pane_t1

0xdcca,	// (0x00011c7e) midp_ticker_pane_g1

0xdcd6,	// (0x00011c8a) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001371f) midp_ticker_pane_g

0xdce2,	// (0x00011c96) midp_ticker_pane_t1

0x0814,	// (0x000047c8) midp_editing_number_pane_t1

0x0a9d,	// (0x00004a51) midp_editing_number_pane

0x0aa9,	// (0x00004a5d) midp_ticker_pane

0x07f2,	// (0x000047a6) ai_message_heading_pane

0xc078,	// (0x0001002c) bg_popup_window_pane_cp14

0x07fa,	// (0x000047ae) listscroll_ai_message_pane

0x077c,	// (0x00004730) ai_message_heading_pane_g1_ParamLimits

0x077c,	// (0x00004730) ai_message_heading_pane_g1

0x0788,	// (0x0000473c) ai_message_heading_pane_g2_ParamLimits

0x0788,	// (0x0000473c) ai_message_heading_pane_g2

0x0794,	// (0x00004748) ai_message_heading_pane_g3_ParamLimits

0x0794,	// (0x00004748) ai_message_heading_pane_g3

0x07a0,	// (0x00004754) ai_message_heading_pane_g4_ParamLimits

0x07a0,	// (0x00004754) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00013905) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00013905) ai_message_heading_pane_g

0x07ac,	// (0x00004760) ai_message_heading_pane_t1_ParamLimits

0x07ac,	// (0x00004760) ai_message_heading_pane_t1

0x07c6,	// (0x0000477a) ai_message_heading_pane_t2_ParamLimits

0x07c6,	// (0x0000477a) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0001390e) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0001390e) ai_message_heading_pane_t

0x07d8,	// (0x0000478c) bg_popup_heading_pane_cp1_ParamLimits

0x07d8,	// (0x0000478c) bg_popup_heading_pane_cp1

0x076a,	// (0x0000471e) list_ai_message_pane_ParamLimits

0x076a,	// (0x0000471e) list_ai_message_pane

0xd135,	// (0x000110e9) scroll_pane_cp10

0x06b6,	// (0x0000466a) list_ai_message_pane_g1

0x06be,	// (0x00004672) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x000138e2) list_ai_message_pane_g

0x06c6,	// (0x0000467a) list_ai_message_pane_t1_ParamLimits

0x06c6,	// (0x0000467a) list_ai_message_pane_t1

0x06db,	// (0x0000468f) list_ai_message_pane_t2_ParamLimits

0x06db,	// (0x0000468f) list_ai_message_pane_t2

0x06f0,	// (0x000046a4) list_ai_message_pane_t3_ParamLimits

0x06f0,	// (0x000046a4) list_ai_message_pane_t3

0x0705,	// (0x000046b9) list_ai_message_pane_t4_ParamLimits

0x0705,	// (0x000046b9) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x000138e7) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x000138e7) list_ai_message_pane_t

0x06a4,	// (0x00004658) cell_ai_soft_ind_pane_ParamLimits

0x06a4,	// (0x00004658) cell_ai_soft_ind_pane

0xdcf4,	// (0x00011ca8) cell_ai_soft_ind_pane_g1_ParamLimits

0xdcf4,	// (0x00011ca8) cell_ai_soft_ind_pane_g1

0xc078,	// (0x0001002c) grid_highlight_cp1

0xdd01,	// (0x00011cb5) text_secondary_cp56_ParamLimits

0xdd01,	// (0x00011cb5) text_secondary_cp56

0x0679,	// (0x0000462d) example_general_pane_ParamLimits

0x0679,	// (0x0000462d) example_general_pane

0x0685,	// (0x00004639) example_parent_pane_g1_ParamLimits

0x0685,	// (0x00004639) example_parent_pane_g1

0x0691,	// (0x00004645) example_parent_pane_t1_ParamLimits

0x0691,	// (0x00004645) example_parent_pane_t1

0xe23c,	// (0x000121f0) popup_preview_text_window_ParamLimits

0xe23c,	// (0x000121f0) popup_preview_text_window

0xdb40,	// (0x00011af4) list_single_pane_cp2_g4

0xc4a7,	// (0x0001045b) bg_popup_preview_window_pane_ParamLimits

0xc4a7,	// (0x0001045b) bg_popup_preview_window_pane

0x03b6,	// (0x0000436a) popup_preview_text_window_t1_ParamLimits

0x03b6,	// (0x0000436a) popup_preview_text_window_t1

0x03d4,	// (0x00004388) popup_preview_text_window_t2_ParamLimits

0x03d4,	// (0x00004388) popup_preview_text_window_t2

0x041d,	// (0x000043d1) popup_preview_text_window_t3_ParamLimits

0x041d,	// (0x000043d1) popup_preview_text_window_t3

0x0462,	// (0x00004416) popup_preview_text_window_t4_ParamLimits

0x0462,	// (0x00004416) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000138b6) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000138b6) popup_preview_text_window_t

0x04e0,	// (0x00004494) scroll_pane_cp11

0xe8c3,	// (0x00012877) bg_popup_preview_window_pane_g1

0x0376,	// (0x0000432a) bg_popup_preview_window_pane_g2

0x037e,	// (0x00004332) bg_popup_preview_window_pane_g3

0x0386,	// (0x0000433a) bg_popup_preview_window_pane_g4

0x038e,	// (0x00004342) bg_popup_preview_window_pane_g5

0x0396,	// (0x0000434a) bg_popup_preview_window_pane_g6

0x039e,	// (0x00004352) bg_popup_preview_window_pane_g7

0x03a6,	// (0x0000435a) bg_popup_preview_window_pane_g8

0xa5e9,	// (0x0000e59d) aid_popup_width_pane

0xe21e,	// (0x000121d2) popup_midp_note_alarm_window_ParamLimits

0xe21e,	// (0x000121d2) popup_midp_note_alarm_window

0xce42,	// (0x00010df6) data_form_pane_ParamLimits

0xce4e,	// (0x00010e02) form_field_data_pane_g1

0xce56,	// (0x00010e0a) form_field_data_pane_t1_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_ParamLimits

0xce7c,	// (0x00010e30) data_form_wide_pane_ParamLimits

0xce88,	// (0x00010e3c) form_field_data_wide_pane_g1

0xcea8,	// (0x00010e5c) form_field_data_wide_pane_t1_ParamLimits

0xc75f,	// (0x00010713) input_focus_pane_cp6_ParamLimits

0xd0e2,	// (0x00011096) input_popup_find_pane_g1_ParamLimits

0xd0e2,	// (0x00011096) input_popup_find_pane_g1

0xa9b2,	// (0x0000e966) aid_navi_side_left_pane

0xa9c2,	// (0x0000e976) aid_navi_side_right_pane

0xf1fe,	// (0x000131b2) bg_popup_window_pane_cp30_ParamLimits

0xf1fe,	// (0x000131b2) bg_popup_window_pane_cp30

0xf278,	// (0x0001322c) popup_midp_note_alarm_window_g1_ParamLimits

0xf278,	// (0x0001322c) popup_midp_note_alarm_window_g1

0xf2a8,	// (0x0001325c) popup_midp_note_alarm_window_t1_ParamLimits

0xf2a8,	// (0x0001325c) popup_midp_note_alarm_window_t1

0xf349,	// (0x000132fd) popup_midp_note_alarm_window_t2_ParamLimits

0xf349,	// (0x000132fd) popup_midp_note_alarm_window_t2

0xf3f7,	// (0x000133ab) popup_midp_note_alarm_window_t3_ParamLimits

0xf3f7,	// (0x000133ab) popup_midp_note_alarm_window_t3

0xf41f,	// (0x000133d3) popup_midp_note_alarm_window_t4_ParamLimits

0xf41f,	// (0x000133d3) popup_midp_note_alarm_window_t4

0xf43f,	// (0x000133f3) popup_midp_note_alarm_window_t5_ParamLimits

0xf43f,	// (0x000133f3) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00013853) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00013853) popup_midp_note_alarm_window_t

0xf4eb,	// (0x0001349f) wait_bar_pane_cp1_ParamLimits

0xf4eb,	// (0x0001349f) wait_bar_pane_cp1

0xc078,	// (0x0001002c) wait_anim_pane_copy1

0xc078,	// (0x0001002c) wait_border_pane_copy1

0xef10,	// (0x00012ec4) wait_border_pane_g1_copy1

0xcec2,	// (0x00010e76) form_field_popup_pane_g1

0xceca,	// (0x00010e7e) form_field_popup_pane_t1_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_cp7_ParamLimits

0xce42,	// (0x00010df6) list_form_pane_ParamLimits

0xcee2,	// (0x00010e96) form_field_popup_wide_pane_g1

0xceea,	// (0x00010e9e) form_field_popup_wide_pane_t1_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_cp8_ParamLimits

0xceff,	// (0x00010eb3) list_form_wide_pane_ParamLimits

0x0c57,	// (0x00004c0b) aid_size_cell_graphic_pane

0xcfdc,	// (0x00010f90) data_form_pane_t1_ParamLimits

0x0a6d,	// (0x00004a21) data_form_wide_pane_t1_ParamLimits

0xe4c0,	// (0x00012474) bg_status_flat_pane

0xc0b8,	// (0x0001006c) title_pane_t1_ParamLimits

0xc120,	// (0x000100d4) title_pane_t2_ParamLimits

0xc146,	// (0x000100fa) title_pane_t3_ParamLimits

0xf573,	// (0x00013527) title_pane_t_ParamLimits

0xd5be,	// (0x00011572) level_1_signal_ParamLimits

0xd5cb,	// (0x0001157f) level_2_signal_ParamLimits

0xd5d8,	// (0x0001158c) level_3_signal_ParamLimits

0xd5e5,	// (0x00011599) level_4_signal_ParamLimits

0xd5f2,	// (0x000115a6) level_5_signal_ParamLimits

0xd5ff,	// (0x000115b3) level_6_signal_ParamLimits

0xd60c,	// (0x000115c0) level_7_signal_ParamLimits

0xd5be,	// (0x00011572) level_1_battery_ParamLimits

0xd5cb,	// (0x0001157f) level_2_battery_ParamLimits

0xd5d8,	// (0x0001158c) level_3_battery_ParamLimits

0xd5e5,	// (0x00011599) level_4_battery_ParamLimits

0xd5f2,	// (0x000115a6) level_5_battery_ParamLimits

0xd5ff,	// (0x000115b3) level_6_battery_ParamLimits

0xd60c,	// (0x000115c0) level_7_battery_ParamLimits

0xf115,	// (0x000130c9) bg_status_flat_pane_g1

0xf11d,	// (0x000130d1) bg_status_flat_pane_g2

0xf125,	// (0x000130d9) bg_status_flat_pane_g3

0xf12d,	// (0x000130e1) bg_status_flat_pane_g4

0xf135,	// (0x000130e9) bg_status_flat_pane_g5

0xf13d,	// (0x000130f1) bg_status_flat_pane_g6

0xf145,	// (0x000130f9) bg_status_flat_pane_g7

0xc16e,	// (0x00010122) tabs_3_active_pane_t1_ParamLimits

0xc16e,	// (0x00010122) tabs_3_passive_pane_t1_ParamLimits

0xc188,	// (0x0001013c) tabs_4_active_pane_t1_ParamLimits

0xc188,	// (0x0001013c) tabs_4_1_passive_pane_t1_ParamLimits

0xd176,	// (0x0001112a) tabs_2_active_pane_t1_ParamLimits

0xd176,	// (0x0001112a) tabs_2_passive_pane_t1_ParamLimits

0xd188,	// (0x0001113c) bg_active_tab_pane_cp4_ParamLimits

0xd196,	// (0x0001114a) tabs_2_long_active_pane_t1_ParamLimits

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp4_ParamLimits

0xaf3b,	// (0x0000eeef) list_single_midp_graphic_pane_t1_ParamLimits

0xd188,	// (0x0001113c) bg_active_tab_pane_cp5_ParamLimits

0xd1b5,	// (0x00011169) tabs_3_long_active_pane_t1_ParamLimits

0xd1a9,	// (0x0001115d) bg_passive_tab_pane_cp5_ParamLimits

0xaf3b,	// (0x0000eeef) list_single_midp_graphic_pane_t1

0xe4c0,	// (0x00012474) bg_status_flat_pane_ParamLimits

0xe579,	// (0x0001252d) indicator_pane_cp2_ParamLimits

0xe579,	// (0x0001252d) indicator_pane_cp2

0xe69d,	// (0x00012651) navi_pane_srt_ParamLimits

0xe69d,	// (0x00012651) navi_pane_srt

0xe6c1,	// (0x00012675) popup_clock_digital_analogue_window_cp1

0xc24c,	// (0x00010200) indicator_pane_t1

0xdbfb,	// (0x00011baf) copy_highlight_pane

0xdbfb,	// (0x00011baf) cursor_graphics_pane

0xdbfb,	// (0x00011baf) graphic_within_text_pane

0xdbfb,	// (0x00011baf) link_highlight_pane

0x04a3,	// (0x00004457) popup_preview_text_window_t5_ParamLimits

0x04a3,	// (0x00004457) popup_preview_text_window_t5

0xdd1b,	// (0x00011ccf) cursor_digital_pane

0xdd1b,	// (0x00011ccf) cursor_primary_pane

0xdd2c,	// (0x00011ce0) cursor_primary_small_pane

0xdd34,	// (0x00011ce8) cursor_secondary_pane

0xdd3c,	// (0x00011cf0) cursor_title_pane

0xdd1b,	// (0x00011ccf) link_highlight_digital_pane

0xdd23,	// (0x00011cd7) link_highlight_primary_pane

0xdd2c,	// (0x00011ce0) link_highlight_primary_small_pane

0xdd34,	// (0x00011ce8) link_highlight_secondary_pane

0xdd3c,	// (0x00011cf0) link_highlight_title_pane

0xdd1b,	// (0x00011ccf) copy_highlight_digital_pane

0xdd1b,	// (0x00011ccf) copy_highlight_primary_pane

0xdd2c,	// (0x00011ce0) copy_highlight_primary_small_pane

0xdd34,	// (0x00011ce8) copy_highlight_secondary_pane

0xdd3c,	// (0x00011cf0) copy_highlight_title_pane

0xdd34,	// (0x00011ce8) graphic_text_digital_pane

0xf1ad,	// (0x00013161) graphic_text_primary_pane

0xf1b6,	// (0x0001316a) graphic_text_primary_small_pane

0xdd2c,	// (0x00011ce0) graphic_text_secondary_pane

0xdd1b,	// (0x00011ccf) graphic_text_title_pane

0xdd44,	// (0x00011cf8) cursor_primary_pane_g1

0xf19f,	// (0x00013153) cursor_text_primary_t1

0xf189,	// (0x0001313d) cursor_primary_small_pane_g1

0xf191,	// (0x00013145) cursor_text_primary_small_t1

0xf173,	// (0x00013127) cursor_primary_small_pane_g1_copy1

0xf17b,	// (0x0001312f) cursor_text_primary_small_t1_copy1

0xf15d,	// (0x00013111) cursor_text_title_t1

0xf16b,	// (0x0001311f) cursor_title_pane_g1

0xdd44,	// (0x00011cf8) cursor_digital_pane_g1

0xdd4c,	// (0x00011d00) cursor_text_digital_t1

0xdd5a,	// (0x00011d0e) link_highlight_primary_pane_g1

0xf106,	// (0x000130ba) link_highlight_primary_pane_t1

0xdd5a,	// (0x00011d0e) link_highlight_primary_small_pane_g1

0xdd62,	// (0x00011d16) link_highlight_primary_small_pane_t1

0xdd71,	// (0x00011d25) link_highlight_secondary_pane_g1

0xdd79,	// (0x00011d2d) link_highlight_secondary_pane_t1

0xf06b,	// (0x0001301f) link_highlight_title_pane_g1

0xf082,	// (0x00013036) link_highlight_title_pane_t1

0xf06b,	// (0x0001301f) link_highlight_digital_pane_g1

0xf073,	// (0x00013027) link_highlight_digital_pane_t1

0xef2b,	// (0x00012edf) copy_highlight_primary_pane_g1

0xef51,	// (0x00012f05) copy_highlight_primary_pane_t1

0xef2b,	// (0x00012edf) copy_highlight_primary_small_pane_g1

0xef42,	// (0x00012ef6) copy_highlight_primary_small_pane_t1

0xdd88,	// (0x00011d3c) copy_highlight_secondary_pane_g1

0xdd90,	// (0x00011d44) copy_highlight_secondary_pane_t1

0xef2b,	// (0x00012edf) copy_highlight_title_pane_g1

0xef33,	// (0x00012ee7) copy_highlight_title_pane_t1

0xef2b,	// (0x00012edf) copy_highlight_digital_pane_g1

0x0e7b,	// (0x00004e2f) copy_highlight_digital_pane_t1

0x0dcf,	// (0x00004d83) graphic_text_primary_pane_g1

0x0e5f,	// (0x00004e13) graphic_text_primary_pane_t1

0x0e6d,	// (0x00004e21) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001397d) graphic_text_primary_pane_t

0x0e3b,	// (0x00004def) graphic_text_primary_small_pane_g1

0x0e43,	// (0x00004df7) graphic_text_primary_small_pane_t1

0x0e51,	// (0x00004e05) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00013978) graphic_text_primary_small_pane_t

0x0e17,	// (0x00004dcb) graphic_text_secondary_pane_g1

0x0e1f,	// (0x00004dd3) graphic_text_secondary_pane_t1

0x0e2d,	// (0x00004de1) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00013973) graphic_text_secondary_pane_t

0x0df3,	// (0x00004da7) graphic_text_title_pane_g1

0x0dfb,	// (0x00004daf) graphic_text_title_pane_t1

0x0e09,	// (0x00004dbd) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001396e) graphic_text_title_pane_t

0x0dcf,	// (0x00004d83) graphic_text_digital_pane_g1

0x0dd7,	// (0x00004d8b) graphic_text_digital_pane_t1

0x0de5,	// (0x00004d99) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00013969) graphic_text_digital_pane_t

0xc158,	// (0x0001010c) navi_icon_pane_srt_ParamLimits

0xc158,	// (0x0001010c) navi_icon_pane_srt

0xc078,	// (0x0001002c) navi_midp_pane_srt

0xc078,	// (0x0001002c) navi_navi_pane_srt

0xc158,	// (0x0001010c) navi_text_pane_srt_ParamLimits

0xc158,	// (0x0001010c) navi_text_pane_srt

0x032f,	// (0x000042e3) navi_navi_icon_text_pane_srt

0x0349,	// (0x000042fd) navi_navi_pane_srt_g1_ParamLimits

0x0349,	// (0x000042fd) navi_navi_pane_srt_g1

0x0337,	// (0x000042eb) navi_navi_pane_srt_g2_ParamLimits

0x0337,	// (0x000042eb) navi_navi_pane_srt_g2

0x0001,

0xf8ea,	// (0x0001389e) navi_navi_pane_srt_g_ParamLimits

0xf8ea,	// (0x0001389e) navi_navi_pane_srt_g

0x035b,	// (0x0000430f) navi_navi_tabs_pane_srt

0x032f,	// (0x000042e3) navi_navi_text_pane_srt

0x032f,	// (0x000042e3) navi_navi_volume_pane_srt

0x0dc0,	// (0x00004d74) navi_navi_text_pane_srt_t1

0xb29f,	// (0x0000f253) navi_navi_volume_pane_srt_g1

0xb2a7,	// (0x0000f25b) volume_small_pane_srt_ParamLimits

0xb2a7,	// (0x0000f25b) volume_small_pane_srt

0xac59,	// (0x0000ec0d) volume_small_pane_srt_g1_ParamLimits

0xac59,	// (0x0000ec0d) volume_small_pane_srt_g1

0xac69,	// (0x0000ec1d) volume_small_pane_srt_g2_ParamLimits

0xac69,	// (0x0000ec1d) volume_small_pane_srt_g2

0xac7a,	// (0x0000ec2e) volume_small_pane_srt_g3_ParamLimits

0xac7a,	// (0x0000ec2e) volume_small_pane_srt_g3

0xac8b,	// (0x0000ec3f) volume_small_pane_srt_g4_ParamLimits

0xac8b,	// (0x0000ec3f) volume_small_pane_srt_g4

0xac9c,	// (0x0000ec50) volume_small_pane_srt_g5_ParamLimits

0xac9c,	// (0x0000ec50) volume_small_pane_srt_g5

0xacad,	// (0x0000ec61) volume_small_pane_srt_g6_ParamLimits

0xacad,	// (0x0000ec61) volume_small_pane_srt_g6

0xacbe,	// (0x0000ec72) volume_small_pane_srt_g7_ParamLimits

0xacbe,	// (0x0000ec72) volume_small_pane_srt_g7

0xaccf,	// (0x0000ec83) volume_small_pane_srt_g8_ParamLimits

0xaccf,	// (0x0000ec83) volume_small_pane_srt_g8

0xace0,	// (0x0000ec94) volume_small_pane_srt_g9_ParamLimits

0xace0,	// (0x0000ec94) volume_small_pane_srt_g9

0xacf1,	// (0x0000eca5) volume_small_pane_srt_g10_ParamLimits

0xacf1,	// (0x0000eca5) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00013724) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00013724) volume_small_pane_srt_g

0xc550,	// (0x00010504) query_popup_data_pane_cp2

0x0d89,	// (0x00004d3d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x0d89,	// (0x00004d3d) navi_navi_icon_text_pane_srt_t1

0xf1ad,	// (0x00013161) navi_tabs_2_long_pane_srt

0xf1ad,	// (0x00013161) navi_tabs_2_pane_srt

0xf1ad,	// (0x00013161) navi_tabs_3_long_pane_srt

0xf1ad,	// (0x00013161) navi_tabs_3_pane_srt

0xf1ad,	// (0x00013161) navi_tabs_4_pane_srt

0xb27f,	// (0x0000f233) tabs_2_active_pane_srt_ParamLimits

0xb27f,	// (0x0000f233) tabs_2_active_pane_srt

0xb28f,	// (0x0000f243) tabs_2_passive_pane_srt_ParamLimits

0xb28f,	// (0x0000f243) tabs_2_passive_pane_srt

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp1_srt_ParamLimits

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp1_srt

0x0d50,	// (0x00004d04) bg_passive_tab_pane_g1_cp1_srt

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp1_srt

0x0d47,	// (0x00004cfb) bg_passive_tab_pane_g3_cp1_srt

0xc158,	// (0x0001010c) bg_active_tab_pane_cp1_srt_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp1_srt

0x0d59,	// (0x00004d0d) tabs_2_active_pane_srt_g1

0xd176,	// (0x0001112a) tabs_2_active_pane_srt_t1_ParamLimits

0xd176,	// (0x0001112a) tabs_2_active_pane_srt_t1

0x0d50,	// (0x00004d04) bg_active_tab_pane_g1_cp1_srt

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp1_srt

0x0d47,	// (0x00004cfb) bg_active_tab_pane_g3_cp1_srt

0xb24c,	// (0x0000f200) tabs_3_active_pane_srt_ParamLimits

0xb24c,	// (0x0000f200) tabs_3_active_pane_srt

0xb25d,	// (0x0000f211) tabs_3_passive_pane_cp_srt_ParamLimits

0xb25d,	// (0x0000f211) tabs_3_passive_pane_cp_srt

0xb26e,	// (0x0000f222) tabs_3_passive_pane_srt_ParamLimits

0xb26e,	// (0x0000f222) tabs_3_passive_pane_srt

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp2_srt_ParamLimits

0xdf6e,	// (0x00011f22) bg_passive_tab_pane_cp2_srt

0xdd9f,	// (0x00011d53) bg_passive_tab_pane_g1_cp2_srt

0xd8c6,	// (0x0001187a) bg_passive_tab_pane_g2_cp2_srt

0xdda8,	// (0x00011d5c) bg_passive_tab_pane_g3_cp2_srt

0xc158,	// (0x0001010c) bg_active_tab_pane_cp2_srt_ParamLimits

0xc158,	// (0x0001010c) bg_active_tab_pane_cp2_srt

0x0d0c,	// (0x00004cc0) tabs_3_active_pane_srt_g1

0xc16e,	// (0x00010122) tabs_3_active_pane_srt_t1_ParamLimits

0xc16e,	// (0x00010122) tabs_3_active_pane_srt_t1

0xdd9f,	// (0x00011d53) bg_active_tab_pane_g1_cp2_srt

0xd8c6,	// (0x0001187a) bg_active_tab_pane_g2_cp2_srt

0xdda8,	// (0x00011d5c) bg_active_tab_pane_g3_cp2_srt

0xb204,	// (0x0000f1b8) tabs_4_active_pane_srt_ParamLimits

0xb204,	// (0x0000f1b8) tabs_4_active_pane_srt

0xb216,	// (0x0000f1ca) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb216,	// (0x0000f1ca) tabs_4_passive_pane_cp2_srt

0xdef3,	// (0x00011ea7) aid_size_cell_toolbar

0xd1a9,	// (0x0001115d) main_idle_act_pane_ParamLimits

0xe0d9,	// (0x0001208d) popup_large_graphic_colour_window_ParamLimits

0xe38d,	// (0x00012341) popup_toolbar_window_ParamLimits

0xe38d,	// (0x00012341) popup_toolbar_window

0x0ace,	// (0x00004a82) list_single_graphic_2heading_pane_ParamLimits

0x0ace,	// (0x00004a82) list_single_graphic_2heading_pane

0xd380,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane

0xd392,	// (0x00011346) aid_size_cell_apps_grid_prt_pane

0xdf6e,	// (0x00011f22) bg_wml_button_pane_cp1_ParamLimits

0xdf6e,	// (0x00011f22) bg_wml_button_pane_cp1

0xebc6,	// (0x00012b7a) form_midp_field_text_pane_t1_ParamLimits

0xe9e5,	// (0x00012999) input_focus_pane_cp050_ParamLimits

0xebe9,	// (0x00012b9d) list_midp_form_text_pane_ParamLimits

0xeba3,	// (0x00012b57) input_focus_pane_cp051_ParamLimits

0xebb7,	// (0x00012b6b) list_midp_choice_pane_ParamLimits

0xea71,	// (0x00012a25) list_single_2graphic_pane_cp3_ParamLimits

0xea71,	// (0x00012a25) list_single_2graphic_pane_cp3

0xea85,	// (0x00012a39) list_single_midp_graphic_pane_ParamLimits

0xea85,	// (0x00012a39) list_single_midp_graphic_pane

0xae4d,	// (0x0000ee01) list_single_graphic_2heading_pane_g1_ParamLimits

0xae4d,	// (0x0000ee01) list_single_graphic_2heading_pane_g1

0xae59,	// (0x0000ee0d) list_single_graphic_2heading_pane_g4_ParamLimits

0xae59,	// (0x0000ee0d) list_single_graphic_2heading_pane_g4

0xae65,	// (0x0000ee19) list_single_graphic_2heading_pane_g5_ParamLimits

0xae65,	// (0x0000ee19) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00013777) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00013777) list_single_graphic_2heading_pane_g

0xae71,	// (0x0000ee25) list_single_graphic_2heading_pane_t1_ParamLimits

0xae71,	// (0x0000ee25) list_single_graphic_2heading_pane_t1

0xae85,	// (0x0000ee39) list_single_graphic_2heading_pane_t2_ParamLimits

0xae85,	// (0x0000ee39) list_single_graphic_2heading_pane_t2

0xae9f,	// (0x0000ee53) list_single_graphic_2heading_pane_t3_ParamLimits

0xae9f,	// (0x0000ee53) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001377e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001377e) list_single_graphic_2heading_pane_t

0xe80d,	// (0x000127c1) bg_popup_sub_pane_cp2

0xe833,	// (0x000127e7) grid_toobar_pane

0xaeb7,	// (0x0000ee6b) cell_toolbar_pane_ParamLimits

0xaeb7,	// (0x0000ee6b) cell_toolbar_pane

0xe869,	// (0x0001281d) cell_toolbar_pane_g1_ParamLimits

0xe869,	// (0x0001281d) cell_toolbar_pane_g1

0xe87b,	// (0x0001282f) cell_toolbar_pane_g2_ParamLimits

0xe87b,	// (0x0001282f) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x00013785) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x00013785) cell_toolbar_pane_g

0xe89d,	// (0x00012851) grid_highlight_pane_cp2_ParamLimits

0xe89d,	// (0x00012851) grid_highlight_pane_cp2

0xe8b7,	// (0x0001286b) toolbar_button_pane

0xe8c3,	// (0x00012877) toolbar_button_pane_g1

0xe8cb,	// (0x0001287f) toolbar_button_pane_g2

0xe8d3,	// (0x00012887) toolbar_button_pane_g3

0xe8db,	// (0x0001288f) toolbar_button_pane_g4

0xe8e3,	// (0x00012897) toolbar_button_pane_g5

0xe8eb,	// (0x0001289f) toolbar_button_pane_g6

0xe8f3,	// (0x000128a7) toolbar_button_pane_g7

0xe8fb,	// (0x000128af) toolbar_button_pane_g8

0xe903,	// (0x000128b7) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0001378a) toolbar_button_pane_g

0xaee6,	// (0x0000ee9a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xaee6,	// (0x0000ee9a) list_single_2graphic_pane_g1_cp3

0xaef2,	// (0x0000eea6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaef2,	// (0x0000eea6) list_single_2graphic_pane_g2_cp3

0xaf01,	// (0x0000eeb5) list_single_2graphic_pane_g3_cp3

0xaf09,	// (0x0000eebd) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaf09,	// (0x0000eebd) list_single_2graphic_pane_g4_cp3

0xaf15,	// (0x0000eec9) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaf15,	// (0x0000eec9) list_single_2graphic_pane_t1_cp3

0xaf2f,	// (0x0000eee3) list_single_midp_graphic_pane_g2_ParamLimits

0xaf2f,	// (0x0000eee3) list_single_midp_graphic_pane_g2

0xdefb,	// (0x00011eaf) aid_zoom_text_primary

0xdf03,	// (0x00011eb7) aid_zoom_text_secondary

0xde5a,	// (0x00011e0e) status_small_pane_g7_ParamLimits

0xde5a,	// (0x00011e0e) status_small_pane_g7

0xde7d,	// (0x00011e31) status_small_pane_t1_ParamLimits

0xc08f,	// (0x00010043) title_pane_g2

0x0003,

0xf56a,	// (0x0001351e) title_pane_g

0xc5ef,	// (0x000105a3) aid_size_cell_colour_1_pane_ParamLimits

0xc5ef,	// (0x000105a3) aid_size_cell_colour_1_pane

0xc603,	// (0x000105b7) aid_size_cell_colour_2_pane_ParamLimits

0xc603,	// (0x000105b7) aid_size_cell_colour_2_pane

0xc643,	// (0x000105f7) aid_size_cell_colour_3_pane_ParamLimits

0xc643,	// (0x000105f7) aid_size_cell_colour_3_pane

0xc657,	// (0x0001060b) aid_size_cell_colour_4_pane_ParamLimits

0xc657,	// (0x0001060b) aid_size_cell_colour_4_pane

0xa914,	// (0x0000e8c8) title_pane_stacon_g1_ParamLimits

0xa914,	// (0x0000e8c8) title_pane_stacon_g1

0xefa8,	// (0x00012f5c) popup_note_wait_window_g3_ParamLimits

0xefa8,	// (0x00012f5c) popup_note_wait_window_g3

0xf01e,	// (0x00012fd2) popup_note_wait_window_t5_ParamLimits

0xf01e,	// (0x00012fd2) popup_note_wait_window_t5

0xc078,	// (0x0001002c) main_feb_china_hwr_fs_writing_pane

0xdfee,	// (0x00011fa2) popup_feb_china_hwr_fs_window_ParamLimits

0xdfee,	// (0x00011fa2) popup_feb_china_hwr_fs_window

0xaf51,	// (0x0000ef05) aid_size_cell_hwr_fs_ParamLimits

0xaf51,	// (0x0000ef05) aid_size_cell_hwr_fs

0xe9e5,	// (0x00012999) bg_popup_sub_pane_cp3_ParamLimits

0xe9e5,	// (0x00012999) bg_popup_sub_pane_cp3

0xaf66,	// (0x0000ef1a) grid_hwr_fs_pane_ParamLimits

0xaf66,	// (0x0000ef1a) grid_hwr_fs_pane

0xaf7a,	// (0x0000ef2e) linegrid_hwr_fs_pane_ParamLimits

0xaf7a,	// (0x0000ef2e) linegrid_hwr_fs_pane

0xaf8a,	// (0x0000ef3e) cell_hwr_fs_pane_ParamLimits

0xaf8a,	// (0x0000ef3e) cell_hwr_fs_pane

0xe9f1,	// (0x000129a5) linegrid_hwr_fs_pane_g1_ParamLimits

0xe9f1,	// (0x000129a5) linegrid_hwr_fs_pane_g1

0xe9fd,	// (0x000129b1) linegrid_hwr_fs_pane_g2_ParamLimits

0xe9fd,	// (0x000129b1) linegrid_hwr_fs_pane_g2

0xea0f,	// (0x000129c3) linegrid_hwr_fs_pane_g3_ParamLimits

0xea0f,	// (0x000129c3) linegrid_hwr_fs_pane_g3

0xafa8,	// (0x0000ef5c) linegrid_hwr_fs_pane_g4_ParamLimits

0xafa8,	// (0x0000ef5c) linegrid_hwr_fs_pane_g4

0xafc2,	// (0x0000ef76) linegrid_hwr_fs_pane_g5_ParamLimits

0xafc2,	// (0x0000ef76) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x000137b0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x000137b0) linegrid_hwr_fs_pane_g

0xea1b,	// (0x000129cf) cell_hwr_fs_pane_g1_ParamLimits

0xea1b,	// (0x000129cf) cell_hwr_fs_pane_g1

0xe74b,	// (0x000126ff) cell_hwr_fs_pane_g2_ParamLimits

0xe74b,	// (0x000126ff) cell_hwr_fs_pane_g2

0xea31,	// (0x000129e5) cell_hwr_fs_pane_g3_ParamLimits

0xea31,	// (0x000129e5) cell_hwr_fs_pane_g3

0xea3e,	// (0x000129f2) cell_hwr_fs_pane_g4_ParamLimits

0xea3e,	// (0x000129f2) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x000137bb) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x000137bb) cell_hwr_fs_pane_g

0xafd8,	// (0x0000ef8c) cell_hwr_fs_pane_t1

0xc078,	// (0x0001002c) grid_highlight_pane_cp6

0xc078,	// (0x0001002c) main_idle_act2_pane

0xd11c,	// (0x000110d0) aid_inside_area_popup_secondary

0x01be,	// (0x00004172) aid_inside_area_window_primary_ParamLimits

0x01be,	// (0x00004172) aid_inside_area_window_primary

0x0e8a,	// (0x00004e3e) ai2_news_ticker_pane

0x0e92,	// (0x00004e46) aid_size_cell_ai1_link_ParamLimits

0x0e92,	// (0x00004e46) aid_size_cell_ai1_link

0x0eac,	// (0x00004e60) popup_ai2_data_window_ParamLimits

0x0eac,	// (0x00004e60) popup_ai2_data_window

0x0ec0,	// (0x00004e74) popup_ai2_link_window_ParamLimits

0x0ec0,	// (0x00004e74) popup_ai2_link_window

0xe9e5,	// (0x00012999) bg_popup_sub_pane_cp4_ParamLimits

0xe9e5,	// (0x00012999) bg_popup_sub_pane_cp4

0x0ed4,	// (0x00004e88) grid_ai2_link_pane_ParamLimits

0x0ed4,	// (0x00004e88) grid_ai2_link_pane

0x0eeb,	// (0x00004e9f) popup_ai2_link_window_g1_ParamLimits

0x0eeb,	// (0x00004e9f) popup_ai2_link_window_g1

0x0ef7,	// (0x00004eab) popup_ai2_link_window_g2_ParamLimits

0x0ef7,	// (0x00004eab) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00013982) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00013982) popup_ai2_link_window_g

0x0f06,	// (0x00004eba) ai2_mp_button_pane

0x0f0e,	// (0x00004ec2) ai2_mp_volume_pane

0xeba3,	// (0x00012b57) bg_popup_sub_pane_cp5_ParamLimits

0xeba3,	// (0x00012b57) bg_popup_sub_pane_cp5

0x0f16,	// (0x00004eca) heading_ai2_gene_pane_ParamLimits

0x0f16,	// (0x00004eca) heading_ai2_gene_pane

0x0f22,	// (0x00004ed6) list_ai2_gene_pane_ParamLimits

0x0f22,	// (0x00004ed6) list_ai2_gene_pane

0x0f6a,	// (0x00004f1e) cell_ai2_link_pane_ParamLimits

0x0f6a,	// (0x00004f1e) cell_ai2_link_pane

0x0f80,	// (0x00004f34) cell_ai2_link_pane_g1

0xc078,	// (0x0001002c) grid_highlight_pane_cp7

0xb2bc,	// (0x0000f270) ai2_mp_volume_pane_g1

0x1058,	// (0x0000500c) ai2_mp_volume_pane_g2

0x0fbd,	// (0x00004f71) list_ai2_gene_pane_t1

0x1050,	// (0x00005004) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001399b) ai2_mp_volume_pane_g

0xb2c4,	// (0x0000f278) volume_small_pane_cp3

0x1069,	// (0x0000501d) aid_size_cell_ai2_button

0x1071,	// (0x00005025) grid_ai2_button_pane

0x107a,	// (0x0000502e) cell_ai2_button_pane_ParamLimits

0x107a,	// (0x0000502e) cell_ai2_button_pane

0xbf91,	// (0x0000ff45) cell_ai2_button_pane_g1

0xc078,	// (0x0001002c) grid_highlight_pane_cp8

0x1008,	// (0x00004fbc) ai2_gene_pane_t1_ParamLimits

0x1008,	// (0x00004fbc) ai2_gene_pane_t1

0xdee9,	// (0x00011e9d) aid_height_parent_landscape

0x08f8,	// (0x000048ac) aid_height_set_list

0x0904,	// (0x000048b8) aid_size_parent

0x0c57,	// (0x00004c0b) aid_size_cell_graphic_pane_ParamLimits

0x0f32,	// (0x00004ee6) popup_ai2_data_window_g1_ParamLimits

0x0f32,	// (0x00004ee6) popup_ai2_data_window_g1

0x0f3e,	// (0x00004ef2) ai2_news_ticker_pane_g1

0x0f46,	// (0x00004efa) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00013987) ai2_news_ticker_pane_g

0x0f4e,	// (0x00004f02) ai2_news_ticker_pane_t1

0x0f5c,	// (0x00004f10) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001398c) ai2_news_ticker_pane_t

0x0bf1,	// (0x00004ba5) heading_ai2_gene_pane_g1

0x0f89,	// (0x00004f3d) heading_ai2_gene_pane_t1_ParamLimits

0x0f89,	// (0x00004f3d) heading_ai2_gene_pane_t1

0x0f9e,	// (0x00004f52) list_highlight_pane_cp6

0x0fa6,	// (0x00004f5a) ai2_gene_pane_ParamLimits

0x0fa6,	// (0x00004f5a) ai2_gene_pane

0x0fcb,	// (0x00004f7f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00013991) list_ai2_gene_pane_t

0x0fd9,	// (0x00004f8d) list_highlight_pane_cp8_ParamLimits

0x0fd9,	// (0x00004f8d) list_highlight_pane_cp8

0x0fea,	// (0x00004f9e) ai2_gene_pane_g1_ParamLimits

0x0fea,	// (0x00004f9e) ai2_gene_pane_g1

0x0ffc,	// (0x00004fb0) ai2_gene_pane_g2_ParamLimits

0x0ffc,	// (0x00004fb0) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00013996) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00013996) ai2_gene_pane_g

0xc8e8,	// (0x0001089c) scroll_pane_cp12

0xae04,	// (0x0000edb8) control_pane_t3_ParamLimits

0xae04,	// (0x0000edb8) control_pane_t3

0xde6e,	// (0x00011e22) status_small_pane_g8_ParamLimits

0xde6e,	// (0x00011e22) status_small_pane_g8

0xe0ae,	// (0x00012062) popup_find_window_ParamLimits

0xe230,	// (0x000121e4) popup_note_image_window_ParamLimits

0xcafa,	// (0x00010aae) list_double2_graphic_pane_vc_g1_ParamLimits

0xcafa,	// (0x00010aae) list_double2_graphic_pane_vc_g1

0xcb06,	// (0x00010aba) list_double2_graphic_pane_vc_g2_ParamLimits

0xcb06,	// (0x00010aba) list_double2_graphic_pane_vc_g2

0xca31,	// (0x000109e5) list_double2_graphic_pane_vc_g3_ParamLimits

0xca31,	// (0x000109e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf631,	// (0x000135e5) list_double2_graphic_pane_vc_g_ParamLimits

0xf631,	// (0x000135e5) list_double2_graphic_pane_vc_g

0xcb12,	// (0x00010ac6) list_double2_graphic_pane_vc_t1_ParamLimits

0xcb12,	// (0x00010ac6) list_double2_graphic_pane_vc_t1

0xcb06,	// (0x00010aba) list_single_heading_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_single_heading_pane_vc_g1

0xca31,	// (0x000109e5) list_single_heading_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_single_heading_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_single_heading_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_single_heading_pane_vc_g

0xe917,	// (0x000128cb) list_single_heading_pane_vc_t1_ParamLimits

0xe917,	// (0x000128cb) list_single_heading_pane_vc_t1

0xe92d,	// (0x000128e1) list_single_heading_pane_vc_t2_ParamLimits

0xe92d,	// (0x000128e1) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0001379f) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0001379f) list_single_heading_pane_vc_t

0xe93f,	// (0x000128f3) list_setting_number_pane_vc_g1_ParamLimits

0xe93f,	// (0x000128f3) list_setting_number_pane_vc_g1

0xe94b,	// (0x000128ff) list_setting_number_pane_vc_g2_ParamLimits

0xe94b,	// (0x000128ff) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x000137a4) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x000137a4) list_setting_number_pane_vc_g

0xe957,	// (0x0001290b) list_setting_number_pane_vc_t1_ParamLimits

0xe957,	// (0x0001290b) list_setting_number_pane_vc_t1

0xe96b,	// (0x0001291f) list_setting_number_pane_vc_t2_ParamLimits

0xe96b,	// (0x0001291f) list_setting_number_pane_vc_t2

0xe987,	// (0x0001293b) list_setting_number_pane_vc_t3_ParamLimits

0xe987,	// (0x0001293b) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x000137a9) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x000137a9) list_setting_number_pane_vc_t

0xe9ad,	// (0x00012961) set_value_pane_vc_ParamLimits

0xe9ad,	// (0x00012961) set_value_pane_vc

0x0ace,	// (0x00004a82) list_double2_graphic_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double2_graphic_pane_vc

0x0ae1,	// (0x00004a95) list_double2_large_graphic_pane_vc_ParamLimits

0x0ae1,	// (0x00004a95) list_double2_large_graphic_pane_vc

0x0ace,	// (0x00004a82) list_double2_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double2_pane_vc

0x0ace,	// (0x00004a82) list_double_graphic_heading_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_graphic_heading_pane_vc

0x0ace,	// (0x00004a82) list_double_graphic_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_graphic_pane_vc

0x0ace,	// (0x00004a82) list_double_heading_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_heading_pane_vc

0x0ae1,	// (0x00004a95) list_double_large_graphic_pane_vc_ParamLimits

0x0ae1,	// (0x00004a95) list_double_large_graphic_pane_vc

0x0ace,	// (0x00004a82) list_double_number_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_number_pane_vc

0x0ace,	// (0x00004a82) list_double_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_pane_vc

0x0ace,	// (0x00004a82) list_double_time_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_double_time_pane_vc

0x0ace,	// (0x00004a82) list_setting_number_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_setting_number_pane_vc

0x0ace,	// (0x00004a82) list_setting_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_setting_pane_vc

0x0ace,	// (0x00004a82) list_single_graphic_heading_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_single_graphic_heading_pane_vc

0x0ace,	// (0x00004a82) list_single_heading_pane_vc_ParamLimits

0x0ace,	// (0x00004a82) list_single_heading_pane_vc

0x0af2,	// (0x00004aa6) list_single_number_heading_pane_vc_ParamLimits

0x0af2,	// (0x00004aa6) list_single_number_heading_pane_vc

0xcafa,	// (0x00010aae) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcafa,	// (0x00010aae) list_double_graphic_heading_pane_vc_g1

0xcb06,	// (0x00010aba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xcb06,	// (0x00010aba) list_double_graphic_heading_pane_vc_g2

0xca31,	// (0x000109e5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xca31,	// (0x000109e5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf631,	// (0x000135e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x000135e5) list_double_graphic_heading_pane_vc_g

0x10ae,	// (0x00005062) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x10ae,	// (0x00005062) list_double_graphic_heading_pane_vc_t1

0xe917,	// (0x000128cb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe917,	// (0x000128cb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x000139a2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x000139a2) list_double_graphic_heading_pane_vc_t

0xe93f,	// (0x000128f3) list_setting_pane_vc_g1_ParamLimits

0xe93f,	// (0x000128f3) list_setting_pane_vc_g1

0xe94b,	// (0x000128ff) list_setting_pane_vc_g2_ParamLimits

0xe94b,	// (0x000128ff) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x000137a4) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x000137a4) list_setting_pane_vc_g

0x12ee,	// (0x000052a2) list_setting_pane_vc_t1_ParamLimits

0x12ee,	// (0x000052a2) list_setting_pane_vc_t1

0x1302,	// (0x000052b6) list_setting_pane_vc_t2_ParamLimits

0x1302,	// (0x000052b6) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x000139e5) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x000139e5) list_setting_pane_vc_t

0xe9ad,	// (0x00012961) set_value_pane_cp_vc_ParamLimits

0xe9ad,	// (0x00012961) set_value_pane_cp_vc

0xcb06,	// (0x00010aba) list_single_number_heading_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_single_number_heading_pane_vc_g1

0xca31,	// (0x000109e5) list_single_number_heading_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_single_number_heading_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_single_number_heading_pane_vc_g

0xe917,	// (0x000128cb) list_single_number_heading_pane_vc_t1_ParamLimits

0xe917,	// (0x000128cb) list_single_number_heading_pane_vc_t1

0x1324,	// (0x000052d8) list_single_number_heading_pane_vc_t2_ParamLimits

0x1324,	// (0x000052d8) list_single_number_heading_pane_vc_t2

0x1336,	// (0x000052ea) list_single_number_heading_pane_vc_t3_ParamLimits

0x1336,	// (0x000052ea) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x000139ea) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x000139ea) list_single_number_heading_pane_vc_t

0xcafa,	// (0x00010aae) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcafa,	// (0x00010aae) list_single_graphic_heading_pane_vc_g1

0xcb06,	// (0x00010aba) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xcb06,	// (0x00010aba) list_single_graphic_heading_pane_vc_g4

0xca31,	// (0x000109e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xca31,	// (0x000109e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf631,	// (0x000135e5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x000135e5) list_single_graphic_heading_pane_vc_g

0xe917,	// (0x000128cb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe917,	// (0x000128cb) list_single_graphic_heading_pane_vc_t1

0x1348,	// (0x000052fc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1348,	// (0x000052fc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x000139f1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000139f1) list_single_graphic_heading_pane_vc_t

0xcb06,	// (0x00010aba) list_double2_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_double2_pane_vc_g1

0xca31,	// (0x000109e5) list_double2_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_double2_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_double2_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_double2_pane_vc_g

0xca3d,	// (0x000109f1) list_double2_pane_vc_t1_ParamLimits

0xca3d,	// (0x000109f1) list_double2_pane_vc_t1

0xc9a0,	// (0x00010954) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc9a0,	// (0x00010954) list_double2_large_graphic_pane_vc_g1

0xc9ac,	// (0x00010960) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc9ac,	// (0x00010960) list_double2_large_graphic_pane_vc_g2

0xc9b8,	// (0x0001096c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc9b8,	// (0x0001096c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x000135b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x000135b5) list_double2_large_graphic_pane_vc_g

0xc9cc,	// (0x00010980) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc9cc,	// (0x00010980) list_double2_large_graphic_pane_vc_t1

0x135a,	// (0x0000530e) list_double_time_pane_vc_g1_ParamLimits

0x135a,	// (0x0000530e) list_double_time_pane_vc_g1

0x1366,	// (0x0000531a) list_double_time_pane_vc_g2_ParamLimits

0x1366,	// (0x0000531a) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x000139f6) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x000139f6) list_double_time_pane_vc_g

0x1372,	// (0x00005326) list_double_time_pane_vc_t1_ParamLimits

0x1372,	// (0x00005326) list_double_time_pane_vc_t1

0x138b,	// (0x0000533f) list_double_time_pane_vc_t2_ParamLimits

0x138b,	// (0x0000533f) list_double_time_pane_vc_t2

0x13a4,	// (0x00005358) list_double_time_pane_vc_t3_ParamLimits

0x13a4,	// (0x00005358) list_double_time_pane_vc_t3

0x13bc,	// (0x00005370) list_double_time_pane_vc_t4_ParamLimits

0x13bc,	// (0x00005370) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x000139fb) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x000139fb) list_double_time_pane_vc_t

0xcb06,	// (0x00010aba) list_double_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_double_pane_vc_g1

0xca31,	// (0x000109e5) list_double_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_double_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_double_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_double_pane_vc_g

0x13ce,	// (0x00005382) list_double_pane_vc_t1_ParamLimits

0x13ce,	// (0x00005382) list_double_pane_vc_t1

0x13e0,	// (0x00005394) list_double_pane_vc_t2_ParamLimits

0x13e0,	// (0x00005394) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x00013a04) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x00013a04) list_double_pane_vc_t

0xcb06,	// (0x00010aba) list_double_number_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_double_number_pane_vc_g1

0xca31,	// (0x000109e5) list_double_number_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_double_number_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_double_number_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_double_number_pane_vc_g

0x13f6,	// (0x000053aa) list_double_number_pane_vc_t1_ParamLimits

0x13f6,	// (0x000053aa) list_double_number_pane_vc_t1

0x140a,	// (0x000053be) list_double_number_pane_vc_t2_ParamLimits

0x140a,	// (0x000053be) list_double_number_pane_vc_t2

0x13e0,	// (0x00005394) list_double_number_pane_vc_t3_ParamLimits

0x13e0,	// (0x00005394) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x00013a09) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x00013a09) list_double_number_pane_vc_t

0x141c,	// (0x000053d0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x141c,	// (0x000053d0) list_double_large_graphic_pane_vc_g1

0x1428,	// (0x000053dc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1428,	// (0x000053dc) list_double_large_graphic_pane_vc_g2

0xc9b8,	// (0x0001096c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc9b8,	// (0x0001096c) list_double_large_graphic_pane_vc_g3

0x1437,	// (0x000053eb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x1437,	// (0x000053eb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x00013a10) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x00013a10) list_double_large_graphic_pane_vc_g

0x1443,	// (0x000053f7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x1443,	// (0x000053f7) list_double_large_graphic_pane_vc_t1

0x1455,	// (0x00005409) list_double_large_graphic_pane_vc_t2_ParamLimits

0x1455,	// (0x00005409) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x00013a19) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x00013a19) list_double_large_graphic_pane_vc_t

0xcb06,	// (0x00010aba) list_double_heading_pane_vc_g1_ParamLimits

0xcb06,	// (0x00010aba) list_double_heading_pane_vc_g1

0xca31,	// (0x000109e5) list_double_heading_pane_vc_g2_ParamLimits

0xca31,	// (0x000109e5) list_double_heading_pane_vc_g2

0x0001,

0xf67d,	// (0x00013631) list_double_heading_pane_vc_g_ParamLimits

0xf67d,	// (0x00013631) list_double_heading_pane_vc_g

0x146c,	// (0x00005420) list_double_heading_pane_vc_t1_ParamLimits

0x146c,	// (0x00005420) list_double_heading_pane_vc_t1

0xe917,	// (0x000128cb) list_double_heading_pane_vc_t2_ParamLimits

0xe917,	// (0x000128cb) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00013a1e) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00013a1e) list_double_heading_pane_vc_t

0xcafa,	// (0x00010aae) list_double_graphic_pane_vc_g1_ParamLimits

0xcafa,	// (0x00010aae) list_double_graphic_pane_vc_g1

0x147e,	// (0x00005432) list_double_graphic_pane_vc_g2_ParamLimits

0x147e,	// (0x00005432) list_double_graphic_pane_vc_g2

0x148d,	// (0x00005441) list_double_graphic_pane_vc_g3_ParamLimits

0x148d,	// (0x00005441) list_double_graphic_pane_vc_g3

0x0002,

0xfa6f,	// (0x00013a23) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00013a23) list_double_graphic_pane_vc_g

0x1499,	// (0x0000544d) list_double_graphic_pane_vc_t1_ParamLimits

0x1499,	// (0x0000544d) list_double_graphic_pane_vc_t1

0x13e0,	// (0x00005394) list_double_graphic_pane_vc_t2_ParamLimits

0x13e0,	// (0x00005394) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x00013a2a) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x00013a2a) list_double_graphic_pane_vc_t

0xa5f1,	// (0x0000e5a5) aid_size_cell_fastswap

0xa5f9,	// (0x0000e5ad) aid_size_cell_touch_ParamLimits

0xa5f9,	// (0x0000e5ad) aid_size_cell_touch

0xa748,	// (0x0000e6fc) popup_fast_swap_wide_window_ParamLimits

0xa748,	// (0x0000e6fc) popup_fast_swap_wide_window

0xa80e,	// (0x0000e7c2) touch_pane_ParamLimits

0xa80e,	// (0x0000e7c2) touch_pane

0xcd9e,	// (0x00010d52) button_value_adjust_pane_cp2

0xcda6,	// (0x00010d5a) button_value_adjust_pane_cp4

0xcdc6,	// (0x00010d7a) form_field_data_pane_cp2

0xcde5,	// (0x00010d99) form_field_data_wide_pane_cp2

0xd43e,	// (0x000113f2) bg_scroll_pane_ParamLimits

0xaa35,	// (0x0000e9e9) scroll_handle_pane_ParamLimits

0xaa49,	// (0x0000e9fd) scroll_sc2_down_pane_ParamLimits

0xaa49,	// (0x0000e9fd) scroll_sc2_down_pane

0xd46f,	// (0x00011423) scroll_sc2_up_pane_ParamLimits

0xd46f,	// (0x00011423) scroll_sc2_up_pane

0x18c6,	// (0x0000587a) grid_wheel_folder_pane_g1_ParamLimits

0x18c6,	// (0x0000587a) grid_wheel_folder_pane_g1

0xabfd,	// (0x0000ebb1) clock_nsta_pane_cp2_ParamLimits

0xabfd,	// (0x0000ebb1) clock_nsta_pane_cp2

0xdc03,	// (0x00011bb7) listscroll_midp_pane_ParamLimits

0xdc0f,	// (0x00011bc3) midp_canvas_pane

0xae45,	// (0x0000edf9) nsta_clock_indic_pane

0xdf3f,	// (0x00011ef3) listscroll_form_pane_vc

0xdf5c,	// (0x00011f10) listscroll_set_pane_vc_ParamLimits

0xdf5c,	// (0x00011f10) listscroll_set_pane_vc

0xe4dc,	// (0x00012490) clock_nsta_pane

0xe546,	// (0x000124fa) indicator_nsta_pane

0xe80d,	// (0x000127c1) bg_popup_sub_pane_cp2_ParamLimits

0xe821,	// (0x000127d5) find_pane_cp2_ParamLimits

0xe821,	// (0x000127d5) find_pane_cp2

0xe833,	// (0x000127e7) grid_toobar_pane_ParamLimits

0xe9b9,	// (0x0001296d) list_form_gen_pane_vc_ParamLimits

0xe9b9,	// (0x0001296d) list_form_gen_pane_vc

0xe9cf,	// (0x00012983) scroll_pane_cp8_vc_ParamLimits

0xe9cf,	// (0x00012983) scroll_pane_cp8_vc

0xea4b,	// (0x000129ff) data_form_wide_pane_vc_ParamLimits

0xea4b,	// (0x000129ff) data_form_wide_pane_vc

0xea57,	// (0x00012a0b) form_field_data_wide_pane_vc_g1

0xea5f,	// (0x00012a13) form_field_data_wide_pane_vc_t1_ParamLimits

0xea5f,	// (0x00012a13) form_field_data_wide_pane_vc_t1

0xce6e,	// (0x00010e22) input_focus_pane_cp6_vc_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_cp6_vc

0xed34,	// (0x00012ce8) list_midp_pane_ParamLimits

0xed40,	// (0x00012cf4) scroll_pane_cp16_ParamLimits

0xed40,	// (0x00012cf4) scroll_pane_cp16

0xed8e,	// (0x00012d42) button_value_adjust_pane_ParamLimits

0xed8e,	// (0x00012d42) button_value_adjust_pane

0x0916,	// (0x000048ca) button_value_adjust_pane_cp6_ParamLimits

0x0916,	// (0x000048ca) button_value_adjust_pane_cp6

0x0a1e,	// (0x000049d2) settings_code_pane_cp_ParamLimits

0x0a1e,	// (0x000049d2) settings_code_pane_cp

0xbf91,	// (0x0000ff45) cell_touch_pane_g1

0xbf91,	// (0x0000ff45) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x000136ce) cell_touch_pane_g

0x108c,	// (0x00005040) cell_touch_pane_cp_ParamLimits

0x108c,	// (0x00005040) cell_touch_pane_cp

0x109c,	// (0x00005050) cell_touch_pane_ParamLimits

0x109c,	// (0x00005050) cell_touch_pane

0xbf91,	// (0x0000ff45) scroll_sc2_down_pane_g1

0xbf91,	// (0x0000ff45) scroll_sc2_up_pane_g1

0xc078,	// (0x0001002c) bg_set_opt_pane_cp4_vc

0x10c0,	// (0x00005074) list_set_graphic_pane_vc_g1_ParamLimits

0x10c0,	// (0x00005074) list_set_graphic_pane_vc_g1

0x10cc,	// (0x00005080) list_set_graphic_pane_vc_g2_ParamLimits

0x10cc,	// (0x00005080) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x000139a7) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x000139a7) list_set_graphic_pane_vc_g

0x10d8,	// (0x0000508c) text_primary_small_cp13_vc_ParamLimits

0x10d8,	// (0x0000508c) text_primary_small_cp13_vc

0x10f0,	// (0x000050a4) list_set_graphic_pane_vc_ParamLimits

0x10f0,	// (0x000050a4) list_set_graphic_pane_vc

0xc078,	// (0x0001002c) input_focus_pane_cp2_vc

0xbf91,	// (0x0000ff45) setting_code_pane_vc_g1

0x1103,	// (0x000050b7) setting_code_pane_vc_t1

0x1111,	// (0x000050c5) set_text_pane_vc_t1_ParamLimits

0x1111,	// (0x000050c5) set_text_pane_vc_t1

0xc078,	// (0x0001002c) input_focus_pane_cp1_vc

0x112c,	// (0x000050e0) list_set_text_pane_vc

0xbf91,	// (0x0000ff45) setting_text_pane_vc_g1

0xc078,	// (0x0001002c) bg_set_opt_pane_cp2_vc

0x1136,	// (0x000050ea) setting_slider_graphic_pane_vc_g1

0x113e,	// (0x000050f2) setting_slider_graphic_pane_vc_t1

0x114c,	// (0x00005100) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x000139ac) setting_slider_graphic_pane_vc_t

0x115a,	// (0x0000510e) slider_set_pane_cp_vc

0x1162,	// (0x00005116) slider_set_pane_vc_g1

0x116b,	// (0x0000511f) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x000139b1) slider_set_pane_vc_g

0xcf94,	// (0x00010f48) set_opt_bg_pane_g1_copy1

0xcf9c,	// (0x00010f50) set_opt_bg_pane_g2_copy1

0x1197,	// (0x0000514b) set_opt_bg_pane_g3_copy1

0xcfac,	// (0x00010f60) set_opt_bg_pane_g4_copy1

0xcfb4,	// (0x00010f68) set_opt_bg_pane_g5_copy1

0xcfbc,	// (0x00010f70) set_opt_bg_pane_g6_copy1

0x119f,	// (0x00005153) set_opt_bg_pane_g7_copy1

0x11a7,	// (0x0000515b) set_opt_bg_pane_g8_copy1

0x11af,	// (0x00005163) set_opt_bg_pane_g9_copy1

0xc078,	// (0x0001002c) bg_set_opt_pane_cp_vc

0x11b7,	// (0x0000516b) setting_slider_pane_vc_t1

0x113e,	// (0x000050f2) setting_slider_pane_vc_t2

0x114c,	// (0x00005100) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x000139c0) setting_slider_pane_vc_t

0x115a,	// (0x0000510e) slider_set_pane_vc

0xafe6,	// (0x0000ef9a) volume_set_pane_vc_g1

0xb2cd,	// (0x0000f281) volume_set_pane_vc_g2

0xb2d6,	// (0x0000f28a) volume_set_pane_vc_g3

0xb2df,	// (0x0000f293) volume_set_pane_vc_g4

0xb2e8,	// (0x0000f29c) volume_set_pane_vc_g5

0xb2f1,	// (0x0000f2a5) volume_set_pane_vc_g6

0xb2fa,	// (0x0000f2ae) volume_set_pane_vc_g7

0xb303,	// (0x0000f2b7) volume_set_pane_vc_g8

0xb30c,	// (0x0000f2c0) volume_set_pane_vc_g9

0xb315,	// (0x0000f2c9) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x000139c7) volume_set_pane_vc_g

0x1217,	// (0x000051cb) volume_set_pane_vc

0x121f,	// (0x000051d3) button_value_adjust_pane_cp1_vc

0x1229,	// (0x000051dd) list_highlight_pane_cp2_vc

0x1232,	// (0x000051e6) list_set_pane_vc_ParamLimits

0x1232,	// (0x000051e6) list_set_pane_vc

0x1284,	// (0x00005238) main_pane_set_vc_t1_ParamLimits

0x1284,	// (0x00005238) main_pane_set_vc_t1

0x1299,	// (0x0000524d) main_pane_set_vc_t2_ParamLimits

0x1299,	// (0x0000524d) main_pane_set_vc_t2

0x12ab,	// (0x0000525f) main_pane_set_vc_t3_ParamLimits

0x12ab,	// (0x0000525f) main_pane_set_vc_t3

0x12bd,	// (0x00005271) main_pane_set_vc_t4_ParamLimits

0x12bd,	// (0x00005271) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x000139dc) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x000139dc) main_pane_set_vc_t

0x12cf,	// (0x00005283) setting_code_pane_vc_ParamLimits

0x12cf,	// (0x00005283) setting_code_pane_vc

0x12de,	// (0x00005292) setting_slider_graphic_pane_vc

0x12de,	// (0x00005292) setting_slider_pane_vc

0x12de,	// (0x00005292) setting_text_pane_vc

0x12de,	// (0x00005292) setting_volume_pane_vc

0x12e6,	// (0x0000529a) scroll_pane_cp121_vc

0xcd95,	// (0x00010d49) set_content_pane_vc

0x14ab,	// (0x0000545f) button_value_adjust_pane_g1

0x14b4,	// (0x00005468) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x00013a2f) button_value_adjust_pane_g

0x14bd,	// (0x00005471) form_field_slider_wide_pane_vc_t1_ParamLimits

0x14bd,	// (0x00005471) form_field_slider_wide_pane_vc_t1

0x14d3,	// (0x00005487) form_field_slider_wide_pane_vc_t2_ParamLimits

0x14d3,	// (0x00005487) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa80,	// (0x00013a34) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x00013a34) form_field_slider_wide_pane_vc_t

0xc3f1,	// (0x000103a5) input_focus_pane_cp10_vc_ParamLimits

0xc3f1,	// (0x000103a5) input_focus_pane_cp10_vc

0x14e8,	// (0x0000549c) slider_cont_pane_cp1_vc_ParamLimits

0x14e8,	// (0x0000549c) slider_cont_pane_cp1_vc

0x1162,	// (0x00005116) slider_form_pane_g1_cp2

0x116b,	// (0x0000511f) slider_form_pane_g2_cp2

0x1503,	// (0x000054b7) form_field_slider_pane_vc_t3

0x1511,	// (0x000054c5) form_field_slider_pane_vc_t4

0x151f,	// (0x000054d3) slider_form_pane_vc_ParamLimits

0x151f,	// (0x000054d3) slider_form_pane_vc

0x152c,	// (0x000054e0) form_field_slider_pane_vc_t1_ParamLimits

0x152c,	// (0x000054e0) form_field_slider_pane_vc_t1

0x1542,	// (0x000054f6) form_field_slider_pane_vc_t2_ParamLimits

0x1542,	// (0x000054f6) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x00013a44) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x00013a44) form_field_slider_pane_vc_t

0xc3f1,	// (0x000103a5) input_focus_pane_cp9_vc_ParamLimits

0xc3f1,	// (0x000103a5) input_focus_pane_cp9_vc

0x1554,	// (0x00005508) slider_cont_pane_vc_ParamLimits

0x1554,	// (0x00005508) slider_cont_pane_vc

0x1566,	// (0x0000551a) list_form_graphic_pane_cp_vc_ParamLimits

0x1566,	// (0x0000551a) list_form_graphic_pane_cp_vc

0xea57,	// (0x00012a0b) form_field_popup_wide_pane_vc_g1

0x157b,	// (0x0000552f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x157b,	// (0x0000552f) form_field_popup_wide_pane_vc_t1

0xce6e,	// (0x00010e22) input_focus_pane_cp8_vc_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_cp8_vc

0x1590,	// (0x00005544) list_form_wide_pane_vc_ParamLimits

0x1590,	// (0x00005544) list_form_wide_pane_vc

0x159c,	// (0x00005550) list_form_graphic_pane_vc_g1

0x15a4,	// (0x00005558) list_form_graphic_pane_vc_t1_ParamLimits

0x15a4,	// (0x00005558) list_form_graphic_pane_vc_t1

0xc158,	// (0x0001010c) list_highlight_pane_cp5_vc_ParamLimits

0xc158,	// (0x0001010c) list_highlight_pane_cp5_vc

0x15c0,	// (0x00005574) list_form_graphic_pane_vc_ParamLimits

0x15c0,	// (0x00005574) list_form_graphic_pane_vc

0xea57,	// (0x00012a0b) form_field_popup_pane_vc_g1

0x15d6,	// (0x0000558a) form_field_popup_pane_vc_t1_ParamLimits

0x15d6,	// (0x0000558a) form_field_popup_pane_vc_t1

0xce6e,	// (0x00010e22) input_focus_pane_cp7_vc_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_cp7_vc

0x15eb,	// (0x0000559f) list_form_pane_vc_ParamLimits

0x15eb,	// (0x0000559f) list_form_pane_vc

0x15f7,	// (0x000055ab) data_form_pane_vc_t1_ParamLimits

0x15f7,	// (0x000055ab) data_form_pane_vc_t1

0xcf94,	// (0x00010f48) input_focus_pane_vc_g1

0xcf9c,	// (0x00010f50) input_focus_pane_vc_g2

0xcfa4,	// (0x00010f58) input_focus_pane_vc_g3

0xcfac,	// (0x00010f60) input_focus_pane_vc_g4

0xcfb4,	// (0x00010f68) input_focus_pane_vc_g5

0xcfbc,	// (0x00010f70) input_focus_pane_vc_g6

0xcfc4,	// (0x00010f78) input_focus_pane_vc_g7

0xcfcc,	// (0x00010f80) input_focus_pane_vc_g8

0xcfd4,	// (0x00010f88) input_focus_pane_vc_g9

0xbf91,	// (0x0000ff45) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x00013657) input_focus_pane_vc_g

0xea4b,	// (0x000129ff) data_form_pane_vc_ParamLimits

0xea4b,	// (0x000129ff) data_form_pane_vc

0xea57,	// (0x00012a0b) form_field_data_pane_vc_g1

0x1612,	// (0x000055c6) form_field_data_pane_vc_t1_ParamLimits

0x1612,	// (0x000055c6) form_field_data_pane_vc_t1

0xce6e,	// (0x00010e22) input_focus_pane_vc_ParamLimits

0xce6e,	// (0x00010e22) input_focus_pane_vc

0xcd9e,	// (0x00010d52) button_value_adjust_pane_cp3_vc

0x1628,	// (0x000055dc) button_value_adjust_pane_cp5_vc

0x1630,	// (0x000055e4) form_field_data_pane_vc_ParamLimits

0x1630,	// (0x000055e4) form_field_data_pane_vc

0xcdc6,	// (0x00010d7a) form_field_data_pane_vc_cp2

0x1647,	// (0x000055fb) form_field_data_wide_pane_vc_ParamLimits

0x1647,	// (0x000055fb) form_field_data_wide_pane_vc

0x165d,	// (0x00005611) form_field_data_wide_pane_vc_cp2

0x1665,	// (0x00005619) form_field_popup_pane_vc_ParamLimits

0x1665,	// (0x00005619) form_field_popup_pane_vc

0x167c,	// (0x00005630) form_field_popup_wide_pane_vc_ParamLimits

0x167c,	// (0x00005630) form_field_popup_wide_pane_vc

0x1692,	// (0x00005646) form_field_slider_pane_vc_ParamLimits

0x1692,	// (0x00005646) form_field_slider_pane_vc

0x16a5,	// (0x00005659) form_field_slider_wide_pane_vc_ParamLimits

0x16a5,	// (0x00005659) form_field_slider_wide_pane_vc

0x16b8,	// (0x0000566c) grid_touch_1_pane_ParamLimits

0x16b8,	// (0x0000566c) grid_touch_1_pane

0x16c4,	// (0x00005678) grid_touch_2_pane_ParamLimits

0x16c4,	// (0x00005678) grid_touch_2_pane

0xdeb4,	// (0x00011e68) touch_pane_g1_ParamLimits

0xdeb4,	// (0x00011e68) touch_pane_g1

0x16dc,	// (0x00005690) cell_app_pane_cp_wide_ParamLimits

0x16dc,	// (0x00005690) cell_app_pane_cp_wide

0x16ec,	// (0x000056a0) grid_popup_fast_wide_pane_ParamLimits

0x16ec,	// (0x000056a0) grid_popup_fast_wide_pane

0x1700,	// (0x000056b4) scroll_pane_cp19_ParamLimits

0x1700,	// (0x000056b4) scroll_pane_cp19

0xc078,	// (0x0001002c) bg_popup_window_pane_cp20

0x1714,	// (0x000056c8) listscroll_popup_fast_wide_pane

0xc158,	// (0x0001010c) grid_indicator_nsta_pane

0x171c,	// (0x000056d0) clock_nsta_pane_g1

0x1725,	// (0x000056d9) clock_nsta_pane_t1

0x1741,	// (0x000056f5) cell_indicator_nsta_pane_ParamLimits

0x1741,	// (0x000056f5) cell_indicator_nsta_pane

0x1779,	// (0x0000572d) cell_indicator_nsta_pane_g1

0x1787,	// (0x0000573b) cell_indicator_nsta_pane_g2

0x0001,

0xfa9a,	// (0x00013a4e) cell_indicator_nsta_pane_g

0x179c,	// (0x00005750) clock_nsta_pane_cp

0x17a4,	// (0x00005758) indicator_nsta_pane_cp

0x17ad,	// (0x00005761) nsta_clock_indic_pane_g1

0xc238,	// (0x000101ec) grid_indicator_pane

0xd561,	// (0x00011515) scroll_pane_cp29

0xab54,	// (0x0000eb08) indicator_nsta_pane_cp2_ParamLimits

0xab54,	// (0x0000eb08) indicator_nsta_pane_cp2

0xc158,	// (0x0001010c) main_apps_wheel_pane

0xec1b,	// (0x00012bcf) form_midp_field_text_pane_ParamLimits

0xed60,	// (0x00012d14) scroll_bar_cp050_ParamLimits

0x1816,	// (0x000057ca) cell_indicator_pane_ParamLimits

0x1816,	// (0x000057ca) cell_indicator_pane

0x182c,	// (0x000057e0) cell_indicator_pane_g1

0x1836,	// (0x000057ea) grid_wheel_folder_pane_ParamLimits

0x1836,	// (0x000057ea) grid_wheel_folder_pane

0x1848,	// (0x000057fc) list_wheel_apps_pane_ParamLimits

0x1848,	// (0x000057fc) list_wheel_apps_pane

0x1857,	// (0x0000580b) main_apps_wheel_pane_g1_ParamLimits

0x1857,	// (0x0000580b) main_apps_wheel_pane_g1

0x186b,	// (0x0000581f) main_apps_wheel_pane_g2_ParamLimits

0x186b,	// (0x0000581f) main_apps_wheel_pane_g2

0x0001,

0xfab6,	// (0x00013a6a) main_apps_wheel_pane_g_ParamLimits

0xfab6,	// (0x00013a6a) main_apps_wheel_pane_g

0x187f,	// (0x00005833) main_apps_wheel_pane_t1_ParamLimits

0x187f,	// (0x00005833) main_apps_wheel_pane_t1

0x189e,	// (0x00005852) list_wheel_apps_pane_g1

0x18a6,	// (0x0000585a) list_wheel_apps_pane_g2

0x18ae,	// (0x00005862) list_wheel_apps_pane_g3

0x18b6,	// (0x0000586a) list_wheel_apps_pane_g4

0x18be,	// (0x00005872) list_wheel_apps_pane_g5

0x0004,

0xfabb,	// (0x00013a6f) list_wheel_apps_pane_g

0xc158,	// (0x0001010c) navi_icon_text_pane

0xe424,	// (0x000123d8) aid_fill_nsta

0x18dd,	// (0x00005891) navi_icon_text_pane_g1

0x18e9,	// (0x0000589d) navi_icon_text_pane_t1

0xd976,	// (0x0001192a) list_set_graphic_pane_t1_ParamLimits

0xd976,	// (0x0001192a) list_set_graphic_pane_t1

0xf46e,	// (0x00013422) popup_midp_note_alarm_window_t6_ParamLimits

0xf46e,	// (0x00013422) popup_midp_note_alarm_window_t6

0xf480,	// (0x00013434) popup_midp_note_alarm_window_t7_ParamLimits

0xf480,	// (0x00013434) popup_midp_note_alarm_window_t7

0xf492,	// (0x00013446) popup_midp_note_alarm_window_t8_ParamLimits

0xf492,	// (0x00013446) popup_midp_note_alarm_window_t8

0xf4a4,	// (0x00013458) popup_midp_note_alarm_window_t9_ParamLimits

0xf4a4,	// (0x00013458) popup_midp_note_alarm_window_t9

0xf4b6,	// (0x0001346a) popup_midp_note_alarm_window_t10_ParamLimits

0xf4b6,	// (0x0001346a) popup_midp_note_alarm_window_t10

0xf4c8,	// (0x0001347c) popup_midp_note_alarm_window_t11_ParamLimits

0xf4c8,	// (0x0001347c) popup_midp_note_alarm_window_t11

0xf4da,	// (0x0001348e) scroll_pane_cp17_ParamLimits

0xf4da,	// (0x0001348e) scroll_pane_cp17

0xafe6,	// (0x0000ef9a) volume_small_pane_cp_g1

0xb31e,	// (0x0000f2d2) volume_small_pane_cp_g2

0xb327,	// (0x0000f2db) volume_small_pane_cp_g3

0xb330,	// (0x0000f2e4) volume_small_pane_cp_g4

0xb013,	// (0x0000efc7) volume_small_pane_cp_g5

0xb339,	// (0x0000f2ed) volume_small_pane_cp_g6

0xb342,	// (0x0000f2f6) volume_small_pane_cp_g7

0xb34b,	// (0x0000f2ff) volume_small_pane_cp_g8

0xb354,	// (0x0000f308) volume_small_pane_cp_g9

0xb35d,	// (0x0000f311) volume_small_pane_cp_g10

0xdcca,	// (0x00011c7e) midp_ticker_pane_g1_ParamLimits

0xdcd6,	// (0x00011c8a) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001371f) midp_ticker_pane_g_ParamLimits

0xdce2,	// (0x00011c96) midp_ticker_pane_t1_ParamLimits

0xe434,	// (0x000123e8) aid_fill_nsta_2

0xed4c,	// (0x00012d00) list_form2_midp_pane

0x0a9d,	// (0x00004a51) midp_editing_number_pane_ParamLimits

0x0aa9,	// (0x00004a5d) midp_ticker_pane_ParamLimits

0x1943,	// (0x000058f7) form2_midp_field_pane

0x1967,	// (0x0000591b) scroll_pane_cp51

0x1987,	// (0x0000593b) form2_midp_button_pane_ParamLimits

0x1987,	// (0x0000593b) form2_midp_button_pane

0x1999,	// (0x0000594d) form2_midp_content_pane_ParamLimits

0x1999,	// (0x0000594d) form2_midp_content_pane

0x19b3,	// (0x00005967) form2_midp_field_choice_group_pane

0x19bb,	// (0x0000596f) form2_midp_field_pane_g1

0x19c3,	// (0x00005977) form2_midp_field_pane_g2

0x19cb,	// (0x0000597f) form2_midp_field_pane_g3

0x19d3,	// (0x00005987) form2_midp_field_pane_g4

0x0003,

0xfae0,	// (0x00013a94) form2_midp_field_pane_g

0x19db,	// (0x0000598f) form2_midp_gauge_slider_pane

0x19e3,	// (0x00005997) form2_midp_gauge_wait_pane

0x19eb,	// (0x0000599f) form2_midp_image_pane_ParamLimits

0x19eb,	// (0x0000599f) form2_midp_image_pane

0x1a06,	// (0x000059ba) form2_midp_label_pane_ParamLimits

0x1a06,	// (0x000059ba) form2_midp_label_pane

0x1a1f,	// (0x000059d3) form2_midp_label_pane_cp_ParamLimits

0x1a1f,	// (0x000059d3) form2_midp_label_pane_cp

0x1a3e,	// (0x000059f2) form2_midp_string_pane_ParamLimits

0x1a3e,	// (0x000059f2) form2_midp_string_pane

0x1a50,	// (0x00005a04) form2_midp_text_pane_ParamLimits

0x1a50,	// (0x00005a04) form2_midp_text_pane

0x1a69,	// (0x00005a1d) form2_midp_time_pane

0x1a79,	// (0x00005a2d) input_focus_pane_cp51_ParamLimits

0x1a79,	// (0x00005a2d) input_focus_pane_cp51

0x1a91,	// (0x00005a45) form2_midp_label_pane_t1_ParamLimits

0x1a91,	// (0x00005a45) form2_midp_label_pane_t1

0x1ad1,	// (0x00005a85) form2_mdip_text_pane_t1_ParamLimits

0x1ad1,	// (0x00005a85) form2_mdip_text_pane_t1

0x1aed,	// (0x00005aa1) form2_midp_time_pane_t1

0x1b08,	// (0x00005abc) form2_midp_gauge_slider_pane_t1

0x1b1a,	// (0x00005ace) form2_midp_gauge_slider_pane_t2

0x1b2c,	// (0x00005ae0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae9,	// (0x00013a9d) form2_midp_gauge_slider_pane_t

0x1b3e,	// (0x00005af2) form2_midp_slider_pane

0x1b4a,	// (0x00005afe) form2_midp_gauge_wait_pane_t1

0x1b58,	// (0x00005b0c) form2_midp_wait_pane_ParamLimits

0x1b58,	// (0x00005b0c) form2_midp_wait_pane

0xd66b,	// (0x0001161f) list_single_2graphic_pane_cp4_ParamLimits

0xd66b,	// (0x0001161f) list_single_2graphic_pane_cp4

0xea85,	// (0x00012a39) list_single_midp_graphic_pane_cp_ParamLimits

0xea85,	// (0x00012a39) list_single_midp_graphic_pane_cp

0xc078,	// (0x0001002c) list_highlight_pane_cp20

0x1b83,	// (0x00005b37) list_single_2graphic_pane_g1_cp4

0x0bf1,	// (0x00004ba5) list_single_2graphic_pane_g2_cp4

0x1b8b,	// (0x00005b3f) list_single_2graphic_pane_t1_cp4

0xc158,	// (0x0001010c) list_highlight_pane_cp21

0x1b9a,	// (0x00005b4e) list_single_midp_graphic_pane_g4_cp

0x1ba9,	// (0x00005b5d) list_single_midp_graphic_pane_t1_cp

0x1bbe,	// (0x00005b72) form2_mdip_string_pane_t1_ParamLimits

0x1bbe,	// (0x00005b72) form2_mdip_string_pane_t1

0xc078,	// (0x0001002c) bg_wml_button_pane_cp2

0xbf91,	// (0x0000ff45) form2_midp_image_pane_g1

0xcb83,	// (0x00010b37) list_double_large_graphic_pane_g5_ParamLimits

0xcb83,	// (0x00010b37) list_double_large_graphic_pane_g5

0xdc03,	// (0x00011bb7) midp_form_pane_ParamLimits

0xc158,	// (0x0001010c) main_apps_wheel_pane_ParamLimits

0xe254,	// (0x00012208) popup_preview_window_ParamLimits

0xe254,	// (0x00012208) popup_preview_window

0xe3cf,	// (0x00012383) popup_touch_info_window_ParamLimits

0xe3cf,	// (0x00012383) popup_touch_info_window

0xe3ed,	// (0x000123a1) popup_touch_menu_window_ParamLimits

0xe3ed,	// (0x000123a1) popup_touch_menu_window

0xbf87,	// (0x0000ff3b) bg_popup_sub_pane_cp6

0x1c36,	// (0x00005bea) list_touch_menu_pane

0x1c3e,	// (0x00005bf2) list_single_touch_menu_pane_ParamLimits

0x1c3e,	// (0x00005bf2) list_single_touch_menu_pane

0x1c55,	// (0x00005c09) list_single_touch_menu_pane_t1

0xc158,	// (0x0001010c) bg_popup_sub_pane_cp7_ParamLimits

0xc158,	// (0x0001010c) bg_popup_sub_pane_cp7

0x1c63,	// (0x00005c17) heading_sub_pane

0x1c6b,	// (0x00005c1f) list_touch_info_pane_ParamLimits

0x1c6b,	// (0x00005c1f) list_touch_info_pane

0x1c7a,	// (0x00005c2e) list_single_touch_info_pane_ParamLimits

0x1c7a,	// (0x00005c2e) list_single_touch_info_pane

0x1c8b,	// (0x00005c3f) list_single_touch_info_pane_t1

0x1c99,	// (0x00005c4d) list_single_touch_info_pane_t2

0x0001,

0xfaf7,	// (0x00013aab) list_single_touch_info_pane_t

0xdbfb,	// (0x00011baf) bg_popup_heading_pane_cp

0x1ca7,	// (0x00005c5b) heading_sub_pane_t1

0xe9e5,	// (0x00012999) bg_popup_preview_window_pane_cp_ParamLimits

0xe9e5,	// (0x00012999) bg_popup_preview_window_pane_cp

0x1c63,	// (0x00005c17) heading_preview_pane

0x1c6b,	// (0x00005c1f) list_preview_pane_ParamLimits

0x1c6b,	// (0x00005c1f) list_preview_pane

0x1cb5,	// (0x00005c69) popup_preview_window_g1

0x1c7a,	// (0x00005c2e) list_single_preview_pane_ParamLimits

0x1c7a,	// (0x00005c2e) list_single_preview_pane

0x1cbd,	// (0x00005c71) list_single_preview_pane_g1

0x1cc5,	// (0x00005c79) list_single_preview_pane_t1

0x1c8b,	// (0x00005c3f) list_single_preview_pane_t2

0x0001,

0xfafc,	// (0x00013ab0) list_single_preview_pane_t

0x1cd3,	// (0x00005c87) bg_popup_heading_pane_cp2_ParamLimits

0x1cd3,	// (0x00005c87) bg_popup_heading_pane_cp2

0x1ce9,	// (0x00005c9d) heading_preview_pane_g1

0x1cf1,	// (0x00005ca5) heading_preview_pane_t1_ParamLimits

0x1cf1,	// (0x00005ca5) heading_preview_pane_t1

0xc25b,	// (0x0001020f) soft_indicator_pane_t1_ParamLimits

0xc8c4,	// (0x00010878) scroll_pane_ParamLimits

0xd45d,	// (0x00011411) scroll_sc2_left_pane

0xd466,	// (0x0001141a) scroll_sc2_right_pane

0xd485,	// (0x00011439) scroll_bg_pane_g1_ParamLimits

0xd49a,	// (0x0001144e) scroll_bg_pane_g2_ParamLimits

0xd4b2,	// (0x00011466) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000136ae) scroll_bg_pane_g_ParamLimits

0xd485,	// (0x00011439) scroll_handle_pane_g1_ParamLimits

0xd4d4,	// (0x00011488) scroll_handle_pane_g2_ParamLimits

0xd4b2,	// (0x00011466) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x000136b5) scroll_handle_pane_g_ParamLimits

0xdf9c,	// (0x00011f50) popup_choice_list_window_ParamLimits

0xdf9c,	// (0x00011f50) popup_choice_list_window

0xe819,	// (0x000127cd) choice_list_pane

0xe88f,	// (0x00012843) cell_toolbar_pane_t1

0xe8b7,	// (0x0001286b) toolbar_button_pane_ParamLimits

0x0535,	// (0x000044e9) ai_gene_pane_1_t2_ParamLimits

0x0535,	// (0x000044e9) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000138c6) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000138c6) ai_gene_pane_1_t

0x1d0e,	// (0x00005cc2) scroll_sc2_left_pane_g1

0x1d0e,	// (0x00005cc2) scroll_sc2_right_pane_g1

0xdf6e,	// (0x00011f22) bg_popup_sub_pane_cp10

0x1d18,	// (0x00005ccc) list_choice_list_pane

0x1d2f,	// (0x00005ce3) list_single_choice_list_pane_ParamLimits

0x1d2f,	// (0x00005ce3) list_single_choice_list_pane

0x1d43,	// (0x00005cf7) list_single_choice_list_pane_g1

0xd159,	// (0x0001110d) list_single_choice_list_pane_t1_ParamLimits

0xd159,	// (0x0001110d) list_single_choice_list_pane_t1

0x1d4b,	// (0x00005cff) choice_list_pane_g1

0x1d53,	// (0x00005d07) choice_list_pane_t1

0xbf87,	// (0x0000ff3b) input_focus_pane_cp11

0xd33d,	// (0x000112f1) title_pane_stacon_g2_ParamLimits

0xd33d,	// (0x000112f1) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x00013694) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00013694) title_pane_stacon_g

0xdbfb,	// (0x00011baf) cursor_press_pane

0xe038,	// (0x00011fec) popup_fep_hwr_window_ParamLimits

0xe038,	// (0x00011fec) popup_fep_hwr_window

0xe094,	// (0x00012048) popup_fep_vkb_window_ParamLimits

0xe094,	// (0x00012048) popup_fep_vkb_window

0x1d61,	// (0x00005d15) cursor_press_pane_g1

0x0002,

0xfb25,	// (0x00013ad9) fep_vkb_side_pane_g_ParamLimits

0xb39b,	// (0x0000f34f) fep_hwr_candidate_pane_ParamLimits

0xb39b,	// (0x0000f34f) fep_hwr_candidate_pane

0xb3c3,	// (0x0000f377) fep_hwr_side_pane_ParamLimits

0xb3c3,	// (0x0000f377) fep_hwr_side_pane

0xb3e3,	// (0x0000f397) fep_hwr_top_pane_ParamLimits

0xb3e3,	// (0x0000f397) fep_hwr_top_pane

0xb3fb,	// (0x0000f3af) fep_hwr_write_pane_ParamLimits

0xb3fb,	// (0x0000f3af) fep_hwr_write_pane

0xfb25,	// (0x00013ad9) fep_vkb_side_pane_g

0x1e4a,	// (0x00005dfe) fep_hwr_top_pane_g1

0x1e38,	// (0x00005dec) fep_hwr_top_pane_g2

0xb435,	// (0x0000f3e9) fep_hwr_top_pane_g3

0x0002,

0xfb01,	// (0x00013ab5) fep_hwr_top_pane_g

0xb44a,	// (0x0000f3fe) fep_hwr_top_text_pane

0xd629,	// (0x000115dd) fep_hwr_top_text_pane_g1

0x1f49,	// (0x00005efd) fep_hwr_top_text_pane_t1

0xb538,	// (0x0000f4ec) fep_hwr_candidate_pane_g1

0x21c7,	// (0x0000617b) fep_vkb_keypad_pane_g3_ParamLimits

0x21c7,	// (0x0000617b) fep_vkb_keypad_pane_g3

0x21e9,	// (0x0000619d) fep_vkb_keypad_pane_g4_ParamLimits

0x21e9,	// (0x0000619d) fep_vkb_keypad_pane_g4

0x2258,	// (0x0000620c) fep_vkb_bottom_pane_g2_ParamLimits

0x2258,	// (0x0000620c) fep_vkb_bottom_pane_g2

0x0001,

0xfb2c,	// (0x00013ae0) fep_vkb_bottom_pane_g_ParamLimits

0xfb2c,	// (0x00013ae0) fep_vkb_bottom_pane_g

0x1d0e,	// (0x00005cc2) cell_vkb_side_pane_g2

0x0001,

0xfb36,	// (0x00013aea) cell_vkb_side_pane_g

0x22e3,	// (0x00006297) cell_vkb_side_pane_t1

0x22f1,	// (0x000062a5) cell_vkb_side_pane_t1_copy1

0x1d0e,	// (0x00005cc2) bg_fep_vkb_candidate_pane_g2

0x2415,	// (0x000063c9) cell_vkb_candidate_pane_ParamLimits

0x1fc5,	// (0x00005f79) aid_size_cell_vkb_ParamLimits

0x1fc5,	// (0x00005f79) aid_size_cell_vkb

0x2415,	// (0x000063c9) cell_vkb_candidate_pane

0xb55f,	// (0x0000f513) bg_popup_fep_shadow_pane_g1

0x203b,	// (0x00005fef) fep_vkb_bottom_pane_ParamLimits

0x203b,	// (0x00005fef) fep_vkb_bottom_pane

0x2078,	// (0x0000602c) fep_vkb_candidate_pane_ParamLimits

0x2078,	// (0x0000602c) fep_vkb_candidate_pane

0x2094,	// (0x00006048) fep_vkb_keypad_pane_ParamLimits

0x2094,	// (0x00006048) fep_vkb_keypad_pane

0x20c8,	// (0x0000607c) fep_vkb_side_pane_ParamLimits

0x20c8,	// (0x0000607c) fep_vkb_side_pane

0x20f4,	// (0x000060a8) fep_vkb_top_pane_ParamLimits

0x20f4,	// (0x000060a8) fep_vkb_top_pane

0x2120,	// (0x000060d4) fep_vkb_top_pane_g1_ParamLimits

0x2120,	// (0x000060d4) fep_vkb_top_pane_g1

0x212f,	// (0x000060e3) fep_vkb_top_pane_g2_ParamLimits

0x212f,	// (0x000060e3) fep_vkb_top_pane_g2

0x213e,	// (0x000060f2) fep_vkb_top_pane_g3_ParamLimits

0x213e,	// (0x000060f2) fep_vkb_top_pane_g3

0x0003,

0xfb1c,	// (0x00013ad0) fep_vkb_top_pane_g_ParamLimits

0xfb1c,	// (0x00013ad0) fep_vkb_top_pane_g

0x215c,	// (0x00006110) fep_vkb_top_text_pane_ParamLimits

0x215c,	// (0x00006110) fep_vkb_top_text_pane

0x216d,	// (0x00006121) fep_vkb_side_pane_g1_ParamLimits

0x216d,	// (0x00006121) fep_vkb_side_pane_g1

0x21b6,	// (0x0000616a) grid_vkb_side_pane_ParamLimits

0x21b6,	// (0x0000616a) grid_vkb_side_pane

0xb567,	// (0x0000f51b) bg_popup_fep_shadow_pane_g2

0xb570,	// (0x0000f524) bg_popup_fep_shadow_pane_g3

0xb578,	// (0x0000f52c) bg_popup_fep_shadow_pane_g4

0xb581,	// (0x0000f535) bg_popup_fep_shadow_pane_g5

0xb589,	// (0x0000f53d) bg_popup_fep_shadow_pane_g6

0xb591,	// (0x0000f545) bg_popup_fep_shadow_pane_g7

0xcfac,	// (0x00010f60) bg_popup_fep_shadow_pane_g8

0x2207,	// (0x000061bb) grid_vkb_keypad_number_pane_ParamLimits

0x2207,	// (0x000061bb) grid_vkb_keypad_number_pane

0x2217,	// (0x000061cb) grid_vkb_keypad_pane_ParamLimits

0x2217,	// (0x000061cb) grid_vkb_keypad_pane

0x223d,	// (0x000061f1) fep_vkb_bottom_pane_g1_ParamLimits

0x223d,	// (0x000061f1) fep_vkb_bottom_pane_g1

0x2266,	// (0x0000621a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x2266,	// (0x0000621a) grid_vkb_keypad_bottom_left_pane

0x227b,	// (0x0000622f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x227b,	// (0x0000622f) grid_vkb_keypad_bottom_right_pane

0x2290,	// (0x00006244) fep_vkb_top_text_pane_g1

0x22ab,	// (0x0000625f) fep_vkb_top_text_pane_t1

0x22c0,	// (0x00006274) cell_vkb_side_pane_ParamLimits

0x22c0,	// (0x00006274) cell_vkb_side_pane

0x1d0e,	// (0x00005cc2) cell_vkb_side_pane_g1

0x22ff,	// (0x000062b3) cell_vkb_keypad_pane_ParamLimits

0x22ff,	// (0x000062b3) cell_vkb_keypad_pane

0x236c,	// (0x00006320) cell_vkb_keypad_pane_g1

0x0008,

0xfb49,	// (0x00013afd) bg_popup_fep_shadow_pane_g

0xb5a1,	// (0x0000f555) cell_hwr_side_pane_g1

0xb5a1,	// (0x0000f555) cell_hwr_side_pane_g2

0x2376,	// (0x0000632a) cell_vkb_keypad_pane_t1

0x2384,	// (0x00006338) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2384,	// (0x00006338) cell_vkb_keypad_bottom_left_pane

0x23a1,	// (0x00006355) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x23a1,	// (0x00006355) cell_vkb_keypad_bottom_right_pane

0x1d0e,	// (0x00005cc2) cell_vkb_keypad_bottom_left_pane_g1

0x1d0e,	// (0x00005cc2) cell_vkb_keypad_bottom_right_pane_g1

0x23da,	// (0x0000638e) cell_vkb_keypad_number_pane_ParamLimits

0x23da,	// (0x0000638e) cell_vkb_keypad_number_pane

0x23f9,	// (0x000063ad) cell_vkb_keypad_number_pane_g1

0x2403,	// (0x000063b7) cell_vkb_keypad_number_pane_g2

0x240c,	// (0x000063c0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3b,	// (0x00013aef) cell_vkb_keypad_number_pane_g

0x2376,	// (0x0000632a) cell_vkb_keypad_number_pane_t1

0x242e,	// (0x000063e2) fep_vkb_candidate_pane_g1

0x0001,

0xfb5c,	// (0x00013b10) cell_hwr_side_pane_g

0x2489,	// (0x0000643d) cell_hwr_side_pane_t1

0xb5ab,	// (0x0000f55f) cell_hwr_side_pane_t1_copy1

0xb5b9,	// (0x0000f56d) cell_hwr_candidate_pane_g1

0xb5e8,	// (0x0000f59c) cell_hwr_candidate_pane_t1

0x1d0e,	// (0x00005cc2) cell_vkb_candidate_pane_g2

0x253a,	// (0x000064ee) cell_vkb_candidate_pane_t1

0xb366,	// (0x0000f31a) bg_popup_fep_shadow_pane_ParamLimits

0xb366,	// (0x0000f31a) bg_popup_fep_shadow_pane

0xb415,	// (0x0000f3c9) bg_fep_hwr_top_pane_g4

0x1e86,	// (0x00005e3a) bg_hwr_side_pane_g1_ParamLimits

0x1e86,	// (0x00005e3a) bg_hwr_side_pane_g1

0xb486,	// (0x0000f43a) cell_hwr_side_pane_ParamLimits

0xb486,	// (0x0000f43a) cell_hwr_side_pane

0xb4c1,	// (0x0000f475) fep_hwr_write_pane_g1_ParamLimits

0xb4c1,	// (0x0000f475) fep_hwr_write_pane_g1

0xb4ce,	// (0x0000f482) fep_hwr_write_pane_g2_ParamLimits

0xb4ce,	// (0x0000f482) fep_hwr_write_pane_g2

0xb4db,	// (0x0000f48f) fep_hwr_write_pane_g3_ParamLimits

0xb4db,	// (0x0000f48f) fep_hwr_write_pane_g3

0xb4e9,	// (0x0000f49d) fep_hwr_write_pane_g4_ParamLimits

0xb4e9,	// (0x0000f49d) fep_hwr_write_pane_g4

0x0005,

0xfb08,	// (0x00013abc) fep_hwr_write_pane_g_ParamLimits

0xfb08,	// (0x00013abc) fep_hwr_write_pane_g

0xb415,	// (0x0000f3c9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xb415,	// (0x0000f3c9) bg_fep_hwr_candidate_pane_g2

0xb4fe,	// (0x0000f4b2) cell_hwr_candidate_pane_ParamLimits

0xb4fe,	// (0x0000f4b2) cell_hwr_candidate_pane

0xb538,	// (0x0000f4ec) fep_hwr_candidate_pane_g1_ParamLimits

0x1ff3,	// (0x00005fa7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x1ff3,	// (0x00005fa7) bg_popup_fep_shadow_pane_cp2

0x214e,	// (0x00006102) fep_vkb_top_pane_g4_ParamLimits

0x214e,	// (0x00006102) fep_vkb_top_pane_g4

0x2194,	// (0x00006148) fep_vkb_side_pane_g2_ParamLimits

0x2194,	// (0x00006148) fep_vkb_side_pane_g2

0xccb3,	// (0x00010c67) list_setting_pane_t4_ParamLimits

0xccb3,	// (0x00010c67) list_setting_pane_t4

0xcd29,	// (0x00010cdd) list_setting_number_pane_t5_ParamLimits

0xcd29,	// (0x00010cdd) list_setting_number_pane_t5

0xd65b,	// (0x0001160f) list_double_heading_pane_cp2_ParamLimits

0xd65b,	// (0x0001160f) list_double_heading_pane_cp2

0xda70,	// (0x00011a24) list_double_heading_pane_g1_cp2_ParamLimits

0xda70,	// (0x00011a24) list_double_heading_pane_g1_cp2

0x2548,	// (0x000064fc) list_double_heading_pane_g2_cp2_ParamLimits

0x2548,	// (0x000064fc) list_double_heading_pane_g2_cp2

0x255c,	// (0x00006510) list_double_heading_pane_t1_cp2_ParamLimits

0x255c,	// (0x00006510) list_double_heading_pane_t1_cp2

0x2572,	// (0x00006526) list_double_heading_pane_t2_cp2_ParamLimits

0x2572,	// (0x00006526) list_double_heading_pane_t2_cp2

0xbf71,	// (0x0000ff25) aid_value_unit2

0xa784,	// (0x0000e738) popup_preview_fixed_window

0xc3ff,	// (0x000103b3) bg_popup_preview_window_pane_cp02

0x2584,	// (0x00006538) list_preview_fixed_pane

0x25ca,	// (0x0000657e) list_empty_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_empty_pane_fp

0x25ca,	// (0x0000657e) list_single_cale_day_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_cale_day_pane_fp

0x25ca,	// (0x0000657e) list_single_graphic_heading_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_graphic_heading_pane_fp

0x25ca,	// (0x0000657e) list_single_graphic_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_graphic_pane_fp

0x25ca,	// (0x0000657e) list_single_heading_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_heading_pane_fp

0x25ca,	// (0x0000657e) list_single_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_pane_fp

0x25de,	// (0x00006592) list_single_pane_fp_g1_ParamLimits

0x25de,	// (0x00006592) list_single_pane_fp_g1

0xcb06,	// (0x00010aba) list_single_pane_fp_g2_ParamLimits

0xcb06,	// (0x00010aba) list_single_pane_fp_g2

0x25ea,	// (0x0000659e) list_single_pane_fp_g3_ParamLimits

0x25ea,	// (0x0000659e) list_single_pane_fp_g3

0x25fe,	// (0x000065b2) list_single_pane_fp_g4_ParamLimits

0x25fe,	// (0x000065b2) list_single_pane_fp_g4

0x0003,

0xfb6f,	// (0x00013b23) list_single_pane_fp_g_ParamLimits

0xfb6f,	// (0x00013b23) list_single_pane_fp_g

0x260a,	// (0x000065be) list_single_pane_fp_t1_ParamLimits

0x260a,	// (0x000065be) list_single_pane_fp_t1

0x2621,	// (0x000065d5) list_single_graphic_pane_fp_g1_ParamLimits

0x2621,	// (0x000065d5) list_single_graphic_pane_fp_g1

0x25de,	// (0x00006592) list_single_graphic_pane_fp_g2_ParamLimits

0x25de,	// (0x00006592) list_single_graphic_pane_fp_g2

0xcb06,	// (0x00010aba) list_single_graphic_pane_fp_g3_ParamLimits

0xcb06,	// (0x00010aba) list_single_graphic_pane_fp_g3

0x25ea,	// (0x0000659e) list_single_graphic_pane_fp_g4_ParamLimits

0x25ea,	// (0x0000659e) list_single_graphic_pane_fp_g4

0x25fe,	// (0x000065b2) list_single_graphic_pane_fp_g5_ParamLimits

0x25fe,	// (0x000065b2) list_single_graphic_pane_fp_g5

0x0004,

0xfb78,	// (0x00013b2c) list_single_graphic_pane_fp_g_ParamLimits

0xfb78,	// (0x00013b2c) list_single_graphic_pane_fp_g

0x262d,	// (0x000065e1) list_single_graphic_pane_fp_t1_ParamLimits

0x262d,	// (0x000065e1) list_single_graphic_pane_fp_t1

0x2621,	// (0x000065d5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2621,	// (0x000065d5) list_single_graphic_heading_pane_fp_g1

0x25de,	// (0x00006592) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x25de,	// (0x00006592) list_single_graphic_heading_pane_fp_g2

0xcb06,	// (0x00010aba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xcb06,	// (0x00010aba) list_single_graphic_heading_pane_fp_g3

0x25ea,	// (0x0000659e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x25ea,	// (0x0000659e) list_single_graphic_heading_pane_fp_g4

0x25fe,	// (0x000065b2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x25fe,	// (0x000065b2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb78,	// (0x00013b2c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x00013b2c) list_single_graphic_heading_pane_fp_g

0x2643,	// (0x000065f7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2643,	// (0x000065f7) list_single_graphic_heading_pane_fp_t1

0x2659,	// (0x0000660d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2659,	// (0x0000660d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x00013b37) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x00013b37) list_single_graphic_heading_pane_fp_t

0x266b,	// (0x0000661f) list_single_cale_day_pane_fp_g1_ParamLimits

0x266b,	// (0x0000661f) list_single_cale_day_pane_fp_g1

0x26a3,	// (0x00006657) list_single_cale_day_pane_fp_g2_ParamLimits

0x26a3,	// (0x00006657) list_single_cale_day_pane_fp_g2

0x26af,	// (0x00006663) list_single_cale_day_pane_fp_g3_ParamLimits

0x26af,	// (0x00006663) list_single_cale_day_pane_fp_g3

0x26d7,	// (0x0000668b) list_single_cale_day_pane_fp_g4_ParamLimits

0x26d7,	// (0x0000668b) list_single_cale_day_pane_fp_g4

0x26fb,	// (0x000066af) list_single_cale_day_pane_fp_g5_ParamLimits

0x26fb,	// (0x000066af) list_single_cale_day_pane_fp_g5

0x0004,

0xfb88,	// (0x00013b3c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb88,	// (0x00013b3c) list_single_cale_day_pane_fp_g

0x271f,	// (0x000066d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x271f,	// (0x000066d3) list_single_cale_day_pane_fp_t1

0x2745,	// (0x000066f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x2745,	// (0x000066f9) list_single_cale_day_pane_fp_t2

0x275e,	// (0x00006712) list_single_cale_day_pane_fp_t3_ParamLimits

0x275e,	// (0x00006712) list_single_cale_day_pane_fp_t3

0x0002,

0xfb93,	// (0x00013b47) list_single_cale_day_pane_fp_t_ParamLimits

0xfb93,	// (0x00013b47) list_single_cale_day_pane_fp_t

0x25de,	// (0x00006592) list_empty_pane_fp_g1_ParamLimits

0x25de,	// (0x00006592) list_empty_pane_fp_g1

0x2777,	// (0x0000672b) list_empty_pane_fp_t1

0x2785,	// (0x00006739) list_empty_pane_fp_t2

0x0001,

0xfb9a,	// (0x00013b4e) list_empty_pane_fp_t

0x25de,	// (0x00006592) list_single_heading_pane_fp_g1_ParamLimits

0x25de,	// (0x00006592) list_single_heading_pane_fp_g1

0xcb06,	// (0x00010aba) list_single_heading_pane_fp_g2_ParamLimits

0xcb06,	// (0x00010aba) list_single_heading_pane_fp_g2

0x25ea,	// (0x0000659e) list_single_heading_pane_fp_g3_ParamLimits

0x25ea,	// (0x0000659e) list_single_heading_pane_fp_g3

0x0002,

0xfb9f,	// (0x00013b53) list_single_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x00013b53) list_single_heading_pane_fp_g

0x2793,	// (0x00006747) list_single_heading_pane_fp_t1_ParamLimits

0x2793,	// (0x00006747) list_single_heading_pane_fp_t1

0x27a5,	// (0x00006759) list_single_heading_pane_fp_t2_ParamLimits

0x27a5,	// (0x00006759) list_single_heading_pane_fp_t2

0x0001,

0xfba6,	// (0x00013b5a) list_single_heading_pane_fp_t_ParamLimits

0xfba6,	// (0x00013b5a) list_single_heading_pane_fp_t

0xd1c7,	// (0x0001117b) aid_size_cell_fast

0xc366,	// (0x0001031a) soft_indicator_pane_cp1_t1

0xd204,	// (0x000111b8) cell_app_pane_cp2_ParamLimits

0xd204,	// (0x000111b8) cell_app_pane_cp2

0xb388,	// (0x0000f33c) fep_hwr_candidate_drop_down_list_pane

0xb552,	// (0x0000f506) fep_hwr_candidate_pane_g3_ParamLimits

0xb552,	// (0x0000f506) fep_hwr_candidate_pane_g3

0x9b3b,	// (0x0000daef) fep_hwr_candidate_pane_g4_ParamLimits

0x9b3b,	// (0x0000daef) fep_hwr_candidate_pane_g4

0x0002,

0xfb15,	// (0x00013ac9) fep_hwr_candidate_pane_g_ParamLimits

0xfb15,	// (0x00013ac9) fep_hwr_candidate_pane_g

0x2067,	// (0x0000601b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x2067,	// (0x0000601b) fep_vkb_candidate_drop_down_list_pane

0x2436,	// (0x000063ea) fep_vkb_candidate_pane_g3

0x243e,	// (0x000063f2) fep_vkb_candidate_pane_g4

0x0002,

0xfb42,	// (0x00013af6) fep_vkb_candidate_pane_g

0xb5b9,	// (0x0000f56d) cell_hwr_candidate_pane_g1_ParamLimits

0xb5c7,	// (0x0000f57b) cell_hwr_candidate_pane_g3_ParamLimits

0xb5c7,	// (0x0000f57b) cell_hwr_candidate_pane_g3

0x4c06,	// (0x00008bba) cell_hwr_candidate_pane_g4_ParamLimits

0x4c06,	// (0x00008bba) cell_hwr_candidate_pane_g4

0x0002,

0xfb61,	// (0x00013b15) cell_hwr_candidate_pane_g_ParamLimits

0xfb61,	// (0x00013b15) cell_hwr_candidate_pane_g

0x2504,	// (0x000064b8) cell_vkb_candidate_pane_g3_ParamLimits

0x2504,	// (0x000064b8) cell_vkb_candidate_pane_g3

0x251f,	// (0x000064d3) cell_vkb_candidate_pane_g4_ParamLimits

0x251f,	// (0x000064d3) cell_vkb_candidate_pane_g4

0x27bb,	// (0x0000676f) cell_app_pane_cp2_g1_ParamLimits

0x27bb,	// (0x0000676f) cell_app_pane_cp2_g1

0x27d9,	// (0x0000678d) cell_app_pane_cp2_g2_ParamLimits

0x27d9,	// (0x0000678d) cell_app_pane_cp2_g2

0x0001,

0xfbab,	// (0x00013b5f) cell_app_pane_cp2_g_ParamLimits

0xfbab,	// (0x00013b5f) cell_app_pane_cp2_g

0x27e5,	// (0x00006799) cell_app_pane_cp2_t1_ParamLimits

0x27e5,	// (0x00006799) cell_app_pane_cp2_t1

0xce6e,	// (0x00010e22) grid_highlight_pane_cp1_ParamLimits

0xce6e,	// (0x00010e22) grid_highlight_pane_cp1

0xb605,	// (0x0000f5b9) cell_hwr_candidate_pane_cp1_ParamLimits

0xb605,	// (0x0000f5b9) cell_hwr_candidate_pane_cp1

0xb5b9,	// (0x0000f56d) fep_hwr_candidate_drop_down_list_pane_g1

0xb623,	// (0x0000f5d7) fep_hwr_candidate_drop_down_list_pane_g2

0xb630,	// (0x0000f5e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x00013b64) fep_hwr_candidate_drop_down_list_pane_g

0xb63d,	// (0x0000f5f1) fep_hwr_candidate_drop_down_list_scroll_pane

0xb646,	// (0x0000f5fa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb646,	// (0x0000f5fa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb653,	// (0x0000f607) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb653,	// (0x0000f607) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb660,	// (0x0000f614) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb660,	// (0x0000f614) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb66d,	// (0x0000f621) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb66d,	// (0x0000f621) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb688,	// (0x0000f63c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb688,	// (0x0000f63c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb6a3,	// (0x0000f657) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb6a3,	// (0x0000f657) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb6be,	// (0x0000f672) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb6be,	// (0x0000f672) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb6d9,	// (0x0000f68d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6d9,	// (0x0000f68d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb7,	// (0x00013b6b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb7,	// (0x00013b6b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x28b0,	// (0x00006864) cell_vkb_candidate_pane_cp1_ParamLimits

0x28b0,	// (0x00006864) cell_vkb_candidate_pane_cp1

0x214e,	// (0x00006102) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x214e,	// (0x00006102) fep_vkb_candidate_drop_down_list_pane_g1

0x2815,	// (0x000067c9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x2815,	// (0x000067c9) fep_vkb_candidate_drop_down_list_pane_g2

0x2822,	// (0x000067d6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x2822,	// (0x000067d6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x00013b7c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc8,	// (0x00013b7c) fep_vkb_candidate_drop_down_list_pane_g

0x28d3,	// (0x00006887) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x28d3,	// (0x00006887) fep_vkb_candidate_drop_down_list_scroll_pane

0x28e0,	// (0x00006894) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x28e0,	// (0x00006894) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x28ed,	// (0x000068a1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x28ed,	// (0x000068a1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x28f9,	// (0x000068ad) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x28f9,	// (0x000068ad) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x24a5,	// (0x00006459) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x24a5,	// (0x00006459) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x24c6,	// (0x0000647a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x24c6,	// (0x0000647a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x2905,	// (0x000068b9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2905,	// (0x000068b9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x2926,	// (0x000068da) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2926,	// (0x000068da) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x2947,	// (0x000068fb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2947,	// (0x000068fb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x00013b83) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x00013b83) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc082,	// (0x00010036) title_pane_g1_ParamLimits

0xc08f,	// (0x00010043) title_pane_g2_ParamLimits

0xf56a,	// (0x0001351e) title_pane_g_ParamLimits

0xd619,	// (0x000115cd) aid_call2_pane

0xd621,	// (0x000115d5) aid_call_pane

0xd629,	// (0x000115dd) popup_clock_analogue_window_g1

0xd629,	// (0x000115dd) popup_clock_analogue_window_g2

0xaa5e,	// (0x0000ea12) popup_clock_analogue_window_g3

0xaa67,	// (0x0000ea1b) popup_clock_analogue_window_g4

0xbf91,	// (0x0000ff45) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x000136c3) popup_clock_analogue_window_g

0xaa6f,	// (0x0000ea23) popup_clock_analogue_window_t1

0xaa7d,	// (0x0000ea31) clock_digital_number_pane_ParamLimits

0xaa7d,	// (0x0000ea31) clock_digital_number_pane

0xaa89,	// (0x0000ea3d) clock_digital_number_pane_cp02_ParamLimits

0xaa89,	// (0x0000ea3d) clock_digital_number_pane_cp02

0xaa95,	// (0x0000ea49) clock_digital_number_pane_cp03_ParamLimits

0xaa95,	// (0x0000ea49) clock_digital_number_pane_cp03

0xaaa1,	// (0x0000ea55) clock_digital_number_pane_cp04_ParamLimits

0xaaa1,	// (0x0000ea55) clock_digital_number_pane_cp04

0xaaad,	// (0x0000ea61) clock_digital_separator_pane_ParamLimits

0xaaad,	// (0x0000ea61) clock_digital_separator_pane

0xaab9,	// (0x0000ea6d) popup_clock_digital_window_t1_ParamLimits

0xaab9,	// (0x0000ea6d) popup_clock_digital_window_t1

0xbf91,	// (0x0000ff45) clock_digital_number_pane_g1

0xbf91,	// (0x0000ff45) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x000136ce) clock_digital_number_pane_g

0xbf91,	// (0x0000ff45) clock_digital_separator_pane_g1

0xbf91,	// (0x0000ff45) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x000136ce) clock_digital_separator_pane_g

0xe424,	// (0x000123d8) aid_fill_nsta_ParamLimits

0xe546,	// (0x000124fa) indicator_nsta_pane_ParamLimits

0xe6b9,	// (0x0001266d) popup_clock_analogue_window

0xe6b9,	// (0x0001266d) popup_clock_digital_window

0xc158,	// (0x0001010c) grid_indicator_nsta_pane_ParamLimits

0x1733,	// (0x000056e7) clock_nsta_pane_t2

0x0001,

0xfa95,	// (0x00013a49) clock_nsta_pane_t

0xaa22,	// (0x0000e9d6) aid_size_max_handle

0xaa2c,	// (0x0000e9e0) aid_size_min_handle

0xdbfb,	// (0x00011baf) editor_scroll_pane

0x2962,	// (0x00006916) ex_editor_pane

0xd135,	// (0x000110e9) scroll_pane_cp13

0xc8f1,	// (0x000108a5) scroll_pane_cp14

0xd653,	// (0x00011607) scroll_pane_cp36

0xd66b,	// (0x0001161f) list_single_graphic_hl_pane_cp2_ParamLimits

0xd66b,	// (0x0001161f) list_single_graphic_hl_pane_cp2

0x0b34,	// (0x00004ae8) list_single_graphic_hl_pane_ParamLimits

0x0b34,	// (0x00004ae8) list_single_graphic_hl_pane

0x296a,	// (0x0000691e) aid_size_min_hl_cp1

0x2973,	// (0x00006927) list_highlight_pane_cp34_ParamLimits

0x2973,	// (0x00006927) list_highlight_pane_cp34

0x2984,	// (0x00006938) list_single_graphic_hl_pane_g1_ParamLimits

0x2984,	// (0x00006938) list_single_graphic_hl_pane_g1

0x2991,	// (0x00006945) list_single_graphic_hl_pane_g2_ParamLimits

0x2991,	// (0x00006945) list_single_graphic_hl_pane_g2

0x2991,	// (0x00006945) list_single_graphic_hl_pane_g3_ParamLimits

0x2991,	// (0x00006945) list_single_graphic_hl_pane_g3

0xda70,	// (0x00011a24) list_single_graphic_hl_pane_g4_ParamLimits

0xda70,	// (0x00011a24) list_single_graphic_hl_pane_g4

0x2548,	// (0x000064fc) list_single_graphic_hl_pane_g5_ParamLimits

0x2548,	// (0x000064fc) list_single_graphic_hl_pane_g5

0x0004,

0xfbe0,	// (0x00013b94) list_single_graphic_hl_pane_g_ParamLimits

0xfbe0,	// (0x00013b94) list_single_graphic_hl_pane_g

0x299d,	// (0x00006951) list_single_graphic_hl_pane_t1_ParamLimits

0x299d,	// (0x00006951) list_single_graphic_hl_pane_t1

0x29b3,	// (0x00006967) aid_size_min_hl_cp2

0x29bc,	// (0x00006970) list_highlight_pane_cp34_cp2_ParamLimits

0x29bc,	// (0x00006970) list_highlight_pane_cp34_cp2

0x2984,	// (0x00006938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x2984,	// (0x00006938) list_single_graphic_hl_pane_g1_cp2

0x29c9,	// (0x0000697d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x29c9,	// (0x0000697d) list_single_graphic_hl_pane_g2_cp2

0x29d5,	// (0x00006989) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x29d5,	// (0x00006989) list_single_graphic_hl_pane_g3_cp2

0xda70,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xda70,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2

0x2548,	// (0x000064fc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x2548,	// (0x000064fc) list_single_graphic_hl_pane_g5_cp2

0xad44,	// (0x0000ecf8) control_pane_g4_ParamLimits

0xad44,	// (0x0000ecf8) control_pane_g4

0xdf6e,	// (0x00011f22) bg_popup_sub_pane_cp10_ParamLimits

0x1d18,	// (0x00005ccc) list_choice_list_pane_ParamLimits

0x1d27,	// (0x00005cdb) scroll_pane_cp23

0xc3ff,	// (0x000103b3) bg_popup_preview_window_pane_cp02_ParamLimits

0x2584,	// (0x00006538) list_preview_fixed_pane_ParamLimits

0x259a,	// (0x0000654e) list_preview_fixed_pane_cp_ParamLimits

0x259a,	// (0x0000654e) list_preview_fixed_pane_cp

0x25a6,	// (0x0000655a) popup_preview_fixed_window_g1_ParamLimits

0x25a6,	// (0x0000655a) popup_preview_fixed_window_g1

0x25b2,	// (0x00006566) popup_preview_fixed_window_g2_ParamLimits

0x25b2,	// (0x00006566) popup_preview_fixed_window_g2

0x0002,

0xfb68,	// (0x00013b1c) popup_preview_fixed_window_g_ParamLimits

0xfb68,	// (0x00013b1c) popup_preview_fixed_window_g

0xa9b2,	// (0x0000e966) aid_navi_side_left_pane_ParamLimits

0xa9c2,	// (0x0000e976) aid_navi_side_right_pane_ParamLimits

0xa9d1,	// (0x0000e985) navi_icon_pane_stacon_ParamLimits

0xa9e1,	// (0x0000e995) navi_navi_pane_stacon_ParamLimits

0xa9d1,	// (0x0000e985) navi_text_pane_stacon_ParamLimits

0xbf87,	// (0x0000ff3b) main_text_info_pane

0x29f7,	// (0x000069ab) listscroll_text_info_pane

0x29ff,	// (0x000069b3) list_text_info_pane_ParamLimits

0x29ff,	// (0x000069b3) list_text_info_pane

0x2a0e,	// (0x000069c2) scroll_pane_cp24_ParamLimits

0x2a0e,	// (0x000069c2) scroll_pane_cp24

0x2a2c,	// (0x000069e0) list_text_info_pane_t1_ParamLimits

0x2a2c,	// (0x000069e0) list_text_info_pane_t1

0xdfb6,	// (0x00011f6a) popup_fast_swap2_window_ParamLimits

0xdfb6,	// (0x00011f6a) popup_fast_swap2_window

0x2a49,	// (0x000069fd) aid_size_cell_fast2

0xbf87,	// (0x0000ff3b) bg_popup_window_pane_cp17

0xed78,	// (0x00012d2c) heading_pane_cp2

0xc673,	// (0x00010627) listscroll_fast2_pane

0x2a53,	// (0x00006a07) grid_fast2_pane

0x2a5b,	// (0x00006a0f) listscroll_fast2_pane_g1

0x2a63,	// (0x00006a17) listscroll_fast2_pane_g2

0x0001,

0xfbeb,	// (0x00013b9f) listscroll_fast2_pane_g

0xd135,	// (0x000110e9) scroll_pane_cp26

0x2a6b,	// (0x00006a1f) cell_fast2_pane_ParamLimits

0x2a6b,	// (0x00006a1f) cell_fast2_pane

0x2a81,	// (0x00006a35) cell_fast2_pane_g1

0x2a8a,	// (0x00006a3e) cell_fast2_pane_g2

0x2a93,	// (0x00006a47) cell_fast2_pane_g3

0x0002,

0xfbf0,	// (0x00013ba4) cell_fast2_pane_g

0xc74a,	// (0x000106fe) grid_highlight_pane_cp9

0xc75f,	// (0x00010713) main_eswt_pane_ParamLimits

0xc75f,	// (0x00010713) main_eswt_pane

0x2a23,	// (0x000069d7) list_single_text_info_pane

0x2a9b,	// (0x00006a4f) eswt_ctrl_button_pane

0x2a9b,	// (0x00006a4f) eswt_ctrl_canvas_pane

0x2aa3,	// (0x00006a57) eswt_ctrl_combo_pane

0x2a9b,	// (0x00006a4f) eswt_ctrl_default_pane

0x2a9b,	// (0x00006a4f) eswt_ctrl_label_pane

0x2aab,	// (0x00006a5f) eswt_ctrl_wait_pane

0x2ab3,	// (0x00006a67) eswt_shell_pane

0xbf87,	// (0x0000ff3b) listscroll_eswt_app_pane

0x2acf,	// (0x00006a83) popup_eswt_tasktip_window_ParamLimits

0x2acf,	// (0x00006a83) popup_eswt_tasktip_window

0xe9e5,	// (0x00012999) bg_popup_window_pane_cp18

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_ParamLimits

0x2ae0,	// (0x00006a94) eswt_control_pane_g1

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_ParamLimits

0x2aed,	// (0x00006aa1) eswt_control_pane_g2

0x2afa,	// (0x00006aae) eswt_control_pane_g3_ParamLimits

0x2afa,	// (0x00006aae) eswt_control_pane_g3

0x2b07,	// (0x00006abb) eswt_control_pane_g4_ParamLimits

0x2b07,	// (0x00006abb) eswt_control_pane_g4

0x0003,

0xfbf7,	// (0x00013bab) eswt_control_pane_g_ParamLimits

0xfbf7,	// (0x00013bab) eswt_control_pane_g

0xce6e,	// (0x00010e22) bg_button_pane_ParamLimits

0xce6e,	// (0x00010e22) bg_button_pane

0xc75f,	// (0x00010713) common_borders_pane_copy2_ParamLimits

0xc75f,	// (0x00010713) common_borders_pane_copy2

0x2b14,	// (0x00006ac8) control_button_pane_g1_ParamLimits

0x2b14,	// (0x00006ac8) control_button_pane_g1

0x2b20,	// (0x00006ad4) control_button_pane_g2_ParamLimits

0x2b20,	// (0x00006ad4) control_button_pane_g2

0x2b2c,	// (0x00006ae0) control_button_pane_g3_ParamLimits

0x2b2c,	// (0x00006ae0) control_button_pane_g3

0x0002,

0xfc00,	// (0x00013bb4) control_button_pane_g_ParamLimits

0xfc00,	// (0x00013bb4) control_button_pane_g

0x2b40,	// (0x00006af4) control_button_pane_t1

0x2b4e,	// (0x00006b02) control_button_pane_t2

0x0001,

0xfc07,	// (0x00013bbb) control_button_pane_t

0xe8c3,	// (0x00012877) bg_button_pane_g1

0xe8d3,	// (0x00012887) bg_button_pane_g2

0xe8cb,	// (0x0001287f) bg_button_pane_g3

0xe8e3,	// (0x00012897) bg_button_pane_g4

0xe8db,	// (0x0001288f) bg_button_pane_g5

0xe8eb,	// (0x0001289f) bg_button_pane_g6

0xe8f3,	// (0x000128a7) bg_button_pane_g7

0xe903,	// (0x000128b7) bg_button_pane_g8

0xe8fb,	// (0x000128af) bg_button_pane_g9

0x0008,

0xf866,	// (0x0001381a) bg_button_pane_g

0x1cd3,	// (0x00005c87) common_borders_pane_ParamLimits

0x1cd3,	// (0x00005c87) common_borders_pane

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy1_ParamLimits

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy1

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy1_ParamLimits

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy1

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy1_ParamLimits

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy1

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy1_ParamLimits

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy1

0x1d0e,	// (0x00005cc2) bg_eswt_ctrl_canvas_pane_g1

0x1cd3,	// (0x00005c87) common_borders_pane_cp2_ParamLimits

0x1cd3,	// (0x00005c87) common_borders_pane_cp2

0x1cd3,	// (0x00005c87) common_borders_pane_cp3_ParamLimits

0x1cd3,	// (0x00005c87) common_borders_pane_cp3

0x2b5c,	// (0x00006b10) separator_horizontal_pane

0xd466,	// (0x0001141a) separator_vertical_pane

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy2_ParamLimits

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy2

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy2_ParamLimits

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy2

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy2_ParamLimits

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy2

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy2_ParamLimits

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy2

0xbf87,	// (0x0000ff3b) common_borders_pane_cp4

0x2b64,	// (0x00006b18) separator_horizontal_pane_g1

0x2b6d,	// (0x00006b21) separator_horizontal_pane_g2

0x2b76,	// (0x00006b2a) separator_horizontal_pane_g3

0x0002,

0xfc0c,	// (0x00013bc0) separator_horizontal_pane_g

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy3_ParamLimits

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy3

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy3_ParamLimits

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy3

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy3_ParamLimits

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy3

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy3_ParamLimits

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy3

0xbf87,	// (0x0000ff3b) common_borders_pane_cp5

0x2b7f,	// (0x00006b33) separator_vertical_pane_g1

0x2b88,	// (0x00006b3c) separator_vertical_pane_g2

0x2b91,	// (0x00006b45) separator_vertical_pane_g3

0x0002,

0xfc13,	// (0x00013bc7) separator_vertical_pane_g

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy4_ParamLimits

0x2ae0,	// (0x00006a94) eswt_control_pane_g1_copy4

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy4_ParamLimits

0x2aed,	// (0x00006aa1) eswt_control_pane_g2_copy4

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy4_ParamLimits

0x2afa,	// (0x00006aae) eswt_control_pane_g3_copy4

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy4_ParamLimits

0x2b07,	// (0x00006abb) eswt_control_pane_g4_copy4

0x2b9a,	// (0x00006b4e) eswt_ctrl_combo_button_pane

0x2ba2,	// (0x00006b56) eswt_ctrl_input_pane

0x2baa,	// (0x00006b5e) popup_choice_list_window_cp70

0x2bb2,	// (0x00006b66) eswt_ctrl_input_pane_t1

0xbf87,	// (0x0000ff3b) input_focus_pane_cp70

0x1cd3,	// (0x00005c87) bg_button_pane_cp70_ParamLimits

0x1cd3,	// (0x00005c87) bg_button_pane_cp70

0x2bc0,	// (0x00006b74) eswt_ctrl_combo_button_pane_g1

0x2bc8,	// (0x00006b7c) wait_bar_pane_cp70

0xe9e5,	// (0x00012999) bg_popup_window_pane_cp70_ParamLimits

0xe9e5,	// (0x00012999) bg_popup_window_pane_cp70

0x2bd0,	// (0x00006b84) popup_eswt_tasktip_window_t1

0x2be6,	// (0x00006b9a) wait_bar_pane_cp71_ParamLimits

0x2be6,	// (0x00006b9a) wait_bar_pane_cp71

0x2bf2,	// (0x00006ba6) grid_eswt_app_pane

0xd45d,	// (0x00011411) scroll_pane_cp70

0x2bfb,	// (0x00006baf) cell_eswt_app_pane_ParamLimits

0x2bfb,	// (0x00006baf) cell_eswt_app_pane

0x2c23,	// (0x00006bd7) cell_eswt_app_pane_g1_ParamLimits

0x2c23,	// (0x00006bd7) cell_eswt_app_pane_g1

0x2c52,	// (0x00006c06) cell_eswt_app_pane_g2_ParamLimits

0x2c52,	// (0x00006c06) cell_eswt_app_pane_g2

0x0001,

0xfc1a,	// (0x00013bce) cell_eswt_app_pane_g_ParamLimits

0xfc1a,	// (0x00013bce) cell_eswt_app_pane_g

0x2c7b,	// (0x00006c2f) cell_eswt_app_pane_t1_ParamLimits

0x2c7b,	// (0x00006c2f) cell_eswt_app_pane_t1

0x2cad,	// (0x00006c61) grid_highlight_pane_cp70_ParamLimits

0x2cad,	// (0x00006c61) grid_highlight_pane_cp70

0xc905,	// (0x000108b9) set_content_pane_g1

0xde97,	// (0x00011e4b) status_small_volume_pane

0xb6f4,	// (0x0000f6a8) status_small_volume_pane_g1

0xb6fc,	// (0x0000f6b0) volume_small2_pane

0xb705,	// (0x0000f6b9) volume_small2_pane_g1

0xb70e,	// (0x0000f6c2) volume_small2_pane_g2

0xb717,	// (0x0000f6cb) volume_small2_pane_g3

0xb720,	// (0x0000f6d4) volume_small2_pane_g4

0xb729,	// (0x0000f6dd) volume_small2_pane_g5

0xb732,	// (0x0000f6e6) volume_small2_pane_g6

0xb73b,	// (0x0000f6ef) volume_small2_pane_g7

0xb744,	// (0x0000f6f8) volume_small2_pane_g8

0xb74d,	// (0x0000f701) volume_small2_pane_g9

0xb756,	// (0x0000f70a) volume_small2_pane_g10

0x0009,

0xfc1f,	// (0x00013bd3) volume_small2_pane_g

0x2290,	// (0x00006244) fep_vkb_top_text_pane_g1_ParamLimits

0x22ab,	// (0x0000625f) fep_vkb_top_text_pane_t1_ParamLimits

0x25be,	// (0x00006572) popup_preview_fixed_window_g3_ParamLimits

0x25be,	// (0x00006572) popup_preview_fixed_window_g3

0xe378,	// (0x0001232c) popup_toolbar_trans_pane

0x08f8,	// (0x000048ac) aid_height_set_list_ParamLimits

0x0904,	// (0x000048b8) aid_size_parent_ParamLimits

0xdf6e,	// (0x00011f22) list_highlight_pane_cp2_ParamLimits

0xc905,	// (0x000108b9) set_content_pane_g1_ParamLimits

0x0b49,	// (0x00004afd) list_single_image_pane_ParamLimits

0x0b49,	// (0x00004afd) list_single_image_pane

0x2d24,	// (0x00006cd8) aid_size_cell_image_ParamLimits

0x2d24,	// (0x00006cd8) aid_size_cell_image

0x2d31,	// (0x00006ce5) grid_single_image_pane_ParamLimits

0x2d31,	// (0x00006ce5) grid_single_image_pane

0xc905,	// (0x000108b9) list_single_image_pane_g1_ParamLimits

0xc905,	// (0x000108b9) list_single_image_pane_g1

0xce94,	// (0x00010e48) list_single_image_pane_g2_ParamLimits

0xce94,	// (0x00010e48) list_single_image_pane_g2

0x0001,

0xfc34,	// (0x00013be8) list_single_image_pane_g_ParamLimits

0xfc34,	// (0x00013be8) list_single_image_pane_g

0x0a87,	// (0x00004a3b) list_single_image_pane_t1_ParamLimits

0x0a87,	// (0x00004a3b) list_single_image_pane_t1

0x2d3d,	// (0x00006cf1) cell_image_list_pane_ParamLimits

0x2d3d,	// (0x00006cf1) cell_image_list_pane

0x2d50,	// (0x00006d04) cell_image_list_pane_g1

0x2d59,	// (0x00006d0d) cell_image_list_pane_g2

0x0001,

0xfc39,	// (0x00013bed) cell_image_list_pane_g

0x2d62,	// (0x00006d16) aid_size_cell_tb_trans_pane

0xce6e,	// (0x00010e22) bg_tb_trans_pane

0x2d74,	// (0x00006d28) grid_tb_trans_pane

0xe8c3,	// (0x00012877) bg_tb_trans_pane_g1

0xe8d3,	// (0x00012887) bg_tb_trans_pane_g2

0xe8cb,	// (0x0001287f) bg_tb_trans_pane_g3

0xe8e3,	// (0x00012897) bg_tb_trans_pane_g4

0xe8db,	// (0x0001288f) bg_tb_trans_pane_g5

0xe903,	// (0x000128b7) bg_tb_trans_pane_g6

0xe8fb,	// (0x000128af) bg_tb_trans_pane_g7

0xe8eb,	// (0x0001289f) bg_tb_trans_pane_g8

0xe8f3,	// (0x000128a7) bg_tb_trans_pane_g9

0x0008,

0xfc3e,	// (0x00013bf2) bg_tb_trans_pane_g

0x2d88,	// (0x00006d3c) cell_toolbar_trans_pane_ParamLimits

0x2d88,	// (0x00006d3c) cell_toolbar_trans_pane

0x1d0e,	// (0x00005cc2) cell_toolbar_trans_pane_g1

0x194b,	// (0x000058ff) list_form2_midp_pane_t1

0x1959,	// (0x0000590d) list_form2_midp_pane_t2

0x0001,

0xfadb,	// (0x00013a8f) list_form2_midp_pane_t

0x1967,	// (0x0000591b) scroll_pane_cp51_ParamLimits

0x1b68,	// (0x00005b1c) form2_midp_wait_pane_g1

0x1b71,	// (0x00005b25) form2_midp_wait_pane_g2

0x1b7a,	// (0x00005b2e) form2_midp_wait_pane_g3

0x0002,

0xfaf0,	// (0x00013aa4) form2_midp_wait_pane_g

0xc158,	// (0x0001010c) list_highlight_pane_cp21_ParamLimits

0x1b9a,	// (0x00005b4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x1ba9,	// (0x00005b5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0af2,	// (0x00004aa6) list_single_2graphic_im_pane_ParamLimits

0x0af2,	// (0x00004aa6) list_single_2graphic_im_pane

0x2dae,	// (0x00006d62) list_single_2graphic_im_pane_g1_ParamLimits

0x2dae,	// (0x00006d62) list_single_2graphic_im_pane_g1

0x2dbf,	// (0x00006d73) list_single_2graphic_im_pane_g2_ParamLimits

0x2dbf,	// (0x00006d73) list_single_2graphic_im_pane_g2

0x2dcb,	// (0x00006d7f) list_single_2graphic_im_pane_g3_ParamLimits

0x2dcb,	// (0x00006d7f) list_single_2graphic_im_pane_g3

0x0003,

0xfc51,	// (0x00013c05) list_single_2graphic_im_pane_g_ParamLimits

0xfc51,	// (0x00013c05) list_single_2graphic_im_pane_g

0x2deb,	// (0x00006d9f) list_single_2graphic_im_pane_t1_ParamLimits

0x2deb,	// (0x00006d9f) list_single_2graphic_im_pane_t1

0x25ca,	// (0x0000657e) list_single_graphic_2heading_pane_fp_ParamLimits

0x25ca,	// (0x0000657e) list_single_graphic_2heading_pane_fp

0x2621,	// (0x000065d5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2621,	// (0x000065d5) list_single_graphic_2heading_pane_fp_g1

0x25de,	// (0x00006592) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x25de,	// (0x00006592) list_single_graphic_2heading_pane_fp_g2

0xcb06,	// (0x00010aba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xcb06,	// (0x00010aba) list_single_graphic_2heading_pane_fp_g3

0x25ea,	// (0x0000659e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x25ea,	// (0x0000659e) list_single_graphic_2heading_pane_fp_g4

0x25fe,	// (0x000065b2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x25fe,	// (0x000065b2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb78,	// (0x00013b2c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb78,	// (0x00013b2c) list_single_graphic_2heading_pane_fp_g

0x2e1c,	// (0x00006dd0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2e1c,	// (0x00006dd0) list_single_graphic_2heading_pane_fp_t1

0x2659,	// (0x0000660d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2659,	// (0x0000660d) list_single_graphic_2heading_pane_fp_t2

0x2e32,	// (0x00006de6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2e32,	// (0x00006de6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5a,	// (0x00013c0e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5a,	// (0x00013c0e) list_single_graphic_2heading_pane_fp_t

0x1f31,	// (0x00005ee5) fep_hwr_write_pane_g5_ParamLimits

0x1f31,	// (0x00005ee5) fep_hwr_write_pane_g5

0x1f3d,	// (0x00005ef1) fep_hwr_write_pane_g6_ParamLimits

0x1f3d,	// (0x00005ef1) fep_hwr_write_pane_g6

0x2ab3,	// (0x00006a67) eswt_shell_pane_ParamLimits

0xe9e5,	// (0x00012999) bg_popup_window_pane_cp18_ParamLimits

0x07f2,	// (0x000047a6) heading_pane_cp70

0x2bd0,	// (0x00006b84) popup_eswt_tasktip_window_t1_ParamLimits

0xe466,	// (0x0001241a) aid_touch_tab_arrow_left

0xe472,	// (0x00012426) aid_touch_tab_arrow_right

0xc0a0,	// (0x00010054) title_pane_g3_ParamLimits

0xc0a0,	// (0x00010054) title_pane_g3

0xcd6c,	// (0x00010d20) set_value_pane_g1

0xe378,	// (0x0001232c) popup_toolbar_trans_pane_ParamLimits

0x2d62,	// (0x00006d16) aid_size_cell_tb_trans_pane_ParamLimits

0xce6e,	// (0x00010e22) bg_tb_trans_pane_ParamLimits

0x2d74,	// (0x00006d28) grid_tb_trans_pane_ParamLimits

0xc3ff,	// (0x000103b3) cont_note_pane_ParamLimits

0xc3ff,	// (0x000103b3) cont_note_pane

0xc75f,	// (0x00010713) cont_snote2_single_text_pane_ParamLimits

0xc75f,	// (0x00010713) cont_snote2_single_text_pane

0xc75f,	// (0x00010713) cont_snote2_single_graphic_pane_ParamLimits

0xc75f,	// (0x00010713) cont_snote2_single_graphic_pane

0xef82,	// (0x00012f36) cont_note_wait_pane_ParamLimits

0xef82,	// (0x00012f36) cont_note_wait_pane

0xef82,	// (0x00012f36) cont_note_image_pane_ParamLimits

0xef82,	// (0x00012f36) cont_note_image_pane

0x2e48,	// (0x00006dfc) popup_note2_window_g1_ParamLimits

0x2e48,	// (0x00006dfc) popup_note2_window_g1

0x2e79,	// (0x00006e2d) popup_note2_window_t1_ParamLimits

0x2e79,	// (0x00006e2d) popup_note2_window_t1

0x2ebe,	// (0x00006e72) popup_note2_window_t2_ParamLimits

0x2ebe,	// (0x00006e72) popup_note2_window_t2

0x2f03,	// (0x00006eb7) popup_note2_window_t3_ParamLimits

0x2f03,	// (0x00006eb7) popup_note2_window_t3

0x2f48,	// (0x00006efc) popup_note2_window_t4_ParamLimits

0x2f48,	// (0x00006efc) popup_note2_window_t4

0xc483,	// (0x00010437) popup_note2_window_t5_ParamLimits

0xc483,	// (0x00010437) popup_note2_window_t5

0x0004,

0xfc66,	// (0x00013c1a) popup_note2_window_t_ParamLimits

0xfc66,	// (0x00013c1a) popup_note2_window_t

0x2f77,	// (0x00006f2b) popup_note2_image_window_g1_ParamLimits

0x2f77,	// (0x00006f2b) popup_note2_image_window_g1

0x2f83,	// (0x00006f37) popup_note2_image_window_g2_ParamLimits

0x2f83,	// (0x00006f37) popup_note2_image_window_g2

0x0001,

0xfc71,	// (0x00013c25) popup_note2_image_window_g_ParamLimits

0xfc71,	// (0x00013c25) popup_note2_image_window_g

0x2f95,	// (0x00006f49) popup_note2_image_window_t1_ParamLimits

0x2f95,	// (0x00006f49) popup_note2_image_window_t1

0x2fad,	// (0x00006f61) popup_note2_image_window_t2_ParamLimits

0x2fad,	// (0x00006f61) popup_note2_image_window_t2

0x2fc5,	// (0x00006f79) popup_note2_image_window_t3_ParamLimits

0x2fc5,	// (0x00006f79) popup_note2_image_window_t3

0x0002,

0xfc76,	// (0x00013c2a) popup_note2_image_window_t_ParamLimits

0xfc76,	// (0x00013c2a) popup_note2_image_window_t

0xef90,	// (0x00012f44) popup_note2_wait_window_g1_ParamLimits

0xef90,	// (0x00012f44) popup_note2_wait_window_g1

0xef9c,	// (0x00012f50) popup_note2_wait_window_g2_ParamLimits

0xef9c,	// (0x00012f50) popup_note2_wait_window_g2

0xefa8,	// (0x00012f5c) popup_note2_wait_window_g3_ParamLimits

0xefa8,	// (0x00012f5c) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x000137fc) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x000137fc) popup_note2_wait_window_g

0x2fe1,	// (0x00006f95) popup_note2_wait_window_t1_ParamLimits

0x2fe1,	// (0x00006f95) popup_note2_wait_window_t1

0x2fff,	// (0x00006fb3) popup_note2_wait_window_t2_ParamLimits

0x2fff,	// (0x00006fb3) popup_note2_wait_window_t2

0x301d,	// (0x00006fd1) popup_note2_wait_window_t3_ParamLimits

0x301d,	// (0x00006fd1) popup_note2_wait_window_t3

0x302f,	// (0x00006fe3) popup_note2_wait_window_t4_ParamLimits

0x302f,	// (0x00006fe3) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x00013c31) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x00013c31) popup_note2_wait_window_t

0x3041,	// (0x00006ff5) wait_bar2_pane_ParamLimits

0x3041,	// (0x00006ff5) wait_bar2_pane

0x3059,	// (0x0000700d) popup_snote2_single_text_window_g1_ParamLimits

0x3059,	// (0x0000700d) popup_snote2_single_text_window_g1

0x3081,	// (0x00007035) popup_snote2_single_text_window_t1_ParamLimits

0x3081,	// (0x00007035) popup_snote2_single_text_window_t1

0x30cd,	// (0x00007081) popup_snote2_single_text_window_t2_ParamLimits

0x30cd,	// (0x00007081) popup_snote2_single_text_window_t2

0x3119,	// (0x000070cd) popup_snote2_single_text_window_t3_ParamLimits

0x3119,	// (0x000070cd) popup_snote2_single_text_window_t3

0x315a,	// (0x0000710e) popup_snote2_single_text_window_t4_ParamLimits

0x315a,	// (0x0000710e) popup_snote2_single_text_window_t4

0x3190,	// (0x00007144) popup_snote2_single_text_window_t5_ParamLimits

0x3190,	// (0x00007144) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x00013c3a) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x00013c3a) popup_snote2_single_text_window_t

0x31bb,	// (0x0000716f) popup_snote2_single_graphic_window_g1_ParamLimits

0x31bb,	// (0x0000716f) popup_snote2_single_graphic_window_g1

0x31e3,	// (0x00007197) popup_snote2_single_graphic_window_g2_ParamLimits

0x31e3,	// (0x00007197) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x00013c45) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x00013c45) popup_snote2_single_graphic_window_g

0x320b,	// (0x000071bf) popup_snote2_single_graphic_window_t1_ParamLimits

0x320b,	// (0x000071bf) popup_snote2_single_graphic_window_t1

0x3257,	// (0x0000720b) popup_snote2_single_graphic_window_t2_ParamLimits

0x3257,	// (0x0000720b) popup_snote2_single_graphic_window_t2

0x3119,	// (0x000070cd) popup_snote2_single_graphic_window_t3_ParamLimits

0x3119,	// (0x000070cd) popup_snote2_single_graphic_window_t3

0x315a,	// (0x0000710e) popup_snote2_single_graphic_window_t4_ParamLimits

0x315a,	// (0x0000710e) popup_snote2_single_graphic_window_t4

0x3190,	// (0x00007144) popup_snote2_single_graphic_window_t5_ParamLimits

0x3190,	// (0x00007144) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x00013c4a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x00013c4a) popup_snote2_single_graphic_window_t

0x17f5,	// (0x000057a9) clock_nsta_pane_cp2_t1

0x17f5,	// (0x000057a9) clock_nsta_pane_cp2_t2

0x0001,

0xfab1,	// (0x00013a65) clock_nsta_pane_cp2_t

0xce88,	// (0x00010e3c) form_field_data_wide_pane_g1_ParamLimits

0xc905,	// (0x000108b9) form_field_data_wide_pane_g2_ParamLimits

0xc905,	// (0x000108b9) form_field_data_wide_pane_g2

0xce94,	// (0x00010e48) form_field_data_wide_pane_g3_ParamLimits

0xce94,	// (0x00010e48) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00013646) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00013646) form_field_data_wide_pane_g

0x16d0,	// (0x00005684) grid_touch_3_pane_ParamLimits

0x16d0,	// (0x00005684) grid_touch_3_pane

0x32a3,	// (0x00007257) cell_touch_3_pane_ParamLimits

0x32a3,	// (0x00007257) cell_touch_3_pane

0x1d0e,	// (0x00005cc2) cell_touch_3_pane_g1

0x1d0e,	// (0x00005cc2) cell_touch_3_pane_g2

0x0001,

0xfb36,	// (0x00013aea) cell_touch_3_pane_g

0xc4b5,	// (0x00010469) cont_query_data_pane

0xc4bd,	// (0x00010471) cont_query_data_pane_cp1

0x32d0,	// (0x00007284) button_value_adjust_pane_cp7

0x32d8,	// (0x0000728c) query_popup_pane_cp3

0xd6d7,	// (0x0001168b) bg_popup_sub_pane_cp22_ParamLimits

0xaad8,	// (0x0000ea8c) navi_navi_volume_pane_cp2

0xaaf0,	// (0x0000eaa4) popup_side_volume_key_window_g2

0xaafc,	// (0x0000eab0) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x000136d8) popup_side_volume_key_window_g

0xab16,	// (0x0000eaca) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x000136df) popup_side_volume_key_window_t

0xd9f3,	// (0x000119a7) popup_side_volume_key_window_ParamLimits

0xcac6,	// (0x00010a7a) list_double_graphic_pane_g4_ParamLimits

0xcac6,	// (0x00010a7a) list_double_graphic_pane_g4

0x0b1d,	// (0x00004ad1) list_single_2heading_msg_pane_ParamLimits

0x0b1d,	// (0x00004ad1) list_single_2heading_msg_pane

0x3305,	// (0x000072b9) list_single_2heading_msg_pane_g1_ParamLimits

0x3305,	// (0x000072b9) list_single_2heading_msg_pane_g1

0x3311,	// (0x000072c5) list_single_2heading_msg_pane_g2_ParamLimits

0x3311,	// (0x000072c5) list_single_2heading_msg_pane_g2

0x331d,	// (0x000072d1) list_single_2heading_msg_pane_g3_ParamLimits

0x331d,	// (0x000072d1) list_single_2heading_msg_pane_g3

0x3329,	// (0x000072dd) list_single_2heading_msg_pane_g4_ParamLimits

0x3329,	// (0x000072dd) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x00013c55) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x00013c55) list_single_2heading_msg_pane_g

0x3341,	// (0x000072f5) list_single_2heading_msg_pane_t1_ParamLimits

0x3341,	// (0x000072f5) list_single_2heading_msg_pane_t1

0x3369,	// (0x0000731d) list_single_2heading_msg_pane_t2_ParamLimits

0x3369,	// (0x0000731d) list_single_2heading_msg_pane_t2

0x3398,	// (0x0000734c) list_single_2heading_msg_pane_t3_ParamLimits

0x3398,	// (0x0000734c) list_single_2heading_msg_pane_t3

0x33d1,	// (0x00007385) list_single_2heading_msg_pane_t4_ParamLimits

0x33d1,	// (0x00007385) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x00013c5e) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x00013c5e) list_single_2heading_msg_pane_t

0xc0ac,	// (0x00010060) title_pane_g4_ParamLimits

0xc0ac,	// (0x00010060) title_pane_g4

0xa928,	// (0x0000e8dc) title_pane_stacon_g3_ParamLimits

0xa928,	// (0x0000e8dc) title_pane_stacon_g3

0x2ddf,	// (0x00006d93) list_single_2graphic_im_pane_g4_ParamLimits

0x2ddf,	// (0x00006d93) list_single_2graphic_im_pane_g4

0x0552,	// (0x00004506) popup_side_volume_key_window_cp

0x0e9e,	// (0x00004e52) main_idle_act2_pane_t1

0xaede,	// (0x0000ee92) toolbar_button_pane_g10

0xc8bc,	// (0x00010870) popup_toolbar_window_cp1

0x17e6,	// (0x0000579a) clock_nsta_pane_cp_t1

0x17e6,	// (0x0000579a) clock_nsta_pane_cp_t2

0x0001,

0xfaac,	// (0x00013a60) clock_nsta_pane_cp_t

0xaad8,	// (0x0000ea8c) navi_navi_volume_pane_cp2_ParamLimits

0xaae4,	// (0x0000ea98) popup_side_volume_key_window_g1_ParamLimits

0xaaf0,	// (0x0000eaa4) popup_side_volume_key_window_g2_ParamLimits

0xaafc,	// (0x0000eab0) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x000136d8) popup_side_volume_key_window_g_ParamLimits

0xb374,	// (0x0000f328) fep_hwr_aid_pane

0xb415,	// (0x0000f3c9) bg_fep_hwr_top_pane_g4_ParamLimits

0x1e4a,	// (0x00005dfe) fep_hwr_top_pane_g1_ParamLimits

0x1e38,	// (0x00005dec) fep_hwr_top_pane_g2_ParamLimits

0xb435,	// (0x0000f3e9) fep_hwr_top_pane_g3_ParamLimits

0xfb01,	// (0x00013ab5) fep_hwr_top_pane_g_ParamLimits

0xb44a,	// (0x0000f3fe) fep_hwr_top_text_pane_ParamLimits

0x0326,	// (0x000042da) aid_touch_tab_arrow_arrow_2

0x031d,	// (0x000042d1) aid_touch_tab_arrow_left_2

0xb388,	// (0x0000f33c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb3bb,	// (0x0000f36f) fep_hwr_prediction_pane

0x20c0,	// (0x00006074) fep_vkb_prediction_pane

0x21a2,	// (0x00006156) fep_vkb_side_pane_g3_ParamLimits

0x21a2,	// (0x00006156) fep_vkb_side_pane_g3

0xb5b9,	// (0x0000f56d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb623,	// (0x0000f5d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb630,	// (0x0000f5e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb0,	// (0x00013b64) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb75f,	// (0x0000f713) fep_hwr_prediction_pane_g1

0xb769,	// (0x0000f71d) fep_hwr_prediction_pane_g2

0xb771,	// (0x0000f725) fep_hwr_prediction_pane_g3

0xb779,	// (0x0000f72d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00013c67) fep_hwr_prediction_pane_g

0x33f6,	// (0x000073aa) fep_vkb_prediction_pane_g1

0x3418,	// (0x000073cc) fep_vkb_prediction_pane_g2

0x3420,	// (0x000073d4) fep_vkb_prediction_pane_g3

0x3428,	// (0x000073dc) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x00013c70) fep_vkb_prediction_pane_g

0xb1ac,	// (0x0000f160) slider_set_pane_g3

0xb1c0,	// (0x0000f174) slider_set_pane_g4

0xb1d8,	// (0x0000f18c) slider_set_pane_g5

0xb1ac,	// (0x0000f160) slider_set_pane_g6

0xb1ee,	// (0x0000f1a2) slider_set_pane_g7

0x0a4b,	// (0x000049ff) slider_form_pane_g3

0x0a54,	// (0x00004a08) slider_form_pane_g4

0x0a5c,	// (0x00004a10) slider_form_pane_g5

0x0a4b,	// (0x000049ff) slider_form_pane_g6

0x0a64,	// (0x00004a18) slider_form_pane_g7

0x1173,	// (0x00005127) slider_set_pane_vc_g3

0x117c,	// (0x00005130) slider_set_pane_vc_g4

0x1185,	// (0x00005139) slider_set_pane_vc_g5

0x1173,	// (0x00005127) slider_set_pane_vc_g6

0x118e,	// (0x00005142) slider_set_pane_vc_g7

0x1173,	// (0x00005127) slider_form_pane_vc_g1

0x117c,	// (0x00005130) slider_form_pane_vc_g2

0x1185,	// (0x00005139) slider_form_pane_vc_g3

0x1173,	// (0x00005127) slider_form_pane_vc_g4

0x14fa,	// (0x000054ae) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x00013a39) slider_form_pane_vc_g

0xbf87,	// (0x0000ff3b) main_idle_act3_pane

0x3430,	// (0x000073e4) ai3_links_pane

0x3439,	// (0x000073ed) popup_ai3_data_window_ParamLimits

0x3439,	// (0x000073ed) popup_ai3_data_window

0xbf87,	// (0x0000ff3b) grid_ai3_links_pane

0x3451,	// (0x00007405) cell_ai3_links_pane_ParamLimits

0x3451,	// (0x00007405) cell_ai3_links_pane

0x3465,	// (0x00007419) bg_popup_sub_pane_cp11

0x3472,	// (0x00007426) cell_ai3_links_pane_g1

0xbf87,	// (0x0000ff3b) bg_popup_sub_pane_cp12

0x3497,	// (0x0000744b) heading_ai3_data_pane

0x349f,	// (0x00007453) list_ai3_gene_pane

0x34ab,	// (0x0000745f) popup_ai3_data_window_g1

0x34b3,	// (0x00007467) heading_ai3_data_pane_g1

0x34bb,	// (0x0000746f) heading_ai3_data_pane_t1

0x34c9,	// (0x0000747d) list_double_ai3_gene_pane_ParamLimits

0x34c9,	// (0x0000747d) list_double_ai3_gene_pane

0x34d6,	// (0x0000748a) list_single_ai3_gene_pane_ParamLimits

0x34d6,	// (0x0000748a) list_single_ai3_gene_pane

0x1cd3,	// (0x00005c87) list_highlight_pane_cp7_ParamLimits

0x1cd3,	// (0x00005c87) list_highlight_pane_cp7

0x34e3,	// (0x00007497) list_single_a13_gene_pane_t1_ParamLimits

0x34e3,	// (0x00007497) list_single_a13_gene_pane_t1

0x34fa,	// (0x000074ae) list_single_ai3_gene_pane_g1

0x3503,	// (0x000074b7) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x00013c79) list_single_ai3_gene_pane_g

0x350b,	// (0x000074bf) list_double_ai3_gene_pane_g1_ParamLimits

0x350b,	// (0x000074bf) list_double_ai3_gene_pane_g1

0x3517,	// (0x000074cb) list_double_ai3_gene_pane_t1_ParamLimits

0x3517,	// (0x000074cb) list_double_ai3_gene_pane_t1

0x3533,	// (0x000074e7) list_double_ai3_gene_pane_t2_ParamLimits

0x3533,	// (0x000074e7) list_double_ai3_gene_pane_t2

0x3548,	// (0x000074fc) list_double_ai3_gene_pane_t3_ParamLimits

0x3548,	// (0x000074fc) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x00013c7e) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x00013c7e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x32e9,	// (0x0000729d) aid_size_min_col_2

0x32f1,	// (0x000072a5) aid_size_min_msg_ParamLimits

0x32f1,	// (0x000072a5) aid_size_min_msg

0x229c,	// (0x00006250) fep_vkb_top_text_pane_g2_ParamLimits

0x229c,	// (0x00006250) fep_vkb_top_text_pane_g2

0x0001,

0xfb31,	// (0x00013ae5) fep_vkb_top_text_pane_g_ParamLimits

0xfb31,	// (0x00013ae5) fep_vkb_top_text_pane_g

0xbf87,	// (0x0000ff3b) main_hc_apps_shell_pane

0x3565,	// (0x00007519) grid_hc_apps_pane_ParamLimits

0x3565,	// (0x00007519) grid_hc_apps_pane

0x3574,	// (0x00007528) list_hc_apps_pane

0x357c,	// (0x00007530) scroll_pane_cp37_ParamLimits

0x357c,	// (0x00007530) scroll_pane_cp37

0x3588,	// (0x0000753c) cell_hc_apps_pane_ParamLimits

0x3588,	// (0x0000753c) cell_hc_apps_pane

0x3616,	// (0x000075ca) cell_hc_apps_pane_g1_ParamLimits

0x3616,	// (0x000075ca) cell_hc_apps_pane_g1

0x3643,	// (0x000075f7) cell_hc_apps_pane_g2_ParamLimits

0x3643,	// (0x000075f7) cell_hc_apps_pane_g2

0x365f,	// (0x00007613) cell_hc_apps_pane_g3_ParamLimits

0x365f,	// (0x00007613) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x00013c85) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x00013c85) cell_hc_apps_pane_g

0x3681,	// (0x00007635) cell_hc_apps_pane_t1_ParamLimits

0x3681,	// (0x00007635) cell_hc_apps_pane_t1

0xc3ff,	// (0x000103b3) grid_highlight_pane_cp10_ParamLimits

0xc3ff,	// (0x000103b3) grid_highlight_pane_cp10

0x36bf,	// (0x00007673) list_single_hc_apps_pane_ParamLimits

0x36bf,	// (0x00007673) list_single_hc_apps_pane

0x36ef,	// (0x000076a3) list_single_hc_apps_pane_g1

0x3708,	// (0x000076bc) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x00013c8c) list_single_hc_apps_pane_g

0x3721,	// (0x000076d5) list_single_hc_apps_pane_g2_copy1

0x373d,	// (0x000076f1) list_single_hc_apps_pane_t1

0xc158,	// (0x0001010c) bg_set_opt_pane_cp_ParamLimits

0xa876,	// (0x0000e82a) setting_slider_pane_t1_ParamLimits

0xa88c,	// (0x0000e840) setting_slider_pane_t2_ParamLimits

0xa8a5,	// (0x0000e859) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001352e) setting_slider_pane_t_ParamLimits

0xa8bc,	// (0x0000e870) slider_set_pane_ParamLimits

0xad59,	// (0x0000ed0d) control_pane_g5_ParamLimits

0xad59,	// (0x0000ed0d) control_pane_g5

0x085f,	// (0x00004813) slider_set_pane_g1_ParamLimits

0xb1a0,	// (0x0000f154) slider_set_pane_g2_ParamLimits

0xb1ac,	// (0x0000f160) slider_set_pane_g3_ParamLimits

0xb1c0,	// (0x0000f174) slider_set_pane_g4_ParamLimits

0xb1d8,	// (0x0000f18c) slider_set_pane_g5_ParamLimits

0xb1ac,	// (0x0000f160) slider_set_pane_g6_ParamLimits

0xb1ee,	// (0x0000f1a2) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00013918) slider_set_pane_g_ParamLimits

0xc158,	// (0x0001010c) navi_icon_text_pane_ParamLimits

0xe434,	// (0x000123e8) aid_fill_nsta_2_ParamLimits

0xe466,	// (0x0001241a) aid_touch_tab_arrow_left_ParamLimits

0xe472,	// (0x00012426) aid_touch_tab_arrow_right_ParamLimits

0xe4dc,	// (0x00012490) clock_nsta_pane_ParamLimits

0x02ff,	// (0x000042b3) navi_icon_pane_g1_ParamLimits

0x030b,	// (0x000042bf) navi_text_pane_t1_ParamLimits

0x18dd,	// (0x00005891) navi_icon_text_pane_g1_ParamLimits

0x18e9,	// (0x0000589d) navi_icon_text_pane_t1_ParamLimits

0x36ef,	// (0x000076a3) list_single_hc_apps_pane_g1_ParamLimits

0x3708,	// (0x000076bc) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x00013c8c) list_single_hc_apps_pane_g_ParamLimits

0x3721,	// (0x000076d5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x373d,	// (0x000076f1) list_single_hc_apps_pane_t1_ParamLimits

0xa7a8,	// (0x0000e75c) popup_toolbar2_fixed_window_ParamLimits

0xa7a8,	// (0x0000e75c) popup_toolbar2_fixed_window

0xe370,	// (0x00012324) popup_toolbar2_float_window

0xbf87,	// (0x0000ff3b) bg_popup_sub_pane_cp27

0x376b,	// (0x0000771f) grid_toolbar2_float_pane

0xbf87,	// (0x0000ff3b) bg_popup_sub_pane_cp26

0x376b,	// (0x0000771f) grid_toolbar2_fixed_pane

0x3773,	// (0x00007727) cell_toolbar2_fixed_pane_ParamLimits

0x3773,	// (0x00007727) cell_toolbar2_fixed_pane

0x3784,	// (0x00007738) cell_toolbar2_fixed_pane_g1

0x378d,	// (0x00007741) toolbar2_fixed_button_pane

0xe8c3,	// (0x00012877) toolbar2_fixed_button_pane_g1

0xe8d3,	// (0x00012887) toolbar2_fixed_button_pane_g2

0xe8cb,	// (0x0001287f) toolbar2_fixed_button_pane_g3

0xe8e3,	// (0x00012897) toolbar2_fixed_button_pane_g4

0xe8db,	// (0x0001288f) toolbar2_fixed_button_pane_g5

0xe8eb,	// (0x0001289f) toolbar2_fixed_button_pane_g6

0xe8f3,	// (0x000128a7) toolbar2_fixed_button_pane_g7

0xe903,	// (0x000128b7) toolbar2_fixed_button_pane_g8

0xe8fb,	// (0x000128af) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0001381a) toolbar2_fixed_button_pane_g

0x3795,	// (0x00007749) cell_toolbar2_float_pane_ParamLimits

0x3795,	// (0x00007749) cell_toolbar2_float_pane

0x37a6,	// (0x0000775a) cell_toolbar2_float_pane_g1

0x378d,	// (0x00007741) toolbar2_fixed_button_pane_cp

0x202f,	// (0x00005fe3) fep_vkb_accented_list_pane_ParamLimits

0x202f,	// (0x00005fe3) fep_vkb_accented_list_pane

0xb599,	// (0x0000f54d) bg_popup_fep_shadow_pane_g9

0xdbfb,	// (0x00011baf) bg_popup_fep_shadow_pane_cp3

0xd11c,	// (0x000110d0) list_accented_list_pane

0x37af,	// (0x00007763) list_single_accented_list_pane_ParamLimits

0x37af,	// (0x00007763) list_single_accented_list_pane

0xdbfb,	// (0x00011baf) list_highlight_pane_cp10

0x37c0,	// (0x00007774) list_single_accented_list_pane_t1

0xe2d6,	// (0x0001228a) popup_slider_window_ParamLimits

0xe2d6,	// (0x0001228a) popup_slider_window

0x32e0,	// (0x00007294) aid_indentation_list_msg

0x3860,	// (0x00007814) bg_popup_window_pane_cp19

0x38c4,	// (0x00007878) popup_slider_window_g1

0x38e0,	// (0x00007894) popup_slider_window_g2

0x38fc,	// (0x000078b0) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x00013c91) popup_slider_window_g

0x3958,	// (0x0000790c) popup_slider_window_t1

0x39ca,	// (0x0000797e) small_volume_slider_vertical_pane

0x1d0e,	// (0x00005cc2) small_volume_slider_vertical_pane_g1

0x1d0e,	// (0x00005cc2) small_volume_slider_vertical_pane_g2

0x39e6,	// (0x0000799a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x00013ca3) small_volume_slider_vertical_pane_g

0xa61c,	// (0x0000e5d0) area_side_right_pane_ParamLimits

0xa61c,	// (0x0000e5d0) area_side_right_pane

0xb781,	// (0x0000f735) aid_size_side_button_ParamLimits

0xb781,	// (0x0000f735) aid_size_side_button

0xb795,	// (0x0000f749) grid_sctrl_middle_pane_ParamLimits

0xb795,	// (0x0000f749) grid_sctrl_middle_pane

0xb7b1,	// (0x0000f765) sctrl_sk_bottom_pane

0xb7c2,	// (0x0000f776) sctrl_sk_top_pane

0xb7d4,	// (0x0000f788) aid_touch_sctrl_top

0xb7e1,	// (0x0000f795) bg_sctrl_sk_pane_ParamLimits

0xb7e1,	// (0x0000f795) bg_sctrl_sk_pane

0xb7ef,	// (0x0000f7a3) sctrl_sk_top_pane_g1

0xb7fc,	// (0x0000f7b0) sctrl_sk_top_pane_t1

0xb7d4,	// (0x0000f788) aid_touch_sctrl_bottom

0xb7e1,	// (0x0000f795) bg_sctrl_sk_pane_cp_ParamLimits

0xb7e1,	// (0x0000f795) bg_sctrl_sk_pane_cp

0xb817,	// (0x0000f7cb) sctrl_sk_bottom_pane_g1

0xb7fc,	// (0x0000f7b0) sctrl_sk_bottom_pane_t1

0xb820,	// (0x0000f7d4) cell_sctrl_middle_pane_ParamLimits

0xb820,	// (0x0000f7d4) cell_sctrl_middle_pane

0xb83b,	// (0x0000f7ef) aid_touch_sctrl_middle_ParamLimits

0xb83b,	// (0x0000f7ef) aid_touch_sctrl_middle

0xb84c,	// (0x0000f800) bg_sctrl_middle_pane_ParamLimits

0xb84c,	// (0x0000f800) bg_sctrl_middle_pane

0xb5b9,	// (0x0000f56d) cell_sctrl_middle_pane_g1_ParamLimits

0xb5b9,	// (0x0000f56d) cell_sctrl_middle_pane_g1

0xb85a,	// (0x0000f80e) cell_sctrl_middle_pane_g2_ParamLimits

0xb85a,	// (0x0000f80e) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x00013caf) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x00013caf) cell_sctrl_middle_pane_g

0xe8c3,	// (0x00012877) bg_sctrl_middle_pane_g1

0xe8cb,	// (0x0001287f) bg_sctrl_middle_pane_g2

0xe8d3,	// (0x00012887) bg_sctrl_middle_pane_g3

0xe8db,	// (0x0001288f) bg_sctrl_middle_pane_g4

0xe8e3,	// (0x00012897) bg_sctrl_middle_pane_g5

0xe8eb,	// (0x0001289f) bg_sctrl_middle_pane_g6

0xe8f3,	// (0x000128a7) bg_sctrl_middle_pane_g7

0xe8fb,	// (0x000128af) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x00013cb4) bg_sctrl_middle_pane_g

0xe903,	// (0x000128b7) bg_sctrl_middle_pane_g8_copy1

0xe8c3,	// (0x00012877) bg_sctrl_sk_pane_g1

0xe8d3,	// (0x00012887) bg_sctrl_sk_pane_g2

0xe8cb,	// (0x0001287f) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0001381a) bg_sctrl_sk_pane_g

0xc881,	// (0x00010835) aid_size_touch_scroll_bar

0xe8e3,	// (0x00012897) bg_sctrl_sk_pane_g4

0xe8db,	// (0x0001288f) bg_sctrl_sk_pane_g5

0xe8eb,	// (0x0001289f) bg_sctrl_sk_pane_g6

0xe8f3,	// (0x000128a7) bg_sctrl_sk_pane_g7

0xe903,	// (0x000128b7) bg_sctrl_sk_pane_g8

0xe8fb,	// (0x000128af) bg_sctrl_sk_pane_g9

0xe00c,	// (0x00011fc0) popup_fep_china_hwr2_fs_candidate_window

0xe014,	// (0x00011fc8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xe014,	// (0x00011fc8) popup_fep_china_hwr2_fs_control_window

0xb5b9,	// (0x0000f56d) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x00013caa) sctrl_sk_top_pane_g

0x3ac2,	// (0x00007a76) aid_fep_china_hwr2_fs_cell_ParamLimits

0x3ac2,	// (0x00007a76) aid_fep_china_hwr2_fs_cell

0x3ad3,	// (0x00007a87) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x3ad3,	// (0x00007a87) bg_popup_fep_shadow_pane_cp4

0x3aea,	// (0x00007a9e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x3aea,	// (0x00007a9e) bg_popup_fep_shadow_pane_cp5

0x3afc,	// (0x00007ab0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x3afc,	// (0x00007ab0) popup_fep_china_hwr2_fs_control_bar_grid

0x3b0c,	// (0x00007ac0) popup_fep_china_hwr2_fs_control_funtion_grid

0x3b14,	// (0x00007ac8) aid_fep_china_hwr2_fs_candi_cell

0xbf87,	// (0x0000ff3b) bg_popup_fep_shadow_pane_cp6

0x3b1e,	// (0x00007ad2) popup_fep_china_hwr2_fs_candidate_grid

0x3b26,	// (0x00007ada) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x3b26,	// (0x00007ada) cell_fep_china_hwr2_fs_funtion_grid

0x1d0e,	// (0x00005cc2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x3b3e,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x3b3e,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x3b4c,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x3b4c,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x00013cc5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x00013cc5) cell_fep_china_hwr2_fs_funtion_grid_g

0x3b62,	// (0x00007b16) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x3b62,	// (0x00007b16) cell_fep_china_hwr2_fs_funtion_grid_t1

0x3b77,	// (0x00007b2b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x3b77,	// (0x00007b2b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd16,	// (0x00013cca) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd16,	// (0x00013cca) cell_fep_china_hwr2_fs_funtion_grid_t

0x3b93,	// (0x00007b47) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x3b9b,	// (0x00007b4f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x3ba3,	// (0x00007b57) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1b,	// (0x00013ccf) popup_fep_china_hwr2_fs_control_bar_grid_g

0x3bab,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x3bab,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid

0x3bc4,	// (0x00007b78) popup_fep_china_hwr2_fs_candidate_grid_g20

0x3bcc,	// (0x00007b80) popup_fep_china_hwr2_fs_candidate_grid_g21

0x1d0e,	// (0x00005cc2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x1d0e,	// (0x00005cc2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb36,	// (0x00013aea) cell_fep_china_hwr2_fs_candidate_grid_g

0x3bd4,	// (0x00007b88) cell_fep_china_hwr2_fs_candidate_grid_t1

0xe4e9,	// (0x0001249d) clock_nsta_pane_cp_24_ParamLimits

0xe4e9,	// (0x0001249d) clock_nsta_pane_cp_24

0xe55c,	// (0x00012510) indicator_nsta_pane_cp_24_ParamLimits

0xe55c,	// (0x00012510) indicator_nsta_pane_cp_24

0x016b,	// (0x0000411f) heading_pane_g1

0x0001,

0xf8cb,	// (0x0001387f) heading_pane_g

0x0c88,	// (0x00004c3c) grid_sct_catagory_button_pane

0x0cb8,	// (0x00004c6c) scroll_pane_cp5_ParamLimits

0x1973,	// (0x00005927) button_value_adjust_pane_cp5_ParamLimits

0x1973,	// (0x00005927) button_value_adjust_pane_cp5

0x1a69,	// (0x00005a1d) form2_midp_time_pane_ParamLimits

0x3be2,	// (0x00007b96) cell_sct_catagory_button_pane_ParamLimits

0x3be2,	// (0x00007b96) cell_sct_catagory_button_pane

0x1cd3,	// (0x00005c87) bg_button_pane_cp01_ParamLimits

0x1cd3,	// (0x00005c87) bg_button_pane_cp01

0x1d0e,	// (0x00005cc2) cell_sct_catagory_button_pane_g1

0xe30d,	// (0x000122c1) popup_tb_extension_window

0x3bf4,	// (0x00007ba8) aid_size_cell_ext_ParamLimits

0x3bf4,	// (0x00007ba8) aid_size_cell_ext

0xc3ff,	// (0x000103b3) bg_tb_trans_pane_cp1_ParamLimits

0xc3ff,	// (0x000103b3) bg_tb_trans_pane_cp1

0x3c14,	// (0x00007bc8) grid_tb_ext_pane_ParamLimits

0x3c14,	// (0x00007bc8) grid_tb_ext_pane

0x3c3a,	// (0x00007bee) cell_tb_ext_pane_ParamLimits

0x3c3a,	// (0x00007bee) cell_tb_ext_pane

0x3c4f,	// (0x00007c03) cell_tb_ext_pane_g1_ParamLimits

0x3c4f,	// (0x00007c03) cell_tb_ext_pane_g1

0x3c6c,	// (0x00007c20) cell_tb_ext_pane_t1

0xc3ff,	// (0x000103b3) list_highlight_pane_cp11_ParamLimits

0xc3ff,	// (0x000103b3) list_highlight_pane_cp11

0xa7c7,	// (0x0000e77b) popup_uni_indicator_window_ParamLimits

0xa7c7,	// (0x0000e77b) popup_uni_indicator_window

0xce6e,	// (0x00010e22) bg_popup_sub_pane_cp14

0x3c87,	// (0x00007c3b) list_uniindi_pane

0x3c93,	// (0x00007c47) uniindi_top_pane

0xc3ff,	// (0x000103b3) bg_uniindi_top_pane

0x3cb2,	// (0x00007c66) uniindi_top_pane_g1

0x3cc8,	// (0x00007c7c) uniindi_top_pane_g2

0x0003,

0xfd22,	// (0x00013cd6) uniindi_top_pane_g

0x3cf2,	// (0x00007ca6) uniindi_top_pane_t1

0x3d1c,	// (0x00007cd0) list_single_uniindi_pane_ParamLimits

0x3d1c,	// (0x00007cd0) list_single_uniindi_pane

0x1d0e,	// (0x00005cc2) bg_uniindi_top_pane_g1

0x3d2e,	// (0x00007ce2) list_single_uniindi_pane_g1

0x3d41,	// (0x00007cf5) list_single_uniindi_pane_t1

0xa665,	// (0x0000e619) control_bg_pane

0x3d66,	// (0x00007d1a) bg_sctrl_sk_pane_cp1

0x3d6f,	// (0x00007d23) bg_sctrl_sk_pane_cp2

0x3d78,	// (0x00007d2c) control_bg_pane_g1

0x3d81,	// (0x00007d35) control_bg_pane_g2

0x0001,

0xfd2b,	// (0x00013cdf) control_bg_pane_g

0x1779,	// (0x0000572d) cell_indicator_nsta_pane_g1_ParamLimits

0x1787,	// (0x0000573b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9a,	// (0x00013a4e) cell_indicator_nsta_pane_g_ParamLimits

0x1aed,	// (0x00005aa1) form2_midp_time_pane_t1_ParamLimits

0xc75f,	// (0x00010713) main_idle_act4_pane_ParamLimits

0xc75f,	// (0x00010713) main_idle_act4_pane

0xe30d,	// (0x000122c1) popup_tb_extension_window_ParamLimits

0x3c2e,	// (0x00007be2) tb_ext_find_pane_ParamLimits

0x3c2e,	// (0x00007be2) tb_ext_find_pane

0x3d8a,	// (0x00007d3e) ai_gene_pane_1_cp1

0xdd34,	// (0x00011ce8) ai_gene_pane_2_cp1

0x3d92,	// (0x00007d46) list_single_idle_plugin_calendar_pane

0x3d9b,	// (0x00007d4f) list_single_idle_plugin_notification_pane

0x3da4,	// (0x00007d58) list_single_idle_plugin_player_pane

0x3dad,	// (0x00007d61) list_single_idle_plugin_shortcut_pane_ParamLimits

0x3dad,	// (0x00007d61) list_single_idle_plugin_shortcut_pane

0x3dcf,	// (0x00007d83) main_idle_act4_pane_t1

0x3de1,	// (0x00007d95) main_idle_act4_pane_t2

0x0001,

0xfd30,	// (0x00013ce4) main_idle_act4_pane_t

0x3df3,	// (0x00007da7) middle_sk_idle_act4_pane_ParamLimits

0x3df3,	// (0x00007da7) middle_sk_idle_act4_pane

0x3e09,	// (0x00007dbd) popup_clock_digital_analogue_window_cp2

0x3e23,	// (0x00007dd7) shortcut_wheel_idle_act4_pane_ParamLimits

0x3e23,	// (0x00007dd7) shortcut_wheel_idle_act4_pane

0x1d0e,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g1

0x1d0e,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g2

0x1d0e,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g3

0x1d0e,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g4

0x1d0e,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g5

0x3e37,	// (0x00007deb) shortcut_wheel_idle_act4_pane_g6

0x3e3f,	// (0x00007df3) shortcut_wheel_idle_act4_pane_g7

0x3e47,	// (0x00007dfb) shortcut_wheel_idle_act4_pane_g8

0x3e4f,	// (0x00007e03) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd35,	// (0x00013ce9) shortcut_wheel_idle_act4_pane_g

0x214e,	// (0x00006102) middle_sk_idle_act4_pane_g1_ParamLimits

0x214e,	// (0x00006102) middle_sk_idle_act4_pane_g1

0x3eb3,	// (0x00007e67) middle_sk_idle_act4_pane_g2_ParamLimits

0x3eb3,	// (0x00007e67) middle_sk_idle_act4_pane_g2

0x0001,

0xfd58,	// (0x00013d0c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd58,	// (0x00013d0c) middle_sk_idle_act4_pane_g

0x3ebf,	// (0x00007e73) middle_sk_idle_act4_pane_t1_ParamLimits

0x3ebf,	// (0x00007e73) middle_sk_idle_act4_pane_t1

0x3edc,	// (0x00007e90) grid_ai_shortcut_pane_ParamLimits

0x3edc,	// (0x00007e90) grid_ai_shortcut_pane

0x3ef5,	// (0x00007ea9) list_highlight_pane_cp16_ParamLimits

0x3ef5,	// (0x00007ea9) list_highlight_pane_cp16

0x3f02,	// (0x00007eb6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x3f02,	// (0x00007eb6) list_single_idle_plugin_shortcut_pane_g1

0x3f0e,	// (0x00007ec2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x3f0e,	// (0x00007ec2) list_single_idle_plugin_shortcut_pane_g2

0x3f26,	// (0x00007eda) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3f26,	// (0x00007eda) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5d,	// (0x00013d11) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5d,	// (0x00013d11) list_single_idle_plugin_shortcut_pane_g

0x3f39,	// (0x00007eed) cell_ai_shortcut_pane_ParamLimits

0x3f39,	// (0x00007eed) cell_ai_shortcut_pane

0x3f5a,	// (0x00007f0e) cell_ai_shortcut_pane_g1_ParamLimits

0x3f5a,	// (0x00007f0e) cell_ai_shortcut_pane_g1

0x3d8a,	// (0x00007d3e) ai_gene_pane_1_cp2

0x3f7c,	// (0x00007f30) ai_gene_pane_2_cp2

0x3f84,	// (0x00007f38) list_highlight_pane_cp15

0x3f8d,	// (0x00007f41) list_single_idle_plugin_calendar_pane_g1

0x3f84,	// (0x00007f38) list_highlight_pane_cp17

0x3f95,	// (0x00007f49) list_single_idle_plugin_calendar_pane_g1_copy1

0x3f9d,	// (0x00007f51) list_single_idle_plugin_player_pane_g1

0x0f3e,	// (0x00004ef2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd64,	// (0x00013d18) list_single_idle_plugin_player_pane_g

0x3fa5,	// (0x00007f59) list_single_idle_plugin_player_pane_t1

0x3fb3,	// (0x00007f67) list_single_idle_plugin_player_pane_t2

0x3fc1,	// (0x00007f75) list_single_idle_plugin_player_pane_t3

0x3fcf,	// (0x00007f83) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd69,	// (0x00013d1d) list_single_idle_plugin_player_pane_t

0x3fdd,	// (0x00007f91) wait_bar_pane_cp15

0x3fe5,	// (0x00007f99) grid_ai_notification_pane

0x0f3e,	// (0x00004ef2) list_single_idle_plugin_notification_pane_g1

0x3fee,	// (0x00007fa2) cell_ai_notification_pane_ParamLimits

0x3fee,	// (0x00007fa2) cell_ai_notification_pane

0x3ffb,	// (0x00007faf) cell_ai_notification_pane_g1

0x4003,	// (0x00007fb7) cell_ai_notification_pane_t1

0x4011,	// (0x00007fc5) tb_ext_find_button_pane

0x4019,	// (0x00007fcd) tb_ext_find_pane_g1

0x4021,	// (0x00007fd5) tb_ext_find_pane_t1

0xd629,	// (0x000115dd) tb_ext_find_button_pane_g1

0x402f,	// (0x00007fe3) tb_ext_find_button_pane_g2

0x0001,

0xfd72,	// (0x00013d26) tb_ext_find_button_pane_g

0x3dcf,	// (0x00007d83) main_idle_act4_pane_t1_ParamLimits

0x3de1,	// (0x00007d95) main_idle_act4_pane_t2_ParamLimits

0xfd30,	// (0x00013ce4) main_idle_act4_pane_t_ParamLimits

0x3e09,	// (0x00007dbd) popup_clock_digital_analogue_window_cp2_ParamLimits

0x3e17,	// (0x00007dcb) sat_plugin_idle_act4_pane_ParamLimits

0x3e17,	// (0x00007dcb) sat_plugin_idle_act4_pane

0x4038,	// (0x00007fec) sat_plugin_idle_act4_pane_t1_ParamLimits

0x4038,	// (0x00007fec) sat_plugin_idle_act4_pane_t1

0x404b,	// (0x00007fff) sat_plugin_idle_act4_pane_t2_ParamLimits

0x404b,	// (0x00007fff) sat_plugin_idle_act4_pane_t2

0x405e,	// (0x00008012) sat_plugin_idle_act4_pane_t3_ParamLimits

0x405e,	// (0x00008012) sat_plugin_idle_act4_pane_t3

0x4071,	// (0x00008025) sat_plugin_idle_act4_pane_t4_ParamLimits

0x4071,	// (0x00008025) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd77,	// (0x00013d2b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd77,	// (0x00013d2b) sat_plugin_idle_act4_pane_t

0xa728,	// (0x0000e6dc) popup_battery_window_ParamLimits

0xa728,	// (0x0000e6dc) popup_battery_window

0xc3ff,	// (0x000103b3) bg_popup_sub_pane_cp25_ParamLimits

0xc3ff,	// (0x000103b3) bg_popup_sub_pane_cp25

0x4084,	// (0x00008038) popup_battery_window_g1_ParamLimits

0x4084,	// (0x00008038) popup_battery_window_g1

0x4090,	// (0x00008044) popup_battery_window_t1_ParamLimits

0x4090,	// (0x00008044) popup_battery_window_t1

0x40a2,	// (0x00008056) popup_battery_window_t2_ParamLimits

0x40a2,	// (0x00008056) popup_battery_window_t2

0x0001,

0xfd80,	// (0x00013d34) popup_battery_window_t_ParamLimits

0xfd80,	// (0x00013d34) popup_battery_window_t

0xdc0f,	// (0x00011bc3) midp_canvas_pane_ParamLimits

0xdc7e,	// (0x00011c32) midp_keypad_pane_ParamLimits

0xdc7e,	// (0x00011c32) midp_keypad_pane

0xdf6e,	// (0x00011f22) main_midp_pane_ParamLimits

0x1804,	// (0x000057b8) signal_pane_g2_cp_ParamLimits

0x40bf,	// (0x00008073) aid_size_cell_midp_keypad_ParamLimits

0x40bf,	// (0x00008073) aid_size_cell_midp_keypad

0x40d9,	// (0x0000808d) midp_keyp_game_grid_pane_ParamLimits

0x40d9,	// (0x0000808d) midp_keyp_game_grid_pane

0x40f3,	// (0x000080a7) midp_keyp_rocker_pane_ParamLimits

0x40f3,	// (0x000080a7) midp_keyp_rocker_pane

0x4120,	// (0x000080d4) midp_keyp_sk_left_pane_ParamLimits

0x4120,	// (0x000080d4) midp_keyp_sk_left_pane

0x4178,	// (0x0000812c) midp_keyp_sk_right_pane_ParamLimits

0x4178,	// (0x0000812c) midp_keyp_sk_right_pane

0xbf87,	// (0x0000ff3b) bg_button_pane_cp03

0x41ca,	// (0x0000817e) midp_keyp_sk_left_pane_g1

0xbf87,	// (0x0000ff3b) bg_button_pane_cp04

0x41ca,	// (0x0000817e) midp_keyp_sk_right_pane_g1

0x1d0e,	// (0x00005cc2) midp_keyp_rocker_pane_g1

0x41d3,	// (0x00008187) keyp_game_cell_pane_ParamLimits

0x41d3,	// (0x00008187) keyp_game_cell_pane

0xbf87,	// (0x0000ff3b) bg_button_pane_cp02

0x41e4,	// (0x00008198) keyp_game_cell_pane_g1

0xa75e,	// (0x0000e712) popup_fep_vkb2_window_ParamLimits

0xa75e,	// (0x0000e712) popup_fep_vkb2_window

0xb87e,	// (0x0000f832) aid_size_cell_vkb2_ParamLimits

0xb87e,	// (0x0000f832) aid_size_cell_vkb2

0xb8d2,	// (0x0000f886) popup_fep_vkb2_window_g1_ParamLimits

0xb8d2,	// (0x0000f886) popup_fep_vkb2_window_g1

0xb91a,	// (0x0000f8ce) vkb2_area_bottom_pane_ParamLimits

0xb91a,	// (0x0000f8ce) vkb2_area_bottom_pane

0xb952,	// (0x0000f906) vkb2_area_keypad_pane_ParamLimits

0xb952,	// (0x0000f906) vkb2_area_keypad_pane

0xb98a,	// (0x0000f93e) vkb2_area_top_pane_ParamLimits

0xb98a,	// (0x0000f93e) vkb2_area_top_pane

0xb9fa,	// (0x0000f9ae) vkb2_top_entry_pane_ParamLimits

0xb9fa,	// (0x0000f9ae) vkb2_top_entry_pane

0xba24,	// (0x0000f9d8) vkb2_top_grid_left_pane_ParamLimits

0xba24,	// (0x0000f9d8) vkb2_top_grid_left_pane

0xba42,	// (0x0000f9f6) vkb2_top_grid_right_pane_ParamLimits

0xba42,	// (0x0000f9f6) vkb2_top_grid_right_pane

0xba60,	// (0x0000fa14) vkb2_cell_keypad_pane_ParamLimits

0xba60,	// (0x0000fa14) vkb2_cell_keypad_pane

0xbb11,	// (0x0000fac5) vkb2_area_bottom_grid_pane_ParamLimits

0xbb11,	// (0x0000fac5) vkb2_area_bottom_grid_pane

0xbb35,	// (0x0000fae9) vkb2_area_bottom_pane_g1_ParamLimits

0xbb35,	// (0x0000fae9) vkb2_area_bottom_pane_g1

0xbb59,	// (0x0000fb0d) vkb2_area_bottom_pane_g2_ParamLimits

0xbb59,	// (0x0000fb0d) vkb2_area_bottom_pane_g2

0xbb87,	// (0x0000fb3b) vkb2_area_bottom_pane_g3_ParamLimits

0xbb87,	// (0x0000fb3b) vkb2_area_bottom_pane_g3

0x0002,

0xfd85,	// (0x00013d39) vkb2_area_bottom_pane_g_ParamLimits

0xfd85,	// (0x00013d39) vkb2_area_bottom_pane_g

0xbbd8,	// (0x0000fb8c) vkb2_top_cell_left_pane_ParamLimits

0xbbd8,	// (0x0000fb8c) vkb2_top_cell_left_pane

0x457d,	// (0x00008531) vkb2_top_entry_pane_g1_ParamLimits

0x457d,	// (0x00008531) vkb2_top_entry_pane_g1

0x458b,	// (0x0000853f) vkb2_top_entry_pane_t1_ParamLimits

0x458b,	// (0x0000853f) vkb2_top_entry_pane_t1

0x45bd,	// (0x00008571) vkb2_top_entry_pane_t2_ParamLimits

0x45bd,	// (0x00008571) vkb2_top_entry_pane_t2

0x45ef,	// (0x000085a3) vkb2_top_entry_pane_t3_ParamLimits

0x45ef,	// (0x000085a3) vkb2_top_entry_pane_t3

0x0002,

0xfd8c,	// (0x00013d40) vkb2_top_entry_pane_t_ParamLimits

0xfd8c,	// (0x00013d40) vkb2_top_entry_pane_t

0xbc25,	// (0x0000fbd9) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc25,	// (0x0000fbd9) vkb2_top_grid_right_pane_g1

0xbc3b,	// (0x0000fbef) vkb2_top_grid_right_pane_g2_ParamLimits

0xbc3b,	// (0x0000fbef) vkb2_top_grid_right_pane_g2

0xbc53,	// (0x0000fc07) vkb2_top_grid_right_pane_g3_ParamLimits

0xbc53,	// (0x0000fc07) vkb2_top_grid_right_pane_g3

0xbc6b,	// (0x0000fc1f) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc6b,	// (0x0000fc1f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd93,	// (0x00013d47) vkb2_top_grid_right_pane_g_ParamLimits

0xfd93,	// (0x00013d47) vkb2_top_grid_right_pane_g

0xbc81,	// (0x0000fc35) vkb2_top_cell_left_pane_g1

0xbc98,	// (0x0000fc4c) vkb2_cell_keypad_pane_g1_ParamLimits

0xbc98,	// (0x0000fc4c) vkb2_cell_keypad_pane_g1

0x46b3,	// (0x00008667) vkb2_cell_keypad_pane_t1_ParamLimits

0x46b3,	// (0x00008667) vkb2_cell_keypad_pane_t1

0xbca6,	// (0x0000fc5a) vkb2_cell_bottom_grid_pane_ParamLimits

0xbca6,	// (0x0000fc5a) vkb2_cell_bottom_grid_pane

0xbcdf,	// (0x0000fc93) vkb2_cell_bottom_grid_pane_g1

0x3e57,	// (0x00007e0b) aid_call2_pane_cp02

0x3e5f,	// (0x00007e13) aid_call_pane_cp02

0x3e67,	// (0x00007e1b) clock_digital_number_pane_cp10

0x3e6f,	// (0x00007e23) clock_digital_number_pane_cp11

0x3e77,	// (0x00007e2b) clock_digital_number_pane_cp12

0x3e7f,	// (0x00007e33) clock_digital_number_pane_cp13

0x3e87,	// (0x00007e3b) clock_digital_separator_pane_cp10

0xd629,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g1

0xd629,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g2

0x3e8f,	// (0x00007e43) popup_clock_digital_analogue_window_cp2_g3

0xd629,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g4

0x3e8f,	// (0x00007e43) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd48,	// (0x00013cfc) popup_clock_digital_analogue_window_cp2_g

0x3e97,	// (0x00007e4b) popup_clock_digital_analogue_window_cp2_t1

0x3ea5,	// (0x00007e59) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd53,	// (0x00013d07) popup_clock_digital_analogue_window_cp2_t

0x1d0e,	// (0x00005cc2) clock_digital_number_pane_cp10_g1

0x1d0e,	// (0x00005cc2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb36,	// (0x00013aea) clock_digital_number_pane_cp10_g

0x1d0e,	// (0x00005cc2) clock_digital_separator_pane_cp10_g1

0x1d0e,	// (0x00005cc2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb36,	// (0x00013aea) clock_digital_separator_pane_cp10_g

0x3cd4,	// (0x00007c88) uniindi_top_pane_g3

0x3ce5,	// (0x00007c99) uniindi_top_pane_g4

0xbacb,	// (0x0000fa7f) vkb2_row_keypad_pane_ParamLimits

0xbacb,	// (0x0000fa7f) vkb2_row_keypad_pane

0xbcfb,	// (0x0000fcaf) vkb2_cell_t_keypad_pane_ParamLimits

0xbcfb,	// (0x0000fcaf) vkb2_cell_t_keypad_pane

0xbd08,	// (0x0000fcbc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xbd08,	// (0x0000fcbc) vkb2_cell_t_keypad_pane_cp08

0xbd18,	// (0x0000fccc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xbd18,	// (0x0000fccc) vkb2_cell_t_keypad_pane_cp09

0xbd29,	// (0x0000fcdd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xbd29,	// (0x0000fcdd) vkb2_cell_t_keypad_pane_cp01

0xbd39,	// (0x0000fced) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xbd39,	// (0x0000fced) vkb2_cell_t_keypad_pane_cp02

0xbd49,	// (0x0000fcfd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xbd49,	// (0x0000fcfd) vkb2_cell_t_keypad_pane_cp03

0xbd59,	// (0x0000fd0d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xbd59,	// (0x0000fd0d) vkb2_cell_t_keypad_pane_cp04

0xbd69,	// (0x0000fd1d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xbd69,	// (0x0000fd1d) vkb2_cell_t_keypad_pane_cp05

0xbd79,	// (0x0000fd2d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xbd79,	// (0x0000fd2d) vkb2_cell_t_keypad_pane_cp06

0xbd89,	// (0x0000fd3d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xbd89,	// (0x0000fd3d) vkb2_cell_t_keypad_pane_cp07

0xbd99,	// (0x0000fd4d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xbd99,	// (0x0000fd4d) vkb2_cell_t_keypad_pane_cp10

0xb5b9,	// (0x0000f56d) vkb2_cell_t_keypad_pane_g1

0x47d2,	// (0x00008786) vkb2_cell_t_keypad_pane_t1

0xa665,	// (0x0000e619) popup_grid_graphic2_window

0x47e4,	// (0x00008798) aid_size_cell_graphic2_ParamLimits

0x47e4,	// (0x00008798) aid_size_cell_graphic2

0x1d69,	// (0x00005d1d) bg_popup_window_pane_cp21_ParamLimits

0x1d69,	// (0x00005d1d) bg_popup_window_pane_cp21

0x4810,	// (0x000087c4) graphic2_pages_pane_ParamLimits

0x4810,	// (0x000087c4) graphic2_pages_pane

0x484a,	// (0x000087fe) grid_graphic2_control_pane_ParamLimits

0x484a,	// (0x000087fe) grid_graphic2_control_pane

0x4872,	// (0x00008826) grid_graphic2_pane_ParamLimits

0x4872,	// (0x00008826) grid_graphic2_pane

0x48c2,	// (0x00008876) cell_graphic2_pane

0xbf87,	// (0x0000ff3b) main_comp_mode_pane

0x349f,	// (0x00007453) list_ai3_gene_pane_ParamLimits

0x3860,	// (0x00007814) bg_popup_window_pane_cp19_ParamLimits

0x386c,	// (0x00007820) bg_touch_area_indi_pane_ParamLimits

0x386c,	// (0x00007820) bg_touch_area_indi_pane

0x3882,	// (0x00007836) bg_touch_area_indi_pane_cp01_ParamLimits

0x3882,	// (0x00007836) bg_touch_area_indi_pane_cp01

0x3898,	// (0x0000784c) bg_touch_area_indi_pane_cp02_ParamLimits

0x3898,	// (0x0000784c) bg_touch_area_indi_pane_cp02

0x38ae,	// (0x00007862) bg_touch_area_indi_pane_cp03_ParamLimits

0x38ae,	// (0x00007862) bg_touch_area_indi_pane_cp03

0x38c4,	// (0x00007878) popup_slider_window_g1_ParamLimits

0x38e0,	// (0x00007894) popup_slider_window_g2_ParamLimits

0x38fc,	// (0x000078b0) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x00013c91) popup_slider_window_g_ParamLimits

0x3958,	// (0x0000790c) popup_slider_window_t1_ParamLimits

0x39ca,	// (0x0000797e) small_volume_slider_vertical_pane_ParamLimits

0x48c2,	// (0x00008876) cell_graphic2_pane_ParamLimits

0x48ff,	// (0x000088b3) bg_button_pane_cp10_ParamLimits

0x48ff,	// (0x000088b3) bg_button_pane_cp10

0x4910,	// (0x000088c4) bg_button_pane_cp11_ParamLimits

0x4910,	// (0x000088c4) bg_button_pane_cp11

0x4921,	// (0x000088d5) graphic2_pages_pane_g1_ParamLimits

0x4921,	// (0x000088d5) graphic2_pages_pane_g1

0x4934,	// (0x000088e8) graphic2_pages_pane_g2_ParamLimits

0x4934,	// (0x000088e8) graphic2_pages_pane_g2

0x0001,

0xfda1,	// (0x00013d55) graphic2_pages_pane_g_ParamLimits

0xfda1,	// (0x00013d55) graphic2_pages_pane_g

0x494a,	// (0x000088fe) graphic2_pages_pane_t1_ParamLimits

0x494a,	// (0x000088fe) graphic2_pages_pane_t1

0x4960,	// (0x00008914) cell_graphic2_control_pane_ParamLimits

0x4960,	// (0x00008914) cell_graphic2_control_pane

0x497a,	// (0x0000892e) cell_graphic2_pane_g1_ParamLimits

0x497a,	// (0x0000892e) cell_graphic2_pane_g1

0x4987,	// (0x0000893b) cell_graphic2_pane_g2_ParamLimits

0x4987,	// (0x0000893b) cell_graphic2_pane_g2

0x4994,	// (0x00008948) cell_graphic2_pane_g3_ParamLimits

0x4994,	// (0x00008948) cell_graphic2_pane_g3

0x49a1,	// (0x00008955) cell_graphic2_pane_g4_ParamLimits

0x49a1,	// (0x00008955) cell_graphic2_pane_g4

0x49ae,	// (0x00008962) cell_graphic2_pane_g5_ParamLimits

0x49ae,	// (0x00008962) cell_graphic2_pane_g5

0x0004,

0xfda6,	// (0x00013d5a) cell_graphic2_pane_g_ParamLimits

0xfda6,	// (0x00013d5a) cell_graphic2_pane_g

0x49c9,	// (0x0000897d) cell_graphic2_pane_t1_ParamLimits

0x49c9,	// (0x0000897d) cell_graphic2_pane_t1

0xe9e5,	// (0x00012999) grid_highlight_pane_cp11_ParamLimits

0xe9e5,	// (0x00012999) grid_highlight_pane_cp11

0xce6e,	// (0x00010e22) bg_button_pane_cp05

0x49f2,	// (0x000089a6) cell_graphic2_control_pane_g1

0x1d0e,	// (0x00005cc2) bg_touch_area_indi_pane_g1

0x49ff,	// (0x000089b3) aid_cmod_rocker_key_size

0x4a09,	// (0x000089bd) aid_cmode_itu_key_size

0x4a13,	// (0x000089c7) main_cmode_video_pane

0x4a1b,	// (0x000089cf) main_comp_mode_itu_pane

0x4a25,	// (0x000089d9) main_comp_mode_rocker_pane

0x4a2d,	// (0x000089e1) cell_cmode_rocker_pane_ParamLimits

0x4a2d,	// (0x000089e1) cell_cmode_rocker_pane

0x4a3f,	// (0x000089f3) cell_cmode_itu_pane_ParamLimits

0x4a3f,	// (0x000089f3) cell_cmode_itu_pane

0xce6e,	// (0x00010e22) bg_button_pane_cp06_ParamLimits

0xce6e,	// (0x00010e22) bg_button_pane_cp06

0x214e,	// (0x00006102) cell_cmode_rocker_pane_g1_ParamLimits

0x214e,	// (0x00006102) cell_cmode_rocker_pane_g1

0x3b3e,	// (0x00007af2) cell_cmode_rocker_pane_g2_ParamLimits

0x3b3e,	// (0x00007af2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb6,	// (0x00013d6a) cell_cmode_rocker_pane_g_ParamLimits

0xfdb6,	// (0x00013d6a) cell_cmode_rocker_pane_g

0xbf87,	// (0x0000ff3b) bg_button_pane_cp07

0x4a54,	// (0x00008a08) cell_cmode_itu_pane_g1

0x4a5d,	// (0x00008a11) cell_cmode_itu_pane_t1

0x4a6b,	// (0x00008a1f) cell_cmode_itu_pane_t2

0x0001,

0xfdbb,	// (0x00013d6f) cell_cmode_itu_pane_t

0x3d56,	// (0x00007d0a) aid_touch_ctrl_left

0x3d5e,	// (0x00007d12) aid_touch_ctrl_right

0xbf87,	// (0x0000ff3b) compa_mode_pane

0x4a79,	// (0x00008a2d) aid_cmod_rocker_key_size_cp

0x4a83,	// (0x00008a37) aid_cmode_itu_key_size_cp

0x4a8d,	// (0x00008a41) compa_mode_pane_g1

0x4a95,	// (0x00008a49) compa_mode_pane_g2

0x4a9d,	// (0x00008a51) compa_mode_pane_g3

0x0002,

0xfdc0,	// (0x00013d74) compa_mode_pane_g

0x4aa5,	// (0x00008a59) main_comp_mode_itu_pane_cp

0x4aad,	// (0x00008a61) main_comp_mode_rocker_pane_cp

0x4ab5,	// (0x00008a69) cell_cmode_itu_pane_cp_ParamLimits

0x4ab5,	// (0x00008a69) cell_cmode_itu_pane_cp

0x4aca,	// (0x00008a7e) cell_cmode_rocker_pane_cp_ParamLimits

0x4aca,	// (0x00008a7e) cell_cmode_rocker_pane_cp

0xce6e,	// (0x00010e22) bg_button_pane_cp06_cp_ParamLimits

0xce6e,	// (0x00010e22) bg_button_pane_cp06_cp

0x214e,	// (0x00006102) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x214e,	// (0x00006102) cell_cmode_rocker_pane_g1_cp

0x1d0e,	// (0x00005cc2) cell_cmode_rocker_pane_g2_cp

0xbf87,	// (0x0000ff3b) bg_button_pane_cp07_cp

0x4adc,	// (0x00008a90) cell_cmode_itu_pane_g1_cp

0x4ae5,	// (0x00008a99) cell_cmode_itu_pane_t1_cp

0x4af3,	// (0x00008aa7) cell_cmode_itu_pane_t2_cp

0x0a32,	// (0x000049e6) settings_code_pane_cp2

0xc158,	// (0x0001010c) bg_popup_window_pane_cp3_ParamLimits

0xc5d7,	// (0x0001058b) heading_pane_cp3_ParamLimits

0xc5e3,	// (0x00010597) listscroll_popup_graphic_pane_ParamLimits

0xb374,	// (0x0000f328) fep_hwr_aid_pane_ParamLimits

0xb7d4,	// (0x0000f788) aid_touch_sctrl_top_ParamLimits

0xb7ef,	// (0x0000f7a3) sctrl_sk_top_pane_g1_ParamLimits

0xb5b9,	// (0x0000f56d) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x00013caa) sctrl_sk_top_pane_g_ParamLimits

0xb7fc,	// (0x0000f7b0) sctrl_sk_top_pane_t1_ParamLimits

0xb7d4,	// (0x0000f788) aid_touch_sctrl_bottom_ParamLimits

0xb7fc,	// (0x0000f7b0) sctrl_sk_bottom_pane_t1_ParamLimits

0x3ca0,	// (0x00007c54) aid_area_touch_clock

0xb9c2,	// (0x0000f976) aid_vkb2_area_top_pane_cell_ParamLimits

0xb9c2,	// (0x0000f976) aid_vkb2_area_top_pane_cell

0xbaed,	// (0x0000faa1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbaed,	// (0x0000faa1) aid_vkb2_area_bottom_pane_cell

0x4575,	// (0x00008529) popup_char_count_window

0x4b01,	// (0x00008ab5) popup_char_count_window_g1

0x4b0a,	// (0x00008abe) popup_char_count_window_g2

0x4b13,	// (0x00008ac7) popup_char_count_window_g3

0x0002,

0xfdc7,	// (0x00013d7b) popup_char_count_window_g

0x4b1c,	// (0x00008ad0) popup_char_count_window_t1

0xb8b0,	// (0x0000f864) popup_fep_char_preview_window_ParamLimits

0xb8b0,	// (0x0000f864) popup_fep_char_preview_window

0xb9e0,	// (0x0000f994) vkb2_top_candi_pane_ParamLimits

0xb9e0,	// (0x0000f994) vkb2_top_candi_pane

0x4b2a,	// (0x00008ade) cell_vkb2_top_candi_pane_ParamLimits

0x4b2a,	// (0x00008ade) cell_vkb2_top_candi_pane

0xbdae,	// (0x0000fd62) bg_popup_fep_char_preview_window_ParamLimits

0xbdae,	// (0x0000fd62) bg_popup_fep_char_preview_window

0xbdbc,	// (0x0000fd70) popup_fep_char_preview_window_t1_ParamLimits

0xbdbc,	// (0x0000fd70) popup_fep_char_preview_window_t1

0x4bad,	// (0x00008b61) bg_popup_fep_char_preview_window_g1

0x4ba5,	// (0x00008b59) bg_popup_fep_char_preview_window_g2

0x4b9d,	// (0x00008b51) bg_popup_fep_char_preview_window_g3

0x4bd5,	// (0x00008b89) bg_popup_fep_char_preview_window_g4

0x4bcd,	// (0x00008b81) bg_popup_fep_char_preview_window_g5

0xbdf6,	// (0x0000fdaa) bg_popup_fep_char_preview_window_g6

0x4bbd,	// (0x00008b71) bg_popup_fep_char_preview_window_g7

0x4bb5,	// (0x00008b69) bg_popup_fep_char_preview_window_g8

0x4bdd,	// (0x00008b91) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdce,	// (0x00013d82) bg_popup_fep_char_preview_window_g

0xb5b9,	// (0x0000f56d) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb5b9,	// (0x0000f56d) cell_vkb2_top_candi_pane_g1

0xb5c7,	// (0x0000f57b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb5c7,	// (0x0000f57b) cell_vkb2_top_candi_pane_g2

0x4c06,	// (0x00008bba) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c06,	// (0x00008bba) cell_vkb2_top_candi_pane_g3

0xbdfe,	// (0x0000fdb2) cell_vkb2_top_candi_pane_g4_ParamLimits

0xbdfe,	// (0x0000fdb2) cell_vkb2_top_candi_pane_g4

0x24c6,	// (0x0000647a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x24c6,	// (0x0000647a) cell_vkb2_top_candi_pane_g5

0xbe1f,	// (0x0000fdd3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xbe1f,	// (0x0000fdd3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x00013d95) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x00013d95) cell_vkb2_top_candi_pane_g

0xbe2d,	// (0x0000fde1) cell_vkb2_top_candi_pane_t1

0xb18c,	// (0x0000f140) aid_size_touch_slider_mark_ParamLimits

0xb18c,	// (0x0000f140) aid_size_touch_slider_mark

0x483e,	// (0x000087f2) grid_graphic2_catg_pane_ParamLimits

0x483e,	// (0x000087f2) grid_graphic2_catg_pane

0x489e,	// (0x00008852) popup_grid_graphic2_window_t1_ParamLimits

0x489e,	// (0x00008852) popup_grid_graphic2_window_t1

0x48b0,	// (0x00008864) popup_grid_graphic2_window_t2_ParamLimits

0x48b0,	// (0x00008864) popup_grid_graphic2_window_t2

0x0001,

0xfd9c,	// (0x00013d50) popup_grid_graphic2_window_t_ParamLimits

0xfd9c,	// (0x00013d50) popup_grid_graphic2_window_t

0xce6e,	// (0x00010e22) bg_button_pane_cp05_ParamLimits

0x49f2,	// (0x000089a6) cell_graphic2_control_pane_g1_ParamLimits

0x4c3d,	// (0x00008bf1) cell_graphic2_catg_pane_ParamLimits

0x4c3d,	// (0x00008bf1) cell_graphic2_catg_pane

0xbf87,	// (0x0000ff3b) bg_button_pane_cp12

0x4c4f,	// (0x00008c03) cell_graphic2_catg_pane_g1

0x3c6c,	// (0x00007c20) cell_tb_ext_pane_t1_ParamLimits

0xbbf8,	// (0x0000fbac) vkb2_top_cell_right_narrow_pane_ParamLimits

0xbbf8,	// (0x0000fbac) vkb2_top_cell_right_narrow_pane

0xbc10,	// (0x0000fbc4) vkb2_top_cell_right_wide_pane_ParamLimits

0xbc10,	// (0x0000fbc4) vkb2_top_cell_right_wide_pane

0xb366,	// (0x0000f31a) bg_vkb2_func_pane_ParamLimits

0xb366,	// (0x0000f31a) bg_vkb2_func_pane

0xbc81,	// (0x0000fc35) vkb2_top_cell_left_pane_g1_ParamLimits

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp03

0xbcdf,	// (0x0000fc93) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xe8cb,	// (0x0001287f) bg_vkb2_func_pane_g1

0xe8d3,	// (0x00012887) bg_vkb2_func_pane_g2

0xe8e3,	// (0x00012897) bg_vkb2_func_pane_g3

0xe8db,	// (0x0001288f) bg_vkb2_func_pane_g4

0xe8eb,	// (0x0001289f) bg_vkb2_func_pane_g5

0xe8f3,	// (0x000128a7) bg_vkb2_func_pane_g6

0xe8fb,	// (0x000128af) bg_vkb2_func_pane_g7

0xe903,	// (0x000128b7) bg_vkb2_func_pane_g8

0xe8c3,	// (0x00012877) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x00013da2) bg_vkb2_func_pane_g

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp01

0xbc81,	// (0x0000fc35) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xbc81,	// (0x0000fc35) vkb2_top_cell_right_wide_pane_g1

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb366,	// (0x0000f31a) bg_vkb2_fuc_pane_cp02

0xbcdf,	// (0x0000fc93) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xbcdf,	// (0x0000fc93) vkb2_top_cell_right_narrow_pane_g1

0x37f2,	// (0x000077a6) aid_touch_area_decrease_ParamLimits

0x37f2,	// (0x000077a6) aid_touch_area_decrease

0x380a,	// (0x000077be) aid_touch_area_increase_ParamLimits

0x380a,	// (0x000077be) aid_touch_area_increase

0x3816,	// (0x000077ca) aid_touch_area_mute_ParamLimits

0x3816,	// (0x000077ca) aid_touch_area_mute

0x3832,	// (0x000077e6) aid_touch_area_slider_ParamLimits

0x3832,	// (0x000077e6) aid_touch_area_slider

0x3918,	// (0x000078cc) popup_slider_window_g4_ParamLimits

0x3918,	// (0x000078cc) popup_slider_window_g4

0x3924,	// (0x000078d8) popup_slider_window_g5_ParamLimits

0x3924,	// (0x000078d8) popup_slider_window_g5

0x3946,	// (0x000078fa) popup_slider_window_g6_ParamLimits

0x3946,	// (0x000078fa) popup_slider_window_g6

0x3984,	// (0x00007938) popup_slider_window_t2_ParamLimits

0x3984,	// (0x00007938) popup_slider_window_t2

0x0001,

0xfcea,	// (0x00013c9e) popup_slider_window_t_ParamLimits

0xfcea,	// (0x00013c9e) popup_slider_window_t

0x399c,	// (0x00007950) slider_pane_ParamLimits

0x399c,	// (0x00007950) slider_pane

0x4c58,	// (0x00008c0c) slider_pane_g1_ParamLimits

0x4c58,	// (0x00008c0c) slider_pane_g1

0x4c6c,	// (0x00008c20) slider_pane_g2_ParamLimits

0x4c6c,	// (0x00008c20) slider_pane_g2

0x4c82,	// (0x00008c36) slider_pane_g3_ParamLimits

0x4c82,	// (0x00008c36) slider_pane_g3

0x0003,

0xfe01,	// (0x00013db5) slider_pane_g_ParamLimits

0xfe01,	// (0x00013db5) slider_pane_g

0xe35d,	// (0x00012311) popup_tb_float_extension_window_ParamLimits

0xe35d,	// (0x00012311) popup_tb_float_extension_window

0x4cae,	// (0x00008c62) aid_size_cell_tb_float_ext

0xbf87,	// (0x0000ff3b) bg_popup_sub_window_cp28

0x4cb9,	// (0x00008c6d) grid_tb_float_ext_pane

0x4cc1,	// (0x00008c75) cell_tb_float_ext_pane_ParamLimits

0x4cc1,	// (0x00008c75) cell_tb_float_ext_pane

0x4cd9,	// (0x00008c8d) cell_tb_float_ext_pane_g1

0x4ce2,	// (0x00008c96) grid_highlight_pane_cp12

0xb4af,	// (0x0000f463) cell_last_hwr_side_pane_ParamLimits

0xb4af,	// (0x0000f463) cell_last_hwr_side_pane

0x1d0e,	// (0x00005cc2) cell_last_hwr_side_pane_g1

0x4ceb,	// (0x00008c9f) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x00013dbe) cell_last_hwr_side_pane_g

0xbbb5,	// (0x0000fb69) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbbb5,	// (0x0000fb69) vkb2_area_bottom_space_btn_pane

0xb5b9,	// (0x0000f56d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x47d2,	// (0x00008786) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xbe2d,	// (0x0000fde1) cell_vkb2_top_candi_pane_t1_ParamLimits

0xbe43,	// (0x0000fdf7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xbe43,	// (0x0000fdf7) vkb2_area_bottom_space_btn_pane_g1

0xbe79,	// (0x0000fe2d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xbe79,	// (0x0000fe2d) vkb2_area_bottom_space_btn_pane_g2

0xbeaf,	// (0x0000fe63) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xbeaf,	// (0x0000fe63) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x00013dc3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x00013dc3) vkb2_area_bottom_space_btn_pane_g

0xb423,	// (0x0000f3d7) cel_fep_hwr_func_pane_ParamLimits

0xb423,	// (0x0000f3d7) cel_fep_hwr_func_pane

0xb45f,	// (0x0000f413) cell_hwr_side_button_pane_ParamLimits

0xb45f,	// (0x0000f413) cell_hwr_side_button_pane

0x3ca0,	// (0x00007c54) aid_area_touch_clock_ParamLimits

0xc3ff,	// (0x000103b3) bg_uniindi_top_pane_ParamLimits

0x3cb2,	// (0x00007c66) uniindi_top_pane_g1_ParamLimits

0x3cc8,	// (0x00007c7c) uniindi_top_pane_g2_ParamLimits

0x3cd4,	// (0x00007c88) uniindi_top_pane_g3_ParamLimits

0x3ce5,	// (0x00007c99) uniindi_top_pane_g4_ParamLimits

0xfd22,	// (0x00013cd6) uniindi_top_pane_g_ParamLimits

0x3cf2,	// (0x00007ca6) uniindi_top_pane_t1_ParamLimits

0xc3ff,	// (0x000103b3) bg_vkb2_func_pane_cp01_ParamLimits

0xc3ff,	// (0x000103b3) bg_vkb2_func_pane_cp01

0x4da6,	// (0x00008d5a) cel_fep_hwr_func_pane_g1_ParamLimits

0x4da6,	// (0x00008d5a) cel_fep_hwr_func_pane_g1

0xc3ff,	// (0x000103b3) bg_vkb2_func_pane_cp02_ParamLimits

0xc3ff,	// (0x000103b3) bg_vkb2_func_pane_cp02

0x4da6,	// (0x00008d5a) cell_hwr_side_button_pane_g1_ParamLimits

0x4da6,	// (0x00008d5a) cell_hwr_side_button_pane_g1

0xe757,	// (0x0001270b) status_pane_g4_ParamLimits

0xe757,	// (0x0001270b) status_pane_g4

0xe76f,	// (0x00012723) status_pane_t1

0x1b00,	// (0x00005ab4) form2_midp_gauge_slider_cont_pane

0x1b08,	// (0x00005abc) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1b1a,	// (0x00005ace) form2_midp_gauge_slider_pane_t2_ParamLimits

0x1b2c,	// (0x00005ae0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae9,	// (0x00013a9d) form2_midp_gauge_slider_pane_t_ParamLimits

0x1b3e,	// (0x00005af2) form2_midp_slider_pane_ParamLimits

0xb870,	// (0x0000f824) aid_size_cell_func_vkb2_ParamLimits

0xb870,	// (0x0000f824) aid_size_cell_func_vkb2

0x4c9a,	// (0x00008c4e) slider_pane_g4_ParamLimits

0x4c9a,	// (0x00008c4e) slider_pane_g4

0xbef5,	// (0x0000fea9) form2_midp_gauge_slider_pane_t2_cp01

0xbf03,	// (0x0000feb7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf03,	// (0x0000feb7) form2_midp_gauge_slider_pane_t3_cp01

0xbf20,	// (0x0000fed4) form2_midp_slider_pane_cp01

0xbf87,	// (0x0000ff3b) navi_smil_pane

0x4e13,	// (0x00008dc7) navi_smil_pane_g1

0x4e1b,	// (0x00008dcf) navi_smil_pane_t1

0x4de8,	// (0x00008d9c) form2_midp_slider_pane_g1

0x4df1,	// (0x00008da5) form2_midp_slider_pane_g2

0x4df9,	// (0x00008dad) form2_midp_slider_pane_g3

0x4de8,	// (0x00008d9c) form2_midp_slider_pane_g4

0x4e01,	// (0x00008db5) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x00013dcc) form2_midp_slider_pane_g

0xbee5,	// (0x0000fe99) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xbee5,	// (0x0000fe99) vkb2_area_bottom_space_btn_pane_g4

0xe599,	// (0x0001254d) lc0_navi_pane_ParamLimits

0xe599,	// (0x0001254d) lc0_navi_pane

0xe60f,	// (0x000125c3) lc0_stat_indi_pane_ParamLimits

0xe60f,	// (0x000125c3) lc0_stat_indi_pane

0xe626,	// (0x000125da) ls0_title_pane_ParamLimits

0xe626,	// (0x000125da) ls0_title_pane

0xce6e,	// (0x00010e22) bg_popup_sub_pane_cp14_ParamLimits

0x3c87,	// (0x00007c3b) list_uniindi_pane_ParamLimits

0x3c93,	// (0x00007c47) uniindi_top_pane_ParamLimits

0x3d2e,	// (0x00007ce2) list_single_uniindi_pane_g1_ParamLimits

0x3d41,	// (0x00007cf5) list_single_uniindi_pane_t1_ParamLimits

0xbf29,	// (0x0000fedd) lc0_stat_clock_pane_ParamLimits

0xbf29,	// (0x0000fedd) lc0_stat_clock_pane

0x4e43,	// (0x00008df7) lc0_stat_indi_pane_g1_ParamLimits

0x4e43,	// (0x00008df7) lc0_stat_indi_pane_g1

0x4e36,	// (0x00008dea) lc0_stat_indi_pane_g2_ParamLimits

0x4e36,	// (0x00008dea) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x00013dd7) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x00013dd7) lc0_stat_indi_pane_g

0xbf36,	// (0x0000feea) lc0_uni_indicator_pane_ParamLimits

0xbf36,	// (0x0000feea) lc0_uni_indicator_pane

0x4e5d,	// (0x00008e11) ls0_title_pane_g1_ParamLimits

0x4e5d,	// (0x00008e11) ls0_title_pane_g1

0x4e71,	// (0x00008e25) ls0_title_pane_t1_ParamLimits

0x4e71,	// (0x00008e25) ls0_title_pane_t1

0xbf43,	// (0x0000fef7) lc0_uni_indicator_pane_g1_ParamLimits

0xbf43,	// (0x0000fef7) lc0_uni_indicator_pane_g1

0x4eb9,	// (0x00008e6d) lc0_stat_clock_pane_t1

0xbf87,	// (0x0000ff3b) main_ai5_pane

0x4ec7,	// (0x00008e7b) ai5_sk_pane_ParamLimits

0x4ec7,	// (0x00008e7b) ai5_sk_pane

0x4ed4,	// (0x00008e88) cell_ai5_widget_pane_ParamLimits

0x4ed4,	// (0x00008e88) cell_ai5_widget_pane

0x4f2d,	// (0x00008ee1) aid_size_cell_widget_grid

0x4f3f,	// (0x00008ef3) bg_ai5_widget_pane_ParamLimits

0x4f3f,	// (0x00008ef3) bg_ai5_widget_pane

0x4f67,	// (0x00008f1b) cell_ai5_widget_pane_g2

0x4f77,	// (0x00008f2b) cell_ai5_widget_pane_g3

0x4f96,	// (0x00008f4a) cell_ai5_widget_pane_g4

0x4fa2,	// (0x00008f56) cell_ai5_widget_pane_g5

0x4fae,	// (0x00008f62) cell_ai5_widget_pane_g6

0x4fba,	// (0x00008f6e) cell_ai5_widget_pane_g7

0x5002,	// (0x00008fb6) cell_ai5_widget_pane_t1_ParamLimits

0x5002,	// (0x00008fb6) cell_ai5_widget_pane_t1

0x501f,	// (0x00008fd3) cell_ai5_widget_pane_t2_ParamLimits

0x501f,	// (0x00008fd3) cell_ai5_widget_pane_t2

0x5037,	// (0x00008feb) cell_ai5_widget_pane_t3_ParamLimits

0x5037,	// (0x00008feb) cell_ai5_widget_pane_t3

0x504f,	// (0x00009003) cell_ai5_widget_pane_t4_ParamLimits

0x504f,	// (0x00009003) cell_ai5_widget_pane_t4

0x5069,	// (0x0000901d) cell_ai5_widget_pane_t5_ParamLimits

0x5069,	// (0x0000901d) cell_ai5_widget_pane_t5

0x5088,	// (0x0000903c) cell_ai5_widget_pane_t6_ParamLimits

0x5088,	// (0x0000903c) cell_ai5_widget_pane_t6

0x509a,	// (0x0000904e) cell_ai5_widget_pane_t7_ParamLimits

0x509a,	// (0x0000904e) cell_ai5_widget_pane_t7

0x50b3,	// (0x00009067) cell_ai5_widget_pane_t8_ParamLimits

0x50b3,	// (0x00009067) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x00013df1) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x00013df1) cell_ai5_widget_pane_t

0x50fe,	// (0x000090b2) grid_ai5_widget_pane

0xce6e,	// (0x00010e22) highlight_cell_ai5_widget_pane_ParamLimits

0xce6e,	// (0x00010e22) highlight_cell_ai5_widget_pane

0x5112,	// (0x000090c6) ai5_sk_left_pane

0x511c,	// (0x000090d0) ai5_sk_middle_pane

0x5126,	// (0x000090da) ai5_sk_right_pane

0x5130,	// (0x000090e4) bg_ai5_widget_pane_g1_ParamLimits

0x5130,	// (0x000090e4) bg_ai5_widget_pane_g1

0x513c,	// (0x000090f0) bg_ai5_widget_pane_g2_ParamLimits

0x513c,	// (0x000090f0) bg_ai5_widget_pane_g2

0x5148,	// (0x000090fc) bg_ai5_widget_pane_g3_ParamLimits

0x5148,	// (0x000090fc) bg_ai5_widget_pane_g3

0x5154,	// (0x00009108) bg_ai5_widget_pane_g4_ParamLimits

0x5154,	// (0x00009108) bg_ai5_widget_pane_g4

0x5160,	// (0x00009114) bg_ai5_widget_pane_g5_ParamLimits

0x5160,	// (0x00009114) bg_ai5_widget_pane_g5

0x516c,	// (0x00009120) bg_ai5_widget_pane_g6_ParamLimits

0x516c,	// (0x00009120) bg_ai5_widget_pane_g6

0x5178,	// (0x0000912c) bg_ai5_widget_pane_g7_ParamLimits

0x5178,	// (0x0000912c) bg_ai5_widget_pane_g7

0x5184,	// (0x00009138) bg_ai5_widget_pane_g8_ParamLimits

0x5184,	// (0x00009138) bg_ai5_widget_pane_g8

0x5190,	// (0x00009144) bg_ai5_widget_pane_g9_ParamLimits

0x5190,	// (0x00009144) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00013e06) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00013e06) bg_ai5_widget_pane_g

0x51c2,	// (0x00009176) cell_shortcut_ai5_widget_pane_ParamLimits

0x51c2,	// (0x00009176) cell_shortcut_ai5_widget_pane

0xc238,	// (0x000101ec) bg_cell_shortcut_ai5_widget_pane

0x51ce,	// (0x00009182) cell_grid_ai5_widget_pane_g1

0x51d7,	// (0x0000918b) highlight_cell_shortcut_ai5_widget_pane

0xe8cb,	// (0x0001287f) ai5_sk_left_pane_g1

0x51df,	// (0x00009193) ai5_sk_left_pane_g2

0x51e7,	// (0x0000919b) ai5_sk_left_pane_g3

0x51ef,	// (0x000091a3) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00013e19) ai5_sk_left_pane_g

0x51f7,	// (0x000091ab) ai5_sk_left_pane_t1

0xe8d3,	// (0x00012887) ai5_sk_right_pane_g1

0x5205,	// (0x000091b9) ai5_sk_right_pane_g2

0x520d,	// (0x000091c1) ai5_sk_right_pane_g3

0x5215,	// (0x000091c9) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00013e22) ai5_sk_right_pane_g

0x521d,	// (0x000091d1) ai5_sk_right_pane_t1

0xe8d3,	// (0x00012887) ai5_sk_middle_pane_g1

0xe8cb,	// (0x0001287f) ai5_sk_middle_pane_g2

0xe8eb,	// (0x0001289f) ai5_sk_middle_pane_g3

0x520d,	// (0x000091c1) ai5_sk_middle_pane_g4

0x51e7,	// (0x0000919b) ai5_sk_middle_pane_g5

0x522b,	// (0x000091df) ai5_sk_middle_pane_g6

0x5233,	// (0x000091e7) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00013e2b) ai5_sk_middle_pane_g

0xe440,	// (0x000123f4) aid_touch_area_size_lc0_ParamLimits

0xe440,	// (0x000123f4) aid_touch_area_size_lc0

0xb5e8,	// (0x0000f59c) cell_hwr_candidate_pane_t1_ParamLimits

0xe45a,	// (0x0001240e) aid_touch_navi_pane

0xe709,	// (0x000126bd) status_dt_navi_pane_ParamLimits

0xe709,	// (0x000126bd) status_dt_navi_pane

0xe716,	// (0x000126ca) status_dt_sta_pane_ParamLimits

0xe716,	// (0x000126ca) status_dt_sta_pane

0x523b,	// (0x000091ef) dt_sta_controll_pane

0x5248,	// (0x000091fc) dt_sta_indi_pane

0x5259,	// (0x0000920d) dt_sta_title_pane

0xc3ff,	// (0x000103b3) bg_dt_sta_indi_pane_ParamLimits

0xc3ff,	// (0x000103b3) bg_dt_sta_indi_pane

0x526c,	// (0x00009220) dt_sta_battery_pane

0x5274,	// (0x00009228) dt_sta_indi_pane_g1

0x527d,	// (0x00009231) dt_sta_indi_pane_g2

0x5286,	// (0x0000923a) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x00013e3a) dt_sta_indi_pane_g

0x528f,	// (0x00009243) dt_sta_signal_pane

0xce6e,	// (0x00010e22) bg_dt_sta_title_pane_ParamLimits

0xce6e,	// (0x00010e22) bg_dt_sta_title_pane

0x5298,	// (0x0000924c) dt_sta_title_pane_g1

0x52a0,	// (0x00009254) dt_sta_title_pane_t1_ParamLimits

0x52a0,	// (0x00009254) dt_sta_title_pane_t1

0xbf87,	// (0x0000ff3b) bg_dt_sta_control_pane

0x52b5,	// (0x00009269) dt_sta_controll_pane_g1

0x52be,	// (0x00009272) bg_dt_sta_title_pane_g1

0x52c7,	// (0x0000927b) bg_dt_sta_title_pane_g2

0x52d0,	// (0x00009284) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x00013e41) bg_dt_sta_title_pane_g

0x1d0e,	// (0x00005cc2) bg_dt_sta_indi_pane_g1

0x52d9,	// (0x0000928d) dt_sta_signal_pane_g1

0x52e1,	// (0x00009295) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x00013e48) dt_sta_signal_pane_g

0x52e9,	// (0x0000929d) dt_sta_battery_pane_g1

0x52f2,	// (0x000092a6) dt_sta_battery_pane_t1

0x1d0e,	// (0x00005cc2) bg_dt_sta_control_pane_g1

0xd6f9,	// (0x000116ad) fep_china_uni_eep_pane

0xd701,	// (0x000116b5) fep_china_uni_entry_pane_ParamLimits

0xd711,	// (0x000116c5) popup_fep_china_uni_window_g1_ParamLimits

0xd721,	// (0x000116d5) popup_fep_china_uni_window_g2_ParamLimits

0xd721,	// (0x000116d5) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x000136e4) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x000136e4) popup_fep_china_uni_window_g

0x5301,	// (0x000092b5) fep_china_uni_eep_pane_g1

0x5309,	// (0x000092bd) fep_china_uni_eep_pane_t1

0x4e0a,	// (0x00008dbe) aid_touch_area_size_smil_player

0xe591,	// (0x00012545) lc0_clock_pane

0xe763,	// (0x00012717) status_pane_g5_ParamLimits

0xe763,	// (0x00012717) status_pane_g5

0xe0d1,	// (0x00012085) popup_keymap_window

0xe72b,	// (0x000126df) status_icon_pane

0x4f77,	// (0x00008f2b) cell_ai5_widget_pane_g3_ParamLimits

0x4f96,	// (0x00008f4a) cell_ai5_widget_pane_g4_ParamLimits

0x4fa2,	// (0x00008f56) cell_ai5_widget_pane_g5_ParamLimits

0x4fc6,	// (0x00008f7a) cell_ai5_widget_pane_g8_ParamLimits

0x4fc6,	// (0x00008f7a) cell_ai5_widget_pane_g8

0x4fda,	// (0x00008f8e) cell_ai5_widget_pane_g9_ParamLimits

0x4fda,	// (0x00008f8e) cell_ai5_widget_pane_g9

0x4fee,	// (0x00008fa2) cell_ai5_widget_pane_g10_ParamLimits

0x4fee,	// (0x00008fa2) cell_ai5_widget_pane_g10

0x5318,	// (0x000092cc) status_icon_pane_g1

0xbf87,	// (0x0000ff3b) bg_popup_sub_pane_cp13

0x5320,	// (0x000092d4) popup_keymap_window_t1

0xdec2,	// (0x00011e76) control_pane_g6_ParamLimits

0xdec2,	// (0x00011e76) control_pane_g6

0xdecf,	// (0x00011e83) control_pane_g7_ParamLimits

0xdecf,	// (0x00011e83) control_pane_g7

0xdedc,	// (0x00011e90) control_pane_g8_ParamLimits

0xdedc,	// (0x00011e90) control_pane_g8

0x523b,	// (0x000091ef) dt_sta_controll_pane_ParamLimits

0x5248,	// (0x000091fc) dt_sta_indi_pane_ParamLimits

0x5259,	// (0x0000920d) dt_sta_title_pane_ParamLimits

0xc88a,	// (0x0001083e) aid_size_touch_scroll_bar_cale

0xa73c,	// (0x0000e6f0) popup_discreet_window_ParamLimits

0xa73c,	// (0x0000e6f0) popup_discreet_window

0xa7a0,	// (0x0000e754) popup_sk_window

0xef82,	// (0x00012f36) bg_popup_sub_pane_cp28_ParamLimits

0xef82,	// (0x00012f36) bg_popup_sub_pane_cp28

0x532e,	// (0x000092e2) popup_discreet_window_g1_ParamLimits

0x532e,	// (0x000092e2) popup_discreet_window_g1

0x534e,	// (0x00009302) popup_discreet_window_t1_ParamLimits

0x534e,	// (0x00009302) popup_discreet_window_t1

0x536c,	// (0x00009320) popup_discreet_window_t2_ParamLimits

0x536c,	// (0x00009320) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x00013e4d) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x00013e4d) popup_discreet_window_t

0xbf55,	// (0x0000ff09) popup_sk_window_g1

0xbf5e,	// (0x0000ff12) popup_sk_window_g2

0x0001,

0xfea0,	// (0x00013e54) popup_sk_window_g

0x53de,	// (0x00009392) popup_sk_window_t1

0x53d0,	// (0x00009384) popup_sk_window_t1_copy1

0x4f67,	// (0x00008f1b) cell_ai5_widget_pane_g2_ParamLimits

0x50c5,	// (0x00009079) cell_ai5_widget_pane_t9_ParamLimits

0x50c5,	// (0x00009079) cell_ai5_widget_pane_t9

0xbf87,	// (0x0000ff3b) main_fep_fshwr2_pane

0x53ec,	// (0x000093a0) aid_fshwr2_btn_pane

0x53f4,	// (0x000093a8) aid_fshwr2_syb_pane

0x53fc,	// (0x000093b0) aid_fshwr2_txt_pane

0x5404,	// (0x000093b8) fshwr2_func_candi_pane

0x540c,	// (0x000093c0) fshwr2_hwr_syb_pane

0x5414,	// (0x000093c8) fshwr2_icf_pane

0xbf87,	// (0x0000ff3b) fshwr2_icf_bg_pane

0x542e,	// (0x000093e2) fshwr2_icf_pane_t1_ParamLimits

0x542e,	// (0x000093e2) fshwr2_icf_pane_t1

0x1d0e,	// (0x00005cc2) fshwr2_func_candi_pane_g1

0x5445,	// (0x000093f9) fshwr2_func_candi_row_pane_ParamLimits

0x5445,	// (0x000093f9) fshwr2_func_candi_row_pane

0x5456,	// (0x0000940a) cell_fshwr2_syb_pane_ParamLimits

0x5456,	// (0x0000940a) cell_fshwr2_syb_pane

0x214e,	// (0x00006102) fshwr2_hwr_syb_pane_g1_ParamLimits

0x214e,	// (0x00006102) fshwr2_hwr_syb_pane_g1

0xbf87,	// (0x0000ff3b) bg_popup_call_pane_cp01

0x546d,	// (0x00009421) fshwr2_func_candi_cell_pane_ParamLimits

0x546d,	// (0x00009421) fshwr2_func_candi_cell_pane

0x5498,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5498,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane

0x54b2,	// (0x00009466) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x54b2,	// (0x00009466) fshwr2_func_candi_cell_pane_g1

0x54d2,	// (0x00009486) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x54d2,	// (0x00009486) fshwr2_func_candi_cell_pane_t1

0xbf87,	// (0x0000ff3b) bg_button_pane_cp08

0xdbfb,	// (0x00011baf) cell_fshwr2_syb_bg_pane

0x54e5,	// (0x00009499) cell_fshwr2_syb_bg_pane_g1

0x54ed,	// (0x000094a1) cell_fshwr2_syb_bg_pane_t1

0xce6e,	// (0x00010e22) main_tmo_pane

0x05fc,	// (0x000045b0) uni_indicator_pane_g1_ParamLimits

0x0611,	// (0x000045c5) uni_indicator_pane_g2_ParamLimits

0x0627,	// (0x000045db) uni_indicator_pane_g3_ParamLimits

0x063d,	// (0x000045f1) uni_indicator_pane_g4_ParamLimits

0x063d,	// (0x000045f1) uni_indicator_pane_g4

0x0651,	// (0x00004605) uni_indicator_pane_g5_ParamLimits

0x0651,	// (0x00004605) uni_indicator_pane_g5

0x0665,	// (0x00004619) uni_indicator_pane_g6_ParamLimits

0x0665,	// (0x00004619) uni_indicator_pane_g6

0xf921,	// (0x000138d5) uni_indicator_pane_g_ParamLimits

0x37d6,	// (0x0000778a) popup_tmo_note_window_ParamLimits

0x37d6,	// (0x0000778a) popup_tmo_note_window

0xbf87,	// (0x0000ff3b) fshwr2_bg_pane

0x54c3,	// (0x00009477) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x54c3,	// (0x00009477) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x00013e59) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x00013e59) fshwr2_func_candi_cell_pane_g

0x1d0e,	// (0x00005cc2) bg_popup_window_pane_cp01

0x54fc,	// (0x000094b0) bg_popup_window_pane_g1_cp01

0x5505,	// (0x000094b9) bg_popup_window_pane_cp22_ParamLimits

0x5505,	// (0x000094b9) bg_popup_window_pane_cp22

0x5513,	// (0x000094c7) listscroll_tmo_link_pane_ParamLimits

0x5513,	// (0x000094c7) listscroll_tmo_link_pane

0x5553,	// (0x00009507) popup_tmo_note_window_g1_ParamLimits

0x5553,	// (0x00009507) popup_tmo_note_window_g1

0x5560,	// (0x00009514) tmo_note_info_pane_ParamLimits

0x5560,	// (0x00009514) tmo_note_info_pane

0x557a,	// (0x0000952e) list_tmo_note_info_pane_g1_ParamLimits

0x557a,	// (0x0000952e) list_tmo_note_info_pane_g1

0x5591,	// (0x00009545) list_tmo_note_info_pane_g2_ParamLimits

0x5591,	// (0x00009545) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x00013e5e) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x00013e5e) list_tmo_note_info_pane_g

0x55ad,	// (0x00009561) list_tmo_note_info_text_pane_ParamLimits

0x55ad,	// (0x00009561) list_tmo_note_info_text_pane

0x562e,	// (0x000095e2) list_tmo_link_pane

0x563b,	// (0x000095ef) scroll_pane_cp20

0x5648,	// (0x000095fc) list_single_tmo_link_pane_ParamLimits

0x5648,	// (0x000095fc) list_single_tmo_link_pane

0x5658,	// (0x0000960c) list_single_tmo_link_pane_t1

0x5666,	// (0x0000961a) list_tmo_note_info_text_pane_t1_ParamLimits

0x5666,	// (0x0000961a) list_tmo_note_info_text_pane_t1

0xd094,	// (0x00011048) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd094,	// (0x00011048) aid_size_touch_scroll_bar_cp01

0xcf0e,	// (0x00010ec2) aid_size_touch_slider_marker

0xa78c,	// (0x0000e740) popup_settings_window_ParamLimits

0xa78c,	// (0x0000e740) popup_settings_window

0xdf94,	// (0x00011f48) popup_candi_list_indi_window

0xe45a,	// (0x0001240e) aid_touch_navi_pane_ParamLimits

0xb7a8,	// (0x0000f75c) rs_clock_indi_pane

0xb7b1,	// (0x0000f765) sctrl_sk_bottom_pane_ParamLimits

0xb7c2,	// (0x0000f776) sctrl_sk_top_pane_ParamLimits

0xb8ca,	// (0x0000f87e) popup_fep_tooltip_window

0x4f2d,	// (0x00008ee1) aid_size_cell_widget_grid_ParamLimits

0x4f5b,	// (0x00008f0f) cell_ai5_widget_pane_g1_ParamLimits

0x4f5b,	// (0x00008f0f) cell_ai5_widget_pane_g1

0x4fae,	// (0x00008f62) cell_ai5_widget_pane_g6_ParamLimits

0x4fba,	// (0x00008f6e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x00013ddc) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x00013ddc) cell_ai5_widget_pane_g

0x50e9,	// (0x0000909d) cell_ai5_widget_pane_t10_ParamLimits

0x50e9,	// (0x0000909d) cell_ai5_widget_pane_t10

0x50fe,	// (0x000090b2) grid_ai5_widget_pane_ParamLimits

0x519c,	// (0x00009150) cell_contacts_ai5_widget_pane_ParamLimits

0x519c,	// (0x00009150) cell_contacts_ai5_widget_pane

0x5381,	// (0x00009335) popup_discreet_window_t3_ParamLimits

0x5381,	// (0x00009335) popup_discreet_window_t3

0x541c,	// (0x000093d0) popup_fshwr2_char_preview_window_ParamLimits

0x541c,	// (0x000093d0) popup_fshwr2_char_preview_window

0x55cb,	// (0x0000957f) tmo_note_info_pane_t1

0x55e0,	// (0x00009594) tmo_note_info_pane_t2

0x55f5,	// (0x000095a9) tmo_note_info_pane_t3

0x560a,	// (0x000095be) tmo_note_info_pane_t4

0x561c,	// (0x000095d0) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x00013e63) tmo_note_info_pane_t

0x562e,	// (0x000095e2) list_tmo_link_pane_ParamLimits

0x563b,	// (0x000095ef) scroll_pane_cp20_ParamLimits

0xbf87,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp01

0x567f,	// (0x00009633) popup_fshwr2_char_preview_window_t1

0x568d,	// (0x00009641) popup_candi_list_indi_window_g1

0x5696,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane

0x56a2,	// (0x00009656) cell_contacts_ai5_widget_pane_g1

0x56b6,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2

0x56c5,	// (0x00009679) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x00013e6e) cell_contacts_ai5_widget_pane_g

0x56d8,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1

0xce6e,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5750,	// (0x00009704) settings_container_pane

0xdbfb,	// (0x00011baf) listscroll_set_pane_copy1

0x12e6,	// (0x0000529a) scroll_pane_cp121_copy1

0x575c,	// (0x00009710) set_content_pane_copy1

0x5764,	// (0x00009718) aid_height_set_list_copy1_ParamLimits

0x5764,	// (0x00009718) aid_height_set_list_copy1

0x0904,	// (0x000048b8) aid_size_parent_copy1_ParamLimits

0x0904,	// (0x000048b8) aid_size_parent_copy1

0x5770,	// (0x00009724) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5770,	// (0x00009724) button_value_adjust_pane_cp6_copy1

0xdf6e,	// (0x00011f22) list_highlight_pane_cp2_copy1_ParamLimits

0xdf6e,	// (0x00011f22) list_highlight_pane_cp2_copy1

0x5784,	// (0x00009738) list_set_pane_copy1_ParamLimits

0x5784,	// (0x00009738) list_set_pane_copy1

0x56ed,	// (0x000096a1) main_pane_set_t1_copy1_ParamLimits

0x56ed,	// (0x000096a1) main_pane_set_t1_copy1

0x5727,	// (0x000096db) main_pane_set_t2_copy1_ParamLimits

0x5727,	// (0x000096db) main_pane_set_t2_copy1

0x5812,	// (0x000097c6) main_pane_set_t3_copy1

0x5820,	// (0x000097d4) main_pane_set_t4_copy1

0x5744,	// (0x000096f8) set_content_pane_g1_copy1_ParamLimits

0x5744,	// (0x000096f8) set_content_pane_g1_copy1

0x582e,	// (0x000097e2) setting_code_pane_copy1

0x5836,	// (0x000097ea) setting_slider_graphic_pane_copy1

0x5836,	// (0x000097ea) setting_slider_pane_copy1

0x5836,	// (0x000097ea) setting_text_pane_copy1

0x5836,	// (0x000097ea) setting_volume_pane_copy1

0x583e,	// (0x000097f2) settings_code_pane_cp2_copy1

0x5846,	// (0x000097fa) settings_code_pane_cp_copy1_ParamLimits

0x5846,	// (0x000097fa) settings_code_pane_cp_copy1

0x585a,	// (0x0000980e) volume_set_pane_copy1

0x5862,	// (0x00009816) volume_set_pane_g10_copy1

0x586a,	// (0x0000981e) volume_set_pane_g1_copy1

0x5872,	// (0x00009826) volume_set_pane_g2_copy1

0x587a,	// (0x0000982e) volume_set_pane_g3_copy1

0x5882,	// (0x00009836) volume_set_pane_g4_copy1

0x588a,	// (0x0000983e) volume_set_pane_g5_copy1

0x5892,	// (0x00009846) volume_set_pane_g6_copy1

0x589a,	// (0x0000984e) volume_set_pane_g7_copy1

0x58a2,	// (0x00009856) volume_set_pane_g8_copy1

0x58aa,	// (0x0000985e) volume_set_pane_g9_copy1

0xc158,	// (0x0001010c) bg_set_opt_pane_cp_copy1_ParamLimits

0xc158,	// (0x0001010c) bg_set_opt_pane_cp_copy1

0xc617,	// (0x000105cb) setting_slider_pane_t1_copy1_ParamLimits

0xc617,	// (0x000105cb) setting_slider_pane_t1_copy1

0x58b2,	// (0x00009866) setting_slider_pane_t2_copy1_ParamLimits

0x58b2,	// (0x00009866) setting_slider_pane_t2_copy1

0x58cb,	// (0x0000987f) setting_slider_pane_t3_copy1_ParamLimits

0x58cb,	// (0x0000987f) setting_slider_pane_t3_copy1

0xc62d,	// (0x000105e1) slider_set_pane_copy1_ParamLimits

0xc62d,	// (0x000105e1) slider_set_pane_copy1

0xcf94,	// (0x00010f48) set_opt_bg_pane_g1_copy2

0xcf9c,	// (0x00010f50) set_opt_bg_pane_g2_copy2

0x58e2,	// (0x00009896) set_opt_bg_pane_g3_copy2

0xcfac,	// (0x00010f60) set_opt_bg_pane_g4_copy2

0xcfb4,	// (0x00010f68) set_opt_bg_pane_g5_copy2

0xcfbc,	// (0x00010f70) set_opt_bg_pane_g6_copy2

0x58ea,	// (0x0000989e) set_opt_bg_pane_g7_copy2

0x58f2,	// (0x000098a6) set_opt_bg_pane_g8_copy2

0x58fa,	// (0x000098ae) set_opt_bg_pane_g9_copy2

0x084b,	// (0x000047ff) aid_size_touch_slider_mark_copy1_ParamLimits

0x084b,	// (0x000047ff) aid_size_touch_slider_mark_copy1

0x0a3a,	// (0x000049ee) slider_set_pane_g1_copy1

0x0a43,	// (0x000049f7) slider_set_pane_g2_copy1

0x0878,	// (0x0000482c) slider_set_pane_g3_copy1_ParamLimits

0x0878,	// (0x0000482c) slider_set_pane_g3_copy1

0x088c,	// (0x00004840) slider_set_pane_g4_copy1_ParamLimits

0x088c,	// (0x00004840) slider_set_pane_g4_copy1

0x08a4,	// (0x00004858) slider_set_pane_g5_copy1_ParamLimits

0x08a4,	// (0x00004858) slider_set_pane_g5_copy1

0x0878,	// (0x0000482c) slider_set_pane_g6_copy1_ParamLimits

0x0878,	// (0x0000482c) slider_set_pane_g6_copy1

0x5902,	// (0x000098b6) slider_set_pane_g7_copy1_ParamLimits

0x5902,	// (0x000098b6) slider_set_pane_g7_copy1

0xc078,	// (0x0001002c) bg_set_opt_pane_cp2_copy1

0xc19a,	// (0x0001014e) setting_slider_graphic_pane_g1_copy1

0x5918,	// (0x000098cc) setting_slider_graphic_pane_t1_copy1

0x5927,	// (0x000098db) setting_slider_graphic_pane_t2_copy1

0x5936,	// (0x000098ea) slider_set_pane_cp_copy1

0x5946,	// (0x000098fa) input_focus_pane_cp1_copy1

0x594f,	// (0x00009903) list_set_text_pane_copy1

0x5957,	// (0x0000990b) setting_text_pane_g1_copy1

0x5960,	// (0x00009914) set_text_pane_t1_copy1

0x5946,	// (0x000098fa) input_focus_pane_cp2_copy1

0x5957,	// (0x0000990b) setting_code_pane_g1_copy1

0x5979,	// (0x0000992d) setting_code_pane_t1_copy1

0x5987,	// (0x0000993b) list_set_graphic_pane_copy1

0xc078,	// (0x0001002c) bg_set_opt_pane_cp4_copy1

0x599b,	// (0x0000994f) list_set_graphic_pane_g1_copy1_ParamLimits

0x599b,	// (0x0000994f) list_set_graphic_pane_g1_copy1

0x59a7,	// (0x0000995b) list_set_graphic_pane_g2_copy1

0xd976,	// (0x0001192a) list_set_graphic_pane_t1_copy1_ParamLimits

0xd976,	// (0x0001192a) list_set_graphic_pane_t1_copy1

0x1d0e,	// (0x00005cc2) rs_clock_indi_pane_g1

0x59af,	// (0x00009963) rs_clock_indi_pane_t1

0x59bd,	// (0x00009971) rs_indi_pane

0x59c5,	// (0x00009979) rs_indi_pane_g1

0x59ce,	// (0x00009982) rs_indi_pane_g2

0x568d,	// (0x00009641) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x00013e75) rs_indi_pane_g

0xdbfb,	// (0x00011baf) bg_popup_preview_window_pane_cp03

0x59d7,	// (0x0000998b) popup_fep_tooltip_window_t1

0x2e6c,	// (0x00006e20) popup_note2_window_g2_ParamLimits

0x2e6c,	// (0x00006e20) popup_note2_window_g2

0x0001,

0xfc61,	// (0x00013c15) popup_note2_window_g_ParamLimits

0xfc61,	// (0x00013c15) popup_note2_window_g

0x3465,	// (0x00007419) bg_popup_sub_pane_cp11_ParamLimits

0x3472,	// (0x00007426) cell_ai3_links_pane_g1_ParamLimits

0x3489,	// (0x0000743d) cell_ai3_links_pane_t1

0x5960,	// (0x00009914) set_text_pane_t1_copy1_ParamLimits

0xdb22,	// (0x00011ad6) cell_graphic_popup_pane_cp2_ParamLimits

0xdb22,	// (0x00011ad6) cell_graphic_popup_pane_cp2

0x59e5,	// (0x00009999) cell_graphic_popup_pane_g1_cp2

0xc739,	// (0x000106ed) cell_graphic_popup_pane_g2_cp2

0x59ed,	// (0x000099a1) cell_graphic_popup_pane_g3_cp2

0x59f5,	// (0x000099a9) cell_graphic_popup_pane_t2_cp2

0xc74a,	// (0x000106fe) grid_highlight_pane_cp3_cp2

0xd380,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xce6e,	// (0x00010e22) main_tmo_pane_ParamLimits

0x37ce,	// (0x00007782) popup_tmo_big_image_note_window

0x4f4b,	// (0x00008eff) cell_ai5_widget_list_pane

0x4f53,	// (0x00008f07) cell_ai5_widget_lrg_icon_pane

0x55cb,	// (0x0000957f) tmo_note_info_pane_t1_ParamLimits

0x55e0,	// (0x00009594) tmo_note_info_pane_t2_ParamLimits

0x55f5,	// (0x000095a9) tmo_note_info_pane_t3_ParamLimits

0x560a,	// (0x000095be) tmo_note_info_pane_t4_ParamLimits

0x561c,	// (0x000095d0) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x00013e63) tmo_note_info_pane_t_ParamLimits

0x5750,	// (0x00009704) settings_container_pane_ParamLimits

0x593e,	// (0x000098f2) indicator_popup_pane_cp5

0x593e,	// (0x000098f2) indicator_popup_pane_cp6

0x5987,	// (0x0000993b) list_set_graphic_pane_copy1_ParamLimits

0xbf87,	// (0x0000ff3b) bg_popup_window_pane_cp23

0x5a03,	// (0x000099b7) popup_tmo_big_image_note_window_g1

0x5a0c,	// (0x000099c0) popup_tmo_big_image_note_window_t1

0x5a1a,	// (0x000099ce) popup_tmo_big_image_note_window_t2

0x5a28,	// (0x000099dc) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x00013e7c) popup_tmo_big_image_note_window_t

0x5a36,	// (0x000099ea) cell_ai5_widget_lrg_icon_pane_g1

0x5a3e,	// (0x000099f2) cell_ai5_widget_lrg_icon_pane_t1

0x5a4c,	// (0x00009a00) cell_ai5_widget_list_row_pane_ParamLimits

0x5a4c,	// (0x00009a00) cell_ai5_widget_list_row_pane

0x5a65,	// (0x00009a19) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x5a65,	// (0x00009a19) cell_ai5_widget_list_row_pane_g1

0x5a72,	// (0x00009a26) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x5a72,	// (0x00009a26) cell_ai5_widget_list_row_pane_t1

0x5a8a,	// (0x00009a3e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x5a8a,	// (0x00009a3e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecf,	// (0x00013e83) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x00013e83) cell_ai5_widget_list_row_pane_t

0xa665,	// (0x0000e619) main_fep_vtchi_ss_pane

0x5a9c,	// (0x00009a50) popup_fep_char_pre_window

0x5aa4,	// (0x00009a58) popup_fep_ituss_window

0x5ac1,	// (0x00009a75) popup_fep_vkbss_window

0x5ae0,	// (0x00009a94) grid_vkbss_keypad_pane_ParamLimits

0x5ae0,	// (0x00009a94) grid_vkbss_keypad_pane

0x5af0,	// (0x00009aa4) ituss_keypad_pane

0x5b09,	// (0x00009abd) aid_vkbss_key_offset_ParamLimits

0x5b09,	// (0x00009abd) aid_vkbss_key_offset

0x5b15,	// (0x00009ac9) cell_vkbss_key_pane_ParamLimits

0x5b15,	// (0x00009ac9) cell_vkbss_key_pane

0x5b2b,	// (0x00009adf) bg_cell_vkbss_key_g1_ParamLimits

0x5b2b,	// (0x00009adf) bg_cell_vkbss_key_g1

0x5b37,	// (0x00009aeb) cell_vkbss_key_3p_pane_ParamLimits

0x5b37,	// (0x00009aeb) cell_vkbss_key_3p_pane

0x5b51,	// (0x00009b05) cell_vkbss_key_g1_ParamLimits

0x5b51,	// (0x00009b05) cell_vkbss_key_g1

0x5b6b,	// (0x00009b1f) cell_vkbss_key_t1_ParamLimits

0x5b6b,	// (0x00009b1f) cell_vkbss_key_t1

0x5b96,	// (0x00009b4a) cell_ituss_key_pane_ParamLimits

0x5b96,	// (0x00009b4a) cell_ituss_key_pane

0x5ba6,	// (0x00009b5a) bg_cell_ituss_key_g1_ParamLimits

0x5ba6,	// (0x00009b5a) bg_cell_ituss_key_g1

0x5bb2,	// (0x00009b66) cell_ituss_key_pane_g1_ParamLimits

0x5bb2,	// (0x00009b66) cell_ituss_key_pane_g1

0x5bbe,	// (0x00009b72) cell_ituss_key_pane_g2_ParamLimits

0x5bbe,	// (0x00009b72) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x00013e88) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x00013e88) cell_ituss_key_pane_g

0x5bd7,	// (0x00009b8b) cell_ituss_key_t1_ParamLimits

0x5bd7,	// (0x00009b8b) cell_ituss_key_t1

0x5c05,	// (0x00009bb9) cell_ituss_key_t2_ParamLimits

0x5c05,	// (0x00009bb9) cell_ituss_key_t2

0x5c36,	// (0x00009bea) cell_ituss_key_t3_ParamLimits

0x5c36,	// (0x00009bea) cell_ituss_key_t3

0x5c67,	// (0x00009c1b) cell_ituss_key_t4_ParamLimits

0x5c67,	// (0x00009c1b) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x00013e8d) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x00013e8d) cell_ituss_key_t

0x5c98,	// (0x00009c4c) cell_vkbss_key_3p_pane_g1

0x5ca0,	// (0x00009c54) cell_vkbss_key_3p_pane_g2

0x5ca8,	// (0x00009c5c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00013e96) cell_vkbss_key_3p_pane_g

0xbf87,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp02

0x5cb0,	// (0x00009c64) popup_fep_char_pre_window_t1

0x4f23,	// (0x00008ed7) main_ai5_sk_pane

0x5696,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x56a2,	// (0x00009656) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x56b6,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x56c5,	// (0x00009679) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x00013e6e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x56d8,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xce6e,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x5cbf,	// (0x00009c73) main_ai5_sk_pane_g1

0xedcc,	// (0x00012d80) popup_query_code_window_g1

0x5ab6,	// (0x00009a6a) popup_fep_vkb_icf_pane

0x5aca,	// (0x00009a7e) popup_fep_vtchi_icf_pane

0xce6e,	// (0x00010e22) bg_icf_pane

0x5cd7,	// (0x00009c8b) list_vkb_icf_pane

0xce6e,	// (0x00010e22) bg_icf_pane_cp01

0x378d,	// (0x00007741) vtchi_icf_list_pane

0x5cf7,	// (0x00009cab) list_vkb_icf_pane_t1_ParamLimits

0x5cf7,	// (0x00009cab) list_vkb_icf_pane_t1

0x5d0e,	// (0x00009cc2) vtchi_icf_list_pane_t1_ParamLimits

0x5d0e,	// (0x00009cc2) vtchi_icf_list_pane_t1

0x5aa4,	// (0x00009a58) popup_fep_ituss_window_ParamLimits

0x5aca,	// (0x00009a7e) popup_fep_vtchi_icf_pane_ParamLimits

0x5af0,	// (0x00009aa4) ituss_keypad_pane_ParamLimits

0x5b00,	// (0x00009ab4) ituss_sks_pane

0xce6e,	// (0x00010e22) bg_icf_pane_ParamLimits

0x5cc8,	// (0x00009c7c) icf_edit_indi_pane_ParamLimits

0x5cc8,	// (0x00009c7c) icf_edit_indi_pane

0x5cd7,	// (0x00009c8b) list_vkb_icf_pane_ParamLimits

0xce6e,	// (0x00010e22) bg_icf_pane_cp01_ParamLimits

0x5ce3,	// (0x00009c97) icf_edit_indi_pane_cp01_ParamLimits

0x5ce3,	// (0x00009c97) icf_edit_indi_pane_cp01

0x5cef,	// (0x00009ca3) vtchi_query_pane

0x214e,	// (0x00006102) icf_edit_indi_pane_g1_ParamLimits

0x214e,	// (0x00006102) icf_edit_indi_pane_g1

0x5d27,	// (0x00009cdb) icf_edit_indi_pane_g2_ParamLimits

0x5d27,	// (0x00009cdb) icf_edit_indi_pane_g2

0x0001,

0xfee9,	// (0x00013e9d) icf_edit_indi_pane_g_ParamLimits

0xfee9,	// (0x00013e9d) icf_edit_indi_pane_g

0x5d33,	// (0x00009ce7) icf_edit_indi_pane_t1

0x5d41,	// (0x00009cf5) bg_input_focus_pane_cp042

0x5d4a,	// (0x00009cfe) vtchi_button_pane

0x5d53,	// (0x00009d07) vtchi_query_pane_t1

0x5d61,	// (0x00009d15) vtchi_query_pane_t2

0x5d6f,	// (0x00009d23) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x00013ea2) vtchi_query_pane_t

0xbf87,	// (0x0000ff3b) bg_button_pane_cp13

0x5d7d,	// (0x00009d31) vtchi_button_pane_g1

0x3d78,	// (0x00007d2c) ituss_sks_pane_g1

0x5d85,	// (0x00009d39) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x00013ea9) ituss_sks_pane_g

0x5d8e,	// (0x00009d42) ituss_sks_pane_t1

0x5d9c,	// (0x00009d50) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x00013eae) ituss_sks_pane_t

0x17b5,	// (0x00005769) indicator_nsta_pane_cp_g1

0x17be,	// (0x00005772) indicator_nsta_pane_cp_g2

0x17c6,	// (0x0000577a) indicator_nsta_pane_cp_g3

0x17ce,	// (0x00005782) indicator_nsta_pane_cp_g4

0x17d6,	// (0x0000578a) indicator_nsta_pane_cp_g5

0x17de,	// (0x00005792) indicator_nsta_pane_cp_g6

0x0005,

0xfa9f,	// (0x00013a53) indicator_nsta_pane_cp_g

0x49df,	// (0x00008993) cell_graphic2_pane_t2_ParamLimits

0x49df,	// (0x00008993) cell_graphic2_pane_t2

0x0001,

0xfdb1,	// (0x00013d65) cell_graphic2_pane_t_ParamLimits

0xfdb1,	// (0x00013d65) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
