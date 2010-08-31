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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00010e01 };

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
0xb255,	// (0x0001c056) Screen

0xb261,	// (0x0001c062) application_window_ParamLimits

0xb261,	// (0x0001c062) application_window

0xe870,	// (0x0001f671) screen_g1

0xa941,	// (0x0001b742) area_bottom_pane_ParamLimits

0xa941,	// (0x0001b742) area_bottom_pane

0xed04,	// (0x0001fb05) area_top_pane_ParamLimits

0xed04,	// (0x0001fb05) area_top_pane

0xeda2,	// (0x0001fba3) main_pane_ParamLimits

0xeda2,	// (0x0001fba3) main_pane

0xe87a,	// (0x0001f67b) misc_graphics

0xc7ad,	// (0x0001d5ae) battery_pane_ParamLimits

0xc7ad,	// (0x0001d5ae) battery_pane

0x4608,	// (0x00015409) bg_status_flat_pane_g8

0x4610,	// (0x00015411) bg_status_flat_pane_g9

0x3936,	// (0x00014737) context_pane_ParamLimits

0x3936,	// (0x00014737) context_pane

0xc924,	// (0x0001d725) navi_pane_ParamLimits

0xc924,	// (0x0001d725) navi_pane

0xc9ad,	// (0x0001d7ae) signal_pane_ParamLimits

0xc9ad,	// (0x0001d7ae) signal_pane

0x0008,

0xf880,	// (0x00020681) bg_status_flat_pane_g

0xca3d,	// (0x0001d83e) status_pane_g1_ParamLimits

0xca3d,	// (0x0001d83e) status_pane_g1

0xca53,	// (0x0001d854) status_pane_g2_ParamLimits

0xca53,	// (0x0001d854) status_pane_g2

0x3b76,	// (0x00014977) status_pane_g3_ParamLimits

0x3b76,	// (0x00014977) status_pane_g3

0x0004,

0xf7b3,	// (0x000205b4) status_pane_g_ParamLimits

0xf7b3,	// (0x000205b4) status_pane_g

0xca5f,	// (0x0001d860) title_pane_ParamLimits

0xca5f,	// (0x0001d860) title_pane

0xcabc,	// (0x0001d8bd) uni_indicator_pane_ParamLimits

0xcabc,	// (0x0001d8bd) uni_indicator_pane

0x315b,	// (0x00013f5c) bg_list_pane_ParamLimits

0x315b,	// (0x00013f5c) bg_list_pane

0xbfc2,	// (0x0001cdc3) find_pane

0xbfca,	// (0x0001cdcb) listscroll_app_pane_ParamLimits

0xbfca,	// (0x0001cdcb) listscroll_app_pane

0x318f,	// (0x00013f90) listscroll_form_pane

0xbfd6,	// (0x0001cdd7) listscroll_gen_pane_ParamLimits

0xbfd6,	// (0x0001cdd7) listscroll_gen_pane

0x318f,	// (0x00013f90) listscroll_set_pane

0x51e9,	// (0x00015fea) main_idle_act_pane

0x2e2f,	// (0x00013c30) main_idle_trad_pane

0x2e2f,	// (0x00013c30) main_list_empty_pane

0x31bd,	// (0x00013fbe) main_midp_pane

0x31c9,	// (0x00013fca) main_pane_g1_ParamLimits

0x31c9,	// (0x00013fca) main_pane_g1

0xbfea,	// (0x0001cdeb) popup_ai_message_window_ParamLimits

0xbfea,	// (0x0001cdeb) popup_ai_message_window

0xc08a,	// (0x0001ce8b) popup_fep_china_uni_window_ParamLimits

0xc08a,	// (0x0001ce8b) popup_fep_china_uni_window

0x32ef,	// (0x000140f0) popup_fep_japan_candidate_window_ParamLimits

0x32ef,	// (0x000140f0) popup_fep_japan_candidate_window

0x3319,	// (0x0001411a) popup_fep_japan_predictive_window_ParamLimits

0x3319,	// (0x0001411a) popup_fep_japan_predictive_window

0xc0ea,	// (0x0001ceeb) popup_find_window

0xc107,	// (0x0001cf08) popup_grid_graphic_window_ParamLimits

0xc107,	// (0x0001cf08) popup_grid_graphic_window

0x338a,	// (0x0001418b) popup_large_graphic_colour_window

0xc1ab,	// (0x0001cfac) popup_menu_window_ParamLimits

0xc1ab,	// (0x0001cfac) popup_menu_window

0xc397,	// (0x0001d198) popup_note_image_window

0xc357,	// (0x0001d158) popup_note_wait_window_ParamLimits

0xc357,	// (0x0001d158) popup_note_wait_window

0xc3af,	// (0x0001d1b0) popup_note_window_ParamLimits

0xc3af,	// (0x0001d1b0) popup_note_window

0xc45d,	// (0x0001d25e) popup_query_code_window_ParamLimits

0xc45d,	// (0x0001d25e) popup_query_code_window

0x35f6,	// (0x000143f7) popup_query_data_code_window_ParamLimits

0x35f6,	// (0x000143f7) popup_query_data_code_window

0xc49d,	// (0x0001d29e) popup_query_data_window_ParamLimits

0xc49d,	// (0x0001d29e) popup_query_data_window

0xc531,	// (0x0001d332) popup_query_sat_info_window_ParamLimits

0xc531,	// (0x0001d332) popup_query_sat_info_window

0xc5dc,	// (0x0001d3dd) popup_snote_single_graphic_window_ParamLimits

0xc5dc,	// (0x0001d3dd) popup_snote_single_graphic_window

0xc5dc,	// (0x0001d3dd) popup_snote_single_text_window_ParamLimits

0xc5dc,	// (0x0001d3dd) popup_snote_single_text_window

0x3691,	// (0x00014492) popup_sub_window_general

0x37d7,	// (0x000145d8) popup_window_general_ParamLimits

0x37d7,	// (0x000145d8) popup_window_general

0x37f0,	// (0x000145f1) power_save_pane

0xaac7,	// (0x0001b8c8) control_pane_g1_ParamLimits

0xaac7,	// (0x0001b8c8) control_pane_g1

0xf435,	// (0x00020236) control_pane_g2_ParamLimits

0xf435,	// (0x00020236) control_pane_g2

0x30fc,	// (0x00013efd) control_pane_g3_ParamLimits

0x30fc,	// (0x00013efd) control_pane_g3

0x0007,

0xf79b,	// (0x0002059c) control_pane_g_ParamLimits

0xf79b,	// (0x0002059c) control_pane_g

0xab09,	// (0x0001b90a) control_pane_t1_ParamLimits

0xab09,	// (0x0001b90a) control_pane_t1

0xab67,	// (0x0001b968) control_pane_t2_ParamLimits

0xab67,	// (0x0001b968) control_pane_t2

0x0002,

0xf7ac,	// (0x000205ad) control_pane_t_ParamLimits

0xf7ac,	// (0x000205ad) control_pane_t

0x301d,	// (0x00013e1e) navi_navi_volume_pane_cp1

0x3026,	// (0x00013e27) status_small_icon_pane

0x302e,	// (0x00013e2f) status_small_pane_g1_ParamLimits

0x302e,	// (0x00013e2f) status_small_pane_g1

0x3062,	// (0x00013e63) status_small_pane_g2_ParamLimits

0x3062,	// (0x00013e63) status_small_pane_g2

0x306e,	// (0x00013e6f) status_small_pane_g3_ParamLimits

0x306e,	// (0x00013e6f) status_small_pane_g3

0x307a,	// (0x00013e7b) status_small_pane_g4_ParamLimits

0x307a,	// (0x00013e7b) status_small_pane_g4

0x3086,	// (0x00013e87) status_small_pane_g5_ParamLimits

0x3086,	// (0x00013e87) status_small_pane_g5

0x3095,	// (0x00013e96) status_small_pane_g6_ParamLimits

0x3095,	// (0x00013e96) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002058b) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002058b) status_small_pane_g

0x30c5,	// (0x00013ec6) status_small_pane_t1

0x30e8,	// (0x00013ee9) status_small_wait_pane_ParamLimits

0x30e8,	// (0x00013ee9) status_small_wait_pane

0xbd75,	// (0x0001cb76) aid_levels_signal_ParamLimits

0xbd75,	// (0x0001cb76) aid_levels_signal

0xbd8d,	// (0x0001cb8e) signal_pane_g1_ParamLimits

0xbd8d,	// (0x0001cb8e) signal_pane_g1

0xbda8,	// (0x0001cba9) signal_pane_g2_ParamLimits

0xbda8,	// (0x0001cba9) signal_pane_g2

0x0001,

0xf71f,	// (0x00020520) signal_pane_g_ParamLimits

0xf71f,	// (0x00020520) signal_pane_g

0x2876,	// (0x00013677) context_pane_g1

0xb271,	// (0x0001c072) title_pane_g1

0xb2a6,	// (0x0001c0a7) title_pane_t1

0x116f,	// (0x00011f70) title_pane_t2

0x1195,	// (0x00011f96) title_pane_t3

0x0002,

0xf573,	// (0x00020374) title_pane_t

0xcae4,	// (0x0001d8e5) aid_levels_battery_ParamLimits

0xcae4,	// (0x0001d8e5) aid_levels_battery

0xcb00,	// (0x0001d901) battery_pane_g1_ParamLimits

0xcb00,	// (0x0001d901) battery_pane_g1

0xcb1d,	// (0x0001d91e) battery_pane_g2_ParamLimits

0xcb1d,	// (0x0001d91e) battery_pane_g2

0x0001,

0xf7be,	// (0x000205bf) battery_pane_g_ParamLimits

0xf7be,	// (0x000205bf) battery_pane_g

0xcd5d,	// (0x0001db5e) uni_indicator_pane_g1

0xcd72,	// (0x0001db73) uni_indicator_pane_g2

0xcd87,	// (0x0001db88) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00020729) uni_indicator_pane_g

0x2c9d,	// (0x00013a9e) navi_icon_pane_ParamLimits

0x2c9d,	// (0x00013a9e) navi_icon_pane

0x2be4,	// (0x000139e5) navi_midp_pane

0x2cb9,	// (0x00013aba) navi_navi_pane

0x2cc3,	// (0x00013ac4) navi_text_pane_ParamLimits

0x2cc3,	// (0x00013ac4) navi_text_pane

0xe870,	// (0x0001f671) status_small_wait_pane_g1

0x15f3,	// (0x000123f4) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00020724) status_small_wait_pane_g

0xccfc,	// (0x0001dafd) navi_navi_icon_text_pane

0xcd04,	// (0x0001db05) navi_navi_pane_g1_ParamLimits

0xcd04,	// (0x0001db05) navi_navi_pane_g1

0xcd16,	// (0x0001db17) navi_navi_pane_g2_ParamLimits

0xcd16,	// (0x0001db17) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x000206f2) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x000206f2) navi_navi_pane_g

0x4c97,	// (0x00015a98) navi_navi_tabs_pane

0xcd28,	// (0x0001db29) navi_navi_text_pane

0xccfc,	// (0x0001dafd) navi_navi_volume_pane

0xccea,	// (0x0001daeb) navi_text_pane_t1

0xccde,	// (0x0001dadf) navi_icon_pane_g1

0x4b88,	// (0x00015989) navi_navi_text_pane_t1

0xadce,	// (0x0001bbcf) navi_navi_volume_pane_g1

0xadd6,	// (0x0001bbd7) volume_small_pane

0xcc3a,	// (0x0001da3b) navi_navi_icon_text_pane_g1

0xcc42,	// (0x0001da43) navi_navi_icon_text_pane_t1

0x2cb9,	// (0x00013aba) navi_tabs_2_long_pane

0x2cb9,	// (0x00013aba) navi_tabs_2_pane

0x2cb9,	// (0x00013aba) navi_tabs_3_long_pane

0x2cb9,	// (0x00013aba) navi_tabs_3_pane

0x2cb9,	// (0x00013aba) navi_tabs_4_pane

0xadae,	// (0x0001bbaf) tabs_2_active_pane_ParamLimits

0xadae,	// (0x0001bbaf) tabs_2_active_pane

0xadbe,	// (0x0001bbbf) tabs_2_passive_pane_ParamLimits

0xadbe,	// (0x0001bbbf) tabs_2_passive_pane

0xad7c,	// (0x0001bb7d) tabs_3_active_pane_ParamLimits

0xad7c,	// (0x0001bb7d) tabs_3_active_pane

0xad8c,	// (0x0001bb8d) tabs_3_passive_pane_ParamLimits

0xad8c,	// (0x0001bb8d) tabs_3_passive_pane

0xad9d,	// (0x0001bb9e) tabs_3_passive_pane_cp_ParamLimits

0xad9d,	// (0x0001bb9e) tabs_3_passive_pane_cp

0xad38,	// (0x0001bb39) tabs_4_active_pane_ParamLimits

0xad38,	// (0x0001bb39) tabs_4_active_pane

0xad49,	// (0x0001bb4a) tabs_4_passive_pane_ParamLimits

0xad49,	// (0x0001bb4a) tabs_4_passive_pane

0xad5a,	// (0x0001bb5b) tabs_4_passive_pane_cp_ParamLimits

0xad5a,	// (0x0001bb5b) tabs_4_passive_pane_cp

0xad6b,	// (0x0001bb6c) tabs_4_passive_pane_cp2_ParamLimits

0xad6b,	// (0x0001bb6c) tabs_4_passive_pane_cp2

0xad14,	// (0x0001bb15) tabs_2_long_active_pane_ParamLimits

0xad14,	// (0x0001bb15) tabs_2_long_active_pane

0xad26,	// (0x0001bb27) tabs_2_long_passive_pane_ParamLimits

0xad26,	// (0x0001bb27) tabs_2_long_passive_pane

0xacc9,	// (0x0001baca) tabs_3_long_active_pane_ParamLimits

0xacc9,	// (0x0001baca) tabs_3_long_active_pane

0xace2,	// (0x0001bae3) tabs_3_long_passive_pane_ParamLimits

0xace2,	// (0x0001bae3) tabs_3_long_passive_pane

0xacfb,	// (0x0001bafc) tabs_3_long_passive_pane_cp_ParamLimits

0xacfb,	// (0x0001bafc) tabs_3_long_passive_pane_cp

0x009a,	// (0x00010e9b) volume_small_pane_g1

0xac78,	// (0x0001ba79) volume_small_pane_g2

0xac81,	// (0x0001ba82) volume_small_pane_g3

0xac8a,	// (0x0001ba8b) volume_small_pane_g4

0xac93,	// (0x0001ba94) volume_small_pane_g5

0xac9c,	// (0x0001ba9d) volume_small_pane_g6

0xaca5,	// (0x0001baa6) volume_small_pane_g7

0xacae,	// (0x0001baaf) volume_small_pane_g8

0xacb7,	// (0x0001bab8) volume_small_pane_g9

0xacc0,	// (0x0001bac1) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x000206be) volume_small_pane_g

0x143d,	// (0x0001223e) bg_active_tab_pane_cp2_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp2

0xb332,	// (0x0001c133) tabs_3_active_pane_g1

0xb33a,	// (0x0001c13b) tabs_3_active_pane_t1

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp2_ParamLimits

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp2

0xb332,	// (0x0001c133) tabs_3_passive_pane_g1

0xb33a,	// (0x0001c13b) tabs_3_passive_pane_t1

0x143d,	// (0x0001223e) bg_active_tab_pane_cp3_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp3

0xb34c,	// (0x0001c14d) tabs_4_active_pane_g1

0xb354,	// (0x0001c155) tabs_4_active_pane_t1

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp3_ParamLimits

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp3

0xb34c,	// (0x0001c14d) tabs_4_1_passive_pane_g1

0xb354,	// (0x0001c155) tabs_4_1_passive_pane_t1

0x31bd,	// (0x00013fbe) list_highlight_pane_cp2

0xce57,	// (0x0001dc58) list_set_pane_ParamLimits

0xce57,	// (0x0001dc58) list_set_pane

0xcf1f,	// (0x0001dd20) main_pane_set_t1_ParamLimits

0xcf1f,	// (0x0001dd20) main_pane_set_t1

0xcf3f,	// (0x0001dd40) main_pane_set_t2_ParamLimits

0xcf3f,	// (0x0001dd40) main_pane_set_t2

0xcf53,	// (0x0001dd54) main_pane_set_t3_ParamLimits

0xcf53,	// (0x0001dd54) main_pane_set_t3

0xcf67,	// (0x0001dd68) main_pane_set_t4_ParamLimits

0xcf67,	// (0x0001dd68) main_pane_set_t4

0x0003,

0xf98d,	// (0x0002078e) main_pane_set_t_ParamLimits

0xf98d,	// (0x0002078e) main_pane_set_t

0xcf7b,	// (0x0001dd7c) setting_code_pane

0x5349,	// (0x0001614a) setting_slider_graphic_pane

0x5349,	// (0x0001614a) setting_slider_pane

0x5349,	// (0x0001614a) setting_text_pane

0x5349,	// (0x0001614a) setting_volume_pane

0xef1e,	// (0x0001fd1f) volume_set_pane

0x11a7,	// (0x00011fa8) bg_set_opt_pane_cp

0xef28,	// (0x0001fd29) setting_slider_pane_t1

0xef3e,	// (0x0001fd3f) setting_slider_pane_t2

0xef58,	// (0x0001fd59) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002037b) setting_slider_pane_t

0xef70,	// (0x0001fd71) slider_set_pane

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp2

0x11e9,	// (0x00011fea) setting_slider_graphic_pane_g1

0xef86,	// (0x0001fd87) setting_slider_graphic_pane_t1

0xef96,	// (0x0001fd97) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00020382) setting_slider_graphic_pane_t

0xefa6,	// (0x0001fda7) slider_set_pane_cp

0xe87a,	// (0x0001f67b) input_focus_pane_cp1

0x51d0,	// (0x00015fd1) list_set_text_pane

0xe870,	// (0x0001f671) setting_text_pane_g1

0xe87a,	// (0x0001f67b) input_focus_pane_cp2

0xe870,	// (0x0001f671) setting_code_pane_g1

0x11f2,	// (0x00011ff3) setting_code_pane_t1

0x1200,	// (0x00012001) set_text_pane_t1_ParamLimits

0x1200,	// (0x00012001) set_text_pane_t1

0x211f,	// (0x00012f20) set_opt_bg_pane_g1

0x2127,	// (0x00012f28) set_opt_bg_pane_g2

0x51a8,	// (0x00015fa9) set_opt_bg_pane_g3

0x2137,	// (0x00012f38) set_opt_bg_pane_g4

0x213f,	// (0x00012f40) set_opt_bg_pane_g5

0x2147,	// (0x00012f48) set_opt_bg_pane_g6

0x51b2,	// (0x00015fb3) set_opt_bg_pane_g7

0x51bc,	// (0x00015fbd) set_opt_bg_pane_g8

0x51c6,	// (0x00015fc7) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0002077b) set_opt_bg_pane_g

0x519b,	// (0x00015f9c) slider_set_pane_g1

0x027e,	// (0x0001107f) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0002076c) slider_set_pane_g

0x0206,	// (0x00011007) volume_set_pane_g1

0x0210,	// (0x00011011) volume_set_pane_g2

0x021a,	// (0x0001101b) volume_set_pane_g3

0x0224,	// (0x00011025) volume_set_pane_g4

0x022e,	// (0x0001102f) volume_set_pane_g5

0x0238,	// (0x00011039) volume_set_pane_g6

0x0242,	// (0x00011043) volume_set_pane_g7

0x024c,	// (0x0001104d) volume_set_pane_g8

0x0256,	// (0x00011057) volume_set_pane_g9

0x0260,	// (0x00011061) volume_set_pane_g10

0x0009,

0xf943,	// (0x00020744) volume_set_pane_g

0xb366,	// (0x0001c167) indicator_pane_ParamLimits

0xb366,	// (0x0001c167) indicator_pane

0xb392,	// (0x0001c193) main_idle_pane_g2_ParamLimits

0xb392,	// (0x0001c193) main_idle_pane_g2

0xb3ca,	// (0x0001c1cb) main_pane_idle_g1_ParamLimits

0xb3ca,	// (0x0001c1cb) main_pane_idle_g1

0x125c,	// (0x0001205d) popup_clock_digital_analogue_window_ParamLimits

0x125c,	// (0x0001205d) popup_clock_digital_analogue_window

0xb3f8,	// (0x0001c1f9) soft_indicator_pane_ParamLimits

0xb3f8,	// (0x0001c1f9) soft_indicator_pane

0xb414,	// (0x0001c215) wallpaper_pane_ParamLimits

0xb414,	// (0x0001c215) wallpaper_pane

0xe870,	// (0x0001f671) wallpaper_pane_g1

0xb426,	// (0x0001c227) indicator_pane_g1_ParamLimits

0xb426,	// (0x0001c227) indicator_pane_g1

0x566e,	// (0x0001646f) navi_navi_icon_text_pane_srt_g1

0x12b0,	// (0x000120b1) soft_indicator_pane_t1

0x12ca,	// (0x000120cb) aid_ps_area_pane

0xb43f,	// (0x0001c240) aid_ps_clock_pane

0x12e9,	// (0x000120ea) aid_ps_indicator_pane

0x12f5,	// (0x000120f6) indicator_ps_pane_ParamLimits

0x12f5,	// (0x000120f6) indicator_ps_pane

0x1304,	// (0x00012105) power_save_pane_g1_ParamLimits

0x1304,	// (0x00012105) power_save_pane_g1

0x1310,	// (0x00012111) power_save_pane_g2_ParamLimits

0x1310,	// (0x00012111) power_save_pane_g2

0xece4,	// (0x0001fae5) aid_navinavi_width_pane

0x12ca,	// (0x000120cb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00020387) power_save_pane_g_ParamLimits

0xf586,	// (0x00020387) power_save_pane_g

0x131e,	// (0x0001211f) power_save_pane_t1_ParamLimits

0x131e,	// (0x0001211f) power_save_pane_t1

0xb43f,	// (0x0001c240) aid_ps_clock_pane_ParamLimits

0x12e9,	// (0x000120ea) aid_ps_indicator_pane_ParamLimits

0x1330,	// (0x00012131) power_save_pane_t4_ParamLimits

0x1330,	// (0x00012131) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002038c) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002038c) power_save_pane_t

0x135a,	// (0x0001215b) power_save_t3_ParamLimits

0x135a,	// (0x0001215b) power_save_t3

0x1345,	// (0x00012146) power_save_t2_ParamLimits

0x1345,	// (0x00012146) power_save_t2

0x136f,	// (0x00012170) indicator_ps_pane_g1

0xb44d,	// (0x0001c24e) ai_gene_pane_ParamLimits

0xb44d,	// (0x0001c24e) ai_gene_pane

0xb464,	// (0x0001c265) ai_links_pane_ParamLimits

0xb464,	// (0x0001c265) ai_links_pane

0xb47c,	// (0x0001c27d) indicator_pane_cp1_ParamLimits

0xb47c,	// (0x0001c27d) indicator_pane_cp1

0xb48b,	// (0x0001c28c) main_pane_idle_g1_cp_ParamLimits

0xb48b,	// (0x0001c28c) main_pane_idle_g1_cp

0x13a8,	// (0x000121a9) popup_ai_links_title_window

0xb4a3,	// (0x0001c2a4) soft_indicator_pane_cp1_ParamLimits

0xb4a3,	// (0x0001c2a4) soft_indicator_pane_cp1

0x4f46,	// (0x00015d47) ai_links_pane_g1

0x4f4f,	// (0x00015d50) grid_ai_links_pane

0xcd54,	// (0x0001db55) ai_gene_pane_1

0x4f34,	// (0x00015d35) ai_gene_pane_2

0x4f3d,	// (0x00015d3e) list_highlight_pane_cp4

0xcd30,	// (0x0001db31) cell_ai_link_pane_ParamLimits

0xcd30,	// (0x0001db31) cell_ai_link_pane

0x4f03,	// (0x00015d04) cell_ai_link_pane_g1

0x15f3,	// (0x000123f4) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0002071f) cell_ai_link_pane_g

0xe87a,	// (0x0001f67b) grid_highlight_cp2

0xe87a,	// (0x0001f67b) bg_popup_sub_pane_cp1

0x13cb,	// (0x000121cc) popup_ai_links_title_window_t1

0x4e4f,	// (0x00015c50) ai_gene_pane_1_g1_ParamLimits

0x4e4f,	// (0x00015c50) ai_gene_pane_1_g1

0x4e5b,	// (0x00015c5c) ai_gene_pane_1_g2_ParamLimits

0x4e5b,	// (0x00015c5c) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00020715) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00020715) ai_gene_pane_1_g

0x4e68,	// (0x00015c69) ai_gene_pane_1_t1_ParamLimits

0x4e68,	// (0x00015c69) ai_gene_pane_1_t1

0x4e9c,	// (0x00015c9d) grid_ai_soft_ind_pane

0x4e3a,	// (0x00015c3b) ai_gene_pane_2_t1_ParamLimits

0x4e3a,	// (0x00015c3b) ai_gene_pane_2_t1

0xb4b7,	// (0x0001c2b8) main_pane_empty_t1_ParamLimits

0xb4b7,	// (0x0001c2b8) main_pane_empty_t1

0xb4cf,	// (0x0001c2d0) main_pane_empty_t2_ParamLimits

0xb4cf,	// (0x0001c2d0) main_pane_empty_t2

0xb4e4,	// (0x0001c2e5) main_pane_empty_t3_ParamLimits

0xb4e4,	// (0x0001c2e5) main_pane_empty_t3

0xb4f6,	// (0x0001c2f7) main_pane_empty_t4_ParamLimits

0xb4f6,	// (0x0001c2f7) main_pane_empty_t4

0xb508,	// (0x0001c309) main_pane_empty_t5_ParamLimits

0xb508,	// (0x0001c309) main_pane_empty_t5

0x0004,

0xf590,	// (0x00020391) main_pane_empty_t_ParamLimits

0xf590,	// (0x00020391) main_pane_empty_t

0x21fd,	// (0x00012ffe) bg_popup_window_pane_ParamLimits

0x21fd,	// (0x00012ffe) bg_popup_window_pane

0x4b96,	// (0x00015997) find_popup_pane_cp2_ParamLimits

0x4b96,	// (0x00015997) find_popup_pane_cp2

0x4ba2,	// (0x000159a3) heading_pane_ParamLimits

0x4ba2,	// (0x000159a3) heading_pane

0xe87a,	// (0x0001f67b) bg_popup_sub_pane

0xcc5f,	// (0x0001da60) bg_popup_window_pane_g1_ParamLimits

0xcc5f,	// (0x0001da60) bg_popup_window_pane_g1

0xcc6e,	// (0x0001da6f) bg_popup_window_pane_g2_ParamLimits

0xcc6e,	// (0x0001da6f) bg_popup_window_pane_g2

0xcc7a,	// (0x0001da7b) bg_popup_window_pane_g3_ParamLimits

0xcc7a,	// (0x0001da7b) bg_popup_window_pane_g3

0xcc86,	// (0x0001da87) bg_popup_window_pane_g4_ParamLimits

0xcc86,	// (0x0001da87) bg_popup_window_pane_g4

0xcc95,	// (0x0001da96) bg_popup_window_pane_g5_ParamLimits

0xcc95,	// (0x0001da96) bg_popup_window_pane_g5

0xcca5,	// (0x0001daa6) bg_popup_window_pane_g6_ParamLimits

0xcca5,	// (0x0001daa6) bg_popup_window_pane_g6

0xccb1,	// (0x0001dab2) bg_popup_window_pane_g7_ParamLimits

0xccb1,	// (0x0001dab2) bg_popup_window_pane_g7

0xccc0,	// (0x0001dac1) bg_popup_window_pane_g8_ParamLimits

0xccc0,	// (0x0001dac1) bg_popup_window_pane_g8

0xcccf,	// (0x0001dad0) bg_popup_window_pane_g9_ParamLimits

0xcccf,	// (0x0001dad0) bg_popup_window_pane_g9

0x4b7c,	// (0x0001597d) bg_popup_window_pane_g10_ParamLimits

0x4b7c,	// (0x0001597d) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x000206dd) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x000206dd) bg_popup_window_pane_g

0x4aa5,	// (0x000158a6) bg_popup_heading_pane_ParamLimits

0x4aa5,	// (0x000158a6) bg_popup_heading_pane

0x0306,	// (0x00011107) tabs_4_passive_pane_cp_srt_ParamLimits

0x0306,	// (0x00011107) tabs_4_passive_pane_cp_srt

0x0318,	// (0x00011119) tabs_4_passive_pane_srt_ParamLimits

0x4ab9,	// (0x000158ba) heading_pane_g2

0x0318,	// (0x00011119) tabs_4_passive_pane_srt

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp3_srt

0x4ac1,	// (0x000158c2) heading_pane_t1_ParamLimits

0x4ac1,	// (0x000158c2) heading_pane_t1

0x4ad8,	// (0x000158d9) heading_pane_t2_ParamLimits

0x4ad8,	// (0x000158d9) heading_pane_t2

0x0001,

0xf8d7,	// (0x000206d8) heading_pane_t_ParamLimits

0xf8d7,	// (0x000206d8) heading_pane_t

0x45d0,	// (0x000153d1) bg_popup_heading_pane_g1

0x467f,	// (0x00015480) bg_popup_heading_pane_g2

0x4689,	// (0x0001548a) bg_popup_heading_pane_g3

0x4693,	// (0x00015494) bg_popup_heading_pane_g4

0x469d,	// (0x0001549e) bg_popup_heading_pane_g5

0x46a7,	// (0x000154a8) bg_popup_heading_pane_g6

0x46af,	// (0x000154b0) bg_popup_heading_pane_g7

0x46b7,	// (0x000154b8) bg_popup_heading_pane_g8

0x46c1,	// (0x000154c2) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00020694) bg_popup_heading_pane_g

0x3d2f,	// (0x00014b30) bg_popup_sub_pane_g1

0x3d3f,	// (0x00014b40) bg_popup_sub_pane_g2

0x3d37,	// (0x00014b38) bg_popup_sub_pane_g3

0x3d4f,	// (0x00014b50) bg_popup_sub_pane_g4

0x3d47,	// (0x00014b48) bg_popup_sub_pane_g5

0x3d57,	// (0x00014b58) bg_popup_sub_pane_g6

0x3d5f,	// (0x00014b60) bg_popup_sub_pane_g7

0x3d6f,	// (0x00014b70) bg_popup_sub_pane_g8

0x3d67,	// (0x00014b68) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0002066e) bg_popup_sub_pane_g

0x143d,	// (0x0001223e) bg_popup_window_pane_cp5_ParamLimits

0x143d,	// (0x0001223e) bg_popup_window_pane_cp5

0x1459,	// (0x0001225a) popup_note_window_g1_ParamLimits

0x1459,	// (0x0001225a) popup_note_window_g1

0x1465,	// (0x00012266) popup_note_window_t1_ParamLimits

0x1465,	// (0x00012266) popup_note_window_t1

0x147b,	// (0x0001227c) popup_note_window_t2_ParamLimits

0x147b,	// (0x0001227c) popup_note_window_t2

0x1491,	// (0x00012292) popup_note_window_t3_ParamLimits

0x1491,	// (0x00012292) popup_note_window_t3

0x14a7,	// (0x000122a8) popup_note_window_t4_ParamLimits

0x14a7,	// (0x000122a8) popup_note_window_t4

0x14cf,	// (0x000122d0) popup_note_window_t5_ParamLimits

0x14cf,	// (0x000122d0) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002039c) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002039c) popup_note_window_t

0x14f3,	// (0x000122f4) bg_popup_window_pane_cp6_ParamLimits

0x14f3,	// (0x000122f4) bg_popup_window_pane_cp6

0x454c,	// (0x0001534d) popup_note_image_window_g1_ParamLimits

0x454c,	// (0x0001534d) popup_note_image_window_g1

0x4558,	// (0x00015359) popup_note_image_window_g2_ParamLimits

0x4558,	// (0x00015359) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00020662) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00020662) popup_note_image_window_g

0x4571,	// (0x00015372) popup_note_image_window_t1_ParamLimits

0x4571,	// (0x00015372) popup_note_image_window_t1

0x458a,	// (0x0001538b) popup_note_image_window_t2_ParamLimits

0x458a,	// (0x0001538b) popup_note_image_window_t2

0x45a3,	// (0x000153a4) popup_note_image_window_t3_ParamLimits

0x45a3,	// (0x000153a4) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00020667) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00020667) popup_note_image_window_t

0x440c,	// (0x0001520d) bg_popup_window_pane_cp7_ParamLimits

0x440c,	// (0x0001520d) bg_popup_window_pane_cp7

0x443c,	// (0x0001523d) popup_note_wait_window_g1_ParamLimits

0x443c,	// (0x0001523d) popup_note_wait_window_g1

0x4448,	// (0x00015249) popup_note_wait_window_g2_ParamLimits

0x4448,	// (0x00015249) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00020650) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00020650) popup_note_wait_window_g

0x4460,	// (0x00015261) popup_note_wait_window_t1_ParamLimits

0x4460,	// (0x00015261) popup_note_wait_window_t1

0x4487,	// (0x00015288) popup_note_wait_window_t2_ParamLimits

0x4487,	// (0x00015288) popup_note_wait_window_t2

0x44a5,	// (0x000152a6) popup_note_wait_window_t3_ParamLimits

0x44a5,	// (0x000152a6) popup_note_wait_window_t3

0x44b8,	// (0x000152b9) popup_note_wait_window_t4_ParamLimits

0x44b8,	// (0x000152b9) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00020657) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00020657) popup_note_wait_window_t

0x44dd,	// (0x000152de) wait_bar_pane_ParamLimits

0x44dd,	// (0x000152de) wait_bar_pane

0xe87a,	// (0x0001f67b) wait_anim_pane

0xe87a,	// (0x0001f67b) wait_border_pane

0xe870,	// (0x0001f671) wait_anim_pane_g1

0xe870,	// (0x0001f671) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0002051b) wait_anim_pane_g

0x43b0,	// (0x000151b1) wait_border_pane_g1

0x43bb,	// (0x000151bc) wait_border_pane_g2

0x43c4,	// (0x000151c5) wait_border_pane_g3

0x0002,

0xf848,	// (0x00020649) wait_border_pane_g

0x421a,	// (0x0001501b) bg_popup_window_pane_cp16_ParamLimits

0x421a,	// (0x0001501b) bg_popup_window_pane_cp16

0x431a,	// (0x0001511b) indicator_popup_pane_cp4_ParamLimits

0x431a,	// (0x0001511b) indicator_popup_pane_cp4

0x432e,	// (0x0001512f) popup_query_data_window_t1_ParamLimits

0x432e,	// (0x0001512f) popup_query_data_window_t1

0x4340,	// (0x00015141) popup_query_data_window_t2_ParamLimits

0x4340,	// (0x00015141) popup_query_data_window_t2

0x4359,	// (0x0001515a) popup_query_data_window_t3_ParamLimits

0x4359,	// (0x0001515a) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00020642) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00020642) popup_query_data_window_t

0x4373,	// (0x00015174) query_popup_data_pane_ParamLimits

0x4373,	// (0x00015174) query_popup_data_pane

0x4387,	// (0x00015188) query_popup_data_pane_cp1_ParamLimits

0x4387,	// (0x00015188) query_popup_data_pane_cp1

0x421a,	// (0x0001501b) bg_popup_window_pane_cp10_ParamLimits

0x421a,	// (0x0001501b) bg_popup_window_pane_cp10

0x424c,	// (0x0001504d) indicator_popup_pane_ParamLimits

0x424c,	// (0x0001504d) indicator_popup_pane

0x426e,	// (0x0001506f) popup_query_code_window_t1_ParamLimits

0x426e,	// (0x0001506f) popup_query_code_window_t1

0x4288,	// (0x00015089) popup_query_code_window_t2_ParamLimits

0x4288,	// (0x00015089) popup_query_code_window_t2

0x42d1,	// (0x000150d2) popup_query_code_window_t3_ParamLimits

0x42d1,	// (0x000150d2) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0002063b) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0002063b) popup_query_code_window_t

0x4300,	// (0x00015101) query_popup_pane_ParamLimits

0x4300,	// (0x00015101) query_popup_pane

0x14f3,	// (0x000122f4) bg_popup_window_pane_cp15_ParamLimits

0x14f3,	// (0x000122f4) bg_popup_window_pane_cp15

0x1513,	// (0x00012314) indicator_popup_pane_cp1_ParamLimits

0x1513,	// (0x00012314) indicator_popup_pane_cp1

0x1526,	// (0x00012327) indicator_popup_pane_cp2_ParamLimits

0x1526,	// (0x00012327) indicator_popup_pane_cp2

0x1541,	// (0x00012342) popup_query_data_code_window_g1_ParamLimits

0x1541,	// (0x00012342) popup_query_data_code_window_g1

0x1554,	// (0x00012355) popup_query_data_code_window_t1_ParamLimits

0x1554,	// (0x00012355) popup_query_data_code_window_t1

0x1566,	// (0x00012367) popup_query_data_code_window_t2_ParamLimits

0x1566,	// (0x00012367) popup_query_data_code_window_t2

0x1578,	// (0x00012379) popup_query_data_code_window_t3_ParamLimits

0x1578,	// (0x00012379) popup_query_data_code_window_t3

0x158e,	// (0x0001238f) popup_query_data_code_window_t4_ParamLimits

0x158e,	// (0x0001238f) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000203a7) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000203a7) popup_query_data_code_window_t

0xf519,	// (0x0002031a) list_single_midp_graphic_pane_g3

0x15a8,	// (0x000123a9) query_popup_data_pane_cp2_ParamLimits

0x15bb,	// (0x000123bc) query_popup_pane_cp2_ParamLimits

0x15bb,	// (0x000123bc) query_popup_pane_cp2

0xe87a,	// (0x0001f67b) bg_popup_window_pane_cp11

0x4212,	// (0x00015013) heading_pane_cp5

0x16ab,	// (0x000124ac) listscroll_popup_info_pane

0xe87a,	// (0x0001f67b) input_focus_pane_cp3

0x15d6,	// (0x000123d7) query_popup_pane_t1

0x15e4,	// (0x000123e5) list_popup_info_pane_ParamLimits

0x15e4,	// (0x000123e5) list_popup_info_pane

0x15f3,	// (0x000123f4) listscroll_popup_info_pane_g1

0x15fb,	// (0x000123fc) scroll_pane_cp7

0x1605,	// (0x00012406) popup_info_list_pane_t1_ParamLimits

0x1605,	// (0x00012406) popup_info_list_pane_t1

0x161f,	// (0x00012420) popup_info_list_pane_t2_ParamLimits

0x161f,	// (0x00012420) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000203b0) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000203b0) popup_info_list_pane_t

0xe87a,	// (0x0001f67b) bg_popup_window_pane_cp12

0x5688,	// (0x00016489) find_popup_pane

0x11a7,	// (0x00011fa8) bg_popup_window_pane_cp3

0x1639,	// (0x0001243a) heading_pane_cp3

0x1645,	// (0x00012446) listscroll_popup_graphic_pane

0xe87a,	// (0x0001f67b) bg_popup_window_pane_cp4

0xb56a,	// (0x0001c36b) heading_pane_cp4

0x16ab,	// (0x000124ac) listscroll_popup_colour_pane

0xb574,	// (0x0001c375) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb574,	// (0x0001c375) cell_large_graphic_colour_none_popup_pane

0xb588,	// (0x0001c389) grid_large_graphic_colour_popup_pane_ParamLimits

0xb588,	// (0x0001c389) grid_large_graphic_colour_popup_pane

0xb5b4,	// (0x0001c3b5) listscroll_popup_colour_pane_g1_ParamLimits

0xb5b4,	// (0x0001c3b5) listscroll_popup_colour_pane_g1

0xb5cb,	// (0x0001c3cc) listscroll_popup_colour_pane_g2_ParamLimits

0xb5cb,	// (0x0001c3cc) listscroll_popup_colour_pane_g2

0xb5e2,	// (0x0001c3e3) listscroll_popup_colour_pane_g3_ParamLimits

0xb5e2,	// (0x0001c3e3) listscroll_popup_colour_pane_g3

0xb5f2,	// (0x0001c3f3) listscroll_popup_colour_pane_g4_ParamLimits

0xb5f2,	// (0x0001c3f3) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000203b5) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000203b5) listscroll_popup_colour_pane_g

0x1745,	// (0x00012546) scroll_pane_cp6_ParamLimits

0x1745,	// (0x00012546) scroll_pane_cp6

0xb606,	// (0x0001c407) cell_large_graphic_colour_popup_pane_ParamLimits

0xb606,	// (0x0001c407) cell_large_graphic_colour_popup_pane

0x177c,	// (0x0001257d) cell_large_graphic_colour_none_popup_pane_t1

0xe87a,	// (0x0001f67b) grid_highlight_pane_cp5

0x178b,	// (0x0001258c) cell_large_graphic_colour_popup_pane_g1

0x1793,	// (0x00012594) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000203be) cell_large_graphic_colour_popup_pane_g

0x179b,	// (0x0001259c) cell_large_graphic_colour_popup_pane_g2_copy1

0x17a4,	// (0x000125a5) grid_highlight_pane_cp4

0x17ac,	// (0x000125ad) bg_popup_window_pane_cp8_ParamLimits

0x17ac,	// (0x000125ad) bg_popup_window_pane_cp8

0x17c7,	// (0x000125c8) popup_snote_single_text_window_g1_ParamLimits

0x17c7,	// (0x000125c8) popup_snote_single_text_window_g1

0x17d9,	// (0x000125da) popup_snote_single_text_window_t1_ParamLimits

0x17d9,	// (0x000125da) popup_snote_single_text_window_t1

0x17ec,	// (0x000125ed) popup_snote_single_text_window_t2_ParamLimits

0x17ec,	// (0x000125ed) popup_snote_single_text_window_t2

0x17ff,	// (0x00012600) popup_snote_single_text_window_t3_ParamLimits

0x17ff,	// (0x00012600) popup_snote_single_text_window_t3

0x1838,	// (0x00012639) popup_snote_single_text_window_t4_ParamLimits

0x1838,	// (0x00012639) popup_snote_single_text_window_t4

0x186c,	// (0x0001266d) popup_snote_single_text_window_t5_ParamLimits

0x186c,	// (0x0001266d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000203c3) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000203c3) popup_snote_single_text_window_t

0x189b,	// (0x0001269c) bg_popup_window_pane_cp9_ParamLimits

0x189b,	// (0x0001269c) bg_popup_window_pane_cp9

0x17c7,	// (0x000125c8) popup_snote_single_graphic_window_g1_ParamLimits

0x17c7,	// (0x000125c8) popup_snote_single_graphic_window_g1

0x18a9,	// (0x000126aa) popup_snote_single_graphic_window_g2_ParamLimits

0x18a9,	// (0x000126aa) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000203ce) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000203ce) popup_snote_single_graphic_window_g

0x18b5,	// (0x000126b6) popup_snote_single_graphic_window_t1_ParamLimits

0x18b5,	// (0x000126b6) popup_snote_single_graphic_window_t1

0x18c8,	// (0x000126c9) popup_snote_single_graphic_window_t2_ParamLimits

0x18c8,	// (0x000126c9) popup_snote_single_graphic_window_t2

0x18db,	// (0x000126dc) popup_snote_single_graphic_window_t3_ParamLimits

0x18db,	// (0x000126dc) popup_snote_single_graphic_window_t3

0x1914,	// (0x00012715) popup_snote_single_graphic_window_t4_ParamLimits

0x1914,	// (0x00012715) popup_snote_single_graphic_window_t4

0x1948,	// (0x00012749) popup_snote_single_graphic_window_t5_ParamLimits

0x1948,	// (0x00012749) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000203d3) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000203d3) popup_snote_single_graphic_window_t

0x55c6,	// (0x000163c7) grid_graphic_popup_pane_ParamLimits

0x55c6,	// (0x000163c7) grid_graphic_popup_pane

0x55f4,	// (0x000163f5) listscroll_popup_graphic_pane_g1_ParamLimits

0x55f4,	// (0x000163f5) listscroll_popup_graphic_pane_g1

0xd0bd,	// (0x0001debe) listscroll_popup_graphic_pane_g2_ParamLimits

0xd0bd,	// (0x0001debe) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x000207b8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x000207b8) listscroll_popup_graphic_pane_g

0x561c,	// (0x0001641d) scroll_pane_cp5

0xd07d,	// (0x0001de7e) cell_graphic_popup_pane_ParamLimits

0xd07d,	// (0x0001de7e) cell_graphic_popup_pane

0x554f,	// (0x00016350) cell_graphic_popup_pane_g1

0x5557,	// (0x00016358) cell_graphic_popup_pane_g2

0x179b,	// (0x0001259c) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x000207b1) cell_graphic_popup_pane_g

0x5560,	// (0x00016361) cell_graphic_popup_pane_t2

0x17a4,	// (0x000125a5) grid_highlight_pane_cp3

0x1989,	// (0x0001278a) list_gen_pane_ParamLimits

0x1989,	// (0x0001278a) list_gen_pane

0x19bb,	// (0x000127bc) scroll_pane

0xd038,	// (0x0001de39) bg_list_pane_g1_ParamLimits

0xd038,	// (0x0001de39) bg_list_pane_g1

0x54cc,	// (0x000162cd) bg_list_pane_g2_ParamLimits

0x54cc,	// (0x000162cd) bg_list_pane_g2

0x54df,	// (0x000162e0) bg_list_pane_g3_ParamLimits

0x54df,	// (0x000162e0) bg_list_pane_g3

0x54f1,	// (0x000162f2) bg_list_pane_g4_ParamLimits

0x54f1,	// (0x000162f2) bg_list_pane_g4

0xd053,	// (0x0001de54) bg_list_pane_g5_ParamLimits

0xd053,	// (0x0001de54) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x000207a6) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x000207a6) bg_list_pane_g

0xcfd5,	// (0x0001ddd6) list_double2_graphic_large_graphic_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double2_graphic_large_graphic_pane

0xcfd5,	// (0x0001ddd6) list_double2_graphic_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double2_graphic_pane

0xcfd5,	// (0x0001ddd6) list_double2_large_graphic_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double2_large_graphic_pane

0xcfd5,	// (0x0001ddd6) list_double2_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double2_pane

0xcfd5,	// (0x0001ddd6) list_double_graphic_heading_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_graphic_heading_pane

0xcfd5,	// (0x0001ddd6) list_double_graphic_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_graphic_pane

0xcfd5,	// (0x0001ddd6) list_double_heading_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_heading_pane

0xcfd5,	// (0x0001ddd6) list_double_large_graphic_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_large_graphic_pane

0xcfd5,	// (0x0001ddd6) list_double_number_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_number_pane

0xcfd5,	// (0x0001ddd6) list_double_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_pane

0xcfd5,	// (0x0001ddd6) list_double_time_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_double_time_pane

0xcfd5,	// (0x0001ddd6) list_setting_number_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_setting_number_pane

0xcfd5,	// (0x0001ddd6) list_setting_pane_ParamLimits

0xcfd5,	// (0x0001ddd6) list_setting_pane

0xcfe9,	// (0x0001ddea) list_single_2graphic_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_2graphic_pane

0xcfe9,	// (0x0001ddea) list_single_graphic_heading_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_graphic_heading_pane

0xcfe9,	// (0x0001ddea) list_single_graphic_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_graphic_pane

0xcfe9,	// (0x0001ddea) list_single_heading_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_heading_pane

0xcfe9,	// (0x0001ddea) list_single_large_graphic_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_large_graphic_pane

0xcfe9,	// (0x0001ddea) list_single_number_heading_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_number_heading_pane

0xcfe9,	// (0x0001ddea) list_single_number_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_number_pane

0xcfe9,	// (0x0001ddea) list_single_pane_ParamLimits

0xcfe9,	// (0x0001ddea) list_single_pane

0xe87a,	// (0x0001f67b) list_highlight_pane_cp1

0x2da0,	// (0x00013ba1) list_single_pane_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_pane_g1

0x3cb1,	// (0x00014ab2) list_single_pane_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_pane_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_pane_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_pane_g

0x5c5f,	// (0x00016a60) list_single_pane_t1_ParamLimits

0x5c5f,	// (0x00016a60) list_single_pane_t1

0x2da0,	// (0x00013ba1) list_single_number_pane_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_number_pane_g1

0x3cb1,	// (0x00014ab2) list_single_number_pane_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_number_pane_g

0x3cbd,	// (0x00014abe) list_single_number_pane_t1_ParamLimits

0x3cbd,	// (0x00014abe) list_single_number_pane_t1

0xcdf3,	// (0x0001dbf4) list_single_number_pane_t2_ParamLimits

0xcdf3,	// (0x0001dbf4) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00020767) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00020767) list_single_number_pane_t

0x7106,	// (0x00017f07) list_single_graphic_pane_g1_ParamLimits

0x7106,	// (0x00017f07) list_single_graphic_pane_g1

0x2da0,	// (0x00013ba1) list_single_graphic_pane_g2_ParamLimits

0x2da0,	// (0x00013ba1) list_single_graphic_pane_g2

0x3cb1,	// (0x00014ab2) list_single_graphic_pane_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000203de) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000203de) list_single_graphic_pane_g

0xb631,	// (0x0001c432) list_single_graphic_pane_t1_ParamLimits

0xb631,	// (0x0001c432) list_single_graphic_pane_t1

0x2da0,	// (0x00013ba1) list_single_heading_pane_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_heading_pane_g1

0x3cb1,	// (0x00014ab2) list_single_heading_pane_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_heading_pane_g

0x5c81,	// (0x00016a82) list_single_heading_pane_t1_ParamLimits

0x5c81,	// (0x00016a82) list_single_heading_pane_t1

0xb647,	// (0x0001c448) list_single_heading_pane_t2_ParamLimits

0xb647,	// (0x0001c448) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000203ea) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000203ea) list_single_heading_pane_t

0x2da0,	// (0x00013ba1) list_single_number_heading_pane_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_number_heading_pane_g1

0x3cb1,	// (0x00014ab2) list_single_number_heading_pane_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_number_heading_pane_g

0x5c81,	// (0x00016a82) list_single_number_heading_pane_t1_ParamLimits

0x5c81,	// (0x00016a82) list_single_number_heading_pane_t1

0xb659,	// (0x0001c45a) list_single_number_heading_pane_t2_ParamLimits

0xb659,	// (0x0001c45a) list_single_number_heading_pane_t2

0x5c39,	// (0x00016a3a) list_single_number_heading_pane_t3_ParamLimits

0x5c39,	// (0x00016a3a) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000203ef) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000203ef) list_single_number_heading_pane_t

0x3ca5,	// (0x00014aa6) list_single_graphic_heading_pane_g1_ParamLimits

0x3ca5,	// (0x00014aa6) list_single_graphic_heading_pane_g1

0xb66b,	// (0x0001c46c) list_single_graphic_heading_pane_g4_ParamLimits

0xb66b,	// (0x0001c46c) list_single_graphic_heading_pane_g4

0x3cb1,	// (0x00014ab2) list_single_graphic_heading_pane_g5_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x000203f6) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x000203f6) list_single_graphic_heading_pane_g

0x5c81,	// (0x00016a82) list_single_graphic_heading_pane_t1_ParamLimits

0x5c81,	// (0x00016a82) list_single_graphic_heading_pane_t1

0xb67c,	// (0x0001c47d) list_single_graphic_heading_pane_t2_ParamLimits

0xb67c,	// (0x0001c47d) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x000203fd) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x000203fd) list_single_graphic_heading_pane_t

0x5c75,	// (0x00016a76) list_single_large_graphic_pane_g1_ParamLimits

0x5c75,	// (0x00016a76) list_single_large_graphic_pane_g1

0x2da0,	// (0x00013ba1) list_single_large_graphic_pane_g2_ParamLimits

0x2da0,	// (0x00013ba1) list_single_large_graphic_pane_g2

0x3cb1,	// (0x00014ab2) list_single_large_graphic_pane_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00020402) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00020402) list_single_large_graphic_pane_g

0x43bb,	// (0x000151bc) wait_border_pane_g2_copy1

0xb68e,	// (0x0001c48f) list_single_large_graphic_pane_g4_cp2

0x5c81,	// (0x00016a82) list_single_large_graphic_pane_t1_ParamLimits

0x5c81,	// (0x00016a82) list_single_large_graphic_pane_t1

0xb696,	// (0x0001c497) list_double_pane_g1_ParamLimits

0xb696,	// (0x0001c497) list_double_pane_g1

0xb6a2,	// (0x0001c4a3) list_double_pane_g2_ParamLimits

0xb6a2,	// (0x0001c4a3) list_double_pane_g2

0x0001,

0xf608,	// (0x00020409) list_double_pane_g_ParamLimits

0xf608,	// (0x00020409) list_double_pane_g

0xb6ae,	// (0x0001c4af) list_double_pane_t1_ParamLimits

0xb6ae,	// (0x0001c4af) list_double_pane_t1

0xb6c4,	// (0x0001c4c5) list_double_pane_t2_ParamLimits

0xb6c4,	// (0x0001c4c5) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002040e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002040e) list_double_pane_t

0xb6d6,	// (0x0001c4d7) list_double2_pane_g1_ParamLimits

0xb6d6,	// (0x0001c4d7) list_double2_pane_g1

0xb6e7,	// (0x0001c4e8) list_double2_pane_g2_ParamLimits

0xb6e7,	// (0x0001c4e8) list_double2_pane_g2

0x0001,

0xf612,	// (0x00020413) list_double2_pane_g_ParamLimits

0xf612,	// (0x00020413) list_double2_pane_g

0xb6f3,	// (0x0001c4f4) list_double2_pane_t1_ParamLimits

0xb6f3,	// (0x0001c4f4) list_double2_pane_t1

0xb709,	// (0x0001c50a) list_double2_pane_t2_ParamLimits

0xb709,	// (0x0001c50a) list_double2_pane_t2

0x0001,

0xf617,	// (0x00020418) list_double2_pane_t_ParamLimits

0xf617,	// (0x00020418) list_double2_pane_t

0xb696,	// (0x0001c497) list_double_number_pane_g1_ParamLimits

0xb696,	// (0x0001c497) list_double_number_pane_g1

0xb6a2,	// (0x0001c4a3) list_double_number_pane_g2_ParamLimits

0xb6a2,	// (0x0001c4a3) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00020409) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00020409) list_double_number_pane_g

0xb71b,	// (0x0001c51c) list_double_number_pane_t1_ParamLimits

0xb71b,	// (0x0001c51c) list_double_number_pane_t1

0xb72d,	// (0x0001c52e) list_double_number_pane_t2_ParamLimits

0xb72d,	// (0x0001c52e) list_double_number_pane_t2

0xb743,	// (0x0001c544) list_double_number_pane_t3_ParamLimits

0xb743,	// (0x0001c544) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002041d) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002041d) list_double_number_pane_t

0xb755,	// (0x0001c556) list_double_graphic_pane_g1_ParamLimits

0xb755,	// (0x0001c556) list_double_graphic_pane_g1

0xb761,	// (0x0001c562) list_double_graphic_pane_g2_ParamLimits

0xb761,	// (0x0001c562) list_double_graphic_pane_g2

0xb770,	// (0x0001c571) list_double_graphic_pane_g3_ParamLimits

0xb770,	// (0x0001c571) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00020424) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00020424) list_double_graphic_pane_g

0xb788,	// (0x0001c589) list_double_graphic_pane_t1_ParamLimits

0xb788,	// (0x0001c589) list_double_graphic_pane_t1

0xb79e,	// (0x0001c59f) list_double_graphic_pane_t2_ParamLimits

0xb79e,	// (0x0001c59f) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002042d) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002042d) list_double_graphic_pane_t

0x4a37,	// (0x00015838) list_double2_graphic_pane_g1_ParamLimits

0x4a37,	// (0x00015838) list_double2_graphic_pane_g1

0x2c4d,	// (0x00013a4e) list_double2_graphic_pane_g2_ParamLimits

0x2c4d,	// (0x00013a4e) list_double2_graphic_pane_g2

0xb6e7,	// (0x0001c4e8) list_double2_graphic_pane_g3_ParamLimits

0xb6e7,	// (0x0001c4e8) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00020432) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00020432) list_double2_graphic_pane_g

0xb7b0,	// (0x0001c5b1) list_double2_graphic_pane_t1_ParamLimits

0xb7b0,	// (0x0001c5b1) list_double2_graphic_pane_t1

0xb7c6,	// (0x0001c5c7) list_double2_graphic_pane_t2_ParamLimits

0xb7c6,	// (0x0001c5c7) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00020439) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00020439) list_double2_graphic_pane_t

0xb7d8,	// (0x0001c5d9) list_double_large_graphic_pane_g1_ParamLimits

0xb7d8,	// (0x0001c5d9) list_double_large_graphic_pane_g1

0xb803,	// (0x0001c604) list_double_large_graphic_pane_g2_ParamLimits

0xb803,	// (0x0001c604) list_double_large_graphic_pane_g2

0xb6a2,	// (0x0001c4a3) list_double_large_graphic_pane_g3_ParamLimits

0xb6a2,	// (0x0001c4a3) list_double_large_graphic_pane_g3

0xb814,	// (0x0001c615) list_double_large_graphic_pane_g4_ParamLimits

0xb814,	// (0x0001c615) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002043e) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002043e) list_double_large_graphic_pane_g

0xb827,	// (0x0001c628) list_double_large_graphic_pane_t1_ParamLimits

0xb827,	// (0x0001c628) list_double_large_graphic_pane_t1

0xb840,	// (0x0001c641) list_double_large_graphic_pane_t2_ParamLimits

0xb840,	// (0x0001c641) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00020449) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00020449) list_double_large_graphic_pane_t

0xb852,	// (0x0001c653) list_double2_large_graphic_pane_g1_ParamLimits

0xb852,	// (0x0001c653) list_double2_large_graphic_pane_g1

0xb6d6,	// (0x0001c4d7) list_double2_large_graphic_pane_g2_ParamLimits

0xb6d6,	// (0x0001c4d7) list_double2_large_graphic_pane_g2

0xb6e7,	// (0x0001c4e8) list_double2_large_graphic_pane_g3_ParamLimits

0xb6e7,	// (0x0001c4e8) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002044e) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002044e) list_double2_large_graphic_pane_g

0xb85e,	// (0x0001c65f) list_double2_large_graphic_pane_t1_ParamLimits

0xb85e,	// (0x0001c65f) list_double2_large_graphic_pane_t1

0xb874,	// (0x0001c675) list_double2_large_graphic_pane_t2_ParamLimits

0xb874,	// (0x0001c675) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00020455) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00020455) list_double2_large_graphic_pane_t

0xb886,	// (0x0001c687) list_double_heading_pane_g1_ParamLimits

0xb886,	// (0x0001c687) list_double_heading_pane_g1

0xb897,	// (0x0001c698) list_double_heading_pane_g2_ParamLimits

0xb897,	// (0x0001c698) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002045a) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002045a) list_double_heading_pane_g

0xb8a3,	// (0x0001c6a4) list_double_heading_pane_t1_ParamLimits

0xb8a3,	// (0x0001c6a4) list_double_heading_pane_t1

0xb8b9,	// (0x0001c6ba) list_double_heading_pane_t2_ParamLimits

0xb8b9,	// (0x0001c6ba) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002045f) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002045f) list_double_heading_pane_t

0x1c00,	// (0x00012a01) list_double_graphic_heading_pane_g1_ParamLimits

0x1c00,	// (0x00012a01) list_double_graphic_heading_pane_g1

0xb886,	// (0x0001c687) list_double_graphic_heading_pane_g2_ParamLimits

0xb886,	// (0x0001c687) list_double_graphic_heading_pane_g2

0xb897,	// (0x0001c698) list_double_graphic_heading_pane_g3_ParamLimits

0xb897,	// (0x0001c698) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00020464) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00020464) list_double_graphic_heading_pane_g

0xb8cb,	// (0x0001c6cc) list_double_graphic_heading_pane_t1_ParamLimits

0xb8cb,	// (0x0001c6cc) list_double_graphic_heading_pane_t1

0xb8e1,	// (0x0001c6e2) list_double_graphic_heading_pane_t2_ParamLimits

0xb8e1,	// (0x0001c6e2) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002046b) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002046b) list_double_graphic_heading_pane_t

0xb803,	// (0x0001c604) list_double_time_pane_g1_ParamLimits

0xb803,	// (0x0001c604) list_double_time_pane_g1

0xb6a2,	// (0x0001c4a3) list_double_time_pane_g2_ParamLimits

0xb6a2,	// (0x0001c4a3) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00020470) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00020470) list_double_time_pane_g

0xb8f3,	// (0x0001c6f4) list_double_time_pane_t1_ParamLimits

0xb8f3,	// (0x0001c6f4) list_double_time_pane_t1

0xb909,	// (0x0001c70a) list_double_time_pane_t2_ParamLimits

0xb909,	// (0x0001c70a) list_double_time_pane_t2

0xb91b,	// (0x0001c71c) list_double_time_pane_t3_ParamLimits

0xb91b,	// (0x0001c71c) list_double_time_pane_t3

0xb92d,	// (0x0001c72e) list_double_time_pane_t4_ParamLimits

0xb92d,	// (0x0001c72e) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00020475) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00020475) list_double_time_pane_t

0x2c4d,	// (0x00013a4e) list_setting_pane_g1_ParamLimits

0x2c4d,	// (0x00013a4e) list_setting_pane_g1

0xb6e7,	// (0x0001c4e8) list_setting_pane_g2_ParamLimits

0xb6e7,	// (0x0001c4e8) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002047e) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002047e) list_setting_pane_g

0xb93f,	// (0x0001c740) list_setting_pane_t1_ParamLimits

0xb93f,	// (0x0001c740) list_setting_pane_t1

0xb956,	// (0x0001c757) list_setting_pane_t2_ParamLimits

0xb956,	// (0x0001c757) list_setting_pane_t2

0x0002,

0xf682,	// (0x00020483) list_setting_pane_t_ParamLimits

0xf682,	// (0x00020483) list_setting_pane_t

0xb995,	// (0x0001c796) set_value_pane_cp_ParamLimits

0xb995,	// (0x0001c796) set_value_pane_cp

0x2c4d,	// (0x00013a4e) list_setting_number_pane_g1_ParamLimits

0x2c4d,	// (0x00013a4e) list_setting_number_pane_g1

0xb6e7,	// (0x0001c4e8) list_setting_number_pane_g2_ParamLimits

0xb6e7,	// (0x0001c4e8) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0002047e) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0002047e) list_setting_number_pane_g

0xb9a3,	// (0x0001c7a4) list_setting_number_pane_t1_ParamLimits

0xb9a3,	// (0x0001c7a4) list_setting_number_pane_t1

0xb9b7,	// (0x0001c7b8) list_setting_number_pane_t2_ParamLimits

0xb9b7,	// (0x0001c7b8) list_setting_number_pane_t2

0xb9ce,	// (0x0001c7cf) list_setting_number_pane_t3_ParamLimits

0xb9ce,	// (0x0001c7cf) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0002048a) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0002048a) list_setting_number_pane_t

0xb995,	// (0x0001c796) set_value_pane_ParamLimits

0xb995,	// (0x0001c796) set_value_pane

0x1e9a,	// (0x00012c9b) bg_set_opt_pane_ParamLimits

0x1e9a,	// (0x00012c9b) bg_set_opt_pane

0x1ebb,	// (0x00012cbc) set_value_pane_t1

0x1ec9,	// (0x00012cca) slider_set_pane_cp3

0x1ed2,	// (0x00012cd3) volume_small_pane_cp

0x1edb,	// (0x00012cdc) list_form_gen_pane

0x1ee4,	// (0x00012ce5) scroll_pane_cp8

0xba11,	// (0x0001c812) form_field_data_pane_ParamLimits

0xba11,	// (0x0001c812) form_field_data_pane

0xba2c,	// (0x0001c82d) form_field_data_wide_pane_ParamLimits

0xba2c,	// (0x0001c82d) form_field_data_wide_pane

0xba50,	// (0x0001c851) form_field_popup_pane_ParamLimits

0xba50,	// (0x0001c851) form_field_popup_pane

0x1f6c,	// (0x00012d6d) form_field_popup_wide_pane_ParamLimits

0x1f6c,	// (0x00012d6d) form_field_popup_wide_pane

0x1f8d,	// (0x00012d8e) form_field_slider_pane_ParamLimits

0x1f8d,	// (0x00012d8e) form_field_slider_pane

0x1fa0,	// (0x00012da1) form_field_slider_wide_pane_ParamLimits

0x1fa0,	// (0x00012da1) form_field_slider_wide_pane

0x1fb3,	// (0x00012db4) data_form_pane

0xba7c,	// (0x0001c87d) form_field_data_pane_t1

0x1fe3,	// (0x00012de4) input_focus_pane

0x1ff1,	// (0x00012df2) data_form_wide_pane

0x2029,	// (0x00012e2a) form_field_data_wide_pane_t1

0x17b9,	// (0x000125ba) input_focus_pane_cp6

0xba96,	// (0x0001c897) form_field_popup_pane_t1

0x1fe3,	// (0x00012de4) input_focus_pane_cp7

0x2065,	// (0x00012e66) list_form_pane

0x2079,	// (0x00012e7a) form_field_popup_wide_pane_t1

0x1fe3,	// (0x00012de4) input_focus_pane_cp8

0x208e,	// (0x00012e8f) list_form_wide_pane

0xbab8,	// (0x0001c8b9) form_field_slider_pane_t1_ParamLimits

0xbab8,	// (0x0001c8b9) form_field_slider_pane_t1

0xbad0,	// (0x0001c8d1) form_field_slider_pane_t2_ParamLimits

0xbad0,	// (0x0001c8d1) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0002049a) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0002049a) form_field_slider_pane_t

0x143d,	// (0x0001223e) input_focus_pane_cp9_ParamLimits

0x143d,	// (0x0001223e) input_focus_pane_cp9

0xbae5,	// (0x0001c8e6) slider_cont_pane_ParamLimits

0xbae5,	// (0x0001c8e6) slider_cont_pane

0x20df,	// (0x00012ee0) form_field_slider_wide_pane_t1_ParamLimits

0x20df,	// (0x00012ee0) form_field_slider_wide_pane_t1

0x20f1,	// (0x00012ef2) form_field_slider_wide_pane_t2_ParamLimits

0x20f1,	// (0x00012ef2) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0002049f) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0002049f) form_field_slider_wide_pane_t

0x143d,	// (0x0001223e) input_focus_pane_cp10_ParamLimits

0x143d,	// (0x0001223e) input_focus_pane_cp10

0xbaf9,	// (0x0001c8fa) slider_cont_pane_cp1_ParamLimits

0xbaf9,	// (0x0001c8fa) slider_cont_pane_cp1

0xbb0d,	// (0x0001c90e) slider_form_pane_cp

0x211f,	// (0x00012f20) input_focus_pane_g1

0x2127,	// (0x00012f28) input_focus_pane_g2

0x212f,	// (0x00012f30) input_focus_pane_g3

0x2137,	// (0x00012f38) input_focus_pane_g4

0x213f,	// (0x00012f40) input_focus_pane_g5

0x2147,	// (0x00012f48) input_focus_pane_g6

0x214f,	// (0x00012f50) input_focus_pane_g7

0x2157,	// (0x00012f58) input_focus_pane_g8

0x215f,	// (0x00012f60) input_focus_pane_g9

0xe870,	// (0x0001f671) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x000204a4) input_focus_pane_g

0x43c4,	// (0x000151c5) wait_border_pane_g3_copy1

0xbb15,	// (0x0001c916) data_form_pane_t1

0xe870,	// (0x0001f671) wait_anim_pane_g1_copy1

0xcfaa,	// (0x0001ddab) data_form_wide_pane_t1

0x2186,	// (0x00012f87) list_form_graphic_pane_cp_ParamLimits

0x2186,	// (0x00012f87) list_form_graphic_pane_cp

0x5371,	// (0x00016172) slider_form_pane_g1

0x537a,	// (0x0001617b) slider_form_pane_g2

0x0006,

0xf996,	// (0x00020797) slider_form_pane_g

0xbb31,	// (0x0001c932) list_form_graphic_pane_ParamLimits

0xbb31,	// (0x0001c932) list_form_graphic_pane

0x2198,	// (0x00012f99) list_form_graphic_pane_g1

0x21a0,	// (0x00012fa1) list_form_graphic_pane_t1_ParamLimits

0x21a0,	// (0x00012fa1) list_form_graphic_pane_t1

0x11a7,	// (0x00011fa8) list_highlight_pane_cp5_ParamLimits

0x11a7,	// (0x00011fa8) list_highlight_pane_cp5

0xbb42,	// (0x0001c943) find_pane_g1

0x21be,	// (0x00012fbf) input_find_pane

0xbb4b,	// (0x0001c94c) input_find_pane_g1_ParamLimits

0xbb4b,	// (0x0001c94c) input_find_pane_g1

0xbb57,	// (0x0001c958) input_find_pane_t1_ParamLimits

0xbb57,	// (0x0001c958) input_find_pane_t1

0xbb6c,	// (0x0001c96d) input_find_pane_t2_ParamLimits

0xbb6c,	// (0x0001c96d) input_find_pane_t2

0x0001,

0xf6b8,	// (0x000204b9) input_find_pane_t_ParamLimits

0xf6b8,	// (0x000204b9) input_find_pane_t

0x21fd,	// (0x00012ffe) input_focus_pane_cp5_ParamLimits

0x21fd,	// (0x00012ffe) input_focus_pane_cp5

0xbb8d,	// (0x0001c98e) bg_popup_window_pane_cp2_ParamLimits

0xbb8d,	// (0x0001c98e) bg_popup_window_pane_cp2

0xbb9a,	// (0x0001c99b) listscroll_menu_pane_ParamLimits

0xbb9a,	// (0x0001c99b) listscroll_menu_pane

0xbba6,	// (0x0001c9a7) popup_submenu_window_ParamLimits

0xbba6,	// (0x0001c9a7) popup_submenu_window

0x2260,	// (0x00013061) find_popup_pane_g1

0x2268,	// (0x00013069) input_popup_find_pane_cp

0x21fd,	// (0x00012ffe) input_focus_pane_cp4_ParamLimits

0x21fd,	// (0x00012ffe) input_focus_pane_cp4

0x2280,	// (0x00013081) input_popup_find_pane_t1_ParamLimits

0x2280,	// (0x00013081) input_popup_find_pane_t1

0xe87a,	// (0x0001f67b) bg_popup_sub_pane_cp

0x22ae,	// (0x000130af) listscroll_popup_sub_pane

0x22b6,	// (0x000130b7) list_submenu_pane_ParamLimits

0x22b6,	// (0x000130b7) list_submenu_pane

0x22c7,	// (0x000130c8) scroll_pane_cp4

0x22cf,	// (0x000130d0) list_single_popup_submenu_pane_ParamLimits

0x22cf,	// (0x000130d0) list_single_popup_submenu_pane

0x22e4,	// (0x000130e5) list_single_popup_submenu_pane_g1

0x22ec,	// (0x000130ed) list_single_popup_submenu_pane_t1_ParamLimits

0x22ec,	// (0x000130ed) list_single_popup_submenu_pane_t1

0x143d,	// (0x0001223e) bg_active_tab_pane_cp1_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp1

0xbbe4,	// (0x0001c9e5) tabs_2_active_pane_g1

0xbbec,	// (0x0001c9ed) tabs_2_active_pane_t1

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp1_ParamLimits

0x143d,	// (0x0001223e) bg_passive_tab_pane_cp1

0xbbe4,	// (0x0001c9e5) tabs_2_passive_pane_g1

0xbbec,	// (0x0001c9ed) tabs_2_passive_pane_t1

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp4

0xbbfe,	// (0x0001c9ff) tabs_2_long_active_pane_t1

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp4

0xf521,	// (0x00020322) list_single_midp_graphic_pane_g4_ParamLimits

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp5

0xbc11,	// (0x0001ca12) tabs_3_long_active_pane_t1

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp5

0xf521,	// (0x00020322) list_single_midp_graphic_pane_g4

0x11a7,	// (0x00011fa8) bg_popup_window_pane_cp13_ParamLimits

0x11a7,	// (0x00011fa8) bg_popup_window_pane_cp13

0x2363,	// (0x00013164) listscroll_popup_fast_pane_ParamLimits

0x2363,	// (0x00013164) listscroll_popup_fast_pane

0x2372,	// (0x00013173) grid_popup_fast_pane_ParamLimits

0x2372,	// (0x00013173) grid_popup_fast_pane

0x2384,	// (0x00013185) scroll_pane_cp9_ParamLimits

0x2384,	// (0x00013185) scroll_pane_cp9

0x7180,	// (0x00017f81) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7180,	// (0x00017f81) list_single_graphic_hl_pane_t1_cp2

0x23a8,	// (0x000131a9) input_focus_pane_cp20_ParamLimits

0x23a8,	// (0x000131a9) input_focus_pane_cp20

0x23b6,	// (0x000131b7) query_popup_data_pane_t1_ParamLimits

0x23b6,	// (0x000131b7) query_popup_data_pane_t1

0x23c9,	// (0x000131ca) query_popup_data_pane_t2_ParamLimits

0x23c9,	// (0x000131ca) query_popup_data_pane_t2

0x240f,	// (0x00013210) query_popup_data_pane_t3_ParamLimits

0x240f,	// (0x00013210) query_popup_data_pane_t3

0x2450,	// (0x00013251) query_popup_data_pane_t4_ParamLimits

0x2450,	// (0x00013251) query_popup_data_pane_t4

0x248c,	// (0x0001328d) query_popup_data_pane_t5_ParamLimits

0x248c,	// (0x0001328d) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x000204be) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x000204be) query_popup_data_pane_t

0x211f,	// (0x00012f20) bg_set_opt_pane_g1

0x2127,	// (0x00012f28) bg_set_opt_pane_g2

0x212f,	// (0x00012f30) bg_set_opt_pane_g3

0x2137,	// (0x00012f38) bg_set_opt_pane_g4

0x213f,	// (0x00012f40) bg_set_opt_pane_g5

0x2147,	// (0x00012f48) bg_set_opt_pane_g6

0x214f,	// (0x00012f50) bg_set_opt_pane_g7

0x2157,	// (0x00012f58) bg_set_opt_pane_g8

0x215f,	// (0x00012f60) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000204c9) bg_set_opt_pane_g

0xf248,	// (0x00020049) control_top_pane_stacon_ParamLimits

0xf248,	// (0x00020049) control_top_pane_stacon

0xf29b,	// (0x0002009c) signal_pane_stacon_ParamLimits

0xf29b,	// (0x0002009c) signal_pane_stacon

0x2ac4,	// (0x000138c5) stacon_top_pane_g1_ParamLimits

0x2ac4,	// (0x000138c5) stacon_top_pane_g1

0xf2c0,	// (0x000200c1) title_pane_stacon_ParamLimits

0xf2c0,	// (0x000200c1) title_pane_stacon

0xf2ea,	// (0x000200eb) uni_indicator_pane_stacon_ParamLimits

0xf2ea,	// (0x000200eb) uni_indicator_pane_stacon

0xf302,	// (0x00020103) battery_pane_stacon_ParamLimits

0xf302,	// (0x00020103) battery_pane_stacon

0xf346,	// (0x00020147) control_bottom_pane_stacon_ParamLimits

0xf346,	// (0x00020147) control_bottom_pane_stacon

0xf369,	// (0x0002016a) navi_pane_stacon_ParamLimits

0xf369,	// (0x0002016a) navi_pane_stacon

0x2ae6,	// (0x000138e7) stacon_bottom_pane_g1_ParamLimits

0x2ae6,	// (0x000138e7) stacon_bottom_pane_g1

0xefae,	// (0x0001fdaf) aid_levels_signal_lsc_ParamLimits

0xefae,	// (0x0001fdaf) aid_levels_signal_lsc

0xefc5,	// (0x0001fdc6) signal_pane_stacon_g1_ParamLimits

0xefc5,	// (0x0001fdc6) signal_pane_stacon_g1

0xefd9,	// (0x0001fdda) signal_pane_stacon_g2_ParamLimits

0xefd9,	// (0x0001fdda) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000204dc) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000204dc) signal_pane_stacon_g

0xf00e,	// (0x0001fe0f) title_pane_stacon_t1_ParamLimits

0xf00e,	// (0x0001fe0f) title_pane_stacon_t1

0x24d0,	// (0x000132d1) uni_indicator_pane_stacon_g1

0x24da,	// (0x000132db) uni_indicator_pane_stacon_g2

0x24e4,	// (0x000132e5) uni_indicator_pane_stacon_g3

0x24ee,	// (0x000132ef) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000204e8) uni_indicator_pane_stacon_g

0xf033,	// (0x0001fe34) control_top_pane_stacon_g1

0xf03b,	// (0x0001fe3c) control_top_pane_stacon_t1_ParamLimits

0xf03b,	// (0x0001fe3c) control_top_pane_stacon_t1

0xf072,	// (0x0001fe73) aid_levels_battery_lsc_ParamLimits

0xf072,	// (0x0001fe73) aid_levels_battery_lsc

0xf08a,	// (0x0001fe8b) battery_pane_stacon_g1_ParamLimits

0xf08a,	// (0x0001fe8b) battery_pane_stacon_g1

0xf09d,	// (0x0001fe9e) battery_pane_stacon_g2_ParamLimits

0xf09d,	// (0x0001fe9e) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000204f1) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000204f1) battery_pane_stacon_g

0xf0db,	// (0x0001fedc) navi_icon_pane_stacon

0xf0ef,	// (0x0001fef0) navi_navi_pane_stacon

0xf0db,	// (0x0001fedc) navi_text_pane_stacon

0xf033,	// (0x0001fe34) control_bottom_pane_stacon_g1

0xf105,	// (0x0001ff06) control_bottom_pane_stacon_t1_ParamLimits

0xf105,	// (0x0001ff06) control_bottom_pane_stacon_t1

0xbc23,	// (0x0001ca24) grid_app_pane_ParamLimits

0xbc23,	// (0x0001ca24) grid_app_pane

0xbc5b,	// (0x0001ca5c) scroll_pane_cp15_ParamLimits

0xbc5b,	// (0x0001ca5c) scroll_pane_cp15

0xbc78,	// (0x0001ca79) cell_app_pane_ParamLimits

0xbc78,	// (0x0001ca79) cell_app_pane

0xbcb9,	// (0x0001caba) cell_app_pane_g1_ParamLimits

0xbcb9,	// (0x0001caba) cell_app_pane_g1

0x259b,	// (0x0001339c) cell_app_pane_g2_ParamLimits

0x259b,	// (0x0001339c) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000204f6) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000204f6) cell_app_pane_g

0x25a7,	// (0x000133a8) cell_app_pane_t1_ParamLimits

0x25a7,	// (0x000133a8) cell_app_pane_t1

0x25b9,	// (0x000133ba) grid_highlight_pane_ParamLimits

0x25b9,	// (0x000133ba) grid_highlight_pane

0x211f,	// (0x00012f20) cell_highlight_pane_g1

0x2127,	// (0x00012f28) cell_highlight_pane_g2

0x212f,	// (0x00012f30) cell_highlight_pane_g3

0x2137,	// (0x00012f38) cell_highlight_pane_g4

0x213f,	// (0x00012f40) cell_highlight_pane_g5

0x2147,	// (0x00012f48) cell_highlight_pane_g6

0x214f,	// (0x00012f50) cell_highlight_pane_g7

0x2157,	// (0x00012f58) cell_highlight_pane_g8

0x215f,	// (0x00012f60) cell_highlight_pane_g9

0xe870,	// (0x0001f671) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x000204a4) cell_highlight_pane_g

0x25ca,	// (0x000133cb) bg_scroll_pane

0xf146,	// (0x0001ff47) scroll_handle_pane

0x2611,	// (0x00013412) scroll_bg_pane_g1

0x2626,	// (0x00013427) scroll_bg_pane_g2

0x263e,	// (0x0001343f) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000204fb) scroll_bg_pane_g

0x2653,	// (0x00013454) scroll_handle_focus_pane_ParamLimits

0x2653,	// (0x00013454) scroll_handle_focus_pane

0x2611,	// (0x00013412) scroll_handle_pane_g1

0x2660,	// (0x00013461) scroll_handle_pane_g2

0x263e,	// (0x0001343f) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x00020502) scroll_handle_pane_g

0x21fd,	// (0x00012ffe) bg_popup_sub_pane_cp21_ParamLimits

0x21fd,	// (0x00012ffe) bg_popup_sub_pane_cp21

0x2674,	// (0x00013475) popup_fep_japan_predictive_window_t1_ParamLimits

0x2674,	// (0x00013475) popup_fep_japan_predictive_window_t1

0x268b,	// (0x0001348c) popup_fep_japan_predictive_window_t2_ParamLimits

0x268b,	// (0x0001348c) popup_fep_japan_predictive_window_t2

0x26be,	// (0x000134bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x26be,	// (0x000134bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x00020509) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x00020509) popup_fep_japan_predictive_window_t

0xe87a,	// (0x0001f67b) bg_popup_sub_pane_cp23

0x26f5,	// (0x000134f6) listscroll_japin_cand_pane

0x26fd,	// (0x000134fe) popup_fep_japan_candidate_window_t1

0x270b,	// (0x0001350c) candidate_pane_ParamLimits

0x270b,	// (0x0001350c) candidate_pane

0x271d,	// (0x0001351e) scroll_pane_cp30

0x2727,	// (0x00013528) list_single_popup_jap_candidate_pane_ParamLimits

0x2727,	// (0x00013528) list_single_popup_jap_candidate_pane

0xe87a,	// (0x0001f67b) list_highlight_pane_cp30

0x273b,	// (0x0001353c) list_single_popup_jap_candidate_pane_t1

0xbcdd,	// (0x0001cade) level_1_signal

0xbcef,	// (0x0001caf0) level_2_signal

0xbd02,	// (0x0001cb03) level_3_signal

0xbd15,	// (0x0001cb16) level_4_signal

0xbd28,	// (0x0001cb29) level_5_signal

0xbd3b,	// (0x0001cb3c) level_6_signal

0xbd4e,	// (0x0001cb4f) level_7_signal

0xbcdd,	// (0x0001cade) level_1_battery

0xbcef,	// (0x0001caf0) level_2_battery

0xbd02,	// (0x0001cb03) level_3_battery

0xbd15,	// (0x0001cb16) level_4_battery

0xbd28,	// (0x0001cb29) level_5_battery

0xbd3b,	// (0x0001cb3c) level_6_battery

0xbd4e,	// (0x0001cb4f) level_7_battery

0x27bd,	// (0x000135be) list_menu_pane_ParamLimits

0x27bd,	// (0x000135be) list_menu_pane

0x27ce,	// (0x000135cf) scroll_pane_cp25_ParamLimits

0x27ce,	// (0x000135cf) scroll_pane_cp25

0x27e7,	// (0x000135e8) list_double2_graphic_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double2_graphic_pane_cp2

0x27e7,	// (0x000135e8) list_double2_large_graphic_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double2_large_graphic_pane_cp2

0x27e7,	// (0x000135e8) list_double2_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double2_pane_cp2

0x27e7,	// (0x000135e8) list_double_graphic_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double_graphic_pane_cp2

0x27e7,	// (0x000135e8) list_double_large_graphic_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double_large_graphic_pane_cp2

0x27e7,	// (0x000135e8) list_double_number_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double_number_pane_cp2

0x27e7,	// (0x000135e8) list_double_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double_pane_cp2

0xbd61,	// (0x0001cb62) list_single_2graphic_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_2graphic_pane_cp2

0xbd61,	// (0x0001cb62) list_single_graphic_heading_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_graphic_heading_pane_cp2

0xbd61,	// (0x0001cb62) list_single_graphic_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_graphic_pane_cp2

0xbd61,	// (0x0001cb62) list_single_heading_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_heading_pane_cp2

0x282a,	// (0x0001362b) list_single_large_graphic_pane_cp2_ParamLimits

0x282a,	// (0x0001362b) list_single_large_graphic_pane_cp2

0xbd61,	// (0x0001cb62) list_single_number_heading_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_number_heading_pane_cp2

0xbd61,	// (0x0001cb62) list_single_number_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_number_pane_cp2

0xbd61,	// (0x0001cb62) list_single_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_pane_cp2

0x287f,	// (0x00013680) bg_popup_sub_pane_cp22

0xf1f8,	// (0x0001fff9) popup_side_volume_key_window_g1

0xf222,	// (0x00020023) popup_side_volume_key_window_t1

0xf240,	// (0x00020041) volume_small_pane_cp1

0x143d,	// (0x0001223e) bg_popup_sub_pane_cp24_ParamLimits

0x143d,	// (0x0001223e) bg_popup_sub_pane_cp24

0x2895,	// (0x00013696) fep_china_uni_candidate_pane_ParamLimits

0x2895,	// (0x00013696) fep_china_uni_candidate_pane

0x28a9,	// (0x000136aa) fep_china_uni_entry_pane

0x28b9,	// (0x000136ba) popup_fep_china_uni_window_g1

0x28d5,	// (0x000136d6) fep_china_uni_entry_pane_g1

0x28df,	// (0x000136e0) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00020536) fep_china_uni_entry_pane_g

0x28e9,	// (0x000136ea) fep_entry_item_pane

0x28f3,	// (0x000136f4) fep_candidate_item_pane

0x28fb,	// (0x000136fc) fep_china_uni_candidate_pane_g1

0x2905,	// (0x00013706) fep_china_uni_candidate_pane_g2

0x290d,	// (0x0001370e) fep_china_uni_candidate_pane_g3

0x2915,	// (0x00013716) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0002053b) fep_china_uni_candidate_pane_g

0xe870,	// (0x0001f671) fep_entry_item_pane_g1

0x291f,	// (0x00013720) fep_entry_item_pane_t1_ParamLimits

0x291f,	// (0x00013720) fep_entry_item_pane_t1

0x2935,	// (0x00013736) fep_candidate_item_pane_t1_ParamLimits

0x2935,	// (0x00013736) fep_candidate_item_pane_t1

0x294a,	// (0x0001374b) fep_candidate_item_pane_t2_ParamLimits

0x294a,	// (0x0001374b) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00020544) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00020544) fep_candidate_item_pane_t

0x11a7,	// (0x00011fa8) list_highlight_pane_cp31_ParamLimits

0x11a7,	// (0x00011fa8) list_highlight_pane_cp31

0x295c,	// (0x0001375d) level_1_signal_lsc

0x2965,	// (0x00013766) level_2_signal_lsc

0x296e,	// (0x0001376f) level_3_signal_lsc

0x2977,	// (0x00013778) level_4_signal_lsc

0x2980,	// (0x00013781) level_5_signal_lsc

0x2989,	// (0x0001378a) level_6_signal_lsc

0x2992,	// (0x00013793) level_7_signal_lsc

0x2992,	// (0x00013793) level_1_battery_lsc

0x299b,	// (0x0001379c) level_2_battery_lsc

0x29a4,	// (0x000137a5) level_3_battery_lsc

0x29ad,	// (0x000137ae) level_4_battery_lsc

0x29b6,	// (0x000137b7) level_5_battery_lsc

0x29bf,	// (0x000137c0) level_6_battery_lsc

0x295c,	// (0x0001375d) level_7_battery_lsc

0x29c8,	// (0x000137c9) scroll_handle_focus_pane_g1

0x29d1,	// (0x000137d2) scroll_handle_focus_pane_g2

0x29da,	// (0x000137db) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00020549) scroll_handle_focus_pane_g

0xbdc4,	// (0x0001cbc5) list_single_2graphic_pane_g1_ParamLimits

0xbdc4,	// (0x0001cbc5) list_single_2graphic_pane_g1

0xb66b,	// (0x0001c46c) list_single_2graphic_pane_g2_ParamLimits

0xb66b,	// (0x0001c46c) list_single_2graphic_pane_g2

0x3cb1,	// (0x00014ab2) list_single_2graphic_pane_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_2graphic_pane_g3

0xbdd0,	// (0x0001cbd1) list_single_2graphic_pane_g4_ParamLimits

0xbdd0,	// (0x0001cbd1) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00020550) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00020550) list_single_2graphic_pane_g

0xbde1,	// (0x0001cbe2) list_single_2graphic_pane_t1_ParamLimits

0xbde1,	// (0x0001cbe2) list_single_2graphic_pane_t1

0xbe0f,	// (0x0001cc10) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe0f,	// (0x0001cc10) list_double2_graphic_large_graphic_pane_g1

0xb6d6,	// (0x0001c4d7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb6d6,	// (0x0001c4d7) list_double2_graphic_large_graphic_pane_g2

0xb6e7,	// (0x0001c4e8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb6e7,	// (0x0001c4e8) list_double2_graphic_large_graphic_pane_g3

0xbe21,	// (0x0001cc22) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe21,	// (0x0001cc22) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00020559) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00020559) list_double2_graphic_large_graphic_pane_g

0xbe2d,	// (0x0001cc2e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe2d,	// (0x0001cc2e) list_double2_graphic_large_graphic_pane_t1

0xbe43,	// (0x0001cc44) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe43,	// (0x0001cc44) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00020562) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00020562) list_double2_graphic_large_graphic_pane_t

0x2ba8,	// (0x000139a9) popup_fast_swap_window_ParamLimits

0x2ba8,	// (0x000139a9) popup_fast_swap_window

0x2bc6,	// (0x000139c7) popup_side_volume_key_window

0x2be4,	// (0x000139e5) stacon_top_pane

0x2bee,	// (0x000139ef) status_pane_ParamLimits

0x2bee,	// (0x000139ef) status_pane

0x2be4,	// (0x000139e5) status_small_pane

0xe87a,	// (0x0001f67b) control_pane

0xe87a,	// (0x0001f67b) stacon_bottom_pane

0x1ee4,	// (0x00012ce5) scroll_pane_cp121

0x1edb,	// (0x00012cdc) set_content_pane

0xbe55,	// (0x0001cc56) bg_active_tab_pane_g1_cp1

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp1

0xbe5e,	// (0x0001cc5f) bg_active_tab_pane_g3_cp1

0xbe55,	// (0x0001cc56) bg_passive_tab_pane_g1_cp1

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp1

0xbe5e,	// (0x0001cc5f) bg_passive_tab_pane_g3_cp1

0xbe67,	// (0x0001cc68) bg_active_tab_pane_g1_cp2

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp2

0xbe70,	// (0x0001cc71) bg_active_tab_pane_g3_cp2

0xbe67,	// (0x0001cc68) bg_passive_tab_pane_g1_cp2

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp2

0xbe70,	// (0x0001cc71) bg_passive_tab_pane_g3_cp2

0xbe79,	// (0x0001cc7a) bg_active_tab_pane_g1_cp3

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp3

0xbe82,	// (0x0001cc83) bg_active_tab_pane_g3_cp3

0xbe79,	// (0x0001cc7a) bg_passive_tab_pane_g1_cp3

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp3

0xbe82,	// (0x0001cc83) bg_passive_tab_pane_g3_cp3

0xbe8b,	// (0x0001cc8c) bg_active_tab_pane_g1_cp4

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp4

0xbe94,	// (0x0001cc95) bg_active_tab_pane_g3_cp4

0xbe8b,	// (0x0001cc8c) bg_passive_tab_pane_g1_cp4

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp4

0xbe94,	// (0x0001cc95) bg_passive_tab_pane_g3_cp4

0x2b02,	// (0x00013903) bg_active_tab_pane_g1_cp5

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp5

0x2b0b,	// (0x0001390c) bg_active_tab_pane_g3_cp5

0x2b02,	// (0x00013903) bg_passive_tab_pane_g1_cp5

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp5

0x2b0b,	// (0x0001390c) bg_passive_tab_pane_g3_cp5

0x22cf,	// (0x000130d0) list_set_graphic_pane_ParamLimits

0x22cf,	// (0x000130d0) list_set_graphic_pane

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp4

0xbe9d,	// (0x0001cc9e) list_set_graphic_pane_g1_ParamLimits

0xbe9d,	// (0x0001cc9e) list_set_graphic_pane_g1

0xbea9,	// (0x0001ccaa) list_set_graphic_pane_g2_ParamLimits

0xbea9,	// (0x0001ccaa) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00020567) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00020567) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x000208df) volume_small_pane_cp_g

0x2b59,	// (0x0001395a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2b59,	// (0x0001395a) list_double2_large_graphic_pane_g1_cp2

0x2b67,	// (0x00013968) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2b67,	// (0x00013968) list_double2_large_graphic_pane_g2_cp2

0x2b78,	// (0x00013979) list_double2_large_graphic_pane_g3_cp2

0x2b80,	// (0x00013981) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2b80,	// (0x00013981) list_double2_large_graphic_pane_t1_cp2

0x2b96,	// (0x00013997) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2b96,	// (0x00013997) list_double2_large_graphic_pane_t2_cp2

0x4eae,	// (0x00015caf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4eae,	// (0x00015caf) list_double_large_graphic_pane_g1_cp2

0x4ec1,	// (0x00015cc2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4ec1,	// (0x00015cc2) list_double_large_graphic_pane_g2_cp2

0x2d0c,	// (0x00013b0d) list_double_large_graphic_pane_g3_cp2

0x4ed2,	// (0x00015cd3) list_double_large_graphic_pane_g4_cp

0x4eda,	// (0x00015cdb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4eda,	// (0x00015cdb) list_double_large_graphic_pane_t1_cp2

0x4ef1,	// (0x00015cf2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ef1,	// (0x00015cf2) list_double_large_graphic_pane_t2_cp2

0x2bfc,	// (0x000139fd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2bfc,	// (0x000139fd) list_double2_graphic_pane_g1_cp2

0x2c0a,	// (0x00013a0b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2c0a,	// (0x00013a0b) list_double2_graphic_pane_g2_cp2

0x2c1b,	// (0x00013a1c) list_double2_graphic_pane_g3_cp2

0x2c25,	// (0x00013a26) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2c25,	// (0x00013a26) list_double2_graphic_pane_t1_cp2

0x2c3b,	// (0x00013a3c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2c3b,	// (0x00013a3c) list_double2_graphic_pane_t2_cp2

0x2c4d,	// (0x00013a4e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2c4d,	// (0x00013a4e) list_single_number_heading_pane_g1_cp2

0x2c59,	// (0x00013a5a) list_single_number_heading_pane_g2_cp2

0x2c61,	// (0x00013a62) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2c61,	// (0x00013a62) list_single_number_heading_pane_t1_cp2

0x2c77,	// (0x00013a78) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2c77,	// (0x00013a78) list_single_number_heading_pane_t2_cp2

0x2c8b,	// (0x00013a8c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2c8b,	// (0x00013a8c) list_single_number_heading_pane_t3_cp2

0x2c4d,	// (0x00013a4e) list_single_heading_pane_g1_cp2_ParamLimits

0x2c4d,	// (0x00013a4e) list_single_heading_pane_g1_cp2

0x2c59,	// (0x00013a5a) list_single_heading_pane_g2_cp2

0x2c61,	// (0x00013a62) list_single_heading_pane_t1_cp2_ParamLimits

0x2c61,	// (0x00013a62) list_single_heading_pane_t1_cp2

0x4ca8,	// (0x00015aa9) list_single_heading_pane_t2_cp2_ParamLimits

0x4ca8,	// (0x00015aa9) list_single_heading_pane_t2_cp2

0x4bea,	// (0x000159eb) list_double_graphic_pane_g1_cp2_ParamLimits

0x4bea,	// (0x000159eb) list_double_graphic_pane_g1_cp2

0x4bf6,	// (0x000159f7) list_double_graphic_pane_g2_cp2_ParamLimits

0x4bf6,	// (0x000159f7) list_double_graphic_pane_g2_cp2

0x4c05,	// (0x00015a06) list_double_graphic_pane_g3_cp2

0x4c0d,	// (0x00015a0e) list_double_graphic_pane_t1_cp2_ParamLimits

0x4c0d,	// (0x00015a0e) list_double_graphic_pane_t1_cp2

0x4c23,	// (0x00015a24) list_double_graphic_pane_t2_cp2_ParamLimits

0x4c23,	// (0x00015a24) list_double_graphic_pane_t2_cp2

0x2d00,	// (0x00013b01) list_double_number_pane_g1_cp2_ParamLimits

0x2d00,	// (0x00013b01) list_double_number_pane_g1_cp2

0x2d0c,	// (0x00013b0d) list_double_number_pane_g2_cp2

0x4bae,	// (0x000159af) list_double_number_pane_t1_cp2_ParamLimits

0x4bae,	// (0x000159af) list_double_number_pane_t1_cp2

0x4bc2,	// (0x000159c3) list_double_number_pane_t2_cp2_ParamLimits

0x4bc2,	// (0x000159c3) list_double_number_pane_t2_cp2

0x4bd8,	// (0x000159d9) list_double_number_pane_t3_cp2_ParamLimits

0x4bd8,	// (0x000159d9) list_double_number_pane_t3_cp2

0x4a97,	// (0x00015898) list_single_graphic_pane_g1_cp2_ParamLimits

0x4a97,	// (0x00015898) list_single_graphic_pane_g1_cp2

0x2d66,	// (0x00013b67) list_single_graphic_pane_g2_cp2_ParamLimits

0x2d66,	// (0x00013b67) list_single_graphic_pane_g2_cp2

0x2d72,	// (0x00013b73) list_single_graphic_pane_g3_cp2

0x4a6d,	// (0x0001586e) list_single_graphic_pane_t1_cp2_ParamLimits

0x4a6d,	// (0x0001586e) list_single_graphic_pane_t1_cp2

0x2d66,	// (0x00013b67) list_single_number_pane_g1_cp2_ParamLimits

0x2d66,	// (0x00013b67) list_single_number_pane_g1_cp2

0x2d72,	// (0x00013b73) list_single_number_pane_g2_cp2

0x4a6d,	// (0x0001586e) list_single_number_pane_t1_cp2_ParamLimits

0x4a6d,	// (0x0001586e) list_single_number_pane_t1_cp2

0x4a83,	// (0x00015884) list_single_number_pane_t2_cp2_ParamLimits

0x4a83,	// (0x00015884) list_single_number_pane_t2_cp2

0x2b67,	// (0x00013968) list_double2_pane_g1_cp2_ParamLimits

0x2b67,	// (0x00013968) list_double2_pane_g1_cp2

0x2b78,	// (0x00013979) list_double2_pane_g2_cp2

0x2cd8,	// (0x00013ad9) list_double2_pane_t1_cp2_ParamLimits

0x2cd8,	// (0x00013ad9) list_double2_pane_t1_cp2

0x2cee,	// (0x00013aef) list_double2_pane_t2_cp2_ParamLimits

0x2cee,	// (0x00013aef) list_double2_pane_t2_cp2

0x2d00,	// (0x00013b01) list_double_pane_g1_cp2_ParamLimits

0x2d00,	// (0x00013b01) list_double_pane_g1_cp2

0x2d0c,	// (0x00013b0d) list_double_pane_g2_cp2

0x2d14,	// (0x00013b15) list_double_pane_t1_cp2_ParamLimits

0x2d14,	// (0x00013b15) list_double_pane_t1_cp2

0x2d2a,	// (0x00013b2b) list_double_pane_t2_cp2_ParamLimits

0x2d2a,	// (0x00013b2b) list_double_pane_t2_cp2

0x2d56,	// (0x00013b57) list_single_pane_cp2_g3

0x2d66,	// (0x00013b67) list_single_pane_g1_cp2_ParamLimits

0x2d66,	// (0x00013b67) list_single_pane_g1_cp2

0x2d72,	// (0x00013b73) list_single_pane_g2_cp2

0x2d7a,	// (0x00013b7b) list_single_pane_t1_cp2_ParamLimits

0x2d7a,	// (0x00013b7b) list_single_pane_t1_cp2

0x2d92,	// (0x00013b93) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2d92,	// (0x00013b93) list_single_large_graphic_pane_g1_cp2

0x2da0,	// (0x00013ba1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2da0,	// (0x00013ba1) list_single_large_graphic_pane_g2_cp2

0x2dac,	// (0x00013bad) list_single_large_graphic_pane_g3_cp2

0x2db4,	// (0x00013bb5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2db4,	// (0x00013bb5) list_single_large_graphic_pane_g4_cp1

0x2dce,	// (0x00013bcf) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2dce,	// (0x00013bcf) list_single_large_graphic_pane_t1_cp2

0x4a37,	// (0x00015838) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4a37,	// (0x00015838) list_single_graphic_heading_pane_g1_cp2

0x4a04,	// (0x00015805) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4a04,	// (0x00015805) list_single_graphic_heading_pane_g4_cp2

0x2d72,	// (0x00013b73) list_single_graphic_heading_pane_g5_cp2

0x4a43,	// (0x00015844) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4a43,	// (0x00015844) list_single_graphic_heading_pane_t1_cp2

0x4a59,	// (0x0001585a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4a59,	// (0x0001585a) list_single_graphic_heading_pane_t2_cp2

0x49f8,	// (0x000157f9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x49f8,	// (0x000157f9) list_single_2graphic_pane_g1_cp2

0x4a04,	// (0x00015805) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4a04,	// (0x00015805) list_single_2graphic_pane_g2_cp2

0x2d72,	// (0x00013b73) list_single_2graphic_pane_g3_cp2

0x4a15,	// (0x00015816) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4a15,	// (0x00015816) list_single_2graphic_pane_g4_cp2

0x4a21,	// (0x00015822) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4a21,	// (0x00015822) list_single_2graphic_pane_t1_cp2

0xe870,	// (0x0001f671) list_highlight_pane_g10_cp1

0x45d0,	// (0x000153d1) list_highlight_pane_g1_cp1

0x45d8,	// (0x000153d9) list_highlight_pane_g2_cp1

0x45e0,	// (0x000153e1) list_highlight_pane_g3_cp1

0x45e8,	// (0x000153e9) list_highlight_pane_g4_cp1

0x45f0,	// (0x000153f1) list_highlight_pane_g5_cp1

0x45f8,	// (0x000153f9) list_highlight_pane_g6_cp1

0x4600,	// (0x00015401) list_highlight_pane_g7_cp1

0x4608,	// (0x00015409) list_highlight_pane_g8_cp1

0x4610,	// (0x00015411) list_highlight_pane_g9_cp1

0xcc00,	// (0x0001da01) form_field_slider_pane_t3

0xcc0e,	// (0x0001da0f) form_field_slider_pane_t4

0x450c,	// (0x0001530d) slider_form_pane_ParamLimits

0x450c,	// (0x0001530d) slider_form_pane

0xe87a,	// (0x0001f67b) control_abbreviations

0xe87a,	// (0x0001f67b) control_conventions

0xe87a,	// (0x0001f67b) control_definitions

0xe87a,	// (0x0001f67b) format_table_attribute

0x4cfe,	// (0x00015aff) bg_popup_preview_window_pane_g9

0xe87a,	// (0x0001f67b) format_table_data2

0xe87a,	// (0x0001f67b) format_table_data3

0xe87a,	// (0x0001f67b) format_table_data_example

0x0008,

0xe87a,	// (0x0001f67b) intro_purpose

0xf8f6,	// (0x000206f7) bg_popup_preview_window_pane_g

0xe87a,	// (0x0001f67b) texts_category

0xe87a,	// (0x0001f67b) texts_graphics

0x2de4,	// (0x00013be5) text_digital

0x2df3,	// (0x00013bf4) text_primary

0x2e02,	// (0x00013c03) text_primary_small

0x2e11,	// (0x00013c12) text_secondary

0x2e20,	// (0x00013c21) text_title

0x5523,	// (0x00016324) bg_passive_tab_pane_g1_cp3_srt

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp3_srt

0x552c,	// (0x0001632d) bg_passive_tab_pane_g3_cp3_srt

0x143d,	// (0x0001223e) bg_active_tab_pane_cp3_srt_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp3_srt

0x5535,	// (0x00016336) tabs_4_active_pane_srt_g1

0xd067,	// (0x0001de68) tabs_4_active_pane_srt_t1_ParamLimits

0xd067,	// (0x0001de68) tabs_4_active_pane_srt_t1

0x5523,	// (0x00016324) bg_active_tab_pane_g1_cp3_copy1

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp3_copy1

0x552c,	// (0x0001632d) bg_active_tab_pane_g3_cp3_copy1

0x11a7,	// (0x00011fa8) tabs_2_long_active_pane_srt_ParamLimits

0x11a7,	// (0x00011fa8) tabs_2_long_active_pane_srt

0x11a7,	// (0x00011fa8) tabs_2_long_passive_pane_srt_ParamLimits

0x11a7,	// (0x00011fa8) tabs_2_long_passive_pane_srt

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp4_srt

0x5176,	// (0x00015f77) bg_passive_tab_pane_g1_cp4_srt

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp4_srt

0x517f,	// (0x00015f80) bg_passive_tab_pane_g3_cp4_srt

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp4_srt_ParamLimits

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp4_srt

0xce1b,	// (0x0001dc1c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xce1b,	// (0x0001dc1c) tabs_2_long_active_pane_srt_t1

0x5176,	// (0x00015f77) bg_active_tab_pane_g1_cp4_srt

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp4_srt

0x517f,	// (0x00015f80) bg_active_tab_pane_g3_cp4_srt

0x143d,	// (0x0001223e) tabs_3_long_active_pane_srt_ParamLimits

0x143d,	// (0x0001223e) tabs_3_long_active_pane_srt

0x143d,	// (0x0001223e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x143d,	// (0x0001223e) tabs_3_long_passive_pane_cp_srt

0x143d,	// (0x0001223e) tabs_3_long_passive_pane_srt_ParamLimits

0x143d,	// (0x0001223e) tabs_3_long_passive_pane_srt

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp5_srt

0x2b02,	// (0x00013903) bg_passive_tab_pane_g1_cp5_srt

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp5_srt

0x2b0b,	// (0x0001390c) bg_passive_tab_pane_g3_cp5_srt

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp5_srt_ParamLimits

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp5_srt

0xce05,	// (0x0001dc06) tabs_3_long_active_pane_srt_t1_ParamLimits

0xce05,	// (0x0001dc06) tabs_3_long_active_pane_srt_t1

0x2b02,	// (0x00013903) bg_active_tab_pane_g1_cp5_srt

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp5_srt

0x2b0b,	// (0x0001390c) bg_active_tab_pane_g3_cp5_srt

0x5156,	// (0x00015f57) navi_text_pane_srt_t1

0x514e,	// (0x00015f4f) navi_icon_pane_srt_g1

0x2ff7,	// (0x00013df8) midp_editing_number_pane_srt

0x2e2f,	// (0x00013c30) midp_ticker_pane_srt

0x2fff,	// (0x00013e00) midp_ticker_pane_srt_g1

0x3007,	// (0x00013e08) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00020586) midp_ticker_pane_srt_g

0x300f,	// (0x00013e10) midp_ticker_pane_srt_t1

0x513f,	// (0x00015f40) midp_editing_number_pane_t1_copy1

0xbecd,	// (0x0001ccce) listscroll_midp_pane

0xbecd,	// (0x0001ccce) midp_form_pane

0x2ea5,	// (0x00013ca6) midp_info_popup_window_ParamLimits

0x2ea5,	// (0x00013ca6) midp_info_popup_window

0x21fd,	// (0x00012ffe) bg_popup_sub_pane_cp50_ParamLimits

0x21fd,	// (0x00012ffe) bg_popup_sub_pane_cp50

0x4206,	// (0x00015007) listscroll_midp_info_pane_ParamLimits

0x4206,	// (0x00015007) listscroll_midp_info_pane

0x41ee,	// (0x00014fef) listscroll_form_midp_pane_ParamLimits

0x41ee,	// (0x00014fef) listscroll_form_midp_pane

0x41fa,	// (0x00014ffb) scroll_bar_cp050

0xcbf4,	// (0x0001d9f5) list_midp_pane

0x6169,	// (0x00016f6a) signal_pane_g2_cp

0x4108,	// (0x00014f09) listscroll_midp_info_pane_t1_ParamLimits

0x4108,	// (0x00014f09) listscroll_midp_info_pane_t1

0x4120,	// (0x00014f21) listscroll_midp_info_pane_t2_ParamLimits

0x4120,	// (0x00014f21) listscroll_midp_info_pane_t2

0x415e,	// (0x00014f5f) listscroll_midp_info_pane_t3_ParamLimits

0x415e,	// (0x00014f5f) listscroll_midp_info_pane_t3

0x4198,	// (0x00014f99) listscroll_midp_info_pane_t4_ParamLimits

0x4198,	// (0x00014f99) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00020632) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00020632) listscroll_midp_info_pane_t

0x22c7,	// (0x000130c8) scroll_pane_cp21

0x40a2,	// (0x00014ea3) form_midp_field_choice_group_pane

0x40ab,	// (0x00014eac) form_midp_field_text_pane

0x40ee,	// (0x00014eef) form_midp_field_time_pane

0x40f6,	// (0x00014ef7) form_midp_gauge_slider_pane

0x40ff,	// (0x00014f00) form_midp_gauge_wait_pane

0xe87a,	// (0x0001f67b) form_midp_image_pane

0xcbd7,	// (0x0001d9d8) list_single_midp_pane_ParamLimits

0xcbd7,	// (0x0001d9d8) list_single_midp_pane

0xcbaf,	// (0x0001d9b0) form_midp_field_text_pane_t1

0x3e4b,	// (0x00014c4c) input_focus_pane_cp050

0x4071,	// (0x00014e72) list_midp_form_text_pane

0x4015,	// (0x00014e16) form_midp_field_choice_group_pane_t1

0x4023,	// (0x00014e24) input_focus_pane_cp051

0x4037,	// (0x00014e38) list_midp_choice_pane

0xe87a,	// (0x0001f67b) status_idle_pane

0x3ff9,	// (0x00014dfa) form_midp_field_time_pane_t1

0xe870,	// (0x0001f671) wait_anim_pane_g2_copy1

0x4007,	// (0x00014e08) form_midp_field_time_pane_t2

0x0001,

0x2f55,	// (0x00013d56) aid_navinavi_width_2_pane

0xf82c,	// (0x0002062d) form_midp_field_time_pane_t

0xe87a,	// (0x0001f67b) input_focus_pane_cp052

0xe87a,	// (0x0001f67b) bg_input_focus_pane_cp040

0x3fb9,	// (0x00014dba) form_midp_gauge_slider_pane_t1

0x3fc7,	// (0x00014dc8) form_midp_gauge_slider_pane_t2

0xcb93,	// (0x0001d994) form_midp_gauge_slider_pane_t3

0xcba1,	// (0x0001d9a2) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00020624) form_midp_gauge_slider_pane_t

0x3ff1,	// (0x00014df2) form_midp_slider_pane

0x11a7,	// (0x00011fa8) bg_input_focus_pane_cp041_ParamLimits

0x11a7,	// (0x00011fa8) bg_input_focus_pane_cp041

0x3f86,	// (0x00014d87) form_midp_gauge_wait_pane_t1_ParamLimits

0x3f86,	// (0x00014d87) form_midp_gauge_wait_pane_t1

0x3f98,	// (0x00014d99) form_midp_gauge_wait_pane_t2_ParamLimits

0x3f98,	// (0x00014d99) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0002061f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0002061f) form_midp_gauge_wait_pane_t

0x3faa,	// (0x00014dab) form_midp_wait_pane_ParamLimits

0x3faa,	// (0x00014dab) form_midp_wait_pane

0x3f4e,	// (0x00014d4f) form_midp_image_pane_g1

0x3f57,	// (0x00014d58) form_midp_image_pane_t1

0x3f66,	// (0x00014d67) form_midp_image_pane_t2

0x3f75,	// (0x00014d76) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00020618) form_midp_image_pane_t

0x3f36,	// (0x00014d37) list_single_midp_pane_g1

0x3f3f,	// (0x00014d40) list_single_midp_pane_t1

0xcb7c,	// (0x0001d97d) list_midp_form_item_pane_ParamLimits

0xcb7c,	// (0x0001d97d) list_midp_form_item_pane

0x2efd,	// (0x00013cfe) list_midp_form_item_pane_t1

0x2f0c,	// (0x00013d0d) midp_ticker_pane_g1

0x2f18,	// (0x00013d19) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0002056c) midp_ticker_pane_g

0xbf75,	// (0x0001cd76) midp_ticker_pane_t1

0xcfc6,	// (0x0001ddc7) midp_editing_number_pane_t1

0x53d1,	// (0x000161d2) midp_editing_number_pane

0x53e0,	// (0x000161e1) midp_ticker_pane

0x5107,	// (0x00015f08) ai_message_heading_pane

0xe87a,	// (0x0001f67b) bg_popup_window_pane_cp14

0x510f,	// (0x00015f10) listscroll_ai_message_pane

0x508d,	// (0x00015e8e) ai_message_heading_pane_g1_ParamLimits

0x508d,	// (0x00015e8e) ai_message_heading_pane_g1

0x5099,	// (0x00015e9a) ai_message_heading_pane_g2_ParamLimits

0x5099,	// (0x00015e9a) ai_message_heading_pane_g2

0x50a7,	// (0x00015ea8) ai_message_heading_pane_g3_ParamLimits

0x50a7,	// (0x00015ea8) ai_message_heading_pane_g3

0x50b3,	// (0x00015eb4) ai_message_heading_pane_g4_ParamLimits

0x50b3,	// (0x00015eb4) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00020759) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00020759) ai_message_heading_pane_g

0x50bf,	// (0x00015ec0) ai_message_heading_pane_t1_ParamLimits

0x50bf,	// (0x00015ec0) ai_message_heading_pane_t1

0x50d9,	// (0x00015eda) ai_message_heading_pane_t2_ParamLimits

0x50d9,	// (0x00015eda) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00020762) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00020762) ai_message_heading_pane_t

0x50ed,	// (0x00015eee) bg_popup_heading_pane_cp1_ParamLimits

0x50ed,	// (0x00015eee) bg_popup_heading_pane_cp1

0x507b,	// (0x00015e7c) list_ai_message_pane_ParamLimits

0x507b,	// (0x00015e7c) list_ai_message_pane

0x22c7,	// (0x000130c8) scroll_pane_cp10

0x5017,	// (0x00015e18) list_ai_message_pane_g1

0x501f,	// (0x00015e20) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00020736) list_ai_message_pane_g

0x5027,	// (0x00015e28) list_ai_message_pane_t1_ParamLimits

0x5027,	// (0x00015e28) list_ai_message_pane_t1

0x503c,	// (0x00015e3d) list_ai_message_pane_t2_ParamLimits

0x503c,	// (0x00015e3d) list_ai_message_pane_t2

0x5051,	// (0x00015e52) list_ai_message_pane_t3_ParamLimits

0x5051,	// (0x00015e52) list_ai_message_pane_t3

0x5066,	// (0x00015e67) list_ai_message_pane_t4_ParamLimits

0x5066,	// (0x00015e67) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0002073b) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0002073b) list_ai_message_pane_t

0xcdd9,	// (0x0001dbda) cell_ai_soft_ind_pane_ParamLimits

0xcdd9,	// (0x0001dbda) cell_ai_soft_ind_pane

0x2f36,	// (0x00013d37) cell_ai_soft_ind_pane_g1_ParamLimits

0x2f36,	// (0x00013d37) cell_ai_soft_ind_pane_g1

0xe87a,	// (0x0001f67b) grid_highlight_cp1

0x2f43,	// (0x00013d44) text_secondary_cp56_ParamLimits

0x2f43,	// (0x00013d44) text_secondary_cp56

0x4fd5,	// (0x00015dd6) example_general_pane_ParamLimits

0x4fd5,	// (0x00015dd6) example_general_pane

0x4fe1,	// (0x00015de2) example_parent_pane_g1_ParamLimits

0x4fe1,	// (0x00015de2) example_parent_pane_g1

0x4fed,	// (0x00015dee) example_parent_pane_t1_ParamLimits

0x4fed,	// (0x00015dee) example_parent_pane_t1

0xc3e7,	// (0x0001d1e8) popup_preview_text_window_ParamLimits

0xc3e7,	// (0x0001d1e8) popup_preview_text_window

0x2d5e,	// (0x00013b5f) list_single_pane_cp2_g4

0x14f3,	// (0x000122f4) bg_popup_preview_window_pane_ParamLimits

0x14f3,	// (0x000122f4) bg_popup_preview_window_pane

0x4d08,	// (0x00015b09) popup_preview_text_window_t1_ParamLimits

0x4d08,	// (0x00015b09) popup_preview_text_window_t1

0x4d26,	// (0x00015b27) popup_preview_text_window_t2_ParamLimits

0x4d26,	// (0x00015b27) popup_preview_text_window_t2

0x4d6f,	// (0x00015b70) popup_preview_text_window_t3_ParamLimits

0x4d6f,	// (0x00015b70) popup_preview_text_window_t3

0x4db4,	// (0x00015bb5) popup_preview_text_window_t4_ParamLimits

0x4db4,	// (0x00015bb5) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0002070a) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0002070a) popup_preview_text_window_t

0x4e32,	// (0x00015c33) scroll_pane_cp11

0x3d2f,	// (0x00014b30) bg_popup_preview_window_pane_g1

0x4cbc,	// (0x00015abd) bg_popup_preview_window_pane_g2

0x4cc6,	// (0x00015ac7) bg_popup_preview_window_pane_g3

0x4cd0,	// (0x00015ad1) bg_popup_preview_window_pane_g4

0x4cda,	// (0x00015adb) bg_popup_preview_window_pane_g5

0x4ce4,	// (0x00015ae5) bg_popup_preview_window_pane_g6

0x4cec,	// (0x00015aed) bg_popup_preview_window_pane_g7

0x4cf4,	// (0x00015af5) bg_popup_preview_window_pane_g8

0xecf0,	// (0x0001faf1) aid_popup_width_pane

0xc357,	// (0x0001d158) popup_midp_note_alarm_window_ParamLimits

0xc357,	// (0x0001d158) popup_midp_note_alarm_window

0x1fb3,	// (0x00012db4) data_form_pane_ParamLimits

0xba72,	// (0x0001c873) form_field_data_pane_g1

0xba7c,	// (0x0001c87d) form_field_data_pane_t1_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_ParamLimits

0x1ff1,	// (0x00012df2) data_form_wide_pane_ParamLimits

0x1ffd,	// (0x00012dfe) form_field_data_wide_pane_g1

0x2029,	// (0x00012e2a) form_field_data_wide_pane_t1_ParamLimits

0x17b9,	// (0x000125ba) input_focus_pane_cp6_ParamLimits

0xbbd6,	// (0x0001c9d7) input_popup_find_pane_g1_ParamLimits

0xbbd6,	// (0x0001c9d7) input_popup_find_pane_g1

0xf0ae,	// (0x0001feaf) aid_navi_side_left_pane

0xf0c3,	// (0x0001fec4) aid_navi_side_right_pane

0x46cb,	// (0x000154cc) bg_popup_window_pane_cp30_ParamLimits

0x46cb,	// (0x000154cc) bg_popup_window_pane_cp30

0x4745,	// (0x00015546) popup_midp_note_alarm_window_g1_ParamLimits

0x4745,	// (0x00015546) popup_midp_note_alarm_window_g1

0x4775,	// (0x00015576) popup_midp_note_alarm_window_t1_ParamLimits

0x4775,	// (0x00015576) popup_midp_note_alarm_window_t1

0x4816,	// (0x00015617) popup_midp_note_alarm_window_t2_ParamLimits

0x4816,	// (0x00015617) popup_midp_note_alarm_window_t2

0x48c4,	// (0x000156c5) popup_midp_note_alarm_window_t3_ParamLimits

0x48c4,	// (0x000156c5) popup_midp_note_alarm_window_t3

0x48f6,	// (0x000156f7) popup_midp_note_alarm_window_t4_ParamLimits

0x48f6,	// (0x000156f7) popup_midp_note_alarm_window_t4

0x491c,	// (0x0001571d) popup_midp_note_alarm_window_t5_ParamLimits

0x491c,	// (0x0001571d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x000206a7) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x000206a7) popup_midp_note_alarm_window_t

0x49c8,	// (0x000157c9) wait_bar_pane_cp1_ParamLimits

0x49c8,	// (0x000157c9) wait_bar_pane_cp1

0xe87a,	// (0x0001f67b) wait_anim_pane_copy1

0xe87a,	// (0x0001f67b) wait_border_pane_copy1

0x43b0,	// (0x000151b1) wait_border_pane_g1_copy1

0x2043,	// (0x00012e44) form_field_popup_pane_g1

0xba96,	// (0x0001c897) form_field_popup_pane_t1_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_cp7_ParamLimits

0x2065,	// (0x00012e66) list_form_pane_ParamLimits

0x2071,	// (0x00012e72) form_field_popup_wide_pane_g1

0x2079,	// (0x00012e7a) form_field_popup_wide_pane_t1_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_cp8_ParamLimits

0x208e,	// (0x00012e8f) list_form_wide_pane_ParamLimits

0x55b0,	// (0x000163b1) aid_size_cell_graphic_pane

0xbb15,	// (0x0001c916) data_form_pane_t1_ParamLimits

0xcfaa,	// (0x0001ddab) data_form_wide_pane_t1_ParamLimits

0xc80c,	// (0x0001d60d) bg_status_flat_pane

0xb2a6,	// (0x0001c0a7) title_pane_t1_ParamLimits

0x116f,	// (0x00011f70) title_pane_t2_ParamLimits

0x1195,	// (0x00011f96) title_pane_t3_ParamLimits

0xf573,	// (0x00020374) title_pane_t_ParamLimits

0xbcdd,	// (0x0001cade) level_1_signal_ParamLimits

0xbcef,	// (0x0001caf0) level_2_signal_ParamLimits

0xbd02,	// (0x0001cb03) level_3_signal_ParamLimits

0xbd15,	// (0x0001cb16) level_4_signal_ParamLimits

0xbd28,	// (0x0001cb29) level_5_signal_ParamLimits

0xbd3b,	// (0x0001cb3c) level_6_signal_ParamLimits

0xbd4e,	// (0x0001cb4f) level_7_signal_ParamLimits

0xbcdd,	// (0x0001cade) level_1_battery_ParamLimits

0xbcef,	// (0x0001caf0) level_2_battery_ParamLimits

0xbd02,	// (0x0001cb03) level_3_battery_ParamLimits

0xbd15,	// (0x0001cb16) level_4_battery_ParamLimits

0xbd28,	// (0x0001cb29) level_5_battery_ParamLimits

0xbd3b,	// (0x0001cb3c) level_6_battery_ParamLimits

0xbd4e,	// (0x0001cb4f) level_7_battery_ParamLimits

0x45d0,	// (0x000153d1) bg_status_flat_pane_g1

0x45d8,	// (0x000153d9) bg_status_flat_pane_g2

0x45e0,	// (0x000153e1) bg_status_flat_pane_g3

0x45e8,	// (0x000153e9) bg_status_flat_pane_g4

0x45f0,	// (0x000153f1) bg_status_flat_pane_g5

0x45f8,	// (0x000153f9) bg_status_flat_pane_g6

0x4600,	// (0x00015401) bg_status_flat_pane_g7

0xb33a,	// (0x0001c13b) tabs_3_active_pane_t1_ParamLimits

0xb33a,	// (0x0001c13b) tabs_3_passive_pane_t1_ParamLimits

0xb354,	// (0x0001c155) tabs_4_active_pane_t1_ParamLimits

0xb354,	// (0x0001c155) tabs_4_1_passive_pane_t1_ParamLimits

0xbbec,	// (0x0001c9ed) tabs_2_active_pane_t1_ParamLimits

0xbbec,	// (0x0001c9ed) tabs_2_passive_pane_t1_ParamLimits

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp4_ParamLimits

0xbbfe,	// (0x0001c9ff) tabs_2_long_active_pane_t1_ParamLimits

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp4_ParamLimits

0xf554,	// (0x00020355) list_single_midp_graphic_pane_t1_ParamLimits

0x11a7,	// (0x00011fa8) bg_active_tab_pane_cp5_ParamLimits

0xbc11,	// (0x0001ca12) tabs_3_long_active_pane_t1_ParamLimits

0x31bd,	// (0x00013fbe) bg_passive_tab_pane_cp5_ParamLimits

0xf554,	// (0x00020355) list_single_midp_graphic_pane_t1

0xc80c,	// (0x0001d60d) bg_status_flat_pane_ParamLimits

0x397a,	// (0x0001477b) indicator_pane_cp2_ParamLimits

0x397a,	// (0x0001477b) indicator_pane_cp2

0xc9a1,	// (0x0001d7a2) navi_pane_srt_ParamLimits

0xc9a1,	// (0x0001d7a2) navi_pane_srt

0x3ae0,	// (0x000148e1) popup_clock_digital_analogue_window_cp1

0x12a1,	// (0x000120a2) indicator_pane_t1

0x2e2f,	// (0x00013c30) copy_highlight_pane

0x2e2f,	// (0x00013c30) cursor_graphics_pane

0x2e2f,	// (0x00013c30) graphic_within_text_pane

0x2e2f,	// (0x00013c30) link_highlight_pane

0x4df5,	// (0x00015bf6) popup_preview_text_window_t5_ParamLimits

0x4df5,	// (0x00015bf6) popup_preview_text_window_t5

0x2f5f,	// (0x00013d60) cursor_digital_pane

0x2f5f,	// (0x00013d60) cursor_primary_pane

0x2f70,	// (0x00013d71) cursor_primary_small_pane

0x2f78,	// (0x00013d79) cursor_secondary_pane

0x2f80,	// (0x00013d81) cursor_title_pane

0x2f5f,	// (0x00013d60) link_highlight_digital_pane

0x2f67,	// (0x00013d68) link_highlight_primary_pane

0x2f70,	// (0x00013d71) link_highlight_primary_small_pane

0x2f78,	// (0x00013d79) link_highlight_secondary_pane

0x2f80,	// (0x00013d81) link_highlight_title_pane

0x2f5f,	// (0x00013d60) copy_highlight_digital_pane

0x2f5f,	// (0x00013d60) copy_highlight_primary_pane

0x2f70,	// (0x00013d71) copy_highlight_primary_small_pane

0x2f78,	// (0x00013d79) copy_highlight_secondary_pane

0x2f80,	// (0x00013d81) copy_highlight_title_pane

0x2f78,	// (0x00013d79) graphic_text_digital_pane

0x466e,	// (0x0001546f) graphic_text_primary_pane

0x4677,	// (0x00015478) graphic_text_primary_small_pane

0x2f70,	// (0x00013d71) graphic_text_secondary_pane

0x2f5f,	// (0x00013d60) graphic_text_title_pane

0xbf87,	// (0x0001cd88) cursor_primary_pane_g1

0x4660,	// (0x00015461) cursor_text_primary_t1

0xcc30,	// (0x0001da31) cursor_primary_small_pane_g1

0x4652,	// (0x00015453) cursor_text_primary_small_t1

0xcc26,	// (0x0001da27) cursor_primary_small_pane_g1_copy1

0x463a,	// (0x0001543b) cursor_text_primary_small_t1_copy1

0x4618,	// (0x00015419) cursor_text_title_t1

0xcc1c,	// (0x0001da1d) cursor_title_pane_g1

0xbf87,	// (0x0001cd88) cursor_digital_pane_g1

0x2f92,	// (0x00013d93) cursor_text_digital_t1

0x2fa0,	// (0x00013da1) link_highlight_primary_pane_g1

0x45c1,	// (0x000153c2) link_highlight_primary_pane_t1

0x2fa0,	// (0x00013da1) link_highlight_primary_small_pane_g1

0x2fa8,	// (0x00013da9) link_highlight_primary_small_pane_t1

0x2fb7,	// (0x00013db8) link_highlight_secondary_pane_g1

0x2fbf,	// (0x00013dc0) link_highlight_secondary_pane_t1

0x4535,	// (0x00015336) link_highlight_title_pane_g1

0x453d,	// (0x0001533e) link_highlight_title_pane_t1

0x451e,	// (0x0001531f) link_highlight_digital_pane_g1

0x4526,	// (0x00015327) link_highlight_digital_pane_t1

0x43e6,	// (0x000151e7) copy_highlight_primary_pane_g1

0x43fd,	// (0x000151fe) copy_highlight_primary_pane_t1

0x43e6,	// (0x000151e7) copy_highlight_primary_small_pane_g1

0x43ee,	// (0x000151ef) copy_highlight_primary_small_pane_t1

0x2fce,	// (0x00013dcf) copy_highlight_secondary_pane_g1

0x2fd6,	// (0x00013dd7) copy_highlight_secondary_pane_t1

0x43cf,	// (0x000151d0) copy_highlight_title_pane_g1

0x43d7,	// (0x000151d8) copy_highlight_title_pane_t1

0x43e6,	// (0x000151e7) copy_highlight_digital_pane_g1

0x5780,	// (0x00016581) copy_highlight_digital_pane_t1

0x56d4,	// (0x000164d5) graphic_text_primary_pane_g1

0x5764,	// (0x00016565) graphic_text_primary_pane_t1

0x5772,	// (0x00016573) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x000207d6) graphic_text_primary_pane_t

0x5740,	// (0x00016541) graphic_text_primary_small_pane_g1

0x5748,	// (0x00016549) graphic_text_primary_small_pane_t1

0x5756,	// (0x00016557) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x000207d1) graphic_text_primary_small_pane_t

0x571c,	// (0x0001651d) graphic_text_secondary_pane_g1

0x5724,	// (0x00016525) graphic_text_secondary_pane_t1

0x5732,	// (0x00016533) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x000207cc) graphic_text_secondary_pane_t

0x56f8,	// (0x000164f9) graphic_text_title_pane_g1

0x5700,	// (0x00016501) graphic_text_title_pane_t1

0x570e,	// (0x0001650f) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x000207c7) graphic_text_title_pane_t

0x56d4,	// (0x000164d5) graphic_text_digital_pane_g1

0x56dc,	// (0x000164dd) graphic_text_digital_pane_t1

0x56ea,	// (0x000164eb) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x000207c2) graphic_text_digital_pane_t

0x11a7,	// (0x00011fa8) navi_icon_pane_srt_ParamLimits

0x11a7,	// (0x00011fa8) navi_icon_pane_srt

0xe87a,	// (0x0001f67b) navi_midp_pane_srt

0xe87a,	// (0x0001f67b) navi_navi_pane_srt

0x11a7,	// (0x00011fa8) navi_text_pane_srt_ParamLimits

0x11a7,	// (0x00011fa8) navi_text_pane_srt

0x569f,	// (0x000164a0) navi_navi_icon_text_pane_srt

0x56a7,	// (0x000164a8) navi_navi_pane_srt_g1_ParamLimits

0x56a7,	// (0x000164a8) navi_navi_pane_srt_g1

0x56b9,	// (0x000164ba) navi_navi_pane_srt_g2_ParamLimits

0x56b9,	// (0x000164ba) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x000207bd) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x000207bd) navi_navi_pane_srt_g

0x56cb,	// (0x000164cc) navi_navi_tabs_pane_srt

0x569f,	// (0x000164a0) navi_navi_text_pane_srt

0x569f,	// (0x000164a0) navi_navi_volume_pane_srt

0x5690,	// (0x00016491) navi_navi_text_pane_srt_t1

0x037d,	// (0x0001117e) navi_navi_volume_pane_srt_g1

0x0385,	// (0x00011186) volume_small_pane_srt_ParamLimits

0x0385,	// (0x00011186) volume_small_pane_srt

0xf38c,	// (0x0002018d) volume_small_pane_srt_g1_ParamLimits

0xf38c,	// (0x0002018d) volume_small_pane_srt_g1

0xf39c,	// (0x0002019d) volume_small_pane_srt_g2_ParamLimits

0xf39c,	// (0x0002019d) volume_small_pane_srt_g2

0xf3ad,	// (0x000201ae) volume_small_pane_srt_g3_ParamLimits

0xf3ad,	// (0x000201ae) volume_small_pane_srt_g3

0xf3be,	// (0x000201bf) volume_small_pane_srt_g4_ParamLimits

0xf3be,	// (0x000201bf) volume_small_pane_srt_g4

0xf3cf,	// (0x000201d0) volume_small_pane_srt_g5_ParamLimits

0xf3cf,	// (0x000201d0) volume_small_pane_srt_g5

0xf3e0,	// (0x000201e1) volume_small_pane_srt_g6_ParamLimits

0xf3e0,	// (0x000201e1) volume_small_pane_srt_g6

0xf3f1,	// (0x000201f2) volume_small_pane_srt_g7_ParamLimits

0xf3f1,	// (0x000201f2) volume_small_pane_srt_g7

0xf402,	// (0x00020203) volume_small_pane_srt_g8_ParamLimits

0xf402,	// (0x00020203) volume_small_pane_srt_g8

0xf413,	// (0x00020214) volume_small_pane_srt_g9_ParamLimits

0xf413,	// (0x00020214) volume_small_pane_srt_g9

0xf424,	// (0x00020225) volume_small_pane_srt_g10_ParamLimits

0xf424,	// (0x00020225) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00020571) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00020571) volume_small_pane_srt_g

0x15a8,	// (0x000123a9) query_popup_data_pane_cp2

0x5676,	// (0x00016477) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5676,	// (0x00016477) navi_navi_icon_text_pane_srt_t1

0x466e,	// (0x0001546f) navi_tabs_2_long_pane_srt

0x466e,	// (0x0001546f) navi_tabs_2_pane_srt

0x466e,	// (0x0001546f) navi_tabs_3_long_pane_srt

0x466e,	// (0x0001546f) navi_tabs_3_pane_srt

0x466e,	// (0x0001546f) navi_tabs_4_pane_srt

0x035d,	// (0x0001115e) tabs_2_active_pane_srt_ParamLimits

0x035d,	// (0x0001115e) tabs_2_active_pane_srt

0x036d,	// (0x0001116e) tabs_2_passive_pane_srt_ParamLimits

0x036d,	// (0x0001116e) tabs_2_passive_pane_srt

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp1_srt

0x5642,	// (0x00016443) bg_passive_tab_pane_g1_cp1_srt

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp1_srt

0x564b,	// (0x0001644c) bg_passive_tab_pane_g3_cp1_srt

0x143d,	// (0x0001223e) bg_active_tab_pane_cp1_srt_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp1_srt

0x5654,	// (0x00016455) tabs_2_active_pane_srt_g1

0xd0e7,	// (0x0001dee8) tabs_2_active_pane_srt_t1_ParamLimits

0xd0e7,	// (0x0001dee8) tabs_2_active_pane_srt_t1

0x5642,	// (0x00016443) bg_active_tab_pane_g1_cp1_srt

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp1_srt

0x564b,	// (0x0001644c) bg_active_tab_pane_g3_cp1_srt

0x032a,	// (0x0001112b) tabs_3_active_pane_srt_ParamLimits

0x032a,	// (0x0001112b) tabs_3_active_pane_srt

0x033b,	// (0x0001113c) tabs_3_passive_pane_cp_srt_ParamLimits

0x033b,	// (0x0001113c) tabs_3_passive_pane_cp_srt

0x034c,	// (0x0001114d) tabs_3_passive_pane_srt_ParamLimits

0x034c,	// (0x0001114d) tabs_3_passive_pane_srt

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3e4b,	// (0x00014c4c) bg_passive_tab_pane_cp2_srt

0x2fe5,	// (0x00013de6) bg_passive_tab_pane_g1_cp2_srt

0x2a78,	// (0x00013879) bg_passive_tab_pane_g2_cp2_srt

0x2fee,	// (0x00013def) bg_passive_tab_pane_g3_cp2_srt

0x143d,	// (0x0001223e) bg_active_tab_pane_cp2_srt_ParamLimits

0x143d,	// (0x0001223e) bg_active_tab_pane_cp2_srt

0x5628,	// (0x00016429) tabs_3_active_pane_srt_g1

0xd0d1,	// (0x0001ded2) tabs_3_active_pane_srt_t1_ParamLimits

0xd0d1,	// (0x0001ded2) tabs_3_active_pane_srt_t1

0x2fe5,	// (0x00013de6) bg_active_tab_pane_g1_cp2_srt

0x2a78,	// (0x00013879) bg_active_tab_pane_g2_cp2_srt

0x2fee,	// (0x00013def) bg_active_tab_pane_g3_cp2_srt

0x02e2,	// (0x000110e3) tabs_4_active_pane_srt_ParamLimits

0x02e2,	// (0x000110e3) tabs_4_active_pane_srt

0x02f4,	// (0x000110f5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x02f4,	// (0x000110f5) tabs_4_passive_pane_cp2_srt

0x3143,	// (0x00013f44) aid_size_cell_toolbar

0x51e9,	// (0x00015fea) main_idle_act_pane_ParamLimits

0x338a,	// (0x0001418b) popup_large_graphic_colour_window_ParamLimits

0xc6ad,	// (0x0001d4ae) popup_toolbar_window_ParamLimits

0xc6ad,	// (0x0001d4ae) popup_toolbar_window

0x5416,	// (0x00016217) list_single_graphic_2heading_pane_ParamLimits

0x5416,	// (0x00016217) list_single_graphic_2heading_pane

0x24f8,	// (0x000132f9) aid_size_cell_apps_grid_lsc_pane

0x250a,	// (0x0001330b) aid_size_cell_apps_grid_prt_pane

0x31bd,	// (0x00013fbe) bg_wml_button_pane_cp1_ParamLimits

0x31bd,	// (0x00013fbe) bg_wml_button_pane_cp1

0xcbaf,	// (0x0001d9b0) form_midp_field_text_pane_t1_ParamLimits

0x3e4b,	// (0x00014c4c) input_focus_pane_cp050_ParamLimits

0x4071,	// (0x00014e72) list_midp_form_text_pane_ParamLimits

0x4023,	// (0x00014e24) input_focus_pane_cp051_ParamLimits

0x4037,	// (0x00014e38) list_midp_choice_pane_ParamLimits

0xcb66,	// (0x0001d967) list_single_2graphic_pane_cp3_ParamLimits

0xcb66,	// (0x0001d967) list_single_2graphic_pane_cp3

0x64e8,	// (0x000172e9) list_single_midp_graphic_pane_ParamLimits

0x64e8,	// (0x000172e9) list_single_midp_graphic_pane

0xf469,	// (0x0002026a) list_single_graphic_2heading_pane_g1_ParamLimits

0xf469,	// (0x0002026a) list_single_graphic_2heading_pane_g1

0xf475,	// (0x00020276) list_single_graphic_2heading_pane_g4_ParamLimits

0xf475,	// (0x00020276) list_single_graphic_2heading_pane_g4

0xf481,	// (0x00020282) list_single_graphic_2heading_pane_g5_ParamLimits

0xf481,	// (0x00020282) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x000205c4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x000205c4) list_single_graphic_2heading_pane_g

0xf48d,	// (0x0002028e) list_single_graphic_2heading_pane_t1_ParamLimits

0xf48d,	// (0x0002028e) list_single_graphic_2heading_pane_t1

0xf4a1,	// (0x000202a2) list_single_graphic_2heading_pane_t2_ParamLimits

0xf4a1,	// (0x000202a2) list_single_graphic_2heading_pane_t2

0xf4bd,	// (0x000202be) list_single_graphic_2heading_pane_t3_ParamLimits

0xf4bd,	// (0x000202be) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x000205cb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x000205cb) list_single_graphic_2heading_pane_t

0x3c3f,	// (0x00014a40) bg_popup_sub_pane_cp2

0x3c69,	// (0x00014a6a) grid_toobar_pane

0xf4d5,	// (0x000202d6) cell_toolbar_pane_ParamLimits

0xf4d5,	// (0x000202d6) cell_toolbar_pane

0x3cd3,	// (0x00014ad4) cell_toolbar_pane_g1_ParamLimits

0x3cd3,	// (0x00014ad4) cell_toolbar_pane_g1

0x3ce7,	// (0x00014ae8) cell_toolbar_pane_g2_ParamLimits

0x3ce7,	// (0x00014ae8) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x000205d9) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x000205d9) cell_toolbar_pane_g

0x3d09,	// (0x00014b0a) grid_highlight_pane_cp2_ParamLimits

0x3d09,	// (0x00014b0a) grid_highlight_pane_cp2

0x3d23,	// (0x00014b24) toolbar_button_pane

0x3d2f,	// (0x00014b30) toolbar_button_pane_g1

0x3d37,	// (0x00014b38) toolbar_button_pane_g2

0x3d3f,	// (0x00014b40) toolbar_button_pane_g3

0x3d47,	// (0x00014b48) toolbar_button_pane_g4

0x3d4f,	// (0x00014b50) toolbar_button_pane_g5

0x3d57,	// (0x00014b58) toolbar_button_pane_g6

0x3d5f,	// (0x00014b60) toolbar_button_pane_g7

0x3d67,	// (0x00014b68) toolbar_button_pane_g8

0x3d6f,	// (0x00014b70) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x000205de) toolbar_button_pane_g

0xf50d,	// (0x0002030e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xf50d,	// (0x0002030e) list_single_2graphic_pane_g1_cp3

0xac06,	// (0x0001ba07) list_single_2graphic_pane_g2_cp3_ParamLimits

0xac06,	// (0x0001ba07) list_single_2graphic_pane_g2_cp3

0xf519,	// (0x0002031a) list_single_2graphic_pane_g3_cp3

0xf521,	// (0x00020322) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf521,	// (0x00020322) list_single_2graphic_pane_g4_cp3

0xf52d,	// (0x0002032e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xf52d,	// (0x0002032e) list_single_2graphic_pane_t1_cp3

0xf548,	// (0x00020349) list_single_midp_graphic_pane_g2_ParamLimits

0xf548,	// (0x00020349) list_single_midp_graphic_pane_g2

0x314b,	// (0x00013f4c) aid_zoom_text_primary

0x3153,	// (0x00013f54) aid_zoom_text_secondary

0x30a2,	// (0x00013ea3) status_small_pane_g7_ParamLimits

0x30a2,	// (0x00013ea3) status_small_pane_g7

0x30c5,	// (0x00013ec6) status_small_pane_t1_ParamLimits

0xb282,	// (0x0001c083) title_pane_g2

0x0003,

0xf56a,	// (0x0002036b) title_pane_g

0xb51a,	// (0x0001c31b) aid_size_cell_colour_1_pane_ParamLimits

0xb51a,	// (0x0001c31b) aid_size_cell_colour_1_pane

0xb52e,	// (0x0001c32f) aid_size_cell_colour_2_pane_ParamLimits

0xb52e,	// (0x0001c32f) aid_size_cell_colour_2_pane

0xb542,	// (0x0001c343) aid_size_cell_colour_3_pane_ParamLimits

0xb542,	// (0x0001c343) aid_size_cell_colour_3_pane

0xb556,	// (0x0001c357) aid_size_cell_colour_4_pane_ParamLimits

0xb556,	// (0x0001c357) aid_size_cell_colour_4_pane

0xefea,	// (0x0001fdeb) title_pane_stacon_g1_ParamLimits

0xefea,	// (0x0001fdeb) title_pane_stacon_g1

0x4454,	// (0x00015255) popup_note_wait_window_g3_ParamLimits

0x4454,	// (0x00015255) popup_note_wait_window_g3

0x44cb,	// (0x000152cc) popup_note_wait_window_t5_ParamLimits

0x44cb,	// (0x000152cc) popup_note_wait_window_t5

0xe87a,	// (0x0001f67b) main_feb_china_hwr_fs_writing_pane

0xc048,	// (0x0001ce49) popup_feb_china_hwr_fs_window_ParamLimits

0xc048,	// (0x0001ce49) popup_feb_china_hwr_fs_window

0xac17,	// (0x0001ba18) aid_size_cell_hwr_fs_ParamLimits

0xac17,	// (0x0001ba18) aid_size_cell_hwr_fs

0x3e4b,	// (0x00014c4c) bg_popup_sub_pane_cp3_ParamLimits

0x3e4b,	// (0x00014c4c) bg_popup_sub_pane_cp3

0xac2c,	// (0x0001ba2d) grid_hwr_fs_pane_ParamLimits

0xac2c,	// (0x0001ba2d) grid_hwr_fs_pane

0x0024,	// (0x00010e25) linegrid_hwr_fs_pane_ParamLimits

0x0024,	// (0x00010e25) linegrid_hwr_fs_pane

0xac44,	// (0x0001ba45) cell_hwr_fs_pane_ParamLimits

0xac44,	// (0x0001ba45) cell_hwr_fs_pane

0x3e57,	// (0x00014c58) linegrid_hwr_fs_pane_g1_ParamLimits

0x3e57,	// (0x00014c58) linegrid_hwr_fs_pane_g1

0xcb3a,	// (0x0001d93b) linegrid_hwr_fs_pane_g2_ParamLimits

0xcb3a,	// (0x0001d93b) linegrid_hwr_fs_pane_g2

0x3e75,	// (0x00014c76) linegrid_hwr_fs_pane_g3_ParamLimits

0x3e75,	// (0x00014c76) linegrid_hwr_fs_pane_g3

0x0058,	// (0x00010e59) linegrid_hwr_fs_pane_g4_ParamLimits

0x0058,	// (0x00010e59) linegrid_hwr_fs_pane_g4

0x0076,	// (0x00010e77) linegrid_hwr_fs_pane_g5_ParamLimits

0x0076,	// (0x00010e77) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00020604) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00020604) linegrid_hwr_fs_pane_g

0x3e81,	// (0x00014c82) cell_hwr_fs_pane_g1_ParamLimits

0x3e81,	// (0x00014c82) cell_hwr_fs_pane_g1

0x3b76,	// (0x00014977) cell_hwr_fs_pane_g2_ParamLimits

0x3b76,	// (0x00014977) cell_hwr_fs_pane_g2

0xcb4c,	// (0x0001d94d) cell_hwr_fs_pane_g3_ParamLimits

0xcb4c,	// (0x0001d94d) cell_hwr_fs_pane_g3

0xcb59,	// (0x0001d95a) cell_hwr_fs_pane_g4_ParamLimits

0xcb59,	// (0x0001d95a) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0002060f) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0002060f) cell_hwr_fs_pane_g

0xac6a,	// (0x0001ba6b) cell_hwr_fs_pane_t1

0xe87a,	// (0x0001f67b) grid_highlight_pane_cp6

0xe87a,	// (0x0001f67b) main_idle_act2_pane

0x22ae,	// (0x000130af) aid_inside_area_popup_secondary

0xcc50,	// (0x0001da51) aid_inside_area_window_primary_ParamLimits

0xcc50,	// (0x0001da51) aid_inside_area_window_primary

0x578f,	// (0x00016590) ai2_news_ticker_pane

0x5797,	// (0x00016598) aid_size_cell_ai1_link_ParamLimits

0x5797,	// (0x00016598) aid_size_cell_ai1_link

0x57b1,	// (0x000165b2) popup_ai2_data_window_ParamLimits

0x57b1,	// (0x000165b2) popup_ai2_data_window

0x57cf,	// (0x000165d0) popup_ai2_link_window_ParamLimits

0x57cf,	// (0x000165d0) popup_ai2_link_window

0x3e4b,	// (0x00014c4c) bg_popup_sub_pane_cp4_ParamLimits

0x3e4b,	// (0x00014c4c) bg_popup_sub_pane_cp4

0x57e5,	// (0x000165e6) grid_ai2_link_pane_ParamLimits

0x57e5,	// (0x000165e6) grid_ai2_link_pane

0x57fc,	// (0x000165fd) popup_ai2_link_window_g1_ParamLimits

0x57fc,	// (0x000165fd) popup_ai2_link_window_g1

0x5808,	// (0x00016609) popup_ai2_link_window_g2_ParamLimits

0x5808,	// (0x00016609) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x000207db) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x000207db) popup_ai2_link_window_g

0x5819,	// (0x0001661a) ai2_mp_button_pane

0x5821,	// (0x00016622) ai2_mp_volume_pane

0x4023,	// (0x00014e24) bg_popup_sub_pane_cp5_ParamLimits

0x4023,	// (0x00014e24) bg_popup_sub_pane_cp5

0x5829,	// (0x0001662a) heading_ai2_gene_pane_ParamLimits

0x5829,	// (0x0001662a) heading_ai2_gene_pane

0x5835,	// (0x00016636) list_ai2_gene_pane_ParamLimits

0x5835,	// (0x00016636) list_ai2_gene_pane

0x587d,	// (0x0001667e) cell_ai2_link_pane_ParamLimits

0x587d,	// (0x0001667e) cell_ai2_link_pane

0x5893,	// (0x00016694) cell_ai2_link_pane_g1

0xe87a,	// (0x0001f67b) grid_highlight_pane_cp7

0x039a,	// (0x0001119b) ai2_mp_volume_pane_g1

0x5966,	// (0x00016767) ai2_mp_volume_pane_g2

0x58db,	// (0x000166dc) list_ai2_gene_pane_t1

0x596e,	// (0x0001676f) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x000207f4) ai2_mp_volume_pane_g

0x03a2,	// (0x000111a3) volume_small_pane_cp3

0x5976,	// (0x00016777) aid_size_cell_ai2_button

0x597e,	// (0x0001677f) grid_ai2_button_pane

0x5987,	// (0x00016788) cell_ai2_button_pane_ParamLimits

0x5987,	// (0x00016788) cell_ai2_button_pane

0xe870,	// (0x0001f671) cell_ai2_button_pane_g1

0xe87a,	// (0x0001f67b) grid_highlight_pane_cp8

0x5926,	// (0x00016727) ai2_gene_pane_t1_ParamLimits

0x5926,	// (0x00016727) ai2_gene_pane_t1

0xbfb8,	// (0x0001cdb9) aid_height_parent_landscape

0xce32,	// (0x0001dc33) aid_height_set_list

0x51e9,	// (0x00015fea) aid_size_parent

0x55b0,	// (0x000163b1) aid_size_cell_graphic_pane_ParamLimits

0x5845,	// (0x00016646) popup_ai2_data_window_g1_ParamLimits

0x5845,	// (0x00016646) popup_ai2_data_window_g1

0x5851,	// (0x00016652) ai2_news_ticker_pane_g1

0x5859,	// (0x0001665a) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x000207e0) ai2_news_ticker_pane_g

0x5861,	// (0x00016662) ai2_news_ticker_pane_t1

0x586f,	// (0x00016670) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x000207e5) ai2_news_ticker_pane_t

0x589c,	// (0x0001669d) heading_ai2_gene_pane_g1

0x58a4,	// (0x000166a5) heading_ai2_gene_pane_t1_ParamLimits

0x58a4,	// (0x000166a5) heading_ai2_gene_pane_t1

0x58b9,	// (0x000166ba) list_highlight_pane_cp6

0x58c1,	// (0x000166c2) ai2_gene_pane_ParamLimits

0x58c1,	// (0x000166c2) ai2_gene_pane

0x58e9,	// (0x000166ea) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x000207ea) list_ai2_gene_pane_t

0x58f7,	// (0x000166f8) list_highlight_pane_cp8_ParamLimits

0x58f7,	// (0x000166f8) list_highlight_pane_cp8

0x5908,	// (0x00016709) ai2_gene_pane_g1_ParamLimits

0x5908,	// (0x00016709) ai2_gene_pane_g1

0x591a,	// (0x0001671b) ai2_gene_pane_g2_ParamLimits

0x591a,	// (0x0001671b) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x000207ef) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x000207ef) ai2_gene_pane_g

0x19de,	// (0x000127df) scroll_pane_cp12

0xabc5,	// (0x0001b9c6) control_pane_t3_ParamLimits

0xabc5,	// (0x0001b9c6) control_pane_t3

0x30b6,	// (0x00013eb7) status_small_pane_g8_ParamLimits

0x30b6,	// (0x00013eb7) status_small_pane_g8

0xc0ea,	// (0x0001ceeb) popup_find_window_ParamLimits

0xc397,	// (0x0001d198) popup_note_image_window_ParamLimits

0x3ca5,	// (0x00014aa6) list_double2_graphic_pane_vc_g1_ParamLimits

0x3ca5,	// (0x00014aa6) list_double2_graphic_pane_vc_g1

0x2da0,	// (0x00013ba1) list_double2_graphic_pane_vc_g2_ParamLimits

0x2da0,	// (0x00013ba1) list_double2_graphic_pane_vc_g2

0x3cb1,	// (0x00014ab2) list_double2_graphic_pane_vc_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x000205d2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x000205d2) list_double2_graphic_pane_vc_g

0x3cbd,	// (0x00014abe) list_double2_graphic_pane_vc_t1_ParamLimits

0x3cbd,	// (0x00014abe) list_double2_graphic_pane_vc_t1

0x2da0,	// (0x00013ba1) list_single_heading_pane_vc_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_heading_pane_vc_g1

0x3cb1,	// (0x00014ab2) list_single_heading_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_heading_pane_vc_g

0x3d77,	// (0x00014b78) list_single_heading_pane_vc_t1_ParamLimits

0x3d77,	// (0x00014b78) list_single_heading_pane_vc_t1

0x3d8d,	// (0x00014b8e) list_single_heading_pane_vc_t2_ParamLimits

0x3d8d,	// (0x00014b8e) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x000205f3) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x000205f3) list_single_heading_pane_vc_t

0x3da1,	// (0x00014ba2) list_setting_number_pane_vc_g1_ParamLimits

0x3da1,	// (0x00014ba2) list_setting_number_pane_vc_g1

0x3dad,	// (0x00014bae) list_setting_number_pane_vc_g2_ParamLimits

0x3dad,	// (0x00014bae) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x000205f8) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x000205f8) list_setting_number_pane_vc_g

0x3db9,	// (0x00014bba) list_setting_number_pane_vc_t1_ParamLimits

0x3db9,	// (0x00014bba) list_setting_number_pane_vc_t1

0x3dcd,	// (0x00014bce) list_setting_number_pane_vc_t2_ParamLimits

0x3dcd,	// (0x00014bce) list_setting_number_pane_vc_t2

0x3de9,	// (0x00014bea) list_setting_number_pane_vc_t3_ParamLimits

0x3de9,	// (0x00014bea) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x000205fd) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x000205fd) list_setting_number_pane_vc_t

0x3e11,	// (0x00014c12) set_value_pane_vc_ParamLimits

0x3e11,	// (0x00014c12) set_value_pane_vc

0x5416,	// (0x00016217) list_double2_graphic_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double2_graphic_pane_vc

0x5416,	// (0x00016217) list_double2_large_graphic_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double2_large_graphic_pane_vc

0x5416,	// (0x00016217) list_double2_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double2_pane_vc

0x5416,	// (0x00016217) list_double_graphic_heading_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_graphic_heading_pane_vc

0x5416,	// (0x00016217) list_double_graphic_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_graphic_pane_vc

0x5416,	// (0x00016217) list_double_heading_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_heading_pane_vc

0x5416,	// (0x00016217) list_double_large_graphic_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_large_graphic_pane_vc

0x5416,	// (0x00016217) list_double_number_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_number_pane_vc

0x5416,	// (0x00016217) list_double_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_pane_vc

0x5416,	// (0x00016217) list_double_time_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_double_time_pane_vc

0x5416,	// (0x00016217) list_setting_number_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_setting_number_pane_vc

0x5416,	// (0x00016217) list_setting_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_setting_pane_vc

0x5416,	// (0x00016217) list_single_graphic_heading_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_single_graphic_heading_pane_vc

0x5416,	// (0x00016217) list_single_heading_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_single_heading_pane_vc

0x5416,	// (0x00016217) list_single_number_heading_pane_vc_ParamLimits

0x5416,	// (0x00016217) list_single_number_heading_pane_vc

0x3ca5,	// (0x00014aa6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3ca5,	// (0x00014aa6) list_double_graphic_heading_pane_vc_g1

0x59ba,	// (0x000167bb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x59ba,	// (0x000167bb) list_double_graphic_heading_pane_vc_g2

0x59c6,	// (0x000167c7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x59c6,	// (0x000167c7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x000207fb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000207fb) list_double_graphic_heading_pane_vc_g

0x59d2,	// (0x000167d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x59d2,	// (0x000167d3) list_double_graphic_heading_pane_vc_t1

0x3d77,	// (0x00014b78) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3d77,	// (0x00014b78) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00020802) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00020802) list_double_graphic_heading_pane_vc_t

0x3da1,	// (0x00014ba2) list_setting_pane_vc_g1_ParamLimits

0x3da1,	// (0x00014ba2) list_setting_pane_vc_g1

0x3dad,	// (0x00014bae) list_setting_pane_vc_g2_ParamLimits

0x3dad,	// (0x00014bae) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x000205f8) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x000205f8) list_setting_pane_vc_g

0x5bef,	// (0x000169f0) list_setting_pane_vc_t1_ParamLimits

0x5bef,	// (0x000169f0) list_setting_pane_vc_t1

0x5c03,	// (0x00016a04) list_setting_pane_vc_t2_ParamLimits

0x5c03,	// (0x00016a04) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00020845) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00020845) list_setting_pane_vc_t

0x3e11,	// (0x00014c12) set_value_pane_cp_vc_ParamLimits

0x3e11,	// (0x00014c12) set_value_pane_cp_vc

0x2da0,	// (0x00013ba1) list_single_number_heading_pane_vc_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_single_number_heading_pane_vc_g1

0x3cb1,	// (0x00014ab2) list_single_number_heading_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000203e5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000203e5) list_single_number_heading_pane_vc_g

0x3d77,	// (0x00014b78) list_single_number_heading_pane_vc_t1_ParamLimits

0x3d77,	// (0x00014b78) list_single_number_heading_pane_vc_t1

0x5c25,	// (0x00016a26) list_single_number_heading_pane_vc_t2_ParamLimits

0x5c25,	// (0x00016a26) list_single_number_heading_pane_vc_t2

0x5c39,	// (0x00016a3a) list_single_number_heading_pane_vc_t3_ParamLimits

0x5c39,	// (0x00016a3a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0002084a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002084a) list_single_number_heading_pane_vc_t

0x3ca5,	// (0x00014aa6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3ca5,	// (0x00014aa6) list_single_graphic_heading_pane_vc_g1

0x2da0,	// (0x00013ba1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2da0,	// (0x00013ba1) list_single_graphic_heading_pane_vc_g4

0x3cb1,	// (0x00014ab2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3cb1,	// (0x00014ab2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x000205d2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x000205d2) list_single_graphic_heading_pane_vc_g

0x3d77,	// (0x00014b78) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3d77,	// (0x00014b78) list_single_graphic_heading_pane_vc_t1

0x5c4b,	// (0x00016a4c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5c4b,	// (0x00016a4c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00020851) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00020851) list_single_graphic_heading_pane_vc_t

0x2da0,	// (0x00013ba1) list_double2_pane_vc_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_double2_pane_vc_g1

0x3cb1,	// (0x00014ab2) list_double2_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x000203e5) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x000203e5) list_double2_pane_vc_g

0x5c5f,	// (0x00016a60) list_double2_pane_vc_t1_ParamLimits

0x5c5f,	// (0x00016a60) list_double2_pane_vc_t1

0x5c75,	// (0x00016a76) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5c75,	// (0x00016a76) list_double2_large_graphic_pane_vc_g1

0x2da0,	// (0x00013ba1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2da0,	// (0x00013ba1) list_double2_large_graphic_pane_vc_g2

0x3cb1,	// (0x00014ab2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00020402) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00020402) list_double2_large_graphic_pane_vc_g

0x5c81,	// (0x00016a82) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c81,	// (0x00016a82) list_double2_large_graphic_pane_vc_t1

0x5c97,	// (0x00016a98) list_double_time_pane_vc_g1_ParamLimits

0x5c97,	// (0x00016a98) list_double_time_pane_vc_g1

0x5ca3,	// (0x00016aa4) list_double_time_pane_vc_g2_ParamLimits

0x5ca3,	// (0x00016aa4) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00020856) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00020856) list_double_time_pane_vc_g

0x5caf,	// (0x00016ab0) list_double_time_pane_vc_t1_ParamLimits

0x5caf,	// (0x00016ab0) list_double_time_pane_vc_t1

0x5cc8,	// (0x00016ac9) list_double_time_pane_vc_t2_ParamLimits

0x5cc8,	// (0x00016ac9) list_double_time_pane_vc_t2

0x5ce8,	// (0x00016ae9) list_double_time_pane_vc_t3_ParamLimits

0x5ce8,	// (0x00016ae9) list_double_time_pane_vc_t3

0x5d00,	// (0x00016b01) list_double_time_pane_vc_t4_ParamLimits

0x5d00,	// (0x00016b01) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0002085b) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002085b) list_double_time_pane_vc_t

0x2da0,	// (0x00013ba1) list_double_pane_vc_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_double_pane_vc_g1

0x3cb1,	// (0x00014ab2) list_double_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x000203e5) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x000203e5) list_double_pane_vc_g

0x5d14,	// (0x00016b15) list_double_pane_vc_t1_ParamLimits

0x5d14,	// (0x00016b15) list_double_pane_vc_t1

0x5d26,	// (0x00016b27) list_double_pane_vc_t2_ParamLimits

0x5d26,	// (0x00016b27) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00020864) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00020864) list_double_pane_vc_t

0x2da0,	// (0x00013ba1) list_double_number_pane_vc_g1_ParamLimits

0x2da0,	// (0x00013ba1) list_double_number_pane_vc_g1

0x3cb1,	// (0x00014ab2) list_double_number_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00014ab2) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x000203e5) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x000203e5) list_double_number_pane_vc_g

0x5d3e,	// (0x00016b3f) list_double_number_pane_vc_t1_ParamLimits

0x5d3e,	// (0x00016b3f) list_double_number_pane_vc_t1

0x5d52,	// (0x00016b53) list_double_number_pane_vc_t2_ParamLimits

0x5d52,	// (0x00016b53) list_double_number_pane_vc_t2

0x5d26,	// (0x00016b27) list_double_number_pane_vc_t3_ParamLimits

0x5d26,	// (0x00016b27) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00020869) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00020869) list_double_number_pane_vc_t

0x5d64,	// (0x00016b65) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5d64,	// (0x00016b65) list_double_large_graphic_pane_vc_g1

0x5d70,	// (0x00016b71) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5d70,	// (0x00016b71) list_double_large_graphic_pane_vc_g2

0x3cb1,	// (0x00014ab2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3cb1,	// (0x00014ab2) list_double_large_graphic_pane_vc_g3

0x5d7f,	// (0x00016b80) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5d7f,	// (0x00016b80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00020870) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00020870) list_double_large_graphic_pane_vc_g

0x5d8b,	// (0x00016b8c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5d8b,	// (0x00016b8c) list_double_large_graphic_pane_vc_t1

0x5d9d,	// (0x00016b9e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5d9d,	// (0x00016b9e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00020879) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00020879) list_double_large_graphic_pane_vc_t

0x59ba,	// (0x000167bb) list_double_heading_pane_vc_g1_ParamLimits

0x59ba,	// (0x000167bb) list_double_heading_pane_vc_g1

0x59c6,	// (0x000167c7) list_double_heading_pane_vc_g2_ParamLimits

0x59c6,	// (0x000167c7) list_double_heading_pane_vc_g2

0x0001,

0xfa7d,	// (0x0002087e) list_double_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x0002087e) list_double_heading_pane_vc_g

0x5db6,	// (0x00016bb7) list_double_heading_pane_vc_t1_ParamLimits

0x5db6,	// (0x00016bb7) list_double_heading_pane_vc_t1

0x3d77,	// (0x00014b78) list_double_heading_pane_vc_t2_ParamLimits

0x3d77,	// (0x00014b78) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00020883) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00020883) list_double_heading_pane_vc_t

0x3ca5,	// (0x00014aa6) list_double_graphic_pane_vc_g1_ParamLimits

0x3ca5,	// (0x00014aa6) list_double_graphic_pane_vc_g1

0x5dca,	// (0x00016bcb) list_double_graphic_pane_vc_g2_ParamLimits

0x5dca,	// (0x00016bcb) list_double_graphic_pane_vc_g2

0x5dd9,	// (0x00016bda) list_double_graphic_pane_vc_g3_ParamLimits

0x5dd9,	// (0x00016bda) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00020888) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00020888) list_double_graphic_pane_vc_g

0x5de5,	// (0x00016be6) list_double_graphic_pane_vc_t1_ParamLimits

0x5de5,	// (0x00016be6) list_double_graphic_pane_vc_t1

0x5d26,	// (0x00016b27) list_double_graphic_pane_vc_t2_ParamLimits

0x5d26,	// (0x00016b27) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x0002088f) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002088f) list_double_graphic_pane_vc_t

0xecfc,	// (0x0001fafd) aid_size_cell_fastswap

0xa919,	// (0x0001b71a) aid_size_cell_touch_ParamLimits

0xa919,	// (0x0001b71a) aid_size_cell_touch

0xee83,	// (0x0001fc84) popup_fast_swap_wide_window_ParamLimits

0xee83,	// (0x0001fc84) popup_fast_swap_wide_window

0xaa68,	// (0x0001b869) touch_pane_ParamLimits

0xaa68,	// (0x0001b869) touch_pane

0x1eed,	// (0x00012cee) button_value_adjust_pane_cp2

0x1ef5,	// (0x00012cf6) button_value_adjust_pane_cp4

0x1f1b,	// (0x00012d1c) form_field_data_pane_cp2

0xba46,	// (0x0001c847) form_field_data_wide_pane_cp2

0x25ca,	// (0x000133cb) bg_scroll_pane_ParamLimits

0xf146,	// (0x0001ff47) scroll_handle_pane_ParamLimits

0xf15a,	// (0x0001ff5b) scroll_sc2_down_pane_ParamLimits

0xf15a,	// (0x0001ff5b) scroll_sc2_down_pane

0x25fb,	// (0x000133fc) scroll_sc2_up_pane_ParamLimits

0x25fb,	// (0x000133fc) scroll_sc2_up_pane

0xd228,	// (0x0001e029) grid_wheel_folder_pane_g1_ParamLimits

0xd228,	// (0x0001e029) grid_wheel_folder_pane_g1

0xf324,	// (0x00020125) clock_nsta_pane_cp2_ParamLimits

0xf324,	// (0x00020125) clock_nsta_pane_cp2

0xbecd,	// (0x0001ccce) listscroll_midp_pane_ParamLimits

0xbede,	// (0x0001ccdf) midp_canvas_pane

0x3131,	// (0x00013f32) nsta_clock_indic_pane

0x318f,	// (0x00013f90) listscroll_form_pane_vc

0x31ab,	// (0x00013fac) listscroll_set_pane_vc_ParamLimits

0x31ab,	// (0x00013fac) listscroll_set_pane_vc

0xc834,	// (0x0001d635) clock_nsta_pane

0xc85e,	// (0x0001d65f) indicator_nsta_pane

0x3c3f,	// (0x00014a40) bg_popup_sub_pane_cp2_ParamLimits

0x3c53,	// (0x00014a54) find_pane_cp2_ParamLimits

0x3c53,	// (0x00014a54) find_pane_cp2

0x3c69,	// (0x00014a6a) grid_toobar_pane_ParamLimits

0x3e1f,	// (0x00014c20) list_form_gen_pane_vc_ParamLimits

0x3e1f,	// (0x00014c20) list_form_gen_pane_vc

0x3e35,	// (0x00014c36) scroll_pane_cp8_vc_ParamLimits

0x3e35,	// (0x00014c36) scroll_pane_cp8_vc

0x3eb1,	// (0x00014cb2) data_form_wide_pane_vc_ParamLimits

0x3eb1,	// (0x00014cb2) data_form_wide_pane_vc

0x3ebd,	// (0x00014cbe) form_field_data_wide_pane_vc_g1

0x3ec5,	// (0x00014cc6) form_field_data_wide_pane_vc_t1_ParamLimits

0x3ec5,	// (0x00014cc6) form_field_data_wide_pane_vc_t1

0x1fe3,	// (0x00012de4) input_focus_pane_cp6_vc_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_cp6_vc

0xcbf4,	// (0x0001d9f5) list_midp_pane_ParamLimits

0x561c,	// (0x0001641d) scroll_pane_cp16_ParamLimits

0x561c,	// (0x0001641d) scroll_pane_cp16

0x4228,	// (0x00015029) button_value_adjust_pane_ParamLimits

0x4228,	// (0x00015029) button_value_adjust_pane

0xce43,	// (0x0001dc44) button_value_adjust_pane_cp6_ParamLimits

0xce43,	// (0x0001dc44) button_value_adjust_pane_cp6

0xcf85,	// (0x0001dd86) settings_code_pane_cp_ParamLimits

0xcf85,	// (0x0001dd86) settings_code_pane_cp

0xe870,	// (0x0001f671) cell_touch_pane_g1

0xe870,	// (0x0001f671) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0002051b) cell_touch_pane_g

0xd0fd,	// (0x0001defe) cell_touch_pane_cp_ParamLimits

0xd0fd,	// (0x0001defe) cell_touch_pane_cp

0xd119,	// (0x0001df1a) cell_touch_pane_ParamLimits

0xd119,	// (0x0001df1a) cell_touch_pane

0xe870,	// (0x0001f671) scroll_sc2_down_pane_g1

0xe870,	// (0x0001f671) scroll_sc2_up_pane_g1

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp4_vc

0x59e6,	// (0x000167e7) list_set_graphic_pane_vc_g1_ParamLimits

0x59e6,	// (0x000167e7) list_set_graphic_pane_vc_g1

0x59f2,	// (0x000167f3) list_set_graphic_pane_vc_g2_ParamLimits

0x59f2,	// (0x000167f3) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00020807) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00020807) list_set_graphic_pane_vc_g

0x59fe,	// (0x000167ff) text_primary_small_cp13_vc_ParamLimits

0x59fe,	// (0x000167ff) text_primary_small_cp13_vc

0x5a16,	// (0x00016817) list_set_graphic_pane_vc_ParamLimits

0x5a16,	// (0x00016817) list_set_graphic_pane_vc

0xe87a,	// (0x0001f67b) input_focus_pane_cp2_vc

0xe870,	// (0x0001f671) setting_code_pane_vc_g1

0x5a2a,	// (0x0001682b) setting_code_pane_vc_t1

0x5a38,	// (0x00016839) set_text_pane_vc_t1_ParamLimits

0x5a38,	// (0x00016839) set_text_pane_vc_t1

0xe87a,	// (0x0001f67b) input_focus_pane_cp1_vc

0x5a56,	// (0x00016857) list_set_text_pane_vc

0xe870,	// (0x0001f671) setting_text_pane_vc_g1

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp2_vc

0x5a60,	// (0x00016861) setting_slider_graphic_pane_vc_g1

0x5a68,	// (0x00016869) setting_slider_graphic_pane_vc_t1

0x5a76,	// (0x00016877) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002080c) setting_slider_graphic_pane_vc_t

0x5a84,	// (0x00016885) slider_set_pane_cp_vc

0x5a8c,	// (0x0001688d) slider_set_pane_vc_g1

0x5a95,	// (0x00016896) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00020811) slider_set_pane_vc_g

0x211f,	// (0x00012f20) set_opt_bg_pane_g1_copy1

0x2127,	// (0x00012f28) set_opt_bg_pane_g2_copy1

0x5ac1,	// (0x000168c2) set_opt_bg_pane_g3_copy1

0x2137,	// (0x00012f38) set_opt_bg_pane_g4_copy1

0x213f,	// (0x00012f40) set_opt_bg_pane_g5_copy1

0x2147,	// (0x00012f48) set_opt_bg_pane_g6_copy1

0x5acb,	// (0x000168cc) set_opt_bg_pane_g7_copy1

0x5ad5,	// (0x000168d6) set_opt_bg_pane_g8_copy1

0x5adf,	// (0x000168e0) set_opt_bg_pane_g9_copy1

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp_vc

0x5ae9,	// (0x000168ea) setting_slider_pane_vc_t1

0x5a68,	// (0x00016869) setting_slider_pane_vc_t2

0x5a76,	// (0x00016877) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00020820) setting_slider_pane_vc_t

0x5a84,	// (0x00016885) slider_set_pane_vc

0x009a,	// (0x00010e9b) volume_set_pane_vc_g1

0x00a3,	// (0x00010ea4) volume_set_pane_vc_g2

0x00ac,	// (0x00010ead) volume_set_pane_vc_g3

0x00b5,	// (0x00010eb6) volume_set_pane_vc_g4

0x00be,	// (0x00010ebf) volume_set_pane_vc_g5

0x00c7,	// (0x00010ec8) volume_set_pane_vc_g6

0x00d0,	// (0x00010ed1) volume_set_pane_vc_g7

0x00d9,	// (0x00010eda) volume_set_pane_vc_g8

0x00e2,	// (0x00010ee3) volume_set_pane_vc_g9

0x00eb,	// (0x00010eec) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00020827) volume_set_pane_vc_g

0x5af8,	// (0x000168f9) volume_set_pane_vc

0x5b00,	// (0x00016901) button_value_adjust_pane_cp1_vc

0x5b0a,	// (0x0001690b) list_highlight_pane_cp2_vc

0x5b13,	// (0x00016914) list_set_pane_vc_ParamLimits

0x5b13,	// (0x00016914) list_set_pane_vc

0x5b7d,	// (0x0001697e) main_pane_set_vc_t1_ParamLimits

0x5b7d,	// (0x0001697e) main_pane_set_vc_t1

0x5b92,	// (0x00016993) main_pane_set_vc_t2_ParamLimits

0x5b92,	// (0x00016993) main_pane_set_vc_t2

0x5ba4,	// (0x000169a5) main_pane_set_vc_t3_ParamLimits

0x5ba4,	// (0x000169a5) main_pane_set_vc_t3

0x5bb8,	// (0x000169b9) main_pane_set_vc_t4_ParamLimits

0x5bb8,	// (0x000169b9) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0002083c) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0002083c) main_pane_set_vc_t

0x5bcc,	// (0x000169cd) setting_code_pane_vc_ParamLimits

0x5bcc,	// (0x000169cd) setting_code_pane_vc

0x5bdd,	// (0x000169de) setting_slider_graphic_pane_vc

0x5bdd,	// (0x000169de) setting_slider_pane_vc

0x5bdd,	// (0x000169de) setting_text_pane_vc

0x5bdd,	// (0x000169de) setting_volume_pane_vc

0x5be7,	// (0x000169e8) scroll_pane_cp121_vc

0x1edb,	// (0x00012cdc) set_content_pane_vc

0x5df7,	// (0x00016bf8) button_value_adjust_pane_g1

0x5e00,	// (0x00016c01) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00020894) button_value_adjust_pane_g

0x5e09,	// (0x00016c0a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5e09,	// (0x00016c0a) form_field_slider_wide_pane_vc_t1

0x5e1d,	// (0x00016c1e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5e1d,	// (0x00016c1e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00020899) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00020899) form_field_slider_wide_pane_vc_t

0x143d,	// (0x0001223e) input_focus_pane_cp10_vc_ParamLimits

0x143d,	// (0x0001223e) input_focus_pane_cp10_vc

0x5e2f,	// (0x00016c30) slider_cont_pane_cp1_vc_ParamLimits

0x5e2f,	// (0x00016c30) slider_cont_pane_cp1_vc

0x5a8c,	// (0x0001688d) slider_form_pane_g1_cp2

0x5a95,	// (0x00016896) slider_form_pane_g2_cp2

0x5e48,	// (0x00016c49) form_field_slider_pane_vc_t3

0x5e56,	// (0x00016c57) form_field_slider_pane_vc_t4

0x5e64,	// (0x00016c65) slider_form_pane_vc_ParamLimits

0x5e64,	// (0x00016c65) slider_form_pane_vc

0x5e71,	// (0x00016c72) form_field_slider_pane_vc_t1_ParamLimits

0x5e71,	// (0x00016c72) form_field_slider_pane_vc_t1

0x5e1d,	// (0x00016c1e) form_field_slider_pane_vc_t2_ParamLimits

0x5e1d,	// (0x00016c1e) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x000208a9) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x000208a9) form_field_slider_pane_vc_t

0x143d,	// (0x0001223e) input_focus_pane_cp9_vc_ParamLimits

0x143d,	// (0x0001223e) input_focus_pane_cp9_vc

0x5e8d,	// (0x00016c8e) slider_cont_pane_vc_ParamLimits

0x5e8d,	// (0x00016c8e) slider_cont_pane_vc

0x5e9f,	// (0x00016ca0) list_form_graphic_pane_cp_vc_ParamLimits

0x5e9f,	// (0x00016ca0) list_form_graphic_pane_cp_vc

0x3ebd,	// (0x00014cbe) form_field_popup_wide_pane_vc_g1

0x5eb4,	// (0x00016cb5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5eb4,	// (0x00016cb5) form_field_popup_wide_pane_vc_t1

0x1fe3,	// (0x00012de4) input_focus_pane_cp8_vc_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_cp8_vc

0x5ecb,	// (0x00016ccc) list_form_wide_pane_vc_ParamLimits

0x5ecb,	// (0x00016ccc) list_form_wide_pane_vc

0x5ed7,	// (0x00016cd8) list_form_graphic_pane_vc_g1

0x5edf,	// (0x00016ce0) list_form_graphic_pane_vc_t1_ParamLimits

0x5edf,	// (0x00016ce0) list_form_graphic_pane_vc_t1

0x11a7,	// (0x00011fa8) list_highlight_pane_cp5_vc_ParamLimits

0x11a7,	// (0x00011fa8) list_highlight_pane_cp5_vc

0x5efb,	// (0x00016cfc) list_form_graphic_pane_vc_ParamLimits

0x5efb,	// (0x00016cfc) list_form_graphic_pane_vc

0x3ebd,	// (0x00014cbe) form_field_popup_pane_vc_g1

0x5f11,	// (0x00016d12) form_field_popup_pane_vc_t1_ParamLimits

0x5f11,	// (0x00016d12) form_field_popup_pane_vc_t1

0x1fe3,	// (0x00012de4) input_focus_pane_cp7_vc_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_cp7_vc

0x5f28,	// (0x00016d29) list_form_pane_vc_ParamLimits

0x5f28,	// (0x00016d29) list_form_pane_vc

0x5f34,	// (0x00016d35) data_form_pane_vc_t1_ParamLimits

0x5f34,	// (0x00016d35) data_form_pane_vc_t1

0x211f,	// (0x00012f20) input_focus_pane_vc_g1

0x2127,	// (0x00012f28) input_focus_pane_vc_g2

0x212f,	// (0x00012f30) input_focus_pane_vc_g3

0x2137,	// (0x00012f38) input_focus_pane_vc_g4

0x213f,	// (0x00012f40) input_focus_pane_vc_g5

0x2147,	// (0x00012f48) input_focus_pane_vc_g6

0x214f,	// (0x00012f50) input_focus_pane_vc_g7

0x2157,	// (0x00012f58) input_focus_pane_vc_g8

0x215f,	// (0x00012f60) input_focus_pane_vc_g9

0xe870,	// (0x0001f671) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x000204a4) input_focus_pane_vc_g

0x3eb1,	// (0x00014cb2) data_form_pane_vc_ParamLimits

0x3eb1,	// (0x00014cb2) data_form_pane_vc

0x3ebd,	// (0x00014cbe) form_field_data_pane_vc_g1

0x5f51,	// (0x00016d52) form_field_data_pane_vc_t1_ParamLimits

0x5f51,	// (0x00016d52) form_field_data_pane_vc_t1

0x1fe3,	// (0x00012de4) input_focus_pane_vc_ParamLimits

0x1fe3,	// (0x00012de4) input_focus_pane_vc

0x5f6b,	// (0x00016d6c) button_value_adjust_pane_cp3_vc

0x5f73,	// (0x00016d74) button_value_adjust_pane_cp5_vc

0x5f7b,	// (0x00016d7c) form_field_data_pane_vc_ParamLimits

0x5f7b,	// (0x00016d7c) form_field_data_pane_vc

0x5f96,	// (0x00016d97) form_field_data_pane_vc_cp2

0x5f9e,	// (0x00016d9f) form_field_data_wide_pane_vc_ParamLimits

0x5f9e,	// (0x00016d9f) form_field_data_wide_pane_vc

0x5fb8,	// (0x00016db9) form_field_data_wide_pane_vc_cp2

0x5fc0,	// (0x00016dc1) form_field_popup_pane_vc_ParamLimits

0x5fc0,	// (0x00016dc1) form_field_popup_pane_vc

0x5fdb,	// (0x00016ddc) form_field_popup_wide_pane_vc_ParamLimits

0x5fdb,	// (0x00016ddc) form_field_popup_wide_pane_vc

0x5ff5,	// (0x00016df6) form_field_slider_pane_vc_ParamLimits

0x5ff5,	// (0x00016df6) form_field_slider_pane_vc

0x6008,	// (0x00016e09) form_field_slider_wide_pane_vc_ParamLimits

0x6008,	// (0x00016e09) form_field_slider_wide_pane_vc

0xd137,	// (0x0001df38) grid_touch_1_pane_ParamLimits

0xd137,	// (0x0001df38) grid_touch_1_pane

0xd14b,	// (0x0001df4c) grid_touch_2_pane_ParamLimits

0xd14b,	// (0x0001df4c) grid_touch_2_pane

0x60df,	// (0x00016ee0) touch_pane_g1_ParamLimits

0x60df,	// (0x00016ee0) touch_pane_g1

0x6041,	// (0x00016e42) cell_app_pane_cp_wide_ParamLimits

0x6041,	// (0x00016e42) cell_app_pane_cp_wide

0x6052,	// (0x00016e53) grid_popup_fast_wide_pane_ParamLimits

0x6052,	// (0x00016e53) grid_popup_fast_wide_pane

0x6066,	// (0x00016e67) scroll_pane_cp19_ParamLimits

0x6066,	// (0x00016e67) scroll_pane_cp19

0xe87a,	// (0x0001f67b) bg_popup_window_pane_cp20

0x607a,	// (0x00016e7b) listscroll_popup_fast_wide_pane

0x231b,	// (0x0001311c) grid_indicator_nsta_pane

0x6082,	// (0x00016e83) clock_nsta_pane_g1

0x608b,	// (0x00016e8c) clock_nsta_pane_t1

0xd177,	// (0x0001df78) cell_indicator_nsta_pane_ParamLimits

0xd177,	// (0x0001df78) cell_indicator_nsta_pane

0x60df,	// (0x00016ee0) cell_indicator_nsta_pane_g1

0xd194,	// (0x0001df95) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x000208b3) cell_indicator_nsta_pane_g

0x6102,	// (0x00016f03) clock_nsta_pane_cp

0x610a,	// (0x00016f0b) indicator_nsta_pane_cp

0x6112,	// (0x00016f13) nsta_clock_indic_pane_g1

0x128d,	// (0x0001208e) grid_indicator_pane

0x26ed,	// (0x000134ee) scroll_pane_cp29

0xf270,	// (0x00020071) indicator_nsta_pane_cp2_ParamLimits

0xf270,	// (0x00020071) indicator_nsta_pane_cp2

0x11a7,	// (0x00011fa8) main_apps_wheel_pane

0x40ab,	// (0x00014eac) form_midp_field_text_pane_ParamLimits

0x41fa,	// (0x00014ffb) scroll_bar_cp050_ParamLimits

0x617b,	// (0x00016f7c) cell_indicator_pane_ParamLimits

0x617b,	// (0x00016f7c) cell_indicator_pane

0x6193,	// (0x00016f94) cell_indicator_pane_g1

0xd1aa,	// (0x0001dfab) grid_wheel_folder_pane_ParamLimits

0xd1aa,	// (0x0001dfab) grid_wheel_folder_pane

0xd1b8,	// (0x0001dfb9) list_wheel_apps_pane_ParamLimits

0xd1b8,	// (0x0001dfb9) list_wheel_apps_pane

0xd1c6,	// (0x0001dfc7) main_apps_wheel_pane_g1_ParamLimits

0xd1c6,	// (0x0001dfc7) main_apps_wheel_pane_g1

0xd1d6,	// (0x0001dfd7) main_apps_wheel_pane_g2_ParamLimits

0xd1d6,	// (0x0001dfd7) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x000208cf) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x000208cf) main_apps_wheel_pane_g

0xd1e6,	// (0x0001dfe7) main_apps_wheel_pane_t1_ParamLimits

0xd1e6,	// (0x0001dfe7) main_apps_wheel_pane_t1

0xd1fe,	// (0x0001dfff) list_wheel_apps_pane_g1

0xd206,	// (0x0001e007) list_wheel_apps_pane_g2

0xd20e,	// (0x0001e00f) list_wheel_apps_pane_g3

0xd216,	// (0x0001e017) list_wheel_apps_pane_g4

0xd21e,	// (0x0001e01f) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x000208d4) list_wheel_apps_pane_g

0x2cab,	// (0x00013aac) navi_icon_text_pane

0xc72d,	// (0x0001d52e) aid_fill_nsta

0xd23b,	// (0x0001e03c) navi_icon_text_pane_g1

0xd247,	// (0x0001e048) navi_icon_text_pane_t1

0xbeb5,	// (0x0001ccb6) list_set_graphic_pane_t1_ParamLimits

0xbeb5,	// (0x0001ccb6) list_set_graphic_pane_t1

0x494b,	// (0x0001574c) popup_midp_note_alarm_window_t6_ParamLimits

0x494b,	// (0x0001574c) popup_midp_note_alarm_window_t6

0x495d,	// (0x0001575e) popup_midp_note_alarm_window_t7_ParamLimits

0x495d,	// (0x0001575e) popup_midp_note_alarm_window_t7

0x496f,	// (0x00015770) popup_midp_note_alarm_window_t8_ParamLimits

0x496f,	// (0x00015770) popup_midp_note_alarm_window_t8

0x4981,	// (0x00015782) popup_midp_note_alarm_window_t9_ParamLimits

0x4981,	// (0x00015782) popup_midp_note_alarm_window_t9

0x4993,	// (0x00015794) popup_midp_note_alarm_window_t10_ParamLimits

0x4993,	// (0x00015794) popup_midp_note_alarm_window_t10

0x49a5,	// (0x000157a6) popup_midp_note_alarm_window_t11_ParamLimits

0x49a5,	// (0x000157a6) popup_midp_note_alarm_window_t11

0x49b7,	// (0x000157b8) scroll_pane_cp17_ParamLimits

0x49b7,	// (0x000157b8) scroll_pane_cp17

0x009a,	// (0x00010e9b) volume_small_pane_cp_g1

0x03ab,	// (0x000111ac) volume_small_pane_cp_g2

0x03b4,	// (0x000111b5) volume_small_pane_cp_g3

0x03bd,	// (0x000111be) volume_small_pane_cp_g4

0x03c6,	// (0x000111c7) volume_small_pane_cp_g5

0x03cf,	// (0x000111d0) volume_small_pane_cp_g6

0x03d8,	// (0x000111d9) volume_small_pane_cp_g7

0x03e1,	// (0x000111e2) volume_small_pane_cp_g8

0x03ea,	// (0x000111eb) volume_small_pane_cp_g9

0x03f3,	// (0x000111f4) volume_small_pane_cp_g10

0x2f0c,	// (0x00013d0d) midp_ticker_pane_g1_ParamLimits

0x2f18,	// (0x00013d19) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0002056c) midp_ticker_pane_g_ParamLimits

0xbf75,	// (0x0001cd76) midp_ticker_pane_t1_ParamLimits

0xc74d,	// (0x0001d54e) aid_fill_nsta_2

0x41e6,	// (0x00014fe7) list_form2_midp_pane

0x53d1,	// (0x000161d2) midp_editing_number_pane_ParamLimits

0x53e0,	// (0x000161e1) midp_ticker_pane_ParamLimits

0x628c,	// (0x0001708d) form2_midp_field_pane

0x62b0,	// (0x000170b1) scroll_pane_cp51

0x62d0,	// (0x000170d1) form2_midp_button_pane_ParamLimits

0x62d0,	// (0x000170d1) form2_midp_button_pane

0x62e2,	// (0x000170e3) form2_midp_content_pane_ParamLimits

0x62e2,	// (0x000170e3) form2_midp_content_pane

0x62fc,	// (0x000170fd) form2_midp_field_choice_group_pane

0x6304,	// (0x00017105) form2_midp_field_pane_g1

0x630c,	// (0x0001710d) form2_midp_field_pane_g2

0x6314,	// (0x00017115) form2_midp_field_pane_g3

0x631c,	// (0x0001711d) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x000208f9) form2_midp_field_pane_g

0x6324,	// (0x00017125) form2_midp_gauge_slider_pane

0x632c,	// (0x0001712d) form2_midp_gauge_wait_pane

0x6334,	// (0x00017135) form2_midp_image_pane_ParamLimits

0x6334,	// (0x00017135) form2_midp_image_pane

0x634f,	// (0x00017150) form2_midp_label_pane_ParamLimits

0x634f,	// (0x00017150) form2_midp_label_pane

0xd275,	// (0x0001e076) form2_midp_label_pane_cp_ParamLimits

0xd275,	// (0x0001e076) form2_midp_label_pane_cp

0x638f,	// (0x00017190) form2_midp_string_pane_ParamLimits

0x638f,	// (0x00017190) form2_midp_string_pane

0xd296,	// (0x0001e097) form2_midp_text_pane_ParamLimits

0xd296,	// (0x0001e097) form2_midp_text_pane

0x63c2,	// (0x000171c3) form2_midp_time_pane

0x63d2,	// (0x000171d3) input_focus_pane_cp51_ParamLimits

0x63d2,	// (0x000171d3) input_focus_pane_cp51

0x63ea,	// (0x000171eb) form2_midp_label_pane_t1_ParamLimits

0x63ea,	// (0x000171eb) form2_midp_label_pane_t1

0xd2b7,	// (0x0001e0b8) form2_mdip_text_pane_t1_ParamLimits

0xd2b7,	// (0x0001e0b8) form2_mdip_text_pane_t1

0x6452,	// (0x00017253) form2_midp_time_pane_t1

0x646d,	// (0x0001726e) form2_midp_gauge_slider_pane_t1

0xd2d6,	// (0x0001e0d7) form2_midp_gauge_slider_pane_t2

0xd2e8,	// (0x0001e0e9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x00020902) form2_midp_gauge_slider_pane_t

0x64a3,	// (0x000172a4) form2_midp_slider_pane

0x64af,	// (0x000172b0) form2_midp_gauge_wait_pane_t1

0x64bd,	// (0x000172be) form2_midp_wait_pane_ParamLimits

0x64bd,	// (0x000172be) form2_midp_wait_pane

0xcb66,	// (0x0001d967) list_single_2graphic_pane_cp4_ParamLimits

0xcb66,	// (0x0001d967) list_single_2graphic_pane_cp4

0xd2fa,	// (0x0001e0fb) list_single_midp_graphic_pane_cp_ParamLimits

0xd2fa,	// (0x0001e0fb) list_single_midp_graphic_pane_cp

0xe87a,	// (0x0001f67b) list_highlight_pane_cp20

0x650c,	// (0x0001730d) list_single_2graphic_pane_g1_cp4

0x589c,	// (0x0001669d) list_single_2graphic_pane_g2_cp4

0x6514,	// (0x00017315) list_single_2graphic_pane_t1_cp4

0x11a7,	// (0x00011fa8) list_highlight_pane_cp21

0x6523,	// (0x00017324) list_single_midp_graphic_pane_g4_cp

0x6532,	// (0x00017333) list_single_midp_graphic_pane_t1_cp

0xd31b,	// (0x0001e11c) form2_mdip_string_pane_t1_ParamLimits

0xd31b,	// (0x0001e11c) form2_mdip_string_pane_t1

0xe87a,	// (0x0001f67b) bg_wml_button_pane_cp2

0xe870,	// (0x0001f671) form2_midp_image_pane_g1

0x1c8f,	// (0x00012a90) list_double_large_graphic_pane_g5_ParamLimits

0x1c8f,	// (0x00012a90) list_double_large_graphic_pane_g5

0xbecd,	// (0x0001ccce) midp_form_pane_ParamLimits

0x11a7,	// (0x00011fa8) main_apps_wheel_pane_ParamLimits

0xc41d,	// (0x0001d21e) popup_preview_window_ParamLimits

0xc41d,	// (0x0001d21e) popup_preview_window

0x3789,	// (0x0001458a) popup_touch_info_window_ParamLimits

0x3789,	// (0x0001458a) popup_touch_info_window

0x37ab,	// (0x000145ac) popup_touch_menu_window_ParamLimits

0x37ab,	// (0x000145ac) popup_touch_menu_window

0xe866,	// (0x0001f667) bg_popup_sub_pane_cp6

0x65ec,	// (0x000173ed) list_touch_menu_pane

0x65f4,	// (0x000173f5) list_single_touch_menu_pane_ParamLimits

0x65f4,	// (0x000173f5) list_single_touch_menu_pane

0x660f,	// (0x00017410) list_single_touch_menu_pane_t1

0x11a7,	// (0x00011fa8) bg_popup_sub_pane_cp7_ParamLimits

0x11a7,	// (0x00011fa8) bg_popup_sub_pane_cp7

0x661d,	// (0x0001741e) heading_sub_pane

0x6625,	// (0x00017426) list_touch_info_pane_ParamLimits

0x6625,	// (0x00017426) list_touch_info_pane

0x6634,	// (0x00017435) list_single_touch_info_pane_ParamLimits

0x6634,	// (0x00017435) list_single_touch_info_pane

0x6646,	// (0x00017447) list_single_touch_info_pane_t1

0x6654,	// (0x00017455) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x00020910) list_single_touch_info_pane_t

0x2e2f,	// (0x00013c30) bg_popup_heading_pane_cp

0x6662,	// (0x00017463) heading_sub_pane_t1

0x3e4b,	// (0x00014c4c) bg_popup_preview_window_pane_cp_ParamLimits

0x3e4b,	// (0x00014c4c) bg_popup_preview_window_pane_cp

0x661d,	// (0x0001741e) heading_preview_pane

0x6625,	// (0x00017426) list_preview_pane_ParamLimits

0x6625,	// (0x00017426) list_preview_pane

0x66b2,	// (0x000174b3) popup_preview_window_g1

0x6634,	// (0x00017435) list_single_preview_pane_ParamLimits

0x6634,	// (0x00017435) list_single_preview_pane

0x66ba,	// (0x000174bb) list_single_preview_pane_g1

0x66c2,	// (0x000174c3) list_single_preview_pane_t1

0x6646,	// (0x00017447) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00020915) list_single_preview_pane_t

0x66d0,	// (0x000174d1) bg_popup_heading_pane_cp2_ParamLimits

0x66d0,	// (0x000174d1) bg_popup_heading_pane_cp2

0x66e6,	// (0x000174e7) heading_preview_pane_g1

0x66ee,	// (0x000174ef) heading_preview_pane_t1_ParamLimits

0x66ee,	// (0x000174ef) heading_preview_pane_t1

0x12b0,	// (0x000120b1) soft_indicator_pane_t1_ParamLimits

0x19bb,	// (0x000127bc) scroll_pane_ParamLimits

0x25e9,	// (0x000133ea) scroll_sc2_left_pane

0x25f2,	// (0x000133f3) scroll_sc2_right_pane

0x2611,	// (0x00013412) scroll_bg_pane_g1_ParamLimits

0x2626,	// (0x00013427) scroll_bg_pane_g2_ParamLimits

0x263e,	// (0x0001343f) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000204fb) scroll_bg_pane_g_ParamLimits

0x2611,	// (0x00013412) scroll_handle_pane_g1_ParamLimits

0x2660,	// (0x00013461) scroll_handle_pane_g2_ParamLimits

0x263e,	// (0x0001343f) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x00020502) scroll_handle_pane_g_ParamLimits

0x31ed,	// (0x00013fee) popup_choice_list_window_ParamLimits

0x31ed,	// (0x00013fee) popup_choice_list_window

0x3c4b,	// (0x00014a4c) choice_list_pane

0x3cfb,	// (0x00014afc) cell_toolbar_pane_t1

0x3d23,	// (0x00014b24) toolbar_button_pane_ParamLimits

0x4e87,	// (0x00015c88) ai_gene_pane_1_t2_ParamLimits

0x4e87,	// (0x00015c88) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0002071a) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0002071a) ai_gene_pane_1_t

0x670b,	// (0x0001750c) scroll_sc2_left_pane_g1

0x670b,	// (0x0001750c) scroll_sc2_right_pane_g1

0x31bd,	// (0x00013fbe) bg_popup_sub_pane_cp10

0x6715,	// (0x00017516) list_choice_list_pane

0x672c,	// (0x0001752d) list_single_choice_list_pane_ParamLimits

0x672c,	// (0x0001752d) list_single_choice_list_pane

0x6740,	// (0x00017541) list_single_choice_list_pane_g1

0x6748,	// (0x00017549) list_single_choice_list_pane_t1_ParamLimits

0x6748,	// (0x00017549) list_single_choice_list_pane_t1

0x675d,	// (0x0001755e) choice_list_pane_g1

0x6765,	// (0x00017566) choice_list_pane_t1

0xe866,	// (0x0001f667) input_focus_pane_cp11

0x24c3,	// (0x000132c4) title_pane_stacon_g2_ParamLimits

0x24c3,	// (0x000132c4) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000204e1) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000204e1) title_pane_stacon_g

0x2e2f,	// (0x00013c30) cursor_press_pane

0xc09e,	// (0x0001ce9f) popup_fep_hwr_window_ParamLimits

0xc09e,	// (0x0001ce9f) popup_fep_hwr_window

0x332d,	// (0x0001412e) popup_fep_vkb_window_ParamLimits

0x332d,	// (0x0001412e) popup_fep_vkb_window

0x6773,	// (0x00017574) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x0002093e) fep_vkb_side_pane_g_ParamLimits

0x0435,	// (0x00011236) fep_hwr_candidate_pane_ParamLimits

0x0435,	// (0x00011236) fep_hwr_candidate_pane

0x045f,	// (0x00011260) fep_hwr_side_pane_ParamLimits

0x045f,	// (0x00011260) fep_hwr_side_pane

0x0481,	// (0x00011282) fep_hwr_top_pane_ParamLimits

0x0481,	// (0x00011282) fep_hwr_top_pane

0x0499,	// (0x0001129a) fep_hwr_write_pane_ParamLimits

0x0499,	// (0x0001129a) fep_hwr_write_pane

0xfb3d,	// (0x0002093e) fep_vkb_side_pane_g

0x677b,	// (0x0001757c) fep_hwr_top_pane_g1

0x678d,	// (0x0001758e) fep_hwr_top_pane_g2

0x04d3,	// (0x000112d4) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x0002091a) fep_hwr_top_pane_g

0x04e8,	// (0x000112e9) fep_hwr_top_text_pane

0x27b5,	// (0x000135b6) fep_hwr_top_text_pane_g1

0x67c3,	// (0x000175c4) fep_hwr_top_text_pane_t1

0x05f2,	// (0x000113f3) fep_hwr_candidate_pane_g1

0x6a0e,	// (0x0001780f) fep_vkb_keypad_pane_g3_ParamLimits

0x6a0e,	// (0x0001780f) fep_vkb_keypad_pane_g3

0x6a3a,	// (0x0001783b) fep_vkb_keypad_pane_g4_ParamLimits

0x6a3a,	// (0x0001783b) fep_vkb_keypad_pane_g4

0x6ab1,	// (0x000178b2) fep_vkb_bottom_pane_g2_ParamLimits

0x6ab1,	// (0x000178b2) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00020945) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00020945) fep_vkb_bottom_pane_g

0x670b,	// (0x0001750c) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x0002094f) cell_vkb_side_pane_g

0x6b3c,	// (0x0001793d) cell_vkb_side_pane_t1

0x6b4a,	// (0x0001794b) cell_vkb_side_pane_t1_copy1

0x670b,	// (0x0001750c) bg_fep_vkb_candidate_pane_g2

0x6c8e,	// (0x00017a8f) cell_vkb_candidate_pane_ParamLimits

0x67d1,	// (0x000175d2) aid_size_cell_vkb_ParamLimits

0x67d1,	// (0x000175d2) aid_size_cell_vkb

0x6c8e,	// (0x00017a8f) cell_vkb_candidate_pane

0x0619,	// (0x0001141a) bg_popup_fep_shadow_pane_g1

0xd3b7,	// (0x0001e1b8) fep_vkb_bottom_pane_ParamLimits

0xd3b7,	// (0x0001e1b8) fep_vkb_bottom_pane

0x68a0,	// (0x000176a1) fep_vkb_candidate_pane_ParamLimits

0x68a0,	// (0x000176a1) fep_vkb_candidate_pane

0xd3e3,	// (0x0001e1e4) fep_vkb_keypad_pane_ParamLimits

0xd3e3,	// (0x0001e1e4) fep_vkb_keypad_pane

0xd40a,	// (0x0001e20b) fep_vkb_side_pane_ParamLimits

0xd40a,	// (0x0001e20b) fep_vkb_side_pane

0xd446,	// (0x0001e247) fep_vkb_top_pane_ParamLimits

0xd446,	// (0x0001e247) fep_vkb_top_pane

0x6967,	// (0x00017768) fep_vkb_top_pane_g1_ParamLimits

0x6967,	// (0x00017768) fep_vkb_top_pane_g1

0x6976,	// (0x00017777) fep_vkb_top_pane_g2_ParamLimits

0x6976,	// (0x00017777) fep_vkb_top_pane_g2

0x6985,	// (0x00017786) fep_vkb_top_pane_g3_ParamLimits

0x6985,	// (0x00017786) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00020935) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00020935) fep_vkb_top_pane_g

0x69a3,	// (0x000177a4) fep_vkb_top_text_pane_ParamLimits

0x69a3,	// (0x000177a4) fep_vkb_top_text_pane

0xd482,	// (0x0001e283) fep_vkb_side_pane_g1_ParamLimits

0xd482,	// (0x0001e283) fep_vkb_side_pane_g1

0x69fd,	// (0x000177fe) grid_vkb_side_pane_ParamLimits

0x69fd,	// (0x000177fe) grid_vkb_side_pane

0x0621,	// (0x00011422) bg_popup_fep_shadow_pane_g2

0x062a,	// (0x0001142b) bg_popup_fep_shadow_pane_g3

0x0632,	// (0x00011433) bg_popup_fep_shadow_pane_g4

0x063b,	// (0x0001143c) bg_popup_fep_shadow_pane_g5

0x0645,	// (0x00011446) bg_popup_fep_shadow_pane_g6

0x064d,	// (0x0001144e) bg_popup_fep_shadow_pane_g7

0x2137,	// (0x00012f38) bg_popup_fep_shadow_pane_g8

0x6a5c,	// (0x0001785d) grid_vkb_keypad_number_pane_ParamLimits

0x6a5c,	// (0x0001785d) grid_vkb_keypad_number_pane

0x6a70,	// (0x00017871) grid_vkb_keypad_pane_ParamLimits

0x6a70,	// (0x00017871) grid_vkb_keypad_pane

0x6a96,	// (0x00017897) fep_vkb_bottom_pane_g1_ParamLimits

0x6a96,	// (0x00017897) fep_vkb_bottom_pane_g1

0x6abf,	// (0x000178c0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6abf,	// (0x000178c0) grid_vkb_keypad_bottom_left_pane

0x6ad4,	// (0x000178d5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6ad4,	// (0x000178d5) grid_vkb_keypad_bottom_right_pane

0x6ae9,	// (0x000178ea) fep_vkb_top_text_pane_g1

0xd4c9,	// (0x0001e2ca) fep_vkb_top_text_pane_t1

0xd4db,	// (0x0001e2dc) cell_vkb_side_pane_ParamLimits

0xd4db,	// (0x0001e2dc) cell_vkb_side_pane

0x670b,	// (0x0001750c) cell_vkb_side_pane_g1

0x6b58,	// (0x00017959) cell_vkb_keypad_pane_ParamLimits

0x6b58,	// (0x00017959) cell_vkb_keypad_pane

0x6be5,	// (0x000179e6) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x00020962) bg_popup_fep_shadow_pane_g

0x065f,	// (0x00011460) cell_hwr_side_pane_g1

0x065f,	// (0x00011460) cell_hwr_side_pane_g2

0x6bef,	// (0x000179f0) cell_vkb_keypad_pane_t1

0xd4f1,	// (0x0001e2f2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd4f1,	// (0x0001e2f2) cell_vkb_keypad_bottom_left_pane

0xd506,	// (0x0001e307) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd506,	// (0x0001e307) cell_vkb_keypad_bottom_right_pane

0x670b,	// (0x0001750c) cell_vkb_keypad_bottom_left_pane_g1

0x670b,	// (0x0001750c) cell_vkb_keypad_bottom_right_pane_g1

0x6c53,	// (0x00017a54) cell_vkb_keypad_number_pane_ParamLimits

0x6c53,	// (0x00017a54) cell_vkb_keypad_number_pane

0x6c72,	// (0x00017a73) cell_vkb_keypad_number_pane_g1

0x6c7c,	// (0x00017a7d) cell_vkb_keypad_number_pane_g2

0x6c85,	// (0x00017a86) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x00020954) cell_vkb_keypad_number_pane_g

0x6bef,	// (0x000179f0) cell_vkb_keypad_number_pane_t1

0x6caf,	// (0x00017ab0) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x00020975) cell_hwr_side_pane_g

0x6cc8,	// (0x00017ac9) cell_hwr_side_pane_t1

0x0669,	// (0x0001146a) cell_hwr_side_pane_t1_copy1

0x0677,	// (0x00011478) cell_hwr_candidate_pane_g1

0x06a6,	// (0x000114a7) cell_hwr_candidate_pane_t1

0x670b,	// (0x0001750c) cell_vkb_candidate_pane_g2

0x6d0c,	// (0x00017b0d) cell_vkb_candidate_pane_t1

0x03fc,	// (0x000111fd) bg_popup_fep_shadow_pane_ParamLimits

0x03fc,	// (0x000111fd) bg_popup_fep_shadow_pane

0x04b3,	// (0x000112b4) bg_fep_hwr_top_pane_g4

0x679f,	// (0x000175a0) bg_hwr_side_pane_g1_ParamLimits

0x679f,	// (0x000175a0) bg_hwr_side_pane_g1

0xadf7,	// (0x0001bbf8) cell_hwr_side_pane_ParamLimits

0xadf7,	// (0x0001bbf8) cell_hwr_side_pane

0x0563,	// (0x00011364) fep_hwr_write_pane_g1_ParamLimits

0x0563,	// (0x00011364) fep_hwr_write_pane_g1

0x0570,	// (0x00011371) fep_hwr_write_pane_g2_ParamLimits

0x0570,	// (0x00011371) fep_hwr_write_pane_g2

0x057d,	// (0x0001137e) fep_hwr_write_pane_g3_ParamLimits

0x057d,	// (0x0001137e) fep_hwr_write_pane_g3

0xae17,	// (0x0001bc18) fep_hwr_write_pane_g4_ParamLimits

0xae17,	// (0x0001bc18) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x00020921) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x00020921) fep_hwr_write_pane_g

0x04b3,	// (0x000112b4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x04b3,	// (0x000112b4) bg_fep_hwr_candidate_pane_g2

0x05a0,	// (0x000113a1) cell_hwr_candidate_pane_ParamLimits

0x05a0,	// (0x000113a1) cell_hwr_candidate_pane

0x05f2,	// (0x000113f3) fep_hwr_candidate_pane_g1_ParamLimits

0x67ff,	// (0x00017600) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67ff,	// (0x00017600) bg_popup_fep_shadow_pane_cp2

0x6995,	// (0x00017796) fep_vkb_top_pane_g4_ParamLimits

0x6995,	// (0x00017796) fep_vkb_top_pane_g4

0x69db,	// (0x000177dc) fep_vkb_side_pane_g2_ParamLimits

0x69db,	// (0x000177dc) fep_vkb_side_pane_g2

0xb96a,	// (0x0001c76b) list_setting_pane_t4_ParamLimits

0xb96a,	// (0x0001c76b) list_setting_pane_t4

0xb9e6,	// (0x0001c7e7) list_setting_number_pane_t5_ParamLimits

0xb9e6,	// (0x0001c7e7) list_setting_number_pane_t5

0x27e7,	// (0x000135e8) list_double_heading_pane_cp2_ParamLimits

0x27e7,	// (0x000135e8) list_double_heading_pane_cp2

0x2009,	// (0x00012e0a) list_double_heading_pane_g1_cp2_ParamLimits

0x2009,	// (0x00012e0a) list_double_heading_pane_g1_cp2

0x2015,	// (0x00012e16) list_double_heading_pane_g2_cp2_ParamLimits

0x2015,	// (0x00012e16) list_double_heading_pane_g2_cp2

0x6d1a,	// (0x00017b1b) list_double_heading_pane_t1_cp2_ParamLimits

0x6d1a,	// (0x00017b1b) list_double_heading_pane_t1_cp2

0x6d30,	// (0x00017b31) list_double_heading_pane_t2_cp2_ParamLimits

0x6d30,	// (0x00017b31) list_double_heading_pane_t2_cp2

0xe85e,	// (0x0001f65f) aid_value_unit2

0xeea7,	// (0x0001fca8) popup_preview_fixed_window

0x144b,	// (0x0001224c) bg_popup_preview_window_pane_cp02

0x6d42,	// (0x00017b43) list_preview_fixed_pane

0x6d88,	// (0x00017b89) list_empty_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_empty_pane_fp

0x6d88,	// (0x00017b89) list_single_cale_day_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_cale_day_pane_fp

0x6d88,	// (0x00017b89) list_single_graphic_heading_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_graphic_heading_pane_fp

0x6d88,	// (0x00017b89) list_single_graphic_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_graphic_pane_fp

0x6d88,	// (0x00017b89) list_single_heading_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_heading_pane_fp

0x6d88,	// (0x00017b89) list_single_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_pane_fp

0x6da1,	// (0x00017ba2) list_single_pane_fp_g1_ParamLimits

0x6da1,	// (0x00017ba2) list_single_pane_fp_g1

0x6dad,	// (0x00017bae) list_single_pane_fp_g2_ParamLimits

0x6dad,	// (0x00017bae) list_single_pane_fp_g2

0x6db9,	// (0x00017bba) list_single_pane_fp_g3_ParamLimits

0x6db9,	// (0x00017bba) list_single_pane_fp_g3

0x6dcd,	// (0x00017bce) list_single_pane_fp_g4_ParamLimits

0x6dcd,	// (0x00017bce) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x00020988) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x00020988) list_single_pane_fp_g

0x6dd9,	// (0x00017bda) list_single_pane_fp_t1_ParamLimits

0x6dd9,	// (0x00017bda) list_single_pane_fp_t1

0x6df0,	// (0x00017bf1) list_single_graphic_pane_fp_g1_ParamLimits

0x6df0,	// (0x00017bf1) list_single_graphic_pane_fp_g1

0x6da1,	// (0x00017ba2) list_single_graphic_pane_fp_g2_ParamLimits

0x6da1,	// (0x00017ba2) list_single_graphic_pane_fp_g2

0x6dad,	// (0x00017bae) list_single_graphic_pane_fp_g3_ParamLimits

0x6dad,	// (0x00017bae) list_single_graphic_pane_fp_g3

0x6db9,	// (0x00017bba) list_single_graphic_pane_fp_g4_ParamLimits

0x6db9,	// (0x00017bba) list_single_graphic_pane_fp_g4

0x6dcd,	// (0x00017bce) list_single_graphic_pane_fp_g5_ParamLimits

0x6dcd,	// (0x00017bce) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x00020991) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x00020991) list_single_graphic_pane_fp_g

0x6dfc,	// (0x00017bfd) list_single_graphic_pane_fp_t1_ParamLimits

0x6dfc,	// (0x00017bfd) list_single_graphic_pane_fp_t1

0x6df0,	// (0x00017bf1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6df0,	// (0x00017bf1) list_single_graphic_heading_pane_fp_g1

0x6da1,	// (0x00017ba2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6da1,	// (0x00017ba2) list_single_graphic_heading_pane_fp_g2

0x6dad,	// (0x00017bae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6dad,	// (0x00017bae) list_single_graphic_heading_pane_fp_g3

0x6db9,	// (0x00017bba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6db9,	// (0x00017bba) list_single_graphic_heading_pane_fp_g4

0x6dcd,	// (0x00017bce) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6dcd,	// (0x00017bce) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020991) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020991) list_single_graphic_heading_pane_fp_g

0x6e12,	// (0x00017c13) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e12,	// (0x00017c13) list_single_graphic_heading_pane_fp_t1

0x6e28,	// (0x00017c29) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e28,	// (0x00017c29) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x0002099c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x0002099c) list_single_graphic_heading_pane_fp_t

0x6e3a,	// (0x00017c3b) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e3a,	// (0x00017c3b) list_single_cale_day_pane_fp_g1

0x6e72,	// (0x00017c73) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e72,	// (0x00017c73) list_single_cale_day_pane_fp_g2

0x6e7e,	// (0x00017c7f) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e7e,	// (0x00017c7f) list_single_cale_day_pane_fp_g3

0x6ea6,	// (0x00017ca7) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ea6,	// (0x00017ca7) list_single_cale_day_pane_fp_g4

0x6eca,	// (0x00017ccb) list_single_cale_day_pane_fp_g5_ParamLimits

0x6eca,	// (0x00017ccb) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x000209a1) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x000209a1) list_single_cale_day_pane_fp_g

0x6eee,	// (0x00017cef) list_single_cale_day_pane_fp_t1_ParamLimits

0x6eee,	// (0x00017cef) list_single_cale_day_pane_fp_t1

0x6f14,	// (0x00017d15) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f14,	// (0x00017d15) list_single_cale_day_pane_fp_t2

0x6f2d,	// (0x00017d2e) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f2d,	// (0x00017d2e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x000209ac) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x000209ac) list_single_cale_day_pane_fp_t

0x6da1,	// (0x00017ba2) list_empty_pane_fp_g1_ParamLimits

0x6da1,	// (0x00017ba2) list_empty_pane_fp_g1

0x6f46,	// (0x00017d47) list_empty_pane_fp_t1

0x6f54,	// (0x00017d55) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x000209b3) list_empty_pane_fp_t

0x6da1,	// (0x00017ba2) list_single_heading_pane_fp_g1_ParamLimits

0x6da1,	// (0x00017ba2) list_single_heading_pane_fp_g1

0x6dad,	// (0x00017bae) list_single_heading_pane_fp_g2_ParamLimits

0x6dad,	// (0x00017bae) list_single_heading_pane_fp_g2

0x6db9,	// (0x00017bba) list_single_heading_pane_fp_g3_ParamLimits

0x6db9,	// (0x00017bba) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x000209b8) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x000209b8) list_single_heading_pane_fp_g

0x6f62,	// (0x00017d63) list_single_heading_pane_fp_t1_ParamLimits

0x6f62,	// (0x00017d63) list_single_heading_pane_fp_t1

0x6f74,	// (0x00017d75) list_single_heading_pane_fp_t2_ParamLimits

0x6f74,	// (0x00017d75) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x000209bf) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x000209bf) list_single_heading_pane_fp_t

0x235a,	// (0x0001315b) aid_size_cell_fast

0x13bd,	// (0x000121be) soft_indicator_pane_cp1_t1

0x2397,	// (0x00013198) cell_app_pane_cp2_ParamLimits

0x2397,	// (0x00013198) cell_app_pane_cp2

0x041e,	// (0x0001121f) fep_hwr_candidate_drop_down_list_pane

0x060c,	// (0x0001140d) fep_hwr_candidate_pane_g3_ParamLimits

0x060c,	// (0x0001140d) fep_hwr_candidate_pane_g3

0xd9e9,	// (0x0001e7ea) fep_hwr_candidate_pane_g4_ParamLimits

0xd9e9,	// (0x0001e7ea) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0002092e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0002092e) fep_hwr_candidate_pane_g

0x688f,	// (0x00017690) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x688f,	// (0x00017690) fep_vkb_candidate_drop_down_list_pane

0x6cb7,	// (0x00017ab8) fep_vkb_candidate_pane_g3

0x6cbf,	// (0x00017ac0) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x0002095b) fep_vkb_candidate_pane_g

0x0677,	// (0x00011478) cell_hwr_candidate_pane_g1_ParamLimits

0x0685,	// (0x00011486) cell_hwr_candidate_pane_g3_ParamLimits

0x0685,	// (0x00011486) cell_hwr_candidate_pane_g3

0x8dad,	// (0x00019bae) cell_hwr_candidate_pane_g4_ParamLimits

0x8dad,	// (0x00019bae) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x0002097a) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x0002097a) cell_hwr_candidate_pane_g

0x6cd6,	// (0x00017ad7) cell_vkb_candidate_pane_g3_ParamLimits

0x6cd6,	// (0x00017ad7) cell_vkb_candidate_pane_g3

0x6cf1,	// (0x00017af2) cell_vkb_candidate_pane_g4_ParamLimits

0x6cf1,	// (0x00017af2) cell_vkb_candidate_pane_g4

0x6f8a,	// (0x00017d8b) cell_app_pane_cp2_g1_ParamLimits

0x6f8a,	// (0x00017d8b) cell_app_pane_cp2_g1

0x6fa8,	// (0x00017da9) cell_app_pane_cp2_g2_ParamLimits

0x6fa8,	// (0x00017da9) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x000209c4) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x000209c4) cell_app_pane_cp2_g

0x6fb4,	// (0x00017db5) cell_app_pane_cp2_t1_ParamLimits

0x6fb4,	// (0x00017db5) cell_app_pane_cp2_t1

0x1fe3,	// (0x00012de4) grid_highlight_pane_cp1_ParamLimits

0x1fe3,	// (0x00012de4) grid_highlight_pane_cp1

0x06c4,	// (0x000114c5) cell_hwr_candidate_pane_cp1_ParamLimits

0x06c4,	// (0x000114c5) cell_hwr_candidate_pane_cp1

0x0677,	// (0x00011478) fep_hwr_candidate_drop_down_list_pane_g1

0x06e8,	// (0x000114e9) fep_hwr_candidate_drop_down_list_pane_g2

0x06f5,	// (0x000114f6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x000209c9) fep_hwr_candidate_drop_down_list_pane_g

0x0702,	// (0x00011503) fep_hwr_candidate_drop_down_list_scroll_pane

0x070b,	// (0x0001150c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x070b,	// (0x0001150c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0718,	// (0x00011519) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0718,	// (0x00011519) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0725,	// (0x00011526) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0725,	// (0x00011526) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0732,	// (0x00011533) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0732,	// (0x00011533) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x074d,	// (0x0001154e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x074d,	// (0x0001154e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0768,	// (0x00011569) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0768,	// (0x00011569) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0783,	// (0x00011584) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0783,	// (0x00011584) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x079e,	// (0x0001159f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x079e,	// (0x0001159f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x000209d0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x000209d0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6fc6,	// (0x00017dc7) cell_vkb_candidate_pane_cp1_ParamLimits

0x6fc6,	// (0x00017dc7) cell_vkb_candidate_pane_cp1

0x6995,	// (0x00017796) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6995,	// (0x00017796) fep_vkb_candidate_drop_down_list_pane_g1

0x6fec,	// (0x00017ded) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6fec,	// (0x00017ded) fep_vkb_candidate_drop_down_list_pane_g2

0x6ff9,	// (0x00017dfa) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6ff9,	// (0x00017dfa) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x000209e1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x000209e1) fep_vkb_candidate_drop_down_list_pane_g

0x7006,	// (0x00017e07) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7006,	// (0x00017e07) fep_vkb_candidate_drop_down_list_scroll_pane

0x7013,	// (0x00017e14) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7013,	// (0x00017e14) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7020,	// (0x00017e21) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7020,	// (0x00017e21) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x702c,	// (0x00017e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x702c,	// (0x00017e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7038,	// (0x00017e39) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7038,	// (0x00017e39) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7059,	// (0x00017e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7059,	// (0x00017e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x707a,	// (0x00017e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x707a,	// (0x00017e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x709b,	// (0x00017e9c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x709b,	// (0x00017e9c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70bc,	// (0x00017ebd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70bc,	// (0x00017ebd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x000209e8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x000209e8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb271,	// (0x0001c072) title_pane_g1_ParamLimits

0xb282,	// (0x0001c083) title_pane_g2_ParamLimits

0xf56a,	// (0x0002036b) title_pane_g_ParamLimits

0x27a5,	// (0x000135a6) aid_call2_pane

0x27ad,	// (0x000135ae) aid_call_pane

0x27b5,	// (0x000135b6) popup_clock_analogue_window_g1

0x27b5,	// (0x000135b6) popup_clock_analogue_window_g2

0xf16f,	// (0x0001ff70) popup_clock_analogue_window_g3

0xf178,	// (0x0001ff79) popup_clock_analogue_window_g4

0xe870,	// (0x0001f671) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00020510) popup_clock_analogue_window_g

0xf180,	// (0x0001ff81) popup_clock_analogue_window_t1

0xf18e,	// (0x0001ff8f) clock_digital_number_pane_ParamLimits

0xf18e,	// (0x0001ff8f) clock_digital_number_pane

0xf19a,	// (0x0001ff9b) clock_digital_number_pane_cp02_ParamLimits

0xf19a,	// (0x0001ff9b) clock_digital_number_pane_cp02

0xf1a6,	// (0x0001ffa7) clock_digital_number_pane_cp03_ParamLimits

0xf1a6,	// (0x0001ffa7) clock_digital_number_pane_cp03

0xf1b2,	// (0x0001ffb3) clock_digital_number_pane_cp04_ParamLimits

0xf1b2,	// (0x0001ffb3) clock_digital_number_pane_cp04

0xf1be,	// (0x0001ffbf) clock_digital_separator_pane_ParamLimits

0xf1be,	// (0x0001ffbf) clock_digital_separator_pane

0xf1ca,	// (0x0001ffcb) popup_clock_digital_window_t1_ParamLimits

0xf1ca,	// (0x0001ffcb) popup_clock_digital_window_t1

0xe870,	// (0x0001f671) clock_digital_number_pane_g1

0xe870,	// (0x0001f671) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0002051b) clock_digital_number_pane_g

0xe870,	// (0x0001f671) clock_digital_separator_pane_g1

0xe870,	// (0x0001f671) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0002051b) clock_digital_separator_pane_g

0xc72d,	// (0x0001d52e) aid_fill_nsta_ParamLimits

0xc85e,	// (0x0001d65f) indicator_nsta_pane_ParamLimits

0x3ad8,	// (0x000148d9) popup_clock_analogue_window

0x3ad8,	// (0x000148d9) popup_clock_digital_window

0x231b,	// (0x0001311c) grid_indicator_nsta_pane_ParamLimits

0x6099,	// (0x00016e9a) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x000208ae) clock_nsta_pane_t

0xf13c,	// (0x0001ff3d) aid_size_max_handle

0xaabe,	// (0x0001b8bf) aid_size_min_handle

0x2e2f,	// (0x00013c30) editor_scroll_pane

0x70d7,	// (0x00017ed8) ex_editor_pane

0x22c7,	// (0x000130c8) scroll_pane_cp13

0x19e7,	// (0x000127e8) scroll_pane_cp14

0x27df,	// (0x000135e0) scroll_pane_cp36

0xbd61,	// (0x0001cb62) list_single_graphic_hl_pane_cp2_ParamLimits

0xbd61,	// (0x0001cb62) list_single_graphic_hl_pane_cp2

0xd013,	// (0x0001de14) list_single_graphic_hl_pane_ParamLimits

0xd013,	// (0x0001de14) list_single_graphic_hl_pane

0x70df,	// (0x00017ee0) aid_size_min_hl_cp1

0x70e8,	// (0x00017ee9) list_highlight_pane_cp34_ParamLimits

0x70e8,	// (0x00017ee9) list_highlight_pane_cp34

0x70f9,	// (0x00017efa) list_single_graphic_hl_pane_g1_ParamLimits

0x70f9,	// (0x00017efa) list_single_graphic_hl_pane_g1

0x19ef,	// (0x000127f0) list_single_graphic_hl_pane_g2_ParamLimits

0x19ef,	// (0x000127f0) list_single_graphic_hl_pane_g2

0x19ef,	// (0x000127f0) list_single_graphic_hl_pane_g3_ParamLimits

0x19ef,	// (0x000127f0) list_single_graphic_hl_pane_g3

0x19fb,	// (0x000127fc) list_single_graphic_hl_pane_g4_ParamLimits

0x19fb,	// (0x000127fc) list_single_graphic_hl_pane_g4

0x716c,	// (0x00017f6d) list_single_graphic_hl_pane_g5_ParamLimits

0x716c,	// (0x00017f6d) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x000209f9) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x000209f9) list_single_graphic_hl_pane_g

0xd521,	// (0x0001e322) list_single_graphic_hl_pane_t1_ParamLimits

0xd521,	// (0x0001e322) list_single_graphic_hl_pane_t1

0x713c,	// (0x00017f3d) aid_size_min_hl_cp2

0x7145,	// (0x00017f46) list_highlight_pane_cp34_cp2_ParamLimits

0x7145,	// (0x00017f46) list_highlight_pane_cp34_cp2

0x70f9,	// (0x00017efa) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x70f9,	// (0x00017efa) list_single_graphic_hl_pane_g1_cp2

0x7152,	// (0x00017f53) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7152,	// (0x00017f53) list_single_graphic_hl_pane_g2_cp2

0x715e,	// (0x00017f5f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x715e,	// (0x00017f5f) list_single_graphic_hl_pane_g3_cp2

0x19fb,	// (0x000127fc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x19fb,	// (0x000127fc) list_single_graphic_hl_pane_g4_cp2

0x716c,	// (0x00017f6d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x716c,	// (0x00017f6d) list_single_graphic_hl_pane_g5_cp2

0xaaf0,	// (0x0001b8f1) control_pane_g4_ParamLimits

0xaaf0,	// (0x0001b8f1) control_pane_g4

0x31bd,	// (0x00013fbe) bg_popup_sub_pane_cp10_ParamLimits

0x6715,	// (0x00017516) list_choice_list_pane_ParamLimits

0x6724,	// (0x00017525) scroll_pane_cp23

0x144b,	// (0x0001224c) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d42,	// (0x00017b43) list_preview_fixed_pane_ParamLimits

0x6d58,	// (0x00017b59) list_preview_fixed_pane_cp_ParamLimits

0x6d58,	// (0x00017b59) list_preview_fixed_pane_cp

0x6d64,	// (0x00017b65) popup_preview_fixed_window_g1_ParamLimits

0x6d64,	// (0x00017b65) popup_preview_fixed_window_g1

0x6d70,	// (0x00017b71) popup_preview_fixed_window_g2_ParamLimits

0x6d70,	// (0x00017b71) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x00020981) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x00020981) popup_preview_fixed_window_g

0xf0ae,	// (0x0001feaf) aid_navi_side_left_pane_ParamLimits

0xf0c3,	// (0x0001fec4) aid_navi_side_right_pane_ParamLimits

0xf0db,	// (0x0001fedc) navi_icon_pane_stacon_ParamLimits

0xf0ef,	// (0x0001fef0) navi_navi_pane_stacon_ParamLimits

0xf0db,	// (0x0001fedc) navi_text_pane_stacon_ParamLimits

0xe866,	// (0x0001f667) main_text_info_pane

0x7196,	// (0x00017f97) listscroll_text_info_pane

0x719e,	// (0x00017f9f) list_text_info_pane_ParamLimits

0x719e,	// (0x00017f9f) list_text_info_pane

0x71ad,	// (0x00017fae) scroll_pane_cp24_ParamLimits

0x71ad,	// (0x00017fae) scroll_pane_cp24

0xd537,	// (0x0001e338) list_text_info_pane_t1_ParamLimits

0xd537,	// (0x0001e338) list_text_info_pane_t1

0xc002,	// (0x0001ce03) popup_fast_swap2_window_ParamLimits

0xc002,	// (0x0001ce03) popup_fast_swap2_window

0x71f0,	// (0x00017ff1) aid_size_cell_fast2

0xe866,	// (0x0001f667) bg_popup_window_pane_cp17

0x4212,	// (0x00015013) heading_pane_cp2

0x16ab,	// (0x000124ac) listscroll_fast2_pane

0x71fa,	// (0x00017ffb) grid_fast2_pane

0x7204,	// (0x00018005) listscroll_fast2_pane_g1

0x720e,	// (0x0001800f) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x00020a04) listscroll_fast2_pane_g

0x22c7,	// (0x000130c8) scroll_pane_cp26

0x7218,	// (0x00018019) cell_fast2_pane_ParamLimits

0x7218,	// (0x00018019) cell_fast2_pane

0x722f,	// (0x00018030) cell_fast2_pane_g1

0x7238,	// (0x00018039) cell_fast2_pane_g2

0x7241,	// (0x00018042) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x00020a09) cell_fast2_pane_g

0x17a4,	// (0x000125a5) grid_highlight_pane_cp9

0x17b9,	// (0x000125ba) main_eswt_pane_ParamLimits

0x17b9,	// (0x000125ba) main_eswt_pane

0x71c2,	// (0x00017fc3) list_single_text_info_pane

0x7249,	// (0x0001804a) eswt_ctrl_button_pane

0x7249,	// (0x0001804a) eswt_ctrl_canvas_pane

0x7251,	// (0x00018052) eswt_ctrl_combo_pane

0x7249,	// (0x0001804a) eswt_ctrl_default_pane

0x7249,	// (0x0001804a) eswt_ctrl_label_pane

0x7259,	// (0x0001805a) eswt_ctrl_wait_pane

0x7261,	// (0x00018062) eswt_shell_pane

0xe866,	// (0x0001f667) listscroll_eswt_app_pane

0x7281,	// (0x00018082) popup_eswt_tasktip_window_ParamLimits

0x7281,	// (0x00018082) popup_eswt_tasktip_window

0x3e4b,	// (0x00014c4c) bg_popup_window_pane_cp18

0x7292,	// (0x00018093) eswt_control_pane_g1_ParamLimits

0x7292,	// (0x00018093) eswt_control_pane_g1

0x729f,	// (0x000180a0) eswt_control_pane_g2_ParamLimits

0x729f,	// (0x000180a0) eswt_control_pane_g2

0x72ac,	// (0x000180ad) eswt_control_pane_g3_ParamLimits

0x72ac,	// (0x000180ad) eswt_control_pane_g3

0x72b9,	// (0x000180ba) eswt_control_pane_g4_ParamLimits

0x72b9,	// (0x000180ba) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x00020a10) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x00020a10) eswt_control_pane_g

0x1fe3,	// (0x00012de4) bg_button_pane_ParamLimits

0x1fe3,	// (0x00012de4) bg_button_pane

0x17b9,	// (0x000125ba) common_borders_pane_copy2_ParamLimits

0x17b9,	// (0x000125ba) common_borders_pane_copy2

0x72c6,	// (0x000180c7) control_button_pane_g1_ParamLimits

0x72c6,	// (0x000180c7) control_button_pane_g1

0x72d2,	// (0x000180d3) control_button_pane_g2_ParamLimits

0x72d2,	// (0x000180d3) control_button_pane_g2

0x72de,	// (0x000180df) control_button_pane_g3_ParamLimits

0x72de,	// (0x000180df) control_button_pane_g3

0x0002,

0xfc18,	// (0x00020a19) control_button_pane_g_ParamLimits

0xfc18,	// (0x00020a19) control_button_pane_g

0x72f2,	// (0x000180f3) control_button_pane_t1

0x7300,	// (0x00018101) control_button_pane_t2

0x0001,

0xfc1f,	// (0x00020a20) control_button_pane_t

0x3d2f,	// (0x00014b30) bg_button_pane_g1

0x3d3f,	// (0x00014b40) bg_button_pane_g2

0x3d37,	// (0x00014b38) bg_button_pane_g3

0x3d4f,	// (0x00014b50) bg_button_pane_g4

0x3d47,	// (0x00014b48) bg_button_pane_g5

0x3d57,	// (0x00014b58) bg_button_pane_g6

0x3d5f,	// (0x00014b60) bg_button_pane_g7

0x3d6f,	// (0x00014b70) bg_button_pane_g8

0x3d67,	// (0x00014b68) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0002066e) bg_button_pane_g

0x66d0,	// (0x000174d1) common_borders_pane_ParamLimits

0x66d0,	// (0x000174d1) common_borders_pane

0x7292,	// (0x00018093) eswt_control_pane_g1_copy1_ParamLimits

0x7292,	// (0x00018093) eswt_control_pane_g1_copy1

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy1_ParamLimits

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy1

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy1_ParamLimits

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy1

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy1_ParamLimits

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy1

0x670b,	// (0x0001750c) bg_eswt_ctrl_canvas_pane_g1

0x66d0,	// (0x000174d1) common_borders_pane_cp2_ParamLimits

0x66d0,	// (0x000174d1) common_borders_pane_cp2

0x66d0,	// (0x000174d1) common_borders_pane_cp3_ParamLimits

0x66d0,	// (0x000174d1) common_borders_pane_cp3

0x730e,	// (0x0001810f) separator_horizontal_pane

0x7316,	// (0x00018117) separator_vertical_pane

0x7292,	// (0x00018093) eswt_control_pane_g1_copy2_ParamLimits

0x7292,	// (0x00018093) eswt_control_pane_g1_copy2

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy2_ParamLimits

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy2

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy2_ParamLimits

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy2

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy2_ParamLimits

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy2

0xe866,	// (0x0001f667) common_borders_pane_cp4

0x731f,	// (0x00018120) separator_horizontal_pane_g1

0x7328,	// (0x00018129) separator_horizontal_pane_g2

0x7331,	// (0x00018132) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x00020a25) separator_horizontal_pane_g

0x7292,	// (0x00018093) eswt_control_pane_g1_copy3_ParamLimits

0x7292,	// (0x00018093) eswt_control_pane_g1_copy3

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy3_ParamLimits

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy3

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy3_ParamLimits

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy3

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy3_ParamLimits

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy3

0xe866,	// (0x0001f667) common_borders_pane_cp5

0x733a,	// (0x0001813b) separator_vertical_pane_g1

0x7343,	// (0x00018144) separator_vertical_pane_g2

0x734c,	// (0x0001814d) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x00020a2c) separator_vertical_pane_g

0x7292,	// (0x00018093) eswt_control_pane_g1_copy4_ParamLimits

0x7292,	// (0x00018093) eswt_control_pane_g1_copy4

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy4_ParamLimits

0x729f,	// (0x000180a0) eswt_control_pane_g2_copy4

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy4_ParamLimits

0x72ac,	// (0x000180ad) eswt_control_pane_g3_copy4

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy4_ParamLimits

0x72b9,	// (0x000180ba) eswt_control_pane_g4_copy4

0xd559,	// (0x0001e35a) eswt_ctrl_combo_button_pane

0xd561,	// (0x0001e362) eswt_ctrl_input_pane

0xd569,	// (0x0001e36a) popup_choice_list_window_cp70

0xd571,	// (0x0001e372) eswt_ctrl_input_pane_t1

0xe866,	// (0x0001f667) input_focus_pane_cp70

0x66d0,	// (0x000174d1) bg_button_pane_cp70_ParamLimits

0x66d0,	// (0x000174d1) bg_button_pane_cp70

0xd57f,	// (0x0001e380) eswt_ctrl_combo_button_pane_g1

0x7383,	// (0x00018184) wait_bar_pane_cp70

0x3e4b,	// (0x00014c4c) bg_popup_window_pane_cp70_ParamLimits

0x3e4b,	// (0x00014c4c) bg_popup_window_pane_cp70

0x738b,	// (0x0001818c) popup_eswt_tasktip_window_t1

0x73a1,	// (0x000181a2) wait_bar_pane_cp71_ParamLimits

0x73a1,	// (0x000181a2) wait_bar_pane_cp71

0x73ad,	// (0x000181ae) grid_eswt_app_pane

0x25e9,	// (0x000133ea) scroll_pane_cp70

0xd587,	// (0x0001e388) cell_eswt_app_pane_ParamLimits

0xd587,	// (0x0001e388) cell_eswt_app_pane

0xd5b9,	// (0x0001e3ba) cell_eswt_app_pane_g1_ParamLimits

0xd5b9,	// (0x0001e3ba) cell_eswt_app_pane_g1

0xd5e8,	// (0x0001e3e9) cell_eswt_app_pane_g2_ParamLimits

0xd5e8,	// (0x0001e3e9) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x00020a33) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x00020a33) cell_eswt_app_pane_g

0xd611,	// (0x0001e412) cell_eswt_app_pane_t1_ParamLimits

0xd611,	// (0x0001e412) cell_eswt_app_pane_t1

0x7472,	// (0x00018273) grid_highlight_pane_cp70_ParamLimits

0x7472,	// (0x00018273) grid_highlight_pane_cp70

0x5333,	// (0x00016134) set_content_pane_g1

0x30df,	// (0x00013ee0) status_small_volume_pane

0x07b9,	// (0x000115ba) status_small_volume_pane_g1

0x07c1,	// (0x000115c2) volume_small2_pane

0x07ca,	// (0x000115cb) volume_small2_pane_g1

0x07d3,	// (0x000115d4) volume_small2_pane_g2

0x07dc,	// (0x000115dd) volume_small2_pane_g3

0x07e5,	// (0x000115e6) volume_small2_pane_g4

0x07ee,	// (0x000115ef) volume_small2_pane_g5

0x07f7,	// (0x000115f8) volume_small2_pane_g6

0x0800,	// (0x00011601) volume_small2_pane_g7

0x0809,	// (0x0001160a) volume_small2_pane_g8

0x0812,	// (0x00011613) volume_small2_pane_g9

0x081b,	// (0x0001161c) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x00020a38) volume_small2_pane_g

0x6ae9,	// (0x000178ea) fep_vkb_top_text_pane_g1_ParamLimits

0xd4c9,	// (0x0001e2ca) fep_vkb_top_text_pane_t1_ParamLimits

0x6d7c,	// (0x00017b7d) popup_preview_fixed_window_g3_ParamLimits

0x6d7c,	// (0x00017b7d) popup_preview_fixed_window_g3

0xc698,	// (0x0001d499) popup_toolbar_trans_pane

0xce32,	// (0x0001dc33) aid_height_set_list_ParamLimits

0x51e9,	// (0x00015fea) aid_size_parent_ParamLimits

0x31bd,	// (0x00013fbe) list_highlight_pane_cp2_ParamLimits

0x5333,	// (0x00016134) set_content_pane_g1_ParamLimits

0xd027,	// (0x0001de28) list_single_image_pane_ParamLimits

0xd027,	// (0x0001de28) list_single_image_pane

0xd643,	// (0x0001e444) aid_size_cell_image_ParamLimits

0xd643,	// (0x0001e444) aid_size_cell_image

0xd650,	// (0x0001e451) grid_single_image_pane_ParamLimits

0xd650,	// (0x0001e451) grid_single_image_pane

0x2009,	// (0x00012e0a) list_single_image_pane_g1_ParamLimits

0x2009,	// (0x00012e0a) list_single_image_pane_g1

0x2015,	// (0x00012e16) list_single_image_pane_g2_ParamLimits

0x2015,	// (0x00012e16) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x00020a4d) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x00020a4d) list_single_image_pane_g

0x7499,	// (0x0001829a) list_single_image_pane_t1_ParamLimits

0x7499,	// (0x0001829a) list_single_image_pane_t1

0xd65e,	// (0x0001e45f) cell_image_list_pane_ParamLimits

0xd65e,	// (0x0001e45f) cell_image_list_pane

0xd678,	// (0x0001e479) cell_image_list_pane_g1

0xd681,	// (0x0001e482) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x00020a52) cell_image_list_pane_g

0x74d7,	// (0x000182d8) aid_size_cell_tb_trans_pane

0x1fe3,	// (0x00012de4) bg_tb_trans_pane

0x74e9,	// (0x000182ea) grid_tb_trans_pane

0x3d2f,	// (0x00014b30) bg_tb_trans_pane_g1

0x3d3f,	// (0x00014b40) bg_tb_trans_pane_g2

0x3d37,	// (0x00014b38) bg_tb_trans_pane_g3

0x3d4f,	// (0x00014b50) bg_tb_trans_pane_g4

0x3d47,	// (0x00014b48) bg_tb_trans_pane_g5

0x3d6f,	// (0x00014b70) bg_tb_trans_pane_g6

0x3d67,	// (0x00014b68) bg_tb_trans_pane_g7

0x3d57,	// (0x00014b58) bg_tb_trans_pane_g8

0x3d5f,	// (0x00014b60) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x00020a57) bg_tb_trans_pane_g

0x74fd,	// (0x000182fe) cell_toolbar_trans_pane_ParamLimits

0x74fd,	// (0x000182fe) cell_toolbar_trans_pane

0x670b,	// (0x0001750c) cell_toolbar_trans_pane_g1

0xd259,	// (0x0001e05a) list_form2_midp_pane_t1

0xd267,	// (0x0001e068) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x000208f4) list_form2_midp_pane_t

0x62b0,	// (0x000170b1) scroll_pane_cp51_ParamLimits

0x64cd,	// (0x000172ce) form2_midp_wait_pane_g1

0x64d6,	// (0x000172d7) form2_midp_wait_pane_g2

0x64df,	// (0x000172e0) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00020909) form2_midp_wait_pane_g

0x11a7,	// (0x00011fa8) list_highlight_pane_cp21_ParamLimits

0x6523,	// (0x00017324) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6532,	// (0x00017333) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5416,	// (0x00016217) list_single_2graphic_im_pane_ParamLimits

0x5416,	// (0x00016217) list_single_2graphic_im_pane

0xd68a,	// (0x0001e48b) list_single_2graphic_im_pane_g1_ParamLimits

0xd68a,	// (0x0001e48b) list_single_2graphic_im_pane_g1

0xd69b,	// (0x0001e49c) list_single_2graphic_im_pane_g2_ParamLimits

0xd69b,	// (0x0001e49c) list_single_2graphic_im_pane_g2

0xd6a7,	// (0x0001e4a8) list_single_2graphic_im_pane_g3_ParamLimits

0xd6a7,	// (0x0001e4a8) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x00020a6a) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x00020a6a) list_single_2graphic_im_pane_g

0xd6bb,	// (0x0001e4bc) list_single_2graphic_im_pane_t1_ParamLimits

0xd6bb,	// (0x0001e4bc) list_single_2graphic_im_pane_t1

0x6d88,	// (0x00017b89) list_single_graphic_2heading_pane_fp_ParamLimits

0x6d88,	// (0x00017b89) list_single_graphic_2heading_pane_fp

0x6df0,	// (0x00017bf1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6df0,	// (0x00017bf1) list_single_graphic_2heading_pane_fp_g1

0x6da1,	// (0x00017ba2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6da1,	// (0x00017ba2) list_single_graphic_2heading_pane_fp_g2

0x6dad,	// (0x00017bae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6dad,	// (0x00017bae) list_single_graphic_2heading_pane_fp_g3

0x6db9,	// (0x00017bba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6db9,	// (0x00017bba) list_single_graphic_2heading_pane_fp_g4

0x6dcd,	// (0x00017bce) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6dcd,	// (0x00017bce) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020991) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020991) list_single_graphic_2heading_pane_fp_g

0x7591,	// (0x00018392) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7591,	// (0x00018392) list_single_graphic_2heading_pane_fp_t1

0x6e28,	// (0x00017c29) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e28,	// (0x00017c29) list_single_graphic_2heading_pane_fp_t2

0x75a7,	// (0x000183a8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x75a7,	// (0x000183a8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x00020a73) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x00020a73) list_single_graphic_2heading_pane_fp_t

0x67ab,	// (0x000175ac) fep_hwr_write_pane_g5_ParamLimits

0x67ab,	// (0x000175ac) fep_hwr_write_pane_g5

0x67b7,	// (0x000175b8) fep_hwr_write_pane_g6_ParamLimits

0x67b7,	// (0x000175b8) fep_hwr_write_pane_g6

0x7261,	// (0x00018062) eswt_shell_pane_ParamLimits

0x3e4b,	// (0x00014c4c) bg_popup_window_pane_cp18_ParamLimits

0x5107,	// (0x00015f08) heading_pane_cp70

0x738b,	// (0x0001818c) popup_eswt_tasktip_window_t1_ParamLimits

0xc783,	// (0x0001d584) aid_touch_tab_arrow_left

0xc799,	// (0x0001d59a) aid_touch_tab_arrow_right

0xb29a,	// (0x0001c09b) title_pane_g3_ParamLimits

0xb29a,	// (0x0001c09b) title_pane_g3

0x1eb2,	// (0x00012cb3) set_value_pane_g1

0xc698,	// (0x0001d499) popup_toolbar_trans_pane_ParamLimits

0x74d7,	// (0x000182d8) aid_size_cell_tb_trans_pane_ParamLimits

0x1fe3,	// (0x00012de4) bg_tb_trans_pane_ParamLimits

0x74e9,	// (0x000182ea) grid_tb_trans_pane_ParamLimits

0x144b,	// (0x0001224c) cont_note_pane_ParamLimits

0x144b,	// (0x0001224c) cont_note_pane

0x17b9,	// (0x000125ba) cont_snote2_single_text_pane_ParamLimits

0x17b9,	// (0x000125ba) cont_snote2_single_text_pane

0x17b9,	// (0x000125ba) cont_snote2_single_graphic_pane_ParamLimits

0x17b9,	// (0x000125ba) cont_snote2_single_graphic_pane

0x442e,	// (0x0001522f) cont_note_wait_pane_ParamLimits

0x442e,	// (0x0001522f) cont_note_wait_pane

0x442e,	// (0x0001522f) cont_note_image_pane_ParamLimits

0x442e,	// (0x0001522f) cont_note_image_pane

0x75bd,	// (0x000183be) popup_note2_window_g1_ParamLimits

0x75bd,	// (0x000183be) popup_note2_window_g1

0x75ee,	// (0x000183ef) popup_note2_window_t1_ParamLimits

0x75ee,	// (0x000183ef) popup_note2_window_t1

0x7633,	// (0x00018434) popup_note2_window_t2_ParamLimits

0x7633,	// (0x00018434) popup_note2_window_t2

0x7678,	// (0x00018479) popup_note2_window_t3_ParamLimits

0x7678,	// (0x00018479) popup_note2_window_t3

0x76bd,	// (0x000184be) popup_note2_window_t4_ParamLimits

0x76bd,	// (0x000184be) popup_note2_window_t4

0x14cf,	// (0x000122d0) popup_note2_window_t5_ParamLimits

0x14cf,	// (0x000122d0) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x00020a7f) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x00020a7f) popup_note2_window_t

0x76ec,	// (0x000184ed) popup_note2_image_window_g1_ParamLimits

0x76ec,	// (0x000184ed) popup_note2_image_window_g1

0x76f8,	// (0x000184f9) popup_note2_image_window_g2_ParamLimits

0x76f8,	// (0x000184f9) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x00020a8a) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x00020a8a) popup_note2_image_window_g

0x770a,	// (0x0001850b) popup_note2_image_window_t1_ParamLimits

0x770a,	// (0x0001850b) popup_note2_image_window_t1

0x7722,	// (0x00018523) popup_note2_image_window_t2_ParamLimits

0x7722,	// (0x00018523) popup_note2_image_window_t2

0x773a,	// (0x0001853b) popup_note2_image_window_t3_ParamLimits

0x773a,	// (0x0001853b) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x00020a8f) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x00020a8f) popup_note2_image_window_t

0x443c,	// (0x0001523d) popup_note2_wait_window_g1_ParamLimits

0x443c,	// (0x0001523d) popup_note2_wait_window_g1

0x7756,	// (0x00018557) popup_note2_wait_window_g2_ParamLimits

0x7756,	// (0x00018557) popup_note2_wait_window_g2

0x4454,	// (0x00015255) popup_note2_wait_window_g3_ParamLimits

0x4454,	// (0x00015255) popup_note2_wait_window_g3

0x0002,

0xfc95,	// (0x00020a96) popup_note2_wait_window_g_ParamLimits

0xfc95,	// (0x00020a96) popup_note2_wait_window_g

0x7762,	// (0x00018563) popup_note2_wait_window_t1_ParamLimits

0x7762,	// (0x00018563) popup_note2_wait_window_t1

0x7780,	// (0x00018581) popup_note2_wait_window_t2_ParamLimits

0x7780,	// (0x00018581) popup_note2_wait_window_t2

0x779e,	// (0x0001859f) popup_note2_wait_window_t3_ParamLimits

0x779e,	// (0x0001859f) popup_note2_wait_window_t3

0x77b0,	// (0x000185b1) popup_note2_wait_window_t4_ParamLimits

0x77b0,	// (0x000185b1) popup_note2_wait_window_t4

0x0003,

0xfc9c,	// (0x00020a9d) popup_note2_wait_window_t_ParamLimits

0xfc9c,	// (0x00020a9d) popup_note2_wait_window_t

0x77c2,	// (0x000185c3) wait_bar2_pane_ParamLimits

0x77c2,	// (0x000185c3) wait_bar2_pane

0x77da,	// (0x000185db) popup_snote2_single_text_window_g1_ParamLimits

0x77da,	// (0x000185db) popup_snote2_single_text_window_g1

0x7802,	// (0x00018603) popup_snote2_single_text_window_t1_ParamLimits

0x7802,	// (0x00018603) popup_snote2_single_text_window_t1

0x784e,	// (0x0001864f) popup_snote2_single_text_window_t2_ParamLimits

0x784e,	// (0x0001864f) popup_snote2_single_text_window_t2

0x789a,	// (0x0001869b) popup_snote2_single_text_window_t3_ParamLimits

0x789a,	// (0x0001869b) popup_snote2_single_text_window_t3

0x78db,	// (0x000186dc) popup_snote2_single_text_window_t4_ParamLimits

0x78db,	// (0x000186dc) popup_snote2_single_text_window_t4

0x7911,	// (0x00018712) popup_snote2_single_text_window_t5_ParamLimits

0x7911,	// (0x00018712) popup_snote2_single_text_window_t5

0x0004,

0xfca5,	// (0x00020aa6) popup_snote2_single_text_window_t_ParamLimits

0xfca5,	// (0x00020aa6) popup_snote2_single_text_window_t

0x793c,	// (0x0001873d) popup_snote2_single_graphic_window_g1_ParamLimits

0x793c,	// (0x0001873d) popup_snote2_single_graphic_window_g1

0x7964,	// (0x00018765) popup_snote2_single_graphic_window_g2_ParamLimits

0x7964,	// (0x00018765) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb0,	// (0x00020ab1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb0,	// (0x00020ab1) popup_snote2_single_graphic_window_g

0x798c,	// (0x0001878d) popup_snote2_single_graphic_window_t1_ParamLimits

0x798c,	// (0x0001878d) popup_snote2_single_graphic_window_t1

0x79d8,	// (0x000187d9) popup_snote2_single_graphic_window_t2_ParamLimits

0x79d8,	// (0x000187d9) popup_snote2_single_graphic_window_t2

0x789a,	// (0x0001869b) popup_snote2_single_graphic_window_t3_ParamLimits

0x789a,	// (0x0001869b) popup_snote2_single_graphic_window_t3

0x78db,	// (0x000186dc) popup_snote2_single_graphic_window_t4_ParamLimits

0x78db,	// (0x000186dc) popup_snote2_single_graphic_window_t4

0x7911,	// (0x00018712) popup_snote2_single_graphic_window_t5_ParamLimits

0x7911,	// (0x00018712) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb5,	// (0x00020ab6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb5,	// (0x00020ab6) popup_snote2_single_graphic_window_t

0x615a,	// (0x00016f5b) clock_nsta_pane_cp2_t1

0x615a,	// (0x00016f5b) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x000208ca) clock_nsta_pane_cp2_t

0x1ffd,	// (0x00012dfe) form_field_data_wide_pane_g1_ParamLimits

0x2009,	// (0x00012e0a) form_field_data_wide_pane_g2_ParamLimits

0x2009,	// (0x00012e0a) form_field_data_wide_pane_g2

0x2015,	// (0x00012e16) form_field_data_wide_pane_g3_ParamLimits

0x2015,	// (0x00012e16) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00020493) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00020493) form_field_data_wide_pane_g

0xd161,	// (0x0001df62) grid_touch_3_pane_ParamLimits

0xd161,	// (0x0001df62) grid_touch_3_pane

0xd6ec,	// (0x0001e4ed) cell_touch_3_pane_ParamLimits

0xd6ec,	// (0x0001e4ed) cell_touch_3_pane

0x670b,	// (0x0001750c) cell_touch_3_pane_g1

0x670b,	// (0x0001750c) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x0002094f) cell_touch_3_pane_g

0x1501,	// (0x00012302) cont_query_data_pane

0x1509,	// (0x0001230a) cont_query_data_pane_cp1

0x7a57,	// (0x00018858) button_value_adjust_pane_cp7

0x7a5f,	// (0x00018860) query_popup_pane_cp3

0x287f,	// (0x00013680) bg_popup_sub_pane_cp22_ParamLimits

0xf1e9,	// (0x0001ffea) navi_navi_volume_pane_cp2

0xf204,	// (0x00020005) popup_side_volume_key_window_g2

0xf213,	// (0x00020014) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00020525) popup_side_volume_key_window_g

0xf230,	// (0x00020031) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0002052c) popup_side_volume_key_window_t

0x2bc6,	// (0x000139c7) popup_side_volume_key_window_ParamLimits

0xb77c,	// (0x0001c57d) list_double_graphic_pane_g4_ParamLimits

0xb77c,	// (0x0001c57d) list_double_graphic_pane_g4

0xcffe,	// (0x0001ddff) list_single_2heading_msg_pane_ParamLimits

0xcffe,	// (0x0001ddff) list_single_2heading_msg_pane

0xd736,	// (0x0001e537) list_single_2heading_msg_pane_g1_ParamLimits

0xd736,	// (0x0001e537) list_single_2heading_msg_pane_g1

0xd742,	// (0x0001e543) list_single_2heading_msg_pane_g2_ParamLimits

0xd742,	// (0x0001e543) list_single_2heading_msg_pane_g2

0xd755,	// (0x0001e556) list_single_2heading_msg_pane_g3_ParamLimits

0xd755,	// (0x0001e556) list_single_2heading_msg_pane_g3

0xd761,	// (0x0001e562) list_single_2heading_msg_pane_g4_ParamLimits

0xd761,	// (0x0001e562) list_single_2heading_msg_pane_g4

0x0003,

0xfcc0,	// (0x00020ac1) list_single_2heading_msg_pane_g_ParamLimits

0xfcc0,	// (0x00020ac1) list_single_2heading_msg_pane_g

0xd779,	// (0x0001e57a) list_single_2heading_msg_pane_t1_ParamLimits

0xd779,	// (0x0001e57a) list_single_2heading_msg_pane_t1

0xd7a1,	// (0x0001e5a2) list_single_2heading_msg_pane_t2_ParamLimits

0xd7a1,	// (0x0001e5a2) list_single_2heading_msg_pane_t2

0xd80c,	// (0x0001e60d) list_single_2heading_msg_pane_t3_ParamLimits

0xd80c,	// (0x0001e60d) list_single_2heading_msg_pane_t3

0x7b50,	// (0x00018951) list_single_2heading_msg_pane_t4_ParamLimits

0x7b50,	// (0x00018951) list_single_2heading_msg_pane_t4

0x0003,

0xfcc9,	// (0x00020aca) list_single_2heading_msg_pane_t_ParamLimits

0xfcc9,	// (0x00020aca) list_single_2heading_msg_pane_t

0x10fb,	// (0x00011efc) title_pane_g4_ParamLimits

0x10fb,	// (0x00011efc) title_pane_g4

0xeffe,	// (0x0001fdff) title_pane_stacon_g3_ParamLimits

0xeffe,	// (0x0001fdff) title_pane_stacon_g3

0x7554,	// (0x00018355) list_single_2graphic_im_pane_g4_ParamLimits

0x7554,	// (0x00018355) list_single_2graphic_im_pane_g4

0x4ea4,	// (0x00015ca5) popup_side_volume_key_window_cp

0x57a3,	// (0x000165a4) main_idle_act2_pane_t1

0xf505,	// (0x00020306) toolbar_button_pane_g10

0xb627,	// (0x0001c428) popup_toolbar_window_cp1

0x614b,	// (0x00016f4c) clock_nsta_pane_cp_t1

0x614b,	// (0x00016f4c) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x000208c5) clock_nsta_pane_cp_t

0xf1e9,	// (0x0001ffea) navi_navi_volume_pane_cp2_ParamLimits

0xf1f8,	// (0x0001fff9) popup_side_volume_key_window_g1_ParamLimits

0xf204,	// (0x00020005) popup_side_volume_key_window_g2_ParamLimits

0xf213,	// (0x00020014) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00020525) popup_side_volume_key_window_g_ParamLimits

0x040a,	// (0x0001120b) fep_hwr_aid_pane

0x04b3,	// (0x000112b4) bg_fep_hwr_top_pane_g4_ParamLimits

0x677b,	// (0x0001757c) fep_hwr_top_pane_g1_ParamLimits

0x678d,	// (0x0001758e) fep_hwr_top_pane_g2_ParamLimits

0x04d3,	// (0x000112d4) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x0002091a) fep_hwr_top_pane_g_ParamLimits

0x04e8,	// (0x000112e9) fep_hwr_top_text_pane_ParamLimits

0x4c59,	// (0x00015a5a) aid_touch_tab_arrow_arrow_2

0x4c62,	// (0x00015a63) aid_touch_tab_arrow_left_2

0x041e,	// (0x0001121f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0455,	// (0x00011256) fep_hwr_prediction_pane

0x68e3,	// (0x000176e4) fep_vkb_prediction_pane

0xd4a9,	// (0x0001e2aa) fep_vkb_side_pane_g3_ParamLimits

0xd4a9,	// (0x0001e2aa) fep_vkb_side_pane_g3

0x0677,	// (0x00011478) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x06e8,	// (0x000114e9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x06f5,	// (0x000114f6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x000209c9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0824,	// (0x00011625) fep_hwr_prediction_pane_g1

0x082e,	// (0x0001162f) fep_hwr_prediction_pane_g2

0x0836,	// (0x00011637) fep_hwr_prediction_pane_g3

0x083e,	// (0x0001163f) fep_hwr_prediction_pane_g4

0x0003,

0xfcd2,	// (0x00020ad3) fep_hwr_prediction_pane_g

0x7b75,	// (0x00018976) fep_vkb_prediction_pane_g1

0x7b7f,	// (0x00018980) fep_vkb_prediction_pane_g2

0x7b87,	// (0x00018988) fep_vkb_prediction_pane_g3

0x7b8f,	// (0x00018990) fep_vkb_prediction_pane_g4

0x0003,

0xfcdb,	// (0x00020adc) fep_vkb_prediction_pane_g

0x028a,	// (0x0001108b) slider_set_pane_g3

0x029e,	// (0x0001109f) slider_set_pane_g4

0x02b6,	// (0x000110b7) slider_set_pane_g5

0x028a,	// (0x0001108b) slider_set_pane_g6

0x02cc,	// (0x000110cd) slider_set_pane_g7

0x537a,	// (0x0001617b) slider_form_pane_g3

0x5383,	// (0x00016184) slider_form_pane_g4

0x538b,	// (0x0001618c) slider_form_pane_g5

0x537a,	// (0x0001617b) slider_form_pane_g6

0xcfa1,	// (0x0001dda2) slider_form_pane_g7

0x5a9d,	// (0x0001689e) slider_set_pane_vc_g3

0x5aa6,	// (0x000168a7) slider_set_pane_vc_g4

0x5aaf,	// (0x000168b0) slider_set_pane_vc_g5

0x5a9d,	// (0x0001689e) slider_set_pane_vc_g6

0x5ab8,	// (0x000168b9) slider_set_pane_vc_g7

0x5a9d,	// (0x0001689e) slider_form_pane_vc_g1

0x5aa6,	// (0x000168a7) slider_form_pane_vc_g2

0x5aaf,	// (0x000168b0) slider_form_pane_vc_g3

0x5a9d,	// (0x0001689e) slider_form_pane_vc_g4

0x5e3f,	// (0x00016c40) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x0002089e) slider_form_pane_vc_g

0xe866,	// (0x0001f667) main_idle_act3_pane

0x7b97,	// (0x00018998) ai3_links_pane

0xd87a,	// (0x0001e67b) popup_ai3_data_window_ParamLimits

0xd87a,	// (0x0001e67b) popup_ai3_data_window

0xe866,	// (0x0001f667) grid_ai3_links_pane

0xd898,	// (0x0001e699) cell_ai3_links_pane_ParamLimits

0xd898,	// (0x0001e699) cell_ai3_links_pane

0x7bd8,	// (0x000189d9) bg_popup_sub_pane_cp11

0x7be5,	// (0x000189e6) cell_ai3_links_pane_g1

0xe866,	// (0x0001f667) bg_popup_sub_pane_cp12

0x7c0a,	// (0x00018a0b) heading_ai3_data_pane

0x7c12,	// (0x00018a13) list_ai3_gene_pane

0x7c1e,	// (0x00018a1f) popup_ai3_data_window_g1

0x7c26,	// (0x00018a27) heading_ai3_data_pane_g1

0x7c2e,	// (0x00018a2f) heading_ai3_data_pane_t1

0x7c3c,	// (0x00018a3d) list_double_ai3_gene_pane_ParamLimits

0x7c3c,	// (0x00018a3d) list_double_ai3_gene_pane

0x7c49,	// (0x00018a4a) list_single_ai3_gene_pane_ParamLimits

0x7c49,	// (0x00018a4a) list_single_ai3_gene_pane

0x66d0,	// (0x000174d1) list_highlight_pane_cp7_ParamLimits

0x66d0,	// (0x000174d1) list_highlight_pane_cp7

0x7c56,	// (0x00018a57) list_single_a13_gene_pane_t1_ParamLimits

0x7c56,	// (0x00018a57) list_single_a13_gene_pane_t1

0x7c6d,	// (0x00018a6e) list_single_ai3_gene_pane_g1

0x7c76,	// (0x00018a77) list_single_ai3_gene_pane_g2

0x0001,

0xfce4,	// (0x00020ae5) list_single_ai3_gene_pane_g

0x7c7e,	// (0x00018a7f) list_double_ai3_gene_pane_g1_ParamLimits

0x7c7e,	// (0x00018a7f) list_double_ai3_gene_pane_g1

0x7c8a,	// (0x00018a8b) list_double_ai3_gene_pane_t1_ParamLimits

0x7c8a,	// (0x00018a8b) list_double_ai3_gene_pane_t1

0x7ca6,	// (0x00018aa7) list_double_ai3_gene_pane_t2_ParamLimits

0x7ca6,	// (0x00018aa7) list_double_ai3_gene_pane_t2

0x7cbb,	// (0x00018abc) list_double_ai3_gene_pane_t3_ParamLimits

0x7cbb,	// (0x00018abc) list_double_ai3_gene_pane_t3

0x0002,

0xfce9,	// (0x00020aea) list_double_ai3_gene_pane_t_ParamLimits

0xfce9,	// (0x00020aea) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7a70,	// (0x00018871) aid_size_min_col_2

0xd720,	// (0x0001e521) aid_size_min_msg_ParamLimits

0xd720,	// (0x0001e521) aid_size_min_msg

0xd4bd,	// (0x0001e2be) fep_vkb_top_text_pane_g2_ParamLimits

0xd4bd,	// (0x0001e2be) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x0002094a) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x0002094a) fep_vkb_top_text_pane_g

0xe866,	// (0x0001f667) main_hc_apps_shell_pane

0x7cd8,	// (0x00018ad9) grid_hc_apps_pane_ParamLimits

0x7cd8,	// (0x00018ad9) grid_hc_apps_pane

0x7ce7,	// (0x00018ae8) list_hc_apps_pane

0x7cef,	// (0x00018af0) scroll_pane_cp37_ParamLimits

0x7cef,	// (0x00018af0) scroll_pane_cp37

0xd8b2,	// (0x0001e6b3) cell_hc_apps_pane_ParamLimits

0xd8b2,	// (0x0001e6b3) cell_hc_apps_pane

0xd97c,	// (0x0001e77d) cell_hc_apps_pane_g1_ParamLimits

0xd97c,	// (0x0001e77d) cell_hc_apps_pane_g1

0x7df2,	// (0x00018bf3) cell_hc_apps_pane_g2_ParamLimits

0x7df2,	// (0x00018bf3) cell_hc_apps_pane_g2

0x7e0e,	// (0x00018c0f) cell_hc_apps_pane_g3_ParamLimits

0x7e0e,	// (0x00018c0f) cell_hc_apps_pane_g3

0x0002,

0xfcf0,	// (0x00020af1) cell_hc_apps_pane_g_ParamLimits

0xfcf0,	// (0x00020af1) cell_hc_apps_pane_g

0xd9a9,	// (0x0001e7aa) cell_hc_apps_pane_t1_ParamLimits

0xd9a9,	// (0x0001e7aa) cell_hc_apps_pane_t1

0x144b,	// (0x0001224c) grid_highlight_pane_cp10_ParamLimits

0x144b,	// (0x0001224c) grid_highlight_pane_cp10

0xd9f6,	// (0x0001e7f7) list_single_hc_apps_pane_ParamLimits

0xd9f6,	// (0x0001e7f7) list_single_hc_apps_pane

0xda30,	// (0x0001e831) list_single_hc_apps_pane_g1

0xda49,	// (0x0001e84a) list_single_hc_apps_pane_g2

0x0001,

0xfcf7,	// (0x00020af8) list_single_hc_apps_pane_g

0xda62,	// (0x0001e863) list_single_hc_apps_pane_g2_copy1

0xda7e,	// (0x0001e87f) list_single_hc_apps_pane_t1

0x11a7,	// (0x00011fa8) bg_set_opt_pane_cp_ParamLimits

0xef28,	// (0x0001fd29) setting_slider_pane_t1_ParamLimits

0xef3e,	// (0x0001fd3f) setting_slider_pane_t2_ParamLimits

0xef58,	// (0x0001fd59) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002037b) setting_slider_pane_t_ParamLimits

0xef70,	// (0x0001fd71) slider_set_pane_ParamLimits

0xf45a,	// (0x0002025b) control_pane_g5_ParamLimits

0xf45a,	// (0x0002025b) control_pane_g5

0x519b,	// (0x00015f9c) slider_set_pane_g1_ParamLimits

0x027e,	// (0x0001107f) slider_set_pane_g2_ParamLimits

0x028a,	// (0x0001108b) slider_set_pane_g3_ParamLimits

0x029e,	// (0x0001109f) slider_set_pane_g4_ParamLimits

0x02b6,	// (0x000110b7) slider_set_pane_g5_ParamLimits

0x028a,	// (0x0001108b) slider_set_pane_g6_ParamLimits

0x02cc,	// (0x000110cd) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0002076c) slider_set_pane_g_ParamLimits

0x2cab,	// (0x00013aac) navi_icon_text_pane_ParamLimits

0xc74d,	// (0x0001d54e) aid_fill_nsta_2_ParamLimits

0xc783,	// (0x0001d584) aid_touch_tab_arrow_left_ParamLimits

0xc799,	// (0x0001d59a) aid_touch_tab_arrow_right_ParamLimits

0xc834,	// (0x0001d635) clock_nsta_pane_ParamLimits

0xccde,	// (0x0001dadf) navi_icon_pane_g1_ParamLimits

0xccea,	// (0x0001daeb) navi_text_pane_t1_ParamLimits

0xd23b,	// (0x0001e03c) navi_icon_text_pane_g1_ParamLimits

0xd247,	// (0x0001e048) navi_icon_text_pane_t1_ParamLimits

0xda30,	// (0x0001e831) list_single_hc_apps_pane_g1_ParamLimits

0xda49,	// (0x0001e84a) list_single_hc_apps_pane_g2_ParamLimits

0xfcf7,	// (0x00020af8) list_single_hc_apps_pane_g_ParamLimits

0xda62,	// (0x0001e863) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xda7e,	// (0x0001e87f) list_single_hc_apps_pane_t1_ParamLimits

0xaa53,	// (0x0001b854) popup_toolbar2_fixed_window_ParamLimits

0xaa53,	// (0x0001b854) popup_toolbar2_fixed_window

0xc68e,	// (0x0001d48f) popup_toolbar2_float_window

0xe866,	// (0x0001f667) bg_popup_sub_pane_cp27

0x7f2b,	// (0x00018d2c) grid_toolbar2_float_pane

0xe866,	// (0x0001f667) bg_popup_sub_pane_cp26

0x7f2b,	// (0x00018d2c) grid_toolbar2_fixed_pane

0xdaac,	// (0x0001e8ad) cell_toolbar2_fixed_pane_ParamLimits

0xdaac,	// (0x0001e8ad) cell_toolbar2_fixed_pane

0xdac9,	// (0x0001e8ca) cell_toolbar2_fixed_pane_g1

0x7f4c,	// (0x00018d4d) toolbar2_fixed_button_pane

0x3d2f,	// (0x00014b30) toolbar2_fixed_button_pane_g1

0x3d3f,	// (0x00014b40) toolbar2_fixed_button_pane_g2

0x3d37,	// (0x00014b38) toolbar2_fixed_button_pane_g3

0x3d4f,	// (0x00014b50) toolbar2_fixed_button_pane_g4

0x3d47,	// (0x00014b48) toolbar2_fixed_button_pane_g5

0x3d57,	// (0x00014b58) toolbar2_fixed_button_pane_g6

0x3d5f,	// (0x00014b60) toolbar2_fixed_button_pane_g7

0x3d6f,	// (0x00014b70) toolbar2_fixed_button_pane_g8

0x3d67,	// (0x00014b68) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0002066e) toolbar2_fixed_button_pane_g

0x7f54,	// (0x00018d55) cell_toolbar2_float_pane_ParamLimits

0x7f54,	// (0x00018d55) cell_toolbar2_float_pane

0x7f65,	// (0x00018d66) cell_toolbar2_float_pane_g1

0x7f4c,	// (0x00018d4d) toolbar2_fixed_button_pane_cp

0xd3a5,	// (0x0001e1a6) fep_vkb_accented_list_pane_ParamLimits

0xd3a5,	// (0x0001e1a6) fep_vkb_accented_list_pane

0x0657,	// (0x00011458) bg_popup_fep_shadow_pane_g9

0x2e2f,	// (0x00013c30) bg_popup_fep_shadow_pane_cp3

0x22ae,	// (0x000130af) list_accented_list_pane

0x7f6e,	// (0x00018d6f) list_single_accented_list_pane_ParamLimits

0x7f6e,	// (0x00018d6f) list_single_accented_list_pane

0x2e2f,	// (0x00013c30) list_highlight_pane_cp10

0x7f7f,	// (0x00018d80) list_single_accented_list_pane_t1

0xc5aa,	// (0x0001d3ab) popup_slider_window_ParamLimits

0xc5aa,	// (0x0001d3ab) popup_slider_window

0x7a67,	// (0x00018868) aid_indentation_list_msg

0xdbd4,	// (0x0001e9d5) bg_popup_window_pane_cp19

0x80b9,	// (0x00018eba) popup_slider_window_g1

0x80d5,	// (0x00018ed6) popup_slider_window_g2

0x80f1,	// (0x00018ef2) popup_slider_window_g3

0x0005,

0xfcfc,	// (0x00020afd) popup_slider_window_g

0x814d,	// (0x00018f4e) popup_slider_window_t1

0x81c1,	// (0x00018fc2) small_volume_slider_vertical_pane

0x670b,	// (0x0001750c) small_volume_slider_vertical_pane_g1

0x670b,	// (0x0001750c) small_volume_slider_vertical_pane_g2

0x81dd,	// (0x00018fde) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0e,	// (0x00020b0f) small_volume_slider_vertical_pane_g

0xa9bd,	// (0x0001b7be) area_side_right_pane_ParamLimits

0xa9bd,	// (0x0001b7be) area_side_right_pane

0xae2c,	// (0x0001bc2d) aid_size_side_button_ParamLimits

0xae2c,	// (0x0001bc2d) aid_size_side_button

0xae45,	// (0x0001bc46) grid_sctrl_middle_pane_ParamLimits

0xae45,	// (0x0001bc46) grid_sctrl_middle_pane

0x087a,	// (0x0001167b) sctrl_sk_bottom_pane

0x088b,	// (0x0001168c) sctrl_sk_top_pane

0x089d,	// (0x0001169e) aid_touch_sctrl_top

0x08aa,	// (0x000116ab) bg_sctrl_sk_pane_ParamLimits

0x08aa,	// (0x000116ab) bg_sctrl_sk_pane

0x08b8,	// (0x000116b9) sctrl_sk_top_pane_g1

0x08c5,	// (0x000116c6) sctrl_sk_top_pane_t1

0x089d,	// (0x0001169e) aid_touch_sctrl_bottom

0x08aa,	// (0x000116ab) bg_sctrl_sk_pane_cp_ParamLimits

0x08aa,	// (0x000116ab) bg_sctrl_sk_pane_cp

0x08e0,	// (0x000116e1) sctrl_sk_bottom_pane_g1

0x08c5,	// (0x000116c6) sctrl_sk_bottom_pane_t1

0xae5f,	// (0x0001bc60) cell_sctrl_middle_pane_ParamLimits

0xae5f,	// (0x0001bc60) cell_sctrl_middle_pane

0xae72,	// (0x0001bc73) aid_touch_sctrl_middle_ParamLimits

0xae72,	// (0x0001bc73) aid_touch_sctrl_middle

0xae7f,	// (0x0001bc80) bg_sctrl_middle_pane_ParamLimits

0xae7f,	// (0x0001bc80) bg_sctrl_middle_pane

0x0f5a,	// (0x00011d5b) cell_sctrl_middle_pane_g1_ParamLimits

0x0f5a,	// (0x00011d5b) cell_sctrl_middle_pane_g1

0xae8d,	// (0x0001bc8e) cell_sctrl_middle_pane_g2_ParamLimits

0xae8d,	// (0x0001bc8e) cell_sctrl_middle_pane_g2

0x0001,

0xfd1a,	// (0x00020b1b) cell_sctrl_middle_pane_g_ParamLimits

0xfd1a,	// (0x00020b1b) cell_sctrl_middle_pane_g

0x3d2f,	// (0x00014b30) bg_sctrl_middle_pane_g1

0x3d37,	// (0x00014b38) bg_sctrl_middle_pane_g2

0x3d3f,	// (0x00014b40) bg_sctrl_middle_pane_g3

0x3d47,	// (0x00014b48) bg_sctrl_middle_pane_g4

0x3d4f,	// (0x00014b50) bg_sctrl_middle_pane_g5

0x3d57,	// (0x00014b58) bg_sctrl_middle_pane_g6

0x3d5f,	// (0x00014b60) bg_sctrl_middle_pane_g7

0x3d67,	// (0x00014b68) bg_sctrl_middle_pane_g8

0x0007,

0xfd1f,	// (0x00020b20) bg_sctrl_middle_pane_g

0x3d6f,	// (0x00014b70) bg_sctrl_middle_pane_g8_copy1

0x3d2f,	// (0x00014b30) bg_sctrl_sk_pane_g1

0x3d3f,	// (0x00014b40) bg_sctrl_sk_pane_g2

0x3d37,	// (0x00014b38) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0002066e) bg_sctrl_sk_pane_g

0x1977,	// (0x00012778) aid_size_touch_scroll_bar

0x3d4f,	// (0x00014b50) bg_sctrl_sk_pane_g4

0x3d47,	// (0x00014b48) bg_sctrl_sk_pane_g5

0x3d57,	// (0x00014b58) bg_sctrl_sk_pane_g6

0x3d5f,	// (0x00014b60) bg_sctrl_sk_pane_g7

0x3d6f,	// (0x00014b70) bg_sctrl_sk_pane_g8

0x3d67,	// (0x00014b68) bg_sctrl_sk_pane_g9

0x326f,	// (0x00014070) popup_fep_china_hwr2_fs_candidate_window

0xc066,	// (0x0001ce67) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc066,	// (0x0001ce67) popup_fep_china_hwr2_fs_control_window

0x0677,	// (0x00011478) sctrl_sk_top_pane_g2

0x0001,

0xfd15,	// (0x00020b16) sctrl_sk_top_pane_g

0xdc8c,	// (0x0001ea8d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdc8c,	// (0x0001ea8d) aid_fep_china_hwr2_fs_cell

0xdca2,	// (0x0001eaa3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdca2,	// (0x0001eaa3) bg_popup_fep_shadow_pane_cp4

0xdcb9,	// (0x0001eaba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdcb9,	// (0x0001eaba) bg_popup_fep_shadow_pane_cp5

0xdccb,	// (0x0001eacc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdccb,	// (0x0001eacc) popup_fep_china_hwr2_fs_control_bar_grid

0xdcdf,	// (0x0001eae0) popup_fep_china_hwr2_fs_control_funtion_grid

0x823c,	// (0x0001903d) aid_fep_china_hwr2_fs_candi_cell

0xe866,	// (0x0001f667) bg_popup_fep_shadow_pane_cp6

0x8246,	// (0x00019047) popup_fep_china_hwr2_fs_candidate_grid

0xdce7,	// (0x0001eae8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdce7,	// (0x0001eae8) cell_fep_china_hwr2_fs_funtion_grid

0x670b,	// (0x0001750c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8268,	// (0x00019069) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8268,	// (0x00019069) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8276,	// (0x00019077) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8276,	// (0x00019077) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd30,	// (0x00020b31) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd30,	// (0x00020b31) cell_fep_china_hwr2_fs_funtion_grid_g

0xdcff,	// (0x0001eb00) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdcff,	// (0x0001eb00) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdd14,	// (0x0001eb15) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdd14,	// (0x0001eb15) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd35,	// (0x00020b36) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd35,	// (0x00020b36) cell_fep_china_hwr2_fs_funtion_grid_t

0x82bd,	// (0x000190be) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x82c5,	// (0x000190c6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x82cd,	// (0x000190ce) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3a,	// (0x00020b3b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x82d5,	// (0x000190d6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x82d5,	// (0x000190d6) cell_fep_china_hwr2_fs_candidate_grid

0x82f4,	// (0x000190f5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x82fc,	// (0x000190fd) popup_fep_china_hwr2_fs_candidate_grid_g21

0x670b,	// (0x0001750c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x670b,	// (0x0001750c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x0002094f) cell_fep_china_hwr2_fs_candidate_grid_g

0x8304,	// (0x00019105) cell_fep_china_hwr2_fs_candidate_grid_t1

0x38de,	// (0x000146df) clock_nsta_pane_cp_24_ParamLimits

0x38de,	// (0x000146df) clock_nsta_pane_cp_24

0x395e,	// (0x0001475f) indicator_nsta_pane_cp_24_ParamLimits

0x395e,	// (0x0001475f) indicator_nsta_pane_cp_24

0x4ab1,	// (0x000158b2) heading_pane_g1

0x0001,

0xf8d2,	// (0x000206d3) heading_pane_g

0x55ea,	// (0x000163eb) grid_sct_catagory_button_pane

0x561c,	// (0x0001641d) scroll_pane_cp5_ParamLimits

0x62bc,	// (0x000170bd) button_value_adjust_pane_cp5_ParamLimits

0x62bc,	// (0x000170bd) button_value_adjust_pane_cp5

0x63c2,	// (0x000171c3) form2_midp_time_pane_ParamLimits

0x8312,	// (0x00019113) cell_sct_catagory_button_pane_ParamLimits

0x8312,	// (0x00019113) cell_sct_catagory_button_pane

0x66d0,	// (0x000174d1) bg_button_pane_cp01_ParamLimits

0x66d0,	// (0x000174d1) bg_button_pane_cp01

0x670b,	// (0x0001750c) cell_sct_catagory_button_pane_g1

0xc62b,	// (0x0001d42c) popup_tb_extension_window

0xdd30,	// (0x0001eb31) aid_size_cell_ext_ParamLimits

0xdd30,	// (0x0001eb31) aid_size_cell_ext

0x17b9,	// (0x000125ba) bg_tb_trans_pane_cp1_ParamLimits

0x17b9,	// (0x000125ba) bg_tb_trans_pane_cp1

0xdd56,	// (0x0001eb57) grid_tb_ext_pane_ParamLimits

0xdd56,	// (0x0001eb57) grid_tb_ext_pane

0xdd96,	// (0x0001eb97) cell_tb_ext_pane_ParamLimits

0xdd96,	// (0x0001eb97) cell_tb_ext_pane

0xddc0,	// (0x0001ebc1) cell_tb_ext_pane_g1_ParamLimits

0xddc0,	// (0x0001ebc1) cell_tb_ext_pane_g1

0x83a8,	// (0x000191a9) cell_tb_ext_pane_t1

0x144b,	// (0x0001224c) list_highlight_pane_cp11_ParamLimits

0x144b,	// (0x0001224c) list_highlight_pane_cp11

0xeeb1,	// (0x0001fcb2) popup_uni_indicator_window_ParamLimits

0xeeb1,	// (0x0001fcb2) popup_uni_indicator_window

0x1fe3,	// (0x00012de4) bg_popup_sub_pane_cp14

0x83c3,	// (0x000191c4) list_uniindi_pane

0x83cf,	// (0x000191d0) uniindi_top_pane

0x144b,	// (0x0001224c) bg_uniindi_top_pane

0x83f0,	// (0x000191f1) uniindi_top_pane_g1

0x8406,	// (0x00019207) uniindi_top_pane_g2

0x0003,

0xfd41,	// (0x00020b42) uniindi_top_pane_g

0x8430,	// (0x00019231) uniindi_top_pane_t1

0x845c,	// (0x0001925d) list_single_uniindi_pane_ParamLimits

0x845c,	// (0x0001925d) list_single_uniindi_pane

0x670b,	// (0x0001750c) bg_uniindi_top_pane_g1

0x846e,	// (0x0001926f) list_single_uniindi_pane_g1

0x8481,	// (0x00019282) list_single_uniindi_pane_t1

0xed98,	// (0x0001fb99) control_bg_pane

0x84a6,	// (0x000192a7) bg_sctrl_sk_pane_cp1

0x84af,	// (0x000192b0) bg_sctrl_sk_pane_cp2

0x84b8,	// (0x000192b9) control_bg_pane_g1

0x84c1,	// (0x000192c2) control_bg_pane_g2

0x0001,

0xfd4a,	// (0x00020b4b) control_bg_pane_g

0x60df,	// (0x00016ee0) cell_indicator_nsta_pane_g1_ParamLimits

0xd194,	// (0x0001df95) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x000208b3) cell_indicator_nsta_pane_g_ParamLimits

0x6452,	// (0x00017253) form2_midp_time_pane_t1_ParamLimits

0x7db3,	// (0x00018bb4) main_idle_act4_pane_ParamLimits

0x7db3,	// (0x00018bb4) main_idle_act4_pane

0xc62b,	// (0x0001d42c) popup_tb_extension_window_ParamLimits

0xdd7e,	// (0x0001eb7f) tb_ext_find_pane_ParamLimits

0xdd7e,	// (0x0001eb7f) tb_ext_find_pane

0x84ca,	// (0x000192cb) ai_gene_pane_1_cp1

0x2f78,	// (0x00013d79) ai_gene_pane_2_cp1

0x84d2,	// (0x000192d3) list_single_idle_plugin_calendar_pane

0x84db,	// (0x000192dc) list_single_idle_plugin_notification_pane

0x84e4,	// (0x000192e5) list_single_idle_plugin_player_pane

0xdddd,	// (0x0001ebde) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdddd,	// (0x0001ebde) list_single_idle_plugin_shortcut_pane

0xde05,	// (0x0001ec06) main_idle_act4_pane_t1

0xde1d,	// (0x0001ec1e) main_idle_act4_pane_t2

0x0001,

0xfd4f,	// (0x00020b50) main_idle_act4_pane_t

0xde35,	// (0x0001ec36) middle_sk_idle_act4_pane_ParamLimits

0xde35,	// (0x0001ec36) middle_sk_idle_act4_pane

0xde51,	// (0x0001ec52) popup_clock_digital_analogue_window_cp2

0xde78,	// (0x0001ec79) shortcut_wheel_idle_act4_pane_ParamLimits

0xde78,	// (0x0001ec79) shortcut_wheel_idle_act4_pane

0x670b,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g1

0x670b,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g2

0x670b,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g3

0x670b,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g4

0x670b,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g5

0x8577,	// (0x00019378) shortcut_wheel_idle_act4_pane_g6

0x857f,	// (0x00019380) shortcut_wheel_idle_act4_pane_g7

0x8587,	// (0x00019388) shortcut_wheel_idle_act4_pane_g8

0x858f,	// (0x00019390) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd54,	// (0x00020b55) shortcut_wheel_idle_act4_pane_g

0xc705,	// (0x0001d506) middle_sk_idle_act4_pane_g1_ParamLimits

0xc705,	// (0x0001d506) middle_sk_idle_act4_pane_g1

0xdef5,	// (0x0001ecf6) middle_sk_idle_act4_pane_g2_ParamLimits

0xdef5,	// (0x0001ecf6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd77,	// (0x00020b78) middle_sk_idle_act4_pane_g_ParamLimits

0xfd77,	// (0x00020b78) middle_sk_idle_act4_pane_g

0xdf0d,	// (0x0001ed0e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdf0d,	// (0x0001ed0e) middle_sk_idle_act4_pane_t1

0xdf3c,	// (0x0001ed3d) grid_ai_shortcut_pane_ParamLimits

0xdf3c,	// (0x0001ed3d) grid_ai_shortcut_pane

0xdf59,	// (0x0001ed5a) list_highlight_pane_cp16_ParamLimits

0xdf59,	// (0x0001ed5a) list_highlight_pane_cp16

0xdf66,	// (0x0001ed67) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdf66,	// (0x0001ed67) list_single_idle_plugin_shortcut_pane_g1

0xdf72,	// (0x0001ed73) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdf72,	// (0x0001ed73) list_single_idle_plugin_shortcut_pane_g2

0xdf90,	// (0x0001ed91) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdf90,	// (0x0001ed91) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7c,	// (0x00020b7d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7c,	// (0x00020b7d) list_single_idle_plugin_shortcut_pane_g

0xdfa5,	// (0x0001eda6) cell_ai_shortcut_pane_ParamLimits

0xdfa5,	// (0x0001eda6) cell_ai_shortcut_pane

0xdfbb,	// (0x0001edbc) cell_ai_shortcut_pane_g1_ParamLimits

0xdfbb,	// (0x0001edbc) cell_ai_shortcut_pane_g1

0x84ca,	// (0x000192cb) ai_gene_pane_1_cp2

0x86c0,	// (0x000194c1) ai_gene_pane_2_cp2

0x86c8,	// (0x000194c9) list_highlight_pane_cp15

0x86d1,	// (0x000194d2) list_single_idle_plugin_calendar_pane_g1

0x86c8,	// (0x000194c9) list_highlight_pane_cp17

0x86d9,	// (0x000194da) list_single_idle_plugin_calendar_pane_g1_copy1

0x86e1,	// (0x000194e2) list_single_idle_plugin_player_pane_g1

0x5851,	// (0x00016652) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd83,	// (0x00020b84) list_single_idle_plugin_player_pane_g

0x86e9,	// (0x000194ea) list_single_idle_plugin_player_pane_t1

0x86f7,	// (0x000194f8) list_single_idle_plugin_player_pane_t2

0x8705,	// (0x00019506) list_single_idle_plugin_player_pane_t3

0x8713,	// (0x00019514) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd88,	// (0x00020b89) list_single_idle_plugin_player_pane_t

0x8721,	// (0x00019522) wait_bar_pane_cp15

0x8729,	// (0x0001952a) grid_ai_notification_pane

0x5851,	// (0x00016652) list_single_idle_plugin_notification_pane_g1

0xdfdd,	// (0x0001edde) cell_ai_notification_pane_ParamLimits

0xdfdd,	// (0x0001edde) cell_ai_notification_pane

0x873f,	// (0x00019540) cell_ai_notification_pane_g1

0x8747,	// (0x00019548) cell_ai_notification_pane_t1

0xdfea,	// (0x0001edeb) tb_ext_find_button_pane

0xdff2,	// (0x0001edf3) tb_ext_find_pane_g1

0xdffa,	// (0x0001edfb) tb_ext_find_pane_t1

0x27b5,	// (0x000135b6) tb_ext_find_button_pane_g1

0x8773,	// (0x00019574) tb_ext_find_button_pane_g2

0x0001,

0xfd91,	// (0x00020b92) tb_ext_find_button_pane_g

0xde05,	// (0x0001ec06) main_idle_act4_pane_t1_ParamLimits

0xde1d,	// (0x0001ec1e) main_idle_act4_pane_t2_ParamLimits

0xfd4f,	// (0x00020b50) main_idle_act4_pane_t_ParamLimits

0xde51,	// (0x0001ec52) popup_clock_digital_analogue_window_cp2_ParamLimits

0xde68,	// (0x0001ec69) sat_plugin_idle_act4_pane_ParamLimits

0xde68,	// (0x0001ec69) sat_plugin_idle_act4_pane

0xe008,	// (0x0001ee09) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe008,	// (0x0001ee09) sat_plugin_idle_act4_pane_t1

0xe020,	// (0x0001ee21) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe020,	// (0x0001ee21) sat_plugin_idle_act4_pane_t2

0xe038,	// (0x0001ee39) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe038,	// (0x0001ee39) sat_plugin_idle_act4_pane_t3

0xe050,	// (0x0001ee51) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe050,	// (0x0001ee51) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd96,	// (0x00020b97) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd96,	// (0x00020b97) sat_plugin_idle_act4_pane_t

0xee5d,	// (0x0001fc5e) popup_battery_window_ParamLimits

0xee5d,	// (0x0001fc5e) popup_battery_window

0x144b,	// (0x0001224c) bg_popup_sub_pane_cp25_ParamLimits

0x144b,	// (0x0001224c) bg_popup_sub_pane_cp25

0x87c8,	// (0x000195c9) popup_battery_window_g1_ParamLimits

0x87c8,	// (0x000195c9) popup_battery_window_g1

0x87d4,	// (0x000195d5) popup_battery_window_t1_ParamLimits

0x87d4,	// (0x000195d5) popup_battery_window_t1

0x87e6,	// (0x000195e7) popup_battery_window_t2_ParamLimits

0x87e6,	// (0x000195e7) popup_battery_window_t2

0x0001,

0xfd9f,	// (0x00020ba0) popup_battery_window_t_ParamLimits

0xfd9f,	// (0x00020ba0) popup_battery_window_t

0xbede,	// (0x0001ccdf) midp_canvas_pane_ParamLimits

0xbf39,	// (0x0001cd3a) midp_keypad_pane_ParamLimits

0xbf39,	// (0x0001cd3a) midp_keypad_pane

0x31bd,	// (0x00013fbe) main_midp_pane_ParamLimits

0x6169,	// (0x00016f6a) signal_pane_g2_cp_ParamLimits

0xe068,	// (0x0001ee69) aid_size_cell_midp_keypad_ParamLimits

0xe068,	// (0x0001ee69) aid_size_cell_midp_keypad

0xe086,	// (0x0001ee87) midp_keyp_game_grid_pane_ParamLimits

0xe086,	// (0x0001ee87) midp_keyp_game_grid_pane

0xe0ad,	// (0x0001eeae) midp_keyp_rocker_pane_ParamLimits

0xe0ad,	// (0x0001eeae) midp_keyp_rocker_pane

0xe0f2,	// (0x0001eef3) midp_keyp_sk_left_pane_ParamLimits

0xe0f2,	// (0x0001eef3) midp_keyp_sk_left_pane

0xe146,	// (0x0001ef47) midp_keyp_sk_right_pane_ParamLimits

0xe146,	// (0x0001ef47) midp_keyp_sk_right_pane

0xe866,	// (0x0001f667) bg_button_pane_cp03

0xe19a,	// (0x0001ef9b) midp_keyp_sk_left_pane_g1

0xe866,	// (0x0001f667) bg_button_pane_cp04

0xe19a,	// (0x0001ef9b) midp_keyp_sk_right_pane_g1

0x670b,	// (0x0001750c) midp_keyp_rocker_pane_g1

0xe1a3,	// (0x0001efa4) keyp_game_cell_pane_ParamLimits

0xe1a3,	// (0x0001efa4) keyp_game_cell_pane

0xe866,	// (0x0001f667) bg_button_pane_cp02

0xe1c9,	// (0x0001efca) keyp_game_cell_pane_g1

0xa9ff,	// (0x0001b800) popup_fep_vkb2_window_ParamLimits

0xa9ff,	// (0x0001b800) popup_fep_vkb2_window

0xae99,	// (0x0001bc9a) aid_size_cell_vkb2_ParamLimits

0xae99,	// (0x0001bc9a) aid_size_cell_vkb2

0xaec7,	// (0x0001bcc8) popup_fep_vkb2_window_g1_ParamLimits

0xaec7,	// (0x0001bcc8) popup_fep_vkb2_window_g1

0xaf17,	// (0x0001bd18) vkb2_area_bottom_pane_ParamLimits

0xaf17,	// (0x0001bd18) vkb2_area_bottom_pane

0xaf73,	// (0x0001bd74) vkb2_area_keypad_pane_ParamLimits

0xaf73,	// (0x0001bd74) vkb2_area_keypad_pane

0xafc1,	// (0x0001bdc2) vkb2_area_top_pane_ParamLimits

0xafc1,	// (0x0001bdc2) vkb2_area_top_pane

0xb047,	// (0x0001be48) vkb2_top_entry_pane_ParamLimits

0xb047,	// (0x0001be48) vkb2_top_entry_pane

0xb074,	// (0x0001be75) vkb2_top_grid_left_pane_ParamLimits

0xb074,	// (0x0001be75) vkb2_top_grid_left_pane

0xb094,	// (0x0001be95) vkb2_top_grid_right_pane_ParamLimits

0xb094,	// (0x0001be95) vkb2_top_grid_right_pane

0x0b56,	// (0x00011957) vkb2_cell_keypad_pane_ParamLimits

0x0b56,	// (0x00011957) vkb2_cell_keypad_pane

0xb0da,	// (0x0001bedb) vkb2_area_bottom_grid_pane_ParamLimits

0xb0da,	// (0x0001bedb) vkb2_area_bottom_grid_pane

0xb104,	// (0x0001bf05) vkb2_area_bottom_pane_g1_ParamLimits

0xb104,	// (0x0001bf05) vkb2_area_bottom_pane_g1

0xb12a,	// (0x0001bf2b) vkb2_area_bottom_pane_g2_ParamLimits

0xb12a,	// (0x0001bf2b) vkb2_area_bottom_pane_g2

0xb15b,	// (0x0001bf5c) vkb2_area_bottom_pane_g3_ParamLimits

0xb15b,	// (0x0001bf5c) vkb2_area_bottom_pane_g3

0x0002,

0xfda4,	// (0x00020ba5) vkb2_area_bottom_pane_g_ParamLimits

0xfda4,	// (0x00020ba5) vkb2_area_bottom_pane_g

0x0ce5,	// (0x00011ae6) vkb2_top_cell_left_pane_ParamLimits

0x0ce5,	// (0x00011ae6) vkb2_top_cell_left_pane

0xe1d2,	// (0x0001efd3) vkb2_top_entry_pane_g1_ParamLimits

0xe1d2,	// (0x0001efd3) vkb2_top_entry_pane_g1

0xe1e0,	// (0x0001efe1) vkb2_top_entry_pane_t1_ParamLimits

0xe1e0,	// (0x0001efe1) vkb2_top_entry_pane_t1

0x8973,	// (0x00019774) vkb2_top_entry_pane_t2_ParamLimits

0x8973,	// (0x00019774) vkb2_top_entry_pane_t2

0x898b,	// (0x0001978c) vkb2_top_entry_pane_t3_ParamLimits

0x898b,	// (0x0001978c) vkb2_top_entry_pane_t3

0x0002,

0xfdab,	// (0x00020bac) vkb2_top_entry_pane_t_ParamLimits

0xfdab,	// (0x00020bac) vkb2_top_entry_pane_t

0xb1c5,	// (0x0001bfc6) vkb2_top_grid_right_pane_g1_ParamLimits

0xb1c5,	// (0x0001bfc6) vkb2_top_grid_right_pane_g1

0x0d48,	// (0x00011b49) vkb2_top_grid_right_pane_g2_ParamLimits

0x0d48,	// (0x00011b49) vkb2_top_grid_right_pane_g2

0x0d60,	// (0x00011b61) vkb2_top_grid_right_pane_g3_ParamLimits

0x0d60,	// (0x00011b61) vkb2_top_grid_right_pane_g3

0xb1db,	// (0x0001bfdc) vkb2_top_grid_right_pane_g4_ParamLimits

0xb1db,	// (0x0001bfdc) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb2,	// (0x00020bb3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb2,	// (0x00020bb3) vkb2_top_grid_right_pane_g

0x0d8e,	// (0x00011b8f) vkb2_top_cell_left_pane_g1

0x0da5,	// (0x00011ba6) vkb2_cell_keypad_pane_g1_ParamLimits

0x0da5,	// (0x00011ba6) vkb2_cell_keypad_pane_g1

0x89a1,	// (0x000197a2) vkb2_cell_keypad_pane_t1_ParamLimits

0x89a1,	// (0x000197a2) vkb2_cell_keypad_pane_t1

0x0dc9,	// (0x00011bca) vkb2_cell_bottom_grid_pane_ParamLimits

0x0dc9,	// (0x00011bca) vkb2_cell_bottom_grid_pane

0x0e02,	// (0x00011c03) vkb2_cell_bottom_grid_pane_g1

0xde99,	// (0x0001ec9a) aid_call2_pane_cp02

0xdea1,	// (0x0001eca2) aid_call_pane_cp02

0xdea9,	// (0x0001ecaa) clock_digital_number_pane_cp10

0xdeb1,	// (0x0001ecb2) clock_digital_number_pane_cp11

0xdeb9,	// (0x0001ecba) clock_digital_number_pane_cp12

0xdec1,	// (0x0001ecc2) clock_digital_number_pane_cp13

0xdec9,	// (0x0001ecca) clock_digital_separator_pane_cp10

0x27b5,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g1

0x27b5,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g2

0xded1,	// (0x0001ecd2) popup_clock_digital_analogue_window_cp2_g3

0x27b5,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g4

0xded1,	// (0x0001ecd2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd67,	// (0x00020b68) popup_clock_digital_analogue_window_cp2_g

0xded9,	// (0x0001ecda) popup_clock_digital_analogue_window_cp2_t1

0xdee7,	// (0x0001ece8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd72,	// (0x00020b73) popup_clock_digital_analogue_window_cp2_t

0x670b,	// (0x0001750c) clock_digital_number_pane_cp10_g1

0x670b,	// (0x0001750c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002094f) clock_digital_number_pane_cp10_g

0x670b,	// (0x0001750c) clock_digital_separator_pane_cp10_g1

0x670b,	// (0x0001750c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002094f) clock_digital_separator_pane_cp10_g

0x8412,	// (0x00019213) uniindi_top_pane_g3

0x8423,	// (0x00019224) uniindi_top_pane_g4

0x0bc6,	// (0x000119c7) vkb2_row_keypad_pane_ParamLimits

0x0bc6,	// (0x000119c7) vkb2_row_keypad_pane

0x0e1e,	// (0x00011c1f) vkb2_cell_t_keypad_pane_ParamLimits

0x0e1e,	// (0x00011c1f) vkb2_cell_t_keypad_pane

0x0e2e,	// (0x00011c2f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x0e2e,	// (0x00011c2f) vkb2_cell_t_keypad_pane_cp08

0x0e43,	// (0x00011c44) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0e43,	// (0x00011c44) vkb2_cell_t_keypad_pane_cp09

0x0e57,	// (0x00011c58) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0e57,	// (0x00011c58) vkb2_cell_t_keypad_pane_cp01

0x0e68,	// (0x00011c69) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0e68,	// (0x00011c69) vkb2_cell_t_keypad_pane_cp02

0x0e79,	// (0x00011c7a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0e79,	// (0x00011c7a) vkb2_cell_t_keypad_pane_cp03

0x0e8a,	// (0x00011c8b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0e8a,	// (0x00011c8b) vkb2_cell_t_keypad_pane_cp04

0x0e9b,	// (0x00011c9c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0e9b,	// (0x00011c9c) vkb2_cell_t_keypad_pane_cp05

0x0eac,	// (0x00011cad) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0eac,	// (0x00011cad) vkb2_cell_t_keypad_pane_cp06

0x0ebf,	// (0x00011cc0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0ebf,	// (0x00011cc0) vkb2_cell_t_keypad_pane_cp07

0x0ed4,	// (0x00011cd5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x0ed4,	// (0x00011cd5) vkb2_cell_t_keypad_pane_cp10

0x0677,	// (0x00011478) vkb2_cell_t_keypad_pane_g1

0x89b8,	// (0x000197b9) vkb2_cell_t_keypad_pane_t1

0xed98,	// (0x0001fb99) popup_grid_graphic2_window

0xe219,	// (0x0001f01a) aid_size_cell_graphic2_ParamLimits

0xe219,	// (0x0001f01a) aid_size_cell_graphic2

0x442e,	// (0x0001522f) bg_popup_window_pane_cp21_ParamLimits

0x442e,	// (0x0001522f) bg_popup_window_pane_cp21

0xe24b,	// (0x0001f04c) graphic2_pages_pane_ParamLimits

0xe24b,	// (0x0001f04c) graphic2_pages_pane

0xe2a3,	// (0x0001f0a4) grid_graphic2_control_pane_ParamLimits

0xe2a3,	// (0x0001f0a4) grid_graphic2_control_pane

0xe2d7,	// (0x0001f0d8) grid_graphic2_pane_ParamLimits

0xe2d7,	// (0x0001f0d8) grid_graphic2_pane

0xe34e,	// (0x0001f14f) cell_graphic2_pane

0xe866,	// (0x0001f667) main_comp_mode_pane

0x7c12,	// (0x00018a13) list_ai3_gene_pane_ParamLimits

0xdbd4,	// (0x0001e9d5) bg_popup_window_pane_cp19_ParamLimits

0x8057,	// (0x00018e58) bg_touch_area_indi_pane_ParamLimits

0x8057,	// (0x00018e58) bg_touch_area_indi_pane

0x806d,	// (0x00018e6e) bg_touch_area_indi_pane_cp01_ParamLimits

0x806d,	// (0x00018e6e) bg_touch_area_indi_pane_cp01

0x8085,	// (0x00018e86) bg_touch_area_indi_pane_cp02_ParamLimits

0x8085,	// (0x00018e86) bg_touch_area_indi_pane_cp02

0x809f,	// (0x00018ea0) bg_touch_area_indi_pane_cp03_ParamLimits

0x809f,	// (0x00018ea0) bg_touch_area_indi_pane_cp03

0x80b9,	// (0x00018eba) popup_slider_window_g1_ParamLimits

0x80d5,	// (0x00018ed6) popup_slider_window_g2_ParamLimits

0x80f1,	// (0x00018ef2) popup_slider_window_g3_ParamLimits

0xfcfc,	// (0x00020afd) popup_slider_window_g_ParamLimits

0x814d,	// (0x00018f4e) popup_slider_window_t1_ParamLimits

0x81c1,	// (0x00018fc2) small_volume_slider_vertical_pane_ParamLimits

0xe34e,	// (0x0001f14f) cell_graphic2_pane_ParamLimits

0xe3b1,	// (0x0001f1b2) bg_button_pane_cp10_ParamLimits

0xe3b1,	// (0x0001f1b2) bg_button_pane_cp10

0xe3c4,	// (0x0001f1c5) bg_button_pane_cp11_ParamLimits

0xe3c4,	// (0x0001f1c5) bg_button_pane_cp11

0xe3d7,	// (0x0001f1d8) graphic2_pages_pane_g1_ParamLimits

0xe3d7,	// (0x0001f1d8) graphic2_pages_pane_g1

0xe3f2,	// (0x0001f1f3) graphic2_pages_pane_g2_ParamLimits

0xe3f2,	// (0x0001f1f3) graphic2_pages_pane_g2

0x0001,

0xfdc0,	// (0x00020bc1) graphic2_pages_pane_g_ParamLimits

0xfdc0,	// (0x00020bc1) graphic2_pages_pane_g

0xe40a,	// (0x0001f20b) graphic2_pages_pane_t1_ParamLimits

0xe40a,	// (0x0001f20b) graphic2_pages_pane_t1

0xe422,	// (0x0001f223) cell_graphic2_control_pane_ParamLimits

0xe422,	// (0x0001f223) cell_graphic2_control_pane

0xe43c,	// (0x0001f23d) cell_graphic2_pane_g1_ParamLimits

0xe43c,	// (0x0001f23d) cell_graphic2_pane_g1

0xc713,	// (0x0001d514) cell_graphic2_pane_g2_ParamLimits

0xc713,	// (0x0001d514) cell_graphic2_pane_g2

0xd9e9,	// (0x0001e7ea) cell_graphic2_pane_g3_ParamLimits

0xd9e9,	// (0x0001e7ea) cell_graphic2_pane_g3

0xc720,	// (0x0001d521) cell_graphic2_pane_g4_ParamLimits

0xc720,	// (0x0001d521) cell_graphic2_pane_g4

0xe449,	// (0x0001f24a) cell_graphic2_pane_g5_ParamLimits

0xe449,	// (0x0001f24a) cell_graphic2_pane_g5

0x0004,

0xfdc5,	// (0x00020bc6) cell_graphic2_pane_g_ParamLimits

0xfdc5,	// (0x00020bc6) cell_graphic2_pane_g

0xe469,	// (0x0001f26a) cell_graphic2_pane_t1_ParamLimits

0xe469,	// (0x0001f26a) cell_graphic2_pane_t1

0x4aa5,	// (0x000158a6) grid_highlight_pane_cp11_ParamLimits

0x4aa5,	// (0x000158a6) grid_highlight_pane_cp11

0x1fe3,	// (0x00012de4) bg_button_pane_cp05

0xe49e,	// (0x0001f29f) cell_graphic2_control_pane_g1

0x670b,	// (0x0001750c) bg_touch_area_indi_pane_g1

0x8c33,	// (0x00019a34) aid_cmod_rocker_key_size

0x8c3d,	// (0x00019a3e) aid_cmode_itu_key_size

0x8c47,	// (0x00019a48) main_cmode_video_pane

0x8c51,	// (0x00019a52) main_comp_mode_itu_pane

0x8c5d,	// (0x00019a5e) main_comp_mode_rocker_pane

0x8c69,	// (0x00019a6a) cell_cmode_rocker_pane_ParamLimits

0x8c69,	// (0x00019a6a) cell_cmode_rocker_pane

0x8c7d,	// (0x00019a7e) cell_cmode_itu_pane_ParamLimits

0x8c7d,	// (0x00019a7e) cell_cmode_itu_pane

0x1fe3,	// (0x00012de4) bg_button_pane_cp06_ParamLimits

0x1fe3,	// (0x00012de4) bg_button_pane_cp06

0x6995,	// (0x00017796) cell_cmode_rocker_pane_g1_ParamLimits

0x6995,	// (0x00017796) cell_cmode_rocker_pane_g1

0x8268,	// (0x00019069) cell_cmode_rocker_pane_g2_ParamLimits

0x8268,	// (0x00019069) cell_cmode_rocker_pane_g2

0x0001,

0xfdd5,	// (0x00020bd6) cell_cmode_rocker_pane_g_ParamLimits

0xfdd5,	// (0x00020bd6) cell_cmode_rocker_pane_g

0xe866,	// (0x0001f667) bg_button_pane_cp07

0x8c94,	// (0x00019a95) cell_cmode_itu_pane_g1

0x8c9d,	// (0x00019a9e) cell_cmode_itu_pane_t1

0x8cab,	// (0x00019aac) cell_cmode_itu_pane_t2

0x0001,

0xfdda,	// (0x00020bdb) cell_cmode_itu_pane_t

0x8496,	// (0x00019297) aid_touch_ctrl_left

0x849e,	// (0x0001929f) aid_touch_ctrl_right

0xe866,	// (0x0001f667) compa_mode_pane

0xe4ab,	// (0x0001f2ac) aid_cmod_rocker_key_size_cp

0xe4b5,	// (0x0001f2b6) aid_cmode_itu_key_size_cp

0x8ccd,	// (0x00019ace) compa_mode_pane_g1

0x8cd5,	// (0x00019ad6) compa_mode_pane_g2

0x8cdd,	// (0x00019ade) compa_mode_pane_g3

0x0002,

0xfddf,	// (0x00020be0) compa_mode_pane_g

0xe4bf,	// (0x0001f2c0) main_comp_mode_itu_pane_cp

0xe4c7,	// (0x0001f2c8) main_comp_mode_rocker_pane_cp

0xe4cf,	// (0x0001f2d0) cell_cmode_itu_pane_cp_ParamLimits

0xe4cf,	// (0x0001f2d0) cell_cmode_itu_pane_cp

0xe4e4,	// (0x0001f2e5) cell_cmode_rocker_pane_cp_ParamLimits

0xe4e4,	// (0x0001f2e5) cell_cmode_rocker_pane_cp

0x1fe3,	// (0x00012de4) bg_button_pane_cp06_cp_ParamLimits

0x1fe3,	// (0x00012de4) bg_button_pane_cp06_cp

0x6995,	// (0x00017796) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6995,	// (0x00017796) cell_cmode_rocker_pane_g1_cp

0x670b,	// (0x0001750c) cell_cmode_rocker_pane_g2_cp

0xe866,	// (0x0001f667) bg_button_pane_cp07_cp

0xe4f6,	// (0x0001f2f7) cell_cmode_itu_pane_g1_cp

0xe4ff,	// (0x0001f300) cell_cmode_itu_pane_t1_cp

0xe4ff,	// (0x0001f300) cell_cmode_itu_pane_t2_cp

0xcf99,	// (0x0001dd9a) settings_code_pane_cp2

0x11a7,	// (0x00011fa8) bg_popup_window_pane_cp3_ParamLimits

0x1639,	// (0x0001243a) heading_pane_cp3_ParamLimits

0x1645,	// (0x00012446) listscroll_popup_graphic_pane_ParamLimits

0x040a,	// (0x0001120b) fep_hwr_aid_pane_ParamLimits

0x089d,	// (0x0001169e) aid_touch_sctrl_top_ParamLimits

0x08b8,	// (0x000116b9) sctrl_sk_top_pane_g1_ParamLimits

0x0677,	// (0x00011478) sctrl_sk_top_pane_g2_ParamLimits

0xfd15,	// (0x00020b16) sctrl_sk_top_pane_g_ParamLimits

0x08c5,	// (0x000116c6) sctrl_sk_top_pane_t1_ParamLimits

0x089d,	// (0x0001169e) aid_touch_sctrl_bottom_ParamLimits

0x08c5,	// (0x000116c6) sctrl_sk_bottom_pane_t1_ParamLimits

0x83dc,	// (0x000191dd) aid_area_touch_clock

0xb009,	// (0x0001be0a) aid_vkb2_area_top_pane_cell_ParamLimits

0xb009,	// (0x0001be0a) aid_vkb2_area_top_pane_cell

0xb0b4,	// (0x0001beb5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb0b4,	// (0x0001beb5) aid_vkb2_area_bottom_pane_cell

0x8945,	// (0x00019746) popup_char_count_window

0x8d33,	// (0x00019b34) popup_char_count_window_g1

0x8d3c,	// (0x00019b3d) popup_char_count_window_g2

0x8d45,	// (0x00019b46) popup_char_count_window_g3

0x0002,

0xfde6,	// (0x00020be7) popup_char_count_window_g

0x8d4e,	// (0x00019b4f) popup_char_count_window_t1

0x0972,	// (0x00011773) popup_fep_char_preview_window_ParamLimits

0x0972,	// (0x00011773) popup_fep_char_preview_window

0xb029,	// (0x0001be2a) vkb2_top_candi_pane_ParamLimits

0xb029,	// (0x0001be2a) vkb2_top_candi_pane

0xe50d,	// (0x0001f30e) cell_vkb2_top_candi_pane_ParamLimits

0xe50d,	// (0x0001f30e) cell_vkb2_top_candi_pane

0x0ee9,	// (0x00011cea) bg_popup_fep_char_preview_window_ParamLimits

0x0ee9,	// (0x00011cea) bg_popup_fep_char_preview_window

0x0ef7,	// (0x00011cf8) popup_fep_char_preview_window_t1_ParamLimits

0x0ef7,	// (0x00011cf8) popup_fep_char_preview_window_t1

0x8dce,	// (0x00019bcf) bg_popup_fep_char_preview_window_g1

0x8dd6,	// (0x00019bd7) bg_popup_fep_char_preview_window_g2

0x8dde,	// (0x00019bdf) bg_popup_fep_char_preview_window_g3

0x8de6,	// (0x00019be7) bg_popup_fep_char_preview_window_g4

0x8dee,	// (0x00019bef) bg_popup_fep_char_preview_window_g5

0x0f31,	// (0x00011d32) bg_popup_fep_char_preview_window_g6

0x8df6,	// (0x00019bf7) bg_popup_fep_char_preview_window_g7

0x8dfe,	// (0x00019bff) bg_popup_fep_char_preview_window_g8

0x8e06,	// (0x00019c07) bg_popup_fep_char_preview_window_g9

0x0008,

0xfded,	// (0x00020bee) bg_popup_fep_char_preview_window_g

0x0677,	// (0x00011478) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0677,	// (0x00011478) cell_vkb2_top_candi_pane_g1

0x0685,	// (0x00011486) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0685,	// (0x00011486) cell_vkb2_top_candi_pane_g2

0x8dad,	// (0x00019bae) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8dad,	// (0x00019bae) cell_vkb2_top_candi_pane_g3

0x0f39,	// (0x00011d3a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x0f39,	// (0x00011d3a) cell_vkb2_top_candi_pane_g4

0x7059,	// (0x00017e5a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7059,	// (0x00017e5a) cell_vkb2_top_candi_pane_g5

0x0f5a,	// (0x00011d5b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0f5a,	// (0x00011d5b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe00,	// (0x00020c01) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe00,	// (0x00020c01) cell_vkb2_top_candi_pane_g

0x0f68,	// (0x00011d69) cell_vkb2_top_candi_pane_t1

0x026a,	// (0x0001106b) aid_size_touch_slider_mark_ParamLimits

0x026a,	// (0x0001106b) aid_size_touch_slider_mark

0xe287,	// (0x0001f088) grid_graphic2_catg_pane_ParamLimits

0xe287,	// (0x0001f088) grid_graphic2_catg_pane

0xe31d,	// (0x0001f11e) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x0001f11e) popup_grid_graphic2_window_t1

0xe333,	// (0x0001f134) popup_grid_graphic2_window_t2_ParamLimits

0xe333,	// (0x0001f134) popup_grid_graphic2_window_t2

0x0001,

0xfdbb,	// (0x00020bbc) popup_grid_graphic2_window_t_ParamLimits

0xfdbb,	// (0x00020bbc) popup_grid_graphic2_window_t

0x1fe3,	// (0x00012de4) bg_button_pane_cp05_ParamLimits

0xe49e,	// (0x0001f29f) cell_graphic2_control_pane_g1_ParamLimits

0xe561,	// (0x0001f362) cell_graphic2_catg_pane_ParamLimits

0xe561,	// (0x0001f362) cell_graphic2_catg_pane

0xe866,	// (0x0001f667) bg_button_pane_cp12

0xe573,	// (0x0001f374) cell_graphic2_catg_pane_g1

0x83a8,	// (0x000191a9) cell_tb_ext_pane_t1_ParamLimits

0x0d05,	// (0x00011b06) vkb2_top_cell_right_narrow_pane_ParamLimits

0x0d05,	// (0x00011b06) vkb2_top_cell_right_narrow_pane

0x0d1d,	// (0x00011b1e) vkb2_top_cell_right_wide_pane_ParamLimits

0x0d1d,	// (0x00011b1e) vkb2_top_cell_right_wide_pane

0x03fc,	// (0x000111fd) bg_vkb2_func_pane_ParamLimits

0x03fc,	// (0x000111fd) bg_vkb2_func_pane

0x0d8e,	// (0x00011b8f) vkb2_top_cell_left_pane_g1_ParamLimits

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp03

0x0e02,	// (0x00011c03) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3d37,	// (0x00014b38) bg_vkb2_func_pane_g1

0x3d3f,	// (0x00014b40) bg_vkb2_func_pane_g2

0x3d4f,	// (0x00014b50) bg_vkb2_func_pane_g3

0x3d47,	// (0x00014b48) bg_vkb2_func_pane_g4

0x3d57,	// (0x00014b58) bg_vkb2_func_pane_g5

0x3d5f,	// (0x00014b60) bg_vkb2_func_pane_g6

0x3d67,	// (0x00014b68) bg_vkb2_func_pane_g7

0x3d6f,	// (0x00014b70) bg_vkb2_func_pane_g8

0x3d2f,	// (0x00014b30) bg_vkb2_func_pane_g9

0x0008,

0xfe0d,	// (0x00020c0e) bg_vkb2_func_pane_g

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp01

0x0d8e,	// (0x00011b8f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x0d8e,	// (0x00011b8f) vkb2_top_cell_right_wide_pane_g1

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x03fc,	// (0x000111fd) bg_vkb2_fuc_pane_cp02

0x0e02,	// (0x00011c03) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0e02,	// (0x00011c03) vkb2_top_cell_right_narrow_pane_g1

0xdb0e,	// (0x0001e90f) aid_touch_area_decrease_ParamLimits

0xdb0e,	// (0x0001e90f) aid_touch_area_decrease

0xdb48,	// (0x0001e949) aid_touch_area_increase_ParamLimits

0xdb48,	// (0x0001e949) aid_touch_area_increase

0xdb70,	// (0x0001e971) aid_touch_area_mute_ParamLimits

0xdb70,	// (0x0001e971) aid_touch_area_mute

0xdba0,	// (0x0001e9a1) aid_touch_area_slider_ParamLimits

0xdba0,	// (0x0001e9a1) aid_touch_area_slider

0xdbe0,	// (0x0001e9e1) popup_slider_window_g4_ParamLimits

0xdbe0,	// (0x0001e9e1) popup_slider_window_g4

0xdc08,	// (0x0001ea09) popup_slider_window_g5_ParamLimits

0xdc08,	// (0x0001ea09) popup_slider_window_g5

0xdc3c,	// (0x0001ea3d) popup_slider_window_g6_ParamLimits

0xdc3c,	// (0x0001ea3d) popup_slider_window_g6

0x817b,	// (0x00018f7c) popup_slider_window_t2_ParamLimits

0x817b,	// (0x00018f7c) popup_slider_window_t2

0x0001,

0xfd09,	// (0x00020b0a) popup_slider_window_t_ParamLimits

0xfd09,	// (0x00020b0a) popup_slider_window_t

0xdc58,	// (0x0001ea59) slider_pane_ParamLimits

0xdc58,	// (0x0001ea59) slider_pane

0x8e29,	// (0x00019c2a) slider_pane_g1_ParamLimits

0x8e29,	// (0x00019c2a) slider_pane_g1

0x8e3d,	// (0x00019c3e) slider_pane_g2_ParamLimits

0x8e3d,	// (0x00019c3e) slider_pane_g2

0x8e53,	// (0x00019c54) slider_pane_g3_ParamLimits

0x8e53,	// (0x00019c54) slider_pane_g3

0x0003,

0xfe20,	// (0x00020c21) slider_pane_g_ParamLimits

0xfe20,	// (0x00020c21) slider_pane_g

0xc677,	// (0x0001d478) popup_tb_float_extension_window_ParamLimits

0xc677,	// (0x0001d478) popup_tb_float_extension_window

0x8e7f,	// (0x00019c80) aid_size_cell_tb_float_ext

0xe866,	// (0x0001f667) bg_popup_sub_window_cp28

0x8e8b,	// (0x00019c8c) grid_tb_float_ext_pane

0x8e97,	// (0x00019c98) cell_tb_float_ext_pane_ParamLimits

0x8e97,	// (0x00019c98) cell_tb_float_ext_pane

0x8eb3,	// (0x00019cb4) cell_tb_float_ext_pane_g1

0x8ebc,	// (0x00019cbd) grid_highlight_pane_cp12

0xae0a,	// (0x0001bc0b) cell_last_hwr_side_pane_ParamLimits

0xae0a,	// (0x0001bc0b) cell_last_hwr_side_pane

0x670b,	// (0x0001750c) cell_last_hwr_side_pane_g1

0x8ec5,	// (0x00019cc6) cell_last_hwr_side_pane_g2

0x0001,

0xfe29,	// (0x00020c2a) cell_last_hwr_side_pane_g

0xb190,	// (0x0001bf91) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb190,	// (0x0001bf91) vkb2_area_bottom_space_btn_pane

0x0677,	// (0x00011478) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x89b8,	// (0x000197b9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0f68,	// (0x00011d69) cell_vkb2_top_candi_pane_t1_ParamLimits

0x0f86,	// (0x00011d87) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x0f86,	// (0x00011d87) vkb2_area_bottom_space_btn_pane_g1

0x0fc0,	// (0x00011dc1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0fc0,	// (0x00011dc1) vkb2_area_bottom_space_btn_pane_g2

0x0ff6,	// (0x00011df7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x0ff6,	// (0x00011df7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2e,	// (0x00020c2f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2e,	// (0x00020c2f) vkb2_area_bottom_space_btn_pane_g

0x04c1,	// (0x000112c2) cel_fep_hwr_func_pane_ParamLimits

0x04c1,	// (0x000112c2) cel_fep_hwr_func_pane

0xaddf,	// (0x0001bbe0) cell_hwr_side_button_pane_ParamLimits

0xaddf,	// (0x0001bbe0) cell_hwr_side_button_pane

0x83dc,	// (0x000191dd) aid_area_touch_clock_ParamLimits

0x144b,	// (0x0001224c) bg_uniindi_top_pane_ParamLimits

0x83f0,	// (0x000191f1) uniindi_top_pane_g1_ParamLimits

0x8406,	// (0x00019207) uniindi_top_pane_g2_ParamLimits

0x8412,	// (0x00019213) uniindi_top_pane_g3_ParamLimits

0x8423,	// (0x00019224) uniindi_top_pane_g4_ParamLimits

0xfd41,	// (0x00020b42) uniindi_top_pane_g_ParamLimits

0x8430,	// (0x00019231) uniindi_top_pane_t1_ParamLimits

0x144b,	// (0x0001224c) bg_vkb2_func_pane_cp01_ParamLimits

0x144b,	// (0x0001224c) bg_vkb2_func_pane_cp01

0x8ece,	// (0x00019ccf) cel_fep_hwr_func_pane_g1_ParamLimits

0x8ece,	// (0x00019ccf) cel_fep_hwr_func_pane_g1

0x144b,	// (0x0001224c) bg_vkb2_func_pane_cp02_ParamLimits

0x144b,	// (0x0001224c) bg_vkb2_func_pane_cp02

0x8ece,	// (0x00019ccf) cell_hwr_side_button_pane_g1_ParamLimits

0x8ece,	// (0x00019ccf) cell_hwr_side_button_pane_g1

0x3b82,	// (0x00014983) status_pane_g4_ParamLimits

0x3b82,	// (0x00014983) status_pane_g4

0x3b9c,	// (0x0001499d) status_pane_t1

0x6465,	// (0x00017266) form2_midp_gauge_slider_cont_pane

0x646d,	// (0x0001726e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd2d6,	// (0x0001e0d7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd2e8,	// (0x0001e0e9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x00020902) form2_midp_gauge_slider_pane_t_ParamLimits

0x64a3,	// (0x000172a4) form2_midp_slider_pane_ParamLimits

0x093a,	// (0x0001173b) aid_size_cell_func_vkb2_ParamLimits

0x093a,	// (0x0001173b) aid_size_cell_func_vkb2

0x8e6b,	// (0x00019c6c) slider_pane_g4_ParamLimits

0x8e6b,	// (0x00019c6c) slider_pane_g4

0xb1f1,	// (0x0001bff2) form2_midp_gauge_slider_pane_t2_cp01

0xb1ff,	// (0x0001c000) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb1ff,	// (0x0001c000) form2_midp_gauge_slider_pane_t3_cp01

0x106b,	// (0x00011e6c) form2_midp_slider_pane_cp01

0xe866,	// (0x0001f667) navi_smil_pane

0x8f07,	// (0x00019d08) navi_smil_pane_g1

0x8f0f,	// (0x00019d10) navi_smil_pane_t1

0x8edc,	// (0x00019cdd) form2_midp_slider_pane_g1

0x8ee5,	// (0x00019ce6) form2_midp_slider_pane_g2

0x8eed,	// (0x00019cee) form2_midp_slider_pane_g3

0x8edc,	// (0x00019cdd) form2_midp_slider_pane_g4

0xe57c,	// (0x0001f37d) form2_midp_slider_pane_g5

0x0004,

0xfe37,	// (0x00020c38) form2_midp_slider_pane_g

0x1030,	// (0x00011e31) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1030,	// (0x00011e31) vkb2_area_bottom_space_btn_pane_g4

0xc87f,	// (0x0001d680) lc0_navi_pane_ParamLimits

0xc87f,	// (0x0001d680) lc0_navi_pane

0xc8ef,	// (0x0001d6f0) lc0_stat_indi_pane_ParamLimits

0xc8ef,	// (0x0001d6f0) lc0_stat_indi_pane

0xc904,	// (0x0001d705) ls0_title_pane_ParamLimits

0xc904,	// (0x0001d705) ls0_title_pane

0x1fe3,	// (0x00012de4) bg_popup_sub_pane_cp14_ParamLimits

0x83c3,	// (0x000191c4) list_uniindi_pane_ParamLimits

0x83cf,	// (0x000191d0) uniindi_top_pane_ParamLimits

0x846e,	// (0x0001926f) list_single_uniindi_pane_g1_ParamLimits

0x8481,	// (0x00019282) list_single_uniindi_pane_t1_ParamLimits

0xb21c,	// (0x0001c01d) lc0_stat_clock_pane_ParamLimits

0xb21c,	// (0x0001c01d) lc0_stat_clock_pane

0xe585,	// (0x0001f386) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x0001f386) lc0_stat_indi_pane_g1

0xe592,	// (0x0001f393) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x0001f393) lc0_stat_indi_pane_g2

0x0001,

0xfe42,	// (0x00020c43) lc0_stat_indi_pane_g_ParamLimits

0xfe42,	// (0x00020c43) lc0_stat_indi_pane_g

0xb229,	// (0x0001c02a) lc0_uni_indicator_pane_ParamLimits

0xb229,	// (0x0001c02a) lc0_uni_indicator_pane

0xe59f,	// (0x0001f3a0) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x0001f3a0) ls0_title_pane_g1

0xe5b3,	// (0x0001f3b4) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x0001f3b4) ls0_title_pane_t1

0xb236,	// (0x0001c037) lc0_uni_indicator_pane_g1_ParamLimits

0xb236,	// (0x0001c037) lc0_uni_indicator_pane_g1

0x8f81,	// (0x00019d82) lc0_stat_clock_pane_t1

0xe866,	// (0x0001f667) main_ai5_pane

0x8f8f,	// (0x00019d90) ai5_sk_pane_ParamLimits

0x8f8f,	// (0x00019d90) ai5_sk_pane

0xe5e1,	// (0x0001f3e2) cell_ai5_widget_pane_ParamLimits

0xe5e1,	// (0x0001f3e2) cell_ai5_widget_pane

0x9012,	// (0x00019e13) aid_size_cell_widget_grid

0x9026,	// (0x00019e27) bg_ai5_widget_pane_ParamLimits

0x9026,	// (0x00019e27) bg_ai5_widget_pane

0xe66e,	// (0x0001f46f) cell_ai5_widget_pane_g2

0xe67e,	// (0x0001f47f) cell_ai5_widget_pane_g3

0xe69d,	// (0x0001f49e) cell_ai5_widget_pane_g4

0xe6a9,	// (0x0001f4aa) cell_ai5_widget_pane_g5

0xe6b5,	// (0x0001f4b6) cell_ai5_widget_pane_g6

0xe6c1,	// (0x0001f4c2) cell_ai5_widget_pane_g7

0xe709,	// (0x0001f50a) cell_ai5_widget_pane_t1_ParamLimits

0xe709,	// (0x0001f50a) cell_ai5_widget_pane_t1

0xe726,	// (0x0001f527) cell_ai5_widget_pane_t2_ParamLimits

0xe726,	// (0x0001f527) cell_ai5_widget_pane_t2

0xe73e,	// (0x0001f53f) cell_ai5_widget_pane_t3_ParamLimits

0xe73e,	// (0x0001f53f) cell_ai5_widget_pane_t3

0xe756,	// (0x0001f557) cell_ai5_widget_pane_t4_ParamLimits

0xe756,	// (0x0001f557) cell_ai5_widget_pane_t4

0xe770,	// (0x0001f571) cell_ai5_widget_pane_t5_ParamLimits

0xe770,	// (0x0001f571) cell_ai5_widget_pane_t5

0x9171,	// (0x00019f72) cell_ai5_widget_pane_t6_ParamLimits

0x9171,	// (0x00019f72) cell_ai5_widget_pane_t6

0x9183,	// (0x00019f84) cell_ai5_widget_pane_t7_ParamLimits

0x9183,	// (0x00019f84) cell_ai5_widget_pane_t7

0xe78f,	// (0x0001f590) cell_ai5_widget_pane_t8_ParamLimits

0xe78f,	// (0x0001f590) cell_ai5_widget_pane_t8

0x0009,

0xfe5c,	// (0x00020c5d) cell_ai5_widget_pane_t_ParamLimits

0xfe5c,	// (0x00020c5d) cell_ai5_widget_pane_t

0xe7db,	// (0x0001f5dc) grid_ai5_widget_pane

0x1fe3,	// (0x00012de4) highlight_cell_ai5_widget_pane_ParamLimits

0x1fe3,	// (0x00012de4) highlight_cell_ai5_widget_pane

0xe7f2,	// (0x0001f5f3) ai5_sk_left_pane

0xe7fc,	// (0x0001f5fd) ai5_sk_middle_pane

0xe806,	// (0x0001f607) ai5_sk_right_pane

0x921d,	// (0x0001a01e) bg_ai5_widget_pane_g1_ParamLimits

0x921d,	// (0x0001a01e) bg_ai5_widget_pane_g1

0x9229,	// (0x0001a02a) bg_ai5_widget_pane_g2_ParamLimits

0x9229,	// (0x0001a02a) bg_ai5_widget_pane_g2

0x9235,	// (0x0001a036) bg_ai5_widget_pane_g3_ParamLimits

0x9235,	// (0x0001a036) bg_ai5_widget_pane_g3

0x9241,	// (0x0001a042) bg_ai5_widget_pane_g4_ParamLimits

0x9241,	// (0x0001a042) bg_ai5_widget_pane_g4

0x924d,	// (0x0001a04e) bg_ai5_widget_pane_g5_ParamLimits

0x924d,	// (0x0001a04e) bg_ai5_widget_pane_g5

0x9259,	// (0x0001a05a) bg_ai5_widget_pane_g6_ParamLimits

0x9259,	// (0x0001a05a) bg_ai5_widget_pane_g6

0x9265,	// (0x0001a066) bg_ai5_widget_pane_g7_ParamLimits

0x9265,	// (0x0001a066) bg_ai5_widget_pane_g7

0x9271,	// (0x0001a072) bg_ai5_widget_pane_g8_ParamLimits

0x9271,	// (0x0001a072) bg_ai5_widget_pane_g8

0x927d,	// (0x0001a07e) bg_ai5_widget_pane_g9_ParamLimits

0x927d,	// (0x0001a07e) bg_ai5_widget_pane_g9

0x0008,

0xfe71,	// (0x00020c72) bg_ai5_widget_pane_g_ParamLimits

0xfe71,	// (0x00020c72) bg_ai5_widget_pane_g

0x92a4,	// (0x0001a0a5) cell_shortcut_ai5_widget_pane_ParamLimits

0x92a4,	// (0x0001a0a5) cell_shortcut_ai5_widget_pane

0x128d,	// (0x0001208e) bg_cell_shortcut_ai5_widget_pane

0x92b6,	// (0x0001a0b7) cell_grid_ai5_widget_pane_g1

0x92bf,	// (0x0001a0c0) highlight_cell_shortcut_ai5_widget_pane

0x3d37,	// (0x00014b38) ai5_sk_left_pane_g1

0x92c7,	// (0x0001a0c8) ai5_sk_left_pane_g2

0x92cf,	// (0x0001a0d0) ai5_sk_left_pane_g3

0x92d7,	// (0x0001a0d8) ai5_sk_left_pane_g4

0x0003,

0xfe84,	// (0x00020c85) ai5_sk_left_pane_g

0x92df,	// (0x0001a0e0) ai5_sk_left_pane_t1

0x3d3f,	// (0x00014b40) ai5_sk_right_pane_g1

0x92ed,	// (0x0001a0ee) ai5_sk_right_pane_g2

0x92f5,	// (0x0001a0f6) ai5_sk_right_pane_g3

0x92fd,	// (0x0001a0fe) ai5_sk_right_pane_g4

0x0003,

0xfe8d,	// (0x00020c8e) ai5_sk_right_pane_g

0x9305,	// (0x0001a106) ai5_sk_right_pane_t1

0x3d3f,	// (0x00014b40) ai5_sk_middle_pane_g1

0x3d37,	// (0x00014b38) ai5_sk_middle_pane_g2

0x3d57,	// (0x00014b58) ai5_sk_middle_pane_g3

0x92f5,	// (0x0001a0f6) ai5_sk_middle_pane_g4

0x92cf,	// (0x0001a0d0) ai5_sk_middle_pane_g5

0x9313,	// (0x0001a114) ai5_sk_middle_pane_g6

0xe810,	// (0x0001f611) ai5_sk_middle_pane_g7

0x0006,

0xfe96,	// (0x00020c97) ai5_sk_middle_pane_g

0xc769,	// (0x0001d56a) aid_touch_area_size_lc0_ParamLimits

0xc769,	// (0x0001d56a) aid_touch_area_size_lc0

0x06a6,	// (0x000114a7) cell_hwr_candidate_pane_t1_ParamLimits

0x383a,	// (0x0001463b) aid_touch_navi_pane

0xca0e,	// (0x0001d80f) status_dt_navi_pane_ParamLimits

0xca0e,	// (0x0001d80f) status_dt_navi_pane

0xca26,	// (0x0001d827) status_dt_sta_pane_ParamLimits

0xca26,	// (0x0001d827) status_dt_sta_pane

0xe818,	// (0x0001f619) dt_sta_controll_pane

0xe825,	// (0x0001f626) dt_sta_indi_pane

0xe832,	// (0x0001f633) dt_sta_title_pane

0x144b,	// (0x0001224c) bg_dt_sta_indi_pane_ParamLimits

0x144b,	// (0x0001224c) bg_dt_sta_indi_pane

0xe844,	// (0x0001f645) dt_sta_battery_pane

0xe84c,	// (0x0001f64d) dt_sta_indi_pane_g1

0xe855,	// (0x0001f656) dt_sta_indi_pane_g2

0xe884,	// (0x0001f685) dt_sta_indi_pane_g3

0x0002,

0xfea5,	// (0x00020ca6) dt_sta_indi_pane_g

0xe88d,	// (0x0001f68e) dt_sta_signal_pane

0x1fe3,	// (0x00012de4) bg_dt_sta_title_pane_ParamLimits

0x1fe3,	// (0x00012de4) bg_dt_sta_title_pane

0xe896,	// (0x0001f697) dt_sta_title_pane_g1

0xe89e,	// (0x0001f69f) dt_sta_title_pane_t1_ParamLimits

0xe89e,	// (0x0001f69f) dt_sta_title_pane_t1

0xe866,	// (0x0001f667) bg_dt_sta_control_pane

0xe8b3,	// (0x0001f6b4) dt_sta_controll_pane_g1

0xe8bc,	// (0x0001f6bd) bg_dt_sta_title_pane_g1

0xe8c5,	// (0x0001f6c6) bg_dt_sta_title_pane_g2

0xe8ce,	// (0x0001f6cf) bg_dt_sta_title_pane_g3

0x0002,

0xfeac,	// (0x00020cad) bg_dt_sta_title_pane_g

0x670b,	// (0x0001750c) bg_dt_sta_indi_pane_g1

0x93c1,	// (0x0001a1c2) dt_sta_signal_pane_g1

0x93c9,	// (0x0001a1ca) dt_sta_signal_pane_g2

0x0001,

0xfeb3,	// (0x00020cb4) dt_sta_signal_pane_g

0x93d1,	// (0x0001a1d2) dt_sta_battery_pane_g1

0x93da,	// (0x0001a1db) dt_sta_battery_pane_t1

0x670b,	// (0x0001750c) bg_dt_sta_control_pane_g1

0x28a1,	// (0x000136a2) fep_china_uni_eep_pane

0x28a9,	// (0x000136aa) fep_china_uni_entry_pane_ParamLimits

0x28b9,	// (0x000136ba) popup_fep_china_uni_window_g1_ParamLimits

0x28c9,	// (0x000136ca) popup_fep_china_uni_window_g2_ParamLimits

0x28c9,	// (0x000136ca) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00020531) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00020531) popup_fep_china_uni_window_g

0x93e9,	// (0x0001a1ea) fep_china_uni_eep_pane_g1

0x93f1,	// (0x0001a1f2) fep_china_uni_eep_pane_t1

0x8efe,	// (0x00019cff) aid_touch_area_size_smil_player

0x3992,	// (0x00014793) lc0_clock_pane

0x3b90,	// (0x00014991) status_pane_g5_ParamLimits

0x3b90,	// (0x00014991) status_pane_g5

0xc1a1,	// (0x0001cfa2) popup_keymap_window

0x3b4e,	// (0x0001494f) status_icon_pane

0xe67e,	// (0x0001f47f) cell_ai5_widget_pane_g3_ParamLimits

0xe69d,	// (0x0001f49e) cell_ai5_widget_pane_g4_ParamLimits

0xe6a9,	// (0x0001f4aa) cell_ai5_widget_pane_g5_ParamLimits

0xe6cd,	// (0x0001f4ce) cell_ai5_widget_pane_g8_ParamLimits

0xe6cd,	// (0x0001f4ce) cell_ai5_widget_pane_g8

0xe6e1,	// (0x0001f4e2) cell_ai5_widget_pane_g9_ParamLimits

0xe6e1,	// (0x0001f4e2) cell_ai5_widget_pane_g9

0xe6f5,	// (0x0001f4f6) cell_ai5_widget_pane_g10_ParamLimits

0xe6f5,	// (0x0001f4f6) cell_ai5_widget_pane_g10

0x9400,	// (0x0001a201) status_icon_pane_g1

0xe866,	// (0x0001f667) bg_popup_sub_pane_cp13

0x9408,	// (0x0001a209) popup_keymap_window_t1

0xbf91,	// (0x0001cd92) control_pane_g6_ParamLimits

0xbf91,	// (0x0001cd92) control_pane_g6

0xbf9e,	// (0x0001cd9f) control_pane_g7_ParamLimits

0xbf9e,	// (0x0001cd9f) control_pane_g7

0xbfab,	// (0x0001cdac) control_pane_g8_ParamLimits

0xbfab,	// (0x0001cdac) control_pane_g8

0xe818,	// (0x0001f619) dt_sta_controll_pane_ParamLimits

0xe825,	// (0x0001f626) dt_sta_indi_pane_ParamLimits

0xe832,	// (0x0001f633) dt_sta_title_pane_ParamLimits

0x1980,	// (0x00012781) aid_size_touch_scroll_bar_cale

0xee75,	// (0x0001fc76) popup_discreet_window_ParamLimits

0xee75,	// (0x0001fc76) popup_discreet_window

0xaa49,	// (0x0001b84a) popup_sk_window

0x442e,	// (0x0001522f) bg_popup_sub_pane_cp28_ParamLimits

0x442e,	// (0x0001522f) bg_popup_sub_pane_cp28

0x9416,	// (0x0001a217) popup_discreet_window_g1_ParamLimits

0x9416,	// (0x0001a217) popup_discreet_window_g1

0x9436,	// (0x0001a237) popup_discreet_window_t1_ParamLimits

0x9436,	// (0x0001a237) popup_discreet_window_t1

0x9454,	// (0x0001a255) popup_discreet_window_t2_ParamLimits

0x9454,	// (0x0001a255) popup_discreet_window_t2

0x0002,

0xfeb8,	// (0x00020cb9) popup_discreet_window_t_ParamLimits

0xfeb8,	// (0x00020cb9) popup_discreet_window_t

0x10a1,	// (0x00011ea2) popup_sk_window_g1

0x10ab,	// (0x00011eac) popup_sk_window_g2

0x0001,

0xfebf,	// (0x00020cc0) popup_sk_window_g

0x94a6,	// (0x0001a2a7) popup_sk_window_t1

0x94b4,	// (0x0001a2b5) popup_sk_window_t1_copy1

0xe66e,	// (0x0001f46f) cell_ai5_widget_pane_g2_ParamLimits

0xe7a1,	// (0x0001f5a2) cell_ai5_widget_pane_t9_ParamLimits

0xe7a1,	// (0x0001f5a2) cell_ai5_widget_pane_t9

0xe866,	// (0x0001f667) main_fep_fshwr2_pane

0xe8d7,	// (0x0001f6d8) aid_fshwr2_btn_pane

0xe8df,	// (0x0001f6e0) aid_fshwr2_syb_pane

0xe8e7,	// (0x0001f6e8) aid_fshwr2_txt_pane

0xe8ef,	// (0x0001f6f0) fshwr2_func_candi_pane

0xe8f9,	// (0x0001f6fa) fshwr2_hwr_syb_pane

0xe905,	// (0x0001f706) fshwr2_icf_pane

0xe866,	// (0x0001f667) fshwr2_icf_bg_pane

0xe90f,	// (0x0001f710) fshwr2_icf_pane_t1_ParamLimits

0xe90f,	// (0x0001f710) fshwr2_icf_pane_t1

0x670b,	// (0x0001750c) fshwr2_func_candi_pane_g1

0x9527,	// (0x0001a328) fshwr2_func_candi_row_pane_ParamLimits

0x9527,	// (0x0001a328) fshwr2_func_candi_row_pane

0xe927,	// (0x0001f728) cell_fshwr2_syb_pane_ParamLimits

0xe927,	// (0x0001f728) cell_fshwr2_syb_pane

0x6995,	// (0x00017796) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6995,	// (0x00017796) fshwr2_hwr_syb_pane_g1

0xe866,	// (0x0001f667) bg_popup_call_pane_cp01

0x9552,	// (0x0001a353) fshwr2_func_candi_cell_pane_ParamLimits

0x9552,	// (0x0001a353) fshwr2_func_candi_cell_pane

0x9584,	// (0x0001a385) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9584,	// (0x0001a385) fshwr2_func_candi_cell_bg_pane

0x959e,	// (0x0001a39f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x959e,	// (0x0001a39f) fshwr2_func_candi_cell_pane_g1

0x95be,	// (0x0001a3bf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95be,	// (0x0001a3bf) fshwr2_func_candi_cell_pane_t1

0xe866,	// (0x0001f667) bg_button_pane_cp08

0x2e2f,	// (0x00013c30) cell_fshwr2_syb_bg_pane

0xe940,	// (0x0001f741) cell_fshwr2_syb_bg_pane_g1

0xe948,	// (0x0001f749) cell_fshwr2_syb_bg_pane_t1

0x1fe3,	// (0x00012de4) main_tmo_pane

0xcd5d,	// (0x0001db5e) uni_indicator_pane_g1_ParamLimits

0xcd72,	// (0x0001db73) uni_indicator_pane_g2_ParamLimits

0xcd87,	// (0x0001db88) uni_indicator_pane_g3_ParamLimits

0xcd9d,	// (0x0001db9e) uni_indicator_pane_g4_ParamLimits

0xcd9d,	// (0x0001db9e) uni_indicator_pane_g4

0xcdb1,	// (0x0001dbb2) uni_indicator_pane_g5_ParamLimits

0xcdb1,	// (0x0001dbb2) uni_indicator_pane_g5

0xcdc5,	// (0x0001dbc6) uni_indicator_pane_g6_ParamLimits

0xcdc5,	// (0x0001dbc6) uni_indicator_pane_g6

0xf928,	// (0x00020729) uni_indicator_pane_g_ParamLimits

0xdade,	// (0x0001e8df) popup_tmo_note_window_ParamLimits

0xdade,	// (0x0001e8df) popup_tmo_note_window

0xe866,	// (0x0001f667) fshwr2_bg_pane

0x95af,	// (0x0001a3b0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x95af,	// (0x0001a3b0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec4,	// (0x00020cc5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec4,	// (0x00020cc5) fshwr2_func_candi_cell_pane_g

0x670b,	// (0x0001750c) bg_popup_window_pane_cp01

0x95e8,	// (0x0001a3e9) bg_popup_window_pane_g1_cp01

0x95f1,	// (0x0001a3f2) bg_popup_window_pane_cp22_ParamLimits

0x95f1,	// (0x0001a3f2) bg_popup_window_pane_cp22

0x95ff,	// (0x0001a400) listscroll_tmo_link_pane_ParamLimits

0x95ff,	// (0x0001a400) listscroll_tmo_link_pane

0x963f,	// (0x0001a440) popup_tmo_note_window_g1_ParamLimits

0x963f,	// (0x0001a440) popup_tmo_note_window_g1

0x964c,	// (0x0001a44d) tmo_note_info_pane_ParamLimits

0x964c,	// (0x0001a44d) tmo_note_info_pane

0xe957,	// (0x0001f758) list_tmo_note_info_pane_g1_ParamLimits

0xe957,	// (0x0001f758) list_tmo_note_info_pane_g1

0x967d,	// (0x0001a47e) list_tmo_note_info_pane_g2_ParamLimits

0x967d,	// (0x0001a47e) list_tmo_note_info_pane_g2

0x0001,

0xfec9,	// (0x00020cca) list_tmo_note_info_pane_g_ParamLimits

0xfec9,	// (0x00020cca) list_tmo_note_info_pane_g

0x9699,	// (0x0001a49a) list_tmo_note_info_text_pane_ParamLimits

0x9699,	// (0x0001a49a) list_tmo_note_info_text_pane

0x971e,	// (0x0001a51f) list_tmo_link_pane

0x972b,	// (0x0001a52c) scroll_pane_cp20

0x9738,	// (0x0001a539) list_single_tmo_link_pane_ParamLimits

0x9738,	// (0x0001a539) list_single_tmo_link_pane

0x9748,	// (0x0001a549) list_single_tmo_link_pane_t1

0x9756,	// (0x0001a557) list_tmo_note_info_text_pane_t1_ParamLimits

0x9756,	// (0x0001a557) list_tmo_note_info_text_pane_t1

0xbb81,	// (0x0001c982) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbb81,	// (0x0001c982) aid_size_touch_scroll_bar_cp01

0xbab0,	// (0x0001c8b1) aid_size_touch_slider_marker

0xaa39,	// (0x0001b83a) popup_settings_window_ParamLimits

0xaa39,	// (0x0001b83a) popup_settings_window

0x31e5,	// (0x00013fe6) popup_candi_list_indi_window

0x383a,	// (0x0001463b) aid_touch_navi_pane_ParamLimits

0x0871,	// (0x00011672) rs_clock_indi_pane

0x087a,	// (0x0001167b) sctrl_sk_bottom_pane_ParamLimits

0x088b,	// (0x0001168c) sctrl_sk_top_pane_ParamLimits

0x098c,	// (0x0001178d) popup_fep_tooltip_window

0x9012,	// (0x00019e13) aid_size_cell_widget_grid_ParamLimits

0xe662,	// (0x0001f463) cell_ai5_widget_pane_g1_ParamLimits

0xe662,	// (0x0001f463) cell_ai5_widget_pane_g1

0xe6b5,	// (0x0001f4b6) cell_ai5_widget_pane_g6_ParamLimits

0xe6c1,	// (0x0001f4c2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe47,	// (0x00020c48) cell_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x00020c48) cell_ai5_widget_pane_g

0xe7c5,	// (0x0001f5c6) cell_ai5_widget_pane_t10_ParamLimits

0xe7c5,	// (0x0001f5c6) cell_ai5_widget_pane_t10

0xe7db,	// (0x0001f5dc) grid_ai5_widget_pane_ParamLimits

0x9289,	// (0x0001a08a) cell_contacts_ai5_widget_pane_ParamLimits

0x9289,	// (0x0001a08a) cell_contacts_ai5_widget_pane

0x9469,	// (0x0001a26a) popup_discreet_window_t3_ParamLimits

0x9469,	// (0x0001a26a) popup_discreet_window_t3

0x94f8,	// (0x0001a2f9) popup_fshwr2_char_preview_window_ParamLimits

0x94f8,	// (0x0001a2f9) popup_fshwr2_char_preview_window

0xe96e,	// (0x0001f76f) tmo_note_info_pane_t1

0xe983,	// (0x0001f784) tmo_note_info_pane_t2

0xe99c,	// (0x0001f79d) tmo_note_info_pane_t3

0x96fa,	// (0x0001a4fb) tmo_note_info_pane_t4

0x970c,	// (0x0001a50d) tmo_note_info_pane_t5

0x0004,

0xfece,	// (0x00020ccf) tmo_note_info_pane_t

0x971e,	// (0x0001a51f) list_tmo_link_pane_ParamLimits

0x972b,	// (0x0001a52c) scroll_pane_cp20_ParamLimits

0xe866,	// (0x0001f667) bg_popup_fep_char_preview_window_cp01

0x976f,	// (0x0001a570) popup_fshwr2_char_preview_window_t1

0x977d,	// (0x0001a57e) popup_candi_list_indi_window_g1

0x9786,	// (0x0001a587) bg_cell_contacts_ai5_widget_pane

0x9792,	// (0x0001a593) cell_contacts_ai5_widget_pane_g1

0x97a6,	// (0x0001a5a7) cell_contacts_ai5_widget_pane_g2

0x97b5,	// (0x0001a5b6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed9,	// (0x00020cda) cell_contacts_ai5_widget_pane_g

0x97c8,	// (0x0001a5c9) cell_contacts_ai5_widget_pane_t1

0x1fe3,	// (0x00012de4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xea16,	// (0x0001f817) settings_container_pane

0x2e2f,	// (0x00013c30) listscroll_set_pane_copy1

0x5be7,	// (0x000169e8) scroll_pane_cp121_copy1

0x984e,	// (0x0001a64f) set_content_pane_copy1

0xea22,	// (0x0001f823) aid_height_set_list_copy1_ParamLimits

0xea22,	// (0x0001f823) aid_height_set_list_copy1

0x51e9,	// (0x00015fea) aid_size_parent_copy1_ParamLimits

0x51e9,	// (0x00015fea) aid_size_parent_copy1

0xea2e,	// (0x0001f82f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xea2e,	// (0x0001f82f) button_value_adjust_pane_cp6_copy1

0x31bd,	// (0x00013fbe) list_highlight_pane_cp2_copy1_ParamLimits

0x31bd,	// (0x00013fbe) list_highlight_pane_cp2_copy1

0xea42,	// (0x0001f843) list_set_pane_copy1_ParamLimits

0xea42,	// (0x0001f843) list_set_pane_copy1

0xe9b1,	// (0x0001f7b2) main_pane_set_t1_copy1_ParamLimits

0xe9b1,	// (0x0001f7b2) main_pane_set_t1_copy1

0xe9eb,	// (0x0001f7ec) main_pane_set_t2_copy1_ParamLimits

0xe9eb,	// (0x0001f7ec) main_pane_set_t2_copy1

0xeb09,	// (0x0001f90a) main_pane_set_t3_copy1

0xeb17,	// (0x0001f918) main_pane_set_t4_copy1

0xea0a,	// (0x0001f80b) set_content_pane_g1_copy1_ParamLimits

0xea0a,	// (0x0001f80b) set_content_pane_g1_copy1

0xeb25,	// (0x0001f926) setting_code_pane_copy1

0x9963,	// (0x0001a764) setting_slider_graphic_pane_copy1

0x9963,	// (0x0001a764) setting_slider_pane_copy1

0x9963,	// (0x0001a764) setting_text_pane_copy1

0x996d,	// (0x0001a76e) setting_volume_pane_copy1

0xeb2f,	// (0x0001f930) settings_code_pane_cp2_copy1

0xeb37,	// (0x0001f938) settings_code_pane_cp_copy1_ParamLimits

0xeb37,	// (0x0001f938) settings_code_pane_cp_copy1

0xeb4b,	// (0x0001f94c) volume_set_pane_copy1

0xeb57,	// (0x0001f958) volume_set_pane_g10_copy1

0xeb63,	// (0x0001f964) volume_set_pane_g1_copy1

0xeb6d,	// (0x0001f96e) volume_set_pane_g2_copy1

0xeb77,	// (0x0001f978) volume_set_pane_g3_copy1

0xeb81,	// (0x0001f982) volume_set_pane_g4_copy1

0xeb8b,	// (0x0001f98c) volume_set_pane_g5_copy1

0xeb95,	// (0x0001f996) volume_set_pane_g6_copy1

0xeb9f,	// (0x0001f9a0) volume_set_pane_g7_copy1

0xeba9,	// (0x0001f9aa) volume_set_pane_g8_copy1

0xebb3,	// (0x0001f9b4) volume_set_pane_g9_copy1

0x11a7,	// (0x00011fa8) bg_set_opt_pane_cp_copy1_ParamLimits

0x11a7,	// (0x00011fa8) bg_set_opt_pane_cp_copy1

0x9a04,	// (0x0001a805) setting_slider_pane_t1_copy1_ParamLimits

0x9a04,	// (0x0001a805) setting_slider_pane_t1_copy1

0xebbd,	// (0x0001f9be) setting_slider_pane_t2_copy1_ParamLimits

0xebbd,	// (0x0001f9be) setting_slider_pane_t2_copy1

0xebd7,	// (0x0001f9d8) setting_slider_pane_t3_copy1_ParamLimits

0xebd7,	// (0x0001f9d8) setting_slider_pane_t3_copy1

0xebef,	// (0x0001f9f0) slider_set_pane_copy1_ParamLimits

0xebef,	// (0x0001f9f0) slider_set_pane_copy1

0x211f,	// (0x00012f20) set_opt_bg_pane_g1_copy2

0x2127,	// (0x00012f28) set_opt_bg_pane_g2_copy2

0x9a6a,	// (0x0001a86b) set_opt_bg_pane_g3_copy2

0x2137,	// (0x00012f38) set_opt_bg_pane_g4_copy2

0x213f,	// (0x00012f40) set_opt_bg_pane_g5_copy2

0x2147,	// (0x00012f48) set_opt_bg_pane_g6_copy2

0xec05,	// (0x0001fa06) set_opt_bg_pane_g7_copy2

0x9a7e,	// (0x0001a87f) set_opt_bg_pane_g8_copy2

0x9a88,	// (0x0001a889) set_opt_bg_pane_g9_copy2

0x9a92,	// (0x0001a893) aid_size_touch_slider_mark_copy1_ParamLimits

0x9a92,	// (0x0001a893) aid_size_touch_slider_mark_copy1

0x9aa6,	// (0x0001a8a7) slider_set_pane_g1_copy1

0x9aaf,	// (0x0001a8b0) slider_set_pane_g2_copy1

0x6670,	// (0x00017471) slider_set_pane_g3_copy1_ParamLimits

0x6670,	// (0x00017471) slider_set_pane_g3_copy1

0x6684,	// (0x00017485) slider_set_pane_g4_copy1_ParamLimits

0x6684,	// (0x00017485) slider_set_pane_g4_copy1

0x669c,	// (0x0001749d) slider_set_pane_g5_copy1_ParamLimits

0x669c,	// (0x0001749d) slider_set_pane_g5_copy1

0x6670,	// (0x00017471) slider_set_pane_g6_copy1_ParamLimits

0x6670,	// (0x00017471) slider_set_pane_g6_copy1

0xec0f,	// (0x0001fa10) slider_set_pane_g7_copy1_ParamLimits

0xec0f,	// (0x0001fa10) slider_set_pane_g7_copy1

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp2_copy1

0x9acd,	// (0x0001a8ce) setting_slider_graphic_pane_g1_copy1

0xec25,	// (0x0001fa26) setting_slider_graphic_pane_t1_copy1

0xec35,	// (0x0001fa36) setting_slider_graphic_pane_t2_copy1

0xec45,	// (0x0001fa46) slider_set_pane_cp_copy1

0x9b06,	// (0x0001a907) input_focus_pane_cp1_copy1

0x9b0f,	// (0x0001a910) list_set_text_pane_copy1

0x9b17,	// (0x0001a918) setting_text_pane_g1_copy1

0x1200,	// (0x00012001) set_text_pane_t1_copy1

0x9b06,	// (0x0001a907) input_focus_pane_cp2_copy1

0x9b17,	// (0x0001a918) setting_code_pane_g1_copy1

0xec4d,	// (0x0001fa4e) setting_code_pane_t1_copy1

0xec5b,	// (0x0001fa5c) list_set_graphic_pane_copy1

0xe87a,	// (0x0001f67b) bg_set_opt_pane_cp4_copy1

0xbe9d,	// (0x0001cc9e) list_set_graphic_pane_g1_copy1_ParamLimits

0xbe9d,	// (0x0001cc9e) list_set_graphic_pane_g1_copy1

0xec6d,	// (0x0001fa6e) list_set_graphic_pane_g2_copy1

0xbeb5,	// (0x0001ccb6) list_set_graphic_pane_t1_copy1_ParamLimits

0xbeb5,	// (0x0001ccb6) list_set_graphic_pane_t1_copy1

0x670b,	// (0x0001750c) rs_clock_indi_pane_g1

0x9b61,	// (0x0001a962) rs_clock_indi_pane_t1

0x9b6f,	// (0x0001a970) rs_indi_pane

0x9b77,	// (0x0001a978) rs_indi_pane_g1

0x9b80,	// (0x0001a981) rs_indi_pane_g2

0x9b89,	// (0x0001a98a) rs_indi_pane_g3

0x0002,

0xfee0,	// (0x00020ce1) rs_indi_pane_g

0x2e2f,	// (0x00013c30) bg_popup_preview_window_pane_cp03

0x9b92,	// (0x0001a993) popup_fep_tooltip_window_t1

0x75e1,	// (0x000183e2) popup_note2_window_g2_ParamLimits

0x75e1,	// (0x000183e2) popup_note2_window_g2

0x0001,

0xfc79,	// (0x00020a7a) popup_note2_window_g_ParamLimits

0xfc79,	// (0x00020a7a) popup_note2_window_g

0x7bd8,	// (0x000189d9) bg_popup_sub_pane_cp11_ParamLimits

0x7be5,	// (0x000189e6) cell_ai3_links_pane_g1_ParamLimits

0x7bfc,	// (0x000189fd) cell_ai3_links_pane_t1

0x1200,	// (0x00012001) set_text_pane_t1_copy1_ParamLimits

0x2d3c,	// (0x00013b3d) cell_graphic_popup_pane_cp2_ParamLimits

0x2d3c,	// (0x00013b3d) cell_graphic_popup_pane_cp2

0x9ba0,	// (0x0001a9a1) cell_graphic_popup_pane_g1_cp2

0x1793,	// (0x00012594) cell_graphic_popup_pane_g2_cp2

0x9ba8,	// (0x0001a9a9) cell_graphic_popup_pane_g3_cp2

0x9bb0,	// (0x0001a9b1) cell_graphic_popup_pane_t2_cp2

0x17a4,	// (0x000125a5) grid_highlight_pane_cp3_cp2

0x24f8,	// (0x000132f9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1fe3,	// (0x00012de4) main_tmo_pane_ParamLimits

0xdad2,	// (0x0001e8d3) popup_tmo_big_image_note_window

0xe652,	// (0x0001f453) cell_ai5_widget_list_pane

0xe65a,	// (0x0001f45b) cell_ai5_widget_lrg_icon_pane

0xe96e,	// (0x0001f76f) tmo_note_info_pane_t1_ParamLimits

0xe983,	// (0x0001f784) tmo_note_info_pane_t2_ParamLimits

0xe99c,	// (0x0001f79d) tmo_note_info_pane_t3_ParamLimits

0x96fa,	// (0x0001a4fb) tmo_note_info_pane_t4_ParamLimits

0x970c,	// (0x0001a50d) tmo_note_info_pane_t5_ParamLimits

0xfece,	// (0x00020ccf) tmo_note_info_pane_t_ParamLimits

0xea16,	// (0x0001f817) settings_container_pane_ParamLimits

0x9afe,	// (0x0001a8ff) indicator_popup_pane_cp5

0x9afe,	// (0x0001a8ff) indicator_popup_pane_cp6

0xec5b,	// (0x0001fa5c) list_set_graphic_pane_copy1_ParamLimits

0xe866,	// (0x0001f667) bg_popup_window_pane_cp23

0x9bbe,	// (0x0001a9bf) popup_tmo_big_image_note_window_g1

0x9bca,	// (0x0001a9cb) popup_tmo_big_image_note_window_t1

0x9bda,	// (0x0001a9db) popup_tmo_big_image_note_window_t2

0x9bea,	// (0x0001a9eb) popup_tmo_big_image_note_window_t3

0x0002,

0xfee7,	// (0x00020ce8) popup_tmo_big_image_note_window_t

0xec75,	// (0x0001fa76) cell_ai5_widget_lrg_icon_pane_g1

0xec7d,	// (0x0001fa7e) cell_ai5_widget_lrg_icon_pane_t1

0xec8b,	// (0x0001fa8c) cell_ai5_widget_list_row_pane_ParamLimits

0xec8b,	// (0x0001fa8c) cell_ai5_widget_list_row_pane

0xeca4,	// (0x0001faa5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeca4,	// (0x0001faa5) cell_ai5_widget_list_row_pane_g1

0xecb1,	// (0x0001fab2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xecb1,	// (0x0001fab2) cell_ai5_widget_list_row_pane_t1

0xecc9,	// (0x0001faca) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xecc9,	// (0x0001faca) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeee,	// (0x00020cef) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeee,	// (0x00020cef) cell_ai5_widget_list_row_pane_t

0xed98,	// (0x0001fb99) main_fep_vtchi_ss_pane

0x9c60,	// (0x0001aa61) popup_fep_char_pre_window

0x9c68,	// (0x0001aa69) popup_fep_ituss_window

0x9c89,	// (0x0001aa8a) popup_fep_vkbss_window

0x9caa,	// (0x0001aaab) grid_vkbss_keypad_pane_ParamLimits

0x9caa,	// (0x0001aaab) grid_vkbss_keypad_pane

0x9cba,	// (0x0001aabb) ituss_keypad_pane

0x9cd3,	// (0x0001aad4) aid_vkbss_key_offset_ParamLimits

0x9cd3,	// (0x0001aad4) aid_vkbss_key_offset

0x9cdf,	// (0x0001aae0) cell_vkbss_key_pane_ParamLimits

0x9cdf,	// (0x0001aae0) cell_vkbss_key_pane

0x9cf5,	// (0x0001aaf6) bg_cell_vkbss_key_g1_ParamLimits

0x9cf5,	// (0x0001aaf6) bg_cell_vkbss_key_g1

0x9d01,	// (0x0001ab02) cell_vkbss_key_3p_pane_ParamLimits

0x9d01,	// (0x0001ab02) cell_vkbss_key_3p_pane

0x9d1b,	// (0x0001ab1c) cell_vkbss_key_g1_ParamLimits

0x9d1b,	// (0x0001ab1c) cell_vkbss_key_g1

0x9d35,	// (0x0001ab36) cell_vkbss_key_t1_ParamLimits

0x9d35,	// (0x0001ab36) cell_vkbss_key_t1

0x9d60,	// (0x0001ab61) cell_ituss_key_pane_ParamLimits

0x9d60,	// (0x0001ab61) cell_ituss_key_pane

0x9d70,	// (0x0001ab71) bg_cell_ituss_key_g1_ParamLimits

0x9d70,	// (0x0001ab71) bg_cell_ituss_key_g1

0x9d7c,	// (0x0001ab7d) cell_ituss_key_pane_g1_ParamLimits

0x9d7c,	// (0x0001ab7d) cell_ituss_key_pane_g1

0x9d88,	// (0x0001ab89) cell_ituss_key_pane_g2_ParamLimits

0x9d88,	// (0x0001ab89) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00020cf4) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00020cf4) cell_ituss_key_pane_g

0x9da4,	// (0x0001aba5) cell_ituss_key_t1_ParamLimits

0x9da4,	// (0x0001aba5) cell_ituss_key_t1

0x9dd2,	// (0x0001abd3) cell_ituss_key_t2_ParamLimits

0x9dd2,	// (0x0001abd3) cell_ituss_key_t2

0x9e03,	// (0x0001ac04) cell_ituss_key_t3_ParamLimits

0x9e03,	// (0x0001ac04) cell_ituss_key_t3

0x9e34,	// (0x0001ac35) cell_ituss_key_t4_ParamLimits

0x9e34,	// (0x0001ac35) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00020cf9) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00020cf9) cell_ituss_key_t

0x9e65,	// (0x0001ac66) cell_vkbss_key_3p_pane_g1

0x9e6d,	// (0x0001ac6e) cell_vkbss_key_3p_pane_g2

0x9e75,	// (0x0001ac76) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00020d02) cell_vkbss_key_3p_pane_g

0xe866,	// (0x0001f667) bg_popup_fep_char_preview_window_cp02

0x9e7d,	// (0x0001ac7e) popup_fep_char_pre_window_t1

0xe648,	// (0x0001f449) main_ai5_sk_pane

0x9786,	// (0x0001a587) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9792,	// (0x0001a593) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x97a6,	// (0x0001a5a7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x97b5,	// (0x0001a5b6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed9,	// (0x00020cda) cell_contacts_ai5_widget_pane_g_ParamLimits

0x97c8,	// (0x0001a5c9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1fe3,	// (0x00012de4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecdb,	// (0x0001fadc) main_ai5_sk_pane_g1

0x4266,	// (0x00015067) popup_query_code_window_g1

0x9c7e,	// (0x0001aa7f) popup_fep_vkb_icf_pane

0x9c94,	// (0x0001aa95) popup_fep_vtchi_icf_pane

0x1fe3,	// (0x00012de4) bg_icf_pane

0x9ea4,	// (0x0001aca5) list_vkb_icf_pane

0x1fe3,	// (0x00012de4) bg_icf_pane_cp01

0x7f4c,	// (0x00018d4d) vtchi_icf_list_pane

0x9ec4,	// (0x0001acc5) list_vkb_icf_pane_t1_ParamLimits

0x9ec4,	// (0x0001acc5) list_vkb_icf_pane_t1

0x9edb,	// (0x0001acdc) vtchi_icf_list_pane_t1_ParamLimits

0x9edb,	// (0x0001acdc) vtchi_icf_list_pane_t1

0x9c68,	// (0x0001aa69) popup_fep_ituss_window_ParamLimits

0x9c94,	// (0x0001aa95) popup_fep_vtchi_icf_pane_ParamLimits

0x9cba,	// (0x0001aabb) ituss_keypad_pane_ParamLimits

0x9cca,	// (0x0001aacb) ituss_sks_pane

0x1fe3,	// (0x00012de4) bg_icf_pane_ParamLimits

0x9e95,	// (0x0001ac96) icf_edit_indi_pane_ParamLimits

0x9e95,	// (0x0001ac96) icf_edit_indi_pane

0x9ea4,	// (0x0001aca5) list_vkb_icf_pane_ParamLimits

0x1fe3,	// (0x00012de4) bg_icf_pane_cp01_ParamLimits

0x9eb0,	// (0x0001acb1) icf_edit_indi_pane_cp01_ParamLimits

0x9eb0,	// (0x0001acb1) icf_edit_indi_pane_cp01

0x9ebc,	// (0x0001acbd) vtchi_query_pane

0x6995,	// (0x00017796) icf_edit_indi_pane_g1_ParamLimits

0x6995,	// (0x00017796) icf_edit_indi_pane_g1

0x9ef4,	// (0x0001acf5) icf_edit_indi_pane_g2_ParamLimits

0x9ef4,	// (0x0001acf5) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x00020d09) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x00020d09) icf_edit_indi_pane_g

0x9f00,	// (0x0001ad01) icf_edit_indi_pane_t1

0x9f0e,	// (0x0001ad0f) bg_input_focus_pane_cp042

0x1977,	// (0x00012778) vtchi_button_pane

0x9f17,	// (0x0001ad18) vtchi_query_pane_t1

0x9f25,	// (0x0001ad26) vtchi_query_pane_t2

0x9f33,	// (0x0001ad34) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x00020d0e) vtchi_query_pane_t

0xe866,	// (0x0001f667) bg_button_pane_cp13

0x9f41,	// (0x0001ad42) vtchi_button_pane_g1

0x84b8,	// (0x000192b9) ituss_sks_pane_g1

0x9f49,	// (0x0001ad4a) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00020d15) ituss_sks_pane_g

0x9f52,	// (0x0001ad53) ituss_sks_pane_t1

0x9f60,	// (0x0001ad61) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x00020d1a) ituss_sks_pane_t

0x611a,	// (0x00016f1b) indicator_nsta_pane_cp_g1

0x6123,	// (0x00016f24) indicator_nsta_pane_cp_g2

0x612b,	// (0x00016f2c) indicator_nsta_pane_cp_g3

0x6133,	// (0x00016f34) indicator_nsta_pane_cp_g4

0x613b,	// (0x00016f3c) indicator_nsta_pane_cp_g5

0x6143,	// (0x00016f44) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x000208b8) indicator_nsta_pane_cp_g

0xe480,	// (0x0001f281) cell_graphic2_pane_t2_ParamLimits

0xe480,	// (0x0001f281) cell_graphic2_pane_t2

0x0001,

0xfdd0,	// (0x00020bd1) cell_graphic2_pane_t_ParamLimits

0xfdd0,	// (0x00020bd1) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
