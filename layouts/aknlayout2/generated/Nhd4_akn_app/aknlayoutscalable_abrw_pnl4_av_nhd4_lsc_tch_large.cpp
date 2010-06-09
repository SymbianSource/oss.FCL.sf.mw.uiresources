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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005a8e4 };

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
0x927c,	// (0x00063b60) Screen

0x9288,	// (0x00063b6c) application_window_ParamLimits

0x9288,	// (0x00063b6c) application_window

0x7edc,	// (0x000627c0) screen_g1

0x92c0,	// (0x00063ba4) area_bottom_pane_ParamLimits

0x92c0,	// (0x00063ba4) area_bottom_pane

0xee41,	// (0x00069725) area_top_pane_ParamLimits

0xee41,	// (0x00069725) area_top_pane

0xeedf,	// (0x000697c3) main_pane_ParamLimits

0xeedf,	// (0x000697c3) main_pane

0x7ee6,	// (0x000627ca) misc_graphics

0xbca9,	// (0x0006658d) battery_pane_ParamLimits

0xbca9,	// (0x0006658d) battery_pane

0x2eda,	// (0x0005d7be) bg_status_flat_pane_g8

0x2ee2,	// (0x0005d7c6) bg_status_flat_pane_g9

0x22c8,	// (0x0005cbac) context_pane_ParamLimits

0x22c8,	// (0x0005cbac) context_pane

0xbe14,	// (0x000666f8) navi_pane_ParamLimits

0xbe14,	// (0x000666f8) navi_pane

0xbe92,	// (0x00066776) signal_pane_ParamLimits

0xbe92,	// (0x00066776) signal_pane

0x0008,

0xf868,	// (0x0006a14c) bg_status_flat_pane_g

0xbf22,	// (0x00066806) status_pane_g1_ParamLimits

0xbf22,	// (0x00066806) status_pane_g1

0xbf38,	// (0x0006681c) status_pane_g2_ParamLimits

0xbf38,	// (0x0006681c) status_pane_g2

0x24ef,	// (0x0005cdd3) status_pane_g3_ParamLimits

0x24ef,	// (0x0005cdd3) status_pane_g3

0x0004,

0xf79b,	// (0x0006a07f) status_pane_g_ParamLimits

0xf79b,	// (0x0006a07f) status_pane_g

0xbf44,	// (0x00066828) title_pane_ParamLimits

0xbf44,	// (0x00066828) title_pane

0xbfa7,	// (0x0006688b) uni_indicator_pane_ParamLimits

0xbfa7,	// (0x0006688b) uni_indicator_pane

0x211f,	// (0x0005ca03) bg_list_pane_ParamLimits

0x211f,	// (0x0005ca03) bg_list_pane

0xa875,	// (0x00065159) find_pane

0xa87d,	// (0x00065161) listscroll_app_pane_ParamLimits

0xa87d,	// (0x00065161) listscroll_app_pane

0x2150,	// (0x0005ca34) listscroll_form_pane

0xa891,	// (0x00065175) listscroll_gen_pane_ParamLimits

0xa891,	// (0x00065175) listscroll_gen_pane

0x0107,	// (0x0005a9eb) listscroll_set_pane

0x3a3e,	// (0x0005e322) main_idle_act_pane

0x1e1f,	// (0x0005c703) main_idle_trad_pane

0x1e1f,	// (0x0005c703) main_list_empty_pane

0x216a,	// (0x0005ca4e) main_midp_pane

0x2176,	// (0x0005ca5a) main_pane_g1_ParamLimits

0x2176,	// (0x0005ca5a) main_pane_g1

0xa8a5,	// (0x00065189) popup_ai_message_window_ParamLimits

0xa8a5,	// (0x00065189) popup_ai_message_window

0xa956,	// (0x0006523a) popup_fep_china_uni_window_ParamLimits

0xa956,	// (0x0006523a) popup_fep_china_uni_window

0xa9b0,	// (0x00065294) popup_fep_japan_candidate_window_ParamLimits

0xa9b0,	// (0x00065294) popup_fep_japan_candidate_window

0xa9ce,	// (0x000652b2) popup_fep_japan_predictive_window_ParamLimits

0xa9ce,	// (0x000652b2) popup_fep_japan_predictive_window

0xa9e0,	// (0x000652c4) popup_find_window

0xa9fd,	// (0x000652e1) popup_grid_graphic_window_ParamLimits

0xa9fd,	// (0x000652e1) popup_grid_graphic_window

0xaa9b,	// (0x0006537f) popup_large_graphic_colour_window

0xaac1,	// (0x000653a5) popup_menu_window_ParamLimits

0xaac1,	// (0x000653a5) popup_menu_window

0xac93,	// (0x00065577) popup_note_image_window

0xac59,	// (0x0006553d) popup_note_wait_window_ParamLimits

0xac59,	// (0x0006553d) popup_note_wait_window

0xacab,	// (0x0006558f) popup_note_window_ParamLimits

0xacab,	// (0x0006558f) popup_note_window

0xad5a,	// (0x0006563e) popup_query_code_window_ParamLimits

0xad5a,	// (0x0006563e) popup_query_code_window

0xad94,	// (0x00065678) popup_query_data_code_window_ParamLimits

0xad94,	// (0x00065678) popup_query_data_code_window

0xadb1,	// (0x00065695) popup_query_data_window_ParamLimits

0xadb1,	// (0x00065695) popup_query_data_window

0xae33,	// (0x00065717) popup_query_sat_info_window_ParamLimits

0xae33,	// (0x00065717) popup_query_sat_info_window

0xaeca,	// (0x000657ae) popup_snote_single_graphic_window_ParamLimits

0xaeca,	// (0x000657ae) popup_snote_single_graphic_window

0xaeca,	// (0x000657ae) popup_snote_single_text_window_ParamLimits

0xaeca,	// (0x000657ae) popup_snote_single_text_window

0x0573,	// (0x0005ae57) popup_sub_window_general

0xb027,	// (0x0006590b) popup_window_general_ParamLimits

0xb027,	// (0x0006590b) popup_window_general

0x2184,	// (0x0005ca68) power_save_pane

0xa6d3,	// (0x00064fb7) control_pane_g1_ParamLimits

0xa6d3,	// (0x00064fb7) control_pane_g1

0xa6fc,	// (0x00064fe0) control_pane_g2_ParamLimits

0xa6fc,	// (0x00064fe0) control_pane_g2

0x20e2,	// (0x0005c9c6) control_pane_g3_ParamLimits

0x20e2,	// (0x0005c9c6) control_pane_g3

0x0007,

0xf783,	// (0x0006a067) control_pane_g_ParamLimits

0xf783,	// (0x0006a067) control_pane_g

0xa764,	// (0x00065048) control_pane_t1_ParamLimits

0xa764,	// (0x00065048) control_pane_t1

0xa7ca,	// (0x000650ae) control_pane_t2_ParamLimits

0xa7ca,	// (0x000650ae) control_pane_t2

0x0002,

0xf794,	// (0x0006a078) control_pane_t_ParamLimits

0xf794,	// (0x0006a078) control_pane_t

0xa62c,	// (0x00064f10) navi_navi_volume_pane_cp1

0xa634,	// (0x00064f18) status_small_icon_pane

0x2017,	// (0x0005c8fb) status_small_pane_g1_ParamLimits

0x2017,	// (0x0005c8fb) status_small_pane_g1

0xa63c,	// (0x00064f20) status_small_pane_g2_ParamLimits

0xa63c,	// (0x00064f20) status_small_pane_g2

0xa648,	// (0x00064f2c) status_small_pane_g3_ParamLimits

0xa648,	// (0x00064f2c) status_small_pane_g3

0xa654,	// (0x00064f38) status_small_pane_g4_ParamLimits

0xa654,	// (0x00064f38) status_small_pane_g4

0xa660,	// (0x00064f44) status_small_pane_g5_ParamLimits

0xa660,	// (0x00064f44) status_small_pane_g5

0xa66e,	// (0x00064f52) status_small_pane_g6_ParamLimits

0xa66e,	// (0x00064f52) status_small_pane_g6

0x0007,

0xf772,	// (0x0006a056) status_small_pane_g_ParamLimits

0xf772,	// (0x0006a056) status_small_pane_g

0xa69d,	// (0x00064f81) status_small_pane_t1

0xa6bf,	// (0x00064fa3) status_small_wait_pane_ParamLimits

0xa6bf,	// (0x00064fa3) status_small_wait_pane

0xa308,	// (0x00064bec) aid_levels_signal_ParamLimits

0xa308,	// (0x00064bec) aid_levels_signal

0xa320,	// (0x00064c04) signal_pane_g1_ParamLimits

0xa320,	// (0x00064c04) signal_pane_g1

0xa33b,	// (0x00064c1f) signal_pane_g2_ParamLimits

0xa33b,	// (0x00064c1f) signal_pane_g2

0x0003,

0xf703,	// (0x00069fe7) signal_pane_g_ParamLimits

0xf703,	// (0x00069fe7) signal_pane_g

0xbbb9,	// (0x0006649d) context_pane_g1

0x94be,	// (0x00063da2) title_pane_g1

0x94f5,	// (0x00063dd9) title_pane_t1

0x7efc,	// (0x000627e0) title_pane_t2

0x7f22,	// (0x00062806) title_pane_t3

0x0002,

0xf557,	// (0x00069e3b) title_pane_t

0xbfcf,	// (0x000668b3) aid_levels_battery_ParamLimits

0xbfcf,	// (0x000668b3) aid_levels_battery

0xbfeb,	// (0x000668cf) battery_pane_g1_ParamLimits

0xbfeb,	// (0x000668cf) battery_pane_g1

0xc008,	// (0x000668ec) battery_pane_g2_ParamLimits

0xc008,	// (0x000668ec) battery_pane_g2

0x0001,

0xf7a6,	// (0x0006a08a) battery_pane_g_ParamLimits

0xf7a6,	// (0x0006a08a) battery_pane_g

0xc5ce,	// (0x00066eb2) uni_indicator_pane_g1

0xc5e4,	// (0x00066ec8) uni_indicator_pane_g2

0xc5fa,	// (0x00066ede) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x0006a1f4) uni_indicator_pane_g

0xf3cb,	// (0x00069caf) navi_icon_pane_ParamLimits

0xf3cb,	// (0x00069caf) navi_icon_pane

0xdeac,	// (0x00068790) navi_midp_pane

0xf3e7,	// (0x00069ccb) navi_navi_pane

0xf3f1,	// (0x00069cd5) navi_text_pane_ParamLimits

0xf3f1,	// (0x00069cd5) navi_text_pane

0x7edc,	// (0x000627c0) status_small_wait_pane_g1

0x8173,	// (0x00062a57) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x0006a1ef) status_small_wait_pane_g

0xc527,	// (0x00066e0b) navi_navi_icon_text_pane

0x352d,	// (0x0005de11) navi_navi_pane_g1_ParamLimits

0x352d,	// (0x0005de11) navi_navi_pane_g1

0x353f,	// (0x0005de23) navi_navi_pane_g2_ParamLimits

0x353f,	// (0x0005de23) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x0006a1bd) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x0006a1bd) navi_navi_pane_g

0x3551,	// (0x0005de35) navi_navi_tabs_pane

0x355a,	// (0x0005de3e) navi_navi_text_pane

0xc527,	// (0x00066e0b) navi_navi_volume_pane

0x3501,	// (0x0005dde5) navi_text_pane_t1

0x34f5,	// (0x0005ddd9) navi_icon_pane_g1

0x3448,	// (0x0005dd2c) navi_navi_text_pane_t1

0xb0fa,	// (0x000659de) navi_navi_volume_pane_g1

0x098b,	// (0x0005b26f) volume_small_pane

0x33ae,	// (0x0005dc92) navi_navi_icon_text_pane_g1

0xc47f,	// (0x00066d63) navi_navi_icon_text_pane_t1

0xf3e7,	// (0x00069ccb) navi_tabs_2_long_pane

0xf3e7,	// (0x00069ccb) navi_tabs_2_pane

0xf3e7,	// (0x00069ccb) navi_tabs_3_long_pane

0xf3e7,	// (0x00069ccb) navi_tabs_3_pane

0xf3e7,	// (0x00069ccb) navi_tabs_4_pane

0x0963,	// (0x0005b247) tabs_2_active_pane_ParamLimits

0x0963,	// (0x0005b247) tabs_2_active_pane

0x0973,	// (0x0005b257) tabs_2_passive_pane_ParamLimits

0x0973,	// (0x0005b257) tabs_2_passive_pane

0x0931,	// (0x0005b215) tabs_3_active_pane_ParamLimits

0x0931,	// (0x0005b215) tabs_3_active_pane

0x0941,	// (0x0005b225) tabs_3_passive_pane_ParamLimits

0x0941,	// (0x0005b225) tabs_3_passive_pane

0x0952,	// (0x0005b236) tabs_3_passive_pane_cp_ParamLimits

0x0952,	// (0x0005b236) tabs_3_passive_pane_cp

0x08ed,	// (0x0005b1d1) tabs_4_active_pane_ParamLimits

0x08ed,	// (0x0005b1d1) tabs_4_active_pane

0x08fe,	// (0x0005b1e2) tabs_4_passive_pane_ParamLimits

0x08fe,	// (0x0005b1e2) tabs_4_passive_pane

0x090f,	// (0x0005b1f3) tabs_4_passive_pane_cp_ParamLimits

0x090f,	// (0x0005b1f3) tabs_4_passive_pane_cp

0x0920,	// (0x0005b204) tabs_4_passive_pane_cp2_ParamLimits

0x0920,	// (0x0005b204) tabs_4_passive_pane_cp2

0x08c9,	// (0x0005b1ad) tabs_2_long_active_pane_ParamLimits

0x08c9,	// (0x0005b1ad) tabs_2_long_active_pane

0x08db,	// (0x0005b1bf) tabs_2_long_passive_pane_ParamLimits

0x08db,	// (0x0005b1bf) tabs_2_long_passive_pane

0x0884,	// (0x0005b168) tabs_3_long_active_pane_ParamLimits

0x0884,	// (0x0005b168) tabs_3_long_active_pane

0x089d,	// (0x0005b181) tabs_3_long_passive_pane_ParamLimits

0x089d,	// (0x0005b181) tabs_3_long_passive_pane

0x08b0,	// (0x0005b194) tabs_3_long_passive_pane_cp_ParamLimits

0x08b0,	// (0x0005b194) tabs_3_long_passive_pane_cp

0x082a,	// (0x0005b10e) volume_small_pane_g1

0x0833,	// (0x0005b117) volume_small_pane_g2

0x083c,	// (0x0005b120) volume_small_pane_g3

0x0845,	// (0x0005b129) volume_small_pane_g4

0x084e,	// (0x0005b132) volume_small_pane_g5

0x0857,	// (0x0005b13b) volume_small_pane_g6

0x0860,	// (0x0005b144) volume_small_pane_g7

0x0869,	// (0x0005b14d) volume_small_pane_g8

0x0872,	// (0x0005b156) volume_small_pane_g9

0x087b,	// (0x0005b15f) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x0006a189) volume_small_pane_g

0x805e,	// (0x00062942) bg_active_tab_pane_cp2_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp2

0x9581,	// (0x00063e65) tabs_3_active_pane_g1

0x9589,	// (0x00063e6d) tabs_3_active_pane_t1

0x805e,	// (0x00062942) bg_passive_tab_pane_cp2_ParamLimits

0x805e,	// (0x00062942) bg_passive_tab_pane_cp2

0x9581,	// (0x00063e65) tabs_3_passive_pane_g1

0x9589,	// (0x00063e6d) tabs_3_passive_pane_t1

0x805e,	// (0x00062942) bg_active_tab_pane_cp3_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp3

0x959b,	// (0x00063e7f) tabs_4_active_pane_g1

0x95a3,	// (0x00063e87) tabs_4_active_pane_t1

0x805e,	// (0x00062942) bg_passive_tab_pane_cp3_ParamLimits

0x805e,	// (0x00062942) bg_passive_tab_pane_cp3

0x959b,	// (0x00063e7f) tabs_4_1_passive_pane_g1

0x95a3,	// (0x00063e87) tabs_4_1_passive_pane_t1

0x216a,	// (0x0005ca4e) list_highlight_pane_cp2

0xc700,	// (0x00066fe4) list_set_pane_ParamLimits

0xc700,	// (0x00066fe4) list_set_pane

0xc79a,	// (0x0006707e) main_pane_set_t1_ParamLimits

0xc79a,	// (0x0006707e) main_pane_set_t1

0xc7ba,	// (0x0006709e) main_pane_set_t2_ParamLimits

0xc7ba,	// (0x0006709e) main_pane_set_t2

0xc7ce,	// (0x000670b2) main_pane_set_t3_ParamLimits

0xc7ce,	// (0x000670b2) main_pane_set_t3

0xc7e0,	// (0x000670c4) main_pane_set_t4_ParamLimits

0xc7e0,	// (0x000670c4) main_pane_set_t4

0x0003,

0xf975,	// (0x0006a259) main_pane_set_t_ParamLimits

0xf975,	// (0x0006a259) main_pane_set_t

0xc7f2,	// (0x000670d6) setting_code_pane

0xc7fc,	// (0x000670e0) setting_slider_graphic_pane

0xc7fc,	// (0x000670e0) setting_slider_pane

0xc7fc,	// (0x000670e0) setting_text_pane

0xc7fc,	// (0x000670e0) setting_volume_pane

0x95b5,	// (0x00063e99) volume_set_pane

0x7f34,	// (0x00062818) bg_set_opt_pane_cp

0x95bd,	// (0x00063ea1) setting_slider_pane_t1

0x95d6,	// (0x00063eba) setting_slider_pane_t2

0x95f0,	// (0x00063ed4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00069e42) setting_slider_pane_t

0x9608,	// (0x00063eec) slider_set_pane

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp2

0x7f42,	// (0x00062826) setting_slider_graphic_pane_g1

0x961e,	// (0x00063f02) setting_slider_graphic_pane_t1

0x962e,	// (0x00063f12) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00069e49) setting_slider_graphic_pane_t

0x963e,	// (0x00063f22) slider_set_pane_cp

0x7ee6,	// (0x000627ca) input_focus_pane_cp1

0x3a25,	// (0x0005e309) list_set_text_pane

0x7edc,	// (0x000627c0) setting_text_pane_g1

0x7ee6,	// (0x000627ca) input_focus_pane_cp2

0x7edc,	// (0x000627c0) setting_code_pane_g1

0x7f4b,	// (0x0006282f) setting_code_pane_t1

0xdbfa,	// (0x000684de) set_text_pane_t1_ParamLimits

0xdbfa,	// (0x000684de) set_text_pane_t1

0x850e,	// (0x00062df2) set_opt_bg_pane_g1

0x8516,	// (0x00062dfa) set_opt_bg_pane_g2

0xc6b5,	// (0x00066f99) set_opt_bg_pane_g3

0x8526,	// (0x00062e0a) set_opt_bg_pane_g4

0x852e,	// (0x00062e12) set_opt_bg_pane_g5

0x8536,	// (0x00062e1a) set_opt_bg_pane_g6

0xc6bf,	// (0x00066fa3) set_opt_bg_pane_g7

0xc6c7,	// (0x00066fab) set_opt_bg_pane_g8

0xc6d1,	// (0x00066fb5) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x0006a246) set_opt_bg_pane_g

0xc6a8,	// (0x00066f8c) slider_set_pane_g1

0x0a0a,	// (0x0005b2ee) slider_set_pane_g2

0x0006,

0xf953,	// (0x0006a237) slider_set_pane_g

0xb102,	// (0x000659e6) volume_set_pane_g1

0xb10a,	// (0x000659ee) volume_set_pane_g2

0xb112,	// (0x000659f6) volume_set_pane_g3

0xb11a,	// (0x000659fe) volume_set_pane_g4

0xb122,	// (0x00065a06) volume_set_pane_g5

0xb12a,	// (0x00065a0e) volume_set_pane_g6

0xb132,	// (0x00065a16) volume_set_pane_g7

0xb13a,	// (0x00065a1e) volume_set_pane_g8

0xb142,	// (0x00065a26) volume_set_pane_g9

0xb14a,	// (0x00065a2e) volume_set_pane_g10

0x0009,

0xf92b,	// (0x0006a20f) volume_set_pane_g

0x9646,	// (0x00063f2a) indicator_pane_ParamLimits

0x9646,	// (0x00063f2a) indicator_pane

0x966e,	// (0x00063f52) main_idle_pane_g2_ParamLimits

0x966e,	// (0x00063f52) main_idle_pane_g2

0x96a6,	// (0x00063f8a) main_pane_idle_g1_ParamLimits

0x96a6,	// (0x00063f8a) main_pane_idle_g1

0x7f59,	// (0x0006283d) popup_clock_digital_analogue_window_ParamLimits

0x7f59,	// (0x0006283d) popup_clock_digital_analogue_window

0x96cd,	// (0x00063fb1) soft_indicator_pane_ParamLimits

0x96cd,	// (0x00063fb1) soft_indicator_pane

0x96f1,	// (0x00063fd5) wallpaper_pane_ParamLimits

0x96f1,	// (0x00063fd5) wallpaper_pane

0x7edc,	// (0x000627c0) wallpaper_pane_g1

0x9703,	// (0x00063fe7) indicator_pane_g1_ParamLimits

0x9703,	// (0x00063fe7) indicator_pane_g1

0x3ff1,	// (0x0005e8d5) navi_navi_icon_text_pane_srt_g1

0x7f87,	// (0x0006286b) soft_indicator_pane_t1

0x7fa1,	// (0x00062885) aid_ps_area_pane

0x9719,	// (0x00063ffd) aid_ps_clock_pane

0x7fb2,	// (0x00062896) aid_ps_indicator_pane

0x7fbe,	// (0x000628a2) indicator_ps_pane_ParamLimits

0x7fbe,	// (0x000628a2) indicator_ps_pane

0x7fcd,	// (0x000628b1) power_save_pane_g1_ParamLimits

0x7fcd,	// (0x000628b1) power_save_pane_g1

0x7fd9,	// (0x000628bd) power_save_pane_g2_ParamLimits

0x7fd9,	// (0x000628bd) power_save_pane_g2

0xdbda,	// (0x000684be) aid_navinavi_width_pane

0x7fa1,	// (0x00062885) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00069e4e) power_save_pane_g_ParamLimits

0xf56a,	// (0x00069e4e) power_save_pane_g

0x7fe7,	// (0x000628cb) power_save_pane_t1_ParamLimits

0x7fe7,	// (0x000628cb) power_save_pane_t1

0x9719,	// (0x00063ffd) aid_ps_clock_pane_ParamLimits

0x7fb2,	// (0x00062896) aid_ps_indicator_pane_ParamLimits

0x7ff9,	// (0x000628dd) power_save_pane_t4_ParamLimits

0x7ff9,	// (0x000628dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x00069e53) power_save_pane_t_ParamLimits

0xf56f,	// (0x00069e53) power_save_pane_t

0x8023,	// (0x00062907) power_save_t3_ParamLimits

0x8023,	// (0x00062907) power_save_t3

0x800e,	// (0x000628f2) power_save_t2_ParamLimits

0x800e,	// (0x000628f2) power_save_t2

0x8038,	// (0x0006291c) indicator_ps_pane_g1

0x9727,	// (0x0006400b) ai_gene_pane_ParamLimits

0x9727,	// (0x0006400b) ai_gene_pane

0x973e,	// (0x00064022) ai_links_pane_ParamLimits

0x973e,	// (0x00064022) ai_links_pane

0x9756,	// (0x0006403a) indicator_pane_cp1_ParamLimits

0x9756,	// (0x0006403a) indicator_pane_cp1

0x9765,	// (0x00064049) main_pane_idle_g1_cp_ParamLimits

0x9765,	// (0x00064049) main_pane_idle_g1_cp

0x977d,	// (0x00064061) popup_ai_links_title_window

0x9786,	// (0x0006406a) soft_indicator_pane_cp1_ParamLimits

0x9786,	// (0x0006406a) soft_indicator_pane_cp1

0x37ec,	// (0x0005e0d0) ai_links_pane_g1

0x37f5,	// (0x0005e0d9) grid_ai_links_pane

0xc5c5,	// (0x00066ea9) ai_gene_pane_1

0x37da,	// (0x0005e0be) ai_gene_pane_2

0x37e3,	// (0x0005e0c7) list_highlight_pane_cp4

0xc5a1,	// (0x00066e85) cell_ai_link_pane_ParamLimits

0xc5a1,	// (0x00066e85) cell_ai_link_pane

0x37ab,	// (0x0005e08f) cell_ai_link_pane_g1

0x8173,	// (0x00062a57) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x0006a1ea) cell_ai_link_pane_g

0x7ee6,	// (0x000627ca) grid_highlight_cp2

0x7ee6,	// (0x000627ca) bg_popup_sub_pane_cp1

0x804f,	// (0x00062933) popup_ai_links_title_window_t1

0x36fb,	// (0x0005dfdf) ai_gene_pane_1_g1_ParamLimits

0x36fb,	// (0x0005dfdf) ai_gene_pane_1_g1

0x3707,	// (0x0005dfeb) ai_gene_pane_1_g2_ParamLimits

0x3707,	// (0x0005dfeb) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x0006a1e0) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x0006a1e0) ai_gene_pane_1_g

0x3714,	// (0x0005dff8) ai_gene_pane_1_t1_ParamLimits

0x3714,	// (0x0005dff8) ai_gene_pane_1_t1

0x3748,	// (0x0005e02c) grid_ai_soft_ind_pane

0x36e6,	// (0x0005dfca) ai_gene_pane_2_t1_ParamLimits

0x36e6,	// (0x0005dfca) ai_gene_pane_2_t1

0x979a,	// (0x0006407e) main_pane_empty_t1_ParamLimits

0x979a,	// (0x0006407e) main_pane_empty_t1

0x97b2,	// (0x00064096) main_pane_empty_t2_ParamLimits

0x97b2,	// (0x00064096) main_pane_empty_t2

0x97c7,	// (0x000640ab) main_pane_empty_t3_ParamLimits

0x97c7,	// (0x000640ab) main_pane_empty_t3

0x97d9,	// (0x000640bd) main_pane_empty_t4_ParamLimits

0x97d9,	// (0x000640bd) main_pane_empty_t4

0x97eb,	// (0x000640cf) main_pane_empty_t5_ParamLimits

0x97eb,	// (0x000640cf) main_pane_empty_t5

0x0004,

0xf574,	// (0x00069e58) main_pane_empty_t_ParamLimits

0xf574,	// (0x00069e58) main_pane_empty_t

0x855f,	// (0x00062e43) bg_popup_window_pane_ParamLimits

0x855f,	// (0x00062e43) bg_popup_window_pane

0xc51b,	// (0x00066dff) find_popup_pane_cp2_ParamLimits

0xc51b,	// (0x00066dff) find_popup_pane_cp2

0x3462,	// (0x0005dd46) heading_pane_ParamLimits

0x3462,	// (0x0005dd46) heading_pane

0x7ee6,	// (0x000627ca) bg_popup_sub_pane

0xc49c,	// (0x00066d80) bg_popup_window_pane_g1_ParamLimits

0xc49c,	// (0x00066d80) bg_popup_window_pane_g1

0xc4ab,	// (0x00066d8f) bg_popup_window_pane_g2_ParamLimits

0xc4ab,	// (0x00066d8f) bg_popup_window_pane_g2

0xc4b7,	// (0x00066d9b) bg_popup_window_pane_g3_ParamLimits

0xc4b7,	// (0x00066d9b) bg_popup_window_pane_g3

0xc4c3,	// (0x00066da7) bg_popup_window_pane_g4_ParamLimits

0xc4c3,	// (0x00066da7) bg_popup_window_pane_g4

0xc4d2,	// (0x00066db6) bg_popup_window_pane_g5_ParamLimits

0xc4d2,	// (0x00066db6) bg_popup_window_pane_g5

0xc4e2,	// (0x00066dc6) bg_popup_window_pane_g6_ParamLimits

0xc4e2,	// (0x00066dc6) bg_popup_window_pane_g6

0xc4ee,	// (0x00066dd2) bg_popup_window_pane_g7_ParamLimits

0xc4ee,	// (0x00066dd2) bg_popup_window_pane_g7

0xc4fd,	// (0x00066de1) bg_popup_window_pane_g8_ParamLimits

0xc4fd,	// (0x00066de1) bg_popup_window_pane_g8

0xc50c,	// (0x00066df0) bg_popup_window_pane_g9_ParamLimits

0xc50c,	// (0x00066df0) bg_popup_window_pane_g9

0x343c,	// (0x0005dd20) bg_popup_window_pane_g10_ParamLimits

0x343c,	// (0x0005dd20) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x0006a1a8) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x0006a1a8) bg_popup_window_pane_g

0x3365,	// (0x0005dc49) bg_popup_heading_pane_ParamLimits

0x3365,	// (0x0005dc49) bg_popup_heading_pane

0x0b11,	// (0x0005b3f5) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b11,	// (0x0005b3f5) tabs_4_passive_pane_cp_srt

0x0b23,	// (0x0005b407) tabs_4_passive_pane_srt_ParamLimits

0x3379,	// (0x0005dc5d) heading_pane_g2

0x0b23,	// (0x0005b407) tabs_4_passive_pane_srt

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp3_srt

0x3381,	// (0x0005dc65) heading_pane_t1_ParamLimits

0x3381,	// (0x0005dc65) heading_pane_t1

0x3398,	// (0x0005dc7c) heading_pane_t2_ParamLimits

0x3398,	// (0x0005dc7c) heading_pane_t2

0x0001,

0xf8bf,	// (0x0006a1a3) heading_pane_t_ParamLimits

0xf8bf,	// (0x0006a1a3) heading_pane_t

0x2ea2,	// (0x0005d786) bg_popup_heading_pane_g1

0x2f51,	// (0x0005d835) bg_popup_heading_pane_g2

0x2f5b,	// (0x0005d83f) bg_popup_heading_pane_g3

0x2f65,	// (0x0005d849) bg_popup_heading_pane_g4

0x2f6f,	// (0x0005d853) bg_popup_heading_pane_g5

0x2f79,	// (0x0005d85d) bg_popup_heading_pane_g6

0x2f81,	// (0x0005d865) bg_popup_heading_pane_g7

0x2f89,	// (0x0005d86d) bg_popup_heading_pane_g8

0x2f93,	// (0x0005d877) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x0006a15f) bg_popup_heading_pane_g

0x2677,	// (0x0005cf5b) bg_popup_sub_pane_g1

0x2687,	// (0x0005cf6b) bg_popup_sub_pane_g2

0x267f,	// (0x0005cf63) bg_popup_sub_pane_g3

0x2697,	// (0x0005cf7b) bg_popup_sub_pane_g4

0x268f,	// (0x0005cf73) bg_popup_sub_pane_g5

0x269f,	// (0x0005cf83) bg_popup_sub_pane_g6

0x26a7,	// (0x0005cf8b) bg_popup_sub_pane_g7

0x26b7,	// (0x0005cf9b) bg_popup_sub_pane_g8

0x26af,	// (0x0005cf93) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x0006a139) bg_popup_sub_pane_g

0x805e,	// (0x00062942) bg_popup_window_pane_cp5_ParamLimits

0x805e,	// (0x00062942) bg_popup_window_pane_cp5

0x807a,	// (0x0006295e) popup_note_window_g1_ParamLimits

0x807a,	// (0x0006295e) popup_note_window_g1

0x8086,	// (0x0006296a) popup_note_window_t1_ParamLimits

0x8086,	// (0x0006296a) popup_note_window_t1

0x809c,	// (0x00062980) popup_note_window_t2_ParamLimits

0x809c,	// (0x00062980) popup_note_window_t2

0x80b2,	// (0x00062996) popup_note_window_t3_ParamLimits

0x80b2,	// (0x00062996) popup_note_window_t3

0x80c8,	// (0x000629ac) popup_note_window_t4_ParamLimits

0x80c8,	// (0x000629ac) popup_note_window_t4

0x80f0,	// (0x000629d4) popup_note_window_t5_ParamLimits

0x80f0,	// (0x000629d4) popup_note_window_t5

0x0004,

0xf57f,	// (0x00069e63) popup_note_window_t_ParamLimits

0xf57f,	// (0x00069e63) popup_note_window_t

0x8114,	// (0x000629f8) bg_popup_window_pane_cp6_ParamLimits

0x8114,	// (0x000629f8) bg_popup_window_pane_cp6

0x2e1e,	// (0x0005d702) popup_note_image_window_g1_ParamLimits

0x2e1e,	// (0x0005d702) popup_note_image_window_g1

0xc341,	// (0x00066c25) popup_note_image_window_g2_ParamLimits

0xc341,	// (0x00066c25) popup_note_image_window_g2

0x0001,

0xf849,	// (0x0006a12d) popup_note_image_window_g_ParamLimits

0xf849,	// (0x0006a12d) popup_note_image_window_g

0x2e43,	// (0x0005d727) popup_note_image_window_t1_ParamLimits

0x2e43,	// (0x0005d727) popup_note_image_window_t1

0x2e5c,	// (0x0005d740) popup_note_image_window_t2_ParamLimits

0x2e5c,	// (0x0005d740) popup_note_image_window_t2

0x2e75,	// (0x0005d759) popup_note_image_window_t3_ParamLimits

0x2e75,	// (0x0005d759) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x0006a132) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x0006a132) popup_note_image_window_t

0x2ce7,	// (0x0005d5cb) bg_popup_window_pane_cp7_ParamLimits

0x2ce7,	// (0x0005d5cb) bg_popup_window_pane_cp7

0x2d17,	// (0x0005d5fb) popup_note_wait_window_g1_ParamLimits

0x2d17,	// (0x0005d5fb) popup_note_wait_window_g1

0x2d23,	// (0x0005d607) popup_note_wait_window_g2_ParamLimits

0x2d23,	// (0x0005d607) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x0006a11b) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x0006a11b) popup_note_wait_window_g

0x2d3b,	// (0x0005d61f) popup_note_wait_window_t1_ParamLimits

0x2d3b,	// (0x0005d61f) popup_note_wait_window_t1

0xc2e2,	// (0x00066bc6) popup_note_wait_window_t2_ParamLimits

0xc2e2,	// (0x00066bc6) popup_note_wait_window_t2

0xc2ff,	// (0x00066be3) popup_note_wait_window_t3_ParamLimits

0xc2ff,	// (0x00066be3) popup_note_wait_window_t3

0xc312,	// (0x00066bf6) popup_note_wait_window_t4_ParamLimits

0xc312,	// (0x00066bf6) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x0006a122) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x0006a122) popup_note_wait_window_t

0x2db7,	// (0x0005d69b) wait_bar_pane_ParamLimits

0x2db7,	// (0x0005d69b) wait_bar_pane

0x7ee6,	// (0x000627ca) wait_anim_pane

0x7ee6,	// (0x000627ca) wait_border_pane

0x7edc,	// (0x000627c0) wait_anim_pane_g1

0x7edc,	// (0x000627c0) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00069fe2) wait_anim_pane_g

0x2c93,	// (0x0005d577) wait_border_pane_g1

0x2c9e,	// (0x0005d582) wait_border_pane_g2

0x2ca7,	// (0x0005d58b) wait_border_pane_g3

0x0002,

0xf830,	// (0x0006a114) wait_border_pane_g

0x2afe,	// (0x0005d3e2) bg_popup_window_pane_cp16_ParamLimits

0x2afe,	// (0x0005d3e2) bg_popup_window_pane_cp16

0xc292,	// (0x00066b76) indicator_popup_pane_cp4_ParamLimits

0xc292,	// (0x00066b76) indicator_popup_pane_cp4

0x2c12,	// (0x0005d4f6) popup_query_data_window_t1_ParamLimits

0x2c12,	// (0x0005d4f6) popup_query_data_window_t1

0x2c24,	// (0x0005d508) popup_query_data_window_t2_ParamLimits

0x2c24,	// (0x0005d508) popup_query_data_window_t2

0x2c3d,	// (0x0005d521) popup_query_data_window_t3_ParamLimits

0x2c3d,	// (0x0005d521) popup_query_data_window_t3

0x0002,

0xf829,	// (0x0006a10d) popup_query_data_window_t_ParamLimits

0xf829,	// (0x0006a10d) popup_query_data_window_t

0xc2a6,	// (0x00066b8a) query_popup_data_pane_ParamLimits

0xc2a6,	// (0x00066b8a) query_popup_data_pane

0xc2ba,	// (0x00066b9e) query_popup_data_pane_cp1_ParamLimits

0xc2ba,	// (0x00066b9e) query_popup_data_pane_cp1

0x2afe,	// (0x0005d3e2) bg_popup_window_pane_cp10_ParamLimits

0x2afe,	// (0x0005d3e2) bg_popup_window_pane_cp10

0xc20d,	// (0x00066af1) indicator_popup_pane_ParamLimits

0xc20d,	// (0x00066af1) indicator_popup_pane

0xc22f,	// (0x00066b13) popup_query_code_window_t1_ParamLimits

0xc22f,	// (0x00066b13) popup_query_code_window_t1

0xc249,	// (0x00066b2d) popup_query_code_window_t2_ParamLimits

0xc249,	// (0x00066b2d) popup_query_code_window_t2

0x2bb5,	// (0x0005d499) popup_query_code_window_t3_ParamLimits

0x2bb5,	// (0x0005d499) popup_query_code_window_t3

0x0002,

0xf822,	// (0x0006a106) popup_query_code_window_t_ParamLimits

0xf822,	// (0x0006a106) popup_query_code_window_t

0x2be4,	// (0x0005d4c8) query_popup_pane_ParamLimits

0x2be4,	// (0x0005d4c8) query_popup_pane

0x8114,	// (0x000629f8) bg_popup_window_pane_cp15_ParamLimits

0x8114,	// (0x000629f8) bg_popup_window_pane_cp15

0x97fd,	// (0x000640e1) indicator_popup_pane_cp1_ParamLimits

0x97fd,	// (0x000640e1) indicator_popup_pane_cp1

0x9810,	// (0x000640f4) indicator_popup_pane_cp2_ParamLimits

0x9810,	// (0x000640f4) indicator_popup_pane_cp2

0x9823,	// (0x00064107) popup_query_data_code_window_g1_ParamLimits

0x9823,	// (0x00064107) popup_query_data_code_window_g1

0x8132,	// (0x00062a16) popup_query_data_code_window_t1_ParamLimits

0x8132,	// (0x00062a16) popup_query_data_code_window_t1

0x8144,	// (0x00062a28) popup_query_data_code_window_t2_ParamLimits

0x8144,	// (0x00062a28) popup_query_data_code_window_t2

0x9836,	// (0x0006411a) popup_query_data_code_window_t3_ParamLimits

0x9836,	// (0x0006411a) popup_query_data_code_window_t3

0x984c,	// (0x00064130) popup_query_data_code_window_t4_ParamLimits

0x984c,	// (0x00064130) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00069e6e) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00069e6e) popup_query_data_code_window_t

0x070d,	// (0x0005aff1) list_single_midp_graphic_pane_g3

0x9864,	// (0x00064148) query_popup_data_pane_cp2_ParamLimits

0x9877,	// (0x0006415b) query_popup_pane_cp2_ParamLimits

0x9877,	// (0x0006415b) query_popup_pane_cp2

0x7ee6,	// (0x000627ca) bg_popup_window_pane_cp11

0x2af6,	// (0x0005d3da) heading_pane_cp5

0x81a0,	// (0x00062a84) listscroll_popup_info_pane

0x7ee6,	// (0x000627ca) input_focus_pane_cp3

0x8156,	// (0x00062a3a) query_popup_pane_t1

0x8164,	// (0x00062a48) list_popup_info_pane_ParamLimits

0x8164,	// (0x00062a48) list_popup_info_pane

0x8173,	// (0x00062a57) listscroll_popup_info_pane_g1

0x817b,	// (0x00062a5f) scroll_pane_cp7

0x988a,	// (0x0006416e) popup_info_list_pane_t1_ParamLimits

0x988a,	// (0x0006416e) popup_info_list_pane_t1

0x98a4,	// (0x00064188) popup_info_list_pane_t2_ParamLimits

0x98a4,	// (0x00064188) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00069e77) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00069e77) popup_info_list_pane_t

0x7ee6,	// (0x000627ca) bg_popup_window_pane_cp12

0xc9de,	// (0x000672c2) find_popup_pane

0x7f34,	// (0x00062818) bg_popup_window_pane_cp3

0x8185,	// (0x00062a69) heading_pane_cp3

0x8191,	// (0x00062a75) listscroll_popup_graphic_pane

0x7ee6,	// (0x000627ca) bg_popup_window_pane_cp4

0x990e,	// (0x000641f2) heading_pane_cp4

0x81a0,	// (0x00062a84) listscroll_popup_colour_pane

0x9916,	// (0x000641fa) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9916,	// (0x000641fa) cell_large_graphic_colour_none_popup_pane

0x992a,	// (0x0006420e) grid_large_graphic_colour_popup_pane_ParamLimits

0x992a,	// (0x0006420e) grid_large_graphic_colour_popup_pane

0x994e,	// (0x00064232) listscroll_popup_colour_pane_g1_ParamLimits

0x994e,	// (0x00064232) listscroll_popup_colour_pane_g1

0x9965,	// (0x00064249) listscroll_popup_colour_pane_g2_ParamLimits

0x9965,	// (0x00064249) listscroll_popup_colour_pane_g2

0x997c,	// (0x00064260) listscroll_popup_colour_pane_g3_ParamLimits

0x997c,	// (0x00064260) listscroll_popup_colour_pane_g3

0x998c,	// (0x00064270) listscroll_popup_colour_pane_g4_ParamLimits

0x998c,	// (0x00064270) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00069e7c) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00069e7c) listscroll_popup_colour_pane_g

0x81a8,	// (0x00062a8c) scroll_pane_cp6_ParamLimits

0x81a8,	// (0x00062a8c) scroll_pane_cp6

0x999c,	// (0x00064280) cell_large_graphic_colour_popup_pane_ParamLimits

0x999c,	// (0x00064280) cell_large_graphic_colour_popup_pane

0x99bb,	// (0x0006429f) cell_large_graphic_colour_none_popup_pane_t1

0x7ee6,	// (0x000627ca) grid_highlight_pane_cp5

0x81ba,	// (0x00062a9e) cell_large_graphic_colour_popup_pane_g1

0x81c2,	// (0x00062aa6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00069e85) cell_large_graphic_colour_popup_pane_g

0x81ca,	// (0x00062aae) cell_large_graphic_colour_popup_pane_g2_copy1

0x81d3,	// (0x00062ab7) grid_highlight_pane_cp4

0x81db,	// (0x00062abf) bg_popup_window_pane_cp8_ParamLimits

0x81db,	// (0x00062abf) bg_popup_window_pane_cp8

0x99ca,	// (0x000642ae) popup_snote_single_text_window_g1_ParamLimits

0x99ca,	// (0x000642ae) popup_snote_single_text_window_g1

0x99dc,	// (0x000642c0) popup_snote_single_text_window_t1_ParamLimits

0x99dc,	// (0x000642c0) popup_snote_single_text_window_t1

0x99ef,	// (0x000642d3) popup_snote_single_text_window_t2_ParamLimits

0x99ef,	// (0x000642d3) popup_snote_single_text_window_t2

0x9a02,	// (0x000642e6) popup_snote_single_text_window_t3_ParamLimits

0x9a02,	// (0x000642e6) popup_snote_single_text_window_t3

0x9a3b,	// (0x0006431f) popup_snote_single_text_window_t4_ParamLimits

0x9a3b,	// (0x0006431f) popup_snote_single_text_window_t4

0x9a6f,	// (0x00064353) popup_snote_single_text_window_t5_ParamLimits

0x9a6f,	// (0x00064353) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00069e8a) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00069e8a) popup_snote_single_text_window_t

0x81f6,	// (0x00062ada) bg_popup_window_pane_cp9_ParamLimits

0x81f6,	// (0x00062ada) bg_popup_window_pane_cp9

0x99ca,	// (0x000642ae) popup_snote_single_graphic_window_g1_ParamLimits

0x99ca,	// (0x000642ae) popup_snote_single_graphic_window_g1

0x8204,	// (0x00062ae8) popup_snote_single_graphic_window_g2_ParamLimits

0x8204,	// (0x00062ae8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00069e95) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00069e95) popup_snote_single_graphic_window_g

0x8210,	// (0x00062af4) popup_snote_single_graphic_window_t1_ParamLimits

0x8210,	// (0x00062af4) popup_snote_single_graphic_window_t1

0x8223,	// (0x00062b07) popup_snote_single_graphic_window_t2_ParamLimits

0x8223,	// (0x00062b07) popup_snote_single_graphic_window_t2

0x9a02,	// (0x000642e6) popup_snote_single_graphic_window_t3_ParamLimits

0x9a02,	// (0x000642e6) popup_snote_single_graphic_window_t3

0x9a3b,	// (0x0006431f) popup_snote_single_graphic_window_t4_ParamLimits

0x9a3b,	// (0x0006431f) popup_snote_single_graphic_window_t4

0x9a9e,	// (0x00064382) popup_snote_single_graphic_window_t5_ParamLimits

0x9a9e,	// (0x00064382) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00069e9a) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00069e9a) popup_snote_single_graphic_window_t

0x3f4d,	// (0x0005e831) grid_graphic_popup_pane_ParamLimits

0x3f4d,	// (0x0005e831) grid_graphic_popup_pane

0x3f77,	// (0x0005e85b) listscroll_popup_graphic_pane_g1_ParamLimits

0x3f77,	// (0x0005e85b) listscroll_popup_graphic_pane_g1

0xc97c,	// (0x00067260) listscroll_popup_graphic_pane_g2_ParamLimits

0xc97c,	// (0x00067260) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0006a283) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0006a283) listscroll_popup_graphic_pane_g

0x3f9f,	// (0x0005e883) scroll_pane_cp5

0xc921,	// (0x00067205) cell_graphic_popup_pane_ParamLimits

0xc921,	// (0x00067205) cell_graphic_popup_pane

0x3ecd,	// (0x0005e7b1) cell_graphic_popup_pane_g1

0x3ed5,	// (0x0005e7b9) cell_graphic_popup_pane_g2

0x81ca,	// (0x00062aae) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x0006a27c) cell_graphic_popup_pane_g

0x3ede,	// (0x0005e7c2) cell_graphic_popup_pane_t2

0x81d3,	// (0x00062ab7) grid_highlight_pane_cp3

0x8248,	// (0x00062b2c) list_gen_pane_ParamLimits

0x8248,	// (0x00062b2c) list_gen_pane

0x8270,	// (0x00062b54) scroll_pane

0xc88b,	// (0x0006716f) bg_list_pane_g1_ParamLimits

0xc88b,	// (0x0006716f) bg_list_pane_g1

0xc8a6,	// (0x0006718a) bg_list_pane_g2_ParamLimits

0xc8a6,	// (0x0006718a) bg_list_pane_g2

0xc8b9,	// (0x0006719d) bg_list_pane_g3_ParamLimits

0xc8b9,	// (0x0006719d) bg_list_pane_g3

0xc8cb,	// (0x000671af) bg_list_pane_g4_ParamLimits

0xc8cb,	// (0x000671af) bg_list_pane_g4

0xc8dd,	// (0x000671c1) bg_list_pane_g5_ParamLimits

0xc8dd,	// (0x000671c1) bg_list_pane_g5

0x0004,

0xf98d,	// (0x0006a271) bg_list_pane_g_ParamLimits

0xf98d,	// (0x0006a271) bg_list_pane_g

0xc82f,	// (0x00067113) list_double2_graphic_large_graphic_pane_ParamLimits

0xc82f,	// (0x00067113) list_double2_graphic_large_graphic_pane

0xc82f,	// (0x00067113) list_double2_graphic_pane_ParamLimits

0xc82f,	// (0x00067113) list_double2_graphic_pane

0xc82f,	// (0x00067113) list_double2_large_graphic_pane_ParamLimits

0xc82f,	// (0x00067113) list_double2_large_graphic_pane

0xc82f,	// (0x00067113) list_double2_pane_ParamLimits

0xc82f,	// (0x00067113) list_double2_pane

0xc82f,	// (0x00067113) list_double_graphic_heading_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_graphic_heading_pane

0xc82f,	// (0x00067113) list_double_graphic_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_graphic_pane

0xc82f,	// (0x00067113) list_double_heading_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_heading_pane

0xc82f,	// (0x00067113) list_double_large_graphic_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_large_graphic_pane

0xc82f,	// (0x00067113) list_double_number_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_number_pane

0xc82f,	// (0x00067113) list_double_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_pane

0xc82f,	// (0x00067113) list_double_time_pane_ParamLimits

0xc82f,	// (0x00067113) list_double_time_pane

0xc82f,	// (0x00067113) list_setting_number_pane_ParamLimits

0xc82f,	// (0x00067113) list_setting_number_pane

0xc82f,	// (0x00067113) list_setting_pane_ParamLimits

0xc82f,	// (0x00067113) list_setting_pane

0xc841,	// (0x00067125) list_single_2graphic_pane_ParamLimits

0xc841,	// (0x00067125) list_single_2graphic_pane

0xc841,	// (0x00067125) list_single_graphic_heading_pane_ParamLimits

0xc841,	// (0x00067125) list_single_graphic_heading_pane

0xc841,	// (0x00067125) list_single_graphic_pane_ParamLimits

0xc841,	// (0x00067125) list_single_graphic_pane

0xc841,	// (0x00067125) list_single_heading_pane_ParamLimits

0xc841,	// (0x00067125) list_single_heading_pane

0xc841,	// (0x00067125) list_single_large_graphic_pane_ParamLimits

0xc841,	// (0x00067125) list_single_large_graphic_pane

0xc841,	// (0x00067125) list_single_number_heading_pane_ParamLimits

0xc841,	// (0x00067125) list_single_number_heading_pane

0xc841,	// (0x00067125) list_single_number_pane_ParamLimits

0xc841,	// (0x00067125) list_single_number_pane

0xc841,	// (0x00067125) list_single_pane_ParamLimits

0xc841,	// (0x00067125) list_single_pane

0x7ee6,	// (0x000627ca) list_highlight_pane_cp1

0xdc1f,	// (0x00068503) list_single_pane_g1_ParamLimits

0xdc1f,	// (0x00068503) list_single_pane_g1

0xdc2b,	// (0x0006850f) list_single_pane_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_single_pane_g

0xb1fe,	// (0x00065ae2) list_single_pane_t1_ParamLimits

0xb1fe,	// (0x00065ae2) list_single_pane_t1

0xdc1f,	// (0x00068503) list_single_number_pane_g1_ParamLimits

0xdc1f,	// (0x00068503) list_single_number_pane_g1

0xdc2b,	// (0x0006850f) list_single_number_pane_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_single_number_pane_g

0xdc37,	// (0x0006851b) list_single_number_pane_t1_ParamLimits

0xdc37,	// (0x0006851b) list_single_number_pane_t1

0xb152,	// (0x00065a36) list_single_number_pane_t2_ParamLimits

0xb152,	// (0x00065a36) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x0006a232) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x0006a232) list_single_number_pane_t

0xdc13,	// (0x000684f7) list_single_graphic_pane_g1_ParamLimits

0xdc13,	// (0x000684f7) list_single_graphic_pane_g1

0xdc1f,	// (0x00068503) list_single_graphic_pane_g2_ParamLimits

0xdc1f,	// (0x00068503) list_single_graphic_pane_g2

0xdc2b,	// (0x0006850f) list_single_graphic_pane_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00069ea5) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00069ea5) list_single_graphic_pane_g

0xdc37,	// (0x0006851b) list_single_graphic_pane_t1_ParamLimits

0xdc37,	// (0x0006851b) list_single_graphic_pane_t1

0x9ad7,	// (0x000643bb) list_single_heading_pane_g1_ParamLimits

0x9ad7,	// (0x000643bb) list_single_heading_pane_g1

0xdc2b,	// (0x0006850f) list_single_heading_pane_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00069eac) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00069eac) list_single_heading_pane_g

0x9aea,	// (0x000643ce) list_single_heading_pane_t1_ParamLimits

0x9aea,	// (0x000643ce) list_single_heading_pane_t1

0x9b00,	// (0x000643e4) list_single_heading_pane_t2_ParamLimits

0x9b00,	// (0x000643e4) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00069eb1) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00069eb1) list_single_heading_pane_t

0xdc1f,	// (0x00068503) list_single_number_heading_pane_g1_ParamLimits

0xdc1f,	// (0x00068503) list_single_number_heading_pane_g1

0xdc2b,	// (0x0006850f) list_single_number_heading_pane_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_single_number_heading_pane_g

0x9b12,	// (0x000643f6) list_single_number_heading_pane_t1_ParamLimits

0x9b12,	// (0x000643f6) list_single_number_heading_pane_t1

0x9b28,	// (0x0006440c) list_single_number_heading_pane_t2_ParamLimits

0x9b28,	// (0x0006440c) list_single_number_heading_pane_t2

0x9b3a,	// (0x0006441e) list_single_number_heading_pane_t3_ParamLimits

0x9b3a,	// (0x0006441e) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00069ebb) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00069ebb) list_single_number_heading_pane_t

0x9b4c,	// (0x00064430) list_single_graphic_heading_pane_g1_ParamLimits

0x9b4c,	// (0x00064430) list_single_graphic_heading_pane_g1

0x9b62,	// (0x00064446) list_single_graphic_heading_pane_g4_ParamLimits

0x9b62,	// (0x00064446) list_single_graphic_heading_pane_g4

0xdc2b,	// (0x0006850f) list_single_graphic_heading_pane_g5_ParamLimits

0xdc2b,	// (0x0006850f) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00069ec2) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00069ec2) list_single_graphic_heading_pane_g

0x9b12,	// (0x000643f6) list_single_graphic_heading_pane_t1_ParamLimits

0x9b12,	// (0x000643f6) list_single_graphic_heading_pane_t1

0x9b73,	// (0x00064457) list_single_graphic_heading_pane_t2_ParamLimits

0x9b73,	// (0x00064457) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00069ec9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00069ec9) list_single_graphic_heading_pane_t

0x3c7f,	// (0x0005e563) list_single_large_graphic_pane_g1_ParamLimits

0x3c7f,	// (0x0005e563) list_single_large_graphic_pane_g1

0xdc1f,	// (0x00068503) list_single_large_graphic_pane_g2_ParamLimits

0xdc1f,	// (0x00068503) list_single_large_graphic_pane_g2

0xdc2b,	// (0x0006850f) list_single_large_graphic_pane_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00069ece) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00069ece) list_single_large_graphic_pane_g

0x2c9e,	// (0x0005d582) wait_border_pane_g2_copy1

0x9b8b,	// (0x0006446f) list_single_large_graphic_pane_g4_cp2

0xdc37,	// (0x0006851b) list_single_large_graphic_pane_t1_ParamLimits

0xdc37,	// (0x0006851b) list_single_large_graphic_pane_t1

0x3dda,	// (0x0005e6be) list_double_pane_g1_ParamLimits

0x3dda,	// (0x0005e6be) list_double_pane_g1

0xdc4d,	// (0x00068531) list_double_pane_g2_ParamLimits

0xdc4d,	// (0x00068531) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00069ed5) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00069ed5) list_double_pane_g

0x9b93,	// (0x00064477) list_double_pane_t1_ParamLimits

0x9b93,	// (0x00064477) list_double_pane_t1

0x9ba9,	// (0x0006448d) list_double_pane_t2_ParamLimits

0x9ba9,	// (0x0006448d) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00069eda) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00069eda) list_double_pane_t

0x9bbb,	// (0x0006449f) list_double2_pane_g1_ParamLimits

0x9bbb,	// (0x0006449f) list_double2_pane_g1

0x9bcc,	// (0x000644b0) list_double2_pane_g2_ParamLimits

0x9bcc,	// (0x000644b0) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00069edf) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00069edf) list_double2_pane_g

0x9bd8,	// (0x000644bc) list_double2_pane_t1_ParamLimits

0x9bd8,	// (0x000644bc) list_double2_pane_t1

0x9bee,	// (0x000644d2) list_double2_pane_t2_ParamLimits

0x9bee,	// (0x000644d2) list_double2_pane_t2

0x0001,

0xf600,	// (0x00069ee4) list_double2_pane_t_ParamLimits

0xf600,	// (0x00069ee4) list_double2_pane_t

0x3dda,	// (0x0005e6be) list_double_number_pane_g1_ParamLimits

0x3dda,	// (0x0005e6be) list_double_number_pane_g1

0xdc4d,	// (0x00068531) list_double_number_pane_g2_ParamLimits

0xdc4d,	// (0x00068531) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00069ed5) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00069ed5) list_double_number_pane_g

0x9c00,	// (0x000644e4) list_double_number_pane_t1_ParamLimits

0x9c00,	// (0x000644e4) list_double_number_pane_t1

0x9c12,	// (0x000644f6) list_double_number_pane_t2_ParamLimits

0x9c12,	// (0x000644f6) list_double_number_pane_t2

0x9c28,	// (0x0006450c) list_double_number_pane_t3_ParamLimits

0x9c28,	// (0x0006450c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00069ee9) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00069ee9) list_double_number_pane_t

0x9c3a,	// (0x0006451e) list_double_graphic_pane_g1_ParamLimits

0x9c3a,	// (0x0006451e) list_double_graphic_pane_g1

0x9c46,	// (0x0006452a) list_double_graphic_pane_g2_ParamLimits

0x9c46,	// (0x0006452a) list_double_graphic_pane_g2

0x9c55,	// (0x00064539) list_double_graphic_pane_g3_ParamLimits

0x9c55,	// (0x00064539) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00069ef0) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00069ef0) list_double_graphic_pane_g

0x9c12,	// (0x000644f6) list_double_graphic_pane_t1_ParamLimits

0x9c12,	// (0x000644f6) list_double_graphic_pane_t1

0x9c28,	// (0x0006450c) list_double_graphic_pane_t2_ParamLimits

0x9c28,	// (0x0006450c) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00069ef9) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00069ef9) list_double_graphic_pane_t

0x9c6d,	// (0x00064551) list_double2_graphic_pane_g1_ParamLimits

0x9c6d,	// (0x00064551) list_double2_graphic_pane_g1

0x8302,	// (0x00062be6) list_double2_graphic_pane_g2_ParamLimits

0x8302,	// (0x00062be6) list_double2_graphic_pane_g2

0x9c79,	// (0x0006455d) list_double2_graphic_pane_g3_ParamLimits

0x9c79,	// (0x0006455d) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00069efe) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00069efe) list_double2_graphic_pane_g

0x9c85,	// (0x00064569) list_double2_graphic_pane_t1_ParamLimits

0x9c85,	// (0x00064569) list_double2_graphic_pane_t1

0x9c9b,	// (0x0006457f) list_double2_graphic_pane_t2_ParamLimits

0x9c9b,	// (0x0006457f) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00069f05) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00069f05) list_double2_graphic_pane_t

0x9cad,	// (0x00064591) list_double_large_graphic_pane_g1_ParamLimits

0x9cad,	// (0x00064591) list_double_large_graphic_pane_g1

0x9ccc,	// (0x000645b0) list_double_large_graphic_pane_g2_ParamLimits

0x9ccc,	// (0x000645b0) list_double_large_graphic_pane_g2

0xdc4d,	// (0x00068531) list_double_large_graphic_pane_g3_ParamLimits

0xdc4d,	// (0x00068531) list_double_large_graphic_pane_g3

0x9ce2,	// (0x000645c6) list_double_large_graphic_pane_g4_ParamLimits

0x9ce2,	// (0x000645c6) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00069f0a) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00069f0a) list_double_large_graphic_pane_g

0x9cf5,	// (0x000645d9) list_double_large_graphic_pane_t1_ParamLimits

0x9cf5,	// (0x000645d9) list_double_large_graphic_pane_t1

0x9d0e,	// (0x000645f2) list_double_large_graphic_pane_t2_ParamLimits

0x9d0e,	// (0x000645f2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00069f15) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00069f15) list_double_large_graphic_pane_t

0x9d20,	// (0x00064604) list_double2_large_graphic_pane_g1_ParamLimits

0x9d20,	// (0x00064604) list_double2_large_graphic_pane_g1

0x9d2c,	// (0x00064610) list_double2_large_graphic_pane_g2_ParamLimits

0x9d2c,	// (0x00064610) list_double2_large_graphic_pane_g2

0x9c79,	// (0x0006455d) list_double2_large_graphic_pane_g3_ParamLimits

0x9c79,	// (0x0006455d) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00069f1a) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00069f1a) list_double2_large_graphic_pane_g

0x9c85,	// (0x00064569) list_double2_large_graphic_pane_t1_ParamLimits

0x9c85,	// (0x00064569) list_double2_large_graphic_pane_t1

0x9c9b,	// (0x0006457f) list_double2_large_graphic_pane_t2_ParamLimits

0x9c9b,	// (0x0006457f) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00069f05) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00069f05) list_double2_large_graphic_pane_t

0x9d3d,	// (0x00064621) list_double_heading_pane_g1_ParamLimits

0x9d3d,	// (0x00064621) list_double_heading_pane_g1

0x9d4e,	// (0x00064632) list_double_heading_pane_g2_ParamLimits

0x9d4e,	// (0x00064632) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00069f21) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00069f21) list_double_heading_pane_g

0x9d5a,	// (0x0006463e) list_double_heading_pane_t1_ParamLimits

0x9d5a,	// (0x0006463e) list_double_heading_pane_t1

0x9c9b,	// (0x0006457f) list_double_heading_pane_t2_ParamLimits

0x9c9b,	// (0x0006457f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00069f26) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00069f26) list_double_heading_pane_t

0x9d70,	// (0x00064654) list_double_graphic_heading_pane_g1_ParamLimits

0x9d70,	// (0x00064654) list_double_graphic_heading_pane_g1

0x9d3d,	// (0x00064621) list_double_graphic_heading_pane_g2_ParamLimits

0x9d3d,	// (0x00064621) list_double_graphic_heading_pane_g2

0x9d4e,	// (0x00064632) list_double_graphic_heading_pane_g3_ParamLimits

0x9d4e,	// (0x00064632) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00069f2b) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00069f2b) list_double_graphic_heading_pane_g

0x9d5a,	// (0x0006463e) list_double_graphic_heading_pane_t1_ParamLimits

0x9d5a,	// (0x0006463e) list_double_graphic_heading_pane_t1

0x9c9b,	// (0x0006457f) list_double_graphic_heading_pane_t2_ParamLimits

0x9c9b,	// (0x0006457f) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00069f26) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00069f26) list_double_graphic_heading_pane_t

0x9d7c,	// (0x00064660) list_double_time_pane_g1_ParamLimits

0x9d7c,	// (0x00064660) list_double_time_pane_g1

0xdc6e,	// (0x00068552) list_double_time_pane_g2_ParamLimits

0xdc6e,	// (0x00068552) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00069f32) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00069f32) list_double_time_pane_g

0x9d8d,	// (0x00064671) list_double_time_pane_t1_ParamLimits

0x9d8d,	// (0x00064671) list_double_time_pane_t1

0x9da3,	// (0x00064687) list_double_time_pane_t2_ParamLimits

0x9da3,	// (0x00064687) list_double_time_pane_t2

0x9db5,	// (0x00064699) list_double_time_pane_t3_ParamLimits

0x9db5,	// (0x00064699) list_double_time_pane_t3

0x9dc7,	// (0x000646ab) list_double_time_pane_t4_ParamLimits

0x9dc7,	// (0x000646ab) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00069f37) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00069f37) list_double_time_pane_t

0x9dd9,	// (0x000646bd) list_setting_pane_g1_ParamLimits

0x9dd9,	// (0x000646bd) list_setting_pane_g1

0x9de5,	// (0x000646c9) list_setting_pane_g2_ParamLimits

0x9de5,	// (0x000646c9) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00069f40) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00069f40) list_setting_pane_g

0x9df1,	// (0x000646d5) list_setting_pane_t1_ParamLimits

0x9df1,	// (0x000646d5) list_setting_pane_t1

0x9e0b,	// (0x000646ef) list_setting_pane_t2_ParamLimits

0x9e0b,	// (0x000646ef) list_setting_pane_t2

0x0002,

0xf661,	// (0x00069f45) list_setting_pane_t_ParamLimits

0xf661,	// (0x00069f45) list_setting_pane_t

0x9e4a,	// (0x0006472e) set_value_pane_cp_ParamLimits

0x9e4a,	// (0x0006472e) set_value_pane_cp

0x9e56,	// (0x0006473a) list_setting_number_pane_g1_ParamLimits

0x9e56,	// (0x0006473a) list_setting_number_pane_g1

0x9e62,	// (0x00064746) list_setting_number_pane_g2_ParamLimits

0x9e62,	// (0x00064746) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00069f4c) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00069f4c) list_setting_number_pane_g

0x9e6e,	// (0x00064752) list_setting_number_pane_t1_ParamLimits

0x9e6e,	// (0x00064752) list_setting_number_pane_t1

0x9e87,	// (0x0006476b) list_setting_number_pane_t2_ParamLimits

0x9e87,	// (0x0006476b) list_setting_number_pane_t2

0x9ea1,	// (0x00064785) list_setting_number_pane_t3_ParamLimits

0x9ea1,	// (0x00064785) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00069f51) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00069f51) list_setting_number_pane_t

0x9e4a,	// (0x0006472e) set_value_pane_ParamLimits

0x9e4a,	// (0x0006472e) set_value_pane

0x82a4,	// (0x00062b88) bg_set_opt_pane_ParamLimits

0x82a4,	// (0x00062b88) bg_set_opt_pane

0xdc7a,	// (0x0006855e) set_value_pane_t1

0x82c5,	// (0x00062ba9) slider_set_pane_cp3

0x9ee4,	// (0x000647c8) volume_small_pane_cp

0x82ce,	// (0x00062bb2) list_form_gen_pane

0x82d7,	// (0x00062bbb) scroll_pane_cp8

0x9eed,	// (0x000647d1) form_field_data_pane_ParamLimits

0x9eed,	// (0x000647d1) form_field_data_pane

0x9f04,	// (0x000647e8) form_field_data_wide_pane_ParamLimits

0x9f04,	// (0x000647e8) form_field_data_wide_pane

0x9f24,	// (0x00064808) form_field_popup_pane_ParamLimits

0x9f24,	// (0x00064808) form_field_popup_pane

0x9f3c,	// (0x00064820) form_field_popup_wide_pane_ParamLimits

0x9f3c,	// (0x00064820) form_field_popup_wide_pane

0xdc98,	// (0x0006857c) form_field_slider_pane_ParamLimits

0xdc98,	// (0x0006857c) form_field_slider_pane

0x9f53,	// (0x00064837) form_field_slider_wide_pane_ParamLimits

0x9f53,	// (0x00064837) form_field_slider_wide_pane

0x82e8,	// (0x00062bcc) data_form_pane

0x9f70,	// (0x00064854) form_field_data_pane_t1

0x82f4,	// (0x00062bd8) input_focus_pane

0xdcab,	// (0x0006858f) data_form_wide_pane

0xdcc8,	// (0x000685ac) form_field_data_wide_pane_t1

0x81e8,	// (0x00062acc) input_focus_pane_cp6

0x9f8a,	// (0x0006486e) form_field_popup_pane_t1

0x82f4,	// (0x00062bd8) input_focus_pane_cp7

0x84e4,	// (0x00062dc8) list_form_pane

0xdcf2,	// (0x000685d6) form_field_popup_wide_pane_t1

0x82f4,	// (0x00062bd8) input_focus_pane_cp8

0x84f0,	// (0x00062dd4) list_form_wide_pane

0x9fac,	// (0x00064890) form_field_slider_pane_t1_ParamLimits

0x9fac,	// (0x00064890) form_field_slider_pane_t1

0x9fc4,	// (0x000648a8) form_field_slider_pane_t2_ParamLimits

0x9fc4,	// (0x000648a8) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00069f61) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00069f61) form_field_slider_pane_t

0x805e,	// (0x00062942) input_focus_pane_cp9_ParamLimits

0x805e,	// (0x00062942) input_focus_pane_cp9

0x9fd9,	// (0x000648bd) slider_cont_pane_ParamLimits

0x9fd9,	// (0x000648bd) slider_cont_pane

0x84fc,	// (0x00062de0) form_field_slider_wide_pane_t1_ParamLimits

0x84fc,	// (0x00062de0) form_field_slider_wide_pane_t1

0xdd07,	// (0x000685eb) form_field_slider_wide_pane_t2_ParamLimits

0xdd07,	// (0x000685eb) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00069f66) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00069f66) form_field_slider_wide_pane_t

0x805e,	// (0x00062942) input_focus_pane_cp10_ParamLimits

0x805e,	// (0x00062942) input_focus_pane_cp10

0x9fed,	// (0x000648d1) slider_cont_pane_cp1_ParamLimits

0x9fed,	// (0x000648d1) slider_cont_pane_cp1

0xa001,	// (0x000648e5) slider_form_pane_cp

0x850e,	// (0x00062df2) input_focus_pane_g1

0x8516,	// (0x00062dfa) input_focus_pane_g2

0x851e,	// (0x00062e02) input_focus_pane_g3

0x8526,	// (0x00062e0a) input_focus_pane_g4

0x852e,	// (0x00062e12) input_focus_pane_g5

0x8536,	// (0x00062e1a) input_focus_pane_g6

0x853e,	// (0x00062e22) input_focus_pane_g7

0x8546,	// (0x00062e2a) input_focus_pane_g8

0x854e,	// (0x00062e32) input_focus_pane_g9

0x7edc,	// (0x000627c0) input_focus_pane_g10

0x0009,

0xf687,	// (0x00069f6b) input_focus_pane_g

0x2ca7,	// (0x0005d58b) wait_border_pane_g3_copy1

0xa009,	// (0x000648ed) data_form_pane_t1

0x7edc,	// (0x000627c0) wait_anim_pane_g1_copy1

0xb1d0,	// (0x00065ab4) data_form_wide_pane_t1

0xa023,	// (0x00064907) list_form_graphic_pane_cp_ParamLimits

0xa023,	// (0x00064907) list_form_graphic_pane_cp

0x3b96,	// (0x0005e47a) slider_form_pane_g1

0x3b9f,	// (0x0005e483) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0006a262) slider_form_pane_g

0xa023,	// (0x00064907) list_form_graphic_pane_ParamLimits

0xa023,	// (0x00064907) list_form_graphic_pane

0xa035,	// (0x00064919) list_form_graphic_pane_g1

0xa03d,	// (0x00064921) list_form_graphic_pane_t1_ParamLimits

0xa03d,	// (0x00064921) list_form_graphic_pane_t1

0x7f34,	// (0x00062818) list_highlight_pane_cp5_ParamLimits

0x7f34,	// (0x00062818) list_highlight_pane_cp5

0xa052,	// (0x00064936) find_pane_g1

0x8556,	// (0x00062e3a) input_find_pane

0xa05b,	// (0x0006493f) input_find_pane_g1_ParamLimits

0xa05b,	// (0x0006493f) input_find_pane_g1

0xa067,	// (0x0006494b) input_find_pane_t1_ParamLimits

0xa067,	// (0x0006494b) input_find_pane_t1

0xa07c,	// (0x00064960) input_find_pane_t2_ParamLimits

0xa07c,	// (0x00064960) input_find_pane_t2

0x0001,

0xf69c,	// (0x00069f80) input_find_pane_t_ParamLimits

0xf69c,	// (0x00069f80) input_find_pane_t

0x855f,	// (0x00062e43) input_focus_pane_cp5_ParamLimits

0x855f,	// (0x00062e43) input_focus_pane_cp5

0x856d,	// (0x00062e51) bg_popup_window_pane_cp2_ParamLimits

0x856d,	// (0x00062e51) bg_popup_window_pane_cp2

0x857a,	// (0x00062e5e) listscroll_menu_pane_ParamLimits

0x857a,	// (0x00062e5e) listscroll_menu_pane

0xa09d,	// (0x00064981) popup_submenu_window_ParamLimits

0xa09d,	// (0x00064981) popup_submenu_window

0x8586,	// (0x00062e6a) find_popup_pane_g1

0xa0c5,	// (0x000649a9) input_popup_find_pane_cp

0x855f,	// (0x00062e43) input_focus_pane_cp4_ParamLimits

0x855f,	// (0x00062e43) input_focus_pane_cp4

0x858e,	// (0x00062e72) input_popup_find_pane_t1_ParamLimits

0x858e,	// (0x00062e72) input_popup_find_pane_t1

0x7ee6,	// (0x000627ca) bg_popup_sub_pane_cp

0x85bc,	// (0x00062ea0) listscroll_popup_sub_pane

0x85c4,	// (0x00062ea8) list_submenu_pane_ParamLimits

0x85c4,	// (0x00062ea8) list_submenu_pane

0x85d5,	// (0x00062eb9) scroll_pane_cp4

0xa0dd,	// (0x000649c1) list_single_popup_submenu_pane_ParamLimits

0xa0dd,	// (0x000649c1) list_single_popup_submenu_pane

0xa0f1,	// (0x000649d5) list_single_popup_submenu_pane_g1

0xa0f9,	// (0x000649dd) list_single_popup_submenu_pane_t1_ParamLimits

0xa0f9,	// (0x000649dd) list_single_popup_submenu_pane_t1

0x805e,	// (0x00062942) bg_active_tab_pane_cp1_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp1

0x85dd,	// (0x00062ec1) tabs_2_active_pane_g1

0xa10e,	// (0x000649f2) tabs_2_active_pane_t1

0x805e,	// (0x00062942) bg_passive_tab_pane_cp1_ParamLimits

0x805e,	// (0x00062942) bg_passive_tab_pane_cp1

0x85dd,	// (0x00062ec1) tabs_2_passive_pane_g1

0xa10e,	// (0x000649f2) tabs_2_passive_pane_t1

0x7f34,	// (0x00062818) bg_active_tab_pane_cp4

0xa120,	// (0x00064a04) tabs_2_long_active_pane_t1

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp4

0x0715,	// (0x0005aff9) list_single_midp_graphic_pane_g4_ParamLimits

0x7f34,	// (0x00062818) bg_active_tab_pane_cp5

0xa133,	// (0x00064a17) tabs_3_long_active_pane_t1

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp5

0x0715,	// (0x0005aff9) list_single_midp_graphic_pane_g4

0x7f34,	// (0x00062818) bg_popup_window_pane_cp13_ParamLimits

0x7f34,	// (0x00062818) bg_popup_window_pane_cp13

0x85e5,	// (0x00062ec9) listscroll_popup_fast_pane_ParamLimits

0x85e5,	// (0x00062ec9) listscroll_popup_fast_pane

0x85f1,	// (0x00062ed5) grid_popup_fast_pane_ParamLimits

0x85f1,	// (0x00062ed5) grid_popup_fast_pane

0x8603,	// (0x00062ee7) scroll_pane_cp9_ParamLimits

0x8603,	// (0x00062ee7) scroll_pane_cp9

0x567c,	// (0x0005ff60) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x567c,	// (0x0005ff60) list_single_graphic_hl_pane_t1_cp2

0x8616,	// (0x00062efa) input_focus_pane_cp20_ParamLimits

0x8616,	// (0x00062efa) input_focus_pane_cp20

0x8624,	// (0x00062f08) query_popup_data_pane_t1_ParamLimits

0x8624,	// (0x00062f08) query_popup_data_pane_t1

0x8637,	// (0x00062f1b) query_popup_data_pane_t2_ParamLimits

0x8637,	// (0x00062f1b) query_popup_data_pane_t2

0x867d,	// (0x00062f61) query_popup_data_pane_t3_ParamLimits

0x867d,	// (0x00062f61) query_popup_data_pane_t3

0x86be,	// (0x00062fa2) query_popup_data_pane_t4_ParamLimits

0x86be,	// (0x00062fa2) query_popup_data_pane_t4

0x86fa,	// (0x00062fde) query_popup_data_pane_t5_ParamLimits

0x86fa,	// (0x00062fde) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00069f85) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00069f85) query_popup_data_pane_t

0x850e,	// (0x00062df2) bg_set_opt_pane_g1

0x8516,	// (0x00062dfa) bg_set_opt_pane_g2

0x851e,	// (0x00062e02) bg_set_opt_pane_g3

0x8526,	// (0x00062e0a) bg_set_opt_pane_g4

0x852e,	// (0x00062e12) bg_set_opt_pane_g5

0x8536,	// (0x00062e1a) bg_set_opt_pane_g6

0x853e,	// (0x00062e22) bg_set_opt_pane_g7

0x8546,	// (0x00062e2a) bg_set_opt_pane_g8

0x854e,	// (0x00062e32) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00069f90) bg_set_opt_pane_g

0xf1f7,	// (0x00069adb) control_top_pane_stacon_ParamLimits

0xf1f7,	// (0x00069adb) control_top_pane_stacon

0xf24a,	// (0x00069b2e) signal_pane_stacon_ParamLimits

0xf24a,	// (0x00069b2e) signal_pane_stacon

0xddff,	// (0x000686e3) stacon_top_pane_g1_ParamLimits

0xddff,	// (0x000686e3) stacon_top_pane_g1

0xf26f,	// (0x00069b53) title_pane_stacon_ParamLimits

0xf26f,	// (0x00069b53) title_pane_stacon

0xf299,	// (0x00069b7d) uni_indicator_pane_stacon_ParamLimits

0xf299,	// (0x00069b7d) uni_indicator_pane_stacon

0xf2ae,	// (0x00069b92) battery_pane_stacon_ParamLimits

0xf2ae,	// (0x00069b92) battery_pane_stacon

0xf2f2,	// (0x00069bd6) control_bottom_pane_stacon_ParamLimits

0xf2f2,	// (0x00069bd6) control_bottom_pane_stacon

0xf315,	// (0x00069bf9) navi_pane_stacon_ParamLimits

0xf315,	// (0x00069bf9) navi_pane_stacon

0xde21,	// (0x00068705) stacon_bottom_pane_g1_ParamLimits

0xde21,	// (0x00068705) stacon_bottom_pane_g1

0xefba,	// (0x0006989e) aid_levels_signal_lsc_ParamLimits

0xefba,	// (0x0006989e) aid_levels_signal_lsc

0xefd0,	// (0x000698b4) signal_pane_stacon_g1_ParamLimits

0xefd0,	// (0x000698b4) signal_pane_stacon_g1

0xefe4,	// (0x000698c8) signal_pane_stacon_g2_ParamLimits

0xefe4,	// (0x000698c8) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00069fa3) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00069fa3) signal_pane_stacon_g

0xf019,	// (0x000698fd) title_pane_stacon_t1_ParamLimits

0xf019,	// (0x000698fd) title_pane_stacon_t1

0x873e,	// (0x00063022) uni_indicator_pane_stacon_g1

0x8748,	// (0x0006302c) uni_indicator_pane_stacon_g2

0x8752,	// (0x00063036) uni_indicator_pane_stacon_g3

0x875c,	// (0x00063040) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00069faf) uni_indicator_pane_stacon_g

0xf03e,	// (0x00069922) control_top_pane_stacon_g1

0xf046,	// (0x0006992a) control_top_pane_stacon_t1_ParamLimits

0xf046,	// (0x0006992a) control_top_pane_stacon_t1

0xf07d,	// (0x00069961) aid_levels_battery_lsc_ParamLimits

0xf07d,	// (0x00069961) aid_levels_battery_lsc

0xf094,	// (0x00069978) battery_pane_stacon_g1_ParamLimits

0xf094,	// (0x00069978) battery_pane_stacon_g1

0xf0a7,	// (0x0006998b) battery_pane_stacon_g2_ParamLimits

0xf0a7,	// (0x0006998b) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00069fb8) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00069fb8) battery_pane_stacon_g

0xf0e5,	// (0x000699c9) navi_icon_pane_stacon

0xf0f9,	// (0x000699dd) navi_navi_pane_stacon

0xf0e5,	// (0x000699c9) navi_text_pane_stacon

0xf03e,	// (0x00069922) control_bottom_pane_stacon_g1

0xf10d,	// (0x000699f1) control_bottom_pane_stacon_t1_ParamLimits

0xf10d,	// (0x000699f1) control_bottom_pane_stacon_t1

0xa15f,	// (0x00064a43) grid_app_pane_ParamLimits

0xa15f,	// (0x00064a43) grid_app_pane

0xa197,	// (0x00064a7b) scroll_pane_cp15_ParamLimits

0xa197,	// (0x00064a7b) scroll_pane_cp15

0xa1ac,	// (0x00064a90) cell_app_pane_ParamLimits

0xa1ac,	// (0x00064a90) cell_app_pane

0xa1f1,	// (0x00064ad5) cell_app_pane_g1_ParamLimits

0xa1f1,	// (0x00064ad5) cell_app_pane_g1

0x8780,	// (0x00063064) cell_app_pane_g2_ParamLimits

0x8780,	// (0x00063064) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00069fbd) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00069fbd) cell_app_pane_g

0xa215,	// (0x00064af9) cell_app_pane_t1_ParamLimits

0xa215,	// (0x00064af9) cell_app_pane_t1

0x878c,	// (0x00063070) grid_highlight_pane_ParamLimits

0x878c,	// (0x00063070) grid_highlight_pane

0x850e,	// (0x00062df2) cell_highlight_pane_g1

0x8516,	// (0x00062dfa) cell_highlight_pane_g2

0x851e,	// (0x00062e02) cell_highlight_pane_g3

0x8526,	// (0x00062e0a) cell_highlight_pane_g4

0x852e,	// (0x00062e12) cell_highlight_pane_g5

0x8536,	// (0x00062e1a) cell_highlight_pane_g6

0x853e,	// (0x00062e22) cell_highlight_pane_g7

0x8546,	// (0x00062e2a) cell_highlight_pane_g8

0x854e,	// (0x00062e32) cell_highlight_pane_g9

0x7edc,	// (0x000627c0) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00069f6b) cell_highlight_pane_g

0x879d,	// (0x00063081) bg_scroll_pane

0xa235,	// (0x00064b19) scroll_handle_pane

0x87e4,	// (0x000630c8) scroll_bg_pane_g1

0x87f9,	// (0x000630dd) scroll_bg_pane_g2

0x8811,	// (0x000630f5) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00069fc2) scroll_bg_pane_g

0xa249,	// (0x00064b2d) scroll_handle_focus_pane_ParamLimits

0xa249,	// (0x00064b2d) scroll_handle_focus_pane

0x87e4,	// (0x000630c8) scroll_handle_pane_g1

0x8826,	// (0x0006310a) scroll_handle_pane_g2

0x8811,	// (0x000630f5) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00069fc9) scroll_handle_pane_g

0x855f,	// (0x00062e43) bg_popup_sub_pane_cp21_ParamLimits

0x855f,	// (0x00062e43) bg_popup_sub_pane_cp21

0xa256,	// (0x00064b3a) popup_fep_japan_predictive_window_t1_ParamLimits

0xa256,	// (0x00064b3a) popup_fep_japan_predictive_window_t1

0xa26d,	// (0x00064b51) popup_fep_japan_predictive_window_t2_ParamLimits

0xa26d,	// (0x00064b51) popup_fep_japan_predictive_window_t2

0xa2a0,	// (0x00064b84) popup_fep_japan_predictive_window_t3_ParamLimits

0xa2a0,	// (0x00064b84) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00069fd0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00069fd0) popup_fep_japan_predictive_window_t

0x7ee6,	// (0x000627ca) bg_popup_sub_pane_cp23

0xa2d7,	// (0x00064bbb) listscroll_japin_cand_pane

0x883a,	// (0x0006311e) popup_fep_japan_candidate_window_t1

0x8848,	// (0x0006312c) candidate_pane_ParamLimits

0x8848,	// (0x0006312c) candidate_pane

0xa2df,	// (0x00064bc3) scroll_pane_cp30

0x885a,	// (0x0006313e) list_single_popup_jap_candidate_pane_ParamLimits

0x885a,	// (0x0006313e) list_single_popup_jap_candidate_pane

0x7ee6,	// (0x000627ca) list_highlight_pane_cp30

0x886f,	// (0x00063153) list_single_popup_jap_candidate_pane_t1

0x887e,	// (0x00063162) level_1_signal

0x888b,	// (0x0006316f) level_2_signal

0x8898,	// (0x0006317c) level_3_signal

0xbb1d,	// (0x00066401) level_4_signal

0xbb2a,	// (0x0006640e) level_5_signal

0xbb37,	// (0x0006641b) level_6_signal

0xbb44,	// (0x00066428) level_7_signal

0x887e,	// (0x00063162) level_1_battery

0x888b,	// (0x0006316f) level_2_battery

0x8898,	// (0x0006317c) level_3_battery

0xbb1d,	// (0x00066401) level_4_battery

0xbb2a,	// (0x0006640e) level_5_battery

0xbb37,	// (0x0006641b) level_6_battery

0xbb44,	// (0x00066428) level_7_battery

0xbb69,	// (0x0006644d) list_menu_pane_ParamLimits

0xbb69,	// (0x0006644d) list_menu_pane

0xbb7f,	// (0x00066463) scroll_pane_cp25_ParamLimits

0xbb7f,	// (0x00066463) scroll_pane_cp25

0xa2e7,	// (0x00064bcb) list_double2_graphic_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double2_graphic_pane_cp2

0xa2e7,	// (0x00064bcb) list_double2_large_graphic_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double2_large_graphic_pane_cp2

0xa2e7,	// (0x00064bcb) list_double2_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double2_pane_cp2

0xa2e7,	// (0x00064bcb) list_double_graphic_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double_graphic_pane_cp2

0xa2e7,	// (0x00064bcb) list_double_large_graphic_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double_large_graphic_pane_cp2

0xa2e7,	// (0x00064bcb) list_double_number_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double_number_pane_cp2

0xa2e7,	// (0x00064bcb) list_double_pane_cp2_ParamLimits

0xa2e7,	// (0x00064bcb) list_double_pane_cp2

0xa2f6,	// (0x00064bda) list_single_2graphic_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_2graphic_pane_cp2

0xa2f6,	// (0x00064bda) list_single_graphic_heading_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_graphic_heading_pane_cp2

0xa2f6,	// (0x00064bda) list_single_graphic_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_graphic_pane_cp2

0xa2f6,	// (0x00064bda) list_single_heading_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_heading_pane_cp2

0xbba8,	// (0x0006648c) list_single_large_graphic_pane_cp2_ParamLimits

0xbba8,	// (0x0006648c) list_single_large_graphic_pane_cp2

0xa2f6,	// (0x00064bda) list_single_number_heading_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_number_heading_pane_cp2

0xa2f6,	// (0x00064bda) list_single_number_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_number_pane_cp2

0xa2f6,	// (0x00064bda) list_single_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_pane_cp2

0xbbc2,	// (0x000664a6) bg_popup_sub_pane_cp22

0xf1dd,	// (0x00069ac1) popup_side_volume_key_window_g1

0xf1e9,	// (0x00069acd) popup_side_volume_key_window_t1

0xa3be,	// (0x00064ca2) volume_small_pane_cp1

0x805e,	// (0x00062942) bg_popup_sub_pane_cp24_ParamLimits

0x805e,	// (0x00062942) bg_popup_sub_pane_cp24

0xbbd8,	// (0x000664bc) fep_china_uni_candidate_pane_ParamLimits

0xbbd8,	// (0x000664bc) fep_china_uni_candidate_pane

0xbbec,	// (0x000664d0) fep_china_uni_entry_pane

0xbbfc,	// (0x000664e0) popup_fep_china_uni_window_g1

0xa3c6,	// (0x00064caa) fep_china_uni_entry_pane_g1

0xa3ce,	// (0x00064cb2) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0006a001) fep_china_uni_entry_pane_g

0xdd19,	// (0x000685fd) fep_entry_item_pane

0xdd23,	// (0x00068607) fep_candidate_item_pane

0xa3d6,	// (0x00064cba) fep_china_uni_candidate_pane_g1

0xdd2b,	// (0x0006860f) fep_china_uni_candidate_pane_g2

0xdd33,	// (0x00068617) fep_china_uni_candidate_pane_g3

0xa3de,	// (0x00064cc2) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0006a006) fep_china_uni_candidate_pane_g

0x7edc,	// (0x000627c0) fep_entry_item_pane_g1

0xdd3b,	// (0x0006861f) fep_entry_item_pane_t1_ParamLimits

0xdd3b,	// (0x0006861f) fep_entry_item_pane_t1

0xdd51,	// (0x00068635) fep_candidate_item_pane_t1_ParamLimits

0xdd51,	// (0x00068635) fep_candidate_item_pane_t1

0xdd66,	// (0x0006864a) fep_candidate_item_pane_t2_ParamLimits

0xdd66,	// (0x0006864a) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0006a00f) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0006a00f) fep_candidate_item_pane_t

0x7f34,	// (0x00062818) list_highlight_pane_cp31_ParamLimits

0x7f34,	// (0x00062818) list_highlight_pane_cp31

0xdd78,	// (0x0006865c) level_1_signal_lsc

0xdd81,	// (0x00068665) level_2_signal_lsc

0xdd8a,	// (0x0006866e) level_3_signal_lsc

0xdd93,	// (0x00068677) level_4_signal_lsc

0xdd9c,	// (0x00068680) level_5_signal_lsc

0xdda5,	// (0x00068689) level_6_signal_lsc

0xddae,	// (0x00068692) level_7_signal_lsc

0xddae,	// (0x00068692) level_1_battery_lsc

0xddb7,	// (0x0006869b) level_2_battery_lsc

0xddc0,	// (0x000686a4) level_3_battery_lsc

0xddc9,	// (0x000686ad) level_4_battery_lsc

0xddd2,	// (0x000686b6) level_5_battery_lsc

0xdddb,	// (0x000686bf) level_6_battery_lsc

0xdd78,	// (0x0006865c) level_7_battery_lsc

0xdde4,	// (0x000686c8) scroll_handle_focus_pane_g1

0xdded,	// (0x000686d1) scroll_handle_focus_pane_g2

0xddf6,	// (0x000686da) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0006a014) scroll_handle_focus_pane_g

0xa3e6,	// (0x00064cca) list_single_2graphic_pane_g1_ParamLimits

0xa3e6,	// (0x00064cca) list_single_2graphic_pane_g1

0x9b62,	// (0x00064446) list_single_2graphic_pane_g2_ParamLimits

0x9b62,	// (0x00064446) list_single_2graphic_pane_g2

0xdc2b,	// (0x0006850f) list_single_2graphic_pane_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_single_2graphic_pane_g3

0xa3f2,	// (0x00064cd6) list_single_2graphic_pane_g4_ParamLimits

0xa3f2,	// (0x00064cd6) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0006a01b) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0006a01b) list_single_2graphic_pane_g

0xa3fe,	// (0x00064ce2) list_single_2graphic_pane_t1_ParamLimits

0xa3fe,	// (0x00064ce2) list_single_2graphic_pane_t1

0xa42c,	// (0x00064d10) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa42c,	// (0x00064d10) list_double2_graphic_large_graphic_pane_g1

0x9d2c,	// (0x00064610) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9d2c,	// (0x00064610) list_double2_graphic_large_graphic_pane_g2

0x9c79,	// (0x0006455d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c79,	// (0x0006455d) list_double2_graphic_large_graphic_pane_g3

0xa43e,	// (0x00064d22) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa43e,	// (0x00064d22) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0006a024) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0006a024) list_double2_graphic_large_graphic_pane_g

0xa44a,	// (0x00064d2e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa44a,	// (0x00064d2e) list_double2_graphic_large_graphic_pane_t1

0xa460,	// (0x00064d44) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa460,	// (0x00064d44) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0006a02d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0006a02d) list_double2_graphic_large_graphic_pane_t

0xa4e5,	// (0x00064dc9) popup_fast_swap_window_ParamLimits

0xa4e5,	// (0x00064dc9) popup_fast_swap_window

0xa501,	// (0x00064de5) popup_side_volume_key_window

0xdeac,	// (0x00068790) stacon_top_pane

0xdeb6,	// (0x0006879a) status_pane_ParamLimits

0xdeb6,	// (0x0006879a) status_pane

0xa51b,	// (0x00064dff) status_small_pane

0x7ee6,	// (0x000627ca) control_pane

0x7ee6,	// (0x000627ca) stacon_bottom_pane

0x82d7,	// (0x00062bbb) scroll_pane_cp121

0x82ce,	// (0x00062bb2) set_content_pane

0xa472,	// (0x00064d56) bg_active_tab_pane_g1_cp1

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp1

0xa484,	// (0x00064d68) bg_active_tab_pane_g3_cp1

0xa472,	// (0x00064d56) bg_passive_tab_pane_g1_cp1

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp1

0xa484,	// (0x00064d68) bg_passive_tab_pane_g3_cp1

0xa48d,	// (0x00064d71) bg_active_tab_pane_g1_cp2

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp2

0xa496,	// (0x00064d7a) bg_active_tab_pane_g3_cp2

0xa48d,	// (0x00064d71) bg_passive_tab_pane_g1_cp2

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp2

0xa496,	// (0x00064d7a) bg_passive_tab_pane_g3_cp2

0xa49f,	// (0x00064d83) bg_active_tab_pane_g1_cp3

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp3

0xa4a8,	// (0x00064d8c) bg_active_tab_pane_g3_cp3

0xa49f,	// (0x00064d83) bg_passive_tab_pane_g1_cp3

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp3

0xa4a8,	// (0x00064d8c) bg_passive_tab_pane_g3_cp3

0xa4b1,	// (0x00064d95) bg_active_tab_pane_g1_cp4

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp4

0xa4bc,	// (0x00064da0) bg_active_tab_pane_g3_cp4

0xa4b1,	// (0x00064d95) bg_passive_tab_pane_g1_cp4

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp4

0xa4bc,	// (0x00064da0) bg_passive_tab_pane_g3_cp4

0xa4c7,	// (0x00064dab) bg_active_tab_pane_g1_cp5

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp5

0xa4d0,	// (0x00064db4) bg_active_tab_pane_g3_cp5

0xa4c7,	// (0x00064dab) bg_passive_tab_pane_g1_cp5

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp5

0xa4d0,	// (0x00064db4) bg_passive_tab_pane_g3_cp5

0x435f,	// (0x0005ec43) list_set_graphic_pane_ParamLimits

0x435f,	// (0x0005ec43) list_set_graphic_pane

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp4

0xde3d,	// (0x00068721) list_set_graphic_pane_g1_ParamLimits

0xde3d,	// (0x00068721) list_set_graphic_pane_g1

0xde49,	// (0x0006872d) list_set_graphic_pane_g2_ParamLimits

0xde49,	// (0x0006872d) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0006a032) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0006a032) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0006a3b7) volume_small_pane_cp_g

0xa4d9,	// (0x00064dbd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4d9,	// (0x00064dbd) list_double2_large_graphic_pane_g1_cp2

0xde6b,	// (0x0006874f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xde6b,	// (0x0006874f) list_double2_large_graphic_pane_g2_cp2

0xde7c,	// (0x00068760) list_double2_large_graphic_pane_g3_cp2

0xde84,	// (0x00068768) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xde84,	// (0x00068768) list_double2_large_graphic_pane_t1_cp2

0xde9a,	// (0x0006877e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xde9a,	// (0x0006877e) list_double2_large_graphic_pane_t2_cp2

0xc590,	// (0x00066e74) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc590,	// (0x00066e74) list_double_large_graphic_pane_g1_cp2

0x3769,	// (0x0005e04d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3769,	// (0x0005e04d) list_double_large_graphic_pane_g2_cp2

0xf43a,	// (0x00069d1e) list_double_large_graphic_pane_g3_cp2

0x377a,	// (0x0005e05e) list_double_large_graphic_pane_g4_cp

0x3782,	// (0x0005e066) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3782,	// (0x0005e066) list_double_large_graphic_pane_t1_cp2

0x3799,	// (0x0005e07d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3799,	// (0x0005e07d) list_double_large_graphic_pane_t2_cp2

0xf338,	// (0x00069c1c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf338,	// (0x00069c1c) list_double2_graphic_pane_g1_cp2

0xf346,	// (0x00069c2a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf346,	// (0x00069c2a) list_double2_graphic_pane_g2_cp2

0xf357,	// (0x00069c3b) list_double2_graphic_pane_g3_cp2

0xf361,	// (0x00069c45) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf361,	// (0x00069c45) list_double2_graphic_pane_t1_cp2

0xf377,	// (0x00069c5b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf377,	// (0x00069c5b) list_double2_graphic_pane_t2_cp2

0xbc18,	// (0x000664fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbc18,	// (0x000664fc) list_single_number_heading_pane_g1_cp2

0xf389,	// (0x00069c6d) list_single_number_heading_pane_g2_cp2

0xf391,	// (0x00069c75) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf391,	// (0x00069c75) list_single_number_heading_pane_t1_cp2

0xf3a7,	// (0x00069c8b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf3a7,	// (0x00069c8b) list_single_number_heading_pane_t2_cp2

0xf3b9,	// (0x00069c9d) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf3b9,	// (0x00069c9d) list_single_number_heading_pane_t3_cp2

0xbc18,	// (0x000664fc) list_single_heading_pane_g1_cp2_ParamLimits

0xbc18,	// (0x000664fc) list_single_heading_pane_g1_cp2

0xf389,	// (0x00069c6d) list_single_heading_pane_g2_cp2

0xf391,	// (0x00069c75) list_single_heading_pane_t1_cp2_ParamLimits

0xf391,	// (0x00069c75) list_single_heading_pane_t1_cp2

0x3562,	// (0x0005de46) list_single_heading_pane_t2_cp2_ParamLimits

0x3562,	// (0x0005de46) list_single_heading_pane_t2_cp2

0x34aa,	// (0x0005dd8e) list_double_graphic_pane_g1_cp2_ParamLimits

0x34aa,	// (0x0005dd8e) list_double_graphic_pane_g1_cp2

0x34b6,	// (0x0005dd9a) list_double_graphic_pane_g2_cp2_ParamLimits

0x34b6,	// (0x0005dd9a) list_double_graphic_pane_g2_cp2

0x34c5,	// (0x0005dda9) list_double_graphic_pane_g3_cp2

0x34cd,	// (0x0005ddb1) list_double_graphic_pane_t1_cp2_ParamLimits

0x34cd,	// (0x0005ddb1) list_double_graphic_pane_t1_cp2

0x34e3,	// (0x0005ddc7) list_double_graphic_pane_t2_cp2_ParamLimits

0x34e3,	// (0x0005ddc7) list_double_graphic_pane_t2_cp2

0xf42e,	// (0x00069d12) list_double_number_pane_g1_cp2_ParamLimits

0xf42e,	// (0x00069d12) list_double_number_pane_g1_cp2

0xf43a,	// (0x00069d1e) list_double_number_pane_g2_cp2

0x346e,	// (0x0005dd52) list_double_number_pane_t1_cp2_ParamLimits

0x346e,	// (0x0005dd52) list_double_number_pane_t1_cp2

0x3482,	// (0x0005dd66) list_double_number_pane_t2_cp2_ParamLimits

0x3482,	// (0x0005dd66) list_double_number_pane_t2_cp2

0x3498,	// (0x0005dd7c) list_double_number_pane_t3_cp2_ParamLimits

0x3498,	// (0x0005dd7c) list_double_number_pane_t3_cp2

0x3357,	// (0x0005dc3b) list_single_graphic_pane_g1_cp2_ParamLimits

0x3357,	// (0x0005dc3b) list_single_graphic_pane_g1_cp2

0xf48a,	// (0x00069d6e) list_single_graphic_pane_g2_cp2_ParamLimits

0xf48a,	// (0x00069d6e) list_single_graphic_pane_g2_cp2

0x1d64,	// (0x0005c648) list_single_graphic_pane_g3_cp2

0x332d,	// (0x0005dc11) list_single_graphic_pane_t1_cp2_ParamLimits

0x332d,	// (0x0005dc11) list_single_graphic_pane_t1_cp2

0xf48a,	// (0x00069d6e) list_single_number_pane_g1_cp2_ParamLimits

0xf48a,	// (0x00069d6e) list_single_number_pane_g1_cp2

0x1d64,	// (0x0005c648) list_single_number_pane_g2_cp2

0x332d,	// (0x0005dc11) list_single_number_pane_t1_cp2_ParamLimits

0x332d,	// (0x0005dc11) list_single_number_pane_t1_cp2

0x3343,	// (0x0005dc27) list_single_number_pane_t2_cp2_ParamLimits

0x3343,	// (0x0005dc27) list_single_number_pane_t2_cp2

0xde6b,	// (0x0006874f) list_double2_pane_g1_cp2_ParamLimits

0xde6b,	// (0x0006874f) list_double2_pane_g1_cp2

0xde7c,	// (0x00068760) list_double2_pane_g2_cp2

0xf406,	// (0x00069cea) list_double2_pane_t1_cp2_ParamLimits

0xf406,	// (0x00069cea) list_double2_pane_t1_cp2

0xf41c,	// (0x00069d00) list_double2_pane_t2_cp2_ParamLimits

0xf41c,	// (0x00069d00) list_double2_pane_t2_cp2

0xf42e,	// (0x00069d12) list_double_pane_g1_cp2_ParamLimits

0xf42e,	// (0x00069d12) list_double_pane_g1_cp2

0xf43a,	// (0x00069d1e) list_double_pane_g2_cp2

0xf442,	// (0x00069d26) list_double_pane_t1_cp2_ParamLimits

0xf442,	// (0x00069d26) list_double_pane_t1_cp2

0xf458,	// (0x00069d3c) list_double_pane_t2_cp2_ParamLimits

0xf458,	// (0x00069d3c) list_double_pane_t2_cp2

0xa526,	// (0x00064e0a) list_single_pane_cp2_g3

0xf48a,	// (0x00069d6e) list_single_pane_g1_cp2_ParamLimits

0xf48a,	// (0x00069d6e) list_single_pane_g1_cp2

0x1d64,	// (0x0005c648) list_single_pane_g2_cp2

0x1d6c,	// (0x0005c650) list_single_pane_t1_cp2_ParamLimits

0x1d6c,	// (0x0005c650) list_single_pane_t1_cp2

0xa52e,	// (0x00064e12) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa52e,	// (0x00064e12) list_single_large_graphic_pane_g1_cp2

0x1d90,	// (0x0005c674) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1d90,	// (0x0005c674) list_single_large_graphic_pane_g2_cp2

0x1d9c,	// (0x0005c680) list_single_large_graphic_pane_g3_cp2

0xa53a,	// (0x00064e1e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa53a,	// (0x00064e1e) list_single_large_graphic_pane_g4_cp1

0x1dbe,	// (0x0005c6a2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1dbe,	// (0x0005c6a2) list_single_large_graphic_pane_t1_cp2

0x32f9,	// (0x0005dbdd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x32f9,	// (0x0005dbdd) list_single_graphic_heading_pane_g1_cp2

0x32c6,	// (0x0005dbaa) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x32c6,	// (0x0005dbaa) list_single_graphic_heading_pane_g4_cp2

0x1d64,	// (0x0005c648) list_single_graphic_heading_pane_g5_cp2

0x3305,	// (0x0005dbe9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3305,	// (0x0005dbe9) list_single_graphic_heading_pane_t1_cp2

0x331b,	// (0x0005dbff) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x331b,	// (0x0005dbff) list_single_graphic_heading_pane_t2_cp2

0x32ba,	// (0x0005db9e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x32ba,	// (0x0005db9e) list_single_2graphic_pane_g1_cp2

0x32c6,	// (0x0005dbaa) list_single_2graphic_pane_g2_cp2_ParamLimits

0x32c6,	// (0x0005dbaa) list_single_2graphic_pane_g2_cp2

0x1d64,	// (0x0005c648) list_single_2graphic_pane_g3_cp2

0x32d7,	// (0x0005dbbb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32d7,	// (0x0005dbbb) list_single_2graphic_pane_g4_cp2

0x32e3,	// (0x0005dbc7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x32e3,	// (0x0005dbc7) list_single_2graphic_pane_t1_cp2

0x7edc,	// (0x000627c0) list_highlight_pane_g10_cp1

0x2ea2,	// (0x0005d786) list_highlight_pane_g1_cp1

0x2eaa,	// (0x0005d78e) list_highlight_pane_g2_cp1

0x2eb2,	// (0x0005d796) list_highlight_pane_g3_cp1

0x2eba,	// (0x0005d79e) list_highlight_pane_g4_cp1

0x2ec2,	// (0x0005d7a6) list_highlight_pane_g5_cp1

0x2eca,	// (0x0005d7ae) list_highlight_pane_g6_cp1

0x2ed2,	// (0x0005d7b6) list_highlight_pane_g7_cp1

0x2eda,	// (0x0005d7be) list_highlight_pane_g8_cp1

0x2ee2,	// (0x0005d7c6) list_highlight_pane_g9_cp1

0xc325,	// (0x00066c09) form_field_slider_pane_t3

0xc333,	// (0x00066c17) form_field_slider_pane_t4

0x2de6,	// (0x0005d6ca) slider_form_pane_ParamLimits

0x2de6,	// (0x0005d6ca) slider_form_pane

0x7ee6,	// (0x000627ca) control_abbreviations

0x7ee6,	// (0x000627ca) control_conventions

0x7ee6,	// (0x000627ca) control_definitions

0x7ee6,	// (0x000627ca) format_table_attribute

0xc567,	// (0x00066e4b) bg_popup_preview_window_pane_g9

0x7ee6,	// (0x000627ca) format_table_data2

0x7ee6,	// (0x000627ca) format_table_data3

0x7ee6,	// (0x000627ca) format_table_data_example

0x0008,

0x7ee6,	// (0x000627ca) intro_purpose

0xf8de,	// (0x0006a1c2) bg_popup_preview_window_pane_g

0x7ee6,	// (0x000627ca) texts_category

0x7ee6,	// (0x000627ca) texts_graphics

0x1dd4,	// (0x0005c6b8) text_digital

0x1de3,	// (0x0005c6c7) text_primary

0x1df2,	// (0x0005c6d6) text_primary_small

0x1e01,	// (0x0005c6e5) text_secondary

0x1e10,	// (0x0005c6f4) text_title

0xc8f1,	// (0x000671d5) bg_passive_tab_pane_g1_cp3_srt

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp3_srt

0xc8fa,	// (0x000671de) bg_passive_tab_pane_g3_cp3_srt

0x805e,	// (0x00062942) bg_active_tab_pane_cp3_srt_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp3_srt

0xc903,	// (0x000671e7) tabs_4_active_pane_srt_g1

0xc90b,	// (0x000671ef) tabs_4_active_pane_srt_t1_ParamLimits

0xc90b,	// (0x000671ef) tabs_4_active_pane_srt_t1

0xc8f1,	// (0x000671d5) bg_active_tab_pane_g1_cp3_copy1

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp3_copy1

0xc8fa,	// (0x000671de) bg_active_tab_pane_g3_cp3_copy1

0x7f34,	// (0x00062818) tabs_2_long_active_pane_srt_ParamLimits

0x7f34,	// (0x00062818) tabs_2_long_active_pane_srt

0x7f34,	// (0x00062818) tabs_2_long_passive_pane_srt_ParamLimits

0x7f34,	// (0x00062818) tabs_2_long_passive_pane_srt

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp4_srt

0xc67f,	// (0x00066f63) bg_passive_tab_pane_g1_cp4_srt

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp4_srt

0xc688,	// (0x00066f6c) bg_passive_tab_pane_g3_cp4_srt

0x7f34,	// (0x00062818) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f34,	// (0x00062818) bg_active_tab_pane_cp4_srt

0xc691,	// (0x00066f75) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc691,	// (0x00066f75) tabs_2_long_active_pane_srt_t1

0xc67f,	// (0x00066f63) bg_active_tab_pane_g1_cp4_srt

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp4_srt

0xc688,	// (0x00066f6c) bg_active_tab_pane_g3_cp4_srt

0x805e,	// (0x00062942) tabs_3_long_active_pane_srt_ParamLimits

0x805e,	// (0x00062942) tabs_3_long_active_pane_srt

0x805e,	// (0x00062942) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x805e,	// (0x00062942) tabs_3_long_passive_pane_cp_srt

0x805e,	// (0x00062942) tabs_3_long_passive_pane_srt_ParamLimits

0x805e,	// (0x00062942) tabs_3_long_passive_pane_srt

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp5_srt

0xa4c7,	// (0x00064dab) bg_passive_tab_pane_g1_cp5_srt

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp5_srt

0xa4d0,	// (0x00064db4) bg_passive_tab_pane_g3_cp5_srt

0x7f34,	// (0x00062818) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f34,	// (0x00062818) bg_active_tab_pane_cp5_srt

0xc669,	// (0x00066f4d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc669,	// (0x00066f4d) tabs_3_long_active_pane_srt_t1

0xa4c7,	// (0x00064dab) bg_active_tab_pane_g1_cp5_srt

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp5_srt

0xa4d0,	// (0x00064db4) bg_active_tab_pane_g3_cp5_srt

0x39ad,	// (0x0005e291) navi_text_pane_srt_t1

0x39a5,	// (0x0005e289) navi_icon_pane_srt_g1

0x1fe1,	// (0x0005c8c5) midp_editing_number_pane_srt

0x1e1f,	// (0x0005c703) midp_ticker_pane_srt

0x1fe9,	// (0x0005c8cd) midp_ticker_pane_srt_g1

0x1ff1,	// (0x0005c8d5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0006a051) midp_ticker_pane_srt_g

0x1ff9,	// (0x0005c8dd) midp_ticker_pane_srt_t1

0x3996,	// (0x0005e27a) midp_editing_number_pane_t1_copy1

0xa554,	// (0x00064e38) listscroll_midp_pane

0xa554,	// (0x00064e38) midp_form_pane

0xa5bf,	// (0x00064ea3) midp_info_popup_window_ParamLimits

0xa5bf,	// (0x00064ea3) midp_info_popup_window

0x855f,	// (0x00062e43) bg_popup_sub_pane_cp50_ParamLimits

0x855f,	// (0x00062e43) bg_popup_sub_pane_cp50

0x2aea,	// (0x0005d3ce) listscroll_midp_info_pane_ParamLimits

0x2aea,	// (0x0005d3ce) listscroll_midp_info_pane

0x2aca,	// (0x0005d3ae) listscroll_form_midp_pane_ParamLimits

0x2aca,	// (0x0005d3ae) listscroll_form_midp_pane

0x2ad6,	// (0x0005d3ba) scroll_bar_cp050

0x2aca,	// (0x0005d3ae) list_midp_pane

0xcaad,	// (0x00067391) signal_pane_g2_cp

0x29e4,	// (0x0005d2c8) listscroll_midp_info_pane_t1_ParamLimits

0x29e4,	// (0x0005d2c8) listscroll_midp_info_pane_t1

0xc15f,	// (0x00066a43) listscroll_midp_info_pane_t2_ParamLimits

0xc15f,	// (0x00066a43) listscroll_midp_info_pane_t2

0xc19d,	// (0x00066a81) listscroll_midp_info_pane_t3_ParamLimits

0xc19d,	// (0x00066a81) listscroll_midp_info_pane_t3

0xc1d7,	// (0x00066abb) listscroll_midp_info_pane_t4_ParamLimits

0xc1d7,	// (0x00066abb) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x0006a0fd) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x0006a0fd) listscroll_midp_info_pane_t

0x85d5,	// (0x00062eb9) scroll_pane_cp21

0x2984,	// (0x0005d268) form_midp_field_choice_group_pane

0xc122,	// (0x00066a06) form_midp_field_text_pane

0x29ca,	// (0x0005d2ae) form_midp_field_time_pane

0x29d2,	// (0x0005d2b6) form_midp_gauge_slider_pane

0x29db,	// (0x0005d2bf) form_midp_gauge_wait_pane

0x7ee6,	// (0x000627ca) form_midp_image_pane

0xb0e4,	// (0x000659c8) list_single_midp_pane_ParamLimits

0xb0e4,	// (0x000659c8) list_single_midp_pane

0xc100,	// (0x000669e4) form_midp_field_text_pane_t1

0x2703,	// (0x0005cfe7) input_focus_pane_cp050

0x2973,	// (0x0005d257) list_midp_form_text_pane

0x2908,	// (0x0005d1ec) form_midp_field_choice_group_pane_t1

0x2916,	// (0x0005d1fa) input_focus_pane_cp051

0x292a,	// (0x0005d20e) list_midp_choice_pane

0x7ee6,	// (0x000627ca) status_idle_pane

0x28ec,	// (0x0005d1d0) form_midp_field_time_pane_t1

0x7edc,	// (0x000627c0) wait_anim_pane_g2_copy1

0x28fa,	// (0x0005d1de) form_midp_field_time_pane_t2

0x0001,

0x1f49,	// (0x0005c82d) aid_navinavi_width_2_pane

0xf814,	// (0x0006a0f8) form_midp_field_time_pane_t

0x7ee6,	// (0x000627ca) input_focus_pane_cp052

0x7ee6,	// (0x000627ca) bg_input_focus_pane_cp040

0x28ac,	// (0x0005d190) form_midp_gauge_slider_pane_t1

0x28ba,	// (0x0005d19e) form_midp_gauge_slider_pane_t2

0xc0e4,	// (0x000669c8) form_midp_gauge_slider_pane_t3

0xc0f2,	// (0x000669d6) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x0006a0ef) form_midp_gauge_slider_pane_t

0x28e4,	// (0x0005d1c8) form_midp_slider_pane

0x7f34,	// (0x00062818) bg_input_focus_pane_cp041_ParamLimits

0x7f34,	// (0x00062818) bg_input_focus_pane_cp041

0x2879,	// (0x0005d15d) form_midp_gauge_wait_pane_t1_ParamLimits

0x2879,	// (0x0005d15d) form_midp_gauge_wait_pane_t1

0x288b,	// (0x0005d16f) form_midp_gauge_wait_pane_t2_ParamLimits

0x288b,	// (0x0005d16f) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x0006a0ea) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x0006a0ea) form_midp_gauge_wait_pane_t

0x289d,	// (0x0005d181) form_midp_wait_pane_ParamLimits

0x289d,	// (0x0005d181) form_midp_wait_pane

0xc0ae,	// (0x00066992) form_midp_image_pane_g1

0xc0b7,	// (0x0006699b) form_midp_image_pane_t1

0xc0c6,	// (0x000669aa) form_midp_image_pane_t2

0xc0d5,	// (0x000669b9) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x0006a0e3) form_midp_image_pane_t

0x283a,	// (0x0005d11e) list_single_midp_pane_g1

0xdfd0,	// (0x000688b4) list_single_midp_pane_t1

0xc099,	// (0x0006697d) list_midp_form_item_pane_ParamLimits

0xc099,	// (0x0006697d) list_midp_form_item_pane

0x1ef1,	// (0x0005c7d5) list_midp_form_item_pane_t1

0x1f00,	// (0x0005c7e4) midp_ticker_pane_g1

0x1f0c,	// (0x0005c7f0) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0006a037) midp_ticker_pane_g

0x1f18,	// (0x0005c7fc) midp_ticker_pane_t1

0x3de6,	// (0x0005e6ca) midp_editing_number_pane_t1

0x3bc1,	// (0x0005e4a5) midp_editing_number_pane

0x3bd0,	// (0x0005e4b4) midp_ticker_pane

0x3986,	// (0x0005e26a) ai_message_heading_pane

0x7ee6,	// (0x000627ca) bg_popup_window_pane_cp14

0x398e,	// (0x0005e272) listscroll_ai_message_pane

0x3910,	// (0x0005e1f4) ai_message_heading_pane_g1_ParamLimits

0x3910,	// (0x0005e1f4) ai_message_heading_pane_g1

0xc631,	// (0x00066f15) ai_message_heading_pane_g2_ParamLimits

0xc631,	// (0x00066f15) ai_message_heading_pane_g2

0x3928,	// (0x0005e20c) ai_message_heading_pane_g3_ParamLimits

0x3928,	// (0x0005e20c) ai_message_heading_pane_g3

0x3934,	// (0x0005e218) ai_message_heading_pane_g4_ParamLimits

0x3934,	// (0x0005e218) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x0006a224) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x0006a224) ai_message_heading_pane_g

0xc63d,	// (0x00066f21) ai_message_heading_pane_t1_ParamLimits

0xc63d,	// (0x00066f21) ai_message_heading_pane_t1

0xc657,	// (0x00066f3b) ai_message_heading_pane_t2_ParamLimits

0xc657,	// (0x00066f3b) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x0006a22d) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x0006a22d) ai_message_heading_pane_t

0x396c,	// (0x0005e250) bg_popup_heading_pane_cp1_ParamLimits

0x396c,	// (0x0005e250) bg_popup_heading_pane_cp1

0x38fe,	// (0x0005e1e2) list_ai_message_pane_ParamLimits

0x38fe,	// (0x0005e1e2) list_ai_message_pane

0x85d5,	// (0x00062eb9) scroll_pane_cp10

0x389a,	// (0x0005e17e) list_ai_message_pane_g1

0x38a2,	// (0x0005e186) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x0006a201) list_ai_message_pane_g

0x38aa,	// (0x0005e18e) list_ai_message_pane_t1_ParamLimits

0x38aa,	// (0x0005e18e) list_ai_message_pane_t1

0x38bf,	// (0x0005e1a3) list_ai_message_pane_t2_ParamLimits

0x38bf,	// (0x0005e1a3) list_ai_message_pane_t2

0x38d4,	// (0x0005e1b8) list_ai_message_pane_t3_ParamLimits

0x38d4,	// (0x0005e1b8) list_ai_message_pane_t3

0x38e9,	// (0x0005e1cd) list_ai_message_pane_t4_ParamLimits

0x38e9,	// (0x0005e1cd) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x0006a206) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x0006a206) list_ai_message_pane_t

0xc60d,	// (0x00066ef1) cell_ai_soft_ind_pane_ParamLimits

0xc60d,	// (0x00066ef1) cell_ai_soft_ind_pane

0x1f2a,	// (0x0005c80e) cell_ai_soft_ind_pane_g1_ParamLimits

0x1f2a,	// (0x0005c80e) cell_ai_soft_ind_pane_g1

0x7ee6,	// (0x000627ca) grid_highlight_cp1

0x1f37,	// (0x0005c81b) text_secondary_cp56_ParamLimits

0x1f37,	// (0x0005c81b) text_secondary_cp56

0x385a,	// (0x0005e13e) example_general_pane_ParamLimits

0x385a,	// (0x0005e13e) example_general_pane

0x3866,	// (0x0005e14a) example_parent_pane_g1_ParamLimits

0x3866,	// (0x0005e14a) example_parent_pane_g1

0x3872,	// (0x0005e156) example_parent_pane_t1_ParamLimits

0x3872,	// (0x0005e156) example_parent_pane_t1

0xacdd,	// (0x000655c1) popup_preview_text_window_ParamLimits

0xacdd,	// (0x000655c1) popup_preview_text_window

0xf482,	// (0x00069d66) list_single_pane_cp2_g4

0x8114,	// (0x000629f8) bg_popup_preview_window_pane_ParamLimits

0x8114,	// (0x000629f8) bg_popup_preview_window_pane

0xc56f,	// (0x00066e53) popup_preview_text_window_t1_ParamLimits

0xc56f,	// (0x00066e53) popup_preview_text_window_t1

0x35d2,	// (0x0005deb6) popup_preview_text_window_t2_ParamLimits

0x35d2,	// (0x0005deb6) popup_preview_text_window_t2

0x361b,	// (0x0005deff) popup_preview_text_window_t3_ParamLimits

0x361b,	// (0x0005deff) popup_preview_text_window_t3

0x3660,	// (0x0005df44) popup_preview_text_window_t4_ParamLimits

0x3660,	// (0x0005df44) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x0006a1d5) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x0006a1d5) popup_preview_text_window_t

0x36de,	// (0x0005dfc2) scroll_pane_cp11

0x2677,	// (0x0005cf5b) bg_popup_preview_window_pane_g1

0xc52f,	// (0x00066e13) bg_popup_preview_window_pane_g2

0xc537,	// (0x00066e1b) bg_popup_preview_window_pane_g3

0xc53f,	// (0x00066e23) bg_popup_preview_window_pane_g4

0xc547,	// (0x00066e2b) bg_popup_preview_window_pane_g5

0xc54f,	// (0x00066e33) bg_popup_preview_window_pane_g6

0xc557,	// (0x00066e3b) bg_popup_preview_window_pane_g7

0xc55f,	// (0x00066e43) bg_popup_preview_window_pane_g8

0xdbe6,	// (0x000684ca) aid_popup_width_pane

0xac59,	// (0x0006553d) popup_midp_note_alarm_window_ParamLimits

0xac59,	// (0x0006553d) popup_midp_note_alarm_window

0x82e8,	// (0x00062bcc) data_form_pane_ParamLimits

0x9f66,	// (0x0006484a) form_field_data_pane_g1

0x9f70,	// (0x00064854) form_field_data_pane_t1_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_ParamLimits

0xdcab,	// (0x0006858f) data_form_wide_pane_ParamLimits

0xdcbc,	// (0x000685a0) form_field_data_wide_pane_g1

0xdcc8,	// (0x000685ac) form_field_data_wide_pane_t1_ParamLimits

0x81e8,	// (0x00062acc) input_focus_pane_cp6_ParamLimits

0xa0cf,	// (0x000649b3) input_popup_find_pane_g1_ParamLimits

0xa0cf,	// (0x000649b3) input_popup_find_pane_g1

0xf0b8,	// (0x0006999c) aid_navi_side_left_pane

0xf0cd,	// (0x000699b1) aid_navi_side_right_pane

0x2f9d,	// (0x0005d881) bg_popup_window_pane_cp30_ParamLimits

0x2f9d,	// (0x0005d881) bg_popup_window_pane_cp30

0x3017,	// (0x0005d8fb) popup_midp_note_alarm_window_g1_ParamLimits

0x3017,	// (0x0005d8fb) popup_midp_note_alarm_window_g1

0x3047,	// (0x0005d92b) popup_midp_note_alarm_window_t1_ParamLimits

0x3047,	// (0x0005d92b) popup_midp_note_alarm_window_t1

0xc378,	// (0x00066c5c) popup_midp_note_alarm_window_t2_ParamLimits

0xc378,	// (0x00066c5c) popup_midp_note_alarm_window_t2

0xc426,	// (0x00066d0a) popup_midp_note_alarm_window_t3_ParamLimits

0xc426,	// (0x00066d0a) popup_midp_note_alarm_window_t3

0xc44e,	// (0x00066d32) popup_midp_note_alarm_window_t4_ParamLimits

0xc44e,	// (0x00066d32) popup_midp_note_alarm_window_t4

0x31de,	// (0x0005dac2) popup_midp_note_alarm_window_t5_ParamLimits

0x31de,	// (0x0005dac2) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0006a172) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0006a172) popup_midp_note_alarm_window_t

0x328a,	// (0x0005db6e) wait_bar_pane_cp1_ParamLimits

0x328a,	// (0x0005db6e) wait_bar_pane_cp1

0x7ee6,	// (0x000627ca) wait_anim_pane_copy1

0x7ee6,	// (0x000627ca) wait_border_pane_copy1

0x2c93,	// (0x0005d577) wait_border_pane_g1_copy1

0xdce2,	// (0x000685c6) form_field_popup_pane_g1

0x9f8a,	// (0x0006486e) form_field_popup_pane_t1_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_cp7_ParamLimits

0x84e4,	// (0x00062dc8) list_form_pane_ParamLimits

0xdcea,	// (0x000685ce) form_field_popup_wide_pane_g1

0xdcf2,	// (0x000685d6) form_field_popup_wide_pane_t1_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_cp8_ParamLimits

0x84f0,	// (0x00062dd4) list_form_wide_pane_ParamLimits

0xc964,	// (0x00067248) aid_size_cell_graphic_pane

0xa009,	// (0x000648ed) data_form_pane_t1_ParamLimits

0xb1d0,	// (0x00065ab4) data_form_wide_pane_t1_ParamLimits

0xbd08,	// (0x000665ec) bg_status_flat_pane

0x94f5,	// (0x00063dd9) title_pane_t1_ParamLimits

0x7efc,	// (0x000627e0) title_pane_t2_ParamLimits

0x7f22,	// (0x00062806) title_pane_t3_ParamLimits

0xf557,	// (0x00069e3b) title_pane_t_ParamLimits

0x887e,	// (0x00063162) level_1_signal_ParamLimits

0x888b,	// (0x0006316f) level_2_signal_ParamLimits

0x8898,	// (0x0006317c) level_3_signal_ParamLimits

0xbb1d,	// (0x00066401) level_4_signal_ParamLimits

0xbb2a,	// (0x0006640e) level_5_signal_ParamLimits

0xbb37,	// (0x0006641b) level_6_signal_ParamLimits

0xbb44,	// (0x00066428) level_7_signal_ParamLimits

0x887e,	// (0x00063162) level_1_battery_ParamLimits

0x888b,	// (0x0006316f) level_2_battery_ParamLimits

0x8898,	// (0x0006317c) level_3_battery_ParamLimits

0xbb1d,	// (0x00066401) level_4_battery_ParamLimits

0xbb2a,	// (0x0006640e) level_5_battery_ParamLimits

0xbb37,	// (0x0006641b) level_6_battery_ParamLimits

0xbb44,	// (0x00066428) level_7_battery_ParamLimits

0x2ea2,	// (0x0005d786) bg_status_flat_pane_g1

0x2eaa,	// (0x0005d78e) bg_status_flat_pane_g2

0x2eb2,	// (0x0005d796) bg_status_flat_pane_g3

0x2eba,	// (0x0005d79e) bg_status_flat_pane_g4

0x2ec2,	// (0x0005d7a6) bg_status_flat_pane_g5

0x2eca,	// (0x0005d7ae) bg_status_flat_pane_g6

0x2ed2,	// (0x0005d7b6) bg_status_flat_pane_g7

0x9589,	// (0x00063e6d) tabs_3_active_pane_t1_ParamLimits

0x9589,	// (0x00063e6d) tabs_3_passive_pane_t1_ParamLimits

0x95a3,	// (0x00063e87) tabs_4_active_pane_t1_ParamLimits

0x95a3,	// (0x00063e87) tabs_4_1_passive_pane_t1_ParamLimits

0xa10e,	// (0x000649f2) tabs_2_active_pane_t1_ParamLimits

0xa10e,	// (0x000649f2) tabs_2_passive_pane_t1_ParamLimits

0x7f34,	// (0x00062818) bg_active_tab_pane_cp4_ParamLimits

0xa120,	// (0x00064a04) tabs_2_long_active_pane_t1_ParamLimits

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp4_ParamLimits

0x0749,	// (0x0005b02d) list_single_midp_graphic_pane_t1_ParamLimits

0x7f34,	// (0x00062818) bg_active_tab_pane_cp5_ParamLimits

0xa133,	// (0x00064a17) tabs_3_long_active_pane_t1_ParamLimits

0x216a,	// (0x0005ca4e) bg_passive_tab_pane_cp5_ParamLimits

0x0749,	// (0x0005b02d) list_single_midp_graphic_pane_t1

0xbd08,	// (0x000665ec) bg_status_flat_pane_ParamLimits

0x230a,	// (0x0005cbee) indicator_pane_cp2_ParamLimits

0x230a,	// (0x0005cbee) indicator_pane_cp2

0xbe86,	// (0x0006676a) navi_pane_srt_ParamLimits

0xbe86,	// (0x0006676a) navi_pane_srt

0x2459,	// (0x0005cd3d) popup_clock_digital_analogue_window_cp1

0x7f78,	// (0x0006285c) indicator_pane_t1

0x1e1f,	// (0x0005c703) copy_highlight_pane

0x1e1f,	// (0x0005c703) cursor_graphics_pane

0x1e1f,	// (0x0005c703) graphic_within_text_pane

0x1e1f,	// (0x0005c703) link_highlight_pane

0x36a1,	// (0x0005df85) popup_preview_text_window_t5_ParamLimits

0x36a1,	// (0x0005df85) popup_preview_text_window_t5

0x1f51,	// (0x0005c835) cursor_digital_pane

0x1f51,	// (0x0005c835) cursor_primary_pane

0x1f62,	// (0x0005c846) cursor_primary_small_pane

0x1f6a,	// (0x0005c84e) cursor_secondary_pane

0x1f72,	// (0x0005c856) cursor_title_pane

0x1f51,	// (0x0005c835) link_highlight_digital_pane

0x1f59,	// (0x0005c83d) link_highlight_primary_pane

0x1f62,	// (0x0005c846) link_highlight_primary_small_pane

0x1f6a,	// (0x0005c84e) link_highlight_secondary_pane

0x1f72,	// (0x0005c856) link_highlight_title_pane

0x1f51,	// (0x0005c835) copy_highlight_digital_pane

0x1f51,	// (0x0005c835) copy_highlight_primary_pane

0x1f62,	// (0x0005c846) copy_highlight_primary_small_pane

0x1f6a,	// (0x0005c84e) copy_highlight_secondary_pane

0x1f72,	// (0x0005c856) copy_highlight_title_pane

0x1f6a,	// (0x0005c84e) graphic_text_digital_pane

0x2f40,	// (0x0005d824) graphic_text_primary_pane

0x2f49,	// (0x0005d82d) graphic_text_primary_small_pane

0x1f62,	// (0x0005c846) graphic_text_secondary_pane

0x1f51,	// (0x0005c835) graphic_text_title_pane

0xa610,	// (0x00064ef4) cursor_primary_pane_g1

0x2f32,	// (0x0005d816) cursor_text_primary_t1

0xc36e,	// (0x00066c52) cursor_primary_small_pane_g1

0x2f24,	// (0x0005d808) cursor_text_primary_small_t1

0xc364,	// (0x00066c48) cursor_primary_small_pane_g1_copy1

0x2f0c,	// (0x0005d7f0) cursor_text_primary_small_t1_copy1

0x2eea,	// (0x0005d7ce) cursor_text_title_t1

0xc35a,	// (0x00066c3e) cursor_title_pane_g1

0xa610,	// (0x00064ef4) cursor_digital_pane_g1

0x1f84,	// (0x0005c868) cursor_text_digital_t1

0x1f92,	// (0x0005c876) link_highlight_primary_pane_g1

0x2e93,	// (0x0005d777) link_highlight_primary_pane_t1

0x1f92,	// (0x0005c876) link_highlight_primary_small_pane_g1

0x1f9a,	// (0x0005c87e) link_highlight_primary_small_pane_t1

0x1f92,	// (0x0005c876) link_highlight_secondary_pane_g1

0x1fa9,	// (0x0005c88d) link_highlight_secondary_pane_t1

0x2df8,	// (0x0005d6dc) link_highlight_title_pane_g1

0x2e0f,	// (0x0005d6f3) link_highlight_title_pane_t1

0x2df8,	// (0x0005d6dc) link_highlight_digital_pane_g1

0x2e00,	// (0x0005d6e4) link_highlight_digital_pane_t1

0x2cb2,	// (0x0005d596) copy_highlight_primary_pane_g1

0x2cd8,	// (0x0005d5bc) copy_highlight_primary_pane_t1

0x2cb2,	// (0x0005d596) copy_highlight_primary_small_pane_g1

0x2cc9,	// (0x0005d5ad) copy_highlight_primary_small_pane_t1

0x1fb8,	// (0x0005c89c) copy_highlight_secondary_pane_g1

0x1fc0,	// (0x0005c8a4) copy_highlight_secondary_pane_t1

0x2cb2,	// (0x0005d596) copy_highlight_title_pane_g1

0x2cba,	// (0x0005d59e) copy_highlight_title_pane_t1

0x2cb2,	// (0x0005d596) copy_highlight_digital_pane_g1

0x4103,	// (0x0005e9e7) copy_highlight_digital_pane_t1

0x4057,	// (0x0005e93b) graphic_text_primary_pane_g1

0x40e7,	// (0x0005e9cb) graphic_text_primary_pane_t1

0x40f5,	// (0x0005e9d9) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x0006a2a1) graphic_text_primary_pane_t

0x40c3,	// (0x0005e9a7) graphic_text_primary_small_pane_g1

0x40cb,	// (0x0005e9af) graphic_text_primary_small_pane_t1

0x40d9,	// (0x0005e9bd) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x0006a29c) graphic_text_primary_small_pane_t

0x409f,	// (0x0005e983) graphic_text_secondary_pane_g1

0x40a7,	// (0x0005e98b) graphic_text_secondary_pane_t1

0x40b5,	// (0x0005e999) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0006a297) graphic_text_secondary_pane_t

0x407b,	// (0x0005e95f) graphic_text_title_pane_g1

0x4083,	// (0x0005e967) graphic_text_title_pane_t1

0x4091,	// (0x0005e975) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0006a292) graphic_text_title_pane_t

0x4057,	// (0x0005e93b) graphic_text_digital_pane_g1

0x405f,	// (0x0005e943) graphic_text_digital_pane_t1

0x406d,	// (0x0005e951) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x0006a28d) graphic_text_digital_pane_t

0x7f34,	// (0x00062818) navi_icon_pane_srt_ParamLimits

0x7f34,	// (0x00062818) navi_icon_pane_srt

0x7ee6,	// (0x000627ca) navi_midp_pane_srt

0x7ee6,	// (0x000627ca) navi_navi_pane_srt

0x7f34,	// (0x00062818) navi_text_pane_srt_ParamLimits

0x7f34,	// (0x00062818) navi_text_pane_srt

0x4022,	// (0x0005e906) navi_navi_icon_text_pane_srt

0x402a,	// (0x0005e90e) navi_navi_pane_srt_g1_ParamLimits

0x402a,	// (0x0005e90e) navi_navi_pane_srt_g1

0x403c,	// (0x0005e920) navi_navi_pane_srt_g2_ParamLimits

0x403c,	// (0x0005e920) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x0006a288) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x0006a288) navi_navi_pane_srt_g

0x404e,	// (0x0005e932) navi_navi_tabs_pane_srt

0x4022,	// (0x0005e906) navi_navi_text_pane_srt

0x4022,	// (0x0005e906) navi_navi_volume_pane_srt

0x4013,	// (0x0005e8f7) navi_navi_text_pane_srt_t1

0x0b88,	// (0x0005b46c) navi_navi_volume_pane_srt_g1

0x0b90,	// (0x0005b474) volume_small_pane_srt_ParamLimits

0x0b90,	// (0x0005b474) volume_small_pane_srt

0xf496,	// (0x00069d7a) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x00069d7a) volume_small_pane_srt_g1

0xf4a6,	// (0x00069d8a) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x00069d8a) volume_small_pane_srt_g2

0xf4b7,	// (0x00069d9b) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x00069d9b) volume_small_pane_srt_g3

0xf4c8,	// (0x00069dac) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x00069dac) volume_small_pane_srt_g4

0xf4d9,	// (0x00069dbd) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x00069dbd) volume_small_pane_srt_g5

0xf4ea,	// (0x00069dce) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x00069dce) volume_small_pane_srt_g6

0xf4fb,	// (0x00069ddf) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x00069ddf) volume_small_pane_srt_g7

0xf50c,	// (0x00069df0) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x00069df0) volume_small_pane_srt_g8

0xf51d,	// (0x00069e01) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x00069e01) volume_small_pane_srt_g9

0xf52e,	// (0x00069e12) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x00069e12) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0006a03c) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0006a03c) volume_small_pane_srt_g

0x9864,	// (0x00064148) query_popup_data_pane_cp2

0x3ff9,	// (0x0005e8dd) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ff9,	// (0x0005e8dd) navi_navi_icon_text_pane_srt_t1

0x2f40,	// (0x0005d824) navi_tabs_2_long_pane_srt

0x2f40,	// (0x0005d824) navi_tabs_2_pane_srt

0x2f40,	// (0x0005d824) navi_tabs_3_long_pane_srt

0x2f40,	// (0x0005d824) navi_tabs_3_pane_srt

0x2f40,	// (0x0005d824) navi_tabs_4_pane_srt

0xb247,	// (0x00065b2b) tabs_2_active_pane_srt_ParamLimits

0xb247,	// (0x00065b2b) tabs_2_active_pane_srt

0xb257,	// (0x00065b3b) tabs_2_passive_pane_srt_ParamLimits

0xb257,	// (0x00065b3b) tabs_2_passive_pane_srt

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp1_srt

0xc9ae,	// (0x00067292) bg_passive_tab_pane_g1_cp1_srt

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp1_srt

0xc9b7,	// (0x0006729b) bg_passive_tab_pane_g3_cp1_srt

0x805e,	// (0x00062942) bg_active_tab_pane_cp1_srt_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp1_srt

0xc9c0,	// (0x000672a4) tabs_2_active_pane_srt_g1

0xc9c8,	// (0x000672ac) tabs_2_active_pane_srt_t1_ParamLimits

0xc9c8,	// (0x000672ac) tabs_2_active_pane_srt_t1

0xc9ae,	// (0x00067292) bg_active_tab_pane_g1_cp1_srt

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp1_srt

0xc9b7,	// (0x0006729b) bg_active_tab_pane_g3_cp1_srt

0xb214,	// (0x00065af8) tabs_3_active_pane_srt_ParamLimits

0xb214,	// (0x00065af8) tabs_3_active_pane_srt

0xb225,	// (0x00065b09) tabs_3_passive_pane_cp_srt_ParamLimits

0xb225,	// (0x00065b09) tabs_3_passive_pane_cp_srt

0xb236,	// (0x00065b1a) tabs_3_passive_pane_srt_ParamLimits

0xb236,	// (0x00065b1a) tabs_3_passive_pane_srt

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2703,	// (0x0005cfe7) bg_passive_tab_pane_cp2_srt

0xa61a,	// (0x00064efe) bg_passive_tab_pane_g1_cp2_srt

0xa47b,	// (0x00064d5f) bg_passive_tab_pane_g2_cp2_srt

0xa623,	// (0x00064f07) bg_passive_tab_pane_g3_cp2_srt

0x805e,	// (0x00062942) bg_active_tab_pane_cp2_srt_ParamLimits

0x805e,	// (0x00062942) bg_active_tab_pane_cp2_srt

0xc990,	// (0x00067274) tabs_3_active_pane_srt_g1

0xc998,	// (0x0006727c) tabs_3_active_pane_srt_t1_ParamLimits

0xc998,	// (0x0006727c) tabs_3_active_pane_srt_t1

0xa61a,	// (0x00064efe) bg_active_tab_pane_g1_cp2_srt

0xa47b,	// (0x00064d5f) bg_active_tab_pane_g2_cp2_srt

0xa623,	// (0x00064f07) bg_active_tab_pane_g3_cp2_srt

0x0aed,	// (0x0005b3d1) tabs_4_active_pane_srt_ParamLimits

0x0aed,	// (0x0005b3d1) tabs_4_active_pane_srt

0x0aff,	// (0x0005b3e3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0aff,	// (0x0005b3e3) tabs_4_passive_pane_cp2_srt

0x00db,	// (0x0005a9bf) aid_size_cell_toolbar

0x3a3e,	// (0x0005e322) main_idle_act_pane_ParamLimits

0xaa9b,	// (0x0006537f) popup_large_graphic_colour_window_ParamLimits

0xaf8f,	// (0x00065873) popup_toolbar_window_ParamLimits

0xaf8f,	// (0x00065873) popup_toolbar_window

0x3df5,	// (0x0005e6d9) list_single_graphic_2heading_pane_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_graphic_2heading_pane

0x8766,	// (0x0006304a) aid_size_cell_apps_grid_lsc_pane

0x8778,	// (0x0006305c) aid_size_cell_apps_grid_prt_pane

0x216a,	// (0x0005ca4e) bg_wml_button_pane_cp1_ParamLimits

0x216a,	// (0x0005ca4e) bg_wml_button_pane_cp1

0xc100,	// (0x000669e4) form_midp_field_text_pane_t1_ParamLimits

0x2703,	// (0x0005cfe7) input_focus_pane_cp050_ParamLimits

0x2973,	// (0x0005d257) list_midp_form_text_pane_ParamLimits

0x2916,	// (0x0005d1fa) input_focus_pane_cp051_ParamLimits

0x292a,	// (0x0005d20e) list_midp_choice_pane_ParamLimits

0xc065,	// (0x00066949) list_single_2graphic_pane_cp3_ParamLimits

0xc065,	// (0x00066949) list_single_2graphic_pane_cp3

0xc079,	// (0x0006695d) list_single_midp_graphic_pane_ParamLimits

0xc079,	// (0x0006695d) list_single_midp_graphic_pane

0xded4,	// (0x000687b8) list_single_graphic_2heading_pane_g1_ParamLimits

0xded4,	// (0x000687b8) list_single_graphic_2heading_pane_g1

0xdee0,	// (0x000687c4) list_single_graphic_2heading_pane_g4_ParamLimits

0xdee0,	// (0x000687c4) list_single_graphic_2heading_pane_g4

0xdeec,	// (0x000687d0) list_single_graphic_2heading_pane_g5_ParamLimits

0xdeec,	// (0x000687d0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0006a08f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0006a08f) list_single_graphic_2heading_pane_g

0xdef8,	// (0x000687dc) list_single_graphic_2heading_pane_t1_ParamLimits

0xdef8,	// (0x000687dc) list_single_graphic_2heading_pane_t1

0xdf0c,	// (0x000687f0) list_single_graphic_2heading_pane_t2_ParamLimits

0xdf0c,	// (0x000687f0) list_single_graphic_2heading_pane_t2

0xdf26,	// (0x0006880a) list_single_graphic_2heading_pane_t3_ParamLimits

0xdf26,	// (0x0006880a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0006a096) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0006a096) list_single_graphic_2heading_pane_t

0x25b5,	// (0x0005ce99) bg_popup_sub_pane_cp2

0x25df,	// (0x0005cec3) grid_toobar_pane

0x06b8,	// (0x0005af9c) cell_toolbar_pane_ParamLimits

0x06b8,	// (0x0005af9c) cell_toolbar_pane

0x261b,	// (0x0005ceff) cell_toolbar_pane_g1_ParamLimits

0x261b,	// (0x0005ceff) cell_toolbar_pane_g1

0xc025,	// (0x00066909) cell_toolbar_pane_g2_ParamLimits

0xc025,	// (0x00066909) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x0006a09d) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x0006a09d) cell_toolbar_pane_g

0x2651,	// (0x0005cf35) grid_highlight_pane_cp2_ParamLimits

0x2651,	// (0x0005cf35) grid_highlight_pane_cp2

0x266b,	// (0x0005cf4f) toolbar_button_pane

0x2677,	// (0x0005cf5b) toolbar_button_pane_g1

0x267f,	// (0x0005cf63) toolbar_button_pane_g2

0x2687,	// (0x0005cf6b) toolbar_button_pane_g3

0x268f,	// (0x0005cf73) toolbar_button_pane_g4

0x2697,	// (0x0005cf7b) toolbar_button_pane_g5

0x269f,	// (0x0005cf83) toolbar_button_pane_g6

0x26a7,	// (0x0005cf8b) toolbar_button_pane_g7

0x26af,	// (0x0005cf93) toolbar_button_pane_g8

0x26b7,	// (0x0005cf9b) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0006a0a2) toolbar_button_pane_g

0x06f0,	// (0x0005afd4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06f0,	// (0x0005afd4) list_single_2graphic_pane_g1_cp3

0xb03c,	// (0x00065920) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb03c,	// (0x00065920) list_single_2graphic_pane_g2_cp3

0x070d,	// (0x0005aff1) list_single_2graphic_pane_g3_cp3

0x0715,	// (0x0005aff9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0715,	// (0x0005aff9) list_single_2graphic_pane_g4_cp3

0xb04d,	// (0x00065931) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb04d,	// (0x00065931) list_single_2graphic_pane_t1_cp3

0x073d,	// (0x0005b021) list_single_midp_graphic_pane_g2_ParamLimits

0x073d,	// (0x0005b021) list_single_midp_graphic_pane_g2

0xdec4,	// (0x000687a8) aid_zoom_text_primary

0x00e3,	// (0x0005a9c7) aid_zoom_text_secondary

0xa67a,	// (0x00064f5e) status_small_pane_g7_ParamLimits

0xa67a,	// (0x00064f5e) status_small_pane_g7

0xa69d,	// (0x00064f81) status_small_pane_t1_ParamLimits

0x94d1,	// (0x00063db5) title_pane_g2

0x0003,

0xf54e,	// (0x00069e32) title_pane_g

0x98be,	// (0x000641a2) aid_size_cell_colour_1_pane_ParamLimits

0x98be,	// (0x000641a2) aid_size_cell_colour_1_pane

0x98d2,	// (0x000641b6) aid_size_cell_colour_2_pane_ParamLimits

0x98d2,	// (0x000641b6) aid_size_cell_colour_2_pane

0x98e6,	// (0x000641ca) aid_size_cell_colour_3_pane_ParamLimits

0x98e6,	// (0x000641ca) aid_size_cell_colour_3_pane

0x98fa,	// (0x000641de) aid_size_cell_colour_4_pane_ParamLimits

0x98fa,	// (0x000641de) aid_size_cell_colour_4_pane

0xeff5,	// (0x000698d9) title_pane_stacon_g1_ParamLimits

0xeff5,	// (0x000698d9) title_pane_stacon_g1

0x2d2f,	// (0x0005d613) popup_note_wait_window_g3_ParamLimits

0x2d2f,	// (0x0005d613) popup_note_wait_window_g3

0x2da5,	// (0x0005d689) popup_note_wait_window_t5_ParamLimits

0x2da5,	// (0x0005d689) popup_note_wait_window_t5

0x7ee6,	// (0x000627ca) main_feb_china_hwr_fs_writing_pane

0xa91d,	// (0x00065201) popup_feb_china_hwr_fs_window_ParamLimits

0xa91d,	// (0x00065201) popup_feb_china_hwr_fs_window

0xb069,	// (0x0006594d) aid_size_cell_hwr_fs_ParamLimits

0xb069,	// (0x0006594d) aid_size_cell_hwr_fs

0x2703,	// (0x0005cfe7) bg_popup_sub_pane_cp3_ParamLimits

0x2703,	// (0x0005cfe7) bg_popup_sub_pane_cp3

0xb07e,	// (0x00065962) grid_hwr_fs_pane_ParamLimits

0xb07e,	// (0x00065962) grid_hwr_fs_pane

0x078c,	// (0x0005b070) linegrid_hwr_fs_pane_ParamLimits

0x078c,	// (0x0005b070) linegrid_hwr_fs_pane

0xb096,	// (0x0006597a) cell_hwr_fs_pane_ParamLimits

0xb096,	// (0x0006597a) cell_hwr_fs_pane

0x270f,	// (0x0005cff3) linegrid_hwr_fs_pane_g1_ParamLimits

0x270f,	// (0x0005cff3) linegrid_hwr_fs_pane_g1

0xc039,	// (0x0006691d) linegrid_hwr_fs_pane_g2_ParamLimits

0xc039,	// (0x0006691d) linegrid_hwr_fs_pane_g2

0x272d,	// (0x0005d011) linegrid_hwr_fs_pane_g3_ParamLimits

0x272d,	// (0x0005d011) linegrid_hwr_fs_pane_g3

0xb0bc,	// (0x000659a0) linegrid_hwr_fs_pane_g4_ParamLimits

0xb0bc,	// (0x000659a0) linegrid_hwr_fs_pane_g4

0x07d8,	// (0x0005b0bc) linegrid_hwr_fs_pane_g5_ParamLimits

0x07d8,	// (0x0005b0bc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x0006a0c8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x0006a0c8) linegrid_hwr_fs_pane_g

0x2739,	// (0x0005d01d) cell_hwr_fs_pane_g1_ParamLimits

0x2739,	// (0x0005d01d) cell_hwr_fs_pane_g1

0x24ef,	// (0x0005cdd3) cell_hwr_fs_pane_g2_ParamLimits

0x24ef,	// (0x0005cdd3) cell_hwr_fs_pane_g2

0xc04b,	// (0x0006692f) cell_hwr_fs_pane_g3_ParamLimits

0xc04b,	// (0x0006692f) cell_hwr_fs_pane_g3

0xc058,	// (0x0006693c) cell_hwr_fs_pane_g4_ParamLimits

0xc058,	// (0x0006693c) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x0006a0d3) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0006a0d3) cell_hwr_fs_pane_g

0xb0d6,	// (0x000659ba) cell_hwr_fs_pane_t1

0x7ee6,	// (0x000627ca) grid_highlight_pane_cp6

0x7ee6,	// (0x000627ca) main_idle_act2_pane

0x85bc,	// (0x00062ea0) aid_inside_area_popup_secondary

0xc48d,	// (0x00066d71) aid_inside_area_window_primary_ParamLimits

0xc48d,	// (0x00066d71) aid_inside_area_window_primary

0xc9e6,	// (0x000672ca) ai2_news_ticker_pane

0x411a,	// (0x0005e9fe) aid_size_cell_ai1_link_ParamLimits

0x411a,	// (0x0005e9fe) aid_size_cell_ai1_link

0xc9ee,	// (0x000672d2) popup_ai2_data_window_ParamLimits

0xc9ee,	// (0x000672d2) popup_ai2_data_window

0x414a,	// (0x0005ea2e) popup_ai2_link_window_ParamLimits

0x414a,	// (0x0005ea2e) popup_ai2_link_window

0x2703,	// (0x0005cfe7) bg_popup_sub_pane_cp4_ParamLimits

0x2703,	// (0x0005cfe7) bg_popup_sub_pane_cp4

0x415e,	// (0x0005ea42) grid_ai2_link_pane_ParamLimits

0x415e,	// (0x0005ea42) grid_ai2_link_pane

0x4175,	// (0x0005ea59) popup_ai2_link_window_g1_ParamLimits

0x4175,	// (0x0005ea59) popup_ai2_link_window_g1

0x4181,	// (0x0005ea65) popup_ai2_link_window_g2_ParamLimits

0x4181,	// (0x0005ea65) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0006a2a6) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0006a2a6) popup_ai2_link_window_g

0x4190,	// (0x0005ea74) ai2_mp_button_pane

0x4198,	// (0x0005ea7c) ai2_mp_volume_pane

0x2916,	// (0x0005d1fa) bg_popup_sub_pane_cp5_ParamLimits

0x2916,	// (0x0005d1fa) bg_popup_sub_pane_cp5

0x41a0,	// (0x0005ea84) heading_ai2_gene_pane_ParamLimits

0x41a0,	// (0x0005ea84) heading_ai2_gene_pane

0x41ac,	// (0x0005ea90) list_ai2_gene_pane_ParamLimits

0x41ac,	// (0x0005ea90) list_ai2_gene_pane

0x41f4,	// (0x0005ead8) cell_ai2_link_pane_ParamLimits

0x41f4,	// (0x0005ead8) cell_ai2_link_pane

0x420a,	// (0x0005eaee) cell_ai2_link_pane_g1

0x7ee6,	// (0x000627ca) grid_highlight_pane_cp7

0x0ba5,	// (0x0005b489) ai2_mp_volume_pane_g1

0x42da,	// (0x0005ebbe) ai2_mp_volume_pane_g2

0x424f,	// (0x0005eb33) list_ai2_gene_pane_t1

0x42e2,	// (0x0005ebc6) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x0006a2bf) ai2_mp_volume_pane_g

0xb267,	// (0x00065b4b) volume_small_pane_cp3

0x42ea,	// (0x0005ebce) aid_size_cell_ai2_button

0x42f2,	// (0x0005ebd6) grid_ai2_button_pane

0x42fb,	// (0x0005ebdf) cell_ai2_button_pane_ParamLimits

0x42fb,	// (0x0005ebdf) cell_ai2_button_pane

0x7edc,	// (0x000627c0) cell_ai2_button_pane_g1

0x7ee6,	// (0x000627ca) grid_highlight_pane_cp8

0x429a,	// (0x0005eb7e) ai2_gene_pane_t1_ParamLimits

0x429a,	// (0x0005eb7e) ai2_gene_pane_t1

0xa86b,	// (0x0006514f) aid_height_parent_landscape

0xc6db,	// (0x00066fbf) aid_height_set_list

0x3a3e,	// (0x0005e322) aid_size_parent

0xc964,	// (0x00067248) aid_size_cell_graphic_pane_ParamLimits

0x41bc,	// (0x0005eaa0) popup_ai2_data_window_g1_ParamLimits

0x41bc,	// (0x0005eaa0) popup_ai2_data_window_g1

0x41c8,	// (0x0005eaac) ai2_news_ticker_pane_g1

0x41d0,	// (0x0005eab4) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x0006a2ab) ai2_news_ticker_pane_g

0x41d8,	// (0x0005eabc) ai2_news_ticker_pane_t1

0x41e6,	// (0x0005eaca) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x0006a2b0) ai2_news_ticker_pane_t

0x4213,	// (0x0005eaf7) heading_ai2_gene_pane_g1

0x421b,	// (0x0005eaff) heading_ai2_gene_pane_t1_ParamLimits

0x421b,	// (0x0005eaff) heading_ai2_gene_pane_t1

0x4230,	// (0x0005eb14) list_highlight_pane_cp6

0x4238,	// (0x0005eb1c) ai2_gene_pane_ParamLimits

0x4238,	// (0x0005eb1c) ai2_gene_pane

0x425d,	// (0x0005eb41) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0006a2b5) list_ai2_gene_pane_t

0x426b,	// (0x0005eb4f) list_highlight_pane_cp8_ParamLimits

0x426b,	// (0x0005eb4f) list_highlight_pane_cp8

0x427c,	// (0x0005eb60) ai2_gene_pane_g1_ParamLimits

0x427c,	// (0x0005eb60) ai2_gene_pane_g1

0x428e,	// (0x0005eb72) ai2_gene_pane_g2_ParamLimits

0x428e,	// (0x0005eb72) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x0006a2ba) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x0006a2ba) ai2_gene_pane_g

0x8293,	// (0x00062b77) scroll_pane_cp12

0xa828,	// (0x0006510c) control_pane_t3_ParamLimits

0xa828,	// (0x0006510c) control_pane_t3

0xa68e,	// (0x00064f72) status_small_pane_g8_ParamLimits

0xa68e,	// (0x00064f72) status_small_pane_g8

0xa9e0,	// (0x000652c4) popup_find_window_ParamLimits

0xac93,	// (0x00065577) popup_note_image_window_ParamLimits

0xdc13,	// (0x000684f7) list_double2_graphic_pane_vc_g1_ParamLimits

0xdc13,	// (0x000684f7) list_double2_graphic_pane_vc_g1

0xdc1f,	// (0x00068503) list_double2_graphic_pane_vc_g2_ParamLimits

0xdc1f,	// (0x00068503) list_double2_graphic_pane_vc_g2

0xdc2b,	// (0x0006850f) list_double2_graphic_pane_vc_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00069ea5) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00069ea5) list_double2_graphic_pane_vc_g

0xdc37,	// (0x0006851b) list_double2_graphic_pane_vc_t1_ParamLimits

0xdc37,	// (0x0006851b) list_double2_graphic_pane_vc_t1

0xdc1f,	// (0x00068503) list_single_heading_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_single_heading_pane_vc_g1

0xdc2b,	// (0x0006850f) list_single_heading_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_single_heading_pane_vc_g

0xdf3e,	// (0x00068822) list_single_heading_pane_vc_t1_ParamLimits

0xdf3e,	// (0x00068822) list_single_heading_pane_vc_t1

0xdf54,	// (0x00068838) list_single_heading_pane_vc_t2_ParamLimits

0xdf54,	// (0x00068838) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x0006a0b7) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x0006a0b7) list_single_heading_pane_vc_t

0x26bf,	// (0x0005cfa3) list_setting_number_pane_vc_g1_ParamLimits

0x26bf,	// (0x0005cfa3) list_setting_number_pane_vc_g1

0x26cb,	// (0x0005cfaf) list_setting_number_pane_vc_g2_ParamLimits

0x26cb,	// (0x0005cfaf) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0006a0bc) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0006a0bc) list_setting_number_pane_vc_g

0xdf66,	// (0x0006884a) list_setting_number_pane_vc_t1_ParamLimits

0xdf66,	// (0x0006884a) list_setting_number_pane_vc_t1

0xdf7a,	// (0x0006885e) list_setting_number_pane_vc_t2_ParamLimits

0xdf7a,	// (0x0006885e) list_setting_number_pane_vc_t2

0xdf96,	// (0x0006887a) list_setting_number_pane_vc_t3_ParamLimits

0xdf96,	// (0x0006887a) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x0006a0c1) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x0006a0c1) list_setting_number_pane_vc_t

0xdfc0,	// (0x000688a4) set_value_pane_vc_ParamLimits

0xdfc0,	// (0x000688a4) set_value_pane_vc

0x3df5,	// (0x0005e6d9) list_double2_graphic_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double2_graphic_pane_vc

0x3df5,	// (0x0005e6d9) list_double2_large_graphic_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double2_large_graphic_pane_vc

0x3df5,	// (0x0005e6d9) list_double2_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double2_pane_vc

0x3df5,	// (0x0005e6d9) list_double_graphic_heading_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_graphic_heading_pane_vc

0x3df5,	// (0x0005e6d9) list_double_graphic_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_graphic_pane_vc

0x3df5,	// (0x0005e6d9) list_double_heading_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_heading_pane_vc

0x3e07,	// (0x0005e6eb) list_double_large_graphic_pane_vc_ParamLimits

0x3e07,	// (0x0005e6eb) list_double_large_graphic_pane_vc

0x3df5,	// (0x0005e6d9) list_double_number_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_number_pane_vc

0x3df5,	// (0x0005e6d9) list_double_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_pane_vc

0x3df5,	// (0x0005e6d9) list_double_time_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_double_time_pane_vc

0x3df5,	// (0x0005e6d9) list_setting_number_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_setting_number_pane_vc

0x3df5,	// (0x0005e6d9) list_setting_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_setting_pane_vc

0x3df5,	// (0x0005e6d9) list_single_graphic_heading_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_graphic_heading_pane_vc

0x3df5,	// (0x0005e6d9) list_single_heading_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_heading_pane_vc

0x3df5,	// (0x0005e6d9) list_single_number_heading_pane_vc_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_number_heading_pane_vc

0xdfdf,	// (0x000688c3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdfdf,	// (0x000688c3) list_double_graphic_heading_pane_vc_g1

0xdc1f,	// (0x00068503) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdc1f,	// (0x00068503) list_double_graphic_heading_pane_vc_g2

0xdc2b,	// (0x0006850f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0006a2c6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0006a2c6) list_double_graphic_heading_pane_vc_g

0xdfeb,	// (0x000688cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdfeb,	// (0x000688cf) list_double_graphic_heading_pane_vc_t1

0xdfff,	// (0x000688e3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdfff,	// (0x000688e3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x0006a2cd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x0006a2cd) list_double_graphic_heading_pane_vc_t

0x26bf,	// (0x0005cfa3) list_setting_pane_vc_g1_ParamLimits

0x26bf,	// (0x0005cfa3) list_setting_pane_vc_g1

0x26cb,	// (0x0005cfaf) list_setting_pane_vc_g2_ParamLimits

0x26cb,	// (0x0005cfaf) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x0006a0bc) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x0006a0bc) list_setting_pane_vc_g

0xe017,	// (0x000688fb) list_setting_pane_vc_t1_ParamLimits

0xe017,	// (0x000688fb) list_setting_pane_vc_t1

0xe033,	// (0x00068917) list_setting_pane_vc_t2_ParamLimits

0xe033,	// (0x00068917) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0006a310) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0006a310) list_setting_pane_vc_t

0xdfc0,	// (0x000688a4) set_value_pane_cp_vc_ParamLimits

0xdfc0,	// (0x000688a4) set_value_pane_cp_vc

0xdc1f,	// (0x00068503) list_single_number_heading_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_single_number_heading_pane_vc_g1

0xdc2b,	// (0x0006850f) list_single_number_heading_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_single_number_heading_pane_vc_g

0xe04d,	// (0x00068931) list_single_number_heading_pane_vc_t1_ParamLimits

0xe04d,	// (0x00068931) list_single_number_heading_pane_vc_t1

0xe063,	// (0x00068947) list_single_number_heading_pane_vc_t2_ParamLimits

0xe063,	// (0x00068947) list_single_number_heading_pane_vc_t2

0xe075,	// (0x00068959) list_single_number_heading_pane_vc_t3_ParamLimits

0xe075,	// (0x00068959) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0006a315) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0006a315) list_single_number_heading_pane_vc_t

0xe087,	// (0x0006896b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe087,	// (0x0006896b) list_single_graphic_heading_pane_vc_g1

0xdc1f,	// (0x00068503) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdc1f,	// (0x00068503) list_single_graphic_heading_pane_vc_g4

0xdc2b,	// (0x0006850f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdc2b,	// (0x0006850f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa38,	// (0x0006a31c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa38,	// (0x0006a31c) list_single_graphic_heading_pane_vc_g

0xdf3e,	// (0x00068822) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdf3e,	// (0x00068822) list_single_graphic_heading_pane_vc_t1

0xe093,	// (0x00068977) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe093,	// (0x00068977) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0006a323) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0006a323) list_single_graphic_heading_pane_vc_t

0xdc1f,	// (0x00068503) list_double2_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_double2_pane_vc_g1

0xdc2b,	// (0x0006850f) list_double2_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_double2_pane_vc_g

0xe0a5,	// (0x00068989) list_double2_pane_vc_t1_ParamLimits

0xe0a5,	// (0x00068989) list_double2_pane_vc_t1

0x3c7f,	// (0x0005e563) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c7f,	// (0x0005e563) list_double2_large_graphic_pane_vc_g1

0xdc1f,	// (0x00068503) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdc1f,	// (0x00068503) list_double2_large_graphic_pane_vc_g2

0xdc2b,	// (0x0006850f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdc2b,	// (0x0006850f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00069ece) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00069ece) list_double2_large_graphic_pane_vc_g

0xdc37,	// (0x0006851b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdc37,	// (0x0006851b) list_double2_large_graphic_pane_vc_t1

0x3c8b,	// (0x0005e56f) list_double_time_pane_vc_g1_ParamLimits

0x3c8b,	// (0x0005e56f) list_double_time_pane_vc_g1

0x3c97,	// (0x0005e57b) list_double_time_pane_vc_g2_ParamLimits

0x3c97,	// (0x0005e57b) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0006a328) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0006a328) list_double_time_pane_vc_g

0xe0bd,	// (0x000689a1) list_double_time_pane_vc_t1_ParamLimits

0xe0bd,	// (0x000689a1) list_double_time_pane_vc_t1

0xe0e1,	// (0x000689c5) list_double_time_pane_vc_t2_ParamLimits

0xe0e1,	// (0x000689c5) list_double_time_pane_vc_t2

0xe130,	// (0x00068a14) list_double_time_pane_vc_t3_ParamLimits

0xe130,	// (0x00068a14) list_double_time_pane_vc_t3

0xe142,	// (0x00068a26) list_double_time_pane_vc_t4_ParamLimits

0xe142,	// (0x00068a26) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0006a32d) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0006a32d) list_double_time_pane_vc_t

0xdc1f,	// (0x00068503) list_double_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_double_pane_vc_g1

0xdc2b,	// (0x0006850f) list_double_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_double_pane_vc_g

0xe156,	// (0x00068a3a) list_double_pane_vc_t1_ParamLimits

0xe156,	// (0x00068a3a) list_double_pane_vc_t1

0xe16a,	// (0x00068a4e) list_double_pane_vc_t2_ParamLimits

0xe16a,	// (0x00068a4e) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0006a336) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0006a336) list_double_pane_vc_t

0xdc1f,	// (0x00068503) list_double_number_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_double_number_pane_vc_g1

0xdc2b,	// (0x0006850f) list_double_number_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_double_number_pane_vc_g

0xe182,	// (0x00068a66) list_double_number_pane_vc_t1_ParamLimits

0xe182,	// (0x00068a66) list_double_number_pane_vc_t1

0xe156,	// (0x00068a3a) list_double_number_pane_vc_t2_ParamLimits

0xe156,	// (0x00068a3a) list_double_number_pane_vc_t2

0xe194,	// (0x00068a78) list_double_number_pane_vc_t3_ParamLimits

0xe194,	// (0x00068a78) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0006a33b) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0006a33b) list_double_number_pane_vc_t

0x3ca3,	// (0x0005e587) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3ca3,	// (0x0005e587) list_double_large_graphic_pane_vc_g1

0x3cc5,	// (0x0005e5a9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cc5,	// (0x0005e5a9) list_double_large_graphic_pane_vc_g2

0x3cd9,	// (0x0005e5bd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3cd9,	// (0x0005e5bd) list_double_large_graphic_pane_vc_g3

0xe1ac,	// (0x00068a90) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe1ac,	// (0x00068a90) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0006a342) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0006a342) list_double_large_graphic_pane_vc_g

0xe1b8,	// (0x00068a9c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe1b8,	// (0x00068a9c) list_double_large_graphic_pane_vc_t1

0xe1d4,	// (0x00068ab8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe1d4,	// (0x00068ab8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0006a34b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0006a34b) list_double_large_graphic_pane_vc_t

0xdc1f,	// (0x00068503) list_double_heading_pane_vc_g1_ParamLimits

0xdc1f,	// (0x00068503) list_double_heading_pane_vc_g1

0xdc2b,	// (0x0006850f) list_double_heading_pane_vc_g2_ParamLimits

0xdc2b,	// (0x0006850f) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069eb6) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069eb6) list_double_heading_pane_vc_g

0xe1f6,	// (0x00068ada) list_double_heading_pane_vc_t1_ParamLimits

0xe1f6,	// (0x00068ada) list_double_heading_pane_vc_t1

0xe20a,	// (0x00068aee) list_double_heading_pane_vc_t2_ParamLimits

0xe20a,	// (0x00068aee) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006a350) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006a350) list_double_heading_pane_vc_t

0xe222,	// (0x00068b06) list_double_graphic_pane_vc_g1_ParamLimits

0xe222,	// (0x00068b06) list_double_graphic_pane_vc_g1

0x3ce8,	// (0x0005e5cc) list_double_graphic_pane_vc_g2_ParamLimits

0x3ce8,	// (0x0005e5cc) list_double_graphic_pane_vc_g2

0xdc1f,	// (0x00068503) list_double_graphic_pane_vc_g3_ParamLimits

0xdc1f,	// (0x00068503) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0006a355) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0006a355) list_double_graphic_pane_vc_g

0xe235,	// (0x00068b19) list_double_graphic_pane_vc_t1_ParamLimits

0xe235,	// (0x00068b19) list_double_graphic_pane_vc_t1

0xe254,	// (0x00068b38) list_double_graphic_pane_vc_t2_ParamLimits

0xe254,	// (0x00068b38) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0006a35e) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0006a35e) list_double_graphic_pane_vc_t

0xdbf2,	// (0x000684d6) aid_size_cell_fastswap

0x9298,	// (0x00063b7c) aid_size_cell_touch_ParamLimits

0x9298,	// (0x00063b7c) aid_size_cell_touch

0xef9a,	// (0x0006987e) popup_fast_swap_wide_window_ParamLimits

0xef9a,	// (0x0006987e) popup_fast_swap_wide_window

0x9468,	// (0x00063d4c) touch_pane_ParamLimits

0x9468,	// (0x00063d4c) touch_pane

0x82e0,	// (0x00062bc4) button_value_adjust_pane_cp2

0xdc88,	// (0x0006856c) button_value_adjust_pane_cp4

0xdc90,	// (0x00068574) form_field_data_pane_cp2

0x9f1a,	// (0x000647fe) form_field_data_wide_pane_cp2

0x879d,	// (0x00063081) bg_scroll_pane_ParamLimits

0xa235,	// (0x00064b19) scroll_handle_pane_ParamLimits

0xf14e,	// (0x00069a32) scroll_sc2_down_pane_ParamLimits

0xf14e,	// (0x00069a32) scroll_sc2_down_pane

0x87ce,	// (0x000630b2) scroll_sc2_up_pane_ParamLimits

0x87ce,	// (0x000630b2) scroll_sc2_up_pane

0xcb35,	// (0x00067419) grid_wheel_folder_pane_g1_ParamLimits

0xcb35,	// (0x00067419) grid_wheel_folder_pane_g1

0xf2d0,	// (0x00069bb4) clock_nsta_pane_cp2_ParamLimits

0xf2d0,	// (0x00069bb4) clock_nsta_pane_cp2

0xa554,	// (0x00064e38) listscroll_midp_pane_ParamLimits

0xa560,	// (0x00064e44) midp_canvas_pane

0x2117,	// (0x0005c9fb) nsta_clock_indic_pane

0x2150,	// (0x0005ca34) listscroll_form_pane_vc

0x2158,	// (0x0005ca3c) listscroll_set_pane_vc_ParamLimits

0x2158,	// (0x0005ca3c) listscroll_set_pane_vc

0xbd30,	// (0x00066614) clock_nsta_pane

0xbd5a,	// (0x0006663e) indicator_nsta_pane

0x25b5,	// (0x0005ce99) bg_popup_sub_pane_cp2_ParamLimits

0x25c9,	// (0x0005cead) find_pane_cp2_ParamLimits

0x25c9,	// (0x0005cead) find_pane_cp2

0x25df,	// (0x0005cec3) grid_toobar_pane_ParamLimits

0x26d7,	// (0x0005cfbb) list_form_gen_pane_vc_ParamLimits

0x26d7,	// (0x0005cfbb) list_form_gen_pane_vc

0x26ed,	// (0x0005cfd1) scroll_pane_cp8_vc_ParamLimits

0x26ed,	// (0x0005cfd1) scroll_pane_cp8_vc

0x2769,	// (0x0005d04d) data_form_wide_pane_vc_ParamLimits

0x2769,	// (0x0005d04d) data_form_wide_pane_vc

0x2775,	// (0x0005d059) form_field_data_wide_pane_vc_g1

0x277d,	// (0x0005d061) form_field_data_wide_pane_vc_t1_ParamLimits

0x277d,	// (0x0005d061) form_field_data_wide_pane_vc_t1

0x82f4,	// (0x00062bd8) input_focus_pane_cp6_vc_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_cp6_vc

0x2aca,	// (0x0005d3ae) list_midp_pane_ParamLimits

0x3f9f,	// (0x0005e883) scroll_pane_cp16_ParamLimits

0x3f9f,	// (0x0005e883) scroll_pane_cp16

0x2b0c,	// (0x0005d3f0) button_value_adjust_pane_ParamLimits

0x2b0c,	// (0x0005d3f0) button_value_adjust_pane

0xc6ec,	// (0x00066fd0) button_value_adjust_pane_cp6_ParamLimits

0xc6ec,	// (0x00066fd0) button_value_adjust_pane_cp6

0xc806,	// (0x000670ea) settings_code_pane_cp_ParamLimits

0xc806,	// (0x000670ea) settings_code_pane_cp

0x7edc,	// (0x000627c0) cell_touch_pane_g1

0x7edc,	// (0x000627c0) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00069fe2) cell_touch_pane_g

0xca04,	// (0x000672e8) cell_touch_pane_cp_ParamLimits

0xca04,	// (0x000672e8) cell_touch_pane_cp

0xca20,	// (0x00067304) cell_touch_pane_ParamLimits

0xca20,	// (0x00067304) cell_touch_pane

0x7edc,	// (0x000627c0) scroll_sc2_down_pane_g1

0x7edc,	// (0x000627c0) scroll_sc2_up_pane_g1

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp4_vc

0x432f,	// (0x0005ec13) list_set_graphic_pane_vc_g1_ParamLimits

0x432f,	// (0x0005ec13) list_set_graphic_pane_vc_g1

0x433b,	// (0x0005ec1f) list_set_graphic_pane_vc_g2_ParamLimits

0x433b,	// (0x0005ec1f) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x0006a2d2) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x0006a2d2) list_set_graphic_pane_vc_g

0x4347,	// (0x0005ec2b) text_primary_small_cp13_vc_ParamLimits

0x4347,	// (0x0005ec2b) text_primary_small_cp13_vc

0x435f,	// (0x0005ec43) list_set_graphic_pane_vc_ParamLimits

0x435f,	// (0x0005ec43) list_set_graphic_pane_vc

0x7ee6,	// (0x000627ca) input_focus_pane_cp2_vc

0x7edc,	// (0x000627c0) setting_code_pane_vc_g1

0x7f4b,	// (0x0006282f) setting_code_pane_vc_t1

0x4372,	// (0x0005ec56) set_text_pane_vc_t1_ParamLimits

0x4372,	// (0x0005ec56) set_text_pane_vc_t1

0x7ee6,	// (0x000627ca) input_focus_pane_cp1_vc

0x438e,	// (0x0005ec72) list_set_text_pane_vc

0x7edc,	// (0x000627c0) setting_text_pane_vc_g1

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp2_vc

0x7f42,	// (0x00062826) setting_slider_graphic_pane_vc_g1

0x4398,	// (0x0005ec7c) setting_slider_graphic_pane_vc_t1

0x43a8,	// (0x0005ec8c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0006a2d7) setting_slider_graphic_pane_vc_t

0x43b8,	// (0x0005ec9c) slider_set_pane_cp_vc

0x43c0,	// (0x0005eca4) slider_set_pane_vc_g1

0x43c9,	// (0x0005ecad) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x0006a2dc) slider_set_pane_vc_g

0x850e,	// (0x00062df2) set_opt_bg_pane_g1_copy1

0x8516,	// (0x00062dfa) set_opt_bg_pane_g2_copy1

0x43f5,	// (0x0005ecd9) set_opt_bg_pane_g3_copy1

0x8526,	// (0x00062e0a) set_opt_bg_pane_g4_copy1

0x852e,	// (0x00062e12) set_opt_bg_pane_g5_copy1

0x8536,	// (0x00062e1a) set_opt_bg_pane_g6_copy1

0x43fd,	// (0x0005ece1) set_opt_bg_pane_g7_copy1

0x4405,	// (0x0005ece9) set_opt_bg_pane_g8_copy1

0x440d,	// (0x0005ecf1) set_opt_bg_pane_g9_copy1

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp_vc

0x4415,	// (0x0005ecf9) setting_slider_pane_vc_t1

0x4424,	// (0x0005ed08) setting_slider_pane_vc_t2

0x4434,	// (0x0005ed18) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x0006a2eb) setting_slider_pane_vc_t

0x4444,	// (0x0005ed28) slider_set_pane_vc

0x082a,	// (0x0005b10e) volume_set_pane_vc_g1

0x0bb6,	// (0x0005b49a) volume_set_pane_vc_g2

0x0bbf,	// (0x0005b4a3) volume_set_pane_vc_g3

0x0bc8,	// (0x0005b4ac) volume_set_pane_vc_g4

0x0bd1,	// (0x0005b4b5) volume_set_pane_vc_g5

0x0bda,	// (0x0005b4be) volume_set_pane_vc_g6

0x0be3,	// (0x0005b4c7) volume_set_pane_vc_g7

0x0bec,	// (0x0005b4d0) volume_set_pane_vc_g8

0x0bf5,	// (0x0005b4d9) volume_set_pane_vc_g9

0x0bfe,	// (0x0005b4e2) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x0006a2f2) volume_set_pane_vc_g

0x444c,	// (0x0005ed30) volume_set_pane_vc

0x4454,	// (0x0005ed38) button_value_adjust_pane_cp1_vc

0x445e,	// (0x0005ed42) list_highlight_pane_cp2_vc

0x4467,	// (0x0005ed4b) list_set_pane_vc_ParamLimits

0x4467,	// (0x0005ed4b) list_set_pane_vc

0x44c5,	// (0x0005eda9) main_pane_set_vc_t1_ParamLimits

0x44c5,	// (0x0005eda9) main_pane_set_vc_t1

0x44da,	// (0x0005edbe) main_pane_set_vc_t2_ParamLimits

0x44da,	// (0x0005edbe) main_pane_set_vc_t2

0x44ec,	// (0x0005edd0) main_pane_set_vc_t3_ParamLimits

0x44ec,	// (0x0005edd0) main_pane_set_vc_t3

0x44fe,	// (0x0005ede2) main_pane_set_vc_t4_ParamLimits

0x44fe,	// (0x0005ede2) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0006a307) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0006a307) main_pane_set_vc_t

0x4510,	// (0x0005edf4) setting_code_pane_vc_ParamLimits

0x4510,	// (0x0005edf4) setting_code_pane_vc

0x451f,	// (0x0005ee03) setting_slider_graphic_pane_vc

0x451f,	// (0x0005ee03) setting_slider_pane_vc

0x451f,	// (0x0005ee03) setting_text_pane_vc

0x451f,	// (0x0005ee03) setting_volume_pane_vc

0x4527,	// (0x0005ee0b) scroll_pane_cp121_vc

0x82ce,	// (0x00062bb2) set_content_pane_vc

0x452f,	// (0x0005ee13) button_value_adjust_pane_g1

0x4538,	// (0x0005ee1c) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0006a363) button_value_adjust_pane_g

0x4541,	// (0x0005ee25) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4541,	// (0x0005ee25) form_field_slider_wide_pane_vc_t1

0x4555,	// (0x0005ee39) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4555,	// (0x0005ee39) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0006a368) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0006a368) form_field_slider_wide_pane_vc_t

0x805e,	// (0x00062942) input_focus_pane_cp10_vc_ParamLimits

0x805e,	// (0x00062942) input_focus_pane_cp10_vc

0x4583,	// (0x0005ee67) slider_cont_pane_cp1_vc_ParamLimits

0x4583,	// (0x0005ee67) slider_cont_pane_cp1_vc

0x4595,	// (0x0005ee79) slider_form_pane_g1_cp2

0x43c9,	// (0x0005ecad) slider_form_pane_g2_cp2

0x45c2,	// (0x0005eea6) form_field_slider_pane_vc_t3

0x45d0,	// (0x0005eeb4) form_field_slider_pane_vc_t4

0x45de,	// (0x0005eec2) slider_form_pane_vc_ParamLimits

0x45de,	// (0x0005eec2) slider_form_pane_vc

0x45eb,	// (0x0005eecf) form_field_slider_pane_vc_t1_ParamLimits

0x45eb,	// (0x0005eecf) form_field_slider_pane_vc_t1

0x4555,	// (0x0005ee39) form_field_slider_pane_vc_t2_ParamLimits

0x4555,	// (0x0005ee39) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0006a37a) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0006a37a) form_field_slider_pane_vc_t

0x805e,	// (0x00062942) input_focus_pane_cp9_vc_ParamLimits

0x805e,	// (0x00062942) input_focus_pane_cp9_vc

0x4607,	// (0x0005eeeb) slider_cont_pane_vc_ParamLimits

0x4607,	// (0x0005eeeb) slider_cont_pane_vc

0x461b,	// (0x0005eeff) list_form_graphic_pane_cp_vc_ParamLimits

0x461b,	// (0x0005eeff) list_form_graphic_pane_cp_vc

0x2775,	// (0x0005d059) form_field_popup_wide_pane_vc_g1

0x4630,	// (0x0005ef14) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4630,	// (0x0005ef14) form_field_popup_wide_pane_vc_t1

0x82f4,	// (0x00062bd8) input_focus_pane_cp8_vc_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_cp8_vc

0x4675,	// (0x0005ef59) list_form_wide_pane_vc_ParamLimits

0x4675,	// (0x0005ef59) list_form_wide_pane_vc

0x4681,	// (0x0005ef65) list_form_graphic_pane_vc_g1

0x4689,	// (0x0005ef6d) list_form_graphic_pane_vc_t1_ParamLimits

0x4689,	// (0x0005ef6d) list_form_graphic_pane_vc_t1

0x7f34,	// (0x00062818) list_highlight_pane_cp5_vc_ParamLimits

0x7f34,	// (0x00062818) list_highlight_pane_cp5_vc

0x46a5,	// (0x0005ef89) list_form_graphic_pane_vc_ParamLimits

0x46a5,	// (0x0005ef89) list_form_graphic_pane_vc

0x2775,	// (0x0005d059) form_field_popup_pane_vc_g1

0x46bb,	// (0x0005ef9f) form_field_popup_pane_vc_t1_ParamLimits

0x46bb,	// (0x0005ef9f) form_field_popup_pane_vc_t1

0x82f4,	// (0x00062bd8) input_focus_pane_cp7_vc_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_cp7_vc

0x46d2,	// (0x0005efb6) list_form_pane_vc_ParamLimits

0x46d2,	// (0x0005efb6) list_form_pane_vc

0x46de,	// (0x0005efc2) data_form_pane_vc_t1_ParamLimits

0x46de,	// (0x0005efc2) data_form_pane_vc_t1

0x850e,	// (0x00062df2) input_focus_pane_vc_g1

0x8516,	// (0x00062dfa) input_focus_pane_vc_g2

0x851e,	// (0x00062e02) input_focus_pane_vc_g3

0x8526,	// (0x00062e0a) input_focus_pane_vc_g4

0x852e,	// (0x00062e12) input_focus_pane_vc_g5

0x8536,	// (0x00062e1a) input_focus_pane_vc_g6

0x853e,	// (0x00062e22) input_focus_pane_vc_g7

0x8546,	// (0x00062e2a) input_focus_pane_vc_g8

0x854e,	// (0x00062e32) input_focus_pane_vc_g9

0x7edc,	// (0x000627c0) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00069f6b) input_focus_pane_vc_g

0x2769,	// (0x0005d04d) data_form_pane_vc_ParamLimits

0x2769,	// (0x0005d04d) data_form_pane_vc

0x2775,	// (0x0005d059) form_field_data_pane_vc_g1

0x46f9,	// (0x0005efdd) form_field_data_pane_vc_t1_ParamLimits

0x46f9,	// (0x0005efdd) form_field_data_pane_vc_t1

0x82f4,	// (0x00062bd8) input_focus_pane_vc_ParamLimits

0x82f4,	// (0x00062bd8) input_focus_pane_vc

0x4713,	// (0x0005eff7) button_value_adjust_pane_cp3_vc

0x471b,	// (0x0005efff) button_value_adjust_pane_cp5_vc

0x4723,	// (0x0005f007) form_field_data_pane_vc_ParamLimits

0x4723,	// (0x0005f007) form_field_data_pane_vc

0x473a,	// (0x0005f01e) form_field_data_pane_vc_cp2

0x4742,	// (0x0005f026) form_field_data_wide_pane_vc_ParamLimits

0x4742,	// (0x0005f026) form_field_data_wide_pane_vc

0x4758,	// (0x0005f03c) form_field_data_wide_pane_vc_cp2

0x4760,	// (0x0005f044) form_field_popup_pane_vc_ParamLimits

0x4760,	// (0x0005f044) form_field_popup_pane_vc

0x4777,	// (0x0005f05b) form_field_popup_wide_pane_vc_ParamLimits

0x4777,	// (0x0005f05b) form_field_popup_wide_pane_vc

0x478d,	// (0x0005f071) form_field_slider_pane_vc_ParamLimits

0x478d,	// (0x0005f071) form_field_slider_pane_vc

0x47a0,	// (0x0005f084) form_field_slider_wide_pane_vc_ParamLimits

0x47a0,	// (0x0005f084) form_field_slider_wide_pane_vc

0xca3d,	// (0x00067321) grid_touch_1_pane_ParamLimits

0xca3d,	// (0x00067321) grid_touch_1_pane

0xca51,	// (0x00067335) grid_touch_2_pane_ParamLimits

0xca51,	// (0x00067335) grid_touch_2_pane

0x486e,	// (0x0005f152) touch_pane_g1_ParamLimits

0x486e,	// (0x0005f152) touch_pane_g1

0x47d7,	// (0x0005f0bb) cell_app_pane_cp_wide_ParamLimits

0x47d7,	// (0x0005f0bb) cell_app_pane_cp_wide

0x47e8,	// (0x0005f0cc) grid_popup_fast_wide_pane_ParamLimits

0x47e8,	// (0x0005f0cc) grid_popup_fast_wide_pane

0x47fc,	// (0x0005f0e0) scroll_pane_cp19_ParamLimits

0x47fc,	// (0x0005f0e0) scroll_pane_cp19

0x7ee6,	// (0x000627ca) bg_popup_window_pane_cp20

0x4810,	// (0x0005f0f4) listscroll_popup_fast_wide_pane

0xca7b,	// (0x0006735f) grid_indicator_nsta_pane

0x4818,	// (0x0005f0fc) clock_nsta_pane_g1

0x4821,	// (0x0005f105) clock_nsta_pane_t1

0xca89,	// (0x0006736d) cell_indicator_nsta_pane_ParamLimits

0xca89,	// (0x0006736d) cell_indicator_nsta_pane

0x486e,	// (0x0005f152) cell_indicator_nsta_pane_g1

0xcaa0,	// (0x00067384) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0006a38b) cell_indicator_nsta_pane_g

0x4889,	// (0x0005f16d) clock_nsta_pane_cp

0x4891,	// (0x0005f175) indicator_nsta_pane_cp

0x4899,	// (0x0005f17d) nsta_clock_indic_pane_g1

0x7f70,	// (0x00062854) grid_indicator_pane

0xa2cf,	// (0x00064bb3) scroll_pane_cp29

0xf21f,	// (0x00069b03) indicator_nsta_pane_cp2_ParamLimits

0xf21f,	// (0x00069b03) indicator_nsta_pane_cp2

0x7f34,	// (0x00062818) main_apps_wheel_pane

0xc122,	// (0x00066a06) form_midp_field_text_pane_ParamLimits

0x2ad6,	// (0x0005d3ba) scroll_bar_cp050_ParamLimits

0x48e9,	// (0x0005f1cd) cell_indicator_pane_ParamLimits

0x48e9,	// (0x0005f1cd) cell_indicator_pane

0x4902,	// (0x0005f1e6) cell_indicator_pane_g1

0xcabf,	// (0x000673a3) grid_wheel_folder_pane_ParamLimits

0xcabf,	// (0x000673a3) grid_wheel_folder_pane

0xcacd,	// (0x000673b1) list_wheel_apps_pane_ParamLimits

0xcacd,	// (0x000673b1) list_wheel_apps_pane

0xcadb,	// (0x000673bf) main_apps_wheel_pane_g1_ParamLimits

0xcadb,	// (0x000673bf) main_apps_wheel_pane_g1

0xcae7,	// (0x000673cb) main_apps_wheel_pane_g2_ParamLimits

0xcae7,	// (0x000673cb) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0006a3a7) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0006a3a7) main_apps_wheel_pane_g

0xcaf5,	// (0x000673d9) main_apps_wheel_pane_t1_ParamLimits

0xcaf5,	// (0x000673d9) main_apps_wheel_pane_t1

0xcb09,	// (0x000673ed) list_wheel_apps_pane_g1

0xcb11,	// (0x000673f5) list_wheel_apps_pane_g2

0xcb19,	// (0x000673fd) list_wheel_apps_pane_g3

0xcb21,	// (0x00067405) list_wheel_apps_pane_g4

0xcb2b,	// (0x0006740f) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0006a3ac) list_wheel_apps_pane_g

0xf3d9,	// (0x00069cbd) navi_icon_text_pane

0xbc24,	// (0x00066508) aid_fill_nsta

0x49c9,	// (0x0005f2ad) navi_icon_text_pane_g1

0x49d5,	// (0x0005f2b9) navi_icon_text_pane_t1

0xde55,	// (0x00068739) list_set_graphic_pane_t1_ParamLimits

0xde55,	// (0x00068739) list_set_graphic_pane_t1

0x320d,	// (0x0005daf1) popup_midp_note_alarm_window_t6_ParamLimits

0x320d,	// (0x0005daf1) popup_midp_note_alarm_window_t6

0x321f,	// (0x0005db03) popup_midp_note_alarm_window_t7_ParamLimits

0x321f,	// (0x0005db03) popup_midp_note_alarm_window_t7

0x3231,	// (0x0005db15) popup_midp_note_alarm_window_t8_ParamLimits

0x3231,	// (0x0005db15) popup_midp_note_alarm_window_t8

0x3243,	// (0x0005db27) popup_midp_note_alarm_window_t9_ParamLimits

0x3243,	// (0x0005db27) popup_midp_note_alarm_window_t9

0x3255,	// (0x0005db39) popup_midp_note_alarm_window_t10_ParamLimits

0x3255,	// (0x0005db39) popup_midp_note_alarm_window_t10

0x3267,	// (0x0005db4b) popup_midp_note_alarm_window_t11_ParamLimits

0x3267,	// (0x0005db4b) popup_midp_note_alarm_window_t11

0xc46e,	// (0x00066d52) scroll_pane_cp17_ParamLimits

0xc46e,	// (0x00066d52) scroll_pane_cp17

0x082a,	// (0x0005b10e) volume_small_pane_cp_g1

0x0c07,	// (0x0005b4eb) volume_small_pane_cp_g2

0x0c10,	// (0x0005b4f4) volume_small_pane_cp_g3

0x0c19,	// (0x0005b4fd) volume_small_pane_cp_g4

0x0c22,	// (0x0005b506) volume_small_pane_cp_g5

0x0bd1,	// (0x0005b4b5) volume_small_pane_cp_g6

0x0c2b,	// (0x0005b50f) volume_small_pane_cp_g7

0x0c34,	// (0x0005b518) volume_small_pane_cp_g8

0x0c3d,	// (0x0005b521) volume_small_pane_cp_g9

0x0c46,	// (0x0005b52a) volume_small_pane_cp_g10

0x1f00,	// (0x0005c7e4) midp_ticker_pane_g1_ParamLimits

0x1f0c,	// (0x0005c7f0) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0006a037) midp_ticker_pane_g_ParamLimits

0x1f18,	// (0x0005c7fc) midp_ticker_pane_t1_ParamLimits

0xbc48,	// (0x0006652c) aid_fill_nsta_2

0x2ac2,	// (0x0005d3a6) list_form2_midp_pane

0x3bc1,	// (0x0005e4a5) midp_editing_number_pane_ParamLimits

0x3bd0,	// (0x0005e4b4) midp_ticker_pane_ParamLimits

0x49e7,	// (0x0005f2cb) form2_midp_field_pane

0x4a0b,	// (0x0005f2ef) scroll_pane_cp51

0x4a2b,	// (0x0005f30f) form2_midp_button_pane_ParamLimits

0x4a2b,	// (0x0005f30f) form2_midp_button_pane

0x4a3d,	// (0x0005f321) form2_midp_content_pane_ParamLimits

0x4a3d,	// (0x0005f321) form2_midp_content_pane

0x4a57,	// (0x0005f33b) form2_midp_field_choice_group_pane

0x4a5f,	// (0x0005f343) form2_midp_field_pane_g1

0x4a67,	// (0x0005f34b) form2_midp_field_pane_g2

0x4a6f,	// (0x0005f353) form2_midp_field_pane_g3

0x4a77,	// (0x0005f35b) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0006a3d1) form2_midp_field_pane_g

0x4a7f,	// (0x0005f363) form2_midp_gauge_slider_pane

0x4a87,	// (0x0005f36b) form2_midp_gauge_wait_pane

0x4a8f,	// (0x0005f373) form2_midp_image_pane_ParamLimits

0x4a8f,	// (0x0005f373) form2_midp_image_pane

0xcb5e,	// (0x00067442) form2_midp_label_pane_ParamLimits

0xcb5e,	// (0x00067442) form2_midp_label_pane

0xcb77,	// (0x0006745b) form2_midp_label_pane_cp_ParamLimits

0xcb77,	// (0x0006745b) form2_midp_label_pane_cp

0x4ae4,	// (0x0005f3c8) form2_midp_string_pane_ParamLimits

0x4ae4,	// (0x0005f3c8) form2_midp_string_pane

0xb270,	// (0x00065b54) form2_midp_text_pane_ParamLimits

0xb270,	// (0x00065b54) form2_midp_text_pane

0x4af6,	// (0x0005f3da) form2_midp_time_pane

0x4b06,	// (0x0005f3ea) input_focus_pane_cp51_ParamLimits

0x4b06,	// (0x0005f3ea) input_focus_pane_cp51

0xcb96,	// (0x0006747a) form2_midp_label_pane_t1_ParamLimits

0xcb96,	// (0x0006747a) form2_midp_label_pane_t1

0xb289,	// (0x00065b6d) form2_mdip_text_pane_t1_ParamLimits

0xb289,	// (0x00065b6d) form2_mdip_text_pane_t1

0xe27e,	// (0x00068b62) form2_midp_time_pane_t1

0x4b67,	// (0x0005f44b) form2_midp_gauge_slider_pane_t1

0xcbd6,	// (0x000674ba) form2_midp_gauge_slider_pane_t2

0xcbe8,	// (0x000674cc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0006a3da) form2_midp_gauge_slider_pane_t

0x4b9d,	// (0x0005f481) form2_midp_slider_pane

0x4ba9,	// (0x0005f48d) form2_midp_gauge_wait_pane_t1

0x4bb7,	// (0x0005f49b) form2_midp_wait_pane_ParamLimits

0x4bb7,	// (0x0005f49b) form2_midp_wait_pane

0xcbfa,	// (0x000674de) list_single_2graphic_pane_cp4_ParamLimits

0xcbfa,	// (0x000674de) list_single_2graphic_pane_cp4

0xc079,	// (0x0006695d) list_single_midp_graphic_pane_cp_ParamLimits

0xc079,	// (0x0006695d) list_single_midp_graphic_pane_cp

0x7ee6,	// (0x000627ca) list_highlight_pane_cp20

0x4c0a,	// (0x0005f4ee) list_single_2graphic_pane_g1_cp4

0x4213,	// (0x0005eaf7) list_single_2graphic_pane_g2_cp4

0x4c12,	// (0x0005f4f6) list_single_2graphic_pane_t1_cp4

0x7f34,	// (0x00062818) list_highlight_pane_cp21

0x4c21,	// (0x0005f505) list_single_midp_graphic_pane_g4_cp

0x4c30,	// (0x0005f514) list_single_midp_graphic_pane_t1_cp

0xcc0f,	// (0x000674f3) form2_mdip_string_pane_t1_ParamLimits

0xcc0f,	// (0x000674f3) form2_mdip_string_pane_t1

0x7ee6,	// (0x000627ca) bg_wml_button_pane_cp2

0x7edc,	// (0x000627c0) form2_midp_image_pane_g1

0xdc59,	// (0x0006853d) list_double_large_graphic_pane_g5_ParamLimits

0xdc59,	// (0x0006853d) list_double_large_graphic_pane_g5

0xa554,	// (0x00064e38) midp_form_pane_ParamLimits

0x7f34,	// (0x00062818) main_apps_wheel_pane_ParamLimits

0xad1a,	// (0x000655fe) popup_preview_window_ParamLimits

0xad1a,	// (0x000655fe) popup_preview_window

0xafe7,	// (0x000658cb) popup_touch_info_window_ParamLimits

0xafe7,	// (0x000658cb) popup_touch_info_window

0xb005,	// (0x000658e9) popup_touch_menu_window_ParamLimits

0xb005,	// (0x000658e9) popup_touch_menu_window

0x7ed2,	// (0x000627b6) bg_popup_sub_pane_cp6

0x4d4c,	// (0x0005f630) list_touch_menu_pane

0xcc85,	// (0x00067569) list_single_touch_menu_pane_ParamLimits

0xcc85,	// (0x00067569) list_single_touch_menu_pane

0xcc99,	// (0x0006757d) list_single_touch_menu_pane_t1

0x7f34,	// (0x00062818) bg_popup_sub_pane_cp7_ParamLimits

0x7f34,	// (0x00062818) bg_popup_sub_pane_cp7

0x4d78,	// (0x0005f65c) heading_sub_pane

0x4d80,	// (0x0005f664) list_touch_info_pane_ParamLimits

0x4d80,	// (0x0005f664) list_touch_info_pane

0x4d8f,	// (0x0005f673) list_single_touch_info_pane_ParamLimits

0x4d8f,	// (0x0005f673) list_single_touch_info_pane

0x4da1,	// (0x0005f685) list_single_touch_info_pane_t1

0x4daf,	// (0x0005f693) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0006a3e8) list_single_touch_info_pane_t

0x1e1f,	// (0x0005c703) bg_popup_heading_pane_cp

0x4dbd,	// (0x0005f6a1) heading_sub_pane_t1

0x2703,	// (0x0005cfe7) bg_popup_preview_window_pane_cp_ParamLimits

0x2703,	// (0x0005cfe7) bg_popup_preview_window_pane_cp

0x4d78,	// (0x0005f65c) heading_preview_pane

0x4d80,	// (0x0005f664) list_preview_pane_ParamLimits

0x4d80,	// (0x0005f664) list_preview_pane

0x4dcb,	// (0x0005f6af) popup_preview_window_g1

0x4d8f,	// (0x0005f673) list_single_preview_pane_ParamLimits

0x4d8f,	// (0x0005f673) list_single_preview_pane

0x4dd3,	// (0x0005f6b7) list_single_preview_pane_g1

0x4ddb,	// (0x0005f6bf) list_single_preview_pane_t1

0x4da1,	// (0x0005f685) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0006a3ed) list_single_preview_pane_t

0x4de9,	// (0x0005f6cd) bg_popup_heading_pane_cp2_ParamLimits

0x4de9,	// (0x0005f6cd) bg_popup_heading_pane_cp2

0x4dff,	// (0x0005f6e3) heading_preview_pane_g1

0x4e07,	// (0x0005f6eb) heading_preview_pane_t1_ParamLimits

0x4e07,	// (0x0005f6eb) heading_preview_pane_t1

0x7f87,	// (0x0006286b) soft_indicator_pane_t1_ParamLimits

0x8270,	// (0x00062b54) scroll_pane_ParamLimits

0x87bc,	// (0x000630a0) scroll_sc2_left_pane

0x87c5,	// (0x000630a9) scroll_sc2_right_pane

0x87e4,	// (0x000630c8) scroll_bg_pane_g1_ParamLimits

0x87f9,	// (0x000630dd) scroll_bg_pane_g2_ParamLimits

0x8811,	// (0x000630f5) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00069fc2) scroll_bg_pane_g_ParamLimits

0x87e4,	// (0x000630c8) scroll_handle_pane_g1_ParamLimits

0x8826,	// (0x0006310a) scroll_handle_pane_g2_ParamLimits

0x8811,	// (0x000630f5) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00069fc9) scroll_handle_pane_g_ParamLimits

0xa8c1,	// (0x000651a5) popup_choice_list_window_ParamLimits

0xa8c1,	// (0x000651a5) popup_choice_list_window

0x25c1,	// (0x0005cea5) choice_list_pane

0x2643,	// (0x0005cf27) cell_toolbar_pane_t1

0x266b,	// (0x0005cf4f) toolbar_button_pane_ParamLimits

0x3733,	// (0x0005e017) ai_gene_pane_1_t2_ParamLimits

0x3733,	// (0x0005e017) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x0006a1e5) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x0006a1e5) ai_gene_pane_1_t

0x4e24,	// (0x0005f708) scroll_sc2_left_pane_g1

0x4e24,	// (0x0005f708) scroll_sc2_right_pane_g1

0x216a,	// (0x0005ca4e) bg_popup_sub_pane_cp10

0x4e2e,	// (0x0005f712) list_choice_list_pane

0xcca7,	// (0x0006758b) list_single_choice_list_pane_ParamLimits

0xcca7,	// (0x0006758b) list_single_choice_list_pane

0xccbb,	// (0x0006759f) list_single_choice_list_pane_g1

0xa0f9,	// (0x000649dd) list_single_choice_list_pane_t1_ParamLimits

0xa0f9,	// (0x000649dd) list_single_choice_list_pane_t1

0x4e62,	// (0x0005f746) choice_list_pane_g1

0xccc3,	// (0x000675a7) choice_list_pane_t1

0x7ed2,	// (0x000627b6) input_focus_pane_cp11

0x8731,	// (0x00063015) title_pane_stacon_g2_ParamLimits

0x8731,	// (0x00063015) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00069fa8) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00069fa8) title_pane_stacon_g

0x1e1f,	// (0x0005c703) cursor_press_pane

0xa968,	// (0x0006524c) popup_fep_hwr_window_ParamLimits

0xa968,	// (0x0006524c) popup_fep_hwr_window

0x024b,	// (0x0005ab2f) popup_fep_vkb_window_ParamLimits

0x024b,	// (0x0005ab2f) popup_fep_vkb_window

0xccd1,	// (0x000675b5) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0006a416) fep_vkb_side_pane_g_ParamLimits

0x0cc3,	// (0x0005b5a7) fep_hwr_candidate_pane_ParamLimits

0x0cc3,	// (0x0005b5a7) fep_hwr_candidate_pane

0x0ced,	// (0x0005b5d1) fep_hwr_side_pane_ParamLimits

0x0ced,	// (0x0005b5d1) fep_hwr_side_pane

0x0d0d,	// (0x0005b5f1) fep_hwr_top_pane_ParamLimits

0x0d0d,	// (0x0005b5f1) fep_hwr_top_pane

0x0d25,	// (0x0005b609) fep_hwr_write_pane_ParamLimits

0x0d25,	// (0x0005b609) fep_hwr_write_pane

0xfb32,	// (0x0006a416) fep_vkb_side_pane_g

0x4e80,	// (0x0005f764) fep_hwr_top_pane_g1

0x4e92,	// (0x0005f776) fep_hwr_top_pane_g2

0x0d5f,	// (0x0005b643) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0006a3f2) fep_hwr_top_pane_g

0x0d74,	// (0x0005b658) fep_hwr_top_text_pane

0xbb61,	// (0x00066445) fep_hwr_top_text_pane_g1

0x4ec8,	// (0x0005f7ac) fep_hwr_top_text_pane_t1

0x0e6a,	// (0x0005b74e) fep_hwr_candidate_pane_g1

0x510d,	// (0x0005f9f1) fep_vkb_keypad_pane_g3_ParamLimits

0x510d,	// (0x0005f9f1) fep_vkb_keypad_pane_g3

0x5135,	// (0x0005fa19) fep_vkb_keypad_pane_g4_ParamLimits

0x5135,	// (0x0005fa19) fep_vkb_keypad_pane_g4

0x51a4,	// (0x0005fa88) fep_vkb_bottom_pane_g2_ParamLimits

0x51a4,	// (0x0005fa88) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0006a41d) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0006a41d) fep_vkb_bottom_pane_g

0x4e24,	// (0x0005f708) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0006a427) cell_vkb_side_pane_g

0x522f,	// (0x0005fb13) cell_vkb_side_pane_t1

0x523d,	// (0x0005fb21) cell_vkb_side_pane_t1_copy1

0x4e24,	// (0x0005f708) bg_fep_vkb_candidate_pane_g2

0x5369,	// (0x0005fc4d) cell_vkb_candidate_pane_ParamLimits

0x4ed6,	// (0x0005f7ba) aid_size_cell_vkb_ParamLimits

0x4ed6,	// (0x0005f7ba) aid_size_cell_vkb

0x5369,	// (0x0005fc4d) cell_vkb_candidate_pane

0x0e91,	// (0x0005b775) bg_popup_fep_shadow_pane_g1

0xcceb,	// (0x000675cf) fep_vkb_bottom_pane_ParamLimits

0xcceb,	// (0x000675cf) fep_vkb_bottom_pane

0x4f9a,	// (0x0005f87e) fep_vkb_candidate_pane_ParamLimits

0x4f9a,	// (0x0005f87e) fep_vkb_candidate_pane

0xcd10,	// (0x000675f4) fep_vkb_keypad_pane_ParamLimits

0xcd10,	// (0x000675f4) fep_vkb_keypad_pane

0xcd45,	// (0x00067629) fep_vkb_side_pane_ParamLimits

0xcd45,	// (0x00067629) fep_vkb_side_pane

0xcd81,	// (0x00067665) fep_vkb_top_pane_ParamLimits

0xcd81,	// (0x00067665) fep_vkb_top_pane

0x5066,	// (0x0005f94a) fep_vkb_top_pane_g1_ParamLimits

0x5066,	// (0x0005f94a) fep_vkb_top_pane_g1

0x5075,	// (0x0005f959) fep_vkb_top_pane_g2_ParamLimits

0x5075,	// (0x0005f959) fep_vkb_top_pane_g2

0x5084,	// (0x0005f968) fep_vkb_top_pane_g3_ParamLimits

0x5084,	// (0x0005f968) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0006a40d) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0006a40d) fep_vkb_top_pane_g

0x50a2,	// (0x0005f986) fep_vkb_top_text_pane_ParamLimits

0x50a2,	// (0x0005f986) fep_vkb_top_text_pane

0xcdb6,	// (0x0006769a) fep_vkb_side_pane_g1_ParamLimits

0xcdb6,	// (0x0006769a) fep_vkb_side_pane_g1

0x50fc,	// (0x0005f9e0) grid_vkb_side_pane_ParamLimits

0x50fc,	// (0x0005f9e0) grid_vkb_side_pane

0x0e99,	// (0x0005b77d) bg_popup_fep_shadow_pane_g2

0x0ea2,	// (0x0005b786) bg_popup_fep_shadow_pane_g3

0x0eaa,	// (0x0005b78e) bg_popup_fep_shadow_pane_g4

0x0eb3,	// (0x0005b797) bg_popup_fep_shadow_pane_g5

0x0ebd,	// (0x0005b7a1) bg_popup_fep_shadow_pane_g6

0x0ec5,	// (0x0005b7a9) bg_popup_fep_shadow_pane_g7

0x8526,	// (0x00062e0a) bg_popup_fep_shadow_pane_g8

0x5153,	// (0x0005fa37) grid_vkb_keypad_number_pane_ParamLimits

0x5153,	// (0x0005fa37) grid_vkb_keypad_number_pane

0x5163,	// (0x0005fa47) grid_vkb_keypad_pane_ParamLimits

0x5163,	// (0x0005fa47) grid_vkb_keypad_pane

0x5189,	// (0x0005fa6d) fep_vkb_bottom_pane_g1_ParamLimits

0x5189,	// (0x0005fa6d) fep_vkb_bottom_pane_g1

0x51b2,	// (0x0005fa96) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51b2,	// (0x0005fa96) grid_vkb_keypad_bottom_left_pane

0x51c7,	// (0x0005faab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x51c7,	// (0x0005faab) grid_vkb_keypad_bottom_right_pane

0x51dc,	// (0x0005fac0) fep_vkb_top_text_pane_g1

0xcdfd,	// (0x000676e1) fep_vkb_top_text_pane_t1

0xce0f,	// (0x000676f3) cell_vkb_side_pane_ParamLimits

0xce0f,	// (0x000676f3) cell_vkb_side_pane

0x4e24,	// (0x0005f708) cell_vkb_side_pane_g1

0x524b,	// (0x0005fb2f) cell_vkb_keypad_pane_ParamLimits

0x524b,	// (0x0005fb2f) cell_vkb_keypad_pane

0x52c0,	// (0x0005fba4) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0006a43a) bg_popup_fep_shadow_pane_g

0x0ed7,	// (0x0005b7bb) cell_hwr_side_pane_g1

0x0ed7,	// (0x0005b7bb) cell_hwr_side_pane_g2

0x52ca,	// (0x0005fbae) cell_vkb_keypad_pane_t1

0xce25,	// (0x00067709) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce25,	// (0x00067709) cell_vkb_keypad_bottom_left_pane

0xce3a,	// (0x0006771e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce3a,	// (0x0006771e) cell_vkb_keypad_bottom_right_pane

0x4e24,	// (0x0005f708) cell_vkb_keypad_bottom_left_pane_g1

0x4e24,	// (0x0005f708) cell_vkb_keypad_bottom_right_pane_g1

0x532e,	// (0x0005fc12) cell_vkb_keypad_number_pane_ParamLimits

0x532e,	// (0x0005fc12) cell_vkb_keypad_number_pane

0x534d,	// (0x0005fc31) cell_vkb_keypad_number_pane_g1

0x5357,	// (0x0005fc3b) cell_vkb_keypad_number_pane_g2

0x5360,	// (0x0005fc44) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0006a42c) cell_vkb_keypad_number_pane_g

0x52ca,	// (0x0005fbae) cell_vkb_keypad_number_pane_t1

0x5384,	// (0x0005fc68) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0006a44d) cell_hwr_side_pane_g

0x539d,	// (0x0005fc81) cell_hwr_side_pane_t1

0x0ee1,	// (0x0005b7c5) cell_hwr_side_pane_t1_copy1

0x0eef,	// (0x0005b7d3) cell_hwr_candidate_pane_g1

0x0f1e,	// (0x0005b802) cell_hwr_candidate_pane_t1

0x4e24,	// (0x0005f708) cell_vkb_candidate_pane_g2

0x53e1,	// (0x0005fcc5) cell_vkb_candidate_pane_t1

0x0c8a,	// (0x0005b56e) bg_popup_fep_shadow_pane_ParamLimits

0x0c8a,	// (0x0005b56e) bg_popup_fep_shadow_pane

0x0d3f,	// (0x0005b623) bg_fep_hwr_top_pane_g4

0x4ea4,	// (0x0005f788) bg_hwr_side_pane_g1_ParamLimits

0x4ea4,	// (0x0005f788) bg_hwr_side_pane_g1

0xb2bb,	// (0x00065b9f) cell_hwr_side_pane_ParamLimits

0xb2bb,	// (0x00065b9f) cell_hwr_side_pane

0x0deb,	// (0x0005b6cf) fep_hwr_write_pane_g1_ParamLimits

0x0deb,	// (0x0005b6cf) fep_hwr_write_pane_g1

0x0df8,	// (0x0005b6dc) fep_hwr_write_pane_g2_ParamLimits

0x0df8,	// (0x0005b6dc) fep_hwr_write_pane_g2

0x0e05,	// (0x0005b6e9) fep_hwr_write_pane_g3_ParamLimits

0x0e05,	// (0x0005b6e9) fep_hwr_write_pane_g3

0xb2db,	// (0x00065bbf) fep_hwr_write_pane_g4_ParamLimits

0xb2db,	// (0x00065bbf) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0006a3f9) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0006a3f9) fep_hwr_write_pane_g

0x0d3f,	// (0x0005b623) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d3f,	// (0x0005b623) bg_fep_hwr_candidate_pane_g2

0x0e28,	// (0x0005b70c) cell_hwr_candidate_pane_ParamLimits

0x0e28,	// (0x0005b70c) cell_hwr_candidate_pane

0x0e6a,	// (0x0005b74e) fep_hwr_candidate_pane_g1_ParamLimits

0x4f04,	// (0x0005f7e8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4f04,	// (0x0005f7e8) bg_popup_fep_shadow_pane_cp2

0x5094,	// (0x0005f978) fep_vkb_top_pane_g4_ParamLimits

0x5094,	// (0x0005f978) fep_vkb_top_pane_g4

0x50da,	// (0x0005f9be) fep_vkb_side_pane_g2_ParamLimits

0x50da,	// (0x0005f9be) fep_vkb_side_pane_g2

0x9e1f,	// (0x00064703) list_setting_pane_t4_ParamLimits

0x9e1f,	// (0x00064703) list_setting_pane_t4

0x9eb9,	// (0x0006479d) list_setting_number_pane_t5_ParamLimits

0x9eb9,	// (0x0006479d) list_setting_number_pane_t5

0xbb98,	// (0x0006647c) list_double_heading_pane_cp2_ParamLimits

0xbb98,	// (0x0006647c) list_double_heading_pane_cp2

0x3dda,	// (0x0005e6be) list_double_heading_pane_g1_cp2_ParamLimits

0x3dda,	// (0x0005e6be) list_double_heading_pane_g1_cp2

0x53ef,	// (0x0005fcd3) list_double_heading_pane_g2_cp2_ParamLimits

0x53ef,	// (0x0005fcd3) list_double_heading_pane_g2_cp2

0x5403,	// (0x0005fce7) list_double_heading_pane_t1_cp2_ParamLimits

0x5403,	// (0x0005fce7) list_double_heading_pane_t1_cp2

0x5419,	// (0x0005fcfd) list_double_heading_pane_t2_cp2_ParamLimits

0x5419,	// (0x0005fcfd) list_double_heading_pane_t2_cp2

0x7eca,	// (0x000627ae) aid_value_unit2

0xefb0,	// (0x00069894) popup_preview_fixed_window

0x806c,	// (0x00062950) bg_popup_preview_window_pane_cp02

0x542b,	// (0x0005fd0f) list_preview_fixed_pane

0x5471,	// (0x0005fd55) list_empty_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_empty_pane_fp

0x5471,	// (0x0005fd55) list_single_cale_day_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_cale_day_pane_fp

0x5471,	// (0x0005fd55) list_single_graphic_heading_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_graphic_heading_pane_fp

0x5471,	// (0x0005fd55) list_single_graphic_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_graphic_pane_fp

0x5471,	// (0x0005fd55) list_single_heading_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_heading_pane_fp

0x5471,	// (0x0005fd55) list_single_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_pane_fp

0x5487,	// (0x0005fd6b) list_single_pane_fp_g1_ParamLimits

0x5487,	// (0x0005fd6b) list_single_pane_fp_g1

0x5493,	// (0x0005fd77) list_single_pane_fp_g2_ParamLimits

0x5493,	// (0x0005fd77) list_single_pane_fp_g2

0x549f,	// (0x0005fd83) list_single_pane_fp_g3_ParamLimits

0x549f,	// (0x0005fd83) list_single_pane_fp_g3

0x54b3,	// (0x0005fd97) list_single_pane_fp_g4_ParamLimits

0x54b3,	// (0x0005fd97) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0006a460) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0006a460) list_single_pane_fp_g

0xe29e,	// (0x00068b82) list_single_pane_fp_t1_ParamLimits

0xe29e,	// (0x00068b82) list_single_pane_fp_t1

0xe2b5,	// (0x00068b99) list_single_graphic_pane_fp_g1_ParamLimits

0xe2b5,	// (0x00068b99) list_single_graphic_pane_fp_g1

0x5487,	// (0x0005fd6b) list_single_graphic_pane_fp_g2_ParamLimits

0x5487,	// (0x0005fd6b) list_single_graphic_pane_fp_g2

0x5493,	// (0x0005fd77) list_single_graphic_pane_fp_g3_ParamLimits

0x5493,	// (0x0005fd77) list_single_graphic_pane_fp_g3

0x549f,	// (0x0005fd83) list_single_graphic_pane_fp_g4_ParamLimits

0x549f,	// (0x0005fd83) list_single_graphic_pane_fp_g4

0x54b3,	// (0x0005fd97) list_single_graphic_pane_fp_g5_ParamLimits

0x54b3,	// (0x0005fd97) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a469) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a469) list_single_graphic_pane_fp_g

0xe2c1,	// (0x00068ba5) list_single_graphic_pane_fp_t1_ParamLimits

0xe2c1,	// (0x00068ba5) list_single_graphic_pane_fp_t1

0xe2b5,	// (0x00068b99) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe2b5,	// (0x00068b99) list_single_graphic_heading_pane_fp_g1

0x5487,	// (0x0005fd6b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5487,	// (0x0005fd6b) list_single_graphic_heading_pane_fp_g2

0x5493,	// (0x0005fd77) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5493,	// (0x0005fd77) list_single_graphic_heading_pane_fp_g3

0x549f,	// (0x0005fd83) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x549f,	// (0x0005fd83) list_single_graphic_heading_pane_fp_g4

0x54b3,	// (0x0005fd97) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x54b3,	// (0x0005fd97) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a469) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a469) list_single_graphic_heading_pane_fp_g

0xe2d7,	// (0x00068bbb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe2d7,	// (0x00068bbb) list_single_graphic_heading_pane_fp_t1

0xe2ed,	// (0x00068bd1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe2ed,	// (0x00068bd1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0006a474) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0006a474) list_single_graphic_heading_pane_fp_t

0xe2ff,	// (0x00068be3) list_single_cale_day_pane_fp_g1_ParamLimits

0xe2ff,	// (0x00068be3) list_single_cale_day_pane_fp_g1

0x54bf,	// (0x0005fda3) list_single_cale_day_pane_fp_g2_ParamLimits

0x54bf,	// (0x0005fda3) list_single_cale_day_pane_fp_g2

0x3d05,	// (0x0005e5e9) list_single_cale_day_pane_fp_g3_ParamLimits

0x3d05,	// (0x0005e5e9) list_single_cale_day_pane_fp_g3

0x3d2d,	// (0x0005e611) list_single_cale_day_pane_fp_g4_ParamLimits

0x3d2d,	// (0x0005e611) list_single_cale_day_pane_fp_g4

0x3d51,	// (0x0005e635) list_single_cale_day_pane_fp_g5_ParamLimits

0x3d51,	// (0x0005e635) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0006a479) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0006a479) list_single_cale_day_pane_fp_g

0xe337,	// (0x00068c1b) list_single_cale_day_pane_fp_t1_ParamLimits

0xe337,	// (0x00068c1b) list_single_cale_day_pane_fp_t1

0xe35d,	// (0x00068c41) list_single_cale_day_pane_fp_t2_ParamLimits

0xe35d,	// (0x00068c41) list_single_cale_day_pane_fp_t2

0xe376,	// (0x00068c5a) list_single_cale_day_pane_fp_t3_ParamLimits

0xe376,	// (0x00068c5a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0006a484) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0006a484) list_single_cale_day_pane_fp_t

0x5487,	// (0x0005fd6b) list_empty_pane_fp_g1_ParamLimits

0x5487,	// (0x0005fd6b) list_empty_pane_fp_g1

0xe38f,	// (0x00068c73) list_empty_pane_fp_t1

0xe39d,	// (0x00068c81) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0006a48b) list_empty_pane_fp_t

0x5487,	// (0x0005fd6b) list_single_heading_pane_fp_g1_ParamLimits

0x5487,	// (0x0005fd6b) list_single_heading_pane_fp_g1

0x5493,	// (0x0005fd77) list_single_heading_pane_fp_g2_ParamLimits

0x5493,	// (0x0005fd77) list_single_heading_pane_fp_g2

0x549f,	// (0x0005fd83) list_single_heading_pane_fp_g3_ParamLimits

0x549f,	// (0x0005fd83) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0006a490) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0006a490) list_single_heading_pane_fp_g

0xe3ab,	// (0x00068c8f) list_single_heading_pane_fp_t1_ParamLimits

0xe3ab,	// (0x00068c8f) list_single_heading_pane_fp_t1

0xe3bd,	// (0x00068ca1) list_single_heading_pane_fp_t2_ParamLimits

0xe3bd,	// (0x00068ca1) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0006a497) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0006a497) list_single_heading_pane_fp_t

0xa145,	// (0x00064a29) aid_size_cell_fast

0x8041,	// (0x00062925) soft_indicator_pane_cp1_t1

0xa14e,	// (0x00064a32) cell_app_pane_cp2_ParamLimits

0xa14e,	// (0x00064a32) cell_app_pane_cp2

0x0cac,	// (0x0005b590) fep_hwr_candidate_drop_down_list_pane

0x0e84,	// (0x0005b768) fep_hwr_candidate_pane_g3_ParamLimits

0x0e84,	// (0x0005b768) fep_hwr_candidate_pane_g3

0xe291,	// (0x00068b75) fep_hwr_candidate_pane_g4_ParamLimits

0xe291,	// (0x00068b75) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0006a406) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0006a406) fep_hwr_candidate_pane_g

0x4f89,	// (0x0005f86d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4f89,	// (0x0005f86d) fep_vkb_candidate_drop_down_list_pane

0x538c,	// (0x0005fc70) fep_vkb_candidate_pane_g3

0x5394,	// (0x0005fc78) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0006a433) fep_vkb_candidate_pane_g

0x0eef,	// (0x0005b7d3) cell_hwr_candidate_pane_g1_ParamLimits

0x0efd,	// (0x0005b7e1) cell_hwr_candidate_pane_g3_ParamLimits

0x0efd,	// (0x0005b7e1) cell_hwr_candidate_pane_g3

0x5e52,	// (0x00060736) cell_hwr_candidate_pane_g4_ParamLimits

0x5e52,	// (0x00060736) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0006a452) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0006a452) cell_hwr_candidate_pane_g

0x53ab,	// (0x0005fc8f) cell_vkb_candidate_pane_g3_ParamLimits

0x53ab,	// (0x0005fc8f) cell_vkb_candidate_pane_g3

0x53c6,	// (0x0005fcaa) cell_vkb_candidate_pane_g4_ParamLimits

0x53c6,	// (0x0005fcaa) cell_vkb_candidate_pane_g4

0xce55,	// (0x00067739) cell_app_pane_cp2_g1_ParamLimits

0xce55,	// (0x00067739) cell_app_pane_cp2_g1

0x54e9,	// (0x0005fdcd) cell_app_pane_cp2_g2_ParamLimits

0x54e9,	// (0x0005fdcd) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0006a49c) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0006a49c) cell_app_pane_cp2_g

0x54f5,	// (0x0005fdd9) cell_app_pane_cp2_t1_ParamLimits

0x54f5,	// (0x0005fdd9) cell_app_pane_cp2_t1

0x82f4,	// (0x00062bd8) grid_highlight_pane_cp1_ParamLimits

0x82f4,	// (0x00062bd8) grid_highlight_pane_cp1

0x0f3c,	// (0x0005b820) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f3c,	// (0x0005b820) cell_hwr_candidate_pane_cp1

0x0eef,	// (0x0005b7d3) fep_hwr_candidate_drop_down_list_pane_g1

0x0f5b,	// (0x0005b83f) fep_hwr_candidate_drop_down_list_pane_g2

0x0f68,	// (0x0005b84c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0006a4a1) fep_hwr_candidate_drop_down_list_pane_g

0x0f75,	// (0x0005b859) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f7e,	// (0x0005b862) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f7e,	// (0x0005b862) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f8b,	// (0x0005b86f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f8b,	// (0x0005b86f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f98,	// (0x0005b87c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f98,	// (0x0005b87c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0fa5,	// (0x0005b889) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0fa5,	// (0x0005b889) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0fc0,	// (0x0005b8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0fc0,	// (0x0005b8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fdb,	// (0x0005b8bf) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fdb,	// (0x0005b8bf) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ff6,	// (0x0005b8da) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ff6,	// (0x0005b8da) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1011,	// (0x0005b8f5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1011,	// (0x0005b8f5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0006a4a8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0006a4a8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5507,	// (0x0005fdeb) cell_vkb_candidate_pane_cp1_ParamLimits

0x5507,	// (0x0005fdeb) cell_vkb_candidate_pane_cp1

0x5094,	// (0x0005f978) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5094,	// (0x0005f978) fep_vkb_candidate_drop_down_list_pane_g1

0x5527,	// (0x0005fe0b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5527,	// (0x0005fe0b) fep_vkb_candidate_drop_down_list_pane_g2

0x5534,	// (0x0005fe18) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5534,	// (0x0005fe18) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0006a4b9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0006a4b9) fep_vkb_candidate_drop_down_list_pane_g

0x5541,	// (0x0005fe25) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5541,	// (0x0005fe25) fep_vkb_candidate_drop_down_list_scroll_pane

0x554e,	// (0x0005fe32) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x554e,	// (0x0005fe32) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x555b,	// (0x0005fe3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x555b,	// (0x0005fe3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5567,	// (0x0005fe4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5567,	// (0x0005fe4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5573,	// (0x0005fe57) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5573,	// (0x0005fe57) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5594,	// (0x0005fe78) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5594,	// (0x0005fe78) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x55b5,	// (0x0005fe99) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55b5,	// (0x0005fe99) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x55d6,	// (0x0005feba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x55d6,	// (0x0005feba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x55f7,	// (0x0005fedb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55f7,	// (0x0005fedb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0006a4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0006a4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x94be,	// (0x00063da2) title_pane_g1_ParamLimits

0x94d1,	// (0x00063db5) title_pane_g2_ParamLimits

0xf54e,	// (0x00069e32) title_pane_g_ParamLimits

0xbb51,	// (0x00066435) aid_call2_pane

0xbb59,	// (0x0006643d) aid_call_pane

0xbb61,	// (0x00066445) popup_clock_analogue_window_g1

0xbb61,	// (0x00066445) popup_clock_analogue_window_g2

0xf163,	// (0x00069a47) popup_clock_analogue_window_g3

0xf16c,	// (0x00069a50) popup_clock_analogue_window_g4

0x7edc,	// (0x000627c0) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00069fd7) popup_clock_analogue_window_g

0xf174,	// (0x00069a58) popup_clock_analogue_window_t1

0xf182,	// (0x00069a66) clock_digital_number_pane_ParamLimits

0xf182,	// (0x00069a66) clock_digital_number_pane

0xf18e,	// (0x00069a72) clock_digital_number_pane_cp02_ParamLimits

0xf18e,	// (0x00069a72) clock_digital_number_pane_cp02

0xf19a,	// (0x00069a7e) clock_digital_number_pane_cp03_ParamLimits

0xf19a,	// (0x00069a7e) clock_digital_number_pane_cp03

0xf1a6,	// (0x00069a8a) clock_digital_number_pane_cp04_ParamLimits

0xf1a6,	// (0x00069a8a) clock_digital_number_pane_cp04

0xf1b2,	// (0x00069a96) clock_digital_separator_pane_ParamLimits

0xf1b2,	// (0x00069a96) clock_digital_separator_pane

0xf1be,	// (0x00069aa2) popup_clock_digital_window_t1_ParamLimits

0xf1be,	// (0x00069aa2) popup_clock_digital_window_t1

0x7edc,	// (0x000627c0) clock_digital_number_pane_g1

0x7edc,	// (0x000627c0) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00069fe2) clock_digital_number_pane_g

0x7edc,	// (0x000627c0) clock_digital_separator_pane_g1

0x7edc,	// (0x000627c0) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00069fe2) clock_digital_separator_pane_g

0xbc24,	// (0x00066508) aid_fill_nsta_ParamLimits

0xbd5a,	// (0x0006663e) indicator_nsta_pane_ParamLimits

0x2451,	// (0x0005cd35) popup_clock_analogue_window

0x2451,	// (0x0005cd35) popup_clock_digital_window

0xca7b,	// (0x0006735f) grid_indicator_nsta_pane_ParamLimits

0x482f,	// (0x0005f113) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0006a386) clock_nsta_pane_t

0xf144,	// (0x00069a28) aid_size_max_handle

0xa22c,	// (0x00064b10) aid_size_min_handle

0x1e1f,	// (0x0005c703) editor_scroll_pane

0x5612,	// (0x0005fef6) ex_editor_pane

0x85d5,	// (0x00062eb9) scroll_pane_cp13

0x829c,	// (0x00062b80) scroll_pane_cp14

0xbb90,	// (0x00066474) scroll_pane_cp36

0xa2f6,	// (0x00064bda) list_single_graphic_hl_pane_cp2_ParamLimits

0xa2f6,	// (0x00064bda) list_single_graphic_hl_pane_cp2

0xc867,	// (0x0006714b) list_single_graphic_hl_pane_ParamLimits

0xc867,	// (0x0006714b) list_single_graphic_hl_pane

0xb2f0,	// (0x00065bd4) aid_size_min_hl_cp1

0x561a,	// (0x0005fefe) list_highlight_pane_cp34_ParamLimits

0x561a,	// (0x0005fefe) list_highlight_pane_cp34

0x562b,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_ParamLimits

0x562b,	// (0x0005ff0f) list_single_graphic_hl_pane_g1

0xb2f9,	// (0x00065bdd) list_single_graphic_hl_pane_g2_ParamLimits

0xb2f9,	// (0x00065bdd) list_single_graphic_hl_pane_g2

0xb2f9,	// (0x00065bdd) list_single_graphic_hl_pane_g3_ParamLimits

0xb2f9,	// (0x00065bdd) list_single_graphic_hl_pane_g3

0xf48a,	// (0x00069d6e) list_single_graphic_hl_pane_g4_ParamLimits

0xf48a,	// (0x00069d6e) list_single_graphic_hl_pane_g4

0x5668,	// (0x0005ff4c) list_single_graphic_hl_pane_g5_ParamLimits

0x5668,	// (0x0005ff4c) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0006a4d1) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0006a4d1) list_single_graphic_hl_pane_g

0xb305,	// (0x00065be9) list_single_graphic_hl_pane_t1_ParamLimits

0xb305,	// (0x00065be9) list_single_graphic_hl_pane_t1

0x5638,	// (0x0005ff1c) aid_size_min_hl_cp2

0x5641,	// (0x0005ff25) list_highlight_pane_cp34_cp2_ParamLimits

0x5641,	// (0x0005ff25) list_highlight_pane_cp34_cp2

0x562b,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x562b,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_cp2

0x564e,	// (0x0005ff32) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x564e,	// (0x0005ff32) list_single_graphic_hl_pane_g2_cp2

0xce73,	// (0x00067757) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xce73,	// (0x00067757) list_single_graphic_hl_pane_g3_cp2

0xf48a,	// (0x00069d6e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf48a,	// (0x00069d6e) list_single_graphic_hl_pane_g4_cp2

0x5668,	// (0x0005ff4c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5668,	// (0x0005ff4c) list_single_graphic_hl_pane_g5_cp2

0xa725,	// (0x00065009) control_pane_g4_ParamLimits

0xa725,	// (0x00065009) control_pane_g4

0x216a,	// (0x0005ca4e) bg_popup_sub_pane_cp10_ParamLimits

0x4e2e,	// (0x0005f712) list_choice_list_pane_ParamLimits

0x4e3d,	// (0x0005f721) scroll_pane_cp23

0x806c,	// (0x00062950) bg_popup_preview_window_pane_cp02_ParamLimits

0x542b,	// (0x0005fd0f) list_preview_fixed_pane_ParamLimits

0x5441,	// (0x0005fd25) list_preview_fixed_pane_cp_ParamLimits

0x5441,	// (0x0005fd25) list_preview_fixed_pane_cp

0x544d,	// (0x0005fd31) popup_preview_fixed_window_g1_ParamLimits

0x544d,	// (0x0005fd31) popup_preview_fixed_window_g1

0x5459,	// (0x0005fd3d) popup_preview_fixed_window_g2_ParamLimits

0x5459,	// (0x0005fd3d) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0006a459) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0006a459) popup_preview_fixed_window_g

0xf0b8,	// (0x0006999c) aid_navi_side_left_pane_ParamLimits

0xf0cd,	// (0x000699b1) aid_navi_side_right_pane_ParamLimits

0xf0e5,	// (0x000699c9) navi_icon_pane_stacon_ParamLimits

0xf0f9,	// (0x000699dd) navi_navi_pane_stacon_ParamLimits

0xf0e5,	// (0x000699c9) navi_text_pane_stacon_ParamLimits

0xeed5,	// (0x000697b9) main_text_info_pane

0x5692,	// (0x0005ff76) listscroll_text_info_pane

0x569a,	// (0x0005ff7e) list_text_info_pane_ParamLimits

0x569a,	// (0x0005ff7e) list_text_info_pane

0x56a9,	// (0x0005ff8d) scroll_pane_cp24_ParamLimits

0x56a9,	// (0x0005ff8d) scroll_pane_cp24

0xce81,	// (0x00067765) list_text_info_pane_t1_ParamLimits

0xce81,	// (0x00067765) list_text_info_pane_t1

0xa8dd,	// (0x000651c1) popup_fast_swap2_window_ParamLimits

0xa8dd,	// (0x000651c1) popup_fast_swap2_window

0x56fb,	// (0x0005ffdf) aid_size_cell_fast2

0x7ed2,	// (0x000627b6) bg_popup_window_pane_cp17

0x2af6,	// (0x0005d3da) heading_pane_cp2

0x81a0,	// (0x00062a84) listscroll_fast2_pane

0x5705,	// (0x0005ffe9) grid_fast2_pane

0x570f,	// (0x0005fff3) listscroll_fast2_pane_g1

0x5717,	// (0x0005fffb) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0006a4dc) listscroll_fast2_pane_g

0x85d5,	// (0x00062eb9) scroll_pane_cp26

0x5721,	// (0x00060005) cell_fast2_pane_ParamLimits

0x5721,	// (0x00060005) cell_fast2_pane

0x5736,	// (0x0006001a) cell_fast2_pane_g1

0x573f,	// (0x00060023) cell_fast2_pane_g2

0x5748,	// (0x0006002c) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0006a4e1) cell_fast2_pane_g

0x81d3,	// (0x00062ab7) grid_highlight_pane_cp9

0x010f,	// (0x0005a9f3) main_eswt_pane_ParamLimits

0x010f,	// (0x0005a9f3) main_eswt_pane

0x56be,	// (0x0005ffa2) list_single_text_info_pane

0x5750,	// (0x00060034) eswt_ctrl_button_pane

0x5750,	// (0x00060034) eswt_ctrl_canvas_pane

0xce9d,	// (0x00067781) eswt_ctrl_combo_pane

0x5750,	// (0x00060034) eswt_ctrl_default_pane

0x5750,	// (0x00060034) eswt_ctrl_label_pane

0x5760,	// (0x00060044) eswt_ctrl_wait_pane

0xcea5,	// (0x00067789) eswt_shell_pane

0x7ed2,	// (0x000627b6) listscroll_eswt_app_pane

0x5788,	// (0x0006006c) popup_eswt_tasktip_window_ParamLimits

0x5788,	// (0x0006006c) popup_eswt_tasktip_window

0x2703,	// (0x0005cfe7) bg_popup_window_pane_cp18

0x5799,	// (0x0006007d) eswt_control_pane_g1_ParamLimits

0x5799,	// (0x0006007d) eswt_control_pane_g1

0x57a6,	// (0x0006008a) eswt_control_pane_g2_ParamLimits

0x57a6,	// (0x0006008a) eswt_control_pane_g2

0x57b3,	// (0x00060097) eswt_control_pane_g3_ParamLimits

0x57b3,	// (0x00060097) eswt_control_pane_g3

0x57c0,	// (0x000600a4) eswt_control_pane_g4_ParamLimits

0x57c0,	// (0x000600a4) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0006a4e8) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0006a4e8) eswt_control_pane_g

0x82f4,	// (0x00062bd8) bg_button_pane_ParamLimits

0x82f4,	// (0x00062bd8) bg_button_pane

0x81e8,	// (0x00062acc) common_borders_pane_copy2_ParamLimits

0x81e8,	// (0x00062acc) common_borders_pane_copy2

0x57cd,	// (0x000600b1) control_button_pane_g1_ParamLimits

0x57cd,	// (0x000600b1) control_button_pane_g1

0x57d9,	// (0x000600bd) control_button_pane_g2_ParamLimits

0x57d9,	// (0x000600bd) control_button_pane_g2

0x57e5,	// (0x000600c9) control_button_pane_g3_ParamLimits

0x57e5,	// (0x000600c9) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0006a4f1) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0006a4f1) control_button_pane_g

0x57f9,	// (0x000600dd) control_button_pane_t1

0x5807,	// (0x000600eb) control_button_pane_t2

0x0001,

0xfc14,	// (0x0006a4f8) control_button_pane_t

0x2677,	// (0x0005cf5b) bg_button_pane_g1

0x2687,	// (0x0005cf6b) bg_button_pane_g2

0x267f,	// (0x0005cf63) bg_button_pane_g3

0x2697,	// (0x0005cf7b) bg_button_pane_g4

0x268f,	// (0x0005cf73) bg_button_pane_g5

0x269f,	// (0x0005cf83) bg_button_pane_g6

0x26a7,	// (0x0005cf8b) bg_button_pane_g7

0x26b7,	// (0x0005cf9b) bg_button_pane_g8

0x26af,	// (0x0005cf93) bg_button_pane_g9

0x0008,

0xf855,	// (0x0006a139) bg_button_pane_g

0x4de9,	// (0x0005f6cd) common_borders_pane_ParamLimits

0x4de9,	// (0x0005f6cd) common_borders_pane

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy1_ParamLimits

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy1

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy1_ParamLimits

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy1

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy1_ParamLimits

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy1

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy1_ParamLimits

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy1

0x4e24,	// (0x0005f708) bg_eswt_ctrl_canvas_pane_g1

0x4de9,	// (0x0005f6cd) common_borders_pane_cp2_ParamLimits

0x4de9,	// (0x0005f6cd) common_borders_pane_cp2

0x4de9,	// (0x0005f6cd) common_borders_pane_cp3_ParamLimits

0x4de9,	// (0x0005f6cd) common_borders_pane_cp3

0x5815,	// (0x000600f9) separator_horizontal_pane

0x581d,	// (0x00060101) separator_vertical_pane

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy2_ParamLimits

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy2

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy2_ParamLimits

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy2

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy2_ParamLimits

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy2

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy2_ParamLimits

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy2

0x7ed2,	// (0x000627b6) common_borders_pane_cp4

0x5826,	// (0x0006010a) separator_horizontal_pane_g1

0x582f,	// (0x00060113) separator_horizontal_pane_g2

0x5838,	// (0x0006011c) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0006a4fd) separator_horizontal_pane_g

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy3_ParamLimits

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy3

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy3_ParamLimits

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy3

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy3_ParamLimits

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy3

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy3_ParamLimits

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy3

0x7ed2,	// (0x000627b6) common_borders_pane_cp5

0x5841,	// (0x00060125) separator_vertical_pane_g1

0x584a,	// (0x0006012e) separator_vertical_pane_g2

0x5853,	// (0x00060137) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0006a504) separator_vertical_pane_g

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy4_ParamLimits

0x5799,	// (0x0006007d) eswt_control_pane_g1_copy4

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy4_ParamLimits

0x57a6,	// (0x0006008a) eswt_control_pane_g2_copy4

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy4_ParamLimits

0x57b3,	// (0x00060097) eswt_control_pane_g3_copy4

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy4_ParamLimits

0x57c0,	// (0x000600a4) eswt_control_pane_g4_copy4

0xcec5,	// (0x000677a9) eswt_ctrl_combo_button_pane

0xcecd,	// (0x000677b1) eswt_ctrl_input_pane

0xced5,	// (0x000677b9) popup_choice_list_window_cp70

0xcedd,	// (0x000677c1) eswt_ctrl_input_pane_t1

0x7ed2,	// (0x000627b6) input_focus_pane_cp70

0x4de9,	// (0x0005f6cd) bg_button_pane_cp70_ParamLimits

0x4de9,	// (0x0005f6cd) bg_button_pane_cp70

0xceeb,	// (0x000677cf) eswt_ctrl_combo_button_pane_g1

0x588a,	// (0x0006016e) wait_bar_pane_cp70

0x2703,	// (0x0005cfe7) bg_popup_window_pane_cp70_ParamLimits

0x2703,	// (0x0005cfe7) bg_popup_window_pane_cp70

0x5892,	// (0x00060176) popup_eswt_tasktip_window_t1

0x58a8,	// (0x0006018c) wait_bar_pane_cp71_ParamLimits

0x58a8,	// (0x0006018c) wait_bar_pane_cp71

0x58b4,	// (0x00060198) grid_eswt_app_pane

0x87bc,	// (0x000630a0) scroll_pane_cp70

0xcef3,	// (0x000677d7) cell_eswt_app_pane_ParamLimits

0xcef3,	// (0x000677d7) cell_eswt_app_pane

0xcf1d,	// (0x00067801) cell_eswt_app_pane_g1_ParamLimits

0xcf1d,	// (0x00067801) cell_eswt_app_pane_g1

0xcf4c,	// (0x00067830) cell_eswt_app_pane_g2_ParamLimits

0xcf4c,	// (0x00067830) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0006a50b) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0006a50b) cell_eswt_app_pane_g

0xcf70,	// (0x00067854) cell_eswt_app_pane_t1_ParamLimits

0xcf70,	// (0x00067854) cell_eswt_app_pane_t1

0x5972,	// (0x00060256) grid_highlight_pane_cp70_ParamLimits

0x5972,	// (0x00060256) grid_highlight_pane_cp70

0xf42e,	// (0x00069d12) set_content_pane_g1

0xa6b7,	// (0x00064f9b) status_small_volume_pane

0xb31b,	// (0x00065bff) status_small_volume_pane_g1

0xb323,	// (0x00065c07) volume_small2_pane

0xb32c,	// (0x00065c10) volume_small2_pane_g1

0xb335,	// (0x00065c19) volume_small2_pane_g2

0xb33e,	// (0x00065c22) volume_small2_pane_g3

0xb347,	// (0x00065c2b) volume_small2_pane_g4

0xb350,	// (0x00065c34) volume_small2_pane_g5

0xb359,	// (0x00065c3d) volume_small2_pane_g6

0xb362,	// (0x00065c46) volume_small2_pane_g7

0xb36b,	// (0x00065c4f) volume_small2_pane_g8

0xb374,	// (0x00065c58) volume_small2_pane_g9

0xb37d,	// (0x00065c61) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0006a510) volume_small2_pane_g

0x51dc,	// (0x0005fac0) fep_vkb_top_text_pane_g1_ParamLimits

0xcdfd,	// (0x000676e1) fep_vkb_top_text_pane_t1_ParamLimits

0x5465,	// (0x0005fd49) popup_preview_fixed_window_g3_ParamLimits

0x5465,	// (0x0005fd49) popup_preview_fixed_window_g3

0xaf7a,	// (0x0006585e) popup_toolbar_trans_pane

0xc6db,	// (0x00066fbf) aid_height_set_list_ParamLimits

0x3a3e,	// (0x0005e322) aid_size_parent_ParamLimits

0x216a,	// (0x0005ca4e) list_highlight_pane_cp2_ParamLimits

0xf42e,	// (0x00069d12) set_content_pane_g1_ParamLimits

0xc879,	// (0x0006715d) list_single_image_pane_ParamLimits

0xc879,	// (0x0006715d) list_single_image_pane

0xcfa2,	// (0x00067886) aid_size_cell_image_ParamLimits

0xcfa2,	// (0x00067886) aid_size_cell_image

0xcfaf,	// (0x00067893) grid_single_image_pane_ParamLimits

0xcfaf,	// (0x00067893) grid_single_image_pane

0x5493,	// (0x0005fd77) list_single_image_pane_g1_ParamLimits

0x5493,	// (0x0005fd77) list_single_image_pane_g1

0x549f,	// (0x0005fd83) list_single_image_pane_g2_ParamLimits

0x549f,	// (0x0005fd83) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0006a525) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0006a525) list_single_image_pane_g

0x5999,	// (0x0006027d) list_single_image_pane_t1_ParamLimits

0x5999,	// (0x0006027d) list_single_image_pane_t1

0xcfbb,	// (0x0006789f) cell_image_list_pane_ParamLimits

0xcfbb,	// (0x0006789f) cell_image_list_pane

0xcfcf,	// (0x000678b3) cell_image_list_pane_g1

0xcfd8,	// (0x000678bc) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0006a52a) cell_image_list_pane_g

0xcfe1,	// (0x000678c5) aid_size_cell_tb_trans_pane

0x82f4,	// (0x00062bd8) bg_tb_trans_pane

0xcff3,	// (0x000678d7) grid_tb_trans_pane

0x2677,	// (0x0005cf5b) bg_tb_trans_pane_g1

0x2687,	// (0x0005cf6b) bg_tb_trans_pane_g2

0x267f,	// (0x0005cf63) bg_tb_trans_pane_g3

0x2697,	// (0x0005cf7b) bg_tb_trans_pane_g4

0x268f,	// (0x0005cf73) bg_tb_trans_pane_g5

0x26b7,	// (0x0005cf9b) bg_tb_trans_pane_g6

0x26af,	// (0x0005cf93) bg_tb_trans_pane_g7

0x269f,	// (0x0005cf83) bg_tb_trans_pane_g8

0x26a7,	// (0x0005cf8b) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0006a52f) bg_tb_trans_pane_g

0xd007,	// (0x000678eb) cell_toolbar_trans_pane_ParamLimits

0xd007,	// (0x000678eb) cell_toolbar_trans_pane

0x4e24,	// (0x0005f708) cell_toolbar_trans_pane_g1

0xcb42,	// (0x00067426) list_form2_midp_pane_t1

0xcb50,	// (0x00067434) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0006a3cc) list_form2_midp_pane_t

0x4a0b,	// (0x0005f2ef) scroll_pane_cp51_ParamLimits

0x4bc7,	// (0x0005f4ab) form2_midp_wait_pane_g1

0x4bd0,	// (0x0005f4b4) form2_midp_wait_pane_g2

0x4bd9,	// (0x0005f4bd) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0006a3e1) form2_midp_wait_pane_g

0x7f34,	// (0x00062818) list_highlight_pane_cp21_ParamLimits

0x4c21,	// (0x0005f505) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4c30,	// (0x0005f514) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_2graphic_im_pane_ParamLimits

0x3df5,	// (0x0005e6d9) list_single_2graphic_im_pane

0xd02d,	// (0x00067911) list_single_2graphic_im_pane_g1_ParamLimits

0xd02d,	// (0x00067911) list_single_2graphic_im_pane_g1

0xd03e,	// (0x00067922) list_single_2graphic_im_pane_g2_ParamLimits

0xd03e,	// (0x00067922) list_single_2graphic_im_pane_g2

0xd04a,	// (0x0006792e) list_single_2graphic_im_pane_g3_ParamLimits

0xd04a,	// (0x0006792e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0006a542) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0006a542) list_single_2graphic_im_pane_g

0xd05e,	// (0x00067942) list_single_2graphic_im_pane_t1_ParamLimits

0xd05e,	// (0x00067942) list_single_2graphic_im_pane_t1

0x5471,	// (0x0005fd55) list_single_graphic_2heading_pane_fp_ParamLimits

0x5471,	// (0x0005fd55) list_single_graphic_2heading_pane_fp

0xe2b5,	// (0x00068b99) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe2b5,	// (0x00068b99) list_single_graphic_2heading_pane_fp_g1

0x5487,	// (0x0005fd6b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5487,	// (0x0005fd6b) list_single_graphic_2heading_pane_fp_g2

0x5493,	// (0x0005fd77) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5493,	// (0x0005fd77) list_single_graphic_2heading_pane_fp_g3

0x549f,	// (0x0005fd83) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x549f,	// (0x0005fd83) list_single_graphic_2heading_pane_fp_g4

0x54b3,	// (0x0005fd97) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x54b3,	// (0x0005fd97) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a469) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a469) list_single_graphic_2heading_pane_fp_g

0xe3d3,	// (0x00068cb7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe3d3,	// (0x00068cb7) list_single_graphic_2heading_pane_fp_t1

0xe2ed,	// (0x00068bd1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe2ed,	// (0x00068bd1) list_single_graphic_2heading_pane_fp_t2

0xe3e9,	// (0x00068ccd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe3e9,	// (0x00068ccd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0006a54b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0006a54b) list_single_graphic_2heading_pane_fp_t

0x4eb0,	// (0x0005f794) fep_hwr_write_pane_g5_ParamLimits

0x4eb0,	// (0x0005f794) fep_hwr_write_pane_g5

0x4ebc,	// (0x0005f7a0) fep_hwr_write_pane_g6_ParamLimits

0x4ebc,	// (0x0005f7a0) fep_hwr_write_pane_g6

0xcea5,	// (0x00067789) eswt_shell_pane_ParamLimits

0x2703,	// (0x0005cfe7) bg_popup_window_pane_cp18_ParamLimits

0x3986,	// (0x0005e26a) heading_pane_cp70

0x5892,	// (0x00060176) popup_eswt_tasktip_window_t1_ParamLimits

0xbc7f,	// (0x00066563) aid_touch_tab_arrow_left

0xbc95,	// (0x00066579) aid_touch_tab_arrow_right

0x94e9,	// (0x00063dcd) title_pane_g3_ParamLimits

0x94e9,	// (0x00063dcd) title_pane_g3

0x82bc,	// (0x00062ba0) set_value_pane_g1

0xaf7a,	// (0x0006585e) popup_toolbar_trans_pane_ParamLimits

0xcfe1,	// (0x000678c5) aid_size_cell_tb_trans_pane_ParamLimits

0x82f4,	// (0x00062bd8) bg_tb_trans_pane_ParamLimits

0xcff3,	// (0x000678d7) grid_tb_trans_pane_ParamLimits

0x806c,	// (0x00062950) cont_note_pane_ParamLimits

0x806c,	// (0x00062950) cont_note_pane

0x81e8,	// (0x00062acc) cont_snote2_single_text_pane_ParamLimits

0x81e8,	// (0x00062acc) cont_snote2_single_text_pane

0x81e8,	// (0x00062acc) cont_snote2_single_graphic_pane_ParamLimits

0x81e8,	// (0x00062acc) cont_snote2_single_graphic_pane

0x2d09,	// (0x0005d5ed) cont_note_wait_pane_ParamLimits

0x2d09,	// (0x0005d5ed) cont_note_wait_pane

0x2d09,	// (0x0005d5ed) cont_note_image_pane_ParamLimits

0x2d09,	// (0x0005d5ed) cont_note_image_pane

0x5a8f,	// (0x00060373) popup_note2_window_g1_ParamLimits

0x5a8f,	// (0x00060373) popup_note2_window_g1

0xd09c,	// (0x00067980) popup_note2_window_t1_ParamLimits

0xd09c,	// (0x00067980) popup_note2_window_t1

0xd0e1,	// (0x000679c5) popup_note2_window_t2_ParamLimits

0xd0e1,	// (0x000679c5) popup_note2_window_t2

0xd126,	// (0x00067a0a) popup_note2_window_t3_ParamLimits

0xd126,	// (0x00067a0a) popup_note2_window_t3

0x5b8f,	// (0x00060473) popup_note2_window_t4_ParamLimits

0x5b8f,	// (0x00060473) popup_note2_window_t4

0x80f0,	// (0x000629d4) popup_note2_window_t5_ParamLimits

0x80f0,	// (0x000629d4) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0006a557) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0006a557) popup_note2_window_t

0x5bbe,	// (0x000604a2) popup_note2_image_window_g1_ParamLimits

0x5bbe,	// (0x000604a2) popup_note2_image_window_g1

0xd16b,	// (0x00067a4f) popup_note2_image_window_g2_ParamLimits

0xd16b,	// (0x00067a4f) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0006a562) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0006a562) popup_note2_image_window_g

0x5bdc,	// (0x000604c0) popup_note2_image_window_t1_ParamLimits

0x5bdc,	// (0x000604c0) popup_note2_image_window_t1

0x5bf4,	// (0x000604d8) popup_note2_image_window_t2_ParamLimits

0x5bf4,	// (0x000604d8) popup_note2_image_window_t2

0x5c0c,	// (0x000604f0) popup_note2_image_window_t3_ParamLimits

0x5c0c,	// (0x000604f0) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0006a567) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0006a567) popup_note2_image_window_t

0x2d17,	// (0x0005d5fb) popup_note2_wait_window_g1_ParamLimits

0x2d17,	// (0x0005d5fb) popup_note2_wait_window_g1

0x2d23,	// (0x0005d607) popup_note2_wait_window_g2_ParamLimits

0x2d23,	// (0x0005d607) popup_note2_wait_window_g2

0x2d2f,	// (0x0005d613) popup_note2_wait_window_g3_ParamLimits

0x2d2f,	// (0x0005d613) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x0006a11b) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x0006a11b) popup_note2_wait_window_g

0x5c28,	// (0x0006050c) popup_note2_wait_window_t1_ParamLimits

0x5c28,	// (0x0006050c) popup_note2_wait_window_t1

0x5c46,	// (0x0006052a) popup_note2_wait_window_t2_ParamLimits

0x5c46,	// (0x0006052a) popup_note2_wait_window_t2

0x5c64,	// (0x00060548) popup_note2_wait_window_t3_ParamLimits

0x5c64,	// (0x00060548) popup_note2_wait_window_t3

0x5c76,	// (0x0006055a) popup_note2_wait_window_t4_ParamLimits

0x5c76,	// (0x0006055a) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x0006a56e) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x0006a56e) popup_note2_wait_window_t

0x5c88,	// (0x0006056c) wait_bar2_pane_ParamLimits

0x5c88,	// (0x0006056c) wait_bar2_pane

0x5ca0,	// (0x00060584) popup_snote2_single_text_window_g1_ParamLimits

0x5ca0,	// (0x00060584) popup_snote2_single_text_window_g1

0x5cc8,	// (0x000605ac) popup_snote2_single_text_window_t1_ParamLimits

0x5cc8,	// (0x000605ac) popup_snote2_single_text_window_t1

0x5d14,	// (0x000605f8) popup_snote2_single_text_window_t2_ParamLimits

0x5d14,	// (0x000605f8) popup_snote2_single_text_window_t2

0x5d60,	// (0x00060644) popup_snote2_single_text_window_t3_ParamLimits

0x5d60,	// (0x00060644) popup_snote2_single_text_window_t3

0x5da1,	// (0x00060685) popup_snote2_single_text_window_t4_ParamLimits

0x5da1,	// (0x00060685) popup_snote2_single_text_window_t4

0x5dd7,	// (0x000606bb) popup_snote2_single_text_window_t5_ParamLimits

0x5dd7,	// (0x000606bb) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0006a577) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0006a577) popup_snote2_single_text_window_t

0xd17d,	// (0x00067a61) popup_snote2_single_graphic_window_g1_ParamLimits

0xd17d,	// (0x00067a61) popup_snote2_single_graphic_window_g1

0x5e2a,	// (0x0006070e) popup_snote2_single_graphic_window_g2_ParamLimits

0x5e2a,	// (0x0006070e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0006a582) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0006a582) popup_snote2_single_graphic_window_g

0x5e73,	// (0x00060757) popup_snote2_single_graphic_window_t1_ParamLimits

0x5e73,	// (0x00060757) popup_snote2_single_graphic_window_t1

0x5ebf,	// (0x000607a3) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ebf,	// (0x000607a3) popup_snote2_single_graphic_window_t2

0x5d60,	// (0x00060644) popup_snote2_single_graphic_window_t3_ParamLimits

0x5d60,	// (0x00060644) popup_snote2_single_graphic_window_t3

0x5da1,	// (0x00060685) popup_snote2_single_graphic_window_t4_ParamLimits

0x5da1,	// (0x00060685) popup_snote2_single_graphic_window_t4

0x5dd7,	// (0x000606bb) popup_snote2_single_graphic_window_t5_ParamLimits

0x5dd7,	// (0x000606bb) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x0006a587) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x0006a587) popup_snote2_single_graphic_window_t

0x48c8,	// (0x0005f1ac) clock_nsta_pane_cp2_t1

0x48c8,	// (0x0005f1ac) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0006a3a2) clock_nsta_pane_cp2_t

0xdcbc,	// (0x000685a0) form_field_data_wide_pane_g1_ParamLimits

0x8302,	// (0x00062be6) form_field_data_wide_pane_g2_ParamLimits

0x8302,	// (0x00062be6) form_field_data_wide_pane_g2

0x830e,	// (0x00062bf2) form_field_data_wide_pane_g3_ParamLimits

0x830e,	// (0x00062bf2) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00069f5a) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00069f5a) form_field_data_wide_pane_g

0xca65,	// (0x00067349) grid_touch_3_pane_ParamLimits

0xca65,	// (0x00067349) grid_touch_3_pane

0xd1a5,	// (0x00067a89) cell_touch_3_pane_ParamLimits

0xd1a5,	// (0x00067a89) cell_touch_3_pane

0x4e24,	// (0x0005f708) cell_touch_3_pane_g1

0x4e24,	// (0x0005f708) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0006a427) cell_touch_3_pane_g

0x8122,	// (0x00062a06) cont_query_data_pane

0x812a,	// (0x00062a0e) cont_query_data_pane_cp1

0x5f39,	// (0x0006081d) button_value_adjust_pane_cp7

0x5f41,	// (0x00060825) query_popup_pane_cp3

0xbbc2,	// (0x000664a6) bg_popup_sub_pane_cp22_ParamLimits

0xa383,	// (0x00064c67) navi_navi_volume_pane_cp2

0xa392,	// (0x00064c76) popup_side_volume_key_window_g2

0xa3a1,	// (0x00064c85) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00069ff0) popup_side_volume_key_window_g

0xa3b0,	// (0x00064c94) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00069ff7) popup_side_volume_key_window_t

0xa501,	// (0x00064de5) popup_side_volume_key_window_ParamLimits

0x9c61,	// (0x00064545) list_double_graphic_pane_g4_ParamLimits

0x9c61,	// (0x00064545) list_double_graphic_pane_g4

0xc854,	// (0x00067138) list_single_2heading_msg_pane_ParamLimits

0xc854,	// (0x00067138) list_single_2heading_msg_pane

0xd1ee,	// (0x00067ad2) list_single_2heading_msg_pane_g1_ParamLimits

0xd1ee,	// (0x00067ad2) list_single_2heading_msg_pane_g1

0xd1fa,	// (0x00067ade) list_single_2heading_msg_pane_g2_ParamLimits

0xd1fa,	// (0x00067ade) list_single_2heading_msg_pane_g2

0xd20d,	// (0x00067af1) list_single_2heading_msg_pane_g3_ParamLimits

0xd20d,	// (0x00067af1) list_single_2heading_msg_pane_g3

0xd219,	// (0x00067afd) list_single_2heading_msg_pane_g4_ParamLimits

0xd219,	// (0x00067afd) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x0006a592) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x0006a592) list_single_2heading_msg_pane_g

0xb386,	// (0x00065c6a) list_single_2heading_msg_pane_t1_ParamLimits

0xb386,	// (0x00065c6a) list_single_2heading_msg_pane_t1

0xb3ae,	// (0x00065c92) list_single_2heading_msg_pane_t2_ParamLimits

0xb3ae,	// (0x00065c92) list_single_2heading_msg_pane_t2

0xb419,	// (0x00065cfd) list_single_2heading_msg_pane_t3_ParamLimits

0xb419,	// (0x00065cfd) list_single_2heading_msg_pane_t3

0xe409,	// (0x00068ced) list_single_2heading_msg_pane_t4_ParamLimits

0xe409,	// (0x00068ced) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x0006a59b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x0006a59b) list_single_2heading_msg_pane_t

0x7ef0,	// (0x000627d4) title_pane_g4_ParamLimits

0x7ef0,	// (0x000627d4) title_pane_g4

0xf009,	// (0x000698ed) title_pane_stacon_g3_ParamLimits

0xf009,	// (0x000698ed) title_pane_stacon_g3

0x5a52,	// (0x00060336) list_single_2graphic_im_pane_g4_ParamLimits

0x5a52,	// (0x00060336) list_single_2graphic_im_pane_g4

0xc588,	// (0x00066e6c) popup_side_volume_key_window_cp

0x4126,	// (0x0005ea0a) main_idle_act2_pane_t1

0x06e8,	// (0x0005afcc) toolbar_button_pane_g10

0x9acd,	// (0x000643b1) popup_toolbar_window_cp1

0x48b9,	// (0x0005f19d) clock_nsta_pane_cp_t1

0x48b9,	// (0x0005f19d) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0006a39d) clock_nsta_pane_cp_t

0xa383,	// (0x00064c67) navi_navi_volume_pane_cp2_ParamLimits

0xf1dd,	// (0x00069ac1) popup_side_volume_key_window_g1_ParamLimits

0xa392,	// (0x00064c76) popup_side_volume_key_window_g2_ParamLimits

0xa3a1,	// (0x00064c85) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00069ff0) popup_side_volume_key_window_g_ParamLimits

0x0c98,	// (0x0005b57c) fep_hwr_aid_pane

0x0d3f,	// (0x0005b623) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e80,	// (0x0005f764) fep_hwr_top_pane_g1_ParamLimits

0x4e92,	// (0x0005f776) fep_hwr_top_pane_g2_ParamLimits

0x0d5f,	// (0x0005b643) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0006a3f2) fep_hwr_top_pane_g_ParamLimits

0x0d74,	// (0x0005b658) fep_hwr_top_text_pane_ParamLimits

0x3513,	// (0x0005ddf7) aid_touch_tab_arrow_arrow_2

0x351c,	// (0x0005de00) aid_touch_tab_arrow_left_2

0x0cac,	// (0x0005b590) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ce3,	// (0x0005b5c7) fep_hwr_prediction_pane

0x4feb,	// (0x0005f8cf) fep_vkb_prediction_pane

0xcddd,	// (0x000676c1) fep_vkb_side_pane_g3_ParamLimits

0xcddd,	// (0x000676c1) fep_vkb_side_pane_g3

0x0eef,	// (0x0005b7d3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f5b,	// (0x0005b83f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f68,	// (0x0005b84c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0006a4a1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1166,	// (0x0005ba4a) fep_hwr_prediction_pane_g1

0x1170,	// (0x0005ba54) fep_hwr_prediction_pane_g2

0x1178,	// (0x0005ba5c) fep_hwr_prediction_pane_g3

0x1180,	// (0x0005ba64) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0006a5a4) fep_hwr_prediction_pane_g

0x5f66,	// (0x0006084a) fep_vkb_prediction_pane_g1

0x5f70,	// (0x00060854) fep_vkb_prediction_pane_g2

0x5f78,	// (0x0006085c) fep_vkb_prediction_pane_g3

0x5f80,	// (0x00060864) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0006a5ad) fep_vkb_prediction_pane_g

0xb178,	// (0x00065a5c) slider_set_pane_g3

0xb18c,	// (0x00065a70) slider_set_pane_g4

0xb1a4,	// (0x00065a88) slider_set_pane_g5

0xb178,	// (0x00065a5c) slider_set_pane_g6

0xb1ba,	// (0x00065a9e) slider_set_pane_g7

0x3b9f,	// (0x0005e483) slider_form_pane_g3

0x3ba8,	// (0x0005e48c) slider_form_pane_g4

0x3bb0,	// (0x0005e494) slider_form_pane_g5

0x3b9f,	// (0x0005e483) slider_form_pane_g6

0xc826,	// (0x0006710a) slider_form_pane_g7

0x43d1,	// (0x0005ecb5) slider_set_pane_vc_g3

0x43da,	// (0x0005ecbe) slider_set_pane_vc_g4

0x43e3,	// (0x0005ecc7) slider_set_pane_vc_g5

0x43d1,	// (0x0005ecb5) slider_set_pane_vc_g6

0x43ec,	// (0x0005ecd0) slider_set_pane_vc_g7

0x459e,	// (0x0005ee82) slider_form_pane_vc_g1

0x45a7,	// (0x0005ee8b) slider_form_pane_vc_g2

0x45b0,	// (0x0005ee94) slider_form_pane_vc_g3

0x459e,	// (0x0005ee82) slider_form_pane_vc_g4

0x45b9,	// (0x0005ee9d) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0006a36f) slider_form_pane_vc_g

0xeed5,	// (0x000697b9) main_idle_act3_pane

0x5f88,	// (0x0006086c) ai3_links_pane

0xd231,	// (0x00067b15) popup_ai3_data_window_ParamLimits

0xd231,	// (0x00067b15) popup_ai3_data_window

0x7ed2,	// (0x000627b6) grid_ai3_links_pane

0xd249,	// (0x00067b2d) cell_ai3_links_pane_ParamLimits

0xd249,	// (0x00067b2d) cell_ai3_links_pane

0x5fc1,	// (0x000608a5) bg_popup_sub_pane_cp11

0x5fce,	// (0x000608b2) cell_ai3_links_pane_g1

0x7ed2,	// (0x000627b6) bg_popup_sub_pane_cp12

0x5ff3,	// (0x000608d7) heading_ai3_data_pane

0x5ffb,	// (0x000608df) list_ai3_gene_pane

0x6007,	// (0x000608eb) popup_ai3_data_window_g1

0x600f,	// (0x000608f3) heading_ai3_data_pane_g1

0x6017,	// (0x000608fb) heading_ai3_data_pane_t1

0xd263,	// (0x00067b47) list_double_ai3_gene_pane_ParamLimits

0xd263,	// (0x00067b47) list_double_ai3_gene_pane

0x6032,	// (0x00060916) list_single_ai3_gene_pane_ParamLimits

0x6032,	// (0x00060916) list_single_ai3_gene_pane

0x4de9,	// (0x0005f6cd) list_highlight_pane_cp7_ParamLimits

0x4de9,	// (0x0005f6cd) list_highlight_pane_cp7

0x603f,	// (0x00060923) list_single_a13_gene_pane_t1_ParamLimits

0x603f,	// (0x00060923) list_single_a13_gene_pane_t1

0x6056,	// (0x0006093a) list_single_ai3_gene_pane_g1

0x605f,	// (0x00060943) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x0006a5b6) list_single_ai3_gene_pane_g

0x6067,	// (0x0006094b) list_double_ai3_gene_pane_g1_ParamLimits

0x6067,	// (0x0006094b) list_double_ai3_gene_pane_g1

0xd270,	// (0x00067b54) list_double_ai3_gene_pane_t1_ParamLimits

0xd270,	// (0x00067b54) list_double_ai3_gene_pane_t1

0x608f,	// (0x00060973) list_double_ai3_gene_pane_t2_ParamLimits

0x608f,	// (0x00060973) list_double_ai3_gene_pane_t2

0x60a4,	// (0x00060988) list_double_ai3_gene_pane_t3_ParamLimits

0x60a4,	// (0x00060988) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x0006a5bb) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x0006a5bb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe3ff,	// (0x00068ce3) aid_size_min_col_2

0xd1d8,	// (0x00067abc) aid_size_min_msg_ParamLimits

0xd1d8,	// (0x00067abc) aid_size_min_msg

0xcdf1,	// (0x000676d5) fep_vkb_top_text_pane_g2_ParamLimits

0xcdf1,	// (0x000676d5) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0006a422) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0006a422) fep_vkb_top_text_pane_g

0xeed5,	// (0x000697b9) main_hc_apps_shell_pane

0x60c1,	// (0x000609a5) grid_hc_apps_pane_ParamLimits

0x60c1,	// (0x000609a5) grid_hc_apps_pane

0x60d0,	// (0x000609b4) list_hc_apps_pane

0x60d8,	// (0x000609bc) scroll_pane_cp37_ParamLimits

0x60d8,	// (0x000609bc) scroll_pane_cp37

0xd28c,	// (0x00067b70) cell_hc_apps_pane_ParamLimits

0xd28c,	// (0x00067b70) cell_hc_apps_pane

0xd34a,	// (0x00067c2e) cell_hc_apps_pane_g1_ParamLimits

0xd34a,	// (0x00067c2e) cell_hc_apps_pane_g1

0x61c3,	// (0x00060aa7) cell_hc_apps_pane_g2_ParamLimits

0x61c3,	// (0x00060aa7) cell_hc_apps_pane_g2

0x61df,	// (0x00060ac3) cell_hc_apps_pane_g3_ParamLimits

0x61df,	// (0x00060ac3) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x0006a5c2) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x0006a5c2) cell_hc_apps_pane_g

0xd377,	// (0x00067c5b) cell_hc_apps_pane_t1_ParamLimits

0xd377,	// (0x00067c5b) cell_hc_apps_pane_t1

0x806c,	// (0x00062950) grid_highlight_pane_cp10_ParamLimits

0x806c,	// (0x00062950) grid_highlight_pane_cp10

0xd3b5,	// (0x00067c99) list_single_hc_apps_pane_ParamLimits

0xd3b5,	// (0x00067c99) list_single_hc_apps_pane

0xd3e5,	// (0x00067cc9) list_single_hc_apps_pane_g1

0xd3fe,	// (0x00067ce2) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x0006a5c9) list_single_hc_apps_pane_g

0xd417,	// (0x00067cfb) list_single_hc_apps_pane_g2_copy1

0xb487,	// (0x00065d6b) list_single_hc_apps_pane_t1

0x7f34,	// (0x00062818) bg_set_opt_pane_cp_ParamLimits

0x95bd,	// (0x00063ea1) setting_slider_pane_t1_ParamLimits

0x95d6,	// (0x00063eba) setting_slider_pane_t2_ParamLimits

0x95f0,	// (0x00063ed4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00069e42) setting_slider_pane_t_ParamLimits

0x9608,	// (0x00063eec) slider_set_pane_ParamLimits

0xf53f,	// (0x00069e23) control_pane_g5_ParamLimits

0xf53f,	// (0x00069e23) control_pane_g5

0xc6a8,	// (0x00066f8c) slider_set_pane_g1_ParamLimits

0x0a0a,	// (0x0005b2ee) slider_set_pane_g2_ParamLimits

0xb178,	// (0x00065a5c) slider_set_pane_g3_ParamLimits

0xb18c,	// (0x00065a70) slider_set_pane_g4_ParamLimits

0xb1a4,	// (0x00065a88) slider_set_pane_g5_ParamLimits

0xb178,	// (0x00065a5c) slider_set_pane_g6_ParamLimits

0xb1ba,	// (0x00065a9e) slider_set_pane_g7_ParamLimits

0xf953,	// (0x0006a237) slider_set_pane_g_ParamLimits

0xf3d9,	// (0x00069cbd) navi_icon_text_pane_ParamLimits

0xbc48,	// (0x0006652c) aid_fill_nsta_2_ParamLimits

0xbc7f,	// (0x00066563) aid_touch_tab_arrow_left_ParamLimits

0xbc95,	// (0x00066579) aid_touch_tab_arrow_right_ParamLimits

0xbd30,	// (0x00066614) clock_nsta_pane_ParamLimits

0x34f5,	// (0x0005ddd9) navi_icon_pane_g1_ParamLimits

0x3501,	// (0x0005dde5) navi_text_pane_t1_ParamLimits

0x49c9,	// (0x0005f2ad) navi_icon_text_pane_g1_ParamLimits

0x49d5,	// (0x0005f2b9) navi_icon_text_pane_t1_ParamLimits

0xd3e5,	// (0x00067cc9) list_single_hc_apps_pane_g1_ParamLimits

0xd3fe,	// (0x00067ce2) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x0006a5c9) list_single_hc_apps_pane_g_ParamLimits

0xd417,	// (0x00067cfb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb487,	// (0x00065d6b) list_single_hc_apps_pane_t1_ParamLimits

0x93ee,	// (0x00063cd2) popup_toolbar2_fixed_window_ParamLimits

0x93ee,	// (0x00063cd2) popup_toolbar2_fixed_window

0xaf70,	// (0x00065854) popup_toolbar2_float_window

0x7ed2,	// (0x000627b6) bg_popup_sub_pane_cp27

0x62bd,	// (0x00060ba1) grid_toolbar2_float_pane

0x7ed2,	// (0x000627b6) bg_popup_sub_pane_cp26

0x62bd,	// (0x00060ba1) grid_toolbar2_fixed_pane

0xd433,	// (0x00067d17) cell_toolbar2_fixed_pane_ParamLimits

0xd433,	// (0x00067d17) cell_toolbar2_fixed_pane

0xd44d,	// (0x00067d31) cell_toolbar2_fixed_pane_g1

0x04be,	// (0x0005ada2) toolbar2_fixed_button_pane

0x2677,	// (0x0005cf5b) toolbar2_fixed_button_pane_g1

0x2687,	// (0x0005cf6b) toolbar2_fixed_button_pane_g2

0x267f,	// (0x0005cf63) toolbar2_fixed_button_pane_g3

0x2697,	// (0x0005cf7b) toolbar2_fixed_button_pane_g4

0x268f,	// (0x0005cf73) toolbar2_fixed_button_pane_g5

0x269f,	// (0x0005cf83) toolbar2_fixed_button_pane_g6

0x26a7,	// (0x0005cf8b) toolbar2_fixed_button_pane_g7

0x26b7,	// (0x0005cf9b) toolbar2_fixed_button_pane_g8

0x26af,	// (0x0005cf93) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x0006a139) toolbar2_fixed_button_pane_g

0x62de,	// (0x00060bc2) cell_toolbar2_float_pane_ParamLimits

0x62de,	// (0x00060bc2) cell_toolbar2_float_pane

0x62ef,	// (0x00060bd3) cell_toolbar2_float_pane_g1

0x04be,	// (0x0005ada2) toolbar2_fixed_button_pane_cp

0xccd9,	// (0x000675bd) fep_vkb_accented_list_pane_ParamLimits

0xccd9,	// (0x000675bd) fep_vkb_accented_list_pane

0x0ecf,	// (0x0005b7b3) bg_popup_fep_shadow_pane_g9

0x1e1f,	// (0x0005c703) bg_popup_fep_shadow_pane_cp3

0x85bc,	// (0x00062ea0) list_accented_list_pane

0x62f8,	// (0x00060bdc) list_single_accented_list_pane_ParamLimits

0x62f8,	// (0x00060bdc) list_single_accented_list_pane

0x1e1f,	// (0x0005c703) list_highlight_pane_cp10

0x6309,	// (0x00060bed) list_single_accented_list_pane_t1

0xae9a,	// (0x0006577e) popup_slider_window_ParamLimits

0xae9a,	// (0x0006577e) popup_slider_window

0x5f49,	// (0x0006082d) aid_indentation_list_msg

0xd542,	// (0x00067e26) bg_popup_window_pane_cp19

0x6429,	// (0x00060d0d) popup_slider_window_g1

0x6445,	// (0x00060d29) popup_slider_window_g2

0x6461,	// (0x00060d45) popup_slider_window_g3

0x0005,

0xfcea,	// (0x0006a5ce) popup_slider_window_g

0x64bd,	// (0x00060da1) popup_slider_window_t1

0x6531,	// (0x00060e15) small_volume_slider_vertical_pane

0x4e24,	// (0x0005f708) small_volume_slider_vertical_pane_g1

0x4e24,	// (0x0005f708) small_volume_slider_vertical_pane_g2

0x654d,	// (0x00060e31) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x0006a5e0) small_volume_slider_vertical_pane_g

0x933c,	// (0x00063c20) area_side_right_pane_ParamLimits

0x933c,	// (0x00063c20) area_side_right_pane

0xb4b5,	// (0x00065d99) aid_size_side_button_ParamLimits

0xb4b5,	// (0x00065d99) aid_size_side_button

0xb4ce,	// (0x00065db2) grid_sctrl_middle_pane_ParamLimits

0xb4ce,	// (0x00065db2) grid_sctrl_middle_pane

0x11e9,	// (0x0005bacd) sctrl_sk_bottom_pane

0x11fa,	// (0x0005bade) sctrl_sk_top_pane

0x120c,	// (0x0005baf0) aid_touch_sctrl_top

0x1219,	// (0x0005bafd) bg_sctrl_sk_pane_ParamLimits

0x1219,	// (0x0005bafd) bg_sctrl_sk_pane

0x1227,	// (0x0005bb0b) sctrl_sk_top_pane_g1

0x1234,	// (0x0005bb18) sctrl_sk_top_pane_t1

0x120c,	// (0x0005baf0) aid_touch_sctrl_bottom

0x1219,	// (0x0005bafd) bg_sctrl_sk_pane_cp_ParamLimits

0x1219,	// (0x0005bafd) bg_sctrl_sk_pane_cp

0x124f,	// (0x0005bb33) sctrl_sk_bottom_pane_g1

0x1234,	// (0x0005bb18) sctrl_sk_bottom_pane_t1

0xb4e8,	// (0x00065dcc) cell_sctrl_middle_pane_ParamLimits

0xb4e8,	// (0x00065dcc) cell_sctrl_middle_pane

0xb4f9,	// (0x00065ddd) aid_touch_sctrl_middle_ParamLimits

0xb4f9,	// (0x00065ddd) aid_touch_sctrl_middle

0xb506,	// (0x00065dea) bg_sctrl_middle_pane_ParamLimits

0xb506,	// (0x00065dea) bg_sctrl_middle_pane

0x18bc,	// (0x0005c1a0) cell_sctrl_middle_pane_g1_ParamLimits

0x18bc,	// (0x0005c1a0) cell_sctrl_middle_pane_g1

0xb514,	// (0x00065df8) cell_sctrl_middle_pane_g2_ParamLimits

0xb514,	// (0x00065df8) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x0006a5ec) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x0006a5ec) cell_sctrl_middle_pane_g

0x2677,	// (0x0005cf5b) bg_sctrl_middle_pane_g1

0x267f,	// (0x0005cf63) bg_sctrl_middle_pane_g2

0x2687,	// (0x0005cf6b) bg_sctrl_middle_pane_g3

0x268f,	// (0x0005cf73) bg_sctrl_middle_pane_g4

0x2697,	// (0x0005cf7b) bg_sctrl_middle_pane_g5

0x269f,	// (0x0005cf83) bg_sctrl_middle_pane_g6

0x26a7,	// (0x0005cf8b) bg_sctrl_middle_pane_g7

0x26af,	// (0x0005cf93) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x0006a5f1) bg_sctrl_middle_pane_g

0x26b7,	// (0x0005cf9b) bg_sctrl_middle_pane_g8_copy1

0x2677,	// (0x0005cf5b) bg_sctrl_sk_pane_g1

0x2687,	// (0x0005cf6b) bg_sctrl_sk_pane_g2

0x267f,	// (0x0005cf63) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x0006a139) bg_sctrl_sk_pane_g

0x8236,	// (0x00062b1a) aid_size_touch_scroll_bar

0x2697,	// (0x0005cf7b) bg_sctrl_sk_pane_g4

0x268f,	// (0x0005cf73) bg_sctrl_sk_pane_g5

0x269f,	// (0x0005cf83) bg_sctrl_sk_pane_g6

0x26a7,	// (0x0005cf8b) bg_sctrl_sk_pane_g7

0x26b7,	// (0x0005cf9b) bg_sctrl_sk_pane_g8

0x26af,	// (0x0005cf93) bg_sctrl_sk_pane_g9

0x01a5,	// (0x0005aa89) popup_fep_china_hwr2_fs_candidate_window

0xa93a,	// (0x0006521e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa93a,	// (0x0006521e) popup_fep_china_hwr2_fs_control_window

0x0eef,	// (0x0005b7d3) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0006a5e7) sctrl_sk_top_pane_g

0xd5fa,	// (0x00067ede) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd5fa,	// (0x00067ede) aid_fep_china_hwr2_fs_cell

0xd60e,	// (0x00067ef2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd60e,	// (0x00067ef2) bg_popup_fep_shadow_pane_cp4

0xd625,	// (0x00067f09) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd625,	// (0x00067f09) bg_popup_fep_shadow_pane_cp5

0xd637,	// (0x00067f1b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd637,	// (0x00067f1b) popup_fep_china_hwr2_fs_control_bar_grid

0xd64b,	// (0x00067f2f) popup_fep_china_hwr2_fs_control_funtion_grid

0x65a9,	// (0x00060e8d) aid_fep_china_hwr2_fs_candi_cell

0x7ed2,	// (0x000627b6) bg_popup_fep_shadow_pane_cp6

0x65b3,	// (0x00060e97) popup_fep_china_hwr2_fs_candidate_grid

0xd653,	// (0x00067f37) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd653,	// (0x00067f37) cell_fep_china_hwr2_fs_funtion_grid

0x4e24,	// (0x0005f708) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x65d5,	// (0x00060eb9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x65d5,	// (0x00060eb9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x65e3,	// (0x00060ec7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x65e3,	// (0x00060ec7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0006a602) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0006a602) cell_fep_china_hwr2_fs_funtion_grid_g

0xd66b,	// (0x00067f4f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd66b,	// (0x00067f4f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd680,	// (0x00067f64) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd680,	// (0x00067f64) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0006a607) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0006a607) cell_fep_china_hwr2_fs_funtion_grid_t

0x662a,	// (0x00060f0e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6632,	// (0x00060f16) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x663a,	// (0x00060f1e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x0006a60c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6642,	// (0x00060f26) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6642,	// (0x00060f26) cell_fep_china_hwr2_fs_candidate_grid

0x665b,	// (0x00060f3f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6663,	// (0x00060f47) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e24,	// (0x0005f708) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e24,	// (0x0005f708) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0006a427) cell_fep_china_hwr2_fs_candidate_grid_g

0x666b,	// (0x00060f4f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2270,	// (0x0005cb54) clock_nsta_pane_cp_24_ParamLimits

0x2270,	// (0x0005cb54) clock_nsta_pane_cp_24

0x22ee,	// (0x0005cbd2) indicator_nsta_pane_cp_24_ParamLimits

0x22ee,	// (0x0005cbd2) indicator_nsta_pane_cp_24

0x3371,	// (0x0005dc55) heading_pane_g1

0x0001,

0xf8ba,	// (0x0006a19e) heading_pane_g

0x3f6f,	// (0x0005e853) grid_sct_catagory_button_pane

0x3f9f,	// (0x0005e883) scroll_pane_cp5_ParamLimits

0x4a17,	// (0x0005f2fb) button_value_adjust_pane_cp5_ParamLimits

0x4a17,	// (0x0005f2fb) button_value_adjust_pane_cp5

0x4af6,	// (0x0005f3da) form2_midp_time_pane_ParamLimits

0x6679,	// (0x00060f5d) cell_sct_catagory_button_pane_ParamLimits

0x6679,	// (0x00060f5d) cell_sct_catagory_button_pane

0x4de9,	// (0x0005f6cd) bg_button_pane_cp01_ParamLimits

0x4de9,	// (0x0005f6cd) bg_button_pane_cp01

0x4e24,	// (0x0005f708) cell_sct_catagory_button_pane_g1

0xaf13,	// (0x000657f7) popup_tb_extension_window

0xd69c,	// (0x00067f80) aid_size_cell_ext_ParamLimits

0xd69c,	// (0x00067f80) aid_size_cell_ext

0x81e8,	// (0x00062acc) bg_tb_trans_pane_cp1_ParamLimits

0x81e8,	// (0x00062acc) bg_tb_trans_pane_cp1

0xd6c2,	// (0x00067fa6) grid_tb_ext_pane_ParamLimits

0xd6c2,	// (0x00067fa6) grid_tb_ext_pane

0xd701,	// (0x00067fe5) cell_tb_ext_pane_ParamLimits

0xd701,	// (0x00067fe5) cell_tb_ext_pane

0xd729,	// (0x0006800d) cell_tb_ext_pane_g1_ParamLimits

0xd729,	// (0x0006800d) cell_tb_ext_pane_g1

0x670f,	// (0x00060ff3) cell_tb_ext_pane_t1

0x806c,	// (0x00062950) list_highlight_pane_cp11_ParamLimits

0x806c,	// (0x00062950) list_highlight_pane_cp11

0x9403,	// (0x00063ce7) popup_uni_indicator_window_ParamLimits

0x9403,	// (0x00063ce7) popup_uni_indicator_window

0x82f4,	// (0x00062bd8) bg_popup_sub_pane_cp14

0xd746,	// (0x0006802a) list_uniindi_pane

0xd752,	// (0x00068036) uniindi_top_pane

0x806c,	// (0x00062950) bg_uniindi_top_pane

0xd771,	// (0x00068055) uniindi_top_pane_g1

0xd787,	// (0x0006806b) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x0006a613) uniindi_top_pane_g

0xd7a4,	// (0x00068088) uniindi_top_pane_t1

0x67c0,	// (0x000610a4) list_single_uniindi_pane_ParamLimits

0x67c0,	// (0x000610a4) list_single_uniindi_pane

0x4e24,	// (0x0005f708) bg_uniindi_top_pane_g1

0x67d2,	// (0x000610b6) list_single_uniindi_pane_g1

0x67e5,	// (0x000610c9) list_single_uniindi_pane_t1

0xeed5,	// (0x000697b9) control_bg_pane

0x680a,	// (0x000610ee) bg_sctrl_sk_pane_cp1

0x6813,	// (0x000610f7) bg_sctrl_sk_pane_cp2

0x681c,	// (0x00061100) control_bg_pane_g1

0x6825,	// (0x00061109) control_bg_pane_g2

0x0001,

0xfd38,	// (0x0006a61c) control_bg_pane_g

0x486e,	// (0x0005f152) cell_indicator_nsta_pane_g1_ParamLimits

0xcaa0,	// (0x00067384) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0006a38b) cell_indicator_nsta_pane_g_ParamLimits

0xe27e,	// (0x00068b62) form2_midp_time_pane_t1_ParamLimits

0x0c8a,	// (0x0005b56e) main_idle_act4_pane_ParamLimits

0x0c8a,	// (0x0005b56e) main_idle_act4_pane

0xaf13,	// (0x000657f7) popup_tb_extension_window_ParamLimits

0xd6e7,	// (0x00067fcb) tb_ext_find_pane_ParamLimits

0xd6e7,	// (0x00067fcb) tb_ext_find_pane

0x682e,	// (0x00061112) ai_gene_pane_1_cp1

0x1f6a,	// (0x0005c84e) ai_gene_pane_2_cp1

0xd7ce,	// (0x000680b2) list_single_idle_plugin_calendar_pane

0x683f,	// (0x00061123) list_single_idle_plugin_notification_pane

0x6848,	// (0x0006112c) list_single_idle_plugin_player_pane

0xd7d7,	// (0x000680bb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7d7,	// (0x000680bb) list_single_idle_plugin_shortcut_pane

0xd7ff,	// (0x000680e3) main_idle_act4_pane_t1

0xd816,	// (0x000680fa) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0006a621) main_idle_act4_pane_t

0xd82d,	// (0x00068111) middle_sk_idle_act4_pane_ParamLimits

0xd82d,	// (0x00068111) middle_sk_idle_act4_pane

0xd849,	// (0x0006812d) popup_clock_digital_analogue_window_cp2

0xd875,	// (0x00068159) shortcut_wheel_idle_act4_pane_ParamLimits

0xd875,	// (0x00068159) shortcut_wheel_idle_act4_pane

0x4e24,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g1

0x4e24,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g2

0x4e24,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g3

0x4e24,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g4

0x4e24,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g5

0x68db,	// (0x000611bf) shortcut_wheel_idle_act4_pane_g6

0x68e3,	// (0x000611c7) shortcut_wheel_idle_act4_pane_g7

0x68eb,	// (0x000611cf) shortcut_wheel_idle_act4_pane_g8

0x68f3,	// (0x000611d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x0006a626) shortcut_wheel_idle_act4_pane_g

0xd8f2,	// (0x000681d6) middle_sk_idle_act4_pane_g1_ParamLimits

0xd8f2,	// (0x000681d6) middle_sk_idle_act4_pane_g1

0xd900,	// (0x000681e4) middle_sk_idle_act4_pane_g2_ParamLimits

0xd900,	// (0x000681e4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x0006a649) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x0006a649) middle_sk_idle_act4_pane_g

0xd918,	// (0x000681fc) middle_sk_idle_act4_pane_t1_ParamLimits

0xd918,	// (0x000681fc) middle_sk_idle_act4_pane_t1

0xd947,	// (0x0006822b) grid_ai_shortcut_pane_ParamLimits

0xd947,	// (0x0006822b) grid_ai_shortcut_pane

0xd964,	// (0x00068248) list_highlight_pane_cp16_ParamLimits

0xd964,	// (0x00068248) list_highlight_pane_cp16

0xd971,	// (0x00068255) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd971,	// (0x00068255) list_single_idle_plugin_shortcut_pane_g1

0xd97d,	// (0x00068261) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd97d,	// (0x00068261) list_single_idle_plugin_shortcut_pane_g2

0xd999,	// (0x0006827d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd999,	// (0x0006827d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x0006a64e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x0006a64e) list_single_idle_plugin_shortcut_pane_g

0xd9ae,	// (0x00068292) cell_ai_shortcut_pane_ParamLimits

0xd9ae,	// (0x00068292) cell_ai_shortcut_pane

0xd9c4,	// (0x000682a8) cell_ai_shortcut_pane_g1_ParamLimits

0xd9c4,	// (0x000682a8) cell_ai_shortcut_pane_g1

0x682e,	// (0x00061112) ai_gene_pane_1_cp2

0x6a23,	// (0x00061307) ai_gene_pane_2_cp2

0x6a2b,	// (0x0006130f) list_highlight_pane_cp15

0xd9e6,	// (0x000682ca) list_single_idle_plugin_calendar_pane_g1

0x6a2b,	// (0x0006130f) list_highlight_pane_cp17

0x6a3c,	// (0x00061320) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a44,	// (0x00061328) list_single_idle_plugin_player_pane_g1

0x41c8,	// (0x0005eaac) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x0006a655) list_single_idle_plugin_player_pane_g

0x6a4c,	// (0x00061330) list_single_idle_plugin_player_pane_t1

0x6a5a,	// (0x0006133e) list_single_idle_plugin_player_pane_t2

0x6a68,	// (0x0006134c) list_single_idle_plugin_player_pane_t3

0x6a76,	// (0x0006135a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x0006a65a) list_single_idle_plugin_player_pane_t

0x6a84,	// (0x00061368) wait_bar_pane_cp15

0x6a8c,	// (0x00061370) grid_ai_notification_pane

0x41c8,	// (0x0005eaac) list_single_idle_plugin_notification_pane_g1

0xd9ee,	// (0x000682d2) cell_ai_notification_pane_ParamLimits

0xd9ee,	// (0x000682d2) cell_ai_notification_pane

0x6aa2,	// (0x00061386) cell_ai_notification_pane_g1

0x6aaa,	// (0x0006138e) cell_ai_notification_pane_t1

0xd9fb,	// (0x000682df) tb_ext_find_button_pane

0xda03,	// (0x000682e7) tb_ext_find_pane_g1

0xda0b,	// (0x000682ef) tb_ext_find_pane_t1

0xbb61,	// (0x00066445) tb_ext_find_button_pane_g1

0xda19,	// (0x000682fd) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x0006a663) tb_ext_find_button_pane_g

0xd7ff,	// (0x000680e3) main_idle_act4_pane_t1_ParamLimits

0xd816,	// (0x000680fa) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0006a621) main_idle_act4_pane_t_ParamLimits

0xd849,	// (0x0006812d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd861,	// (0x00068145) sat_plugin_idle_act4_pane_ParamLimits

0xd861,	// (0x00068145) sat_plugin_idle_act4_pane

0xda22,	// (0x00068306) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda22,	// (0x00068306) sat_plugin_idle_act4_pane_t1

0xda3a,	// (0x0006831e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda3a,	// (0x0006831e) sat_plugin_idle_act4_pane_t2

0xda52,	// (0x00068336) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda52,	// (0x00068336) sat_plugin_idle_act4_pane_t3

0xda6a,	// (0x0006834e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda6a,	// (0x0006834e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x0006a668) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x0006a668) sat_plugin_idle_act4_pane_t

0x937e,	// (0x00063c62) popup_battery_window_ParamLimits

0x937e,	// (0x00063c62) popup_battery_window

0x806c,	// (0x00062950) bg_popup_sub_pane_cp25_ParamLimits

0x806c,	// (0x00062950) bg_popup_sub_pane_cp25

0x6b2b,	// (0x0006140f) popup_battery_window_g1_ParamLimits

0x6b2b,	// (0x0006140f) popup_battery_window_g1

0x6b37,	// (0x0006141b) popup_battery_window_t1_ParamLimits

0x6b37,	// (0x0006141b) popup_battery_window_t1

0x6b49,	// (0x0006142d) popup_battery_window_t2_ParamLimits

0x6b49,	// (0x0006142d) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x0006a671) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x0006a671) popup_battery_window_t

0xa560,	// (0x00064e44) midp_canvas_pane_ParamLimits

0xa5d2,	// (0x00064eb6) midp_keypad_pane_ParamLimits

0xa5d2,	// (0x00064eb6) midp_keypad_pane

0x216a,	// (0x0005ca4e) main_midp_pane_ParamLimits

0xcaad,	// (0x00067391) signal_pane_g2_cp_ParamLimits

0xda82,	// (0x00068366) aid_size_cell_midp_keypad_ParamLimits

0xda82,	// (0x00068366) aid_size_cell_midp_keypad

0xdaa0,	// (0x00068384) midp_keyp_game_grid_pane_ParamLimits

0xdaa0,	// (0x00068384) midp_keyp_game_grid_pane

0xdac7,	// (0x000683ab) midp_keyp_rocker_pane_ParamLimits

0xdac7,	// (0x000683ab) midp_keyp_rocker_pane

0xdb18,	// (0x000683fc) midp_keyp_sk_left_pane_ParamLimits

0xdb18,	// (0x000683fc) midp_keyp_sk_left_pane

0xdb6c,	// (0x00068450) midp_keyp_sk_right_pane_ParamLimits

0xdb6c,	// (0x00068450) midp_keyp_sk_right_pane

0x7ed2,	// (0x000627b6) bg_button_pane_cp03

0xe42e,	// (0x00068d12) midp_keyp_sk_left_pane_g1

0x7ed2,	// (0x000627b6) bg_button_pane_cp04

0xe42e,	// (0x00068d12) midp_keyp_sk_right_pane_g1

0x4e24,	// (0x0005f708) midp_keyp_rocker_pane_g1

0xe437,	// (0x00068d1b) keyp_game_cell_pane_ParamLimits

0xe437,	// (0x00068d1b) keyp_game_cell_pane

0x7ed2,	// (0x000627b6) bg_button_pane_cp02

0xe45b,	// (0x00068d3f) keyp_game_cell_pane_g1

0x939e,	// (0x00063c82) popup_fep_vkb2_window_ParamLimits

0x939e,	// (0x00063c82) popup_fep_vkb2_window

0xb520,	// (0x00065e04) aid_size_cell_vkb2_ParamLimits

0xb520,	// (0x00065e04) aid_size_cell_vkb2

0xb55e,	// (0x00065e42) popup_fep_vkb2_window_g1_ParamLimits

0xb55e,	// (0x00065e42) popup_fep_vkb2_window_g1

0xb5ae,	// (0x00065e92) vkb2_area_bottom_pane_ParamLimits

0xb5ae,	// (0x00065e92) vkb2_area_bottom_pane

0xb602,	// (0x00065ee6) vkb2_area_keypad_pane_ParamLimits

0xb602,	// (0x00065ee6) vkb2_area_keypad_pane

0xb64a,	// (0x00065f2e) vkb2_area_top_pane_ParamLimits

0xb64a,	// (0x00065f2e) vkb2_area_top_pane

0xb6d0,	// (0x00065fb4) vkb2_top_entry_pane_ParamLimits

0xb6d0,	// (0x00065fb4) vkb2_top_entry_pane

0xb6fd,	// (0x00065fe1) vkb2_top_grid_left_pane_ParamLimits

0xb6fd,	// (0x00065fe1) vkb2_top_grid_left_pane

0xb71d,	// (0x00066001) vkb2_top_grid_right_pane_ParamLimits

0xb71d,	// (0x00066001) vkb2_top_grid_right_pane

0x14bb,	// (0x0005bd9f) vkb2_cell_keypad_pane_ParamLimits

0x14bb,	// (0x0005bd9f) vkb2_cell_keypad_pane

0xb763,	// (0x00066047) vkb2_area_bottom_grid_pane_ParamLimits

0xb763,	// (0x00066047) vkb2_area_bottom_grid_pane

0xb78d,	// (0x00066071) vkb2_area_bottom_pane_g1_ParamLimits

0xb78d,	// (0x00066071) vkb2_area_bottom_pane_g1

0xb7b3,	// (0x00066097) vkb2_area_bottom_pane_g2_ParamLimits

0xb7b3,	// (0x00066097) vkb2_area_bottom_pane_g2

0xb7e4,	// (0x000660c8) vkb2_area_bottom_pane_g3_ParamLimits

0xb7e4,	// (0x000660c8) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x0006a676) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x0006a676) vkb2_area_bottom_pane_g

0x1665,	// (0x0005bf49) vkb2_top_cell_left_pane_ParamLimits

0x1665,	// (0x0005bf49) vkb2_top_cell_left_pane

0xe464,	// (0x00068d48) vkb2_top_entry_pane_g1_ParamLimits

0xe464,	// (0x00068d48) vkb2_top_entry_pane_g1

0xe472,	// (0x00068d56) vkb2_top_entry_pane_t1_ParamLimits

0xe472,	// (0x00068d56) vkb2_top_entry_pane_t1

0x6cfa,	// (0x000615de) vkb2_top_entry_pane_t2_ParamLimits

0x6cfa,	// (0x000615de) vkb2_top_entry_pane_t2

0x6d2c,	// (0x00061610) vkb2_top_entry_pane_t3_ParamLimits

0x6d2c,	// (0x00061610) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x0006a67d) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x0006a67d) vkb2_top_entry_pane_t

0xb84e,	// (0x00066132) vkb2_top_grid_right_pane_g1_ParamLimits

0xb84e,	// (0x00066132) vkb2_top_grid_right_pane_g1

0x16c8,	// (0x0005bfac) vkb2_top_grid_right_pane_g2_ParamLimits

0x16c8,	// (0x0005bfac) vkb2_top_grid_right_pane_g2

0x16e0,	// (0x0005bfc4) vkb2_top_grid_right_pane_g3_ParamLimits

0x16e0,	// (0x0005bfc4) vkb2_top_grid_right_pane_g3

0xb864,	// (0x00066148) vkb2_top_grid_right_pane_g4_ParamLimits

0xb864,	// (0x00066148) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x0006a684) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x0006a684) vkb2_top_grid_right_pane_g

0x170e,	// (0x0005bff2) vkb2_top_cell_left_pane_g1

0x1725,	// (0x0005c009) vkb2_cell_keypad_pane_g1_ParamLimits

0x1725,	// (0x0005c009) vkb2_cell_keypad_pane_g1

0x6d50,	// (0x00061634) vkb2_cell_keypad_pane_t1_ParamLimits

0x6d50,	// (0x00061634) vkb2_cell_keypad_pane_t1

0x1733,	// (0x0005c017) vkb2_cell_bottom_grid_pane_ParamLimits

0x1733,	// (0x0005c017) vkb2_cell_bottom_grid_pane

0x176c,	// (0x0005c050) vkb2_cell_bottom_grid_pane_g1

0xd896,	// (0x0006817a) aid_call2_pane_cp02

0xd89e,	// (0x00068182) aid_call_pane_cp02

0xd8a6,	// (0x0006818a) clock_digital_number_pane_cp10

0xd8ae,	// (0x00068192) clock_digital_number_pane_cp11

0xd8b6,	// (0x0006819a) clock_digital_number_pane_cp12

0xd8be,	// (0x000681a2) clock_digital_number_pane_cp13

0xd8c6,	// (0x000681aa) clock_digital_separator_pane_cp10

0xbb61,	// (0x00066445) popup_clock_digital_analogue_window_cp2_g1

0xbb61,	// (0x00066445) popup_clock_digital_analogue_window_cp2_g2

0xd8ce,	// (0x000681b2) popup_clock_digital_analogue_window_cp2_g3

0xbb61,	// (0x00066445) popup_clock_digital_analogue_window_cp2_g4

0xd8ce,	// (0x000681b2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x0006a639) popup_clock_digital_analogue_window_cp2_g

0xd8d6,	// (0x000681ba) popup_clock_digital_analogue_window_cp2_t1

0xd8e4,	// (0x000681c8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x0006a644) popup_clock_digital_analogue_window_cp2_t

0x4e24,	// (0x0005f708) clock_digital_number_pane_cp10_g1

0x4e24,	// (0x0005f708) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0006a427) clock_digital_number_pane_cp10_g

0x4e24,	// (0x0005f708) clock_digital_separator_pane_cp10_g1

0x4e24,	// (0x0005f708) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0006a427) clock_digital_separator_pane_cp10_g

0xd793,	// (0x00068077) uniindi_top_pane_g3

0x6789,	// (0x0006106d) uniindi_top_pane_g4

0x1546,	// (0x0005be2a) vkb2_row_keypad_pane_ParamLimits

0x1546,	// (0x0005be2a) vkb2_row_keypad_pane

0x1788,	// (0x0005c06c) vkb2_cell_t_keypad_pane_ParamLimits

0x1788,	// (0x0005c06c) vkb2_cell_t_keypad_pane

0x1798,	// (0x0005c07c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1798,	// (0x0005c07c) vkb2_cell_t_keypad_pane_cp08

0x17ab,	// (0x0005c08f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17ab,	// (0x0005c08f) vkb2_cell_t_keypad_pane_cp09

0x17bf,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17bf,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_cp01

0x17d0,	// (0x0005c0b4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17d0,	// (0x0005c0b4) vkb2_cell_t_keypad_pane_cp02

0x17e1,	// (0x0005c0c5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x17e1,	// (0x0005c0c5) vkb2_cell_t_keypad_pane_cp03

0x17f2,	// (0x0005c0d6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x17f2,	// (0x0005c0d6) vkb2_cell_t_keypad_pane_cp04

0x1803,	// (0x0005c0e7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1803,	// (0x0005c0e7) vkb2_cell_t_keypad_pane_cp05

0x1814,	// (0x0005c0f8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1814,	// (0x0005c0f8) vkb2_cell_t_keypad_pane_cp06

0x1825,	// (0x0005c109) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1825,	// (0x0005c109) vkb2_cell_t_keypad_pane_cp07

0x1836,	// (0x0005c11a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1836,	// (0x0005c11a) vkb2_cell_t_keypad_pane_cp10

0x0eef,	// (0x0005b7d3) vkb2_cell_t_keypad_pane_g1

0x6d67,	// (0x0006164b) vkb2_cell_t_keypad_pane_t1

0xeed5,	// (0x000697b9) popup_grid_graphic2_window

0xe4ab,	// (0x00068d8f) aid_size_cell_graphic2_ParamLimits

0xe4ab,	// (0x00068d8f) aid_size_cell_graphic2

0xe4e9,	// (0x00068dcd) bg_popup_window_pane_cp21_ParamLimits

0xe4e9,	// (0x00068dcd) bg_popup_window_pane_cp21

0xe4f7,	// (0x00068ddb) graphic2_pages_pane_ParamLimits

0xe4f7,	// (0x00068ddb) graphic2_pages_pane

0xe54d,	// (0x00068e31) grid_graphic2_control_pane_ParamLimits

0xe54d,	// (0x00068e31) grid_graphic2_control_pane

0xe595,	// (0x00068e79) grid_graphic2_pane_ParamLimits

0xe595,	// (0x00068e79) grid_graphic2_pane

0xe61c,	// (0x00068f00) cell_graphic2_pane

0xeed5,	// (0x000697b9) main_comp_mode_pane

0x5ffb,	// (0x000608df) list_ai3_gene_pane_ParamLimits

0xd542,	// (0x00067e26) bg_popup_window_pane_cp19_ParamLimits

0x63cb,	// (0x00060caf) bg_touch_area_indi_pane_ParamLimits

0x63cb,	// (0x00060caf) bg_touch_area_indi_pane

0x63e1,	// (0x00060cc5) bg_touch_area_indi_pane_cp01_ParamLimits

0x63e1,	// (0x00060cc5) bg_touch_area_indi_pane_cp01

0x63f7,	// (0x00060cdb) bg_touch_area_indi_pane_cp02_ParamLimits

0x63f7,	// (0x00060cdb) bg_touch_area_indi_pane_cp02

0x640f,	// (0x00060cf3) bg_touch_area_indi_pane_cp03_ParamLimits

0x640f,	// (0x00060cf3) bg_touch_area_indi_pane_cp03

0x6429,	// (0x00060d0d) popup_slider_window_g1_ParamLimits

0x6445,	// (0x00060d29) popup_slider_window_g2_ParamLimits

0x6461,	// (0x00060d45) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x0006a5ce) popup_slider_window_g_ParamLimits

0x64bd,	// (0x00060da1) popup_slider_window_t1_ParamLimits

0x6531,	// (0x00060e15) small_volume_slider_vertical_pane_ParamLimits

0xe61c,	// (0x00068f00) cell_graphic2_pane_ParamLimits

0xe677,	// (0x00068f5b) bg_button_pane_cp10_ParamLimits

0xe677,	// (0x00068f5b) bg_button_pane_cp10

0xe68a,	// (0x00068f6e) bg_button_pane_cp11_ParamLimits

0xe68a,	// (0x00068f6e) bg_button_pane_cp11

0xe69d,	// (0x00068f81) graphic2_pages_pane_g1_ParamLimits

0xe69d,	// (0x00068f81) graphic2_pages_pane_g1

0xe6b8,	// (0x00068f9c) graphic2_pages_pane_g2_ParamLimits

0xe6b8,	// (0x00068f9c) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x0006a692) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x0006a692) graphic2_pages_pane_g

0xe6d0,	// (0x00068fb4) graphic2_pages_pane_t1_ParamLimits

0xe6d0,	// (0x00068fb4) graphic2_pages_pane_t1

0xe6e8,	// (0x00068fcc) cell_graphic2_control_pane_ParamLimits

0xe6e8,	// (0x00068fcc) cell_graphic2_control_pane

0xe71a,	// (0x00068ffe) cell_graphic2_pane_g1_ParamLimits

0xe71a,	// (0x00068ffe) cell_graphic2_pane_g1

0xdbc0,	// (0x000684a4) cell_graphic2_pane_g2_ParamLimits

0xdbc0,	// (0x000684a4) cell_graphic2_pane_g2

0xe291,	// (0x00068b75) cell_graphic2_pane_g3_ParamLimits

0xe291,	// (0x00068b75) cell_graphic2_pane_g3

0xdbcd,	// (0x000684b1) cell_graphic2_pane_g4_ParamLimits

0xdbcd,	// (0x000684b1) cell_graphic2_pane_g4

0xe727,	// (0x0006900b) cell_graphic2_pane_g5_ParamLimits

0xe727,	// (0x0006900b) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x0006a697) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x0006a697) cell_graphic2_pane_g

0xe747,	// (0x0006902b) cell_graphic2_pane_t1_ParamLimits

0xe747,	// (0x0006902b) cell_graphic2_pane_t1

0x3365,	// (0x0005dc49) grid_highlight_pane_cp11_ParamLimits

0x3365,	// (0x0005dc49) grid_highlight_pane_cp11

0x806c,	// (0x00062950) bg_button_pane_cp05

0xe793,	// (0x00069077) cell_graphic2_control_pane_g1

0x4e24,	// (0x0005f708) bg_touch_area_indi_pane_g1

0x7043,	// (0x00061927) aid_cmod_rocker_key_size

0x704d,	// (0x00061931) aid_cmode_itu_key_size

0x7057,	// (0x0006193b) main_cmode_video_pane

0x7061,	// (0x00061945) main_comp_mode_itu_pane

0x706d,	// (0x00061951) main_comp_mode_rocker_pane

0x7079,	// (0x0006195d) cell_cmode_rocker_pane_ParamLimits

0x7079,	// (0x0006195d) cell_cmode_rocker_pane

0x708b,	// (0x0006196f) cell_cmode_itu_pane_ParamLimits

0x708b,	// (0x0006196f) cell_cmode_itu_pane

0x82f4,	// (0x00062bd8) bg_button_pane_cp06_ParamLimits

0x82f4,	// (0x00062bd8) bg_button_pane_cp06

0x5094,	// (0x0005f978) cell_cmode_rocker_pane_g1_ParamLimits

0x5094,	// (0x0005f978) cell_cmode_rocker_pane_g1

0x65d5,	// (0x00060eb9) cell_cmode_rocker_pane_g2_ParamLimits

0x65d5,	// (0x00060eb9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x0006a6a7) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x0006a6a7) cell_cmode_rocker_pane_g

0x7ed2,	// (0x000627b6) bg_button_pane_cp07

0x70a0,	// (0x00061984) cell_cmode_itu_pane_g1

0x70a9,	// (0x0006198d) cell_cmode_itu_pane_t1

0x70b7,	// (0x0006199b) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x0006a6ac) cell_cmode_itu_pane_t

0x67fa,	// (0x000610de) aid_touch_ctrl_left

0x6802,	// (0x000610e6) aid_touch_ctrl_right

0x7ed2,	// (0x000627b6) compa_mode_pane

0xe7b9,	// (0x0006909d) aid_cmod_rocker_key_size_cp

0xe7c3,	// (0x000690a7) aid_cmode_itu_key_size_cp

0x70d9,	// (0x000619bd) compa_mode_pane_g1

0x70e1,	// (0x000619c5) compa_mode_pane_g2

0x70e9,	// (0x000619cd) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x0006a6b1) compa_mode_pane_g

0xe7cd,	// (0x000690b1) main_comp_mode_itu_pane_cp

0xe7d5,	// (0x000690b9) main_comp_mode_rocker_pane_cp

0xe7dd,	// (0x000690c1) cell_cmode_itu_pane_cp_ParamLimits

0xe7dd,	// (0x000690c1) cell_cmode_itu_pane_cp

0xe7f2,	// (0x000690d6) cell_cmode_rocker_pane_cp_ParamLimits

0xe7f2,	// (0x000690d6) cell_cmode_rocker_pane_cp

0x82f4,	// (0x00062bd8) bg_button_pane_cp06_cp_ParamLimits

0x82f4,	// (0x00062bd8) bg_button_pane_cp06_cp

0x5094,	// (0x0005f978) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5094,	// (0x0005f978) cell_cmode_rocker_pane_g1_cp

0x4e24,	// (0x0005f708) cell_cmode_rocker_pane_g2_cp

0x7ed2,	// (0x000627b6) bg_button_pane_cp07_cp

0xe804,	// (0x000690e8) cell_cmode_itu_pane_g1_cp

0xe80d,	// (0x000690f1) cell_cmode_itu_pane_t1_cp

0xe80d,	// (0x000690f1) cell_cmode_itu_pane_t2_cp

0xc81c,	// (0x00067100) settings_code_pane_cp2

0x7f34,	// (0x00062818) bg_popup_window_pane_cp3_ParamLimits

0x8185,	// (0x00062a69) heading_pane_cp3_ParamLimits

0x8191,	// (0x00062a75) listscroll_popup_graphic_pane_ParamLimits

0x0c98,	// (0x0005b57c) fep_hwr_aid_pane_ParamLimits

0x120c,	// (0x0005baf0) aid_touch_sctrl_top_ParamLimits

0x1227,	// (0x0005bb0b) sctrl_sk_top_pane_g1_ParamLimits

0x0eef,	// (0x0005b7d3) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0006a5e7) sctrl_sk_top_pane_g_ParamLimits

0x1234,	// (0x0005bb18) sctrl_sk_top_pane_t1_ParamLimits

0x120c,	// (0x0005baf0) aid_touch_sctrl_bottom_ParamLimits

0x1234,	// (0x0005bb18) sctrl_sk_bottom_pane_t1_ParamLimits

0xd75f,	// (0x00068043) aid_area_touch_clock

0xb692,	// (0x00065f76) aid_vkb2_area_top_pane_cell_ParamLimits

0xb692,	// (0x00065f76) aid_vkb2_area_top_pane_cell

0xb73d,	// (0x00066021) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb73d,	// (0x00066021) aid_vkb2_area_bottom_pane_cell

0x6cb2,	// (0x00061596) popup_char_count_window

0x713f,	// (0x00061a23) popup_char_count_window_g1

0x7148,	// (0x00061a2c) popup_char_count_window_g2

0x7151,	// (0x00061a35) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x0006a6b8) popup_char_count_window_g

0x715a,	// (0x00061a3e) popup_char_count_window_t1

0x12e3,	// (0x0005bbc7) popup_fep_char_preview_window_ParamLimits

0x12e3,	// (0x0005bbc7) popup_fep_char_preview_window

0xb6b2,	// (0x00065f96) vkb2_top_candi_pane_ParamLimits

0xb6b2,	// (0x00065f96) vkb2_top_candi_pane

0xe81b,	// (0x000690ff) cell_vkb2_top_candi_pane_ParamLimits

0xe81b,	// (0x000690ff) cell_vkb2_top_candi_pane

0x184b,	// (0x0005c12f) bg_popup_fep_char_preview_window_ParamLimits

0x184b,	// (0x0005c12f) bg_popup_fep_char_preview_window

0x1859,	// (0x0005c13d) popup_fep_char_preview_window_t1_ParamLimits

0x1859,	// (0x0005c13d) popup_fep_char_preview_window_t1

0x71b5,	// (0x00061a99) bg_popup_fep_char_preview_window_g1

0x71bd,	// (0x00061aa1) bg_popup_fep_char_preview_window_g2

0x71c5,	// (0x00061aa9) bg_popup_fep_char_preview_window_g3

0x71cd,	// (0x00061ab1) bg_popup_fep_char_preview_window_g4

0x71d5,	// (0x00061ab9) bg_popup_fep_char_preview_window_g5

0x1893,	// (0x0005c177) bg_popup_fep_char_preview_window_g6

0x71dd,	// (0x00061ac1) bg_popup_fep_char_preview_window_g7

0x71e5,	// (0x00061ac9) bg_popup_fep_char_preview_window_g8

0x71ed,	// (0x00061ad1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x0006a6bf) bg_popup_fep_char_preview_window_g

0x0eef,	// (0x0005b7d3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0eef,	// (0x0005b7d3) cell_vkb2_top_candi_pane_g1

0x0efd,	// (0x0005b7e1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0efd,	// (0x0005b7e1) cell_vkb2_top_candi_pane_g2

0x5e52,	// (0x00060736) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5e52,	// (0x00060736) cell_vkb2_top_candi_pane_g3

0x189b,	// (0x0005c17f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x189b,	// (0x0005c17f) cell_vkb2_top_candi_pane_g4

0x5594,	// (0x0005fe78) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5594,	// (0x0005fe78) cell_vkb2_top_candi_pane_g5

0x18bc,	// (0x0005c1a0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18bc,	// (0x0005c1a0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x0006a6d2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x0006a6d2) cell_vkb2_top_candi_pane_g

0x18ca,	// (0x0005c1ae) cell_vkb2_top_candi_pane_t1

0xb164,	// (0x00065a48) aid_size_touch_slider_mark_ParamLimits

0xb164,	// (0x00065a48) aid_size_touch_slider_mark

0xe533,	// (0x00068e17) grid_graphic2_catg_pane_ParamLimits

0xe533,	// (0x00068e17) grid_graphic2_catg_pane

0xe5ef,	// (0x00068ed3) popup_grid_graphic2_window_t1_ParamLimits

0xe5ef,	// (0x00068ed3) popup_grid_graphic2_window_t1

0xe605,	// (0x00068ee9) popup_grid_graphic2_window_t2_ParamLimits

0xe605,	// (0x00068ee9) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x0006a68d) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x0006a68d) popup_grid_graphic2_window_t

0x806c,	// (0x00062950) bg_button_pane_cp05_ParamLimits

0xe793,	// (0x00069077) cell_graphic2_control_pane_g1_ParamLimits

0xe881,	// (0x00069165) cell_graphic2_catg_pane_ParamLimits

0xe881,	// (0x00069165) cell_graphic2_catg_pane

0x7ed2,	// (0x000627b6) bg_button_pane_cp12

0xe893,	// (0x00069177) cell_graphic2_catg_pane_g1

0x670f,	// (0x00060ff3) cell_tb_ext_pane_t1_ParamLimits

0x1685,	// (0x0005bf69) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1685,	// (0x0005bf69) vkb2_top_cell_right_narrow_pane

0x169d,	// (0x0005bf81) vkb2_top_cell_right_wide_pane_ParamLimits

0x169d,	// (0x0005bf81) vkb2_top_cell_right_wide_pane

0x0c8a,	// (0x0005b56e) bg_vkb2_func_pane_ParamLimits

0x0c8a,	// (0x0005b56e) bg_vkb2_func_pane

0x170e,	// (0x0005bff2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp03

0x176c,	// (0x0005c050) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x267f,	// (0x0005cf63) bg_vkb2_func_pane_g1

0x2687,	// (0x0005cf6b) bg_vkb2_func_pane_g2

0x2697,	// (0x0005cf7b) bg_vkb2_func_pane_g3

0x268f,	// (0x0005cf73) bg_vkb2_func_pane_g4

0x269f,	// (0x0005cf83) bg_vkb2_func_pane_g5

0x26a7,	// (0x0005cf8b) bg_vkb2_func_pane_g6

0x26af,	// (0x0005cf93) bg_vkb2_func_pane_g7

0x26b7,	// (0x0005cf9b) bg_vkb2_func_pane_g8

0x2677,	// (0x0005cf5b) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x0006a6df) bg_vkb2_func_pane_g

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp01

0x170e,	// (0x0005bff2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x170e,	// (0x0005bff2) vkb2_top_cell_right_wide_pane_g1

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c8a,	// (0x0005b56e) bg_vkb2_fuc_pane_cp02

0x176c,	// (0x0005c050) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x176c,	// (0x0005c050) vkb2_top_cell_right_narrow_pane_g1

0xd480,	// (0x00067d64) aid_touch_area_decrease_ParamLimits

0xd480,	// (0x00067d64) aid_touch_area_decrease

0xd4b6,	// (0x00067d9a) aid_touch_area_increase_ParamLimits

0xd4b6,	// (0x00067d9a) aid_touch_area_increase

0xd4de,	// (0x00067dc2) aid_touch_area_mute_ParamLimits

0xd4de,	// (0x00067dc2) aid_touch_area_mute

0xd50e,	// (0x00067df2) aid_touch_area_slider_ParamLimits

0xd50e,	// (0x00067df2) aid_touch_area_slider

0xd54e,	// (0x00067e32) popup_slider_window_g4_ParamLimits

0xd54e,	// (0x00067e32) popup_slider_window_g4

0xd576,	// (0x00067e5a) popup_slider_window_g5_ParamLimits

0xd576,	// (0x00067e5a) popup_slider_window_g5

0xd5aa,	// (0x00067e8e) popup_slider_window_g6_ParamLimits

0xd5aa,	// (0x00067e8e) popup_slider_window_g6

0x64eb,	// (0x00060dcf) popup_slider_window_t2_ParamLimits

0x64eb,	// (0x00060dcf) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x0006a5db) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x0006a5db) popup_slider_window_t

0xd5c6,	// (0x00067eaa) slider_pane_ParamLimits

0xd5c6,	// (0x00067eaa) slider_pane

0x7210,	// (0x00061af4) slider_pane_g1_ParamLimits

0x7210,	// (0x00061af4) slider_pane_g1

0x7224,	// (0x00061b08) slider_pane_g2_ParamLimits

0x7224,	// (0x00061b08) slider_pane_g2

0x723a,	// (0x00061b1e) slider_pane_g3_ParamLimits

0x723a,	// (0x00061b1e) slider_pane_g3

0x0003,

0xfe0e,	// (0x0006a6f2) slider_pane_g_ParamLimits

0xfe0e,	// (0x0006a6f2) slider_pane_g

0xaf5b,	// (0x0006583f) popup_tb_float_extension_window_ParamLimits

0xaf5b,	// (0x0006583f) popup_tb_float_extension_window

0x7266,	// (0x00061b4a) aid_size_cell_tb_float_ext

0x7ed2,	// (0x000627b6) bg_popup_sub_window_cp28

0xe89c,	// (0x00069180) grid_tb_float_ext_pane

0xe8a6,	// (0x0006918a) cell_tb_float_ext_pane_ParamLimits

0xe8a6,	// (0x0006918a) cell_tb_float_ext_pane

0xe8c0,	// (0x000691a4) cell_tb_float_ext_pane_g1

0xe8c9,	// (0x000691ad) grid_highlight_pane_cp12

0xb2ce,	// (0x00065bb2) cell_last_hwr_side_pane_ParamLimits

0xb2ce,	// (0x00065bb2) cell_last_hwr_side_pane

0x4e24,	// (0x0005f708) cell_last_hwr_side_pane_g1

0x72a8,	// (0x00061b8c) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x0006a6fb) cell_last_hwr_side_pane_g

0xb819,	// (0x000660fd) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb819,	// (0x000660fd) vkb2_area_bottom_space_btn_pane

0x0eef,	// (0x0005b7d3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6d67,	// (0x0006164b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18ca,	// (0x0005c1ae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x18e9,	// (0x0005c1cd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x18e9,	// (0x0005c1cd) vkb2_area_bottom_space_btn_pane_g1

0x1923,	// (0x0005c207) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1923,	// (0x0005c207) vkb2_area_bottom_space_btn_pane_g2

0x1959,	// (0x0005c23d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1959,	// (0x0005c23d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x0006a700) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x0006a700) vkb2_area_bottom_space_btn_pane_g

0x0d4d,	// (0x0005b631) cel_fep_hwr_func_pane_ParamLimits

0x0d4d,	// (0x0005b631) cel_fep_hwr_func_pane

0xb2a3,	// (0x00065b87) cell_hwr_side_button_pane_ParamLimits

0xb2a3,	// (0x00065b87) cell_hwr_side_button_pane

0xd75f,	// (0x00068043) aid_area_touch_clock_ParamLimits

0x806c,	// (0x00062950) bg_uniindi_top_pane_ParamLimits

0xd771,	// (0x00068055) uniindi_top_pane_g1_ParamLimits

0xd787,	// (0x0006806b) uniindi_top_pane_g2_ParamLimits

0xd793,	// (0x00068077) uniindi_top_pane_g3_ParamLimits

0x6789,	// (0x0006106d) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x0006a613) uniindi_top_pane_g_ParamLimits

0xd7a4,	// (0x00068088) uniindi_top_pane_t1_ParamLimits

0x806c,	// (0x00062950) bg_vkb2_func_pane_cp01_ParamLimits

0x806c,	// (0x00062950) bg_vkb2_func_pane_cp01

0x72b1,	// (0x00061b95) cel_fep_hwr_func_pane_g1_ParamLimits

0x72b1,	// (0x00061b95) cel_fep_hwr_func_pane_g1

0x806c,	// (0x00062950) bg_vkb2_func_pane_cp02_ParamLimits

0x806c,	// (0x00062950) bg_vkb2_func_pane_cp02

0x72b1,	// (0x00061b95) cell_hwr_side_button_pane_g1_ParamLimits

0x72b1,	// (0x00061b95) cell_hwr_side_button_pane_g1

0x24fb,	// (0x0005cddf) status_pane_g4_ParamLimits

0x24fb,	// (0x0005cddf) status_pane_g4

0x2515,	// (0x0005cdf9) status_pane_t1

0x4b5f,	// (0x0005f443) form2_midp_gauge_slider_cont_pane

0x4b67,	// (0x0005f44b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcbd6,	// (0x000674ba) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcbe8,	// (0x000674cc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0006a3da) form2_midp_gauge_slider_pane_t_ParamLimits

0x4b9d,	// (0x0005f481) form2_midp_slider_pane_ParamLimits

0x12a3,	// (0x0005bb87) aid_size_cell_func_vkb2_ParamLimits

0x12a3,	// (0x0005bb87) aid_size_cell_func_vkb2

0x7252,	// (0x00061b36) slider_pane_g4_ParamLimits

0x7252,	// (0x00061b36) slider_pane_g4

0xb87a,	// (0x0006615e) form2_midp_gauge_slider_pane_t2_cp01

0xb888,	// (0x0006616c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb888,	// (0x0006616c) form2_midp_gauge_slider_pane_t3_cp01

0x19ce,	// (0x0005c2b2) form2_midp_slider_pane_cp01

0x7ed2,	// (0x000627b6) navi_smil_pane

0x72ea,	// (0x00061bce) navi_smil_pane_g1

0x72f2,	// (0x00061bd6) navi_smil_pane_t1

0x72bf,	// (0x00061ba3) form2_midp_slider_pane_g1

0x72c8,	// (0x00061bac) form2_midp_slider_pane_g2

0x72d0,	// (0x00061bb4) form2_midp_slider_pane_g3

0x72bf,	// (0x00061ba3) form2_midp_slider_pane_g4

0xe8d2,	// (0x000691b6) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x0006a709) form2_midp_slider_pane_g

0x1993,	// (0x0005c277) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1993,	// (0x0005c277) vkb2_area_bottom_space_btn_pane_g4

0xbd7b,	// (0x0006665f) lc0_navi_pane_ParamLimits

0xbd7b,	// (0x0006665f) lc0_navi_pane

0xbde5,	// (0x000666c9) lc0_stat_indi_pane_ParamLimits

0xbde5,	// (0x000666c9) lc0_stat_indi_pane

0xbdfa,	// (0x000666de) ls0_title_pane_ParamLimits

0xbdfa,	// (0x000666de) ls0_title_pane

0x82f4,	// (0x00062bd8) bg_popup_sub_pane_cp14_ParamLimits

0xd746,	// (0x0006802a) list_uniindi_pane_ParamLimits

0xd752,	// (0x00068036) uniindi_top_pane_ParamLimits

0x67d2,	// (0x000610b6) list_single_uniindi_pane_g1_ParamLimits

0x67e5,	// (0x000610c9) list_single_uniindi_pane_t1_ParamLimits

0xb8a5,	// (0x00066189) lc0_stat_clock_pane_ParamLimits

0xb8a5,	// (0x00066189) lc0_stat_clock_pane

0xe8dd,	// (0x000691c1) lc0_stat_indi_pane_g1_ParamLimits

0xe8dd,	// (0x000691c1) lc0_stat_indi_pane_g1

0xe8ea,	// (0x000691ce) lc0_stat_indi_pane_g2_ParamLimits

0xe8ea,	// (0x000691ce) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x0006a714) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x0006a714) lc0_stat_indi_pane_g

0xb8b5,	// (0x00066199) lc0_uni_indicator_pane_ParamLimits

0xb8b5,	// (0x00066199) lc0_uni_indicator_pane

0xe8f7,	// (0x000691db) ls0_title_pane_g1_ParamLimits

0xe8f7,	// (0x000691db) ls0_title_pane_g1

0xe90b,	// (0x000691ef) ls0_title_pane_t1_ParamLimits

0xe90b,	// (0x000691ef) ls0_title_pane_t1

0xb8c5,	// (0x000661a9) lc0_uni_indicator_pane_g1_ParamLimits

0xb8c5,	// (0x000661a9) lc0_uni_indicator_pane_g1

0x7364,	// (0x00061c48) lc0_stat_clock_pane_t1

0xeed5,	// (0x000697b9) main_ai5_pane

0x7372,	// (0x00061c56) ai5_sk_pane_ParamLimits

0x7372,	// (0x00061c56) ai5_sk_pane

0xe939,	// (0x0006921d) cell_ai5_widget_pane_ParamLimits

0xe939,	// (0x0006921d) cell_ai5_widget_pane

0x7431,	// (0x00061d15) aid_size_cell_widget_grid

0x743f,	// (0x00061d23) bg_ai5_widget_pane_ParamLimits

0x743f,	// (0x00061d23) bg_ai5_widget_pane

0x74b3,	// (0x00061d97) cell_ai5_widget_pane_g2

0x74c3,	// (0x00061da7) cell_ai5_widget_pane_g3

0x74da,	// (0x00061dbe) cell_ai5_widget_pane_g4

0x74e6,	// (0x00061dca) cell_ai5_widget_pane_g5

0x74f2,	// (0x00061dd6) cell_ai5_widget_pane_g6

0x74fe,	// (0x00061de2) cell_ai5_widget_pane_g7

0x7546,	// (0x00061e2a) cell_ai5_widget_pane_t1_ParamLimits

0x7546,	// (0x00061e2a) cell_ai5_widget_pane_t1

0x7563,	// (0x00061e47) cell_ai5_widget_pane_t2_ParamLimits

0x7563,	// (0x00061e47) cell_ai5_widget_pane_t2

0x757b,	// (0x00061e5f) cell_ai5_widget_pane_t3_ParamLimits

0x757b,	// (0x00061e5f) cell_ai5_widget_pane_t3

0x7593,	// (0x00061e77) cell_ai5_widget_pane_t4_ParamLimits

0x7593,	// (0x00061e77) cell_ai5_widget_pane_t4

0x75b0,	// (0x00061e94) cell_ai5_widget_pane_t5_ParamLimits

0x75b0,	// (0x00061e94) cell_ai5_widget_pane_t5

0x75cf,	// (0x00061eb3) cell_ai5_widget_pane_t6_ParamLimits

0x75cf,	// (0x00061eb3) cell_ai5_widget_pane_t6

0x75e1,	// (0x00061ec5) cell_ai5_widget_pane_t7_ParamLimits

0x75e1,	// (0x00061ec5) cell_ai5_widget_pane_t7

0x75fa,	// (0x00061ede) cell_ai5_widget_pane_t8_ParamLimits

0x75fa,	// (0x00061ede) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x0006a72e) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x0006a72e) cell_ai5_widget_pane_t

0x764e,	// (0x00061f32) grid_ai5_widget_pane

0x82f4,	// (0x00062bd8) highlight_cell_ai5_widget_pane_ParamLimits

0x82f4,	// (0x00062bd8) highlight_cell_ai5_widget_pane

0xe99f,	// (0x00069283) ai5_sk_left_pane

0xe9a9,	// (0x0006928d) ai5_sk_middle_pane

0xe9b3,	// (0x00069297) ai5_sk_right_pane

0x767a,	// (0x00061f5e) bg_ai5_widget_pane_g1_ParamLimits

0x767a,	// (0x00061f5e) bg_ai5_widget_pane_g1

0x7686,	// (0x00061f6a) bg_ai5_widget_pane_g2_ParamLimits

0x7686,	// (0x00061f6a) bg_ai5_widget_pane_g2

0x7692,	// (0x00061f76) bg_ai5_widget_pane_g3_ParamLimits

0x7692,	// (0x00061f76) bg_ai5_widget_pane_g3

0x769e,	// (0x00061f82) bg_ai5_widget_pane_g4_ParamLimits

0x769e,	// (0x00061f82) bg_ai5_widget_pane_g4

0x76aa,	// (0x00061f8e) bg_ai5_widget_pane_g5_ParamLimits

0x76aa,	// (0x00061f8e) bg_ai5_widget_pane_g5

0x76b6,	// (0x00061f9a) bg_ai5_widget_pane_g6_ParamLimits

0x76b6,	// (0x00061f9a) bg_ai5_widget_pane_g6

0x76c2,	// (0x00061fa6) bg_ai5_widget_pane_g7_ParamLimits

0x76c2,	// (0x00061fa6) bg_ai5_widget_pane_g7

0x76ce,	// (0x00061fb2) bg_ai5_widget_pane_g8_ParamLimits

0x76ce,	// (0x00061fb2) bg_ai5_widget_pane_g8

0x76da,	// (0x00061fbe) bg_ai5_widget_pane_g9_ParamLimits

0x76da,	// (0x00061fbe) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x0006a743) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x0006a743) bg_ai5_widget_pane_g

0x770c,	// (0x00061ff0) cell_shortcut_ai5_widget_pane_ParamLimits

0x770c,	// (0x00061ff0) cell_shortcut_ai5_widget_pane

0x1e1f,	// (0x0005c703) bg_cell_shortcut_ai5_widget_pane

0x771d,	// (0x00062001) cell_grid_ai5_widget_pane_g1

0x1e1f,	// (0x0005c703) highlight_cell_shortcut_ai5_widget_pane

0x267f,	// (0x0005cf63) ai5_sk_left_pane_g1

0x7726,	// (0x0006200a) ai5_sk_left_pane_g2

0x772e,	// (0x00062012) ai5_sk_left_pane_g3

0x7736,	// (0x0006201a) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x0006a756) ai5_sk_left_pane_g

0x773e,	// (0x00062022) ai5_sk_left_pane_t1

0x2687,	// (0x0005cf6b) ai5_sk_right_pane_g1

0x774c,	// (0x00062030) ai5_sk_right_pane_g2

0x7754,	// (0x00062038) ai5_sk_right_pane_g3

0x775c,	// (0x00062040) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x0006a75f) ai5_sk_right_pane_g

0x7764,	// (0x00062048) ai5_sk_right_pane_t1

0x2687,	// (0x0005cf6b) ai5_sk_middle_pane_g1

0x267f,	// (0x0005cf63) ai5_sk_middle_pane_g2

0x269f,	// (0x0005cf83) ai5_sk_middle_pane_g3

0x7754,	// (0x00062038) ai5_sk_middle_pane_g4

0x772e,	// (0x00062012) ai5_sk_middle_pane_g5

0x7772,	// (0x00062056) ai5_sk_middle_pane_g6

0xe9bd,	// (0x000692a1) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x0006a768) ai5_sk_middle_pane_g

0xbc67,	// (0x0006654b) aid_touch_area_size_lc0_ParamLimits

0xbc67,	// (0x0006654b) aid_touch_area_size_lc0

0x0f1e,	// (0x0005b802) cell_hwr_candidate_pane_t1_ParamLimits

0x21cc,	// (0x0005cab0) aid_touch_navi_pane

0xbef3,	// (0x000667d7) status_dt_navi_pane_ParamLimits

0xbef3,	// (0x000667d7) status_dt_navi_pane

0xbf0b,	// (0x000667ef) status_dt_sta_pane_ParamLimits

0xbf0b,	// (0x000667ef) status_dt_sta_pane

0xe9c5,	// (0x000692a9) dt_sta_controll_pane

0xe9d2,	// (0x000692b6) dt_sta_indi_pane

0xe9df,	// (0x000692c3) dt_sta_title_pane

0x806c,	// (0x00062950) bg_dt_sta_indi_pane_ParamLimits

0x806c,	// (0x00062950) bg_dt_sta_indi_pane

0xe9f1,	// (0x000692d5) dt_sta_battery_pane

0xe9f9,	// (0x000692dd) dt_sta_indi_pane_g1

0x77c4,	// (0x000620a8) dt_sta_indi_pane_g2

0x77cd,	// (0x000620b1) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x0006a777) dt_sta_indi_pane_g

0x77d6,	// (0x000620ba) dt_sta_signal_pane

0x82f4,	// (0x00062bd8) bg_dt_sta_title_pane_ParamLimits

0x82f4,	// (0x00062bd8) bg_dt_sta_title_pane

0x34c5,	// (0x0005dda9) dt_sta_title_pane_g1

0xea02,	// (0x000692e6) dt_sta_title_pane_t1_ParamLimits

0xea02,	// (0x000692e6) dt_sta_title_pane_t1

0x7ed2,	// (0x000627b6) bg_dt_sta_control_pane

0xea17,	// (0x000692fb) dt_sta_controll_pane_g1

0xea20,	// (0x00069304) bg_dt_sta_title_pane_g1

0xea29,	// (0x0006930d) bg_dt_sta_title_pane_g2

0xea32,	// (0x00069316) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x0006a77e) bg_dt_sta_title_pane_g

0x4e24,	// (0x0005f708) bg_dt_sta_indi_pane_g1

0x7818,	// (0x000620fc) dt_sta_signal_pane_g1

0x7820,	// (0x00062104) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x0006a785) dt_sta_signal_pane_g

0x7828,	// (0x0006210c) dt_sta_battery_pane_g1

0x7831,	// (0x00062115) dt_sta_battery_pane_t1

0x4e24,	// (0x0005f708) bg_dt_sta_control_pane_g1

0xbbe4,	// (0x000664c8) fep_china_uni_eep_pane

0xbbec,	// (0x000664d0) fep_china_uni_entry_pane_ParamLimits

0xbbfc,	// (0x000664e0) popup_fep_china_uni_window_g1_ParamLimits

0xbc0c,	// (0x000664f0) popup_fep_china_uni_window_g2_ParamLimits

0xbc0c,	// (0x000664f0) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00069ffc) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00069ffc) popup_fep_china_uni_window_g

0x7840,	// (0x00062124) fep_china_uni_eep_pane_g1

0x7848,	// (0x0006212c) fep_china_uni_eep_pane_t1

0x72e1,	// (0x00061bc5) aid_touch_area_size_smil_player

0x2322,	// (0x0005cc06) lc0_clock_pane

0x2509,	// (0x0005cded) status_pane_g5_ParamLimits

0x2509,	// (0x0005cded) status_pane_g5

0xaa91,	// (0x00065375) popup_keymap_window

0x24c7,	// (0x0005cdab) status_icon_pane

0x74c3,	// (0x00061da7) cell_ai5_widget_pane_g3_ParamLimits

0x74da,	// (0x00061dbe) cell_ai5_widget_pane_g4_ParamLimits

0x74e6,	// (0x00061dca) cell_ai5_widget_pane_g5_ParamLimits

0x750a,	// (0x00061dee) cell_ai5_widget_pane_g8_ParamLimits

0x750a,	// (0x00061dee) cell_ai5_widget_pane_g8

0x751e,	// (0x00061e02) cell_ai5_widget_pane_g9_ParamLimits

0x751e,	// (0x00061e02) cell_ai5_widget_pane_g9

0x7532,	// (0x00061e16) cell_ai5_widget_pane_g10_ParamLimits

0x7532,	// (0x00061e16) cell_ai5_widget_pane_g10

0x7857,	// (0x0006213b) status_icon_pane_g1

0x7ed2,	// (0x000627b6) bg_popup_sub_pane_cp13

0x785f,	// (0x00062143) popup_keymap_window_t1

0xa73d,	// (0x00065021) control_pane_g6_ParamLimits

0xa73d,	// (0x00065021) control_pane_g6

0xa74a,	// (0x0006502e) control_pane_g7_ParamLimits

0xa74a,	// (0x0006502e) control_pane_g7

0xa757,	// (0x0006503b) control_pane_g8_ParamLimits

0xa757,	// (0x0006503b) control_pane_g8

0xe9c5,	// (0x000692a9) dt_sta_controll_pane_ParamLimits

0xe9d2,	// (0x000692b6) dt_sta_indi_pane_ParamLimits

0xe9df,	// (0x000692c3) dt_sta_title_pane_ParamLimits

0x823f,	// (0x00062b23) aid_size_touch_scroll_bar_cale

0x9392,	// (0x00063c76) popup_discreet_window_ParamLimits

0x9392,	// (0x00063c76) popup_discreet_window

0x93e4,	// (0x00063cc8) popup_sk_window

0x2d09,	// (0x0005d5ed) bg_popup_sub_pane_cp28_ParamLimits

0x2d09,	// (0x0005d5ed) bg_popup_sub_pane_cp28

0x786d,	// (0x00062151) popup_discreet_window_g1_ParamLimits

0x786d,	// (0x00062151) popup_discreet_window_g1

0xea3b,	// (0x0006931f) popup_discreet_window_t1_ParamLimits

0xea3b,	// (0x0006931f) popup_discreet_window_t1

0x78ab,	// (0x0006218f) popup_discreet_window_t2_ParamLimits

0x78ab,	// (0x0006218f) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x0006a78a) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x0006a78a) popup_discreet_window_t

0x1a05,	// (0x0005c2e9) popup_sk_window_g1

0x1a0f,	// (0x0005c2f3) popup_sk_window_g2

0x0001,

0xfead,	// (0x0006a791) popup_sk_window_g

0xb8f0,	// (0x000661d4) popup_sk_window_t1

0xb8fe,	// (0x000661e2) popup_sk_window_t1_copy1

0x74b3,	// (0x00061d97) cell_ai5_widget_pane_g2_ParamLimits

0x760c,	// (0x00061ef0) cell_ai5_widget_pane_t9_ParamLimits

0x760c,	// (0x00061ef0) cell_ai5_widget_pane_t9

0x7ed2,	// (0x000627b6) main_fep_fshwr2_pane

0xb90c,	// (0x000661f0) aid_fshwr2_btn_pane

0xb91e,	// (0x00066202) aid_fshwr2_syb_pane

0xb930,	// (0x00066214) aid_fshwr2_txt_pane

0xb93f,	// (0x00066223) fshwr2_func_candi_pane

0xb95e,	// (0x00066242) fshwr2_hwr_syb_pane

0xb979,	// (0x0006625d) fshwr2_icf_pane

0xeed5,	// (0x000697b9) fshwr2_icf_bg_pane

0x1ab4,	// (0x0005c398) fshwr2_icf_pane_t1_ParamLimits

0x1ab4,	// (0x0005c398) fshwr2_icf_pane_t1

0xbb61,	// (0x00066445) fshwr2_func_candi_pane_g1

0xea59,	// (0x0006933d) fshwr2_func_candi_row_pane_ParamLimits

0xea59,	// (0x0006933d) fshwr2_func_candi_row_pane

0xb9a5,	// (0x00066289) cell_fshwr2_syb_pane_ParamLimits

0xb9a5,	// (0x00066289) cell_fshwr2_syb_pane

0x0eef,	// (0x0005b7d3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0eef,	// (0x0005b7d3) fshwr2_hwr_syb_pane_g1

0xeed5,	// (0x000697b9) bg_popup_call_pane_cp01

0xb9bb,	// (0x0006629f) fshwr2_func_candi_cell_pane_ParamLimits

0xb9bb,	// (0x0006629f) fshwr2_func_candi_cell_pane

0xea7c,	// (0x00069360) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea7c,	// (0x00069360) fshwr2_func_candi_cell_bg_pane

0xba06,	// (0x000662ea) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xba06,	// (0x000662ea) fshwr2_func_candi_cell_pane_g1

0xba3d,	// (0x00066321) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xba3d,	// (0x00066321) fshwr2_func_candi_cell_pane_t1

0xeed5,	// (0x000697b9) bg_button_pane_cp08

0x790d,	// (0x000621f1) cell_fshwr2_syb_bg_pane

0xba58,	// (0x0006633c) cell_fshwr2_syb_bg_pane_g1

0xba60,	// (0x00066344) cell_fshwr2_syb_bg_pane_t1

0x82f4,	// (0x00062bd8) main_tmo_pane

0xc5ce,	// (0x00066eb2) uni_indicator_pane_g1_ParamLimits

0xc5e4,	// (0x00066ec8) uni_indicator_pane_g2_ParamLimits

0xc5fa,	// (0x00066ede) uni_indicator_pane_g3_ParamLimits

0x3832,	// (0x0005e116) uni_indicator_pane_g4_ParamLimits

0x3832,	// (0x0005e116) uni_indicator_pane_g4

0x3846,	// (0x0005e12a) uni_indicator_pane_g5_ParamLimits

0x3846,	// (0x0005e12a) uni_indicator_pane_g5

0x3846,	// (0x0005e12a) uni_indicator_pane_g6_ParamLimits

0x3846,	// (0x0005e12a) uni_indicator_pane_g6

0xf910,	// (0x0006a1f4) uni_indicator_pane_g_ParamLimits

0xd462,	// (0x00067d46) popup_tmo_note_window_ParamLimits

0xd462,	// (0x00067d46) popup_tmo_note_window

0x1285,	// (0x0005bb69) fshwr2_bg_pane

0xba2e,	// (0x00066312) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xba2e,	// (0x00066312) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x0006a796) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x0006a796) fshwr2_func_candi_cell_pane_g

0x0ed7,	// (0x0005b7bb) bg_popup_window_pane_cp01

0x1b80,	// (0x0005c464) bg_popup_window_pane_g1_cp01

0x7915,	// (0x000621f9) bg_popup_window_pane_cp22_ParamLimits

0x7915,	// (0x000621f9) bg_popup_window_pane_cp22

0xea88,	// (0x0006936c) listscroll_tmo_link_pane_ParamLimits

0xea88,	// (0x0006936c) listscroll_tmo_link_pane

0x7963,	// (0x00062247) popup_tmo_note_window_g1_ParamLimits

0x7963,	// (0x00062247) popup_tmo_note_window_g1

0xeac8,	// (0x000693ac) tmo_note_info_pane_ParamLimits

0xeac8,	// (0x000693ac) tmo_note_info_pane

0xeae2,	// (0x000693c6) list_tmo_note_info_pane_g1_ParamLimits

0xeae2,	// (0x000693c6) list_tmo_note_info_pane_g1

0x79a1,	// (0x00062285) list_tmo_note_info_pane_g2_ParamLimits

0x79a1,	// (0x00062285) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x0006a79b) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x0006a79b) list_tmo_note_info_pane_g

0x79bd,	// (0x000622a1) list_tmo_note_info_text_pane_ParamLimits

0x79bd,	// (0x000622a1) list_tmo_note_info_text_pane

0x7a3e,	// (0x00062322) list_tmo_link_pane

0x7a4b,	// (0x0006232f) scroll_pane_cp20

0x7a58,	// (0x0006233c) list_single_tmo_link_pane_ParamLimits

0x7a58,	// (0x0006233c) list_single_tmo_link_pane

0x7a68,	// (0x0006234c) list_single_tmo_link_pane_t1

0x7a76,	// (0x0006235a) list_tmo_note_info_text_pane_t1_ParamLimits

0x7a76,	// (0x0006235a) list_tmo_note_info_text_pane_t1

0xa091,	// (0x00064975) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa091,	// (0x00064975) aid_size_touch_scroll_bar_cp01

0x9fa4,	// (0x00064888) aid_size_touch_slider_marker

0x93d4,	// (0x00063cb8) popup_settings_window_ParamLimits

0x93d4,	// (0x00063cb8) popup_settings_window

0xdecc,	// (0x000687b0) popup_candi_list_indi_window

0x21cc,	// (0x0005cab0) aid_touch_navi_pane_ParamLimits

0x11e0,	// (0x0005bac4) rs_clock_indi_pane

0x11e9,	// (0x0005bacd) sctrl_sk_bottom_pane_ParamLimits

0x11fa,	// (0x0005bade) sctrl_sk_top_pane_ParamLimits

0xb556,	// (0x00065e3a) popup_fep_tooltip_window

0x7431,	// (0x00061d15) aid_size_cell_widget_grid_ParamLimits

0x749e,	// (0x00061d82) cell_ai5_widget_pane_g1_ParamLimits

0x749e,	// (0x00061d82) cell_ai5_widget_pane_g1

0x74f2,	// (0x00061dd6) cell_ai5_widget_pane_g6_ParamLimits

0x74fe,	// (0x00061de2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x0006a719) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0006a719) cell_ai5_widget_pane_g

0x7630,	// (0x00061f14) cell_ai5_widget_pane_t10_ParamLimits

0x7630,	// (0x00061f14) cell_ai5_widget_pane_t10

0x764e,	// (0x00061f32) grid_ai5_widget_pane_ParamLimits

0x76e6,	// (0x00061fca) cell_contacts_ai5_widget_pane_ParamLimits

0x76e6,	// (0x00061fca) cell_contacts_ai5_widget_pane

0x78c0,	// (0x000621a4) popup_discreet_window_t3_ParamLimits

0x78c0,	// (0x000621a4) popup_discreet_window_t3

0xb991,	// (0x00066275) popup_fshwr2_char_preview_window_ParamLimits

0xb991,	// (0x00066275) popup_fshwr2_char_preview_window

0xeaf9,	// (0x000693dd) tmo_note_info_pane_t1

0xeb0e,	// (0x000693f2) tmo_note_info_pane_t2

0xeb25,	// (0x00069409) tmo_note_info_pane_t3

0x7a1a,	// (0x000622fe) tmo_note_info_pane_t4

0x7a2c,	// (0x00062310) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x0006a7a0) tmo_note_info_pane_t

0x7a3e,	// (0x00062322) list_tmo_link_pane_ParamLimits

0x7a4b,	// (0x0006232f) scroll_pane_cp20_ParamLimits

0xeed5,	// (0x000697b9) bg_popup_fep_char_preview_window_cp01

0xeb3a,	// (0x0006941e) popup_fshwr2_char_preview_window_t1

0x7a9d,	// (0x00062381) popup_candi_list_indi_window_g1

0x7aa6,	// (0x0006238a) bg_cell_contacts_ai5_widget_pane

0x7ab2,	// (0x00062396) cell_contacts_ai5_widget_pane_g1

0x54e9,	// (0x0005fdcd) cell_contacts_ai5_widget_pane_g2

0x7ac7,	// (0x000623ab) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x0006a7ab) cell_contacts_ai5_widget_pane_g

0x7ad3,	// (0x000623b7) cell_contacts_ai5_widget_pane_t1

0x82f4,	// (0x00062bd8) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7b4a,	// (0x0006242e) settings_container_pane

0x1e1f,	// (0x0005c703) listscroll_set_pane_copy1

0x4527,	// (0x0005ee0b) scroll_pane_cp121_copy1

0x2ac2,	// (0x0005d3a6) set_content_pane_copy1

0xebad,	// (0x00069491) aid_height_set_list_copy1_ParamLimits

0xebad,	// (0x00069491) aid_height_set_list_copy1

0x3a3e,	// (0x0005e322) aid_size_parent_copy1_ParamLimits

0x3a3e,	// (0x0005e322) aid_size_parent_copy1

0xebb9,	// (0x0006949d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xebb9,	// (0x0006949d) button_value_adjust_pane_cp6_copy1

0x216a,	// (0x0005ca4e) list_highlight_pane_cp2_copy1_ParamLimits

0x216a,	// (0x0005ca4e) list_highlight_pane_cp2_copy1

0xebcd,	// (0x000694b1) list_set_pane_copy1_ParamLimits

0xebcd,	// (0x000694b1) list_set_pane_copy1

0xeb48,	// (0x0006942c) main_pane_set_t1_copy1_ParamLimits

0xeb48,	// (0x0006942c) main_pane_set_t1_copy1

0xeb82,	// (0x00069466) main_pane_set_t2_copy1_ParamLimits

0xeb82,	// (0x00069466) main_pane_set_t2_copy1

0xec7a,	// (0x0006955e) main_pane_set_t3_copy1

0xec88,	// (0x0006956c) main_pane_set_t4_copy1

0xeba1,	// (0x00069485) set_content_pane_g1_copy1_ParamLimits

0xeba1,	// (0x00069485) set_content_pane_g1_copy1

0xec96,	// (0x0006957a) setting_code_pane_copy1

0x7c47,	// (0x0006252b) setting_slider_graphic_pane_copy1

0x7c47,	// (0x0006252b) setting_slider_pane_copy1

0x7c47,	// (0x0006252b) setting_text_pane_copy1

0x7c47,	// (0x0006252b) setting_volume_pane_copy1

0xec96,	// (0x0006957a) settings_code_pane_cp2_copy1

0xec9e,	// (0x00069582) settings_code_pane_cp_copy1_ParamLimits

0xec9e,	// (0x00069582) settings_code_pane_cp_copy1

0xba6f,	// (0x00066353) volume_set_pane_copy1

0xecb2,	// (0x00069596) volume_set_pane_g10_copy1

0xecba,	// (0x0006959e) volume_set_pane_g1_copy1

0xecc2,	// (0x000695a6) volume_set_pane_g2_copy1

0xecca,	// (0x000695ae) volume_set_pane_g3_copy1

0xecd2,	// (0x000695b6) volume_set_pane_g4_copy1

0xecda,	// (0x000695be) volume_set_pane_g5_copy1

0xece2,	// (0x000695c6) volume_set_pane_g6_copy1

0xecea,	// (0x000695ce) volume_set_pane_g7_copy1

0xecf2,	// (0x000695d6) volume_set_pane_g8_copy1

0xecfa,	// (0x000695de) volume_set_pane_g9_copy1

0x7f34,	// (0x00062818) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f34,	// (0x00062818) bg_set_opt_pane_cp_copy1

0xba77,	// (0x0006635b) setting_slider_pane_t1_copy1_ParamLimits

0xba77,	// (0x0006635b) setting_slider_pane_t1_copy1

0xba95,	// (0x00066379) setting_slider_pane_t2_copy1_ParamLimits

0xba95,	// (0x00066379) setting_slider_pane_t2_copy1

0xbaaf,	// (0x00066393) setting_slider_pane_t3_copy1_ParamLimits

0xbaaf,	// (0x00066393) setting_slider_pane_t3_copy1

0xbac7,	// (0x000663ab) slider_set_pane_copy1_ParamLimits

0xbac7,	// (0x000663ab) slider_set_pane_copy1

0x850e,	// (0x00062df2) set_opt_bg_pane_g1_copy2

0x8516,	// (0x00062dfa) set_opt_bg_pane_g2_copy2

0x7cb3,	// (0x00062597) set_opt_bg_pane_g3_copy2

0x8526,	// (0x00062e0a) set_opt_bg_pane_g4_copy2

0x852e,	// (0x00062e12) set_opt_bg_pane_g5_copy2

0x8536,	// (0x00062e1a) set_opt_bg_pane_g6_copy2

0xed02,	// (0x000695e6) set_opt_bg_pane_g7_copy2

0x7cc5,	// (0x000625a9) set_opt_bg_pane_g8_copy2

0x7ccf,	// (0x000625b3) set_opt_bg_pane_g9_copy2

0xbadd,	// (0x000663c1) aid_size_touch_slider_mark_copy1_ParamLimits

0xbadd,	// (0x000663c1) aid_size_touch_slider_mark_copy1

0xed0a,	// (0x000695ee) slider_set_pane_g1_copy1

0x1c0b,	// (0x0005c4ef) slider_set_pane_g2_copy1

0xb178,	// (0x00065a5c) slider_set_pane_g3_copy1_ParamLimits

0xb178,	// (0x00065a5c) slider_set_pane_g3_copy1

0xb18c,	// (0x00065a70) slider_set_pane_g4_copy1_ParamLimits

0xb18c,	// (0x00065a70) slider_set_pane_g4_copy1

0xb1a4,	// (0x00065a88) slider_set_pane_g5_copy1_ParamLimits

0xb1a4,	// (0x00065a88) slider_set_pane_g5_copy1

0xb178,	// (0x00065a5c) slider_set_pane_g6_copy1_ParamLimits

0xb178,	// (0x00065a5c) slider_set_pane_g6_copy1

0xbaf1,	// (0x000663d5) slider_set_pane_g7_copy1_ParamLimits

0xbaf1,	// (0x000663d5) slider_set_pane_g7_copy1

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp2_copy1

0xed13,	// (0x000695f7) setting_slider_graphic_pane_g1_copy1

0xed1c,	// (0x00069600) setting_slider_graphic_pane_t1_copy1

0xed2c,	// (0x00069610) setting_slider_graphic_pane_t2_copy1

0xed3c,	// (0x00069620) slider_set_pane_cp_copy1

0x7d1b,	// (0x000625ff) input_focus_pane_cp1_copy1

0x7d24,	// (0x00062608) list_set_text_pane_copy1

0x7d2c,	// (0x00062610) setting_text_pane_g1_copy1

0xed4c,	// (0x00069630) set_text_pane_t1_copy1

0x7d1b,	// (0x000625ff) input_focus_pane_cp2_copy1

0x7d2c,	// (0x00062610) setting_code_pane_g1_copy1

0x7d35,	// (0x00062619) setting_code_pane_t1_copy1

0x7d43,	// (0x00062627) list_set_graphic_pane_copy1

0x7ee6,	// (0x000627ca) bg_set_opt_pane_cp4_copy1

0xde3d,	// (0x00068721) list_set_graphic_pane_g1_copy1_ParamLimits

0xde3d,	// (0x00068721) list_set_graphic_pane_g1_copy1

0x7d57,	// (0x0006263b) list_set_graphic_pane_g2_copy1

0xde55,	// (0x00068739) list_set_graphic_pane_t1_copy1_ParamLimits

0xde55,	// (0x00068739) list_set_graphic_pane_t1_copy1

0x4e24,	// (0x0005f708) rs_clock_indi_pane_g1

0x7d5f,	// (0x00062643) rs_clock_indi_pane_t1

0x7d6d,	// (0x00062651) rs_indi_pane

0x7d75,	// (0x00062659) rs_indi_pane_g1

0x7d7e,	// (0x00062662) rs_indi_pane_g2

0x7a9d,	// (0x00062381) rs_indi_pane_g3

0x0002,

0xfece,	// (0x0006a7b2) rs_indi_pane_g

0x1e1f,	// (0x0005c703) bg_popup_preview_window_pane_cp03

0x7d87,	// (0x0006266b) popup_fep_tooltip_window_t1

0xd08f,	// (0x00067973) popup_note2_window_g2_ParamLimits

0xd08f,	// (0x00067973) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0006a552) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0006a552) popup_note2_window_g

0x5fc1,	// (0x000608a5) bg_popup_sub_pane_cp11_ParamLimits

0x5fce,	// (0x000608b2) cell_ai3_links_pane_g1_ParamLimits

0x5fe5,	// (0x000608c9) cell_ai3_links_pane_t1

0xed4c,	// (0x00069630) set_text_pane_t1_copy1_ParamLimits

0xf46a,	// (0x00069d4e) cell_graphic_popup_pane_cp2_ParamLimits

0xf46a,	// (0x00069d4e) cell_graphic_popup_pane_cp2

0xed66,	// (0x0006964a) cell_graphic_popup_pane_g1_cp2

0x81c2,	// (0x00062aa6) cell_graphic_popup_pane_g2_cp2

0x7d9d,	// (0x00062681) cell_graphic_popup_pane_g3_cp2

0xed6e,	// (0x00069652) cell_graphic_popup_pane_t2_cp2

0x81d3,	// (0x00062ab7) grid_highlight_pane_cp3_cp2

0x8766,	// (0x0006304a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x82f4,	// (0x00062bd8) main_tmo_pane_ParamLimits

0xd456,	// (0x00067d3a) popup_tmo_big_image_note_window

0x748d,	// (0x00061d71) cell_ai5_widget_list_pane

0x7495,	// (0x00061d79) cell_ai5_widget_lrg_icon_pane

0xeaf9,	// (0x000693dd) tmo_note_info_pane_t1_ParamLimits

0xeb0e,	// (0x000693f2) tmo_note_info_pane_t2_ParamLimits

0xeb25,	// (0x00069409) tmo_note_info_pane_t3_ParamLimits

0x7a1a,	// (0x000622fe) tmo_note_info_pane_t4_ParamLimits

0x7a2c,	// (0x00062310) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x0006a7a0) tmo_note_info_pane_t_ParamLimits

0x7b4a,	// (0x0006242e) settings_container_pane_ParamLimits

0xed44,	// (0x00069628) indicator_popup_pane_cp5

0xed44,	// (0x00069628) indicator_popup_pane_cp6

0x7d43,	// (0x00062627) list_set_graphic_pane_copy1_ParamLimits

0x7ed2,	// (0x000627b6) bg_popup_window_pane_cp23

0x7db3,	// (0x00062697) popup_tmo_big_image_note_window_g1

0x7dbc,	// (0x000626a0) popup_tmo_big_image_note_window_t1

0x7dcc,	// (0x000626b0) popup_tmo_big_image_note_window_t2

0x7ddc,	// (0x000626c0) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x0006a7b9) popup_tmo_big_image_note_window_t

0x4e24,	// (0x0005f708) cell_ai5_widget_lrg_icon_pane_g1

0x7dec,	// (0x000626d0) cell_ai5_widget_lrg_icon_pane_t1

0x7dfa,	// (0x000626de) cell_ai5_widget_list_row_pane_ParamLimits

0x7dfa,	// (0x000626de) cell_ai5_widget_list_row_pane

0x7e11,	// (0x000626f5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7e11,	// (0x000626f5) cell_ai5_widget_list_row_pane_g1

0xed7c,	// (0x00069660) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed7c,	// (0x00069660) cell_ai5_widget_list_row_pane_t1

0x7e49,	// (0x0006272d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7e49,	// (0x0006272d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x0006a7c0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x0006a7c0) cell_ai5_widget_list_row_pane_t

0xeed5,	// (0x000697b9) main_fep_vtchi_ss_pane

0x7e8d,	// (0x00062771) popup_fep_char_pre_window

0x7e95,	// (0x00062779) popup_fep_ituss_window

0xedbc,	// (0x000696a0) popup_fep_vkbss_window

0xedc9,	// (0x000696ad) grid_vkbss_keypad_pane_ParamLimits

0xedc9,	// (0x000696ad) grid_vkbss_keypad_pane

0x8348,	// (0x00062c2c) ituss_keypad_pane

0x1c35,	// (0x0005c519) aid_vkbss_key_offset_ParamLimits

0x1c35,	// (0x0005c519) aid_vkbss_key_offset

0xbb07,	// (0x000663eb) cell_vkbss_key_pane_ParamLimits

0xbb07,	// (0x000663eb) cell_vkbss_key_pane

0x24e3,	// (0x0005cdc7) bg_cell_vkbss_key_g1_ParamLimits

0x24e3,	// (0x0005cdc7) bg_cell_vkbss_key_g1

0xedd9,	// (0x000696bd) cell_vkbss_key_3p_pane_ParamLimits

0xedd9,	// (0x000696bd) cell_vkbss_key_3p_pane

0xedf3,	// (0x000696d7) cell_vkbss_key_g1_ParamLimits

0xedf3,	// (0x000696d7) cell_vkbss_key_g1

0xee0d,	// (0x000696f1) cell_vkbss_key_t1_ParamLimits

0xee0d,	// (0x000696f1) cell_vkbss_key_t1

0x1c57,	// (0x0005c53b) cell_ituss_key_pane_ParamLimits

0x1c57,	// (0x0005c53b) cell_ituss_key_pane

0x83aa,	// (0x00062c8e) bg_cell_ituss_key_g1_ParamLimits

0x83aa,	// (0x00062c8e) bg_cell_ituss_key_g1

0x83b6,	// (0x00062c9a) cell_ituss_key_pane_g1_ParamLimits

0x83b6,	// (0x00062c9a) cell_ituss_key_pane_g1

0x1c68,	// (0x0005c54c) cell_ituss_key_pane_g2_ParamLimits

0x1c68,	// (0x0005c54c) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x0006a7c7) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x0006a7c7) cell_ituss_key_pane_g

0x1c94,	// (0x0005c578) cell_ituss_key_t1_ParamLimits

0x1c94,	// (0x0005c578) cell_ituss_key_t1

0x1cce,	// (0x0005c5b2) cell_ituss_key_t2_ParamLimits

0x1cce,	// (0x0005c5b2) cell_ituss_key_t2

0x1cff,	// (0x0005c5e3) cell_ituss_key_t3_ParamLimits

0x1cff,	// (0x0005c5e3) cell_ituss_key_t3

0x1cce,	// (0x0005c5b2) cell_ituss_key_t4_ParamLimits

0x1cce,	// (0x0005c5b2) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x0006a7ce) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0006a7ce) cell_ituss_key_t

0x83dc,	// (0x00062cc0) cell_vkbss_key_3p_pane_g1

0x83e4,	// (0x00062cc8) cell_vkbss_key_3p_pane_g2

0x83ec,	// (0x00062cd0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0006a7d9) cell_vkbss_key_3p_pane_g

0xeed5,	// (0x000697b9) bg_popup_fep_char_preview_window_cp02

0x1d42,	// (0x0005c626) popup_fep_char_pre_window_t1

0xe995,	// (0x00069279) main_ai5_sk_pane

0x7aa6,	// (0x0006238a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ab2,	// (0x00062396) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x54e9,	// (0x0005fdcd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7ac7,	// (0x000623ab) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x0006a7ab) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7ad3,	// (0x000623b7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x82f4,	// (0x00062bd8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee38,	// (0x0006971c) main_ai5_sk_pane_g1

0xc227,	// (0x00066b0b) popup_query_code_window_g1

0x7eab,	// (0x0006278f) popup_fep_vkb_icf_pane

0x8322,	// (0x00062c06) popup_fep_vtchi_icf_pane

0x83fd,	// (0x00062ce1) bg_icf_pane

0x8409,	// (0x00062ced) list_vkb_icf_pane

0x8418,	// (0x00062cfc) bg_icf_pane_cp01

0x842b,	// (0x00062d0f) vtchi_icf_list_pane

0x843b,	// (0x00062d1f) list_vkb_icf_pane_t1_ParamLimits

0x843b,	// (0x00062d1f) list_vkb_icf_pane_t1

0x8452,	// (0x00062d36) vtchi_icf_list_pane_t1_ParamLimits

0x8452,	// (0x00062d36) vtchi_icf_list_pane_t1

0x7e95,	// (0x00062779) popup_fep_ituss_window_ParamLimits

0x8322,	// (0x00062c06) popup_fep_vtchi_icf_pane_ParamLimits

0x8348,	// (0x00062c2c) ituss_keypad_pane_ParamLimits

0x1c29,	// (0x0005c50d) ituss_sks_pane

0x83fd,	// (0x00062ce1) bg_icf_pane_ParamLimits

0xedad,	// (0x00069691) icf_edit_indi_pane_ParamLimits

0xedad,	// (0x00069691) icf_edit_indi_pane

0x8409,	// (0x00062ced) list_vkb_icf_pane_ParamLimits

0x8418,	// (0x00062cfc) bg_icf_pane_cp01_ParamLimits

0x7e80,	// (0x00062764) icf_edit_indi_pane_cp01_ParamLimits

0x7e80,	// (0x00062764) icf_edit_indi_pane_cp01

0x8433,	// (0x00062d17) vtchi_query_pane

0x5094,	// (0x0005f978) icf_edit_indi_pane_g1_ParamLimits

0x5094,	// (0x0005f978) icf_edit_indi_pane_g1

0x84c7,	// (0x00062dab) icf_edit_indi_pane_g2_ParamLimits

0x84c7,	// (0x00062dab) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0006a7f1) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0006a7f1) icf_edit_indi_pane_g

0x84d6,	// (0x00062dba) icf_edit_indi_pane_t1

0x8470,	// (0x00062d54) bg_input_focus_pane_cp042

0x8236,	// (0x00062b1a) vtchi_button_pane

0x8479,	// (0x00062d5d) vtchi_query_pane_t1

0x8487,	// (0x00062d6b) vtchi_query_pane_t2

0x8495,	// (0x00062d79) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0006a7e0) vtchi_query_pane_t

0xeed5,	// (0x000697b9) bg_button_pane_cp13

0x84a3,	// (0x00062d87) vtchi_button_pane_g1

0x1d51,	// (0x0005c635) ituss_sks_pane_g1

0x1d5c,	// (0x0005c640) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0006a7e7) ituss_sks_pane_g

0x84ab,	// (0x00062d8f) ituss_sks_pane_t1

0x84b9,	// (0x00062d9d) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0006a7ec) ituss_sks_pane_t

0x48a1,	// (0x0005f185) indicator_nsta_pane_cp_g1

0x48a9,	// (0x0005f18d) indicator_nsta_pane_cp_g2

0x48b1,	// (0x0005f195) indicator_nsta_pane_cp_g3

0x48a1,	// (0x0005f185) indicator_nsta_pane_cp_g4

0x48a9,	// (0x0005f18d) indicator_nsta_pane_cp_g5

0x48b1,	// (0x0005f195) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0006a390) indicator_nsta_pane_cp_g

0xe772,	// (0x00069056) cell_graphic2_pane_t2_ParamLimits

0xe772,	// (0x00069056) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x0006a6a2) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x0006a6a2) cell_graphic2_pane_t

0xe7ab,	// (0x0006908f) cell_graphic2_control_pane_t1

0xa357,	// (0x00064c3b) signal_pane_g3_ParamLimits

0xa357,	// (0x00064c3b) signal_pane_g3

0xa36b,	// (0x00064c4f) signal_pane_g4_ParamLimits

0xa36b,	// (0x00064c4f) signal_pane_g4

0x7e5b,	// (0x0006273f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7e5b,	// (0x0006273f) cell_ai5_widget_list_row_pane_t3

0x83ca,	// (0x00062cae) cell_ituss_key_pane_t1_ParamLimits

0x83ca,	// (0x00062cae) cell_ituss_key_pane_t1

0x2791,	// (0x0005d075) form_field_data_wide_pane_vc_t2_ParamLimits

0x2791,	// (0x0005d075) form_field_data_wide_pane_vc_t2

0x27a5,	// (0x0005d089) form_field_data_wide_pane_vc_t3_ParamLimits

0x27a5,	// (0x0005d089) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x0006a0dc) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x0006a0dc) form_field_data_wide_pane_vc_t

0x4569,	// (0x0005ee4d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4569,	// (0x0005ee4d) form_field_slider_wide_pane_vc_t3

0x4647,	// (0x0005ef2b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4647,	// (0x0005ef2b) form_field_popup_wide_pane_vc_t2

0x465e,	// (0x0005ef42) form_field_popup_wide_pane_vc_t3_ParamLimits

0x465e,	// (0x0005ef42) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0006a37f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0006a37f) form_field_popup_wide_pane_vc_t

0xb90c,	// (0x000661f0) aid_fshwr2_btn_pane_ParamLimits

0xb91e,	// (0x00066202) aid_fshwr2_syb_pane_ParamLimits

0xb930,	// (0x00066214) aid_fshwr2_txt_pane_ParamLimits

0x1285,	// (0x0005bb69) fshwr2_bg_pane_ParamLimits

0xb93f,	// (0x00066223) fshwr2_func_candi_pane_ParamLimits

0xb95e,	// (0x00066242) fshwr2_hwr_syb_pane_ParamLimits

0xb979,	// (0x0006625d) fshwr2_icf_pane_ParamLimits

0x3cf9,	// (0x0005e5dd) list_double_graphic_pane_vc_g4_ParamLimits

0x3cf9,	// (0x0005e5dd) list_double_graphic_pane_vc_g4

0x1c88,	// (0x0005c56c) cell_ituss_key_pane_g3_ParamLimits

0x1c88,	// (0x0005c56c) cell_ituss_key_pane_g3

0x1d30,	// (0x0005c614) cell_ituss_key_t5_ParamLimits

0x1d30,	// (0x0005c614) cell_ituss_key_t5

0xedbc,	// (0x000696a0) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
