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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00010bd7 };

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
0xc258,	// (0x0001ce2f) Screen

0xc264,	// (0x0001ce3b) application_window_ParamLimits

0xc264,	// (0x0001ce3b) application_window

0xe88b,	// (0x0001f462) screen_g1

0xb109,	// (0x0001bce0) area_bottom_pane_ParamLimits

0xb109,	// (0x0001bce0) area_bottom_pane

0xee59,	// (0x0001fa30) area_top_pane_ParamLimits

0xee59,	// (0x0001fa30) area_top_pane

0xeef7,	// (0x0001face) main_pane_ParamLimits

0xeef7,	// (0x0001face) main_pane

0xe895,	// (0x0001f46c) misc_graphics

0xce1a,	// (0x0001d9f1) battery_pane_ParamLimits

0xce1a,	// (0x0001d9f1) battery_pane

0x4ca3,	// (0x0001587a) bg_status_flat_pane_g8

0x4cab,	// (0x00015882) bg_status_flat_pane_g9

0x3f88,	// (0x00014b5f) context_pane_ParamLimits

0x3f88,	// (0x00014b5f) context_pane

0xcf85,	// (0x0001db5c) navi_pane_ParamLimits

0xcf85,	// (0x0001db5c) navi_pane

0xd003,	// (0x0001dbda) signal_pane_ParamLimits

0xd003,	// (0x0001dbda) signal_pane

0x0008,

0xf848,	// (0x0002041f) bg_status_flat_pane_g

0xd093,	// (0x0001dc6a) status_pane_g1_ParamLimits

0xd093,	// (0x0001dc6a) status_pane_g1

0xd0a9,	// (0x0001dc80) status_pane_g2_ParamLimits

0xd0a9,	// (0x0001dc80) status_pane_g2

0x41af,	// (0x00014d86) status_pane_g3_ParamLimits

0x41af,	// (0x00014d86) status_pane_g3

0x0004,

0xf774,	// (0x0002034b) status_pane_g_ParamLimits

0xf774,	// (0x0002034b) status_pane_g

0xd0b5,	// (0x0001dc8c) title_pane_ParamLimits

0xd0b5,	// (0x0001dc8c) title_pane

0xd116,	// (0x0001dced) uni_indicator_pane_ParamLimits

0xd116,	// (0x0001dced) uni_indicator_pane

0x3de0,	// (0x000149b7) bg_list_pane_ParamLimits

0x3de0,	// (0x000149b7) bg_list_pane

0x3e00,	// (0x000149d7) find_pane

0x4472,	// (0x00015049) listscroll_app_pane_ParamLimits

0x4472,	// (0x00015049) listscroll_app_pane

0x3e14,	// (0x000149eb) listscroll_form_pane

0x00f1,	// (0x00010cc8) listscroll_gen_pane_ParamLimits

0x00f1,	// (0x00010cc8) listscroll_gen_pane

0x0105,	// (0x00010cdc) listscroll_set_pane

0x5826,	// (0x000163fd) main_idle_act_pane

0x3adc,	// (0x000146b3) main_idle_trad_pane

0x3adc,	// (0x000146b3) main_list_empty_pane

0x3e08,	// (0x000149df) main_midp_pane

0x3e2e,	// (0x00014a05) main_pane_g1_ParamLimits

0x3e2e,	// (0x00014a05) main_pane_g1

0xb424,	// (0x0001bffb) popup_ai_message_window_ParamLimits

0xb424,	// (0x0001bffb) popup_ai_message_window

0xb4b5,	// (0x0001c08c) popup_fep_china_uni_window_ParamLimits

0xb4b5,	// (0x0001c08c) popup_fep_china_uni_window

0x021d,	// (0x00010df4) popup_fep_japan_candidate_window_ParamLimits

0x021d,	// (0x00010df4) popup_fep_japan_candidate_window

0x023d,	// (0x00010e14) popup_fep_japan_predictive_window_ParamLimits

0x023d,	// (0x00010e14) popup_fep_japan_predictive_window

0xb511,	// (0x0001c0e8) popup_find_window

0xb52e,	// (0x0001c105) popup_grid_graphic_window_ParamLimits

0xb52e,	// (0x0001c105) popup_grid_graphic_window

0x02a6,	// (0x00010e7d) popup_large_graphic_colour_window

0xb5d2,	// (0x0001c1a9) popup_menu_window_ParamLimits

0xb5d2,	// (0x0001c1a9) popup_menu_window

0xb7a4,	// (0x0001c37b) popup_note_image_window

0xb76a,	// (0x0001c341) popup_note_wait_window_ParamLimits

0xb76a,	// (0x0001c341) popup_note_wait_window

0xb7bc,	// (0x0001c393) popup_note_window_ParamLimits

0xb7bc,	// (0x0001c393) popup_note_window

0xb862,	// (0x0001c439) popup_query_code_window_ParamLimits

0xb862,	// (0x0001c439) popup_query_code_window

0x04ee,	// (0x000110c5) popup_query_data_code_window_ParamLimits

0x04ee,	// (0x000110c5) popup_query_data_code_window

0xb89c,	// (0x0001c473) popup_query_data_window_ParamLimits

0xb89c,	// (0x0001c473) popup_query_data_window

0xb91e,	// (0x0001c4f5) popup_query_sat_info_window_ParamLimits

0xb91e,	// (0x0001c4f5) popup_query_sat_info_window

0xb9b5,	// (0x0001c58c) popup_snote_single_graphic_window_ParamLimits

0xb9b5,	// (0x0001c58c) popup_snote_single_graphic_window

0xb9b5,	// (0x0001c58c) popup_snote_single_text_window_ParamLimits

0xb9b5,	// (0x0001c58c) popup_snote_single_text_window

0x0575,	// (0x0001114c) popup_sub_window_general

0x06a5,	// (0x0001127c) popup_window_general_ParamLimits

0x06a5,	// (0x0001127c) popup_window_general

0x3e44,	// (0x00014a1b) power_save_pane

0xb2a5,	// (0x0001be7c) control_pane_g1_ParamLimits

0xb2a5,	// (0x0001be7c) control_pane_g1

0xb2ce,	// (0x0001bea5) control_pane_g2_ParamLimits

0xb2ce,	// (0x0001bea5) control_pane_g2

0x3da3,	// (0x0001497a) control_pane_g3_ParamLimits

0x3da3,	// (0x0001497a) control_pane_g3

0x0007,

0xf75c,	// (0x00020333) control_pane_g_ParamLimits

0xf75c,	// (0x00020333) control_pane_g

0xb30f,	// (0x0001bee6) control_pane_t1_ParamLimits

0xb30f,	// (0x0001bee6) control_pane_t1

0xb377,	// (0x0001bf4e) control_pane_t2_ParamLimits

0xb377,	// (0x0001bf4e) control_pane_t2

0x0002,

0xf76d,	// (0x00020344) control_pane_t_ParamLimits

0xf76d,	// (0x00020344) control_pane_t

0x3cc8,	// (0x0001489f) navi_navi_volume_pane_cp1

0x3cd0,	// (0x000148a7) status_small_icon_pane

0x3cd8,	// (0x000148af) status_small_pane_g1_ParamLimits

0x3cd8,	// (0x000148af) status_small_pane_g1

0x3d0c,	// (0x000148e3) status_small_pane_g2_ParamLimits

0x3d0c,	// (0x000148e3) status_small_pane_g2

0x3d18,	// (0x000148ef) status_small_pane_g3_ParamLimits

0x3d18,	// (0x000148ef) status_small_pane_g3

0xcd36,	// (0x0001d90d) status_small_pane_g4_ParamLimits

0xcd36,	// (0x0001d90d) status_small_pane_g4

0xcd44,	// (0x0001d91b) status_small_pane_g5_ParamLimits

0xcd44,	// (0x0001d91b) status_small_pane_g5

0x3d3e,	// (0x00014915) status_small_pane_g6_ParamLimits

0x3d3e,	// (0x00014915) status_small_pane_g6

0x0007,

0xf74b,	// (0x00020322) status_small_pane_g_ParamLimits

0xf74b,	// (0x00020322) status_small_pane_g

0x3d6d,	// (0x00014944) status_small_pane_t1

0xcd5a,	// (0x0001d931) status_small_wait_pane_ParamLimits

0xcd5a,	// (0x0001d931) status_small_wait_pane

0xcbc6,	// (0x0001d79d) aid_levels_signal_ParamLimits

0xcbc6,	// (0x0001d79d) aid_levels_signal

0xcbde,	// (0x0001d7b5) signal_pane_g1_ParamLimits

0xcbde,	// (0x0001d7b5) signal_pane_g1

0xcbf9,	// (0x0001d7d0) signal_pane_g2_ParamLimits

0xcbf9,	// (0x0001d7d0) signal_pane_g2

0x0003,

0xf6dc,	// (0x000202b3) signal_pane_g_ParamLimits

0xf6dc,	// (0x000202b3) signal_pane_g

0x3528,	// (0x000140ff) context_pane_g1

0xc274,	// (0x0001ce4b) title_pane_g1

0xc2ab,	// (0x0001ce82) title_pane_t1

0x1dda,	// (0x000129b1) title_pane_t2

0x1e00,	// (0x000129d7) title_pane_t3

0x0002,

0xf530,	// (0x00020107) title_pane_t

0xd13e,	// (0x0001dd15) aid_levels_battery_ParamLimits

0xd13e,	// (0x0001dd15) aid_levels_battery

0xd15a,	// (0x0001dd31) battery_pane_g1_ParamLimits

0xd15a,	// (0x0001dd31) battery_pane_g1

0xd177,	// (0x0001dd4e) battery_pane_g2_ParamLimits

0xd177,	// (0x0001dd4e) battery_pane_g2

0x0001,

0xf77f,	// (0x00020356) battery_pane_g_ParamLimits

0xf77f,	// (0x00020356) battery_pane_g

0xd34e,	// (0x0001df25) uni_indicator_pane_g1

0xd364,	// (0x0001df3b) uni_indicator_pane_g2

0xd37a,	// (0x0001df51) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x000204c7) uni_indicator_pane_g

0x394d,	// (0x00014524) navi_icon_pane_ParamLimits

0x394d,	// (0x00014524) navi_icon_pane

0x3896,	// (0x0001446d) navi_midp_pane

0x3969,	// (0x00014540) navi_navi_pane

0x3973,	// (0x0001454a) navi_text_pane_ParamLimits

0x3973,	// (0x0001454a) navi_text_pane

0xe88b,	// (0x0001f462) status_small_wait_pane_g1

0x226f,	// (0x00012e46) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x000204c2) status_small_wait_pane_g

0x52fe,	// (0x00015ed5) navi_navi_icon_text_pane

0x5306,	// (0x00015edd) navi_navi_pane_g1_ParamLimits

0x5306,	// (0x00015edd) navi_navi_pane_g1

0x5318,	// (0x00015eef) navi_navi_pane_g2_ParamLimits

0x5318,	// (0x00015eef) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x00020490) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x00020490) navi_navi_pane_g

0x532a,	// (0x00015f01) navi_navi_tabs_pane

0x5333,	// (0x00015f0a) navi_navi_text_pane

0x52fe,	// (0x00015ed5) navi_navi_volume_pane

0x52da,	// (0x00015eb1) navi_text_pane_t1

0x52ce,	// (0x00015ea5) navi_icon_pane_g1

0x5221,	// (0x00015df8) navi_navi_text_pane_t1

0x09bd,	// (0x00011594) navi_navi_volume_pane_g1

0x09c5,	// (0x0001159c) volume_small_pane

0x5187,	// (0x00015d5e) navi_navi_icon_text_pane_g1

0x518f,	// (0x00015d66) navi_navi_icon_text_pane_t1

0x3969,	// (0x00014540) navi_tabs_2_long_pane

0x3969,	// (0x00014540) navi_tabs_2_pane

0x3969,	// (0x00014540) navi_tabs_3_long_pane

0x3969,	// (0x00014540) navi_tabs_3_pane

0x3969,	// (0x00014540) navi_tabs_4_pane

0x099d,	// (0x00011574) tabs_2_active_pane_ParamLimits

0x099d,	// (0x00011574) tabs_2_active_pane

0x09ad,	// (0x00011584) tabs_2_passive_pane_ParamLimits

0x09ad,	// (0x00011584) tabs_2_passive_pane

0x096b,	// (0x00011542) tabs_3_active_pane_ParamLimits

0x096b,	// (0x00011542) tabs_3_active_pane

0x097b,	// (0x00011552) tabs_3_passive_pane_ParamLimits

0x097b,	// (0x00011552) tabs_3_passive_pane

0x098c,	// (0x00011563) tabs_3_passive_pane_cp_ParamLimits

0x098c,	// (0x00011563) tabs_3_passive_pane_cp

0x0927,	// (0x000114fe) tabs_4_active_pane_ParamLimits

0x0927,	// (0x000114fe) tabs_4_active_pane

0x0938,	// (0x0001150f) tabs_4_passive_pane_ParamLimits

0x0938,	// (0x0001150f) tabs_4_passive_pane

0x0949,	// (0x00011520) tabs_4_passive_pane_cp_ParamLimits

0x0949,	// (0x00011520) tabs_4_passive_pane_cp

0x095a,	// (0x00011531) tabs_4_passive_pane_cp2_ParamLimits

0x095a,	// (0x00011531) tabs_4_passive_pane_cp2

0x0903,	// (0x000114da) tabs_2_long_active_pane_ParamLimits

0x0903,	// (0x000114da) tabs_2_long_active_pane

0x0915,	// (0x000114ec) tabs_2_long_passive_pane_ParamLimits

0x0915,	// (0x000114ec) tabs_2_long_passive_pane

0x08c4,	// (0x0001149b) tabs_3_long_active_pane_ParamLimits

0x08c4,	// (0x0001149b) tabs_3_long_active_pane

0x08d7,	// (0x000114ae) tabs_3_long_passive_pane_ParamLimits

0x08d7,	// (0x000114ae) tabs_3_long_passive_pane

0x08f0,	// (0x000114c7) tabs_3_long_passive_pane_cp_ParamLimits

0x08f0,	// (0x000114c7) tabs_3_long_passive_pane_cp

0x086a,	// (0x00011441) volume_small_pane_g1

0x0873,	// (0x0001144a) volume_small_pane_g2

0x087c,	// (0x00011453) volume_small_pane_g3

0x0885,	// (0x0001145c) volume_small_pane_g4

0x088e,	// (0x00011465) volume_small_pane_g5

0x0897,	// (0x0001146e) volume_small_pane_g6

0x08a0,	// (0x00011477) volume_small_pane_g7

0x08a9,	// (0x00011480) volume_small_pane_g8

0x08b2,	// (0x00011489) volume_small_pane_g9

0x08bb,	// (0x00011492) volume_small_pane_g10

0x0009,

0xf885,	// (0x0002045c) volume_small_pane_g

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp2_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp2

0x1e20,	// (0x000129f7) tabs_3_active_pane_g1

0xc337,	// (0x0001cf0e) tabs_3_active_pane_t1

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp2_ParamLimits

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp2

0x1e20,	// (0x000129f7) tabs_3_passive_pane_g1

0xc337,	// (0x0001cf0e) tabs_3_passive_pane_t1

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp3_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp3

0x1e3a,	// (0x00012a11) tabs_4_active_pane_g1

0xc349,	// (0x0001cf20) tabs_4_active_pane_t1

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp3_ParamLimits

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp3

0x1e3a,	// (0x00012a11) tabs_4_1_passive_pane_g1

0xc349,	// (0x0001cf20) tabs_4_1_passive_pane_t1

0x3e08,	// (0x000149df) list_highlight_pane_cp2

0xd400,	// (0x0001dfd7) list_set_pane_ParamLimits

0xd400,	// (0x0001dfd7) list_set_pane

0xd49a,	// (0x0001e071) main_pane_set_t1_ParamLimits

0xd49a,	// (0x0001e071) main_pane_set_t1

0xd4ba,	// (0x0001e091) main_pane_set_t2_ParamLimits

0xd4ba,	// (0x0001e091) main_pane_set_t2

0xd4ce,	// (0x0001e0a5) main_pane_set_t3_ParamLimits

0xd4ce,	// (0x0001e0a5) main_pane_set_t3

0xd4e0,	// (0x0001e0b7) main_pane_set_t4_ParamLimits

0xd4e0,	// (0x0001e0b7) main_pane_set_t4

0x0003,

0xf955,	// (0x0002052c) main_pane_set_t_ParamLimits

0xf955,	// (0x0002052c) main_pane_set_t

0xd4f2,	// (0x0001e0c9) setting_code_pane

0xd4fc,	// (0x0001e0d3) setting_slider_graphic_pane

0xd4fc,	// (0x0001e0d3) setting_slider_pane

0xd4fc,	// (0x0001e0d3) setting_text_pane

0xd4fc,	// (0x0001e0d3) setting_volume_pane

0xf000,	// (0x0001fbd7) volume_set_pane

0x1e12,	// (0x000129e9) bg_set_opt_pane_cp

0xf008,	// (0x0001fbdf) setting_slider_pane_t1

0xf021,	// (0x0001fbf8) setting_slider_pane_t2

0xf03b,	// (0x0001fc12) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0002010e) setting_slider_pane_t

0xf053,	// (0x0001fc2a) slider_set_pane

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp2

0x1e54,	// (0x00012a2b) setting_slider_graphic_pane_g1

0xf069,	// (0x0001fc40) setting_slider_graphic_pane_t1

0xf079,	// (0x0001fc50) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00020115) setting_slider_graphic_pane_t

0xf089,	// (0x0001fc60) slider_set_pane_cp

0xe895,	// (0x0001f46c) input_focus_pane_cp1

0x580d,	// (0x000163e4) list_set_text_pane

0xe88b,	// (0x0001f462) setting_text_pane_g1

0xe895,	// (0x0001f46c) input_focus_pane_cp2

0xe88b,	// (0x0001f462) setting_code_pane_g1

0x1e5d,	// (0x00012a34) setting_code_pane_t1

0x1e6b,	// (0x00012a42) set_text_pane_t1_ParamLimits

0x1e6b,	// (0x00012a42) set_text_pane_t1

0x2d3f,	// (0x00013916) set_opt_bg_pane_g1

0x2d47,	// (0x0001391e) set_opt_bg_pane_g2

0x57e7,	// (0x000163be) set_opt_bg_pane_g3

0x2d57,	// (0x0001392e) set_opt_bg_pane_g4

0x2d5f,	// (0x00013936) set_opt_bg_pane_g5

0x2d67,	// (0x0001393e) set_opt_bg_pane_g6

0x57f1,	// (0x000163c8) set_opt_bg_pane_g7

0x57f9,	// (0x000163d0) set_opt_bg_pane_g8

0x5803,	// (0x000163da) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x00020519) set_opt_bg_pane_g

0x57da,	// (0x000163b1) slider_set_pane_g1

0x0a32,	// (0x00011609) slider_set_pane_g2

0x0006,

0xf933,	// (0x0002050a) slider_set_pane_g

0x09ce,	// (0x000115a5) volume_set_pane_g1

0x09d6,	// (0x000115ad) volume_set_pane_g2

0x09de,	// (0x000115b5) volume_set_pane_g3

0x09e6,	// (0x000115bd) volume_set_pane_g4

0x09ee,	// (0x000115c5) volume_set_pane_g5

0x09f6,	// (0x000115cd) volume_set_pane_g6

0x09fe,	// (0x000115d5) volume_set_pane_g7

0x0a06,	// (0x000115dd) volume_set_pane_g8

0x0a0e,	// (0x000115e5) volume_set_pane_g9

0x0a16,	// (0x000115ed) volume_set_pane_g10

0x0009,

0xf90b,	// (0x000204e2) volume_set_pane_g

0xc35b,	// (0x0001cf32) indicator_pane_ParamLimits

0xc35b,	// (0x0001cf32) indicator_pane

0xc383,	// (0x0001cf5a) main_idle_pane_g2_ParamLimits

0xc383,	// (0x0001cf5a) main_idle_pane_g2

0xc3bb,	// (0x0001cf92) main_pane_idle_g1_ParamLimits

0xc3bb,	// (0x0001cf92) main_pane_idle_g1

0x1ec6,	// (0x00012a9d) popup_clock_digital_analogue_window_ParamLimits

0x1ec6,	// (0x00012a9d) popup_clock_digital_analogue_window

0xc3e2,	// (0x0001cfb9) soft_indicator_pane_ParamLimits

0xc3e2,	// (0x0001cfb9) soft_indicator_pane

0xc3fc,	// (0x0001cfd3) wallpaper_pane_ParamLimits

0xc3fc,	// (0x0001cfd3) wallpaper_pane

0xe88b,	// (0x0001f462) wallpaper_pane_g1

0xc40e,	// (0x0001cfe5) indicator_pane_g1_ParamLimits

0xc40e,	// (0x0001cfe5) indicator_pane_g1

0x5cf0,	// (0x000168c7) navi_navi_icon_text_pane_srt_g1

0x1f18,	// (0x00012aef) soft_indicator_pane_t1

0x1f32,	// (0x00012b09) aid_ps_area_pane

0xc424,	// (0x0001cffb) aid_ps_clock_pane

0x1f51,	// (0x00012b28) aid_ps_indicator_pane

0x1f5d,	// (0x00012b34) indicator_ps_pane_ParamLimits

0x1f5d,	// (0x00012b34) indicator_ps_pane

0x1f6c,	// (0x00012b43) power_save_pane_g1_ParamLimits

0x1f6c,	// (0x00012b43) power_save_pane_g1

0x1f78,	// (0x00012b4f) power_save_pane_g2_ParamLimits

0x1f78,	// (0x00012b4f) power_save_pane_g2

0xedea,	// (0x0001f9c1) aid_navinavi_width_pane

0x1f32,	// (0x00012b09) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0002011a) power_save_pane_g_ParamLimits

0xf543,	// (0x0002011a) power_save_pane_g

0x1f86,	// (0x00012b5d) power_save_pane_t1_ParamLimits

0x1f86,	// (0x00012b5d) power_save_pane_t1

0xc424,	// (0x0001cffb) aid_ps_clock_pane_ParamLimits

0x1f51,	// (0x00012b28) aid_ps_indicator_pane_ParamLimits

0x1f98,	// (0x00012b6f) power_save_pane_t4_ParamLimits

0x1f98,	// (0x00012b6f) power_save_pane_t4

0x0001,

0xf548,	// (0x0002011f) power_save_pane_t_ParamLimits

0xf548,	// (0x0002011f) power_save_pane_t

0x1fc2,	// (0x00012b99) power_save_t3_ParamLimits

0x1fc2,	// (0x00012b99) power_save_t3

0x1fad,	// (0x00012b84) power_save_t2_ParamLimits

0x1fad,	// (0x00012b84) power_save_t2

0x1fd7,	// (0x00012bae) indicator_ps_pane_g1

0xc432,	// (0x0001d009) ai_gene_pane_ParamLimits

0xc432,	// (0x0001d009) ai_gene_pane

0xc449,	// (0x0001d020) ai_links_pane_ParamLimits

0xc449,	// (0x0001d020) ai_links_pane

0xc461,	// (0x0001d038) indicator_pane_cp1_ParamLimits

0xc461,	// (0x0001d038) indicator_pane_cp1

0xc470,	// (0x0001d047) main_pane_idle_g1_cp_ParamLimits

0xc470,	// (0x0001d047) main_pane_idle_g1_cp

0x2010,	// (0x00012be7) popup_ai_links_title_window

0xc488,	// (0x0001d05f) soft_indicator_pane_cp1_ParamLimits

0xc488,	// (0x0001d05f) soft_indicator_pane_cp1

0x55c7,	// (0x0001619e) ai_links_pane_g1

0x55d0,	// (0x000161a7) grid_ai_links_pane

0xd345,	// (0x0001df1c) ai_gene_pane_1

0x55b5,	// (0x0001618c) ai_gene_pane_2

0x55be,	// (0x00016195) list_highlight_pane_cp4

0xd321,	// (0x0001def8) cell_ai_link_pane_ParamLimits

0xd321,	// (0x0001def8) cell_ai_link_pane

0x5586,	// (0x0001615d) cell_ai_link_pane_g1

0x226f,	// (0x00012e46) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x000204bd) cell_ai_link_pane_g

0xe895,	// (0x0001f46c) grid_highlight_cp2

0xe895,	// (0x0001f46c) bg_popup_sub_pane_cp1

0x2033,	// (0x00012c0a) popup_ai_links_title_window_t1

0x54d4,	// (0x000160ab) ai_gene_pane_1_g1_ParamLimits

0x54d4,	// (0x000160ab) ai_gene_pane_1_g1

0x54e0,	// (0x000160b7) ai_gene_pane_1_g2_ParamLimits

0x54e0,	// (0x000160b7) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x000204b3) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x000204b3) ai_gene_pane_1_g

0x54ed,	// (0x000160c4) ai_gene_pane_1_t1_ParamLimits

0x54ed,	// (0x000160c4) ai_gene_pane_1_t1

0x5521,	// (0x000160f8) grid_ai_soft_ind_pane

0x54bf,	// (0x00016096) ai_gene_pane_2_t1_ParamLimits

0x54bf,	// (0x00016096) ai_gene_pane_2_t1

0xc49c,	// (0x0001d073) main_pane_empty_t1_ParamLimits

0xc49c,	// (0x0001d073) main_pane_empty_t1

0xc4b4,	// (0x0001d08b) main_pane_empty_t2_ParamLimits

0xc4b4,	// (0x0001d08b) main_pane_empty_t2

0xc4c9,	// (0x0001d0a0) main_pane_empty_t3_ParamLimits

0xc4c9,	// (0x0001d0a0) main_pane_empty_t3

0xc4db,	// (0x0001d0b2) main_pane_empty_t4_ParamLimits

0xc4db,	// (0x0001d0b2) main_pane_empty_t4

0xc4ed,	// (0x0001d0c4) main_pane_empty_t5_ParamLimits

0xc4ed,	// (0x0001d0c4) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00020124) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00020124) main_pane_empty_t

0x2eb2,	// (0x00013a89) bg_popup_window_pane_ParamLimits

0x2eb2,	// (0x00013a89) bg_popup_window_pane

0x522f,	// (0x00015e06) find_popup_pane_cp2_ParamLimits

0x522f,	// (0x00015e06) find_popup_pane_cp2

0x523b,	// (0x00015e12) heading_pane_ParamLimits

0x523b,	// (0x00015e12) heading_pane

0xe895,	// (0x0001f46c) bg_popup_sub_pane

0xd2a2,	// (0x0001de79) bg_popup_window_pane_g1_ParamLimits

0xd2a2,	// (0x0001de79) bg_popup_window_pane_g1

0xd2b1,	// (0x0001de88) bg_popup_window_pane_g2_ParamLimits

0xd2b1,	// (0x0001de88) bg_popup_window_pane_g2

0xd2bd,	// (0x0001de94) bg_popup_window_pane_g3_ParamLimits

0xd2bd,	// (0x0001de94) bg_popup_window_pane_g3

0xd2c9,	// (0x0001dea0) bg_popup_window_pane_g4_ParamLimits

0xd2c9,	// (0x0001dea0) bg_popup_window_pane_g4

0xd2d8,	// (0x0001deaf) bg_popup_window_pane_g5_ParamLimits

0xd2d8,	// (0x0001deaf) bg_popup_window_pane_g5

0xd2e8,	// (0x0001debf) bg_popup_window_pane_g6_ParamLimits

0xd2e8,	// (0x0001debf) bg_popup_window_pane_g6

0xd2f4,	// (0x0001decb) bg_popup_window_pane_g7_ParamLimits

0xd2f4,	// (0x0001decb) bg_popup_window_pane_g7

0xd303,	// (0x0001deda) bg_popup_window_pane_g8_ParamLimits

0xd303,	// (0x0001deda) bg_popup_window_pane_g8

0xd312,	// (0x0001dee9) bg_popup_window_pane_g9_ParamLimits

0xd312,	// (0x0001dee9) bg_popup_window_pane_g9

0x5215,	// (0x00015dec) bg_popup_window_pane_g10_ParamLimits

0x5215,	// (0x00015dec) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x0002047b) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x0002047b) bg_popup_window_pane_g

0x513e,	// (0x00015d15) bg_popup_heading_pane_ParamLimits

0x513e,	// (0x00015d15) bg_popup_heading_pane

0x0aba,	// (0x00011691) tabs_4_passive_pane_cp_srt_ParamLimits

0x0aba,	// (0x00011691) tabs_4_passive_pane_cp_srt

0x0acc,	// (0x000116a3) tabs_4_passive_pane_srt_ParamLimits

0x5152,	// (0x00015d29) heading_pane_g2

0x0acc,	// (0x000116a3) tabs_4_passive_pane_srt

0x4472,	// (0x00015049) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4472,	// (0x00015049) bg_passive_tab_pane_cp3_srt

0x515a,	// (0x00015d31) heading_pane_t1_ParamLimits

0x515a,	// (0x00015d31) heading_pane_t1

0x5171,	// (0x00015d48) heading_pane_t2_ParamLimits

0x5171,	// (0x00015d48) heading_pane_t2

0x0001,

0xf89f,	// (0x00020476) heading_pane_t_ParamLimits

0xf89f,	// (0x00020476) heading_pane_t

0x4c6b,	// (0x00015842) bg_popup_heading_pane_g1

0x4d1a,	// (0x000158f1) bg_popup_heading_pane_g2

0x4d24,	// (0x000158fb) bg_popup_heading_pane_g3

0x4d2e,	// (0x00015905) bg_popup_heading_pane_g4

0x4d38,	// (0x0001590f) bg_popup_heading_pane_g5

0x4d42,	// (0x00015919) bg_popup_heading_pane_g6

0x4d4a,	// (0x00015921) bg_popup_heading_pane_g7

0x4d52,	// (0x00015929) bg_popup_heading_pane_g8

0x4d5c,	// (0x00015933) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x00020432) bg_popup_heading_pane_g

0x4350,	// (0x00014f27) bg_popup_sub_pane_g1

0x4360,	// (0x00014f37) bg_popup_sub_pane_g2

0x4358,	// (0x00014f2f) bg_popup_sub_pane_g3

0x4370,	// (0x00014f47) bg_popup_sub_pane_g4

0x4368,	// (0x00014f3f) bg_popup_sub_pane_g5

0x4378,	// (0x00014f4f) bg_popup_sub_pane_g6

0x4380,	// (0x00014f57) bg_popup_sub_pane_g7

0x4390,	// (0x00014f67) bg_popup_sub_pane_g8

0x4388,	// (0x00014f5f) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x0002040c) bg_popup_sub_pane_g

0x20a7,	// (0x00012c7e) bg_popup_window_pane_cp5_ParamLimits

0x20a7,	// (0x00012c7e) bg_popup_window_pane_cp5

0x20c3,	// (0x00012c9a) popup_note_window_g1_ParamLimits

0x20c3,	// (0x00012c9a) popup_note_window_g1

0x20cf,	// (0x00012ca6) popup_note_window_t1_ParamLimits

0x20cf,	// (0x00012ca6) popup_note_window_t1

0x20e5,	// (0x00012cbc) popup_note_window_t2_ParamLimits

0x20e5,	// (0x00012cbc) popup_note_window_t2

0x20fb,	// (0x00012cd2) popup_note_window_t3_ParamLimits

0x20fb,	// (0x00012cd2) popup_note_window_t3

0x2111,	// (0x00012ce8) popup_note_window_t4_ParamLimits

0x2111,	// (0x00012ce8) popup_note_window_t4

0x2139,	// (0x00012d10) popup_note_window_t5_ParamLimits

0x2139,	// (0x00012d10) popup_note_window_t5

0x0004,

0xf558,	// (0x0002012f) popup_note_window_t_ParamLimits

0xf558,	// (0x0002012f) popup_note_window_t

0x2183,	// (0x00012d5a) bg_popup_window_pane_cp6_ParamLimits

0x2183,	// (0x00012d5a) bg_popup_window_pane_cp6

0x4be7,	// (0x000157be) popup_note_image_window_g1_ParamLimits

0x4be7,	// (0x000157be) popup_note_image_window_g1

0x4bf3,	// (0x000157ca) popup_note_image_window_g2_ParamLimits

0x4bf3,	// (0x000157ca) popup_note_image_window_g2

0x0001,

0xf829,	// (0x00020400) popup_note_image_window_g_ParamLimits

0xf829,	// (0x00020400) popup_note_image_window_g

0x4c0c,	// (0x000157e3) popup_note_image_window_t1_ParamLimits

0x4c0c,	// (0x000157e3) popup_note_image_window_t1

0x4c25,	// (0x000157fc) popup_note_image_window_t2_ParamLimits

0x4c25,	// (0x000157fc) popup_note_image_window_t2

0x4c3e,	// (0x00015815) popup_note_image_window_t3_ParamLimits

0x4c3e,	// (0x00015815) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x00020405) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x00020405) popup_note_image_window_t

0x4aa8,	// (0x0001567f) bg_popup_window_pane_cp7_ParamLimits

0x4aa8,	// (0x0001567f) bg_popup_window_pane_cp7

0x4ad8,	// (0x000156af) popup_note_wait_window_g1_ParamLimits

0x4ad8,	// (0x000156af) popup_note_wait_window_g1

0x4ae4,	// (0x000156bb) popup_note_wait_window_g2_ParamLimits

0x4ae4,	// (0x000156bb) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x000203ee) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x000203ee) popup_note_wait_window_g

0x4afc,	// (0x000156d3) popup_note_wait_window_t1_ParamLimits

0x4afc,	// (0x000156d3) popup_note_wait_window_t1

0x4b23,	// (0x000156fa) popup_note_wait_window_t2_ParamLimits

0x4b23,	// (0x000156fa) popup_note_wait_window_t2

0x4b40,	// (0x00015717) popup_note_wait_window_t3_ParamLimits

0x4b40,	// (0x00015717) popup_note_wait_window_t3

0x4b53,	// (0x0001572a) popup_note_wait_window_t4_ParamLimits

0x4b53,	// (0x0001572a) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x000203f5) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x000203f5) popup_note_wait_window_t

0x4b78,	// (0x0001574f) wait_bar_pane_ParamLimits

0x4b78,	// (0x0001574f) wait_bar_pane

0xe895,	// (0x0001f46c) wait_anim_pane

0xe895,	// (0x0001f46c) wait_border_pane

0xe88b,	// (0x0001f462) wait_anim_pane_g1

0xe88b,	// (0x0001f462) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x000202ae) wait_anim_pane_g

0x4a4c,	// (0x00015623) wait_border_pane_g1

0x4a57,	// (0x0001562e) wait_border_pane_g2

0x4a60,	// (0x00015637) wait_border_pane_g3

0x0002,

0xf810,	// (0x000203e7) wait_border_pane_g

0x48b7,	// (0x0001548e) bg_popup_window_pane_cp16_ParamLimits

0x48b7,	// (0x0001548e) bg_popup_window_pane_cp16

0x49b7,	// (0x0001558e) indicator_popup_pane_cp4_ParamLimits

0x49b7,	// (0x0001558e) indicator_popup_pane_cp4

0x49cb,	// (0x000155a2) popup_query_data_window_t1_ParamLimits

0x49cb,	// (0x000155a2) popup_query_data_window_t1

0x49dd,	// (0x000155b4) popup_query_data_window_t2_ParamLimits

0x49dd,	// (0x000155b4) popup_query_data_window_t2

0x49f6,	// (0x000155cd) popup_query_data_window_t3_ParamLimits

0x49f6,	// (0x000155cd) popup_query_data_window_t3

0x0002,

0xf809,	// (0x000203e0) popup_query_data_window_t_ParamLimits

0xf809,	// (0x000203e0) popup_query_data_window_t

0x4a10,	// (0x000155e7) query_popup_data_pane_ParamLimits

0x4a10,	// (0x000155e7) query_popup_data_pane

0x4a24,	// (0x000155fb) query_popup_data_pane_cp1_ParamLimits

0x4a24,	// (0x000155fb) query_popup_data_pane_cp1

0x48b7,	// (0x0001548e) bg_popup_window_pane_cp10_ParamLimits

0x48b7,	// (0x0001548e) bg_popup_window_pane_cp10

0x48e9,	// (0x000154c0) indicator_popup_pane_ParamLimits

0x48e9,	// (0x000154c0) indicator_popup_pane

0x490b,	// (0x000154e2) popup_query_code_window_t1_ParamLimits

0x490b,	// (0x000154e2) popup_query_code_window_t1

0x4925,	// (0x000154fc) popup_query_code_window_t2_ParamLimits

0x4925,	// (0x000154fc) popup_query_code_window_t2

0x496e,	// (0x00015545) popup_query_code_window_t3_ParamLimits

0x496e,	// (0x00015545) popup_query_code_window_t3

0x0002,

0xf802,	// (0x000203d9) popup_query_code_window_t_ParamLimits

0xf802,	// (0x000203d9) popup_query_code_window_t

0x499d,	// (0x00015574) query_popup_pane_ParamLimits

0x499d,	// (0x00015574) query_popup_pane

0x2183,	// (0x00012d5a) bg_popup_window_pane_cp15_ParamLimits

0x2183,	// (0x00012d5a) bg_popup_window_pane_cp15

0x21a1,	// (0x00012d78) indicator_popup_pane_cp1_ParamLimits

0x21a1,	// (0x00012d78) indicator_popup_pane_cp1

0x21b4,	// (0x00012d8b) indicator_popup_pane_cp2_ParamLimits

0x21b4,	// (0x00012d8b) indicator_popup_pane_cp2

0x21c7,	// (0x00012d9e) popup_query_data_code_window_g1_ParamLimits

0x21c7,	// (0x00012d9e) popup_query_data_code_window_g1

0x21da,	// (0x00012db1) popup_query_data_code_window_t1_ParamLimits

0x21da,	// (0x00012db1) popup_query_data_code_window_t1

0x21ec,	// (0x00012dc3) popup_query_data_code_window_t2_ParamLimits

0x21ec,	// (0x00012dc3) popup_query_data_code_window_t2

0x21fe,	// (0x00012dd5) popup_query_data_code_window_t3_ParamLimits

0x21fe,	// (0x00012dd5) popup_query_data_code_window_t3

0x2214,	// (0x00012deb) popup_query_data_code_window_t4_ParamLimits

0x2214,	// (0x00012deb) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0002013a) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0002013a) popup_query_data_code_window_t

0x077b,	// (0x00011352) list_single_midp_graphic_pane_g3

0x222c,	// (0x00012e03) query_popup_data_pane_cp2_ParamLimits

0x223f,	// (0x00012e16) query_popup_pane_cp2_ParamLimits

0x223f,	// (0x00012e16) query_popup_pane_cp2

0xe895,	// (0x0001f46c) bg_popup_window_pane_cp11

0x489b,	// (0x00015472) heading_pane_cp5

0x48a3,	// (0x0001547a) listscroll_popup_info_pane

0xe895,	// (0x0001f46c) input_focus_pane_cp3

0x2252,	// (0x00012e29) query_popup_pane_t1

0x2260,	// (0x00012e37) list_popup_info_pane_ParamLimits

0x2260,	// (0x00012e37) list_popup_info_pane

0x226f,	// (0x00012e46) listscroll_popup_info_pane_g1

0x2277,	// (0x00012e4e) scroll_pane_cp7

0x2281,	// (0x00012e58) popup_info_list_pane_t1_ParamLimits

0x2281,	// (0x00012e58) popup_info_list_pane_t1

0x229b,	// (0x00012e72) popup_info_list_pane_t2_ParamLimits

0x229b,	// (0x00012e72) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00020143) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00020143) popup_info_list_pane_t

0xe895,	// (0x0001f46c) bg_popup_window_pane_cp12

0x5d0a,	// (0x000168e1) find_popup_pane

0x1e12,	// (0x000129e9) bg_popup_window_pane_cp3

0x22b5,	// (0x00012e8c) heading_pane_cp3

0x22c4,	// (0x00012e9b) listscroll_popup_graphic_pane

0xe895,	// (0x0001f46c) bg_popup_window_pane_cp4

0xc54f,	// (0x0001d126) heading_pane_cp4

0x232e,	// (0x00012f05) listscroll_popup_colour_pane

0xc559,	// (0x0001d130) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc559,	// (0x0001d130) cell_large_graphic_colour_none_popup_pane

0xc56d,	// (0x0001d144) grid_large_graphic_colour_popup_pane_ParamLimits

0xc56d,	// (0x0001d144) grid_large_graphic_colour_popup_pane

0xc591,	// (0x0001d168) listscroll_popup_colour_pane_g1_ParamLimits

0xc591,	// (0x0001d168) listscroll_popup_colour_pane_g1

0xc5a8,	// (0x0001d17f) listscroll_popup_colour_pane_g2_ParamLimits

0xc5a8,	// (0x0001d17f) listscroll_popup_colour_pane_g2

0xc5bc,	// (0x0001d193) listscroll_popup_colour_pane_g3_ParamLimits

0xc5bc,	// (0x0001d193) listscroll_popup_colour_pane_g3

0xc5cc,	// (0x0001d1a3) listscroll_popup_colour_pane_g4_ParamLimits

0xc5cc,	// (0x0001d1a3) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00020148) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00020148) listscroll_popup_colour_pane_g

0x23bc,	// (0x00012f93) scroll_pane_cp6_ParamLimits

0x23bc,	// (0x00012f93) scroll_pane_cp6

0xc5dc,	// (0x0001d1b3) cell_large_graphic_colour_popup_pane_ParamLimits

0xc5dc,	// (0x0001d1b3) cell_large_graphic_colour_popup_pane

0x23ed,	// (0x00012fc4) cell_large_graphic_colour_none_popup_pane_t1

0xe895,	// (0x0001f46c) grid_highlight_pane_cp5

0x23fc,	// (0x00012fd3) cell_large_graphic_colour_popup_pane_g1

0x2404,	// (0x00012fdb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00020151) cell_large_graphic_colour_popup_pane_g

0x240c,	// (0x00012fe3) cell_large_graphic_colour_popup_pane_g2_copy1

0x2415,	// (0x00012fec) grid_highlight_pane_cp4

0x241d,	// (0x00012ff4) bg_popup_window_pane_cp8_ParamLimits

0x241d,	// (0x00012ff4) bg_popup_window_pane_cp8

0x2438,	// (0x0001300f) popup_snote_single_text_window_g1_ParamLimits

0x2438,	// (0x0001300f) popup_snote_single_text_window_g1

0x244a,	// (0x00013021) popup_snote_single_text_window_t1_ParamLimits

0x244a,	// (0x00013021) popup_snote_single_text_window_t1

0x245d,	// (0x00013034) popup_snote_single_text_window_t2_ParamLimits

0x245d,	// (0x00013034) popup_snote_single_text_window_t2

0x2470,	// (0x00013047) popup_snote_single_text_window_t3_ParamLimits

0x2470,	// (0x00013047) popup_snote_single_text_window_t3

0x24a9,	// (0x00013080) popup_snote_single_text_window_t4_ParamLimits

0x24a9,	// (0x00013080) popup_snote_single_text_window_t4

0x24dd,	// (0x000130b4) popup_snote_single_text_window_t5_ParamLimits

0x24dd,	// (0x000130b4) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00020156) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00020156) popup_snote_single_text_window_t

0x250c,	// (0x000130e3) bg_popup_window_pane_cp9_ParamLimits

0x250c,	// (0x000130e3) bg_popup_window_pane_cp9

0x2438,	// (0x0001300f) popup_snote_single_graphic_window_g1_ParamLimits

0x2438,	// (0x0001300f) popup_snote_single_graphic_window_g1

0x251a,	// (0x000130f1) popup_snote_single_graphic_window_g2_ParamLimits

0x251a,	// (0x000130f1) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00020161) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00020161) popup_snote_single_graphic_window_g

0x2526,	// (0x000130fd) popup_snote_single_graphic_window_t1_ParamLimits

0x2526,	// (0x000130fd) popup_snote_single_graphic_window_t1

0x2539,	// (0x00013110) popup_snote_single_graphic_window_t2_ParamLimits

0x2539,	// (0x00013110) popup_snote_single_graphic_window_t2

0x254c,	// (0x00013123) popup_snote_single_graphic_window_t3_ParamLimits

0x254c,	// (0x00013123) popup_snote_single_graphic_window_t3

0x2585,	// (0x0001315c) popup_snote_single_graphic_window_t4_ParamLimits

0x2585,	// (0x0001315c) popup_snote_single_graphic_window_t4

0x25b9,	// (0x00013190) popup_snote_single_graphic_window_t5_ParamLimits

0x25b9,	// (0x00013190) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00020166) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00020166) popup_snote_single_graphic_window_t

0x5c4c,	// (0x00016823) grid_graphic_popup_pane_ParamLimits

0x5c4c,	// (0x00016823) grid_graphic_popup_pane

0x5c76,	// (0x0001684d) listscroll_popup_graphic_pane_g1_ParamLimits

0x5c76,	// (0x0001684d) listscroll_popup_graphic_pane_g1

0xd635,	// (0x0001e20c) listscroll_popup_graphic_pane_g2_ParamLimits

0xd635,	// (0x0001e20c) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x00020556) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x00020556) listscroll_popup_graphic_pane_g

0x5c9e,	// (0x00016875) scroll_pane_cp5

0xd5f0,	// (0x0001e1c7) cell_graphic_popup_pane_ParamLimits

0xd5f0,	// (0x0001e1c7) cell_graphic_popup_pane

0x5bbb,	// (0x00016792) cell_graphic_popup_pane_g1

0x5bc3,	// (0x0001679a) cell_graphic_popup_pane_g2

0x240c,	// (0x00012fe3) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x0002054f) cell_graphic_popup_pane_g

0x5bcc,	// (0x000167a3) cell_graphic_popup_pane_t2

0x2415,	// (0x00012fec) grid_highlight_pane_cp3

0x25fa,	// (0x000131d1) list_gen_pane_ParamLimits

0x25fa,	// (0x000131d1) list_gen_pane

0x262c,	// (0x00013203) scroll_pane

0xd5a7,	// (0x0001e17e) bg_list_pane_g1_ParamLimits

0xd5a7,	// (0x0001e17e) bg_list_pane_g1

0x5b30,	// (0x00016707) bg_list_pane_g2_ParamLimits

0x5b30,	// (0x00016707) bg_list_pane_g2

0x5b45,	// (0x0001671c) bg_list_pane_g3_ParamLimits

0x5b45,	// (0x0001671c) bg_list_pane_g3

0x5b59,	// (0x00016730) bg_list_pane_g4_ParamLimits

0x5b59,	// (0x00016730) bg_list_pane_g4

0xd5c4,	// (0x0001e19b) bg_list_pane_g5_ParamLimits

0xd5c4,	// (0x0001e19b) bg_list_pane_g5

0x0004,

0xf96d,	// (0x00020544) bg_list_pane_g_ParamLimits

0xf96d,	// (0x00020544) bg_list_pane_g

0xd54b,	// (0x0001e122) list_double2_graphic_large_graphic_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double2_graphic_large_graphic_pane

0xd54b,	// (0x0001e122) list_double2_graphic_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double2_graphic_pane

0xd54b,	// (0x0001e122) list_double2_large_graphic_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double2_large_graphic_pane

0xd54b,	// (0x0001e122) list_double2_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double2_pane

0xd54b,	// (0x0001e122) list_double_graphic_heading_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_graphic_heading_pane

0xd54b,	// (0x0001e122) list_double_graphic_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_graphic_pane

0xd54b,	// (0x0001e122) list_double_heading_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_heading_pane

0xd54b,	// (0x0001e122) list_double_large_graphic_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_large_graphic_pane

0xd54b,	// (0x0001e122) list_double_number_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_number_pane

0xd54b,	// (0x0001e122) list_double_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_pane

0xd54b,	// (0x0001e122) list_double_time_pane_ParamLimits

0xd54b,	// (0x0001e122) list_double_time_pane

0xd54b,	// (0x0001e122) list_setting_number_pane_ParamLimits

0xd54b,	// (0x0001e122) list_setting_number_pane

0xd54b,	// (0x0001e122) list_setting_pane_ParamLimits

0xd54b,	// (0x0001e122) list_setting_pane

0xd55d,	// (0x0001e134) list_single_2graphic_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_2graphic_pane

0xd55d,	// (0x0001e134) list_single_graphic_heading_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_graphic_heading_pane

0xd55d,	// (0x0001e134) list_single_graphic_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_graphic_pane

0xd55d,	// (0x0001e134) list_single_heading_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_heading_pane

0xd55d,	// (0x0001e134) list_single_large_graphic_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_large_graphic_pane

0xd55d,	// (0x0001e134) list_single_number_heading_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_number_heading_pane

0xd55d,	// (0x0001e134) list_single_number_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_number_pane

0xd55d,	// (0x0001e134) list_single_pane_ParamLimits

0xd55d,	// (0x0001e134) list_single_pane

0xe895,	// (0x0001f46c) list_highlight_pane_cp1

0x266c,	// (0x00013243) list_single_pane_g1_ParamLimits

0x266c,	// (0x00013243) list_single_pane_g1

0x2678,	// (0x0001324f) list_single_pane_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_pane_g

0x59ca,	// (0x000165a1) list_single_pane_t1_ParamLimits

0x59ca,	// (0x000165a1) list_single_pane_t1

0x266c,	// (0x00013243) list_single_number_pane_g1_ParamLimits

0x266c,	// (0x00013243) list_single_number_pane_g1

0x2678,	// (0x0001324f) list_single_number_pane_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_number_pane_g

0x42de,	// (0x00014eb5) list_single_number_pane_t1_ParamLimits

0x42de,	// (0x00014eb5) list_single_number_pane_t1

0x576c,	// (0x00016343) list_single_number_pane_t2_ParamLimits

0x576c,	// (0x00016343) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x00020505) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x00020505) list_single_number_pane_t

0x2660,	// (0x00013237) list_single_graphic_pane_g1_ParamLimits

0x2660,	// (0x00013237) list_single_graphic_pane_g1

0x266c,	// (0x00013243) list_single_graphic_pane_g2_ParamLimits

0x266c,	// (0x00013243) list_single_graphic_pane_g2

0x2678,	// (0x0001324f) list_single_graphic_pane_g3_ParamLimits

0x2678,	// (0x0001324f) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00020171) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00020171) list_single_graphic_pane_g

0x2684,	// (0x0001325b) list_single_graphic_pane_t1_ParamLimits

0x2684,	// (0x0001325b) list_single_graphic_pane_t1

0x266c,	// (0x00013243) list_single_heading_pane_g1_ParamLimits

0x266c,	// (0x00013243) list_single_heading_pane_g1

0x2678,	// (0x0001324f) list_single_heading_pane_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_heading_pane_g

0x269a,	// (0x00013271) list_single_heading_pane_t1_ParamLimits

0x269a,	// (0x00013271) list_single_heading_pane_t1

0x26b0,	// (0x00013287) list_single_heading_pane_t2_ParamLimits

0x26b0,	// (0x00013287) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0002017d) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0002017d) list_single_heading_pane_t

0x266c,	// (0x00013243) list_single_number_heading_pane_g1_ParamLimits

0x266c,	// (0x00013243) list_single_number_heading_pane_g1

0x2678,	// (0x0001324f) list_single_number_heading_pane_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_number_heading_pane_g

0x269a,	// (0x00013271) list_single_number_heading_pane_t1_ParamLimits

0x269a,	// (0x00013271) list_single_number_heading_pane_t1

0x26c2,	// (0x00013299) list_single_number_heading_pane_t2_ParamLimits

0x26c2,	// (0x00013299) list_single_number_heading_pane_t2

0x26d4,	// (0x000132ab) list_single_number_heading_pane_t3_ParamLimits

0x26d4,	// (0x000132ab) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00020182) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00020182) list_single_number_heading_pane_t

0x26e6,	// (0x000132bd) list_single_graphic_heading_pane_g1_ParamLimits

0x26e6,	// (0x000132bd) list_single_graphic_heading_pane_g1

0xc605,	// (0x0001d1dc) list_single_graphic_heading_pane_g4_ParamLimits

0xc605,	// (0x0001d1dc) list_single_graphic_heading_pane_g4

0x2678,	// (0x0001324f) list_single_graphic_heading_pane_g5_ParamLimits

0x2678,	// (0x0001324f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00020189) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00020189) list_single_graphic_heading_pane_g

0x269a,	// (0x00013271) list_single_graphic_heading_pane_t1_ParamLimits

0x269a,	// (0x00013271) list_single_graphic_heading_pane_t1

0x2703,	// (0x000132da) list_single_graphic_heading_pane_t2_ParamLimits

0x2703,	// (0x000132da) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00020190) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00020190) list_single_graphic_heading_pane_t

0x62f0,	// (0x00016ec7) list_single_large_graphic_pane_g1_ParamLimits

0x62f0,	// (0x00016ec7) list_single_large_graphic_pane_g1

0x266c,	// (0x00013243) list_single_large_graphic_pane_g2_ParamLimits

0x266c,	// (0x00013243) list_single_large_graphic_pane_g2

0x2678,	// (0x0001324f) list_single_large_graphic_pane_g3_ParamLimits

0x2678,	// (0x0001324f) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00020195) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00020195) list_single_large_graphic_pane_g

0x4a57,	// (0x0001562e) wait_border_pane_g2_copy1

0xc616,	// (0x0001d1ed) list_single_large_graphic_pane_g4_cp2

0x62fc,	// (0x00016ed3) list_single_large_graphic_pane_t1_ParamLimits

0x62fc,	// (0x00016ed3) list_single_large_graphic_pane_t1

0x2865,	// (0x0001343c) list_double_pane_g1_ParamLimits

0x2865,	// (0x0001343c) list_double_pane_g1

0x2790,	// (0x00013367) list_double_pane_g2_ParamLimits

0x2790,	// (0x00013367) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0002019c) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0002019c) list_double_pane_g

0x279c,	// (0x00013373) list_double_pane_t1_ParamLimits

0x279c,	// (0x00013373) list_double_pane_t1

0xc61e,	// (0x0001d1f5) list_double_pane_t2_ParamLimits

0xc61e,	// (0x0001d1f5) list_double_pane_t2

0x0001,

0xf5ca,	// (0x000201a1) list_double_pane_t_ParamLimits

0xf5ca,	// (0x000201a1) list_double_pane_t

0xc630,	// (0x0001d207) list_double2_pane_g1_ParamLimits

0xc630,	// (0x0001d207) list_double2_pane_g1

0xc641,	// (0x0001d218) list_double2_pane_g2_ParamLimits

0xc641,	// (0x0001d218) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x000201a6) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x000201a6) list_double2_pane_g

0xc64d,	// (0x0001d224) list_double2_pane_t1_ParamLimits

0xc64d,	// (0x0001d224) list_double2_pane_t1

0x2981,	// (0x00013558) list_double2_pane_t2_ParamLimits

0x2981,	// (0x00013558) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x000201ab) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x000201ab) list_double2_pane_t

0x2865,	// (0x0001343c) list_double_number_pane_g1_ParamLimits

0x2865,	// (0x0001343c) list_double_number_pane_g1

0x2790,	// (0x00013367) list_double_number_pane_g2_ParamLimits

0x2790,	// (0x00013367) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0002019c) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0002019c) list_double_number_pane_g

0xc663,	// (0x0001d23a) list_double_number_pane_t1_ParamLimits

0xc663,	// (0x0001d23a) list_double_number_pane_t1

0x2871,	// (0x00013448) list_double_number_pane_t2_ParamLimits

0x2871,	// (0x00013448) list_double_number_pane_t2

0xc675,	// (0x0001d24c) list_double_number_pane_t3_ParamLimits

0xc675,	// (0x0001d24c) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x000201b0) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x000201b0) list_double_number_pane_t

0x2859,	// (0x00013430) list_double_graphic_pane_g1_ParamLimits

0x2859,	// (0x00013430) list_double_graphic_pane_g1

0xc687,	// (0x0001d25e) list_double_graphic_pane_g2_ParamLimits

0xc687,	// (0x0001d25e) list_double_graphic_pane_g2

0xc696,	// (0x0001d26d) list_double_graphic_pane_g3_ParamLimits

0xc696,	// (0x0001d26d) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x000201b7) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x000201b7) list_double_graphic_pane_g

0xc6ae,	// (0x0001d285) list_double_graphic_pane_t1_ParamLimits

0xc6ae,	// (0x0001d285) list_double_graphic_pane_t1

0xc6c4,	// (0x0001d29b) list_double_graphic_pane_t2_ParamLimits

0xc6c4,	// (0x0001d29b) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x000201c0) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x000201c0) list_double_graphic_pane_t

0xc6d6,	// (0x0001d2ad) list_double2_graphic_pane_g1_ParamLimits

0xc6d6,	// (0x0001d2ad) list_double2_graphic_pane_g1

0x2c36,	// (0x0001380d) list_double2_graphic_pane_g2_ParamLimits

0x2c36,	// (0x0001380d) list_double2_graphic_pane_g2

0xc641,	// (0x0001d218) list_double2_graphic_pane_g3_ParamLimits

0xc641,	// (0x0001d218) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x000201c5) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x000201c5) list_double2_graphic_pane_g

0xc6e2,	// (0x0001d2b9) list_double2_graphic_pane_t1_ParamLimits

0xc6e2,	// (0x0001d2b9) list_double2_graphic_pane_t1

0x29a9,	// (0x00013580) list_double2_graphic_pane_t2_ParamLimits

0x29a9,	// (0x00013580) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x000201cc) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x000201cc) list_double2_graphic_pane_t

0xc6f8,	// (0x0001d2cf) list_double_large_graphic_pane_g1_ParamLimits

0xc6f8,	// (0x0001d2cf) list_double_large_graphic_pane_g1

0xc717,	// (0x0001d2ee) list_double_large_graphic_pane_g2_ParamLimits

0xc717,	// (0x0001d2ee) list_double_large_graphic_pane_g2

0x2790,	// (0x00013367) list_double_large_graphic_pane_g3_ParamLimits

0x2790,	// (0x00013367) list_double_large_graphic_pane_g3

0xc728,	// (0x0001d2ff) list_double_large_graphic_pane_g4_ParamLimits

0xc728,	// (0x0001d2ff) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x000201d1) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x000201d1) list_double_large_graphic_pane_g

0xc73b,	// (0x0001d312) list_double_large_graphic_pane_t1_ParamLimits

0xc73b,	// (0x0001d312) list_double_large_graphic_pane_t1

0xc754,	// (0x0001d32b) list_double_large_graphic_pane_t2_ParamLimits

0xc754,	// (0x0001d32b) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x000201dc) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x000201dc) list_double_large_graphic_pane_t

0xc766,	// (0x0001d33d) list_double2_large_graphic_pane_g1_ParamLimits

0xc766,	// (0x0001d33d) list_double2_large_graphic_pane_g1

0xc630,	// (0x0001d207) list_double2_large_graphic_pane_g2_ParamLimits

0xc630,	// (0x0001d207) list_double2_large_graphic_pane_g2

0xc641,	// (0x0001d218) list_double2_large_graphic_pane_g3_ParamLimits

0xc641,	// (0x0001d218) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x000201e1) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x000201e1) list_double2_large_graphic_pane_g

0xc772,	// (0x0001d349) list_double2_large_graphic_pane_t1_ParamLimits

0xc772,	// (0x0001d349) list_double2_large_graphic_pane_t1

0xc788,	// (0x0001d35f) list_double2_large_graphic_pane_t2_ParamLimits

0xc788,	// (0x0001d35f) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x000201e8) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x000201e8) list_double2_large_graphic_pane_t

0xc79a,	// (0x0001d371) list_double_heading_pane_g1_ParamLimits

0xc79a,	// (0x0001d371) list_double_heading_pane_g1

0xc7ab,	// (0x0001d382) list_double_heading_pane_g2_ParamLimits

0xc7ab,	// (0x0001d382) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x000201ed) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x000201ed) list_double_heading_pane_g

0xc7b7,	// (0x0001d38e) list_double_heading_pane_t1_ParamLimits

0xc7b7,	// (0x0001d38e) list_double_heading_pane_t1

0xc7cd,	// (0x0001d3a4) list_double_heading_pane_t2_ParamLimits

0xc7cd,	// (0x0001d3a4) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x000201f2) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x000201f2) list_double_heading_pane_t

0x27fe,	// (0x000133d5) list_double_graphic_heading_pane_g1_ParamLimits

0x27fe,	// (0x000133d5) list_double_graphic_heading_pane_g1

0xc79a,	// (0x0001d371) list_double_graphic_heading_pane_g2_ParamLimits

0xc79a,	// (0x0001d371) list_double_graphic_heading_pane_g2

0xc7ab,	// (0x0001d382) list_double_graphic_heading_pane_g3_ParamLimits

0xc7ab,	// (0x0001d382) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x000201f7) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x000201f7) list_double_graphic_heading_pane_g

0xc7df,	// (0x0001d3b6) list_double_graphic_heading_pane_t1_ParamLimits

0xc7df,	// (0x0001d3b6) list_double_graphic_heading_pane_t1

0xc7f5,	// (0x0001d3cc) list_double_graphic_heading_pane_t2_ParamLimits

0xc7f5,	// (0x0001d3cc) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x000201fe) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x000201fe) list_double_graphic_heading_pane_t

0xc717,	// (0x0001d2ee) list_double_time_pane_g1_ParamLimits

0xc717,	// (0x0001d2ee) list_double_time_pane_g1

0x2790,	// (0x00013367) list_double_time_pane_g2_ParamLimits

0x2790,	// (0x00013367) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00020203) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00020203) list_double_time_pane_g

0xc807,	// (0x0001d3de) list_double_time_pane_t1_ParamLimits

0xc807,	// (0x0001d3de) list_double_time_pane_t1

0xc81d,	// (0x0001d3f4) list_double_time_pane_t2_ParamLimits

0xc81d,	// (0x0001d3f4) list_double_time_pane_t2

0xc82f,	// (0x0001d406) list_double_time_pane_t3_ParamLimits

0xc82f,	// (0x0001d406) list_double_time_pane_t3

0xc841,	// (0x0001d418) list_double_time_pane_t4_ParamLimits

0xc841,	// (0x0001d418) list_double_time_pane_t4

0x0003,

0xf631,	// (0x00020208) list_double_time_pane_t_ParamLimits

0xf631,	// (0x00020208) list_double_time_pane_t

0x2c36,	// (0x0001380d) list_setting_pane_g1_ParamLimits

0x2c36,	// (0x0001380d) list_setting_pane_g1

0xc641,	// (0x0001d218) list_setting_pane_g2_ParamLimits

0xc641,	// (0x0001d218) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00020211) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00020211) list_setting_pane_g

0xc853,	// (0x0001d42a) list_setting_pane_t1_ParamLimits

0xc853,	// (0x0001d42a) list_setting_pane_t1

0xc86a,	// (0x0001d441) list_setting_pane_t2_ParamLimits

0xc86a,	// (0x0001d441) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00020216) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00020216) list_setting_pane_t

0xc8a9,	// (0x0001d480) set_value_pane_cp_ParamLimits

0xc8a9,	// (0x0001d480) set_value_pane_cp

0x2c36,	// (0x0001380d) list_setting_number_pane_g1_ParamLimits

0x2c36,	// (0x0001380d) list_setting_number_pane_g1

0xc641,	// (0x0001d218) list_setting_number_pane_g2_ParamLimits

0xc641,	// (0x0001d218) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x00020211) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x00020211) list_setting_number_pane_g

0xc8b5,	// (0x0001d48c) list_setting_number_pane_t1_ParamLimits

0xc8b5,	// (0x0001d48c) list_setting_number_pane_t1

0xc8c9,	// (0x0001d4a0) list_setting_number_pane_t2_ParamLimits

0xc8c9,	// (0x0001d4a0) list_setting_number_pane_t2

0xc8e0,	// (0x0001d4b7) list_setting_number_pane_t3_ParamLimits

0xc8e0,	// (0x0001d4b7) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0002021d) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0002021d) list_setting_number_pane_t

0xc8a9,	// (0x0001d480) set_value_pane_ParamLimits

0xc8a9,	// (0x0001d480) set_value_pane

0x2ad7,	// (0x000136ae) bg_set_opt_pane_ParamLimits

0x2ad7,	// (0x000136ae) bg_set_opt_pane

0x2af8,	// (0x000136cf) set_value_pane_t1

0x2b06,	// (0x000136dd) slider_set_pane_cp3

0x2b0f,	// (0x000136e6) volume_small_pane_cp

0x2b18,	// (0x000136ef) list_form_gen_pane

0x2b21,	// (0x000136f8) scroll_pane_cp8

0xc923,	// (0x0001d4fa) form_field_data_pane_ParamLimits

0xc923,	// (0x0001d4fa) form_field_data_pane

0xc93a,	// (0x0001d511) form_field_data_wide_pane_ParamLimits

0xc93a,	// (0x0001d511) form_field_data_wide_pane

0xc95a,	// (0x0001d531) form_field_popup_pane_ParamLimits

0xc95a,	// (0x0001d531) form_field_popup_pane

0xc972,	// (0x0001d549) form_field_popup_wide_pane_ParamLimits

0xc972,	// (0x0001d549) form_field_popup_wide_pane

0x2bbc,	// (0x00013793) form_field_slider_pane_ParamLimits

0x2bbc,	// (0x00013793) form_field_slider_pane

0x2bcf,	// (0x000137a6) form_field_slider_wide_pane_ParamLimits

0x2bcf,	// (0x000137a6) form_field_slider_wide_pane

0x2be2,	// (0x000137b9) data_form_pane

0xc993,	// (0x0001d56a) form_field_data_pane_t1

0x2c10,	// (0x000137e7) input_focus_pane

0x2c1e,	// (0x000137f5) data_form_wide_pane

0x2c56,	// (0x0001382d) form_field_data_wide_pane_t1

0x242a,	// (0x00013001) input_focus_pane_cp6

0xc9ad,	// (0x0001d584) form_field_popup_pane_t1

0x2c10,	// (0x000137e7) input_focus_pane_cp7

0x2c8d,	// (0x00013864) list_form_pane

0x2ca1,	// (0x00013878) form_field_popup_wide_pane_t1

0x2c10,	// (0x000137e7) input_focus_pane_cp8

0x2cb3,	// (0x0001388a) list_form_wide_pane

0xc9cf,	// (0x0001d5a6) form_field_slider_pane_t1_ParamLimits

0xc9cf,	// (0x0001d5a6) form_field_slider_pane_t1

0xc9e7,	// (0x0001d5be) form_field_slider_pane_t2_ParamLimits

0xc9e7,	// (0x0001d5be) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0002022d) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0002022d) form_field_slider_pane_t

0x20a7,	// (0x00012c7e) input_focus_pane_cp9_ParamLimits

0x20a7,	// (0x00012c7e) input_focus_pane_cp9

0xc9fc,	// (0x0001d5d3) slider_cont_pane_ParamLimits

0xc9fc,	// (0x0001d5d3) slider_cont_pane

0x2cff,	// (0x000138d6) form_field_slider_wide_pane_t1_ParamLimits

0x2cff,	// (0x000138d6) form_field_slider_wide_pane_t1

0x2d11,	// (0x000138e8) form_field_slider_wide_pane_t2_ParamLimits

0x2d11,	// (0x000138e8) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x00020232) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x00020232) form_field_slider_wide_pane_t

0x20a7,	// (0x00012c7e) input_focus_pane_cp10_ParamLimits

0x20a7,	// (0x00012c7e) input_focus_pane_cp10

0xca10,	// (0x0001d5e7) slider_cont_pane_cp1_ParamLimits

0xca10,	// (0x0001d5e7) slider_cont_pane_cp1

0xca24,	// (0x0001d5fb) slider_form_pane_cp

0x2d3f,	// (0x00013916) input_focus_pane_g1

0x2d47,	// (0x0001391e) input_focus_pane_g2

0x2d4f,	// (0x00013926) input_focus_pane_g3

0x2d57,	// (0x0001392e) input_focus_pane_g4

0x2d5f,	// (0x00013936) input_focus_pane_g5

0x2d67,	// (0x0001393e) input_focus_pane_g6

0x2d6f,	// (0x00013946) input_focus_pane_g7

0x2d77,	// (0x0001394e) input_focus_pane_g8

0x2d7f,	// (0x00013956) input_focus_pane_g9

0xe88b,	// (0x0001f462) input_focus_pane_g10

0x0009,

0xf660,	// (0x00020237) input_focus_pane_g

0x4a60,	// (0x00015637) wait_border_pane_g3_copy1

0xca2c,	// (0x0001d603) data_form_pane_t1

0xe88b,	// (0x0001f462) wait_anim_pane_g1_copy1

0xd52f,	// (0x0001e106) data_form_wide_pane_t1

0xca46,	// (0x0001d61d) list_form_graphic_pane_cp_ParamLimits

0xca46,	// (0x0001d61d) list_form_graphic_pane_cp

0x5982,	// (0x00016559) slider_form_pane_g1

0x598b,	// (0x00016562) slider_form_pane_g2

0x0006,

0xf95e,	// (0x00020535) slider_form_pane_g

0xca46,	// (0x0001d61d) list_form_graphic_pane_ParamLimits

0xca46,	// (0x0001d61d) list_form_graphic_pane

0x2dd7,	// (0x000139ae) list_form_graphic_pane_g1

0x2ddf,	// (0x000139b6) list_form_graphic_pane_t1_ParamLimits

0x2ddf,	// (0x000139b6) list_form_graphic_pane_t1

0x1e12,	// (0x000129e9) list_highlight_pane_cp5_ParamLimits

0x1e12,	// (0x000129e9) list_highlight_pane_cp5

0x2df4,	// (0x000139cb) find_pane_g1

0x2dfd,	// (0x000139d4) input_find_pane

0x2e06,	// (0x000139dd) input_find_pane_g1_ParamLimits

0x2e06,	// (0x000139dd) input_find_pane_g1

0x2e12,	// (0x000139e9) input_find_pane_t1_ParamLimits

0x2e12,	// (0x000139e9) input_find_pane_t1

0x2e27,	// (0x000139fe) input_find_pane_t2_ParamLimits

0x2e27,	// (0x000139fe) input_find_pane_t2

0x0001,

0xf675,	// (0x0002024c) input_find_pane_t_ParamLimits

0xf675,	// (0x0002024c) input_find_pane_t

0x2e3c,	// (0x00013a13) input_focus_pane_cp5_ParamLimits

0x2e3c,	// (0x00013a13) input_focus_pane_cp5

0x2e5b,	// (0x00013a32) bg_popup_window_pane_cp2_ParamLimits

0x2e5b,	// (0x00013a32) bg_popup_window_pane_cp2

0x2e68,	// (0x00013a3f) listscroll_menu_pane_ParamLimits

0x2e68,	// (0x00013a3f) listscroll_menu_pane

0xca64,	// (0x0001d63b) popup_submenu_window_ParamLimits

0xca64,	// (0x0001d63b) popup_submenu_window

0x2ea0,	// (0x00013a77) find_popup_pane_g1

0x2ea8,	// (0x00013a7f) input_popup_find_pane_cp

0x2eb2,	// (0x00013a89) input_focus_pane_cp4_ParamLimits

0x2eb2,	// (0x00013a89) input_focus_pane_cp4

0x2ecc,	// (0x00013aa3) input_popup_find_pane_t1_ParamLimits

0x2ecc,	// (0x00013aa3) input_popup_find_pane_t1

0xe895,	// (0x0001f46c) bg_popup_sub_pane_cp

0x2efa,	// (0x00013ad1) listscroll_popup_sub_pane

0x2f02,	// (0x00013ad9) list_submenu_pane_ParamLimits

0x2f02,	// (0x00013ad9) list_submenu_pane

0x2f13,	// (0x00013aea) scroll_pane_cp4

0x2f1b,	// (0x00013af2) list_single_popup_submenu_pane_ParamLimits

0x2f1b,	// (0x00013af2) list_single_popup_submenu_pane

0x2f2f,	// (0x00013b06) list_single_popup_submenu_pane_g1

0x2f37,	// (0x00013b0e) list_single_popup_submenu_pane_t1_ParamLimits

0x2f37,	// (0x00013b0e) list_single_popup_submenu_pane_t1

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp1_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp1

0x2f4c,	// (0x00013b23) tabs_2_active_pane_g1

0xca9e,	// (0x0001d675) tabs_2_active_pane_t1

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp1_ParamLimits

0x20a7,	// (0x00012c7e) bg_passive_tab_pane_cp1

0x2f4c,	// (0x00013b23) tabs_2_passive_pane_g1

0xca9e,	// (0x0001d675) tabs_2_passive_pane_t1

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp4

0xcab0,	// (0x0001d687) tabs_2_long_active_pane_t1

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp4

0x0783,	// (0x0001135a) list_single_midp_graphic_pane_g4_ParamLimits

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp5

0xcac3,	// (0x0001d69a) tabs_3_long_active_pane_t1

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp5

0x0783,	// (0x0001135a) list_single_midp_graphic_pane_g4

0x1e12,	// (0x000129e9) bg_popup_window_pane_cp13_ParamLimits

0x1e12,	// (0x000129e9) bg_popup_window_pane_cp13

0x2fae,	// (0x00013b85) listscroll_popup_fast_pane_ParamLimits

0x2fae,	// (0x00013b85) listscroll_popup_fast_pane

0x2fbd,	// (0x00013b94) grid_popup_fast_pane_ParamLimits

0x2fbd,	// (0x00013b94) grid_popup_fast_pane

0x2fcf,	// (0x00013ba6) scroll_pane_cp9_ParamLimits

0x2fcf,	// (0x00013ba6) scroll_pane_cp9

0x78a5,	// (0x0001847c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x78a5,	// (0x0001847c) list_single_graphic_hl_pane_t1_cp2

0x2ff3,	// (0x00013bca) input_focus_pane_cp20_ParamLimits

0x2ff3,	// (0x00013bca) input_focus_pane_cp20

0x3001,	// (0x00013bd8) query_popup_data_pane_t1_ParamLimits

0x3001,	// (0x00013bd8) query_popup_data_pane_t1

0x3014,	// (0x00013beb) query_popup_data_pane_t2_ParamLimits

0x3014,	// (0x00013beb) query_popup_data_pane_t2

0x305a,	// (0x00013c31) query_popup_data_pane_t3_ParamLimits

0x305a,	// (0x00013c31) query_popup_data_pane_t3

0x309b,	// (0x00013c72) query_popup_data_pane_t4_ParamLimits

0x309b,	// (0x00013c72) query_popup_data_pane_t4

0x30d7,	// (0x00013cae) query_popup_data_pane_t5_ParamLimits

0x30d7,	// (0x00013cae) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x00020251) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x00020251) query_popup_data_pane_t

0x2d3f,	// (0x00013916) bg_set_opt_pane_g1

0x2d47,	// (0x0001391e) bg_set_opt_pane_g2

0x2d4f,	// (0x00013926) bg_set_opt_pane_g3

0x2d57,	// (0x0001392e) bg_set_opt_pane_g4

0x2d5f,	// (0x00013936) bg_set_opt_pane_g5

0x2d67,	// (0x0001393e) bg_set_opt_pane_g6

0x2d6f,	// (0x00013946) bg_set_opt_pane_g7

0x2d77,	// (0x0001394e) bg_set_opt_pane_g8

0x2d7f,	// (0x00013956) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0002025c) bg_set_opt_pane_g

0xf32e,	// (0x0001ff05) control_top_pane_stacon_ParamLimits

0xf32e,	// (0x0001ff05) control_top_pane_stacon

0xf381,	// (0x0001ff58) signal_pane_stacon_ParamLimits

0xf381,	// (0x0001ff58) signal_pane_stacon

0x3771,	// (0x00014348) stacon_top_pane_g1_ParamLimits

0x3771,	// (0x00014348) stacon_top_pane_g1

0xf3a6,	// (0x0001ff7d) title_pane_stacon_ParamLimits

0xf3a6,	// (0x0001ff7d) title_pane_stacon

0xf3d0,	// (0x0001ffa7) uni_indicator_pane_stacon_ParamLimits

0xf3d0,	// (0x0001ffa7) uni_indicator_pane_stacon

0xf3e5,	// (0x0001ffbc) battery_pane_stacon_ParamLimits

0xf3e5,	// (0x0001ffbc) battery_pane_stacon

0xf429,	// (0x00020000) control_bottom_pane_stacon_ParamLimits

0xf429,	// (0x00020000) control_bottom_pane_stacon

0xf44c,	// (0x00020023) navi_pane_stacon_ParamLimits

0xf44c,	// (0x00020023) navi_pane_stacon

0x3793,	// (0x0001436a) stacon_bottom_pane_g1_ParamLimits

0x3793,	// (0x0001436a) stacon_bottom_pane_g1

0xf091,	// (0x0001fc68) aid_levels_signal_lsc_ParamLimits

0xf091,	// (0x0001fc68) aid_levels_signal_lsc

0xf0a7,	// (0x0001fc7e) signal_pane_stacon_g1_ParamLimits

0xf0a7,	// (0x0001fc7e) signal_pane_stacon_g1

0xf0bb,	// (0x0001fc92) signal_pane_stacon_g2_ParamLimits

0xf0bb,	// (0x0001fc92) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0002026f) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0002026f) signal_pane_stacon_g

0xf0f0,	// (0x0001fcc7) title_pane_stacon_t1_ParamLimits

0xf0f0,	// (0x0001fcc7) title_pane_stacon_t1

0x311b,	// (0x00013cf2) uni_indicator_pane_stacon_g1

0x3125,	// (0x00013cfc) uni_indicator_pane_stacon_g2

0x312f,	// (0x00013d06) uni_indicator_pane_stacon_g3

0x3139,	// (0x00013d10) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0002027b) uni_indicator_pane_stacon_g

0xf115,	// (0x0001fcec) control_top_pane_stacon_g1

0xf11d,	// (0x0001fcf4) control_top_pane_stacon_t1_ParamLimits

0xf11d,	// (0x0001fcf4) control_top_pane_stacon_t1

0xf154,	// (0x0001fd2b) aid_levels_battery_lsc_ParamLimits

0xf154,	// (0x0001fd2b) aid_levels_battery_lsc

0xf16b,	// (0x0001fd42) battery_pane_stacon_g1_ParamLimits

0xf16b,	// (0x0001fd42) battery_pane_stacon_g1

0xf17e,	// (0x0001fd55) battery_pane_stacon_g2_ParamLimits

0xf17e,	// (0x0001fd55) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x00020284) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x00020284) battery_pane_stacon_g

0xf1bc,	// (0x0001fd93) navi_icon_pane_stacon

0xf1d0,	// (0x0001fda7) navi_navi_pane_stacon

0xf1bc,	// (0x0001fd93) navi_text_pane_stacon

0xf115,	// (0x0001fcec) control_bottom_pane_stacon_g1

0xf1e4,	// (0x0001fdbb) control_bottom_pane_stacon_t1_ParamLimits

0xf1e4,	// (0x0001fdbb) control_bottom_pane_stacon_t1

0xcad5,	// (0x0001d6ac) grid_app_pane_ParamLimits

0xcad5,	// (0x0001d6ac) grid_app_pane

0xcb0d,	// (0x0001d6e4) scroll_pane_cp15_ParamLimits

0xcb0d,	// (0x0001d6e4) scroll_pane_cp15

0xcb22,	// (0x0001d6f9) cell_app_pane_ParamLimits

0xcb22,	// (0x0001d6f9) cell_app_pane

0xcb67,	// (0x0001d73e) cell_app_pane_g1_ParamLimits

0xcb67,	// (0x0001d73e) cell_app_pane_g1

0x31de,	// (0x00013db5) cell_app_pane_g2_ParamLimits

0x31de,	// (0x00013db5) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x00020289) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x00020289) cell_app_pane_g

0xcb8b,	// (0x0001d762) cell_app_pane_t1_ParamLimits

0xcb8b,	// (0x0001d762) cell_app_pane_t1

0x3201,	// (0x00013dd8) grid_highlight_pane_ParamLimits

0x3201,	// (0x00013dd8) grid_highlight_pane

0x2d3f,	// (0x00013916) cell_highlight_pane_g1

0x2d47,	// (0x0001391e) cell_highlight_pane_g2

0x2d4f,	// (0x00013926) cell_highlight_pane_g3

0x2d57,	// (0x0001392e) cell_highlight_pane_g4

0x2d5f,	// (0x00013936) cell_highlight_pane_g5

0x2d67,	// (0x0001393e) cell_highlight_pane_g6

0x2d6f,	// (0x00013946) cell_highlight_pane_g7

0x2d77,	// (0x0001394e) cell_highlight_pane_g8

0x2d7f,	// (0x00013956) cell_highlight_pane_g9

0xe88b,	// (0x0001f462) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x00020237) cell_highlight_pane_g

0x3212,	// (0x00013de9) bg_scroll_pane

0xf22e,	// (0x0001fe05) scroll_handle_pane

0x3259,	// (0x00013e30) scroll_bg_pane_g1

0x326e,	// (0x00013e45) scroll_bg_pane_g2

0x3286,	// (0x00013e5d) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0002028e) scroll_bg_pane_g

0x329b,	// (0x00013e72) scroll_handle_focus_pane_ParamLimits

0x329b,	// (0x00013e72) scroll_handle_focus_pane

0x3259,	// (0x00013e30) scroll_handle_pane_g1

0x32a8,	// (0x00013e7f) scroll_handle_pane_g2

0x3286,	// (0x00013e5d) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x00020295) scroll_handle_pane_g

0x2eb2,	// (0x00013a89) bg_popup_sub_pane_cp21_ParamLimits

0x2eb2,	// (0x00013a89) bg_popup_sub_pane_cp21

0x32bc,	// (0x00013e93) popup_fep_japan_predictive_window_t1_ParamLimits

0x32bc,	// (0x00013e93) popup_fep_japan_predictive_window_t1

0x32d6,	// (0x00013ead) popup_fep_japan_predictive_window_t2_ParamLimits

0x32d6,	// (0x00013ead) popup_fep_japan_predictive_window_t2

0x3309,	// (0x00013ee0) popup_fep_japan_predictive_window_t3_ParamLimits

0x3309,	// (0x00013ee0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0002029c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0002029c) popup_fep_japan_predictive_window_t

0xe895,	// (0x0001f46c) bg_popup_sub_pane_cp23

0x3340,	// (0x00013f17) listscroll_japin_cand_pane

0x3348,	// (0x00013f1f) popup_fep_japan_candidate_window_t1

0x3356,	// (0x00013f2d) candidate_pane_ParamLimits

0x3356,	// (0x00013f2d) candidate_pane

0x3368,	// (0x00013f3f) scroll_pane_cp30

0x3370,	// (0x00013f47) list_single_popup_jap_candidate_pane_ParamLimits

0x3370,	// (0x00013f47) list_single_popup_jap_candidate_pane

0xe895,	// (0x0001f46c) list_highlight_pane_cp30

0x3385,	// (0x00013f5c) list_single_popup_jap_candidate_pane_t1

0x3394,	// (0x00013f6b) level_1_signal

0x33a6,	// (0x00013f7d) level_2_signal

0x33b9,	// (0x00013f90) level_3_signal

0x33cc,	// (0x00013fa3) level_4_signal

0x33df,	// (0x00013fb6) level_5_signal

0x33f2,	// (0x00013fc9) level_6_signal

0x3405,	// (0x00013fdc) level_7_signal

0x3394,	// (0x00013f6b) level_1_battery

0x33a6,	// (0x00013f7d) level_2_battery

0x33b9,	// (0x00013f90) level_3_battery

0x33cc,	// (0x00013fa3) level_4_battery

0x33df,	// (0x00013fb6) level_5_battery

0x33f2,	// (0x00013fc9) level_6_battery

0x3405,	// (0x00013fdc) level_7_battery

0x3430,	// (0x00014007) list_menu_pane_ParamLimits

0x3430,	// (0x00014007) list_menu_pane

0x3446,	// (0x0001401d) scroll_pane_cp25_ParamLimits

0x3446,	// (0x0001401d) scroll_pane_cp25

0x345f,	// (0x00014036) list_double2_graphic_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double2_graphic_pane_cp2

0x345f,	// (0x00014036) list_double2_large_graphic_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double2_large_graphic_pane_cp2

0x345f,	// (0x00014036) list_double2_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double2_pane_cp2

0x345f,	// (0x00014036) list_double_graphic_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double_graphic_pane_cp2

0x345f,	// (0x00014036) list_double_large_graphic_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double_large_graphic_pane_cp2

0x345f,	// (0x00014036) list_double_number_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double_number_pane_cp2

0x345f,	// (0x00014036) list_double_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double_pane_cp2

0xcba2,	// (0x0001d779) list_single_2graphic_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_2graphic_pane_cp2

0xcba2,	// (0x0001d779) list_single_graphic_heading_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_graphic_heading_pane_cp2

0xcba2,	// (0x0001d779) list_single_graphic_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_graphic_pane_cp2

0xcba2,	// (0x0001d779) list_single_heading_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_heading_pane_cp2

0x349c,	// (0x00014073) list_single_large_graphic_pane_cp2_ParamLimits

0x349c,	// (0x00014073) list_single_large_graphic_pane_cp2

0xcba2,	// (0x0001d779) list_single_number_heading_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_number_heading_pane_cp2

0xcba2,	// (0x0001d779) list_single_number_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_number_pane_cp2

0xcbb4,	// (0x0001d78b) list_single_pane_cp2_ParamLimits

0xcbb4,	// (0x0001d78b) list_single_pane_cp2

0x3531,	// (0x00014108) bg_popup_sub_pane_cp22

0xf2e0,	// (0x0001feb7) popup_side_volume_key_window_g1

0xf30a,	// (0x0001fee1) popup_side_volume_key_window_t1

0xf326,	// (0x0001fefd) volume_small_pane_cp1

0x20a7,	// (0x00012c7e) bg_popup_sub_pane_cp24_ParamLimits

0x20a7,	// (0x00012c7e) bg_popup_sub_pane_cp24

0x3547,	// (0x0001411e) fep_china_uni_candidate_pane_ParamLimits

0x3547,	// (0x0001411e) fep_china_uni_candidate_pane

0x355b,	// (0x00014132) fep_china_uni_entry_pane

0x356b,	// (0x00014142) popup_fep_china_uni_window_g1

0x3587,	// (0x0001415e) fep_china_uni_entry_pane_g1

0x358f,	// (0x00014166) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x000202cd) fep_china_uni_entry_pane_g

0x3597,	// (0x0001416e) fep_entry_item_pane

0x35a1,	// (0x00014178) fep_candidate_item_pane

0x35a9,	// (0x00014180) fep_china_uni_candidate_pane_g1

0x35b1,	// (0x00014188) fep_china_uni_candidate_pane_g2

0x35b9,	// (0x00014190) fep_china_uni_candidate_pane_g3

0x35c1,	// (0x00014198) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x000202d2) fep_china_uni_candidate_pane_g

0xe88b,	// (0x0001f462) fep_entry_item_pane_g1

0x35c9,	// (0x000141a0) fep_entry_item_pane_t1_ParamLimits

0x35c9,	// (0x000141a0) fep_entry_item_pane_t1

0x35df,	// (0x000141b6) fep_candidate_item_pane_t1_ParamLimits

0x35df,	// (0x000141b6) fep_candidate_item_pane_t1

0x35f4,	// (0x000141cb) fep_candidate_item_pane_t2_ParamLimits

0x35f4,	// (0x000141cb) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x000202db) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x000202db) fep_candidate_item_pane_t

0x1e12,	// (0x000129e9) list_highlight_pane_cp31_ParamLimits

0x1e12,	// (0x000129e9) list_highlight_pane_cp31

0x3606,	// (0x000141dd) level_1_signal_lsc

0x360f,	// (0x000141e6) level_2_signal_lsc

0x3618,	// (0x000141ef) level_3_signal_lsc

0x3621,	// (0x000141f8) level_4_signal_lsc

0x362a,	// (0x00014201) level_5_signal_lsc

0x3633,	// (0x0001420a) level_6_signal_lsc

0x363c,	// (0x00014213) level_7_signal_lsc

0x363c,	// (0x00014213) level_1_battery_lsc

0x3645,	// (0x0001421c) level_2_battery_lsc

0x364e,	// (0x00014225) level_3_battery_lsc

0x3657,	// (0x0001422e) level_4_battery_lsc

0x3660,	// (0x00014237) level_5_battery_lsc

0x3669,	// (0x00014240) level_6_battery_lsc

0x3606,	// (0x000141dd) level_7_battery_lsc

0x3672,	// (0x00014249) scroll_handle_focus_pane_g1

0x367b,	// (0x00014252) scroll_handle_focus_pane_g2

0x3684,	// (0x0001425b) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x000202e0) scroll_handle_focus_pane_g

0x368d,	// (0x00014264) list_single_2graphic_pane_g1_ParamLimits

0x368d,	// (0x00014264) list_single_2graphic_pane_g1

0xc605,	// (0x0001d1dc) list_single_2graphic_pane_g2_ParamLimits

0xc605,	// (0x0001d1dc) list_single_2graphic_pane_g2

0x2678,	// (0x0001324f) list_single_2graphic_pane_g3_ParamLimits

0x2678,	// (0x0001324f) list_single_2graphic_pane_g3

0x3699,	// (0x00014270) list_single_2graphic_pane_g4_ParamLimits

0x3699,	// (0x00014270) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x000202e7) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x000202e7) list_single_2graphic_pane_g

0x36aa,	// (0x00014281) list_single_2graphic_pane_t1_ParamLimits

0x36aa,	// (0x00014281) list_single_2graphic_pane_t1

0xcc41,	// (0x0001d818) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcc41,	// (0x0001d818) list_double2_graphic_large_graphic_pane_g1

0xc630,	// (0x0001d207) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc630,	// (0x0001d207) list_double2_graphic_large_graphic_pane_g2

0xc641,	// (0x0001d218) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc641,	// (0x0001d218) list_double2_graphic_large_graphic_pane_g3

0xcc53,	// (0x0001d82a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcc53,	// (0x0001d82a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x000202f0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x000202f0) list_double2_graphic_large_graphic_pane_g

0xcc5f,	// (0x0001d836) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcc5f,	// (0x0001d836) list_double2_graphic_large_graphic_pane_t1

0xcc75,	// (0x0001d84c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcc75,	// (0x0001d84c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x000202f9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x000202f9) list_double2_graphic_large_graphic_pane_t

0x385e,	// (0x00014435) popup_fast_swap_window_ParamLimits

0x385e,	// (0x00014435) popup_fast_swap_window

0x387a,	// (0x00014451) popup_side_volume_key_window

0x3896,	// (0x0001446d) stacon_top_pane

0x38a0,	// (0x00014477) status_pane_ParamLimits

0x38a0,	// (0x00014477) status_pane

0xe881,	// (0x0001f458) status_small_pane

0xe895,	// (0x0001f46c) control_pane

0xe895,	// (0x0001f46c) stacon_bottom_pane

0x2b21,	// (0x000136f8) scroll_pane_cp121

0x2b18,	// (0x000136ef) set_content_pane

0x371c,	// (0x000142f3) bg_active_tab_pane_g1_cp1

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp1

0x372e,	// (0x00014305) bg_active_tab_pane_g3_cp1

0x371c,	// (0x000142f3) bg_passive_tab_pane_g1_cp1

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp1

0x372e,	// (0x00014305) bg_passive_tab_pane_g3_cp1

0x3737,	// (0x0001430e) bg_active_tab_pane_g1_cp2

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp2

0x3740,	// (0x00014317) bg_active_tab_pane_g3_cp2

0x3737,	// (0x0001430e) bg_passive_tab_pane_g1_cp2

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp2

0x3740,	// (0x00014317) bg_passive_tab_pane_g3_cp2

0x3749,	// (0x00014320) bg_active_tab_pane_g1_cp3

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp3

0x3752,	// (0x00014329) bg_active_tab_pane_g3_cp3

0x3749,	// (0x00014320) bg_passive_tab_pane_g1_cp3

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp3

0x3752,	// (0x00014329) bg_passive_tab_pane_g3_cp3

0x375b,	// (0x00014332) bg_active_tab_pane_g1_cp4

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp4

0x3766,	// (0x0001433d) bg_active_tab_pane_g3_cp4

0x375b,	// (0x00014332) bg_passive_tab_pane_g1_cp4

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp4

0x3766,	// (0x0001433d) bg_passive_tab_pane_g3_cp4

0x37af,	// (0x00014386) bg_active_tab_pane_g1_cp5

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp5

0x37b8,	// (0x0001438f) bg_active_tab_pane_g3_cp5

0x37af,	// (0x00014386) bg_passive_tab_pane_g1_cp5

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp5

0x37b8,	// (0x0001438f) bg_passive_tab_pane_g3_cp5

0x60b0,	// (0x00016c87) list_set_graphic_pane_ParamLimits

0x60b0,	// (0x00016c87) list_set_graphic_pane

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp4

0x37e1,	// (0x000143b8) list_set_graphic_pane_g1_ParamLimits

0x37e1,	// (0x000143b8) list_set_graphic_pane_g1

0x37ed,	// (0x000143c4) list_set_graphic_pane_g2_ParamLimits

0x37ed,	// (0x000143c4) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x000202fe) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x000202fe) list_set_graphic_pane_g

0x0009,

0xfa97,	// (0x0002066e) volume_small_pane_cp_g

0x3811,	// (0x000143e8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3811,	// (0x000143e8) list_double2_large_graphic_pane_g1_cp2

0x381d,	// (0x000143f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x381d,	// (0x000143f4) list_double2_large_graphic_pane_g2_cp2

0x382e,	// (0x00014405) list_double2_large_graphic_pane_g3_cp2

0x3836,	// (0x0001440d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3836,	// (0x0001440d) list_double2_large_graphic_pane_t1_cp2

0x384c,	// (0x00014423) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x384c,	// (0x00014423) list_double2_large_graphic_pane_t2_cp2

0x5533,	// (0x0001610a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5533,	// (0x0001610a) list_double_large_graphic_pane_g1_cp2

0x5544,	// (0x0001611b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5544,	// (0x0001611b) list_double_large_graphic_pane_g2_cp2

0x39bc,	// (0x00014593) list_double_large_graphic_pane_g3_cp2

0x5555,	// (0x0001612c) list_double_large_graphic_pane_g4_cp

0x555d,	// (0x00016134) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x555d,	// (0x00016134) list_double_large_graphic_pane_t1_cp2

0x5574,	// (0x0001614b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5574,	// (0x0001614b) list_double_large_graphic_pane_t2_cp2

0x38ae,	// (0x00014485) list_double2_graphic_pane_g1_cp2_ParamLimits

0x38ae,	// (0x00014485) list_double2_graphic_pane_g1_cp2

0x38bc,	// (0x00014493) list_double2_graphic_pane_g2_cp2_ParamLimits

0x38bc,	// (0x00014493) list_double2_graphic_pane_g2_cp2

0x38cd,	// (0x000144a4) list_double2_graphic_pane_g3_cp2

0x38d7,	// (0x000144ae) list_double2_graphic_pane_t1_cp2_ParamLimits

0x38d7,	// (0x000144ae) list_double2_graphic_pane_t1_cp2

0x38ed,	// (0x000144c4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x38ed,	// (0x000144c4) list_double2_graphic_pane_t2_cp2

0x38ff,	// (0x000144d6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x38ff,	// (0x000144d6) list_single_number_heading_pane_g1_cp2

0x390b,	// (0x000144e2) list_single_number_heading_pane_g2_cp2

0x3913,	// (0x000144ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3913,	// (0x000144ea) list_single_number_heading_pane_t1_cp2

0x3929,	// (0x00014500) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3929,	// (0x00014500) list_single_number_heading_pane_t2_cp2

0x393b,	// (0x00014512) list_single_number_heading_pane_t3_cp2_ParamLimits

0x393b,	// (0x00014512) list_single_number_heading_pane_t3_cp2

0x38ff,	// (0x000144d6) list_single_heading_pane_g1_cp2_ParamLimits

0x38ff,	// (0x000144d6) list_single_heading_pane_g1_cp2

0x390b,	// (0x000144e2) list_single_heading_pane_g2_cp2

0x3913,	// (0x000144ea) list_single_heading_pane_t1_cp2_ParamLimits

0x3913,	// (0x000144ea) list_single_heading_pane_t1_cp2

0x533b,	// (0x00015f12) list_single_heading_pane_t2_cp2_ParamLimits

0x533b,	// (0x00015f12) list_single_heading_pane_t2_cp2

0x5283,	// (0x00015e5a) list_double_graphic_pane_g1_cp2_ParamLimits

0x5283,	// (0x00015e5a) list_double_graphic_pane_g1_cp2

0x528f,	// (0x00015e66) list_double_graphic_pane_g2_cp2_ParamLimits

0x528f,	// (0x00015e66) list_double_graphic_pane_g2_cp2

0x529e,	// (0x00015e75) list_double_graphic_pane_g3_cp2

0x52a6,	// (0x00015e7d) list_double_graphic_pane_t1_cp2_ParamLimits

0x52a6,	// (0x00015e7d) list_double_graphic_pane_t1_cp2

0x52bc,	// (0x00015e93) list_double_graphic_pane_t2_cp2_ParamLimits

0x52bc,	// (0x00015e93) list_double_graphic_pane_t2_cp2

0x39b0,	// (0x00014587) list_double_number_pane_g1_cp2_ParamLimits

0x39b0,	// (0x00014587) list_double_number_pane_g1_cp2

0x39bc,	// (0x00014593) list_double_number_pane_g2_cp2

0x5247,	// (0x00015e1e) list_double_number_pane_t1_cp2_ParamLimits

0x5247,	// (0x00015e1e) list_double_number_pane_t1_cp2

0x525b,	// (0x00015e32) list_double_number_pane_t2_cp2_ParamLimits

0x525b,	// (0x00015e32) list_double_number_pane_t2_cp2

0x5271,	// (0x00015e48) list_double_number_pane_t3_cp2_ParamLimits

0x5271,	// (0x00015e48) list_double_number_pane_t3_cp2

0x5130,	// (0x00015d07) list_single_graphic_pane_g1_cp2_ParamLimits

0x5130,	// (0x00015d07) list_single_graphic_pane_g1_cp2

0x3a21,	// (0x000145f8) list_single_graphic_pane_g2_cp2_ParamLimits

0x3a21,	// (0x000145f8) list_single_graphic_pane_g2_cp2

0x3a2d,	// (0x00014604) list_single_graphic_pane_g3_cp2

0x5106,	// (0x00015cdd) list_single_graphic_pane_t1_cp2_ParamLimits

0x5106,	// (0x00015cdd) list_single_graphic_pane_t1_cp2

0x3a21,	// (0x000145f8) list_single_number_pane_g1_cp2_ParamLimits

0x3a21,	// (0x000145f8) list_single_number_pane_g1_cp2

0x3a2d,	// (0x00014604) list_single_number_pane_g2_cp2

0x5106,	// (0x00015cdd) list_single_number_pane_t1_cp2_ParamLimits

0x5106,	// (0x00015cdd) list_single_number_pane_t1_cp2

0x511c,	// (0x00015cf3) list_single_number_pane_t2_cp2_ParamLimits

0x511c,	// (0x00015cf3) list_single_number_pane_t2_cp2

0x381d,	// (0x000143f4) list_double2_pane_g1_cp2_ParamLimits

0x381d,	// (0x000143f4) list_double2_pane_g1_cp2

0x382e,	// (0x00014405) list_double2_pane_g2_cp2

0x3988,	// (0x0001455f) list_double2_pane_t1_cp2_ParamLimits

0x3988,	// (0x0001455f) list_double2_pane_t1_cp2

0x399e,	// (0x00014575) list_double2_pane_t2_cp2_ParamLimits

0x399e,	// (0x00014575) list_double2_pane_t2_cp2

0x39b0,	// (0x00014587) list_double_pane_g1_cp2_ParamLimits

0x39b0,	// (0x00014587) list_double_pane_g1_cp2

0x39bc,	// (0x00014593) list_double_pane_g2_cp2

0x39c4,	// (0x0001459b) list_double_pane_t1_cp2_ParamLimits

0x39c4,	// (0x0001459b) list_double_pane_t1_cp2

0x39da,	// (0x000145b1) list_double_pane_t2_cp2_ParamLimits

0x39da,	// (0x000145b1) list_double_pane_t2_cp2

0x3a11,	// (0x000145e8) list_single_pane_cp2_g3

0x3a21,	// (0x000145f8) list_single_pane_g1_cp2_ParamLimits

0x3a21,	// (0x000145f8) list_single_pane_g1_cp2

0x3a2d,	// (0x00014604) list_single_pane_g2_cp2

0x3a35,	// (0x0001460c) list_single_pane_t1_cp2_ParamLimits

0x3a35,	// (0x0001460c) list_single_pane_t1_cp2

0x3a4d,	// (0x00014624) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3a4d,	// (0x00014624) list_single_large_graphic_pane_g1_cp2

0x266c,	// (0x00013243) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x266c,	// (0x00013243) list_single_large_graphic_pane_g2_cp2

0x3a59,	// (0x00014630) list_single_large_graphic_pane_g3_cp2

0x3a61,	// (0x00014638) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3a61,	// (0x00014638) list_single_large_graphic_pane_g4_cp1

0x3a7b,	// (0x00014652) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3a7b,	// (0x00014652) list_single_large_graphic_pane_t1_cp2

0x50d2,	// (0x00015ca9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x50d2,	// (0x00015ca9) list_single_graphic_heading_pane_g1_cp2

0x509f,	// (0x00015c76) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x509f,	// (0x00015c76) list_single_graphic_heading_pane_g4_cp2

0x3a2d,	// (0x00014604) list_single_graphic_heading_pane_g5_cp2

0x50de,	// (0x00015cb5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x50de,	// (0x00015cb5) list_single_graphic_heading_pane_t1_cp2

0x50f4,	// (0x00015ccb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x50f4,	// (0x00015ccb) list_single_graphic_heading_pane_t2_cp2

0x5093,	// (0x00015c6a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5093,	// (0x00015c6a) list_single_2graphic_pane_g1_cp2

0x509f,	// (0x00015c76) list_single_2graphic_pane_g2_cp2_ParamLimits

0x509f,	// (0x00015c76) list_single_2graphic_pane_g2_cp2

0x3a2d,	// (0x00014604) list_single_2graphic_pane_g3_cp2

0x50b0,	// (0x00015c87) list_single_2graphic_pane_g4_cp2_ParamLimits

0x50b0,	// (0x00015c87) list_single_2graphic_pane_g4_cp2

0x50bc,	// (0x00015c93) list_single_2graphic_pane_t1_cp2_ParamLimits

0x50bc,	// (0x00015c93) list_single_2graphic_pane_t1_cp2

0xe88b,	// (0x0001f462) list_highlight_pane_g10_cp1

0x4c6b,	// (0x00015842) list_highlight_pane_g1_cp1

0x4c73,	// (0x0001584a) list_highlight_pane_g2_cp1

0x4c7b,	// (0x00015852) list_highlight_pane_g3_cp1

0x4c83,	// (0x0001585a) list_highlight_pane_g4_cp1

0x4c8b,	// (0x00015862) list_highlight_pane_g5_cp1

0x4c93,	// (0x0001586a) list_highlight_pane_g6_cp1

0x4c9b,	// (0x00015872) list_highlight_pane_g7_cp1

0x4ca3,	// (0x0001587a) list_highlight_pane_g8_cp1

0x4cab,	// (0x00015882) list_highlight_pane_g9_cp1

0xd259,	// (0x0001de30) form_field_slider_pane_t3

0xd267,	// (0x0001de3e) form_field_slider_pane_t4

0x4ba7,	// (0x0001577e) slider_form_pane_ParamLimits

0x4ba7,	// (0x0001577e) slider_form_pane

0xe895,	// (0x0001f46c) control_abbreviations

0xe895,	// (0x0001f46c) control_conventions

0xe895,	// (0x0001f46c) control_definitions

0xe895,	// (0x0001f46c) format_table_attribute

0x5385,	// (0x00015f5c) bg_popup_preview_window_pane_g9

0xe895,	// (0x0001f46c) format_table_data2

0xe895,	// (0x0001f46c) format_table_data3

0xe895,	// (0x0001f46c) format_table_data_example

0x0008,

0xe895,	// (0x0001f46c) intro_purpose

0xf8be,	// (0x00020495) bg_popup_preview_window_pane_g

0xe895,	// (0x0001f46c) texts_category

0xe895,	// (0x0001f46c) texts_graphics

0x3a91,	// (0x00014668) text_digital

0x3aa0,	// (0x00014677) text_primary

0x3aaf,	// (0x00014686) text_primary_small

0x3abe,	// (0x00014695) text_secondary

0x3acd,	// (0x000146a4) text_title

0x5b8f,	// (0x00016766) bg_passive_tab_pane_g1_cp3_srt

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp3_srt

0x5b98,	// (0x0001676f) bg_passive_tab_pane_g3_cp3_srt

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp3_srt_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp3_srt

0x5ba1,	// (0x00016778) tabs_4_active_pane_srt_g1

0xd5da,	// (0x0001e1b1) tabs_4_active_pane_srt_t1_ParamLimits

0xd5da,	// (0x0001e1b1) tabs_4_active_pane_srt_t1

0x5b8f,	// (0x00016766) bg_active_tab_pane_g1_cp3_copy1

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp3_copy1

0x5b98,	// (0x0001676f) bg_active_tab_pane_g3_cp3_copy1

0x1e12,	// (0x000129e9) tabs_2_long_active_pane_srt_ParamLimits

0x1e12,	// (0x000129e9) tabs_2_long_active_pane_srt

0x1e12,	// (0x000129e9) tabs_2_long_passive_pane_srt_ParamLimits

0x1e12,	// (0x000129e9) tabs_2_long_passive_pane_srt

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp4_srt

0x57b5,	// (0x0001638c) bg_passive_tab_pane_g1_cp4_srt

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp4_srt

0x57be,	// (0x00016395) bg_passive_tab_pane_g3_cp4_srt

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp4_srt

0xd3c4,	// (0x0001df9b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd3c4,	// (0x0001df9b) tabs_2_long_active_pane_srt_t1

0x57b5,	// (0x0001638c) bg_active_tab_pane_g1_cp4_srt

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp4_srt

0x57be,	// (0x00016395) bg_active_tab_pane_g3_cp4_srt

0x20a7,	// (0x00012c7e) tabs_3_long_active_pane_srt_ParamLimits

0x20a7,	// (0x00012c7e) tabs_3_long_active_pane_srt

0x20a7,	// (0x00012c7e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x20a7,	// (0x00012c7e) tabs_3_long_passive_pane_cp_srt

0x20a7,	// (0x00012c7e) tabs_3_long_passive_pane_srt_ParamLimits

0x20a7,	// (0x00012c7e) tabs_3_long_passive_pane_srt

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp5_srt

0x37af,	// (0x00014386) bg_passive_tab_pane_g1_cp5_srt

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp5_srt

0x37b8,	// (0x0001438f) bg_passive_tab_pane_g3_cp5_srt

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp5_srt

0xd3ae,	// (0x0001df85) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd3ae,	// (0x0001df85) tabs_3_long_active_pane_srt_t1

0x37af,	// (0x00014386) bg_active_tab_pane_g1_cp5_srt

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp5_srt

0x37b8,	// (0x0001438f) bg_active_tab_pane_g3_cp5_srt

0x5795,	// (0x0001636c) navi_text_pane_srt_t1

0x578d,	// (0x00016364) navi_icon_pane_srt_g1

0x3ca2,	// (0x00014879) midp_editing_number_pane_srt

0x3adc,	// (0x000146b3) midp_ticker_pane_srt

0x3caa,	// (0x00014881) midp_ticker_pane_srt_g1

0x3cb2,	// (0x00014889) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0002031d) midp_ticker_pane_srt_g

0x3cba,	// (0x00014891) midp_ticker_pane_srt_t1

0x577e,	// (0x00016355) midp_editing_number_pane_t1_copy1

0xcc87,	// (0x0001d85e) listscroll_midp_pane

0xcc87,	// (0x0001d85e) midp_form_pane

0x3b54,	// (0x0001472b) midp_info_popup_window_ParamLimits

0x3b54,	// (0x0001472b) midp_info_popup_window

0x2eb2,	// (0x00013a89) bg_popup_sub_pane_cp50_ParamLimits

0x2eb2,	// (0x00013a89) bg_popup_sub_pane_cp50

0x488f,	// (0x00015466) listscroll_midp_info_pane_ParamLimits

0x488f,	// (0x00015466) listscroll_midp_info_pane

0x486f,	// (0x00015446) listscroll_form_midp_pane_ParamLimits

0x486f,	// (0x00015446) listscroll_form_midp_pane

0x487b,	// (0x00015452) scroll_bar_cp050

0x486f,	// (0x00015446) list_midp_pane

0x6913,	// (0x000174ea) signal_pane_g2_cp

0x4789,	// (0x00015360) listscroll_midp_info_pane_t1_ParamLimits

0x4789,	// (0x00015360) listscroll_midp_info_pane_t1

0x47a1,	// (0x00015378) listscroll_midp_info_pane_t2_ParamLimits

0x47a1,	// (0x00015378) listscroll_midp_info_pane_t2

0x47df,	// (0x000153b6) listscroll_midp_info_pane_t3_ParamLimits

0x47df,	// (0x000153b6) listscroll_midp_info_pane_t3

0x4819,	// (0x000153f0) listscroll_midp_info_pane_t4_ParamLimits

0x4819,	// (0x000153f0) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x000203d0) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x000203d0) listscroll_midp_info_pane_t

0x2f13,	// (0x00013aea) scroll_pane_cp21

0x4727,	// (0x000152fe) form_midp_field_choice_group_pane

0x4730,	// (0x00015307) form_midp_field_text_pane

0x476f,	// (0x00015346) form_midp_field_time_pane

0x4777,	// (0x0001534e) form_midp_gauge_slider_pane

0x4780,	// (0x00015357) form_midp_gauge_wait_pane

0xe895,	// (0x0001f46c) form_midp_image_pane

0xd243,	// (0x0001de1a) list_single_midp_pane_ParamLimits

0xd243,	// (0x0001de1a) list_single_midp_pane

0xd222,	// (0x0001ddf9) form_midp_field_text_pane_t1

0x4472,	// (0x00015049) input_focus_pane_cp050

0x46e8,	// (0x000152bf) list_midp_form_text_pane

0x4680,	// (0x00015257) form_midp_field_choice_group_pane_t1

0x468e,	// (0x00015265) input_focus_pane_cp051

0x46a2,	// (0x00015279) list_midp_choice_pane

0xe895,	// (0x0001f46c) status_idle_pane

0x4664,	// (0x0001523b) form_midp_field_time_pane_t1

0xe88b,	// (0x0001f462) wait_anim_pane_g2_copy1

0x4672,	// (0x00015249) form_midp_field_time_pane_t2

0x0001,

0x3c02,	// (0x000147d9) aid_navinavi_width_2_pane

0xf7f4,	// (0x000203cb) form_midp_field_time_pane_t

0xe895,	// (0x0001f46c) input_focus_pane_cp052

0xe895,	// (0x0001f46c) bg_input_focus_pane_cp040

0x4624,	// (0x000151fb) form_midp_gauge_slider_pane_t1

0x4632,	// (0x00015209) form_midp_gauge_slider_pane_t2

0xd206,	// (0x0001dddd) form_midp_gauge_slider_pane_t3

0xd214,	// (0x0001ddeb) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x000203c2) form_midp_gauge_slider_pane_t

0x465c,	// (0x00015233) form_midp_slider_pane

0x1e12,	// (0x000129e9) bg_input_focus_pane_cp041_ParamLimits

0x1e12,	// (0x000129e9) bg_input_focus_pane_cp041

0x45f1,	// (0x000151c8) form_midp_gauge_wait_pane_t1_ParamLimits

0x45f1,	// (0x000151c8) form_midp_gauge_wait_pane_t1

0x4603,	// (0x000151da) form_midp_gauge_wait_pane_t2_ParamLimits

0x4603,	// (0x000151da) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x000203bd) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x000203bd) form_midp_gauge_wait_pane_t

0x4615,	// (0x000151ec) form_midp_wait_pane_ParamLimits

0x4615,	// (0x000151ec) form_midp_wait_pane

0x45bb,	// (0x00015192) form_midp_image_pane_g1

0x45c4,	// (0x0001519b) form_midp_image_pane_t1

0x45d3,	// (0x000151aa) form_midp_image_pane_t2

0x45e2,	// (0x000151b9) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x000203b6) form_midp_image_pane_t

0x45a3,	// (0x0001517a) list_single_midp_pane_g1

0x45ac,	// (0x00015183) list_single_midp_pane_t1

0xd1f2,	// (0x0001ddc9) list_midp_form_item_pane_ParamLimits

0xd1f2,	// (0x0001ddc9) list_midp_form_item_pane

0x3baa,	// (0x00014781) list_midp_form_item_pane_t1

0x3bb9,	// (0x00014790) midp_ticker_pane_g1

0x3bc5,	// (0x0001479c) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x00020303) midp_ticker_pane_g

0x3bd1,	// (0x000147a8) midp_ticker_pane_t1

0x5a02,	// (0x000165d9) midp_editing_number_pane_t1

0x59e0,	// (0x000165b7) midp_editing_number_pane

0x59ef,	// (0x000165c6) midp_ticker_pane

0x489b,	// (0x00015472) ai_message_heading_pane

0xe895,	// (0x0001f46c) bg_popup_window_pane_cp14

0x48a3,	// (0x0001547a) listscroll_ai_message_pane

0x56f6,	// (0x000162cd) ai_message_heading_pane_g1_ParamLimits

0x56f6,	// (0x000162cd) ai_message_heading_pane_g1

0x5702,	// (0x000162d9) ai_message_heading_pane_g2_ParamLimits

0x5702,	// (0x000162d9) ai_message_heading_pane_g2

0x570e,	// (0x000162e5) ai_message_heading_pane_g3_ParamLimits

0x570e,	// (0x000162e5) ai_message_heading_pane_g3

0x571a,	// (0x000162f1) ai_message_heading_pane_g4_ParamLimits

0x571a,	// (0x000162f1) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x000204f7) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x000204f7) ai_message_heading_pane_g

0x5726,	// (0x000162fd) ai_message_heading_pane_t1_ParamLimits

0x5726,	// (0x000162fd) ai_message_heading_pane_t1

0x5740,	// (0x00016317) ai_message_heading_pane_t2_ParamLimits

0x5740,	// (0x00016317) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x00020500) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x00020500) ai_message_heading_pane_t

0x5752,	// (0x00016329) bg_popup_heading_pane_cp1_ParamLimits

0x5752,	// (0x00016329) bg_popup_heading_pane_cp1

0x56e4,	// (0x000162bb) list_ai_message_pane_ParamLimits

0x56e4,	// (0x000162bb) list_ai_message_pane

0x2f13,	// (0x00013aea) scroll_pane_cp10

0x5680,	// (0x00016257) list_ai_message_pane_g1

0x5688,	// (0x0001625f) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x000204d4) list_ai_message_pane_g

0x5690,	// (0x00016267) list_ai_message_pane_t1_ParamLimits

0x5690,	// (0x00016267) list_ai_message_pane_t1

0x56a5,	// (0x0001627c) list_ai_message_pane_t2_ParamLimits

0x56a5,	// (0x0001627c) list_ai_message_pane_t2

0x56ba,	// (0x00016291) list_ai_message_pane_t3_ParamLimits

0x56ba,	// (0x00016291) list_ai_message_pane_t3

0x56cf,	// (0x000162a6) list_ai_message_pane_t4_ParamLimits

0x56cf,	// (0x000162a6) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x000204d9) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x000204d9) list_ai_message_pane_t

0xd38d,	// (0x0001df64) cell_ai_soft_ind_pane_ParamLimits

0xd38d,	// (0x0001df64) cell_ai_soft_ind_pane

0x3be3,	// (0x000147ba) cell_ai_soft_ind_pane_g1_ParamLimits

0x3be3,	// (0x000147ba) cell_ai_soft_ind_pane_g1

0xe895,	// (0x0001f46c) grid_highlight_cp1

0x3bf0,	// (0x000147c7) text_secondary_cp56_ParamLimits

0x3bf0,	// (0x000147c7) text_secondary_cp56

0x5640,	// (0x00016217) example_general_pane_ParamLimits

0x5640,	// (0x00016217) example_general_pane

0x564c,	// (0x00016223) example_parent_pane_g1_ParamLimits

0x564c,	// (0x00016223) example_parent_pane_g1

0x5658,	// (0x0001622f) example_parent_pane_t1_ParamLimits

0x5658,	// (0x0001622f) example_parent_pane_t1

0xb7ee,	// (0x0001c3c5) popup_preview_text_window_ParamLimits

0xb7ee,	// (0x0001c3c5) popup_preview_text_window

0x3a19,	// (0x000145f0) list_single_pane_cp2_g4

0x2183,	// (0x00012d5a) bg_popup_preview_window_pane_ParamLimits

0x2183,	// (0x00012d5a) bg_popup_preview_window_pane

0x538d,	// (0x00015f64) popup_preview_text_window_t1_ParamLimits

0x538d,	// (0x00015f64) popup_preview_text_window_t1

0x53ab,	// (0x00015f82) popup_preview_text_window_t2_ParamLimits

0x53ab,	// (0x00015f82) popup_preview_text_window_t2

0x53f4,	// (0x00015fcb) popup_preview_text_window_t3_ParamLimits

0x53f4,	// (0x00015fcb) popup_preview_text_window_t3

0x5439,	// (0x00016010) popup_preview_text_window_t4_ParamLimits

0x5439,	// (0x00016010) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x000204a8) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x000204a8) popup_preview_text_window_t

0x54b7,	// (0x0001608e) scroll_pane_cp11

0x4350,	// (0x00014f27) bg_popup_preview_window_pane_g1

0x534d,	// (0x00015f24) bg_popup_preview_window_pane_g2

0x5355,	// (0x00015f2c) bg_popup_preview_window_pane_g3

0x535d,	// (0x00015f34) bg_popup_preview_window_pane_g4

0x5365,	// (0x00015f3c) bg_popup_preview_window_pane_g5

0x536d,	// (0x00015f44) bg_popup_preview_window_pane_g6

0x5375,	// (0x00015f4c) bg_popup_preview_window_pane_g7

0x537d,	// (0x00015f54) bg_popup_preview_window_pane_g8

0xedf6,	// (0x0001f9cd) aid_popup_width_pane

0xb76a,	// (0x0001c341) popup_midp_note_alarm_window_ParamLimits

0xb76a,	// (0x0001c341) popup_midp_note_alarm_window

0x2be2,	// (0x000137b9) data_form_pane_ParamLimits

0xc989,	// (0x0001d560) form_field_data_pane_g1

0xc993,	// (0x0001d56a) form_field_data_pane_t1_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_ParamLimits

0x2c1e,	// (0x000137f5) data_form_wide_pane_ParamLimits

0x2c2a,	// (0x00013801) form_field_data_wide_pane_g1

0x2c56,	// (0x0001382d) form_field_data_wide_pane_t1_ParamLimits

0x242a,	// (0x00013001) input_focus_pane_cp6_ParamLimits

0xca90,	// (0x0001d667) input_popup_find_pane_g1_ParamLimits

0xca90,	// (0x0001d667) input_popup_find_pane_g1

0xf18f,	// (0x0001fd66) aid_navi_side_left_pane

0xf1a4,	// (0x0001fd7b) aid_navi_side_right_pane

0x4d66,	// (0x0001593d) bg_popup_window_pane_cp30_ParamLimits

0x4d66,	// (0x0001593d) bg_popup_window_pane_cp30

0x4de0,	// (0x000159b7) popup_midp_note_alarm_window_g1_ParamLimits

0x4de0,	// (0x000159b7) popup_midp_note_alarm_window_g1

0x4e10,	// (0x000159e7) popup_midp_note_alarm_window_t1_ParamLimits

0x4e10,	// (0x000159e7) popup_midp_note_alarm_window_t1

0x4eb1,	// (0x00015a88) popup_midp_note_alarm_window_t2_ParamLimits

0x4eb1,	// (0x00015a88) popup_midp_note_alarm_window_t2

0x4f5f,	// (0x00015b36) popup_midp_note_alarm_window_t3_ParamLimits

0x4f5f,	// (0x00015b36) popup_midp_note_alarm_window_t3

0x4f91,	// (0x00015b68) popup_midp_note_alarm_window_t4_ParamLimits

0x4f91,	// (0x00015b68) popup_midp_note_alarm_window_t4

0x4fb7,	// (0x00015b8e) popup_midp_note_alarm_window_t5_ParamLimits

0x4fb7,	// (0x00015b8e) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x00020445) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x00020445) popup_midp_note_alarm_window_t

0x5063,	// (0x00015c3a) wait_bar_pane_cp1_ParamLimits

0x5063,	// (0x00015c3a) wait_bar_pane_cp1

0xe895,	// (0x0001f46c) wait_anim_pane_copy1

0xe895,	// (0x0001f46c) wait_border_pane_copy1

0x4a4c,	// (0x00015623) wait_border_pane_g1_copy1

0x2c6d,	// (0x00013844) form_field_popup_pane_g1

0xc9ad,	// (0x0001d584) form_field_popup_pane_t1_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_cp7_ParamLimits

0x2c8d,	// (0x00013864) list_form_pane_ParamLimits

0x2c99,	// (0x00013870) form_field_popup_wide_pane_g1

0x2ca1,	// (0x00013878) form_field_popup_wide_pane_t1_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_cp8_ParamLimits

0x2cb3,	// (0x0001388a) list_form_wide_pane_ParamLimits

0x5c34,	// (0x0001680b) aid_size_cell_graphic_pane

0xca2c,	// (0x0001d603) data_form_pane_t1_ParamLimits

0xd52f,	// (0x0001e106) data_form_wide_pane_t1_ParamLimits

0xce79,	// (0x0001da50) bg_status_flat_pane

0xc2ab,	// (0x0001ce82) title_pane_t1_ParamLimits

0x1dda,	// (0x000129b1) title_pane_t2_ParamLimits

0x1e00,	// (0x000129d7) title_pane_t3_ParamLimits

0xf530,	// (0x00020107) title_pane_t_ParamLimits

0x3394,	// (0x00013f6b) level_1_signal_ParamLimits

0x33a6,	// (0x00013f7d) level_2_signal_ParamLimits

0x33b9,	// (0x00013f90) level_3_signal_ParamLimits

0x33cc,	// (0x00013fa3) level_4_signal_ParamLimits

0x33df,	// (0x00013fb6) level_5_signal_ParamLimits

0x33f2,	// (0x00013fc9) level_6_signal_ParamLimits

0x3405,	// (0x00013fdc) level_7_signal_ParamLimits

0x3394,	// (0x00013f6b) level_1_battery_ParamLimits

0x33a6,	// (0x00013f7d) level_2_battery_ParamLimits

0x33b9,	// (0x00013f90) level_3_battery_ParamLimits

0x33cc,	// (0x00013fa3) level_4_battery_ParamLimits

0x33df,	// (0x00013fb6) level_5_battery_ParamLimits

0x33f2,	// (0x00013fc9) level_6_battery_ParamLimits

0x3405,	// (0x00013fdc) level_7_battery_ParamLimits

0x4c6b,	// (0x00015842) bg_status_flat_pane_g1

0x4c73,	// (0x0001584a) bg_status_flat_pane_g2

0x4c7b,	// (0x00015852) bg_status_flat_pane_g3

0x4c83,	// (0x0001585a) bg_status_flat_pane_g4

0x4c8b,	// (0x00015862) bg_status_flat_pane_g5

0x4c93,	// (0x0001586a) bg_status_flat_pane_g6

0x4c9b,	// (0x00015872) bg_status_flat_pane_g7

0xc337,	// (0x0001cf0e) tabs_3_active_pane_t1_ParamLimits

0xc337,	// (0x0001cf0e) tabs_3_passive_pane_t1_ParamLimits

0xc349,	// (0x0001cf20) tabs_4_active_pane_t1_ParamLimits

0xc349,	// (0x0001cf20) tabs_4_1_passive_pane_t1_ParamLimits

0xca9e,	// (0x0001d675) tabs_2_active_pane_t1_ParamLimits

0xca9e,	// (0x0001d675) tabs_2_passive_pane_t1_ParamLimits

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp4_ParamLimits

0xcab0,	// (0x0001d687) tabs_2_long_active_pane_t1_ParamLimits

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp4_ParamLimits

0x07b7,	// (0x0001138e) list_single_midp_graphic_pane_t1_ParamLimits

0x1e12,	// (0x000129e9) bg_active_tab_pane_cp5_ParamLimits

0xcac3,	// (0x0001d69a) tabs_3_long_active_pane_t1_ParamLimits

0x3e08,	// (0x000149df) bg_passive_tab_pane_cp5_ParamLimits

0x07b7,	// (0x0001138e) list_single_midp_graphic_pane_t1

0xce79,	// (0x0001da50) bg_status_flat_pane_ParamLimits

0x3fca,	// (0x00014ba1) indicator_pane_cp2_ParamLimits

0x3fca,	// (0x00014ba1) indicator_pane_cp2

0xcff7,	// (0x0001dbce) navi_pane_srt_ParamLimits

0xcff7,	// (0x0001dbce) navi_pane_srt

0x4119,	// (0x00014cf0) popup_clock_digital_analogue_window_cp1

0x1f09,	// (0x00012ae0) indicator_pane_t1

0x3adc,	// (0x000146b3) copy_highlight_pane

0x3adc,	// (0x000146b3) cursor_graphics_pane

0x3adc,	// (0x000146b3) graphic_within_text_pane

0x3adc,	// (0x000146b3) link_highlight_pane

0x547a,	// (0x00016051) popup_preview_text_window_t5_ParamLimits

0x547a,	// (0x00016051) popup_preview_text_window_t5

0x3c0a,	// (0x000147e1) cursor_digital_pane

0x3c0a,	// (0x000147e1) cursor_primary_pane

0x3c1b,	// (0x000147f2) cursor_primary_small_pane

0x3c23,	// (0x000147fa) cursor_secondary_pane

0x3c2b,	// (0x00014802) cursor_title_pane

0x3c0a,	// (0x000147e1) link_highlight_digital_pane

0x3c12,	// (0x000147e9) link_highlight_primary_pane

0x3c1b,	// (0x000147f2) link_highlight_primary_small_pane

0x3c23,	// (0x000147fa) link_highlight_secondary_pane

0x3c2b,	// (0x00014802) link_highlight_title_pane

0x3c0a,	// (0x000147e1) copy_highlight_digital_pane

0x3c0a,	// (0x000147e1) copy_highlight_primary_pane

0x3c1b,	// (0x000147f2) copy_highlight_primary_small_pane

0x3c23,	// (0x000147fa) copy_highlight_secondary_pane

0x3c2b,	// (0x00014802) copy_highlight_title_pane

0x3c23,	// (0x000147fa) graphic_text_digital_pane

0x4d09,	// (0x000158e0) graphic_text_primary_pane

0x4d12,	// (0x000158e9) graphic_text_primary_small_pane

0x3c1b,	// (0x000147f2) graphic_text_secondary_pane

0x3c0a,	// (0x000147e1) graphic_text_title_pane

0xcd2c,	// (0x0001d903) cursor_primary_pane_g1

0x4cfb,	// (0x000158d2) cursor_text_primary_t1

0xd289,	// (0x0001de60) cursor_primary_small_pane_g1

0x4ced,	// (0x000158c4) cursor_text_primary_small_t1

0xd27f,	// (0x0001de56) cursor_primary_small_pane_g1_copy1

0x4cd5,	// (0x000158ac) cursor_text_primary_small_t1_copy1

0x4cb3,	// (0x0001588a) cursor_text_title_t1

0xd275,	// (0x0001de4c) cursor_title_pane_g1

0xcd2c,	// (0x0001d903) cursor_digital_pane_g1

0x3c3d,	// (0x00014814) cursor_text_digital_t1

0x3c62,	// (0x00014839) link_highlight_primary_pane_g1

0x4c5c,	// (0x00015833) link_highlight_primary_pane_t1

0x3c4b,	// (0x00014822) link_highlight_primary_small_pane_g1

0x3c53,	// (0x0001482a) link_highlight_primary_small_pane_t1

0x3c62,	// (0x00014839) link_highlight_secondary_pane_g1

0x3c6a,	// (0x00014841) link_highlight_secondary_pane_t1

0x4bd0,	// (0x000157a7) link_highlight_title_pane_g1

0x4bd8,	// (0x000157af) link_highlight_title_pane_t1

0x4bb9,	// (0x00015790) link_highlight_digital_pane_g1

0x4bc1,	// (0x00015798) link_highlight_digital_pane_t1

0x4a91,	// (0x00015668) copy_highlight_primary_pane_g1

0x4a99,	// (0x00015670) copy_highlight_primary_pane_t1

0x4a6b,	// (0x00015642) copy_highlight_primary_small_pane_g1

0x4a82,	// (0x00015659) copy_highlight_primary_small_pane_t1

0x3c79,	// (0x00014850) copy_highlight_secondary_pane_g1

0x3c81,	// (0x00014858) copy_highlight_secondary_pane_t1

0x4a6b,	// (0x00015642) copy_highlight_title_pane_g1

0x4a73,	// (0x0001564a) copy_highlight_title_pane_t1

0x4a91,	// (0x00015668) copy_highlight_digital_pane_g1

0x5e02,	// (0x000169d9) copy_highlight_digital_pane_t1

0x5d56,	// (0x0001692d) graphic_text_primary_pane_g1

0x5de6,	// (0x000169bd) graphic_text_primary_pane_t1

0x5df4,	// (0x000169cb) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x00020574) graphic_text_primary_pane_t

0x5dc2,	// (0x00016999) graphic_text_primary_small_pane_g1

0x5dca,	// (0x000169a1) graphic_text_primary_small_pane_t1

0x5dd8,	// (0x000169af) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x0002056f) graphic_text_primary_small_pane_t

0x5d9e,	// (0x00016975) graphic_text_secondary_pane_g1

0x5da6,	// (0x0001697d) graphic_text_secondary_pane_t1

0x5db4,	// (0x0001698b) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x0002056a) graphic_text_secondary_pane_t

0x5d7a,	// (0x00016951) graphic_text_title_pane_g1

0x5d82,	// (0x00016959) graphic_text_title_pane_t1

0x5d90,	// (0x00016967) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x00020565) graphic_text_title_pane_t

0x5d56,	// (0x0001692d) graphic_text_digital_pane_g1

0x5d5e,	// (0x00016935) graphic_text_digital_pane_t1

0x5d6c,	// (0x00016943) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x00020560) graphic_text_digital_pane_t

0x1e12,	// (0x000129e9) navi_icon_pane_srt_ParamLimits

0x1e12,	// (0x000129e9) navi_icon_pane_srt

0xe895,	// (0x0001f46c) navi_midp_pane_srt

0xe895,	// (0x0001f46c) navi_navi_pane_srt

0x1e12,	// (0x000129e9) navi_text_pane_srt_ParamLimits

0x1e12,	// (0x000129e9) navi_text_pane_srt

0x5d21,	// (0x000168f8) navi_navi_icon_text_pane_srt

0x5d29,	// (0x00016900) navi_navi_pane_srt_g1_ParamLimits

0x5d29,	// (0x00016900) navi_navi_pane_srt_g1

0x5d3b,	// (0x00016912) navi_navi_pane_srt_g2_ParamLimits

0x5d3b,	// (0x00016912) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x0002055b) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x0002055b) navi_navi_pane_srt_g

0x5d4d,	// (0x00016924) navi_navi_tabs_pane_srt

0x5d21,	// (0x000168f8) navi_navi_text_pane_srt

0x5d21,	// (0x000168f8) navi_navi_volume_pane_srt

0x5d12,	// (0x000168e9) navi_navi_text_pane_srt_t1

0x0b31,	// (0x00011708) navi_navi_volume_pane_srt_g1

0x0b39,	// (0x00011710) volume_small_pane_srt_ParamLimits

0x0b39,	// (0x00011710) volume_small_pane_srt

0xf46f,	// (0x00020046) volume_small_pane_srt_g1_ParamLimits

0xf46f,	// (0x00020046) volume_small_pane_srt_g1

0xf47f,	// (0x00020056) volume_small_pane_srt_g2_ParamLimits

0xf47f,	// (0x00020056) volume_small_pane_srt_g2

0xf490,	// (0x00020067) volume_small_pane_srt_g3_ParamLimits

0xf490,	// (0x00020067) volume_small_pane_srt_g3

0xf4a1,	// (0x00020078) volume_small_pane_srt_g4_ParamLimits

0xf4a1,	// (0x00020078) volume_small_pane_srt_g4

0xf4b2,	// (0x00020089) volume_small_pane_srt_g5_ParamLimits

0xf4b2,	// (0x00020089) volume_small_pane_srt_g5

0xf4c3,	// (0x0002009a) volume_small_pane_srt_g6_ParamLimits

0xf4c3,	// (0x0002009a) volume_small_pane_srt_g6

0xf4d4,	// (0x000200ab) volume_small_pane_srt_g7_ParamLimits

0xf4d4,	// (0x000200ab) volume_small_pane_srt_g7

0xf4e5,	// (0x000200bc) volume_small_pane_srt_g8_ParamLimits

0xf4e5,	// (0x000200bc) volume_small_pane_srt_g8

0xf4f6,	// (0x000200cd) volume_small_pane_srt_g9_ParamLimits

0xf4f6,	// (0x000200cd) volume_small_pane_srt_g9

0xf507,	// (0x000200de) volume_small_pane_srt_g10_ParamLimits

0xf507,	// (0x000200de) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x00020308) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x00020308) volume_small_pane_srt_g

0x222c,	// (0x00012e03) query_popup_data_pane_cp2

0x5cf8,	// (0x000168cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5cf8,	// (0x000168cf) navi_navi_icon_text_pane_srt_t1

0x4d09,	// (0x000158e0) navi_tabs_2_long_pane_srt

0x4d09,	// (0x000158e0) navi_tabs_2_pane_srt

0x4d09,	// (0x000158e0) navi_tabs_3_long_pane_srt

0x4d09,	// (0x000158e0) navi_tabs_3_pane_srt

0x4d09,	// (0x000158e0) navi_tabs_4_pane_srt

0x0b11,	// (0x000116e8) tabs_2_active_pane_srt_ParamLimits

0x0b11,	// (0x000116e8) tabs_2_active_pane_srt

0x0b21,	// (0x000116f8) tabs_2_passive_pane_srt_ParamLimits

0x0b21,	// (0x000116f8) tabs_2_passive_pane_srt

0x4472,	// (0x00015049) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4472,	// (0x00015049) bg_passive_tab_pane_cp1_srt

0x5cc4,	// (0x0001689b) bg_passive_tab_pane_g1_cp1_srt

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp1_srt

0x5ccd,	// (0x000168a4) bg_passive_tab_pane_g3_cp1_srt

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp1_srt_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp1_srt

0x5cd6,	// (0x000168ad) tabs_2_active_pane_srt_g1

0xd65f,	// (0x0001e236) tabs_2_active_pane_srt_t1_ParamLimits

0xd65f,	// (0x0001e236) tabs_2_active_pane_srt_t1

0x5cc4,	// (0x0001689b) bg_active_tab_pane_g1_cp1_srt

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp1_srt

0x5ccd,	// (0x000168a4) bg_active_tab_pane_g3_cp1_srt

0x0ade,	// (0x000116b5) tabs_3_active_pane_srt_ParamLimits

0x0ade,	// (0x000116b5) tabs_3_active_pane_srt

0x0aef,	// (0x000116c6) tabs_3_passive_pane_cp_srt_ParamLimits

0x0aef,	// (0x000116c6) tabs_3_passive_pane_cp_srt

0x0b00,	// (0x000116d7) tabs_3_passive_pane_srt_ParamLimits

0x0b00,	// (0x000116d7) tabs_3_passive_pane_srt

0x4472,	// (0x00015049) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4472,	// (0x00015049) bg_passive_tab_pane_cp2_srt

0x3c90,	// (0x00014867) bg_passive_tab_pane_g1_cp2_srt

0x3725,	// (0x000142fc) bg_passive_tab_pane_g2_cp2_srt

0x3c99,	// (0x00014870) bg_passive_tab_pane_g3_cp2_srt

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp2_srt_ParamLimits

0x20a7,	// (0x00012c7e) bg_active_tab_pane_cp2_srt

0x5caa,	// (0x00016881) tabs_3_active_pane_srt_g1

0xd649,	// (0x0001e220) tabs_3_active_pane_srt_t1_ParamLimits

0xd649,	// (0x0001e220) tabs_3_active_pane_srt_t1

0x3c90,	// (0x00014867) bg_active_tab_pane_g1_cp2_srt

0x3725,	// (0x000142fc) bg_active_tab_pane_g2_cp2_srt

0x3c99,	// (0x00014870) bg_active_tab_pane_g3_cp2_srt

0x0a96,	// (0x0001166d) tabs_4_active_pane_srt_ParamLimits

0x0a96,	// (0x0001166d) tabs_4_active_pane_srt

0x0aa8,	// (0x0001167f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0aa8,	// (0x0001167f) tabs_4_passive_pane_cp2_srt

0x00d9,	// (0x00010cb0) aid_size_cell_toolbar

0x5826,	// (0x000163fd) main_idle_act_pane_ParamLimits

0x02a6,	// (0x00010e7d) popup_large_graphic_colour_window_ParamLimits

0xba7a,	// (0x0001c651) popup_toolbar_window_ParamLimits

0xba7a,	// (0x0001c651) popup_toolbar_window

0x5a2c,	// (0x00016603) list_single_graphic_2heading_pane_ParamLimits

0x5a2c,	// (0x00016603) list_single_graphic_2heading_pane

0x3143,	// (0x00013d1a) aid_size_cell_apps_grid_lsc_pane

0x3155,	// (0x00013d2c) aid_size_cell_apps_grid_prt_pane

0x3e08,	// (0x000149df) bg_wml_button_pane_cp1_ParamLimits

0x3e08,	// (0x000149df) bg_wml_button_pane_cp1

0xd222,	// (0x0001ddf9) form_midp_field_text_pane_t1_ParamLimits

0x4472,	// (0x00015049) input_focus_pane_cp050_ParamLimits

0x46e8,	// (0x000152bf) list_midp_form_text_pane_ParamLimits

0x468e,	// (0x00015265) input_focus_pane_cp051_ParamLimits

0x46a2,	// (0x00015279) list_midp_choice_pane_ParamLimits

0xd1c0,	// (0x0001dd97) list_single_2graphic_pane_cp3_ParamLimits

0xd1c0,	// (0x0001dd97) list_single_2graphic_pane_cp3

0xd1d3,	// (0x0001ddaa) list_single_midp_graphic_pane_ParamLimits

0xd1d3,	// (0x0001ddaa) list_single_midp_graphic_pane

0x06ba,	// (0x00011291) list_single_graphic_2heading_pane_g1_ParamLimits

0x06ba,	// (0x00011291) list_single_graphic_2heading_pane_g1

0x06c6,	// (0x0001129d) list_single_graphic_2heading_pane_g4_ParamLimits

0x06c6,	// (0x0001129d) list_single_graphic_2heading_pane_g4

0x06d2,	// (0x000112a9) list_single_graphic_2heading_pane_g5_ParamLimits

0x06d2,	// (0x000112a9) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0002035b) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0002035b) list_single_graphic_2heading_pane_g

0x06de,	// (0x000112b5) list_single_graphic_2heading_pane_t1_ParamLimits

0x06de,	// (0x000112b5) list_single_graphic_2heading_pane_t1

0x06f2,	// (0x000112c9) list_single_graphic_2heading_pane_t2_ParamLimits

0x06f2,	// (0x000112c9) list_single_graphic_2heading_pane_t2

0x070e,	// (0x000112e5) list_single_graphic_2heading_pane_t3_ParamLimits

0x070e,	// (0x000112e5) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x00020362) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x00020362) list_single_graphic_2heading_pane_t

0x4278,	// (0x00014e4f) bg_popup_sub_pane_cp2

0x42a2,	// (0x00014e79) grid_toobar_pane

0x0726,	// (0x000112fd) cell_toolbar_pane_ParamLimits

0x0726,	// (0x000112fd) cell_toolbar_pane

0x42f4,	// (0x00014ecb) cell_toolbar_pane_g1_ParamLimits

0x42f4,	// (0x00014ecb) cell_toolbar_pane_g1

0x4308,	// (0x00014edf) cell_toolbar_pane_g2_ParamLimits

0x4308,	// (0x00014edf) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x00020370) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x00020370) cell_toolbar_pane_g

0x432a,	// (0x00014f01) grid_highlight_pane_cp2_ParamLimits

0x432a,	// (0x00014f01) grid_highlight_pane_cp2

0x4344,	// (0x00014f1b) toolbar_button_pane

0x4350,	// (0x00014f27) toolbar_button_pane_g1

0x4358,	// (0x00014f2f) toolbar_button_pane_g2

0x4360,	// (0x00014f37) toolbar_button_pane_g3

0x4368,	// (0x00014f3f) toolbar_button_pane_g4

0x4370,	// (0x00014f47) toolbar_button_pane_g5

0x4378,	// (0x00014f4f) toolbar_button_pane_g6

0x4380,	// (0x00014f57) toolbar_button_pane_g7

0x4388,	// (0x00014f5f) toolbar_button_pane_g8

0x4390,	// (0x00014f67) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00020375) toolbar_button_pane_g

0x075e,	// (0x00011335) list_single_2graphic_pane_g1_cp3_ParamLimits

0x075e,	// (0x00011335) list_single_2graphic_pane_g1_cp3

0xbad2,	// (0x0001c6a9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbad2,	// (0x0001c6a9) list_single_2graphic_pane_g2_cp3

0x077b,	// (0x00011352) list_single_2graphic_pane_g3_cp3

0x0783,	// (0x0001135a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0783,	// (0x0001135a) list_single_2graphic_pane_g4_cp3

0x078f,	// (0x00011366) list_single_2graphic_pane_t1_cp3_ParamLimits

0x078f,	// (0x00011366) list_single_2graphic_pane_t1_cp3

0x07ab,	// (0x00011382) list_single_midp_graphic_pane_g2_ParamLimits

0x07ab,	// (0x00011382) list_single_midp_graphic_pane_g2

0x00e1,	// (0x00010cb8) aid_zoom_text_primary

0x00e9,	// (0x00010cc0) aid_zoom_text_secondary

0x3d4a,	// (0x00014921) status_small_pane_g7_ParamLimits

0x3d4a,	// (0x00014921) status_small_pane_g7

0x3d6d,	// (0x00014944) status_small_pane_t1_ParamLimits

0xc287,	// (0x0001ce5e) title_pane_g2

0x0003,

0xf527,	// (0x000200fe) title_pane_g

0xc4ff,	// (0x0001d0d6) aid_size_cell_colour_1_pane_ParamLimits

0xc4ff,	// (0x0001d0d6) aid_size_cell_colour_1_pane

0xc513,	// (0x0001d0ea) aid_size_cell_colour_2_pane_ParamLimits

0xc513,	// (0x0001d0ea) aid_size_cell_colour_2_pane

0xc527,	// (0x0001d0fe) aid_size_cell_colour_3_pane_ParamLimits

0xc527,	// (0x0001d0fe) aid_size_cell_colour_3_pane

0xc53b,	// (0x0001d112) aid_size_cell_colour_4_pane_ParamLimits

0xc53b,	// (0x0001d112) aid_size_cell_colour_4_pane

0xf0cc,	// (0x0001fca3) title_pane_stacon_g1_ParamLimits

0xf0cc,	// (0x0001fca3) title_pane_stacon_g1

0x4af0,	// (0x000156c7) popup_note_wait_window_g3_ParamLimits

0x4af0,	// (0x000156c7) popup_note_wait_window_g3

0x4b66,	// (0x0001573d) popup_note_wait_window_t5_ParamLimits

0x4b66,	// (0x0001573d) popup_note_wait_window_t5

0xe895,	// (0x0001f46c) main_feb_china_hwr_fs_writing_pane

0xb47c,	// (0x0001c053) popup_feb_china_hwr_fs_window_ParamLimits

0xb47c,	// (0x0001c053) popup_feb_china_hwr_fs_window

0xbae3,	// (0x0001c6ba) aid_size_cell_hwr_fs_ParamLimits

0xbae3,	// (0x0001c6ba) aid_size_cell_hwr_fs

0x4472,	// (0x00015049) bg_popup_sub_pane_cp3_ParamLimits

0x4472,	// (0x00015049) bg_popup_sub_pane_cp3

0xbaf8,	// (0x0001c6cf) grid_hwr_fs_pane_ParamLimits

0xbaf8,	// (0x0001c6cf) grid_hwr_fs_pane

0x07fa,	// (0x000113d1) linegrid_hwr_fs_pane_ParamLimits

0x07fa,	// (0x000113d1) linegrid_hwr_fs_pane

0xbb10,	// (0x0001c6e7) cell_hwr_fs_pane_ParamLimits

0xbb10,	// (0x0001c6e7) cell_hwr_fs_pane

0x447e,	// (0x00015055) linegrid_hwr_fs_pane_g1_ParamLimits

0x447e,	// (0x00015055) linegrid_hwr_fs_pane_g1

0xd194,	// (0x0001dd6b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd194,	// (0x0001dd6b) linegrid_hwr_fs_pane_g2

0x449c,	// (0x00015073) linegrid_hwr_fs_pane_g3_ParamLimits

0x449c,	// (0x00015073) linegrid_hwr_fs_pane_g3

0x082c,	// (0x00011403) linegrid_hwr_fs_pane_g4_ParamLimits

0x082c,	// (0x00011403) linegrid_hwr_fs_pane_g4

0x0846,	// (0x0001141d) linegrid_hwr_fs_pane_g5_ParamLimits

0x0846,	// (0x0001141d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x0002039b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x0002039b) linegrid_hwr_fs_pane_g

0x44a8,	// (0x0001507f) cell_hwr_fs_pane_g1_ParamLimits

0x44a8,	// (0x0001507f) cell_hwr_fs_pane_g1

0x41af,	// (0x00014d86) cell_hwr_fs_pane_g2_ParamLimits

0x41af,	// (0x00014d86) cell_hwr_fs_pane_g2

0xd1a6,	// (0x0001dd7d) cell_hwr_fs_pane_g3_ParamLimits

0xd1a6,	// (0x0001dd7d) cell_hwr_fs_pane_g3

0xd1b3,	// (0x0001dd8a) cell_hwr_fs_pane_g4_ParamLimits

0xd1b3,	// (0x0001dd8a) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x000203a6) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x000203a6) cell_hwr_fs_pane_g

0xbb36,	// (0x0001c70d) cell_hwr_fs_pane_t1

0xe895,	// (0x0001f46c) grid_highlight_pane_cp6

0xe895,	// (0x0001f46c) main_idle_act2_pane

0x2efa,	// (0x00013ad1) aid_inside_area_popup_secondary

0xd293,	// (0x0001de6a) aid_inside_area_window_primary_ParamLimits

0xd293,	// (0x0001de6a) aid_inside_area_window_primary

0x5e11,	// (0x000169e8) ai2_news_ticker_pane

0x5e19,	// (0x000169f0) aid_size_cell_ai1_link_ParamLimits

0x5e19,	// (0x000169f0) aid_size_cell_ai1_link

0xd675,	// (0x0001e24c) popup_ai2_data_window_ParamLimits

0xd675,	// (0x0001e24c) popup_ai2_data_window

0x5e49,	// (0x00016a20) popup_ai2_link_window_ParamLimits

0x5e49,	// (0x00016a20) popup_ai2_link_window

0x4472,	// (0x00015049) bg_popup_sub_pane_cp4_ParamLimits

0x4472,	// (0x00015049) bg_popup_sub_pane_cp4

0x5e5d,	// (0x00016a34) grid_ai2_link_pane_ParamLimits

0x5e5d,	// (0x00016a34) grid_ai2_link_pane

0x5e74,	// (0x00016a4b) popup_ai2_link_window_g1_ParamLimits

0x5e74,	// (0x00016a4b) popup_ai2_link_window_g1

0x5e80,	// (0x00016a57) popup_ai2_link_window_g2_ParamLimits

0x5e80,	// (0x00016a57) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x00020579) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x00020579) popup_ai2_link_window_g

0x5e8f,	// (0x00016a66) ai2_mp_button_pane

0x5e97,	// (0x00016a6e) ai2_mp_volume_pane

0x468e,	// (0x00015265) bg_popup_sub_pane_cp5_ParamLimits

0x468e,	// (0x00015265) bg_popup_sub_pane_cp5

0x5e9f,	// (0x00016a76) heading_ai2_gene_pane_ParamLimits

0x5e9f,	// (0x00016a76) heading_ai2_gene_pane

0x5eab,	// (0x00016a82) list_ai2_gene_pane_ParamLimits

0x5eab,	// (0x00016a82) list_ai2_gene_pane

0x5ef3,	// (0x00016aca) cell_ai2_link_pane_ParamLimits

0x5ef3,	// (0x00016aca) cell_ai2_link_pane

0x5f09,	// (0x00016ae0) cell_ai2_link_pane_g1

0xe895,	// (0x0001f46c) grid_highlight_pane_cp7

0x0b4e,	// (0x00011725) ai2_mp_volume_pane_g1

0x5fe5,	// (0x00016bbc) ai2_mp_volume_pane_g2

0xd69f,	// (0x0001e276) list_ai2_gene_pane_t1

0x5fed,	// (0x00016bc4) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x00020592) ai2_mp_volume_pane_g

0x0b56,	// (0x0001172d) volume_small_pane_cp3

0x5ff5,	// (0x00016bcc) aid_size_cell_ai2_button

0x5ffd,	// (0x00016bd4) grid_ai2_button_pane

0x6006,	// (0x00016bdd) cell_ai2_button_pane_ParamLimits

0x6006,	// (0x00016bdd) cell_ai2_button_pane

0xe88b,	// (0x0001f462) cell_ai2_button_pane_g1

0xe895,	// (0x0001f46c) grid_highlight_pane_cp8

0x5fa5,	// (0x00016b7c) ai2_gene_pane_t1_ParamLimits

0x5fa5,	// (0x00016b7c) ai2_gene_pane_t1

0xb41a,	// (0x0001bff1) aid_height_parent_landscape

0xd3db,	// (0x0001dfb2) aid_height_set_list

0x5826,	// (0x000163fd) aid_size_parent

0x5c34,	// (0x0001680b) aid_size_cell_graphic_pane_ParamLimits

0x5ebb,	// (0x00016a92) popup_ai2_data_window_g1_ParamLimits

0x5ebb,	// (0x00016a92) popup_ai2_data_window_g1

0x5ec7,	// (0x00016a9e) ai2_news_ticker_pane_g1

0x5ecf,	// (0x00016aa6) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x0002057e) ai2_news_ticker_pane_g

0x5ed7,	// (0x00016aae) ai2_news_ticker_pane_t1

0x5ee5,	// (0x00016abc) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x00020583) ai2_news_ticker_pane_t

0x5f12,	// (0x00016ae9) heading_ai2_gene_pane_g1

0x5f1a,	// (0x00016af1) heading_ai2_gene_pane_t1_ParamLimits

0x5f1a,	// (0x00016af1) heading_ai2_gene_pane_t1

0x5f2f,	// (0x00016b06) list_highlight_pane_cp6

0xd689,	// (0x0001e260) ai2_gene_pane_ParamLimits

0xd689,	// (0x0001e260) ai2_gene_pane

0xd6ad,	// (0x0001e284) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x00020588) list_ai2_gene_pane_t

0x5f6a,	// (0x00016b41) list_highlight_pane_cp8_ParamLimits

0x5f6a,	// (0x00016b41) list_highlight_pane_cp8

0x5f7b,	// (0x00016b52) ai2_gene_pane_g1_ParamLimits

0x5f7b,	// (0x00016b52) ai2_gene_pane_g1

0x5f8d,	// (0x00016b64) ai2_gene_pane_g2_ParamLimits

0x5f8d,	// (0x00016b64) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x0002058d) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x0002058d) ai2_gene_pane_g

0x264f,	// (0x00013226) scroll_pane_cp12

0xb3d7,	// (0x0001bfae) control_pane_t3_ParamLimits

0xb3d7,	// (0x0001bfae) control_pane_t3

0x3d5e,	// (0x00014935) status_small_pane_g8_ParamLimits

0x3d5e,	// (0x00014935) status_small_pane_g8

0xb511,	// (0x0001c0e8) popup_find_window_ParamLimits

0xb7a4,	// (0x0001c37b) popup_note_image_window_ParamLimits

0x26e6,	// (0x000132bd) list_double2_graphic_pane_vc_g1_ParamLimits

0x26e6,	// (0x000132bd) list_double2_graphic_pane_vc_g1

0x266c,	// (0x00013243) list_double2_graphic_pane_vc_g2_ParamLimits

0x266c,	// (0x00013243) list_double2_graphic_pane_vc_g2

0x2678,	// (0x0001324f) list_double2_graphic_pane_vc_g3_ParamLimits

0x2678,	// (0x0001324f) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00020369) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00020369) list_double2_graphic_pane_vc_g

0x42de,	// (0x00014eb5) list_double2_graphic_pane_vc_t1_ParamLimits

0x42de,	// (0x00014eb5) list_double2_graphic_pane_vc_t1

0x266c,	// (0x00013243) list_single_heading_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_single_heading_pane_vc_g1

0x2678,	// (0x0001324f) list_single_heading_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_heading_pane_vc_g

0x4398,	// (0x00014f6f) list_single_heading_pane_vc_t1_ParamLimits

0x4398,	// (0x00014f6f) list_single_heading_pane_vc_t1

0x43ae,	// (0x00014f85) list_single_heading_pane_vc_t2_ParamLimits

0x43ae,	// (0x00014f85) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x0002038a) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x0002038a) list_single_heading_pane_vc_t

0x43c0,	// (0x00014f97) list_setting_number_pane_vc_g1_ParamLimits

0x43c0,	// (0x00014f97) list_setting_number_pane_vc_g1

0x43cc,	// (0x00014fa3) list_setting_number_pane_vc_g2_ParamLimits

0x43cc,	// (0x00014fa3) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002038f) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002038f) list_setting_number_pane_vc_g

0x43d8,	// (0x00014faf) list_setting_number_pane_vc_t1_ParamLimits

0x43d8,	// (0x00014faf) list_setting_number_pane_vc_t1

0x43ec,	// (0x00014fc3) list_setting_number_pane_vc_t2_ParamLimits

0x43ec,	// (0x00014fc3) list_setting_number_pane_vc_t2

0x4408,	// (0x00014fdf) list_setting_number_pane_vc_t3_ParamLimits

0x4408,	// (0x00014fdf) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x00020394) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x00020394) list_setting_number_pane_vc_t

0x4436,	// (0x0001500d) set_value_pane_vc_ParamLimits

0x4436,	// (0x0001500d) set_value_pane_vc

0x5a2c,	// (0x00016603) list_double2_graphic_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double2_graphic_pane_vc

0x5a2c,	// (0x00016603) list_double2_large_graphic_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double2_large_graphic_pane_vc

0x5a2c,	// (0x00016603) list_double2_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double2_pane_vc

0x5a2c,	// (0x00016603) list_double_graphic_heading_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_graphic_heading_pane_vc

0x5a2c,	// (0x00016603) list_double_graphic_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_graphic_pane_vc

0x5a2c,	// (0x00016603) list_double_heading_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_heading_pane_vc

0x5a3e,	// (0x00016615) list_double_large_graphic_pane_vc_ParamLimits

0x5a3e,	// (0x00016615) list_double_large_graphic_pane_vc

0x5a2c,	// (0x00016603) list_double_number_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_number_pane_vc

0x5a2c,	// (0x00016603) list_double_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_pane_vc

0x5a2c,	// (0x00016603) list_double_time_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_double_time_pane_vc

0x5a2c,	// (0x00016603) list_setting_number_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_setting_number_pane_vc

0x5a2c,	// (0x00016603) list_setting_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_setting_pane_vc

0x5a2c,	// (0x00016603) list_single_graphic_heading_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_single_graphic_heading_pane_vc

0x5a2c,	// (0x00016603) list_single_heading_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_single_heading_pane_vc

0x5a2c,	// (0x00016603) list_single_number_heading_pane_vc_ParamLimits

0x5a2c,	// (0x00016603) list_single_number_heading_pane_vc

0x603a,	// (0x00016c11) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x603a,	// (0x00016c11) list_double_graphic_heading_pane_vc_g1

0x266c,	// (0x00013243) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x266c,	// (0x00013243) list_double_graphic_heading_pane_vc_g2

0x2678,	// (0x0001324f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2678,	// (0x0001324f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c2,	// (0x00020599) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c2,	// (0x00020599) list_double_graphic_heading_pane_vc_g

0x6046,	// (0x00016c1d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6046,	// (0x00016c1d) list_double_graphic_heading_pane_vc_t1

0x6062,	// (0x00016c39) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6062,	// (0x00016c39) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x000205a0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x000205a0) list_double_graphic_heading_pane_vc_t

0x43c0,	// (0x00014f97) list_setting_pane_vc_g1_ParamLimits

0x43c0,	// (0x00014f97) list_setting_pane_vc_g1

0x43cc,	// (0x00014fa3) list_setting_pane_vc_g2_ParamLimits

0x43cc,	// (0x00014fa3) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002038f) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002038f) list_setting_pane_vc_g

0x6290,	// (0x00016e67) list_setting_pane_vc_t1_ParamLimits

0x6290,	// (0x00016e67) list_setting_pane_vc_t1

0x62ac,	// (0x00016e83) list_setting_pane_vc_t2_ParamLimits

0x62ac,	// (0x00016e83) list_setting_pane_vc_t2

0x0001,

0xf9f7,	// (0x000205ce) list_setting_pane_vc_t_ParamLimits

0xf9f7,	// (0x000205ce) list_setting_pane_vc_t

0x4436,	// (0x0001500d) set_value_pane_cp_vc_ParamLimits

0x4436,	// (0x0001500d) set_value_pane_cp_vc

0x266c,	// (0x00013243) list_single_number_heading_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_single_number_heading_pane_vc_g1

0x2678,	// (0x0001324f) list_single_number_heading_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_single_number_heading_pane_vc_g

0x269a,	// (0x00013271) list_single_number_heading_pane_vc_t1_ParamLimits

0x269a,	// (0x00013271) list_single_number_heading_pane_vc_t1

0x62c8,	// (0x00016e9f) list_single_number_heading_pane_vc_t2_ParamLimits

0x62c8,	// (0x00016e9f) list_single_number_heading_pane_vc_t2

0x26d4,	// (0x000132ab) list_single_number_heading_pane_vc_t3_ParamLimits

0x26d4,	// (0x000132ab) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fc,	// (0x000205d3) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fc,	// (0x000205d3) list_single_number_heading_pane_vc_t

0x26e6,	// (0x000132bd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x26e6,	// (0x000132bd) list_single_graphic_heading_pane_vc_g1

0x266c,	// (0x00013243) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x266c,	// (0x00013243) list_single_graphic_heading_pane_vc_g4

0x2678,	// (0x0001324f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2678,	// (0x0001324f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf792,	// (0x00020369) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf792,	// (0x00020369) list_single_graphic_heading_pane_vc_g

0x269a,	// (0x00013271) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x269a,	// (0x00013271) list_single_graphic_heading_pane_vc_t1

0x62de,	// (0x00016eb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x62de,	// (0x00016eb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa03,	// (0x000205da) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x000205da) list_single_graphic_heading_pane_vc_t

0x266c,	// (0x00013243) list_double2_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_double2_pane_vc_g1

0x2678,	// (0x0001324f) list_double2_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_double2_pane_vc_g

0x59ca,	// (0x000165a1) list_double2_pane_vc_t1_ParamLimits

0x59ca,	// (0x000165a1) list_double2_pane_vc_t1

0x62f0,	// (0x00016ec7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x62f0,	// (0x00016ec7) list_double2_large_graphic_pane_vc_g1

0x266c,	// (0x00013243) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x266c,	// (0x00013243) list_double2_large_graphic_pane_vc_g2

0x2678,	// (0x0001324f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2678,	// (0x0001324f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00020195) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00020195) list_double2_large_graphic_pane_vc_g

0x62fc,	// (0x00016ed3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x62fc,	// (0x00016ed3) list_double2_large_graphic_pane_vc_t1

0x6312,	// (0x00016ee9) list_double_time_pane_vc_g1_ParamLimits

0x6312,	// (0x00016ee9) list_double_time_pane_vc_g1

0x631e,	// (0x00016ef5) list_double_time_pane_vc_g2_ParamLimits

0x631e,	// (0x00016ef5) list_double_time_pane_vc_g2

0x0001,

0xfa08,	// (0x000205df) list_double_time_pane_vc_g_ParamLimits

0xfa08,	// (0x000205df) list_double_time_pane_vc_g

0x632a,	// (0x00016f01) list_double_time_pane_vc_t1_ParamLimits

0x632a,	// (0x00016f01) list_double_time_pane_vc_t1

0x634e,	// (0x00016f25) list_double_time_pane_vc_t2_ParamLimits

0x634e,	// (0x00016f25) list_double_time_pane_vc_t2

0x6378,	// (0x00016f4f) list_double_time_pane_vc_t3_ParamLimits

0x6378,	// (0x00016f4f) list_double_time_pane_vc_t3

0x638a,	// (0x00016f61) list_double_time_pane_vc_t4_ParamLimits

0x638a,	// (0x00016f61) list_double_time_pane_vc_t4

0x0003,

0xfa0d,	// (0x000205e4) list_double_time_pane_vc_t_ParamLimits

0xfa0d,	// (0x000205e4) list_double_time_pane_vc_t

0x266c,	// (0x00013243) list_double_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_double_pane_vc_g1

0x2678,	// (0x0001324f) list_double_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_double_pane_vc_g

0x639e,	// (0x00016f75) list_double_pane_vc_t1_ParamLimits

0x639e,	// (0x00016f75) list_double_pane_vc_t1

0x63b2,	// (0x00016f89) list_double_pane_vc_t2_ParamLimits

0x63b2,	// (0x00016f89) list_double_pane_vc_t2

0x0001,

0xfa16,	// (0x000205ed) list_double_pane_vc_t_ParamLimits

0xfa16,	// (0x000205ed) list_double_pane_vc_t

0x266c,	// (0x00013243) list_double_number_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_double_number_pane_vc_g1

0x2678,	// (0x0001324f) list_double_number_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_double_number_pane_vc_g

0x63ca,	// (0x00016fa1) list_double_number_pane_vc_t1_ParamLimits

0x63ca,	// (0x00016fa1) list_double_number_pane_vc_t1

0x63dc,	// (0x00016fb3) list_double_number_pane_vc_t2_ParamLimits

0x63dc,	// (0x00016fb3) list_double_number_pane_vc_t2

0x63f0,	// (0x00016fc7) list_double_number_pane_vc_t3_ParamLimits

0x63f0,	// (0x00016fc7) list_double_number_pane_vc_t3

0x0002,

0xfa1b,	// (0x000205f2) list_double_number_pane_vc_t_ParamLimits

0xfa1b,	// (0x000205f2) list_double_number_pane_vc_t

0x640a,	// (0x00016fe1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x640a,	// (0x00016fe1) list_double_large_graphic_pane_vc_g1

0x6426,	// (0x00016ffd) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6426,	// (0x00016ffd) list_double_large_graphic_pane_vc_g2

0x643a,	// (0x00017011) list_double_large_graphic_pane_vc_g3_ParamLimits

0x643a,	// (0x00017011) list_double_large_graphic_pane_vc_g3

0x6449,	// (0x00017020) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6449,	// (0x00017020) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa22,	// (0x000205f9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa22,	// (0x000205f9) list_double_large_graphic_pane_vc_g

0x6458,	// (0x0001702f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6458,	// (0x0001702f) list_double_large_graphic_pane_vc_t1

0x6474,	// (0x0001704b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6474,	// (0x0001704b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa2b,	// (0x00020602) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa2b,	// (0x00020602) list_double_large_graphic_pane_vc_t

0x266c,	// (0x00013243) list_double_heading_pane_vc_g1_ParamLimits

0x266c,	// (0x00013243) list_double_heading_pane_vc_g1

0x2678,	// (0x0001324f) list_double_heading_pane_vc_g2_ParamLimits

0x2678,	// (0x0001324f) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00020178) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00020178) list_double_heading_pane_vc_g

0x6496,	// (0x0001706d) list_double_heading_pane_vc_t1_ParamLimits

0x6496,	// (0x0001706d) list_double_heading_pane_vc_t1

0x64aa,	// (0x00017081) list_double_heading_pane_vc_t2_ParamLimits

0x64aa,	// (0x00017081) list_double_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00020607) list_double_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00020607) list_double_heading_pane_vc_t

0x64c2,	// (0x00017099) list_double_graphic_pane_vc_g1_ParamLimits

0x64c2,	// (0x00017099) list_double_graphic_pane_vc_g1

0x64ce,	// (0x000170a5) list_double_graphic_pane_vc_g2_ParamLimits

0x64ce,	// (0x000170a5) list_double_graphic_pane_vc_g2

0x266c,	// (0x00013243) list_double_graphic_pane_vc_g3_ParamLimits

0x266c,	// (0x00013243) list_double_graphic_pane_vc_g3

0x0003,

0xfa35,	// (0x0002060c) list_double_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002060c) list_double_graphic_pane_vc_g

0x64eb,	// (0x000170c2) list_double_graphic_pane_vc_t1_ParamLimits

0x64eb,	// (0x000170c2) list_double_graphic_pane_vc_t1

0x6515,	// (0x000170ec) list_double_graphic_pane_vc_t2_ParamLimits

0x6515,	// (0x000170ec) list_double_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x00020615) list_double_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x00020615) list_double_graphic_pane_vc_t

0xee02,	// (0x0001f9d9) aid_size_cell_fastswap

0xb0e1,	// (0x0001bcb8) aid_size_cell_touch_ParamLimits

0xb0e1,	// (0x0001bcb8) aid_size_cell_touch

0xefd2,	// (0x0001fba9) popup_fast_swap_wide_window_ParamLimits

0xefd2,	// (0x0001fba9) popup_fast_swap_wide_window

0xb24f,	// (0x0001be26) touch_pane_ParamLimits

0xb24f,	// (0x0001be26) touch_pane

0x2b2a,	// (0x00013701) button_value_adjust_pane_cp2

0x2b32,	// (0x00013709) button_value_adjust_pane_cp4

0x2b54,	// (0x0001372b) form_field_data_pane_cp2

0xc950,	// (0x0001d527) form_field_data_wide_pane_cp2

0x3212,	// (0x00013de9) bg_scroll_pane_ParamLimits

0xf22e,	// (0x0001fe05) scroll_handle_pane_ParamLimits

0xf242,	// (0x0001fe19) scroll_sc2_down_pane_ParamLimits

0xf242,	// (0x0001fe19) scroll_sc2_down_pane

0x3243,	// (0x00013e1a) scroll_sc2_up_pane_ParamLimits

0x3243,	// (0x00013e1a) scroll_sc2_up_pane

0xd805,	// (0x0001e3dc) grid_wheel_folder_pane_g1_ParamLimits

0xd805,	// (0x0001e3dc) grid_wheel_folder_pane_g1

0xf407,	// (0x0001ffde) clock_nsta_pane_cp2_ParamLimits

0xf407,	// (0x0001ffde) clock_nsta_pane_cp2

0xcc87,	// (0x0001d85e) listscroll_midp_pane_ParamLimits

0xcc93,	// (0x0001d86a) midp_canvas_pane

0x3dd8,	// (0x000149af) nsta_clock_indic_pane

0x3e14,	// (0x000149eb) listscroll_form_pane_vc

0x3e1c,	// (0x000149f3) listscroll_set_pane_vc_ParamLimits

0x3e1c,	// (0x000149f3) listscroll_set_pane_vc

0xcea1,	// (0x0001da78) clock_nsta_pane

0xcecb,	// (0x0001daa2) indicator_nsta_pane

0x4278,	// (0x00014e4f) bg_popup_sub_pane_cp2_ParamLimits

0x428c,	// (0x00014e63) find_pane_cp2_ParamLimits

0x428c,	// (0x00014e63) find_pane_cp2

0x42a2,	// (0x00014e79) grid_toobar_pane_ParamLimits

0x4446,	// (0x0001501d) list_form_gen_pane_vc_ParamLimits

0x4446,	// (0x0001501d) list_form_gen_pane_vc

0x445c,	// (0x00015033) scroll_pane_cp8_vc_ParamLimits

0x445c,	// (0x00015033) scroll_pane_cp8_vc

0x44d8,	// (0x000150af) data_form_wide_pane_vc_ParamLimits

0x44d8,	// (0x000150af) data_form_wide_pane_vc

0x44e4,	// (0x000150bb) form_field_data_wide_pane_vc_g1

0x44ec,	// (0x000150c3) form_field_data_wide_pane_vc_t1_ParamLimits

0x44ec,	// (0x000150c3) form_field_data_wide_pane_vc_t1

0x2c10,	// (0x000137e7) input_focus_pane_cp6_vc_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_cp6_vc

0x486f,	// (0x00015446) list_midp_pane_ParamLimits

0x5c9e,	// (0x00016875) scroll_pane_cp16_ParamLimits

0x5c9e,	// (0x00016875) scroll_pane_cp16

0x48c5,	// (0x0001549c) button_value_adjust_pane_ParamLimits

0x48c5,	// (0x0001549c) button_value_adjust_pane

0xd3ec,	// (0x0001dfc3) button_value_adjust_pane_cp6_ParamLimits

0xd3ec,	// (0x0001dfc3) button_value_adjust_pane_cp6

0xd506,	// (0x0001e0dd) settings_code_pane_cp_ParamLimits

0xd506,	// (0x0001e0dd) settings_code_pane_cp

0xe88b,	// (0x0001f462) cell_touch_pane_g1

0xe88b,	// (0x0001f462) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x000202ae) cell_touch_pane_g

0xd6bb,	// (0x0001e292) cell_touch_pane_cp_ParamLimits

0xd6bb,	// (0x0001e292) cell_touch_pane_cp

0xd6d7,	// (0x0001e2ae) cell_touch_pane_ParamLimits

0xd6d7,	// (0x0001e2ae) cell_touch_pane

0xe88b,	// (0x0001f462) scroll_sc2_down_pane_g1

0xe88b,	// (0x0001f462) scroll_sc2_up_pane_g1

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp4_vc

0x6080,	// (0x00016c57) list_set_graphic_pane_vc_g1_ParamLimits

0x6080,	// (0x00016c57) list_set_graphic_pane_vc_g1

0x608c,	// (0x00016c63) list_set_graphic_pane_vc_g2_ParamLimits

0x608c,	// (0x00016c63) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x000205a5) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x000205a5) list_set_graphic_pane_vc_g

0x6098,	// (0x00016c6f) text_primary_small_cp13_vc_ParamLimits

0x6098,	// (0x00016c6f) text_primary_small_cp13_vc

0x60b0,	// (0x00016c87) list_set_graphic_pane_vc_ParamLimits

0x60b0,	// (0x00016c87) list_set_graphic_pane_vc

0xe895,	// (0x0001f46c) input_focus_pane_cp2_vc

0xe88b,	// (0x0001f462) setting_code_pane_vc_g1

0x1e5d,	// (0x00012a34) setting_code_pane_vc_t1

0x60c3,	// (0x00016c9a) set_text_pane_vc_t1_ParamLimits

0x60c3,	// (0x00016c9a) set_text_pane_vc_t1

0xe895,	// (0x0001f46c) input_focus_pane_cp1_vc

0x60df,	// (0x00016cb6) list_set_text_pane_vc

0xe88b,	// (0x0001f462) setting_text_pane_vc_g1

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp2_vc

0x1e54,	// (0x00012a2b) setting_slider_graphic_pane_vc_g1

0x60e9,	// (0x00016cc0) setting_slider_graphic_pane_vc_t1

0x60f9,	// (0x00016cd0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x000205aa) setting_slider_graphic_pane_vc_t

0x6109,	// (0x00016ce0) slider_set_pane_cp_vc

0x6111,	// (0x00016ce8) slider_set_pane_vc_g1

0x611a,	// (0x00016cf1) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x000205af) slider_set_pane_vc_g

0x2d3f,	// (0x00013916) set_opt_bg_pane_g1_copy1

0x2d47,	// (0x0001391e) set_opt_bg_pane_g2_copy1

0x6146,	// (0x00016d1d) set_opt_bg_pane_g3_copy1

0x2d57,	// (0x0001392e) set_opt_bg_pane_g4_copy1

0x2d5f,	// (0x00013936) set_opt_bg_pane_g5_copy1

0x2d67,	// (0x0001393e) set_opt_bg_pane_g6_copy1

0x6150,	// (0x00016d27) set_opt_bg_pane_g7_copy1

0x615a,	// (0x00016d31) set_opt_bg_pane_g8_copy1

0x6164,	// (0x00016d3b) set_opt_bg_pane_g9_copy1

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp_vc

0x616e,	// (0x00016d45) setting_slider_pane_vc_t1

0x617d,	// (0x00016d54) setting_slider_pane_vc_t2

0x618d,	// (0x00016d64) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x000205be) setting_slider_pane_vc_t

0x619d,	// (0x00016d74) slider_set_pane_vc

0x086a,	// (0x00011441) volume_set_pane_vc_g1

0x0873,	// (0x0001144a) volume_set_pane_vc_g2

0x087c,	// (0x00011453) volume_set_pane_vc_g3

0x0885,	// (0x0001145c) volume_set_pane_vc_g4

0x088e,	// (0x00011465) volume_set_pane_vc_g5

0x0897,	// (0x0001146e) volume_set_pane_vc_g6

0x08a0,	// (0x00011477) volume_set_pane_vc_g7

0x08a9,	// (0x00011480) volume_set_pane_vc_g8

0x08b2,	// (0x00011489) volume_set_pane_vc_g9

0x08bb,	// (0x00011492) volume_set_pane_vc_g10

0x0009,

0xf885,	// (0x0002045c) volume_set_pane_vc_g

0x61a5,	// (0x00016d7c) volume_set_pane_vc

0x61ad,	// (0x00016d84) button_value_adjust_pane_cp1_vc

0x61b7,	// (0x00016d8e) list_highlight_pane_cp2_vc

0x61c0,	// (0x00016d97) list_set_pane_vc_ParamLimits

0x61c0,	// (0x00016d97) list_set_pane_vc

0x621e,	// (0x00016df5) main_pane_set_vc_t1_ParamLimits

0x621e,	// (0x00016df5) main_pane_set_vc_t1

0x6233,	// (0x00016e0a) main_pane_set_vc_t2_ParamLimits

0x6233,	// (0x00016e0a) main_pane_set_vc_t2

0x6245,	// (0x00016e1c) main_pane_set_vc_t3_ParamLimits

0x6245,	// (0x00016e1c) main_pane_set_vc_t3

0x6259,	// (0x00016e30) main_pane_set_vc_t4_ParamLimits

0x6259,	// (0x00016e30) main_pane_set_vc_t4

0x0003,

0xf9ee,	// (0x000205c5) main_pane_set_vc_t_ParamLimits

0xf9ee,	// (0x000205c5) main_pane_set_vc_t

0x626d,	// (0x00016e44) setting_code_pane_vc_ParamLimits

0x626d,	// (0x00016e44) setting_code_pane_vc

0x627e,	// (0x00016e55) setting_slider_graphic_pane_vc

0x627e,	// (0x00016e55) setting_slider_pane_vc

0x627e,	// (0x00016e55) setting_text_pane_vc

0x627e,	// (0x00016e55) setting_volume_pane_vc

0x6288,	// (0x00016e5f) scroll_pane_cp121_vc

0x2b18,	// (0x000136ef) set_content_pane_vc

0x6544,	// (0x0001711b) button_value_adjust_pane_g1

0x654d,	// (0x00017124) button_value_adjust_pane_g2

0x0001,

0xfa43,	// (0x0002061a) button_value_adjust_pane_g

0x6556,	// (0x0001712d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6556,	// (0x0001712d) form_field_slider_wide_pane_vc_t1

0x656a,	// (0x00017141) form_field_slider_wide_pane_vc_t2_ParamLimits

0x656a,	// (0x00017141) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa48,	// (0x0002061f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa48,	// (0x0002061f) form_field_slider_wide_pane_vc_t

0x20a7,	// (0x00012c7e) input_focus_pane_cp10_vc_ParamLimits

0x20a7,	// (0x00012c7e) input_focus_pane_cp10_vc

0x6598,	// (0x0001716f) slider_cont_pane_cp1_vc_ParamLimits

0x6598,	// (0x0001716f) slider_cont_pane_cp1_vc

0x65aa,	// (0x00017181) slider_form_pane_g1_cp2

0x611a,	// (0x00016cf1) slider_form_pane_g2_cp2

0x65d7,	// (0x000171ae) form_field_slider_pane_vc_t3

0x65e5,	// (0x000171bc) form_field_slider_pane_vc_t4

0x65f3,	// (0x000171ca) slider_form_pane_vc_ParamLimits

0x65f3,	// (0x000171ca) slider_form_pane_vc

0x6600,	// (0x000171d7) form_field_slider_pane_vc_t1_ParamLimits

0x6600,	// (0x000171d7) form_field_slider_pane_vc_t1

0x656a,	// (0x00017141) form_field_slider_pane_vc_t2_ParamLimits

0x656a,	// (0x00017141) form_field_slider_pane_vc_t2

0x0001,

0xfa5a,	// (0x00020631) form_field_slider_pane_vc_t_ParamLimits

0xfa5a,	// (0x00020631) form_field_slider_pane_vc_t

0x20a7,	// (0x00012c7e) input_focus_pane_cp9_vc_ParamLimits

0x20a7,	// (0x00012c7e) input_focus_pane_cp9_vc

0x661c,	// (0x000171f3) slider_cont_pane_vc_ParamLimits

0x661c,	// (0x000171f3) slider_cont_pane_vc

0x6630,	// (0x00017207) list_form_graphic_pane_cp_vc_ParamLimits

0x6630,	// (0x00017207) list_form_graphic_pane_cp_vc

0x44e4,	// (0x000150bb) form_field_popup_wide_pane_vc_g1

0x6645,	// (0x0001721c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6645,	// (0x0001721c) form_field_popup_wide_pane_vc_t1

0x2c10,	// (0x000137e7) input_focus_pane_cp8_vc_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_cp8_vc

0x668a,	// (0x00017261) list_form_wide_pane_vc_ParamLimits

0x668a,	// (0x00017261) list_form_wide_pane_vc

0x6696,	// (0x0001726d) list_form_graphic_pane_vc_g1

0x669e,	// (0x00017275) list_form_graphic_pane_vc_t1_ParamLimits

0x669e,	// (0x00017275) list_form_graphic_pane_vc_t1

0x1e12,	// (0x000129e9) list_highlight_pane_cp5_vc_ParamLimits

0x1e12,	// (0x000129e9) list_highlight_pane_cp5_vc

0x66ba,	// (0x00017291) list_form_graphic_pane_vc_ParamLimits

0x66ba,	// (0x00017291) list_form_graphic_pane_vc

0x44e4,	// (0x000150bb) form_field_popup_pane_vc_g1

0x66d0,	// (0x000172a7) form_field_popup_pane_vc_t1_ParamLimits

0x66d0,	// (0x000172a7) form_field_popup_pane_vc_t1

0x2c10,	// (0x000137e7) input_focus_pane_cp7_vc_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_cp7_vc

0x66e7,	// (0x000172be) list_form_pane_vc_ParamLimits

0x66e7,	// (0x000172be) list_form_pane_vc

0x66f3,	// (0x000172ca) data_form_pane_vc_t1_ParamLimits

0x66f3,	// (0x000172ca) data_form_pane_vc_t1

0x2d3f,	// (0x00013916) input_focus_pane_vc_g1

0x2d47,	// (0x0001391e) input_focus_pane_vc_g2

0x2d4f,	// (0x00013926) input_focus_pane_vc_g3

0x2d57,	// (0x0001392e) input_focus_pane_vc_g4

0x2d5f,	// (0x00013936) input_focus_pane_vc_g5

0x2d67,	// (0x0001393e) input_focus_pane_vc_g6

0x2d6f,	// (0x00013946) input_focus_pane_vc_g7

0x2d77,	// (0x0001394e) input_focus_pane_vc_g8

0x2d7f,	// (0x00013956) input_focus_pane_vc_g9

0xe88b,	// (0x0001f462) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x00020237) input_focus_pane_vc_g

0x44d8,	// (0x000150af) data_form_pane_vc_ParamLimits

0x44d8,	// (0x000150af) data_form_pane_vc

0x44e4,	// (0x000150bb) form_field_data_pane_vc_g1

0x670e,	// (0x000172e5) form_field_data_pane_vc_t1_ParamLimits

0x670e,	// (0x000172e5) form_field_data_pane_vc_t1

0x2c10,	// (0x000137e7) input_focus_pane_vc_ParamLimits

0x2c10,	// (0x000137e7) input_focus_pane_vc

0x6728,	// (0x000172ff) button_value_adjust_pane_cp3_vc

0x6730,	// (0x00017307) button_value_adjust_pane_cp5_vc

0x6738,	// (0x0001730f) form_field_data_pane_vc_ParamLimits

0x6738,	// (0x0001730f) form_field_data_pane_vc

0x674f,	// (0x00017326) form_field_data_pane_vc_cp2

0x6757,	// (0x0001732e) form_field_data_wide_pane_vc_ParamLimits

0x6757,	// (0x0001732e) form_field_data_wide_pane_vc

0x676d,	// (0x00017344) form_field_data_wide_pane_vc_cp2

0x6775,	// (0x0001734c) form_field_popup_pane_vc_ParamLimits

0x6775,	// (0x0001734c) form_field_popup_pane_vc

0x678c,	// (0x00017363) form_field_popup_wide_pane_vc_ParamLimits

0x678c,	// (0x00017363) form_field_popup_wide_pane_vc

0x67a2,	// (0x00017379) form_field_slider_pane_vc_ParamLimits

0x67a2,	// (0x00017379) form_field_slider_pane_vc

0x67b5,	// (0x0001738c) form_field_slider_wide_pane_vc_ParamLimits

0x67b5,	// (0x0001738c) form_field_slider_wide_pane_vc

0xd6f5,	// (0x0001e2cc) grid_touch_1_pane_ParamLimits

0xd6f5,	// (0x0001e2cc) grid_touch_1_pane

0xd709,	// (0x0001e2e0) grid_touch_2_pane_ParamLimits

0xd709,	// (0x0001e2e0) grid_touch_2_pane

0x6899,	// (0x00017470) touch_pane_g1_ParamLimits

0x6899,	// (0x00017470) touch_pane_g1

0x67ec,	// (0x000173c3) cell_app_pane_cp_wide_ParamLimits

0x67ec,	// (0x000173c3) cell_app_pane_cp_wide

0x67fd,	// (0x000173d4) grid_popup_fast_wide_pane_ParamLimits

0x67fd,	// (0x000173d4) grid_popup_fast_wide_pane

0x6811,	// (0x000173e8) scroll_pane_cp19_ParamLimits

0x6811,	// (0x000173e8) scroll_pane_cp19

0xe895,	// (0x0001f46c) bg_popup_window_pane_cp20

0x6825,	// (0x000173fc) listscroll_popup_fast_wide_pane

0xd733,	// (0x0001e30a) grid_indicator_nsta_pane

0x683f,	// (0x00017416) clock_nsta_pane_g1

0x6848,	// (0x0001741f) clock_nsta_pane_t1

0xd73f,	// (0x0001e316) cell_indicator_nsta_pane_ParamLimits

0xd73f,	// (0x0001e316) cell_indicator_nsta_pane

0x6899,	// (0x00017470) cell_indicator_nsta_pane_g1

0xd75a,	// (0x0001e331) cell_indicator_nsta_pane_g2

0x0001,

0xfa6b,	// (0x00020642) cell_indicator_nsta_pane_g

0x68b9,	// (0x00017490) clock_nsta_pane_cp

0x68c2,	// (0x00017499) indicator_nsta_pane_cp

0x68cc,	// (0x000174a3) nsta_clock_indic_pane_g1

0x1ef5,	// (0x00012acc) grid_indicator_pane

0x3338,	// (0x00013f0f) scroll_pane_cp29

0xf356,	// (0x0001ff2d) indicator_nsta_pane_cp2_ParamLimits

0xf356,	// (0x0001ff2d) indicator_nsta_pane_cp2

0x1e12,	// (0x000129e9) main_apps_wheel_pane

0x4730,	// (0x00015307) form_midp_field_text_pane_ParamLimits

0x487b,	// (0x00015452) scroll_bar_cp050_ParamLimits

0x6925,	// (0x000174fc) cell_indicator_pane_ParamLimits

0x6925,	// (0x000174fc) cell_indicator_pane

0x693c,	// (0x00017513) cell_indicator_pane_g1

0xd767,	// (0x0001e33e) grid_wheel_folder_pane_ParamLimits

0xd767,	// (0x0001e33e) grid_wheel_folder_pane

0xd775,	// (0x0001e34c) list_wheel_apps_pane_ParamLimits

0xd775,	// (0x0001e34c) list_wheel_apps_pane

0xd7ab,	// (0x0001e382) main_apps_wheel_pane_g1_ParamLimits

0xd7ab,	// (0x0001e382) main_apps_wheel_pane_g1

0xd7b7,	// (0x0001e38e) main_apps_wheel_pane_g2_ParamLimits

0xd7b7,	// (0x0001e38e) main_apps_wheel_pane_g2

0x0001,

0xfa87,	// (0x0002065e) main_apps_wheel_pane_g_ParamLimits

0xfa87,	// (0x0002065e) main_apps_wheel_pane_g

0xd7c5,	// (0x0001e39c) main_apps_wheel_pane_t1_ParamLimits

0xd7c5,	// (0x0001e39c) main_apps_wheel_pane_t1

0xd7d9,	// (0x0001e3b0) list_wheel_apps_pane_g1

0xd7e1,	// (0x0001e3b8) list_wheel_apps_pane_g2

0xd7e9,	// (0x0001e3c0) list_wheel_apps_pane_g3

0xd7f1,	// (0x0001e3c8) list_wheel_apps_pane_g4

0xd7fb,	// (0x0001e3d2) list_wheel_apps_pane_g5

0x0004,

0xfa8c,	// (0x00020663) list_wheel_apps_pane_g

0x395b,	// (0x00014532) navi_icon_text_pane

0xcd95,	// (0x0001d96c) aid_fill_nsta

0x6a01,	// (0x000175d8) navi_icon_text_pane_g1

0x6a0d,	// (0x000175e4) navi_icon_text_pane_t1

0x37f9,	// (0x000143d0) list_set_graphic_pane_t1_ParamLimits

0x37f9,	// (0x000143d0) list_set_graphic_pane_t1

0x4fe6,	// (0x00015bbd) popup_midp_note_alarm_window_t6_ParamLimits

0x4fe6,	// (0x00015bbd) popup_midp_note_alarm_window_t6

0x4ff8,	// (0x00015bcf) popup_midp_note_alarm_window_t7_ParamLimits

0x4ff8,	// (0x00015bcf) popup_midp_note_alarm_window_t7

0x500a,	// (0x00015be1) popup_midp_note_alarm_window_t8_ParamLimits

0x500a,	// (0x00015be1) popup_midp_note_alarm_window_t8

0x501c,	// (0x00015bf3) popup_midp_note_alarm_window_t9_ParamLimits

0x501c,	// (0x00015bf3) popup_midp_note_alarm_window_t9

0x502e,	// (0x00015c05) popup_midp_note_alarm_window_t10_ParamLimits

0x502e,	// (0x00015c05) popup_midp_note_alarm_window_t10

0x5040,	// (0x00015c17) popup_midp_note_alarm_window_t11_ParamLimits

0x5040,	// (0x00015c17) popup_midp_note_alarm_window_t11

0x5052,	// (0x00015c29) scroll_pane_cp17_ParamLimits

0x5052,	// (0x00015c29) scroll_pane_cp17

0x086a,	// (0x00011441) volume_small_pane_cp_g1

0x0b5f,	// (0x00011736) volume_small_pane_cp_g2

0x0b68,	// (0x0001173f) volume_small_pane_cp_g3

0x0b71,	// (0x00011748) volume_small_pane_cp_g4

0x0b7a,	// (0x00011751) volume_small_pane_cp_g5

0x0b83,	// (0x0001175a) volume_small_pane_cp_g6

0x0b8c,	// (0x00011763) volume_small_pane_cp_g7

0x0b95,	// (0x0001176c) volume_small_pane_cp_g8

0x0b9e,	// (0x00011775) volume_small_pane_cp_g9

0x0ba7,	// (0x0001177e) volume_small_pane_cp_g10

0x3bb9,	// (0x00014790) midp_ticker_pane_g1_ParamLimits

0x3bc5,	// (0x0001479c) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x00020303) midp_ticker_pane_g_ParamLimits

0x3bd1,	// (0x000147a8) midp_ticker_pane_t1_ParamLimits

0xcdb9,	// (0x0001d990) aid_fill_nsta_2

0x4867,	// (0x0001543e) list_form2_midp_pane

0x59e0,	// (0x000165b7) midp_editing_number_pane_ParamLimits

0x59ef,	// (0x000165c6) midp_ticker_pane_ParamLimits

0x6a1f,	// (0x000175f6) form2_midp_field_pane

0x6a43,	// (0x0001761a) scroll_pane_cp51

0x6a63,	// (0x0001763a) form2_midp_button_pane_ParamLimits

0x6a63,	// (0x0001763a) form2_midp_button_pane

0x6a75,	// (0x0001764c) form2_midp_content_pane_ParamLimits

0x6a75,	// (0x0001764c) form2_midp_content_pane

0x6a8f,	// (0x00017666) form2_midp_field_choice_group_pane

0x6a97,	// (0x0001766e) form2_midp_field_pane_g1

0x6a9f,	// (0x00017676) form2_midp_field_pane_g2

0x6aa7,	// (0x0001767e) form2_midp_field_pane_g3

0x6aaf,	// (0x00017686) form2_midp_field_pane_g4

0x0003,

0xfab1,	// (0x00020688) form2_midp_field_pane_g

0x6ab7,	// (0x0001768e) form2_midp_gauge_slider_pane

0x6abf,	// (0x00017696) form2_midp_gauge_wait_pane

0x6ac7,	// (0x0001769e) form2_midp_image_pane_ParamLimits

0x6ac7,	// (0x0001769e) form2_midp_image_pane

0x6ae2,	// (0x000176b9) form2_midp_label_pane_ParamLimits

0x6ae2,	// (0x000176b9) form2_midp_label_pane

0xd82e,	// (0x0001e405) form2_midp_label_pane_cp_ParamLimits

0xd82e,	// (0x0001e405) form2_midp_label_pane_cp

0x6b1c,	// (0x000176f3) form2_midp_string_pane_ParamLimits

0x6b1c,	// (0x000176f3) form2_midp_string_pane

0xd84d,	// (0x0001e424) form2_midp_text_pane_ParamLimits

0xd84d,	// (0x0001e424) form2_midp_text_pane

0x6b4b,	// (0x00017722) form2_midp_time_pane

0x6b5b,	// (0x00017732) input_focus_pane_cp51_ParamLimits

0x6b5b,	// (0x00017732) input_focus_pane_cp51

0x6b73,	// (0x0001774a) form2_midp_label_pane_t1_ParamLimits

0x6b73,	// (0x0001774a) form2_midp_label_pane_t1

0xd866,	// (0x0001e43d) form2_mdip_text_pane_t1_ParamLimits

0xd866,	// (0x0001e43d) form2_mdip_text_pane_t1

0x6bd3,	// (0x000177aa) form2_midp_time_pane_t1

0x6bee,	// (0x000177c5) form2_midp_gauge_slider_pane_t1

0xd881,	// (0x0001e458) form2_midp_gauge_slider_pane_t2

0xd893,	// (0x0001e46a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaba,	// (0x00020691) form2_midp_gauge_slider_pane_t

0x6c24,	// (0x000177fb) form2_midp_slider_pane

0x6c30,	// (0x00017807) form2_midp_gauge_wait_pane_t1

0x6c3e,	// (0x00017815) form2_midp_wait_pane_ParamLimits

0x6c3e,	// (0x00017815) form2_midp_wait_pane

0xd8a5,	// (0x0001e47c) list_single_2graphic_pane_cp4_ParamLimits

0xd8a5,	// (0x0001e47c) list_single_2graphic_pane_cp4

0xd1d3,	// (0x0001ddaa) list_single_midp_graphic_pane_cp_ParamLimits

0xd1d3,	// (0x0001ddaa) list_single_midp_graphic_pane_cp

0xe895,	// (0x0001f46c) list_highlight_pane_cp20

0x6c8d,	// (0x00017864) list_single_2graphic_pane_g1_cp4

0x6c95,	// (0x0001786c) list_single_2graphic_pane_g2_cp4

0x6c9d,	// (0x00017874) list_single_2graphic_pane_t1_cp4

0x1e12,	// (0x000129e9) list_highlight_pane_cp21

0x6cac,	// (0x00017883) list_single_midp_graphic_pane_g4_cp

0x6cbb,	// (0x00017892) list_single_midp_graphic_pane_t1_cp

0xd8b9,	// (0x0001e490) form2_mdip_string_pane_t1_ParamLimits

0xd8b9,	// (0x0001e490) form2_mdip_string_pane_t1

0xe895,	// (0x0001f46c) bg_wml_button_pane_cp2

0xe88b,	// (0x0001f462) form2_midp_image_pane_g1

0x28da,	// (0x000134b1) list_double_large_graphic_pane_g5_ParamLimits

0x28da,	// (0x000134b1) list_double_large_graphic_pane_g5

0xcc87,	// (0x0001d85e) midp_form_pane_ParamLimits

0x1e12,	// (0x000129e9) main_apps_wheel_pane_ParamLimits

0xb822,	// (0x0001c3f9) popup_preview_window_ParamLimits

0xb822,	// (0x0001c3f9) popup_preview_window

0x0665,	// (0x0001123c) popup_touch_info_window_ParamLimits

0x0665,	// (0x0001123c) popup_touch_info_window

0x0683,	// (0x0001125a) popup_touch_menu_window_ParamLimits

0x0683,	// (0x0001125a) popup_touch_menu_window

0xe881,	// (0x0001f458) bg_popup_sub_pane_cp6

0x6dc9,	// (0x000179a0) list_touch_menu_pane

0x6dd1,	// (0x000179a8) list_single_touch_menu_pane_ParamLimits

0x6dd1,	// (0x000179a8) list_single_touch_menu_pane

0x6de7,	// (0x000179be) list_single_touch_menu_pane_t1

0x1e12,	// (0x000129e9) bg_popup_sub_pane_cp7_ParamLimits

0x1e12,	// (0x000129e9) bg_popup_sub_pane_cp7

0x489b,	// (0x00015472) heading_sub_pane

0x6df5,	// (0x000179cc) list_touch_info_pane_ParamLimits

0x6df5,	// (0x000179cc) list_touch_info_pane

0x6e05,	// (0x000179dc) list_single_touch_info_pane_ParamLimits

0x6e05,	// (0x000179dc) list_single_touch_info_pane

0x6e17,	// (0x000179ee) list_single_touch_info_pane_t1

0x6e25,	// (0x000179fc) list_single_touch_info_pane_t2

0x0001,

0xfac8,	// (0x0002069f) list_single_touch_info_pane_t

0x3adc,	// (0x000146b3) bg_popup_heading_pane_cp

0x6e33,	// (0x00017a0a) heading_sub_pane_t1

0x4472,	// (0x00015049) bg_popup_preview_window_pane_cp_ParamLimits

0x4472,	// (0x00015049) bg_popup_preview_window_pane_cp

0x489b,	// (0x00015472) heading_preview_pane

0x6df5,	// (0x000179cc) list_preview_pane_ParamLimits

0x6df5,	// (0x000179cc) list_preview_pane

0x6e41,	// (0x00017a18) popup_preview_window_g1

0x6e05,	// (0x000179dc) list_single_preview_pane_ParamLimits

0x6e05,	// (0x000179dc) list_single_preview_pane

0x6e49,	// (0x00017a20) list_single_preview_pane_g1

0x6e51,	// (0x00017a28) list_single_preview_pane_t1

0x6e17,	// (0x000179ee) list_single_preview_pane_t2

0x0001,

0xfacd,	// (0x000206a4) list_single_preview_pane_t

0x6e5f,	// (0x00017a36) bg_popup_heading_pane_cp2_ParamLimits

0x6e5f,	// (0x00017a36) bg_popup_heading_pane_cp2

0x6e75,	// (0x00017a4c) heading_preview_pane_g1

0x6e7d,	// (0x00017a54) heading_preview_pane_t1_ParamLimits

0x6e7d,	// (0x00017a54) heading_preview_pane_t1

0x1f18,	// (0x00012aef) soft_indicator_pane_t1_ParamLimits

0x262c,	// (0x00013203) scroll_pane_ParamLimits

0x3231,	// (0x00013e08) scroll_sc2_left_pane

0x323a,	// (0x00013e11) scroll_sc2_right_pane

0x3259,	// (0x00013e30) scroll_bg_pane_g1_ParamLimits

0x326e,	// (0x00013e45) scroll_bg_pane_g2_ParamLimits

0x3286,	// (0x00013e5d) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0002028e) scroll_bg_pane_g_ParamLimits

0x3259,	// (0x00013e30) scroll_handle_pane_g1_ParamLimits

0x32a8,	// (0x00013e7f) scroll_handle_pane_g2_ParamLimits

0x3286,	// (0x00013e5d) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x00020295) scroll_handle_pane_g_ParamLimits

0x0129,	// (0x00010d00) popup_choice_list_window_ParamLimits

0x0129,	// (0x00010d00) popup_choice_list_window

0x4284,	// (0x00014e5b) choice_list_pane

0x431c,	// (0x00014ef3) cell_toolbar_pane_t1

0x4344,	// (0x00014f1b) toolbar_button_pane_ParamLimits

0x550c,	// (0x000160e3) ai_gene_pane_1_t2_ParamLimits

0x550c,	// (0x000160e3) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x000204b8) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x000204b8) ai_gene_pane_1_t

0x6e9a,	// (0x00017a71) scroll_sc2_left_pane_g1

0x6e9a,	// (0x00017a71) scroll_sc2_right_pane_g1

0x3e08,	// (0x000149df) bg_popup_sub_pane_cp10

0x6ea4,	// (0x00017a7b) list_choice_list_pane

0x6ebd,	// (0x00017a94) list_single_choice_list_pane_ParamLimits

0x6ebd,	// (0x00017a94) list_single_choice_list_pane

0x6ed0,	// (0x00017aa7) list_single_choice_list_pane_g1

0x2f37,	// (0x00013b0e) list_single_choice_list_pane_t1_ParamLimits

0x2f37,	// (0x00013b0e) list_single_choice_list_pane_t1

0x6ed8,	// (0x00017aaf) choice_list_pane_g1

0x6ee0,	// (0x00017ab7) choice_list_pane_t1

0xe881,	// (0x0001f458) input_focus_pane_cp11

0x310e,	// (0x00013ce5) title_pane_stacon_g2_ParamLimits

0x310e,	// (0x00013ce5) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x00020274) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x00020274) title_pane_stacon_g

0x3adc,	// (0x000146b3) cursor_press_pane

0xb4c9,	// (0x0001c0a0) popup_fep_hwr_window_ParamLimits

0xb4c9,	// (0x0001c0a0) popup_fep_hwr_window

0x024f,	// (0x00010e26) popup_fep_vkb_window_ParamLimits

0x024f,	// (0x00010e26) popup_fep_vkb_window

0x6eee,	// (0x00017ac5) cursor_press_pane_g1

0x0002,

0xfaf6,	// (0x000206cd) fep_vkb_side_pane_g_ParamLimits

0x0be9,	// (0x000117c0) fep_hwr_candidate_pane_ParamLimits

0x0be9,	// (0x000117c0) fep_hwr_candidate_pane

0x0c13,	// (0x000117ea) fep_hwr_side_pane_ParamLimits

0x0c13,	// (0x000117ea) fep_hwr_side_pane

0x0c33,	// (0x0001180a) fep_hwr_top_pane_ParamLimits

0x0c33,	// (0x0001180a) fep_hwr_top_pane

0x0c4b,	// (0x00011822) fep_hwr_write_pane_ParamLimits

0x0c4b,	// (0x00011822) fep_hwr_write_pane

0xfaf6,	// (0x000206cd) fep_vkb_side_pane_g

0x6ef6,	// (0x00017acd) fep_hwr_top_pane_g1

0x6f08,	// (0x00017adf) fep_hwr_top_pane_g2

0x0c85,	// (0x0001185c) fep_hwr_top_pane_g3

0x0002,

0xfad2,	// (0x000206a9) fep_hwr_top_pane_g

0x0c9a,	// (0x00011871) fep_hwr_top_text_pane

0x3428,	// (0x00013fff) fep_hwr_top_text_pane_g1

0x6f3e,	// (0x00017b15) fep_hwr_top_text_pane_t1

0x0d90,	// (0x00011967) fep_hwr_candidate_pane_g1

0x7191,	// (0x00017d68) fep_vkb_keypad_pane_g3_ParamLimits

0x7191,	// (0x00017d68) fep_vkb_keypad_pane_g3

0x71b9,	// (0x00017d90) fep_vkb_keypad_pane_g4_ParamLimits

0x71b9,	// (0x00017d90) fep_vkb_keypad_pane_g4

0x7228,	// (0x00017dff) fep_vkb_bottom_pane_g2_ParamLimits

0x7228,	// (0x00017dff) fep_vkb_bottom_pane_g2

0x0001,

0xfafd,	// (0x000206d4) fep_vkb_bottom_pane_g_ParamLimits

0xfafd,	// (0x000206d4) fep_vkb_bottom_pane_g

0x6e9a,	// (0x00017a71) cell_vkb_side_pane_g2

0x0001,

0xfb07,	// (0x000206de) cell_vkb_side_pane_g

0x72b3,	// (0x00017e8a) cell_vkb_side_pane_t1

0x72c1,	// (0x00017e98) cell_vkb_side_pane_t1_copy1

0x6e9a,	// (0x00017a71) bg_fep_vkb_candidate_pane_g2

0x73ed,	// (0x00017fc4) cell_vkb_candidate_pane_ParamLimits

0x6f4c,	// (0x00017b23) aid_size_cell_vkb_ParamLimits

0x6f4c,	// (0x00017b23) aid_size_cell_vkb

0x73ed,	// (0x00017fc4) cell_vkb_candidate_pane

0x0db7,	// (0x0001198e) bg_popup_fep_shadow_pane_g1

0xd93b,	// (0x0001e512) fep_vkb_bottom_pane_ParamLimits

0xd93b,	// (0x0001e512) fep_vkb_bottom_pane

0x7010,	// (0x00017be7) fep_vkb_candidate_pane_ParamLimits

0x7010,	// (0x00017be7) fep_vkb_candidate_pane

0xd960,	// (0x0001e537) fep_vkb_keypad_pane_ParamLimits

0xd960,	// (0x0001e537) fep_vkb_keypad_pane

0xd99c,	// (0x0001e573) fep_vkb_side_pane_ParamLimits

0xd99c,	// (0x0001e573) fep_vkb_side_pane

0xd9d8,	// (0x0001e5af) fep_vkb_top_pane_ParamLimits

0xd9d8,	// (0x0001e5af) fep_vkb_top_pane

0x70ea,	// (0x00017cc1) fep_vkb_top_pane_g1_ParamLimits

0x70ea,	// (0x00017cc1) fep_vkb_top_pane_g1

0x70f9,	// (0x00017cd0) fep_vkb_top_pane_g2_ParamLimits

0x70f9,	// (0x00017cd0) fep_vkb_top_pane_g2

0x7108,	// (0x00017cdf) fep_vkb_top_pane_g3_ParamLimits

0x7108,	// (0x00017cdf) fep_vkb_top_pane_g3

0x0003,

0xfaed,	// (0x000206c4) fep_vkb_top_pane_g_ParamLimits

0xfaed,	// (0x000206c4) fep_vkb_top_pane_g

0x7126,	// (0x00017cfd) fep_vkb_top_text_pane_ParamLimits

0x7126,	// (0x00017cfd) fep_vkb_top_text_pane

0xda14,	// (0x0001e5eb) fep_vkb_side_pane_g1_ParamLimits

0xda14,	// (0x0001e5eb) fep_vkb_side_pane_g1

0x7180,	// (0x00017d57) grid_vkb_side_pane_ParamLimits

0x7180,	// (0x00017d57) grid_vkb_side_pane

0x0dbf,	// (0x00011996) bg_popup_fep_shadow_pane_g2

0x0dc8,	// (0x0001199f) bg_popup_fep_shadow_pane_g3

0x0dd0,	// (0x000119a7) bg_popup_fep_shadow_pane_g4

0x0dd9,	// (0x000119b0) bg_popup_fep_shadow_pane_g5

0x0de3,	// (0x000119ba) bg_popup_fep_shadow_pane_g6

0x0deb,	// (0x000119c2) bg_popup_fep_shadow_pane_g7

0x2d57,	// (0x0001392e) bg_popup_fep_shadow_pane_g8

0x71d7,	// (0x00017dae) grid_vkb_keypad_number_pane_ParamLimits

0x71d7,	// (0x00017dae) grid_vkb_keypad_number_pane

0x71e7,	// (0x00017dbe) grid_vkb_keypad_pane_ParamLimits

0x71e7,	// (0x00017dbe) grid_vkb_keypad_pane

0x720d,	// (0x00017de4) fep_vkb_bottom_pane_g1_ParamLimits

0x720d,	// (0x00017de4) fep_vkb_bottom_pane_g1

0x7236,	// (0x00017e0d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7236,	// (0x00017e0d) grid_vkb_keypad_bottom_left_pane

0x724b,	// (0x00017e22) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x724b,	// (0x00017e22) grid_vkb_keypad_bottom_right_pane

0x7260,	// (0x00017e37) fep_vkb_top_text_pane_g1

0xda5b,	// (0x0001e632) fep_vkb_top_text_pane_t1

0xda6d,	// (0x0001e644) cell_vkb_side_pane_ParamLimits

0xda6d,	// (0x0001e644) cell_vkb_side_pane

0x6e9a,	// (0x00017a71) cell_vkb_side_pane_g1

0x72cf,	// (0x00017ea6) cell_vkb_keypad_pane_ParamLimits

0x72cf,	// (0x00017ea6) cell_vkb_keypad_pane

0x7344,	// (0x00017f1b) cell_vkb_keypad_pane_g1

0x0008,

0xfb1a,	// (0x000206f1) bg_popup_fep_shadow_pane_g

0x0dfd,	// (0x000119d4) cell_hwr_side_pane_g1

0x0dfd,	// (0x000119d4) cell_hwr_side_pane_g2

0x734e,	// (0x00017f25) cell_vkb_keypad_pane_t1

0xda83,	// (0x0001e65a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xda83,	// (0x0001e65a) cell_vkb_keypad_bottom_left_pane

0xda98,	// (0x0001e66f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xda98,	// (0x0001e66f) cell_vkb_keypad_bottom_right_pane

0x6e9a,	// (0x00017a71) cell_vkb_keypad_bottom_left_pane_g1

0x6e9a,	// (0x00017a71) cell_vkb_keypad_bottom_right_pane_g1

0x73b2,	// (0x00017f89) cell_vkb_keypad_number_pane_ParamLimits

0x73b2,	// (0x00017f89) cell_vkb_keypad_number_pane

0x73d1,	// (0x00017fa8) cell_vkb_keypad_number_pane_g1

0x73db,	// (0x00017fb2) cell_vkb_keypad_number_pane_g2

0x73e4,	// (0x00017fbb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb0c,	// (0x000206e3) cell_vkb_keypad_number_pane_g

0x734e,	// (0x00017f25) cell_vkb_keypad_number_pane_t1

0x7408,	// (0x00017fdf) fep_vkb_candidate_pane_g1

0x0001,

0xfb2d,	// (0x00020704) cell_hwr_side_pane_g

0x7421,	// (0x00017ff8) cell_hwr_side_pane_t1

0x0e07,	// (0x000119de) cell_hwr_side_pane_t1_copy1

0x0e15,	// (0x000119ec) cell_hwr_candidate_pane_g1

0x0e44,	// (0x00011a1b) cell_hwr_candidate_pane_t1

0x6e9a,	// (0x00017a71) cell_vkb_candidate_pane_g2

0x7465,	// (0x0001803c) cell_vkb_candidate_pane_t1

0x0bb0,	// (0x00011787) bg_popup_fep_shadow_pane_ParamLimits

0x0bb0,	// (0x00011787) bg_popup_fep_shadow_pane

0x0c65,	// (0x0001183c) bg_fep_hwr_top_pane_g4

0x6f1a,	// (0x00017af1) bg_hwr_side_pane_g1_ParamLimits

0x6f1a,	// (0x00017af1) bg_hwr_side_pane_g1

0xbb5c,	// (0x0001c733) cell_hwr_side_pane_ParamLimits

0xbb5c,	// (0x0001c733) cell_hwr_side_pane

0x0d11,	// (0x000118e8) fep_hwr_write_pane_g1_ParamLimits

0x0d11,	// (0x000118e8) fep_hwr_write_pane_g1

0x0d1e,	// (0x000118f5) fep_hwr_write_pane_g2_ParamLimits

0x0d1e,	// (0x000118f5) fep_hwr_write_pane_g2

0x0d2b,	// (0x00011902) fep_hwr_write_pane_g3_ParamLimits

0x0d2b,	// (0x00011902) fep_hwr_write_pane_g3

0xbb7c,	// (0x0001c753) fep_hwr_write_pane_g4_ParamLimits

0xbb7c,	// (0x0001c753) fep_hwr_write_pane_g4

0x0005,

0xfad9,	// (0x000206b0) fep_hwr_write_pane_g_ParamLimits

0xfad9,	// (0x000206b0) fep_hwr_write_pane_g

0x0c65,	// (0x0001183c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c65,	// (0x0001183c) bg_fep_hwr_candidate_pane_g2

0x0d4e,	// (0x00011925) cell_hwr_candidate_pane_ParamLimits

0x0d4e,	// (0x00011925) cell_hwr_candidate_pane

0x0d90,	// (0x00011967) fep_hwr_candidate_pane_g1_ParamLimits

0x6f7a,	// (0x00017b51) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6f7a,	// (0x00017b51) bg_popup_fep_shadow_pane_cp2

0x7118,	// (0x00017cef) fep_vkb_top_pane_g4_ParamLimits

0x7118,	// (0x00017cef) fep_vkb_top_pane_g4

0x715e,	// (0x00017d35) fep_vkb_side_pane_g2_ParamLimits

0x715e,	// (0x00017d35) fep_vkb_side_pane_g2

0xc87e,	// (0x0001d455) list_setting_pane_t4_ParamLimits

0xc87e,	// (0x0001d455) list_setting_pane_t4

0xc8f8,	// (0x0001d4cf) list_setting_number_pane_t5_ParamLimits

0xc8f8,	// (0x0001d4cf) list_setting_number_pane_t5

0x345f,	// (0x00014036) list_double_heading_pane_cp2_ParamLimits

0x345f,	// (0x00014036) list_double_heading_pane_cp2

0x2c36,	// (0x0001380d) list_double_heading_pane_g1_cp2_ParamLimits

0x2c36,	// (0x0001380d) list_double_heading_pane_g1_cp2

0x2c42,	// (0x00013819) list_double_heading_pane_g2_cp2_ParamLimits

0x2c42,	// (0x00013819) list_double_heading_pane_g2_cp2

0x7473,	// (0x0001804a) list_double_heading_pane_t1_cp2_ParamLimits

0x7473,	// (0x0001804a) list_double_heading_pane_t1_cp2

0x7489,	// (0x00018060) list_double_heading_pane_t2_cp2_ParamLimits

0x7489,	// (0x00018060) list_double_heading_pane_t2_cp2

0xe879,	// (0x0001f450) aid_value_unit2

0xeff6,	// (0x0001fbcd) popup_preview_fixed_window

0x20b5,	// (0x00012c8c) bg_popup_preview_window_pane_cp02

0x749b,	// (0x00018072) list_preview_fixed_pane

0x74e1,	// (0x000180b8) list_empty_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_empty_pane_fp

0x74e1,	// (0x000180b8) list_single_cale_day_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_cale_day_pane_fp

0x74e1,	// (0x000180b8) list_single_graphic_heading_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_graphic_heading_pane_fp

0x74e1,	// (0x000180b8) list_single_graphic_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_graphic_pane_fp

0x74e1,	// (0x000180b8) list_single_heading_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_heading_pane_fp

0x74e1,	// (0x000180b8) list_single_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_pane_fp

0x74f6,	// (0x000180cd) list_single_pane_fp_g1_ParamLimits

0x74f6,	// (0x000180cd) list_single_pane_fp_g1

0x2c36,	// (0x0001380d) list_single_pane_fp_g2_ParamLimits

0x2c36,	// (0x0001380d) list_single_pane_fp_g2

0x2c42,	// (0x00013819) list_single_pane_fp_g3_ParamLimits

0x2c42,	// (0x00013819) list_single_pane_fp_g3

0x7502,	// (0x000180d9) list_single_pane_fp_g4_ParamLimits

0x7502,	// (0x000180d9) list_single_pane_fp_g4

0x0003,

0xfb40,	// (0x00020717) list_single_pane_fp_g_ParamLimits

0xfb40,	// (0x00020717) list_single_pane_fp_g

0x750e,	// (0x000180e5) list_single_pane_fp_t1_ParamLimits

0x750e,	// (0x000180e5) list_single_pane_fp_t1

0x7525,	// (0x000180fc) list_single_graphic_pane_fp_g1_ParamLimits

0x7525,	// (0x000180fc) list_single_graphic_pane_fp_g1

0x74f6,	// (0x000180cd) list_single_graphic_pane_fp_g2_ParamLimits

0x74f6,	// (0x000180cd) list_single_graphic_pane_fp_g2

0x2c36,	// (0x0001380d) list_single_graphic_pane_fp_g3_ParamLimits

0x2c36,	// (0x0001380d) list_single_graphic_pane_fp_g3

0x2c42,	// (0x00013819) list_single_graphic_pane_fp_g4_ParamLimits

0x2c42,	// (0x00013819) list_single_graphic_pane_fp_g4

0x7502,	// (0x000180d9) list_single_graphic_pane_fp_g5_ParamLimits

0x7502,	// (0x000180d9) list_single_graphic_pane_fp_g5

0x0004,

0xfb49,	// (0x00020720) list_single_graphic_pane_fp_g_ParamLimits

0xfb49,	// (0x00020720) list_single_graphic_pane_fp_g

0x7531,	// (0x00018108) list_single_graphic_pane_fp_t1_ParamLimits

0x7531,	// (0x00018108) list_single_graphic_pane_fp_t1

0x7525,	// (0x000180fc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7525,	// (0x000180fc) list_single_graphic_heading_pane_fp_g1

0x74f6,	// (0x000180cd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x74f6,	// (0x000180cd) list_single_graphic_heading_pane_fp_g2

0x2c36,	// (0x0001380d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2c36,	// (0x0001380d) list_single_graphic_heading_pane_fp_g3

0x2c42,	// (0x00013819) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2c42,	// (0x00013819) list_single_graphic_heading_pane_fp_g4

0x7502,	// (0x000180d9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7502,	// (0x000180d9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00020720) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00020720) list_single_graphic_heading_pane_fp_g

0x7547,	// (0x0001811e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7547,	// (0x0001811e) list_single_graphic_heading_pane_fp_t1

0x755d,	// (0x00018134) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x755d,	// (0x00018134) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb54,	// (0x0002072b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb54,	// (0x0002072b) list_single_graphic_heading_pane_fp_t

0x756f,	// (0x00018146) list_single_cale_day_pane_fp_g1_ParamLimits

0x756f,	// (0x00018146) list_single_cale_day_pane_fp_g1

0x75a7,	// (0x0001817e) list_single_cale_day_pane_fp_g2_ParamLimits

0x75a7,	// (0x0001817e) list_single_cale_day_pane_fp_g2

0x75b3,	// (0x0001818a) list_single_cale_day_pane_fp_g3_ParamLimits

0x75b3,	// (0x0001818a) list_single_cale_day_pane_fp_g3

0x75db,	// (0x000181b2) list_single_cale_day_pane_fp_g4_ParamLimits

0x75db,	// (0x000181b2) list_single_cale_day_pane_fp_g4

0x75ff,	// (0x000181d6) list_single_cale_day_pane_fp_g5_ParamLimits

0x75ff,	// (0x000181d6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb59,	// (0x00020730) list_single_cale_day_pane_fp_g_ParamLimits

0xfb59,	// (0x00020730) list_single_cale_day_pane_fp_g

0x7623,	// (0x000181fa) list_single_cale_day_pane_fp_t1_ParamLimits

0x7623,	// (0x000181fa) list_single_cale_day_pane_fp_t1

0x7649,	// (0x00018220) list_single_cale_day_pane_fp_t2_ParamLimits

0x7649,	// (0x00018220) list_single_cale_day_pane_fp_t2

0x7662,	// (0x00018239) list_single_cale_day_pane_fp_t3_ParamLimits

0x7662,	// (0x00018239) list_single_cale_day_pane_fp_t3

0x0002,

0xfb64,	// (0x0002073b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb64,	// (0x0002073b) list_single_cale_day_pane_fp_t

0x74f6,	// (0x000180cd) list_empty_pane_fp_g1_ParamLimits

0x74f6,	// (0x000180cd) list_empty_pane_fp_g1

0x767b,	// (0x00018252) list_empty_pane_fp_t1

0x7689,	// (0x00018260) list_empty_pane_fp_t2

0x0001,

0xfb6b,	// (0x00020742) list_empty_pane_fp_t

0x74f6,	// (0x000180cd) list_single_heading_pane_fp_g1_ParamLimits

0x74f6,	// (0x000180cd) list_single_heading_pane_fp_g1

0x2c36,	// (0x0001380d) list_single_heading_pane_fp_g2_ParamLimits

0x2c36,	// (0x0001380d) list_single_heading_pane_fp_g2

0x2c42,	// (0x00013819) list_single_heading_pane_fp_g3_ParamLimits

0x2c42,	// (0x00013819) list_single_heading_pane_fp_g3

0x0002,

0xfb70,	// (0x00020747) list_single_heading_pane_fp_g_ParamLimits

0xfb70,	// (0x00020747) list_single_heading_pane_fp_g

0x7697,	// (0x0001826e) list_single_heading_pane_fp_t1_ParamLimits

0x7697,	// (0x0001826e) list_single_heading_pane_fp_t1

0x76a9,	// (0x00018280) list_single_heading_pane_fp_t2_ParamLimits

0x76a9,	// (0x00018280) list_single_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x0002074e) list_single_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x0002074e) list_single_heading_pane_fp_t

0x2fa5,	// (0x00013b7c) aid_size_cell_fast

0x2025,	// (0x00012bfc) soft_indicator_pane_cp1_t1

0x2fe2,	// (0x00013bb9) cell_app_pane_cp2_ParamLimits

0x2fe2,	// (0x00013bb9) cell_app_pane_cp2

0x0bd2,	// (0x000117a9) fep_hwr_candidate_drop_down_list_pane

0x0daa,	// (0x00011981) fep_hwr_candidate_pane_g3_ParamLimits

0x0daa,	// (0x00011981) fep_hwr_candidate_pane_g3

0xe89f,	// (0x0001f476) fep_hwr_candidate_pane_g4_ParamLimits

0xe89f,	// (0x0001f476) fep_hwr_candidate_pane_g4

0x0002,

0xfae6,	// (0x000206bd) fep_hwr_candidate_pane_g_ParamLimits

0xfae6,	// (0x000206bd) fep_hwr_candidate_pane_g

0x6fff,	// (0x00017bd6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6fff,	// (0x00017bd6) fep_vkb_candidate_drop_down_list_pane

0x7410,	// (0x00017fe7) fep_vkb_candidate_pane_g3

0x7418,	// (0x00017fef) fep_vkb_candidate_pane_g4

0x0002,

0xfb13,	// (0x000206ea) fep_vkb_candidate_pane_g

0x0e15,	// (0x000119ec) cell_hwr_candidate_pane_g1_ParamLimits

0x0e23,	// (0x000119fa) cell_hwr_candidate_pane_g3_ParamLimits

0x0e23,	// (0x000119fa) cell_hwr_candidate_pane_g3

0x9124,	// (0x00019cfb) cell_hwr_candidate_pane_g4_ParamLimits

0x9124,	// (0x00019cfb) cell_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x00020709) cell_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x00020709) cell_hwr_candidate_pane_g

0x742f,	// (0x00018006) cell_vkb_candidate_pane_g3_ParamLimits

0x742f,	// (0x00018006) cell_vkb_candidate_pane_g3

0x744a,	// (0x00018021) cell_vkb_candidate_pane_g4_ParamLimits

0x744a,	// (0x00018021) cell_vkb_candidate_pane_g4

0x76bf,	// (0x00018296) cell_app_pane_cp2_g1_ParamLimits

0x76bf,	// (0x00018296) cell_app_pane_cp2_g1

0x76dd,	// (0x000182b4) cell_app_pane_cp2_g2_ParamLimits

0x76dd,	// (0x000182b4) cell_app_pane_cp2_g2

0x0001,

0xfb7c,	// (0x00020753) cell_app_pane_cp2_g_ParamLimits

0xfb7c,	// (0x00020753) cell_app_pane_cp2_g

0x76e9,	// (0x000182c0) cell_app_pane_cp2_t1_ParamLimits

0x76e9,	// (0x000182c0) cell_app_pane_cp2_t1

0x2c10,	// (0x000137e7) grid_highlight_pane_cp1_ParamLimits

0x2c10,	// (0x000137e7) grid_highlight_pane_cp1

0x0e62,	// (0x00011a39) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e62,	// (0x00011a39) cell_hwr_candidate_pane_cp1

0x0e15,	// (0x000119ec) fep_hwr_candidate_drop_down_list_pane_g1

0x0e81,	// (0x00011a58) fep_hwr_candidate_drop_down_list_pane_g2

0x0e8e,	// (0x00011a65) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00020758) fep_hwr_candidate_drop_down_list_pane_g

0x0e9b,	// (0x00011a72) fep_hwr_candidate_drop_down_list_scroll_pane

0x0ea4,	// (0x00011a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0ea4,	// (0x00011a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0eb1,	// (0x00011a88) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0eb1,	// (0x00011a88) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0ebe,	// (0x00011a95) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0ebe,	// (0x00011a95) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0ecb,	// (0x00011aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0ecb,	// (0x00011aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0ee6,	// (0x00011abd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0ee6,	// (0x00011abd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0f01,	// (0x00011ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0f01,	// (0x00011ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0f1c,	// (0x00011af3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0f1c,	// (0x00011af3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0f37,	// (0x00011b0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0f37,	// (0x00011b0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb88,	// (0x0002075f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb88,	// (0x0002075f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x76fb,	// (0x000182d2) cell_vkb_candidate_pane_cp1_ParamLimits

0x76fb,	// (0x000182d2) cell_vkb_candidate_pane_cp1

0x7118,	// (0x00017cef) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7118,	// (0x00017cef) fep_vkb_candidate_drop_down_list_pane_g1

0x771b,	// (0x000182f2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x771b,	// (0x000182f2) fep_vkb_candidate_drop_down_list_pane_g2

0x7728,	// (0x000182ff) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7728,	// (0x000182ff) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00020770) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb99,	// (0x00020770) fep_vkb_candidate_drop_down_list_pane_g

0x7735,	// (0x0001830c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7735,	// (0x0001830c) fep_vkb_candidate_drop_down_list_scroll_pane

0x7742,	// (0x00018319) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7742,	// (0x00018319) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x774f,	// (0x00018326) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x774f,	// (0x00018326) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x775b,	// (0x00018332) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x775b,	// (0x00018332) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7767,	// (0x0001833e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7767,	// (0x0001833e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7788,	// (0x0001835f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7788,	// (0x0001835f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x77a9,	// (0x00018380) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x77a9,	// (0x00018380) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x77ca,	// (0x000183a1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x77ca,	// (0x000183a1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x77eb,	// (0x000183c2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x77eb,	// (0x000183c2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00020777) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00020777) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc274,	// (0x0001ce4b) title_pane_g1_ParamLimits

0xc287,	// (0x0001ce5e) title_pane_g2_ParamLimits

0xf527,	// (0x000200fe) title_pane_g_ParamLimits

0x3418,	// (0x00013fef) aid_call2_pane

0x3420,	// (0x00013ff7) aid_call_pane

0x3428,	// (0x00013fff) popup_clock_analogue_window_g1

0x3428,	// (0x00013fff) popup_clock_analogue_window_g2

0xf257,	// (0x0001fe2e) popup_clock_analogue_window_g3

0xf260,	// (0x0001fe37) popup_clock_analogue_window_g4

0xe88b,	// (0x0001f462) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x000202a3) popup_clock_analogue_window_g

0xf268,	// (0x0001fe3f) popup_clock_analogue_window_t1

0xf276,	// (0x0001fe4d) clock_digital_number_pane_ParamLimits

0xf276,	// (0x0001fe4d) clock_digital_number_pane

0xf282,	// (0x0001fe59) clock_digital_number_pane_cp02_ParamLimits

0xf282,	// (0x0001fe59) clock_digital_number_pane_cp02

0xf28e,	// (0x0001fe65) clock_digital_number_pane_cp03_ParamLimits

0xf28e,	// (0x0001fe65) clock_digital_number_pane_cp03

0xf29a,	// (0x0001fe71) clock_digital_number_pane_cp04_ParamLimits

0xf29a,	// (0x0001fe71) clock_digital_number_pane_cp04

0xf2a6,	// (0x0001fe7d) clock_digital_separator_pane_ParamLimits

0xf2a6,	// (0x0001fe7d) clock_digital_separator_pane

0xf2b2,	// (0x0001fe89) popup_clock_digital_window_t1_ParamLimits

0xf2b2,	// (0x0001fe89) popup_clock_digital_window_t1

0xe88b,	// (0x0001f462) clock_digital_number_pane_g1

0xe88b,	// (0x0001f462) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x000202ae) clock_digital_number_pane_g

0xe88b,	// (0x0001f462) clock_digital_separator_pane_g1

0xe88b,	// (0x0001f462) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x000202ae) clock_digital_separator_pane_g

0xcd95,	// (0x0001d96c) aid_fill_nsta_ParamLimits

0xcecb,	// (0x0001daa2) indicator_nsta_pane_ParamLimits

0x4111,	// (0x00014ce8) popup_clock_analogue_window

0x4111,	// (0x00014ce8) popup_clock_digital_window

0xd733,	// (0x0001e30a) grid_indicator_nsta_pane_ParamLimits

0x6856,	// (0x0001742d) clock_nsta_pane_t2

0x0001,

0xfa66,	// (0x0002063d) clock_nsta_pane_t

0xf21b,	// (0x0001fdf2) aid_size_max_handle

0xf225,	// (0x0001fdfc) aid_size_min_handle

0x3adc,	// (0x000146b3) editor_scroll_pane

0x7806,	// (0x000183dd) ex_editor_pane

0x2f13,	// (0x00013aea) scroll_pane_cp13

0x2658,	// (0x0001322f) scroll_pane_cp14

0x3457,	// (0x0001402e) scroll_pane_cp36

0xcba2,	// (0x0001d779) list_single_graphic_hl_pane_cp2_ParamLimits

0xcba2,	// (0x0001d779) list_single_graphic_hl_pane_cp2

0xd583,	// (0x0001e15a) list_single_graphic_hl_pane_ParamLimits

0xd583,	// (0x0001e15a) list_single_graphic_hl_pane

0x780e,	// (0x000183e5) aid_size_min_hl_cp1

0x7817,	// (0x000183ee) list_highlight_pane_cp34_ParamLimits

0x7817,	// (0x000183ee) list_highlight_pane_cp34

0x7828,	// (0x000183ff) list_single_graphic_hl_pane_g1_ParamLimits

0x7828,	// (0x000183ff) list_single_graphic_hl_pane_g1

0xdab3,	// (0x0001e68a) list_single_graphic_hl_pane_g2_ParamLimits

0xdab3,	// (0x0001e68a) list_single_graphic_hl_pane_g2

0xdab3,	// (0x0001e68a) list_single_graphic_hl_pane_g3_ParamLimits

0xdab3,	// (0x0001e68a) list_single_graphic_hl_pane_g3

0x39b0,	// (0x00014587) list_single_graphic_hl_pane_g4_ParamLimits

0x39b0,	// (0x00014587) list_single_graphic_hl_pane_g4

0xdabf,	// (0x0001e696) list_single_graphic_hl_pane_g5_ParamLimits

0xdabf,	// (0x0001e696) list_single_graphic_hl_pane_g5

0x0004,

0xfbb1,	// (0x00020788) list_single_graphic_hl_pane_g_ParamLimits

0xfbb1,	// (0x00020788) list_single_graphic_hl_pane_g

0xdad3,	// (0x0001e6aa) list_single_graphic_hl_pane_t1_ParamLimits

0xdad3,	// (0x0001e6aa) list_single_graphic_hl_pane_t1

0x7855,	// (0x0001842c) aid_size_min_hl_cp2

0x785e,	// (0x00018435) list_highlight_pane_cp34_cp2_ParamLimits

0x785e,	// (0x00018435) list_highlight_pane_cp34_cp2

0x7828,	// (0x000183ff) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7828,	// (0x000183ff) list_single_graphic_hl_pane_g1_cp2

0x786b,	// (0x00018442) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x786b,	// (0x00018442) list_single_graphic_hl_pane_g2_cp2

0x7877,	// (0x0001844e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7877,	// (0x0001844e) list_single_graphic_hl_pane_g3_cp2

0x7885,	// (0x0001845c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7885,	// (0x0001845c) list_single_graphic_hl_pane_g4_cp2

0x7891,	// (0x00018468) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7891,	// (0x00018468) list_single_graphic_hl_pane_g5_cp2

0xb2f7,	// (0x0001bece) control_pane_g4_ParamLimits

0xb2f7,	// (0x0001bece) control_pane_g4

0x3e08,	// (0x000149df) bg_popup_sub_pane_cp10_ParamLimits

0x6ea4,	// (0x00017a7b) list_choice_list_pane_ParamLimits

0x6eb3,	// (0x00017a8a) scroll_pane_cp23

0x20b5,	// (0x00012c8c) bg_popup_preview_window_pane_cp02_ParamLimits

0x749b,	// (0x00018072) list_preview_fixed_pane_ParamLimits

0x74b1,	// (0x00018088) list_preview_fixed_pane_cp_ParamLimits

0x74b1,	// (0x00018088) list_preview_fixed_pane_cp

0x74bd,	// (0x00018094) popup_preview_fixed_window_g1_ParamLimits

0x74bd,	// (0x00018094) popup_preview_fixed_window_g1

0x74c9,	// (0x000180a0) popup_preview_fixed_window_g2_ParamLimits

0x74c9,	// (0x000180a0) popup_preview_fixed_window_g2

0x0002,

0xfb39,	// (0x00020710) popup_preview_fixed_window_g_ParamLimits

0xfb39,	// (0x00020710) popup_preview_fixed_window_g

0xf18f,	// (0x0001fd66) aid_navi_side_left_pane_ParamLimits

0xf1a4,	// (0x0001fd7b) aid_navi_side_right_pane_ParamLimits

0xf1bc,	// (0x0001fd93) navi_icon_pane_stacon_ParamLimits

0xf1d0,	// (0x0001fda7) navi_navi_pane_stacon_ParamLimits

0xf1bc,	// (0x0001fd93) navi_text_pane_stacon_ParamLimits

0xeeed,	// (0x0001fac4) main_text_info_pane

0x78bb,	// (0x00018492) listscroll_text_info_pane

0x78c3,	// (0x0001849a) list_text_info_pane_ParamLimits

0x78c3,	// (0x0001849a) list_text_info_pane

0x78d2,	// (0x000184a9) scroll_pane_cp24_ParamLimits

0x78d2,	// (0x000184a9) scroll_pane_cp24

0xdae9,	// (0x0001e6c0) list_text_info_pane_t1_ParamLimits

0xdae9,	// (0x0001e6c0) list_text_info_pane_t1

0xb43c,	// (0x0001c013) popup_fast_swap2_window_ParamLimits

0xb43c,	// (0x0001c013) popup_fast_swap2_window

0x7921,	// (0x000184f8) aid_size_cell_fast2

0xe881,	// (0x0001f458) bg_popup_window_pane_cp17

0x489b,	// (0x00015472) heading_pane_cp2

0x792b,	// (0x00018502) listscroll_fast2_pane

0x7933,	// (0x0001850a) grid_fast2_pane

0x793d,	// (0x00018514) listscroll_fast2_pane_g1

0x7945,	// (0x0001851c) listscroll_fast2_pane_g2

0x0001,

0xfbbc,	// (0x00020793) listscroll_fast2_pane_g

0x2f13,	// (0x00013aea) scroll_pane_cp26

0x794f,	// (0x00018526) cell_fast2_pane_ParamLimits

0x794f,	// (0x00018526) cell_fast2_pane

0x7964,	// (0x0001853b) cell_fast2_pane_g1

0x796d,	// (0x00018544) cell_fast2_pane_g2

0x7976,	// (0x0001854d) cell_fast2_pane_g3

0x0002,

0xfbc1,	// (0x00020798) cell_fast2_pane_g

0x2415,	// (0x00012fec) grid_highlight_pane_cp9

0x010d,	// (0x00010ce4) main_eswt_pane_ParamLimits

0x010d,	// (0x00010ce4) main_eswt_pane

0x78e7,	// (0x000184be) list_single_text_info_pane

0x797e,	// (0x00018555) eswt_ctrl_button_pane

0x797e,	// (0x00018555) eswt_ctrl_canvas_pane

0x7986,	// (0x0001855d) eswt_ctrl_combo_pane

0x797e,	// (0x00018555) eswt_ctrl_default_pane

0x797e,	// (0x00018555) eswt_ctrl_label_pane

0x798e,	// (0x00018565) eswt_ctrl_wait_pane

0x7996,	// (0x0001856d) eswt_shell_pane

0xe881,	// (0x0001f458) listscroll_eswt_app_pane

0x79b6,	// (0x0001858d) popup_eswt_tasktip_window_ParamLimits

0x79b6,	// (0x0001858d) popup_eswt_tasktip_window

0x4472,	// (0x00015049) bg_popup_window_pane_cp18

0x79c7,	// (0x0001859e) eswt_control_pane_g1_ParamLimits

0x79c7,	// (0x0001859e) eswt_control_pane_g1

0x79d4,	// (0x000185ab) eswt_control_pane_g2_ParamLimits

0x79d4,	// (0x000185ab) eswt_control_pane_g2

0x79e1,	// (0x000185b8) eswt_control_pane_g3_ParamLimits

0x79e1,	// (0x000185b8) eswt_control_pane_g3

0x79ee,	// (0x000185c5) eswt_control_pane_g4_ParamLimits

0x79ee,	// (0x000185c5) eswt_control_pane_g4

0x0003,

0xfbc8,	// (0x0002079f) eswt_control_pane_g_ParamLimits

0xfbc8,	// (0x0002079f) eswt_control_pane_g

0x2c10,	// (0x000137e7) bg_button_pane_ParamLimits

0x2c10,	// (0x000137e7) bg_button_pane

0x242a,	// (0x00013001) common_borders_pane_copy2_ParamLimits

0x242a,	// (0x00013001) common_borders_pane_copy2

0x79fb,	// (0x000185d2) control_button_pane_g1_ParamLimits

0x79fb,	// (0x000185d2) control_button_pane_g1

0x7a07,	// (0x000185de) control_button_pane_g2_ParamLimits

0x7a07,	// (0x000185de) control_button_pane_g2

0x7a13,	// (0x000185ea) control_button_pane_g3_ParamLimits

0x7a13,	// (0x000185ea) control_button_pane_g3

0x0002,

0xfbd1,	// (0x000207a8) control_button_pane_g_ParamLimits

0xfbd1,	// (0x000207a8) control_button_pane_g

0x7a27,	// (0x000185fe) control_button_pane_t1

0x7a35,	// (0x0001860c) control_button_pane_t2

0x0001,

0xfbd8,	// (0x000207af) control_button_pane_t

0x4350,	// (0x00014f27) bg_button_pane_g1

0x4360,	// (0x00014f37) bg_button_pane_g2

0x4358,	// (0x00014f2f) bg_button_pane_g3

0x4370,	// (0x00014f47) bg_button_pane_g4

0x4368,	// (0x00014f3f) bg_button_pane_g5

0x4378,	// (0x00014f4f) bg_button_pane_g6

0x4380,	// (0x00014f57) bg_button_pane_g7

0x4390,	// (0x00014f67) bg_button_pane_g8

0x4388,	// (0x00014f5f) bg_button_pane_g9

0x0008,

0xf835,	// (0x0002040c) bg_button_pane_g

0x6e5f,	// (0x00017a36) common_borders_pane_ParamLimits

0x6e5f,	// (0x00017a36) common_borders_pane

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy1_ParamLimits

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy1

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy1_ParamLimits

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy1

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy1_ParamLimits

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy1

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy1_ParamLimits

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy1

0x6e9a,	// (0x00017a71) bg_eswt_ctrl_canvas_pane_g1

0x6e5f,	// (0x00017a36) common_borders_pane_cp2_ParamLimits

0x6e5f,	// (0x00017a36) common_borders_pane_cp2

0x6e5f,	// (0x00017a36) common_borders_pane_cp3_ParamLimits

0x6e5f,	// (0x00017a36) common_borders_pane_cp3

0x7a43,	// (0x0001861a) separator_horizontal_pane

0x7a4b,	// (0x00018622) separator_vertical_pane

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy2_ParamLimits

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy2

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy2_ParamLimits

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy2

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy2_ParamLimits

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy2

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy2_ParamLimits

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy2

0xe881,	// (0x0001f458) common_borders_pane_cp4

0x7a54,	// (0x0001862b) separator_horizontal_pane_g1

0x7a5d,	// (0x00018634) separator_horizontal_pane_g2

0x7a66,	// (0x0001863d) separator_horizontal_pane_g3

0x0002,

0xfbdd,	// (0x000207b4) separator_horizontal_pane_g

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy3_ParamLimits

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy3

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy3_ParamLimits

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy3

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy3_ParamLimits

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy3

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy3_ParamLimits

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy3

0xe881,	// (0x0001f458) common_borders_pane_cp5

0x7a6f,	// (0x00018646) separator_vertical_pane_g1

0x7a78,	// (0x0001864f) separator_vertical_pane_g2

0x7a81,	// (0x00018658) separator_vertical_pane_g3

0x0002,

0xfbe4,	// (0x000207bb) separator_vertical_pane_g

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy4_ParamLimits

0x79c7,	// (0x0001859e) eswt_control_pane_g1_copy4

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy4_ParamLimits

0x79d4,	// (0x000185ab) eswt_control_pane_g2_copy4

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy4_ParamLimits

0x79e1,	// (0x000185b8) eswt_control_pane_g3_copy4

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy4_ParamLimits

0x79ee,	// (0x000185c5) eswt_control_pane_g4_copy4

0x7a8a,	// (0x00018661) eswt_ctrl_combo_button_pane

0x7a92,	// (0x00018669) eswt_ctrl_input_pane

0x7a9a,	// (0x00018671) popup_choice_list_window_cp70

0x7aa2,	// (0x00018679) eswt_ctrl_input_pane_t1

0xe881,	// (0x0001f458) input_focus_pane_cp70

0x6e5f,	// (0x00017a36) bg_button_pane_cp70_ParamLimits

0x6e5f,	// (0x00017a36) bg_button_pane_cp70

0x7ab0,	// (0x00018687) eswt_ctrl_combo_button_pane_g1

0x7ab8,	// (0x0001868f) wait_bar_pane_cp70

0x4472,	// (0x00015049) bg_popup_window_pane_cp70_ParamLimits

0x4472,	// (0x00015049) bg_popup_window_pane_cp70

0x7ac0,	// (0x00018697) popup_eswt_tasktip_window_t1

0x7ad6,	// (0x000186ad) wait_bar_pane_cp71_ParamLimits

0x7ad6,	// (0x000186ad) wait_bar_pane_cp71

0x7ae2,	// (0x000186b9) grid_eswt_app_pane

0x3231,	// (0x00013e08) scroll_pane_cp70

0xdb04,	// (0x0001e6db) cell_eswt_app_pane_ParamLimits

0xdb04,	// (0x0001e6db) cell_eswt_app_pane

0xdb2e,	// (0x0001e705) cell_eswt_app_pane_g1_ParamLimits

0xdb2e,	// (0x0001e705) cell_eswt_app_pane_g1

0xdb5d,	// (0x0001e734) cell_eswt_app_pane_g2_ParamLimits

0xdb5d,	// (0x0001e734) cell_eswt_app_pane_g2

0x0001,

0xfbeb,	// (0x000207c2) cell_eswt_app_pane_g_ParamLimits

0xfbeb,	// (0x000207c2) cell_eswt_app_pane_g

0xdb86,	// (0x0001e75d) cell_eswt_app_pane_t1_ParamLimits

0xdb86,	// (0x0001e75d) cell_eswt_app_pane_t1

0x7ba5,	// (0x0001877c) grid_highlight_pane_cp70_ParamLimits

0x7ba5,	// (0x0001877c) grid_highlight_pane_cp70

0x39b0,	// (0x00014587) set_content_pane_g1

0xcd52,	// (0x0001d929) status_small_volume_pane

0xbb91,	// (0x0001c768) status_small_volume_pane_g1

0xbb99,	// (0x0001c770) volume_small2_pane

0xbba2,	// (0x0001c779) volume_small2_pane_g1

0xbbab,	// (0x0001c782) volume_small2_pane_g2

0xbbb4,	// (0x0001c78b) volume_small2_pane_g3

0xbbbd,	// (0x0001c794) volume_small2_pane_g4

0xbbc6,	// (0x0001c79d) volume_small2_pane_g5

0xbbcf,	// (0x0001c7a6) volume_small2_pane_g6

0xbbd8,	// (0x0001c7af) volume_small2_pane_g7

0xbbe1,	// (0x0001c7b8) volume_small2_pane_g8

0xbbea,	// (0x0001c7c1) volume_small2_pane_g9

0xbbf3,	// (0x0001c7ca) volume_small2_pane_g10

0x0009,

0xfbf0,	// (0x000207c7) volume_small2_pane_g

0x7260,	// (0x00017e37) fep_vkb_top_text_pane_g1_ParamLimits

0xda5b,	// (0x0001e632) fep_vkb_top_text_pane_t1_ParamLimits

0x74d5,	// (0x000180ac) popup_preview_fixed_window_g3_ParamLimits

0x74d5,	// (0x000180ac) popup_preview_fixed_window_g3

0xba65,	// (0x0001c63c) popup_toolbar_trans_pane

0xd3db,	// (0x0001dfb2) aid_height_set_list_ParamLimits

0x5826,	// (0x000163fd) aid_size_parent_ParamLimits

0x3e08,	// (0x000149df) list_highlight_pane_cp2_ParamLimits

0x39b0,	// (0x00014587) set_content_pane_g1_ParamLimits

0xd595,	// (0x0001e16c) list_single_image_pane_ParamLimits

0xd595,	// (0x0001e16c) list_single_image_pane

0xdbb8,	// (0x0001e78f) aid_size_cell_image_ParamLimits

0xdbb8,	// (0x0001e78f) aid_size_cell_image

0xdbc5,	// (0x0001e79c) grid_single_image_pane_ParamLimits

0xdbc5,	// (0x0001e79c) grid_single_image_pane

0x5f99,	// (0x00016b70) list_single_image_pane_g1_ParamLimits

0x5f99,	// (0x00016b70) list_single_image_pane_g1

0x7bca,	// (0x000187a1) list_single_image_pane_g2_ParamLimits

0x7bca,	// (0x000187a1) list_single_image_pane_g2

0x0001,

0xfc05,	// (0x000207dc) list_single_image_pane_g_ParamLimits

0xfc05,	// (0x000207dc) list_single_image_pane_g

0x7bde,	// (0x000187b5) list_single_image_pane_t1_ParamLimits

0x7bde,	// (0x000187b5) list_single_image_pane_t1

0xdbd1,	// (0x0001e7a8) cell_image_list_pane_ParamLimits

0xdbd1,	// (0x0001e7a8) cell_image_list_pane

0xdbe5,	// (0x0001e7bc) cell_image_list_pane_g1

0xdbee,	// (0x0001e7c5) cell_image_list_pane_g2

0x0001,

0xfc0a,	// (0x000207e1) cell_image_list_pane_g

0x7c1a,	// (0x000187f1) aid_size_cell_tb_trans_pane

0x2c10,	// (0x000137e7) bg_tb_trans_pane

0x7c2c,	// (0x00018803) grid_tb_trans_pane

0x4350,	// (0x00014f27) bg_tb_trans_pane_g1

0x4360,	// (0x00014f37) bg_tb_trans_pane_g2

0x4358,	// (0x00014f2f) bg_tb_trans_pane_g3

0x4370,	// (0x00014f47) bg_tb_trans_pane_g4

0x4368,	// (0x00014f3f) bg_tb_trans_pane_g5

0x4390,	// (0x00014f67) bg_tb_trans_pane_g6

0x4388,	// (0x00014f5f) bg_tb_trans_pane_g7

0x4378,	// (0x00014f4f) bg_tb_trans_pane_g8

0x4380,	// (0x00014f57) bg_tb_trans_pane_g9

0x0008,

0xfc0f,	// (0x000207e6) bg_tb_trans_pane_g

0x7c40,	// (0x00018817) cell_toolbar_trans_pane_ParamLimits

0x7c40,	// (0x00018817) cell_toolbar_trans_pane

0x6e9a,	// (0x00017a71) cell_toolbar_trans_pane_g1

0xd812,	// (0x0001e3e9) list_form2_midp_pane_t1

0xd820,	// (0x0001e3f7) list_form2_midp_pane_t2

0x0001,

0xfaac,	// (0x00020683) list_form2_midp_pane_t

0x6a43,	// (0x0001761a) scroll_pane_cp51_ParamLimits

0x6c4e,	// (0x00017825) form2_midp_wait_pane_g1

0x6c57,	// (0x0001782e) form2_midp_wait_pane_g2

0x6c60,	// (0x00017837) form2_midp_wait_pane_g3

0x0002,

0xfac1,	// (0x00020698) form2_midp_wait_pane_g

0x1e12,	// (0x000129e9) list_highlight_pane_cp21_ParamLimits

0x6cac,	// (0x00017883) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6cbb,	// (0x00017892) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5a2c,	// (0x00016603) list_single_2graphic_im_pane_ParamLimits

0x5a2c,	// (0x00016603) list_single_2graphic_im_pane

0x7c66,	// (0x0001883d) list_single_2graphic_im_pane_g1_ParamLimits

0x7c66,	// (0x0001883d) list_single_2graphic_im_pane_g1

0x7c77,	// (0x0001884e) list_single_2graphic_im_pane_g2_ParamLimits

0x7c77,	// (0x0001884e) list_single_2graphic_im_pane_g2

0x7c83,	// (0x0001885a) list_single_2graphic_im_pane_g3_ParamLimits

0x7c83,	// (0x0001885a) list_single_2graphic_im_pane_g3

0x0003,

0xfc22,	// (0x000207f9) list_single_2graphic_im_pane_g_ParamLimits

0xfc22,	// (0x000207f9) list_single_2graphic_im_pane_g

0x7ca3,	// (0x0001887a) list_single_2graphic_im_pane_t1_ParamLimits

0x7ca3,	// (0x0001887a) list_single_2graphic_im_pane_t1

0x74e1,	// (0x000180b8) list_single_graphic_2heading_pane_fp_ParamLimits

0x74e1,	// (0x000180b8) list_single_graphic_2heading_pane_fp

0x7525,	// (0x000180fc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7525,	// (0x000180fc) list_single_graphic_2heading_pane_fp_g1

0x74f6,	// (0x000180cd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x74f6,	// (0x000180cd) list_single_graphic_2heading_pane_fp_g2

0x2c36,	// (0x0001380d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2c36,	// (0x0001380d) list_single_graphic_2heading_pane_fp_g3

0x2c42,	// (0x00013819) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2c42,	// (0x00013819) list_single_graphic_2heading_pane_fp_g4

0x7502,	// (0x000180d9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7502,	// (0x000180d9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00020720) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00020720) list_single_graphic_2heading_pane_fp_g

0x7cd4,	// (0x000188ab) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7cd4,	// (0x000188ab) list_single_graphic_2heading_pane_fp_t1

0x755d,	// (0x00018134) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x755d,	// (0x00018134) list_single_graphic_2heading_pane_fp_t2

0x7cea,	// (0x000188c1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7cea,	// (0x000188c1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2b,	// (0x00020802) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2b,	// (0x00020802) list_single_graphic_2heading_pane_fp_t

0x6f26,	// (0x00017afd) fep_hwr_write_pane_g5_ParamLimits

0x6f26,	// (0x00017afd) fep_hwr_write_pane_g5

0x6f32,	// (0x00017b09) fep_hwr_write_pane_g6_ParamLimits

0x6f32,	// (0x00017b09) fep_hwr_write_pane_g6

0x7996,	// (0x0001856d) eswt_shell_pane_ParamLimits

0x4472,	// (0x00015049) bg_popup_window_pane_cp18_ParamLimits

0x489b,	// (0x00015472) heading_pane_cp70

0x7ac0,	// (0x00018697) popup_eswt_tasktip_window_t1_ParamLimits

0xcdf0,	// (0x0001d9c7) aid_touch_tab_arrow_left

0xce06,	// (0x0001d9dd) aid_touch_tab_arrow_right

0xc29f,	// (0x0001ce76) title_pane_g3_ParamLimits

0xc29f,	// (0x0001ce76) title_pane_g3

0x2aef,	// (0x000136c6) set_value_pane_g1

0xba65,	// (0x0001c63c) popup_toolbar_trans_pane_ParamLimits

0x7c1a,	// (0x000187f1) aid_size_cell_tb_trans_pane_ParamLimits

0x2c10,	// (0x000137e7) bg_tb_trans_pane_ParamLimits

0x7c2c,	// (0x00018803) grid_tb_trans_pane_ParamLimits

0x20b5,	// (0x00012c8c) cont_note_pane_ParamLimits

0x20b5,	// (0x00012c8c) cont_note_pane

0x242a,	// (0x00013001) cont_snote2_single_text_pane_ParamLimits

0x242a,	// (0x00013001) cont_snote2_single_text_pane

0x242a,	// (0x00013001) cont_snote2_single_graphic_pane_ParamLimits

0x242a,	// (0x00013001) cont_snote2_single_graphic_pane

0x4aca,	// (0x000156a1) cont_note_wait_pane_ParamLimits

0x4aca,	// (0x000156a1) cont_note_wait_pane

0x4aca,	// (0x000156a1) cont_note_image_pane_ParamLimits

0x4aca,	// (0x000156a1) cont_note_image_pane

0x7d00,	// (0x000188d7) popup_note2_window_g1_ParamLimits

0x7d00,	// (0x000188d7) popup_note2_window_g1

0x7d31,	// (0x00018908) popup_note2_window_t1_ParamLimits

0x7d31,	// (0x00018908) popup_note2_window_t1

0x7d76,	// (0x0001894d) popup_note2_window_t2_ParamLimits

0x7d76,	// (0x0001894d) popup_note2_window_t2

0x7dbb,	// (0x00018992) popup_note2_window_t3_ParamLimits

0x7dbb,	// (0x00018992) popup_note2_window_t3

0x7e00,	// (0x000189d7) popup_note2_window_t4_ParamLimits

0x7e00,	// (0x000189d7) popup_note2_window_t4

0x2139,	// (0x00012d10) popup_note2_window_t5_ParamLimits

0x2139,	// (0x00012d10) popup_note2_window_t5

0x0004,

0xfc37,	// (0x0002080e) popup_note2_window_t_ParamLimits

0xfc37,	// (0x0002080e) popup_note2_window_t

0x7e2f,	// (0x00018a06) popup_note2_image_window_g1_ParamLimits

0x7e2f,	// (0x00018a06) popup_note2_image_window_g1

0x7e3b,	// (0x00018a12) popup_note2_image_window_g2_ParamLimits

0x7e3b,	// (0x00018a12) popup_note2_image_window_g2

0x0001,

0xfc42,	// (0x00020819) popup_note2_image_window_g_ParamLimits

0xfc42,	// (0x00020819) popup_note2_image_window_g

0x7e4d,	// (0x00018a24) popup_note2_image_window_t1_ParamLimits

0x7e4d,	// (0x00018a24) popup_note2_image_window_t1

0x7e65,	// (0x00018a3c) popup_note2_image_window_t2_ParamLimits

0x7e65,	// (0x00018a3c) popup_note2_image_window_t2

0x7e7d,	// (0x00018a54) popup_note2_image_window_t3_ParamLimits

0x7e7d,	// (0x00018a54) popup_note2_image_window_t3

0x0002,

0xfc47,	// (0x0002081e) popup_note2_image_window_t_ParamLimits

0xfc47,	// (0x0002081e) popup_note2_image_window_t

0x4ad8,	// (0x000156af) popup_note2_wait_window_g1_ParamLimits

0x4ad8,	// (0x000156af) popup_note2_wait_window_g1

0x7e99,	// (0x00018a70) popup_note2_wait_window_g2_ParamLimits

0x7e99,	// (0x00018a70) popup_note2_wait_window_g2

0x4af0,	// (0x000156c7) popup_note2_wait_window_g3_ParamLimits

0x4af0,	// (0x000156c7) popup_note2_wait_window_g3

0x0002,

0xfc4e,	// (0x00020825) popup_note2_wait_window_g_ParamLimits

0xfc4e,	// (0x00020825) popup_note2_wait_window_g

0x7ea5,	// (0x00018a7c) popup_note2_wait_window_t1_ParamLimits

0x7ea5,	// (0x00018a7c) popup_note2_wait_window_t1

0x7ec3,	// (0x00018a9a) popup_note2_wait_window_t2_ParamLimits

0x7ec3,	// (0x00018a9a) popup_note2_wait_window_t2

0x7ee1,	// (0x00018ab8) popup_note2_wait_window_t3_ParamLimits

0x7ee1,	// (0x00018ab8) popup_note2_wait_window_t3

0x7ef3,	// (0x00018aca) popup_note2_wait_window_t4_ParamLimits

0x7ef3,	// (0x00018aca) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0002082c) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0002082c) popup_note2_wait_window_t

0x7f05,	// (0x00018adc) wait_bar2_pane_ParamLimits

0x7f05,	// (0x00018adc) wait_bar2_pane

0x7f1d,	// (0x00018af4) popup_snote2_single_text_window_g1_ParamLimits

0x7f1d,	// (0x00018af4) popup_snote2_single_text_window_g1

0x7f45,	// (0x00018b1c) popup_snote2_single_text_window_t1_ParamLimits

0x7f45,	// (0x00018b1c) popup_snote2_single_text_window_t1

0x7f91,	// (0x00018b68) popup_snote2_single_text_window_t2_ParamLimits

0x7f91,	// (0x00018b68) popup_snote2_single_text_window_t2

0x7fdd,	// (0x00018bb4) popup_snote2_single_text_window_t3_ParamLimits

0x7fdd,	// (0x00018bb4) popup_snote2_single_text_window_t3

0x801e,	// (0x00018bf5) popup_snote2_single_text_window_t4_ParamLimits

0x801e,	// (0x00018bf5) popup_snote2_single_text_window_t4

0x8054,	// (0x00018c2b) popup_snote2_single_text_window_t5_ParamLimits

0x8054,	// (0x00018c2b) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x00020835) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x00020835) popup_snote2_single_text_window_t

0x807f,	// (0x00018c56) popup_snote2_single_graphic_window_g1_ParamLimits

0x807f,	// (0x00018c56) popup_snote2_single_graphic_window_g1

0x80a7,	// (0x00018c7e) popup_snote2_single_graphic_window_g2_ParamLimits

0x80a7,	// (0x00018c7e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x00020840) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x00020840) popup_snote2_single_graphic_window_g

0x80cf,	// (0x00018ca6) popup_snote2_single_graphic_window_t1_ParamLimits

0x80cf,	// (0x00018ca6) popup_snote2_single_graphic_window_t1

0x811b,	// (0x00018cf2) popup_snote2_single_graphic_window_t2_ParamLimits

0x811b,	// (0x00018cf2) popup_snote2_single_graphic_window_t2

0x7fdd,	// (0x00018bb4) popup_snote2_single_graphic_window_t3_ParamLimits

0x7fdd,	// (0x00018bb4) popup_snote2_single_graphic_window_t3

0x801e,	// (0x00018bf5) popup_snote2_single_graphic_window_t4_ParamLimits

0x801e,	// (0x00018bf5) popup_snote2_single_graphic_window_t4

0x8054,	// (0x00018c2b) popup_snote2_single_graphic_window_t5_ParamLimits

0x8054,	// (0x00018c2b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x00020845) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x00020845) popup_snote2_single_graphic_window_t

0x6904,	// (0x000174db) clock_nsta_pane_cp2_t1

0x6904,	// (0x000174db) clock_nsta_pane_cp2_t2

0x0001,

0xfa82,	// (0x00020659) clock_nsta_pane_cp2_t

0x2c2a,	// (0x00013801) form_field_data_wide_pane_g1_ParamLimits

0x2c36,	// (0x0001380d) form_field_data_wide_pane_g2_ParamLimits

0x2c36,	// (0x0001380d) form_field_data_wide_pane_g2

0x2c42,	// (0x00013819) form_field_data_wide_pane_g3_ParamLimits

0x2c42,	// (0x00013819) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x00020226) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x00020226) form_field_data_wide_pane_g

0xd71d,	// (0x0001e2f4) grid_touch_3_pane_ParamLimits

0xd71d,	// (0x0001e2f4) grid_touch_3_pane

0xdbf7,	// (0x0001e7ce) cell_touch_3_pane_ParamLimits

0xdbf7,	// (0x0001e7ce) cell_touch_3_pane

0x6e9a,	// (0x00017a71) cell_touch_3_pane_g1

0x6e9a,	// (0x00017a71) cell_touch_3_pane_g2

0x0001,

0xfb07,	// (0x000206de) cell_touch_3_pane_g

0x2191,	// (0x00012d68) cont_query_data_pane

0x2199,	// (0x00012d70) cont_query_data_pane_cp1

0x8195,	// (0x00018d6c) button_value_adjust_pane_cp7

0x819d,	// (0x00018d74) query_popup_pane_cp3

0x3531,	// (0x00014108) bg_popup_sub_pane_cp22_ParamLimits

0xf2d1,	// (0x0001fea8) navi_navi_volume_pane_cp2

0xf2ec,	// (0x0001fec3) popup_side_volume_key_window_g2

0xf2fb,	// (0x0001fed2) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x000202bc) popup_side_volume_key_window_g

0xf318,	// (0x0001feef) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x000202c3) popup_side_volume_key_window_t

0x387a,	// (0x00014451) popup_side_volume_key_window_ParamLimits

0xc6a2,	// (0x0001d279) list_double_graphic_pane_g4_ParamLimits

0xc6a2,	// (0x0001d279) list_double_graphic_pane_g4

0xd570,	// (0x0001e147) list_single_2heading_msg_pane_ParamLimits

0xd570,	// (0x0001e147) list_single_2heading_msg_pane

0xdc3f,	// (0x0001e816) list_single_2heading_msg_pane_g1_ParamLimits

0xdc3f,	// (0x0001e816) list_single_2heading_msg_pane_g1

0xdc4b,	// (0x0001e822) list_single_2heading_msg_pane_g2_ParamLimits

0xdc4b,	// (0x0001e822) list_single_2heading_msg_pane_g2

0xdc5e,	// (0x0001e835) list_single_2heading_msg_pane_g3_ParamLimits

0xdc5e,	// (0x0001e835) list_single_2heading_msg_pane_g3

0x81f0,	// (0x00018dc7) list_single_2heading_msg_pane_g4_ParamLimits

0x81f0,	// (0x00018dc7) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x00020850) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x00020850) list_single_2heading_msg_pane_g

0x8208,	// (0x00018ddf) list_single_2heading_msg_pane_t1_ParamLimits

0x8208,	// (0x00018ddf) list_single_2heading_msg_pane_t1

0xdc6a,	// (0x0001e841) list_single_2heading_msg_pane_t2_ParamLimits

0xdc6a,	// (0x0001e841) list_single_2heading_msg_pane_t2

0xdcd5,	// (0x0001e8ac) list_single_2heading_msg_pane_t3_ParamLimits

0xdcd5,	// (0x0001e8ac) list_single_2heading_msg_pane_t3

0x8298,	// (0x00018e6f) list_single_2heading_msg_pane_t4_ParamLimits

0x8298,	// (0x00018e6f) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x00020859) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x00020859) list_single_2heading_msg_pane_t

0x1d66,	// (0x0001293d) title_pane_g4_ParamLimits

0x1d66,	// (0x0001293d) title_pane_g4

0xf0e0,	// (0x0001fcb7) title_pane_stacon_g3_ParamLimits

0xf0e0,	// (0x0001fcb7) title_pane_stacon_g3

0x7c97,	// (0x0001886e) list_single_2graphic_im_pane_g4_ParamLimits

0x7c97,	// (0x0001886e) list_single_2graphic_im_pane_g4

0x5529,	// (0x00016100) popup_side_volume_key_window_cp

0x5e25,	// (0x000169fc) main_idle_act2_pane_t1

0x0756,	// (0x0001132d) toolbar_button_pane_g10

0xc5fb,	// (0x0001d1d2) popup_toolbar_window_cp1

0x68f5,	// (0x000174cc) clock_nsta_pane_cp_t1

0x68f5,	// (0x000174cc) clock_nsta_pane_cp_t2

0x0001,

0xfa7d,	// (0x00020654) clock_nsta_pane_cp_t

0xf2d1,	// (0x0001fea8) navi_navi_volume_pane_cp2_ParamLimits

0xf2e0,	// (0x0001feb7) popup_side_volume_key_window_g1_ParamLimits

0xf2ec,	// (0x0001fec3) popup_side_volume_key_window_g2_ParamLimits

0xf2fb,	// (0x0001fed2) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x000202bc) popup_side_volume_key_window_g_ParamLimits

0x0bbe,	// (0x00011795) fep_hwr_aid_pane

0x0c65,	// (0x0001183c) bg_fep_hwr_top_pane_g4_ParamLimits

0x6ef6,	// (0x00017acd) fep_hwr_top_pane_g1_ParamLimits

0x6f08,	// (0x00017adf) fep_hwr_top_pane_g2_ParamLimits

0x0c85,	// (0x0001185c) fep_hwr_top_pane_g3_ParamLimits

0xfad2,	// (0x000206a9) fep_hwr_top_pane_g_ParamLimits

0x0c9a,	// (0x00011871) fep_hwr_top_text_pane_ParamLimits

0x52ec,	// (0x00015ec3) aid_touch_tab_arrow_arrow_2

0x52f5,	// (0x00015ecc) aid_touch_tab_arrow_left_2

0x0bd2,	// (0x000117a9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0c09,	// (0x000117e0) fep_hwr_prediction_pane

0x7068,	// (0x00017c3f) fep_vkb_prediction_pane

0xda3b,	// (0x0001e612) fep_vkb_side_pane_g3_ParamLimits

0xda3b,	// (0x0001e612) fep_vkb_side_pane_g3

0x0e15,	// (0x000119ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0e81,	// (0x00011a58) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0e8e,	// (0x00011a65) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb81,	// (0x00020758) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0fbd,	// (0x00011b94) fep_hwr_prediction_pane_g1

0x0fc7,	// (0x00011b9e) fep_hwr_prediction_pane_g2

0x0fcf,	// (0x00011ba6) fep_hwr_prediction_pane_g3

0x0fd7,	// (0x00011bae) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x00020862) fep_hwr_prediction_pane_g

0x82bd,	// (0x00018e94) fep_vkb_prediction_pane_g1

0x82c7,	// (0x00018e9e) fep_vkb_prediction_pane_g2

0x82cf,	// (0x00018ea6) fep_vkb_prediction_pane_g3

0x82d7,	// (0x00018eae) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0002086b) fep_vkb_prediction_pane_g

0x0a3e,	// (0x00011615) slider_set_pane_g3

0x0a52,	// (0x00011629) slider_set_pane_g4

0x0a6a,	// (0x00011641) slider_set_pane_g5

0x0a3e,	// (0x00011615) slider_set_pane_g6

0x0a80,	// (0x00011657) slider_set_pane_g7

0x598b,	// (0x00016562) slider_form_pane_g3

0x5994,	// (0x0001656b) slider_form_pane_g4

0x599c,	// (0x00016573) slider_form_pane_g5

0x598b,	// (0x00016562) slider_form_pane_g6

0xd526,	// (0x0001e0fd) slider_form_pane_g7

0x6122,	// (0x00016cf9) slider_set_pane_vc_g3

0x612b,	// (0x00016d02) slider_set_pane_vc_g4

0x6134,	// (0x00016d0b) slider_set_pane_vc_g5

0x6122,	// (0x00016cf9) slider_set_pane_vc_g6

0x613d,	// (0x00016d14) slider_set_pane_vc_g7

0x65b3,	// (0x0001718a) slider_form_pane_vc_g1

0x65bc,	// (0x00017193) slider_form_pane_vc_g2

0x65c5,	// (0x0001719c) slider_form_pane_vc_g3

0x65b3,	// (0x0001718a) slider_form_pane_vc_g4

0x65ce,	// (0x000171a5) slider_form_pane_vc_g5

0x0004,

0xfa4f,	// (0x00020626) slider_form_pane_vc_g

0xeeed,	// (0x0001fac4) main_idle_act3_pane

0x82df,	// (0x00018eb6) ai3_links_pane

0xdd43,	// (0x0001e91a) popup_ai3_data_window_ParamLimits

0xdd43,	// (0x0001e91a) popup_ai3_data_window

0xe881,	// (0x0001f458) grid_ai3_links_pane

0xdd5d,	// (0x0001e934) cell_ai3_links_pane_ParamLimits

0xdd5d,	// (0x0001e934) cell_ai3_links_pane

0x831a,	// (0x00018ef1) bg_popup_sub_pane_cp11

0x8327,	// (0x00018efe) cell_ai3_links_pane_g1

0xe881,	// (0x0001f458) bg_popup_sub_pane_cp12

0x834c,	// (0x00018f23) heading_ai3_data_pane

0x8354,	// (0x00018f2b) list_ai3_gene_pane

0x8360,	// (0x00018f37) popup_ai3_data_window_g1

0x8368,	// (0x00018f3f) heading_ai3_data_pane_g1

0x8370,	// (0x00018f47) heading_ai3_data_pane_t1

0x837e,	// (0x00018f55) list_double_ai3_gene_pane_ParamLimits

0x837e,	// (0x00018f55) list_double_ai3_gene_pane

0x838b,	// (0x00018f62) list_single_ai3_gene_pane_ParamLimits

0x838b,	// (0x00018f62) list_single_ai3_gene_pane

0x6e5f,	// (0x00017a36) list_highlight_pane_cp7_ParamLimits

0x6e5f,	// (0x00017a36) list_highlight_pane_cp7

0x8398,	// (0x00018f6f) list_single_a13_gene_pane_t1_ParamLimits

0x8398,	// (0x00018f6f) list_single_a13_gene_pane_t1

0x83af,	// (0x00018f86) list_single_ai3_gene_pane_g1

0x83b8,	// (0x00018f8f) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x00020874) list_single_ai3_gene_pane_g

0x83c0,	// (0x00018f97) list_double_ai3_gene_pane_g1_ParamLimits

0x83c0,	// (0x00018f97) list_double_ai3_gene_pane_g1

0x83cc,	// (0x00018fa3) list_double_ai3_gene_pane_t1_ParamLimits

0x83cc,	// (0x00018fa3) list_double_ai3_gene_pane_t1

0x83e8,	// (0x00018fbf) list_double_ai3_gene_pane_t2_ParamLimits

0x83e8,	// (0x00018fbf) list_double_ai3_gene_pane_t2

0x83fe,	// (0x00018fd5) list_double_ai3_gene_pane_t3_ParamLimits

0x83fe,	// (0x00018fd5) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x00020879) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x00020879) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x81ae,	// (0x00018d85) aid_size_min_col_2

0xdc29,	// (0x0001e800) aid_size_min_msg_ParamLimits

0xdc29,	// (0x0001e800) aid_size_min_msg

0xda4f,	// (0x0001e626) fep_vkb_top_text_pane_g2_ParamLimits

0xda4f,	// (0x0001e626) fep_vkb_top_text_pane_g2

0x0001,

0xfb02,	// (0x000206d9) fep_vkb_top_text_pane_g_ParamLimits

0xfb02,	// (0x000206d9) fep_vkb_top_text_pane_g

0xeeed,	// (0x0001fac4) main_hc_apps_shell_pane

0x841b,	// (0x00018ff2) grid_hc_apps_pane_ParamLimits

0x841b,	// (0x00018ff2) grid_hc_apps_pane

0x842d,	// (0x00019004) list_hc_apps_pane

0x8435,	// (0x0001900c) scroll_pane_cp37_ParamLimits

0x8435,	// (0x0001900c) scroll_pane_cp37

0xdd77,	// (0x0001e94e) cell_hc_apps_pane_ParamLimits

0xdd77,	// (0x0001e94e) cell_hc_apps_pane

0xde35,	// (0x0001ea0c) cell_hc_apps_pane_g1_ParamLimits

0xde35,	// (0x0001ea0c) cell_hc_apps_pane_g1

0x851f,	// (0x000190f6) cell_hc_apps_pane_g2_ParamLimits

0x851f,	// (0x000190f6) cell_hc_apps_pane_g2

0x853b,	// (0x00019112) cell_hc_apps_pane_g3_ParamLimits

0x853b,	// (0x00019112) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x00020880) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x00020880) cell_hc_apps_pane_g

0xde61,	// (0x0001ea38) cell_hc_apps_pane_t1_ParamLimits

0xde61,	// (0x0001ea38) cell_hc_apps_pane_t1

0x20b5,	// (0x00012c8c) grid_highlight_pane_cp10_ParamLimits

0x20b5,	// (0x00012c8c) grid_highlight_pane_cp10

0xde9f,	// (0x0001ea76) list_single_hc_apps_pane_ParamLimits

0xde9f,	// (0x0001ea76) list_single_hc_apps_pane

0xdecc,	// (0x0001eaa3) list_single_hc_apps_pane_g1

0xdee5,	// (0x0001eabc) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x00020887) list_single_hc_apps_pane_g

0xdefe,	// (0x0001ead5) list_single_hc_apps_pane_g2_copy1

0x8647,	// (0x0001921e) list_single_hc_apps_pane_t1

0x1e12,	// (0x000129e9) bg_set_opt_pane_cp_ParamLimits

0xf008,	// (0x0001fbdf) setting_slider_pane_t1_ParamLimits

0xf021,	// (0x0001fbf8) setting_slider_pane_t2_ParamLimits

0xf03b,	// (0x0001fc12) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0002010e) setting_slider_pane_t_ParamLimits

0xf053,	// (0x0001fc2a) slider_set_pane_ParamLimits

0xf518,	// (0x000200ef) control_pane_g5_ParamLimits

0xf518,	// (0x000200ef) control_pane_g5

0x57da,	// (0x000163b1) slider_set_pane_g1_ParamLimits

0x0a32,	// (0x00011609) slider_set_pane_g2_ParamLimits

0x0a3e,	// (0x00011615) slider_set_pane_g3_ParamLimits

0x0a52,	// (0x00011629) slider_set_pane_g4_ParamLimits

0x0a6a,	// (0x00011641) slider_set_pane_g5_ParamLimits

0x0a3e,	// (0x00011615) slider_set_pane_g6_ParamLimits

0x0a80,	// (0x00011657) slider_set_pane_g7_ParamLimits

0xf933,	// (0x0002050a) slider_set_pane_g_ParamLimits

0x395b,	// (0x00014532) navi_icon_text_pane_ParamLimits

0xcdb9,	// (0x0001d990) aid_fill_nsta_2_ParamLimits

0xcdf0,	// (0x0001d9c7) aid_touch_tab_arrow_left_ParamLimits

0xce06,	// (0x0001d9dd) aid_touch_tab_arrow_right_ParamLimits

0xcea1,	// (0x0001da78) clock_nsta_pane_ParamLimits

0x52ce,	// (0x00015ea5) navi_icon_pane_g1_ParamLimits

0x52da,	// (0x00015eb1) navi_text_pane_t1_ParamLimits

0x6a01,	// (0x000175d8) navi_icon_text_pane_g1_ParamLimits

0x6a0d,	// (0x000175e4) navi_icon_text_pane_t1_ParamLimits

0xdecc,	// (0x0001eaa3) list_single_hc_apps_pane_g1_ParamLimits

0xdee5,	// (0x0001eabc) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x00020887) list_single_hc_apps_pane_g_ParamLimits

0xdefe,	// (0x0001ead5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8647,	// (0x0001921e) list_single_hc_apps_pane_t1_ParamLimits

0xb1d5,	// (0x0001bdac) popup_toolbar2_fixed_window_ParamLimits

0xb1d5,	// (0x0001bdac) popup_toolbar2_fixed_window

0xba5b,	// (0x0001c632) popup_toolbar2_float_window

0xe881,	// (0x0001f458) bg_popup_sub_pane_cp27

0x8675,	// (0x0001924c) grid_toolbar2_float_pane

0xe881,	// (0x0001f458) bg_popup_sub_pane_cp26

0x8675,	// (0x0001924c) grid_toolbar2_fixed_pane

0xdf1a,	// (0x0001eaf1) cell_toolbar2_fixed_pane_ParamLimits

0xdf1a,	// (0x0001eaf1) cell_toolbar2_fixed_pane

0xdf34,	// (0x0001eb0b) cell_toolbar2_fixed_pane_g1

0x8696,	// (0x0001926d) toolbar2_fixed_button_pane

0x4350,	// (0x00014f27) toolbar2_fixed_button_pane_g1

0x4360,	// (0x00014f37) toolbar2_fixed_button_pane_g2

0x4358,	// (0x00014f2f) toolbar2_fixed_button_pane_g3

0x4370,	// (0x00014f47) toolbar2_fixed_button_pane_g4

0x4368,	// (0x00014f3f) toolbar2_fixed_button_pane_g5

0x4378,	// (0x00014f4f) toolbar2_fixed_button_pane_g6

0x4380,	// (0x00014f57) toolbar2_fixed_button_pane_g7

0x4390,	// (0x00014f67) toolbar2_fixed_button_pane_g8

0x4388,	// (0x00014f5f) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x0002040c) toolbar2_fixed_button_pane_g

0x869e,	// (0x00019275) cell_toolbar2_float_pane_ParamLimits

0x869e,	// (0x00019275) cell_toolbar2_float_pane

0x86af,	// (0x00019286) cell_toolbar2_float_pane_g1

0x8696,	// (0x0001926d) toolbar2_fixed_button_pane_cp

0xd929,	// (0x0001e500) fep_vkb_accented_list_pane_ParamLimits

0xd929,	// (0x0001e500) fep_vkb_accented_list_pane

0x0df5,	// (0x000119cc) bg_popup_fep_shadow_pane_g9

0x3adc,	// (0x000146b3) bg_popup_fep_shadow_pane_cp3

0x2efa,	// (0x00013ad1) list_accented_list_pane

0x86b8,	// (0x0001928f) list_single_accented_list_pane_ParamLimits

0x86b8,	// (0x0001928f) list_single_accented_list_pane

0x3adc,	// (0x000146b3) list_highlight_pane_cp10

0x86c9,	// (0x000192a0) list_single_accented_list_pane_t1

0xb985,	// (0x0001c55c) popup_slider_window_ParamLimits

0xb985,	// (0x0001c55c) popup_slider_window

0x81a5,	// (0x00018d7c) aid_indentation_list_msg

0xe02b,	// (0x0001ec02) bg_popup_window_pane_cp19

0x87f5,	// (0x000193cc) popup_slider_window_g1

0x8811,	// (0x000193e8) popup_slider_window_g2

0x882d,	// (0x00019404) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0002088c) popup_slider_window_g

0x8893,	// (0x0001946a) popup_slider_window_t1

0x8907,	// (0x000194de) small_volume_slider_vertical_pane

0x6e9a,	// (0x00017a71) small_volume_slider_vertical_pane_g1

0x6e9a,	// (0x00017a71) small_volume_slider_vertical_pane_g2

0x8923,	// (0x000194fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0002089e) small_volume_slider_vertical_pane_g

0xee0a,	// (0x0001f9e1) area_side_right_pane_ParamLimits

0xee0a,	// (0x0001f9e1) area_side_right_pane

0xbbfc,	// (0x0001c7d3) aid_size_side_button_ParamLimits

0xbbfc,	// (0x0001c7d3) aid_size_side_button

0xbc15,	// (0x0001c7ec) grid_sctrl_middle_pane_ParamLimits

0xbc15,	// (0x0001c7ec) grid_sctrl_middle_pane

0x1012,	// (0x00011be9) sctrl_sk_bottom_pane

0x1023,	// (0x00011bfa) sctrl_sk_top_pane

0x1035,	// (0x00011c0c) aid_touch_sctrl_top

0x1042,	// (0x00011c19) bg_sctrl_sk_pane_ParamLimits

0x1042,	// (0x00011c19) bg_sctrl_sk_pane

0x1050,	// (0x00011c27) sctrl_sk_top_pane_g1

0x105d,	// (0x00011c34) sctrl_sk_top_pane_t1

0x1035,	// (0x00011c0c) aid_touch_sctrl_bottom

0x1042,	// (0x00011c19) bg_sctrl_sk_pane_cp_ParamLimits

0x1042,	// (0x00011c19) bg_sctrl_sk_pane_cp

0x1078,	// (0x00011c4f) sctrl_sk_bottom_pane_g1

0x105d,	// (0x00011c34) sctrl_sk_bottom_pane_t1

0xbc34,	// (0x0001c80b) cell_sctrl_middle_pane_ParamLimits

0xbc34,	// (0x0001c80b) cell_sctrl_middle_pane

0xbc57,	// (0x0001c82e) aid_touch_sctrl_middle_ParamLimits

0xbc57,	// (0x0001c82e) aid_touch_sctrl_middle

0x1042,	// (0x00011c19) bg_sctrl_middle_pane_ParamLimits

0x1042,	// (0x00011c19) bg_sctrl_middle_pane

0x195a,	// (0x00012531) cell_sctrl_middle_pane_g1_ParamLimits

0x195a,	// (0x00012531) cell_sctrl_middle_pane_g1

0xbc6b,	// (0x0001c842) cell_sctrl_middle_pane_g2_ParamLimits

0xbc6b,	// (0x0001c842) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x000208aa) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x000208aa) cell_sctrl_middle_pane_g

0x4350,	// (0x00014f27) bg_sctrl_middle_pane_g1

0x4358,	// (0x00014f2f) bg_sctrl_middle_pane_g2

0x4360,	// (0x00014f37) bg_sctrl_middle_pane_g3

0x4368,	// (0x00014f3f) bg_sctrl_middle_pane_g4

0x4370,	// (0x00014f47) bg_sctrl_middle_pane_g5

0x4378,	// (0x00014f4f) bg_sctrl_middle_pane_g6

0x4380,	// (0x00014f57) bg_sctrl_middle_pane_g7

0x4388,	// (0x00014f5f) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x000208af) bg_sctrl_middle_pane_g

0x4390,	// (0x00014f67) bg_sctrl_middle_pane_g8_copy1

0x4350,	// (0x00014f27) bg_sctrl_sk_pane_g1

0x4360,	// (0x00014f37) bg_sctrl_sk_pane_g2

0x4358,	// (0x00014f2f) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x0002040c) bg_sctrl_sk_pane_g

0x25e8,	// (0x000131bf) aid_size_touch_scroll_bar

0x4370,	// (0x00014f47) bg_sctrl_sk_pane_g4

0x4368,	// (0x00014f3f) bg_sctrl_sk_pane_g5

0x4378,	// (0x00014f4f) bg_sctrl_sk_pane_g6

0x4380,	// (0x00014f57) bg_sctrl_sk_pane_g7

0x4390,	// (0x00014f67) bg_sctrl_sk_pane_g8

0x4388,	// (0x00014f5f) bg_sctrl_sk_pane_g9

0x01a5,	// (0x00010d7c) popup_fep_china_hwr2_fs_candidate_window

0xb499,	// (0x0001c070) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb499,	// (0x0001c070) popup_fep_china_hwr2_fs_control_window

0x0e15,	// (0x000119ec) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x000208a5) sctrl_sk_top_pane_g

0xe0e3,	// (0x0001ecba) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe0e3,	// (0x0001ecba) aid_fep_china_hwr2_fs_cell

0xe0f7,	// (0x0001ecce) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe0f7,	// (0x0001ecce) bg_popup_fep_shadow_pane_cp4

0xe10e,	// (0x0001ece5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe10e,	// (0x0001ece5) bg_popup_fep_shadow_pane_cp5

0xe120,	// (0x0001ecf7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe120,	// (0x0001ecf7) popup_fep_china_hwr2_fs_control_bar_grid

0xe134,	// (0x0001ed0b) popup_fep_china_hwr2_fs_control_funtion_grid

0x897f,	// (0x00019556) aid_fep_china_hwr2_fs_candi_cell

0xe881,	// (0x0001f458) bg_popup_fep_shadow_pane_cp6

0x8989,	// (0x00019560) popup_fep_china_hwr2_fs_candidate_grid

0xe13c,	// (0x0001ed13) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe13c,	// (0x0001ed13) cell_fep_china_hwr2_fs_funtion_grid

0x6e9a,	// (0x00017a71) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x89ab,	// (0x00019582) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x89ab,	// (0x00019582) cell_fep_china_hwr2_fs_funtion_grid_g1

0x89b9,	// (0x00019590) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x89b9,	// (0x00019590) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x000208c0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x000208c0) cell_fep_china_hwr2_fs_funtion_grid_g

0xe154,	// (0x0001ed2b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe154,	// (0x0001ed2b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe169,	// (0x0001ed40) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe169,	// (0x0001ed40) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x000208c5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x000208c5) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a00,	// (0x000195d7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8a08,	// (0x000195df) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8a10,	// (0x000195e7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x000208ca) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8a18,	// (0x000195ef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8a18,	// (0x000195ef) cell_fep_china_hwr2_fs_candidate_grid

0x8a31,	// (0x00019608) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8a39,	// (0x00019610) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6e9a,	// (0x00017a71) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6e9a,	// (0x00017a71) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb07,	// (0x000206de) cell_fep_china_hwr2_fs_candidate_grid_g

0x8a41,	// (0x00019618) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3f30,	// (0x00014b07) clock_nsta_pane_cp_24_ParamLimits

0x3f30,	// (0x00014b07) clock_nsta_pane_cp_24

0x3fae,	// (0x00014b85) indicator_nsta_pane_cp_24_ParamLimits

0x3fae,	// (0x00014b85) indicator_nsta_pane_cp_24

0x514a,	// (0x00015d21) heading_pane_g1

0x0001,

0xf89a,	// (0x00020471) heading_pane_g

0x5c6e,	// (0x00016845) grid_sct_catagory_button_pane

0x5c9e,	// (0x00016875) scroll_pane_cp5_ParamLimits

0x6a4f,	// (0x00017626) button_value_adjust_pane_cp5_ParamLimits

0x6a4f,	// (0x00017626) button_value_adjust_pane_cp5

0x6b4b,	// (0x00017722) form2_midp_time_pane_ParamLimits

0x8a4f,	// (0x00019626) cell_sct_catagory_button_pane_ParamLimits

0x8a4f,	// (0x00019626) cell_sct_catagory_button_pane

0x6e5f,	// (0x00017a36) bg_button_pane_cp01_ParamLimits

0x6e5f,	// (0x00017a36) bg_button_pane_cp01

0x6e9a,	// (0x00017a71) cell_sct_catagory_button_pane_g1

0xb9fe,	// (0x0001c5d5) popup_tb_extension_window

0xe185,	// (0x0001ed5c) aid_size_cell_ext_ParamLimits

0xe185,	// (0x0001ed5c) aid_size_cell_ext

0x242a,	// (0x00013001) bg_tb_trans_pane_cp1_ParamLimits

0x242a,	// (0x00013001) bg_tb_trans_pane_cp1

0xe1ab,	// (0x0001ed82) grid_tb_ext_pane_ParamLimits

0xe1ab,	// (0x0001ed82) grid_tb_ext_pane

0xe1e6,	// (0x0001edbd) cell_tb_ext_pane_ParamLimits

0xe1e6,	// (0x0001edbd) cell_tb_ext_pane

0xe20e,	// (0x0001ede5) cell_tb_ext_pane_g1_ParamLimits

0xe20e,	// (0x0001ede5) cell_tb_ext_pane_g1

0x8ae3,	// (0x000196ba) cell_tb_ext_pane_t1

0x20b5,	// (0x00012c8c) list_highlight_pane_cp11_ParamLimits

0x20b5,	// (0x00012c8c) list_highlight_pane_cp11

0xb1ea,	// (0x0001bdc1) popup_uni_indicator_window_ParamLimits

0xb1ea,	// (0x0001bdc1) popup_uni_indicator_window

0x2c10,	// (0x000137e7) bg_popup_sub_pane_cp14

0x8afe,	// (0x000196d5) list_uniindi_pane

0x8b0a,	// (0x000196e1) uniindi_top_pane

0x20b5,	// (0x00012c8c) bg_uniindi_top_pane

0x8b29,	// (0x00019700) uniindi_top_pane_g1

0x8b3f,	// (0x00019716) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x000208d1) uniindi_top_pane_g

0x8b69,	// (0x00019740) uniindi_top_pane_t1

0x8b93,	// (0x0001976a) list_single_uniindi_pane_ParamLimits

0x8b93,	// (0x0001976a) list_single_uniindi_pane

0x6e9a,	// (0x00017a71) bg_uniindi_top_pane_g1

0x8ba6,	// (0x0001977d) list_single_uniindi_pane_g1

0x8bb9,	// (0x00019790) list_single_uniindi_pane_t1

0xeeed,	// (0x0001fac4) control_bg_pane

0x8bde,	// (0x000197b5) bg_sctrl_sk_pane_cp1

0x8be7,	// (0x000197be) bg_sctrl_sk_pane_cp2

0x8bf0,	// (0x000197c7) control_bg_pane_g1

0x8bf9,	// (0x000197d0) control_bg_pane_g2

0x0001,

0xfd03,	// (0x000208da) control_bg_pane_g

0x6899,	// (0x00017470) cell_indicator_nsta_pane_g1_ParamLimits

0xd75a,	// (0x0001e331) cell_indicator_nsta_pane_g2_ParamLimits

0xfa6b,	// (0x00020642) cell_indicator_nsta_pane_g_ParamLimits

0x6bd3,	// (0x000177aa) form2_midp_time_pane_t1_ParamLimits

0x0bb0,	// (0x00011787) main_idle_act4_pane_ParamLimits

0x0bb0,	// (0x00011787) main_idle_act4_pane

0xb9fe,	// (0x0001c5d5) popup_tb_extension_window_ParamLimits

0xe1cd,	// (0x0001eda4) tb_ext_find_pane_ParamLimits

0xe1cd,	// (0x0001eda4) tb_ext_find_pane

0x8c02,	// (0x000197d9) ai_gene_pane_1_cp1

0x3c23,	// (0x000147fa) ai_gene_pane_2_cp1

0x8c0a,	// (0x000197e1) list_single_idle_plugin_calendar_pane

0x8c13,	// (0x000197ea) list_single_idle_plugin_notification_pane

0x8c1c,	// (0x000197f3) list_single_idle_plugin_player_pane

0xe22b,	// (0x0001ee02) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe22b,	// (0x0001ee02) list_single_idle_plugin_shortcut_pane

0xe253,	// (0x0001ee2a) main_idle_act4_pane_t1

0xe269,	// (0x0001ee40) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x000208df) main_idle_act4_pane_t

0xe27f,	// (0x0001ee56) middle_sk_idle_act4_pane_ParamLimits

0xe27f,	// (0x0001ee56) middle_sk_idle_act4_pane

0xe29b,	// (0x0001ee72) popup_clock_digital_analogue_window_cp2

0xe2c3,	// (0x0001ee9a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe2c3,	// (0x0001ee9a) shortcut_wheel_idle_act4_pane

0x6e9a,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g1

0x6e9a,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g2

0x6e9a,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g3

0x6e9a,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g4

0x6e9a,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g5

0x8caf,	// (0x00019886) shortcut_wheel_idle_act4_pane_g6

0x8cb7,	// (0x0001988e) shortcut_wheel_idle_act4_pane_g7

0x8cbf,	// (0x00019896) shortcut_wheel_idle_act4_pane_g8

0x8cc7,	// (0x0001989e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x000208e4) shortcut_wheel_idle_act4_pane_g

0xd783,	// (0x0001e35a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd783,	// (0x0001e35a) middle_sk_idle_act4_pane_g1

0xe340,	// (0x0001ef17) middle_sk_idle_act4_pane_g2_ParamLimits

0xe340,	// (0x0001ef17) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x00020907) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x00020907) middle_sk_idle_act4_pane_g

0xe358,	// (0x0001ef2f) middle_sk_idle_act4_pane_t1_ParamLimits

0xe358,	// (0x0001ef2f) middle_sk_idle_act4_pane_t1

0xe387,	// (0x0001ef5e) grid_ai_shortcut_pane_ParamLimits

0xe387,	// (0x0001ef5e) grid_ai_shortcut_pane

0xe3a4,	// (0x0001ef7b) list_highlight_pane_cp16_ParamLimits

0xe3a4,	// (0x0001ef7b) list_highlight_pane_cp16

0xe3b1,	// (0x0001ef88) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe3b1,	// (0x0001ef88) list_single_idle_plugin_shortcut_pane_g1

0xe3bd,	// (0x0001ef94) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe3bd,	// (0x0001ef94) list_single_idle_plugin_shortcut_pane_g2

0xe3d9,	// (0x0001efb0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe3d9,	// (0x0001efb0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0002090c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0002090c) list_single_idle_plugin_shortcut_pane_g

0xe3ee,	// (0x0001efc5) cell_ai_shortcut_pane_ParamLimits

0xe3ee,	// (0x0001efc5) cell_ai_shortcut_pane

0xe404,	// (0x0001efdb) cell_ai_shortcut_pane_g1_ParamLimits

0xe404,	// (0x0001efdb) cell_ai_shortcut_pane_g1

0x8c02,	// (0x000197d9) ai_gene_pane_1_cp2

0x8df7,	// (0x000199ce) ai_gene_pane_2_cp2

0x8dff,	// (0x000199d6) list_highlight_pane_cp15

0x8e08,	// (0x000199df) list_single_idle_plugin_calendar_pane_g1

0x8dff,	// (0x000199d6) list_highlight_pane_cp17

0x8e10,	// (0x000199e7) list_single_idle_plugin_calendar_pane_g1_copy1

0x8e18,	// (0x000199ef) list_single_idle_plugin_player_pane_g1

0x5ec7,	// (0x00016a9e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x00020913) list_single_idle_plugin_player_pane_g

0x8e20,	// (0x000199f7) list_single_idle_plugin_player_pane_t1

0x8e2e,	// (0x00019a05) list_single_idle_plugin_player_pane_t2

0x8e3c,	// (0x00019a13) list_single_idle_plugin_player_pane_t3

0x8e4a,	// (0x00019a21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x00020918) list_single_idle_plugin_player_pane_t

0x8e58,	// (0x00019a2f) wait_bar_pane_cp15

0x8e60,	// (0x00019a37) grid_ai_notification_pane

0x5ec7,	// (0x00016a9e) list_single_idle_plugin_notification_pane_g1

0xe426,	// (0x0001effd) cell_ai_notification_pane_ParamLimits

0xe426,	// (0x0001effd) cell_ai_notification_pane

0x8e76,	// (0x00019a4d) cell_ai_notification_pane_g1

0x8e7e,	// (0x00019a55) cell_ai_notification_pane_t1

0xe433,	// (0x0001f00a) tb_ext_find_button_pane

0xe43b,	// (0x0001f012) tb_ext_find_pane_g1

0xe443,	// (0x0001f01a) tb_ext_find_pane_t1

0x3428,	// (0x00013fff) tb_ext_find_button_pane_g1

0x8eaa,	// (0x00019a81) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x00020921) tb_ext_find_button_pane_g

0xe253,	// (0x0001ee2a) main_idle_act4_pane_t1_ParamLimits

0xe269,	// (0x0001ee40) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x000208df) main_idle_act4_pane_t_ParamLimits

0xe29b,	// (0x0001ee72) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe2b3,	// (0x0001ee8a) sat_plugin_idle_act4_pane_ParamLimits

0xe2b3,	// (0x0001ee8a) sat_plugin_idle_act4_pane

0xe451,	// (0x0001f028) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe451,	// (0x0001f028) sat_plugin_idle_act4_pane_t1

0xe469,	// (0x0001f040) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe469,	// (0x0001f040) sat_plugin_idle_act4_pane_t2

0xe481,	// (0x0001f058) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe481,	// (0x0001f058) sat_plugin_idle_act4_pane_t3

0xe499,	// (0x0001f070) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe499,	// (0x0001f070) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x00020926) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x00020926) sat_plugin_idle_act4_pane_t

0xefb2,	// (0x0001fb89) popup_battery_window_ParamLimits

0xefb2,	// (0x0001fb89) popup_battery_window

0x20b5,	// (0x00012c8c) bg_popup_sub_pane_cp25_ParamLimits

0x20b5,	// (0x00012c8c) bg_popup_sub_pane_cp25

0x8eff,	// (0x00019ad6) popup_battery_window_g1_ParamLimits

0x8eff,	// (0x00019ad6) popup_battery_window_g1

0x8f0b,	// (0x00019ae2) popup_battery_window_t1_ParamLimits

0x8f0b,	// (0x00019ae2) popup_battery_window_t1

0x8f1d,	// (0x00019af4) popup_battery_window_t2_ParamLimits

0x8f1d,	// (0x00019af4) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0002092f) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0002092f) popup_battery_window_t

0xcc93,	// (0x0001d86a) midp_canvas_pane_ParamLimits

0xccf0,	// (0x0001d8c7) midp_keypad_pane_ParamLimits

0xccf0,	// (0x0001d8c7) midp_keypad_pane

0x3e08,	// (0x000149df) main_midp_pane_ParamLimits

0x6913,	// (0x000174ea) signal_pane_g2_cp_ParamLimits

0xe4b1,	// (0x0001f088) aid_size_cell_midp_keypad_ParamLimits

0xe4b1,	// (0x0001f088) aid_size_cell_midp_keypad

0xe4cf,	// (0x0001f0a6) midp_keyp_game_grid_pane_ParamLimits

0xe4cf,	// (0x0001f0a6) midp_keyp_game_grid_pane

0xe4f6,	// (0x0001f0cd) midp_keyp_rocker_pane_ParamLimits

0xe4f6,	// (0x0001f0cd) midp_keyp_rocker_pane

0xe547,	// (0x0001f11e) midp_keyp_sk_left_pane_ParamLimits

0xe547,	// (0x0001f11e) midp_keyp_sk_left_pane

0xe59b,	// (0x0001f172) midp_keyp_sk_right_pane_ParamLimits

0xe59b,	// (0x0001f172) midp_keyp_sk_right_pane

0xe881,	// (0x0001f458) bg_button_pane_cp03

0xe5ef,	// (0x0001f1c6) midp_keyp_sk_left_pane_g1

0xe881,	// (0x0001f458) bg_button_pane_cp04

0xe5ef,	// (0x0001f1c6) midp_keyp_sk_right_pane_g1

0x6e9a,	// (0x00017a71) midp_keyp_rocker_pane_g1

0xe5f8,	// (0x0001f1cf) keyp_game_cell_pane_ParamLimits

0xe5f8,	// (0x0001f1cf) keyp_game_cell_pane

0xe881,	// (0x0001f458) bg_button_pane_cp02

0xe61c,	// (0x0001f1f3) keyp_game_cell_pane_g1

0xb185,	// (0x0001bd5c) popup_fep_vkb2_window_ParamLimits

0xb185,	// (0x0001bd5c) popup_fep_vkb2_window

0xbc7d,	// (0x0001c854) aid_size_cell_vkb2_ParamLimits

0xbc7d,	// (0x0001c854) aid_size_cell_vkb2

0xbca9,	// (0x0001c880) popup_fep_vkb2_window_g1_ParamLimits

0xbca9,	// (0x0001c880) popup_fep_vkb2_window_g1

0xbcf9,	// (0x0001c8d0) vkb2_area_bottom_pane_ParamLimits

0xbcf9,	// (0x0001c8d0) vkb2_area_bottom_pane

0xbd4d,	// (0x0001c924) vkb2_area_keypad_pane_ParamLimits

0xbd4d,	// (0x0001c924) vkb2_area_keypad_pane

0xbd95,	// (0x0001c96c) vkb2_area_top_pane_ParamLimits

0xbd95,	// (0x0001c96c) vkb2_area_top_pane

0xbe21,	// (0x0001c9f8) vkb2_top_entry_pane_ParamLimits

0xbe21,	// (0x0001c9f8) vkb2_top_entry_pane

0xbe4e,	// (0x0001ca25) vkb2_top_grid_left_pane_ParamLimits

0xbe4e,	// (0x0001ca25) vkb2_top_grid_left_pane

0xbe6f,	// (0x0001ca46) vkb2_top_grid_right_pane_ParamLimits

0xbe6f,	// (0x0001ca46) vkb2_top_grid_right_pane

0x12e3,	// (0x00011eba) vkb2_cell_keypad_pane_ParamLimits

0x12e3,	// (0x00011eba) vkb2_cell_keypad_pane

0xbeb7,	// (0x0001ca8e) vkb2_area_bottom_grid_pane_ParamLimits

0xbeb7,	// (0x0001ca8e) vkb2_area_bottom_grid_pane

0xbee1,	// (0x0001cab8) vkb2_area_bottom_pane_g1_ParamLimits

0xbee1,	// (0x0001cab8) vkb2_area_bottom_pane_g1

0xbf07,	// (0x0001cade) vkb2_area_bottom_pane_g2_ParamLimits

0xbf07,	// (0x0001cade) vkb2_area_bottom_pane_g2

0xbf38,	// (0x0001cb0f) vkb2_area_bottom_pane_g3_ParamLimits

0xbf38,	// (0x0001cb0f) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x00020934) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x00020934) vkb2_area_bottom_pane_g

0x148d,	// (0x00012064) vkb2_top_cell_left_pane_ParamLimits

0x148d,	// (0x00012064) vkb2_top_cell_left_pane

0xe625,	// (0x0001f1fc) vkb2_top_entry_pane_g1_ParamLimits

0xe625,	// (0x0001f1fc) vkb2_top_entry_pane_g1

0xe633,	// (0x0001f20a) vkb2_top_entry_pane_t1_ParamLimits

0xe633,	// (0x0001f20a) vkb2_top_entry_pane_t1

0x90ce,	// (0x00019ca5) vkb2_top_entry_pane_t2_ParamLimits

0x90ce,	// (0x00019ca5) vkb2_top_entry_pane_t2

0x9100,	// (0x00019cd7) vkb2_top_entry_pane_t3_ParamLimits

0x9100,	// (0x00019cd7) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0002093b) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0002093b) vkb2_top_entry_pane_t

0xbfa2,	// (0x0001cb79) vkb2_top_grid_right_pane_g1_ParamLimits

0xbfa2,	// (0x0001cb79) vkb2_top_grid_right_pane_g1

0x14f0,	// (0x000120c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x14f0,	// (0x000120c7) vkb2_top_grid_right_pane_g2

0x1508,	// (0x000120df) vkb2_top_grid_right_pane_g3_ParamLimits

0x1508,	// (0x000120df) vkb2_top_grid_right_pane_g3

0xbfb8,	// (0x0001cb8f) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfb8,	// (0x0001cb8f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x00020942) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x00020942) vkb2_top_grid_right_pane_g

0x1536,	// (0x0001210d) vkb2_top_cell_left_pane_g1

0x154d,	// (0x00012124) vkb2_cell_keypad_pane_g1_ParamLimits

0x154d,	// (0x00012124) vkb2_cell_keypad_pane_g1

0x9145,	// (0x00019d1c) vkb2_cell_keypad_pane_t1_ParamLimits

0x9145,	// (0x00019d1c) vkb2_cell_keypad_pane_t1

0x155b,	// (0x00012132) vkb2_cell_bottom_grid_pane_ParamLimits

0x155b,	// (0x00012132) vkb2_cell_bottom_grid_pane

0x1594,	// (0x0001216b) vkb2_cell_bottom_grid_pane_g1

0xe2e4,	// (0x0001eebb) aid_call2_pane_cp02

0xe2ec,	// (0x0001eec3) aid_call_pane_cp02

0xe2f4,	// (0x0001eecb) clock_digital_number_pane_cp10

0xe2fc,	// (0x0001eed3) clock_digital_number_pane_cp11

0xe304,	// (0x0001eedb) clock_digital_number_pane_cp12

0xe30c,	// (0x0001eee3) clock_digital_number_pane_cp13

0xe314,	// (0x0001eeeb) clock_digital_separator_pane_cp10

0x3428,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g1

0x3428,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g2

0xe31c,	// (0x0001eef3) popup_clock_digital_analogue_window_cp2_g3

0x3428,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g4

0xe31c,	// (0x0001eef3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x000208f7) popup_clock_digital_analogue_window_cp2_g

0xe324,	// (0x0001eefb) popup_clock_digital_analogue_window_cp2_t1

0xe332,	// (0x0001ef09) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x00020902) popup_clock_digital_analogue_window_cp2_t

0x6e9a,	// (0x00017a71) clock_digital_number_pane_cp10_g1

0x6e9a,	// (0x00017a71) clock_digital_number_pane_cp10_g2

0x0001,

0xfb07,	// (0x000206de) clock_digital_number_pane_cp10_g

0x6e9a,	// (0x00017a71) clock_digital_separator_pane_cp10_g1

0x6e9a,	// (0x00017a71) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb07,	// (0x000206de) clock_digital_separator_pane_cp10_g

0x8b4b,	// (0x00019722) uniindi_top_pane_g3

0x8b5c,	// (0x00019733) uniindi_top_pane_g4

0x136e,	// (0x00011f45) vkb2_row_keypad_pane_ParamLimits

0x136e,	// (0x00011f45) vkb2_row_keypad_pane

0x15b4,	// (0x0001218b) vkb2_cell_t_keypad_pane_ParamLimits

0x15b4,	// (0x0001218b) vkb2_cell_t_keypad_pane

0x15c4,	// (0x0001219b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x15c4,	// (0x0001219b) vkb2_cell_t_keypad_pane_cp08

0x15d7,	// (0x000121ae) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x15d7,	// (0x000121ae) vkb2_cell_t_keypad_pane_cp09

0x15eb,	// (0x000121c2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x15eb,	// (0x000121c2) vkb2_cell_t_keypad_pane_cp01

0x15fc,	// (0x000121d3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x15fc,	// (0x000121d3) vkb2_cell_t_keypad_pane_cp02

0x160d,	// (0x000121e4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x160d,	// (0x000121e4) vkb2_cell_t_keypad_pane_cp03

0x161e,	// (0x000121f5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x161e,	// (0x000121f5) vkb2_cell_t_keypad_pane_cp04

0x162f,	// (0x00012206) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x162f,	// (0x00012206) vkb2_cell_t_keypad_pane_cp05

0x1640,	// (0x00012217) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1640,	// (0x00012217) vkb2_cell_t_keypad_pane_cp06

0x1651,	// (0x00012228) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1651,	// (0x00012228) vkb2_cell_t_keypad_pane_cp07

0x1662,	// (0x00012239) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1662,	// (0x00012239) vkb2_cell_t_keypad_pane_cp10

0x0e15,	// (0x000119ec) vkb2_cell_t_keypad_pane_g1

0x915c,	// (0x00019d33) vkb2_cell_t_keypad_pane_t1

0xeeed,	// (0x0001fac4) popup_grid_graphic2_window

0xe66c,	// (0x0001f243) aid_size_cell_graphic2_ParamLimits

0xe66c,	// (0x0001f243) aid_size_cell_graphic2

0xe6aa,	// (0x0001f281) bg_popup_window_pane_cp21_ParamLimits

0xe6aa,	// (0x0001f281) bg_popup_window_pane_cp21

0xe6b8,	// (0x0001f28f) graphic2_pages_pane_ParamLimits

0xe6b8,	// (0x0001f28f) graphic2_pages_pane

0xe70e,	// (0x0001f2e5) grid_graphic2_control_pane_ParamLimits

0xe70e,	// (0x0001f2e5) grid_graphic2_control_pane

0xe756,	// (0x0001f32d) grid_graphic2_pane_ParamLimits

0xe756,	// (0x0001f32d) grid_graphic2_pane

0xe7dd,	// (0x0001f3b4) cell_graphic2_pane

0xeeed,	// (0x0001fac4) main_comp_mode_pane

0x8354,	// (0x00018f2b) list_ai3_gene_pane_ParamLimits

0xe02b,	// (0x0001ec02) bg_popup_window_pane_cp19_ParamLimits

0x8799,	// (0x00019370) bg_touch_area_indi_pane_ParamLimits

0x8799,	// (0x00019370) bg_touch_area_indi_pane

0x87af,	// (0x00019386) bg_touch_area_indi_pane_cp01_ParamLimits

0x87af,	// (0x00019386) bg_touch_area_indi_pane_cp01

0x87c5,	// (0x0001939c) bg_touch_area_indi_pane_cp02_ParamLimits

0x87c5,	// (0x0001939c) bg_touch_area_indi_pane_cp02

0x87db,	// (0x000193b2) bg_touch_area_indi_pane_cp03_ParamLimits

0x87db,	// (0x000193b2) bg_touch_area_indi_pane_cp03

0x87f5,	// (0x000193cc) popup_slider_window_g1_ParamLimits

0x8811,	// (0x000193e8) popup_slider_window_g2_ParamLimits

0x882d,	// (0x00019404) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0002088c) popup_slider_window_g_ParamLimits

0x8893,	// (0x0001946a) popup_slider_window_t1_ParamLimits

0x8907,	// (0x000194de) small_volume_slider_vertical_pane_ParamLimits

0xe7dd,	// (0x0001f3b4) cell_graphic2_pane_ParamLimits

0xe838,	// (0x0001f40f) bg_button_pane_cp10_ParamLimits

0xe838,	// (0x0001f40f) bg_button_pane_cp10

0xe84b,	// (0x0001f422) bg_button_pane_cp11_ParamLimits

0xe84b,	// (0x0001f422) bg_button_pane_cp11

0xe85e,	// (0x0001f435) graphic2_pages_pane_g1_ParamLimits

0xe85e,	// (0x0001f435) graphic2_pages_pane_g1

0xe8ac,	// (0x0001f483) graphic2_pages_pane_g2_ParamLimits

0xe8ac,	// (0x0001f483) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x00020950) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x00020950) graphic2_pages_pane_g

0xe8c4,	// (0x0001f49b) graphic2_pages_pane_t1_ParamLimits

0xe8c4,	// (0x0001f49b) graphic2_pages_pane_t1

0xe8dc,	// (0x0001f4b3) cell_graphic2_control_pane_ParamLimits

0xe8dc,	// (0x0001f4b3) cell_graphic2_control_pane

0xe90e,	// (0x0001f4e5) cell_graphic2_pane_g1_ParamLimits

0xe90e,	// (0x0001f4e5) cell_graphic2_pane_g1

0xd791,	// (0x0001e368) cell_graphic2_pane_g2_ParamLimits

0xd791,	// (0x0001e368) cell_graphic2_pane_g2

0xe89f,	// (0x0001f476) cell_graphic2_pane_g3_ParamLimits

0xe89f,	// (0x0001f476) cell_graphic2_pane_g3

0xd79e,	// (0x0001e375) cell_graphic2_pane_g4_ParamLimits

0xd79e,	// (0x0001e375) cell_graphic2_pane_g4

0xe91b,	// (0x0001f4f2) cell_graphic2_pane_g5_ParamLimits

0xe91b,	// (0x0001f4f2) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x00020955) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x00020955) cell_graphic2_pane_g

0xe938,	// (0x0001f50f) cell_graphic2_pane_t1_ParamLimits

0xe938,	// (0x0001f50f) cell_graphic2_pane_t1

0x513e,	// (0x00015d15) grid_highlight_pane_cp11_ParamLimits

0x513e,	// (0x00015d15) grid_highlight_pane_cp11

0x20b5,	// (0x00012c8c) bg_button_pane_cp05

0xe982,	// (0x0001f559) cell_graphic2_control_pane_g1

0x6e9a,	// (0x00017a71) bg_touch_area_indi_pane_g1

0x9435,	// (0x0001a00c) aid_cmod_rocker_key_size

0x943f,	// (0x0001a016) aid_cmode_itu_key_size

0x9449,	// (0x0001a020) main_cmode_video_pane

0x9453,	// (0x0001a02a) main_comp_mode_itu_pane

0x945f,	// (0x0001a036) main_comp_mode_rocker_pane

0x946b,	// (0x0001a042) cell_cmode_rocker_pane_ParamLimits

0x946b,	// (0x0001a042) cell_cmode_rocker_pane

0x947d,	// (0x0001a054) cell_cmode_itu_pane_ParamLimits

0x947d,	// (0x0001a054) cell_cmode_itu_pane

0x2c10,	// (0x000137e7) bg_button_pane_cp06_ParamLimits

0x2c10,	// (0x000137e7) bg_button_pane_cp06

0x7118,	// (0x00017cef) cell_cmode_rocker_pane_g1_ParamLimits

0x7118,	// (0x00017cef) cell_cmode_rocker_pane_g1

0x89ab,	// (0x00019582) cell_cmode_rocker_pane_g2_ParamLimits

0x89ab,	// (0x00019582) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x00020965) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x00020965) cell_cmode_rocker_pane_g

0xe881,	// (0x0001f458) bg_button_pane_cp07

0x9492,	// (0x0001a069) cell_cmode_itu_pane_g1

0x949b,	// (0x0001a072) cell_cmode_itu_pane_t1

0x94a9,	// (0x0001a080) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0002096a) cell_cmode_itu_pane_t

0x8bce,	// (0x000197a5) aid_touch_ctrl_left

0x8bd6,	// (0x000197ad) aid_touch_ctrl_right

0xe881,	// (0x0001f458) compa_mode_pane

0xe9a6,	// (0x0001f57d) aid_cmod_rocker_key_size_cp

0xe9b0,	// (0x0001f587) aid_cmode_itu_key_size_cp

0x94cb,	// (0x0001a0a2) compa_mode_pane_g1

0x94d3,	// (0x0001a0aa) compa_mode_pane_g2

0x94db,	// (0x0001a0b2) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0002096f) compa_mode_pane_g

0xe9ba,	// (0x0001f591) main_comp_mode_itu_pane_cp

0xe9c2,	// (0x0001f599) main_comp_mode_rocker_pane_cp

0xe9ca,	// (0x0001f5a1) cell_cmode_itu_pane_cp_ParamLimits

0xe9ca,	// (0x0001f5a1) cell_cmode_itu_pane_cp

0xe9df,	// (0x0001f5b6) cell_cmode_rocker_pane_cp_ParamLimits

0xe9df,	// (0x0001f5b6) cell_cmode_rocker_pane_cp

0x2c10,	// (0x000137e7) bg_button_pane_cp06_cp_ParamLimits

0x2c10,	// (0x000137e7) bg_button_pane_cp06_cp

0x7118,	// (0x00017cef) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7118,	// (0x00017cef) cell_cmode_rocker_pane_g1_cp

0x6e9a,	// (0x00017a71) cell_cmode_rocker_pane_g2_cp

0xe881,	// (0x0001f458) bg_button_pane_cp07_cp

0xe9f1,	// (0x0001f5c8) cell_cmode_itu_pane_g1_cp

0xe9fa,	// (0x0001f5d1) cell_cmode_itu_pane_t1_cp

0xe9fa,	// (0x0001f5d1) cell_cmode_itu_pane_t2_cp

0xd51c,	// (0x0001e0f3) settings_code_pane_cp2

0x1e12,	// (0x000129e9) bg_popup_window_pane_cp3_ParamLimits

0x22b5,	// (0x00012e8c) heading_pane_cp3_ParamLimits

0x22c4,	// (0x00012e9b) listscroll_popup_graphic_pane_ParamLimits

0x0bbe,	// (0x00011795) fep_hwr_aid_pane_ParamLimits

0x1035,	// (0x00011c0c) aid_touch_sctrl_top_ParamLimits

0x1050,	// (0x00011c27) sctrl_sk_top_pane_g1_ParamLimits

0x0e15,	// (0x000119ec) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x000208a5) sctrl_sk_top_pane_g_ParamLimits

0x105d,	// (0x00011c34) sctrl_sk_top_pane_t1_ParamLimits

0x1035,	// (0x00011c0c) aid_touch_sctrl_bottom_ParamLimits

0x105d,	// (0x00011c34) sctrl_sk_bottom_pane_t1_ParamLimits

0x8b17,	// (0x000196ee) aid_area_touch_clock

0xbde1,	// (0x0001c9b8) aid_vkb2_area_top_pane_cell_ParamLimits

0xbde1,	// (0x0001c9b8) aid_vkb2_area_top_pane_cell

0xbe90,	// (0x0001ca67) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe90,	// (0x0001ca67) aid_vkb2_area_bottom_pane_cell

0x9086,	// (0x00019c5d) popup_char_count_window

0x9528,	// (0x0001a0ff) popup_char_count_window_g1

0x9531,	// (0x0001a108) popup_char_count_window_g2

0x953a,	// (0x0001a111) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x00020976) popup_char_count_window_g

0x9543,	// (0x0001a11a) popup_char_count_window_t1

0x1104,	// (0x00011cdb) popup_fep_char_preview_window_ParamLimits

0x1104,	// (0x00011cdb) popup_fep_char_preview_window

0xbe01,	// (0x0001c9d8) vkb2_top_candi_pane_ParamLimits

0xbe01,	// (0x0001c9d8) vkb2_top_candi_pane

0xea08,	// (0x0001f5df) cell_vkb2_top_candi_pane_ParamLimits

0xea08,	// (0x0001f5df) cell_vkb2_top_candi_pane

0x1677,	// (0x0001224e) bg_popup_fep_char_preview_window_ParamLimits

0x1677,	// (0x0001224e) bg_popup_fep_char_preview_window

0x1685,	// (0x0001225c) popup_fep_char_preview_window_t1_ParamLimits

0x1685,	// (0x0001225c) popup_fep_char_preview_window_t1

0x959b,	// (0x0001a172) bg_popup_fep_char_preview_window_g1

0x95a3,	// (0x0001a17a) bg_popup_fep_char_preview_window_g2

0x95ab,	// (0x0001a182) bg_popup_fep_char_preview_window_g3

0x95b3,	// (0x0001a18a) bg_popup_fep_char_preview_window_g4

0x95bb,	// (0x0001a192) bg_popup_fep_char_preview_window_g5

0x95c3,	// (0x0001a19a) bg_popup_fep_char_preview_window_g6

0x95cb,	// (0x0001a1a2) bg_popup_fep_char_preview_window_g7

0x95d3,	// (0x0001a1aa) bg_popup_fep_char_preview_window_g8

0x95db,	// (0x0001a1b2) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0002097d) bg_popup_fep_char_preview_window_g

0x0e15,	// (0x000119ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0e15,	// (0x000119ec) cell_vkb2_top_candi_pane_g1

0x0e23,	// (0x000119fa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0e23,	// (0x000119fa) cell_vkb2_top_candi_pane_g2

0x9124,	// (0x00019cfb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9124,	// (0x00019cfb) cell_vkb2_top_candi_pane_g3

0x16c7,	// (0x0001229e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x16c7,	// (0x0001229e) cell_vkb2_top_candi_pane_g4

0x7788,	// (0x0001835f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7788,	// (0x0001835f) cell_vkb2_top_candi_pane_g5

0x16e8,	// (0x000122bf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x16e8,	// (0x000122bf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x00020992) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x00020992) cell_vkb2_top_candi_pane_g

0x16f6,	// (0x000122cd) cell_vkb2_top_candi_pane_t1

0x0a1e,	// (0x000115f5) aid_size_touch_slider_mark_ParamLimits

0x0a1e,	// (0x000115f5) aid_size_touch_slider_mark

0xe6f4,	// (0x0001f2cb) grid_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x0001f2cb) grid_graphic2_catg_pane

0xe7b0,	// (0x0001f387) popup_grid_graphic2_window_t1_ParamLimits

0xe7b0,	// (0x0001f387) popup_grid_graphic2_window_t1

0xe7c6,	// (0x0001f39d) popup_grid_graphic2_window_t2_ParamLimits

0xe7c6,	// (0x0001f39d) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0002094b) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0002094b) popup_grid_graphic2_window_t

0x20b5,	// (0x00012c8c) bg_button_pane_cp05_ParamLimits

0xe982,	// (0x0001f559) cell_graphic2_control_pane_g1_ParamLimits

0xea68,	// (0x0001f63f) cell_graphic2_catg_pane_ParamLimits

0xea68,	// (0x0001f63f) cell_graphic2_catg_pane

0xe881,	// (0x0001f458) bg_button_pane_cp12

0xea7a,	// (0x0001f651) cell_graphic2_catg_pane_g1

0x8ae3,	// (0x000196ba) cell_tb_ext_pane_t1_ParamLimits

0x14ad,	// (0x00012084) vkb2_top_cell_right_narrow_pane_ParamLimits

0x14ad,	// (0x00012084) vkb2_top_cell_right_narrow_pane

0x14c5,	// (0x0001209c) vkb2_top_cell_right_wide_pane_ParamLimits

0x14c5,	// (0x0001209c) vkb2_top_cell_right_wide_pane

0x0bb0,	// (0x00011787) bg_vkb2_func_pane_ParamLimits

0x0bb0,	// (0x00011787) bg_vkb2_func_pane

0x1536,	// (0x0001210d) vkb2_top_cell_left_pane_g1_ParamLimits

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp03

0x1594,	// (0x0001216b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4358,	// (0x00014f2f) bg_vkb2_func_pane_g1

0x4360,	// (0x00014f37) bg_vkb2_func_pane_g2

0x4370,	// (0x00014f47) bg_vkb2_func_pane_g3

0x4368,	// (0x00014f3f) bg_vkb2_func_pane_g4

0x4378,	// (0x00014f4f) bg_vkb2_func_pane_g5

0x4380,	// (0x00014f57) bg_vkb2_func_pane_g6

0x4388,	// (0x00014f5f) bg_vkb2_func_pane_g7

0x4390,	// (0x00014f67) bg_vkb2_func_pane_g8

0x4350,	// (0x00014f27) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0002099f) bg_vkb2_func_pane_g

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp01

0x1536,	// (0x0001210d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1536,	// (0x0001210d) vkb2_top_cell_right_wide_pane_g1

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0bb0,	// (0x00011787) bg_vkb2_fuc_pane_cp02

0x1715,	// (0x000122ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1715,	// (0x000122ec) vkb2_top_cell_right_narrow_pane_g1

0xdf6d,	// (0x0001eb44) aid_touch_area_decrease_ParamLimits

0xdf6d,	// (0x0001eb44) aid_touch_area_decrease

0xdfa7,	// (0x0001eb7e) aid_touch_area_increase_ParamLimits

0xdfa7,	// (0x0001eb7e) aid_touch_area_increase

0xdfcf,	// (0x0001eba6) aid_touch_area_mute_ParamLimits

0xdfcf,	// (0x0001eba6) aid_touch_area_mute

0xdff7,	// (0x0001ebce) aid_touch_area_slider_ParamLimits

0xdff7,	// (0x0001ebce) aid_touch_area_slider

0xe037,	// (0x0001ec0e) popup_slider_window_g4_ParamLimits

0xe037,	// (0x0001ec0e) popup_slider_window_g4

0xe05f,	// (0x0001ec36) popup_slider_window_g5_ParamLimits

0xe05f,	// (0x0001ec36) popup_slider_window_g5

0xe093,	// (0x0001ec6a) popup_slider_window_g6_ParamLimits

0xe093,	// (0x0001ec6a) popup_slider_window_g6

0x88c1,	// (0x00019498) popup_slider_window_t2_ParamLimits

0x88c1,	// (0x00019498) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x00020899) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x00020899) popup_slider_window_t

0xe0af,	// (0x0001ec86) slider_pane_ParamLimits

0xe0af,	// (0x0001ec86) slider_pane

0x95fe,	// (0x0001a1d5) slider_pane_g1_ParamLimits

0x95fe,	// (0x0001a1d5) slider_pane_g1

0x9612,	// (0x0001a1e9) slider_pane_g2_ParamLimits

0x9612,	// (0x0001a1e9) slider_pane_g2

0x9628,	// (0x0001a1ff) slider_pane_g3_ParamLimits

0x9628,	// (0x0001a1ff) slider_pane_g3

0x0003,

0xfddb,	// (0x000209b2) slider_pane_g_ParamLimits

0xfddb,	// (0x000209b2) slider_pane_g

0xba46,	// (0x0001c61d) popup_tb_float_extension_window_ParamLimits

0xba46,	// (0x0001c61d) popup_tb_float_extension_window

0x9654,	// (0x0001a22b) aid_size_cell_tb_float_ext

0xe881,	// (0x0001f458) bg_popup_sub_window_cp28

0x9660,	// (0x0001a237) grid_tb_float_ext_pane

0x966a,	// (0x0001a241) cell_tb_float_ext_pane_ParamLimits

0x966a,	// (0x0001a241) cell_tb_float_ext_pane

0x9684,	// (0x0001a25b) cell_tb_float_ext_pane_g1

0x968d,	// (0x0001a264) grid_highlight_pane_cp12

0xbb6f,	// (0x0001c746) cell_last_hwr_side_pane_ParamLimits

0xbb6f,	// (0x0001c746) cell_last_hwr_side_pane

0x6e9a,	// (0x00017a71) cell_last_hwr_side_pane_g1

0x9696,	// (0x0001a26d) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x000209bb) cell_last_hwr_side_pane_g

0xbf6d,	// (0x0001cb44) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf6d,	// (0x0001cb44) vkb2_area_bottom_space_btn_pane

0x0e15,	// (0x000119ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x915c,	// (0x00019d33) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x16f6,	// (0x000122cd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1735,	// (0x0001230c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1735,	// (0x0001230c) vkb2_area_bottom_space_btn_pane_g1

0x176f,	// (0x00012346) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x176f,	// (0x00012346) vkb2_area_bottom_space_btn_pane_g2

0x17a5,	// (0x0001237c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x17a5,	// (0x0001237c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x000209c0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x000209c0) vkb2_area_bottom_space_btn_pane_g

0x0c73,	// (0x0001184a) cel_fep_hwr_func_pane_ParamLimits

0x0c73,	// (0x0001184a) cel_fep_hwr_func_pane

0xbb44,	// (0x0001c71b) cell_hwr_side_button_pane_ParamLimits

0xbb44,	// (0x0001c71b) cell_hwr_side_button_pane

0x8b17,	// (0x000196ee) aid_area_touch_clock_ParamLimits

0x20b5,	// (0x00012c8c) bg_uniindi_top_pane_ParamLimits

0x8b29,	// (0x00019700) uniindi_top_pane_g1_ParamLimits

0x8b3f,	// (0x00019716) uniindi_top_pane_g2_ParamLimits

0x8b4b,	// (0x00019722) uniindi_top_pane_g3_ParamLimits

0x8b5c,	// (0x00019733) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x000208d1) uniindi_top_pane_g_ParamLimits

0x8b69,	// (0x00019740) uniindi_top_pane_t1_ParamLimits

0x20b5,	// (0x00012c8c) bg_vkb2_func_pane_cp01_ParamLimits

0x20b5,	// (0x00012c8c) bg_vkb2_func_pane_cp01

0x969f,	// (0x0001a276) cel_fep_hwr_func_pane_g1_ParamLimits

0x969f,	// (0x0001a276) cel_fep_hwr_func_pane_g1

0x20b5,	// (0x00012c8c) bg_vkb2_func_pane_cp02_ParamLimits

0x20b5,	// (0x00012c8c) bg_vkb2_func_pane_cp02

0x969f,	// (0x0001a276) cell_hwr_side_button_pane_g1_ParamLimits

0x969f,	// (0x0001a276) cell_hwr_side_button_pane_g1

0x41bb,	// (0x00014d92) status_pane_g4_ParamLimits

0x41bb,	// (0x00014d92) status_pane_g4

0x41d5,	// (0x00014dac) status_pane_t1

0x6be6,	// (0x000177bd) form2_midp_gauge_slider_cont_pane

0x6bee,	// (0x000177c5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd881,	// (0x0001e458) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd893,	// (0x0001e46a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaba,	// (0x00020691) form2_midp_gauge_slider_pane_t_ParamLimits

0x6c24,	// (0x000177fb) form2_midp_slider_pane_ParamLimits

0x10cc,	// (0x00011ca3) aid_size_cell_func_vkb2_ParamLimits

0x10cc,	// (0x00011ca3) aid_size_cell_func_vkb2

0x9640,	// (0x0001a217) slider_pane_g4_ParamLimits

0x9640,	// (0x0001a217) slider_pane_g4

0xbfd6,	// (0x0001cbad) form2_midp_gauge_slider_pane_t2_cp01

0xbfe4,	// (0x0001cbbb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbfe4,	// (0x0001cbbb) form2_midp_gauge_slider_pane_t3_cp01

0x181a,	// (0x000123f1) form2_midp_slider_pane_cp01

0xe881,	// (0x0001f458) navi_smil_pane

0x96d8,	// (0x0001a2af) navi_smil_pane_g1

0x96e0,	// (0x0001a2b7) navi_smil_pane_t1

0x96ad,	// (0x0001a284) form2_midp_slider_pane_g1

0x96b6,	// (0x0001a28d) form2_midp_slider_pane_g2

0x96be,	// (0x0001a295) form2_midp_slider_pane_g3

0x96ad,	// (0x0001a284) form2_midp_slider_pane_g4

0xea83,	// (0x0001f65a) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x000209c9) form2_midp_slider_pane_g

0x17df,	// (0x000123b6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x17df,	// (0x000123b6) vkb2_area_bottom_space_btn_pane_g4

0xceec,	// (0x0001dac3) lc0_navi_pane_ParamLimits

0xceec,	// (0x0001dac3) lc0_navi_pane

0xcf56,	// (0x0001db2d) lc0_stat_indi_pane_ParamLimits

0xcf56,	// (0x0001db2d) lc0_stat_indi_pane

0xcf6b,	// (0x0001db42) ls0_title_pane_ParamLimits

0xcf6b,	// (0x0001db42) ls0_title_pane

0x2c10,	// (0x000137e7) bg_popup_sub_pane_cp14_ParamLimits

0x8afe,	// (0x000196d5) list_uniindi_pane_ParamLimits

0x8b0a,	// (0x000196e1) uniindi_top_pane_ParamLimits

0x8ba6,	// (0x0001977d) list_single_uniindi_pane_g1_ParamLimits

0x8bb9,	// (0x00019790) list_single_uniindi_pane_t1_ParamLimits

0xc001,	// (0x0001cbd8) lc0_stat_clock_pane_ParamLimits

0xc001,	// (0x0001cbd8) lc0_stat_clock_pane

0xea8e,	// (0x0001f665) lc0_stat_indi_pane_g1_ParamLimits

0xea8e,	// (0x0001f665) lc0_stat_indi_pane_g1

0xea9b,	// (0x0001f672) lc0_stat_indi_pane_g2_ParamLimits

0xea9b,	// (0x0001f672) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x000209d4) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x000209d4) lc0_stat_indi_pane_g

0xc00e,	// (0x0001cbe5) lc0_uni_indicator_pane_ParamLimits

0xc00e,	// (0x0001cbe5) lc0_uni_indicator_pane

0xeaa8,	// (0x0001f67f) ls0_title_pane_g1_ParamLimits

0xeaa8,	// (0x0001f67f) ls0_title_pane_g1

0xeabc,	// (0x0001f693) ls0_title_pane_t1_ParamLimits

0xeabc,	// (0x0001f693) ls0_title_pane_t1

0xc01b,	// (0x0001cbf2) lc0_uni_indicator_pane_g1_ParamLimits

0xc01b,	// (0x0001cbf2) lc0_uni_indicator_pane_g1

0x9752,	// (0x0001a329) lc0_stat_clock_pane_t1

0xeeed,	// (0x0001fac4) main_ai5_pane

0x9768,	// (0x0001a33f) ai5_sk_pane_ParamLimits

0x9768,	// (0x0001a33f) ai5_sk_pane

0xeaf4,	// (0x0001f6cb) cell_ai5_widget_pane_ParamLimits

0xeaf4,	// (0x0001f6cb) cell_ai5_widget_pane

0x983e,	// (0x0001a415) aid_size_cell_widget_grid

0x984c,	// (0x0001a423) bg_ai5_widget_pane_ParamLimits

0x984c,	// (0x0001a423) bg_ai5_widget_pane

0x98c8,	// (0x0001a49f) cell_ai5_widget_pane_g2

0x98dc,	// (0x0001a4b3) cell_ai5_widget_pane_g3

0x98f6,	// (0x0001a4cd) cell_ai5_widget_pane_g4

0x9906,	// (0x0001a4dd) cell_ai5_widget_pane_g5

0x9916,	// (0x0001a4ed) cell_ai5_widget_pane_g6

0x9922,	// (0x0001a4f9) cell_ai5_widget_pane_g7

0x998e,	// (0x0001a565) cell_ai5_widget_pane_t1_ParamLimits

0x998e,	// (0x0001a565) cell_ai5_widget_pane_t1

0x99ab,	// (0x0001a582) cell_ai5_widget_pane_t2_ParamLimits

0x99ab,	// (0x0001a582) cell_ai5_widget_pane_t2

0x99c3,	// (0x0001a59a) cell_ai5_widget_pane_t3_ParamLimits

0x99c3,	// (0x0001a59a) cell_ai5_widget_pane_t3

0x99db,	// (0x0001a5b2) cell_ai5_widget_pane_t4_ParamLimits

0x99db,	// (0x0001a5b2) cell_ai5_widget_pane_t4

0x9a01,	// (0x0001a5d8) cell_ai5_widget_pane_t5_ParamLimits

0x9a01,	// (0x0001a5d8) cell_ai5_widget_pane_t5

0x9a20,	// (0x0001a5f7) cell_ai5_widget_pane_t6_ParamLimits

0x9a20,	// (0x0001a5f7) cell_ai5_widget_pane_t6

0x9a32,	// (0x0001a609) cell_ai5_widget_pane_t7_ParamLimits

0x9a32,	// (0x0001a609) cell_ai5_widget_pane_t7

0x9a51,	// (0x0001a628) cell_ai5_widget_pane_t8_ParamLimits

0x9a51,	// (0x0001a628) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x000209f4) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x000209f4) cell_ai5_widget_pane_t

0x9ad5,	// (0x0001a6ac) grid_ai5_widget_pane

0x2c10,	// (0x000137e7) highlight_cell_ai5_widget_pane_ParamLimits

0x2c10,	// (0x000137e7) highlight_cell_ai5_widget_pane

0xeb60,	// (0x0001f737) ai5_sk_left_pane

0xeb6a,	// (0x0001f741) ai5_sk_middle_pane

0xeb74,	// (0x0001f74b) ai5_sk_right_pane

0x9b07,	// (0x0001a6de) bg_ai5_widget_pane_g1_ParamLimits

0x9b07,	// (0x0001a6de) bg_ai5_widget_pane_g1

0x9b13,	// (0x0001a6ea) bg_ai5_widget_pane_g2_ParamLimits

0x9b13,	// (0x0001a6ea) bg_ai5_widget_pane_g2

0x9b1f,	// (0x0001a6f6) bg_ai5_widget_pane_g3_ParamLimits

0x9b1f,	// (0x0001a6f6) bg_ai5_widget_pane_g3

0x9b2b,	// (0x0001a702) bg_ai5_widget_pane_g4_ParamLimits

0x9b2b,	// (0x0001a702) bg_ai5_widget_pane_g4

0x9b37,	// (0x0001a70e) bg_ai5_widget_pane_g5_ParamLimits

0x9b37,	// (0x0001a70e) bg_ai5_widget_pane_g5

0x9b43,	// (0x0001a71a) bg_ai5_widget_pane_g6_ParamLimits

0x9b43,	// (0x0001a71a) bg_ai5_widget_pane_g6

0x9b4f,	// (0x0001a726) bg_ai5_widget_pane_g7_ParamLimits

0x9b4f,	// (0x0001a726) bg_ai5_widget_pane_g7

0x9b5b,	// (0x0001a732) bg_ai5_widget_pane_g8_ParamLimits

0x9b5b,	// (0x0001a732) bg_ai5_widget_pane_g8

0x9b67,	// (0x0001a73e) bg_ai5_widget_pane_g9_ParamLimits

0x9b67,	// (0x0001a73e) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x00020a0d) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00020a0d) bg_ai5_widget_pane_g

0x9b99,	// (0x0001a770) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b99,	// (0x0001a770) cell_shortcut_ai5_widget_pane

0x3adc,	// (0x000146b3) bg_cell_shortcut_ai5_widget_pane

0x9baa,	// (0x0001a781) cell_grid_ai5_widget_pane_g1

0x3adc,	// (0x000146b3) highlight_cell_shortcut_ai5_widget_pane

0x4358,	// (0x00014f2f) ai5_sk_left_pane_g1

0x9bb3,	// (0x0001a78a) ai5_sk_left_pane_g2

0x9bbb,	// (0x0001a792) ai5_sk_left_pane_g3

0x9bc3,	// (0x0001a79a) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x00020a20) ai5_sk_left_pane_g

0x9bcb,	// (0x0001a7a2) ai5_sk_left_pane_t1

0x4360,	// (0x00014f37) ai5_sk_right_pane_g1

0x9bd9,	// (0x0001a7b0) ai5_sk_right_pane_g2

0x9be1,	// (0x0001a7b8) ai5_sk_right_pane_g3

0x9be9,	// (0x0001a7c0) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x00020a29) ai5_sk_right_pane_g

0x9bf1,	// (0x0001a7c8) ai5_sk_right_pane_t1

0x4360,	// (0x00014f37) ai5_sk_middle_pane_g1

0x4358,	// (0x00014f2f) ai5_sk_middle_pane_g2

0x4378,	// (0x00014f4f) ai5_sk_middle_pane_g3

0x9be1,	// (0x0001a7b8) ai5_sk_middle_pane_g4

0x9bbb,	// (0x0001a792) ai5_sk_middle_pane_g5

0x9bff,	// (0x0001a7d6) ai5_sk_middle_pane_g6

0xeb7e,	// (0x0001f755) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x00020a32) ai5_sk_middle_pane_g

0xcdd8,	// (0x0001d9af) aid_touch_area_size_lc0_ParamLimits

0xcdd8,	// (0x0001d9af) aid_touch_area_size_lc0

0x0e44,	// (0x00011a1b) cell_hwr_candidate_pane_t1_ParamLimits

0x3e8c,	// (0x00014a63) aid_touch_navi_pane

0xd064,	// (0x0001dc3b) status_dt_navi_pane_ParamLimits

0xd064,	// (0x0001dc3b) status_dt_navi_pane

0xd07c,	// (0x0001dc53) status_dt_sta_pane_ParamLimits

0xd07c,	// (0x0001dc53) status_dt_sta_pane

0xeb86,	// (0x0001f75d) dt_sta_controll_pane

0xeb93,	// (0x0001f76a) dt_sta_indi_pane

0xeba0,	// (0x0001f777) dt_sta_title_pane

0x20b5,	// (0x00012c8c) bg_dt_sta_indi_pane_ParamLimits

0x20b5,	// (0x00012c8c) bg_dt_sta_indi_pane

0xebb2,	// (0x0001f789) dt_sta_battery_pane

0xebba,	// (0x0001f791) dt_sta_indi_pane_g1

0x9c51,	// (0x0001a828) dt_sta_indi_pane_g2

0x9c5a,	// (0x0001a831) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x00020a41) dt_sta_indi_pane_g

0x9c63,	// (0x0001a83a) dt_sta_signal_pane

0x2c10,	// (0x000137e7) bg_dt_sta_title_pane_ParamLimits

0x2c10,	// (0x000137e7) bg_dt_sta_title_pane

0x9c6c,	// (0x0001a843) dt_sta_title_pane_g1

0x9c74,	// (0x0001a84b) dt_sta_title_pane_t1_ParamLimits

0x9c74,	// (0x0001a84b) dt_sta_title_pane_t1

0xe881,	// (0x0001f458) bg_dt_sta_control_pane

0xebc3,	// (0x0001f79a) dt_sta_controll_pane_g1

0x9c92,	// (0x0001a869) bg_dt_sta_title_pane_g1

0x9c9b,	// (0x0001a872) bg_dt_sta_title_pane_g2

0x9ca4,	// (0x0001a87b) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x00020a48) bg_dt_sta_title_pane_g

0x6e9a,	// (0x00017a71) bg_dt_sta_indi_pane_g1

0x9cad,	// (0x0001a884) dt_sta_signal_pane_g1

0x9cb5,	// (0x0001a88c) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x00020a4f) dt_sta_signal_pane_g

0x9cbd,	// (0x0001a894) dt_sta_battery_pane_g1

0x9cc6,	// (0x0001a89d) dt_sta_battery_pane_t1

0x6e9a,	// (0x00017a71) bg_dt_sta_control_pane_g1

0x3553,	// (0x0001412a) fep_china_uni_eep_pane

0x355b,	// (0x00014132) fep_china_uni_entry_pane_ParamLimits

0x356b,	// (0x00014142) popup_fep_china_uni_window_g1_ParamLimits

0x357b,	// (0x00014152) popup_fep_china_uni_window_g2_ParamLimits

0x357b,	// (0x00014152) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x000202c8) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x000202c8) popup_fep_china_uni_window_g

0x9cd5,	// (0x0001a8ac) fep_china_uni_eep_pane_g1

0x9cdd,	// (0x0001a8b4) fep_china_uni_eep_pane_t1

0x96cf,	// (0x0001a2a6) aid_touch_area_size_smil_player

0x3fe2,	// (0x00014bb9) lc0_clock_pane

0x41c9,	// (0x00014da0) status_pane_g5_ParamLimits

0x41c9,	// (0x00014da0) status_pane_g5

0xb5c8,	// (0x0001c19f) popup_keymap_window

0x4187,	// (0x00014d5e) status_icon_pane

0x98dc,	// (0x0001a4b3) cell_ai5_widget_pane_g3_ParamLimits

0x98f6,	// (0x0001a4cd) cell_ai5_widget_pane_g4_ParamLimits

0x9906,	// (0x0001a4dd) cell_ai5_widget_pane_g5_ParamLimits

0x992e,	// (0x0001a505) cell_ai5_widget_pane_g8_ParamLimits

0x992e,	// (0x0001a505) cell_ai5_widget_pane_g8

0x9942,	// (0x0001a519) cell_ai5_widget_pane_g9_ParamLimits

0x9942,	// (0x0001a519) cell_ai5_widget_pane_g9

0x9956,	// (0x0001a52d) cell_ai5_widget_pane_g10_ParamLimits

0x9956,	// (0x0001a52d) cell_ai5_widget_pane_g10

0x9cec,	// (0x0001a8c3) status_icon_pane_g1

0xe881,	// (0x0001f458) bg_popup_sub_pane_cp13

0x9cf4,	// (0x0001a8cb) popup_keymap_window_t1

0xcd6e,	// (0x0001d945) control_pane_g6_ParamLimits

0xcd6e,	// (0x0001d945) control_pane_g6

0xcd7b,	// (0x0001d952) control_pane_g7_ParamLimits

0xcd7b,	// (0x0001d952) control_pane_g7

0xcd88,	// (0x0001d95f) control_pane_g8_ParamLimits

0xcd88,	// (0x0001d95f) control_pane_g8

0xeb86,	// (0x0001f75d) dt_sta_controll_pane_ParamLimits

0xeb93,	// (0x0001f76a) dt_sta_indi_pane_ParamLimits

0xeba0,	// (0x0001f777) dt_sta_title_pane_ParamLimits

0x25f1,	// (0x000131c8) aid_size_touch_scroll_bar_cale

0xefc6,	// (0x0001fb9d) popup_discreet_window_ParamLimits

0xefc6,	// (0x0001fb9d) popup_discreet_window

0xb1cb,	// (0x0001bda2) popup_sk_window

0x4aca,	// (0x000156a1) bg_popup_sub_pane_cp28_ParamLimits

0x4aca,	// (0x000156a1) bg_popup_sub_pane_cp28

0x9d02,	// (0x0001a8d9) popup_discreet_window_g1_ParamLimits

0x9d02,	// (0x0001a8d9) popup_discreet_window_g1

0x9d22,	// (0x0001a8f9) popup_discreet_window_t1_ParamLimits

0x9d22,	// (0x0001a8f9) popup_discreet_window_t1

0x9d40,	// (0x0001a917) popup_discreet_window_t2_ParamLimits

0x9d40,	// (0x0001a917) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x00020a54) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x00020a54) popup_discreet_window_t

0x1851,	// (0x00012428) popup_sk_window_g1

0x185b,	// (0x00012432) popup_sk_window_g2

0x0001,

0xfe84,	// (0x00020a5b) popup_sk_window_g

0x1863,	// (0x0001243a) popup_sk_window_t1

0x1871,	// (0x00012448) popup_sk_window_t1_copy1

0x98c8,	// (0x0001a49f) cell_ai5_widget_pane_g2_ParamLimits

0x9a63,	// (0x0001a63a) cell_ai5_widget_pane_t9_ParamLimits

0x9a63,	// (0x0001a63a) cell_ai5_widget_pane_t9

0xe881,	// (0x0001f458) main_fep_fshwr2_pane

0xc042,	// (0x0001cc19) aid_fshwr2_btn_pane

0xc052,	// (0x0001cc29) aid_fshwr2_syb_pane

0xc066,	// (0x0001cc3d) aid_fshwr2_txt_pane

0xc076,	// (0x0001cc4d) fshwr2_func_candi_pane

0xc096,	// (0x0001cc6d) fshwr2_hwr_syb_pane

0xc0b8,	// (0x0001cc8f) fshwr2_icf_pane

0xeeed,	// (0x0001fac4) fshwr2_icf_bg_pane

0xc0e8,	// (0x0001ccbf) fshwr2_icf_pane_t1_ParamLimits

0xc0e8,	// (0x0001ccbf) fshwr2_icf_pane_t1

0x3428,	// (0x00013fff) fshwr2_func_candi_pane_g1

0xebcc,	// (0x0001f7a3) fshwr2_func_candi_row_pane_ParamLimits

0xebcc,	// (0x0001f7a3) fshwr2_func_candi_row_pane

0xc101,	// (0x0001ccd8) cell_fshwr2_syb_pane_ParamLimits

0xc101,	// (0x0001ccd8) cell_fshwr2_syb_pane

0x195a,	// (0x00012531) fshwr2_hwr_syb_pane_g1_ParamLimits

0x195a,	// (0x00012531) fshwr2_hwr_syb_pane_g1

0xeeed,	// (0x0001fac4) bg_popup_call_pane_cp01

0xc127,	// (0x0001ccfe) fshwr2_func_candi_cell_pane_ParamLimits

0xc127,	// (0x0001ccfe) fshwr2_func_candi_cell_pane

0x48ab,	// (0x00015482) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x48ab,	// (0x00015482) fshwr2_func_candi_cell_bg_pane

0xc172,	// (0x0001cd49) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc172,	// (0x0001cd49) fshwr2_func_candi_cell_pane_g1

0xc1a9,	// (0x0001cd80) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc1a9,	// (0x0001cd80) fshwr2_func_candi_cell_pane_t1

0xeeed,	// (0x0001fac4) bg_button_pane_cp08

0x3e08,	// (0x000149df) cell_fshwr2_syb_bg_pane

0xc1c4,	// (0x0001cd9b) cell_fshwr2_syb_bg_pane_g1

0xc1d7,	// (0x0001cdae) cell_fshwr2_syb_bg_pane_t1

0x2c10,	// (0x000137e7) main_tmo_pane

0xd34e,	// (0x0001df25) uni_indicator_pane_g1_ParamLimits

0xd364,	// (0x0001df3b) uni_indicator_pane_g2_ParamLimits

0xd37a,	// (0x0001df51) uni_indicator_pane_g3_ParamLimits

0x5618,	// (0x000161ef) uni_indicator_pane_g4_ParamLimits

0x5618,	// (0x000161ef) uni_indicator_pane_g4

0x562c,	// (0x00016203) uni_indicator_pane_g5_ParamLimits

0x562c,	// (0x00016203) uni_indicator_pane_g5

0x562c,	// (0x00016203) uni_indicator_pane_g6_ParamLimits

0x562c,	// (0x00016203) uni_indicator_pane_g6

0xf8f0,	// (0x000204c7) uni_indicator_pane_g_ParamLimits

0xdf49,	// (0x0001eb20) popup_tmo_note_window_ParamLimits

0xdf49,	// (0x0001eb20) popup_tmo_note_window

0x10ae,	// (0x00011c85) fshwr2_bg_pane

0xc19a,	// (0x0001cd71) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc19a,	// (0x0001cd71) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x00020a60) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x00020a60) fshwr2_func_candi_cell_pane_g

0x0dfd,	// (0x000119d4) bg_popup_window_pane_cp01

0x1a1b,	// (0x000125f2) bg_popup_window_pane_g1_cp01

0x9db9,	// (0x0001a990) bg_popup_window_pane_cp22_ParamLimits

0x9db9,	// (0x0001a990) bg_popup_window_pane_cp22

0x9dc7,	// (0x0001a99e) listscroll_tmo_link_pane_ParamLimits

0x9dc7,	// (0x0001a99e) listscroll_tmo_link_pane

0x9e07,	// (0x0001a9de) popup_tmo_note_window_g1_ParamLimits

0x9e07,	// (0x0001a9de) popup_tmo_note_window_g1

0x9e14,	// (0x0001a9eb) tmo_note_info_pane_ParamLimits

0x9e14,	// (0x0001a9eb) tmo_note_info_pane

0xebef,	// (0x0001f7c6) list_tmo_note_info_pane_g1_ParamLimits

0xebef,	// (0x0001f7c6) list_tmo_note_info_pane_g1

0x9e45,	// (0x0001aa1c) list_tmo_note_info_pane_g2_ParamLimits

0x9e45,	// (0x0001aa1c) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x00020a65) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x00020a65) list_tmo_note_info_pane_g

0x9e61,	// (0x0001aa38) list_tmo_note_info_text_pane_ParamLimits

0x9e61,	// (0x0001aa38) list_tmo_note_info_text_pane

0x9ee2,	// (0x0001aab9) list_tmo_link_pane

0x9eef,	// (0x0001aac6) scroll_pane_cp20

0x9efc,	// (0x0001aad3) list_single_tmo_link_pane_ParamLimits

0x9efc,	// (0x0001aad3) list_single_tmo_link_pane

0x9f0c,	// (0x0001aae3) list_single_tmo_link_pane_t1

0x9f1a,	// (0x0001aaf1) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f1a,	// (0x0001aaf1) list_tmo_note_info_text_pane_t1

0xca58,	// (0x0001d62f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xca58,	// (0x0001d62f) aid_size_touch_scroll_bar_cp01

0xc9c7,	// (0x0001d59e) aid_size_touch_slider_marker

0xb1bb,	// (0x0001bd92) popup_settings_window_ParamLimits

0xb1bb,	// (0x0001bd92) popup_settings_window

0x3e3c,	// (0x00014a13) popup_candi_list_indi_window

0x3e8c,	// (0x00014a63) aid_touch_navi_pane_ParamLimits

0x1009,	// (0x00011be0) rs_clock_indi_pane

0x1012,	// (0x00011be9) sctrl_sk_bottom_pane_ParamLimits

0x1023,	// (0x00011bfa) sctrl_sk_top_pane_ParamLimits

0x111e,	// (0x00011cf5) popup_fep_tooltip_window

0x983e,	// (0x0001a415) aid_size_cell_widget_grid_ParamLimits

0x98b3,	// (0x0001a48a) cell_ai5_widget_pane_g1_ParamLimits

0x98b3,	// (0x0001a48a) cell_ai5_widget_pane_g1

0x9916,	// (0x0001a4ed) cell_ai5_widget_pane_g6_ParamLimits

0x9922,	// (0x0001a4f9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x000209d9) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x000209d9) cell_ai5_widget_pane_g

0x9a92,	// (0x0001a669) cell_ai5_widget_pane_t10_ParamLimits

0x9a92,	// (0x0001a669) cell_ai5_widget_pane_t10

0x9ad5,	// (0x0001a6ac) grid_ai5_widget_pane_ParamLimits

0x9b73,	// (0x0001a74a) cell_contacts_ai5_widget_pane_ParamLimits

0x9b73,	// (0x0001a74a) cell_contacts_ai5_widget_pane

0x9d55,	// (0x0001a92c) popup_discreet_window_t3_ParamLimits

0x9d55,	// (0x0001a92c) popup_discreet_window_t3

0xc0d4,	// (0x0001ccab) popup_fshwr2_char_preview_window_ParamLimits

0xc0d4,	// (0x0001ccab) popup_fshwr2_char_preview_window

0xec06,	// (0x0001f7dd) tmo_note_info_pane_t1

0xec1b,	// (0x0001f7f2) tmo_note_info_pane_t2

0xec32,	// (0x0001f809) tmo_note_info_pane_t3

0x9ebe,	// (0x0001aa95) tmo_note_info_pane_t4

0x9ed0,	// (0x0001aaa7) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x00020a6a) tmo_note_info_pane_t

0x9ee2,	// (0x0001aab9) list_tmo_link_pane_ParamLimits

0x9eef,	// (0x0001aac6) scroll_pane_cp20_ParamLimits

0xeeed,	// (0x0001fac4) bg_popup_fep_char_preview_window_cp01

0xec47,	// (0x0001f81e) popup_fshwr2_char_preview_window_t1

0x9f41,	// (0x0001ab18) popup_candi_list_indi_window_g1

0x9f4a,	// (0x0001ab21) bg_cell_contacts_ai5_widget_pane

0x9f56,	// (0x0001ab2d) cell_contacts_ai5_widget_pane_g1

0x76dd,	// (0x000182b4) cell_contacts_ai5_widget_pane_g2

0x9f6b,	// (0x0001ab42) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x00020a75) cell_contacts_ai5_widget_pane_g

0x9f77,	// (0x0001ab4e) cell_contacts_ai5_widget_pane_t1

0x2c10,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9fee,	// (0x0001abc5) settings_container_pane

0x3adc,	// (0x000146b3) listscroll_set_pane_copy1

0x6288,	// (0x00016e5f) scroll_pane_cp121_copy1

0x4867,	// (0x0001543e) set_content_pane_copy1

0x9ffa,	// (0x0001abd1) aid_height_set_list_copy1_ParamLimits

0x9ffa,	// (0x0001abd1) aid_height_set_list_copy1

0x5826,	// (0x000163fd) aid_size_parent_copy1_ParamLimits

0x5826,	// (0x000163fd) aid_size_parent_copy1

0xa006,	// (0x0001abdd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa006,	// (0x0001abdd) button_value_adjust_pane_cp6_copy1

0x3e08,	// (0x000149df) list_highlight_pane_cp2_copy1_ParamLimits

0x3e08,	// (0x000149df) list_highlight_pane_cp2_copy1

0xa01a,	// (0x0001abf1) list_set_pane_copy1_ParamLimits

0xa01a,	// (0x0001abf1) list_set_pane_copy1

0x9f89,	// (0x0001ab60) main_pane_set_t1_copy1_ParamLimits

0x9f89,	// (0x0001ab60) main_pane_set_t1_copy1

0x9fc3,	// (0x0001ab9a) main_pane_set_t2_copy1_ParamLimits

0x9fc3,	// (0x0001ab9a) main_pane_set_t2_copy1

0xa0c7,	// (0x0001ac9e) main_pane_set_t3_copy1

0xa0d5,	// (0x0001acac) main_pane_set_t4_copy1

0x9fe2,	// (0x0001abb9) set_content_pane_g1_copy1_ParamLimits

0x9fe2,	// (0x0001abb9) set_content_pane_g1_copy1

0xa0e3,	// (0x0001acba) setting_code_pane_copy1

0xa0eb,	// (0x0001acc2) setting_slider_graphic_pane_copy1

0xa0eb,	// (0x0001acc2) setting_slider_pane_copy1

0xa0f3,	// (0x0001acca) setting_text_pane_copy1

0xa0f3,	// (0x0001acca) setting_volume_pane_copy1

0xa0e3,	// (0x0001acba) settings_code_pane_cp2_copy1

0xa0fb,	// (0x0001acd2) settings_code_pane_cp_copy1_ParamLimits

0xa0fb,	// (0x0001acd2) settings_code_pane_cp_copy1

0x1a24,	// (0x000125fb) volume_set_pane_copy1

0xa10f,	// (0x0001ace6) volume_set_pane_g10_copy1

0xa117,	// (0x0001acee) volume_set_pane_g1_copy1

0xa11f,	// (0x0001acf6) volume_set_pane_g2_copy1

0xa127,	// (0x0001acfe) volume_set_pane_g3_copy1

0xa12f,	// (0x0001ad06) volume_set_pane_g4_copy1

0xa137,	// (0x0001ad0e) volume_set_pane_g5_copy1

0xa13f,	// (0x0001ad16) volume_set_pane_g6_copy1

0xa147,	// (0x0001ad1e) volume_set_pane_g7_copy1

0xa14f,	// (0x0001ad26) volume_set_pane_g8_copy1

0xa157,	// (0x0001ad2e) volume_set_pane_g9_copy1

0x1e12,	// (0x000129e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x1e12,	// (0x000129e9) bg_set_opt_pane_cp_copy1

0x1a2c,	// (0x00012603) setting_slider_pane_t1_copy1_ParamLimits

0x1a2c,	// (0x00012603) setting_slider_pane_t1_copy1

0x1a4b,	// (0x00012622) setting_slider_pane_t2_copy1_ParamLimits

0x1a4b,	// (0x00012622) setting_slider_pane_t2_copy1

0x1a65,	// (0x0001263c) setting_slider_pane_t3_copy1_ParamLimits

0x1a65,	// (0x0001263c) setting_slider_pane_t3_copy1

0x1a7d,	// (0x00012654) slider_set_pane_copy1_ParamLimits

0x1a7d,	// (0x00012654) slider_set_pane_copy1

0x2d3f,	// (0x00013916) set_opt_bg_pane_g1_copy2

0x2d47,	// (0x0001391e) set_opt_bg_pane_g2_copy2

0xa15f,	// (0x0001ad36) set_opt_bg_pane_g3_copy2

0x2d57,	// (0x0001392e) set_opt_bg_pane_g4_copy2

0x2d5f,	// (0x00013936) set_opt_bg_pane_g5_copy2

0x2d67,	// (0x0001393e) set_opt_bg_pane_g6_copy2

0xa169,	// (0x0001ad40) set_opt_bg_pane_g7_copy2

0xa171,	// (0x0001ad48) set_opt_bg_pane_g8_copy2

0xa17b,	// (0x0001ad52) set_opt_bg_pane_g9_copy2

0x1a93,	// (0x0001266a) aid_size_touch_slider_mark_copy1_ParamLimits

0x1a93,	// (0x0001266a) aid_size_touch_slider_mark_copy1

0xa185,	// (0x0001ad5c) slider_set_pane_g1_copy1

0x1aa7,	// (0x0001267e) slider_set_pane_g2_copy1

0x0a3e,	// (0x00011615) slider_set_pane_g3_copy1_ParamLimits

0x0a3e,	// (0x00011615) slider_set_pane_g3_copy1

0x0a52,	// (0x00011629) slider_set_pane_g4_copy1_ParamLimits

0x0a52,	// (0x00011629) slider_set_pane_g4_copy1

0x0a6a,	// (0x00011641) slider_set_pane_g5_copy1_ParamLimits

0x0a6a,	// (0x00011641) slider_set_pane_g5_copy1

0x0a3e,	// (0x00011615) slider_set_pane_g6_copy1_ParamLimits

0x0a3e,	// (0x00011615) slider_set_pane_g6_copy1

0x1aaf,	// (0x00012686) slider_set_pane_g7_copy1_ParamLimits

0x1aaf,	// (0x00012686) slider_set_pane_g7_copy1

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp2_copy1

0xa18e,	// (0x0001ad65) setting_slider_graphic_pane_g1_copy1

0xa197,	// (0x0001ad6e) setting_slider_graphic_pane_t1_copy1

0xa1a7,	// (0x0001ad7e) setting_slider_graphic_pane_t2_copy1

0xa1b7,	// (0x0001ad8e) slider_set_pane_cp_copy1

0xa1c7,	// (0x0001ad9e) input_focus_pane_cp1_copy1

0xa1d0,	// (0x0001ada7) list_set_text_pane_copy1

0xa1d8,	// (0x0001adaf) setting_text_pane_g1_copy1

0x1e6b,	// (0x00012a42) set_text_pane_t1_copy1

0xa1c7,	// (0x0001ad9e) input_focus_pane_cp2_copy1

0xa1d8,	// (0x0001adaf) setting_code_pane_g1_copy1

0xa1e1,	// (0x0001adb8) setting_code_pane_t1_copy1

0x60b0,	// (0x00016c87) list_set_graphic_pane_copy1

0xe895,	// (0x0001f46c) bg_set_opt_pane_cp4_copy1

0x37e1,	// (0x000143b8) list_set_graphic_pane_g1_copy1_ParamLimits

0x37e1,	// (0x000143b8) list_set_graphic_pane_g1_copy1

0xa1ef,	// (0x0001adc6) list_set_graphic_pane_g2_copy1

0x37f9,	// (0x000143d0) list_set_graphic_pane_t1_copy1_ParamLimits

0x37f9,	// (0x000143d0) list_set_graphic_pane_t1_copy1

0x6e9a,	// (0x00017a71) rs_clock_indi_pane_g1

0xa1f7,	// (0x0001adce) rs_clock_indi_pane_t1

0xa205,	// (0x0001addc) rs_indi_pane

0xa20d,	// (0x0001ade4) rs_indi_pane_g1

0xa216,	// (0x0001aded) rs_indi_pane_g2

0xa21f,	// (0x0001adf6) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x00020a7c) rs_indi_pane_g

0x3adc,	// (0x000146b3) bg_popup_preview_window_pane_cp03

0xa228,	// (0x0001adff) popup_fep_tooltip_window_t1

0x7d24,	// (0x000188fb) popup_note2_window_g2_ParamLimits

0x7d24,	// (0x000188fb) popup_note2_window_g2

0x0001,

0xfc32,	// (0x00020809) popup_note2_window_g_ParamLimits

0xfc32,	// (0x00020809) popup_note2_window_g

0x831a,	// (0x00018ef1) bg_popup_sub_pane_cp11_ParamLimits

0x8327,	// (0x00018efe) cell_ai3_links_pane_g1_ParamLimits

0x833e,	// (0x00018f15) cell_ai3_links_pane_t1

0x1e6b,	// (0x00012a42) set_text_pane_t1_copy1_ParamLimits

0x39ec,	// (0x000145c3) cell_graphic_popup_pane_cp2_ParamLimits

0x39ec,	// (0x000145c3) cell_graphic_popup_pane_cp2

0xa236,	// (0x0001ae0d) cell_graphic_popup_pane_g1_cp2

0x2404,	// (0x00012fdb) cell_graphic_popup_pane_g2_cp2

0xa23e,	// (0x0001ae15) cell_graphic_popup_pane_g3_cp2

0xa246,	// (0x0001ae1d) cell_graphic_popup_pane_t2_cp2

0x2415,	// (0x00012fec) grid_highlight_pane_cp3_cp2

0x3143,	// (0x00013d1a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c10,	// (0x000137e7) main_tmo_pane_ParamLimits

0xdf3d,	// (0x0001eb14) popup_tmo_big_image_note_window

0x98a2,	// (0x0001a479) cell_ai5_widget_list_pane

0x98aa,	// (0x0001a481) cell_ai5_widget_lrg_icon_pane

0xec06,	// (0x0001f7dd) tmo_note_info_pane_t1_ParamLimits

0xec1b,	// (0x0001f7f2) tmo_note_info_pane_t2_ParamLimits

0xec32,	// (0x0001f809) tmo_note_info_pane_t3_ParamLimits

0x9ebe,	// (0x0001aa95) tmo_note_info_pane_t4_ParamLimits

0x9ed0,	// (0x0001aaa7) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x00020a6a) tmo_note_info_pane_t_ParamLimits

0x9fee,	// (0x0001abc5) settings_container_pane_ParamLimits

0xa1bf,	// (0x0001ad96) indicator_popup_pane_cp5

0xa1bf,	// (0x0001ad96) indicator_popup_pane_cp6

0x60b0,	// (0x00016c87) list_set_graphic_pane_copy1_ParamLimits

0xe881,	// (0x0001f458) bg_popup_window_pane_cp23

0xa254,	// (0x0001ae2b) popup_tmo_big_image_note_window_g1

0xa25e,	// (0x0001ae35) popup_tmo_big_image_note_window_t1

0xa26e,	// (0x0001ae45) popup_tmo_big_image_note_window_t2

0xa27e,	// (0x0001ae55) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x00020a83) popup_tmo_big_image_note_window_t

0x6e9a,	// (0x00017a71) cell_ai5_widget_lrg_icon_pane_g1

0xa28e,	// (0x0001ae65) cell_ai5_widget_lrg_icon_pane_t1

0xa29c,	// (0x0001ae73) cell_ai5_widget_list_row_pane_ParamLimits

0xa29c,	// (0x0001ae73) cell_ai5_widget_list_row_pane

0xa2b3,	// (0x0001ae8a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa2b3,	// (0x0001ae8a) cell_ai5_widget_list_row_pane_g1

0xa2c0,	// (0x0001ae97) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa2c0,	// (0x0001ae97) cell_ai5_widget_list_row_pane_t1

0xa2eb,	// (0x0001aec2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa2eb,	// (0x0001aec2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x00020a8a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x00020a8a) cell_ai5_widget_list_row_pane_t

0xeeed,	// (0x0001fac4) main_fep_vtchi_ss_pane

0xa33b,	// (0x0001af12) popup_fep_char_pre_window

0xa343,	// (0x0001af1a) popup_fep_ituss_window

0xec64,	// (0x0001f83b) popup_fep_vkbss_window

0x3e08,	// (0x000149df) grid_vkbss_keypad_pane_ParamLimits

0x3e08,	// (0x000149df) grid_vkbss_keypad_pane

0xa3bb,	// (0x0001af92) ituss_keypad_pane

0x1af0,	// (0x000126c7) aid_vkbss_key_offset_ParamLimits

0x1af0,	// (0x000126c7) aid_vkbss_key_offset

0xc201,	// (0x0001cdd8) cell_vkbss_key_pane_ParamLimits

0xc201,	// (0x0001cdd8) cell_vkbss_key_pane

0xa3c7,	// (0x0001af9e) bg_cell_vkbss_key_g1_ParamLimits

0xa3c7,	// (0x0001af9e) bg_cell_vkbss_key_g1

0xec71,	// (0x0001f848) cell_vkbss_key_3p_pane_ParamLimits

0xec71,	// (0x0001f848) cell_vkbss_key_3p_pane

0xeca7,	// (0x0001f87e) cell_vkbss_key_g1_ParamLimits

0xeca7,	// (0x0001f87e) cell_vkbss_key_g1

0xecdd,	// (0x0001f8b4) cell_vkbss_key_t1_ParamLimits

0xecdd,	// (0x0001f8b4) cell_vkbss_key_t1

0x1b5a,	// (0x00012731) cell_ituss_key_pane_ParamLimits

0x1b5a,	// (0x00012731) cell_ituss_key_pane

0xa49b,	// (0x0001b072) bg_cell_ituss_key_g1_ParamLimits

0xa49b,	// (0x0001b072) bg_cell_ituss_key_g1

0xa4a7,	// (0x0001b07e) cell_ituss_key_pane_g1_ParamLimits

0xa4a7,	// (0x0001b07e) cell_ituss_key_pane_g1

0x1b6b,	// (0x00012742) cell_ituss_key_pane_g2_ParamLimits

0x1b6b,	// (0x00012742) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x00020a91) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x00020a91) cell_ituss_key_pane_g

0x1bef,	// (0x000127c6) cell_ituss_key_t1_ParamLimits

0x1bef,	// (0x000127c6) cell_ituss_key_t1

0x1c29,	// (0x00012800) cell_ituss_key_t2_ParamLimits

0x1c29,	// (0x00012800) cell_ituss_key_t2

0x1c5b,	// (0x00012832) cell_ituss_key_t3_ParamLimits

0x1c5b,	// (0x00012832) cell_ituss_key_t3

0x1c8c,	// (0x00012863) cell_ituss_key_t4_ParamLimits

0x1c8c,	// (0x00012863) cell_ituss_key_t4

0x0005,

0xfec7,	// (0x00020a9e) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x00020a9e) cell_ituss_key_t

0xed39,	// (0x0001f910) cell_vkbss_key_3p_pane_g1

0xed41,	// (0x0001f918) cell_vkbss_key_3p_pane_g2

0xed49,	// (0x0001f920) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed4,	// (0x00020aab) cell_vkbss_key_3p_pane_g

0x3adc,	// (0x000146b3) bg_popup_fep_char_preview_window_cp02

0xa4e5,	// (0x0001b0bc) popup_fep_char_pre_window_t1

0xeb56,	// (0x0001f72d) main_ai5_sk_pane

0x9f4a,	// (0x0001ab21) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f56,	// (0x0001ab2d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x76dd,	// (0x000182b4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f6b,	// (0x0001ab42) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x00020a75) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f77,	// (0x0001ab4e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c10,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed51,	// (0x0001f928) main_ai5_sk_pane_g1

0x4903,	// (0x000154da) popup_query_code_window_g1

0xec55,	// (0x0001f82c) popup_fep_vkb_icf_pane

0xa38f,	// (0x0001af66) popup_fep_vtchi_icf_pane

0xa4fc,	// (0x0001b0d3) bg_icf_pane

0xa4fc,	// (0x0001b0d3) list_vkb_icf_pane

0xa508,	// (0x0001b0df) bg_icf_pane_cp01

0xa51b,	// (0x0001b0f2) vtchi_icf_list_pane

0xeda6,	// (0x0001f97d) list_vkb_icf_pane_t1_ParamLimits

0xeda6,	// (0x0001f97d) list_vkb_icf_pane_t1

0xa599,	// (0x0001b170) vtchi_icf_list_pane_t1_ParamLimits

0xa599,	// (0x0001b170) vtchi_icf_list_pane_t1

0xa343,	// (0x0001af1a) popup_fep_ituss_window_ParamLimits

0xa38f,	// (0x0001af66) popup_fep_vtchi_icf_pane_ParamLimits

0xa3bb,	// (0x0001af92) ituss_keypad_pane_ParamLimits

0x1ae6,	// (0x000126bd) ituss_sks_pane

0xa4fc,	// (0x0001b0d3) bg_icf_pane_ParamLimits

0xa313,	// (0x0001aeea) icf_edit_indi_pane_ParamLimits

0xa313,	// (0x0001aeea) icf_edit_indi_pane

0xa4fc,	// (0x0001b0d3) list_vkb_icf_pane_ParamLimits

0xa508,	// (0x0001b0df) bg_icf_pane_cp01_ParamLimits

0xa32e,	// (0x0001af05) icf_edit_indi_pane_cp01_ParamLimits

0xa32e,	// (0x0001af05) icf_edit_indi_pane_cp01

0xa51b,	// (0x0001b0f2) vtchi_query_pane

0x969f,	// (0x0001a276) icf_edit_indi_pane_g1_ParamLimits

0x969f,	// (0x0001a276) icf_edit_indi_pane_g1

0xedbd,	// (0x0001f994) icf_edit_indi_pane_g2_ParamLimits

0xedbd,	// (0x0001f994) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x00020ad6) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x00020ad6) icf_edit_indi_pane_g

0xedd1,	// (0x0001f9a8) icf_edit_indi_pane_t1

0xa5b7,	// (0x0001b18e) bg_input_focus_pane_cp042

0x25e8,	// (0x000131bf) vtchi_button_pane

0xa5c0,	// (0x0001b197) vtchi_query_pane_t1

0xa5ce,	// (0x0001b1a5) vtchi_query_pane_t2

0xa5dc,	// (0x0001b1b3) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x00020ac5) vtchi_query_pane_t

0xeeed,	// (0x0001fac4) bg_button_pane_cp13

0xa5ea,	// (0x0001b1c1) vtchi_button_pane_g1

0x1d0d,	// (0x000128e4) ituss_sks_pane_g1

0x1d18,	// (0x000128ef) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x00020acc) ituss_sks_pane_g

0xa5f2,	// (0x0001b1c9) ituss_sks_pane_t1

0xa600,	// (0x0001b1d7) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x00020ad1) ituss_sks_pane_t

0x68d4,	// (0x000174ab) indicator_nsta_pane_cp_g1

0x68dd,	// (0x000174b4) indicator_nsta_pane_cp_g2

0x68e5,	// (0x000174bc) indicator_nsta_pane_cp_g3

0x68ed,	// (0x000174c4) indicator_nsta_pane_cp_g4

0x68dd,	// (0x000174b4) indicator_nsta_pane_cp_g5

0x68e5,	// (0x000174bc) indicator_nsta_pane_cp_g6

0x0005,

0xfa70,	// (0x00020647) indicator_nsta_pane_cp_g

0xe963,	// (0x0001f53a) cell_graphic2_pane_t2_ParamLimits

0xe963,	// (0x0001f53a) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x00020960) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x00020960) cell_graphic2_pane_t

0xe998,	// (0x0001f56f) cell_graphic2_control_pane_t1

0xcc15,	// (0x0001d7ec) signal_pane_g3_ParamLimits

0xcc15,	// (0x0001d7ec) signal_pane_g3

0xcc29,	// (0x0001d800) signal_pane_g4_ParamLimits

0xcc29,	// (0x0001d800) signal_pane_g4

0xa2fd,	// (0x0001aed4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa2fd,	// (0x0001aed4) cell_ai5_widget_list_row_pane_t3

0xa4bb,	// (0x0001b092) cell_ituss_key_pane_t1_ParamLimits

0xa4bb,	// (0x0001b092) cell_ituss_key_pane_t1

0x4503,	// (0x000150da) form_field_data_wide_pane_vc_t2_ParamLimits

0x4503,	// (0x000150da) form_field_data_wide_pane_vc_t2

0x4517,	// (0x000150ee) form_field_data_wide_pane_vc_t3_ParamLimits

0x4517,	// (0x000150ee) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x000203af) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x000203af) form_field_data_wide_pane_vc_t

0x657e,	// (0x00017155) form_field_slider_wide_pane_vc_t3_ParamLimits

0x657e,	// (0x00017155) form_field_slider_wide_pane_vc_t3

0x665c,	// (0x00017233) form_field_popup_wide_pane_vc_t2_ParamLimits

0x665c,	// (0x00017233) form_field_popup_wide_pane_vc_t2

0x6673,	// (0x0001724a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6673,	// (0x0001724a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa5f,	// (0x00020636) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x00020636) form_field_popup_wide_pane_vc_t

0xc042,	// (0x0001cc19) aid_fshwr2_btn_pane_ParamLimits

0xc052,	// (0x0001cc29) aid_fshwr2_syb_pane_ParamLimits

0xc066,	// (0x0001cc3d) aid_fshwr2_txt_pane_ParamLimits

0x10ae,	// (0x00011c85) fshwr2_bg_pane_ParamLimits

0xc076,	// (0x0001cc4d) fshwr2_func_candi_pane_ParamLimits

0xc096,	// (0x0001cc6d) fshwr2_hwr_syb_pane_ParamLimits

0xc0b8,	// (0x0001cc8f) fshwr2_icf_pane_ParamLimits

0x64df,	// (0x000170b6) list_double_graphic_pane_vc_g4_ParamLimits

0x64df,	// (0x000170b6) list_double_graphic_pane_vc_g4

0x1b8b,	// (0x00012762) cell_ituss_key_pane_g3_ParamLimits

0x1b8b,	// (0x00012762) cell_ituss_key_pane_g3

0x1cbd,	// (0x00012894) cell_ituss_key_t5_ParamLimits

0x1cbd,	// (0x00012894) cell_ituss_key_t5

0xec64,	// (0x0001f83b) popup_fep_vkbss_window_ParamLimits

0x9835,	// (0x0001a40c) aid_cell_ai5_quarter

0xedd1,	// (0x0001f9a8) icf_edit_indi_pane_t1_ParamLimits

0x215d,	// (0x00012d34) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x215d,	// (0x00012d34) aid_tch_indicator_popup_pane_cp2

0x2170,	// (0x00012d47) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2170,	// (0x00012d47) aid_tch_query_popup_data_pane_cp2

0x48ab,	// (0x00015482) aid_tch_query_popup_pane_ParamLimits

0x48ab,	// (0x00015482) aid_tch_query_popup_pane

0x48ab,	// (0x00015482) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x48ab,	// (0x00015482) aid_tch_query_popup_data_pane_cp1

0x3e08,	// (0x000149df) cell_fshwr2_syb_bg_pane_ParamLimits

0xc1c4,	// (0x0001cd9b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc1d7,	// (0x0001cdae) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec55,	// (0x0001f82c) popup_fep_vkb_icf_pane_ParamLimits

0xbfce,	// (0x0001cba5) bg_popup_fep_char_preview_window_g10

0x996a,	// (0x0001a541) cell_ai5_widget_pane_g11_ParamLimits

0x996a,	// (0x0001a541) cell_ai5_widget_pane_g11

0x9976,	// (0x0001a54d) cell_ai5_widget_pane_g12_ParamLimits

0x9976,	// (0x0001a54d) cell_ai5_widget_pane_g12

0x9982,	// (0x0001a559) cell_ai5_widget_pane_g13_ParamLimits

0x9982,	// (0x0001a559) cell_ai5_widget_pane_g13

0x9ab1,	// (0x0001a688) cell_ai5_widget_pane_t11_ParamLimits

0x9ab1,	// (0x0001a688) cell_ai5_widget_pane_t11

0x9ac3,	// (0x0001a69a) cell_ai5_widget_pane_t12_ParamLimits

0x9ac3,	// (0x0001a69a) cell_ai5_widget_pane_t12

0x1b97,	// (0x0001276e) cell_ituss_key_pane_g4_ParamLimits

0x1b97,	// (0x0001276e) cell_ituss_key_pane_g4

0x1bb3,	// (0x0001278a) cell_ituss_key_pane_g5_ParamLimits

0x1bb3,	// (0x0001278a) cell_ituss_key_pane_g5

0x1bcf,	// (0x000127a6) cell_ituss_key_pane_g6_ParamLimits

0x1bcf,	// (0x000127a6) cell_ituss_key_pane_g6

0x4350,	// (0x00014f27) bg_icf_pane_g1

0xed5a,	// (0x0001f931) bg_icf_pane_g2

0xed64,	// (0x0001f93b) bg_icf_pane_g3

0xed6c,	// (0x0001f943) bg_icf_pane_g4

0xed76,	// (0x0001f94d) bg_icf_pane_g5

0xed80,	// (0x0001f957) bg_icf_pane_g6

0xed8a,	// (0x0001f961) bg_icf_pane_g7

0xed92,	// (0x0001f969) bg_icf_pane_g8

0xed9c,	// (0x0001f973) bg_icf_pane_g9

0x0008,

0xfedb,	// (0x00020ab2) bg_icf_pane_g

0xa3a8,	// (0x0001af7f) popup_hyb_candi_window_ParamLimits

0xa3a8,	// (0x0001af7f) popup_hyb_candi_window

0x4472,	// (0x00015049) bg_popup_sub_pane_cp01_ParamLimits

0x4472,	// (0x00015049) bg_popup_sub_pane_cp01

0xa63b,	// (0x0001b212) entry_hyb_candi_pane_ParamLimits

0xa63b,	// (0x0001b212) entry_hyb_candi_pane

0xa64a,	// (0x0001b221) grid_hyb_candi_pane_ParamLimits

0xa64a,	// (0x0001b221) grid_hyb_candi_pane

0xa65f,	// (0x0001b236) grid_hyb_phrase_pane_ParamLimits

0xa65f,	// (0x0001b236) grid_hyb_phrase_pane

0xa66e,	// (0x0001b245) cell_hyb_candi_pane_ParamLimits

0xa66e,	// (0x0001b245) cell_hyb_candi_pane

0xa691,	// (0x0001b268) cell_hyb_candi_scroll_pane

0x3428,	// (0x00013fff) cell_hyb_candi_pane_g1

0xa69a,	// (0x0001b271) cell_hyb_candi_pane_t1

0xa6a8,	// (0x0001b27f) cell_hyb_phrase_pane

0x3428,	// (0x00013fff) cell_hyb_phrase_pane_g1

0xa6b1,	// (0x0001b288) cell_hyb_phrase_pane_t1

0xa6bf,	// (0x0001b296) entry_hyb_candi_pane_t1

0x3adc,	// (0x000146b3) input_focus_pane_cp06

0xa6cd,	// (0x0001b2a4) cell_hyb_candi_scroll_pane_g1

0xa6d5,	// (0x0001b2ac) cell_hyb_candi_scroll_pane_g1_aid

0xa6dd,	// (0x0001b2b4) cell_hyb_candi_scroll_pane_g2

0xa6e5,	// (0x0001b2bc) cell_hyb_candi_scroll_pane_g2_aid

0xa6ed,	// (0x0001b2c4) cell_hyb_candi_scroll_pane_g3

0xa6f5,	// (0x0001b2cc) cell_hyb_candi_scroll_pane_g4

0xeaea,	// (0x0001f6c1) ai5_page_g1

0x1ccf,	// (0x000128a6) cell_ituss_key_t6_ParamLimits

0x1ccf,	// (0x000128a6) cell_ituss_key_t6

0xc1ed,	// (0x0001cdc4) icf_edit_indi_pane_cp02_ParamLimits

0xc1ed,	// (0x0001cdc4) icf_edit_indi_pane_cp02

0x1ad9,	// (0x000126b0) icf_edit_indi_pane_cp03_ParamLimits

0x1ad9,	// (0x000126b0) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
