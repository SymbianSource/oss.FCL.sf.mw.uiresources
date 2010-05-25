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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001ed16 };

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
0x645f,	// (0x00025175) Screen

0x646b,	// (0x00025181) application_window_ParamLimits

0x646b,	// (0x00025181) application_window

0x16f4,	// (0x0002040a) screen_g1

0x64c7,	// (0x000251dd) area_bottom_pane_ParamLimits

0x64c7,	// (0x000251dd) area_bottom_pane

0x6587,	// (0x0002529d) area_top_pane_ParamLimits

0x6587,	// (0x0002529d) area_top_pane

0x661b,	// (0x00025331) main_pane_ParamLimits

0x661b,	// (0x00025331) main_pane

0x16fe,	// (0x00020414) misc_graphics

0x84e5,	// (0x000271fb) battery_pane_ParamLimits

0x84e5,	// (0x000271fb) battery_pane

0xa562,	// (0x00029278) bg_status_flat_pane_g8

0xa56a,	// (0x00029280) bg_status_flat_pane_g9

0x85ad,	// (0x000272c3) context_pane_ParamLimits

0x85ad,	// (0x000272c3) context_pane

0x86c3,	// (0x000273d9) navi_pane_ParamLimits

0x86c3,	// (0x000273d9) navi_pane

0x8747,	// (0x0002745d) signal_pane_ParamLimits

0x8747,	// (0x0002745d) signal_pane

0x0008,

0xf86a,	// (0x0002e580) bg_status_flat_pane_g

0x9b6f,	// (0x00028885) status_pane_g1_ParamLimits

0x9b6f,	// (0x00028885) status_pane_g1

0x9b83,	// (0x00028899) status_pane_g2_ParamLimits

0x9b83,	// (0x00028899) status_pane_g2

0x9b8f,	// (0x000288a5) status_pane_g3_ParamLimits

0x9b8f,	// (0x000288a5) status_pane_g3

0x0004,

0xf796,	// (0x0002e4ac) status_pane_g_ParamLimits

0xf796,	// (0x0002e4ac) status_pane_g

0x9bc3,	// (0x000288d9) title_pane_ParamLimits

0x9bc3,	// (0x000288d9) title_pane

0x9c00,	// (0x00028916) uni_indicator_pane_ParamLimits

0x9c00,	// (0x00028916) uni_indicator_pane

0x7e66,	// (0x00026b7c) bg_list_pane_ParamLimits

0x7e66,	// (0x00026b7c) bg_list_pane

0x5a66,	// (0x0002477c) find_pane

0x7e86,	// (0x00026b9c) listscroll_app_pane_ParamLimits

0x7e86,	// (0x00026b9c) listscroll_app_pane

0x7e92,	// (0x00026ba8) listscroll_form_pane

0x5a6e,	// (0x00024784) listscroll_gen_pane_ParamLimits

0x5a6e,	// (0x00024784) listscroll_gen_pane

0x7e9a,	// (0x00026bb0) listscroll_set_pane

0x6ecc,	// (0x00025be2) main_idle_act_pane

0x794f,	// (0x00026665) main_idle_trad_pane

0x794f,	// (0x00026665) main_list_empty_pane

0x7eb4,	// (0x00026bca) main_midp_pane

0x7ec0,	// (0x00026bd6) main_pane_g1_ParamLimits

0x7ec0,	// (0x00026bd6) main_pane_g1

0x7ece,	// (0x00026be4) popup_ai_message_window_ParamLimits

0x7ece,	// (0x00026be4) popup_ai_message_window

0x7f72,	// (0x00026c88) popup_fep_china_uni_window_ParamLimits

0x7f72,	// (0x00026c88) popup_fep_china_uni_window

0x7fcc,	// (0x00026ce2) popup_fep_japan_candidate_window_ParamLimits

0x7fcc,	// (0x00026ce2) popup_fep_japan_candidate_window

0x7fea,	// (0x00026d00) popup_fep_japan_predictive_window_ParamLimits

0x7fea,	// (0x00026d00) popup_fep_japan_predictive_window

0x801a,	// (0x00026d30) popup_find_window

0x8027,	// (0x00026d3d) popup_grid_graphic_window_ParamLimits

0x8027,	// (0x00026d3d) popup_grid_graphic_window

0x8051,	// (0x00026d67) popup_large_graphic_colour_window

0x8077,	// (0x00026d8d) popup_menu_window_ParamLimits

0x8077,	// (0x00026d8d) popup_menu_window

0x8233,	// (0x00026f49) popup_note_image_window

0x821f,	// (0x00026f35) popup_note_wait_window_ParamLimits

0x821f,	// (0x00026f35) popup_note_wait_window

0x821f,	// (0x00026f35) popup_note_window_ParamLimits

0x821f,	// (0x00026f35) popup_note_window

0x8289,	// (0x00026f9f) popup_query_code_window_ParamLimits

0x8289,	// (0x00026f9f) popup_query_code_window

0x829d,	// (0x00026fb3) popup_query_data_code_window_ParamLimits

0x829d,	// (0x00026fb3) popup_query_data_code_window

0x82ba,	// (0x00026fd0) popup_query_data_window_ParamLimits

0x82ba,	// (0x00026fd0) popup_query_data_window

0x82d6,	// (0x00026fec) popup_query_sat_info_window_ParamLimits

0x82d6,	// (0x00026fec) popup_query_sat_info_window

0x830f,	// (0x00027025) popup_snote_single_graphic_window_ParamLimits

0x830f,	// (0x00027025) popup_snote_single_graphic_window

0x830f,	// (0x00027025) popup_snote_single_text_window_ParamLimits

0x830f,	// (0x00027025) popup_snote_single_text_window

0x8324,	// (0x0002703a) popup_sub_window_general

0x8454,	// (0x0002716a) popup_window_general_ParamLimits

0x8454,	// (0x0002716a) popup_window_general

0x8469,	// (0x0002717f) power_save_pane

0x7cbb,	// (0x000269d1) control_pane_g1_ParamLimits

0x7cbb,	// (0x000269d1) control_pane_g1

0x7ce2,	// (0x000269f8) control_pane_g2_ParamLimits

0x7ce2,	// (0x000269f8) control_pane_g2

0x7d09,	// (0x00026a1f) control_pane_g3_ParamLimits

0x7d09,	// (0x00026a1f) control_pane_g3

0x0007,

0xf77e,	// (0x0002e494) control_pane_g_ParamLimits

0xf77e,	// (0x0002e494) control_pane_g

0x7d61,	// (0x00026a77) control_pane_t1_ParamLimits

0x7d61,	// (0x00026a77) control_pane_t1

0x7db5,	// (0x00026acb) control_pane_t2_ParamLimits

0x7db5,	// (0x00026acb) control_pane_t2

0x0002,

0xf78f,	// (0x0002e4a5) control_pane_t_ParamLimits

0xf78f,	// (0x0002e4a5) control_pane_t

0x7be0,	// (0x000268f6) navi_navi_volume_pane_cp1

0x7be8,	// (0x000268fe) status_small_icon_pane

0x7bf0,	// (0x00026906) status_small_pane_g1_ParamLimits

0x7bf0,	// (0x00026906) status_small_pane_g1

0x7c24,	// (0x0002693a) status_small_pane_g2_ParamLimits

0x7c24,	// (0x0002693a) status_small_pane_g2

0x7c30,	// (0x00026946) status_small_pane_g3_ParamLimits

0x7c30,	// (0x00026946) status_small_pane_g3

0x7c3c,	// (0x00026952) status_small_pane_g4_ParamLimits

0x7c3c,	// (0x00026952) status_small_pane_g4

0x7c48,	// (0x0002695e) status_small_pane_g5_ParamLimits

0x7c48,	// (0x0002695e) status_small_pane_g5

0x7c56,	// (0x0002696c) status_small_pane_g6_ParamLimits

0x7c56,	// (0x0002696c) status_small_pane_g6

0x0007,

0xf76d,	// (0x0002e483) status_small_pane_g_ParamLimits

0xf76d,	// (0x0002e483) status_small_pane_g

0x7c85,	// (0x0002699b) status_small_pane_t1

0x7ca7,	// (0x000269bd) status_small_wait_pane_ParamLimits

0x7ca7,	// (0x000269bd) status_small_wait_pane

0x72a1,	// (0x00025fb7) aid_levels_signal_ParamLimits

0x72a1,	// (0x00025fb7) aid_levels_signal

0x72b3,	// (0x00025fc9) signal_pane_g1_ParamLimits

0x72b3,	// (0x00025fc9) signal_pane_g1

0x72c8,	// (0x00025fde) signal_pane_g2_ParamLimits

0x72c8,	// (0x00025fde) signal_pane_g2

0x0003,

0xf6fe,	// (0x0002e414) signal_pane_g_ParamLimits

0xf6fe,	// (0x0002e414) signal_pane_g

0x3b0d,	// (0x00022823) context_pane_g1

0x685c,	// (0x00025572) title_pane_g1

0x6886,	// (0x0002559c) title_pane_t1

0x1714,	// (0x0002042a) title_pane_t2

0x173a,	// (0x00020450) title_pane_t3

0x0002,

0xf557,	// (0x0002e26d) title_pane_t

0x9c18,	// (0x0002892e) aid_levels_battery_ParamLimits

0x9c18,	// (0x0002892e) aid_levels_battery

0x9c2c,	// (0x00028942) battery_pane_g1_ParamLimits

0x9c2c,	// (0x00028942) battery_pane_g1

0x9c42,	// (0x00028958) battery_pane_g2_ParamLimits

0x9c42,	// (0x00028958) battery_pane_g2

0x0001,

0xf7a1,	// (0x0002e4b7) battery_pane_g_ParamLimits

0xf7a1,	// (0x0002e4b7) battery_pane_g

0xae86,	// (0x00029b9c) uni_indicator_pane_g1

0xae99,	// (0x00029baf) uni_indicator_pane_g2

0xaeab,	// (0x00029bc1) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0002e628) uni_indicator_pane_g

0x77c1,	// (0x000264d7) navi_icon_pane_ParamLimits

0x77c1,	// (0x000264d7) navi_icon_pane

0x770b,	// (0x00026421) navi_midp_pane

0x77dd,	// (0x000264f3) navi_navi_pane

0x77e7,	// (0x000264fd) navi_text_pane_ParamLimits

0x77e7,	// (0x000264fd) navi_text_pane

0x16f4,	// (0x0002040a) status_small_wait_pane_g1

0x19a5,	// (0x000206bb) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0002e623) status_small_wait_pane_g

0xabad,	// (0x000298c3) navi_navi_icon_text_pane

0xabb5,	// (0x000298cb) navi_navi_pane_g1_ParamLimits

0xabb5,	// (0x000298cb) navi_navi_pane_g1

0xabc7,	// (0x000298dd) navi_navi_pane_g2_ParamLimits

0xabc7,	// (0x000298dd) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0002e5f1) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0002e5f1) navi_navi_pane_g

0xabd9,	// (0x000298ef) navi_navi_tabs_pane

0xabe2,	// (0x000298f8) navi_navi_text_pane

0xabad,	// (0x000298c3) navi_navi_volume_pane

0xab89,	// (0x0002989f) navi_text_pane_t1

0xab7d,	// (0x00029893) navi_icon_pane_g1

0xaad0,	// (0x000297e6) navi_navi_text_pane_t1

0x8a13,	// (0x00027729) navi_navi_volume_pane_g1

0x8a1b,	// (0x00027731) volume_small_pane

0xaa36,	// (0x0002974c) navi_navi_icon_text_pane_g1

0xaa3e,	// (0x00029754) navi_navi_icon_text_pane_t1

0x77dd,	// (0x000264f3) navi_tabs_2_long_pane

0x77dd,	// (0x000264f3) navi_tabs_2_pane

0x77dd,	// (0x000264f3) navi_tabs_3_long_pane

0x77dd,	// (0x000264f3) navi_tabs_3_pane

0x77dd,	// (0x000264f3) navi_tabs_4_pane

0x89f3,	// (0x00027709) tabs_2_active_pane_ParamLimits

0x89f3,	// (0x00027709) tabs_2_active_pane

0x8a03,	// (0x00027719) tabs_2_passive_pane_ParamLimits

0x8a03,	// (0x00027719) tabs_2_passive_pane

0x89c1,	// (0x000276d7) tabs_3_active_pane_ParamLimits

0x89c1,	// (0x000276d7) tabs_3_active_pane

0x89d1,	// (0x000276e7) tabs_3_passive_pane_ParamLimits

0x89d1,	// (0x000276e7) tabs_3_passive_pane

0x89e2,	// (0x000276f8) tabs_3_passive_pane_cp_ParamLimits

0x89e2,	// (0x000276f8) tabs_3_passive_pane_cp

0x897d,	// (0x00027693) tabs_4_active_pane_ParamLimits

0x897d,	// (0x00027693) tabs_4_active_pane

0x898e,	// (0x000276a4) tabs_4_passive_pane_ParamLimits

0x898e,	// (0x000276a4) tabs_4_passive_pane

0x899f,	// (0x000276b5) tabs_4_passive_pane_cp_ParamLimits

0x899f,	// (0x000276b5) tabs_4_passive_pane_cp

0x89b0,	// (0x000276c6) tabs_4_passive_pane_cp2_ParamLimits

0x89b0,	// (0x000276c6) tabs_4_passive_pane_cp2

0x8959,	// (0x0002766f) tabs_2_long_active_pane_ParamLimits

0x8959,	// (0x0002766f) tabs_2_long_active_pane

0x896b,	// (0x00027681) tabs_2_long_passive_pane_ParamLimits

0x896b,	// (0x00027681) tabs_2_long_passive_pane

0x8914,	// (0x0002762a) tabs_3_long_active_pane_ParamLimits

0x8914,	// (0x0002762a) tabs_3_long_active_pane

0x892d,	// (0x00027643) tabs_3_long_passive_pane_ParamLimits

0x892d,	// (0x00027643) tabs_3_long_passive_pane

0x8940,	// (0x00027656) tabs_3_long_passive_pane_cp_ParamLimits

0x8940,	// (0x00027656) tabs_3_long_passive_pane_cp

0x88ba,	// (0x000275d0) volume_small_pane_g1

0x88c3,	// (0x000275d9) volume_small_pane_g2

0x88cc,	// (0x000275e2) volume_small_pane_g3

0x88d5,	// (0x000275eb) volume_small_pane_g4

0x88de,	// (0x000275f4) volume_small_pane_g5

0x88e7,	// (0x000275fd) volume_small_pane_g6

0x88f0,	// (0x00027606) volume_small_pane_g7

0x88f9,	// (0x0002760f) volume_small_pane_g8

0x8902,	// (0x00027618) volume_small_pane_g9

0x890b,	// (0x00027621) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0002e5bd) volume_small_pane_g

0x175a,	// (0x00020470) bg_active_tab_pane_cp2_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp2

0x68ee,	// (0x00025604) tabs_3_active_pane_g1

0x68f6,	// (0x0002560c) tabs_3_active_pane_t1

0x175a,	// (0x00020470) bg_passive_tab_pane_cp2_ParamLimits

0x175a,	// (0x00020470) bg_passive_tab_pane_cp2

0x68ee,	// (0x00025604) tabs_3_passive_pane_g1

0x68f6,	// (0x0002560c) tabs_3_passive_pane_t1

0x175a,	// (0x00020470) bg_active_tab_pane_cp3_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp3

0x6908,	// (0x0002561e) tabs_4_active_pane_g1

0x6910,	// (0x00025626) tabs_4_active_pane_t1

0x175a,	// (0x00020470) bg_passive_tab_pane_cp3_ParamLimits

0x175a,	// (0x00020470) bg_passive_tab_pane_cp3

0x6908,	// (0x0002561e) tabs_4_1_passive_pane_g1

0x6910,	// (0x00025626) tabs_4_1_passive_pane_t1

0x7eb4,	// (0x00026bca) list_highlight_pane_cp2

0xb0ee,	// (0x00029e04) list_set_pane_ParamLimits

0xb0ee,	// (0x00029e04) list_set_pane

0xb190,	// (0x00029ea6) main_pane_set_t1_ParamLimits

0xb190,	// (0x00029ea6) main_pane_set_t1

0xb1b0,	// (0x00029ec6) main_pane_set_t2_ParamLimits

0xb1b0,	// (0x00029ec6) main_pane_set_t2

0xb1c4,	// (0x00029eda) main_pane_set_t3_ParamLimits

0xb1c4,	// (0x00029eda) main_pane_set_t3

0xb1d6,	// (0x00029eec) main_pane_set_t4_ParamLimits

0xb1d6,	// (0x00029eec) main_pane_set_t4

0x0003,

0xf977,	// (0x0002e68d) main_pane_set_t_ParamLimits

0xf977,	// (0x0002e68d) main_pane_set_t

0xb1e8,	// (0x00029efe) setting_code_pane

0xb1f4,	// (0x00029f0a) setting_slider_graphic_pane

0xb1f4,	// (0x00029f0a) setting_slider_pane

0xb1f4,	// (0x00029f0a) setting_text_pane

0xb1f4,	// (0x00029f0a) setting_volume_pane

0x6922,	// (0x00025638) volume_set_pane

0x175a,	// (0x00020470) bg_set_opt_pane_cp

0x692a,	// (0x00025640) setting_slider_pane_t1

0x6943,	// (0x00025659) setting_slider_pane_t2

0x695d,	// (0x00025673) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e274) setting_slider_pane_t

0x6975,	// (0x0002568b) slider_set_pane

0x16fe,	// (0x00020414) bg_set_opt_pane_cp2

0x1768,	// (0x0002047e) setting_slider_graphic_pane_g1

0x698b,	// (0x000256a1) setting_slider_graphic_pane_t1

0x699b,	// (0x000256b1) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e27b) setting_slider_graphic_pane_t

0x69ab,	// (0x000256c1) slider_set_pane_cp

0x16fe,	// (0x00020414) input_focus_pane_cp1

0xb0ad,	// (0x00029dc3) list_set_text_pane

0x16f4,	// (0x0002040a) setting_text_pane_g1

0x16fe,	// (0x00020414) input_focus_pane_cp2

0x16f4,	// (0x0002040a) setting_code_pane_g1

0x1771,	// (0x00020487) setting_code_pane_t1

0x5314,	// (0x0002402a) set_text_pane_t1_ParamLimits

0x5314,	// (0x0002402a) set_text_pane_t1

0x1c4a,	// (0x00020960) set_opt_bg_pane_g1

0x1c52,	// (0x00020968) set_opt_bg_pane_g2

0xb087,	// (0x00029d9d) set_opt_bg_pane_g3

0x1c62,	// (0x00020978) set_opt_bg_pane_g4

0x1c6a,	// (0x00020980) set_opt_bg_pane_g5

0x1c72,	// (0x00020988) set_opt_bg_pane_g6

0xb091,	// (0x00029da7) set_opt_bg_pane_g7

0xb099,	// (0x00029daf) set_opt_bg_pane_g8

0xb0a3,	// (0x00029db9) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0002e67a) set_opt_bg_pane_g

0xb07a,	// (0x00029d90) slider_set_pane_g1

0x8a88,	// (0x0002779e) slider_set_pane_g2

0x0006,

0xf955,	// (0x0002e66b) slider_set_pane_g

0x8a24,	// (0x0002773a) volume_set_pane_g1

0x8a2c,	// (0x00027742) volume_set_pane_g2

0x8a34,	// (0x0002774a) volume_set_pane_g3

0x8a3c,	// (0x00027752) volume_set_pane_g4

0x8a44,	// (0x0002775a) volume_set_pane_g5

0x8a4c,	// (0x00027762) volume_set_pane_g6

0x8a54,	// (0x0002776a) volume_set_pane_g7

0x8a5c,	// (0x00027772) volume_set_pane_g8

0x8a64,	// (0x0002777a) volume_set_pane_g9

0x8a6c,	// (0x00027782) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0002e643) volume_set_pane_g

0x69b3,	// (0x000256c9) indicator_pane_ParamLimits

0x69b3,	// (0x000256c9) indicator_pane

0x69bf,	// (0x000256d5) main_idle_pane_g2_ParamLimits

0x69bf,	// (0x000256d5) main_idle_pane_g2

0x69e7,	// (0x000256fd) main_pane_idle_g1_ParamLimits

0x69e7,	// (0x000256fd) main_pane_idle_g1

0x1799,	// (0x000204af) popup_clock_digital_analogue_window_ParamLimits

0x1799,	// (0x000204af) popup_clock_digital_analogue_window

0x69f4,	// (0x0002570a) soft_indicator_pane_ParamLimits

0x69f4,	// (0x0002570a) soft_indicator_pane

0x6a00,	// (0x00025716) wallpaper_pane_ParamLimits

0x6a00,	// (0x00025716) wallpaper_pane

0x16f4,	// (0x0002040a) wallpaper_pane_g1

0x6a0c,	// (0x00025722) indicator_pane_g1_ParamLimits

0x6a0c,	// (0x00025722) indicator_pane_g1

0xb4b1,	// (0x0002a1c7) navi_navi_icon_text_pane_srt_g1

0x17c7,	// (0x000204dd) soft_indicator_pane_t1

0x17e1,	// (0x000204f7) aid_ps_area_pane

0x6a18,	// (0x0002572e) aid_ps_clock_pane

0x17f2,	// (0x00020508) aid_ps_indicator_pane

0x17fe,	// (0x00020514) indicator_ps_pane_ParamLimits

0x17fe,	// (0x00020514) indicator_ps_pane

0x180d,	// (0x00020523) power_save_pane_g1_ParamLimits

0x180d,	// (0x00020523) power_save_pane_g1

0x1819,	// (0x0002052f) power_save_pane_g2_ParamLimits

0x1819,	// (0x0002052f) power_save_pane_g2

0x647b,	// (0x00025191) aid_navinavi_width_pane

0x17e1,	// (0x000204f7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e280) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e280) power_save_pane_g

0x1827,	// (0x0002053d) power_save_pane_t1_ParamLimits

0x1827,	// (0x0002053d) power_save_pane_t1

0x6a18,	// (0x0002572e) aid_ps_clock_pane_ParamLimits

0x17f2,	// (0x00020508) aid_ps_indicator_pane_ParamLimits

0x1839,	// (0x0002054f) power_save_pane_t4_ParamLimits

0x1839,	// (0x0002054f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e285) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e285) power_save_pane_t

0x1863,	// (0x00020579) power_save_t3_ParamLimits

0x1863,	// (0x00020579) power_save_t3

0x184e,	// (0x00020564) power_save_t2_ParamLimits

0x184e,	// (0x00020564) power_save_t2

0x1878,	// (0x0002058e) indicator_ps_pane_g1

0x6a26,	// (0x0002573c) ai_gene_pane_ParamLimits

0x6a26,	// (0x0002573c) ai_gene_pane

0x6a32,	// (0x00025748) ai_links_pane_ParamLimits

0x6a32,	// (0x00025748) ai_links_pane

0x6a3e,	// (0x00025754) indicator_pane_cp1_ParamLimits

0x6a3e,	// (0x00025754) indicator_pane_cp1

0x6a4a,	// (0x00025760) main_pane_idle_g1_cp_ParamLimits

0x6a4a,	// (0x00025760) main_pane_idle_g1_cp

0x6a56,	// (0x0002576c) popup_ai_links_title_window

0x6a5f,	// (0x00025775) soft_indicator_pane_cp1_ParamLimits

0x6a5f,	// (0x00025775) soft_indicator_pane_cp1

0xae74,	// (0x00029b8a) ai_links_pane_g1

0xae7d,	// (0x00029b93) grid_ai_links_pane

0xae57,	// (0x00029b6d) ai_gene_pane_1

0xae62,	// (0x00029b78) ai_gene_pane_2

0xae6b,	// (0x00029b81) list_highlight_pane_cp4

0xae3b,	// (0x00029b51) cell_ai_link_pane_ParamLimits

0xae3b,	// (0x00029b51) cell_ai_link_pane

0xae33,	// (0x00029b49) cell_ai_link_pane_g1

0x19a5,	// (0x000206bb) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0002e61e) cell_ai_link_pane_g

0x16fe,	// (0x00020414) grid_highlight_cp2

0x16fe,	// (0x00020414) bg_popup_sub_pane_cp1

0x188f,	// (0x000205a5) popup_ai_links_title_window_t1

0xad83,	// (0x00029a99) ai_gene_pane_1_g1_ParamLimits

0xad83,	// (0x00029a99) ai_gene_pane_1_g1

0xad8f,	// (0x00029aa5) ai_gene_pane_1_g2_ParamLimits

0xad8f,	// (0x00029aa5) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0002e614) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0002e614) ai_gene_pane_1_g

0xad9c,	// (0x00029ab2) ai_gene_pane_1_t1_ParamLimits

0xad9c,	// (0x00029ab2) ai_gene_pane_1_t1

0xadd0,	// (0x00029ae6) grid_ai_soft_ind_pane

0xad6e,	// (0x00029a84) ai_gene_pane_2_t1_ParamLimits

0xad6e,	// (0x00029a84) ai_gene_pane_2_t1

0x6a6b,	// (0x00025781) main_pane_empty_t1_ParamLimits

0x6a6b,	// (0x00025781) main_pane_empty_t1

0x6a83,	// (0x00025799) main_pane_empty_t2_ParamLimits

0x6a83,	// (0x00025799) main_pane_empty_t2

0x6a98,	// (0x000257ae) main_pane_empty_t3_ParamLimits

0x6a98,	// (0x000257ae) main_pane_empty_t3

0x6aaa,	// (0x000257c0) main_pane_empty_t4_ParamLimits

0x6aaa,	// (0x000257c0) main_pane_empty_t4

0x6abc,	// (0x000257d2) main_pane_empty_t5_ParamLimits

0x6abc,	// (0x000257d2) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e28a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e28a) main_pane_empty_t

0x1c9b,	// (0x000209b1) bg_popup_window_pane_ParamLimits

0x1c9b,	// (0x000209b1) bg_popup_window_pane

0xaade,	// (0x000297f4) find_popup_pane_cp2_ParamLimits

0xaade,	// (0x000297f4) find_popup_pane_cp2

0xaaea,	// (0x00029800) heading_pane_ParamLimits

0xaaea,	// (0x00029800) heading_pane

0x16fe,	// (0x00020414) bg_popup_sub_pane

0xaa58,	// (0x0002976e) bg_popup_window_pane_g1_ParamLimits

0xaa58,	// (0x0002976e) bg_popup_window_pane_g1

0xaa64,	// (0x0002977a) bg_popup_window_pane_g2_ParamLimits

0xaa64,	// (0x0002977a) bg_popup_window_pane_g2

0xaa70,	// (0x00029786) bg_popup_window_pane_g3_ParamLimits

0xaa70,	// (0x00029786) bg_popup_window_pane_g3

0xaa7c,	// (0x00029792) bg_popup_window_pane_g4_ParamLimits

0xaa7c,	// (0x00029792) bg_popup_window_pane_g4

0xaa88,	// (0x0002979e) bg_popup_window_pane_g5_ParamLimits

0xaa88,	// (0x0002979e) bg_popup_window_pane_g5

0xaa94,	// (0x000297aa) bg_popup_window_pane_g6_ParamLimits

0xaa94,	// (0x000297aa) bg_popup_window_pane_g6

0xaaa0,	// (0x000297b6) bg_popup_window_pane_g7_ParamLimits

0xaaa0,	// (0x000297b6) bg_popup_window_pane_g7

0xaaac,	// (0x000297c2) bg_popup_window_pane_g8_ParamLimits

0xaaac,	// (0x000297c2) bg_popup_window_pane_g8

0xaab8,	// (0x000297ce) bg_popup_window_pane_g9_ParamLimits

0xaab8,	// (0x000297ce) bg_popup_window_pane_g9

0xaac4,	// (0x000297da) bg_popup_window_pane_g10_ParamLimits

0xaac4,	// (0x000297da) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0002e5dc) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0002e5dc) bg_popup_window_pane_g

0xa9ed,	// (0x00029703) bg_popup_heading_pane_ParamLimits

0xa9ed,	// (0x00029703) bg_popup_heading_pane

0x8b10,	// (0x00027826) tabs_4_passive_pane_cp_srt_ParamLimits

0x8b10,	// (0x00027826) tabs_4_passive_pane_cp_srt

0x8b22,	// (0x00027838) tabs_4_passive_pane_srt_ParamLimits

0xaa01,	// (0x00029717) heading_pane_g2

0x8b22,	// (0x00027838) tabs_4_passive_pane_srt

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp3_srt

0xaa09,	// (0x0002971f) heading_pane_t1_ParamLimits

0xaa09,	// (0x0002971f) heading_pane_t1

0xaa20,	// (0x00029736) heading_pane_t2_ParamLimits

0xaa20,	// (0x00029736) heading_pane_t2

0x0001,

0xf8c1,	// (0x0002e5d7) heading_pane_t_ParamLimits

0xf8c1,	// (0x0002e5d7) heading_pane_t

0xa52a,	// (0x00029240) bg_popup_heading_pane_g1

0xa5d9,	// (0x000292ef) bg_popup_heading_pane_g2

0xa5e3,	// (0x000292f9) bg_popup_heading_pane_g3

0xa5ed,	// (0x00029303) bg_popup_heading_pane_g4

0xa5f7,	// (0x0002930d) bg_popup_heading_pane_g5

0xa601,	// (0x00029317) bg_popup_heading_pane_g6

0xa609,	// (0x0002931f) bg_popup_heading_pane_g7

0xa611,	// (0x00029327) bg_popup_heading_pane_g8

0xa61b,	// (0x00029331) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0002e593) bg_popup_heading_pane_g

0x9d17,	// (0x00028a2d) bg_popup_sub_pane_g1

0x9d1f,	// (0x00028a35) bg_popup_sub_pane_g2

0x9d27,	// (0x00028a3d) bg_popup_sub_pane_g3

0x9d2f,	// (0x00028a45) bg_popup_sub_pane_g4

0x9d37,	// (0x00028a4d) bg_popup_sub_pane_g5

0x9d3f,	// (0x00028a55) bg_popup_sub_pane_g6

0x9d47,	// (0x00028a5d) bg_popup_sub_pane_g7

0x9d4f,	// (0x00028a65) bg_popup_sub_pane_g8

0x9d57,	// (0x00028a6d) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0002e56d) bg_popup_sub_pane_g

0x174c,	// (0x00020462) bg_popup_window_pane_cp5_ParamLimits

0x174c,	// (0x00020462) bg_popup_window_pane_cp5

0x18ac,	// (0x000205c2) popup_note_window_g1_ParamLimits

0x18ac,	// (0x000205c2) popup_note_window_g1

0x18b8,	// (0x000205ce) popup_note_window_t1_ParamLimits

0x18b8,	// (0x000205ce) popup_note_window_t1

0x18ce,	// (0x000205e4) popup_note_window_t2_ParamLimits

0x18ce,	// (0x000205e4) popup_note_window_t2

0x18e4,	// (0x000205fa) popup_note_window_t3_ParamLimits

0x18e4,	// (0x000205fa) popup_note_window_t3

0x18fa,	// (0x00020610) popup_note_window_t4_ParamLimits

0x18fa,	// (0x00020610) popup_note_window_t4

0x1922,	// (0x00020638) popup_note_window_t5_ParamLimits

0x1922,	// (0x00020638) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e295) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e295) popup_note_window_t

0x1946,	// (0x0002065c) bg_popup_window_pane_cp6_ParamLimits

0x1946,	// (0x0002065c) bg_popup_window_pane_cp6

0xa4a6,	// (0x000291bc) popup_note_image_window_g1_ParamLimits

0xa4a6,	// (0x000291bc) popup_note_image_window_g1

0xa4b2,	// (0x000291c8) popup_note_image_window_g2_ParamLimits

0xa4b2,	// (0x000291c8) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0002e561) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0002e561) popup_note_image_window_g

0xa4cb,	// (0x000291e1) popup_note_image_window_t1_ParamLimits

0xa4cb,	// (0x000291e1) popup_note_image_window_t1

0xa4e4,	// (0x000291fa) popup_note_image_window_t2_ParamLimits

0xa4e4,	// (0x000291fa) popup_note_image_window_t2

0xa4fd,	// (0x00029213) popup_note_image_window_t3_ParamLimits

0xa4fd,	// (0x00029213) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0002e566) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0002e566) popup_note_image_window_t

0xa36f,	// (0x00029085) bg_popup_window_pane_cp7_ParamLimits

0xa36f,	// (0x00029085) bg_popup_window_pane_cp7

0xa39f,	// (0x000290b5) popup_note_wait_window_g1_ParamLimits

0xa39f,	// (0x000290b5) popup_note_wait_window_g1

0xa3ab,	// (0x000290c1) popup_note_wait_window_g2_ParamLimits

0xa3ab,	// (0x000290c1) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0002e54f) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0002e54f) popup_note_wait_window_g

0xa3c3,	// (0x000290d9) popup_note_wait_window_t1_ParamLimits

0xa3c3,	// (0x000290d9) popup_note_wait_window_t1

0xa3ea,	// (0x00029100) popup_note_wait_window_t2_ParamLimits

0xa3ea,	// (0x00029100) popup_note_wait_window_t2

0xa407,	// (0x0002911d) popup_note_wait_window_t3_ParamLimits

0xa407,	// (0x0002911d) popup_note_wait_window_t3

0xa41a,	// (0x00029130) popup_note_wait_window_t4_ParamLimits

0xa41a,	// (0x00029130) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0002e556) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0002e556) popup_note_wait_window_t

0xa43f,	// (0x00029155) wait_bar_pane_ParamLimits

0xa43f,	// (0x00029155) wait_bar_pane

0x16fe,	// (0x00020414) wait_anim_pane

0x16fe,	// (0x00020414) wait_border_pane

0x16f4,	// (0x0002040a) wait_anim_pane_g1

0x16f4,	// (0x0002040a) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0002e40f) wait_anim_pane_g

0xa31b,	// (0x00029031) wait_border_pane_g1

0xa326,	// (0x0002903c) wait_border_pane_g2

0xa32f,	// (0x00029045) wait_border_pane_g3

0x0002,

0xf832,	// (0x0002e548) wait_border_pane_g

0xa186,	// (0x00028e9c) bg_popup_window_pane_cp16_ParamLimits

0xa186,	// (0x00028e9c) bg_popup_window_pane_cp16

0xa286,	// (0x00028f9c) indicator_popup_pane_cp4_ParamLimits

0xa286,	// (0x00028f9c) indicator_popup_pane_cp4

0xa29a,	// (0x00028fb0) popup_query_data_window_t1_ParamLimits

0xa29a,	// (0x00028fb0) popup_query_data_window_t1

0xa2ac,	// (0x00028fc2) popup_query_data_window_t2_ParamLimits

0xa2ac,	// (0x00028fc2) popup_query_data_window_t2

0xa2c5,	// (0x00028fdb) popup_query_data_window_t3_ParamLimits

0xa2c5,	// (0x00028fdb) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0002e541) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0002e541) popup_query_data_window_t

0xa2df,	// (0x00028ff5) query_popup_data_pane_ParamLimits

0xa2df,	// (0x00028ff5) query_popup_data_pane

0xa2f3,	// (0x00029009) query_popup_data_pane_cp1_ParamLimits

0xa2f3,	// (0x00029009) query_popup_data_pane_cp1

0xa186,	// (0x00028e9c) bg_popup_window_pane_cp10_ParamLimits

0xa186,	// (0x00028e9c) bg_popup_window_pane_cp10

0xa1b8,	// (0x00028ece) indicator_popup_pane_ParamLimits

0xa1b8,	// (0x00028ece) indicator_popup_pane

0xa1da,	// (0x00028ef0) popup_query_code_window_t1_ParamLimits

0xa1da,	// (0x00028ef0) popup_query_code_window_t1

0xa1f4,	// (0x00028f0a) popup_query_code_window_t2_ParamLimits

0xa1f4,	// (0x00028f0a) popup_query_code_window_t2

0xa23d,	// (0x00028f53) popup_query_code_window_t3_ParamLimits

0xa23d,	// (0x00028f53) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0002e53a) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0002e53a) popup_query_code_window_t

0xa26c,	// (0x00028f82) query_popup_pane_ParamLimits

0xa26c,	// (0x00028f82) query_popup_pane

0x1946,	// (0x0002065c) bg_popup_window_pane_cp15_ParamLimits

0x1946,	// (0x0002065c) bg_popup_window_pane_cp15

0x6ad0,	// (0x000257e6) indicator_popup_pane_cp1_ParamLimits

0x6ad0,	// (0x000257e6) indicator_popup_pane_cp1

0x6ae3,	// (0x000257f9) indicator_popup_pane_cp2_ParamLimits

0x6ae3,	// (0x000257f9) indicator_popup_pane_cp2

0x6af6,	// (0x0002580c) popup_query_data_code_window_g1_ParamLimits

0x6af6,	// (0x0002580c) popup_query_data_code_window_g1

0x1964,	// (0x0002067a) popup_query_data_code_window_t1_ParamLimits

0x1964,	// (0x0002067a) popup_query_data_code_window_t1

0x1976,	// (0x0002068c) popup_query_data_code_window_t2_ParamLimits

0x1976,	// (0x0002068c) popup_query_data_code_window_t2

0x6b09,	// (0x0002581f) popup_query_data_code_window_t3_ParamLimits

0x6b09,	// (0x0002581f) popup_query_data_code_window_t3

0x6b1f,	// (0x00025835) popup_query_data_code_window_t4_ParamLimits

0x6b1f,	// (0x00025835) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e2a0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e2a0) popup_query_data_code_window_t

0x777f,	// (0x00026495) list_single_midp_graphic_pane_g3

0x6b37,	// (0x0002584d) query_popup_data_pane_cp2_ParamLimits

0x6b4a,	// (0x00025860) query_popup_pane_cp2_ParamLimits

0x6b4a,	// (0x00025860) query_popup_pane_cp2

0x16fe,	// (0x00020414) bg_popup_window_pane_cp11

0xa17e,	// (0x00028e94) heading_pane_cp5

0x19d2,	// (0x000206e8) listscroll_popup_info_pane

0x16fe,	// (0x00020414) input_focus_pane_cp3

0x1988,	// (0x0002069e) query_popup_pane_t1

0x1996,	// (0x000206ac) list_popup_info_pane_ParamLimits

0x1996,	// (0x000206ac) list_popup_info_pane

0x19a5,	// (0x000206bb) listscroll_popup_info_pane_g1

0x19ad,	// (0x000206c3) scroll_pane_cp7

0x6b5d,	// (0x00025873) popup_info_list_pane_t1_ParamLimits

0x6b5d,	// (0x00025873) popup_info_list_pane_t1

0x6b77,	// (0x0002588d) popup_info_list_pane_t2_ParamLimits

0x6b77,	// (0x0002588d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e2a9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e2a9) popup_info_list_pane_t

0x16fe,	// (0x00020414) bg_popup_window_pane_cp12

0xb4cb,	// (0x0002a1e1) find_popup_pane

0x175a,	// (0x00020470) bg_popup_window_pane_cp3

0x19b7,	// (0x000206cd) heading_pane_cp3

0x19c3,	// (0x000206d9) listscroll_popup_graphic_pane

0x16fe,	// (0x00020414) bg_popup_window_pane_cp4

0x6be1,	// (0x000258f7) heading_pane_cp4

0x19d2,	// (0x000206e8) listscroll_popup_colour_pane

0x6beb,	// (0x00025901) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6beb,	// (0x00025901) cell_large_graphic_colour_none_popup_pane

0x6bff,	// (0x00025915) grid_large_graphic_colour_popup_pane_ParamLimits

0x6bff,	// (0x00025915) grid_large_graphic_colour_popup_pane

0x6c27,	// (0x0002593d) listscroll_popup_colour_pane_g1_ParamLimits

0x6c27,	// (0x0002593d) listscroll_popup_colour_pane_g1

0x6c3e,	// (0x00025954) listscroll_popup_colour_pane_g2_ParamLimits

0x6c3e,	// (0x00025954) listscroll_popup_colour_pane_g2

0x6c55,	// (0x0002596b) listscroll_popup_colour_pane_g3_ParamLimits

0x6c55,	// (0x0002596b) listscroll_popup_colour_pane_g3

0x6c65,	// (0x0002597b) listscroll_popup_colour_pane_g4_ParamLimits

0x6c65,	// (0x0002597b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e2ae) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e2ae) listscroll_popup_colour_pane_g

0x19da,	// (0x000206f0) scroll_pane_cp6_ParamLimits

0x19da,	// (0x000206f0) scroll_pane_cp6

0x6c75,	// (0x0002598b) cell_large_graphic_colour_popup_pane_ParamLimits

0x6c75,	// (0x0002598b) cell_large_graphic_colour_popup_pane

0x6c94,	// (0x000259aa) cell_large_graphic_colour_none_popup_pane_t1

0x16fe,	// (0x00020414) grid_highlight_pane_cp5

0x19ec,	// (0x00020702) cell_large_graphic_colour_popup_pane_g1

0x19f4,	// (0x0002070a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e2b7) cell_large_graphic_colour_popup_pane_g

0x19fc,	// (0x00020712) cell_large_graphic_colour_popup_pane_g2_copy1

0x1a05,	// (0x0002071b) grid_highlight_pane_cp4

0x1a0d,	// (0x00020723) bg_popup_window_pane_cp8_ParamLimits

0x1a0d,	// (0x00020723) bg_popup_window_pane_cp8

0x6ca3,	// (0x000259b9) popup_snote_single_text_window_g1_ParamLimits

0x6ca3,	// (0x000259b9) popup_snote_single_text_window_g1

0x6cb5,	// (0x000259cb) popup_snote_single_text_window_t1_ParamLimits

0x6cb5,	// (0x000259cb) popup_snote_single_text_window_t1

0x6cc8,	// (0x000259de) popup_snote_single_text_window_t2_ParamLimits

0x6cc8,	// (0x000259de) popup_snote_single_text_window_t2

0x6cdb,	// (0x000259f1) popup_snote_single_text_window_t3_ParamLimits

0x6cdb,	// (0x000259f1) popup_snote_single_text_window_t3

0x6d14,	// (0x00025a2a) popup_snote_single_text_window_t4_ParamLimits

0x6d14,	// (0x00025a2a) popup_snote_single_text_window_t4

0x6d48,	// (0x00025a5e) popup_snote_single_text_window_t5_ParamLimits

0x6d48,	// (0x00025a5e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e2bc) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e2bc) popup_snote_single_text_window_t

0x1a28,	// (0x0002073e) bg_popup_window_pane_cp9_ParamLimits

0x1a28,	// (0x0002073e) bg_popup_window_pane_cp9

0x6ca3,	// (0x000259b9) popup_snote_single_graphic_window_g1_ParamLimits

0x6ca3,	// (0x000259b9) popup_snote_single_graphic_window_g1

0x1a36,	// (0x0002074c) popup_snote_single_graphic_window_g2_ParamLimits

0x1a36,	// (0x0002074c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e2c7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e2c7) popup_snote_single_graphic_window_g

0x1a42,	// (0x00020758) popup_snote_single_graphic_window_t1_ParamLimits

0x1a42,	// (0x00020758) popup_snote_single_graphic_window_t1

0x1a55,	// (0x0002076b) popup_snote_single_graphic_window_t2_ParamLimits

0x1a55,	// (0x0002076b) popup_snote_single_graphic_window_t2

0x6d77,	// (0x00025a8d) popup_snote_single_graphic_window_t3_ParamLimits

0x6d77,	// (0x00025a8d) popup_snote_single_graphic_window_t3

0x6db0,	// (0x00025ac6) popup_snote_single_graphic_window_t4_ParamLimits

0x6db0,	// (0x00025ac6) popup_snote_single_graphic_window_t4

0x6de4,	// (0x00025afa) popup_snote_single_graphic_window_t5_ParamLimits

0x6de4,	// (0x00025afa) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e2cc) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e2cc) popup_snote_single_graphic_window_t

0xb40d,	// (0x0002a123) grid_graphic_popup_pane_ParamLimits

0xb40d,	// (0x0002a123) grid_graphic_popup_pane

0xb437,	// (0x0002a14d) listscroll_popup_graphic_pane_g1_ParamLimits

0xb437,	// (0x0002a14d) listscroll_popup_graphic_pane_g1

0xb44b,	// (0x0002a161) listscroll_popup_graphic_pane_g2_ParamLimits

0xb44b,	// (0x0002a161) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0002e6b7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0002e6b7) listscroll_popup_graphic_pane_g

0xb45f,	// (0x0002a175) scroll_pane_cp5

0xb3ac,	// (0x0002a0c2) cell_graphic_popup_pane_ParamLimits

0xb3ac,	// (0x0002a0c2) cell_graphic_popup_pane

0xb38d,	// (0x0002a0a3) cell_graphic_popup_pane_g1

0xb395,	// (0x0002a0ab) cell_graphic_popup_pane_g2

0x19fc,	// (0x00020712) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0002e6b0) cell_graphic_popup_pane_g

0xb39e,	// (0x0002a0b4) cell_graphic_popup_pane_t2

0x1a05,	// (0x0002071b) grid_highlight_pane_cp3

0x1a7a,	// (0x00020790) list_gen_pane_ParamLimits

0x1a7a,	// (0x00020790) list_gen_pane

0x1aa2,	// (0x000207b8) scroll_pane

0xb2e5,	// (0x00029ffb) bg_list_pane_g1_ParamLimits

0xb2e5,	// (0x00029ffb) bg_list_pane_g1

0xb302,	// (0x0002a018) bg_list_pane_g2_ParamLimits

0xb302,	// (0x0002a018) bg_list_pane_g2

0xb317,	// (0x0002a02d) bg_list_pane_g3_ParamLimits

0xb317,	// (0x0002a02d) bg_list_pane_g3

0xb32b,	// (0x0002a041) bg_list_pane_g4_ParamLimits

0xb32b,	// (0x0002a041) bg_list_pane_g4

0xb33f,	// (0x0002a055) bg_list_pane_g5_ParamLimits

0xb33f,	// (0x0002a055) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0002e6a5) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0002e6a5) bg_list_pane_g

0xb27a,	// (0x00029f90) list_double2_graphic_large_graphic_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double2_graphic_large_graphic_pane

0xb27a,	// (0x00029f90) list_double2_graphic_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double2_graphic_pane

0xb27a,	// (0x00029f90) list_double2_large_graphic_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double2_large_graphic_pane

0x5c53,	// (0x00024969) list_double2_pane_ParamLimits

0x5c53,	// (0x00024969) list_double2_pane

0xb27a,	// (0x00029f90) list_double_graphic_heading_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_graphic_heading_pane

0xb27a,	// (0x00029f90) list_double_graphic_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_graphic_pane

0xb27a,	// (0x00029f90) list_double_heading_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_heading_pane

0xb27a,	// (0x00029f90) list_double_large_graphic_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_large_graphic_pane

0xb27a,	// (0x00029f90) list_double_number_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_number_pane

0xb27a,	// (0x00029f90) list_double_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_pane

0xb27a,	// (0x00029f90) list_double_time_pane_ParamLimits

0xb27a,	// (0x00029f90) list_double_time_pane

0xb27a,	// (0x00029f90) list_setting_number_pane_ParamLimits

0xb27a,	// (0x00029f90) list_setting_number_pane

0xb27a,	// (0x00029f90) list_setting_pane_ParamLimits

0xb27a,	// (0x00029f90) list_setting_pane

0x5c94,	// (0x000249aa) list_single_2graphic_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_2graphic_pane

0x5c94,	// (0x000249aa) list_single_graphic_heading_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_graphic_heading_pane

0x5c94,	// (0x000249aa) list_single_graphic_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_graphic_pane

0x5c94,	// (0x000249aa) list_single_heading_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_heading_pane

0x5cf6,	// (0x00024a0c) list_single_large_graphic_pane_ParamLimits

0x5cf6,	// (0x00024a0c) list_single_large_graphic_pane

0x5c94,	// (0x000249aa) list_single_number_heading_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_number_heading_pane

0x5c94,	// (0x000249aa) list_single_number_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_number_pane

0x5c94,	// (0x000249aa) list_single_pane_ParamLimits

0x5c94,	// (0x000249aa) list_single_pane

0x16fe,	// (0x00020414) list_highlight_pane_cp1

0x533b,	// (0x00024051) list_single_pane_g1_ParamLimits

0x533b,	// (0x00024051) list_single_pane_g1

0x5347,	// (0x0002405d) list_single_pane_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_pane_g

0x5c2a,	// (0x00024940) list_single_pane_t1_ParamLimits

0x5c2a,	// (0x00024940) list_single_pane_t1

0x533b,	// (0x00024051) list_single_number_pane_g1_ParamLimits

0x533b,	// (0x00024051) list_single_number_pane_g1

0x5347,	// (0x0002405d) list_single_number_pane_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_number_pane_g

0x5353,	// (0x00024069) list_single_number_pane_t1_ParamLimits

0x5353,	// (0x00024069) list_single_number_pane_t1

0x5bec,	// (0x00024902) list_single_number_pane_t2_ParamLimits

0x5bec,	// (0x00024902) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0002e666) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0002e666) list_single_number_pane_t

0x532f,	// (0x00024045) list_single_graphic_pane_g1_ParamLimits

0x532f,	// (0x00024045) list_single_graphic_pane_g1

0x533b,	// (0x00024051) list_single_graphic_pane_g2_ParamLimits

0x533b,	// (0x00024051) list_single_graphic_pane_g2

0x5347,	// (0x0002405d) list_single_graphic_pane_g3_ParamLimits

0x5347,	// (0x0002405d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e2d7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e2d7) list_single_graphic_pane_g

0x5353,	// (0x00024069) list_single_graphic_pane_t1_ParamLimits

0x5353,	// (0x00024069) list_single_graphic_pane_t1

0x533b,	// (0x00024051) list_single_heading_pane_g1_ParamLimits

0x533b,	// (0x00024051) list_single_heading_pane_g1

0x5347,	// (0x0002405d) list_single_heading_pane_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_heading_pane_g

0x5369,	// (0x0002407f) list_single_heading_pane_t1_ParamLimits

0x5369,	// (0x0002407f) list_single_heading_pane_t1

0x537f,	// (0x00024095) list_single_heading_pane_t2_ParamLimits

0x537f,	// (0x00024095) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e2e3) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e2e3) list_single_heading_pane_t

0x533b,	// (0x00024051) list_single_number_heading_pane_g1_ParamLimits

0x533b,	// (0x00024051) list_single_number_heading_pane_g1

0x5347,	// (0x0002405d) list_single_number_heading_pane_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_number_heading_pane_g

0x5369,	// (0x0002407f) list_single_number_heading_pane_t1_ParamLimits

0x5369,	// (0x0002407f) list_single_number_heading_pane_t1

0x5391,	// (0x000240a7) list_single_number_heading_pane_t2_ParamLimits

0x5391,	// (0x000240a7) list_single_number_heading_pane_t2

0x53a3,	// (0x000240b9) list_single_number_heading_pane_t3_ParamLimits

0x53a3,	// (0x000240b9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e2e8) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e2e8) list_single_number_heading_pane_t

0x53b5,	// (0x000240cb) list_single_graphic_heading_pane_g1_ParamLimits

0x53b5,	// (0x000240cb) list_single_graphic_heading_pane_g1

0x53c1,	// (0x000240d7) list_single_graphic_heading_pane_g4_ParamLimits

0x53c1,	// (0x000240d7) list_single_graphic_heading_pane_g4

0x5347,	// (0x0002405d) list_single_graphic_heading_pane_g5_ParamLimits

0x5347,	// (0x0002405d) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e2ef) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e2ef) list_single_graphic_heading_pane_g

0x5369,	// (0x0002407f) list_single_graphic_heading_pane_t1_ParamLimits

0x5369,	// (0x0002407f) list_single_graphic_heading_pane_t1

0x53d2,	// (0x000240e8) list_single_graphic_heading_pane_t2_ParamLimits

0x53d2,	// (0x000240e8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e2f6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e2f6) list_single_graphic_heading_pane_t

0x53e4,	// (0x000240fa) list_single_large_graphic_pane_g1_ParamLimits

0x53e4,	// (0x000240fa) list_single_large_graphic_pane_g1

0x53f0,	// (0x00024106) list_single_large_graphic_pane_g2_ParamLimits

0x53f0,	// (0x00024106) list_single_large_graphic_pane_g2

0x53fc,	// (0x00024112) list_single_large_graphic_pane_g3_ParamLimits

0x53fc,	// (0x00024112) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e2fb) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e2fb) list_single_large_graphic_pane_g

0xa326,	// (0x0002903c) wait_border_pane_g2_copy1

0x5408,	// (0x0002411e) list_single_large_graphic_pane_g4_cp2

0x5410,	// (0x00024126) list_single_large_graphic_pane_t1_ParamLimits

0x5410,	// (0x00024126) list_single_large_graphic_pane_t1

0x5426,	// (0x0002413c) list_double_pane_g1_ParamLimits

0x5426,	// (0x0002413c) list_double_pane_g1

0x5432,	// (0x00024148) list_double_pane_g2_ParamLimits

0x5432,	// (0x00024148) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e302) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e302) list_double_pane_g

0x543e,	// (0x00024154) list_double_pane_t1_ParamLimits

0x543e,	// (0x00024154) list_double_pane_t1

0x5454,	// (0x0002416a) list_double_pane_t2_ParamLimits

0x5454,	// (0x0002416a) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e307) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e307) list_double_pane_t

0x5466,	// (0x0002417c) list_double2_pane_g1_ParamLimits

0x5466,	// (0x0002417c) list_double2_pane_g1

0x5477,	// (0x0002418d) list_double2_pane_g2_ParamLimits

0x5477,	// (0x0002418d) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e30c) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e30c) list_double2_pane_g

0x5483,	// (0x00024199) list_double2_pane_t1_ParamLimits

0x5483,	// (0x00024199) list_double2_pane_t1

0x5499,	// (0x000241af) list_double2_pane_t2_ParamLimits

0x5499,	// (0x000241af) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e311) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e311) list_double2_pane_t

0x5426,	// (0x0002413c) list_double_number_pane_g1_ParamLimits

0x5426,	// (0x0002413c) list_double_number_pane_g1

0x5432,	// (0x00024148) list_double_number_pane_g2_ParamLimits

0x5432,	// (0x00024148) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e302) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e302) list_double_number_pane_g

0x54ab,	// (0x000241c1) list_double_number_pane_t1_ParamLimits

0x54ab,	// (0x000241c1) list_double_number_pane_t1

0x54bd,	// (0x000241d3) list_double_number_pane_t2_ParamLimits

0x54bd,	// (0x000241d3) list_double_number_pane_t2

0x54d3,	// (0x000241e9) list_double_number_pane_t3_ParamLimits

0x54d3,	// (0x000241e9) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e316) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e316) list_double_number_pane_t

0x54e5,	// (0x000241fb) list_double_graphic_pane_g1_ParamLimits

0x54e5,	// (0x000241fb) list_double_graphic_pane_g1

0x54f1,	// (0x00024207) list_double_graphic_pane_g2_ParamLimits

0x54f1,	// (0x00024207) list_double_graphic_pane_g2

0x5500,	// (0x00024216) list_double_graphic_pane_g3_ParamLimits

0x5500,	// (0x00024216) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e31d) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e31d) list_double_graphic_pane_g

0x54bd,	// (0x000241d3) list_double_graphic_pane_t1_ParamLimits

0x54bd,	// (0x000241d3) list_double_graphic_pane_t1

0x54d3,	// (0x000241e9) list_double_graphic_pane_t2_ParamLimits

0x54d3,	// (0x000241e9) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e326) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e326) list_double_graphic_pane_t

0x5518,	// (0x0002422e) list_double2_graphic_pane_g1_ParamLimits

0x5518,	// (0x0002422e) list_double2_graphic_pane_g1

0x5426,	// (0x0002413c) list_double2_graphic_pane_g2_ParamLimits

0x5426,	// (0x0002413c) list_double2_graphic_pane_g2

0x5432,	// (0x00024148) list_double2_graphic_pane_g3_ParamLimits

0x5432,	// (0x00024148) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e32b) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e32b) list_double2_graphic_pane_g

0x5524,	// (0x0002423a) list_double2_graphic_pane_t1_ParamLimits

0x5524,	// (0x0002423a) list_double2_graphic_pane_t1

0x553a,	// (0x00024250) list_double2_graphic_pane_t2_ParamLimits

0x553a,	// (0x00024250) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e332) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e332) list_double2_graphic_pane_t

0x554c,	// (0x00024262) list_double_large_graphic_pane_g1_ParamLimits

0x554c,	// (0x00024262) list_double_large_graphic_pane_g1

0x556b,	// (0x00024281) list_double_large_graphic_pane_g2_ParamLimits

0x556b,	// (0x00024281) list_double_large_graphic_pane_g2

0x5432,	// (0x00024148) list_double_large_graphic_pane_g3_ParamLimits

0x5432,	// (0x00024148) list_double_large_graphic_pane_g3

0x557c,	// (0x00024292) list_double_large_graphic_pane_g4_ParamLimits

0x557c,	// (0x00024292) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e337) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e337) list_double_large_graphic_pane_g

0x55a4,	// (0x000242ba) list_double_large_graphic_pane_t1_ParamLimits

0x55a4,	// (0x000242ba) list_double_large_graphic_pane_t1

0x55bd,	// (0x000242d3) list_double_large_graphic_pane_t2_ParamLimits

0x55bd,	// (0x000242d3) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e342) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e342) list_double_large_graphic_pane_t

0x6e1d,	// (0x00025b33) list_double2_large_graphic_pane_g1_ParamLimits

0x6e1d,	// (0x00025b33) list_double2_large_graphic_pane_g1

0x55cf,	// (0x000242e5) list_double2_large_graphic_pane_g2_ParamLimits

0x55cf,	// (0x000242e5) list_double2_large_graphic_pane_g2

0x55e0,	// (0x000242f6) list_double2_large_graphic_pane_g3_ParamLimits

0x55e0,	// (0x000242f6) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e347) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e347) list_double2_large_graphic_pane_g

0x5524,	// (0x0002423a) list_double2_large_graphic_pane_t1_ParamLimits

0x5524,	// (0x0002423a) list_double2_large_graphic_pane_t1

0x553a,	// (0x00024250) list_double2_large_graphic_pane_t2_ParamLimits

0x553a,	// (0x00024250) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e332) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e332) list_double2_large_graphic_pane_t

0x55ec,	// (0x00024302) list_double_heading_pane_g1_ParamLimits

0x55ec,	// (0x00024302) list_double_heading_pane_g1

0x55fd,	// (0x00024313) list_double_heading_pane_g2_ParamLimits

0x55fd,	// (0x00024313) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002e34e) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002e34e) list_double_heading_pane_g

0x5609,	// (0x0002431f) list_double_heading_pane_t1_ParamLimits

0x5609,	// (0x0002431f) list_double_heading_pane_t1

0x561f,	// (0x00024335) list_double_heading_pane_t2_ParamLimits

0x561f,	// (0x00024335) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e353) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e353) list_double_heading_pane_t

0x5518,	// (0x0002422e) list_double_graphic_heading_pane_g1_ParamLimits

0x5518,	// (0x0002422e) list_double_graphic_heading_pane_g1

0x55ec,	// (0x00024302) list_double_graphic_heading_pane_g2_ParamLimits

0x55ec,	// (0x00024302) list_double_graphic_heading_pane_g2

0x55fd,	// (0x00024313) list_double_graphic_heading_pane_g3_ParamLimits

0x55fd,	// (0x00024313) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002e358) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002e358) list_double_graphic_heading_pane_g

0x5609,	// (0x0002431f) list_double_graphic_heading_pane_t1_ParamLimits

0x5609,	// (0x0002431f) list_double_graphic_heading_pane_t1

0x561f,	// (0x00024335) list_double_graphic_heading_pane_t2_ParamLimits

0x561f,	// (0x00024335) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e353) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e353) list_double_graphic_heading_pane_t

0x556b,	// (0x00024281) list_double_time_pane_g1_ParamLimits

0x556b,	// (0x00024281) list_double_time_pane_g1

0x5432,	// (0x00024148) list_double_time_pane_g2_ParamLimits

0x5432,	// (0x00024148) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0002e35f) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0002e35f) list_double_time_pane_g

0x5631,	// (0x00024347) list_double_time_pane_t1_ParamLimits

0x5631,	// (0x00024347) list_double_time_pane_t1

0x5647,	// (0x0002435d) list_double_time_pane_t2_ParamLimits

0x5647,	// (0x0002435d) list_double_time_pane_t2

0x5659,	// (0x0002436f) list_double_time_pane_t3_ParamLimits

0x5659,	// (0x0002436f) list_double_time_pane_t3

0x566b,	// (0x00024381) list_double_time_pane_t4_ParamLimits

0x566b,	// (0x00024381) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0002e364) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0002e364) list_double_time_pane_t

0x567d,	// (0x00024393) list_setting_pane_g1_ParamLimits

0x567d,	// (0x00024393) list_setting_pane_g1

0x55fd,	// (0x00024313) list_setting_pane_g2_ParamLimits

0x55fd,	// (0x00024313) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002e36d) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002e36d) list_setting_pane_g

0x5689,	// (0x0002439f) list_setting_pane_t1_ParamLimits

0x5689,	// (0x0002439f) list_setting_pane_t1

0x56a0,	// (0x000243b6) list_setting_pane_t2_ParamLimits

0x56a0,	// (0x000243b6) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002e372) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002e372) list_setting_pane_t

0x56dd,	// (0x000243f3) set_value_pane_cp_ParamLimits

0x56dd,	// (0x000243f3) set_value_pane_cp

0x56e9,	// (0x000243ff) list_setting_number_pane_g1_ParamLimits

0x56e9,	// (0x000243ff) list_setting_number_pane_g1

0x56f5,	// (0x0002440b) list_setting_number_pane_g2_ParamLimits

0x56f5,	// (0x0002440b) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0002e379) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0002e379) list_setting_number_pane_g

0x5701,	// (0x00024417) list_setting_number_pane_t1_ParamLimits

0x5701,	// (0x00024417) list_setting_number_pane_t1

0x5715,	// (0x0002442b) list_setting_number_pane_t2_ParamLimits

0x5715,	// (0x0002442b) list_setting_number_pane_t2

0x572c,	// (0x00024442) list_setting_number_pane_t3_ParamLimits

0x572c,	// (0x00024442) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0002e37e) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0002e37e) list_setting_number_pane_t

0x56dd,	// (0x000243f3) set_value_pane_ParamLimits

0x56dd,	// (0x000243f3) set_value_pane

0x1b03,	// (0x00020819) bg_set_opt_pane_ParamLimits

0x1b03,	// (0x00020819) bg_set_opt_pane

0x576f,	// (0x00024485) set_value_pane_t1

0x1b32,	// (0x00020848) slider_set_pane_cp3

0x6e29,	// (0x00025b3f) volume_small_pane_cp

0x1b3b,	// (0x00020851) list_form_gen_pane

0x1b44,	// (0x0002085a) scroll_pane_cp8

0x5785,	// (0x0002449b) form_field_data_pane_ParamLimits

0x5785,	// (0x0002449b) form_field_data_pane

0x57a5,	// (0x000244bb) form_field_data_wide_pane_ParamLimits

0x57a5,	// (0x000244bb) form_field_data_wide_pane

0x57c6,	// (0x000244dc) form_field_popup_pane_ParamLimits

0x57c6,	// (0x000244dc) form_field_popup_pane

0x57e4,	// (0x000244fa) form_field_popup_wide_pane_ParamLimits

0x57e4,	// (0x000244fa) form_field_popup_wide_pane

0x5801,	// (0x00024517) form_field_slider_pane_ParamLimits

0x5801,	// (0x00024517) form_field_slider_pane

0x5814,	// (0x0002452a) form_field_slider_wide_pane_ParamLimits

0x5814,	// (0x0002452a) form_field_slider_wide_pane

0x1b78,	// (0x0002088e) data_form_pane

0x5831,	// (0x00024547) form_field_data_pane_t1

0x1b84,	// (0x0002089a) input_focus_pane

0x5849,	// (0x0002455f) data_form_wide_pane

0x5866,	// (0x0002457c) form_field_data_wide_pane_t1

0x1a1a,	// (0x00020730) input_focus_pane_cp6

0x5888,	// (0x0002459e) form_field_popup_pane_t1

0x1b84,	// (0x0002089a) input_focus_pane_cp7

0x1bf1,	// (0x00020907) list_form_pane

0x58a8,	// (0x000245be) form_field_popup_wide_pane_t1

0x1b84,	// (0x0002089a) input_focus_pane_cp8

0x1c1a,	// (0x00020930) list_form_wide_pane

0x58c5,	// (0x000245db) form_field_slider_pane_t1_ParamLimits

0x58c5,	// (0x000245db) form_field_slider_pane_t1

0x58db,	// (0x000245f1) form_field_slider_pane_t2_ParamLimits

0x58db,	// (0x000245f1) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0002e38e) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0002e38e) form_field_slider_pane_t

0x174c,	// (0x00020462) input_focus_pane_cp9_ParamLimits

0x174c,	// (0x00020462) input_focus_pane_cp9

0x58f0,	// (0x00024606) slider_cont_pane_ParamLimits

0x58f0,	// (0x00024606) slider_cont_pane

0x1c26,	// (0x0002093c) form_field_slider_wide_pane_t1_ParamLimits

0x1c26,	// (0x0002093c) form_field_slider_wide_pane_t1

0x5904,	// (0x0002461a) form_field_slider_wide_pane_t2_ParamLimits

0x5904,	// (0x0002461a) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0002e393) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0002e393) form_field_slider_wide_pane_t

0x174c,	// (0x00020462) input_focus_pane_cp10_ParamLimits

0x174c,	// (0x00020462) input_focus_pane_cp10

0x5916,	// (0x0002462c) slider_cont_pane_cp1_ParamLimits

0x5916,	// (0x0002462c) slider_cont_pane_cp1

0x592a,	// (0x00024640) slider_form_pane_cp

0x1c4a,	// (0x00020960) input_focus_pane_g1

0x1c52,	// (0x00020968) input_focus_pane_g2

0x1c5a,	// (0x00020970) input_focus_pane_g3

0x1c62,	// (0x00020978) input_focus_pane_g4

0x1c6a,	// (0x00020980) input_focus_pane_g5

0x1c72,	// (0x00020988) input_focus_pane_g6

0x1c7a,	// (0x00020990) input_focus_pane_g7

0x1c82,	// (0x00020998) input_focus_pane_g8

0x1c8a,	// (0x000209a0) input_focus_pane_g9

0x16f4,	// (0x0002040a) input_focus_pane_g10

0x0009,

0xf682,	// (0x0002e398) input_focus_pane_g

0xa32f,	// (0x00029045) wait_border_pane_g3_copy1

0x5932,	// (0x00024648) data_form_pane_t1

0x16f4,	// (0x0002040a) wait_anim_pane_g1_copy1

0x5bfe,	// (0x00024914) data_form_wide_pane_t1

0x594d,	// (0x00024663) list_form_graphic_pane_cp_ParamLimits

0x594d,	// (0x00024663) list_form_graphic_pane_cp

0xb21e,	// (0x00029f34) slider_form_pane_g1

0xb227,	// (0x00029f3d) slider_form_pane_g2

0x0006,

0xf980,	// (0x0002e696) slider_form_pane_g

0x5961,	// (0x00024677) list_form_graphic_pane_ParamLimits

0x5961,	// (0x00024677) list_form_graphic_pane

0x5978,	// (0x0002468e) list_form_graphic_pane_g1

0x5980,	// (0x00024696) list_form_graphic_pane_t1_ParamLimits

0x5980,	// (0x00024696) list_form_graphic_pane_t1

0x175a,	// (0x00020470) list_highlight_pane_cp5_ParamLimits

0x175a,	// (0x00020470) list_highlight_pane_cp5

0x5995,	// (0x000246ab) find_pane_g1

0x1c92,	// (0x000209a8) input_find_pane

0x599e,	// (0x000246b4) input_find_pane_g1_ParamLimits

0x599e,	// (0x000246b4) input_find_pane_g1

0x59aa,	// (0x000246c0) input_find_pane_t1_ParamLimits

0x59aa,	// (0x000246c0) input_find_pane_t1

0x59bf,	// (0x000246d5) input_find_pane_t2_ParamLimits

0x59bf,	// (0x000246d5) input_find_pane_t2

0x0001,

0xf697,	// (0x0002e3ad) input_find_pane_t_ParamLimits

0xf697,	// (0x0002e3ad) input_find_pane_t

0x1c9b,	// (0x000209b1) input_focus_pane_cp5_ParamLimits

0x1c9b,	// (0x000209b1) input_focus_pane_cp5

0x1ca9,	// (0x000209bf) bg_popup_window_pane_cp2_ParamLimits

0x1ca9,	// (0x000209bf) bg_popup_window_pane_cp2

0x1cb6,	// (0x000209cc) listscroll_menu_pane_ParamLimits

0x1cb6,	// (0x000209cc) listscroll_menu_pane

0x6e3e,	// (0x00025b54) popup_submenu_window_ParamLimits

0x6e3e,	// (0x00025b54) popup_submenu_window

0x1cc2,	// (0x000209d8) find_popup_pane_g1

0x6e66,	// (0x00025b7c) input_popup_find_pane_cp

0x1c9b,	// (0x000209b1) input_focus_pane_cp4_ParamLimits

0x1c9b,	// (0x000209b1) input_focus_pane_cp4

0x1cca,	// (0x000209e0) input_popup_find_pane_t1_ParamLimits

0x1cca,	// (0x000209e0) input_popup_find_pane_t1

0x16fe,	// (0x00020414) bg_popup_sub_pane_cp

0x1cf8,	// (0x00020a0e) listscroll_popup_sub_pane

0x1d00,	// (0x00020a16) list_submenu_pane_ParamLimits

0x1d00,	// (0x00020a16) list_submenu_pane

0x1d11,	// (0x00020a27) scroll_pane_cp4

0x6e7e,	// (0x00025b94) list_single_popup_submenu_pane_ParamLimits

0x6e7e,	// (0x00025b94) list_single_popup_submenu_pane

0x1e14,	// (0x00020b2a) list_single_popup_submenu_pane_g1

0x6e92,	// (0x00025ba8) list_single_popup_submenu_pane_t1_ParamLimits

0x6e92,	// (0x00025ba8) list_single_popup_submenu_pane_t1

0x175a,	// (0x00020470) bg_active_tab_pane_cp1_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp1

0x1d19,	// (0x00020a2f) tabs_2_active_pane_g1

0x6ea7,	// (0x00025bbd) tabs_2_active_pane_t1

0x175a,	// (0x00020470) bg_passive_tab_pane_cp1_ParamLimits

0x175a,	// (0x00020470) bg_passive_tab_pane_cp1

0x1d19,	// (0x00020a2f) tabs_2_passive_pane_g1

0x6ea7,	// (0x00025bbd) tabs_2_passive_pane_t1

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp4

0x6eb9,	// (0x00025bcf) tabs_2_long_active_pane_t1

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp4

0x87df,	// (0x000274f5) list_single_midp_graphic_pane_g4_ParamLimits

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp5

0x6ed8,	// (0x00025bee) tabs_3_long_active_pane_t1

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp5

0x87df,	// (0x000274f5) list_single_midp_graphic_pane_g4

0x175a,	// (0x00020470) bg_popup_window_pane_cp13_ParamLimits

0x175a,	// (0x00020470) bg_popup_window_pane_cp13

0x1d21,	// (0x00020a37) listscroll_popup_fast_pane_ParamLimits

0x1d21,	// (0x00020a37) listscroll_popup_fast_pane

0x1d2d,	// (0x00020a43) grid_popup_fast_pane_ParamLimits

0x1d2d,	// (0x00020a43) grid_popup_fast_pane

0x1d3f,	// (0x00020a55) scroll_pane_cp9_ParamLimits

0x1d3f,	// (0x00020a55) scroll_pane_cp9

0xcb42,	// (0x0002b858) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb42,	// (0x0002b858) list_single_graphic_hl_pane_t1_cp2

0x1d52,	// (0x00020a68) input_focus_pane_cp20_ParamLimits

0x1d52,	// (0x00020a68) input_focus_pane_cp20

0x1d60,	// (0x00020a76) query_popup_data_pane_t1_ParamLimits

0x1d60,	// (0x00020a76) query_popup_data_pane_t1

0x1d73,	// (0x00020a89) query_popup_data_pane_t2_ParamLimits

0x1d73,	// (0x00020a89) query_popup_data_pane_t2

0x1db9,	// (0x00020acf) query_popup_data_pane_t3_ParamLimits

0x1db9,	// (0x00020acf) query_popup_data_pane_t3

0x3667,	// (0x0002237d) query_popup_data_pane_t4_ParamLimits

0x3667,	// (0x0002237d) query_popup_data_pane_t4

0x36a3,	// (0x000223b9) query_popup_data_pane_t5_ParamLimits

0x36a3,	// (0x000223b9) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0002e3b2) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0002e3b2) query_popup_data_pane_t

0x1c4a,	// (0x00020960) bg_set_opt_pane_g1

0x1c52,	// (0x00020968) bg_set_opt_pane_g2

0x1c5a,	// (0x00020970) bg_set_opt_pane_g3

0x1c62,	// (0x00020978) bg_set_opt_pane_g4

0x1c6a,	// (0x00020980) bg_set_opt_pane_g5

0x1c72,	// (0x00020988) bg_set_opt_pane_g6

0x1c7a,	// (0x00020990) bg_set_opt_pane_g7

0x1c82,	// (0x00020998) bg_set_opt_pane_g8

0x1c8a,	// (0x000209a0) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0002e3bd) bg_set_opt_pane_g

0x74ab,	// (0x000261c1) control_top_pane_stacon_ParamLimits

0x74ab,	// (0x000261c1) control_top_pane_stacon

0x74fe,	// (0x00026214) signal_pane_stacon_ParamLimits

0x74fe,	// (0x00026214) signal_pane_stacon

0x7523,	// (0x00026239) stacon_top_pane_g1_ParamLimits

0x7523,	// (0x00026239) stacon_top_pane_g1

0x7545,	// (0x0002625b) title_pane_stacon_ParamLimits

0x7545,	// (0x0002625b) title_pane_stacon

0x756f,	// (0x00026285) uni_indicator_pane_stacon_ParamLimits

0x756f,	// (0x00026285) uni_indicator_pane_stacon

0x7584,	// (0x0002629a) battery_pane_stacon_ParamLimits

0x7584,	// (0x0002629a) battery_pane_stacon

0x75c8,	// (0x000262de) control_bottom_pane_stacon_ParamLimits

0x75c8,	// (0x000262de) control_bottom_pane_stacon

0x75eb,	// (0x00026301) navi_pane_stacon_ParamLimits

0x75eb,	// (0x00026301) navi_pane_stacon

0x760e,	// (0x00026324) stacon_bottom_pane_g1_ParamLimits

0x760e,	// (0x00026324) stacon_bottom_pane_g1

0x6f04,	// (0x00025c1a) aid_levels_signal_lsc_ParamLimits

0x6f04,	// (0x00025c1a) aid_levels_signal_lsc

0x6f1a,	// (0x00025c30) signal_pane_stacon_g1_ParamLimits

0x6f1a,	// (0x00025c30) signal_pane_stacon_g1

0x6f2e,	// (0x00025c44) signal_pane_stacon_g2_ParamLimits

0x6f2e,	// (0x00025c44) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0002e3d0) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0002e3d0) signal_pane_stacon_g

0x6f63,	// (0x00025c79) title_pane_stacon_t1_ParamLimits

0x6f63,	// (0x00025c79) title_pane_stacon_t1

0x377f,	// (0x00022495) uni_indicator_pane_stacon_g1

0x3789,	// (0x0002249f) uni_indicator_pane_stacon_g2

0x376b,	// (0x00022481) uni_indicator_pane_stacon_g3

0x3775,	// (0x0002248b) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0002e3dc) uni_indicator_pane_stacon_g

0x6f88,	// (0x00025c9e) control_top_pane_stacon_g1

0x6f90,	// (0x00025ca6) control_top_pane_stacon_t1_ParamLimits

0x6f90,	// (0x00025ca6) control_top_pane_stacon_t1

0x6fc7,	// (0x00025cdd) aid_levels_battery_lsc_ParamLimits

0x6fc7,	// (0x00025cdd) aid_levels_battery_lsc

0x6fde,	// (0x00025cf4) battery_pane_stacon_g1_ParamLimits

0x6fde,	// (0x00025cf4) battery_pane_stacon_g1

0x6ff1,	// (0x00025d07) battery_pane_stacon_g2_ParamLimits

0x6ff1,	// (0x00025d07) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0002e3e5) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e3e5) battery_pane_stacon_g

0x702f,	// (0x00025d45) navi_icon_pane_stacon

0x7043,	// (0x00025d59) navi_navi_pane_stacon

0x702f,	// (0x00025d45) navi_text_pane_stacon

0x6f88,	// (0x00025c9e) control_bottom_pane_stacon_g1

0x7057,	// (0x00025d6d) control_bottom_pane_stacon_t1_ParamLimits

0x7057,	// (0x00025d6d) control_bottom_pane_stacon_t1

0x708e,	// (0x00025da4) grid_app_pane_ParamLimits

0x708e,	// (0x00025da4) grid_app_pane

0x70b2,	// (0x00025dc8) scroll_pane_cp15_ParamLimits

0x70b2,	// (0x00025dc8) scroll_pane_cp15

0x70c5,	// (0x00025ddb) cell_app_pane_ParamLimits

0x70c5,	// (0x00025ddb) cell_app_pane

0x70ed,	// (0x00025e03) cell_app_pane_g1_ParamLimits

0x70ed,	// (0x00025e03) cell_app_pane_g1

0x38b3,	// (0x000225c9) cell_app_pane_g2_ParamLimits

0x38b3,	// (0x000225c9) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0002e3ea) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0002e3ea) cell_app_pane_g

0x7111,	// (0x00025e27) cell_app_pane_t1_ParamLimits

0x7111,	// (0x00025e27) cell_app_pane_t1

0x38bf,	// (0x000225d5) grid_highlight_pane_ParamLimits

0x38bf,	// (0x000225d5) grid_highlight_pane

0x1c4a,	// (0x00020960) cell_highlight_pane_g1

0x1c52,	// (0x00020968) cell_highlight_pane_g2

0x1c5a,	// (0x00020970) cell_highlight_pane_g3

0x1c62,	// (0x00020978) cell_highlight_pane_g4

0x1c6a,	// (0x00020980) cell_highlight_pane_g5

0x1c72,	// (0x00020988) cell_highlight_pane_g6

0x1c7a,	// (0x00020990) cell_highlight_pane_g7

0x1c82,	// (0x00020998) cell_highlight_pane_g8

0x1c8a,	// (0x000209a0) cell_highlight_pane_g9

0x16f4,	// (0x0002040a) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0002e398) cell_highlight_pane_g

0x38da,	// (0x000225f0) bg_scroll_pane

0x713b,	// (0x00025e51) scroll_handle_pane

0x3936,	// (0x0002264c) scroll_bg_pane_g1

0x394b,	// (0x00022661) scroll_bg_pane_g2

0x3963,	// (0x00022679) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0002e3ef) scroll_bg_pane_g

0x7164,	// (0x00025e7a) scroll_handle_focus_pane_ParamLimits

0x7164,	// (0x00025e7a) scroll_handle_focus_pane

0x3936,	// (0x0002264c) scroll_handle_pane_g1

0x3978,	// (0x0002268e) scroll_handle_pane_g2

0x3963,	// (0x00022679) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0002e3f6) scroll_handle_pane_g

0x1c9b,	// (0x000209b1) bg_popup_sub_pane_cp21_ParamLimits

0x1c9b,	// (0x000209b1) bg_popup_sub_pane_cp21

0x7171,	// (0x00025e87) popup_fep_japan_predictive_window_t1_ParamLimits

0x7171,	// (0x00025e87) popup_fep_japan_predictive_window_t1

0x718b,	// (0x00025ea1) popup_fep_japan_predictive_window_t2_ParamLimits

0x718b,	// (0x00025ea1) popup_fep_japan_predictive_window_t2

0x71be,	// (0x00025ed4) popup_fep_japan_predictive_window_t3_ParamLimits

0x71be,	// (0x00025ed4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0002e3fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0002e3fd) popup_fep_japan_predictive_window_t

0x16fe,	// (0x00020414) bg_popup_sub_pane_cp23

0x3ddd,	// (0x00022af3) listscroll_japin_cand_pane

0x398c,	// (0x000226a2) popup_fep_japan_candidate_window_t1

0x399a,	// (0x000226b0) candidate_pane_ParamLimits

0x399a,	// (0x000226b0) candidate_pane

0x71f5,	// (0x00025f0b) scroll_pane_cp30

0x39ac,	// (0x000226c2) list_single_popup_jap_candidate_pane_ParamLimits

0x39ac,	// (0x000226c2) list_single_popup_jap_candidate_pane

0x16fe,	// (0x00020414) list_highlight_pane_cp30

0x39c1,	// (0x000226d7) list_single_popup_jap_candidate_pane_t1

0x39d0,	// (0x000226e6) level_1_signal

0x39dd,	// (0x000226f3) level_2_signal

0x39ea,	// (0x00022700) level_3_signal

0x39f7,	// (0x0002270d) level_4_signal

0x3a04,	// (0x0002271a) level_5_signal

0x3a11,	// (0x00022727) level_6_signal

0x3a1e,	// (0x00022734) level_7_signal

0x39d0,	// (0x000226e6) level_1_battery

0x39dd,	// (0x000226f3) level_2_battery

0x39ea,	// (0x00022700) level_3_battery

0x39f7,	// (0x0002270d) level_4_battery

0x3a04,	// (0x0002271a) level_5_battery

0x3a11,	// (0x00022727) level_6_battery

0x3a1e,	// (0x00022734) level_7_battery

0x3a62,	// (0x00022778) list_menu_pane_ParamLimits

0x3a62,	// (0x00022778) list_menu_pane

0x3a78,	// (0x0002278e) scroll_pane_cp25_ParamLimits

0x3a78,	// (0x0002278e) scroll_pane_cp25

0x3a91,	// (0x000227a7) list_double2_graphic_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double2_graphic_pane_cp2

0x3a91,	// (0x000227a7) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double2_large_graphic_pane_cp2

0x3a91,	// (0x000227a7) list_double2_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double2_pane_cp2

0x3a91,	// (0x000227a7) list_double_graphic_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double_graphic_pane_cp2

0x3a91,	// (0x000227a7) list_double_large_graphic_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double_large_graphic_pane_cp2

0x3a91,	// (0x000227a7) list_double_number_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double_number_pane_cp2

0x3a91,	// (0x000227a7) list_double_pane_cp2_ParamLimits

0x3a91,	// (0x000227a7) list_double_pane_cp2

0x7230,	// (0x00025f46) list_single_2graphic_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_2graphic_pane_cp2

0x7230,	// (0x00025f46) list_single_graphic_heading_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_graphic_heading_pane_cp2

0x7230,	// (0x00025f46) list_single_graphic_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_graphic_pane_cp2

0x7230,	// (0x00025f46) list_single_heading_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_heading_pane_cp2

0x3aa1,	// (0x000227b7) list_single_large_graphic_pane_cp2_ParamLimits

0x3aa1,	// (0x000227b7) list_single_large_graphic_pane_cp2

0x7230,	// (0x00025f46) list_single_number_heading_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_number_heading_pane_cp2

0x7230,	// (0x00025f46) list_single_number_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_number_pane_cp2

0x7230,	// (0x00025f46) list_single_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_pane_cp2

0x3b16,	// (0x0002282c) bg_popup_sub_pane_cp22

0x7308,	// (0x0002601e) popup_side_volume_key_window_g1

0x732c,	// (0x00026042) popup_side_volume_key_window_t1

0x7348,	// (0x0002605e) volume_small_pane_cp1

0x174c,	// (0x00020462) bg_popup_sub_pane_cp24_ParamLimits

0x174c,	// (0x00020462) bg_popup_sub_pane_cp24

0x3b46,	// (0x0002285c) fep_china_uni_candidate_pane_ParamLimits

0x3b46,	// (0x0002285c) fep_china_uni_candidate_pane

0x3b5a,	// (0x00022870) fep_china_uni_entry_pane

0x3b6a,	// (0x00022880) popup_fep_china_uni_window_g1

0x7350,	// (0x00026066) fep_china_uni_entry_pane_g1

0x7358,	// (0x0002606e) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0002e42e) fep_china_uni_entry_pane_g

0x7360,	// (0x00026076) fep_entry_item_pane

0x736a,	// (0x00026080) fep_candidate_item_pane

0x7372,	// (0x00026088) fep_china_uni_candidate_pane_g1

0x737a,	// (0x00026090) fep_china_uni_candidate_pane_g2

0x7382,	// (0x00026098) fep_china_uni_candidate_pane_g3

0x738a,	// (0x000260a0) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0002e433) fep_china_uni_candidate_pane_g

0x16f4,	// (0x0002040a) fep_entry_item_pane_g1

0x7392,	// (0x000260a8) fep_entry_item_pane_t1_ParamLimits

0x7392,	// (0x000260a8) fep_entry_item_pane_t1

0x73a8,	// (0x000260be) fep_candidate_item_pane_t1_ParamLimits

0x73a8,	// (0x000260be) fep_candidate_item_pane_t1

0x73bd,	// (0x000260d3) fep_candidate_item_pane_t2_ParamLimits

0x73bd,	// (0x000260d3) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0002e43c) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0002e43c) fep_candidate_item_pane_t

0x175a,	// (0x00020470) list_highlight_pane_cp31_ParamLimits

0x175a,	// (0x00020470) list_highlight_pane_cp31

0x73cf,	// (0x000260e5) level_1_signal_lsc

0x73d8,	// (0x000260ee) level_2_signal_lsc

0x73e1,	// (0x000260f7) level_3_signal_lsc

0x73ea,	// (0x00026100) level_4_signal_lsc

0x73f3,	// (0x00026109) level_5_signal_lsc

0x73fc,	// (0x00026112) level_6_signal_lsc

0x7405,	// (0x0002611b) level_7_signal_lsc

0x7405,	// (0x0002611b) level_1_battery_lsc

0x740e,	// (0x00026124) level_2_battery_lsc

0x7417,	// (0x0002612d) level_3_battery_lsc

0x7420,	// (0x00026136) level_4_battery_lsc

0x7429,	// (0x0002613f) level_5_battery_lsc

0x7432,	// (0x00026148) level_6_battery_lsc

0x73cf,	// (0x000260e5) level_7_battery_lsc

0x743b,	// (0x00026151) scroll_handle_focus_pane_g1

0x7444,	// (0x0002615a) scroll_handle_focus_pane_g2

0x744d,	// (0x00026163) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0002e441) scroll_handle_focus_pane_g

0x59d4,	// (0x000246ea) list_single_2graphic_pane_g1_ParamLimits

0x59d4,	// (0x000246ea) list_single_2graphic_pane_g1

0x53c1,	// (0x000240d7) list_single_2graphic_pane_g2_ParamLimits

0x53c1,	// (0x000240d7) list_single_2graphic_pane_g2

0x5347,	// (0x0002405d) list_single_2graphic_pane_g3_ParamLimits

0x5347,	// (0x0002405d) list_single_2graphic_pane_g3

0x59e0,	// (0x000246f6) list_single_2graphic_pane_g4_ParamLimits

0x59e0,	// (0x000246f6) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0002e448) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0002e448) list_single_2graphic_pane_g

0x59ec,	// (0x00024702) list_single_2graphic_pane_t1_ParamLimits

0x59ec,	// (0x00024702) list_single_2graphic_pane_t1

0x5a1a,	// (0x00024730) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a1a,	// (0x00024730) list_double2_graphic_large_graphic_pane_g1

0x55cf,	// (0x000242e5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x55cf,	// (0x000242e5) list_double2_graphic_large_graphic_pane_g2

0x55e0,	// (0x000242f6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55e0,	// (0x000242f6) list_double2_graphic_large_graphic_pane_g3

0x5a2a,	// (0x00024740) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a2a,	// (0x00024740) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0002e451) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0002e451) list_double2_graphic_large_graphic_pane_g

0x5a36,	// (0x0002474c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a36,	// (0x0002474c) list_double2_graphic_large_graphic_pane_t1

0x5a4c,	// (0x00024762) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a4c,	// (0x00024762) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0002e45a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0002e45a) list_double2_graphic_large_graphic_pane_t

0x76d5,	// (0x000263eb) popup_fast_swap_window_ParamLimits

0x76d5,	// (0x000263eb) popup_fast_swap_window

0x76f1,	// (0x00026407) popup_side_volume_key_window

0x770b,	// (0x00026421) stacon_top_pane

0x7715,	// (0x0002642b) status_pane_ParamLimits

0x7715,	// (0x0002642b) status_pane

0x7723,	// (0x00026439) status_small_pane

0x16fe,	// (0x00020414) control_pane

0x16fe,	// (0x00020414) stacon_bottom_pane

0x1b44,	// (0x0002085a) scroll_pane_cp121

0x1b3b,	// (0x00020851) set_content_pane

0x7456,	// (0x0002616c) bg_active_tab_pane_g1_cp1

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp1

0x7468,	// (0x0002617e) bg_active_tab_pane_g3_cp1

0x7456,	// (0x0002616c) bg_passive_tab_pane_g1_cp1

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp1

0x7468,	// (0x0002617e) bg_passive_tab_pane_g3_cp1

0x7471,	// (0x00026187) bg_active_tab_pane_g1_cp2

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp2

0x747a,	// (0x00026190) bg_active_tab_pane_g3_cp2

0x7471,	// (0x00026187) bg_passive_tab_pane_g1_cp2

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp2

0x747a,	// (0x00026190) bg_passive_tab_pane_g3_cp2

0x7483,	// (0x00026199) bg_active_tab_pane_g1_cp3

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp3

0x748c,	// (0x000261a2) bg_active_tab_pane_g3_cp3

0x7483,	// (0x00026199) bg_passive_tab_pane_g1_cp3

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp3

0x748c,	// (0x000261a2) bg_passive_tab_pane_g3_cp3

0x7495,	// (0x000261ab) bg_active_tab_pane_g1_cp4

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp4

0x74a0,	// (0x000261b6) bg_active_tab_pane_g3_cp4

0x7495,	// (0x000261ab) bg_passive_tab_pane_g1_cp4

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp4

0x74a0,	// (0x000261b6) bg_passive_tab_pane_g3_cp4

0x762a,	// (0x00026340) bg_active_tab_pane_g1_cp5

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp5

0x7633,	// (0x00026349) bg_active_tab_pane_g3_cp5

0x762a,	// (0x00026340) bg_passive_tab_pane_g1_cp5

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp5

0x7633,	// (0x00026349) bg_passive_tab_pane_g3_cp5

0x763c,	// (0x00026352) list_set_graphic_pane_ParamLimits

0x763c,	// (0x00026352) list_set_graphic_pane

0x16fe,	// (0x00020414) bg_set_opt_pane_cp4

0x765a,	// (0x00026370) list_set_graphic_pane_g1_ParamLimits

0x765a,	// (0x00026370) list_set_graphic_pane_g1

0x7666,	// (0x0002637c) list_set_graphic_pane_g2_ParamLimits

0x7666,	// (0x0002637c) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0002e45f) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0002e45f) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002e7f2) volume_small_pane_cp_g

0x7688,	// (0x0002639e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7688,	// (0x0002639e) list_double2_large_graphic_pane_g1_cp2

0x7694,	// (0x000263aa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7694,	// (0x000263aa) list_double2_large_graphic_pane_g2_cp2

0x76a5,	// (0x000263bb) list_double2_large_graphic_pane_g3_cp2

0x76ad,	// (0x000263c3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x76ad,	// (0x000263c3) list_double2_large_graphic_pane_t1_cp2

0x76c3,	// (0x000263d9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x76c3,	// (0x000263d9) list_double2_large_graphic_pane_t2_cp2

0xade0,	// (0x00029af6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xade0,	// (0x00029af6) list_double_large_graphic_pane_g1_cp2

0xadf1,	// (0x00029b07) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadf1,	// (0x00029b07) list_double_large_graphic_pane_g2_cp2

0x7830,	// (0x00026546) list_double_large_graphic_pane_g3_cp2

0xae02,	// (0x00029b18) list_double_large_graphic_pane_g4_cp

0xae0a,	// (0x00029b20) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae0a,	// (0x00029b20) list_double_large_graphic_pane_t1_cp2

0xae21,	// (0x00029b37) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae21,	// (0x00029b37) list_double_large_graphic_pane_t2_cp2

0x772e,	// (0x00026444) list_double2_graphic_pane_g1_cp2_ParamLimits

0x772e,	// (0x00026444) list_double2_graphic_pane_g1_cp2

0x773c,	// (0x00026452) list_double2_graphic_pane_g2_cp2_ParamLimits

0x773c,	// (0x00026452) list_double2_graphic_pane_g2_cp2

0x774d,	// (0x00026463) list_double2_graphic_pane_g3_cp2

0x7757,	// (0x0002646d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7757,	// (0x0002646d) list_double2_graphic_pane_t1_cp2

0x776d,	// (0x00026483) list_double2_graphic_pane_t2_cp2_ParamLimits

0x776d,	// (0x00026483) list_double2_graphic_pane_t2_cp2

0x1dfa,	// (0x00020b10) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1dfa,	// (0x00020b10) list_single_number_heading_pane_g1_cp2

0x777f,	// (0x00026495) list_single_number_heading_pane_g2_cp2

0x7787,	// (0x0002649d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7787,	// (0x0002649d) list_single_number_heading_pane_t1_cp2

0x779d,	// (0x000264b3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x779d,	// (0x000264b3) list_single_number_heading_pane_t2_cp2

0x77af,	// (0x000264c5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x77af,	// (0x000264c5) list_single_number_heading_pane_t3_cp2

0x1dfa,	// (0x00020b10) list_single_heading_pane_g1_cp2_ParamLimits

0x1dfa,	// (0x00020b10) list_single_heading_pane_g1_cp2

0x777f,	// (0x00026495) list_single_heading_pane_g2_cp2

0x7787,	// (0x0002649d) list_single_heading_pane_t1_cp2_ParamLimits

0x7787,	// (0x0002649d) list_single_heading_pane_t1_cp2

0xabea,	// (0x00029900) list_single_heading_pane_t2_cp2_ParamLimits

0xabea,	// (0x00029900) list_single_heading_pane_t2_cp2

0xab32,	// (0x00029848) list_double_graphic_pane_g1_cp2_ParamLimits

0xab32,	// (0x00029848) list_double_graphic_pane_g1_cp2

0xab3e,	// (0x00029854) list_double_graphic_pane_g2_cp2_ParamLimits

0xab3e,	// (0x00029854) list_double_graphic_pane_g2_cp2

0xab4d,	// (0x00029863) list_double_graphic_pane_g3_cp2

0xab55,	// (0x0002986b) list_double_graphic_pane_t1_cp2_ParamLimits

0xab55,	// (0x0002986b) list_double_graphic_pane_t1_cp2

0xab6b,	// (0x00029881) list_double_graphic_pane_t2_cp2_ParamLimits

0xab6b,	// (0x00029881) list_double_graphic_pane_t2_cp2

0x7824,	// (0x0002653a) list_double_number_pane_g1_cp2_ParamLimits

0x7824,	// (0x0002653a) list_double_number_pane_g1_cp2

0x7830,	// (0x00026546) list_double_number_pane_g2_cp2

0xaaf6,	// (0x0002980c) list_double_number_pane_t1_cp2_ParamLimits

0xaaf6,	// (0x0002980c) list_double_number_pane_t1_cp2

0xab0a,	// (0x00029820) list_double_number_pane_t2_cp2_ParamLimits

0xab0a,	// (0x00029820) list_double_number_pane_t2_cp2

0xab20,	// (0x00029836) list_double_number_pane_t3_cp2_ParamLimits

0xab20,	// (0x00029836) list_double_number_pane_t3_cp2

0xa9df,	// (0x000296f5) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9df,	// (0x000296f5) list_single_graphic_pane_g1_cp2

0x7888,	// (0x0002659e) list_single_graphic_pane_g2_cp2_ParamLimits

0x7888,	// (0x0002659e) list_single_graphic_pane_g2_cp2

0x7894,	// (0x000265aa) list_single_graphic_pane_g3_cp2

0xa9b5,	// (0x000296cb) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9b5,	// (0x000296cb) list_single_graphic_pane_t1_cp2

0x7888,	// (0x0002659e) list_single_number_pane_g1_cp2_ParamLimits

0x7888,	// (0x0002659e) list_single_number_pane_g1_cp2

0x7894,	// (0x000265aa) list_single_number_pane_g2_cp2

0xa9b5,	// (0x000296cb) list_single_number_pane_t1_cp2_ParamLimits

0xa9b5,	// (0x000296cb) list_single_number_pane_t1_cp2

0xa9cb,	// (0x000296e1) list_single_number_pane_t2_cp2_ParamLimits

0xa9cb,	// (0x000296e1) list_single_number_pane_t2_cp2

0x7694,	// (0x000263aa) list_double2_pane_g1_cp2_ParamLimits

0x7694,	// (0x000263aa) list_double2_pane_g1_cp2

0x76a5,	// (0x000263bb) list_double2_pane_g2_cp2

0x77fc,	// (0x00026512) list_double2_pane_t1_cp2_ParamLimits

0x77fc,	// (0x00026512) list_double2_pane_t1_cp2

0x7812,	// (0x00026528) list_double2_pane_t2_cp2_ParamLimits

0x7812,	// (0x00026528) list_double2_pane_t2_cp2

0x7824,	// (0x0002653a) list_double_pane_g1_cp2_ParamLimits

0x7824,	// (0x0002653a) list_double_pane_g1_cp2

0x7830,	// (0x00026546) list_double_pane_g2_cp2

0x7838,	// (0x0002654e) list_double_pane_t1_cp2_ParamLimits

0x7838,	// (0x0002654e) list_double_pane_t1_cp2

0x784e,	// (0x00026564) list_double_pane_t2_cp2_ParamLimits

0x784e,	// (0x00026564) list_double_pane_t2_cp2

0x7878,	// (0x0002658e) list_single_pane_cp2_g3

0x7888,	// (0x0002659e) list_single_pane_g1_cp2_ParamLimits

0x7888,	// (0x0002659e) list_single_pane_g1_cp2

0x7894,	// (0x000265aa) list_single_pane_g2_cp2

0x789c,	// (0x000265b2) list_single_pane_t1_cp2_ParamLimits

0x789c,	// (0x000265b2) list_single_pane_t1_cp2

0x78b4,	// (0x000265ca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x78b4,	// (0x000265ca) list_single_large_graphic_pane_g1_cp2

0x78c0,	// (0x000265d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x78c0,	// (0x000265d6) list_single_large_graphic_pane_g2_cp2

0x78cc,	// (0x000265e2) list_single_large_graphic_pane_g3_cp2

0x78d4,	// (0x000265ea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x78d4,	// (0x000265ea) list_single_large_graphic_pane_g4_cp1

0x78ee,	// (0x00026604) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x78ee,	// (0x00026604) list_single_large_graphic_pane_t1_cp2

0xa981,	// (0x00029697) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa981,	// (0x00029697) list_single_graphic_heading_pane_g1_cp2

0xa94e,	// (0x00029664) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa94e,	// (0x00029664) list_single_graphic_heading_pane_g4_cp2

0x7894,	// (0x000265aa) list_single_graphic_heading_pane_g5_cp2

0xa98d,	// (0x000296a3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa98d,	// (0x000296a3) list_single_graphic_heading_pane_t1_cp2

0xa9a3,	// (0x000296b9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9a3,	// (0x000296b9) list_single_graphic_heading_pane_t2_cp2

0xa942,	// (0x00029658) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa942,	// (0x00029658) list_single_2graphic_pane_g1_cp2

0xa94e,	// (0x00029664) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa94e,	// (0x00029664) list_single_2graphic_pane_g2_cp2

0x7894,	// (0x000265aa) list_single_2graphic_pane_g3_cp2

0xa95f,	// (0x00029675) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa95f,	// (0x00029675) list_single_2graphic_pane_g4_cp2

0xa96b,	// (0x00029681) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa96b,	// (0x00029681) list_single_2graphic_pane_t1_cp2

0x16f4,	// (0x0002040a) list_highlight_pane_g10_cp1

0xa52a,	// (0x00029240) list_highlight_pane_g1_cp1

0xa532,	// (0x00029248) list_highlight_pane_g2_cp1

0xa53a,	// (0x00029250) list_highlight_pane_g3_cp1

0xa542,	// (0x00029258) list_highlight_pane_g4_cp1

0xa54a,	// (0x00029260) list_highlight_pane_g5_cp1

0xa552,	// (0x00029268) list_highlight_pane_g6_cp1

0xa55a,	// (0x00029270) list_highlight_pane_g7_cp1

0xa562,	// (0x00029278) list_highlight_pane_g8_cp1

0xa56a,	// (0x00029280) list_highlight_pane_g9_cp1

0xa452,	// (0x00029168) form_field_slider_pane_t3

0xa460,	// (0x00029176) form_field_slider_pane_t4

0xa46e,	// (0x00029184) slider_form_pane_ParamLimits

0xa46e,	// (0x00029184) slider_form_pane

0x16fe,	// (0x00020414) control_abbreviations

0x16fe,	// (0x00020414) control_conventions

0x16fe,	// (0x00020414) control_definitions

0x16fe,	// (0x00020414) format_table_attribute

0xac34,	// (0x0002994a) bg_popup_preview_window_pane_g9

0x16fe,	// (0x00020414) format_table_data2

0x16fe,	// (0x00020414) format_table_data3

0x16fe,	// (0x00020414) format_table_data_example

0x0008,

0x16fe,	// (0x00020414) intro_purpose

0xf8e0,	// (0x0002e5f6) bg_popup_preview_window_pane_g

0x16fe,	// (0x00020414) texts_category

0x16fe,	// (0x00020414) texts_graphics

0x7904,	// (0x0002661a) text_digital

0x7913,	// (0x00026629) text_primary

0x7922,	// (0x00026638) text_primary_small

0x7931,	// (0x00026647) text_secondary

0x7940,	// (0x00026656) text_title

0xb361,	// (0x0002a077) bg_passive_tab_pane_g1_cp3_srt

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp3_srt

0xb36a,	// (0x0002a080) bg_passive_tab_pane_g3_cp3_srt

0x175a,	// (0x00020470) bg_active_tab_pane_cp3_srt_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp3_srt

0xb373,	// (0x0002a089) tabs_4_active_pane_srt_g1

0xb37b,	// (0x0002a091) tabs_4_active_pane_srt_t1_ParamLimits

0xb37b,	// (0x0002a091) tabs_4_active_pane_srt_t1

0xb361,	// (0x0002a077) bg_active_tab_pane_g1_cp3_copy1

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp3_copy1

0xb36a,	// (0x0002a080) bg_active_tab_pane_g3_cp3_copy1

0x175a,	// (0x00020470) tabs_2_long_active_pane_srt_ParamLimits

0x175a,	// (0x00020470) tabs_2_long_active_pane_srt

0x175a,	// (0x00020470) tabs_2_long_passive_pane_srt_ParamLimits

0x175a,	// (0x00020470) tabs_2_long_passive_pane_srt

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp4_srt

0xb055,	// (0x00029d6b) bg_passive_tab_pane_g1_cp4_srt

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp4_srt

0xb05e,	// (0x00029d74) bg_passive_tab_pane_g3_cp4_srt

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp4_srt_ParamLimits

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp4_srt

0xb067,	// (0x00029d7d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb067,	// (0x00029d7d) tabs_2_long_active_pane_srt_t1

0xb055,	// (0x00029d6b) bg_active_tab_pane_g1_cp4_srt

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp4_srt

0xb05e,	// (0x00029d74) bg_active_tab_pane_g3_cp4_srt

0x174c,	// (0x00020462) tabs_3_long_active_pane_srt_ParamLimits

0x174c,	// (0x00020462) tabs_3_long_active_pane_srt

0x174c,	// (0x00020462) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x174c,	// (0x00020462) tabs_3_long_passive_pane_cp_srt

0x174c,	// (0x00020462) tabs_3_long_passive_pane_srt_ParamLimits

0x174c,	// (0x00020462) tabs_3_long_passive_pane_srt

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp5_srt

0x762a,	// (0x00026340) bg_passive_tab_pane_g1_cp5_srt

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp5_srt

0x7633,	// (0x00026349) bg_passive_tab_pane_g3_cp5_srt

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp5_srt_ParamLimits

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp5_srt

0xb043,	// (0x00029d59) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb043,	// (0x00029d59) tabs_3_long_active_pane_srt_t1

0x762a,	// (0x00026340) bg_active_tab_pane_g1_cp5_srt

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp5_srt

0x7633,	// (0x00026349) bg_active_tab_pane_g3_cp5_srt

0xb035,	// (0x00029d4b) navi_text_pane_srt_t1

0xb02d,	// (0x00029d43) navi_icon_pane_srt_g1

0x7bba,	// (0x000268d0) midp_editing_number_pane_srt

0x794f,	// (0x00026665) midp_ticker_pane_srt

0x7bc2,	// (0x000268d8) midp_ticker_pane_srt_g1

0x7bca,	// (0x000268e0) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0002e47e) midp_ticker_pane_srt_g

0x7bd2,	// (0x000268e8) midp_ticker_pane_srt_t1

0xb01e,	// (0x00029d34) midp_editing_number_pane_t1_copy1

0x7957,	// (0x0002666d) listscroll_midp_pane

0x7957,	// (0x0002666d) midp_form_pane

0x79c9,	// (0x000266df) midp_info_popup_window_ParamLimits

0x79c9,	// (0x000266df) midp_info_popup_window

0x1c9b,	// (0x000209b1) bg_popup_sub_pane_cp50_ParamLimits

0x1c9b,	// (0x000209b1) bg_popup_sub_pane_cp50

0xa172,	// (0x00028e88) listscroll_midp_info_pane_ParamLimits

0xa172,	// (0x00028e88) listscroll_midp_info_pane

0xa152,	// (0x00028e68) listscroll_form_midp_pane_ParamLimits

0xa152,	// (0x00028e68) listscroll_form_midp_pane

0xa15e,	// (0x00028e74) scroll_bar_cp050

0xa132,	// (0x00028e48) list_midp_pane

0xbd97,	// (0x0002aaad) signal_pane_g2_cp

0xa06c,	// (0x00028d82) listscroll_midp_info_pane_t1_ParamLimits

0xa06c,	// (0x00028d82) listscroll_midp_info_pane_t1

0xa084,	// (0x00028d9a) listscroll_midp_info_pane_t2_ParamLimits

0xa084,	// (0x00028d9a) listscroll_midp_info_pane_t2

0xa0c2,	// (0x00028dd8) listscroll_midp_info_pane_t3_ParamLimits

0xa0c2,	// (0x00028dd8) listscroll_midp_info_pane_t3

0xa0fc,	// (0x00028e12) listscroll_midp_info_pane_t4_ParamLimits

0xa0fc,	// (0x00028e12) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0002e531) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0002e531) listscroll_midp_info_pane_t

0x1d11,	// (0x00020a27) scroll_pane_cp21

0xa00c,	// (0x00028d22) form_midp_field_choice_group_pane

0xa015,	// (0x00028d2b) form_midp_field_text_pane

0xa052,	// (0x00028d68) form_midp_field_time_pane

0xa05a,	// (0x00028d70) form_midp_gauge_slider_pane

0xa063,	// (0x00028d79) form_midp_gauge_wait_pane

0x16fe,	// (0x00020414) form_midp_image_pane

0x5bb9,	// (0x000248cf) list_single_midp_pane_ParamLimits

0x5bb9,	// (0x000248cf) list_single_midp_pane

0x9fc1,	// (0x00028cd7) form_midp_field_text_pane_t1

0x9d8b,	// (0x00028aa1) input_focus_pane_cp050

0x9ffb,	// (0x00028d11) list_midp_form_text_pane

0x9f90,	// (0x00028ca6) form_midp_field_choice_group_pane_t1

0x9f9e,	// (0x00028cb4) input_focus_pane_cp051

0x9fb2,	// (0x00028cc8) list_midp_choice_pane

0x16fe,	// (0x00020414) status_idle_pane

0x9f74,	// (0x00028c8a) form_midp_field_time_pane_t1

0x16f4,	// (0x0002040a) wait_anim_pane_g2_copy1

0x9f82,	// (0x00028c98) form_midp_field_time_pane_t2

0x0001,

0x7a79,	// (0x0002678f) aid_navinavi_width_2_pane

0xf816,	// (0x0002e52c) form_midp_field_time_pane_t

0x16fe,	// (0x00020414) input_focus_pane_cp052

0x16fe,	// (0x00020414) bg_input_focus_pane_cp040

0x9f34,	// (0x00028c4a) form_midp_gauge_slider_pane_t1

0x9f42,	// (0x00028c58) form_midp_gauge_slider_pane_t2

0x9f50,	// (0x00028c66) form_midp_gauge_slider_pane_t3

0x9f5e,	// (0x00028c74) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0002e523) form_midp_gauge_slider_pane_t

0x9f6c,	// (0x00028c82) form_midp_slider_pane

0x175a,	// (0x00020470) bg_input_focus_pane_cp041_ParamLimits

0x175a,	// (0x00020470) bg_input_focus_pane_cp041

0x9f01,	// (0x00028c17) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f01,	// (0x00028c17) form_midp_gauge_wait_pane_t1

0x9f13,	// (0x00028c29) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f13,	// (0x00028c29) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0002e51e) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0002e51e) form_midp_gauge_wait_pane_t

0x9f25,	// (0x00028c3b) form_midp_wait_pane_ParamLimits

0x9f25,	// (0x00028c3b) form_midp_wait_pane

0x9ecb,	// (0x00028be1) form_midp_image_pane_g1

0x9ed4,	// (0x00028bea) form_midp_image_pane_t1

0x9ee3,	// (0x00028bf9) form_midp_image_pane_t2

0x9ef2,	// (0x00028c08) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0002e517) form_midp_image_pane_t

0x9ec2,	// (0x00028bd8) list_single_midp_pane_g1

0x5baa,	// (0x000248c0) list_single_midp_pane_t1

0x9e99,	// (0x00028baf) list_midp_form_item_pane_ParamLimits

0x9e99,	// (0x00028baf) list_midp_form_item_pane

0x7a21,	// (0x00026737) list_midp_form_item_pane_t1

0x7a30,	// (0x00026746) midp_ticker_pane_g1

0x7a3c,	// (0x00026752) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0002e464) midp_ticker_pane_g

0x7a48,	// (0x0002675e) midp_ticker_pane_t1

0xb26b,	// (0x00029f81) midp_editing_number_pane_t1

0xb249,	// (0x00029f5f) midp_editing_number_pane

0xb258,	// (0x00029f6e) midp_ticker_pane

0xb00e,	// (0x00029d24) ai_message_heading_pane

0x16fe,	// (0x00020414) bg_popup_window_pane_cp14

0xb016,	// (0x00029d2c) listscroll_ai_message_pane

0xaf98,	// (0x00029cae) ai_message_heading_pane_g1_ParamLimits

0xaf98,	// (0x00029cae) ai_message_heading_pane_g1

0xafa4,	// (0x00029cba) ai_message_heading_pane_g2_ParamLimits

0xafa4,	// (0x00029cba) ai_message_heading_pane_g2

0xafb0,	// (0x00029cc6) ai_message_heading_pane_g3_ParamLimits

0xafb0,	// (0x00029cc6) ai_message_heading_pane_g3

0xafbc,	// (0x00029cd2) ai_message_heading_pane_g4_ParamLimits

0xafbc,	// (0x00029cd2) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0002e658) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0002e658) ai_message_heading_pane_g

0xafc8,	// (0x00029cde) ai_message_heading_pane_t1_ParamLimits

0xafc8,	// (0x00029cde) ai_message_heading_pane_t1

0xafe2,	// (0x00029cf8) ai_message_heading_pane_t2_ParamLimits

0xafe2,	// (0x00029cf8) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0002e661) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0002e661) ai_message_heading_pane_t

0xaff4,	// (0x00029d0a) bg_popup_heading_pane_cp1_ParamLimits

0xaff4,	// (0x00029d0a) bg_popup_heading_pane_cp1

0xaf86,	// (0x00029c9c) list_ai_message_pane_ParamLimits

0xaf86,	// (0x00029c9c) list_ai_message_pane

0x1d11,	// (0x00020a27) scroll_pane_cp10

0xaf22,	// (0x00029c38) list_ai_message_pane_g1

0xaf2a,	// (0x00029c40) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0002e635) list_ai_message_pane_g

0xaf32,	// (0x00029c48) list_ai_message_pane_t1_ParamLimits

0xaf32,	// (0x00029c48) list_ai_message_pane_t1

0xaf47,	// (0x00029c5d) list_ai_message_pane_t2_ParamLimits

0xaf47,	// (0x00029c5d) list_ai_message_pane_t2

0xaf5c,	// (0x00029c72) list_ai_message_pane_t3_ParamLimits

0xaf5c,	// (0x00029c72) list_ai_message_pane_t3

0xaf71,	// (0x00029c87) list_ai_message_pane_t4_ParamLimits

0xaf71,	// (0x00029c87) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0002e63a) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0002e63a) list_ai_message_pane_t

0xaf0d,	// (0x00029c23) cell_ai_soft_ind_pane_ParamLimits

0xaf0d,	// (0x00029c23) cell_ai_soft_ind_pane

0x7a5a,	// (0x00026770) cell_ai_soft_ind_pane_g1_ParamLimits

0x7a5a,	// (0x00026770) cell_ai_soft_ind_pane_g1

0x16fe,	// (0x00020414) grid_highlight_cp1

0x7a67,	// (0x0002677d) text_secondary_cp56_ParamLimits

0x7a67,	// (0x0002677d) text_secondary_cp56

0xaee2,	// (0x00029bf8) example_general_pane_ParamLimits

0xaee2,	// (0x00029bf8) example_general_pane

0xaeee,	// (0x00029c04) example_parent_pane_g1_ParamLimits

0xaeee,	// (0x00029c04) example_parent_pane_g1

0xaefa,	// (0x00029c10) example_parent_pane_t1_ParamLimits

0xaefa,	// (0x00029c10) example_parent_pane_t1

0x8241,	// (0x00026f57) popup_preview_text_window_ParamLimits

0x8241,	// (0x00026f57) popup_preview_text_window

0x7880,	// (0x00026596) list_single_pane_cp2_g4

0x1946,	// (0x0002065c) bg_popup_preview_window_pane_ParamLimits

0x1946,	// (0x0002065c) bg_popup_preview_window_pane

0xac3c,	// (0x00029952) popup_preview_text_window_t1_ParamLimits

0xac3c,	// (0x00029952) popup_preview_text_window_t1

0xac5a,	// (0x00029970) popup_preview_text_window_t2_ParamLimits

0xac5a,	// (0x00029970) popup_preview_text_window_t2

0xaca3,	// (0x000299b9) popup_preview_text_window_t3_ParamLimits

0xaca3,	// (0x000299b9) popup_preview_text_window_t3

0xace8,	// (0x000299fe) popup_preview_text_window_t4_ParamLimits

0xace8,	// (0x000299fe) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0002e609) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0002e609) popup_preview_text_window_t

0xad66,	// (0x00029a7c) scroll_pane_cp11

0x9d17,	// (0x00028a2d) bg_popup_preview_window_pane_g1

0xabfc,	// (0x00029912) bg_popup_preview_window_pane_g2

0xac04,	// (0x0002991a) bg_popup_preview_window_pane_g3

0xac0c,	// (0x00029922) bg_popup_preview_window_pane_g4

0xac14,	// (0x0002992a) bg_popup_preview_window_pane_g5

0xac1c,	// (0x00029932) bg_popup_preview_window_pane_g6

0xac24,	// (0x0002993a) bg_popup_preview_window_pane_g7

0xac2c,	// (0x00029942) bg_popup_preview_window_pane_g8

0x6487,	// (0x0002519d) aid_popup_width_pane

0x821f,	// (0x00026f35) popup_midp_note_alarm_window_ParamLimits

0x821f,	// (0x00026f35) popup_midp_note_alarm_window

0x1b78,	// (0x0002088e) data_form_pane_ParamLimits

0x5827,	// (0x0002453d) form_field_data_pane_g1

0x5831,	// (0x00024547) form_field_data_pane_t1_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_ParamLimits

0x5849,	// (0x0002455f) data_form_wide_pane_ParamLimits

0x585a,	// (0x00024570) form_field_data_wide_pane_g1

0x5866,	// (0x0002457c) form_field_data_wide_pane_t1_ParamLimits

0x1a1a,	// (0x00020730) input_focus_pane_cp6_ParamLimits

0x6e70,	// (0x00025b86) input_popup_find_pane_g1_ParamLimits

0x6e70,	// (0x00025b86) input_popup_find_pane_g1

0x7002,	// (0x00025d18) aid_navi_side_left_pane

0x7017,	// (0x00025d2d) aid_navi_side_right_pane

0xa625,	// (0x0002933b) bg_popup_window_pane_cp30_ParamLimits

0xa625,	// (0x0002933b) bg_popup_window_pane_cp30

0xa69f,	// (0x000293b5) popup_midp_note_alarm_window_g1_ParamLimits

0xa69f,	// (0x000293b5) popup_midp_note_alarm_window_g1

0xa6cf,	// (0x000293e5) popup_midp_note_alarm_window_t1_ParamLimits

0xa6cf,	// (0x000293e5) popup_midp_note_alarm_window_t1

0xa770,	// (0x00029486) popup_midp_note_alarm_window_t2_ParamLimits

0xa770,	// (0x00029486) popup_midp_note_alarm_window_t2

0xa81e,	// (0x00029534) popup_midp_note_alarm_window_t3_ParamLimits

0xa81e,	// (0x00029534) popup_midp_note_alarm_window_t3

0xa846,	// (0x0002955c) popup_midp_note_alarm_window_t4_ParamLimits

0xa846,	// (0x0002955c) popup_midp_note_alarm_window_t4

0xa866,	// (0x0002957c) popup_midp_note_alarm_window_t5_ParamLimits

0xa866,	// (0x0002957c) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0002e5a6) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0002e5a6) popup_midp_note_alarm_window_t

0xa912,	// (0x00029628) wait_bar_pane_cp1_ParamLimits

0xa912,	// (0x00029628) wait_bar_pane_cp1

0x16fe,	// (0x00020414) wait_anim_pane_copy1

0x16fe,	// (0x00020414) wait_border_pane_copy1

0xa31b,	// (0x00029031) wait_border_pane_g1_copy1

0x5880,	// (0x00024596) form_field_popup_pane_g1

0x5888,	// (0x0002459e) form_field_popup_pane_t1_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_cp7_ParamLimits

0x1bf1,	// (0x00020907) list_form_pane_ParamLimits

0x58a0,	// (0x000245b6) form_field_popup_wide_pane_g1

0x58a8,	// (0x000245be) form_field_popup_wide_pane_t1_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_cp8_ParamLimits

0x1c1a,	// (0x00020930) list_form_wide_pane_ParamLimits

0xb3f5,	// (0x0002a10b) aid_size_cell_graphic_pane

0x5932,	// (0x00024648) data_form_pane_t1_ParamLimits

0x5bfe,	// (0x00024914) data_form_wide_pane_t1_ParamLimits

0x8526,	// (0x0002723c) bg_status_flat_pane

0x6886,	// (0x0002559c) title_pane_t1_ParamLimits

0x1714,	// (0x0002042a) title_pane_t2_ParamLimits

0x173a,	// (0x00020450) title_pane_t3_ParamLimits

0xf557,	// (0x0002e26d) title_pane_t_ParamLimits

0x39d0,	// (0x000226e6) level_1_signal_ParamLimits

0x39dd,	// (0x000226f3) level_2_signal_ParamLimits

0x39ea,	// (0x00022700) level_3_signal_ParamLimits

0x39f7,	// (0x0002270d) level_4_signal_ParamLimits

0x3a04,	// (0x0002271a) level_5_signal_ParamLimits

0x3a11,	// (0x00022727) level_6_signal_ParamLimits

0x3a1e,	// (0x00022734) level_7_signal_ParamLimits

0x39d0,	// (0x000226e6) level_1_battery_ParamLimits

0x39dd,	// (0x000226f3) level_2_battery_ParamLimits

0x39ea,	// (0x00022700) level_3_battery_ParamLimits

0x39f7,	// (0x0002270d) level_4_battery_ParamLimits

0x3a04,	// (0x0002271a) level_5_battery_ParamLimits

0x3a11,	// (0x00022727) level_6_battery_ParamLimits

0x3a1e,	// (0x00022734) level_7_battery_ParamLimits

0xa52a,	// (0x00029240) bg_status_flat_pane_g1

0xa532,	// (0x00029248) bg_status_flat_pane_g2

0xa53a,	// (0x00029250) bg_status_flat_pane_g3

0xa542,	// (0x00029258) bg_status_flat_pane_g4

0xa54a,	// (0x00029260) bg_status_flat_pane_g5

0xa552,	// (0x00029268) bg_status_flat_pane_g6

0xa55a,	// (0x00029270) bg_status_flat_pane_g7

0x68f6,	// (0x0002560c) tabs_3_active_pane_t1_ParamLimits

0x68f6,	// (0x0002560c) tabs_3_passive_pane_t1_ParamLimits

0x6910,	// (0x00025626) tabs_4_active_pane_t1_ParamLimits

0x6910,	// (0x00025626) tabs_4_1_passive_pane_t1_ParamLimits

0x6ea7,	// (0x00025bbd) tabs_2_active_pane_t1_ParamLimits

0x6ea7,	// (0x00025bbd) tabs_2_passive_pane_t1_ParamLimits

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp4_ParamLimits

0x6eb9,	// (0x00025bcf) tabs_2_long_active_pane_t1_ParamLimits

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp4_ParamLimits

0x8807,	// (0x0002751d) list_single_midp_graphic_pane_t1_ParamLimits

0x1e06,	// (0x00020b1c) bg_active_tab_pane_cp5_ParamLimits

0x6ed8,	// (0x00025bee) tabs_3_long_active_pane_t1_ParamLimits

0x6ecc,	// (0x00025be2) bg_passive_tab_pane_cp5_ParamLimits

0x8807,	// (0x0002751d) list_single_midp_graphic_pane_t1

0x8526,	// (0x0002723c) bg_status_flat_pane_ParamLimits

0x85ef,	// (0x00027305) indicator_pane_cp2_ParamLimits

0x85ef,	// (0x00027305) indicator_pane_cp2

0x871a,	// (0x00027430) navi_pane_srt_ParamLimits

0x871a,	// (0x00027430) navi_pane_srt

0x873e,	// (0x00027454) popup_clock_digital_analogue_window_cp1

0x17b8,	// (0x000204ce) indicator_pane_t1

0x794f,	// (0x00026665) copy_highlight_pane

0x794f,	// (0x00026665) cursor_graphics_pane

0x794f,	// (0x00026665) graphic_within_text_pane

0x794f,	// (0x00026665) link_highlight_pane

0xad29,	// (0x00029a3f) popup_preview_text_window_t5_ParamLimits

0xad29,	// (0x00029a3f) popup_preview_text_window_t5

0x7a81,	// (0x00026797) cursor_digital_pane

0x7a81,	// (0x00026797) cursor_primary_pane

0x7a92,	// (0x000267a8) cursor_primary_small_pane

0x7a9a,	// (0x000267b0) cursor_secondary_pane

0x7aa2,	// (0x000267b8) cursor_title_pane

0x7a81,	// (0x00026797) link_highlight_digital_pane

0x7a89,	// (0x0002679f) link_highlight_primary_pane

0x7a92,	// (0x000267a8) link_highlight_primary_small_pane

0x7a9a,	// (0x000267b0) link_highlight_secondary_pane

0x7aa2,	// (0x000267b8) link_highlight_title_pane

0x7a81,	// (0x00026797) copy_highlight_digital_pane

0x7a81,	// (0x00026797) copy_highlight_primary_pane

0x7a92,	// (0x000267a8) copy_highlight_primary_small_pane

0x7a9a,	// (0x000267b0) copy_highlight_secondary_pane

0x7aa2,	// (0x000267b8) copy_highlight_title_pane

0x7a9a,	// (0x000267b0) graphic_text_digital_pane

0xa5c8,	// (0x000292de) graphic_text_primary_pane

0xa5d1,	// (0x000292e7) graphic_text_primary_small_pane

0x7a92,	// (0x000267a8) graphic_text_secondary_pane

0x7a81,	// (0x00026797) graphic_text_title_pane

0x7aaa,	// (0x000267c0) cursor_primary_pane_g1

0xa5ba,	// (0x000292d0) cursor_text_primary_t1

0xa5a2,	// (0x000292b8) cursor_primary_small_pane_g1

0xa5ac,	// (0x000292c2) cursor_text_primary_small_t1

0xa58a,	// (0x000292a0) cursor_primary_small_pane_g1_copy1

0xa594,	// (0x000292aa) cursor_text_primary_small_t1_copy1

0xa572,	// (0x00029288) cursor_text_title_t1

0xa580,	// (0x00029296) cursor_title_pane_g1

0x7aaa,	// (0x000267c0) cursor_digital_pane_g1

0x7ab4,	// (0x000267ca) cursor_text_digital_t1

0x7ac2,	// (0x000267d8) link_highlight_primary_pane_g1

0xa51b,	// (0x00029231) link_highlight_primary_pane_t1

0x7ac2,	// (0x000267d8) link_highlight_primary_small_pane_g1

0x7aca,	// (0x000267e0) link_highlight_primary_small_pane_t1

0x7ac2,	// (0x000267d8) link_highlight_secondary_pane_g1

0x7ad9,	// (0x000267ef) link_highlight_secondary_pane_t1

0xa480,	// (0x00029196) link_highlight_title_pane_g1

0xa497,	// (0x000291ad) link_highlight_title_pane_t1

0xa480,	// (0x00029196) link_highlight_digital_pane_g1

0xa488,	// (0x0002919e) link_highlight_digital_pane_t1

0xa33a,	// (0x00029050) copy_highlight_primary_pane_g1

0xa360,	// (0x00029076) copy_highlight_primary_pane_t1

0xa33a,	// (0x00029050) copy_highlight_primary_small_pane_g1

0xa351,	// (0x00029067) copy_highlight_primary_small_pane_t1

0x7ae8,	// (0x000267fe) copy_highlight_secondary_pane_g1

0x7af0,	// (0x00026806) copy_highlight_secondary_pane_t1

0xa33a,	// (0x00029050) copy_highlight_title_pane_g1

0xa342,	// (0x00029058) copy_highlight_title_pane_t1

0xa33a,	// (0x00029050) copy_highlight_digital_pane_g1

0xb5c3,	// (0x0002a2d9) copy_highlight_digital_pane_t1

0xb517,	// (0x0002a22d) graphic_text_primary_pane_g1

0xb5a7,	// (0x0002a2bd) graphic_text_primary_pane_t1

0xb5b5,	// (0x0002a2cb) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0002e6d5) graphic_text_primary_pane_t

0xb583,	// (0x0002a299) graphic_text_primary_small_pane_g1

0xb58b,	// (0x0002a2a1) graphic_text_primary_small_pane_t1

0xb599,	// (0x0002a2af) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0002e6d0) graphic_text_primary_small_pane_t

0xb55f,	// (0x0002a275) graphic_text_secondary_pane_g1

0xb567,	// (0x0002a27d) graphic_text_secondary_pane_t1

0xb575,	// (0x0002a28b) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0002e6cb) graphic_text_secondary_pane_t

0xb53b,	// (0x0002a251) graphic_text_title_pane_g1

0xb543,	// (0x0002a259) graphic_text_title_pane_t1

0xb551,	// (0x0002a267) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0002e6c6) graphic_text_title_pane_t

0xb517,	// (0x0002a22d) graphic_text_digital_pane_g1

0xb51f,	// (0x0002a235) graphic_text_digital_pane_t1

0xb52d,	// (0x0002a243) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0002e6c1) graphic_text_digital_pane_t

0x175a,	// (0x00020470) navi_icon_pane_srt_ParamLimits

0x175a,	// (0x00020470) navi_icon_pane_srt

0x16fe,	// (0x00020414) navi_midp_pane_srt

0x16fe,	// (0x00020414) navi_navi_pane_srt

0x175a,	// (0x00020470) navi_text_pane_srt_ParamLimits

0x175a,	// (0x00020470) navi_text_pane_srt

0xb4e2,	// (0x0002a1f8) navi_navi_icon_text_pane_srt

0xb4ea,	// (0x0002a200) navi_navi_pane_srt_g1_ParamLimits

0xb4ea,	// (0x0002a200) navi_navi_pane_srt_g1

0xb4fc,	// (0x0002a212) navi_navi_pane_srt_g2_ParamLimits

0xb4fc,	// (0x0002a212) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0002e6bc) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0002e6bc) navi_navi_pane_srt_g

0xb50e,	// (0x0002a224) navi_navi_tabs_pane_srt

0xb4e2,	// (0x0002a1f8) navi_navi_text_pane_srt

0xb4e2,	// (0x0002a1f8) navi_navi_volume_pane_srt

0xb4d3,	// (0x0002a1e9) navi_navi_text_pane_srt_t1

0x8b87,	// (0x0002789d) navi_navi_volume_pane_srt_g1

0x8b8f,	// (0x000278a5) volume_small_pane_srt_ParamLimits

0x8b8f,	// (0x000278a5) volume_small_pane_srt

0x7aff,	// (0x00026815) volume_small_pane_srt_g1_ParamLimits

0x7aff,	// (0x00026815) volume_small_pane_srt_g1

0x7b0f,	// (0x00026825) volume_small_pane_srt_g2_ParamLimits

0x7b0f,	// (0x00026825) volume_small_pane_srt_g2

0x7b20,	// (0x00026836) volume_small_pane_srt_g3_ParamLimits

0x7b20,	// (0x00026836) volume_small_pane_srt_g3

0x7b31,	// (0x00026847) volume_small_pane_srt_g4_ParamLimits

0x7b31,	// (0x00026847) volume_small_pane_srt_g4

0x7b42,	// (0x00026858) volume_small_pane_srt_g5_ParamLimits

0x7b42,	// (0x00026858) volume_small_pane_srt_g5

0x7b53,	// (0x00026869) volume_small_pane_srt_g6_ParamLimits

0x7b53,	// (0x00026869) volume_small_pane_srt_g6

0x7b64,	// (0x0002687a) volume_small_pane_srt_g7_ParamLimits

0x7b64,	// (0x0002687a) volume_small_pane_srt_g7

0x7b75,	// (0x0002688b) volume_small_pane_srt_g8_ParamLimits

0x7b75,	// (0x0002688b) volume_small_pane_srt_g8

0x7b86,	// (0x0002689c) volume_small_pane_srt_g9_ParamLimits

0x7b86,	// (0x0002689c) volume_small_pane_srt_g9

0x7b97,	// (0x000268ad) volume_small_pane_srt_g10_ParamLimits

0x7b97,	// (0x000268ad) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0002e469) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0002e469) volume_small_pane_srt_g

0x6b37,	// (0x0002584d) query_popup_data_pane_cp2

0xb4b9,	// (0x0002a1cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4b9,	// (0x0002a1cf) navi_navi_icon_text_pane_srt_t1

0xa5c8,	// (0x000292de) navi_tabs_2_long_pane_srt

0xa5c8,	// (0x000292de) navi_tabs_2_pane_srt

0xa5c8,	// (0x000292de) navi_tabs_3_long_pane_srt

0xa5c8,	// (0x000292de) navi_tabs_3_pane_srt

0xa5c8,	// (0x000292de) navi_tabs_4_pane_srt

0x8b67,	// (0x0002787d) tabs_2_active_pane_srt_ParamLimits

0x8b67,	// (0x0002787d) tabs_2_active_pane_srt

0x8b77,	// (0x0002788d) tabs_2_passive_pane_srt_ParamLimits

0x8b77,	// (0x0002788d) tabs_2_passive_pane_srt

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp1_srt

0xb485,	// (0x0002a19b) bg_passive_tab_pane_g1_cp1_srt

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp1_srt

0xb48e,	// (0x0002a1a4) bg_passive_tab_pane_g3_cp1_srt

0x175a,	// (0x00020470) bg_active_tab_pane_cp1_srt_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp1_srt

0xb497,	// (0x0002a1ad) tabs_2_active_pane_srt_g1

0xb49f,	// (0x0002a1b5) tabs_2_active_pane_srt_t1_ParamLimits

0xb49f,	// (0x0002a1b5) tabs_2_active_pane_srt_t1

0xb485,	// (0x0002a19b) bg_active_tab_pane_g1_cp1_srt

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp1_srt

0xb48e,	// (0x0002a1a4) bg_active_tab_pane_g3_cp1_srt

0x8b34,	// (0x0002784a) tabs_3_active_pane_srt_ParamLimits

0x8b34,	// (0x0002784a) tabs_3_active_pane_srt

0x8b45,	// (0x0002785b) tabs_3_passive_pane_cp_srt_ParamLimits

0x8b45,	// (0x0002785b) tabs_3_passive_pane_cp_srt

0x8b56,	// (0x0002786c) tabs_3_passive_pane_srt_ParamLimits

0x8b56,	// (0x0002786c) tabs_3_passive_pane_srt

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7eb4,	// (0x00026bca) bg_passive_tab_pane_cp2_srt

0x7ba8,	// (0x000268be) bg_passive_tab_pane_g1_cp2_srt

0x745f,	// (0x00026175) bg_passive_tab_pane_g2_cp2_srt

0x7bb1,	// (0x000268c7) bg_passive_tab_pane_g3_cp2_srt

0x175a,	// (0x00020470) bg_active_tab_pane_cp2_srt_ParamLimits

0x175a,	// (0x00020470) bg_active_tab_pane_cp2_srt

0xb46b,	// (0x0002a181) tabs_3_active_pane_srt_g1

0xb473,	// (0x0002a189) tabs_3_active_pane_srt_t1_ParamLimits

0xb473,	// (0x0002a189) tabs_3_active_pane_srt_t1

0x7ba8,	// (0x000268be) bg_active_tab_pane_g1_cp2_srt

0x745f,	// (0x00026175) bg_active_tab_pane_g2_cp2_srt

0x7bb1,	// (0x000268c7) bg_active_tab_pane_g3_cp2_srt

0x8aec,	// (0x00027802) tabs_4_active_pane_srt_ParamLimits

0x8aec,	// (0x00027802) tabs_4_active_pane_srt

0x8afe,	// (0x00027814) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8afe,	// (0x00027814) tabs_4_passive_pane_cp2_srt

0x7e56,	// (0x00026b6c) aid_size_cell_toolbar

0x6ecc,	// (0x00025be2) main_idle_act_pane_ParamLimits

0x8051,	// (0x00026d67) popup_large_graphic_colour_window_ParamLimits

0x83bc,	// (0x000270d2) popup_toolbar_window_ParamLimits

0x83bc,	// (0x000270d2) popup_toolbar_window

0x5c40,	// (0x00024956) list_single_graphic_2heading_pane_ParamLimits

0x5c40,	// (0x00024956) list_single_graphic_2heading_pane

0x3899,	// (0x000225af) aid_size_cell_apps_grid_lsc_pane

0x38ab,	// (0x000225c1) aid_size_cell_apps_grid_prt_pane

0x7eb4,	// (0x00026bca) bg_wml_button_pane_cp1_ParamLimits

0x7eb4,	// (0x00026bca) bg_wml_button_pane_cp1

0x9fc1,	// (0x00028cd7) form_midp_field_text_pane_t1_ParamLimits

0x9d8b,	// (0x00028aa1) input_focus_pane_cp050_ParamLimits

0x9ffb,	// (0x00028d11) list_midp_form_text_pane_ParamLimits

0x9f9e,	// (0x00028cb4) input_focus_pane_cp051_ParamLimits

0x9fb2,	// (0x00028cc8) list_midp_choice_pane_ParamLimits

0x9e41,	// (0x00028b57) list_single_2graphic_pane_cp3_ParamLimits

0x9e41,	// (0x00028b57) list_single_2graphic_pane_cp3

0x9e66,	// (0x00028b7c) list_single_midp_graphic_pane_ParamLimits

0x9e66,	// (0x00028b7c) list_single_midp_graphic_pane

0x5a8a,	// (0x000247a0) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a8a,	// (0x000247a0) list_single_graphic_2heading_pane_g1

0x533b,	// (0x00024051) list_single_graphic_2heading_pane_g4_ParamLimits

0x533b,	// (0x00024051) list_single_graphic_2heading_pane_g4

0x5347,	// (0x0002405d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5347,	// (0x0002405d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0002e4bc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0002e4bc) list_single_graphic_2heading_pane_g

0x5a96,	// (0x000247ac) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a96,	// (0x000247ac) list_single_graphic_2heading_pane_t1

0x5aaa,	// (0x000247c0) list_single_graphic_2heading_pane_t2_ParamLimits

0x5aaa,	// (0x000247c0) list_single_graphic_2heading_pane_t2

0x5ac4,	// (0x000247da) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ac4,	// (0x000247da) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0002e4c3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0002e4c3) list_single_graphic_2heading_pane_t

0x9c55,	// (0x0002896b) bg_popup_sub_pane_cp2

0x9c7f,	// (0x00028995) grid_toobar_pane

0x878a,	// (0x000274a0) cell_toolbar_pane_ParamLimits

0x878a,	// (0x000274a0) cell_toolbar_pane

0x9cbb,	// (0x000289d1) cell_toolbar_pane_g1_ParamLimits

0x9cbb,	// (0x000289d1) cell_toolbar_pane_g1

0x9ccf,	// (0x000289e5) cell_toolbar_pane_g2_ParamLimits

0x9ccf,	// (0x000289e5) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0002e4d1) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0002e4d1) cell_toolbar_pane_g

0x9cf1,	// (0x00028a07) grid_highlight_pane_cp2_ParamLimits

0x9cf1,	// (0x00028a07) grid_highlight_pane_cp2

0x9d0b,	// (0x00028a21) toolbar_button_pane

0x9d17,	// (0x00028a2d) toolbar_button_pane_g1

0x9d1f,	// (0x00028a35) toolbar_button_pane_g2

0x9d27,	// (0x00028a3d) toolbar_button_pane_g3

0x9d2f,	// (0x00028a45) toolbar_button_pane_g4

0x9d37,	// (0x00028a4d) toolbar_button_pane_g5

0x9d3f,	// (0x00028a55) toolbar_button_pane_g6

0x9d47,	// (0x00028a5d) toolbar_button_pane_g7

0x9d4f,	// (0x00028a65) toolbar_button_pane_g8

0x9d57,	// (0x00028a6d) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0002e4d6) toolbar_button_pane_g

0x87c2,	// (0x000274d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x87c2,	// (0x000274d8) list_single_2graphic_pane_g1_cp3

0x87ce,	// (0x000274e4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x87ce,	// (0x000274e4) list_single_2graphic_pane_g2_cp3

0x777f,	// (0x00026495) list_single_2graphic_pane_g3_cp3

0x87df,	// (0x000274f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x87df,	// (0x000274f5) list_single_2graphic_pane_g4_cp3

0x87eb,	// (0x00027501) list_single_2graphic_pane_t1_cp3_ParamLimits

0x87eb,	// (0x00027501) list_single_2graphic_pane_t1_cp3

0x1dfa,	// (0x00020b10) list_single_midp_graphic_pane_g2_ParamLimits

0x1dfa,	// (0x00020b10) list_single_midp_graphic_pane_g2

0x7e5e,	// (0x00026b74) aid_zoom_text_primary

0x5a5e,	// (0x00024774) aid_zoom_text_secondary

0x7c62,	// (0x00026978) status_small_pane_g7_ParamLimits

0x7c62,	// (0x00026978) status_small_pane_g7

0x7c85,	// (0x0002699b) status_small_pane_t1_ParamLimits

0x6869,	// (0x0002557f) title_pane_g2

0x0003,

0xf54e,	// (0x0002e264) title_pane_g

0x6b91,	// (0x000258a7) aid_size_cell_colour_1_pane_ParamLimits

0x6b91,	// (0x000258a7) aid_size_cell_colour_1_pane

0x6ba5,	// (0x000258bb) aid_size_cell_colour_2_pane_ParamLimits

0x6ba5,	// (0x000258bb) aid_size_cell_colour_2_pane

0x6bb9,	// (0x000258cf) aid_size_cell_colour_3_pane_ParamLimits

0x6bb9,	// (0x000258cf) aid_size_cell_colour_3_pane

0x6bcd,	// (0x000258e3) aid_size_cell_colour_4_pane_ParamLimits

0x6bcd,	// (0x000258e3) aid_size_cell_colour_4_pane

0x6f3f,	// (0x00025c55) title_pane_stacon_g1_ParamLimits

0x6f3f,	// (0x00025c55) title_pane_stacon_g1

0xa3b7,	// (0x000290cd) popup_note_wait_window_g3_ParamLimits

0xa3b7,	// (0x000290cd) popup_note_wait_window_g3

0xa42d,	// (0x00029143) popup_note_wait_window_t5_ParamLimits

0xa42d,	// (0x00029143) popup_note_wait_window_t5

0x16fe,	// (0x00020414) main_feb_china_hwr_fs_writing_pane

0x7f38,	// (0x00026c4e) popup_feb_china_hwr_fs_window_ParamLimits

0x7f38,	// (0x00026c4e) popup_feb_china_hwr_fs_window

0x881d,	// (0x00027533) aid_size_cell_hwr_fs_ParamLimits

0x881d,	// (0x00027533) aid_size_cell_hwr_fs

0x9d8b,	// (0x00028aa1) bg_popup_sub_pane_cp3_ParamLimits

0x9d8b,	// (0x00028aa1) bg_popup_sub_pane_cp3

0x8832,	// (0x00027548) grid_hwr_fs_pane_ParamLimits

0x8832,	// (0x00027548) grid_hwr_fs_pane

0x884a,	// (0x00027560) linegrid_hwr_fs_pane_ParamLimits

0x884a,	// (0x00027560) linegrid_hwr_fs_pane

0x885a,	// (0x00027570) cell_hwr_fs_pane_ParamLimits

0x885a,	// (0x00027570) cell_hwr_fs_pane

0x9d97,	// (0x00028aad) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d97,	// (0x00028aad) linegrid_hwr_fs_pane_g1

0x9da3,	// (0x00028ab9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9da3,	// (0x00028ab9) linegrid_hwr_fs_pane_g2

0x9db5,	// (0x00028acb) linegrid_hwr_fs_pane_g3_ParamLimits

0x9db5,	// (0x00028acb) linegrid_hwr_fs_pane_g3

0x887c,	// (0x00027592) linegrid_hwr_fs_pane_g4_ParamLimits

0x887c,	// (0x00027592) linegrid_hwr_fs_pane_g4

0x8896,	// (0x000275ac) linegrid_hwr_fs_pane_g5_ParamLimits

0x8896,	// (0x000275ac) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0002e4fc) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0002e4fc) linegrid_hwr_fs_pane_g

0x9dc1,	// (0x00028ad7) cell_hwr_fs_pane_g1_ParamLimits

0x9dc1,	// (0x00028ad7) cell_hwr_fs_pane_g1

0x9b8f,	// (0x000288a5) cell_hwr_fs_pane_g2_ParamLimits

0x9b8f,	// (0x000288a5) cell_hwr_fs_pane_g2

0x9dd7,	// (0x00028aed) cell_hwr_fs_pane_g3_ParamLimits

0x9dd7,	// (0x00028aed) cell_hwr_fs_pane_g3

0x9de4,	// (0x00028afa) cell_hwr_fs_pane_g4_ParamLimits

0x9de4,	// (0x00028afa) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0002e507) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0002e507) cell_hwr_fs_pane_g

0x88ac,	// (0x000275c2) cell_hwr_fs_pane_t1

0x16fe,	// (0x00020414) grid_highlight_pane_cp6

0x16fe,	// (0x00020414) main_idle_act2_pane

0x1cf8,	// (0x00020a0e) aid_inside_area_popup_secondary

0xaa4c,	// (0x00029762) aid_inside_area_window_primary_ParamLimits

0xaa4c,	// (0x00029762) aid_inside_area_window_primary

0xb5d2,	// (0x0002a2e8) ai2_news_ticker_pane

0xb5da,	// (0x0002a2f0) aid_size_cell_ai1_link_ParamLimits

0xb5da,	// (0x0002a2f0) aid_size_cell_ai1_link

0xb5f4,	// (0x0002a30a) popup_ai2_data_window_ParamLimits

0xb5f4,	// (0x0002a30a) popup_ai2_data_window

0xb60a,	// (0x0002a320) popup_ai2_link_window_ParamLimits

0xb60a,	// (0x0002a320) popup_ai2_link_window

0x9d8b,	// (0x00028aa1) bg_popup_sub_pane_cp4_ParamLimits

0x9d8b,	// (0x00028aa1) bg_popup_sub_pane_cp4

0xb61e,	// (0x0002a334) grid_ai2_link_pane_ParamLimits

0xb61e,	// (0x0002a334) grid_ai2_link_pane

0xb635,	// (0x0002a34b) popup_ai2_link_window_g1_ParamLimits

0xb635,	// (0x0002a34b) popup_ai2_link_window_g1

0xb641,	// (0x0002a357) popup_ai2_link_window_g2_ParamLimits

0xb641,	// (0x0002a357) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0002e6da) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0002e6da) popup_ai2_link_window_g

0xb650,	// (0x0002a366) ai2_mp_button_pane

0xb658,	// (0x0002a36e) ai2_mp_volume_pane

0x9f9e,	// (0x00028cb4) bg_popup_sub_pane_cp5_ParamLimits

0x9f9e,	// (0x00028cb4) bg_popup_sub_pane_cp5

0xb660,	// (0x0002a376) heading_ai2_gene_pane_ParamLimits

0xb660,	// (0x0002a376) heading_ai2_gene_pane

0xb66c,	// (0x0002a382) list_ai2_gene_pane_ParamLimits

0xb66c,	// (0x0002a382) list_ai2_gene_pane

0xb6b4,	// (0x0002a3ca) cell_ai2_link_pane_ParamLimits

0xb6b4,	// (0x0002a3ca) cell_ai2_link_pane

0xb6ca,	// (0x0002a3e0) cell_ai2_link_pane_g1

0x16fe,	// (0x00020414) grid_highlight_pane_cp7

0x8ba4,	// (0x000278ba) ai2_mp_volume_pane_g1

0xb79a,	// (0x0002a4b0) ai2_mp_volume_pane_g2

0xb70f,	// (0x0002a425) list_ai2_gene_pane_t1

0xb7a2,	// (0x0002a4b8) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0002e6f3) ai2_mp_volume_pane_g

0x8bac,	// (0x000278c2) volume_small_pane_cp3

0xb7aa,	// (0x0002a4c0) aid_size_cell_ai2_button

0xb7b2,	// (0x0002a4c8) grid_ai2_button_pane

0xb7bb,	// (0x0002a4d1) cell_ai2_button_pane_ParamLimits

0xb7bb,	// (0x0002a4d1) cell_ai2_button_pane

0x16f4,	// (0x0002040a) cell_ai2_button_pane_g1

0x16fe,	// (0x00020414) grid_highlight_pane_cp8

0xb75a,	// (0x0002a470) ai2_gene_pane_t1_ParamLimits

0xb75a,	// (0x0002a470) ai2_gene_pane_t1

0x7e4c,	// (0x00026b62) aid_height_parent_landscape

0xb0b5,	// (0x00029dcb) aid_height_set_list

0xb0c6,	// (0x00029ddc) aid_size_parent

0xb3f5,	// (0x0002a10b) aid_size_cell_graphic_pane_ParamLimits

0xb67c,	// (0x0002a392) popup_ai2_data_window_g1_ParamLimits

0xb67c,	// (0x0002a392) popup_ai2_data_window_g1

0xb688,	// (0x0002a39e) ai2_news_ticker_pane_g1

0xb690,	// (0x0002a3a6) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0002e6df) ai2_news_ticker_pane_g

0xb698,	// (0x0002a3ae) ai2_news_ticker_pane_t1

0xb6a6,	// (0x0002a3bc) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0002e6e4) ai2_news_ticker_pane_t

0xb6d3,	// (0x0002a3e9) heading_ai2_gene_pane_g1

0xb6db,	// (0x0002a3f1) heading_ai2_gene_pane_t1_ParamLimits

0xb6db,	// (0x0002a3f1) heading_ai2_gene_pane_t1

0xb6f0,	// (0x0002a406) list_highlight_pane_cp6

0xb6f8,	// (0x0002a40e) ai2_gene_pane_ParamLimits

0xb6f8,	// (0x0002a40e) ai2_gene_pane

0xb71d,	// (0x0002a433) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0002e6e9) list_ai2_gene_pane_t

0xb72b,	// (0x0002a441) list_highlight_pane_cp8_ParamLimits

0xb72b,	// (0x0002a441) list_highlight_pane_cp8

0xb73c,	// (0x0002a452) ai2_gene_pane_g1_ParamLimits

0xb73c,	// (0x0002a452) ai2_gene_pane_g1

0xb74e,	// (0x0002a464) ai2_gene_pane_g2_ParamLimits

0xb74e,	// (0x0002a464) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0002e6ee) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0002e6ee) ai2_gene_pane_g

0x1ac5,	// (0x000207db) scroll_pane_cp12

0x7e01,	// (0x00026b17) control_pane_t3_ParamLimits

0x7e01,	// (0x00026b17) control_pane_t3

0x7c76,	// (0x0002698c) status_small_pane_g8_ParamLimits

0x7c76,	// (0x0002698c) status_small_pane_g8

0x801a,	// (0x00026d30) popup_find_window_ParamLimits

0x8233,	// (0x00026f49) popup_note_image_window_ParamLimits

0x5adc,	// (0x000247f2) list_double2_graphic_pane_vc_g1_ParamLimits

0x5adc,	// (0x000247f2) list_double2_graphic_pane_vc_g1

0x533b,	// (0x00024051) list_double2_graphic_pane_vc_g2_ParamLimits

0x533b,	// (0x00024051) list_double2_graphic_pane_vc_g2

0x5347,	// (0x0002405d) list_double2_graphic_pane_vc_g3_ParamLimits

0x5347,	// (0x0002405d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0002e4ca) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002e4ca) list_double2_graphic_pane_vc_g

0x5ae8,	// (0x000247fe) list_double2_graphic_pane_vc_t1_ParamLimits

0x5ae8,	// (0x000247fe) list_double2_graphic_pane_vc_t1

0x533b,	// (0x00024051) list_single_heading_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_single_heading_pane_vc_g1

0x5347,	// (0x0002405d) list_single_heading_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_heading_pane_vc_g

0x5afe,	// (0x00024814) list_single_heading_pane_vc_t1_ParamLimits

0x5afe,	// (0x00024814) list_single_heading_pane_vc_t1

0x5b14,	// (0x0002482a) list_single_heading_pane_vc_t2_ParamLimits

0x5b14,	// (0x0002482a) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0002e4eb) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0002e4eb) list_single_heading_pane_vc_t

0x5b26,	// (0x0002483c) list_setting_number_pane_vc_g1_ParamLimits

0x5b26,	// (0x0002483c) list_setting_number_pane_vc_g1

0x5b32,	// (0x00024848) list_setting_number_pane_vc_g2_ParamLimits

0x5b32,	// (0x00024848) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e4f0) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e4f0) list_setting_number_pane_vc_g

0x5b3e,	// (0x00024854) list_setting_number_pane_vc_t1_ParamLimits

0x5b3e,	// (0x00024854) list_setting_number_pane_vc_t1

0x5b52,	// (0x00024868) list_setting_number_pane_vc_t2_ParamLimits

0x5b52,	// (0x00024868) list_setting_number_pane_vc_t2

0x5b6e,	// (0x00024884) list_setting_number_pane_vc_t3_ParamLimits

0x5b6e,	// (0x00024884) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0002e4f5) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0002e4f5) list_setting_number_pane_vc_t

0x5b9a,	// (0x000248b0) set_value_pane_vc_ParamLimits

0x5b9a,	// (0x000248b0) set_value_pane_vc

0x5c40,	// (0x00024956) list_double2_graphic_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double2_graphic_pane_vc

0xb296,	// (0x00029fac) list_double2_large_graphic_pane_vc_ParamLimits

0xb296,	// (0x00029fac) list_double2_large_graphic_pane_vc

0x5c40,	// (0x00024956) list_double2_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double2_pane_vc

0x5c40,	// (0x00024956) list_double_graphic_heading_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_graphic_heading_pane_vc

0x5c40,	// (0x00024956) list_double_graphic_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_graphic_pane_vc

0x5c40,	// (0x00024956) list_double_heading_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_heading_pane_vc

0xb2a8,	// (0x00029fbe) list_double_large_graphic_pane_vc_ParamLimits

0xb2a8,	// (0x00029fbe) list_double_large_graphic_pane_vc

0x5c40,	// (0x00024956) list_double_number_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_number_pane_vc

0x5c40,	// (0x00024956) list_double_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_pane_vc

0x5c40,	// (0x00024956) list_double_time_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_double_time_pane_vc

0x5c40,	// (0x00024956) list_setting_number_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_setting_number_pane_vc

0x5c40,	// (0x00024956) list_setting_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_setting_pane_vc

0x5c40,	// (0x00024956) list_single_graphic_heading_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_single_graphic_heading_pane_vc

0x5c40,	// (0x00024956) list_single_heading_pane_vc_ParamLimits

0x5c40,	// (0x00024956) list_single_heading_pane_vc

0x5c72,	// (0x00024988) list_single_number_heading_pane_vc_ParamLimits

0x5c72,	// (0x00024988) list_single_number_heading_pane_vc

0x5d19,	// (0x00024a2f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d19,	// (0x00024a2f) list_double_graphic_heading_pane_vc_g1

0x533b,	// (0x00024051) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x533b,	// (0x00024051) list_double_graphic_heading_pane_vc_g2

0x5347,	// (0x0002405d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5347,	// (0x0002405d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0002e6fa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0002e6fa) list_double_graphic_heading_pane_vc_g

0x5d25,	// (0x00024a3b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d25,	// (0x00024a3b) list_double_graphic_heading_pane_vc_t1

0x5d39,	// (0x00024a4f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d39,	// (0x00024a4f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0002e701) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0002e701) list_double_graphic_heading_pane_vc_t

0x5b26,	// (0x0002483c) list_setting_pane_vc_g1_ParamLimits

0x5b26,	// (0x0002483c) list_setting_pane_vc_g1

0x5b32,	// (0x00024848) list_setting_pane_vc_g2_ParamLimits

0x5b32,	// (0x00024848) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e4f0) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e4f0) list_setting_pane_vc_g

0x5d51,	// (0x00024a67) list_setting_pane_vc_t1_ParamLimits

0x5d51,	// (0x00024a67) list_setting_pane_vc_t1

0x5d6d,	// (0x00024a83) list_setting_pane_vc_t2_ParamLimits

0x5d6d,	// (0x00024a83) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002e744) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e744) list_setting_pane_vc_t

0x5b9a,	// (0x000248b0) set_value_pane_cp_vc_ParamLimits

0x5b9a,	// (0x000248b0) set_value_pane_cp_vc

0x533b,	// (0x00024051) list_single_number_heading_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_single_number_heading_pane_vc_g1

0x5347,	// (0x0002405d) list_single_number_heading_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_single_number_heading_pane_vc_g

0x5d87,	// (0x00024a9d) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d87,	// (0x00024a9d) list_single_number_heading_pane_vc_t1

0x5d9d,	// (0x00024ab3) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d9d,	// (0x00024ab3) list_single_number_heading_pane_vc_t2

0x5daf,	// (0x00024ac5) list_single_number_heading_pane_vc_t3_ParamLimits

0x5daf,	// (0x00024ac5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002e749) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e749) list_single_number_heading_pane_vc_t

0x5dc1,	// (0x00024ad7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5dc1,	// (0x00024ad7) list_single_graphic_heading_pane_vc_g1

0x533b,	// (0x00024051) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x533b,	// (0x00024051) list_single_graphic_heading_pane_vc_g4

0x5347,	// (0x0002405d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5347,	// (0x0002405d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0002e750) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002e750) list_single_graphic_heading_pane_vc_g

0x5dcd,	// (0x00024ae3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5dcd,	// (0x00024ae3) list_single_graphic_heading_pane_vc_t1

0x5de3,	// (0x00024af9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5de3,	// (0x00024af9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0002e757) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0002e757) list_single_graphic_heading_pane_vc_t

0x533b,	// (0x00024051) list_double2_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_double2_pane_vc_g1

0x5347,	// (0x0002405d) list_double2_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_double2_pane_vc_g

0x5df5,	// (0x00024b0b) list_double2_pane_vc_t1_ParamLimits

0x5df5,	// (0x00024b0b) list_double2_pane_vc_t1

0x5e0d,	// (0x00024b23) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5e0d,	// (0x00024b23) list_double2_large_graphic_pane_vc_g1

0x5e19,	// (0x00024b2f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5e19,	// (0x00024b2f) list_double2_large_graphic_pane_vc_g2

0x5e25,	// (0x00024b3b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5e25,	// (0x00024b3b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0002e75c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002e75c) list_double2_large_graphic_pane_vc_g

0x5e31,	// (0x00024b47) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e31,	// (0x00024b47) list_double2_large_graphic_pane_vc_t1

0x5e47,	// (0x00024b5d) list_double_time_pane_vc_g1_ParamLimits

0x5e47,	// (0x00024b5d) list_double_time_pane_vc_g1

0x5e53,	// (0x00024b69) list_double_time_pane_vc_g2_ParamLimits

0x5e53,	// (0x00024b69) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0002e763) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0002e763) list_double_time_pane_vc_g

0x5e5f,	// (0x00024b75) list_double_time_pane_vc_t1_ParamLimits

0x5e5f,	// (0x00024b75) list_double_time_pane_vc_t1

0x5e83,	// (0x00024b99) list_double_time_pane_vc_t2_ParamLimits

0x5e83,	// (0x00024b99) list_double_time_pane_vc_t2

0x5ed2,	// (0x00024be8) list_double_time_pane_vc_t3_ParamLimits

0x5ed2,	// (0x00024be8) list_double_time_pane_vc_t3

0x5ee4,	// (0x00024bfa) list_double_time_pane_vc_t4_ParamLimits

0x5ee4,	// (0x00024bfa) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0002e768) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0002e768) list_double_time_pane_vc_t

0x533b,	// (0x00024051) list_double_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_double_pane_vc_g1

0x5347,	// (0x0002405d) list_double_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_double_pane_vc_g

0x5ef8,	// (0x00024c0e) list_double_pane_vc_t1_ParamLimits

0x5ef8,	// (0x00024c0e) list_double_pane_vc_t1

0x5f0c,	// (0x00024c22) list_double_pane_vc_t2_ParamLimits

0x5f0c,	// (0x00024c22) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002e771) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e771) list_double_pane_vc_t

0x533b,	// (0x00024051) list_double_number_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_double_number_pane_vc_g1

0x5347,	// (0x0002405d) list_double_number_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_double_number_pane_vc_g

0x5f24,	// (0x00024c3a) list_double_number_pane_vc_t1_ParamLimits

0x5f24,	// (0x00024c3a) list_double_number_pane_vc_t1

0x5ef8,	// (0x00024c0e) list_double_number_pane_vc_t2_ParamLimits

0x5ef8,	// (0x00024c0e) list_double_number_pane_vc_t2

0x5f36,	// (0x00024c4c) list_double_number_pane_vc_t3_ParamLimits

0x5f36,	// (0x00024c4c) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0002e776) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0002e776) list_double_number_pane_vc_t

0x5f4e,	// (0x00024c64) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5f4e,	// (0x00024c64) list_double_large_graphic_pane_vc_g1

0x5f70,	// (0x00024c86) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5f70,	// (0x00024c86) list_double_large_graphic_pane_vc_g2

0x5f84,	// (0x00024c9a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5f84,	// (0x00024c9a) list_double_large_graphic_pane_vc_g3

0x5f93,	// (0x00024ca9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f93,	// (0x00024ca9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0002e77d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0002e77d) list_double_large_graphic_pane_vc_g

0x5f9f,	// (0x00024cb5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f9f,	// (0x00024cb5) list_double_large_graphic_pane_vc_t1

0x5fbb,	// (0x00024cd1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5fbb,	// (0x00024cd1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0002e786) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0002e786) list_double_large_graphic_pane_vc_t

0x533b,	// (0x00024051) list_double_heading_pane_vc_g1_ParamLimits

0x533b,	// (0x00024051) list_double_heading_pane_vc_g1

0x5347,	// (0x0002405d) list_double_heading_pane_vc_g2_ParamLimits

0x5347,	// (0x0002405d) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e2de) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e2de) list_double_heading_pane_vc_g

0x5fdd,	// (0x00024cf3) list_double_heading_pane_vc_t1_ParamLimits

0x5fdd,	// (0x00024cf3) list_double_heading_pane_vc_t1

0x5ff1,	// (0x00024d07) list_double_heading_pane_vc_t2_ParamLimits

0x5ff1,	// (0x00024d07) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0002e78b) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0002e78b) list_double_heading_pane_vc_t

0x6009,	// (0x00024d1f) list_double_graphic_pane_vc_g1_ParamLimits

0x6009,	// (0x00024d1f) list_double_graphic_pane_vc_g1

0x6021,	// (0x00024d37) list_double_graphic_pane_vc_g2_ParamLimits

0x6021,	// (0x00024d37) list_double_graphic_pane_vc_g2

0x533b,	// (0x00024051) list_double_graphic_pane_vc_g3_ParamLimits

0x533b,	// (0x00024051) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0002e790) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0002e790) list_double_graphic_pane_vc_g

0x603e,	// (0x00024d54) list_double_graphic_pane_vc_t1_ParamLimits

0x603e,	// (0x00024d54) list_double_graphic_pane_vc_t1

0x605d,	// (0x00024d73) list_double_graphic_pane_vc_t2_ParamLimits

0x605d,	// (0x00024d73) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0002e799) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0002e799) list_double_graphic_pane_vc_t

0x6493,	// (0x000251a9) aid_size_cell_fastswap

0x649b,	// (0x000251b1) aid_size_cell_touch_ParamLimits

0x649b,	// (0x000251b1) aid_size_cell_touch

0x66f6,	// (0x0002540c) popup_fast_swap_wide_window_ParamLimits

0x66f6,	// (0x0002540c) popup_fast_swap_wide_window

0x67fc,	// (0x00025512) touch_pane_ParamLimits

0x67fc,	// (0x00025512) touch_pane

0x1b4d,	// (0x00020863) button_value_adjust_pane_cp2

0x577d,	// (0x00024493) button_value_adjust_pane_cp4

0x579d,	// (0x000244b3) form_field_data_pane_cp2

0x57bc,	// (0x000244d2) form_field_data_wide_pane_cp2

0x38da,	// (0x000225f0) bg_scroll_pane_ParamLimits

0x713b,	// (0x00025e51) scroll_handle_pane_ParamLimits

0x714f,	// (0x00025e65) scroll_sc2_down_pane_ParamLimits

0x714f,	// (0x00025e65) scroll_sc2_down_pane

0x3920,	// (0x00022636) scroll_sc2_up_pane_ParamLimits

0x3920,	// (0x00022636) scroll_sc2_up_pane

0xbe70,	// (0x0002ab86) grid_wheel_folder_pane_g1_ParamLimits

0xbe70,	// (0x0002ab86) grid_wheel_folder_pane_g1

0x75a6,	// (0x000262bc) clock_nsta_pane_cp2_ParamLimits

0x75a6,	// (0x000262bc) clock_nsta_pane_cp2

0x7957,	// (0x0002666d) listscroll_midp_pane_ParamLimits

0x7963,	// (0x00026679) midp_canvas_pane

0x7e44,	// (0x00026b5a) nsta_clock_indic_pane

0x7e92,	// (0x00026ba8) listscroll_form_pane_vc

0x7ea2,	// (0x00026bb8) listscroll_set_pane_vc_ParamLimits

0x7ea2,	// (0x00026bb8) listscroll_set_pane_vc

0x8542,	// (0x00027258) clock_nsta_pane

0x85bd,	// (0x000272d3) indicator_nsta_pane

0x9c55,	// (0x0002896b) bg_popup_sub_pane_cp2_ParamLimits

0x9c69,	// (0x0002897f) find_pane_cp2_ParamLimits

0x9c69,	// (0x0002897f) find_pane_cp2

0x9c7f,	// (0x00028995) grid_toobar_pane_ParamLimits

0x9d5f,	// (0x00028a75) list_form_gen_pane_vc_ParamLimits

0x9d5f,	// (0x00028a75) list_form_gen_pane_vc

0x9d75,	// (0x00028a8b) scroll_pane_cp8_vc_ParamLimits

0x9d75,	// (0x00028a8b) scroll_pane_cp8_vc

0x9df1,	// (0x00028b07) data_form_wide_pane_vc_ParamLimits

0x9df1,	// (0x00028b07) data_form_wide_pane_vc

0x9dfd,	// (0x00028b13) form_field_data_wide_pane_vc_g1

0x9e05,	// (0x00028b1b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e05,	// (0x00028b1b) form_field_data_wide_pane_vc_t1

0x1b84,	// (0x0002089a) input_focus_pane_cp6_vc_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_cp6_vc

0xa132,	// (0x00028e48) list_midp_pane_ParamLimits

0xa13e,	// (0x00028e54) scroll_pane_cp16_ParamLimits

0xa13e,	// (0x00028e54) scroll_pane_cp16

0xa194,	// (0x00028eaa) button_value_adjust_pane_ParamLimits

0xa194,	// (0x00028eaa) button_value_adjust_pane

0xb0d8,	// (0x00029dee) button_value_adjust_pane_cp6_ParamLimits

0xb0d8,	// (0x00029dee) button_value_adjust_pane_cp6

0xb1fe,	// (0x00029f14) settings_code_pane_cp_ParamLimits

0xb1fe,	// (0x00029f14) settings_code_pane_cp

0x16f4,	// (0x0002040a) cell_touch_pane_g1

0x16f4,	// (0x0002040a) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0002e40f) cell_touch_pane_g

0xb7cd,	// (0x0002a4e3) cell_touch_pane_cp_ParamLimits

0xb7cd,	// (0x0002a4e3) cell_touch_pane_cp

0xb7dd,	// (0x0002a4f3) cell_touch_pane_ParamLimits

0xb7dd,	// (0x0002a4f3) cell_touch_pane

0x16f4,	// (0x0002040a) scroll_sc2_down_pane_g1

0x16f4,	// (0x0002040a) scroll_sc2_up_pane_g1

0x16fe,	// (0x00020414) bg_set_opt_pane_cp4_vc

0xb7ef,	// (0x0002a505) list_set_graphic_pane_vc_g1_ParamLimits

0xb7ef,	// (0x0002a505) list_set_graphic_pane_vc_g1

0xb7fb,	// (0x0002a511) list_set_graphic_pane_vc_g2_ParamLimits

0xb7fb,	// (0x0002a511) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0002e706) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0002e706) list_set_graphic_pane_vc_g

0xb807,	// (0x0002a51d) text_primary_small_cp13_vc_ParamLimits

0xb807,	// (0x0002a51d) text_primary_small_cp13_vc

0xb81f,	// (0x0002a535) list_set_graphic_pane_vc_ParamLimits

0xb81f,	// (0x0002a535) list_set_graphic_pane_vc

0x16fe,	// (0x00020414) input_focus_pane_cp2_vc

0x16f4,	// (0x0002040a) setting_code_pane_vc_g1

0x1771,	// (0x00020487) setting_code_pane_vc_t1

0xb832,	// (0x0002a548) set_text_pane_vc_t1_ParamLimits

0xb832,	// (0x0002a548) set_text_pane_vc_t1

0x16fe,	// (0x00020414) input_focus_pane_cp1_vc

0xb84e,	// (0x0002a564) list_set_text_pane_vc

0x16f4,	// (0x0002040a) setting_text_pane_vc_g1

0x16fe,	// (0x00020414) bg_set_opt_pane_cp2_vc

0x1768,	// (0x0002047e) setting_slider_graphic_pane_vc_g1

0xb858,	// (0x0002a56e) setting_slider_graphic_pane_vc_t1

0xb868,	// (0x0002a57e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002e70b) setting_slider_graphic_pane_vc_t

0xb878,	// (0x0002a58e) slider_set_pane_cp_vc

0xb880,	// (0x0002a596) slider_set_pane_vc_g1

0xb889,	// (0x0002a59f) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0002e710) slider_set_pane_vc_g

0x1c4a,	// (0x00020960) set_opt_bg_pane_g1_copy1

0x1c52,	// (0x00020968) set_opt_bg_pane_g2_copy1

0xb8b5,	// (0x0002a5cb) set_opt_bg_pane_g3_copy1

0x1c62,	// (0x00020978) set_opt_bg_pane_g4_copy1

0x1c6a,	// (0x00020980) set_opt_bg_pane_g5_copy1

0x1c72,	// (0x00020988) set_opt_bg_pane_g6_copy1

0xb8bd,	// (0x0002a5d3) set_opt_bg_pane_g7_copy1

0xb8c5,	// (0x0002a5db) set_opt_bg_pane_g8_copy1

0xb8cd,	// (0x0002a5e3) set_opt_bg_pane_g9_copy1

0x16fe,	// (0x00020414) bg_set_opt_pane_cp_vc

0xb8d5,	// (0x0002a5eb) setting_slider_pane_vc_t1

0xb8e4,	// (0x0002a5fa) setting_slider_pane_vc_t2

0xb8f4,	// (0x0002a60a) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0002e71f) setting_slider_pane_vc_t

0xb904,	// (0x0002a61a) slider_set_pane_vc

0x88ba,	// (0x000275d0) volume_set_pane_vc_g1

0x8bb5,	// (0x000278cb) volume_set_pane_vc_g2

0x8bbe,	// (0x000278d4) volume_set_pane_vc_g3

0x8bc7,	// (0x000278dd) volume_set_pane_vc_g4

0x8bd0,	// (0x000278e6) volume_set_pane_vc_g5

0x8bd9,	// (0x000278ef) volume_set_pane_vc_g6

0x8be2,	// (0x000278f8) volume_set_pane_vc_g7

0x8beb,	// (0x00027901) volume_set_pane_vc_g8

0x8bf4,	// (0x0002790a) volume_set_pane_vc_g9

0x8bfd,	// (0x00027913) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0002e726) volume_set_pane_vc_g

0xb90c,	// (0x0002a622) volume_set_pane_vc

0xb914,	// (0x0002a62a) button_value_adjust_pane_cp1_vc

0xb91e,	// (0x0002a634) list_highlight_pane_cp2_vc

0xb927,	// (0x0002a63d) list_set_pane_vc_ParamLimits

0xb927,	// (0x0002a63d) list_set_pane_vc

0xb985,	// (0x0002a69b) main_pane_set_vc_t1_ParamLimits

0xb985,	// (0x0002a69b) main_pane_set_vc_t1

0xb99a,	// (0x0002a6b0) main_pane_set_vc_t2_ParamLimits

0xb99a,	// (0x0002a6b0) main_pane_set_vc_t2

0xb9ac,	// (0x0002a6c2) main_pane_set_vc_t3_ParamLimits

0xb9ac,	// (0x0002a6c2) main_pane_set_vc_t3

0xb9be,	// (0x0002a6d4) main_pane_set_vc_t4_ParamLimits

0xb9be,	// (0x0002a6d4) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002e73b) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002e73b) main_pane_set_vc_t

0xb9d0,	// (0x0002a6e6) setting_code_pane_vc_ParamLimits

0xb9d0,	// (0x0002a6e6) setting_code_pane_vc

0xb9df,	// (0x0002a6f5) setting_slider_graphic_pane_vc

0xb9df,	// (0x0002a6f5) setting_slider_pane_vc

0xb9df,	// (0x0002a6f5) setting_text_pane_vc

0xb9df,	// (0x0002a6f5) setting_volume_pane_vc

0xb9e7,	// (0x0002a6fd) scroll_pane_cp121_vc

0x1b3b,	// (0x00020851) set_content_pane_vc

0xb9ef,	// (0x0002a705) button_value_adjust_pane_g1

0xb9f8,	// (0x0002a70e) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0002e79e) button_value_adjust_pane_g

0xba01,	// (0x0002a717) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba01,	// (0x0002a717) form_field_slider_wide_pane_vc_t1

0xba15,	// (0x0002a72b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba15,	// (0x0002a72b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002e7a3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002e7a3) form_field_slider_wide_pane_vc_t

0x174c,	// (0x00020462) input_focus_pane_cp10_vc_ParamLimits

0x174c,	// (0x00020462) input_focus_pane_cp10_vc

0xba43,	// (0x0002a759) slider_cont_pane_cp1_vc_ParamLimits

0xba43,	// (0x0002a759) slider_cont_pane_cp1_vc

0xba55,	// (0x0002a76b) slider_form_pane_g1_cp2

0xb889,	// (0x0002a59f) slider_form_pane_g2_cp2

0xba82,	// (0x0002a798) form_field_slider_pane_vc_t3

0xba90,	// (0x0002a7a6) form_field_slider_pane_vc_t4

0xba9e,	// (0x0002a7b4) slider_form_pane_vc_ParamLimits

0xba9e,	// (0x0002a7b4) slider_form_pane_vc

0xbaab,	// (0x0002a7c1) form_field_slider_pane_vc_t1_ParamLimits

0xbaab,	// (0x0002a7c1) form_field_slider_pane_vc_t1

0xba15,	// (0x0002a72b) form_field_slider_pane_vc_t2_ParamLimits

0xba15,	// (0x0002a72b) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002e7b5) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002e7b5) form_field_slider_pane_vc_t

0x174c,	// (0x00020462) input_focus_pane_cp9_vc_ParamLimits

0x174c,	// (0x00020462) input_focus_pane_cp9_vc

0xbac7,	// (0x0002a7dd) slider_cont_pane_vc_ParamLimits

0xbac7,	// (0x0002a7dd) slider_cont_pane_vc

0xbadb,	// (0x0002a7f1) list_form_graphic_pane_cp_vc_ParamLimits

0xbadb,	// (0x0002a7f1) list_form_graphic_pane_cp_vc

0x9dfd,	// (0x00028b13) form_field_popup_wide_pane_vc_g1

0xbaf0,	// (0x0002a806) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaf0,	// (0x0002a806) form_field_popup_wide_pane_vc_t1

0x1b84,	// (0x0002089a) input_focus_pane_cp8_vc_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_cp8_vc

0xbb35,	// (0x0002a84b) list_form_wide_pane_vc_ParamLimits

0xbb35,	// (0x0002a84b) list_form_wide_pane_vc

0xbb41,	// (0x0002a857) list_form_graphic_pane_vc_g1

0xbb49,	// (0x0002a85f) list_form_graphic_pane_vc_t1_ParamLimits

0xbb49,	// (0x0002a85f) list_form_graphic_pane_vc_t1

0x175a,	// (0x00020470) list_highlight_pane_cp5_vc_ParamLimits

0x175a,	// (0x00020470) list_highlight_pane_cp5_vc

0xbb65,	// (0x0002a87b) list_form_graphic_pane_vc_ParamLimits

0xbb65,	// (0x0002a87b) list_form_graphic_pane_vc

0x9dfd,	// (0x00028b13) form_field_popup_pane_vc_g1

0xbb7b,	// (0x0002a891) form_field_popup_pane_vc_t1_ParamLimits

0xbb7b,	// (0x0002a891) form_field_popup_pane_vc_t1

0x1b84,	// (0x0002089a) input_focus_pane_cp7_vc_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_cp7_vc

0xbb92,	// (0x0002a8a8) list_form_pane_vc_ParamLimits

0xbb92,	// (0x0002a8a8) list_form_pane_vc

0xbb9e,	// (0x0002a8b4) data_form_pane_vc_t1_ParamLimits

0xbb9e,	// (0x0002a8b4) data_form_pane_vc_t1

0x1c4a,	// (0x00020960) input_focus_pane_vc_g1

0x1c52,	// (0x00020968) input_focus_pane_vc_g2

0x1c5a,	// (0x00020970) input_focus_pane_vc_g3

0x1c62,	// (0x00020978) input_focus_pane_vc_g4

0x1c6a,	// (0x00020980) input_focus_pane_vc_g5

0x1c72,	// (0x00020988) input_focus_pane_vc_g6

0x1c7a,	// (0x00020990) input_focus_pane_vc_g7

0x1c82,	// (0x00020998) input_focus_pane_vc_g8

0x1c8a,	// (0x000209a0) input_focus_pane_vc_g9

0x16f4,	// (0x0002040a) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0002e398) input_focus_pane_vc_g

0x9df1,	// (0x00028b07) data_form_pane_vc_ParamLimits

0x9df1,	// (0x00028b07) data_form_pane_vc

0x9dfd,	// (0x00028b13) form_field_data_pane_vc_g1

0xbbb9,	// (0x0002a8cf) form_field_data_pane_vc_t1_ParamLimits

0xbbb9,	// (0x0002a8cf) form_field_data_pane_vc_t1

0x1b84,	// (0x0002089a) input_focus_pane_vc_ParamLimits

0x1b84,	// (0x0002089a) input_focus_pane_vc

0xbbd3,	// (0x0002a8e9) button_value_adjust_pane_cp3_vc

0xbbdb,	// (0x0002a8f1) button_value_adjust_pane_cp5_vc

0xbbe3,	// (0x0002a8f9) form_field_data_pane_vc_ParamLimits

0xbbe3,	// (0x0002a8f9) form_field_data_pane_vc

0xbbfa,	// (0x0002a910) form_field_data_pane_vc_cp2

0xbc02,	// (0x0002a918) form_field_data_wide_pane_vc_ParamLimits

0xbc02,	// (0x0002a918) form_field_data_wide_pane_vc

0xbc18,	// (0x0002a92e) form_field_data_wide_pane_vc_cp2

0xbc20,	// (0x0002a936) form_field_popup_pane_vc_ParamLimits

0xbc20,	// (0x0002a936) form_field_popup_pane_vc

0xbc37,	// (0x0002a94d) form_field_popup_wide_pane_vc_ParamLimits

0xbc37,	// (0x0002a94d) form_field_popup_wide_pane_vc

0xbc4d,	// (0x0002a963) form_field_slider_pane_vc_ParamLimits

0xbc4d,	// (0x0002a963) form_field_slider_pane_vc

0xbc60,	// (0x0002a976) form_field_slider_wide_pane_vc_ParamLimits

0xbc60,	// (0x0002a976) form_field_slider_wide_pane_vc

0xbc73,	// (0x0002a989) grid_touch_1_pane_ParamLimits

0xbc73,	// (0x0002a989) grid_touch_1_pane

0xbc7f,	// (0x0002a995) grid_touch_2_pane_ParamLimits

0xbc7f,	// (0x0002a995) grid_touch_2_pane

0x7d09,	// (0x00026a1f) touch_pane_g1_ParamLimits

0x7d09,	// (0x00026a1f) touch_pane_g1

0xbc97,	// (0x0002a9ad) cell_app_pane_cp_wide_ParamLimits

0xbc97,	// (0x0002a9ad) cell_app_pane_cp_wide

0xbca8,	// (0x0002a9be) grid_popup_fast_wide_pane_ParamLimits

0xbca8,	// (0x0002a9be) grid_popup_fast_wide_pane

0xbcbc,	// (0x0002a9d2) scroll_pane_cp19_ParamLimits

0xbcbc,	// (0x0002a9d2) scroll_pane_cp19

0x16fe,	// (0x00020414) bg_popup_window_pane_cp20

0xbcd0,	// (0x0002a9e6) listscroll_popup_fast_wide_pane

0x175a,	// (0x00020470) grid_indicator_nsta_pane

0xbcd8,	// (0x0002a9ee) clock_nsta_pane_g1

0xbce1,	// (0x0002a9f7) clock_nsta_pane_t1

0xbcfd,	// (0x0002aa13) cell_indicator_nsta_pane_ParamLimits

0xbcfd,	// (0x0002aa13) cell_indicator_nsta_pane

0xbd2e,	// (0x0002aa44) cell_indicator_nsta_pane_g1

0xbd3c,	// (0x0002aa52) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002e7c6) cell_indicator_nsta_pane_g

0xbd49,	// (0x0002aa5f) clock_nsta_pane_cp

0xbd51,	// (0x0002aa67) indicator_nsta_pane_cp

0xbd59,	// (0x0002aa6f) nsta_clock_indic_pane_g1

0x17b0,	// (0x000204c6) grid_indicator_pane

0x71ed,	// (0x00025f03) scroll_pane_cp29

0x74d3,	// (0x000261e9) indicator_nsta_pane_cp2_ParamLimits

0x74d3,	// (0x000261e9) indicator_nsta_pane_cp2

0x175a,	// (0x00020470) main_apps_wheel_pane

0xa015,	// (0x00028d2b) form_midp_field_text_pane_ParamLimits

0xa15e,	// (0x00028e74) scroll_bar_cp050_ParamLimits

0xbda9,	// (0x0002aabf) cell_indicator_pane_ParamLimits

0xbda9,	// (0x0002aabf) cell_indicator_pane

0xbdc2,	// (0x0002aad8) cell_indicator_pane_g1

0xbdcc,	// (0x0002aae2) grid_wheel_folder_pane_ParamLimits

0xbdcc,	// (0x0002aae2) grid_wheel_folder_pane

0xbde2,	// (0x0002aaf8) list_wheel_apps_pane_ParamLimits

0xbde2,	// (0x0002aaf8) list_wheel_apps_pane

0xbdf3,	// (0x0002ab09) main_apps_wheel_pane_g1_ParamLimits

0xbdf3,	// (0x0002ab09) main_apps_wheel_pane_g1

0xbe07,	// (0x0002ab1d) main_apps_wheel_pane_g2_ParamLimits

0xbe07,	// (0x0002ab1d) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002e7e2) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002e7e2) main_apps_wheel_pane_g

0xbe1f,	// (0x0002ab35) main_apps_wheel_pane_t1_ParamLimits

0xbe1f,	// (0x0002ab35) main_apps_wheel_pane_t1

0xbe42,	// (0x0002ab58) list_wheel_apps_pane_g1

0xbe4a,	// (0x0002ab60) list_wheel_apps_pane_g2

0xbe52,	// (0x0002ab68) list_wheel_apps_pane_g3

0xbe5c,	// (0x0002ab72) list_wheel_apps_pane_g4

0xbe66,	// (0x0002ab7c) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002e7e7) list_wheel_apps_pane_g

0x77cf,	// (0x000264e5) navi_icon_text_pane

0x8471,	// (0x00027187) aid_fill_nsta

0xbe89,	// (0x0002ab9f) navi_icon_text_pane_g1

0xbe95,	// (0x0002abab) navi_icon_text_pane_t1

0x7672,	// (0x00026388) list_set_graphic_pane_t1_ParamLimits

0x7672,	// (0x00026388) list_set_graphic_pane_t1

0xa895,	// (0x000295ab) popup_midp_note_alarm_window_t6_ParamLimits

0xa895,	// (0x000295ab) popup_midp_note_alarm_window_t6

0xa8a7,	// (0x000295bd) popup_midp_note_alarm_window_t7_ParamLimits

0xa8a7,	// (0x000295bd) popup_midp_note_alarm_window_t7

0xa8b9,	// (0x000295cf) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b9,	// (0x000295cf) popup_midp_note_alarm_window_t8

0xa8cb,	// (0x000295e1) popup_midp_note_alarm_window_t9_ParamLimits

0xa8cb,	// (0x000295e1) popup_midp_note_alarm_window_t9

0xa8dd,	// (0x000295f3) popup_midp_note_alarm_window_t10_ParamLimits

0xa8dd,	// (0x000295f3) popup_midp_note_alarm_window_t10

0xa8ef,	// (0x00029605) popup_midp_note_alarm_window_t11_ParamLimits

0xa8ef,	// (0x00029605) popup_midp_note_alarm_window_t11

0xa901,	// (0x00029617) scroll_pane_cp17_ParamLimits

0xa901,	// (0x00029617) scroll_pane_cp17

0x88ba,	// (0x000275d0) volume_small_pane_cp_g1

0x8c06,	// (0x0002791c) volume_small_pane_cp_g2

0x8c0f,	// (0x00027925) volume_small_pane_cp_g3

0x8c18,	// (0x0002792e) volume_small_pane_cp_g4

0x8c21,	// (0x00027937) volume_small_pane_cp_g5

0x8bd0,	// (0x000278e6) volume_small_pane_cp_g6

0x8c2a,	// (0x00027940) volume_small_pane_cp_g7

0x8c33,	// (0x00027949) volume_small_pane_cp_g8

0x8c3c,	// (0x00027952) volume_small_pane_cp_g9

0x8c45,	// (0x0002795b) volume_small_pane_cp_g10

0x7a30,	// (0x00026746) midp_ticker_pane_g1_ParamLimits

0x7a3c,	// (0x00026752) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0002e464) midp_ticker_pane_g_ParamLimits

0x7a48,	// (0x0002675e) midp_ticker_pane_t1_ParamLimits

0x8487,	// (0x0002719d) aid_fill_nsta_2

0xa14a,	// (0x00028e60) list_form2_midp_pane

0xb249,	// (0x00029f5f) midp_editing_number_pane_ParamLimits

0xb258,	// (0x00029f6e) midp_ticker_pane_ParamLimits

0xbea7,	// (0x0002abbd) form2_midp_field_pane

0xbecb,	// (0x0002abe1) scroll_pane_cp51

0xbeeb,	// (0x0002ac01) form2_midp_button_pane_ParamLimits

0xbeeb,	// (0x0002ac01) form2_midp_button_pane

0xbefd,	// (0x0002ac13) form2_midp_content_pane_ParamLimits

0xbefd,	// (0x0002ac13) form2_midp_content_pane

0xbf17,	// (0x0002ac2d) form2_midp_field_choice_group_pane

0xbf1f,	// (0x0002ac35) form2_midp_field_pane_g1

0xbf27,	// (0x0002ac3d) form2_midp_field_pane_g2

0xbf2f,	// (0x0002ac45) form2_midp_field_pane_g3

0xbf37,	// (0x0002ac4d) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002e80c) form2_midp_field_pane_g

0xbf3f,	// (0x0002ac55) form2_midp_gauge_slider_pane

0xbf47,	// (0x0002ac5d) form2_midp_gauge_wait_pane

0xbf4f,	// (0x0002ac65) form2_midp_image_pane_ParamLimits

0xbf4f,	// (0x0002ac65) form2_midp_image_pane

0xbf6a,	// (0x0002ac80) form2_midp_label_pane_ParamLimits

0xbf6a,	// (0x0002ac80) form2_midp_label_pane

0xbf83,	// (0x0002ac99) form2_midp_label_pane_cp_ParamLimits

0xbf83,	// (0x0002ac99) form2_midp_label_pane_cp

0xbfa4,	// (0x0002acba) form2_midp_string_pane_ParamLimits

0xbfa4,	// (0x0002acba) form2_midp_string_pane

0x6087,	// (0x00024d9d) form2_midp_text_pane_ParamLimits

0x6087,	// (0x00024d9d) form2_midp_text_pane

0xbfb6,	// (0x0002accc) form2_midp_time_pane

0xbfc6,	// (0x0002acdc) input_focus_pane_cp51_ParamLimits

0xbfc6,	// (0x0002acdc) input_focus_pane_cp51

0xbfde,	// (0x0002acf4) form2_midp_label_pane_t1_ParamLimits

0xbfde,	// (0x0002acf4) form2_midp_label_pane_t1

0x60a0,	// (0x00024db6) form2_mdip_text_pane_t1_ParamLimits

0x60a0,	// (0x00024db6) form2_mdip_text_pane_t1

0x60be,	// (0x00024dd4) form2_midp_time_pane_t1

0xc027,	// (0x0002ad3d) form2_midp_gauge_slider_pane_t1

0xc039,	// (0x0002ad4f) form2_midp_gauge_slider_pane_t2

0xc04b,	// (0x0002ad61) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002e815) form2_midp_gauge_slider_pane_t

0xc05d,	// (0x0002ad73) form2_midp_slider_pane

0xc069,	// (0x0002ad7f) form2_midp_gauge_wait_pane_t1

0xc077,	// (0x0002ad8d) form2_midp_wait_pane_ParamLimits

0xc077,	// (0x0002ad8d) form2_midp_wait_pane

0xc0a2,	// (0x0002adb8) list_single_2graphic_pane_cp4_ParamLimits

0xc0a2,	// (0x0002adb8) list_single_2graphic_pane_cp4

0x9e66,	// (0x00028b7c) list_single_midp_graphic_pane_cp_ParamLimits

0x9e66,	// (0x00028b7c) list_single_midp_graphic_pane_cp

0x16fe,	// (0x00020414) list_highlight_pane_cp20

0xc0ca,	// (0x0002ade0) list_single_2graphic_pane_g1_cp4

0xb6d3,	// (0x0002a3e9) list_single_2graphic_pane_g2_cp4

0xc0d2,	// (0x0002ade8) list_single_2graphic_pane_t1_cp4

0x175a,	// (0x00020470) list_highlight_pane_cp21

0xc0e1,	// (0x0002adf7) list_single_midp_graphic_pane_g4_cp

0xc0f0,	// (0x0002ae06) list_single_midp_graphic_pane_t1_cp

0xc105,	// (0x0002ae1b) form2_mdip_string_pane_t1_ParamLimits

0xc105,	// (0x0002ae1b) form2_mdip_string_pane_t1

0x16fe,	// (0x00020414) bg_wml_button_pane_cp2

0x16f4,	// (0x0002040a) form2_midp_image_pane_g1

0x558f,	// (0x000242a5) list_double_large_graphic_pane_g5_ParamLimits

0x558f,	// (0x000242a5) list_double_large_graphic_pane_g5

0x7957,	// (0x0002666d) midp_form_pane_ParamLimits

0x175a,	// (0x00020470) main_apps_wheel_pane_ParamLimits

0x8259,	// (0x00026f6f) popup_preview_window_ParamLimits

0x8259,	// (0x00026f6f) popup_preview_window

0x8414,	// (0x0002712a) popup_touch_info_window_ParamLimits

0x8414,	// (0x0002712a) popup_touch_info_window

0x8432,	// (0x00027148) popup_touch_menu_window_ParamLimits

0x8432,	// (0x00027148) popup_touch_menu_window

0x16ea,	// (0x00020400) bg_popup_sub_pane_cp6

0xc206,	// (0x0002af1c) list_touch_menu_pane

0xc20e,	// (0x0002af24) list_single_touch_menu_pane_ParamLimits

0xc20e,	// (0x0002af24) list_single_touch_menu_pane

0xc224,	// (0x0002af3a) list_single_touch_menu_pane_t1

0x175a,	// (0x00020470) bg_popup_sub_pane_cp7_ParamLimits

0x175a,	// (0x00020470) bg_popup_sub_pane_cp7

0xc232,	// (0x0002af48) heading_sub_pane

0xc23a,	// (0x0002af50) list_touch_info_pane_ParamLimits

0xc23a,	// (0x0002af50) list_touch_info_pane

0xc249,	// (0x0002af5f) list_single_touch_info_pane_ParamLimits

0xc249,	// (0x0002af5f) list_single_touch_info_pane

0xc25b,	// (0x0002af71) list_single_touch_info_pane_t1

0xc269,	// (0x0002af7f) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002e823) list_single_touch_info_pane_t

0x794f,	// (0x00026665) bg_popup_heading_pane_cp

0xc277,	// (0x0002af8d) heading_sub_pane_t1

0x9d8b,	// (0x00028aa1) bg_popup_preview_window_pane_cp_ParamLimits

0x9d8b,	// (0x00028aa1) bg_popup_preview_window_pane_cp

0xc232,	// (0x0002af48) heading_preview_pane

0xc23a,	// (0x0002af50) list_preview_pane_ParamLimits

0xc23a,	// (0x0002af50) list_preview_pane

0xc285,	// (0x0002af9b) popup_preview_window_g1

0xc249,	// (0x0002af5f) list_single_preview_pane_ParamLimits

0xc249,	// (0x0002af5f) list_single_preview_pane

0xc28d,	// (0x0002afa3) list_single_preview_pane_g1

0xc295,	// (0x0002afab) list_single_preview_pane_t1

0xc25b,	// (0x0002af71) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002e828) list_single_preview_pane_t

0xc2a3,	// (0x0002afb9) bg_popup_heading_pane_cp2_ParamLimits

0xc2a3,	// (0x0002afb9) bg_popup_heading_pane_cp2

0xc2b9,	// (0x0002afcf) heading_preview_pane_g1

0xc2c1,	// (0x0002afd7) heading_preview_pane_t1_ParamLimits

0xc2c1,	// (0x0002afd7) heading_preview_pane_t1

0x17c7,	// (0x000204dd) soft_indicator_pane_t1_ParamLimits

0x1aa2,	// (0x000207b8) scroll_pane_ParamLimits

0x3917,	// (0x0002262d) scroll_sc2_left_pane

0x390e,	// (0x00022624) scroll_sc2_right_pane

0x3936,	// (0x0002264c) scroll_bg_pane_g1_ParamLimits

0x394b,	// (0x00022661) scroll_bg_pane_g2_ParamLimits

0x3963,	// (0x00022679) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0002e3ef) scroll_bg_pane_g_ParamLimits

0x3936,	// (0x0002264c) scroll_handle_pane_g1_ParamLimits

0x3978,	// (0x0002268e) scroll_handle_pane_g2_ParamLimits

0x3963,	// (0x00022679) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0002e3f6) scroll_handle_pane_g_ParamLimits

0x7edc,	// (0x00026bf2) popup_choice_list_window_ParamLimits

0x7edc,	// (0x00026bf2) popup_choice_list_window

0x9c61,	// (0x00028977) choice_list_pane

0x9ce3,	// (0x000289f9) cell_toolbar_pane_t1

0x9d0b,	// (0x00028a21) toolbar_button_pane_ParamLimits

0xadbb,	// (0x00029ad1) ai_gene_pane_1_t2_ParamLimits

0xadbb,	// (0x00029ad1) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0002e619) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0002e619) ai_gene_pane_1_t

0xc2de,	// (0x0002aff4) scroll_sc2_left_pane_g1

0xc2de,	// (0x0002aff4) scroll_sc2_right_pane_g1

0x7eb4,	// (0x00026bca) bg_popup_sub_pane_cp10

0xc2e8,	// (0x0002affe) list_choice_list_pane

0xc301,	// (0x0002b017) list_single_choice_list_pane_ParamLimits

0xc301,	// (0x0002b017) list_single_choice_list_pane

0xc314,	// (0x0002b02a) list_single_choice_list_pane_g1

0x6e92,	// (0x00025ba8) list_single_choice_list_pane_t1_ParamLimits

0x6e92,	// (0x00025ba8) list_single_choice_list_pane_t1

0xc31c,	// (0x0002b032) choice_list_pane_g1

0xc324,	// (0x0002b03a) choice_list_pane_t1

0x16ea,	// (0x00020400) input_focus_pane_cp11

0x3729,	// (0x0002243f) title_pane_stacon_g2_ParamLimits

0x3729,	// (0x0002243f) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0002e3d5) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e3d5) title_pane_stacon_g

0x794f,	// (0x00026665) cursor_press_pane

0x7f84,	// (0x00026c9a) popup_fep_hwr_window_ParamLimits

0x7f84,	// (0x00026c9a) popup_fep_hwr_window

0x7ffc,	// (0x00026d12) popup_fep_vkb_window_ParamLimits

0x7ffc,	// (0x00026d12) popup_fep_vkb_window

0xc332,	// (0x0002b048) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002e851) fep_vkb_side_pane_g_ParamLimits

0x8c87,	// (0x0002799d) fep_hwr_candidate_pane_ParamLimits

0x8c87,	// (0x0002799d) fep_hwr_candidate_pane

0x8cb1,	// (0x000279c7) fep_hwr_side_pane_ParamLimits

0x8cb1,	// (0x000279c7) fep_hwr_side_pane

0x8cd1,	// (0x000279e7) fep_hwr_top_pane_ParamLimits

0x8cd1,	// (0x000279e7) fep_hwr_top_pane

0x8ce9,	// (0x000279ff) fep_hwr_write_pane_ParamLimits

0x8ce9,	// (0x000279ff) fep_hwr_write_pane

0xfb3b,	// (0x0002e851) fep_vkb_side_pane_g

0xc33a,	// (0x0002b050) fep_hwr_top_pane_g1

0xc34c,	// (0x0002b062) fep_hwr_top_pane_g2

0x8d15,	// (0x00027a2b) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002e82d) fep_hwr_top_pane_g

0x8d2a,	// (0x00027a40) fep_hwr_top_text_pane

0x3a3b,	// (0x00022751) fep_hwr_top_text_pane_g1

0xc382,	// (0x0002b098) fep_hwr_top_text_pane_t1

0x8e20,	// (0x00027b36) fep_hwr_candidate_pane_g1

0xc5c7,	// (0x0002b2dd) fep_vkb_keypad_pane_g3_ParamLimits

0xc5c7,	// (0x0002b2dd) fep_vkb_keypad_pane_g3

0xc5ef,	// (0x0002b305) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ef,	// (0x0002b305) fep_vkb_keypad_pane_g4

0xc65e,	// (0x0002b374) fep_vkb_bottom_pane_g2_ParamLimits

0xc65e,	// (0x0002b374) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002e858) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002e858) fep_vkb_bottom_pane_g

0xc2de,	// (0x0002aff4) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002e862) cell_vkb_side_pane_g

0xc6e9,	// (0x0002b3ff) cell_vkb_side_pane_t1

0xc6f7,	// (0x0002b40d) cell_vkb_side_pane_t1_copy1

0xc2de,	// (0x0002aff4) bg_fep_vkb_candidate_pane_g2

0xc823,	// (0x0002b539) cell_vkb_candidate_pane_ParamLimits

0xc390,	// (0x0002b0a6) aid_size_cell_vkb_ParamLimits

0xc390,	// (0x0002b0a6) aid_size_cell_vkb

0xc823,	// (0x0002b539) cell_vkb_candidate_pane

0x8e3a,	// (0x00027b50) bg_popup_fep_shadow_pane_g1

0xc41e,	// (0x0002b134) fep_vkb_bottom_pane_ParamLimits

0xc41e,	// (0x0002b134) fep_vkb_bottom_pane

0xc454,	// (0x0002b16a) fep_vkb_candidate_pane_ParamLimits

0xc454,	// (0x0002b16a) fep_vkb_candidate_pane

0xc470,	// (0x0002b186) fep_vkb_keypad_pane_ParamLimits

0xc470,	// (0x0002b186) fep_vkb_keypad_pane

0xc4af,	// (0x0002b1c5) fep_vkb_side_pane_ParamLimits

0xc4af,	// (0x0002b1c5) fep_vkb_side_pane

0xc4eb,	// (0x0002b201) fep_vkb_top_pane_ParamLimits

0xc4eb,	// (0x0002b201) fep_vkb_top_pane

0xc520,	// (0x0002b236) fep_vkb_top_pane_g1_ParamLimits

0xc520,	// (0x0002b236) fep_vkb_top_pane_g1

0xc52f,	// (0x0002b245) fep_vkb_top_pane_g2_ParamLimits

0xc52f,	// (0x0002b245) fep_vkb_top_pane_g2

0xc53e,	// (0x0002b254) fep_vkb_top_pane_g3_ParamLimits

0xc53e,	// (0x0002b254) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002e848) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002e848) fep_vkb_top_pane_g

0xc55c,	// (0x0002b272) fep_vkb_top_text_pane_ParamLimits

0xc55c,	// (0x0002b272) fep_vkb_top_text_pane

0xc56d,	// (0x0002b283) fep_vkb_side_pane_g1_ParamLimits

0xc56d,	// (0x0002b283) fep_vkb_side_pane_g1

0xc5b6,	// (0x0002b2cc) grid_vkb_side_pane_ParamLimits

0xc5b6,	// (0x0002b2cc) grid_vkb_side_pane

0x8e42,	// (0x00027b58) bg_popup_fep_shadow_pane_g2

0x8e4b,	// (0x00027b61) bg_popup_fep_shadow_pane_g3

0x8e53,	// (0x00027b69) bg_popup_fep_shadow_pane_g4

0x8e5c,	// (0x00027b72) bg_popup_fep_shadow_pane_g5

0x8e66,	// (0x00027b7c) bg_popup_fep_shadow_pane_g6

0x8e6e,	// (0x00027b84) bg_popup_fep_shadow_pane_g7

0x1c6a,	// (0x00020980) bg_popup_fep_shadow_pane_g8

0xc60d,	// (0x0002b323) grid_vkb_keypad_number_pane_ParamLimits

0xc60d,	// (0x0002b323) grid_vkb_keypad_number_pane

0xc61d,	// (0x0002b333) grid_vkb_keypad_pane_ParamLimits

0xc61d,	// (0x0002b333) grid_vkb_keypad_pane

0xc643,	// (0x0002b359) fep_vkb_bottom_pane_g1_ParamLimits

0xc643,	// (0x0002b359) fep_vkb_bottom_pane_g1

0xc66c,	// (0x0002b382) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc66c,	// (0x0002b382) grid_vkb_keypad_bottom_left_pane

0xc681,	// (0x0002b397) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc681,	// (0x0002b397) grid_vkb_keypad_bottom_right_pane

0xc696,	// (0x0002b3ac) fep_vkb_top_text_pane_g1

0xc6b1,	// (0x0002b3c7) fep_vkb_top_text_pane_t1

0xc6c6,	// (0x0002b3dc) cell_vkb_side_pane_ParamLimits

0xc6c6,	// (0x0002b3dc) cell_vkb_side_pane

0xc2de,	// (0x0002aff4) cell_vkb_side_pane_g1

0xc705,	// (0x0002b41b) cell_vkb_keypad_pane_ParamLimits

0xc705,	// (0x0002b41b) cell_vkb_keypad_pane

0xc77a,	// (0x0002b490) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002e875) bg_popup_fep_shadow_pane_g

0xc2de,	// (0x0002aff4) cell_hwr_side_pane_g1

0xc2de,	// (0x0002aff4) cell_hwr_side_pane_g2

0xc784,	// (0x0002b49a) cell_vkb_keypad_pane_t1

0xc792,	// (0x0002b4a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc792,	// (0x0002b4a8) cell_vkb_keypad_bottom_left_pane

0xc7af,	// (0x0002b4c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7af,	// (0x0002b4c5) cell_vkb_keypad_bottom_right_pane

0xc2de,	// (0x0002aff4) cell_vkb_keypad_bottom_left_pane_g1

0xc2de,	// (0x0002aff4) cell_vkb_keypad_bottom_right_pane_g1

0xc7e8,	// (0x0002b4fe) cell_vkb_keypad_number_pane_ParamLimits

0xc7e8,	// (0x0002b4fe) cell_vkb_keypad_number_pane

0xc807,	// (0x0002b51d) cell_vkb_keypad_number_pane_g1

0xc811,	// (0x0002b527) cell_vkb_keypad_number_pane_g2

0xc81a,	// (0x0002b530) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002e867) cell_vkb_keypad_number_pane_g

0xc784,	// (0x0002b49a) cell_vkb_keypad_number_pane_t1

0xc83e,	// (0x0002b554) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0002e862) cell_hwr_side_pane_g

0xc857,	// (0x0002b56d) cell_hwr_side_pane_t1

0x8e80,	// (0x00027b96) cell_hwr_side_pane_t1_copy1

0xc54e,	// (0x0002b264) cell_hwr_candidate_pane_g1

0x8e8e,	// (0x00027ba4) cell_hwr_candidate_pane_t1

0xc2de,	// (0x0002aff4) cell_vkb_candidate_pane_g2

0xc8dd,	// (0x0002b5f3) cell_vkb_candidate_pane_t1

0x8c4e,	// (0x00027964) bg_popup_fep_shadow_pane_ParamLimits

0x8c4e,	// (0x00027964) bg_popup_fep_shadow_pane

0x16ba,	// (0x000203d0) bg_fep_hwr_top_pane_g4

0xc35e,	// (0x0002b074) bg_hwr_side_pane_g1_ParamLimits

0xc35e,	// (0x0002b074) bg_hwr_side_pane_g1

0x8d66,	// (0x00027a7c) cell_hwr_side_pane_ParamLimits

0x8d66,	// (0x00027a7c) cell_hwr_side_pane

0x8da1,	// (0x00027ab7) fep_hwr_write_pane_g1_ParamLimits

0x8da1,	// (0x00027ab7) fep_hwr_write_pane_g1

0x8dae,	// (0x00027ac4) fep_hwr_write_pane_g2_ParamLimits

0x8dae,	// (0x00027ac4) fep_hwr_write_pane_g2

0x8dbb,	// (0x00027ad1) fep_hwr_write_pane_g3_ParamLimits

0x8dbb,	// (0x00027ad1) fep_hwr_write_pane_g3

0x8dc9,	// (0x00027adf) fep_hwr_write_pane_g4_ParamLimits

0x8dc9,	// (0x00027adf) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002e834) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002e834) fep_hwr_write_pane_g

0x16ba,	// (0x000203d0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x16ba,	// (0x000203d0) bg_fep_hwr_candidate_pane_g2

0x8dde,	// (0x00027af4) cell_hwr_candidate_pane_ParamLimits

0x8dde,	// (0x00027af4) cell_hwr_candidate_pane

0x8e20,	// (0x00027b36) fep_hwr_candidate_pane_g1_ParamLimits

0xc3be,	// (0x0002b0d4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3be,	// (0x0002b0d4) bg_popup_fep_shadow_pane_cp2

0xc54e,	// (0x0002b264) fep_vkb_top_pane_g4_ParamLimits

0xc54e,	// (0x0002b264) fep_vkb_top_pane_g4

0xc594,	// (0x0002b2aa) fep_vkb_side_pane_g2_ParamLimits

0xc594,	// (0x0002b2aa) fep_vkb_side_pane_g2

0x56b2,	// (0x000243c8) list_setting_pane_t4_ParamLimits

0x56b2,	// (0x000243c8) list_setting_pane_t4

0x5744,	// (0x0002445a) list_setting_number_pane_t5_ParamLimits

0x5744,	// (0x0002445a) list_setting_number_pane_t5

0x721c,	// (0x00025f32) list_double_heading_pane_cp2_ParamLimits

0x721c,	// (0x00025f32) list_double_heading_pane_cp2

0xc8eb,	// (0x0002b601) list_double_heading_pane_g1_cp2_ParamLimits

0xc8eb,	// (0x0002b601) list_double_heading_pane_g1_cp2

0xc8f7,	// (0x0002b60d) list_double_heading_pane_g2_cp2_ParamLimits

0xc8f7,	// (0x0002b60d) list_double_heading_pane_g2_cp2

0xc90b,	// (0x0002b621) list_double_heading_pane_t1_cp2_ParamLimits

0xc90b,	// (0x0002b621) list_double_heading_pane_t1_cp2

0xc921,	// (0x0002b637) list_double_heading_pane_t2_cp2_ParamLimits

0xc921,	// (0x0002b637) list_double_heading_pane_t2_cp2

0x16e2,	// (0x000203f8) aid_value_unit2

0x6742,	// (0x00025458) popup_preview_fixed_window

0x189e,	// (0x000205b4) bg_popup_preview_window_pane_cp02

0xc933,	// (0x0002b649) list_preview_fixed_pane

0xc979,	// (0x0002b68f) list_empty_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_empty_pane_fp

0xc979,	// (0x0002b68f) list_single_cale_day_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_cale_day_pane_fp

0xc979,	// (0x0002b68f) list_single_graphic_heading_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_graphic_heading_pane_fp

0xc979,	// (0x0002b68f) list_single_graphic_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_graphic_pane_fp

0xc979,	// (0x0002b68f) list_single_heading_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_heading_pane_fp

0xc979,	// (0x0002b68f) list_single_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_pane_fp

0xc98f,	// (0x0002b6a5) list_single_pane_fp_g1_ParamLimits

0xc98f,	// (0x0002b6a5) list_single_pane_fp_g1

0x567d,	// (0x00024393) list_single_pane_fp_g2_ParamLimits

0x567d,	// (0x00024393) list_single_pane_fp_g2

0x60d1,	// (0x00024de7) list_single_pane_fp_g3_ParamLimits

0x60d1,	// (0x00024de7) list_single_pane_fp_g3

0xc99b,	// (0x0002b6b1) list_single_pane_fp_g4_ParamLimits

0xc99b,	// (0x0002b6b1) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002e896) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002e896) list_single_pane_fp_g

0x60e5,	// (0x00024dfb) list_single_pane_fp_t1_ParamLimits

0x60e5,	// (0x00024dfb) list_single_pane_fp_t1

0x60fc,	// (0x00024e12) list_single_graphic_pane_fp_g1_ParamLimits

0x60fc,	// (0x00024e12) list_single_graphic_pane_fp_g1

0xc98f,	// (0x0002b6a5) list_single_graphic_pane_fp_g2_ParamLimits

0xc98f,	// (0x0002b6a5) list_single_graphic_pane_fp_g2

0x567d,	// (0x00024393) list_single_graphic_pane_fp_g3_ParamLimits

0x567d,	// (0x00024393) list_single_graphic_pane_fp_g3

0x60d1,	// (0x00024de7) list_single_graphic_pane_fp_g4_ParamLimits

0x60d1,	// (0x00024de7) list_single_graphic_pane_fp_g4

0xc99b,	// (0x0002b6b1) list_single_graphic_pane_fp_g5_ParamLimits

0xc99b,	// (0x0002b6b1) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e89f) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e89f) list_single_graphic_pane_fp_g

0x6108,	// (0x00024e1e) list_single_graphic_pane_fp_t1_ParamLimits

0x6108,	// (0x00024e1e) list_single_graphic_pane_fp_t1

0x60fc,	// (0x00024e12) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x60fc,	// (0x00024e12) list_single_graphic_heading_pane_fp_g1

0xc98f,	// (0x0002b6a5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc98f,	// (0x0002b6a5) list_single_graphic_heading_pane_fp_g2

0x567d,	// (0x00024393) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x567d,	// (0x00024393) list_single_graphic_heading_pane_fp_g3

0x60d1,	// (0x00024de7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x60d1,	// (0x00024de7) list_single_graphic_heading_pane_fp_g4

0xc99b,	// (0x0002b6b1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc99b,	// (0x0002b6b1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e89f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e89f) list_single_graphic_heading_pane_fp_g

0x611e,	// (0x00024e34) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x611e,	// (0x00024e34) list_single_graphic_heading_pane_fp_t1

0x6134,	// (0x00024e4a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6134,	// (0x00024e4a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002e8aa) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002e8aa) list_single_graphic_heading_pane_fp_t

0x6146,	// (0x00024e5c) list_single_cale_day_pane_fp_g1_ParamLimits

0x6146,	// (0x00024e5c) list_single_cale_day_pane_fp_g1

0xc9a7,	// (0x0002b6bd) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9a7,	// (0x0002b6bd) list_single_cale_day_pane_fp_g2

0x617e,	// (0x00024e94) list_single_cale_day_pane_fp_g3_ParamLimits

0x617e,	// (0x00024e94) list_single_cale_day_pane_fp_g3

0x61a6,	// (0x00024ebc) list_single_cale_day_pane_fp_g4_ParamLimits

0x61a6,	// (0x00024ebc) list_single_cale_day_pane_fp_g4

0x61ca,	// (0x00024ee0) list_single_cale_day_pane_fp_g5_ParamLimits

0x61ca,	// (0x00024ee0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002e8af) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002e8af) list_single_cale_day_pane_fp_g

0x61ee,	// (0x00024f04) list_single_cale_day_pane_fp_t1_ParamLimits

0x61ee,	// (0x00024f04) list_single_cale_day_pane_fp_t1

0x6214,	// (0x00024f2a) list_single_cale_day_pane_fp_t2_ParamLimits

0x6214,	// (0x00024f2a) list_single_cale_day_pane_fp_t2

0x622d,	// (0x00024f43) list_single_cale_day_pane_fp_t3_ParamLimits

0x622d,	// (0x00024f43) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002e8ba) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002e8ba) list_single_cale_day_pane_fp_t

0xc98f,	// (0x0002b6a5) list_empty_pane_fp_g1_ParamLimits

0xc98f,	// (0x0002b6a5) list_empty_pane_fp_g1

0x6246,	// (0x00024f5c) list_empty_pane_fp_t1

0x6254,	// (0x00024f6a) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002e8c1) list_empty_pane_fp_t

0xc98f,	// (0x0002b6a5) list_single_heading_pane_fp_g1_ParamLimits

0xc98f,	// (0x0002b6a5) list_single_heading_pane_fp_g1

0x567d,	// (0x00024393) list_single_heading_pane_fp_g2_ParamLimits

0x567d,	// (0x00024393) list_single_heading_pane_fp_g2

0x60d1,	// (0x00024de7) list_single_heading_pane_fp_g3_ParamLimits

0x60d1,	// (0x00024de7) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002e8c6) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002e8c6) list_single_heading_pane_fp_g

0x6262,	// (0x00024f78) list_single_heading_pane_fp_t1_ParamLimits

0x6262,	// (0x00024f78) list_single_heading_pane_fp_t1

0x6274,	// (0x00024f8a) list_single_heading_pane_fp_t2_ParamLimits

0x6274,	// (0x00024f8a) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002e8cd) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002e8cd) list_single_heading_pane_fp_t

0x6eea,	// (0x00025c00) aid_size_cell_fast

0x1881,	// (0x00020597) soft_indicator_pane_cp1_t1

0x6ef3,	// (0x00025c09) cell_app_pane_cp2_ParamLimits

0x6ef3,	// (0x00025c09) cell_app_pane_cp2

0x8c70,	// (0x00027986) fep_hwr_candidate_drop_down_list_pane

0x16c8,	// (0x000203de) fep_hwr_candidate_pane_g3_ParamLimits

0x16c8,	// (0x000203de) fep_hwr_candidate_pane_g3

0x16d5,	// (0x000203eb) fep_hwr_candidate_pane_g4_ParamLimits

0x16d5,	// (0x000203eb) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002e841) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002e841) fep_hwr_candidate_pane_g

0xc443,	// (0x0002b159) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc443,	// (0x0002b159) fep_vkb_candidate_drop_down_list_pane

0xc846,	// (0x0002b55c) fep_vkb_candidate_pane_g3

0xc84e,	// (0x0002b564) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002e86e) fep_vkb_candidate_pane_g

0xc54e,	// (0x0002b264) cell_hwr_candidate_pane_g1_ParamLimits

0xc865,	// (0x0002b57b) cell_hwr_candidate_pane_g3_ParamLimits

0xc865,	// (0x0002b57b) cell_hwr_candidate_pane_g3

0xc886,	// (0x0002b59c) cell_hwr_candidate_pane_g4_ParamLimits

0xc886,	// (0x0002b59c) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002e888) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002e888) cell_hwr_candidate_pane_g

0xc8a7,	// (0x0002b5bd) cell_vkb_candidate_pane_g3_ParamLimits

0xc8a7,	// (0x0002b5bd) cell_vkb_candidate_pane_g3

0xc8c2,	// (0x0002b5d8) cell_vkb_candidate_pane_g4_ParamLimits

0xc8c2,	// (0x0002b5d8) cell_vkb_candidate_pane_g4

0xc9b3,	// (0x0002b6c9) cell_app_pane_cp2_g1_ParamLimits

0xc9b3,	// (0x0002b6c9) cell_app_pane_cp2_g1

0xc9d1,	// (0x0002b6e7) cell_app_pane_cp2_g2_ParamLimits

0xc9d1,	// (0x0002b6e7) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002e8d2) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002e8d2) cell_app_pane_cp2_g

0xc9dd,	// (0x0002b6f3) cell_app_pane_cp2_t1_ParamLimits

0xc9dd,	// (0x0002b6f3) cell_app_pane_cp2_t1

0x1b84,	// (0x0002089a) grid_highlight_pane_cp1_ParamLimits

0x1b84,	// (0x0002089a) grid_highlight_pane_cp1

0x8eac,	// (0x00027bc2) cell_hwr_candidate_pane_cp1_ParamLimits

0x8eac,	// (0x00027bc2) cell_hwr_candidate_pane_cp1

0xc54e,	// (0x0002b264) fep_hwr_candidate_drop_down_list_pane_g1

0xc9ef,	// (0x0002b705) fep_hwr_candidate_drop_down_list_pane_g2

0xc9fc,	// (0x0002b712) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002e8d7) fep_hwr_candidate_drop_down_list_pane_g

0x8ecb,	// (0x00027be1) fep_hwr_candidate_drop_down_list_scroll_pane

0x8ed4,	// (0x00027bea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8ed4,	// (0x00027bea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8ee1,	// (0x00027bf7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8ee1,	// (0x00027bf7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8eee,	// (0x00027c04) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8eee,	// (0x00027c04) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8a7,	// (0x0002b5bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8a7,	// (0x0002b5bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8c2,	// (0x0002b5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8c2,	// (0x0002b5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8efb,	// (0x00027c11) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8efb,	// (0x00027c11) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8f16,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8f16,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8f31,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8f31,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002e8de) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002e8de) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca09,	// (0x0002b71f) cell_vkb_candidate_pane_cp1_ParamLimits

0xca09,	// (0x0002b71f) cell_vkb_candidate_pane_cp1

0xc54e,	// (0x0002b264) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) fep_vkb_candidate_drop_down_list_pane_g1

0xc9ef,	// (0x0002b705) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ef,	// (0x0002b705) fep_vkb_candidate_drop_down_list_pane_g2

0xc9fc,	// (0x0002b712) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9fc,	// (0x0002b712) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002e8d7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0002e8d7) fep_vkb_candidate_drop_down_list_pane_g

0xca29,	// (0x0002b73f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca29,	// (0x0002b73f) fep_vkb_candidate_drop_down_list_scroll_pane

0xca36,	// (0x0002b74c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca36,	// (0x0002b74c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca43,	// (0x0002b759) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca43,	// (0x0002b759) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca4f,	// (0x0002b765) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca4f,	// (0x0002b765) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc865,	// (0x0002b57b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc865,	// (0x0002b57b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc886,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc886,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca5b,	// (0x0002b771) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca5b,	// (0x0002b771) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca7c,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca7c,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca9d,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca9d,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002e8ef) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002e8ef) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x685c,	// (0x00025572) title_pane_g1_ParamLimits

0x6869,	// (0x0002557f) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e264) title_pane_g_ParamLimits

0x3a33,	// (0x00022749) aid_call2_pane

0x3a2b,	// (0x00022741) aid_call_pane

0x3a3b,	// (0x00022751) popup_clock_analogue_window_g1

0x3a3b,	// (0x00022751) popup_clock_analogue_window_g2

0x71fd,	// (0x00025f13) popup_clock_analogue_window_g3

0x7206,	// (0x00025f1c) popup_clock_analogue_window_g4

0x16f4,	// (0x0002040a) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0002e404) popup_clock_analogue_window_g

0x720e,	// (0x00025f24) popup_clock_analogue_window_t1

0x7246,	// (0x00025f5c) clock_digital_number_pane_ParamLimits

0x7246,	// (0x00025f5c) clock_digital_number_pane

0x7252,	// (0x00025f68) clock_digital_number_pane_cp02_ParamLimits

0x7252,	// (0x00025f68) clock_digital_number_pane_cp02

0x725e,	// (0x00025f74) clock_digital_number_pane_cp03_ParamLimits

0x725e,	// (0x00025f74) clock_digital_number_pane_cp03

0x726a,	// (0x00025f80) clock_digital_number_pane_cp04_ParamLimits

0x726a,	// (0x00025f80) clock_digital_number_pane_cp04

0x7276,	// (0x00025f8c) clock_digital_separator_pane_ParamLimits

0x7276,	// (0x00025f8c) clock_digital_separator_pane

0x7282,	// (0x00025f98) popup_clock_digital_window_t1_ParamLimits

0x7282,	// (0x00025f98) popup_clock_digital_window_t1

0x16f4,	// (0x0002040a) clock_digital_number_pane_g1

0x16f4,	// (0x0002040a) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0002e40f) clock_digital_number_pane_g

0x16f4,	// (0x0002040a) clock_digital_separator_pane_g1

0x16f4,	// (0x0002040a) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0002e40f) clock_digital_separator_pane_g

0x8471,	// (0x00027187) aid_fill_nsta_ParamLimits

0x85bd,	// (0x000272d3) indicator_nsta_pane_ParamLimits

0x8736,	// (0x0002744c) popup_clock_analogue_window

0x8736,	// (0x0002744c) popup_clock_digital_window

0x175a,	// (0x00020470) grid_indicator_nsta_pane_ParamLimits

0xbcef,	// (0x0002aa05) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002e7c1) clock_nsta_pane_t

0x7128,	// (0x00025e3e) aid_size_max_handle

0x7132,	// (0x00025e48) aid_size_min_handle

0x794f,	// (0x00026665) editor_scroll_pane

0xcab8,	// (0x0002b7ce) ex_editor_pane

0x1d11,	// (0x00020a27) scroll_pane_cp13

0x1ace,	// (0x000207e4) scroll_pane_cp14

0x3a89,	// (0x0002279f) scroll_pane_cp36

0x7230,	// (0x00025f46) list_single_graphic_hl_pane_cp2_ParamLimits

0x7230,	// (0x00025f46) list_single_graphic_hl_pane_cp2

0xb2c6,	// (0x00029fdc) list_single_graphic_hl_pane_ParamLimits

0xb2c6,	// (0x00029fdc) list_single_graphic_hl_pane

0x14d5,	// (0x000201eb) aid_size_min_hl_cp1

0xcac0,	// (0x0002b7d6) list_highlight_pane_cp34_ParamLimits

0xcac0,	// (0x0002b7d6) list_highlight_pane_cp34

0xcad1,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_ParamLimits

0xcad1,	// (0x0002b7e7) list_single_graphic_hl_pane_g1

0x628a,	// (0x00024fa0) list_single_graphic_hl_pane_g2_ParamLimits

0x628a,	// (0x00024fa0) list_single_graphic_hl_pane_g2

0x628a,	// (0x00024fa0) list_single_graphic_hl_pane_g3_ParamLimits

0x628a,	// (0x00024fa0) list_single_graphic_hl_pane_g3

0x6296,	// (0x00024fac) list_single_graphic_hl_pane_g4_ParamLimits

0x6296,	// (0x00024fac) list_single_graphic_hl_pane_g4

0x62a2,	// (0x00024fb8) list_single_graphic_hl_pane_g5_ParamLimits

0x62a2,	// (0x00024fb8) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0002e900) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0002e900) list_single_graphic_hl_pane_g

0x62b6,	// (0x00024fcc) list_single_graphic_hl_pane_t1_ParamLimits

0x62b6,	// (0x00024fcc) list_single_graphic_hl_pane_t1

0xcafe,	// (0x0002b814) aid_size_min_hl_cp2

0xcb07,	// (0x0002b81d) list_highlight_pane_cp34_cp2_ParamLimits

0xcb07,	// (0x0002b81d) list_highlight_pane_cp34_cp2

0xcad1,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcad1,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_cp2

0xcb14,	// (0x0002b82a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb14,	// (0x0002b82a) list_single_graphic_hl_pane_g2_cp2

0xcb20,	// (0x0002b836) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb20,	// (0x0002b836) list_single_graphic_hl_pane_g3_cp2

0x7888,	// (0x0002659e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7888,	// (0x0002659e) list_single_graphic_hl_pane_g4_cp2

0xcb2e,	// (0x0002b844) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb2e,	// (0x0002b844) list_single_graphic_hl_pane_g5_cp2

0x7d17,	// (0x00026a2d) control_pane_g4_ParamLimits

0x7d17,	// (0x00026a2d) control_pane_g4

0x7eb4,	// (0x00026bca) bg_popup_sub_pane_cp10_ParamLimits

0xc2e8,	// (0x0002affe) list_choice_list_pane_ParamLimits

0xc2f7,	// (0x0002b00d) scroll_pane_cp23

0x189e,	// (0x000205b4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc933,	// (0x0002b649) list_preview_fixed_pane_ParamLimits

0xc949,	// (0x0002b65f) list_preview_fixed_pane_cp_ParamLimits

0xc949,	// (0x0002b65f) list_preview_fixed_pane_cp

0xc955,	// (0x0002b66b) popup_preview_fixed_window_g1_ParamLimits

0xc955,	// (0x0002b66b) popup_preview_fixed_window_g1

0xc961,	// (0x0002b677) popup_preview_fixed_window_g2_ParamLimits

0xc961,	// (0x0002b677) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002e88f) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002e88f) popup_preview_fixed_window_g

0x7002,	// (0x00025d18) aid_navi_side_left_pane_ParamLimits

0x7017,	// (0x00025d2d) aid_navi_side_right_pane_ParamLimits

0x702f,	// (0x00025d45) navi_icon_pane_stacon_ParamLimits

0x7043,	// (0x00025d59) navi_navi_pane_stacon_ParamLimits

0x702f,	// (0x00025d45) navi_text_pane_stacon_ParamLimits

0x16ea,	// (0x00020400) main_text_info_pane

0xcb58,	// (0x0002b86e) listscroll_text_info_pane

0xcb60,	// (0x0002b876) list_text_info_pane_ParamLimits

0xcb60,	// (0x0002b876) list_text_info_pane

0xcb6f,	// (0x0002b885) scroll_pane_cp24_ParamLimits

0xcb6f,	// (0x0002b885) scroll_pane_cp24

0xcb8d,	// (0x0002b8a3) list_text_info_pane_t1_ParamLimits

0xcb8d,	// (0x0002b8a3) list_text_info_pane_t1

0x7ef8,	// (0x00026c0e) popup_fast_swap2_window_ParamLimits

0x7ef8,	// (0x00026c0e) popup_fast_swap2_window

0xcbc1,	// (0x0002b8d7) aid_size_cell_fast2

0x16ea,	// (0x00020400) bg_popup_window_pane_cp17

0xa17e,	// (0x00028e94) heading_pane_cp2

0x19d2,	// (0x000206e8) listscroll_fast2_pane

0xcbcb,	// (0x0002b8e1) grid_fast2_pane

0xcbd5,	// (0x0002b8eb) listscroll_fast2_pane_g1

0xcbdd,	// (0x0002b8f3) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0002e90b) listscroll_fast2_pane_g

0x1d11,	// (0x00020a27) scroll_pane_cp26

0xcbe7,	// (0x0002b8fd) cell_fast2_pane_ParamLimits

0xcbe7,	// (0x0002b8fd) cell_fast2_pane

0xcbfc,	// (0x0002b912) cell_fast2_pane_g1

0xcc05,	// (0x0002b91b) cell_fast2_pane_g2

0xcc0e,	// (0x0002b924) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0002e910) cell_fast2_pane_g

0x1a05,	// (0x0002071b) grid_highlight_pane_cp9

0x1a1a,	// (0x00020730) main_eswt_pane_ParamLimits

0x1a1a,	// (0x00020730) main_eswt_pane

0xcb84,	// (0x0002b89a) list_single_text_info_pane

0xcc16,	// (0x0002b92c) eswt_ctrl_button_pane

0xcc16,	// (0x0002b92c) eswt_ctrl_canvas_pane

0xcc1e,	// (0x0002b934) eswt_ctrl_combo_pane

0xcc16,	// (0x0002b92c) eswt_ctrl_default_pane

0xcc16,	// (0x0002b92c) eswt_ctrl_label_pane

0xcc26,	// (0x0002b93c) eswt_ctrl_wait_pane

0xcc2e,	// (0x0002b944) eswt_shell_pane

0x16ea,	// (0x00020400) listscroll_eswt_app_pane

0xcc4e,	// (0x0002b964) popup_eswt_tasktip_window_ParamLimits

0xcc4e,	// (0x0002b964) popup_eswt_tasktip_window

0x9d8b,	// (0x00028aa1) bg_popup_window_pane_cp18

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_ParamLimits

0xcc5f,	// (0x0002b975) eswt_control_pane_g1

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_ParamLimits

0xcc6c,	// (0x0002b982) eswt_control_pane_g2

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_ParamLimits

0xcc79,	// (0x0002b98f) eswt_control_pane_g3

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_ParamLimits

0xcc86,	// (0x0002b99c) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0002e917) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0002e917) eswt_control_pane_g

0x1b84,	// (0x0002089a) bg_button_pane_ParamLimits

0x1b84,	// (0x0002089a) bg_button_pane

0x1a1a,	// (0x00020730) common_borders_pane_copy2_ParamLimits

0x1a1a,	// (0x00020730) common_borders_pane_copy2

0xcc93,	// (0x0002b9a9) control_button_pane_g1_ParamLimits

0xcc93,	// (0x0002b9a9) control_button_pane_g1

0xcc9f,	// (0x0002b9b5) control_button_pane_g2_ParamLimits

0xcc9f,	// (0x0002b9b5) control_button_pane_g2

0xccab,	// (0x0002b9c1) control_button_pane_g3_ParamLimits

0xccab,	// (0x0002b9c1) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0002e920) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0002e920) control_button_pane_g

0xccbf,	// (0x0002b9d5) control_button_pane_t1

0xcccd,	// (0x0002b9e3) control_button_pane_t2

0x0001,

0xfc11,	// (0x0002e927) control_button_pane_t

0x9d17,	// (0x00028a2d) bg_button_pane_g1

0x9d1f,	// (0x00028a35) bg_button_pane_g2

0x9d27,	// (0x00028a3d) bg_button_pane_g3

0x9d2f,	// (0x00028a45) bg_button_pane_g4

0x9d37,	// (0x00028a4d) bg_button_pane_g5

0x9d3f,	// (0x00028a55) bg_button_pane_g6

0x9d47,	// (0x00028a5d) bg_button_pane_g7

0x9d4f,	// (0x00028a65) bg_button_pane_g8

0x9d57,	// (0x00028a6d) bg_button_pane_g9

0x0008,

0xf857,	// (0x0002e56d) bg_button_pane_g

0xc2a3,	// (0x0002afb9) common_borders_pane_ParamLimits

0xc2a3,	// (0x0002afb9) common_borders_pane

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy1_ParamLimits

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy1

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy1_ParamLimits

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy1

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy1_ParamLimits

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy1

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy1_ParamLimits

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy1

0xc2de,	// (0x0002aff4) bg_eswt_ctrl_canvas_pane_g1

0xc2a3,	// (0x0002afb9) common_borders_pane_cp2_ParamLimits

0xc2a3,	// (0x0002afb9) common_borders_pane_cp2

0xc2a3,	// (0x0002afb9) common_borders_pane_cp3_ParamLimits

0xc2a3,	// (0x0002afb9) common_borders_pane_cp3

0xccdb,	// (0x0002b9f1) separator_horizontal_pane

0xcce3,	// (0x0002b9f9) separator_vertical_pane

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy2_ParamLimits

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy2

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy2_ParamLimits

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy2

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy2_ParamLimits

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy2

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy2_ParamLimits

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy2

0x16ea,	// (0x00020400) common_borders_pane_cp4

0xccec,	// (0x0002ba02) separator_horizontal_pane_g1

0xccf5,	// (0x0002ba0b) separator_horizontal_pane_g2

0xccfe,	// (0x0002ba14) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0002e92c) separator_horizontal_pane_g

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy3_ParamLimits

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy3

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy3_ParamLimits

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy3

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy3_ParamLimits

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy3

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy3_ParamLimits

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy3

0x16ea,	// (0x00020400) common_borders_pane_cp5

0xcd07,	// (0x0002ba1d) separator_vertical_pane_g1

0xcd10,	// (0x0002ba26) separator_vertical_pane_g2

0xcd19,	// (0x0002ba2f) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0002e933) separator_vertical_pane_g

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy4_ParamLimits

0xcc5f,	// (0x0002b975) eswt_control_pane_g1_copy4

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy4_ParamLimits

0xcc6c,	// (0x0002b982) eswt_control_pane_g2_copy4

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy4_ParamLimits

0xcc79,	// (0x0002b98f) eswt_control_pane_g3_copy4

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy4_ParamLimits

0xcc86,	// (0x0002b99c) eswt_control_pane_g4_copy4

0xcd22,	// (0x0002ba38) eswt_ctrl_combo_button_pane

0xcd2a,	// (0x0002ba40) eswt_ctrl_input_pane

0xcd32,	// (0x0002ba48) popup_choice_list_window_cp70

0xcd3a,	// (0x0002ba50) eswt_ctrl_input_pane_t1

0x16ea,	// (0x00020400) input_focus_pane_cp70

0xc2a3,	// (0x0002afb9) bg_button_pane_cp70_ParamLimits

0xc2a3,	// (0x0002afb9) bg_button_pane_cp70

0xcd48,	// (0x0002ba5e) eswt_ctrl_combo_button_pane_g1

0xcd50,	// (0x0002ba66) wait_bar_pane_cp70

0x9d8b,	// (0x00028aa1) bg_popup_window_pane_cp70_ParamLimits

0x9d8b,	// (0x00028aa1) bg_popup_window_pane_cp70

0xcd58,	// (0x0002ba6e) popup_eswt_tasktip_window_t1

0xcd6e,	// (0x0002ba84) wait_bar_pane_cp71_ParamLimits

0xcd6e,	// (0x0002ba84) wait_bar_pane_cp71

0xcd7a,	// (0x0002ba90) grid_eswt_app_pane

0x390e,	// (0x00022624) scroll_pane_cp70

0xcd83,	// (0x0002ba99) cell_eswt_app_pane_ParamLimits

0xcd83,	// (0x0002ba99) cell_eswt_app_pane

0xcdb3,	// (0x0002bac9) cell_eswt_app_pane_g1_ParamLimits

0xcdb3,	// (0x0002bac9) cell_eswt_app_pane_g1

0xcde2,	// (0x0002baf8) cell_eswt_app_pane_g2_ParamLimits

0xcde2,	// (0x0002baf8) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0002e93a) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0002e93a) cell_eswt_app_pane_g

0xce06,	// (0x0002bb1c) cell_eswt_app_pane_t1_ParamLimits

0xce06,	// (0x0002bb1c) cell_eswt_app_pane_t1

0xce38,	// (0x0002bb4e) grid_highlight_pane_cp70_ParamLimits

0xce38,	// (0x0002bb4e) grid_highlight_pane_cp70

0x7824,	// (0x0002653a) set_content_pane_g1

0x7c9f,	// (0x000269b5) status_small_volume_pane

0x8f4c,	// (0x00027c62) status_small_volume_pane_g1

0x8f54,	// (0x00027c6a) volume_small2_pane

0x8f5d,	// (0x00027c73) volume_small2_pane_g1

0x8f66,	// (0x00027c7c) volume_small2_pane_g2

0x8f6f,	// (0x00027c85) volume_small2_pane_g3

0x8f78,	// (0x00027c8e) volume_small2_pane_g4

0x8f81,	// (0x00027c97) volume_small2_pane_g5

0x8f8a,	// (0x00027ca0) volume_small2_pane_g6

0x8f93,	// (0x00027ca9) volume_small2_pane_g7

0x8f9c,	// (0x00027cb2) volume_small2_pane_g8

0x8fa5,	// (0x00027cbb) volume_small2_pane_g9

0x8fae,	// (0x00027cc4) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0002e93f) volume_small2_pane_g

0xc696,	// (0x0002b3ac) fep_vkb_top_text_pane_g1_ParamLimits

0xc6b1,	// (0x0002b3c7) fep_vkb_top_text_pane_t1_ParamLimits

0xc96d,	// (0x0002b683) popup_preview_fixed_window_g3_ParamLimits

0xc96d,	// (0x0002b683) popup_preview_fixed_window_g3

0x83a7,	// (0x000270bd) popup_toolbar_trans_pane

0xb0b5,	// (0x00029dcb) aid_height_set_list_ParamLimits

0xb0c6,	// (0x00029ddc) aid_size_parent_ParamLimits

0x7eb4,	// (0x00026bca) list_highlight_pane_cp2_ParamLimits

0x7824,	// (0x0002653a) set_content_pane_g1_ParamLimits

0x5cda,	// (0x000249f0) list_single_image_pane_ParamLimits

0x5cda,	// (0x000249f0) list_single_image_pane

0xce44,	// (0x0002bb5a) aid_size_cell_image_ParamLimits

0xce44,	// (0x0002bb5a) aid_size_cell_image

0xce51,	// (0x0002bb67) grid_single_image_pane_ParamLimits

0xce51,	// (0x0002bb67) grid_single_image_pane

0xcade,	// (0x0002b7f4) list_single_image_pane_g1_ParamLimits

0xcade,	// (0x0002b7f4) list_single_image_pane_g1

0xcaea,	// (0x0002b800) list_single_image_pane_g2_ParamLimits

0xcaea,	// (0x0002b800) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0002e954) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0002e954) list_single_image_pane_g

0xce5f,	// (0x0002bb75) list_single_image_pane_t1_ParamLimits

0xce5f,	// (0x0002bb75) list_single_image_pane_t1

0xce75,	// (0x0002bb8b) cell_image_list_pane_ParamLimits

0xce75,	// (0x0002bb8b) cell_image_list_pane

0xce89,	// (0x0002bb9f) cell_image_list_pane_g1

0xce92,	// (0x0002bba8) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0002e959) cell_image_list_pane_g

0xce9b,	// (0x0002bbb1) aid_size_cell_tb_trans_pane

0x1b84,	// (0x0002089a) bg_tb_trans_pane

0xcead,	// (0x0002bbc3) grid_tb_trans_pane

0x9d17,	// (0x00028a2d) bg_tb_trans_pane_g1

0x9d1f,	// (0x00028a35) bg_tb_trans_pane_g2

0x9d27,	// (0x00028a3d) bg_tb_trans_pane_g3

0x9d2f,	// (0x00028a45) bg_tb_trans_pane_g4

0x9d37,	// (0x00028a4d) bg_tb_trans_pane_g5

0x9d4f,	// (0x00028a65) bg_tb_trans_pane_g6

0x9d57,	// (0x00028a6d) bg_tb_trans_pane_g7

0x9d3f,	// (0x00028a55) bg_tb_trans_pane_g8

0x9d47,	// (0x00028a5d) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0002e95e) bg_tb_trans_pane_g

0xcec1,	// (0x0002bbd7) cell_toolbar_trans_pane_ParamLimits

0xcec1,	// (0x0002bbd7) cell_toolbar_trans_pane

0xc2de,	// (0x0002aff4) cell_toolbar_trans_pane_g1

0xbeaf,	// (0x0002abc5) list_form2_midp_pane_t1

0xbebd,	// (0x0002abd3) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002e807) list_form2_midp_pane_t

0xbecb,	// (0x0002abe1) scroll_pane_cp51_ParamLimits

0xc087,	// (0x0002ad9d) form2_midp_wait_pane_g1

0xc090,	// (0x0002ada6) form2_midp_wait_pane_g2

0xc099,	// (0x0002adaf) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002e81c) form2_midp_wait_pane_g

0x175a,	// (0x00020470) list_highlight_pane_cp21_ParamLimits

0xc0e1,	// (0x0002adf7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0f0,	// (0x0002ae06) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5c72,	// (0x00024988) list_single_2graphic_im_pane_ParamLimits

0x5c72,	// (0x00024988) list_single_2graphic_im_pane

0xcee7,	// (0x0002bbfd) list_single_2graphic_im_pane_g1_ParamLimits

0xcee7,	// (0x0002bbfd) list_single_2graphic_im_pane_g1

0xcef8,	// (0x0002bc0e) list_single_2graphic_im_pane_g2_ParamLimits

0xcef8,	// (0x0002bc0e) list_single_2graphic_im_pane_g2

0xcf04,	// (0x0002bc1a) list_single_2graphic_im_pane_g3_ParamLimits

0xcf04,	// (0x0002bc1a) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0002e971) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0002e971) list_single_2graphic_im_pane_g

0xcf24,	// (0x0002bc3a) list_single_2graphic_im_pane_t1_ParamLimits

0xcf24,	// (0x0002bc3a) list_single_2graphic_im_pane_t1

0xc979,	// (0x0002b68f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc979,	// (0x0002b68f) list_single_graphic_2heading_pane_fp

0x60fc,	// (0x00024e12) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x60fc,	// (0x00024e12) list_single_graphic_2heading_pane_fp_g1

0xc98f,	// (0x0002b6a5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc98f,	// (0x0002b6a5) list_single_graphic_2heading_pane_fp_g2

0x567d,	// (0x00024393) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x567d,	// (0x00024393) list_single_graphic_2heading_pane_fp_g3

0x60d1,	// (0x00024de7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x60d1,	// (0x00024de7) list_single_graphic_2heading_pane_fp_g4

0xc99b,	// (0x0002b6b1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc99b,	// (0x0002b6b1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e89f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e89f) list_single_graphic_2heading_pane_fp_g

0x62cc,	// (0x00024fe2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x62cc,	// (0x00024fe2) list_single_graphic_2heading_pane_fp_t1

0x6134,	// (0x00024e4a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6134,	// (0x00024e4a) list_single_graphic_2heading_pane_fp_t2

0x62e2,	// (0x00024ff8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x62e2,	// (0x00024ff8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0002e97a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0002e97a) list_single_graphic_2heading_pane_fp_t

0xc36a,	// (0x0002b080) fep_hwr_write_pane_g5_ParamLimits

0xc36a,	// (0x0002b080) fep_hwr_write_pane_g5

0xc376,	// (0x0002b08c) fep_hwr_write_pane_g6_ParamLimits

0xc376,	// (0x0002b08c) fep_hwr_write_pane_g6

0xcc2e,	// (0x0002b944) eswt_shell_pane_ParamLimits

0x9d8b,	// (0x00028aa1) bg_popup_window_pane_cp18_ParamLimits

0xb00e,	// (0x00029d24) heading_pane_cp70

0xcd58,	// (0x0002ba6e) popup_eswt_tasktip_window_t1_ParamLimits

0x84c6,	// (0x000271dc) aid_touch_tab_arrow_left

0x84d5,	// (0x000271eb) aid_touch_tab_arrow_right

0x687a,	// (0x00025590) title_pane_g3_ParamLimits

0x687a,	// (0x00025590) title_pane_g3

0x1b1b,	// (0x00020831) set_value_pane_g1

0x83a7,	// (0x000270bd) popup_toolbar_trans_pane_ParamLimits

0xce9b,	// (0x0002bbb1) aid_size_cell_tb_trans_pane_ParamLimits

0x1b84,	// (0x0002089a) bg_tb_trans_pane_ParamLimits

0xcead,	// (0x0002bbc3) grid_tb_trans_pane_ParamLimits

0x189e,	// (0x000205b4) cont_note_pane_ParamLimits

0x189e,	// (0x000205b4) cont_note_pane

0x1a1a,	// (0x00020730) cont_snote2_single_text_pane_ParamLimits

0x1a1a,	// (0x00020730) cont_snote2_single_text_pane

0x1a1a,	// (0x00020730) cont_snote2_single_graphic_pane_ParamLimits

0x1a1a,	// (0x00020730) cont_snote2_single_graphic_pane

0xa391,	// (0x000290a7) cont_note_wait_pane_ParamLimits

0xa391,	// (0x000290a7) cont_note_wait_pane

0xa391,	// (0x000290a7) cont_note_image_pane_ParamLimits

0xa391,	// (0x000290a7) cont_note_image_pane

0xcf55,	// (0x0002bc6b) popup_note2_window_g1_ParamLimits

0xcf55,	// (0x0002bc6b) popup_note2_window_g1

0xcf86,	// (0x0002bc9c) popup_note2_window_t1_ParamLimits

0xcf86,	// (0x0002bc9c) popup_note2_window_t1

0xcfcb,	// (0x0002bce1) popup_note2_window_t2_ParamLimits

0xcfcb,	// (0x0002bce1) popup_note2_window_t2

0xd010,	// (0x0002bd26) popup_note2_window_t3_ParamLimits

0xd010,	// (0x0002bd26) popup_note2_window_t3

0xd055,	// (0x0002bd6b) popup_note2_window_t4_ParamLimits

0xd055,	// (0x0002bd6b) popup_note2_window_t4

0x1922,	// (0x00020638) popup_note2_window_t5_ParamLimits

0x1922,	// (0x00020638) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0002e986) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0002e986) popup_note2_window_t

0xd084,	// (0x0002bd9a) popup_note2_image_window_g1_ParamLimits

0xd084,	// (0x0002bd9a) popup_note2_image_window_g1

0xd090,	// (0x0002bda6) popup_note2_image_window_g2_ParamLimits

0xd090,	// (0x0002bda6) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0002e991) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0002e991) popup_note2_image_window_g

0xd0a2,	// (0x0002bdb8) popup_note2_image_window_t1_ParamLimits

0xd0a2,	// (0x0002bdb8) popup_note2_image_window_t1

0xd0ba,	// (0x0002bdd0) popup_note2_image_window_t2_ParamLimits

0xd0ba,	// (0x0002bdd0) popup_note2_image_window_t2

0xd0d2,	// (0x0002bde8) popup_note2_image_window_t3_ParamLimits

0xd0d2,	// (0x0002bde8) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0002e996) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0002e996) popup_note2_image_window_t

0xa39f,	// (0x000290b5) popup_note2_wait_window_g1_ParamLimits

0xa39f,	// (0x000290b5) popup_note2_wait_window_g1

0xa3ab,	// (0x000290c1) popup_note2_wait_window_g2_ParamLimits

0xa3ab,	// (0x000290c1) popup_note2_wait_window_g2

0xa3b7,	// (0x000290cd) popup_note2_wait_window_g3_ParamLimits

0xa3b7,	// (0x000290cd) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0002e54f) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0002e54f) popup_note2_wait_window_g

0xd0ee,	// (0x0002be04) popup_note2_wait_window_t1_ParamLimits

0xd0ee,	// (0x0002be04) popup_note2_wait_window_t1

0xd10c,	// (0x0002be22) popup_note2_wait_window_t2_ParamLimits

0xd10c,	// (0x0002be22) popup_note2_wait_window_t2

0xd12a,	// (0x0002be40) popup_note2_wait_window_t3_ParamLimits

0xd12a,	// (0x0002be40) popup_note2_wait_window_t3

0xd13c,	// (0x0002be52) popup_note2_wait_window_t4_ParamLimits

0xd13c,	// (0x0002be52) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002e99d) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002e99d) popup_note2_wait_window_t

0xd14e,	// (0x0002be64) wait_bar2_pane_ParamLimits

0xd14e,	// (0x0002be64) wait_bar2_pane

0xd166,	// (0x0002be7c) popup_snote2_single_text_window_g1_ParamLimits

0xd166,	// (0x0002be7c) popup_snote2_single_text_window_g1

0xd18e,	// (0x0002bea4) popup_snote2_single_text_window_t1_ParamLimits

0xd18e,	// (0x0002bea4) popup_snote2_single_text_window_t1

0xd1da,	// (0x0002bef0) popup_snote2_single_text_window_t2_ParamLimits

0xd1da,	// (0x0002bef0) popup_snote2_single_text_window_t2

0xd226,	// (0x0002bf3c) popup_snote2_single_text_window_t3_ParamLimits

0xd226,	// (0x0002bf3c) popup_snote2_single_text_window_t3

0xd267,	// (0x0002bf7d) popup_snote2_single_text_window_t4_ParamLimits

0xd267,	// (0x0002bf7d) popup_snote2_single_text_window_t4

0xd29d,	// (0x0002bfb3) popup_snote2_single_text_window_t5_ParamLimits

0xd29d,	// (0x0002bfb3) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002e9a6) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002e9a6) popup_snote2_single_text_window_t

0xd2c8,	// (0x0002bfde) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2c8,	// (0x0002bfde) popup_snote2_single_graphic_window_g1

0xd2f0,	// (0x0002c006) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2f0,	// (0x0002c006) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002e9b1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002e9b1) popup_snote2_single_graphic_window_g

0xd318,	// (0x0002c02e) popup_snote2_single_graphic_window_t1_ParamLimits

0xd318,	// (0x0002c02e) popup_snote2_single_graphic_window_t1

0xd364,	// (0x0002c07a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd364,	// (0x0002c07a) popup_snote2_single_graphic_window_t2

0xd226,	// (0x0002bf3c) popup_snote2_single_graphic_window_t3_ParamLimits

0xd226,	// (0x0002bf3c) popup_snote2_single_graphic_window_t3

0xd267,	// (0x0002bf7d) popup_snote2_single_graphic_window_t4_ParamLimits

0xd267,	// (0x0002bf7d) popup_snote2_single_graphic_window_t4

0xd29d,	// (0x0002bfb3) popup_snote2_single_graphic_window_t5_ParamLimits

0xd29d,	// (0x0002bfb3) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002e9b6) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002e9b6) popup_snote2_single_graphic_window_t

0xbd88,	// (0x0002aa9e) clock_nsta_pane_cp2_t1

0xbd88,	// (0x0002aa9e) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002e7dd) clock_nsta_pane_cp2_t

0x585a,	// (0x00024570) form_field_data_wide_pane_g1_ParamLimits

0x1baf,	// (0x000208c5) form_field_data_wide_pane_g2_ParamLimits

0x1baf,	// (0x000208c5) form_field_data_wide_pane_g2

0x1bbb,	// (0x000208d1) form_field_data_wide_pane_g3_ParamLimits

0x1bbb,	// (0x000208d1) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0002e387) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0002e387) form_field_data_wide_pane_g

0xbc8b,	// (0x0002a9a1) grid_touch_3_pane_ParamLimits

0xbc8b,	// (0x0002a9a1) grid_touch_3_pane

0xd3b0,	// (0x0002c0c6) cell_touch_3_pane_ParamLimits

0xd3b0,	// (0x0002c0c6) cell_touch_3_pane

0xc2de,	// (0x0002aff4) cell_touch_3_pane_g1

0xc2de,	// (0x0002aff4) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002e862) cell_touch_3_pane_g

0x1954,	// (0x0002066a) cont_query_data_pane

0x195c,	// (0x00020672) cont_query_data_pane_cp1

0xd3de,	// (0x0002c0f4) button_value_adjust_pane_cp7

0xd3e6,	// (0x0002c0fc) query_popup_pane_cp3

0x3b16,	// (0x0002282c) bg_popup_sub_pane_cp22_ParamLimits

0x72fc,	// (0x00026012) navi_navi_volume_pane_cp2

0x7314,	// (0x0002602a) popup_side_volume_key_window_g2

0x7320,	// (0x00026036) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0002e41d) popup_side_volume_key_window_g

0x733a,	// (0x00026050) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0002e424) popup_side_volume_key_window_t

0x76f1,	// (0x00026407) popup_side_volume_key_window_ParamLimits

0x550c,	// (0x00024222) list_double_graphic_pane_g4_ParamLimits

0x550c,	// (0x00024222) list_double_graphic_pane_g4

0x5cb7,	// (0x000249cd) list_single_2heading_msg_pane_ParamLimits

0x5cb7,	// (0x000249cd) list_single_2heading_msg_pane

0x6302,	// (0x00025018) list_single_2heading_msg_pane_g1_ParamLimits

0x6302,	// (0x00025018) list_single_2heading_msg_pane_g1

0x533b,	// (0x00024051) list_single_2heading_msg_pane_g2_ParamLimits

0x533b,	// (0x00024051) list_single_2heading_msg_pane_g2

0x5e47,	// (0x00024b5d) list_single_2heading_msg_pane_g3_ParamLimits

0x5e47,	// (0x00024b5d) list_single_2heading_msg_pane_g3

0x630e,	// (0x00025024) list_single_2heading_msg_pane_g4_ParamLimits

0x630e,	// (0x00025024) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002e9c1) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002e9c1) list_single_2heading_msg_pane_g

0x6326,	// (0x0002503c) list_single_2heading_msg_pane_t1_ParamLimits

0x6326,	// (0x0002503c) list_single_2heading_msg_pane_t1

0x634e,	// (0x00025064) list_single_2heading_msg_pane_t2_ParamLimits

0x634e,	// (0x00025064) list_single_2heading_msg_pane_t2

0x6382,	// (0x00025098) list_single_2heading_msg_pane_t3_ParamLimits

0x6382,	// (0x00025098) list_single_2heading_msg_pane_t3

0x63bb,	// (0x000250d1) list_single_2heading_msg_pane_t4_ParamLimits

0x63bb,	// (0x000250d1) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002e9ca) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002e9ca) list_single_2heading_msg_pane_t

0x1708,	// (0x0002041e) title_pane_g4_ParamLimits

0x1708,	// (0x0002041e) title_pane_g4

0x6f53,	// (0x00025c69) title_pane_stacon_g3_ParamLimits

0x6f53,	// (0x00025c69) title_pane_stacon_g3

0xcf18,	// (0x0002bc2e) list_single_2graphic_im_pane_g4_ParamLimits

0xcf18,	// (0x0002bc2e) list_single_2graphic_im_pane_g4

0xadd8,	// (0x00029aee) popup_side_volume_key_window_cp

0xb5e6,	// (0x0002a2fc) main_idle_act2_pane_t1

0x87ba,	// (0x000274d0) toolbar_button_pane_g10

0x6e13,	// (0x00025b29) popup_toolbar_window_cp1

0xbd79,	// (0x0002aa8f) clock_nsta_pane_cp_t1

0xbd79,	// (0x0002aa8f) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002e7d8) clock_nsta_pane_cp_t

0x72fc,	// (0x00026012) navi_navi_volume_pane_cp2_ParamLimits

0x7308,	// (0x0002601e) popup_side_volume_key_window_g1_ParamLimits

0x7314,	// (0x0002602a) popup_side_volume_key_window_g2_ParamLimits

0x7320,	// (0x00026036) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0002e41d) popup_side_volume_key_window_g_ParamLimits

0x8c5c,	// (0x00027972) fep_hwr_aid_pane

0x16ba,	// (0x000203d0) bg_fep_hwr_top_pane_g4_ParamLimits

0xc33a,	// (0x0002b050) fep_hwr_top_pane_g1_ParamLimits

0xc34c,	// (0x0002b062) fep_hwr_top_pane_g2_ParamLimits

0x8d15,	// (0x00027a2b) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002e82d) fep_hwr_top_pane_g_ParamLimits

0x8d2a,	// (0x00027a40) fep_hwr_top_text_pane_ParamLimits

0xab9b,	// (0x000298b1) aid_touch_tab_arrow_arrow_2

0xaba4,	// (0x000298ba) aid_touch_tab_arrow_left_2

0x8c70,	// (0x00027986) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8ca7,	// (0x000279bd) fep_hwr_prediction_pane

0xc4a5,	// (0x0002b1bb) fep_vkb_prediction_pane

0xc5a2,	// (0x0002b2b8) fep_vkb_side_pane_g3_ParamLimits

0xc5a2,	// (0x0002b2b8) fep_vkb_side_pane_g3

0xc54e,	// (0x0002b264) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9ef,	// (0x0002b705) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9fc,	// (0x0002b712) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002e8d7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd40b,	// (0x0002c121) fep_hwr_prediction_pane_g1

0x8fb7,	// (0x00027ccd) fep_hwr_prediction_pane_g2

0x8fbf,	// (0x00027cd5) fep_hwr_prediction_pane_g3

0x8fc7,	// (0x00027cdd) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002e9d3) fep_hwr_prediction_pane_g

0xd40b,	// (0x0002c121) fep_vkb_prediction_pane_g1

0xd415,	// (0x0002c12b) fep_vkb_prediction_pane_g2

0xd41d,	// (0x0002c133) fep_vkb_prediction_pane_g3

0xd425,	// (0x0002c13b) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002e9dc) fep_vkb_prediction_pane_g

0x8a94,	// (0x000277aa) slider_set_pane_g3

0x8aa8,	// (0x000277be) slider_set_pane_g4

0x8ac0,	// (0x000277d6) slider_set_pane_g5

0x8a94,	// (0x000277aa) slider_set_pane_g6

0x8ad6,	// (0x000277ec) slider_set_pane_g7

0xb227,	// (0x00029f3d) slider_form_pane_g3

0xb230,	// (0x00029f46) slider_form_pane_g4

0xb238,	// (0x00029f4e) slider_form_pane_g5

0xb227,	// (0x00029f3d) slider_form_pane_g6

0xb240,	// (0x00029f56) slider_form_pane_g7

0xb891,	// (0x0002a5a7) slider_set_pane_vc_g3

0xb89a,	// (0x0002a5b0) slider_set_pane_vc_g4

0xb8a3,	// (0x0002a5b9) slider_set_pane_vc_g5

0xb891,	// (0x0002a5a7) slider_set_pane_vc_g6

0xb8ac,	// (0x0002a5c2) slider_set_pane_vc_g7

0xba5e,	// (0x0002a774) slider_form_pane_vc_g1

0xba67,	// (0x0002a77d) slider_form_pane_vc_g2

0xba70,	// (0x0002a786) slider_form_pane_vc_g3

0xba5e,	// (0x0002a774) slider_form_pane_vc_g4

0xba79,	// (0x0002a78f) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002e7aa) slider_form_pane_vc_g

0x16ea,	// (0x00020400) main_idle_act3_pane

0xd42d,	// (0x0002c143) ai3_links_pane

0xd436,	// (0x0002c14c) popup_ai3_data_window_ParamLimits

0xd436,	// (0x0002c14c) popup_ai3_data_window

0x16ea,	// (0x00020400) grid_ai3_links_pane

0xd44e,	// (0x0002c164) cell_ai3_links_pane_ParamLimits

0xd44e,	// (0x0002c164) cell_ai3_links_pane

0xd466,	// (0x0002c17c) bg_popup_sub_pane_cp11

0xd473,	// (0x0002c189) cell_ai3_links_pane_g1

0x16ea,	// (0x00020400) bg_popup_sub_pane_cp12

0xd498,	// (0x0002c1ae) heading_ai3_data_pane

0xd4a0,	// (0x0002c1b6) list_ai3_gene_pane

0xd4ac,	// (0x0002c1c2) popup_ai3_data_window_g1

0xd4b4,	// (0x0002c1ca) heading_ai3_data_pane_g1

0xd4bc,	// (0x0002c1d2) heading_ai3_data_pane_t1

0xd4ca,	// (0x0002c1e0) list_double_ai3_gene_pane_ParamLimits

0xd4ca,	// (0x0002c1e0) list_double_ai3_gene_pane

0xd4d7,	// (0x0002c1ed) list_single_ai3_gene_pane_ParamLimits

0xd4d7,	// (0x0002c1ed) list_single_ai3_gene_pane

0xc2a3,	// (0x0002afb9) list_highlight_pane_cp7_ParamLimits

0xc2a3,	// (0x0002afb9) list_highlight_pane_cp7

0xd4e4,	// (0x0002c1fa) list_single_a13_gene_pane_t1_ParamLimits

0xd4e4,	// (0x0002c1fa) list_single_a13_gene_pane_t1

0xd4fb,	// (0x0002c211) list_single_ai3_gene_pane_g1

0xd504,	// (0x0002c21a) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002e9e5) list_single_ai3_gene_pane_g

0xd50c,	// (0x0002c222) list_double_ai3_gene_pane_g1_ParamLimits

0xd50c,	// (0x0002c222) list_double_ai3_gene_pane_g1

0xd518,	// (0x0002c22e) list_double_ai3_gene_pane_t1_ParamLimits

0xd518,	// (0x0002c22e) list_double_ai3_gene_pane_t1

0xd534,	// (0x0002c24a) list_double_ai3_gene_pane_t2_ParamLimits

0xd534,	// (0x0002c24a) list_double_ai3_gene_pane_t2

0xd549,	// (0x0002c25f) list_double_ai3_gene_pane_t3_ParamLimits

0xd549,	// (0x0002c25f) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002e9ea) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002e9ea) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x62f8,	// (0x0002500e) aid_size_min_col_2

0xd3f7,	// (0x0002c10d) aid_size_min_msg_ParamLimits

0xd3f7,	// (0x0002c10d) aid_size_min_msg

0xc6a2,	// (0x0002b3b8) fep_vkb_top_text_pane_g2_ParamLimits

0xc6a2,	// (0x0002b3b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002e85d) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002e85d) fep_vkb_top_text_pane_g

0x16ea,	// (0x00020400) main_hc_apps_shell_pane

0xd566,	// (0x0002c27c) grid_hc_apps_pane_ParamLimits

0xd566,	// (0x0002c27c) grid_hc_apps_pane

0xd575,	// (0x0002c28b) list_hc_apps_pane

0xd57d,	// (0x0002c293) scroll_pane_cp37_ParamLimits

0xd57d,	// (0x0002c293) scroll_pane_cp37

0xd589,	// (0x0002c29f) cell_hc_apps_pane_ParamLimits

0xd589,	// (0x0002c29f) cell_hc_apps_pane

0xd637,	// (0x0002c34d) cell_hc_apps_pane_g1_ParamLimits

0xd637,	// (0x0002c34d) cell_hc_apps_pane_g1

0xd668,	// (0x0002c37e) cell_hc_apps_pane_g2_ParamLimits

0xd668,	// (0x0002c37e) cell_hc_apps_pane_g2

0xd684,	// (0x0002c39a) cell_hc_apps_pane_g3_ParamLimits

0xd684,	// (0x0002c39a) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002e9f1) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002e9f1) cell_hc_apps_pane_g

0xd6a6,	// (0x0002c3bc) cell_hc_apps_pane_t1_ParamLimits

0xd6a6,	// (0x0002c3bc) cell_hc_apps_pane_t1

0x189e,	// (0x000205b4) grid_highlight_pane_cp10_ParamLimits

0x189e,	// (0x000205b4) grid_highlight_pane_cp10

0xd6e6,	// (0x0002c3fc) list_single_hc_apps_pane_ParamLimits

0xd6e6,	// (0x0002c3fc) list_single_hc_apps_pane

0xd749,	// (0x0002c45f) list_single_hc_apps_pane_g1

0x63e0,	// (0x000250f6) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002e9f8) list_single_hc_apps_pane_g

0x63f9,	// (0x0002510f) list_single_hc_apps_pane_g2_copy1

0x6415,	// (0x0002512b) list_single_hc_apps_pane_t1

0x175a,	// (0x00020470) bg_set_opt_pane_cp_ParamLimits

0x692a,	// (0x00025640) setting_slider_pane_t1_ParamLimits

0x6943,	// (0x00025659) setting_slider_pane_t2_ParamLimits

0x695d,	// (0x00025673) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e274) setting_slider_pane_t_ParamLimits

0x6975,	// (0x0002568b) slider_set_pane_ParamLimits

0x7d2b,	// (0x00026a41) control_pane_g5_ParamLimits

0x7d2b,	// (0x00026a41) control_pane_g5

0xb07a,	// (0x00029d90) slider_set_pane_g1_ParamLimits

0x8a88,	// (0x0002779e) slider_set_pane_g2_ParamLimits

0x8a94,	// (0x000277aa) slider_set_pane_g3_ParamLimits

0x8aa8,	// (0x000277be) slider_set_pane_g4_ParamLimits

0x8ac0,	// (0x000277d6) slider_set_pane_g5_ParamLimits

0x8a94,	// (0x000277aa) slider_set_pane_g6_ParamLimits

0x8ad6,	// (0x000277ec) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0002e66b) slider_set_pane_g_ParamLimits

0x77cf,	// (0x000264e5) navi_icon_text_pane_ParamLimits

0x8487,	// (0x0002719d) aid_fill_nsta_2_ParamLimits

0x84c6,	// (0x000271dc) aid_touch_tab_arrow_left_ParamLimits

0x84d5,	// (0x000271eb) aid_touch_tab_arrow_right_ParamLimits

0x8542,	// (0x00027258) clock_nsta_pane_ParamLimits

0xab7d,	// (0x00029893) navi_icon_pane_g1_ParamLimits

0xab89,	// (0x0002989f) navi_text_pane_t1_ParamLimits

0xbe89,	// (0x0002ab9f) navi_icon_text_pane_g1_ParamLimits

0xbe95,	// (0x0002abab) navi_icon_text_pane_t1_ParamLimits

0xd749,	// (0x0002c45f) list_single_hc_apps_pane_g1_ParamLimits

0x63e0,	// (0x000250f6) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002e9f8) list_single_hc_apps_pane_g_ParamLimits

0x63f9,	// (0x0002510f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6415,	// (0x0002512b) list_single_hc_apps_pane_t1_ParamLimits

0x676e,	// (0x00025484) popup_toolbar2_fixed_window_ParamLimits

0x676e,	// (0x00025484) popup_toolbar2_fixed_window

0x839d,	// (0x000270b3) popup_toolbar2_float_window

0x16ea,	// (0x00020400) bg_popup_sub_pane_cp27

0xd762,	// (0x0002c478) grid_toolbar2_float_pane

0x16ea,	// (0x00020400) bg_popup_sub_pane_cp26

0xd762,	// (0x0002c478) grid_toolbar2_fixed_pane

0xd76a,	// (0x0002c480) cell_toolbar2_fixed_pane_ParamLimits

0xd76a,	// (0x0002c480) cell_toolbar2_fixed_pane

0xd77a,	// (0x0002c490) cell_toolbar2_fixed_pane_g1

0x9c97,	// (0x000289ad) toolbar2_fixed_button_pane

0x9d17,	// (0x00028a2d) toolbar2_fixed_button_pane_g1

0x9d1f,	// (0x00028a35) toolbar2_fixed_button_pane_g2

0x9d27,	// (0x00028a3d) toolbar2_fixed_button_pane_g3

0x9d2f,	// (0x00028a45) toolbar2_fixed_button_pane_g4

0x9d37,	// (0x00028a4d) toolbar2_fixed_button_pane_g5

0x9d3f,	// (0x00028a55) toolbar2_fixed_button_pane_g6

0x9d47,	// (0x00028a5d) toolbar2_fixed_button_pane_g7

0x9d4f,	// (0x00028a65) toolbar2_fixed_button_pane_g8

0x9d57,	// (0x00028a6d) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0002e56d) toolbar2_fixed_button_pane_g

0xd783,	// (0x0002c499) cell_toolbar2_float_pane_ParamLimits

0xd783,	// (0x0002c499) cell_toolbar2_float_pane

0xd794,	// (0x0002c4aa) cell_toolbar2_float_pane_g1

0x9c97,	// (0x000289ad) toolbar2_fixed_button_pane_cp

0xc40c,	// (0x0002b122) fep_vkb_accented_list_pane_ParamLimits

0xc40c,	// (0x0002b122) fep_vkb_accented_list_pane

0x8e78,	// (0x00027b8e) bg_popup_fep_shadow_pane_g9

0x794f,	// (0x00026665) bg_popup_fep_shadow_pane_cp3

0x1cf8,	// (0x00020a0e) list_accented_list_pane

0xd79d,	// (0x0002c4b3) list_single_accented_list_pane_ParamLimits

0xd79d,	// (0x0002c4b3) list_single_accented_list_pane

0x794f,	// (0x00026665) list_highlight_pane_cp10

0xd7ae,	// (0x0002c4c4) list_single_accented_list_pane_t1

0x82ed,	// (0x00027003) popup_slider_window_ParamLimits

0x82ed,	// (0x00027003) popup_slider_window

0xd3ee,	// (0x0002c104) aid_indentation_list_msg

0xd864,	// (0x0002c57a) bg_popup_window_pane_cp19

0xd8ce,	// (0x0002c5e4) popup_slider_window_g1

0xd8ea,	// (0x0002c600) popup_slider_window_g2

0xd906,	// (0x0002c61c) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002e9fd) popup_slider_window_g

0xd962,	// (0x0002c678) popup_slider_window_t1

0xd9d6,	// (0x0002c6ec) small_volume_slider_vertical_pane

0xc2de,	// (0x0002aff4) small_volume_slider_vertical_pane_g1

0xc2de,	// (0x0002aff4) small_volume_slider_vertical_pane_g2

0xd9f2,	// (0x0002c708) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002ea0f) small_volume_slider_vertical_pane_g

0x653e,	// (0x00025254) area_side_right_pane_ParamLimits

0x653e,	// (0x00025254) area_side_right_pane

0x8fcf,	// (0x00027ce5) aid_size_side_button_ParamLimits

0x8fcf,	// (0x00027ce5) aid_size_side_button

0x8fe3,	// (0x00027cf9) grid_sctrl_middle_pane_ParamLimits

0x8fe3,	// (0x00027cf9) grid_sctrl_middle_pane

0x9002,	// (0x00027d18) sctrl_sk_bottom_pane

0x9013,	// (0x00027d29) sctrl_sk_top_pane

0x9025,	// (0x00027d3b) aid_touch_sctrl_top

0x189e,	// (0x000205b4) bg_sctrl_sk_pane_ParamLimits

0x189e,	// (0x000205b4) bg_sctrl_sk_pane

0x9032,	// (0x00027d48) sctrl_sk_top_pane_g1

0x903f,	// (0x00027d55) sctrl_sk_top_pane_t1

0x9025,	// (0x00027d3b) aid_touch_sctrl_bottom

0x189e,	// (0x000205b4) bg_sctrl_sk_pane_cp_ParamLimits

0x189e,	// (0x000205b4) bg_sctrl_sk_pane_cp

0x905a,	// (0x00027d70) sctrl_sk_bottom_pane_g1

0x903f,	// (0x00027d55) sctrl_sk_bottom_pane_t1

0x9063,	// (0x00027d79) cell_sctrl_middle_pane_ParamLimits

0x9063,	// (0x00027d79) cell_sctrl_middle_pane

0x907e,	// (0x00027d94) aid_touch_sctrl_middle_ParamLimits

0x907e,	// (0x00027d94) aid_touch_sctrl_middle

0x1b84,	// (0x0002089a) bg_sctrl_middle_pane_ParamLimits

0x1b84,	// (0x0002089a) bg_sctrl_middle_pane

0xc54e,	// (0x0002b264) cell_sctrl_middle_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) cell_sctrl_middle_pane_g1

0x9090,	// (0x00027da6) cell_sctrl_middle_pane_g2_ParamLimits

0x9090,	// (0x00027da6) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002ea1b) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002ea1b) cell_sctrl_middle_pane_g

0x9d17,	// (0x00028a2d) bg_sctrl_middle_pane_g1

0x9d1f,	// (0x00028a35) bg_sctrl_middle_pane_g2

0x9d27,	// (0x00028a3d) bg_sctrl_middle_pane_g3

0x9d2f,	// (0x00028a45) bg_sctrl_middle_pane_g4

0x9d37,	// (0x00028a4d) bg_sctrl_middle_pane_g5

0x9d3f,	// (0x00028a55) bg_sctrl_middle_pane_g6

0x9d47,	// (0x00028a5d) bg_sctrl_middle_pane_g7

0x9d4f,	// (0x00028a65) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002ea20) bg_sctrl_middle_pane_g

0x9d57,	// (0x00028a6d) bg_sctrl_middle_pane_g8_copy1

0x9d17,	// (0x00028a2d) bg_sctrl_sk_pane_g1

0x9d1f,	// (0x00028a35) bg_sctrl_sk_pane_g2

0x9d27,	// (0x00028a3d) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0002e56d) bg_sctrl_sk_pane_g

0x1a68,	// (0x0002077e) aid_size_touch_scroll_bar

0x9d2f,	// (0x00028a45) bg_sctrl_sk_pane_g4

0x9d37,	// (0x00028a4d) bg_sctrl_sk_pane_g5

0x9d3f,	// (0x00028a55) bg_sctrl_sk_pane_g6

0x9d47,	// (0x00028a5d) bg_sctrl_sk_pane_g7

0x9d4f,	// (0x00028a65) bg_sctrl_sk_pane_g8

0x9d57,	// (0x00028a6d) bg_sctrl_sk_pane_g9

0x7f56,	// (0x00026c6c) popup_fep_china_hwr2_fs_candidate_window

0x7f60,	// (0x00026c76) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7f60,	// (0x00026c76) popup_fep_china_hwr2_fs_control_window

0xc54e,	// (0x0002b264) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002ea16) sctrl_sk_top_pane_g

0xd9fb,	// (0x0002c711) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9fb,	// (0x0002c711) aid_fep_china_hwr2_fs_cell

0xda0d,	// (0x0002c723) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda0d,	// (0x0002c723) bg_popup_fep_shadow_pane_cp4

0xda24,	// (0x0002c73a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda24,	// (0x0002c73a) bg_popup_fep_shadow_pane_cp5

0xda36,	// (0x0002c74c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda36,	// (0x0002c74c) popup_fep_china_hwr2_fs_control_bar_grid

0xda46,	// (0x0002c75c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda4e,	// (0x0002c764) aid_fep_china_hwr2_fs_candi_cell

0x16ea,	// (0x00020400) bg_popup_fep_shadow_pane_cp6

0xda58,	// (0x0002c76e) popup_fep_china_hwr2_fs_candidate_grid

0xda62,	// (0x0002c778) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda62,	// (0x0002c778) cell_fep_china_hwr2_fs_funtion_grid

0xc2de,	// (0x0002aff4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda7a,	// (0x0002c790) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda7a,	// (0x0002c790) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda88,	// (0x0002c79e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda88,	// (0x0002c79e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002ea31) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002ea31) cell_fep_china_hwr2_fs_funtion_grid_g

0xda9e,	// (0x0002c7b4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda9e,	// (0x0002c7b4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdab3,	// (0x0002c7c9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdab3,	// (0x0002c7c9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002ea36) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002ea36) cell_fep_china_hwr2_fs_funtion_grid_t

0xdacf,	// (0x0002c7e5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad7,	// (0x0002c7ed) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdadf,	// (0x0002c7f5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002ea3b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae7,	// (0x0002c7fd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae7,	// (0x0002c7fd) cell_fep_china_hwr2_fs_candidate_grid

0xdb00,	// (0x0002c816) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb08,	// (0x0002c81e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2de,	// (0x0002aff4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2de,	// (0x0002aff4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002e862) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb10,	// (0x0002c826) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8555,	// (0x0002726b) clock_nsta_pane_cp_24_ParamLimits

0x8555,	// (0x0002726b) clock_nsta_pane_cp_24

0x85d3,	// (0x000272e9) indicator_nsta_pane_cp_24_ParamLimits

0x85d3,	// (0x000272e9) indicator_nsta_pane_cp_24

0xa9f9,	// (0x0002970f) heading_pane_g1

0x0001,

0xf8bc,	// (0x0002e5d2) heading_pane_g

0xb42f,	// (0x0002a145) grid_sct_catagory_button_pane

0xb45f,	// (0x0002a175) scroll_pane_cp5_ParamLimits

0xbed7,	// (0x0002abed) button_value_adjust_pane_cp5_ParamLimits

0xbed7,	// (0x0002abed) button_value_adjust_pane_cp5

0xbfb6,	// (0x0002accc) form2_midp_time_pane_ParamLimits

0xdb1e,	// (0x0002c834) cell_sct_catagory_button_pane_ParamLimits

0xdb1e,	// (0x0002c834) cell_sct_catagory_button_pane

0xc2a3,	// (0x0002afb9) bg_button_pane_cp01_ParamLimits

0xc2a3,	// (0x0002afb9) bg_button_pane_cp01

0xc2de,	// (0x0002aff4) cell_sct_catagory_button_pane_g1

0x832c,	// (0x00027042) popup_tb_extension_window

0xdb30,	// (0x0002c846) aid_size_cell_ext_ParamLimits

0xdb30,	// (0x0002c846) aid_size_cell_ext

0x189e,	// (0x000205b4) bg_tb_trans_pane_cp1_ParamLimits

0x189e,	// (0x000205b4) bg_tb_trans_pane_cp1

0xdb50,	// (0x0002c866) grid_tb_ext_pane_ParamLimits

0xdb50,	// (0x0002c866) grid_tb_ext_pane

0xdb80,	// (0x0002c896) cell_tb_ext_pane_ParamLimits

0xdb80,	// (0x0002c896) cell_tb_ext_pane

0xdb97,	// (0x0002c8ad) cell_tb_ext_pane_g1_ParamLimits

0xdb97,	// (0x0002c8ad) cell_tb_ext_pane_g1

0xdbb4,	// (0x0002c8ca) cell_tb_ext_pane_t1

0x189e,	// (0x000205b4) list_highlight_pane_cp11_ParamLimits

0x189e,	// (0x000205b4) list_highlight_pane_cp11

0x678d,	// (0x000254a3) popup_uni_indicator_window_ParamLimits

0x678d,	// (0x000254a3) popup_uni_indicator_window

0x1b84,	// (0x0002089a) bg_popup_sub_pane_cp14

0xdbd0,	// (0x0002c8e6) list_uniindi_pane

0xdbdc,	// (0x0002c8f2) uniindi_top_pane

0x189e,	// (0x000205b4) bg_uniindi_top_pane

0xdbfb,	// (0x0002c911) uniindi_top_pane_g1

0xdc11,	// (0x0002c927) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002ea42) uniindi_top_pane_g

0xdc3b,	// (0x0002c951) uniindi_top_pane_t1

0xdc65,	// (0x0002c97b) list_single_uniindi_pane_ParamLimits

0xdc65,	// (0x0002c97b) list_single_uniindi_pane

0xc2de,	// (0x0002aff4) bg_uniindi_top_pane_g1

0xdc77,	// (0x0002c98d) list_single_uniindi_pane_g1

0xdc8a,	// (0x0002c9a0) list_single_uniindi_pane_t1

0x16ea,	// (0x00020400) control_bg_pane

0xdcaf,	// (0x0002c9c5) bg_sctrl_sk_pane_cp1

0xdcb8,	// (0x0002c9ce) bg_sctrl_sk_pane_cp2

0xdcc1,	// (0x0002c9d7) control_bg_pane_g1

0xdcca,	// (0x0002c9e0) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002ea4b) control_bg_pane_g

0xbd2e,	// (0x0002aa44) cell_indicator_nsta_pane_g1_ParamLimits

0xbd3c,	// (0x0002aa52) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002e7c6) cell_indicator_nsta_pane_g_ParamLimits

0x60be,	// (0x00024dd4) form2_midp_time_pane_t1_ParamLimits

0x1a1a,	// (0x00020730) main_idle_act4_pane_ParamLimits

0x1a1a,	// (0x00020730) main_idle_act4_pane

0x832c,	// (0x00027042) popup_tb_extension_window_ParamLimits

0xdb70,	// (0x0002c886) tb_ext_find_pane_ParamLimits

0xdb70,	// (0x0002c886) tb_ext_find_pane

0xdcd3,	// (0x0002c9e9) ai_gene_pane_1_cp1

0x7a9a,	// (0x000267b0) ai_gene_pane_2_cp1

0xdcdb,	// (0x0002c9f1) list_single_idle_plugin_calendar_pane

0xdce4,	// (0x0002c9fa) list_single_idle_plugin_notification_pane

0xdced,	// (0x0002ca03) list_single_idle_plugin_player_pane

0xdcf6,	// (0x0002ca0c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf6,	// (0x0002ca0c) list_single_idle_plugin_shortcut_pane

0xdd18,	// (0x0002ca2e) main_idle_act4_pane_t1

0xdd2a,	// (0x0002ca40) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002ea50) main_idle_act4_pane_t

0xdd3c,	// (0x0002ca52) middle_sk_idle_act4_pane_ParamLimits

0xdd3c,	// (0x0002ca52) middle_sk_idle_act4_pane

0xdd52,	// (0x0002ca68) popup_clock_digital_analogue_window_cp2

0xdd6c,	// (0x0002ca82) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd6c,	// (0x0002ca82) shortcut_wheel_idle_act4_pane

0xc2de,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g1

0xc2de,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g2

0xc2de,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g3

0xc2de,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g4

0xc2de,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g5

0xdd80,	// (0x0002ca96) shortcut_wheel_idle_act4_pane_g6

0xdd88,	// (0x0002ca9e) shortcut_wheel_idle_act4_pane_g7

0xdd90,	// (0x0002caa6) shortcut_wheel_idle_act4_pane_g8

0xdd98,	// (0x0002caae) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002ea55) shortcut_wheel_idle_act4_pane_g

0xc54e,	// (0x0002b264) middle_sk_idle_act4_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) middle_sk_idle_act4_pane_g1

0xddfc,	// (0x0002cb12) middle_sk_idle_act4_pane_g2_ParamLimits

0xddfc,	// (0x0002cb12) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002ea78) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002ea78) middle_sk_idle_act4_pane_g

0xde08,	// (0x0002cb1e) middle_sk_idle_act4_pane_t1_ParamLimits

0xde08,	// (0x0002cb1e) middle_sk_idle_act4_pane_t1

0xde25,	// (0x0002cb3b) grid_ai_shortcut_pane_ParamLimits

0xde25,	// (0x0002cb3b) grid_ai_shortcut_pane

0xde3e,	// (0x0002cb54) list_highlight_pane_cp16_ParamLimits

0xde3e,	// (0x0002cb54) list_highlight_pane_cp16

0xde4b,	// (0x0002cb61) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde4b,	// (0x0002cb61) list_single_idle_plugin_shortcut_pane_g1

0xde57,	// (0x0002cb6d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde57,	// (0x0002cb6d) list_single_idle_plugin_shortcut_pane_g2

0xde6f,	// (0x0002cb85) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde6f,	// (0x0002cb85) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002ea7d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002ea7d) list_single_idle_plugin_shortcut_pane_g

0xde82,	// (0x0002cb98) cell_ai_shortcut_pane_ParamLimits

0xde82,	// (0x0002cb98) cell_ai_shortcut_pane

0xdea6,	// (0x0002cbbc) cell_ai_shortcut_pane_g1_ParamLimits

0xdea6,	// (0x0002cbbc) cell_ai_shortcut_pane_g1

0xdcd3,	// (0x0002c9e9) ai_gene_pane_1_cp2

0xdec8,	// (0x0002cbde) ai_gene_pane_2_cp2

0xded0,	// (0x0002cbe6) list_highlight_pane_cp15

0xded9,	// (0x0002cbef) list_single_idle_plugin_calendar_pane_g1

0xded0,	// (0x0002cbe6) list_highlight_pane_cp17

0xdee1,	// (0x0002cbf7) list_single_idle_plugin_calendar_pane_g1_copy1

0xdee9,	// (0x0002cbff) list_single_idle_plugin_player_pane_g1

0xb688,	// (0x0002a39e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002ea84) list_single_idle_plugin_player_pane_g

0xdef1,	// (0x0002cc07) list_single_idle_plugin_player_pane_t1

0xdeff,	// (0x0002cc15) list_single_idle_plugin_player_pane_t2

0xdf0d,	// (0x0002cc23) list_single_idle_plugin_player_pane_t3

0xdf1b,	// (0x0002cc31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002ea89) list_single_idle_plugin_player_pane_t

0xdf29,	// (0x0002cc3f) wait_bar_pane_cp15

0xdf31,	// (0x0002cc47) grid_ai_notification_pane

0xb688,	// (0x0002a39e) list_single_idle_plugin_notification_pane_g1

0xdf3a,	// (0x0002cc50) cell_ai_notification_pane_ParamLimits

0xdf3a,	// (0x0002cc50) cell_ai_notification_pane

0xdf47,	// (0x0002cc5d) cell_ai_notification_pane_g1

0xdf4f,	// (0x0002cc65) cell_ai_notification_pane_t1

0xdf5d,	// (0x0002cc73) tb_ext_find_button_pane

0xdf65,	// (0x0002cc7b) tb_ext_find_pane_g1

0xdf6d,	// (0x0002cc83) tb_ext_find_pane_t1

0x3a3b,	// (0x00022751) tb_ext_find_button_pane_g1

0xdf7b,	// (0x0002cc91) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002ea92) tb_ext_find_button_pane_g

0xdd18,	// (0x0002ca2e) main_idle_act4_pane_t1_ParamLimits

0xdd2a,	// (0x0002ca40) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002ea50) main_idle_act4_pane_t_ParamLimits

0xdd52,	// (0x0002ca68) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd60,	// (0x0002ca76) sat_plugin_idle_act4_pane_ParamLimits

0xdd60,	// (0x0002ca76) sat_plugin_idle_act4_pane

0xdf84,	// (0x0002cc9a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf84,	// (0x0002cc9a) sat_plugin_idle_act4_pane_t1

0xdf97,	// (0x0002ccad) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf97,	// (0x0002ccad) sat_plugin_idle_act4_pane_t2

0xdfaa,	// (0x0002ccc0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfaa,	// (0x0002ccc0) sat_plugin_idle_act4_pane_t3

0xdfbd,	// (0x0002ccd3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfbd,	// (0x0002ccd3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002ea97) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002ea97) sat_plugin_idle_act4_pane_t

0x66d6,	// (0x000253ec) popup_battery_window_ParamLimits

0x66d6,	// (0x000253ec) popup_battery_window

0x189e,	// (0x000205b4) bg_popup_sub_pane_cp25_ParamLimits

0x189e,	// (0x000205b4) bg_popup_sub_pane_cp25

0xdfd0,	// (0x0002cce6) popup_battery_window_g1_ParamLimits

0xdfd0,	// (0x0002cce6) popup_battery_window_g1

0xdfdc,	// (0x0002ccf2) popup_battery_window_t1_ParamLimits

0xdfdc,	// (0x0002ccf2) popup_battery_window_t1

0xdfee,	// (0x0002cd04) popup_battery_window_t2_ParamLimits

0xdfee,	// (0x0002cd04) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002eaa0) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002eaa0) popup_battery_window_t

0x7963,	// (0x00026679) midp_canvas_pane_ParamLimits

0x79dc,	// (0x000266f2) midp_keypad_pane_ParamLimits

0x79dc,	// (0x000266f2) midp_keypad_pane

0x7eb4,	// (0x00026bca) main_midp_pane_ParamLimits

0xbd97,	// (0x0002aaad) signal_pane_g2_cp_ParamLimits

0xe00b,	// (0x0002cd21) aid_size_cell_midp_keypad_ParamLimits

0xe00b,	// (0x0002cd21) aid_size_cell_midp_keypad

0xe025,	// (0x0002cd3b) midp_keyp_game_grid_pane_ParamLimits

0xe025,	// (0x0002cd3b) midp_keyp_game_grid_pane

0xe045,	// (0x0002cd5b) midp_keyp_rocker_pane_ParamLimits

0xe045,	// (0x0002cd5b) midp_keyp_rocker_pane

0xe07e,	// (0x0002cd94) midp_keyp_sk_left_pane_ParamLimits

0xe07e,	// (0x0002cd94) midp_keyp_sk_left_pane

0xe0d8,	// (0x0002cdee) midp_keyp_sk_right_pane_ParamLimits

0xe0d8,	// (0x0002cdee) midp_keyp_sk_right_pane

0x16ea,	// (0x00020400) bg_button_pane_cp03

0xe132,	// (0x0002ce48) midp_keyp_sk_left_pane_g1

0x16ea,	// (0x00020400) bg_button_pane_cp04

0xe132,	// (0x0002ce48) midp_keyp_sk_right_pane_g1

0xc2de,	// (0x0002aff4) midp_keyp_rocker_pane_g1

0xe13b,	// (0x0002ce51) keyp_game_cell_pane_ParamLimits

0xe13b,	// (0x0002ce51) keyp_game_cell_pane

0x16ea,	// (0x00020400) bg_button_pane_cp02

0xe14e,	// (0x0002ce64) keyp_game_cell_pane_g1

0x670c,	// (0x00025422) popup_fep_vkb2_window_ParamLimits

0x670c,	// (0x00025422) popup_fep_vkb2_window

0x90ae,	// (0x00027dc4) aid_size_cell_vkb2_ParamLimits

0x90ae,	// (0x00027dc4) aid_size_cell_vkb2

0x9102,	// (0x00027e18) popup_fep_vkb2_window_g1_ParamLimits

0x9102,	// (0x00027e18) popup_fep_vkb2_window_g1

0x914a,	// (0x00027e60) vkb2_area_bottom_pane_ParamLimits

0x914a,	// (0x00027e60) vkb2_area_bottom_pane

0x9196,	// (0x00027eac) vkb2_area_keypad_pane_ParamLimits

0x9196,	// (0x00027eac) vkb2_area_keypad_pane

0x91d8,	// (0x00027eee) vkb2_area_top_pane_ParamLimits

0x91d8,	// (0x00027eee) vkb2_area_top_pane

0x9252,	// (0x00027f68) vkb2_top_entry_pane_ParamLimits

0x9252,	// (0x00027f68) vkb2_top_entry_pane

0x927c,	// (0x00027f92) vkb2_top_grid_left_pane_ParamLimits

0x927c,	// (0x00027f92) vkb2_top_grid_left_pane

0x929a,	// (0x00027fb0) vkb2_top_grid_right_pane_ParamLimits

0x929a,	// (0x00027fb0) vkb2_top_grid_right_pane

0x92b8,	// (0x00027fce) vkb2_cell_keypad_pane_ParamLimits

0x92b8,	// (0x00027fce) vkb2_cell_keypad_pane

0x9389,	// (0x0002809f) vkb2_area_bottom_grid_pane_ParamLimits

0x9389,	// (0x0002809f) vkb2_area_bottom_grid_pane

0x93af,	// (0x000280c5) vkb2_area_bottom_pane_g1_ParamLimits

0x93af,	// (0x000280c5) vkb2_area_bottom_pane_g1

0x93d3,	// (0x000280e9) vkb2_area_bottom_pane_g2_ParamLimits

0x93d3,	// (0x000280e9) vkb2_area_bottom_pane_g2

0x9401,	// (0x00028117) vkb2_area_bottom_pane_g3_ParamLimits

0x9401,	// (0x00028117) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002eaa5) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002eaa5) vkb2_area_bottom_pane_g

0x9462,	// (0x00028178) vkb2_top_cell_left_pane_ParamLimits

0x9462,	// (0x00028178) vkb2_top_cell_left_pane

0xe15f,	// (0x0002ce75) vkb2_top_entry_pane_g1_ParamLimits

0xe15f,	// (0x0002ce75) vkb2_top_entry_pane_g1

0xe16d,	// (0x0002ce83) vkb2_top_entry_pane_t1_ParamLimits

0xe16d,	// (0x0002ce83) vkb2_top_entry_pane_t1

0xe19f,	// (0x0002ceb5) vkb2_top_entry_pane_t2_ParamLimits

0xe19f,	// (0x0002ceb5) vkb2_top_entry_pane_t2

0xe1d1,	// (0x0002cee7) vkb2_top_entry_pane_t3_ParamLimits

0xe1d1,	// (0x0002cee7) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002eaac) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002eaac) vkb2_top_entry_pane_t

0x94af,	// (0x000281c5) vkb2_top_grid_right_pane_g1_ParamLimits

0x94af,	// (0x000281c5) vkb2_top_grid_right_pane_g1

0x94c5,	// (0x000281db) vkb2_top_grid_right_pane_g2_ParamLimits

0x94c5,	// (0x000281db) vkb2_top_grid_right_pane_g2

0x94dd,	// (0x000281f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x94dd,	// (0x000281f3) vkb2_top_grid_right_pane_g3

0x94f5,	// (0x0002820b) vkb2_top_grid_right_pane_g4_ParamLimits

0x94f5,	// (0x0002820b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002eab3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002eab3) vkb2_top_grid_right_pane_g

0x950b,	// (0x00028221) vkb2_top_cell_left_pane_g1

0x9522,	// (0x00028238) vkb2_cell_keypad_pane_g1_ParamLimits

0x9522,	// (0x00028238) vkb2_cell_keypad_pane_g1

0xe1f5,	// (0x0002cf0b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1f5,	// (0x0002cf0b) vkb2_cell_keypad_pane_t1

0x9530,	// (0x00028246) vkb2_cell_bottom_grid_pane_ParamLimits

0x9530,	// (0x00028246) vkb2_cell_bottom_grid_pane

0x9569,	// (0x0002827f) vkb2_cell_bottom_grid_pane_g1

0xdda0,	// (0x0002cab6) aid_call2_pane_cp02

0xdda8,	// (0x0002cabe) aid_call_pane_cp02

0xddb0,	// (0x0002cac6) clock_digital_number_pane_cp10

0xddb8,	// (0x0002cace) clock_digital_number_pane_cp11

0xddc0,	// (0x0002cad6) clock_digital_number_pane_cp12

0xddc8,	// (0x0002cade) clock_digital_number_pane_cp13

0xddd0,	// (0x0002cae6) clock_digital_separator_pane_cp10

0x3a3b,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g1

0x3a3b,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g2

0xddd8,	// (0x0002caee) popup_clock_digital_analogue_window_cp2_g3

0x3a3b,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g4

0xddd8,	// (0x0002caee) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002ea68) popup_clock_digital_analogue_window_cp2_g

0xdde0,	// (0x0002caf6) popup_clock_digital_analogue_window_cp2_t1

0xddee,	// (0x0002cb04) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002ea73) popup_clock_digital_analogue_window_cp2_t

0xc2de,	// (0x0002aff4) clock_digital_number_pane_cp10_g1

0xc2de,	// (0x0002aff4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e862) clock_digital_number_pane_cp10_g

0xc2de,	// (0x0002aff4) clock_digital_separator_pane_cp10_g1

0xc2de,	// (0x0002aff4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e862) clock_digital_separator_pane_cp10_g

0xdc1d,	// (0x0002c933) uniindi_top_pane_g3

0xdc2e,	// (0x0002c944) uniindi_top_pane_g4

0x9343,	// (0x00028059) vkb2_row_keypad_pane_ParamLimits

0x9343,	// (0x00028059) vkb2_row_keypad_pane

0x9585,	// (0x0002829b) vkb2_cell_t_keypad_pane_ParamLimits

0x9585,	// (0x0002829b) vkb2_cell_t_keypad_pane

0x9595,	// (0x000282ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9595,	// (0x000282ab) vkb2_cell_t_keypad_pane_cp08

0x95a8,	// (0x000282be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x95a8,	// (0x000282be) vkb2_cell_t_keypad_pane_cp09

0x95bc,	// (0x000282d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x95bc,	// (0x000282d2) vkb2_cell_t_keypad_pane_cp01

0x95cd,	// (0x000282e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x95cd,	// (0x000282e3) vkb2_cell_t_keypad_pane_cp02

0x95de,	// (0x000282f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x95de,	// (0x000282f4) vkb2_cell_t_keypad_pane_cp03

0x95ef,	// (0x00028305) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x95ef,	// (0x00028305) vkb2_cell_t_keypad_pane_cp04

0x9600,	// (0x00028316) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9600,	// (0x00028316) vkb2_cell_t_keypad_pane_cp05

0x9611,	// (0x00028327) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9611,	// (0x00028327) vkb2_cell_t_keypad_pane_cp06

0x9622,	// (0x00028338) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9622,	// (0x00028338) vkb2_cell_t_keypad_pane_cp07

0x9633,	// (0x00028349) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9633,	// (0x00028349) vkb2_cell_t_keypad_pane_cp10

0xc54e,	// (0x0002b264) vkb2_cell_t_keypad_pane_g1

0xe20c,	// (0x0002cf22) vkb2_cell_t_keypad_pane_t1

0x16ea,	// (0x00020400) popup_grid_graphic2_window

0xe21e,	// (0x0002cf34) aid_size_cell_graphic2_ParamLimits

0xe21e,	// (0x0002cf34) aid_size_cell_graphic2

0xe256,	// (0x0002cf6c) bg_popup_window_pane_cp21_ParamLimits

0xe256,	// (0x0002cf6c) bg_popup_window_pane_cp21

0xe264,	// (0x0002cf7a) graphic2_pages_pane_ParamLimits

0xe264,	// (0x0002cf7a) graphic2_pages_pane

0xe2aa,	// (0x0002cfc0) grid_graphic2_control_pane_ParamLimits

0xe2aa,	// (0x0002cfc0) grid_graphic2_control_pane

0xe2e8,	// (0x0002cffe) grid_graphic2_pane_ParamLimits

0xe2e8,	// (0x0002cffe) grid_graphic2_pane

0xe35c,	// (0x0002d072) cell_graphic2_pane

0x16ea,	// (0x00020400) main_comp_mode_pane

0xd4a0,	// (0x0002c1b6) list_ai3_gene_pane_ParamLimits

0xd864,	// (0x0002c57a) bg_popup_window_pane_cp19_ParamLimits

0xd870,	// (0x0002c586) bg_touch_area_indi_pane_ParamLimits

0xd870,	// (0x0002c586) bg_touch_area_indi_pane

0xd886,	// (0x0002c59c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd886,	// (0x0002c59c) bg_touch_area_indi_pane_cp01

0xd89c,	// (0x0002c5b2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd89c,	// (0x0002c5b2) bg_touch_area_indi_pane_cp02

0xd8b4,	// (0x0002c5ca) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8b4,	// (0x0002c5ca) bg_touch_area_indi_pane_cp03

0xd8ce,	// (0x0002c5e4) popup_slider_window_g1_ParamLimits

0xd8ea,	// (0x0002c600) popup_slider_window_g2_ParamLimits

0xd906,	// (0x0002c61c) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002e9fd) popup_slider_window_g_ParamLimits

0xd962,	// (0x0002c678) popup_slider_window_t1_ParamLimits

0xd9d6,	// (0x0002c6ec) small_volume_slider_vertical_pane_ParamLimits

0xe35c,	// (0x0002d072) cell_graphic2_pane_ParamLimits

0xe3ab,	// (0x0002d0c1) bg_button_pane_cp10_ParamLimits

0xe3ab,	// (0x0002d0c1) bg_button_pane_cp10

0xe3be,	// (0x0002d0d4) bg_button_pane_cp11_ParamLimits

0xe3be,	// (0x0002d0d4) bg_button_pane_cp11

0xe3d1,	// (0x0002d0e7) graphic2_pages_pane_g1_ParamLimits

0xe3d1,	// (0x0002d0e7) graphic2_pages_pane_g1

0xe3ec,	// (0x0002d102) graphic2_pages_pane_g2_ParamLimits

0xe3ec,	// (0x0002d102) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002eac1) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002eac1) graphic2_pages_pane_g

0xe404,	// (0x0002d11a) graphic2_pages_pane_t1_ParamLimits

0xe404,	// (0x0002d11a) graphic2_pages_pane_t1

0xe41c,	// (0x0002d132) cell_graphic2_control_pane_ParamLimits

0xe41c,	// (0x0002d132) cell_graphic2_control_pane

0xe43a,	// (0x0002d150) cell_graphic2_pane_g1_ParamLimits

0xe43a,	// (0x0002d150) cell_graphic2_pane_g1

0xe447,	// (0x0002d15d) cell_graphic2_pane_g2_ParamLimits

0xe447,	// (0x0002d15d) cell_graphic2_pane_g2

0xe454,	// (0x0002d16a) cell_graphic2_pane_g3_ParamLimits

0xe454,	// (0x0002d16a) cell_graphic2_pane_g3

0xe461,	// (0x0002d177) cell_graphic2_pane_g4_ParamLimits

0xe461,	// (0x0002d177) cell_graphic2_pane_g4

0xe46e,	// (0x0002d184) cell_graphic2_pane_g5_ParamLimits

0xe46e,	// (0x0002d184) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002eac6) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002eac6) cell_graphic2_pane_g

0xe489,	// (0x0002d19f) cell_graphic2_pane_t1_ParamLimits

0xe489,	// (0x0002d19f) cell_graphic2_pane_t1

0x9d8b,	// (0x00028aa1) grid_highlight_pane_cp11_ParamLimits

0x9d8b,	// (0x00028aa1) grid_highlight_pane_cp11

0x189e,	// (0x000205b4) bg_button_pane_cp05

0xe4c0,	// (0x0002d1d6) cell_graphic2_control_pane_g1

0xc2de,	// (0x0002aff4) bg_touch_area_indi_pane_g1

0xe4e8,	// (0x0002d1fe) aid_cmod_rocker_key_size

0xe4f2,	// (0x0002d208) aid_cmode_itu_key_size

0xe4fc,	// (0x0002d212) main_cmode_video_pane

0xe506,	// (0x0002d21c) main_comp_mode_itu_pane

0xe512,	// (0x0002d228) main_comp_mode_rocker_pane

0xe51e,	// (0x0002d234) cell_cmode_rocker_pane_ParamLimits

0xe51e,	// (0x0002d234) cell_cmode_rocker_pane

0xe530,	// (0x0002d246) cell_cmode_itu_pane_ParamLimits

0xe530,	// (0x0002d246) cell_cmode_itu_pane

0x1b84,	// (0x0002089a) bg_button_pane_cp06_ParamLimits

0x1b84,	// (0x0002089a) bg_button_pane_cp06

0xc54e,	// (0x0002b264) cell_cmode_rocker_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) cell_cmode_rocker_pane_g1

0xda7a,	// (0x0002c790) cell_cmode_rocker_pane_g2_ParamLimits

0xda7a,	// (0x0002c790) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002ead6) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002ead6) cell_cmode_rocker_pane_g

0x16ea,	// (0x00020400) bg_button_pane_cp07

0xe545,	// (0x0002d25b) cell_cmode_itu_pane_g1

0xe54e,	// (0x0002d264) cell_cmode_itu_pane_t1

0xe55c,	// (0x0002d272) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002eadb) cell_cmode_itu_pane_t

0xdc9f,	// (0x0002c9b5) aid_touch_ctrl_left

0xdca7,	// (0x0002c9bd) aid_touch_ctrl_right

0x16ea,	// (0x00020400) compa_mode_pane

0xe56a,	// (0x0002d280) aid_cmod_rocker_key_size_cp

0xe574,	// (0x0002d28a) aid_cmode_itu_key_size_cp

0xe57e,	// (0x0002d294) compa_mode_pane_g1

0xe586,	// (0x0002d29c) compa_mode_pane_g2

0xe58e,	// (0x0002d2a4) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002eae0) compa_mode_pane_g

0xe596,	// (0x0002d2ac) main_comp_mode_itu_pane_cp

0xe59e,	// (0x0002d2b4) main_comp_mode_rocker_pane_cp

0xe5a6,	// (0x0002d2bc) cell_cmode_itu_pane_cp_ParamLimits

0xe5a6,	// (0x0002d2bc) cell_cmode_itu_pane_cp

0xe5bb,	// (0x0002d2d1) cell_cmode_rocker_pane_cp_ParamLimits

0xe5bb,	// (0x0002d2d1) cell_cmode_rocker_pane_cp

0x1b84,	// (0x0002089a) bg_button_pane_cp06_cp_ParamLimits

0x1b84,	// (0x0002089a) bg_button_pane_cp06_cp

0xc54e,	// (0x0002b264) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc54e,	// (0x0002b264) cell_cmode_rocker_pane_g1_cp

0xc2de,	// (0x0002aff4) cell_cmode_rocker_pane_g2_cp

0x16ea,	// (0x00020400) bg_button_pane_cp07_cp

0xe5cd,	// (0x0002d2e3) cell_cmode_itu_pane_g1_cp

0xe5d6,	// (0x0002d2ec) cell_cmode_itu_pane_t1_cp

0xe5d6,	// (0x0002d2ec) cell_cmode_itu_pane_t2_cp

0xb214,	// (0x00029f2a) settings_code_pane_cp2

0x175a,	// (0x00020470) bg_popup_window_pane_cp3_ParamLimits

0x19b7,	// (0x000206cd) heading_pane_cp3_ParamLimits

0x19c3,	// (0x000206d9) listscroll_popup_graphic_pane_ParamLimits

0x8c5c,	// (0x00027972) fep_hwr_aid_pane_ParamLimits

0x9025,	// (0x00027d3b) aid_touch_sctrl_top_ParamLimits

0x9032,	// (0x00027d48) sctrl_sk_top_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002ea16) sctrl_sk_top_pane_g_ParamLimits

0x903f,	// (0x00027d55) sctrl_sk_top_pane_t1_ParamLimits

0x9025,	// (0x00027d3b) aid_touch_sctrl_bottom_ParamLimits

0x903f,	// (0x00027d55) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe9,	// (0x0002c8ff) aid_area_touch_clock

0x921a,	// (0x00027f30) aid_vkb2_area_top_pane_cell_ParamLimits

0x921a,	// (0x00027f30) aid_vkb2_area_top_pane_cell

0x9365,	// (0x0002807b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9365,	// (0x0002807b) aid_vkb2_area_bottom_pane_cell

0xe157,	// (0x0002ce6d) popup_char_count_window

0xe5e4,	// (0x0002d2fa) popup_char_count_window_g1

0xe5ed,	// (0x0002d303) popup_char_count_window_g2

0xe5f6,	// (0x0002d30c) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002eae7) popup_char_count_window_g

0xe5ff,	// (0x0002d315) popup_char_count_window_t1

0x90e0,	// (0x00027df6) popup_fep_char_preview_window_ParamLimits

0x90e0,	// (0x00027df6) popup_fep_char_preview_window

0x9238,	// (0x00027f4e) vkb2_top_candi_pane_ParamLimits

0x9238,	// (0x00027f4e) vkb2_top_candi_pane

0xe60d,	// (0x0002d323) cell_vkb2_top_candi_pane_ParamLimits

0xe60d,	// (0x0002d323) cell_vkb2_top_candi_pane

0xa391,	// (0x000290a7) bg_popup_fep_char_preview_window_ParamLimits

0xa391,	// (0x000290a7) bg_popup_fep_char_preview_window

0x9648,	// (0x0002835e) popup_fep_char_preview_window_t1_ParamLimits

0x9648,	// (0x0002835e) popup_fep_char_preview_window_t1

0xe65a,	// (0x0002d370) bg_popup_fep_char_preview_window_g1

0xe662,	// (0x0002d378) bg_popup_fep_char_preview_window_g2

0xe66a,	// (0x0002d380) bg_popup_fep_char_preview_window_g3

0xe672,	// (0x0002d388) bg_popup_fep_char_preview_window_g4

0xe67a,	// (0x0002d390) bg_popup_fep_char_preview_window_g5

0x9682,	// (0x00028398) bg_popup_fep_char_preview_window_g6

0xe682,	// (0x0002d398) bg_popup_fep_char_preview_window_g7

0xe68a,	// (0x0002d3a0) bg_popup_fep_char_preview_window_g8

0xe692,	// (0x0002d3a8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002eaee) bg_popup_fep_char_preview_window_g

0xc54e,	// (0x0002b264) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) cell_vkb2_top_candi_pane_g1

0xc865,	// (0x0002b57b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc865,	// (0x0002b57b) cell_vkb2_top_candi_pane_g2

0xc886,	// (0x0002b59c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc886,	// (0x0002b59c) cell_vkb2_top_candi_pane_g3

0x968a,	// (0x000283a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x968a,	// (0x000283a0) cell_vkb2_top_candi_pane_g4

0xe69a,	// (0x0002d3b0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe69a,	// (0x0002d3b0) cell_vkb2_top_candi_pane_g5

0xda7a,	// (0x0002c790) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda7a,	// (0x0002c790) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002eb01) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002eb01) cell_vkb2_top_candi_pane_g

0x96ab,	// (0x000283c1) cell_vkb2_top_candi_pane_t1

0x8a74,	// (0x0002778a) aid_size_touch_slider_mark_ParamLimits

0x8a74,	// (0x0002778a) aid_size_touch_slider_mark

0xe29a,	// (0x0002cfb0) grid_graphic2_catg_pane_ParamLimits

0xe29a,	// (0x0002cfb0) grid_graphic2_catg_pane

0xe338,	// (0x0002d04e) popup_grid_graphic2_window_t1_ParamLimits

0xe338,	// (0x0002d04e) popup_grid_graphic2_window_t1

0xe34a,	// (0x0002d060) popup_grid_graphic2_window_t2_ParamLimits

0xe34a,	// (0x0002d060) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002eabc) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002eabc) popup_grid_graphic2_window_t

0x189e,	// (0x000205b4) bg_button_pane_cp05_ParamLimits

0xe4c0,	// (0x0002d1d6) cell_graphic2_control_pane_g1_ParamLimits

0xe6bb,	// (0x0002d3d1) cell_graphic2_catg_pane_ParamLimits

0xe6bb,	// (0x0002d3d1) cell_graphic2_catg_pane

0x16ea,	// (0x00020400) bg_button_pane_cp12

0xe6cd,	// (0x0002d3e3) cell_graphic2_catg_pane_g1

0xdbb4,	// (0x0002c8ca) cell_tb_ext_pane_t1_ParamLimits

0x9482,	// (0x00028198) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9482,	// (0x00028198) vkb2_top_cell_right_narrow_pane

0x949a,	// (0x000281b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x949a,	// (0x000281b0) vkb2_top_cell_right_wide_pane

0x8c4e,	// (0x00027964) bg_vkb2_func_pane_ParamLimits

0x8c4e,	// (0x00027964) bg_vkb2_func_pane

0x950b,	// (0x00028221) vkb2_top_cell_left_pane_g1_ParamLimits

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp03

0x9569,	// (0x0002827f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d1f,	// (0x00028a35) bg_vkb2_func_pane_g1

0x9d27,	// (0x00028a3d) bg_vkb2_func_pane_g2

0x9d37,	// (0x00028a4d) bg_vkb2_func_pane_g3

0x9d2f,	// (0x00028a45) bg_vkb2_func_pane_g4

0x9d3f,	// (0x00028a55) bg_vkb2_func_pane_g5

0x9d47,	// (0x00028a5d) bg_vkb2_func_pane_g6

0x9d4f,	// (0x00028a65) bg_vkb2_func_pane_g7

0x9d57,	// (0x00028a6d) bg_vkb2_func_pane_g8

0x9d17,	// (0x00028a2d) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002eb0e) bg_vkb2_func_pane_g

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp01

0x950b,	// (0x00028221) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x950b,	// (0x00028221) vkb2_top_cell_right_wide_pane_g1

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8c4e,	// (0x00027964) bg_vkb2_fuc_pane_cp02

0x9569,	// (0x0002827f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9569,	// (0x0002827f) vkb2_top_cell_right_narrow_pane_g1

0xd7e6,	// (0x0002c4fc) aid_touch_area_decrease_ParamLimits

0xd7e6,	// (0x0002c4fc) aid_touch_area_decrease

0xd806,	// (0x0002c51c) aid_touch_area_increase_ParamLimits

0xd806,	// (0x0002c51c) aid_touch_area_increase

0xd812,	// (0x0002c528) aid_touch_area_mute_ParamLimits

0xd812,	// (0x0002c528) aid_touch_area_mute

0xd836,	// (0x0002c54c) aid_touch_area_slider_ParamLimits

0xd836,	// (0x0002c54c) aid_touch_area_slider

0xd922,	// (0x0002c638) popup_slider_window_g4_ParamLimits

0xd922,	// (0x0002c638) popup_slider_window_g4

0xd92e,	// (0x0002c644) popup_slider_window_g5_ParamLimits

0xd92e,	// (0x0002c644) popup_slider_window_g5

0xd950,	// (0x0002c666) popup_slider_window_g6_ParamLimits

0xd950,	// (0x0002c666) popup_slider_window_g6

0xd990,	// (0x0002c6a6) popup_slider_window_t2_ParamLimits

0xd990,	// (0x0002c6a6) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002ea0a) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002ea0a) popup_slider_window_t

0xd9a8,	// (0x0002c6be) slider_pane_ParamLimits

0xd9a8,	// (0x0002c6be) slider_pane

0xe6d6,	// (0x0002d3ec) slider_pane_g1_ParamLimits

0xe6d6,	// (0x0002d3ec) slider_pane_g1

0xe6ea,	// (0x0002d400) slider_pane_g2_ParamLimits

0xe6ea,	// (0x0002d400) slider_pane_g2

0xe700,	// (0x0002d416) slider_pane_g3_ParamLimits

0xe700,	// (0x0002d416) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002eb21) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002eb21) slider_pane_g

0x8388,	// (0x0002709e) popup_tb_float_extension_window_ParamLimits

0x8388,	// (0x0002709e) popup_tb_float_extension_window

0xe72c,	// (0x0002d442) aid_size_cell_tb_float_ext

0x16ea,	// (0x00020400) bg_popup_sub_window_cp28

0xe738,	// (0x0002d44e) grid_tb_float_ext_pane

0xe742,	// (0x0002d458) cell_tb_float_ext_pane_ParamLimits

0xe742,	// (0x0002d458) cell_tb_float_ext_pane

0xe75c,	// (0x0002d472) cell_tb_float_ext_pane_g1

0xe765,	// (0x0002d47b) grid_highlight_pane_cp12

0x8d8f,	// (0x00027aa5) cell_last_hwr_side_pane_ParamLimits

0x8d8f,	// (0x00027aa5) cell_last_hwr_side_pane

0xc2de,	// (0x0002aff4) cell_last_hwr_side_pane_g1

0xe76e,	// (0x0002d484) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002eb2a) cell_last_hwr_side_pane_g

0x9431,	// (0x00028147) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9431,	// (0x00028147) vkb2_area_bottom_space_btn_pane

0xc54e,	// (0x0002b264) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe20c,	// (0x0002cf22) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96ab,	// (0x000283c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96ca,	// (0x000283e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96ca,	// (0x000283e0) vkb2_area_bottom_space_btn_pane_g1

0x9704,	// (0x0002841a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9704,	// (0x0002841a) vkb2_area_bottom_space_btn_pane_g2

0x973a,	// (0x00028450) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x973a,	// (0x00028450) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002eb2f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002eb2f) vkb2_area_bottom_space_btn_pane_g

0x8d03,	// (0x00027a19) cel_fep_hwr_func_pane_ParamLimits

0x8d03,	// (0x00027a19) cel_fep_hwr_func_pane

0x8d3f,	// (0x00027a55) cell_hwr_side_button_pane_ParamLimits

0x8d3f,	// (0x00027a55) cell_hwr_side_button_pane

0xdbe9,	// (0x0002c8ff) aid_area_touch_clock_ParamLimits

0x189e,	// (0x000205b4) bg_uniindi_top_pane_ParamLimits

0xdbfb,	// (0x0002c911) uniindi_top_pane_g1_ParamLimits

0xdc11,	// (0x0002c927) uniindi_top_pane_g2_ParamLimits

0xdc1d,	// (0x0002c933) uniindi_top_pane_g3_ParamLimits

0xdc2e,	// (0x0002c944) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002ea42) uniindi_top_pane_g_ParamLimits

0xdc3b,	// (0x0002c951) uniindi_top_pane_t1_ParamLimits

0x189e,	// (0x000205b4) bg_vkb2_func_pane_cp01_ParamLimits

0x189e,	// (0x000205b4) bg_vkb2_func_pane_cp01

0xe777,	// (0x0002d48d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe777,	// (0x0002d48d) cel_fep_hwr_func_pane_g1

0x189e,	// (0x000205b4) bg_vkb2_func_pane_cp02_ParamLimits

0x189e,	// (0x000205b4) bg_vkb2_func_pane_cp02

0xe777,	// (0x0002d48d) cell_hwr_side_button_pane_g1_ParamLimits

0xe777,	// (0x0002d48d) cell_hwr_side_button_pane_g1

0x9b9b,	// (0x000288b1) status_pane_g4_ParamLimits

0x9b9b,	// (0x000288b1) status_pane_g4

0x9bb5,	// (0x000288cb) status_pane_t1

0xc01f,	// (0x0002ad35) form2_midp_gauge_slider_cont_pane

0xc027,	// (0x0002ad3d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc039,	// (0x0002ad4f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc04b,	// (0x0002ad61) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002e815) form2_midp_gauge_slider_pane_t_ParamLimits

0xc05d,	// (0x0002ad73) form2_midp_slider_pane_ParamLimits

0x90a0,	// (0x00027db6) aid_size_cell_func_vkb2_ParamLimits

0x90a0,	// (0x00027db6) aid_size_cell_func_vkb2

0xe718,	// (0x0002d42e) slider_pane_g4_ParamLimits

0xe718,	// (0x0002d42e) slider_pane_g4

0x9784,	// (0x0002849a) form2_midp_gauge_slider_pane_t2_cp01

0x9792,	// (0x000284a8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9792,	// (0x000284a8) form2_midp_gauge_slider_pane_t3_cp01

0x97af,	// (0x000284c5) form2_midp_slider_pane_cp01

0x16ea,	// (0x00020400) navi_smil_pane

0xe7b0,	// (0x0002d4c6) navi_smil_pane_g1

0xe7b8,	// (0x0002d4ce) navi_smil_pane_t1

0xe785,	// (0x0002d49b) form2_midp_slider_pane_g1

0xe78e,	// (0x0002d4a4) form2_midp_slider_pane_g2

0xe796,	// (0x0002d4ac) form2_midp_slider_pane_g3

0xe785,	// (0x0002d49b) form2_midp_slider_pane_g4

0xe79e,	// (0x0002d4b4) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002eb38) form2_midp_slider_pane_g

0x9774,	// (0x0002848a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9774,	// (0x0002848a) vkb2_area_bottom_space_btn_pane_g4

0x860f,	// (0x00027325) lc0_navi_pane_ParamLimits

0x860f,	// (0x00027325) lc0_navi_pane

0x8685,	// (0x0002739b) lc0_stat_indi_pane_ParamLimits

0x8685,	// (0x0002739b) lc0_stat_indi_pane

0x869c,	// (0x000273b2) ls0_title_pane_ParamLimits

0x869c,	// (0x000273b2) ls0_title_pane

0x1b84,	// (0x0002089a) bg_popup_sub_pane_cp14_ParamLimits

0xdbd0,	// (0x0002c8e6) list_uniindi_pane_ParamLimits

0xdbdc,	// (0x0002c8f2) uniindi_top_pane_ParamLimits

0xdc77,	// (0x0002c98d) list_single_uniindi_pane_g1_ParamLimits

0xdc8a,	// (0x0002c9a0) list_single_uniindi_pane_t1_ParamLimits

0x97b8,	// (0x000284ce) lc0_stat_clock_pane_ParamLimits

0x97b8,	// (0x000284ce) lc0_stat_clock_pane

0xe7c6,	// (0x0002d4dc) lc0_stat_indi_pane_g1_ParamLimits

0xe7c6,	// (0x0002d4dc) lc0_stat_indi_pane_g1

0xe7d3,	// (0x0002d4e9) lc0_stat_indi_pane_g2_ParamLimits

0xe7d3,	// (0x0002d4e9) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002eb43) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002eb43) lc0_stat_indi_pane_g

0x97c5,	// (0x000284db) lc0_uni_indicator_pane_ParamLimits

0x97c5,	// (0x000284db) lc0_uni_indicator_pane

0xe7e0,	// (0x0002d4f6) ls0_title_pane_g1_ParamLimits

0xe7e0,	// (0x0002d4f6) ls0_title_pane_g1

0xe7f4,	// (0x0002d50a) ls0_title_pane_t1_ParamLimits

0xe7f4,	// (0x0002d50a) ls0_title_pane_t1

0x97d2,	// (0x000284e8) lc0_uni_indicator_pane_g1_ParamLimits

0x97d2,	// (0x000284e8) lc0_uni_indicator_pane_g1

0xe82a,	// (0x0002d540) lc0_stat_clock_pane_t1

0x16ea,	// (0x00020400) main_ai5_pane

0xe838,	// (0x0002d54e) ai5_sk_pane_ParamLimits

0xe838,	// (0x0002d54e) ai5_sk_pane

0xe845,	// (0x0002d55b) cell_ai5_widget_pane_ParamLimits

0xe845,	// (0x0002d55b) cell_ai5_widget_pane

0xe8f7,	// (0x0002d60d) aid_size_cell_widget_grid

0xe905,	// (0x0002d61b) bg_ai5_widget_pane_ParamLimits

0xe905,	// (0x0002d61b) bg_ai5_widget_pane

0xe979,	// (0x0002d68f) cell_ai5_widget_pane_g2

0xe989,	// (0x0002d69f) cell_ai5_widget_pane_g3

0xe9a0,	// (0x0002d6b6) cell_ai5_widget_pane_g4

0xe9ac,	// (0x0002d6c2) cell_ai5_widget_pane_g5

0xe9b8,	// (0x0002d6ce) cell_ai5_widget_pane_g6

0xe9c4,	// (0x0002d6da) cell_ai5_widget_pane_g7

0xea0c,	// (0x0002d722) cell_ai5_widget_pane_t1_ParamLimits

0xea0c,	// (0x0002d722) cell_ai5_widget_pane_t1

0xea29,	// (0x0002d73f) cell_ai5_widget_pane_t2_ParamLimits

0xea29,	// (0x0002d73f) cell_ai5_widget_pane_t2

0xea41,	// (0x0002d757) cell_ai5_widget_pane_t3_ParamLimits

0xea41,	// (0x0002d757) cell_ai5_widget_pane_t3

0xea59,	// (0x0002d76f) cell_ai5_widget_pane_t4_ParamLimits

0xea59,	// (0x0002d76f) cell_ai5_widget_pane_t4

0xea76,	// (0x0002d78c) cell_ai5_widget_pane_t5_ParamLimits

0xea76,	// (0x0002d78c) cell_ai5_widget_pane_t5

0xea95,	// (0x0002d7ab) cell_ai5_widget_pane_t6_ParamLimits

0xea95,	// (0x0002d7ab) cell_ai5_widget_pane_t6

0xeaa7,	// (0x0002d7bd) cell_ai5_widget_pane_t7_ParamLimits

0xeaa7,	// (0x0002d7bd) cell_ai5_widget_pane_t7

0xeac0,	// (0x0002d7d6) cell_ai5_widget_pane_t8_ParamLimits

0xeac0,	// (0x0002d7d6) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002eb5d) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002eb5d) cell_ai5_widget_pane_t

0xeb14,	// (0x0002d82a) grid_ai5_widget_pane

0x1b84,	// (0x0002089a) highlight_cell_ai5_widget_pane_ParamLimits

0x1b84,	// (0x0002089a) highlight_cell_ai5_widget_pane

0xeb22,	// (0x0002d838) ai5_sk_left_pane

0xeb2c,	// (0x0002d842) ai5_sk_middle_pane

0xeb36,	// (0x0002d84c) ai5_sk_right_pane

0xeb40,	// (0x0002d856) bg_ai5_widget_pane_g1_ParamLimits

0xeb40,	// (0x0002d856) bg_ai5_widget_pane_g1

0xeb4c,	// (0x0002d862) bg_ai5_widget_pane_g2_ParamLimits

0xeb4c,	// (0x0002d862) bg_ai5_widget_pane_g2

0xeb58,	// (0x0002d86e) bg_ai5_widget_pane_g3_ParamLimits

0xeb58,	// (0x0002d86e) bg_ai5_widget_pane_g3

0xeb64,	// (0x0002d87a) bg_ai5_widget_pane_g4_ParamLimits

0xeb64,	// (0x0002d87a) bg_ai5_widget_pane_g4

0xeb70,	// (0x0002d886) bg_ai5_widget_pane_g5_ParamLimits

0xeb70,	// (0x0002d886) bg_ai5_widget_pane_g5

0xeb7c,	// (0x0002d892) bg_ai5_widget_pane_g6_ParamLimits

0xeb7c,	// (0x0002d892) bg_ai5_widget_pane_g6

0xeb88,	// (0x0002d89e) bg_ai5_widget_pane_g7_ParamLimits

0xeb88,	// (0x0002d89e) bg_ai5_widget_pane_g7

0xeb94,	// (0x0002d8aa) bg_ai5_widget_pane_g8_ParamLimits

0xeb94,	// (0x0002d8aa) bg_ai5_widget_pane_g8

0xeba0,	// (0x0002d8b6) bg_ai5_widget_pane_g9_ParamLimits

0xeba0,	// (0x0002d8b6) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002eb72) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002eb72) bg_ai5_widget_pane_g

0xebd2,	// (0x0002d8e8) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd2,	// (0x0002d8e8) cell_shortcut_ai5_widget_pane

0x794f,	// (0x00026665) bg_cell_shortcut_ai5_widget_pane

0xebe3,	// (0x0002d8f9) cell_grid_ai5_widget_pane_g1

0x794f,	// (0x00026665) highlight_cell_shortcut_ai5_widget_pane

0x9d27,	// (0x00028a3d) ai5_sk_left_pane_g1

0xebec,	// (0x0002d902) ai5_sk_left_pane_g2

0xebf4,	// (0x0002d90a) ai5_sk_left_pane_g3

0xebfc,	// (0x0002d912) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002eb85) ai5_sk_left_pane_g

0xec04,	// (0x0002d91a) ai5_sk_left_pane_t1

0x9d1f,	// (0x00028a35) ai5_sk_right_pane_g1

0xec12,	// (0x0002d928) ai5_sk_right_pane_g2

0xec1a,	// (0x0002d930) ai5_sk_right_pane_g3

0xec22,	// (0x0002d938) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002eb8e) ai5_sk_right_pane_g

0xec2a,	// (0x0002d940) ai5_sk_right_pane_t1

0x9d1f,	// (0x00028a35) ai5_sk_middle_pane_g1

0x9d27,	// (0x00028a3d) ai5_sk_middle_pane_g2

0x9d3f,	// (0x00028a55) ai5_sk_middle_pane_g3

0xec1a,	// (0x0002d930) ai5_sk_middle_pane_g4

0xebf4,	// (0x0002d90a) ai5_sk_middle_pane_g5

0xec38,	// (0x0002d94e) ai5_sk_middle_pane_g6

0xec40,	// (0x0002d956) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002eb97) ai5_sk_middle_pane_g

0x8495,	// (0x000271ab) aid_touch_area_size_lc0_ParamLimits

0x8495,	// (0x000271ab) aid_touch_area_size_lc0

0x8e8e,	// (0x00027ba4) cell_hwr_candidate_pane_t1_ParamLimits

0x84b1,	// (0x000271c7) aid_touch_navi_pane

0x9b45,	// (0x0002885b) status_dt_navi_pane_ParamLimits

0x9b45,	// (0x0002885b) status_dt_navi_pane

0x9b52,	// (0x00028868) status_dt_sta_pane_ParamLimits

0x9b52,	// (0x00028868) status_dt_sta_pane

0xec48,	// (0x0002d95e) dt_sta_controll_pane

0xec55,	// (0x0002d96b) dt_sta_indi_pane

0xec66,	// (0x0002d97c) dt_sta_title_pane

0x189e,	// (0x000205b4) bg_dt_sta_indi_pane_ParamLimits

0x189e,	// (0x000205b4) bg_dt_sta_indi_pane

0xec79,	// (0x0002d98f) dt_sta_battery_pane

0xec81,	// (0x0002d997) dt_sta_indi_pane_g1

0xec8a,	// (0x0002d9a0) dt_sta_indi_pane_g2

0xec93,	// (0x0002d9a9) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002eba6) dt_sta_indi_pane_g

0xec9c,	// (0x0002d9b2) dt_sta_signal_pane

0x1b84,	// (0x0002089a) bg_dt_sta_title_pane_ParamLimits

0x1b84,	// (0x0002089a) bg_dt_sta_title_pane

0xab4d,	// (0x00029863) dt_sta_title_pane_g1

0xeca5,	// (0x0002d9bb) dt_sta_title_pane_t1_ParamLimits

0xeca5,	// (0x0002d9bb) dt_sta_title_pane_t1

0x16ea,	// (0x00020400) bg_dt_sta_control_pane

0xecba,	// (0x0002d9d0) dt_sta_controll_pane_g1

0xecc3,	// (0x0002d9d9) bg_dt_sta_title_pane_g1

0xeccc,	// (0x0002d9e2) bg_dt_sta_title_pane_g2

0xecd5,	// (0x0002d9eb) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002ebad) bg_dt_sta_title_pane_g

0xc2de,	// (0x0002aff4) bg_dt_sta_indi_pane_g1

0xecde,	// (0x0002d9f4) dt_sta_signal_pane_g1

0xece6,	// (0x0002d9fc) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002ebb4) dt_sta_signal_pane_g

0xecee,	// (0x0002da04) dt_sta_battery_pane_g1

0xecf7,	// (0x0002da0d) dt_sta_battery_pane_t1

0xc2de,	// (0x0002aff4) bg_dt_sta_control_pane_g1

0x3b52,	// (0x00022868) fep_china_uni_eep_pane

0x3b5a,	// (0x00022870) fep_china_uni_entry_pane_ParamLimits

0x3b6a,	// (0x00022880) popup_fep_china_uni_window_g1_ParamLimits

0x3b7a,	// (0x00022890) popup_fep_china_uni_window_g2_ParamLimits

0x3b7a,	// (0x00022890) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0002e429) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0002e429) popup_fep_china_uni_window_g

0xed06,	// (0x0002da1c) fep_china_uni_eep_pane_g1

0xed0e,	// (0x0002da24) fep_china_uni_eep_pane_t1

0xe7a7,	// (0x0002d4bd) aid_touch_area_size_smil_player

0x8607,	// (0x0002731d) lc0_clock_pane

0x9ba9,	// (0x000288bf) status_pane_g5_ParamLimits

0x9ba9,	// (0x000288bf) status_pane_g5

0x8049,	// (0x00026d5f) popup_keymap_window

0x9b67,	// (0x0002887d) status_icon_pane

0xe989,	// (0x0002d69f) cell_ai5_widget_pane_g3_ParamLimits

0xe9a0,	// (0x0002d6b6) cell_ai5_widget_pane_g4_ParamLimits

0xe9ac,	// (0x0002d6c2) cell_ai5_widget_pane_g5_ParamLimits

0xe9d0,	// (0x0002d6e6) cell_ai5_widget_pane_g8_ParamLimits

0xe9d0,	// (0x0002d6e6) cell_ai5_widget_pane_g8

0xe9e4,	// (0x0002d6fa) cell_ai5_widget_pane_g9_ParamLimits

0xe9e4,	// (0x0002d6fa) cell_ai5_widget_pane_g9

0xe9f8,	// (0x0002d70e) cell_ai5_widget_pane_g10_ParamLimits

0xe9f8,	// (0x0002d70e) cell_ai5_widget_pane_g10

0xed1d,	// (0x0002da33) status_icon_pane_g1

0x16ea,	// (0x00020400) bg_popup_sub_pane_cp13

0xed25,	// (0x0002da3b) popup_keymap_window_t1

0x7d3a,	// (0x00026a50) control_pane_g6_ParamLimits

0x7d3a,	// (0x00026a50) control_pane_g6

0x7d47,	// (0x00026a5d) control_pane_g7_ParamLimits

0x7d47,	// (0x00026a5d) control_pane_g7

0x7d54,	// (0x00026a6a) control_pane_g8_ParamLimits

0x7d54,	// (0x00026a6a) control_pane_g8

0xec48,	// (0x0002d95e) dt_sta_controll_pane_ParamLimits

0xec55,	// (0x0002d96b) dt_sta_indi_pane_ParamLimits

0xec66,	// (0x0002d97c) dt_sta_title_pane_ParamLimits

0x1a71,	// (0x00020787) aid_size_touch_scroll_bar_cale

0x66ea,	// (0x00025400) popup_discreet_window_ParamLimits

0x66ea,	// (0x00025400) popup_discreet_window

0x6764,	// (0x0002547a) popup_sk_window

0xa391,	// (0x000290a7) bg_popup_sub_pane_cp28_ParamLimits

0xa391,	// (0x000290a7) bg_popup_sub_pane_cp28

0xed33,	// (0x0002da49) popup_discreet_window_g1_ParamLimits

0xed33,	// (0x0002da49) popup_discreet_window_g1

0xed53,	// (0x0002da69) popup_discreet_window_t1_ParamLimits

0xed53,	// (0x0002da69) popup_discreet_window_t1

0xed71,	// (0x0002da87) popup_discreet_window_t2_ParamLimits

0xed71,	// (0x0002da87) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002ebb9) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002ebb9) popup_discreet_window_t

0x97e6,	// (0x000284fc) popup_sk_window_g1

0x97f0,	// (0x00028506) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002ebc0) popup_sk_window_g

0x97f8,	// (0x0002850e) popup_sk_window_t1

0x9806,	// (0x0002851c) popup_sk_window_t1_copy1

0xe979,	// (0x0002d68f) cell_ai5_widget_pane_g2_ParamLimits

0xead2,	// (0x0002d7e8) cell_ai5_widget_pane_t9_ParamLimits

0xead2,	// (0x0002d7e8) cell_ai5_widget_pane_t9

0x16ea,	// (0x00020400) main_fep_fshwr2_pane

0x9814,	// (0x0002852a) aid_fshwr2_btn_pane

0x9820,	// (0x00028536) aid_fshwr2_syb_pane

0x9831,	// (0x00028547) aid_fshwr2_txt_pane

0x983d,	// (0x00028553) fshwr2_func_candi_pane

0x9855,	// (0x0002856b) fshwr2_hwr_syb_pane

0x986c,	// (0x00028582) fshwr2_icf_pane

0x16ea,	// (0x00020400) fshwr2_icf_bg_pane

0x9895,	// (0x000285ab) fshwr2_icf_pane_t1_ParamLimits

0x9895,	// (0x000285ab) fshwr2_icf_pane_t1

0x3a3b,	// (0x00022751) fshwr2_func_candi_pane_g1

0xedc3,	// (0x0002dad9) fshwr2_func_candi_row_pane_ParamLimits

0xedc3,	// (0x0002dad9) fshwr2_func_candi_row_pane

0x98ae,	// (0x000285c4) cell_fshwr2_syb_pane_ParamLimits

0x98ae,	// (0x000285c4) cell_fshwr2_syb_pane

0xc54e,	// (0x0002b264) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) fshwr2_hwr_syb_pane_g1

0x16ea,	// (0x00020400) bg_popup_call_pane_cp01

0x98c4,	// (0x000285da) fshwr2_func_candi_cell_pane_ParamLimits

0x98c4,	// (0x000285da) fshwr2_func_candi_cell_pane

0xa9ed,	// (0x00029703) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9ed,	// (0x00029703) fshwr2_func_candi_cell_bg_pane

0x990f,	// (0x00028625) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x990f,	// (0x00028625) fshwr2_func_candi_cell_pane_g1

0x9937,	// (0x0002864d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9937,	// (0x0002864d) fshwr2_func_candi_cell_pane_t1

0x16ea,	// (0x00020400) bg_button_pane_cp08

0xedd3,	// (0x0002dae9) cell_fshwr2_syb_bg_pane

0x994a,	// (0x00028660) cell_fshwr2_syb_bg_pane_g1

0x9952,	// (0x00028668) cell_fshwr2_syb_bg_pane_t1

0x1b84,	// (0x0002089a) main_tmo_pane

0xae86,	// (0x00029b9c) uni_indicator_pane_g1_ParamLimits

0xae99,	// (0x00029baf) uni_indicator_pane_g2_ParamLimits

0xaeab,	// (0x00029bc1) uni_indicator_pane_g3_ParamLimits

0xaeba,	// (0x00029bd0) uni_indicator_pane_g4_ParamLimits

0xaeba,	// (0x00029bd0) uni_indicator_pane_g4

0xaece,	// (0x00029be4) uni_indicator_pane_g5_ParamLimits

0xaece,	// (0x00029be4) uni_indicator_pane_g5

0xaece,	// (0x00029be4) uni_indicator_pane_g6_ParamLimits

0xaece,	// (0x00029be4) uni_indicator_pane_g6

0xf912,	// (0x0002e628) uni_indicator_pane_g_ParamLimits

0xd7c8,	// (0x0002c4de) popup_tmo_note_window_ParamLimits

0xd7c8,	// (0x0002c4de) popup_tmo_note_window

0x1b84,	// (0x0002089a) fshwr2_bg_pane

0x9928,	// (0x0002863e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9928,	// (0x0002863e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002ebc5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002ebc5) fshwr2_func_candi_cell_pane_g

0xc2de,	// (0x0002aff4) bg_popup_window_pane_cp01

0x9961,	// (0x00028677) bg_popup_window_pane_g1_cp01

0xeddb,	// (0x0002daf1) bg_popup_window_pane_cp22_ParamLimits

0xeddb,	// (0x0002daf1) bg_popup_window_pane_cp22

0xede9,	// (0x0002daff) listscroll_tmo_link_pane_ParamLimits

0xede9,	// (0x0002daff) listscroll_tmo_link_pane

0xee29,	// (0x0002db3f) popup_tmo_note_window_g1_ParamLimits

0xee29,	// (0x0002db3f) popup_tmo_note_window_g1

0xee36,	// (0x0002db4c) tmo_note_info_pane_ParamLimits

0xee36,	// (0x0002db4c) tmo_note_info_pane

0xee50,	// (0x0002db66) list_tmo_note_info_pane_g1_ParamLimits

0xee50,	// (0x0002db66) list_tmo_note_info_pane_g1

0xee67,	// (0x0002db7d) list_tmo_note_info_pane_g2_ParamLimits

0xee67,	// (0x0002db7d) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002ebca) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002ebca) list_tmo_note_info_pane_g

0xee83,	// (0x0002db99) list_tmo_note_info_text_pane_ParamLimits

0xee83,	// (0x0002db99) list_tmo_note_info_text_pane

0xef04,	// (0x0002dc1a) list_tmo_link_pane

0xef11,	// (0x0002dc27) scroll_pane_cp20

0xef1e,	// (0x0002dc34) list_single_tmo_link_pane_ParamLimits

0xef1e,	// (0x0002dc34) list_single_tmo_link_pane

0xef2e,	// (0x0002dc44) list_single_tmo_link_pane_t1

0xef3c,	// (0x0002dc52) list_tmo_note_info_text_pane_t1_ParamLimits

0xef3c,	// (0x0002dc52) list_tmo_note_info_text_pane_t1

0x6e32,	// (0x00025b48) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6e32,	// (0x00025b48) aid_size_touch_scroll_bar_cp01

0x58bd,	// (0x000245d3) aid_size_touch_slider_marker

0x674c,	// (0x00025462) popup_settings_window_ParamLimits

0x674c,	// (0x00025462) popup_settings_window

0x5a82,	// (0x00024798) popup_candi_list_indi_window

0x84b1,	// (0x000271c7) aid_touch_navi_pane_ParamLimits

0x8ff9,	// (0x00027d0f) rs_clock_indi_pane

0x9002,	// (0x00027d18) sctrl_sk_bottom_pane_ParamLimits

0x9013,	// (0x00027d29) sctrl_sk_top_pane_ParamLimits

0x90fa,	// (0x00027e10) popup_fep_tooltip_window

0xe8f7,	// (0x0002d60d) aid_size_cell_widget_grid_ParamLimits

0xe964,	// (0x0002d67a) cell_ai5_widget_pane_g1_ParamLimits

0xe964,	// (0x0002d67a) cell_ai5_widget_pane_g1

0xe9b8,	// (0x0002d6ce) cell_ai5_widget_pane_g6_ParamLimits

0xe9c4,	// (0x0002d6da) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002eb48) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002eb48) cell_ai5_widget_pane_g

0xeaf6,	// (0x0002d80c) cell_ai5_widget_pane_t10_ParamLimits

0xeaf6,	// (0x0002d80c) cell_ai5_widget_pane_t10

0xeb14,	// (0x0002d82a) grid_ai5_widget_pane_ParamLimits

0xebac,	// (0x0002d8c2) cell_contacts_ai5_widget_pane_ParamLimits

0xebac,	// (0x0002d8c2) cell_contacts_ai5_widget_pane

0xed86,	// (0x0002da9c) popup_discreet_window_t3_ParamLimits

0xed86,	// (0x0002da9c) popup_discreet_window_t3

0x9881,	// (0x00028597) popup_fshwr2_char_preview_window_ParamLimits

0x9881,	// (0x00028597) popup_fshwr2_char_preview_window

0xeea1,	// (0x0002dbb7) tmo_note_info_pane_t1

0xeeb6,	// (0x0002dbcc) tmo_note_info_pane_t2

0xeecb,	// (0x0002dbe1) tmo_note_info_pane_t3

0xeee0,	// (0x0002dbf6) tmo_note_info_pane_t4

0xeef2,	// (0x0002dc08) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002ebcf) tmo_note_info_pane_t

0xef04,	// (0x0002dc1a) list_tmo_link_pane_ParamLimits

0xef11,	// (0x0002dc27) scroll_pane_cp20_ParamLimits

0x16ea,	// (0x00020400) bg_popup_fep_char_preview_window_cp01

0xef55,	// (0x0002dc6b) popup_fshwr2_char_preview_window_t1

0xef63,	// (0x0002dc79) popup_candi_list_indi_window_g1

0xef6c,	// (0x0002dc82) bg_cell_contacts_ai5_widget_pane

0xef78,	// (0x0002dc8e) cell_contacts_ai5_widget_pane_g1

0xc9d1,	// (0x0002b6e7) cell_contacts_ai5_widget_pane_g2

0xef8d,	// (0x0002dca3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002ebda) cell_contacts_ai5_widget_pane_g

0xef99,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_t1

0x1b84,	// (0x0002089a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf010,	// (0x0002dd26) settings_container_pane

0x794f,	// (0x00026665) listscroll_set_pane_copy1

0xb9e7,	// (0x0002a6fd) scroll_pane_cp121_copy1

0xa14a,	// (0x00028e60) set_content_pane_copy1

0xf01c,	// (0x0002dd32) aid_height_set_list_copy1_ParamLimits

0xf01c,	// (0x0002dd32) aid_height_set_list_copy1

0xb0c6,	// (0x00029ddc) aid_size_parent_copy1_ParamLimits

0xb0c6,	// (0x00029ddc) aid_size_parent_copy1

0xf028,	// (0x0002dd3e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf028,	// (0x0002dd3e) button_value_adjust_pane_cp6_copy1

0x7eb4,	// (0x00026bca) list_highlight_pane_cp2_copy1_ParamLimits

0x7eb4,	// (0x00026bca) list_highlight_pane_cp2_copy1

0xf03c,	// (0x0002dd52) list_set_pane_copy1_ParamLimits

0xf03c,	// (0x0002dd52) list_set_pane_copy1

0xefab,	// (0x0002dcc1) main_pane_set_t1_copy1_ParamLimits

0xefab,	// (0x0002dcc1) main_pane_set_t1_copy1

0xefe5,	// (0x0002dcfb) main_pane_set_t2_copy1_ParamLimits

0xefe5,	// (0x0002dcfb) main_pane_set_t2_copy1

0xf0e9,	// (0x0002ddff) main_pane_set_t3_copy1

0xf0f7,	// (0x0002de0d) main_pane_set_t4_copy1

0xf004,	// (0x0002dd1a) set_content_pane_g1_copy1_ParamLimits

0xf004,	// (0x0002dd1a) set_content_pane_g1_copy1

0xf105,	// (0x0002de1b) setting_code_pane_copy1

0xf10d,	// (0x0002de23) setting_slider_graphic_pane_copy1

0xf10d,	// (0x0002de23) setting_slider_pane_copy1

0xf10d,	// (0x0002de23) setting_text_pane_copy1

0xf10d,	// (0x0002de23) setting_volume_pane_copy1

0xf105,	// (0x0002de1b) settings_code_pane_cp2_copy1

0xf115,	// (0x0002de2b) settings_code_pane_cp_copy1_ParamLimits

0xf115,	// (0x0002de2b) settings_code_pane_cp_copy1

0x996a,	// (0x00028680) volume_set_pane_copy1

0xf129,	// (0x0002de3f) volume_set_pane_g10_copy1

0xf131,	// (0x0002de47) volume_set_pane_g1_copy1

0xf139,	// (0x0002de4f) volume_set_pane_g2_copy1

0xf141,	// (0x0002de57) volume_set_pane_g3_copy1

0xf149,	// (0x0002de5f) volume_set_pane_g4_copy1

0xf151,	// (0x0002de67) volume_set_pane_g5_copy1

0xf159,	// (0x0002de6f) volume_set_pane_g6_copy1

0xf161,	// (0x0002de77) volume_set_pane_g7_copy1

0xf169,	// (0x0002de7f) volume_set_pane_g8_copy1

0xf171,	// (0x0002de87) volume_set_pane_g9_copy1

0x175a,	// (0x00020470) bg_set_opt_pane_cp_copy1_ParamLimits

0x175a,	// (0x00020470) bg_set_opt_pane_cp_copy1

0x9972,	// (0x00028688) setting_slider_pane_t1_copy1_ParamLimits

0x9972,	// (0x00028688) setting_slider_pane_t1_copy1

0x9990,	// (0x000286a6) setting_slider_pane_t2_copy1_ParamLimits

0x9990,	// (0x000286a6) setting_slider_pane_t2_copy1

0x99aa,	// (0x000286c0) setting_slider_pane_t3_copy1_ParamLimits

0x99aa,	// (0x000286c0) setting_slider_pane_t3_copy1

0x99c2,	// (0x000286d8) slider_set_pane_copy1_ParamLimits

0x99c2,	// (0x000286d8) slider_set_pane_copy1

0x1c4a,	// (0x00020960) set_opt_bg_pane_g1_copy2

0x1c52,	// (0x00020968) set_opt_bg_pane_g2_copy2

0xf179,	// (0x0002de8f) set_opt_bg_pane_g3_copy2

0x1c62,	// (0x00020978) set_opt_bg_pane_g4_copy2

0x1c6a,	// (0x00020980) set_opt_bg_pane_g5_copy2

0x1c72,	// (0x00020988) set_opt_bg_pane_g6_copy2

0xf183,	// (0x0002de99) set_opt_bg_pane_g7_copy2

0xf18b,	// (0x0002dea1) set_opt_bg_pane_g8_copy2

0xf195,	// (0x0002deab) set_opt_bg_pane_g9_copy2

0x99d8,	// (0x000286ee) aid_size_touch_slider_mark_copy1_ParamLimits

0x99d8,	// (0x000286ee) aid_size_touch_slider_mark_copy1

0xf19f,	// (0x0002deb5) slider_set_pane_g1_copy1

0x99ec,	// (0x00028702) slider_set_pane_g2_copy1

0x8a94,	// (0x000277aa) slider_set_pane_g3_copy1_ParamLimits

0x8a94,	// (0x000277aa) slider_set_pane_g3_copy1

0x8aa8,	// (0x000277be) slider_set_pane_g4_copy1_ParamLimits

0x8aa8,	// (0x000277be) slider_set_pane_g4_copy1

0x8ac0,	// (0x000277d6) slider_set_pane_g5_copy1_ParamLimits

0x8ac0,	// (0x000277d6) slider_set_pane_g5_copy1

0x8a94,	// (0x000277aa) slider_set_pane_g6_copy1_ParamLimits

0x8a94,	// (0x000277aa) slider_set_pane_g6_copy1

0x99f4,	// (0x0002870a) slider_set_pane_g7_copy1_ParamLimits

0x99f4,	// (0x0002870a) slider_set_pane_g7_copy1

0x16fe,	// (0x00020414) bg_set_opt_pane_cp2_copy1

0xf1a8,	// (0x0002debe) setting_slider_graphic_pane_g1_copy1

0xf1b1,	// (0x0002dec7) setting_slider_graphic_pane_t1_copy1

0xf1c1,	// (0x0002ded7) setting_slider_graphic_pane_t2_copy1

0xf1d1,	// (0x0002dee7) slider_set_pane_cp_copy1

0xf1e1,	// (0x0002def7) input_focus_pane_cp1_copy1

0xf1ea,	// (0x0002df00) list_set_text_pane_copy1

0xf1f2,	// (0x0002df08) setting_text_pane_g1_copy1

0x6443,	// (0x00025159) set_text_pane_t1_copy1

0xf1e1,	// (0x0002def7) input_focus_pane_cp2_copy1

0xf1f2,	// (0x0002df08) setting_code_pane_g1_copy1

0xf1fb,	// (0x0002df11) setting_code_pane_t1_copy1

0xf209,	// (0x0002df1f) list_set_graphic_pane_copy1

0x16fe,	// (0x00020414) bg_set_opt_pane_cp4_copy1

0x765a,	// (0x00026370) list_set_graphic_pane_g1_copy1_ParamLimits

0x765a,	// (0x00026370) list_set_graphic_pane_g1_copy1

0xf21d,	// (0x0002df33) list_set_graphic_pane_g2_copy1

0x7672,	// (0x00026388) list_set_graphic_pane_t1_copy1_ParamLimits

0x7672,	// (0x00026388) list_set_graphic_pane_t1_copy1

0xc2de,	// (0x0002aff4) rs_clock_indi_pane_g1

0xf225,	// (0x0002df3b) rs_clock_indi_pane_t1

0xf233,	// (0x0002df49) rs_indi_pane

0xf23b,	// (0x0002df51) rs_indi_pane_g1

0xf244,	// (0x0002df5a) rs_indi_pane_g2

0xef63,	// (0x0002dc79) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002ebe1) rs_indi_pane_g

0x794f,	// (0x00026665) bg_popup_preview_window_pane_cp03

0xf24d,	// (0x0002df63) popup_fep_tooltip_window_t1

0xcf79,	// (0x0002bc8f) popup_note2_window_g2_ParamLimits

0xcf79,	// (0x0002bc8f) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0002e981) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0002e981) popup_note2_window_g

0xd466,	// (0x0002c17c) bg_popup_sub_pane_cp11_ParamLimits

0xd473,	// (0x0002c189) cell_ai3_links_pane_g1_ParamLimits

0xd48a,	// (0x0002c1a0) cell_ai3_links_pane_t1

0x6443,	// (0x00025159) set_text_pane_t1_copy1_ParamLimits

0x7860,	// (0x00026576) cell_graphic_popup_pane_cp2_ParamLimits

0x7860,	// (0x00026576) cell_graphic_popup_pane_cp2

0xf25b,	// (0x0002df71) cell_graphic_popup_pane_g1_cp2

0x19f4,	// (0x0002070a) cell_graphic_popup_pane_g2_cp2

0xf263,	// (0x0002df79) cell_graphic_popup_pane_g3_cp2

0xf26b,	// (0x0002df81) cell_graphic_popup_pane_t2_cp2

0x1a05,	// (0x0002071b) grid_highlight_pane_cp3_cp2

0x3899,	// (0x000225af) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1b84,	// (0x0002089a) main_tmo_pane_ParamLimits

0xd7bc,	// (0x0002c4d2) popup_tmo_big_image_note_window

0xe953,	// (0x0002d669) cell_ai5_widget_list_pane

0xe95b,	// (0x0002d671) cell_ai5_widget_lrg_icon_pane

0xeea1,	// (0x0002dbb7) tmo_note_info_pane_t1_ParamLimits

0xeeb6,	// (0x0002dbcc) tmo_note_info_pane_t2_ParamLimits

0xeecb,	// (0x0002dbe1) tmo_note_info_pane_t3_ParamLimits

0xeee0,	// (0x0002dbf6) tmo_note_info_pane_t4_ParamLimits

0xeef2,	// (0x0002dc08) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002ebcf) tmo_note_info_pane_t_ParamLimits

0xf010,	// (0x0002dd26) settings_container_pane_ParamLimits

0xf1d9,	// (0x0002deef) indicator_popup_pane_cp5

0xf1d9,	// (0x0002deef) indicator_popup_pane_cp6

0xf209,	// (0x0002df1f) list_set_graphic_pane_copy1_ParamLimits

0x16ea,	// (0x00020400) bg_popup_window_pane_cp23

0xf279,	// (0x0002df8f) popup_tmo_big_image_note_window_g1

0xf282,	// (0x0002df98) popup_tmo_big_image_note_window_t1

0xf292,	// (0x0002dfa8) popup_tmo_big_image_note_window_t2

0xf2a2,	// (0x0002dfb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002ebe8) popup_tmo_big_image_note_window_t

0xc2de,	// (0x0002aff4) cell_ai5_widget_lrg_icon_pane_g1

0xf2b2,	// (0x0002dfc8) cell_ai5_widget_lrg_icon_pane_t1

0xf2c0,	// (0x0002dfd6) cell_ai5_widget_list_row_pane_ParamLimits

0xf2c0,	// (0x0002dfd6) cell_ai5_widget_list_row_pane

0xf2d7,	// (0x0002dfed) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d7,	// (0x0002dfed) cell_ai5_widget_list_row_pane_g1

0xf2e4,	// (0x0002dffa) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e4,	// (0x0002dffa) cell_ai5_widget_list_row_pane_t1

0xf30f,	// (0x0002e025) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30f,	// (0x0002e025) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0002ebef) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002ebef) cell_ai5_widget_list_row_pane_t

0x16ea,	// (0x00020400) main_fep_vtchi_ss_pane

0xf353,	// (0x0002e069) popup_fep_char_pre_window

0xf35b,	// (0x0002e071) popup_fep_ituss_window

0xf37c,	// (0x0002e092) popup_fep_vkbss_window

0xf3a6,	// (0x0002e0bc) grid_vkbss_keypad_pane_ParamLimits

0xf3a6,	// (0x0002e0bc) grid_vkbss_keypad_pane

0xf3b2,	// (0x0002e0c8) ituss_keypad_pane

0x9a16,	// (0x0002872c) aid_vkbss_key_offset_ParamLimits

0x9a16,	// (0x0002872c) aid_vkbss_key_offset

0x9a22,	// (0x00028738) cell_vkbss_key_pane_ParamLimits

0x9a22,	// (0x00028738) cell_vkbss_key_pane

0x9b83,	// (0x00028899) bg_cell_vkbss_key_g1_ParamLimits

0x9b83,	// (0x00028899) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0002e0d7) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0002e0d7) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0002e0eb) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0002e0eb) cell_vkbss_key_g1

0xf3e9,	// (0x0002e0ff) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0002e0ff) cell_vkbss_key_t1

0x9a38,	// (0x0002874e) cell_ituss_key_pane_ParamLimits

0x9a38,	// (0x0002874e) cell_ituss_key_pane

0xf414,	// (0x0002e12a) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0002e12a) bg_cell_ituss_key_g1

0xf420,	// (0x0002e136) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0002e136) cell_ituss_key_pane_g1

0x9a49,	// (0x0002875f) cell_ituss_key_pane_g2_ParamLimits

0x9a49,	// (0x0002875f) cell_ituss_key_pane_g2

0x0002,

0xfee0,	// (0x0002ebf6) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0002ebf6) cell_ituss_key_pane_g

0x9a75,	// (0x0002878b) cell_ituss_key_t1_ParamLimits

0x9a75,	// (0x0002878b) cell_ituss_key_t1

0x9aaf,	// (0x000287c5) cell_ituss_key_t2_ParamLimits

0x9aaf,	// (0x000287c5) cell_ituss_key_t2

0x9ae0,	// (0x000287f6) cell_ituss_key_t3_ParamLimits

0x9ae0,	// (0x000287f6) cell_ituss_key_t3

0x9aaf,	// (0x000287c5) cell_ituss_key_t4_ParamLimits

0x9aaf,	// (0x000287c5) cell_ituss_key_t4

0x0004,

0xfee7,	// (0x0002ebfd) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002ebfd) cell_ituss_key_t

0xf446,	// (0x0002e15c) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0002e164) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0002e16c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef2,	// (0x0002ec08) cell_vkbss_key_3p_pane_g

0x16ea,	// (0x00020400) bg_popup_fep_char_preview_window_cp02

0x9b23,	// (0x00028839) popup_fep_char_pre_window_t1

0xe8ed,	// (0x0002d603) main_ai5_sk_pane

0xef6c,	// (0x0002dc82) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef78,	// (0x0002dc8e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d1,	// (0x0002b6e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef8d,	// (0x0002dca3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002ebda) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef99,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1b84,	// (0x0002089a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0002e174) main_ai5_sk_pane_g1

0xa1d2,	// (0x00028ee8) popup_query_code_window_g1

0xf371,	// (0x0002e087) popup_fep_vkb_icf_pane

0xf390,	// (0x0002e0a6) popup_fep_vtchi_icf_pane

0xf467,	// (0x0002e17d) bg_icf_pane

0xf473,	// (0x0002e189) list_vkb_icf_pane

0xf482,	// (0x0002e198) bg_icf_pane_cp01

0xf495,	// (0x0002e1ab) vtchi_icf_list_pane

0xf4a5,	// (0x0002e1bb) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0002e1bb) list_vkb_icf_pane_t1

0xf4bc,	// (0x0002e1d2) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0002e1d2) vtchi_icf_list_pane_t1

0xf35b,	// (0x0002e071) popup_fep_ituss_window_ParamLimits

0xf390,	// (0x0002e0a6) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0002e0c8) ituss_keypad_pane_ParamLimits

0x9a0a,	// (0x00028720) ituss_sks_pane

0xf467,	// (0x0002e17d) bg_icf_pane_ParamLimits

0xf337,	// (0x0002e04d) icf_edit_indi_pane_ParamLimits

0xf337,	// (0x0002e04d) icf_edit_indi_pane

0xf473,	// (0x0002e189) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0002e198) bg_icf_pane_cp01_ParamLimits

0xf346,	// (0x0002e05c) icf_edit_indi_pane_cp01_ParamLimits

0xf346,	// (0x0002e05c) icf_edit_indi_pane_cp01

0xf49d,	// (0x0002e1b3) vtchi_query_pane

0xc54e,	// (0x0002b264) icf_edit_indi_pane_g1_ParamLimits

0xc54e,	// (0x0002b264) icf_edit_indi_pane_g1

0xf531,	// (0x0002e247) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0002e247) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002ec20) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002ec20) icf_edit_indi_pane_g

0xf540,	// (0x0002e256) icf_edit_indi_pane_t1

0xf4da,	// (0x0002e1f0) bg_input_focus_pane_cp042

0x1a68,	// (0x0002077e) vtchi_button_pane

0xf4e3,	// (0x0002e1f9) vtchi_query_pane_t1

0xf4f1,	// (0x0002e207) vtchi_query_pane_t2

0xf4ff,	// (0x0002e215) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002ec0f) vtchi_query_pane_t

0x16ea,	// (0x00020400) bg_button_pane_cp13

0xf50d,	// (0x0002e223) vtchi_button_pane_g1

0x9b32,	// (0x00028848) ituss_sks_pane_g1

0x9b3d,	// (0x00028853) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002ec16) ituss_sks_pane_g

0xf515,	// (0x0002e22b) ituss_sks_pane_t1

0xf523,	// (0x0002e239) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002ec1b) ituss_sks_pane_t

0xbd61,	// (0x0002aa77) indicator_nsta_pane_cp_g1

0xbd69,	// (0x0002aa7f) indicator_nsta_pane_cp_g2

0xbd71,	// (0x0002aa87) indicator_nsta_pane_cp_g3

0xbd61,	// (0x0002aa77) indicator_nsta_pane_cp_g4

0xbd69,	// (0x0002aa7f) indicator_nsta_pane_cp_g5

0xbd71,	// (0x0002aa87) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002e7cb) indicator_nsta_pane_cp_g

0xe4ad,	// (0x0002d1c3) cell_graphic2_pane_t2_ParamLimits

0xe4ad,	// (0x0002d1c3) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002ead1) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002ead1) cell_graphic2_pane_t

0xe4da,	// (0x0002d1f0) cell_graphic2_control_pane_t1

0x72da,	// (0x00025ff0) signal_pane_g3_ParamLimits

0x72da,	// (0x00025ff0) signal_pane_g3

0x72ec,	// (0x00026002) signal_pane_g4_ParamLimits

0x72ec,	// (0x00026002) signal_pane_g4

0xf321,	// (0x0002e037) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf321,	// (0x0002e037) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0002e14a) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0002e14a) cell_ituss_key_pane_t1

0x9e19,	// (0x00028b2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e19,	// (0x00028b2f) form_field_data_wide_pane_vc_t2

0x9e2d,	// (0x00028b43) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e2d,	// (0x00028b43) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0002e510) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0002e510) form_field_data_wide_pane_vc_t

0xba29,	// (0x0002a73f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba29,	// (0x0002a73f) form_field_slider_wide_pane_vc_t3

0xbb07,	// (0x0002a81d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb07,	// (0x0002a81d) form_field_popup_wide_pane_vc_t2

0xbb1e,	// (0x0002a834) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb1e,	// (0x0002a834) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0002e7ba) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0002e7ba) form_field_popup_wide_pane_vc_t

0x9814,	// (0x0002852a) aid_fshwr2_btn_pane_ParamLimits

0x9820,	// (0x00028536) aid_fshwr2_syb_pane_ParamLimits

0x9831,	// (0x00028547) aid_fshwr2_txt_pane_ParamLimits

0x1b84,	// (0x0002089a) fshwr2_bg_pane_ParamLimits

0x983d,	// (0x00028553) fshwr2_func_candi_pane_ParamLimits

0x9855,	// (0x0002856b) fshwr2_hwr_syb_pane_ParamLimits

0x986c,	// (0x00028582) fshwr2_icf_pane_ParamLimits

0x6032,	// (0x00024d48) list_double_graphic_pane_vc_g4_ParamLimits

0x6032,	// (0x00024d48) list_double_graphic_pane_vc_g4

0x9a69,	// (0x0002877f) cell_ituss_key_pane_g3_ParamLimits

0x9a69,	// (0x0002877f) cell_ituss_key_pane_g3

0x9b11,	// (0x00028827) cell_ituss_key_t5_ParamLimits

0x9b11,	// (0x00028827) cell_ituss_key_t5

0xf37c,	// (0x0002e092) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
