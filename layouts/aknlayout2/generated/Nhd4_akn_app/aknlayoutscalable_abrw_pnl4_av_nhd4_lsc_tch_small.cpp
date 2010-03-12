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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000276a8 };

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
0x8566,	// (0x0002fc0e) Screen

0x8572,	// (0x0002fc1a) application_window_ParamLimits

0x8572,	// (0x0002fc1a) application_window

0xb408,	// (0x00032ab0) screen_g1

0x85aa,	// (0x0002fc52) area_bottom_pane_ParamLimits

0x85aa,	// (0x0002fc52) area_bottom_pane

0x31c6,	// (0x0002a86e) area_top_pane_ParamLimits

0x31c6,	// (0x0002a86e) area_top_pane

0x3264,	// (0x0002a90c) main_pane_ParamLimits

0x3264,	// (0x0002a90c) main_pane

0xb412,	// (0x00032aba) misc_graphics

0x96b5,	// (0x00030d5d) battery_pane_ParamLimits

0x96b5,	// (0x00030d5d) battery_pane

0xd03e,	// (0x000346e6) bg_status_flat_pane_g8

0xd046,	// (0x000346ee) bg_status_flat_pane_g9

0xc731,	// (0x00033dd9) context_pane_ParamLimits

0xc731,	// (0x00033dd9) context_pane

0x9820,	// (0x00030ec8) navi_pane_ParamLimits

0x9820,	// (0x00030ec8) navi_pane

0x9898,	// (0x00030f40) signal_pane_ParamLimits

0x9898,	// (0x00030f40) signal_pane

0x0008,

0xf87a,	// (0x00036f22) bg_status_flat_pane_g

0x9928,	// (0x00030fd0) status_pane_g1_ParamLimits

0x9928,	// (0x00030fd0) status_pane_g1

0x993e,	// (0x00030fe6) status_pane_g2_ParamLimits

0x993e,	// (0x00030fe6) status_pane_g2

0xc796,	// (0x00033e3e) status_pane_g3_ParamLimits

0xc796,	// (0x00033e3e) status_pane_g3

0x0004,

0xf7a6,	// (0x00036e4e) status_pane_g_ParamLimits

0xf7a6,	// (0x00036e4e) status_pane_g

0x994a,	// (0x00030ff2) title_pane_ParamLimits

0x994a,	// (0x00030ff2) title_pane

0x99ad,	// (0x00031055) uni_indicator_pane_ParamLimits

0x99ad,	// (0x00031055) uni_indicator_pane

0xc674,	// (0x00033d1c) bg_list_pane_ParamLimits

0xc674,	// (0x00033d1c) bg_list_pane

0x6afb,	// (0x0002e1a3) find_pane

0x8f9c,	// (0x00030644) listscroll_app_pane_ParamLimits

0x8f9c,	// (0x00030644) listscroll_app_pane

0xc694,	// (0x00033d3c) listscroll_form_pane

0x3b09,	// (0x0002b1b1) listscroll_gen_pane_ParamLimits

0x3b09,	// (0x0002b1b1) listscroll_gen_pane

0xc694,	// (0x00033d3c) listscroll_set_pane

0xd893,	// (0x00034f3b) main_idle_act_pane

0xc458,	// (0x00033b00) main_idle_trad_pane

0xc458,	// (0x00033b00) main_list_empty_pane

0xbbd3,	// (0x0003327b) main_midp_pane

0xc6ae,	// (0x00033d56) main_pane_g1_ParamLimits

0xc6ae,	// (0x00033d56) main_pane_g1

0x8fa8,	// (0x00030650) popup_ai_message_window_ParamLimits

0x8fa8,	// (0x00030650) popup_ai_message_window

0x9039,	// (0x000306e1) popup_fep_china_uni_window_ParamLimits

0x9039,	// (0x000306e1) popup_fep_china_uni_window

0x3c27,	// (0x0002b2cf) popup_fep_japan_candidate_window_ParamLimits

0x3c27,	// (0x0002b2cf) popup_fep_japan_candidate_window

0x3c45,	// (0x0002b2ed) popup_fep_japan_predictive_window_ParamLimits

0x3c45,	// (0x0002b2ed) popup_fep_japan_predictive_window

0x9093,	// (0x0003073b) popup_find_window

0x90b0,	// (0x00030758) popup_grid_graphic_window_ParamLimits

0x90b0,	// (0x00030758) popup_grid_graphic_window

0x3ca8,	// (0x0002b350) popup_large_graphic_colour_window

0x9142,	// (0x000307ea) popup_menu_window_ParamLimits

0x9142,	// (0x000307ea) popup_menu_window

0x930e,	// (0x000309b6) popup_note_image_window

0x92d4,	// (0x0003097c) popup_note_wait_window_ParamLimits

0x92d4,	// (0x0003097c) popup_note_wait_window

0x9326,	// (0x000309ce) popup_note_window_ParamLimits

0x9326,	// (0x000309ce) popup_note_window

0x93cc,	// (0x00030a74) popup_query_code_window_ParamLimits

0x93cc,	// (0x00030a74) popup_query_code_window

0x3ef2,	// (0x0002b59a) popup_query_data_code_window_ParamLimits

0x3ef2,	// (0x0002b59a) popup_query_data_code_window

0x9406,	// (0x00030aae) popup_query_data_window_ParamLimits

0x9406,	// (0x00030aae) popup_query_data_window

0x947c,	// (0x00030b24) popup_query_sat_info_window_ParamLimits

0x947c,	// (0x00030b24) popup_query_sat_info_window

0x9513,	// (0x00030bbb) popup_snote_single_graphic_window_ParamLimits

0x9513,	// (0x00030bbb) popup_snote_single_graphic_window

0x9513,	// (0x00030bbb) popup_snote_single_text_window_ParamLimits

0x9513,	// (0x00030bbb) popup_snote_single_text_window

0x3f6f,	// (0x0002b617) popup_sub_window_general

0x409d,	// (0x0002b745) popup_window_general_ParamLimits

0x409d,	// (0x0002b745) popup_window_general

0xc6bc,	// (0x00033d64) power_save_pane

0x8e08,	// (0x000304b0) control_pane_g1_ParamLimits

0x8e08,	// (0x000304b0) control_pane_g1

0x8e31,	// (0x000304d9) control_pane_g2_ParamLimits

0x8e31,	// (0x000304d9) control_pane_g2

0xc65e,	// (0x00033d06) control_pane_g3_ParamLimits

0xc65e,	// (0x00033d06) control_pane_g3

0x0007,

0xf78e,	// (0x00036e36) control_pane_g_ParamLimits

0xf78e,	// (0x00036e36) control_pane_g

0x8e95,	// (0x0003053d) control_pane_t1_ParamLimits

0x8e95,	// (0x0003053d) control_pane_t1

0x8ef3,	// (0x0003059b) control_pane_t2_ParamLimits

0x8ef3,	// (0x0003059b) control_pane_t2

0x0002,

0xf79f,	// (0x00036e47) control_pane_t_ParamLimits

0xf79f,	// (0x00036e47) control_pane_t

0xc57f,	// (0x00033c27) navi_navi_volume_pane_cp1

0xc588,	// (0x00033c30) status_small_icon_pane

0xc590,	// (0x00033c38) status_small_pane_g1_ParamLimits

0xc590,	// (0x00033c38) status_small_pane_g1

0xc5c4,	// (0x00033c6c) status_small_pane_g2_ParamLimits

0xc5c4,	// (0x00033c6c) status_small_pane_g2

0xc5d0,	// (0x00033c78) status_small_pane_g3_ParamLimits

0xc5d0,	// (0x00033c78) status_small_pane_g3

0xc5dc,	// (0x00033c84) status_small_pane_g4_ParamLimits

0xc5dc,	// (0x00033c84) status_small_pane_g4

0xc5e8,	// (0x00033c90) status_small_pane_g5_ParamLimits

0xc5e8,	// (0x00033c90) status_small_pane_g5

0xc5f7,	// (0x00033c9f) status_small_pane_g6_ParamLimits

0xc5f7,	// (0x00033c9f) status_small_pane_g6

0x0007,

0xf77d,	// (0x00036e25) status_small_pane_g_ParamLimits

0xf77d,	// (0x00036e25) status_small_pane_g

0xc627,	// (0x00033ccf) status_small_pane_t1

0xc64a,	// (0x00033cf2) status_small_wait_pane_ParamLimits

0xc64a,	// (0x00033cf2) status_small_wait_pane

0x8c1e,	// (0x000302c6) aid_levels_signal_ParamLimits

0x8c1e,	// (0x000302c6) aid_levels_signal

0x8c36,	// (0x000302de) signal_pane_g1_ParamLimits

0x8c36,	// (0x000302de) signal_pane_g1

0x8c51,	// (0x000302f9) signal_pane_g2_ParamLimits

0x8c51,	// (0x000302f9) signal_pane_g2

0x0003,

0xf70e,	// (0x00036db6) signal_pane_g_ParamLimits

0xf70e,	// (0x00036db6) signal_pane_g

0xc01e,	// (0x000336c6) context_pane_g1

0x8723,	// (0x0002fdcb) title_pane_g1

0x875a,	// (0x0002fe02) title_pane_t1

0xb428,	// (0x00032ad0) title_pane_t2

0xb44e,	// (0x00032af6) title_pane_t3

0x0002,

0xf55d,	// (0x00036c05) title_pane_t

0x99d5,	// (0x0003107d) aid_levels_battery_ParamLimits

0x99d5,	// (0x0003107d) aid_levels_battery

0x99f1,	// (0x00031099) battery_pane_g1_ParamLimits

0x99f1,	// (0x00031099) battery_pane_g1

0x9a0e,	// (0x000310b6) battery_pane_g2_ParamLimits

0x9a0e,	// (0x000310b6) battery_pane_g2

0x0001,

0xf7b1,	// (0x00036e59) battery_pane_g_ParamLimits

0xf7b1,	// (0x00036e59) battery_pane_g

0x9e57,	// (0x000314ff) uni_indicator_pane_g1

0x9e6c,	// (0x00031514) uni_indicator_pane_g2

0xd802,	// (0x00034eaa) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00036fca) uni_indicator_pane_g

0xc2ee,	// (0x00033996) navi_icon_pane_ParamLimits

0xc2ee,	// (0x00033996) navi_icon_pane

0xc272,	// (0x0003391a) navi_midp_pane

0xc30a,	// (0x000339b2) navi_navi_pane

0xc314,	// (0x000339bc) navi_text_pane_ParamLimits

0xc314,	// (0x000339bc) navi_text_pane

0xb408,	// (0x00032ab0) status_small_wait_pane_g1

0xb729,	// (0x00032dd1) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00036fc5) status_small_wait_pane_g

0xd584,	// (0x00034c2c) navi_navi_icon_text_pane

0xd58c,	// (0x00034c34) navi_navi_pane_g1_ParamLimits

0xd58c,	// (0x00034c34) navi_navi_pane_g1

0xd59e,	// (0x00034c46) navi_navi_pane_g2_ParamLimits

0xd59e,	// (0x00034c46) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00036f93) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00036f93) navi_navi_pane_g

0xd5b0,	// (0x00034c58) navi_navi_tabs_pane

0xd5b9,	// (0x00034c61) navi_navi_text_pane

0xd584,	// (0x00034c2c) navi_navi_volume_pane

0xd560,	// (0x00034c08) navi_text_pane_t1

0xd554,	// (0x00034bfc) navi_icon_pane_g1

0xd4bb,	// (0x00034b63) navi_navi_text_pane_t1

0x9dcd,	// (0x00031475) navi_navi_volume_pane_g1

0x9dd5,	// (0x0003147d) volume_small_pane

0x9d29,	// (0x000313d1) navi_navi_icon_text_pane_g1

0x9d31,	// (0x000313d9) navi_navi_icon_text_pane_t1

0xc30a,	// (0x000339b2) navi_tabs_2_long_pane

0xc30a,	// (0x000339b2) navi_tabs_2_pane

0xc30a,	// (0x000339b2) navi_tabs_3_long_pane

0xc30a,	// (0x000339b2) navi_tabs_3_pane

0xc30a,	// (0x000339b2) navi_tabs_4_pane

0x9ce7,	// (0x0003138f) tabs_2_active_pane_ParamLimits

0x9ce7,	// (0x0003138f) tabs_2_active_pane

0x9cf7,	// (0x0003139f) tabs_2_passive_pane_ParamLimits

0x9cf7,	// (0x0003139f) tabs_2_passive_pane

0x9cb5,	// (0x0003135d) tabs_3_active_pane_ParamLimits

0x9cb5,	// (0x0003135d) tabs_3_active_pane

0x9cc5,	// (0x0003136d) tabs_3_passive_pane_ParamLimits

0x9cc5,	// (0x0003136d) tabs_3_passive_pane

0x9cd6,	// (0x0003137e) tabs_3_passive_pane_cp_ParamLimits

0x9cd6,	// (0x0003137e) tabs_3_passive_pane_cp

0x9c71,	// (0x00031319) tabs_4_active_pane_ParamLimits

0x9c71,	// (0x00031319) tabs_4_active_pane

0x9c82,	// (0x0003132a) tabs_4_passive_pane_ParamLimits

0x9c82,	// (0x0003132a) tabs_4_passive_pane

0x9c93,	// (0x0003133b) tabs_4_passive_pane_cp_ParamLimits

0x9c93,	// (0x0003133b) tabs_4_passive_pane_cp

0x9ca4,	// (0x0003134c) tabs_4_passive_pane_cp2_ParamLimits

0x9ca4,	// (0x0003134c) tabs_4_passive_pane_cp2

0x9c51,	// (0x000312f9) tabs_2_long_active_pane_ParamLimits

0x9c51,	// (0x000312f9) tabs_2_long_active_pane

0x9c61,	// (0x00031309) tabs_2_long_passive_pane_ParamLimits

0x9c61,	// (0x00031309) tabs_2_long_passive_pane

0x9c1c,	// (0x000312c4) tabs_3_long_active_pane_ParamLimits

0x9c1c,	// (0x000312c4) tabs_3_long_active_pane

0x9c2d,	// (0x000312d5) tabs_3_long_passive_pane_ParamLimits

0x9c2d,	// (0x000312d5) tabs_3_long_passive_pane

0x9c40,	// (0x000312e8) tabs_3_long_passive_pane_cp_ParamLimits

0x9c40,	// (0x000312e8) tabs_3_long_passive_pane_cp

0x41f4,	// (0x0002b89c) volume_small_pane_g1

0x9bcb,	// (0x00031273) volume_small_pane_g2

0x9bd4,	// (0x0003127c) volume_small_pane_g3

0x9bdd,	// (0x00031285) volume_small_pane_g4

0x9be6,	// (0x0003128e) volume_small_pane_g5

0x9bef,	// (0x00031297) volume_small_pane_g6

0x9bf8,	// (0x000312a0) volume_small_pane_g7

0x9c01,	// (0x000312a9) volume_small_pane_g8

0x9c0a,	// (0x000312b2) volume_small_pane_g9

0x9c13,	// (0x000312bb) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00036f5f) volume_small_pane_g

0xb460,	// (0x00032b08) bg_active_tab_pane_cp2_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp2

0x87e6,	// (0x0002fe8e) tabs_3_active_pane_g1

0x87ee,	// (0x0002fe96) tabs_3_active_pane_t1

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp2_ParamLimits

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp2

0x87e6,	// (0x0002fe8e) tabs_3_passive_pane_g1

0x87ee,	// (0x0002fe96) tabs_3_passive_pane_t1

0xb460,	// (0x00032b08) bg_active_tab_pane_cp3_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp3

0x8800,	// (0x0002fea8) tabs_4_active_pane_g1

0x8808,	// (0x0002feb0) tabs_4_active_pane_t1

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp3_ParamLimits

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp3

0x8800,	// (0x0002fea8) tabs_4_1_passive_pane_g1

0x8808,	// (0x0002feb0) tabs_4_1_passive_pane_t1

0xbbd3,	// (0x0003327b) list_highlight_pane_cp2

0x9ef9,	// (0x000315a1) list_set_pane_ParamLimits

0x9ef9,	// (0x000315a1) list_set_pane

0x9f93,	// (0x0003163b) main_pane_set_t1_ParamLimits

0x9f93,	// (0x0003163b) main_pane_set_t1

0x9fb3,	// (0x0003165b) main_pane_set_t2_ParamLimits

0x9fb3,	// (0x0003165b) main_pane_set_t2

0x9fc7,	// (0x0003166f) main_pane_set_t3_ParamLimits

0x9fc7,	// (0x0003166f) main_pane_set_t3

0x9fd9,	// (0x00031681) main_pane_set_t4_ParamLimits

0x9fd9,	// (0x00031681) main_pane_set_t4

0x0003,

0xf987,	// (0x0003702f) main_pane_set_t_ParamLimits

0xf987,	// (0x0003702f) main_pane_set_t

0x9feb,	// (0x00031693) setting_code_pane

0x9ff3,	// (0x0003169b) setting_slider_graphic_pane

0x9ff3,	// (0x0003169b) setting_slider_pane

0x9ff3,	// (0x0003169b) setting_text_pane

0x9ff3,	// (0x0003169b) setting_volume_pane

0x3495,	// (0x0002ab3d) volume_set_pane

0xb46e,	// (0x00032b16) bg_set_opt_pane_cp

0x349d,	// (0x0002ab45) setting_slider_pane_t1

0x34b6,	// (0x0002ab5e) setting_slider_pane_t2

0x34cf,	// (0x0002ab77) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00036c0c) setting_slider_pane_t

0x34e6,	// (0x0002ab8e) slider_set_pane

0xb412,	// (0x00032aba) bg_set_opt_pane_cp2

0xb47c,	// (0x00032b24) setting_slider_graphic_pane_g1

0x34fc,	// (0x0002aba4) setting_slider_graphic_pane_t1

0x350b,	// (0x0002abb3) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00036c13) setting_slider_graphic_pane_t

0x351a,	// (0x0002abc2) slider_set_pane_cp

0xb412,	// (0x00032aba) input_focus_pane_cp1

0xda11,	// (0x000350b9) list_set_text_pane

0xb408,	// (0x00032ab0) setting_text_pane_g1

0xb412,	// (0x00032aba) input_focus_pane_cp2

0xb408,	// (0x00032ab0) setting_code_pane_g1

0xb485,	// (0x00032b2d) setting_code_pane_t1

0x67f9,	// (0x0002dea1) set_text_pane_t1_ParamLimits

0x67f9,	// (0x0002dea1) set_text_pane_t1

0xbaca,	// (0x00033172) set_opt_bg_pane_g1

0xbad2,	// (0x0003317a) set_opt_bg_pane_g2

0xd9f1,	// (0x00035099) set_opt_bg_pane_g3

0xbae2,	// (0x0003318a) set_opt_bg_pane_g4

0xbaea,	// (0x00033192) set_opt_bg_pane_g5

0xbaf2,	// (0x0003319a) set_opt_bg_pane_g6

0xd9f9,	// (0x000350a1) set_opt_bg_pane_g7

0xda01,	// (0x000350a9) set_opt_bg_pane_g8

0xda09,	// (0x000350b1) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003701c) set_opt_bg_pane_g

0xd9e4,	// (0x0003508c) slider_set_pane_g1

0x43c2,	// (0x0002ba6a) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003700d) slider_set_pane_g

0x435e,	// (0x0002ba06) volume_set_pane_g1

0x4366,	// (0x0002ba0e) volume_set_pane_g2

0x436e,	// (0x0002ba16) volume_set_pane_g3

0x4376,	// (0x0002ba1e) volume_set_pane_g4

0x437e,	// (0x0002ba26) volume_set_pane_g5

0x4386,	// (0x0002ba2e) volume_set_pane_g6

0x438e,	// (0x0002ba36) volume_set_pane_g7

0x4396,	// (0x0002ba3e) volume_set_pane_g8

0x439e,	// (0x0002ba46) volume_set_pane_g9

0x43a6,	// (0x0002ba4e) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00036fe5) volume_set_pane_g

0x881a,	// (0x0002fec2) indicator_pane_ParamLimits

0x881a,	// (0x0002fec2) indicator_pane

0x8842,	// (0x0002feea) main_idle_pane_g2_ParamLimits

0x8842,	// (0x0002feea) main_idle_pane_g2

0x887a,	// (0x0002ff22) main_pane_idle_g1_ParamLimits

0x887a,	// (0x0002ff22) main_pane_idle_g1

0xb493,	// (0x00032b3b) popup_clock_digital_analogue_window_ParamLimits

0xb493,	// (0x00032b3b) popup_clock_digital_analogue_window

0x88a1,	// (0x0002ff49) soft_indicator_pane_ParamLimits

0x88a1,	// (0x0002ff49) soft_indicator_pane

0x88bb,	// (0x0002ff63) wallpaper_pane_ParamLimits

0x88bb,	// (0x0002ff63) wallpaper_pane

0xb408,	// (0x00032ab0) wallpaper_pane_g1

0x88cd,	// (0x0002ff75) indicator_pane_g1_ParamLimits

0x88cd,	// (0x0002ff75) indicator_pane_g1

0xdb7b,	// (0x00035223) navi_navi_icon_text_pane_srt_g1

0xb4c1,	// (0x00032b69) soft_indicator_pane_t1

0xb4db,	// (0x00032b83) aid_ps_area_pane

0x88e6,	// (0x0002ff8e) aid_ps_clock_pane

0xb4ec,	// (0x00032b94) aid_ps_indicator_pane

0xb4f8,	// (0x00032ba0) indicator_ps_pane_ParamLimits

0xb4f8,	// (0x00032ba0) indicator_ps_pane

0xb507,	// (0x00032baf) power_save_pane_g1_ParamLimits

0xb507,	// (0x00032baf) power_save_pane_g1

0xb513,	// (0x00032bbb) power_save_pane_g2_ParamLimits

0xb513,	// (0x00032bbb) power_save_pane_g2

0x30ba,	// (0x0002a762) aid_navinavi_width_pane

0xb4db,	// (0x00032b83) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00036c18) power_save_pane_g_ParamLimits

0xf570,	// (0x00036c18) power_save_pane_g

0xb521,	// (0x00032bc9) power_save_pane_t1_ParamLimits

0xb521,	// (0x00032bc9) power_save_pane_t1

0x88e6,	// (0x0002ff8e) aid_ps_clock_pane_ParamLimits

0xb4ec,	// (0x00032b94) aid_ps_indicator_pane_ParamLimits

0xb533,	// (0x00032bdb) power_save_pane_t4_ParamLimits

0xb533,	// (0x00032bdb) power_save_pane_t4

0x0001,

0xf575,	// (0x00036c1d) power_save_pane_t_ParamLimits

0xf575,	// (0x00036c1d) power_save_pane_t

0xb55d,	// (0x00032c05) power_save_t3_ParamLimits

0xb55d,	// (0x00032c05) power_save_t3

0xb548,	// (0x00032bf0) power_save_t2_ParamLimits

0xb548,	// (0x00032bf0) power_save_t2

0xb572,	// (0x00032c1a) indicator_ps_pane_g1

0x88f4,	// (0x0002ff9c) ai_gene_pane_ParamLimits

0x88f4,	// (0x0002ff9c) ai_gene_pane

0x890b,	// (0x0002ffb3) ai_links_pane_ParamLimits

0x890b,	// (0x0002ffb3) ai_links_pane

0x8923,	// (0x0002ffcb) indicator_pane_cp1_ParamLimits

0x8923,	// (0x0002ffcb) indicator_pane_cp1

0x8932,	// (0x0002ffda) main_pane_idle_g1_cp_ParamLimits

0x8932,	// (0x0002ffda) main_pane_idle_g1_cp

0xb57b,	// (0x00032c23) popup_ai_links_title_window

0x894a,	// (0x0002fff2) soft_indicator_pane_cp1_ParamLimits

0x894a,	// (0x0002fff2) soft_indicator_pane_cp1

0xd7f0,	// (0x00034e98) ai_links_pane_g1

0xd7f9,	// (0x00034ea1) grid_ai_links_pane

0x9e4e,	// (0x000314f6) ai_gene_pane_1

0xd7de,	// (0x00034e86) ai_gene_pane_2

0xd7e7,	// (0x00034e8f) list_highlight_pane_cp4

0x9e2a,	// (0x000314d2) cell_ai_link_pane_ParamLimits

0x9e2a,	// (0x000314d2) cell_ai_link_pane

0xd7d6,	// (0x00034e7e) cell_ai_link_pane_g1

0xb729,	// (0x00032dd1) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00036fc0) cell_ai_link_pane_g

0xb412,	// (0x00032aba) grid_highlight_cp2

0xb412,	// (0x00032aba) bg_popup_sub_pane_cp1

0xb592,	// (0x00032c3a) popup_ai_links_title_window_t1

0xd748,	// (0x00034df0) ai_gene_pane_1_g1_ParamLimits

0xd748,	// (0x00034df0) ai_gene_pane_1_g1

0xd754,	// (0x00034dfc) ai_gene_pane_1_g2_ParamLimits

0xd754,	// (0x00034dfc) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00036fb6) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00036fb6) ai_gene_pane_1_g

0xd761,	// (0x00034e09) ai_gene_pane_1_t1_ParamLimits

0xd761,	// (0x00034e09) ai_gene_pane_1_t1

0xd795,	// (0x00034e3d) grid_ai_soft_ind_pane

0xd733,	// (0x00034ddb) ai_gene_pane_2_t1_ParamLimits

0xd733,	// (0x00034ddb) ai_gene_pane_2_t1

0x895e,	// (0x00030006) main_pane_empty_t1_ParamLimits

0x895e,	// (0x00030006) main_pane_empty_t1

0x8976,	// (0x0003001e) main_pane_empty_t2_ParamLimits

0x8976,	// (0x0003001e) main_pane_empty_t2

0x898b,	// (0x00030033) main_pane_empty_t3_ParamLimits

0x898b,	// (0x00030033) main_pane_empty_t3

0x899d,	// (0x00030045) main_pane_empty_t4_ParamLimits

0x899d,	// (0x00030045) main_pane_empty_t4

0x89af,	// (0x00030057) main_pane_empty_t5_ParamLimits

0x89af,	// (0x00030057) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00036c22) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00036c22) main_pane_empty_t

0xbb1b,	// (0x000331c3) bg_popup_window_pane_ParamLimits

0xbb1b,	// (0x000331c3) bg_popup_window_pane

0xd4c9,	// (0x00034b71) find_popup_pane_cp2_ParamLimits

0xd4c9,	// (0x00034b71) find_popup_pane_cp2

0xd4d5,	// (0x00034b7d) heading_pane_ParamLimits

0xd4d5,	// (0x00034b7d) heading_pane

0xb412,	// (0x00032aba) bg_popup_sub_pane

0x9d4e,	// (0x000313f6) bg_popup_window_pane_g1_ParamLimits

0x9d4e,	// (0x000313f6) bg_popup_window_pane_g1

0x9d5d,	// (0x00031405) bg_popup_window_pane_g2_ParamLimits

0x9d5d,	// (0x00031405) bg_popup_window_pane_g2

0x9d69,	// (0x00031411) bg_popup_window_pane_g3_ParamLimits

0x9d69,	// (0x00031411) bg_popup_window_pane_g3

0x9d75,	// (0x0003141d) bg_popup_window_pane_g4_ParamLimits

0x9d75,	// (0x0003141d) bg_popup_window_pane_g4

0x9d84,	// (0x0003142c) bg_popup_window_pane_g5_ParamLimits

0x9d84,	// (0x0003142c) bg_popup_window_pane_g5

0x9d94,	// (0x0003143c) bg_popup_window_pane_g6_ParamLimits

0x9d94,	// (0x0003143c) bg_popup_window_pane_g6

0x9da0,	// (0x00031448) bg_popup_window_pane_g7_ParamLimits

0x9da0,	// (0x00031448) bg_popup_window_pane_g7

0x9daf,	// (0x00031457) bg_popup_window_pane_g8_ParamLimits

0x9daf,	// (0x00031457) bg_popup_window_pane_g8

0x9dbe,	// (0x00031466) bg_popup_window_pane_g9_ParamLimits

0x9dbe,	// (0x00031466) bg_popup_window_pane_g9

0xd4af,	// (0x00034b57) bg_popup_window_pane_g10_ParamLimits

0xd4af,	// (0x00034b57) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00036f7e) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00036f7e) bg_popup_window_pane_g

0xd466,	// (0x00034b0e) bg_popup_heading_pane_ParamLimits

0xd466,	// (0x00034b0e) bg_popup_heading_pane

0x444a,	// (0x0002baf2) tabs_4_passive_pane_cp_srt_ParamLimits

0x444a,	// (0x0002baf2) tabs_4_passive_pane_cp_srt

0x445c,	// (0x0002bb04) tabs_4_passive_pane_srt_ParamLimits

0xd47a,	// (0x00034b22) heading_pane_g2

0x445c,	// (0x0002bb04) tabs_4_passive_pane_srt

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp3_srt

0xd482,	// (0x00034b2a) heading_pane_t1_ParamLimits

0xd482,	// (0x00034b2a) heading_pane_t1

0xd499,	// (0x00034b41) heading_pane_t2_ParamLimits

0xd499,	// (0x00034b41) heading_pane_t2

0x0001,

0xf8d1,	// (0x00036f79) heading_pane_t_ParamLimits

0xf8d1,	// (0x00036f79) heading_pane_t

0xd006,	// (0x000346ae) bg_popup_heading_pane_g1

0xd097,	// (0x0003473f) bg_popup_heading_pane_g2

0xd0a1,	// (0x00034749) bg_popup_heading_pane_g3

0xd0ab,	// (0x00034753) bg_popup_heading_pane_g4

0xd0b5,	// (0x0003475d) bg_popup_heading_pane_g5

0xd0bf,	// (0x00034767) bg_popup_heading_pane_g6

0xd0c7,	// (0x0003476f) bg_popup_heading_pane_g7

0xd0cf,	// (0x00034777) bg_popup_heading_pane_g8

0xd0d9,	// (0x00034781) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00036f35) bg_popup_heading_pane_g

0xc8a4,	// (0x00033f4c) bg_popup_sub_pane_g1

0xc8b4,	// (0x00033f5c) bg_popup_sub_pane_g2

0xc8ac,	// (0x00033f54) bg_popup_sub_pane_g3

0xc8c4,	// (0x00033f6c) bg_popup_sub_pane_g4

0xc8bc,	// (0x00033f64) bg_popup_sub_pane_g5

0xc8cc,	// (0x00033f74) bg_popup_sub_pane_g6

0xc8d4,	// (0x00033f7c) bg_popup_sub_pane_g7

0xc8e4,	// (0x00033f8c) bg_popup_sub_pane_g8

0xc8dc,	// (0x00033f84) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00036f0f) bg_popup_sub_pane_g

0xb460,	// (0x00032b08) bg_popup_window_pane_cp5_ParamLimits

0xb460,	// (0x00032b08) bg_popup_window_pane_cp5

0xb5af,	// (0x00032c57) popup_note_window_g1_ParamLimits

0xb5af,	// (0x00032c57) popup_note_window_g1

0xb5bb,	// (0x00032c63) popup_note_window_t1_ParamLimits

0xb5bb,	// (0x00032c63) popup_note_window_t1

0xb5cd,	// (0x00032c75) popup_note_window_t2_ParamLimits

0xb5cd,	// (0x00032c75) popup_note_window_t2

0xb5df,	// (0x00032c87) popup_note_window_t3_ParamLimits

0xb5df,	// (0x00032c87) popup_note_window_t3

0xb5f1,	// (0x00032c99) popup_note_window_t4_ParamLimits

0xb5f1,	// (0x00032c99) popup_note_window_t4

0xb619,	// (0x00032cc1) popup_note_window_t5_ParamLimits

0xb619,	// (0x00032cc1) popup_note_window_t5

0x0004,

0xf585,	// (0x00036c2d) popup_note_window_t_ParamLimits

0xf585,	// (0x00036c2d) popup_note_window_t

0xb63d,	// (0x00032ce5) bg_popup_window_pane_cp6_ParamLimits

0xb63d,	// (0x00032ce5) bg_popup_window_pane_cp6

0xcf7a,	// (0x00034622) popup_note_image_window_g1_ParamLimits

0xcf7a,	// (0x00034622) popup_note_image_window_g1

0xcf86,	// (0x0003462e) popup_note_image_window_g2_ParamLimits

0xcf86,	// (0x0003462e) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00036f03) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00036f03) popup_note_image_window_g

0xcf9f,	// (0x00034647) popup_note_image_window_t1_ParamLimits

0xcf9f,	// (0x00034647) popup_note_image_window_t1

0xcfb8,	// (0x00034660) popup_note_image_window_t2_ParamLimits

0xcfb8,	// (0x00034660) popup_note_image_window_t2

0xcfd1,	// (0x00034679) popup_note_image_window_t3_ParamLimits

0xcfd1,	// (0x00034679) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00036f08) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00036f08) popup_note_image_window_t

0xce57,	// (0x000344ff) bg_popup_window_pane_cp7_ParamLimits

0xce57,	// (0x000344ff) bg_popup_window_pane_cp7

0xce87,	// (0x0003452f) popup_note_wait_window_g1_ParamLimits

0xce87,	// (0x0003452f) popup_note_wait_window_g1

0xce93,	// (0x0003453b) popup_note_wait_window_g2_ParamLimits

0xce93,	// (0x0003453b) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00036ef1) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00036ef1) popup_note_wait_window_g

0xceab,	// (0x00034553) popup_note_wait_window_t1_ParamLimits

0xceab,	// (0x00034553) popup_note_wait_window_t1

0xced2,	// (0x0003457a) popup_note_wait_window_t2_ParamLimits

0xced2,	// (0x0003457a) popup_note_wait_window_t2

0xceef,	// (0x00034597) popup_note_wait_window_t3_ParamLimits

0xceef,	// (0x00034597) popup_note_wait_window_t3

0xcf02,	// (0x000345aa) popup_note_wait_window_t4_ParamLimits

0xcf02,	// (0x000345aa) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00036ef8) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00036ef8) popup_note_wait_window_t

0xcf27,	// (0x000345cf) wait_bar_pane_ParamLimits

0xcf27,	// (0x000345cf) wait_bar_pane

0xb412,	// (0x00032aba) wait_anim_pane

0xb412,	// (0x00032aba) wait_border_pane

0xb408,	// (0x00032ab0) wait_anim_pane_g1

0xb408,	// (0x00032ab0) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00036db1) wait_anim_pane_g

0xcdfb,	// (0x000344a3) wait_border_pane_g1

0xce06,	// (0x000344ae) wait_border_pane_g2

0xce0f,	// (0x000344b7) wait_border_pane_g3

0x0002,

0xf842,	// (0x00036eea) wait_border_pane_g

0xcc6b,	// (0x00034313) bg_popup_window_pane_cp16_ParamLimits

0xcc6b,	// (0x00034313) bg_popup_window_pane_cp16

0xcd6b,	// (0x00034413) indicator_popup_pane_cp4_ParamLimits

0xcd6b,	// (0x00034413) indicator_popup_pane_cp4

0xcd7f,	// (0x00034427) popup_query_data_window_t1_ParamLimits

0xcd7f,	// (0x00034427) popup_query_data_window_t1

0xcd91,	// (0x00034439) popup_query_data_window_t2_ParamLimits

0xcd91,	// (0x00034439) popup_query_data_window_t2

0xcdaa,	// (0x00034452) popup_query_data_window_t3_ParamLimits

0xcdaa,	// (0x00034452) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00036ee3) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00036ee3) popup_query_data_window_t

0xcdc4,	// (0x0003446c) query_popup_data_pane_ParamLimits

0xcdc4,	// (0x0003446c) query_popup_data_pane

0xcdd8,	// (0x00034480) query_popup_data_pane_cp1_ParamLimits

0xcdd8,	// (0x00034480) query_popup_data_pane_cp1

0xcc6b,	// (0x00034313) bg_popup_window_pane_cp10_ParamLimits

0xcc6b,	// (0x00034313) bg_popup_window_pane_cp10

0xcc9d,	// (0x00034345) indicator_popup_pane_ParamLimits

0xcc9d,	// (0x00034345) indicator_popup_pane

0xccbf,	// (0x00034367) popup_query_code_window_t1_ParamLimits

0xccbf,	// (0x00034367) popup_query_code_window_t1

0xccd9,	// (0x00034381) popup_query_code_window_t2_ParamLimits

0xccd9,	// (0x00034381) popup_query_code_window_t2

0xcd22,	// (0x000343ca) popup_query_code_window_t3_ParamLimits

0xcd22,	// (0x000343ca) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00036edc) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00036edc) popup_query_code_window_t

0xcd51,	// (0x000343f9) query_popup_pane_ParamLimits

0xcd51,	// (0x000343f9) query_popup_pane

0xb63d,	// (0x00032ce5) bg_popup_window_pane_cp15_ParamLimits

0xb63d,	// (0x00032ce5) bg_popup_window_pane_cp15

0xb65b,	// (0x00032d03) indicator_popup_pane_cp1_ParamLimits

0xb65b,	// (0x00032d03) indicator_popup_pane_cp1

0xb66e,	// (0x00032d16) indicator_popup_pane_cp2_ParamLimits

0xb66e,	// (0x00032d16) indicator_popup_pane_cp2

0xb681,	// (0x00032d29) popup_query_data_code_window_g1_ParamLimits

0xb681,	// (0x00032d29) popup_query_data_code_window_g1

0xb694,	// (0x00032d3c) popup_query_data_code_window_t1_ParamLimits

0xb694,	// (0x00032d3c) popup_query_data_code_window_t1

0xb6a6,	// (0x00032d4e) popup_query_data_code_window_t2_ParamLimits

0xb6a6,	// (0x00032d4e) popup_query_data_code_window_t2

0xb6b8,	// (0x00032d60) popup_query_data_code_window_t3_ParamLimits

0xb6b8,	// (0x00032d60) popup_query_data_code_window_t3

0xb6ce,	// (0x00032d76) popup_query_data_code_window_t4_ParamLimits

0xb6ce,	// (0x00032d76) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00036c38) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00036c38) popup_query_data_code_window_t

0x4107,	// (0x0002b7af) list_single_midp_graphic_pane_g3

0xb6e6,	// (0x00032d8e) query_popup_data_pane_cp2_ParamLimits

0xb6f9,	// (0x00032da1) query_popup_pane_cp2_ParamLimits

0xb6f9,	// (0x00032da1) query_popup_pane_cp2

0xb412,	// (0x00032aba) bg_popup_window_pane_cp11

0xcc63,	// (0x0003430b) heading_pane_cp5

0xb787,	// (0x00032e2f) listscroll_popup_info_pane

0xb412,	// (0x00032aba) input_focus_pane_cp3

0xb70c,	// (0x00032db4) query_popup_pane_t1

0xb71a,	// (0x00032dc2) list_popup_info_pane_ParamLimits

0xb71a,	// (0x00032dc2) list_popup_info_pane

0xb729,	// (0x00032dd1) listscroll_popup_info_pane_g1

0xb731,	// (0x00032dd9) scroll_pane_cp7

0xb73b,	// (0x00032de3) popup_info_list_pane_t1_ParamLimits

0xb73b,	// (0x00032de3) popup_info_list_pane_t1

0xb755,	// (0x00032dfd) popup_info_list_pane_t2_ParamLimits

0xb755,	// (0x00032dfd) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00036c41) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00036c41) popup_info_list_pane_t

0xb412,	// (0x00032aba) bg_popup_window_pane_cp12

0xdb95,	// (0x0003523d) find_popup_pane

0xb46e,	// (0x00032b16) bg_popup_window_pane_cp3

0xb76f,	// (0x00032e17) heading_pane_cp3

0xb77b,	// (0x00032e23) listscroll_popup_graphic_pane

0xb412,	// (0x00032aba) bg_popup_window_pane_cp4

0x8a11,	// (0x000300b9) heading_pane_cp4

0xb787,	// (0x00032e2f) listscroll_popup_colour_pane

0x8a19,	// (0x000300c1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8a19,	// (0x000300c1) cell_large_graphic_colour_none_popup_pane

0x8a2d,	// (0x000300d5) grid_large_graphic_colour_popup_pane_ParamLimits

0x8a2d,	// (0x000300d5) grid_large_graphic_colour_popup_pane

0x8a51,	// (0x000300f9) listscroll_popup_colour_pane_g1_ParamLimits

0x8a51,	// (0x000300f9) listscroll_popup_colour_pane_g1

0x8a68,	// (0x00030110) listscroll_popup_colour_pane_g2_ParamLimits

0x8a68,	// (0x00030110) listscroll_popup_colour_pane_g2

0x8a7f,	// (0x00030127) listscroll_popup_colour_pane_g3_ParamLimits

0x8a7f,	// (0x00030127) listscroll_popup_colour_pane_g3

0x8a8f,	// (0x00030137) listscroll_popup_colour_pane_g4_ParamLimits

0x8a8f,	// (0x00030137) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00036c46) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00036c46) listscroll_popup_colour_pane_g

0xb78f,	// (0x00032e37) scroll_pane_cp6_ParamLimits

0xb78f,	// (0x00032e37) scroll_pane_cp6

0x8a9e,	// (0x00030146) cell_large_graphic_colour_popup_pane_ParamLimits

0x8a9e,	// (0x00030146) cell_large_graphic_colour_popup_pane

0xb7a1,	// (0x00032e49) cell_large_graphic_colour_none_popup_pane_t1

0xb412,	// (0x00032aba) grid_highlight_pane_cp5

0xb7b0,	// (0x00032e58) cell_large_graphic_colour_popup_pane_g1

0xb7b8,	// (0x00032e60) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00036c4f) cell_large_graphic_colour_popup_pane_g

0xb7c0,	// (0x00032e68) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7c9,	// (0x00032e71) grid_highlight_pane_cp4

0xb7d1,	// (0x00032e79) bg_popup_window_pane_cp8_ParamLimits

0xb7d1,	// (0x00032e79) bg_popup_window_pane_cp8

0xb7ec,	// (0x00032e94) popup_snote_single_text_window_g1_ParamLimits

0xb7ec,	// (0x00032e94) popup_snote_single_text_window_g1

0xb7fe,	// (0x00032ea6) popup_snote_single_text_window_t1_ParamLimits

0xb7fe,	// (0x00032ea6) popup_snote_single_text_window_t1

0xb811,	// (0x00032eb9) popup_snote_single_text_window_t2_ParamLimits

0xb811,	// (0x00032eb9) popup_snote_single_text_window_t2

0xb824,	// (0x00032ecc) popup_snote_single_text_window_t3_ParamLimits

0xb824,	// (0x00032ecc) popup_snote_single_text_window_t3

0xb85d,	// (0x00032f05) popup_snote_single_text_window_t4_ParamLimits

0xb85d,	// (0x00032f05) popup_snote_single_text_window_t4

0xb891,	// (0x00032f39) popup_snote_single_text_window_t5_ParamLimits

0xb891,	// (0x00032f39) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00036c54) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00036c54) popup_snote_single_text_window_t

0xb8c0,	// (0x00032f68) bg_popup_window_pane_cp9_ParamLimits

0xb8c0,	// (0x00032f68) bg_popup_window_pane_cp9

0xb7ec,	// (0x00032e94) popup_snote_single_graphic_window_g1_ParamLimits

0xb7ec,	// (0x00032e94) popup_snote_single_graphic_window_g1

0xb8ce,	// (0x00032f76) popup_snote_single_graphic_window_g2_ParamLimits

0xb8ce,	// (0x00032f76) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00036c5f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00036c5f) popup_snote_single_graphic_window_g

0xb8da,	// (0x00032f82) popup_snote_single_graphic_window_t1_ParamLimits

0xb8da,	// (0x00032f82) popup_snote_single_graphic_window_t1

0xb8ed,	// (0x00032f95) popup_snote_single_graphic_window_t2_ParamLimits

0xb8ed,	// (0x00032f95) popup_snote_single_graphic_window_t2

0xb900,	// (0x00032fa8) popup_snote_single_graphic_window_t3_ParamLimits

0xb900,	// (0x00032fa8) popup_snote_single_graphic_window_t3

0xb939,	// (0x00032fe1) popup_snote_single_graphic_window_t4_ParamLimits

0xb939,	// (0x00032fe1) popup_snote_single_graphic_window_t4

0xb96d,	// (0x00033015) popup_snote_single_graphic_window_t5_ParamLimits

0xb96d,	// (0x00033015) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00036c64) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00036c64) popup_snote_single_graphic_window_t

0xdb19,	// (0x000351c1) grid_graphic_popup_pane_ParamLimits

0xdb19,	// (0x000351c1) grid_graphic_popup_pane

0xdb45,	// (0x000351ed) listscroll_popup_graphic_pane_g1_ParamLimits

0xdb45,	// (0x000351ed) listscroll_popup_graphic_pane_g1

0xa11e,	// (0x000317c6) listscroll_popup_graphic_pane_g2_ParamLimits

0xa11e,	// (0x000317c6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00037059) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00037059) listscroll_popup_graphic_pane_g

0xd8a5,	// (0x00034f4d) scroll_pane_cp5

0xa0e2,	// (0x0003178a) cell_graphic_popup_pane_ParamLimits

0xa0e2,	// (0x0003178a) cell_graphic_popup_pane

0xdae4,	// (0x0003518c) cell_graphic_popup_pane_g1

0xdaec,	// (0x00035194) cell_graphic_popup_pane_g2

0xb7c0,	// (0x00032e68) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00037052) cell_graphic_popup_pane_g

0xdaf5,	// (0x0003519d) cell_graphic_popup_pane_t2

0xb7c9,	// (0x00032e71) grid_highlight_pane_cp3

0xb9ae,	// (0x00033056) list_gen_pane_ParamLimits

0xb9ae,	// (0x00033056) list_gen_pane

0xb9d6,	// (0x0003307e) scroll_pane

0xa09d,	// (0x00031745) bg_list_pane_g1_ParamLimits

0xa09d,	// (0x00031745) bg_list_pane_g1

0xda93,	// (0x0003513b) bg_list_pane_g2_ParamLimits

0xda93,	// (0x0003513b) bg_list_pane_g2

0xdaa6,	// (0x0003514e) bg_list_pane_g3_ParamLimits

0xdaa6,	// (0x0003514e) bg_list_pane_g3

0xdab8,	// (0x00035160) bg_list_pane_g4_ParamLimits

0xdab8,	// (0x00035160) bg_list_pane_g4

0xa0b8,	// (0x00031760) bg_list_pane_g5_ParamLimits

0xa0b8,	// (0x00031760) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00037047) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00037047) bg_list_pane_g

0xa026,	// (0x000316ce) list_double2_graphic_large_graphic_pane_ParamLimits

0xa026,	// (0x000316ce) list_double2_graphic_large_graphic_pane

0xa026,	// (0x000316ce) list_double2_graphic_pane_ParamLimits

0xa026,	// (0x000316ce) list_double2_graphic_pane

0xa026,	// (0x000316ce) list_double2_large_graphic_pane_ParamLimits

0xa026,	// (0x000316ce) list_double2_large_graphic_pane

0xa039,	// (0x000316e1) list_double2_pane_ParamLimits

0xa039,	// (0x000316e1) list_double2_pane

0xa026,	// (0x000316ce) list_double_graphic_heading_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_graphic_heading_pane

0xa026,	// (0x000316ce) list_double_graphic_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_graphic_pane

0xa026,	// (0x000316ce) list_double_heading_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_heading_pane

0xa026,	// (0x000316ce) list_double_large_graphic_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_large_graphic_pane

0xa026,	// (0x000316ce) list_double_number_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_number_pane

0xa026,	// (0x000316ce) list_double_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_pane

0xa026,	// (0x000316ce) list_double_time_pane_ParamLimits

0xa026,	// (0x000316ce) list_double_time_pane

0xa026,	// (0x000316ce) list_setting_number_pane_ParamLimits

0xa026,	// (0x000316ce) list_setting_number_pane

0xa026,	// (0x000316ce) list_setting_pane_ParamLimits

0xa026,	// (0x000316ce) list_setting_pane

0xa04d,	// (0x000316f5) list_single_2graphic_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_2graphic_pane

0xa04d,	// (0x000316f5) list_single_graphic_heading_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_graphic_heading_pane

0xa04d,	// (0x000316f5) list_single_graphic_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_graphic_pane

0xa04d,	// (0x000316f5) list_single_heading_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_heading_pane

0xa039,	// (0x000316e1) list_single_large_graphic_pane_ParamLimits

0xa039,	// (0x000316e1) list_single_large_graphic_pane

0xa04d,	// (0x000316f5) list_single_number_heading_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_number_heading_pane

0xa04d,	// (0x000316f5) list_single_number_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_number_pane

0xa04d,	// (0x000316f5) list_single_pane_ParamLimits

0xa04d,	// (0x000316f5) list_single_pane

0xb412,	// (0x00032aba) list_highlight_pane_cp1

0x681f,	// (0x0002dec7) list_single_pane_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_pane_g1

0x682b,	// (0x0002ded3) list_single_pane_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_pane_g

0x74b3,	// (0x0002eb5b) list_single_pane_t1_ParamLimits

0x74b3,	// (0x0002eb5b) list_single_pane_t1

0x681f,	// (0x0002dec7) list_single_number_pane_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_number_pane_g1

0x682b,	// (0x0002ded3) list_single_number_pane_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_number_pane_g

0x73e7,	// (0x0002ea8f) list_single_number_pane_t1_ParamLimits

0x73e7,	// (0x0002ea8f) list_single_number_pane_t1

0x7473,	// (0x0002eb1b) list_single_number_pane_t2_ParamLimits

0x7473,	// (0x0002eb1b) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00037008) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00037008) list_single_number_pane_t

0x6813,	// (0x0002debb) list_single_graphic_pane_g1_ParamLimits

0x6813,	// (0x0002debb) list_single_graphic_pane_g1

0x681f,	// (0x0002dec7) list_single_graphic_pane_g2_ParamLimits

0x681f,	// (0x0002dec7) list_single_graphic_pane_g2

0x682b,	// (0x0002ded3) list_single_graphic_pane_g3_ParamLimits

0x682b,	// (0x0002ded3) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00036c6f) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00036c6f) list_single_graphic_pane_g

0x6837,	// (0x0002dedf) list_single_graphic_pane_t1_ParamLimits

0x6837,	// (0x0002dedf) list_single_graphic_pane_t1

0x681f,	// (0x0002dec7) list_single_heading_pane_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_heading_pane_g1

0x682b,	// (0x0002ded3) list_single_heading_pane_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_heading_pane_g

0x684d,	// (0x0002def5) list_single_heading_pane_t1_ParamLimits

0x684d,	// (0x0002def5) list_single_heading_pane_t1

0x6863,	// (0x0002df0b) list_single_heading_pane_t2_ParamLimits

0x6863,	// (0x0002df0b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00036c7b) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00036c7b) list_single_heading_pane_t

0x681f,	// (0x0002dec7) list_single_number_heading_pane_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_number_heading_pane_g1

0x682b,	// (0x0002ded3) list_single_number_heading_pane_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_number_heading_pane_g

0x684d,	// (0x0002def5) list_single_number_heading_pane_t1_ParamLimits

0x684d,	// (0x0002def5) list_single_number_heading_pane_t1

0x6875,	// (0x0002df1d) list_single_number_heading_pane_t2_ParamLimits

0x6875,	// (0x0002df1d) list_single_number_heading_pane_t2

0x6887,	// (0x0002df2f) list_single_number_heading_pane_t3_ParamLimits

0x6887,	// (0x0002df2f) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00036c80) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00036c80) list_single_number_heading_pane_t

0x6899,	// (0x0002df41) list_single_graphic_heading_pane_g1_ParamLimits

0x6899,	// (0x0002df41) list_single_graphic_heading_pane_g1

0x01a4,	// (0x0002784c) list_single_graphic_heading_pane_g4_ParamLimits

0x01a4,	// (0x0002784c) list_single_graphic_heading_pane_g4

0x682b,	// (0x0002ded3) list_single_graphic_heading_pane_g5_ParamLimits

0x682b,	// (0x0002ded3) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00036c87) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00036c87) list_single_graphic_heading_pane_g

0x684d,	// (0x0002def5) list_single_graphic_heading_pane_t1_ParamLimits

0x684d,	// (0x0002def5) list_single_graphic_heading_pane_t1

0x68b6,	// (0x0002df5e) list_single_graphic_heading_pane_t2_ParamLimits

0x68b6,	// (0x0002df5e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00036c8e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00036c8e) list_single_graphic_heading_pane_t

0x75e4,	// (0x0002ec8c) list_single_large_graphic_pane_g1_ParamLimits

0x75e4,	// (0x0002ec8c) list_single_large_graphic_pane_g1

0x75f0,	// (0x0002ec98) list_single_large_graphic_pane_g2_ParamLimits

0x75f0,	// (0x0002ec98) list_single_large_graphic_pane_g2

0x75fc,	// (0x0002eca4) list_single_large_graphic_pane_g3_ParamLimits

0x75fc,	// (0x0002eca4) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00036c93) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00036c93) list_single_large_graphic_pane_g

0xce06,	// (0x000344ae) wait_border_pane_g2_copy1

0x01b5,	// (0x0002785d) list_single_large_graphic_pane_g4_cp2

0x7608,	// (0x0002ecb0) list_single_large_graphic_pane_t1_ParamLimits

0x7608,	// (0x0002ecb0) list_single_large_graphic_pane_t1

0x01bd,	// (0x00027865) list_double_pane_g1_ParamLimits

0x01bd,	// (0x00027865) list_double_pane_g1

0x01c9,	// (0x00027871) list_double_pane_g2_ParamLimits

0x01c9,	// (0x00027871) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00036c9a) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00036c9a) list_double_pane_g

0x01d5,	// (0x0002787d) list_double_pane_t1_ParamLimits

0x01d5,	// (0x0002787d) list_double_pane_t1

0x01eb,	// (0x00027893) list_double_pane_t2_ParamLimits

0x01eb,	// (0x00027893) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00036c9f) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00036c9f) list_double_pane_t

0x01fd,	// (0x000278a5) list_double2_pane_g1_ParamLimits

0x01fd,	// (0x000278a5) list_double2_pane_g1

0x6aef,	// (0x0002e197) list_double2_pane_g2_ParamLimits

0x6aef,	// (0x0002e197) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00036ca4) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00036ca4) list_double2_pane_g

0x020e,	// (0x000278b6) list_double2_pane_t1_ParamLimits

0x020e,	// (0x000278b6) list_double2_pane_t1

0x0224,	// (0x000278cc) list_double2_pane_t2_ParamLimits

0x0224,	// (0x000278cc) list_double2_pane_t2

0x0001,

0xf601,	// (0x00036ca9) list_double2_pane_t_ParamLimits

0xf601,	// (0x00036ca9) list_double2_pane_t

0x01bd,	// (0x00027865) list_double_number_pane_g1_ParamLimits

0x01bd,	// (0x00027865) list_double_number_pane_g1

0x01c9,	// (0x00027871) list_double_number_pane_g2_ParamLimits

0x01c9,	// (0x00027871) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00036c9a) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00036c9a) list_double_number_pane_g

0x0236,	// (0x000278de) list_double_number_pane_t1_ParamLimits

0x0236,	// (0x000278de) list_double_number_pane_t1

0x0248,	// (0x000278f0) list_double_number_pane_t2_ParamLimits

0x0248,	// (0x000278f0) list_double_number_pane_t2

0x025e,	// (0x00027906) list_double_number_pane_t3_ParamLimits

0x025e,	// (0x00027906) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00036cae) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00036cae) list_double_number_pane_t

0x0270,	// (0x00027918) list_double_graphic_pane_g1_ParamLimits

0x0270,	// (0x00027918) list_double_graphic_pane_g1

0x027c,	// (0x00027924) list_double_graphic_pane_g2_ParamLimits

0x027c,	// (0x00027924) list_double_graphic_pane_g2

0x028b,	// (0x00027933) list_double_graphic_pane_g3_ParamLimits

0x028b,	// (0x00027933) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00036cb5) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00036cb5) list_double_graphic_pane_g

0x02a3,	// (0x0002794b) list_double_graphic_pane_t1_ParamLimits

0x02a3,	// (0x0002794b) list_double_graphic_pane_t1

0x02b9,	// (0x00027961) list_double_graphic_pane_t2_ParamLimits

0x02b9,	// (0x00027961) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00036cbe) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00036cbe) list_double_graphic_pane_t

0x0270,	// (0x00027918) list_double2_graphic_pane_g1_ParamLimits

0x0270,	// (0x00027918) list_double2_graphic_pane_g1

0x02cb,	// (0x00027973) list_double2_graphic_pane_g2_ParamLimits

0x02cb,	// (0x00027973) list_double2_graphic_pane_g2

0x02d7,	// (0x0002797f) list_double2_graphic_pane_g3_ParamLimits

0x02d7,	// (0x0002797f) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00036cc3) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00036cc3) list_double2_graphic_pane_g

0x0248,	// (0x000278f0) list_double2_graphic_pane_t1_ParamLimits

0x0248,	// (0x000278f0) list_double2_graphic_pane_t1

0x02e3,	// (0x0002798b) list_double2_graphic_pane_t2_ParamLimits

0x02e3,	// (0x0002798b) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00036cca) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00036cca) list_double2_graphic_pane_t

0x02f5,	// (0x0002799d) list_double_large_graphic_pane_g1_ParamLimits

0x02f5,	// (0x0002799d) list_double_large_graphic_pane_g1

0x0320,	// (0x000279c8) list_double_large_graphic_pane_g2_ParamLimits

0x0320,	// (0x000279c8) list_double_large_graphic_pane_g2

0x01c9,	// (0x00027871) list_double_large_graphic_pane_g3_ParamLimits

0x01c9,	// (0x00027871) list_double_large_graphic_pane_g3

0x0331,	// (0x000279d9) list_double_large_graphic_pane_g4_ParamLimits

0x0331,	// (0x000279d9) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00036ccf) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00036ccf) list_double_large_graphic_pane_g

0x0343,	// (0x000279eb) list_double_large_graphic_pane_t1_ParamLimits

0x0343,	// (0x000279eb) list_double_large_graphic_pane_t1

0x035c,	// (0x00027a04) list_double_large_graphic_pane_t2_ParamLimits

0x035c,	// (0x00027a04) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00036cda) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00036cda) list_double_large_graphic_pane_t

0x036e,	// (0x00027a16) list_double2_large_graphic_pane_g1_ParamLimits

0x036e,	// (0x00027a16) list_double2_large_graphic_pane_g1

0x0320,	// (0x000279c8) list_double2_large_graphic_pane_g2_ParamLimits

0x0320,	// (0x000279c8) list_double2_large_graphic_pane_g2

0x01c9,	// (0x00027871) list_double2_large_graphic_pane_g3_ParamLimits

0x01c9,	// (0x00027871) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00036cdf) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00036cdf) list_double2_large_graphic_pane_g

0x037a,	// (0x00027a22) list_double2_large_graphic_pane_t1_ParamLimits

0x037a,	// (0x00027a22) list_double2_large_graphic_pane_t1

0x0390,	// (0x00027a38) list_double2_large_graphic_pane_t2_ParamLimits

0x0390,	// (0x00027a38) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00036ce6) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00036ce6) list_double2_large_graphic_pane_t

0x03a2,	// (0x00027a4a) list_double_heading_pane_g1_ParamLimits

0x03a2,	// (0x00027a4a) list_double_heading_pane_g1

0x6916,	// (0x0002dfbe) list_double_heading_pane_g2_ParamLimits

0x6916,	// (0x0002dfbe) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00036ceb) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00036ceb) list_double_heading_pane_g

0x03b3,	// (0x00027a5b) list_double_heading_pane_t1_ParamLimits

0x03b3,	// (0x00027a5b) list_double_heading_pane_t1

0x03c9,	// (0x00027a71) list_double_heading_pane_t2_ParamLimits

0x03c9,	// (0x00027a71) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00036cf0) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00036cf0) list_double_heading_pane_t

0x69a7,	// (0x0002e04f) list_double_graphic_heading_pane_g1_ParamLimits

0x69a7,	// (0x0002e04f) list_double_graphic_heading_pane_g1

0x03a2,	// (0x00027a4a) list_double_graphic_heading_pane_g2_ParamLimits

0x03a2,	// (0x00027a4a) list_double_graphic_heading_pane_g2

0x6916,	// (0x0002dfbe) list_double_graphic_heading_pane_g3_ParamLimits

0x6916,	// (0x0002dfbe) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00036cf5) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00036cf5) list_double_graphic_heading_pane_g

0x03db,	// (0x00027a83) list_double_graphic_heading_pane_t1_ParamLimits

0x03db,	// (0x00027a83) list_double_graphic_heading_pane_t1

0x02e3,	// (0x0002798b) list_double_graphic_heading_pane_t2_ParamLimits

0x02e3,	// (0x0002798b) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00036cfc) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00036cfc) list_double_graphic_heading_pane_t

0x0320,	// (0x000279c8) list_double_time_pane_g1_ParamLimits

0x0320,	// (0x000279c8) list_double_time_pane_g1

0x01c9,	// (0x00027871) list_double_time_pane_g2_ParamLimits

0x01c9,	// (0x00027871) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00036d01) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00036d01) list_double_time_pane_g

0x037a,	// (0x00027a22) list_double_time_pane_t1_ParamLimits

0x037a,	// (0x00027a22) list_double_time_pane_t1

0x03f1,	// (0x00027a99) list_double_time_pane_t2_ParamLimits

0x03f1,	// (0x00027a99) list_double_time_pane_t2

0x0403,	// (0x00027aab) list_double_time_pane_t3_ParamLimits

0x0403,	// (0x00027aab) list_double_time_pane_t3

0x0415,	// (0x00027abd) list_double_time_pane_t4_ParamLimits

0x0415,	// (0x00027abd) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00036d06) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00036d06) list_double_time_pane_t

0x6a02,	// (0x0002e0aa) list_setting_pane_g1_ParamLimits

0x6a02,	// (0x0002e0aa) list_setting_pane_g1

0x6a0e,	// (0x0002e0b6) list_setting_pane_g2_ParamLimits

0x6a0e,	// (0x0002e0b6) list_setting_pane_g2

0x0001,

0xf667,	// (0x00036d0f) list_setting_pane_g_ParamLimits

0xf667,	// (0x00036d0f) list_setting_pane_g

0x0427,	// (0x00027acf) list_setting_pane_t1_ParamLimits

0x0427,	// (0x00027acf) list_setting_pane_t1

0x0441,	// (0x00027ae9) list_setting_pane_t2_ParamLimits

0x0441,	// (0x00027ae9) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00036d14) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00036d14) list_setting_pane_t

0x047e,	// (0x00027b26) set_value_pane_cp_ParamLimits

0x047e,	// (0x00027b26) set_value_pane_cp

0x048a,	// (0x00027b32) list_setting_number_pane_g1_ParamLimits

0x048a,	// (0x00027b32) list_setting_number_pane_g1

0x0496,	// (0x00027b3e) list_setting_number_pane_g2_ParamLimits

0x0496,	// (0x00027b3e) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00036d1b) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00036d1b) list_setting_number_pane_g

0x04a2,	// (0x00027b4a) list_setting_number_pane_t1_ParamLimits

0x04a2,	// (0x00027b4a) list_setting_number_pane_t1

0x04bb,	// (0x00027b63) list_setting_number_pane_t2_ParamLimits

0x04bb,	// (0x00027b63) list_setting_number_pane_t2

0x04d5,	// (0x00027b7d) list_setting_number_pane_t3_ParamLimits

0x04d5,	// (0x00027b7d) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00036d20) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00036d20) list_setting_number_pane_t

0x047e,	// (0x00027b26) set_value_pane_ParamLimits

0x047e,	// (0x00027b26) set_value_pane

0xba0a,	// (0x000330b2) bg_set_opt_pane_ParamLimits

0xba0a,	// (0x000330b2) bg_set_opt_pane

0x70fc,	// (0x0002e7a4) set_value_pane_t1

0xba2b,	// (0x000330d3) slider_set_pane_cp3

0xba34,	// (0x000330dc) volume_small_pane_cp

0xba3d,	// (0x000330e5) list_form_gen_pane

0xba46,	// (0x000330ee) scroll_pane_cp8

0x0518,	// (0x00027bc0) form_field_data_pane_ParamLimits

0x0518,	// (0x00027bc0) form_field_data_pane

0x052f,	// (0x00027bd7) form_field_data_wide_pane_ParamLimits

0x052f,	// (0x00027bd7) form_field_data_wide_pane

0x054f,	// (0x00027bf7) form_field_popup_pane_ParamLimits

0x054f,	// (0x00027bf7) form_field_popup_pane

0x056d,	// (0x00027c15) form_field_popup_wide_pane_ParamLimits

0x056d,	// (0x00027c15) form_field_popup_wide_pane

0x718c,	// (0x0002e834) form_field_slider_pane_ParamLimits

0x718c,	// (0x0002e834) form_field_slider_pane

0x719f,	// (0x0002e847) form_field_slider_wide_pane_ParamLimits

0x719f,	// (0x0002e847) form_field_slider_wide_pane

0xba57,	// (0x000330ff) data_form_pane

0x058e,	// (0x00027c36) form_field_data_pane_t1

0xba63,	// (0x0003310b) input_focus_pane

0xba71,	// (0x00033119) data_form_wide_pane

0x71e2,	// (0x0002e88a) form_field_data_wide_pane_t1

0xb7de,	// (0x00032e86) input_focus_pane_cp6

0x05a8,	// (0x00027c50) form_field_popup_pane_t1

0xba63,	// (0x0003310b) input_focus_pane_cp7

0xba9d,	// (0x00033145) list_form_pane

0x7226,	// (0x0002e8ce) form_field_popup_wide_pane_t1

0xba63,	// (0x0003310b) input_focus_pane_cp8

0xbaa9,	// (0x00033151) list_form_wide_pane

0x05ca,	// (0x00027c72) form_field_slider_pane_t1_ParamLimits

0x05ca,	// (0x00027c72) form_field_slider_pane_t1

0x05e2,	// (0x00027c8a) form_field_slider_pane_t2_ParamLimits

0x05e2,	// (0x00027c8a) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00036d30) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00036d30) form_field_slider_pane_t

0xb460,	// (0x00032b08) input_focus_pane_cp9_ParamLimits

0xb460,	// (0x00032b08) input_focus_pane_cp9

0x05f7,	// (0x00027c9f) slider_cont_pane_ParamLimits

0x05f7,	// (0x00027c9f) slider_cont_pane

0xbab8,	// (0x00033160) form_field_slider_wide_pane_t1_ParamLimits

0xbab8,	// (0x00033160) form_field_slider_wide_pane_t1

0x727d,	// (0x0002e925) form_field_slider_wide_pane_t2_ParamLimits

0x727d,	// (0x0002e925) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00036d35) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00036d35) form_field_slider_wide_pane_t

0xb460,	// (0x00032b08) input_focus_pane_cp10_ParamLimits

0xb460,	// (0x00032b08) input_focus_pane_cp10

0x060b,	// (0x00027cb3) slider_cont_pane_cp1_ParamLimits

0x060b,	// (0x00027cb3) slider_cont_pane_cp1

0x061f,	// (0x00027cc7) slider_form_pane_cp

0xbaca,	// (0x00033172) input_focus_pane_g1

0xbad2,	// (0x0003317a) input_focus_pane_g2

0xbada,	// (0x00033182) input_focus_pane_g3

0xbae2,	// (0x0003318a) input_focus_pane_g4

0xbaea,	// (0x00033192) input_focus_pane_g5

0xbaf2,	// (0x0003319a) input_focus_pane_g6

0xbafa,	// (0x000331a2) input_focus_pane_g7

0xbb02,	// (0x000331aa) input_focus_pane_g8

0xbb0a,	// (0x000331b2) input_focus_pane_g9

0xb408,	// (0x00032ab0) input_focus_pane_g10

0x0009,

0xf692,	// (0x00036d3a) input_focus_pane_g

0xce0f,	// (0x000344b7) wait_border_pane_g3_copy1

0x0627,	// (0x00027ccf) data_form_pane_t1

0xb408,	// (0x00032ab0) wait_anim_pane_g1_copy1

0x06ca,	// (0x00027d72) data_form_wide_pane_t1

0x0641,	// (0x00027ce9) list_form_graphic_pane_cp_ParamLimits

0x0641,	// (0x00027ce9) list_form_graphic_pane_cp

0xda19,	// (0x000350c1) slider_form_pane_g1

0xda22,	// (0x000350ca) slider_form_pane_g2

0x0006,

0xf990,	// (0x00037038) slider_form_pane_g

0x0654,	// (0x00027cfc) list_form_graphic_pane_ParamLimits

0x0654,	// (0x00027cfc) list_form_graphic_pane

0x72f7,	// (0x0002e99f) list_form_graphic_pane_g1

0x72ff,	// (0x0002e9a7) list_form_graphic_pane_t1_ParamLimits

0x72ff,	// (0x0002e9a7) list_form_graphic_pane_t1

0xb46e,	// (0x00032b16) list_highlight_pane_cp5_ParamLimits

0xb46e,	// (0x00032b16) list_highlight_pane_cp5

0x7314,	// (0x0002e9bc) find_pane_g1

0xbb12,	// (0x000331ba) input_find_pane

0x731d,	// (0x0002e9c5) input_find_pane_g1_ParamLimits

0x731d,	// (0x0002e9c5) input_find_pane_g1

0x7329,	// (0x0002e9d1) input_find_pane_t1_ParamLimits

0x7329,	// (0x0002e9d1) input_find_pane_t1

0x733e,	// (0x0002e9e6) input_find_pane_t2_ParamLimits

0x733e,	// (0x0002e9e6) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00036d4f) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00036d4f) input_find_pane_t

0xbb1b,	// (0x000331c3) input_focus_pane_cp5_ParamLimits

0xbb1b,	// (0x000331c3) input_focus_pane_cp5

0xbb29,	// (0x000331d1) bg_popup_window_pane_cp2_ParamLimits

0xbb29,	// (0x000331d1) bg_popup_window_pane_cp2

0xbb36,	// (0x000331de) listscroll_menu_pane_ParamLimits

0xbb36,	// (0x000331de) listscroll_menu_pane

0x8ad3,	// (0x0003017b) popup_submenu_window_ParamLimits

0x8ad3,	// (0x0003017b) popup_submenu_window

0xbb42,	// (0x000331ea) find_popup_pane_g1

0xbb4a,	// (0x000331f2) input_popup_find_pane_cp

0xbb1b,	// (0x000331c3) input_focus_pane_cp4_ParamLimits

0xbb1b,	// (0x000331c3) input_focus_pane_cp4

0xbb54,	// (0x000331fc) input_popup_find_pane_t1_ParamLimits

0xbb54,	// (0x000331fc) input_popup_find_pane_t1

0xb412,	// (0x00032aba) bg_popup_sub_pane_cp

0xbb82,	// (0x0003322a) listscroll_popup_sub_pane

0xbb8a,	// (0x00033232) list_submenu_pane_ParamLimits

0xbb8a,	// (0x00033232) list_submenu_pane

0xbb9b,	// (0x00033243) scroll_pane_cp4

0xbba3,	// (0x0003324b) list_single_popup_submenu_pane_ParamLimits

0xbba3,	// (0x0003324b) list_single_popup_submenu_pane

0xbbb6,	// (0x0003325e) list_single_popup_submenu_pane_g1

0xbbbe,	// (0x00033266) list_single_popup_submenu_pane_t1_ParamLimits

0xbbbe,	// (0x00033266) list_single_popup_submenu_pane_t1

0xb460,	// (0x00032b08) bg_active_tab_pane_cp1_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp1

0x8b09,	// (0x000301b1) tabs_2_active_pane_g1

0x8b11,	// (0x000301b9) tabs_2_active_pane_t1

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp1_ParamLimits

0xb460,	// (0x00032b08) bg_passive_tab_pane_cp1

0x8b09,	// (0x000301b1) tabs_2_passive_pane_g1

0x8b11,	// (0x000301b9) tabs_2_passive_pane_t1

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp4

0x8b23,	// (0x000301cb) tabs_2_long_active_pane_t1

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp4

0x410f,	// (0x0002b7b7) list_single_midp_graphic_pane_g4_ParamLimits

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp5

0x8b36,	// (0x000301de) tabs_3_long_active_pane_t1

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp5

0x410f,	// (0x0002b7b7) list_single_midp_graphic_pane_g4

0xb46e,	// (0x00032b16) bg_popup_window_pane_cp13_ParamLimits

0xb46e,	// (0x00032b16) bg_popup_window_pane_cp13

0xbbe8,	// (0x00033290) listscroll_popup_fast_pane_ParamLimits

0xbbe8,	// (0x00033290) listscroll_popup_fast_pane

0xbbf7,	// (0x0003329f) grid_popup_fast_pane_ParamLimits

0xbbf7,	// (0x0003329f) grid_popup_fast_pane

0xbc09,	// (0x000332b1) scroll_pane_cp9_ParamLimits

0xbc09,	// (0x000332b1) scroll_pane_cp9

0xee87,	// (0x0003652f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xee87,	// (0x0003652f) list_single_graphic_hl_pane_t1_cp2

0xbc2d,	// (0x000332d5) input_focus_pane_cp20_ParamLimits

0xbc2d,	// (0x000332d5) input_focus_pane_cp20

0xbc3b,	// (0x000332e3) query_popup_data_pane_t1_ParamLimits

0xbc3b,	// (0x000332e3) query_popup_data_pane_t1

0xbc4e,	// (0x000332f6) query_popup_data_pane_t2_ParamLimits

0xbc4e,	// (0x000332f6) query_popup_data_pane_t2

0xbc94,	// (0x0003333c) query_popup_data_pane_t3_ParamLimits

0xbc94,	// (0x0003333c) query_popup_data_pane_t3

0xbcd5,	// (0x0003337d) query_popup_data_pane_t4_ParamLimits

0xbcd5,	// (0x0003337d) query_popup_data_pane_t4

0xbd11,	// (0x000333b9) query_popup_data_pane_t5_ParamLimits

0xbd11,	// (0x000333b9) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00036d54) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00036d54) query_popup_data_pane_t

0xbaca,	// (0x00033172) bg_set_opt_pane_g1

0xbad2,	// (0x0003317a) bg_set_opt_pane_g2

0xbada,	// (0x00033182) bg_set_opt_pane_g3

0xbae2,	// (0x0003318a) bg_set_opt_pane_g4

0xbaea,	// (0x00033192) bg_set_opt_pane_g5

0xbaf2,	// (0x0003319a) bg_set_opt_pane_g6

0xbafa,	// (0x000331a2) bg_set_opt_pane_g7

0xbb02,	// (0x000331aa) bg_set_opt_pane_g8

0xbb0a,	// (0x000331b2) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00036d5f) bg_set_opt_pane_g

0x37c1,	// (0x0002ae69) control_top_pane_stacon_ParamLimits

0x37c1,	// (0x0002ae69) control_top_pane_stacon

0x3814,	// (0x0002aebc) signal_pane_stacon_ParamLimits

0x3814,	// (0x0002aebc) signal_pane_stacon

0xc18c,	// (0x00033834) stacon_top_pane_g1_ParamLimits

0xc18c,	// (0x00033834) stacon_top_pane_g1

0x3839,	// (0x0002aee1) title_pane_stacon_ParamLimits

0x3839,	// (0x0002aee1) title_pane_stacon

0x3863,	// (0x0002af0b) uni_indicator_pane_stacon_ParamLimits

0x3863,	// (0x0002af0b) uni_indicator_pane_stacon

0x3878,	// (0x0002af20) battery_pane_stacon_ParamLimits

0x3878,	// (0x0002af20) battery_pane_stacon

0x38bc,	// (0x0002af64) control_bottom_pane_stacon_ParamLimits

0x38bc,	// (0x0002af64) control_bottom_pane_stacon

0x38df,	// (0x0002af87) navi_pane_stacon_ParamLimits

0x38df,	// (0x0002af87) navi_pane_stacon

0xc1ae,	// (0x00033856) stacon_bottom_pane_g1_ParamLimits

0xc1ae,	// (0x00033856) stacon_bottom_pane_g1

0x3522,	// (0x0002abca) aid_levels_signal_lsc_ParamLimits

0x3522,	// (0x0002abca) aid_levels_signal_lsc

0x3539,	// (0x0002abe1) signal_pane_stacon_g1_ParamLimits

0x3539,	// (0x0002abe1) signal_pane_stacon_g1

0x354d,	// (0x0002abf5) signal_pane_stacon_g2_ParamLimits

0x354d,	// (0x0002abf5) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00036d72) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00036d72) signal_pane_stacon_g

0x3582,	// (0x0002ac2a) title_pane_stacon_t1_ParamLimits

0x3582,	// (0x0002ac2a) title_pane_stacon_t1

0xbd55,	// (0x000333fd) uni_indicator_pane_stacon_g1

0xbd5f,	// (0x00033407) uni_indicator_pane_stacon_g2

0xbd69,	// (0x00033411) uni_indicator_pane_stacon_g3

0xbd73,	// (0x0003341b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00036d7e) uni_indicator_pane_stacon_g

0x35a7,	// (0x0002ac4f) control_top_pane_stacon_g1

0x35af,	// (0x0002ac57) control_top_pane_stacon_t1_ParamLimits

0x35af,	// (0x0002ac57) control_top_pane_stacon_t1

0x35e6,	// (0x0002ac8e) aid_levels_battery_lsc_ParamLimits

0x35e6,	// (0x0002ac8e) aid_levels_battery_lsc

0x35fe,	// (0x0002aca6) battery_pane_stacon_g1_ParamLimits

0x35fe,	// (0x0002aca6) battery_pane_stacon_g1

0x3611,	// (0x0002acb9) battery_pane_stacon_g2_ParamLimits

0x3611,	// (0x0002acb9) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00036d87) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00036d87) battery_pane_stacon_g

0x364f,	// (0x0002acf7) navi_icon_pane_stacon

0x3663,	// (0x0002ad0b) navi_navi_pane_stacon

0x364f,	// (0x0002acf7) navi_text_pane_stacon

0x35a7,	// (0x0002ac4f) control_bottom_pane_stacon_g1

0x3677,	// (0x0002ad1f) control_bottom_pane_stacon_t1_ParamLimits

0x3677,	// (0x0002ad1f) control_bottom_pane_stacon_t1

0x8b48,	// (0x000301f0) grid_app_pane_ParamLimits

0x8b48,	// (0x000301f0) grid_app_pane

0x8b7e,	// (0x00030226) scroll_pane_cp15_ParamLimits

0x8b7e,	// (0x00030226) scroll_pane_cp15

0x8b97,	// (0x0003023f) cell_app_pane_ParamLimits

0x8b97,	// (0x0003023f) cell_app_pane

0x8bde,	// (0x00030286) cell_app_pane_g1_ParamLimits

0x8bde,	// (0x00030286) cell_app_pane_g1

0xbd97,	// (0x0003343f) cell_app_pane_g2_ParamLimits

0xbd97,	// (0x0003343f) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00036d8c) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00036d8c) cell_app_pane_g

0x8bfe,	// (0x000302a6) cell_app_pane_t1_ParamLimits

0x8bfe,	// (0x000302a6) cell_app_pane_t1

0xbda3,	// (0x0003344b) grid_highlight_pane_ParamLimits

0xbda3,	// (0x0003344b) grid_highlight_pane

0xbaca,	// (0x00033172) cell_highlight_pane_g1

0xbad2,	// (0x0003317a) cell_highlight_pane_g2

0xbada,	// (0x00033182) cell_highlight_pane_g3

0xbae2,	// (0x0003318a) cell_highlight_pane_g4

0xbaea,	// (0x00033192) cell_highlight_pane_g5

0xbaf2,	// (0x0003319a) cell_highlight_pane_g6

0xbafa,	// (0x000331a2) cell_highlight_pane_g7

0xbb02,	// (0x000331aa) cell_highlight_pane_g8

0xbb0a,	// (0x000331b2) cell_highlight_pane_g9

0xb408,	// (0x00032ab0) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00036d3a) cell_highlight_pane_g

0xbdb4,	// (0x0003345c) bg_scroll_pane

0x36c1,	// (0x0002ad69) scroll_handle_pane

0xbdfb,	// (0x000334a3) scroll_bg_pane_g1

0xbe10,	// (0x000334b8) scroll_bg_pane_g2

0xbe28,	// (0x000334d0) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00036d91) scroll_bg_pane_g

0xbe3d,	// (0x000334e5) scroll_handle_focus_pane_ParamLimits

0xbe3d,	// (0x000334e5) scroll_handle_focus_pane

0xbdfb,	// (0x000334a3) scroll_handle_pane_g1

0xbe4a,	// (0x000334f2) scroll_handle_pane_g2

0xbe28,	// (0x000334d0) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00036d98) scroll_handle_pane_g

0xbb1b,	// (0x000331c3) bg_popup_sub_pane_cp21_ParamLimits

0xbb1b,	// (0x000331c3) bg_popup_sub_pane_cp21

0xbe5e,	// (0x00033506) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe5e,	// (0x00033506) popup_fep_japan_predictive_window_t1

0xbe75,	// (0x0003351d) popup_fep_japan_predictive_window_t2_ParamLimits

0xbe75,	// (0x0003351d) popup_fep_japan_predictive_window_t2

0xbea8,	// (0x00033550) popup_fep_japan_predictive_window_t3_ParamLimits

0xbea8,	// (0x00033550) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00036d9f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00036d9f) popup_fep_japan_predictive_window_t

0xb412,	// (0x00032aba) bg_popup_sub_pane_cp23

0xbedf,	// (0x00033587) listscroll_japin_cand_pane

0xbee7,	// (0x0003358f) popup_fep_japan_candidate_window_t1

0xbef5,	// (0x0003359d) candidate_pane_ParamLimits

0xbef5,	// (0x0003359d) candidate_pane

0xbf07,	// (0x000335af) scroll_pane_cp30

0xbf0f,	// (0x000335b7) list_single_popup_jap_candidate_pane_ParamLimits

0xbf0f,	// (0x000335b7) list_single_popup_jap_candidate_pane

0xb412,	// (0x00032aba) list_highlight_pane_cp30

0xbf23,	// (0x000335cb) list_single_popup_jap_candidate_pane_t1

0xbf32,	// (0x000335da) level_1_signal

0xbf3f,	// (0x000335e7) level_2_signal

0xbf4c,	// (0x000335f4) level_3_signal

0xbf59,	// (0x00033601) level_4_signal

0xbf66,	// (0x0003360e) level_5_signal

0xbf73,	// (0x0003361b) level_6_signal

0xbf80,	// (0x00033628) level_7_signal

0xbf32,	// (0x000335da) level_1_battery

0xbf3f,	// (0x000335e7) level_2_battery

0xbf4c,	// (0x000335f4) level_3_battery

0xbf59,	// (0x00033601) level_4_battery

0xbf66,	// (0x0003360e) level_5_battery

0xbf73,	// (0x0003361b) level_6_battery

0xbf80,	// (0x00033628) level_7_battery

0xbfa5,	// (0x0003364d) list_menu_pane_ParamLimits

0xbfa5,	// (0x0003364d) list_menu_pane

0xbfbb,	// (0x00033663) scroll_pane_cp25_ParamLimits

0xbfbb,	// (0x00033663) scroll_pane_cp25

0xbfd4,	// (0x0003367c) list_double2_graphic_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double2_graphic_pane_cp2

0xbfd4,	// (0x0003367c) list_double2_large_graphic_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double2_large_graphic_pane_cp2

0xbfd4,	// (0x0003367c) list_double2_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double2_pane_cp2

0xbfd4,	// (0x0003367c) list_double_graphic_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double_graphic_pane_cp2

0xbfd4,	// (0x0003367c) list_double_large_graphic_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double_large_graphic_pane_cp2

0xbfd4,	// (0x0003367c) list_double_number_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double_number_pane_cp2

0xbfd4,	// (0x0003367c) list_double_pane_cp2_ParamLimits

0xbfd4,	// (0x0003367c) list_double_pane_cp2

0xbff6,	// (0x0003369e) list_single_2graphic_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_2graphic_pane_cp2

0xbff6,	// (0x0003369e) list_single_graphic_heading_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_graphic_heading_pane_cp2

0xbff6,	// (0x0003369e) list_single_graphic_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_graphic_pane_cp2

0xbff6,	// (0x0003369e) list_single_heading_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_heading_pane_cp2

0xc00d,	// (0x000336b5) list_single_large_graphic_pane_cp2_ParamLimits

0xc00d,	// (0x000336b5) list_single_large_graphic_pane_cp2

0xbff6,	// (0x0003369e) list_single_number_heading_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_number_heading_pane_cp2

0xbff6,	// (0x0003369e) list_single_number_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_number_pane_cp2

0xbff6,	// (0x0003369e) list_single_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_pane_cp2

0xc027,	// (0x000336cf) bg_popup_sub_pane_cp22

0x3773,	// (0x0002ae1b) popup_side_volume_key_window_g1

0x379d,	// (0x0002ae45) popup_side_volume_key_window_t1

0x37b9,	// (0x0002ae61) volume_small_pane_cp1

0xb460,	// (0x00032b08) bg_popup_sub_pane_cp24_ParamLimits

0xb460,	// (0x00032b08) bg_popup_sub_pane_cp24

0xc03d,	// (0x000336e5) fep_china_uni_candidate_pane_ParamLimits

0xc03d,	// (0x000336e5) fep_china_uni_candidate_pane

0xc051,	// (0x000336f9) fep_china_uni_entry_pane

0xc061,	// (0x00033709) popup_fep_china_uni_window_g1

0xc07d,	// (0x00033725) fep_china_uni_entry_pane_g1

0xc085,	// (0x0003372d) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00036dd0) fep_china_uni_entry_pane_g

0xc08d,	// (0x00033735) fep_entry_item_pane

0xc097,	// (0x0003373f) fep_candidate_item_pane

0xc09f,	// (0x00033747) fep_china_uni_candidate_pane_g1

0xc0a7,	// (0x0003374f) fep_china_uni_candidate_pane_g2

0xc0af,	// (0x00033757) fep_china_uni_candidate_pane_g3

0xc0b7,	// (0x0003375f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00036dd5) fep_china_uni_candidate_pane_g

0xb408,	// (0x00032ab0) fep_entry_item_pane_g1

0xc0bf,	// (0x00033767) fep_entry_item_pane_t1_ParamLimits

0xc0bf,	// (0x00033767) fep_entry_item_pane_t1

0xc0d5,	// (0x0003377d) fep_candidate_item_pane_t1_ParamLimits

0xc0d5,	// (0x0003377d) fep_candidate_item_pane_t1

0xc0ea,	// (0x00033792) fep_candidate_item_pane_t2_ParamLimits

0xc0ea,	// (0x00033792) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00036dde) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00036dde) fep_candidate_item_pane_t

0xb46e,	// (0x00032b16) list_highlight_pane_cp31_ParamLimits

0xb46e,	// (0x00032b16) list_highlight_pane_cp31

0xc0fc,	// (0x000337a4) level_1_signal_lsc

0xc105,	// (0x000337ad) level_2_signal_lsc

0xc10e,	// (0x000337b6) level_3_signal_lsc

0xc117,	// (0x000337bf) level_4_signal_lsc

0xc120,	// (0x000337c8) level_5_signal_lsc

0xc129,	// (0x000337d1) level_6_signal_lsc

0xc132,	// (0x000337da) level_7_signal_lsc

0xc132,	// (0x000337da) level_1_battery_lsc

0xc13b,	// (0x000337e3) level_2_battery_lsc

0xc144,	// (0x000337ec) level_3_battery_lsc

0xc14d,	// (0x000337f5) level_4_battery_lsc

0xc156,	// (0x000337fe) level_5_battery_lsc

0xc15f,	// (0x00033807) level_6_battery_lsc

0xc0fc,	// (0x000337a4) level_7_battery_lsc

0xc168,	// (0x00033810) scroll_handle_focus_pane_g1

0xc171,	// (0x00033819) scroll_handle_focus_pane_g2

0xc17a,	// (0x00033822) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00036de3) scroll_handle_focus_pane_g

0x7353,	// (0x0002e9fb) list_single_2graphic_pane_g1_ParamLimits

0x7353,	// (0x0002e9fb) list_single_2graphic_pane_g1

0x01a4,	// (0x0002784c) list_single_2graphic_pane_g2_ParamLimits

0x01a4,	// (0x0002784c) list_single_2graphic_pane_g2

0x682b,	// (0x0002ded3) list_single_2graphic_pane_g3_ParamLimits

0x682b,	// (0x0002ded3) list_single_2graphic_pane_g3

0x735f,	// (0x0002ea07) list_single_2graphic_pane_g4_ParamLimits

0x735f,	// (0x0002ea07) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00036dea) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00036dea) list_single_2graphic_pane_g

0x736b,	// (0x0002ea13) list_single_2graphic_pane_t1_ParamLimits

0x736b,	// (0x0002ea13) list_single_2graphic_pane_t1

0x0668,	// (0x00027d10) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0668,	// (0x00027d10) list_double2_graphic_large_graphic_pane_g1

0x0320,	// (0x000279c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0320,	// (0x000279c8) list_double2_graphic_large_graphic_pane_g2

0x01c9,	// (0x00027871) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x01c9,	// (0x00027871) list_double2_graphic_large_graphic_pane_g3

0x067a,	// (0x00027d22) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x067a,	// (0x00027d22) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00036df3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00036df3) list_double2_graphic_large_graphic_pane_g

0x0686,	// (0x00027d2e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0686,	// (0x00027d2e) list_double2_graphic_large_graphic_pane_t1

0x069c,	// (0x00027d44) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x069c,	// (0x00027d44) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00036dfc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00036dfc) list_double2_graphic_large_graphic_pane_t

0xc23c,	// (0x000338e4) popup_fast_swap_window_ParamLimits

0xc23c,	// (0x000338e4) popup_fast_swap_window

0xc258,	// (0x00033900) popup_side_volume_key_window

0xc272,	// (0x0003391a) stacon_top_pane

0xc27c,	// (0x00033924) status_pane_ParamLimits

0xc27c,	// (0x00033924) status_pane

0xc272,	// (0x0003391a) status_small_pane

0xb412,	// (0x00032aba) control_pane

0xb412,	// (0x00032aba) stacon_bottom_pane

0xba46,	// (0x000330ee) scroll_pane_cp121

0xba3d,	// (0x000330e5) set_content_pane

0x8c99,	// (0x00030341) bg_active_tab_pane_g1_cp1

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp1

0x8ca2,	// (0x0003034a) bg_active_tab_pane_g3_cp1

0x8c99,	// (0x00030341) bg_passive_tab_pane_g1_cp1

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp1

0x8ca2,	// (0x0003034a) bg_passive_tab_pane_g3_cp1

0x8cab,	// (0x00030353) bg_active_tab_pane_g1_cp2

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp2

0x8cb4,	// (0x0003035c) bg_active_tab_pane_g3_cp2

0x8cab,	// (0x00030353) bg_passive_tab_pane_g1_cp2

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp2

0x8cb4,	// (0x0003035c) bg_passive_tab_pane_g3_cp2

0x8cbd,	// (0x00030365) bg_active_tab_pane_g1_cp3

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp3

0x8cc6,	// (0x0003036e) bg_active_tab_pane_g3_cp3

0x8cbd,	// (0x00030365) bg_passive_tab_pane_g1_cp3

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp3

0x8cc6,	// (0x0003036e) bg_passive_tab_pane_g3_cp3

0x8ccf,	// (0x00030377) bg_active_tab_pane_g1_cp4

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp4

0x8cd8,	// (0x00030380) bg_active_tab_pane_g3_cp4

0x8ccf,	// (0x00030377) bg_passive_tab_pane_g1_cp4

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp4

0x8cd8,	// (0x00030380) bg_passive_tab_pane_g3_cp4

0xc1ca,	// (0x00033872) bg_active_tab_pane_g1_cp5

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp5

0xc1d3,	// (0x0003387b) bg_active_tab_pane_g3_cp5

0xc1ca,	// (0x00033872) bg_passive_tab_pane_g1_cp5

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp5

0xc1d3,	// (0x0003387b) bg_passive_tab_pane_g3_cp5

0xd87f,	// (0x00034f27) list_set_graphic_pane_ParamLimits

0xd87f,	// (0x00034f27) list_set_graphic_pane

0xb412,	// (0x00032aba) bg_set_opt_pane_cp4

0xc1dc,	// (0x00033884) list_set_graphic_pane_g1_ParamLimits

0xc1dc,	// (0x00033884) list_set_graphic_pane_g1

0xc1e8,	// (0x00033890) list_set_graphic_pane_g2_ParamLimits

0xc1e8,	// (0x00033890) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00036e01) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00036e01) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003717d) volume_small_pane_cp_g

0x8ce1,	// (0x00030389) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ce1,	// (0x00030389) list_double2_large_graphic_pane_g1_cp2

0x8cef,	// (0x00030397) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8cef,	// (0x00030397) list_double2_large_graphic_pane_g2_cp2

0xc20c,	// (0x000338b4) list_double2_large_graphic_pane_g3_cp2

0xc214,	// (0x000338bc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc214,	// (0x000338bc) list_double2_large_graphic_pane_t1_cp2

0xc22a,	// (0x000338d2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc22a,	// (0x000338d2) list_double2_large_graphic_pane_t2_cp2

0x9e06,	// (0x000314ae) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9e06,	// (0x000314ae) list_double_large_graphic_pane_g1_cp2

0x9e19,	// (0x000314c1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9e19,	// (0x000314c1) list_double_large_graphic_pane_g2_cp2

0xc35d,	// (0x00033a05) list_double_large_graphic_pane_g3_cp2

0xd7a5,	// (0x00034e4d) list_double_large_graphic_pane_g4_cp

0xd7ad,	// (0x00034e55) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd7ad,	// (0x00034e55) list_double_large_graphic_pane_t1_cp2

0xd7c4,	// (0x00034e6c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd7c4,	// (0x00034e6c) list_double_large_graphic_pane_t2_cp2

0x8d00,	// (0x000303a8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8d00,	// (0x000303a8) list_double2_graphic_pane_g1_cp2

0x8d0e,	// (0x000303b6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8d0e,	// (0x000303b6) list_double2_graphic_pane_g2_cp2

0x8d1f,	// (0x000303c7) list_double2_graphic_pane_g3_cp2

0xc28a,	// (0x00033932) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc28a,	// (0x00033932) list_double2_graphic_pane_t1_cp2

0xc2a0,	// (0x00033948) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2a0,	// (0x00033948) list_double2_graphic_pane_t2_cp2

0xc2b2,	// (0x0003395a) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2b2,	// (0x0003395a) list_single_number_heading_pane_g1_cp2

0xc2be,	// (0x00033966) list_single_number_heading_pane_g2_cp2

0xc2c6,	// (0x0003396e) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2c6,	// (0x0003396e) list_single_number_heading_pane_t1_cp2

0x8d29,	// (0x000303d1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8d29,	// (0x000303d1) list_single_number_heading_pane_t2_cp2

0xc2dc,	// (0x00033984) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc2dc,	// (0x00033984) list_single_number_heading_pane_t3_cp2

0xc2b2,	// (0x0003395a) list_single_heading_pane_g1_cp2_ParamLimits

0xc2b2,	// (0x0003395a) list_single_heading_pane_g1_cp2

0xc2be,	// (0x00033966) list_single_heading_pane_g2_cp2

0xc2c6,	// (0x0003396e) list_single_heading_pane_t1_cp2_ParamLimits

0xc2c6,	// (0x0003396e) list_single_heading_pane_t1_cp2

0x9df2,	// (0x0003149a) list_single_heading_pane_t2_cp2_ParamLimits

0x9df2,	// (0x0003149a) list_single_heading_pane_t2_cp2

0xd509,	// (0x00034bb1) list_double_graphic_pane_g1_cp2_ParamLimits

0xd509,	// (0x00034bb1) list_double_graphic_pane_g1_cp2

0xd515,	// (0x00034bbd) list_double_graphic_pane_g2_cp2_ParamLimits

0xd515,	// (0x00034bbd) list_double_graphic_pane_g2_cp2

0xd524,	// (0x00034bcc) list_double_graphic_pane_g3_cp2

0xd52c,	// (0x00034bd4) list_double_graphic_pane_t1_cp2_ParamLimits

0xd52c,	// (0x00034bd4) list_double_graphic_pane_t1_cp2

0xd542,	// (0x00034bea) list_double_graphic_pane_t2_cp2_ParamLimits

0xd542,	// (0x00034bea) list_double_graphic_pane_t2_cp2

0xc351,	// (0x000339f9) list_double_number_pane_g1_cp2_ParamLimits

0xc351,	// (0x000339f9) list_double_number_pane_g1_cp2

0xc35d,	// (0x00033a05) list_double_number_pane_g2_cp2

0x9dde,	// (0x00031486) list_double_number_pane_t1_cp2_ParamLimits

0x9dde,	// (0x00031486) list_double_number_pane_t1_cp2

0xd4e1,	// (0x00034b89) list_double_number_pane_t2_cp2_ParamLimits

0xd4e1,	// (0x00034b89) list_double_number_pane_t2_cp2

0xd4f7,	// (0x00034b9f) list_double_number_pane_t3_cp2_ParamLimits

0xd4f7,	// (0x00034b9f) list_double_number_pane_t3_cp2

0x9d1b,	// (0x000313c3) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d1b,	// (0x000313c3) list_single_graphic_pane_g1_cp2

0xc39d,	// (0x00033a45) list_single_graphic_pane_g2_cp2_ParamLimits

0xc39d,	// (0x00033a45) list_single_graphic_pane_g2_cp2

0xc3a9,	// (0x00033a51) list_single_graphic_pane_g3_cp2

0xd450,	// (0x00034af8) list_single_graphic_pane_t1_cp2_ParamLimits

0xd450,	// (0x00034af8) list_single_graphic_pane_t1_cp2

0xc39d,	// (0x00033a45) list_single_number_pane_g1_cp2_ParamLimits

0xc39d,	// (0x00033a45) list_single_number_pane_g1_cp2

0xc3a9,	// (0x00033a51) list_single_number_pane_g2_cp2

0xd450,	// (0x00034af8) list_single_number_pane_t1_cp2_ParamLimits

0xd450,	// (0x00034af8) list_single_number_pane_t1_cp2

0x9d07,	// (0x000313af) list_single_number_pane_t2_cp2_ParamLimits

0x9d07,	// (0x000313af) list_single_number_pane_t2_cp2

0x8cef,	// (0x00030397) list_double2_pane_g1_cp2_ParamLimits

0x8cef,	// (0x00030397) list_double2_pane_g1_cp2

0xc20c,	// (0x000338b4) list_double2_pane_g2_cp2

0xc329,	// (0x000339d1) list_double2_pane_t1_cp2_ParamLimits

0xc329,	// (0x000339d1) list_double2_pane_t1_cp2

0xc33f,	// (0x000339e7) list_double2_pane_t2_cp2_ParamLimits

0xc33f,	// (0x000339e7) list_double2_pane_t2_cp2

0xc351,	// (0x000339f9) list_double_pane_g1_cp2_ParamLimits

0xc351,	// (0x000339f9) list_double_pane_g1_cp2

0xc35d,	// (0x00033a05) list_double_pane_g2_cp2

0xc365,	// (0x00033a0d) list_double_pane_t1_cp2_ParamLimits

0xc365,	// (0x00033a0d) list_double_pane_t1_cp2

0xc37b,	// (0x00033a23) list_double_pane_t2_cp2_ParamLimits

0xc37b,	// (0x00033a23) list_double_pane_t2_cp2

0xc38d,	// (0x00033a35) list_single_pane_cp2_g3

0xc39d,	// (0x00033a45) list_single_pane_g1_cp2_ParamLimits

0xc39d,	// (0x00033a45) list_single_pane_g1_cp2

0xc3a9,	// (0x00033a51) list_single_pane_g2_cp2

0xc3b1,	// (0x00033a59) list_single_pane_t1_cp2_ParamLimits

0xc3b1,	// (0x00033a59) list_single_pane_t1_cp2

0x8d55,	// (0x000303fd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8d55,	// (0x000303fd) list_single_large_graphic_pane_g1_cp2

0xc3c9,	// (0x00033a71) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc3c9,	// (0x00033a71) list_single_large_graphic_pane_g2_cp2

0xc3d5,	// (0x00033a7d) list_single_large_graphic_pane_g3_cp2

0xc3dd,	// (0x00033a85) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc3dd,	// (0x00033a85) list_single_large_graphic_pane_g4_cp1

0xc3f7,	// (0x00033a9f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc3f7,	// (0x00033a9f) list_single_large_graphic_pane_t1_cp2

0xd42e,	// (0x00034ad6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd42e,	// (0x00034ad6) list_single_graphic_heading_pane_g1_cp2

0x9ba6,	// (0x0003124e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ba6,	// (0x0003124e) list_single_graphic_heading_pane_g4_cp2

0xc3a9,	// (0x00033a51) list_single_graphic_heading_pane_g5_cp2

0xd43a,	// (0x00034ae2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd43a,	// (0x00034ae2) list_single_graphic_heading_pane_t1_cp2

0x9bb7,	// (0x0003125f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9bb7,	// (0x0003125f) list_single_graphic_heading_pane_t2_cp2

0xd400,	// (0x00034aa8) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd400,	// (0x00034aa8) list_single_2graphic_pane_g1_cp2

0x9ba6,	// (0x0003124e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ba6,	// (0x0003124e) list_single_2graphic_pane_g2_cp2

0xc3a9,	// (0x00033a51) list_single_2graphic_pane_g3_cp2

0xd40c,	// (0x00034ab4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd40c,	// (0x00034ab4) list_single_2graphic_pane_g4_cp2

0xd418,	// (0x00034ac0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd418,	// (0x00034ac0) list_single_2graphic_pane_t1_cp2

0xb408,	// (0x00032ab0) list_highlight_pane_g10_cp1

0xd006,	// (0x000346ae) list_highlight_pane_g1_cp1

0xd00e,	// (0x000346b6) list_highlight_pane_g2_cp1

0xd016,	// (0x000346be) list_highlight_pane_g3_cp1

0xd01e,	// (0x000346c6) list_highlight_pane_g4_cp1

0xd026,	// (0x000346ce) list_highlight_pane_g5_cp1

0xd02e,	// (0x000346d6) list_highlight_pane_g6_cp1

0xd036,	// (0x000346de) list_highlight_pane_g7_cp1

0xd03e,	// (0x000346e6) list_highlight_pane_g8_cp1

0xd046,	// (0x000346ee) list_highlight_pane_g9_cp1

0x9b68,	// (0x00031210) form_field_slider_pane_t3

0x9b78,	// (0x00031220) form_field_slider_pane_t4

0xcf3a,	// (0x000345e2) slider_form_pane_ParamLimits

0xcf3a,	// (0x000345e2) slider_form_pane

0xb412,	// (0x00032aba) control_abbreviations

0xb412,	// (0x00032aba) control_conventions

0xb412,	// (0x00032aba) control_definitions

0xb412,	// (0x00032aba) format_table_attribute

0xd5f9,	// (0x00034ca1) bg_popup_preview_window_pane_g9

0xb412,	// (0x00032aba) format_table_data2

0xb412,	// (0x00032aba) format_table_data3

0xb412,	// (0x00032aba) format_table_data_example

0x0008,

0xb412,	// (0x00032aba) intro_purpose

0xf8f0,	// (0x00036f98) bg_popup_preview_window_pane_g

0xb412,	// (0x00032aba) texts_category

0xb412,	// (0x00032aba) texts_graphics

0xc40d,	// (0x00033ab5) text_digital

0xc41c,	// (0x00033ac4) text_primary

0xc42b,	// (0x00033ad3) text_primary_small

0xc43a,	// (0x00033ae2) text_secondary

0xc449,	// (0x00033af1) text_title

0xdaca,	// (0x00035172) bg_passive_tab_pane_g1_cp3_srt

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp3_srt

0xdad3,	// (0x0003517b) bg_passive_tab_pane_g3_cp3_srt

0xb460,	// (0x00032b08) bg_active_tab_pane_cp3_srt_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp3_srt

0xdadc,	// (0x00035184) tabs_4_active_pane_srt_g1

0xa0cc,	// (0x00031774) tabs_4_active_pane_srt_t1_ParamLimits

0xa0cc,	// (0x00031774) tabs_4_active_pane_srt_t1

0xdaca,	// (0x00035172) bg_active_tab_pane_g1_cp3_copy1

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp3_copy1

0xdad3,	// (0x0003517b) bg_active_tab_pane_g3_cp3_copy1

0xb46e,	// (0x00032b16) tabs_2_long_active_pane_srt_ParamLimits

0xb46e,	// (0x00032b16) tabs_2_long_active_pane_srt

0xb46e,	// (0x00032b16) tabs_2_long_passive_pane_srt_ParamLimits

0xb46e,	// (0x00032b16) tabs_2_long_passive_pane_srt

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp4_srt

0xd9d2,	// (0x0003507a) bg_passive_tab_pane_g1_cp4_srt

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp4_srt

0xd9db,	// (0x00035083) bg_passive_tab_pane_g3_cp4_srt

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp4_srt_ParamLimits

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp4_srt

0x9ebd,	// (0x00031565) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9ebd,	// (0x00031565) tabs_2_long_active_pane_srt_t1

0xd9d2,	// (0x0003507a) bg_active_tab_pane_g1_cp4_srt

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp4_srt

0xd9db,	// (0x00035083) bg_active_tab_pane_g3_cp4_srt

0xb460,	// (0x00032b08) tabs_3_long_active_pane_srt_ParamLimits

0xb460,	// (0x00032b08) tabs_3_long_active_pane_srt

0xb460,	// (0x00032b08) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb460,	// (0x00032b08) tabs_3_long_passive_pane_cp_srt

0xb460,	// (0x00032b08) tabs_3_long_passive_pane_srt_ParamLimits

0xb460,	// (0x00032b08) tabs_3_long_passive_pane_srt

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp5_srt

0xc1ca,	// (0x00033872) bg_passive_tab_pane_g1_cp5_srt

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp5_srt

0xc1d3,	// (0x0003387b) bg_passive_tab_pane_g3_cp5_srt

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp5_srt_ParamLimits

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp5_srt

0x9ea7,	// (0x0003154f) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9ea7,	// (0x0003154f) tabs_3_long_active_pane_srt_t1

0xc1ca,	// (0x00033872) bg_active_tab_pane_g1_cp5_srt

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp5_srt

0xc1d3,	// (0x0003387b) bg_active_tab_pane_g3_cp5_srt

0xd9c4,	// (0x0003506c) navi_text_pane_srt_t1

0xd9bc,	// (0x00035064) navi_icon_pane_srt_g1

0xc559,	// (0x00033c01) midp_editing_number_pane_srt

0xc458,	// (0x00033b00) midp_ticker_pane_srt

0xc561,	// (0x00033c09) midp_ticker_pane_srt_g1

0xc569,	// (0x00033c11) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00036e20) midp_ticker_pane_srt_g

0xc571,	// (0x00033c19) midp_ticker_pane_srt_t1

0xd9ad,	// (0x00035055) midp_editing_number_pane_t1_copy1

0xbbd3,	// (0x0003327b) listscroll_midp_pane

0xbbd3,	// (0x0003327b) midp_form_pane

0xc460,	// (0x00033b08) midp_info_popup_window_ParamLimits

0xc460,	// (0x00033b08) midp_info_popup_window

0xbb1b,	// (0x000331c3) bg_popup_sub_pane_cp50_ParamLimits

0xbb1b,	// (0x000331c3) bg_popup_sub_pane_cp50

0xcc57,	// (0x000342ff) listscroll_midp_info_pane_ParamLimits

0xcc57,	// (0x000342ff) listscroll_midp_info_pane

0xcc3f,	// (0x000342e7) listscroll_form_midp_pane_ParamLimits

0xcc3f,	// (0x000342e7) listscroll_form_midp_pane

0xcc4b,	// (0x000342f3) scroll_bar_cp050

0x9b5c,	// (0x00031204) list_midp_pane

0xe404,	// (0x00035aac) signal_pane_g2_cp

0xcb71,	// (0x00034219) listscroll_midp_info_pane_t1_ParamLimits

0xcb71,	// (0x00034219) listscroll_midp_info_pane_t1

0xcb89,	// (0x00034231) listscroll_midp_info_pane_t2_ParamLimits

0xcb89,	// (0x00034231) listscroll_midp_info_pane_t2

0xcbc7,	// (0x0003426f) listscroll_midp_info_pane_t3_ParamLimits

0xcbc7,	// (0x0003426f) listscroll_midp_info_pane_t3

0xcc01,	// (0x000342a9) listscroll_midp_info_pane_t4_ParamLimits

0xcc01,	// (0x000342a9) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00036ed3) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00036ed3) listscroll_midp_info_pane_t

0xbb9b,	// (0x00033243) scroll_pane_cp21

0xcb15,	// (0x000341bd) form_midp_field_choice_group_pane

0xcb1e,	// (0x000341c6) form_midp_field_text_pane

0xcb57,	// (0x000341ff) form_midp_field_time_pane

0xcb5f,	// (0x00034207) form_midp_gauge_slider_pane

0xcb68,	// (0x00034210) form_midp_gauge_wait_pane

0xb412,	// (0x00032aba) form_midp_image_pane

0x06ae,	// (0x00027d56) list_single_midp_pane_ParamLimits

0x06ae,	// (0x00027d56) list_single_midp_pane

0x9b38,	// (0x000311e0) form_midp_field_text_pane_t1

0xc994,	// (0x0003403c) input_focus_pane_cp050

0xcb04,	// (0x000341ac) list_midp_form_text_pane

0xcad3,	// (0x0003417b) form_midp_field_choice_group_pane_t1

0xcae1,	// (0x00034189) input_focus_pane_cp051

0xcaf5,	// (0x0003419d) list_midp_choice_pane

0xb412,	// (0x00032aba) status_idle_pane

0xcab7,	// (0x0003415f) form_midp_field_time_pane_t1

0xb408,	// (0x00032ab0) wait_anim_pane_g2_copy1

0xcac5,	// (0x0003416d) form_midp_field_time_pane_t2

0x0001,

0xc4cb,	// (0x00033b73) aid_navinavi_width_2_pane

0xf826,	// (0x00036ece) form_midp_field_time_pane_t

0xb412,	// (0x00032aba) input_focus_pane_cp052

0xb412,	// (0x00032aba) bg_input_focus_pane_cp040

0xca93,	// (0x0003413b) form_midp_gauge_slider_pane_t1

0xcaa1,	// (0x00034149) form_midp_gauge_slider_pane_t2

0x9b18,	// (0x000311c0) form_midp_gauge_slider_pane_t3

0x9b28,	// (0x000311d0) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00036ec5) form_midp_gauge_slider_pane_t

0xcaaf,	// (0x00034157) form_midp_slider_pane

0xb46e,	// (0x00032b16) bg_input_focus_pane_cp041_ParamLimits

0xb46e,	// (0x00032b16) bg_input_focus_pane_cp041

0xca60,	// (0x00034108) form_midp_gauge_wait_pane_t1_ParamLimits

0xca60,	// (0x00034108) form_midp_gauge_wait_pane_t1

0xca72,	// (0x0003411a) form_midp_gauge_wait_pane_t2_ParamLimits

0xca72,	// (0x0003411a) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00036ec0) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00036ec0) form_midp_gauge_wait_pane_t

0xca84,	// (0x0003412c) form_midp_wait_pane_ParamLimits

0xca84,	// (0x0003412c) form_midp_wait_pane

0xca2a,	// (0x000340d2) form_midp_image_pane_g1

0xca33,	// (0x000340db) form_midp_image_pane_t1

0xca42,	// (0x000340ea) form_midp_image_pane_t2

0xca51,	// (0x000340f9) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00036eb9) form_midp_image_pane_t

0xca21,	// (0x000340c9) list_single_midp_pane_g1

0x7427,	// (0x0002eacf) list_single_midp_pane_t1

0x9b01,	// (0x000311a9) list_midp_form_item_pane_ParamLimits

0x9b01,	// (0x000311a9) list_midp_form_item_pane

0xc473,	// (0x00033b1b) list_midp_form_item_pane_t1

0xc482,	// (0x00033b2a) midp_ticker_pane_g1

0xc48e,	// (0x00033b36) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00036e06) midp_ticker_pane_g

0xc49a,	// (0x00033b42) midp_ticker_pane_t1

0xda5d,	// (0x00035105) midp_editing_number_pane_t1

0xda3b,	// (0x000350e3) midp_editing_number_pane

0xda4a,	// (0x000350f2) midp_ticker_pane

0xd99d,	// (0x00035045) ai_message_heading_pane

0xb412,	// (0x00032aba) bg_popup_window_pane_cp14

0xd9a5,	// (0x0003504d) listscroll_ai_message_pane

0xd927,	// (0x00034fcf) ai_message_heading_pane_g1_ParamLimits

0xd927,	// (0x00034fcf) ai_message_heading_pane_g1

0xd933,	// (0x00034fdb) ai_message_heading_pane_g2_ParamLimits

0xd933,	// (0x00034fdb) ai_message_heading_pane_g2

0xd93f,	// (0x00034fe7) ai_message_heading_pane_g3_ParamLimits

0xd93f,	// (0x00034fe7) ai_message_heading_pane_g3

0xd94b,	// (0x00034ff3) ai_message_heading_pane_g4_ParamLimits

0xd94b,	// (0x00034ff3) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00036ffa) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00036ffa) ai_message_heading_pane_g

0xd957,	// (0x00034fff) ai_message_heading_pane_t1_ParamLimits

0xd957,	// (0x00034fff) ai_message_heading_pane_t1

0xd971,	// (0x00035019) ai_message_heading_pane_t2_ParamLimits

0xd971,	// (0x00035019) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00037003) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00037003) ai_message_heading_pane_t

0xd983,	// (0x0003502b) bg_popup_heading_pane_cp1_ParamLimits

0xd983,	// (0x0003502b) bg_popup_heading_pane_cp1

0xd915,	// (0x00034fbd) list_ai_message_pane_ParamLimits

0xd915,	// (0x00034fbd) list_ai_message_pane

0xbb9b,	// (0x00033243) scroll_pane_cp10

0xd8b1,	// (0x00034f59) list_ai_message_pane_g1

0xd8b9,	// (0x00034f61) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00036fd7) list_ai_message_pane_g

0xd8c1,	// (0x00034f69) list_ai_message_pane_t1_ParamLimits

0xd8c1,	// (0x00034f69) list_ai_message_pane_t1

0xd8d6,	// (0x00034f7e) list_ai_message_pane_t2_ParamLimits

0xd8d6,	// (0x00034f7e) list_ai_message_pane_t2

0xd8eb,	// (0x00034f93) list_ai_message_pane_t3_ParamLimits

0xd8eb,	// (0x00034f93) list_ai_message_pane_t3

0xd900,	// (0x00034fa8) list_ai_message_pane_t4_ParamLimits

0xd900,	// (0x00034fa8) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00036fdc) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00036fdc) list_ai_message_pane_t

0x9e82,	// (0x0003152a) cell_ai_soft_ind_pane_ParamLimits

0x9e82,	// (0x0003152a) cell_ai_soft_ind_pane

0xc4ac,	// (0x00033b54) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4ac,	// (0x00033b54) cell_ai_soft_ind_pane_g1

0xb412,	// (0x00032aba) grid_highlight_cp1

0xc4b9,	// (0x00033b61) text_secondary_cp56_ParamLimits

0xc4b9,	// (0x00033b61) text_secondary_cp56

0xd854,	// (0x00034efc) example_general_pane_ParamLimits

0xd854,	// (0x00034efc) example_general_pane

0xd860,	// (0x00034f08) example_parent_pane_g1_ParamLimits

0xd860,	// (0x00034f08) example_parent_pane_g1

0xd86c,	// (0x00034f14) example_parent_pane_t1_ParamLimits

0xd86c,	// (0x00034f14) example_parent_pane_t1

0x9358,	// (0x00030a00) popup_preview_text_window_ParamLimits

0x9358,	// (0x00030a00) popup_preview_text_window

0xc395,	// (0x00033a3d) list_single_pane_cp2_g4

0xb63d,	// (0x00032ce5) bg_popup_preview_window_pane_ParamLimits

0xb63d,	// (0x00032ce5) bg_popup_preview_window_pane

0xd601,	// (0x00034ca9) popup_preview_text_window_t1_ParamLimits

0xd601,	// (0x00034ca9) popup_preview_text_window_t1

0xd61f,	// (0x00034cc7) popup_preview_text_window_t2_ParamLimits

0xd61f,	// (0x00034cc7) popup_preview_text_window_t2

0xd668,	// (0x00034d10) popup_preview_text_window_t3_ParamLimits

0xd668,	// (0x00034d10) popup_preview_text_window_t3

0xd6ad,	// (0x00034d55) popup_preview_text_window_t4_ParamLimits

0xd6ad,	// (0x00034d55) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00036fab) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00036fab) popup_preview_text_window_t

0xd72b,	// (0x00034dd3) scroll_pane_cp11

0xc8a4,	// (0x00033f4c) bg_popup_preview_window_pane_g1

0xd5c1,	// (0x00034c69) bg_popup_preview_window_pane_g2

0xd5c9,	// (0x00034c71) bg_popup_preview_window_pane_g3

0xd5d1,	// (0x00034c79) bg_popup_preview_window_pane_g4

0xd5d9,	// (0x00034c81) bg_popup_preview_window_pane_g5

0xd5e1,	// (0x00034c89) bg_popup_preview_window_pane_g6

0xd5e9,	// (0x00034c91) bg_popup_preview_window_pane_g7

0xd5f1,	// (0x00034c99) bg_popup_preview_window_pane_g8

0x30c6,	// (0x0002a76e) aid_popup_width_pane

0x92d4,	// (0x0003097c) popup_midp_note_alarm_window_ParamLimits

0x92d4,	// (0x0003097c) popup_midp_note_alarm_window

0xba57,	// (0x000330ff) data_form_pane_ParamLimits

0x0584,	// (0x00027c2c) form_field_data_pane_g1

0x058e,	// (0x00027c36) form_field_data_pane_t1_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_ParamLimits

0xba71,	// (0x00033119) data_form_wide_pane_ParamLimits

0x71d6,	// (0x0002e87e) form_field_data_wide_pane_g1

0x71e2,	// (0x0002e88a) form_field_data_wide_pane_t1_ParamLimits

0xb7de,	// (0x00032e86) input_focus_pane_cp6_ParamLimits

0x8afb,	// (0x000301a3) input_popup_find_pane_g1_ParamLimits

0x8afb,	// (0x000301a3) input_popup_find_pane_g1

0x3622,	// (0x0002acca) aid_navi_side_left_pane

0x3637,	// (0x0002acdf) aid_navi_side_right_pane

0xd0e3,	// (0x0003478b) bg_popup_window_pane_cp30_ParamLimits

0xd0e3,	// (0x0003478b) bg_popup_window_pane_cp30

0xd15d,	// (0x00034805) popup_midp_note_alarm_window_g1_ParamLimits

0xd15d,	// (0x00034805) popup_midp_note_alarm_window_g1

0xd18d,	// (0x00034835) popup_midp_note_alarm_window_t1_ParamLimits

0xd18d,	// (0x00034835) popup_midp_note_alarm_window_t1

0xd22e,	// (0x000348d6) popup_midp_note_alarm_window_t2_ParamLimits

0xd22e,	// (0x000348d6) popup_midp_note_alarm_window_t2

0xd2dc,	// (0x00034984) popup_midp_note_alarm_window_t3_ParamLimits

0xd2dc,	// (0x00034984) popup_midp_note_alarm_window_t3

0xd304,	// (0x000349ac) popup_midp_note_alarm_window_t4_ParamLimits

0xd304,	// (0x000349ac) popup_midp_note_alarm_window_t4

0xd324,	// (0x000349cc) popup_midp_note_alarm_window_t5_ParamLimits

0xd324,	// (0x000349cc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00036f48) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00036f48) popup_midp_note_alarm_window_t

0xd3d0,	// (0x00034a78) wait_bar_pane_cp1_ParamLimits

0xd3d0,	// (0x00034a78) wait_bar_pane_cp1

0xb412,	// (0x00032aba) wait_anim_pane_copy1

0xb412,	// (0x00032aba) wait_border_pane_copy1

0xcdfb,	// (0x000344a3) wait_border_pane_g1_copy1

0x71fc,	// (0x0002e8a4) form_field_popup_pane_g1

0x05a8,	// (0x00027c50) form_field_popup_pane_t1_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_cp7_ParamLimits

0xba9d,	// (0x00033145) list_form_pane_ParamLimits

0x721e,	// (0x0002e8c6) form_field_popup_wide_pane_g1

0x7226,	// (0x0002e8ce) form_field_popup_wide_pane_t1_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_cp8_ParamLimits

0xbaa9,	// (0x00033151) list_form_wide_pane_ParamLimits

0xdb03,	// (0x000351ab) aid_size_cell_graphic_pane

0x0627,	// (0x00027ccf) data_form_pane_t1_ParamLimits

0x06ca,	// (0x00027d72) data_form_wide_pane_t1_ParamLimits

0x9714,	// (0x00030dbc) bg_status_flat_pane

0x875a,	// (0x0002fe02) title_pane_t1_ParamLimits

0xb428,	// (0x00032ad0) title_pane_t2_ParamLimits

0xb44e,	// (0x00032af6) title_pane_t3_ParamLimits

0xf55d,	// (0x00036c05) title_pane_t_ParamLimits

0xbf32,	// (0x000335da) level_1_signal_ParamLimits

0xbf3f,	// (0x000335e7) level_2_signal_ParamLimits

0xbf4c,	// (0x000335f4) level_3_signal_ParamLimits

0xbf59,	// (0x00033601) level_4_signal_ParamLimits

0xbf66,	// (0x0003360e) level_5_signal_ParamLimits

0xbf73,	// (0x0003361b) level_6_signal_ParamLimits

0xbf80,	// (0x00033628) level_7_signal_ParamLimits

0xbf32,	// (0x000335da) level_1_battery_ParamLimits

0xbf3f,	// (0x000335e7) level_2_battery_ParamLimits

0xbf4c,	// (0x000335f4) level_3_battery_ParamLimits

0xbf59,	// (0x00033601) level_4_battery_ParamLimits

0xbf66,	// (0x0003360e) level_5_battery_ParamLimits

0xbf73,	// (0x0003361b) level_6_battery_ParamLimits

0xbf80,	// (0x00033628) level_7_battery_ParamLimits

0xd006,	// (0x000346ae) bg_status_flat_pane_g1

0xd00e,	// (0x000346b6) bg_status_flat_pane_g2

0xd016,	// (0x000346be) bg_status_flat_pane_g3

0xd01e,	// (0x000346c6) bg_status_flat_pane_g4

0xd026,	// (0x000346ce) bg_status_flat_pane_g5

0xd02e,	// (0x000346d6) bg_status_flat_pane_g6

0xd036,	// (0x000346de) bg_status_flat_pane_g7

0x87ee,	// (0x0002fe96) tabs_3_active_pane_t1_ParamLimits

0x87ee,	// (0x0002fe96) tabs_3_passive_pane_t1_ParamLimits

0x8808,	// (0x0002feb0) tabs_4_active_pane_t1_ParamLimits

0x8808,	// (0x0002feb0) tabs_4_1_passive_pane_t1_ParamLimits

0x8b11,	// (0x000301b9) tabs_2_active_pane_t1_ParamLimits

0x8b11,	// (0x000301b9) tabs_2_passive_pane_t1_ParamLimits

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp4_ParamLimits

0x8b23,	// (0x000301cb) tabs_2_long_active_pane_t1_ParamLimits

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp4_ParamLimits

0x4141,	// (0x0002b7e9) list_single_midp_graphic_pane_t1_ParamLimits

0xb46e,	// (0x00032b16) bg_active_tab_pane_cp5_ParamLimits

0x8b36,	// (0x000301de) tabs_3_long_active_pane_t1_ParamLimits

0xbbd3,	// (0x0003327b) bg_passive_tab_pane_cp5_ParamLimits

0x4141,	// (0x0002b7e9) list_single_midp_graphic_pane_t1

0x9714,	// (0x00030dbc) bg_status_flat_pane_ParamLimits

0xc75d,	// (0x00033e05) indicator_pane_cp2_ParamLimits

0xc75d,	// (0x00033e05) indicator_pane_cp2

0x988c,	// (0x00030f34) navi_pane_srt_ParamLimits

0x988c,	// (0x00030f34) navi_pane_srt

0xc785,	// (0x00033e2d) popup_clock_digital_analogue_window_cp1

0xb4b2,	// (0x00032b5a) indicator_pane_t1

0xc458,	// (0x00033b00) copy_highlight_pane

0xc458,	// (0x00033b00) cursor_graphics_pane

0xc458,	// (0x00033b00) graphic_within_text_pane

0xc458,	// (0x00033b00) link_highlight_pane

0xd6ee,	// (0x00034d96) popup_preview_text_window_t5_ParamLimits

0xd6ee,	// (0x00034d96) popup_preview_text_window_t5

0xc4d3,	// (0x00033b7b) cursor_digital_pane

0xc4d3,	// (0x00033b7b) cursor_primary_pane

0xc4e4,	// (0x00033b8c) cursor_primary_small_pane

0xc4ec,	// (0x00033b94) cursor_secondary_pane

0xc4f4,	// (0x00033b9c) cursor_title_pane

0xc4d3,	// (0x00033b7b) link_highlight_digital_pane

0xc4db,	// (0x00033b83) link_highlight_primary_pane

0xc4e4,	// (0x00033b8c) link_highlight_primary_small_pane

0xc4ec,	// (0x00033b94) link_highlight_secondary_pane

0xc4f4,	// (0x00033b9c) link_highlight_title_pane

0xc4d3,	// (0x00033b7b) copy_highlight_digital_pane

0xc4d3,	// (0x00033b7b) copy_highlight_primary_pane

0xc4e4,	// (0x00033b8c) copy_highlight_primary_small_pane

0xc4ec,	// (0x00033b94) copy_highlight_secondary_pane

0xc4f4,	// (0x00033b9c) copy_highlight_title_pane

0xc4ec,	// (0x00033b94) graphic_text_digital_pane

0xd086,	// (0x0003472e) graphic_text_primary_pane

0xd08f,	// (0x00034737) graphic_text_primary_small_pane

0xc4e4,	// (0x00033b8c) graphic_text_secondary_pane

0xc4d3,	// (0x00033b7b) graphic_text_title_pane

0x8dfe,	// (0x000304a6) cursor_primary_pane_g1

0xd078,	// (0x00034720) cursor_text_primary_t1

0x9b9c,	// (0x00031244) cursor_primary_small_pane_g1

0xd06a,	// (0x00034712) cursor_text_primary_small_t1

0x9b92,	// (0x0003123a) cursor_primary_small_pane_g1_copy1

0xd05c,	// (0x00034704) cursor_text_primary_small_t1_copy1

0xd04e,	// (0x000346f6) cursor_text_title_t1

0x9b88,	// (0x00031230) cursor_title_pane_g1

0x8dfe,	// (0x000304a6) cursor_digital_pane_g1

0xc4fc,	// (0x00033ba4) cursor_text_digital_t1

0xcfef,	// (0x00034697) link_highlight_primary_pane_g1

0xcff7,	// (0x0003469f) link_highlight_primary_pane_t1

0xc50a,	// (0x00033bb2) link_highlight_primary_small_pane_g1

0xc512,	// (0x00033bba) link_highlight_primary_small_pane_t1

0xc50a,	// (0x00033bb2) link_highlight_secondary_pane_g1

0xc521,	// (0x00033bc9) link_highlight_secondary_pane_t1

0xcf63,	// (0x0003460b) link_highlight_title_pane_g1

0xcf6b,	// (0x00034613) link_highlight_title_pane_t1

0xcf4c,	// (0x000345f4) link_highlight_digital_pane_g1

0xcf54,	// (0x000345fc) link_highlight_digital_pane_t1

0xce40,	// (0x000344e8) copy_highlight_primary_pane_g1

0xce48,	// (0x000344f0) copy_highlight_primary_pane_t1

0xce1a,	// (0x000344c2) copy_highlight_primary_small_pane_g1

0xce31,	// (0x000344d9) copy_highlight_primary_small_pane_t1

0xc530,	// (0x00033bd8) copy_highlight_secondary_pane_g1

0xc538,	// (0x00033be0) copy_highlight_secondary_pane_t1

0xce1a,	// (0x000344c2) copy_highlight_title_pane_g1

0xce22,	// (0x000344ca) copy_highlight_title_pane_t1

0xce40,	// (0x000344e8) copy_highlight_digital_pane_g1

0xdc8d,	// (0x00035335) copy_highlight_digital_pane_t1

0xdbe1,	// (0x00035289) graphic_text_primary_pane_g1

0xdc71,	// (0x00035319) graphic_text_primary_pane_t1

0xdc7f,	// (0x00035327) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00037077) graphic_text_primary_pane_t

0xdc4d,	// (0x000352f5) graphic_text_primary_small_pane_g1

0xdc55,	// (0x000352fd) graphic_text_primary_small_pane_t1

0xdc63,	// (0x0003530b) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00037072) graphic_text_primary_small_pane_t

0xdc29,	// (0x000352d1) graphic_text_secondary_pane_g1

0xdc31,	// (0x000352d9) graphic_text_secondary_pane_t1

0xdc3f,	// (0x000352e7) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003706d) graphic_text_secondary_pane_t

0xdc05,	// (0x000352ad) graphic_text_title_pane_g1

0xdc0d,	// (0x000352b5) graphic_text_title_pane_t1

0xdc1b,	// (0x000352c3) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00037068) graphic_text_title_pane_t

0xdbe1,	// (0x00035289) graphic_text_digital_pane_g1

0xdbe9,	// (0x00035291) graphic_text_digital_pane_t1

0xdbf7,	// (0x0003529f) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00037063) graphic_text_digital_pane_t

0xb46e,	// (0x00032b16) navi_icon_pane_srt_ParamLimits

0xb46e,	// (0x00032b16) navi_icon_pane_srt

0xb412,	// (0x00032aba) navi_midp_pane_srt

0xb412,	// (0x00032aba) navi_navi_pane_srt

0xb46e,	// (0x00032b16) navi_text_pane_srt_ParamLimits

0xb46e,	// (0x00032b16) navi_text_pane_srt

0xdbac,	// (0x00035254) navi_navi_icon_text_pane_srt

0xdbb4,	// (0x0003525c) navi_navi_pane_srt_g1_ParamLimits

0xdbb4,	// (0x0003525c) navi_navi_pane_srt_g1

0xdbc6,	// (0x0003526e) navi_navi_pane_srt_g2_ParamLimits

0xdbc6,	// (0x0003526e) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003705e) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003705e) navi_navi_pane_srt_g

0xdbd8,	// (0x00035280) navi_navi_tabs_pane_srt

0xdbac,	// (0x00035254) navi_navi_text_pane_srt

0xdbac,	// (0x00035254) navi_navi_volume_pane_srt

0xdb9d,	// (0x00035245) navi_navi_text_pane_srt_t1

0x44c1,	// (0x0002bb69) navi_navi_volume_pane_srt_g1

0x44c9,	// (0x0002bb71) volume_small_pane_srt_ParamLimits

0x44c9,	// (0x0002bb71) volume_small_pane_srt

0x3902,	// (0x0002afaa) volume_small_pane_srt_g1_ParamLimits

0x3902,	// (0x0002afaa) volume_small_pane_srt_g1

0x3912,	// (0x0002afba) volume_small_pane_srt_g2_ParamLimits

0x3912,	// (0x0002afba) volume_small_pane_srt_g2

0x3923,	// (0x0002afcb) volume_small_pane_srt_g3_ParamLimits

0x3923,	// (0x0002afcb) volume_small_pane_srt_g3

0x3934,	// (0x0002afdc) volume_small_pane_srt_g4_ParamLimits

0x3934,	// (0x0002afdc) volume_small_pane_srt_g4

0x3945,	// (0x0002afed) volume_small_pane_srt_g5_ParamLimits

0x3945,	// (0x0002afed) volume_small_pane_srt_g5

0x3956,	// (0x0002affe) volume_small_pane_srt_g6_ParamLimits

0x3956,	// (0x0002affe) volume_small_pane_srt_g6

0x3967,	// (0x0002b00f) volume_small_pane_srt_g7_ParamLimits

0x3967,	// (0x0002b00f) volume_small_pane_srt_g7

0x3978,	// (0x0002b020) volume_small_pane_srt_g8_ParamLimits

0x3978,	// (0x0002b020) volume_small_pane_srt_g8

0x3989,	// (0x0002b031) volume_small_pane_srt_g9_ParamLimits

0x3989,	// (0x0002b031) volume_small_pane_srt_g9

0x399a,	// (0x0002b042) volume_small_pane_srt_g10_ParamLimits

0x399a,	// (0x0002b042) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00036e0b) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00036e0b) volume_small_pane_srt_g

0xb6e6,	// (0x00032d8e) query_popup_data_pane_cp2

0xdb83,	// (0x0003522b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdb83,	// (0x0003522b) navi_navi_icon_text_pane_srt_t1

0xd086,	// (0x0003472e) navi_tabs_2_long_pane_srt

0xd086,	// (0x0003472e) navi_tabs_2_pane_srt

0xd086,	// (0x0003472e) navi_tabs_3_long_pane_srt

0xd086,	// (0x0003472e) navi_tabs_3_pane_srt

0xd086,	// (0x0003472e) navi_tabs_4_pane_srt

0x44a1,	// (0x0002bb49) tabs_2_active_pane_srt_ParamLimits

0x44a1,	// (0x0002bb49) tabs_2_active_pane_srt

0x44b1,	// (0x0002bb59) tabs_2_passive_pane_srt_ParamLimits

0x44b1,	// (0x0002bb59) tabs_2_passive_pane_srt

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp1_srt

0xdb61,	// (0x00035209) bg_passive_tab_pane_g1_cp1_srt

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00035212) bg_passive_tab_pane_g3_cp1_srt

0xb460,	// (0x00032b08) bg_active_tab_pane_cp1_srt_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp1_srt

0xdb73,	// (0x0003521b) tabs_2_active_pane_srt_g1

0xa148,	// (0x000317f0) tabs_2_active_pane_srt_t1_ParamLimits

0xa148,	// (0x000317f0) tabs_2_active_pane_srt_t1

0xdb61,	// (0x00035209) bg_active_tab_pane_g1_cp1_srt

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00035212) bg_active_tab_pane_g3_cp1_srt

0x446e,	// (0x0002bb16) tabs_3_active_pane_srt_ParamLimits

0x446e,	// (0x0002bb16) tabs_3_active_pane_srt

0x447f,	// (0x0002bb27) tabs_3_passive_pane_cp_srt_ParamLimits

0x447f,	// (0x0002bb27) tabs_3_passive_pane_cp_srt

0x4490,	// (0x0002bb38) tabs_3_passive_pane_srt_ParamLimits

0x4490,	// (0x0002bb38) tabs_3_passive_pane_srt

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc994,	// (0x0003403c) bg_passive_tab_pane_cp2_srt

0xc547,	// (0x00033bef) bg_passive_tab_pane_g1_cp2_srt

0xc183,	// (0x0003382b) bg_passive_tab_pane_g2_cp2_srt

0xc550,	// (0x00033bf8) bg_passive_tab_pane_g3_cp2_srt

0xb460,	// (0x00032b08) bg_active_tab_pane_cp2_srt_ParamLimits

0xb460,	// (0x00032b08) bg_active_tab_pane_cp2_srt

0xdb59,	// (0x00035201) tabs_3_active_pane_srt_g1

0xa132,	// (0x000317da) tabs_3_active_pane_srt_t1_ParamLimits

0xa132,	// (0x000317da) tabs_3_active_pane_srt_t1

0xc547,	// (0x00033bef) bg_active_tab_pane_g1_cp2_srt

0xc183,	// (0x0003382b) bg_active_tab_pane_g2_cp2_srt

0xc550,	// (0x00033bf8) bg_active_tab_pane_g3_cp2_srt

0x4426,	// (0x0002bace) tabs_4_active_pane_srt_ParamLimits

0x4426,	// (0x0002bace) tabs_4_active_pane_srt

0x4438,	// (0x0002bae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4438,	// (0x0002bae0) tabs_4_passive_pane_cp2_srt

0x3af9,	// (0x0002b1a1) aid_size_cell_toolbar

0xd893,	// (0x00034f3b) main_idle_act_pane_ParamLimits

0x3ca8,	// (0x0002b350) popup_large_graphic_colour_window_ParamLimits

0x95d8,	// (0x00030c80) popup_toolbar_window_ParamLimits

0x95d8,	// (0x00030c80) popup_toolbar_window

0xda6c,	// (0x00035114) list_single_graphic_2heading_pane_ParamLimits

0xda6c,	// (0x00035114) list_single_graphic_2heading_pane

0xbd7d,	// (0x00033425) aid_size_cell_apps_grid_lsc_pane

0xbd8f,	// (0x00033437) aid_size_cell_apps_grid_prt_pane

0xbbd3,	// (0x0003327b) bg_wml_button_pane_cp1_ParamLimits

0xbbd3,	// (0x0003327b) bg_wml_button_pane_cp1

0x9b38,	// (0x000311e0) form_midp_field_text_pane_t1_ParamLimits

0xc994,	// (0x0003403c) input_focus_pane_cp050_ParamLimits

0xcb04,	// (0x000341ac) list_midp_form_text_pane_ParamLimits

0xcae1,	// (0x00034189) input_focus_pane_cp051_ParamLimits

0xcaf5,	// (0x0003419d) list_midp_choice_pane_ParamLimits

0x9ac9,	// (0x00031171) list_single_2graphic_pane_cp3_ParamLimits

0x9ac9,	// (0x00031171) list_single_2graphic_pane_cp3

0x9adf,	// (0x00031187) list_single_midp_graphic_pane_ParamLimits

0x9adf,	// (0x00031187) list_single_midp_graphic_pane

0x3050,	// (0x0002a6f8) list_single_graphic_2heading_pane_g1_ParamLimits

0x3050,	// (0x0002a6f8) list_single_graphic_2heading_pane_g1

0x305c,	// (0x0002a704) list_single_graphic_2heading_pane_g4_ParamLimits

0x305c,	// (0x0002a704) list_single_graphic_2heading_pane_g4

0x3068,	// (0x0002a710) list_single_graphic_2heading_pane_g5_ParamLimits

0x3068,	// (0x0002a710) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00036e5e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00036e5e) list_single_graphic_2heading_pane_g

0x3074,	// (0x0002a71c) list_single_graphic_2heading_pane_t1_ParamLimits

0x3074,	// (0x0002a71c) list_single_graphic_2heading_pane_t1

0x3088,	// (0x0002a730) list_single_graphic_2heading_pane_t2_ParamLimits

0x3088,	// (0x0002a730) list_single_graphic_2heading_pane_t2

0x30a2,	// (0x0002a74a) list_single_graphic_2heading_pane_t3_ParamLimits

0x30a2,	// (0x0002a74a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00036e65) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00036e65) list_single_graphic_2heading_pane_t

0xc7e2,	// (0x00033e8a) bg_popup_sub_pane_cp2

0xc80c,	// (0x00033eb4) grid_toobar_pane

0x40b2,	// (0x0002b75a) cell_toolbar_pane_ParamLimits

0x40b2,	// (0x0002b75a) cell_toolbar_pane

0xc848,	// (0x00033ef0) cell_toolbar_pane_g1_ParamLimits

0xc848,	// (0x00033ef0) cell_toolbar_pane_g1

0xc85c,	// (0x00033f04) cell_toolbar_pane_g2_ParamLimits

0xc85c,	// (0x00033f04) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00036e73) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00036e73) cell_toolbar_pane_g

0xc87e,	// (0x00033f26) grid_highlight_pane_cp2_ParamLimits

0xc87e,	// (0x00033f26) grid_highlight_pane_cp2

0xc898,	// (0x00033f40) toolbar_button_pane

0xc8a4,	// (0x00033f4c) toolbar_button_pane_g1

0xc8ac,	// (0x00033f54) toolbar_button_pane_g2

0xc8b4,	// (0x00033f5c) toolbar_button_pane_g3

0xc8bc,	// (0x00033f64) toolbar_button_pane_g4

0xc8c4,	// (0x00033f6c) toolbar_button_pane_g5

0xc8cc,	// (0x00033f74) toolbar_button_pane_g6

0xc8d4,	// (0x00033f7c) toolbar_button_pane_g7

0xc8dc,	// (0x00033f84) toolbar_button_pane_g8

0xc8e4,	// (0x00033f8c) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00036e78) toolbar_button_pane_g

0x40ea,	// (0x0002b792) list_single_2graphic_pane_g1_cp3_ParamLimits

0x40ea,	// (0x0002b792) list_single_2graphic_pane_g1_cp3

0x9a2b,	// (0x000310d3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9a2b,	// (0x000310d3) list_single_2graphic_pane_g2_cp3

0x4107,	// (0x0002b7af) list_single_2graphic_pane_g3_cp3

0x410f,	// (0x0002b7b7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x410f,	// (0x0002b7b7) list_single_2graphic_pane_g4_cp3

0x411b,	// (0x0002b7c3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x411b,	// (0x0002b7c3) list_single_2graphic_pane_t1_cp3

0x4135,	// (0x0002b7dd) list_single_midp_graphic_pane_g2_ParamLimits

0x4135,	// (0x0002b7dd) list_single_midp_graphic_pane_g2

0x3b01,	// (0x0002b1a9) aid_zoom_text_primary

0x3048,	// (0x0002a6f0) aid_zoom_text_secondary

0xc604,	// (0x00033cac) status_small_pane_g7_ParamLimits

0xc604,	// (0x00033cac) status_small_pane_g7

0xc627,	// (0x00033ccf) status_small_pane_t1_ParamLimits

0x8736,	// (0x0002fdde) title_pane_g2

0x0003,

0xf554,	// (0x00036bfc) title_pane_g

0x89c1,	// (0x00030069) aid_size_cell_colour_1_pane_ParamLimits

0x89c1,	// (0x00030069) aid_size_cell_colour_1_pane

0x89d5,	// (0x0003007d) aid_size_cell_colour_2_pane_ParamLimits

0x89d5,	// (0x0003007d) aid_size_cell_colour_2_pane

0x89e9,	// (0x00030091) aid_size_cell_colour_3_pane_ParamLimits

0x89e9,	// (0x00030091) aid_size_cell_colour_3_pane

0x89fd,	// (0x000300a5) aid_size_cell_colour_4_pane_ParamLimits

0x89fd,	// (0x000300a5) aid_size_cell_colour_4_pane

0x355e,	// (0x0002ac06) title_pane_stacon_g1_ParamLimits

0x355e,	// (0x0002ac06) title_pane_stacon_g1

0xce9f,	// (0x00034547) popup_note_wait_window_g3_ParamLimits

0xce9f,	// (0x00034547) popup_note_wait_window_g3

0xcf15,	// (0x000345bd) popup_note_wait_window_t5_ParamLimits

0xcf15,	// (0x000345bd) popup_note_wait_window_t5

0xb412,	// (0x00032aba) main_feb_china_hwr_fs_writing_pane

0x9000,	// (0x000306a8) popup_feb_china_hwr_fs_window_ParamLimits

0x9000,	// (0x000306a8) popup_feb_china_hwr_fs_window

0x9a3c,	// (0x000310e4) aid_size_cell_hwr_fs_ParamLimits

0x9a3c,	// (0x000310e4) aid_size_cell_hwr_fs

0xc994,	// (0x0003403c) bg_popup_sub_pane_cp3_ParamLimits

0xc994,	// (0x0003403c) bg_popup_sub_pane_cp3

0x9a51,	// (0x000310f9) grid_hwr_fs_pane_ParamLimits

0x9a51,	// (0x000310f9) grid_hwr_fs_pane

0x4184,	// (0x0002b82c) linegrid_hwr_fs_pane_ParamLimits

0x4184,	// (0x0002b82c) linegrid_hwr_fs_pane

0x9a69,	// (0x00031111) cell_hwr_fs_pane_ParamLimits

0x9a69,	// (0x00031111) cell_hwr_fs_pane

0xc9a0,	// (0x00034048) linegrid_hwr_fs_pane_g1_ParamLimits

0xc9a0,	// (0x00034048) linegrid_hwr_fs_pane_g1

0x9a8f,	// (0x00031137) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a8f,	// (0x00031137) linegrid_hwr_fs_pane_g2

0xc9ac,	// (0x00034054) linegrid_hwr_fs_pane_g3_ParamLimits

0xc9ac,	// (0x00034054) linegrid_hwr_fs_pane_g3

0x41b6,	// (0x0002b85e) linegrid_hwr_fs_pane_g4_ParamLimits

0x41b6,	// (0x0002b85e) linegrid_hwr_fs_pane_g4

0x41d0,	// (0x0002b878) linegrid_hwr_fs_pane_g5_ParamLimits

0x41d0,	// (0x0002b878) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00036e9e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00036e9e) linegrid_hwr_fs_pane_g

0xc9b8,	// (0x00034060) cell_hwr_fs_pane_g1_ParamLimits

0xc9b8,	// (0x00034060) cell_hwr_fs_pane_g1

0xc796,	// (0x00033e3e) cell_hwr_fs_pane_g2_ParamLimits

0xc796,	// (0x00033e3e) cell_hwr_fs_pane_g2

0x9aa1,	// (0x00031149) cell_hwr_fs_pane_g3_ParamLimits

0x9aa1,	// (0x00031149) cell_hwr_fs_pane_g3

0x9aae,	// (0x00031156) cell_hwr_fs_pane_g4_ParamLimits

0x9aae,	// (0x00031156) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00036ea9) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00036ea9) cell_hwr_fs_pane_g

0x9abb,	// (0x00031163) cell_hwr_fs_pane_t1

0xb412,	// (0x00032aba) grid_highlight_pane_cp6

0xb412,	// (0x00032aba) main_idle_act2_pane

0xbb82,	// (0x0003322a) aid_inside_area_popup_secondary

0x9d3f,	// (0x000313e7) aid_inside_area_window_primary_ParamLimits

0x9d3f,	// (0x000313e7) aid_inside_area_window_primary

0xdc9c,	// (0x00035344) ai2_news_ticker_pane

0xdca4,	// (0x0003534c) aid_size_cell_ai1_link_ParamLimits

0xdca4,	// (0x0003534c) aid_size_cell_ai1_link

0xdcbe,	// (0x00035366) popup_ai2_data_window_ParamLimits

0xdcbe,	// (0x00035366) popup_ai2_data_window

0xdcd2,	// (0x0003537a) popup_ai2_link_window_ParamLimits

0xdcd2,	// (0x0003537a) popup_ai2_link_window

0xc994,	// (0x0003403c) bg_popup_sub_pane_cp4_ParamLimits

0xc994,	// (0x0003403c) bg_popup_sub_pane_cp4

0xdce6,	// (0x0003538e) grid_ai2_link_pane_ParamLimits

0xdce6,	// (0x0003538e) grid_ai2_link_pane

0xdcfd,	// (0x000353a5) popup_ai2_link_window_g1_ParamLimits

0xdcfd,	// (0x000353a5) popup_ai2_link_window_g1

0xdd09,	// (0x000353b1) popup_ai2_link_window_g2_ParamLimits

0xdd09,	// (0x000353b1) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003707c) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003707c) popup_ai2_link_window_g

0xdd18,	// (0x000353c0) ai2_mp_button_pane

0xdd20,	// (0x000353c8) ai2_mp_volume_pane

0xcae1,	// (0x00034189) bg_popup_sub_pane_cp5_ParamLimits

0xcae1,	// (0x00034189) bg_popup_sub_pane_cp5

0xdd28,	// (0x000353d0) heading_ai2_gene_pane_ParamLimits

0xdd28,	// (0x000353d0) heading_ai2_gene_pane

0xdd34,	// (0x000353dc) list_ai2_gene_pane_ParamLimits

0xdd34,	// (0x000353dc) list_ai2_gene_pane

0xdd7c,	// (0x00035424) cell_ai2_link_pane_ParamLimits

0xdd7c,	// (0x00035424) cell_ai2_link_pane

0xdd92,	// (0x0003543a) cell_ai2_link_pane_g1

0xb412,	// (0x00032aba) grid_highlight_pane_cp7

0x44de,	// (0x0002bb86) ai2_mp_volume_pane_g1

0xde63,	// (0x0003550b) ai2_mp_volume_pane_g2

0xddd8,	// (0x00035480) list_ai2_gene_pane_t1

0xde6b,	// (0x00035513) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00037095) ai2_mp_volume_pane_g

0x44e6,	// (0x0002bb8e) volume_small_pane_cp3

0xde73,	// (0x0003551b) aid_size_cell_ai2_button

0xde7b,	// (0x00035523) grid_ai2_button_pane

0xde84,	// (0x0003552c) cell_ai2_button_pane_ParamLimits

0xde84,	// (0x0003552c) cell_ai2_button_pane

0xb408,	// (0x00032ab0) cell_ai2_button_pane_g1

0xb412,	// (0x00032aba) grid_highlight_pane_cp8

0xde23,	// (0x000354cb) ai2_gene_pane_t1_ParamLimits

0xde23,	// (0x000354cb) ai2_gene_pane_t1

0x8f92,	// (0x0003063a) aid_height_parent_landscape

0x9ed4,	// (0x0003157c) aid_height_set_list

0xd893,	// (0x00034f3b) aid_size_parent

0xdb03,	// (0x000351ab) aid_size_cell_graphic_pane_ParamLimits

0xdd44,	// (0x000353ec) popup_ai2_data_window_g1_ParamLimits

0xdd44,	// (0x000353ec) popup_ai2_data_window_g1

0xdd50,	// (0x000353f8) ai2_news_ticker_pane_g1

0xdd58,	// (0x00035400) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00037081) ai2_news_ticker_pane_g

0xdd60,	// (0x00035408) ai2_news_ticker_pane_t1

0xdd6e,	// (0x00035416) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00037086) ai2_news_ticker_pane_t

0xdd9b,	// (0x00035443) heading_ai2_gene_pane_g1

0xdda3,	// (0x0003544b) heading_ai2_gene_pane_t1_ParamLimits

0xdda3,	// (0x0003544b) heading_ai2_gene_pane_t1

0xddb8,	// (0x00035460) list_highlight_pane_cp6

0xddc0,	// (0x00035468) ai2_gene_pane_ParamLimits

0xddc0,	// (0x00035468) ai2_gene_pane

0xdde6,	// (0x0003548e) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003708b) list_ai2_gene_pane_t

0xddf4,	// (0x0003549c) list_highlight_pane_cp8_ParamLimits

0xddf4,	// (0x0003549c) list_highlight_pane_cp8

0xde05,	// (0x000354ad) ai2_gene_pane_g1_ParamLimits

0xde05,	// (0x000354ad) ai2_gene_pane_g1

0xde17,	// (0x000354bf) ai2_gene_pane_g2_ParamLimits

0xde17,	// (0x000354bf) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00037090) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00037090) ai2_gene_pane_g

0xb9f9,	// (0x000330a1) scroll_pane_cp12

0x8f51,	// (0x000305f9) control_pane_t3_ParamLimits

0x8f51,	// (0x000305f9) control_pane_t3

0xc618,	// (0x00033cc0) status_small_pane_g8_ParamLimits

0xc618,	// (0x00033cc0) status_small_pane_g8

0x9093,	// (0x0003073b) popup_find_window_ParamLimits

0x930e,	// (0x000309b6) popup_note_image_window_ParamLimits

0x6899,	// (0x0002df41) list_double2_graphic_pane_vc_g1_ParamLimits

0x6899,	// (0x0002df41) list_double2_graphic_pane_vc_g1

0x681f,	// (0x0002dec7) list_double2_graphic_pane_vc_g2_ParamLimits

0x681f,	// (0x0002dec7) list_double2_graphic_pane_vc_g2

0x682b,	// (0x0002ded3) list_double2_graphic_pane_vc_g3_ParamLimits

0x682b,	// (0x0002ded3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00036e6c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00036e6c) list_double2_graphic_pane_vc_g

0x73e7,	// (0x0002ea8f) list_double2_graphic_pane_vc_t1_ParamLimits

0x73e7,	// (0x0002ea8f) list_double2_graphic_pane_vc_t1

0x681f,	// (0x0002dec7) list_single_heading_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_heading_pane_vc_g1

0x682b,	// (0x0002ded3) list_single_heading_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_heading_pane_vc_g

0x73fd,	// (0x0002eaa5) list_single_heading_pane_vc_t1_ParamLimits

0x73fd,	// (0x0002eaa5) list_single_heading_pane_vc_t1

0x7413,	// (0x0002eabb) list_single_heading_pane_vc_t2_ParamLimits

0x7413,	// (0x0002eabb) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00036e8d) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00036e8d) list_single_heading_pane_vc_t

0xc8ec,	// (0x00033f94) list_setting_number_pane_vc_g1_ParamLimits

0xc8ec,	// (0x00033f94) list_setting_number_pane_vc_g1

0xc8f8,	// (0x00033fa0) list_setting_number_pane_vc_g2_ParamLimits

0xc8f8,	// (0x00033fa0) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00036e92) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00036e92) list_setting_number_pane_vc_g

0xc904,	// (0x00033fac) list_setting_number_pane_vc_t1_ParamLimits

0xc904,	// (0x00033fac) list_setting_number_pane_vc_t1

0xc918,	// (0x00033fc0) list_setting_number_pane_vc_t2_ParamLimits

0xc918,	// (0x00033fc0) list_setting_number_pane_vc_t2

0xc932,	// (0x00033fda) list_setting_number_pane_vc_t3_ParamLimits

0xc932,	// (0x00033fda) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00036e97) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00036e97) list_setting_number_pane_vc_t

0xc958,	// (0x00034000) set_value_pane_vc_ParamLimits

0xc958,	// (0x00034000) set_value_pane_vc

0xda6c,	// (0x00035114) list_double2_graphic_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double2_graphic_pane_vc

0xda80,	// (0x00035128) list_double2_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x00035128) list_double2_large_graphic_pane_vc

0xda6c,	// (0x00035114) list_double2_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double2_pane_vc

0xda6c,	// (0x00035114) list_double_graphic_heading_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_graphic_heading_pane_vc

0xda6c,	// (0x00035114) list_double_graphic_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_graphic_pane_vc

0xda6c,	// (0x00035114) list_double_heading_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_heading_pane_vc

0xda80,	// (0x00035128) list_double_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x00035128) list_double_large_graphic_pane_vc

0xda6c,	// (0x00035114) list_double_number_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_number_pane_vc

0xda6c,	// (0x00035114) list_double_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_pane_vc

0xda6c,	// (0x00035114) list_double_time_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_double_time_pane_vc

0xda6c,	// (0x00035114) list_setting_number_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_setting_number_pane_vc

0xda6c,	// (0x00035114) list_setting_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_setting_pane_vc

0xda6c,	// (0x00035114) list_single_graphic_heading_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_single_graphic_heading_pane_vc

0xda6c,	// (0x00035114) list_single_heading_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_single_heading_pane_vc

0xda6c,	// (0x00035114) list_single_number_heading_pane_vc_ParamLimits

0xda6c,	// (0x00035114) list_single_number_heading_pane_vc

0x6899,	// (0x0002df41) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6899,	// (0x0002df41) list_double_graphic_heading_pane_vc_g1

0x681f,	// (0x0002dec7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x681f,	// (0x0002dec7) list_double_graphic_heading_pane_vc_g2

0x682b,	// (0x0002ded3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x682b,	// (0x0002ded3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x00036e6c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00036e6c) list_double_graphic_heading_pane_vc_g

0x75a8,	// (0x0002ec50) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x75a8,	// (0x0002ec50) list_double_graphic_heading_pane_vc_t1

0x73fd,	// (0x0002eaa5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x73fd,	// (0x0002eaa5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x0003709c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x0003709c) list_double_graphic_heading_pane_vc_t

0xc8ec,	// (0x00033f94) list_setting_pane_vc_g1_ParamLimits

0xc8ec,	// (0x00033f94) list_setting_pane_vc_g1

0xc8f8,	// (0x00033fa0) list_setting_pane_vc_g2_ParamLimits

0xc8f8,	// (0x00033fa0) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00036e92) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00036e92) list_setting_pane_vc_g

0xe07a,	// (0x00035722) list_setting_pane_vc_t1_ParamLimits

0xe07a,	// (0x00035722) list_setting_pane_vc_t1

0xe094,	// (0x0003573c) list_setting_pane_vc_t2_ParamLimits

0xe094,	// (0x0003573c) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x000370df) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x000370df) list_setting_pane_vc_t

0xc958,	// (0x00034000) set_value_pane_cp_vc_ParamLimits

0xc958,	// (0x00034000) set_value_pane_cp_vc

0x681f,	// (0x0002dec7) list_single_number_heading_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_single_number_heading_pane_vc_g1

0x682b,	// (0x0002ded3) list_single_number_heading_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_single_number_heading_pane_vc_g

0x73fd,	// (0x0002eaa5) list_single_number_heading_pane_vc_t1_ParamLimits

0x73fd,	// (0x0002eaa5) list_single_number_heading_pane_vc_t1

0x75bc,	// (0x0002ec64) list_single_number_heading_pane_vc_t2_ParamLimits

0x75bc,	// (0x0002ec64) list_single_number_heading_pane_vc_t2

0x6887,	// (0x0002df2f) list_single_number_heading_pane_vc_t3_ParamLimits

0x6887,	// (0x0002df2f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x000370e4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x000370e4) list_single_number_heading_pane_vc_t

0x6899,	// (0x0002df41) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6899,	// (0x0002df41) list_single_graphic_heading_pane_vc_g1

0x681f,	// (0x0002dec7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x681f,	// (0x0002dec7) list_single_graphic_heading_pane_vc_g4

0x682b,	// (0x0002ded3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x682b,	// (0x0002ded3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00036e6c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00036e6c) list_single_graphic_heading_pane_vc_g

0x73fd,	// (0x0002eaa5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x73fd,	// (0x0002eaa5) list_single_graphic_heading_pane_vc_t1

0x75d0,	// (0x0002ec78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x75d0,	// (0x0002ec78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x000370eb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x000370eb) list_single_graphic_heading_pane_vc_t

0x681f,	// (0x0002dec7) list_double2_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_double2_pane_vc_g1

0x682b,	// (0x0002ded3) list_double2_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_double2_pane_vc_g

0x74b3,	// (0x0002eb5b) list_double2_pane_vc_t1_ParamLimits

0x74b3,	// (0x0002eb5b) list_double2_pane_vc_t1

0x75e4,	// (0x0002ec8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x75e4,	// (0x0002ec8c) list_double2_large_graphic_pane_vc_g1

0x75f0,	// (0x0002ec98) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x75f0,	// (0x0002ec98) list_double2_large_graphic_pane_vc_g2

0x75fc,	// (0x0002eca4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x75fc,	// (0x0002eca4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00036c93) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00036c93) list_double2_large_graphic_pane_vc_g

0x7608,	// (0x0002ecb0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7608,	// (0x0002ecb0) list_double2_large_graphic_pane_vc_t1

0x761e,	// (0x0002ecc6) list_double_time_pane_vc_g1_ParamLimits

0x761e,	// (0x0002ecc6) list_double_time_pane_vc_g1

0x762a,	// (0x0002ecd2) list_double_time_pane_vc_g2_ParamLimits

0x762a,	// (0x0002ecd2) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x000370f0) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x000370f0) list_double_time_pane_vc_g

0x7636,	// (0x0002ecde) list_double_time_pane_vc_t1_ParamLimits

0x7636,	// (0x0002ecde) list_double_time_pane_vc_t1

0x7654,	// (0x0002ecfc) list_double_time_pane_vc_t2_ParamLimits

0x7654,	// (0x0002ecfc) list_double_time_pane_vc_t2

0x76a3,	// (0x0002ed4b) list_double_time_pane_vc_t3_ParamLimits

0x76a3,	// (0x0002ed4b) list_double_time_pane_vc_t3

0x76b5,	// (0x0002ed5d) list_double_time_pane_vc_t4_ParamLimits

0x76b5,	// (0x0002ed5d) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x000370f5) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x000370f5) list_double_time_pane_vc_t

0x681f,	// (0x0002dec7) list_double_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_double_pane_vc_g1

0x682b,	// (0x0002ded3) list_double_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_double_pane_vc_g

0x76c9,	// (0x0002ed71) list_double_pane_vc_t1_ParamLimits

0x76c9,	// (0x0002ed71) list_double_pane_vc_t1

0x76db,	// (0x0002ed83) list_double_pane_vc_t2_ParamLimits

0x76db,	// (0x0002ed83) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x000370fe) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x000370fe) list_double_pane_vc_t

0x681f,	// (0x0002dec7) list_double_number_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_double_number_pane_vc_g1

0x682b,	// (0x0002ded3) list_double_number_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_double_number_pane_vc_g

0x76f3,	// (0x0002ed9b) list_double_number_pane_vc_t1_ParamLimits

0x76f3,	// (0x0002ed9b) list_double_number_pane_vc_t1

0x7707,	// (0x0002edaf) list_double_number_pane_vc_t2_ParamLimits

0x7707,	// (0x0002edaf) list_double_number_pane_vc_t2

0x76db,	// (0x0002ed83) list_double_number_pane_vc_t3_ParamLimits

0x76db,	// (0x0002ed83) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x00037103) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x00037103) list_double_number_pane_vc_t

0x7719,	// (0x0002edc1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7719,	// (0x0002edc1) list_double_large_graphic_pane_vc_g1

0x772a,	// (0x0002edd2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x772a,	// (0x0002edd2) list_double_large_graphic_pane_vc_g2

0x75fc,	// (0x0002eca4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x75fc,	// (0x0002eca4) list_double_large_graphic_pane_vc_g3

0x7739,	// (0x0002ede1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7739,	// (0x0002ede1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x0003710a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x0003710a) list_double_large_graphic_pane_vc_g

0x7745,	// (0x0002eded) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7745,	// (0x0002eded) list_double_large_graphic_pane_vc_t1

0x775c,	// (0x0002ee04) list_double_large_graphic_pane_vc_t2_ParamLimits

0x775c,	// (0x0002ee04) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00037113) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00037113) list_double_large_graphic_pane_vc_t

0x681f,	// (0x0002dec7) list_double_heading_pane_vc_g1_ParamLimits

0x681f,	// (0x0002dec7) list_double_heading_pane_vc_g1

0x682b,	// (0x0002ded3) list_double_heading_pane_vc_g2_ParamLimits

0x682b,	// (0x0002ded3) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00036c76) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00036c76) list_double_heading_pane_vc_g

0x7775,	// (0x0002ee1d) list_double_heading_pane_vc_t1_ParamLimits

0x7775,	// (0x0002ee1d) list_double_heading_pane_vc_t1

0x73fd,	// (0x0002eaa5) list_double_heading_pane_vc_t2_ParamLimits

0x73fd,	// (0x0002eaa5) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x00037118) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x00037118) list_double_heading_pane_vc_t

0x7789,	// (0x0002ee31) list_double_graphic_pane_vc_g1_ParamLimits

0x7789,	// (0x0002ee31) list_double_graphic_pane_vc_g1

0x7799,	// (0x0002ee41) list_double_graphic_pane_vc_g2_ParamLimits

0x7799,	// (0x0002ee41) list_double_graphic_pane_vc_g2

0x77a8,	// (0x0002ee50) list_double_graphic_pane_vc_g3_ParamLimits

0x77a8,	// (0x0002ee50) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x0003711d) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0003711d) list_double_graphic_pane_vc_g

0x77b4,	// (0x0002ee5c) list_double_graphic_pane_vc_t1_ParamLimits

0x77b4,	// (0x0002ee5c) list_double_graphic_pane_vc_t1

0x76db,	// (0x0002ed83) list_double_graphic_pane_vc_t2_ParamLimits

0x76db,	// (0x0002ed83) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00037124) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00037124) list_double_graphic_pane_vc_t

0x30d2,	// (0x0002a77a) aid_size_cell_fastswap

0x8582,	// (0x0002fc2a) aid_size_cell_touch_ParamLimits

0x8582,	// (0x0002fc2a) aid_size_cell_touch

0x333f,	// (0x0002a9e7) popup_fast_swap_wide_window_ParamLimits

0x333f,	// (0x0002a9e7) popup_fast_swap_wide_window

0x86cd,	// (0x0002fd75) touch_pane_ParamLimits

0x86cd,	// (0x0002fd75) touch_pane

0xba4f,	// (0x000330f7) button_value_adjust_pane_cp2

0x710a,	// (0x0002e7b2) button_value_adjust_pane_cp4

0x712a,	// (0x0002e7d2) form_field_data_pane_cp2

0x0545,	// (0x00027bed) form_field_data_wide_pane_cp2

0xbdb4,	// (0x0003345c) bg_scroll_pane_ParamLimits

0x36c1,	// (0x0002ad69) scroll_handle_pane_ParamLimits

0x36d5,	// (0x0002ad7d) scroll_sc2_down_pane_ParamLimits

0x36d5,	// (0x0002ad7d) scroll_sc2_down_pane

0xbde5,	// (0x0003348d) scroll_sc2_up_pane_ParamLimits

0xbde5,	// (0x0003348d) scroll_sc2_up_pane

0xa27f,	// (0x00031927) grid_wheel_folder_pane_g1_ParamLimits

0xa27f,	// (0x00031927) grid_wheel_folder_pane_g1

0x389a,	// (0x0002af42) clock_nsta_pane_cp2_ParamLimits

0x389a,	// (0x0002af42) clock_nsta_pane_cp2

0xbbd3,	// (0x0003327b) listscroll_midp_pane_ParamLimits

0x8d63,	// (0x0003040b) midp_canvas_pane

0xc66c,	// (0x00033d14) nsta_clock_indic_pane

0xc694,	// (0x00033d3c) listscroll_form_pane_vc

0xc69c,	// (0x00033d44) listscroll_set_pane_vc_ParamLimits

0xc69c,	// (0x00033d44) listscroll_set_pane_vc

0x973c,	// (0x00030de4) clock_nsta_pane

0x9766,	// (0x00030e0e) indicator_nsta_pane

0xc7e2,	// (0x00033e8a) bg_popup_sub_pane_cp2_ParamLimits

0xc7f6,	// (0x00033e9e) find_pane_cp2_ParamLimits

0xc7f6,	// (0x00033e9e) find_pane_cp2

0xc80c,	// (0x00033eb4) grid_toobar_pane_ParamLimits

0xc968,	// (0x00034010) list_form_gen_pane_vc_ParamLimits

0xc968,	// (0x00034010) list_form_gen_pane_vc

0xc97e,	// (0x00034026) scroll_pane_cp8_vc_ParamLimits

0xc97e,	// (0x00034026) scroll_pane_cp8_vc

0xc9ce,	// (0x00034076) data_form_wide_pane_vc_ParamLimits

0xc9ce,	// (0x00034076) data_form_wide_pane_vc

0xc9da,	// (0x00034082) form_field_data_wide_pane_vc_g1

0xc9e2,	// (0x0003408a) form_field_data_wide_pane_vc_t1_ParamLimits

0xc9e2,	// (0x0003408a) form_field_data_wide_pane_vc_t1

0xba63,	// (0x0003310b) input_focus_pane_cp6_vc_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_cp6_vc

0x9b5c,	// (0x00031204) list_midp_pane_ParamLimits

0xd8a5,	// (0x00034f4d) scroll_pane_cp16_ParamLimits

0xd8a5,	// (0x00034f4d) scroll_pane_cp16

0xcc79,	// (0x00034321) button_value_adjust_pane_ParamLimits

0xcc79,	// (0x00034321) button_value_adjust_pane

0x9ee5,	// (0x0003158d) button_value_adjust_pane_cp6_ParamLimits

0x9ee5,	// (0x0003158d) button_value_adjust_pane_cp6

0x9ffb,	// (0x000316a3) settings_code_pane_cp_ParamLimits

0x9ffb,	// (0x000316a3) settings_code_pane_cp

0xb408,	// (0x00032ab0) cell_touch_pane_g1

0xb408,	// (0x00032ab0) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00036db1) cell_touch_pane_g

0xa15e,	// (0x00031806) cell_touch_pane_cp_ParamLimits

0xa15e,	// (0x00031806) cell_touch_pane_cp

0xa17a,	// (0x00031822) cell_touch_pane_ParamLimits

0xa17a,	// (0x00031822) cell_touch_pane

0xb408,	// (0x00032ab0) scroll_sc2_down_pane_g1

0xb408,	// (0x00032ab0) scroll_sc2_up_pane_g1

0xb412,	// (0x00032aba) bg_set_opt_pane_cp4_vc

0xde96,	// (0x0003553e) list_set_graphic_pane_vc_g1_ParamLimits

0xde96,	// (0x0003553e) list_set_graphic_pane_vc_g1

0xdea2,	// (0x0003554a) list_set_graphic_pane_vc_g2_ParamLimits

0xdea2,	// (0x0003554a) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x000370a1) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x000370a1) list_set_graphic_pane_vc_g

0xdeae,	// (0x00035556) text_primary_small_cp13_vc_ParamLimits

0xdeae,	// (0x00035556) text_primary_small_cp13_vc

0xd87f,	// (0x00034f27) list_set_graphic_pane_vc_ParamLimits

0xd87f,	// (0x00034f27) list_set_graphic_pane_vc

0xb412,	// (0x00032aba) input_focus_pane_cp2_vc

0xb408,	// (0x00032ab0) setting_code_pane_vc_g1

0xb485,	// (0x00032b2d) setting_code_pane_vc_t1

0xdec6,	// (0x0003556e) set_text_pane_vc_t1_ParamLimits

0xdec6,	// (0x0003556e) set_text_pane_vc_t1

0xb412,	// (0x00032aba) input_focus_pane_cp1_vc

0xdee5,	// (0x0003558d) list_set_text_pane_vc

0xb408,	// (0x00032ab0) setting_text_pane_vc_g1

0xb412,	// (0x00032aba) bg_set_opt_pane_cp2_vc

0xb47c,	// (0x00032b24) setting_slider_graphic_pane_vc_g1

0xdeef,	// (0x00035597) setting_slider_graphic_pane_vc_t1

0xdefe,	// (0x000355a6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x000370a6) setting_slider_graphic_pane_vc_t

0xdf0d,	// (0x000355b5) slider_set_pane_cp_vc

0xdf15,	// (0x000355bd) slider_set_pane_vc_g1

0xdf1e,	// (0x000355c6) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x000370ab) slider_set_pane_vc_g

0xbaca,	// (0x00033172) set_opt_bg_pane_g1_copy1

0xbad2,	// (0x0003317a) set_opt_bg_pane_g2_copy1

0xdf4a,	// (0x000355f2) set_opt_bg_pane_g3_copy1

0xbae2,	// (0x0003318a) set_opt_bg_pane_g4_copy1

0xbaea,	// (0x00033192) set_opt_bg_pane_g5_copy1

0xbaf2,	// (0x0003319a) set_opt_bg_pane_g6_copy1

0xdf52,	// (0x000355fa) set_opt_bg_pane_g7_copy1

0xdf5c,	// (0x00035604) set_opt_bg_pane_g8_copy1

0xdf64,	// (0x0003560c) set_opt_bg_pane_g9_copy1

0xb412,	// (0x00032aba) bg_set_opt_pane_cp_vc

0xdf6c,	// (0x00035614) setting_slider_pane_vc_t1

0xdf7b,	// (0x00035623) setting_slider_pane_vc_t2

0xdf8a,	// (0x00035632) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x000370ba) setting_slider_pane_vc_t

0xdf99,	// (0x00035641) slider_set_pane_vc

0x41f4,	// (0x0002b89c) volume_set_pane_vc_g1

0x44ef,	// (0x0002bb97) volume_set_pane_vc_g2

0x44f8,	// (0x0002bba0) volume_set_pane_vc_g3

0x4501,	// (0x0002bba9) volume_set_pane_vc_g4

0x450a,	// (0x0002bbb2) volume_set_pane_vc_g5

0x4513,	// (0x0002bbbb) volume_set_pane_vc_g6

0x451c,	// (0x0002bbc4) volume_set_pane_vc_g7

0x4525,	// (0x0002bbcd) volume_set_pane_vc_g8

0x452e,	// (0x0002bbd6) volume_set_pane_vc_g9

0x4537,	// (0x0002bbdf) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x000370c1) volume_set_pane_vc_g

0xdfa1,	// (0x00035649) volume_set_pane_vc

0xdfab,	// (0x00035653) button_value_adjust_pane_cp1_vc

0xdfb5,	// (0x0003565d) list_highlight_pane_cp2_vc

0xdfbe,	// (0x00035666) list_set_pane_vc_ParamLimits

0xdfbe,	// (0x00035666) list_set_pane_vc

0xe010,	// (0x000356b8) main_pane_set_vc_t1_ParamLimits

0xe010,	// (0x000356b8) main_pane_set_vc_t1

0xe025,	// (0x000356cd) main_pane_set_vc_t2_ParamLimits

0xe025,	// (0x000356cd) main_pane_set_vc_t2

0xe037,	// (0x000356df) main_pane_set_vc_t3_ParamLimits

0xe037,	// (0x000356df) main_pane_set_vc_t3

0xe049,	// (0x000356f1) main_pane_set_vc_t4_ParamLimits

0xe049,	// (0x000356f1) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x000370d6) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x000370d6) main_pane_set_vc_t

0xe05b,	// (0x00035703) setting_code_pane_vc_ParamLimits

0xe05b,	// (0x00035703) setting_code_pane_vc

0xe06a,	// (0x00035712) setting_slider_graphic_pane_vc

0xe06a,	// (0x00035712) setting_slider_pane_vc

0xe06a,	// (0x00035712) setting_text_pane_vc

0xe06a,	// (0x00035712) setting_volume_pane_vc

0xe072,	// (0x0003571a) scroll_pane_cp121_vc

0xba3d,	// (0x000330e5) set_content_pane_vc

0xe0aa,	// (0x00035752) button_value_adjust_pane_g1

0xe0b3,	// (0x0003575b) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x00037129) button_value_adjust_pane_g

0xe0bc,	// (0x00035764) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe0bc,	// (0x00035764) form_field_slider_wide_pane_vc_t1

0xe0d0,	// (0x00035778) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe0d0,	// (0x00035778) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x0003712e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x0003712e) form_field_slider_wide_pane_vc_t

0xb460,	// (0x00032b08) input_focus_pane_cp10_vc_ParamLimits

0xb460,	// (0x00032b08) input_focus_pane_cp10_vc

0xe0fc,	// (0x000357a4) slider_cont_pane_cp1_vc_ParamLimits

0xe0fc,	// (0x000357a4) slider_cont_pane_cp1_vc

0xe10c,	// (0x000357b4) slider_form_pane_g1_cp2

0xdf1e,	// (0x000355c6) slider_form_pane_g2_cp2

0xe139,	// (0x000357e1) form_field_slider_pane_vc_t3

0xe147,	// (0x000357ef) form_field_slider_pane_vc_t4

0xe155,	// (0x000357fd) slider_form_pane_vc_ParamLimits

0xe155,	// (0x000357fd) slider_form_pane_vc

0xe162,	// (0x0003580a) form_field_slider_pane_vc_t1_ParamLimits

0xe162,	// (0x0003580a) form_field_slider_pane_vc_t1

0xe0d0,	// (0x00035778) form_field_slider_pane_vc_t2_ParamLimits

0xe0d0,	// (0x00035778) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00037140) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00037140) form_field_slider_pane_vc_t

0xb460,	// (0x00032b08) input_focus_pane_cp9_vc_ParamLimits

0xb460,	// (0x00032b08) input_focus_pane_cp9_vc

0xe17e,	// (0x00035826) slider_cont_pane_vc_ParamLimits

0xe17e,	// (0x00035826) slider_cont_pane_vc

0xe190,	// (0x00035838) list_form_graphic_pane_cp_vc_ParamLimits

0xe190,	// (0x00035838) list_form_graphic_pane_cp_vc

0xc9da,	// (0x00034082) form_field_popup_wide_pane_vc_g1

0xe1a5,	// (0x0003584d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe1a5,	// (0x0003584d) form_field_popup_wide_pane_vc_t1

0xba63,	// (0x0003310b) input_focus_pane_cp8_vc_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_cp8_vc

0xe1ea,	// (0x00035892) list_form_wide_pane_vc_ParamLimits

0xe1ea,	// (0x00035892) list_form_wide_pane_vc

0xe1f6,	// (0x0003589e) list_form_graphic_pane_vc_g1

0xe1fe,	// (0x000358a6) list_form_graphic_pane_vc_t1_ParamLimits

0xe1fe,	// (0x000358a6) list_form_graphic_pane_vc_t1

0xb46e,	// (0x00032b16) list_highlight_pane_cp5_vc_ParamLimits

0xb46e,	// (0x00032b16) list_highlight_pane_cp5_vc

0xe21a,	// (0x000358c2) list_form_graphic_pane_vc_ParamLimits

0xe21a,	// (0x000358c2) list_form_graphic_pane_vc

0xc9da,	// (0x00034082) form_field_popup_pane_vc_g1

0xe230,	// (0x000358d8) form_field_popup_pane_vc_t1_ParamLimits

0xe230,	// (0x000358d8) form_field_popup_pane_vc_t1

0xba63,	// (0x0003310b) input_focus_pane_cp7_vc_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_cp7_vc

0xe247,	// (0x000358ef) list_form_pane_vc_ParamLimits

0xe247,	// (0x000358ef) list_form_pane_vc

0xe253,	// (0x000358fb) data_form_pane_vc_t1_ParamLimits

0xe253,	// (0x000358fb) data_form_pane_vc_t1

0xbaca,	// (0x00033172) input_focus_pane_vc_g1

0xbad2,	// (0x0003317a) input_focus_pane_vc_g2

0xbada,	// (0x00033182) input_focus_pane_vc_g3

0xbae2,	// (0x0003318a) input_focus_pane_vc_g4

0xbaea,	// (0x00033192) input_focus_pane_vc_g5

0xbaf2,	// (0x0003319a) input_focus_pane_vc_g6

0xbafa,	// (0x000331a2) input_focus_pane_vc_g7

0xbb02,	// (0x000331aa) input_focus_pane_vc_g8

0xbb0a,	// (0x000331b2) input_focus_pane_vc_g9

0xb408,	// (0x00032ab0) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00036d3a) input_focus_pane_vc_g

0xc9ce,	// (0x00034076) data_form_pane_vc_ParamLimits

0xc9ce,	// (0x00034076) data_form_pane_vc

0xc9da,	// (0x00034082) form_field_data_pane_vc_g1

0xe26e,	// (0x00035916) form_field_data_pane_vc_t1_ParamLimits

0xe26e,	// (0x00035916) form_field_data_pane_vc_t1

0xba63,	// (0x0003310b) input_focus_pane_vc_ParamLimits

0xba63,	// (0x0003310b) input_focus_pane_vc

0xe288,	// (0x00035930) button_value_adjust_pane_cp3_vc

0xe290,	// (0x00035938) button_value_adjust_pane_cp5_vc

0xe298,	// (0x00035940) form_field_data_pane_vc_ParamLimits

0xe298,	// (0x00035940) form_field_data_pane_vc

0xe2af,	// (0x00035957) form_field_data_pane_vc_cp2

0xe2b7,	// (0x0003595f) form_field_data_wide_pane_vc_ParamLimits

0xe2b7,	// (0x0003595f) form_field_data_wide_pane_vc

0xe2cd,	// (0x00035975) form_field_data_wide_pane_vc_cp2

0xe2d5,	// (0x0003597d) form_field_popup_pane_vc_ParamLimits

0xe2d5,	// (0x0003597d) form_field_popup_pane_vc

0xe2ec,	// (0x00035994) form_field_popup_wide_pane_vc_ParamLimits

0xe2ec,	// (0x00035994) form_field_popup_wide_pane_vc

0xe302,	// (0x000359aa) form_field_slider_pane_vc_ParamLimits

0xe302,	// (0x000359aa) form_field_slider_pane_vc

0xe315,	// (0x000359bd) form_field_slider_wide_pane_vc_ParamLimits

0xe315,	// (0x000359bd) form_field_slider_wide_pane_vc

0xa198,	// (0x00031840) grid_touch_1_pane_ParamLimits

0xa198,	// (0x00031840) grid_touch_1_pane

0xa1ac,	// (0x00031854) grid_touch_2_pane_ParamLimits

0xa1ac,	// (0x00031854) grid_touch_2_pane

0xe328,	// (0x000359d0) touch_pane_g1_ParamLimits

0xe328,	// (0x000359d0) touch_pane_g1

0xe336,	// (0x000359de) cell_app_pane_cp_wide_ParamLimits

0xe336,	// (0x000359de) cell_app_pane_cp_wide

0xe347,	// (0x000359ef) grid_popup_fast_wide_pane_ParamLimits

0xe347,	// (0x000359ef) grid_popup_fast_wide_pane

0xe35b,	// (0x00035a03) scroll_pane_cp19_ParamLimits

0xe35b,	// (0x00035a03) scroll_pane_cp19

0xb412,	// (0x00032aba) bg_popup_window_pane_cp20

0xe36f,	// (0x00035a17) listscroll_popup_fast_wide_pane

0xc7c8,	// (0x00033e70) grid_indicator_nsta_pane

0xe377,	// (0x00035a1f) clock_nsta_pane_g1

0xe380,	// (0x00035a28) clock_nsta_pane_t1

0xa1d6,	// (0x0003187e) cell_indicator_nsta_pane_ParamLimits

0xa1d6,	// (0x0003187e) cell_indicator_nsta_pane

0xe328,	// (0x000359d0) cell_indicator_nsta_pane_g1

0xa1f3,	// (0x0003189b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00037151) cell_indicator_nsta_pane_g

0xe39c,	// (0x00035a44) clock_nsta_pane_cp

0xe3a4,	// (0x00035a4c) indicator_nsta_pane_cp

0xe3ad,	// (0x00035a55) nsta_clock_indic_pane_g1

0xb4aa,	// (0x00032b52) grid_indicator_pane

0xbed7,	// (0x0003357f) scroll_pane_cp29

0x37e9,	// (0x0002ae91) indicator_nsta_pane_cp2_ParamLimits

0x37e9,	// (0x0002ae91) indicator_nsta_pane_cp2

0xb46e,	// (0x00032b16) main_apps_wheel_pane

0xcb1e,	// (0x000341c6) form_midp_field_text_pane_ParamLimits

0xcc4b,	// (0x000342f3) scroll_bar_cp050_ParamLimits

0xe416,	// (0x00035abe) cell_indicator_pane_ParamLimits

0xe416,	// (0x00035abe) cell_indicator_pane

0xe433,	// (0x00035adb) cell_indicator_pane_g1

0xa209,	// (0x000318b1) grid_wheel_folder_pane_ParamLimits

0xa209,	// (0x000318b1) grid_wheel_folder_pane

0xa217,	// (0x000318bf) list_wheel_apps_pane_ParamLimits

0xa217,	// (0x000318bf) list_wheel_apps_pane

0xa225,	// (0x000318cd) main_apps_wheel_pane_g1_ParamLimits

0xa225,	// (0x000318cd) main_apps_wheel_pane_g1

0xa231,	// (0x000318d9) main_apps_wheel_pane_g2_ParamLimits

0xa231,	// (0x000318d9) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003716d) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003716d) main_apps_wheel_pane_g

0xa23f,	// (0x000318e7) main_apps_wheel_pane_t1_ParamLimits

0xa23f,	// (0x000318e7) main_apps_wheel_pane_t1

0xa253,	// (0x000318fb) list_wheel_apps_pane_g1

0xa25b,	// (0x00031903) list_wheel_apps_pane_g2

0xa263,	// (0x0003190b) list_wheel_apps_pane_g3

0xa26b,	// (0x00031913) list_wheel_apps_pane_g4

0xa275,	// (0x0003191d) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00037172) list_wheel_apps_pane_g

0xc2fc,	// (0x000339a4) navi_icon_text_pane

0x9630,	// (0x00030cd8) aid_fill_nsta

0xe43d,	// (0x00035ae5) navi_icon_text_pane_g1

0xe449,	// (0x00035af1) navi_icon_text_pane_t1

0xc1f4,	// (0x0003389c) list_set_graphic_pane_t1_ParamLimits

0xc1f4,	// (0x0003389c) list_set_graphic_pane_t1

0xd353,	// (0x000349fb) popup_midp_note_alarm_window_t6_ParamLimits

0xd353,	// (0x000349fb) popup_midp_note_alarm_window_t6

0xd365,	// (0x00034a0d) popup_midp_note_alarm_window_t7_ParamLimits

0xd365,	// (0x00034a0d) popup_midp_note_alarm_window_t7

0xd377,	// (0x00034a1f) popup_midp_note_alarm_window_t8_ParamLimits

0xd377,	// (0x00034a1f) popup_midp_note_alarm_window_t8

0xd389,	// (0x00034a31) popup_midp_note_alarm_window_t9_ParamLimits

0xd389,	// (0x00034a31) popup_midp_note_alarm_window_t9

0xd39b,	// (0x00034a43) popup_midp_note_alarm_window_t10_ParamLimits

0xd39b,	// (0x00034a43) popup_midp_note_alarm_window_t10

0xd3ad,	// (0x00034a55) popup_midp_note_alarm_window_t11_ParamLimits

0xd3ad,	// (0x00034a55) popup_midp_note_alarm_window_t11

0xd3bf,	// (0x00034a67) scroll_pane_cp17_ParamLimits

0xd3bf,	// (0x00034a67) scroll_pane_cp17

0x41f4,	// (0x0002b89c) volume_small_pane_cp_g1

0x4540,	// (0x0002bbe8) volume_small_pane_cp_g2

0x4549,	// (0x0002bbf1) volume_small_pane_cp_g3

0x4552,	// (0x0002bbfa) volume_small_pane_cp_g4

0x455b,	// (0x0002bc03) volume_small_pane_cp_g5

0x4564,	// (0x0002bc0c) volume_small_pane_cp_g6

0x456d,	// (0x0002bc15) volume_small_pane_cp_g7

0x4576,	// (0x0002bc1e) volume_small_pane_cp_g8

0x457f,	// (0x0002bc27) volume_small_pane_cp_g9

0x4588,	// (0x0002bc30) volume_small_pane_cp_g10

0xc482,	// (0x00033b2a) midp_ticker_pane_g1_ParamLimits

0xc48e,	// (0x00033b36) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00036e06) midp_ticker_pane_g_ParamLimits

0xc49a,	// (0x00033b42) midp_ticker_pane_t1_ParamLimits

0x9654,	// (0x00030cfc) aid_fill_nsta_2

0xcc37,	// (0x000342df) list_form2_midp_pane

0xda3b,	// (0x000350e3) midp_editing_number_pane_ParamLimits

0xda4a,	// (0x000350f2) midp_ticker_pane_ParamLimits

0xe45b,	// (0x00035b03) form2_midp_field_pane

0xe463,	// (0x00035b0b) scroll_pane_cp51

0xe483,	// (0x00035b2b) form2_midp_button_pane_ParamLimits

0xe483,	// (0x00035b2b) form2_midp_button_pane

0xe495,	// (0x00035b3d) form2_midp_content_pane_ParamLimits

0xe495,	// (0x00035b3d) form2_midp_content_pane

0xe4af,	// (0x00035b57) form2_midp_field_choice_group_pane

0xe4b7,	// (0x00035b5f) form2_midp_field_pane_g1

0xe4bf,	// (0x00035b67) form2_midp_field_pane_g2

0xe4c7,	// (0x00035b6f) form2_midp_field_pane_g3

0xe4cf,	// (0x00035b77) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00037197) form2_midp_field_pane_g

0xe4d7,	// (0x00035b7f) form2_midp_gauge_slider_pane

0xe4df,	// (0x00035b87) form2_midp_gauge_wait_pane

0xe4e7,	// (0x00035b8f) form2_midp_image_pane_ParamLimits

0xe4e7,	// (0x00035b8f) form2_midp_image_pane

0xe544,	// (0x00035bec) form2_midp_label_pane_ParamLimits

0xe544,	// (0x00035bec) form2_midp_label_pane

0xa2a8,	// (0x00031950) form2_midp_label_pane_cp_ParamLimits

0xa2a8,	// (0x00031950) form2_midp_label_pane_cp

0xe55d,	// (0x00035c05) form2_midp_string_pane_ParamLimits

0xe55d,	// (0x00035c05) form2_midp_string_pane

0x77c6,	// (0x0002ee6e) form2_midp_text_pane_ParamLimits

0x77c6,	// (0x0002ee6e) form2_midp_text_pane

0xe56f,	// (0x00035c17) form2_midp_time_pane

0xe57f,	// (0x00035c27) input_focus_pane_cp51_ParamLimits

0xe57f,	// (0x00035c27) input_focus_pane_cp51

0xe597,	// (0x00035c3f) form2_midp_label_pane_t1_ParamLimits

0xe597,	// (0x00035c3f) form2_midp_label_pane_t1

0x77df,	// (0x0002ee87) form2_mdip_text_pane_t1_ParamLimits

0x77df,	// (0x0002ee87) form2_mdip_text_pane_t1

0x77fc,	// (0x0002eea4) form2_midp_time_pane_t1

0xe5df,	// (0x00035c87) form2_midp_gauge_slider_pane_t1

0xa2c9,	// (0x00031971) form2_midp_gauge_slider_pane_t2

0xa2dd,	// (0x00031985) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x000371a0) form2_midp_gauge_slider_pane_t

0xe5f1,	// (0x00035c99) form2_midp_slider_pane

0xe5fd,	// (0x00035ca5) form2_midp_gauge_wait_pane_t1

0xe60b,	// (0x00035cb3) form2_midp_wait_pane_ParamLimits

0xe60b,	// (0x00035cb3) form2_midp_wait_pane

0xa2f1,	// (0x00031999) list_single_2graphic_pane_cp4_ParamLimits

0xa2f1,	// (0x00031999) list_single_2graphic_pane_cp4

0x9adf,	// (0x00031187) list_single_midp_graphic_pane_cp_ParamLimits

0x9adf,	// (0x00031187) list_single_midp_graphic_pane_cp

0xb412,	// (0x00032aba) list_highlight_pane_cp20

0xe636,	// (0x00035cde) list_single_2graphic_pane_g1_cp4

0xdd9b,	// (0x00035443) list_single_2graphic_pane_g2_cp4

0xe63e,	// (0x00035ce6) list_single_2graphic_pane_t1_cp4

0xb46e,	// (0x00032b16) list_highlight_pane_cp21

0xe64d,	// (0x00035cf5) list_single_midp_graphic_pane_g4_cp

0xe65c,	// (0x00035d04) list_single_midp_graphic_pane_t1_cp

0xa308,	// (0x000319b0) form2_mdip_string_pane_t1_ParamLimits

0xa308,	// (0x000319b0) form2_mdip_string_pane_t1

0xb412,	// (0x00032aba) bg_wml_button_pane_cp2

0xb408,	// (0x00032ab0) form2_midp_image_pane_g1

0x6a6a,	// (0x0002e112) list_double_large_graphic_pane_g5_ParamLimits

0x6a6a,	// (0x0002e112) list_double_large_graphic_pane_g5

0xbbd3,	// (0x0003327b) midp_form_pane_ParamLimits

0xb46e,	// (0x00032b16) main_apps_wheel_pane_ParamLimits

0x938c,	// (0x00030a34) popup_preview_window_ParamLimits

0x938c,	// (0x00030a34) popup_preview_window

0x405f,	// (0x0002b707) popup_touch_info_window_ParamLimits

0x405f,	// (0x0002b707) popup_touch_info_window

0x407d,	// (0x0002b725) popup_touch_menu_window_ParamLimits

0x407d,	// (0x0002b725) popup_touch_menu_window

0xb3fe,	// (0x00032aa6) bg_popup_sub_pane_cp6

0xe671,	// (0x00035d19) list_touch_menu_pane

0xe679,	// (0x00035d21) list_single_touch_menu_pane_ParamLimits

0xe679,	// (0x00035d21) list_single_touch_menu_pane

0xe68d,	// (0x00035d35) list_single_touch_menu_pane_t1

0xb46e,	// (0x00032b16) bg_popup_sub_pane_cp7_ParamLimits

0xb46e,	// (0x00032b16) bg_popup_sub_pane_cp7

0xe69b,	// (0x00035d43) heading_sub_pane

0xe6a3,	// (0x00035d4b) list_touch_info_pane_ParamLimits

0xe6a3,	// (0x00035d4b) list_touch_info_pane

0xe6b2,	// (0x00035d5a) list_single_touch_info_pane_ParamLimits

0xe6b2,	// (0x00035d5a) list_single_touch_info_pane

0xe6c4,	// (0x00035d6c) list_single_touch_info_pane_t1

0xe6d2,	// (0x00035d7a) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x000371ae) list_single_touch_info_pane_t

0xc458,	// (0x00033b00) bg_popup_heading_pane_cp

0xe6e0,	// (0x00035d88) heading_sub_pane_t1

0xc994,	// (0x0003403c) bg_popup_preview_window_pane_cp_ParamLimits

0xc994,	// (0x0003403c) bg_popup_preview_window_pane_cp

0xe69b,	// (0x00035d43) heading_preview_pane

0xe6a3,	// (0x00035d4b) list_preview_pane_ParamLimits

0xe6a3,	// (0x00035d4b) list_preview_pane

0xe6ee,	// (0x00035d96) popup_preview_window_g1

0xe6b2,	// (0x00035d5a) list_single_preview_pane_ParamLimits

0xe6b2,	// (0x00035d5a) list_single_preview_pane

0xe6f6,	// (0x00035d9e) list_single_preview_pane_g1

0xe6fe,	// (0x00035da6) list_single_preview_pane_t1

0xe6c4,	// (0x00035d6c) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x000371b3) list_single_preview_pane_t

0xe70c,	// (0x00035db4) bg_popup_heading_pane_cp2_ParamLimits

0xe70c,	// (0x00035db4) bg_popup_heading_pane_cp2

0xe722,	// (0x00035dca) heading_preview_pane_g1

0xe72a,	// (0x00035dd2) heading_preview_pane_t1_ParamLimits

0xe72a,	// (0x00035dd2) heading_preview_pane_t1

0xb4c1,	// (0x00032b69) soft_indicator_pane_t1_ParamLimits

0xb9d6,	// (0x0003307e) scroll_pane_ParamLimits

0xbdd3,	// (0x0003347b) scroll_sc2_left_pane

0xbddc,	// (0x00033484) scroll_sc2_right_pane

0xbdfb,	// (0x000334a3) scroll_bg_pane_g1_ParamLimits

0xbe10,	// (0x000334b8) scroll_bg_pane_g2_ParamLimits

0xbe28,	// (0x000334d0) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00036d91) scroll_bg_pane_g_ParamLimits

0xbdfb,	// (0x000334a3) scroll_handle_pane_g1_ParamLimits

0xbe4a,	// (0x000334f2) scroll_handle_pane_g2_ParamLimits

0xbe28,	// (0x000334d0) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00036d98) scroll_handle_pane_g_ParamLimits

0x3b39,	// (0x0002b1e1) popup_choice_list_window_ParamLimits

0x3b39,	// (0x0002b1e1) popup_choice_list_window

0xc7ee,	// (0x00033e96) choice_list_pane

0xc870,	// (0x00033f18) cell_toolbar_pane_t1

0xc898,	// (0x00033f40) toolbar_button_pane_ParamLimits

0xd780,	// (0x00034e28) ai_gene_pane_1_t2_ParamLimits

0xd780,	// (0x00034e28) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00036fbb) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00036fbb) ai_gene_pane_1_t

0xe747,	// (0x00035def) scroll_sc2_left_pane_g1

0xe747,	// (0x00035def) scroll_sc2_right_pane_g1

0xbbd3,	// (0x0003327b) bg_popup_sub_pane_cp10

0xe751,	// (0x00035df9) list_choice_list_pane

0xe768,	// (0x00035e10) list_single_choice_list_pane_ParamLimits

0xe768,	// (0x00035e10) list_single_choice_list_pane

0xbbb6,	// (0x0003325e) list_single_choice_list_pane_g1

0xbbbe,	// (0x00033266) list_single_choice_list_pane_t1_ParamLimits

0xbbbe,	// (0x00033266) list_single_choice_list_pane_t1

0xe77b,	// (0x00035e23) choice_list_pane_g1

0xe783,	// (0x00035e2b) choice_list_pane_t1

0xb3fe,	// (0x00032aa6) input_focus_pane_cp11

0xbd48,	// (0x000333f0) title_pane_stacon_g2_ParamLimits

0xbd48,	// (0x000333f0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00036d77) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00036d77) title_pane_stacon_g

0xc458,	// (0x00033b00) cursor_press_pane

0x904b,	// (0x000306f3) popup_fep_hwr_window_ParamLimits

0x904b,	// (0x000306f3) popup_fep_hwr_window

0x3c57,	// (0x0002b2ff) popup_fep_vkb_window_ParamLimits

0x3c57,	// (0x0002b2ff) popup_fep_vkb_window

0xe791,	// (0x00035e39) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x000371dc) fep_vkb_side_pane_g_ParamLimits

0x45ca,	// (0x0002bc72) fep_hwr_candidate_pane_ParamLimits

0x45ca,	// (0x0002bc72) fep_hwr_candidate_pane

0x45f4,	// (0x0002bc9c) fep_hwr_side_pane_ParamLimits

0x45f4,	// (0x0002bc9c) fep_hwr_side_pane

0x4614,	// (0x0002bcbc) fep_hwr_top_pane_ParamLimits

0x4614,	// (0x0002bcbc) fep_hwr_top_pane

0x462c,	// (0x0002bcd4) fep_hwr_write_pane_ParamLimits

0x462c,	// (0x0002bcd4) fep_hwr_write_pane

0xfb34,	// (0x000371dc) fep_vkb_side_pane_g

0xe799,	// (0x00035e41) fep_hwr_top_pane_g1

0xe7ab,	// (0x00035e53) fep_hwr_top_pane_g2

0x4666,	// (0x0002bd0e) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x000371b8) fep_hwr_top_pane_g

0x467b,	// (0x0002bd23) fep_hwr_top_text_pane

0xbf9d,	// (0x00033645) fep_hwr_top_text_pane_g1

0xe7e1,	// (0x00035e89) fep_hwr_top_text_pane_t1

0x4771,	// (0x0002be19) fep_hwr_candidate_pane_g1

0xe9ee,	// (0x00036096) fep_vkb_keypad_pane_g3_ParamLimits

0xe9ee,	// (0x00036096) fep_vkb_keypad_pane_g3

0xea16,	// (0x000360be) fep_vkb_keypad_pane_g4_ParamLimits

0xea16,	// (0x000360be) fep_vkb_keypad_pane_g4

0xea85,	// (0x0003612d) fep_vkb_bottom_pane_g2_ParamLimits

0xea85,	// (0x0003612d) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x000371e3) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x000371e3) fep_vkb_bottom_pane_g

0xe747,	// (0x00035def) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x000371ed) cell_vkb_side_pane_g

0xeac9,	// (0x00036171) cell_vkb_side_pane_t1

0xead7,	// (0x0003617f) cell_vkb_side_pane_t1_copy1

0xe747,	// (0x00035def) bg_fep_vkb_candidate_pane_g2

0xebb3,	// (0x0003625b) cell_vkb_candidate_pane_ParamLimits

0xe7ef,	// (0x00035e97) aid_size_cell_vkb_ParamLimits

0xe7ef,	// (0x00035e97) aid_size_cell_vkb

0xebb3,	// (0x0003625b) cell_vkb_candidate_pane

0x4798,	// (0x0002be40) bg_popup_fep_shadow_pane_g1

0xe86b,	// (0x00035f13) fep_vkb_bottom_pane_ParamLimits

0xe86b,	// (0x00035f13) fep_vkb_bottom_pane

0xe8a8,	// (0x00035f50) fep_vkb_candidate_pane_ParamLimits

0xe8a8,	// (0x00035f50) fep_vkb_candidate_pane

0xe8c4,	// (0x00035f6c) fep_vkb_keypad_pane_ParamLimits

0xe8c4,	// (0x00035f6c) fep_vkb_keypad_pane

0xe90a,	// (0x00035fb2) fep_vkb_side_pane_ParamLimits

0xe90a,	// (0x00035fb2) fep_vkb_side_pane

0xe946,	// (0x00035fee) fep_vkb_top_pane_ParamLimits

0xe946,	// (0x00035fee) fep_vkb_top_pane

0xe982,	// (0x0003602a) fep_vkb_top_pane_g1_ParamLimits

0xe982,	// (0x0003602a) fep_vkb_top_pane_g1

0xe991,	// (0x00036039) fep_vkb_top_pane_g2_ParamLimits

0xe991,	// (0x00036039) fep_vkb_top_pane_g2

0xe9a0,	// (0x00036048) fep_vkb_top_pane_g3_ParamLimits

0xe9a0,	// (0x00036048) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x000371d3) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x000371d3) fep_vkb_top_pane_g

0xe9be,	// (0x00036066) fep_vkb_top_text_pane_ParamLimits

0xe9be,	// (0x00036066) fep_vkb_top_text_pane

0xa3ed,	// (0x00031a95) fep_vkb_side_pane_g1_ParamLimits

0xa3ed,	// (0x00031a95) fep_vkb_side_pane_g1

0xe9dd,	// (0x00036085) grid_vkb_side_pane_ParamLimits

0xe9dd,	// (0x00036085) grid_vkb_side_pane

0x47a0,	// (0x0002be48) bg_popup_fep_shadow_pane_g2

0x47a9,	// (0x0002be51) bg_popup_fep_shadow_pane_g3

0x47b1,	// (0x0002be59) bg_popup_fep_shadow_pane_g4

0x47ba,	// (0x0002be62) bg_popup_fep_shadow_pane_g5

0x47c4,	// (0x0002be6c) bg_popup_fep_shadow_pane_g6

0x47cc,	// (0x0002be74) bg_popup_fep_shadow_pane_g7

0xbae2,	// (0x0003318a) bg_popup_fep_shadow_pane_g8

0xea34,	// (0x000360dc) grid_vkb_keypad_number_pane_ParamLimits

0xea34,	// (0x000360dc) grid_vkb_keypad_number_pane

0xea44,	// (0x000360ec) grid_vkb_keypad_pane_ParamLimits

0xea44,	// (0x000360ec) grid_vkb_keypad_pane

0xea6a,	// (0x00036112) fep_vkb_bottom_pane_g1_ParamLimits

0xea6a,	// (0x00036112) fep_vkb_bottom_pane_g1

0xea93,	// (0x0003613b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xea93,	// (0x0003613b) grid_vkb_keypad_bottom_left_pane

0xeaa8,	// (0x00036150) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xeaa8,	// (0x00036150) grid_vkb_keypad_bottom_right_pane

0xeabd,	// (0x00036165) fep_vkb_top_text_pane_g1

0xa434,	// (0x00031adc) fep_vkb_top_text_pane_t1

0xa446,	// (0x00031aee) cell_vkb_side_pane_ParamLimits

0xa446,	// (0x00031aee) cell_vkb_side_pane

0xe747,	// (0x00035def) cell_vkb_side_pane_g1

0xeae5,	// (0x0003618d) cell_vkb_keypad_pane_ParamLimits

0xeae5,	// (0x0003618d) cell_vkb_keypad_pane

0xeb60,	// (0x00036208) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00037200) bg_popup_fep_shadow_pane_g

0x47de,	// (0x0002be86) cell_hwr_side_pane_g1

0x47de,	// (0x0002be86) cell_hwr_side_pane_g2

0xeb6a,	// (0x00036212) cell_vkb_keypad_pane_t1

0xa45c,	// (0x00031b04) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa45c,	// (0x00031b04) cell_vkb_keypad_bottom_left_pane

0xa471,	// (0x00031b19) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa471,	// (0x00031b19) cell_vkb_keypad_bottom_right_pane

0xe747,	// (0x00035def) cell_vkb_keypad_bottom_left_pane_g1

0xe747,	// (0x00035def) cell_vkb_keypad_bottom_right_pane_g1

0xeb78,	// (0x00036220) cell_vkb_keypad_number_pane_ParamLimits

0xeb78,	// (0x00036220) cell_vkb_keypad_number_pane

0xeb97,	// (0x0003623f) cell_vkb_keypad_number_pane_g1

0xeba1,	// (0x00036249) cell_vkb_keypad_number_pane_g2

0xebaa,	// (0x00036252) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x000371f2) cell_vkb_keypad_number_pane_g

0xeb6a,	// (0x00036212) cell_vkb_keypad_number_pane_t1

0xebd0,	// (0x00036278) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x00037213) cell_hwr_side_pane_g

0xebe9,	// (0x00036291) cell_hwr_side_pane_t1

0x47e8,	// (0x0002be90) cell_hwr_side_pane_t1_copy1

0x47f6,	// (0x0002be9e) cell_hwr_candidate_pane_g1

0x4825,	// (0x0002becd) cell_hwr_candidate_pane_t1

0xe747,	// (0x00035def) cell_vkb_candidate_pane_g2

0xec2d,	// (0x000362d5) cell_vkb_candidate_pane_t1

0x4591,	// (0x0002bc39) bg_popup_fep_shadow_pane_ParamLimits

0x4591,	// (0x0002bc39) bg_popup_fep_shadow_pane

0x4646,	// (0x0002bcee) bg_fep_hwr_top_pane_g4

0xe7bd,	// (0x00035e65) bg_hwr_side_pane_g1_ParamLimits

0xe7bd,	// (0x00035e65) bg_hwr_side_pane_g1

0xa3a6,	// (0x00031a4e) cell_hwr_side_pane_ParamLimits

0xa3a6,	// (0x00031a4e) cell_hwr_side_pane

0x46f2,	// (0x0002bd9a) fep_hwr_write_pane_g1_ParamLimits

0x46f2,	// (0x0002bd9a) fep_hwr_write_pane_g1

0x46ff,	// (0x0002bda7) fep_hwr_write_pane_g2_ParamLimits

0x46ff,	// (0x0002bda7) fep_hwr_write_pane_g2

0x470c,	// (0x0002bdb4) fep_hwr_write_pane_g3_ParamLimits

0x470c,	// (0x0002bdb4) fep_hwr_write_pane_g3

0xa3c6,	// (0x00031a6e) fep_hwr_write_pane_g4_ParamLimits

0xa3c6,	// (0x00031a6e) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x000371bf) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x000371bf) fep_hwr_write_pane_g

0x4646,	// (0x0002bcee) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4646,	// (0x0002bcee) bg_fep_hwr_candidate_pane_g2

0x472f,	// (0x0002bdd7) cell_hwr_candidate_pane_ParamLimits

0x472f,	// (0x0002bdd7) cell_hwr_candidate_pane

0x4771,	// (0x0002be19) fep_hwr_candidate_pane_g1_ParamLimits

0xe81d,	// (0x00035ec5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe81d,	// (0x00035ec5) bg_popup_fep_shadow_pane_cp2

0xe9b0,	// (0x00036058) fep_vkb_top_pane_g4_ParamLimits

0xe9b0,	// (0x00036058) fep_vkb_top_pane_g4

0xe9cf,	// (0x00036077) fep_vkb_side_pane_g2_ParamLimits

0xe9cf,	// (0x00036077) fep_vkb_side_pane_g2

0x0453,	// (0x00027afb) list_setting_pane_t4_ParamLimits

0x0453,	// (0x00027afb) list_setting_pane_t4

0x04ed,	// (0x00027b95) list_setting_number_pane_t5_ParamLimits

0x04ed,	// (0x00027b95) list_setting_number_pane_t5

0xbfe4,	// (0x0003368c) list_double_heading_pane_cp2_ParamLimits

0xbfe4,	// (0x0003368c) list_double_heading_pane_cp2

0xba7d,	// (0x00033125) list_double_heading_pane_g1_cp2_ParamLimits

0xba7d,	// (0x00033125) list_double_heading_pane_g1_cp2

0xba89,	// (0x00033131) list_double_heading_pane_g2_cp2_ParamLimits

0xba89,	// (0x00033131) list_double_heading_pane_g2_cp2

0xec3b,	// (0x000362e3) list_double_heading_pane_t1_cp2_ParamLimits

0xec3b,	// (0x000362e3) list_double_heading_pane_t1_cp2

0xec51,	// (0x000362f9) list_double_heading_pane_t2_cp2_ParamLimits

0xec51,	// (0x000362f9) list_double_heading_pane_t2_cp2

0xb3f6,	// (0x00032a9e) aid_value_unit2

0x338b,	// (0x0002aa33) popup_preview_fixed_window

0xb5a1,	// (0x00032c49) bg_popup_preview_window_pane_cp02

0xec63,	// (0x0003630b) list_preview_fixed_pane

0xeca9,	// (0x00036351) list_empty_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_empty_pane_fp

0xeca9,	// (0x00036351) list_single_cale_day_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_cale_day_pane_fp

0xeca9,	// (0x00036351) list_single_graphic_heading_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_graphic_heading_pane_fp

0xeca9,	// (0x00036351) list_single_graphic_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_graphic_pane_fp

0xeca9,	// (0x00036351) list_single_heading_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_heading_pane_fp

0xeca9,	// (0x00036351) list_single_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_pane_fp

0xecc0,	// (0x00036368) list_single_pane_fp_g1_ParamLimits

0xecc0,	// (0x00036368) list_single_pane_fp_g1

0x6a02,	// (0x0002e0aa) list_single_pane_fp_g2_ParamLimits

0x6a02,	// (0x0002e0aa) list_single_pane_fp_g2

0x780f,	// (0x0002eeb7) list_single_pane_fp_g3_ParamLimits

0x780f,	// (0x0002eeb7) list_single_pane_fp_g3

0xeccc,	// (0x00036374) list_single_pane_fp_g4_ParamLimits

0xeccc,	// (0x00036374) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x00037226) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x00037226) list_single_pane_fp_g

0x7823,	// (0x0002eecb) list_single_pane_fp_t1_ParamLimits

0x7823,	// (0x0002eecb) list_single_pane_fp_t1

0x783a,	// (0x0002eee2) list_single_graphic_pane_fp_g1_ParamLimits

0x783a,	// (0x0002eee2) list_single_graphic_pane_fp_g1

0xecc0,	// (0x00036368) list_single_graphic_pane_fp_g2_ParamLimits

0xecc0,	// (0x00036368) list_single_graphic_pane_fp_g2

0x6a02,	// (0x0002e0aa) list_single_graphic_pane_fp_g3_ParamLimits

0x6a02,	// (0x0002e0aa) list_single_graphic_pane_fp_g3

0x780f,	// (0x0002eeb7) list_single_graphic_pane_fp_g4_ParamLimits

0x780f,	// (0x0002eeb7) list_single_graphic_pane_fp_g4

0xeccc,	// (0x00036374) list_single_graphic_pane_fp_g5_ParamLimits

0xeccc,	// (0x00036374) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003722f) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003722f) list_single_graphic_pane_fp_g

0x7846,	// (0x0002eeee) list_single_graphic_pane_fp_t1_ParamLimits

0x7846,	// (0x0002eeee) list_single_graphic_pane_fp_t1

0x783a,	// (0x0002eee2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x783a,	// (0x0002eee2) list_single_graphic_heading_pane_fp_g1

0xecc0,	// (0x00036368) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xecc0,	// (0x00036368) list_single_graphic_heading_pane_fp_g2

0x6a02,	// (0x0002e0aa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6a02,	// (0x0002e0aa) list_single_graphic_heading_pane_fp_g3

0x780f,	// (0x0002eeb7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x780f,	// (0x0002eeb7) list_single_graphic_heading_pane_fp_g4

0xeccc,	// (0x00036374) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xeccc,	// (0x00036374) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003722f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003722f) list_single_graphic_heading_pane_fp_g

0x785c,	// (0x0002ef04) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x785c,	// (0x0002ef04) list_single_graphic_heading_pane_fp_t1

0x7872,	// (0x0002ef1a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7872,	// (0x0002ef1a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003723a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003723a) list_single_graphic_heading_pane_fp_t

0x7884,	// (0x0002ef2c) list_single_cale_day_pane_fp_g1_ParamLimits

0x7884,	// (0x0002ef2c) list_single_cale_day_pane_fp_g1

0xecd8,	// (0x00036380) list_single_cale_day_pane_fp_g2_ParamLimits

0xecd8,	// (0x00036380) list_single_cale_day_pane_fp_g2

0x78bc,	// (0x0002ef64) list_single_cale_day_pane_fp_g3_ParamLimits

0x78bc,	// (0x0002ef64) list_single_cale_day_pane_fp_g3

0x78e4,	// (0x0002ef8c) list_single_cale_day_pane_fp_g4_ParamLimits

0x78e4,	// (0x0002ef8c) list_single_cale_day_pane_fp_g4

0x7908,	// (0x0002efb0) list_single_cale_day_pane_fp_g5_ParamLimits

0x7908,	// (0x0002efb0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003723f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003723f) list_single_cale_day_pane_fp_g

0x792c,	// (0x0002efd4) list_single_cale_day_pane_fp_t1_ParamLimits

0x792c,	// (0x0002efd4) list_single_cale_day_pane_fp_t1

0x7952,	// (0x0002effa) list_single_cale_day_pane_fp_t2_ParamLimits

0x7952,	// (0x0002effa) list_single_cale_day_pane_fp_t2

0x796b,	// (0x0002f013) list_single_cale_day_pane_fp_t3_ParamLimits

0x796b,	// (0x0002f013) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003724a) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003724a) list_single_cale_day_pane_fp_t

0xecc0,	// (0x00036368) list_empty_pane_fp_g1_ParamLimits

0xecc0,	// (0x00036368) list_empty_pane_fp_g1

0x7984,	// (0x0002f02c) list_empty_pane_fp_t1

0x7992,	// (0x0002f03a) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x00037251) list_empty_pane_fp_t

0xecc0,	// (0x00036368) list_single_heading_pane_fp_g1_ParamLimits

0xecc0,	// (0x00036368) list_single_heading_pane_fp_g1

0x6a02,	// (0x0002e0aa) list_single_heading_pane_fp_g2_ParamLimits

0x6a02,	// (0x0002e0aa) list_single_heading_pane_fp_g2

0x780f,	// (0x0002eeb7) list_single_heading_pane_fp_g3_ParamLimits

0x780f,	// (0x0002eeb7) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x00037256) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x00037256) list_single_heading_pane_fp_g

0x79a0,	// (0x0002f048) list_single_heading_pane_fp_t1_ParamLimits

0x79a0,	// (0x0002f048) list_single_heading_pane_fp_t1

0x79b2,	// (0x0002f05a) list_single_heading_pane_fp_t2_ParamLimits

0x79b2,	// (0x0002f05a) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003725d) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003725d) list_single_heading_pane_fp_t

0xbbdf,	// (0x00033287) aid_size_cell_fast

0xb584,	// (0x00032c2c) soft_indicator_pane_cp1_t1

0xbc1c,	// (0x000332c4) cell_app_pane_cp2_ParamLimits

0xbc1c,	// (0x000332c4) cell_app_pane_cp2

0x45b3,	// (0x0002bc5b) fep_hwr_candidate_drop_down_list_pane

0x478b,	// (0x0002be33) fep_hwr_candidate_pane_g3_ParamLimits

0x478b,	// (0x0002be33) fep_hwr_candidate_pane_g3

0x20cc,	// (0x00029774) fep_hwr_candidate_pane_g4_ParamLimits

0x20cc,	// (0x00029774) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x000371cc) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x000371cc) fep_hwr_candidate_pane_g

0xe897,	// (0x00035f3f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe897,	// (0x00035f3f) fep_vkb_candidate_drop_down_list_pane

0xebd8,	// (0x00036280) fep_vkb_candidate_pane_g3

0xebe0,	// (0x00036288) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x000371f9) fep_vkb_candidate_pane_g

0x47f6,	// (0x0002be9e) cell_hwr_candidate_pane_g1_ParamLimits

0x4804,	// (0x0002beac) cell_hwr_candidate_pane_g3_ParamLimits

0x4804,	// (0x0002beac) cell_hwr_candidate_pane_g3

0x25dd,	// (0x00029c85) cell_hwr_candidate_pane_g4_ParamLimits

0x25dd,	// (0x00029c85) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x00037218) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x00037218) cell_hwr_candidate_pane_g

0xebf7,	// (0x0003629f) cell_vkb_candidate_pane_g3_ParamLimits

0xebf7,	// (0x0003629f) cell_vkb_candidate_pane_g3

0xec12,	// (0x000362ba) cell_vkb_candidate_pane_g4_ParamLimits

0xec12,	// (0x000362ba) cell_vkb_candidate_pane_g4

0xece4,	// (0x0003638c) cell_app_pane_cp2_g1_ParamLimits

0xece4,	// (0x0003638c) cell_app_pane_cp2_g1

0xed02,	// (0x000363aa) cell_app_pane_cp2_g2_ParamLimits

0xed02,	// (0x000363aa) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x00037262) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x00037262) cell_app_pane_cp2_g

0xed0e,	// (0x000363b6) cell_app_pane_cp2_t1_ParamLimits

0xed0e,	// (0x000363b6) cell_app_pane_cp2_t1

0xba63,	// (0x0003310b) grid_highlight_pane_cp1_ParamLimits

0xba63,	// (0x0003310b) grid_highlight_pane_cp1

0x4843,	// (0x0002beeb) cell_hwr_candidate_pane_cp1_ParamLimits

0x4843,	// (0x0002beeb) cell_hwr_candidate_pane_cp1

0x47f6,	// (0x0002be9e) fep_hwr_candidate_drop_down_list_pane_g1

0x4862,	// (0x0002bf0a) fep_hwr_candidate_drop_down_list_pane_g2

0x486f,	// (0x0002bf17) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00037267) fep_hwr_candidate_drop_down_list_pane_g

0x487c,	// (0x0002bf24) fep_hwr_candidate_drop_down_list_scroll_pane

0x4885,	// (0x0002bf2d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4885,	// (0x0002bf2d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4892,	// (0x0002bf3a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4892,	// (0x0002bf3a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x489f,	// (0x0002bf47) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x489f,	// (0x0002bf47) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x48ac,	// (0x0002bf54) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x48ac,	// (0x0002bf54) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x48c7,	// (0x0002bf6f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x48c7,	// (0x0002bf6f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x48e2,	// (0x0002bf8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x48e2,	// (0x0002bf8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x48fd,	// (0x0002bfa5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x48fd,	// (0x0002bfa5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4918,	// (0x0002bfc0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4918,	// (0x0002bfc0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003726e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003726e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed20,	// (0x000363c8) cell_vkb_candidate_pane_cp1_ParamLimits

0xed20,	// (0x000363c8) cell_vkb_candidate_pane_cp1

0xe9b0,	// (0x00036058) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9b0,	// (0x00036058) fep_vkb_candidate_drop_down_list_pane_g1

0xed40,	// (0x000363e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed40,	// (0x000363e8) fep_vkb_candidate_drop_down_list_pane_g2

0xed4d,	// (0x000363f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xed4d,	// (0x000363f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003727f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003727f) fep_vkb_candidate_drop_down_list_pane_g

0xed5a,	// (0x00036402) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xed5a,	// (0x00036402) fep_vkb_candidate_drop_down_list_scroll_pane

0xed67,	// (0x0003640f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xed67,	// (0x0003640f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xed74,	// (0x0003641c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xed74,	// (0x0003641c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xed80,	// (0x00036428) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xed80,	// (0x00036428) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xed8c,	// (0x00036434) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xed8c,	// (0x00036434) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xedad,	// (0x00036455) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xedad,	// (0x00036455) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xedce,	// (0x00036476) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xedce,	// (0x00036476) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xedef,	// (0x00036497) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xedef,	// (0x00036497) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee10,	// (0x000364b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee10,	// (0x000364b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x00037286) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x00037286) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8723,	// (0x0002fdcb) title_pane_g1_ParamLimits

0x8736,	// (0x0002fdde) title_pane_g2_ParamLimits

0xf554,	// (0x00036bfc) title_pane_g_ParamLimits

0xbf8d,	// (0x00033635) aid_call2_pane

0xbf95,	// (0x0003363d) aid_call_pane

0xbf9d,	// (0x00033645) popup_clock_analogue_window_g1

0xbf9d,	// (0x00033645) popup_clock_analogue_window_g2

0x36ea,	// (0x0002ad92) popup_clock_analogue_window_g3

0x36f3,	// (0x0002ad9b) popup_clock_analogue_window_g4

0xb408,	// (0x00032ab0) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00036da6) popup_clock_analogue_window_g

0x36fb,	// (0x0002ada3) popup_clock_analogue_window_t1

0x3709,	// (0x0002adb1) clock_digital_number_pane_ParamLimits

0x3709,	// (0x0002adb1) clock_digital_number_pane

0x3715,	// (0x0002adbd) clock_digital_number_pane_cp02_ParamLimits

0x3715,	// (0x0002adbd) clock_digital_number_pane_cp02

0x3721,	// (0x0002adc9) clock_digital_number_pane_cp03_ParamLimits

0x3721,	// (0x0002adc9) clock_digital_number_pane_cp03

0x372d,	// (0x0002add5) clock_digital_number_pane_cp04_ParamLimits

0x372d,	// (0x0002add5) clock_digital_number_pane_cp04

0x3739,	// (0x0002ade1) clock_digital_separator_pane_ParamLimits

0x3739,	// (0x0002ade1) clock_digital_separator_pane

0x3745,	// (0x0002aded) popup_clock_digital_window_t1_ParamLimits

0x3745,	// (0x0002aded) popup_clock_digital_window_t1

0xb408,	// (0x00032ab0) clock_digital_number_pane_g1

0xb408,	// (0x00032ab0) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00036db1) clock_digital_number_pane_g

0xb408,	// (0x00032ab0) clock_digital_separator_pane_g1

0xb408,	// (0x00032ab0) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00036db1) clock_digital_separator_pane_g

0x9630,	// (0x00030cd8) aid_fill_nsta_ParamLimits

0x9766,	// (0x00030e0e) indicator_nsta_pane_ParamLimits

0xc77d,	// (0x00033e25) popup_clock_analogue_window

0xc77d,	// (0x00033e25) popup_clock_digital_window

0xc7c8,	// (0x00033e70) grid_indicator_nsta_pane_ParamLimits

0xe38e,	// (0x00035a36) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003714c) clock_nsta_pane_t

0x36ae,	// (0x0002ad56) aid_size_max_handle

0x8c15,	// (0x000302bd) aid_size_min_handle

0xc458,	// (0x00033b00) editor_scroll_pane

0xee2b,	// (0x000364d3) ex_editor_pane

0xbb9b,	// (0x00033243) scroll_pane_cp13

0xba02,	// (0x000330aa) scroll_pane_cp14

0xbfcc,	// (0x00033674) scroll_pane_cp36

0xbff6,	// (0x0003369e) list_single_graphic_hl_pane_cp2_ParamLimits

0xbff6,	// (0x0003369e) list_single_graphic_hl_pane_cp2

0xa077,	// (0x0003171f) list_single_graphic_hl_pane_ParamLimits

0xa077,	// (0x0003171f) list_single_graphic_hl_pane

0x79c8,	// (0x0002f070) aid_size_min_hl_cp1

0xee33,	// (0x000364db) list_highlight_pane_cp34_ParamLimits

0xee33,	// (0x000364db) list_highlight_pane_cp34

0xee44,	// (0x000364ec) list_single_graphic_hl_pane_g1_ParamLimits

0xee44,	// (0x000364ec) list_single_graphic_hl_pane_g1

0x06f6,	// (0x00027d9e) list_single_graphic_hl_pane_g2_ParamLimits

0x06f6,	// (0x00027d9e) list_single_graphic_hl_pane_g2

0x06f6,	// (0x00027d9e) list_single_graphic_hl_pane_g3_ParamLimits

0x06f6,	// (0x00027d9e) list_single_graphic_hl_pane_g3

0x79dd,	// (0x0002f085) list_single_graphic_hl_pane_g4_ParamLimits

0x79dd,	// (0x0002f085) list_single_graphic_hl_pane_g4

0x79e9,	// (0x0002f091) list_single_graphic_hl_pane_g5_ParamLimits

0x79e9,	// (0x0002f091) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x00037297) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x00037297) list_single_graphic_hl_pane_g

0x79fd,	// (0x0002f0a5) list_single_graphic_hl_pane_t1_ParamLimits

0x79fd,	// (0x0002f0a5) list_single_graphic_hl_pane_t1

0xee51,	// (0x000364f9) aid_size_min_hl_cp2

0xee5a,	// (0x00036502) list_highlight_pane_cp34_cp2_ParamLimits

0xee5a,	// (0x00036502) list_highlight_pane_cp34_cp2

0xee44,	// (0x000364ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee44,	// (0x000364ec) list_single_graphic_hl_pane_g1_cp2

0xee67,	// (0x0003650f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee67,	// (0x0003650f) list_single_graphic_hl_pane_g2_cp2

0xa48c,	// (0x00031b34) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xa48c,	// (0x00031b34) list_single_graphic_hl_pane_g3_cp2

0xc39d,	// (0x00033a45) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc39d,	// (0x00033a45) list_single_graphic_hl_pane_g4_cp2

0xee73,	// (0x0003651b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xee73,	// (0x0003651b) list_single_graphic_hl_pane_g5_cp2

0x8e56,	// (0x000304fe) control_pane_g4_ParamLimits

0x8e56,	// (0x000304fe) control_pane_g4

0xbbd3,	// (0x0003327b) bg_popup_sub_pane_cp10_ParamLimits

0xe751,	// (0x00035df9) list_choice_list_pane_ParamLimits

0xe760,	// (0x00035e08) scroll_pane_cp23

0xb5a1,	// (0x00032c49) bg_popup_preview_window_pane_cp02_ParamLimits

0xec63,	// (0x0003630b) list_preview_fixed_pane_ParamLimits

0xec79,	// (0x00036321) list_preview_fixed_pane_cp_ParamLimits

0xec79,	// (0x00036321) list_preview_fixed_pane_cp

0xec85,	// (0x0003632d) popup_preview_fixed_window_g1_ParamLimits

0xec85,	// (0x0003632d) popup_preview_fixed_window_g1

0xec91,	// (0x00036339) popup_preview_fixed_window_g2_ParamLimits

0xec91,	// (0x00036339) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003721f) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003721f) popup_preview_fixed_window_g

0x3622,	// (0x0002acca) aid_navi_side_left_pane_ParamLimits

0x3637,	// (0x0002acdf) aid_navi_side_right_pane_ParamLimits

0x364f,	// (0x0002acf7) navi_icon_pane_stacon_ParamLimits

0x3663,	// (0x0002ad0b) navi_navi_pane_stacon_ParamLimits

0x364f,	// (0x0002acf7) navi_text_pane_stacon_ParamLimits

0x325a,	// (0x0002a902) main_text_info_pane

0xee9d,	// (0x00036545) listscroll_text_info_pane

0xeea5,	// (0x0003654d) list_text_info_pane_ParamLimits

0xeea5,	// (0x0003654d) list_text_info_pane

0xeeb4,	// (0x0003655c) scroll_pane_cp24_ParamLimits

0xeeb4,	// (0x0003655c) scroll_pane_cp24

0xa49a,	// (0x00031b42) list_text_info_pane_t1_ParamLimits

0xa49a,	// (0x00031b42) list_text_info_pane_t1

0x8fc0,	// (0x00030668) popup_fast_swap2_window_ParamLimits

0x8fc0,	// (0x00030668) popup_fast_swap2_window

0xeed2,	// (0x0003657a) aid_size_cell_fast2

0xb3fe,	// (0x00032aa6) bg_popup_window_pane_cp17

0xcc63,	// (0x0003430b) heading_pane_cp2

0xb787,	// (0x00032e2f) listscroll_fast2_pane

0xeedc,	// (0x00036584) grid_fast2_pane

0xeee6,	// (0x0003658e) listscroll_fast2_pane_g1

0xeeee,	// (0x00036596) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x000372a2) listscroll_fast2_pane_g

0xbb9b,	// (0x00033243) scroll_pane_cp26

0xeef8,	// (0x000365a0) cell_fast2_pane_ParamLimits

0xeef8,	// (0x000365a0) cell_fast2_pane

0xef0d,	// (0x000365b5) cell_fast2_pane_g1

0xef16,	// (0x000365be) cell_fast2_pane_g2

0xef1f,	// (0x000365c7) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x000372a7) cell_fast2_pane_g

0xb7c9,	// (0x00032e71) grid_highlight_pane_cp9

0x3b1d,	// (0x0002b1c5) main_eswt_pane_ParamLimits

0x3b1d,	// (0x0002b1c5) main_eswt_pane

0xeec9,	// (0x00036571) list_single_text_info_pane

0xef27,	// (0x000365cf) eswt_ctrl_button_pane

0xef27,	// (0x000365cf) eswt_ctrl_canvas_pane

0xef2f,	// (0x000365d7) eswt_ctrl_combo_pane

0xef27,	// (0x000365cf) eswt_ctrl_default_pane

0xef27,	// (0x000365cf) eswt_ctrl_label_pane

0xef37,	// (0x000365df) eswt_ctrl_wait_pane

0xef3f,	// (0x000365e7) eswt_shell_pane

0xb3fe,	// (0x00032aa6) listscroll_eswt_app_pane

0xef5f,	// (0x00036607) popup_eswt_tasktip_window_ParamLimits

0xef5f,	// (0x00036607) popup_eswt_tasktip_window

0xc994,	// (0x0003403c) bg_popup_window_pane_cp18

0xef70,	// (0x00036618) eswt_control_pane_g1_ParamLimits

0xef70,	// (0x00036618) eswt_control_pane_g1

0xef7d,	// (0x00036625) eswt_control_pane_g2_ParamLimits

0xef7d,	// (0x00036625) eswt_control_pane_g2

0xef8a,	// (0x00036632) eswt_control_pane_g3_ParamLimits

0xef8a,	// (0x00036632) eswt_control_pane_g3

0xef97,	// (0x0003663f) eswt_control_pane_g4_ParamLimits

0xef97,	// (0x0003663f) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x000372ae) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x000372ae) eswt_control_pane_g

0xba63,	// (0x0003310b) bg_button_pane_ParamLimits

0xba63,	// (0x0003310b) bg_button_pane

0xb7de,	// (0x00032e86) common_borders_pane_copy2_ParamLimits

0xb7de,	// (0x00032e86) common_borders_pane_copy2

0xefa4,	// (0x0003664c) control_button_pane_g1_ParamLimits

0xefa4,	// (0x0003664c) control_button_pane_g1

0xefb0,	// (0x00036658) control_button_pane_g2_ParamLimits

0xefb0,	// (0x00036658) control_button_pane_g2

0xefbc,	// (0x00036664) control_button_pane_g3_ParamLimits

0xefbc,	// (0x00036664) control_button_pane_g3

0x0002,

0xfc0f,	// (0x000372b7) control_button_pane_g_ParamLimits

0xfc0f,	// (0x000372b7) control_button_pane_g

0xefd0,	// (0x00036678) control_button_pane_t1

0xefde,	// (0x00036686) control_button_pane_t2

0x0001,

0xfc16,	// (0x000372be) control_button_pane_t

0xc8a4,	// (0x00033f4c) bg_button_pane_g1

0xc8b4,	// (0x00033f5c) bg_button_pane_g2

0xc8ac,	// (0x00033f54) bg_button_pane_g3

0xc8c4,	// (0x00033f6c) bg_button_pane_g4

0xc8bc,	// (0x00033f64) bg_button_pane_g5

0xc8cc,	// (0x00033f74) bg_button_pane_g6

0xc8d4,	// (0x00033f7c) bg_button_pane_g7

0xc8e4,	// (0x00033f8c) bg_button_pane_g8

0xc8dc,	// (0x00033f84) bg_button_pane_g9

0x0008,

0xf867,	// (0x00036f0f) bg_button_pane_g

0xe70c,	// (0x00035db4) common_borders_pane_ParamLimits

0xe70c,	// (0x00035db4) common_borders_pane

0xef70,	// (0x00036618) eswt_control_pane_g1_copy1_ParamLimits

0xef70,	// (0x00036618) eswt_control_pane_g1_copy1

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy1_ParamLimits

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy1

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy1_ParamLimits

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy1

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy1_ParamLimits

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy1

0xe747,	// (0x00035def) bg_eswt_ctrl_canvas_pane_g1

0xe70c,	// (0x00035db4) common_borders_pane_cp2_ParamLimits

0xe70c,	// (0x00035db4) common_borders_pane_cp2

0xe70c,	// (0x00035db4) common_borders_pane_cp3_ParamLimits

0xe70c,	// (0x00035db4) common_borders_pane_cp3

0xefec,	// (0x00036694) separator_horizontal_pane

0xeff4,	// (0x0003669c) separator_vertical_pane

0xef70,	// (0x00036618) eswt_control_pane_g1_copy2_ParamLimits

0xef70,	// (0x00036618) eswt_control_pane_g1_copy2

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy2_ParamLimits

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy2

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy2_ParamLimits

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy2

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy2_ParamLimits

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy2

0xb3fe,	// (0x00032aa6) common_borders_pane_cp4

0xeffd,	// (0x000366a5) separator_horizontal_pane_g1

0xf006,	// (0x000366ae) separator_horizontal_pane_g2

0xf00f,	// (0x000366b7) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x000372c3) separator_horizontal_pane_g

0xef70,	// (0x00036618) eswt_control_pane_g1_copy3_ParamLimits

0xef70,	// (0x00036618) eswt_control_pane_g1_copy3

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy3_ParamLimits

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy3

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy3_ParamLimits

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy3

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy3_ParamLimits

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy3

0xb3fe,	// (0x00032aa6) common_borders_pane_cp5

0xf018,	// (0x000366c0) separator_vertical_pane_g1

0xf021,	// (0x000366c9) separator_vertical_pane_g2

0xf02a,	// (0x000366d2) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x000372ca) separator_vertical_pane_g

0xef70,	// (0x00036618) eswt_control_pane_g1_copy4_ParamLimits

0xef70,	// (0x00036618) eswt_control_pane_g1_copy4

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy4_ParamLimits

0xef7d,	// (0x00036625) eswt_control_pane_g2_copy4

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy4_ParamLimits

0xef8a,	// (0x00036632) eswt_control_pane_g3_copy4

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy4_ParamLimits

0xef97,	// (0x0003663f) eswt_control_pane_g4_copy4

0xa4b8,	// (0x00031b60) eswt_ctrl_combo_button_pane

0xa4c0,	// (0x00031b68) eswt_ctrl_input_pane

0xa4c8,	// (0x00031b70) popup_choice_list_window_cp70

0xa4d0,	// (0x00031b78) eswt_ctrl_input_pane_t1

0xb3fe,	// (0x00032aa6) input_focus_pane_cp70

0xe70c,	// (0x00035db4) bg_button_pane_cp70_ParamLimits

0xe70c,	// (0x00035db4) bg_button_pane_cp70

0xa4de,	// (0x00031b86) eswt_ctrl_combo_button_pane_g1

0xf033,	// (0x000366db) wait_bar_pane_cp70

0xc994,	// (0x0003403c) bg_popup_window_pane_cp70_ParamLimits

0xc994,	// (0x0003403c) bg_popup_window_pane_cp70

0xf03b,	// (0x000366e3) popup_eswt_tasktip_window_t1

0xf051,	// (0x000366f9) wait_bar_pane_cp71_ParamLimits

0xf051,	// (0x000366f9) wait_bar_pane_cp71

0xf05d,	// (0x00036705) grid_eswt_app_pane

0xbdd3,	// (0x0003347b) scroll_pane_cp70

0xa4e6,	// (0x00031b8e) cell_eswt_app_pane_ParamLimits

0xa4e6,	// (0x00031b8e) cell_eswt_app_pane

0xa510,	// (0x00031bb8) cell_eswt_app_pane_g1_ParamLimits

0xa510,	// (0x00031bb8) cell_eswt_app_pane_g1

0xa53f,	// (0x00031be7) cell_eswt_app_pane_g2_ParamLimits

0xa53f,	// (0x00031be7) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x000372d1) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x000372d1) cell_eswt_app_pane_g

0xa568,	// (0x00031c10) cell_eswt_app_pane_t1_ParamLimits

0xa568,	// (0x00031c10) cell_eswt_app_pane_t1

0xf066,	// (0x0003670e) grid_highlight_pane_cp70_ParamLimits

0xf066,	// (0x0003670e) grid_highlight_pane_cp70

0xc351,	// (0x000339f9) set_content_pane_g1

0xc641,	// (0x00033ce9) status_small_volume_pane

0x4933,	// (0x0002bfdb) status_small_volume_pane_g1

0x493b,	// (0x0002bfe3) volume_small2_pane

0x4944,	// (0x0002bfec) volume_small2_pane_g1

0x494d,	// (0x0002bff5) volume_small2_pane_g2

0x4956,	// (0x0002bffe) volume_small2_pane_g3

0x495f,	// (0x0002c007) volume_small2_pane_g4

0x4968,	// (0x0002c010) volume_small2_pane_g5

0x4971,	// (0x0002c019) volume_small2_pane_g6

0x497a,	// (0x0002c022) volume_small2_pane_g7

0x4983,	// (0x0002c02b) volume_small2_pane_g8

0x498c,	// (0x0002c034) volume_small2_pane_g9

0x4995,	// (0x0002c03d) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x000372d6) volume_small2_pane_g

0xeabd,	// (0x00036165) fep_vkb_top_text_pane_g1_ParamLimits

0xa434,	// (0x00031adc) fep_vkb_top_text_pane_t1_ParamLimits

0xec9d,	// (0x00036345) popup_preview_fixed_window_g3_ParamLimits

0xec9d,	// (0x00036345) popup_preview_fixed_window_g3

0x95c3,	// (0x00030c6b) popup_toolbar_trans_pane

0x9ed4,	// (0x0003157c) aid_height_set_list_ParamLimits

0xd893,	// (0x00034f3b) aid_size_parent_ParamLimits

0xbbd3,	// (0x0003327b) list_highlight_pane_cp2_ParamLimits

0xc351,	// (0x000339f9) set_content_pane_g1_ParamLimits

0xa08a,	// (0x00031732) list_single_image_pane_ParamLimits

0xa08a,	// (0x00031732) list_single_image_pane

0xa59a,	// (0x00031c42) aid_size_cell_image_ParamLimits

0xa59a,	// (0x00031c42) aid_size_cell_image

0xa5a7,	// (0x00031c4f) grid_single_image_pane_ParamLimits

0xa5a7,	// (0x00031c4f) grid_single_image_pane

0xba7d,	// (0x00033125) list_single_image_pane_g1_ParamLimits

0xba7d,	// (0x00033125) list_single_image_pane_g1

0xba89,	// (0x00033131) list_single_image_pane_g2_ParamLimits

0xba89,	// (0x00033131) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x000372eb) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x000372eb) list_single_image_pane_g

0xf072,	// (0x0003671a) list_single_image_pane_t1_ParamLimits

0xf072,	// (0x0003671a) list_single_image_pane_t1

0xa5b3,	// (0x00031c5b) cell_image_list_pane_ParamLimits

0xa5b3,	// (0x00031c5b) cell_image_list_pane

0xa5c7,	// (0x00031c6f) cell_image_list_pane_g1

0xa5d0,	// (0x00031c78) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x000372f0) cell_image_list_pane_g

0xf088,	// (0x00036730) aid_size_cell_tb_trans_pane

0xba63,	// (0x0003310b) bg_tb_trans_pane

0xf09a,	// (0x00036742) grid_tb_trans_pane

0xc8a4,	// (0x00033f4c) bg_tb_trans_pane_g1

0xc8b4,	// (0x00033f5c) bg_tb_trans_pane_g2

0xc8ac,	// (0x00033f54) bg_tb_trans_pane_g3

0xc8c4,	// (0x00033f6c) bg_tb_trans_pane_g4

0xc8bc,	// (0x00033f64) bg_tb_trans_pane_g5

0xc8e4,	// (0x00033f8c) bg_tb_trans_pane_g6

0xc8dc,	// (0x00033f84) bg_tb_trans_pane_g7

0xc8cc,	// (0x00033f74) bg_tb_trans_pane_g8

0xc8d4,	// (0x00033f7c) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x000372f5) bg_tb_trans_pane_g

0xf0ae,	// (0x00036756) cell_toolbar_trans_pane_ParamLimits

0xf0ae,	// (0x00036756) cell_toolbar_trans_pane

0xe747,	// (0x00035def) cell_toolbar_trans_pane_g1

0xa28c,	// (0x00031934) list_form2_midp_pane_t1

0xa29a,	// (0x00031942) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00037192) list_form2_midp_pane_t

0xe463,	// (0x00035b0b) scroll_pane_cp51_ParamLimits

0xe61b,	// (0x00035cc3) form2_midp_wait_pane_g1

0xe624,	// (0x00035ccc) form2_midp_wait_pane_g2

0xe62d,	// (0x00035cd5) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x000371a7) form2_midp_wait_pane_g

0xb46e,	// (0x00032b16) list_highlight_pane_cp21_ParamLimits

0xe64d,	// (0x00035cf5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe65c,	// (0x00035d04) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xda6c,	// (0x00035114) list_single_2graphic_im_pane_ParamLimits

0xda6c,	// (0x00035114) list_single_2graphic_im_pane

0xa5d9,	// (0x00031c81) list_single_2graphic_im_pane_g1_ParamLimits

0xa5d9,	// (0x00031c81) list_single_2graphic_im_pane_g1

0xa5ea,	// (0x00031c92) list_single_2graphic_im_pane_g2_ParamLimits

0xa5ea,	// (0x00031c92) list_single_2graphic_im_pane_g2

0xa5f6,	// (0x00031c9e) list_single_2graphic_im_pane_g3_ParamLimits

0xa5f6,	// (0x00031c9e) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x00037308) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x00037308) list_single_2graphic_im_pane_g

0xa60a,	// (0x00031cb2) list_single_2graphic_im_pane_t1_ParamLimits

0xa60a,	// (0x00031cb2) list_single_2graphic_im_pane_t1

0xeca9,	// (0x00036351) list_single_graphic_2heading_pane_fp_ParamLimits

0xeca9,	// (0x00036351) list_single_graphic_2heading_pane_fp

0x783a,	// (0x0002eee2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x783a,	// (0x0002eee2) list_single_graphic_2heading_pane_fp_g1

0xecc0,	// (0x00036368) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xecc0,	// (0x00036368) list_single_graphic_2heading_pane_fp_g2

0x6a02,	// (0x0002e0aa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6a02,	// (0x0002e0aa) list_single_graphic_2heading_pane_fp_g3

0x780f,	// (0x0002eeb7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x780f,	// (0x0002eeb7) list_single_graphic_2heading_pane_fp_g4

0xeccc,	// (0x00036374) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xeccc,	// (0x00036374) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003722f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003722f) list_single_graphic_2heading_pane_fp_g

0x7a13,	// (0x0002f0bb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7a13,	// (0x0002f0bb) list_single_graphic_2heading_pane_fp_t1

0x7872,	// (0x0002ef1a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7872,	// (0x0002ef1a) list_single_graphic_2heading_pane_fp_t2

0x7a29,	// (0x0002f0d1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7a29,	// (0x0002f0d1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x00037311) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x00037311) list_single_graphic_2heading_pane_fp_t

0xe7c9,	// (0x00035e71) fep_hwr_write_pane_g5_ParamLimits

0xe7c9,	// (0x00035e71) fep_hwr_write_pane_g5

0xe7d5,	// (0x00035e7d) fep_hwr_write_pane_g6_ParamLimits

0xe7d5,	// (0x00035e7d) fep_hwr_write_pane_g6

0xef3f,	// (0x000365e7) eswt_shell_pane_ParamLimits

0xc994,	// (0x0003403c) bg_popup_window_pane_cp18_ParamLimits

0xd99d,	// (0x00035045) heading_pane_cp70

0xf03b,	// (0x000366e3) popup_eswt_tasktip_window_t1_ParamLimits

0x968b,	// (0x00030d33) aid_touch_tab_arrow_left

0x96a1,	// (0x00030d49) aid_touch_tab_arrow_right

0x874e,	// (0x0002fdf6) title_pane_g3_ParamLimits

0x874e,	// (0x0002fdf6) title_pane_g3

0xba22,	// (0x000330ca) set_value_pane_g1

0x95c3,	// (0x00030c6b) popup_toolbar_trans_pane_ParamLimits

0xf088,	// (0x00036730) aid_size_cell_tb_trans_pane_ParamLimits

0xba63,	// (0x0003310b) bg_tb_trans_pane_ParamLimits

0xf09a,	// (0x00036742) grid_tb_trans_pane_ParamLimits

0xb5a1,	// (0x00032c49) cont_note_pane_ParamLimits

0xb5a1,	// (0x00032c49) cont_note_pane

0xb7de,	// (0x00032e86) cont_snote2_single_text_pane_ParamLimits

0xb7de,	// (0x00032e86) cont_snote2_single_text_pane

0xb7de,	// (0x00032e86) cont_snote2_single_graphic_pane_ParamLimits

0xb7de,	// (0x00032e86) cont_snote2_single_graphic_pane

0xce79,	// (0x00034521) cont_note_wait_pane_ParamLimits

0xce79,	// (0x00034521) cont_note_wait_pane

0xce79,	// (0x00034521) cont_note_image_pane_ParamLimits

0xce79,	// (0x00034521) cont_note_image_pane

0xf0e0,	// (0x00036788) popup_note2_window_g1_ParamLimits

0xf0e0,	// (0x00036788) popup_note2_window_g1

0xf111,	// (0x000367b9) popup_note2_window_t1_ParamLimits

0xf111,	// (0x000367b9) popup_note2_window_t1

0xf156,	// (0x000367fe) popup_note2_window_t2_ParamLimits

0xf156,	// (0x000367fe) popup_note2_window_t2

0xf19b,	// (0x00036843) popup_note2_window_t3_ParamLimits

0xf19b,	// (0x00036843) popup_note2_window_t3

0xf1e0,	// (0x00036888) popup_note2_window_t4_ParamLimits

0xf1e0,	// (0x00036888) popup_note2_window_t4

0xb619,	// (0x00032cc1) popup_note2_window_t5_ParamLimits

0xb619,	// (0x00032cc1) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003731d) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003731d) popup_note2_window_t

0xf20f,	// (0x000368b7) popup_note2_image_window_g1_ParamLimits

0xf20f,	// (0x000368b7) popup_note2_image_window_g1

0xf21b,	// (0x000368c3) popup_note2_image_window_g2_ParamLimits

0xf21b,	// (0x000368c3) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x00037328) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x00037328) popup_note2_image_window_g

0xf22d,	// (0x000368d5) popup_note2_image_window_t1_ParamLimits

0xf22d,	// (0x000368d5) popup_note2_image_window_t1

0xf245,	// (0x000368ed) popup_note2_image_window_t2_ParamLimits

0xf245,	// (0x000368ed) popup_note2_image_window_t2

0xf25d,	// (0x00036905) popup_note2_image_window_t3_ParamLimits

0xf25d,	// (0x00036905) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003732d) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003732d) popup_note2_image_window_t

0xce87,	// (0x0003452f) popup_note2_wait_window_g1_ParamLimits

0xce87,	// (0x0003452f) popup_note2_wait_window_g1

0xce93,	// (0x0003453b) popup_note2_wait_window_g2_ParamLimits

0xce93,	// (0x0003453b) popup_note2_wait_window_g2

0xce9f,	// (0x00034547) popup_note2_wait_window_g3_ParamLimits

0xce9f,	// (0x00034547) popup_note2_wait_window_g3

0x0002,

0xf849,	// (0x00036ef1) popup_note2_wait_window_g_ParamLimits

0xf849,	// (0x00036ef1) popup_note2_wait_window_g

0xf279,	// (0x00036921) popup_note2_wait_window_t1_ParamLimits

0xf279,	// (0x00036921) popup_note2_wait_window_t1

0xf297,	// (0x0003693f) popup_note2_wait_window_t2_ParamLimits

0xf297,	// (0x0003693f) popup_note2_wait_window_t2

0xf2b5,	// (0x0003695d) popup_note2_wait_window_t3_ParamLimits

0xf2b5,	// (0x0003695d) popup_note2_wait_window_t3

0xf2c7,	// (0x0003696f) popup_note2_wait_window_t4_ParamLimits

0xf2c7,	// (0x0003696f) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x00037334) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x00037334) popup_note2_wait_window_t

0xf2d9,	// (0x00036981) wait_bar2_pane_ParamLimits

0xf2d9,	// (0x00036981) wait_bar2_pane

0xf2f1,	// (0x00036999) popup_snote2_single_text_window_g1_ParamLimits

0xf2f1,	// (0x00036999) popup_snote2_single_text_window_g1

0xf319,	// (0x000369c1) popup_snote2_single_text_window_t1_ParamLimits

0xf319,	// (0x000369c1) popup_snote2_single_text_window_t1

0xf365,	// (0x00036a0d) popup_snote2_single_text_window_t2_ParamLimits

0xf365,	// (0x00036a0d) popup_snote2_single_text_window_t2

0xf3b1,	// (0x00036a59) popup_snote2_single_text_window_t3_ParamLimits

0xf3b1,	// (0x00036a59) popup_snote2_single_text_window_t3

0xf3f2,	// (0x00036a9a) popup_snote2_single_text_window_t4_ParamLimits

0xf3f2,	// (0x00036a9a) popup_snote2_single_text_window_t4

0xf428,	// (0x00036ad0) popup_snote2_single_text_window_t5_ParamLimits

0xf428,	// (0x00036ad0) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0003733d) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0003733d) popup_snote2_single_text_window_t

0xf453,	// (0x00036afb) popup_snote2_single_graphic_window_g1_ParamLimits

0xf453,	// (0x00036afb) popup_snote2_single_graphic_window_g1

0xf47b,	// (0x00036b23) popup_snote2_single_graphic_window_g2_ParamLimits

0xf47b,	// (0x00036b23) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x00037348) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x00037348) popup_snote2_single_graphic_window_g

0xf4a3,	// (0x00036b4b) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4a3,	// (0x00036b4b) popup_snote2_single_graphic_window_t1

0xf4ef,	// (0x00036b97) popup_snote2_single_graphic_window_t2_ParamLimits

0xf4ef,	// (0x00036b97) popup_snote2_single_graphic_window_t2

0xf3b1,	// (0x00036a59) popup_snote2_single_graphic_window_t3_ParamLimits

0xf3b1,	// (0x00036a59) popup_snote2_single_graphic_window_t3

0xf3f2,	// (0x00036a9a) popup_snote2_single_graphic_window_t4_ParamLimits

0xf3f2,	// (0x00036a9a) popup_snote2_single_graphic_window_t4

0xf428,	// (0x00036ad0) popup_snote2_single_graphic_window_t5_ParamLimits

0xf428,	// (0x00036ad0) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0003734d) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0003734d) popup_snote2_single_graphic_window_t

0xe3f5,	// (0x00035a9d) clock_nsta_pane_cp2_t1

0xe3f5,	// (0x00035a9d) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00037168) clock_nsta_pane_cp2_t

0x71d6,	// (0x0002e87e) form_field_data_wide_pane_g1_ParamLimits

0xba7d,	// (0x00033125) form_field_data_wide_pane_g2_ParamLimits

0xba7d,	// (0x00033125) form_field_data_wide_pane_g2

0xba89,	// (0x00033131) form_field_data_wide_pane_g3_ParamLimits

0xba89,	// (0x00033131) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00036d29) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00036d29) form_field_data_wide_pane_g

0xa1c0,	// (0x00031868) grid_touch_3_pane_ParamLimits

0xa1c0,	// (0x00031868) grid_touch_3_pane

0xa63b,	// (0x00031ce3) cell_touch_3_pane_ParamLimits

0xa63b,	// (0x00031ce3) cell_touch_3_pane

0xe747,	// (0x00035def) cell_touch_3_pane_g1

0xe747,	// (0x00035def) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x000371ed) cell_touch_3_pane_g

0xb64b,	// (0x00032cf3) cont_query_data_pane

0xb653,	// (0x00032cfb) cont_query_data_pane_cp1

0xf53b,	// (0x00036be3) button_value_adjust_pane_cp7

0xf543,	// (0x00036beb) query_popup_pane_cp3

0xc027,	// (0x000336cf) bg_popup_sub_pane_cp22_ParamLimits

0x3764,	// (0x0002ae0c) navi_navi_volume_pane_cp2

0x377f,	// (0x0002ae27) popup_side_volume_key_window_g2

0x378e,	// (0x0002ae36) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00036dbf) popup_side_volume_key_window_g

0x37ab,	// (0x0002ae53) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00036dc6) popup_side_volume_key_window_t

0xc258,	// (0x00033900) popup_side_volume_key_window_ParamLimits

0x0297,	// (0x0002793f) list_double_graphic_pane_g4_ParamLimits

0x0297,	// (0x0002793f) list_double_graphic_pane_g4

0xa062,	// (0x0003170a) list_single_2heading_msg_pane_ParamLimits

0xa062,	// (0x0003170a) list_single_2heading_msg_pane

0x0702,	// (0x00027daa) list_single_2heading_msg_pane_g1_ParamLimits

0x0702,	// (0x00027daa) list_single_2heading_msg_pane_g1

0x070e,	// (0x00027db6) list_single_2heading_msg_pane_g2_ParamLimits

0x070e,	// (0x00027db6) list_single_2heading_msg_pane_g2

0x0721,	// (0x00027dc9) list_single_2heading_msg_pane_g3_ParamLimits

0x0721,	// (0x00027dc9) list_single_2heading_msg_pane_g3

0x7a55,	// (0x0002f0fd) list_single_2heading_msg_pane_g4_ParamLimits

0x7a55,	// (0x0002f0fd) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x00037358) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x00037358) list_single_2heading_msg_pane_g

0x7a6d,	// (0x0002f115) list_single_2heading_msg_pane_t1_ParamLimits

0x7a6d,	// (0x0002f115) list_single_2heading_msg_pane_t1

0x072d,	// (0x00027dd5) list_single_2heading_msg_pane_t2_ParamLimits

0x072d,	// (0x00027dd5) list_single_2heading_msg_pane_t2

0x0798,	// (0x00027e40) list_single_2heading_msg_pane_t3_ParamLimits

0x0798,	// (0x00027e40) list_single_2heading_msg_pane_t3

0x7b02,	// (0x0002f1aa) list_single_2heading_msg_pane_t4_ParamLimits

0x7b02,	// (0x0002f1aa) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x00037361) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x00037361) list_single_2heading_msg_pane_t

0xb41c,	// (0x00032ac4) title_pane_g4_ParamLimits

0xb41c,	// (0x00032ac4) title_pane_g4

0x3572,	// (0x0002ac1a) title_pane_stacon_g3_ParamLimits

0x3572,	// (0x0002ac1a) title_pane_stacon_g3

0xf0d4,	// (0x0003677c) list_single_2graphic_im_pane_g4_ParamLimits

0xf0d4,	// (0x0003677c) list_single_2graphic_im_pane_g4

0xd79d,	// (0x00034e45) popup_side_volume_key_window_cp

0xdcb0,	// (0x00035358) main_idle_act2_pane_t1

0x40e2,	// (0x0002b78a) toolbar_button_pane_g10

0x8abd,	// (0x00030165) popup_toolbar_window_cp1

0xe3e6,	// (0x00035a8e) clock_nsta_pane_cp_t1

0xe3e6,	// (0x00035a8e) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00037163) clock_nsta_pane_cp_t

0x3764,	// (0x0002ae0c) navi_navi_volume_pane_cp2_ParamLimits

0x3773,	// (0x0002ae1b) popup_side_volume_key_window_g1_ParamLimits

0x377f,	// (0x0002ae27) popup_side_volume_key_window_g2_ParamLimits

0x378e,	// (0x0002ae36) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00036dbf) popup_side_volume_key_window_g_ParamLimits

0x459f,	// (0x0002bc47) fep_hwr_aid_pane

0x4646,	// (0x0002bcee) bg_fep_hwr_top_pane_g4_ParamLimits

0xe799,	// (0x00035e41) fep_hwr_top_pane_g1_ParamLimits

0xe7ab,	// (0x00035e53) fep_hwr_top_pane_g2_ParamLimits

0x4666,	// (0x0002bd0e) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x000371b8) fep_hwr_top_pane_g_ParamLimits

0x467b,	// (0x0002bd23) fep_hwr_top_text_pane_ParamLimits

0xd572,	// (0x00034c1a) aid_touch_tab_arrow_arrow_2

0xd57b,	// (0x00034c23) aid_touch_tab_arrow_left_2

0x45b3,	// (0x0002bc5b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x45ea,	// (0x0002bc92) fep_hwr_prediction_pane

0xe900,	// (0x00035fa8) fep_vkb_prediction_pane

0xa414,	// (0x00031abc) fep_vkb_side_pane_g3_ParamLimits

0xa414,	// (0x00031abc) fep_vkb_side_pane_g3

0x47f6,	// (0x0002be9e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4862,	// (0x0002bf0a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x486f,	// (0x0002bf17) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x00037267) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x499e,	// (0x0002c046) fep_hwr_prediction_pane_g1

0x49a8,	// (0x0002c050) fep_hwr_prediction_pane_g2

0x49b0,	// (0x0002c058) fep_hwr_prediction_pane_g3

0x49b8,	// (0x0002c060) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0003736a) fep_hwr_prediction_pane_g

0x1414,	// (0x00028abc) fep_vkb_prediction_pane_g1

0x141e,	// (0x00028ac6) fep_vkb_prediction_pane_g2

0x1426,	// (0x00028ace) fep_vkb_prediction_pane_g3

0x142e,	// (0x00028ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x00037373) fep_vkb_prediction_pane_g

0x43ce,	// (0x0002ba76) slider_set_pane_g3

0x43e2,	// (0x0002ba8a) slider_set_pane_g4

0x43fa,	// (0x0002baa2) slider_set_pane_g5

0x43ce,	// (0x0002ba76) slider_set_pane_g6

0x4410,	// (0x0002bab8) slider_set_pane_g7

0xda22,	// (0x000350ca) slider_form_pane_g3

0xda2b,	// (0x000350d3) slider_form_pane_g4

0xda33,	// (0x000350db) slider_form_pane_g5

0xda22,	// (0x000350ca) slider_form_pane_g6

0xa01b,	// (0x000316c3) slider_form_pane_g7

0xdf26,	// (0x000355ce) slider_set_pane_vc_g3

0xdf2f,	// (0x000355d7) slider_set_pane_vc_g4

0xdf38,	// (0x000355e0) slider_set_pane_vc_g5

0xdf26,	// (0x000355ce) slider_set_pane_vc_g6

0xdf41,	// (0x000355e9) slider_set_pane_vc_g7

0xe115,	// (0x000357bd) slider_form_pane_vc_g1

0xe11e,	// (0x000357c6) slider_form_pane_vc_g2

0xe127,	// (0x000357cf) slider_form_pane_vc_g3

0xe115,	// (0x000357bd) slider_form_pane_vc_g4

0xe130,	// (0x000357d8) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x00037135) slider_form_pane_vc_g

0x325a,	// (0x0002a902) main_idle_act3_pane

0x1436,	// (0x00028ade) ai3_links_pane

0xa685,	// (0x00031d2d) popup_ai3_data_window_ParamLimits

0xa685,	// (0x00031d2d) popup_ai3_data_window

0xb3fe,	// (0x00032aa6) grid_ai3_links_pane

0xa69d,	// (0x00031d45) cell_ai3_links_pane_ParamLimits

0xa69d,	// (0x00031d45) cell_ai3_links_pane

0x143f,	// (0x00028ae7) bg_popup_sub_pane_cp11

0x144c,	// (0x00028af4) cell_ai3_links_pane_g1

0xb3fe,	// (0x00032aa6) bg_popup_sub_pane_cp12

0x1471,	// (0x00028b19) heading_ai3_data_pane

0x1479,	// (0x00028b21) list_ai3_gene_pane

0x1485,	// (0x00028b2d) popup_ai3_data_window_g1

0x148d,	// (0x00028b35) heading_ai3_data_pane_g1

0x1495,	// (0x00028b3d) heading_ai3_data_pane_t1

0x14a3,	// (0x00028b4b) list_double_ai3_gene_pane_ParamLimits

0x14a3,	// (0x00028b4b) list_double_ai3_gene_pane

0x14b0,	// (0x00028b58) list_single_ai3_gene_pane_ParamLimits

0x14b0,	// (0x00028b58) list_single_ai3_gene_pane

0xe70c,	// (0x00035db4) list_highlight_pane_cp7_ParamLimits

0xe70c,	// (0x00035db4) list_highlight_pane_cp7

0x14bd,	// (0x00028b65) list_single_a13_gene_pane_t1_ParamLimits

0x14bd,	// (0x00028b65) list_single_a13_gene_pane_t1

0x14d4,	// (0x00028b7c) list_single_ai3_gene_pane_g1

0x14dd,	// (0x00028b85) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0003737c) list_single_ai3_gene_pane_g

0x14e5,	// (0x00028b8d) list_double_ai3_gene_pane_g1_ParamLimits

0x14e5,	// (0x00028b8d) list_double_ai3_gene_pane_g1

0x14f1,	// (0x00028b99) list_double_ai3_gene_pane_t1_ParamLimits

0x14f1,	// (0x00028b99) list_double_ai3_gene_pane_t1

0x150d,	// (0x00028bb5) list_double_ai3_gene_pane_t2_ParamLimits

0x150d,	// (0x00028bb5) list_double_ai3_gene_pane_t2

0x1522,	// (0x00028bca) list_double_ai3_gene_pane_t3_ParamLimits

0x1522,	// (0x00028bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x00037381) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x00037381) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7a3f,	// (0x0002f0e7) aid_size_min_col_2

0xa66f,	// (0x00031d17) aid_size_min_msg_ParamLimits

0xa66f,	// (0x00031d17) aid_size_min_msg

0xa428,	// (0x00031ad0) fep_vkb_top_text_pane_g2_ParamLimits

0xa428,	// (0x00031ad0) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x000371e8) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x000371e8) fep_vkb_top_text_pane_g

0x325a,	// (0x0002a902) main_hc_apps_shell_pane

0x153f,	// (0x00028be7) grid_hc_apps_pane_ParamLimits

0x153f,	// (0x00028be7) grid_hc_apps_pane

0x154e,	// (0x00028bf6) list_hc_apps_pane

0x1556,	// (0x00028bfe) scroll_pane_cp37_ParamLimits

0x1556,	// (0x00028bfe) scroll_pane_cp37

0xa6b7,	// (0x00031d5f) cell_hc_apps_pane_ParamLimits

0xa6b7,	// (0x00031d5f) cell_hc_apps_pane

0xa777,	// (0x00031e1f) cell_hc_apps_pane_g1_ParamLimits

0xa777,	// (0x00031e1f) cell_hc_apps_pane_g1

0x1562,	// (0x00028c0a) cell_hc_apps_pane_g2_ParamLimits

0x1562,	// (0x00028c0a) cell_hc_apps_pane_g2

0x157e,	// (0x00028c26) cell_hc_apps_pane_g3_ParamLimits

0x157e,	// (0x00028c26) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x00037388) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x00037388) cell_hc_apps_pane_g

0xa7a4,	// (0x00031e4c) cell_hc_apps_pane_t1_ParamLimits

0xa7a4,	// (0x00031e4c) cell_hc_apps_pane_t1

0xb5a1,	// (0x00032c49) grid_highlight_pane_cp10_ParamLimits

0xb5a1,	// (0x00032c49) grid_highlight_pane_cp10

0xa7e2,	// (0x00031e8a) list_single_hc_apps_pane_ParamLimits

0xa7e2,	// (0x00031e8a) list_single_hc_apps_pane

0xa815,	// (0x00031ebd) list_single_hc_apps_pane_g1

0x0806,	// (0x00027eae) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0003738f) list_single_hc_apps_pane_g

0x081f,	// (0x00027ec7) list_single_hc_apps_pane_g2_copy1

0x083b,	// (0x00027ee3) list_single_hc_apps_pane_t1

0xb46e,	// (0x00032b16) bg_set_opt_pane_cp_ParamLimits

0x349d,	// (0x0002ab45) setting_slider_pane_t1_ParamLimits

0x34b6,	// (0x0002ab5e) setting_slider_pane_t2_ParamLimits

0x34cf,	// (0x0002ab77) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00036c0c) setting_slider_pane_t_ParamLimits

0x34e6,	// (0x0002ab8e) slider_set_pane_ParamLimits

0x3a09,	// (0x0002b0b1) control_pane_g5_ParamLimits

0x3a09,	// (0x0002b0b1) control_pane_g5

0xd9e4,	// (0x0003508c) slider_set_pane_g1_ParamLimits

0x43c2,	// (0x0002ba6a) slider_set_pane_g2_ParamLimits

0x43ce,	// (0x0002ba76) slider_set_pane_g3_ParamLimits

0x43e2,	// (0x0002ba8a) slider_set_pane_g4_ParamLimits

0x43fa,	// (0x0002baa2) slider_set_pane_g5_ParamLimits

0x43ce,	// (0x0002ba76) slider_set_pane_g6_ParamLimits

0x4410,	// (0x0002bab8) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003700d) slider_set_pane_g_ParamLimits

0xc2fc,	// (0x000339a4) navi_icon_text_pane_ParamLimits

0x9654,	// (0x00030cfc) aid_fill_nsta_2_ParamLimits

0x968b,	// (0x00030d33) aid_touch_tab_arrow_left_ParamLimits

0x96a1,	// (0x00030d49) aid_touch_tab_arrow_right_ParamLimits

0x973c,	// (0x00030de4) clock_nsta_pane_ParamLimits

0xd554,	// (0x00034bfc) navi_icon_pane_g1_ParamLimits

0xd560,	// (0x00034c08) navi_text_pane_t1_ParamLimits

0xe43d,	// (0x00035ae5) navi_icon_text_pane_g1_ParamLimits

0xe449,	// (0x00035af1) navi_icon_text_pane_t1_ParamLimits

0xa815,	// (0x00031ebd) list_single_hc_apps_pane_g1_ParamLimits

0x0806,	// (0x00027eae) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0003738f) list_single_hc_apps_pane_g_ParamLimits

0x081f,	// (0x00027ec7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x083b,	// (0x00027ee3) list_single_hc_apps_pane_t1_ParamLimits

0x86b8,	// (0x0002fd60) popup_toolbar2_fixed_window_ParamLimits

0x86b8,	// (0x0002fd60) popup_toolbar2_fixed_window

0x95b9,	// (0x00030c61) popup_toolbar2_float_window

0xb3fe,	// (0x00032aa6) bg_popup_sub_pane_cp27

0x15a0,	// (0x00028c48) grid_toolbar2_float_pane

0xb3fe,	// (0x00032aa6) bg_popup_sub_pane_cp26

0x15a0,	// (0x00028c48) grid_toolbar2_fixed_pane

0xa82e,	// (0x00031ed6) cell_toolbar2_fixed_pane_ParamLimits

0xa82e,	// (0x00031ed6) cell_toolbar2_fixed_pane

0xa848,	// (0x00031ef0) cell_toolbar2_fixed_pane_g1

0x15a8,	// (0x00028c50) toolbar2_fixed_button_pane

0xc8a4,	// (0x00033f4c) toolbar2_fixed_button_pane_g1

0xc8b4,	// (0x00033f5c) toolbar2_fixed_button_pane_g2

0xc8ac,	// (0x00033f54) toolbar2_fixed_button_pane_g3

0xc8c4,	// (0x00033f6c) toolbar2_fixed_button_pane_g4

0xc8bc,	// (0x00033f64) toolbar2_fixed_button_pane_g5

0xc8cc,	// (0x00033f74) toolbar2_fixed_button_pane_g6

0xc8d4,	// (0x00033f7c) toolbar2_fixed_button_pane_g7

0xc8e4,	// (0x00033f8c) toolbar2_fixed_button_pane_g8

0xc8dc,	// (0x00033f84) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00036f0f) toolbar2_fixed_button_pane_g

0x15b0,	// (0x00028c58) cell_toolbar2_float_pane_ParamLimits

0x15b0,	// (0x00028c58) cell_toolbar2_float_pane

0x15c1,	// (0x00028c69) cell_toolbar2_float_pane_g1

0x15a8,	// (0x00028c50) toolbar2_fixed_button_pane_cp

0xa3db,	// (0x00031a83) fep_vkb_accented_list_pane_ParamLimits

0xa3db,	// (0x00031a83) fep_vkb_accented_list_pane

0x47d6,	// (0x0002be7e) bg_popup_fep_shadow_pane_g9

0xc458,	// (0x00033b00) bg_popup_fep_shadow_pane_cp3

0xbb82,	// (0x0003322a) list_accented_list_pane

0x15ca,	// (0x00028c72) list_single_accented_list_pane_ParamLimits

0x15ca,	// (0x00028c72) list_single_accented_list_pane

0xc458,	// (0x00033b00) list_highlight_pane_cp10

0x15db,	// (0x00028c83) list_single_accented_list_pane_t1

0x94e3,	// (0x00030b8b) popup_slider_window_ParamLimits

0x94e3,	// (0x00030b8b) popup_slider_window

0xf54b,	// (0x00036bf3) aid_indentation_list_msg

0xa941,	// (0x00031fe9) bg_popup_window_pane_cp19

0x1647,	// (0x00028cef) popup_slider_window_g1

0x1663,	// (0x00028d0b) popup_slider_window_g2

0x167f,	// (0x00028d27) popup_slider_window_g3

0x0005,

0xfcec,	// (0x00037394) popup_slider_window_g

0x169b,	// (0x00028d43) popup_slider_window_t1

0x16e1,	// (0x00028d89) small_volume_slider_vertical_pane

0xe747,	// (0x00035def) small_volume_slider_vertical_pane_g1

0xe747,	// (0x00035def) small_volume_slider_vertical_pane_g2

0x16fd,	// (0x00028da5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x000373a6) small_volume_slider_vertical_pane_g

0x8626,	// (0x0002fcce) area_side_right_pane_ParamLimits

0x8626,	// (0x0002fcce) area_side_right_pane

0xa9f9,	// (0x000320a1) aid_size_side_button_ParamLimits

0xa9f9,	// (0x000320a1) aid_size_side_button

0xaa12,	// (0x000320ba) grid_sctrl_middle_pane_ParamLimits

0xaa12,	// (0x000320ba) grid_sctrl_middle_pane

0x4d11,	// (0x0002c3b9) sctrl_sk_bottom_pane

0x4d22,	// (0x0002c3ca) sctrl_sk_top_pane

0x4d34,	// (0x0002c3dc) aid_touch_sctrl_top

0x4d41,	// (0x0002c3e9) bg_sctrl_sk_pane_ParamLimits

0x4d41,	// (0x0002c3e9) bg_sctrl_sk_pane

0x4d4f,	// (0x0002c3f7) sctrl_sk_top_pane_g1

0x4d5c,	// (0x0002c404) sctrl_sk_top_pane_t1

0x4d34,	// (0x0002c3dc) aid_touch_sctrl_bottom

0x4d41,	// (0x0002c3e9) bg_sctrl_sk_pane_cp_ParamLimits

0x4d41,	// (0x0002c3e9) bg_sctrl_sk_pane_cp

0x4d77,	// (0x0002c41f) sctrl_sk_bottom_pane_g1

0x4d5c,	// (0x0002c404) sctrl_sk_bottom_pane_t1

0xaa2c,	// (0x000320d4) cell_sctrl_middle_pane_ParamLimits

0xaa2c,	// (0x000320d4) cell_sctrl_middle_pane

0xaa3d,	// (0x000320e5) aid_touch_sctrl_middle_ParamLimits

0xaa3d,	// (0x000320e5) aid_touch_sctrl_middle

0xaa4a,	// (0x000320f2) bg_sctrl_middle_pane_ParamLimits

0xaa4a,	// (0x000320f2) bg_sctrl_middle_pane

0x5c0f,	// (0x0002d2b7) cell_sctrl_middle_pane_g1_ParamLimits

0x5c0f,	// (0x0002d2b7) cell_sctrl_middle_pane_g1

0xaa58,	// (0x00032100) cell_sctrl_middle_pane_g2_ParamLimits

0xaa58,	// (0x00032100) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x000373b2) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x000373b2) cell_sctrl_middle_pane_g

0xc8a4,	// (0x00033f4c) bg_sctrl_middle_pane_g1

0xc8ac,	// (0x00033f54) bg_sctrl_middle_pane_g2

0xc8b4,	// (0x00033f5c) bg_sctrl_middle_pane_g3

0xc8bc,	// (0x00033f64) bg_sctrl_middle_pane_g4

0xc8c4,	// (0x00033f6c) bg_sctrl_middle_pane_g5

0xc8cc,	// (0x00033f74) bg_sctrl_middle_pane_g6

0xc8d4,	// (0x00033f7c) bg_sctrl_middle_pane_g7

0xc8dc,	// (0x00033f84) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x000373b7) bg_sctrl_middle_pane_g

0xc8e4,	// (0x00033f8c) bg_sctrl_middle_pane_g8_copy1

0xc8a4,	// (0x00033f4c) bg_sctrl_sk_pane_g1

0xc8b4,	// (0x00033f5c) bg_sctrl_sk_pane_g2

0xc8ac,	// (0x00033f54) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00036f0f) bg_sctrl_sk_pane_g

0xb99c,	// (0x00033044) aid_size_touch_scroll_bar

0xc8c4,	// (0x00033f6c) bg_sctrl_sk_pane_g4

0xc8bc,	// (0x00033f64) bg_sctrl_sk_pane_g5

0xc8cc,	// (0x00033f74) bg_sctrl_sk_pane_g6

0xc8d4,	// (0x00033f7c) bg_sctrl_sk_pane_g7

0xc8e4,	// (0x00033f8c) bg_sctrl_sk_pane_g8

0xc8dc,	// (0x00033f84) bg_sctrl_sk_pane_g9

0x3bb1,	// (0x0002b259) popup_fep_china_hwr2_fs_candidate_window

0x901d,	// (0x000306c5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x901d,	// (0x000306c5) popup_fep_china_hwr2_fs_control_window

0x47f6,	// (0x0002be9e) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x000373ad) sctrl_sk_top_pane_g

0xaa64,	// (0x0003210c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaa64,	// (0x0003210c) aid_fep_china_hwr2_fs_cell

0xaa78,	// (0x00032120) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaa78,	// (0x00032120) bg_popup_fep_shadow_pane_cp4

0xaa8f,	// (0x00032137) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaa8f,	// (0x00032137) bg_popup_fep_shadow_pane_cp5

0xaaa1,	// (0x00032149) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaaa1,	// (0x00032149) popup_fep_china_hwr2_fs_control_bar_grid

0xaab5,	// (0x0003215d) popup_fep_china_hwr2_fs_control_funtion_grid

0x177f,	// (0x00028e27) aid_fep_china_hwr2_fs_candi_cell

0xb3fe,	// (0x00032aa6) bg_popup_fep_shadow_pane_cp6

0x1789,	// (0x00028e31) popup_fep_china_hwr2_fs_candidate_grid

0xaabd,	// (0x00032165) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaabd,	// (0x00032165) cell_fep_china_hwr2_fs_funtion_grid

0xe747,	// (0x00035def) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1765,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1765,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1793,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1793,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x000373c8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x000373c8) cell_fep_china_hwr2_fs_funtion_grid_g

0xaad5,	// (0x0003217d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaad5,	// (0x0003217d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaaea,	// (0x00032192) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaaea,	// (0x00032192) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x000373cd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x000373cd) cell_fep_china_hwr2_fs_funtion_grid_t

0x17a9,	// (0x00028e51) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x17b1,	// (0x00028e59) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x17b9,	// (0x00028e61) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x000373d2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x17c1,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x17c1,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid

0x17da,	// (0x00028e82) popup_fep_china_hwr2_fs_candidate_grid_g20

0x17e2,	// (0x00028e8a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe747,	// (0x00035def) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe747,	// (0x00035def) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x000371ed) cell_fep_china_hwr2_fs_candidate_grid_g

0x17ea,	// (0x00028e92) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc6d9,	// (0x00033d81) clock_nsta_pane_cp_24_ParamLimits

0xc6d9,	// (0x00033d81) clock_nsta_pane_cp_24

0xc741,	// (0x00033de9) indicator_nsta_pane_cp_24_ParamLimits

0xc741,	// (0x00033de9) indicator_nsta_pane_cp_24

0xd472,	// (0x00034b1a) heading_pane_g1

0x0001,

0xf8cc,	// (0x00036f74) heading_pane_g

0xdb3b,	// (0x000351e3) grid_sct_catagory_button_pane

0xd8a5,	// (0x00034f4d) scroll_pane_cp5_ParamLimits

0xe46f,	// (0x00035b17) button_value_adjust_pane_cp5_ParamLimits

0xe46f,	// (0x00035b17) button_value_adjust_pane_cp5

0xe56f,	// (0x00035c17) form2_midp_time_pane_ParamLimits

0x17f8,	// (0x00028ea0) cell_sct_catagory_button_pane_ParamLimits

0x17f8,	// (0x00028ea0) cell_sct_catagory_button_pane

0xe70c,	// (0x00035db4) bg_button_pane_cp01_ParamLimits

0xe70c,	// (0x00035db4) bg_button_pane_cp01

0xe747,	// (0x00035def) cell_sct_catagory_button_pane_g1

0x955c,	// (0x00030c04) popup_tb_extension_window

0xab06,	// (0x000321ae) aid_size_cell_ext_ParamLimits

0xab06,	// (0x000321ae) aid_size_cell_ext

0xb7de,	// (0x00032e86) bg_tb_trans_pane_cp1_ParamLimits

0xb7de,	// (0x00032e86) bg_tb_trans_pane_cp1

0xab2c,	// (0x000321d4) grid_tb_ext_pane_ParamLimits

0xab2c,	// (0x000321d4) grid_tb_ext_pane

0xab69,	// (0x00032211) cell_tb_ext_pane_ParamLimits

0xab69,	// (0x00032211) cell_tb_ext_pane

0xab91,	// (0x00032239) cell_tb_ext_pane_g1_ParamLimits

0xab91,	// (0x00032239) cell_tb_ext_pane_g1

0x180a,	// (0x00028eb2) cell_tb_ext_pane_t1

0xb5a1,	// (0x00032c49) list_highlight_pane_cp11_ParamLimits

0xb5a1,	// (0x00032c49) list_highlight_pane_cp11

0x33d6,	// (0x0002aa7e) popup_uni_indicator_window_ParamLimits

0x33d6,	// (0x0002aa7e) popup_uni_indicator_window

0xba63,	// (0x0003310b) bg_popup_sub_pane_cp14

0x1825,	// (0x00028ecd) list_uniindi_pane

0x1831,	// (0x00028ed9) uniindi_top_pane

0xb5a1,	// (0x00032c49) bg_uniindi_top_pane

0x1850,	// (0x00028ef8) uniindi_top_pane_g1

0x1866,	// (0x00028f0e) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x000373d9) uniindi_top_pane_g

0x1890,	// (0x00028f38) uniindi_top_pane_t1

0x18ba,	// (0x00028f62) list_single_uniindi_pane_ParamLimits

0x18ba,	// (0x00028f62) list_single_uniindi_pane

0xe747,	// (0x00035def) bg_uniindi_top_pane_g1

0x18cc,	// (0x00028f74) list_single_uniindi_pane_g1

0x18df,	// (0x00028f87) list_single_uniindi_pane_t1

0x325a,	// (0x0002a902) control_bg_pane

0x1904,	// (0x00028fac) bg_sctrl_sk_pane_cp1

0x190d,	// (0x00028fb5) bg_sctrl_sk_pane_cp2

0x1916,	// (0x00028fbe) control_bg_pane_g1

0x191f,	// (0x00028fc7) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x000373e2) control_bg_pane_g

0xe328,	// (0x000359d0) cell_indicator_nsta_pane_g1_ParamLimits

0xa1f3,	// (0x0003189b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00037151) cell_indicator_nsta_pane_g_ParamLimits

0x77fc,	// (0x0002eea4) form2_midp_time_pane_t1_ParamLimits

0x4591,	// (0x0002bc39) main_idle_act4_pane_ParamLimits

0x4591,	// (0x0002bc39) main_idle_act4_pane

0x955c,	// (0x00030c04) popup_tb_extension_window_ParamLimits

0xab50,	// (0x000321f8) tb_ext_find_pane_ParamLimits

0xab50,	// (0x000321f8) tb_ext_find_pane

0x1928,	// (0x00028fd0) ai_gene_pane_1_cp1

0xc4ec,	// (0x00033b94) ai_gene_pane_2_cp1

0x1930,	// (0x00028fd8) list_single_idle_plugin_calendar_pane

0x1939,	// (0x00028fe1) list_single_idle_plugin_notification_pane

0x1942,	// (0x00028fea) list_single_idle_plugin_player_pane

0xabae,	// (0x00032256) list_single_idle_plugin_shortcut_pane_ParamLimits

0xabae,	// (0x00032256) list_single_idle_plugin_shortcut_pane

0xabd6,	// (0x0003227e) main_idle_act4_pane_t1

0xabec,	// (0x00032294) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x000373e7) main_idle_act4_pane_t

0xac04,	// (0x000322ac) middle_sk_idle_act4_pane_ParamLimits

0xac04,	// (0x000322ac) middle_sk_idle_act4_pane

0xac20,	// (0x000322c8) popup_clock_digital_analogue_window_cp2

0xac47,	// (0x000322ef) shortcut_wheel_idle_act4_pane_ParamLimits

0xac47,	// (0x000322ef) shortcut_wheel_idle_act4_pane

0xe747,	// (0x00035def) shortcut_wheel_idle_act4_pane_g1

0xe747,	// (0x00035def) shortcut_wheel_idle_act4_pane_g2

0xe747,	// (0x00035def) shortcut_wheel_idle_act4_pane_g3

0xe747,	// (0x00035def) shortcut_wheel_idle_act4_pane_g4

0xe747,	// (0x00035def) shortcut_wheel_idle_act4_pane_g5

0x194b,	// (0x00028ff3) shortcut_wheel_idle_act4_pane_g6

0x1953,	// (0x00028ffb) shortcut_wheel_idle_act4_pane_g7

0x195b,	// (0x00029003) shortcut_wheel_idle_act4_pane_g8

0x1963,	// (0x0002900b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x000373ec) shortcut_wheel_idle_act4_pane_g

0xacc4,	// (0x0003236c) middle_sk_idle_act4_pane_g1_ParamLimits

0xacc4,	// (0x0003236c) middle_sk_idle_act4_pane_g1

0xacd2,	// (0x0003237a) middle_sk_idle_act4_pane_g2_ParamLimits

0xacd2,	// (0x0003237a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0003740f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0003740f) middle_sk_idle_act4_pane_g

0xacea,	// (0x00032392) middle_sk_idle_act4_pane_t1_ParamLimits

0xacea,	// (0x00032392) middle_sk_idle_act4_pane_t1

0xad19,	// (0x000323c1) grid_ai_shortcut_pane_ParamLimits

0xad19,	// (0x000323c1) grid_ai_shortcut_pane

0xad36,	// (0x000323de) list_highlight_pane_cp16_ParamLimits

0xad36,	// (0x000323de) list_highlight_pane_cp16

0xad43,	// (0x000323eb) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xad43,	// (0x000323eb) list_single_idle_plugin_shortcut_pane_g1

0xad4f,	// (0x000323f7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xad4f,	// (0x000323f7) list_single_idle_plugin_shortcut_pane_g2

0xad6b,	// (0x00032413) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xad6b,	// (0x00032413) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x00037414) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x00037414) list_single_idle_plugin_shortcut_pane_g

0xad80,	// (0x00032428) cell_ai_shortcut_pane_ParamLimits

0xad80,	// (0x00032428) cell_ai_shortcut_pane

0xad96,	// (0x0003243e) cell_ai_shortcut_pane_g1_ParamLimits

0xad96,	// (0x0003243e) cell_ai_shortcut_pane_g1

0x1928,	// (0x00028fd0) ai_gene_pane_1_cp2

0x196b,	// (0x00029013) ai_gene_pane_2_cp2

0x1973,	// (0x0002901b) list_highlight_pane_cp15

0x197c,	// (0x00029024) list_single_idle_plugin_calendar_pane_g1

0x1973,	// (0x0002901b) list_highlight_pane_cp17

0x1984,	// (0x0002902c) list_single_idle_plugin_calendar_pane_g1_copy1

0x198c,	// (0x00029034) list_single_idle_plugin_player_pane_g1

0xdd50,	// (0x000353f8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0003741b) list_single_idle_plugin_player_pane_g

0x1994,	// (0x0002903c) list_single_idle_plugin_player_pane_t1

0x19a2,	// (0x0002904a) list_single_idle_plugin_player_pane_t2

0x19b0,	// (0x00029058) list_single_idle_plugin_player_pane_t3

0x19be,	// (0x00029066) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x00037420) list_single_idle_plugin_player_pane_t

0x19cc,	// (0x00029074) wait_bar_pane_cp15

0x19d4,	// (0x0002907c) grid_ai_notification_pane

0xdd50,	// (0x000353f8) list_single_idle_plugin_notification_pane_g1

0xadb8,	// (0x00032460) cell_ai_notification_pane_ParamLimits

0xadb8,	// (0x00032460) cell_ai_notification_pane

0x19dd,	// (0x00029085) cell_ai_notification_pane_g1

0x19e5,	// (0x0002908d) cell_ai_notification_pane_t1

0xadc5,	// (0x0003246d) tb_ext_find_button_pane

0xadcd,	// (0x00032475) tb_ext_find_pane_g1

0xadd5,	// (0x0003247d) tb_ext_find_pane_t1

0xbf9d,	// (0x00033645) tb_ext_find_button_pane_g1

0x19f3,	// (0x0002909b) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x00037429) tb_ext_find_button_pane_g

0xabd6,	// (0x0003227e) main_idle_act4_pane_t1_ParamLimits

0xabec,	// (0x00032294) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x000373e7) main_idle_act4_pane_t_ParamLimits

0xac20,	// (0x000322c8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xac37,	// (0x000322df) sat_plugin_idle_act4_pane_ParamLimits

0xac37,	// (0x000322df) sat_plugin_idle_act4_pane

0xade3,	// (0x0003248b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xade3,	// (0x0003248b) sat_plugin_idle_act4_pane_t1

0xadfb,	// (0x000324a3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xadfb,	// (0x000324a3) sat_plugin_idle_act4_pane_t2

0xae13,	// (0x000324bb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xae13,	// (0x000324bb) sat_plugin_idle_act4_pane_t3

0xae2b,	// (0x000324d3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xae2b,	// (0x000324d3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0003742e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0003742e) sat_plugin_idle_act4_pane_t

0x331f,	// (0x0002a9c7) popup_battery_window_ParamLimits

0x331f,	// (0x0002a9c7) popup_battery_window

0xb5a1,	// (0x00032c49) bg_popup_sub_pane_cp25_ParamLimits

0xb5a1,	// (0x00032c49) bg_popup_sub_pane_cp25

0x19fc,	// (0x000290a4) popup_battery_window_g1_ParamLimits

0x19fc,	// (0x000290a4) popup_battery_window_g1

0x1a08,	// (0x000290b0) popup_battery_window_t1_ParamLimits

0x1a08,	// (0x000290b0) popup_battery_window_t1

0x1a1a,	// (0x000290c2) popup_battery_window_t2_ParamLimits

0x1a1a,	// (0x000290c2) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x00037437) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x00037437) popup_battery_window_t

0x8d63,	// (0x0003040b) midp_canvas_pane_ParamLimits

0x8dc0,	// (0x00030468) midp_keypad_pane_ParamLimits

0x8dc0,	// (0x00030468) midp_keypad_pane

0xbbd3,	// (0x0003327b) main_midp_pane_ParamLimits

0xe404,	// (0x00035aac) signal_pane_g2_cp_ParamLimits

0xae43,	// (0x000324eb) aid_size_cell_midp_keypad_ParamLimits

0xae43,	// (0x000324eb) aid_size_cell_midp_keypad

0xae61,	// (0x00032509) midp_keyp_game_grid_pane_ParamLimits

0xae61,	// (0x00032509) midp_keyp_game_grid_pane

0xae88,	// (0x00032530) midp_keyp_rocker_pane_ParamLimits

0xae88,	// (0x00032530) midp_keyp_rocker_pane

0xaec9,	// (0x00032571) midp_keyp_sk_left_pane_ParamLimits

0xaec9,	// (0x00032571) midp_keyp_sk_left_pane

0xaf1d,	// (0x000325c5) midp_keyp_sk_right_pane_ParamLimits

0xaf1d,	// (0x000325c5) midp_keyp_sk_right_pane

0xb3fe,	// (0x00032aa6) bg_button_pane_cp03

0xaf71,	// (0x00032619) midp_keyp_sk_left_pane_g1

0xb3fe,	// (0x00032aa6) bg_button_pane_cp04

0xaf71,	// (0x00032619) midp_keyp_sk_right_pane_g1

0xe747,	// (0x00035def) midp_keyp_rocker_pane_g1

0xaf7a,	// (0x00032622) keyp_game_cell_pane_ParamLimits

0xaf7a,	// (0x00032622) keyp_game_cell_pane

0xb3fe,	// (0x00032aa6) bg_button_pane_cp02

0xaf9e,	// (0x00032646) keyp_game_cell_pane_g1

0x8668,	// (0x0002fd10) popup_fep_vkb2_window_ParamLimits

0x8668,	// (0x0002fd10) popup_fep_vkb2_window

0xafa7,	// (0x0003264f) aid_size_cell_vkb2_ParamLimits

0xafa7,	// (0x0003264f) aid_size_cell_vkb2

0xafdd,	// (0x00032685) popup_fep_vkb2_window_g1_ParamLimits

0xafdd,	// (0x00032685) popup_fep_vkb2_window_g1

0xb024,	// (0x000326cc) vkb2_area_bottom_pane_ParamLimits

0xb024,	// (0x000326cc) vkb2_area_bottom_pane

0xb078,	// (0x00032720) vkb2_area_keypad_pane_ParamLimits

0xb078,	// (0x00032720) vkb2_area_keypad_pane

0xb0c0,	// (0x00032768) vkb2_area_top_pane_ParamLimits

0xb0c0,	// (0x00032768) vkb2_area_top_pane

0xb146,	// (0x000327ee) vkb2_top_entry_pane_ParamLimits

0xb146,	// (0x000327ee) vkb2_top_entry_pane

0xb173,	// (0x0003281b) vkb2_top_grid_left_pane_ParamLimits

0xb173,	// (0x0003281b) vkb2_top_grid_left_pane

0xb193,	// (0x0003283b) vkb2_top_grid_right_pane_ParamLimits

0xb193,	// (0x0003283b) vkb2_top_grid_right_pane

0x545f,	// (0x0002cb07) vkb2_cell_keypad_pane_ParamLimits

0x545f,	// (0x0002cb07) vkb2_cell_keypad_pane

0xb1d9,	// (0x00032881) vkb2_area_bottom_grid_pane_ParamLimits

0xb1d9,	// (0x00032881) vkb2_area_bottom_grid_pane

0xb203,	// (0x000328ab) vkb2_area_bottom_pane_g1_ParamLimits

0xb203,	// (0x000328ab) vkb2_area_bottom_pane_g1

0xb229,	// (0x000328d1) vkb2_area_bottom_pane_g2_ParamLimits

0xb229,	// (0x000328d1) vkb2_area_bottom_pane_g2

0xb25a,	// (0x00032902) vkb2_area_bottom_pane_g3_ParamLimits

0xb25a,	// (0x00032902) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0003743c) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0003743c) vkb2_area_bottom_pane_g

0x5609,	// (0x0002ccb1) vkb2_top_cell_left_pane_ParamLimits

0x5609,	// (0x0002ccb1) vkb2_top_cell_left_pane

0x1d5c,	// (0x00029404) vkb2_top_entry_pane_g1_ParamLimits

0x1d5c,	// (0x00029404) vkb2_top_entry_pane_g1

0x1d6a,	// (0x00029412) vkb2_top_entry_pane_t1_ParamLimits

0x1d6a,	// (0x00029412) vkb2_top_entry_pane_t1

0x1da3,	// (0x0002944b) vkb2_top_entry_pane_t2_ParamLimits

0x1da3,	// (0x0002944b) vkb2_top_entry_pane_t2

0x1dd5,	// (0x0002947d) vkb2_top_entry_pane_t3_ParamLimits

0x1dd5,	// (0x0002947d) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x00037443) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x00037443) vkb2_top_entry_pane_t

0xb2c4,	// (0x0003296c) vkb2_top_grid_right_pane_g1_ParamLimits

0xb2c4,	// (0x0003296c) vkb2_top_grid_right_pane_g1

0x56ac,	// (0x0002cd54) vkb2_top_grid_right_pane_g2_ParamLimits

0x56ac,	// (0x0002cd54) vkb2_top_grid_right_pane_g2

0x56c4,	// (0x0002cd6c) vkb2_top_grid_right_pane_g3_ParamLimits

0x56c4,	// (0x0002cd6c) vkb2_top_grid_right_pane_g3

0xb2da,	// (0x00032982) vkb2_top_grid_right_pane_g4_ParamLimits

0xb2da,	// (0x00032982) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0003744a) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0003744a) vkb2_top_grid_right_pane_g

0x56f2,	// (0x0002cd9a) vkb2_top_cell_left_pane_g1

0x5709,	// (0x0002cdb1) vkb2_cell_keypad_pane_g1_ParamLimits

0x5709,	// (0x0002cdb1) vkb2_cell_keypad_pane_g1

0x1e25,	// (0x000294cd) vkb2_cell_keypad_pane_t1_ParamLimits

0x1e25,	// (0x000294cd) vkb2_cell_keypad_pane_t1

0x5717,	// (0x0002cdbf) vkb2_cell_bottom_grid_pane_ParamLimits

0x5717,	// (0x0002cdbf) vkb2_cell_bottom_grid_pane

0x5750,	// (0x0002cdf8) vkb2_cell_bottom_grid_pane_g1

0xac68,	// (0x00032310) aid_call2_pane_cp02

0xac70,	// (0x00032318) aid_call_pane_cp02

0xac78,	// (0x00032320) clock_digital_number_pane_cp10

0xac80,	// (0x00032328) clock_digital_number_pane_cp11

0xac88,	// (0x00032330) clock_digital_number_pane_cp12

0xac90,	// (0x00032338) clock_digital_number_pane_cp13

0xac98,	// (0x00032340) clock_digital_separator_pane_cp10

0xbf9d,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g1

0xbf9d,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g2

0xaca0,	// (0x00032348) popup_clock_digital_analogue_window_cp2_g3

0xbf9d,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g4

0xaca0,	// (0x00032348) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x000373ff) popup_clock_digital_analogue_window_cp2_g

0xaca8,	// (0x00032350) popup_clock_digital_analogue_window_cp2_t1

0xacb6,	// (0x0003235e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0003740a) popup_clock_digital_analogue_window_cp2_t

0xe747,	// (0x00035def) clock_digital_number_pane_cp10_g1

0xe747,	// (0x00035def) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x000371ed) clock_digital_number_pane_cp10_g

0xe747,	// (0x00035def) clock_digital_separator_pane_cp10_g1

0xe747,	// (0x00035def) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x000371ed) clock_digital_separator_pane_cp10_g

0x1872,	// (0x00028f1a) uniindi_top_pane_g3

0x1883,	// (0x00028f2b) uniindi_top_pane_g4

0x54ea,	// (0x0002cb92) vkb2_row_keypad_pane_ParamLimits

0x54ea,	// (0x0002cb92) vkb2_row_keypad_pane

0x5770,	// (0x0002ce18) vkb2_cell_t_keypad_pane_ParamLimits

0x5770,	// (0x0002ce18) vkb2_cell_t_keypad_pane

0x5780,	// (0x0002ce28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5780,	// (0x0002ce28) vkb2_cell_t_keypad_pane_cp08

0x5793,	// (0x0002ce3b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5793,	// (0x0002ce3b) vkb2_cell_t_keypad_pane_cp09

0x57a7,	// (0x0002ce4f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x57a7,	// (0x0002ce4f) vkb2_cell_t_keypad_pane_cp01

0x57b8,	// (0x0002ce60) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x57b8,	// (0x0002ce60) vkb2_cell_t_keypad_pane_cp02

0x57c9,	// (0x0002ce71) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x57c9,	// (0x0002ce71) vkb2_cell_t_keypad_pane_cp03

0x57da,	// (0x0002ce82) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x57da,	// (0x0002ce82) vkb2_cell_t_keypad_pane_cp04

0x57eb,	// (0x0002ce93) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x57eb,	// (0x0002ce93) vkb2_cell_t_keypad_pane_cp05

0x57fc,	// (0x0002cea4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x57fc,	// (0x0002cea4) vkb2_cell_t_keypad_pane_cp06

0x580d,	// (0x0002ceb5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x580d,	// (0x0002ceb5) vkb2_cell_t_keypad_pane_cp07

0x581e,	// (0x0002cec6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x581e,	// (0x0002cec6) vkb2_cell_t_keypad_pane_cp10

0x47f6,	// (0x0002be9e) vkb2_cell_t_keypad_pane_g1

0x1e3c,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1

0x325a,	// (0x0002a902) popup_grid_graphic2_window

0x1e4e,	// (0x000294f6) aid_size_cell_graphic2_ParamLimits

0x1e4e,	// (0x000294f6) aid_size_cell_graphic2

0x1e8c,	// (0x00029534) bg_popup_window_pane_cp21_ParamLimits

0x1e8c,	// (0x00029534) bg_popup_window_pane_cp21

0x1e9a,	// (0x00029542) graphic2_pages_pane_ParamLimits

0x1e9a,	// (0x00029542) graphic2_pages_pane

0x1ef0,	// (0x00029598) grid_graphic2_control_pane_ParamLimits

0x1ef0,	// (0x00029598) grid_graphic2_control_pane

0x1f38,	// (0x000295e0) grid_graphic2_pane_ParamLimits

0x1f38,	// (0x000295e0) grid_graphic2_pane

0x1fbf,	// (0x00029667) cell_graphic2_pane

0x325a,	// (0x0002a902) main_comp_mode_pane

0x1479,	// (0x00028b21) list_ai3_gene_pane_ParamLimits

0xa941,	// (0x00031fe9) bg_popup_window_pane_cp19_ParamLimits

0x15e9,	// (0x00028c91) bg_touch_area_indi_pane_ParamLimits

0x15e9,	// (0x00028c91) bg_touch_area_indi_pane

0x15ff,	// (0x00028ca7) bg_touch_area_indi_pane_cp01_ParamLimits

0x15ff,	// (0x00028ca7) bg_touch_area_indi_pane_cp01

0x1615,	// (0x00028cbd) bg_touch_area_indi_pane_cp02_ParamLimits

0x1615,	// (0x00028cbd) bg_touch_area_indi_pane_cp02

0x162d,	// (0x00028cd5) bg_touch_area_indi_pane_cp03_ParamLimits

0x162d,	// (0x00028cd5) bg_touch_area_indi_pane_cp03

0x1647,	// (0x00028cef) popup_slider_window_g1_ParamLimits

0x1663,	// (0x00028d0b) popup_slider_window_g2_ParamLimits

0x167f,	// (0x00028d27) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x00037394) popup_slider_window_g_ParamLimits

0x169b,	// (0x00028d43) popup_slider_window_t1_ParamLimits

0x16e1,	// (0x00028d89) small_volume_slider_vertical_pane_ParamLimits

0x1fbf,	// (0x00029667) cell_graphic2_pane_ParamLimits

0x201c,	// (0x000296c4) bg_button_pane_cp10_ParamLimits

0x201c,	// (0x000296c4) bg_button_pane_cp10

0x202f,	// (0x000296d7) bg_button_pane_cp11_ParamLimits

0x202f,	// (0x000296d7) bg_button_pane_cp11

0x2042,	// (0x000296ea) graphic2_pages_pane_g1_ParamLimits

0x2042,	// (0x000296ea) graphic2_pages_pane_g1

0x205d,	// (0x00029705) graphic2_pages_pane_g2_ParamLimits

0x205d,	// (0x00029705) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x00037458) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x00037458) graphic2_pages_pane_g

0x2075,	// (0x0002971d) graphic2_pages_pane_t1_ParamLimits

0x2075,	// (0x0002971d) graphic2_pages_pane_t1

0x208d,	// (0x00029735) cell_graphic2_control_pane_ParamLimits

0x208d,	// (0x00029735) cell_graphic2_control_pane

0x20bf,	// (0x00029767) cell_graphic2_pane_g1_ParamLimits

0x20bf,	// (0x00029767) cell_graphic2_pane_g1

0xb2f0,	// (0x00032998) cell_graphic2_pane_g2_ParamLimits

0xb2f0,	// (0x00032998) cell_graphic2_pane_g2

0x20cc,	// (0x00029774) cell_graphic2_pane_g3_ParamLimits

0x20cc,	// (0x00029774) cell_graphic2_pane_g3

0xb2fd,	// (0x000329a5) cell_graphic2_pane_g4_ParamLimits

0xb2fd,	// (0x000329a5) cell_graphic2_pane_g4

0x20d9,	// (0x00029781) cell_graphic2_pane_g5_ParamLimits

0x20d9,	// (0x00029781) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0003745d) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0003745d) cell_graphic2_pane_g

0x20f9,	// (0x000297a1) cell_graphic2_pane_t1_ParamLimits

0x20f9,	// (0x000297a1) cell_graphic2_pane_t1

0xd466,	// (0x00034b0e) grid_highlight_pane_cp11_ParamLimits

0xd466,	// (0x00034b0e) grid_highlight_pane_cp11

0xb5a1,	// (0x00032c49) bg_button_pane_cp05

0x212e,	// (0x000297d6) cell_graphic2_control_pane_g1

0xe747,	// (0x00035def) bg_touch_area_indi_pane_g1

0x24da,	// (0x00029b82) aid_cmod_rocker_key_size

0x24e4,	// (0x00029b8c) aid_cmode_itu_key_size

0x24ee,	// (0x00029b96) main_cmode_video_pane

0x24f8,	// (0x00029ba0) main_comp_mode_itu_pane

0x2504,	// (0x00029bac) main_comp_mode_rocker_pane

0x2510,	// (0x00029bb8) cell_cmode_rocker_pane_ParamLimits

0x2510,	// (0x00029bb8) cell_cmode_rocker_pane

0x2522,	// (0x00029bca) cell_cmode_itu_pane_ParamLimits

0x2522,	// (0x00029bca) cell_cmode_itu_pane

0xba63,	// (0x0003310b) bg_button_pane_cp06_ParamLimits

0xba63,	// (0x0003310b) bg_button_pane_cp06

0xe9b0,	// (0x00036058) cell_cmode_rocker_pane_g1_ParamLimits

0xe9b0,	// (0x00036058) cell_cmode_rocker_pane_g1

0x1765,	// (0x00028e0d) cell_cmode_rocker_pane_g2_ParamLimits

0x1765,	// (0x00028e0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0003746d) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0003746d) cell_cmode_rocker_pane_g

0xb3fe,	// (0x00032aa6) bg_button_pane_cp07

0x2537,	// (0x00029bdf) cell_cmode_itu_pane_g1

0x2540,	// (0x00029be8) cell_cmode_itu_pane_t1

0x254e,	// (0x00029bf6) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x00037472) cell_cmode_itu_pane_t

0x18f4,	// (0x00028f9c) aid_touch_ctrl_left

0x18fc,	// (0x00028fa4) aid_touch_ctrl_right

0xb3fe,	// (0x00032aa6) compa_mode_pane

0x2154,	// (0x000297fc) aid_cmod_rocker_key_size_cp

0x215e,	// (0x00029806) aid_cmode_itu_key_size_cp

0x255c,	// (0x00029c04) compa_mode_pane_g1

0x2564,	// (0x00029c0c) compa_mode_pane_g2

0x256c,	// (0x00029c14) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x00037477) compa_mode_pane_g

0x2168,	// (0x00029810) main_comp_mode_itu_pane_cp

0x2170,	// (0x00029818) main_comp_mode_rocker_pane_cp

0x2178,	// (0x00029820) cell_cmode_itu_pane_cp_ParamLimits

0x2178,	// (0x00029820) cell_cmode_itu_pane_cp

0x218d,	// (0x00029835) cell_cmode_rocker_pane_cp_ParamLimits

0x218d,	// (0x00029835) cell_cmode_rocker_pane_cp

0xba63,	// (0x0003310b) bg_button_pane_cp06_cp_ParamLimits

0xba63,	// (0x0003310b) bg_button_pane_cp06_cp

0xe9b0,	// (0x00036058) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9b0,	// (0x00036058) cell_cmode_rocker_pane_g1_cp

0xe747,	// (0x00035def) cell_cmode_rocker_pane_g2_cp

0xb3fe,	// (0x00032aa6) bg_button_pane_cp07_cp

0x219f,	// (0x00029847) cell_cmode_itu_pane_g1_cp

0x21a8,	// (0x00029850) cell_cmode_itu_pane_t1_cp

0x21a8,	// (0x00029850) cell_cmode_itu_pane_t2_cp

0xa011,	// (0x000316b9) settings_code_pane_cp2

0xb46e,	// (0x00032b16) bg_popup_window_pane_cp3_ParamLimits

0xb76f,	// (0x00032e17) heading_pane_cp3_ParamLimits

0xb77b,	// (0x00032e23) listscroll_popup_graphic_pane_ParamLimits

0x459f,	// (0x0002bc47) fep_hwr_aid_pane_ParamLimits

0x4d34,	// (0x0002c3dc) aid_touch_sctrl_top_ParamLimits

0x4d4f,	// (0x0002c3f7) sctrl_sk_top_pane_g1_ParamLimits

0x47f6,	// (0x0002be9e) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x000373ad) sctrl_sk_top_pane_g_ParamLimits

0x4d5c,	// (0x0002c404) sctrl_sk_top_pane_t1_ParamLimits

0x4d34,	// (0x0002c3dc) aid_touch_sctrl_bottom_ParamLimits

0x4d5c,	// (0x0002c404) sctrl_sk_bottom_pane_t1_ParamLimits

0x183e,	// (0x00028ee6) aid_area_touch_clock

0xb108,	// (0x000327b0) aid_vkb2_area_top_pane_cell_ParamLimits

0xb108,	// (0x000327b0) aid_vkb2_area_top_pane_cell

0xb1b3,	// (0x0003285b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb1b3,	// (0x0003285b) aid_vkb2_area_bottom_pane_cell

0x1d54,	// (0x000293fc) popup_char_count_window

0x2574,	// (0x00029c1c) popup_char_count_window_g1

0x257d,	// (0x00029c25) popup_char_count_window_g2

0x2586,	// (0x00029c2e) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0003747e) popup_char_count_window_g

0x258f,	// (0x00029c37) popup_char_count_window_t1

0x528f,	// (0x0002c937) popup_fep_char_preview_window_ParamLimits

0x528f,	// (0x0002c937) popup_fep_char_preview_window

0xb128,	// (0x000327d0) vkb2_top_candi_pane_ParamLimits

0xb128,	// (0x000327d0) vkb2_top_candi_pane

0x21b6,	// (0x0002985e) cell_vkb2_top_candi_pane_ParamLimits

0x21b6,	// (0x0002985e) cell_vkb2_top_candi_pane

0x5b9e,	// (0x0002d246) bg_popup_fep_char_preview_window_ParamLimits

0x5b9e,	// (0x0002d246) bg_popup_fep_char_preview_window

0x5bac,	// (0x0002d254) popup_fep_char_preview_window_t1_ParamLimits

0x5bac,	// (0x0002d254) popup_fep_char_preview_window_t1

0x25ad,	// (0x00029c55) bg_popup_fep_char_preview_window_g1

0x25a5,	// (0x00029c4d) bg_popup_fep_char_preview_window_g2

0x259d,	// (0x00029c45) bg_popup_fep_char_preview_window_g3

0x25cd,	// (0x00029c75) bg_popup_fep_char_preview_window_g4

0x25c5,	// (0x00029c6d) bg_popup_fep_char_preview_window_g5

0x5be6,	// (0x0002d28e) bg_popup_fep_char_preview_window_g6

0x25bd,	// (0x00029c65) bg_popup_fep_char_preview_window_g7

0x25b5,	// (0x00029c5d) bg_popup_fep_char_preview_window_g8

0x25d5,	// (0x00029c7d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x00037485) bg_popup_fep_char_preview_window_g

0x47f6,	// (0x0002be9e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x47f6,	// (0x0002be9e) cell_vkb2_top_candi_pane_g1

0x4804,	// (0x0002beac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4804,	// (0x0002beac) cell_vkb2_top_candi_pane_g2

0x25dd,	// (0x00029c85) cell_vkb2_top_candi_pane_g3_ParamLimits

0x25dd,	// (0x00029c85) cell_vkb2_top_candi_pane_g3

0x5bee,	// (0x0002d296) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5bee,	// (0x0002d296) cell_vkb2_top_candi_pane_g4

0xedad,	// (0x00036455) cell_vkb2_top_candi_pane_g5_ParamLimits

0xedad,	// (0x00036455) cell_vkb2_top_candi_pane_g5

0x5c0f,	// (0x0002d2b7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5c0f,	// (0x0002d2b7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x00037498) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x00037498) cell_vkb2_top_candi_pane_g

0x5c1d,	// (0x0002d2c5) cell_vkb2_top_candi_pane_t1

0x43ae,	// (0x0002ba56) aid_size_touch_slider_mark_ParamLimits

0x43ae,	// (0x0002ba56) aid_size_touch_slider_mark

0x1ed6,	// (0x0002957e) grid_graphic2_catg_pane_ParamLimits

0x1ed6,	// (0x0002957e) grid_graphic2_catg_pane

0x1f92,	// (0x0002963a) popup_grid_graphic2_window_t1_ParamLimits

0x1f92,	// (0x0002963a) popup_grid_graphic2_window_t1

0x1fa8,	// (0x00029650) popup_grid_graphic2_window_t2_ParamLimits

0x1fa8,	// (0x00029650) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x00037453) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x00037453) popup_grid_graphic2_window_t

0xb5a1,	// (0x00032c49) bg_button_pane_cp05_ParamLimits

0x212e,	// (0x000297d6) cell_graphic2_control_pane_g1_ParamLimits

0x221c,	// (0x000298c4) cell_graphic2_catg_pane_ParamLimits

0x221c,	// (0x000298c4) cell_graphic2_catg_pane

0xb3fe,	// (0x00032aa6) bg_button_pane_cp12

0x222e,	// (0x000298d6) cell_graphic2_catg_pane_g1

0x180a,	// (0x00028eb2) cell_tb_ext_pane_t1_ParamLimits

0x5669,	// (0x0002cd11) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5669,	// (0x0002cd11) vkb2_top_cell_right_narrow_pane

0x5681,	// (0x0002cd29) vkb2_top_cell_right_wide_pane_ParamLimits

0x5681,	// (0x0002cd29) vkb2_top_cell_right_wide_pane

0x4591,	// (0x0002bc39) bg_vkb2_func_pane_ParamLimits

0x4591,	// (0x0002bc39) bg_vkb2_func_pane

0x56f2,	// (0x0002cd9a) vkb2_top_cell_left_pane_g1_ParamLimits

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp03

0x5750,	// (0x0002cdf8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc8ac,	// (0x00033f54) bg_vkb2_func_pane_g1

0xc8b4,	// (0x00033f5c) bg_vkb2_func_pane_g2

0xc8c4,	// (0x00033f6c) bg_vkb2_func_pane_g3

0xc8bc,	// (0x00033f64) bg_vkb2_func_pane_g4

0xc8cc,	// (0x00033f74) bg_vkb2_func_pane_g5

0xc8d4,	// (0x00033f7c) bg_vkb2_func_pane_g6

0xc8dc,	// (0x00033f84) bg_vkb2_func_pane_g7

0xc8e4,	// (0x00033f8c) bg_vkb2_func_pane_g8

0xc8a4,	// (0x00033f4c) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x000374a5) bg_vkb2_func_pane_g

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp01

0x56f2,	// (0x0002cd9a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x56f2,	// (0x0002cd9a) vkb2_top_cell_right_wide_pane_g1

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4591,	// (0x0002bc39) bg_vkb2_fuc_pane_cp02

0x5750,	// (0x0002cdf8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5750,	// (0x0002cdf8) vkb2_top_cell_right_narrow_pane_g1

0xa87b,	// (0x00031f23) aid_touch_area_decrease_ParamLimits

0xa87b,	// (0x00031f23) aid_touch_area_decrease

0xa8b5,	// (0x00031f5d) aid_touch_area_increase_ParamLimits

0xa8b5,	// (0x00031f5d) aid_touch_area_increase

0xa8dd,	// (0x00031f85) aid_touch_area_mute_ParamLimits

0xa8dd,	// (0x00031f85) aid_touch_area_mute

0xa90d,	// (0x00031fb5) aid_touch_area_slider_ParamLimits

0xa90d,	// (0x00031fb5) aid_touch_area_slider

0xa94d,	// (0x00031ff5) popup_slider_window_g4_ParamLimits

0xa94d,	// (0x00031ff5) popup_slider_window_g4

0xa975,	// (0x0003201d) popup_slider_window_g5_ParamLimits

0xa975,	// (0x0003201d) popup_slider_window_g5

0xa9a9,	// (0x00032051) popup_slider_window_g6_ParamLimits

0xa9a9,	// (0x00032051) popup_slider_window_g6

0x16c9,	// (0x00028d71) popup_slider_window_t2_ParamLimits

0x16c9,	// (0x00028d71) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x000373a1) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x000373a1) popup_slider_window_t

0xa9c5,	// (0x0003206d) slider_pane_ParamLimits

0xa9c5,	// (0x0003206d) slider_pane

0x25fe,	// (0x00029ca6) slider_pane_g1_ParamLimits

0x25fe,	// (0x00029ca6) slider_pane_g1

0x2612,	// (0x00029cba) slider_pane_g2_ParamLimits

0x2612,	// (0x00029cba) slider_pane_g2

0x2628,	// (0x00029cd0) slider_pane_g3_ParamLimits

0x2628,	// (0x00029cd0) slider_pane_g3

0x0003,

0xfe10,	// (0x000374b8) slider_pane_g_ParamLimits

0xfe10,	// (0x000374b8) slider_pane_g

0x95a4,	// (0x00030c4c) popup_tb_float_extension_window_ParamLimits

0x95a4,	// (0x00030c4c) popup_tb_float_extension_window

0x2654,	// (0x00029cfc) aid_size_cell_tb_float_ext

0xb3fe,	// (0x00032aa6) bg_popup_sub_window_cp28

0x2660,	// (0x00029d08) grid_tb_float_ext_pane

0x266a,	// (0x00029d12) cell_tb_float_ext_pane_ParamLimits

0x266a,	// (0x00029d12) cell_tb_float_ext_pane

0x2684,	// (0x00029d2c) cell_tb_float_ext_pane_g1

0x268d,	// (0x00029d35) grid_highlight_pane_cp12

0xa3b9,	// (0x00031a61) cell_last_hwr_side_pane_ParamLimits

0xa3b9,	// (0x00031a61) cell_last_hwr_side_pane

0xe747,	// (0x00035def) cell_last_hwr_side_pane_g1

0x2696,	// (0x00029d3e) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x000374c1) cell_last_hwr_side_pane_g

0xb28f,	// (0x00032937) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb28f,	// (0x00032937) vkb2_area_bottom_space_btn_pane

0x47f6,	// (0x0002be9e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1e3c,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5c1d,	// (0x0002d2c5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5c57,	// (0x0002d2ff) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5c57,	// (0x0002d2ff) vkb2_area_bottom_space_btn_pane_g1

0x5c91,	// (0x0002d339) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5c91,	// (0x0002d339) vkb2_area_bottom_space_btn_pane_g2

0x5cc7,	// (0x0002d36f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5cc7,	// (0x0002d36f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x000374c6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x000374c6) vkb2_area_bottom_space_btn_pane_g

0x4654,	// (0x0002bcfc) cel_fep_hwr_func_pane_ParamLimits

0x4654,	// (0x0002bcfc) cel_fep_hwr_func_pane

0xa38e,	// (0x00031a36) cell_hwr_side_button_pane_ParamLimits

0xa38e,	// (0x00031a36) cell_hwr_side_button_pane

0x183e,	// (0x00028ee6) aid_area_touch_clock_ParamLimits

0xb5a1,	// (0x00032c49) bg_uniindi_top_pane_ParamLimits

0x1850,	// (0x00028ef8) uniindi_top_pane_g1_ParamLimits

0x1866,	// (0x00028f0e) uniindi_top_pane_g2_ParamLimits

0x1872,	// (0x00028f1a) uniindi_top_pane_g3_ParamLimits

0x1883,	// (0x00028f2b) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x000373d9) uniindi_top_pane_g_ParamLimits

0x1890,	// (0x00028f38) uniindi_top_pane_t1_ParamLimits

0xb5a1,	// (0x00032c49) bg_vkb2_func_pane_cp01_ParamLimits

0xb5a1,	// (0x00032c49) bg_vkb2_func_pane_cp01

0x5d11,	// (0x0002d3b9) cel_fep_hwr_func_pane_g1_ParamLimits

0x5d11,	// (0x0002d3b9) cel_fep_hwr_func_pane_g1

0xb5a1,	// (0x00032c49) bg_vkb2_func_pane_cp02_ParamLimits

0xb5a1,	// (0x00032c49) bg_vkb2_func_pane_cp02

0x5d11,	// (0x0002d3b9) cell_hwr_side_button_pane_g1_ParamLimits

0x5d11,	// (0x0002d3b9) cell_hwr_side_button_pane_g1

0xc7a2,	// (0x00033e4a) status_pane_g4_ParamLimits

0xc7a2,	// (0x00033e4a) status_pane_g4

0xc7ba,	// (0x00033e62) status_pane_t1

0xe5d7,	// (0x00035c7f) form2_midp_gauge_slider_cont_pane

0xe5df,	// (0x00035c87) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa2c9,	// (0x00031971) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa2dd,	// (0x00031985) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x000371a0) form2_midp_gauge_slider_pane_t_ParamLimits

0xe5f1,	// (0x00035c99) form2_midp_slider_pane_ParamLimits

0x524f,	// (0x0002c8f7) aid_size_cell_func_vkb2_ParamLimits

0x524f,	// (0x0002c8f7) aid_size_cell_func_vkb2

0x2640,	// (0x00029ce8) slider_pane_g4_ParamLimits

0x2640,	// (0x00029ce8) slider_pane_g4

0xb30a,	// (0x000329b2) form2_midp_gauge_slider_pane_t2_cp01

0xb31a,	// (0x000329c2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb31a,	// (0x000329c2) form2_midp_gauge_slider_pane_t3_cp01

0x5d4a,	// (0x0002d3f2) form2_midp_slider_pane_cp01

0xb3fe,	// (0x00032aa6) navi_smil_pane

0x5d75,	// (0x0002d41d) navi_smil_pane_g1

0x5d7d,	// (0x0002d425) navi_smil_pane_t1

0x5d53,	// (0x0002d3fb) form2_midp_slider_pane_g1

0x5d5c,	// (0x0002d404) form2_midp_slider_pane_g2

0x5d64,	// (0x0002d40c) form2_midp_slider_pane_g3

0x5d53,	// (0x0002d3fb) form2_midp_slider_pane_g4

0x2266,	// (0x0002990e) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x000374cf) form2_midp_slider_pane_g

0x5d01,	// (0x0002d3a9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5d01,	// (0x0002d3a9) vkb2_area_bottom_space_btn_pane_g4

0x9787,	// (0x00030e2f) lc0_navi_pane_ParamLimits

0x9787,	// (0x00030e2f) lc0_navi_pane

0x97f1,	// (0x00030e99) lc0_stat_indi_pane_ParamLimits

0x97f1,	// (0x00030e99) lc0_stat_indi_pane

0x9806,	// (0x00030eae) ls0_title_pane_ParamLimits

0x9806,	// (0x00030eae) ls0_title_pane

0xba63,	// (0x0003310b) bg_popup_sub_pane_cp14_ParamLimits

0x1825,	// (0x00028ecd) list_uniindi_pane_ParamLimits

0x1831,	// (0x00028ed9) uniindi_top_pane_ParamLimits

0x18cc,	// (0x00028f74) list_single_uniindi_pane_g1_ParamLimits

0x18df,	// (0x00028f87) list_single_uniindi_pane_t1_ParamLimits

0xb339,	// (0x000329e1) lc0_stat_clock_pane_ParamLimits

0xb339,	// (0x000329e1) lc0_stat_clock_pane

0x228b,	// (0x00029933) lc0_stat_indi_pane_g1_ParamLimits

0x228b,	// (0x00029933) lc0_stat_indi_pane_g1

0x227e,	// (0x00029926) lc0_stat_indi_pane_g2_ParamLimits

0x227e,	// (0x00029926) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x000374da) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x000374da) lc0_stat_indi_pane_g

0xb346,	// (0x000329ee) lc0_uni_indicator_pane_ParamLimits

0xb346,	// (0x000329ee) lc0_uni_indicator_pane

0x5da5,	// (0x0002d44d) ls0_title_pane_g1_ParamLimits

0x5da5,	// (0x0002d44d) ls0_title_pane_g1

0x22a5,	// (0x0002994d) ls0_title_pane_t1_ParamLimits

0x22a5,	// (0x0002994d) ls0_title_pane_t1

0xb353,	// (0x000329fb) lc0_uni_indicator_pane_g1_ParamLimits

0xb353,	// (0x000329fb) lc0_uni_indicator_pane_g1

0x5dcf,	// (0x0002d477) lc0_stat_clock_pane_t1

0x325a,	// (0x0002a902) main_ai5_pane

0x5ddd,	// (0x0002d485) ai5_sk_pane_ParamLimits

0x5ddd,	// (0x0002d485) ai5_sk_pane

0x2302,	// (0x000299aa) cell_ai5_widget_pane_ParamLimits

0x2302,	// (0x000299aa) cell_ai5_widget_pane

0x5dea,	// (0x0002d492) aid_size_cell_widget_grid

0x5e00,	// (0x0002d4a8) bg_ai5_widget_pane_ParamLimits

0x5e00,	// (0x0002d4a8) bg_ai5_widget_pane

0x5e6a,	// (0x0002d512) cell_ai5_widget_pane_g2

0x5e7a,	// (0x0002d522) cell_ai5_widget_pane_g3

0x5e99,	// (0x0002d541) cell_ai5_widget_pane_g4

0x5ea5,	// (0x0002d54d) cell_ai5_widget_pane_g5

0x5eb1,	// (0x0002d559) cell_ai5_widget_pane_g6

0x5ebd,	// (0x0002d565) cell_ai5_widget_pane_g7

0x5f05,	// (0x0002d5ad) cell_ai5_widget_pane_t1_ParamLimits

0x5f05,	// (0x0002d5ad) cell_ai5_widget_pane_t1

0x5f22,	// (0x0002d5ca) cell_ai5_widget_pane_t2_ParamLimits

0x5f22,	// (0x0002d5ca) cell_ai5_widget_pane_t2

0x5f3a,	// (0x0002d5e2) cell_ai5_widget_pane_t3_ParamLimits

0x5f3a,	// (0x0002d5e2) cell_ai5_widget_pane_t3

0x5f52,	// (0x0002d5fa) cell_ai5_widget_pane_t4_ParamLimits

0x5f52,	// (0x0002d5fa) cell_ai5_widget_pane_t4

0x5f6c,	// (0x0002d614) cell_ai5_widget_pane_t5_ParamLimits

0x5f6c,	// (0x0002d614) cell_ai5_widget_pane_t5

0x5f8b,	// (0x0002d633) cell_ai5_widget_pane_t6_ParamLimits

0x5f8b,	// (0x0002d633) cell_ai5_widget_pane_t6

0x5f9d,	// (0x0002d645) cell_ai5_widget_pane_t7_ParamLimits

0x5f9d,	// (0x0002d645) cell_ai5_widget_pane_t7

0x5fb6,	// (0x0002d65e) cell_ai5_widget_pane_t8_ParamLimits

0x5fb6,	// (0x0002d65e) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x000374f4) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x000374f4) cell_ai5_widget_pane_t

0x6002,	// (0x0002d6aa) grid_ai5_widget_pane

0xba63,	// (0x0003310b) highlight_cell_ai5_widget_pane_ParamLimits

0xba63,	// (0x0003310b) highlight_cell_ai5_widget_pane

0x236d,	// (0x00029a15) ai5_sk_left_pane

0x2377,	// (0x00029a1f) ai5_sk_middle_pane

0x2381,	// (0x00029a29) ai5_sk_right_pane

0x6016,	// (0x0002d6be) bg_ai5_widget_pane_g1_ParamLimits

0x6016,	// (0x0002d6be) bg_ai5_widget_pane_g1

0x6022,	// (0x0002d6ca) bg_ai5_widget_pane_g2_ParamLimits

0x6022,	// (0x0002d6ca) bg_ai5_widget_pane_g2

0x602e,	// (0x0002d6d6) bg_ai5_widget_pane_g3_ParamLimits

0x602e,	// (0x0002d6d6) bg_ai5_widget_pane_g3

0x603a,	// (0x0002d6e2) bg_ai5_widget_pane_g4_ParamLimits

0x603a,	// (0x0002d6e2) bg_ai5_widget_pane_g4

0x6046,	// (0x0002d6ee) bg_ai5_widget_pane_g5_ParamLimits

0x6046,	// (0x0002d6ee) bg_ai5_widget_pane_g5

0x6052,	// (0x0002d6fa) bg_ai5_widget_pane_g6_ParamLimits

0x6052,	// (0x0002d6fa) bg_ai5_widget_pane_g6

0x605e,	// (0x0002d706) bg_ai5_widget_pane_g7_ParamLimits

0x605e,	// (0x0002d706) bg_ai5_widget_pane_g7

0x606a,	// (0x0002d712) bg_ai5_widget_pane_g8_ParamLimits

0x606a,	// (0x0002d712) bg_ai5_widget_pane_g8

0x6076,	// (0x0002d71e) bg_ai5_widget_pane_g9_ParamLimits

0x6076,	// (0x0002d71e) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x00037509) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x00037509) bg_ai5_widget_pane_g

0x60a9,	// (0x0002d751) cell_shortcut_ai5_widget_pane_ParamLimits

0x60a9,	// (0x0002d751) cell_shortcut_ai5_widget_pane

0xc458,	// (0x00033b00) bg_cell_shortcut_ai5_widget_pane

0x60ba,	// (0x0002d762) cell_grid_ai5_widget_pane_g1

0x60c3,	// (0x0002d76b) highlight_cell_shortcut_ai5_widget_pane

0xc8ac,	// (0x00033f54) ai5_sk_left_pane_g1

0x60cb,	// (0x0002d773) ai5_sk_left_pane_g2

0x60d3,	// (0x0002d77b) ai5_sk_left_pane_g3

0x60db,	// (0x0002d783) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0003751c) ai5_sk_left_pane_g

0x60e3,	// (0x0002d78b) ai5_sk_left_pane_t1

0xc8b4,	// (0x00033f5c) ai5_sk_right_pane_g1

0x60f1,	// (0x0002d799) ai5_sk_right_pane_g2

0x60f9,	// (0x0002d7a1) ai5_sk_right_pane_g3

0x6101,	// (0x0002d7a9) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x00037525) ai5_sk_right_pane_g

0x6109,	// (0x0002d7b1) ai5_sk_right_pane_t1

0xc8b4,	// (0x00033f5c) ai5_sk_middle_pane_g1

0xc8ac,	// (0x00033f54) ai5_sk_middle_pane_g2

0xc8cc,	// (0x00033f74) ai5_sk_middle_pane_g3

0x60f9,	// (0x0002d7a1) ai5_sk_middle_pane_g4

0x60d3,	// (0x0002d77b) ai5_sk_middle_pane_g5

0x6117,	// (0x0002d7bf) ai5_sk_middle_pane_g6

0x238b,	// (0x00029a33) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x0003752e) ai5_sk_middle_pane_g

0x9673,	// (0x00030d1b) aid_touch_area_size_lc0_ParamLimits

0x9673,	// (0x00030d1b) aid_touch_area_size_lc0

0x4825,	// (0x0002becd) cell_hwr_candidate_pane_t1_ParamLimits

0xc6c4,	// (0x00033d6c) aid_touch_navi_pane

0x98f9,	// (0x00030fa1) status_dt_navi_pane_ParamLimits

0x98f9,	// (0x00030fa1) status_dt_navi_pane

0x9911,	// (0x00030fb9) status_dt_sta_pane_ParamLimits

0x9911,	// (0x00030fb9) status_dt_sta_pane

0x2393,	// (0x00029a3b) dt_sta_controll_pane

0x23a0,	// (0x00029a48) dt_sta_indi_pane

0x23ad,	// (0x00029a55) dt_sta_title_pane

0xb5a1,	// (0x00032c49) bg_dt_sta_indi_pane_ParamLimits

0xb5a1,	// (0x00032c49) bg_dt_sta_indi_pane

0x611f,	// (0x0002d7c7) dt_sta_battery_pane

0x6127,	// (0x0002d7cf) dt_sta_indi_pane_g1

0x6130,	// (0x0002d7d8) dt_sta_indi_pane_g2

0x6139,	// (0x0002d7e1) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x0003753d) dt_sta_indi_pane_g

0x6142,	// (0x0002d7ea) dt_sta_signal_pane

0xba63,	// (0x0003310b) bg_dt_sta_title_pane_ParamLimits

0xba63,	// (0x0003310b) bg_dt_sta_title_pane

0xd524,	// (0x00034bcc) dt_sta_title_pane_g1

0x614b,	// (0x0002d7f3) dt_sta_title_pane_t1_ParamLimits

0x614b,	// (0x0002d7f3) dt_sta_title_pane_t1

0xb3fe,	// (0x00032aa6) bg_dt_sta_control_pane

0x6160,	// (0x0002d808) dt_sta_controll_pane_g1

0x6169,	// (0x0002d811) bg_dt_sta_title_pane_g1

0x6172,	// (0x0002d81a) bg_dt_sta_title_pane_g2

0x617b,	// (0x0002d823) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x00037544) bg_dt_sta_title_pane_g

0xe747,	// (0x00035def) bg_dt_sta_indi_pane_g1

0x6184,	// (0x0002d82c) dt_sta_signal_pane_g1

0x618c,	// (0x0002d834) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0003754b) dt_sta_signal_pane_g

0x6194,	// (0x0002d83c) dt_sta_battery_pane_g1

0x619d,	// (0x0002d845) dt_sta_battery_pane_t1

0xe747,	// (0x00035def) bg_dt_sta_control_pane_g1

0xc049,	// (0x000336f1) fep_china_uni_eep_pane

0xc051,	// (0x000336f9) fep_china_uni_entry_pane_ParamLimits

0xc061,	// (0x00033709) popup_fep_china_uni_window_g1_ParamLimits

0xc071,	// (0x00033719) popup_fep_china_uni_window_g2_ParamLimits

0xc071,	// (0x00033719) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00036dcb) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00036dcb) popup_fep_china_uni_window_g

0x61ac,	// (0x0002d854) fep_china_uni_eep_pane_g1

0x61b4,	// (0x0002d85c) fep_china_uni_eep_pane_t1

0x5d6c,	// (0x0002d414) aid_touch_area_size_smil_player

0xc775,	// (0x00033e1d) lc0_clock_pane

0xc7ae,	// (0x00033e56) status_pane_g5_ParamLimits

0xc7ae,	// (0x00033e56) status_pane_g5

0x9138,	// (0x000307e0) popup_keymap_window

0xc78e,	// (0x00033e36) status_icon_pane

0x5e7a,	// (0x0002d522) cell_ai5_widget_pane_g3_ParamLimits

0x5e99,	// (0x0002d541) cell_ai5_widget_pane_g4_ParamLimits

0x5ea5,	// (0x0002d54d) cell_ai5_widget_pane_g5_ParamLimits

0x5ec9,	// (0x0002d571) cell_ai5_widget_pane_g8_ParamLimits

0x5ec9,	// (0x0002d571) cell_ai5_widget_pane_g8

0x5edd,	// (0x0002d585) cell_ai5_widget_pane_g9_ParamLimits

0x5edd,	// (0x0002d585) cell_ai5_widget_pane_g9

0x5ef1,	// (0x0002d599) cell_ai5_widget_pane_g10_ParamLimits

0x5ef1,	// (0x0002d599) cell_ai5_widget_pane_g10

0x61c3,	// (0x0002d86b) status_icon_pane_g1

0xb3fe,	// (0x00032aa6) bg_popup_sub_pane_cp13

0x61cb,	// (0x0002d873) popup_keymap_window_t1

0x8e6e,	// (0x00030516) control_pane_g6_ParamLimits

0x8e6e,	// (0x00030516) control_pane_g6

0x8e7b,	// (0x00030523) control_pane_g7_ParamLimits

0x8e7b,	// (0x00030523) control_pane_g7

0x8e88,	// (0x00030530) control_pane_g8_ParamLimits

0x8e88,	// (0x00030530) control_pane_g8

0x2393,	// (0x00029a3b) dt_sta_controll_pane_ParamLimits

0x23a0,	// (0x00029a48) dt_sta_indi_pane_ParamLimits

0x23ad,	// (0x00029a55) dt_sta_title_pane_ParamLimits

0xb9a5,	// (0x0003304d) aid_size_touch_scroll_bar_cale

0x3333,	// (0x0002a9db) popup_discreet_window_ParamLimits

0x3333,	// (0x0002a9db) popup_discreet_window

0x86ae,	// (0x0002fd56) popup_sk_window

0xce79,	// (0x00034521) bg_popup_sub_pane_cp28_ParamLimits

0xce79,	// (0x00034521) bg_popup_sub_pane_cp28

0x61d9,	// (0x0002d881) popup_discreet_window_g1_ParamLimits

0x61d9,	// (0x0002d881) popup_discreet_window_g1

0x61f9,	// (0x0002d8a1) popup_discreet_window_t1_ParamLimits

0x61f9,	// (0x0002d8a1) popup_discreet_window_t1

0x6217,	// (0x0002d8bf) popup_discreet_window_t2_ParamLimits

0x6217,	// (0x0002d8bf) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x00037550) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x00037550) popup_discreet_window_t

0x6269,	// (0x0002d911) popup_sk_window_g1

0x6273,	// (0x0002d91b) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x00037557) popup_sk_window_g

0x627d,	// (0x0002d925) popup_sk_window_t1

0x628b,	// (0x0002d933) popup_sk_window_t1_copy1

0x5e6a,	// (0x0002d512) cell_ai5_widget_pane_g2_ParamLimits

0x5fc8,	// (0x0002d670) cell_ai5_widget_pane_t9_ParamLimits

0x5fc8,	// (0x0002d670) cell_ai5_widget_pane_t9

0xb3fe,	// (0x00032aa6) main_fep_fshwr2_pane

0xb382,	// (0x00032a2a) aid_fshwr2_btn_pane

0xb391,	// (0x00032a39) aid_fshwr2_syb_pane

0xb3a3,	// (0x00032a4b) aid_fshwr2_txt_pane

0xb3b2,	// (0x00032a5a) fshwr2_func_candi_pane

0xb3c3,	// (0x00032a6b) fshwr2_hwr_syb_pane

0xb3de,	// (0x00032a86) fshwr2_icf_pane

0xb3fe,	// (0x00032aa6) fshwr2_icf_bg_pane

0x2433,	// (0x00029adb) fshwr2_icf_pane_t1_ParamLimits

0x2433,	// (0x00029adb) fshwr2_icf_pane_t1

0xe747,	// (0x00035def) fshwr2_func_candi_pane_g1

0x6317,	// (0x0002d9bf) fshwr2_func_candi_row_pane_ParamLimits

0x6317,	// (0x0002d9bf) fshwr2_func_candi_row_pane

0x244d,	// (0x00029af5) cell_fshwr2_syb_pane_ParamLimits

0x244d,	// (0x00029af5) cell_fshwr2_syb_pane

0xe9b0,	// (0x00036058) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9b0,	// (0x00036058) fshwr2_hwr_syb_pane_g1

0xb3fe,	// (0x00032aa6) bg_popup_call_pane_cp01

0x6328,	// (0x0002d9d0) fshwr2_func_candi_cell_pane_ParamLimits

0x6328,	// (0x0002d9d0) fshwr2_func_candi_cell_pane

0x6359,	// (0x0002da01) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6359,	// (0x0002da01) fshwr2_func_candi_cell_bg_pane

0x6373,	// (0x0002da1b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6373,	// (0x0002da1b) fshwr2_func_candi_cell_pane_g1

0x6393,	// (0x0002da3b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6393,	// (0x0002da3b) fshwr2_func_candi_cell_pane_t1

0xb3fe,	// (0x00032aa6) bg_button_pane_cp08

0xc458,	// (0x00033b00) cell_fshwr2_syb_bg_pane

0x2467,	// (0x00029b0f) cell_fshwr2_syb_bg_pane_g1

0x63a6,	// (0x0002da4e) cell_fshwr2_syb_bg_pane_t1

0xba63,	// (0x0003310b) main_tmo_pane

0x9e57,	// (0x000314ff) uni_indicator_pane_g1_ParamLimits

0x9e6c,	// (0x00031514) uni_indicator_pane_g2_ParamLimits

0xd802,	// (0x00034eaa) uni_indicator_pane_g3_ParamLimits

0xd818,	// (0x00034ec0) uni_indicator_pane_g4_ParamLimits

0xd818,	// (0x00034ec0) uni_indicator_pane_g4

0xd82c,	// (0x00034ed4) uni_indicator_pane_g5_ParamLimits

0xd82c,	// (0x00034ed4) uni_indicator_pane_g5

0xd840,	// (0x00034ee8) uni_indicator_pane_g6_ParamLimits

0xd840,	// (0x00034ee8) uni_indicator_pane_g6

0xf922,	// (0x00036fca) uni_indicator_pane_g_ParamLimits

0xa85d,	// (0x00031f05) popup_tmo_note_window_ParamLimits

0xa85d,	// (0x00031f05) popup_tmo_note_window

0x4dad,	// (0x0002c455) fshwr2_bg_pane

0x6384,	// (0x0002da2c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6384,	// (0x0002da2c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0003755c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0003755c) fshwr2_func_candi_cell_pane_g

0xe747,	// (0x00035def) bg_popup_window_pane_cp01

0x63b5,	// (0x0002da5d) bg_popup_window_pane_g1_cp01

0x63be,	// (0x0002da66) bg_popup_window_pane_cp22_ParamLimits

0x63be,	// (0x0002da66) bg_popup_window_pane_cp22

0x63cc,	// (0x0002da74) listscroll_tmo_link_pane_ParamLimits

0x63cc,	// (0x0002da74) listscroll_tmo_link_pane

0x640c,	// (0x0002dab4) popup_tmo_note_window_g1_ParamLimits

0x640c,	// (0x0002dab4) popup_tmo_note_window_g1

0x6419,	// (0x0002dac1) tmo_note_info_pane_ParamLimits

0x6419,	// (0x0002dac1) tmo_note_info_pane

0x246f,	// (0x00029b17) list_tmo_note_info_pane_g1_ParamLimits

0x246f,	// (0x00029b17) list_tmo_note_info_pane_g1

0x6433,	// (0x0002dadb) list_tmo_note_info_pane_g2_ParamLimits

0x6433,	// (0x0002dadb) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x00037561) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x00037561) list_tmo_note_info_pane_g

0x644f,	// (0x0002daf7) list_tmo_note_info_text_pane_ParamLimits

0x644f,	// (0x0002daf7) list_tmo_note_info_text_pane

0x6491,	// (0x0002db39) list_tmo_link_pane

0x649e,	// (0x0002db46) scroll_pane_cp20

0x64ab,	// (0x0002db53) list_single_tmo_link_pane_ParamLimits

0x64ab,	// (0x0002db53) list_single_tmo_link_pane

0x64bb,	// (0x0002db63) list_single_tmo_link_pane_t1

0x64c9,	// (0x0002db71) list_tmo_note_info_text_pane_t1_ParamLimits

0x64c9,	// (0x0002db71) list_tmo_note_info_text_pane_t1

0x8ac7,	// (0x0003016f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8ac7,	// (0x0003016f) aid_size_touch_scroll_bar_cp01

0x05c2,	// (0x00027c6a) aid_size_touch_slider_marker

0x869e,	// (0x0002fd46) popup_settings_window_ParamLimits

0x869e,	// (0x0002fd46) popup_settings_window

0x73df,	// (0x0002ea87) popup_candi_list_indi_window

0xc6c4,	// (0x00033d6c) aid_touch_navi_pane_ParamLimits

0x4d08,	// (0x0002c3b0) rs_clock_indi_pane

0x4d11,	// (0x0002c3b9) sctrl_sk_bottom_pane_ParamLimits

0x4d22,	// (0x0002c3ca) sctrl_sk_top_pane_ParamLimits

0x52a9,	// (0x0002c951) popup_fep_tooltip_window

0x5dea,	// (0x0002d492) aid_size_cell_widget_grid_ParamLimits

0x5e5e,	// (0x0002d506) cell_ai5_widget_pane_g1_ParamLimits

0x5e5e,	// (0x0002d506) cell_ai5_widget_pane_g1

0x5eb1,	// (0x0002d559) cell_ai5_widget_pane_g6_ParamLimits

0x5ebd,	// (0x0002d565) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x000374df) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x000374df) cell_ai5_widget_pane_g

0x5fec,	// (0x0002d694) cell_ai5_widget_pane_t10_ParamLimits

0x5fec,	// (0x0002d694) cell_ai5_widget_pane_t10

0x6002,	// (0x0002d6aa) grid_ai5_widget_pane_ParamLimits

0x6082,	// (0x0002d72a) cell_contacts_ai5_widget_pane_ParamLimits

0x6082,	// (0x0002d72a) cell_contacts_ai5_widget_pane

0x622c,	// (0x0002d8d4) popup_discreet_window_t3_ParamLimits

0x622c,	// (0x0002d8d4) popup_discreet_window_t3

0x6303,	// (0x0002d9ab) popup_fshwr2_char_preview_window_ParamLimits

0x6303,	// (0x0002d9ab) popup_fshwr2_char_preview_window

0x2486,	// (0x00029b2e) tmo_note_info_pane_t1

0x249b,	// (0x00029b43) tmo_note_info_pane_t2

0x24b4,	// (0x00029b5c) tmo_note_info_pane_t3

0x646d,	// (0x0002db15) tmo_note_info_pane_t4

0x647f,	// (0x0002db27) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x00037566) tmo_note_info_pane_t

0x6491,	// (0x0002db39) list_tmo_link_pane_ParamLimits

0x649e,	// (0x0002db46) scroll_pane_cp20_ParamLimits

0xb3fe,	// (0x00032aa6) bg_popup_fep_char_preview_window_cp01

0x64e2,	// (0x0002db8a) popup_fshwr2_char_preview_window_t1

0x64f0,	// (0x0002db98) popup_candi_list_indi_window_g1

0x64f9,	// (0x0002dba1) bg_cell_contacts_ai5_widget_pane

0x6505,	// (0x0002dbad) cell_contacts_ai5_widget_pane_g1

0x6518,	// (0x0002dbc0) cell_contacts_ai5_widget_pane_g2

0x6524,	// (0x0002dbcc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x00037571) cell_contacts_ai5_widget_pane_g

0x6536,	// (0x0002dbde) cell_contacts_ai5_widget_pane_t1

0xba63,	// (0x0003310b) highlight_cell_shortcut_ai5_widget_pane_cp01

0x65b0,	// (0x0002dc58) settings_container_pane

0xc458,	// (0x00033b00) listscroll_set_pane_copy1

0xe072,	// (0x0003571a) scroll_pane_cp121_copy1

0x65bc,	// (0x0002dc64) set_content_pane_copy1

0x65c4,	// (0x0002dc6c) aid_height_set_list_copy1_ParamLimits

0x65c4,	// (0x0002dc6c) aid_height_set_list_copy1

0xd893,	// (0x00034f3b) aid_size_parent_copy1_ParamLimits

0xd893,	// (0x00034f3b) aid_size_parent_copy1

0x65d0,	// (0x0002dc78) button_value_adjust_pane_cp6_copy1_ParamLimits

0x65d0,	// (0x0002dc78) button_value_adjust_pane_cp6_copy1

0xbbd3,	// (0x0003327b) list_highlight_pane_cp2_copy1_ParamLimits

0xbbd3,	// (0x0003327b) list_highlight_pane_cp2_copy1

0x65e4,	// (0x0002dc8c) list_set_pane_copy1_ParamLimits

0x65e4,	// (0x0002dc8c) list_set_pane_copy1

0x654b,	// (0x0002dbf3) main_pane_set_t1_copy1_ParamLimits

0x654b,	// (0x0002dbf3) main_pane_set_t1_copy1

0x6585,	// (0x0002dc2d) main_pane_set_t2_copy1_ParamLimits

0x6585,	// (0x0002dc2d) main_pane_set_t2_copy1

0x6691,	// (0x0002dd39) main_pane_set_t3_copy1

0x669f,	// (0x0002dd47) main_pane_set_t4_copy1

0x65a4,	// (0x0002dc4c) set_content_pane_g1_copy1_ParamLimits

0x65a4,	// (0x0002dc4c) set_content_pane_g1_copy1

0x66ad,	// (0x0002dd55) setting_code_pane_copy1

0x66b5,	// (0x0002dd5d) setting_slider_graphic_pane_copy1

0x66b5,	// (0x0002dd5d) setting_slider_pane_copy1

0x66b5,	// (0x0002dd5d) setting_text_pane_copy1

0x66b5,	// (0x0002dd5d) setting_volume_pane_copy1

0x66ad,	// (0x0002dd55) settings_code_pane_cp2_copy1

0x66bd,	// (0x0002dd65) settings_code_pane_cp_copy1_ParamLimits

0x66bd,	// (0x0002dd65) settings_code_pane_cp_copy1

0x66d1,	// (0x0002dd79) volume_set_pane_copy1

0x66d9,	// (0x0002dd81) volume_set_pane_g10_copy1

0x66e1,	// (0x0002dd89) volume_set_pane_g1_copy1

0x66e9,	// (0x0002dd91) volume_set_pane_g2_copy1

0x66f1,	// (0x0002dd99) volume_set_pane_g3_copy1

0x66f9,	// (0x0002dda1) volume_set_pane_g4_copy1

0x6701,	// (0x0002dda9) volume_set_pane_g5_copy1

0x6709,	// (0x0002ddb1) volume_set_pane_g6_copy1

0x6711,	// (0x0002ddb9) volume_set_pane_g7_copy1

0x6719,	// (0x0002ddc1) volume_set_pane_g8_copy1

0x6721,	// (0x0002ddc9) volume_set_pane_g9_copy1

0xb46e,	// (0x00032b16) bg_set_opt_pane_cp_copy1_ParamLimits

0xb46e,	// (0x00032b16) bg_set_opt_pane_cp_copy1

0x6729,	// (0x0002ddd1) setting_slider_pane_t1_copy1_ParamLimits

0x6729,	// (0x0002ddd1) setting_slider_pane_t1_copy1

0x6747,	// (0x0002ddef) setting_slider_pane_t2_copy1_ParamLimits

0x6747,	// (0x0002ddef) setting_slider_pane_t2_copy1

0x6761,	// (0x0002de09) setting_slider_pane_t3_copy1_ParamLimits

0x6761,	// (0x0002de09) setting_slider_pane_t3_copy1

0x6779,	// (0x0002de21) slider_set_pane_copy1_ParamLimits

0x6779,	// (0x0002de21) slider_set_pane_copy1

0xbaca,	// (0x00033172) set_opt_bg_pane_g1_copy2

0xbad2,	// (0x0003317a) set_opt_bg_pane_g2_copy2

0x678f,	// (0x0002de37) set_opt_bg_pane_g3_copy2

0xbae2,	// (0x0003318a) set_opt_bg_pane_g4_copy2

0xbaea,	// (0x00033192) set_opt_bg_pane_g5_copy2

0xbaf2,	// (0x0003319a) set_opt_bg_pane_g6_copy2

0x6799,	// (0x0002de41) set_opt_bg_pane_g7_copy2

0x67a1,	// (0x0002de49) set_opt_bg_pane_g8_copy2

0x67ab,	// (0x0002de53) set_opt_bg_pane_g9_copy2

0x67b5,	// (0x0002de5d) aid_size_touch_slider_mark_copy1_ParamLimits

0x67b5,	// (0x0002de5d) aid_size_touch_slider_mark_copy1

0x67c9,	// (0x0002de71) slider_set_pane_g1_copy1

0x67d2,	// (0x0002de7a) slider_set_pane_g2_copy1

0xe502,	// (0x00035baa) slider_set_pane_g3_copy1_ParamLimits

0xe502,	// (0x00035baa) slider_set_pane_g3_copy1

0xe516,	// (0x00035bbe) slider_set_pane_g4_copy1_ParamLimits

0xe516,	// (0x00035bbe) slider_set_pane_g4_copy1

0xe52e,	// (0x00035bd6) slider_set_pane_g5_copy1_ParamLimits

0xe52e,	// (0x00035bd6) slider_set_pane_g5_copy1

0xe502,	// (0x00035baa) slider_set_pane_g6_copy1_ParamLimits

0xe502,	// (0x00035baa) slider_set_pane_g6_copy1

0x67da,	// (0x0002de82) slider_set_pane_g7_copy1_ParamLimits

0x67da,	// (0x0002de82) slider_set_pane_g7_copy1

0xb412,	// (0x00032aba) bg_set_opt_pane_cp2_copy1

0x67f0,	// (0x0002de98) setting_slider_graphic_pane_g1_copy1

0x6b03,	// (0x0002e1ab) setting_slider_graphic_pane_t1_copy1

0x6b13,	// (0x0002e1bb) setting_slider_graphic_pane_t2_copy1

0x6b23,	// (0x0002e1cb) slider_set_pane_cp_copy1

0x6b33,	// (0x0002e1db) input_focus_pane_cp1_copy1

0x6b3c,	// (0x0002e1e4) list_set_text_pane_copy1

0x6b44,	// (0x0002e1ec) setting_text_pane_g1_copy1

0x7b8a,	// (0x0002f232) set_text_pane_t1_copy1

0x6b33,	// (0x0002e1db) input_focus_pane_cp2_copy1

0x6b44,	// (0x0002e1ec) setting_code_pane_g1_copy1

0x6b4d,	// (0x0002e1f5) setting_code_pane_t1_copy1

0xd87f,	// (0x00034f27) list_set_graphic_pane_copy1

0xb412,	// (0x00032aba) bg_set_opt_pane_cp4_copy1

0xc1dc,	// (0x00033884) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1dc,	// (0x00033884) list_set_graphic_pane_g1_copy1

0x6b5b,	// (0x0002e203) list_set_graphic_pane_g2_copy1

0xc1f4,	// (0x0003389c) list_set_graphic_pane_t1_copy1_ParamLimits

0xc1f4,	// (0x0003389c) list_set_graphic_pane_t1_copy1

0xe747,	// (0x00035def) rs_clock_indi_pane_g1

0x6b63,	// (0x0002e20b) rs_clock_indi_pane_t1

0x6b71,	// (0x0002e219) rs_indi_pane

0x6b79,	// (0x0002e221) rs_indi_pane_g1

0x6b82,	// (0x0002e22a) rs_indi_pane_g2

0x6b8b,	// (0x0002e233) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x00037578) rs_indi_pane_g

0xc458,	// (0x00033b00) bg_popup_preview_window_pane_cp03

0x6b94,	// (0x0002e23c) popup_fep_tooltip_window_t1

0xf104,	// (0x000367ac) popup_note2_window_g2_ParamLimits

0xf104,	// (0x000367ac) popup_note2_window_g2

0x0001,

0xfc70,	// (0x00037318) popup_note2_window_g_ParamLimits

0xfc70,	// (0x00037318) popup_note2_window_g

0x143f,	// (0x00028ae7) bg_popup_sub_pane_cp11_ParamLimits

0x144c,	// (0x00028af4) cell_ai3_links_pane_g1_ParamLimits

0x1463,	// (0x00028b0b) cell_ai3_links_pane_t1

0x7b8a,	// (0x0002f232) set_text_pane_t1_copy1_ParamLimits

0x8d3d,	// (0x000303e5) cell_graphic_popup_pane_cp2_ParamLimits

0x8d3d,	// (0x000303e5) cell_graphic_popup_pane_cp2

0x24c9,	// (0x00029b71) cell_graphic_popup_pane_g1_cp2

0xb7b8,	// (0x00032e60) cell_graphic_popup_pane_g2_cp2

0x6ba2,	// (0x0002e24a) cell_graphic_popup_pane_g3_cp2

0x6baa,	// (0x0002e252) cell_graphic_popup_pane_t2_cp2

0xb7c9,	// (0x00032e71) grid_highlight_pane_cp3_cp2

0xbd7d,	// (0x00033425) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba63,	// (0x0003310b) main_tmo_pane_ParamLimits

0xa851,	// (0x00031ef9) popup_tmo_big_image_note_window

0x5e4e,	// (0x0002d4f6) cell_ai5_widget_list_pane

0x5e56,	// (0x0002d4fe) cell_ai5_widget_lrg_icon_pane

0x2486,	// (0x00029b2e) tmo_note_info_pane_t1_ParamLimits

0x249b,	// (0x00029b43) tmo_note_info_pane_t2_ParamLimits

0x24b4,	// (0x00029b5c) tmo_note_info_pane_t3_ParamLimits

0x646d,	// (0x0002db15) tmo_note_info_pane_t4_ParamLimits

0x647f,	// (0x0002db27) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x00037566) tmo_note_info_pane_t_ParamLimits

0x65b0,	// (0x0002dc58) settings_container_pane_ParamLimits

0x6b2b,	// (0x0002e1d3) indicator_popup_pane_cp5

0x6b2b,	// (0x0002e1d3) indicator_popup_pane_cp6

0xd87f,	// (0x00034f27) list_set_graphic_pane_copy1_ParamLimits

0xb3fe,	// (0x00032aa6) bg_popup_window_pane_cp23

0x6bb8,	// (0x0002e260) popup_tmo_big_image_note_window_g1

0x6bc3,	// (0x0002e26b) popup_tmo_big_image_note_window_t1

0x6bd3,	// (0x0002e27b) popup_tmo_big_image_note_window_t2

0x6be3,	// (0x0002e28b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x0003757f) popup_tmo_big_image_note_window_t

0x6bf3,	// (0x0002e29b) cell_ai5_widget_lrg_icon_pane_g1

0x6bfb,	// (0x0002e2a3) cell_ai5_widget_lrg_icon_pane_t1

0x6c09,	// (0x0002e2b1) cell_ai5_widget_list_row_pane_ParamLimits

0x6c09,	// (0x0002e2b1) cell_ai5_widget_list_row_pane

0x6c22,	// (0x0002e2ca) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6c22,	// (0x0002e2ca) cell_ai5_widget_list_row_pane_g1

0x6c2f,	// (0x0002e2d7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6c2f,	// (0x0002e2d7) cell_ai5_widget_list_row_pane_t1

0x6c47,	// (0x0002e2ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6c47,	// (0x0002e2ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x00037586) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x00037586) cell_ai5_widget_list_row_pane_t

0x325a,	// (0x0002a902) main_fep_vtchi_ss_pane

0x6c7e,	// (0x0002e326) popup_fep_char_pre_window

0x6c86,	// (0x0002e32e) popup_fep_ituss_window

0x6ca7,	// (0x0002e34f) popup_fep_vkbss_window

0x6cc6,	// (0x0002e36e) grid_vkbss_keypad_pane_ParamLimits

0x6cc6,	// (0x0002e36e) grid_vkbss_keypad_pane

0x6cd6,	// (0x0002e37e) ituss_keypad_pane

0x6cf2,	// (0x0002e39a) aid_vkbss_key_offset_ParamLimits

0x6cf2,	// (0x0002e39a) aid_vkbss_key_offset

0x6cfe,	// (0x0002e3a6) cell_vkbss_key_pane_ParamLimits

0x6cfe,	// (0x0002e3a6) cell_vkbss_key_pane

0xc7d6,	// (0x00033e7e) bg_cell_vkbss_key_g1_ParamLimits

0xc7d6,	// (0x00033e7e) bg_cell_vkbss_key_g1

0x6d14,	// (0x0002e3bc) cell_vkbss_key_3p_pane_ParamLimits

0x6d14,	// (0x0002e3bc) cell_vkbss_key_3p_pane

0x6d2e,	// (0x0002e3d6) cell_vkbss_key_g1_ParamLimits

0x6d2e,	// (0x0002e3d6) cell_vkbss_key_g1

0x6d48,	// (0x0002e3f0) cell_vkbss_key_t1_ParamLimits

0x6d48,	// (0x0002e3f0) cell_vkbss_key_t1

0x6d73,	// (0x0002e41b) cell_ituss_key_pane_ParamLimits

0x6d73,	// (0x0002e41b) cell_ituss_key_pane

0x6d84,	// (0x0002e42c) bg_cell_ituss_key_g1_ParamLimits

0x6d84,	// (0x0002e42c) bg_cell_ituss_key_g1

0x6d90,	// (0x0002e438) cell_ituss_key_pane_g1_ParamLimits

0x6d90,	// (0x0002e438) cell_ituss_key_pane_g1

0x6da4,	// (0x0002e44c) cell_ituss_key_pane_g2_ParamLimits

0x6da4,	// (0x0002e44c) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0003758d) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0003758d) cell_ituss_key_pane_g

0x6dcf,	// (0x0002e477) cell_ituss_key_t1_ParamLimits

0x6dcf,	// (0x0002e477) cell_ituss_key_t1

0x6dfd,	// (0x0002e4a5) cell_ituss_key_t2_ParamLimits

0x6dfd,	// (0x0002e4a5) cell_ituss_key_t2

0x6e2e,	// (0x0002e4d6) cell_ituss_key_t3_ParamLimits

0x6e2e,	// (0x0002e4d6) cell_ituss_key_t3

0x6e5f,	// (0x0002e507) cell_ituss_key_t4_ParamLimits

0x6e5f,	// (0x0002e507) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x00037592) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00037592) cell_ituss_key_t

0x6e90,	// (0x0002e538) cell_vkbss_key_3p_pane_g1

0x6e98,	// (0x0002e540) cell_vkbss_key_3p_pane_g2

0x6ea0,	// (0x0002e548) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0003759b) cell_vkbss_key_3p_pane_g

0xb3fe,	// (0x00032aa6) bg_popup_fep_char_preview_window_cp02

0x6ea8,	// (0x0002e550) popup_fep_char_pre_window_t1

0x2363,	// (0x00029a0b) main_ai5_sk_pane

0x64f9,	// (0x0002dba1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6505,	// (0x0002dbad) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6518,	// (0x0002dbc0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6524,	// (0x0002dbcc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x00037571) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6536,	// (0x0002dbde) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba63,	// (0x0003310b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x24d1,	// (0x00029b79) main_ai5_sk_pane_g1

0xccb7,	// (0x0003435f) popup_query_code_window_g1

0x6c9c,	// (0x0002e344) popup_fep_vkb_icf_pane

0x6cb0,	// (0x0002e358) popup_fep_vtchi_icf_pane

0xba63,	// (0x0003310b) bg_icf_pane

0x6eb7,	// (0x0002e55f) list_vkb_icf_pane

0xba63,	// (0x0003310b) bg_icf_pane_cp01

0x6ec3,	// (0x0002e56b) vtchi_icf_list_pane

0x6ed4,	// (0x0002e57c) list_vkb_icf_pane_t1_ParamLimits

0x6ed4,	// (0x0002e57c) list_vkb_icf_pane_t1

0x6eee,	// (0x0002e596) vtchi_icf_list_pane_t1_ParamLimits

0x6eee,	// (0x0002e596) vtchi_icf_list_pane_t1

0x6c86,	// (0x0002e32e) popup_fep_ituss_window_ParamLimits

0x6cb0,	// (0x0002e358) popup_fep_vtchi_icf_pane_ParamLimits

0x6cd6,	// (0x0002e37e) ituss_keypad_pane_ParamLimits

0x6ce6,	// (0x0002e38e) ituss_sks_pane

0xba63,	// (0x0003310b) bg_icf_pane_ParamLimits

0x6c6f,	// (0x0002e317) icf_edit_indi_pane_ParamLimits

0x6c6f,	// (0x0002e317) icf_edit_indi_pane

0x6eb7,	// (0x0002e55f) list_vkb_icf_pane_ParamLimits

0xba63,	// (0x0003310b) bg_icf_pane_cp01_ParamLimits

0x6c6f,	// (0x0002e317) icf_edit_indi_pane_cp01_ParamLimits

0x6c6f,	// (0x0002e317) icf_edit_indi_pane_cp01

0x6ecb,	// (0x0002e573) vtchi_query_pane

0xe9b0,	// (0x00036058) icf_edit_indi_pane_g1_ParamLimits

0xe9b0,	// (0x00036058) icf_edit_indi_pane_g1

0x6f7f,	// (0x0002e627) icf_edit_indi_pane_g2_ParamLimits

0x6f7f,	// (0x0002e627) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x000375b3) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x000375b3) icf_edit_indi_pane_g

0x6f8e,	// (0x0002e636) icf_edit_indi_pane_t1

0x6f15,	// (0x0002e5bd) bg_input_focus_pane_cp042

0xb99c,	// (0x00033044) vtchi_button_pane

0x6f1e,	// (0x0002e5c6) vtchi_query_pane_t1

0x6f2c,	// (0x0002e5d4) vtchi_query_pane_t2

0x6f3a,	// (0x0002e5e2) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x000375a2) vtchi_query_pane_t

0xb3fe,	// (0x00032aa6) bg_button_pane_cp13

0x6f48,	// (0x0002e5f0) vtchi_button_pane_g1

0x6f50,	// (0x0002e5f8) ituss_sks_pane_g1

0x6f5b,	// (0x0002e603) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x000375a9) ituss_sks_pane_g

0x6f63,	// (0x0002e60b) ituss_sks_pane_t1

0x6f71,	// (0x0002e619) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x000375ae) ituss_sks_pane_t

0xe3b5,	// (0x00035a5d) indicator_nsta_pane_cp_g1

0xe3be,	// (0x00035a66) indicator_nsta_pane_cp_g2

0xe3c6,	// (0x00035a6e) indicator_nsta_pane_cp_g3

0xe3ce,	// (0x00035a76) indicator_nsta_pane_cp_g4

0xe3d6,	// (0x00035a7e) indicator_nsta_pane_cp_g5

0xe3de,	// (0x00035a86) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00037156) indicator_nsta_pane_cp_g

0x2110,	// (0x000297b8) cell_graphic2_pane_t2_ParamLimits

0x2110,	// (0x000297b8) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x00037468) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x00037468) cell_graphic2_pane_t

0x2146,	// (0x000297ee) cell_graphic2_control_pane_t1

0x8c6d,	// (0x00030315) signal_pane_g3_ParamLimits

0x8c6d,	// (0x00030315) signal_pane_g3

0x8c81,	// (0x00030329) signal_pane_g4_ParamLimits

0x8c81,	// (0x00030329) signal_pane_g4

0x6c59,	// (0x0002e301) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6c59,	// (0x0002e301) cell_ai5_widget_list_row_pane_t3

0x6dbd,	// (0x0002e465) cell_ituss_key_pane_t1_ParamLimits

0x6dbd,	// (0x0002e465) cell_ituss_key_pane_t1

0xc9f9,	// (0x000340a1) form_field_data_wide_pane_vc_t2_ParamLimits

0xc9f9,	// (0x000340a1) form_field_data_wide_pane_vc_t2

0xca0d,	// (0x000340b5) form_field_data_wide_pane_vc_t3_ParamLimits

0xca0d,	// (0x000340b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00036eb2) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00036eb2) form_field_data_wide_pane_vc_t

0xe0e2,	// (0x0003578a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe0e2,	// (0x0003578a) form_field_slider_wide_pane_vc_t3

0xe1bc,	// (0x00035864) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe1bc,	// (0x00035864) form_field_popup_wide_pane_vc_t2

0xe1d3,	// (0x0003587b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe1d3,	// (0x0003587b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x00037145) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x00037145) form_field_popup_wide_pane_vc_t

0xb382,	// (0x00032a2a) aid_fshwr2_btn_pane_ParamLimits

0xb391,	// (0x00032a39) aid_fshwr2_syb_pane_ParamLimits

0xb3a3,	// (0x00032a4b) aid_fshwr2_txt_pane_ParamLimits

0x4dad,	// (0x0002c455) fshwr2_bg_pane_ParamLimits

0xb3b2,	// (0x00032a5a) fshwr2_func_candi_pane_ParamLimits

0xb3c3,	// (0x00032a6b) fshwr2_hwr_syb_pane_ParamLimits

0xb3de,	// (0x00032a86) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
