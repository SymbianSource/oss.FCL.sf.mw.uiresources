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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000300a3 };

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
0x5a64,	// (0x00035b07) Screen

0x5a70,	// (0x00035b13) application_window_ParamLimits

0x5a70,	// (0x00035b13) application_window

0x2339,	// (0x000323dc) screen_g1

0x5acc,	// (0x00035b6f) area_bottom_pane_ParamLimits

0x5acc,	// (0x00035b6f) area_bottom_pane

0x5b8c,	// (0x00035c2f) area_top_pane_ParamLimits

0x5b8c,	// (0x00035c2f) area_top_pane

0x5c2a,	// (0x00035ccd) main_pane_ParamLimits

0x5c2a,	// (0x00035ccd) main_pane

0x2343,	// (0x000323e6) misc_graphics

0x9896,	// (0x00039939) battery_pane_ParamLimits

0x9896,	// (0x00039939) battery_pane

0xa558,	// (0x0003a5fb) bg_status_flat_pane_g8

0xa560,	// (0x0003a603) bg_status_flat_pane_g9

0x995e,	// (0x00039a01) context_pane_ParamLimits

0x995e,	// (0x00039a01) context_pane

0x9a74,	// (0x00039b17) navi_pane_ParamLimits

0x9a74,	// (0x00039b17) navi_pane

0x9af8,	// (0x00039b9b) signal_pane_ParamLimits

0x9af8,	// (0x00039b9b) signal_pane

0x0008,

0xf86a,	// (0x0003f90d) bg_status_flat_pane_g

0x9b65,	// (0x00039c08) status_pane_g1_ParamLimits

0x9b65,	// (0x00039c08) status_pane_g1

0x9b79,	// (0x00039c1c) status_pane_g2_ParamLimits

0x9b79,	// (0x00039c1c) status_pane_g2

0x9b85,	// (0x00039c28) status_pane_g3_ParamLimits

0x9b85,	// (0x00039c28) status_pane_g3

0x0004,

0xf796,	// (0x0003f839) status_pane_g_ParamLimits

0xf796,	// (0x0003f839) status_pane_g

0x9bb9,	// (0x00039c5c) title_pane_ParamLimits

0x9bb9,	// (0x00039c5c) title_pane

0x9bf6,	// (0x00039c99) uni_indicator_pane_ParamLimits

0x9bf6,	// (0x00039c99) uni_indicator_pane

0x97b5,	// (0x00039858) bg_list_pane_ParamLimits

0x97b5,	// (0x00039858) bg_list_pane

0x4763,	// (0x00034806) find_pane

0x97d5,	// (0x00039878) listscroll_app_pane_ParamLimits

0x97d5,	// (0x00039878) listscroll_app_pane

0x97e6,	// (0x00039889) listscroll_form_pane

0x59e6,	// (0x00035a89) listscroll_gen_pane_ParamLimits

0x59e6,	// (0x00035a89) listscroll_gen_pane

0x7720,	// (0x000377c3) listscroll_set_pane

0x6ab7,	// (0x00036b5a) main_idle_act_pane

0x94b5,	// (0x00039558) main_idle_trad_pane

0x94b5,	// (0x00039558) main_list_empty_pane

0x9800,	// (0x000398a3) main_midp_pane

0x980c,	// (0x000398af) main_pane_g1_ParamLimits

0x980c,	// (0x000398af) main_pane_g1

0x7736,	// (0x000377d9) popup_ai_message_window_ParamLimits

0x7736,	// (0x000377d9) popup_ai_message_window

0x77da,	// (0x0003787d) popup_fep_china_uni_window_ParamLimits

0x77da,	// (0x0003787d) popup_fep_china_uni_window

0x7834,	// (0x000378d7) popup_fep_japan_candidate_window_ParamLimits

0x7834,	// (0x000378d7) popup_fep_japan_candidate_window

0x7852,	// (0x000378f5) popup_fep_japan_predictive_window_ParamLimits

0x7852,	// (0x000378f5) popup_fep_japan_predictive_window

0x7882,	// (0x00037925) popup_find_window

0x788f,	// (0x00037932) popup_grid_graphic_window_ParamLimits

0x788f,	// (0x00037932) popup_grid_graphic_window

0x78b9,	// (0x0003795c) popup_large_graphic_colour_window

0x78df,	// (0x00037982) popup_menu_window_ParamLimits

0x78df,	// (0x00037982) popup_menu_window

0x7a9b,	// (0x00037b3e) popup_note_image_window

0x7a87,	// (0x00037b2a) popup_note_wait_window_ParamLimits

0x7a87,	// (0x00037b2a) popup_note_wait_window

0x7a87,	// (0x00037b2a) popup_note_window_ParamLimits

0x7a87,	// (0x00037b2a) popup_note_window

0x7af1,	// (0x00037b94) popup_query_code_window_ParamLimits

0x7af1,	// (0x00037b94) popup_query_code_window

0x7b05,	// (0x00037ba8) popup_query_data_code_window_ParamLimits

0x7b05,	// (0x00037ba8) popup_query_data_code_window

0x7b22,	// (0x00037bc5) popup_query_data_window_ParamLimits

0x7b22,	// (0x00037bc5) popup_query_data_window

0x7b3e,	// (0x00037be1) popup_query_sat_info_window_ParamLimits

0x7b3e,	// (0x00037be1) popup_query_sat_info_window

0x7b77,	// (0x00037c1a) popup_snote_single_graphic_window_ParamLimits

0x7b77,	// (0x00037c1a) popup_snote_single_graphic_window

0x7b77,	// (0x00037c1a) popup_snote_single_text_window_ParamLimits

0x7b77,	// (0x00037c1a) popup_snote_single_text_window

0x7b8c,	// (0x00037c2f) popup_sub_window_general

0x7cbc,	// (0x00037d5f) popup_window_general_ParamLimits

0x7cbc,	// (0x00037d5f) popup_window_general

0x981a,	// (0x000398bd) power_save_pane

0x75b2,	// (0x00037655) control_pane_g1_ParamLimits

0x75b2,	// (0x00037655) control_pane_g1

0x75d9,	// (0x0003767c) control_pane_g2_ParamLimits

0x75d9,	// (0x0003767c) control_pane_g2

0x9778,	// (0x0003981b) control_pane_g3_ParamLimits

0x9778,	// (0x0003981b) control_pane_g3

0x0007,

0xf77e,	// (0x0003f821) control_pane_g_ParamLimits

0xf77e,	// (0x0003f821) control_pane_g

0x7623,	// (0x000376c6) control_pane_t1_ParamLimits

0x7623,	// (0x000376c6) control_pane_t1

0x7677,	// (0x0003771a) control_pane_t2_ParamLimits

0x7677,	// (0x0003771a) control_pane_t2

0x0002,

0xf78f,	// (0x0003f832) control_pane_t_ParamLimits

0xf78f,	// (0x0003f832) control_pane_t

0x969d,	// (0x00039740) navi_navi_volume_pane_cp1

0x96a5,	// (0x00039748) status_small_icon_pane

0x96ad,	// (0x00039750) status_small_pane_g1_ParamLimits

0x96ad,	// (0x00039750) status_small_pane_g1

0x96e1,	// (0x00039784) status_small_pane_g2_ParamLimits

0x96e1,	// (0x00039784) status_small_pane_g2

0x96ed,	// (0x00039790) status_small_pane_g3_ParamLimits

0x96ed,	// (0x00039790) status_small_pane_g3

0x96f9,	// (0x0003979c) status_small_pane_g4_ParamLimits

0x96f9,	// (0x0003979c) status_small_pane_g4

0x9705,	// (0x000397a8) status_small_pane_g5_ParamLimits

0x9705,	// (0x000397a8) status_small_pane_g5

0x9713,	// (0x000397b6) status_small_pane_g6_ParamLimits

0x9713,	// (0x000397b6) status_small_pane_g6

0x0007,

0xf76d,	// (0x0003f810) status_small_pane_g_ParamLimits

0xf76d,	// (0x0003f810) status_small_pane_g

0x9742,	// (0x000397e5) status_small_pane_t1

0x9764,	// (0x00039807) status_small_wait_pane_ParamLimits

0x9764,	// (0x00039807) status_small_wait_pane

0x6e8c,	// (0x00036f2f) aid_levels_signal_ParamLimits

0x6e8c,	// (0x00036f2f) aid_levels_signal

0x6e9e,	// (0x00036f41) signal_pane_g1_ParamLimits

0x6e9e,	// (0x00036f41) signal_pane_g1

0x6eb3,	// (0x00036f56) signal_pane_g2_ParamLimits

0x6eb3,	// (0x00036f56) signal_pane_g2

0x0003,

0xf6fe,	// (0x0003f7a1) signal_pane_g_ParamLimits

0xf6fe,	// (0x0003f7a1) signal_pane_g

0x2bdc,	// (0x00032c7f) context_pane_g1

0x5e6b,	// (0x00035f0e) title_pane_g1

0x5e95,	// (0x00035f38) title_pane_t1

0x2359,	// (0x000323fc) title_pane_t2

0x237f,	// (0x00032422) title_pane_t3

0x0002,

0xf557,	// (0x0003f5fa) title_pane_t

0x9c0e,	// (0x00039cb1) aid_levels_battery_ParamLimits

0x9c0e,	// (0x00039cb1) aid_levels_battery

0x9c22,	// (0x00039cc5) battery_pane_g1_ParamLimits

0x9c22,	// (0x00039cc5) battery_pane_g1

0x9c38,	// (0x00039cdb) battery_pane_g2_ParamLimits

0x9c38,	// (0x00039cdb) battery_pane_g2

0x0001,

0xf7a1,	// (0x0003f844) battery_pane_g_ParamLimits

0xf7a1,	// (0x0003f844) battery_pane_g

0xae7c,	// (0x0003af1f) uni_indicator_pane_g1

0xae8f,	// (0x0003af32) uni_indicator_pane_g2

0xaea1,	// (0x0003af44) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0003f9b5) uni_indicator_pane_g

0x7436,	// (0x000374d9) navi_icon_pane_ParamLimits

0x7436,	// (0x000374d9) navi_icon_pane

0x7380,	// (0x00037423) navi_midp_pane

0x7452,	// (0x000374f5) navi_navi_pane

0x745c,	// (0x000374ff) navi_text_pane_ParamLimits

0x745c,	// (0x000374ff) navi_text_pane

0x2339,	// (0x000323dc) status_small_wait_pane_g1

0x25d0,	// (0x00032673) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0003f9b0) status_small_wait_pane_g

0xaba3,	// (0x0003ac46) navi_navi_icon_text_pane

0xabab,	// (0x0003ac4e) navi_navi_pane_g1_ParamLimits

0xabab,	// (0x0003ac4e) navi_navi_pane_g1

0xabbd,	// (0x0003ac60) navi_navi_pane_g2_ParamLimits

0xabbd,	// (0x0003ac60) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0003f97e) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0003f97e) navi_navi_pane_g

0xabcf,	// (0x0003ac72) navi_navi_tabs_pane

0xabd8,	// (0x0003ac7b) navi_navi_text_pane

0xaba3,	// (0x0003ac46) navi_navi_volume_pane

0xab7f,	// (0x0003ac22) navi_text_pane_t1

0xab73,	// (0x0003ac16) navi_icon_pane_g1

0xaac6,	// (0x0003ab69) navi_navi_text_pane_t1

0x7fa1,	// (0x00038044) navi_navi_volume_pane_g1

0x7fa9,	// (0x0003804c) volume_small_pane

0xaa2c,	// (0x0003aacf) navi_navi_icon_text_pane_g1

0xaa34,	// (0x0003aad7) navi_navi_icon_text_pane_t1

0x7452,	// (0x000374f5) navi_tabs_2_long_pane

0x7452,	// (0x000374f5) navi_tabs_2_pane

0x7452,	// (0x000374f5) navi_tabs_3_long_pane

0x7452,	// (0x000374f5) navi_tabs_3_pane

0x7452,	// (0x000374f5) navi_tabs_4_pane

0x7f81,	// (0x00038024) tabs_2_active_pane_ParamLimits

0x7f81,	// (0x00038024) tabs_2_active_pane

0x7f91,	// (0x00038034) tabs_2_passive_pane_ParamLimits

0x7f91,	// (0x00038034) tabs_2_passive_pane

0x7f4f,	// (0x00037ff2) tabs_3_active_pane_ParamLimits

0x7f4f,	// (0x00037ff2) tabs_3_active_pane

0x7f5f,	// (0x00038002) tabs_3_passive_pane_ParamLimits

0x7f5f,	// (0x00038002) tabs_3_passive_pane

0x7f70,	// (0x00038013) tabs_3_passive_pane_cp_ParamLimits

0x7f70,	// (0x00038013) tabs_3_passive_pane_cp

0x7f0b,	// (0x00037fae) tabs_4_active_pane_ParamLimits

0x7f0b,	// (0x00037fae) tabs_4_active_pane

0x7f1c,	// (0x00037fbf) tabs_4_passive_pane_ParamLimits

0x7f1c,	// (0x00037fbf) tabs_4_passive_pane

0x7f2d,	// (0x00037fd0) tabs_4_passive_pane_cp_ParamLimits

0x7f2d,	// (0x00037fd0) tabs_4_passive_pane_cp

0x7f3e,	// (0x00037fe1) tabs_4_passive_pane_cp2_ParamLimits

0x7f3e,	// (0x00037fe1) tabs_4_passive_pane_cp2

0x7ee7,	// (0x00037f8a) tabs_2_long_active_pane_ParamLimits

0x7ee7,	// (0x00037f8a) tabs_2_long_active_pane

0x7ef9,	// (0x00037f9c) tabs_2_long_passive_pane_ParamLimits

0x7ef9,	// (0x00037f9c) tabs_2_long_passive_pane

0x7ea2,	// (0x00037f45) tabs_3_long_active_pane_ParamLimits

0x7ea2,	// (0x00037f45) tabs_3_long_active_pane

0x7ebb,	// (0x00037f5e) tabs_3_long_passive_pane_ParamLimits

0x7ebb,	// (0x00037f5e) tabs_3_long_passive_pane

0x7ece,	// (0x00037f71) tabs_3_long_passive_pane_cp_ParamLimits

0x7ece,	// (0x00037f71) tabs_3_long_passive_pane_cp

0x7e48,	// (0x00037eeb) volume_small_pane_g1

0x7e51,	// (0x00037ef4) volume_small_pane_g2

0x7e5a,	// (0x00037efd) volume_small_pane_g3

0x7e63,	// (0x00037f06) volume_small_pane_g4

0x7e6c,	// (0x00037f0f) volume_small_pane_g5

0x7e75,	// (0x00037f18) volume_small_pane_g6

0x7e7e,	// (0x00037f21) volume_small_pane_g7

0x7e87,	// (0x00037f2a) volume_small_pane_g8

0x7e90,	// (0x00037f33) volume_small_pane_g9

0x7e99,	// (0x00037f3c) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0003f94a) volume_small_pane_g

0x239f,	// (0x00032442) bg_active_tab_pane_cp2_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp2

0x5efd,	// (0x00035fa0) tabs_3_active_pane_g1

0x5f05,	// (0x00035fa8) tabs_3_active_pane_t1

0x239f,	// (0x00032442) bg_passive_tab_pane_cp2_ParamLimits

0x239f,	// (0x00032442) bg_passive_tab_pane_cp2

0x5efd,	// (0x00035fa0) tabs_3_passive_pane_g1

0x5f05,	// (0x00035fa8) tabs_3_passive_pane_t1

0x239f,	// (0x00032442) bg_active_tab_pane_cp3_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp3

0x5f17,	// (0x00035fba) tabs_4_active_pane_g1

0x5f1f,	// (0x00035fc2) tabs_4_active_pane_t1

0x239f,	// (0x00032442) bg_passive_tab_pane_cp3_ParamLimits

0x239f,	// (0x00032442) bg_passive_tab_pane_cp3

0x5f17,	// (0x00035fba) tabs_4_1_passive_pane_g1

0x5f1f,	// (0x00035fc2) tabs_4_1_passive_pane_t1

0x9800,	// (0x000398a3) list_highlight_pane_cp2

0xb0e4,	// (0x0003b187) list_set_pane_ParamLimits

0xb0e4,	// (0x0003b187) list_set_pane

0xb186,	// (0x0003b229) main_pane_set_t1_ParamLimits

0xb186,	// (0x0003b229) main_pane_set_t1

0xb1a6,	// (0x0003b249) main_pane_set_t2_ParamLimits

0xb1a6,	// (0x0003b249) main_pane_set_t2

0xb1ba,	// (0x0003b25d) main_pane_set_t3_ParamLimits

0xb1ba,	// (0x0003b25d) main_pane_set_t3

0xb1cc,	// (0x0003b26f) main_pane_set_t4_ParamLimits

0xb1cc,	// (0x0003b26f) main_pane_set_t4

0x0003,

0xf977,	// (0x0003fa1a) main_pane_set_t_ParamLimits

0xf977,	// (0x0003fa1a) main_pane_set_t

0xb1de,	// (0x0003b281) setting_code_pane

0xb1ea,	// (0x0003b28d) setting_slider_graphic_pane

0xb1ea,	// (0x0003b28d) setting_slider_pane

0xb1ea,	// (0x0003b28d) setting_text_pane

0xb1ea,	// (0x0003b28d) setting_volume_pane

0x5f31,	// (0x00035fd4) volume_set_pane

0x239f,	// (0x00032442) bg_set_opt_pane_cp

0x5f39,	// (0x00035fdc) setting_slider_pane_t1

0x5f52,	// (0x00035ff5) setting_slider_pane_t2

0x5f6c,	// (0x0003600f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003f601) setting_slider_pane_t

0x5f84,	// (0x00036027) slider_set_pane

0x2343,	// (0x000323e6) bg_set_opt_pane_cp2

0x23ad,	// (0x00032450) setting_slider_graphic_pane_g1

0x5f9a,	// (0x0003603d) setting_slider_graphic_pane_t1

0x5faa,	// (0x0003604d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003f608) setting_slider_graphic_pane_t

0x5fba,	// (0x0003605d) slider_set_pane_cp

0x2343,	// (0x000323e6) input_focus_pane_cp1

0xb0a3,	// (0x0003b146) list_set_text_pane

0x2339,	// (0x000323dc) setting_text_pane_g1

0x2343,	// (0x000323e6) input_focus_pane_cp2

0x2339,	// (0x000323dc) setting_code_pane_g1

0x23b6,	// (0x00032459) setting_code_pane_t1

0x4627,	// (0x000346ca) set_text_pane_t1_ParamLimits

0x4627,	// (0x000346ca) set_text_pane_t1

0x27a9,	// (0x0003284c) set_opt_bg_pane_g1

0x27b1,	// (0x00032854) set_opt_bg_pane_g2

0xb07d,	// (0x0003b120) set_opt_bg_pane_g3

0x27c1,	// (0x00032864) set_opt_bg_pane_g4

0x27c9,	// (0x0003286c) set_opt_bg_pane_g5

0x27d1,	// (0x00032874) set_opt_bg_pane_g6

0xb087,	// (0x0003b12a) set_opt_bg_pane_g7

0xb08f,	// (0x0003b132) set_opt_bg_pane_g8

0xb099,	// (0x0003b13c) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0003fa07) set_opt_bg_pane_g

0xb070,	// (0x0003b113) slider_set_pane_g1

0x8028,	// (0x000380cb) slider_set_pane_g2

0x0006,

0xf955,	// (0x0003f9f8) slider_set_pane_g

0x7fb2,	// (0x00038055) volume_set_pane_g1

0x7fba,	// (0x0003805d) volume_set_pane_g2

0x7fc2,	// (0x00038065) volume_set_pane_g3

0x7fca,	// (0x0003806d) volume_set_pane_g4

0x7fd2,	// (0x00038075) volume_set_pane_g5

0x7fda,	// (0x0003807d) volume_set_pane_g6

0x7fe2,	// (0x00038085) volume_set_pane_g7

0x7fea,	// (0x0003808d) volume_set_pane_g8

0x7ff2,	// (0x00038095) volume_set_pane_g9

0x7ffa,	// (0x0003809d) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0003f9d0) volume_set_pane_g

0x5fc2,	// (0x00036065) indicator_pane_ParamLimits

0x5fc2,	// (0x00036065) indicator_pane

0x5fce,	// (0x00036071) main_idle_pane_g2_ParamLimits

0x5fce,	// (0x00036071) main_idle_pane_g2

0x5ff6,	// (0x00036099) main_pane_idle_g1_ParamLimits

0x5ff6,	// (0x00036099) main_pane_idle_g1

0x23c4,	// (0x00032467) popup_clock_digital_analogue_window_ParamLimits

0x23c4,	// (0x00032467) popup_clock_digital_analogue_window

0x6003,	// (0x000360a6) soft_indicator_pane_ParamLimits

0x6003,	// (0x000360a6) soft_indicator_pane

0x600f,	// (0x000360b2) wallpaper_pane_ParamLimits

0x600f,	// (0x000360b2) wallpaper_pane

0x2339,	// (0x000323dc) wallpaper_pane_g1

0x601b,	// (0x000360be) indicator_pane_g1_ParamLimits

0x601b,	// (0x000360be) indicator_pane_g1

0xb4a7,	// (0x0003b54a) navi_navi_icon_text_pane_srt_g1

0x23f2,	// (0x00032495) soft_indicator_pane_t1

0x240c,	// (0x000324af) aid_ps_area_pane

0x6027,	// (0x000360ca) aid_ps_clock_pane

0x241d,	// (0x000324c0) aid_ps_indicator_pane

0x2429,	// (0x000324cc) indicator_ps_pane_ParamLimits

0x2429,	// (0x000324cc) indicator_ps_pane

0x2438,	// (0x000324db) power_save_pane_g1_ParamLimits

0x2438,	// (0x000324db) power_save_pane_g1

0x2444,	// (0x000324e7) power_save_pane_g2_ParamLimits

0x2444,	// (0x000324e7) power_save_pane_g2

0x5a80,	// (0x00035b23) aid_navinavi_width_pane

0x240c,	// (0x000324af) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003f60d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003f60d) power_save_pane_g

0x2452,	// (0x000324f5) power_save_pane_t1_ParamLimits

0x2452,	// (0x000324f5) power_save_pane_t1

0x6027,	// (0x000360ca) aid_ps_clock_pane_ParamLimits

0x241d,	// (0x000324c0) aid_ps_indicator_pane_ParamLimits

0x2464,	// (0x00032507) power_save_pane_t4_ParamLimits

0x2464,	// (0x00032507) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003f612) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003f612) power_save_pane_t

0x248e,	// (0x00032531) power_save_t3_ParamLimits

0x248e,	// (0x00032531) power_save_t3

0x2479,	// (0x0003251c) power_save_t2_ParamLimits

0x2479,	// (0x0003251c) power_save_t2

0x24a3,	// (0x00032546) indicator_ps_pane_g1

0x6035,	// (0x000360d8) ai_gene_pane_ParamLimits

0x6035,	// (0x000360d8) ai_gene_pane

0x6041,	// (0x000360e4) ai_links_pane_ParamLimits

0x6041,	// (0x000360e4) ai_links_pane

0x604d,	// (0x000360f0) indicator_pane_cp1_ParamLimits

0x604d,	// (0x000360f0) indicator_pane_cp1

0x6059,	// (0x000360fc) main_pane_idle_g1_cp_ParamLimits

0x6059,	// (0x000360fc) main_pane_idle_g1_cp

0x6065,	// (0x00036108) popup_ai_links_title_window

0x606e,	// (0x00036111) soft_indicator_pane_cp1_ParamLimits

0x606e,	// (0x00036111) soft_indicator_pane_cp1

0xae6a,	// (0x0003af0d) ai_links_pane_g1

0xae73,	// (0x0003af16) grid_ai_links_pane

0xae4d,	// (0x0003aef0) ai_gene_pane_1

0xae58,	// (0x0003aefb) ai_gene_pane_2

0xae61,	// (0x0003af04) list_highlight_pane_cp4

0xae31,	// (0x0003aed4) cell_ai_link_pane_ParamLimits

0xae31,	// (0x0003aed4) cell_ai_link_pane

0xae29,	// (0x0003aecc) cell_ai_link_pane_g1

0x25d0,	// (0x00032673) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0003f9ab) cell_ai_link_pane_g

0x2343,	// (0x000323e6) grid_highlight_cp2

0x2343,	// (0x000323e6) bg_popup_sub_pane_cp1

0x24ba,	// (0x0003255d) popup_ai_links_title_window_t1

0xad79,	// (0x0003ae1c) ai_gene_pane_1_g1_ParamLimits

0xad79,	// (0x0003ae1c) ai_gene_pane_1_g1

0xad85,	// (0x0003ae28) ai_gene_pane_1_g2_ParamLimits

0xad85,	// (0x0003ae28) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0003f9a1) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0003f9a1) ai_gene_pane_1_g

0xad92,	// (0x0003ae35) ai_gene_pane_1_t1_ParamLimits

0xad92,	// (0x0003ae35) ai_gene_pane_1_t1

0xadc6,	// (0x0003ae69) grid_ai_soft_ind_pane

0xad64,	// (0x0003ae07) ai_gene_pane_2_t1_ParamLimits

0xad64,	// (0x0003ae07) ai_gene_pane_2_t1

0x607a,	// (0x0003611d) main_pane_empty_t1_ParamLimits

0x607a,	// (0x0003611d) main_pane_empty_t1

0x6092,	// (0x00036135) main_pane_empty_t2_ParamLimits

0x6092,	// (0x00036135) main_pane_empty_t2

0x60a7,	// (0x0003614a) main_pane_empty_t3_ParamLimits

0x60a7,	// (0x0003614a) main_pane_empty_t3

0x60b9,	// (0x0003615c) main_pane_empty_t4_ParamLimits

0x60b9,	// (0x0003615c) main_pane_empty_t4

0x60cb,	// (0x0003616e) main_pane_empty_t5_ParamLimits

0x60cb,	// (0x0003616e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003f617) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003f617) main_pane_empty_t

0x27fa,	// (0x0003289d) bg_popup_window_pane_ParamLimits

0x27fa,	// (0x0003289d) bg_popup_window_pane

0xaad4,	// (0x0003ab77) find_popup_pane_cp2_ParamLimits

0xaad4,	// (0x0003ab77) find_popup_pane_cp2

0xaae0,	// (0x0003ab83) heading_pane_ParamLimits

0xaae0,	// (0x0003ab83) heading_pane

0x2343,	// (0x000323e6) bg_popup_sub_pane

0xaa4e,	// (0x0003aaf1) bg_popup_window_pane_g1_ParamLimits

0xaa4e,	// (0x0003aaf1) bg_popup_window_pane_g1

0xaa5a,	// (0x0003aafd) bg_popup_window_pane_g2_ParamLimits

0xaa5a,	// (0x0003aafd) bg_popup_window_pane_g2

0xaa66,	// (0x0003ab09) bg_popup_window_pane_g3_ParamLimits

0xaa66,	// (0x0003ab09) bg_popup_window_pane_g3

0xaa72,	// (0x0003ab15) bg_popup_window_pane_g4_ParamLimits

0xaa72,	// (0x0003ab15) bg_popup_window_pane_g4

0xaa7e,	// (0x0003ab21) bg_popup_window_pane_g5_ParamLimits

0xaa7e,	// (0x0003ab21) bg_popup_window_pane_g5

0xaa8a,	// (0x0003ab2d) bg_popup_window_pane_g6_ParamLimits

0xaa8a,	// (0x0003ab2d) bg_popup_window_pane_g6

0xaa96,	// (0x0003ab39) bg_popup_window_pane_g7_ParamLimits

0xaa96,	// (0x0003ab39) bg_popup_window_pane_g7

0xaaa2,	// (0x0003ab45) bg_popup_window_pane_g8_ParamLimits

0xaaa2,	// (0x0003ab45) bg_popup_window_pane_g8

0xaaae,	// (0x0003ab51) bg_popup_window_pane_g9_ParamLimits

0xaaae,	// (0x0003ab51) bg_popup_window_pane_g9

0xaaba,	// (0x0003ab5d) bg_popup_window_pane_g10_ParamLimits

0xaaba,	// (0x0003ab5d) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0003f969) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0003f969) bg_popup_window_pane_g

0xa9e3,	// (0x0003aa86) bg_popup_heading_pane_ParamLimits

0xa9e3,	// (0x0003aa86) bg_popup_heading_pane

0x81b8,	// (0x0003825b) tabs_4_passive_pane_cp_srt_ParamLimits

0x81b8,	// (0x0003825b) tabs_4_passive_pane_cp_srt

0x81ca,	// (0x0003826d) tabs_4_passive_pane_srt_ParamLimits

0xa9f7,	// (0x0003aa9a) heading_pane_g2

0x81ca,	// (0x0003826d) tabs_4_passive_pane_srt

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp3_srt

0xa9ff,	// (0x0003aaa2) heading_pane_t1_ParamLimits

0xa9ff,	// (0x0003aaa2) heading_pane_t1

0xaa16,	// (0x0003aab9) heading_pane_t2_ParamLimits

0xaa16,	// (0x0003aab9) heading_pane_t2

0x0001,

0xf8c1,	// (0x0003f964) heading_pane_t_ParamLimits

0xf8c1,	// (0x0003f964) heading_pane_t

0xa520,	// (0x0003a5c3) bg_popup_heading_pane_g1

0xa5cf,	// (0x0003a672) bg_popup_heading_pane_g2

0xa5d9,	// (0x0003a67c) bg_popup_heading_pane_g3

0xa5e3,	// (0x0003a686) bg_popup_heading_pane_g4

0xa5ed,	// (0x0003a690) bg_popup_heading_pane_g5

0xa5f7,	// (0x0003a69a) bg_popup_heading_pane_g6

0xa5ff,	// (0x0003a6a2) bg_popup_heading_pane_g7

0xa607,	// (0x0003a6aa) bg_popup_heading_pane_g8

0xa611,	// (0x0003a6b4) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0003f920) bg_popup_heading_pane_g

0x9d0d,	// (0x00039db0) bg_popup_sub_pane_g1

0x9d1d,	// (0x00039dc0) bg_popup_sub_pane_g2

0x9d15,	// (0x00039db8) bg_popup_sub_pane_g3

0x9d2d,	// (0x00039dd0) bg_popup_sub_pane_g4

0x9d25,	// (0x00039dc8) bg_popup_sub_pane_g5

0x9d35,	// (0x00039dd8) bg_popup_sub_pane_g6

0x9d3d,	// (0x00039de0) bg_popup_sub_pane_g7

0x9d4d,	// (0x00039df0) bg_popup_sub_pane_g8

0x9d45,	// (0x00039de8) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0003f8fa) bg_popup_sub_pane_g

0x2391,	// (0x00032434) bg_popup_window_pane_cp5_ParamLimits

0x2391,	// (0x00032434) bg_popup_window_pane_cp5

0x24d7,	// (0x0003257a) popup_note_window_g1_ParamLimits

0x24d7,	// (0x0003257a) popup_note_window_g1

0x24e3,	// (0x00032586) popup_note_window_t1_ParamLimits

0x24e3,	// (0x00032586) popup_note_window_t1

0x24f9,	// (0x0003259c) popup_note_window_t2_ParamLimits

0x24f9,	// (0x0003259c) popup_note_window_t2

0x250f,	// (0x000325b2) popup_note_window_t3_ParamLimits

0x250f,	// (0x000325b2) popup_note_window_t3

0x2525,	// (0x000325c8) popup_note_window_t4_ParamLimits

0x2525,	// (0x000325c8) popup_note_window_t4

0x254d,	// (0x000325f0) popup_note_window_t5_ParamLimits

0x254d,	// (0x000325f0) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003f622) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003f622) popup_note_window_t

0x2571,	// (0x00032614) bg_popup_window_pane_cp6_ParamLimits

0x2571,	// (0x00032614) bg_popup_window_pane_cp6

0xa49c,	// (0x0003a53f) popup_note_image_window_g1_ParamLimits

0xa49c,	// (0x0003a53f) popup_note_image_window_g1

0xa4a8,	// (0x0003a54b) popup_note_image_window_g2_ParamLimits

0xa4a8,	// (0x0003a54b) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0003f8ee) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0003f8ee) popup_note_image_window_g

0xa4c1,	// (0x0003a564) popup_note_image_window_t1_ParamLimits

0xa4c1,	// (0x0003a564) popup_note_image_window_t1

0xa4da,	// (0x0003a57d) popup_note_image_window_t2_ParamLimits

0xa4da,	// (0x0003a57d) popup_note_image_window_t2

0xa4f3,	// (0x0003a596) popup_note_image_window_t3_ParamLimits

0xa4f3,	// (0x0003a596) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0003f8f3) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0003f8f3) popup_note_image_window_t

0xa365,	// (0x0003a408) bg_popup_window_pane_cp7_ParamLimits

0xa365,	// (0x0003a408) bg_popup_window_pane_cp7

0xa395,	// (0x0003a438) popup_note_wait_window_g1_ParamLimits

0xa395,	// (0x0003a438) popup_note_wait_window_g1

0xa3a1,	// (0x0003a444) popup_note_wait_window_g2_ParamLimits

0xa3a1,	// (0x0003a444) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0003f8dc) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0003f8dc) popup_note_wait_window_g

0xa3b9,	// (0x0003a45c) popup_note_wait_window_t1_ParamLimits

0xa3b9,	// (0x0003a45c) popup_note_wait_window_t1

0xa3e0,	// (0x0003a483) popup_note_wait_window_t2_ParamLimits

0xa3e0,	// (0x0003a483) popup_note_wait_window_t2

0xa3fd,	// (0x0003a4a0) popup_note_wait_window_t3_ParamLimits

0xa3fd,	// (0x0003a4a0) popup_note_wait_window_t3

0xa410,	// (0x0003a4b3) popup_note_wait_window_t4_ParamLimits

0xa410,	// (0x0003a4b3) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0003f8e3) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0003f8e3) popup_note_wait_window_t

0xa435,	// (0x0003a4d8) wait_bar_pane_ParamLimits

0xa435,	// (0x0003a4d8) wait_bar_pane

0x2343,	// (0x000323e6) wait_anim_pane

0x2343,	// (0x000323e6) wait_border_pane

0x2339,	// (0x000323dc) wait_anim_pane_g1

0x2339,	// (0x000323dc) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0003f79c) wait_anim_pane_g

0xa311,	// (0x0003a3b4) wait_border_pane_g1

0xa31c,	// (0x0003a3bf) wait_border_pane_g2

0xa325,	// (0x0003a3c8) wait_border_pane_g3

0x0002,

0xf832,	// (0x0003f8d5) wait_border_pane_g

0xa17c,	// (0x0003a21f) bg_popup_window_pane_cp16_ParamLimits

0xa17c,	// (0x0003a21f) bg_popup_window_pane_cp16

0xa27c,	// (0x0003a31f) indicator_popup_pane_cp4_ParamLimits

0xa27c,	// (0x0003a31f) indicator_popup_pane_cp4

0xa290,	// (0x0003a333) popup_query_data_window_t1_ParamLimits

0xa290,	// (0x0003a333) popup_query_data_window_t1

0xa2a2,	// (0x0003a345) popup_query_data_window_t2_ParamLimits

0xa2a2,	// (0x0003a345) popup_query_data_window_t2

0xa2bb,	// (0x0003a35e) popup_query_data_window_t3_ParamLimits

0xa2bb,	// (0x0003a35e) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0003f8ce) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0003f8ce) popup_query_data_window_t

0xa2d5,	// (0x0003a378) query_popup_data_pane_ParamLimits

0xa2d5,	// (0x0003a378) query_popup_data_pane

0xa2e9,	// (0x0003a38c) query_popup_data_pane_cp1_ParamLimits

0xa2e9,	// (0x0003a38c) query_popup_data_pane_cp1

0xa17c,	// (0x0003a21f) bg_popup_window_pane_cp10_ParamLimits

0xa17c,	// (0x0003a21f) bg_popup_window_pane_cp10

0xa1ae,	// (0x0003a251) indicator_popup_pane_ParamLimits

0xa1ae,	// (0x0003a251) indicator_popup_pane

0xa1d0,	// (0x0003a273) popup_query_code_window_t1_ParamLimits

0xa1d0,	// (0x0003a273) popup_query_code_window_t1

0xa1ea,	// (0x0003a28d) popup_query_code_window_t2_ParamLimits

0xa1ea,	// (0x0003a28d) popup_query_code_window_t2

0xa233,	// (0x0003a2d6) popup_query_code_window_t3_ParamLimits

0xa233,	// (0x0003a2d6) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0003f8c7) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0003f8c7) popup_query_code_window_t

0xa262,	// (0x0003a305) query_popup_pane_ParamLimits

0xa262,	// (0x0003a305) query_popup_pane

0x2571,	// (0x00032614) bg_popup_window_pane_cp15_ParamLimits

0x2571,	// (0x00032614) bg_popup_window_pane_cp15

0x60df,	// (0x00036182) indicator_popup_pane_cp1_ParamLimits

0x60df,	// (0x00036182) indicator_popup_pane_cp1

0x60f2,	// (0x00036195) indicator_popup_pane_cp2_ParamLimits

0x60f2,	// (0x00036195) indicator_popup_pane_cp2

0x6105,	// (0x000361a8) popup_query_data_code_window_g1_ParamLimits

0x6105,	// (0x000361a8) popup_query_data_code_window_g1

0x258f,	// (0x00032632) popup_query_data_code_window_t1_ParamLimits

0x258f,	// (0x00032632) popup_query_data_code_window_t1

0x25a1,	// (0x00032644) popup_query_data_code_window_t2_ParamLimits

0x25a1,	// (0x00032644) popup_query_data_code_window_t2

0x6118,	// (0x000361bb) popup_query_data_code_window_t3_ParamLimits

0x6118,	// (0x000361bb) popup_query_data_code_window_t3

0x612e,	// (0x000361d1) popup_query_data_code_window_t4_ParamLimits

0x612e,	// (0x000361d1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003f62d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003f62d) popup_query_data_code_window_t

0x7d26,	// (0x00037dc9) list_single_midp_graphic_pane_g3

0x6146,	// (0x000361e9) query_popup_data_pane_cp2_ParamLimits

0x6159,	// (0x000361fc) query_popup_pane_cp2_ParamLimits

0x6159,	// (0x000361fc) query_popup_pane_cp2

0x2343,	// (0x000323e6) bg_popup_window_pane_cp11

0xa174,	// (0x0003a217) heading_pane_cp5

0x25fd,	// (0x000326a0) listscroll_popup_info_pane

0x2343,	// (0x000323e6) input_focus_pane_cp3

0x25b3,	// (0x00032656) query_popup_pane_t1

0x25c1,	// (0x00032664) list_popup_info_pane_ParamLimits

0x25c1,	// (0x00032664) list_popup_info_pane

0x25d0,	// (0x00032673) listscroll_popup_info_pane_g1

0x25d8,	// (0x0003267b) scroll_pane_cp7

0x616c,	// (0x0003620f) popup_info_list_pane_t1_ParamLimits

0x616c,	// (0x0003620f) popup_info_list_pane_t1

0x6186,	// (0x00036229) popup_info_list_pane_t2_ParamLimits

0x6186,	// (0x00036229) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003f636) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003f636) popup_info_list_pane_t

0x2343,	// (0x000323e6) bg_popup_window_pane_cp12

0xb4c1,	// (0x0003b564) find_popup_pane

0x239f,	// (0x00032442) bg_popup_window_pane_cp3

0x25e2,	// (0x00032685) heading_pane_cp3

0x25ee,	// (0x00032691) listscroll_popup_graphic_pane

0x2343,	// (0x000323e6) bg_popup_window_pane_cp4

0x61f0,	// (0x00036293) heading_pane_cp4

0x25fd,	// (0x000326a0) listscroll_popup_colour_pane

0x61fa,	// (0x0003629d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x61fa,	// (0x0003629d) cell_large_graphic_colour_none_popup_pane

0x620e,	// (0x000362b1) grid_large_graphic_colour_popup_pane_ParamLimits

0x620e,	// (0x000362b1) grid_large_graphic_colour_popup_pane

0x6236,	// (0x000362d9) listscroll_popup_colour_pane_g1_ParamLimits

0x6236,	// (0x000362d9) listscroll_popup_colour_pane_g1

0x624d,	// (0x000362f0) listscroll_popup_colour_pane_g2_ParamLimits

0x624d,	// (0x000362f0) listscroll_popup_colour_pane_g2

0x6264,	// (0x00036307) listscroll_popup_colour_pane_g3_ParamLimits

0x6264,	// (0x00036307) listscroll_popup_colour_pane_g3

0x6274,	// (0x00036317) listscroll_popup_colour_pane_g4_ParamLimits

0x6274,	// (0x00036317) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003f63b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003f63b) listscroll_popup_colour_pane_g

0x2605,	// (0x000326a8) scroll_pane_cp6_ParamLimits

0x2605,	// (0x000326a8) scroll_pane_cp6

0x6284,	// (0x00036327) cell_large_graphic_colour_popup_pane_ParamLimits

0x6284,	// (0x00036327) cell_large_graphic_colour_popup_pane

0x62a3,	// (0x00036346) cell_large_graphic_colour_none_popup_pane_t1

0x2343,	// (0x000323e6) grid_highlight_pane_cp5

0x2617,	// (0x000326ba) cell_large_graphic_colour_popup_pane_g1

0x261f,	// (0x000326c2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003f644) cell_large_graphic_colour_popup_pane_g

0x2627,	// (0x000326ca) cell_large_graphic_colour_popup_pane_g2_copy1

0x2630,	// (0x000326d3) grid_highlight_pane_cp4

0x2638,	// (0x000326db) bg_popup_window_pane_cp8_ParamLimits

0x2638,	// (0x000326db) bg_popup_window_pane_cp8

0x62b2,	// (0x00036355) popup_snote_single_text_window_g1_ParamLimits

0x62b2,	// (0x00036355) popup_snote_single_text_window_g1

0x62c4,	// (0x00036367) popup_snote_single_text_window_t1_ParamLimits

0x62c4,	// (0x00036367) popup_snote_single_text_window_t1

0x62d7,	// (0x0003637a) popup_snote_single_text_window_t2_ParamLimits

0x62d7,	// (0x0003637a) popup_snote_single_text_window_t2

0x62ea,	// (0x0003638d) popup_snote_single_text_window_t3_ParamLimits

0x62ea,	// (0x0003638d) popup_snote_single_text_window_t3

0x6323,	// (0x000363c6) popup_snote_single_text_window_t4_ParamLimits

0x6323,	// (0x000363c6) popup_snote_single_text_window_t4

0x6357,	// (0x000363fa) popup_snote_single_text_window_t5_ParamLimits

0x6357,	// (0x000363fa) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003f649) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003f649) popup_snote_single_text_window_t

0x2653,	// (0x000326f6) bg_popup_window_pane_cp9_ParamLimits

0x2653,	// (0x000326f6) bg_popup_window_pane_cp9

0x62b2,	// (0x00036355) popup_snote_single_graphic_window_g1_ParamLimits

0x62b2,	// (0x00036355) popup_snote_single_graphic_window_g1

0x2661,	// (0x00032704) popup_snote_single_graphic_window_g2_ParamLimits

0x2661,	// (0x00032704) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003f654) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003f654) popup_snote_single_graphic_window_g

0x266d,	// (0x00032710) popup_snote_single_graphic_window_t1_ParamLimits

0x266d,	// (0x00032710) popup_snote_single_graphic_window_t1

0x2680,	// (0x00032723) popup_snote_single_graphic_window_t2_ParamLimits

0x2680,	// (0x00032723) popup_snote_single_graphic_window_t2

0x6386,	// (0x00036429) popup_snote_single_graphic_window_t3_ParamLimits

0x6386,	// (0x00036429) popup_snote_single_graphic_window_t3

0x63bf,	// (0x00036462) popup_snote_single_graphic_window_t4_ParamLimits

0x63bf,	// (0x00036462) popup_snote_single_graphic_window_t4

0x63f3,	// (0x00036496) popup_snote_single_graphic_window_t5_ParamLimits

0x63f3,	// (0x00036496) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003f659) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003f659) popup_snote_single_graphic_window_t

0xb403,	// (0x0003b4a6) grid_graphic_popup_pane_ParamLimits

0xb403,	// (0x0003b4a6) grid_graphic_popup_pane

0xb42d,	// (0x0003b4d0) listscroll_popup_graphic_pane_g1_ParamLimits

0xb42d,	// (0x0003b4d0) listscroll_popup_graphic_pane_g1

0xb441,	// (0x0003b4e4) listscroll_popup_graphic_pane_g2_ParamLimits

0xb441,	// (0x0003b4e4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0003fa44) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0003fa44) listscroll_popup_graphic_pane_g

0xb455,	// (0x0003b4f8) scroll_pane_cp5

0xb3a2,	// (0x0003b445) cell_graphic_popup_pane_ParamLimits

0xb3a2,	// (0x0003b445) cell_graphic_popup_pane

0xb383,	// (0x0003b426) cell_graphic_popup_pane_g1

0xb38b,	// (0x0003b42e) cell_graphic_popup_pane_g2

0x2627,	// (0x000326ca) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0003fa3d) cell_graphic_popup_pane_g

0xb394,	// (0x0003b437) cell_graphic_popup_pane_t2

0x2630,	// (0x000326d3) grid_highlight_pane_cp3

0x26a5,	// (0x00032748) list_gen_pane_ParamLimits

0x26a5,	// (0x00032748) list_gen_pane

0x26cd,	// (0x00032770) scroll_pane

0xb2db,	// (0x0003b37e) bg_list_pane_g1_ParamLimits

0xb2db,	// (0x0003b37e) bg_list_pane_g1

0xb2f8,	// (0x0003b39b) bg_list_pane_g2_ParamLimits

0xb2f8,	// (0x0003b39b) bg_list_pane_g2

0xb30d,	// (0x0003b3b0) bg_list_pane_g3_ParamLimits

0xb30d,	// (0x0003b3b0) bg_list_pane_g3

0xb321,	// (0x0003b3c4) bg_list_pane_g4_ParamLimits

0xb321,	// (0x0003b3c4) bg_list_pane_g4

0xb335,	// (0x0003b3d8) bg_list_pane_g5_ParamLimits

0xb335,	// (0x0003b3d8) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0003fa32) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0003fa32) bg_list_pane_g

0xb270,	// (0x0003b313) list_double2_graphic_large_graphic_pane_ParamLimits

0xb270,	// (0x0003b313) list_double2_graphic_large_graphic_pane

0xb270,	// (0x0003b313) list_double2_graphic_pane_ParamLimits

0xb270,	// (0x0003b313) list_double2_graphic_pane

0xb270,	// (0x0003b313) list_double2_large_graphic_pane_ParamLimits

0xb270,	// (0x0003b313) list_double2_large_graphic_pane

0x80ce,	// (0x00038171) list_double2_pane_ParamLimits

0x80ce,	// (0x00038171) list_double2_pane

0xb270,	// (0x0003b313) list_double_graphic_heading_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_graphic_heading_pane

0xb270,	// (0x0003b313) list_double_graphic_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_graphic_pane

0xb270,	// (0x0003b313) list_double_heading_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_heading_pane

0xb270,	// (0x0003b313) list_double_large_graphic_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_large_graphic_pane

0xb270,	// (0x0003b313) list_double_number_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_number_pane

0xb270,	// (0x0003b313) list_double_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_pane

0xb270,	// (0x0003b313) list_double_time_pane_ParamLimits

0xb270,	// (0x0003b313) list_double_time_pane

0xb270,	// (0x0003b313) list_setting_number_pane_ParamLimits

0xb270,	// (0x0003b313) list_setting_number_pane

0xb270,	// (0x0003b313) list_setting_pane_ParamLimits

0xb270,	// (0x0003b313) list_setting_pane

0x810f,	// (0x000381b2) list_single_2graphic_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_2graphic_pane

0x810f,	// (0x000381b2) list_single_graphic_heading_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_graphic_heading_pane

0x810f,	// (0x000381b2) list_single_graphic_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_graphic_pane

0x810f,	// (0x000381b2) list_single_heading_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_heading_pane

0x8171,	// (0x00038214) list_single_large_graphic_pane_ParamLimits

0x8171,	// (0x00038214) list_single_large_graphic_pane

0x810f,	// (0x000381b2) list_single_number_heading_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_number_heading_pane

0x810f,	// (0x000381b2) list_single_number_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_number_pane

0x810f,	// (0x000381b2) list_single_pane_ParamLimits

0x810f,	// (0x000381b2) list_single_pane

0x2343,	// (0x000323e6) list_highlight_pane_cp1

0x464e,	// (0x000346f1) list_single_pane_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_pane_g1

0x465a,	// (0x000346fd) list_single_pane_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_pane_g

0x80b8,	// (0x0003815b) list_single_pane_t1_ParamLimits

0x80b8,	// (0x0003815b) list_single_pane_t1

0x464e,	// (0x000346f1) list_single_number_pane_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_number_pane_g1

0x465a,	// (0x000346fd) list_single_number_pane_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_number_pane_g

0x6438,	// (0x000364db) list_single_number_pane_t1_ParamLimits

0x6438,	// (0x000364db) list_single_number_pane_t1

0x8002,	// (0x000380a5) list_single_number_pane_t2_ParamLimits

0x8002,	// (0x000380a5) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0003f9f3) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0003f9f3) list_single_number_pane_t

0x642c,	// (0x000364cf) list_single_graphic_pane_g1_ParamLimits

0x642c,	// (0x000364cf) list_single_graphic_pane_g1

0x464e,	// (0x000346f1) list_single_graphic_pane_g2_ParamLimits

0x464e,	// (0x000346f1) list_single_graphic_pane_g2

0x465a,	// (0x000346fd) list_single_graphic_pane_g3_ParamLimits

0x465a,	// (0x000346fd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003f664) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003f664) list_single_graphic_pane_g

0x6438,	// (0x000364db) list_single_graphic_pane_t1_ParamLimits

0x6438,	// (0x000364db) list_single_graphic_pane_t1

0x464e,	// (0x000346f1) list_single_heading_pane_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_heading_pane_g1

0x465a,	// (0x000346fd) list_single_heading_pane_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_heading_pane_g

0x467c,	// (0x0003471f) list_single_heading_pane_t1_ParamLimits

0x467c,	// (0x0003471f) list_single_heading_pane_t1

0x4692,	// (0x00034735) list_single_heading_pane_t2_ParamLimits

0x4692,	// (0x00034735) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003f670) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003f670) list_single_heading_pane_t

0x464e,	// (0x000346f1) list_single_number_heading_pane_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_number_heading_pane_g1

0x465a,	// (0x000346fd) list_single_number_heading_pane_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_number_heading_pane_g

0x467c,	// (0x0003471f) list_single_number_heading_pane_t1_ParamLimits

0x467c,	// (0x0003471f) list_single_number_heading_pane_t1

0x46a4,	// (0x00034747) list_single_number_heading_pane_t2_ParamLimits

0x46a4,	// (0x00034747) list_single_number_heading_pane_t2

0x46b6,	// (0x00034759) list_single_number_heading_pane_t3_ParamLimits

0x46b6,	// (0x00034759) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003f675) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003f675) list_single_number_heading_pane_t

0x644e,	// (0x000364f1) list_single_graphic_heading_pane_g1_ParamLimits

0x644e,	// (0x000364f1) list_single_graphic_heading_pane_g1

0x645a,	// (0x000364fd) list_single_graphic_heading_pane_g4_ParamLimits

0x645a,	// (0x000364fd) list_single_graphic_heading_pane_g4

0x465a,	// (0x000346fd) list_single_graphic_heading_pane_g5_ParamLimits

0x465a,	// (0x000346fd) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003f67c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003f67c) list_single_graphic_heading_pane_g

0x467c,	// (0x0003471f) list_single_graphic_heading_pane_t1_ParamLimits

0x467c,	// (0x0003471f) list_single_graphic_heading_pane_t1

0x646b,	// (0x0003650e) list_single_graphic_heading_pane_t2_ParamLimits

0x646b,	// (0x0003650e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003f683) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003f683) list_single_graphic_heading_pane_t

0x647d,	// (0x00036520) list_single_large_graphic_pane_g1_ParamLimits

0x647d,	// (0x00036520) list_single_large_graphic_pane_g1

0x4dde,	// (0x00034e81) list_single_large_graphic_pane_g2_ParamLimits

0x4dde,	// (0x00034e81) list_single_large_graphic_pane_g2

0x6489,	// (0x0003652c) list_single_large_graphic_pane_g3_ParamLimits

0x6489,	// (0x0003652c) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003f688) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003f688) list_single_large_graphic_pane_g

0xa31c,	// (0x0003a3bf) wait_border_pane_g2_copy1

0x6495,	// (0x00036538) list_single_large_graphic_pane_g4_cp2

0x649d,	// (0x00036540) list_single_large_graphic_pane_t1_ParamLimits

0x649d,	// (0x00036540) list_single_large_graphic_pane_t1

0x64b3,	// (0x00036556) list_double_pane_g1_ParamLimits

0x64b3,	// (0x00036556) list_double_pane_g1

0x64bf,	// (0x00036562) list_double_pane_g2_ParamLimits

0x64bf,	// (0x00036562) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003f68f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003f68f) list_double_pane_g

0x64cb,	// (0x0003656e) list_double_pane_t1_ParamLimits

0x64cb,	// (0x0003656e) list_double_pane_t1

0x64e1,	// (0x00036584) list_double_pane_t2_ParamLimits

0x64e1,	// (0x00036584) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003f694) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003f694) list_double_pane_t

0x64f3,	// (0x00036596) list_double2_pane_g1_ParamLimits

0x64f3,	// (0x00036596) list_double2_pane_g1

0x470e,	// (0x000347b1) list_double2_pane_g2_ParamLimits

0x470e,	// (0x000347b1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003f699) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003f699) list_double2_pane_g

0x6504,	// (0x000365a7) list_double2_pane_t1_ParamLimits

0x6504,	// (0x000365a7) list_double2_pane_t1

0x651a,	// (0x000365bd) list_double2_pane_t2_ParamLimits

0x651a,	// (0x000365bd) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003f69e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003f69e) list_double2_pane_t

0x64b3,	// (0x00036556) list_double_number_pane_g1_ParamLimits

0x64b3,	// (0x00036556) list_double_number_pane_g1

0x64bf,	// (0x00036562) list_double_number_pane_g2_ParamLimits

0x64bf,	// (0x00036562) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003f68f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003f68f) list_double_number_pane_g

0x652c,	// (0x000365cf) list_double_number_pane_t1_ParamLimits

0x652c,	// (0x000365cf) list_double_number_pane_t1

0x653e,	// (0x000365e1) list_double_number_pane_t2_ParamLimits

0x653e,	// (0x000365e1) list_double_number_pane_t2

0x6554,	// (0x000365f7) list_double_number_pane_t3_ParamLimits

0x6554,	// (0x000365f7) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003f6a3) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003f6a3) list_double_number_pane_t

0x6566,	// (0x00036609) list_double_graphic_pane_g1_ParamLimits

0x6566,	// (0x00036609) list_double_graphic_pane_g1

0x6572,	// (0x00036615) list_double_graphic_pane_g2_ParamLimits

0x6572,	// (0x00036615) list_double_graphic_pane_g2

0x6581,	// (0x00036624) list_double_graphic_pane_g3_ParamLimits

0x6581,	// (0x00036624) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003f6aa) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003f6aa) list_double_graphic_pane_g

0x653e,	// (0x000365e1) list_double_graphic_pane_t1_ParamLimits

0x653e,	// (0x000365e1) list_double_graphic_pane_t1

0x6554,	// (0x000365f7) list_double_graphic_pane_t2_ParamLimits

0x6554,	// (0x000365f7) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003f6b3) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003f6b3) list_double_graphic_pane_t

0x6599,	// (0x0003663c) list_double2_graphic_pane_g1_ParamLimits

0x6599,	// (0x0003663c) list_double2_graphic_pane_g1

0x64b3,	// (0x00036556) list_double2_graphic_pane_g2_ParamLimits

0x64b3,	// (0x00036556) list_double2_graphic_pane_g2

0x64bf,	// (0x00036562) list_double2_graphic_pane_g3_ParamLimits

0x64bf,	// (0x00036562) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003f6b8) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003f6b8) list_double2_graphic_pane_g

0x65a5,	// (0x00036648) list_double2_graphic_pane_t1_ParamLimits

0x65a5,	// (0x00036648) list_double2_graphic_pane_t1

0x65bb,	// (0x0003665e) list_double2_graphic_pane_t2_ParamLimits

0x65bb,	// (0x0003665e) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003f6bf) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003f6bf) list_double2_graphic_pane_t

0x65cd,	// (0x00036670) list_double_large_graphic_pane_g1_ParamLimits

0x65cd,	// (0x00036670) list_double_large_graphic_pane_g1

0x65ec,	// (0x0003668f) list_double_large_graphic_pane_g2_ParamLimits

0x65ec,	// (0x0003668f) list_double_large_graphic_pane_g2

0x64bf,	// (0x00036562) list_double_large_graphic_pane_g3_ParamLimits

0x64bf,	// (0x00036562) list_double_large_graphic_pane_g3

0x65fd,	// (0x000366a0) list_double_large_graphic_pane_g4_ParamLimits

0x65fd,	// (0x000366a0) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003f6c4) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003f6c4) list_double_large_graphic_pane_g

0x6610,	// (0x000366b3) list_double_large_graphic_pane_t1_ParamLimits

0x6610,	// (0x000366b3) list_double_large_graphic_pane_t1

0x6629,	// (0x000366cc) list_double_large_graphic_pane_t2_ParamLimits

0x6629,	// (0x000366cc) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003f6cf) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003f6cf) list_double_large_graphic_pane_t

0x663b,	// (0x000366de) list_double2_large_graphic_pane_g1_ParamLimits

0x663b,	// (0x000366de) list_double2_large_graphic_pane_g1

0x6647,	// (0x000366ea) list_double2_large_graphic_pane_g2_ParamLimits

0x6647,	// (0x000366ea) list_double2_large_graphic_pane_g2

0x6658,	// (0x000366fb) list_double2_large_graphic_pane_g3_ParamLimits

0x6658,	// (0x000366fb) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003f6d4) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003f6d4) list_double2_large_graphic_pane_g

0x65a5,	// (0x00036648) list_double2_large_graphic_pane_t1_ParamLimits

0x65a5,	// (0x00036648) list_double2_large_graphic_pane_t1

0x65bb,	// (0x0003665e) list_double2_large_graphic_pane_t2_ParamLimits

0x65bb,	// (0x0003665e) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003f6bf) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003f6bf) list_double2_large_graphic_pane_t

0x6664,	// (0x00036707) list_double_heading_pane_g1_ParamLimits

0x6664,	// (0x00036707) list_double_heading_pane_g1

0x6675,	// (0x00036718) list_double_heading_pane_g2_ParamLimits

0x6675,	// (0x00036718) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0003f6db) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0003f6db) list_double_heading_pane_g

0x6681,	// (0x00036724) list_double_heading_pane_t1_ParamLimits

0x6681,	// (0x00036724) list_double_heading_pane_t1

0x6697,	// (0x0003673a) list_double_heading_pane_t2_ParamLimits

0x6697,	// (0x0003673a) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0003f6e0) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0003f6e0) list_double_heading_pane_t

0x6599,	// (0x0003663c) list_double_graphic_heading_pane_g1_ParamLimits

0x6599,	// (0x0003663c) list_double_graphic_heading_pane_g1

0x6664,	// (0x00036707) list_double_graphic_heading_pane_g2_ParamLimits

0x6664,	// (0x00036707) list_double_graphic_heading_pane_g2

0x6675,	// (0x00036718) list_double_graphic_heading_pane_g3_ParamLimits

0x6675,	// (0x00036718) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0003f6e5) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0003f6e5) list_double_graphic_heading_pane_g

0x6681,	// (0x00036724) list_double_graphic_heading_pane_t1_ParamLimits

0x6681,	// (0x00036724) list_double_graphic_heading_pane_t1

0x6697,	// (0x0003673a) list_double_graphic_heading_pane_t2_ParamLimits

0x6697,	// (0x0003673a) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0003f6e0) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0003f6e0) list_double_graphic_heading_pane_t

0x65ec,	// (0x0003668f) list_double_time_pane_g1_ParamLimits

0x65ec,	// (0x0003668f) list_double_time_pane_g1

0x64bf,	// (0x00036562) list_double_time_pane_g2_ParamLimits

0x64bf,	// (0x00036562) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0003f6ec) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0003f6ec) list_double_time_pane_g

0x66a9,	// (0x0003674c) list_double_time_pane_t1_ParamLimits

0x66a9,	// (0x0003674c) list_double_time_pane_t1

0x66bf,	// (0x00036762) list_double_time_pane_t2_ParamLimits

0x66bf,	// (0x00036762) list_double_time_pane_t2

0x66d1,	// (0x00036774) list_double_time_pane_t3_ParamLimits

0x66d1,	// (0x00036774) list_double_time_pane_t3

0x66e3,	// (0x00036786) list_double_time_pane_t4_ParamLimits

0x66e3,	// (0x00036786) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0003f6f1) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0003f6f1) list_double_time_pane_t

0x4c19,	// (0x00034cbc) list_setting_pane_g1_ParamLimits

0x4c19,	// (0x00034cbc) list_setting_pane_g1

0x6675,	// (0x00036718) list_setting_pane_g2_ParamLimits

0x6675,	// (0x00036718) list_setting_pane_g2

0x0001,

0xf657,	// (0x0003f6fa) list_setting_pane_g_ParamLimits

0xf657,	// (0x0003f6fa) list_setting_pane_g

0x66f5,	// (0x00036798) list_setting_pane_t1_ParamLimits

0x66f5,	// (0x00036798) list_setting_pane_t1

0x670c,	// (0x000367af) list_setting_pane_t2_ParamLimits

0x670c,	// (0x000367af) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0003f6ff) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0003f6ff) list_setting_pane_t

0x6749,	// (0x000367ec) set_value_pane_cp_ParamLimits

0x6749,	// (0x000367ec) set_value_pane_cp

0x6755,	// (0x000367f8) list_setting_number_pane_g1_ParamLimits

0x6755,	// (0x000367f8) list_setting_number_pane_g1

0x6761,	// (0x00036804) list_setting_number_pane_g2_ParamLimits

0x6761,	// (0x00036804) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0003f706) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0003f706) list_setting_number_pane_g

0x676d,	// (0x00036810) list_setting_number_pane_t1_ParamLimits

0x676d,	// (0x00036810) list_setting_number_pane_t1

0x6781,	// (0x00036824) list_setting_number_pane_t2_ParamLimits

0x6781,	// (0x00036824) list_setting_number_pane_t2

0x6798,	// (0x0003683b) list_setting_number_pane_t3_ParamLimits

0x6798,	// (0x0003683b) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0003f70b) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0003f70b) list_setting_number_pane_t

0x6749,	// (0x000367ec) set_value_pane_ParamLimits

0x6749,	// (0x000367ec) set_value_pane

0x2701,	// (0x000327a4) bg_set_opt_pane_ParamLimits

0x2701,	// (0x000327a4) bg_set_opt_pane

0x67db,	// (0x0003687e) set_value_pane_t1

0x2722,	// (0x000327c5) slider_set_pane_cp3

0x67e9,	// (0x0003688c) volume_small_pane_cp

0x272b,	// (0x000327ce) list_form_gen_pane

0x2734,	// (0x000327d7) scroll_pane_cp8

0x67f2,	// (0x00036895) form_field_data_pane_ParamLimits

0x67f2,	// (0x00036895) form_field_data_pane

0x680a,	// (0x000368ad) form_field_data_wide_pane_ParamLimits

0x680a,	// (0x000368ad) form_field_data_wide_pane

0x682b,	// (0x000368ce) form_field_popup_pane_ParamLimits

0x682b,	// (0x000368ce) form_field_popup_pane

0x6849,	// (0x000368ec) form_field_popup_wide_pane_ParamLimits

0x6849,	// (0x000368ec) form_field_popup_wide_pane

0x473f,	// (0x000347e2) form_field_slider_pane_ParamLimits

0x473f,	// (0x000347e2) form_field_slider_pane

0x6866,	// (0x00036909) form_field_slider_wide_pane_ParamLimits

0x6866,	// (0x00036909) form_field_slider_wide_pane

0x2745,	// (0x000327e8) data_form_pane

0x6883,	// (0x00036926) form_field_data_pane_t1

0x2751,	// (0x000327f4) input_focus_pane

0x689b,	// (0x0003693e) data_form_wide_pane

0x68b8,	// (0x0003695b) form_field_data_wide_pane_t1

0x2645,	// (0x000326e8) input_focus_pane_cp6

0x68da,	// (0x0003697d) form_field_popup_pane_t1

0x2751,	// (0x000327f4) input_focus_pane_cp7

0x277f,	// (0x00032822) list_form_pane

0x68fa,	// (0x0003699d) form_field_popup_wide_pane_t1

0x2751,	// (0x000327f4) input_focus_pane_cp8

0x278b,	// (0x0003282e) list_form_wide_pane

0x6917,	// (0x000369ba) form_field_slider_pane_t1_ParamLimits

0x6917,	// (0x000369ba) form_field_slider_pane_t1

0x692d,	// (0x000369d0) form_field_slider_pane_t2_ParamLimits

0x692d,	// (0x000369d0) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0003f71b) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0003f71b) form_field_slider_pane_t

0x2391,	// (0x00032434) input_focus_pane_cp9_ParamLimits

0x2391,	// (0x00032434) input_focus_pane_cp9

0x6942,	// (0x000369e5) slider_cont_pane_ParamLimits

0x6942,	// (0x000369e5) slider_cont_pane

0x2797,	// (0x0003283a) form_field_slider_wide_pane_t1_ParamLimits

0x2797,	// (0x0003283a) form_field_slider_wide_pane_t1

0x6956,	// (0x000369f9) form_field_slider_wide_pane_t2_ParamLimits

0x6956,	// (0x000369f9) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0003f720) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0003f720) form_field_slider_wide_pane_t

0x2391,	// (0x00032434) input_focus_pane_cp10_ParamLimits

0x2391,	// (0x00032434) input_focus_pane_cp10

0x6968,	// (0x00036a0b) slider_cont_pane_cp1_ParamLimits

0x6968,	// (0x00036a0b) slider_cont_pane_cp1

0x697c,	// (0x00036a1f) slider_form_pane_cp

0x27a9,	// (0x0003284c) input_focus_pane_g1

0x27b1,	// (0x00032854) input_focus_pane_g2

0x27b9,	// (0x0003285c) input_focus_pane_g3

0x27c1,	// (0x00032864) input_focus_pane_g4

0x27c9,	// (0x0003286c) input_focus_pane_g5

0x27d1,	// (0x00032874) input_focus_pane_g6

0x27d9,	// (0x0003287c) input_focus_pane_g7

0x27e1,	// (0x00032884) input_focus_pane_g8

0x27e9,	// (0x0003288c) input_focus_pane_g9

0x2339,	// (0x000323dc) input_focus_pane_g10

0x0009,

0xf682,	// (0x0003f725) input_focus_pane_g

0xa325,	// (0x0003a3c8) wait_border_pane_g3_copy1

0x6984,	// (0x00036a27) data_form_pane_t1

0x2339,	// (0x000323dc) wait_anim_pane_g1_copy1

0x808c,	// (0x0003812f) data_form_wide_pane_t1

0x699f,	// (0x00036a42) list_form_graphic_pane_cp_ParamLimits

0x699f,	// (0x00036a42) list_form_graphic_pane_cp

0xb214,	// (0x0003b2b7) slider_form_pane_g1

0xb21d,	// (0x0003b2c0) slider_form_pane_g2

0x0006,

0xf980,	// (0x0003fa23) slider_form_pane_g

0x69b3,	// (0x00036a56) list_form_graphic_pane_ParamLimits

0x69b3,	// (0x00036a56) list_form_graphic_pane

0x69ca,	// (0x00036a6d) list_form_graphic_pane_g1

0x69d2,	// (0x00036a75) list_form_graphic_pane_t1_ParamLimits

0x69d2,	// (0x00036a75) list_form_graphic_pane_t1

0x239f,	// (0x00032442) list_highlight_pane_cp5_ParamLimits

0x239f,	// (0x00032442) list_highlight_pane_cp5

0x4752,	// (0x000347f5) find_pane_g1

0x27f1,	// (0x00032894) input_find_pane

0x69e7,	// (0x00036a8a) input_find_pane_g1_ParamLimits

0x69e7,	// (0x00036a8a) input_find_pane_g1

0x69f3,	// (0x00036a96) input_find_pane_t1_ParamLimits

0x69f3,	// (0x00036a96) input_find_pane_t1

0x6a08,	// (0x00036aab) input_find_pane_t2_ParamLimits

0x6a08,	// (0x00036aab) input_find_pane_t2

0x0001,

0xf697,	// (0x0003f73a) input_find_pane_t_ParamLimits

0xf697,	// (0x0003f73a) input_find_pane_t

0x27fa,	// (0x0003289d) input_focus_pane_cp5_ParamLimits

0x27fa,	// (0x0003289d) input_focus_pane_cp5

0x2808,	// (0x000328ab) bg_popup_window_pane_cp2_ParamLimits

0x2808,	// (0x000328ab) bg_popup_window_pane_cp2

0x2815,	// (0x000328b8) listscroll_menu_pane_ParamLimits

0x2815,	// (0x000328b8) listscroll_menu_pane

0x6a29,	// (0x00036acc) popup_submenu_window_ParamLimits

0x6a29,	// (0x00036acc) popup_submenu_window

0x2821,	// (0x000328c4) find_popup_pane_g1

0x6a51,	// (0x00036af4) input_popup_find_pane_cp

0x27fa,	// (0x0003289d) input_focus_pane_cp4_ParamLimits

0x27fa,	// (0x0003289d) input_focus_pane_cp4

0x2829,	// (0x000328cc) input_popup_find_pane_t1_ParamLimits

0x2829,	// (0x000328cc) input_popup_find_pane_t1

0x2343,	// (0x000323e6) bg_popup_sub_pane_cp

0x2857,	// (0x000328fa) listscroll_popup_sub_pane

0x285f,	// (0x00032902) list_submenu_pane_ParamLimits

0x285f,	// (0x00032902) list_submenu_pane

0x2870,	// (0x00032913) scroll_pane_cp4

0x6a69,	// (0x00036b0c) list_single_popup_submenu_pane_ParamLimits

0x6a69,	// (0x00036b0c) list_single_popup_submenu_pane

0x2d7a,	// (0x00032e1d) list_single_popup_submenu_pane_g1

0x6a7d,	// (0x00036b20) list_single_popup_submenu_pane_t1_ParamLimits

0x6a7d,	// (0x00036b20) list_single_popup_submenu_pane_t1

0x239f,	// (0x00032442) bg_active_tab_pane_cp1_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp1

0x2878,	// (0x0003291b) tabs_2_active_pane_g1

0x6a92,	// (0x00036b35) tabs_2_active_pane_t1

0x239f,	// (0x00032442) bg_passive_tab_pane_cp1_ParamLimits

0x239f,	// (0x00032442) bg_passive_tab_pane_cp1

0x2878,	// (0x0003291b) tabs_2_passive_pane_g1

0x6a92,	// (0x00036b35) tabs_2_passive_pane_t1

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp4

0x6aa4,	// (0x00036b47) tabs_2_long_active_pane_t1

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp4

0x7d2e,	// (0x00037dd1) list_single_midp_graphic_pane_g4_ParamLimits

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp5

0x6ac3,	// (0x00036b66) tabs_3_long_active_pane_t1

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp5

0x7d2e,	// (0x00037dd1) list_single_midp_graphic_pane_g4

0x239f,	// (0x00032442) bg_popup_window_pane_cp13_ParamLimits

0x239f,	// (0x00032442) bg_popup_window_pane_cp13

0x2880,	// (0x00032923) listscroll_popup_fast_pane_ParamLimits

0x2880,	// (0x00032923) listscroll_popup_fast_pane

0x288c,	// (0x0003292f) grid_popup_fast_pane_ParamLimits

0x288c,	// (0x0003292f) grid_popup_fast_pane

0x289e,	// (0x00032941) scroll_pane_cp9_ParamLimits

0x289e,	// (0x00032941) scroll_pane_cp9

0xcb1e,	// (0x0003cbc1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb1e,	// (0x0003cbc1) list_single_graphic_hl_pane_t1_cp2

0x28b1,	// (0x00032954) input_focus_pane_cp20_ParamLimits

0x28b1,	// (0x00032954) input_focus_pane_cp20

0x28bf,	// (0x00032962) query_popup_data_pane_t1_ParamLimits

0x28bf,	// (0x00032962) query_popup_data_pane_t1

0x28d2,	// (0x00032975) query_popup_data_pane_t2_ParamLimits

0x28d2,	// (0x00032975) query_popup_data_pane_t2

0x2918,	// (0x000329bb) query_popup_data_pane_t3_ParamLimits

0x2918,	// (0x000329bb) query_popup_data_pane_t3

0x2959,	// (0x000329fc) query_popup_data_pane_t4_ParamLimits

0x2959,	// (0x000329fc) query_popup_data_pane_t4

0x2995,	// (0x00032a38) query_popup_data_pane_t5_ParamLimits

0x2995,	// (0x00032a38) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0003f73f) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0003f73f) query_popup_data_pane_t

0x27a9,	// (0x0003284c) bg_set_opt_pane_g1

0x27b1,	// (0x00032854) bg_set_opt_pane_g2

0x27b9,	// (0x0003285c) bg_set_opt_pane_g3

0x27c1,	// (0x00032864) bg_set_opt_pane_g4

0x27c9,	// (0x0003286c) bg_set_opt_pane_g5

0x27d1,	// (0x00032874) bg_set_opt_pane_g6

0x27d9,	// (0x0003287c) bg_set_opt_pane_g7

0x27e1,	// (0x00032884) bg_set_opt_pane_g8

0x27e9,	// (0x0003288c) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0003f74a) bg_set_opt_pane_g

0x7120,	// (0x000371c3) control_top_pane_stacon_ParamLimits

0x7120,	// (0x000371c3) control_top_pane_stacon

0x7173,	// (0x00037216) signal_pane_stacon_ParamLimits

0x7173,	// (0x00037216) signal_pane_stacon

0x7198,	// (0x0003723b) stacon_top_pane_g1_ParamLimits

0x7198,	// (0x0003723b) stacon_top_pane_g1

0x71ba,	// (0x0003725d) title_pane_stacon_ParamLimits

0x71ba,	// (0x0003725d) title_pane_stacon

0x71e4,	// (0x00037287) uni_indicator_pane_stacon_ParamLimits

0x71e4,	// (0x00037287) uni_indicator_pane_stacon

0x71f9,	// (0x0003729c) battery_pane_stacon_ParamLimits

0x71f9,	// (0x0003729c) battery_pane_stacon

0x723d,	// (0x000372e0) control_bottom_pane_stacon_ParamLimits

0x723d,	// (0x000372e0) control_bottom_pane_stacon

0x7260,	// (0x00037303) navi_pane_stacon_ParamLimits

0x7260,	// (0x00037303) navi_pane_stacon

0x7283,	// (0x00037326) stacon_bottom_pane_g1_ParamLimits

0x7283,	// (0x00037326) stacon_bottom_pane_g1

0x6aef,	// (0x00036b92) aid_levels_signal_lsc_ParamLimits

0x6aef,	// (0x00036b92) aid_levels_signal_lsc

0x6b05,	// (0x00036ba8) signal_pane_stacon_g1_ParamLimits

0x6b05,	// (0x00036ba8) signal_pane_stacon_g1

0x6b19,	// (0x00036bbc) signal_pane_stacon_g2_ParamLimits

0x6b19,	// (0x00036bbc) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0003f75d) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003f75d) signal_pane_stacon_g

0x6b4e,	// (0x00036bf1) title_pane_stacon_t1_ParamLimits

0x6b4e,	// (0x00036bf1) title_pane_stacon_t1

0x29ed,	// (0x00032a90) uni_indicator_pane_stacon_g1

0x29f7,	// (0x00032a9a) uni_indicator_pane_stacon_g2

0x29d9,	// (0x00032a7c) uni_indicator_pane_stacon_g3

0x29e3,	// (0x00032a86) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0003f769) uni_indicator_pane_stacon_g

0x6b73,	// (0x00036c16) control_top_pane_stacon_g1

0x6b7b,	// (0x00036c1e) control_top_pane_stacon_t1_ParamLimits

0x6b7b,	// (0x00036c1e) control_top_pane_stacon_t1

0x6bb2,	// (0x00036c55) aid_levels_battery_lsc_ParamLimits

0x6bb2,	// (0x00036c55) aid_levels_battery_lsc

0x6bc9,	// (0x00036c6c) battery_pane_stacon_g1_ParamLimits

0x6bc9,	// (0x00036c6c) battery_pane_stacon_g1

0x6bdc,	// (0x00036c7f) battery_pane_stacon_g2_ParamLimits

0x6bdc,	// (0x00036c7f) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003f772) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003f772) battery_pane_stacon_g

0x6c1a,	// (0x00036cbd) navi_icon_pane_stacon

0x6c2e,	// (0x00036cd1) navi_navi_pane_stacon

0x6c1a,	// (0x00036cbd) navi_text_pane_stacon

0x6b73,	// (0x00036c16) control_bottom_pane_stacon_g1

0x6c42,	// (0x00036ce5) control_bottom_pane_stacon_t1_ParamLimits

0x6c42,	// (0x00036ce5) control_bottom_pane_stacon_t1

0x6c79,	// (0x00036d1c) grid_app_pane_ParamLimits

0x6c79,	// (0x00036d1c) grid_app_pane

0x6c9d,	// (0x00036d40) scroll_pane_cp15_ParamLimits

0x6c9d,	// (0x00036d40) scroll_pane_cp15

0x6cb0,	// (0x00036d53) cell_app_pane_ParamLimits

0x6cb0,	// (0x00036d53) cell_app_pane

0x6cd8,	// (0x00036d7b) cell_app_pane_g1_ParamLimits

0x6cd8,	// (0x00036d7b) cell_app_pane_g1

0x2a1b,	// (0x00032abe) cell_app_pane_g2_ParamLimits

0x2a1b,	// (0x00032abe) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0003f777) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0003f777) cell_app_pane_g

0x6cfc,	// (0x00036d9f) cell_app_pane_t1_ParamLimits

0x6cfc,	// (0x00036d9f) cell_app_pane_t1

0x2a27,	// (0x00032aca) grid_highlight_pane_ParamLimits

0x2a27,	// (0x00032aca) grid_highlight_pane

0x27a9,	// (0x0003284c) cell_highlight_pane_g1

0x27b1,	// (0x00032854) cell_highlight_pane_g2

0x27b9,	// (0x0003285c) cell_highlight_pane_g3

0x27c1,	// (0x00032864) cell_highlight_pane_g4

0x27c9,	// (0x0003286c) cell_highlight_pane_g5

0x27d1,	// (0x00032874) cell_highlight_pane_g6

0x27d9,	// (0x0003287c) cell_highlight_pane_g7

0x27e1,	// (0x00032884) cell_highlight_pane_g8

0x27e9,	// (0x0003288c) cell_highlight_pane_g9

0x2339,	// (0x000323dc) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0003f725) cell_highlight_pane_g

0x2a38,	// (0x00032adb) bg_scroll_pane

0x6d26,	// (0x00036dc9) scroll_handle_pane

0x2a7f,	// (0x00032b22) scroll_bg_pane_g1

0x2a94,	// (0x00032b37) scroll_bg_pane_g2

0x2aac,	// (0x00032b4f) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0003f77c) scroll_bg_pane_g

0x6d4f,	// (0x00036df2) scroll_handle_focus_pane_ParamLimits

0x6d4f,	// (0x00036df2) scroll_handle_focus_pane

0x2a7f,	// (0x00032b22) scroll_handle_pane_g1

0x2ac1,	// (0x00032b64) scroll_handle_pane_g2

0x2aac,	// (0x00032b4f) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0003f783) scroll_handle_pane_g

0x27fa,	// (0x0003289d) bg_popup_sub_pane_cp21_ParamLimits

0x27fa,	// (0x0003289d) bg_popup_sub_pane_cp21

0x6d5c,	// (0x00036dff) popup_fep_japan_predictive_window_t1_ParamLimits

0x6d5c,	// (0x00036dff) popup_fep_japan_predictive_window_t1

0x6d76,	// (0x00036e19) popup_fep_japan_predictive_window_t2_ParamLimits

0x6d76,	// (0x00036e19) popup_fep_japan_predictive_window_t2

0x6da9,	// (0x00036e4c) popup_fep_japan_predictive_window_t3_ParamLimits

0x6da9,	// (0x00036e4c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0003f78a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0003f78a) popup_fep_japan_predictive_window_t

0x2343,	// (0x000323e6) bg_popup_sub_pane_cp23

0x36ba,	// (0x0003375d) listscroll_japin_cand_pane

0x2ad5,	// (0x00032b78) popup_fep_japan_candidate_window_t1

0x2ae3,	// (0x00032b86) candidate_pane_ParamLimits

0x2ae3,	// (0x00032b86) candidate_pane

0x6de0,	// (0x00036e83) scroll_pane_cp30

0x2af5,	// (0x00032b98) list_single_popup_jap_candidate_pane_ParamLimits

0x2af5,	// (0x00032b98) list_single_popup_jap_candidate_pane

0x2343,	// (0x000323e6) list_highlight_pane_cp30

0x2b0a,	// (0x00032bad) list_single_popup_jap_candidate_pane_t1

0x2b19,	// (0x00032bbc) level_1_signal

0x2b26,	// (0x00032bc9) level_2_signal

0x2b33,	// (0x00032bd6) level_3_signal

0x2b40,	// (0x00032be3) level_4_signal

0x2b4d,	// (0x00032bf0) level_5_signal

0x2b5a,	// (0x00032bfd) level_6_signal

0x2b67,	// (0x00032c0a) level_7_signal

0x2b19,	// (0x00032bbc) level_1_battery

0x2b26,	// (0x00032bc9) level_2_battery

0x2b33,	// (0x00032bd6) level_3_battery

0x2b40,	// (0x00032be3) level_4_battery

0x2b4d,	// (0x00032bf0) level_5_battery

0x2b5a,	// (0x00032bfd) level_6_battery

0x2b67,	// (0x00032c0a) level_7_battery

0x2b8c,	// (0x00032c2f) list_menu_pane_ParamLimits

0x2b8c,	// (0x00032c2f) list_menu_pane

0x2ba2,	// (0x00032c45) scroll_pane_cp25_ParamLimits

0x2ba2,	// (0x00032c45) scroll_pane_cp25

0x2bbb,	// (0x00032c5e) list_double2_graphic_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double2_graphic_pane_cp2

0x2bbb,	// (0x00032c5e) list_double2_large_graphic_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double2_large_graphic_pane_cp2

0x2bbb,	// (0x00032c5e) list_double2_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double2_pane_cp2

0x2bbb,	// (0x00032c5e) list_double_graphic_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double_graphic_pane_cp2

0x2bbb,	// (0x00032c5e) list_double_large_graphic_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double_large_graphic_pane_cp2

0x2bbb,	// (0x00032c5e) list_double_number_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double_number_pane_cp2

0x2bbb,	// (0x00032c5e) list_double_pane_cp2_ParamLimits

0x2bbb,	// (0x00032c5e) list_double_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_2graphic_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_2graphic_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_graphic_heading_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_graphic_heading_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_graphic_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_graphic_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_heading_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_heading_pane_cp2

0x2bcb,	// (0x00032c6e) list_single_large_graphic_pane_cp2_ParamLimits

0x2bcb,	// (0x00032c6e) list_single_large_graphic_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_number_heading_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_number_heading_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_number_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_number_pane_cp2

0x6e1b,	// (0x00036ebe) list_single_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_pane_cp2

0x2be5,	// (0x00032c88) bg_popup_sub_pane_cp22

0x6ef3,	// (0x00036f96) popup_side_volume_key_window_g1

0x6f17,	// (0x00036fba) popup_side_volume_key_window_t1

0x6f33,	// (0x00036fd6) volume_small_pane_cp1

0x2391,	// (0x00032434) bg_popup_sub_pane_cp24_ParamLimits

0x2391,	// (0x00032434) bg_popup_sub_pane_cp24

0x2bfb,	// (0x00032c9e) fep_china_uni_candidate_pane_ParamLimits

0x2bfb,	// (0x00032c9e) fep_china_uni_candidate_pane

0x2c0f,	// (0x00032cb2) fep_china_uni_entry_pane

0x2c1f,	// (0x00032cc2) popup_fep_china_uni_window_g1

0x6f3b,	// (0x00036fde) fep_china_uni_entry_pane_g1

0x6f43,	// (0x00036fe6) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0003f7bb) fep_china_uni_entry_pane_g

0x6f4b,	// (0x00036fee) fep_entry_item_pane

0x6f55,	// (0x00036ff8) fep_candidate_item_pane

0x6f5d,	// (0x00037000) fep_china_uni_candidate_pane_g1

0x6f65,	// (0x00037008) fep_china_uni_candidate_pane_g2

0x6f6d,	// (0x00037010) fep_china_uni_candidate_pane_g3

0x6f75,	// (0x00037018) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0003f7c0) fep_china_uni_candidate_pane_g

0x2339,	// (0x000323dc) fep_entry_item_pane_g1

0x6f7d,	// (0x00037020) fep_entry_item_pane_t1_ParamLimits

0x6f7d,	// (0x00037020) fep_entry_item_pane_t1

0x6f93,	// (0x00037036) fep_candidate_item_pane_t1_ParamLimits

0x6f93,	// (0x00037036) fep_candidate_item_pane_t1

0x6fa8,	// (0x0003704b) fep_candidate_item_pane_t2_ParamLimits

0x6fa8,	// (0x0003704b) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0003f7c9) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0003f7c9) fep_candidate_item_pane_t

0x239f,	// (0x00032442) list_highlight_pane_cp31_ParamLimits

0x239f,	// (0x00032442) list_highlight_pane_cp31

0x6fba,	// (0x0003705d) level_1_signal_lsc

0x6fc3,	// (0x00037066) level_2_signal_lsc

0x6fcc,	// (0x0003706f) level_3_signal_lsc

0x6fd5,	// (0x00037078) level_4_signal_lsc

0x6fde,	// (0x00037081) level_5_signal_lsc

0x6fe7,	// (0x0003708a) level_6_signal_lsc

0x6ff0,	// (0x00037093) level_7_signal_lsc

0x6ff0,	// (0x00037093) level_1_battery_lsc

0x6ff9,	// (0x0003709c) level_2_battery_lsc

0x7002,	// (0x000370a5) level_3_battery_lsc

0x700b,	// (0x000370ae) level_4_battery_lsc

0x7014,	// (0x000370b7) level_5_battery_lsc

0x701d,	// (0x000370c0) level_6_battery_lsc

0x6fba,	// (0x0003705d) level_7_battery_lsc

0x7026,	// (0x000370c9) scroll_handle_focus_pane_g1

0x702f,	// (0x000370d2) scroll_handle_focus_pane_g2

0x7038,	// (0x000370db) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0003f7ce) scroll_handle_focus_pane_g

0x7041,	// (0x000370e4) list_single_2graphic_pane_g1_ParamLimits

0x7041,	// (0x000370e4) list_single_2graphic_pane_g1

0x645a,	// (0x000364fd) list_single_2graphic_pane_g2_ParamLimits

0x645a,	// (0x000364fd) list_single_2graphic_pane_g2

0x465a,	// (0x000346fd) list_single_2graphic_pane_g3_ParamLimits

0x465a,	// (0x000346fd) list_single_2graphic_pane_g3

0x704d,	// (0x000370f0) list_single_2graphic_pane_g4_ParamLimits

0x704d,	// (0x000370f0) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0003f7d5) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0003f7d5) list_single_2graphic_pane_g

0x7059,	// (0x000370fc) list_single_2graphic_pane_t1_ParamLimits

0x7059,	// (0x000370fc) list_single_2graphic_pane_t1

0x7087,	// (0x0003712a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7087,	// (0x0003712a) list_double2_graphic_large_graphic_pane_g1

0x6647,	// (0x000366ea) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6647,	// (0x000366ea) list_double2_graphic_large_graphic_pane_g2

0x6658,	// (0x000366fb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6658,	// (0x000366fb) list_double2_graphic_large_graphic_pane_g3

0x7097,	// (0x0003713a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7097,	// (0x0003713a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0003f7de) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0003f7de) list_double2_graphic_large_graphic_pane_g

0x70a3,	// (0x00037146) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x70a3,	// (0x00037146) list_double2_graphic_large_graphic_pane_t1

0x70b9,	// (0x0003715c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x70b9,	// (0x0003715c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0003f7e7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0003f7e7) list_double2_graphic_large_graphic_pane_t

0x734a,	// (0x000373ed) popup_fast_swap_window_ParamLimits

0x734a,	// (0x000373ed) popup_fast_swap_window

0x7366,	// (0x00037409) popup_side_volume_key_window

0x7380,	// (0x00037423) stacon_top_pane

0x738a,	// (0x0003742d) status_pane_ParamLimits

0x738a,	// (0x0003742d) status_pane

0x7398,	// (0x0003743b) status_small_pane

0x2343,	// (0x000323e6) control_pane

0x2343,	// (0x000323e6) stacon_bottom_pane

0x2734,	// (0x000327d7) scroll_pane_cp121

0x272b,	// (0x000327ce) set_content_pane

0x70cb,	// (0x0003716e) bg_active_tab_pane_g1_cp1

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp1

0x70dd,	// (0x00037180) bg_active_tab_pane_g3_cp1

0x70cb,	// (0x0003716e) bg_passive_tab_pane_g1_cp1

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp1

0x70dd,	// (0x00037180) bg_passive_tab_pane_g3_cp1

0x70e6,	// (0x00037189) bg_active_tab_pane_g1_cp2

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp2

0x70ef,	// (0x00037192) bg_active_tab_pane_g3_cp2

0x70e6,	// (0x00037189) bg_passive_tab_pane_g1_cp2

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp2

0x70ef,	// (0x00037192) bg_passive_tab_pane_g3_cp2

0x70f8,	// (0x0003719b) bg_active_tab_pane_g1_cp3

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp3

0x7101,	// (0x000371a4) bg_active_tab_pane_g3_cp3

0x70f8,	// (0x0003719b) bg_passive_tab_pane_g1_cp3

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp3

0x7101,	// (0x000371a4) bg_passive_tab_pane_g3_cp3

0x710a,	// (0x000371ad) bg_active_tab_pane_g1_cp4

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp4

0x7115,	// (0x000371b8) bg_active_tab_pane_g3_cp4

0x710a,	// (0x000371ad) bg_passive_tab_pane_g1_cp4

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp4

0x7115,	// (0x000371b8) bg_passive_tab_pane_g3_cp4

0x729f,	// (0x00037342) bg_active_tab_pane_g1_cp5

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp5

0x72a8,	// (0x0003734b) bg_active_tab_pane_g3_cp5

0x729f,	// (0x00037342) bg_passive_tab_pane_g1_cp5

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp5

0x72a8,	// (0x0003734b) bg_passive_tab_pane_g3_cp5

0x72b1,	// (0x00037354) list_set_graphic_pane_ParamLimits

0x72b1,	// (0x00037354) list_set_graphic_pane

0x2343,	// (0x000323e6) bg_set_opt_pane_cp4

0x72cf,	// (0x00037372) list_set_graphic_pane_g1_ParamLimits

0x72cf,	// (0x00037372) list_set_graphic_pane_g1

0x72db,	// (0x0003737e) list_set_graphic_pane_g2_ParamLimits

0x72db,	// (0x0003737e) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0003f7ec) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0003f7ec) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0003fb7f) volume_small_pane_cp_g

0x72fd,	// (0x000373a0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x72fd,	// (0x000373a0) list_double2_large_graphic_pane_g1_cp2

0x7309,	// (0x000373ac) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7309,	// (0x000373ac) list_double2_large_graphic_pane_g2_cp2

0x731a,	// (0x000373bd) list_double2_large_graphic_pane_g3_cp2

0x7322,	// (0x000373c5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7322,	// (0x000373c5) list_double2_large_graphic_pane_t1_cp2

0x7338,	// (0x000373db) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7338,	// (0x000373db) list_double2_large_graphic_pane_t2_cp2

0xadd6,	// (0x0003ae79) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd6,	// (0x0003ae79) list_double_large_graphic_pane_g1_cp2

0xade7,	// (0x0003ae8a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade7,	// (0x0003ae8a) list_double_large_graphic_pane_g2_cp2

0x74a5,	// (0x00037548) list_double_large_graphic_pane_g3_cp2

0xadf8,	// (0x0003ae9b) list_double_large_graphic_pane_g4_cp

0xae00,	// (0x0003aea3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae00,	// (0x0003aea3) list_double_large_graphic_pane_t1_cp2

0xae17,	// (0x0003aeba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae17,	// (0x0003aeba) list_double_large_graphic_pane_t2_cp2

0x73a3,	// (0x00037446) list_double2_graphic_pane_g1_cp2_ParamLimits

0x73a3,	// (0x00037446) list_double2_graphic_pane_g1_cp2

0x73b1,	// (0x00037454) list_double2_graphic_pane_g2_cp2_ParamLimits

0x73b1,	// (0x00037454) list_double2_graphic_pane_g2_cp2

0x73c2,	// (0x00037465) list_double2_graphic_pane_g3_cp2

0x73cc,	// (0x0003746f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x73cc,	// (0x0003746f) list_double2_graphic_pane_t1_cp2

0x73e2,	// (0x00037485) list_double2_graphic_pane_t2_cp2_ParamLimits

0x73e2,	// (0x00037485) list_double2_graphic_pane_t2_cp2

0x2c3b,	// (0x00032cde) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2c3b,	// (0x00032cde) list_single_number_heading_pane_g1_cp2

0x73f4,	// (0x00037497) list_single_number_heading_pane_g2_cp2

0x73fc,	// (0x0003749f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x73fc,	// (0x0003749f) list_single_number_heading_pane_t1_cp2

0x7412,	// (0x000374b5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7412,	// (0x000374b5) list_single_number_heading_pane_t2_cp2

0x7424,	// (0x000374c7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7424,	// (0x000374c7) list_single_number_heading_pane_t3_cp2

0x2c3b,	// (0x00032cde) list_single_heading_pane_g1_cp2_ParamLimits

0x2c3b,	// (0x00032cde) list_single_heading_pane_g1_cp2

0x73f4,	// (0x00037497) list_single_heading_pane_g2_cp2

0x73fc,	// (0x0003749f) list_single_heading_pane_t1_cp2_ParamLimits

0x73fc,	// (0x0003749f) list_single_heading_pane_t1_cp2

0xabe0,	// (0x0003ac83) list_single_heading_pane_t2_cp2_ParamLimits

0xabe0,	// (0x0003ac83) list_single_heading_pane_t2_cp2

0xab28,	// (0x0003abcb) list_double_graphic_pane_g1_cp2_ParamLimits

0xab28,	// (0x0003abcb) list_double_graphic_pane_g1_cp2

0xab34,	// (0x0003abd7) list_double_graphic_pane_g2_cp2_ParamLimits

0xab34,	// (0x0003abd7) list_double_graphic_pane_g2_cp2

0xab43,	// (0x0003abe6) list_double_graphic_pane_g3_cp2

0xab4b,	// (0x0003abee) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4b,	// (0x0003abee) list_double_graphic_pane_t1_cp2

0xab61,	// (0x0003ac04) list_double_graphic_pane_t2_cp2_ParamLimits

0xab61,	// (0x0003ac04) list_double_graphic_pane_t2_cp2

0x7499,	// (0x0003753c) list_double_number_pane_g1_cp2_ParamLimits

0x7499,	// (0x0003753c) list_double_number_pane_g1_cp2

0x74a5,	// (0x00037548) list_double_number_pane_g2_cp2

0xaaec,	// (0x0003ab8f) list_double_number_pane_t1_cp2_ParamLimits

0xaaec,	// (0x0003ab8f) list_double_number_pane_t1_cp2

0xab00,	// (0x0003aba3) list_double_number_pane_t2_cp2_ParamLimits

0xab00,	// (0x0003aba3) list_double_number_pane_t2_cp2

0xab16,	// (0x0003abb9) list_double_number_pane_t3_cp2_ParamLimits

0xab16,	// (0x0003abb9) list_double_number_pane_t3_cp2

0xa9d5,	// (0x0003aa78) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d5,	// (0x0003aa78) list_single_graphic_pane_g1_cp2

0x74fd,	// (0x000375a0) list_single_graphic_pane_g2_cp2_ParamLimits

0x74fd,	// (0x000375a0) list_single_graphic_pane_g2_cp2

0x93fa,	// (0x0003949d) list_single_graphic_pane_g3_cp2

0xa9ab,	// (0x0003aa4e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ab,	// (0x0003aa4e) list_single_graphic_pane_t1_cp2

0x74fd,	// (0x000375a0) list_single_number_pane_g1_cp2_ParamLimits

0x74fd,	// (0x000375a0) list_single_number_pane_g1_cp2

0x93fa,	// (0x0003949d) list_single_number_pane_g2_cp2

0xa9ab,	// (0x0003aa4e) list_single_number_pane_t1_cp2_ParamLimits

0xa9ab,	// (0x0003aa4e) list_single_number_pane_t1_cp2

0xa9c1,	// (0x0003aa64) list_single_number_pane_t2_cp2_ParamLimits

0xa9c1,	// (0x0003aa64) list_single_number_pane_t2_cp2

0x7309,	// (0x000373ac) list_double2_pane_g1_cp2_ParamLimits

0x7309,	// (0x000373ac) list_double2_pane_g1_cp2

0x731a,	// (0x000373bd) list_double2_pane_g2_cp2

0x7471,	// (0x00037514) list_double2_pane_t1_cp2_ParamLimits

0x7471,	// (0x00037514) list_double2_pane_t1_cp2

0x7487,	// (0x0003752a) list_double2_pane_t2_cp2_ParamLimits

0x7487,	// (0x0003752a) list_double2_pane_t2_cp2

0x7499,	// (0x0003753c) list_double_pane_g1_cp2_ParamLimits

0x7499,	// (0x0003753c) list_double_pane_g1_cp2

0x74a5,	// (0x00037548) list_double_pane_g2_cp2

0x74ad,	// (0x00037550) list_double_pane_t1_cp2_ParamLimits

0x74ad,	// (0x00037550) list_double_pane_t1_cp2

0x74c3,	// (0x00037566) list_double_pane_t2_cp2_ParamLimits

0x74c3,	// (0x00037566) list_double_pane_t2_cp2

0x74ed,	// (0x00037590) list_single_pane_cp2_g3

0x74fd,	// (0x000375a0) list_single_pane_g1_cp2_ParamLimits

0x74fd,	// (0x000375a0) list_single_pane_g1_cp2

0x93fa,	// (0x0003949d) list_single_pane_g2_cp2

0x9402,	// (0x000394a5) list_single_pane_t1_cp2_ParamLimits

0x9402,	// (0x000394a5) list_single_pane_t1_cp2

0x941a,	// (0x000394bd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x941a,	// (0x000394bd) list_single_large_graphic_pane_g1_cp2

0x9426,	// (0x000394c9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9426,	// (0x000394c9) list_single_large_graphic_pane_g2_cp2

0x9432,	// (0x000394d5) list_single_large_graphic_pane_g3_cp2

0x943a,	// (0x000394dd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x943a,	// (0x000394dd) list_single_large_graphic_pane_g4_cp1

0x9454,	// (0x000394f7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9454,	// (0x000394f7) list_single_large_graphic_pane_t1_cp2

0xa977,	// (0x0003aa1a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa977,	// (0x0003aa1a) list_single_graphic_heading_pane_g1_cp2

0xa944,	// (0x0003a9e7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa944,	// (0x0003a9e7) list_single_graphic_heading_pane_g4_cp2

0x93fa,	// (0x0003949d) list_single_graphic_heading_pane_g5_cp2

0xa983,	// (0x0003aa26) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa983,	// (0x0003aa26) list_single_graphic_heading_pane_t1_cp2

0xa999,	// (0x0003aa3c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa999,	// (0x0003aa3c) list_single_graphic_heading_pane_t2_cp2

0xa938,	// (0x0003a9db) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa938,	// (0x0003a9db) list_single_2graphic_pane_g1_cp2

0xa944,	// (0x0003a9e7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa944,	// (0x0003a9e7) list_single_2graphic_pane_g2_cp2

0x93fa,	// (0x0003949d) list_single_2graphic_pane_g3_cp2

0xa955,	// (0x0003a9f8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa955,	// (0x0003a9f8) list_single_2graphic_pane_g4_cp2

0xa961,	// (0x0003aa04) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa961,	// (0x0003aa04) list_single_2graphic_pane_t1_cp2

0x2339,	// (0x000323dc) list_highlight_pane_g10_cp1

0xa520,	// (0x0003a5c3) list_highlight_pane_g1_cp1

0xa528,	// (0x0003a5cb) list_highlight_pane_g2_cp1

0xa530,	// (0x0003a5d3) list_highlight_pane_g3_cp1

0xa538,	// (0x0003a5db) list_highlight_pane_g4_cp1

0xa540,	// (0x0003a5e3) list_highlight_pane_g5_cp1

0xa548,	// (0x0003a5eb) list_highlight_pane_g6_cp1

0xa550,	// (0x0003a5f3) list_highlight_pane_g7_cp1

0xa558,	// (0x0003a5fb) list_highlight_pane_g8_cp1

0xa560,	// (0x0003a603) list_highlight_pane_g9_cp1

0xa448,	// (0x0003a4eb) form_field_slider_pane_t3

0xa456,	// (0x0003a4f9) form_field_slider_pane_t4

0xa464,	// (0x0003a507) slider_form_pane_ParamLimits

0xa464,	// (0x0003a507) slider_form_pane

0x2343,	// (0x000323e6) control_abbreviations

0x2343,	// (0x000323e6) control_conventions

0x2343,	// (0x000323e6) control_definitions

0x2343,	// (0x000323e6) format_table_attribute

0xac2a,	// (0x0003accd) bg_popup_preview_window_pane_g9

0x2343,	// (0x000323e6) format_table_data2

0x2343,	// (0x000323e6) format_table_data3

0x2343,	// (0x000323e6) format_table_data_example

0x0008,

0x2343,	// (0x000323e6) intro_purpose

0xf8e0,	// (0x0003f983) bg_popup_preview_window_pane_g

0x2343,	// (0x000323e6) texts_category

0x2343,	// (0x000323e6) texts_graphics

0x946a,	// (0x0003950d) text_digital

0x9479,	// (0x0003951c) text_primary

0x9488,	// (0x0003952b) text_primary_small

0x9497,	// (0x0003953a) text_secondary

0x94a6,	// (0x00039549) text_title

0xb357,	// (0x0003b3fa) bg_passive_tab_pane_g1_cp3_srt

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp3_srt

0xb360,	// (0x0003b403) bg_passive_tab_pane_g3_cp3_srt

0x239f,	// (0x00032442) bg_active_tab_pane_cp3_srt_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp3_srt

0xb369,	// (0x0003b40c) tabs_4_active_pane_srt_g1

0xb371,	// (0x0003b414) tabs_4_active_pane_srt_t1_ParamLimits

0xb371,	// (0x0003b414) tabs_4_active_pane_srt_t1

0xb357,	// (0x0003b3fa) bg_active_tab_pane_g1_cp3_copy1

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp3_copy1

0xb360,	// (0x0003b403) bg_active_tab_pane_g3_cp3_copy1

0x239f,	// (0x00032442) tabs_2_long_active_pane_srt_ParamLimits

0x239f,	// (0x00032442) tabs_2_long_active_pane_srt

0x239f,	// (0x00032442) tabs_2_long_passive_pane_srt_ParamLimits

0x239f,	// (0x00032442) tabs_2_long_passive_pane_srt

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp4_srt

0xb04b,	// (0x0003b0ee) bg_passive_tab_pane_g1_cp4_srt

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp4_srt

0xb054,	// (0x0003b0f7) bg_passive_tab_pane_g3_cp4_srt

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp4_srt_ParamLimits

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp4_srt

0xb05d,	// (0x0003b100) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb05d,	// (0x0003b100) tabs_2_long_active_pane_srt_t1

0xb04b,	// (0x0003b0ee) bg_active_tab_pane_g1_cp4_srt

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp4_srt

0xb054,	// (0x0003b0f7) bg_active_tab_pane_g3_cp4_srt

0x2391,	// (0x00032434) tabs_3_long_active_pane_srt_ParamLimits

0x2391,	// (0x00032434) tabs_3_long_active_pane_srt

0x2391,	// (0x00032434) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2391,	// (0x00032434) tabs_3_long_passive_pane_cp_srt

0x2391,	// (0x00032434) tabs_3_long_passive_pane_srt_ParamLimits

0x2391,	// (0x00032434) tabs_3_long_passive_pane_srt

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp5_srt

0x729f,	// (0x00037342) bg_passive_tab_pane_g1_cp5_srt

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp5_srt

0x72a8,	// (0x0003734b) bg_passive_tab_pane_g3_cp5_srt

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp5_srt_ParamLimits

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp5_srt

0xb039,	// (0x0003b0dc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb039,	// (0x0003b0dc) tabs_3_long_active_pane_srt_t1

0x729f,	// (0x00037342) bg_active_tab_pane_g1_cp5_srt

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp5_srt

0x72a8,	// (0x0003734b) bg_active_tab_pane_g3_cp5_srt

0xb02b,	// (0x0003b0ce) navi_text_pane_srt_t1

0xb023,	// (0x0003b0c6) navi_icon_pane_srt_g1

0x9677,	// (0x0003971a) midp_editing_number_pane_srt

0x94b5,	// (0x00039558) midp_ticker_pane_srt

0x967f,	// (0x00039722) midp_ticker_pane_srt_g1

0x9687,	// (0x0003972a) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0003f80b) midp_ticker_pane_srt_g

0x968f,	// (0x00039732) midp_ticker_pane_srt_t1

0xb014,	// (0x0003b0b7) midp_editing_number_pane_t1_copy1

0x94bd,	// (0x00039560) listscroll_midp_pane

0x94bd,	// (0x00039560) midp_form_pane

0x952f,	// (0x000395d2) midp_info_popup_window_ParamLimits

0x952f,	// (0x000395d2) midp_info_popup_window

0x27fa,	// (0x0003289d) bg_popup_sub_pane_cp50_ParamLimits

0x27fa,	// (0x0003289d) bg_popup_sub_pane_cp50

0xa168,	// (0x0003a20b) listscroll_midp_info_pane_ParamLimits

0xa168,	// (0x0003a20b) listscroll_midp_info_pane

0xa148,	// (0x0003a1eb) listscroll_form_midp_pane_ParamLimits

0xa148,	// (0x0003a1eb) listscroll_form_midp_pane

0xa154,	// (0x0003a1f7) scroll_bar_cp050

0xa128,	// (0x0003a1cb) list_midp_pane

0xbd8d,	// (0x0003be30) signal_pane_g2_cp

0xa062,	// (0x0003a105) listscroll_midp_info_pane_t1_ParamLimits

0xa062,	// (0x0003a105) listscroll_midp_info_pane_t1

0xa07a,	// (0x0003a11d) listscroll_midp_info_pane_t2_ParamLimits

0xa07a,	// (0x0003a11d) listscroll_midp_info_pane_t2

0xa0b8,	// (0x0003a15b) listscroll_midp_info_pane_t3_ParamLimits

0xa0b8,	// (0x0003a15b) listscroll_midp_info_pane_t3

0xa0f2,	// (0x0003a195) listscroll_midp_info_pane_t4_ParamLimits

0xa0f2,	// (0x0003a195) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0003f8be) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0003f8be) listscroll_midp_info_pane_t

0x2870,	// (0x00032913) scroll_pane_cp21

0xa002,	// (0x0003a0a5) form_midp_field_choice_group_pane

0xa00b,	// (0x0003a0ae) form_midp_field_text_pane

0xa048,	// (0x0003a0eb) form_midp_field_time_pane

0xa050,	// (0x0003a0f3) form_midp_gauge_slider_pane

0xa059,	// (0x0003a0fc) form_midp_gauge_wait_pane

0x2343,	// (0x000323e6) form_midp_image_pane

0x7e15,	// (0x00037eb8) list_single_midp_pane_ParamLimits

0x7e15,	// (0x00037eb8) list_single_midp_pane

0x9fb7,	// (0x0003a05a) form_midp_field_text_pane_t1

0x9d81,	// (0x00039e24) input_focus_pane_cp050

0x9ff1,	// (0x0003a094) list_midp_form_text_pane

0x9f86,	// (0x0003a029) form_midp_field_choice_group_pane_t1

0x9f94,	// (0x0003a037) input_focus_pane_cp051

0x9fa8,	// (0x0003a04b) list_midp_choice_pane

0x2343,	// (0x000323e6) status_idle_pane

0x9f6a,	// (0x0003a00d) form_midp_field_time_pane_t1

0x2339,	// (0x000323dc) wait_anim_pane_g2_copy1

0x9f78,	// (0x0003a01b) form_midp_field_time_pane_t2

0x0001,

0x95df,	// (0x00039682) aid_navinavi_width_2_pane

0xf816,	// (0x0003f8b9) form_midp_field_time_pane_t

0x2343,	// (0x000323e6) input_focus_pane_cp052

0x2343,	// (0x000323e6) bg_input_focus_pane_cp040

0x9f2a,	// (0x00039fcd) form_midp_gauge_slider_pane_t1

0x9f38,	// (0x00039fdb) form_midp_gauge_slider_pane_t2

0x9f46,	// (0x00039fe9) form_midp_gauge_slider_pane_t3

0x9f54,	// (0x00039ff7) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0003f8b0) form_midp_gauge_slider_pane_t

0x9f62,	// (0x0003a005) form_midp_slider_pane

0x239f,	// (0x00032442) bg_input_focus_pane_cp041_ParamLimits

0x239f,	// (0x00032442) bg_input_focus_pane_cp041

0x9ef7,	// (0x00039f9a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ef7,	// (0x00039f9a) form_midp_gauge_wait_pane_t1

0x9f09,	// (0x00039fac) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f09,	// (0x00039fac) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0003f8ab) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0003f8ab) form_midp_gauge_wait_pane_t

0x9f1b,	// (0x00039fbe) form_midp_wait_pane_ParamLimits

0x9f1b,	// (0x00039fbe) form_midp_wait_pane

0x9ec1,	// (0x00039f64) form_midp_image_pane_g1

0x9eca,	// (0x00039f6d) form_midp_image_pane_t1

0x9ed9,	// (0x00039f7c) form_midp_image_pane_t2

0x9ee8,	// (0x00039f8b) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0003f8a4) form_midp_image_pane_t

0x9eb8,	// (0x00039f5b) list_single_midp_pane_g1

0x4885,	// (0x00034928) list_single_midp_pane_t1

0x9e8f,	// (0x00039f32) list_midp_form_item_pane_ParamLimits

0x9e8f,	// (0x00039f32) list_midp_form_item_pane

0x9587,	// (0x0003962a) list_midp_form_item_pane_t1

0x9596,	// (0x00039639) midp_ticker_pane_g1

0x95a2,	// (0x00039645) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0003f7f1) midp_ticker_pane_g

0x95ae,	// (0x00039651) midp_ticker_pane_t1

0xb261,	// (0x0003b304) midp_editing_number_pane_t1

0xb23f,	// (0x0003b2e2) midp_editing_number_pane

0xb24e,	// (0x0003b2f1) midp_ticker_pane

0xb004,	// (0x0003b0a7) ai_message_heading_pane

0x2343,	// (0x000323e6) bg_popup_window_pane_cp14

0xb00c,	// (0x0003b0af) listscroll_ai_message_pane

0xaf8e,	// (0x0003b031) ai_message_heading_pane_g1_ParamLimits

0xaf8e,	// (0x0003b031) ai_message_heading_pane_g1

0xaf9a,	// (0x0003b03d) ai_message_heading_pane_g2_ParamLimits

0xaf9a,	// (0x0003b03d) ai_message_heading_pane_g2

0xafa6,	// (0x0003b049) ai_message_heading_pane_g3_ParamLimits

0xafa6,	// (0x0003b049) ai_message_heading_pane_g3

0xafb2,	// (0x0003b055) ai_message_heading_pane_g4_ParamLimits

0xafb2,	// (0x0003b055) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0003f9e5) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0003f9e5) ai_message_heading_pane_g

0xafbe,	// (0x0003b061) ai_message_heading_pane_t1_ParamLimits

0xafbe,	// (0x0003b061) ai_message_heading_pane_t1

0xafd8,	// (0x0003b07b) ai_message_heading_pane_t2_ParamLimits

0xafd8,	// (0x0003b07b) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0003f9ee) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0003f9ee) ai_message_heading_pane_t

0xafea,	// (0x0003b08d) bg_popup_heading_pane_cp1_ParamLimits

0xafea,	// (0x0003b08d) bg_popup_heading_pane_cp1

0xaf7c,	// (0x0003b01f) list_ai_message_pane_ParamLimits

0xaf7c,	// (0x0003b01f) list_ai_message_pane

0x2870,	// (0x00032913) scroll_pane_cp10

0xaf18,	// (0x0003afbb) list_ai_message_pane_g1

0xaf20,	// (0x0003afc3) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0003f9c2) list_ai_message_pane_g

0xaf28,	// (0x0003afcb) list_ai_message_pane_t1_ParamLimits

0xaf28,	// (0x0003afcb) list_ai_message_pane_t1

0xaf3d,	// (0x0003afe0) list_ai_message_pane_t2_ParamLimits

0xaf3d,	// (0x0003afe0) list_ai_message_pane_t2

0xaf52,	// (0x0003aff5) list_ai_message_pane_t3_ParamLimits

0xaf52,	// (0x0003aff5) list_ai_message_pane_t3

0xaf67,	// (0x0003b00a) list_ai_message_pane_t4_ParamLimits

0xaf67,	// (0x0003b00a) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0003f9c7) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0003f9c7) list_ai_message_pane_t

0xaf03,	// (0x0003afa6) cell_ai_soft_ind_pane_ParamLimits

0xaf03,	// (0x0003afa6) cell_ai_soft_ind_pane

0x95c0,	// (0x00039663) cell_ai_soft_ind_pane_g1_ParamLimits

0x95c0,	// (0x00039663) cell_ai_soft_ind_pane_g1

0x2343,	// (0x000323e6) grid_highlight_cp1

0x95cd,	// (0x00039670) text_secondary_cp56_ParamLimits

0x95cd,	// (0x00039670) text_secondary_cp56

0xaed8,	// (0x0003af7b) example_general_pane_ParamLimits

0xaed8,	// (0x0003af7b) example_general_pane

0xaee4,	// (0x0003af87) example_parent_pane_g1_ParamLimits

0xaee4,	// (0x0003af87) example_parent_pane_g1

0xaef0,	// (0x0003af93) example_parent_pane_t1_ParamLimits

0xaef0,	// (0x0003af93) example_parent_pane_t1

0x7aa9,	// (0x00037b4c) popup_preview_text_window_ParamLimits

0x7aa9,	// (0x00037b4c) popup_preview_text_window

0x74f5,	// (0x00037598) list_single_pane_cp2_g4

0x2571,	// (0x00032614) bg_popup_preview_window_pane_ParamLimits

0x2571,	// (0x00032614) bg_popup_preview_window_pane

0xac32,	// (0x0003acd5) popup_preview_text_window_t1_ParamLimits

0xac32,	// (0x0003acd5) popup_preview_text_window_t1

0xac50,	// (0x0003acf3) popup_preview_text_window_t2_ParamLimits

0xac50,	// (0x0003acf3) popup_preview_text_window_t2

0xac99,	// (0x0003ad3c) popup_preview_text_window_t3_ParamLimits

0xac99,	// (0x0003ad3c) popup_preview_text_window_t3

0xacde,	// (0x0003ad81) popup_preview_text_window_t4_ParamLimits

0xacde,	// (0x0003ad81) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0003f996) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0003f996) popup_preview_text_window_t

0xad5c,	// (0x0003adff) scroll_pane_cp11

0x9d0d,	// (0x00039db0) bg_popup_preview_window_pane_g1

0xabf2,	// (0x0003ac95) bg_popup_preview_window_pane_g2

0xabfa,	// (0x0003ac9d) bg_popup_preview_window_pane_g3

0xac02,	// (0x0003aca5) bg_popup_preview_window_pane_g4

0xac0a,	// (0x0003acad) bg_popup_preview_window_pane_g5

0xac12,	// (0x0003acb5) bg_popup_preview_window_pane_g6

0xac1a,	// (0x0003acbd) bg_popup_preview_window_pane_g7

0xac22,	// (0x0003acc5) bg_popup_preview_window_pane_g8

0x5a8c,	// (0x00035b2f) aid_popup_width_pane

0x7a87,	// (0x00037b2a) popup_midp_note_alarm_window_ParamLimits

0x7a87,	// (0x00037b2a) popup_midp_note_alarm_window

0x2745,	// (0x000327e8) data_form_pane_ParamLimits

0x6879,	// (0x0003691c) form_field_data_pane_g1

0x6883,	// (0x00036926) form_field_data_pane_t1_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_ParamLimits

0x689b,	// (0x0003693e) data_form_wide_pane_ParamLimits

0x68ac,	// (0x0003694f) form_field_data_wide_pane_g1

0x68b8,	// (0x0003695b) form_field_data_wide_pane_t1_ParamLimits

0x2645,	// (0x000326e8) input_focus_pane_cp6_ParamLimits

0x6a5b,	// (0x00036afe) input_popup_find_pane_g1_ParamLimits

0x6a5b,	// (0x00036afe) input_popup_find_pane_g1

0x6bed,	// (0x00036c90) aid_navi_side_left_pane

0x6c02,	// (0x00036ca5) aid_navi_side_right_pane

0xa61b,	// (0x0003a6be) bg_popup_window_pane_cp30_ParamLimits

0xa61b,	// (0x0003a6be) bg_popup_window_pane_cp30

0xa695,	// (0x0003a738) popup_midp_note_alarm_window_g1_ParamLimits

0xa695,	// (0x0003a738) popup_midp_note_alarm_window_g1

0xa6c5,	// (0x0003a768) popup_midp_note_alarm_window_t1_ParamLimits

0xa6c5,	// (0x0003a768) popup_midp_note_alarm_window_t1

0xa766,	// (0x0003a809) popup_midp_note_alarm_window_t2_ParamLimits

0xa766,	// (0x0003a809) popup_midp_note_alarm_window_t2

0xa814,	// (0x0003a8b7) popup_midp_note_alarm_window_t3_ParamLimits

0xa814,	// (0x0003a8b7) popup_midp_note_alarm_window_t3

0xa83c,	// (0x0003a8df) popup_midp_note_alarm_window_t4_ParamLimits

0xa83c,	// (0x0003a8df) popup_midp_note_alarm_window_t4

0xa85c,	// (0x0003a8ff) popup_midp_note_alarm_window_t5_ParamLimits

0xa85c,	// (0x0003a8ff) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0003f933) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0003f933) popup_midp_note_alarm_window_t

0xa908,	// (0x0003a9ab) wait_bar_pane_cp1_ParamLimits

0xa908,	// (0x0003a9ab) wait_bar_pane_cp1

0x2343,	// (0x000323e6) wait_anim_pane_copy1

0x2343,	// (0x000323e6) wait_border_pane_copy1

0xa311,	// (0x0003a3b4) wait_border_pane_g1_copy1

0x68d2,	// (0x00036975) form_field_popup_pane_g1

0x68da,	// (0x0003697d) form_field_popup_pane_t1_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_cp7_ParamLimits

0x277f,	// (0x00032822) list_form_pane_ParamLimits

0x68f2,	// (0x00036995) form_field_popup_wide_pane_g1

0x68fa,	// (0x0003699d) form_field_popup_wide_pane_t1_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_cp8_ParamLimits

0x278b,	// (0x0003282e) list_form_wide_pane_ParamLimits

0xb3eb,	// (0x0003b48e) aid_size_cell_graphic_pane

0x6984,	// (0x00036a27) data_form_pane_t1_ParamLimits

0x808c,	// (0x0003812f) data_form_wide_pane_t1_ParamLimits

0x98d7,	// (0x0003997a) bg_status_flat_pane

0x5e95,	// (0x00035f38) title_pane_t1_ParamLimits

0x2359,	// (0x000323fc) title_pane_t2_ParamLimits

0x237f,	// (0x00032422) title_pane_t3_ParamLimits

0xf557,	// (0x0003f5fa) title_pane_t_ParamLimits

0x2b19,	// (0x00032bbc) level_1_signal_ParamLimits

0x2b26,	// (0x00032bc9) level_2_signal_ParamLimits

0x2b33,	// (0x00032bd6) level_3_signal_ParamLimits

0x2b40,	// (0x00032be3) level_4_signal_ParamLimits

0x2b4d,	// (0x00032bf0) level_5_signal_ParamLimits

0x2b5a,	// (0x00032bfd) level_6_signal_ParamLimits

0x2b67,	// (0x00032c0a) level_7_signal_ParamLimits

0x2b19,	// (0x00032bbc) level_1_battery_ParamLimits

0x2b26,	// (0x00032bc9) level_2_battery_ParamLimits

0x2b33,	// (0x00032bd6) level_3_battery_ParamLimits

0x2b40,	// (0x00032be3) level_4_battery_ParamLimits

0x2b4d,	// (0x00032bf0) level_5_battery_ParamLimits

0x2b5a,	// (0x00032bfd) level_6_battery_ParamLimits

0x2b67,	// (0x00032c0a) level_7_battery_ParamLimits

0xa520,	// (0x0003a5c3) bg_status_flat_pane_g1

0xa528,	// (0x0003a5cb) bg_status_flat_pane_g2

0xa530,	// (0x0003a5d3) bg_status_flat_pane_g3

0xa538,	// (0x0003a5db) bg_status_flat_pane_g4

0xa540,	// (0x0003a5e3) bg_status_flat_pane_g5

0xa548,	// (0x0003a5eb) bg_status_flat_pane_g6

0xa550,	// (0x0003a5f3) bg_status_flat_pane_g7

0x5f05,	// (0x00035fa8) tabs_3_active_pane_t1_ParamLimits

0x5f05,	// (0x00035fa8) tabs_3_passive_pane_t1_ParamLimits

0x5f1f,	// (0x00035fc2) tabs_4_active_pane_t1_ParamLimits

0x5f1f,	// (0x00035fc2) tabs_4_1_passive_pane_t1_ParamLimits

0x6a92,	// (0x00036b35) tabs_2_active_pane_t1_ParamLimits

0x6a92,	// (0x00036b35) tabs_2_passive_pane_t1_ParamLimits

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp4_ParamLimits

0x6aa4,	// (0x00036b47) tabs_2_long_active_pane_t1_ParamLimits

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp4_ParamLimits

0x7d62,	// (0x00037e05) list_single_midp_graphic_pane_t1_ParamLimits

0x2c47,	// (0x00032cea) bg_active_tab_pane_cp5_ParamLimits

0x6ac3,	// (0x00036b66) tabs_3_long_active_pane_t1_ParamLimits

0x6ab7,	// (0x00036b5a) bg_passive_tab_pane_cp5_ParamLimits

0x7d62,	// (0x00037e05) list_single_midp_graphic_pane_t1

0x98d7,	// (0x0003997a) bg_status_flat_pane_ParamLimits

0x99a0,	// (0x00039a43) indicator_pane_cp2_ParamLimits

0x99a0,	// (0x00039a43) indicator_pane_cp2

0x9acb,	// (0x00039b6e) navi_pane_srt_ParamLimits

0x9acb,	// (0x00039b6e) navi_pane_srt

0x9aef,	// (0x00039b92) popup_clock_digital_analogue_window_cp1

0x23e3,	// (0x00032486) indicator_pane_t1

0x94b5,	// (0x00039558) copy_highlight_pane

0x94b5,	// (0x00039558) cursor_graphics_pane

0x94b5,	// (0x00039558) graphic_within_text_pane

0x94b5,	// (0x00039558) link_highlight_pane

0xad1f,	// (0x0003adc2) popup_preview_text_window_t5_ParamLimits

0xad1f,	// (0x0003adc2) popup_preview_text_window_t5

0x95e7,	// (0x0003968a) cursor_digital_pane

0x95e7,	// (0x0003968a) cursor_primary_pane

0x95f8,	// (0x0003969b) cursor_primary_small_pane

0x9600,	// (0x000396a3) cursor_secondary_pane

0x9608,	// (0x000396ab) cursor_title_pane

0x95e7,	// (0x0003968a) link_highlight_digital_pane

0x95ef,	// (0x00039692) link_highlight_primary_pane

0x95f8,	// (0x0003969b) link_highlight_primary_small_pane

0x9600,	// (0x000396a3) link_highlight_secondary_pane

0x9608,	// (0x000396ab) link_highlight_title_pane

0x95e7,	// (0x0003968a) copy_highlight_digital_pane

0x95e7,	// (0x0003968a) copy_highlight_primary_pane

0x95f8,	// (0x0003969b) copy_highlight_primary_small_pane

0x9600,	// (0x000396a3) copy_highlight_secondary_pane

0x9608,	// (0x000396ab) copy_highlight_title_pane

0x9600,	// (0x000396a3) graphic_text_digital_pane

0xa5be,	// (0x0003a661) graphic_text_primary_pane

0xa5c7,	// (0x0003a66a) graphic_text_primary_small_pane

0x95f8,	// (0x0003969b) graphic_text_secondary_pane

0x95e7,	// (0x0003968a) graphic_text_title_pane

0x9610,	// (0x000396b3) cursor_primary_pane_g1

0xa5b0,	// (0x0003a653) cursor_text_primary_t1

0xa598,	// (0x0003a63b) cursor_primary_small_pane_g1

0xa5a2,	// (0x0003a645) cursor_text_primary_small_t1

0xa580,	// (0x0003a623) cursor_primary_small_pane_g1_copy1

0xa58a,	// (0x0003a62d) cursor_text_primary_small_t1_copy1

0xa568,	// (0x0003a60b) cursor_text_title_t1

0xa576,	// (0x0003a619) cursor_title_pane_g1

0x9610,	// (0x000396b3) cursor_digital_pane_g1

0x961a,	// (0x000396bd) cursor_text_digital_t1

0x9628,	// (0x000396cb) link_highlight_primary_pane_g1

0xa511,	// (0x0003a5b4) link_highlight_primary_pane_t1

0x9628,	// (0x000396cb) link_highlight_primary_small_pane_g1

0x9630,	// (0x000396d3) link_highlight_primary_small_pane_t1

0x9628,	// (0x000396cb) link_highlight_secondary_pane_g1

0x963f,	// (0x000396e2) link_highlight_secondary_pane_t1

0xa476,	// (0x0003a519) link_highlight_title_pane_g1

0xa48d,	// (0x0003a530) link_highlight_title_pane_t1

0xa476,	// (0x0003a519) link_highlight_digital_pane_g1

0xa47e,	// (0x0003a521) link_highlight_digital_pane_t1

0xa330,	// (0x0003a3d3) copy_highlight_primary_pane_g1

0xa356,	// (0x0003a3f9) copy_highlight_primary_pane_t1

0xa330,	// (0x0003a3d3) copy_highlight_primary_small_pane_g1

0xa347,	// (0x0003a3ea) copy_highlight_primary_small_pane_t1

0x964e,	// (0x000396f1) copy_highlight_secondary_pane_g1

0x9656,	// (0x000396f9) copy_highlight_secondary_pane_t1

0xa330,	// (0x0003a3d3) copy_highlight_title_pane_g1

0xa338,	// (0x0003a3db) copy_highlight_title_pane_t1

0xa330,	// (0x0003a3d3) copy_highlight_digital_pane_g1

0xb5b9,	// (0x0003b65c) copy_highlight_digital_pane_t1

0xb50d,	// (0x0003b5b0) graphic_text_primary_pane_g1

0xb59d,	// (0x0003b640) graphic_text_primary_pane_t1

0xb5ab,	// (0x0003b64e) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0003fa62) graphic_text_primary_pane_t

0xb579,	// (0x0003b61c) graphic_text_primary_small_pane_g1

0xb581,	// (0x0003b624) graphic_text_primary_small_pane_t1

0xb58f,	// (0x0003b632) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0003fa5d) graphic_text_primary_small_pane_t

0xb555,	// (0x0003b5f8) graphic_text_secondary_pane_g1

0xb55d,	// (0x0003b600) graphic_text_secondary_pane_t1

0xb56b,	// (0x0003b60e) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0003fa58) graphic_text_secondary_pane_t

0xb531,	// (0x0003b5d4) graphic_text_title_pane_g1

0xb539,	// (0x0003b5dc) graphic_text_title_pane_t1

0xb547,	// (0x0003b5ea) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0003fa53) graphic_text_title_pane_t

0xb50d,	// (0x0003b5b0) graphic_text_digital_pane_g1

0xb515,	// (0x0003b5b8) graphic_text_digital_pane_t1

0xb523,	// (0x0003b5c6) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0003fa4e) graphic_text_digital_pane_t

0x239f,	// (0x00032442) navi_icon_pane_srt_ParamLimits

0x239f,	// (0x00032442) navi_icon_pane_srt

0x2343,	// (0x000323e6) navi_midp_pane_srt

0x2343,	// (0x000323e6) navi_navi_pane_srt

0x239f,	// (0x00032442) navi_text_pane_srt_ParamLimits

0x239f,	// (0x00032442) navi_text_pane_srt

0xb4d8,	// (0x0003b57b) navi_navi_icon_text_pane_srt

0xb4e0,	// (0x0003b583) navi_navi_pane_srt_g1_ParamLimits

0xb4e0,	// (0x0003b583) navi_navi_pane_srt_g1

0xb4f2,	// (0x0003b595) navi_navi_pane_srt_g2_ParamLimits

0xb4f2,	// (0x0003b595) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0003fa49) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0003fa49) navi_navi_pane_srt_g

0xb504,	// (0x0003b5a7) navi_navi_tabs_pane_srt

0xb4d8,	// (0x0003b57b) navi_navi_text_pane_srt

0xb4d8,	// (0x0003b57b) navi_navi_volume_pane_srt

0xb4c9,	// (0x0003b56c) navi_navi_text_pane_srt_t1

0x822f,	// (0x000382d2) navi_navi_volume_pane_srt_g1

0x8237,	// (0x000382da) volume_small_pane_srt_ParamLimits

0x8237,	// (0x000382da) volume_small_pane_srt

0x7509,	// (0x000375ac) volume_small_pane_srt_g1_ParamLimits

0x7509,	// (0x000375ac) volume_small_pane_srt_g1

0x7519,	// (0x000375bc) volume_small_pane_srt_g2_ParamLimits

0x7519,	// (0x000375bc) volume_small_pane_srt_g2

0x752a,	// (0x000375cd) volume_small_pane_srt_g3_ParamLimits

0x752a,	// (0x000375cd) volume_small_pane_srt_g3

0x753b,	// (0x000375de) volume_small_pane_srt_g4_ParamLimits

0x753b,	// (0x000375de) volume_small_pane_srt_g4

0x754c,	// (0x000375ef) volume_small_pane_srt_g5_ParamLimits

0x754c,	// (0x000375ef) volume_small_pane_srt_g5

0x755d,	// (0x00037600) volume_small_pane_srt_g6_ParamLimits

0x755d,	// (0x00037600) volume_small_pane_srt_g6

0x756e,	// (0x00037611) volume_small_pane_srt_g7_ParamLimits

0x756e,	// (0x00037611) volume_small_pane_srt_g7

0x757f,	// (0x00037622) volume_small_pane_srt_g8_ParamLimits

0x757f,	// (0x00037622) volume_small_pane_srt_g8

0x7590,	// (0x00037633) volume_small_pane_srt_g9_ParamLimits

0x7590,	// (0x00037633) volume_small_pane_srt_g9

0x75a1,	// (0x00037644) volume_small_pane_srt_g10_ParamLimits

0x75a1,	// (0x00037644) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0003f7f6) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0003f7f6) volume_small_pane_srt_g

0x6146,	// (0x000361e9) query_popup_data_pane_cp2

0xb4af,	// (0x0003b552) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4af,	// (0x0003b552) navi_navi_icon_text_pane_srt_t1

0xa5be,	// (0x0003a661) navi_tabs_2_long_pane_srt

0xa5be,	// (0x0003a661) navi_tabs_2_pane_srt

0xa5be,	// (0x0003a661) navi_tabs_3_long_pane_srt

0xa5be,	// (0x0003a661) navi_tabs_3_pane_srt

0xa5be,	// (0x0003a661) navi_tabs_4_pane_srt

0x820f,	// (0x000382b2) tabs_2_active_pane_srt_ParamLimits

0x820f,	// (0x000382b2) tabs_2_active_pane_srt

0x821f,	// (0x000382c2) tabs_2_passive_pane_srt_ParamLimits

0x821f,	// (0x000382c2) tabs_2_passive_pane_srt

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp1_srt

0xb47b,	// (0x0003b51e) bg_passive_tab_pane_g1_cp1_srt

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp1_srt

0xb484,	// (0x0003b527) bg_passive_tab_pane_g3_cp1_srt

0x239f,	// (0x00032442) bg_active_tab_pane_cp1_srt_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp1_srt

0xb48d,	// (0x0003b530) tabs_2_active_pane_srt_g1

0xb495,	// (0x0003b538) tabs_2_active_pane_srt_t1_ParamLimits

0xb495,	// (0x0003b538) tabs_2_active_pane_srt_t1

0xb47b,	// (0x0003b51e) bg_active_tab_pane_g1_cp1_srt

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp1_srt

0xb484,	// (0x0003b527) bg_active_tab_pane_g3_cp1_srt

0x81dc,	// (0x0003827f) tabs_3_active_pane_srt_ParamLimits

0x81dc,	// (0x0003827f) tabs_3_active_pane_srt

0x81ed,	// (0x00038290) tabs_3_passive_pane_cp_srt_ParamLimits

0x81ed,	// (0x00038290) tabs_3_passive_pane_cp_srt

0x81fe,	// (0x000382a1) tabs_3_passive_pane_srt_ParamLimits

0x81fe,	// (0x000382a1) tabs_3_passive_pane_srt

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9800,	// (0x000398a3) bg_passive_tab_pane_cp2_srt

0x9665,	// (0x00039708) bg_passive_tab_pane_g1_cp2_srt

0x70d4,	// (0x00037177) bg_passive_tab_pane_g2_cp2_srt

0x966e,	// (0x00039711) bg_passive_tab_pane_g3_cp2_srt

0x239f,	// (0x00032442) bg_active_tab_pane_cp2_srt_ParamLimits

0x239f,	// (0x00032442) bg_active_tab_pane_cp2_srt

0xb461,	// (0x0003b504) tabs_3_active_pane_srt_g1

0xb469,	// (0x0003b50c) tabs_3_active_pane_srt_t1_ParamLimits

0xb469,	// (0x0003b50c) tabs_3_active_pane_srt_t1

0x9665,	// (0x00039708) bg_active_tab_pane_g1_cp2_srt

0x70d4,	// (0x00037177) bg_active_tab_pane_g2_cp2_srt

0x966e,	// (0x00039711) bg_active_tab_pane_g3_cp2_srt

0x8194,	// (0x00038237) tabs_4_active_pane_srt_ParamLimits

0x8194,	// (0x00038237) tabs_4_active_pane_srt

0x81a6,	// (0x00038249) tabs_4_passive_pane_cp2_srt_ParamLimits

0x81a6,	// (0x00038249) tabs_4_passive_pane_cp2_srt

0x7710,	// (0x000377b3) aid_size_cell_toolbar

0x6ab7,	// (0x00036b5a) main_idle_act_pane_ParamLimits

0x78b9,	// (0x0003795c) popup_large_graphic_colour_window_ParamLimits

0x7c24,	// (0x00037cc7) popup_toolbar_window_ParamLimits

0x7c24,	// (0x00037cc7) popup_toolbar_window

0x4894,	// (0x00034937) list_single_graphic_2heading_pane_ParamLimits

0x4894,	// (0x00034937) list_single_graphic_2heading_pane

0x2a01,	// (0x00032aa4) aid_size_cell_apps_grid_lsc_pane

0x2a13,	// (0x00032ab6) aid_size_cell_apps_grid_prt_pane

0x9800,	// (0x000398a3) bg_wml_button_pane_cp1_ParamLimits

0x9800,	// (0x000398a3) bg_wml_button_pane_cp1

0x9fb7,	// (0x0003a05a) form_midp_field_text_pane_t1_ParamLimits

0x9d81,	// (0x00039e24) input_focus_pane_cp050_ParamLimits

0x9ff1,	// (0x0003a094) list_midp_form_text_pane_ParamLimits

0x9f94,	// (0x0003a037) input_focus_pane_cp051_ParamLimits

0x9fa8,	// (0x0003a04b) list_midp_choice_pane_ParamLimits

0x9e37,	// (0x00039eda) list_single_2graphic_pane_cp3_ParamLimits

0x9e37,	// (0x00039eda) list_single_2graphic_pane_cp3

0x9e5c,	// (0x00039eff) list_single_midp_graphic_pane_ParamLimits

0x9e5c,	// (0x00039eff) list_single_midp_graphic_pane

0x59fa,	// (0x00035a9d) list_single_graphic_2heading_pane_g1_ParamLimits

0x59fa,	// (0x00035a9d) list_single_graphic_2heading_pane_g1

0x5a06,	// (0x00035aa9) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a06,	// (0x00035aa9) list_single_graphic_2heading_pane_g4

0x5a12,	// (0x00035ab5) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a12,	// (0x00035ab5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0003f849) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0003f849) list_single_graphic_2heading_pane_g

0x5a1e,	// (0x00035ac1) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a1e,	// (0x00035ac1) list_single_graphic_2heading_pane_t1

0x5a32,	// (0x00035ad5) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a32,	// (0x00035ad5) list_single_graphic_2heading_pane_t2

0x5a4c,	// (0x00035aef) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a4c,	// (0x00035aef) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0003f850) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0003f850) list_single_graphic_2heading_pane_t

0x9c4b,	// (0x00039cee) bg_popup_sub_pane_cp2

0x9c75,	// (0x00039d18) grid_toobar_pane

0x7cd1,	// (0x00037d74) cell_toolbar_pane_ParamLimits

0x7cd1,	// (0x00037d74) cell_toolbar_pane

0x9cb1,	// (0x00039d54) cell_toolbar_pane_g1_ParamLimits

0x9cb1,	// (0x00039d54) cell_toolbar_pane_g1

0x9cc5,	// (0x00039d68) cell_toolbar_pane_g2_ParamLimits

0x9cc5,	// (0x00039d68) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0003f85e) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0003f85e) cell_toolbar_pane_g

0x9ce7,	// (0x00039d8a) grid_highlight_pane_cp2_ParamLimits

0x9ce7,	// (0x00039d8a) grid_highlight_pane_cp2

0x9d01,	// (0x00039da4) toolbar_button_pane

0x9d0d,	// (0x00039db0) toolbar_button_pane_g1

0x9d15,	// (0x00039db8) toolbar_button_pane_g2

0x9d1d,	// (0x00039dc0) toolbar_button_pane_g3

0x9d25,	// (0x00039dc8) toolbar_button_pane_g4

0x9d2d,	// (0x00039dd0) toolbar_button_pane_g5

0x9d35,	// (0x00039dd8) toolbar_button_pane_g6

0x9d3d,	// (0x00039de0) toolbar_button_pane_g7

0x9d45,	// (0x00039de8) toolbar_button_pane_g8

0x9d4d,	// (0x00039df0) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0003f863) toolbar_button_pane_g

0x7d09,	// (0x00037dac) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7d09,	// (0x00037dac) list_single_2graphic_pane_g1_cp3

0x7d15,	// (0x00037db8) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7d15,	// (0x00037db8) list_single_2graphic_pane_g2_cp3

0x7d26,	// (0x00037dc9) list_single_2graphic_pane_g3_cp3

0x7d2e,	// (0x00037dd1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7d2e,	// (0x00037dd1) list_single_2graphic_pane_g4_cp3

0x7d3a,	// (0x00037ddd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7d3a,	// (0x00037ddd) list_single_2graphic_pane_t1_cp3

0x7d56,	// (0x00037df9) list_single_midp_graphic_pane_g2_ParamLimits

0x7d56,	// (0x00037df9) list_single_midp_graphic_pane_g2

0x7718,	// (0x000377bb) aid_zoom_text_primary

0x59de,	// (0x00035a81) aid_zoom_text_secondary

0x971f,	// (0x000397c2) status_small_pane_g7_ParamLimits

0x971f,	// (0x000397c2) status_small_pane_g7

0x9742,	// (0x000397e5) status_small_pane_t1_ParamLimits

0x5e78,	// (0x00035f1b) title_pane_g2

0x0003,

0xf54e,	// (0x0003f5f1) title_pane_g

0x61a0,	// (0x00036243) aid_size_cell_colour_1_pane_ParamLimits

0x61a0,	// (0x00036243) aid_size_cell_colour_1_pane

0x61b4,	// (0x00036257) aid_size_cell_colour_2_pane_ParamLimits

0x61b4,	// (0x00036257) aid_size_cell_colour_2_pane

0x61c8,	// (0x0003626b) aid_size_cell_colour_3_pane_ParamLimits

0x61c8,	// (0x0003626b) aid_size_cell_colour_3_pane

0x61dc,	// (0x0003627f) aid_size_cell_colour_4_pane_ParamLimits

0x61dc,	// (0x0003627f) aid_size_cell_colour_4_pane

0x6b2a,	// (0x00036bcd) title_pane_stacon_g1_ParamLimits

0x6b2a,	// (0x00036bcd) title_pane_stacon_g1

0xa3ad,	// (0x0003a450) popup_note_wait_window_g3_ParamLimits

0xa3ad,	// (0x0003a450) popup_note_wait_window_g3

0xa423,	// (0x0003a4c6) popup_note_wait_window_t5_ParamLimits

0xa423,	// (0x0003a4c6) popup_note_wait_window_t5

0x2343,	// (0x000323e6) main_feb_china_hwr_fs_writing_pane

0x77a0,	// (0x00037843) popup_feb_china_hwr_fs_window_ParamLimits

0x77a0,	// (0x00037843) popup_feb_china_hwr_fs_window

0x7d78,	// (0x00037e1b) aid_size_cell_hwr_fs_ParamLimits

0x7d78,	// (0x00037e1b) aid_size_cell_hwr_fs

0x9d81,	// (0x00039e24) bg_popup_sub_pane_cp3_ParamLimits

0x9d81,	// (0x00039e24) bg_popup_sub_pane_cp3

0x7d8d,	// (0x00037e30) grid_hwr_fs_pane_ParamLimits

0x7d8d,	// (0x00037e30) grid_hwr_fs_pane

0x7da5,	// (0x00037e48) linegrid_hwr_fs_pane_ParamLimits

0x7da5,	// (0x00037e48) linegrid_hwr_fs_pane

0x7db5,	// (0x00037e58) cell_hwr_fs_pane_ParamLimits

0x7db5,	// (0x00037e58) cell_hwr_fs_pane

0x9d8d,	// (0x00039e30) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d8d,	// (0x00039e30) linegrid_hwr_fs_pane_g1

0x9d99,	// (0x00039e3c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d99,	// (0x00039e3c) linegrid_hwr_fs_pane_g2

0x9dab,	// (0x00039e4e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9dab,	// (0x00039e4e) linegrid_hwr_fs_pane_g3

0x7dd7,	// (0x00037e7a) linegrid_hwr_fs_pane_g4_ParamLimits

0x7dd7,	// (0x00037e7a) linegrid_hwr_fs_pane_g4

0x7df1,	// (0x00037e94) linegrid_hwr_fs_pane_g5_ParamLimits

0x7df1,	// (0x00037e94) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0003f889) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0003f889) linegrid_hwr_fs_pane_g

0x9db7,	// (0x00039e5a) cell_hwr_fs_pane_g1_ParamLimits

0x9db7,	// (0x00039e5a) cell_hwr_fs_pane_g1

0x9b85,	// (0x00039c28) cell_hwr_fs_pane_g2_ParamLimits

0x9b85,	// (0x00039c28) cell_hwr_fs_pane_g2

0x9dcd,	// (0x00039e70) cell_hwr_fs_pane_g3_ParamLimits

0x9dcd,	// (0x00039e70) cell_hwr_fs_pane_g3

0x9dda,	// (0x00039e7d) cell_hwr_fs_pane_g4_ParamLimits

0x9dda,	// (0x00039e7d) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0003f894) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0003f894) cell_hwr_fs_pane_g

0x7e07,	// (0x00037eaa) cell_hwr_fs_pane_t1

0x2343,	// (0x000323e6) grid_highlight_pane_cp6

0x2343,	// (0x000323e6) main_idle_act2_pane

0x2857,	// (0x000328fa) aid_inside_area_popup_secondary

0xaa42,	// (0x0003aae5) aid_inside_area_window_primary_ParamLimits

0xaa42,	// (0x0003aae5) aid_inside_area_window_primary

0xb5c8,	// (0x0003b66b) ai2_news_ticker_pane

0xb5d0,	// (0x0003b673) aid_size_cell_ai1_link_ParamLimits

0xb5d0,	// (0x0003b673) aid_size_cell_ai1_link

0xb5ea,	// (0x0003b68d) popup_ai2_data_window_ParamLimits

0xb5ea,	// (0x0003b68d) popup_ai2_data_window

0xb600,	// (0x0003b6a3) popup_ai2_link_window_ParamLimits

0xb600,	// (0x0003b6a3) popup_ai2_link_window

0x9d81,	// (0x00039e24) bg_popup_sub_pane_cp4_ParamLimits

0x9d81,	// (0x00039e24) bg_popup_sub_pane_cp4

0xb614,	// (0x0003b6b7) grid_ai2_link_pane_ParamLimits

0xb614,	// (0x0003b6b7) grid_ai2_link_pane

0xb62b,	// (0x0003b6ce) popup_ai2_link_window_g1_ParamLimits

0xb62b,	// (0x0003b6ce) popup_ai2_link_window_g1

0xb637,	// (0x0003b6da) popup_ai2_link_window_g2_ParamLimits

0xb637,	// (0x0003b6da) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0003fa67) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0003fa67) popup_ai2_link_window_g

0xb646,	// (0x0003b6e9) ai2_mp_button_pane

0xb64e,	// (0x0003b6f1) ai2_mp_volume_pane

0x9f94,	// (0x0003a037) bg_popup_sub_pane_cp5_ParamLimits

0x9f94,	// (0x0003a037) bg_popup_sub_pane_cp5

0xb656,	// (0x0003b6f9) heading_ai2_gene_pane_ParamLimits

0xb656,	// (0x0003b6f9) heading_ai2_gene_pane

0xb662,	// (0x0003b705) list_ai2_gene_pane_ParamLimits

0xb662,	// (0x0003b705) list_ai2_gene_pane

0xb6aa,	// (0x0003b74d) cell_ai2_link_pane_ParamLimits

0xb6aa,	// (0x0003b74d) cell_ai2_link_pane

0xb6c0,	// (0x0003b763) cell_ai2_link_pane_g1

0x2343,	// (0x000323e6) grid_highlight_pane_cp7

0x824c,	// (0x000382ef) ai2_mp_volume_pane_g1

0xb790,	// (0x0003b833) ai2_mp_volume_pane_g2

0xb705,	// (0x0003b7a8) list_ai2_gene_pane_t1

0xb798,	// (0x0003b83b) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0003fa80) ai2_mp_volume_pane_g

0x8254,	// (0x000382f7) volume_small_pane_cp3

0xb7a0,	// (0x0003b843) aid_size_cell_ai2_button

0xb7a8,	// (0x0003b84b) grid_ai2_button_pane

0xb7b1,	// (0x0003b854) cell_ai2_button_pane_ParamLimits

0xb7b1,	// (0x0003b854) cell_ai2_button_pane

0x2339,	// (0x000323dc) cell_ai2_button_pane_g1

0x2343,	// (0x000323e6) grid_highlight_pane_cp8

0xb750,	// (0x0003b7f3) ai2_gene_pane_t1_ParamLimits

0xb750,	// (0x0003b7f3) ai2_gene_pane_t1

0x7706,	// (0x000377a9) aid_height_parent_landscape

0xb0ab,	// (0x0003b14e) aid_height_set_list

0xb0bc,	// (0x0003b15f) aid_size_parent

0xb3eb,	// (0x0003b48e) aid_size_cell_graphic_pane_ParamLimits

0xb672,	// (0x0003b715) popup_ai2_data_window_g1_ParamLimits

0xb672,	// (0x0003b715) popup_ai2_data_window_g1

0xb67e,	// (0x0003b721) ai2_news_ticker_pane_g1

0xb686,	// (0x0003b729) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0003fa6c) ai2_news_ticker_pane_g

0xb68e,	// (0x0003b731) ai2_news_ticker_pane_t1

0xb69c,	// (0x0003b73f) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0003fa71) ai2_news_ticker_pane_t

0xb6c9,	// (0x0003b76c) heading_ai2_gene_pane_g1

0xb6d1,	// (0x0003b774) heading_ai2_gene_pane_t1_ParamLimits

0xb6d1,	// (0x0003b774) heading_ai2_gene_pane_t1

0xb6e6,	// (0x0003b789) list_highlight_pane_cp6

0xb6ee,	// (0x0003b791) ai2_gene_pane_ParamLimits

0xb6ee,	// (0x0003b791) ai2_gene_pane

0xb713,	// (0x0003b7b6) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0003fa76) list_ai2_gene_pane_t

0xb721,	// (0x0003b7c4) list_highlight_pane_cp8_ParamLimits

0xb721,	// (0x0003b7c4) list_highlight_pane_cp8

0xb732,	// (0x0003b7d5) ai2_gene_pane_g1_ParamLimits

0xb732,	// (0x0003b7d5) ai2_gene_pane_g1

0xb744,	// (0x0003b7e7) ai2_gene_pane_g2_ParamLimits

0xb744,	// (0x0003b7e7) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0003fa7b) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0003fa7b) ai2_gene_pane_g

0x26f0,	// (0x00032793) scroll_pane_cp12

0x76c3,	// (0x00037766) control_pane_t3_ParamLimits

0x76c3,	// (0x00037766) control_pane_t3

0x9733,	// (0x000397d6) status_small_pane_g8_ParamLimits

0x9733,	// (0x000397d6) status_small_pane_g8

0x7882,	// (0x00037925) popup_find_window_ParamLimits

0x7a9b,	// (0x00037b3e) popup_note_image_window_ParamLimits

0x4642,	// (0x000346e5) list_double2_graphic_pane_vc_g1_ParamLimits

0x4642,	// (0x000346e5) list_double2_graphic_pane_vc_g1

0x464e,	// (0x000346f1) list_double2_graphic_pane_vc_g2_ParamLimits

0x464e,	// (0x000346f1) list_double2_graphic_pane_vc_g2

0x465a,	// (0x000346fd) list_double2_graphic_pane_vc_g3_ParamLimits

0x465a,	// (0x000346fd) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0003f857) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0003f857) list_double2_graphic_pane_vc_g

0x4666,	// (0x00034709) list_double2_graphic_pane_vc_t1_ParamLimits

0x4666,	// (0x00034709) list_double2_graphic_pane_vc_t1

0x464e,	// (0x000346f1) list_single_heading_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_heading_pane_vc_g1

0x465a,	// (0x000346fd) list_single_heading_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_heading_pane_vc_g

0x47d9,	// (0x0003487c) list_single_heading_pane_vc_t1_ParamLimits

0x47d9,	// (0x0003487c) list_single_heading_pane_vc_t1

0x47ef,	// (0x00034892) list_single_heading_pane_vc_t2_ParamLimits

0x47ef,	// (0x00034892) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0003f878) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0003f878) list_single_heading_pane_vc_t

0x4801,	// (0x000348a4) list_setting_number_pane_vc_g1_ParamLimits

0x4801,	// (0x000348a4) list_setting_number_pane_vc_g1

0x480d,	// (0x000348b0) list_setting_number_pane_vc_g2_ParamLimits

0x480d,	// (0x000348b0) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0003f87d) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0003f87d) list_setting_number_pane_vc_g

0x4819,	// (0x000348bc) list_setting_number_pane_vc_t1_ParamLimits

0x4819,	// (0x000348bc) list_setting_number_pane_vc_t1

0x482d,	// (0x000348d0) list_setting_number_pane_vc_t2_ParamLimits

0x482d,	// (0x000348d0) list_setting_number_pane_vc_t2

0x4849,	// (0x000348ec) list_setting_number_pane_vc_t3_ParamLimits

0x4849,	// (0x000348ec) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0003f882) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0003f882) list_setting_number_pane_vc_t

0x4875,	// (0x00034918) set_value_pane_vc_ParamLimits

0x4875,	// (0x00034918) set_value_pane_vc

0x4894,	// (0x00034937) list_double2_graphic_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double2_graphic_pane_vc

0xb28c,	// (0x0003b32f) list_double2_large_graphic_pane_vc_ParamLimits

0xb28c,	// (0x0003b32f) list_double2_large_graphic_pane_vc

0x4894,	// (0x00034937) list_double2_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double2_pane_vc

0x4894,	// (0x00034937) list_double_graphic_heading_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_graphic_heading_pane_vc

0x4894,	// (0x00034937) list_double_graphic_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_graphic_pane_vc

0x4894,	// (0x00034937) list_double_heading_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_heading_pane_vc

0xb29e,	// (0x0003b341) list_double_large_graphic_pane_vc_ParamLimits

0xb29e,	// (0x0003b341) list_double_large_graphic_pane_vc

0x4894,	// (0x00034937) list_double_number_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_number_pane_vc

0x4894,	// (0x00034937) list_double_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_pane_vc

0x4894,	// (0x00034937) list_double_time_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_double_time_pane_vc

0x4894,	// (0x00034937) list_setting_number_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_setting_number_pane_vc

0x4894,	// (0x00034937) list_setting_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_setting_pane_vc

0x4894,	// (0x00034937) list_single_graphic_heading_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_single_graphic_heading_pane_vc

0x4894,	// (0x00034937) list_single_heading_pane_vc_ParamLimits

0x4894,	// (0x00034937) list_single_heading_pane_vc

0x80ed,	// (0x00038190) list_single_number_heading_pane_vc_ParamLimits

0x80ed,	// (0x00038190) list_single_number_heading_pane_vc

0x46c8,	// (0x0003476b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x46c8,	// (0x0003476b) list_double_graphic_heading_pane_vc_g1

0x464e,	// (0x000346f1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x464e,	// (0x000346f1) list_double_graphic_heading_pane_vc_g2

0x465a,	// (0x000346fd) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x465a,	// (0x000346fd) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0003fa87) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0003fa87) list_double_graphic_heading_pane_vc_g

0x48a7,	// (0x0003494a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48a7,	// (0x0003494a) list_double_graphic_heading_pane_vc_t1

0x48bb,	// (0x0003495e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48bb,	// (0x0003495e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0003fa8e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0003fa8e) list_double_graphic_heading_pane_vc_t

0x4801,	// (0x000348a4) list_setting_pane_vc_g1_ParamLimits

0x4801,	// (0x000348a4) list_setting_pane_vc_g1

0x480d,	// (0x000348b0) list_setting_pane_vc_g2_ParamLimits

0x480d,	// (0x000348b0) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0003f87d) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0003f87d) list_setting_pane_vc_g

0x48d3,	// (0x00034976) list_setting_pane_vc_t1_ParamLimits

0x48d3,	// (0x00034976) list_setting_pane_vc_t1

0x48ef,	// (0x00034992) list_setting_pane_vc_t2_ParamLimits

0x48ef,	// (0x00034992) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003fad1) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003fad1) list_setting_pane_vc_t

0x4875,	// (0x00034918) set_value_pane_cp_vc_ParamLimits

0x4875,	// (0x00034918) set_value_pane_cp_vc

0x464e,	// (0x000346f1) list_single_number_heading_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_single_number_heading_pane_vc_g1

0x465a,	// (0x000346fd) list_single_number_heading_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_single_number_heading_pane_vc_g

0x4909,	// (0x000349ac) list_single_number_heading_pane_vc_t1_ParamLimits

0x4909,	// (0x000349ac) list_single_number_heading_pane_vc_t1

0x491f,	// (0x000349c2) list_single_number_heading_pane_vc_t2_ParamLimits

0x491f,	// (0x000349c2) list_single_number_heading_pane_vc_t2

0x4931,	// (0x000349d4) list_single_number_heading_pane_vc_t3_ParamLimits

0x4931,	// (0x000349d4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0003fad6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003fad6) list_single_number_heading_pane_vc_t

0x4943,	// (0x000349e6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4943,	// (0x000349e6) list_single_graphic_heading_pane_vc_g1

0x464e,	// (0x000346f1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x464e,	// (0x000346f1) list_single_graphic_heading_pane_vc_g4

0x465a,	// (0x000346fd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x465a,	// (0x000346fd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0003fadd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003fadd) list_single_graphic_heading_pane_vc_g

0x494f,	// (0x000349f2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x494f,	// (0x000349f2) list_single_graphic_heading_pane_vc_t1

0x4965,	// (0x00034a08) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4965,	// (0x00034a08) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0003fae4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0003fae4) list_single_graphic_heading_pane_vc_t

0x464e,	// (0x000346f1) list_double2_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_double2_pane_vc_g1

0x465a,	// (0x000346fd) list_double2_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_double2_pane_vc_g

0x4977,	// (0x00034a1a) list_double2_pane_vc_t1_ParamLimits

0x4977,	// (0x00034a1a) list_double2_pane_vc_t1

0x46d4,	// (0x00034777) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x46d4,	// (0x00034777) list_double2_large_graphic_pane_vc_g1

0x46e0,	// (0x00034783) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x46e0,	// (0x00034783) list_double2_large_graphic_pane_vc_g2

0x46ec,	// (0x0003478f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x46ec,	// (0x0003478f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0003fae9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0003fae9) list_double2_large_graphic_pane_vc_g

0x46f8,	// (0x0003479b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x46f8,	// (0x0003479b) list_double2_large_graphic_pane_vc_t1

0x498f,	// (0x00034a32) list_double_time_pane_vc_g1_ParamLimits

0x498f,	// (0x00034a32) list_double_time_pane_vc_g1

0x499b,	// (0x00034a3e) list_double_time_pane_vc_g2_ParamLimits

0x499b,	// (0x00034a3e) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0003faf0) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003faf0) list_double_time_pane_vc_g

0x49a7,	// (0x00034a4a) list_double_time_pane_vc_t1_ParamLimits

0x49a7,	// (0x00034a4a) list_double_time_pane_vc_t1

0x49cb,	// (0x00034a6e) list_double_time_pane_vc_t2_ParamLimits

0x49cb,	// (0x00034a6e) list_double_time_pane_vc_t2

0x4a1a,	// (0x00034abd) list_double_time_pane_vc_t3_ParamLimits

0x4a1a,	// (0x00034abd) list_double_time_pane_vc_t3

0x4a2c,	// (0x00034acf) list_double_time_pane_vc_t4_ParamLimits

0x4a2c,	// (0x00034acf) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0003faf5) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0003faf5) list_double_time_pane_vc_t

0x464e,	// (0x000346f1) list_double_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_double_pane_vc_g1

0x465a,	// (0x000346fd) list_double_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_double_pane_vc_g

0x4a40,	// (0x00034ae3) list_double_pane_vc_t1_ParamLimits

0x4a40,	// (0x00034ae3) list_double_pane_vc_t1

0x4a54,	// (0x00034af7) list_double_pane_vc_t2_ParamLimits

0x4a54,	// (0x00034af7) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0003fafe) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003fafe) list_double_pane_vc_t

0x464e,	// (0x000346f1) list_double_number_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_double_number_pane_vc_g1

0x465a,	// (0x000346fd) list_double_number_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_double_number_pane_vc_g

0x4a6c,	// (0x00034b0f) list_double_number_pane_vc_t1_ParamLimits

0x4a6c,	// (0x00034b0f) list_double_number_pane_vc_t1

0x4a40,	// (0x00034ae3) list_double_number_pane_vc_t2_ParamLimits

0x4a40,	// (0x00034ae3) list_double_number_pane_vc_t2

0x4a7e,	// (0x00034b21) list_double_number_pane_vc_t3_ParamLimits

0x4a7e,	// (0x00034b21) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0003fb03) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0003fb03) list_double_number_pane_vc_t

0x4a96,	// (0x00034b39) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4a96,	// (0x00034b39) list_double_large_graphic_pane_vc_g1

0x4ab8,	// (0x00034b5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ab8,	// (0x00034b5b) list_double_large_graphic_pane_vc_g2

0x4acc,	// (0x00034b6f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4acc,	// (0x00034b6f) list_double_large_graphic_pane_vc_g3

0x4adb,	// (0x00034b7e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4adb,	// (0x00034b7e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0003fb0a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0003fb0a) list_double_large_graphic_pane_vc_g

0x4ae7,	// (0x00034b8a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4ae7,	// (0x00034b8a) list_double_large_graphic_pane_vc_t1

0x4b03,	// (0x00034ba6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b03,	// (0x00034ba6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0003fb13) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0003fb13) list_double_large_graphic_pane_vc_t

0x464e,	// (0x000346f1) list_double_heading_pane_vc_g1_ParamLimits

0x464e,	// (0x000346f1) list_double_heading_pane_vc_g1

0x465a,	// (0x000346fd) list_double_heading_pane_vc_g2_ParamLimits

0x465a,	// (0x000346fd) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f66b) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f66b) list_double_heading_pane_vc_g

0x4b25,	// (0x00034bc8) list_double_heading_pane_vc_t1_ParamLimits

0x4b25,	// (0x00034bc8) list_double_heading_pane_vc_t1

0x4b39,	// (0x00034bdc) list_double_heading_pane_vc_t2_ParamLimits

0x4b39,	// (0x00034bdc) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0003fb18) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0003fb18) list_double_heading_pane_vc_t

0x4b51,	// (0x00034bf4) list_double_graphic_pane_vc_g1_ParamLimits

0x4b51,	// (0x00034bf4) list_double_graphic_pane_vc_g1

0x4b69,	// (0x00034c0c) list_double_graphic_pane_vc_g2_ParamLimits

0x4b69,	// (0x00034c0c) list_double_graphic_pane_vc_g2

0x464e,	// (0x000346f1) list_double_graphic_pane_vc_g3_ParamLimits

0x464e,	// (0x000346f1) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0003fb1d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0003fb1d) list_double_graphic_pane_vc_g

0x4b86,	// (0x00034c29) list_double_graphic_pane_vc_t1_ParamLimits

0x4b86,	// (0x00034c29) list_double_graphic_pane_vc_t1

0x4ba5,	// (0x00034c48) list_double_graphic_pane_vc_t2_ParamLimits

0x4ba5,	// (0x00034c48) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0003fb26) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0003fb26) list_double_graphic_pane_vc_t

0x5a98,	// (0x00035b3b) aid_size_cell_fastswap

0x5aa0,	// (0x00035b43) aid_size_cell_touch_ParamLimits

0x5aa0,	// (0x00035b43) aid_size_cell_touch

0x5d05,	// (0x00035da8) popup_fast_swap_wide_window_ParamLimits

0x5d05,	// (0x00035da8) popup_fast_swap_wide_window

0x5e0b,	// (0x00035eae) touch_pane_ParamLimits

0x5e0b,	// (0x00035eae) touch_pane

0x273d,	// (0x000327e0) button_value_adjust_pane_cp2

0x472f,	// (0x000347d2) button_value_adjust_pane_cp4

0x4737,	// (0x000347da) form_field_data_pane_cp2

0x6821,	// (0x000368c4) form_field_data_wide_pane_cp2

0x2a38,	// (0x00032adb) bg_scroll_pane_ParamLimits

0x6d26,	// (0x00036dc9) scroll_handle_pane_ParamLimits

0x6d3a,	// (0x00036ddd) scroll_sc2_down_pane_ParamLimits

0x6d3a,	// (0x00036ddd) scroll_sc2_down_pane

0x2a69,	// (0x00032b0c) scroll_sc2_up_pane_ParamLimits

0x2a69,	// (0x00032b0c) scroll_sc2_up_pane

0xbe66,	// (0x0003bf09) grid_wheel_folder_pane_g1_ParamLimits

0xbe66,	// (0x0003bf09) grid_wheel_folder_pane_g1

0x721b,	// (0x000372be) clock_nsta_pane_cp2_ParamLimits

0x721b,	// (0x000372be) clock_nsta_pane_cp2

0x94bd,	// (0x00039560) listscroll_midp_pane_ParamLimits

0x94c9,	// (0x0003956c) midp_canvas_pane

0x97ad,	// (0x00039850) nsta_clock_indic_pane

0x97e6,	// (0x00039889) listscroll_form_pane_vc

0x97ee,	// (0x00039891) listscroll_set_pane_vc_ParamLimits

0x97ee,	// (0x00039891) listscroll_set_pane_vc

0x98f3,	// (0x00039996) clock_nsta_pane

0x996e,	// (0x00039a11) indicator_nsta_pane

0x9c4b,	// (0x00039cee) bg_popup_sub_pane_cp2_ParamLimits

0x9c5f,	// (0x00039d02) find_pane_cp2_ParamLimits

0x9c5f,	// (0x00039d02) find_pane_cp2

0x9c75,	// (0x00039d18) grid_toobar_pane_ParamLimits

0x9d55,	// (0x00039df8) list_form_gen_pane_vc_ParamLimits

0x9d55,	// (0x00039df8) list_form_gen_pane_vc

0x9d6b,	// (0x00039e0e) scroll_pane_cp8_vc_ParamLimits

0x9d6b,	// (0x00039e0e) scroll_pane_cp8_vc

0x9de7,	// (0x00039e8a) data_form_wide_pane_vc_ParamLimits

0x9de7,	// (0x00039e8a) data_form_wide_pane_vc

0x9df3,	// (0x00039e96) form_field_data_wide_pane_vc_g1

0x9dfb,	// (0x00039e9e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dfb,	// (0x00039e9e) form_field_data_wide_pane_vc_t1

0x2751,	// (0x000327f4) input_focus_pane_cp6_vc_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_cp6_vc

0xa128,	// (0x0003a1cb) list_midp_pane_ParamLimits

0xa134,	// (0x0003a1d7) scroll_pane_cp16_ParamLimits

0xa134,	// (0x0003a1d7) scroll_pane_cp16

0xa18a,	// (0x0003a22d) button_value_adjust_pane_ParamLimits

0xa18a,	// (0x0003a22d) button_value_adjust_pane

0xb0ce,	// (0x0003b171) button_value_adjust_pane_cp6_ParamLimits

0xb0ce,	// (0x0003b171) button_value_adjust_pane_cp6

0xb1f4,	// (0x0003b297) settings_code_pane_cp_ParamLimits

0xb1f4,	// (0x0003b297) settings_code_pane_cp

0x2339,	// (0x000323dc) cell_touch_pane_g1

0x2339,	// (0x000323dc) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0003f79c) cell_touch_pane_g

0xb7c3,	// (0x0003b866) cell_touch_pane_cp_ParamLimits

0xb7c3,	// (0x0003b866) cell_touch_pane_cp

0xb7d3,	// (0x0003b876) cell_touch_pane_ParamLimits

0xb7d3,	// (0x0003b876) cell_touch_pane

0x2339,	// (0x000323dc) scroll_sc2_down_pane_g1

0x2339,	// (0x000323dc) scroll_sc2_up_pane_g1

0x2343,	// (0x000323e6) bg_set_opt_pane_cp4_vc

0xb7e5,	// (0x0003b888) list_set_graphic_pane_vc_g1_ParamLimits

0xb7e5,	// (0x0003b888) list_set_graphic_pane_vc_g1

0xb7f1,	// (0x0003b894) list_set_graphic_pane_vc_g2_ParamLimits

0xb7f1,	// (0x0003b894) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0003fa93) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0003fa93) list_set_graphic_pane_vc_g

0xb7fd,	// (0x0003b8a0) text_primary_small_cp13_vc_ParamLimits

0xb7fd,	// (0x0003b8a0) text_primary_small_cp13_vc

0xb815,	// (0x0003b8b8) list_set_graphic_pane_vc_ParamLimits

0xb815,	// (0x0003b8b8) list_set_graphic_pane_vc

0x2343,	// (0x000323e6) input_focus_pane_cp2_vc

0x2339,	// (0x000323dc) setting_code_pane_vc_g1

0x23b6,	// (0x00032459) setting_code_pane_vc_t1

0xb828,	// (0x0003b8cb) set_text_pane_vc_t1_ParamLimits

0xb828,	// (0x0003b8cb) set_text_pane_vc_t1

0x2343,	// (0x000323e6) input_focus_pane_cp1_vc

0xb844,	// (0x0003b8e7) list_set_text_pane_vc

0x2339,	// (0x000323dc) setting_text_pane_vc_g1

0x2343,	// (0x000323e6) bg_set_opt_pane_cp2_vc

0x23ad,	// (0x00032450) setting_slider_graphic_pane_vc_g1

0xb84e,	// (0x0003b8f1) setting_slider_graphic_pane_vc_t1

0xb85e,	// (0x0003b901) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003fa98) setting_slider_graphic_pane_vc_t

0xb86e,	// (0x0003b911) slider_set_pane_cp_vc

0xb876,	// (0x0003b919) slider_set_pane_vc_g1

0xb87f,	// (0x0003b922) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0003fa9d) slider_set_pane_vc_g

0x27a9,	// (0x0003284c) set_opt_bg_pane_g1_copy1

0x27b1,	// (0x00032854) set_opt_bg_pane_g2_copy1

0xb8ab,	// (0x0003b94e) set_opt_bg_pane_g3_copy1

0x27c1,	// (0x00032864) set_opt_bg_pane_g4_copy1

0x27c9,	// (0x0003286c) set_opt_bg_pane_g5_copy1

0x27d1,	// (0x00032874) set_opt_bg_pane_g6_copy1

0xb8b3,	// (0x0003b956) set_opt_bg_pane_g7_copy1

0xb8bb,	// (0x0003b95e) set_opt_bg_pane_g8_copy1

0xb8c3,	// (0x0003b966) set_opt_bg_pane_g9_copy1

0x2343,	// (0x000323e6) bg_set_opt_pane_cp_vc

0xb8cb,	// (0x0003b96e) setting_slider_pane_vc_t1

0xb8da,	// (0x0003b97d) setting_slider_pane_vc_t2

0xb8ea,	// (0x0003b98d) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0003faac) setting_slider_pane_vc_t

0xb8fa,	// (0x0003b99d) slider_set_pane_vc

0x7e48,	// (0x00037eeb) volume_set_pane_vc_g1

0x825d,	// (0x00038300) volume_set_pane_vc_g2

0x8266,	// (0x00038309) volume_set_pane_vc_g3

0x826f,	// (0x00038312) volume_set_pane_vc_g4

0x8278,	// (0x0003831b) volume_set_pane_vc_g5

0x8281,	// (0x00038324) volume_set_pane_vc_g6

0x828a,	// (0x0003832d) volume_set_pane_vc_g7

0x8293,	// (0x00038336) volume_set_pane_vc_g8

0x829c,	// (0x0003833f) volume_set_pane_vc_g9

0x82a5,	// (0x00038348) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0003fab3) volume_set_pane_vc_g

0xb902,	// (0x0003b9a5) volume_set_pane_vc

0xb90a,	// (0x0003b9ad) button_value_adjust_pane_cp1_vc

0xb914,	// (0x0003b9b7) list_highlight_pane_cp2_vc

0xb91d,	// (0x0003b9c0) list_set_pane_vc_ParamLimits

0xb91d,	// (0x0003b9c0) list_set_pane_vc

0xb97b,	// (0x0003ba1e) main_pane_set_vc_t1_ParamLimits

0xb97b,	// (0x0003ba1e) main_pane_set_vc_t1

0xb990,	// (0x0003ba33) main_pane_set_vc_t2_ParamLimits

0xb990,	// (0x0003ba33) main_pane_set_vc_t2

0xb9a2,	// (0x0003ba45) main_pane_set_vc_t3_ParamLimits

0xb9a2,	// (0x0003ba45) main_pane_set_vc_t3

0xb9b4,	// (0x0003ba57) main_pane_set_vc_t4_ParamLimits

0xb9b4,	// (0x0003ba57) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0003fac8) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0003fac8) main_pane_set_vc_t

0xb9c6,	// (0x0003ba69) setting_code_pane_vc_ParamLimits

0xb9c6,	// (0x0003ba69) setting_code_pane_vc

0xb9d5,	// (0x0003ba78) setting_slider_graphic_pane_vc

0xb9d5,	// (0x0003ba78) setting_slider_pane_vc

0xb9d5,	// (0x0003ba78) setting_text_pane_vc

0xb9d5,	// (0x0003ba78) setting_volume_pane_vc

0xb9dd,	// (0x0003ba80) scroll_pane_cp121_vc

0x272b,	// (0x000327ce) set_content_pane_vc

0xb9e5,	// (0x0003ba88) button_value_adjust_pane_g1

0xb9ee,	// (0x0003ba91) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0003fb2b) button_value_adjust_pane_g

0xb9f7,	// (0x0003ba9a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9f7,	// (0x0003ba9a) form_field_slider_wide_pane_vc_t1

0xba0b,	// (0x0003baae) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba0b,	// (0x0003baae) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0003fb30) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003fb30) form_field_slider_wide_pane_vc_t

0x2391,	// (0x00032434) input_focus_pane_cp10_vc_ParamLimits

0x2391,	// (0x00032434) input_focus_pane_cp10_vc

0xba39,	// (0x0003badc) slider_cont_pane_cp1_vc_ParamLimits

0xba39,	// (0x0003badc) slider_cont_pane_cp1_vc

0xba4b,	// (0x0003baee) slider_form_pane_g1_cp2

0xb87f,	// (0x0003b922) slider_form_pane_g2_cp2

0xba78,	// (0x0003bb1b) form_field_slider_pane_vc_t3

0xba86,	// (0x0003bb29) form_field_slider_pane_vc_t4

0xba94,	// (0x0003bb37) slider_form_pane_vc_ParamLimits

0xba94,	// (0x0003bb37) slider_form_pane_vc

0xbaa1,	// (0x0003bb44) form_field_slider_pane_vc_t1_ParamLimits

0xbaa1,	// (0x0003bb44) form_field_slider_pane_vc_t1

0xba0b,	// (0x0003baae) form_field_slider_pane_vc_t2_ParamLimits

0xba0b,	// (0x0003baae) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003fb42) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003fb42) form_field_slider_pane_vc_t

0x2391,	// (0x00032434) input_focus_pane_cp9_vc_ParamLimits

0x2391,	// (0x00032434) input_focus_pane_cp9_vc

0xbabd,	// (0x0003bb60) slider_cont_pane_vc_ParamLimits

0xbabd,	// (0x0003bb60) slider_cont_pane_vc

0xbad1,	// (0x0003bb74) list_form_graphic_pane_cp_vc_ParamLimits

0xbad1,	// (0x0003bb74) list_form_graphic_pane_cp_vc

0x9df3,	// (0x00039e96) form_field_popup_wide_pane_vc_g1

0xbae6,	// (0x0003bb89) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbae6,	// (0x0003bb89) form_field_popup_wide_pane_vc_t1

0x2751,	// (0x000327f4) input_focus_pane_cp8_vc_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_cp8_vc

0xbb2b,	// (0x0003bbce) list_form_wide_pane_vc_ParamLimits

0xbb2b,	// (0x0003bbce) list_form_wide_pane_vc

0xbb37,	// (0x0003bbda) list_form_graphic_pane_vc_g1

0xbb3f,	// (0x0003bbe2) list_form_graphic_pane_vc_t1_ParamLimits

0xbb3f,	// (0x0003bbe2) list_form_graphic_pane_vc_t1

0x239f,	// (0x00032442) list_highlight_pane_cp5_vc_ParamLimits

0x239f,	// (0x00032442) list_highlight_pane_cp5_vc

0xbb5b,	// (0x0003bbfe) list_form_graphic_pane_vc_ParamLimits

0xbb5b,	// (0x0003bbfe) list_form_graphic_pane_vc

0x9df3,	// (0x00039e96) form_field_popup_pane_vc_g1

0xbb71,	// (0x0003bc14) form_field_popup_pane_vc_t1_ParamLimits

0xbb71,	// (0x0003bc14) form_field_popup_pane_vc_t1

0x2751,	// (0x000327f4) input_focus_pane_cp7_vc_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_cp7_vc

0xbb88,	// (0x0003bc2b) list_form_pane_vc_ParamLimits

0xbb88,	// (0x0003bc2b) list_form_pane_vc

0xbb94,	// (0x0003bc37) data_form_pane_vc_t1_ParamLimits

0xbb94,	// (0x0003bc37) data_form_pane_vc_t1

0x27a9,	// (0x0003284c) input_focus_pane_vc_g1

0x27b1,	// (0x00032854) input_focus_pane_vc_g2

0x27b9,	// (0x0003285c) input_focus_pane_vc_g3

0x27c1,	// (0x00032864) input_focus_pane_vc_g4

0x27c9,	// (0x0003286c) input_focus_pane_vc_g5

0x27d1,	// (0x00032874) input_focus_pane_vc_g6

0x27d9,	// (0x0003287c) input_focus_pane_vc_g7

0x27e1,	// (0x00032884) input_focus_pane_vc_g8

0x27e9,	// (0x0003288c) input_focus_pane_vc_g9

0x2339,	// (0x000323dc) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0003f725) input_focus_pane_vc_g

0x9de7,	// (0x00039e8a) data_form_pane_vc_ParamLimits

0x9de7,	// (0x00039e8a) data_form_pane_vc

0x9df3,	// (0x00039e96) form_field_data_pane_vc_g1

0xbbaf,	// (0x0003bc52) form_field_data_pane_vc_t1_ParamLimits

0xbbaf,	// (0x0003bc52) form_field_data_pane_vc_t1

0x2751,	// (0x000327f4) input_focus_pane_vc_ParamLimits

0x2751,	// (0x000327f4) input_focus_pane_vc

0xbbc9,	// (0x0003bc6c) button_value_adjust_pane_cp3_vc

0xbbd1,	// (0x0003bc74) button_value_adjust_pane_cp5_vc

0xbbd9,	// (0x0003bc7c) form_field_data_pane_vc_ParamLimits

0xbbd9,	// (0x0003bc7c) form_field_data_pane_vc

0xbbf0,	// (0x0003bc93) form_field_data_pane_vc_cp2

0xbbf8,	// (0x0003bc9b) form_field_data_wide_pane_vc_ParamLimits

0xbbf8,	// (0x0003bc9b) form_field_data_wide_pane_vc

0xbc0e,	// (0x0003bcb1) form_field_data_wide_pane_vc_cp2

0xbc16,	// (0x0003bcb9) form_field_popup_pane_vc_ParamLimits

0xbc16,	// (0x0003bcb9) form_field_popup_pane_vc

0xbc2d,	// (0x0003bcd0) form_field_popup_wide_pane_vc_ParamLimits

0xbc2d,	// (0x0003bcd0) form_field_popup_wide_pane_vc

0xbc43,	// (0x0003bce6) form_field_slider_pane_vc_ParamLimits

0xbc43,	// (0x0003bce6) form_field_slider_pane_vc

0xbc56,	// (0x0003bcf9) form_field_slider_wide_pane_vc_ParamLimits

0xbc56,	// (0x0003bcf9) form_field_slider_wide_pane_vc

0xbc69,	// (0x0003bd0c) grid_touch_1_pane_ParamLimits

0xbc69,	// (0x0003bd0c) grid_touch_1_pane

0xbc75,	// (0x0003bd18) grid_touch_2_pane_ParamLimits

0xbc75,	// (0x0003bd18) grid_touch_2_pane

0x9778,	// (0x0003981b) touch_pane_g1_ParamLimits

0x9778,	// (0x0003981b) touch_pane_g1

0xbc8d,	// (0x0003bd30) cell_app_pane_cp_wide_ParamLimits

0xbc8d,	// (0x0003bd30) cell_app_pane_cp_wide

0xbc9e,	// (0x0003bd41) grid_popup_fast_wide_pane_ParamLimits

0xbc9e,	// (0x0003bd41) grid_popup_fast_wide_pane

0xbcb2,	// (0x0003bd55) scroll_pane_cp19_ParamLimits

0xbcb2,	// (0x0003bd55) scroll_pane_cp19

0x2343,	// (0x000323e6) bg_popup_window_pane_cp20

0xbcc6,	// (0x0003bd69) listscroll_popup_fast_wide_pane

0x239f,	// (0x00032442) grid_indicator_nsta_pane

0xbcce,	// (0x0003bd71) clock_nsta_pane_g1

0xbcd7,	// (0x0003bd7a) clock_nsta_pane_t1

0xbcf3,	// (0x0003bd96) cell_indicator_nsta_pane_ParamLimits

0xbcf3,	// (0x0003bd96) cell_indicator_nsta_pane

0xbd24,	// (0x0003bdc7) cell_indicator_nsta_pane_g1

0xbd32,	// (0x0003bdd5) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0003fb53) cell_indicator_nsta_pane_g

0xbd3f,	// (0x0003bde2) clock_nsta_pane_cp

0xbd47,	// (0x0003bdea) indicator_nsta_pane_cp

0xbd4f,	// (0x0003bdf2) nsta_clock_indic_pane_g1

0x23db,	// (0x0003247e) grid_indicator_pane

0x6dd8,	// (0x00036e7b) scroll_pane_cp29

0x7148,	// (0x000371eb) indicator_nsta_pane_cp2_ParamLimits

0x7148,	// (0x000371eb) indicator_nsta_pane_cp2

0x239f,	// (0x00032442) main_apps_wheel_pane

0xa00b,	// (0x0003a0ae) form_midp_field_text_pane_ParamLimits

0xa154,	// (0x0003a1f7) scroll_bar_cp050_ParamLimits

0xbd9f,	// (0x0003be42) cell_indicator_pane_ParamLimits

0xbd9f,	// (0x0003be42) cell_indicator_pane

0xbdb8,	// (0x0003be5b) cell_indicator_pane_g1

0xbdc2,	// (0x0003be65) grid_wheel_folder_pane_ParamLimits

0xbdc2,	// (0x0003be65) grid_wheel_folder_pane

0xbdd8,	// (0x0003be7b) list_wheel_apps_pane_ParamLimits

0xbdd8,	// (0x0003be7b) list_wheel_apps_pane

0xbde9,	// (0x0003be8c) main_apps_wheel_pane_g1_ParamLimits

0xbde9,	// (0x0003be8c) main_apps_wheel_pane_g1

0xbdfd,	// (0x0003bea0) main_apps_wheel_pane_g2_ParamLimits

0xbdfd,	// (0x0003bea0) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0003fb6f) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0003fb6f) main_apps_wheel_pane_g

0xbe15,	// (0x0003beb8) main_apps_wheel_pane_t1_ParamLimits

0xbe15,	// (0x0003beb8) main_apps_wheel_pane_t1

0xbe38,	// (0x0003bedb) list_wheel_apps_pane_g1

0xbe40,	// (0x0003bee3) list_wheel_apps_pane_g2

0xbe48,	// (0x0003beeb) list_wheel_apps_pane_g3

0xbe52,	// (0x0003bef5) list_wheel_apps_pane_g4

0xbe5c,	// (0x0003beff) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0003fb74) list_wheel_apps_pane_g

0x7444,	// (0x000374e7) navi_icon_text_pane

0x9822,	// (0x000398c5) aid_fill_nsta

0xbe7f,	// (0x0003bf22) navi_icon_text_pane_g1

0xbe8b,	// (0x0003bf2e) navi_icon_text_pane_t1

0x72e7,	// (0x0003738a) list_set_graphic_pane_t1_ParamLimits

0x72e7,	// (0x0003738a) list_set_graphic_pane_t1

0xa88b,	// (0x0003a92e) popup_midp_note_alarm_window_t6_ParamLimits

0xa88b,	// (0x0003a92e) popup_midp_note_alarm_window_t6

0xa89d,	// (0x0003a940) popup_midp_note_alarm_window_t7_ParamLimits

0xa89d,	// (0x0003a940) popup_midp_note_alarm_window_t7

0xa8af,	// (0x0003a952) popup_midp_note_alarm_window_t8_ParamLimits

0xa8af,	// (0x0003a952) popup_midp_note_alarm_window_t8

0xa8c1,	// (0x0003a964) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c1,	// (0x0003a964) popup_midp_note_alarm_window_t9

0xa8d3,	// (0x0003a976) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d3,	// (0x0003a976) popup_midp_note_alarm_window_t10

0xa8e5,	// (0x0003a988) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e5,	// (0x0003a988) popup_midp_note_alarm_window_t11

0xa8f7,	// (0x0003a99a) scroll_pane_cp17_ParamLimits

0xa8f7,	// (0x0003a99a) scroll_pane_cp17

0x7e48,	// (0x00037eeb) volume_small_pane_cp_g1

0x82ae,	// (0x00038351) volume_small_pane_cp_g2

0x82b7,	// (0x0003835a) volume_small_pane_cp_g3

0x82c0,	// (0x00038363) volume_small_pane_cp_g4

0x82c9,	// (0x0003836c) volume_small_pane_cp_g5

0x8278,	// (0x0003831b) volume_small_pane_cp_g6

0x82d2,	// (0x00038375) volume_small_pane_cp_g7

0x82db,	// (0x0003837e) volume_small_pane_cp_g8

0x82e4,	// (0x00038387) volume_small_pane_cp_g9

0x82ed,	// (0x00038390) volume_small_pane_cp_g10

0x9596,	// (0x00039639) midp_ticker_pane_g1_ParamLimits

0x95a2,	// (0x00039645) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0003f7f1) midp_ticker_pane_g_ParamLimits

0x95ae,	// (0x00039651) midp_ticker_pane_t1_ParamLimits

0x9838,	// (0x000398db) aid_fill_nsta_2

0xa140,	// (0x0003a1e3) list_form2_midp_pane

0xb23f,	// (0x0003b2e2) midp_editing_number_pane_ParamLimits

0xb24e,	// (0x0003b2f1) midp_ticker_pane_ParamLimits

0xbe9d,	// (0x0003bf40) form2_midp_field_pane

0xbec1,	// (0x0003bf64) scroll_pane_cp51

0xbee1,	// (0x0003bf84) form2_midp_button_pane_ParamLimits

0xbee1,	// (0x0003bf84) form2_midp_button_pane

0xbef3,	// (0x0003bf96) form2_midp_content_pane_ParamLimits

0xbef3,	// (0x0003bf96) form2_midp_content_pane

0xbf0d,	// (0x0003bfb0) form2_midp_field_choice_group_pane

0xbf15,	// (0x0003bfb8) form2_midp_field_pane_g1

0xbf1d,	// (0x0003bfc0) form2_midp_field_pane_g2

0xbf25,	// (0x0003bfc8) form2_midp_field_pane_g3

0xbf2d,	// (0x0003bfd0) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0003fb99) form2_midp_field_pane_g

0xbf35,	// (0x0003bfd8) form2_midp_gauge_slider_pane

0xbf3d,	// (0x0003bfe0) form2_midp_gauge_wait_pane

0xbf45,	// (0x0003bfe8) form2_midp_image_pane_ParamLimits

0xbf45,	// (0x0003bfe8) form2_midp_image_pane

0xbf60,	// (0x0003c003) form2_midp_label_pane_ParamLimits

0xbf60,	// (0x0003c003) form2_midp_label_pane

0xbf79,	// (0x0003c01c) form2_midp_label_pane_cp_ParamLimits

0xbf79,	// (0x0003c01c) form2_midp_label_pane_cp

0xbf9a,	// (0x0003c03d) form2_midp_string_pane_ParamLimits

0xbf9a,	// (0x0003c03d) form2_midp_string_pane

0x4bcf,	// (0x00034c72) form2_midp_text_pane_ParamLimits

0x4bcf,	// (0x00034c72) form2_midp_text_pane

0xbfac,	// (0x0003c04f) form2_midp_time_pane

0xbfbc,	// (0x0003c05f) input_focus_pane_cp51_ParamLimits

0xbfbc,	// (0x0003c05f) input_focus_pane_cp51

0xbfd4,	// (0x0003c077) form2_midp_label_pane_t1_ParamLimits

0xbfd4,	// (0x0003c077) form2_midp_label_pane_t1

0x4be8,	// (0x00034c8b) form2_mdip_text_pane_t1_ParamLimits

0x4be8,	// (0x00034c8b) form2_mdip_text_pane_t1

0x4c06,	// (0x00034ca9) form2_midp_time_pane_t1

0xc01d,	// (0x0003c0c0) form2_midp_gauge_slider_pane_t1

0xc02f,	// (0x0003c0d2) form2_midp_gauge_slider_pane_t2

0xc041,	// (0x0003c0e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0003fba2) form2_midp_gauge_slider_pane_t

0xc053,	// (0x0003c0f6) form2_midp_slider_pane

0xc05f,	// (0x0003c102) form2_midp_gauge_wait_pane_t1

0xc06d,	// (0x0003c110) form2_midp_wait_pane_ParamLimits

0xc06d,	// (0x0003c110) form2_midp_wait_pane

0xc098,	// (0x0003c13b) list_single_2graphic_pane_cp4_ParamLimits

0xc098,	// (0x0003c13b) list_single_2graphic_pane_cp4

0x9e5c,	// (0x00039eff) list_single_midp_graphic_pane_cp_ParamLimits

0x9e5c,	// (0x00039eff) list_single_midp_graphic_pane_cp

0x2343,	// (0x000323e6) list_highlight_pane_cp20

0xc0c0,	// (0x0003c163) list_single_2graphic_pane_g1_cp4

0xb6c9,	// (0x0003b76c) list_single_2graphic_pane_g2_cp4

0xc0c8,	// (0x0003c16b) list_single_2graphic_pane_t1_cp4

0x239f,	// (0x00032442) list_highlight_pane_cp21

0xc0d7,	// (0x0003c17a) list_single_midp_graphic_pane_g4_cp

0xc0e6,	// (0x0003c189) list_single_midp_graphic_pane_t1_cp

0xc0fb,	// (0x0003c19e) form2_mdip_string_pane_t1_ParamLimits

0xc0fb,	// (0x0003c19e) form2_mdip_string_pane_t1

0x2343,	// (0x000323e6) bg_wml_button_pane_cp2

0x2339,	// (0x000323dc) form2_midp_image_pane_g1

0x471a,	// (0x000347bd) list_double_large_graphic_pane_g5_ParamLimits

0x471a,	// (0x000347bd) list_double_large_graphic_pane_g5

0x94bd,	// (0x00039560) midp_form_pane_ParamLimits

0x239f,	// (0x00032442) main_apps_wheel_pane_ParamLimits

0x7ac1,	// (0x00037b64) popup_preview_window_ParamLimits

0x7ac1,	// (0x00037b64) popup_preview_window

0x7c7c,	// (0x00037d1f) popup_touch_info_window_ParamLimits

0x7c7c,	// (0x00037d1f) popup_touch_info_window

0x7c9a,	// (0x00037d3d) popup_touch_menu_window_ParamLimits

0x7c9a,	// (0x00037d3d) popup_touch_menu_window

0x232f,	// (0x000323d2) bg_popup_sub_pane_cp6

0xc202,	// (0x0003c2a5) list_touch_menu_pane

0xc20a,	// (0x0003c2ad) list_single_touch_menu_pane_ParamLimits

0xc20a,	// (0x0003c2ad) list_single_touch_menu_pane

0xc220,	// (0x0003c2c3) list_single_touch_menu_pane_t1

0x239f,	// (0x00032442) bg_popup_sub_pane_cp7_ParamLimits

0x239f,	// (0x00032442) bg_popup_sub_pane_cp7

0xc22e,	// (0x0003c2d1) heading_sub_pane

0xc236,	// (0x0003c2d9) list_touch_info_pane_ParamLimits

0xc236,	// (0x0003c2d9) list_touch_info_pane

0xc245,	// (0x0003c2e8) list_single_touch_info_pane_ParamLimits

0xc245,	// (0x0003c2e8) list_single_touch_info_pane

0xc257,	// (0x0003c2fa) list_single_touch_info_pane_t1

0xc265,	// (0x0003c308) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0003fbb0) list_single_touch_info_pane_t

0x94b5,	// (0x00039558) bg_popup_heading_pane_cp

0xc273,	// (0x0003c316) heading_sub_pane_t1

0x9d81,	// (0x00039e24) bg_popup_preview_window_pane_cp_ParamLimits

0x9d81,	// (0x00039e24) bg_popup_preview_window_pane_cp

0xc22e,	// (0x0003c2d1) heading_preview_pane

0xc236,	// (0x0003c2d9) list_preview_pane_ParamLimits

0xc236,	// (0x0003c2d9) list_preview_pane

0xc281,	// (0x0003c324) popup_preview_window_g1

0xc245,	// (0x0003c2e8) list_single_preview_pane_ParamLimits

0xc245,	// (0x0003c2e8) list_single_preview_pane

0xc289,	// (0x0003c32c) list_single_preview_pane_g1

0xc291,	// (0x0003c334) list_single_preview_pane_t1

0xc257,	// (0x0003c2fa) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0003fbb5) list_single_preview_pane_t

0xc29f,	// (0x0003c342) bg_popup_heading_pane_cp2_ParamLimits

0xc29f,	// (0x0003c342) bg_popup_heading_pane_cp2

0xc2b5,	// (0x0003c358) heading_preview_pane_g1

0xc2bd,	// (0x0003c360) heading_preview_pane_t1_ParamLimits

0xc2bd,	// (0x0003c360) heading_preview_pane_t1

0x23f2,	// (0x00032495) soft_indicator_pane_t1_ParamLimits

0x26cd,	// (0x00032770) scroll_pane_ParamLimits

0x2a60,	// (0x00032b03) scroll_sc2_left_pane

0x2a57,	// (0x00032afa) scroll_sc2_right_pane

0x2a7f,	// (0x00032b22) scroll_bg_pane_g1_ParamLimits

0x2a94,	// (0x00032b37) scroll_bg_pane_g2_ParamLimits

0x2aac,	// (0x00032b4f) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0003f77c) scroll_bg_pane_g_ParamLimits

0x2a7f,	// (0x00032b22) scroll_handle_pane_g1_ParamLimits

0x2ac1,	// (0x00032b64) scroll_handle_pane_g2_ParamLimits

0x2aac,	// (0x00032b4f) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0003f783) scroll_handle_pane_g_ParamLimits

0x7744,	// (0x000377e7) popup_choice_list_window_ParamLimits

0x7744,	// (0x000377e7) popup_choice_list_window

0x9c57,	// (0x00039cfa) choice_list_pane

0x9cd9,	// (0x00039d7c) cell_toolbar_pane_t1

0x9d01,	// (0x00039da4) toolbar_button_pane_ParamLimits

0xadb1,	// (0x0003ae54) ai_gene_pane_1_t2_ParamLimits

0xadb1,	// (0x0003ae54) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0003f9a6) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0003f9a6) ai_gene_pane_1_t

0xc2da,	// (0x0003c37d) scroll_sc2_left_pane_g1

0xc2da,	// (0x0003c37d) scroll_sc2_right_pane_g1

0x9800,	// (0x000398a3) bg_popup_sub_pane_cp10

0xc2e4,	// (0x0003c387) list_choice_list_pane

0xc2fd,	// (0x0003c3a0) list_single_choice_list_pane_ParamLimits

0xc2fd,	// (0x0003c3a0) list_single_choice_list_pane

0xc310,	// (0x0003c3b3) list_single_choice_list_pane_g1

0x6a7d,	// (0x00036b20) list_single_choice_list_pane_t1_ParamLimits

0x6a7d,	// (0x00036b20) list_single_choice_list_pane_t1

0xc318,	// (0x0003c3bb) choice_list_pane_g1

0xc320,	// (0x0003c3c3) choice_list_pane_t1

0x232f,	// (0x000323d2) input_focus_pane_cp11

0x29cc,	// (0x00032a6f) title_pane_stacon_g2_ParamLimits

0x29cc,	// (0x00032a6f) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0003f762) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0003f762) title_pane_stacon_g

0x94b5,	// (0x00039558) cursor_press_pane

0x77ec,	// (0x0003788f) popup_fep_hwr_window_ParamLimits

0x77ec,	// (0x0003788f) popup_fep_hwr_window

0x7864,	// (0x00037907) popup_fep_vkb_window_ParamLimits

0x7864,	// (0x00037907) popup_fep_vkb_window

0xc32e,	// (0x0003c3d1) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0003fbde) fep_vkb_side_pane_g_ParamLimits

0x832f,	// (0x000383d2) fep_hwr_candidate_pane_ParamLimits

0x832f,	// (0x000383d2) fep_hwr_candidate_pane

0x8359,	// (0x000383fc) fep_hwr_side_pane_ParamLimits

0x8359,	// (0x000383fc) fep_hwr_side_pane

0x8379,	// (0x0003841c) fep_hwr_top_pane_ParamLimits

0x8379,	// (0x0003841c) fep_hwr_top_pane

0x8391,	// (0x00038434) fep_hwr_write_pane_ParamLimits

0x8391,	// (0x00038434) fep_hwr_write_pane

0xfb3b,	// (0x0003fbde) fep_vkb_side_pane_g

0xc336,	// (0x0003c3d9) fep_hwr_top_pane_g1

0xc348,	// (0x0003c3eb) fep_hwr_top_pane_g2

0x83cb,	// (0x0003846e) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0003fbba) fep_hwr_top_pane_g

0x83e0,	// (0x00038483) fep_hwr_top_text_pane

0x2b84,	// (0x00032c27) fep_hwr_top_text_pane_g1

0xc37e,	// (0x0003c421) fep_hwr_top_text_pane_t1

0x84d6,	// (0x00038579) fep_hwr_candidate_pane_g1

0xc5c3,	// (0x0003c666) fep_vkb_keypad_pane_g3_ParamLimits

0xc5c3,	// (0x0003c666) fep_vkb_keypad_pane_g3

0xc5eb,	// (0x0003c68e) fep_vkb_keypad_pane_g4_ParamLimits

0xc5eb,	// (0x0003c68e) fep_vkb_keypad_pane_g4

0xc65a,	// (0x0003c6fd) fep_vkb_bottom_pane_g2_ParamLimits

0xc65a,	// (0x0003c6fd) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0003fbe5) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0003fbe5) fep_vkb_bottom_pane_g

0xc2da,	// (0x0003c37d) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0003fbef) cell_vkb_side_pane_g

0xc6e5,	// (0x0003c788) cell_vkb_side_pane_t1

0xc6f3,	// (0x0003c796) cell_vkb_side_pane_t1_copy1

0xc2da,	// (0x0003c37d) bg_fep_vkb_candidate_pane_g2

0xc81f,	// (0x0003c8c2) cell_vkb_candidate_pane_ParamLimits

0xc38c,	// (0x0003c42f) aid_size_cell_vkb_ParamLimits

0xc38c,	// (0x0003c42f) aid_size_cell_vkb

0xc81f,	// (0x0003c8c2) cell_vkb_candidate_pane

0x84fd,	// (0x000385a0) bg_popup_fep_shadow_pane_g1

0xc41a,	// (0x0003c4bd) fep_vkb_bottom_pane_ParamLimits

0xc41a,	// (0x0003c4bd) fep_vkb_bottom_pane

0xc450,	// (0x0003c4f3) fep_vkb_candidate_pane_ParamLimits

0xc450,	// (0x0003c4f3) fep_vkb_candidate_pane

0xc46c,	// (0x0003c50f) fep_vkb_keypad_pane_ParamLimits

0xc46c,	// (0x0003c50f) fep_vkb_keypad_pane

0xc4ab,	// (0x0003c54e) fep_vkb_side_pane_ParamLimits

0xc4ab,	// (0x0003c54e) fep_vkb_side_pane

0xc4e7,	// (0x0003c58a) fep_vkb_top_pane_ParamLimits

0xc4e7,	// (0x0003c58a) fep_vkb_top_pane

0xc51c,	// (0x0003c5bf) fep_vkb_top_pane_g1_ParamLimits

0xc51c,	// (0x0003c5bf) fep_vkb_top_pane_g1

0xc52b,	// (0x0003c5ce) fep_vkb_top_pane_g2_ParamLimits

0xc52b,	// (0x0003c5ce) fep_vkb_top_pane_g2

0xc53a,	// (0x0003c5dd) fep_vkb_top_pane_g3_ParamLimits

0xc53a,	// (0x0003c5dd) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0003fbd5) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0003fbd5) fep_vkb_top_pane_g

0xc558,	// (0x0003c5fb) fep_vkb_top_text_pane_ParamLimits

0xc558,	// (0x0003c5fb) fep_vkb_top_text_pane

0xc569,	// (0x0003c60c) fep_vkb_side_pane_g1_ParamLimits

0xc569,	// (0x0003c60c) fep_vkb_side_pane_g1

0xc5b2,	// (0x0003c655) grid_vkb_side_pane_ParamLimits

0xc5b2,	// (0x0003c655) grid_vkb_side_pane

0x8505,	// (0x000385a8) bg_popup_fep_shadow_pane_g2

0x850e,	// (0x000385b1) bg_popup_fep_shadow_pane_g3

0x8516,	// (0x000385b9) bg_popup_fep_shadow_pane_g4

0x851f,	// (0x000385c2) bg_popup_fep_shadow_pane_g5

0x8529,	// (0x000385cc) bg_popup_fep_shadow_pane_g6

0x8531,	// (0x000385d4) bg_popup_fep_shadow_pane_g7

0x27c1,	// (0x00032864) bg_popup_fep_shadow_pane_g8

0xc609,	// (0x0003c6ac) grid_vkb_keypad_number_pane_ParamLimits

0xc609,	// (0x0003c6ac) grid_vkb_keypad_number_pane

0xc619,	// (0x0003c6bc) grid_vkb_keypad_pane_ParamLimits

0xc619,	// (0x0003c6bc) grid_vkb_keypad_pane

0xc63f,	// (0x0003c6e2) fep_vkb_bottom_pane_g1_ParamLimits

0xc63f,	// (0x0003c6e2) fep_vkb_bottom_pane_g1

0xc668,	// (0x0003c70b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc668,	// (0x0003c70b) grid_vkb_keypad_bottom_left_pane

0xc67d,	// (0x0003c720) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc67d,	// (0x0003c720) grid_vkb_keypad_bottom_right_pane

0xc692,	// (0x0003c735) fep_vkb_top_text_pane_g1

0xc6ad,	// (0x0003c750) fep_vkb_top_text_pane_t1

0xc6c2,	// (0x0003c765) cell_vkb_side_pane_ParamLimits

0xc6c2,	// (0x0003c765) cell_vkb_side_pane

0xc2da,	// (0x0003c37d) cell_vkb_side_pane_g1

0xc701,	// (0x0003c7a4) cell_vkb_keypad_pane_ParamLimits

0xc701,	// (0x0003c7a4) cell_vkb_keypad_pane

0xc776,	// (0x0003c819) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0003fc02) bg_popup_fep_shadow_pane_g

0x8543,	// (0x000385e6) cell_hwr_side_pane_g1

0x8543,	// (0x000385e6) cell_hwr_side_pane_g2

0xc780,	// (0x0003c823) cell_vkb_keypad_pane_t1

0xc78e,	// (0x0003c831) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc78e,	// (0x0003c831) cell_vkb_keypad_bottom_left_pane

0xc7ab,	// (0x0003c84e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ab,	// (0x0003c84e) cell_vkb_keypad_bottom_right_pane

0xc2da,	// (0x0003c37d) cell_vkb_keypad_bottom_left_pane_g1

0xc2da,	// (0x0003c37d) cell_vkb_keypad_bottom_right_pane_g1

0xc7e4,	// (0x0003c887) cell_vkb_keypad_number_pane_ParamLimits

0xc7e4,	// (0x0003c887) cell_vkb_keypad_number_pane

0xc803,	// (0x0003c8a6) cell_vkb_keypad_number_pane_g1

0xc80d,	// (0x0003c8b0) cell_vkb_keypad_number_pane_g2

0xc816,	// (0x0003c8b9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0003fbf4) cell_vkb_keypad_number_pane_g

0xc780,	// (0x0003c823) cell_vkb_keypad_number_pane_t1

0xc83a,	// (0x0003c8dd) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0003fc15) cell_hwr_side_pane_g

0xc853,	// (0x0003c8f6) cell_hwr_side_pane_t1

0x854d,	// (0x000385f0) cell_hwr_side_pane_t1_copy1

0x855b,	// (0x000385fe) cell_hwr_candidate_pane_g1

0x858a,	// (0x0003862d) cell_hwr_candidate_pane_t1

0xc2da,	// (0x0003c37d) cell_vkb_candidate_pane_g2

0xc897,	// (0x0003c93a) cell_vkb_candidate_pane_t1

0x82f6,	// (0x00038399) bg_popup_fep_shadow_pane_ParamLimits

0x82f6,	// (0x00038399) bg_popup_fep_shadow_pane

0x83ab,	// (0x0003844e) bg_fep_hwr_top_pane_g4

0xc35a,	// (0x0003c3fd) bg_hwr_side_pane_g1_ParamLimits

0xc35a,	// (0x0003c3fd) bg_hwr_side_pane_g1

0x841c,	// (0x000384bf) cell_hwr_side_pane_ParamLimits

0x841c,	// (0x000384bf) cell_hwr_side_pane

0x8457,	// (0x000384fa) fep_hwr_write_pane_g1_ParamLimits

0x8457,	// (0x000384fa) fep_hwr_write_pane_g1

0x8464,	// (0x00038507) fep_hwr_write_pane_g2_ParamLimits

0x8464,	// (0x00038507) fep_hwr_write_pane_g2

0x8471,	// (0x00038514) fep_hwr_write_pane_g3_ParamLimits

0x8471,	// (0x00038514) fep_hwr_write_pane_g3

0x847f,	// (0x00038522) fep_hwr_write_pane_g4_ParamLimits

0x847f,	// (0x00038522) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0003fbc1) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0003fbc1) fep_hwr_write_pane_g

0x83ab,	// (0x0003844e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x83ab,	// (0x0003844e) bg_fep_hwr_candidate_pane_g2

0x8494,	// (0x00038537) cell_hwr_candidate_pane_ParamLimits

0x8494,	// (0x00038537) cell_hwr_candidate_pane

0x84d6,	// (0x00038579) fep_hwr_candidate_pane_g1_ParamLimits

0xc3ba,	// (0x0003c45d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3ba,	// (0x0003c45d) bg_popup_fep_shadow_pane_cp2

0xc54a,	// (0x0003c5ed) fep_vkb_top_pane_g4_ParamLimits

0xc54a,	// (0x0003c5ed) fep_vkb_top_pane_g4

0xc590,	// (0x0003c633) fep_vkb_side_pane_g2_ParamLimits

0xc590,	// (0x0003c633) fep_vkb_side_pane_g2

0x671e,	// (0x000367c1) list_setting_pane_t4_ParamLimits

0x671e,	// (0x000367c1) list_setting_pane_t4

0x67b0,	// (0x00036853) list_setting_number_pane_t5_ParamLimits

0x67b0,	// (0x00036853) list_setting_number_pane_t5

0x6e07,	// (0x00036eaa) list_double_heading_pane_cp2_ParamLimits

0x6e07,	// (0x00036eaa) list_double_heading_pane_cp2

0xc8a5,	// (0x0003c948) list_double_heading_pane_g1_cp2_ParamLimits

0xc8a5,	// (0x0003c948) list_double_heading_pane_g1_cp2

0xc8b1,	// (0x0003c954) list_double_heading_pane_g2_cp2_ParamLimits

0xc8b1,	// (0x0003c954) list_double_heading_pane_g2_cp2

0xc8c5,	// (0x0003c968) list_double_heading_pane_t1_cp2_ParamLimits

0xc8c5,	// (0x0003c968) list_double_heading_pane_t1_cp2

0xc8db,	// (0x0003c97e) list_double_heading_pane_t2_cp2_ParamLimits

0xc8db,	// (0x0003c97e) list_double_heading_pane_t2_cp2

0x2327,	// (0x000323ca) aid_value_unit2

0x5d51,	// (0x00035df4) popup_preview_fixed_window

0x24c9,	// (0x0003256c) bg_popup_preview_window_pane_cp02

0xc8ed,	// (0x0003c990) list_preview_fixed_pane

0xc933,	// (0x0003c9d6) list_empty_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_empty_pane_fp

0xc933,	// (0x0003c9d6) list_single_cale_day_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_cale_day_pane_fp

0xc933,	// (0x0003c9d6) list_single_graphic_heading_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_graphic_heading_pane_fp

0xc933,	// (0x0003c9d6) list_single_graphic_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_graphic_pane_fp

0xc933,	// (0x0003c9d6) list_single_heading_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_heading_pane_fp

0xc933,	// (0x0003c9d6) list_single_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_pane_fp

0xc949,	// (0x0003c9ec) list_single_pane_fp_g1_ParamLimits

0xc949,	// (0x0003c9ec) list_single_pane_fp_g1

0x4c19,	// (0x00034cbc) list_single_pane_fp_g2_ParamLimits

0x4c19,	// (0x00034cbc) list_single_pane_fp_g2

0x4c25,	// (0x00034cc8) list_single_pane_fp_g3_ParamLimits

0x4c25,	// (0x00034cc8) list_single_pane_fp_g3

0xc955,	// (0x0003c9f8) list_single_pane_fp_g4_ParamLimits

0xc955,	// (0x0003c9f8) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0003fc28) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0003fc28) list_single_pane_fp_g

0x4c39,	// (0x00034cdc) list_single_pane_fp_t1_ParamLimits

0x4c39,	// (0x00034cdc) list_single_pane_fp_t1

0x4c50,	// (0x00034cf3) list_single_graphic_pane_fp_g1_ParamLimits

0x4c50,	// (0x00034cf3) list_single_graphic_pane_fp_g1

0xc949,	// (0x0003c9ec) list_single_graphic_pane_fp_g2_ParamLimits

0xc949,	// (0x0003c9ec) list_single_graphic_pane_fp_g2

0x4c19,	// (0x00034cbc) list_single_graphic_pane_fp_g3_ParamLimits

0x4c19,	// (0x00034cbc) list_single_graphic_pane_fp_g3

0x4c25,	// (0x00034cc8) list_single_graphic_pane_fp_g4_ParamLimits

0x4c25,	// (0x00034cc8) list_single_graphic_pane_fp_g4

0xc955,	// (0x0003c9f8) list_single_graphic_pane_fp_g5_ParamLimits

0xc955,	// (0x0003c9f8) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc31) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc31) list_single_graphic_pane_fp_g

0x4c5c,	// (0x00034cff) list_single_graphic_pane_fp_t1_ParamLimits

0x4c5c,	// (0x00034cff) list_single_graphic_pane_fp_t1

0x4c50,	// (0x00034cf3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c50,	// (0x00034cf3) list_single_graphic_heading_pane_fp_g1

0xc949,	// (0x0003c9ec) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc949,	// (0x0003c9ec) list_single_graphic_heading_pane_fp_g2

0x4c19,	// (0x00034cbc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4c19,	// (0x00034cbc) list_single_graphic_heading_pane_fp_g3

0x4c25,	// (0x00034cc8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c25,	// (0x00034cc8) list_single_graphic_heading_pane_fp_g4

0xc955,	// (0x0003c9f8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc955,	// (0x0003c9f8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc31) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc31) list_single_graphic_heading_pane_fp_g

0x4c72,	// (0x00034d15) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c72,	// (0x00034d15) list_single_graphic_heading_pane_fp_t1

0x4c88,	// (0x00034d2b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c88,	// (0x00034d2b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003fc3c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003fc3c) list_single_graphic_heading_pane_fp_t

0x4c9a,	// (0x00034d3d) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c9a,	// (0x00034d3d) list_single_cale_day_pane_fp_g1

0xc961,	// (0x0003ca04) list_single_cale_day_pane_fp_g2_ParamLimits

0xc961,	// (0x0003ca04) list_single_cale_day_pane_fp_g2

0x4cd2,	// (0x00034d75) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cd2,	// (0x00034d75) list_single_cale_day_pane_fp_g3

0x4cfa,	// (0x00034d9d) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cfa,	// (0x00034d9d) list_single_cale_day_pane_fp_g4

0x4d1e,	// (0x00034dc1) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d1e,	// (0x00034dc1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0003fc41) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003fc41) list_single_cale_day_pane_fp_g

0x4d42,	// (0x00034de5) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d42,	// (0x00034de5) list_single_cale_day_pane_fp_t1

0x4d68,	// (0x00034e0b) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d68,	// (0x00034e0b) list_single_cale_day_pane_fp_t2

0x4d81,	// (0x00034e24) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d81,	// (0x00034e24) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003fc4c) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003fc4c) list_single_cale_day_pane_fp_t

0xc949,	// (0x0003c9ec) list_empty_pane_fp_g1_ParamLimits

0xc949,	// (0x0003c9ec) list_empty_pane_fp_g1

0x4d9a,	// (0x00034e3d) list_empty_pane_fp_t1

0x4da8,	// (0x00034e4b) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003fc53) list_empty_pane_fp_t

0xc949,	// (0x0003c9ec) list_single_heading_pane_fp_g1_ParamLimits

0xc949,	// (0x0003c9ec) list_single_heading_pane_fp_g1

0x4c19,	// (0x00034cbc) list_single_heading_pane_fp_g2_ParamLimits

0x4c19,	// (0x00034cbc) list_single_heading_pane_fp_g2

0x4c25,	// (0x00034cc8) list_single_heading_pane_fp_g3_ParamLimits

0x4c25,	// (0x00034cc8) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003fc58) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003fc58) list_single_heading_pane_fp_g

0x4db6,	// (0x00034e59) list_single_heading_pane_fp_t1_ParamLimits

0x4db6,	// (0x00034e59) list_single_heading_pane_fp_t1

0x4dc8,	// (0x00034e6b) list_single_heading_pane_fp_t2_ParamLimits

0x4dc8,	// (0x00034e6b) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003fc5f) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003fc5f) list_single_heading_pane_fp_t

0x6ad5,	// (0x00036b78) aid_size_cell_fast

0x24ac,	// (0x0003254f) soft_indicator_pane_cp1_t1

0x6ade,	// (0x00036b81) cell_app_pane_cp2_ParamLimits

0x6ade,	// (0x00036b81) cell_app_pane_cp2

0x8318,	// (0x000383bb) fep_hwr_candidate_drop_down_list_pane

0x84f0,	// (0x00038593) fep_hwr_candidate_pane_g3_ParamLimits

0x84f0,	// (0x00038593) fep_hwr_candidate_pane_g3

0x3f1a,	// (0x00033fbd) fep_hwr_candidate_pane_g4_ParamLimits

0x3f1a,	// (0x00033fbd) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0003fbce) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0003fbce) fep_hwr_candidate_pane_g

0xc43f,	// (0x0003c4e2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc43f,	// (0x0003c4e2) fep_vkb_candidate_drop_down_list_pane

0xc842,	// (0x0003c8e5) fep_vkb_candidate_pane_g3

0xc84a,	// (0x0003c8ed) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0003fbfb) fep_vkb_candidate_pane_g

0x855b,	// (0x000385fe) cell_hwr_candidate_pane_g1_ParamLimits

0x8569,	// (0x0003860c) cell_hwr_candidate_pane_g3_ParamLimits

0x8569,	// (0x0003860c) cell_hwr_candidate_pane_g3

0xd051,	// (0x0003d0f4) cell_hwr_candidate_pane_g4_ParamLimits

0xd051,	// (0x0003d0f4) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003fc1a) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003fc1a) cell_hwr_candidate_pane_g

0xc861,	// (0x0003c904) cell_vkb_candidate_pane_g3_ParamLimits

0xc861,	// (0x0003c904) cell_vkb_candidate_pane_g3

0xc87c,	// (0x0003c91f) cell_vkb_candidate_pane_g4_ParamLimits

0xc87c,	// (0x0003c91f) cell_vkb_candidate_pane_g4

0xc96d,	// (0x0003ca10) cell_app_pane_cp2_g1_ParamLimits

0xc96d,	// (0x0003ca10) cell_app_pane_cp2_g1

0xc98b,	// (0x0003ca2e) cell_app_pane_cp2_g2_ParamLimits

0xc98b,	// (0x0003ca2e) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003fc64) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003fc64) cell_app_pane_cp2_g

0xc997,	// (0x0003ca3a) cell_app_pane_cp2_t1_ParamLimits

0xc997,	// (0x0003ca3a) cell_app_pane_cp2_t1

0x2751,	// (0x000327f4) grid_highlight_pane_cp1_ParamLimits

0x2751,	// (0x000327f4) grid_highlight_pane_cp1

0x85a8,	// (0x0003864b) cell_hwr_candidate_pane_cp1_ParamLimits

0x85a8,	// (0x0003864b) cell_hwr_candidate_pane_cp1

0x855b,	// (0x000385fe) fep_hwr_candidate_drop_down_list_pane_g1

0x85c7,	// (0x0003866a) fep_hwr_candidate_drop_down_list_pane_g2

0x85d4,	// (0x00038677) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003fc69) fep_hwr_candidate_drop_down_list_pane_g

0x85e1,	// (0x00038684) fep_hwr_candidate_drop_down_list_scroll_pane

0x85ea,	// (0x0003868d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x85ea,	// (0x0003868d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x85f7,	// (0x0003869a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x85f7,	// (0x0003869a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8604,	// (0x000386a7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8604,	// (0x000386a7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8611,	// (0x000386b4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8611,	// (0x000386b4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x862c,	// (0x000386cf) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x862c,	// (0x000386cf) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8647,	// (0x000386ea) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8647,	// (0x000386ea) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8662,	// (0x00038705) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8662,	// (0x00038705) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x867d,	// (0x00038720) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x867d,	// (0x00038720) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003fc70) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003fc70) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a9,	// (0x0003ca4c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a9,	// (0x0003ca4c) cell_vkb_candidate_pane_cp1

0xc54a,	// (0x0003c5ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc54a,	// (0x0003c5ed) fep_vkb_candidate_drop_down_list_pane_g1

0xc9c9,	// (0x0003ca6c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9c9,	// (0x0003ca6c) fep_vkb_candidate_drop_down_list_pane_g2

0xc9d6,	// (0x0003ca79) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9d6,	// (0x0003ca79) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003fc81) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0003fc81) fep_vkb_candidate_drop_down_list_pane_g

0xc9e3,	// (0x0003ca86) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e3,	// (0x0003ca86) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f0,	// (0x0003ca93) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f0,	// (0x0003ca93) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9fd,	// (0x0003caa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9fd,	// (0x0003caa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca09,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca09,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca15,	// (0x0003cab8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca15,	// (0x0003cab8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca36,	// (0x0003cad9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca36,	// (0x0003cad9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca57,	// (0x0003cafa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca57,	// (0x0003cafa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca78,	// (0x0003cb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca78,	// (0x0003cb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca99,	// (0x0003cb3c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca99,	// (0x0003cb3c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5e6b,	// (0x00035f0e) title_pane_g1_ParamLimits

0x5e78,	// (0x00035f1b) title_pane_g2_ParamLimits

0xf54e,	// (0x0003f5f1) title_pane_g_ParamLimits

0x2b7c,	// (0x00032c1f) aid_call2_pane

0x2b74,	// (0x00032c17) aid_call_pane

0x2b84,	// (0x00032c27) popup_clock_analogue_window_g1

0x2b84,	// (0x00032c27) popup_clock_analogue_window_g2

0x6de8,	// (0x00036e8b) popup_clock_analogue_window_g3

0x6df1,	// (0x00036e94) popup_clock_analogue_window_g4

0x2339,	// (0x000323dc) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0003f791) popup_clock_analogue_window_g

0x6df9,	// (0x00036e9c) popup_clock_analogue_window_t1

0x6e31,	// (0x00036ed4) clock_digital_number_pane_ParamLimits

0x6e31,	// (0x00036ed4) clock_digital_number_pane

0x6e3d,	// (0x00036ee0) clock_digital_number_pane_cp02_ParamLimits

0x6e3d,	// (0x00036ee0) clock_digital_number_pane_cp02

0x6e49,	// (0x00036eec) clock_digital_number_pane_cp03_ParamLimits

0x6e49,	// (0x00036eec) clock_digital_number_pane_cp03

0x6e55,	// (0x00036ef8) clock_digital_number_pane_cp04_ParamLimits

0x6e55,	// (0x00036ef8) clock_digital_number_pane_cp04

0x6e61,	// (0x00036f04) clock_digital_separator_pane_ParamLimits

0x6e61,	// (0x00036f04) clock_digital_separator_pane

0x6e6d,	// (0x00036f10) popup_clock_digital_window_t1_ParamLimits

0x6e6d,	// (0x00036f10) popup_clock_digital_window_t1

0x2339,	// (0x000323dc) clock_digital_number_pane_g1

0x2339,	// (0x000323dc) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0003f79c) clock_digital_number_pane_g

0x2339,	// (0x000323dc) clock_digital_separator_pane_g1

0x2339,	// (0x000323dc) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0003f79c) clock_digital_separator_pane_g

0x9822,	// (0x000398c5) aid_fill_nsta_ParamLimits

0x996e,	// (0x00039a11) indicator_nsta_pane_ParamLimits

0x9ae7,	// (0x00039b8a) popup_clock_analogue_window

0x9ae7,	// (0x00039b8a) popup_clock_digital_window

0x239f,	// (0x00032442) grid_indicator_nsta_pane_ParamLimits

0xbce5,	// (0x0003bd88) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0003fb4e) clock_nsta_pane_t

0x6d13,	// (0x00036db6) aid_size_max_handle

0x6d1d,	// (0x00036dc0) aid_size_min_handle

0x94b5,	// (0x00039558) editor_scroll_pane

0xcab4,	// (0x0003cb57) ex_editor_pane

0x2870,	// (0x00032913) scroll_pane_cp13

0x26f9,	// (0x0003279c) scroll_pane_cp14

0x2bb3,	// (0x00032c56) scroll_pane_cp36

0x6e1b,	// (0x00036ebe) list_single_graphic_hl_pane_cp2_ParamLimits

0x6e1b,	// (0x00036ebe) list_single_graphic_hl_pane_cp2

0xb2bc,	// (0x0003b35f) list_single_graphic_hl_pane_ParamLimits

0xb2bc,	// (0x0003b35f) list_single_graphic_hl_pane

0x8698,	// (0x0003873b) aid_size_min_hl_cp1

0xcabc,	// (0x0003cb5f) list_highlight_pane_cp34_ParamLimits

0xcabc,	// (0x0003cb5f) list_highlight_pane_cp34

0xcacd,	// (0x0003cb70) list_single_graphic_hl_pane_g1_ParamLimits

0xcacd,	// (0x0003cb70) list_single_graphic_hl_pane_g1

0x86a1,	// (0x00038744) list_single_graphic_hl_pane_g2_ParamLimits

0x86a1,	// (0x00038744) list_single_graphic_hl_pane_g2

0x86a1,	// (0x00038744) list_single_graphic_hl_pane_g3_ParamLimits

0x86a1,	// (0x00038744) list_single_graphic_hl_pane_g3

0x86ad,	// (0x00038750) list_single_graphic_hl_pane_g4_ParamLimits

0x86ad,	// (0x00038750) list_single_graphic_hl_pane_g4

0x86b9,	// (0x0003875c) list_single_graphic_hl_pane_g5_ParamLimits

0x86b9,	// (0x0003875c) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003fc99) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003fc99) list_single_graphic_hl_pane_g

0x86cd,	// (0x00038770) list_single_graphic_hl_pane_t1_ParamLimits

0x86cd,	// (0x00038770) list_single_graphic_hl_pane_t1

0xcada,	// (0x0003cb7d) aid_size_min_hl_cp2

0xcae3,	// (0x0003cb86) list_highlight_pane_cp34_cp2_ParamLimits

0xcae3,	// (0x0003cb86) list_highlight_pane_cp34_cp2

0xcacd,	// (0x0003cb70) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcacd,	// (0x0003cb70) list_single_graphic_hl_pane_g1_cp2

0xcaf0,	// (0x0003cb93) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcaf0,	// (0x0003cb93) list_single_graphic_hl_pane_g2_cp2

0xcafc,	// (0x0003cb9f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcafc,	// (0x0003cb9f) list_single_graphic_hl_pane_g3_cp2

0x74fd,	// (0x000375a0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x74fd,	// (0x000375a0) list_single_graphic_hl_pane_g4_cp2

0xcb0a,	// (0x0003cbad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb0a,	// (0x0003cbad) list_single_graphic_hl_pane_g5_cp2

0x7600,	// (0x000376a3) control_pane_g4_ParamLimits

0x7600,	// (0x000376a3) control_pane_g4

0x9800,	// (0x000398a3) bg_popup_sub_pane_cp10_ParamLimits

0xc2e4,	// (0x0003c387) list_choice_list_pane_ParamLimits

0xc2f3,	// (0x0003c396) scroll_pane_cp23

0x24c9,	// (0x0003256c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ed,	// (0x0003c990) list_preview_fixed_pane_ParamLimits

0xc903,	// (0x0003c9a6) list_preview_fixed_pane_cp_ParamLimits

0xc903,	// (0x0003c9a6) list_preview_fixed_pane_cp

0xc90f,	// (0x0003c9b2) popup_preview_fixed_window_g1_ParamLimits

0xc90f,	// (0x0003c9b2) popup_preview_fixed_window_g1

0xc91b,	// (0x0003c9be) popup_preview_fixed_window_g2_ParamLimits

0xc91b,	// (0x0003c9be) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0003fc21) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0003fc21) popup_preview_fixed_window_g

0x6bed,	// (0x00036c90) aid_navi_side_left_pane_ParamLimits

0x6c02,	// (0x00036ca5) aid_navi_side_right_pane_ParamLimits

0x6c1a,	// (0x00036cbd) navi_icon_pane_stacon_ParamLimits

0x6c2e,	// (0x00036cd1) navi_navi_pane_stacon_ParamLimits

0x6c1a,	// (0x00036cbd) navi_text_pane_stacon_ParamLimits

0x5c20,	// (0x00035cc3) main_text_info_pane

0xcb34,	// (0x0003cbd7) listscroll_text_info_pane

0xcb3c,	// (0x0003cbdf) list_text_info_pane_ParamLimits

0xcb3c,	// (0x0003cbdf) list_text_info_pane

0xcb4b,	// (0x0003cbee) scroll_pane_cp24_ParamLimits

0xcb4b,	// (0x0003cbee) scroll_pane_cp24

0xcb69,	// (0x0003cc0c) list_text_info_pane_t1_ParamLimits

0xcb69,	// (0x0003cc0c) list_text_info_pane_t1

0x7760,	// (0x00037803) popup_fast_swap2_window_ParamLimits

0x7760,	// (0x00037803) popup_fast_swap2_window

0xcb9d,	// (0x0003cc40) aid_size_cell_fast2

0x232f,	// (0x000323d2) bg_popup_window_pane_cp17

0xa174,	// (0x0003a217) heading_pane_cp2

0x25fd,	// (0x000326a0) listscroll_fast2_pane

0xcba7,	// (0x0003cc4a) grid_fast2_pane

0xcbb1,	// (0x0003cc54) listscroll_fast2_pane_g1

0xcbb9,	// (0x0003cc5c) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003fca4) listscroll_fast2_pane_g

0x2870,	// (0x00032913) scroll_pane_cp26

0xcbc3,	// (0x0003cc66) cell_fast2_pane_ParamLimits

0xcbc3,	// (0x0003cc66) cell_fast2_pane

0xcbd8,	// (0x0003cc7b) cell_fast2_pane_g1

0xcbe1,	// (0x0003cc84) cell_fast2_pane_g2

0xcbea,	// (0x0003cc8d) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003fca9) cell_fast2_pane_g

0x2630,	// (0x000326d3) grid_highlight_pane_cp9

0x7728,	// (0x000377cb) main_eswt_pane_ParamLimits

0x7728,	// (0x000377cb) main_eswt_pane

0xcb60,	// (0x0003cc03) list_single_text_info_pane

0xcbf2,	// (0x0003cc95) eswt_ctrl_button_pane

0xcbf2,	// (0x0003cc95) eswt_ctrl_canvas_pane

0xcbfa,	// (0x0003cc9d) eswt_ctrl_combo_pane

0xcbf2,	// (0x0003cc95) eswt_ctrl_default_pane

0xcbf2,	// (0x0003cc95) eswt_ctrl_label_pane

0xcc02,	// (0x0003cca5) eswt_ctrl_wait_pane

0xcc0a,	// (0x0003ccad) eswt_shell_pane

0x232f,	// (0x000323d2) listscroll_eswt_app_pane

0xcc2a,	// (0x0003cccd) popup_eswt_tasktip_window_ParamLimits

0xcc2a,	// (0x0003cccd) popup_eswt_tasktip_window

0x9d81,	// (0x00039e24) bg_popup_window_pane_cp18

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_ParamLimits

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_ParamLimits

0xcc48,	// (0x0003cceb) eswt_control_pane_g2

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_ParamLimits

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_ParamLimits

0xcc62,	// (0x0003cd05) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003fcb0) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003fcb0) eswt_control_pane_g

0x2751,	// (0x000327f4) bg_button_pane_ParamLimits

0x2751,	// (0x000327f4) bg_button_pane

0x2645,	// (0x000326e8) common_borders_pane_copy2_ParamLimits

0x2645,	// (0x000326e8) common_borders_pane_copy2

0xcc6f,	// (0x0003cd12) control_button_pane_g1_ParamLimits

0xcc6f,	// (0x0003cd12) control_button_pane_g1

0xcc7b,	// (0x0003cd1e) control_button_pane_g2_ParamLimits

0xcc7b,	// (0x0003cd1e) control_button_pane_g2

0xcc87,	// (0x0003cd2a) control_button_pane_g3_ParamLimits

0xcc87,	// (0x0003cd2a) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003fcb9) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003fcb9) control_button_pane_g

0xcc9b,	// (0x0003cd3e) control_button_pane_t1

0xcca9,	// (0x0003cd4c) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003fcc0) control_button_pane_t

0x9d0d,	// (0x00039db0) bg_button_pane_g1

0x9d1d,	// (0x00039dc0) bg_button_pane_g2

0x9d15,	// (0x00039db8) bg_button_pane_g3

0x9d2d,	// (0x00039dd0) bg_button_pane_g4

0x9d25,	// (0x00039dc8) bg_button_pane_g5

0x9d35,	// (0x00039dd8) bg_button_pane_g6

0x9d3d,	// (0x00039de0) bg_button_pane_g7

0x9d4d,	// (0x00039df0) bg_button_pane_g8

0x9d45,	// (0x00039de8) bg_button_pane_g9

0x0008,

0xf857,	// (0x0003f8fa) bg_button_pane_g

0xc29f,	// (0x0003c342) common_borders_pane_ParamLimits

0xc29f,	// (0x0003c342) common_borders_pane

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy1_ParamLimits

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy1

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy1_ParamLimits

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy1

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy1_ParamLimits

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy1

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy1_ParamLimits

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy1

0xc2da,	// (0x0003c37d) bg_eswt_ctrl_canvas_pane_g1

0xc29f,	// (0x0003c342) common_borders_pane_cp2_ParamLimits

0xc29f,	// (0x0003c342) common_borders_pane_cp2

0xc29f,	// (0x0003c342) common_borders_pane_cp3_ParamLimits

0xc29f,	// (0x0003c342) common_borders_pane_cp3

0xccb7,	// (0x0003cd5a) separator_horizontal_pane

0xccbf,	// (0x0003cd62) separator_vertical_pane

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy2_ParamLimits

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy2

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy2_ParamLimits

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy2

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy2_ParamLimits

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy2

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy2_ParamLimits

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy2

0x232f,	// (0x000323d2) common_borders_pane_cp4

0xccc8,	// (0x0003cd6b) separator_horizontal_pane_g1

0xccd1,	// (0x0003cd74) separator_horizontal_pane_g2

0xccda,	// (0x0003cd7d) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003fcc5) separator_horizontal_pane_g

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy3_ParamLimits

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy3

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy3_ParamLimits

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy3

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy3_ParamLimits

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy3

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy3_ParamLimits

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy3

0x232f,	// (0x000323d2) common_borders_pane_cp5

0xcce3,	// (0x0003cd86) separator_vertical_pane_g1

0xccec,	// (0x0003cd8f) separator_vertical_pane_g2

0xccf5,	// (0x0003cd98) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003fccc) separator_vertical_pane_g

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy4_ParamLimits

0xcc3b,	// (0x0003ccde) eswt_control_pane_g1_copy4

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy4_ParamLimits

0xcc48,	// (0x0003cceb) eswt_control_pane_g2_copy4

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy4_ParamLimits

0xcc55,	// (0x0003ccf8) eswt_control_pane_g3_copy4

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy4_ParamLimits

0xcc62,	// (0x0003cd05) eswt_control_pane_g4_copy4

0xccfe,	// (0x0003cda1) eswt_ctrl_combo_button_pane

0xcd06,	// (0x0003cda9) eswt_ctrl_input_pane

0xcd0e,	// (0x0003cdb1) popup_choice_list_window_cp70

0xcd16,	// (0x0003cdb9) eswt_ctrl_input_pane_t1

0x232f,	// (0x000323d2) input_focus_pane_cp70

0xc29f,	// (0x0003c342) bg_button_pane_cp70_ParamLimits

0xc29f,	// (0x0003c342) bg_button_pane_cp70

0xcd24,	// (0x0003cdc7) eswt_ctrl_combo_button_pane_g1

0xcd2c,	// (0x0003cdcf) wait_bar_pane_cp70

0x9d81,	// (0x00039e24) bg_popup_window_pane_cp70_ParamLimits

0x9d81,	// (0x00039e24) bg_popup_window_pane_cp70

0xcd34,	// (0x0003cdd7) popup_eswt_tasktip_window_t1

0xcd4a,	// (0x0003cded) wait_bar_pane_cp71_ParamLimits

0xcd4a,	// (0x0003cded) wait_bar_pane_cp71

0xcd56,	// (0x0003cdf9) grid_eswt_app_pane

0x2a60,	// (0x00032b03) scroll_pane_cp70

0xcd5f,	// (0x0003ce02) cell_eswt_app_pane_ParamLimits

0xcd5f,	// (0x0003ce02) cell_eswt_app_pane

0xcd8f,	// (0x0003ce32) cell_eswt_app_pane_g1_ParamLimits

0xcd8f,	// (0x0003ce32) cell_eswt_app_pane_g1

0xcdbe,	// (0x0003ce61) cell_eswt_app_pane_g2_ParamLimits

0xcdbe,	// (0x0003ce61) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003fcd3) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003fcd3) cell_eswt_app_pane_g

0xcde2,	// (0x0003ce85) cell_eswt_app_pane_t1_ParamLimits

0xcde2,	// (0x0003ce85) cell_eswt_app_pane_t1

0xce14,	// (0x0003ceb7) grid_highlight_pane_cp70_ParamLimits

0xce14,	// (0x0003ceb7) grid_highlight_pane_cp70

0x7499,	// (0x0003753c) set_content_pane_g1

0x975c,	// (0x000397ff) status_small_volume_pane

0x86e3,	// (0x00038786) status_small_volume_pane_g1

0x86eb,	// (0x0003878e) volume_small2_pane

0x86f4,	// (0x00038797) volume_small2_pane_g1

0x86fd,	// (0x000387a0) volume_small2_pane_g2

0x8706,	// (0x000387a9) volume_small2_pane_g3

0x870f,	// (0x000387b2) volume_small2_pane_g4

0x8718,	// (0x000387bb) volume_small2_pane_g5

0x8721,	// (0x000387c4) volume_small2_pane_g6

0x872a,	// (0x000387cd) volume_small2_pane_g7

0x8733,	// (0x000387d6) volume_small2_pane_g8

0x873c,	// (0x000387df) volume_small2_pane_g9

0x8745,	// (0x000387e8) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003fcd8) volume_small2_pane_g

0xc692,	// (0x0003c735) fep_vkb_top_text_pane_g1_ParamLimits

0xc6ad,	// (0x0003c750) fep_vkb_top_text_pane_t1_ParamLimits

0xc927,	// (0x0003c9ca) popup_preview_fixed_window_g3_ParamLimits

0xc927,	// (0x0003c9ca) popup_preview_fixed_window_g3

0x7c0f,	// (0x00037cb2) popup_toolbar_trans_pane

0xb0ab,	// (0x0003b14e) aid_height_set_list_ParamLimits

0xb0bc,	// (0x0003b15f) aid_size_parent_ParamLimits

0x9800,	// (0x000398a3) list_highlight_pane_cp2_ParamLimits

0x7499,	// (0x0003753c) set_content_pane_g1_ParamLimits

0x8155,	// (0x000381f8) list_single_image_pane_ParamLimits

0x8155,	// (0x000381f8) list_single_image_pane

0xce20,	// (0x0003cec3) aid_size_cell_image_ParamLimits

0xce20,	// (0x0003cec3) aid_size_cell_image

0xce2d,	// (0x0003ced0) grid_single_image_pane_ParamLimits

0xce2d,	// (0x0003ced0) grid_single_image_pane

0xce3b,	// (0x0003cede) list_single_image_pane_g1_ParamLimits

0xce3b,	// (0x0003cede) list_single_image_pane_g1

0xce47,	// (0x0003ceea) list_single_image_pane_g2_ParamLimits

0xce47,	// (0x0003ceea) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003fced) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003fced) list_single_image_pane_g

0xce5b,	// (0x0003cefe) list_single_image_pane_t1_ParamLimits

0xce5b,	// (0x0003cefe) list_single_image_pane_t1

0xce71,	// (0x0003cf14) cell_image_list_pane_ParamLimits

0xce71,	// (0x0003cf14) cell_image_list_pane

0xce85,	// (0x0003cf28) cell_image_list_pane_g1

0xce8e,	// (0x0003cf31) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003fcf2) cell_image_list_pane_g

0xce97,	// (0x0003cf3a) aid_size_cell_tb_trans_pane

0x2751,	// (0x000327f4) bg_tb_trans_pane

0xcea9,	// (0x0003cf4c) grid_tb_trans_pane

0x9d0d,	// (0x00039db0) bg_tb_trans_pane_g1

0x9d1d,	// (0x00039dc0) bg_tb_trans_pane_g2

0x9d15,	// (0x00039db8) bg_tb_trans_pane_g3

0x9d2d,	// (0x00039dd0) bg_tb_trans_pane_g4

0x9d25,	// (0x00039dc8) bg_tb_trans_pane_g5

0x9d4d,	// (0x00039df0) bg_tb_trans_pane_g6

0x9d45,	// (0x00039de8) bg_tb_trans_pane_g7

0x9d35,	// (0x00039dd8) bg_tb_trans_pane_g8

0x9d3d,	// (0x00039de0) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003fcf7) bg_tb_trans_pane_g

0xcebd,	// (0x0003cf60) cell_toolbar_trans_pane_ParamLimits

0xcebd,	// (0x0003cf60) cell_toolbar_trans_pane

0xc2da,	// (0x0003c37d) cell_toolbar_trans_pane_g1

0xbea5,	// (0x0003bf48) list_form2_midp_pane_t1

0xbeb3,	// (0x0003bf56) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0003fb94) list_form2_midp_pane_t

0xbec1,	// (0x0003bf64) scroll_pane_cp51_ParamLimits

0xc07d,	// (0x0003c120) form2_midp_wait_pane_g1

0xc086,	// (0x0003c129) form2_midp_wait_pane_g2

0xc08f,	// (0x0003c132) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0003fba9) form2_midp_wait_pane_g

0x239f,	// (0x00032442) list_highlight_pane_cp21_ParamLimits

0xc0d7,	// (0x0003c17a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0e6,	// (0x0003c189) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x80ed,	// (0x00038190) list_single_2graphic_im_pane_ParamLimits

0x80ed,	// (0x00038190) list_single_2graphic_im_pane

0xcee3,	// (0x0003cf86) list_single_2graphic_im_pane_g1_ParamLimits

0xcee3,	// (0x0003cf86) list_single_2graphic_im_pane_g1

0xcef4,	// (0x0003cf97) list_single_2graphic_im_pane_g2_ParamLimits

0xcef4,	// (0x0003cf97) list_single_2graphic_im_pane_g2

0xcf00,	// (0x0003cfa3) list_single_2graphic_im_pane_g3_ParamLimits

0xcf00,	// (0x0003cfa3) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003fd0a) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003fd0a) list_single_2graphic_im_pane_g

0xcf20,	// (0x0003cfc3) list_single_2graphic_im_pane_t1_ParamLimits

0xcf20,	// (0x0003cfc3) list_single_2graphic_im_pane_t1

0xc933,	// (0x0003c9d6) list_single_graphic_2heading_pane_fp_ParamLimits

0xc933,	// (0x0003c9d6) list_single_graphic_2heading_pane_fp

0x4c50,	// (0x00034cf3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c50,	// (0x00034cf3) list_single_graphic_2heading_pane_fp_g1

0xc949,	// (0x0003c9ec) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc949,	// (0x0003c9ec) list_single_graphic_2heading_pane_fp_g2

0x4c19,	// (0x00034cbc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4c19,	// (0x00034cbc) list_single_graphic_2heading_pane_fp_g3

0x4c25,	// (0x00034cc8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c25,	// (0x00034cc8) list_single_graphic_2heading_pane_fp_g4

0xc955,	// (0x0003c9f8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc955,	// (0x0003c9f8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003fc31) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003fc31) list_single_graphic_2heading_pane_fp_g

0x4dea,	// (0x00034e8d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4dea,	// (0x00034e8d) list_single_graphic_2heading_pane_fp_t1

0x4c88,	// (0x00034d2b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c88,	// (0x00034d2b) list_single_graphic_2heading_pane_fp_t2

0x4e00,	// (0x00034ea3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4e00,	// (0x00034ea3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003fd13) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003fd13) list_single_graphic_2heading_pane_fp_t

0xc366,	// (0x0003c409) fep_hwr_write_pane_g5_ParamLimits

0xc366,	// (0x0003c409) fep_hwr_write_pane_g5

0xc372,	// (0x0003c415) fep_hwr_write_pane_g6_ParamLimits

0xc372,	// (0x0003c415) fep_hwr_write_pane_g6

0xcc0a,	// (0x0003ccad) eswt_shell_pane_ParamLimits

0x9d81,	// (0x00039e24) bg_popup_window_pane_cp18_ParamLimits

0xb004,	// (0x0003b0a7) heading_pane_cp70

0xcd34,	// (0x0003cdd7) popup_eswt_tasktip_window_t1_ParamLimits

0x9877,	// (0x0003991a) aid_touch_tab_arrow_left

0x9886,	// (0x00039929) aid_touch_tab_arrow_right

0x5e89,	// (0x00035f2c) title_pane_g3_ParamLimits

0x5e89,	// (0x00035f2c) title_pane_g3

0x2719,	// (0x000327bc) set_value_pane_g1

0x7c0f,	// (0x00037cb2) popup_toolbar_trans_pane_ParamLimits

0xce97,	// (0x0003cf3a) aid_size_cell_tb_trans_pane_ParamLimits

0x2751,	// (0x000327f4) bg_tb_trans_pane_ParamLimits

0xcea9,	// (0x0003cf4c) grid_tb_trans_pane_ParamLimits

0x24c9,	// (0x0003256c) cont_note_pane_ParamLimits

0x24c9,	// (0x0003256c) cont_note_pane

0x2645,	// (0x000326e8) cont_snote2_single_text_pane_ParamLimits

0x2645,	// (0x000326e8) cont_snote2_single_text_pane

0x2645,	// (0x000326e8) cont_snote2_single_graphic_pane_ParamLimits

0x2645,	// (0x000326e8) cont_snote2_single_graphic_pane

0xa387,	// (0x0003a42a) cont_note_wait_pane_ParamLimits

0xa387,	// (0x0003a42a) cont_note_wait_pane

0xa387,	// (0x0003a42a) cont_note_image_pane_ParamLimits

0xa387,	// (0x0003a42a) cont_note_image_pane

0xcf51,	// (0x0003cff4) popup_note2_window_g1_ParamLimits

0xcf51,	// (0x0003cff4) popup_note2_window_g1

0xcf82,	// (0x0003d025) popup_note2_window_t1_ParamLimits

0xcf82,	// (0x0003d025) popup_note2_window_t1

0xcfc7,	// (0x0003d06a) popup_note2_window_t2_ParamLimits

0xcfc7,	// (0x0003d06a) popup_note2_window_t2

0xd00c,	// (0x0003d0af) popup_note2_window_t3_ParamLimits

0xd00c,	// (0x0003d0af) popup_note2_window_t3

0xd072,	// (0x0003d115) popup_note2_window_t4_ParamLimits

0xd072,	// (0x0003d115) popup_note2_window_t4

0x254d,	// (0x000325f0) popup_note2_window_t5_ParamLimits

0x254d,	// (0x000325f0) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003fd1f) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003fd1f) popup_note2_window_t

0xd0a1,	// (0x0003d144) popup_note2_image_window_g1_ParamLimits

0xd0a1,	// (0x0003d144) popup_note2_image_window_g1

0xd0ad,	// (0x0003d150) popup_note2_image_window_g2_ParamLimits

0xd0ad,	// (0x0003d150) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003fd2a) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003fd2a) popup_note2_image_window_g

0xd0bf,	// (0x0003d162) popup_note2_image_window_t1_ParamLimits

0xd0bf,	// (0x0003d162) popup_note2_image_window_t1

0xd0d7,	// (0x0003d17a) popup_note2_image_window_t2_ParamLimits

0xd0d7,	// (0x0003d17a) popup_note2_image_window_t2

0xd0ef,	// (0x0003d192) popup_note2_image_window_t3_ParamLimits

0xd0ef,	// (0x0003d192) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003fd2f) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003fd2f) popup_note2_image_window_t

0xa395,	// (0x0003a438) popup_note2_wait_window_g1_ParamLimits

0xa395,	// (0x0003a438) popup_note2_wait_window_g1

0xa3a1,	// (0x0003a444) popup_note2_wait_window_g2_ParamLimits

0xa3a1,	// (0x0003a444) popup_note2_wait_window_g2

0xa3ad,	// (0x0003a450) popup_note2_wait_window_g3_ParamLimits

0xa3ad,	// (0x0003a450) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0003f8dc) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0003f8dc) popup_note2_wait_window_g

0xd10b,	// (0x0003d1ae) popup_note2_wait_window_t1_ParamLimits

0xd10b,	// (0x0003d1ae) popup_note2_wait_window_t1

0xd129,	// (0x0003d1cc) popup_note2_wait_window_t2_ParamLimits

0xd129,	// (0x0003d1cc) popup_note2_wait_window_t2

0xd147,	// (0x0003d1ea) popup_note2_wait_window_t3_ParamLimits

0xd147,	// (0x0003d1ea) popup_note2_wait_window_t3

0xd159,	// (0x0003d1fc) popup_note2_wait_window_t4_ParamLimits

0xd159,	// (0x0003d1fc) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003fd36) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003fd36) popup_note2_wait_window_t

0xd16b,	// (0x0003d20e) wait_bar2_pane_ParamLimits

0xd16b,	// (0x0003d20e) wait_bar2_pane

0xd183,	// (0x0003d226) popup_snote2_single_text_window_g1_ParamLimits

0xd183,	// (0x0003d226) popup_snote2_single_text_window_g1

0xd1ab,	// (0x0003d24e) popup_snote2_single_text_window_t1_ParamLimits

0xd1ab,	// (0x0003d24e) popup_snote2_single_text_window_t1

0xd1f7,	// (0x0003d29a) popup_snote2_single_text_window_t2_ParamLimits

0xd1f7,	// (0x0003d29a) popup_snote2_single_text_window_t2

0xd243,	// (0x0003d2e6) popup_snote2_single_text_window_t3_ParamLimits

0xd243,	// (0x0003d2e6) popup_snote2_single_text_window_t3

0xd284,	// (0x0003d327) popup_snote2_single_text_window_t4_ParamLimits

0xd284,	// (0x0003d327) popup_snote2_single_text_window_t4

0xd2ba,	// (0x0003d35d) popup_snote2_single_text_window_t5_ParamLimits

0xd2ba,	// (0x0003d35d) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003fd3f) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003fd3f) popup_snote2_single_text_window_t

0xd2e5,	// (0x0003d388) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2e5,	// (0x0003d388) popup_snote2_single_graphic_window_g1

0xd30d,	// (0x0003d3b0) popup_snote2_single_graphic_window_g2_ParamLimits

0xd30d,	// (0x0003d3b0) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003fd4a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003fd4a) popup_snote2_single_graphic_window_g

0xd335,	// (0x0003d3d8) popup_snote2_single_graphic_window_t1_ParamLimits

0xd335,	// (0x0003d3d8) popup_snote2_single_graphic_window_t1

0xd381,	// (0x0003d424) popup_snote2_single_graphic_window_t2_ParamLimits

0xd381,	// (0x0003d424) popup_snote2_single_graphic_window_t2

0xd243,	// (0x0003d2e6) popup_snote2_single_graphic_window_t3_ParamLimits

0xd243,	// (0x0003d2e6) popup_snote2_single_graphic_window_t3

0xd284,	// (0x0003d327) popup_snote2_single_graphic_window_t4_ParamLimits

0xd284,	// (0x0003d327) popup_snote2_single_graphic_window_t4

0xd2ba,	// (0x0003d35d) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2ba,	// (0x0003d35d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003fd4f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003fd4f) popup_snote2_single_graphic_window_t

0xbd7e,	// (0x0003be21) clock_nsta_pane_cp2_t1

0xbd7e,	// (0x0003be21) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0003fb6a) clock_nsta_pane_cp2_t

0x68ac,	// (0x0003694f) form_field_data_wide_pane_g1_ParamLimits

0x275f,	// (0x00032802) form_field_data_wide_pane_g2_ParamLimits

0x275f,	// (0x00032802) form_field_data_wide_pane_g2

0x276b,	// (0x0003280e) form_field_data_wide_pane_g3_ParamLimits

0x276b,	// (0x0003280e) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0003f714) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0003f714) form_field_data_wide_pane_g

0xbc81,	// (0x0003bd24) grid_touch_3_pane_ParamLimits

0xbc81,	// (0x0003bd24) grid_touch_3_pane

0xd3cd,	// (0x0003d470) cell_touch_3_pane_ParamLimits

0xd3cd,	// (0x0003d470) cell_touch_3_pane

0xc2da,	// (0x0003c37d) cell_touch_3_pane_g1

0xc2da,	// (0x0003c37d) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0003fbef) cell_touch_3_pane_g

0x257f,	// (0x00032622) cont_query_data_pane

0x2587,	// (0x0003262a) cont_query_data_pane_cp1

0xd3fb,	// (0x0003d49e) button_value_adjust_pane_cp7

0xd403,	// (0x0003d4a6) query_popup_pane_cp3

0x2be5,	// (0x00032c88) bg_popup_sub_pane_cp22_ParamLimits

0x6ee7,	// (0x00036f8a) navi_navi_volume_pane_cp2

0x6eff,	// (0x00036fa2) popup_side_volume_key_window_g2

0x6f0b,	// (0x00036fae) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0003f7aa) popup_side_volume_key_window_g

0x6f25,	// (0x00036fc8) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0003f7b1) popup_side_volume_key_window_t

0x7366,	// (0x00037409) popup_side_volume_key_window_ParamLimits

0x658d,	// (0x00036630) list_double_graphic_pane_g4_ParamLimits

0x658d,	// (0x00036630) list_double_graphic_pane_g4

0x8132,	// (0x000381d5) list_single_2heading_msg_pane_ParamLimits

0x8132,	// (0x000381d5) list_single_2heading_msg_pane

0x874e,	// (0x000387f1) list_single_2heading_msg_pane_g1_ParamLimits

0x874e,	// (0x000387f1) list_single_2heading_msg_pane_g1

0x464e,	// (0x000346f1) list_single_2heading_msg_pane_g2_ParamLimits

0x464e,	// (0x000346f1) list_single_2heading_msg_pane_g2

0x498f,	// (0x00034a32) list_single_2heading_msg_pane_g3_ParamLimits

0x498f,	// (0x00034a32) list_single_2heading_msg_pane_g3

0x4e20,	// (0x00034ec3) list_single_2heading_msg_pane_g4_ParamLimits

0x4e20,	// (0x00034ec3) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003fd5a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003fd5a) list_single_2heading_msg_pane_g

0x4e38,	// (0x00034edb) list_single_2heading_msg_pane_t1_ParamLimits

0x4e38,	// (0x00034edb) list_single_2heading_msg_pane_t1

0x875a,	// (0x000387fd) list_single_2heading_msg_pane_t2_ParamLimits

0x875a,	// (0x000387fd) list_single_2heading_msg_pane_t2

0x878e,	// (0x00038831) list_single_2heading_msg_pane_t3_ParamLimits

0x878e,	// (0x00038831) list_single_2heading_msg_pane_t3

0x4e60,	// (0x00034f03) list_single_2heading_msg_pane_t4_ParamLimits

0x4e60,	// (0x00034f03) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003fd63) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003fd63) list_single_2heading_msg_pane_t

0x234d,	// (0x000323f0) title_pane_g4_ParamLimits

0x234d,	// (0x000323f0) title_pane_g4

0x6b3e,	// (0x00036be1) title_pane_stacon_g3_ParamLimits

0x6b3e,	// (0x00036be1) title_pane_stacon_g3

0xcf14,	// (0x0003cfb7) list_single_2graphic_im_pane_g4_ParamLimits

0xcf14,	// (0x0003cfb7) list_single_2graphic_im_pane_g4

0xadce,	// (0x0003ae71) popup_side_volume_key_window_cp

0xb5dc,	// (0x0003b67f) main_idle_act2_pane_t1

0x7d01,	// (0x00037da4) toolbar_button_pane_g10

0x6422,	// (0x000364c5) popup_toolbar_window_cp1

0xbd6f,	// (0x0003be12) clock_nsta_pane_cp_t1

0xbd6f,	// (0x0003be12) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0003fb65) clock_nsta_pane_cp_t

0x6ee7,	// (0x00036f8a) navi_navi_volume_pane_cp2_ParamLimits

0x6ef3,	// (0x00036f96) popup_side_volume_key_window_g1_ParamLimits

0x6eff,	// (0x00036fa2) popup_side_volume_key_window_g2_ParamLimits

0x6f0b,	// (0x00036fae) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0003f7aa) popup_side_volume_key_window_g_ParamLimits

0x8304,	// (0x000383a7) fep_hwr_aid_pane

0x83ab,	// (0x0003844e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc336,	// (0x0003c3d9) fep_hwr_top_pane_g1_ParamLimits

0xc348,	// (0x0003c3eb) fep_hwr_top_pane_g2_ParamLimits

0x83cb,	// (0x0003846e) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0003fbba) fep_hwr_top_pane_g_ParamLimits

0x83e0,	// (0x00038483) fep_hwr_top_text_pane_ParamLimits

0xab91,	// (0x0003ac34) aid_touch_tab_arrow_arrow_2

0xab9a,	// (0x0003ac3d) aid_touch_tab_arrow_left_2

0x8318,	// (0x000383bb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x834f,	// (0x000383f2) fep_hwr_prediction_pane

0xc4a1,	// (0x0003c544) fep_vkb_prediction_pane

0xc59e,	// (0x0003c641) fep_vkb_side_pane_g3_ParamLimits

0xc59e,	// (0x0003c641) fep_vkb_side_pane_g3

0x855b,	// (0x000385fe) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x85c7,	// (0x0003866a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x85d4,	// (0x00038677) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003fc69) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x87c7,	// (0x0003886a) fep_hwr_prediction_pane_g1

0x87d1,	// (0x00038874) fep_hwr_prediction_pane_g2

0x87d9,	// (0x0003887c) fep_hwr_prediction_pane_g3

0x87e1,	// (0x00038884) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003fd6c) fep_hwr_prediction_pane_g

0xd428,	// (0x0003d4cb) fep_vkb_prediction_pane_g1

0xd432,	// (0x0003d4d5) fep_vkb_prediction_pane_g2

0xd43a,	// (0x0003d4dd) fep_vkb_prediction_pane_g3

0xd442,	// (0x0003d4e5) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003fd75) fep_vkb_prediction_pane_g

0x8034,	// (0x000380d7) slider_set_pane_g3

0x8048,	// (0x000380eb) slider_set_pane_g4

0x8060,	// (0x00038103) slider_set_pane_g5

0x8034,	// (0x000380d7) slider_set_pane_g6

0x8076,	// (0x00038119) slider_set_pane_g7

0xb21d,	// (0x0003b2c0) slider_form_pane_g3

0xb226,	// (0x0003b2c9) slider_form_pane_g4

0xb22e,	// (0x0003b2d1) slider_form_pane_g5

0xb21d,	// (0x0003b2c0) slider_form_pane_g6

0xb236,	// (0x0003b2d9) slider_form_pane_g7

0xb887,	// (0x0003b92a) slider_set_pane_vc_g3

0xb890,	// (0x0003b933) slider_set_pane_vc_g4

0xb899,	// (0x0003b93c) slider_set_pane_vc_g5

0xb887,	// (0x0003b92a) slider_set_pane_vc_g6

0xb8a2,	// (0x0003b945) slider_set_pane_vc_g7

0xba54,	// (0x0003baf7) slider_form_pane_vc_g1

0xba5d,	// (0x0003bb00) slider_form_pane_vc_g2

0xba66,	// (0x0003bb09) slider_form_pane_vc_g3

0xba54,	// (0x0003baf7) slider_form_pane_vc_g4

0xba6f,	// (0x0003bb12) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003fb37) slider_form_pane_vc_g

0x5c20,	// (0x00035cc3) main_idle_act3_pane

0xd44a,	// (0x0003d4ed) ai3_links_pane

0xd453,	// (0x0003d4f6) popup_ai3_data_window_ParamLimits

0xd453,	// (0x0003d4f6) popup_ai3_data_window

0x232f,	// (0x000323d2) grid_ai3_links_pane

0xd46b,	// (0x0003d50e) cell_ai3_links_pane_ParamLimits

0xd46b,	// (0x0003d50e) cell_ai3_links_pane

0xd483,	// (0x0003d526) bg_popup_sub_pane_cp11

0xd490,	// (0x0003d533) cell_ai3_links_pane_g1

0x232f,	// (0x000323d2) bg_popup_sub_pane_cp12

0xd4b5,	// (0x0003d558) heading_ai3_data_pane

0xd4bd,	// (0x0003d560) list_ai3_gene_pane

0xd4c9,	// (0x0003d56c) popup_ai3_data_window_g1

0xd4d1,	// (0x0003d574) heading_ai3_data_pane_g1

0xd4d9,	// (0x0003d57c) heading_ai3_data_pane_t1

0xd4e7,	// (0x0003d58a) list_double_ai3_gene_pane_ParamLimits

0xd4e7,	// (0x0003d58a) list_double_ai3_gene_pane

0xd4f4,	// (0x0003d597) list_single_ai3_gene_pane_ParamLimits

0xd4f4,	// (0x0003d597) list_single_ai3_gene_pane

0xc29f,	// (0x0003c342) list_highlight_pane_cp7_ParamLimits

0xc29f,	// (0x0003c342) list_highlight_pane_cp7

0xd501,	// (0x0003d5a4) list_single_a13_gene_pane_t1_ParamLimits

0xd501,	// (0x0003d5a4) list_single_a13_gene_pane_t1

0xd518,	// (0x0003d5bb) list_single_ai3_gene_pane_g1

0xd521,	// (0x0003d5c4) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003fd7e) list_single_ai3_gene_pane_g

0xd529,	// (0x0003d5cc) list_double_ai3_gene_pane_g1_ParamLimits

0xd529,	// (0x0003d5cc) list_double_ai3_gene_pane_g1

0xd535,	// (0x0003d5d8) list_double_ai3_gene_pane_t1_ParamLimits

0xd535,	// (0x0003d5d8) list_double_ai3_gene_pane_t1

0xd551,	// (0x0003d5f4) list_double_ai3_gene_pane_t2_ParamLimits

0xd551,	// (0x0003d5f4) list_double_ai3_gene_pane_t2

0xd566,	// (0x0003d609) list_double_ai3_gene_pane_t3_ParamLimits

0xd566,	// (0x0003d609) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003fd83) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003fd83) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e16,	// (0x00034eb9) aid_size_min_col_2

0xd414,	// (0x0003d4b7) aid_size_min_msg_ParamLimits

0xd414,	// (0x0003d4b7) aid_size_min_msg

0xc69e,	// (0x0003c741) fep_vkb_top_text_pane_g2_ParamLimits

0xc69e,	// (0x0003c741) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0003fbea) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0003fbea) fep_vkb_top_text_pane_g

0x5c20,	// (0x00035cc3) main_hc_apps_shell_pane

0xd583,	// (0x0003d626) grid_hc_apps_pane_ParamLimits

0xd583,	// (0x0003d626) grid_hc_apps_pane

0xd592,	// (0x0003d635) list_hc_apps_pane

0xd59a,	// (0x0003d63d) scroll_pane_cp37_ParamLimits

0xd59a,	// (0x0003d63d) scroll_pane_cp37

0xd5a6,	// (0x0003d649) cell_hc_apps_pane_ParamLimits

0xd5a6,	// (0x0003d649) cell_hc_apps_pane

0xd654,	// (0x0003d6f7) cell_hc_apps_pane_g1_ParamLimits

0xd654,	// (0x0003d6f7) cell_hc_apps_pane_g1

0xd685,	// (0x0003d728) cell_hc_apps_pane_g2_ParamLimits

0xd685,	// (0x0003d728) cell_hc_apps_pane_g2

0xd6a1,	// (0x0003d744) cell_hc_apps_pane_g3_ParamLimits

0xd6a1,	// (0x0003d744) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003fd8a) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003fd8a) cell_hc_apps_pane_g

0xd6c3,	// (0x0003d766) cell_hc_apps_pane_t1_ParamLimits

0xd6c3,	// (0x0003d766) cell_hc_apps_pane_t1

0x24c9,	// (0x0003256c) grid_highlight_pane_cp10_ParamLimits

0x24c9,	// (0x0003256c) grid_highlight_pane_cp10

0xd703,	// (0x0003d7a6) list_single_hc_apps_pane_ParamLimits

0xd703,	// (0x0003d7a6) list_single_hc_apps_pane

0xd766,	// (0x0003d809) list_single_hc_apps_pane_g1

0x87e9,	// (0x0003888c) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003fd91) list_single_hc_apps_pane_g

0x8802,	// (0x000388a5) list_single_hc_apps_pane_g2_copy1

0x881e,	// (0x000388c1) list_single_hc_apps_pane_t1

0x239f,	// (0x00032442) bg_set_opt_pane_cp_ParamLimits

0x5f39,	// (0x00035fdc) setting_slider_pane_t1_ParamLimits

0x5f52,	// (0x00035ff5) setting_slider_pane_t2_ParamLimits

0x5f6c,	// (0x0003600f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003f601) setting_slider_pane_t_ParamLimits

0x5f84,	// (0x00036027) slider_set_pane_ParamLimits

0x7614,	// (0x000376b7) control_pane_g5_ParamLimits

0x7614,	// (0x000376b7) control_pane_g5

0xb070,	// (0x0003b113) slider_set_pane_g1_ParamLimits

0x8028,	// (0x000380cb) slider_set_pane_g2_ParamLimits

0x8034,	// (0x000380d7) slider_set_pane_g3_ParamLimits

0x8048,	// (0x000380eb) slider_set_pane_g4_ParamLimits

0x8060,	// (0x00038103) slider_set_pane_g5_ParamLimits

0x8034,	// (0x000380d7) slider_set_pane_g6_ParamLimits

0x8076,	// (0x00038119) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0003f9f8) slider_set_pane_g_ParamLimits

0x7444,	// (0x000374e7) navi_icon_text_pane_ParamLimits

0x9838,	// (0x000398db) aid_fill_nsta_2_ParamLimits

0x9877,	// (0x0003991a) aid_touch_tab_arrow_left_ParamLimits

0x9886,	// (0x00039929) aid_touch_tab_arrow_right_ParamLimits

0x98f3,	// (0x00039996) clock_nsta_pane_ParamLimits

0xab73,	// (0x0003ac16) navi_icon_pane_g1_ParamLimits

0xab7f,	// (0x0003ac22) navi_text_pane_t1_ParamLimits

0xbe7f,	// (0x0003bf22) navi_icon_text_pane_g1_ParamLimits

0xbe8b,	// (0x0003bf2e) navi_icon_text_pane_t1_ParamLimits

0xd766,	// (0x0003d809) list_single_hc_apps_pane_g1_ParamLimits

0x87e9,	// (0x0003888c) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003fd91) list_single_hc_apps_pane_g_ParamLimits

0x8802,	// (0x000388a5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x881e,	// (0x000388c1) list_single_hc_apps_pane_t1_ParamLimits

0x5d7d,	// (0x00035e20) popup_toolbar2_fixed_window_ParamLimits

0x5d7d,	// (0x00035e20) popup_toolbar2_fixed_window

0x7c05,	// (0x00037ca8) popup_toolbar2_float_window

0x232f,	// (0x000323d2) bg_popup_sub_pane_cp27

0xd77f,	// (0x0003d822) grid_toolbar2_float_pane

0x232f,	// (0x000323d2) bg_popup_sub_pane_cp26

0xd77f,	// (0x0003d822) grid_toolbar2_fixed_pane

0xd787,	// (0x0003d82a) cell_toolbar2_fixed_pane_ParamLimits

0xd787,	// (0x0003d82a) cell_toolbar2_fixed_pane

0xd797,	// (0x0003d83a) cell_toolbar2_fixed_pane_g1

0x7ad7,	// (0x00037b7a) toolbar2_fixed_button_pane

0x9d0d,	// (0x00039db0) toolbar2_fixed_button_pane_g1

0x9d1d,	// (0x00039dc0) toolbar2_fixed_button_pane_g2

0x9d15,	// (0x00039db8) toolbar2_fixed_button_pane_g3

0x9d2d,	// (0x00039dd0) toolbar2_fixed_button_pane_g4

0x9d25,	// (0x00039dc8) toolbar2_fixed_button_pane_g5

0x9d35,	// (0x00039dd8) toolbar2_fixed_button_pane_g6

0x9d3d,	// (0x00039de0) toolbar2_fixed_button_pane_g7

0x9d4d,	// (0x00039df0) toolbar2_fixed_button_pane_g8

0x9d45,	// (0x00039de8) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0003f8fa) toolbar2_fixed_button_pane_g

0xd7a0,	// (0x0003d843) cell_toolbar2_float_pane_ParamLimits

0xd7a0,	// (0x0003d843) cell_toolbar2_float_pane

0xd7b1,	// (0x0003d854) cell_toolbar2_float_pane_g1

0x7ad7,	// (0x00037b7a) toolbar2_fixed_button_pane_cp

0xc408,	// (0x0003c4ab) fep_vkb_accented_list_pane_ParamLimits

0xc408,	// (0x0003c4ab) fep_vkb_accented_list_pane

0x853b,	// (0x000385de) bg_popup_fep_shadow_pane_g9

0x94b5,	// (0x00039558) bg_popup_fep_shadow_pane_cp3

0x2857,	// (0x000328fa) list_accented_list_pane

0xd7ba,	// (0x0003d85d) list_single_accented_list_pane_ParamLimits

0xd7ba,	// (0x0003d85d) list_single_accented_list_pane

0x94b5,	// (0x00039558) list_highlight_pane_cp10

0xd7cb,	// (0x0003d86e) list_single_accented_list_pane_t1

0x7b55,	// (0x00037bf8) popup_slider_window_ParamLimits

0x7b55,	// (0x00037bf8) popup_slider_window

0xd40b,	// (0x0003d4ae) aid_indentation_list_msg

0xd881,	// (0x0003d924) bg_popup_window_pane_cp19

0xd8eb,	// (0x0003d98e) popup_slider_window_g1

0xd907,	// (0x0003d9aa) popup_slider_window_g2

0xd923,	// (0x0003d9c6) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003fd96) popup_slider_window_g

0xd97f,	// (0x0003da22) popup_slider_window_t1

0xd9f3,	// (0x0003da96) small_volume_slider_vertical_pane

0xc2da,	// (0x0003c37d) small_volume_slider_vertical_pane_g1

0xc2da,	// (0x0003c37d) small_volume_slider_vertical_pane_g2

0xda0f,	// (0x0003dab2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003fda8) small_volume_slider_vertical_pane_g

0x5b43,	// (0x00035be6) area_side_right_pane_ParamLimits

0x5b43,	// (0x00035be6) area_side_right_pane

0x884c,	// (0x000388ef) aid_size_side_button_ParamLimits

0x884c,	// (0x000388ef) aid_size_side_button

0x8860,	// (0x00038903) grid_sctrl_middle_pane_ParamLimits

0x8860,	// (0x00038903) grid_sctrl_middle_pane

0x887f,	// (0x00038922) sctrl_sk_bottom_pane

0x8890,	// (0x00038933) sctrl_sk_top_pane

0x88a2,	// (0x00038945) aid_touch_sctrl_top

0x88af,	// (0x00038952) bg_sctrl_sk_pane_ParamLimits

0x88af,	// (0x00038952) bg_sctrl_sk_pane

0x88bd,	// (0x00038960) sctrl_sk_top_pane_g1

0x88ca,	// (0x0003896d) sctrl_sk_top_pane_t1

0x88a2,	// (0x00038945) aid_touch_sctrl_bottom

0x88af,	// (0x00038952) bg_sctrl_sk_pane_cp_ParamLimits

0x88af,	// (0x00038952) bg_sctrl_sk_pane_cp

0x88e5,	// (0x00038988) sctrl_sk_bottom_pane_g1

0x88ca,	// (0x0003896d) sctrl_sk_bottom_pane_t1

0x88ee,	// (0x00038991) cell_sctrl_middle_pane_ParamLimits

0x88ee,	// (0x00038991) cell_sctrl_middle_pane

0x8909,	// (0x000389ac) aid_touch_sctrl_middle_ParamLimits

0x8909,	// (0x000389ac) aid_touch_sctrl_middle

0x891b,	// (0x000389be) bg_sctrl_middle_pane_ParamLimits

0x891b,	// (0x000389be) bg_sctrl_middle_pane

0x855b,	// (0x000385fe) cell_sctrl_middle_pane_g1_ParamLimits

0x855b,	// (0x000385fe) cell_sctrl_middle_pane_g1

0x8929,	// (0x000389cc) cell_sctrl_middle_pane_g2_ParamLimits

0x8929,	// (0x000389cc) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003fdb4) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003fdb4) cell_sctrl_middle_pane_g

0x9d0d,	// (0x00039db0) bg_sctrl_middle_pane_g1

0x9d15,	// (0x00039db8) bg_sctrl_middle_pane_g2

0x9d1d,	// (0x00039dc0) bg_sctrl_middle_pane_g3

0x9d25,	// (0x00039dc8) bg_sctrl_middle_pane_g4

0x9d2d,	// (0x00039dd0) bg_sctrl_middle_pane_g5

0x9d35,	// (0x00039dd8) bg_sctrl_middle_pane_g6

0x9d3d,	// (0x00039de0) bg_sctrl_middle_pane_g7

0x9d45,	// (0x00039de8) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003fdb9) bg_sctrl_middle_pane_g

0x9d4d,	// (0x00039df0) bg_sctrl_middle_pane_g8_copy1

0x9d0d,	// (0x00039db0) bg_sctrl_sk_pane_g1

0x9d1d,	// (0x00039dc0) bg_sctrl_sk_pane_g2

0x9d15,	// (0x00039db8) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0003f8fa) bg_sctrl_sk_pane_g

0x2693,	// (0x00032736) aid_size_touch_scroll_bar

0x9d2d,	// (0x00039dd0) bg_sctrl_sk_pane_g4

0x9d25,	// (0x00039dc8) bg_sctrl_sk_pane_g5

0x9d35,	// (0x00039dd8) bg_sctrl_sk_pane_g6

0x9d3d,	// (0x00039de0) bg_sctrl_sk_pane_g7

0x9d4d,	// (0x00039df0) bg_sctrl_sk_pane_g8

0x9d45,	// (0x00039de8) bg_sctrl_sk_pane_g9

0x77be,	// (0x00037861) popup_fep_china_hwr2_fs_candidate_window

0x77c8,	// (0x0003786b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77c8,	// (0x0003786b) popup_fep_china_hwr2_fs_control_window

0x855b,	// (0x000385fe) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003fdaf) sctrl_sk_top_pane_g

0xda18,	// (0x0003dabb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda18,	// (0x0003dabb) aid_fep_china_hwr2_fs_cell

0xda2a,	// (0x0003dacd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda2a,	// (0x0003dacd) bg_popup_fep_shadow_pane_cp4

0xda41,	// (0x0003dae4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda41,	// (0x0003dae4) bg_popup_fep_shadow_pane_cp5

0xda53,	// (0x0003daf6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda53,	// (0x0003daf6) popup_fep_china_hwr2_fs_control_bar_grid

0xda63,	// (0x0003db06) popup_fep_china_hwr2_fs_control_funtion_grid

0xda6b,	// (0x0003db0e) aid_fep_china_hwr2_fs_candi_cell

0x232f,	// (0x000323d2) bg_popup_fep_shadow_pane_cp6

0xda75,	// (0x0003db18) popup_fep_china_hwr2_fs_candidate_grid

0xda7f,	// (0x0003db22) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda7f,	// (0x0003db22) cell_fep_china_hwr2_fs_funtion_grid

0xc2da,	// (0x0003c37d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda97,	// (0x0003db3a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda97,	// (0x0003db3a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdaa5,	// (0x0003db48) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdaa5,	// (0x0003db48) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003fdca) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003fdca) cell_fep_china_hwr2_fs_funtion_grid_g

0xdabb,	// (0x0003db5e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdabb,	// (0x0003db5e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdad0,	// (0x0003db73) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdad0,	// (0x0003db73) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003fdcf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003fdcf) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaec,	// (0x0003db8f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaf4,	// (0x0003db97) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdafc,	// (0x0003db9f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003fdd4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb04,	// (0x0003dba7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb04,	// (0x0003dba7) cell_fep_china_hwr2_fs_candidate_grid

0xdb1d,	// (0x0003dbc0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb25,	// (0x0003dbc8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2da,	// (0x0003c37d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2da,	// (0x0003c37d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0003fbef) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb2d,	// (0x0003dbd0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9906,	// (0x000399a9) clock_nsta_pane_cp_24_ParamLimits

0x9906,	// (0x000399a9) clock_nsta_pane_cp_24

0x9984,	// (0x00039a27) indicator_nsta_pane_cp_24_ParamLimits

0x9984,	// (0x00039a27) indicator_nsta_pane_cp_24

0xa9ef,	// (0x0003aa92) heading_pane_g1

0x0001,

0xf8bc,	// (0x0003f95f) heading_pane_g

0xb425,	// (0x0003b4c8) grid_sct_catagory_button_pane

0xb455,	// (0x0003b4f8) scroll_pane_cp5_ParamLimits

0xbecd,	// (0x0003bf70) button_value_adjust_pane_cp5_ParamLimits

0xbecd,	// (0x0003bf70) button_value_adjust_pane_cp5

0xbfac,	// (0x0003c04f) form2_midp_time_pane_ParamLimits

0xdb3b,	// (0x0003dbde) cell_sct_catagory_button_pane_ParamLimits

0xdb3b,	// (0x0003dbde) cell_sct_catagory_button_pane

0xc29f,	// (0x0003c342) bg_button_pane_cp01_ParamLimits

0xc29f,	// (0x0003c342) bg_button_pane_cp01

0xc2da,	// (0x0003c37d) cell_sct_catagory_button_pane_g1

0x7b94,	// (0x00037c37) popup_tb_extension_window

0xdb4d,	// (0x0003dbf0) aid_size_cell_ext_ParamLimits

0xdb4d,	// (0x0003dbf0) aid_size_cell_ext

0x24c9,	// (0x0003256c) bg_tb_trans_pane_cp1_ParamLimits

0x24c9,	// (0x0003256c) bg_tb_trans_pane_cp1

0xdb6d,	// (0x0003dc10) grid_tb_ext_pane_ParamLimits

0xdb6d,	// (0x0003dc10) grid_tb_ext_pane

0xdb9d,	// (0x0003dc40) cell_tb_ext_pane_ParamLimits

0xdb9d,	// (0x0003dc40) cell_tb_ext_pane

0xdbb4,	// (0x0003dc57) cell_tb_ext_pane_g1_ParamLimits

0xdbb4,	// (0x0003dc57) cell_tb_ext_pane_g1

0xdbd1,	// (0x0003dc74) cell_tb_ext_pane_t1

0x24c9,	// (0x0003256c) list_highlight_pane_cp11_ParamLimits

0x24c9,	// (0x0003256c) list_highlight_pane_cp11

0x5d9c,	// (0x00035e3f) popup_uni_indicator_window_ParamLimits

0x5d9c,	// (0x00035e3f) popup_uni_indicator_window

0x2751,	// (0x000327f4) bg_popup_sub_pane_cp14

0xdbed,	// (0x0003dc90) list_uniindi_pane

0xdbf9,	// (0x0003dc9c) uniindi_top_pane

0x24c9,	// (0x0003256c) bg_uniindi_top_pane

0xdc18,	// (0x0003dcbb) uniindi_top_pane_g1

0xdc2e,	// (0x0003dcd1) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003fddb) uniindi_top_pane_g

0xdc58,	// (0x0003dcfb) uniindi_top_pane_t1

0xdc82,	// (0x0003dd25) list_single_uniindi_pane_ParamLimits

0xdc82,	// (0x0003dd25) list_single_uniindi_pane

0xc2da,	// (0x0003c37d) bg_uniindi_top_pane_g1

0xdc94,	// (0x0003dd37) list_single_uniindi_pane_g1

0xdca7,	// (0x0003dd4a) list_single_uniindi_pane_t1

0x5c20,	// (0x00035cc3) control_bg_pane

0xdccc,	// (0x0003dd6f) bg_sctrl_sk_pane_cp1

0xdcd5,	// (0x0003dd78) bg_sctrl_sk_pane_cp2

0xdcde,	// (0x0003dd81) control_bg_pane_g1

0xdce7,	// (0x0003dd8a) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003fde4) control_bg_pane_g

0xbd24,	// (0x0003bdc7) cell_indicator_nsta_pane_g1_ParamLimits

0xbd32,	// (0x0003bdd5) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0003fb53) cell_indicator_nsta_pane_g_ParamLimits

0x4c06,	// (0x00034ca9) form2_midp_time_pane_t1_ParamLimits

0x7728,	// (0x000377cb) main_idle_act4_pane_ParamLimits

0x7728,	// (0x000377cb) main_idle_act4_pane

0x7b94,	// (0x00037c37) popup_tb_extension_window_ParamLimits

0xdb8d,	// (0x0003dc30) tb_ext_find_pane_ParamLimits

0xdb8d,	// (0x0003dc30) tb_ext_find_pane

0xdcf0,	// (0x0003dd93) ai_gene_pane_1_cp1

0x9600,	// (0x000396a3) ai_gene_pane_2_cp1

0xdcf8,	// (0x0003dd9b) list_single_idle_plugin_calendar_pane

0xdd01,	// (0x0003dda4) list_single_idle_plugin_notification_pane

0xdd0a,	// (0x0003ddad) list_single_idle_plugin_player_pane

0xdd13,	// (0x0003ddb6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd13,	// (0x0003ddb6) list_single_idle_plugin_shortcut_pane

0xdd35,	// (0x0003ddd8) main_idle_act4_pane_t1

0xdd47,	// (0x0003ddea) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003fde9) main_idle_act4_pane_t

0xdd59,	// (0x0003ddfc) middle_sk_idle_act4_pane_ParamLimits

0xdd59,	// (0x0003ddfc) middle_sk_idle_act4_pane

0xdd6f,	// (0x0003de12) popup_clock_digital_analogue_window_cp2

0xdd89,	// (0x0003de2c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd89,	// (0x0003de2c) shortcut_wheel_idle_act4_pane

0xc2da,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g1

0xc2da,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g2

0xc2da,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g3

0xc2da,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g4

0xc2da,	// (0x0003c37d) shortcut_wheel_idle_act4_pane_g5

0xdd9d,	// (0x0003de40) shortcut_wheel_idle_act4_pane_g6

0xdda5,	// (0x0003de48) shortcut_wheel_idle_act4_pane_g7

0xddad,	// (0x0003de50) shortcut_wheel_idle_act4_pane_g8

0xddb5,	// (0x0003de58) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003fdee) shortcut_wheel_idle_act4_pane_g

0xc54a,	// (0x0003c5ed) middle_sk_idle_act4_pane_g1_ParamLimits

0xc54a,	// (0x0003c5ed) middle_sk_idle_act4_pane_g1

0xde19,	// (0x0003debc) middle_sk_idle_act4_pane_g2_ParamLimits

0xde19,	// (0x0003debc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003fe11) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003fe11) middle_sk_idle_act4_pane_g

0xde25,	// (0x0003dec8) middle_sk_idle_act4_pane_t1_ParamLimits

0xde25,	// (0x0003dec8) middle_sk_idle_act4_pane_t1

0xde42,	// (0x0003dee5) grid_ai_shortcut_pane_ParamLimits

0xde42,	// (0x0003dee5) grid_ai_shortcut_pane

0xde5b,	// (0x0003defe) list_highlight_pane_cp16_ParamLimits

0xde5b,	// (0x0003defe) list_highlight_pane_cp16

0xde68,	// (0x0003df0b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde68,	// (0x0003df0b) list_single_idle_plugin_shortcut_pane_g1

0xde74,	// (0x0003df17) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde74,	// (0x0003df17) list_single_idle_plugin_shortcut_pane_g2

0xde8c,	// (0x0003df2f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde8c,	// (0x0003df2f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003fe16) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003fe16) list_single_idle_plugin_shortcut_pane_g

0xde9f,	// (0x0003df42) cell_ai_shortcut_pane_ParamLimits

0xde9f,	// (0x0003df42) cell_ai_shortcut_pane

0xdec3,	// (0x0003df66) cell_ai_shortcut_pane_g1_ParamLimits

0xdec3,	// (0x0003df66) cell_ai_shortcut_pane_g1

0xdcf0,	// (0x0003dd93) ai_gene_pane_1_cp2

0xdee5,	// (0x0003df88) ai_gene_pane_2_cp2

0xdeed,	// (0x0003df90) list_highlight_pane_cp15

0xdef6,	// (0x0003df99) list_single_idle_plugin_calendar_pane_g1

0xdeed,	// (0x0003df90) list_highlight_pane_cp17

0xdefe,	// (0x0003dfa1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf06,	// (0x0003dfa9) list_single_idle_plugin_player_pane_g1

0xb67e,	// (0x0003b721) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003fe1d) list_single_idle_plugin_player_pane_g

0xdf0e,	// (0x0003dfb1) list_single_idle_plugin_player_pane_t1

0xdf1c,	// (0x0003dfbf) list_single_idle_plugin_player_pane_t2

0xdf2a,	// (0x0003dfcd) list_single_idle_plugin_player_pane_t3

0xdf38,	// (0x0003dfdb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003fe22) list_single_idle_plugin_player_pane_t

0xdf46,	// (0x0003dfe9) wait_bar_pane_cp15

0xdf4e,	// (0x0003dff1) grid_ai_notification_pane

0xb67e,	// (0x0003b721) list_single_idle_plugin_notification_pane_g1

0xdf57,	// (0x0003dffa) cell_ai_notification_pane_ParamLimits

0xdf57,	// (0x0003dffa) cell_ai_notification_pane

0xdf64,	// (0x0003e007) cell_ai_notification_pane_g1

0xdf6c,	// (0x0003e00f) cell_ai_notification_pane_t1

0xdf7a,	// (0x0003e01d) tb_ext_find_button_pane

0xdf82,	// (0x0003e025) tb_ext_find_pane_g1

0xdf8a,	// (0x0003e02d) tb_ext_find_pane_t1

0x2b84,	// (0x00032c27) tb_ext_find_button_pane_g1

0xdf98,	// (0x0003e03b) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003fe2b) tb_ext_find_button_pane_g

0xdd35,	// (0x0003ddd8) main_idle_act4_pane_t1_ParamLimits

0xdd47,	// (0x0003ddea) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003fde9) main_idle_act4_pane_t_ParamLimits

0xdd6f,	// (0x0003de12) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd7d,	// (0x0003de20) sat_plugin_idle_act4_pane_ParamLimits

0xdd7d,	// (0x0003de20) sat_plugin_idle_act4_pane

0xdfa1,	// (0x0003e044) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfa1,	// (0x0003e044) sat_plugin_idle_act4_pane_t1

0xdfb4,	// (0x0003e057) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfb4,	// (0x0003e057) sat_plugin_idle_act4_pane_t2

0xdfc7,	// (0x0003e06a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfc7,	// (0x0003e06a) sat_plugin_idle_act4_pane_t3

0xdfda,	// (0x0003e07d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfda,	// (0x0003e07d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003fe30) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003fe30) sat_plugin_idle_act4_pane_t

0x5ce5,	// (0x00035d88) popup_battery_window_ParamLimits

0x5ce5,	// (0x00035d88) popup_battery_window

0x24c9,	// (0x0003256c) bg_popup_sub_pane_cp25_ParamLimits

0x24c9,	// (0x0003256c) bg_popup_sub_pane_cp25

0xdfed,	// (0x0003e090) popup_battery_window_g1_ParamLimits

0xdfed,	// (0x0003e090) popup_battery_window_g1

0xdff9,	// (0x0003e09c) popup_battery_window_t1_ParamLimits

0xdff9,	// (0x0003e09c) popup_battery_window_t1

0xe00b,	// (0x0003e0ae) popup_battery_window_t2_ParamLimits

0xe00b,	// (0x0003e0ae) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003fe39) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003fe39) popup_battery_window_t

0x94c9,	// (0x0003956c) midp_canvas_pane_ParamLimits

0x9542,	// (0x000395e5) midp_keypad_pane_ParamLimits

0x9542,	// (0x000395e5) midp_keypad_pane

0x9800,	// (0x000398a3) main_midp_pane_ParamLimits

0xbd8d,	// (0x0003be30) signal_pane_g2_cp_ParamLimits

0xe028,	// (0x0003e0cb) aid_size_cell_midp_keypad_ParamLimits

0xe028,	// (0x0003e0cb) aid_size_cell_midp_keypad

0xe042,	// (0x0003e0e5) midp_keyp_game_grid_pane_ParamLimits

0xe042,	// (0x0003e0e5) midp_keyp_game_grid_pane

0xe062,	// (0x0003e105) midp_keyp_rocker_pane_ParamLimits

0xe062,	// (0x0003e105) midp_keyp_rocker_pane

0xe09b,	// (0x0003e13e) midp_keyp_sk_left_pane_ParamLimits

0xe09b,	// (0x0003e13e) midp_keyp_sk_left_pane

0xe0f5,	// (0x0003e198) midp_keyp_sk_right_pane_ParamLimits

0xe0f5,	// (0x0003e198) midp_keyp_sk_right_pane

0x232f,	// (0x000323d2) bg_button_pane_cp03

0xe14f,	// (0x0003e1f2) midp_keyp_sk_left_pane_g1

0x232f,	// (0x000323d2) bg_button_pane_cp04

0xe14f,	// (0x0003e1f2) midp_keyp_sk_right_pane_g1

0xc2da,	// (0x0003c37d) midp_keyp_rocker_pane_g1

0xe158,	// (0x0003e1fb) keyp_game_cell_pane_ParamLimits

0xe158,	// (0x0003e1fb) keyp_game_cell_pane

0x232f,	// (0x000323d2) bg_button_pane_cp02

0xe16b,	// (0x0003e20e) keyp_game_cell_pane_g1

0x5d1b,	// (0x00035dbe) popup_fep_vkb2_window_ParamLimits

0x5d1b,	// (0x00035dbe) popup_fep_vkb2_window

0x8947,	// (0x000389ea) aid_size_cell_vkb2_ParamLimits

0x8947,	// (0x000389ea) aid_size_cell_vkb2

0x899b,	// (0x00038a3e) popup_fep_vkb2_window_g1_ParamLimits

0x899b,	// (0x00038a3e) popup_fep_vkb2_window_g1

0x89e3,	// (0x00038a86) vkb2_area_bottom_pane_ParamLimits

0x89e3,	// (0x00038a86) vkb2_area_bottom_pane

0x8a2f,	// (0x00038ad2) vkb2_area_keypad_pane_ParamLimits

0x8a2f,	// (0x00038ad2) vkb2_area_keypad_pane

0x8a71,	// (0x00038b14) vkb2_area_top_pane_ParamLimits

0x8a71,	// (0x00038b14) vkb2_area_top_pane

0x8aeb,	// (0x00038b8e) vkb2_top_entry_pane_ParamLimits

0x8aeb,	// (0x00038b8e) vkb2_top_entry_pane

0x8b15,	// (0x00038bb8) vkb2_top_grid_left_pane_ParamLimits

0x8b15,	// (0x00038bb8) vkb2_top_grid_left_pane

0x8b33,	// (0x00038bd6) vkb2_top_grid_right_pane_ParamLimits

0x8b33,	// (0x00038bd6) vkb2_top_grid_right_pane

0x8b51,	// (0x00038bf4) vkb2_cell_keypad_pane_ParamLimits

0x8b51,	// (0x00038bf4) vkb2_cell_keypad_pane

0x8c22,	// (0x00038cc5) vkb2_area_bottom_grid_pane_ParamLimits

0x8c22,	// (0x00038cc5) vkb2_area_bottom_grid_pane

0x8c48,	// (0x00038ceb) vkb2_area_bottom_pane_g1_ParamLimits

0x8c48,	// (0x00038ceb) vkb2_area_bottom_pane_g1

0x8c6c,	// (0x00038d0f) vkb2_area_bottom_pane_g2_ParamLimits

0x8c6c,	// (0x00038d0f) vkb2_area_bottom_pane_g2

0x8c9a,	// (0x00038d3d) vkb2_area_bottom_pane_g3_ParamLimits

0x8c9a,	// (0x00038d3d) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003fe3e) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003fe3e) vkb2_area_bottom_pane_g

0x8cfb,	// (0x00038d9e) vkb2_top_cell_left_pane_ParamLimits

0x8cfb,	// (0x00038d9e) vkb2_top_cell_left_pane

0xe17c,	// (0x0003e21f) vkb2_top_entry_pane_g1_ParamLimits

0xe17c,	// (0x0003e21f) vkb2_top_entry_pane_g1

0xe18a,	// (0x0003e22d) vkb2_top_entry_pane_t1_ParamLimits

0xe18a,	// (0x0003e22d) vkb2_top_entry_pane_t1

0xe1bc,	// (0x0003e25f) vkb2_top_entry_pane_t2_ParamLimits

0xe1bc,	// (0x0003e25f) vkb2_top_entry_pane_t2

0xe1ee,	// (0x0003e291) vkb2_top_entry_pane_t3_ParamLimits

0xe1ee,	// (0x0003e291) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003fe45) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003fe45) vkb2_top_entry_pane_t

0x8d48,	// (0x00038deb) vkb2_top_grid_right_pane_g1_ParamLimits

0x8d48,	// (0x00038deb) vkb2_top_grid_right_pane_g1

0x8d5e,	// (0x00038e01) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d5e,	// (0x00038e01) vkb2_top_grid_right_pane_g2

0x8d76,	// (0x00038e19) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d76,	// (0x00038e19) vkb2_top_grid_right_pane_g3

0x8d8e,	// (0x00038e31) vkb2_top_grid_right_pane_g4_ParamLimits

0x8d8e,	// (0x00038e31) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003fe4c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003fe4c) vkb2_top_grid_right_pane_g

0x8da4,	// (0x00038e47) vkb2_top_cell_left_pane_g1

0x8dbb,	// (0x00038e5e) vkb2_cell_keypad_pane_g1_ParamLimits

0x8dbb,	// (0x00038e5e) vkb2_cell_keypad_pane_g1

0xe212,	// (0x0003e2b5) vkb2_cell_keypad_pane_t1_ParamLimits

0xe212,	// (0x0003e2b5) vkb2_cell_keypad_pane_t1

0x8dc9,	// (0x00038e6c) vkb2_cell_bottom_grid_pane_ParamLimits

0x8dc9,	// (0x00038e6c) vkb2_cell_bottom_grid_pane

0x8e02,	// (0x00038ea5) vkb2_cell_bottom_grid_pane_g1

0xddbd,	// (0x0003de60) aid_call2_pane_cp02

0xddc5,	// (0x0003de68) aid_call_pane_cp02

0xddcd,	// (0x0003de70) clock_digital_number_pane_cp10

0xddd5,	// (0x0003de78) clock_digital_number_pane_cp11

0xdddd,	// (0x0003de80) clock_digital_number_pane_cp12

0xdde5,	// (0x0003de88) clock_digital_number_pane_cp13

0xdded,	// (0x0003de90) clock_digital_separator_pane_cp10

0x2b84,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g1

0x2b84,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g2

0xddf5,	// (0x0003de98) popup_clock_digital_analogue_window_cp2_g3

0x2b84,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g4

0xddf5,	// (0x0003de98) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003fe01) popup_clock_digital_analogue_window_cp2_g

0xddfd,	// (0x0003dea0) popup_clock_digital_analogue_window_cp2_t1

0xde0b,	// (0x0003deae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003fe0c) popup_clock_digital_analogue_window_cp2_t

0xc2da,	// (0x0003c37d) clock_digital_number_pane_cp10_g1

0xc2da,	// (0x0003c37d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003fbef) clock_digital_number_pane_cp10_g

0xc2da,	// (0x0003c37d) clock_digital_separator_pane_cp10_g1

0xc2da,	// (0x0003c37d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003fbef) clock_digital_separator_pane_cp10_g

0xdc3a,	// (0x0003dcdd) uniindi_top_pane_g3

0xdc4b,	// (0x0003dcee) uniindi_top_pane_g4

0x8bdc,	// (0x00038c7f) vkb2_row_keypad_pane_ParamLimits

0x8bdc,	// (0x00038c7f) vkb2_row_keypad_pane

0x8e1e,	// (0x00038ec1) vkb2_cell_t_keypad_pane_ParamLimits

0x8e1e,	// (0x00038ec1) vkb2_cell_t_keypad_pane

0x8e2e,	// (0x00038ed1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e2e,	// (0x00038ed1) vkb2_cell_t_keypad_pane_cp08

0x8e41,	// (0x00038ee4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e41,	// (0x00038ee4) vkb2_cell_t_keypad_pane_cp09

0x8e55,	// (0x00038ef8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e55,	// (0x00038ef8) vkb2_cell_t_keypad_pane_cp01

0x8e66,	// (0x00038f09) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e66,	// (0x00038f09) vkb2_cell_t_keypad_pane_cp02

0x8e77,	// (0x00038f1a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8e77,	// (0x00038f1a) vkb2_cell_t_keypad_pane_cp03

0x8e88,	// (0x00038f2b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8e88,	// (0x00038f2b) vkb2_cell_t_keypad_pane_cp04

0x8e99,	// (0x00038f3c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8e99,	// (0x00038f3c) vkb2_cell_t_keypad_pane_cp05

0x8eaa,	// (0x00038f4d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8eaa,	// (0x00038f4d) vkb2_cell_t_keypad_pane_cp06

0x8ebb,	// (0x00038f5e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8ebb,	// (0x00038f5e) vkb2_cell_t_keypad_pane_cp07

0x8ecc,	// (0x00038f6f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8ecc,	// (0x00038f6f) vkb2_cell_t_keypad_pane_cp10

0x855b,	// (0x000385fe) vkb2_cell_t_keypad_pane_g1

0xe229,	// (0x0003e2cc) vkb2_cell_t_keypad_pane_t1

0x5c20,	// (0x00035cc3) popup_grid_graphic2_window

0xe23b,	// (0x0003e2de) aid_size_cell_graphic2_ParamLimits

0xe23b,	// (0x0003e2de) aid_size_cell_graphic2

0xe273,	// (0x0003e316) bg_popup_window_pane_cp21_ParamLimits

0xe273,	// (0x0003e316) bg_popup_window_pane_cp21

0xe281,	// (0x0003e324) graphic2_pages_pane_ParamLimits

0xe281,	// (0x0003e324) graphic2_pages_pane

0xe2c7,	// (0x0003e36a) grid_graphic2_control_pane_ParamLimits

0xe2c7,	// (0x0003e36a) grid_graphic2_control_pane

0xe305,	// (0x0003e3a8) grid_graphic2_pane_ParamLimits

0xe305,	// (0x0003e3a8) grid_graphic2_pane

0xe379,	// (0x0003e41c) cell_graphic2_pane

0x5c20,	// (0x00035cc3) main_comp_mode_pane

0xd4bd,	// (0x0003d560) list_ai3_gene_pane_ParamLimits

0xd881,	// (0x0003d924) bg_popup_window_pane_cp19_ParamLimits

0xd88d,	// (0x0003d930) bg_touch_area_indi_pane_ParamLimits

0xd88d,	// (0x0003d930) bg_touch_area_indi_pane

0xd8a3,	// (0x0003d946) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8a3,	// (0x0003d946) bg_touch_area_indi_pane_cp01

0xd8b9,	// (0x0003d95c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8b9,	// (0x0003d95c) bg_touch_area_indi_pane_cp02

0xd8d1,	// (0x0003d974) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8d1,	// (0x0003d974) bg_touch_area_indi_pane_cp03

0xd8eb,	// (0x0003d98e) popup_slider_window_g1_ParamLimits

0xd907,	// (0x0003d9aa) popup_slider_window_g2_ParamLimits

0xd923,	// (0x0003d9c6) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003fd96) popup_slider_window_g_ParamLimits

0xd97f,	// (0x0003da22) popup_slider_window_t1_ParamLimits

0xd9f3,	// (0x0003da96) small_volume_slider_vertical_pane_ParamLimits

0xe379,	// (0x0003e41c) cell_graphic2_pane_ParamLimits

0xe3c8,	// (0x0003e46b) bg_button_pane_cp10_ParamLimits

0xe3c8,	// (0x0003e46b) bg_button_pane_cp10

0xe3db,	// (0x0003e47e) bg_button_pane_cp11_ParamLimits

0xe3db,	// (0x0003e47e) bg_button_pane_cp11

0xe3ee,	// (0x0003e491) graphic2_pages_pane_g1_ParamLimits

0xe3ee,	// (0x0003e491) graphic2_pages_pane_g1

0xe409,	// (0x0003e4ac) graphic2_pages_pane_g2_ParamLimits

0xe409,	// (0x0003e4ac) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003fe5a) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003fe5a) graphic2_pages_pane_g

0xe421,	// (0x0003e4c4) graphic2_pages_pane_t1_ParamLimits

0xe421,	// (0x0003e4c4) graphic2_pages_pane_t1

0xe439,	// (0x0003e4dc) cell_graphic2_control_pane_ParamLimits

0xe439,	// (0x0003e4dc) cell_graphic2_control_pane

0xe457,	// (0x0003e4fa) cell_graphic2_pane_g1_ParamLimits

0xe457,	// (0x0003e4fa) cell_graphic2_pane_g1

0xe464,	// (0x0003e507) cell_graphic2_pane_g2_ParamLimits

0xe464,	// (0x0003e507) cell_graphic2_pane_g2

0xe471,	// (0x0003e514) cell_graphic2_pane_g3_ParamLimits

0xe471,	// (0x0003e514) cell_graphic2_pane_g3

0xe47e,	// (0x0003e521) cell_graphic2_pane_g4_ParamLimits

0xe47e,	// (0x0003e521) cell_graphic2_pane_g4

0xe48b,	// (0x0003e52e) cell_graphic2_pane_g5_ParamLimits

0xe48b,	// (0x0003e52e) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003fe5f) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003fe5f) cell_graphic2_pane_g

0xe4a6,	// (0x0003e549) cell_graphic2_pane_t1_ParamLimits

0xe4a6,	// (0x0003e549) cell_graphic2_pane_t1

0x9d81,	// (0x00039e24) grid_highlight_pane_cp11_ParamLimits

0x9d81,	// (0x00039e24) grid_highlight_pane_cp11

0x24c9,	// (0x0003256c) bg_button_pane_cp05

0xe4dd,	// (0x0003e580) cell_graphic2_control_pane_g1

0xc2da,	// (0x0003c37d) bg_touch_area_indi_pane_g1

0xe505,	// (0x0003e5a8) aid_cmod_rocker_key_size

0xe50f,	// (0x0003e5b2) aid_cmode_itu_key_size

0xe519,	// (0x0003e5bc) main_cmode_video_pane

0xe523,	// (0x0003e5c6) main_comp_mode_itu_pane

0xe52f,	// (0x0003e5d2) main_comp_mode_rocker_pane

0xe53b,	// (0x0003e5de) cell_cmode_rocker_pane_ParamLimits

0xe53b,	// (0x0003e5de) cell_cmode_rocker_pane

0xe54d,	// (0x0003e5f0) cell_cmode_itu_pane_ParamLimits

0xe54d,	// (0x0003e5f0) cell_cmode_itu_pane

0x2751,	// (0x000327f4) bg_button_pane_cp06_ParamLimits

0x2751,	// (0x000327f4) bg_button_pane_cp06

0xc54a,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_ParamLimits

0xc54a,	// (0x0003c5ed) cell_cmode_rocker_pane_g1

0xda97,	// (0x0003db3a) cell_cmode_rocker_pane_g2_ParamLimits

0xda97,	// (0x0003db3a) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003fe6f) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003fe6f) cell_cmode_rocker_pane_g

0x232f,	// (0x000323d2) bg_button_pane_cp07

0xe562,	// (0x0003e605) cell_cmode_itu_pane_g1

0xe56b,	// (0x0003e60e) cell_cmode_itu_pane_t1

0xe579,	// (0x0003e61c) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003fe74) cell_cmode_itu_pane_t

0xdcbc,	// (0x0003dd5f) aid_touch_ctrl_left

0xdcc4,	// (0x0003dd67) aid_touch_ctrl_right

0x232f,	// (0x000323d2) compa_mode_pane

0xe587,	// (0x0003e62a) aid_cmod_rocker_key_size_cp

0xe591,	// (0x0003e634) aid_cmode_itu_key_size_cp

0xe59b,	// (0x0003e63e) compa_mode_pane_g1

0xe5a3,	// (0x0003e646) compa_mode_pane_g2

0xe5ab,	// (0x0003e64e) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003fe79) compa_mode_pane_g

0xe5b3,	// (0x0003e656) main_comp_mode_itu_pane_cp

0xe5bb,	// (0x0003e65e) main_comp_mode_rocker_pane_cp

0xe5c3,	// (0x0003e666) cell_cmode_itu_pane_cp_ParamLimits

0xe5c3,	// (0x0003e666) cell_cmode_itu_pane_cp

0xe5d8,	// (0x0003e67b) cell_cmode_rocker_pane_cp_ParamLimits

0xe5d8,	// (0x0003e67b) cell_cmode_rocker_pane_cp

0x2751,	// (0x000327f4) bg_button_pane_cp06_cp_ParamLimits

0x2751,	// (0x000327f4) bg_button_pane_cp06_cp

0xc54a,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc54a,	// (0x0003c5ed) cell_cmode_rocker_pane_g1_cp

0xc2da,	// (0x0003c37d) cell_cmode_rocker_pane_g2_cp

0x232f,	// (0x000323d2) bg_button_pane_cp07_cp

0xe5ea,	// (0x0003e68d) cell_cmode_itu_pane_g1_cp

0xe5f3,	// (0x0003e696) cell_cmode_itu_pane_t1_cp

0xe5f3,	// (0x0003e696) cell_cmode_itu_pane_t2_cp

0xb20a,	// (0x0003b2ad) settings_code_pane_cp2

0x239f,	// (0x00032442) bg_popup_window_pane_cp3_ParamLimits

0x25e2,	// (0x00032685) heading_pane_cp3_ParamLimits

0x25ee,	// (0x00032691) listscroll_popup_graphic_pane_ParamLimits

0x8304,	// (0x000383a7) fep_hwr_aid_pane_ParamLimits

0x88a2,	// (0x00038945) aid_touch_sctrl_top_ParamLimits

0x88bd,	// (0x00038960) sctrl_sk_top_pane_g1_ParamLimits

0x855b,	// (0x000385fe) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003fdaf) sctrl_sk_top_pane_g_ParamLimits

0x88ca,	// (0x0003896d) sctrl_sk_top_pane_t1_ParamLimits

0x88a2,	// (0x00038945) aid_touch_sctrl_bottom_ParamLimits

0x88ca,	// (0x0003896d) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc06,	// (0x0003dca9) aid_area_touch_clock

0x8ab3,	// (0x00038b56) aid_vkb2_area_top_pane_cell_ParamLimits

0x8ab3,	// (0x00038b56) aid_vkb2_area_top_pane_cell

0x8bfe,	// (0x00038ca1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8bfe,	// (0x00038ca1) aid_vkb2_area_bottom_pane_cell

0xe174,	// (0x0003e217) popup_char_count_window

0xe601,	// (0x0003e6a4) popup_char_count_window_g1

0xe60a,	// (0x0003e6ad) popup_char_count_window_g2

0xe613,	// (0x0003e6b6) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003fe80) popup_char_count_window_g

0xe61c,	// (0x0003e6bf) popup_char_count_window_t1

0x8979,	// (0x00038a1c) popup_fep_char_preview_window_ParamLimits

0x8979,	// (0x00038a1c) popup_fep_char_preview_window

0x8ad1,	// (0x00038b74) vkb2_top_candi_pane_ParamLimits

0x8ad1,	// (0x00038b74) vkb2_top_candi_pane

0xe62a,	// (0x0003e6cd) cell_vkb2_top_candi_pane_ParamLimits

0xe62a,	// (0x0003e6cd) cell_vkb2_top_candi_pane

0x8ee1,	// (0x00038f84) bg_popup_fep_char_preview_window_ParamLimits

0x8ee1,	// (0x00038f84) bg_popup_fep_char_preview_window

0x8eef,	// (0x00038f92) popup_fep_char_preview_window_t1_ParamLimits

0x8eef,	// (0x00038f92) popup_fep_char_preview_window_t1

0xe677,	// (0x0003e71a) bg_popup_fep_char_preview_window_g1

0xe67f,	// (0x0003e722) bg_popup_fep_char_preview_window_g2

0xe687,	// (0x0003e72a) bg_popup_fep_char_preview_window_g3

0xe68f,	// (0x0003e732) bg_popup_fep_char_preview_window_g4

0xe697,	// (0x0003e73a) bg_popup_fep_char_preview_window_g5

0x8f29,	// (0x00038fcc) bg_popup_fep_char_preview_window_g6

0xe69f,	// (0x0003e742) bg_popup_fep_char_preview_window_g7

0xe6a7,	// (0x0003e74a) bg_popup_fep_char_preview_window_g8

0xe6af,	// (0x0003e752) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003fe87) bg_popup_fep_char_preview_window_g

0x855b,	// (0x000385fe) cell_vkb2_top_candi_pane_g1_ParamLimits

0x855b,	// (0x000385fe) cell_vkb2_top_candi_pane_g1

0x8569,	// (0x0003860c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8569,	// (0x0003860c) cell_vkb2_top_candi_pane_g2

0xd051,	// (0x0003d0f4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd051,	// (0x0003d0f4) cell_vkb2_top_candi_pane_g3

0x8f31,	// (0x00038fd4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8f31,	// (0x00038fd4) cell_vkb2_top_candi_pane_g4

0xca36,	// (0x0003cad9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca36,	// (0x0003cad9) cell_vkb2_top_candi_pane_g5

0x8f52,	// (0x00038ff5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f52,	// (0x00038ff5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003fe9a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003fe9a) cell_vkb2_top_candi_pane_g

0x8f60,	// (0x00039003) cell_vkb2_top_candi_pane_t1

0x8014,	// (0x000380b7) aid_size_touch_slider_mark_ParamLimits

0x8014,	// (0x000380b7) aid_size_touch_slider_mark

0xe2b7,	// (0x0003e35a) grid_graphic2_catg_pane_ParamLimits

0xe2b7,	// (0x0003e35a) grid_graphic2_catg_pane

0xe355,	// (0x0003e3f8) popup_grid_graphic2_window_t1_ParamLimits

0xe355,	// (0x0003e3f8) popup_grid_graphic2_window_t1

0xe367,	// (0x0003e40a) popup_grid_graphic2_window_t2_ParamLimits

0xe367,	// (0x0003e40a) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003fe55) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003fe55) popup_grid_graphic2_window_t

0x24c9,	// (0x0003256c) bg_button_pane_cp05_ParamLimits

0xe4dd,	// (0x0003e580) cell_graphic2_control_pane_g1_ParamLimits

0xe6b7,	// (0x0003e75a) cell_graphic2_catg_pane_ParamLimits

0xe6b7,	// (0x0003e75a) cell_graphic2_catg_pane

0x232f,	// (0x000323d2) bg_button_pane_cp12

0xe6c9,	// (0x0003e76c) cell_graphic2_catg_pane_g1

0xdbd1,	// (0x0003dc74) cell_tb_ext_pane_t1_ParamLimits

0x8d1b,	// (0x00038dbe) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d1b,	// (0x00038dbe) vkb2_top_cell_right_narrow_pane

0x8d33,	// (0x00038dd6) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d33,	// (0x00038dd6) vkb2_top_cell_right_wide_pane

0x82f6,	// (0x00038399) bg_vkb2_func_pane_ParamLimits

0x82f6,	// (0x00038399) bg_vkb2_func_pane

0x8da4,	// (0x00038e47) vkb2_top_cell_left_pane_g1_ParamLimits

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp03_ParamLimits

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp03

0x8e02,	// (0x00038ea5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d15,	// (0x00039db8) bg_vkb2_func_pane_g1

0x9d1d,	// (0x00039dc0) bg_vkb2_func_pane_g2

0x9d2d,	// (0x00039dd0) bg_vkb2_func_pane_g3

0x9d25,	// (0x00039dc8) bg_vkb2_func_pane_g4

0x9d35,	// (0x00039dd8) bg_vkb2_func_pane_g5

0x9d3d,	// (0x00039de0) bg_vkb2_func_pane_g6

0x9d45,	// (0x00039de8) bg_vkb2_func_pane_g7

0x9d4d,	// (0x00039df0) bg_vkb2_func_pane_g8

0x9d0d,	// (0x00039db0) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003fea7) bg_vkb2_func_pane_g

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp01_ParamLimits

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp01

0x8da4,	// (0x00038e47) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8da4,	// (0x00038e47) vkb2_top_cell_right_wide_pane_g1

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp02_ParamLimits

0x82f6,	// (0x00038399) bg_vkb2_fuc_pane_cp02

0x8e02,	// (0x00038ea5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e02,	// (0x00038ea5) vkb2_top_cell_right_narrow_pane_g1

0xd803,	// (0x0003d8a6) aid_touch_area_decrease_ParamLimits

0xd803,	// (0x0003d8a6) aid_touch_area_decrease

0xd823,	// (0x0003d8c6) aid_touch_area_increase_ParamLimits

0xd823,	// (0x0003d8c6) aid_touch_area_increase

0xd82f,	// (0x0003d8d2) aid_touch_area_mute_ParamLimits

0xd82f,	// (0x0003d8d2) aid_touch_area_mute

0xd853,	// (0x0003d8f6) aid_touch_area_slider_ParamLimits

0xd853,	// (0x0003d8f6) aid_touch_area_slider

0xd93f,	// (0x0003d9e2) popup_slider_window_g4_ParamLimits

0xd93f,	// (0x0003d9e2) popup_slider_window_g4

0xd94b,	// (0x0003d9ee) popup_slider_window_g5_ParamLimits

0xd94b,	// (0x0003d9ee) popup_slider_window_g5

0xd96d,	// (0x0003da10) popup_slider_window_g6_ParamLimits

0xd96d,	// (0x0003da10) popup_slider_window_g6

0xd9ad,	// (0x0003da50) popup_slider_window_t2_ParamLimits

0xd9ad,	// (0x0003da50) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003fda3) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003fda3) popup_slider_window_t

0xd9c5,	// (0x0003da68) slider_pane_ParamLimits

0xd9c5,	// (0x0003da68) slider_pane

0xe6d2,	// (0x0003e775) slider_pane_g1_ParamLimits

0xe6d2,	// (0x0003e775) slider_pane_g1

0xe6e6,	// (0x0003e789) slider_pane_g2_ParamLimits

0xe6e6,	// (0x0003e789) slider_pane_g2

0xe6fc,	// (0x0003e79f) slider_pane_g3_ParamLimits

0xe6fc,	// (0x0003e79f) slider_pane_g3

0x0003,

0xfe17,	// (0x0003feba) slider_pane_g_ParamLimits

0xfe17,	// (0x0003feba) slider_pane_g

0x7bf0,	// (0x00037c93) popup_tb_float_extension_window_ParamLimits

0x7bf0,	// (0x00037c93) popup_tb_float_extension_window

0xe728,	// (0x0003e7cb) aid_size_cell_tb_float_ext

0x232f,	// (0x000323d2) bg_popup_sub_window_cp28

0xe734,	// (0x0003e7d7) grid_tb_float_ext_pane

0xe73e,	// (0x0003e7e1) cell_tb_float_ext_pane_ParamLimits

0xe73e,	// (0x0003e7e1) cell_tb_float_ext_pane

0xe758,	// (0x0003e7fb) cell_tb_float_ext_pane_g1

0xe761,	// (0x0003e804) grid_highlight_pane_cp12

0x8445,	// (0x000384e8) cell_last_hwr_side_pane_ParamLimits

0x8445,	// (0x000384e8) cell_last_hwr_side_pane

0xc2da,	// (0x0003c37d) cell_last_hwr_side_pane_g1

0xe76a,	// (0x0003e80d) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003fec3) cell_last_hwr_side_pane_g

0x8cca,	// (0x00038d6d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8cca,	// (0x00038d6d) vkb2_area_bottom_space_btn_pane

0x855b,	// (0x000385fe) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe229,	// (0x0003e2cc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f60,	// (0x00039003) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8f7f,	// (0x00039022) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8f7f,	// (0x00039022) vkb2_area_bottom_space_btn_pane_g1

0x8fb9,	// (0x0003905c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8fb9,	// (0x0003905c) vkb2_area_bottom_space_btn_pane_g2

0x8fef,	// (0x00039092) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8fef,	// (0x00039092) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003fec8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003fec8) vkb2_area_bottom_space_btn_pane_g

0x83b9,	// (0x0003845c) cel_fep_hwr_func_pane_ParamLimits

0x83b9,	// (0x0003845c) cel_fep_hwr_func_pane

0x83f5,	// (0x00038498) cell_hwr_side_button_pane_ParamLimits

0x83f5,	// (0x00038498) cell_hwr_side_button_pane

0xdc06,	// (0x0003dca9) aid_area_touch_clock_ParamLimits

0x24c9,	// (0x0003256c) bg_uniindi_top_pane_ParamLimits

0xdc18,	// (0x0003dcbb) uniindi_top_pane_g1_ParamLimits

0xdc2e,	// (0x0003dcd1) uniindi_top_pane_g2_ParamLimits

0xdc3a,	// (0x0003dcdd) uniindi_top_pane_g3_ParamLimits

0xdc4b,	// (0x0003dcee) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003fddb) uniindi_top_pane_g_ParamLimits

0xdc58,	// (0x0003dcfb) uniindi_top_pane_t1_ParamLimits

0x24c9,	// (0x0003256c) bg_vkb2_func_pane_cp01_ParamLimits

0x24c9,	// (0x0003256c) bg_vkb2_func_pane_cp01

0xe773,	// (0x0003e816) cel_fep_hwr_func_pane_g1_ParamLimits

0xe773,	// (0x0003e816) cel_fep_hwr_func_pane_g1

0x24c9,	// (0x0003256c) bg_vkb2_func_pane_cp02_ParamLimits

0x24c9,	// (0x0003256c) bg_vkb2_func_pane_cp02

0xe773,	// (0x0003e816) cell_hwr_side_button_pane_g1_ParamLimits

0xe773,	// (0x0003e816) cell_hwr_side_button_pane_g1

0x9b91,	// (0x00039c34) status_pane_g4_ParamLimits

0x9b91,	// (0x00039c34) status_pane_g4

0x9bab,	// (0x00039c4e) status_pane_t1

0xc015,	// (0x0003c0b8) form2_midp_gauge_slider_cont_pane

0xc01d,	// (0x0003c0c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc02f,	// (0x0003c0d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc041,	// (0x0003c0e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0003fba2) form2_midp_gauge_slider_pane_t_ParamLimits

0xc053,	// (0x0003c0f6) form2_midp_slider_pane_ParamLimits

0x8939,	// (0x000389dc) aid_size_cell_func_vkb2_ParamLimits

0x8939,	// (0x000389dc) aid_size_cell_func_vkb2

0xe714,	// (0x0003e7b7) slider_pane_g4_ParamLimits

0xe714,	// (0x0003e7b7) slider_pane_g4

0x9039,	// (0x000390dc) form2_midp_gauge_slider_pane_t2_cp01

0x9047,	// (0x000390ea) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9047,	// (0x000390ea) form2_midp_gauge_slider_pane_t3_cp01

0x9064,	// (0x00039107) form2_midp_slider_pane_cp01

0x232f,	// (0x000323d2) navi_smil_pane

0xe7ac,	// (0x0003e84f) navi_smil_pane_g1

0xe7b4,	// (0x0003e857) navi_smil_pane_t1

0xe781,	// (0x0003e824) form2_midp_slider_pane_g1

0xe78a,	// (0x0003e82d) form2_midp_slider_pane_g2

0xe792,	// (0x0003e835) form2_midp_slider_pane_g3

0xe781,	// (0x0003e824) form2_midp_slider_pane_g4

0xe79a,	// (0x0003e83d) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003fed1) form2_midp_slider_pane_g

0x9029,	// (0x000390cc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9029,	// (0x000390cc) vkb2_area_bottom_space_btn_pane_g4

0x99c0,	// (0x00039a63) lc0_navi_pane_ParamLimits

0x99c0,	// (0x00039a63) lc0_navi_pane

0x9a36,	// (0x00039ad9) lc0_stat_indi_pane_ParamLimits

0x9a36,	// (0x00039ad9) lc0_stat_indi_pane

0x9a4d,	// (0x00039af0) ls0_title_pane_ParamLimits

0x9a4d,	// (0x00039af0) ls0_title_pane

0x2751,	// (0x000327f4) bg_popup_sub_pane_cp14_ParamLimits

0xdbed,	// (0x0003dc90) list_uniindi_pane_ParamLimits

0xdbf9,	// (0x0003dc9c) uniindi_top_pane_ParamLimits

0xdc94,	// (0x0003dd37) list_single_uniindi_pane_g1_ParamLimits

0xdca7,	// (0x0003dd4a) list_single_uniindi_pane_t1_ParamLimits

0x906d,	// (0x00039110) lc0_stat_clock_pane_ParamLimits

0x906d,	// (0x00039110) lc0_stat_clock_pane

0xe7c2,	// (0x0003e865) lc0_stat_indi_pane_g1_ParamLimits

0xe7c2,	// (0x0003e865) lc0_stat_indi_pane_g1

0xe7cf,	// (0x0003e872) lc0_stat_indi_pane_g2_ParamLimits

0xe7cf,	// (0x0003e872) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003fedc) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003fedc) lc0_stat_indi_pane_g

0x907a,	// (0x0003911d) lc0_uni_indicator_pane_ParamLimits

0x907a,	// (0x0003911d) lc0_uni_indicator_pane

0xe7dc,	// (0x0003e87f) ls0_title_pane_g1_ParamLimits

0xe7dc,	// (0x0003e87f) ls0_title_pane_g1

0xe7f0,	// (0x0003e893) ls0_title_pane_t1_ParamLimits

0xe7f0,	// (0x0003e893) ls0_title_pane_t1

0x9087,	// (0x0003912a) lc0_uni_indicator_pane_g1_ParamLimits

0x9087,	// (0x0003912a) lc0_uni_indicator_pane_g1

0xe826,	// (0x0003e8c9) lc0_stat_clock_pane_t1

0x5c20,	// (0x00035cc3) main_ai5_pane

0xe834,	// (0x0003e8d7) ai5_sk_pane_ParamLimits

0xe834,	// (0x0003e8d7) ai5_sk_pane

0xe841,	// (0x0003e8e4) cell_ai5_widget_pane_ParamLimits

0xe841,	// (0x0003e8e4) cell_ai5_widget_pane

0xe8f3,	// (0x0003e996) aid_size_cell_widget_grid

0xe901,	// (0x0003e9a4) bg_ai5_widget_pane_ParamLimits

0xe901,	// (0x0003e9a4) bg_ai5_widget_pane

0xe975,	// (0x0003ea18) cell_ai5_widget_pane_g2

0xe985,	// (0x0003ea28) cell_ai5_widget_pane_g3

0xe99c,	// (0x0003ea3f) cell_ai5_widget_pane_g4

0xe9a8,	// (0x0003ea4b) cell_ai5_widget_pane_g5

0xe9b4,	// (0x0003ea57) cell_ai5_widget_pane_g6

0xe9c0,	// (0x0003ea63) cell_ai5_widget_pane_g7

0xea08,	// (0x0003eaab) cell_ai5_widget_pane_t1_ParamLimits

0xea08,	// (0x0003eaab) cell_ai5_widget_pane_t1

0xea25,	// (0x0003eac8) cell_ai5_widget_pane_t2_ParamLimits

0xea25,	// (0x0003eac8) cell_ai5_widget_pane_t2

0xea3d,	// (0x0003eae0) cell_ai5_widget_pane_t3_ParamLimits

0xea3d,	// (0x0003eae0) cell_ai5_widget_pane_t3

0xea55,	// (0x0003eaf8) cell_ai5_widget_pane_t4_ParamLimits

0xea55,	// (0x0003eaf8) cell_ai5_widget_pane_t4

0xea72,	// (0x0003eb15) cell_ai5_widget_pane_t5_ParamLimits

0xea72,	// (0x0003eb15) cell_ai5_widget_pane_t5

0xea91,	// (0x0003eb34) cell_ai5_widget_pane_t6_ParamLimits

0xea91,	// (0x0003eb34) cell_ai5_widget_pane_t6

0xeaa3,	// (0x0003eb46) cell_ai5_widget_pane_t7_ParamLimits

0xeaa3,	// (0x0003eb46) cell_ai5_widget_pane_t7

0xeabc,	// (0x0003eb5f) cell_ai5_widget_pane_t8_ParamLimits

0xeabc,	// (0x0003eb5f) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003fef6) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003fef6) cell_ai5_widget_pane_t

0xeb10,	// (0x0003ebb3) grid_ai5_widget_pane

0x2751,	// (0x000327f4) highlight_cell_ai5_widget_pane_ParamLimits

0x2751,	// (0x000327f4) highlight_cell_ai5_widget_pane

0xeb1e,	// (0x0003ebc1) ai5_sk_left_pane

0xeb28,	// (0x0003ebcb) ai5_sk_middle_pane

0xeb32,	// (0x0003ebd5) ai5_sk_right_pane

0xeb3c,	// (0x0003ebdf) bg_ai5_widget_pane_g1_ParamLimits

0xeb3c,	// (0x0003ebdf) bg_ai5_widget_pane_g1

0xeb48,	// (0x0003ebeb) bg_ai5_widget_pane_g2_ParamLimits

0xeb48,	// (0x0003ebeb) bg_ai5_widget_pane_g2

0xeb54,	// (0x0003ebf7) bg_ai5_widget_pane_g3_ParamLimits

0xeb54,	// (0x0003ebf7) bg_ai5_widget_pane_g3

0xeb60,	// (0x0003ec03) bg_ai5_widget_pane_g4_ParamLimits

0xeb60,	// (0x0003ec03) bg_ai5_widget_pane_g4

0xeb6c,	// (0x0003ec0f) bg_ai5_widget_pane_g5_ParamLimits

0xeb6c,	// (0x0003ec0f) bg_ai5_widget_pane_g5

0xeb78,	// (0x0003ec1b) bg_ai5_widget_pane_g6_ParamLimits

0xeb78,	// (0x0003ec1b) bg_ai5_widget_pane_g6

0xeb84,	// (0x0003ec27) bg_ai5_widget_pane_g7_ParamLimits

0xeb84,	// (0x0003ec27) bg_ai5_widget_pane_g7

0xeb90,	// (0x0003ec33) bg_ai5_widget_pane_g8_ParamLimits

0xeb90,	// (0x0003ec33) bg_ai5_widget_pane_g8

0xeb9c,	// (0x0003ec3f) bg_ai5_widget_pane_g9_ParamLimits

0xeb9c,	// (0x0003ec3f) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003ff0b) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003ff0b) bg_ai5_widget_pane_g

0xebce,	// (0x0003ec71) cell_shortcut_ai5_widget_pane_ParamLimits

0xebce,	// (0x0003ec71) cell_shortcut_ai5_widget_pane

0x94b5,	// (0x00039558) bg_cell_shortcut_ai5_widget_pane

0xebdf,	// (0x0003ec82) cell_grid_ai5_widget_pane_g1

0x94b5,	// (0x00039558) highlight_cell_shortcut_ai5_widget_pane

0x9d15,	// (0x00039db8) ai5_sk_left_pane_g1

0xebe8,	// (0x0003ec8b) ai5_sk_left_pane_g2

0xebf0,	// (0x0003ec93) ai5_sk_left_pane_g3

0xebf8,	// (0x0003ec9b) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003ff1e) ai5_sk_left_pane_g

0xec00,	// (0x0003eca3) ai5_sk_left_pane_t1

0x9d1d,	// (0x00039dc0) ai5_sk_right_pane_g1

0xec0e,	// (0x0003ecb1) ai5_sk_right_pane_g2

0xec16,	// (0x0003ecb9) ai5_sk_right_pane_g3

0xec1e,	// (0x0003ecc1) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003ff27) ai5_sk_right_pane_g

0xec26,	// (0x0003ecc9) ai5_sk_right_pane_t1

0x9d1d,	// (0x00039dc0) ai5_sk_middle_pane_g1

0x9d15,	// (0x00039db8) ai5_sk_middle_pane_g2

0x9d35,	// (0x00039dd8) ai5_sk_middle_pane_g3

0xec16,	// (0x0003ecb9) ai5_sk_middle_pane_g4

0xebf0,	// (0x0003ec93) ai5_sk_middle_pane_g5

0xec34,	// (0x0003ecd7) ai5_sk_middle_pane_g6

0xec3c,	// (0x0003ecdf) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003ff30) ai5_sk_middle_pane_g

0x9846,	// (0x000398e9) aid_touch_area_size_lc0_ParamLimits

0x9846,	// (0x000398e9) aid_touch_area_size_lc0

0x858a,	// (0x0003862d) cell_hwr_candidate_pane_t1_ParamLimits

0x9862,	// (0x00039905) aid_touch_navi_pane

0x9b3b,	// (0x00039bde) status_dt_navi_pane_ParamLimits

0x9b3b,	// (0x00039bde) status_dt_navi_pane

0x9b48,	// (0x00039beb) status_dt_sta_pane_ParamLimits

0x9b48,	// (0x00039beb) status_dt_sta_pane

0xec44,	// (0x0003ece7) dt_sta_controll_pane

0xec51,	// (0x0003ecf4) dt_sta_indi_pane

0xec62,	// (0x0003ed05) dt_sta_title_pane

0x24c9,	// (0x0003256c) bg_dt_sta_indi_pane_ParamLimits

0x24c9,	// (0x0003256c) bg_dt_sta_indi_pane

0xec75,	// (0x0003ed18) dt_sta_battery_pane

0xec7d,	// (0x0003ed20) dt_sta_indi_pane_g1

0xec86,	// (0x0003ed29) dt_sta_indi_pane_g2

0xec8f,	// (0x0003ed32) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003ff3f) dt_sta_indi_pane_g

0xec98,	// (0x0003ed3b) dt_sta_signal_pane

0x2751,	// (0x000327f4) bg_dt_sta_title_pane_ParamLimits

0x2751,	// (0x000327f4) bg_dt_sta_title_pane

0xab43,	// (0x0003abe6) dt_sta_title_pane_g1

0xeca1,	// (0x0003ed44) dt_sta_title_pane_t1_ParamLimits

0xeca1,	// (0x0003ed44) dt_sta_title_pane_t1

0x232f,	// (0x000323d2) bg_dt_sta_control_pane

0xecb6,	// (0x0003ed59) dt_sta_controll_pane_g1

0xecbf,	// (0x0003ed62) bg_dt_sta_title_pane_g1

0xecc8,	// (0x0003ed6b) bg_dt_sta_title_pane_g2

0xecd1,	// (0x0003ed74) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003ff46) bg_dt_sta_title_pane_g

0xc2da,	// (0x0003c37d) bg_dt_sta_indi_pane_g1

0xecda,	// (0x0003ed7d) dt_sta_signal_pane_g1

0xece2,	// (0x0003ed85) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003ff4d) dt_sta_signal_pane_g

0xecea,	// (0x0003ed8d) dt_sta_battery_pane_g1

0xecf3,	// (0x0003ed96) dt_sta_battery_pane_t1

0xc2da,	// (0x0003c37d) bg_dt_sta_control_pane_g1

0x2c07,	// (0x00032caa) fep_china_uni_eep_pane

0x2c0f,	// (0x00032cb2) fep_china_uni_entry_pane_ParamLimits

0x2c1f,	// (0x00032cc2) popup_fep_china_uni_window_g1_ParamLimits

0x2c2f,	// (0x00032cd2) popup_fep_china_uni_window_g2_ParamLimits

0x2c2f,	// (0x00032cd2) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0003f7b6) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0003f7b6) popup_fep_china_uni_window_g

0xed02,	// (0x0003eda5) fep_china_uni_eep_pane_g1

0xed0a,	// (0x0003edad) fep_china_uni_eep_pane_t1

0xe7a3,	// (0x0003e846) aid_touch_area_size_smil_player

0x99b8,	// (0x00039a5b) lc0_clock_pane

0x9b9f,	// (0x00039c42) status_pane_g5_ParamLimits

0x9b9f,	// (0x00039c42) status_pane_g5

0x78b1,	// (0x00037954) popup_keymap_window

0x9b5d,	// (0x00039c00) status_icon_pane

0xe985,	// (0x0003ea28) cell_ai5_widget_pane_g3_ParamLimits

0xe99c,	// (0x0003ea3f) cell_ai5_widget_pane_g4_ParamLimits

0xe9a8,	// (0x0003ea4b) cell_ai5_widget_pane_g5_ParamLimits

0xe9cc,	// (0x0003ea6f) cell_ai5_widget_pane_g8_ParamLimits

0xe9cc,	// (0x0003ea6f) cell_ai5_widget_pane_g8

0xe9e0,	// (0x0003ea83) cell_ai5_widget_pane_g9_ParamLimits

0xe9e0,	// (0x0003ea83) cell_ai5_widget_pane_g9

0xe9f4,	// (0x0003ea97) cell_ai5_widget_pane_g10_ParamLimits

0xe9f4,	// (0x0003ea97) cell_ai5_widget_pane_g10

0xed19,	// (0x0003edbc) status_icon_pane_g1

0x232f,	// (0x000323d2) bg_popup_sub_pane_cp13

0xed21,	// (0x0003edc4) popup_keymap_window_t1

0x9786,	// (0x00039829) control_pane_g6_ParamLimits

0x9786,	// (0x00039829) control_pane_g6

0x9793,	// (0x00039836) control_pane_g7_ParamLimits

0x9793,	// (0x00039836) control_pane_g7

0x97a0,	// (0x00039843) control_pane_g8_ParamLimits

0x97a0,	// (0x00039843) control_pane_g8

0xec44,	// (0x0003ece7) dt_sta_controll_pane_ParamLimits

0xec51,	// (0x0003ecf4) dt_sta_indi_pane_ParamLimits

0xec62,	// (0x0003ed05) dt_sta_title_pane_ParamLimits

0x269c,	// (0x0003273f) aid_size_touch_scroll_bar_cale

0x5cf9,	// (0x00035d9c) popup_discreet_window_ParamLimits

0x5cf9,	// (0x00035d9c) popup_discreet_window

0x5d73,	// (0x00035e16) popup_sk_window

0xa387,	// (0x0003a42a) bg_popup_sub_pane_cp28_ParamLimits

0xa387,	// (0x0003a42a) bg_popup_sub_pane_cp28

0xed2f,	// (0x0003edd2) popup_discreet_window_g1_ParamLimits

0xed2f,	// (0x0003edd2) popup_discreet_window_g1

0xed4f,	// (0x0003edf2) popup_discreet_window_t1_ParamLimits

0xed4f,	// (0x0003edf2) popup_discreet_window_t1

0xed6d,	// (0x0003ee10) popup_discreet_window_t2_ParamLimits

0xed6d,	// (0x0003ee10) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003ff52) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003ff52) popup_discreet_window_t

0x909b,	// (0x0003913e) popup_sk_window_g1

0x90a5,	// (0x00039148) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003ff59) popup_sk_window_g

0x90ad,	// (0x00039150) popup_sk_window_t1

0x90bb,	// (0x0003915e) popup_sk_window_t1_copy1

0xe975,	// (0x0003ea18) cell_ai5_widget_pane_g2_ParamLimits

0xeace,	// (0x0003eb71) cell_ai5_widget_pane_t9_ParamLimits

0xeace,	// (0x0003eb71) cell_ai5_widget_pane_t9

0x232f,	// (0x000323d2) main_fep_fshwr2_pane

0x90c9,	// (0x0003916c) aid_fshwr2_btn_pane

0x90d5,	// (0x00039178) aid_fshwr2_syb_pane

0x90e6,	// (0x00039189) aid_fshwr2_txt_pane

0x90f2,	// (0x00039195) fshwr2_func_candi_pane

0x910a,	// (0x000391ad) fshwr2_hwr_syb_pane

0x9121,	// (0x000391c4) fshwr2_icf_pane

0x5c20,	// (0x00035cc3) fshwr2_icf_bg_pane

0x914a,	// (0x000391ed) fshwr2_icf_pane_t1_ParamLimits

0x914a,	// (0x000391ed) fshwr2_icf_pane_t1

0x2b84,	// (0x00032c27) fshwr2_func_candi_pane_g1

0xedbf,	// (0x0003ee62) fshwr2_func_candi_row_pane_ParamLimits

0xedbf,	// (0x0003ee62) fshwr2_func_candi_row_pane

0x9163,	// (0x00039206) cell_fshwr2_syb_pane_ParamLimits

0x9163,	// (0x00039206) cell_fshwr2_syb_pane

0x855b,	// (0x000385fe) fshwr2_hwr_syb_pane_g1_ParamLimits

0x855b,	// (0x000385fe) fshwr2_hwr_syb_pane_g1

0x5c20,	// (0x00035cc3) bg_popup_call_pane_cp01

0x9179,	// (0x0003921c) fshwr2_func_candi_cell_pane_ParamLimits

0x9179,	// (0x0003921c) fshwr2_func_candi_cell_pane

0xa9e3,	// (0x0003aa86) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e3,	// (0x0003aa86) fshwr2_func_candi_cell_bg_pane

0x91c4,	// (0x00039267) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x91c4,	// (0x00039267) fshwr2_func_candi_cell_pane_g1

0x91ec,	// (0x0003928f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x91ec,	// (0x0003928f) fshwr2_func_candi_cell_pane_t1

0x5c20,	// (0x00035cc3) bg_button_pane_cp08

0xedcf,	// (0x0003ee72) cell_fshwr2_syb_bg_pane

0x91ff,	// (0x000392a2) cell_fshwr2_syb_bg_pane_g1

0x9207,	// (0x000392aa) cell_fshwr2_syb_bg_pane_t1

0x2751,	// (0x000327f4) main_tmo_pane

0xae7c,	// (0x0003af1f) uni_indicator_pane_g1_ParamLimits

0xae8f,	// (0x0003af32) uni_indicator_pane_g2_ParamLimits

0xaea1,	// (0x0003af44) uni_indicator_pane_g3_ParamLimits

0xaeb0,	// (0x0003af53) uni_indicator_pane_g4_ParamLimits

0xaeb0,	// (0x0003af53) uni_indicator_pane_g4

0xaec4,	// (0x0003af67) uni_indicator_pane_g5_ParamLimits

0xaec4,	// (0x0003af67) uni_indicator_pane_g5

0xaec4,	// (0x0003af67) uni_indicator_pane_g6_ParamLimits

0xaec4,	// (0x0003af67) uni_indicator_pane_g6

0xf912,	// (0x0003f9b5) uni_indicator_pane_g_ParamLimits

0xd7e5,	// (0x0003d888) popup_tmo_note_window_ParamLimits

0xd7e5,	// (0x0003d888) popup_tmo_note_window

0x891b,	// (0x000389be) fshwr2_bg_pane

0x91dd,	// (0x00039280) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x91dd,	// (0x00039280) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003ff5e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003ff5e) fshwr2_func_candi_cell_pane_g

0x8543,	// (0x000385e6) bg_popup_window_pane_cp01

0x9216,	// (0x000392b9) bg_popup_window_pane_g1_cp01

0xedd7,	// (0x0003ee7a) bg_popup_window_pane_cp22_ParamLimits

0xedd7,	// (0x0003ee7a) bg_popup_window_pane_cp22

0xede5,	// (0x0003ee88) listscroll_tmo_link_pane_ParamLimits

0xede5,	// (0x0003ee88) listscroll_tmo_link_pane

0xee25,	// (0x0003eec8) popup_tmo_note_window_g1_ParamLimits

0xee25,	// (0x0003eec8) popup_tmo_note_window_g1

0xee32,	// (0x0003eed5) tmo_note_info_pane_ParamLimits

0xee32,	// (0x0003eed5) tmo_note_info_pane

0xee4c,	// (0x0003eeef) list_tmo_note_info_pane_g1_ParamLimits

0xee4c,	// (0x0003eeef) list_tmo_note_info_pane_g1

0xee63,	// (0x0003ef06) list_tmo_note_info_pane_g2_ParamLimits

0xee63,	// (0x0003ef06) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003ff63) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003ff63) list_tmo_note_info_pane_g

0xee7f,	// (0x0003ef22) list_tmo_note_info_text_pane_ParamLimits

0xee7f,	// (0x0003ef22) list_tmo_note_info_text_pane

0xef00,	// (0x0003efa3) list_tmo_link_pane

0xef0d,	// (0x0003efb0) scroll_pane_cp20

0xef1a,	// (0x0003efbd) list_single_tmo_link_pane_ParamLimits

0xef1a,	// (0x0003efbd) list_single_tmo_link_pane

0xef2a,	// (0x0003efcd) list_single_tmo_link_pane_t1

0xef38,	// (0x0003efdb) list_tmo_note_info_text_pane_t1_ParamLimits

0xef38,	// (0x0003efdb) list_tmo_note_info_text_pane_t1

0x6a1d,	// (0x00036ac0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6a1d,	// (0x00036ac0) aid_size_touch_scroll_bar_cp01

0x690f,	// (0x000369b2) aid_size_touch_slider_marker

0x5d5b,	// (0x00035dfe) popup_settings_window_ParamLimits

0x5d5b,	// (0x00035dfe) popup_settings_window

0x477f,	// (0x00034822) popup_candi_list_indi_window

0x9862,	// (0x00039905) aid_touch_navi_pane_ParamLimits

0x8876,	// (0x00038919) rs_clock_indi_pane

0x887f,	// (0x00038922) sctrl_sk_bottom_pane_ParamLimits

0x8890,	// (0x00038933) sctrl_sk_top_pane_ParamLimits

0x8993,	// (0x00038a36) popup_fep_tooltip_window

0xe8f3,	// (0x0003e996) aid_size_cell_widget_grid_ParamLimits

0xe960,	// (0x0003ea03) cell_ai5_widget_pane_g1_ParamLimits

0xe960,	// (0x0003ea03) cell_ai5_widget_pane_g1

0xe9b4,	// (0x0003ea57) cell_ai5_widget_pane_g6_ParamLimits

0xe9c0,	// (0x0003ea63) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003fee1) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003fee1) cell_ai5_widget_pane_g

0xeaf2,	// (0x0003eb95) cell_ai5_widget_pane_t10_ParamLimits

0xeaf2,	// (0x0003eb95) cell_ai5_widget_pane_t10

0xeb10,	// (0x0003ebb3) grid_ai5_widget_pane_ParamLimits

0xeba8,	// (0x0003ec4b) cell_contacts_ai5_widget_pane_ParamLimits

0xeba8,	// (0x0003ec4b) cell_contacts_ai5_widget_pane

0xed82,	// (0x0003ee25) popup_discreet_window_t3_ParamLimits

0xed82,	// (0x0003ee25) popup_discreet_window_t3

0x9136,	// (0x000391d9) popup_fshwr2_char_preview_window_ParamLimits

0x9136,	// (0x000391d9) popup_fshwr2_char_preview_window

0xee9d,	// (0x0003ef40) tmo_note_info_pane_t1

0xeeb2,	// (0x0003ef55) tmo_note_info_pane_t2

0xeec7,	// (0x0003ef6a) tmo_note_info_pane_t3

0xeedc,	// (0x0003ef7f) tmo_note_info_pane_t4

0xeeee,	// (0x0003ef91) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003ff68) tmo_note_info_pane_t

0xef00,	// (0x0003efa3) list_tmo_link_pane_ParamLimits

0xef0d,	// (0x0003efb0) scroll_pane_cp20_ParamLimits

0x5c20,	// (0x00035cc3) bg_popup_fep_char_preview_window_cp01

0xef51,	// (0x0003eff4) popup_fshwr2_char_preview_window_t1

0xef5f,	// (0x0003f002) popup_candi_list_indi_window_g1

0xef68,	// (0x0003f00b) bg_cell_contacts_ai5_widget_pane

0xef74,	// (0x0003f017) cell_contacts_ai5_widget_pane_g1

0xc98b,	// (0x0003ca2e) cell_contacts_ai5_widget_pane_g2

0xef89,	// (0x0003f02c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003ff73) cell_contacts_ai5_widget_pane_g

0xef95,	// (0x0003f038) cell_contacts_ai5_widget_pane_t1

0x2751,	// (0x000327f4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf00c,	// (0x0003f0af) settings_container_pane

0x94b5,	// (0x00039558) listscroll_set_pane_copy1

0xb9dd,	// (0x0003ba80) scroll_pane_cp121_copy1

0xa140,	// (0x0003a1e3) set_content_pane_copy1

0xf018,	// (0x0003f0bb) aid_height_set_list_copy1_ParamLimits

0xf018,	// (0x0003f0bb) aid_height_set_list_copy1

0xb0bc,	// (0x0003b15f) aid_size_parent_copy1_ParamLimits

0xb0bc,	// (0x0003b15f) aid_size_parent_copy1

0xf024,	// (0x0003f0c7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf024,	// (0x0003f0c7) button_value_adjust_pane_cp6_copy1

0x9800,	// (0x000398a3) list_highlight_pane_cp2_copy1_ParamLimits

0x9800,	// (0x000398a3) list_highlight_pane_cp2_copy1

0xf038,	// (0x0003f0db) list_set_pane_copy1_ParamLimits

0xf038,	// (0x0003f0db) list_set_pane_copy1

0xefa7,	// (0x0003f04a) main_pane_set_t1_copy1_ParamLimits

0xefa7,	// (0x0003f04a) main_pane_set_t1_copy1

0xefe1,	// (0x0003f084) main_pane_set_t2_copy1_ParamLimits

0xefe1,	// (0x0003f084) main_pane_set_t2_copy1

0xf0e5,	// (0x0003f188) main_pane_set_t3_copy1

0xf0f3,	// (0x0003f196) main_pane_set_t4_copy1

0xf000,	// (0x0003f0a3) set_content_pane_g1_copy1_ParamLimits

0xf000,	// (0x0003f0a3) set_content_pane_g1_copy1

0xf101,	// (0x0003f1a4) setting_code_pane_copy1

0xf109,	// (0x0003f1ac) setting_slider_graphic_pane_copy1

0xf109,	// (0x0003f1ac) setting_slider_pane_copy1

0xf109,	// (0x0003f1ac) setting_text_pane_copy1

0xf109,	// (0x0003f1ac) setting_volume_pane_copy1

0xf101,	// (0x0003f1a4) settings_code_pane_cp2_copy1

0xf111,	// (0x0003f1b4) settings_code_pane_cp_copy1_ParamLimits

0xf111,	// (0x0003f1b4) settings_code_pane_cp_copy1

0x921f,	// (0x000392c2) volume_set_pane_copy1

0xf125,	// (0x0003f1c8) volume_set_pane_g10_copy1

0xf12d,	// (0x0003f1d0) volume_set_pane_g1_copy1

0xf135,	// (0x0003f1d8) volume_set_pane_g2_copy1

0xf13d,	// (0x0003f1e0) volume_set_pane_g3_copy1

0xf145,	// (0x0003f1e8) volume_set_pane_g4_copy1

0xf14d,	// (0x0003f1f0) volume_set_pane_g5_copy1

0xf155,	// (0x0003f1f8) volume_set_pane_g6_copy1

0xf15d,	// (0x0003f200) volume_set_pane_g7_copy1

0xf165,	// (0x0003f208) volume_set_pane_g8_copy1

0xf16d,	// (0x0003f210) volume_set_pane_g9_copy1

0x239f,	// (0x00032442) bg_set_opt_pane_cp_copy1_ParamLimits

0x239f,	// (0x00032442) bg_set_opt_pane_cp_copy1

0x9227,	// (0x000392ca) setting_slider_pane_t1_copy1_ParamLimits

0x9227,	// (0x000392ca) setting_slider_pane_t1_copy1

0x9245,	// (0x000392e8) setting_slider_pane_t2_copy1_ParamLimits

0x9245,	// (0x000392e8) setting_slider_pane_t2_copy1

0x925f,	// (0x00039302) setting_slider_pane_t3_copy1_ParamLimits

0x925f,	// (0x00039302) setting_slider_pane_t3_copy1

0x9277,	// (0x0003931a) slider_set_pane_copy1_ParamLimits

0x9277,	// (0x0003931a) slider_set_pane_copy1

0x27a9,	// (0x0003284c) set_opt_bg_pane_g1_copy2

0x27b1,	// (0x00032854) set_opt_bg_pane_g2_copy2

0xf175,	// (0x0003f218) set_opt_bg_pane_g3_copy2

0x27c1,	// (0x00032864) set_opt_bg_pane_g4_copy2

0x27c9,	// (0x0003286c) set_opt_bg_pane_g5_copy2

0x27d1,	// (0x00032874) set_opt_bg_pane_g6_copy2

0xf17f,	// (0x0003f222) set_opt_bg_pane_g7_copy2

0xf187,	// (0x0003f22a) set_opt_bg_pane_g8_copy2

0xf191,	// (0x0003f234) set_opt_bg_pane_g9_copy2

0x928d,	// (0x00039330) aid_size_touch_slider_mark_copy1_ParamLimits

0x928d,	// (0x00039330) aid_size_touch_slider_mark_copy1

0xf19b,	// (0x0003f23e) slider_set_pane_g1_copy1

0x92a1,	// (0x00039344) slider_set_pane_g2_copy1

0x8034,	// (0x000380d7) slider_set_pane_g3_copy1_ParamLimits

0x8034,	// (0x000380d7) slider_set_pane_g3_copy1

0x8048,	// (0x000380eb) slider_set_pane_g4_copy1_ParamLimits

0x8048,	// (0x000380eb) slider_set_pane_g4_copy1

0x8060,	// (0x00038103) slider_set_pane_g5_copy1_ParamLimits

0x8060,	// (0x00038103) slider_set_pane_g5_copy1

0x8034,	// (0x000380d7) slider_set_pane_g6_copy1_ParamLimits

0x8034,	// (0x000380d7) slider_set_pane_g6_copy1

0x92a9,	// (0x0003934c) slider_set_pane_g7_copy1_ParamLimits

0x92a9,	// (0x0003934c) slider_set_pane_g7_copy1

0x2343,	// (0x000323e6) bg_set_opt_pane_cp2_copy1

0xf1a4,	// (0x0003f247) setting_slider_graphic_pane_g1_copy1

0xf1ad,	// (0x0003f250) setting_slider_graphic_pane_t1_copy1

0xf1bd,	// (0x0003f260) setting_slider_graphic_pane_t2_copy1

0xf1cd,	// (0x0003f270) slider_set_pane_cp_copy1

0xf1dd,	// (0x0003f280) input_focus_pane_cp1_copy1

0xf1e6,	// (0x0003f289) list_set_text_pane_copy1

0xf1ee,	// (0x0003f291) setting_text_pane_g1_copy1

0x4e85,	// (0x00034f28) set_text_pane_t1_copy1

0xf1dd,	// (0x0003f280) input_focus_pane_cp2_copy1

0xf1ee,	// (0x0003f291) setting_code_pane_g1_copy1

0xf1f7,	// (0x0003f29a) setting_code_pane_t1_copy1

0xf205,	// (0x0003f2a8) list_set_graphic_pane_copy1

0x2343,	// (0x000323e6) bg_set_opt_pane_cp4_copy1

0x72cf,	// (0x00037372) list_set_graphic_pane_g1_copy1_ParamLimits

0x72cf,	// (0x00037372) list_set_graphic_pane_g1_copy1

0xf219,	// (0x0003f2bc) list_set_graphic_pane_g2_copy1

0x72e7,	// (0x0003738a) list_set_graphic_pane_t1_copy1_ParamLimits

0x72e7,	// (0x0003738a) list_set_graphic_pane_t1_copy1

0xc2da,	// (0x0003c37d) rs_clock_indi_pane_g1

0xf221,	// (0x0003f2c4) rs_clock_indi_pane_t1

0xf22f,	// (0x0003f2d2) rs_indi_pane

0xf237,	// (0x0003f2da) rs_indi_pane_g1

0xf240,	// (0x0003f2e3) rs_indi_pane_g2

0xef5f,	// (0x0003f002) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003ff7a) rs_indi_pane_g

0x94b5,	// (0x00039558) bg_popup_preview_window_pane_cp03

0xf249,	// (0x0003f2ec) popup_fep_tooltip_window_t1

0xcf75,	// (0x0003d018) popup_note2_window_g2_ParamLimits

0xcf75,	// (0x0003d018) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003fd1a) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003fd1a) popup_note2_window_g

0xd483,	// (0x0003d526) bg_popup_sub_pane_cp11_ParamLimits

0xd490,	// (0x0003d533) cell_ai3_links_pane_g1_ParamLimits

0xd4a7,	// (0x0003d54a) cell_ai3_links_pane_t1

0x4e85,	// (0x00034f28) set_text_pane_t1_copy1_ParamLimits

0x74d5,	// (0x00037578) cell_graphic_popup_pane_cp2_ParamLimits

0x74d5,	// (0x00037578) cell_graphic_popup_pane_cp2

0xf257,	// (0x0003f2fa) cell_graphic_popup_pane_g1_cp2

0x261f,	// (0x000326c2) cell_graphic_popup_pane_g2_cp2

0xf25f,	// (0x0003f302) cell_graphic_popup_pane_g3_cp2

0xf267,	// (0x0003f30a) cell_graphic_popup_pane_t2_cp2

0x2630,	// (0x000326d3) grid_highlight_pane_cp3_cp2

0x2a01,	// (0x00032aa4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2751,	// (0x000327f4) main_tmo_pane_ParamLimits

0xd7d9,	// (0x0003d87c) popup_tmo_big_image_note_window

0xe94f,	// (0x0003e9f2) cell_ai5_widget_list_pane

0xe957,	// (0x0003e9fa) cell_ai5_widget_lrg_icon_pane

0xee9d,	// (0x0003ef40) tmo_note_info_pane_t1_ParamLimits

0xeeb2,	// (0x0003ef55) tmo_note_info_pane_t2_ParamLimits

0xeec7,	// (0x0003ef6a) tmo_note_info_pane_t3_ParamLimits

0xeedc,	// (0x0003ef7f) tmo_note_info_pane_t4_ParamLimits

0xeeee,	// (0x0003ef91) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003ff68) tmo_note_info_pane_t_ParamLimits

0xf00c,	// (0x0003f0af) settings_container_pane_ParamLimits

0xf1d5,	// (0x0003f278) indicator_popup_pane_cp5

0xf1d5,	// (0x0003f278) indicator_popup_pane_cp6

0xf205,	// (0x0003f2a8) list_set_graphic_pane_copy1_ParamLimits

0x232f,	// (0x000323d2) bg_popup_window_pane_cp23

0xf275,	// (0x0003f318) popup_tmo_big_image_note_window_g1

0xf27e,	// (0x0003f321) popup_tmo_big_image_note_window_t1

0xf28e,	// (0x0003f331) popup_tmo_big_image_note_window_t2

0xf29e,	// (0x0003f341) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003ff81) popup_tmo_big_image_note_window_t

0xc2da,	// (0x0003c37d) cell_ai5_widget_lrg_icon_pane_g1

0xf2ae,	// (0x0003f351) cell_ai5_widget_lrg_icon_pane_t1

0xf2bc,	// (0x0003f35f) cell_ai5_widget_list_row_pane_ParamLimits

0xf2bc,	// (0x0003f35f) cell_ai5_widget_list_row_pane

0xf2d3,	// (0x0003f376) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d3,	// (0x0003f376) cell_ai5_widget_list_row_pane_g1

0xf2e0,	// (0x0003f383) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e0,	// (0x0003f383) cell_ai5_widget_list_row_pane_t1

0xf30b,	// (0x0003f3ae) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30b,	// (0x0003f3ae) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0003ff88) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003ff88) cell_ai5_widget_list_row_pane_t

0x5c20,	// (0x00035cc3) main_fep_vtchi_ss_pane

0xf34f,	// (0x0003f3f2) popup_fep_char_pre_window

0xf357,	// (0x0003f3fa) popup_fep_ituss_window

0xf378,	// (0x0003f41b) popup_fep_vkbss_window

0xf3a2,	// (0x0003f445) grid_vkbss_keypad_pane_ParamLimits

0xf3a2,	// (0x0003f445) grid_vkbss_keypad_pane

0xf3b2,	// (0x0003f455) ituss_keypad_pane

0x92cb,	// (0x0003936e) aid_vkbss_key_offset_ParamLimits

0x92cb,	// (0x0003936e) aid_vkbss_key_offset

0x92d7,	// (0x0003937a) cell_vkbss_key_pane_ParamLimits

0x92d7,	// (0x0003937a) cell_vkbss_key_pane

0x9b79,	// (0x00039c1c) bg_cell_vkbss_key_g1_ParamLimits

0x9b79,	// (0x00039c1c) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0003f464) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0003f464) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0003f478) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0003f478) cell_vkbss_key_g1

0xf3e9,	// (0x0003f48c) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0003f48c) cell_vkbss_key_t1

0x92ed,	// (0x00039390) cell_ituss_key_pane_ParamLimits

0x92ed,	// (0x00039390) cell_ituss_key_pane

0xf414,	// (0x0003f4b7) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0003f4b7) bg_cell_ituss_key_g1

0xf420,	// (0x0003f4c3) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0003f4c3) cell_ituss_key_pane_g1

0x92fe,	// (0x000393a1) cell_ituss_key_pane_g2_ParamLimits

0x92fe,	// (0x000393a1) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0003ff8f) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0003ff8f) cell_ituss_key_pane_g

0x932a,	// (0x000393cd) cell_ituss_key_t1_ParamLimits

0x932a,	// (0x000393cd) cell_ituss_key_t1

0x9364,	// (0x00039407) cell_ituss_key_t2_ParamLimits

0x9364,	// (0x00039407) cell_ituss_key_t2

0x9395,	// (0x00039438) cell_ituss_key_t3_ParamLimits

0x9395,	// (0x00039438) cell_ituss_key_t3

0x9364,	// (0x00039407) cell_ituss_key_t4_ParamLimits

0x9364,	// (0x00039407) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0003ff96) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0003ff96) cell_ituss_key_t

0xf446,	// (0x0003f4e9) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0003f4f1) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0003f4f9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0003ffa1) cell_vkbss_key_3p_pane_g

0x5c20,	// (0x00035cc3) bg_popup_fep_char_preview_window_cp02

0x93d8,	// (0x0003947b) popup_fep_char_pre_window_t1

0xe8e9,	// (0x0003e98c) main_ai5_sk_pane

0xef68,	// (0x0003f00b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef74,	// (0x0003f017) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98b,	// (0x0003ca2e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef89,	// (0x0003f02c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003ff73) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef95,	// (0x0003f038) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2751,	// (0x000327f4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0003f501) main_ai5_sk_pane_g1

0xa1c8,	// (0x0003a26b) popup_query_code_window_g1

0xf36d,	// (0x0003f410) popup_fep_vkb_icf_pane

0xf38c,	// (0x0003f42f) popup_fep_vtchi_icf_pane

0xf467,	// (0x0003f50a) bg_icf_pane

0xf473,	// (0x0003f516) list_vkb_icf_pane

0xf482,	// (0x0003f525) bg_icf_pane_cp01

0xf495,	// (0x0003f538) vtchi_icf_list_pane

0xf4a5,	// (0x0003f548) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0003f548) list_vkb_icf_pane_t1

0xf4bc,	// (0x0003f55f) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0003f55f) vtchi_icf_list_pane_t1

0xf357,	// (0x0003f3fa) popup_fep_ituss_window_ParamLimits

0xf38c,	// (0x0003f42f) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0003f455) ituss_keypad_pane_ParamLimits

0x92bf,	// (0x00039362) ituss_sks_pane

0xf467,	// (0x0003f50a) bg_icf_pane_ParamLimits

0xf333,	// (0x0003f3d6) icf_edit_indi_pane_ParamLimits

0xf333,	// (0x0003f3d6) icf_edit_indi_pane

0xf473,	// (0x0003f516) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0003f525) bg_icf_pane_cp01_ParamLimits

0xf342,	// (0x0003f3e5) icf_edit_indi_pane_cp01_ParamLimits

0xf342,	// (0x0003f3e5) icf_edit_indi_pane_cp01

0xf49d,	// (0x0003f540) vtchi_query_pane

0xc54a,	// (0x0003c5ed) icf_edit_indi_pane_g1_ParamLimits

0xc54a,	// (0x0003c5ed) icf_edit_indi_pane_g1

0xf531,	// (0x0003f5d4) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0003f5d4) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0003ffb9) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0003ffb9) icf_edit_indi_pane_g

0xf540,	// (0x0003f5e3) icf_edit_indi_pane_t1

0xf4da,	// (0x0003f57d) bg_input_focus_pane_cp042

0x2693,	// (0x00032736) vtchi_button_pane

0xf4e3,	// (0x0003f586) vtchi_query_pane_t1

0xf4f1,	// (0x0003f594) vtchi_query_pane_t2

0xf4ff,	// (0x0003f5a2) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0003ffa8) vtchi_query_pane_t

0x5c20,	// (0x00035cc3) bg_button_pane_cp13

0xf50d,	// (0x0003f5b0) vtchi_button_pane_g1

0x93e7,	// (0x0003948a) ituss_sks_pane_g1

0x93f2,	// (0x00039495) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0003ffaf) ituss_sks_pane_g

0xf515,	// (0x0003f5b8) ituss_sks_pane_t1

0xf523,	// (0x0003f5c6) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0003ffb4) ituss_sks_pane_t

0xbd57,	// (0x0003bdfa) indicator_nsta_pane_cp_g1

0xbd5f,	// (0x0003be02) indicator_nsta_pane_cp_g2

0xbd67,	// (0x0003be0a) indicator_nsta_pane_cp_g3

0xbd57,	// (0x0003bdfa) indicator_nsta_pane_cp_g4

0xbd5f,	// (0x0003be02) indicator_nsta_pane_cp_g5

0xbd67,	// (0x0003be0a) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0003fb58) indicator_nsta_pane_cp_g

0xe4ca,	// (0x0003e56d) cell_graphic2_pane_t2_ParamLimits

0xe4ca,	// (0x0003e56d) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003fe6a) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003fe6a) cell_graphic2_pane_t

0xe4f7,	// (0x0003e59a) cell_graphic2_control_pane_t1

0x6ec5,	// (0x00036f68) signal_pane_g3_ParamLimits

0x6ec5,	// (0x00036f68) signal_pane_g3

0x6ed7,	// (0x00036f7a) signal_pane_g4_ParamLimits

0x6ed7,	// (0x00036f7a) signal_pane_g4

0xf31d,	// (0x0003f3c0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31d,	// (0x0003f3c0) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0003f4d7) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0003f4d7) cell_ituss_key_pane_t1

0x9e0f,	// (0x00039eb2) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e0f,	// (0x00039eb2) form_field_data_wide_pane_vc_t2

0x9e23,	// (0x00039ec6) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e23,	// (0x00039ec6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0003f89d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0003f89d) form_field_data_wide_pane_vc_t

0xba1f,	// (0x0003bac2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba1f,	// (0x0003bac2) form_field_slider_wide_pane_vc_t3

0xbafd,	// (0x0003bba0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbafd,	// (0x0003bba0) form_field_popup_wide_pane_vc_t2

0xbb14,	// (0x0003bbb7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb14,	// (0x0003bbb7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0003fb47) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0003fb47) form_field_popup_wide_pane_vc_t

0x90c9,	// (0x0003916c) aid_fshwr2_btn_pane_ParamLimits

0x90d5,	// (0x00039178) aid_fshwr2_syb_pane_ParamLimits

0x90e6,	// (0x00039189) aid_fshwr2_txt_pane_ParamLimits

0x891b,	// (0x000389be) fshwr2_bg_pane_ParamLimits

0x90f2,	// (0x00039195) fshwr2_func_candi_pane_ParamLimits

0x910a,	// (0x000391ad) fshwr2_hwr_syb_pane_ParamLimits

0x9121,	// (0x000391c4) fshwr2_icf_pane_ParamLimits

0x4b7a,	// (0x00034c1d) list_double_graphic_pane_vc_g4_ParamLimits

0x4b7a,	// (0x00034c1d) list_double_graphic_pane_vc_g4

0x931e,	// (0x000393c1) cell_ituss_key_pane_g3_ParamLimits

0x931e,	// (0x000393c1) cell_ituss_key_pane_g3

0x93c6,	// (0x00039469) cell_ituss_key_t5_ParamLimits

0x93c6,	// (0x00039469) cell_ituss_key_t5

0xf378,	// (0x0003f41b) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
