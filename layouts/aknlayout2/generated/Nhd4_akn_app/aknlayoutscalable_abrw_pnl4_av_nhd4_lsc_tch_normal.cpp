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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000b281 };

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
0x005a,	// (0x0000b2db) Screen

0x0066,	// (0x0000b2e7) application_window_ParamLimits

0x0066,	// (0x0000b2e7) application_window

0x5a85,	// (0x00010d06) screen_g1

0xdb81,	// (0x00018e02) area_bottom_pane_ParamLimits

0xdb81,	// (0x00018e02) area_bottom_pane

0x3f06,	// (0x0000f187) area_top_pane_ParamLimits

0x3f06,	// (0x0000f187) area_top_pane

0x3fa4,	// (0x0000f225) main_pane_ParamLimits

0x3fa4,	// (0x0000f225) main_pane

0x5a8f,	// (0x00010d10) misc_graphics

0x170a,	// (0x0000c98b) battery_pane_ParamLimits

0x170a,	// (0x0000c98b) battery_pane

0x8f31,	// (0x000141b2) bg_status_flat_pane_g8

0x8f39,	// (0x000141ba) bg_status_flat_pane_g9

0x8221,	// (0x000134a2) context_pane_ParamLimits

0x8221,	// (0x000134a2) context_pane

0x1875,	// (0x0000caf6) navi_pane_ParamLimits

0x1875,	// (0x0000caf6) navi_pane

0x18ed,	// (0x0000cb6e) signal_pane_ParamLimits

0x18ed,	// (0x0000cb6e) signal_pane

0x0008,

0xf880,	// (0x0001ab01) bg_status_flat_pane_g

0x197d,	// (0x0000cbfe) status_pane_g1_ParamLimits

0x197d,	// (0x0000cbfe) status_pane_g1

0x1993,	// (0x0000cc14) status_pane_g2_ParamLimits

0x1993,	// (0x0000cc14) status_pane_g2

0x8442,	// (0x000136c3) status_pane_g3_ParamLimits

0x8442,	// (0x000136c3) status_pane_g3

0x0004,

0xf7b3,	// (0x0001aa34) status_pane_g_ParamLimits

0xf7b3,	// (0x0001aa34) status_pane_g

0x199f,	// (0x0000cc20) title_pane_ParamLimits

0x199f,	// (0x0000cc20) title_pane

0x1a02,	// (0x0000cc83) uni_indicator_pane_ParamLimits

0x1a02,	// (0x0000cc83) uni_indicator_pane

0x7ad8,	// (0x00012d59) bg_list_pane_ParamLimits

0x7ad8,	// (0x00012d59) bg_list_pane

0x0fd5,	// (0x0000c256) find_pane

0x0fdd,	// (0x0000c25e) listscroll_app_pane_ParamLimits

0x0fdd,	// (0x0000c25e) listscroll_app_pane

0x7b0c,	// (0x00012d8d) listscroll_form_pane

0x0fe9,	// (0x0000c26a) listscroll_gen_pane_ParamLimits

0x0fe9,	// (0x0000c26a) listscroll_gen_pane

0x7b0c,	// (0x00012d8d) listscroll_set_pane

0x9ad3,	// (0x00014d54) main_idle_act_pane

0x77c0,	// (0x00012a41) main_idle_trad_pane

0x77c0,	// (0x00012a41) main_list_empty_pane

0x7b3a,	// (0x00012dbb) main_midp_pane

0x7b46,	// (0x00012dc7) main_pane_g1_ParamLimits

0x7b46,	// (0x00012dc7) main_pane_g1

0x0ffd,	// (0x0000c27e) popup_ai_message_window_ParamLimits

0x0ffd,	// (0x0000c27e) popup_ai_message_window

0x108e,	// (0x0000c30f) popup_fep_china_uni_window_ParamLimits

0x108e,	// (0x0000c30f) popup_fep_china_uni_window

0x7c58,	// (0x00012ed9) popup_fep_japan_candidate_window_ParamLimits

0x7c58,	// (0x00012ed9) popup_fep_japan_candidate_window

0x7c76,	// (0x00012ef7) popup_fep_japan_predictive_window_ParamLimits

0x7c76,	// (0x00012ef7) popup_fep_japan_predictive_window

0x10e8,	// (0x0000c369) popup_find_window

0x1105,	// (0x0000c386) popup_grid_graphic_window_ParamLimits

0x1105,	// (0x0000c386) popup_grid_graphic_window

0x7cd9,	// (0x00012f5a) popup_large_graphic_colour_window

0x1197,	// (0x0000c418) popup_menu_window_ParamLimits

0x1197,	// (0x0000c418) popup_menu_window

0x1363,	// (0x0000c5e4) popup_note_image_window

0x1329,	// (0x0000c5aa) popup_note_wait_window_ParamLimits

0x1329,	// (0x0000c5aa) popup_note_wait_window

0x137b,	// (0x0000c5fc) popup_note_window_ParamLimits

0x137b,	// (0x0000c5fc) popup_note_window

0x1421,	// (0x0000c6a2) popup_query_code_window_ParamLimits

0x1421,	// (0x0000c6a2) popup_query_code_window

0x7f23,	// (0x000131a4) popup_query_data_code_window_ParamLimits

0x7f23,	// (0x000131a4) popup_query_data_code_window

0x145b,	// (0x0000c6dc) popup_query_data_window_ParamLimits

0x145b,	// (0x0000c6dc) popup_query_data_window

0x14d1,	// (0x0000c752) popup_query_sat_info_window_ParamLimits

0x14d1,	// (0x0000c752) popup_query_sat_info_window

0x1568,	// (0x0000c7e9) popup_snote_single_graphic_window_ParamLimits

0x1568,	// (0x0000c7e9) popup_snote_single_graphic_window

0x1568,	// (0x0000c7e9) popup_snote_single_text_window_ParamLimits

0x1568,	// (0x0000c7e9) popup_snote_single_text_window

0x7fa0,	// (0x00013221) popup_sub_window_general

0x80ce,	// (0x0001334f) popup_window_general_ParamLimits

0x80ce,	// (0x0001334f) popup_window_general

0x80e3,	// (0x00013364) power_save_pane

0xdd03,	// (0x00018f84) control_pane_g1_ParamLimits

0xdd03,	// (0x00018f84) control_pane_g1

0xdd2c,	// (0x00018fad) control_pane_g2_ParamLimits

0xdd2c,	// (0x00018fad) control_pane_g2

0x7a79,	// (0x00012cfa) control_pane_g3_ParamLimits

0x7a79,	// (0x00012cfa) control_pane_g3

0x0007,

0xf79b,	// (0x0001aa1c) control_pane_g_ParamLimits

0xf79b,	// (0x0001aa1c) control_pane_g

0xdd69,	// (0x00018fea) control_pane_t1_ParamLimits

0xdd69,	// (0x00018fea) control_pane_t1

0xddc7,	// (0x00019048) control_pane_t2_ParamLimits

0xddc7,	// (0x00019048) control_pane_t2

0x0002,

0xf7ac,	// (0x0001aa2d) control_pane_t_ParamLimits

0xf7ac,	// (0x0001aa2d) control_pane_t

0x799a,	// (0x00012c1b) navi_navi_volume_pane_cp1

0x79a3,	// (0x00012c24) status_small_icon_pane

0x79ab,	// (0x00012c2c) status_small_pane_g1_ParamLimits

0x79ab,	// (0x00012c2c) status_small_pane_g1

0x79df,	// (0x00012c60) status_small_pane_g2_ParamLimits

0x79df,	// (0x00012c60) status_small_pane_g2

0x79eb,	// (0x00012c6c) status_small_pane_g3_ParamLimits

0x79eb,	// (0x00012c6c) status_small_pane_g3

0x79f7,	// (0x00012c78) status_small_pane_g4_ParamLimits

0x79f7,	// (0x00012c78) status_small_pane_g4

0x7a03,	// (0x00012c84) status_small_pane_g5_ParamLimits

0x7a03,	// (0x00012c84) status_small_pane_g5

0x7a12,	// (0x00012c93) status_small_pane_g6_ParamLimits

0x7a12,	// (0x00012c93) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001aa0b) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001aa0b) status_small_pane_g

0x7a42,	// (0x00012cc3) status_small_pane_t1

0x7a65,	// (0x00012ce6) status_small_wait_pane_ParamLimits

0x7a65,	// (0x00012ce6) status_small_wait_pane

0x0c48,	// (0x0000bec9) aid_levels_signal_ParamLimits

0x0c48,	// (0x0000bec9) aid_levels_signal

0x0c60,	// (0x0000bee1) signal_pane_g1_ParamLimits

0x0c60,	// (0x0000bee1) signal_pane_g1

0x0c7b,	// (0x0000befc) signal_pane_g2_ParamLimits

0x0c7b,	// (0x0000befc) signal_pane_g2

0x0003,

0xf71b,	// (0x0001a99c) signal_pane_g_ParamLimits

0xf71b,	// (0x0001a99c) signal_pane_g

0x7209,	// (0x0001248a) context_pane_g1

0x0217,	// (0x0000b498) title_pane_g1

0x024e,	// (0x0000b4cf) title_pane_t1

0x5b37,	// (0x00010db8) title_pane_t2

0x5b5d,	// (0x00010dde) title_pane_t3

0x0002,

0xf56f,	// (0x0001a7f0) title_pane_t

0x1a2a,	// (0x0000ccab) aid_levels_battery_ParamLimits

0x1a2a,	// (0x0000ccab) aid_levels_battery

0x1a46,	// (0x0000ccc7) battery_pane_g1_ParamLimits

0x1a46,	// (0x0000ccc7) battery_pane_g1

0x1a63,	// (0x0000cce4) battery_pane_g2_ParamLimits

0x1a63,	// (0x0000cce4) battery_pane_g2

0x0001,

0xf7be,	// (0x0001aa3f) battery_pane_g_ParamLimits

0xf7be,	// (0x0001aa3f) battery_pane_g

0x1e35,	// (0x0000d0b6) uni_indicator_pane_g1

0x1e4a,	// (0x0000d0cb) uni_indicator_pane_g2

0x987a,	// (0x00014afb) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001aba9) uni_indicator_pane_g

0x7630,	// (0x000128b1) navi_icon_pane_ParamLimits

0x7630,	// (0x000128b1) navi_icon_pane

0x7577,	// (0x000127f8) navi_midp_pane

0x764c,	// (0x000128cd) navi_navi_pane

0x7656,	// (0x000128d7) navi_text_pane_ParamLimits

0x7656,	// (0x000128d7) navi_text_pane

0x5a85,	// (0x00010d06) status_small_wait_pane_g1

0x5f9a,	// (0x0001121b) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001aba4) status_small_wait_pane_g

0x9572,	// (0x000147f3) navi_navi_icon_text_pane

0x957a,	// (0x000147fb) navi_navi_pane_g1_ParamLimits

0x957a,	// (0x000147fb) navi_navi_pane_g1

0x958c,	// (0x0001480d) navi_navi_pane_g2_ParamLimits

0x958c,	// (0x0001480d) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001ab72) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001ab72) navi_navi_pane_g

0x959e,	// (0x0001481f) navi_navi_tabs_pane

0x95a7,	// (0x00014828) navi_navi_text_pane

0x9572,	// (0x000147f3) navi_navi_volume_pane

0x954e,	// (0x000147cf) navi_text_pane_t1

0x9542,	// (0x000147c3) navi_icon_pane_g1

0x94a1,	// (0x00014722) navi_navi_text_pane_t1

0xe014,	// (0x00019295) navi_navi_volume_pane_g1

0xe01c,	// (0x0001929d) volume_small_pane

0x1d53,	// (0x0000cfd4) navi_navi_icon_text_pane_g1

0x1d5b,	// (0x0000cfdc) navi_navi_icon_text_pane_t1

0x764c,	// (0x000128cd) navi_tabs_2_long_pane

0x764c,	// (0x000128cd) navi_tabs_2_pane

0x764c,	// (0x000128cd) navi_tabs_3_long_pane

0x764c,	// (0x000128cd) navi_tabs_3_pane

0x764c,	// (0x000128cd) navi_tabs_4_pane

0xdff4,	// (0x00019275) tabs_2_active_pane_ParamLimits

0xdff4,	// (0x00019275) tabs_2_active_pane

0xe004,	// (0x00019285) tabs_2_passive_pane_ParamLimits

0xe004,	// (0x00019285) tabs_2_passive_pane

0xdfc2,	// (0x00019243) tabs_3_active_pane_ParamLimits

0xdfc2,	// (0x00019243) tabs_3_active_pane

0xdfd2,	// (0x00019253) tabs_3_passive_pane_ParamLimits

0xdfd2,	// (0x00019253) tabs_3_passive_pane

0xdfe3,	// (0x00019264) tabs_3_passive_pane_cp_ParamLimits

0xdfe3,	// (0x00019264) tabs_3_passive_pane_cp

0xdf7e,	// (0x000191ff) tabs_4_active_pane_ParamLimits

0xdf7e,	// (0x000191ff) tabs_4_active_pane

0xdf8f,	// (0x00019210) tabs_4_passive_pane_ParamLimits

0xdf8f,	// (0x00019210) tabs_4_passive_pane

0xdfa0,	// (0x00019221) tabs_4_passive_pane_cp_ParamLimits

0xdfa0,	// (0x00019221) tabs_4_passive_pane_cp

0xdfb1,	// (0x00019232) tabs_4_passive_pane_cp2_ParamLimits

0xdfb1,	// (0x00019232) tabs_4_passive_pane_cp2

0xdf5e,	// (0x000191df) tabs_2_long_active_pane_ParamLimits

0xdf5e,	// (0x000191df) tabs_2_long_active_pane

0xdf6e,	// (0x000191ef) tabs_2_long_passive_pane_ParamLimits

0xdf6e,	// (0x000191ef) tabs_2_long_passive_pane

0xdf29,	// (0x000191aa) tabs_3_long_active_pane_ParamLimits

0xdf29,	// (0x000191aa) tabs_3_long_active_pane

0xdf3a,	// (0x000191bb) tabs_3_long_passive_pane_ParamLimits

0xdf3a,	// (0x000191bb) tabs_3_long_passive_pane

0xdf4d,	// (0x000191ce) tabs_3_long_passive_pane_cp_ParamLimits

0xdf4d,	// (0x000191ce) tabs_3_long_passive_pane_cp

0x49db,	// (0x0000fc5c) volume_small_pane_g1

0xded8,	// (0x00019159) volume_small_pane_g2

0xdee1,	// (0x00019162) volume_small_pane_g3

0xdeea,	// (0x0001916b) volume_small_pane_g4

0xdef3,	// (0x00019174) volume_small_pane_g5

0xdefc,	// (0x0001917d) volume_small_pane_g6

0xdf05,	// (0x00019186) volume_small_pane_g7

0xdf0e,	// (0x0001918f) volume_small_pane_g8

0xdf17,	// (0x00019198) volume_small_pane_g9

0xdf20,	// (0x000191a1) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001ab3e) volume_small_pane_g

0x5e04,	// (0x00011085) bg_active_tab_pane_cp2_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp2

0x02da,	// (0x0000b55b) tabs_3_active_pane_g1

0x02e2,	// (0x0000b563) tabs_3_active_pane_t1

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp2_ParamLimits

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp2

0x02da,	// (0x0000b55b) tabs_3_passive_pane_g1

0x02e2,	// (0x0000b563) tabs_3_passive_pane_t1

0x5e04,	// (0x00011085) bg_active_tab_pane_cp3_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp3

0x02f4,	// (0x0000b575) tabs_4_active_pane_g1

0x02fc,	// (0x0000b57d) tabs_4_active_pane_t1

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp3_ParamLimits

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp3

0x02f4,	// (0x0000b575) tabs_4_1_passive_pane_g1

0x02fc,	// (0x0000b57d) tabs_4_1_passive_pane_t1

0x7b3a,	// (0x00012dbb) list_highlight_pane_cp2

0x1ee9,	// (0x0000d16a) list_set_pane_ParamLimits

0x1ee9,	// (0x0000d16a) list_set_pane

0x1f83,	// (0x0000d204) main_pane_set_t1_ParamLimits

0x1f83,	// (0x0000d204) main_pane_set_t1

0x1fa3,	// (0x0000d224) main_pane_set_t2_ParamLimits

0x1fa3,	// (0x0000d224) main_pane_set_t2

0x1fb7,	// (0x0000d238) main_pane_set_t3_ParamLimits

0x1fb7,	// (0x0000d238) main_pane_set_t3

0x1fc9,	// (0x0000d24a) main_pane_set_t4_ParamLimits

0x1fc9,	// (0x0000d24a) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001ac0e) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001ac0e) main_pane_set_t

0x1fdb,	// (0x0000d25c) setting_code_pane

0x1fe3,	// (0x0000d264) setting_slider_graphic_pane

0x1fe3,	// (0x0000d264) setting_slider_pane

0x1fe3,	// (0x0000d264) setting_text_pane

0x1fe3,	// (0x0000d264) setting_volume_pane

0x41d5,	// (0x0000f456) volume_set_pane

0x5b6f,	// (0x00010df0) bg_set_opt_pane_cp

0x41dd,	// (0x0000f45e) setting_slider_pane_t1

0x41f6,	// (0x0000f477) setting_slider_pane_t2

0x420f,	// (0x0000f490) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001a7f7) setting_slider_pane_t

0x4226,	// (0x0000f4a7) slider_set_pane

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp2

0x5bb1,	// (0x00010e32) setting_slider_graphic_pane_g1

0x423c,	// (0x0000f4bd) setting_slider_graphic_pane_t1

0x424b,	// (0x0000f4cc) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0001a7fe) setting_slider_graphic_pane_t

0x425a,	// (0x0000f4db) slider_set_pane_cp

0x5a8f,	// (0x00010d10) input_focus_pane_cp1

0x9aba,	// (0x00014d3b) list_set_text_pane

0x5a85,	// (0x00010d06) setting_text_pane_g1

0x5a8f,	// (0x00010d10) input_focus_pane_cp2

0x5a85,	// (0x00010d06) setting_code_pane_g1

0x5bba,	// (0x00010e3b) setting_code_pane_t1

0x5bc8,	// (0x00010e49) set_text_pane_t1_ParamLimits

0x5bc8,	// (0x00010e49) set_text_pane_t1

0x6a84,	// (0x00011d05) set_opt_bg_pane_g1

0x6a8c,	// (0x00011d0d) set_opt_bg_pane_g2

0x9a9a,	// (0x00014d1b) set_opt_bg_pane_g3

0x6a9c,	// (0x00011d1d) set_opt_bg_pane_g4

0x6aa4,	// (0x00011d25) set_opt_bg_pane_g5

0x6aac,	// (0x00011d2d) set_opt_bg_pane_g6

0x9aa2,	// (0x00014d23) set_opt_bg_pane_g7

0x9aaa,	// (0x00014d2b) set_opt_bg_pane_g8

0x9ab2,	// (0x00014d33) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001abfb) set_opt_bg_pane_g

0x9a8d,	// (0x00014d0e) slider_set_pane_g1

0x4ba9,	// (0x0000fe2a) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001abec) slider_set_pane_g

0x4b45,	// (0x0000fdc6) volume_set_pane_g1

0x4b4d,	// (0x0000fdce) volume_set_pane_g2

0x4b55,	// (0x0000fdd6) volume_set_pane_g3

0x4b5d,	// (0x0000fdde) volume_set_pane_g4

0x4b65,	// (0x0000fde6) volume_set_pane_g5

0x4b6d,	// (0x0000fdee) volume_set_pane_g6

0x4b75,	// (0x0000fdf6) volume_set_pane_g7

0x4b7d,	// (0x0000fdfe) volume_set_pane_g8

0x4b85,	// (0x0000fe06) volume_set_pane_g9

0x4b8d,	// (0x0000fe0e) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001abc4) volume_set_pane_g

0x030e,	// (0x0000b58f) indicator_pane_ParamLimits

0x030e,	// (0x0000b58f) indicator_pane

0x0336,	// (0x0000b5b7) main_idle_pane_g2_ParamLimits

0x0336,	// (0x0000b5b7) main_idle_pane_g2

0x036e,	// (0x0000b5ef) main_pane_idle_g1_ParamLimits

0x036e,	// (0x0000b5ef) main_pane_idle_g1

0x5c23,	// (0x00010ea4) popup_clock_digital_analogue_window_ParamLimits

0x5c23,	// (0x00010ea4) popup_clock_digital_analogue_window

0x0395,	// (0x0000b616) soft_indicator_pane_ParamLimits

0x0395,	// (0x0000b616) soft_indicator_pane

0x03af,	// (0x0000b630) wallpaper_pane_ParamLimits

0x03af,	// (0x0000b630) wallpaper_pane

0x5a85,	// (0x00010d06) wallpaper_pane_g1

0x03c1,	// (0x0000b642) indicator_pane_g1_ParamLimits

0x03c1,	// (0x0000b642) indicator_pane_g1

0x9f8d,	// (0x0001520e) navi_navi_icon_text_pane_srt_g1

0x5c75,	// (0x00010ef6) soft_indicator_pane_t1

0x5c8f,	// (0x00010f10) aid_ps_area_pane

0x03da,	// (0x0000b65b) aid_ps_clock_pane

0x5cae,	// (0x00010f2f) aid_ps_indicator_pane

0x5cba,	// (0x00010f3b) indicator_ps_pane_ParamLimits

0x5cba,	// (0x00010f3b) indicator_ps_pane

0x5cc9,	// (0x00010f4a) power_save_pane_g1_ParamLimits

0x5cc9,	// (0x00010f4a) power_save_pane_g1

0x5cd5,	// (0x00010f56) power_save_pane_g2_ParamLimits

0x5cd5,	// (0x00010f56) power_save_pane_g2

0x3dfa,	// (0x0000f07b) aid_navinavi_width_pane

0x5c8f,	// (0x00010f10) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0001a803) power_save_pane_g_ParamLimits

0xf582,	// (0x0001a803) power_save_pane_g

0x5ce3,	// (0x00010f64) power_save_pane_t1_ParamLimits

0x5ce3,	// (0x00010f64) power_save_pane_t1

0x03da,	// (0x0000b65b) aid_ps_clock_pane_ParamLimits

0x5cae,	// (0x00010f2f) aid_ps_indicator_pane_ParamLimits

0x5cf5,	// (0x00010f76) power_save_pane_t4_ParamLimits

0x5cf5,	// (0x00010f76) power_save_pane_t4

0x0001,

0xf587,	// (0x0001a808) power_save_pane_t_ParamLimits

0xf587,	// (0x0001a808) power_save_pane_t

0x5d1f,	// (0x00010fa0) power_save_t3_ParamLimits

0x5d1f,	// (0x00010fa0) power_save_t3

0x5d0a,	// (0x00010f8b) power_save_t2_ParamLimits

0x5d0a,	// (0x00010f8b) power_save_t2

0x5d34,	// (0x00010fb5) indicator_ps_pane_g1

0x03e8,	// (0x0000b669) ai_gene_pane_ParamLimits

0x03e8,	// (0x0000b669) ai_gene_pane

0x03ff,	// (0x0000b680) ai_links_pane_ParamLimits

0x03ff,	// (0x0000b680) ai_links_pane

0x0417,	// (0x0000b698) indicator_pane_cp1_ParamLimits

0x0417,	// (0x0000b698) indicator_pane_cp1

0x0426,	// (0x0000b6a7) main_pane_idle_g1_cp_ParamLimits

0x0426,	// (0x0000b6a7) main_pane_idle_g1_cp

0x5d6d,	// (0x00010fee) popup_ai_links_title_window

0x043e,	// (0x0000b6bf) soft_indicator_pane_cp1_ParamLimits

0x043e,	// (0x0000b6bf) soft_indicator_pane_cp1

0x983d,	// (0x00014abe) ai_links_pane_g1

0x9846,	// (0x00014ac7) grid_ai_links_pane

0x1e2c,	// (0x0000d0ad) ai_gene_pane_1

0x982b,	// (0x00014aac) ai_gene_pane_2

0x9834,	// (0x00014ab5) list_highlight_pane_cp4

0x1e08,	// (0x0000d089) cell_ai_link_pane_ParamLimits

0x1e08,	// (0x0000d089) cell_ai_link_pane

0x97fc,	// (0x00014a7d) cell_ai_link_pane_g1

0x5f9a,	// (0x0001121b) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001ab9f) cell_ai_link_pane_g

0x5a8f,	// (0x00010d10) grid_highlight_cp2

0x5a8f,	// (0x00010d10) bg_popup_sub_pane_cp1

0x5d90,	// (0x00011011) popup_ai_links_title_window_t1

0x974a,	// (0x000149cb) ai_gene_pane_1_g1_ParamLimits

0x974a,	// (0x000149cb) ai_gene_pane_1_g1

0x9756,	// (0x000149d7) ai_gene_pane_1_g2_ParamLimits

0x9756,	// (0x000149d7) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001ab95) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001ab95) ai_gene_pane_1_g

0x9763,	// (0x000149e4) ai_gene_pane_1_t1_ParamLimits

0x9763,	// (0x000149e4) ai_gene_pane_1_t1

0x9797,	// (0x00014a18) grid_ai_soft_ind_pane

0x9735,	// (0x000149b6) ai_gene_pane_2_t1_ParamLimits

0x9735,	// (0x000149b6) ai_gene_pane_2_t1

0x0452,	// (0x0000b6d3) main_pane_empty_t1_ParamLimits

0x0452,	// (0x0000b6d3) main_pane_empty_t1

0x046a,	// (0x0000b6eb) main_pane_empty_t2_ParamLimits

0x046a,	// (0x0000b6eb) main_pane_empty_t2

0x047f,	// (0x0000b700) main_pane_empty_t3_ParamLimits

0x047f,	// (0x0000b700) main_pane_empty_t3

0x0491,	// (0x0000b712) main_pane_empty_t4_ParamLimits

0x0491,	// (0x0000b712) main_pane_empty_t4

0x04a3,	// (0x0000b724) main_pane_empty_t5_ParamLimits

0x04a3,	// (0x0000b724) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0001a80d) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0001a80d) main_pane_empty_t

0x6b7d,	// (0x00011dfe) bg_popup_window_pane_ParamLimits

0x6b7d,	// (0x00011dfe) bg_popup_window_pane

0x94af,	// (0x00014730) find_popup_pane_cp2_ParamLimits

0x94af,	// (0x00014730) find_popup_pane_cp2

0x94bb,	// (0x0001473c) heading_pane_ParamLimits

0x94bb,	// (0x0001473c) heading_pane

0x5a8f,	// (0x00010d10) bg_popup_sub_pane

0x1d78,	// (0x0000cff9) bg_popup_window_pane_g1_ParamLimits

0x1d78,	// (0x0000cff9) bg_popup_window_pane_g1

0x1d87,	// (0x0000d008) bg_popup_window_pane_g2_ParamLimits

0x1d87,	// (0x0000d008) bg_popup_window_pane_g2

0x1d93,	// (0x0000d014) bg_popup_window_pane_g3_ParamLimits

0x1d93,	// (0x0000d014) bg_popup_window_pane_g3

0x1d9f,	// (0x0000d020) bg_popup_window_pane_g4_ParamLimits

0x1d9f,	// (0x0000d020) bg_popup_window_pane_g4

0x1dae,	// (0x0000d02f) bg_popup_window_pane_g5_ParamLimits

0x1dae,	// (0x0000d02f) bg_popup_window_pane_g5

0x1dbe,	// (0x0000d03f) bg_popup_window_pane_g6_ParamLimits

0x1dbe,	// (0x0000d03f) bg_popup_window_pane_g6

0x1dca,	// (0x0000d04b) bg_popup_window_pane_g7_ParamLimits

0x1dca,	// (0x0000d04b) bg_popup_window_pane_g7

0x1dd9,	// (0x0000d05a) bg_popup_window_pane_g8_ParamLimits

0x1dd9,	// (0x0000d05a) bg_popup_window_pane_g8

0x1de8,	// (0x0000d069) bg_popup_window_pane_g9_ParamLimits

0x1de8,	// (0x0000d069) bg_popup_window_pane_g9

0x9495,	// (0x00014716) bg_popup_window_pane_g10_ParamLimits

0x9495,	// (0x00014716) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001ab5d) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001ab5d) bg_popup_window_pane_g

0x93be,	// (0x0001463f) bg_popup_heading_pane_ParamLimits

0x93be,	// (0x0001463f) bg_popup_heading_pane

0x4c31,	// (0x0000feb2) tabs_4_passive_pane_cp_srt_ParamLimits

0x4c31,	// (0x0000feb2) tabs_4_passive_pane_cp_srt

0x4c43,	// (0x0000fec4) tabs_4_passive_pane_srt_ParamLimits

0x93d2,	// (0x00014653) heading_pane_g2

0x4c43,	// (0x0000fec4) tabs_4_passive_pane_srt

0x8713,	// (0x00013994) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8713,	// (0x00013994) bg_passive_tab_pane_cp3_srt

0x93da,	// (0x0001465b) heading_pane_t1_ParamLimits

0x93da,	// (0x0001465b) heading_pane_t1

0x93f1,	// (0x00014672) heading_pane_t2_ParamLimits

0x93f1,	// (0x00014672) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001ab58) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001ab58) heading_pane_t

0x8ef9,	// (0x0001417a) bg_popup_heading_pane_g1

0x8fa8,	// (0x00014229) bg_popup_heading_pane_g2

0x8fb2,	// (0x00014233) bg_popup_heading_pane_g3

0x8fbc,	// (0x0001423d) bg_popup_heading_pane_g4

0x8fc6,	// (0x00014247) bg_popup_heading_pane_g5

0x8fd0,	// (0x00014251) bg_popup_heading_pane_g6

0x8fd8,	// (0x00014259) bg_popup_heading_pane_g7

0x8fe0,	// (0x00014261) bg_popup_heading_pane_g8

0x8fea,	// (0x0001426b) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001ab14) bg_popup_heading_pane_g

0x85f9,	// (0x0001387a) bg_popup_sub_pane_g1

0x8609,	// (0x0001388a) bg_popup_sub_pane_g2

0x8601,	// (0x00013882) bg_popup_sub_pane_g3

0x8619,	// (0x0001389a) bg_popup_sub_pane_g4

0x8611,	// (0x00013892) bg_popup_sub_pane_g5

0x8621,	// (0x000138a2) bg_popup_sub_pane_g6

0x8629,	// (0x000138aa) bg_popup_sub_pane_g7

0x8639,	// (0x000138ba) bg_popup_sub_pane_g8

0x8631,	// (0x000138b2) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001aaee) bg_popup_sub_pane_g

0x5e04,	// (0x00011085) bg_popup_window_pane_cp5_ParamLimits

0x5e04,	// (0x00011085) bg_popup_window_pane_cp5

0x5e20,	// (0x000110a1) popup_note_window_g1_ParamLimits

0x5e20,	// (0x000110a1) popup_note_window_g1

0x5e2c,	// (0x000110ad) popup_note_window_t1_ParamLimits

0x5e2c,	// (0x000110ad) popup_note_window_t1

0x5e3e,	// (0x000110bf) popup_note_window_t2_ParamLimits

0x5e3e,	// (0x000110bf) popup_note_window_t2

0x5e50,	// (0x000110d1) popup_note_window_t3_ParamLimits

0x5e50,	// (0x000110d1) popup_note_window_t3

0x5e62,	// (0x000110e3) popup_note_window_t4_ParamLimits

0x5e62,	// (0x000110e3) popup_note_window_t4

0x5e8a,	// (0x0001110b) popup_note_window_t5_ParamLimits

0x5e8a,	// (0x0001110b) popup_note_window_t5

0x0004,

0xf597,	// (0x0001a818) popup_note_window_t_ParamLimits

0xf597,	// (0x0001a818) popup_note_window_t

0x5eae,	// (0x0001112f) bg_popup_window_pane_cp6_ParamLimits

0x5eae,	// (0x0001112f) bg_popup_window_pane_cp6

0x8e6d,	// (0x000140ee) popup_note_image_window_g1_ParamLimits

0x8e6d,	// (0x000140ee) popup_note_image_window_g1

0x8e79,	// (0x000140fa) popup_note_image_window_g2_ParamLimits

0x8e79,	// (0x000140fa) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001aae2) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001aae2) popup_note_image_window_g

0x8e92,	// (0x00014113) popup_note_image_window_t1_ParamLimits

0x8e92,	// (0x00014113) popup_note_image_window_t1

0x8eab,	// (0x0001412c) popup_note_image_window_t2_ParamLimits

0x8eab,	// (0x0001412c) popup_note_image_window_t2

0x8ec4,	// (0x00014145) popup_note_image_window_t3_ParamLimits

0x8ec4,	// (0x00014145) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001aae7) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001aae7) popup_note_image_window_t

0x8d2e,	// (0x00013faf) bg_popup_window_pane_cp7_ParamLimits

0x8d2e,	// (0x00013faf) bg_popup_window_pane_cp7

0x8d5e,	// (0x00013fdf) popup_note_wait_window_g1_ParamLimits

0x8d5e,	// (0x00013fdf) popup_note_wait_window_g1

0x8d6a,	// (0x00013feb) popup_note_wait_window_g2_ParamLimits

0x8d6a,	// (0x00013feb) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001aad0) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001aad0) popup_note_wait_window_g

0x8d82,	// (0x00014003) popup_note_wait_window_t1_ParamLimits

0x8d82,	// (0x00014003) popup_note_wait_window_t1

0x8da9,	// (0x0001402a) popup_note_wait_window_t2_ParamLimits

0x8da9,	// (0x0001402a) popup_note_wait_window_t2

0x8dc6,	// (0x00014047) popup_note_wait_window_t3_ParamLimits

0x8dc6,	// (0x00014047) popup_note_wait_window_t3

0x8dd9,	// (0x0001405a) popup_note_wait_window_t4_ParamLimits

0x8dd9,	// (0x0001405a) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001aad7) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001aad7) popup_note_wait_window_t

0x8dfe,	// (0x0001407f) wait_bar_pane_ParamLimits

0x8dfe,	// (0x0001407f) wait_bar_pane

0x5a8f,	// (0x00010d10) wait_anim_pane

0x5a8f,	// (0x00010d10) wait_border_pane

0x5a85,	// (0x00010d06) wait_anim_pane_g1

0x5a85,	// (0x00010d06) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0001a997) wait_anim_pane_g

0x8cd2,	// (0x00013f53) wait_border_pane_g1

0x8cdd,	// (0x00013f5e) wait_border_pane_g2

0x8ce6,	// (0x00013f67) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001aac9) wait_border_pane_g

0x8b42,	// (0x00013dc3) bg_popup_window_pane_cp16_ParamLimits

0x8b42,	// (0x00013dc3) bg_popup_window_pane_cp16

0x8c42,	// (0x00013ec3) indicator_popup_pane_cp4_ParamLimits

0x8c42,	// (0x00013ec3) indicator_popup_pane_cp4

0x8c56,	// (0x00013ed7) popup_query_data_window_t1_ParamLimits

0x8c56,	// (0x00013ed7) popup_query_data_window_t1

0x8c68,	// (0x00013ee9) popup_query_data_window_t2_ParamLimits

0x8c68,	// (0x00013ee9) popup_query_data_window_t2

0x8c81,	// (0x00013f02) popup_query_data_window_t3_ParamLimits

0x8c81,	// (0x00013f02) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001aac2) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001aac2) popup_query_data_window_t

0x8c9b,	// (0x00013f1c) query_popup_data_pane_ParamLimits

0x8c9b,	// (0x00013f1c) query_popup_data_pane

0x8caf,	// (0x00013f30) query_popup_data_pane_cp1_ParamLimits

0x8caf,	// (0x00013f30) query_popup_data_pane_cp1

0x8b42,	// (0x00013dc3) bg_popup_window_pane_cp10_ParamLimits

0x8b42,	// (0x00013dc3) bg_popup_window_pane_cp10

0x8b74,	// (0x00013df5) indicator_popup_pane_ParamLimits

0x8b74,	// (0x00013df5) indicator_popup_pane

0x8b96,	// (0x00013e17) popup_query_code_window_t1_ParamLimits

0x8b96,	// (0x00013e17) popup_query_code_window_t1

0x8bb0,	// (0x00013e31) popup_query_code_window_t2_ParamLimits

0x8bb0,	// (0x00013e31) popup_query_code_window_t2

0x8bf9,	// (0x00013e7a) popup_query_code_window_t3_ParamLimits

0x8bf9,	// (0x00013e7a) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001aabb) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001aabb) popup_query_code_window_t

0x8c28,	// (0x00013ea9) query_popup_pane_ParamLimits

0x8c28,	// (0x00013ea9) query_popup_pane

0x5eae,	// (0x0001112f) bg_popup_window_pane_cp15_ParamLimits

0x5eae,	// (0x0001112f) bg_popup_window_pane_cp15

0x5ecc,	// (0x0001114d) indicator_popup_pane_cp1_ParamLimits

0x5ecc,	// (0x0001114d) indicator_popup_pane_cp1

0x5edf,	// (0x00011160) indicator_popup_pane_cp2_ParamLimits

0x5edf,	// (0x00011160) indicator_popup_pane_cp2

0x5ef2,	// (0x00011173) popup_query_data_code_window_g1_ParamLimits

0x5ef2,	// (0x00011173) popup_query_data_code_window_g1

0x5f05,	// (0x00011186) popup_query_data_code_window_t1_ParamLimits

0x5f05,	// (0x00011186) popup_query_data_code_window_t1

0x5f17,	// (0x00011198) popup_query_data_code_window_t2_ParamLimits

0x5f17,	// (0x00011198) popup_query_data_code_window_t2

0x5f29,	// (0x000111aa) popup_query_data_code_window_t3_ParamLimits

0x5f29,	// (0x000111aa) popup_query_data_code_window_t3

0x5f3f,	// (0x000111c0) popup_query_data_code_window_t4_ParamLimits

0x5f3f,	// (0x000111c0) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0001a823) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0001a823) popup_query_data_code_window_t

0x48ee,	// (0x0000fb6f) list_single_midp_graphic_pane_g3

0x5f57,	// (0x000111d8) query_popup_data_pane_cp2_ParamLimits

0x5f6a,	// (0x000111eb) query_popup_pane_cp2_ParamLimits

0x5f6a,	// (0x000111eb) query_popup_pane_cp2

0x5a8f,	// (0x00010d10) bg_popup_window_pane_cp11

0x8b3a,	// (0x00013dbb) heading_pane_cp5

0x6052,	// (0x000112d3) listscroll_popup_info_pane

0x5a8f,	// (0x00010d10) input_focus_pane_cp3

0x5f7d,	// (0x000111fe) query_popup_pane_t1

0x5f8b,	// (0x0001120c) list_popup_info_pane_ParamLimits

0x5f8b,	// (0x0001120c) list_popup_info_pane

0x5f9a,	// (0x0001121b) listscroll_popup_info_pane_g1

0x5fa2,	// (0x00011223) scroll_pane_cp7

0x5fac,	// (0x0001122d) popup_info_list_pane_t1_ParamLimits

0x5fac,	// (0x0001122d) popup_info_list_pane_t1

0x5fc6,	// (0x00011247) popup_info_list_pane_t2_ParamLimits

0x5fc6,	// (0x00011247) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0001a82c) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0001a82c) popup_info_list_pane_t

0x5a8f,	// (0x00010d10) bg_popup_window_pane_cp12

0x9fa7,	// (0x00015228) find_popup_pane

0x5b6f,	// (0x00010df0) bg_popup_window_pane_cp3

0x5fe0,	// (0x00011261) heading_pane_cp3

0x5fec,	// (0x0001126d) listscroll_popup_graphic_pane

0x5a8f,	// (0x00010d10) bg_popup_window_pane_cp4

0x0505,	// (0x0000b786) heading_pane_cp4

0x6052,	// (0x000112d3) listscroll_popup_colour_pane

0x050d,	// (0x0000b78e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x050d,	// (0x0000b78e) cell_large_graphic_colour_none_popup_pane

0x0521,	// (0x0000b7a2) grid_large_graphic_colour_popup_pane_ParamLimits

0x0521,	// (0x0000b7a2) grid_large_graphic_colour_popup_pane

0x0545,	// (0x0000b7c6) listscroll_popup_colour_pane_g1_ParamLimits

0x0545,	// (0x0000b7c6) listscroll_popup_colour_pane_g1

0x055c,	// (0x0000b7dd) listscroll_popup_colour_pane_g2_ParamLimits

0x055c,	// (0x0000b7dd) listscroll_popup_colour_pane_g2

0x0573,	// (0x0000b7f4) listscroll_popup_colour_pane_g3_ParamLimits

0x0573,	// (0x0000b7f4) listscroll_popup_colour_pane_g3

0x0583,	// (0x0000b804) listscroll_popup_colour_pane_g4_ParamLimits

0x0583,	// (0x0000b804) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0001a831) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0001a831) listscroll_popup_colour_pane_g

0x60df,	// (0x00011360) scroll_pane_cp6_ParamLimits

0x60df,	// (0x00011360) scroll_pane_cp6

0x0592,	// (0x0000b813) cell_large_graphic_colour_popup_pane_ParamLimits

0x0592,	// (0x0000b813) cell_large_graphic_colour_popup_pane

0x6110,	// (0x00011391) cell_large_graphic_colour_none_popup_pane_t1

0x5a8f,	// (0x00010d10) grid_highlight_pane_cp5

0x611f,	// (0x000113a0) cell_large_graphic_colour_popup_pane_g1

0x6127,	// (0x000113a8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0001a83a) cell_large_graphic_colour_popup_pane_g

0x612f,	// (0x000113b0) cell_large_graphic_colour_popup_pane_g2_copy1

0x6138,	// (0x000113b9) grid_highlight_pane_cp4

0x6140,	// (0x000113c1) bg_popup_window_pane_cp8_ParamLimits

0x6140,	// (0x000113c1) bg_popup_window_pane_cp8

0x615b,	// (0x000113dc) popup_snote_single_text_window_g1_ParamLimits

0x615b,	// (0x000113dc) popup_snote_single_text_window_g1

0x616d,	// (0x000113ee) popup_snote_single_text_window_t1_ParamLimits

0x616d,	// (0x000113ee) popup_snote_single_text_window_t1

0x6180,	// (0x00011401) popup_snote_single_text_window_t2_ParamLimits

0x6180,	// (0x00011401) popup_snote_single_text_window_t2

0x6193,	// (0x00011414) popup_snote_single_text_window_t3_ParamLimits

0x6193,	// (0x00011414) popup_snote_single_text_window_t3

0x61cc,	// (0x0001144d) popup_snote_single_text_window_t4_ParamLimits

0x61cc,	// (0x0001144d) popup_snote_single_text_window_t4

0x6200,	// (0x00011481) popup_snote_single_text_window_t5_ParamLimits

0x6200,	// (0x00011481) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0001a83f) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0001a83f) popup_snote_single_text_window_t

0x622f,	// (0x000114b0) bg_popup_window_pane_cp9_ParamLimits

0x622f,	// (0x000114b0) bg_popup_window_pane_cp9

0x615b,	// (0x000113dc) popup_snote_single_graphic_window_g1_ParamLimits

0x615b,	// (0x000113dc) popup_snote_single_graphic_window_g1

0x623d,	// (0x000114be) popup_snote_single_graphic_window_g2_ParamLimits

0x623d,	// (0x000114be) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0001a84a) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0001a84a) popup_snote_single_graphic_window_g

0x6249,	// (0x000114ca) popup_snote_single_graphic_window_t1_ParamLimits

0x6249,	// (0x000114ca) popup_snote_single_graphic_window_t1

0x625c,	// (0x000114dd) popup_snote_single_graphic_window_t2_ParamLimits

0x625c,	// (0x000114dd) popup_snote_single_graphic_window_t2

0x626f,	// (0x000114f0) popup_snote_single_graphic_window_t3_ParamLimits

0x626f,	// (0x000114f0) popup_snote_single_graphic_window_t3

0x62a8,	// (0x00011529) popup_snote_single_graphic_window_t4_ParamLimits

0x62a8,	// (0x00011529) popup_snote_single_graphic_window_t4

0x62dc,	// (0x0001155d) popup_snote_single_graphic_window_t5_ParamLimits

0x62dc,	// (0x0001155d) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0001a84f) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0001a84f) popup_snote_single_graphic_window_t

0x9ee7,	// (0x00015168) grid_graphic_popup_pane_ParamLimits

0x9ee7,	// (0x00015168) grid_graphic_popup_pane

0x9f13,	// (0x00015194) listscroll_popup_graphic_pane_g1_ParamLimits

0x9f13,	// (0x00015194) listscroll_popup_graphic_pane_g1

0x212b,	// (0x0000d3ac) listscroll_popup_graphic_pane_g2_ParamLimits

0x212b,	// (0x0000d3ac) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001ac38) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001ac38) listscroll_popup_graphic_pane_g

0x9f3b,	// (0x000151bc) scroll_pane_cp5

0x20ee,	// (0x0000d36f) cell_graphic_popup_pane_ParamLimits

0x20ee,	// (0x0000d36f) cell_graphic_popup_pane

0x9e73,	// (0x000150f4) cell_graphic_popup_pane_g1

0x9e7b,	// (0x000150fc) cell_graphic_popup_pane_g2

0x612f,	// (0x000113b0) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001ac31) cell_graphic_popup_pane_g

0x9e84,	// (0x00015105) cell_graphic_popup_pane_t2

0x6138,	// (0x000113b9) grid_highlight_pane_cp3

0x631d,	// (0x0001159e) list_gen_pane_ParamLimits

0x631d,	// (0x0001159e) list_gen_pane

0x634f,	// (0x000115d0) scroll_pane

0x20a9,	// (0x0000d32a) bg_list_pane_g1_ParamLimits

0x20a9,	// (0x0000d32a) bg_list_pane_g1

0x9df0,	// (0x00015071) bg_list_pane_g2_ParamLimits

0x9df0,	// (0x00015071) bg_list_pane_g2

0x9e03,	// (0x00015084) bg_list_pane_g3_ParamLimits

0x9e03,	// (0x00015084) bg_list_pane_g3

0x9e15,	// (0x00015096) bg_list_pane_g4_ParamLimits

0x9e15,	// (0x00015096) bg_list_pane_g4

0x20c4,	// (0x0000d345) bg_list_pane_g5_ParamLimits

0x20c4,	// (0x0000d345) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001ac26) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001ac26) bg_list_pane_g

0x2032,	// (0x0000d2b3) list_double2_graphic_large_graphic_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double2_graphic_large_graphic_pane

0x2032,	// (0x0000d2b3) list_double2_graphic_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double2_graphic_pane

0x2032,	// (0x0000d2b3) list_double2_large_graphic_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double2_large_graphic_pane

0x2032,	// (0x0000d2b3) list_double2_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double2_pane

0x2032,	// (0x0000d2b3) list_double_graphic_heading_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_graphic_heading_pane

0x2032,	// (0x0000d2b3) list_double_graphic_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_graphic_pane

0x2032,	// (0x0000d2b3) list_double_heading_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_heading_pane

0x2032,	// (0x0000d2b3) list_double_large_graphic_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_large_graphic_pane

0x2032,	// (0x0000d2b3) list_double_number_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_number_pane

0x2032,	// (0x0000d2b3) list_double_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_pane

0x2032,	// (0x0000d2b3) list_double_time_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_double_time_pane

0x2032,	// (0x0000d2b3) list_setting_number_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_setting_number_pane

0x2032,	// (0x0000d2b3) list_setting_pane_ParamLimits

0x2032,	// (0x0000d2b3) list_setting_pane

0x2045,	// (0x0000d2c6) list_single_2graphic_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_2graphic_pane

0x2045,	// (0x0000d2c6) list_single_graphic_heading_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_graphic_heading_pane

0x2045,	// (0x0000d2c6) list_single_graphic_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_graphic_pane

0x2045,	// (0x0000d2c6) list_single_heading_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_heading_pane

0x2095,	// (0x0000d316) list_single_large_graphic_pane_ParamLimits

0x2095,	// (0x0000d316) list_single_large_graphic_pane

0x2045,	// (0x0000d2c6) list_single_number_heading_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_number_heading_pane

0x2045,	// (0x0000d2c6) list_single_number_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_number_pane

0x2045,	// (0x0000d2c6) list_single_pane_ParamLimits

0x2045,	// (0x0000d2c6) list_single_pane

0x5a8f,	// (0x00010d10) list_highlight_pane_cp1

0x7693,	// (0x00012914) list_single_pane_g1_ParamLimits

0x7693,	// (0x00012914) list_single_pane_g1

0x857b,	// (0x000137fc) list_single_pane_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_pane_g

0xa544,	// (0x000157c5) list_single_pane_t1_ParamLimits

0xa544,	// (0x000157c5) list_single_pane_t1

0x7693,	// (0x00012914) list_single_number_pane_g1_ParamLimits

0x7693,	// (0x00012914) list_single_number_pane_g1

0x857b,	// (0x000137fc) list_single_number_pane_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_number_pane_g

0x8587,	// (0x00013808) list_single_number_pane_t1_ParamLimits

0x8587,	// (0x00013808) list_single_number_pane_t1

0x1e85,	// (0x0000d106) list_single_number_pane_t2_ParamLimits

0x1e85,	// (0x0000d106) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001abe7) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001abe7) list_single_number_pane_t

0x05bb,	// (0x0000b83c) list_single_graphic_pane_g1_ParamLimits

0x05bb,	// (0x0000b83c) list_single_graphic_pane_g1

0x7693,	// (0x00012914) list_single_graphic_pane_g2_ParamLimits

0x7693,	// (0x00012914) list_single_graphic_pane_g2

0x857b,	// (0x000137fc) list_single_graphic_pane_g3_ParamLimits

0x857b,	// (0x000137fc) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0001a85a) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0001a85a) list_single_graphic_pane_g

0x05c7,	// (0x0000b848) list_single_graphic_pane_t1_ParamLimits

0x05c7,	// (0x0000b848) list_single_graphic_pane_t1

0x7693,	// (0x00012914) list_single_heading_pane_g1_ParamLimits

0x7693,	// (0x00012914) list_single_heading_pane_g1

0x857b,	// (0x000137fc) list_single_heading_pane_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_heading_pane_g

0x05dd,	// (0x0000b85e) list_single_heading_pane_t1_ParamLimits

0x05dd,	// (0x0000b85e) list_single_heading_pane_t1

0x05f3,	// (0x0000b874) list_single_heading_pane_t2_ParamLimits

0x05f3,	// (0x0000b874) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001a866) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001a866) list_single_heading_pane_t

0x7693,	// (0x00012914) list_single_number_heading_pane_g1_ParamLimits

0x7693,	// (0x00012914) list_single_number_heading_pane_g1

0x857b,	// (0x000137fc) list_single_number_heading_pane_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_number_heading_pane_g

0x05dd,	// (0x0000b85e) list_single_number_heading_pane_t1_ParamLimits

0x05dd,	// (0x0000b85e) list_single_number_heading_pane_t1

0x0605,	// (0x0000b886) list_single_number_heading_pane_t2_ParamLimits

0x0605,	// (0x0000b886) list_single_number_heading_pane_t2

0xa51e,	// (0x0001579f) list_single_number_heading_pane_t3_ParamLimits

0xa51e,	// (0x0001579f) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0001a86b) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0001a86b) list_single_number_heading_pane_t

0x856f,	// (0x000137f0) list_single_graphic_heading_pane_g1_ParamLimits

0x856f,	// (0x000137f0) list_single_graphic_heading_pane_g1

0x0617,	// (0x0000b898) list_single_graphic_heading_pane_g4_ParamLimits

0x0617,	// (0x0000b898) list_single_graphic_heading_pane_g4

0x857b,	// (0x000137fc) list_single_graphic_heading_pane_g5_ParamLimits

0x857b,	// (0x000137fc) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0001a872) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0001a872) list_single_graphic_heading_pane_g

0x05dd,	// (0x0000b85e) list_single_graphic_heading_pane_t1_ParamLimits

0x05dd,	// (0x0000b85e) list_single_graphic_heading_pane_t1

0x0628,	// (0x0000b8a9) list_single_graphic_heading_pane_t2_ParamLimits

0x0628,	// (0x0000b8a9) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0001a879) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0001a879) list_single_graphic_heading_pane_t

0xa55a,	// (0x000157db) list_single_large_graphic_pane_g1_ParamLimits

0xa55a,	// (0x000157db) list_single_large_graphic_pane_g1

0x6444,	// (0x000116c5) list_single_large_graphic_pane_g2_ParamLimits

0x6444,	// (0x000116c5) list_single_large_graphic_pane_g2

0x6450,	// (0x000116d1) list_single_large_graphic_pane_g3_ParamLimits

0x6450,	// (0x000116d1) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0001a87e) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0001a87e) list_single_large_graphic_pane_g

0x8cdd,	// (0x00013f5e) wait_border_pane_g2_copy1

0x063a,	// (0x0000b8bb) list_single_large_graphic_pane_g4_cp2

0xa566,	// (0x000157e7) list_single_large_graphic_pane_t1_ParamLimits

0xa566,	// (0x000157e7) list_single_large_graphic_pane_t1

0x65a0,	// (0x00011821) list_double_pane_g1_ParamLimits

0x65a0,	// (0x00011821) list_double_pane_g1

0x64cb,	// (0x0001174c) list_double_pane_g2_ParamLimits

0x64cb,	// (0x0001174c) list_double_pane_g2

0x0001,

0xf604,	// (0x0001a885) list_double_pane_g_ParamLimits

0xf604,	// (0x0001a885) list_double_pane_g

0x64d7,	// (0x00011758) list_double_pane_t1_ParamLimits

0x64d7,	// (0x00011758) list_double_pane_t1

0x0642,	// (0x0000b8c3) list_double_pane_t2_ParamLimits

0x0642,	// (0x0000b8c3) list_double_pane_t2

0x0001,

0xf609,	// (0x0001a88a) list_double_pane_t_ParamLimits

0xf609,	// (0x0001a88a) list_double_pane_t

0x0654,	// (0x0000b8d5) list_double2_pane_g1_ParamLimits

0x0654,	// (0x0000b8d5) list_double2_pane_g1

0x0665,	// (0x0000b8e6) list_double2_pane_g2_ParamLimits

0x0665,	// (0x0000b8e6) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0001a88f) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0001a88f) list_double2_pane_g

0xbd13,	// (0x00016f94) list_double2_pane_t1_ParamLimits

0xbd13,	// (0x00016f94) list_double2_pane_t1

0x66c9,	// (0x0001194a) list_double2_pane_t2_ParamLimits

0x66c9,	// (0x0001194a) list_double2_pane_t2

0x0001,

0xf613,	// (0x0001a894) list_double2_pane_t_ParamLimits

0xf613,	// (0x0001a894) list_double2_pane_t

0x65a0,	// (0x00011821) list_double_number_pane_g1_ParamLimits

0x65a0,	// (0x00011821) list_double_number_pane_g1

0x64cb,	// (0x0001174c) list_double_number_pane_g2_ParamLimits

0x64cb,	// (0x0001174c) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0001a885) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0001a885) list_double_number_pane_g

0x0671,	// (0x0000b8f2) list_double_number_pane_t1_ParamLimits

0x0671,	// (0x0000b8f2) list_double_number_pane_t1

0x65ac,	// (0x0001182d) list_double_number_pane_t2_ParamLimits

0x65ac,	// (0x0001182d) list_double_number_pane_t2

0x0683,	// (0x0000b904) list_double_number_pane_t3_ParamLimits

0x0683,	// (0x0000b904) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0001a899) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0001a899) list_double_number_pane_t

0x6594,	// (0x00011815) list_double_graphic_pane_g1_ParamLimits

0x6594,	// (0x00011815) list_double_graphic_pane_g1

0x0695,	// (0x0000b916) list_double_graphic_pane_g2_ParamLimits

0x0695,	// (0x0000b916) list_double_graphic_pane_g2

0x06a4,	// (0x0000b925) list_double_graphic_pane_g3_ParamLimits

0x06a4,	// (0x0000b925) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0001a8a0) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0001a8a0) list_double_graphic_pane_g

0x06bc,	// (0x0000b93d) list_double_graphic_pane_t1_ParamLimits

0x06bc,	// (0x0000b93d) list_double_graphic_pane_t1

0x06d2,	// (0x0000b953) list_double_graphic_pane_t2_ParamLimits

0x06d2,	// (0x0000b953) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0001a8a9) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0001a8a9) list_double_graphic_pane_t

0x06e4,	// (0x0000b965) list_double2_graphic_pane_g1_ParamLimits

0x06e4,	// (0x0000b965) list_double2_graphic_pane_g1

0x696e,	// (0x00011bef) list_double2_graphic_pane_g2_ParamLimits

0x696e,	// (0x00011bef) list_double2_graphic_pane_g2

0x0665,	// (0x0000b8e6) list_double2_graphic_pane_g3_ParamLimits

0x0665,	// (0x0000b8e6) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0001a8ae) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0001a8ae) list_double2_graphic_pane_g

0x06f0,	// (0x0000b971) list_double2_graphic_pane_t1_ParamLimits

0x06f0,	// (0x0000b971) list_double2_graphic_pane_t1

0x66f1,	// (0x00011972) list_double2_graphic_pane_t2_ParamLimits

0x66f1,	// (0x00011972) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0001a8b5) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0001a8b5) list_double2_graphic_pane_t

0x0706,	// (0x0000b987) list_double_large_graphic_pane_g1_ParamLimits

0x0706,	// (0x0000b987) list_double_large_graphic_pane_g1

0x0731,	// (0x0000b9b2) list_double_large_graphic_pane_g2_ParamLimits

0x0731,	// (0x0000b9b2) list_double_large_graphic_pane_g2

0x64cb,	// (0x0001174c) list_double_large_graphic_pane_g3_ParamLimits

0x64cb,	// (0x0001174c) list_double_large_graphic_pane_g3

0x0742,	// (0x0000b9c3) list_double_large_graphic_pane_g4_ParamLimits

0x0742,	// (0x0000b9c3) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0001a8ba) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0001a8ba) list_double_large_graphic_pane_g

0x0755,	// (0x0000b9d6) list_double_large_graphic_pane_t1_ParamLimits

0x0755,	// (0x0000b9d6) list_double_large_graphic_pane_t1

0x076e,	// (0x0000b9ef) list_double_large_graphic_pane_t2_ParamLimits

0x076e,	// (0x0000b9ef) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0001a8c5) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0001a8c5) list_double_large_graphic_pane_t

0x0780,	// (0x0000ba01) list_double2_large_graphic_pane_g1_ParamLimits

0x0780,	// (0x0000ba01) list_double2_large_graphic_pane_g1

0x0654,	// (0x0000b8d5) list_double2_large_graphic_pane_g2_ParamLimits

0x0654,	// (0x0000b8d5) list_double2_large_graphic_pane_g2

0x0665,	// (0x0000b8e6) list_double2_large_graphic_pane_g3_ParamLimits

0x0665,	// (0x0000b8e6) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0001a8ca) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0001a8ca) list_double2_large_graphic_pane_g

0x078c,	// (0x0000ba0d) list_double2_large_graphic_pane_t1_ParamLimits

0x078c,	// (0x0000ba0d) list_double2_large_graphic_pane_t1

0x07a2,	// (0x0000ba23) list_double2_large_graphic_pane_t2_ParamLimits

0x07a2,	// (0x0000ba23) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0001a8d1) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0001a8d1) list_double2_large_graphic_pane_t

0x07b4,	// (0x0000ba35) list_double_heading_pane_g1_ParamLimits

0x07b4,	// (0x0000ba35) list_double_heading_pane_g1

0x07c5,	// (0x0000ba46) list_double_heading_pane_g2_ParamLimits

0x07c5,	// (0x0000ba46) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001a8d6) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001a8d6) list_double_heading_pane_g

0x07d1,	// (0x0000ba52) list_double_heading_pane_t1_ParamLimits

0x07d1,	// (0x0000ba52) list_double_heading_pane_t1

0x07e7,	// (0x0000ba68) list_double_heading_pane_t2_ParamLimits

0x07e7,	// (0x0000ba68) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0001a8db) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0001a8db) list_double_heading_pane_t

0x6594,	// (0x00011815) list_double_graphic_heading_pane_g1_ParamLimits

0x6594,	// (0x00011815) list_double_graphic_heading_pane_g1

0x07b4,	// (0x0000ba35) list_double_graphic_heading_pane_g2_ParamLimits

0x07b4,	// (0x0000ba35) list_double_graphic_heading_pane_g2

0x07c5,	// (0x0000ba46) list_double_graphic_heading_pane_g3_ParamLimits

0x07c5,	// (0x0000ba46) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0001a8e0) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0001a8e0) list_double_graphic_heading_pane_g

0x07f9,	// (0x0000ba7a) list_double_graphic_heading_pane_t1_ParamLimits

0x07f9,	// (0x0000ba7a) list_double_graphic_heading_pane_t1

0x080f,	// (0x0000ba90) list_double_graphic_heading_pane_t2_ParamLimits

0x080f,	// (0x0000ba90) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001a8e7) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001a8e7) list_double_graphic_heading_pane_t

0x0731,	// (0x0000b9b2) list_double_time_pane_g1_ParamLimits

0x0731,	// (0x0000b9b2) list_double_time_pane_g1

0x64cb,	// (0x0001174c) list_double_time_pane_g2_ParamLimits

0x64cb,	// (0x0001174c) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0001a8ec) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0001a8ec) list_double_time_pane_g

0x666e,	// (0x000118ef) list_double_time_pane_t1_ParamLimits

0x666e,	// (0x000118ef) list_double_time_pane_t1

0x0821,	// (0x0000baa2) list_double_time_pane_t2_ParamLimits

0x0821,	// (0x0000baa2) list_double_time_pane_t2

0x0833,	// (0x0000bab4) list_double_time_pane_t3_ParamLimits

0x0833,	// (0x0000bab4) list_double_time_pane_t3

0x0845,	// (0x0000bac6) list_double_time_pane_t4_ParamLimits

0x0845,	// (0x0000bac6) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0001a8f1) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0001a8f1) list_double_time_pane_t

0x696e,	// (0x00011bef) list_setting_pane_g1_ParamLimits

0x696e,	// (0x00011bef) list_setting_pane_g1

0x0665,	// (0x0000b8e6) list_setting_pane_g2_ParamLimits

0x0665,	// (0x0000b8e6) list_setting_pane_g2

0x0001,

0xf679,	// (0x0001a8fa) list_setting_pane_g_ParamLimits

0xf679,	// (0x0001a8fa) list_setting_pane_g

0x0857,	// (0x0000bad8) list_setting_pane_t1_ParamLimits

0x0857,	// (0x0000bad8) list_setting_pane_t1

0x086e,	// (0x0000baef) list_setting_pane_t2_ParamLimits

0x086e,	// (0x0000baef) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0001a8ff) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0001a8ff) list_setting_pane_t

0x08ab,	// (0x0000bb2c) set_value_pane_cp_ParamLimits

0x08ab,	// (0x0000bb2c) set_value_pane_cp

0x696e,	// (0x00011bef) list_setting_number_pane_g1_ParamLimits

0x696e,	// (0x00011bef) list_setting_number_pane_g1

0x0665,	// (0x0000b8e6) list_setting_number_pane_g2_ParamLimits

0x0665,	// (0x0000b8e6) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x0001a8fa) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x0001a8fa) list_setting_number_pane_g

0x08b7,	// (0x0000bb38) list_setting_number_pane_t1_ParamLimits

0x08b7,	// (0x0000bb38) list_setting_number_pane_t1

0x08cb,	// (0x0000bb4c) list_setting_number_pane_t2_ParamLimits

0x08cb,	// (0x0000bb4c) list_setting_number_pane_t2

0x08e2,	// (0x0000bb63) list_setting_number_pane_t3_ParamLimits

0x08e2,	// (0x0000bb63) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0001a906) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0001a906) list_setting_number_pane_t

0x08ab,	// (0x0000bb2c) set_value_pane_ParamLimits

0x08ab,	// (0x0000bb2c) set_value_pane

0x681d,	// (0x00011a9e) bg_set_opt_pane_ParamLimits

0x681d,	// (0x00011a9e) bg_set_opt_pane

0x683e,	// (0x00011abf) set_value_pane_t1

0x684c,	// (0x00011acd) slider_set_pane_cp3

0x6855,	// (0x00011ad6) volume_small_pane_cp

0x685e,	// (0x00011adf) list_form_gen_pane

0x6867,	// (0x00011ae8) scroll_pane_cp8

0x0925,	// (0x0000bba6) form_field_data_pane_ParamLimits

0x0925,	// (0x0000bba6) form_field_data_pane

0x093c,	// (0x0000bbbd) form_field_data_wide_pane_ParamLimits

0x093c,	// (0x0000bbbd) form_field_data_wide_pane

0x095c,	// (0x0000bbdd) form_field_popup_pane_ParamLimits

0x095c,	// (0x0000bbdd) form_field_popup_pane

0x097a,	// (0x0000bbfb) form_field_popup_wide_pane_ParamLimits

0x097a,	// (0x0000bbfb) form_field_popup_wide_pane

0x68f2,	// (0x00011b73) form_field_slider_pane_ParamLimits

0x68f2,	// (0x00011b73) form_field_slider_pane

0x6905,	// (0x00011b86) form_field_slider_wide_pane_ParamLimits

0x6905,	// (0x00011b86) form_field_slider_wide_pane

0x6918,	// (0x00011b99) data_form_pane

0x099b,	// (0x0000bc1c) form_field_data_pane_t1

0x6948,	// (0x00011bc9) input_focus_pane

0x6956,	// (0x00011bd7) data_form_wide_pane

0x698e,	// (0x00011c0f) form_field_data_wide_pane_t1

0x614d,	// (0x000113ce) input_focus_pane_cp6

0x09b5,	// (0x0000bc36) form_field_popup_pane_t1

0x6948,	// (0x00011bc9) input_focus_pane_cp7

0x69ca,	// (0x00011c4b) list_form_pane

0x69de,	// (0x00011c5f) form_field_popup_wide_pane_t1

0x6948,	// (0x00011bc9) input_focus_pane_cp8

0x69f3,	// (0x00011c74) list_form_wide_pane

0x09d7,	// (0x0000bc58) form_field_slider_pane_t1_ParamLimits

0x09d7,	// (0x0000bc58) form_field_slider_pane_t1

0x09ef,	// (0x0000bc70) form_field_slider_pane_t2_ParamLimits

0x09ef,	// (0x0000bc70) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0001a916) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0001a916) form_field_slider_pane_t

0x5e04,	// (0x00011085) input_focus_pane_cp9_ParamLimits

0x5e04,	// (0x00011085) input_focus_pane_cp9

0x0a04,	// (0x0000bc85) slider_cont_pane_ParamLimits

0x0a04,	// (0x0000bc85) slider_cont_pane

0x6a44,	// (0x00011cc5) form_field_slider_wide_pane_t1_ParamLimits

0x6a44,	// (0x00011cc5) form_field_slider_wide_pane_t1

0x6a56,	// (0x00011cd7) form_field_slider_wide_pane_t2_ParamLimits

0x6a56,	// (0x00011cd7) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0001a91b) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0001a91b) form_field_slider_wide_pane_t

0x5e04,	// (0x00011085) input_focus_pane_cp10_ParamLimits

0x5e04,	// (0x00011085) input_focus_pane_cp10

0x0a18,	// (0x0000bc99) slider_cont_pane_cp1_ParamLimits

0x0a18,	// (0x0000bc99) slider_cont_pane_cp1

0x0a2c,	// (0x0000bcad) slider_form_pane_cp

0x6a84,	// (0x00011d05) input_focus_pane_g1

0x6a8c,	// (0x00011d0d) input_focus_pane_g2

0x6a94,	// (0x00011d15) input_focus_pane_g3

0x6a9c,	// (0x00011d1d) input_focus_pane_g4

0x6aa4,	// (0x00011d25) input_focus_pane_g5

0x6aac,	// (0x00011d2d) input_focus_pane_g6

0x6ab4,	// (0x00011d35) input_focus_pane_g7

0x6abc,	// (0x00011d3d) input_focus_pane_g8

0x6ac4,	// (0x00011d45) input_focus_pane_g9

0x5a85,	// (0x00010d06) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0001a920) input_focus_pane_g

0x8ce6,	// (0x00013f67) wait_border_pane_g3_copy1

0x0a34,	// (0x0000bcb5) data_form_pane_t1

0x5a85,	// (0x00010d06) wait_anim_pane_g1_copy1

0x2016,	// (0x0000d297) data_form_wide_pane_t1

0x0a4e,	// (0x0000bccf) list_form_graphic_pane_cp_ParamLimits

0x0a4e,	// (0x0000bccf) list_form_graphic_pane_cp

0x9c27,	// (0x00014ea8) slider_form_pane_g1

0x9c30,	// (0x00014eb1) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001ac17) slider_form_pane_g

0x0a61,	// (0x0000bce2) list_form_graphic_pane_ParamLimits

0x0a61,	// (0x0000bce2) list_form_graphic_pane

0x6b18,	// (0x00011d99) list_form_graphic_pane_g1

0x6b20,	// (0x00011da1) list_form_graphic_pane_t1_ParamLimits

0x6b20,	// (0x00011da1) list_form_graphic_pane_t1

0x5b6f,	// (0x00010df0) list_highlight_pane_cp5_ParamLimits

0x5b6f,	// (0x00010df0) list_highlight_pane_cp5

0x0a75,	// (0x0000bcf6) find_pane_g1

0x6b3e,	// (0x00011dbf) input_find_pane

0x0a7e,	// (0x0000bcff) input_find_pane_g1_ParamLimits

0x0a7e,	// (0x0000bcff) input_find_pane_g1

0x0a8a,	// (0x0000bd0b) input_find_pane_t1_ParamLimits

0x0a8a,	// (0x0000bd0b) input_find_pane_t1

0x0a9f,	// (0x0000bd20) input_find_pane_t2_ParamLimits

0x0a9f,	// (0x0000bd20) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0001a935) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0001a935) input_find_pane_t

0x6b7d,	// (0x00011dfe) input_focus_pane_cp5_ParamLimits

0x6b7d,	// (0x00011dfe) input_focus_pane_cp5

0x0ac0,	// (0x0000bd41) bg_popup_window_pane_cp2_ParamLimits

0x0ac0,	// (0x0000bd41) bg_popup_window_pane_cp2

0x0acd,	// (0x0000bd4e) listscroll_menu_pane_ParamLimits

0x0acd,	// (0x0000bd4e) listscroll_menu_pane

0x0ad9,	// (0x0000bd5a) popup_submenu_window_ParamLimits

0x0ad9,	// (0x0000bd5a) popup_submenu_window

0x6bd8,	// (0x00011e59) find_popup_pane_g1

0x6be0,	// (0x00011e61) input_popup_find_pane_cp

0x6b7d,	// (0x00011dfe) input_focus_pane_cp4_ParamLimits

0x6b7d,	// (0x00011dfe) input_focus_pane_cp4

0x6bf8,	// (0x00011e79) input_popup_find_pane_t1_ParamLimits

0x6bf8,	// (0x00011e79) input_popup_find_pane_t1

0x5a8f,	// (0x00010d10) bg_popup_sub_pane_cp

0x6c26,	// (0x00011ea7) listscroll_popup_sub_pane

0x6c2e,	// (0x00011eaf) list_submenu_pane_ParamLimits

0x6c2e,	// (0x00011eaf) list_submenu_pane

0x6c3f,	// (0x00011ec0) scroll_pane_cp4

0x6c47,	// (0x00011ec8) list_single_popup_submenu_pane_ParamLimits

0x6c47,	// (0x00011ec8) list_single_popup_submenu_pane

0x6c5a,	// (0x00011edb) list_single_popup_submenu_pane_g1

0x6c62,	// (0x00011ee3) list_single_popup_submenu_pane_t1_ParamLimits

0x6c62,	// (0x00011ee3) list_single_popup_submenu_pane_t1

0x5e04,	// (0x00011085) bg_active_tab_pane_cp1_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp1

0x0b0f,	// (0x0000bd90) tabs_2_active_pane_g1

0x0b17,	// (0x0000bd98) tabs_2_active_pane_t1

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp1_ParamLimits

0x5e04,	// (0x00011085) bg_passive_tab_pane_cp1

0x0b0f,	// (0x0000bd90) tabs_2_passive_pane_g1

0x0b17,	// (0x0000bd98) tabs_2_passive_pane_t1

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp4

0x0b29,	// (0x0000bdaa) tabs_2_long_active_pane_t1

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp4

0x48f6,	// (0x0000fb77) list_single_midp_graphic_pane_g4_ParamLimits

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp5

0x0b3c,	// (0x0000bdbd) tabs_3_long_active_pane_t1

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp5

0x48f6,	// (0x0000fb77) list_single_midp_graphic_pane_g4

0x5b6f,	// (0x00010df0) bg_popup_window_pane_cp13_ParamLimits

0x5b6f,	// (0x00010df0) bg_popup_window_pane_cp13

0x6cd9,	// (0x00011f5a) listscroll_popup_fast_pane_ParamLimits

0x6cd9,	// (0x00011f5a) listscroll_popup_fast_pane

0x6ce8,	// (0x00011f69) grid_popup_fast_pane_ParamLimits

0x6ce8,	// (0x00011f69) grid_popup_fast_pane

0x6cfa,	// (0x00011f7b) scroll_pane_cp9_ParamLimits

0x6cfa,	// (0x00011f7b) scroll_pane_cp9

0xb9ea,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb9ea,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2

0x6d1e,	// (0x00011f9f) input_focus_pane_cp20_ParamLimits

0x6d1e,	// (0x00011f9f) input_focus_pane_cp20

0x6d2c,	// (0x00011fad) query_popup_data_pane_t1_ParamLimits

0x6d2c,	// (0x00011fad) query_popup_data_pane_t1

0x6d3f,	// (0x00011fc0) query_popup_data_pane_t2_ParamLimits

0x6d3f,	// (0x00011fc0) query_popup_data_pane_t2

0x6d85,	// (0x00012006) query_popup_data_pane_t3_ParamLimits

0x6d85,	// (0x00012006) query_popup_data_pane_t3

0x6dc6,	// (0x00012047) query_popup_data_pane_t4_ParamLimits

0x6dc6,	// (0x00012047) query_popup_data_pane_t4

0x6e02,	// (0x00012083) query_popup_data_pane_t5_ParamLimits

0x6e02,	// (0x00012083) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0001a93a) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0001a93a) query_popup_data_pane_t

0x6a84,	// (0x00011d05) bg_set_opt_pane_g1

0x6a8c,	// (0x00011d0d) bg_set_opt_pane_g2

0x6a94,	// (0x00011d15) bg_set_opt_pane_g3

0x6a9c,	// (0x00011d1d) bg_set_opt_pane_g4

0x6aa4,	// (0x00011d25) bg_set_opt_pane_g5

0x6aac,	// (0x00011d2d) bg_set_opt_pane_g6

0x6ab4,	// (0x00011d35) bg_set_opt_pane_g7

0x6abc,	// (0x00011d3d) bg_set_opt_pane_g8

0x6ac4,	// (0x00011d45) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0001a945) bg_set_opt_pane_g

0x4501,	// (0x0000f782) control_top_pane_stacon_ParamLimits

0x4501,	// (0x0000f782) control_top_pane_stacon

0x4554,	// (0x0000f7d5) signal_pane_stacon_ParamLimits

0x4554,	// (0x0000f7d5) signal_pane_stacon

0x7454,	// (0x000126d5) stacon_top_pane_g1_ParamLimits

0x7454,	// (0x000126d5) stacon_top_pane_g1

0x4579,	// (0x0000f7fa) title_pane_stacon_ParamLimits

0x4579,	// (0x0000f7fa) title_pane_stacon

0x45a3,	// (0x0000f824) uni_indicator_pane_stacon_ParamLimits

0x45a3,	// (0x0000f824) uni_indicator_pane_stacon

0x45b8,	// (0x0000f839) battery_pane_stacon_ParamLimits

0x45b8,	// (0x0000f839) battery_pane_stacon

0x45fc,	// (0x0000f87d) control_bottom_pane_stacon_ParamLimits

0x45fc,	// (0x0000f87d) control_bottom_pane_stacon

0x461f,	// (0x0000f8a0) navi_pane_stacon_ParamLimits

0x461f,	// (0x0000f8a0) navi_pane_stacon

0x7476,	// (0x000126f7) stacon_bottom_pane_g1_ParamLimits

0x7476,	// (0x000126f7) stacon_bottom_pane_g1

0x4262,	// (0x0000f4e3) aid_levels_signal_lsc_ParamLimits

0x4262,	// (0x0000f4e3) aid_levels_signal_lsc

0x4279,	// (0x0000f4fa) signal_pane_stacon_g1_ParamLimits

0x4279,	// (0x0000f4fa) signal_pane_stacon_g1

0x428d,	// (0x0000f50e) signal_pane_stacon_g2_ParamLimits

0x428d,	// (0x0000f50e) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0001a958) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0001a958) signal_pane_stacon_g

0x42c2,	// (0x0000f543) title_pane_stacon_t1_ParamLimits

0x42c2,	// (0x0000f543) title_pane_stacon_t1

0x6e46,	// (0x000120c7) uni_indicator_pane_stacon_g1

0x6e50,	// (0x000120d1) uni_indicator_pane_stacon_g2

0x6e5a,	// (0x000120db) uni_indicator_pane_stacon_g3

0x6e64,	// (0x000120e5) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0001a964) uni_indicator_pane_stacon_g

0x42e7,	// (0x0000f568) control_top_pane_stacon_g1

0x42ef,	// (0x0000f570) control_top_pane_stacon_t1_ParamLimits

0x42ef,	// (0x0000f570) control_top_pane_stacon_t1

0x4326,	// (0x0000f5a7) aid_levels_battery_lsc_ParamLimits

0x4326,	// (0x0000f5a7) aid_levels_battery_lsc

0x433e,	// (0x0000f5bf) battery_pane_stacon_g1_ParamLimits

0x433e,	// (0x0000f5bf) battery_pane_stacon_g1

0x4351,	// (0x0000f5d2) battery_pane_stacon_g2_ParamLimits

0x4351,	// (0x0000f5d2) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0001a96d) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0001a96d) battery_pane_stacon_g

0x438f,	// (0x0000f610) navi_icon_pane_stacon

0x43a3,	// (0x0000f624) navi_navi_pane_stacon

0x438f,	// (0x0000f610) navi_text_pane_stacon

0x42e7,	// (0x0000f568) control_bottom_pane_stacon_g1

0x43b7,	// (0x0000f638) control_bottom_pane_stacon_t1_ParamLimits

0x43b7,	// (0x0000f638) control_bottom_pane_stacon_t1

0x0b4e,	// (0x0000bdcf) grid_app_pane_ParamLimits

0x0b4e,	// (0x0000bdcf) grid_app_pane

0x0b84,	// (0x0000be05) scroll_pane_cp15_ParamLimits

0x0b84,	// (0x0000be05) scroll_pane_cp15

0x0b9d,	// (0x0000be1e) cell_app_pane_ParamLimits

0x0b9d,	// (0x0000be1e) cell_app_pane

0x0be4,	// (0x0000be65) cell_app_pane_g1_ParamLimits

0x0be4,	// (0x0000be65) cell_app_pane_g1

0x6f09,	// (0x0001218a) cell_app_pane_g2_ParamLimits

0x6f09,	// (0x0001218a) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0001a972) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0001a972) cell_app_pane_g

0x0c04,	// (0x0000be85) cell_app_pane_t1_ParamLimits

0x0c04,	// (0x0000be85) cell_app_pane_t1

0x6f2c,	// (0x000121ad) grid_highlight_pane_ParamLimits

0x6f2c,	// (0x000121ad) grid_highlight_pane

0x6a84,	// (0x00011d05) cell_highlight_pane_g1

0x6a8c,	// (0x00011d0d) cell_highlight_pane_g2

0x6a94,	// (0x00011d15) cell_highlight_pane_g3

0x6a9c,	// (0x00011d1d) cell_highlight_pane_g4

0x6aa4,	// (0x00011d25) cell_highlight_pane_g5

0x6aac,	// (0x00011d2d) cell_highlight_pane_g6

0x6ab4,	// (0x00011d35) cell_highlight_pane_g7

0x6abc,	// (0x00011d3d) cell_highlight_pane_g8

0x6ac4,	// (0x00011d45) cell_highlight_pane_g9

0x5a85,	// (0x00010d06) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0001a920) cell_highlight_pane_g

0x6f3d,	// (0x000121be) bg_scroll_pane

0x4401,	// (0x0000f682) scroll_handle_pane

0x6f84,	// (0x00012205) scroll_bg_pane_g1

0x6f99,	// (0x0001221a) scroll_bg_pane_g2

0x6fb1,	// (0x00012232) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0001a977) scroll_bg_pane_g

0x6fc6,	// (0x00012247) scroll_handle_focus_pane_ParamLimits

0x6fc6,	// (0x00012247) scroll_handle_focus_pane

0x6f84,	// (0x00012205) scroll_handle_pane_g1

0x6fd3,	// (0x00012254) scroll_handle_pane_g2

0x6fb1,	// (0x00012232) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0001a97e) scroll_handle_pane_g

0x6b7d,	// (0x00011dfe) bg_popup_sub_pane_cp21_ParamLimits

0x6b7d,	// (0x00011dfe) bg_popup_sub_pane_cp21

0x6fe7,	// (0x00012268) popup_fep_japan_predictive_window_t1_ParamLimits

0x6fe7,	// (0x00012268) popup_fep_japan_predictive_window_t1

0x6ffe,	// (0x0001227f) popup_fep_japan_predictive_window_t2_ParamLimits

0x6ffe,	// (0x0001227f) popup_fep_japan_predictive_window_t2

0x7031,	// (0x000122b2) popup_fep_japan_predictive_window_t3_ParamLimits

0x7031,	// (0x000122b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0001a985) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0001a985) popup_fep_japan_predictive_window_t

0x5a8f,	// (0x00010d10) bg_popup_sub_pane_cp23

0x7068,	// (0x000122e9) listscroll_japin_cand_pane

0x7070,	// (0x000122f1) popup_fep_japan_candidate_window_t1

0x707e,	// (0x000122ff) candidate_pane_ParamLimits

0x707e,	// (0x000122ff) candidate_pane

0x7090,	// (0x00012311) scroll_pane_cp30

0x7098,	// (0x00012319) list_single_popup_jap_candidate_pane_ParamLimits

0x7098,	// (0x00012319) list_single_popup_jap_candidate_pane

0x5a8f,	// (0x00010d10) list_highlight_pane_cp30

0x70ac,	// (0x0001232d) list_single_popup_jap_candidate_pane_t1

0x70bb,	// (0x0001233c) level_1_signal

0x70c8,	// (0x00012349) level_2_signal

0x70d5,	// (0x00012356) level_3_signal

0x70e2,	// (0x00012363) level_4_signal

0x70ef,	// (0x00012370) level_5_signal

0x70fc,	// (0x0001237d) level_6_signal

0x7109,	// (0x0001238a) level_7_signal

0x70bb,	// (0x0001233c) level_1_battery

0x70c8,	// (0x00012349) level_2_battery

0x70d5,	// (0x00012356) level_3_battery

0x70e2,	// (0x00012363) level_4_battery

0x70ef,	// (0x00012370) level_5_battery

0x70fc,	// (0x0001237d) level_6_battery

0x7109,	// (0x0001238a) level_7_battery

0x712e,	// (0x000123af) list_menu_pane_ParamLimits

0x712e,	// (0x000123af) list_menu_pane

0x7144,	// (0x000123c5) scroll_pane_cp25_ParamLimits

0x7144,	// (0x000123c5) scroll_pane_cp25

0x715d,	// (0x000123de) list_double2_graphic_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double2_graphic_pane_cp2

0x715d,	// (0x000123de) list_double2_large_graphic_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double2_large_graphic_pane_cp2

0x715d,	// (0x000123de) list_double2_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double2_pane_cp2

0x715d,	// (0x000123de) list_double_graphic_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double_graphic_pane_cp2

0x715d,	// (0x000123de) list_double_large_graphic_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double_large_graphic_pane_cp2

0x715d,	// (0x000123de) list_double_number_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double_number_pane_cp2

0x715d,	// (0x000123de) list_double_pane_cp2_ParamLimits

0x715d,	// (0x000123de) list_double_pane_cp2

0x0c35,	// (0x0000beb6) list_single_2graphic_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_2graphic_pane_cp2

0x0c35,	// (0x0000beb6) list_single_graphic_heading_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_graphic_heading_pane_cp2

0x0c35,	// (0x0000beb6) list_single_graphic_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_graphic_pane_cp2

0x0c35,	// (0x0000beb6) list_single_heading_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_heading_pane_cp2

0x7196,	// (0x00012417) list_single_large_graphic_pane_cp2_ParamLimits

0x7196,	// (0x00012417) list_single_large_graphic_pane_cp2

0x0c35,	// (0x0000beb6) list_single_number_heading_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_number_heading_pane_cp2

0x0c35,	// (0x0000beb6) list_single_number_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_number_pane_cp2

0x0c35,	// (0x0000beb6) list_single_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_pane_cp2

0x7212,	// (0x00012493) bg_popup_sub_pane_cp22

0x44b3,	// (0x0000f734) popup_side_volume_key_window_g1

0x44dd,	// (0x0000f75e) popup_side_volume_key_window_t1

0x44f9,	// (0x0000f77a) volume_small_pane_cp1

0x5e04,	// (0x00011085) bg_popup_sub_pane_cp24_ParamLimits

0x5e04,	// (0x00011085) bg_popup_sub_pane_cp24

0x7228,	// (0x000124a9) fep_china_uni_candidate_pane_ParamLimits

0x7228,	// (0x000124a9) fep_china_uni_candidate_pane

0x723c,	// (0x000124bd) fep_china_uni_entry_pane

0x724c,	// (0x000124cd) popup_fep_china_uni_window_g1

0x7268,	// (0x000124e9) fep_china_uni_entry_pane_g1

0x7270,	// (0x000124f1) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001a9b6) fep_china_uni_entry_pane_g

0x7278,	// (0x000124f9) fep_entry_item_pane

0x7282,	// (0x00012503) fep_candidate_item_pane

0x728a,	// (0x0001250b) fep_china_uni_candidate_pane_g1

0x7292,	// (0x00012513) fep_china_uni_candidate_pane_g2

0x729a,	// (0x0001251b) fep_china_uni_candidate_pane_g3

0x72a2,	// (0x00012523) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001a9bb) fep_china_uni_candidate_pane_g

0x5a85,	// (0x00010d06) fep_entry_item_pane_g1

0x72aa,	// (0x0001252b) fep_entry_item_pane_t1_ParamLimits

0x72aa,	// (0x0001252b) fep_entry_item_pane_t1

0x72c0,	// (0x00012541) fep_candidate_item_pane_t1_ParamLimits

0x72c0,	// (0x00012541) fep_candidate_item_pane_t1

0x72d5,	// (0x00012556) fep_candidate_item_pane_t2_ParamLimits

0x72d5,	// (0x00012556) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001a9c4) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001a9c4) fep_candidate_item_pane_t

0x5b6f,	// (0x00010df0) list_highlight_pane_cp31_ParamLimits

0x5b6f,	// (0x00010df0) list_highlight_pane_cp31

0x72e7,	// (0x00012568) level_1_signal_lsc

0x72f0,	// (0x00012571) level_2_signal_lsc

0x72f9,	// (0x0001257a) level_3_signal_lsc

0x7302,	// (0x00012583) level_4_signal_lsc

0x730b,	// (0x0001258c) level_5_signal_lsc

0x7314,	// (0x00012595) level_6_signal_lsc

0x731d,	// (0x0001259e) level_7_signal_lsc

0x731d,	// (0x0001259e) level_1_battery_lsc

0x7326,	// (0x000125a7) level_2_battery_lsc

0x732f,	// (0x000125b0) level_3_battery_lsc

0x7338,	// (0x000125b9) level_4_battery_lsc

0x7341,	// (0x000125c2) level_5_battery_lsc

0x734a,	// (0x000125cb) level_6_battery_lsc

0x72e7,	// (0x00012568) level_7_battery_lsc

0x7353,	// (0x000125d4) scroll_handle_focus_pane_g1

0x735c,	// (0x000125dd) scroll_handle_focus_pane_g2

0x7365,	// (0x000125e6) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001a9c9) scroll_handle_focus_pane_g

0x0cc3,	// (0x0000bf44) list_single_2graphic_pane_g1_ParamLimits

0x0cc3,	// (0x0000bf44) list_single_2graphic_pane_g1

0x0617,	// (0x0000b898) list_single_2graphic_pane_g2_ParamLimits

0x0617,	// (0x0000b898) list_single_2graphic_pane_g2

0x857b,	// (0x000137fc) list_single_2graphic_pane_g3_ParamLimits

0x857b,	// (0x000137fc) list_single_2graphic_pane_g3

0x0ccf,	// (0x0000bf50) list_single_2graphic_pane_g4_ParamLimits

0x0ccf,	// (0x0000bf50) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001a9d0) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001a9d0) list_single_2graphic_pane_g

0x0ce0,	// (0x0000bf61) list_single_2graphic_pane_t1_ParamLimits

0x0ce0,	// (0x0000bf61) list_single_2graphic_pane_t1

0x0d0e,	// (0x0000bf8f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0d0e,	// (0x0000bf8f) list_double2_graphic_large_graphic_pane_g1

0x0654,	// (0x0000b8d5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0654,	// (0x0000b8d5) list_double2_graphic_large_graphic_pane_g2

0x0665,	// (0x0000b8e6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0665,	// (0x0000b8e6) list_double2_graphic_large_graphic_pane_g3

0x0d20,	// (0x0000bfa1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0d20,	// (0x0000bfa1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001a9d9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001a9d9) list_double2_graphic_large_graphic_pane_g

0x0d2c,	// (0x0000bfad) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0d2c,	// (0x0000bfad) list_double2_graphic_large_graphic_pane_t1

0x0d42,	// (0x0000bfc3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0d42,	// (0x0000bfc3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001a9e2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001a9e2) list_double2_graphic_large_graphic_pane_t

0x7541,	// (0x000127c2) popup_fast_swap_window_ParamLimits

0x7541,	// (0x000127c2) popup_fast_swap_window

0x755d,	// (0x000127de) popup_side_volume_key_window

0x7577,	// (0x000127f8) stacon_top_pane

0x7581,	// (0x00012802) status_pane_ParamLimits

0x7581,	// (0x00012802) status_pane

0x7577,	// (0x000127f8) status_small_pane

0x5a8f,	// (0x00010d10) control_pane

0x5a8f,	// (0x00010d10) stacon_bottom_pane

0x6867,	// (0x00011ae8) scroll_pane_cp121

0x685e,	// (0x00011adf) set_content_pane

0x0d5d,	// (0x0000bfde) bg_active_tab_pane_g1_cp1

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp1

0x0d54,	// (0x0000bfd5) bg_active_tab_pane_g3_cp1

0x0d5d,	// (0x0000bfde) bg_passive_tab_pane_g1_cp1

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp1

0x0d54,	// (0x0000bfd5) bg_passive_tab_pane_g3_cp1

0x0d6f,	// (0x0000bff0) bg_active_tab_pane_g1_cp2

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp2

0x0d66,	// (0x0000bfe7) bg_active_tab_pane_g3_cp2

0x0d6f,	// (0x0000bff0) bg_passive_tab_pane_g1_cp2

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp2

0x0d66,	// (0x0000bfe7) bg_passive_tab_pane_g3_cp2

0x0d81,	// (0x0000c002) bg_active_tab_pane_g1_cp3

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp3

0x0d78,	// (0x0000bff9) bg_active_tab_pane_g3_cp3

0x0d81,	// (0x0000c002) bg_passive_tab_pane_g1_cp3

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp3

0x0d78,	// (0x0000bff9) bg_passive_tab_pane_g3_cp3

0x0d93,	// (0x0000c014) bg_active_tab_pane_g1_cp4

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp4

0x0d8a,	// (0x0000c00b) bg_active_tab_pane_g3_cp4

0x0d93,	// (0x0000c014) bg_passive_tab_pane_g1_cp4

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp4

0x0d8a,	// (0x0000c00b) bg_passive_tab_pane_g3_cp4

0x7492,	// (0x00012713) bg_active_tab_pane_g1_cp5

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp5

0x749b,	// (0x0001271c) bg_active_tab_pane_g3_cp5

0x7492,	// (0x00012713) bg_passive_tab_pane_g1_cp5

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp5

0x749b,	// (0x0001271c) bg_passive_tab_pane_g3_cp5

0xee3a,	// (0x0001a0bb) list_set_graphic_pane_ParamLimits

0xee3a,	// (0x0001a0bb) list_set_graphic_pane

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp4

0x74c2,	// (0x00012743) list_set_graphic_pane_g1_ParamLimits

0x74c2,	// (0x00012743) list_set_graphic_pane_g1

0x74ce,	// (0x0001274f) list_set_graphic_pane_g2_ParamLimits

0x74ce,	// (0x0001274f) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001a9e7) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001a9e7) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x0001ad5f) volume_small_pane_cp_g

0x74f2,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x74f2,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2

0x7500,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7500,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2

0x7511,	// (0x00012792) list_double2_large_graphic_pane_g3_cp2

0x7519,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7519,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2

0x752f,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x752f,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2

0x97a7,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x97a7,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2

0x97ba,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x97ba,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2

0x769f,	// (0x00012920) list_double_large_graphic_pane_g3_cp2

0x97cb,	// (0x00014a4c) list_double_large_graphic_pane_g4_cp

0x97d3,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x97d3,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2

0x97ea,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x97ea,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2

0x758f,	// (0x00012810) list_double2_graphic_pane_g1_cp2_ParamLimits

0x758f,	// (0x00012810) list_double2_graphic_pane_g1_cp2

0x759d,	// (0x0001281e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x759d,	// (0x0001281e) list_double2_graphic_pane_g2_cp2

0x75ae,	// (0x0001282f) list_double2_graphic_pane_g3_cp2

0x75b8,	// (0x00012839) list_double2_graphic_pane_t1_cp2_ParamLimits

0x75b8,	// (0x00012839) list_double2_graphic_pane_t1_cp2

0x75ce,	// (0x0001284f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x75ce,	// (0x0001284f) list_double2_graphic_pane_t2_cp2

0x75e0,	// (0x00012861) list_single_number_heading_pane_g1_cp2_ParamLimits

0x75e0,	// (0x00012861) list_single_number_heading_pane_g1_cp2

0x75ec,	// (0x0001286d) list_single_number_heading_pane_g2_cp2

0x75f4,	// (0x00012875) list_single_number_heading_pane_t1_cp2_ParamLimits

0x75f4,	// (0x00012875) list_single_number_heading_pane_t1_cp2

0x760a,	// (0x0001288b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x760a,	// (0x0001288b) list_single_number_heading_pane_t2_cp2

0x761e,	// (0x0001289f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x761e,	// (0x0001289f) list_single_number_heading_pane_t3_cp2

0x75e0,	// (0x00012861) list_single_heading_pane_g1_cp2_ParamLimits

0x75e0,	// (0x00012861) list_single_heading_pane_g1_cp2

0x75ec,	// (0x0001286d) list_single_heading_pane_g2_cp2

0x75f4,	// (0x00012875) list_single_heading_pane_t1_cp2_ParamLimits

0x75f4,	// (0x00012875) list_single_heading_pane_t1_cp2

0x95af,	// (0x00014830) list_single_heading_pane_t2_cp2_ParamLimits

0x95af,	// (0x00014830) list_single_heading_pane_t2_cp2

0x856f,	// (0x000137f0) list_double_graphic_pane_g1_cp2_ParamLimits

0x856f,	// (0x000137f0) list_double_graphic_pane_g1_cp2

0x9503,	// (0x00014784) list_double_graphic_pane_g2_cp2_ParamLimits

0x9503,	// (0x00014784) list_double_graphic_pane_g2_cp2

0x9512,	// (0x00014793) list_double_graphic_pane_g3_cp2

0x951a,	// (0x0001479b) list_double_graphic_pane_t1_cp2_ParamLimits

0x951a,	// (0x0001479b) list_double_graphic_pane_t1_cp2

0x9530,	// (0x000147b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x9530,	// (0x000147b1) list_double_graphic_pane_t2_cp2

0x7693,	// (0x00012914) list_double_number_pane_g1_cp2_ParamLimits

0x7693,	// (0x00012914) list_double_number_pane_g1_cp2

0x769f,	// (0x00012920) list_double_number_pane_g2_cp2

0x94c7,	// (0x00014748) list_double_number_pane_t1_cp2_ParamLimits

0x94c7,	// (0x00014748) list_double_number_pane_t1_cp2

0x94db,	// (0x0001475c) list_double_number_pane_t2_cp2_ParamLimits

0x94db,	// (0x0001475c) list_double_number_pane_t2_cp2

0x94f1,	// (0x00014772) list_double_number_pane_t3_cp2_ParamLimits

0x94f1,	// (0x00014772) list_double_number_pane_t3_cp2

0x93b0,	// (0x00014631) list_single_graphic_pane_g1_cp2_ParamLimits

0x93b0,	// (0x00014631) list_single_graphic_pane_g1_cp2

0x76f7,	// (0x00012978) list_single_graphic_pane_g2_cp2_ParamLimits

0x76f7,	// (0x00012978) list_single_graphic_pane_g2_cp2

0x7703,	// (0x00012984) list_single_graphic_pane_g3_cp2

0x9386,	// (0x00014607) list_single_graphic_pane_t1_cp2_ParamLimits

0x9386,	// (0x00014607) list_single_graphic_pane_t1_cp2

0x76f7,	// (0x00012978) list_single_number_pane_g1_cp2_ParamLimits

0x76f7,	// (0x00012978) list_single_number_pane_g1_cp2

0x7703,	// (0x00012984) list_single_number_pane_g2_cp2

0x9386,	// (0x00014607) list_single_number_pane_t1_cp2_ParamLimits

0x9386,	// (0x00014607) list_single_number_pane_t1_cp2

0x939c,	// (0x0001461d) list_single_number_pane_t2_cp2_ParamLimits

0x939c,	// (0x0001461d) list_single_number_pane_t2_cp2

0x7500,	// (0x00012781) list_double2_pane_g1_cp2_ParamLimits

0x7500,	// (0x00012781) list_double2_pane_g1_cp2

0x7511,	// (0x00012792) list_double2_pane_g2_cp2

0x766b,	// (0x000128ec) list_double2_pane_t1_cp2_ParamLimits

0x766b,	// (0x000128ec) list_double2_pane_t1_cp2

0x7681,	// (0x00012902) list_double2_pane_t2_cp2_ParamLimits

0x7681,	// (0x00012902) list_double2_pane_t2_cp2

0x7693,	// (0x00012914) list_double_pane_g1_cp2_ParamLimits

0x7693,	// (0x00012914) list_double_pane_g1_cp2

0x769f,	// (0x00012920) list_double_pane_g2_cp2

0x76a7,	// (0x00012928) list_double_pane_t1_cp2_ParamLimits

0x76a7,	// (0x00012928) list_double_pane_t1_cp2

0x76bd,	// (0x0001293e) list_double_pane_t2_cp2_ParamLimits

0x76bd,	// (0x0001293e) list_double_pane_t2_cp2

0x76e7,	// (0x00012968) list_single_pane_cp2_g3

0x76f7,	// (0x00012978) list_single_pane_g1_cp2_ParamLimits

0x76f7,	// (0x00012978) list_single_pane_g1_cp2

0x7703,	// (0x00012984) list_single_pane_g2_cp2

0x770b,	// (0x0001298c) list_single_pane_t1_cp2_ParamLimits

0x770b,	// (0x0001298c) list_single_pane_t1_cp2

0x7723,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7723,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2

0x7731,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7731,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2

0x773d,	// (0x000129be) list_single_large_graphic_pane_g3_cp2

0x7745,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7745,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1

0x775f,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x775f,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2

0x9350,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9350,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2

0x931d,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x931d,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2

0x7703,	// (0x00012984) list_single_graphic_heading_pane_g5_cp2

0x935c,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x935c,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2

0x9372,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9372,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2

0x9311,	// (0x00014592) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9311,	// (0x00014592) list_single_2graphic_pane_g1_cp2

0x931d,	// (0x0001459e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x931d,	// (0x0001459e) list_single_2graphic_pane_g2_cp2

0x7703,	// (0x00012984) list_single_2graphic_pane_g3_cp2

0x932e,	// (0x000145af) list_single_2graphic_pane_g4_cp2_ParamLimits

0x932e,	// (0x000145af) list_single_2graphic_pane_g4_cp2

0x933a,	// (0x000145bb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x933a,	// (0x000145bb) list_single_2graphic_pane_t1_cp2

0x5a85,	// (0x00010d06) list_highlight_pane_g10_cp1

0x8ef9,	// (0x0001417a) list_highlight_pane_g1_cp1

0x8f01,	// (0x00014182) list_highlight_pane_g2_cp1

0x8f09,	// (0x0001418a) list_highlight_pane_g3_cp1

0x8f11,	// (0x00014192) list_highlight_pane_g4_cp1

0x8f19,	// (0x0001419a) list_highlight_pane_g5_cp1

0x8f21,	// (0x000141a2) list_highlight_pane_g6_cp1

0x8f29,	// (0x000141aa) list_highlight_pane_g7_cp1

0x8f31,	// (0x000141b2) list_highlight_pane_g8_cp1

0x8f39,	// (0x000141ba) list_highlight_pane_g9_cp1

0x1bd9,	// (0x0000ce5a) form_field_slider_pane_t3

0x1be9,	// (0x0000ce6a) form_field_slider_pane_t4

0x8e2d,	// (0x000140ae) slider_form_pane_ParamLimits

0x8e2d,	// (0x000140ae) slider_form_pane

0x5a8f,	// (0x00010d10) control_abbreviations

0x5a8f,	// (0x00010d10) control_conventions

0x5a8f,	// (0x00010d10) control_definitions

0x5a8f,	// (0x00010d10) format_table_attribute

0x95fb,	// (0x0001487c) bg_popup_preview_window_pane_g9

0x5a8f,	// (0x00010d10) format_table_data2

0x5a8f,	// (0x00010d10) format_table_data3

0x5a8f,	// (0x00010d10) format_table_data_example

0x0008,

0x5a8f,	// (0x00010d10) intro_purpose

0xf8f6,	// (0x0001ab77) bg_popup_preview_window_pane_g

0x5a8f,	// (0x00010d10) texts_category

0x5a8f,	// (0x00010d10) texts_graphics

0x7775,	// (0x000129f6) text_digital

0x7784,	// (0x00012a05) text_primary

0x7793,	// (0x00012a14) text_primary_small

0x77a2,	// (0x00012a23) text_secondary

0x77b1,	// (0x00012a32) text_title

0x9e47,	// (0x000150c8) bg_passive_tab_pane_g1_cp3_srt

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp3_srt

0x9e50,	// (0x000150d1) bg_passive_tab_pane_g3_cp3_srt

0x5e04,	// (0x00011085) bg_active_tab_pane_cp3_srt_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp3_srt

0x9e59,	// (0x000150da) tabs_4_active_pane_srt_g1

0x20d8,	// (0x0000d359) tabs_4_active_pane_srt_t1_ParamLimits

0x20d8,	// (0x0000d359) tabs_4_active_pane_srt_t1

0x9e47,	// (0x000150c8) bg_active_tab_pane_g1_cp3_copy1

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp3_copy1

0x9e50,	// (0x000150d1) bg_active_tab_pane_g3_cp3_copy1

0x5b6f,	// (0x00010df0) tabs_2_long_active_pane_srt_ParamLimits

0x5b6f,	// (0x00010df0) tabs_2_long_active_pane_srt

0x5b6f,	// (0x00010df0) tabs_2_long_passive_pane_srt_ParamLimits

0x5b6f,	// (0x00010df0) tabs_2_long_passive_pane_srt

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp4_srt

0x9a68,	// (0x00014ce9) bg_passive_tab_pane_g1_cp4_srt

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp4_srt

0x9a71,	// (0x00014cf2) bg_passive_tab_pane_g3_cp4_srt

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp4_srt_ParamLimits

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp4_srt

0x1ead,	// (0x0000d12e) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1ead,	// (0x0000d12e) tabs_2_long_active_pane_srt_t1

0x9a68,	// (0x00014ce9) bg_active_tab_pane_g1_cp4_srt

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp4_srt

0x9a71,	// (0x00014cf2) bg_active_tab_pane_g3_cp4_srt

0x5e04,	// (0x00011085) tabs_3_long_active_pane_srt_ParamLimits

0x5e04,	// (0x00011085) tabs_3_long_active_pane_srt

0x5e04,	// (0x00011085) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x5e04,	// (0x00011085) tabs_3_long_passive_pane_cp_srt

0x5e04,	// (0x00011085) tabs_3_long_passive_pane_srt_ParamLimits

0x5e04,	// (0x00011085) tabs_3_long_passive_pane_srt

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp5_srt

0x7492,	// (0x00012713) bg_passive_tab_pane_g1_cp5_srt

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp5_srt

0x749b,	// (0x0001271c) bg_passive_tab_pane_g3_cp5_srt

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp5_srt_ParamLimits

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp5_srt

0x1e97,	// (0x0000d118) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1e97,	// (0x0000d118) tabs_3_long_active_pane_srt_t1

0x7492,	// (0x00012713) bg_active_tab_pane_g1_cp5_srt

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp5_srt

0x749b,	// (0x0001271c) bg_active_tab_pane_g3_cp5_srt

0x9a48,	// (0x00014cc9) navi_text_pane_srt_t1

0x9a40,	// (0x00014cc1) navi_icon_pane_srt_g1

0x7974,	// (0x00012bf5) midp_editing_number_pane_srt

0x77c0,	// (0x00012a41) midp_ticker_pane_srt

0x797c,	// (0x00012bfd) midp_ticker_pane_srt_g1

0x7984,	// (0x00012c05) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001aa06) midp_ticker_pane_srt_g

0x798c,	// (0x00012c0d) midp_ticker_pane_srt_t1

0x9a31,	// (0x00014cb2) midp_editing_number_pane_t1_copy1

0x7b3a,	// (0x00012dbb) listscroll_midp_pane

0x7b3a,	// (0x00012dbb) midp_form_pane

0x782c,	// (0x00012aad) midp_info_popup_window_ParamLimits

0x782c,	// (0x00012aad) midp_info_popup_window

0x6b7d,	// (0x00011dfe) bg_popup_sub_pane_cp50_ParamLimits

0x6b7d,	// (0x00011dfe) bg_popup_sub_pane_cp50

0x8b2e,	// (0x00013daf) listscroll_midp_info_pane_ParamLimits

0x8b2e,	// (0x00013daf) listscroll_midp_info_pane

0x8b16,	// (0x00013d97) listscroll_form_midp_pane_ParamLimits

0x8b16,	// (0x00013d97) listscroll_form_midp_pane

0x8b22,	// (0x00013da3) scroll_bar_cp050

0x1bcd,	// (0x0000ce4e) list_midp_pane

0xaa28,	// (0x00015ca9) signal_pane_g2_cp

0x8a30,	// (0x00013cb1) listscroll_midp_info_pane_t1_ParamLimits

0x8a30,	// (0x00013cb1) listscroll_midp_info_pane_t1

0x8a48,	// (0x00013cc9) listscroll_midp_info_pane_t2_ParamLimits

0x8a48,	// (0x00013cc9) listscroll_midp_info_pane_t2

0x8a86,	// (0x00013d07) listscroll_midp_info_pane_t3_ParamLimits

0x8a86,	// (0x00013d07) listscroll_midp_info_pane_t3

0x8ac0,	// (0x00013d41) listscroll_midp_info_pane_t4_ParamLimits

0x8ac0,	// (0x00013d41) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001aab2) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001aab2) listscroll_midp_info_pane_t

0x6c3f,	// (0x00011ec0) scroll_pane_cp21

0x89d4,	// (0x00013c55) form_midp_field_choice_group_pane

0x89dd,	// (0x00013c5e) form_midp_field_text_pane

0x8a16,	// (0x00013c97) form_midp_field_time_pane

0x8a1e,	// (0x00013c9f) form_midp_gauge_slider_pane

0x8a27,	// (0x00013ca8) form_midp_gauge_wait_pane

0x5a8f,	// (0x00010d10) form_midp_image_pane

0x1bb1,	// (0x0000ce32) list_single_midp_pane_ParamLimits

0x1bb1,	// (0x0000ce32) list_single_midp_pane

0x1b8d,	// (0x0000ce0e) form_midp_field_text_pane_t1

0x8713,	// (0x00013994) input_focus_pane_cp050

0x8987,	// (0x00013c08) list_midp_form_text_pane

0x8917,	// (0x00013b98) form_midp_field_choice_group_pane_t1

0x8925,	// (0x00013ba6) input_focus_pane_cp051

0x8939,	// (0x00013bba) list_midp_choice_pane

0x5a8f,	// (0x00010d10) status_idle_pane

0x88fb,	// (0x00013b7c) form_midp_field_time_pane_t1

0x5a85,	// (0x00010d06) wait_anim_pane_g2_copy1

0x8909,	// (0x00013b8a) form_midp_field_time_pane_t2

0x0001,

0x78dc,	// (0x00012b5d) aid_navinavi_width_2_pane

0xf82c,	// (0x0001aaad) form_midp_field_time_pane_t

0x5a8f,	// (0x00010d10) input_focus_pane_cp052

0x5a8f,	// (0x00010d10) bg_input_focus_pane_cp040

0x88bb,	// (0x00013b3c) form_midp_gauge_slider_pane_t1

0x88c9,	// (0x00013b4a) form_midp_gauge_slider_pane_t2

0x1b6d,	// (0x0000cdee) form_midp_gauge_slider_pane_t3

0x1b7d,	// (0x0000cdfe) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001aaa4) form_midp_gauge_slider_pane_t

0x88f3,	// (0x00013b74) form_midp_slider_pane

0x5b6f,	// (0x00010df0) bg_input_focus_pane_cp041_ParamLimits

0x5b6f,	// (0x00010df0) bg_input_focus_pane_cp041

0x8888,	// (0x00013b09) form_midp_gauge_wait_pane_t1_ParamLimits

0x8888,	// (0x00013b09) form_midp_gauge_wait_pane_t1

0x889a,	// (0x00013b1b) form_midp_gauge_wait_pane_t2_ParamLimits

0x889a,	// (0x00013b1b) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001aa9f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001aa9f) form_midp_gauge_wait_pane_t

0x88ac,	// (0x00013b2d) form_midp_wait_pane_ParamLimits

0x88ac,	// (0x00013b2d) form_midp_wait_pane

0x8852,	// (0x00013ad3) form_midp_image_pane_g1

0x885b,	// (0x00013adc) form_midp_image_pane_t1

0x886a,	// (0x00013aeb) form_midp_image_pane_t2

0x8879,	// (0x00013afa) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001aa98) form_midp_image_pane_t

0x883a,	// (0x00013abb) list_single_midp_pane_g1

0x8843,	// (0x00013ac4) list_single_midp_pane_t1

0x1b56,	// (0x0000cdd7) list_midp_form_item_pane_ParamLimits

0x1b56,	// (0x0000cdd7) list_midp_form_item_pane

0x7884,	// (0x00012b05) list_midp_form_item_pane_t1

0x7893,	// (0x00012b14) midp_ticker_pane_g1

0x789f,	// (0x00012b20) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001a9ec) midp_ticker_pane_g

0x78ab,	// (0x00012b2c) midp_ticker_pane_t1

0x9ca7,	// (0x00014f28) midp_editing_number_pane_t1

0x9c85,	// (0x00014f06) midp_editing_number_pane

0x9c94,	// (0x00014f15) midp_ticker_pane

0x99f9,	// (0x00014c7a) ai_message_heading_pane

0x5a8f,	// (0x00010d10) bg_popup_window_pane_cp14

0x9a01,	// (0x00014c82) listscroll_ai_message_pane

0x9983,	// (0x00014c04) ai_message_heading_pane_g1_ParamLimits

0x9983,	// (0x00014c04) ai_message_heading_pane_g1

0x998f,	// (0x00014c10) ai_message_heading_pane_g2_ParamLimits

0x998f,	// (0x00014c10) ai_message_heading_pane_g2

0x999b,	// (0x00014c1c) ai_message_heading_pane_g3_ParamLimits

0x999b,	// (0x00014c1c) ai_message_heading_pane_g3

0x99a7,	// (0x00014c28) ai_message_heading_pane_g4_ParamLimits

0x99a7,	// (0x00014c28) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001abd9) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001abd9) ai_message_heading_pane_g

0x99b3,	// (0x00014c34) ai_message_heading_pane_t1_ParamLimits

0x99b3,	// (0x00014c34) ai_message_heading_pane_t1

0x99cd,	// (0x00014c4e) ai_message_heading_pane_t2_ParamLimits

0x99cd,	// (0x00014c4e) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001abe2) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001abe2) ai_message_heading_pane_t

0x99df,	// (0x00014c60) bg_popup_heading_pane_cp1_ParamLimits

0x99df,	// (0x00014c60) bg_popup_heading_pane_cp1

0x9971,	// (0x00014bf2) list_ai_message_pane_ParamLimits

0x9971,	// (0x00014bf2) list_ai_message_pane

0x6c3f,	// (0x00011ec0) scroll_pane_cp10

0x990d,	// (0x00014b8e) list_ai_message_pane_g1

0x9915,	// (0x00014b96) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001abb6) list_ai_message_pane_g

0x991d,	// (0x00014b9e) list_ai_message_pane_t1_ParamLimits

0x991d,	// (0x00014b9e) list_ai_message_pane_t1

0x9932,	// (0x00014bb3) list_ai_message_pane_t2_ParamLimits

0x9932,	// (0x00014bb3) list_ai_message_pane_t2

0x9947,	// (0x00014bc8) list_ai_message_pane_t3_ParamLimits

0x9947,	// (0x00014bc8) list_ai_message_pane_t3

0x995c,	// (0x00014bdd) list_ai_message_pane_t4_ParamLimits

0x995c,	// (0x00014bdd) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001abbb) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001abbb) list_ai_message_pane_t

0x1e60,	// (0x0000d0e1) cell_ai_soft_ind_pane_ParamLimits

0x1e60,	// (0x0000d0e1) cell_ai_soft_ind_pane

0x78bd,	// (0x00012b3e) cell_ai_soft_ind_pane_g1_ParamLimits

0x78bd,	// (0x00012b3e) cell_ai_soft_ind_pane_g1

0x5a8f,	// (0x00010d10) grid_highlight_cp1

0x78ca,	// (0x00012b4b) text_secondary_cp56_ParamLimits

0x78ca,	// (0x00012b4b) text_secondary_cp56

0x98cc,	// (0x00014b4d) example_general_pane_ParamLimits

0x98cc,	// (0x00014b4d) example_general_pane

0x98d8,	// (0x00014b59) example_parent_pane_g1_ParamLimits

0x98d8,	// (0x00014b59) example_parent_pane_g1

0x98e4,	// (0x00014b65) example_parent_pane_t1_ParamLimits

0x98e4,	// (0x00014b65) example_parent_pane_t1

0x13ad,	// (0x0000c62e) popup_preview_text_window_ParamLimits

0x13ad,	// (0x0000c62e) popup_preview_text_window

0x76ef,	// (0x00012970) list_single_pane_cp2_g4

0x5eae,	// (0x0001112f) bg_popup_preview_window_pane_ParamLimits

0x5eae,	// (0x0001112f) bg_popup_preview_window_pane

0x9603,	// (0x00014884) popup_preview_text_window_t1_ParamLimits

0x9603,	// (0x00014884) popup_preview_text_window_t1

0x9621,	// (0x000148a2) popup_preview_text_window_t2_ParamLimits

0x9621,	// (0x000148a2) popup_preview_text_window_t2

0x966a,	// (0x000148eb) popup_preview_text_window_t3_ParamLimits

0x966a,	// (0x000148eb) popup_preview_text_window_t3

0x96af,	// (0x00014930) popup_preview_text_window_t4_ParamLimits

0x96af,	// (0x00014930) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001ab8a) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001ab8a) popup_preview_text_window_t

0x972d,	// (0x000149ae) scroll_pane_cp11

0x85f9,	// (0x0001387a) bg_popup_preview_window_pane_g1

0x95c3,	// (0x00014844) bg_popup_preview_window_pane_g2

0x95cb,	// (0x0001484c) bg_popup_preview_window_pane_g3

0x95d3,	// (0x00014854) bg_popup_preview_window_pane_g4

0x95db,	// (0x0001485c) bg_popup_preview_window_pane_g5

0x95e3,	// (0x00014864) bg_popup_preview_window_pane_g6

0x95eb,	// (0x0001486c) bg_popup_preview_window_pane_g7

0x95f3,	// (0x00014874) bg_popup_preview_window_pane_g8

0x3e06,	// (0x0000f087) aid_popup_width_pane

0x1329,	// (0x0000c5aa) popup_midp_note_alarm_window_ParamLimits

0x1329,	// (0x0000c5aa) popup_midp_note_alarm_window

0x6918,	// (0x00011b99) data_form_pane_ParamLimits

0x0991,	// (0x0000bc12) form_field_data_pane_g1

0x099b,	// (0x0000bc1c) form_field_data_pane_t1_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_ParamLimits

0x6956,	// (0x00011bd7) data_form_wide_pane_ParamLimits

0x6962,	// (0x00011be3) form_field_data_wide_pane_g1

0x698e,	// (0x00011c0f) form_field_data_wide_pane_t1_ParamLimits

0x614d,	// (0x000113ce) input_focus_pane_cp6_ParamLimits

0x0b01,	// (0x0000bd82) input_popup_find_pane_g1_ParamLimits

0x0b01,	// (0x0000bd82) input_popup_find_pane_g1

0x4362,	// (0x0000f5e3) aid_navi_side_left_pane

0x4377,	// (0x0000f5f8) aid_navi_side_right_pane

0x8ff4,	// (0x00014275) bg_popup_window_pane_cp30_ParamLimits

0x8ff4,	// (0x00014275) bg_popup_window_pane_cp30

0x906e,	// (0x000142ef) popup_midp_note_alarm_window_g1_ParamLimits

0x906e,	// (0x000142ef) popup_midp_note_alarm_window_g1

0x909e,	// (0x0001431f) popup_midp_note_alarm_window_t1_ParamLimits

0x909e,	// (0x0001431f) popup_midp_note_alarm_window_t1

0x913f,	// (0x000143c0) popup_midp_note_alarm_window_t2_ParamLimits

0x913f,	// (0x000143c0) popup_midp_note_alarm_window_t2

0x91ed,	// (0x0001446e) popup_midp_note_alarm_window_t3_ParamLimits

0x91ed,	// (0x0001446e) popup_midp_note_alarm_window_t3

0x9215,	// (0x00014496) popup_midp_note_alarm_window_t4_ParamLimits

0x9215,	// (0x00014496) popup_midp_note_alarm_window_t4

0x9235,	// (0x000144b6) popup_midp_note_alarm_window_t5_ParamLimits

0x9235,	// (0x000144b6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001ab27) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001ab27) popup_midp_note_alarm_window_t

0x92e1,	// (0x00014562) wait_bar_pane_cp1_ParamLimits

0x92e1,	// (0x00014562) wait_bar_pane_cp1

0x5a8f,	// (0x00010d10) wait_anim_pane_copy1

0x5a8f,	// (0x00010d10) wait_border_pane_copy1

0x8cd2,	// (0x00013f53) wait_border_pane_g1_copy1

0x69a8,	// (0x00011c29) form_field_popup_pane_g1

0x09b5,	// (0x0000bc36) form_field_popup_pane_t1_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_cp7_ParamLimits

0x69ca,	// (0x00011c4b) list_form_pane_ParamLimits

0x69d6,	// (0x00011c57) form_field_popup_wide_pane_g1

0x69de,	// (0x00011c5f) form_field_popup_wide_pane_t1_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_cp8_ParamLimits

0x69f3,	// (0x00011c74) list_form_wide_pane_ParamLimits

0x9ed1,	// (0x00015152) aid_size_cell_graphic_pane

0x0a34,	// (0x0000bcb5) data_form_pane_t1_ParamLimits

0x2016,	// (0x0000d297) data_form_wide_pane_t1_ParamLimits

0x1769,	// (0x0000c9ea) bg_status_flat_pane

0x024e,	// (0x0000b4cf) title_pane_t1_ParamLimits

0x5b37,	// (0x00010db8) title_pane_t2_ParamLimits

0x5b5d,	// (0x00010dde) title_pane_t3_ParamLimits

0xf56f,	// (0x0001a7f0) title_pane_t_ParamLimits

0x70bb,	// (0x0001233c) level_1_signal_ParamLimits

0x70c8,	// (0x00012349) level_2_signal_ParamLimits

0x70d5,	// (0x00012356) level_3_signal_ParamLimits

0x70e2,	// (0x00012363) level_4_signal_ParamLimits

0x70ef,	// (0x00012370) level_5_signal_ParamLimits

0x70fc,	// (0x0001237d) level_6_signal_ParamLimits

0x7109,	// (0x0001238a) level_7_signal_ParamLimits

0x70bb,	// (0x0001233c) level_1_battery_ParamLimits

0x70c8,	// (0x00012349) level_2_battery_ParamLimits

0x70d5,	// (0x00012356) level_3_battery_ParamLimits

0x70e2,	// (0x00012363) level_4_battery_ParamLimits

0x70ef,	// (0x00012370) level_5_battery_ParamLimits

0x70fc,	// (0x0001237d) level_6_battery_ParamLimits

0x7109,	// (0x0001238a) level_7_battery_ParamLimits

0x8ef9,	// (0x0001417a) bg_status_flat_pane_g1

0x8f01,	// (0x00014182) bg_status_flat_pane_g2

0x8f09,	// (0x0001418a) bg_status_flat_pane_g3

0x8f11,	// (0x00014192) bg_status_flat_pane_g4

0x8f19,	// (0x0001419a) bg_status_flat_pane_g5

0x8f21,	// (0x000141a2) bg_status_flat_pane_g6

0x8f29,	// (0x000141aa) bg_status_flat_pane_g7

0x02e2,	// (0x0000b563) tabs_3_active_pane_t1_ParamLimits

0x02e2,	// (0x0000b563) tabs_3_passive_pane_t1_ParamLimits

0x02fc,	// (0x0000b57d) tabs_4_active_pane_t1_ParamLimits

0x02fc,	// (0x0000b57d) tabs_4_1_passive_pane_t1_ParamLimits

0x0b17,	// (0x0000bd98) tabs_2_active_pane_t1_ParamLimits

0x0b17,	// (0x0000bd98) tabs_2_passive_pane_t1_ParamLimits

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp4_ParamLimits

0x0b29,	// (0x0000bdaa) tabs_2_long_active_pane_t1_ParamLimits

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp4_ParamLimits

0x4928,	// (0x0000fba9) list_single_midp_graphic_pane_t1_ParamLimits

0x5b6f,	// (0x00010df0) bg_active_tab_pane_cp5_ParamLimits

0x0b3c,	// (0x0000bdbd) tabs_3_long_active_pane_t1_ParamLimits

0x7b3a,	// (0x00012dbb) bg_passive_tab_pane_cp5_ParamLimits

0x4928,	// (0x0000fba9) list_single_midp_graphic_pane_t1

0x1769,	// (0x0000c9ea) bg_status_flat_pane_ParamLimits

0x8263,	// (0x000134e4) indicator_pane_cp2_ParamLimits

0x8263,	// (0x000134e4) indicator_pane_cp2

0x18e1,	// (0x0000cb62) navi_pane_srt_ParamLimits

0x18e1,	// (0x0000cb62) navi_pane_srt

0x83ac,	// (0x0001362d) popup_clock_digital_analogue_window_cp1

0x5c66,	// (0x00010ee7) indicator_pane_t1

0x77c0,	// (0x00012a41) copy_highlight_pane

0x77c0,	// (0x00012a41) cursor_graphics_pane

0x77c0,	// (0x00012a41) graphic_within_text_pane

0x77c0,	// (0x00012a41) link_highlight_pane

0x96f0,	// (0x00014971) popup_preview_text_window_t5_ParamLimits

0x96f0,	// (0x00014971) popup_preview_text_window_t5

0x78e4,	// (0x00012b65) cursor_digital_pane

0x78e4,	// (0x00012b65) cursor_primary_pane

0x78f5,	// (0x00012b76) cursor_primary_small_pane

0x78fd,	// (0x00012b7e) cursor_secondary_pane

0x7905,	// (0x00012b86) cursor_title_pane

0x78e4,	// (0x00012b65) link_highlight_digital_pane

0x78ec,	// (0x00012b6d) link_highlight_primary_pane

0x78f5,	// (0x00012b76) link_highlight_primary_small_pane

0x78fd,	// (0x00012b7e) link_highlight_secondary_pane

0x7905,	// (0x00012b86) link_highlight_title_pane

0x78e4,	// (0x00012b65) copy_highlight_digital_pane

0x78e4,	// (0x00012b65) copy_highlight_primary_pane

0x78f5,	// (0x00012b76) copy_highlight_primary_small_pane

0x78fd,	// (0x00012b7e) copy_highlight_secondary_pane

0x7905,	// (0x00012b86) copy_highlight_title_pane

0x78fd,	// (0x00012b7e) graphic_text_digital_pane

0x8f97,	// (0x00014218) graphic_text_primary_pane

0x8fa0,	// (0x00014221) graphic_text_primary_small_pane

0x78f5,	// (0x00012b76) graphic_text_secondary_pane

0x78e4,	// (0x00012b65) graphic_text_title_pane

0x0e37,	// (0x0000c0b8) cursor_primary_pane_g1

0x8f89,	// (0x0001420a) cursor_text_primary_t1

0x1c0d,	// (0x0000ce8e) cursor_primary_small_pane_g1

0x8f7b,	// (0x000141fc) cursor_text_primary_small_t1

0x1c03,	// (0x0000ce84) cursor_primary_small_pane_g1_copy1

0x8f63,	// (0x000141e4) cursor_text_primary_small_t1_copy1

0x8f41,	// (0x000141c2) cursor_text_title_t1

0x1bf9,	// (0x0000ce7a) cursor_title_pane_g1

0x0e37,	// (0x0000c0b8) cursor_digital_pane_g1

0x7917,	// (0x00012b98) cursor_text_digital_t1

0x8ee2,	// (0x00014163) link_highlight_primary_pane_g1

0x8eea,	// (0x0001416b) link_highlight_primary_pane_t1

0x7925,	// (0x00012ba6) link_highlight_primary_small_pane_g1

0x792d,	// (0x00012bae) link_highlight_primary_small_pane_t1

0x7925,	// (0x00012ba6) link_highlight_secondary_pane_g1

0x793c,	// (0x00012bbd) link_highlight_secondary_pane_t1

0x8e56,	// (0x000140d7) link_highlight_title_pane_g1

0x8e5e,	// (0x000140df) link_highlight_title_pane_t1

0x8e3f,	// (0x000140c0) link_highlight_digital_pane_g1

0x8e47,	// (0x000140c8) link_highlight_digital_pane_t1

0x8d17,	// (0x00013f98) copy_highlight_primary_pane_g1

0x8d1f,	// (0x00013fa0) copy_highlight_primary_pane_t1

0x8cf1,	// (0x00013f72) copy_highlight_primary_small_pane_g1

0x8d08,	// (0x00013f89) copy_highlight_primary_small_pane_t1

0x794b,	// (0x00012bcc) copy_highlight_secondary_pane_g1

0x7953,	// (0x00012bd4) copy_highlight_secondary_pane_t1

0x8cf1,	// (0x00013f72) copy_highlight_title_pane_g1

0x8cf9,	// (0x00013f7a) copy_highlight_title_pane_t1

0x8d17,	// (0x00013f98) copy_highlight_digital_pane_g1

0xa09f,	// (0x00015320) copy_highlight_digital_pane_t1

0x9ff3,	// (0x00015274) graphic_text_primary_pane_g1

0xa083,	// (0x00015304) graphic_text_primary_pane_t1

0xa091,	// (0x00015312) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001ac56) graphic_text_primary_pane_t

0xa05f,	// (0x000152e0) graphic_text_primary_small_pane_g1

0xa067,	// (0x000152e8) graphic_text_primary_small_pane_t1

0xa075,	// (0x000152f6) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001ac51) graphic_text_primary_small_pane_t

0xa03b,	// (0x000152bc) graphic_text_secondary_pane_g1

0xa043,	// (0x000152c4) graphic_text_secondary_pane_t1

0xa051,	// (0x000152d2) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001ac4c) graphic_text_secondary_pane_t

0xa017,	// (0x00015298) graphic_text_title_pane_g1

0xa01f,	// (0x000152a0) graphic_text_title_pane_t1

0xa02d,	// (0x000152ae) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001ac47) graphic_text_title_pane_t

0x9ff3,	// (0x00015274) graphic_text_digital_pane_g1

0x9ffb,	// (0x0001527c) graphic_text_digital_pane_t1

0xa009,	// (0x0001528a) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001ac42) graphic_text_digital_pane_t

0x5b6f,	// (0x00010df0) navi_icon_pane_srt_ParamLimits

0x5b6f,	// (0x00010df0) navi_icon_pane_srt

0x5a8f,	// (0x00010d10) navi_midp_pane_srt

0x5a8f,	// (0x00010d10) navi_navi_pane_srt

0x5b6f,	// (0x00010df0) navi_text_pane_srt_ParamLimits

0x5b6f,	// (0x00010df0) navi_text_pane_srt

0x9fbe,	// (0x0001523f) navi_navi_icon_text_pane_srt

0x9fc6,	// (0x00015247) navi_navi_pane_srt_g1_ParamLimits

0x9fc6,	// (0x00015247) navi_navi_pane_srt_g1

0x9fd8,	// (0x00015259) navi_navi_pane_srt_g2_ParamLimits

0x9fd8,	// (0x00015259) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001ac3d) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001ac3d) navi_navi_pane_srt_g

0x9fea,	// (0x0001526b) navi_navi_tabs_pane_srt

0x9fbe,	// (0x0001523f) navi_navi_text_pane_srt

0x9fbe,	// (0x0001523f) navi_navi_volume_pane_srt

0x9faf,	// (0x00015230) navi_navi_text_pane_srt_t1

0x4ca8,	// (0x0000ff29) navi_navi_volume_pane_srt_g1

0x4cb0,	// (0x0000ff31) volume_small_pane_srt_ParamLimits

0x4cb0,	// (0x0000ff31) volume_small_pane_srt

0x4642,	// (0x0000f8c3) volume_small_pane_srt_g1_ParamLimits

0x4642,	// (0x0000f8c3) volume_small_pane_srt_g1

0x4652,	// (0x0000f8d3) volume_small_pane_srt_g2_ParamLimits

0x4652,	// (0x0000f8d3) volume_small_pane_srt_g2

0x4663,	// (0x0000f8e4) volume_small_pane_srt_g3_ParamLimits

0x4663,	// (0x0000f8e4) volume_small_pane_srt_g3

0x4674,	// (0x0000f8f5) volume_small_pane_srt_g4_ParamLimits

0x4674,	// (0x0000f8f5) volume_small_pane_srt_g4

0x4685,	// (0x0000f906) volume_small_pane_srt_g5_ParamLimits

0x4685,	// (0x0000f906) volume_small_pane_srt_g5

0x4696,	// (0x0000f917) volume_small_pane_srt_g6_ParamLimits

0x4696,	// (0x0000f917) volume_small_pane_srt_g6

0x46a7,	// (0x0000f928) volume_small_pane_srt_g7_ParamLimits

0x46a7,	// (0x0000f928) volume_small_pane_srt_g7

0x46b8,	// (0x0000f939) volume_small_pane_srt_g8_ParamLimits

0x46b8,	// (0x0000f939) volume_small_pane_srt_g8

0x46c9,	// (0x0000f94a) volume_small_pane_srt_g9_ParamLimits

0x46c9,	// (0x0000f94a) volume_small_pane_srt_g9

0x46da,	// (0x0000f95b) volume_small_pane_srt_g10_ParamLimits

0x46da,	// (0x0000f95b) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001a9f1) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001a9f1) volume_small_pane_srt_g

0x5f57,	// (0x000111d8) query_popup_data_pane_cp2

0x9f95,	// (0x00015216) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9f95,	// (0x00015216) navi_navi_icon_text_pane_srt_t1

0x8f97,	// (0x00014218) navi_tabs_2_long_pane_srt

0x8f97,	// (0x00014218) navi_tabs_2_pane_srt

0x8f97,	// (0x00014218) navi_tabs_3_long_pane_srt

0x8f97,	// (0x00014218) navi_tabs_3_pane_srt

0x8f97,	// (0x00014218) navi_tabs_4_pane_srt

0x4c88,	// (0x0000ff09) tabs_2_active_pane_srt_ParamLimits

0x4c88,	// (0x0000ff09) tabs_2_active_pane_srt

0x4c98,	// (0x0000ff19) tabs_2_passive_pane_srt_ParamLimits

0x4c98,	// (0x0000ff19) tabs_2_passive_pane_srt

0x8713,	// (0x00013994) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8713,	// (0x00013994) bg_passive_tab_pane_cp1_srt

0x9f61,	// (0x000151e2) bg_passive_tab_pane_g1_cp1_srt

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp1_srt

0x9f6a,	// (0x000151eb) bg_passive_tab_pane_g3_cp1_srt

0x5e04,	// (0x00011085) bg_active_tab_pane_cp1_srt_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp1_srt

0x9f73,	// (0x000151f4) tabs_2_active_pane_srt_g1

0x2155,	// (0x0000d3d6) tabs_2_active_pane_srt_t1_ParamLimits

0x2155,	// (0x0000d3d6) tabs_2_active_pane_srt_t1

0x9f61,	// (0x000151e2) bg_active_tab_pane_g1_cp1_srt

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp1_srt

0x9f6a,	// (0x000151eb) bg_active_tab_pane_g3_cp1_srt

0x4c55,	// (0x0000fed6) tabs_3_active_pane_srt_ParamLimits

0x4c55,	// (0x0000fed6) tabs_3_active_pane_srt

0x4c66,	// (0x0000fee7) tabs_3_passive_pane_cp_srt_ParamLimits

0x4c66,	// (0x0000fee7) tabs_3_passive_pane_cp_srt

0x4c77,	// (0x0000fef8) tabs_3_passive_pane_srt_ParamLimits

0x4c77,	// (0x0000fef8) tabs_3_passive_pane_srt

0x8713,	// (0x00013994) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8713,	// (0x00013994) bg_passive_tab_pane_cp2_srt

0x7962,	// (0x00012be3) bg_passive_tab_pane_g1_cp2_srt

0x7408,	// (0x00012689) bg_passive_tab_pane_g2_cp2_srt

0x796b,	// (0x00012bec) bg_passive_tab_pane_g3_cp2_srt

0x5e04,	// (0x00011085) bg_active_tab_pane_cp2_srt_ParamLimits

0x5e04,	// (0x00011085) bg_active_tab_pane_cp2_srt

0x9f47,	// (0x000151c8) tabs_3_active_pane_srt_g1

0x213f,	// (0x0000d3c0) tabs_3_active_pane_srt_t1_ParamLimits

0x213f,	// (0x0000d3c0) tabs_3_active_pane_srt_t1

0x7962,	// (0x00012be3) bg_active_tab_pane_g1_cp2_srt

0x7408,	// (0x00012689) bg_active_tab_pane_g2_cp2_srt

0x796b,	// (0x00012bec) bg_active_tab_pane_g3_cp2_srt

0x4c0d,	// (0x0000fe8e) tabs_4_active_pane_srt_ParamLimits

0x4c0d,	// (0x0000fe8e) tabs_4_active_pane_srt

0x4c1f,	// (0x0000fea0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4c1f,	// (0x0000fea0) tabs_4_passive_pane_cp2_srt

0x7ac0,	// (0x00012d41) aid_size_cell_toolbar

0x9ad3,	// (0x00014d54) main_idle_act_pane_ParamLimits

0x7cd9,	// (0x00012f5a) popup_large_graphic_colour_window_ParamLimits

0x162d,	// (0x0000c8ae) popup_toolbar_window_ParamLimits

0x162d,	// (0x0000c8ae) popup_toolbar_window

0x9cd5,	// (0x00014f56) list_single_graphic_2heading_pane_ParamLimits

0x9cd5,	// (0x00014f56) list_single_graphic_2heading_pane

0x6e6e,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane

0x6e80,	// (0x00012101) aid_size_cell_apps_grid_prt_pane

0x7b3a,	// (0x00012dbb) bg_wml_button_pane_cp1_ParamLimits

0x7b3a,	// (0x00012dbb) bg_wml_button_pane_cp1

0x1b8d,	// (0x0000ce0e) form_midp_field_text_pane_t1_ParamLimits

0x8713,	// (0x00013994) input_focus_pane_cp050_ParamLimits

0x8987,	// (0x00013c08) list_midp_form_text_pane_ParamLimits

0x8925,	// (0x00013ba6) input_focus_pane_cp051_ParamLimits

0x8939,	// (0x00013bba) list_midp_choice_pane_ParamLimits

0x1b1e,	// (0x0000cd9f) list_single_2graphic_pane_cp3_ParamLimits

0x1b1e,	// (0x0000cd9f) list_single_2graphic_pane_cp3

0x1b34,	// (0x0000cdb5) list_single_midp_graphic_pane_ParamLimits

0x1b34,	// (0x0000cdb5) list_single_midp_graphic_pane

0x482f,	// (0x0000fab0) list_single_graphic_2heading_pane_g1_ParamLimits

0x482f,	// (0x0000fab0) list_single_graphic_2heading_pane_g1

0x483b,	// (0x0000fabc) list_single_graphic_2heading_pane_g4_ParamLimits

0x483b,	// (0x0000fabc) list_single_graphic_2heading_pane_g4

0x4847,	// (0x0000fac8) list_single_graphic_2heading_pane_g5_ParamLimits

0x4847,	// (0x0000fac8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001aa44) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001aa44) list_single_graphic_2heading_pane_g

0x4853,	// (0x0000fad4) list_single_graphic_2heading_pane_t1_ParamLimits

0x4853,	// (0x0000fad4) list_single_graphic_2heading_pane_t1

0x4867,	// (0x0000fae8) list_single_graphic_2heading_pane_t2_ParamLimits

0x4867,	// (0x0000fae8) list_single_graphic_2heading_pane_t2

0x4881,	// (0x0000fb02) list_single_graphic_2heading_pane_t3_ParamLimits

0x4881,	// (0x0000fb02) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001aa4b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001aa4b) list_single_graphic_2heading_pane_t

0x8509,	// (0x0001378a) bg_popup_sub_pane_cp2

0x8533,	// (0x000137b4) grid_toobar_pane

0x4899,	// (0x0000fb1a) cell_toolbar_pane_ParamLimits

0x4899,	// (0x0000fb1a) cell_toolbar_pane

0x859d,	// (0x0001381e) cell_toolbar_pane_g1_ParamLimits

0x859d,	// (0x0001381e) cell_toolbar_pane_g1

0x85b1,	// (0x00013832) cell_toolbar_pane_g2_ParamLimits

0x85b1,	// (0x00013832) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001aa59) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001aa59) cell_toolbar_pane_g

0x85d3,	// (0x00013854) grid_highlight_pane_cp2_ParamLimits

0x85d3,	// (0x00013854) grid_highlight_pane_cp2

0x85ed,	// (0x0001386e) toolbar_button_pane

0x85f9,	// (0x0001387a) toolbar_button_pane_g1

0x8601,	// (0x00013882) toolbar_button_pane_g2

0x8609,	// (0x0001388a) toolbar_button_pane_g3

0x8611,	// (0x00013892) toolbar_button_pane_g4

0x8619,	// (0x0001389a) toolbar_button_pane_g5

0x8621,	// (0x000138a2) toolbar_button_pane_g6

0x8629,	// (0x000138aa) toolbar_button_pane_g7

0x8631,	// (0x000138b2) toolbar_button_pane_g8

0x8639,	// (0x000138ba) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001aa5e) toolbar_button_pane_g

0x48d1,	// (0x0000fb52) list_single_2graphic_pane_g1_cp3_ParamLimits

0x48d1,	// (0x0000fb52) list_single_2graphic_pane_g1_cp3

0xde66,	// (0x000190e7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xde66,	// (0x000190e7) list_single_2graphic_pane_g2_cp3

0x48ee,	// (0x0000fb6f) list_single_2graphic_pane_g3_cp3

0x48f6,	// (0x0000fb77) list_single_2graphic_pane_g4_cp3_ParamLimits

0x48f6,	// (0x0000fb77) list_single_2graphic_pane_g4_cp3

0x4902,	// (0x0000fb83) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4902,	// (0x0000fb83) list_single_2graphic_pane_t1_cp3

0x491c,	// (0x0000fb9d) list_single_midp_graphic_pane_g2_ParamLimits

0x491c,	// (0x0000fb9d) list_single_midp_graphic_pane_g2

0x7ac8,	// (0x00012d49) aid_zoom_text_primary

0x7ad0,	// (0x00012d51) aid_zoom_text_secondary

0x7a1f,	// (0x00012ca0) status_small_pane_g7_ParamLimits

0x7a1f,	// (0x00012ca0) status_small_pane_g7

0x7a42,	// (0x00012cc3) status_small_pane_t1_ParamLimits

0x022a,	// (0x0000b4ab) title_pane_g2

0x0003,

0xf566,	// (0x0001a7e7) title_pane_g

0x04b5,	// (0x0000b736) aid_size_cell_colour_1_pane_ParamLimits

0x04b5,	// (0x0000b736) aid_size_cell_colour_1_pane

0x04c9,	// (0x0000b74a) aid_size_cell_colour_2_pane_ParamLimits

0x04c9,	// (0x0000b74a) aid_size_cell_colour_2_pane

0x04dd,	// (0x0000b75e) aid_size_cell_colour_3_pane_ParamLimits

0x04dd,	// (0x0000b75e) aid_size_cell_colour_3_pane

0x04f1,	// (0x0000b772) aid_size_cell_colour_4_pane_ParamLimits

0x04f1,	// (0x0000b772) aid_size_cell_colour_4_pane

0x429e,	// (0x0000f51f) title_pane_stacon_g1_ParamLimits

0x429e,	// (0x0000f51f) title_pane_stacon_g1

0x8d76,	// (0x00013ff7) popup_note_wait_window_g3_ParamLimits

0x8d76,	// (0x00013ff7) popup_note_wait_window_g3

0x8dec,	// (0x0001406d) popup_note_wait_window_t5_ParamLimits

0x8dec,	// (0x0001406d) popup_note_wait_window_t5

0x5a8f,	// (0x00010d10) main_feb_china_hwr_fs_writing_pane

0x1055,	// (0x0000c2d6) popup_feb_china_hwr_fs_window_ParamLimits

0x1055,	// (0x0000c2d6) popup_feb_china_hwr_fs_window

0xde77,	// (0x000190f8) aid_size_cell_hwr_fs_ParamLimits

0xde77,	// (0x000190f8) aid_size_cell_hwr_fs

0x8713,	// (0x00013994) bg_popup_sub_pane_cp3_ParamLimits

0x8713,	// (0x00013994) bg_popup_sub_pane_cp3

0xde8c,	// (0x0001910d) grid_hwr_fs_pane_ParamLimits

0xde8c,	// (0x0001910d) grid_hwr_fs_pane

0x496b,	// (0x0000fbec) linegrid_hwr_fs_pane_ParamLimits

0x496b,	// (0x0000fbec) linegrid_hwr_fs_pane

0xdea4,	// (0x00019125) cell_hwr_fs_pane_ParamLimits

0xdea4,	// (0x00019125) cell_hwr_fs_pane

0x871f,	// (0x000139a0) linegrid_hwr_fs_pane_g1_ParamLimits

0x871f,	// (0x000139a0) linegrid_hwr_fs_pane_g1

0x1ae4,	// (0x0000cd65) linegrid_hwr_fs_pane_g2_ParamLimits

0x1ae4,	// (0x0000cd65) linegrid_hwr_fs_pane_g2

0x873d,	// (0x000139be) linegrid_hwr_fs_pane_g3_ParamLimits

0x873d,	// (0x000139be) linegrid_hwr_fs_pane_g3

0x499d,	// (0x0000fc1e) linegrid_hwr_fs_pane_g4_ParamLimits

0x499d,	// (0x0000fc1e) linegrid_hwr_fs_pane_g4

0x49b7,	// (0x0000fc38) linegrid_hwr_fs_pane_g5_ParamLimits

0x49b7,	// (0x0000fc38) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001aa84) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001aa84) linegrid_hwr_fs_pane_g

0x8749,	// (0x000139ca) cell_hwr_fs_pane_g1_ParamLimits

0x8749,	// (0x000139ca) cell_hwr_fs_pane_g1

0x8442,	// (0x000136c3) cell_hwr_fs_pane_g2_ParamLimits

0x8442,	// (0x000136c3) cell_hwr_fs_pane_g2

0x1af6,	// (0x0000cd77) cell_hwr_fs_pane_g3_ParamLimits

0x1af6,	// (0x0000cd77) cell_hwr_fs_pane_g3

0x1b03,	// (0x0000cd84) cell_hwr_fs_pane_g4_ParamLimits

0x1b03,	// (0x0000cd84) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001aa8f) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001aa8f) cell_hwr_fs_pane_g

0xdeca,	// (0x0001914b) cell_hwr_fs_pane_t1

0x5a8f,	// (0x00010d10) grid_highlight_pane_cp6

0x5a8f,	// (0x00010d10) main_idle_act2_pane

0x6c26,	// (0x00011ea7) aid_inside_area_popup_secondary

0x1d69,	// (0x0000cfea) aid_inside_area_window_primary_ParamLimits

0x1d69,	// (0x0000cfea) aid_inside_area_window_primary

0xa0ae,	// (0x0001532f) ai2_news_ticker_pane

0xa0b6,	// (0x00015337) aid_size_cell_ai1_link_ParamLimits

0xa0b6,	// (0x00015337) aid_size_cell_ai1_link

0xa0d0,	// (0x00015351) popup_ai2_data_window_ParamLimits

0xa0d0,	// (0x00015351) popup_ai2_data_window

0xa0e4,	// (0x00015365) popup_ai2_link_window_ParamLimits

0xa0e4,	// (0x00015365) popup_ai2_link_window

0x8713,	// (0x00013994) bg_popup_sub_pane_cp4_ParamLimits

0x8713,	// (0x00013994) bg_popup_sub_pane_cp4

0xa0f8,	// (0x00015379) grid_ai2_link_pane_ParamLimits

0xa0f8,	// (0x00015379) grid_ai2_link_pane

0xa10f,	// (0x00015390) popup_ai2_link_window_g1_ParamLimits

0xa10f,	// (0x00015390) popup_ai2_link_window_g1

0xa11b,	// (0x0001539c) popup_ai2_link_window_g2_ParamLimits

0xa11b,	// (0x0001539c) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001ac5b) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001ac5b) popup_ai2_link_window_g

0xa12a,	// (0x000153ab) ai2_mp_button_pane

0xa132,	// (0x000153b3) ai2_mp_volume_pane

0x8925,	// (0x00013ba6) bg_popup_sub_pane_cp5_ParamLimits

0x8925,	// (0x00013ba6) bg_popup_sub_pane_cp5

0xa13a,	// (0x000153bb) heading_ai2_gene_pane_ParamLimits

0xa13a,	// (0x000153bb) heading_ai2_gene_pane

0xa146,	// (0x000153c7) list_ai2_gene_pane_ParamLimits

0xa146,	// (0x000153c7) list_ai2_gene_pane

0xa18e,	// (0x0001540f) cell_ai2_link_pane_ParamLimits

0xa18e,	// (0x0001540f) cell_ai2_link_pane

0xa1a4,	// (0x00015425) cell_ai2_link_pane_g1

0x5a8f,	// (0x00010d10) grid_highlight_pane_cp7

0x4cc5,	// (0x0000ff46) ai2_mp_volume_pane_g1

0xa275,	// (0x000154f6) ai2_mp_volume_pane_g2

0xa1ea,	// (0x0001546b) list_ai2_gene_pane_t1

0xa27d,	// (0x000154fe) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001ac74) ai2_mp_volume_pane_g

0x4ccd,	// (0x0000ff4e) volume_small_pane_cp3

0xa285,	// (0x00015506) aid_size_cell_ai2_button

0xa28d,	// (0x0001550e) grid_ai2_button_pane

0xa296,	// (0x00015517) cell_ai2_button_pane_ParamLimits

0xa296,	// (0x00015517) cell_ai2_button_pane

0x5a85,	// (0x00010d06) cell_ai2_button_pane_g1

0x5a8f,	// (0x00010d10) grid_highlight_pane_cp8

0xa235,	// (0x000154b6) ai2_gene_pane_t1_ParamLimits

0xa235,	// (0x000154b6) ai2_gene_pane_t1

0x0fcb,	// (0x0000c24c) aid_height_parent_landscape

0x1ec4,	// (0x0000d145) aid_height_set_list

0x9ad3,	// (0x00014d54) aid_size_parent

0x9ed1,	// (0x00015152) aid_size_cell_graphic_pane_ParamLimits

0xa156,	// (0x000153d7) popup_ai2_data_window_g1_ParamLimits

0xa156,	// (0x000153d7) popup_ai2_data_window_g1

0xa162,	// (0x000153e3) ai2_news_ticker_pane_g1

0xa16a,	// (0x000153eb) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001ac60) ai2_news_ticker_pane_g

0xa172,	// (0x000153f3) ai2_news_ticker_pane_t1

0xa180,	// (0x00015401) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001ac65) ai2_news_ticker_pane_t

0xa1ad,	// (0x0001542e) heading_ai2_gene_pane_g1

0xa1b5,	// (0x00015436) heading_ai2_gene_pane_t1_ParamLimits

0xa1b5,	// (0x00015436) heading_ai2_gene_pane_t1

0xa1ca,	// (0x0001544b) list_highlight_pane_cp6

0xa1d2,	// (0x00015453) ai2_gene_pane_ParamLimits

0xa1d2,	// (0x00015453) ai2_gene_pane

0xa1f8,	// (0x00015479) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001ac6a) list_ai2_gene_pane_t

0xa206,	// (0x00015487) list_highlight_pane_cp8_ParamLimits

0xa206,	// (0x00015487) list_highlight_pane_cp8

0xa217,	// (0x00015498) ai2_gene_pane_g1_ParamLimits

0xa217,	// (0x00015498) ai2_gene_pane_g1

0xa229,	// (0x000154aa) ai2_gene_pane_g2_ParamLimits

0xa229,	// (0x000154aa) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001ac6f) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001ac6f) ai2_gene_pane_g

0x6372,	// (0x000115f3) scroll_pane_cp12

0xde25,	// (0x000190a6) control_pane_t3_ParamLimits

0xde25,	// (0x000190a6) control_pane_t3

0x7a33,	// (0x00012cb4) status_small_pane_g8_ParamLimits

0x7a33,	// (0x00012cb4) status_small_pane_g8

0x10e8,	// (0x0000c369) popup_find_window_ParamLimits

0x1363,	// (0x0000c5e4) popup_note_image_window_ParamLimits

0x856f,	// (0x000137f0) list_double2_graphic_pane_vc_g1_ParamLimits

0x856f,	// (0x000137f0) list_double2_graphic_pane_vc_g1

0x7693,	// (0x00012914) list_double2_graphic_pane_vc_g2_ParamLimits

0x7693,	// (0x00012914) list_double2_graphic_pane_vc_g2

0x857b,	// (0x000137fc) list_double2_graphic_pane_vc_g3_ParamLimits

0x857b,	// (0x000137fc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001aa52) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001aa52) list_double2_graphic_pane_vc_g

0x8587,	// (0x00013808) list_double2_graphic_pane_vc_t1_ParamLimits

0x8587,	// (0x00013808) list_double2_graphic_pane_vc_t1

0x7693,	// (0x00012914) list_single_heading_pane_vc_g1_ParamLimits

0x7693,	// (0x00012914) list_single_heading_pane_vc_g1

0x857b,	// (0x000137fc) list_single_heading_pane_vc_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_heading_pane_vc_g

0x8641,	// (0x000138c2) list_single_heading_pane_vc_t1_ParamLimits

0x8641,	// (0x000138c2) list_single_heading_pane_vc_t1

0x8657,	// (0x000138d8) list_single_heading_pane_vc_t2_ParamLimits

0x8657,	// (0x000138d8) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001aa73) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001aa73) list_single_heading_pane_vc_t

0x866b,	// (0x000138ec) list_setting_number_pane_vc_g1_ParamLimits

0x866b,	// (0x000138ec) list_setting_number_pane_vc_g1

0x8677,	// (0x000138f8) list_setting_number_pane_vc_g2_ParamLimits

0x8677,	// (0x000138f8) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001aa78) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001aa78) list_setting_number_pane_vc_g

0x8683,	// (0x00013904) list_setting_number_pane_vc_t1_ParamLimits

0x8683,	// (0x00013904) list_setting_number_pane_vc_t1

0x8697,	// (0x00013918) list_setting_number_pane_vc_t2_ParamLimits

0x8697,	// (0x00013918) list_setting_number_pane_vc_t2

0x86b1,	// (0x00013932) list_setting_number_pane_vc_t3_ParamLimits

0x86b1,	// (0x00013932) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001aa7d) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001aa7d) list_setting_number_pane_vc_t

0x86d7,	// (0x00013958) set_value_pane_vc_ParamLimits

0x86d7,	// (0x00013958) set_value_pane_vc

0x9cd5,	// (0x00014f56) list_double2_graphic_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double2_graphic_pane_vc

0x9ce9,	// (0x00014f6a) list_double2_large_graphic_pane_vc_ParamLimits

0x9ce9,	// (0x00014f6a) list_double2_large_graphic_pane_vc

0x9cd5,	// (0x00014f56) list_double2_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double2_pane_vc

0x9cd5,	// (0x00014f56) list_double_graphic_heading_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_graphic_heading_pane_vc

0x9cd5,	// (0x00014f56) list_double_graphic_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_graphic_pane_vc

0x9cd5,	// (0x00014f56) list_double_heading_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_heading_pane_vc

0x9ce9,	// (0x00014f6a) list_double_large_graphic_pane_vc_ParamLimits

0x9ce9,	// (0x00014f6a) list_double_large_graphic_pane_vc

0x9cd5,	// (0x00014f56) list_double_number_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_number_pane_vc

0x9cd5,	// (0x00014f56) list_double_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_pane_vc

0x9cd5,	// (0x00014f56) list_double_time_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_double_time_pane_vc

0x9cd5,	// (0x00014f56) list_setting_number_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_setting_number_pane_vc

0x9cd5,	// (0x00014f56) list_setting_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_setting_pane_vc

0x9cd5,	// (0x00014f56) list_single_graphic_heading_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_single_graphic_heading_pane_vc

0x9cd5,	// (0x00014f56) list_single_heading_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_single_heading_pane_vc

0x9cd5,	// (0x00014f56) list_single_number_heading_pane_vc_ParamLimits

0x9cd5,	// (0x00014f56) list_single_number_heading_pane_vc

0xa2ca,	// (0x0001554b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa2ca,	// (0x0001554b) list_double_graphic_heading_pane_vc_g1

0x76f7,	// (0x00012978) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x76f7,	// (0x00012978) list_double_graphic_heading_pane_vc_g2

0xa2d6,	// (0x00015557) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa2d6,	// (0x00015557) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x0001ac7b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001ac7b) list_double_graphic_heading_pane_vc_g

0xa2e2,	// (0x00015563) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa2e2,	// (0x00015563) list_double_graphic_heading_pane_vc_t1

0x8641,	// (0x000138c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8641,	// (0x000138c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x0001ac82) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0001ac82) list_double_graphic_heading_pane_vc_t

0x866b,	// (0x000138ec) list_setting_pane_vc_g1_ParamLimits

0x866b,	// (0x000138ec) list_setting_pane_vc_g1

0x8677,	// (0x000138f8) list_setting_pane_vc_g2_ParamLimits

0x8677,	// (0x000138f8) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001aa78) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001aa78) list_setting_pane_vc_g

0xa4da,	// (0x0001575b) list_setting_pane_vc_t1_ParamLimits

0xa4da,	// (0x0001575b) list_setting_pane_vc_t1

0xa4f4,	// (0x00015775) list_setting_pane_vc_t2_ParamLimits

0xa4f4,	// (0x00015775) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0001acc5) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0001acc5) list_setting_pane_vc_t

0x86d7,	// (0x00013958) set_value_pane_cp_vc_ParamLimits

0x86d7,	// (0x00013958) set_value_pane_cp_vc

0x7693,	// (0x00012914) list_single_number_heading_pane_vc_g1_ParamLimits

0x7693,	// (0x00012914) list_single_number_heading_pane_vc_g1

0x857b,	// (0x000137fc) list_single_number_heading_pane_vc_g2_ParamLimits

0x857b,	// (0x000137fc) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001a861) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001a861) list_single_number_heading_pane_vc_g

0x8641,	// (0x000138c2) list_single_number_heading_pane_vc_t1_ParamLimits

0x8641,	// (0x000138c2) list_single_number_heading_pane_vc_t1

0xa50a,	// (0x0001578b) list_single_number_heading_pane_vc_t2_ParamLimits

0xa50a,	// (0x0001578b) list_single_number_heading_pane_vc_t2

0xa51e,	// (0x0001579f) list_single_number_heading_pane_vc_t3_ParamLimits

0xa51e,	// (0x0001579f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0001acca) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001acca) list_single_number_heading_pane_vc_t

0x856f,	// (0x000137f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x856f,	// (0x000137f0) list_single_graphic_heading_pane_vc_g1

0x7693,	// (0x00012914) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7693,	// (0x00012914) list_single_graphic_heading_pane_vc_g4

0x857b,	// (0x000137fc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x857b,	// (0x000137fc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001aa52) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001aa52) list_single_graphic_heading_pane_vc_g

0x8641,	// (0x000138c2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8641,	// (0x000138c2) list_single_graphic_heading_pane_vc_t1

0xa530,	// (0x000157b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa530,	// (0x000157b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001acd1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001acd1) list_single_graphic_heading_pane_vc_t

0x7693,	// (0x00012914) list_double2_pane_vc_g1_ParamLimits

0x7693,	// (0x00012914) list_double2_pane_vc_g1

0x857b,	// (0x000137fc) list_double2_pane_vc_g2_ParamLimits

0x857b,	// (0x000137fc) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001a861) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001a861) list_double2_pane_vc_g

0xa544,	// (0x000157c5) list_double2_pane_vc_t1_ParamLimits

0xa544,	// (0x000157c5) list_double2_pane_vc_t1

0xa55a,	// (0x000157db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa55a,	// (0x000157db) list_double2_large_graphic_pane_vc_g1

0x6444,	// (0x000116c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6444,	// (0x000116c5) list_double2_large_graphic_pane_vc_g2

0x6450,	// (0x000116d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6450,	// (0x000116d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x0001a87e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x0001a87e) list_double2_large_graphic_pane_vc_g

0xa566,	// (0x000157e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa566,	// (0x000157e7) list_double2_large_graphic_pane_vc_t1

0xa57c,	// (0x000157fd) list_double_time_pane_vc_g1_ParamLimits

0xa57c,	// (0x000157fd) list_double_time_pane_vc_g1

0xa588,	// (0x00015809) list_double_time_pane_vc_g2_ParamLimits

0xa588,	// (0x00015809) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0001acd6) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0001acd6) list_double_time_pane_vc_g

0xa594,	// (0x00015815) list_double_time_pane_vc_t1_ParamLimits

0xa594,	// (0x00015815) list_double_time_pane_vc_t1

0xa5ad,	// (0x0001582e) list_double_time_pane_vc_t2_ParamLimits

0xa5ad,	// (0x0001582e) list_double_time_pane_vc_t2

0xa5c8,	// (0x00015849) list_double_time_pane_vc_t3_ParamLimits

0xa5c8,	// (0x00015849) list_double_time_pane_vc_t3

0xa5e0,	// (0x00015861) list_double_time_pane_vc_t4_ParamLimits

0xa5e0,	// (0x00015861) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0001acdb) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001acdb) list_double_time_pane_vc_t

0x7693,	// (0x00012914) list_double_pane_vc_g1_ParamLimits

0x7693,	// (0x00012914) list_double_pane_vc_g1

0x857b,	// (0x000137fc) list_double_pane_vc_g2_ParamLimits

0x857b,	// (0x000137fc) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001a861) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001a861) list_double_pane_vc_g

0xa5f4,	// (0x00015875) list_double_pane_vc_t1_ParamLimits

0xa5f4,	// (0x00015875) list_double_pane_vc_t1

0xa606,	// (0x00015887) list_double_pane_vc_t2_ParamLimits

0xa606,	// (0x00015887) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0001ace4) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0001ace4) list_double_pane_vc_t

0x7693,	// (0x00012914) list_double_number_pane_vc_g1_ParamLimits

0x7693,	// (0x00012914) list_double_number_pane_vc_g1

0x857b,	// (0x000137fc) list_double_number_pane_vc_g2_ParamLimits

0x857b,	// (0x000137fc) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001a861) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001a861) list_double_number_pane_vc_g

0xa61e,	// (0x0001589f) list_double_number_pane_vc_t1_ParamLimits

0xa61e,	// (0x0001589f) list_double_number_pane_vc_t1

0xa632,	// (0x000158b3) list_double_number_pane_vc_t2_ParamLimits

0xa632,	// (0x000158b3) list_double_number_pane_vc_t2

0xa606,	// (0x00015887) list_double_number_pane_vc_t3_ParamLimits

0xa606,	// (0x00015887) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0001ace9) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0001ace9) list_double_number_pane_vc_t

0xa644,	// (0x000158c5) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa644,	// (0x000158c5) list_double_large_graphic_pane_vc_g1

0xa650,	// (0x000158d1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa650,	// (0x000158d1) list_double_large_graphic_pane_vc_g2

0x6450,	// (0x000116d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6450,	// (0x000116d1) list_double_large_graphic_pane_vc_g3

0xa65f,	// (0x000158e0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa65f,	// (0x000158e0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0001acf0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001acf0) list_double_large_graphic_pane_vc_g

0xa66b,	// (0x000158ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa66b,	// (0x000158ec) list_double_large_graphic_pane_vc_t1

0xa67d,	// (0x000158fe) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa67d,	// (0x000158fe) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0001acf9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0001acf9) list_double_large_graphic_pane_vc_t

0x76f7,	// (0x00012978) list_double_heading_pane_vc_g1_ParamLimits

0x76f7,	// (0x00012978) list_double_heading_pane_vc_g1

0xa2d6,	// (0x00015557) list_double_heading_pane_vc_g2_ParamLimits

0xa2d6,	// (0x00015557) list_double_heading_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001acfe) list_double_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001acfe) list_double_heading_pane_vc_g

0xa696,	// (0x00015917) list_double_heading_pane_vc_t1_ParamLimits

0xa696,	// (0x00015917) list_double_heading_pane_vc_t1

0x8641,	// (0x000138c2) list_double_heading_pane_vc_t2_ParamLimits

0x8641,	// (0x000138c2) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0001ad03) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0001ad03) list_double_heading_pane_vc_t

0x856f,	// (0x000137f0) list_double_graphic_pane_vc_g1_ParamLimits

0x856f,	// (0x000137f0) list_double_graphic_pane_vc_g1

0x9503,	// (0x00014784) list_double_graphic_pane_vc_g2_ParamLimits

0x9503,	// (0x00014784) list_double_graphic_pane_vc_g2

0xa6aa,	// (0x0001592b) list_double_graphic_pane_vc_g3_ParamLimits

0xa6aa,	// (0x0001592b) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x0001ad08) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x0001ad08) list_double_graphic_pane_vc_g

0xa6b6,	// (0x00015937) list_double_graphic_pane_vc_t1_ParamLimits

0xa6b6,	// (0x00015937) list_double_graphic_pane_vc_t1

0xa606,	// (0x00015887) list_double_graphic_pane_vc_t2_ParamLimits

0xa606,	// (0x00015887) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x0001ad0f) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x0001ad0f) list_double_graphic_pane_vc_t

0x3e12,	// (0x0000f093) aid_size_cell_fastswap

0xdb59,	// (0x00018dda) aid_size_cell_touch_ParamLimits

0xdb59,	// (0x00018dda) aid_size_cell_touch

0x407f,	// (0x0000f300) popup_fast_swap_wide_window_ParamLimits

0x407f,	// (0x0000f300) popup_fast_swap_wide_window

0xdca4,	// (0x00018f25) touch_pane_ParamLimits

0xdca4,	// (0x00018f25) touch_pane

0x6870,	// (0x00011af1) button_value_adjust_pane_cp2

0x6870,	// (0x00011af1) button_value_adjust_pane_cp4

0x6890,	// (0x00011b11) form_field_data_pane_cp2

0x0952,	// (0x0000bbd3) form_field_data_wide_pane_cp2

0x6f3d,	// (0x000121be) bg_scroll_pane_ParamLimits

0x4401,	// (0x0000f682) scroll_handle_pane_ParamLimits

0x4415,	// (0x0000f696) scroll_sc2_down_pane_ParamLimits

0x4415,	// (0x0000f696) scroll_sc2_down_pane

0x6f6e,	// (0x000121ef) scroll_sc2_up_pane_ParamLimits

0x6f6e,	// (0x000121ef) scroll_sc2_up_pane

0x228c,	// (0x0000d50d) grid_wheel_folder_pane_g1_ParamLimits

0x228c,	// (0x0000d50d) grid_wheel_folder_pane_g1

0x45da,	// (0x0000f85b) clock_nsta_pane_cp2_ParamLimits

0x45da,	// (0x0000f85b) clock_nsta_pane_cp2

0x7b3a,	// (0x00012dbb) listscroll_midp_pane_ParamLimits

0x0d9c,	// (0x0000c01d) midp_canvas_pane

0x7aae,	// (0x00012d2f) nsta_clock_indic_pane

0x7b0c,	// (0x00012d8d) listscroll_form_pane_vc

0x7b28,	// (0x00012da9) listscroll_set_pane_vc_ParamLimits

0x7b28,	// (0x00012da9) listscroll_set_pane_vc

0x1791,	// (0x0000ca12) clock_nsta_pane

0x17bb,	// (0x0000ca3c) indicator_nsta_pane

0x8509,	// (0x0001378a) bg_popup_sub_pane_cp2_ParamLimits

0x851d,	// (0x0001379e) find_pane_cp2_ParamLimits

0x851d,	// (0x0001379e) find_pane_cp2

0x8533,	// (0x000137b4) grid_toobar_pane_ParamLimits

0x86e7,	// (0x00013968) list_form_gen_pane_vc_ParamLimits

0x86e7,	// (0x00013968) list_form_gen_pane_vc

0x86fd,	// (0x0001397e) scroll_pane_cp8_vc_ParamLimits

0x86fd,	// (0x0001397e) scroll_pane_cp8_vc

0x8779,	// (0x000139fa) data_form_wide_pane_vc_ParamLimits

0x8779,	// (0x000139fa) data_form_wide_pane_vc

0x8785,	// (0x00013a06) form_field_data_wide_pane_vc_g1

0x878d,	// (0x00013a0e) form_field_data_wide_pane_vc_t1_ParamLimits

0x878d,	// (0x00013a0e) form_field_data_wide_pane_vc_t1

0x6948,	// (0x00011bc9) input_focus_pane_cp6_vc_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_cp6_vc

0x1bcd,	// (0x0000ce4e) list_midp_pane_ParamLimits

0x9f3b,	// (0x000151bc) scroll_pane_cp16_ParamLimits

0x9f3b,	// (0x000151bc) scroll_pane_cp16

0x8b50,	// (0x00013dd1) button_value_adjust_pane_ParamLimits

0x8b50,	// (0x00013dd1) button_value_adjust_pane

0x1ed5,	// (0x0000d156) button_value_adjust_pane_cp6_ParamLimits

0x1ed5,	// (0x0000d156) button_value_adjust_pane_cp6

0x1feb,	// (0x0000d26c) settings_code_pane_cp_ParamLimits

0x1feb,	// (0x0000d26c) settings_code_pane_cp

0x5a85,	// (0x00010d06) cell_touch_pane_g1

0x5a85,	// (0x00010d06) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0001a997) cell_touch_pane_g

0x216b,	// (0x0000d3ec) cell_touch_pane_cp_ParamLimits

0x216b,	// (0x0000d3ec) cell_touch_pane_cp

0x2187,	// (0x0000d408) cell_touch_pane_ParamLimits

0x2187,	// (0x0000d408) cell_touch_pane

0x5a85,	// (0x00010d06) scroll_sc2_down_pane_g1

0x5a85,	// (0x00010d06) scroll_sc2_up_pane_g1

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp4_vc

0xa2f6,	// (0x00015577) list_set_graphic_pane_vc_g1_ParamLimits

0xa2f6,	// (0x00015577) list_set_graphic_pane_vc_g1

0xa302,	// (0x00015583) list_set_graphic_pane_vc_g2_ParamLimits

0xa302,	// (0x00015583) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0001ac87) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0001ac87) list_set_graphic_pane_vc_g

0xa30e,	// (0x0001558f) text_primary_small_cp13_vc_ParamLimits

0xa30e,	// (0x0001558f) text_primary_small_cp13_vc

0xa326,	// (0x000155a7) list_set_graphic_pane_vc_ParamLimits

0xa326,	// (0x000155a7) list_set_graphic_pane_vc

0x5a8f,	// (0x00010d10) input_focus_pane_cp2_vc

0x5a85,	// (0x00010d06) setting_code_pane_vc_g1

0xa33a,	// (0x000155bb) setting_code_pane_vc_t1

0xa348,	// (0x000155c9) set_text_pane_vc_t1_ParamLimits

0xa348,	// (0x000155c9) set_text_pane_vc_t1

0x5a8f,	// (0x00010d10) input_focus_pane_cp1_vc

0xa367,	// (0x000155e8) list_set_text_pane_vc

0x5a85,	// (0x00010d06) setting_text_pane_vc_g1

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp2_vc

0xa371,	// (0x000155f2) setting_slider_graphic_pane_vc_g1

0xa379,	// (0x000155fa) setting_slider_graphic_pane_vc_t1

0xa387,	// (0x00015608) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0001ac8c) setting_slider_graphic_pane_vc_t

0xa395,	// (0x00015616) slider_set_pane_cp_vc

0xa39d,	// (0x0001561e) slider_set_pane_vc_g1

0xa3a6,	// (0x00015627) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x0001ac91) slider_set_pane_vc_g

0x6a84,	// (0x00011d05) set_opt_bg_pane_g1_copy1

0x6a8c,	// (0x00011d0d) set_opt_bg_pane_g2_copy1

0xa3d2,	// (0x00015653) set_opt_bg_pane_g3_copy1

0x6a9c,	// (0x00011d1d) set_opt_bg_pane_g4_copy1

0x6aa4,	// (0x00011d25) set_opt_bg_pane_g5_copy1

0x6aac,	// (0x00011d2d) set_opt_bg_pane_g6_copy1

0xa3da,	// (0x0001565b) set_opt_bg_pane_g7_copy1

0xa3e4,	// (0x00015665) set_opt_bg_pane_g8_copy1

0xa3ec,	// (0x0001566d) set_opt_bg_pane_g9_copy1

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp_vc

0xa3f4,	// (0x00015675) setting_slider_pane_vc_t1

0xa379,	// (0x000155fa) setting_slider_pane_vc_t2

0xa387,	// (0x00015608) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x0001aca0) setting_slider_pane_vc_t

0xa395,	// (0x00015616) slider_set_pane_vc

0x49db,	// (0x0000fc5c) volume_set_pane_vc_g1

0x4cd6,	// (0x0000ff57) volume_set_pane_vc_g2

0x4cdf,	// (0x0000ff60) volume_set_pane_vc_g3

0x4ce8,	// (0x0000ff69) volume_set_pane_vc_g4

0x4cf1,	// (0x0000ff72) volume_set_pane_vc_g5

0x4cfa,	// (0x0000ff7b) volume_set_pane_vc_g6

0x4d03,	// (0x0000ff84) volume_set_pane_vc_g7

0x4d0c,	// (0x0000ff8d) volume_set_pane_vc_g8

0x4d15,	// (0x0000ff96) volume_set_pane_vc_g9

0x4d1e,	// (0x0000ff9f) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0001aca7) volume_set_pane_vc_g

0xa403,	// (0x00015684) volume_set_pane_vc

0xa40b,	// (0x0001568c) button_value_adjust_pane_cp1_vc

0xa415,	// (0x00015696) list_highlight_pane_cp2_vc

0xa41e,	// (0x0001569f) list_set_pane_vc_ParamLimits

0xa41e,	// (0x0001569f) list_set_pane_vc

0xa470,	// (0x000156f1) main_pane_set_vc_t1_ParamLimits

0xa470,	// (0x000156f1) main_pane_set_vc_t1

0xa485,	// (0x00015706) main_pane_set_vc_t2_ParamLimits

0xa485,	// (0x00015706) main_pane_set_vc_t2

0xa497,	// (0x00015718) main_pane_set_vc_t3_ParamLimits

0xa497,	// (0x00015718) main_pane_set_vc_t3

0xa4a9,	// (0x0001572a) main_pane_set_vc_t4_ParamLimits

0xa4a9,	// (0x0001572a) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0001acbc) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0001acbc) main_pane_set_vc_t

0xa4bb,	// (0x0001573c) setting_code_pane_vc_ParamLimits

0xa4bb,	// (0x0001573c) setting_code_pane_vc

0xa4ca,	// (0x0001574b) setting_slider_graphic_pane_vc

0xa4ca,	// (0x0001574b) setting_slider_pane_vc

0xa4ca,	// (0x0001574b) setting_text_pane_vc

0xa4ca,	// (0x0001574b) setting_volume_pane_vc

0xa4d2,	// (0x00015753) scroll_pane_cp121_vc

0x685e,	// (0x00011adf) set_content_pane_vc

0xa6c8,	// (0x00015949) button_value_adjust_pane_g1

0xa6d1,	// (0x00015952) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x0001ad14) button_value_adjust_pane_g

0xa6da,	// (0x0001595b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa6da,	// (0x0001595b) form_field_slider_wide_pane_vc_t1

0xa6ee,	// (0x0001596f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa6ee,	// (0x0001596f) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x0001ad19) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x0001ad19) form_field_slider_wide_pane_vc_t

0x5e04,	// (0x00011085) input_focus_pane_cp10_vc_ParamLimits

0x5e04,	// (0x00011085) input_focus_pane_cp10_vc

0xa700,	// (0x00015981) slider_cont_pane_cp1_vc_ParamLimits

0xa700,	// (0x00015981) slider_cont_pane_cp1_vc

0xa39d,	// (0x0001561e) slider_form_pane_g1_cp2

0xa3a6,	// (0x00015627) slider_form_pane_g2_cp2

0xa719,	// (0x0001599a) form_field_slider_pane_vc_t3

0xa727,	// (0x000159a8) form_field_slider_pane_vc_t4

0xa735,	// (0x000159b6) slider_form_pane_vc_ParamLimits

0xa735,	// (0x000159b6) slider_form_pane_vc

0xa742,	// (0x000159c3) form_field_slider_pane_vc_t1_ParamLimits

0xa742,	// (0x000159c3) form_field_slider_pane_vc_t1

0xa6ee,	// (0x0001596f) form_field_slider_pane_vc_t2_ParamLimits

0xa6ee,	// (0x0001596f) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x0001ad29) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x0001ad29) form_field_slider_pane_vc_t

0x5e04,	// (0x00011085) input_focus_pane_cp9_vc_ParamLimits

0x5e04,	// (0x00011085) input_focus_pane_cp9_vc

0xa75e,	// (0x000159df) slider_cont_pane_vc_ParamLimits

0xa75e,	// (0x000159df) slider_cont_pane_vc

0xa770,	// (0x000159f1) list_form_graphic_pane_cp_vc_ParamLimits

0xa770,	// (0x000159f1) list_form_graphic_pane_cp_vc

0x8785,	// (0x00013a06) form_field_popup_wide_pane_vc_g1

0xa785,	// (0x00015a06) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa785,	// (0x00015a06) form_field_popup_wide_pane_vc_t1

0x6948,	// (0x00011bc9) input_focus_pane_cp8_vc_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_cp8_vc

0xa79c,	// (0x00015a1d) list_form_wide_pane_vc_ParamLimits

0xa79c,	// (0x00015a1d) list_form_wide_pane_vc

0xa7a8,	// (0x00015a29) list_form_graphic_pane_vc_g1

0xa7b0,	// (0x00015a31) list_form_graphic_pane_vc_t1_ParamLimits

0xa7b0,	// (0x00015a31) list_form_graphic_pane_vc_t1

0x5b6f,	// (0x00010df0) list_highlight_pane_cp5_vc_ParamLimits

0x5b6f,	// (0x00010df0) list_highlight_pane_cp5_vc

0xa7cc,	// (0x00015a4d) list_form_graphic_pane_vc_ParamLimits

0xa7cc,	// (0x00015a4d) list_form_graphic_pane_vc

0x8785,	// (0x00013a06) form_field_popup_pane_vc_g1

0xa7e2,	// (0x00015a63) form_field_popup_pane_vc_t1_ParamLimits

0xa7e2,	// (0x00015a63) form_field_popup_pane_vc_t1

0x6948,	// (0x00011bc9) input_focus_pane_cp7_vc_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_cp7_vc

0xa7f9,	// (0x00015a7a) list_form_pane_vc_ParamLimits

0xa7f9,	// (0x00015a7a) list_form_pane_vc

0xa805,	// (0x00015a86) data_form_pane_vc_t1_ParamLimits

0xa805,	// (0x00015a86) data_form_pane_vc_t1

0x6a84,	// (0x00011d05) input_focus_pane_vc_g1

0x6a8c,	// (0x00011d0d) input_focus_pane_vc_g2

0x6a94,	// (0x00011d15) input_focus_pane_vc_g3

0x6a9c,	// (0x00011d1d) input_focus_pane_vc_g4

0x6aa4,	// (0x00011d25) input_focus_pane_vc_g5

0x6aac,	// (0x00011d2d) input_focus_pane_vc_g6

0x6ab4,	// (0x00011d35) input_focus_pane_vc_g7

0x6abc,	// (0x00011d3d) input_focus_pane_vc_g8

0x6ac4,	// (0x00011d45) input_focus_pane_vc_g9

0x5a85,	// (0x00010d06) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0001a920) input_focus_pane_vc_g

0x8779,	// (0x000139fa) data_form_pane_vc_ParamLimits

0x8779,	// (0x000139fa) data_form_pane_vc

0x8785,	// (0x00013a06) form_field_data_pane_vc_g1

0xa820,	// (0x00015aa1) form_field_data_pane_vc_t1_ParamLimits

0xa820,	// (0x00015aa1) form_field_data_pane_vc_t1

0x6948,	// (0x00011bc9) input_focus_pane_vc_ParamLimits

0x6948,	// (0x00011bc9) input_focus_pane_vc

0xa83a,	// (0x00015abb) button_value_adjust_pane_cp3_vc

0xa842,	// (0x00015ac3) button_value_adjust_pane_cp5_vc

0xa84a,	// (0x00015acb) form_field_data_pane_vc_ParamLimits

0xa84a,	// (0x00015acb) form_field_data_pane_vc

0xa861,	// (0x00015ae2) form_field_data_pane_vc_cp2

0xa869,	// (0x00015aea) form_field_data_wide_pane_vc_ParamLimits

0xa869,	// (0x00015aea) form_field_data_wide_pane_vc

0xa87f,	// (0x00015b00) form_field_data_wide_pane_vc_cp2

0xa887,	// (0x00015b08) form_field_popup_pane_vc_ParamLimits

0xa887,	// (0x00015b08) form_field_popup_pane_vc

0xa89e,	// (0x00015b1f) form_field_popup_wide_pane_vc_ParamLimits

0xa89e,	// (0x00015b1f) form_field_popup_wide_pane_vc

0xa8b4,	// (0x00015b35) form_field_slider_pane_vc_ParamLimits

0xa8b4,	// (0x00015b35) form_field_slider_pane_vc

0xa8c7,	// (0x00015b48) form_field_slider_wide_pane_vc_ParamLimits

0xa8c7,	// (0x00015b48) form_field_slider_wide_pane_vc

0x21a5,	// (0x0000d426) grid_touch_1_pane_ParamLimits

0x21a5,	// (0x0000d426) grid_touch_1_pane

0x21b9,	// (0x0000d43a) grid_touch_2_pane_ParamLimits

0x21b9,	// (0x0000d43a) grid_touch_2_pane

0xa99c,	// (0x00015c1d) touch_pane_g1_ParamLimits

0xa99c,	// (0x00015c1d) touch_pane_g1

0xa8fe,	// (0x00015b7f) cell_app_pane_cp_wide_ParamLimits

0xa8fe,	// (0x00015b7f) cell_app_pane_cp_wide

0xa90f,	// (0x00015b90) grid_popup_fast_wide_pane_ParamLimits

0xa90f,	// (0x00015b90) grid_popup_fast_wide_pane

0xa923,	// (0x00015ba4) scroll_pane_cp19_ParamLimits

0xa923,	// (0x00015ba4) scroll_pane_cp19

0x5a8f,	// (0x00010d10) bg_popup_window_pane_cp20

0xa937,	// (0x00015bb8) listscroll_popup_fast_wide_pane

0x6c91,	// (0x00011f12) grid_indicator_nsta_pane

0xa93f,	// (0x00015bc0) clock_nsta_pane_g1

0xa948,	// (0x00015bc9) clock_nsta_pane_t1

0x21e3,	// (0x0000d464) cell_indicator_nsta_pane_ParamLimits

0x21e3,	// (0x0000d464) cell_indicator_nsta_pane

0xa99c,	// (0x00015c1d) cell_indicator_nsta_pane_g1

0x2200,	// (0x0000d481) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x0001ad33) cell_indicator_nsta_pane_g

0xa9c0,	// (0x00015c41) clock_nsta_pane_cp

0xa9c8,	// (0x00015c49) indicator_nsta_pane_cp

0xa9d1,	// (0x00015c52) nsta_clock_indic_pane_g1

0x5c52,	// (0x00010ed3) grid_indicator_pane

0x7060,	// (0x000122e1) scroll_pane_cp29

0x4529,	// (0x0000f7aa) indicator_nsta_pane_cp2_ParamLimits

0x4529,	// (0x0000f7aa) indicator_nsta_pane_cp2

0x5b6f,	// (0x00010df0) main_apps_wheel_pane

0x89dd,	// (0x00013c5e) form_midp_field_text_pane_ParamLimits

0x8b22,	// (0x00013da3) scroll_bar_cp050_ParamLimits

0xaa3a,	// (0x00015cbb) cell_indicator_pane_ParamLimits

0xaa3a,	// (0x00015cbb) cell_indicator_pane

0xaa57,	// (0x00015cd8) cell_indicator_pane_g1

0x2216,	// (0x0000d497) grid_wheel_folder_pane_ParamLimits

0x2216,	// (0x0000d497) grid_wheel_folder_pane

0x2224,	// (0x0000d4a5) list_wheel_apps_pane_ParamLimits

0x2224,	// (0x0000d4a5) list_wheel_apps_pane

0x2232,	// (0x0000d4b3) main_apps_wheel_pane_g1_ParamLimits

0x2232,	// (0x0000d4b3) main_apps_wheel_pane_g1

0x223e,	// (0x0000d4bf) main_apps_wheel_pane_g2_ParamLimits

0x223e,	// (0x0000d4bf) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x0001ad4f) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x0001ad4f) main_apps_wheel_pane_g

0x224c,	// (0x0000d4cd) main_apps_wheel_pane_t1_ParamLimits

0x224c,	// (0x0000d4cd) main_apps_wheel_pane_t1

0x2260,	// (0x0000d4e1) list_wheel_apps_pane_g1

0x2268,	// (0x0000d4e9) list_wheel_apps_pane_g2

0x2270,	// (0x0000d4f1) list_wheel_apps_pane_g3

0x2278,	// (0x0000d4f9) list_wheel_apps_pane_g4

0x2282,	// (0x0000d503) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x0001ad54) list_wheel_apps_pane_g

0x763e,	// (0x000128bf) navi_icon_text_pane

0x1685,	// (0x0000c906) aid_fill_nsta

0xab1e,	// (0x00015d9f) navi_icon_text_pane_g1

0xab2a,	// (0x00015dab) navi_icon_text_pane_t1

0x74da,	// (0x0001275b) list_set_graphic_pane_t1_ParamLimits

0x74da,	// (0x0001275b) list_set_graphic_pane_t1

0x9264,	// (0x000144e5) popup_midp_note_alarm_window_t6_ParamLimits

0x9264,	// (0x000144e5) popup_midp_note_alarm_window_t6

0x9276,	// (0x000144f7) popup_midp_note_alarm_window_t7_ParamLimits

0x9276,	// (0x000144f7) popup_midp_note_alarm_window_t7

0x9288,	// (0x00014509) popup_midp_note_alarm_window_t8_ParamLimits

0x9288,	// (0x00014509) popup_midp_note_alarm_window_t8

0x929a,	// (0x0001451b) popup_midp_note_alarm_window_t9_ParamLimits

0x929a,	// (0x0001451b) popup_midp_note_alarm_window_t9

0x92ac,	// (0x0001452d) popup_midp_note_alarm_window_t10_ParamLimits

0x92ac,	// (0x0001452d) popup_midp_note_alarm_window_t10

0x92be,	// (0x0001453f) popup_midp_note_alarm_window_t11_ParamLimits

0x92be,	// (0x0001453f) popup_midp_note_alarm_window_t11

0x92d0,	// (0x00014551) scroll_pane_cp17_ParamLimits

0x92d0,	// (0x00014551) scroll_pane_cp17

0x49db,	// (0x0000fc5c) volume_small_pane_cp_g1

0x4d27,	// (0x0000ffa8) volume_small_pane_cp_g2

0x4d30,	// (0x0000ffb1) volume_small_pane_cp_g3

0x4d39,	// (0x0000ffba) volume_small_pane_cp_g4

0x4d42,	// (0x0000ffc3) volume_small_pane_cp_g5

0x4d4b,	// (0x0000ffcc) volume_small_pane_cp_g6

0x4d54,	// (0x0000ffd5) volume_small_pane_cp_g7

0x4d5d,	// (0x0000ffde) volume_small_pane_cp_g8

0x4d66,	// (0x0000ffe7) volume_small_pane_cp_g9

0x4d6f,	// (0x0000fff0) volume_small_pane_cp_g10

0x7893,	// (0x00012b14) midp_ticker_pane_g1_ParamLimits

0x789f,	// (0x00012b20) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001a9ec) midp_ticker_pane_g_ParamLimits

0x78ab,	// (0x00012b2c) midp_ticker_pane_t1_ParamLimits

0x16a9,	// (0x0000c92a) aid_fill_nsta_2

0x8b0e,	// (0x00013d8f) list_form2_midp_pane

0x9c85,	// (0x00014f06) midp_editing_number_pane_ParamLimits

0x9c94,	// (0x00014f15) midp_ticker_pane_ParamLimits

0xab3c,	// (0x00015dbd) form2_midp_field_pane

0xab60,	// (0x00015de1) scroll_pane_cp51

0xab80,	// (0x00015e01) form2_midp_button_pane_ParamLimits

0xab80,	// (0x00015e01) form2_midp_button_pane

0xab92,	// (0x00015e13) form2_midp_content_pane_ParamLimits

0xab92,	// (0x00015e13) form2_midp_content_pane

0xabac,	// (0x00015e2d) form2_midp_field_choice_group_pane

0xabb4,	// (0x00015e35) form2_midp_field_pane_g1

0xabbc,	// (0x00015e3d) form2_midp_field_pane_g2

0xabc4,	// (0x00015e45) form2_midp_field_pane_g3

0xabcc,	// (0x00015e4d) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x0001ad79) form2_midp_field_pane_g

0xabd4,	// (0x00015e55) form2_midp_gauge_slider_pane

0xabdc,	// (0x00015e5d) form2_midp_gauge_wait_pane

0xabe4,	// (0x00015e65) form2_midp_image_pane_ParamLimits

0xabe4,	// (0x00015e65) form2_midp_image_pane

0xabff,	// (0x00015e80) form2_midp_label_pane_ParamLimits

0xabff,	// (0x00015e80) form2_midp_label_pane

0x22b5,	// (0x0000d536) form2_midp_label_pane_cp_ParamLimits

0x22b5,	// (0x0000d536) form2_midp_label_pane_cp

0xac39,	// (0x00015eba) form2_midp_string_pane_ParamLimits

0xac39,	// (0x00015eba) form2_midp_string_pane

0xac4b,	// (0x00015ecc) form2_midp_text_pane_ParamLimits

0xac4b,	// (0x00015ecc) form2_midp_text_pane

0xac64,	// (0x00015ee5) form2_midp_time_pane

0xac74,	// (0x00015ef5) input_focus_pane_cp51_ParamLimits

0xac74,	// (0x00015ef5) input_focus_pane_cp51

0xac8c,	// (0x00015f0d) form2_midp_label_pane_t1_ParamLimits

0xac8c,	// (0x00015f0d) form2_midp_label_pane_t1

0xaccc,	// (0x00015f4d) form2_mdip_text_pane_t1_ParamLimits

0xaccc,	// (0x00015f4d) form2_mdip_text_pane_t1

0xace8,	// (0x00015f69) form2_midp_time_pane_t1

0xad03,	// (0x00015f84) form2_midp_gauge_slider_pane_t1

0x22d6,	// (0x0000d557) form2_midp_gauge_slider_pane_t2

0x22ea,	// (0x0000d56b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x0001ad82) form2_midp_gauge_slider_pane_t

0xad39,	// (0x00015fba) form2_midp_slider_pane

0xad45,	// (0x00015fc6) form2_midp_gauge_wait_pane_t1

0xad53,	// (0x00015fd4) form2_midp_wait_pane_ParamLimits

0xad53,	// (0x00015fd4) form2_midp_wait_pane

0x22fe,	// (0x0000d57f) list_single_2graphic_pane_cp4_ParamLimits

0x22fe,	// (0x0000d57f) list_single_2graphic_pane_cp4

0x1b34,	// (0x0000cdb5) list_single_midp_graphic_pane_cp_ParamLimits

0x1b34,	// (0x0000cdb5) list_single_midp_graphic_pane_cp

0x5a8f,	// (0x00010d10) list_highlight_pane_cp20

0xadad,	// (0x0001602e) list_single_2graphic_pane_g1_cp4

0xa1ad,	// (0x0001542e) list_single_2graphic_pane_g2_cp4

0xadb5,	// (0x00016036) list_single_2graphic_pane_t1_cp4

0x5b6f,	// (0x00010df0) list_highlight_pane_cp21

0xadc4,	// (0x00016045) list_single_midp_graphic_pane_g4_cp

0xadd3,	// (0x00016054) list_single_midp_graphic_pane_t1_cp

0x2315,	// (0x0000d596) form2_mdip_string_pane_t1_ParamLimits

0x2315,	// (0x0000d596) form2_mdip_string_pane_t1

0x5a8f,	// (0x00010d10) bg_wml_button_pane_cp2

0x5a85,	// (0x00010d06) form2_midp_image_pane_g1

0x6622,	// (0x000118a3) list_double_large_graphic_pane_g5_ParamLimits

0x6622,	// (0x000118a3) list_double_large_graphic_pane_g5

0x7b3a,	// (0x00012dbb) midp_form_pane_ParamLimits

0x5b6f,	// (0x00010df0) main_apps_wheel_pane_ParamLimits

0x13e1,	// (0x0000c662) popup_preview_window_ParamLimits

0x13e1,	// (0x0000c662) popup_preview_window

0x8090,	// (0x00013311) popup_touch_info_window_ParamLimits

0x8090,	// (0x00013311) popup_touch_info_window

0x80ae,	// (0x0001332f) popup_touch_menu_window_ParamLimits

0x80ae,	// (0x0001332f) popup_touch_menu_window

0x5a7b,	// (0x00010cfc) bg_popup_sub_pane_cp6

0xaf22,	// (0x000161a3) list_touch_menu_pane

0xaf2a,	// (0x000161ab) list_single_touch_menu_pane_ParamLimits

0xaf2a,	// (0x000161ab) list_single_touch_menu_pane

0xaf3e,	// (0x000161bf) list_single_touch_menu_pane_t1

0x5b6f,	// (0x00010df0) bg_popup_sub_pane_cp7_ParamLimits

0x5b6f,	// (0x00010df0) bg_popup_sub_pane_cp7

0xaf4c,	// (0x000161cd) heading_sub_pane

0xaf54,	// (0x000161d5) list_touch_info_pane_ParamLimits

0xaf54,	// (0x000161d5) list_touch_info_pane

0xaf63,	// (0x000161e4) list_single_touch_info_pane_ParamLimits

0xaf63,	// (0x000161e4) list_single_touch_info_pane

0xaf75,	// (0x000161f6) list_single_touch_info_pane_t1

0xaf83,	// (0x00016204) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x0001ad90) list_single_touch_info_pane_t

0x77c0,	// (0x00012a41) bg_popup_heading_pane_cp

0xaf91,	// (0x00016212) heading_sub_pane_t1

0x8713,	// (0x00013994) bg_popup_preview_window_pane_cp_ParamLimits

0x8713,	// (0x00013994) bg_popup_preview_window_pane_cp

0xaf4c,	// (0x000161cd) heading_preview_pane

0xaf54,	// (0x000161d5) list_preview_pane_ParamLimits

0xaf54,	// (0x000161d5) list_preview_pane

0xaf9f,	// (0x00016220) popup_preview_window_g1

0xaf63,	// (0x000161e4) list_single_preview_pane_ParamLimits

0xaf63,	// (0x000161e4) list_single_preview_pane

0xafa7,	// (0x00016228) list_single_preview_pane_g1

0xafaf,	// (0x00016230) list_single_preview_pane_t1

0xaf75,	// (0x000161f6) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x0001ad95) list_single_preview_pane_t

0xafbd,	// (0x0001623e) bg_popup_heading_pane_cp2_ParamLimits

0xafbd,	// (0x0001623e) bg_popup_heading_pane_cp2

0xafd3,	// (0x00016254) heading_preview_pane_g1

0xafdb,	// (0x0001625c) heading_preview_pane_t1_ParamLimits

0xafdb,	// (0x0001625c) heading_preview_pane_t1

0x5c75,	// (0x00010ef6) soft_indicator_pane_t1_ParamLimits

0x634f,	// (0x000115d0) scroll_pane_ParamLimits

0x6f5c,	// (0x000121dd) scroll_sc2_left_pane

0x6f65,	// (0x000121e6) scroll_sc2_right_pane

0x6f84,	// (0x00012205) scroll_bg_pane_g1_ParamLimits

0x6f99,	// (0x0001221a) scroll_bg_pane_g2_ParamLimits

0x6fb1,	// (0x00012232) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0001a977) scroll_bg_pane_g_ParamLimits

0x6f84,	// (0x00012205) scroll_handle_pane_g1_ParamLimits

0x6fd3,	// (0x00012254) scroll_handle_pane_g2_ParamLimits

0x6fb1,	// (0x00012232) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0001a97e) scroll_handle_pane_g_ParamLimits

0x7b6a,	// (0x00012deb) popup_choice_list_window_ParamLimits

0x7b6a,	// (0x00012deb) popup_choice_list_window

0x8515,	// (0x00013796) choice_list_pane

0x85c5,	// (0x00013846) cell_toolbar_pane_t1

0x85ed,	// (0x0001386e) toolbar_button_pane_ParamLimits

0x9782,	// (0x00014a03) ai_gene_pane_1_t2_ParamLimits

0x9782,	// (0x00014a03) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001ab9a) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001ab9a) ai_gene_pane_1_t

0xaff8,	// (0x00016279) scroll_sc2_left_pane_g1

0xaff8,	// (0x00016279) scroll_sc2_right_pane_g1

0x7b3a,	// (0x00012dbb) bg_popup_sub_pane_cp10

0xb002,	// (0x00016283) list_choice_list_pane

0xb019,	// (0x0001629a) list_single_choice_list_pane_ParamLimits

0xb019,	// (0x0001629a) list_single_choice_list_pane

0x6c5a,	// (0x00011edb) list_single_choice_list_pane_g1

0x6c62,	// (0x00011ee3) list_single_choice_list_pane_t1_ParamLimits

0x6c62,	// (0x00011ee3) list_single_choice_list_pane_t1

0xb02c,	// (0x000162ad) choice_list_pane_g1

0xb034,	// (0x000162b5) choice_list_pane_t1

0x5a7b,	// (0x00010cfc) input_focus_pane_cp11

0x6e39,	// (0x000120ba) title_pane_stacon_g2_ParamLimits

0x6e39,	// (0x000120ba) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0001a95d) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0001a95d) title_pane_stacon_g

0x77c0,	// (0x00012a41) cursor_press_pane

0x10a0,	// (0x0000c321) popup_fep_hwr_window_ParamLimits

0x10a0,	// (0x0000c321) popup_fep_hwr_window

0x7c88,	// (0x00012f09) popup_fep_vkb_window_ParamLimits

0x7c88,	// (0x00012f09) popup_fep_vkb_window

0xb042,	// (0x000162c3) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x0001adbe) fep_vkb_side_pane_g_ParamLimits

0x4db1,	// (0x00010032) fep_hwr_candidate_pane_ParamLimits

0x4db1,	// (0x00010032) fep_hwr_candidate_pane

0x4ddb,	// (0x0001005c) fep_hwr_side_pane_ParamLimits

0x4ddb,	// (0x0001005c) fep_hwr_side_pane

0x4dfb,	// (0x0001007c) fep_hwr_top_pane_ParamLimits

0x4dfb,	// (0x0001007c) fep_hwr_top_pane

0x4e13,	// (0x00010094) fep_hwr_write_pane_ParamLimits

0x4e13,	// (0x00010094) fep_hwr_write_pane

0xfb3d,	// (0x0001adbe) fep_vkb_side_pane_g

0xb04a,	// (0x000162cb) fep_hwr_top_pane_g1

0xb05c,	// (0x000162dd) fep_hwr_top_pane_g2

0x4e4d,	// (0x000100ce) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x0001ad9a) fep_hwr_top_pane_g

0x4e62,	// (0x000100e3) fep_hwr_top_text_pane

0x7126,	// (0x000123a7) fep_hwr_top_text_pane_g1

0xb092,	// (0x00016313) fep_hwr_top_text_pane_t1

0x4f58,	// (0x000101d9) fep_hwr_candidate_pane_g1

0xb2ec,	// (0x0001656d) fep_vkb_keypad_pane_g3_ParamLimits

0xb2ec,	// (0x0001656d) fep_vkb_keypad_pane_g3

0xb314,	// (0x00016595) fep_vkb_keypad_pane_g4_ParamLimits

0xb314,	// (0x00016595) fep_vkb_keypad_pane_g4

0xb383,	// (0x00016604) fep_vkb_bottom_pane_g2_ParamLimits

0xb383,	// (0x00016604) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x0001adc5) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x0001adc5) fep_vkb_bottom_pane_g

0xaff8,	// (0x00016279) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x0001adcf) cell_vkb_side_pane_g

0xb40e,	// (0x0001668f) cell_vkb_side_pane_t1

0xb41c,	// (0x0001669d) cell_vkb_side_pane_t1_copy1

0xaff8,	// (0x00016279) bg_fep_vkb_candidate_pane_g2

0xb54e,	// (0x000167cf) cell_vkb_candidate_pane_ParamLimits

0xb0a0,	// (0x00016321) aid_size_cell_vkb_ParamLimits

0xb0a0,	// (0x00016321) aid_size_cell_vkb

0xb54e,	// (0x000167cf) cell_vkb_candidate_pane

0x4f7f,	// (0x00010200) bg_popup_fep_shadow_pane_g1

0xb12e,	// (0x000163af) fep_vkb_bottom_pane_ParamLimits

0xb12e,	// (0x000163af) fep_vkb_bottom_pane

0xb16b,	// (0x000163ec) fep_vkb_candidate_pane_ParamLimits

0xb16b,	// (0x000163ec) fep_vkb_candidate_pane

0xb187,	// (0x00016408) fep_vkb_keypad_pane_ParamLimits

0xb187,	// (0x00016408) fep_vkb_keypad_pane

0xb1cd,	// (0x0001644e) fep_vkb_side_pane_ParamLimits

0xb1cd,	// (0x0001644e) fep_vkb_side_pane

0xb209,	// (0x0001648a) fep_vkb_top_pane_ParamLimits

0xb209,	// (0x0001648a) fep_vkb_top_pane

0xb245,	// (0x000164c6) fep_vkb_top_pane_g1_ParamLimits

0xb245,	// (0x000164c6) fep_vkb_top_pane_g1

0xb254,	// (0x000164d5) fep_vkb_top_pane_g2_ParamLimits

0xb254,	// (0x000164d5) fep_vkb_top_pane_g2

0xb263,	// (0x000164e4) fep_vkb_top_pane_g3_ParamLimits

0xb263,	// (0x000164e4) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x0001adb5) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x0001adb5) fep_vkb_top_pane_g

0xb281,	// (0x00016502) fep_vkb_top_text_pane_ParamLimits

0xb281,	// (0x00016502) fep_vkb_top_text_pane

0x23fa,	// (0x0000d67b) fep_vkb_side_pane_g1_ParamLimits

0x23fa,	// (0x0000d67b) fep_vkb_side_pane_g1

0xb2db,	// (0x0001655c) grid_vkb_side_pane_ParamLimits

0xb2db,	// (0x0001655c) grid_vkb_side_pane

0x4f87,	// (0x00010208) bg_popup_fep_shadow_pane_g2

0x4f90,	// (0x00010211) bg_popup_fep_shadow_pane_g3

0x4f98,	// (0x00010219) bg_popup_fep_shadow_pane_g4

0x4fa1,	// (0x00010222) bg_popup_fep_shadow_pane_g5

0x4fab,	// (0x0001022c) bg_popup_fep_shadow_pane_g6

0x4fb3,	// (0x00010234) bg_popup_fep_shadow_pane_g7

0x6a9c,	// (0x00011d1d) bg_popup_fep_shadow_pane_g8

0xb332,	// (0x000165b3) grid_vkb_keypad_number_pane_ParamLimits

0xb332,	// (0x000165b3) grid_vkb_keypad_number_pane

0xb342,	// (0x000165c3) grid_vkb_keypad_pane_ParamLimits

0xb342,	// (0x000165c3) grid_vkb_keypad_pane

0xb368,	// (0x000165e9) fep_vkb_bottom_pane_g1_ParamLimits

0xb368,	// (0x000165e9) fep_vkb_bottom_pane_g1

0xb391,	// (0x00016612) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb391,	// (0x00016612) grid_vkb_keypad_bottom_left_pane

0xb3a6,	// (0x00016627) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb3a6,	// (0x00016627) grid_vkb_keypad_bottom_right_pane

0xb3bb,	// (0x0001663c) fep_vkb_top_text_pane_g1

0x2441,	// (0x0000d6c2) fep_vkb_top_text_pane_t1

0x2453,	// (0x0000d6d4) cell_vkb_side_pane_ParamLimits

0x2453,	// (0x0000d6d4) cell_vkb_side_pane

0xaff8,	// (0x00016279) cell_vkb_side_pane_g1

0xb42a,	// (0x000166ab) cell_vkb_keypad_pane_ParamLimits

0xb42a,	// (0x000166ab) cell_vkb_keypad_pane

0xb4a5,	// (0x00016726) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x0001ade2) bg_popup_fep_shadow_pane_g

0x4fc5,	// (0x00010246) cell_hwr_side_pane_g1

0x4fc5,	// (0x00010246) cell_hwr_side_pane_g2

0xb4af,	// (0x00016730) cell_vkb_keypad_pane_t1

0x2469,	// (0x0000d6ea) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2469,	// (0x0000d6ea) cell_vkb_keypad_bottom_left_pane

0x247e,	// (0x0000d6ff) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x247e,	// (0x0000d6ff) cell_vkb_keypad_bottom_right_pane

0xaff8,	// (0x00016279) cell_vkb_keypad_bottom_left_pane_g1

0xaff8,	// (0x00016279) cell_vkb_keypad_bottom_right_pane_g1

0xb513,	// (0x00016794) cell_vkb_keypad_number_pane_ParamLimits

0xb513,	// (0x00016794) cell_vkb_keypad_number_pane

0xb532,	// (0x000167b3) cell_vkb_keypad_number_pane_g1

0xb53c,	// (0x000167bd) cell_vkb_keypad_number_pane_g2

0xb545,	// (0x000167c6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x0001add4) cell_vkb_keypad_number_pane_g

0xb4af,	// (0x00016730) cell_vkb_keypad_number_pane_t1

0xb56b,	// (0x000167ec) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x0001adf5) cell_hwr_side_pane_g

0xb584,	// (0x00016805) cell_hwr_side_pane_t1

0x4fcf,	// (0x00010250) cell_hwr_side_pane_t1_copy1

0x4fdd,	// (0x0001025e) cell_hwr_candidate_pane_g1

0x500c,	// (0x0001028d) cell_hwr_candidate_pane_t1

0xaff8,	// (0x00016279) cell_vkb_candidate_pane_g2

0xb5c8,	// (0x00016849) cell_vkb_candidate_pane_t1

0x4d78,	// (0x0000fff9) bg_popup_fep_shadow_pane_ParamLimits

0x4d78,	// (0x0000fff9) bg_popup_fep_shadow_pane

0x4e2d,	// (0x000100ae) bg_fep_hwr_top_pane_g4

0xb06e,	// (0x000162ef) bg_hwr_side_pane_g1_ParamLimits

0xb06e,	// (0x000162ef) bg_hwr_side_pane_g1

0xe03d,	// (0x000192be) cell_hwr_side_pane_ParamLimits

0xe03d,	// (0x000192be) cell_hwr_side_pane

0x4ed9,	// (0x0001015a) fep_hwr_write_pane_g1_ParamLimits

0x4ed9,	// (0x0001015a) fep_hwr_write_pane_g1

0x4ee6,	// (0x00010167) fep_hwr_write_pane_g2_ParamLimits

0x4ee6,	// (0x00010167) fep_hwr_write_pane_g2

0x4ef3,	// (0x00010174) fep_hwr_write_pane_g3_ParamLimits

0x4ef3,	// (0x00010174) fep_hwr_write_pane_g3

0xe05d,	// (0x000192de) fep_hwr_write_pane_g4_ParamLimits

0xe05d,	// (0x000192de) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x0001ada1) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x0001ada1) fep_hwr_write_pane_g

0x4e2d,	// (0x000100ae) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4e2d,	// (0x000100ae) bg_fep_hwr_candidate_pane_g2

0x4f16,	// (0x00010197) cell_hwr_candidate_pane_ParamLimits

0x4f16,	// (0x00010197) cell_hwr_candidate_pane

0x4f58,	// (0x000101d9) fep_hwr_candidate_pane_g1_ParamLimits

0xb0ce,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb0ce,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2

0xb273,	// (0x000164f4) fep_vkb_top_pane_g4_ParamLimits

0xb273,	// (0x000164f4) fep_vkb_top_pane_g4

0xb2b9,	// (0x0001653a) fep_vkb_side_pane_g2_ParamLimits

0xb2b9,	// (0x0001653a) fep_vkb_side_pane_g2

0x0880,	// (0x0000bb01) list_setting_pane_t4_ParamLimits

0x0880,	// (0x0000bb01) list_setting_pane_t4

0x08fa,	// (0x0000bb7b) list_setting_number_pane_t5_ParamLimits

0x08fa,	// (0x0000bb7b) list_setting_number_pane_t5

0x0c24,	// (0x0000bea5) list_double_heading_pane_cp2_ParamLimits

0x0c24,	// (0x0000bea5) list_double_heading_pane_cp2

0x696e,	// (0x00011bef) list_double_heading_pane_g1_cp2_ParamLimits

0x696e,	// (0x00011bef) list_double_heading_pane_g1_cp2

0x697a,	// (0x00011bfb) list_double_heading_pane_g2_cp2_ParamLimits

0x697a,	// (0x00011bfb) list_double_heading_pane_g2_cp2

0xb5d6,	// (0x00016857) list_double_heading_pane_t1_cp2_ParamLimits

0xb5d6,	// (0x00016857) list_double_heading_pane_t1_cp2

0xb5ec,	// (0x0001686d) list_double_heading_pane_t2_cp2_ParamLimits

0xb5ec,	// (0x0001686d) list_double_heading_pane_t2_cp2

0x5a63,	// (0x00010ce4) aid_value_unit2

0x40cb,	// (0x0000f34c) popup_preview_fixed_window

0x5e12,	// (0x00011093) bg_popup_preview_window_pane_cp02

0xb5fe,	// (0x0001687f) list_preview_fixed_pane

0xb644,	// (0x000168c5) list_empty_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_empty_pane_fp

0xb644,	// (0x000168c5) list_single_cale_day_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_cale_day_pane_fp

0xb644,	// (0x000168c5) list_single_graphic_heading_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_graphic_heading_pane_fp

0xb644,	// (0x000168c5) list_single_graphic_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_graphic_pane_fp

0xb644,	// (0x000168c5) list_single_heading_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_heading_pane_fp

0xb644,	// (0x000168c5) list_single_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_pane_fp

0xb65b,	// (0x000168dc) list_single_pane_fp_g1_ParamLimits

0xb65b,	// (0x000168dc) list_single_pane_fp_g1

0x696e,	// (0x00011bef) list_single_pane_fp_g2_ParamLimits

0x696e,	// (0x00011bef) list_single_pane_fp_g2

0x697a,	// (0x00011bfb) list_single_pane_fp_g3_ParamLimits

0x697a,	// (0x00011bfb) list_single_pane_fp_g3

0xb667,	// (0x000168e8) list_single_pane_fp_g4_ParamLimits

0xb667,	// (0x000168e8) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x0001ae08) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x0001ae08) list_single_pane_fp_g

0xb673,	// (0x000168f4) list_single_pane_fp_t1_ParamLimits

0xb673,	// (0x000168f4) list_single_pane_fp_t1

0xb68a,	// (0x0001690b) list_single_graphic_pane_fp_g1_ParamLimits

0xb68a,	// (0x0001690b) list_single_graphic_pane_fp_g1

0xb65b,	// (0x000168dc) list_single_graphic_pane_fp_g2_ParamLimits

0xb65b,	// (0x000168dc) list_single_graphic_pane_fp_g2

0x696e,	// (0x00011bef) list_single_graphic_pane_fp_g3_ParamLimits

0x696e,	// (0x00011bef) list_single_graphic_pane_fp_g3

0x697a,	// (0x00011bfb) list_single_graphic_pane_fp_g4_ParamLimits

0x697a,	// (0x00011bfb) list_single_graphic_pane_fp_g4

0xb667,	// (0x000168e8) list_single_graphic_pane_fp_g5_ParamLimits

0xb667,	// (0x000168e8) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x0001ae11) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x0001ae11) list_single_graphic_pane_fp_g

0xb696,	// (0x00016917) list_single_graphic_pane_fp_t1_ParamLimits

0xb696,	// (0x00016917) list_single_graphic_pane_fp_t1

0xb68a,	// (0x0001690b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb68a,	// (0x0001690b) list_single_graphic_heading_pane_fp_g1

0xb65b,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb65b,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2

0x696e,	// (0x00011bef) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x696e,	// (0x00011bef) list_single_graphic_heading_pane_fp_g3

0x697a,	// (0x00011bfb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x697a,	// (0x00011bfb) list_single_graphic_heading_pane_fp_g4

0xb667,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb667,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x0001ae11) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001ae11) list_single_graphic_heading_pane_fp_g

0xb6ac,	// (0x0001692d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb6ac,	// (0x0001692d) list_single_graphic_heading_pane_fp_t1

0xb6c2,	// (0x00016943) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb6c2,	// (0x00016943) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x0001ae1c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x0001ae1c) list_single_graphic_heading_pane_fp_t

0xb6d4,	// (0x00016955) list_single_cale_day_pane_fp_g1_ParamLimits

0xb6d4,	// (0x00016955) list_single_cale_day_pane_fp_g1

0xb70c,	// (0x0001698d) list_single_cale_day_pane_fp_g2_ParamLimits

0xb70c,	// (0x0001698d) list_single_cale_day_pane_fp_g2

0xb718,	// (0x00016999) list_single_cale_day_pane_fp_g3_ParamLimits

0xb718,	// (0x00016999) list_single_cale_day_pane_fp_g3

0xb740,	// (0x000169c1) list_single_cale_day_pane_fp_g4_ParamLimits

0xb740,	// (0x000169c1) list_single_cale_day_pane_fp_g4

0xb764,	// (0x000169e5) list_single_cale_day_pane_fp_g5_ParamLimits

0xb764,	// (0x000169e5) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x0001ae21) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x0001ae21) list_single_cale_day_pane_fp_g

0xb788,	// (0x00016a09) list_single_cale_day_pane_fp_t1_ParamLimits

0xb788,	// (0x00016a09) list_single_cale_day_pane_fp_t1

0xb7ae,	// (0x00016a2f) list_single_cale_day_pane_fp_t2_ParamLimits

0xb7ae,	// (0x00016a2f) list_single_cale_day_pane_fp_t2

0xb7c7,	// (0x00016a48) list_single_cale_day_pane_fp_t3_ParamLimits

0xb7c7,	// (0x00016a48) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x0001ae2c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x0001ae2c) list_single_cale_day_pane_fp_t

0xb65b,	// (0x000168dc) list_empty_pane_fp_g1_ParamLimits

0xb65b,	// (0x000168dc) list_empty_pane_fp_g1

0xb7e0,	// (0x00016a61) list_empty_pane_fp_t1

0xb7ee,	// (0x00016a6f) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x0001ae33) list_empty_pane_fp_t

0xb65b,	// (0x000168dc) list_single_heading_pane_fp_g1_ParamLimits

0xb65b,	// (0x000168dc) list_single_heading_pane_fp_g1

0x696e,	// (0x00011bef) list_single_heading_pane_fp_g2_ParamLimits

0x696e,	// (0x00011bef) list_single_heading_pane_fp_g2

0x697a,	// (0x00011bfb) list_single_heading_pane_fp_g3_ParamLimits

0x697a,	// (0x00011bfb) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x0001ae38) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x0001ae38) list_single_heading_pane_fp_g

0xb7fc,	// (0x00016a7d) list_single_heading_pane_fp_t1_ParamLimits

0xb7fc,	// (0x00016a7d) list_single_heading_pane_fp_t1

0xb80e,	// (0x00016a8f) list_single_heading_pane_fp_t2_ParamLimits

0xb80e,	// (0x00016a8f) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x0001ae3f) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x0001ae3f) list_single_heading_pane_fp_t

0x6cd0,	// (0x00011f51) aid_size_cell_fast

0x5d82,	// (0x00011003) soft_indicator_pane_cp1_t1

0x6d0d,	// (0x00011f8e) cell_app_pane_cp2_ParamLimits

0x6d0d,	// (0x00011f8e) cell_app_pane_cp2

0x4d9a,	// (0x0001001b) fep_hwr_candidate_drop_down_list_pane

0x4f72,	// (0x000101f3) fep_hwr_candidate_pane_g3_ParamLimits

0x4f72,	// (0x000101f3) fep_hwr_candidate_pane_g3

0x3777,	// (0x0000e9f8) fep_hwr_candidate_pane_g4_ParamLimits

0x3777,	// (0x0000e9f8) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0001adae) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0001adae) fep_hwr_candidate_pane_g

0xb15a,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb15a,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane

0xb573,	// (0x000167f4) fep_vkb_candidate_pane_g3

0xb57b,	// (0x000167fc) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x0001addb) fep_vkb_candidate_pane_g

0x4fdd,	// (0x0001025e) cell_hwr_candidate_pane_g1_ParamLimits

0x4feb,	// (0x0001026c) cell_hwr_candidate_pane_g3_ParamLimits

0x4feb,	// (0x0001026c) cell_hwr_candidate_pane_g3

0xe4ac,	// (0x0001972d) cell_hwr_candidate_pane_g4_ParamLimits

0xe4ac,	// (0x0001972d) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x0001adfa) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x0001adfa) cell_hwr_candidate_pane_g

0xb592,	// (0x00016813) cell_vkb_candidate_pane_g3_ParamLimits

0xb592,	// (0x00016813) cell_vkb_candidate_pane_g3

0xb5ad,	// (0x0001682e) cell_vkb_candidate_pane_g4_ParamLimits

0xb5ad,	// (0x0001682e) cell_vkb_candidate_pane_g4

0xb824,	// (0x00016aa5) cell_app_pane_cp2_g1_ParamLimits

0xb824,	// (0x00016aa5) cell_app_pane_cp2_g1

0xb842,	// (0x00016ac3) cell_app_pane_cp2_g2_ParamLimits

0xb842,	// (0x00016ac3) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x0001ae44) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x0001ae44) cell_app_pane_cp2_g

0xb84e,	// (0x00016acf) cell_app_pane_cp2_t1_ParamLimits

0xb84e,	// (0x00016acf) cell_app_pane_cp2_t1

0x6948,	// (0x00011bc9) grid_highlight_pane_cp1_ParamLimits

0x6948,	// (0x00011bc9) grid_highlight_pane_cp1

0x502a,	// (0x000102ab) cell_hwr_candidate_pane_cp1_ParamLimits

0x502a,	// (0x000102ab) cell_hwr_candidate_pane_cp1

0x4fdd,	// (0x0001025e) fep_hwr_candidate_drop_down_list_pane_g1

0x5049,	// (0x000102ca) fep_hwr_candidate_drop_down_list_pane_g2

0x5056,	// (0x000102d7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x0001ae49) fep_hwr_candidate_drop_down_list_pane_g

0x5063,	// (0x000102e4) fep_hwr_candidate_drop_down_list_scroll_pane

0x506c,	// (0x000102ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x506c,	// (0x000102ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5079,	// (0x000102fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5079,	// (0x000102fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5086,	// (0x00010307) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5086,	// (0x00010307) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5093,	// (0x00010314) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5093,	// (0x00010314) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x50ae,	// (0x0001032f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x50ae,	// (0x0001032f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x50c9,	// (0x0001034a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x50c9,	// (0x0001034a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x50e4,	// (0x00010365) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x50e4,	// (0x00010365) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x50ff,	// (0x00010380) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x50ff,	// (0x00010380) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x0001ae50) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x0001ae50) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb8d7,	// (0x00016b58) cell_vkb_candidate_pane_cp1_ParamLimits

0xb8d7,	// (0x00016b58) cell_vkb_candidate_pane_cp1

0xb273,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb273,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1

0xb860,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb860,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2

0xb86d,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb86d,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x0001ae61) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x0001ae61) fep_vkb_candidate_drop_down_list_pane_g

0xb8f7,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb8f7,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane

0xb904,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb904,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb911,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb911,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb91d,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb91d,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb87a,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb87a,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb89b,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb89b,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb929,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb929,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb94a,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb94a,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb8bc,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb8bc,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x0001ae68) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x0001ae68) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0217,	// (0x0000b498) title_pane_g1_ParamLimits

0x022a,	// (0x0000b4ab) title_pane_g2_ParamLimits

0xf566,	// (0x0001a7e7) title_pane_g_ParamLimits

0x7116,	// (0x00012397) aid_call2_pane

0x711e,	// (0x0001239f) aid_call_pane

0x7126,	// (0x000123a7) popup_clock_analogue_window_g1

0x7126,	// (0x000123a7) popup_clock_analogue_window_g2

0x442a,	// (0x0000f6ab) popup_clock_analogue_window_g3

0x4433,	// (0x0000f6b4) popup_clock_analogue_window_g4

0x5a85,	// (0x00010d06) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0001a98c) popup_clock_analogue_window_g

0x443b,	// (0x0000f6bc) popup_clock_analogue_window_t1

0x4449,	// (0x0000f6ca) clock_digital_number_pane_ParamLimits

0x4449,	// (0x0000f6ca) clock_digital_number_pane

0x4455,	// (0x0000f6d6) clock_digital_number_pane_cp02_ParamLimits

0x4455,	// (0x0000f6d6) clock_digital_number_pane_cp02

0x4461,	// (0x0000f6e2) clock_digital_number_pane_cp03_ParamLimits

0x4461,	// (0x0000f6e2) clock_digital_number_pane_cp03

0x446d,	// (0x0000f6ee) clock_digital_number_pane_cp04_ParamLimits

0x446d,	// (0x0000f6ee) clock_digital_number_pane_cp04

0x4479,	// (0x0000f6fa) clock_digital_separator_pane_ParamLimits

0x4479,	// (0x0000f6fa) clock_digital_separator_pane

0x4485,	// (0x0000f706) popup_clock_digital_window_t1_ParamLimits

0x4485,	// (0x0000f706) popup_clock_digital_window_t1

0x5a85,	// (0x00010d06) clock_digital_number_pane_g1

0x5a85,	// (0x00010d06) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0001a997) clock_digital_number_pane_g

0x5a85,	// (0x00010d06) clock_digital_separator_pane_g1

0x5a85,	// (0x00010d06) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0001a997) clock_digital_separator_pane_g

0x1685,	// (0x0000c906) aid_fill_nsta_ParamLimits

0x17bb,	// (0x0000ca3c) indicator_nsta_pane_ParamLimits

0x83a4,	// (0x00013625) popup_clock_analogue_window

0x83a4,	// (0x00013625) popup_clock_digital_window

0x6c91,	// (0x00011f12) grid_indicator_nsta_pane_ParamLimits

0xa956,	// (0x00015bd7) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x0001ad2e) clock_nsta_pane_t

0x43ee,	// (0x0000f66f) aid_size_max_handle

0xdcfa,	// (0x00018f7b) aid_size_min_handle

0x77c0,	// (0x00012a41) editor_scroll_pane

0xb96b,	// (0x00016bec) ex_editor_pane

0x6c3f,	// (0x00011ec0) scroll_pane_cp13

0x637b,	// (0x000115fc) scroll_pane_cp14

0x7155,	// (0x000123d6) scroll_pane_cp36

0x0c35,	// (0x0000beb6) list_single_graphic_hl_pane_cp2_ParamLimits

0x0c35,	// (0x0000beb6) list_single_graphic_hl_pane_cp2

0x206f,	// (0x0000d2f0) list_single_graphic_hl_pane_ParamLimits

0x206f,	// (0x0000d2f0) list_single_graphic_hl_pane

0xb973,	// (0x00016bf4) aid_size_min_hl_cp1

0xb97c,	// (0x00016bfd) list_highlight_pane_cp34_ParamLimits

0xb97c,	// (0x00016bfd) list_highlight_pane_cp34

0xb98d,	// (0x00016c0e) list_single_graphic_hl_pane_g1_ParamLimits

0xb98d,	// (0x00016c0e) list_single_graphic_hl_pane_g1

0x6383,	// (0x00011604) list_single_graphic_hl_pane_g2_ParamLimits

0x6383,	// (0x00011604) list_single_graphic_hl_pane_g2

0x6383,	// (0x00011604) list_single_graphic_hl_pane_g3_ParamLimits

0x6383,	// (0x00011604) list_single_graphic_hl_pane_g3

0x638f,	// (0x00011610) list_single_graphic_hl_pane_g4_ParamLimits

0x638f,	// (0x00011610) list_single_graphic_hl_pane_g4

0x2499,	// (0x0000d71a) list_single_graphic_hl_pane_g5_ParamLimits

0x2499,	// (0x0000d71a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x0001ae79) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x0001ae79) list_single_graphic_hl_pane_g

0x24ad,	// (0x0000d72e) list_single_graphic_hl_pane_t1_ParamLimits

0x24ad,	// (0x0000d72e) list_single_graphic_hl_pane_t1

0xb9ba,	// (0x00016c3b) aid_size_min_hl_cp2

0xb9c3,	// (0x00016c44) list_highlight_pane_cp34_cp2_ParamLimits

0xb9c3,	// (0x00016c44) list_highlight_pane_cp34_cp2

0xb98d,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb98d,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2

0xb9d0,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb9d0,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2

0xb9dc,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb9dc,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2

0x76f7,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x76f7,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2

0xb9a6,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb9a6,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2

0xdd51,	// (0x00018fd2) control_pane_g4_ParamLimits

0xdd51,	// (0x00018fd2) control_pane_g4

0x7b3a,	// (0x00012dbb) bg_popup_sub_pane_cp10_ParamLimits

0xb002,	// (0x00016283) list_choice_list_pane_ParamLimits

0xb011,	// (0x00016292) scroll_pane_cp23

0x5e12,	// (0x00011093) bg_popup_preview_window_pane_cp02_ParamLimits

0xb5fe,	// (0x0001687f) list_preview_fixed_pane_ParamLimits

0xb614,	// (0x00016895) list_preview_fixed_pane_cp_ParamLimits

0xb614,	// (0x00016895) list_preview_fixed_pane_cp

0xb620,	// (0x000168a1) popup_preview_fixed_window_g1_ParamLimits

0xb620,	// (0x000168a1) popup_preview_fixed_window_g1

0xb62c,	// (0x000168ad) popup_preview_fixed_window_g2_ParamLimits

0xb62c,	// (0x000168ad) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x0001ae01) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x0001ae01) popup_preview_fixed_window_g

0x4362,	// (0x0000f5e3) aid_navi_side_left_pane_ParamLimits

0x4377,	// (0x0000f5f8) aid_navi_side_right_pane_ParamLimits

0x438f,	// (0x0000f610) navi_icon_pane_stacon_ParamLimits

0x43a3,	// (0x0000f624) navi_navi_pane_stacon_ParamLimits

0x438f,	// (0x0000f610) navi_text_pane_stacon_ParamLimits

0x5a7b,	// (0x00010cfc) main_text_info_pane

0xba00,	// (0x00016c81) listscroll_text_info_pane

0xba08,	// (0x00016c89) list_text_info_pane_ParamLimits

0xba08,	// (0x00016c89) list_text_info_pane

0xba17,	// (0x00016c98) scroll_pane_cp24_ParamLimits

0xba17,	// (0x00016c98) scroll_pane_cp24

0x24c3,	// (0x0000d744) list_text_info_pane_t1_ParamLimits

0x24c3,	// (0x0000d744) list_text_info_pane_t1

0x1015,	// (0x0000c296) popup_fast_swap2_window_ParamLimits

0x1015,	// (0x0000c296) popup_fast_swap2_window

0xba6e,	// (0x00016cef) aid_size_cell_fast2

0x5a7b,	// (0x00010cfc) bg_popup_window_pane_cp17

0x8b3a,	// (0x00013dbb) heading_pane_cp2

0x6052,	// (0x000112d3) listscroll_fast2_pane

0xba78,	// (0x00016cf9) grid_fast2_pane

0xba82,	// (0x00016d03) listscroll_fast2_pane_g1

0xba8a,	// (0x00016d0b) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x0001ae84) listscroll_fast2_pane_g

0x6c3f,	// (0x00011ec0) scroll_pane_cp26

0xba94,	// (0x00016d15) cell_fast2_pane_ParamLimits

0xba94,	// (0x00016d15) cell_fast2_pane

0xbaa9,	// (0x00016d2a) cell_fast2_pane_g1

0xbab2,	// (0x00016d33) cell_fast2_pane_g2

0xbabb,	// (0x00016d3c) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x0001ae89) cell_fast2_pane_g

0x6138,	// (0x000113b9) grid_highlight_pane_cp9

0x614d,	// (0x000113ce) main_eswt_pane_ParamLimits

0x614d,	// (0x000113ce) main_eswt_pane

0xba2c,	// (0x00016cad) list_single_text_info_pane

0xbac3,	// (0x00016d44) eswt_ctrl_button_pane

0xbac3,	// (0x00016d44) eswt_ctrl_canvas_pane

0xbacb,	// (0x00016d4c) eswt_ctrl_combo_pane

0xbac3,	// (0x00016d44) eswt_ctrl_default_pane

0xbac3,	// (0x00016d44) eswt_ctrl_label_pane

0xbad3,	// (0x00016d54) eswt_ctrl_wait_pane

0xbadb,	// (0x00016d5c) eswt_shell_pane

0x5a7b,	// (0x00010cfc) listscroll_eswt_app_pane

0xbafb,	// (0x00016d7c) popup_eswt_tasktip_window_ParamLimits

0xbafb,	// (0x00016d7c) popup_eswt_tasktip_window

0x8713,	// (0x00013994) bg_popup_window_pane_cp18

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_ParamLimits

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_ParamLimits

0xbb19,	// (0x00016d9a) eswt_control_pane_g2

0xbb26,	// (0x00016da7) eswt_control_pane_g3_ParamLimits

0xbb26,	// (0x00016da7) eswt_control_pane_g3

0xbb33,	// (0x00016db4) eswt_control_pane_g4_ParamLimits

0xbb33,	// (0x00016db4) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x0001ae90) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x0001ae90) eswt_control_pane_g

0x6948,	// (0x00011bc9) bg_button_pane_ParamLimits

0x6948,	// (0x00011bc9) bg_button_pane

0x614d,	// (0x000113ce) common_borders_pane_copy2_ParamLimits

0x614d,	// (0x000113ce) common_borders_pane_copy2

0xbb40,	// (0x00016dc1) control_button_pane_g1_ParamLimits

0xbb40,	// (0x00016dc1) control_button_pane_g1

0xbb4c,	// (0x00016dcd) control_button_pane_g2_ParamLimits

0xbb4c,	// (0x00016dcd) control_button_pane_g2

0xbb58,	// (0x00016dd9) control_button_pane_g3_ParamLimits

0xbb58,	// (0x00016dd9) control_button_pane_g3

0x0002,

0xfc18,	// (0x0001ae99) control_button_pane_g_ParamLimits

0xfc18,	// (0x0001ae99) control_button_pane_g

0xbb6c,	// (0x00016ded) control_button_pane_t1

0xbb7a,	// (0x00016dfb) control_button_pane_t2

0x0001,

0xfc1f,	// (0x0001aea0) control_button_pane_t

0x85f9,	// (0x0001387a) bg_button_pane_g1

0x8609,	// (0x0001388a) bg_button_pane_g2

0x8601,	// (0x00013882) bg_button_pane_g3

0x8619,	// (0x0001389a) bg_button_pane_g4

0x8611,	// (0x00013892) bg_button_pane_g5

0x8621,	// (0x000138a2) bg_button_pane_g6

0x8629,	// (0x000138aa) bg_button_pane_g7

0x8639,	// (0x000138ba) bg_button_pane_g8

0x8631,	// (0x000138b2) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001aaee) bg_button_pane_g

0xafbd,	// (0x0001623e) common_borders_pane_ParamLimits

0xafbd,	// (0x0001623e) common_borders_pane

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy1_ParamLimits

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy1

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy1_ParamLimits

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy1

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy1_ParamLimits

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy1

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy1_ParamLimits

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy1

0xaff8,	// (0x00016279) bg_eswt_ctrl_canvas_pane_g1

0xafbd,	// (0x0001623e) common_borders_pane_cp2_ParamLimits

0xafbd,	// (0x0001623e) common_borders_pane_cp2

0xafbd,	// (0x0001623e) common_borders_pane_cp3_ParamLimits

0xafbd,	// (0x0001623e) common_borders_pane_cp3

0xbb88,	// (0x00016e09) separator_horizontal_pane

0xbb90,	// (0x00016e11) separator_vertical_pane

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy2_ParamLimits

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy2

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy2_ParamLimits

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy2

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy2_ParamLimits

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy2

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy2_ParamLimits

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy2

0x5a7b,	// (0x00010cfc) common_borders_pane_cp4

0xbb99,	// (0x00016e1a) separator_horizontal_pane_g1

0xbba2,	// (0x00016e23) separator_horizontal_pane_g2

0xbbab,	// (0x00016e2c) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x0001aea5) separator_horizontal_pane_g

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy3_ParamLimits

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy3

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy3_ParamLimits

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy3

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy3_ParamLimits

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy3

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy3_ParamLimits

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy3

0x5a7b,	// (0x00010cfc) common_borders_pane_cp5

0xbbb4,	// (0x00016e35) separator_vertical_pane_g1

0xbbbd,	// (0x00016e3e) separator_vertical_pane_g2

0xbbc6,	// (0x00016e47) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x0001aeac) separator_vertical_pane_g

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy4_ParamLimits

0xbb0c,	// (0x00016d8d) eswt_control_pane_g1_copy4

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy4_ParamLimits

0xbb19,	// (0x00016d9a) eswt_control_pane_g2_copy4

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy4_ParamLimits

0xbb26,	// (0x00016da7) eswt_control_pane_g3_copy4

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy4_ParamLimits

0xbb33,	// (0x00016db4) eswt_control_pane_g4_copy4

0x24e1,	// (0x0000d762) eswt_ctrl_combo_button_pane

0x24e9,	// (0x0000d76a) eswt_ctrl_input_pane

0x24f1,	// (0x0000d772) popup_choice_list_window_cp70

0x24f9,	// (0x0000d77a) eswt_ctrl_input_pane_t1

0x5a7b,	// (0x00010cfc) input_focus_pane_cp70

0xafbd,	// (0x0001623e) bg_button_pane_cp70_ParamLimits

0xafbd,	// (0x0001623e) bg_button_pane_cp70

0x2507,	// (0x0000d788) eswt_ctrl_combo_button_pane_g1

0xbbfd,	// (0x00016e7e) wait_bar_pane_cp70

0x8713,	// (0x00013994) bg_popup_window_pane_cp70_ParamLimits

0x8713,	// (0x00013994) bg_popup_window_pane_cp70

0xbc05,	// (0x00016e86) popup_eswt_tasktip_window_t1

0xbc1b,	// (0x00016e9c) wait_bar_pane_cp71_ParamLimits

0xbc1b,	// (0x00016e9c) wait_bar_pane_cp71

0xbc27,	// (0x00016ea8) grid_eswt_app_pane

0x6f5c,	// (0x000121dd) scroll_pane_cp70

0x250f,	// (0x0000d790) cell_eswt_app_pane_ParamLimits

0x250f,	// (0x0000d790) cell_eswt_app_pane

0x2539,	// (0x0000d7ba) cell_eswt_app_pane_g1_ParamLimits

0x2539,	// (0x0000d7ba) cell_eswt_app_pane_g1

0x2568,	// (0x0000d7e9) cell_eswt_app_pane_g2_ParamLimits

0x2568,	// (0x0000d7e9) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x0001aeb3) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x0001aeb3) cell_eswt_app_pane_g

0x2591,	// (0x0000d812) cell_eswt_app_pane_t1_ParamLimits

0x2591,	// (0x0000d812) cell_eswt_app_pane_t1

0xbcee,	// (0x00016f6f) grid_highlight_pane_cp70_ParamLimits

0xbcee,	// (0x00016f6f) grid_highlight_pane_cp70

0x7693,	// (0x00012914) set_content_pane_g1

0x7a5c,	// (0x00012cdd) status_small_volume_pane

0x511a,	// (0x0001039b) status_small_volume_pane_g1

0x5122,	// (0x000103a3) volume_small2_pane

0x512b,	// (0x000103ac) volume_small2_pane_g1

0x5134,	// (0x000103b5) volume_small2_pane_g2

0x513d,	// (0x000103be) volume_small2_pane_g3

0x5146,	// (0x000103c7) volume_small2_pane_g4

0x514f,	// (0x000103d0) volume_small2_pane_g5

0x5158,	// (0x000103d9) volume_small2_pane_g6

0x5161,	// (0x000103e2) volume_small2_pane_g7

0x516a,	// (0x000103eb) volume_small2_pane_g8

0x5173,	// (0x000103f4) volume_small2_pane_g9

0x517c,	// (0x000103fd) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x0001aeb8) volume_small2_pane_g

0xb3bb,	// (0x0001663c) fep_vkb_top_text_pane_g1_ParamLimits

0x2441,	// (0x0000d6c2) fep_vkb_top_text_pane_t1_ParamLimits

0xb638,	// (0x000168b9) popup_preview_fixed_window_g3_ParamLimits

0xb638,	// (0x000168b9) popup_preview_fixed_window_g3

0x1618,	// (0x0000c899) popup_toolbar_trans_pane

0x1ec4,	// (0x0000d145) aid_height_set_list_ParamLimits

0x9ad3,	// (0x00014d54) aid_size_parent_ParamLimits

0x7b3a,	// (0x00012dbb) list_highlight_pane_cp2_ParamLimits

0x7693,	// (0x00012914) set_content_pane_g1_ParamLimits

0x2082,	// (0x0000d303) list_single_image_pane_ParamLimits

0x2082,	// (0x0000d303) list_single_image_pane

0x25c3,	// (0x0000d844) aid_size_cell_image_ParamLimits

0x25c3,	// (0x0000d844) aid_size_cell_image

0x25d0,	// (0x0000d851) grid_single_image_pane_ParamLimits

0x25d0,	// (0x0000d851) grid_single_image_pane

0x696e,	// (0x00011bef) list_single_image_pane_g1_ParamLimits

0x696e,	// (0x00011bef) list_single_image_pane_g1

0x697a,	// (0x00011bfb) list_single_image_pane_g2_ParamLimits

0x697a,	// (0x00011bfb) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x0001aecd) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x0001aecd) list_single_image_pane_g

0xbd13,	// (0x00016f94) list_single_image_pane_t1_ParamLimits

0xbd13,	// (0x00016f94) list_single_image_pane_t1

0x25dc,	// (0x0000d85d) cell_image_list_pane_ParamLimits

0x25dc,	// (0x0000d85d) cell_image_list_pane

0x25f0,	// (0x0000d871) cell_image_list_pane_g1

0x25f9,	// (0x0000d87a) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x0001aed2) cell_image_list_pane_g

0xbd4f,	// (0x00016fd0) aid_size_cell_tb_trans_pane

0x6948,	// (0x00011bc9) bg_tb_trans_pane

0xbd61,	// (0x00016fe2) grid_tb_trans_pane

0x85f9,	// (0x0001387a) bg_tb_trans_pane_g1

0x8609,	// (0x0001388a) bg_tb_trans_pane_g2

0x8601,	// (0x00013882) bg_tb_trans_pane_g3

0x8619,	// (0x0001389a) bg_tb_trans_pane_g4

0x8611,	// (0x00013892) bg_tb_trans_pane_g5

0x8639,	// (0x000138ba) bg_tb_trans_pane_g6

0x8631,	// (0x000138b2) bg_tb_trans_pane_g7

0x8621,	// (0x000138a2) bg_tb_trans_pane_g8

0x8629,	// (0x000138aa) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x0001aed7) bg_tb_trans_pane_g

0xbd75,	// (0x00016ff6) cell_toolbar_trans_pane_ParamLimits

0xbd75,	// (0x00016ff6) cell_toolbar_trans_pane

0xaff8,	// (0x00016279) cell_toolbar_trans_pane_g1

0x2299,	// (0x0000d51a) list_form2_midp_pane_t1

0x22a7,	// (0x0000d528) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x0001ad74) list_form2_midp_pane_t

0xab60,	// (0x00015de1) scroll_pane_cp51_ParamLimits

0xad63,	// (0x00015fe4) form2_midp_wait_pane_g1

0xad6c,	// (0x00015fed) form2_midp_wait_pane_g2

0xad75,	// (0x00015ff6) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x0001ad89) form2_midp_wait_pane_g

0x5b6f,	// (0x00010df0) list_highlight_pane_cp21_ParamLimits

0xadc4,	// (0x00016045) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xadd3,	// (0x00016054) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9cd5,	// (0x00014f56) list_single_2graphic_im_pane_ParamLimits

0x9cd5,	// (0x00014f56) list_single_2graphic_im_pane

0x2602,	// (0x0000d883) list_single_2graphic_im_pane_g1_ParamLimits

0x2602,	// (0x0000d883) list_single_2graphic_im_pane_g1

0x2613,	// (0x0000d894) list_single_2graphic_im_pane_g2_ParamLimits

0x2613,	// (0x0000d894) list_single_2graphic_im_pane_g2

0x261f,	// (0x0000d8a0) list_single_2graphic_im_pane_g3_ParamLimits

0x261f,	// (0x0000d8a0) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x0001aeea) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x0001aeea) list_single_2graphic_im_pane_g

0x2633,	// (0x0000d8b4) list_single_2graphic_im_pane_t1_ParamLimits

0x2633,	// (0x0000d8b4) list_single_2graphic_im_pane_t1

0xb644,	// (0x000168c5) list_single_graphic_2heading_pane_fp_ParamLimits

0xb644,	// (0x000168c5) list_single_graphic_2heading_pane_fp

0xb68a,	// (0x0001690b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb68a,	// (0x0001690b) list_single_graphic_2heading_pane_fp_g1

0xb65b,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb65b,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2

0x696e,	// (0x00011bef) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x696e,	// (0x00011bef) list_single_graphic_2heading_pane_fp_g3

0x697a,	// (0x00011bfb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x697a,	// (0x00011bfb) list_single_graphic_2heading_pane_fp_g4

0xb667,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb667,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x0001ae11) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001ae11) list_single_graphic_2heading_pane_fp_g

0xbe09,	// (0x0001708a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbe09,	// (0x0001708a) list_single_graphic_2heading_pane_fp_t1

0xb6c2,	// (0x00016943) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb6c2,	// (0x00016943) list_single_graphic_2heading_pane_fp_t2

0xbe1f,	// (0x000170a0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbe1f,	// (0x000170a0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x0001aef3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x0001aef3) list_single_graphic_2heading_pane_fp_t

0xb07a,	// (0x000162fb) fep_hwr_write_pane_g5_ParamLimits

0xb07a,	// (0x000162fb) fep_hwr_write_pane_g5

0xb086,	// (0x00016307) fep_hwr_write_pane_g6_ParamLimits

0xb086,	// (0x00016307) fep_hwr_write_pane_g6

0xbadb,	// (0x00016d5c) eswt_shell_pane_ParamLimits

0x8713,	// (0x00013994) bg_popup_window_pane_cp18_ParamLimits

0x99f9,	// (0x00014c7a) heading_pane_cp70

0xbc05,	// (0x00016e86) popup_eswt_tasktip_window_t1_ParamLimits

0x16e0,	// (0x0000c961) aid_touch_tab_arrow_left

0x16f6,	// (0x0000c977) aid_touch_tab_arrow_right

0x0242,	// (0x0000b4c3) title_pane_g3_ParamLimits

0x0242,	// (0x0000b4c3) title_pane_g3

0x6835,	// (0x00011ab6) set_value_pane_g1

0x1618,	// (0x0000c899) popup_toolbar_trans_pane_ParamLimits

0xbd4f,	// (0x00016fd0) aid_size_cell_tb_trans_pane_ParamLimits

0x6948,	// (0x00011bc9) bg_tb_trans_pane_ParamLimits

0xbd61,	// (0x00016fe2) grid_tb_trans_pane_ParamLimits

0x5e12,	// (0x00011093) cont_note_pane_ParamLimits

0x5e12,	// (0x00011093) cont_note_pane

0x614d,	// (0x000113ce) cont_snote2_single_text_pane_ParamLimits

0x614d,	// (0x000113ce) cont_snote2_single_text_pane

0x614d,	// (0x000113ce) cont_snote2_single_graphic_pane_ParamLimits

0x614d,	// (0x000113ce) cont_snote2_single_graphic_pane

0x8d50,	// (0x00013fd1) cont_note_wait_pane_ParamLimits

0x8d50,	// (0x00013fd1) cont_note_wait_pane

0x8d50,	// (0x00013fd1) cont_note_image_pane_ParamLimits

0x8d50,	// (0x00013fd1) cont_note_image_pane

0xbe35,	// (0x000170b6) popup_note2_window_g1_ParamLimits

0xbe35,	// (0x000170b6) popup_note2_window_g1

0xbe66,	// (0x000170e7) popup_note2_window_t1_ParamLimits

0xbe66,	// (0x000170e7) popup_note2_window_t1

0xbeab,	// (0x0001712c) popup_note2_window_t2_ParamLimits

0xbeab,	// (0x0001712c) popup_note2_window_t2

0xbef0,	// (0x00017171) popup_note2_window_t3_ParamLimits

0xbef0,	// (0x00017171) popup_note2_window_t3

0xbf35,	// (0x000171b6) popup_note2_window_t4_ParamLimits

0xbf35,	// (0x000171b6) popup_note2_window_t4

0x5e8a,	// (0x0001110b) popup_note2_window_t5_ParamLimits

0x5e8a,	// (0x0001110b) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x0001aeff) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x0001aeff) popup_note2_window_t

0xbf64,	// (0x000171e5) popup_note2_image_window_g1_ParamLimits

0xbf64,	// (0x000171e5) popup_note2_image_window_g1

0xbf70,	// (0x000171f1) popup_note2_image_window_g2_ParamLimits

0xbf70,	// (0x000171f1) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x0001af0a) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x0001af0a) popup_note2_image_window_g

0xbf82,	// (0x00017203) popup_note2_image_window_t1_ParamLimits

0xbf82,	// (0x00017203) popup_note2_image_window_t1

0xbf9a,	// (0x0001721b) popup_note2_image_window_t2_ParamLimits

0xbf9a,	// (0x0001721b) popup_note2_image_window_t2

0xbfb2,	// (0x00017233) popup_note2_image_window_t3_ParamLimits

0xbfb2,	// (0x00017233) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x0001af0f) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x0001af0f) popup_note2_image_window_t

0x8d5e,	// (0x00013fdf) popup_note2_wait_window_g1_ParamLimits

0x8d5e,	// (0x00013fdf) popup_note2_wait_window_g1

0x8d6a,	// (0x00013feb) popup_note2_wait_window_g2_ParamLimits

0x8d6a,	// (0x00013feb) popup_note2_wait_window_g2

0x8d76,	// (0x00013ff7) popup_note2_wait_window_g3_ParamLimits

0x8d76,	// (0x00013ff7) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0001aad0) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0001aad0) popup_note2_wait_window_g

0xbfce,	// (0x0001724f) popup_note2_wait_window_t1_ParamLimits

0xbfce,	// (0x0001724f) popup_note2_wait_window_t1

0xbfec,	// (0x0001726d) popup_note2_wait_window_t2_ParamLimits

0xbfec,	// (0x0001726d) popup_note2_wait_window_t2

0xc00a,	// (0x0001728b) popup_note2_wait_window_t3_ParamLimits

0xc00a,	// (0x0001728b) popup_note2_wait_window_t3

0xc01c,	// (0x0001729d) popup_note2_wait_window_t4_ParamLimits

0xc01c,	// (0x0001729d) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x0001af16) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x0001af16) popup_note2_wait_window_t

0xc02e,	// (0x000172af) wait_bar2_pane_ParamLimits

0xc02e,	// (0x000172af) wait_bar2_pane

0xc046,	// (0x000172c7) popup_snote2_single_text_window_g1_ParamLimits

0xc046,	// (0x000172c7) popup_snote2_single_text_window_g1

0xc06e,	// (0x000172ef) popup_snote2_single_text_window_t1_ParamLimits

0xc06e,	// (0x000172ef) popup_snote2_single_text_window_t1

0xc0ba,	// (0x0001733b) popup_snote2_single_text_window_t2_ParamLimits

0xc0ba,	// (0x0001733b) popup_snote2_single_text_window_t2

0xc106,	// (0x00017387) popup_snote2_single_text_window_t3_ParamLimits

0xc106,	// (0x00017387) popup_snote2_single_text_window_t3

0xc147,	// (0x000173c8) popup_snote2_single_text_window_t4_ParamLimits

0xc147,	// (0x000173c8) popup_snote2_single_text_window_t4

0xc17d,	// (0x000173fe) popup_snote2_single_text_window_t5_ParamLimits

0xc17d,	// (0x000173fe) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x0001af1f) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x0001af1f) popup_snote2_single_text_window_t

0xc1a8,	// (0x00017429) popup_snote2_single_graphic_window_g1_ParamLimits

0xc1a8,	// (0x00017429) popup_snote2_single_graphic_window_g1

0xc1d0,	// (0x00017451) popup_snote2_single_graphic_window_g2_ParamLimits

0xc1d0,	// (0x00017451) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x0001af2a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x0001af2a) popup_snote2_single_graphic_window_g

0xc1f8,	// (0x00017479) popup_snote2_single_graphic_window_t1_ParamLimits

0xc1f8,	// (0x00017479) popup_snote2_single_graphic_window_t1

0xc244,	// (0x000174c5) popup_snote2_single_graphic_window_t2_ParamLimits

0xc244,	// (0x000174c5) popup_snote2_single_graphic_window_t2

0xc106,	// (0x00017387) popup_snote2_single_graphic_window_t3_ParamLimits

0xc106,	// (0x00017387) popup_snote2_single_graphic_window_t3

0xc147,	// (0x000173c8) popup_snote2_single_graphic_window_t4_ParamLimits

0xc147,	// (0x000173c8) popup_snote2_single_graphic_window_t4

0xc17d,	// (0x000173fe) popup_snote2_single_graphic_window_t5_ParamLimits

0xc17d,	// (0x000173fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x0001af2f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x0001af2f) popup_snote2_single_graphic_window_t

0xaa19,	// (0x00015c9a) clock_nsta_pane_cp2_t1

0xaa19,	// (0x00015c9a) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x0001ad4a) clock_nsta_pane_cp2_t

0x6962,	// (0x00011be3) form_field_data_wide_pane_g1_ParamLimits

0x696e,	// (0x00011bef) form_field_data_wide_pane_g2_ParamLimits

0x696e,	// (0x00011bef) form_field_data_wide_pane_g2

0x697a,	// (0x00011bfb) form_field_data_wide_pane_g3_ParamLimits

0x697a,	// (0x00011bfb) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0001a90f) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0001a90f) form_field_data_wide_pane_g

0x21cd,	// (0x0000d44e) grid_touch_3_pane_ParamLimits

0x21cd,	// (0x0000d44e) grid_touch_3_pane

0x2664,	// (0x0000d8e5) cell_touch_3_pane_ParamLimits

0x2664,	// (0x0000d8e5) cell_touch_3_pane

0xaff8,	// (0x00016279) cell_touch_3_pane_g1

0xaff8,	// (0x00016279) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x0001adcf) cell_touch_3_pane_g

0x5ebc,	// (0x0001113d) cont_query_data_pane

0x5ec4,	// (0x00011145) cont_query_data_pane_cp1

0xc2bf,	// (0x00017540) button_value_adjust_pane_cp7

0xc2c7,	// (0x00017548) query_popup_pane_cp3

0x7212,	// (0x00012493) bg_popup_sub_pane_cp22_ParamLimits

0x44a4,	// (0x0000f725) navi_navi_volume_pane_cp2

0x44bf,	// (0x0000f740) popup_side_volume_key_window_g2

0x44ce,	// (0x0000f74f) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001a9a5) popup_side_volume_key_window_g

0x44eb,	// (0x0000f76c) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001a9ac) popup_side_volume_key_window_t

0x755d,	// (0x000127de) popup_side_volume_key_window_ParamLimits

0x06b0,	// (0x0000b931) list_double_graphic_pane_g4_ParamLimits

0x06b0,	// (0x0000b931) list_double_graphic_pane_g4

0x205a,	// (0x0000d2db) list_single_2heading_msg_pane_ParamLimits

0x205a,	// (0x0000d2db) list_single_2heading_msg_pane

0x26ae,	// (0x0000d92f) list_single_2heading_msg_pane_g1_ParamLimits

0x26ae,	// (0x0000d92f) list_single_2heading_msg_pane_g1

0x26ba,	// (0x0000d93b) list_single_2heading_msg_pane_g2_ParamLimits

0x26ba,	// (0x0000d93b) list_single_2heading_msg_pane_g2

0x26cd,	// (0x0000d94e) list_single_2heading_msg_pane_g3_ParamLimits

0x26cd,	// (0x0000d94e) list_single_2heading_msg_pane_g3

0x26d9,	// (0x0000d95a) list_single_2heading_msg_pane_g4_ParamLimits

0x26d9,	// (0x0000d95a) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x0001af3a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x0001af3a) list_single_2heading_msg_pane_g

0x26f1,	// (0x0000d972) list_single_2heading_msg_pane_t1_ParamLimits

0x26f1,	// (0x0000d972) list_single_2heading_msg_pane_t1

0x2719,	// (0x0000d99a) list_single_2heading_msg_pane_t2_ParamLimits

0x2719,	// (0x0000d99a) list_single_2heading_msg_pane_t2

0x2784,	// (0x0000da05) list_single_2heading_msg_pane_t3_ParamLimits

0x2784,	// (0x0000da05) list_single_2heading_msg_pane_t3

0xc3bb,	// (0x0001763c) list_single_2heading_msg_pane_t4_ParamLimits

0xc3bb,	// (0x0001763c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x0001af43) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x0001af43) list_single_2heading_msg_pane_t

0x5ac3,	// (0x00010d44) title_pane_g4_ParamLimits

0x5ac3,	// (0x00010d44) title_pane_g4

0x42b2,	// (0x0000f533) title_pane_stacon_g3_ParamLimits

0x42b2,	// (0x0000f533) title_pane_stacon_g3

0xbdcc,	// (0x0001704d) list_single_2graphic_im_pane_g4_ParamLimits

0xbdcc,	// (0x0001704d) list_single_2graphic_im_pane_g4

0x979f,	// (0x00014a20) popup_side_volume_key_window_cp

0xa0c2,	// (0x00015343) main_idle_act2_pane_t1

0x48c9,	// (0x0000fb4a) toolbar_button_pane_g10

0x05b1,	// (0x0000b832) popup_toolbar_window_cp1

0xaa0a,	// (0x00015c8b) clock_nsta_pane_cp_t1

0xaa0a,	// (0x00015c8b) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x0001ad45) clock_nsta_pane_cp_t

0x44a4,	// (0x0000f725) navi_navi_volume_pane_cp2_ParamLimits

0x44b3,	// (0x0000f734) popup_side_volume_key_window_g1_ParamLimits

0x44bf,	// (0x0000f740) popup_side_volume_key_window_g2_ParamLimits

0x44ce,	// (0x0000f74f) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001a9a5) popup_side_volume_key_window_g_ParamLimits

0x4d86,	// (0x00010007) fep_hwr_aid_pane

0x4e2d,	// (0x000100ae) bg_fep_hwr_top_pane_g4_ParamLimits

0xb04a,	// (0x000162cb) fep_hwr_top_pane_g1_ParamLimits

0xb05c,	// (0x000162dd) fep_hwr_top_pane_g2_ParamLimits

0x4e4d,	// (0x000100ce) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x0001ad9a) fep_hwr_top_pane_g_ParamLimits

0x4e62,	// (0x000100e3) fep_hwr_top_text_pane_ParamLimits

0x9560,	// (0x000147e1) aid_touch_tab_arrow_arrow_2

0x9569,	// (0x000147ea) aid_touch_tab_arrow_left_2

0x4d9a,	// (0x0001001b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4dd1,	// (0x00010052) fep_hwr_prediction_pane

0xb1c3,	// (0x00016444) fep_vkb_prediction_pane

0x2421,	// (0x0000d6a2) fep_vkb_side_pane_g3_ParamLimits

0x2421,	// (0x0000d6a2) fep_vkb_side_pane_g3

0x4fdd,	// (0x0001025e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5049,	// (0x000102ca) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5056,	// (0x000102d7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x0001ae49) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5185,	// (0x00010406) fep_hwr_prediction_pane_g1

0x518f,	// (0x00010410) fep_hwr_prediction_pane_g2

0x5197,	// (0x00010418) fep_hwr_prediction_pane_g3

0x519f,	// (0x00010420) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x0001af4c) fep_hwr_prediction_pane_g

0xc3e0,	// (0x00017661) fep_vkb_prediction_pane_g1

0xc3ea,	// (0x0001766b) fep_vkb_prediction_pane_g2

0xc3f2,	// (0x00017673) fep_vkb_prediction_pane_g3

0xc3fa,	// (0x0001767b) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x0001af55) fep_vkb_prediction_pane_g

0x4bb5,	// (0x0000fe36) slider_set_pane_g3

0x4bc9,	// (0x0000fe4a) slider_set_pane_g4

0x4be1,	// (0x0000fe62) slider_set_pane_g5

0x4bb5,	// (0x0000fe36) slider_set_pane_g6

0x4bf7,	// (0x0000fe78) slider_set_pane_g7

0x9c30,	// (0x00014eb1) slider_form_pane_g3

0x9c39,	// (0x00014eba) slider_form_pane_g4

0x9c41,	// (0x00014ec2) slider_form_pane_g5

0x9c30,	// (0x00014eb1) slider_form_pane_g6

0x200b,	// (0x0000d28c) slider_form_pane_g7

0xa3ae,	// (0x0001562f) slider_set_pane_vc_g3

0xa3b7,	// (0x00015638) slider_set_pane_vc_g4

0xa3c0,	// (0x00015641) slider_set_pane_vc_g5

0xa3ae,	// (0x0001562f) slider_set_pane_vc_g6

0xa3c9,	// (0x0001564a) slider_set_pane_vc_g7

0xa3ae,	// (0x0001562f) slider_form_pane_vc_g1

0xa3b7,	// (0x00015638) slider_form_pane_vc_g2

0xa3c0,	// (0x00015641) slider_form_pane_vc_g3

0xa3ae,	// (0x0001562f) slider_form_pane_vc_g4

0xa710,	// (0x00015991) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x0001ad1e) slider_form_pane_vc_g

0x5a7b,	// (0x00010cfc) main_idle_act3_pane

0xc402,	// (0x00017683) ai3_links_pane

0x27f2,	// (0x0000da73) popup_ai3_data_window_ParamLimits

0x27f2,	// (0x0000da73) popup_ai3_data_window

0x5a7b,	// (0x00010cfc) grid_ai3_links_pane

0x280a,	// (0x0000da8b) cell_ai3_links_pane_ParamLimits

0x280a,	// (0x0000da8b) cell_ai3_links_pane

0xc43b,	// (0x000176bc) bg_popup_sub_pane_cp11

0xc448,	// (0x000176c9) cell_ai3_links_pane_g1

0x5a7b,	// (0x00010cfc) bg_popup_sub_pane_cp12

0xc46d,	// (0x000176ee) heading_ai3_data_pane

0xc475,	// (0x000176f6) list_ai3_gene_pane

0xc481,	// (0x00017702) popup_ai3_data_window_g1

0xc489,	// (0x0001770a) heading_ai3_data_pane_g1

0xc491,	// (0x00017712) heading_ai3_data_pane_t1

0xc49f,	// (0x00017720) list_double_ai3_gene_pane_ParamLimits

0xc49f,	// (0x00017720) list_double_ai3_gene_pane

0xc4ac,	// (0x0001772d) list_single_ai3_gene_pane_ParamLimits

0xc4ac,	// (0x0001772d) list_single_ai3_gene_pane

0xafbd,	// (0x0001623e) list_highlight_pane_cp7_ParamLimits

0xafbd,	// (0x0001623e) list_highlight_pane_cp7

0xc4b9,	// (0x0001773a) list_single_a13_gene_pane_t1_ParamLimits

0xc4b9,	// (0x0001773a) list_single_a13_gene_pane_t1

0xc4d0,	// (0x00017751) list_single_ai3_gene_pane_g1

0xc4d9,	// (0x0001775a) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x0001af5e) list_single_ai3_gene_pane_g

0xc4e1,	// (0x00017762) list_double_ai3_gene_pane_g1_ParamLimits

0xc4e1,	// (0x00017762) list_double_ai3_gene_pane_g1

0xc4ed,	// (0x0001776e) list_double_ai3_gene_pane_t1_ParamLimits

0xc4ed,	// (0x0001776e) list_double_ai3_gene_pane_t1

0xc509,	// (0x0001778a) list_double_ai3_gene_pane_t2_ParamLimits

0xc509,	// (0x0001778a) list_double_ai3_gene_pane_t2

0xc51e,	// (0x0001779f) list_double_ai3_gene_pane_t3_ParamLimits

0xc51e,	// (0x0001779f) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x0001af63) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x0001af63) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc2d8,	// (0x00017559) aid_size_min_col_2

0x2698,	// (0x0000d919) aid_size_min_msg_ParamLimits

0x2698,	// (0x0000d919) aid_size_min_msg

0x2435,	// (0x0000d6b6) fep_vkb_top_text_pane_g2_ParamLimits

0x2435,	// (0x0000d6b6) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x0001adca) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x0001adca) fep_vkb_top_text_pane_g

0x5a7b,	// (0x00010cfc) main_hc_apps_shell_pane

0xc53b,	// (0x000177bc) grid_hc_apps_pane_ParamLimits

0xc53b,	// (0x000177bc) grid_hc_apps_pane

0xc54a,	// (0x000177cb) list_hc_apps_pane

0xc552,	// (0x000177d3) scroll_pane_cp37_ParamLimits

0xc552,	// (0x000177d3) scroll_pane_cp37

0x2824,	// (0x0000daa5) cell_hc_apps_pane_ParamLimits

0x2824,	// (0x0000daa5) cell_hc_apps_pane

0x28e4,	// (0x0000db65) cell_hc_apps_pane_g1_ParamLimits

0x28e4,	// (0x0000db65) cell_hc_apps_pane_g1

0xc63f,	// (0x000178c0) cell_hc_apps_pane_g2_ParamLimits

0xc63f,	// (0x000178c0) cell_hc_apps_pane_g2

0xc65b,	// (0x000178dc) cell_hc_apps_pane_g3_ParamLimits

0xc65b,	// (0x000178dc) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x0001af6a) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x0001af6a) cell_hc_apps_pane_g

0x2911,	// (0x0000db92) cell_hc_apps_pane_t1_ParamLimits

0x2911,	// (0x0000db92) cell_hc_apps_pane_t1

0x5e12,	// (0x00011093) grid_highlight_pane_cp10_ParamLimits

0x5e12,	// (0x00011093) grid_highlight_pane_cp10

0x294f,	// (0x0000dbd0) list_single_hc_apps_pane_ParamLimits

0x294f,	// (0x0000dbd0) list_single_hc_apps_pane

0x2982,	// (0x0000dc03) list_single_hc_apps_pane_g1

0x299b,	// (0x0000dc1c) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x0001af71) list_single_hc_apps_pane_g

0x29b4,	// (0x0000dc35) list_single_hc_apps_pane_g2_copy1

0x29d0,	// (0x0000dc51) list_single_hc_apps_pane_t1

0x5b6f,	// (0x00010df0) bg_set_opt_pane_cp_ParamLimits

0x41dd,	// (0x0000f45e) setting_slider_pane_t1_ParamLimits

0x41f6,	// (0x0000f477) setting_slider_pane_t2_ParamLimits

0x420f,	// (0x0000f490) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001a7f7) setting_slider_pane_t_ParamLimits

0x4226,	// (0x0000f4a7) slider_set_pane_ParamLimits

0x4749,	// (0x0000f9ca) control_pane_g5_ParamLimits

0x4749,	// (0x0000f9ca) control_pane_g5

0x9a8d,	// (0x00014d0e) slider_set_pane_g1_ParamLimits

0x4ba9,	// (0x0000fe2a) slider_set_pane_g2_ParamLimits

0x4bb5,	// (0x0000fe36) slider_set_pane_g3_ParamLimits

0x4bc9,	// (0x0000fe4a) slider_set_pane_g4_ParamLimits

0x4be1,	// (0x0000fe62) slider_set_pane_g5_ParamLimits

0x4bb5,	// (0x0000fe36) slider_set_pane_g6_ParamLimits

0x4bf7,	// (0x0000fe78) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001abec) slider_set_pane_g_ParamLimits

0x763e,	// (0x000128bf) navi_icon_text_pane_ParamLimits

0x16a9,	// (0x0000c92a) aid_fill_nsta_2_ParamLimits

0x16e0,	// (0x0000c961) aid_touch_tab_arrow_left_ParamLimits

0x16f6,	// (0x0000c977) aid_touch_tab_arrow_right_ParamLimits

0x1791,	// (0x0000ca12) clock_nsta_pane_ParamLimits

0x9542,	// (0x000147c3) navi_icon_pane_g1_ParamLimits

0x954e,	// (0x000147cf) navi_text_pane_t1_ParamLimits

0xab1e,	// (0x00015d9f) navi_icon_text_pane_g1_ParamLimits

0xab2a,	// (0x00015dab) navi_icon_text_pane_t1_ParamLimits

0x2982,	// (0x0000dc03) list_single_hc_apps_pane_g1_ParamLimits

0x299b,	// (0x0000dc1c) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x0001af71) list_single_hc_apps_pane_g_ParamLimits

0x29b4,	// (0x0000dc35) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x29d0,	// (0x0000dc51) list_single_hc_apps_pane_t1_ParamLimits

0xdc8f,	// (0x00018f10) popup_toolbar2_fixed_window_ParamLimits

0xdc8f,	// (0x00018f10) popup_toolbar2_fixed_window

0x160e,	// (0x0000c88f) popup_toolbar2_float_window

0x5a7b,	// (0x00010cfc) bg_popup_sub_pane_cp27

0xc7ac,	// (0x00017a2d) grid_toolbar2_float_pane

0x5a7b,	// (0x00010cfc) bg_popup_sub_pane_cp26

0xc7ac,	// (0x00017a2d) grid_toolbar2_fixed_pane

0x29fe,	// (0x0000dc7f) cell_toolbar2_fixed_pane_ParamLimits

0x29fe,	// (0x0000dc7f) cell_toolbar2_fixed_pane

0x2a18,	// (0x0000dc99) cell_toolbar2_fixed_pane_g1

0xc7ce,	// (0x00017a4f) toolbar2_fixed_button_pane

0x85f9,	// (0x0001387a) toolbar2_fixed_button_pane_g1

0x8609,	// (0x0001388a) toolbar2_fixed_button_pane_g2

0x8601,	// (0x00013882) toolbar2_fixed_button_pane_g3

0x8619,	// (0x0001389a) toolbar2_fixed_button_pane_g4

0x8611,	// (0x00013892) toolbar2_fixed_button_pane_g5

0x8621,	// (0x000138a2) toolbar2_fixed_button_pane_g6

0x8629,	// (0x000138aa) toolbar2_fixed_button_pane_g7

0x8639,	// (0x000138ba) toolbar2_fixed_button_pane_g8

0x8631,	// (0x000138b2) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001aaee) toolbar2_fixed_button_pane_g

0xc7d6,	// (0x00017a57) cell_toolbar2_float_pane_ParamLimits

0xc7d6,	// (0x00017a57) cell_toolbar2_float_pane

0xc7e7,	// (0x00017a68) cell_toolbar2_float_pane_g1

0xc7ce,	// (0x00017a4f) toolbar2_fixed_button_pane_cp

0x23e8,	// (0x0000d669) fep_vkb_accented_list_pane_ParamLimits

0x23e8,	// (0x0000d669) fep_vkb_accented_list_pane

0x4fbd,	// (0x0001023e) bg_popup_fep_shadow_pane_g9

0x77c0,	// (0x00012a41) bg_popup_fep_shadow_pane_cp3

0x6c26,	// (0x00011ea7) list_accented_list_pane

0xc7f0,	// (0x00017a71) list_single_accented_list_pane_ParamLimits

0xc7f0,	// (0x00017a71) list_single_accented_list_pane

0x77c0,	// (0x00012a41) list_highlight_pane_cp10

0xc801,	// (0x00017a82) list_single_accented_list_pane_t1

0x1538,	// (0x0000c7b9) popup_slider_window_ParamLimits

0x1538,	// (0x0000c7b9) popup_slider_window

0xc2cf,	// (0x00017550) aid_indentation_list_msg

0x2b11,	// (0x0000dd92) bg_popup_window_pane_cp19

0xc925,	// (0x00017ba6) popup_slider_window_g1

0xc941,	// (0x00017bc2) popup_slider_window_g2

0xc95d,	// (0x00017bde) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x0001af76) popup_slider_window_g

0xc9b9,	// (0x00017c3a) popup_slider_window_t1

0xca2d,	// (0x00017cae) small_volume_slider_vertical_pane

0xaff8,	// (0x00016279) small_volume_slider_vertical_pane_g1

0xaff8,	// (0x00016279) small_volume_slider_vertical_pane_g2

0xca49,	// (0x00017cca) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x0001af88) small_volume_slider_vertical_pane_g

0xdbfd,	// (0x00018e7e) area_side_right_pane_ParamLimits

0xdbfd,	// (0x00018e7e) area_side_right_pane

0xe072,	// (0x000192f3) aid_size_side_button_ParamLimits

0xe072,	// (0x000192f3) aid_size_side_button

0xe08b,	// (0x0001930c) grid_sctrl_middle_pane_ParamLimits

0xe08b,	// (0x0001930c) grid_sctrl_middle_pane

0x51db,	// (0x0001045c) sctrl_sk_bottom_pane

0x51ec,	// (0x0001046d) sctrl_sk_top_pane

0x51fe,	// (0x0001047f) aid_touch_sctrl_top

0x520b,	// (0x0001048c) bg_sctrl_sk_pane_ParamLimits

0x520b,	// (0x0001048c) bg_sctrl_sk_pane

0x5219,	// (0x0001049a) sctrl_sk_top_pane_g1

0x5226,	// (0x000104a7) sctrl_sk_top_pane_t1

0x51fe,	// (0x0001047f) aid_touch_sctrl_bottom

0x520b,	// (0x0001048c) bg_sctrl_sk_pane_cp_ParamLimits

0x520b,	// (0x0001048c) bg_sctrl_sk_pane_cp

0x5241,	// (0x000104c2) sctrl_sk_bottom_pane_g1

0x5226,	// (0x000104a7) sctrl_sk_bottom_pane_t1

0xe0a5,	// (0x00019326) cell_sctrl_middle_pane_ParamLimits

0xe0a5,	// (0x00019326) cell_sctrl_middle_pane

0xe0b6,	// (0x00019337) aid_touch_sctrl_middle_ParamLimits

0xe0b6,	// (0x00019337) aid_touch_sctrl_middle

0xe0c3,	// (0x00019344) bg_sctrl_middle_pane_ParamLimits

0xe0c3,	// (0x00019344) bg_sctrl_middle_pane

0x58aa,	// (0x00010b2b) cell_sctrl_middle_pane_g1_ParamLimits

0x58aa,	// (0x00010b2b) cell_sctrl_middle_pane_g1

0xe0d1,	// (0x00019352) cell_sctrl_middle_pane_g2_ParamLimits

0xe0d1,	// (0x00019352) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x0001af94) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x0001af94) cell_sctrl_middle_pane_g

0x85f9,	// (0x0001387a) bg_sctrl_middle_pane_g1

0x8601,	// (0x00013882) bg_sctrl_middle_pane_g2

0x8609,	// (0x0001388a) bg_sctrl_middle_pane_g3

0x8611,	// (0x00013892) bg_sctrl_middle_pane_g4

0x8619,	// (0x0001389a) bg_sctrl_middle_pane_g5

0x8621,	// (0x000138a2) bg_sctrl_middle_pane_g6

0x8629,	// (0x000138aa) bg_sctrl_middle_pane_g7

0x8631,	// (0x000138b2) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x0001af99) bg_sctrl_middle_pane_g

0x8639,	// (0x000138ba) bg_sctrl_middle_pane_g8_copy1

0x85f9,	// (0x0001387a) bg_sctrl_sk_pane_g1

0x8609,	// (0x0001388a) bg_sctrl_sk_pane_g2

0x8601,	// (0x00013882) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001aaee) bg_sctrl_sk_pane_g

0x630b,	// (0x0001158c) aid_size_touch_scroll_bar

0x8619,	// (0x0001389a) bg_sctrl_sk_pane_g4

0x8611,	// (0x00013892) bg_sctrl_sk_pane_g5

0x8621,	// (0x000138a2) bg_sctrl_sk_pane_g6

0x8629,	// (0x000138aa) bg_sctrl_sk_pane_g7

0x8639,	// (0x000138ba) bg_sctrl_sk_pane_g8

0x8631,	// (0x000138b2) bg_sctrl_sk_pane_g9

0x7be2,	// (0x00012e63) popup_fep_china_hwr2_fs_candidate_window

0x1072,	// (0x0000c2f3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x1072,	// (0x0000c2f3) popup_fep_china_hwr2_fs_control_window

0x4fdd,	// (0x0001025e) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x0001af8f) sctrl_sk_top_pane_g

0x2c34,	// (0x0000deb5) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2c34,	// (0x0000deb5) aid_fep_china_hwr2_fs_cell

0x2c48,	// (0x0000dec9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2c48,	// (0x0000dec9) bg_popup_fep_shadow_pane_cp4

0x2c5f,	// (0x0000dee0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2c5f,	// (0x0000dee0) bg_popup_fep_shadow_pane_cp5

0x2c71,	// (0x0000def2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c71,	// (0x0000def2) popup_fep_china_hwr2_fs_control_bar_grid

0x2c85,	// (0x0000df06) popup_fep_china_hwr2_fs_control_funtion_grid

0xcaa5,	// (0x00017d26) aid_fep_china_hwr2_fs_candi_cell

0x5a7b,	// (0x00010cfc) bg_popup_fep_shadow_pane_cp6

0xcaaf,	// (0x00017d30) popup_fep_china_hwr2_fs_candidate_grid

0x2c8d,	// (0x0000df0e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2c8d,	// (0x0000df0e) cell_fep_china_hwr2_fs_funtion_grid

0xaff8,	// (0x00016279) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcad1,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcad1,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcadf,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcadf,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x0001afaa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x0001afaa) cell_fep_china_hwr2_fs_funtion_grid_g

0x2ca5,	// (0x0000df26) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2ca5,	// (0x0000df26) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2cba,	// (0x0000df3b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2cba,	// (0x0000df3b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x0001afaf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x0001afaf) cell_fep_china_hwr2_fs_funtion_grid_t

0xcb26,	// (0x00017da7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcb2e,	// (0x00017daf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcb36,	// (0x00017db7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x0001afb4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcb3e,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcb3e,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid

0xcb57,	// (0x00017dd8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcb5f,	// (0x00017de0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xaff8,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g1

0xaff8,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x0001adcf) cell_fep_china_hwr2_fs_candidate_grid_g

0xcb67,	// (0x00017de8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x81c9,	// (0x0001344a) clock_nsta_pane_cp_24_ParamLimits

0x81c9,	// (0x0001344a) clock_nsta_pane_cp_24

0x8247,	// (0x000134c8) indicator_nsta_pane_cp_24_ParamLimits

0x8247,	// (0x000134c8) indicator_nsta_pane_cp_24

0x93ca,	// (0x0001464b) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001ab53) heading_pane_g

0x9f09,	// (0x0001518a) grid_sct_catagory_button_pane

0x9f3b,	// (0x000151bc) scroll_pane_cp5_ParamLimits

0xab6c,	// (0x00015ded) button_value_adjust_pane_cp5_ParamLimits

0xab6c,	// (0x00015ded) button_value_adjust_pane_cp5

0xac64,	// (0x00015ee5) form2_midp_time_pane_ParamLimits

0xcb75,	// (0x00017df6) cell_sct_catagory_button_pane_ParamLimits

0xcb75,	// (0x00017df6) cell_sct_catagory_button_pane

0xafbd,	// (0x0001623e) bg_button_pane_cp01_ParamLimits

0xafbd,	// (0x0001623e) bg_button_pane_cp01

0xaff8,	// (0x00016279) cell_sct_catagory_button_pane_g1

0x15b1,	// (0x0000c832) popup_tb_extension_window

0x2cd6,	// (0x0000df57) aid_size_cell_ext_ParamLimits

0x2cd6,	// (0x0000df57) aid_size_cell_ext

0x614d,	// (0x000113ce) bg_tb_trans_pane_cp1_ParamLimits

0x614d,	// (0x000113ce) bg_tb_trans_pane_cp1

0x2cfc,	// (0x0000df7d) grid_tb_ext_pane_ParamLimits

0x2cfc,	// (0x0000df7d) grid_tb_ext_pane

0x2d39,	// (0x0000dfba) cell_tb_ext_pane_ParamLimits

0x2d39,	// (0x0000dfba) cell_tb_ext_pane

0x2d61,	// (0x0000dfe2) cell_tb_ext_pane_g1_ParamLimits

0x2d61,	// (0x0000dfe2) cell_tb_ext_pane_g1

0xcc0b,	// (0x00017e8c) cell_tb_ext_pane_t1

0x5e12,	// (0x00011093) list_highlight_pane_cp11_ParamLimits

0x5e12,	// (0x00011093) list_highlight_pane_cp11

0x4116,	// (0x0000f397) popup_uni_indicator_window_ParamLimits

0x4116,	// (0x0000f397) popup_uni_indicator_window

0x6948,	// (0x00011bc9) bg_popup_sub_pane_cp14

0xcc26,	// (0x00017ea7) list_uniindi_pane

0xcc32,	// (0x00017eb3) uniindi_top_pane

0x5e12,	// (0x00011093) bg_uniindi_top_pane

0xcc51,	// (0x00017ed2) uniindi_top_pane_g1

0xcc67,	// (0x00017ee8) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x0001afbb) uniindi_top_pane_g

0xcc91,	// (0x00017f12) uniindi_top_pane_t1

0xccbb,	// (0x00017f3c) list_single_uniindi_pane_ParamLimits

0xccbb,	// (0x00017f3c) list_single_uniindi_pane

0xaff8,	// (0x00016279) bg_uniindi_top_pane_g1

0xcccd,	// (0x00017f4e) list_single_uniindi_pane_g1

0xcce0,	// (0x00017f61) list_single_uniindi_pane_t1

0x3f9a,	// (0x0000f21b) control_bg_pane

0xcd05,	// (0x00017f86) bg_sctrl_sk_pane_cp1

0xcd0e,	// (0x00017f8f) bg_sctrl_sk_pane_cp2

0xcd17,	// (0x00017f98) control_bg_pane_g1

0xcd20,	// (0x00017fa1) control_bg_pane_g2

0x0001,

0xfd43,	// (0x0001afc4) control_bg_pane_g

0xa99c,	// (0x00015c1d) cell_indicator_nsta_pane_g1_ParamLimits

0x2200,	// (0x0000d481) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x0001ad33) cell_indicator_nsta_pane_g_ParamLimits

0xace8,	// (0x00015f69) form2_midp_time_pane_t1_ParamLimits

0xe49e,	// (0x0001971f) main_idle_act4_pane_ParamLimits

0xe49e,	// (0x0001971f) main_idle_act4_pane

0x15b1,	// (0x0000c832) popup_tb_extension_window_ParamLimits

0x2d20,	// (0x0000dfa1) tb_ext_find_pane_ParamLimits

0x2d20,	// (0x0000dfa1) tb_ext_find_pane

0xcd29,	// (0x00017faa) ai_gene_pane_1_cp1

0x78fd,	// (0x00012b7e) ai_gene_pane_2_cp1

0xcd31,	// (0x00017fb2) list_single_idle_plugin_calendar_pane

0xcd3a,	// (0x00017fbb) list_single_idle_plugin_notification_pane

0xcd43,	// (0x00017fc4) list_single_idle_plugin_player_pane

0x2d7e,	// (0x0000dfff) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2d7e,	// (0x0000dfff) list_single_idle_plugin_shortcut_pane

0x2da6,	// (0x0000e027) main_idle_act4_pane_t1

0x2dbc,	// (0x0000e03d) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x0001afc9) main_idle_act4_pane_t

0x2dd4,	// (0x0000e055) middle_sk_idle_act4_pane_ParamLimits

0x2dd4,	// (0x0000e055) middle_sk_idle_act4_pane

0x2df0,	// (0x0000e071) popup_clock_digital_analogue_window_cp2

0x2e17,	// (0x0000e098) shortcut_wheel_idle_act4_pane_ParamLimits

0x2e17,	// (0x0000e098) shortcut_wheel_idle_act4_pane

0xaff8,	// (0x00016279) shortcut_wheel_idle_act4_pane_g1

0xaff8,	// (0x00016279) shortcut_wheel_idle_act4_pane_g2

0xaff8,	// (0x00016279) shortcut_wheel_idle_act4_pane_g3

0xaff8,	// (0x00016279) shortcut_wheel_idle_act4_pane_g4

0xaff8,	// (0x00016279) shortcut_wheel_idle_act4_pane_g5

0xcdd6,	// (0x00018057) shortcut_wheel_idle_act4_pane_g6

0xcdde,	// (0x0001805f) shortcut_wheel_idle_act4_pane_g7

0xcde6,	// (0x00018067) shortcut_wheel_idle_act4_pane_g8

0xcdee,	// (0x0001806f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x0001afce) shortcut_wheel_idle_act4_pane_g

0xe4cd,	// (0x0001974e) middle_sk_idle_act4_pane_g1_ParamLimits

0xe4cd,	// (0x0001974e) middle_sk_idle_act4_pane_g1

0x2e94,	// (0x0000e115) middle_sk_idle_act4_pane_g2_ParamLimits

0x2e94,	// (0x0000e115) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x0001aff1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x0001aff1) middle_sk_idle_act4_pane_g

0x2eac,	// (0x0000e12d) middle_sk_idle_act4_pane_t1_ParamLimits

0x2eac,	// (0x0000e12d) middle_sk_idle_act4_pane_t1

0x2edb,	// (0x0000e15c) grid_ai_shortcut_pane_ParamLimits

0x2edb,	// (0x0000e15c) grid_ai_shortcut_pane

0x2ef8,	// (0x0000e179) list_highlight_pane_cp16_ParamLimits

0x2ef8,	// (0x0000e179) list_highlight_pane_cp16

0x2f05,	// (0x0000e186) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2f05,	// (0x0000e186) list_single_idle_plugin_shortcut_pane_g1

0x2f11,	// (0x0000e192) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2f11,	// (0x0000e192) list_single_idle_plugin_shortcut_pane_g2

0x2f2d,	// (0x0000e1ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2f2d,	// (0x0000e1ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x0001aff6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x0001aff6) list_single_idle_plugin_shortcut_pane_g

0x2f42,	// (0x0000e1c3) cell_ai_shortcut_pane_ParamLimits

0x2f42,	// (0x0000e1c3) cell_ai_shortcut_pane

0x2f58,	// (0x0000e1d9) cell_ai_shortcut_pane_g1_ParamLimits

0x2f58,	// (0x0000e1d9) cell_ai_shortcut_pane_g1

0xcd29,	// (0x00017faa) ai_gene_pane_1_cp2

0xcf1b,	// (0x0001819c) ai_gene_pane_2_cp2

0xcf23,	// (0x000181a4) list_highlight_pane_cp15

0xcf2c,	// (0x000181ad) list_single_idle_plugin_calendar_pane_g1

0xcf23,	// (0x000181a4) list_highlight_pane_cp17

0xcf34,	// (0x000181b5) list_single_idle_plugin_calendar_pane_g1_copy1

0xcf3c,	// (0x000181bd) list_single_idle_plugin_player_pane_g1

0xa162,	// (0x000153e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x0001affd) list_single_idle_plugin_player_pane_g

0xcf44,	// (0x000181c5) list_single_idle_plugin_player_pane_t1

0xcf52,	// (0x000181d3) list_single_idle_plugin_player_pane_t2

0xcf60,	// (0x000181e1) list_single_idle_plugin_player_pane_t3

0xcf6e,	// (0x000181ef) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x0001b002) list_single_idle_plugin_player_pane_t

0xcf7c,	// (0x000181fd) wait_bar_pane_cp15

0xcf84,	// (0x00018205) grid_ai_notification_pane

0xa162,	// (0x000153e3) list_single_idle_plugin_notification_pane_g1

0x2f7a,	// (0x0000e1fb) cell_ai_notification_pane_ParamLimits

0x2f7a,	// (0x0000e1fb) cell_ai_notification_pane

0xcf9a,	// (0x0001821b) cell_ai_notification_pane_g1

0xcfa2,	// (0x00018223) cell_ai_notification_pane_t1

0x2f87,	// (0x0000e208) tb_ext_find_button_pane

0x2f8f,	// (0x0000e210) tb_ext_find_pane_g1

0x2f97,	// (0x0000e218) tb_ext_find_pane_t1

0x7126,	// (0x000123a7) tb_ext_find_button_pane_g1

0xcfce,	// (0x0001824f) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x0001b00b) tb_ext_find_button_pane_g

0x2da6,	// (0x0000e027) main_idle_act4_pane_t1_ParamLimits

0x2dbc,	// (0x0000e03d) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x0001afc9) main_idle_act4_pane_t_ParamLimits

0x2df0,	// (0x0000e071) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2e07,	// (0x0000e088) sat_plugin_idle_act4_pane_ParamLimits

0x2e07,	// (0x0000e088) sat_plugin_idle_act4_pane

0x2fa5,	// (0x0000e226) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2fa5,	// (0x0000e226) sat_plugin_idle_act4_pane_t1

0x2fbd,	// (0x0000e23e) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2fbd,	// (0x0000e23e) sat_plugin_idle_act4_pane_t2

0x2fd5,	// (0x0000e256) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2fd5,	// (0x0000e256) sat_plugin_idle_act4_pane_t3

0x2fed,	// (0x0000e26e) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2fed,	// (0x0000e26e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x0001b010) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x0001b010) sat_plugin_idle_act4_pane_t

0x405f,	// (0x0000f2e0) popup_battery_window_ParamLimits

0x405f,	// (0x0000f2e0) popup_battery_window

0x5e12,	// (0x00011093) bg_popup_sub_pane_cp25_ParamLimits

0x5e12,	// (0x00011093) bg_popup_sub_pane_cp25

0xd023,	// (0x000182a4) popup_battery_window_g1_ParamLimits

0xd023,	// (0x000182a4) popup_battery_window_g1

0xd02f,	// (0x000182b0) popup_battery_window_t1_ParamLimits

0xd02f,	// (0x000182b0) popup_battery_window_t1

0xd041,	// (0x000182c2) popup_battery_window_t2_ParamLimits

0xd041,	// (0x000182c2) popup_battery_window_t2

0x0001,

0xfd98,	// (0x0001b019) popup_battery_window_t_ParamLimits

0xfd98,	// (0x0001b019) popup_battery_window_t

0x0d9c,	// (0x0000c01d) midp_canvas_pane_ParamLimits

0x0df9,	// (0x0000c07a) midp_keypad_pane_ParamLimits

0x0df9,	// (0x0000c07a) midp_keypad_pane

0x7b3a,	// (0x00012dbb) main_midp_pane_ParamLimits

0xaa28,	// (0x00015ca9) signal_pane_g2_cp_ParamLimits

0x3005,	// (0x0000e286) aid_size_cell_midp_keypad_ParamLimits

0x3005,	// (0x0000e286) aid_size_cell_midp_keypad

0x3023,	// (0x0000e2a4) midp_keyp_game_grid_pane_ParamLimits

0x3023,	// (0x0000e2a4) midp_keyp_game_grid_pane

0x304a,	// (0x0000e2cb) midp_keyp_rocker_pane_ParamLimits

0x304a,	// (0x0000e2cb) midp_keyp_rocker_pane

0x308b,	// (0x0000e30c) midp_keyp_sk_left_pane_ParamLimits

0x308b,	// (0x0000e30c) midp_keyp_sk_left_pane

0x30df,	// (0x0000e360) midp_keyp_sk_right_pane_ParamLimits

0x30df,	// (0x0000e360) midp_keyp_sk_right_pane

0x5a7b,	// (0x00010cfc) bg_button_pane_cp03

0x3133,	// (0x0000e3b4) midp_keyp_sk_left_pane_g1

0x5a7b,	// (0x00010cfc) bg_button_pane_cp04

0x3133,	// (0x0000e3b4) midp_keyp_sk_right_pane_g1

0xaff8,	// (0x00016279) midp_keyp_rocker_pane_g1

0x313c,	// (0x0000e3bd) keyp_game_cell_pane_ParamLimits

0x313c,	// (0x0000e3bd) keyp_game_cell_pane

0x5a7b,	// (0x00010cfc) bg_button_pane_cp02

0x3160,	// (0x0000e3e1) keyp_game_cell_pane_g1

0xdc3f,	// (0x00018ec0) popup_fep_vkb2_window_ParamLimits

0xdc3f,	// (0x00018ec0) popup_fep_vkb2_window

0xe0dd,	// (0x0001935e) aid_size_cell_vkb2_ParamLimits

0xe0dd,	// (0x0001935e) aid_size_cell_vkb2

0xe113,	// (0x00019394) popup_fep_vkb2_window_g1_ParamLimits

0xe113,	// (0x00019394) popup_fep_vkb2_window_g1

0xe15a,	// (0x000193db) vkb2_area_bottom_pane_ParamLimits

0xe15a,	// (0x000193db) vkb2_area_bottom_pane

0xe1ae,	// (0x0001942f) vkb2_area_keypad_pane_ParamLimits

0xe1ae,	// (0x0001942f) vkb2_area_keypad_pane

0xe1f6,	// (0x00019477) vkb2_area_top_pane_ParamLimits

0xe1f6,	// (0x00019477) vkb2_area_top_pane

0xe27c,	// (0x000194fd) vkb2_top_entry_pane_ParamLimits

0xe27c,	// (0x000194fd) vkb2_top_entry_pane

0xe2a9,	// (0x0001952a) vkb2_top_grid_left_pane_ParamLimits

0xe2a9,	// (0x0001952a) vkb2_top_grid_left_pane

0xe2c9,	// (0x0001954a) vkb2_top_grid_right_pane_ParamLimits

0xe2c9,	// (0x0001954a) vkb2_top_grid_right_pane

0x54a5,	// (0x00010726) vkb2_cell_keypad_pane_ParamLimits

0x54a5,	// (0x00010726) vkb2_cell_keypad_pane

0xe30f,	// (0x00019590) vkb2_area_bottom_grid_pane_ParamLimits

0xe30f,	// (0x00019590) vkb2_area_bottom_grid_pane

0xe339,	// (0x000195ba) vkb2_area_bottom_pane_g1_ParamLimits

0xe339,	// (0x000195ba) vkb2_area_bottom_pane_g1

0xe35f,	// (0x000195e0) vkb2_area_bottom_pane_g2_ParamLimits

0xe35f,	// (0x000195e0) vkb2_area_bottom_pane_g2

0xe390,	// (0x00019611) vkb2_area_bottom_pane_g3_ParamLimits

0xe390,	// (0x00019611) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x0001b01e) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x0001b01e) vkb2_area_bottom_pane_g

0x564f,	// (0x000108d0) vkb2_top_cell_left_pane_ParamLimits

0x564f,	// (0x000108d0) vkb2_top_cell_left_pane

0x3486,	// (0x0000e707) vkb2_top_entry_pane_g1_ParamLimits

0x3486,	// (0x0000e707) vkb2_top_entry_pane_g1

0x3494,	// (0x0000e715) vkb2_top_entry_pane_t1_ParamLimits

0x3494,	// (0x0000e715) vkb2_top_entry_pane_t1

0xe4e3,	// (0x00019764) vkb2_top_entry_pane_t2_ParamLimits

0xe4e3,	// (0x00019764) vkb2_top_entry_pane_t2

0xe515,	// (0x00019796) vkb2_top_entry_pane_t3_ParamLimits

0xe515,	// (0x00019796) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x0001b025) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x0001b025) vkb2_top_entry_pane_t

0xe3fa,	// (0x0001967b) vkb2_top_grid_right_pane_g1_ParamLimits

0xe3fa,	// (0x0001967b) vkb2_top_grid_right_pane_g1

0x56b2,	// (0x00010933) vkb2_top_grid_right_pane_g2_ParamLimits

0x56b2,	// (0x00010933) vkb2_top_grid_right_pane_g2

0x56ca,	// (0x0001094b) vkb2_top_grid_right_pane_g3_ParamLimits

0x56ca,	// (0x0001094b) vkb2_top_grid_right_pane_g3

0xe410,	// (0x00019691) vkb2_top_grid_right_pane_g4_ParamLimits

0xe410,	// (0x00019691) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x0001b02c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x0001b02c) vkb2_top_grid_right_pane_g

0x56f8,	// (0x00010979) vkb2_top_cell_left_pane_g1

0x570f,	// (0x00010990) vkb2_cell_keypad_pane_g1_ParamLimits

0x570f,	// (0x00010990) vkb2_cell_keypad_pane_g1

0xe539,	// (0x000197ba) vkb2_cell_keypad_pane_t1_ParamLimits

0xe539,	// (0x000197ba) vkb2_cell_keypad_pane_t1

0x571d,	// (0x0001099e) vkb2_cell_bottom_grid_pane_ParamLimits

0x571d,	// (0x0001099e) vkb2_cell_bottom_grid_pane

0x5756,	// (0x000109d7) vkb2_cell_bottom_grid_pane_g1

0x2e38,	// (0x0000e0b9) aid_call2_pane_cp02

0x2e40,	// (0x0000e0c1) aid_call_pane_cp02

0x2e48,	// (0x0000e0c9) clock_digital_number_pane_cp10

0x2e50,	// (0x0000e0d1) clock_digital_number_pane_cp11

0x2e58,	// (0x0000e0d9) clock_digital_number_pane_cp12

0x2e60,	// (0x0000e0e1) clock_digital_number_pane_cp13

0x2e68,	// (0x0000e0e9) clock_digital_separator_pane_cp10

0x7126,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g1

0x7126,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g2

0x2e70,	// (0x0000e0f1) popup_clock_digital_analogue_window_cp2_g3

0x7126,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g4

0x2e70,	// (0x0000e0f1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x0001afe1) popup_clock_digital_analogue_window_cp2_g

0x2e78,	// (0x0000e0f9) popup_clock_digital_analogue_window_cp2_t1

0x2e86,	// (0x0000e107) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x0001afec) popup_clock_digital_analogue_window_cp2_t

0xaff8,	// (0x00016279) clock_digital_number_pane_cp10_g1

0xaff8,	// (0x00016279) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0001adcf) clock_digital_number_pane_cp10_g

0xaff8,	// (0x00016279) clock_digital_separator_pane_cp10_g1

0xaff8,	// (0x00016279) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0001adcf) clock_digital_separator_pane_cp10_g

0xcc73,	// (0x00017ef4) uniindi_top_pane_g3

0xcc84,	// (0x00017f05) uniindi_top_pane_g4

0x5530,	// (0x000107b1) vkb2_row_keypad_pane_ParamLimits

0x5530,	// (0x000107b1) vkb2_row_keypad_pane

0x5776,	// (0x000109f7) vkb2_cell_t_keypad_pane_ParamLimits

0x5776,	// (0x000109f7) vkb2_cell_t_keypad_pane

0x5786,	// (0x00010a07) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5786,	// (0x00010a07) vkb2_cell_t_keypad_pane_cp08

0x5799,	// (0x00010a1a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5799,	// (0x00010a1a) vkb2_cell_t_keypad_pane_cp09

0x57ad,	// (0x00010a2e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x57ad,	// (0x00010a2e) vkb2_cell_t_keypad_pane_cp01

0x57be,	// (0x00010a3f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x57be,	// (0x00010a3f) vkb2_cell_t_keypad_pane_cp02

0x57cf,	// (0x00010a50) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x57cf,	// (0x00010a50) vkb2_cell_t_keypad_pane_cp03

0x57e0,	// (0x00010a61) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x57e0,	// (0x00010a61) vkb2_cell_t_keypad_pane_cp04

0x57f1,	// (0x00010a72) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x57f1,	// (0x00010a72) vkb2_cell_t_keypad_pane_cp05

0x5802,	// (0x00010a83) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5802,	// (0x00010a83) vkb2_cell_t_keypad_pane_cp06

0x5813,	// (0x00010a94) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5813,	// (0x00010a94) vkb2_cell_t_keypad_pane_cp07

0x5824,	// (0x00010aa5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5824,	// (0x00010aa5) vkb2_cell_t_keypad_pane_cp10

0x4fdd,	// (0x0001025e) vkb2_cell_t_keypad_pane_g1

0xe550,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1

0x3f9a,	// (0x0000f21b) popup_grid_graphic2_window

0x34f9,	// (0x0000e77a) aid_size_cell_graphic2_ParamLimits

0x34f9,	// (0x0000e77a) aid_size_cell_graphic2

0x3537,	// (0x0000e7b8) bg_popup_window_pane_cp21_ParamLimits

0x3537,	// (0x0000e7b8) bg_popup_window_pane_cp21

0x3545,	// (0x0000e7c6) graphic2_pages_pane_ParamLimits

0x3545,	// (0x0000e7c6) graphic2_pages_pane

0x359b,	// (0x0000e81c) grid_graphic2_control_pane_ParamLimits

0x359b,	// (0x0000e81c) grid_graphic2_control_pane

0x35e3,	// (0x0000e864) grid_graphic2_pane_ParamLimits

0x35e3,	// (0x0000e864) grid_graphic2_pane

0x366a,	// (0x0000e8eb) cell_graphic2_pane

0x5a7b,	// (0x00010cfc) main_comp_mode_pane

0xc475,	// (0x000176f6) list_ai3_gene_pane_ParamLimits

0x2b11,	// (0x0000dd92) bg_popup_window_pane_cp19_ParamLimits

0xc8c7,	// (0x00017b48) bg_touch_area_indi_pane_ParamLimits

0xc8c7,	// (0x00017b48) bg_touch_area_indi_pane

0xc8dd,	// (0x00017b5e) bg_touch_area_indi_pane_cp01_ParamLimits

0xc8dd,	// (0x00017b5e) bg_touch_area_indi_pane_cp01

0xc8f3,	// (0x00017b74) bg_touch_area_indi_pane_cp02_ParamLimits

0xc8f3,	// (0x00017b74) bg_touch_area_indi_pane_cp02

0xc90b,	// (0x00017b8c) bg_touch_area_indi_pane_cp03_ParamLimits

0xc90b,	// (0x00017b8c) bg_touch_area_indi_pane_cp03

0xc925,	// (0x00017ba6) popup_slider_window_g1_ParamLimits

0xc941,	// (0x00017bc2) popup_slider_window_g2_ParamLimits

0xc95d,	// (0x00017bde) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x0001af76) popup_slider_window_g_ParamLimits

0xc9b9,	// (0x00017c3a) popup_slider_window_t1_ParamLimits

0xca2d,	// (0x00017cae) small_volume_slider_vertical_pane_ParamLimits

0x366a,	// (0x0000e8eb) cell_graphic2_pane_ParamLimits

0x36c7,	// (0x0000e948) bg_button_pane_cp10_ParamLimits

0x36c7,	// (0x0000e948) bg_button_pane_cp10

0x36da,	// (0x0000e95b) bg_button_pane_cp11_ParamLimits

0x36da,	// (0x0000e95b) bg_button_pane_cp11

0x36ed,	// (0x0000e96e) graphic2_pages_pane_g1_ParamLimits

0x36ed,	// (0x0000e96e) graphic2_pages_pane_g1

0x3708,	// (0x0000e989) graphic2_pages_pane_g2_ParamLimits

0x3708,	// (0x0000e989) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x0001b03a) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x0001b03a) graphic2_pages_pane_g

0x3720,	// (0x0000e9a1) graphic2_pages_pane_t1_ParamLimits

0x3720,	// (0x0000e9a1) graphic2_pages_pane_t1

0x3738,	// (0x0000e9b9) cell_graphic2_control_pane_ParamLimits

0x3738,	// (0x0000e9b9) cell_graphic2_control_pane

0x376a,	// (0x0000e9eb) cell_graphic2_pane_g1_ParamLimits

0x376a,	// (0x0000e9eb) cell_graphic2_pane_g1

0xe562,	// (0x000197e3) cell_graphic2_pane_g2_ParamLimits

0xe562,	// (0x000197e3) cell_graphic2_pane_g2

0x3777,	// (0x0000e9f8) cell_graphic2_pane_g3_ParamLimits

0x3777,	// (0x0000e9f8) cell_graphic2_pane_g3

0xe56f,	// (0x000197f0) cell_graphic2_pane_g4_ParamLimits

0xe56f,	// (0x000197f0) cell_graphic2_pane_g4

0x3784,	// (0x0000ea05) cell_graphic2_pane_g5_ParamLimits

0x3784,	// (0x0000ea05) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x0001b03f) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x0001b03f) cell_graphic2_pane_g

0x37a4,	// (0x0000ea25) cell_graphic2_pane_t1_ParamLimits

0x37a4,	// (0x0000ea25) cell_graphic2_pane_t1

0x93be,	// (0x0001463f) grid_highlight_pane_cp11_ParamLimits

0x93be,	// (0x0001463f) grid_highlight_pane_cp11

0x5e12,	// (0x00011093) bg_button_pane_cp05

0x37d9,	// (0x0000ea5a) cell_graphic2_control_pane_g1

0xaff8,	// (0x00016279) bg_touch_area_indi_pane_g1

0xe57c,	// (0x000197fd) aid_cmod_rocker_key_size

0xe586,	// (0x00019807) aid_cmode_itu_key_size

0xe590,	// (0x00019811) main_cmode_video_pane

0xe59a,	// (0x0001981b) main_comp_mode_itu_pane

0xe5a6,	// (0x00019827) main_comp_mode_rocker_pane

0xe5b2,	// (0x00019833) cell_cmode_rocker_pane_ParamLimits

0xe5b2,	// (0x00019833) cell_cmode_rocker_pane

0xe5c4,	// (0x00019845) cell_cmode_itu_pane_ParamLimits

0xe5c4,	// (0x00019845) cell_cmode_itu_pane

0x6948,	// (0x00011bc9) bg_button_pane_cp06_ParamLimits

0x6948,	// (0x00011bc9) bg_button_pane_cp06

0xb273,	// (0x000164f4) cell_cmode_rocker_pane_g1_ParamLimits

0xb273,	// (0x000164f4) cell_cmode_rocker_pane_g1

0xcad1,	// (0x00017d52) cell_cmode_rocker_pane_g2_ParamLimits

0xcad1,	// (0x00017d52) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x0001b04f) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x0001b04f) cell_cmode_rocker_pane_g

0x5a7b,	// (0x00010cfc) bg_button_pane_cp07

0xe5d9,	// (0x0001985a) cell_cmode_itu_pane_g1

0xe5e2,	// (0x00019863) cell_cmode_itu_pane_t1

0xe5f0,	// (0x00019871) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x0001b054) cell_cmode_itu_pane_t

0xccf5,	// (0x00017f76) aid_touch_ctrl_left

0xccfd,	// (0x00017f7e) aid_touch_ctrl_right

0x5a7b,	// (0x00010cfc) compa_mode_pane

0x37ff,	// (0x0000ea80) aid_cmod_rocker_key_size_cp

0x3809,	// (0x0000ea8a) aid_cmode_itu_key_size_cp

0xe5fe,	// (0x0001987f) compa_mode_pane_g1

0xe606,	// (0x00019887) compa_mode_pane_g2

0xe60e,	// (0x0001988f) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x0001b059) compa_mode_pane_g

0x3813,	// (0x0000ea94) main_comp_mode_itu_pane_cp

0x381b,	// (0x0000ea9c) main_comp_mode_rocker_pane_cp

0x3823,	// (0x0000eaa4) cell_cmode_itu_pane_cp_ParamLimits

0x3823,	// (0x0000eaa4) cell_cmode_itu_pane_cp

0x3838,	// (0x0000eab9) cell_cmode_rocker_pane_cp_ParamLimits

0x3838,	// (0x0000eab9) cell_cmode_rocker_pane_cp

0x6948,	// (0x00011bc9) bg_button_pane_cp06_cp_ParamLimits

0x6948,	// (0x00011bc9) bg_button_pane_cp06_cp

0xb273,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb273,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp

0xaff8,	// (0x00016279) cell_cmode_rocker_pane_g2_cp

0x5a7b,	// (0x00010cfc) bg_button_pane_cp07_cp

0x384a,	// (0x0000eacb) cell_cmode_itu_pane_g1_cp

0x3853,	// (0x0000ead4) cell_cmode_itu_pane_t1_cp

0x3853,	// (0x0000ead4) cell_cmode_itu_pane_t2_cp

0x2001,	// (0x0000d282) settings_code_pane_cp2

0x5b6f,	// (0x00010df0) bg_popup_window_pane_cp3_ParamLimits

0x5fe0,	// (0x00011261) heading_pane_cp3_ParamLimits

0x5fec,	// (0x0001126d) listscroll_popup_graphic_pane_ParamLimits

0x4d86,	// (0x00010007) fep_hwr_aid_pane_ParamLimits

0x51fe,	// (0x0001047f) aid_touch_sctrl_top_ParamLimits

0x5219,	// (0x0001049a) sctrl_sk_top_pane_g1_ParamLimits

0x4fdd,	// (0x0001025e) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x0001af8f) sctrl_sk_top_pane_g_ParamLimits

0x5226,	// (0x000104a7) sctrl_sk_top_pane_t1_ParamLimits

0x51fe,	// (0x0001047f) aid_touch_sctrl_bottom_ParamLimits

0x5226,	// (0x000104a7) sctrl_sk_bottom_pane_t1_ParamLimits

0xcc3f,	// (0x00017ec0) aid_area_touch_clock

0xe23e,	// (0x000194bf) aid_vkb2_area_top_pane_cell_ParamLimits

0xe23e,	// (0x000194bf) aid_vkb2_area_top_pane_cell

0xe2e9,	// (0x0001956a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe2e9,	// (0x0001956a) aid_vkb2_area_bottom_pane_cell

0xe4db,	// (0x0001975c) popup_char_count_window

0xe616,	// (0x00019897) popup_char_count_window_g1

0xe61f,	// (0x000198a0) popup_char_count_window_g2

0xe628,	// (0x000198a9) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x0001b060) popup_char_count_window_g

0xe631,	// (0x000198b2) popup_char_count_window_t1

0x52d5,	// (0x00010556) popup_fep_char_preview_window_ParamLimits

0x52d5,	// (0x00010556) popup_fep_char_preview_window

0xe25e,	// (0x000194df) vkb2_top_candi_pane_ParamLimits

0xe25e,	// (0x000194df) vkb2_top_candi_pane

0x3861,	// (0x0000eae2) cell_vkb2_top_candi_pane_ParamLimits

0x3861,	// (0x0000eae2) cell_vkb2_top_candi_pane

0x5839,	// (0x00010aba) bg_popup_fep_char_preview_window_ParamLimits

0x5839,	// (0x00010aba) bg_popup_fep_char_preview_window

0x5847,	// (0x00010ac8) popup_fep_char_preview_window_t1_ParamLimits

0x5847,	// (0x00010ac8) popup_fep_char_preview_window_t1

0xe63f,	// (0x000198c0) bg_popup_fep_char_preview_window_g1

0xe647,	// (0x000198c8) bg_popup_fep_char_preview_window_g2

0xe64f,	// (0x000198d0) bg_popup_fep_char_preview_window_g3

0xe657,	// (0x000198d8) bg_popup_fep_char_preview_window_g4

0xe65f,	// (0x000198e0) bg_popup_fep_char_preview_window_g5

0x5881,	// (0x00010b02) bg_popup_fep_char_preview_window_g6

0xe667,	// (0x000198e8) bg_popup_fep_char_preview_window_g7

0xe66f,	// (0x000198f0) bg_popup_fep_char_preview_window_g8

0xe677,	// (0x000198f8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x0001b067) bg_popup_fep_char_preview_window_g

0x4fdd,	// (0x0001025e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4fdd,	// (0x0001025e) cell_vkb2_top_candi_pane_g1

0x4feb,	// (0x0001026c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4feb,	// (0x0001026c) cell_vkb2_top_candi_pane_g2

0xe4ac,	// (0x0001972d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe4ac,	// (0x0001972d) cell_vkb2_top_candi_pane_g3

0x5889,	// (0x00010b0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5889,	// (0x00010b0a) cell_vkb2_top_candi_pane_g4

0xb89b,	// (0x00016b1c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb89b,	// (0x00016b1c) cell_vkb2_top_candi_pane_g5

0x58aa,	// (0x00010b2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x58aa,	// (0x00010b2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x0001b07a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x0001b07a) cell_vkb2_top_candi_pane_g

0x58b8,	// (0x00010b39) cell_vkb2_top_candi_pane_t1

0x4b95,	// (0x0000fe16) aid_size_touch_slider_mark_ParamLimits

0x4b95,	// (0x0000fe16) aid_size_touch_slider_mark

0x3581,	// (0x0000e802) grid_graphic2_catg_pane_ParamLimits

0x3581,	// (0x0000e802) grid_graphic2_catg_pane

0x363d,	// (0x0000e8be) popup_grid_graphic2_window_t1_ParamLimits

0x363d,	// (0x0000e8be) popup_grid_graphic2_window_t1

0x3653,	// (0x0000e8d4) popup_grid_graphic2_window_t2_ParamLimits

0x3653,	// (0x0000e8d4) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x0001b035) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x0001b035) popup_grid_graphic2_window_t

0x5e12,	// (0x00011093) bg_button_pane_cp05_ParamLimits

0x37d9,	// (0x0000ea5a) cell_graphic2_control_pane_g1_ParamLimits

0x38c7,	// (0x0000eb48) cell_graphic2_catg_pane_ParamLimits

0x38c7,	// (0x0000eb48) cell_graphic2_catg_pane

0x5a7b,	// (0x00010cfc) bg_button_pane_cp12

0x38d9,	// (0x0000eb5a) cell_graphic2_catg_pane_g1

0xcc0b,	// (0x00017e8c) cell_tb_ext_pane_t1_ParamLimits

0x566f,	// (0x000108f0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x566f,	// (0x000108f0) vkb2_top_cell_right_narrow_pane

0x5687,	// (0x00010908) vkb2_top_cell_right_wide_pane_ParamLimits

0x5687,	// (0x00010908) vkb2_top_cell_right_wide_pane

0x4d78,	// (0x0000fff9) bg_vkb2_func_pane_ParamLimits

0x4d78,	// (0x0000fff9) bg_vkb2_func_pane

0x56f8,	// (0x00010979) vkb2_top_cell_left_pane_g1_ParamLimits

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp03

0x5756,	// (0x000109d7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8601,	// (0x00013882) bg_vkb2_func_pane_g1

0x8609,	// (0x0001388a) bg_vkb2_func_pane_g2

0x8619,	// (0x0001389a) bg_vkb2_func_pane_g3

0x8611,	// (0x00013892) bg_vkb2_func_pane_g4

0x8621,	// (0x000138a2) bg_vkb2_func_pane_g5

0x8629,	// (0x000138aa) bg_vkb2_func_pane_g6

0x8631,	// (0x000138b2) bg_vkb2_func_pane_g7

0x8639,	// (0x000138ba) bg_vkb2_func_pane_g8

0x85f9,	// (0x0001387a) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x0001b087) bg_vkb2_func_pane_g

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp01

0x56f8,	// (0x00010979) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x56f8,	// (0x00010979) vkb2_top_cell_right_wide_pane_g1

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4d78,	// (0x0000fff9) bg_vkb2_fuc_pane_cp02

0x5756,	// (0x000109d7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5756,	// (0x000109d7) vkb2_top_cell_right_narrow_pane_g1

0x2a4b,	// (0x0000dccc) aid_touch_area_decrease_ParamLimits

0x2a4b,	// (0x0000dccc) aid_touch_area_decrease

0x2a85,	// (0x0000dd06) aid_touch_area_increase_ParamLimits

0x2a85,	// (0x0000dd06) aid_touch_area_increase

0x2aad,	// (0x0000dd2e) aid_touch_area_mute_ParamLimits

0x2aad,	// (0x0000dd2e) aid_touch_area_mute

0x2add,	// (0x0000dd5e) aid_touch_area_slider_ParamLimits

0x2add,	// (0x0000dd5e) aid_touch_area_slider

0x2b1d,	// (0x0000dd9e) popup_slider_window_g4_ParamLimits

0x2b1d,	// (0x0000dd9e) popup_slider_window_g4

0x2b45,	// (0x0000ddc6) popup_slider_window_g5_ParamLimits

0x2b45,	// (0x0000ddc6) popup_slider_window_g5

0x2b79,	// (0x0000ddfa) popup_slider_window_g6_ParamLimits

0x2b79,	// (0x0000ddfa) popup_slider_window_g6

0xc9e7,	// (0x00017c68) popup_slider_window_t2_ParamLimits

0xc9e7,	// (0x00017c68) popup_slider_window_t2

0x0001,

0xfd02,	// (0x0001af83) popup_slider_window_t_ParamLimits

0xfd02,	// (0x0001af83) popup_slider_window_t

0x2b95,	// (0x0000de16) slider_pane_ParamLimits

0x2b95,	// (0x0000de16) slider_pane

0xe67f,	// (0x00019900) slider_pane_g1_ParamLimits

0xe67f,	// (0x00019900) slider_pane_g1

0xe693,	// (0x00019914) slider_pane_g2_ParamLimits

0xe693,	// (0x00019914) slider_pane_g2

0xe6a9,	// (0x0001992a) slider_pane_g3_ParamLimits

0xe6a9,	// (0x0001992a) slider_pane_g3

0x0003,

0xfe19,	// (0x0001b09a) slider_pane_g_ParamLimits

0xfe19,	// (0x0001b09a) slider_pane_g

0x15f9,	// (0x0000c87a) popup_tb_float_extension_window_ParamLimits

0x15f9,	// (0x0000c87a) popup_tb_float_extension_window

0xe6d5,	// (0x00019956) aid_size_cell_tb_float_ext

0x5a7b,	// (0x00010cfc) bg_popup_sub_window_cp28

0xe6e1,	// (0x00019962) grid_tb_float_ext_pane

0xe6eb,	// (0x0001996c) cell_tb_float_ext_pane_ParamLimits

0xe6eb,	// (0x0001996c) cell_tb_float_ext_pane

0xe705,	// (0x00019986) cell_tb_float_ext_pane_g1

0xe70e,	// (0x0001998f) grid_highlight_pane_cp12

0xe050,	// (0x000192d1) cell_last_hwr_side_pane_ParamLimits

0xe050,	// (0x000192d1) cell_last_hwr_side_pane

0xaff8,	// (0x00016279) cell_last_hwr_side_pane_g1

0xe717,	// (0x00019998) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x0001b0a3) cell_last_hwr_side_pane_g

0xe3c5,	// (0x00019646) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe3c5,	// (0x00019646) vkb2_area_bottom_space_btn_pane

0x4fdd,	// (0x0001025e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe550,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x58b8,	// (0x00010b39) cell_vkb2_top_candi_pane_t1_ParamLimits

0x58d7,	// (0x00010b58) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x58d7,	// (0x00010b58) vkb2_area_bottom_space_btn_pane_g1

0x5911,	// (0x00010b92) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5911,	// (0x00010b92) vkb2_area_bottom_space_btn_pane_g2

0x5947,	// (0x00010bc8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5947,	// (0x00010bc8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x0001b0a8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x0001b0a8) vkb2_area_bottom_space_btn_pane_g

0x4e3b,	// (0x000100bc) cel_fep_hwr_func_pane_ParamLimits

0x4e3b,	// (0x000100bc) cel_fep_hwr_func_pane

0xe025,	// (0x000192a6) cell_hwr_side_button_pane_ParamLimits

0xe025,	// (0x000192a6) cell_hwr_side_button_pane

0xcc3f,	// (0x00017ec0) aid_area_touch_clock_ParamLimits

0x5e12,	// (0x00011093) bg_uniindi_top_pane_ParamLimits

0xcc51,	// (0x00017ed2) uniindi_top_pane_g1_ParamLimits

0xcc67,	// (0x00017ee8) uniindi_top_pane_g2_ParamLimits

0xcc73,	// (0x00017ef4) uniindi_top_pane_g3_ParamLimits

0xcc84,	// (0x00017f05) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x0001afbb) uniindi_top_pane_g_ParamLimits

0xcc91,	// (0x00017f12) uniindi_top_pane_t1_ParamLimits

0x5e12,	// (0x00011093) bg_vkb2_func_pane_cp01_ParamLimits

0x5e12,	// (0x00011093) bg_vkb2_func_pane_cp01

0xe720,	// (0x000199a1) cel_fep_hwr_func_pane_g1_ParamLimits

0xe720,	// (0x000199a1) cel_fep_hwr_func_pane_g1

0x5e12,	// (0x00011093) bg_vkb2_func_pane_cp02_ParamLimits

0x5e12,	// (0x00011093) bg_vkb2_func_pane_cp02

0xe720,	// (0x000199a1) cell_hwr_side_button_pane_g1_ParamLimits

0xe720,	// (0x000199a1) cell_hwr_side_button_pane_g1

0x844e,	// (0x000136cf) status_pane_g4_ParamLimits

0x844e,	// (0x000136cf) status_pane_g4

0x8466,	// (0x000136e7) status_pane_t1

0xacfb,	// (0x00015f7c) form2_midp_gauge_slider_cont_pane

0xad03,	// (0x00015f84) form2_midp_gauge_slider_pane_t1_ParamLimits

0x22d6,	// (0x0000d557) form2_midp_gauge_slider_pane_t2_ParamLimits

0x22ea,	// (0x0000d56b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x0001ad82) form2_midp_gauge_slider_pane_t_ParamLimits

0xad39,	// (0x00015fba) form2_midp_slider_pane_ParamLimits

0x5295,	// (0x00010516) aid_size_cell_func_vkb2_ParamLimits

0x5295,	// (0x00010516) aid_size_cell_func_vkb2

0xe6c1,	// (0x00019942) slider_pane_g4_ParamLimits

0xe6c1,	// (0x00019942) slider_pane_g4

0xe426,	// (0x000196a7) form2_midp_gauge_slider_pane_t2_cp01

0xe436,	// (0x000196b7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe436,	// (0x000196b7) form2_midp_gauge_slider_pane_t3_cp01

0x59bc,	// (0x00010c3d) form2_midp_slider_pane_cp01

0x5a7b,	// (0x00010cfc) navi_smil_pane

0xe750,	// (0x000199d1) navi_smil_pane_g1

0xe758,	// (0x000199d9) navi_smil_pane_t1

0xe72e,	// (0x000199af) form2_midp_slider_pane_g1

0xe737,	// (0x000199b8) form2_midp_slider_pane_g2

0xe73f,	// (0x000199c0) form2_midp_slider_pane_g3

0xe72e,	// (0x000199af) form2_midp_slider_pane_g4

0x3911,	// (0x0000eb92) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x0001b0b1) form2_midp_slider_pane_g

0x5981,	// (0x00010c02) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5981,	// (0x00010c02) vkb2_area_bottom_space_btn_pane_g4

0x17dc,	// (0x0000ca5d) lc0_navi_pane_ParamLimits

0x17dc,	// (0x0000ca5d) lc0_navi_pane

0x1846,	// (0x0000cac7) lc0_stat_indi_pane_ParamLimits

0x1846,	// (0x0000cac7) lc0_stat_indi_pane

0x185b,	// (0x0000cadc) ls0_title_pane_ParamLimits

0x185b,	// (0x0000cadc) ls0_title_pane

0x6948,	// (0x00011bc9) bg_popup_sub_pane_cp14_ParamLimits

0xcc26,	// (0x00017ea7) list_uniindi_pane_ParamLimits

0xcc32,	// (0x00017eb3) uniindi_top_pane_ParamLimits

0xcccd,	// (0x00017f4e) list_single_uniindi_pane_g1_ParamLimits

0xcce0,	// (0x00017f61) list_single_uniindi_pane_t1_ParamLimits

0xe455,	// (0x000196d6) lc0_stat_clock_pane_ParamLimits

0xe455,	// (0x000196d6) lc0_stat_clock_pane

0x3936,	// (0x0000ebb7) lc0_stat_indi_pane_g1_ParamLimits

0x3936,	// (0x0000ebb7) lc0_stat_indi_pane_g1

0x3929,	// (0x0000ebaa) lc0_stat_indi_pane_g2_ParamLimits

0x3929,	// (0x0000ebaa) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x0001b0bc) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x0001b0bc) lc0_stat_indi_pane_g

0xe462,	// (0x000196e3) lc0_uni_indicator_pane_ParamLimits

0xe462,	// (0x000196e3) lc0_uni_indicator_pane

0xe766,	// (0x000199e7) ls0_title_pane_g1_ParamLimits

0xe766,	// (0x000199e7) ls0_title_pane_g1

0x3950,	// (0x0000ebd1) ls0_title_pane_t1_ParamLimits

0x3950,	// (0x0000ebd1) ls0_title_pane_t1

0xe46f,	// (0x000196f0) lc0_uni_indicator_pane_g1_ParamLimits

0xe46f,	// (0x000196f0) lc0_uni_indicator_pane_g1

0xe77a,	// (0x000199fb) lc0_stat_clock_pane_t1

0x5a7b,	// (0x00010cfc) main_ai5_pane

0xe788,	// (0x00019a09) ai5_sk_pane_ParamLimits

0xe788,	// (0x00019a09) ai5_sk_pane

0x39ad,	// (0x0000ec2e) cell_ai5_widget_pane_ParamLimits

0x39ad,	// (0x0000ec2e) cell_ai5_widget_pane

0xe795,	// (0x00019a16) aid_size_cell_widget_grid

0xe7a9,	// (0x00019a2a) bg_ai5_widget_pane_ParamLimits

0xe7a9,	// (0x00019a2a) bg_ai5_widget_pane

0xe7f3,	// (0x00019a74) cell_ai5_widget_pane_g2

0xe803,	// (0x00019a84) cell_ai5_widget_pane_g3

0xe822,	// (0x00019aa3) cell_ai5_widget_pane_g4

0xe82e,	// (0x00019aaf) cell_ai5_widget_pane_g5

0xe83a,	// (0x00019abb) cell_ai5_widget_pane_g6

0xe846,	// (0x00019ac7) cell_ai5_widget_pane_g7

0xe88e,	// (0x00019b0f) cell_ai5_widget_pane_t1_ParamLimits

0xe88e,	// (0x00019b0f) cell_ai5_widget_pane_t1

0xe8ab,	// (0x00019b2c) cell_ai5_widget_pane_t2_ParamLimits

0xe8ab,	// (0x00019b2c) cell_ai5_widget_pane_t2

0xe8c3,	// (0x00019b44) cell_ai5_widget_pane_t3_ParamLimits

0xe8c3,	// (0x00019b44) cell_ai5_widget_pane_t3

0xe8db,	// (0x00019b5c) cell_ai5_widget_pane_t4_ParamLimits

0xe8db,	// (0x00019b5c) cell_ai5_widget_pane_t4

0xe8f5,	// (0x00019b76) cell_ai5_widget_pane_t5_ParamLimits

0xe8f5,	// (0x00019b76) cell_ai5_widget_pane_t5

0xe914,	// (0x00019b95) cell_ai5_widget_pane_t6_ParamLimits

0xe914,	// (0x00019b95) cell_ai5_widget_pane_t6

0xe926,	// (0x00019ba7) cell_ai5_widget_pane_t7_ParamLimits

0xe926,	// (0x00019ba7) cell_ai5_widget_pane_t7

0xe93f,	// (0x00019bc0) cell_ai5_widget_pane_t8_ParamLimits

0xe93f,	// (0x00019bc0) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x0001b0d6) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x0001b0d6) cell_ai5_widget_pane_t

0xe98b,	// (0x00019c0c) grid_ai5_widget_pane

0x6948,	// (0x00011bc9) highlight_cell_ai5_widget_pane_ParamLimits

0x6948,	// (0x00011bc9) highlight_cell_ai5_widget_pane

0x3a18,	// (0x0000ec99) ai5_sk_left_pane

0x3a22,	// (0x0000eca3) ai5_sk_middle_pane

0x3a2c,	// (0x0000ecad) ai5_sk_right_pane

0xe99f,	// (0x00019c20) bg_ai5_widget_pane_g1_ParamLimits

0xe99f,	// (0x00019c20) bg_ai5_widget_pane_g1

0xe9ab,	// (0x00019c2c) bg_ai5_widget_pane_g2_ParamLimits

0xe9ab,	// (0x00019c2c) bg_ai5_widget_pane_g2

0xe9b7,	// (0x00019c38) bg_ai5_widget_pane_g3_ParamLimits

0xe9b7,	// (0x00019c38) bg_ai5_widget_pane_g3

0xe9c3,	// (0x00019c44) bg_ai5_widget_pane_g4_ParamLimits

0xe9c3,	// (0x00019c44) bg_ai5_widget_pane_g4

0xe9cf,	// (0x00019c50) bg_ai5_widget_pane_g5_ParamLimits

0xe9cf,	// (0x00019c50) bg_ai5_widget_pane_g5

0xe9db,	// (0x00019c5c) bg_ai5_widget_pane_g6_ParamLimits

0xe9db,	// (0x00019c5c) bg_ai5_widget_pane_g6

0xe9e7,	// (0x00019c68) bg_ai5_widget_pane_g7_ParamLimits

0xe9e7,	// (0x00019c68) bg_ai5_widget_pane_g7

0xe9f3,	// (0x00019c74) bg_ai5_widget_pane_g8_ParamLimits

0xe9f3,	// (0x00019c74) bg_ai5_widget_pane_g8

0xe9ff,	// (0x00019c80) bg_ai5_widget_pane_g9_ParamLimits

0xe9ff,	// (0x00019c80) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x0001b0eb) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x0001b0eb) bg_ai5_widget_pane_g

0xea32,	// (0x00019cb3) cell_shortcut_ai5_widget_pane_ParamLimits

0xea32,	// (0x00019cb3) cell_shortcut_ai5_widget_pane

0x5c52,	// (0x00010ed3) bg_cell_shortcut_ai5_widget_pane

0xea43,	// (0x00019cc4) cell_grid_ai5_widget_pane_g1

0xea4c,	// (0x00019ccd) highlight_cell_shortcut_ai5_widget_pane

0x8601,	// (0x00013882) ai5_sk_left_pane_g1

0xea54,	// (0x00019cd5) ai5_sk_left_pane_g2

0xea5c,	// (0x00019cdd) ai5_sk_left_pane_g3

0xea64,	// (0x00019ce5) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x0001b0fe) ai5_sk_left_pane_g

0xea6c,	// (0x00019ced) ai5_sk_left_pane_t1

0x8609,	// (0x0001388a) ai5_sk_right_pane_g1

0xea7a,	// (0x00019cfb) ai5_sk_right_pane_g2

0xea82,	// (0x00019d03) ai5_sk_right_pane_g3

0xea8a,	// (0x00019d0b) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x0001b107) ai5_sk_right_pane_g

0xea92,	// (0x00019d13) ai5_sk_right_pane_t1

0x8609,	// (0x0001388a) ai5_sk_middle_pane_g1

0x8601,	// (0x00013882) ai5_sk_middle_pane_g2

0x8621,	// (0x000138a2) ai5_sk_middle_pane_g3

0xea82,	// (0x00019d03) ai5_sk_middle_pane_g4

0xea5c,	// (0x00019cdd) ai5_sk_middle_pane_g5

0xeaa0,	// (0x00019d21) ai5_sk_middle_pane_g6

0x3a36,	// (0x0000ecb7) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x0001b110) ai5_sk_middle_pane_g

0x16c8,	// (0x0000c949) aid_touch_area_size_lc0_ParamLimits

0x16c8,	// (0x0000c949) aid_touch_area_size_lc0

0x500c,	// (0x0001028d) cell_hwr_candidate_pane_t1_ParamLimits

0x812b,	// (0x000133ac) aid_touch_navi_pane

0x194e,	// (0x0000cbcf) status_dt_navi_pane_ParamLimits

0x194e,	// (0x0000cbcf) status_dt_navi_pane

0x1966,	// (0x0000cbe7) status_dt_sta_pane_ParamLimits

0x1966,	// (0x0000cbe7) status_dt_sta_pane

0x3a3e,	// (0x0000ecbf) dt_sta_controll_pane

0x3a4b,	// (0x0000eccc) dt_sta_indi_pane

0x3a58,	// (0x0000ecd9) dt_sta_title_pane

0x5e12,	// (0x00011093) bg_dt_sta_indi_pane_ParamLimits

0x5e12,	// (0x00011093) bg_dt_sta_indi_pane

0xeaa8,	// (0x00019d29) dt_sta_battery_pane

0xeab0,	// (0x00019d31) dt_sta_indi_pane_g1

0xeab9,	// (0x00019d3a) dt_sta_indi_pane_g2

0xeac2,	// (0x00019d43) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x0001b11f) dt_sta_indi_pane_g

0xeacb,	// (0x00019d4c) dt_sta_signal_pane

0x6948,	// (0x00011bc9) bg_dt_sta_title_pane_ParamLimits

0x6948,	// (0x00011bc9) bg_dt_sta_title_pane

0x9512,	// (0x00014793) dt_sta_title_pane_g1

0xead4,	// (0x00019d55) dt_sta_title_pane_t1_ParamLimits

0xead4,	// (0x00019d55) dt_sta_title_pane_t1

0x5a7b,	// (0x00010cfc) bg_dt_sta_control_pane

0xeae9,	// (0x00019d6a) dt_sta_controll_pane_g1

0xeaf2,	// (0x00019d73) bg_dt_sta_title_pane_g1

0xeafb,	// (0x00019d7c) bg_dt_sta_title_pane_g2

0xeb04,	// (0x00019d85) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x0001b126) bg_dt_sta_title_pane_g

0xaff8,	// (0x00016279) bg_dt_sta_indi_pane_g1

0xeb0d,	// (0x00019d8e) dt_sta_signal_pane_g1

0xeb15,	// (0x00019d96) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x0001b12d) dt_sta_signal_pane_g

0xeb1d,	// (0x00019d9e) dt_sta_battery_pane_g1

0xeb26,	// (0x00019da7) dt_sta_battery_pane_t1

0xaff8,	// (0x00016279) bg_dt_sta_control_pane_g1

0x7234,	// (0x000124b5) fep_china_uni_eep_pane

0x723c,	// (0x000124bd) fep_china_uni_entry_pane_ParamLimits

0x724c,	// (0x000124cd) popup_fep_china_uni_window_g1_ParamLimits

0x725c,	// (0x000124dd) popup_fep_china_uni_window_g2_ParamLimits

0x725c,	// (0x000124dd) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001a9b1) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001a9b1) popup_fep_china_uni_window_g

0xeb35,	// (0x00019db6) fep_china_uni_eep_pane_g1

0xeb3d,	// (0x00019dbe) fep_china_uni_eep_pane_t1

0xe747,	// (0x000199c8) aid_touch_area_size_smil_player

0x827b,	// (0x000134fc) lc0_clock_pane

0x845a,	// (0x000136db) status_pane_g5_ParamLimits

0x845a,	// (0x000136db) status_pane_g5

0x118d,	// (0x0000c40e) popup_keymap_window

0x841a,	// (0x0001369b) status_icon_pane

0xe803,	// (0x00019a84) cell_ai5_widget_pane_g3_ParamLimits

0xe822,	// (0x00019aa3) cell_ai5_widget_pane_g4_ParamLimits

0xe82e,	// (0x00019aaf) cell_ai5_widget_pane_g5_ParamLimits

0xe852,	// (0x00019ad3) cell_ai5_widget_pane_g8_ParamLimits

0xe852,	// (0x00019ad3) cell_ai5_widget_pane_g8

0xe866,	// (0x00019ae7) cell_ai5_widget_pane_g9_ParamLimits

0xe866,	// (0x00019ae7) cell_ai5_widget_pane_g9

0xe87a,	// (0x00019afb) cell_ai5_widget_pane_g10_ParamLimits

0xe87a,	// (0x00019afb) cell_ai5_widget_pane_g10

0xeb4c,	// (0x00019dcd) status_icon_pane_g1

0x5a7b,	// (0x00010cfc) bg_popup_sub_pane_cp13

0xeb54,	// (0x00019dd5) popup_keymap_window_t1

0x0ec1,	// (0x0000c142) control_pane_g6_ParamLimits

0x0ec1,	// (0x0000c142) control_pane_g6

0x0eb4,	// (0x0000c135) control_pane_g7_ParamLimits

0x0eb4,	// (0x0000c135) control_pane_g7

0x0ea7,	// (0x0000c128) control_pane_g8_ParamLimits

0x0ea7,	// (0x0000c128) control_pane_g8

0x3a3e,	// (0x0000ecbf) dt_sta_controll_pane_ParamLimits

0x3a4b,	// (0x0000eccc) dt_sta_indi_pane_ParamLimits

0x3a58,	// (0x0000ecd9) dt_sta_title_pane_ParamLimits

0x6314,	// (0x00011595) aid_size_touch_scroll_bar_cale

0x4073,	// (0x0000f2f4) popup_discreet_window_ParamLimits

0x4073,	// (0x0000f2f4) popup_discreet_window

0xdc85,	// (0x00018f06) popup_sk_window

0x8d50,	// (0x00013fd1) bg_popup_sub_pane_cp28_ParamLimits

0x8d50,	// (0x00013fd1) bg_popup_sub_pane_cp28

0xeb62,	// (0x00019de3) popup_discreet_window_g1_ParamLimits

0xeb62,	// (0x00019de3) popup_discreet_window_g1

0xeb82,	// (0x00019e03) popup_discreet_window_t1_ParamLimits

0xeb82,	// (0x00019e03) popup_discreet_window_t1

0xeba0,	// (0x00019e21) popup_discreet_window_t2_ParamLimits

0xeba0,	// (0x00019e21) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x0001b132) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x0001b132) popup_discreet_window_t

0x59f5,	// (0x00010c76) popup_sk_window_g1

0x59ff,	// (0x00010c80) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x0001b139) popup_sk_window_g

0x5a09,	// (0x00010c8a) popup_sk_window_t1

0x5a17,	// (0x00010c98) popup_sk_window_t1_copy1

0xe7f3,	// (0x00019a74) cell_ai5_widget_pane_g2_ParamLimits

0xe951,	// (0x00019bd2) cell_ai5_widget_pane_t9_ParamLimits

0xe951,	// (0x00019bd2) cell_ai5_widget_pane_t9

0x5a7b,	// (0x00010cfc) main_fep_fshwr2_pane

0x3a6a,	// (0x0000eceb) aid_fshwr2_btn_pane

0x3a72,	// (0x0000ecf3) aid_fshwr2_syb_pane

0x3a7a,	// (0x0000ecfb) aid_fshwr2_txt_pane

0x3a82,	// (0x0000ed03) fshwr2_func_candi_pane

0x3a8c,	// (0x0000ed0d) fshwr2_hwr_syb_pane

0x3a9a,	// (0x0000ed1b) fshwr2_icf_pane

0x5a7b,	// (0x00010cfc) fshwr2_icf_bg_pane

0x3aa4,	// (0x0000ed25) fshwr2_icf_pane_t1_ParamLimits

0x3aa4,	// (0x0000ed25) fshwr2_icf_pane_t1

0xaff8,	// (0x00016279) fshwr2_func_candi_pane_g1

0xec06,	// (0x00019e87) fshwr2_func_candi_row_pane_ParamLimits

0xec06,	// (0x00019e87) fshwr2_func_candi_row_pane

0x3abe,	// (0x0000ed3f) cell_fshwr2_syb_pane_ParamLimits

0x3abe,	// (0x0000ed3f) cell_fshwr2_syb_pane

0xb273,	// (0x000164f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb273,	// (0x000164f4) fshwr2_hwr_syb_pane_g1

0x5a7b,	// (0x00010cfc) bg_popup_call_pane_cp01

0xec17,	// (0x00019e98) fshwr2_func_candi_cell_pane_ParamLimits

0xec17,	// (0x00019e98) fshwr2_func_candi_cell_pane

0xec48,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec48,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane

0xec62,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec62,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1

0xec82,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec82,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1

0x5a7b,	// (0x00010cfc) bg_button_pane_cp08

0x77c0,	// (0x00012a41) cell_fshwr2_syb_bg_pane

0x3ad8,	// (0x0000ed59) cell_fshwr2_syb_bg_pane_g1

0xec95,	// (0x00019f16) cell_fshwr2_syb_bg_pane_t1

0x6948,	// (0x00011bc9) main_tmo_pane

0x1e35,	// (0x0000d0b6) uni_indicator_pane_g1_ParamLimits

0x1e4a,	// (0x0000d0cb) uni_indicator_pane_g2_ParamLimits

0x987a,	// (0x00014afb) uni_indicator_pane_g3_ParamLimits

0x9890,	// (0x00014b11) uni_indicator_pane_g4_ParamLimits

0x9890,	// (0x00014b11) uni_indicator_pane_g4

0x98a4,	// (0x00014b25) uni_indicator_pane_g5_ParamLimits

0x98a4,	// (0x00014b25) uni_indicator_pane_g5

0x98b8,	// (0x00014b39) uni_indicator_pane_g6_ParamLimits

0x98b8,	// (0x00014b39) uni_indicator_pane_g6

0xf928,	// (0x0001aba9) uni_indicator_pane_g_ParamLimits

0x2a2d,	// (0x0000dcae) popup_tmo_note_window_ParamLimits

0x2a2d,	// (0x0000dcae) popup_tmo_note_window

0x5a7b,	// (0x00010cfc) fshwr2_bg_pane

0xec73,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec73,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x0001b13e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x0001b13e) fshwr2_func_candi_cell_pane_g

0xaff8,	// (0x00016279) bg_popup_window_pane_cp01

0xeca4,	// (0x00019f25) bg_popup_window_pane_g1_cp01

0xecad,	// (0x00019f2e) bg_popup_window_pane_cp22_ParamLimits

0xecad,	// (0x00019f2e) bg_popup_window_pane_cp22

0xecbb,	// (0x00019f3c) listscroll_tmo_link_pane_ParamLimits

0xecbb,	// (0x00019f3c) listscroll_tmo_link_pane

0xecfb,	// (0x00019f7c) popup_tmo_note_window_g1_ParamLimits

0xecfb,	// (0x00019f7c) popup_tmo_note_window_g1

0xed08,	// (0x00019f89) tmo_note_info_pane_ParamLimits

0xed08,	// (0x00019f89) tmo_note_info_pane

0x3ae0,	// (0x0000ed61) list_tmo_note_info_pane_g1_ParamLimits

0x3ae0,	// (0x0000ed61) list_tmo_note_info_pane_g1

0xed22,	// (0x00019fa3) list_tmo_note_info_pane_g2_ParamLimits

0xed22,	// (0x00019fa3) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x0001b143) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x0001b143) list_tmo_note_info_pane_g

0xed3e,	// (0x00019fbf) list_tmo_note_info_text_pane_ParamLimits

0xed3e,	// (0x00019fbf) list_tmo_note_info_text_pane

0xed80,	// (0x0001a001) list_tmo_link_pane

0xed8d,	// (0x0001a00e) scroll_pane_cp20

0xed9a,	// (0x0001a01b) list_single_tmo_link_pane_ParamLimits

0xed9a,	// (0x0001a01b) list_single_tmo_link_pane

0xedaa,	// (0x0001a02b) list_single_tmo_link_pane_t1

0xedb8,	// (0x0001a039) list_tmo_note_info_text_pane_t1_ParamLimits

0xedb8,	// (0x0001a039) list_tmo_note_info_text_pane_t1

0x0ab4,	// (0x0000bd35) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0ab4,	// (0x0000bd35) aid_size_touch_scroll_bar_cp01

0x09cf,	// (0x0000bc50) aid_size_touch_slider_marker

0xdc75,	// (0x00018ef6) popup_settings_window_ParamLimits

0xdc75,	// (0x00018ef6) popup_settings_window

0x7b62,	// (0x00012de3) popup_candi_list_indi_window

0x812b,	// (0x000133ac) aid_touch_navi_pane_ParamLimits

0x51d2,	// (0x00010453) rs_clock_indi_pane

0x51db,	// (0x0001045c) sctrl_sk_bottom_pane_ParamLimits

0x51ec,	// (0x0001046d) sctrl_sk_top_pane_ParamLimits

0x52ef,	// (0x00010570) popup_fep_tooltip_window

0xe795,	// (0x00019a16) aid_size_cell_widget_grid_ParamLimits

0xe7e7,	// (0x00019a68) cell_ai5_widget_pane_g1_ParamLimits

0xe7e7,	// (0x00019a68) cell_ai5_widget_pane_g1

0xe83a,	// (0x00019abb) cell_ai5_widget_pane_g6_ParamLimits

0xe846,	// (0x00019ac7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x0001b0c1) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x0001b0c1) cell_ai5_widget_pane_g

0xe975,	// (0x00019bf6) cell_ai5_widget_pane_t10_ParamLimits

0xe975,	// (0x00019bf6) cell_ai5_widget_pane_t10

0xe98b,	// (0x00019c0c) grid_ai5_widget_pane_ParamLimits

0xea0b,	// (0x00019c8c) cell_contacts_ai5_widget_pane_ParamLimits

0xea0b,	// (0x00019c8c) cell_contacts_ai5_widget_pane

0xebb5,	// (0x00019e36) popup_discreet_window_t3_ParamLimits

0xebb5,	// (0x00019e36) popup_discreet_window_t3

0xebf2,	// (0x00019e73) popup_fshwr2_char_preview_window_ParamLimits

0xebf2,	// (0x00019e73) popup_fshwr2_char_preview_window

0x3af7,	// (0x0000ed78) tmo_note_info_pane_t1

0x3b0c,	// (0x0000ed8d) tmo_note_info_pane_t2

0x3b25,	// (0x0000eda6) tmo_note_info_pane_t3

0xed5c,	// (0x00019fdd) tmo_note_info_pane_t4

0xed6e,	// (0x00019fef) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x0001b148) tmo_note_info_pane_t

0xed80,	// (0x0001a001) list_tmo_link_pane_ParamLimits

0xed8d,	// (0x0001a00e) scroll_pane_cp20_ParamLimits

0x5a7b,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp01

0xedd1,	// (0x0001a052) popup_fshwr2_char_preview_window_t1

0xeddf,	// (0x0001a060) popup_candi_list_indi_window_g1

0xede8,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane

0xedf4,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1

0xee07,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2

0xee13,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x0001b153) cell_contacts_ai5_widget_pane_g

0xee25,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1

0x6948,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeeb3,	// (0x0001a134) settings_container_pane

0x77c0,	// (0x00012a41) listscroll_set_pane_copy1

0xa4d2,	// (0x00015753) scroll_pane_cp121_copy1

0xeebf,	// (0x0001a140) set_content_pane_copy1

0xeec7,	// (0x0001a148) aid_height_set_list_copy1_ParamLimits

0xeec7,	// (0x0001a148) aid_height_set_list_copy1

0x9ad3,	// (0x00014d54) aid_size_parent_copy1_ParamLimits

0x9ad3,	// (0x00014d54) aid_size_parent_copy1

0xeed3,	// (0x0001a154) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeed3,	// (0x0001a154) button_value_adjust_pane_cp6_copy1

0x7b3a,	// (0x00012dbb) list_highlight_pane_cp2_copy1_ParamLimits

0x7b3a,	// (0x00012dbb) list_highlight_pane_cp2_copy1

0xeee7,	// (0x0001a168) list_set_pane_copy1_ParamLimits

0xeee7,	// (0x0001a168) list_set_pane_copy1

0xee4e,	// (0x0001a0cf) main_pane_set_t1_copy1_ParamLimits

0xee4e,	// (0x0001a0cf) main_pane_set_t1_copy1

0xee88,	// (0x0001a109) main_pane_set_t2_copy1_ParamLimits

0xee88,	// (0x0001a109) main_pane_set_t2_copy1

0xef94,	// (0x0001a215) main_pane_set_t3_copy1

0xefa2,	// (0x0001a223) main_pane_set_t4_copy1

0xeea7,	// (0x0001a128) set_content_pane_g1_copy1_ParamLimits

0xeea7,	// (0x0001a128) set_content_pane_g1_copy1

0xefb0,	// (0x0001a231) setting_code_pane_copy1

0xefba,	// (0x0001a23b) setting_slider_graphic_pane_copy1

0xefba,	// (0x0001a23b) setting_slider_pane_copy1

0xefba,	// (0x0001a23b) setting_text_pane_copy1

0xefc4,	// (0x0001a245) setting_volume_pane_copy1

0xefcd,	// (0x0001a24e) settings_code_pane_cp2_copy1

0xefd5,	// (0x0001a256) settings_code_pane_cp_copy1_ParamLimits

0xefd5,	// (0x0001a256) settings_code_pane_cp_copy1

0xefe9,	// (0x0001a26a) volume_set_pane_copy1

0xeff1,	// (0x0001a272) volume_set_pane_g10_copy1

0xeff9,	// (0x0001a27a) volume_set_pane_g1_copy1

0xf001,	// (0x0001a282) volume_set_pane_g2_copy1

0xf009,	// (0x0001a28a) volume_set_pane_g3_copy1

0xf011,	// (0x0001a292) volume_set_pane_g4_copy1

0xf019,	// (0x0001a29a) volume_set_pane_g5_copy1

0xf021,	// (0x0001a2a2) volume_set_pane_g6_copy1

0xf029,	// (0x0001a2aa) volume_set_pane_g7_copy1

0xf031,	// (0x0001a2b2) volume_set_pane_g8_copy1

0xf039,	// (0x0001a2ba) volume_set_pane_g9_copy1

0x5b6f,	// (0x00010df0) bg_set_opt_pane_cp_copy1_ParamLimits

0x5b6f,	// (0x00010df0) bg_set_opt_pane_cp_copy1

0xf041,	// (0x0001a2c2) setting_slider_pane_t1_copy1_ParamLimits

0xf041,	// (0x0001a2c2) setting_slider_pane_t1_copy1

0xf05f,	// (0x0001a2e0) setting_slider_pane_t2_copy1_ParamLimits

0xf05f,	// (0x0001a2e0) setting_slider_pane_t2_copy1

0xf079,	// (0x0001a2fa) setting_slider_pane_t3_copy1_ParamLimits

0xf079,	// (0x0001a2fa) setting_slider_pane_t3_copy1

0xf091,	// (0x0001a312) slider_set_pane_copy1_ParamLimits

0xf091,	// (0x0001a312) slider_set_pane_copy1

0x6a84,	// (0x00011d05) set_opt_bg_pane_g1_copy2

0x6a8c,	// (0x00011d0d) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x0001a328) set_opt_bg_pane_g3_copy2

0x6a9c,	// (0x00011d1d) set_opt_bg_pane_g4_copy2

0x6aa4,	// (0x00011d25) set_opt_bg_pane_g5_copy2

0x6aac,	// (0x00011d2d) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x0001a332) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x0001a33a) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x0001a344) set_opt_bg_pane_g9_copy2

0x5a25,	// (0x00010ca6) aid_size_touch_slider_mark_copy1_ParamLimits

0x5a25,	// (0x00010ca6) aid_size_touch_slider_mark_copy1

0xf0cd,	// (0x0001a34e) slider_set_pane_g1_copy1

0x5a39,	// (0x00010cba) slider_set_pane_g2_copy1

0x4bb5,	// (0x0000fe36) slider_set_pane_g3_copy1_ParamLimits

0x4bb5,	// (0x0000fe36) slider_set_pane_g3_copy1

0x4bc9,	// (0x0000fe4a) slider_set_pane_g4_copy1_ParamLimits

0x4bc9,	// (0x0000fe4a) slider_set_pane_g4_copy1

0x4be1,	// (0x0000fe62) slider_set_pane_g5_copy1_ParamLimits

0x4be1,	// (0x0000fe62) slider_set_pane_g5_copy1

0x4bb5,	// (0x0000fe36) slider_set_pane_g6_copy1_ParamLimits

0x4bb5,	// (0x0000fe36) slider_set_pane_g6_copy1

0x5a41,	// (0x00010cc2) slider_set_pane_g7_copy1_ParamLimits

0x5a41,	// (0x00010cc2) slider_set_pane_g7_copy1

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp2_copy1

0xf0d6,	// (0x0001a357) setting_slider_graphic_pane_g1_copy1

0xf0df,	// (0x0001a360) setting_slider_graphic_pane_t1_copy1

0xf0ef,	// (0x0001a370) setting_slider_graphic_pane_t2_copy1

0xf0ff,	// (0x0001a380) slider_set_pane_cp_copy1

0xf10f,	// (0x0001a390) input_focus_pane_cp1_copy1

0xf118,	// (0x0001a399) list_set_text_pane_copy1

0xf120,	// (0x0001a3a1) setting_text_pane_g1_copy1

0xf129,	// (0x0001a3aa) set_text_pane_t1_copy1

0xf10f,	// (0x0001a390) input_focus_pane_cp2_copy1

0xf120,	// (0x0001a3a1) setting_code_pane_g1_copy1

0xf146,	// (0x0001a3c7) setting_code_pane_t1_copy1

0xee3a,	// (0x0001a0bb) list_set_graphic_pane_copy1

0x5a8f,	// (0x00010d10) bg_set_opt_pane_cp4_copy1

0x74c2,	// (0x00012743) list_set_graphic_pane_g1_copy1_ParamLimits

0x74c2,	// (0x00012743) list_set_graphic_pane_g1_copy1

0xf154,	// (0x0001a3d5) list_set_graphic_pane_g2_copy1

0x74da,	// (0x0001275b) list_set_graphic_pane_t1_copy1_ParamLimits

0x74da,	// (0x0001275b) list_set_graphic_pane_t1_copy1

0xaff8,	// (0x00016279) rs_clock_indi_pane_g1

0xf15c,	// (0x0001a3dd) rs_clock_indi_pane_t1

0xf16a,	// (0x0001a3eb) rs_indi_pane

0xf172,	// (0x0001a3f3) rs_indi_pane_g1

0xf17b,	// (0x0001a3fc) rs_indi_pane_g2

0xf184,	// (0x0001a405) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x0001b15a) rs_indi_pane_g

0x77c0,	// (0x00012a41) bg_popup_preview_window_pane_cp03

0xf18d,	// (0x0001a40e) popup_fep_tooltip_window_t1

0xbe59,	// (0x000170da) popup_note2_window_g2_ParamLimits

0xbe59,	// (0x000170da) popup_note2_window_g2

0x0001,

0xfc79,	// (0x0001aefa) popup_note2_window_g_ParamLimits

0xfc79,	// (0x0001aefa) popup_note2_window_g

0xc43b,	// (0x000176bc) bg_popup_sub_pane_cp11_ParamLimits

0xc448,	// (0x000176c9) cell_ai3_links_pane_g1_ParamLimits

0xc45f,	// (0x000176e0) cell_ai3_links_pane_t1

0xf129,	// (0x0001a3aa) set_text_pane_t1_copy1_ParamLimits

0x76cf,	// (0x00012950) cell_graphic_popup_pane_cp2_ParamLimits

0x76cf,	// (0x00012950) cell_graphic_popup_pane_cp2

0xf19b,	// (0x0001a41c) cell_graphic_popup_pane_g1_cp2

0x6127,	// (0x000113a8) cell_graphic_popup_pane_g2_cp2

0xf1a3,	// (0x0001a424) cell_graphic_popup_pane_g3_cp2

0xf1ab,	// (0x0001a42c) cell_graphic_popup_pane_t2_cp2

0x6138,	// (0x000113b9) grid_highlight_pane_cp3_cp2

0x6e6e,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6948,	// (0x00011bc9) main_tmo_pane_ParamLimits

0x2a21,	// (0x0000dca2) popup_tmo_big_image_note_window

0xe7d7,	// (0x00019a58) cell_ai5_widget_list_pane

0xe7df,	// (0x00019a60) cell_ai5_widget_lrg_icon_pane

0x3af7,	// (0x0000ed78) tmo_note_info_pane_t1_ParamLimits

0x3b0c,	// (0x0000ed8d) tmo_note_info_pane_t2_ParamLimits

0x3b25,	// (0x0000eda6) tmo_note_info_pane_t3_ParamLimits

0xed5c,	// (0x00019fdd) tmo_note_info_pane_t4_ParamLimits

0xed6e,	// (0x00019fef) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x0001b148) tmo_note_info_pane_t_ParamLimits

0xeeb3,	// (0x0001a134) settings_container_pane_ParamLimits

0xf107,	// (0x0001a388) indicator_popup_pane_cp5

0xf107,	// (0x0001a388) indicator_popup_pane_cp6

0xee3a,	// (0x0001a0bb) list_set_graphic_pane_copy1_ParamLimits

0x5a7b,	// (0x00010cfc) bg_popup_window_pane_cp23

0xf1b9,	// (0x0001a43a) popup_tmo_big_image_note_window_g1

0xf1c4,	// (0x0001a445) popup_tmo_big_image_note_window_t1

0xf1d4,	// (0x0001a455) popup_tmo_big_image_note_window_t2

0xf1e4,	// (0x0001a465) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x0001b161) popup_tmo_big_image_note_window_t

0xf1f4,	// (0x0001a475) cell_ai5_widget_lrg_icon_pane_g1

0xf1fc,	// (0x0001a47d) cell_ai5_widget_lrg_icon_pane_t1

0xf20a,	// (0x0001a48b) cell_ai5_widget_list_row_pane_ParamLimits

0xf20a,	// (0x0001a48b) cell_ai5_widget_list_row_pane

0xf223,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf223,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1

0xf230,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf230,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1

0xf248,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf248,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee7,	// (0x0001b168) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x0001b168) cell_ai5_widget_list_row_pane_t

0x3f9a,	// (0x0000f21b) main_fep_vtchi_ss_pane

0xf25a,	// (0x0001a4db) popup_fep_char_pre_window

0xf262,	// (0x0001a4e3) popup_fep_ituss_window

0xf27c,	// (0x0001a4fd) popup_fep_vkbss_window

0xf29a,	// (0x0001a51b) grid_vkbss_keypad_pane_ParamLimits

0xf29a,	// (0x0001a51b) grid_vkbss_keypad_pane

0xf2aa,	// (0x0001a52b) ituss_keypad_pane

0xf2c0,	// (0x0001a541) aid_vkbss_key_offset_ParamLimits

0xf2c0,	// (0x0001a541) aid_vkbss_key_offset

0xf2cc,	// (0x0001a54d) cell_vkbss_key_pane_ParamLimits

0xf2cc,	// (0x0001a54d) cell_vkbss_key_pane

0x8436,	// (0x000136b7) bg_cell_vkbss_key_g1_ParamLimits

0x8436,	// (0x000136b7) bg_cell_vkbss_key_g1

0xf2e2,	// (0x0001a563) cell_vkbss_key_3p_pane_ParamLimits

0xf2e2,	// (0x0001a563) cell_vkbss_key_3p_pane

0xf2fc,	// (0x0001a57d) cell_vkbss_key_g1_ParamLimits

0xf2fc,	// (0x0001a57d) cell_vkbss_key_g1

0xf316,	// (0x0001a597) cell_vkbss_key_t1_ParamLimits

0xf316,	// (0x0001a597) cell_vkbss_key_t1

0xf341,	// (0x0001a5c2) cell_ituss_key_pane_ParamLimits

0xf341,	// (0x0001a5c2) cell_ituss_key_pane

0xf351,	// (0x0001a5d2) bg_cell_ituss_key_g1_ParamLimits

0xf351,	// (0x0001a5d2) bg_cell_ituss_key_g1

0xf35d,	// (0x0001a5de) cell_ituss_key_pane_g1_ParamLimits

0xf35d,	// (0x0001a5de) cell_ituss_key_pane_g1

0xf369,	// (0x0001a5ea) cell_ituss_key_pane_g2_ParamLimits

0xf369,	// (0x0001a5ea) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x0001b16d) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001b16d) cell_ituss_key_pane_g

0xf382,	// (0x0001a603) cell_ituss_key_t1_ParamLimits

0xf382,	// (0x0001a603) cell_ituss_key_t1

0xf3b0,	// (0x0001a631) cell_ituss_key_t2_ParamLimits

0xf3b0,	// (0x0001a631) cell_ituss_key_t2

0xf3e1,	// (0x0001a662) cell_ituss_key_t3_ParamLimits

0xf3e1,	// (0x0001a662) cell_ituss_key_t3

0xf412,	// (0x0001a693) cell_ituss_key_t4_ParamLimits

0xf412,	// (0x0001a693) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0001b172) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0001b172) cell_ituss_key_t

0xf443,	// (0x0001a6c4) cell_vkbss_key_3p_pane_g1

0xf44b,	// (0x0001a6cc) cell_vkbss_key_3p_pane_g2

0xf453,	// (0x0001a6d4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0001b17b) cell_vkbss_key_3p_pane_g

0x5a7b,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp02

0xf45b,	// (0x0001a6dc) popup_fep_char_pre_window_t1

0x3a0e,	// (0x0000ec8f) main_ai5_sk_pane

0xede8,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedf4,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee07,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee13,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x0001b153) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee25,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6948,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3b3a,	// (0x0000edbb) main_ai5_sk_pane_g1

0x8b8e,	// (0x00013e0f) popup_query_code_window_g1

0xf271,	// (0x0001a4f2) popup_fep_vkb_icf_pane

0xf285,	// (0x0001a506) popup_fep_vtchi_icf_pane

0x6948,	// (0x00011bc9) bg_icf_pane

0xf479,	// (0x0001a6fa) list_vkb_icf_pane

0x6948,	// (0x00011bc9) bg_icf_pane_cp01

0xf491,	// (0x0001a712) vtchi_icf_list_pane

0xf4a1,	// (0x0001a722) list_vkb_icf_pane_t1_ParamLimits

0xf4a1,	// (0x0001a722) list_vkb_icf_pane_t1

0xf4bb,	// (0x0001a73c) vtchi_icf_list_pane_t1_ParamLimits

0xf4bb,	// (0x0001a73c) vtchi_icf_list_pane_t1

0xf262,	// (0x0001a4e3) popup_fep_ituss_window_ParamLimits

0xf285,	// (0x0001a506) popup_fep_vtchi_icf_pane_ParamLimits

0xf2aa,	// (0x0001a52b) ituss_keypad_pane_ParamLimits

0xf2b6,	// (0x0001a537) ituss_sks_pane

0x6948,	// (0x00011bc9) bg_icf_pane_ParamLimits

0xf46a,	// (0x0001a6eb) icf_edit_indi_pane_ParamLimits

0xf46a,	// (0x0001a6eb) icf_edit_indi_pane

0xf479,	// (0x0001a6fa) list_vkb_icf_pane_ParamLimits

0x6948,	// (0x00011bc9) bg_icf_pane_cp01_ParamLimits

0xf485,	// (0x0001a706) icf_edit_indi_pane_cp01_ParamLimits

0xf485,	// (0x0001a706) icf_edit_indi_pane_cp01

0xf499,	// (0x0001a71a) vtchi_query_pane

0xb273,	// (0x000164f4) icf_edit_indi_pane_g1_ParamLimits

0xb273,	// (0x000164f4) icf_edit_indi_pane_g1

0xf4e2,	// (0x0001a763) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0001a763) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x0001b182) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x0001b182) icf_edit_indi_pane_g

0xf4ee,	// (0x0001a76f) icf_edit_indi_pane_t1

0xf4fc,	// (0x0001a77d) bg_input_focus_pane_cp042

0x630b,	// (0x0001158c) vtchi_button_pane

0xf505,	// (0x0001a786) vtchi_query_pane_t1

0xf513,	// (0x0001a794) vtchi_query_pane_t2

0xf521,	// (0x0001a7a2) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0001b187) vtchi_query_pane_t

0x5a7b,	// (0x00010cfc) bg_button_pane_cp13

0xf52f,	// (0x0001a7b0) vtchi_button_pane_g1

0xf537,	// (0x0001a7b8) ituss_sks_pane_g1

0xf542,	// (0x0001a7c3) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0001b18e) ituss_sks_pane_g

0xf54a,	// (0x0001a7cb) ituss_sks_pane_t1

0xf558,	// (0x0001a7d9) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0001b193) ituss_sks_pane_t

0xa9d9,	// (0x00015c5a) indicator_nsta_pane_cp_g1

0xa9e2,	// (0x00015c63) indicator_nsta_pane_cp_g2

0xa9ea,	// (0x00015c6b) indicator_nsta_pane_cp_g3

0xa9f2,	// (0x00015c73) indicator_nsta_pane_cp_g4

0xa9fa,	// (0x00015c7b) indicator_nsta_pane_cp_g5

0xaa02,	// (0x00015c83) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x0001ad38) indicator_nsta_pane_cp_g

0x37bb,	// (0x0000ea3c) cell_graphic2_pane_t2_ParamLimits

0x37bb,	// (0x0000ea3c) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x0001b04a) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x0001b04a) cell_graphic2_pane_t

0x37f1,	// (0x0000ea72) cell_graphic2_control_pane_t1

0x0c97,	// (0x0000bf18) signal_pane_g3_ParamLimits

0x0c97,	// (0x0000bf18) signal_pane_g3

0x0cab,	// (0x0000bf2c) signal_pane_g4_ParamLimits

0x0cab,	// (0x0000bf2c) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
