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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002a6f1 };

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
0x765b,	// (0x00031d4c) Screen

0x766f,	// (0x00031d60) application_window_ParamLimits

0x766f,	// (0x00031d60) application_window

0x7689,	// (0x00031d7a) screen_g1

0x49b0,	// (0x0002f0a1) area_bottom_pane_ParamLimits

0x49b0,	// (0x0002f0a1) area_bottom_pane

0x4a70,	// (0x0002f161) area_top_pane_ParamLimits

0x4a70,	// (0x0002f161) area_top_pane

0x4b0e,	// (0x0002f1ff) main_pane_ParamLimits

0x4b0e,	// (0x0002f1ff) main_pane

0x7693,	// (0x00031d84) misc_graphics

0x9876,	// (0x00033f67) battery_pane_ParamLimits

0x9876,	// (0x00033f67) battery_pane

0xa549,	// (0x00034c3a) bg_status_flat_pane_g8

0xa551,	// (0x00034c42) bg_status_flat_pane_g9

0x9938,	// (0x00034029) context_pane_ParamLimits

0x9938,	// (0x00034029) context_pane

0x9a4e,	// (0x0003413f) navi_pane_ParamLimits

0x9a4e,	// (0x0003413f) navi_pane

0x9ad2,	// (0x000341c3) signal_pane_ParamLimits

0x9ad2,	// (0x000341c3) signal_pane

0x0008,

0xf879,	// (0x00039f6a) bg_status_flat_pane_g

0x9b3f,	// (0x00034230) status_pane_g1_ParamLimits

0x9b3f,	// (0x00034230) status_pane_g1

0x9b4b,	// (0x0003423c) status_pane_g2_ParamLimits

0x9b4b,	// (0x0003423c) status_pane_g2

0x9b57,	// (0x00034248) status_pane_g3_ParamLimits

0x9b57,	// (0x00034248) status_pane_g3

0x0004,

0xf7a0,	// (0x00039e91) status_pane_g_ParamLimits

0xf7a0,	// (0x00039e91) status_pane_g

0x9b8b,	// (0x0003427c) title_pane_ParamLimits

0x9b8b,	// (0x0003427c) title_pane

0x9bc8,	// (0x000342b9) uni_indicator_pane_ParamLimits

0x9bc8,	// (0x000342b9) uni_indicator_pane

0x979e,	// (0x00033e8f) bg_list_pane_ParamLimits

0x979e,	// (0x00033e8f) bg_list_pane

0x5b3b,	// (0x0003022c) find_pane

0x97be,	// (0x00033eaf) listscroll_app_pane_ParamLimits

0x97be,	// (0x00033eaf) listscroll_app_pane

0x97ca,	// (0x00033ebb) listscroll_form_pane

0x48e6,	// (0x0002efd7) listscroll_gen_pane_ParamLimits

0x48e6,	// (0x0002efd7) listscroll_gen_pane

0x5b43,	// (0x00030234) listscroll_set_pane

0x8a20,	// (0x00033111) main_idle_act_pane

0x94aa,	// (0x00033b9b) main_idle_trad_pane

0x94aa,	// (0x00033b9b) main_list_empty_pane

0x97e4,	// (0x00033ed5) main_midp_pane

0x97f0,	// (0x00033ee1) main_pane_g1_ParamLimits

0x97f0,	// (0x00033ee1) main_pane_g1

0x5b59,	// (0x0003024a) popup_ai_message_window_ParamLimits

0x5b59,	// (0x0003024a) popup_ai_message_window

0x5c05,	// (0x000302f6) popup_fep_china_uni_window_ParamLimits

0x5c05,	// (0x000302f6) popup_fep_china_uni_window

0x5c5f,	// (0x00030350) popup_fep_japan_candidate_window_ParamLimits

0x5c5f,	// (0x00030350) popup_fep_japan_candidate_window

0x5c7d,	// (0x0003036e) popup_fep_japan_predictive_window_ParamLimits

0x5c7d,	// (0x0003036e) popup_fep_japan_predictive_window

0x5cad,	// (0x0003039e) popup_find_window

0x5cba,	// (0x000303ab) popup_grid_graphic_window_ParamLimits

0x5cba,	// (0x000303ab) popup_grid_graphic_window

0x5ce2,	// (0x000303d3) popup_large_graphic_colour_window

0x5d08,	// (0x000303f9) popup_menu_window_ParamLimits

0x5d08,	// (0x000303f9) popup_menu_window

0x5ec2,	// (0x000305b3) popup_note_image_window

0x5eae,	// (0x0003059f) popup_note_wait_window_ParamLimits

0x5eae,	// (0x0003059f) popup_note_wait_window

0x5eae,	// (0x0003059f) popup_note_window_ParamLimits

0x5eae,	// (0x0003059f) popup_note_window

0x5f18,	// (0x00030609) popup_query_code_window_ParamLimits

0x5f18,	// (0x00030609) popup_query_code_window

0x5f2c,	// (0x0003061d) popup_query_data_code_window_ParamLimits

0x5f2c,	// (0x0003061d) popup_query_data_code_window

0x5f47,	// (0x00030638) popup_query_data_window_ParamLimits

0x5f47,	// (0x00030638) popup_query_data_window

0x5f61,	// (0x00030652) popup_query_sat_info_window_ParamLimits

0x5f61,	// (0x00030652) popup_query_sat_info_window

0x5f9a,	// (0x0003068b) popup_snote_single_graphic_window_ParamLimits

0x5f9a,	// (0x0003068b) popup_snote_single_graphic_window

0x5f9a,	// (0x0003068b) popup_snote_single_text_window_ParamLimits

0x5f9a,	// (0x0003068b) popup_snote_single_text_window

0x5faf,	// (0x000306a0) popup_sub_window_general

0x60dd,	// (0x000307ce) popup_window_general_ParamLimits

0x60dd,	// (0x000307ce) popup_window_general

0x97fe,	// (0x00033eef) power_save_pane

0x59d9,	// (0x000300ca) control_pane_g1_ParamLimits

0x59d9,	// (0x000300ca) control_pane_g1

0x5a00,	// (0x000300f1) control_pane_g2_ParamLimits

0x5a00,	// (0x000300f1) control_pane_g2

0x9761,	// (0x00033e52) control_pane_g3_ParamLimits

0x9761,	// (0x00033e52) control_pane_g3

0x0007,

0xf788,	// (0x00039e79) control_pane_g_ParamLimits

0xf788,	// (0x00039e79) control_pane_g

0x5a48,	// (0x00030139) control_pane_t1_ParamLimits

0x5a48,	// (0x00030139) control_pane_t1

0x5a94,	// (0x00030185) control_pane_t2_ParamLimits

0x5a94,	// (0x00030185) control_pane_t2

0x0002,

0xf799,	// (0x00039e8a) control_pane_t_ParamLimits

0xf799,	// (0x00039e8a) control_pane_t

0x9686,	// (0x00033d77) navi_navi_volume_pane_cp1

0x968e,	// (0x00033d7f) status_small_icon_pane

0x9696,	// (0x00033d87) status_small_pane_g1_ParamLimits

0x9696,	// (0x00033d87) status_small_pane_g1

0x96ca,	// (0x00033dbb) status_small_pane_g2_ParamLimits

0x96ca,	// (0x00033dbb) status_small_pane_g2

0x96d6,	// (0x00033dc7) status_small_pane_g3_ParamLimits

0x96d6,	// (0x00033dc7) status_small_pane_g3

0x96e2,	// (0x00033dd3) status_small_pane_g4_ParamLimits

0x96e2,	// (0x00033dd3) status_small_pane_g4

0x96ee,	// (0x00033ddf) status_small_pane_g5_ParamLimits

0x96ee,	// (0x00033ddf) status_small_pane_g5

0x96fc,	// (0x00033ded) status_small_pane_g6_ParamLimits

0x96fc,	// (0x00033ded) status_small_pane_g6

0x0007,

0xf777,	// (0x00039e68) status_small_pane_g_ParamLimits

0xf777,	// (0x00039e68) status_small_pane_g

0x972b,	// (0x00033e1c) status_small_pane_t1

0x974d,	// (0x00033e3e) status_small_wait_pane_ParamLimits

0x974d,	// (0x00033e3e) status_small_wait_pane

0x8f14,	// (0x00033605) aid_levels_signal_ParamLimits

0x8f14,	// (0x00033605) aid_levels_signal

0x8f26,	// (0x00033617) signal_pane_g1_ParamLimits

0x8f26,	// (0x00033617) signal_pane_g1

0x8f3b,	// (0x0003362c) signal_pane_g2_ParamLimits

0x8f3b,	// (0x0003362c) signal_pane_g2

0x0003,

0xf708,	// (0x00039df9) signal_pane_g_ParamLimits

0xf708,	// (0x00039df9) signal_pane_g

0x8f75,	// (0x00033666) context_pane_g1

0x769d,	// (0x00031d8e) title_pane_g1

0x76d3,	// (0x00031dc4) title_pane_t1

0x773b,	// (0x00031e2c) title_pane_t2

0x7761,	// (0x00031e52) title_pane_t3

0x0002,

0xf557,	// (0x00039c48) title_pane_t

0x9be0,	// (0x000342d1) aid_levels_battery_ParamLimits

0x9be0,	// (0x000342d1) aid_levels_battery

0x9bf4,	// (0x000342e5) battery_pane_g1_ParamLimits

0x9bf4,	// (0x000342e5) battery_pane_g1

0x9c0a,	// (0x000342fb) battery_pane_g2_ParamLimits

0x9c0a,	// (0x000342fb) battery_pane_g2

0x0001,

0xf7ab,	// (0x00039e9c) battery_pane_g_ParamLimits

0xf7ab,	// (0x00039e9c) battery_pane_g

0xae7d,	// (0x0003556e) uni_indicator_pane_g1

0xae93,	// (0x00035584) uni_indicator_pane_g2

0xaea9,	// (0x0003559a) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a012) uni_indicator_pane_g

0x9328,	// (0x00033a19) navi_icon_pane_ParamLimits

0x9328,	// (0x00033a19) navi_icon_pane

0x924e,	// (0x0003393f) navi_midp_pane

0x9344,	// (0x00033a35) navi_navi_pane

0x934e,	// (0x00033a3f) navi_text_pane_ParamLimits

0x934e,	// (0x00033a3f) navi_text_pane

0x7689,	// (0x00031d7a) status_small_wait_pane_g1

0x83f5,	// (0x00032ae6) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a00d) status_small_wait_pane_g

0xaba4,	// (0x00035295) navi_navi_icon_text_pane

0xabac,	// (0x0003529d) navi_navi_pane_g1_ParamLimits

0xabac,	// (0x0003529d) navi_navi_pane_g1

0xabbe,	// (0x000352af) navi_navi_pane_g2_ParamLimits

0xabbe,	// (0x000352af) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00039fdb) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00039fdb) navi_navi_pane_g

0xabd0,	// (0x000352c1) navi_navi_tabs_pane

0xabd9,	// (0x000352ca) navi_navi_text_pane

0xaba4,	// (0x00035295) navi_navi_volume_pane

0xab80,	// (0x00035271) navi_text_pane_t1

0xab74,	// (0x00035265) navi_icon_pane_g1

0xaac7,	// (0x000351b8) navi_navi_text_pane_t1

0x648e,	// (0x00030b7f) navi_navi_volume_pane_g1

0x6496,	// (0x00030b87) volume_small_pane

0xaa2d,	// (0x0003511e) navi_navi_icon_text_pane_g1

0xaa35,	// (0x00035126) navi_navi_icon_text_pane_t1

0x9344,	// (0x00033a35) navi_tabs_2_long_pane

0x9344,	// (0x00033a35) navi_tabs_2_pane

0x9344,	// (0x00033a35) navi_tabs_3_long_pane

0x9344,	// (0x00033a35) navi_tabs_3_pane

0x9344,	// (0x00033a35) navi_tabs_4_pane

0x646e,	// (0x00030b5f) tabs_2_active_pane_ParamLimits

0x646e,	// (0x00030b5f) tabs_2_active_pane

0x647e,	// (0x00030b6f) tabs_2_passive_pane_ParamLimits

0x647e,	// (0x00030b6f) tabs_2_passive_pane

0x643c,	// (0x00030b2d) tabs_3_active_pane_ParamLimits

0x643c,	// (0x00030b2d) tabs_3_active_pane

0x644c,	// (0x00030b3d) tabs_3_passive_pane_ParamLimits

0x644c,	// (0x00030b3d) tabs_3_passive_pane

0x645d,	// (0x00030b4e) tabs_3_passive_pane_cp_ParamLimits

0x645d,	// (0x00030b4e) tabs_3_passive_pane_cp

0x63f8,	// (0x00030ae9) tabs_4_active_pane_ParamLimits

0x63f8,	// (0x00030ae9) tabs_4_active_pane

0x6409,	// (0x00030afa) tabs_4_passive_pane_ParamLimits

0x6409,	// (0x00030afa) tabs_4_passive_pane

0x641a,	// (0x00030b0b) tabs_4_passive_pane_cp_ParamLimits

0x641a,	// (0x00030b0b) tabs_4_passive_pane_cp

0x642b,	// (0x00030b1c) tabs_4_passive_pane_cp2_ParamLimits

0x642b,	// (0x00030b1c) tabs_4_passive_pane_cp2

0x63d4,	// (0x00030ac5) tabs_2_long_active_pane_ParamLimits

0x63d4,	// (0x00030ac5) tabs_2_long_active_pane

0x63e6,	// (0x00030ad7) tabs_2_long_passive_pane_ParamLimits

0x63e6,	// (0x00030ad7) tabs_2_long_passive_pane

0x639b,	// (0x00030a8c) tabs_3_long_active_pane_ParamLimits

0x639b,	// (0x00030a8c) tabs_3_long_active_pane

0x63ae,	// (0x00030a9f) tabs_3_long_passive_pane_ParamLimits

0x63ae,	// (0x00030a9f) tabs_3_long_passive_pane

0x63c1,	// (0x00030ab2) tabs_3_long_passive_pane_cp_ParamLimits

0x63c1,	// (0x00030ab2) tabs_3_long_passive_pane_cp

0x6341,	// (0x00030a32) volume_small_pane_g1

0x634a,	// (0x00030a3b) volume_small_pane_g2

0x6353,	// (0x00030a44) volume_small_pane_g3

0x635c,	// (0x00030a4d) volume_small_pane_g4

0x6365,	// (0x00030a56) volume_small_pane_g5

0x636e,	// (0x00030a5f) volume_small_pane_g6

0x6377,	// (0x00030a68) volume_small_pane_g7

0x6380,	// (0x00030a71) volume_small_pane_g8

0x6389,	// (0x00030a7a) volume_small_pane_g9

0x6392,	// (0x00030a83) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00039fa7) volume_small_pane_g

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp2_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp2

0x7ff2,	// (0x000326e3) tabs_3_active_pane_g1

0x7ffa,	// (0x000326eb) tabs_3_active_pane_t1

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp2_ParamLimits

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp2

0x7ff2,	// (0x000326e3) tabs_3_passive_pane_g1

0x7ffa,	// (0x000326eb) tabs_3_passive_pane_t1

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp3_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp3

0x800c,	// (0x000326fd) tabs_4_active_pane_g1

0x8014,	// (0x00032705) tabs_4_active_pane_t1

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp3_ParamLimits

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp3

0x800c,	// (0x000326fd) tabs_4_1_passive_pane_g1

0x8014,	// (0x00032705) tabs_4_1_passive_pane_t1

0x97e4,	// (0x00033ed5) list_highlight_pane_cp2

0xb0ed,	// (0x000357de) list_set_pane_ParamLimits

0xb0ed,	// (0x000357de) list_set_pane

0xb18f,	// (0x00035880) main_pane_set_t1_ParamLimits

0xb18f,	// (0x00035880) main_pane_set_t1

0xb1af,	// (0x000358a0) main_pane_set_t2_ParamLimits

0xb1af,	// (0x000358a0) main_pane_set_t2

0xb1c3,	// (0x000358b4) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x000358b4) main_pane_set_t3

0xb1d5,	// (0x000358c6) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x000358c6) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a077) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a077) main_pane_set_t

0xb1e7,	// (0x000358d8) setting_code_pane

0xb1f1,	// (0x000358e2) setting_slider_graphic_pane

0xb1f1,	// (0x000358e2) setting_slider_pane

0xb1f1,	// (0x000358e2) setting_text_pane

0xb1f1,	// (0x000358e2) setting_volume_pane

0x4d4f,	// (0x0002f440) volume_set_pane

0x7fe4,	// (0x000326d5) bg_set_opt_pane_cp

0x4d57,	// (0x0002f448) setting_slider_pane_t1

0x4d70,	// (0x0002f461) setting_slider_pane_t2

0x4d8a,	// (0x0002f47b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00039c4f) setting_slider_pane_t

0x4da2,	// (0x0002f493) slider_set_pane

0x7693,	// (0x00031d84) bg_set_opt_pane_cp2

0x8026,	// (0x00032717) setting_slider_graphic_pane_g1

0x4db8,	// (0x0002f4a9) setting_slider_graphic_pane_t1

0x4dc8,	// (0x0002f4b9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00039c56) setting_slider_graphic_pane_t

0x4dd8,	// (0x0002f4c9) slider_set_pane_cp

0x7693,	// (0x00031d84) input_focus_pane_cp1

0xb0ac,	// (0x0003579d) list_set_text_pane

0x7689,	// (0x00031d7a) setting_text_pane_g1

0x7693,	// (0x00031d84) input_focus_pane_cp2

0x7689,	// (0x00031d7a) setting_code_pane_g1

0x802f,	// (0x00032720) setting_code_pane_t1

0x4de0,	// (0x0002f4d1) set_text_pane_t1_ParamLimits

0x4de0,	// (0x0002f4d1) set_text_pane_t1

0x8899,	// (0x00032f8a) set_opt_bg_pane_g1

0x88a1,	// (0x00032f92) set_opt_bg_pane_g2

0xb08c,	// (0x0003577d) set_opt_bg_pane_g3

0x88b1,	// (0x00032fa2) set_opt_bg_pane_g4

0x88b9,	// (0x00032faa) set_opt_bg_pane_g5

0x88c1,	// (0x00032fb2) set_opt_bg_pane_g6

0xb094,	// (0x00035785) set_opt_bg_pane_g7

0xb09c,	// (0x0003578d) set_opt_bg_pane_g8

0xb0a4,	// (0x00035795) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a064) set_opt_bg_pane_g

0xb07f,	// (0x00035770) slider_set_pane_g1

0x6503,	// (0x00030bf4) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a055) slider_set_pane_g

0x649f,	// (0x00030b90) volume_set_pane_g1

0x64a7,	// (0x00030b98) volume_set_pane_g2

0x64af,	// (0x00030ba0) volume_set_pane_g3

0x64b7,	// (0x00030ba8) volume_set_pane_g4

0x64bf,	// (0x00030bb0) volume_set_pane_g5

0x64c7,	// (0x00030bb8) volume_set_pane_g6

0x64cf,	// (0x00030bc0) volume_set_pane_g7

0x64d7,	// (0x00030bc8) volume_set_pane_g8

0x64df,	// (0x00030bd0) volume_set_pane_g9

0x64e7,	// (0x00030bd8) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a02d) volume_set_pane_g

0x803d,	// (0x0003272e) indicator_pane_ParamLimits

0x803d,	// (0x0003272e) indicator_pane

0x8049,	// (0x0003273a) main_idle_pane_g2_ParamLimits

0x8049,	// (0x0003273a) main_idle_pane_g2

0x8071,	// (0x00032762) main_pane_idle_g1_ParamLimits

0x8071,	// (0x00032762) main_pane_idle_g1

0x807e,	// (0x0003276f) popup_clock_digital_analogue_window_ParamLimits

0x807e,	// (0x0003276f) popup_clock_digital_analogue_window

0x8095,	// (0x00032786) soft_indicator_pane_ParamLimits

0x8095,	// (0x00032786) soft_indicator_pane

0x80a1,	// (0x00032792) wallpaper_pane_ParamLimits

0x80a1,	// (0x00032792) wallpaper_pane

0x7689,	// (0x00031d7a) wallpaper_pane_g1

0x80b5,	// (0x000327a6) indicator_pane_g1_ParamLimits

0x80b5,	// (0x000327a6) indicator_pane_g1

0xb447,	// (0x00035b38) navi_navi_icon_text_pane_srt_g1

0x80d0,	// (0x000327c1) soft_indicator_pane_t1

0x80ea,	// (0x000327db) aid_ps_area_pane

0x80fb,	// (0x000327ec) aid_ps_clock_pane

0x8109,	// (0x000327fa) aid_ps_indicator_pane

0x8115,	// (0x00032806) indicator_ps_pane_ParamLimits

0x8115,	// (0x00032806) indicator_ps_pane

0x8124,	// (0x00032815) power_save_pane_g1_ParamLimits

0x8124,	// (0x00032815) power_save_pane_g1

0x8130,	// (0x00032821) power_save_pane_g2_ParamLimits

0x8130,	// (0x00032821) power_save_pane_g2

0x4964,	// (0x0002f055) aid_navinavi_width_pane

0x80ea,	// (0x000327db) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00039c5b) power_save_pane_g_ParamLimits

0xf56a,	// (0x00039c5b) power_save_pane_g

0x813e,	// (0x0003282f) power_save_pane_t1_ParamLimits

0x813e,	// (0x0003282f) power_save_pane_t1

0x80fb,	// (0x000327ec) aid_ps_clock_pane_ParamLimits

0x8109,	// (0x000327fa) aid_ps_indicator_pane_ParamLimits

0x8150,	// (0x00032841) power_save_pane_t4_ParamLimits

0x8150,	// (0x00032841) power_save_pane_t4

0x0001,

0xf56f,	// (0x00039c60) power_save_pane_t_ParamLimits

0xf56f,	// (0x00039c60) power_save_pane_t

0x817a,	// (0x0003286b) power_save_t3_ParamLimits

0x817a,	// (0x0003286b) power_save_t3

0x8165,	// (0x00032856) power_save_t2_ParamLimits

0x8165,	// (0x00032856) power_save_t2

0x818f,	// (0x00032880) indicator_ps_pane_g1

0x8198,	// (0x00032889) ai_gene_pane_ParamLimits

0x8198,	// (0x00032889) ai_gene_pane

0x81a4,	// (0x00032895) ai_links_pane_ParamLimits

0x81a4,	// (0x00032895) ai_links_pane

0x81b0,	// (0x000328a1) indicator_pane_cp1_ParamLimits

0x81b0,	// (0x000328a1) indicator_pane_cp1

0x81bc,	// (0x000328ad) main_pane_idle_g1_cp_ParamLimits

0x81bc,	// (0x000328ad) main_pane_idle_g1_cp

0x81c8,	// (0x000328b9) popup_ai_links_title_window

0x81d1,	// (0x000328c2) soft_indicator_pane_cp1_ParamLimits

0x81d1,	// (0x000328c2) soft_indicator_pane_cp1

0xae6b,	// (0x0003555c) ai_links_pane_g1

0xae74,	// (0x00035565) grid_ai_links_pane

0xae4e,	// (0x0003553f) ai_gene_pane_1

0xae59,	// (0x0003554a) ai_gene_pane_2

0xae62,	// (0x00035553) list_highlight_pane_cp4

0xae32,	// (0x00035523) cell_ai_link_pane_ParamLimits

0xae32,	// (0x00035523) cell_ai_link_pane

0xae2a,	// (0x0003551b) cell_ai_link_pane_g1

0x83f5,	// (0x00032ae6) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a008) cell_ai_link_pane_g

0x7693,	// (0x00031d84) grid_highlight_cp2

0x7693,	// (0x00031d84) bg_popup_sub_pane_cp1

0x81eb,	// (0x000328dc) popup_ai_links_title_window_t1

0xad7a,	// (0x0003546b) ai_gene_pane_1_g1_ParamLimits

0xad7a,	// (0x0003546b) ai_gene_pane_1_g1

0xad86,	// (0x00035477) ai_gene_pane_1_g2_ParamLimits

0xad86,	// (0x00035477) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00039ffe) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00039ffe) ai_gene_pane_1_g

0xad93,	// (0x00035484) ai_gene_pane_1_t1_ParamLimits

0xad93,	// (0x00035484) ai_gene_pane_1_t1

0xadc7,	// (0x000354b8) grid_ai_soft_ind_pane

0xad65,	// (0x00035456) ai_gene_pane_2_t1_ParamLimits

0xad65,	// (0x00035456) ai_gene_pane_2_t1

0x81fa,	// (0x000328eb) main_pane_empty_t1_ParamLimits

0x81fa,	// (0x000328eb) main_pane_empty_t1

0x8212,	// (0x00032903) main_pane_empty_t2_ParamLimits

0x8212,	// (0x00032903) main_pane_empty_t2

0x8227,	// (0x00032918) main_pane_empty_t3_ParamLimits

0x8227,	// (0x00032918) main_pane_empty_t3

0x8239,	// (0x0003292a) main_pane_empty_t4_ParamLimits

0x8239,	// (0x0003292a) main_pane_empty_t4

0x824b,	// (0x0003293c) main_pane_empty_t5_ParamLimits

0x824b,	// (0x0003293c) main_pane_empty_t5

0x0004,

0xf574,	// (0x00039c65) main_pane_empty_t_ParamLimits

0xf574,	// (0x00039c65) main_pane_empty_t

0x88ea,	// (0x00032fdb) bg_popup_window_pane_ParamLimits

0x88ea,	// (0x00032fdb) bg_popup_window_pane

0xaad5,	// (0x000351c6) find_popup_pane_cp2_ParamLimits

0xaad5,	// (0x000351c6) find_popup_pane_cp2

0xaae1,	// (0x000351d2) heading_pane_ParamLimits

0xaae1,	// (0x000351d2) heading_pane

0x7693,	// (0x00031d84) bg_popup_sub_pane

0xaa4f,	// (0x00035140) bg_popup_window_pane_g1_ParamLimits

0xaa4f,	// (0x00035140) bg_popup_window_pane_g1

0xaa5b,	// (0x0003514c) bg_popup_window_pane_g2_ParamLimits

0xaa5b,	// (0x0003514c) bg_popup_window_pane_g2

0xaa67,	// (0x00035158) bg_popup_window_pane_g3_ParamLimits

0xaa67,	// (0x00035158) bg_popup_window_pane_g3

0xaa73,	// (0x00035164) bg_popup_window_pane_g4_ParamLimits

0xaa73,	// (0x00035164) bg_popup_window_pane_g4

0xaa7f,	// (0x00035170) bg_popup_window_pane_g5_ParamLimits

0xaa7f,	// (0x00035170) bg_popup_window_pane_g5

0xaa8b,	// (0x0003517c) bg_popup_window_pane_g6_ParamLimits

0xaa8b,	// (0x0003517c) bg_popup_window_pane_g6

0xaa97,	// (0x00035188) bg_popup_window_pane_g7_ParamLimits

0xaa97,	// (0x00035188) bg_popup_window_pane_g7

0xaaa3,	// (0x00035194) bg_popup_window_pane_g8_ParamLimits

0xaaa3,	// (0x00035194) bg_popup_window_pane_g8

0xaaaf,	// (0x000351a0) bg_popup_window_pane_g9_ParamLimits

0xaaaf,	// (0x000351a0) bg_popup_window_pane_g9

0xaabb,	// (0x000351ac) bg_popup_window_pane_g10_ParamLimits

0xaabb,	// (0x000351ac) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00039fc6) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00039fc6) bg_popup_window_pane_g

0xa9e4,	// (0x000350d5) bg_popup_heading_pane_ParamLimits

0xa9e4,	// (0x000350d5) bg_popup_heading_pane

0x658b,	// (0x00030c7c) tabs_4_passive_pane_cp_srt_ParamLimits

0x658b,	// (0x00030c7c) tabs_4_passive_pane_cp_srt

0x659d,	// (0x00030c8e) tabs_4_passive_pane_srt_ParamLimits

0xa9f8,	// (0x000350e9) heading_pane_g2

0x659d,	// (0x00030c8e) tabs_4_passive_pane_srt

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp3_srt

0xaa00,	// (0x000350f1) heading_pane_t1_ParamLimits

0xaa00,	// (0x000350f1) heading_pane_t1

0xaa17,	// (0x00035108) heading_pane_t2_ParamLimits

0xaa17,	// (0x00035108) heading_pane_t2

0x0001,

0xf8d0,	// (0x00039fc1) heading_pane_t_ParamLimits

0xf8d0,	// (0x00039fc1) heading_pane_t

0xa511,	// (0x00034c02) bg_popup_heading_pane_g1

0xa5c0,	// (0x00034cb1) bg_popup_heading_pane_g2

0xa5ca,	// (0x00034cbb) bg_popup_heading_pane_g3

0xa5d4,	// (0x00034cc5) bg_popup_heading_pane_g4

0xa5de,	// (0x00034ccf) bg_popup_heading_pane_g5

0xa5e8,	// (0x00034cd9) bg_popup_heading_pane_g6

0xa5f0,	// (0x00034ce1) bg_popup_heading_pane_g7

0xa5f8,	// (0x00034ce9) bg_popup_heading_pane_g8

0xa602,	// (0x00034cf3) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00039f7d) bg_popup_heading_pane_g

0x9ce2,	// (0x000343d3) bg_popup_sub_pane_g1

0x9cf2,	// (0x000343e3) bg_popup_sub_pane_g2

0x9cea,	// (0x000343db) bg_popup_sub_pane_g3

0x9d02,	// (0x000343f3) bg_popup_sub_pane_g4

0x9cfa,	// (0x000343eb) bg_popup_sub_pane_g5

0x9d0a,	// (0x000343fb) bg_popup_sub_pane_g6

0x9d12,	// (0x00034403) bg_popup_sub_pane_g7

0x9d22,	// (0x00034413) bg_popup_sub_pane_g8

0x9d1a,	// (0x0003440b) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00039f57) bg_popup_sub_pane_g

0x825f,	// (0x00032950) bg_popup_window_pane_cp5_ParamLimits

0x825f,	// (0x00032950) bg_popup_window_pane_cp5

0x827b,	// (0x0003296c) popup_note_window_g1_ParamLimits

0x827b,	// (0x0003296c) popup_note_window_g1

0x8287,	// (0x00032978) popup_note_window_t1_ParamLimits

0x8287,	// (0x00032978) popup_note_window_t1

0x8299,	// (0x0003298a) popup_note_window_t2_ParamLimits

0x8299,	// (0x0003298a) popup_note_window_t2

0x82ab,	// (0x0003299c) popup_note_window_t3_ParamLimits

0x82ab,	// (0x0003299c) popup_note_window_t3

0x82bd,	// (0x000329ae) popup_note_window_t4_ParamLimits

0x82bd,	// (0x000329ae) popup_note_window_t4

0x82e5,	// (0x000329d6) popup_note_window_t5_ParamLimits

0x82e5,	// (0x000329d6) popup_note_window_t5

0x0004,

0xf57f,	// (0x00039c70) popup_note_window_t_ParamLimits

0xf57f,	// (0x00039c70) popup_note_window_t

0x8309,	// (0x000329fa) bg_popup_window_pane_cp6_ParamLimits

0x8309,	// (0x000329fa) bg_popup_window_pane_cp6

0xa485,	// (0x00034b76) popup_note_image_window_g1_ParamLimits

0xa485,	// (0x00034b76) popup_note_image_window_g1

0xa491,	// (0x00034b82) popup_note_image_window_g2_ParamLimits

0xa491,	// (0x00034b82) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00039f4b) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00039f4b) popup_note_image_window_g

0xa4aa,	// (0x00034b9b) popup_note_image_window_t1_ParamLimits

0xa4aa,	// (0x00034b9b) popup_note_image_window_t1

0xa4c3,	// (0x00034bb4) popup_note_image_window_t2_ParamLimits

0xa4c3,	// (0x00034bb4) popup_note_image_window_t2

0xa4dc,	// (0x00034bcd) popup_note_image_window_t3_ParamLimits

0xa4dc,	// (0x00034bcd) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00039f50) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00039f50) popup_note_image_window_t

0xa346,	// (0x00034a37) bg_popup_window_pane_cp7_ParamLimits

0xa346,	// (0x00034a37) bg_popup_window_pane_cp7

0xa376,	// (0x00034a67) popup_note_wait_window_g1_ParamLimits

0xa376,	// (0x00034a67) popup_note_wait_window_g1

0xa382,	// (0x00034a73) popup_note_wait_window_g2_ParamLimits

0xa382,	// (0x00034a73) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00039f39) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00039f39) popup_note_wait_window_g

0xa39a,	// (0x00034a8b) popup_note_wait_window_t1_ParamLimits

0xa39a,	// (0x00034a8b) popup_note_wait_window_t1

0xa3c1,	// (0x00034ab2) popup_note_wait_window_t2_ParamLimits

0xa3c1,	// (0x00034ab2) popup_note_wait_window_t2

0xa3de,	// (0x00034acf) popup_note_wait_window_t3_ParamLimits

0xa3de,	// (0x00034acf) popup_note_wait_window_t3

0xa3f1,	// (0x00034ae2) popup_note_wait_window_t4_ParamLimits

0xa3f1,	// (0x00034ae2) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00039f40) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00039f40) popup_note_wait_window_t

0xa416,	// (0x00034b07) wait_bar_pane_ParamLimits

0xa416,	// (0x00034b07) wait_bar_pane

0x7693,	// (0x00031d84) wait_anim_pane

0x7693,	// (0x00031d84) wait_border_pane

0x7689,	// (0x00031d7a) wait_anim_pane_g1

0x7689,	// (0x00031d7a) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00039df4) wait_anim_pane_g

0xa2ea,	// (0x000349db) wait_border_pane_g1

0xa2f5,	// (0x000349e6) wait_border_pane_g2

0xa2fe,	// (0x000349ef) wait_border_pane_g3

0x0002,

0xf841,	// (0x00039f32) wait_border_pane_g

0xa15a,	// (0x0003484b) bg_popup_window_pane_cp16_ParamLimits

0xa15a,	// (0x0003484b) bg_popup_window_pane_cp16

0xa25a,	// (0x0003494b) indicator_popup_pane_cp4_ParamLimits

0xa25a,	// (0x0003494b) indicator_popup_pane_cp4

0xa26e,	// (0x0003495f) popup_query_data_window_t1_ParamLimits

0xa26e,	// (0x0003495f) popup_query_data_window_t1

0xa280,	// (0x00034971) popup_query_data_window_t2_ParamLimits

0xa280,	// (0x00034971) popup_query_data_window_t2

0xa299,	// (0x0003498a) popup_query_data_window_t3_ParamLimits

0xa299,	// (0x0003498a) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00039f2b) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00039f2b) popup_query_data_window_t

0xa2b3,	// (0x000349a4) query_popup_data_pane_ParamLimits

0xa2b3,	// (0x000349a4) query_popup_data_pane

0xa2c7,	// (0x000349b8) query_popup_data_pane_cp1_ParamLimits

0xa2c7,	// (0x000349b8) query_popup_data_pane_cp1

0xa15a,	// (0x0003484b) bg_popup_window_pane_cp10_ParamLimits

0xa15a,	// (0x0003484b) bg_popup_window_pane_cp10

0xa18c,	// (0x0003487d) indicator_popup_pane_ParamLimits

0xa18c,	// (0x0003487d) indicator_popup_pane

0xa1ae,	// (0x0003489f) popup_query_code_window_t1_ParamLimits

0xa1ae,	// (0x0003489f) popup_query_code_window_t1

0xa1c8,	// (0x000348b9) popup_query_code_window_t2_ParamLimits

0xa1c8,	// (0x000348b9) popup_query_code_window_t2

0xa211,	// (0x00034902) popup_query_code_window_t3_ParamLimits

0xa211,	// (0x00034902) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00039f24) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00039f24) popup_query_code_window_t

0xa240,	// (0x00034931) query_popup_pane_ParamLimits

0xa240,	// (0x00034931) query_popup_pane

0x8309,	// (0x000329fa) bg_popup_window_pane_cp15_ParamLimits

0x8309,	// (0x000329fa) bg_popup_window_pane_cp15

0x8327,	// (0x00032a18) indicator_popup_pane_cp1_ParamLimits

0x8327,	// (0x00032a18) indicator_popup_pane_cp1

0x833a,	// (0x00032a2b) indicator_popup_pane_cp2_ParamLimits

0x833a,	// (0x00032a2b) indicator_popup_pane_cp2

0x834d,	// (0x00032a3e) popup_query_data_code_window_g1_ParamLimits

0x834d,	// (0x00032a3e) popup_query_data_code_window_g1

0x8360,	// (0x00032a51) popup_query_data_code_window_t1_ParamLimits

0x8360,	// (0x00032a51) popup_query_data_code_window_t1

0x8372,	// (0x00032a63) popup_query_data_code_window_t2_ParamLimits

0x8372,	// (0x00032a63) popup_query_data_code_window_t2

0x8384,	// (0x00032a75) popup_query_data_code_window_t3_ParamLimits

0x8384,	// (0x00032a75) popup_query_data_code_window_t3

0x839a,	// (0x00032a8b) popup_query_data_code_window_t4_ParamLimits

0x839a,	// (0x00032a8b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00039c7b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00039c7b) popup_query_data_code_window_t

0x6169,	// (0x0003085a) list_single_midp_graphic_pane_g3

0x83b2,	// (0x00032aa3) query_popup_data_pane_cp2_ParamLimits

0x83c5,	// (0x00032ab6) query_popup_pane_cp2_ParamLimits

0x83c5,	// (0x00032ab6) query_popup_pane_cp2

0x7693,	// (0x00031d84) bg_popup_window_pane_cp11

0xa152,	// (0x00034843) heading_pane_cp5

0x84b0,	// (0x00032ba1) listscroll_popup_info_pane

0x7693,	// (0x00031d84) input_focus_pane_cp3

0x83d8,	// (0x00032ac9) query_popup_pane_t1

0x83e6,	// (0x00032ad7) list_popup_info_pane_ParamLimits

0x83e6,	// (0x00032ad7) list_popup_info_pane

0x83f5,	// (0x00032ae6) listscroll_popup_info_pane_g1

0x83fd,	// (0x00032aee) scroll_pane_cp7

0x8407,	// (0x00032af8) popup_info_list_pane_t1_ParamLimits

0x8407,	// (0x00032af8) popup_info_list_pane_t1

0x8421,	// (0x00032b12) popup_info_list_pane_t2_ParamLimits

0x8421,	// (0x00032b12) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00039c84) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00039c84) popup_info_list_pane_t

0x7693,	// (0x00031d84) bg_popup_window_pane_cp12

0xb461,	// (0x00035b52) find_popup_pane

0x7fe4,	// (0x000326d5) bg_popup_window_pane_cp3

0x843b,	// (0x00032b2c) heading_pane_cp3

0x8447,	// (0x00032b38) listscroll_popup_graphic_pane

0x7693,	// (0x00031d84) bg_popup_window_pane_cp4

0x84a6,	// (0x00032b97) heading_pane_cp4

0x84b0,	// (0x00032ba1) listscroll_popup_colour_pane

0x84b8,	// (0x00032ba9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84b8,	// (0x00032ba9) cell_large_graphic_colour_none_popup_pane

0x84cc,	// (0x00032bbd) grid_large_graphic_colour_popup_pane_ParamLimits

0x84cc,	// (0x00032bbd) grid_large_graphic_colour_popup_pane

0x84f4,	// (0x00032be5) listscroll_popup_colour_pane_g1_ParamLimits

0x84f4,	// (0x00032be5) listscroll_popup_colour_pane_g1

0x850b,	// (0x00032bfc) listscroll_popup_colour_pane_g2_ParamLimits

0x850b,	// (0x00032bfc) listscroll_popup_colour_pane_g2

0x8522,	// (0x00032c13) listscroll_popup_colour_pane_g3_ParamLimits

0x8522,	// (0x00032c13) listscroll_popup_colour_pane_g3

0x8532,	// (0x00032c23) listscroll_popup_colour_pane_g4_ParamLimits

0x8532,	// (0x00032c23) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00039c89) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00039c89) listscroll_popup_colour_pane_g

0x8541,	// (0x00032c32) scroll_pane_cp6_ParamLimits

0x8541,	// (0x00032c32) scroll_pane_cp6

0x8553,	// (0x00032c44) cell_large_graphic_colour_popup_pane_ParamLimits

0x8553,	// (0x00032c44) cell_large_graphic_colour_popup_pane

0x8572,	// (0x00032c63) cell_large_graphic_colour_none_popup_pane_t1

0x7693,	// (0x00031d84) grid_highlight_pane_cp5

0x8581,	// (0x00032c72) cell_large_graphic_colour_popup_pane_g1

0x8589,	// (0x00032c7a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00039c92) cell_large_graphic_colour_popup_pane_g

0x8591,	// (0x00032c82) cell_large_graphic_colour_popup_pane_g2_copy1

0x859a,	// (0x00032c8b) grid_highlight_pane_cp4

0x85a2,	// (0x00032c93) bg_popup_window_pane_cp8_ParamLimits

0x85a2,	// (0x00032c93) bg_popup_window_pane_cp8

0x85bd,	// (0x00032cae) popup_snote_single_text_window_g1_ParamLimits

0x85bd,	// (0x00032cae) popup_snote_single_text_window_g1

0x85cf,	// (0x00032cc0) popup_snote_single_text_window_t1_ParamLimits

0x85cf,	// (0x00032cc0) popup_snote_single_text_window_t1

0x85e2,	// (0x00032cd3) popup_snote_single_text_window_t2_ParamLimits

0x85e2,	// (0x00032cd3) popup_snote_single_text_window_t2

0x85f5,	// (0x00032ce6) popup_snote_single_text_window_t3_ParamLimits

0x85f5,	// (0x00032ce6) popup_snote_single_text_window_t3

0x862e,	// (0x00032d1f) popup_snote_single_text_window_t4_ParamLimits

0x862e,	// (0x00032d1f) popup_snote_single_text_window_t4

0x8662,	// (0x00032d53) popup_snote_single_text_window_t5_ParamLimits

0x8662,	// (0x00032d53) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00039c97) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00039c97) popup_snote_single_text_window_t

0x8691,	// (0x00032d82) bg_popup_window_pane_cp9_ParamLimits

0x8691,	// (0x00032d82) bg_popup_window_pane_cp9

0x85bd,	// (0x00032cae) popup_snote_single_graphic_window_g1_ParamLimits

0x85bd,	// (0x00032cae) popup_snote_single_graphic_window_g1

0x869f,	// (0x00032d90) popup_snote_single_graphic_window_g2_ParamLimits

0x869f,	// (0x00032d90) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00039ca2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00039ca2) popup_snote_single_graphic_window_g

0x86ab,	// (0x00032d9c) popup_snote_single_graphic_window_t1_ParamLimits

0x86ab,	// (0x00032d9c) popup_snote_single_graphic_window_t1

0x86be,	// (0x00032daf) popup_snote_single_graphic_window_t2_ParamLimits

0x86be,	// (0x00032daf) popup_snote_single_graphic_window_t2

0x86d1,	// (0x00032dc2) popup_snote_single_graphic_window_t3_ParamLimits

0x86d1,	// (0x00032dc2) popup_snote_single_graphic_window_t3

0x870a,	// (0x00032dfb) popup_snote_single_graphic_window_t4_ParamLimits

0x870a,	// (0x00032dfb) popup_snote_single_graphic_window_t4

0x873e,	// (0x00032e2f) popup_snote_single_graphic_window_t5_ParamLimits

0x873e,	// (0x00032e2f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00039ca7) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00039ca7) popup_snote_single_graphic_window_t

0xb3a5,	// (0x00035a96) grid_graphic_popup_pane_ParamLimits

0xb3a5,	// (0x00035a96) grid_graphic_popup_pane

0xb3cd,	// (0x00035abe) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x00035abe) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x00035ad2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x00035ad2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a0a1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a0a1) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x00035ae6) scroll_pane_cp5

0xb345,	// (0x00035a36) cell_graphic_popup_pane_ParamLimits

0xb345,	// (0x00035a36) cell_graphic_popup_pane

0xb326,	// (0x00035a17) cell_graphic_popup_pane_g1

0xb32e,	// (0x00035a1f) cell_graphic_popup_pane_g2

0x8591,	// (0x00032c82) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a09a) cell_graphic_popup_pane_g

0xb337,	// (0x00035a28) cell_graphic_popup_pane_t2

0x859a,	// (0x00032c8b) grid_highlight_pane_cp3

0x877f,	// (0x00032e70) list_gen_pane_ParamLimits

0x877f,	// (0x00032e70) list_gen_pane

0x87b1,	// (0x00032ea2) scroll_pane

0xb288,	// (0x00035979) bg_list_pane_g1_ParamLimits

0xb288,	// (0x00035979) bg_list_pane_g1

0xb2a3,	// (0x00035994) bg_list_pane_g2_ParamLimits

0xb2a3,	// (0x00035994) bg_list_pane_g2

0xb2b6,	// (0x000359a7) bg_list_pane_g3_ParamLimits

0xb2b6,	// (0x000359a7) bg_list_pane_g3

0xb2c8,	// (0x000359b9) bg_list_pane_g4_ParamLimits

0xb2c8,	// (0x000359b9) bg_list_pane_g4

0xb2da,	// (0x000359cb) bg_list_pane_g5_ParamLimits

0xb2da,	// (0x000359cb) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a08f) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a08f) bg_list_pane_g

0x77df,	// (0x00031ed0) list_double2_graphic_large_graphic_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double2_graphic_large_graphic_pane

0x77df,	// (0x00031ed0) list_double2_graphic_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double2_graphic_pane

0x77df,	// (0x00031ed0) list_double2_large_graphic_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double2_large_graphic_pane

0x77df,	// (0x00031ed0) list_double2_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double2_pane

0x77df,	// (0x00031ed0) list_double_graphic_heading_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_graphic_heading_pane

0x77df,	// (0x00031ed0) list_double_graphic_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_graphic_pane

0x77df,	// (0x00031ed0) list_double_heading_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_heading_pane

0x77df,	// (0x00031ed0) list_double_large_graphic_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_large_graphic_pane

0x77df,	// (0x00031ed0) list_double_number_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_number_pane

0x77df,	// (0x00031ed0) list_double_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_pane

0x77df,	// (0x00031ed0) list_double_time_pane_ParamLimits

0x77df,	// (0x00031ed0) list_double_time_pane

0x77df,	// (0x00031ed0) list_setting_number_pane_ParamLimits

0x77df,	// (0x00031ed0) list_setting_number_pane

0x77df,	// (0x00031ed0) list_setting_pane_ParamLimits

0x77df,	// (0x00031ed0) list_setting_pane

0x7841,	// (0x00031f32) list_single_2graphic_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_2graphic_pane

0x7841,	// (0x00031f32) list_single_graphic_heading_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_graphic_heading_pane

0x7841,	// (0x00031f32) list_single_graphic_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_graphic_pane

0x7841,	// (0x00031f32) list_single_heading_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_heading_pane

0x78ca,	// (0x00031fbb) list_single_large_graphic_pane_ParamLimits

0x78ca,	// (0x00031fbb) list_single_large_graphic_pane

0x7841,	// (0x00031f32) list_single_number_heading_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_number_heading_pane

0x7841,	// (0x00031f32) list_single_number_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_number_pane

0x7841,	// (0x00031f32) list_single_pane_ParamLimits

0x7841,	// (0x00031f32) list_single_pane

0x7693,	// (0x00031d84) list_highlight_pane_cp1

0x4e06,	// (0x0002f4f7) list_single_pane_g1_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_pane_g1

0x4e12,	// (0x0002f503) list_single_pane_g2_ParamLimits

0x4e12,	// (0x0002f503) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00039cb9) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00039cb9) list_single_pane_g

0x77c9,	// (0x00031eba) list_single_pane_t1_ParamLimits

0x77c9,	// (0x00031eba) list_single_pane_t1

0x4e06,	// (0x0002f4f7) list_single_number_pane_g1_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_number_pane_g1

0x4e12,	// (0x0002f503) list_single_number_pane_g2_ParamLimits

0x4e12,	// (0x0002f503) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00039cb9) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00039cb9) list_single_number_pane_g

0x7773,	// (0x00031e64) list_single_number_pane_t1_ParamLimits

0x7773,	// (0x00031e64) list_single_number_pane_t1

0x7789,	// (0x00031e7a) list_single_number_pane_t2_ParamLimits

0x7789,	// (0x00031e7a) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a050) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a050) list_single_number_pane_t

0x4dfa,	// (0x0002f4eb) list_single_graphic_pane_g1_ParamLimits

0x4dfa,	// (0x0002f4eb) list_single_graphic_pane_g1

0x4e06,	// (0x0002f4f7) list_single_graphic_pane_g2_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_graphic_pane_g2

0x4e12,	// (0x0002f503) list_single_graphic_pane_g3_ParamLimits

0x4e12,	// (0x0002f503) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00039cb2) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00039cb2) list_single_graphic_pane_g

0x4e1e,	// (0x0002f50f) list_single_graphic_pane_t1_ParamLimits

0x4e1e,	// (0x0002f50f) list_single_graphic_pane_t1

0x4e06,	// (0x0002f4f7) list_single_heading_pane_g1_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_heading_pane_g1

0x4e12,	// (0x0002f503) list_single_heading_pane_g2_ParamLimits

0x4e12,	// (0x0002f503) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039cb9) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039cb9) list_single_heading_pane_g

0x4e34,	// (0x0002f525) list_single_heading_pane_t1_ParamLimits

0x4e34,	// (0x0002f525) list_single_heading_pane_t1

0x4e4a,	// (0x0002f53b) list_single_heading_pane_t2_ParamLimits

0x4e4a,	// (0x0002f53b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00039cbe) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00039cbe) list_single_heading_pane_t

0x4e06,	// (0x0002f4f7) list_single_number_heading_pane_g1_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_number_heading_pane_g1

0x4e12,	// (0x0002f503) list_single_number_heading_pane_g2_ParamLimits

0x4e12,	// (0x0002f503) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039cb9) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039cb9) list_single_number_heading_pane_g

0x4e34,	// (0x0002f525) list_single_number_heading_pane_t1_ParamLimits

0x4e34,	// (0x0002f525) list_single_number_heading_pane_t1

0x4e5c,	// (0x0002f54d) list_single_number_heading_pane_t2_ParamLimits

0x4e5c,	// (0x0002f54d) list_single_number_heading_pane_t2

0x4e6e,	// (0x0002f55f) list_single_number_heading_pane_t3_ParamLimits

0x4e6e,	// (0x0002f55f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00039cc3) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00039cc3) list_single_number_heading_pane_t

0x4e80,	// (0x0002f571) list_single_graphic_heading_pane_g1_ParamLimits

0x4e80,	// (0x0002f571) list_single_graphic_heading_pane_g1

0x4e8c,	// (0x0002f57d) list_single_graphic_heading_pane_g4_ParamLimits

0x4e8c,	// (0x0002f57d) list_single_graphic_heading_pane_g4

0x4e12,	// (0x0002f503) list_single_graphic_heading_pane_g5_ParamLimits

0x4e12,	// (0x0002f503) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00039cca) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00039cca) list_single_graphic_heading_pane_g

0x4e34,	// (0x0002f525) list_single_graphic_heading_pane_t1_ParamLimits

0x4e34,	// (0x0002f525) list_single_graphic_heading_pane_t1

0x4e9d,	// (0x0002f58e) list_single_graphic_heading_pane_t2_ParamLimits

0x4e9d,	// (0x0002f58e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00039cd1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00039cd1) list_single_graphic_heading_pane_t

0x4eaf,	// (0x0002f5a0) list_single_large_graphic_pane_g1_ParamLimits

0x4eaf,	// (0x0002f5a0) list_single_large_graphic_pane_g1

0x4ebb,	// (0x0002f5ac) list_single_large_graphic_pane_g2_ParamLimits

0x4ebb,	// (0x0002f5ac) list_single_large_graphic_pane_g2

0x4ec7,	// (0x0002f5b8) list_single_large_graphic_pane_g3_ParamLimits

0x4ec7,	// (0x0002f5b8) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00039cd6) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00039cd6) list_single_large_graphic_pane_g

0xa2f5,	// (0x000349e6) wait_border_pane_g2_copy1

0x4ed3,	// (0x0002f5c4) list_single_large_graphic_pane_g4_cp2

0x4edb,	// (0x0002f5cc) list_single_large_graphic_pane_t1_ParamLimits

0x4edb,	// (0x0002f5cc) list_single_large_graphic_pane_t1

0x4ef1,	// (0x0002f5e2) list_double_pane_g1_ParamLimits

0x4ef1,	// (0x0002f5e2) list_double_pane_g1

0x4efd,	// (0x0002f5ee) list_double_pane_g2_ParamLimits

0x4efd,	// (0x0002f5ee) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00039cdd) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00039cdd) list_double_pane_g

0x4f09,	// (0x0002f5fa) list_double_pane_t1_ParamLimits

0x4f09,	// (0x0002f5fa) list_double_pane_t1

0x4f1f,	// (0x0002f610) list_double_pane_t2_ParamLimits

0x4f1f,	// (0x0002f610) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00039ce2) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00039ce2) list_double_pane_t

0x4f31,	// (0x0002f622) list_double2_pane_g1_ParamLimits

0x4f31,	// (0x0002f622) list_double2_pane_g1

0x4f42,	// (0x0002f633) list_double2_pane_g2_ParamLimits

0x4f42,	// (0x0002f633) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00039ce7) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00039ce7) list_double2_pane_g

0x4f4e,	// (0x0002f63f) list_double2_pane_t1_ParamLimits

0x4f4e,	// (0x0002f63f) list_double2_pane_t1

0x4f64,	// (0x0002f655) list_double2_pane_t2_ParamLimits

0x4f64,	// (0x0002f655) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00039cec) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00039cec) list_double2_pane_t

0x4ef1,	// (0x0002f5e2) list_double_number_pane_g1_ParamLimits

0x4ef1,	// (0x0002f5e2) list_double_number_pane_g1

0x4efd,	// (0x0002f5ee) list_double_number_pane_g2_ParamLimits

0x4efd,	// (0x0002f5ee) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00039cdd) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00039cdd) list_double_number_pane_g

0x4f76,	// (0x0002f667) list_double_number_pane_t1_ParamLimits

0x4f76,	// (0x0002f667) list_double_number_pane_t1

0x4f88,	// (0x0002f679) list_double_number_pane_t2_ParamLimits

0x4f88,	// (0x0002f679) list_double_number_pane_t2

0x4f9e,	// (0x0002f68f) list_double_number_pane_t3_ParamLimits

0x4f9e,	// (0x0002f68f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00039cf1) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00039cf1) list_double_number_pane_t

0x4fb0,	// (0x0002f6a1) list_double_graphic_pane_g1_ParamLimits

0x4fb0,	// (0x0002f6a1) list_double_graphic_pane_g1

0x4fbc,	// (0x0002f6ad) list_double_graphic_pane_g2_ParamLimits

0x4fbc,	// (0x0002f6ad) list_double_graphic_pane_g2

0x4fcb,	// (0x0002f6bc) list_double_graphic_pane_g3_ParamLimits

0x4fcb,	// (0x0002f6bc) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00039cf8) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00039cf8) list_double_graphic_pane_g

0x4fe3,	// (0x0002f6d4) list_double_graphic_pane_t1_ParamLimits

0x4fe3,	// (0x0002f6d4) list_double_graphic_pane_t1

0x4ff9,	// (0x0002f6ea) list_double_graphic_pane_t2_ParamLimits

0x4ff9,	// (0x0002f6ea) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00039d01) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00039d01) list_double_graphic_pane_t

0x500b,	// (0x0002f6fc) list_double2_graphic_pane_g1_ParamLimits

0x500b,	// (0x0002f6fc) list_double2_graphic_pane_g1

0x4ef1,	// (0x0002f5e2) list_double2_graphic_pane_g2_ParamLimits

0x4ef1,	// (0x0002f5e2) list_double2_graphic_pane_g2

0x4efd,	// (0x0002f5ee) list_double2_graphic_pane_g3_ParamLimits

0x4efd,	// (0x0002f5ee) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00039d06) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00039d06) list_double2_graphic_pane_g

0x5017,	// (0x0002f708) list_double2_graphic_pane_t1_ParamLimits

0x5017,	// (0x0002f708) list_double2_graphic_pane_t1

0x502d,	// (0x0002f71e) list_double2_graphic_pane_t2_ParamLimits

0x502d,	// (0x0002f71e) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00039d0d) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00039d0d) list_double2_graphic_pane_t

0x503f,	// (0x0002f730) list_double_large_graphic_pane_g1_ParamLimits

0x503f,	// (0x0002f730) list_double_large_graphic_pane_g1

0x505e,	// (0x0002f74f) list_double_large_graphic_pane_g2_ParamLimits

0x505e,	// (0x0002f74f) list_double_large_graphic_pane_g2

0x4efd,	// (0x0002f5ee) list_double_large_graphic_pane_g3_ParamLimits

0x4efd,	// (0x0002f5ee) list_double_large_graphic_pane_g3

0x506f,	// (0x0002f760) list_double_large_graphic_pane_g4_ParamLimits

0x506f,	// (0x0002f760) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00039d12) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00039d12) list_double_large_graphic_pane_g

0x5097,	// (0x0002f788) list_double_large_graphic_pane_t1_ParamLimits

0x5097,	// (0x0002f788) list_double_large_graphic_pane_t1

0x50b0,	// (0x0002f7a1) list_double_large_graphic_pane_t2_ParamLimits

0x50b0,	// (0x0002f7a1) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039d1d) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039d1d) list_double_large_graphic_pane_t

0x50c2,	// (0x0002f7b3) list_double2_large_graphic_pane_g1_ParamLimits

0x50c2,	// (0x0002f7b3) list_double2_large_graphic_pane_g1

0x4f31,	// (0x0002f622) list_double2_large_graphic_pane_g2_ParamLimits

0x4f31,	// (0x0002f622) list_double2_large_graphic_pane_g2

0x4f42,	// (0x0002f633) list_double2_large_graphic_pane_g3_ParamLimits

0x4f42,	// (0x0002f633) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00039d22) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00039d22) list_double2_large_graphic_pane_g

0x50ce,	// (0x0002f7bf) list_double2_large_graphic_pane_t1_ParamLimits

0x50ce,	// (0x0002f7bf) list_double2_large_graphic_pane_t1

0x50e4,	// (0x0002f7d5) list_double2_large_graphic_pane_t2_ParamLimits

0x50e4,	// (0x0002f7d5) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00039d29) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00039d29) list_double2_large_graphic_pane_t

0x50f6,	// (0x0002f7e7) list_double_heading_pane_g1_ParamLimits

0x50f6,	// (0x0002f7e7) list_double_heading_pane_g1

0x5107,	// (0x0002f7f8) list_double_heading_pane_g2_ParamLimits

0x5107,	// (0x0002f7f8) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00039d2e) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00039d2e) list_double_heading_pane_g

0x5113,	// (0x0002f804) list_double_heading_pane_t1_ParamLimits

0x5113,	// (0x0002f804) list_double_heading_pane_t1

0x4f64,	// (0x0002f655) list_double_heading_pane_t2_ParamLimits

0x4f64,	// (0x0002f655) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00039d33) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00039d33) list_double_heading_pane_t

0x500b,	// (0x0002f6fc) list_double_graphic_heading_pane_g1_ParamLimits

0x500b,	// (0x0002f6fc) list_double_graphic_heading_pane_g1

0x50f6,	// (0x0002f7e7) list_double_graphic_heading_pane_g2_ParamLimits

0x50f6,	// (0x0002f7e7) list_double_graphic_heading_pane_g2

0x5107,	// (0x0002f7f8) list_double_graphic_heading_pane_g3_ParamLimits

0x5107,	// (0x0002f7f8) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00039d38) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00039d38) list_double_graphic_heading_pane_g

0x5129,	// (0x0002f81a) list_double_graphic_heading_pane_t1_ParamLimits

0x5129,	// (0x0002f81a) list_double_graphic_heading_pane_t1

0x502d,	// (0x0002f71e) list_double_graphic_heading_pane_t2_ParamLimits

0x502d,	// (0x0002f71e) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00039d3f) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00039d3f) list_double_graphic_heading_pane_t

0x505e,	// (0x0002f74f) list_double_time_pane_g1_ParamLimits

0x505e,	// (0x0002f74f) list_double_time_pane_g1

0x4efd,	// (0x0002f5ee) list_double_time_pane_g2_ParamLimits

0x4efd,	// (0x0002f5ee) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00039d44) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00039d44) list_double_time_pane_g

0x513f,	// (0x0002f830) list_double_time_pane_t1_ParamLimits

0x513f,	// (0x0002f830) list_double_time_pane_t1

0x5155,	// (0x0002f846) list_double_time_pane_t2_ParamLimits

0x5155,	// (0x0002f846) list_double_time_pane_t2

0x5167,	// (0x0002f858) list_double_time_pane_t3_ParamLimits

0x5167,	// (0x0002f858) list_double_time_pane_t3

0x5179,	// (0x0002f86a) list_double_time_pane_t4_ParamLimits

0x5179,	// (0x0002f86a) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00039d49) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00039d49) list_double_time_pane_t

0x518b,	// (0x0002f87c) list_setting_pane_g1_ParamLimits

0x518b,	// (0x0002f87c) list_setting_pane_g1

0x5107,	// (0x0002f7f8) list_setting_pane_g2_ParamLimits

0x5107,	// (0x0002f7f8) list_setting_pane_g2

0x0001,

0xf661,	// (0x00039d52) list_setting_pane_g_ParamLimits

0xf661,	// (0x00039d52) list_setting_pane_g

0x5197,	// (0x0002f888) list_setting_pane_t1_ParamLimits

0x5197,	// (0x0002f888) list_setting_pane_t1

0x51ae,	// (0x0002f89f) list_setting_pane_t2_ParamLimits

0x51ae,	// (0x0002f89f) list_setting_pane_t2

0x0002,

0xf666,	// (0x00039d57) list_setting_pane_t_ParamLimits

0xf666,	// (0x00039d57) list_setting_pane_t

0x51eb,	// (0x0002f8dc) set_value_pane_cp_ParamLimits

0x51eb,	// (0x0002f8dc) set_value_pane_cp

0x51f7,	// (0x0002f8e8) list_setting_number_pane_g1_ParamLimits

0x51f7,	// (0x0002f8e8) list_setting_number_pane_g1

0x5203,	// (0x0002f8f4) list_setting_number_pane_g2_ParamLimits

0x5203,	// (0x0002f8f4) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00039d5e) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00039d5e) list_setting_number_pane_g

0x520f,	// (0x0002f900) list_setting_number_pane_t1_ParamLimits

0x520f,	// (0x0002f900) list_setting_number_pane_t1

0x5223,	// (0x0002f914) list_setting_number_pane_t2_ParamLimits

0x5223,	// (0x0002f914) list_setting_number_pane_t2

0x523a,	// (0x0002f92b) list_setting_number_pane_t3_ParamLimits

0x523a,	// (0x0002f92b) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00039d63) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00039d63) list_setting_number_pane_t

0x51eb,	// (0x0002f8dc) set_value_pane_ParamLimits

0x51eb,	// (0x0002f8dc) set_value_pane

0x87e5,	// (0x00032ed6) bg_set_opt_pane_ParamLimits

0x87e5,	// (0x00032ed6) bg_set_opt_pane

0x527d,	// (0x0002f96e) set_value_pane_t1

0x8806,	// (0x00032ef7) slider_set_pane_cp3

0x880f,	// (0x00032f00) volume_small_pane_cp

0x8818,	// (0x00032f09) list_form_gen_pane

0x8821,	// (0x00032f12) scroll_pane_cp8

0x5293,	// (0x0002f984) form_field_data_pane_ParamLimits

0x5293,	// (0x0002f984) form_field_data_pane

0x52b3,	// (0x0002f9a4) form_field_data_wide_pane_ParamLimits

0x52b3,	// (0x0002f9a4) form_field_data_wide_pane

0x52d4,	// (0x0002f9c5) form_field_popup_pane_ParamLimits

0x52d4,	// (0x0002f9c5) form_field_popup_pane

0x52f2,	// (0x0002f9e3) form_field_popup_wide_pane_ParamLimits

0x52f2,	// (0x0002f9e3) form_field_popup_wide_pane

0x530f,	// (0x0002fa00) form_field_slider_pane_ParamLimits

0x530f,	// (0x0002fa00) form_field_slider_pane

0x5322,	// (0x0002fa13) form_field_slider_wide_pane_ParamLimits

0x5322,	// (0x0002fa13) form_field_slider_wide_pane

0x8832,	// (0x00032f23) data_form_pane

0x533f,	// (0x0002fa30) form_field_data_pane_t1

0x883e,	// (0x00032f2f) input_focus_pane

0x5359,	// (0x0002fa4a) data_form_wide_pane

0x5376,	// (0x0002fa67) form_field_data_wide_pane_t1

0x85af,	// (0x00032ca0) input_focus_pane_cp6

0x5398,	// (0x0002fa89) form_field_popup_pane_t1

0x883e,	// (0x00032f2f) input_focus_pane_cp7

0x886c,	// (0x00032f5d) list_form_pane

0x53ba,	// (0x0002faab) form_field_popup_wide_pane_t1

0x883e,	// (0x00032f2f) input_focus_pane_cp8

0x8878,	// (0x00032f69) list_form_wide_pane

0x53d7,	// (0x0002fac8) form_field_slider_pane_t1_ParamLimits

0x53d7,	// (0x0002fac8) form_field_slider_pane_t1

0x53eb,	// (0x0002fadc) form_field_slider_pane_t2_ParamLimits

0x53eb,	// (0x0002fadc) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00039d73) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00039d73) form_field_slider_pane_t

0x825f,	// (0x00032950) input_focus_pane_cp9_ParamLimits

0x825f,	// (0x00032950) input_focus_pane_cp9

0x53fd,	// (0x0002faee) slider_cont_pane_ParamLimits

0x53fd,	// (0x0002faee) slider_cont_pane

0x8887,	// (0x00032f78) form_field_slider_wide_pane_t1_ParamLimits

0x8887,	// (0x00032f78) form_field_slider_wide_pane_t1

0x5411,	// (0x0002fb02) form_field_slider_wide_pane_t2_ParamLimits

0x5411,	// (0x0002fb02) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00039d78) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00039d78) form_field_slider_wide_pane_t

0x825f,	// (0x00032950) input_focus_pane_cp10_ParamLimits

0x825f,	// (0x00032950) input_focus_pane_cp10

0x5423,	// (0x0002fb14) slider_cont_pane_cp1_ParamLimits

0x5423,	// (0x0002fb14) slider_cont_pane_cp1

0x5437,	// (0x0002fb28) slider_form_pane_cp

0x8899,	// (0x00032f8a) input_focus_pane_g1

0x88a1,	// (0x00032f92) input_focus_pane_g2

0x88a9,	// (0x00032f9a) input_focus_pane_g3

0x88b1,	// (0x00032fa2) input_focus_pane_g4

0x88b9,	// (0x00032faa) input_focus_pane_g5

0x88c1,	// (0x00032fb2) input_focus_pane_g6

0x88c9,	// (0x00032fba) input_focus_pane_g7

0x88d1,	// (0x00032fc2) input_focus_pane_g8

0x88d9,	// (0x00032fca) input_focus_pane_g9

0x7689,	// (0x00031d7a) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00039d7d) input_focus_pane_g

0xa2fe,	// (0x000349ef) wait_border_pane_g3_copy1

0x543f,	// (0x0002fb30) data_form_pane_t1

0x7689,	// (0x00031d7a) wait_anim_pane_g1_copy1

0x779b,	// (0x00031e8c) data_form_wide_pane_t1

0x545a,	// (0x0002fb4b) list_form_graphic_pane_cp_ParamLimits

0x545a,	// (0x0002fb4b) list_form_graphic_pane_cp

0xb219,	// (0x0003590a) slider_form_pane_g1

0xb222,	// (0x00035913) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a080) slider_form_pane_g

0x545a,	// (0x0002fb4b) list_form_graphic_pane_ParamLimits

0x545a,	// (0x0002fb4b) list_form_graphic_pane

0x5471,	// (0x0002fb62) list_form_graphic_pane_g1

0x5479,	// (0x0002fb6a) list_form_graphic_pane_t1_ParamLimits

0x5479,	// (0x0002fb6a) list_form_graphic_pane_t1

0x7fe4,	// (0x000326d5) list_highlight_pane_cp5_ParamLimits

0x7fe4,	// (0x000326d5) list_highlight_pane_cp5

0x548e,	// (0x0002fb7f) find_pane_g1

0x88e1,	// (0x00032fd2) input_find_pane

0x5497,	// (0x0002fb88) input_find_pane_g1_ParamLimits

0x5497,	// (0x0002fb88) input_find_pane_g1

0x54a3,	// (0x0002fb94) input_find_pane_t1_ParamLimits

0x54a3,	// (0x0002fb94) input_find_pane_t1

0x54b8,	// (0x0002fba9) input_find_pane_t2_ParamLimits

0x54b8,	// (0x0002fba9) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00039d92) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00039d92) input_find_pane_t

0x88ea,	// (0x00032fdb) input_focus_pane_cp5_ParamLimits

0x88ea,	// (0x00032fdb) input_focus_pane_cp5

0x8904,	// (0x00032ff5) bg_popup_window_pane_cp2_ParamLimits

0x8904,	// (0x00032ff5) bg_popup_window_pane_cp2

0x8911,	// (0x00033002) listscroll_menu_pane_ParamLimits

0x8911,	// (0x00033002) listscroll_menu_pane

0x891d,	// (0x0003300e) popup_submenu_window_ParamLimits

0x891d,	// (0x0003300e) popup_submenu_window

0x8945,	// (0x00033036) find_popup_pane_g1

0x894d,	// (0x0003303e) input_popup_find_pane_cp

0x88ea,	// (0x00032fdb) input_focus_pane_cp4_ParamLimits

0x88ea,	// (0x00032fdb) input_focus_pane_cp4

0x8965,	// (0x00033056) input_popup_find_pane_t1_ParamLimits

0x8965,	// (0x00033056) input_popup_find_pane_t1

0x7693,	// (0x00031d84) bg_popup_sub_pane_cp

0x8993,	// (0x00033084) listscroll_popup_sub_pane

0x899b,	// (0x0003308c) list_submenu_pane_ParamLimits

0x899b,	// (0x0003308c) list_submenu_pane

0x89ac,	// (0x0003309d) scroll_pane_cp4

0x89b4,	// (0x000330a5) list_single_popup_submenu_pane_ParamLimits

0x89b4,	// (0x000330a5) list_single_popup_submenu_pane

0x89c8,	// (0x000330b9) list_single_popup_submenu_pane_g1

0x89d0,	// (0x000330c1) list_single_popup_submenu_pane_t1_ParamLimits

0x89d0,	// (0x000330c1) list_single_popup_submenu_pane_t1

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp1_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp1

0x89e5,	// (0x000330d6) tabs_2_active_pane_g1

0x89ed,	// (0x000330de) tabs_2_active_pane_t1

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp1_ParamLimits

0x7fe4,	// (0x000326d5) bg_passive_tab_pane_cp1

0x89e5,	// (0x000330d6) tabs_2_passive_pane_g1

0x89ed,	// (0x000330de) tabs_2_passive_pane_t1

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp4

0x8a0d,	// (0x000330fe) tabs_2_long_active_pane_t1

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp4

0x6171,	// (0x00030862) list_single_midp_graphic_pane_g4_ParamLimits

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp5

0x8a2c,	// (0x0003311d) tabs_3_long_active_pane_t1

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp5

0x6171,	// (0x00030862) list_single_midp_graphic_pane_g4

0x7fe4,	// (0x000326d5) bg_popup_window_pane_cp13_ParamLimits

0x7fe4,	// (0x000326d5) bg_popup_window_pane_cp13

0x8a47,	// (0x00033138) listscroll_popup_fast_pane_ParamLimits

0x8a47,	// (0x00033138) listscroll_popup_fast_pane

0x8a53,	// (0x00033144) grid_popup_fast_pane_ParamLimits

0x8a53,	// (0x00033144) grid_popup_fast_pane

0x8a65,	// (0x00033156) scroll_pane_cp9_ParamLimits

0x8a65,	// (0x00033156) scroll_pane_cp9

0xcabf,	// (0x000371b0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcabf,	// (0x000371b0) list_single_graphic_hl_pane_t1_cp2

0x8a89,	// (0x0003317a) input_focus_pane_cp20_ParamLimits

0x8a89,	// (0x0003317a) input_focus_pane_cp20

0x8a97,	// (0x00033188) query_popup_data_pane_t1_ParamLimits

0x8a97,	// (0x00033188) query_popup_data_pane_t1

0x8aaa,	// (0x0003319b) query_popup_data_pane_t2_ParamLimits

0x8aaa,	// (0x0003319b) query_popup_data_pane_t2

0x8af0,	// (0x000331e1) query_popup_data_pane_t3_ParamLimits

0x8af0,	// (0x000331e1) query_popup_data_pane_t3

0x8b31,	// (0x00033222) query_popup_data_pane_t4_ParamLimits

0x8b31,	// (0x00033222) query_popup_data_pane_t4

0x8b6d,	// (0x0003325e) query_popup_data_pane_t5_ParamLimits

0x8b6d,	// (0x0003325e) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00039d97) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00039d97) query_popup_data_pane_t

0x8899,	// (0x00032f8a) bg_set_opt_pane_g1

0x88a1,	// (0x00032f92) bg_set_opt_pane_g2

0x88a9,	// (0x00032f9a) bg_set_opt_pane_g3

0x88b1,	// (0x00032fa2) bg_set_opt_pane_g4

0x88b9,	// (0x00032faa) bg_set_opt_pane_g5

0x88c1,	// (0x00032fb2) bg_set_opt_pane_g6

0x88c9,	// (0x00032fba) bg_set_opt_pane_g7

0x88d1,	// (0x00032fc2) bg_set_opt_pane_g8

0x88d9,	// (0x00032fca) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00039da2) bg_set_opt_pane_g

0x57ef,	// (0x0002fee0) control_top_pane_stacon_ParamLimits

0x57ef,	// (0x0002fee0) control_top_pane_stacon

0x5842,	// (0x0002ff33) signal_pane_stacon_ParamLimits

0x5842,	// (0x0002ff33) signal_pane_stacon

0x912f,	// (0x00033820) stacon_top_pane_g1_ParamLimits

0x912f,	// (0x00033820) stacon_top_pane_g1

0x5867,	// (0x0002ff58) title_pane_stacon_ParamLimits

0x5867,	// (0x0002ff58) title_pane_stacon

0x5891,	// (0x0002ff82) uni_indicator_pane_stacon_ParamLimits

0x5891,	// (0x0002ff82) uni_indicator_pane_stacon

0x58a6,	// (0x0002ff97) battery_pane_stacon_ParamLimits

0x58a6,	// (0x0002ff97) battery_pane_stacon

0x58ea,	// (0x0002ffdb) control_bottom_pane_stacon_ParamLimits

0x58ea,	// (0x0002ffdb) control_bottom_pane_stacon

0x590d,	// (0x0002fffe) navi_pane_stacon_ParamLimits

0x590d,	// (0x0002fffe) navi_pane_stacon

0x9151,	// (0x00033842) stacon_bottom_pane_g1_ParamLimits

0x9151,	// (0x00033842) stacon_bottom_pane_g1

0x54cd,	// (0x0002fbbe) aid_levels_signal_lsc_ParamLimits

0x54cd,	// (0x0002fbbe) aid_levels_signal_lsc

0x54e4,	// (0x0002fbd5) signal_pane_stacon_g1_ParamLimits

0x54e4,	// (0x0002fbd5) signal_pane_stacon_g1

0x54f8,	// (0x0002fbe9) signal_pane_stacon_g2_ParamLimits

0x54f8,	// (0x0002fbe9) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00039db5) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00039db5) signal_pane_stacon_g

0x552d,	// (0x0002fc1e) title_pane_stacon_t1_ParamLimits

0x552d,	// (0x0002fc1e) title_pane_stacon_t1

0x8bb1,	// (0x000332a2) uni_indicator_pane_stacon_g1

0x8bbb,	// (0x000332ac) uni_indicator_pane_stacon_g2

0x8bc5,	// (0x000332b6) uni_indicator_pane_stacon_g3

0x8bcf,	// (0x000332c0) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00039dc1) uni_indicator_pane_stacon_g

0x5552,	// (0x0002fc43) control_top_pane_stacon_g1

0x555a,	// (0x0002fc4b) control_top_pane_stacon_t1_ParamLimits

0x555a,	// (0x0002fc4b) control_top_pane_stacon_t1

0x5591,	// (0x0002fc82) aid_levels_battery_lsc_ParamLimits

0x5591,	// (0x0002fc82) aid_levels_battery_lsc

0x55a9,	// (0x0002fc9a) battery_pane_stacon_g1_ParamLimits

0x55a9,	// (0x0002fc9a) battery_pane_stacon_g1

0x55bc,	// (0x0002fcad) battery_pane_stacon_g2_ParamLimits

0x55bc,	// (0x0002fcad) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00039dca) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00039dca) battery_pane_stacon_g

0x55fa,	// (0x0002fceb) navi_icon_pane_stacon

0x560e,	// (0x0002fcff) navi_navi_pane_stacon

0x55fa,	// (0x0002fceb) navi_text_pane_stacon

0x5552,	// (0x0002fc43) control_bottom_pane_stacon_g1

0x5622,	// (0x0002fd13) control_bottom_pane_stacon_t1_ParamLimits

0x5622,	// (0x0002fd13) control_bottom_pane_stacon_t1

0x8bf3,	// (0x000332e4) grid_app_pane_ParamLimits

0x8bf3,	// (0x000332e4) grid_app_pane

0x8c15,	// (0x00033306) scroll_pane_cp15_ParamLimits

0x8c15,	// (0x00033306) scroll_pane_cp15

0x8c28,	// (0x00033319) cell_app_pane_ParamLimits

0x8c28,	// (0x00033319) cell_app_pane

0x8c4e,	// (0x0003333f) cell_app_pane_g1_ParamLimits

0x8c4e,	// (0x0003333f) cell_app_pane_g1

0x8c72,	// (0x00033363) cell_app_pane_g2_ParamLimits

0x8c72,	// (0x00033363) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00039dcf) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00039dcf) cell_app_pane_g

0x8c7e,	// (0x0003336f) cell_app_pane_t1_ParamLimits

0x8c7e,	// (0x0003336f) cell_app_pane_t1

0x8c95,	// (0x00033386) grid_highlight_pane_ParamLimits

0x8c95,	// (0x00033386) grid_highlight_pane

0x8899,	// (0x00032f8a) cell_highlight_pane_g1

0x88a1,	// (0x00032f92) cell_highlight_pane_g2

0x88a9,	// (0x00032f9a) cell_highlight_pane_g3

0x88b1,	// (0x00032fa2) cell_highlight_pane_g4

0x88b9,	// (0x00032faa) cell_highlight_pane_g5

0x88c1,	// (0x00032fb2) cell_highlight_pane_g6

0x88c9,	// (0x00032fba) cell_highlight_pane_g7

0x88d1,	// (0x00032fc2) cell_highlight_pane_g8

0x88d9,	// (0x00032fca) cell_highlight_pane_g9

0x7689,	// (0x00031d7a) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00039d7d) cell_highlight_pane_g

0x8ca6,	// (0x00033397) bg_scroll_pane

0x566c,	// (0x0002fd5d) scroll_handle_pane

0x8ced,	// (0x000333de) scroll_bg_pane_g1

0x8d02,	// (0x000333f3) scroll_bg_pane_g2

0x8d1a,	// (0x0003340b) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00039dd4) scroll_bg_pane_g

0x8d2f,	// (0x00033420) scroll_handle_focus_pane_ParamLimits

0x8d2f,	// (0x00033420) scroll_handle_focus_pane

0x8ced,	// (0x000333de) scroll_handle_pane_g1

0x8d3c,	// (0x0003342d) scroll_handle_pane_g2

0x8d1a,	// (0x0003340b) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00039ddb) scroll_handle_pane_g

0x88ea,	// (0x00032fdb) bg_popup_sub_pane_cp21_ParamLimits

0x88ea,	// (0x00032fdb) bg_popup_sub_pane_cp21

0x8d50,	// (0x00033441) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d50,	// (0x00033441) popup_fep_japan_predictive_window_t1

0x8d6a,	// (0x0003345b) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d6a,	// (0x0003345b) popup_fep_japan_predictive_window_t2

0x8d9d,	// (0x0003348e) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d9d,	// (0x0003348e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00039de2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00039de2) popup_fep_japan_predictive_window_t

0x7693,	// (0x00031d84) bg_popup_sub_pane_cp23

0x8dd4,	// (0x000334c5) listscroll_japin_cand_pane

0x8ddc,	// (0x000334cd) popup_fep_japan_candidate_window_t1

0x8dea,	// (0x000334db) candidate_pane_ParamLimits

0x8dea,	// (0x000334db) candidate_pane

0x8dfc,	// (0x000334ed) scroll_pane_cp30

0x8e04,	// (0x000334f5) list_single_popup_jap_candidate_pane_ParamLimits

0x8e04,	// (0x000334f5) list_single_popup_jap_candidate_pane

0x7693,	// (0x00031d84) list_highlight_pane_cp30

0x8e18,	// (0x00033509) list_single_popup_jap_candidate_pane_t1

0x8e27,	// (0x00033518) level_1_signal

0x8e34,	// (0x00033525) level_2_signal

0x8e41,	// (0x00033532) level_3_signal

0x8e4e,	// (0x0003353f) level_4_signal

0x8e5b,	// (0x0003354c) level_5_signal

0x8e68,	// (0x00033559) level_6_signal

0x8e75,	// (0x00033566) level_7_signal

0x8e27,	// (0x00033518) level_1_battery

0x8e34,	// (0x00033525) level_2_battery

0x8e41,	// (0x00033532) level_3_battery

0x8e4e,	// (0x0003353f) level_4_battery

0x8e5b,	// (0x0003354c) level_5_battery

0x8e68,	// (0x00033559) level_6_battery

0x8e75,	// (0x00033566) level_7_battery

0x8e9a,	// (0x0003358b) list_menu_pane_ParamLimits

0x8e9a,	// (0x0003358b) list_menu_pane

0x8eb0,	// (0x000335a1) scroll_pane_cp25_ParamLimits

0x8eb0,	// (0x000335a1) scroll_pane_cp25

0x8ec9,	// (0x000335ba) list_double2_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double2_graphic_pane_cp2

0x8ec9,	// (0x000335ba) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double2_large_graphic_pane_cp2

0x8ec9,	// (0x000335ba) list_double2_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double2_pane_cp2

0x8ec9,	// (0x000335ba) list_double_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double_graphic_pane_cp2

0x8ec9,	// (0x000335ba) list_double_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double_large_graphic_pane_cp2

0x8ec9,	// (0x000335ba) list_double_number_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double_number_pane_cp2

0x8ec9,	// (0x000335ba) list_double_pane_cp2_ParamLimits

0x8ec9,	// (0x000335ba) list_double_pane_cp2

0x8eed,	// (0x000335de) list_single_2graphic_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_2graphic_pane_cp2

0x8eed,	// (0x000335de) list_single_graphic_heading_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_graphic_heading_pane_cp2

0x8eed,	// (0x000335de) list_single_graphic_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_graphic_pane_cp2

0x8eed,	// (0x000335de) list_single_heading_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_heading_pane_cp2

0x8f03,	// (0x000335f4) list_single_large_graphic_pane_cp2_ParamLimits

0x8f03,	// (0x000335f4) list_single_large_graphic_pane_cp2

0x8eed,	// (0x000335de) list_single_number_heading_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_number_heading_pane_cp2

0x8eed,	// (0x000335de) list_single_number_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_number_pane_cp2

0x8eed,	// (0x000335de) list_single_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_pane_cp2

0x8f7e,	// (0x0003366f) bg_popup_sub_pane_cp22

0x571b,	// (0x0002fe0c) popup_side_volume_key_window_g1

0x573f,	// (0x0002fe30) popup_side_volume_key_window_t1

0x575b,	// (0x0002fe4c) volume_small_pane_cp1

0x825f,	// (0x00032950) bg_popup_sub_pane_cp24_ParamLimits

0x825f,	// (0x00032950) bg_popup_sub_pane_cp24

0x8f94,	// (0x00033685) fep_china_uni_candidate_pane_ParamLimits

0x8f94,	// (0x00033685) fep_china_uni_candidate_pane

0x8fa8,	// (0x00033699) fep_china_uni_entry_pane

0x8fb8,	// (0x000336a9) popup_fep_china_uni_window_g1

0x8fd4,	// (0x000336c5) fep_china_uni_entry_pane_g1

0x8fdc,	// (0x000336cd) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00039e13) fep_china_uni_entry_pane_g

0x8fe4,	// (0x000336d5) fep_entry_item_pane

0x8fee,	// (0x000336df) fep_candidate_item_pane

0x8ff6,	// (0x000336e7) fep_china_uni_candidate_pane_g1

0x8ffe,	// (0x000336ef) fep_china_uni_candidate_pane_g2

0x9006,	// (0x000336f7) fep_china_uni_candidate_pane_g3

0x900e,	// (0x000336ff) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00039e18) fep_china_uni_candidate_pane_g

0x7689,	// (0x00031d7a) fep_entry_item_pane_g1

0x9016,	// (0x00033707) fep_entry_item_pane_t1_ParamLimits

0x9016,	// (0x00033707) fep_entry_item_pane_t1

0x902c,	// (0x0003371d) fep_candidate_item_pane_t1_ParamLimits

0x902c,	// (0x0003371d) fep_candidate_item_pane_t1

0x9041,	// (0x00033732) fep_candidate_item_pane_t2_ParamLimits

0x9041,	// (0x00033732) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00039e21) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00039e21) fep_candidate_item_pane_t

0x7fe4,	// (0x000326d5) list_highlight_pane_cp31_ParamLimits

0x7fe4,	// (0x000326d5) list_highlight_pane_cp31

0x9053,	// (0x00033744) level_1_signal_lsc

0x905c,	// (0x0003374d) level_2_signal_lsc

0x9065,	// (0x00033756) level_3_signal_lsc

0x906e,	// (0x0003375f) level_4_signal_lsc

0x9077,	// (0x00033768) level_5_signal_lsc

0x9080,	// (0x00033771) level_6_signal_lsc

0x9089,	// (0x0003377a) level_7_signal_lsc

0x9089,	// (0x0003377a) level_1_battery_lsc

0x9092,	// (0x00033783) level_2_battery_lsc

0x909b,	// (0x0003378c) level_3_battery_lsc

0x90a4,	// (0x00033795) level_4_battery_lsc

0x90ad,	// (0x0003379e) level_5_battery_lsc

0x90b6,	// (0x000337a7) level_6_battery_lsc

0x9053,	// (0x00033744) level_7_battery_lsc

0x90bf,	// (0x000337b0) scroll_handle_focus_pane_g1

0x90c8,	// (0x000337b9) scroll_handle_focus_pane_g2

0x90d1,	// (0x000337c2) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00039e26) scroll_handle_focus_pane_g

0x5763,	// (0x0002fe54) list_single_2graphic_pane_g1_ParamLimits

0x5763,	// (0x0002fe54) list_single_2graphic_pane_g1

0x4e8c,	// (0x0002f57d) list_single_2graphic_pane_g2_ParamLimits

0x4e8c,	// (0x0002f57d) list_single_2graphic_pane_g2

0x4e12,	// (0x0002f503) list_single_2graphic_pane_g3_ParamLimits

0x4e12,	// (0x0002f503) list_single_2graphic_pane_g3

0x576f,	// (0x0002fe60) list_single_2graphic_pane_g4_ParamLimits

0x576f,	// (0x0002fe60) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00039e2d) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00039e2d) list_single_2graphic_pane_g

0x577b,	// (0x0002fe6c) list_single_2graphic_pane_t1_ParamLimits

0x577b,	// (0x0002fe6c) list_single_2graphic_pane_t1

0x57a9,	// (0x0002fe9a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x57a9,	// (0x0002fe9a) list_double2_graphic_large_graphic_pane_g1

0x4f31,	// (0x0002f622) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f31,	// (0x0002f622) list_double2_graphic_large_graphic_pane_g2

0x4f42,	// (0x0002f633) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4f42,	// (0x0002f633) list_double2_graphic_large_graphic_pane_g3

0x57bb,	// (0x0002feac) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x57bb,	// (0x0002feac) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00039e36) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00039e36) list_double2_graphic_large_graphic_pane_g

0x57c7,	// (0x0002feb8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57c7,	// (0x0002feb8) list_double2_graphic_large_graphic_pane_t1

0x57dd,	// (0x0002fece) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x57dd,	// (0x0002fece) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00039e3f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00039e3f) list_double2_graphic_large_graphic_pane_t

0x9218,	// (0x00033909) popup_fast_swap_window_ParamLimits

0x9218,	// (0x00033909) popup_fast_swap_window

0x9234,	// (0x00033925) popup_side_volume_key_window

0x924e,	// (0x0003393f) stacon_top_pane

0x9258,	// (0x00033949) status_pane_ParamLimits

0x9258,	// (0x00033949) status_pane

0x9266,	// (0x00033957) status_small_pane

0x7693,	// (0x00031d84) control_pane

0x7693,	// (0x00031d84) stacon_bottom_pane

0x8821,	// (0x00032f12) scroll_pane_cp121

0x8818,	// (0x00032f09) set_content_pane

0x90da,	// (0x000337cb) bg_active_tab_pane_g1_cp1

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp1

0x90ec,	// (0x000337dd) bg_active_tab_pane_g3_cp1

0x90da,	// (0x000337cb) bg_passive_tab_pane_g1_cp1

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp1

0x90ec,	// (0x000337dd) bg_passive_tab_pane_g3_cp1

0x90f5,	// (0x000337e6) bg_active_tab_pane_g1_cp2

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp2

0x90fe,	// (0x000337ef) bg_active_tab_pane_g3_cp2

0x90f5,	// (0x000337e6) bg_passive_tab_pane_g1_cp2

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp2

0x90fe,	// (0x000337ef) bg_passive_tab_pane_g3_cp2

0x9107,	// (0x000337f8) bg_active_tab_pane_g1_cp3

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp3

0x9110,	// (0x00033801) bg_active_tab_pane_g3_cp3

0x9107,	// (0x000337f8) bg_passive_tab_pane_g1_cp3

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp3

0x9110,	// (0x00033801) bg_passive_tab_pane_g3_cp3

0x9119,	// (0x0003380a) bg_active_tab_pane_g1_cp4

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp4

0x9124,	// (0x00033815) bg_active_tab_pane_g3_cp4

0x9119,	// (0x0003380a) bg_passive_tab_pane_g1_cp4

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp4

0x9124,	// (0x00033815) bg_passive_tab_pane_g3_cp4

0x916d,	// (0x0003385e) bg_active_tab_pane_g1_cp5

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp5

0x9176,	// (0x00033867) bg_active_tab_pane_g3_cp5

0x916d,	// (0x0003385e) bg_passive_tab_pane_g1_cp5

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp5

0x9176,	// (0x00033867) bg_passive_tab_pane_g3_cp5

0x917f,	// (0x00033870) list_set_graphic_pane_ParamLimits

0x917f,	// (0x00033870) list_set_graphic_pane

0x7693,	// (0x00031d84) bg_set_opt_pane_cp4

0x919d,	// (0x0003388e) list_set_graphic_pane_g1_ParamLimits

0x919d,	// (0x0003388e) list_set_graphic_pane_g1

0x91a9,	// (0x0003389a) list_set_graphic_pane_g2_ParamLimits

0x91a9,	// (0x0003389a) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00039e44) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00039e44) list_set_graphic_pane_g

0x0009,

0xfae4,	// (0x0003a1d5) volume_small_pane_cp_g

0x91cb,	// (0x000338bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91cb,	// (0x000338bc) list_double2_large_graphic_pane_g1_cp2

0x91d7,	// (0x000338c8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d7,	// (0x000338c8) list_double2_large_graphic_pane_g2_cp2

0x91e8,	// (0x000338d9) list_double2_large_graphic_pane_g3_cp2

0x91f0,	// (0x000338e1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91f0,	// (0x000338e1) list_double2_large_graphic_pane_t1_cp2

0x9206,	// (0x000338f7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9206,	// (0x000338f7) list_double2_large_graphic_pane_t2_cp2

0xadd7,	// (0x000354c8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd7,	// (0x000354c8) list_double_large_graphic_pane_g1_cp2

0xade8,	// (0x000354d9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade8,	// (0x000354d9) list_double_large_graphic_pane_g2_cp2

0x9397,	// (0x00033a88) list_double_large_graphic_pane_g3_cp2

0xadf9,	// (0x000354ea) list_double_large_graphic_pane_g4_cp

0xae01,	// (0x000354f2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae01,	// (0x000354f2) list_double_large_graphic_pane_t1_cp2

0xae18,	// (0x00035509) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae18,	// (0x00035509) list_double_large_graphic_pane_t2_cp2

0x9271,	// (0x00033962) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9271,	// (0x00033962) list_double2_graphic_pane_g1_cp2

0x927f,	// (0x00033970) list_double2_graphic_pane_g2_cp2_ParamLimits

0x927f,	// (0x00033970) list_double2_graphic_pane_g2_cp2

0x9290,	// (0x00033981) list_double2_graphic_pane_g3_cp2

0x929a,	// (0x0003398b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x929a,	// (0x0003398b) list_double2_graphic_pane_t1_cp2

0x92b0,	// (0x000339a1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92b0,	// (0x000339a1) list_double2_graphic_pane_t2_cp2

0x92c2,	// (0x000339b3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000339b3) list_single_number_heading_pane_g1_cp2

0x92e6,	// (0x000339d7) list_single_number_heading_pane_g2_cp2

0x92ee,	// (0x000339df) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92ee,	// (0x000339df) list_single_number_heading_pane_t1_cp2

0x9304,	// (0x000339f5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9304,	// (0x000339f5) list_single_number_heading_pane_t2_cp2

0x9316,	// (0x00033a07) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9316,	// (0x00033a07) list_single_number_heading_pane_t3_cp2

0x92c2,	// (0x000339b3) list_single_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000339b3) list_single_heading_pane_g1_cp2

0x92e6,	// (0x000339d7) list_single_heading_pane_g2_cp2

0x92ee,	// (0x000339df) list_single_heading_pane_t1_cp2_ParamLimits

0x92ee,	// (0x000339df) list_single_heading_pane_t1_cp2

0xabe1,	// (0x000352d2) list_single_heading_pane_t2_cp2_ParamLimits

0xabe1,	// (0x000352d2) list_single_heading_pane_t2_cp2

0xab29,	// (0x0003521a) list_double_graphic_pane_g1_cp2_ParamLimits

0xab29,	// (0x0003521a) list_double_graphic_pane_g1_cp2

0xab35,	// (0x00035226) list_double_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00035226) list_double_graphic_pane_g2_cp2

0xab44,	// (0x00035235) list_double_graphic_pane_g3_cp2

0xab4c,	// (0x0003523d) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4c,	// (0x0003523d) list_double_graphic_pane_t1_cp2

0xab62,	// (0x00035253) list_double_graphic_pane_t2_cp2_ParamLimits

0xab62,	// (0x00035253) list_double_graphic_pane_t2_cp2

0x938b,	// (0x00033a7c) list_double_number_pane_g1_cp2_ParamLimits

0x938b,	// (0x00033a7c) list_double_number_pane_g1_cp2

0x9397,	// (0x00033a88) list_double_number_pane_g2_cp2

0xaaed,	// (0x000351de) list_double_number_pane_t1_cp2_ParamLimits

0xaaed,	// (0x000351de) list_double_number_pane_t1_cp2

0xab01,	// (0x000351f2) list_double_number_pane_t2_cp2_ParamLimits

0xab01,	// (0x000351f2) list_double_number_pane_t2_cp2

0xab17,	// (0x00035208) list_double_number_pane_t3_cp2_ParamLimits

0xab17,	// (0x00035208) list_double_number_pane_t3_cp2

0xa9d6,	// (0x000350c7) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d6,	// (0x000350c7) list_single_graphic_pane_g1_cp2

0x92ce,	// (0x000339bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x92ce,	// (0x000339bf) list_single_graphic_pane_g2_cp2

0x93ef,	// (0x00033ae0) list_single_graphic_pane_g3_cp2

0xa9ac,	// (0x0003509d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x0003509d) list_single_graphic_pane_t1_cp2

0x92ce,	// (0x000339bf) list_single_number_pane_g1_cp2_ParamLimits

0x92ce,	// (0x000339bf) list_single_number_pane_g1_cp2

0x93ef,	// (0x00033ae0) list_single_number_pane_g2_cp2

0xa9ac,	// (0x0003509d) list_single_number_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x0003509d) list_single_number_pane_t1_cp2

0xa9c2,	// (0x000350b3) list_single_number_pane_t2_cp2_ParamLimits

0xa9c2,	// (0x000350b3) list_single_number_pane_t2_cp2

0x91d7,	// (0x000338c8) list_double2_pane_g1_cp2_ParamLimits

0x91d7,	// (0x000338c8) list_double2_pane_g1_cp2

0x91e8,	// (0x000338d9) list_double2_pane_g2_cp2

0x9363,	// (0x00033a54) list_double2_pane_t1_cp2_ParamLimits

0x9363,	// (0x00033a54) list_double2_pane_t1_cp2

0x9379,	// (0x00033a6a) list_double2_pane_t2_cp2_ParamLimits

0x9379,	// (0x00033a6a) list_double2_pane_t2_cp2

0x938b,	// (0x00033a7c) list_double_pane_g1_cp2_ParamLimits

0x938b,	// (0x00033a7c) list_double_pane_g1_cp2

0x9397,	// (0x00033a88) list_double_pane_g2_cp2

0x939f,	// (0x00033a90) list_double_pane_t1_cp2_ParamLimits

0x939f,	// (0x00033a90) list_double_pane_t1_cp2

0x93b5,	// (0x00033aa6) list_double_pane_t2_cp2_ParamLimits

0x93b5,	// (0x00033aa6) list_double_pane_t2_cp2

0x93df,	// (0x00033ad0) list_single_pane_cp2_g3

0x92ce,	// (0x000339bf) list_single_pane_g1_cp2_ParamLimits

0x92ce,	// (0x000339bf) list_single_pane_g1_cp2

0x93ef,	// (0x00033ae0) list_single_pane_g2_cp2

0x93f7,	// (0x00033ae8) list_single_pane_t1_cp2_ParamLimits

0x93f7,	// (0x00033ae8) list_single_pane_t1_cp2

0x940f,	// (0x00033b00) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x940f,	// (0x00033b00) list_single_large_graphic_pane_g1_cp2

0x941b,	// (0x00033b0c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x941b,	// (0x00033b0c) list_single_large_graphic_pane_g2_cp2

0x9427,	// (0x00033b18) list_single_large_graphic_pane_g3_cp2

0x942f,	// (0x00033b20) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x942f,	// (0x00033b20) list_single_large_graphic_pane_g4_cp1

0x9449,	// (0x00033b3a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9449,	// (0x00033b3a) list_single_large_graphic_pane_t1_cp2

0xa978,	// (0x00035069) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa978,	// (0x00035069) list_single_graphic_heading_pane_g1_cp2

0xa945,	// (0x00035036) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa945,	// (0x00035036) list_single_graphic_heading_pane_g4_cp2

0x93ef,	// (0x00033ae0) list_single_graphic_heading_pane_g5_cp2

0xa984,	// (0x00035075) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa984,	// (0x00035075) list_single_graphic_heading_pane_t1_cp2

0xa99a,	// (0x0003508b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa99a,	// (0x0003508b) list_single_graphic_heading_pane_t2_cp2

0xa939,	// (0x0003502a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa939,	// (0x0003502a) list_single_2graphic_pane_g1_cp2

0xa945,	// (0x00035036) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa945,	// (0x00035036) list_single_2graphic_pane_g2_cp2

0x93ef,	// (0x00033ae0) list_single_2graphic_pane_g3_cp2

0xa956,	// (0x00035047) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa956,	// (0x00035047) list_single_2graphic_pane_g4_cp2

0xa962,	// (0x00035053) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa962,	// (0x00035053) list_single_2graphic_pane_t1_cp2

0x7689,	// (0x00031d7a) list_highlight_pane_g10_cp1

0xa511,	// (0x00034c02) list_highlight_pane_g1_cp1

0xa519,	// (0x00034c0a) list_highlight_pane_g2_cp1

0xa521,	// (0x00034c12) list_highlight_pane_g3_cp1

0xa529,	// (0x00034c1a) list_highlight_pane_g4_cp1

0xa531,	// (0x00034c22) list_highlight_pane_g5_cp1

0xa539,	// (0x00034c2a) list_highlight_pane_g6_cp1

0xa541,	// (0x00034c32) list_highlight_pane_g7_cp1

0xa549,	// (0x00034c3a) list_highlight_pane_g8_cp1

0xa551,	// (0x00034c42) list_highlight_pane_g9_cp1

0xa429,	// (0x00034b1a) form_field_slider_pane_t3

0xa437,	// (0x00034b28) form_field_slider_pane_t4

0xa445,	// (0x00034b36) slider_form_pane_ParamLimits

0xa445,	// (0x00034b36) slider_form_pane

0x7693,	// (0x00031d84) control_abbreviations

0x7693,	// (0x00031d84) control_conventions

0x7693,	// (0x00031d84) control_definitions

0x7693,	// (0x00031d84) format_table_attribute

0xac2b,	// (0x0003531c) bg_popup_preview_window_pane_g9

0x7693,	// (0x00031d84) format_table_data2

0x7693,	// (0x00031d84) format_table_data3

0x7693,	// (0x00031d84) format_table_data_example

0x0008,

0x7693,	// (0x00031d84) intro_purpose

0xf8ef,	// (0x00039fe0) bg_popup_preview_window_pane_g

0x7693,	// (0x00031d84) texts_category

0x7693,	// (0x00031d84) texts_graphics

0x945f,	// (0x00033b50) text_digital

0x946e,	// (0x00033b5f) text_primary

0x947d,	// (0x00033b6e) text_primary_small

0x948c,	// (0x00033b7d) text_secondary

0x949b,	// (0x00033b8c) text_title

0xb2fa,	// (0x000359eb) bg_passive_tab_pane_g1_cp3_srt

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp3_srt

0xb303,	// (0x000359f4) bg_passive_tab_pane_g3_cp3_srt

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp3_srt

0xb30c,	// (0x000359fd) tabs_4_active_pane_srt_g1

0xb314,	// (0x00035a05) tabs_4_active_pane_srt_t1_ParamLimits

0xb314,	// (0x00035a05) tabs_4_active_pane_srt_t1

0xb2fa,	// (0x000359eb) bg_active_tab_pane_g1_cp3_copy1

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp3_copy1

0xb303,	// (0x000359f4) bg_active_tab_pane_g3_cp3_copy1

0x7fe4,	// (0x000326d5) tabs_2_long_active_pane_srt_ParamLimits

0x7fe4,	// (0x000326d5) tabs_2_long_active_pane_srt

0x7fe4,	// (0x000326d5) tabs_2_long_passive_pane_srt_ParamLimits

0x7fe4,	// (0x000326d5) tabs_2_long_passive_pane_srt

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp4_srt

0xb05a,	// (0x0003574b) bg_passive_tab_pane_g1_cp4_srt

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp4_srt

0xb063,	// (0x00035754) bg_passive_tab_pane_g3_cp4_srt

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp4_srt

0xb06c,	// (0x0003575d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb06c,	// (0x0003575d) tabs_2_long_active_pane_srt_t1

0xb05a,	// (0x0003574b) bg_active_tab_pane_g1_cp4_srt

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp4_srt

0xb063,	// (0x00035754) bg_active_tab_pane_g3_cp4_srt

0x825f,	// (0x00032950) tabs_3_long_active_pane_srt_ParamLimits

0x825f,	// (0x00032950) tabs_3_long_active_pane_srt

0x825f,	// (0x00032950) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x825f,	// (0x00032950) tabs_3_long_passive_pane_cp_srt

0x825f,	// (0x00032950) tabs_3_long_passive_pane_srt_ParamLimits

0x825f,	// (0x00032950) tabs_3_long_passive_pane_srt

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp5_srt

0x916d,	// (0x0003385e) bg_passive_tab_pane_g1_cp5_srt

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp5_srt

0x9176,	// (0x00033867) bg_passive_tab_pane_g3_cp5_srt

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp5_srt

0xb048,	// (0x00035739) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb048,	// (0x00035739) tabs_3_long_active_pane_srt_t1

0x916d,	// (0x0003385e) bg_active_tab_pane_g1_cp5_srt

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp5_srt

0x9176,	// (0x00033867) bg_active_tab_pane_g3_cp5_srt

0xb03a,	// (0x0003572b) navi_text_pane_srt_t1

0xb032,	// (0x00035723) navi_icon_pane_srt_g1

0x9660,	// (0x00033d51) midp_editing_number_pane_srt

0x94aa,	// (0x00033b9b) midp_ticker_pane_srt

0x9668,	// (0x00033d59) midp_ticker_pane_srt_g1

0x9670,	// (0x00033d61) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00039e63) midp_ticker_pane_srt_g

0x9678,	// (0x00033d69) midp_ticker_pane_srt_t1

0xb023,	// (0x00035714) midp_editing_number_pane_t1_copy1

0x8a20,	// (0x00033111) listscroll_midp_pane

0x8a20,	// (0x00033111) midp_form_pane

0x9518,	// (0x00033c09) midp_info_popup_window_ParamLimits

0x9518,	// (0x00033c09) midp_info_popup_window

0x88ea,	// (0x00032fdb) bg_popup_sub_pane_cp50_ParamLimits

0x88ea,	// (0x00032fdb) bg_popup_sub_pane_cp50

0xa146,	// (0x00034837) listscroll_midp_info_pane_ParamLimits

0xa146,	// (0x00034837) listscroll_midp_info_pane

0xa12e,	// (0x0003481f) listscroll_form_midp_pane_ParamLimits

0xa12e,	// (0x0003481f) listscroll_form_midp_pane

0xa13a,	// (0x0003482b) scroll_bar_cp050

0xa10e,	// (0x000347ff) list_midp_pane

0xbd2e,	// (0x0003641f) signal_pane_g2_cp

0xa048,	// (0x00034739) listscroll_midp_info_pane_t1_ParamLimits

0xa048,	// (0x00034739) listscroll_midp_info_pane_t1

0xa060,	// (0x00034751) listscroll_midp_info_pane_t2_ParamLimits

0xa060,	// (0x00034751) listscroll_midp_info_pane_t2

0xa09e,	// (0x0003478f) listscroll_midp_info_pane_t3_ParamLimits

0xa09e,	// (0x0003478f) listscroll_midp_info_pane_t3

0xa0d8,	// (0x000347c9) listscroll_midp_info_pane_t4_ParamLimits

0xa0d8,	// (0x000347c9) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00039f1b) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00039f1b) listscroll_midp_info_pane_t

0x89ac,	// (0x0003309d) scroll_pane_cp21

0x9fea,	// (0x000346db) form_midp_field_choice_group_pane

0x9ff3,	// (0x000346e4) form_midp_field_text_pane

0xa02e,	// (0x0003471f) form_midp_field_time_pane

0xa036,	// (0x00034727) form_midp_gauge_slider_pane

0xa03f,	// (0x00034730) form_midp_gauge_wait_pane

0x7693,	// (0x00031d84) form_midp_image_pane

0x6307,	// (0x000309f8) list_single_midp_pane_ParamLimits

0x6307,	// (0x000309f8) list_single_midp_pane

0x9f9e,	// (0x0003468f) form_midp_field_text_pane_t1

0x9d56,	// (0x00034447) input_focus_pane_cp050

0x9fd9,	// (0x000346ca) list_midp_form_text_pane

0x9f6d,	// (0x0003465e) form_midp_field_choice_group_pane_t1

0x9f7b,	// (0x0003466c) input_focus_pane_cp051

0x9f8f,	// (0x00034680) list_midp_choice_pane

0x7693,	// (0x00031d84) status_idle_pane

0x9f51,	// (0x00034642) form_midp_field_time_pane_t1

0x7689,	// (0x00031d7a) wait_anim_pane_g2_copy1

0x9f5f,	// (0x00034650) form_midp_field_time_pane_t2

0x0001,

0x95c8,	// (0x00033cb9) aid_navinavi_width_2_pane

0xf825,	// (0x00039f16) form_midp_field_time_pane_t

0x7693,	// (0x00031d84) input_focus_pane_cp052

0x7693,	// (0x00031d84) bg_input_focus_pane_cp040

0x9f11,	// (0x00034602) form_midp_gauge_slider_pane_t1

0x9f1f,	// (0x00034610) form_midp_gauge_slider_pane_t2

0x9f2d,	// (0x0003461e) form_midp_gauge_slider_pane_t3

0x9f3b,	// (0x0003462c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00039f0d) form_midp_gauge_slider_pane_t

0x9f49,	// (0x0003463a) form_midp_slider_pane

0x7fe4,	// (0x000326d5) bg_input_focus_pane_cp041_ParamLimits

0x7fe4,	// (0x000326d5) bg_input_focus_pane_cp041

0x9ede,	// (0x000345cf) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ede,	// (0x000345cf) form_midp_gauge_wait_pane_t1

0x9ef0,	// (0x000345e1) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef0,	// (0x000345e1) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00039f08) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00039f08) form_midp_gauge_wait_pane_t

0x9f02,	// (0x000345f3) form_midp_wait_pane_ParamLimits

0x9f02,	// (0x000345f3) form_midp_wait_pane

0x9ea8,	// (0x00034599) form_midp_image_pane_g1

0x9eb1,	// (0x000345a2) form_midp_image_pane_t1

0x9ec0,	// (0x000345b1) form_midp_image_pane_t2

0x9ecf,	// (0x000345c0) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00039f01) form_midp_image_pane_t

0x9e9f,	// (0x00034590) list_single_midp_pane_g1

0x62f8,	// (0x000309e9) list_single_midp_pane_t1

0x9e70,	// (0x00034561) list_midp_form_item_pane_ParamLimits

0x9e70,	// (0x00034561) list_midp_form_item_pane

0x9570,	// (0x00033c61) list_midp_form_item_pane_t1

0x957f,	// (0x00033c70) midp_ticker_pane_g1

0x958b,	// (0x00033c7c) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00039e49) midp_ticker_pane_g

0x9597,	// (0x00033c88) midp_ticker_pane_t1

0xb266,	// (0x00035957) midp_editing_number_pane_t1

0xb244,	// (0x00035935) midp_editing_number_pane

0xb253,	// (0x00035944) midp_ticker_pane

0xb013,	// (0x00035704) ai_message_heading_pane

0x7693,	// (0x00031d84) bg_popup_window_pane_cp14

0xb01b,	// (0x0003570c) listscroll_ai_message_pane

0xaf9d,	// (0x0003568e) ai_message_heading_pane_g1_ParamLimits

0xaf9d,	// (0x0003568e) ai_message_heading_pane_g1

0xafa9,	// (0x0003569a) ai_message_heading_pane_g2_ParamLimits

0xafa9,	// (0x0003569a) ai_message_heading_pane_g2

0xafb5,	// (0x000356a6) ai_message_heading_pane_g3_ParamLimits

0xafb5,	// (0x000356a6) ai_message_heading_pane_g3

0xafc1,	// (0x000356b2) ai_message_heading_pane_g4_ParamLimits

0xafc1,	// (0x000356b2) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a042) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a042) ai_message_heading_pane_g

0xafcd,	// (0x000356be) ai_message_heading_pane_t1_ParamLimits

0xafcd,	// (0x000356be) ai_message_heading_pane_t1

0xafe7,	// (0x000356d8) ai_message_heading_pane_t2_ParamLimits

0xafe7,	// (0x000356d8) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a04b) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a04b) ai_message_heading_pane_t

0xaff9,	// (0x000356ea) bg_popup_heading_pane_cp1_ParamLimits

0xaff9,	// (0x000356ea) bg_popup_heading_pane_cp1

0xaf8b,	// (0x0003567c) list_ai_message_pane_ParamLimits

0xaf8b,	// (0x0003567c) list_ai_message_pane

0x89ac,	// (0x0003309d) scroll_pane_cp10

0xaf27,	// (0x00035618) list_ai_message_pane_g1

0xaf2f,	// (0x00035620) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a01f) list_ai_message_pane_g

0xaf37,	// (0x00035628) list_ai_message_pane_t1_ParamLimits

0xaf37,	// (0x00035628) list_ai_message_pane_t1

0xaf4c,	// (0x0003563d) list_ai_message_pane_t2_ParamLimits

0xaf4c,	// (0x0003563d) list_ai_message_pane_t2

0xaf61,	// (0x00035652) list_ai_message_pane_t3_ParamLimits

0xaf61,	// (0x00035652) list_ai_message_pane_t3

0xaf76,	// (0x00035667) list_ai_message_pane_t4_ParamLimits

0xaf76,	// (0x00035667) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a024) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a024) list_ai_message_pane_t

0xaf11,	// (0x00035602) cell_ai_soft_ind_pane_ParamLimits

0xaf11,	// (0x00035602) cell_ai_soft_ind_pane

0x95a9,	// (0x00033c9a) cell_ai_soft_ind_pane_g1_ParamLimits

0x95a9,	// (0x00033c9a) cell_ai_soft_ind_pane_g1

0x7693,	// (0x00031d84) grid_highlight_cp1

0x95b6,	// (0x00033ca7) text_secondary_cp56_ParamLimits

0x95b6,	// (0x00033ca7) text_secondary_cp56

0xaee6,	// (0x000355d7) example_general_pane_ParamLimits

0xaee6,	// (0x000355d7) example_general_pane

0xaef2,	// (0x000355e3) example_parent_pane_g1_ParamLimits

0xaef2,	// (0x000355e3) example_parent_pane_g1

0xaefe,	// (0x000355ef) example_parent_pane_t1_ParamLimits

0xaefe,	// (0x000355ef) example_parent_pane_t1

0x5ed0,	// (0x000305c1) popup_preview_text_window_ParamLimits

0x5ed0,	// (0x000305c1) popup_preview_text_window

0x93e7,	// (0x00033ad8) list_single_pane_cp2_g4

0x8309,	// (0x000329fa) bg_popup_preview_window_pane_ParamLimits

0x8309,	// (0x000329fa) bg_popup_preview_window_pane

0xac33,	// (0x00035324) popup_preview_text_window_t1_ParamLimits

0xac33,	// (0x00035324) popup_preview_text_window_t1

0xac51,	// (0x00035342) popup_preview_text_window_t2_ParamLimits

0xac51,	// (0x00035342) popup_preview_text_window_t2

0xac9a,	// (0x0003538b) popup_preview_text_window_t3_ParamLimits

0xac9a,	// (0x0003538b) popup_preview_text_window_t3

0xacdf,	// (0x000353d0) popup_preview_text_window_t4_ParamLimits

0xacdf,	// (0x000353d0) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00039ff3) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00039ff3) popup_preview_text_window_t

0xad5d,	// (0x0003544e) scroll_pane_cp11

0x9ce2,	// (0x000343d3) bg_popup_preview_window_pane_g1

0xabf3,	// (0x000352e4) bg_popup_preview_window_pane_g2

0xabfb,	// (0x000352ec) bg_popup_preview_window_pane_g3

0xac03,	// (0x000352f4) bg_popup_preview_window_pane_g4

0xac0b,	// (0x000352fc) bg_popup_preview_window_pane_g5

0xac13,	// (0x00035304) bg_popup_preview_window_pane_g6

0xac1b,	// (0x0003530c) bg_popup_preview_window_pane_g7

0xac23,	// (0x00035314) bg_popup_preview_window_pane_g8

0x4970,	// (0x0002f061) aid_popup_width_pane

0x5eae,	// (0x0003059f) popup_midp_note_alarm_window_ParamLimits

0x5eae,	// (0x0003059f) popup_midp_note_alarm_window

0x8832,	// (0x00032f23) data_form_pane_ParamLimits

0x5335,	// (0x0002fa26) form_field_data_pane_g1

0x533f,	// (0x0002fa30) form_field_data_pane_t1_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_ParamLimits

0x5359,	// (0x0002fa4a) data_form_wide_pane_ParamLimits

0x536a,	// (0x0002fa5b) form_field_data_wide_pane_g1

0x5376,	// (0x0002fa67) form_field_data_wide_pane_t1_ParamLimits

0x85af,	// (0x00032ca0) input_focus_pane_cp6_ParamLimits

0x8957,	// (0x00033048) input_popup_find_pane_g1_ParamLimits

0x8957,	// (0x00033048) input_popup_find_pane_g1

0x55cd,	// (0x0002fcbe) aid_navi_side_left_pane

0x55e2,	// (0x0002fcd3) aid_navi_side_right_pane

0xa60c,	// (0x00034cfd) bg_popup_window_pane_cp30_ParamLimits

0xa60c,	// (0x00034cfd) bg_popup_window_pane_cp30

0xa686,	// (0x00034d77) popup_midp_note_alarm_window_g1_ParamLimits

0xa686,	// (0x00034d77) popup_midp_note_alarm_window_g1

0xa6b6,	// (0x00034da7) popup_midp_note_alarm_window_t1_ParamLimits

0xa6b6,	// (0x00034da7) popup_midp_note_alarm_window_t1

0xa757,	// (0x00034e48) popup_midp_note_alarm_window_t2_ParamLimits

0xa757,	// (0x00034e48) popup_midp_note_alarm_window_t2

0xa805,	// (0x00034ef6) popup_midp_note_alarm_window_t3_ParamLimits

0xa805,	// (0x00034ef6) popup_midp_note_alarm_window_t3

0xa837,	// (0x00034f28) popup_midp_note_alarm_window_t4_ParamLimits

0xa837,	// (0x00034f28) popup_midp_note_alarm_window_t4

0xa85d,	// (0x00034f4e) popup_midp_note_alarm_window_t5_ParamLimits

0xa85d,	// (0x00034f4e) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00039f90) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00039f90) popup_midp_note_alarm_window_t

0xa909,	// (0x00034ffa) wait_bar_pane_cp1_ParamLimits

0xa909,	// (0x00034ffa) wait_bar_pane_cp1

0x7693,	// (0x00031d84) wait_anim_pane_copy1

0x7693,	// (0x00031d84) wait_border_pane_copy1

0xa2ea,	// (0x000349db) wait_border_pane_g1_copy1

0x5390,	// (0x0002fa81) form_field_popup_pane_g1

0x5398,	// (0x0002fa89) form_field_popup_pane_t1_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_cp7_ParamLimits

0x886c,	// (0x00032f5d) list_form_pane_ParamLimits

0x53b2,	// (0x0002faa3) form_field_popup_wide_pane_g1

0x53ba,	// (0x0002faab) form_field_popup_wide_pane_t1_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_cp8_ParamLimits

0x8878,	// (0x00032f69) list_form_wide_pane_ParamLimits

0xb38f,	// (0x00035a80) aid_size_cell_graphic_pane

0x543f,	// (0x0002fb30) data_form_pane_t1_ParamLimits

0x779b,	// (0x00031e8c) data_form_wide_pane_t1_ParamLimits

0x98b7,	// (0x00033fa8) bg_status_flat_pane

0x76d3,	// (0x00031dc4) title_pane_t1_ParamLimits

0x773b,	// (0x00031e2c) title_pane_t2_ParamLimits

0x7761,	// (0x00031e52) title_pane_t3_ParamLimits

0xf557,	// (0x00039c48) title_pane_t_ParamLimits

0x8e27,	// (0x00033518) level_1_signal_ParamLimits

0x8e34,	// (0x00033525) level_2_signal_ParamLimits

0x8e41,	// (0x00033532) level_3_signal_ParamLimits

0x8e4e,	// (0x0003353f) level_4_signal_ParamLimits

0x8e5b,	// (0x0003354c) level_5_signal_ParamLimits

0x8e68,	// (0x00033559) level_6_signal_ParamLimits

0x8e75,	// (0x00033566) level_7_signal_ParamLimits

0x8e27,	// (0x00033518) level_1_battery_ParamLimits

0x8e34,	// (0x00033525) level_2_battery_ParamLimits

0x8e41,	// (0x00033532) level_3_battery_ParamLimits

0x8e4e,	// (0x0003353f) level_4_battery_ParamLimits

0x8e5b,	// (0x0003354c) level_5_battery_ParamLimits

0x8e68,	// (0x00033559) level_6_battery_ParamLimits

0x8e75,	// (0x00033566) level_7_battery_ParamLimits

0xa511,	// (0x00034c02) bg_status_flat_pane_g1

0xa519,	// (0x00034c0a) bg_status_flat_pane_g2

0xa521,	// (0x00034c12) bg_status_flat_pane_g3

0xa529,	// (0x00034c1a) bg_status_flat_pane_g4

0xa531,	// (0x00034c22) bg_status_flat_pane_g5

0xa539,	// (0x00034c2a) bg_status_flat_pane_g6

0xa541,	// (0x00034c32) bg_status_flat_pane_g7

0x7ffa,	// (0x000326eb) tabs_3_active_pane_t1_ParamLimits

0x7ffa,	// (0x000326eb) tabs_3_passive_pane_t1_ParamLimits

0x8014,	// (0x00032705) tabs_4_active_pane_t1_ParamLimits

0x8014,	// (0x00032705) tabs_4_1_passive_pane_t1_ParamLimits

0x89ed,	// (0x000330de) tabs_2_active_pane_t1_ParamLimits

0x89ed,	// (0x000330de) tabs_2_passive_pane_t1_ParamLimits

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp4_ParamLimits

0x8a0d,	// (0x000330fe) tabs_2_long_active_pane_t1_ParamLimits

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp4_ParamLimits

0x61d5,	// (0x000308c6) list_single_midp_graphic_pane_t1_ParamLimits

0x89ff,	// (0x000330f0) bg_active_tab_pane_cp5_ParamLimits

0x8a2c,	// (0x0003311d) tabs_3_long_active_pane_t1_ParamLimits

0x8a20,	// (0x00033111) bg_passive_tab_pane_cp5_ParamLimits

0x61d5,	// (0x000308c6) list_single_midp_graphic_pane_t1

0x98b7,	// (0x00033fa8) bg_status_flat_pane_ParamLimits

0x997a,	// (0x0003406b) indicator_pane_cp2_ParamLimits

0x997a,	// (0x0003406b) indicator_pane_cp2

0x9aa5,	// (0x00034196) navi_pane_srt_ParamLimits

0x9aa5,	// (0x00034196) navi_pane_srt

0x9ac9,	// (0x000341ba) popup_clock_digital_analogue_window_cp1

0x80c1,	// (0x000327b2) indicator_pane_t1

0x94aa,	// (0x00033b9b) copy_highlight_pane

0x94aa,	// (0x00033b9b) cursor_graphics_pane

0x94aa,	// (0x00033b9b) graphic_within_text_pane

0x94aa,	// (0x00033b9b) link_highlight_pane

0xad20,	// (0x00035411) popup_preview_text_window_t5_ParamLimits

0xad20,	// (0x00035411) popup_preview_text_window_t5

0x95d0,	// (0x00033cc1) cursor_digital_pane

0x95d0,	// (0x00033cc1) cursor_primary_pane

0x95e1,	// (0x00033cd2) cursor_primary_small_pane

0x95e9,	// (0x00033cda) cursor_secondary_pane

0x95f1,	// (0x00033ce2) cursor_title_pane

0x95d0,	// (0x00033cc1) link_highlight_digital_pane

0x95d8,	// (0x00033cc9) link_highlight_primary_pane

0x95e1,	// (0x00033cd2) link_highlight_primary_small_pane

0x95e9,	// (0x00033cda) link_highlight_secondary_pane

0x95f1,	// (0x00033ce2) link_highlight_title_pane

0x95d0,	// (0x00033cc1) copy_highlight_digital_pane

0x95d0,	// (0x00033cc1) copy_highlight_primary_pane

0x95e1,	// (0x00033cd2) copy_highlight_primary_small_pane

0x95e9,	// (0x00033cda) copy_highlight_secondary_pane

0x95f1,	// (0x00033ce2) copy_highlight_title_pane

0x95e9,	// (0x00033cda) graphic_text_digital_pane

0xa5af,	// (0x00034ca0) graphic_text_primary_pane

0xa5b8,	// (0x00034ca9) graphic_text_primary_small_pane

0x95e1,	// (0x00033cd2) graphic_text_secondary_pane

0x95d0,	// (0x00033cc1) graphic_text_title_pane

0x95f9,	// (0x00033cea) cursor_primary_pane_g1

0xa5a1,	// (0x00034c92) cursor_text_primary_t1

0xa589,	// (0x00034c7a) cursor_primary_small_pane_g1

0xa593,	// (0x00034c84) cursor_text_primary_small_t1

0xa571,	// (0x00034c62) cursor_primary_small_pane_g1_copy1

0xa57b,	// (0x00034c6c) cursor_text_primary_small_t1_copy1

0xa559,	// (0x00034c4a) cursor_text_title_t1

0xa567,	// (0x00034c58) cursor_title_pane_g1

0x95f9,	// (0x00033cea) cursor_digital_pane_g1

0x9603,	// (0x00033cf4) cursor_text_digital_t1

0xa4fa,	// (0x00034beb) link_highlight_primary_pane_g1

0xa502,	// (0x00034bf3) link_highlight_primary_pane_t1

0x9611,	// (0x00033d02) link_highlight_primary_small_pane_g1

0x9619,	// (0x00033d0a) link_highlight_primary_small_pane_t1

0x9611,	// (0x00033d02) link_highlight_secondary_pane_g1

0x9628,	// (0x00033d19) link_highlight_secondary_pane_t1

0xa46e,	// (0x00034b5f) link_highlight_title_pane_g1

0xa476,	// (0x00034b67) link_highlight_title_pane_t1

0xa457,	// (0x00034b48) link_highlight_digital_pane_g1

0xa45f,	// (0x00034b50) link_highlight_digital_pane_t1

0xa32f,	// (0x00034a20) copy_highlight_primary_pane_g1

0xa337,	// (0x00034a28) copy_highlight_primary_pane_t1

0xa309,	// (0x000349fa) copy_highlight_primary_small_pane_g1

0xa320,	// (0x00034a11) copy_highlight_primary_small_pane_t1

0x9637,	// (0x00033d28) copy_highlight_secondary_pane_g1

0x963f,	// (0x00033d30) copy_highlight_secondary_pane_t1

0xa309,	// (0x000349fa) copy_highlight_title_pane_g1

0xa311,	// (0x00034a02) copy_highlight_title_pane_t1

0xa32f,	// (0x00034a20) copy_highlight_digital_pane_g1

0xb559,	// (0x00035c4a) copy_highlight_digital_pane_t1

0xb4ad,	// (0x00035b9e) graphic_text_primary_pane_g1

0xb53d,	// (0x00035c2e) graphic_text_primary_pane_t1

0xb54b,	// (0x00035c3c) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a0bf) graphic_text_primary_pane_t

0xb519,	// (0x00035c0a) graphic_text_primary_small_pane_g1

0xb521,	// (0x00035c12) graphic_text_primary_small_pane_t1

0xb52f,	// (0x00035c20) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a0ba) graphic_text_primary_small_pane_t

0xb4f5,	// (0x00035be6) graphic_text_secondary_pane_g1

0xb4fd,	// (0x00035bee) graphic_text_secondary_pane_t1

0xb50b,	// (0x00035bfc) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a0b5) graphic_text_secondary_pane_t

0xb4d1,	// (0x00035bc2) graphic_text_title_pane_g1

0xb4d9,	// (0x00035bca) graphic_text_title_pane_t1

0xb4e7,	// (0x00035bd8) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a0b0) graphic_text_title_pane_t

0xb4ad,	// (0x00035b9e) graphic_text_digital_pane_g1

0xb4b5,	// (0x00035ba6) graphic_text_digital_pane_t1

0xb4c3,	// (0x00035bb4) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a0ab) graphic_text_digital_pane_t

0x7fe4,	// (0x000326d5) navi_icon_pane_srt_ParamLimits

0x7fe4,	// (0x000326d5) navi_icon_pane_srt

0x7693,	// (0x00031d84) navi_midp_pane_srt

0x7693,	// (0x00031d84) navi_navi_pane_srt

0x7fe4,	// (0x000326d5) navi_text_pane_srt_ParamLimits

0x7fe4,	// (0x000326d5) navi_text_pane_srt

0xb478,	// (0x00035b69) navi_navi_icon_text_pane_srt

0xb480,	// (0x00035b71) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x00035b71) navi_navi_pane_srt_g1

0xb492,	// (0x00035b83) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x00035b83) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a0a6) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a0a6) navi_navi_pane_srt_g

0xb4a4,	// (0x00035b95) navi_navi_tabs_pane_srt

0xb478,	// (0x00035b69) navi_navi_text_pane_srt

0xb478,	// (0x00035b69) navi_navi_volume_pane_srt

0xb469,	// (0x00035b5a) navi_navi_text_pane_srt_t1

0x6602,	// (0x00030cf3) navi_navi_volume_pane_srt_g1

0x660a,	// (0x00030cfb) volume_small_pane_srt_ParamLimits

0x660a,	// (0x00030cfb) volume_small_pane_srt

0x5930,	// (0x00030021) volume_small_pane_srt_g1_ParamLimits

0x5930,	// (0x00030021) volume_small_pane_srt_g1

0x5940,	// (0x00030031) volume_small_pane_srt_g2_ParamLimits

0x5940,	// (0x00030031) volume_small_pane_srt_g2

0x5951,	// (0x00030042) volume_small_pane_srt_g3_ParamLimits

0x5951,	// (0x00030042) volume_small_pane_srt_g3

0x5962,	// (0x00030053) volume_small_pane_srt_g4_ParamLimits

0x5962,	// (0x00030053) volume_small_pane_srt_g4

0x5973,	// (0x00030064) volume_small_pane_srt_g5_ParamLimits

0x5973,	// (0x00030064) volume_small_pane_srt_g5

0x5984,	// (0x00030075) volume_small_pane_srt_g6_ParamLimits

0x5984,	// (0x00030075) volume_small_pane_srt_g6

0x5995,	// (0x00030086) volume_small_pane_srt_g7_ParamLimits

0x5995,	// (0x00030086) volume_small_pane_srt_g7

0x59a6,	// (0x00030097) volume_small_pane_srt_g8_ParamLimits

0x59a6,	// (0x00030097) volume_small_pane_srt_g8

0x59b7,	// (0x000300a8) volume_small_pane_srt_g9_ParamLimits

0x59b7,	// (0x000300a8) volume_small_pane_srt_g9

0x59c8,	// (0x000300b9) volume_small_pane_srt_g10_ParamLimits

0x59c8,	// (0x000300b9) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00039e4e) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00039e4e) volume_small_pane_srt_g

0x83b2,	// (0x00032aa3) query_popup_data_pane_cp2

0xb44f,	// (0x00035b40) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x00035b40) navi_navi_icon_text_pane_srt_t1

0xa5af,	// (0x00034ca0) navi_tabs_2_long_pane_srt

0xa5af,	// (0x00034ca0) navi_tabs_2_pane_srt

0xa5af,	// (0x00034ca0) navi_tabs_3_long_pane_srt

0xa5af,	// (0x00034ca0) navi_tabs_3_pane_srt

0xa5af,	// (0x00034ca0) navi_tabs_4_pane_srt

0x65e2,	// (0x00030cd3) tabs_2_active_pane_srt_ParamLimits

0x65e2,	// (0x00030cd3) tabs_2_active_pane_srt

0x65f2,	// (0x00030ce3) tabs_2_passive_pane_srt_ParamLimits

0x65f2,	// (0x00030ce3) tabs_2_passive_pane_srt

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x00035b0c) bg_passive_tab_pane_g1_cp1_srt

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x00035b15) bg_passive_tab_pane_g3_cp1_srt

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x00035b1e) tabs_2_active_pane_srt_g1

0xb435,	// (0x00035b26) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x00035b26) tabs_2_active_pane_srt_t1

0xb41b,	// (0x00035b0c) bg_active_tab_pane_g1_cp1_srt

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x00035b15) bg_active_tab_pane_g3_cp1_srt

0x65af,	// (0x00030ca0) tabs_3_active_pane_srt_ParamLimits

0x65af,	// (0x00030ca0) tabs_3_active_pane_srt

0x65c0,	// (0x00030cb1) tabs_3_passive_pane_cp_srt_ParamLimits

0x65c0,	// (0x00030cb1) tabs_3_passive_pane_cp_srt

0x65d1,	// (0x00030cc2) tabs_3_passive_pane_srt_ParamLimits

0x65d1,	// (0x00030cc2) tabs_3_passive_pane_srt

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97e4,	// (0x00033ed5) bg_passive_tab_pane_cp2_srt

0x964e,	// (0x00033d3f) bg_passive_tab_pane_g1_cp2_srt

0x90e3,	// (0x000337d4) bg_passive_tab_pane_g2_cp2_srt

0x9657,	// (0x00033d48) bg_passive_tab_pane_g3_cp2_srt

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fe4,	// (0x000326d5) bg_active_tab_pane_cp2_srt

0xb401,	// (0x00035af2) tabs_3_active_pane_srt_g1

0xb409,	// (0x00035afa) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x00035afa) tabs_3_active_pane_srt_t1

0x964e,	// (0x00033d3f) bg_active_tab_pane_g1_cp2_srt

0x90e3,	// (0x000337d4) bg_active_tab_pane_g2_cp2_srt

0x9657,	// (0x00033d48) bg_active_tab_pane_g3_cp2_srt

0x6567,	// (0x00030c58) tabs_4_active_pane_srt_ParamLimits

0x6567,	// (0x00030c58) tabs_4_active_pane_srt

0x6579,	// (0x00030c6a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6579,	// (0x00030c6a) tabs_4_passive_pane_cp2_srt

0x5b2b,	// (0x0003021c) aid_size_cell_toolbar

0x8a20,	// (0x00033111) main_idle_act_pane_ParamLimits

0x5ce2,	// (0x000303d3) popup_large_graphic_colour_window_ParamLimits

0x6047,	// (0x00030738) popup_toolbar_window_ParamLimits

0x6047,	// (0x00030738) popup_toolbar_window

0xb275,	// (0x00035966) list_single_graphic_2heading_pane_ParamLimits

0xb275,	// (0x00035966) list_single_graphic_2heading_pane

0x8bd9,	// (0x000332ca) aid_size_cell_apps_grid_lsc_pane

0x8beb,	// (0x000332dc) aid_size_cell_apps_grid_prt_pane

0x97e4,	// (0x00033ed5) bg_wml_button_pane_cp1_ParamLimits

0x97e4,	// (0x00033ed5) bg_wml_button_pane_cp1

0x9f9e,	// (0x0003468f) form_midp_field_text_pane_t1_ParamLimits

0x9d56,	// (0x00034447) input_focus_pane_cp050_ParamLimits

0x9fd9,	// (0x000346ca) list_midp_form_text_pane_ParamLimits

0x9f7b,	// (0x0003466c) input_focus_pane_cp051_ParamLimits

0x9f8f,	// (0x00034680) list_midp_choice_pane_ParamLimits

0x9e0c,	// (0x000344fd) list_single_2graphic_pane_cp3_ParamLimits

0x9e0c,	// (0x000344fd) list_single_2graphic_pane_cp3

0x9e37,	// (0x00034528) list_single_midp_graphic_pane_ParamLimits

0x9e37,	// (0x00034528) list_single_midp_graphic_pane

0x48fa,	// (0x0002efeb) list_single_graphic_2heading_pane_g1_ParamLimits

0x48fa,	// (0x0002efeb) list_single_graphic_2heading_pane_g1

0x4906,	// (0x0002eff7) list_single_graphic_2heading_pane_g4_ParamLimits

0x4906,	// (0x0002eff7) list_single_graphic_2heading_pane_g4

0x4912,	// (0x0002f003) list_single_graphic_2heading_pane_g5_ParamLimits

0x4912,	// (0x0002f003) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00039ea1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00039ea1) list_single_graphic_2heading_pane_g

0x491e,	// (0x0002f00f) list_single_graphic_2heading_pane_t1_ParamLimits

0x491e,	// (0x0002f00f) list_single_graphic_2heading_pane_t1

0x4932,	// (0x0002f023) list_single_graphic_2heading_pane_t2_ParamLimits

0x4932,	// (0x0002f023) list_single_graphic_2heading_pane_t2

0x494c,	// (0x0002f03d) list_single_graphic_2heading_pane_t3_ParamLimits

0x494c,	// (0x0002f03d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00039ea8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00039ea8) list_single_graphic_2heading_pane_t

0x9c20,	// (0x00034311) bg_popup_sub_pane_cp2

0x9c4a,	// (0x0003433b) grid_toobar_pane

0x60f2,	// (0x000307e3) cell_toolbar_pane_ParamLimits

0x60f2,	// (0x000307e3) cell_toolbar_pane

0x9c86,	// (0x00034377) cell_toolbar_pane_g1_ParamLimits

0x9c86,	// (0x00034377) cell_toolbar_pane_g1

0x9c9a,	// (0x0003438b) cell_toolbar_pane_g2_ParamLimits

0x9c9a,	// (0x0003438b) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00039eb6) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00039eb6) cell_toolbar_pane_g

0x9cbc,	// (0x000343ad) grid_highlight_pane_cp2_ParamLimits

0x9cbc,	// (0x000343ad) grid_highlight_pane_cp2

0x9cd6,	// (0x000343c7) toolbar_button_pane

0x9ce2,	// (0x000343d3) toolbar_button_pane_g1

0x9cea,	// (0x000343db) toolbar_button_pane_g2

0x9cf2,	// (0x000343e3) toolbar_button_pane_g3

0x9cfa,	// (0x000343eb) toolbar_button_pane_g4

0x9d02,	// (0x000343f3) toolbar_button_pane_g5

0x9d0a,	// (0x000343fb) toolbar_button_pane_g6

0x9d12,	// (0x00034403) toolbar_button_pane_g7

0x9d1a,	// (0x0003440b) toolbar_button_pane_g8

0x9d22,	// (0x00034413) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00039ebb) toolbar_button_pane_g

0x614c,	// (0x0003083d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x614c,	// (0x0003083d) list_single_2graphic_pane_g1_cp3

0x6158,	// (0x00030849) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6158,	// (0x00030849) list_single_2graphic_pane_g2_cp3

0x6169,	// (0x0003085a) list_single_2graphic_pane_g3_cp3

0x6171,	// (0x00030862) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6171,	// (0x00030862) list_single_2graphic_pane_g4_cp3

0x617d,	// (0x0003086e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x617d,	// (0x0003086e) list_single_2graphic_pane_t1_cp3

0x61c9,	// (0x000308ba) list_single_midp_graphic_pane_g2_ParamLimits

0x61c9,	// (0x000308ba) list_single_midp_graphic_pane_g2

0x5b33,	// (0x00030224) aid_zoom_text_primary

0x48de,	// (0x0002efcf) aid_zoom_text_secondary

0x9708,	// (0x00033df9) status_small_pane_g7_ParamLimits

0x9708,	// (0x00033df9) status_small_pane_g7

0x972b,	// (0x00033e1c) status_small_pane_t1_ParamLimits

0x76aa,	// (0x00031d9b) title_pane_g2

0x0003,

0xf54e,	// (0x00039c3f) title_pane_g

0x8456,	// (0x00032b47) aid_size_cell_colour_1_pane_ParamLimits

0x8456,	// (0x00032b47) aid_size_cell_colour_1_pane

0x846a,	// (0x00032b5b) aid_size_cell_colour_2_pane_ParamLimits

0x846a,	// (0x00032b5b) aid_size_cell_colour_2_pane

0x847e,	// (0x00032b6f) aid_size_cell_colour_3_pane_ParamLimits

0x847e,	// (0x00032b6f) aid_size_cell_colour_3_pane

0x8492,	// (0x00032b83) aid_size_cell_colour_4_pane_ParamLimits

0x8492,	// (0x00032b83) aid_size_cell_colour_4_pane

0x5509,	// (0x0002fbfa) title_pane_stacon_g1_ParamLimits

0x5509,	// (0x0002fbfa) title_pane_stacon_g1

0xa38e,	// (0x00034a7f) popup_note_wait_window_g3_ParamLimits

0xa38e,	// (0x00034a7f) popup_note_wait_window_g3

0xa404,	// (0x00034af5) popup_note_wait_window_t5_ParamLimits

0xa404,	// (0x00034af5) popup_note_wait_window_t5

0x7693,	// (0x00031d84) main_feb_china_hwr_fs_writing_pane

0x5bcb,	// (0x000302bc) popup_feb_china_hwr_fs_window_ParamLimits

0x5bcb,	// (0x000302bc) popup_feb_china_hwr_fs_window

0x625b,	// (0x0003094c) aid_size_cell_hwr_fs_ParamLimits

0x625b,	// (0x0003094c) aid_size_cell_hwr_fs

0x9d56,	// (0x00034447) bg_popup_sub_pane_cp3_ParamLimits

0x9d56,	// (0x00034447) bg_popup_sub_pane_cp3

0x6270,	// (0x00030961) grid_hwr_fs_pane_ParamLimits

0x6270,	// (0x00030961) grid_hwr_fs_pane

0x6288,	// (0x00030979) linegrid_hwr_fs_pane_ParamLimits

0x6288,	// (0x00030979) linegrid_hwr_fs_pane

0x6298,	// (0x00030989) cell_hwr_fs_pane_ParamLimits

0x6298,	// (0x00030989) cell_hwr_fs_pane

0x9d62,	// (0x00034453) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d62,	// (0x00034453) linegrid_hwr_fs_pane_g1

0x9d6e,	// (0x0003445f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6e,	// (0x0003445f) linegrid_hwr_fs_pane_g2

0x9d80,	// (0x00034471) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d80,	// (0x00034471) linegrid_hwr_fs_pane_g3

0x62ba,	// (0x000309ab) linegrid_hwr_fs_pane_g4_ParamLimits

0x62ba,	// (0x000309ab) linegrid_hwr_fs_pane_g4

0x62d4,	// (0x000309c5) linegrid_hwr_fs_pane_g5_ParamLimits

0x62d4,	// (0x000309c5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00039ee6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00039ee6) linegrid_hwr_fs_pane_g

0x9d8c,	// (0x0003447d) cell_hwr_fs_pane_g1_ParamLimits

0x9d8c,	// (0x0003447d) cell_hwr_fs_pane_g1

0x9b57,	// (0x00034248) cell_hwr_fs_pane_g2_ParamLimits

0x9b57,	// (0x00034248) cell_hwr_fs_pane_g2

0x9da2,	// (0x00034493) cell_hwr_fs_pane_g3_ParamLimits

0x9da2,	// (0x00034493) cell_hwr_fs_pane_g3

0x9daf,	// (0x000344a0) cell_hwr_fs_pane_g4_ParamLimits

0x9daf,	// (0x000344a0) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00039ef1) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00039ef1) cell_hwr_fs_pane_g

0x62ea,	// (0x000309db) cell_hwr_fs_pane_t1

0x7693,	// (0x00031d84) grid_highlight_pane_cp6

0x7693,	// (0x00031d84) main_idle_act2_pane

0x8993,	// (0x00033084) aid_inside_area_popup_secondary

0xaa43,	// (0x00035134) aid_inside_area_window_primary_ParamLimits

0xaa43,	// (0x00035134) aid_inside_area_window_primary

0xb568,	// (0x00035c59) ai2_news_ticker_pane

0xb570,	// (0x00035c61) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x00035c61) aid_size_cell_ai1_link

0xb58a,	// (0x00035c7b) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x00035c7b) popup_ai2_data_window

0xb59e,	// (0x00035c8f) popup_ai2_link_window_ParamLimits

0xb59e,	// (0x00035c8f) popup_ai2_link_window

0x9d56,	// (0x00034447) bg_popup_sub_pane_cp4_ParamLimits

0x9d56,	// (0x00034447) bg_popup_sub_pane_cp4

0xb5b2,	// (0x00035ca3) grid_ai2_link_pane_ParamLimits

0xb5b2,	// (0x00035ca3) grid_ai2_link_pane

0xb5c9,	// (0x00035cba) popup_ai2_link_window_g1_ParamLimits

0xb5c9,	// (0x00035cba) popup_ai2_link_window_g1

0xb5d5,	// (0x00035cc6) popup_ai2_link_window_g2_ParamLimits

0xb5d5,	// (0x00035cc6) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a0c4) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a0c4) popup_ai2_link_window_g

0xb5e4,	// (0x00035cd5) ai2_mp_button_pane

0xb5ec,	// (0x00035cdd) ai2_mp_volume_pane

0x9f7b,	// (0x0003466c) bg_popup_sub_pane_cp5_ParamLimits

0x9f7b,	// (0x0003466c) bg_popup_sub_pane_cp5

0xb5f4,	// (0x00035ce5) heading_ai2_gene_pane_ParamLimits

0xb5f4,	// (0x00035ce5) heading_ai2_gene_pane

0xb600,	// (0x00035cf1) list_ai2_gene_pane_ParamLimits

0xb600,	// (0x00035cf1) list_ai2_gene_pane

0xb648,	// (0x00035d39) cell_ai2_link_pane_ParamLimits

0xb648,	// (0x00035d39) cell_ai2_link_pane

0xb65e,	// (0x00035d4f) cell_ai2_link_pane_g1

0x7693,	// (0x00031d84) grid_highlight_pane_cp7

0x661f,	// (0x00030d10) ai2_mp_volume_pane_g1

0xb72f,	// (0x00035e20) ai2_mp_volume_pane_g2

0xb6a4,	// (0x00035d95) list_ai2_gene_pane_t1

0xb737,	// (0x00035e28) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a0dd) ai2_mp_volume_pane_g

0x6627,	// (0x00030d18) volume_small_pane_cp3

0xb73f,	// (0x00035e30) aid_size_cell_ai2_button

0xb747,	// (0x00035e38) grid_ai2_button_pane

0xb750,	// (0x00035e41) cell_ai2_button_pane_ParamLimits

0xb750,	// (0x00035e41) cell_ai2_button_pane

0x7689,	// (0x00031d7a) cell_ai2_button_pane_g1

0x7693,	// (0x00031d84) grid_highlight_pane_cp8

0xb6ef,	// (0x00035de0) ai2_gene_pane_t1_ParamLimits

0xb6ef,	// (0x00035de0) ai2_gene_pane_t1

0x5b21,	// (0x00030212) aid_height_parent_landscape

0xb0b4,	// (0x000357a5) aid_height_set_list

0xb0c5,	// (0x000357b6) aid_size_parent

0xb38f,	// (0x00035a80) aid_size_cell_graphic_pane_ParamLimits

0xb610,	// (0x00035d01) popup_ai2_data_window_g1_ParamLimits

0xb610,	// (0x00035d01) popup_ai2_data_window_g1

0xb61c,	// (0x00035d0d) ai2_news_ticker_pane_g1

0xb624,	// (0x00035d15) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a0c9) ai2_news_ticker_pane_g

0xb62c,	// (0x00035d1d) ai2_news_ticker_pane_t1

0xb63a,	// (0x00035d2b) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a0ce) ai2_news_ticker_pane_t

0xb667,	// (0x00035d58) heading_ai2_gene_pane_g1

0xb66f,	// (0x00035d60) heading_ai2_gene_pane_t1_ParamLimits

0xb66f,	// (0x00035d60) heading_ai2_gene_pane_t1

0xb684,	// (0x00035d75) list_highlight_pane_cp6

0xb68c,	// (0x00035d7d) ai2_gene_pane_ParamLimits

0xb68c,	// (0x00035d7d) ai2_gene_pane

0xb6b2,	// (0x00035da3) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a0d3) list_ai2_gene_pane_t

0xb6c0,	// (0x00035db1) list_highlight_pane_cp8_ParamLimits

0xb6c0,	// (0x00035db1) list_highlight_pane_cp8

0xb6d1,	// (0x00035dc2) ai2_gene_pane_g1_ParamLimits

0xb6d1,	// (0x00035dc2) ai2_gene_pane_g1

0xb6e3,	// (0x00035dd4) ai2_gene_pane_g2_ParamLimits

0xb6e3,	// (0x00035dd4) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a0d8) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a0d8) ai2_gene_pane_g

0x87d4,	// (0x00032ec5) scroll_pane_cp12

0x5ae0,	// (0x000301d1) control_pane_t3_ParamLimits

0x5ae0,	// (0x000301d1) control_pane_t3

0x971c,	// (0x00033e0d) status_small_pane_g8_ParamLimits

0x971c,	// (0x00033e0d) status_small_pane_g8

0x5cad,	// (0x0003039e) popup_find_window_ParamLimits

0x5ec2,	// (0x000305b3) popup_note_image_window_ParamLimits

0x6122,	// (0x00030813) list_double2_graphic_pane_vc_g1_ParamLimits

0x6122,	// (0x00030813) list_double2_graphic_pane_vc_g1

0x4ebb,	// (0x0002f5ac) list_double2_graphic_pane_vc_g2_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double2_graphic_pane_vc_g2

0x4ec7,	// (0x0002f5b8) list_double2_graphic_pane_vc_g3_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00039eaf) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00039eaf) list_double2_graphic_pane_vc_g

0x612e,	// (0x0003081f) list_double2_graphic_pane_vc_t1_ParamLimits

0x612e,	// (0x0003081f) list_double2_graphic_pane_vc_t1

0x4ebb,	// (0x0002f5ac) list_single_heading_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_single_heading_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_single_heading_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_single_heading_pane_vc_g

0x6197,	// (0x00030888) list_single_heading_pane_vc_t1_ParamLimits

0x6197,	// (0x00030888) list_single_heading_pane_vc_t1

0x61ad,	// (0x0003089e) list_single_heading_pane_vc_t2_ParamLimits

0x61ad,	// (0x0003089e) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00039ed5) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00039ed5) list_single_heading_pane_vc_t

0x61eb,	// (0x000308dc) list_setting_number_pane_vc_g1_ParamLimits

0x61eb,	// (0x000308dc) list_setting_number_pane_vc_g1

0x61f7,	// (0x000308e8) list_setting_number_pane_vc_g2_ParamLimits

0x61f7,	// (0x000308e8) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039eda) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039eda) list_setting_number_pane_vc_g

0x6203,	// (0x000308f4) list_setting_number_pane_vc_t1_ParamLimits

0x6203,	// (0x000308f4) list_setting_number_pane_vc_t1

0x6217,	// (0x00030908) list_setting_number_pane_vc_t2_ParamLimits

0x6217,	// (0x00030908) list_setting_number_pane_vc_t2

0x6231,	// (0x00030922) list_setting_number_pane_vc_t3_ParamLimits

0x6231,	// (0x00030922) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00039edf) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00039edf) list_setting_number_pane_vc_t

0x624b,	// (0x0003093c) set_value_pane_vc_ParamLimits

0x624b,	// (0x0003093c) set_value_pane_vc

0xb275,	// (0x00035966) list_double2_graphic_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double2_graphic_pane_vc

0xb275,	// (0x00035966) list_double2_large_graphic_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double2_large_graphic_pane_vc

0xb275,	// (0x00035966) list_double2_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double2_pane_vc

0xb275,	// (0x00035966) list_double_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_graphic_heading_pane_vc

0xb275,	// (0x00035966) list_double_graphic_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_graphic_pane_vc

0xb275,	// (0x00035966) list_double_heading_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_heading_pane_vc

0x77fe,	// (0x00031eef) list_double_large_graphic_pane_vc_ParamLimits

0x77fe,	// (0x00031eef) list_double_large_graphic_pane_vc

0xb275,	// (0x00035966) list_double_number_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_number_pane_vc

0xb275,	// (0x00035966) list_double_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_pane_vc

0xb275,	// (0x00035966) list_double_time_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_double_time_pane_vc

0xb275,	// (0x00035966) list_setting_number_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_setting_number_pane_vc

0xb275,	// (0x00035966) list_setting_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_setting_pane_vc

0xb275,	// (0x00035966) list_single_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_single_graphic_heading_pane_vc

0xb275,	// (0x00035966) list_single_heading_pane_vc_ParamLimits

0xb275,	// (0x00035966) list_single_heading_pane_vc

0x781e,	// (0x00031f0f) list_single_number_heading_pane_vc_ParamLimits

0x781e,	// (0x00031f0f) list_single_number_heading_pane_vc

0x78f0,	// (0x00031fe1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x78f0,	// (0x00031fe1) list_double_graphic_heading_pane_vc_g1

0x4ebb,	// (0x0002f5ac) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double_graphic_heading_pane_vc_g2

0x4ec7,	// (0x0002f5b8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0003a0e4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003a0e4) list_double_graphic_heading_pane_vc_g

0x78fc,	// (0x00031fed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x78fc,	// (0x00031fed) list_double_graphic_heading_pane_vc_t1

0x7918,	// (0x00032009) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7918,	// (0x00032009) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0003a0eb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0003a0eb) list_double_graphic_heading_pane_vc_t

0x61eb,	// (0x000308dc) list_setting_pane_vc_g1_ParamLimits

0x61eb,	// (0x000308dc) list_setting_pane_vc_g1

0x61f7,	// (0x000308e8) list_setting_pane_vc_g2_ParamLimits

0x61f7,	// (0x000308e8) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039eda) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039eda) list_setting_pane_vc_g

0x7930,	// (0x00032021) list_setting_pane_vc_t1_ParamLimits

0x7930,	// (0x00032021) list_setting_pane_vc_t1

0x794a,	// (0x0003203b) list_setting_pane_vc_t2_ParamLimits

0x794a,	// (0x0003203b) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003a12e) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003a12e) list_setting_pane_vc_t

0x624b,	// (0x0003093c) set_value_pane_cp_vc_ParamLimits

0x624b,	// (0x0003093c) set_value_pane_cp_vc

0x4ebb,	// (0x0002f5ac) list_single_number_heading_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_single_number_heading_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_single_number_heading_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_single_number_heading_pane_vc_g

0x6197,	// (0x00030888) list_single_number_heading_pane_vc_t1_ParamLimits

0x6197,	// (0x00030888) list_single_number_heading_pane_vc_t1

0x7962,	// (0x00032053) list_single_number_heading_pane_vc_t2_ParamLimits

0x7962,	// (0x00032053) list_single_number_heading_pane_vc_t2

0x7976,	// (0x00032067) list_single_number_heading_pane_vc_t3_ParamLimits

0x7976,	// (0x00032067) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0003a133) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0003a133) list_single_number_heading_pane_vc_t

0x6122,	// (0x00030813) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6122,	// (0x00030813) list_single_graphic_heading_pane_vc_g1

0x4ebb,	// (0x0002f5ac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4ebb,	// (0x0002f5ac) list_single_graphic_heading_pane_vc_g4

0x4ec7,	// (0x0002f5b8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4ec7,	// (0x0002f5b8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x00039eaf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039eaf) list_single_graphic_heading_pane_vc_g

0x6197,	// (0x00030888) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6197,	// (0x00030888) list_single_graphic_heading_pane_vc_t1

0x7988,	// (0x00032079) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7988,	// (0x00032079) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0003a13a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0003a13a) list_single_graphic_heading_pane_vc_t

0x4ebb,	// (0x0002f5ac) list_double2_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double2_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_double2_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_double2_pane_vc_g

0x799c,	// (0x0003208d) list_double2_pane_vc_t1_ParamLimits

0x799c,	// (0x0003208d) list_double2_pane_vc_t1

0x79b2,	// (0x000320a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x79b2,	// (0x000320a3) list_double2_large_graphic_pane_vc_g1

0x4ebb,	// (0x0002f5ac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double2_large_graphic_pane_vc_g2

0x4ec7,	// (0x0002f5b8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0003a13f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0003a13f) list_double2_large_graphic_pane_vc_g

0x79be,	// (0x000320af) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x79be,	// (0x000320af) list_double2_large_graphic_pane_vc_t1

0x79d4,	// (0x000320c5) list_double_time_pane_vc_g1_ParamLimits

0x79d4,	// (0x000320c5) list_double_time_pane_vc_g1

0x79e0,	// (0x000320d1) list_double_time_pane_vc_g2_ParamLimits

0x79e0,	// (0x000320d1) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0003a146) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0003a146) list_double_time_pane_vc_g

0x79ec,	// (0x000320dd) list_double_time_pane_vc_t1_ParamLimits

0x79ec,	// (0x000320dd) list_double_time_pane_vc_t1

0x7a0a,	// (0x000320fb) list_double_time_pane_vc_t2_ParamLimits

0x7a0a,	// (0x000320fb) list_double_time_pane_vc_t2

0x7a54,	// (0x00032145) list_double_time_pane_vc_t3_ParamLimits

0x7a54,	// (0x00032145) list_double_time_pane_vc_t3

0x7a66,	// (0x00032157) list_double_time_pane_vc_t4_ParamLimits

0x7a66,	// (0x00032157) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0003a14b) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0003a14b) list_double_time_pane_vc_t

0x4ebb,	// (0x0002f5ac) list_double_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_double_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_double_pane_vc_g

0x7a7a,	// (0x0003216b) list_double_pane_vc_t1_ParamLimits

0x7a7a,	// (0x0003216b) list_double_pane_vc_t1

0x7a8c,	// (0x0003217d) list_double_pane_vc_t2_ParamLimits

0x7a8c,	// (0x0003217d) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0003a154) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0003a154) list_double_pane_vc_t

0x4ebb,	// (0x0002f5ac) list_double_number_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double_number_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_double_number_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_double_number_pane_vc_g

0x7aa4,	// (0x00032195) list_double_number_pane_vc_t1_ParamLimits

0x7aa4,	// (0x00032195) list_double_number_pane_vc_t1

0x7ab6,	// (0x000321a7) list_double_number_pane_vc_t2_ParamLimits

0x7ab6,	// (0x000321a7) list_double_number_pane_vc_t2

0x7ac8,	// (0x000321b9) list_double_number_pane_vc_t3_ParamLimits

0x7ac8,	// (0x000321b9) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0003a159) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0003a159) list_double_number_pane_vc_t

0x7ae0,	// (0x000321d1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7ae0,	// (0x000321d1) list_double_large_graphic_pane_vc_g1

0x7afc,	// (0x000321ed) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7afc,	// (0x000321ed) list_double_large_graphic_pane_vc_g2

0x7b10,	// (0x00032201) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7b10,	// (0x00032201) list_double_large_graphic_pane_vc_g3

0x7b1f,	// (0x00032210) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7b1f,	// (0x00032210) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0003a160) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0003a160) list_double_large_graphic_pane_vc_g

0x7b2e,	// (0x0003221f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7b2e,	// (0x0003221f) list_double_large_graphic_pane_vc_t1

0x7b48,	// (0x00032239) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7b48,	// (0x00032239) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0003a169) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0003a169) list_double_large_graphic_pane_vc_t

0x4ebb,	// (0x0002f5ac) list_double_heading_pane_vc_g1_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double_heading_pane_vc_g1

0x4ec7,	// (0x0002f5b8) list_double_heading_pane_vc_g2_ParamLimits

0x4ec7,	// (0x0002f5b8) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ed0) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ed0) list_double_heading_pane_vc_g

0x7b6a,	// (0x0003225b) list_double_heading_pane_vc_t1_ParamLimits

0x7b6a,	// (0x0003225b) list_double_heading_pane_vc_t1

0x6197,	// (0x00030888) list_double_heading_pane_vc_t2_ParamLimits

0x6197,	// (0x00030888) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0003a16e) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0003a16e) list_double_heading_pane_vc_t

0x7b7e,	// (0x0003226f) list_double_graphic_pane_vc_g1_ParamLimits

0x7b7e,	// (0x0003226f) list_double_graphic_pane_vc_g1

0x7b91,	// (0x00032282) list_double_graphic_pane_vc_g2_ParamLimits

0x7b91,	// (0x00032282) list_double_graphic_pane_vc_g2

0x4ebb,	// (0x0002f5ac) list_double_graphic_pane_vc_g3_ParamLimits

0x4ebb,	// (0x0002f5ac) list_double_graphic_pane_vc_g3

0x0003,

0xfa82,	// (0x0003a173) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0003a173) list_double_graphic_pane_vc_g

0x7bae,	// (0x0003229f) list_double_graphic_pane_vc_t1_ParamLimits

0x7bae,	// (0x0003229f) list_double_graphic_pane_vc_t1

0x7bcc,	// (0x000322bd) list_double_graphic_pane_vc_t2_ParamLimits

0x7bcc,	// (0x000322bd) list_double_graphic_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a17c) list_double_graphic_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a17c) list_double_graphic_pane_vc_t

0x497c,	// (0x0002f06d) aid_size_cell_fastswap

0x4984,	// (0x0002f075) aid_size_cell_touch_ParamLimits

0x4984,	// (0x0002f075) aid_size_cell_touch

0x4be9,	// (0x0002f2da) popup_fast_swap_wide_window_ParamLimits

0x4be9,	// (0x0002f2da) popup_fast_swap_wide_window

0x4cef,	// (0x0002f3e0) touch_pane_ParamLimits

0x4cef,	// (0x0002f3e0) touch_pane

0x882a,	// (0x00032f1b) button_value_adjust_pane_cp2

0x528b,	// (0x0002f97c) button_value_adjust_pane_cp4

0x52ab,	// (0x0002f99c) form_field_data_pane_cp2

0x52ca,	// (0x0002f9bb) form_field_data_wide_pane_cp2

0x8ca6,	// (0x00033397) bg_scroll_pane_ParamLimits

0x566c,	// (0x0002fd5d) scroll_handle_pane_ParamLimits

0x5680,	// (0x0002fd71) scroll_sc2_down_pane_ParamLimits

0x5680,	// (0x0002fd71) scroll_sc2_down_pane

0x8cd7,	// (0x000333c8) scroll_sc2_up_pane_ParamLimits

0x8cd7,	// (0x000333c8) scroll_sc2_up_pane

0xbe09,	// (0x000364fa) grid_wheel_folder_pane_g1_ParamLimits

0xbe09,	// (0x000364fa) grid_wheel_folder_pane_g1

0x58c8,	// (0x0002ffb9) clock_nsta_pane_cp2_ParamLimits

0x58c8,	// (0x0002ffb9) clock_nsta_pane_cp2

0x8a20,	// (0x00033111) listscroll_midp_pane_ParamLimits

0x94b2,	// (0x00033ba3) midp_canvas_pane

0x9796,	// (0x00033e87) nsta_clock_indic_pane

0x97ca,	// (0x00033ebb) listscroll_form_pane_vc

0x97d2,	// (0x00033ec3) listscroll_set_pane_vc_ParamLimits

0x97d2,	// (0x00033ec3) listscroll_set_pane_vc

0x98d3,	// (0x00033fc4) clock_nsta_pane

0x9948,	// (0x00034039) indicator_nsta_pane

0x9c20,	// (0x00034311) bg_popup_sub_pane_cp2_ParamLimits

0x9c34,	// (0x00034325) find_pane_cp2_ParamLimits

0x9c34,	// (0x00034325) find_pane_cp2

0x9c4a,	// (0x0003433b) grid_toobar_pane_ParamLimits

0x9d2a,	// (0x0003441b) list_form_gen_pane_vc_ParamLimits

0x9d2a,	// (0x0003441b) list_form_gen_pane_vc

0x9d40,	// (0x00034431) scroll_pane_cp8_vc_ParamLimits

0x9d40,	// (0x00034431) scroll_pane_cp8_vc

0x9dbc,	// (0x000344ad) data_form_wide_pane_vc_ParamLimits

0x9dbc,	// (0x000344ad) data_form_wide_pane_vc

0x9dc8,	// (0x000344b9) form_field_data_wide_pane_vc_g1

0x9dd0,	// (0x000344c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dd0,	// (0x000344c1) form_field_data_wide_pane_vc_t1

0x883e,	// (0x00032f2f) input_focus_pane_cp6_vc_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_cp6_vc

0xa10e,	// (0x000347ff) list_midp_pane_ParamLimits

0xa11a,	// (0x0003480b) scroll_pane_cp16_ParamLimits

0xa11a,	// (0x0003480b) scroll_pane_cp16

0xa168,	// (0x00034859) button_value_adjust_pane_ParamLimits

0xa168,	// (0x00034859) button_value_adjust_pane

0xb0d7,	// (0x000357c8) button_value_adjust_pane_cp6_ParamLimits

0xb0d7,	// (0x000357c8) button_value_adjust_pane_cp6

0xb1f9,	// (0x000358ea) settings_code_pane_cp_ParamLimits

0xb1f9,	// (0x000358ea) settings_code_pane_cp

0x7689,	// (0x00031d7a) cell_touch_pane_g1

0x7689,	// (0x00031d7a) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00039df4) cell_touch_pane_g

0xb762,	// (0x00035e53) cell_touch_pane_cp_ParamLimits

0xb762,	// (0x00035e53) cell_touch_pane_cp

0xb772,	// (0x00035e63) cell_touch_pane_ParamLimits

0xb772,	// (0x00035e63) cell_touch_pane

0x7689,	// (0x00031d7a) scroll_sc2_down_pane_g1

0x7689,	// (0x00031d7a) scroll_sc2_up_pane_g1

0x7693,	// (0x00031d84) bg_set_opt_pane_cp4_vc

0xb783,	// (0x00035e74) list_set_graphic_pane_vc_g1_ParamLimits

0xb783,	// (0x00035e74) list_set_graphic_pane_vc_g1

0x92da,	// (0x000339cb) list_set_graphic_pane_vc_g2_ParamLimits

0x92da,	// (0x000339cb) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0003a0f0) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0003a0f0) list_set_graphic_pane_vc_g

0xb78f,	// (0x00035e80) text_primary_small_cp13_vc_ParamLimits

0xb78f,	// (0x00035e80) text_primary_small_cp13_vc

0xb7a7,	// (0x00035e98) list_set_graphic_pane_vc_ParamLimits

0xb7a7,	// (0x00035e98) list_set_graphic_pane_vc

0x7693,	// (0x00031d84) input_focus_pane_cp2_vc

0x7689,	// (0x00031d7a) setting_code_pane_vc_g1

0x802f,	// (0x00032720) setting_code_pane_vc_t1

0xb7bb,	// (0x00035eac) set_text_pane_vc_t1_ParamLimits

0xb7bb,	// (0x00035eac) set_text_pane_vc_t1

0x7693,	// (0x00031d84) input_focus_pane_cp1_vc

0xb7d8,	// (0x00035ec9) list_set_text_pane_vc

0x7689,	// (0x00031d7a) setting_text_pane_vc_g1

0x7693,	// (0x00031d84) bg_set_opt_pane_cp2_vc

0x8026,	// (0x00032717) setting_slider_graphic_pane_vc_g1

0xb7e2,	// (0x00035ed3) setting_slider_graphic_pane_vc_t1

0xb7f2,	// (0x00035ee3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0003a0f5) setting_slider_graphic_pane_vc_t

0xb802,	// (0x00035ef3) slider_set_pane_cp_vc

0xb80a,	// (0x00035efb) slider_set_pane_vc_g1

0xb813,	// (0x00035f04) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0003a0fa) slider_set_pane_vc_g

0x8899,	// (0x00032f8a) set_opt_bg_pane_g1_copy1

0x88a1,	// (0x00032f92) set_opt_bg_pane_g2_copy1

0xb83f,	// (0x00035f30) set_opt_bg_pane_g3_copy1

0x88b1,	// (0x00032fa2) set_opt_bg_pane_g4_copy1

0x88b9,	// (0x00032faa) set_opt_bg_pane_g5_copy1

0x88c1,	// (0x00032fb2) set_opt_bg_pane_g6_copy1

0xb847,	// (0x00035f38) set_opt_bg_pane_g7_copy1

0xb851,	// (0x00035f42) set_opt_bg_pane_g8_copy1

0xb859,	// (0x00035f4a) set_opt_bg_pane_g9_copy1

0x7693,	// (0x00031d84) bg_set_opt_pane_cp_vc

0xb861,	// (0x00035f52) setting_slider_pane_vc_t1

0xb870,	// (0x00035f61) setting_slider_pane_vc_t2

0xb880,	// (0x00035f71) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0003a109) setting_slider_pane_vc_t

0xb890,	// (0x00035f81) slider_set_pane_vc

0x6341,	// (0x00030a32) volume_set_pane_vc_g1

0x6630,	// (0x00030d21) volume_set_pane_vc_g2

0x6639,	// (0x00030d2a) volume_set_pane_vc_g3

0x6642,	// (0x00030d33) volume_set_pane_vc_g4

0x664b,	// (0x00030d3c) volume_set_pane_vc_g5

0x6654,	// (0x00030d45) volume_set_pane_vc_g6

0x636e,	// (0x00030a5f) volume_set_pane_vc_g7

0x665d,	// (0x00030d4e) volume_set_pane_vc_g8

0x6666,	// (0x00030d57) volume_set_pane_vc_g9

0x666f,	// (0x00030d60) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0003a110) volume_set_pane_vc_g

0xb898,	// (0x00035f89) volume_set_pane_vc

0xb8a0,	// (0x00035f91) button_value_adjust_pane_cp1_vc

0xb8aa,	// (0x00035f9b) list_highlight_pane_cp2_vc

0xb8b3,	// (0x00035fa4) list_set_pane_vc_ParamLimits

0xb8b3,	// (0x00035fa4) list_set_pane_vc

0xb911,	// (0x00036002) main_pane_set_vc_t1_ParamLimits

0xb911,	// (0x00036002) main_pane_set_vc_t1

0xb926,	// (0x00036017) main_pane_set_vc_t2_ParamLimits

0xb926,	// (0x00036017) main_pane_set_vc_t2

0xb938,	// (0x00036029) main_pane_set_vc_t3_ParamLimits

0xb938,	// (0x00036029) main_pane_set_vc_t3

0xb94a,	// (0x0003603b) main_pane_set_vc_t4_ParamLimits

0xb94a,	// (0x0003603b) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0003a125) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0003a125) main_pane_set_vc_t

0xb95c,	// (0x0003604d) setting_code_pane_vc_ParamLimits

0xb95c,	// (0x0003604d) setting_code_pane_vc

0xb96b,	// (0x0003605c) setting_slider_graphic_pane_vc

0xb96b,	// (0x0003605c) setting_slider_pane_vc

0xb96b,	// (0x0003605c) setting_text_pane_vc

0xb96b,	// (0x0003605c) setting_volume_pane_vc

0xb973,	// (0x00036064) scroll_pane_cp121_vc

0x8818,	// (0x00032f09) set_content_pane_vc

0xb97b,	// (0x0003606c) button_value_adjust_pane_g1

0xb984,	// (0x00036075) button_value_adjust_pane_g2

0x0001,

0xfa90,	// (0x0003a181) button_value_adjust_pane_g

0xb98d,	// (0x0003607e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb98d,	// (0x0003607e) form_field_slider_wide_pane_vc_t1

0xb9a1,	// (0x00036092) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00036092) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa95,	// (0x0003a186) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0003a186) form_field_slider_wide_pane_vc_t

0x825f,	// (0x00032950) input_focus_pane_cp10_vc_ParamLimits

0x825f,	// (0x00032950) input_focus_pane_cp10_vc

0xb9cd,	// (0x000360be) slider_cont_pane_cp1_vc_ParamLimits

0xb9cd,	// (0x000360be) slider_cont_pane_cp1_vc

0xb9dd,	// (0x000360ce) slider_form_pane_g1_cp2

0xb813,	// (0x00035f04) slider_form_pane_g2_cp2

0xba0a,	// (0x000360fb) form_field_slider_pane_vc_t3

0xba18,	// (0x00036109) form_field_slider_pane_vc_t4

0xba26,	// (0x00036117) slider_form_pane_vc_ParamLimits

0xba26,	// (0x00036117) slider_form_pane_vc

0xba33,	// (0x00036124) form_field_slider_pane_vc_t1_ParamLimits

0xba33,	// (0x00036124) form_field_slider_pane_vc_t1

0xb9a1,	// (0x00036092) form_field_slider_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00036092) form_field_slider_pane_vc_t2

0x0001,

0xfaa7,	// (0x0003a198) form_field_slider_pane_vc_t_ParamLimits

0xfaa7,	// (0x0003a198) form_field_slider_pane_vc_t

0x825f,	// (0x00032950) input_focus_pane_cp9_vc_ParamLimits

0x825f,	// (0x00032950) input_focus_pane_cp9_vc

0xba4f,	// (0x00036140) slider_cont_pane_vc_ParamLimits

0xba4f,	// (0x00036140) slider_cont_pane_vc

0xba61,	// (0x00036152) list_form_graphic_pane_cp_vc_ParamLimits

0xba61,	// (0x00036152) list_form_graphic_pane_cp_vc

0x9dc8,	// (0x000344b9) form_field_popup_wide_pane_vc_g1

0xba76,	// (0x00036167) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba76,	// (0x00036167) form_field_popup_wide_pane_vc_t1

0x883e,	// (0x00032f2f) input_focus_pane_cp8_vc_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_cp8_vc

0xbabb,	// (0x000361ac) list_form_wide_pane_vc_ParamLimits

0xbabb,	// (0x000361ac) list_form_wide_pane_vc

0xbac7,	// (0x000361b8) list_form_graphic_pane_vc_g1

0xbacf,	// (0x000361c0) list_form_graphic_pane_vc_t1_ParamLimits

0xbacf,	// (0x000361c0) list_form_graphic_pane_vc_t1

0x7fe4,	// (0x000326d5) list_highlight_pane_cp5_vc_ParamLimits

0x7fe4,	// (0x000326d5) list_highlight_pane_cp5_vc

0xbaeb,	// (0x000361dc) list_form_graphic_pane_vc_ParamLimits

0xbaeb,	// (0x000361dc) list_form_graphic_pane_vc

0x9dc8,	// (0x000344b9) form_field_popup_pane_vc_g1

0xbb01,	// (0x000361f2) form_field_popup_pane_vc_t1_ParamLimits

0xbb01,	// (0x000361f2) form_field_popup_pane_vc_t1

0x883e,	// (0x00032f2f) input_focus_pane_cp7_vc_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_cp7_vc

0xbb18,	// (0x00036209) list_form_pane_vc_ParamLimits

0xbb18,	// (0x00036209) list_form_pane_vc

0xbb24,	// (0x00036215) data_form_pane_vc_t1_ParamLimits

0xbb24,	// (0x00036215) data_form_pane_vc_t1

0x8899,	// (0x00032f8a) input_focus_pane_vc_g1

0x88a1,	// (0x00032f92) input_focus_pane_vc_g2

0x88a9,	// (0x00032f9a) input_focus_pane_vc_g3

0x88b1,	// (0x00032fa2) input_focus_pane_vc_g4

0x88b9,	// (0x00032faa) input_focus_pane_vc_g5

0x88c1,	// (0x00032fb2) input_focus_pane_vc_g6

0x88c9,	// (0x00032fba) input_focus_pane_vc_g7

0x88d1,	// (0x00032fc2) input_focus_pane_vc_g8

0x88d9,	// (0x00032fca) input_focus_pane_vc_g9

0x7689,	// (0x00031d7a) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00039d7d) input_focus_pane_vc_g

0x9dbc,	// (0x000344ad) data_form_pane_vc_ParamLimits

0x9dbc,	// (0x000344ad) data_form_pane_vc

0x9dc8,	// (0x000344b9) form_field_data_pane_vc_g1

0xbb3f,	// (0x00036230) form_field_data_pane_vc_t1_ParamLimits

0xbb3f,	// (0x00036230) form_field_data_pane_vc_t1

0x883e,	// (0x00032f2f) input_focus_pane_vc_ParamLimits

0x883e,	// (0x00032f2f) input_focus_pane_vc

0xbb59,	// (0x0003624a) button_value_adjust_pane_cp3_vc

0xbb61,	// (0x00036252) button_value_adjust_pane_cp5_vc

0xbb69,	// (0x0003625a) form_field_data_pane_vc_ParamLimits

0xbb69,	// (0x0003625a) form_field_data_pane_vc

0xbb80,	// (0x00036271) form_field_data_pane_vc_cp2

0xbb88,	// (0x00036279) form_field_data_wide_pane_vc_ParamLimits

0xbb88,	// (0x00036279) form_field_data_wide_pane_vc

0xbb9e,	// (0x0003628f) form_field_data_wide_pane_vc_cp2

0xbba6,	// (0x00036297) form_field_popup_pane_vc_ParamLimits

0xbba6,	// (0x00036297) form_field_popup_pane_vc

0xbbbd,	// (0x000362ae) form_field_popup_wide_pane_vc_ParamLimits

0xbbbd,	// (0x000362ae) form_field_popup_wide_pane_vc

0xbbd3,	// (0x000362c4) form_field_slider_pane_vc_ParamLimits

0xbbd3,	// (0x000362c4) form_field_slider_pane_vc

0xbbe6,	// (0x000362d7) form_field_slider_wide_pane_vc_ParamLimits

0xbbe6,	// (0x000362d7) form_field_slider_wide_pane_vc

0xbbf9,	// (0x000362ea) grid_touch_1_pane_ParamLimits

0xbbf9,	// (0x000362ea) grid_touch_1_pane

0xbc05,	// (0x000362f6) grid_touch_2_pane_ParamLimits

0xbc05,	// (0x000362f6) grid_touch_2_pane

0x9761,	// (0x00033e52) touch_pane_g1_ParamLimits

0x9761,	// (0x00033e52) touch_pane_g1

0xbc1d,	// (0x0003630e) cell_app_pane_cp_wide_ParamLimits

0xbc1d,	// (0x0003630e) cell_app_pane_cp_wide

0xbc2e,	// (0x0003631f) grid_popup_fast_wide_pane_ParamLimits

0xbc2e,	// (0x0003631f) grid_popup_fast_wide_pane

0xbc42,	// (0x00036333) scroll_pane_cp19_ParamLimits

0xbc42,	// (0x00036333) scroll_pane_cp19

0x7693,	// (0x00031d84) bg_popup_window_pane_cp20

0xbc56,	// (0x00036347) listscroll_popup_fast_wide_pane

0x7fe4,	// (0x000326d5) grid_indicator_nsta_pane

0xbc5e,	// (0x0003634f) clock_nsta_pane_g1

0xbc67,	// (0x00036358) clock_nsta_pane_t1

0xbc83,	// (0x00036374) cell_indicator_nsta_pane_ParamLimits

0xbc83,	// (0x00036374) cell_indicator_nsta_pane

0xbcb4,	// (0x000363a5) cell_indicator_nsta_pane_g1

0xbcc2,	// (0x000363b3) cell_indicator_nsta_pane_g2

0x0001,

0xfab8,	// (0x0003a1a9) cell_indicator_nsta_pane_g

0xbccf,	// (0x000363c0) clock_nsta_pane_cp

0xbcd7,	// (0x000363c8) indicator_nsta_pane_cp

0xbcdf,	// (0x000363d0) nsta_clock_indic_pane_g1

0x80ad,	// (0x0003279e) grid_indicator_pane

0x8dcc,	// (0x000334bd) scroll_pane_cp29

0x5817,	// (0x0002ff08) indicator_nsta_pane_cp2_ParamLimits

0x5817,	// (0x0002ff08) indicator_nsta_pane_cp2

0x7fe4,	// (0x000326d5) main_apps_wheel_pane

0x9ff3,	// (0x000346e4) form_midp_field_text_pane_ParamLimits

0xa13a,	// (0x0003482b) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x00036431) cell_indicator_pane_ParamLimits

0xbd40,	// (0x00036431) cell_indicator_pane

0xbd5b,	// (0x0003644c) cell_indicator_pane_g1

0xbd65,	// (0x00036456) grid_wheel_folder_pane_ParamLimits

0xbd65,	// (0x00036456) grid_wheel_folder_pane

0xbd7b,	// (0x0003646c) list_wheel_apps_pane_ParamLimits

0xbd7b,	// (0x0003646c) list_wheel_apps_pane

0xbd8c,	// (0x0003647d) main_apps_wheel_pane_g1_ParamLimits

0xbd8c,	// (0x0003647d) main_apps_wheel_pane_g1

0xbda0,	// (0x00036491) main_apps_wheel_pane_g2_ParamLimits

0xbda0,	// (0x00036491) main_apps_wheel_pane_g2

0x0001,

0xfad4,	// (0x0003a1c5) main_apps_wheel_pane_g_ParamLimits

0xfad4,	// (0x0003a1c5) main_apps_wheel_pane_g

0xbdb8,	// (0x000364a9) main_apps_wheel_pane_t1_ParamLimits

0xbdb8,	// (0x000364a9) main_apps_wheel_pane_t1

0xbddb,	// (0x000364cc) list_wheel_apps_pane_g1

0xbde3,	// (0x000364d4) list_wheel_apps_pane_g2

0xbdeb,	// (0x000364dc) list_wheel_apps_pane_g3

0xbdf5,	// (0x000364e6) list_wheel_apps_pane_g4

0xbdff,	// (0x000364f0) list_wheel_apps_pane_g5

0x0004,

0xfad9,	// (0x0003a1ca) list_wheel_apps_pane_g

0x9336,	// (0x00033a27) navi_icon_text_pane

0x9806,	// (0x00033ef7) aid_fill_nsta

0xbe22,	// (0x00036513) navi_icon_text_pane_g1

0xbe2e,	// (0x0003651f) navi_icon_text_pane_t1

0x91b5,	// (0x000338a6) list_set_graphic_pane_t1_ParamLimits

0x91b5,	// (0x000338a6) list_set_graphic_pane_t1

0xa88c,	// (0x00034f7d) popup_midp_note_alarm_window_t6_ParamLimits

0xa88c,	// (0x00034f7d) popup_midp_note_alarm_window_t6

0xa89e,	// (0x00034f8f) popup_midp_note_alarm_window_t7_ParamLimits

0xa89e,	// (0x00034f8f) popup_midp_note_alarm_window_t7

0xa8b0,	// (0x00034fa1) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b0,	// (0x00034fa1) popup_midp_note_alarm_window_t8

0xa8c2,	// (0x00034fb3) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c2,	// (0x00034fb3) popup_midp_note_alarm_window_t9

0xa8d4,	// (0x00034fc5) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d4,	// (0x00034fc5) popup_midp_note_alarm_window_t10

0xa8e6,	// (0x00034fd7) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e6,	// (0x00034fd7) popup_midp_note_alarm_window_t11

0xa8f8,	// (0x00034fe9) scroll_pane_cp17_ParamLimits

0xa8f8,	// (0x00034fe9) scroll_pane_cp17

0x6341,	// (0x00030a32) volume_small_pane_cp_g1

0x6678,	// (0x00030d69) volume_small_pane_cp_g2

0x6681,	// (0x00030d72) volume_small_pane_cp_g3

0x6353,	// (0x00030a44) volume_small_pane_cp_g4

0x668a,	// (0x00030d7b) volume_small_pane_cp_g5

0x664b,	// (0x00030d3c) volume_small_pane_cp_g6

0x6365,	// (0x00030a56) volume_small_pane_cp_g7

0x6693,	// (0x00030d84) volume_small_pane_cp_g8

0x669c,	// (0x00030d8d) volume_small_pane_cp_g9

0x6377,	// (0x00030a68) volume_small_pane_cp_g10

0x957f,	// (0x00033c70) midp_ticker_pane_g1_ParamLimits

0x958b,	// (0x00033c7c) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00039e49) midp_ticker_pane_g_ParamLimits

0x9597,	// (0x00033c88) midp_ticker_pane_t1_ParamLimits

0x981c,	// (0x00033f0d) aid_fill_nsta_2

0xa126,	// (0x00034817) list_form2_midp_pane

0xb244,	// (0x00035935) midp_editing_number_pane_ParamLimits

0xb253,	// (0x00035944) midp_ticker_pane_ParamLimits

0xbe40,	// (0x00036531) form2_midp_field_pane

0xbe64,	// (0x00036555) scroll_pane_cp51

0xbe84,	// (0x00036575) form2_midp_button_pane_ParamLimits

0xbe84,	// (0x00036575) form2_midp_button_pane

0xbe96,	// (0x00036587) form2_midp_content_pane_ParamLimits

0xbe96,	// (0x00036587) form2_midp_content_pane

0xbeb0,	// (0x000365a1) form2_midp_field_choice_group_pane

0xbeb8,	// (0x000365a9) form2_midp_field_pane_g1

0xbec0,	// (0x000365b1) form2_midp_field_pane_g2

0xbec8,	// (0x000365b9) form2_midp_field_pane_g3

0xbed0,	// (0x000365c1) form2_midp_field_pane_g4

0x0003,

0xfafe,	// (0x0003a1ef) form2_midp_field_pane_g

0xbed8,	// (0x000365c9) form2_midp_gauge_slider_pane

0xbee0,	// (0x000365d1) form2_midp_gauge_wait_pane

0xbee8,	// (0x000365d9) form2_midp_image_pane_ParamLimits

0xbee8,	// (0x000365d9) form2_midp_image_pane

0xbf03,	// (0x000365f4) form2_midp_label_pane_ParamLimits

0xbf03,	// (0x000365f4) form2_midp_label_pane

0xbf1c,	// (0x0003660d) form2_midp_label_pane_cp_ParamLimits

0xbf1c,	// (0x0003660d) form2_midp_label_pane_cp

0xbf3d,	// (0x0003662e) form2_midp_string_pane_ParamLimits

0xbf3d,	// (0x0003662e) form2_midp_string_pane

0x7bf6,	// (0x000322e7) form2_midp_text_pane_ParamLimits

0x7bf6,	// (0x000322e7) form2_midp_text_pane

0xbf4f,	// (0x00036640) form2_midp_time_pane

0xbf5f,	// (0x00036650) input_focus_pane_cp51_ParamLimits

0xbf5f,	// (0x00036650) input_focus_pane_cp51

0xbf77,	// (0x00036668) form2_midp_label_pane_t1_ParamLimits

0xbf77,	// (0x00036668) form2_midp_label_pane_t1

0x7c0f,	// (0x00032300) form2_mdip_text_pane_t1_ParamLimits

0x7c0f,	// (0x00032300) form2_mdip_text_pane_t1

0x7c2d,	// (0x0003231e) form2_midp_time_pane_t1

0xbfbf,	// (0x000366b0) form2_midp_gauge_slider_pane_t1

0xbfd1,	// (0x000366c2) form2_midp_gauge_slider_pane_t2

0xbfe3,	// (0x000366d4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb07,	// (0x0003a1f8) form2_midp_gauge_slider_pane_t

0xbff5,	// (0x000366e6) form2_midp_slider_pane

0xc001,	// (0x000366f2) form2_midp_gauge_wait_pane_t1

0xc00f,	// (0x00036700) form2_midp_wait_pane_ParamLimits

0xc00f,	// (0x00036700) form2_midp_wait_pane

0xc03b,	// (0x0003672c) list_single_2graphic_pane_cp4_ParamLimits

0xc03b,	// (0x0003672c) list_single_2graphic_pane_cp4

0x9e37,	// (0x00034528) list_single_midp_graphic_pane_cp_ParamLimits

0x9e37,	// (0x00034528) list_single_midp_graphic_pane_cp

0x7693,	// (0x00031d84) list_highlight_pane_cp20

0xc069,	// (0x0003675a) list_single_2graphic_pane_g1_cp4

0xb667,	// (0x00035d58) list_single_2graphic_pane_g2_cp4

0xc071,	// (0x00036762) list_single_2graphic_pane_t1_cp4

0x7fe4,	// (0x000326d5) list_highlight_pane_cp21

0xc080,	// (0x00036771) list_single_midp_graphic_pane_g4_cp

0xc08f,	// (0x00036780) list_single_midp_graphic_pane_t1_cp

0xc0a4,	// (0x00036795) form2_mdip_string_pane_t1_ParamLimits

0xc0a4,	// (0x00036795) form2_mdip_string_pane_t1

0x7693,	// (0x00031d84) bg_wml_button_pane_cp2

0x7689,	// (0x00031d7a) form2_midp_image_pane_g1

0x5082,	// (0x0002f773) list_double_large_graphic_pane_g5_ParamLimits

0x5082,	// (0x0002f773) list_double_large_graphic_pane_g5

0x8a20,	// (0x00033111) midp_form_pane_ParamLimits

0x7fe4,	// (0x000326d5) main_apps_wheel_pane_ParamLimits

0x5ee8,	// (0x000305d9) popup_preview_window_ParamLimits

0x5ee8,	// (0x000305d9) popup_preview_window

0x609f,	// (0x00030790) popup_touch_info_window_ParamLimits

0x609f,	// (0x00030790) popup_touch_info_window

0x60bd,	// (0x000307ae) popup_touch_menu_window_ParamLimits

0x60bd,	// (0x000307ae) popup_touch_menu_window

0x767f,	// (0x00031d70) bg_popup_sub_pane_cp6

0xc1c7,	// (0x000368b8) list_touch_menu_pane

0xc1cf,	// (0x000368c0) list_single_touch_menu_pane_ParamLimits

0xc1cf,	// (0x000368c0) list_single_touch_menu_pane

0xc1e3,	// (0x000368d4) list_single_touch_menu_pane_t1

0x7fe4,	// (0x000326d5) bg_popup_sub_pane_cp7_ParamLimits

0x7fe4,	// (0x000326d5) bg_popup_sub_pane_cp7

0xc1f1,	// (0x000368e2) heading_sub_pane

0xc1f9,	// (0x000368ea) list_touch_info_pane_ParamLimits

0xc1f9,	// (0x000368ea) list_touch_info_pane

0xc208,	// (0x000368f9) list_single_touch_info_pane_ParamLimits

0xc208,	// (0x000368f9) list_single_touch_info_pane

0xc21a,	// (0x0003690b) list_single_touch_info_pane_t1

0xc228,	// (0x00036919) list_single_touch_info_pane_t2

0x0001,

0xfb15,	// (0x0003a206) list_single_touch_info_pane_t

0x94aa,	// (0x00033b9b) bg_popup_heading_pane_cp

0xc236,	// (0x00036927) heading_sub_pane_t1

0x9d56,	// (0x00034447) bg_popup_preview_window_pane_cp_ParamLimits

0x9d56,	// (0x00034447) bg_popup_preview_window_pane_cp

0xc1f1,	// (0x000368e2) heading_preview_pane

0xc1f9,	// (0x000368ea) list_preview_pane_ParamLimits

0xc1f9,	// (0x000368ea) list_preview_pane

0xc244,	// (0x00036935) popup_preview_window_g1

0xc208,	// (0x000368f9) list_single_preview_pane_ParamLimits

0xc208,	// (0x000368f9) list_single_preview_pane

0xc24c,	// (0x0003693d) list_single_preview_pane_g1

0xc254,	// (0x00036945) list_single_preview_pane_t1

0xc21a,	// (0x0003690b) list_single_preview_pane_t2

0x0001,

0xfb1a,	// (0x0003a20b) list_single_preview_pane_t

0xc262,	// (0x00036953) bg_popup_heading_pane_cp2_ParamLimits

0xc262,	// (0x00036953) bg_popup_heading_pane_cp2

0xc278,	// (0x00036969) heading_preview_pane_g1

0xc280,	// (0x00036971) heading_preview_pane_t1_ParamLimits

0xc280,	// (0x00036971) heading_preview_pane_t1

0x80d0,	// (0x000327c1) soft_indicator_pane_t1_ParamLimits

0x87b1,	// (0x00032ea2) scroll_pane_ParamLimits

0x8cc5,	// (0x000333b6) scroll_sc2_left_pane

0x8cce,	// (0x000333bf) scroll_sc2_right_pane

0x8ced,	// (0x000333de) scroll_bg_pane_g1_ParamLimits

0x8d02,	// (0x000333f3) scroll_bg_pane_g2_ParamLimits

0x8d1a,	// (0x0003340b) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00039dd4) scroll_bg_pane_g_ParamLimits

0x8ced,	// (0x000333de) scroll_handle_pane_g1_ParamLimits

0x8d3c,	// (0x0003342d) scroll_handle_pane_g2_ParamLimits

0x8d1a,	// (0x0003340b) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00039ddb) scroll_handle_pane_g_ParamLimits

0x5b6f,	// (0x00030260) popup_choice_list_window_ParamLimits

0x5b6f,	// (0x00030260) popup_choice_list_window

0x9c2c,	// (0x0003431d) choice_list_pane

0x9cae,	// (0x0003439f) cell_toolbar_pane_t1

0x9cd6,	// (0x000343c7) toolbar_button_pane_ParamLimits

0xadb2,	// (0x000354a3) ai_gene_pane_1_t2_ParamLimits

0xadb2,	// (0x000354a3) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a003) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a003) ai_gene_pane_1_t

0xc29d,	// (0x0003698e) scroll_sc2_left_pane_g1

0xc29d,	// (0x0003698e) scroll_sc2_right_pane_g1

0x97e4,	// (0x00033ed5) bg_popup_sub_pane_cp10

0xc2a7,	// (0x00036998) list_choice_list_pane

0xc2c0,	// (0x000369b1) list_single_choice_list_pane_ParamLimits

0xc2c0,	// (0x000369b1) list_single_choice_list_pane

0xc2d3,	// (0x000369c4) list_single_choice_list_pane_g1

0x89d0,	// (0x000330c1) list_single_choice_list_pane_t1_ParamLimits

0x89d0,	// (0x000330c1) list_single_choice_list_pane_t1

0xc2db,	// (0x000369cc) choice_list_pane_g1

0xc2e3,	// (0x000369d4) choice_list_pane_t1

0x767f,	// (0x00031d70) input_focus_pane_cp11

0x8ba4,	// (0x00033295) title_pane_stacon_g2_ParamLimits

0x8ba4,	// (0x00033295) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00039dba) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00039dba) title_pane_stacon_g

0x94aa,	// (0x00033b9b) cursor_press_pane

0x5c17,	// (0x00030308) popup_fep_hwr_window_ParamLimits

0x5c17,	// (0x00030308) popup_fep_hwr_window

0x5c8f,	// (0x00030380) popup_fep_vkb_window_ParamLimits

0x5c8f,	// (0x00030380) popup_fep_vkb_window

0xc2f1,	// (0x000369e2) cursor_press_pane_g1

0x0002,

0xfb43,	// (0x0003a234) fep_vkb_side_pane_g_ParamLimits

0x66de,	// (0x00030dcf) fep_hwr_candidate_pane_ParamLimits

0x66de,	// (0x00030dcf) fep_hwr_candidate_pane

0x6708,	// (0x00030df9) fep_hwr_side_pane_ParamLimits

0x6708,	// (0x00030df9) fep_hwr_side_pane

0x6728,	// (0x00030e19) fep_hwr_top_pane_ParamLimits

0x6728,	// (0x00030e19) fep_hwr_top_pane

0x6740,	// (0x00030e31) fep_hwr_write_pane_ParamLimits

0x6740,	// (0x00030e31) fep_hwr_write_pane

0xfb43,	// (0x0003a234) fep_vkb_side_pane_g

0xc2f9,	// (0x000369ea) fep_hwr_top_pane_g1

0xc30b,	// (0x000369fc) fep_hwr_top_pane_g2

0x677a,	// (0x00030e6b) fep_hwr_top_pane_g3

0x0002,

0xfb1f,	// (0x0003a210) fep_hwr_top_pane_g

0x678f,	// (0x00030e80) fep_hwr_top_text_pane

0x8e92,	// (0x00033583) fep_hwr_top_text_pane_g1

0xc341,	// (0x00036a32) fep_hwr_top_text_pane_t1

0x6885,	// (0x00030f76) fep_hwr_candidate_pane_g1

0xc584,	// (0x00036c75) fep_vkb_keypad_pane_g3_ParamLimits

0xc584,	// (0x00036c75) fep_vkb_keypad_pane_g3

0xc5ac,	// (0x00036c9d) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ac,	// (0x00036c9d) fep_vkb_keypad_pane_g4

0xc61b,	// (0x00036d0c) fep_vkb_bottom_pane_g2_ParamLimits

0xc61b,	// (0x00036d0c) fep_vkb_bottom_pane_g2

0x0001,

0xfb4a,	// (0x0003a23b) fep_vkb_bottom_pane_g_ParamLimits

0xfb4a,	// (0x0003a23b) fep_vkb_bottom_pane_g

0xc29d,	// (0x0003698e) cell_vkb_side_pane_g2

0x0001,

0xfb54,	// (0x0003a245) cell_vkb_side_pane_g

0xc6a6,	// (0x00036d97) cell_vkb_side_pane_t1

0xc6b4,	// (0x00036da5) cell_vkb_side_pane_t1_copy1

0xc29d,	// (0x0003698e) bg_fep_vkb_candidate_pane_g2

0xc7e0,	// (0x00036ed1) cell_vkb_candidate_pane_ParamLimits

0xc34f,	// (0x00036a40) aid_size_cell_vkb_ParamLimits

0xc34f,	// (0x00036a40) aid_size_cell_vkb

0xc7e0,	// (0x00036ed1) cell_vkb_candidate_pane

0x68ac,	// (0x00030f9d) bg_popup_fep_shadow_pane_g1

0xc3db,	// (0x00036acc) fep_vkb_bottom_pane_ParamLimits

0xc3db,	// (0x00036acc) fep_vkb_bottom_pane

0xc411,	// (0x00036b02) fep_vkb_candidate_pane_ParamLimits

0xc411,	// (0x00036b02) fep_vkb_candidate_pane

0xc42d,	// (0x00036b1e) fep_vkb_keypad_pane_ParamLimits

0xc42d,	// (0x00036b1e) fep_vkb_keypad_pane

0xc46c,	// (0x00036b5d) fep_vkb_side_pane_ParamLimits

0xc46c,	// (0x00036b5d) fep_vkb_side_pane

0xc4a8,	// (0x00036b99) fep_vkb_top_pane_ParamLimits

0xc4a8,	// (0x00036b99) fep_vkb_top_pane

0xc4dd,	// (0x00036bce) fep_vkb_top_pane_g1_ParamLimits

0xc4dd,	// (0x00036bce) fep_vkb_top_pane_g1

0xc4ec,	// (0x00036bdd) fep_vkb_top_pane_g2_ParamLimits

0xc4ec,	// (0x00036bdd) fep_vkb_top_pane_g2

0xc4fb,	// (0x00036bec) fep_vkb_top_pane_g3_ParamLimits

0xc4fb,	// (0x00036bec) fep_vkb_top_pane_g3

0x0003,

0xfb3a,	// (0x0003a22b) fep_vkb_top_pane_g_ParamLimits

0xfb3a,	// (0x0003a22b) fep_vkb_top_pane_g

0xc519,	// (0x00036c0a) fep_vkb_top_text_pane_ParamLimits

0xc519,	// (0x00036c0a) fep_vkb_top_text_pane

0xc52a,	// (0x00036c1b) fep_vkb_side_pane_g1_ParamLimits

0xc52a,	// (0x00036c1b) fep_vkb_side_pane_g1

0xc573,	// (0x00036c64) grid_vkb_side_pane_ParamLimits

0xc573,	// (0x00036c64) grid_vkb_side_pane

0x68b4,	// (0x00030fa5) bg_popup_fep_shadow_pane_g2

0x68bd,	// (0x00030fae) bg_popup_fep_shadow_pane_g3

0x68c5,	// (0x00030fb6) bg_popup_fep_shadow_pane_g4

0x68ce,	// (0x00030fbf) bg_popup_fep_shadow_pane_g5

0x68d8,	// (0x00030fc9) bg_popup_fep_shadow_pane_g6

0x68e0,	// (0x00030fd1) bg_popup_fep_shadow_pane_g7

0x88b1,	// (0x00032fa2) bg_popup_fep_shadow_pane_g8

0xc5ca,	// (0x00036cbb) grid_vkb_keypad_number_pane_ParamLimits

0xc5ca,	// (0x00036cbb) grid_vkb_keypad_number_pane

0xc5da,	// (0x00036ccb) grid_vkb_keypad_pane_ParamLimits

0xc5da,	// (0x00036ccb) grid_vkb_keypad_pane

0xc600,	// (0x00036cf1) fep_vkb_bottom_pane_g1_ParamLimits

0xc600,	// (0x00036cf1) fep_vkb_bottom_pane_g1

0xc629,	// (0x00036d1a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc629,	// (0x00036d1a) grid_vkb_keypad_bottom_left_pane

0xc63e,	// (0x00036d2f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc63e,	// (0x00036d2f) grid_vkb_keypad_bottom_right_pane

0xc653,	// (0x00036d44) fep_vkb_top_text_pane_g1

0xc66e,	// (0x00036d5f) fep_vkb_top_text_pane_t1

0xc683,	// (0x00036d74) cell_vkb_side_pane_ParamLimits

0xc683,	// (0x00036d74) cell_vkb_side_pane

0xc29d,	// (0x0003698e) cell_vkb_side_pane_g1

0xc6c2,	// (0x00036db3) cell_vkb_keypad_pane_ParamLimits

0xc6c2,	// (0x00036db3) cell_vkb_keypad_pane

0xc737,	// (0x00036e28) cell_vkb_keypad_pane_g1

0x0008,

0xfb67,	// (0x0003a258) bg_popup_fep_shadow_pane_g

0x68f2,	// (0x00030fe3) cell_hwr_side_pane_g1

0x68f2,	// (0x00030fe3) cell_hwr_side_pane_g2

0xc741,	// (0x00036e32) cell_vkb_keypad_pane_t1

0xc74f,	// (0x00036e40) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc74f,	// (0x00036e40) cell_vkb_keypad_bottom_left_pane

0xc76c,	// (0x00036e5d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc76c,	// (0x00036e5d) cell_vkb_keypad_bottom_right_pane

0xc29d,	// (0x0003698e) cell_vkb_keypad_bottom_left_pane_g1

0xc29d,	// (0x0003698e) cell_vkb_keypad_bottom_right_pane_g1

0xc7a5,	// (0x00036e96) cell_vkb_keypad_number_pane_ParamLimits

0xc7a5,	// (0x00036e96) cell_vkb_keypad_number_pane

0xc7c4,	// (0x00036eb5) cell_vkb_keypad_number_pane_g1

0xc7ce,	// (0x00036ebf) cell_vkb_keypad_number_pane_g2

0xc7d7,	// (0x00036ec8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb59,	// (0x0003a24a) cell_vkb_keypad_number_pane_g

0xc741,	// (0x00036e32) cell_vkb_keypad_number_pane_t1

0xc7fb,	// (0x00036eec) fep_vkb_candidate_pane_g1

0x0001,

0xfb7a,	// (0x0003a26b) cell_hwr_side_pane_g

0xc814,	// (0x00036f05) cell_hwr_side_pane_t1

0x68fc,	// (0x00030fed) cell_hwr_side_pane_t1_copy1

0x690a,	// (0x00030ffb) cell_hwr_candidate_pane_g1

0x6939,	// (0x0003102a) cell_hwr_candidate_pane_t1

0xc29d,	// (0x0003698e) cell_vkb_candidate_pane_g2

0xc858,	// (0x00036f49) cell_vkb_candidate_pane_t1

0x66a5,	// (0x00030d96) bg_popup_fep_shadow_pane_ParamLimits

0x66a5,	// (0x00030d96) bg_popup_fep_shadow_pane

0x675a,	// (0x00030e4b) bg_fep_hwr_top_pane_g4

0xc31d,	// (0x00036a0e) bg_hwr_side_pane_g1_ParamLimits

0xc31d,	// (0x00036a0e) bg_hwr_side_pane_g1

0x67cb,	// (0x00030ebc) cell_hwr_side_pane_ParamLimits

0x67cb,	// (0x00030ebc) cell_hwr_side_pane

0x6806,	// (0x00030ef7) fep_hwr_write_pane_g1_ParamLimits

0x6806,	// (0x00030ef7) fep_hwr_write_pane_g1

0x6813,	// (0x00030f04) fep_hwr_write_pane_g2_ParamLimits

0x6813,	// (0x00030f04) fep_hwr_write_pane_g2

0x6820,	// (0x00030f11) fep_hwr_write_pane_g3_ParamLimits

0x6820,	// (0x00030f11) fep_hwr_write_pane_g3

0x682e,	// (0x00030f1f) fep_hwr_write_pane_g4_ParamLimits

0x682e,	// (0x00030f1f) fep_hwr_write_pane_g4

0x0005,

0xfb26,	// (0x0003a217) fep_hwr_write_pane_g_ParamLimits

0xfb26,	// (0x0003a217) fep_hwr_write_pane_g

0x675a,	// (0x00030e4b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x675a,	// (0x00030e4b) bg_fep_hwr_candidate_pane_g2

0x6843,	// (0x00030f34) cell_hwr_candidate_pane_ParamLimits

0x6843,	// (0x00030f34) cell_hwr_candidate_pane

0x6885,	// (0x00030f76) fep_hwr_candidate_pane_g1_ParamLimits

0xc37d,	// (0x00036a6e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc37d,	// (0x00036a6e) bg_popup_fep_shadow_pane_cp2

0xc50b,	// (0x00036bfc) fep_vkb_top_pane_g4_ParamLimits

0xc50b,	// (0x00036bfc) fep_vkb_top_pane_g4

0xc551,	// (0x00036c42) fep_vkb_side_pane_g2_ParamLimits

0xc551,	// (0x00036c42) fep_vkb_side_pane_g2

0x51c0,	// (0x0002f8b1) list_setting_pane_t4_ParamLimits

0x51c0,	// (0x0002f8b1) list_setting_pane_t4

0x5252,	// (0x0002f943) list_setting_number_pane_t5_ParamLimits

0x5252,	// (0x0002f943) list_setting_number_pane_t5

0x8ed9,	// (0x000335ca) list_double_heading_pane_cp2_ParamLimits

0x8ed9,	// (0x000335ca) list_double_heading_pane_cp2

0x884c,	// (0x00032f3d) list_double_heading_pane_g1_cp2_ParamLimits

0x884c,	// (0x00032f3d) list_double_heading_pane_g1_cp2

0x8858,	// (0x00032f49) list_double_heading_pane_g2_cp2_ParamLimits

0x8858,	// (0x00032f49) list_double_heading_pane_g2_cp2

0xc866,	// (0x00036f57) list_double_heading_pane_t1_cp2_ParamLimits

0xc866,	// (0x00036f57) list_double_heading_pane_t1_cp2

0xc87c,	// (0x00036f6d) list_double_heading_pane_t2_cp2_ParamLimits

0xc87c,	// (0x00036f6d) list_double_heading_pane_t2_cp2

0x7667,	// (0x00031d58) aid_value_unit2

0x4c35,	// (0x0002f326) popup_preview_fixed_window

0x826d,	// (0x0003295e) bg_popup_preview_window_pane_cp02

0xc88e,	// (0x00036f7f) list_preview_fixed_pane

0xc8d4,	// (0x00036fc5) list_empty_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_empty_pane_fp

0xc8d4,	// (0x00036fc5) list_single_cale_day_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_cale_day_pane_fp

0xc8d4,	// (0x00036fc5) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_graphic_heading_pane_fp

0xc8d4,	// (0x00036fc5) list_single_graphic_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_graphic_pane_fp

0xc8d4,	// (0x00036fc5) list_single_heading_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_heading_pane_fp

0xc8d4,	// (0x00036fc5) list_single_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_pane_fp

0xc8ea,	// (0x00036fdb) list_single_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00036fdb) list_single_pane_fp_g1

0x4ef1,	// (0x0002f5e2) list_single_pane_fp_g2_ParamLimits

0x4ef1,	// (0x0002f5e2) list_single_pane_fp_g2

0x7c40,	// (0x00032331) list_single_pane_fp_g3_ParamLimits

0x7c40,	// (0x00032331) list_single_pane_fp_g3

0xc8f6,	// (0x00036fe7) list_single_pane_fp_g4_ParamLimits

0xc8f6,	// (0x00036fe7) list_single_pane_fp_g4

0x0003,

0xfb8d,	// (0x0003a27e) list_single_pane_fp_g_ParamLimits

0xfb8d,	// (0x0003a27e) list_single_pane_fp_g

0x7c54,	// (0x00032345) list_single_pane_fp_t1_ParamLimits

0x7c54,	// (0x00032345) list_single_pane_fp_t1

0x7c6b,	// (0x0003235c) list_single_graphic_pane_fp_g1_ParamLimits

0x7c6b,	// (0x0003235c) list_single_graphic_pane_fp_g1

0xc8ea,	// (0x00036fdb) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00036fdb) list_single_graphic_pane_fp_g2

0x4ef1,	// (0x0002f5e2) list_single_graphic_pane_fp_g3_ParamLimits

0x4ef1,	// (0x0002f5e2) list_single_graphic_pane_fp_g3

0x7c40,	// (0x00032331) list_single_graphic_pane_fp_g4_ParamLimits

0x7c40,	// (0x00032331) list_single_graphic_pane_fp_g4

0xc8f6,	// (0x00036fe7) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00036fe7) list_single_graphic_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a287) list_single_graphic_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a287) list_single_graphic_pane_fp_g

0x7c77,	// (0x00032368) list_single_graphic_pane_fp_t1_ParamLimits

0x7c77,	// (0x00032368) list_single_graphic_pane_fp_t1

0x7c6b,	// (0x0003235c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7c6b,	// (0x0003235c) list_single_graphic_heading_pane_fp_g1

0xc8ea,	// (0x00036fdb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00036fdb) list_single_graphic_heading_pane_fp_g2

0x4ef1,	// (0x0002f5e2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4ef1,	// (0x0002f5e2) list_single_graphic_heading_pane_fp_g3

0x7c40,	// (0x00032331) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7c40,	// (0x00032331) list_single_graphic_heading_pane_fp_g4

0xc8f6,	// (0x00036fe7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00036fe7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a287) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a287) list_single_graphic_heading_pane_fp_g

0x7c8d,	// (0x0003237e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7c8d,	// (0x0003237e) list_single_graphic_heading_pane_fp_t1

0x7ca3,	// (0x00032394) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7ca3,	// (0x00032394) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0003a292) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0003a292) list_single_graphic_heading_pane_fp_t

0x7cb5,	// (0x000323a6) list_single_cale_day_pane_fp_g1_ParamLimits

0x7cb5,	// (0x000323a6) list_single_cale_day_pane_fp_g1

0xc902,	// (0x00036ff3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc902,	// (0x00036ff3) list_single_cale_day_pane_fp_g2

0x7ced,	// (0x000323de) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ced,	// (0x000323de) list_single_cale_day_pane_fp_g3

0x7d15,	// (0x00032406) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d15,	// (0x00032406) list_single_cale_day_pane_fp_g4

0x7d39,	// (0x0003242a) list_single_cale_day_pane_fp_g5_ParamLimits

0x7d39,	// (0x0003242a) list_single_cale_day_pane_fp_g5

0x0004,

0xfba6,	// (0x0003a297) list_single_cale_day_pane_fp_g_ParamLimits

0xfba6,	// (0x0003a297) list_single_cale_day_pane_fp_g

0x7d5d,	// (0x0003244e) list_single_cale_day_pane_fp_t1_ParamLimits

0x7d5d,	// (0x0003244e) list_single_cale_day_pane_fp_t1

0x7d83,	// (0x00032474) list_single_cale_day_pane_fp_t2_ParamLimits

0x7d83,	// (0x00032474) list_single_cale_day_pane_fp_t2

0x7d9c,	// (0x0003248d) list_single_cale_day_pane_fp_t3_ParamLimits

0x7d9c,	// (0x0003248d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb1,	// (0x0003a2a2) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb1,	// (0x0003a2a2) list_single_cale_day_pane_fp_t

0xc8ea,	// (0x00036fdb) list_empty_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00036fdb) list_empty_pane_fp_g1

0x7db5,	// (0x000324a6) list_empty_pane_fp_t1

0x7dc3,	// (0x000324b4) list_empty_pane_fp_t2

0x0001,

0xfbb8,	// (0x0003a2a9) list_empty_pane_fp_t

0xc8ea,	// (0x00036fdb) list_single_heading_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00036fdb) list_single_heading_pane_fp_g1

0x4ef1,	// (0x0002f5e2) list_single_heading_pane_fp_g2_ParamLimits

0x4ef1,	// (0x0002f5e2) list_single_heading_pane_fp_g2

0x7c40,	// (0x00032331) list_single_heading_pane_fp_g3_ParamLimits

0x7c40,	// (0x00032331) list_single_heading_pane_fp_g3

0x0002,

0xfbbd,	// (0x0003a2ae) list_single_heading_pane_fp_g_ParamLimits

0xfbbd,	// (0x0003a2ae) list_single_heading_pane_fp_g

0x7dd1,	// (0x000324c2) list_single_heading_pane_fp_t1_ParamLimits

0x7dd1,	// (0x000324c2) list_single_heading_pane_fp_t1

0x7de3,	// (0x000324d4) list_single_heading_pane_fp_t2_ParamLimits

0x7de3,	// (0x000324d4) list_single_heading_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003a2b5) list_single_heading_pane_fp_t_ParamLimits

0xfbc4,	// (0x0003a2b5) list_single_heading_pane_fp_t

0x8a3e,	// (0x0003312f) aid_size_cell_fast

0x81dd,	// (0x000328ce) soft_indicator_pane_cp1_t1

0x8a78,	// (0x00033169) cell_app_pane_cp2_ParamLimits

0x8a78,	// (0x00033169) cell_app_pane_cp2

0x66c7,	// (0x00030db8) fep_hwr_candidate_drop_down_list_pane

0x689f,	// (0x00030f90) fep_hwr_candidate_pane_g3_ParamLimits

0x689f,	// (0x00030f90) fep_hwr_candidate_pane_g3

0x3a5b,	// (0x0002e14c) fep_hwr_candidate_pane_g4_ParamLimits

0x3a5b,	// (0x0002e14c) fep_hwr_candidate_pane_g4

0x0002,

0xfb33,	// (0x0003a224) fep_hwr_candidate_pane_g_ParamLimits

0xfb33,	// (0x0003a224) fep_hwr_candidate_pane_g

0xc400,	// (0x00036af1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc400,	// (0x00036af1) fep_vkb_candidate_drop_down_list_pane

0xc803,	// (0x00036ef4) fep_vkb_candidate_pane_g3

0xc80b,	// (0x00036efc) fep_vkb_candidate_pane_g4

0x0002,

0xfb60,	// (0x0003a251) fep_vkb_candidate_pane_g

0x690a,	// (0x00030ffb) cell_hwr_candidate_pane_g1_ParamLimits

0x6918,	// (0x00031009) cell_hwr_candidate_pane_g3_ParamLimits

0x6918,	// (0x00031009) cell_hwr_candidate_pane_g3

0xdf65,	// (0x00038656) cell_hwr_candidate_pane_g4_ParamLimits

0xdf65,	// (0x00038656) cell_hwr_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0003a270) cell_hwr_candidate_pane_g_ParamLimits

0xfb7f,	// (0x0003a270) cell_hwr_candidate_pane_g

0xc822,	// (0x00036f13) cell_vkb_candidate_pane_g3_ParamLimits

0xc822,	// (0x00036f13) cell_vkb_candidate_pane_g3

0xc83d,	// (0x00036f2e) cell_vkb_candidate_pane_g4_ParamLimits

0xc83d,	// (0x00036f2e) cell_vkb_candidate_pane_g4

0xc90e,	// (0x00036fff) cell_app_pane_cp2_g1_ParamLimits

0xc90e,	// (0x00036fff) cell_app_pane_cp2_g1

0xc92c,	// (0x0003701d) cell_app_pane_cp2_g2_ParamLimits

0xc92c,	// (0x0003701d) cell_app_pane_cp2_g2

0x0001,

0xfbc9,	// (0x0003a2ba) cell_app_pane_cp2_g_ParamLimits

0xfbc9,	// (0x0003a2ba) cell_app_pane_cp2_g

0xc938,	// (0x00037029) cell_app_pane_cp2_t1_ParamLimits

0xc938,	// (0x00037029) cell_app_pane_cp2_t1

0x883e,	// (0x00032f2f) grid_highlight_pane_cp1_ParamLimits

0x883e,	// (0x00032f2f) grid_highlight_pane_cp1

0x6957,	// (0x00031048) cell_hwr_candidate_pane_cp1_ParamLimits

0x6957,	// (0x00031048) cell_hwr_candidate_pane_cp1

0x690a,	// (0x00030ffb) fep_hwr_candidate_drop_down_list_pane_g1

0x6976,	// (0x00031067) fep_hwr_candidate_drop_down_list_pane_g2

0x6983,	// (0x00031074) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0003a2bf) fep_hwr_candidate_drop_down_list_pane_g

0x6990,	// (0x00031081) fep_hwr_candidate_drop_down_list_scroll_pane

0x6999,	// (0x0003108a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6999,	// (0x0003108a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69a6,	// (0x00031097) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69a6,	// (0x00031097) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69b3,	// (0x000310a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69b3,	// (0x000310a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69c0,	// (0x000310b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69c0,	// (0x000310b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69db,	// (0x000310cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69db,	// (0x000310cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x69f6,	// (0x000310e7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69f6,	// (0x000310e7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a11,	// (0x00031102) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a11,	// (0x00031102) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a2c,	// (0x0003111d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a2c,	// (0x0003111d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0003a2c6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0003a2c6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc94a,	// (0x0003703b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc94a,	// (0x0003703b) cell_vkb_candidate_pane_cp1

0xc50b,	// (0x00036bfc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc50b,	// (0x00036bfc) fep_vkb_candidate_drop_down_list_pane_g1

0xc96a,	// (0x0003705b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc96a,	// (0x0003705b) fep_vkb_candidate_drop_down_list_pane_g2

0xc977,	// (0x00037068) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc977,	// (0x00037068) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe6,	// (0x0003a2d7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe6,	// (0x0003a2d7) fep_vkb_candidate_drop_down_list_pane_g

0xc984,	// (0x00037075) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc984,	// (0x00037075) fep_vkb_candidate_drop_down_list_scroll_pane

0xc991,	// (0x00037082) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc991,	// (0x00037082) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc99e,	// (0x0003708f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc99e,	// (0x0003708f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9aa,	// (0x0003709b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9aa,	// (0x0003709b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9b6,	// (0x000370a7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9b6,	// (0x000370a7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9d7,	// (0x000370c8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9d7,	// (0x000370c8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x000370e9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x000370e9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x0003710a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x0003710a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0003a2de) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0003a2de) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x769d,	// (0x00031d8e) title_pane_g1_ParamLimits

0x76aa,	// (0x00031d9b) title_pane_g2_ParamLimits

0xf54e,	// (0x00039c3f) title_pane_g_ParamLimits

0x8e82,	// (0x00033573) aid_call2_pane

0x8e8a,	// (0x0003357b) aid_call_pane

0x8e92,	// (0x00033583) popup_clock_analogue_window_g1

0x8e92,	// (0x00033583) popup_clock_analogue_window_g2

0x5695,	// (0x0002fd86) popup_clock_analogue_window_g3

0x569e,	// (0x0002fd8f) popup_clock_analogue_window_g4

0x7689,	// (0x00031d7a) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00039de9) popup_clock_analogue_window_g

0x56a6,	// (0x0002fd97) popup_clock_analogue_window_t1

0x56b4,	// (0x0002fda5) clock_digital_number_pane_ParamLimits

0x56b4,	// (0x0002fda5) clock_digital_number_pane

0x56c0,	// (0x0002fdb1) clock_digital_number_pane_cp02_ParamLimits

0x56c0,	// (0x0002fdb1) clock_digital_number_pane_cp02

0x56cc,	// (0x0002fdbd) clock_digital_number_pane_cp03_ParamLimits

0x56cc,	// (0x0002fdbd) clock_digital_number_pane_cp03

0x56d8,	// (0x0002fdc9) clock_digital_number_pane_cp04_ParamLimits

0x56d8,	// (0x0002fdc9) clock_digital_number_pane_cp04

0x56e4,	// (0x0002fdd5) clock_digital_separator_pane_ParamLimits

0x56e4,	// (0x0002fdd5) clock_digital_separator_pane

0x56f0,	// (0x0002fde1) popup_clock_digital_window_t1_ParamLimits

0x56f0,	// (0x0002fde1) popup_clock_digital_window_t1

0x7689,	// (0x00031d7a) clock_digital_number_pane_g1

0x7689,	// (0x00031d7a) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00039df4) clock_digital_number_pane_g

0x7689,	// (0x00031d7a) clock_digital_separator_pane_g1

0x7689,	// (0x00031d7a) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00039df4) clock_digital_separator_pane_g

0x9806,	// (0x00033ef7) aid_fill_nsta_ParamLimits

0x9948,	// (0x00034039) indicator_nsta_pane_ParamLimits

0x9ac1,	// (0x000341b2) popup_clock_analogue_window

0x9ac1,	// (0x000341b2) popup_clock_digital_window

0x7fe4,	// (0x000326d5) grid_indicator_nsta_pane_ParamLimits

0xbc75,	// (0x00036366) clock_nsta_pane_t2

0x0001,

0xfab3,	// (0x0003a1a4) clock_nsta_pane_t

0x5659,	// (0x0002fd4a) aid_size_max_handle

0x5663,	// (0x0002fd54) aid_size_min_handle

0x94aa,	// (0x00033b9b) editor_scroll_pane

0xca55,	// (0x00037146) ex_editor_pane

0x89ac,	// (0x0003309d) scroll_pane_cp13

0x87dd,	// (0x00032ece) scroll_pane_cp14

0x8ec1,	// (0x000335b2) scroll_pane_cp36

0x8eed,	// (0x000335de) list_single_graphic_hl_pane_cp2_ParamLimits

0x8eed,	// (0x000335de) list_single_graphic_hl_pane_cp2

0x7889,	// (0x00031f7a) list_single_graphic_hl_pane_ParamLimits

0x7889,	// (0x00031f7a) list_single_graphic_hl_pane

0x7df9,	// (0x000324ea) aid_size_min_hl_cp1

0xca5d,	// (0x0003714e) list_highlight_pane_cp34_ParamLimits

0xca5d,	// (0x0003714e) list_highlight_pane_cp34

0xca6e,	// (0x0003715f) list_single_graphic_hl_pane_g1_ParamLimits

0xca6e,	// (0x0003715f) list_single_graphic_hl_pane_g1

0x7e02,	// (0x000324f3) list_single_graphic_hl_pane_g2_ParamLimits

0x7e02,	// (0x000324f3) list_single_graphic_hl_pane_g2

0x7e02,	// (0x000324f3) list_single_graphic_hl_pane_g3_ParamLimits

0x7e02,	// (0x000324f3) list_single_graphic_hl_pane_g3

0x7e0e,	// (0x000324ff) list_single_graphic_hl_pane_g4_ParamLimits

0x7e0e,	// (0x000324ff) list_single_graphic_hl_pane_g4

0x7e1a,	// (0x0003250b) list_single_graphic_hl_pane_g5_ParamLimits

0x7e1a,	// (0x0003250b) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0003a2ef) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0003a2ef) list_single_graphic_hl_pane_g

0x7e2e,	// (0x0003251f) list_single_graphic_hl_pane_t1_ParamLimits

0x7e2e,	// (0x0003251f) list_single_graphic_hl_pane_t1

0xca7b,	// (0x0003716c) aid_size_min_hl_cp2

0xca84,	// (0x00037175) list_highlight_pane_cp34_cp2_ParamLimits

0xca84,	// (0x00037175) list_highlight_pane_cp34_cp2

0xca6e,	// (0x0003715f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca6e,	// (0x0003715f) list_single_graphic_hl_pane_g1_cp2

0xca91,	// (0x00037182) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca91,	// (0x00037182) list_single_graphic_hl_pane_g2_cp2

0xca9d,	// (0x0003718e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca9d,	// (0x0003718e) list_single_graphic_hl_pane_g3_cp2

0x92ce,	// (0x000339bf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x92ce,	// (0x000339bf) list_single_graphic_hl_pane_g4_cp2

0xcaab,	// (0x0003719c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaab,	// (0x0003719c) list_single_graphic_hl_pane_g5_cp2

0x5a27,	// (0x00030118) control_pane_g4_ParamLimits

0x5a27,	// (0x00030118) control_pane_g4

0x97e4,	// (0x00033ed5) bg_popup_sub_pane_cp10_ParamLimits

0xc2a7,	// (0x00036998) list_choice_list_pane_ParamLimits

0xc2b6,	// (0x000369a7) scroll_pane_cp23

0x826d,	// (0x0003295e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc88e,	// (0x00036f7f) list_preview_fixed_pane_ParamLimits

0xc8a4,	// (0x00036f95) list_preview_fixed_pane_cp_ParamLimits

0xc8a4,	// (0x00036f95) list_preview_fixed_pane_cp

0xc8b0,	// (0x00036fa1) popup_preview_fixed_window_g1_ParamLimits

0xc8b0,	// (0x00036fa1) popup_preview_fixed_window_g1

0xc8bc,	// (0x00036fad) popup_preview_fixed_window_g2_ParamLimits

0xc8bc,	// (0x00036fad) popup_preview_fixed_window_g2

0x0002,

0xfb86,	// (0x0003a277) popup_preview_fixed_window_g_ParamLimits

0xfb86,	// (0x0003a277) popup_preview_fixed_window_g

0x55cd,	// (0x0002fcbe) aid_navi_side_left_pane_ParamLimits

0x55e2,	// (0x0002fcd3) aid_navi_side_right_pane_ParamLimits

0x55fa,	// (0x0002fceb) navi_icon_pane_stacon_ParamLimits

0x560e,	// (0x0002fcff) navi_navi_pane_stacon_ParamLimits

0x55fa,	// (0x0002fceb) navi_text_pane_stacon_ParamLimits

0x4b04,	// (0x0002f1f5) main_text_info_pane

0xcad5,	// (0x000371c6) listscroll_text_info_pane

0xcadd,	// (0x000371ce) list_text_info_pane_ParamLimits

0xcadd,	// (0x000371ce) list_text_info_pane

0xcaec,	// (0x000371dd) scroll_pane_cp24_ParamLimits

0xcaec,	// (0x000371dd) scroll_pane_cp24

0xcb0a,	// (0x000371fb) list_text_info_pane_t1_ParamLimits

0xcb0a,	// (0x000371fb) list_text_info_pane_t1

0x5b8b,	// (0x0003027c) popup_fast_swap2_window_ParamLimits

0x5b8b,	// (0x0003027c) popup_fast_swap2_window

0xcb3f,	// (0x00037230) aid_size_cell_fast2

0x767f,	// (0x00031d70) bg_popup_window_pane_cp17

0xa152,	// (0x00034843) heading_pane_cp2

0x84b0,	// (0x00032ba1) listscroll_fast2_pane

0xcb49,	// (0x0003723a) grid_fast2_pane

0xcb53,	// (0x00037244) listscroll_fast2_pane_g1

0xcb5b,	// (0x0003724c) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0003a2fa) listscroll_fast2_pane_g

0x89ac,	// (0x0003309d) scroll_pane_cp26

0xcb65,	// (0x00037256) cell_fast2_pane_ParamLimits

0xcb65,	// (0x00037256) cell_fast2_pane

0xcb7a,	// (0x0003726b) cell_fast2_pane_g1

0xcb83,	// (0x00037274) cell_fast2_pane_g2

0xcb8c,	// (0x0003727d) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0003a2ff) cell_fast2_pane_g

0x859a,	// (0x00032c8b) grid_highlight_pane_cp9

0x5b4b,	// (0x0003023c) main_eswt_pane_ParamLimits

0x5b4b,	// (0x0003023c) main_eswt_pane

0xcb01,	// (0x000371f2) list_single_text_info_pane

0xcb94,	// (0x00037285) eswt_ctrl_button_pane

0xcb94,	// (0x00037285) eswt_ctrl_canvas_pane

0xcb9c,	// (0x0003728d) eswt_ctrl_combo_pane

0xcb94,	// (0x00037285) eswt_ctrl_default_pane

0xcb94,	// (0x00037285) eswt_ctrl_label_pane

0xcba4,	// (0x00037295) eswt_ctrl_wait_pane

0xcbac,	// (0x0003729d) eswt_shell_pane

0x767f,	// (0x00031d70) listscroll_eswt_app_pane

0xcbcc,	// (0x000372bd) popup_eswt_tasktip_window_ParamLimits

0xcbcc,	// (0x000372bd) popup_eswt_tasktip_window

0x9d56,	// (0x00034447) bg_popup_window_pane_cp18

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_ParamLimits

0xcbdd,	// (0x000372ce) eswt_control_pane_g1

0xcbea,	// (0x000372db) eswt_control_pane_g2_ParamLimits

0xcbea,	// (0x000372db) eswt_control_pane_g2

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_ParamLimits

0xcbf7,	// (0x000372e8) eswt_control_pane_g3

0xcc04,	// (0x000372f5) eswt_control_pane_g4_ParamLimits

0xcc04,	// (0x000372f5) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0003a306) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0003a306) eswt_control_pane_g

0x883e,	// (0x00032f2f) bg_button_pane_ParamLimits

0x883e,	// (0x00032f2f) bg_button_pane

0x85af,	// (0x00032ca0) common_borders_pane_copy2_ParamLimits

0x85af,	// (0x00032ca0) common_borders_pane_copy2

0xcc11,	// (0x00037302) control_button_pane_g1_ParamLimits

0xcc11,	// (0x00037302) control_button_pane_g1

0xcc1d,	// (0x0003730e) control_button_pane_g2_ParamLimits

0xcc1d,	// (0x0003730e) control_button_pane_g2

0xcc29,	// (0x0003731a) control_button_pane_g3_ParamLimits

0xcc29,	// (0x0003731a) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0003a30f) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0003a30f) control_button_pane_g

0xcc3d,	// (0x0003732e) control_button_pane_t1

0xcc4b,	// (0x0003733c) control_button_pane_t2

0x0001,

0xfc25,	// (0x0003a316) control_button_pane_t

0x9ce2,	// (0x000343d3) bg_button_pane_g1

0x9cf2,	// (0x000343e3) bg_button_pane_g2

0x9cea,	// (0x000343db) bg_button_pane_g3

0x9d02,	// (0x000343f3) bg_button_pane_g4

0x9cfa,	// (0x000343eb) bg_button_pane_g5

0x9d0a,	// (0x000343fb) bg_button_pane_g6

0x9d12,	// (0x00034403) bg_button_pane_g7

0x9d22,	// (0x00034413) bg_button_pane_g8

0x9d1a,	// (0x0003440b) bg_button_pane_g9

0x0008,

0xf866,	// (0x00039f57) bg_button_pane_g

0xc262,	// (0x00036953) common_borders_pane_ParamLimits

0xc262,	// (0x00036953) common_borders_pane

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy1_ParamLimits

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy1

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy1_ParamLimits

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy1

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy1_ParamLimits

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy1

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy1_ParamLimits

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy1

0xc29d,	// (0x0003698e) bg_eswt_ctrl_canvas_pane_g1

0xc262,	// (0x00036953) common_borders_pane_cp2_ParamLimits

0xc262,	// (0x00036953) common_borders_pane_cp2

0xc262,	// (0x00036953) common_borders_pane_cp3_ParamLimits

0xc262,	// (0x00036953) common_borders_pane_cp3

0xcc59,	// (0x0003734a) separator_horizontal_pane

0xcc61,	// (0x00037352) separator_vertical_pane

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy2_ParamLimits

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy2

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy2_ParamLimits

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy2

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy2_ParamLimits

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy2

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy2_ParamLimits

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy2

0x767f,	// (0x00031d70) common_borders_pane_cp4

0xcc6a,	// (0x0003735b) separator_horizontal_pane_g1

0xcc73,	// (0x00037364) separator_horizontal_pane_g2

0xcc7c,	// (0x0003736d) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0003a31b) separator_horizontal_pane_g

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy3_ParamLimits

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy3

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy3_ParamLimits

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy3

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy3_ParamLimits

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy3

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy3_ParamLimits

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy3

0x767f,	// (0x00031d70) common_borders_pane_cp5

0xcc85,	// (0x00037376) separator_vertical_pane_g1

0xcc8e,	// (0x0003737f) separator_vertical_pane_g2

0xcc97,	// (0x00037388) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0003a322) separator_vertical_pane_g

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy4_ParamLimits

0xcbdd,	// (0x000372ce) eswt_control_pane_g1_copy4

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy4_ParamLimits

0xcbea,	// (0x000372db) eswt_control_pane_g2_copy4

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy4_ParamLimits

0xcbf7,	// (0x000372e8) eswt_control_pane_g3_copy4

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy4_ParamLimits

0xcc04,	// (0x000372f5) eswt_control_pane_g4_copy4

0xcca0,	// (0x00037391) eswt_ctrl_combo_button_pane

0xcca8,	// (0x00037399) eswt_ctrl_input_pane

0xccb0,	// (0x000373a1) popup_choice_list_window_cp70

0xccb8,	// (0x000373a9) eswt_ctrl_input_pane_t1

0x767f,	// (0x00031d70) input_focus_pane_cp70

0xc262,	// (0x00036953) bg_button_pane_cp70_ParamLimits

0xc262,	// (0x00036953) bg_button_pane_cp70

0xccc6,	// (0x000373b7) eswt_ctrl_combo_button_pane_g1

0xccce,	// (0x000373bf) wait_bar_pane_cp70

0x9d56,	// (0x00034447) bg_popup_window_pane_cp70_ParamLimits

0x9d56,	// (0x00034447) bg_popup_window_pane_cp70

0xccd6,	// (0x000373c7) popup_eswt_tasktip_window_t1

0xccec,	// (0x000373dd) wait_bar_pane_cp71_ParamLimits

0xccec,	// (0x000373dd) wait_bar_pane_cp71

0xccf8,	// (0x000373e9) grid_eswt_app_pane

0x8cc5,	// (0x000333b6) scroll_pane_cp70

0xcd01,	// (0x000373f2) cell_eswt_app_pane_ParamLimits

0xcd01,	// (0x000373f2) cell_eswt_app_pane

0xcd35,	// (0x00037426) cell_eswt_app_pane_g1_ParamLimits

0xcd35,	// (0x00037426) cell_eswt_app_pane_g1

0xcd64,	// (0x00037455) cell_eswt_app_pane_g2_ParamLimits

0xcd64,	// (0x00037455) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0003a329) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0003a329) cell_eswt_app_pane_g

0xcd88,	// (0x00037479) cell_eswt_app_pane_t1_ParamLimits

0xcd88,	// (0x00037479) cell_eswt_app_pane_t1

0xcdba,	// (0x000374ab) grid_highlight_pane_cp70_ParamLimits

0xcdba,	// (0x000374ab) grid_highlight_pane_cp70

0x938b,	// (0x00033a7c) set_content_pane_g1

0x9745,	// (0x00033e36) status_small_volume_pane

0x6a47,	// (0x00031138) status_small_volume_pane_g1

0x6a4f,	// (0x00031140) volume_small2_pane

0x6a58,	// (0x00031149) volume_small2_pane_g1

0x6a61,	// (0x00031152) volume_small2_pane_g2

0x6a6a,	// (0x0003115b) volume_small2_pane_g3

0x6a73,	// (0x00031164) volume_small2_pane_g4

0x6a7c,	// (0x0003116d) volume_small2_pane_g5

0x6a85,	// (0x00031176) volume_small2_pane_g6

0x6a8e,	// (0x0003117f) volume_small2_pane_g7

0x6a97,	// (0x00031188) volume_small2_pane_g8

0x6aa0,	// (0x00031191) volume_small2_pane_g9

0x6aa9,	// (0x0003119a) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0003a32e) volume_small2_pane_g

0xc653,	// (0x00036d44) fep_vkb_top_text_pane_g1_ParamLimits

0xc66e,	// (0x00036d5f) fep_vkb_top_text_pane_t1_ParamLimits

0xc8c8,	// (0x00036fb9) popup_preview_fixed_window_g3_ParamLimits

0xc8c8,	// (0x00036fb9) popup_preview_fixed_window_g3

0x6032,	// (0x00030723) popup_toolbar_trans_pane

0xb0b4,	// (0x000357a5) aid_height_set_list_ParamLimits

0xb0c5,	// (0x000357b6) aid_size_parent_ParamLimits

0x97e4,	// (0x00033ed5) list_highlight_pane_cp2_ParamLimits

0x938b,	// (0x00033a7c) set_content_pane_g1_ParamLimits

0x78ab,	// (0x00031f9c) list_single_image_pane_ParamLimits

0x78ab,	// (0x00031f9c) list_single_image_pane

0xcdc6,	// (0x000374b7) aid_size_cell_image_ParamLimits

0xcdc6,	// (0x000374b7) aid_size_cell_image

0xcdd3,	// (0x000374c4) grid_single_image_pane_ParamLimits

0xcdd3,	// (0x000374c4) grid_single_image_pane

0xcddf,	// (0x000374d0) list_single_image_pane_g1_ParamLimits

0xcddf,	// (0x000374d0) list_single_image_pane_g1

0xcdeb,	// (0x000374dc) list_single_image_pane_g2_ParamLimits

0xcdeb,	// (0x000374dc) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0003a343) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0003a343) list_single_image_pane_g

0xcdff,	// (0x000374f0) list_single_image_pane_t1_ParamLimits

0xcdff,	// (0x000374f0) list_single_image_pane_t1

0xce15,	// (0x00037506) cell_image_list_pane_ParamLimits

0xce15,	// (0x00037506) cell_image_list_pane

0xce29,	// (0x0003751a) cell_image_list_pane_g1

0xce32,	// (0x00037523) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0003a348) cell_image_list_pane_g

0xce3b,	// (0x0003752c) aid_size_cell_tb_trans_pane

0x883e,	// (0x00032f2f) bg_tb_trans_pane

0xce4d,	// (0x0003753e) grid_tb_trans_pane

0x9ce2,	// (0x000343d3) bg_tb_trans_pane_g1

0x9cf2,	// (0x000343e3) bg_tb_trans_pane_g2

0x9cea,	// (0x000343db) bg_tb_trans_pane_g3

0x9d02,	// (0x000343f3) bg_tb_trans_pane_g4

0x9cfa,	// (0x000343eb) bg_tb_trans_pane_g5

0x9d22,	// (0x00034413) bg_tb_trans_pane_g6

0x9d1a,	// (0x0003440b) bg_tb_trans_pane_g7

0x9d0a,	// (0x000343fb) bg_tb_trans_pane_g8

0x9d12,	// (0x00034403) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0003a34d) bg_tb_trans_pane_g

0xce61,	// (0x00037552) cell_toolbar_trans_pane_ParamLimits

0xce61,	// (0x00037552) cell_toolbar_trans_pane

0xc29d,	// (0x0003698e) cell_toolbar_trans_pane_g1

0xbe48,	// (0x00036539) list_form2_midp_pane_t1

0xbe56,	// (0x00036547) list_form2_midp_pane_t2

0x0001,

0xfaf9,	// (0x0003a1ea) list_form2_midp_pane_t

0xbe64,	// (0x00036555) scroll_pane_cp51_ParamLimits

0xc020,	// (0x00036711) form2_midp_wait_pane_g1

0xc029,	// (0x0003671a) form2_midp_wait_pane_g2

0xc032,	// (0x00036723) form2_midp_wait_pane_g3

0x0002,

0xfb0e,	// (0x0003a1ff) form2_midp_wait_pane_g

0x7fe4,	// (0x000326d5) list_highlight_pane_cp21_ParamLimits

0xc080,	// (0x00036771) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc08f,	// (0x00036780) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x781e,	// (0x00031f0f) list_single_2graphic_im_pane_ParamLimits

0x781e,	// (0x00031f0f) list_single_2graphic_im_pane

0xce87,	// (0x00037578) list_single_2graphic_im_pane_g1_ParamLimits

0xce87,	// (0x00037578) list_single_2graphic_im_pane_g1

0xce98,	// (0x00037589) list_single_2graphic_im_pane_g2_ParamLimits

0xce98,	// (0x00037589) list_single_2graphic_im_pane_g2

0xcea4,	// (0x00037595) list_single_2graphic_im_pane_g3_ParamLimits

0xcea4,	// (0x00037595) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0003a360) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0003a360) list_single_2graphic_im_pane_g

0xcec4,	// (0x000375b5) list_single_2graphic_im_pane_t1_ParamLimits

0xcec4,	// (0x000375b5) list_single_2graphic_im_pane_t1

0xc8d4,	// (0x00036fc5) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d4,	// (0x00036fc5) list_single_graphic_2heading_pane_fp

0x7c6b,	// (0x0003235c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7c6b,	// (0x0003235c) list_single_graphic_2heading_pane_fp_g1

0xc8ea,	// (0x00036fdb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00036fdb) list_single_graphic_2heading_pane_fp_g2

0x4ef1,	// (0x0002f5e2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4ef1,	// (0x0002f5e2) list_single_graphic_2heading_pane_fp_g3

0x7c40,	// (0x00032331) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7c40,	// (0x00032331) list_single_graphic_2heading_pane_fp_g4

0xc8f6,	// (0x00036fe7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00036fe7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a287) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a287) list_single_graphic_2heading_pane_fp_g

0x7e44,	// (0x00032535) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7e44,	// (0x00032535) list_single_graphic_2heading_pane_fp_t1

0x7ca3,	// (0x00032394) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7ca3,	// (0x00032394) list_single_graphic_2heading_pane_fp_t2

0x7e5a,	// (0x0003254b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7e5a,	// (0x0003254b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0003a369) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0003a369) list_single_graphic_2heading_pane_fp_t

0xc329,	// (0x00036a1a) fep_hwr_write_pane_g5_ParamLimits

0xc329,	// (0x00036a1a) fep_hwr_write_pane_g5

0xc335,	// (0x00036a26) fep_hwr_write_pane_g6_ParamLimits

0xc335,	// (0x00036a26) fep_hwr_write_pane_g6

0xcbac,	// (0x0003729d) eswt_shell_pane_ParamLimits

0x9d56,	// (0x00034447) bg_popup_window_pane_cp18_ParamLimits

0xb013,	// (0x00035704) heading_pane_cp70

0xccd6,	// (0x000373c7) popup_eswt_tasktip_window_t1_ParamLimits

0x985b,	// (0x00033f4c) aid_touch_tab_arrow_left

0x9867,	// (0x00033f58) aid_touch_tab_arrow_right

0x76bb,	// (0x00031dac) title_pane_g3_ParamLimits

0x76bb,	// (0x00031dac) title_pane_g3

0x87fd,	// (0x00032eee) set_value_pane_g1

0x6032,	// (0x00030723) popup_toolbar_trans_pane_ParamLimits

0xce3b,	// (0x0003752c) aid_size_cell_tb_trans_pane_ParamLimits

0x883e,	// (0x00032f2f) bg_tb_trans_pane_ParamLimits

0xce4d,	// (0x0003753e) grid_tb_trans_pane_ParamLimits

0x826d,	// (0x0003295e) cont_note_pane_ParamLimits

0x826d,	// (0x0003295e) cont_note_pane

0x85af,	// (0x00032ca0) cont_snote2_single_text_pane_ParamLimits

0x85af,	// (0x00032ca0) cont_snote2_single_text_pane

0x85af,	// (0x00032ca0) cont_snote2_single_graphic_pane_ParamLimits

0x85af,	// (0x00032ca0) cont_snote2_single_graphic_pane

0xa368,	// (0x00034a59) cont_note_wait_pane_ParamLimits

0xa368,	// (0x00034a59) cont_note_wait_pane

0xa368,	// (0x00034a59) cont_note_image_pane_ParamLimits

0xa368,	// (0x00034a59) cont_note_image_pane

0xcef5,	// (0x000375e6) popup_note2_window_g1_ParamLimits

0xcef5,	// (0x000375e6) popup_note2_window_g1

0xcf26,	// (0x00037617) popup_note2_window_t1_ParamLimits

0xcf26,	// (0x00037617) popup_note2_window_t1

0xcf6b,	// (0x0003765c) popup_note2_window_t2_ParamLimits

0xcf6b,	// (0x0003765c) popup_note2_window_t2

0xcfb0,	// (0x000376a1) popup_note2_window_t3_ParamLimits

0xcfb0,	// (0x000376a1) popup_note2_window_t3

0xcff5,	// (0x000376e6) popup_note2_window_t4_ParamLimits

0xcff5,	// (0x000376e6) popup_note2_window_t4

0x82e5,	// (0x000329d6) popup_note2_window_t5_ParamLimits

0x82e5,	// (0x000329d6) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0003a375) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0003a375) popup_note2_window_t

0xd024,	// (0x00037715) popup_note2_image_window_g1_ParamLimits

0xd024,	// (0x00037715) popup_note2_image_window_g1

0xd030,	// (0x00037721) popup_note2_image_window_g2_ParamLimits

0xd030,	// (0x00037721) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0003a380) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0003a380) popup_note2_image_window_g

0xd042,	// (0x00037733) popup_note2_image_window_t1_ParamLimits

0xd042,	// (0x00037733) popup_note2_image_window_t1

0xd05a,	// (0x0003774b) popup_note2_image_window_t2_ParamLimits

0xd05a,	// (0x0003774b) popup_note2_image_window_t2

0xd072,	// (0x00037763) popup_note2_image_window_t3_ParamLimits

0xd072,	// (0x00037763) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0003a385) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0003a385) popup_note2_image_window_t

0xa376,	// (0x00034a67) popup_note2_wait_window_g1_ParamLimits

0xa376,	// (0x00034a67) popup_note2_wait_window_g1

0xd08e,	// (0x0003777f) popup_note2_wait_window_g2_ParamLimits

0xd08e,	// (0x0003777f) popup_note2_wait_window_g2

0xa38e,	// (0x00034a7f) popup_note2_wait_window_g3_ParamLimits

0xa38e,	// (0x00034a7f) popup_note2_wait_window_g3

0x0002,

0xfc9b,	// (0x0003a38c) popup_note2_wait_window_g_ParamLimits

0xfc9b,	// (0x0003a38c) popup_note2_wait_window_g

0xd09a,	// (0x0003778b) popup_note2_wait_window_t1_ParamLimits

0xd09a,	// (0x0003778b) popup_note2_wait_window_t1

0xd0b8,	// (0x000377a9) popup_note2_wait_window_t2_ParamLimits

0xd0b8,	// (0x000377a9) popup_note2_wait_window_t2

0xd0d6,	// (0x000377c7) popup_note2_wait_window_t3_ParamLimits

0xd0d6,	// (0x000377c7) popup_note2_wait_window_t3

0xd0e8,	// (0x000377d9) popup_note2_wait_window_t4_ParamLimits

0xd0e8,	// (0x000377d9) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0003a393) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0003a393) popup_note2_wait_window_t

0xd0fa,	// (0x000377eb) wait_bar2_pane_ParamLimits

0xd0fa,	// (0x000377eb) wait_bar2_pane

0xd112,	// (0x00037803) popup_snote2_single_text_window_g1_ParamLimits

0xd112,	// (0x00037803) popup_snote2_single_text_window_g1

0xd13a,	// (0x0003782b) popup_snote2_single_text_window_t1_ParamLimits

0xd13a,	// (0x0003782b) popup_snote2_single_text_window_t1

0xd186,	// (0x00037877) popup_snote2_single_text_window_t2_ParamLimits

0xd186,	// (0x00037877) popup_snote2_single_text_window_t2

0xd1d2,	// (0x000378c3) popup_snote2_single_text_window_t3_ParamLimits

0xd1d2,	// (0x000378c3) popup_snote2_single_text_window_t3

0xd213,	// (0x00037904) popup_snote2_single_text_window_t4_ParamLimits

0xd213,	// (0x00037904) popup_snote2_single_text_window_t4

0xd249,	// (0x0003793a) popup_snote2_single_text_window_t5_ParamLimits

0xd249,	// (0x0003793a) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0003a39c) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0003a39c) popup_snote2_single_text_window_t

0xd274,	// (0x00037965) popup_snote2_single_graphic_window_g1_ParamLimits

0xd274,	// (0x00037965) popup_snote2_single_graphic_window_g1

0xd29c,	// (0x0003798d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd29c,	// (0x0003798d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0003a3a7) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0003a3a7) popup_snote2_single_graphic_window_g

0xd2c4,	// (0x000379b5) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2c4,	// (0x000379b5) popup_snote2_single_graphic_window_t1

0xd310,	// (0x00037a01) popup_snote2_single_graphic_window_t2_ParamLimits

0xd310,	// (0x00037a01) popup_snote2_single_graphic_window_t2

0xd1d2,	// (0x000378c3) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1d2,	// (0x000378c3) popup_snote2_single_graphic_window_t3

0xd213,	// (0x00037904) popup_snote2_single_graphic_window_t4_ParamLimits

0xd213,	// (0x00037904) popup_snote2_single_graphic_window_t4

0xd249,	// (0x0003793a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd249,	// (0x0003793a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0003a3ac) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0003a3ac) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x00036410) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x00036410) clock_nsta_pane_cp2_t2

0x0001,

0xfacf,	// (0x0003a1c0) clock_nsta_pane_cp2_t

0x536a,	// (0x0002fa5b) form_field_data_wide_pane_g1_ParamLimits

0x884c,	// (0x00032f3d) form_field_data_wide_pane_g2_ParamLimits

0x884c,	// (0x00032f3d) form_field_data_wide_pane_g2

0x8858,	// (0x00032f49) form_field_data_wide_pane_g3_ParamLimits

0x8858,	// (0x00032f49) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00039d6c) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00039d6c) form_field_data_wide_pane_g

0xbc11,	// (0x00036302) grid_touch_3_pane_ParamLimits

0xbc11,	// (0x00036302) grid_touch_3_pane

0xd35c,	// (0x00037a4d) cell_touch_3_pane_ParamLimits

0xd35c,	// (0x00037a4d) cell_touch_3_pane

0xc29d,	// (0x0003698e) cell_touch_3_pane_g1

0xc29d,	// (0x0003698e) cell_touch_3_pane_g2

0x0001,

0xfb54,	// (0x0003a245) cell_touch_3_pane_g

0x8317,	// (0x00032a08) cont_query_data_pane

0x831f,	// (0x00032a10) cont_query_data_pane_cp1

0xd38d,	// (0x00037a7e) button_value_adjust_pane_cp7

0xd395,	// (0x00037a86) query_popup_pane_cp3

0x8f7e,	// (0x0003366f) bg_popup_sub_pane_cp22_ParamLimits

0x570f,	// (0x0002fe00) navi_navi_volume_pane_cp2

0x5727,	// (0x0002fe18) popup_side_volume_key_window_g2

0x5733,	// (0x0002fe24) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00039e02) popup_side_volume_key_window_g

0x574d,	// (0x0002fe3e) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00039e09) popup_side_volume_key_window_t

0x9234,	// (0x00033925) popup_side_volume_key_window_ParamLimits

0x4fd7,	// (0x0002f6c8) list_double_graphic_pane_g4_ParamLimits

0x4fd7,	// (0x0002f6c8) list_double_graphic_pane_g4

0x7865,	// (0x00031f56) list_single_2heading_msg_pane_ParamLimits

0x7865,	// (0x00031f56) list_single_2heading_msg_pane

0x7e7a,	// (0x0003256b) list_single_2heading_msg_pane_g1_ParamLimits

0x7e7a,	// (0x0003256b) list_single_2heading_msg_pane_g1

0x4e06,	// (0x0002f4f7) list_single_2heading_msg_pane_g2_ParamLimits

0x4e06,	// (0x0002f4f7) list_single_2heading_msg_pane_g2

0x7e86,	// (0x00032577) list_single_2heading_msg_pane_g3_ParamLimits

0x7e86,	// (0x00032577) list_single_2heading_msg_pane_g3

0x7e92,	// (0x00032583) list_single_2heading_msg_pane_g4_ParamLimits

0x7e92,	// (0x00032583) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0003a3b7) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0003a3b7) list_single_2heading_msg_pane_g

0x7eaa,	// (0x0003259b) list_single_2heading_msg_pane_t1_ParamLimits

0x7eaa,	// (0x0003259b) list_single_2heading_msg_pane_t1

0x7ed2,	// (0x000325c3) list_single_2heading_msg_pane_t2_ParamLimits

0x7ed2,	// (0x000325c3) list_single_2heading_msg_pane_t2

0x7f06,	// (0x000325f7) list_single_2heading_msg_pane_t3_ParamLimits

0x7f06,	// (0x000325f7) list_single_2heading_msg_pane_t3

0x7f3f,	// (0x00032630) list_single_2heading_msg_pane_t4_ParamLimits

0x7f3f,	// (0x00032630) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0003a3c0) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0003a3c0) list_single_2heading_msg_pane_t

0x76c7,	// (0x00031db8) title_pane_g4_ParamLimits

0x76c7,	// (0x00031db8) title_pane_g4

0x551d,	// (0x0002fc0e) title_pane_stacon_g3_ParamLimits

0x551d,	// (0x0002fc0e) title_pane_stacon_g3

0xceb8,	// (0x000375a9) list_single_2graphic_im_pane_g4_ParamLimits

0xceb8,	// (0x000375a9) list_single_2graphic_im_pane_g4

0xadcf,	// (0x000354c0) popup_side_volume_key_window_cp

0xb57c,	// (0x00035c6d) main_idle_act2_pane_t1

0x6144,	// (0x00030835) toolbar_button_pane_g10

0x87a7,	// (0x00032e98) popup_toolbar_window_cp1

0xbd10,	// (0x00036401) clock_nsta_pane_cp_t1

0xbd10,	// (0x00036401) clock_nsta_pane_cp_t2

0x0001,

0xfaca,	// (0x0003a1bb) clock_nsta_pane_cp_t

0x570f,	// (0x0002fe00) navi_navi_volume_pane_cp2_ParamLimits

0x571b,	// (0x0002fe0c) popup_side_volume_key_window_g1_ParamLimits

0x5727,	// (0x0002fe18) popup_side_volume_key_window_g2_ParamLimits

0x5733,	// (0x0002fe24) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00039e02) popup_side_volume_key_window_g_ParamLimits

0x66b3,	// (0x00030da4) fep_hwr_aid_pane

0x675a,	// (0x00030e4b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2f9,	// (0x000369ea) fep_hwr_top_pane_g1_ParamLimits

0xc30b,	// (0x000369fc) fep_hwr_top_pane_g2_ParamLimits

0x677a,	// (0x00030e6b) fep_hwr_top_pane_g3_ParamLimits

0xfb1f,	// (0x0003a210) fep_hwr_top_pane_g_ParamLimits

0x678f,	// (0x00030e80) fep_hwr_top_text_pane_ParamLimits

0xab92,	// (0x00035283) aid_touch_tab_arrow_arrow_2

0xab9b,	// (0x0003528c) aid_touch_tab_arrow_left_2

0x66c7,	// (0x00030db8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66fe,	// (0x00030def) fep_hwr_prediction_pane

0xc462,	// (0x00036b53) fep_vkb_prediction_pane

0xc55f,	// (0x00036c50) fep_vkb_side_pane_g3_ParamLimits

0xc55f,	// (0x00036c50) fep_vkb_side_pane_g3

0x690a,	// (0x00030ffb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6976,	// (0x00031067) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6983,	// (0x00031074) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbce,	// (0x0003a2bf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6ab2,	// (0x000311a3) fep_hwr_prediction_pane_g1

0x6abc,	// (0x000311ad) fep_hwr_prediction_pane_g2

0x6ac4,	// (0x000311b5) fep_hwr_prediction_pane_g3

0x6acc,	// (0x000311bd) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0003a3c9) fep_hwr_prediction_pane_g

0xd3ba,	// (0x00037aab) fep_vkb_prediction_pane_g1

0xd3c4,	// (0x00037ab5) fep_vkb_prediction_pane_g2

0xd3cc,	// (0x00037abd) fep_vkb_prediction_pane_g3

0xd3d4,	// (0x00037ac5) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0003a3d2) fep_vkb_prediction_pane_g

0x650f,	// (0x00030c00) slider_set_pane_g3

0x6523,	// (0x00030c14) slider_set_pane_g4

0x653b,	// (0x00030c2c) slider_set_pane_g5

0x650f,	// (0x00030c00) slider_set_pane_g6

0x6551,	// (0x00030c42) slider_set_pane_g7

0xb222,	// (0x00035913) slider_form_pane_g3

0xb22b,	// (0x0003591c) slider_form_pane_g4

0xb233,	// (0x00035924) slider_form_pane_g5

0xb222,	// (0x00035913) slider_form_pane_g6

0xb23b,	// (0x0003592c) slider_form_pane_g7

0xb81b,	// (0x00035f0c) slider_set_pane_vc_g3

0xb824,	// (0x00035f15) slider_set_pane_vc_g4

0xb82d,	// (0x00035f1e) slider_set_pane_vc_g5

0xb81b,	// (0x00035f0c) slider_set_pane_vc_g6

0xb836,	// (0x00035f27) slider_set_pane_vc_g7

0xb9e6,	// (0x000360d7) slider_form_pane_vc_g1

0xb9ef,	// (0x000360e0) slider_form_pane_vc_g2

0xb9f8,	// (0x000360e9) slider_form_pane_vc_g3

0xb9e6,	// (0x000360d7) slider_form_pane_vc_g4

0xba01,	// (0x000360f2) slider_form_pane_vc_g5

0x0004,

0xfa9c,	// (0x0003a18d) slider_form_pane_vc_g

0x4b04,	// (0x0002f1f5) main_idle_act3_pane

0xd3dc,	// (0x00037acd) ai3_links_pane

0xd3e5,	// (0x00037ad6) popup_ai3_data_window_ParamLimits

0xd3e5,	// (0x00037ad6) popup_ai3_data_window

0x767f,	// (0x00031d70) grid_ai3_links_pane

0xd3fd,	// (0x00037aee) cell_ai3_links_pane_ParamLimits

0xd3fd,	// (0x00037aee) cell_ai3_links_pane

0xd415,	// (0x00037b06) bg_popup_sub_pane_cp11

0xd422,	// (0x00037b13) cell_ai3_links_pane_g1

0x767f,	// (0x00031d70) bg_popup_sub_pane_cp12

0xd447,	// (0x00037b38) heading_ai3_data_pane

0xd44f,	// (0x00037b40) list_ai3_gene_pane

0xd45b,	// (0x00037b4c) popup_ai3_data_window_g1

0xd463,	// (0x00037b54) heading_ai3_data_pane_g1

0xd46b,	// (0x00037b5c) heading_ai3_data_pane_t1

0xd479,	// (0x00037b6a) list_double_ai3_gene_pane_ParamLimits

0xd479,	// (0x00037b6a) list_double_ai3_gene_pane

0xd486,	// (0x00037b77) list_single_ai3_gene_pane_ParamLimits

0xd486,	// (0x00037b77) list_single_ai3_gene_pane

0xc262,	// (0x00036953) list_highlight_pane_cp7_ParamLimits

0xc262,	// (0x00036953) list_highlight_pane_cp7

0xd493,	// (0x00037b84) list_single_a13_gene_pane_t1_ParamLimits

0xd493,	// (0x00037b84) list_single_a13_gene_pane_t1

0xd4aa,	// (0x00037b9b) list_single_ai3_gene_pane_g1

0xd4b3,	// (0x00037ba4) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0003a3db) list_single_ai3_gene_pane_g

0xd4bb,	// (0x00037bac) list_double_ai3_gene_pane_g1_ParamLimits

0xd4bb,	// (0x00037bac) list_double_ai3_gene_pane_g1

0xd4c7,	// (0x00037bb8) list_double_ai3_gene_pane_t1_ParamLimits

0xd4c7,	// (0x00037bb8) list_double_ai3_gene_pane_t1

0xd4e3,	// (0x00037bd4) list_double_ai3_gene_pane_t2_ParamLimits

0xd4e3,	// (0x00037bd4) list_double_ai3_gene_pane_t2

0xd4f8,	// (0x00037be9) list_double_ai3_gene_pane_t3_ParamLimits

0xd4f8,	// (0x00037be9) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0003a3e0) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0003a3e0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7e70,	// (0x00032561) aid_size_min_col_2

0xd3a6,	// (0x00037a97) aid_size_min_msg_ParamLimits

0xd3a6,	// (0x00037a97) aid_size_min_msg

0xc65f,	// (0x00036d50) fep_vkb_top_text_pane_g2_ParamLimits

0xc65f,	// (0x00036d50) fep_vkb_top_text_pane_g2

0x0001,

0xfb4f,	// (0x0003a240) fep_vkb_top_text_pane_g_ParamLimits

0xfb4f,	// (0x0003a240) fep_vkb_top_text_pane_g

0x4b04,	// (0x0002f1f5) main_hc_apps_shell_pane

0xd515,	// (0x00037c06) grid_hc_apps_pane_ParamLimits

0xd515,	// (0x00037c06) grid_hc_apps_pane

0xd524,	// (0x00037c15) list_hc_apps_pane

0xd52c,	// (0x00037c1d) scroll_pane_cp37_ParamLimits

0xd52c,	// (0x00037c1d) scroll_pane_cp37

0xd538,	// (0x00037c29) cell_hc_apps_pane_ParamLimits

0xd538,	// (0x00037c29) cell_hc_apps_pane

0xd5e6,	// (0x00037cd7) cell_hc_apps_pane_g1_ParamLimits

0xd5e6,	// (0x00037cd7) cell_hc_apps_pane_g1

0xd617,	// (0x00037d08) cell_hc_apps_pane_g2_ParamLimits

0xd617,	// (0x00037d08) cell_hc_apps_pane_g2

0xd633,	// (0x00037d24) cell_hc_apps_pane_g3_ParamLimits

0xd633,	// (0x00037d24) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0003a3e7) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0003a3e7) cell_hc_apps_pane_g

0xd655,	// (0x00037d46) cell_hc_apps_pane_t1_ParamLimits

0xd655,	// (0x00037d46) cell_hc_apps_pane_t1

0x826d,	// (0x0003295e) grid_highlight_pane_cp10_ParamLimits

0x826d,	// (0x0003295e) grid_highlight_pane_cp10

0xd695,	// (0x00037d86) list_single_hc_apps_pane_ParamLimits

0xd695,	// (0x00037d86) list_single_hc_apps_pane

0xd6fd,	// (0x00037dee) list_single_hc_apps_pane_g1

0x7f64,	// (0x00032655) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0003a3ee) list_single_hc_apps_pane_g

0x7f7d,	// (0x0003266e) list_single_hc_apps_pane_g2_copy1

0x7f99,	// (0x0003268a) list_single_hc_apps_pane_t1

0x7fe4,	// (0x000326d5) bg_set_opt_pane_cp_ParamLimits

0x4d57,	// (0x0002f448) setting_slider_pane_t1_ParamLimits

0x4d70,	// (0x0002f461) setting_slider_pane_t2_ParamLimits

0x4d8a,	// (0x0002f47b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00039c4f) setting_slider_pane_t_ParamLimits

0x4da2,	// (0x0002f493) slider_set_pane_ParamLimits

0x5a3b,	// (0x0003012c) control_pane_g5_ParamLimits

0x5a3b,	// (0x0003012c) control_pane_g5

0xb07f,	// (0x00035770) slider_set_pane_g1_ParamLimits

0x6503,	// (0x00030bf4) slider_set_pane_g2_ParamLimits

0x650f,	// (0x00030c00) slider_set_pane_g3_ParamLimits

0x6523,	// (0x00030c14) slider_set_pane_g4_ParamLimits

0x653b,	// (0x00030c2c) slider_set_pane_g5_ParamLimits

0x650f,	// (0x00030c00) slider_set_pane_g6_ParamLimits

0x6551,	// (0x00030c42) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a055) slider_set_pane_g_ParamLimits

0x9336,	// (0x00033a27) navi_icon_text_pane_ParamLimits

0x981c,	// (0x00033f0d) aid_fill_nsta_2_ParamLimits

0x985b,	// (0x00033f4c) aid_touch_tab_arrow_left_ParamLimits

0x9867,	// (0x00033f58) aid_touch_tab_arrow_right_ParamLimits

0x98d3,	// (0x00033fc4) clock_nsta_pane_ParamLimits

0xab74,	// (0x00035265) navi_icon_pane_g1_ParamLimits

0xab80,	// (0x00035271) navi_text_pane_t1_ParamLimits

0xbe22,	// (0x00036513) navi_icon_text_pane_g1_ParamLimits

0xbe2e,	// (0x0003651f) navi_icon_text_pane_t1_ParamLimits

0xd6fd,	// (0x00037dee) list_single_hc_apps_pane_g1_ParamLimits

0x7f64,	// (0x00032655) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0003a3ee) list_single_hc_apps_pane_g_ParamLimits

0x7f7d,	// (0x0003266e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f99,	// (0x0003268a) list_single_hc_apps_pane_t1_ParamLimits

0x4c61,	// (0x0002f352) popup_toolbar2_fixed_window_ParamLimits

0x4c61,	// (0x0002f352) popup_toolbar2_fixed_window

0x6028,	// (0x00030719) popup_toolbar2_float_window

0x767f,	// (0x00031d70) bg_popup_sub_pane_cp27

0xd716,	// (0x00037e07) grid_toolbar2_float_pane

0x767f,	// (0x00031d70) bg_popup_sub_pane_cp26

0xd716,	// (0x00037e07) grid_toolbar2_fixed_pane

0xd71e,	// (0x00037e0f) cell_toolbar2_fixed_pane_ParamLimits

0xd71e,	// (0x00037e0f) cell_toolbar2_fixed_pane

0xd72f,	// (0x00037e20) cell_toolbar2_fixed_pane_g1

0x5efe,	// (0x000305ef) toolbar2_fixed_button_pane

0x9ce2,	// (0x000343d3) toolbar2_fixed_button_pane_g1

0x9cf2,	// (0x000343e3) toolbar2_fixed_button_pane_g2

0x9cea,	// (0x000343db) toolbar2_fixed_button_pane_g3

0x9d02,	// (0x000343f3) toolbar2_fixed_button_pane_g4

0x9cfa,	// (0x000343eb) toolbar2_fixed_button_pane_g5

0x9d0a,	// (0x000343fb) toolbar2_fixed_button_pane_g6

0x9d12,	// (0x00034403) toolbar2_fixed_button_pane_g7

0x9d22,	// (0x00034413) toolbar2_fixed_button_pane_g8

0x9d1a,	// (0x0003440b) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00039f57) toolbar2_fixed_button_pane_g

0xd738,	// (0x00037e29) cell_toolbar2_float_pane_ParamLimits

0xd738,	// (0x00037e29) cell_toolbar2_float_pane

0xd74c,	// (0x00037e3d) cell_toolbar2_float_pane_g1

0x5efe,	// (0x000305ef) toolbar2_fixed_button_pane_cp

0xc3c9,	// (0x00036aba) fep_vkb_accented_list_pane_ParamLimits

0xc3c9,	// (0x00036aba) fep_vkb_accented_list_pane

0x68ea,	// (0x00030fdb) bg_popup_fep_shadow_pane_g9

0x94aa,	// (0x00033b9b) bg_popup_fep_shadow_pane_cp3

0x8993,	// (0x00033084) list_accented_list_pane

0xd755,	// (0x00037e46) list_single_accented_list_pane_ParamLimits

0xd755,	// (0x00037e46) list_single_accented_list_pane

0x94aa,	// (0x00033b9b) list_highlight_pane_cp10

0xd766,	// (0x00037e57) list_single_accented_list_pane_t1

0x5f78,	// (0x00030669) popup_slider_window_ParamLimits

0x5f78,	// (0x00030669) popup_slider_window

0xd39d,	// (0x00037a8e) aid_indentation_list_msg

0xd820,	// (0x00037f11) bg_popup_window_pane_cp19

0xd88a,	// (0x00037f7b) popup_slider_window_g1

0xd8a6,	// (0x00037f97) popup_slider_window_g2

0xd8c2,	// (0x00037fb3) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0003a3f3) popup_slider_window_g

0xd91e,	// (0x0003800f) popup_slider_window_t1

0xd992,	// (0x00038083) small_volume_slider_vertical_pane

0xc29d,	// (0x0003698e) small_volume_slider_vertical_pane_g1

0xc29d,	// (0x0003698e) small_volume_slider_vertical_pane_g2

0xd9ae,	// (0x0003809f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0003a405) small_volume_slider_vertical_pane_g

0x4a27,	// (0x0002f118) area_side_right_pane_ParamLimits

0x4a27,	// (0x0002f118) area_side_right_pane

0x6ad4,	// (0x000311c5) aid_size_side_button_ParamLimits

0x6ad4,	// (0x000311c5) aid_size_side_button

0x6ae8,	// (0x000311d9) grid_sctrl_middle_pane_ParamLimits

0x6ae8,	// (0x000311d9) grid_sctrl_middle_pane

0x6b07,	// (0x000311f8) sctrl_sk_bottom_pane

0x6b18,	// (0x00031209) sctrl_sk_top_pane

0x6b2a,	// (0x0003121b) aid_touch_sctrl_top

0x6b37,	// (0x00031228) bg_sctrl_sk_pane_ParamLimits

0x6b37,	// (0x00031228) bg_sctrl_sk_pane

0x6b45,	// (0x00031236) sctrl_sk_top_pane_g1

0x6b52,	// (0x00031243) sctrl_sk_top_pane_t1

0x6b2a,	// (0x0003121b) aid_touch_sctrl_bottom

0x6b37,	// (0x00031228) bg_sctrl_sk_pane_cp_ParamLimits

0x6b37,	// (0x00031228) bg_sctrl_sk_pane_cp

0x6b6d,	// (0x0003125e) sctrl_sk_bottom_pane_g1

0x6b52,	// (0x00031243) sctrl_sk_bottom_pane_t1

0x6b76,	// (0x00031267) cell_sctrl_middle_pane_ParamLimits

0x6b76,	// (0x00031267) cell_sctrl_middle_pane

0x6b91,	// (0x00031282) aid_touch_sctrl_middle_ParamLimits

0x6b91,	// (0x00031282) aid_touch_sctrl_middle

0x6ba3,	// (0x00031294) bg_sctrl_middle_pane_ParamLimits

0x6ba3,	// (0x00031294) bg_sctrl_middle_pane

0x690a,	// (0x00030ffb) cell_sctrl_middle_pane_g1_ParamLimits

0x690a,	// (0x00030ffb) cell_sctrl_middle_pane_g1

0x6bb1,	// (0x000312a2) cell_sctrl_middle_pane_g2_ParamLimits

0x6bb1,	// (0x000312a2) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0003a411) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0003a411) cell_sctrl_middle_pane_g

0x9ce2,	// (0x000343d3) bg_sctrl_middle_pane_g1

0x9cea,	// (0x000343db) bg_sctrl_middle_pane_g2

0x9cf2,	// (0x000343e3) bg_sctrl_middle_pane_g3

0x9cfa,	// (0x000343eb) bg_sctrl_middle_pane_g4

0x9d02,	// (0x000343f3) bg_sctrl_middle_pane_g5

0x9d0a,	// (0x000343fb) bg_sctrl_middle_pane_g6

0x9d12,	// (0x00034403) bg_sctrl_middle_pane_g7

0x9d1a,	// (0x0003440b) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0003a416) bg_sctrl_middle_pane_g

0x9d22,	// (0x00034413) bg_sctrl_middle_pane_g8_copy1

0x9ce2,	// (0x000343d3) bg_sctrl_sk_pane_g1

0x9cf2,	// (0x000343e3) bg_sctrl_sk_pane_g2

0x9cea,	// (0x000343db) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00039f57) bg_sctrl_sk_pane_g

0x876d,	// (0x00032e5e) aid_size_touch_scroll_bar

0x9d02,	// (0x000343f3) bg_sctrl_sk_pane_g4

0x9cfa,	// (0x000343eb) bg_sctrl_sk_pane_g5

0x9d0a,	// (0x000343fb) bg_sctrl_sk_pane_g6

0x9d12,	// (0x00034403) bg_sctrl_sk_pane_g7

0x9d22,	// (0x00034413) bg_sctrl_sk_pane_g8

0x9d1a,	// (0x0003440b) bg_sctrl_sk_pane_g9

0x5be9,	// (0x000302da) popup_fep_china_hwr2_fs_candidate_window

0x5bf3,	// (0x000302e4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5bf3,	// (0x000302e4) popup_fep_china_hwr2_fs_control_window

0x690a,	// (0x00030ffb) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0003a40c) sctrl_sk_top_pane_g

0xd9b7,	// (0x000380a8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9b7,	// (0x000380a8) aid_fep_china_hwr2_fs_cell

0xd9c9,	// (0x000380ba) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c9,	// (0x000380ba) bg_popup_fep_shadow_pane_cp4

0xd9e0,	// (0x000380d1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9e0,	// (0x000380d1) bg_popup_fep_shadow_pane_cp5

0xd9f2,	// (0x000380e3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9f2,	// (0x000380e3) popup_fep_china_hwr2_fs_control_bar_grid

0xda02,	// (0x000380f3) popup_fep_china_hwr2_fs_control_funtion_grid

0xda0a,	// (0x000380fb) aid_fep_china_hwr2_fs_candi_cell

0x767f,	// (0x00031d70) bg_popup_fep_shadow_pane_cp6

0xda14,	// (0x00038105) popup_fep_china_hwr2_fs_candidate_grid

0xda1e,	// (0x0003810f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda1e,	// (0x0003810f) cell_fep_china_hwr2_fs_funtion_grid

0xc29d,	// (0x0003698e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda36,	// (0x00038127) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda36,	// (0x00038127) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda44,	// (0x00038135) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda44,	// (0x00038135) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0003a427) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0003a427) cell_fep_china_hwr2_fs_funtion_grid_g

0xda5a,	// (0x0003814b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda5a,	// (0x0003814b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda6f,	// (0x00038160) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda6f,	// (0x00038160) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0003a42c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0003a42c) cell_fep_china_hwr2_fs_funtion_grid_t

0xda8b,	// (0x0003817c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda93,	// (0x00038184) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda9b,	// (0x0003818c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0003a431) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaa3,	// (0x00038194) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaa3,	// (0x00038194) cell_fep_china_hwr2_fs_candidate_grid

0xdabc,	// (0x000381ad) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdac4,	// (0x000381b5) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc29d,	// (0x0003698e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc29d,	// (0x0003698e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb54,	// (0x0003a245) cell_fep_china_hwr2_fs_candidate_grid_g

0xdacc,	// (0x000381bd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98e0,	// (0x00033fd1) clock_nsta_pane_cp_24_ParamLimits

0x98e0,	// (0x00033fd1) clock_nsta_pane_cp_24

0x995e,	// (0x0003404f) indicator_nsta_pane_cp_24_ParamLimits

0x995e,	// (0x0003404f) indicator_nsta_pane_cp_24

0xa9f0,	// (0x000350e1) heading_pane_g1

0x0001,

0xf8cb,	// (0x00039fbc) heading_pane_g

0xb3c5,	// (0x00035ab6) grid_sct_catagory_button_pane

0xb3f5,	// (0x00035ae6) scroll_pane_cp5_ParamLimits

0xbe70,	// (0x00036561) button_value_adjust_pane_cp5_ParamLimits

0xbe70,	// (0x00036561) button_value_adjust_pane_cp5

0xbf4f,	// (0x00036640) form2_midp_time_pane_ParamLimits

0xdada,	// (0x000381cb) cell_sct_catagory_button_pane_ParamLimits

0xdada,	// (0x000381cb) cell_sct_catagory_button_pane

0xc262,	// (0x00036953) bg_button_pane_cp01_ParamLimits

0xc262,	// (0x00036953) bg_button_pane_cp01

0xc29d,	// (0x0003698e) cell_sct_catagory_button_pane_g1

0x5fb7,	// (0x000306a8) popup_tb_extension_window

0xdaec,	// (0x000381dd) aid_size_cell_ext_ParamLimits

0xdaec,	// (0x000381dd) aid_size_cell_ext

0x826d,	// (0x0003295e) bg_tb_trans_pane_cp1_ParamLimits

0x826d,	// (0x0003295e) bg_tb_trans_pane_cp1

0xdb0c,	// (0x000381fd) grid_tb_ext_pane_ParamLimits

0xdb0c,	// (0x000381fd) grid_tb_ext_pane

0xdb3e,	// (0x0003822f) cell_tb_ext_pane_ParamLimits

0xdb3e,	// (0x0003822f) cell_tb_ext_pane

0xdb55,	// (0x00038246) cell_tb_ext_pane_g1_ParamLimits

0xdb55,	// (0x00038246) cell_tb_ext_pane_g1

0xdb72,	// (0x00038263) cell_tb_ext_pane_t1

0x826d,	// (0x0003295e) list_highlight_pane_cp11_ParamLimits

0x826d,	// (0x0003295e) list_highlight_pane_cp11

0x4c80,	// (0x0002f371) popup_uni_indicator_window_ParamLimits

0x4c80,	// (0x0002f371) popup_uni_indicator_window

0x883e,	// (0x00032f2f) bg_popup_sub_pane_cp14

0xdb8d,	// (0x0003827e) list_uniindi_pane

0xdb99,	// (0x0003828a) uniindi_top_pane

0x826d,	// (0x0003295e) bg_uniindi_top_pane

0xdbb8,	// (0x000382a9) uniindi_top_pane_g1

0xdbce,	// (0x000382bf) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0003a438) uniindi_top_pane_g

0xdbf8,	// (0x000382e9) uniindi_top_pane_t1

0xdc22,	// (0x00038313) list_single_uniindi_pane_ParamLimits

0xdc22,	// (0x00038313) list_single_uniindi_pane

0xc29d,	// (0x0003698e) bg_uniindi_top_pane_g1

0xdc35,	// (0x00038326) list_single_uniindi_pane_g1

0xdc48,	// (0x00038339) list_single_uniindi_pane_t1

0x4b04,	// (0x0002f1f5) control_bg_pane

0xdc6d,	// (0x0003835e) bg_sctrl_sk_pane_cp1

0xdc76,	// (0x00038367) bg_sctrl_sk_pane_cp2

0xdc7f,	// (0x00038370) control_bg_pane_g1

0xdc88,	// (0x00038379) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0003a441) control_bg_pane_g

0xbcb4,	// (0x000363a5) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc2,	// (0x000363b3) cell_indicator_nsta_pane_g2_ParamLimits

0xfab8,	// (0x0003a1a9) cell_indicator_nsta_pane_g_ParamLimits

0x7c2d,	// (0x0003231e) form2_midp_time_pane_t1_ParamLimits

0x5b4b,	// (0x0003023c) main_idle_act4_pane_ParamLimits

0x5b4b,	// (0x0003023c) main_idle_act4_pane

0x5fb7,	// (0x000306a8) popup_tb_extension_window_ParamLimits

0xdb2e,	// (0x0003821f) tb_ext_find_pane_ParamLimits

0xdb2e,	// (0x0003821f) tb_ext_find_pane

0xdc91,	// (0x00038382) ai_gene_pane_1_cp1

0x95e9,	// (0x00033cda) ai_gene_pane_2_cp1

0xdc99,	// (0x0003838a) list_single_idle_plugin_calendar_pane

0xdca2,	// (0x00038393) list_single_idle_plugin_notification_pane

0xdcab,	// (0x0003839c) list_single_idle_plugin_player_pane

0xdcb4,	// (0x000383a5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcb4,	// (0x000383a5) list_single_idle_plugin_shortcut_pane

0xdcd6,	// (0x000383c7) main_idle_act4_pane_t1

0xdce8,	// (0x000383d9) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0003a446) main_idle_act4_pane_t

0xdcfa,	// (0x000383eb) middle_sk_idle_act4_pane_ParamLimits

0xdcfa,	// (0x000383eb) middle_sk_idle_act4_pane

0xdd10,	// (0x00038401) popup_clock_digital_analogue_window_cp2

0xdd2a,	// (0x0003841b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd2a,	// (0x0003841b) shortcut_wheel_idle_act4_pane

0xc29d,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g1

0xc29d,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g2

0xc29d,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g3

0xc29d,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g4

0xc29d,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g5

0xdd3e,	// (0x0003842f) shortcut_wheel_idle_act4_pane_g6

0xdd46,	// (0x00038437) shortcut_wheel_idle_act4_pane_g7

0xdd4e,	// (0x0003843f) shortcut_wheel_idle_act4_pane_g8

0xdd56,	// (0x00038447) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0003a44b) shortcut_wheel_idle_act4_pane_g

0xc50b,	// (0x00036bfc) middle_sk_idle_act4_pane_g1_ParamLimits

0xc50b,	// (0x00036bfc) middle_sk_idle_act4_pane_g1

0xddba,	// (0x000384ab) middle_sk_idle_act4_pane_g2_ParamLimits

0xddba,	// (0x000384ab) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0003a46e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0003a46e) middle_sk_idle_act4_pane_g

0xddc6,	// (0x000384b7) middle_sk_idle_act4_pane_t1_ParamLimits

0xddc6,	// (0x000384b7) middle_sk_idle_act4_pane_t1

0xdde3,	// (0x000384d4) grid_ai_shortcut_pane_ParamLimits

0xdde3,	// (0x000384d4) grid_ai_shortcut_pane

0xddfc,	// (0x000384ed) list_highlight_pane_cp16_ParamLimits

0xddfc,	// (0x000384ed) list_highlight_pane_cp16

0xde09,	// (0x000384fa) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde09,	// (0x000384fa) list_single_idle_plugin_shortcut_pane_g1

0xde15,	// (0x00038506) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde15,	// (0x00038506) list_single_idle_plugin_shortcut_pane_g2

0xde2d,	// (0x0003851e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde2d,	// (0x0003851e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0003a473) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0003a473) list_single_idle_plugin_shortcut_pane_g

0xde40,	// (0x00038531) cell_ai_shortcut_pane_ParamLimits

0xde40,	// (0x00038531) cell_ai_shortcut_pane

0xde61,	// (0x00038552) cell_ai_shortcut_pane_g1_ParamLimits

0xde61,	// (0x00038552) cell_ai_shortcut_pane_g1

0xdc91,	// (0x00038382) ai_gene_pane_1_cp2

0xde83,	// (0x00038574) ai_gene_pane_2_cp2

0xde8b,	// (0x0003857c) list_highlight_pane_cp15

0xde94,	// (0x00038585) list_single_idle_plugin_calendar_pane_g1

0xde8b,	// (0x0003857c) list_highlight_pane_cp17

0xde9c,	// (0x0003858d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdea4,	// (0x00038595) list_single_idle_plugin_player_pane_g1

0xb61c,	// (0x00035d0d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0003a47a) list_single_idle_plugin_player_pane_g

0xdeac,	// (0x0003859d) list_single_idle_plugin_player_pane_t1

0xdeba,	// (0x000385ab) list_single_idle_plugin_player_pane_t2

0xdec8,	// (0x000385b9) list_single_idle_plugin_player_pane_t3

0xded6,	// (0x000385c7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0003a47f) list_single_idle_plugin_player_pane_t

0xdee4,	// (0x000385d5) wait_bar_pane_cp15

0xdeec,	// (0x000385dd) grid_ai_notification_pane

0xb61c,	// (0x00035d0d) list_single_idle_plugin_notification_pane_g1

0xdef5,	// (0x000385e6) cell_ai_notification_pane_ParamLimits

0xdef5,	// (0x000385e6) cell_ai_notification_pane

0xdf02,	// (0x000385f3) cell_ai_notification_pane_g1

0xdf0a,	// (0x000385fb) cell_ai_notification_pane_t1

0xdf18,	// (0x00038609) tb_ext_find_button_pane

0xdf20,	// (0x00038611) tb_ext_find_pane_g1

0xdf28,	// (0x00038619) tb_ext_find_pane_t1

0x8e92,	// (0x00033583) tb_ext_find_button_pane_g1

0xdf36,	// (0x00038627) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0003a488) tb_ext_find_button_pane_g

0xdcd6,	// (0x000383c7) main_idle_act4_pane_t1_ParamLimits

0xdce8,	// (0x000383d9) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0003a446) main_idle_act4_pane_t_ParamLimits

0xdd10,	// (0x00038401) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd1e,	// (0x0003840f) sat_plugin_idle_act4_pane_ParamLimits

0xdd1e,	// (0x0003840f) sat_plugin_idle_act4_pane

0xdf3f,	// (0x00038630) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf3f,	// (0x00038630) sat_plugin_idle_act4_pane_t1

0xdf52,	// (0x00038643) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf52,	// (0x00038643) sat_plugin_idle_act4_pane_t2

0xdf86,	// (0x00038677) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf86,	// (0x00038677) sat_plugin_idle_act4_pane_t3

0xdf99,	// (0x0003868a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf99,	// (0x0003868a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0003a48d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0003a48d) sat_plugin_idle_act4_pane_t

0x4bc9,	// (0x0002f2ba) popup_battery_window_ParamLimits

0x4bc9,	// (0x0002f2ba) popup_battery_window

0x826d,	// (0x0003295e) bg_popup_sub_pane_cp25_ParamLimits

0x826d,	// (0x0003295e) bg_popup_sub_pane_cp25

0xdfac,	// (0x0003869d) popup_battery_window_g1_ParamLimits

0xdfac,	// (0x0003869d) popup_battery_window_g1

0xdfb8,	// (0x000386a9) popup_battery_window_t1_ParamLimits

0xdfb8,	// (0x000386a9) popup_battery_window_t1

0xdfca,	// (0x000386bb) popup_battery_window_t2_ParamLimits

0xdfca,	// (0x000386bb) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0003a496) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0003a496) popup_battery_window_t

0x94b2,	// (0x00033ba3) midp_canvas_pane_ParamLimits

0x952b,	// (0x00033c1c) midp_keypad_pane_ParamLimits

0x952b,	// (0x00033c1c) midp_keypad_pane

0x97e4,	// (0x00033ed5) main_midp_pane_ParamLimits

0xbd2e,	// (0x0003641f) signal_pane_g2_cp_ParamLimits

0xdfe7,	// (0x000386d8) aid_size_cell_midp_keypad_ParamLimits

0xdfe7,	// (0x000386d8) aid_size_cell_midp_keypad

0xe001,	// (0x000386f2) midp_keyp_game_grid_pane_ParamLimits

0xe001,	// (0x000386f2) midp_keyp_game_grid_pane

0xe021,	// (0x00038712) midp_keyp_rocker_pane_ParamLimits

0xe021,	// (0x00038712) midp_keyp_rocker_pane

0xe05a,	// (0x0003874b) midp_keyp_sk_left_pane_ParamLimits

0xe05a,	// (0x0003874b) midp_keyp_sk_left_pane

0xe0b4,	// (0x000387a5) midp_keyp_sk_right_pane_ParamLimits

0xe0b4,	// (0x000387a5) midp_keyp_sk_right_pane

0x767f,	// (0x00031d70) bg_button_pane_cp03

0xe10e,	// (0x000387ff) midp_keyp_sk_left_pane_g1

0x767f,	// (0x00031d70) bg_button_pane_cp04

0xe10e,	// (0x000387ff) midp_keyp_sk_right_pane_g1

0xc29d,	// (0x0003698e) midp_keyp_rocker_pane_g1

0xe117,	// (0x00038808) keyp_game_cell_pane_ParamLimits

0xe117,	// (0x00038808) keyp_game_cell_pane

0x767f,	// (0x00031d70) bg_button_pane_cp02

0xe12a,	// (0x0003881b) keyp_game_cell_pane_g1

0x4bff,	// (0x0002f2f0) popup_fep_vkb2_window_ParamLimits

0x4bff,	// (0x0002f2f0) popup_fep_vkb2_window

0x6bcf,	// (0x000312c0) aid_size_cell_vkb2_ParamLimits

0x6bcf,	// (0x000312c0) aid_size_cell_vkb2

0x6c23,	// (0x00031314) popup_fep_vkb2_window_g1_ParamLimits

0x6c23,	// (0x00031314) popup_fep_vkb2_window_g1

0x6c6b,	// (0x0003135c) vkb2_area_bottom_pane_ParamLimits

0x6c6b,	// (0x0003135c) vkb2_area_bottom_pane

0x6cb7,	// (0x000313a8) vkb2_area_keypad_pane_ParamLimits

0x6cb7,	// (0x000313a8) vkb2_area_keypad_pane

0x6cf9,	// (0x000313ea) vkb2_area_top_pane_ParamLimits

0x6cf9,	// (0x000313ea) vkb2_area_top_pane

0x6d73,	// (0x00031464) vkb2_top_entry_pane_ParamLimits

0x6d73,	// (0x00031464) vkb2_top_entry_pane

0x6d9d,	// (0x0003148e) vkb2_top_grid_left_pane_ParamLimits

0x6d9d,	// (0x0003148e) vkb2_top_grid_left_pane

0x6dbb,	// (0x000314ac) vkb2_top_grid_right_pane_ParamLimits

0x6dbb,	// (0x000314ac) vkb2_top_grid_right_pane

0x6dd9,	// (0x000314ca) vkb2_cell_keypad_pane_ParamLimits

0x6dd9,	// (0x000314ca) vkb2_cell_keypad_pane

0x6eaa,	// (0x0003159b) vkb2_area_bottom_grid_pane_ParamLimits

0x6eaa,	// (0x0003159b) vkb2_area_bottom_grid_pane

0x6ed0,	// (0x000315c1) vkb2_area_bottom_pane_g1_ParamLimits

0x6ed0,	// (0x000315c1) vkb2_area_bottom_pane_g1

0x6ef4,	// (0x000315e5) vkb2_area_bottom_pane_g2_ParamLimits

0x6ef4,	// (0x000315e5) vkb2_area_bottom_pane_g2

0x6f22,	// (0x00031613) vkb2_area_bottom_pane_g3_ParamLimits

0x6f22,	// (0x00031613) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0003a49b) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0003a49b) vkb2_area_bottom_pane_g

0x6f83,	// (0x00031674) vkb2_top_cell_left_pane_ParamLimits

0x6f83,	// (0x00031674) vkb2_top_cell_left_pane

0xe13b,	// (0x0003882c) vkb2_top_entry_pane_g1_ParamLimits

0xe13b,	// (0x0003882c) vkb2_top_entry_pane_g1

0xe149,	// (0x0003883a) vkb2_top_entry_pane_t1_ParamLimits

0xe149,	// (0x0003883a) vkb2_top_entry_pane_t1

0xe17b,	// (0x0003886c) vkb2_top_entry_pane_t2_ParamLimits

0xe17b,	// (0x0003886c) vkb2_top_entry_pane_t2

0xe1ad,	// (0x0003889e) vkb2_top_entry_pane_t3_ParamLimits

0xe1ad,	// (0x0003889e) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0003a4a2) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0003a4a2) vkb2_top_entry_pane_t

0x6fd0,	// (0x000316c1) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fd0,	// (0x000316c1) vkb2_top_grid_right_pane_g1

0x6fe6,	// (0x000316d7) vkb2_top_grid_right_pane_g2_ParamLimits

0x6fe6,	// (0x000316d7) vkb2_top_grid_right_pane_g2

0x6ffe,	// (0x000316ef) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ffe,	// (0x000316ef) vkb2_top_grid_right_pane_g3

0x7016,	// (0x00031707) vkb2_top_grid_right_pane_g4_ParamLimits

0x7016,	// (0x00031707) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0003a4a9) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0003a4a9) vkb2_top_grid_right_pane_g

0x702c,	// (0x0003171d) vkb2_top_cell_left_pane_g1

0x7043,	// (0x00031734) vkb2_cell_keypad_pane_g1_ParamLimits

0x7043,	// (0x00031734) vkb2_cell_keypad_pane_g1

0xe1d1,	// (0x000388c2) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1d1,	// (0x000388c2) vkb2_cell_keypad_pane_t1

0x7051,	// (0x00031742) vkb2_cell_bottom_grid_pane_ParamLimits

0x7051,	// (0x00031742) vkb2_cell_bottom_grid_pane

0x708a,	// (0x0003177b) vkb2_cell_bottom_grid_pane_g1

0xdd5e,	// (0x0003844f) aid_call2_pane_cp02

0xdd66,	// (0x00038457) aid_call_pane_cp02

0xdd6e,	// (0x0003845f) clock_digital_number_pane_cp10

0xdd76,	// (0x00038467) clock_digital_number_pane_cp11

0xdd7e,	// (0x0003846f) clock_digital_number_pane_cp12

0xdd86,	// (0x00038477) clock_digital_number_pane_cp13

0xdd8e,	// (0x0003847f) clock_digital_separator_pane_cp10

0x8e92,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g1

0x8e92,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g2

0xdd96,	// (0x00038487) popup_clock_digital_analogue_window_cp2_g3

0x8e92,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g4

0xdd96,	// (0x00038487) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0003a45e) popup_clock_digital_analogue_window_cp2_g

0xdd9e,	// (0x0003848f) popup_clock_digital_analogue_window_cp2_t1

0xddac,	// (0x0003849d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0003a469) popup_clock_digital_analogue_window_cp2_t

0xc29d,	// (0x0003698e) clock_digital_number_pane_cp10_g1

0xc29d,	// (0x0003698e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb54,	// (0x0003a245) clock_digital_number_pane_cp10_g

0xc29d,	// (0x0003698e) clock_digital_separator_pane_cp10_g1

0xc29d,	// (0x0003698e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb54,	// (0x0003a245) clock_digital_separator_pane_cp10_g

0xdbda,	// (0x000382cb) uniindi_top_pane_g3

0xdbeb,	// (0x000382dc) uniindi_top_pane_g4

0x6e64,	// (0x00031555) vkb2_row_keypad_pane_ParamLimits

0x6e64,	// (0x00031555) vkb2_row_keypad_pane

0x70aa,	// (0x0003179b) vkb2_cell_t_keypad_pane_ParamLimits

0x70aa,	// (0x0003179b) vkb2_cell_t_keypad_pane

0x70ba,	// (0x000317ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70ba,	// (0x000317ab) vkb2_cell_t_keypad_pane_cp08

0x70cd,	// (0x000317be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70cd,	// (0x000317be) vkb2_cell_t_keypad_pane_cp09

0x70e1,	// (0x000317d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70e1,	// (0x000317d2) vkb2_cell_t_keypad_pane_cp01

0x70f2,	// (0x000317e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70f2,	// (0x000317e3) vkb2_cell_t_keypad_pane_cp02

0x7103,	// (0x000317f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7103,	// (0x000317f4) vkb2_cell_t_keypad_pane_cp03

0x7114,	// (0x00031805) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7114,	// (0x00031805) vkb2_cell_t_keypad_pane_cp04

0x7125,	// (0x00031816) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7125,	// (0x00031816) vkb2_cell_t_keypad_pane_cp05

0x7136,	// (0x00031827) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7136,	// (0x00031827) vkb2_cell_t_keypad_pane_cp06

0x7147,	// (0x00031838) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7147,	// (0x00031838) vkb2_cell_t_keypad_pane_cp07

0x7158,	// (0x00031849) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7158,	// (0x00031849) vkb2_cell_t_keypad_pane_cp10

0x690a,	// (0x00030ffb) vkb2_cell_t_keypad_pane_g1

0xe1e8,	// (0x000388d9) vkb2_cell_t_keypad_pane_t1

0x4b04,	// (0x0002f1f5) popup_grid_graphic2_window

0xe1fa,	// (0x000388eb) aid_size_cell_graphic2_ParamLimits

0xe1fa,	// (0x000388eb) aid_size_cell_graphic2

0xe232,	// (0x00038923) bg_popup_window_pane_cp21_ParamLimits

0xe232,	// (0x00038923) bg_popup_window_pane_cp21

0xe240,	// (0x00038931) graphic2_pages_pane_ParamLimits

0xe240,	// (0x00038931) graphic2_pages_pane

0xe286,	// (0x00038977) grid_graphic2_control_pane_ParamLimits

0xe286,	// (0x00038977) grid_graphic2_control_pane

0xe2c4,	// (0x000389b5) grid_graphic2_pane_ParamLimits

0xe2c4,	// (0x000389b5) grid_graphic2_pane

0xe338,	// (0x00038a29) cell_graphic2_pane

0x4b04,	// (0x0002f1f5) main_comp_mode_pane

0xd44f,	// (0x00037b40) list_ai3_gene_pane_ParamLimits

0xd820,	// (0x00037f11) bg_popup_window_pane_cp19_ParamLimits

0xd82c,	// (0x00037f1d) bg_touch_area_indi_pane_ParamLimits

0xd82c,	// (0x00037f1d) bg_touch_area_indi_pane

0xd842,	// (0x00037f33) bg_touch_area_indi_pane_cp01_ParamLimits

0xd842,	// (0x00037f33) bg_touch_area_indi_pane_cp01

0xd858,	// (0x00037f49) bg_touch_area_indi_pane_cp02_ParamLimits

0xd858,	// (0x00037f49) bg_touch_area_indi_pane_cp02

0xd870,	// (0x00037f61) bg_touch_area_indi_pane_cp03_ParamLimits

0xd870,	// (0x00037f61) bg_touch_area_indi_pane_cp03

0xd88a,	// (0x00037f7b) popup_slider_window_g1_ParamLimits

0xd8a6,	// (0x00037f97) popup_slider_window_g2_ParamLimits

0xd8c2,	// (0x00037fb3) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0003a3f3) popup_slider_window_g_ParamLimits

0xd91e,	// (0x0003800f) popup_slider_window_t1_ParamLimits

0xd992,	// (0x00038083) small_volume_slider_vertical_pane_ParamLimits

0xe338,	// (0x00038a29) cell_graphic2_pane_ParamLimits

0xe386,	// (0x00038a77) bg_button_pane_cp10_ParamLimits

0xe386,	// (0x00038a77) bg_button_pane_cp10

0xe399,	// (0x00038a8a) bg_button_pane_cp11_ParamLimits

0xe399,	// (0x00038a8a) bg_button_pane_cp11

0xe3ac,	// (0x00038a9d) graphic2_pages_pane_g1_ParamLimits

0xe3ac,	// (0x00038a9d) graphic2_pages_pane_g1

0xe3c7,	// (0x00038ab8) graphic2_pages_pane_g2_ParamLimits

0xe3c7,	// (0x00038ab8) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0003a4b7) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0003a4b7) graphic2_pages_pane_g

0xe3df,	// (0x00038ad0) graphic2_pages_pane_t1_ParamLimits

0xe3df,	// (0x00038ad0) graphic2_pages_pane_t1

0xe3f5,	// (0x00038ae6) cell_graphic2_control_pane_ParamLimits

0xe3f5,	// (0x00038ae6) cell_graphic2_control_pane

0xe416,	// (0x00038b07) cell_graphic2_pane_g1_ParamLimits

0xe416,	// (0x00038b07) cell_graphic2_pane_g1

0xe423,	// (0x00038b14) cell_graphic2_pane_g2_ParamLimits

0xe423,	// (0x00038b14) cell_graphic2_pane_g2

0xe430,	// (0x00038b21) cell_graphic2_pane_g3_ParamLimits

0xe430,	// (0x00038b21) cell_graphic2_pane_g3

0xe43d,	// (0x00038b2e) cell_graphic2_pane_g4_ParamLimits

0xe43d,	// (0x00038b2e) cell_graphic2_pane_g4

0xe44a,	// (0x00038b3b) cell_graphic2_pane_g5_ParamLimits

0xe44a,	// (0x00038b3b) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0003a4bc) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0003a4bc) cell_graphic2_pane_g

0xe465,	// (0x00038b56) cell_graphic2_pane_t1_ParamLimits

0xe465,	// (0x00038b56) cell_graphic2_pane_t1

0x9d56,	// (0x00034447) grid_highlight_pane_cp11_ParamLimits

0x9d56,	// (0x00034447) grid_highlight_pane_cp11

0x826d,	// (0x0003295e) bg_button_pane_cp05

0xe48e,	// (0x00038b7f) cell_graphic2_control_pane_g1

0xc29d,	// (0x0003698e) bg_touch_area_indi_pane_g1

0xe4b6,	// (0x00038ba7) aid_cmod_rocker_key_size

0xe4c0,	// (0x00038bb1) aid_cmode_itu_key_size

0xe4ca,	// (0x00038bbb) main_cmode_video_pane

0xe4d4,	// (0x00038bc5) main_comp_mode_itu_pane

0xe4e0,	// (0x00038bd1) main_comp_mode_rocker_pane

0xe4ec,	// (0x00038bdd) cell_cmode_rocker_pane_ParamLimits

0xe4ec,	// (0x00038bdd) cell_cmode_rocker_pane

0xe4fe,	// (0x00038bef) cell_cmode_itu_pane_ParamLimits

0xe4fe,	// (0x00038bef) cell_cmode_itu_pane

0x883e,	// (0x00032f2f) bg_button_pane_cp06_ParamLimits

0x883e,	// (0x00032f2f) bg_button_pane_cp06

0xc50b,	// (0x00036bfc) cell_cmode_rocker_pane_g1_ParamLimits

0xc50b,	// (0x00036bfc) cell_cmode_rocker_pane_g1

0xda36,	// (0x00038127) cell_cmode_rocker_pane_g2_ParamLimits

0xda36,	// (0x00038127) cell_cmode_rocker_pane_g2

0x0001,

0xfddb,	// (0x0003a4cc) cell_cmode_rocker_pane_g_ParamLimits

0xfddb,	// (0x0003a4cc) cell_cmode_rocker_pane_g

0x767f,	// (0x00031d70) bg_button_pane_cp07

0xe513,	// (0x00038c04) cell_cmode_itu_pane_g1

0xe51c,	// (0x00038c0d) cell_cmode_itu_pane_t1

0xe52a,	// (0x00038c1b) cell_cmode_itu_pane_t2

0x0001,

0xfde0,	// (0x0003a4d1) cell_cmode_itu_pane_t

0xdc5d,	// (0x0003834e) aid_touch_ctrl_left

0xdc65,	// (0x00038356) aid_touch_ctrl_right

0x767f,	// (0x00031d70) compa_mode_pane

0xe538,	// (0x00038c29) aid_cmod_rocker_key_size_cp

0xe542,	// (0x00038c33) aid_cmode_itu_key_size_cp

0xe54c,	// (0x00038c3d) compa_mode_pane_g1

0xe554,	// (0x00038c45) compa_mode_pane_g2

0xe55c,	// (0x00038c4d) compa_mode_pane_g3

0x0002,

0xfde5,	// (0x0003a4d6) compa_mode_pane_g

0xe564,	// (0x00038c55) main_comp_mode_itu_pane_cp

0xe56c,	// (0x00038c5d) main_comp_mode_rocker_pane_cp

0xe574,	// (0x00038c65) cell_cmode_itu_pane_cp_ParamLimits

0xe574,	// (0x00038c65) cell_cmode_itu_pane_cp

0xe589,	// (0x00038c7a) cell_cmode_rocker_pane_cp_ParamLimits

0xe589,	// (0x00038c7a) cell_cmode_rocker_pane_cp

0x883e,	// (0x00032f2f) bg_button_pane_cp06_cp_ParamLimits

0x883e,	// (0x00032f2f) bg_button_pane_cp06_cp

0xc50b,	// (0x00036bfc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc50b,	// (0x00036bfc) cell_cmode_rocker_pane_g1_cp

0xc29d,	// (0x0003698e) cell_cmode_rocker_pane_g2_cp

0x767f,	// (0x00031d70) bg_button_pane_cp07_cp

0xe59b,	// (0x00038c8c) cell_cmode_itu_pane_g1_cp

0xe5a4,	// (0x00038c95) cell_cmode_itu_pane_t1_cp

0xe5a4,	// (0x00038c95) cell_cmode_itu_pane_t2_cp

0xb20f,	// (0x00035900) settings_code_pane_cp2

0x7fe4,	// (0x000326d5) bg_popup_window_pane_cp3_ParamLimits

0x843b,	// (0x00032b2c) heading_pane_cp3_ParamLimits

0x8447,	// (0x00032b38) listscroll_popup_graphic_pane_ParamLimits

0x66b3,	// (0x00030da4) fep_hwr_aid_pane_ParamLimits

0x6b2a,	// (0x0003121b) aid_touch_sctrl_top_ParamLimits

0x6b45,	// (0x00031236) sctrl_sk_top_pane_g1_ParamLimits

0x690a,	// (0x00030ffb) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0003a40c) sctrl_sk_top_pane_g_ParamLimits

0x6b52,	// (0x00031243) sctrl_sk_top_pane_t1_ParamLimits

0x6b2a,	// (0x0003121b) aid_touch_sctrl_bottom_ParamLimits

0x6b52,	// (0x00031243) sctrl_sk_bottom_pane_t1_ParamLimits

0xdba6,	// (0x00038297) aid_area_touch_clock

0x6d3b,	// (0x0003142c) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d3b,	// (0x0003142c) aid_vkb2_area_top_pane_cell

0x6e86,	// (0x00031577) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e86,	// (0x00031577) aid_vkb2_area_bottom_pane_cell

0xe133,	// (0x00038824) popup_char_count_window

0xe5b2,	// (0x00038ca3) popup_char_count_window_g1

0xe5bb,	// (0x00038cac) popup_char_count_window_g2

0xe5c4,	// (0x00038cb5) popup_char_count_window_g3

0x0002,

0xfdec,	// (0x0003a4dd) popup_char_count_window_g

0xe5cd,	// (0x00038cbe) popup_char_count_window_t1

0x6c01,	// (0x000312f2) popup_fep_char_preview_window_ParamLimits

0x6c01,	// (0x000312f2) popup_fep_char_preview_window

0x6d59,	// (0x0003144a) vkb2_top_candi_pane_ParamLimits

0x6d59,	// (0x0003144a) vkb2_top_candi_pane

0xe5db,	// (0x00038ccc) cell_vkb2_top_candi_pane_ParamLimits

0xe5db,	// (0x00038ccc) cell_vkb2_top_candi_pane

0x716d,	// (0x0003185e) bg_popup_fep_char_preview_window_ParamLimits

0x716d,	// (0x0003185e) bg_popup_fep_char_preview_window

0x717b,	// (0x0003186c) popup_fep_char_preview_window_t1_ParamLimits

0x717b,	// (0x0003186c) popup_fep_char_preview_window_t1

0xe628,	// (0x00038d19) bg_popup_fep_char_preview_window_g1

0xe630,	// (0x00038d21) bg_popup_fep_char_preview_window_g2

0xe638,	// (0x00038d29) bg_popup_fep_char_preview_window_g3

0xe640,	// (0x00038d31) bg_popup_fep_char_preview_window_g4

0xe648,	// (0x00038d39) bg_popup_fep_char_preview_window_g5

0x71b5,	// (0x000318a6) bg_popup_fep_char_preview_window_g6

0xe650,	// (0x00038d41) bg_popup_fep_char_preview_window_g7

0xe658,	// (0x00038d49) bg_popup_fep_char_preview_window_g8

0xe660,	// (0x00038d51) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf3,	// (0x0003a4e4) bg_popup_fep_char_preview_window_g

0x690a,	// (0x00030ffb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x690a,	// (0x00030ffb) cell_vkb2_top_candi_pane_g1

0x6918,	// (0x00031009) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6918,	// (0x00031009) cell_vkb2_top_candi_pane_g2

0xdf65,	// (0x00038656) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf65,	// (0x00038656) cell_vkb2_top_candi_pane_g3

0x71bd,	// (0x000318ae) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71bd,	// (0x000318ae) cell_vkb2_top_candi_pane_g4

0xc9d7,	// (0x000370c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9d7,	// (0x000370c8) cell_vkb2_top_candi_pane_g5

0x71de,	// (0x000318cf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71de,	// (0x000318cf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe06,	// (0x0003a4f7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe06,	// (0x0003a4f7) cell_vkb2_top_candi_pane_g

0x71ec,	// (0x000318dd) cell_vkb2_top_candi_pane_t1

0x64ef,	// (0x00030be0) aid_size_touch_slider_mark_ParamLimits

0x64ef,	// (0x00030be0) aid_size_touch_slider_mark

0xe276,	// (0x00038967) grid_graphic2_catg_pane_ParamLimits

0xe276,	// (0x00038967) grid_graphic2_catg_pane

0xe314,	// (0x00038a05) popup_grid_graphic2_window_t1_ParamLimits

0xe314,	// (0x00038a05) popup_grid_graphic2_window_t1

0xe326,	// (0x00038a17) popup_grid_graphic2_window_t2_ParamLimits

0xe326,	// (0x00038a17) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0003a4b2) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0003a4b2) popup_grid_graphic2_window_t

0x826d,	// (0x0003295e) bg_button_pane_cp05_ParamLimits

0xe48e,	// (0x00038b7f) cell_graphic2_control_pane_g1_ParamLimits

0xe668,	// (0x00038d59) cell_graphic2_catg_pane_ParamLimits

0xe668,	// (0x00038d59) cell_graphic2_catg_pane

0x767f,	// (0x00031d70) bg_button_pane_cp12

0xe67a,	// (0x00038d6b) cell_graphic2_catg_pane_g1

0xdb72,	// (0x00038263) cell_tb_ext_pane_t1_ParamLimits

0x6fa3,	// (0x00031694) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6fa3,	// (0x00031694) vkb2_top_cell_right_narrow_pane

0x6fbb,	// (0x000316ac) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fbb,	// (0x000316ac) vkb2_top_cell_right_wide_pane

0x66a5,	// (0x00030d96) bg_vkb2_func_pane_ParamLimits

0x66a5,	// (0x00030d96) bg_vkb2_func_pane

0x702c,	// (0x0003171d) vkb2_top_cell_left_pane_g1_ParamLimits

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp03

0x708a,	// (0x0003177b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cea,	// (0x000343db) bg_vkb2_func_pane_g1

0x9cf2,	// (0x000343e3) bg_vkb2_func_pane_g2

0x9d02,	// (0x000343f3) bg_vkb2_func_pane_g3

0x9cfa,	// (0x000343eb) bg_vkb2_func_pane_g4

0x9d0a,	// (0x000343fb) bg_vkb2_func_pane_g5

0x9d12,	// (0x00034403) bg_vkb2_func_pane_g6

0x9d1a,	// (0x0003440b) bg_vkb2_func_pane_g7

0x9d22,	// (0x00034413) bg_vkb2_func_pane_g8

0x9ce2,	// (0x000343d3) bg_vkb2_func_pane_g9

0x0008,

0xfe13,	// (0x0003a504) bg_vkb2_func_pane_g

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp01

0x702c,	// (0x0003171d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x702c,	// (0x0003171d) vkb2_top_cell_right_wide_pane_g1

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66a5,	// (0x00030d96) bg_vkb2_fuc_pane_cp02

0x708a,	// (0x0003177b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x708a,	// (0x0003177b) vkb2_top_cell_right_narrow_pane_g1

0xd79e,	// (0x00037e8f) aid_touch_area_decrease_ParamLimits

0xd79e,	// (0x00037e8f) aid_touch_area_decrease

0xd7c2,	// (0x00037eb3) aid_touch_area_increase_ParamLimits

0xd7c2,	// (0x00037eb3) aid_touch_area_increase

0xd7ce,	// (0x00037ebf) aid_touch_area_mute_ParamLimits

0xd7ce,	// (0x00037ebf) aid_touch_area_mute

0xd7f2,	// (0x00037ee3) aid_touch_area_slider_ParamLimits

0xd7f2,	// (0x00037ee3) aid_touch_area_slider

0xd8de,	// (0x00037fcf) popup_slider_window_g4_ParamLimits

0xd8de,	// (0x00037fcf) popup_slider_window_g4

0xd8ea,	// (0x00037fdb) popup_slider_window_g5_ParamLimits

0xd8ea,	// (0x00037fdb) popup_slider_window_g5

0xd90c,	// (0x00037ffd) popup_slider_window_g6_ParamLimits

0xd90c,	// (0x00037ffd) popup_slider_window_g6

0xd94c,	// (0x0003803d) popup_slider_window_t2_ParamLimits

0xd94c,	// (0x0003803d) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0003a400) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0003a400) popup_slider_window_t

0xd964,	// (0x00038055) slider_pane_ParamLimits

0xd964,	// (0x00038055) slider_pane

0xe683,	// (0x00038d74) slider_pane_g1_ParamLimits

0xe683,	// (0x00038d74) slider_pane_g1

0xe697,	// (0x00038d88) slider_pane_g2_ParamLimits

0xe697,	// (0x00038d88) slider_pane_g2

0xe6ad,	// (0x00038d9e) slider_pane_g3_ParamLimits

0xe6ad,	// (0x00038d9e) slider_pane_g3

0x0003,

0xfe26,	// (0x0003a517) slider_pane_g_ParamLimits

0xfe26,	// (0x0003a517) slider_pane_g

0x6013,	// (0x00030704) popup_tb_float_extension_window_ParamLimits

0x6013,	// (0x00030704) popup_tb_float_extension_window

0xe6d9,	// (0x00038dca) aid_size_cell_tb_float_ext

0x767f,	// (0x00031d70) bg_popup_sub_window_cp28

0xe6e5,	// (0x00038dd6) grid_tb_float_ext_pane

0xe6ef,	// (0x00038de0) cell_tb_float_ext_pane_ParamLimits

0xe6ef,	// (0x00038de0) cell_tb_float_ext_pane

0xe709,	// (0x00038dfa) cell_tb_float_ext_pane_g1

0xe712,	// (0x00038e03) grid_highlight_pane_cp12

0x67f4,	// (0x00030ee5) cell_last_hwr_side_pane_ParamLimits

0x67f4,	// (0x00030ee5) cell_last_hwr_side_pane

0xc29d,	// (0x0003698e) cell_last_hwr_side_pane_g1

0xe71b,	// (0x00038e0c) cell_last_hwr_side_pane_g2

0x0001,

0xfe2f,	// (0x0003a520) cell_last_hwr_side_pane_g

0x6f52,	// (0x00031643) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f52,	// (0x00031643) vkb2_area_bottom_space_btn_pane

0x690a,	// (0x00030ffb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1e8,	// (0x000388d9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71ec,	// (0x000318dd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x720b,	// (0x000318fc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x720b,	// (0x000318fc) vkb2_area_bottom_space_btn_pane_g1

0x7245,	// (0x00031936) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7245,	// (0x00031936) vkb2_area_bottom_space_btn_pane_g2

0x727b,	// (0x0003196c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x727b,	// (0x0003196c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe34,	// (0x0003a525) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe34,	// (0x0003a525) vkb2_area_bottom_space_btn_pane_g

0x6768,	// (0x00030e59) cel_fep_hwr_func_pane_ParamLimits

0x6768,	// (0x00030e59) cel_fep_hwr_func_pane

0x67a4,	// (0x00030e95) cell_hwr_side_button_pane_ParamLimits

0x67a4,	// (0x00030e95) cell_hwr_side_button_pane

0xdba6,	// (0x00038297) aid_area_touch_clock_ParamLimits

0x826d,	// (0x0003295e) bg_uniindi_top_pane_ParamLimits

0xdbb8,	// (0x000382a9) uniindi_top_pane_g1_ParamLimits

0xdbce,	// (0x000382bf) uniindi_top_pane_g2_ParamLimits

0xdbda,	// (0x000382cb) uniindi_top_pane_g3_ParamLimits

0xdbeb,	// (0x000382dc) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0003a438) uniindi_top_pane_g_ParamLimits

0xdbf8,	// (0x000382e9) uniindi_top_pane_t1_ParamLimits

0x826d,	// (0x0003295e) bg_vkb2_func_pane_cp01_ParamLimits

0x826d,	// (0x0003295e) bg_vkb2_func_pane_cp01

0xe724,	// (0x00038e15) cel_fep_hwr_func_pane_g1_ParamLimits

0xe724,	// (0x00038e15) cel_fep_hwr_func_pane_g1

0x826d,	// (0x0003295e) bg_vkb2_func_pane_cp02_ParamLimits

0x826d,	// (0x0003295e) bg_vkb2_func_pane_cp02

0xe724,	// (0x00038e15) cell_hwr_side_button_pane_g1_ParamLimits

0xe724,	// (0x00038e15) cell_hwr_side_button_pane_g1

0x9b63,	// (0x00034254) status_pane_g4_ParamLimits

0x9b63,	// (0x00034254) status_pane_g4

0x9b7d,	// (0x0003426e) status_pane_t1

0xbfb7,	// (0x000366a8) form2_midp_gauge_slider_cont_pane

0xbfbf,	// (0x000366b0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd1,	// (0x000366c2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe3,	// (0x000366d4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb07,	// (0x0003a1f8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff5,	// (0x000366e6) form2_midp_slider_pane_ParamLimits

0x6bc1,	// (0x000312b2) aid_size_cell_func_vkb2_ParamLimits

0x6bc1,	// (0x000312b2) aid_size_cell_func_vkb2

0xe6c5,	// (0x00038db6) slider_pane_g4_ParamLimits

0xe6c5,	// (0x00038db6) slider_pane_g4

0x72c5,	// (0x000319b6) form2_midp_gauge_slider_pane_t2_cp01

0x72d3,	// (0x000319c4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72d3,	// (0x000319c4) form2_midp_gauge_slider_pane_t3_cp01

0x72f0,	// (0x000319e1) form2_midp_slider_pane_cp01

0x767f,	// (0x00031d70) navi_smil_pane

0xe75d,	// (0x00038e4e) navi_smil_pane_g1

0xe765,	// (0x00038e56) navi_smil_pane_t1

0xe732,	// (0x00038e23) form2_midp_slider_pane_g1

0xe73b,	// (0x00038e2c) form2_midp_slider_pane_g2

0xe743,	// (0x00038e34) form2_midp_slider_pane_g3

0xe732,	// (0x00038e23) form2_midp_slider_pane_g4

0xe74b,	// (0x00038e3c) form2_midp_slider_pane_g5

0x0004,

0xfe3d,	// (0x0003a52e) form2_midp_slider_pane_g

0x72b5,	// (0x000319a6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72b5,	// (0x000319a6) vkb2_area_bottom_space_btn_pane_g4

0x999a,	// (0x0003408b) lc0_navi_pane_ParamLimits

0x999a,	// (0x0003408b) lc0_navi_pane

0x9a10,	// (0x00034101) lc0_stat_indi_pane_ParamLimits

0x9a10,	// (0x00034101) lc0_stat_indi_pane

0x9a27,	// (0x00034118) ls0_title_pane_ParamLimits

0x9a27,	// (0x00034118) ls0_title_pane

0x883e,	// (0x00032f2f) bg_popup_sub_pane_cp14_ParamLimits

0xdb8d,	// (0x0003827e) list_uniindi_pane_ParamLimits

0xdb99,	// (0x0003828a) uniindi_top_pane_ParamLimits

0xdc35,	// (0x00038326) list_single_uniindi_pane_g1_ParamLimits

0xdc48,	// (0x00038339) list_single_uniindi_pane_t1_ParamLimits

0x72f9,	// (0x000319ea) lc0_stat_clock_pane_ParamLimits

0x72f9,	// (0x000319ea) lc0_stat_clock_pane

0xe773,	// (0x00038e64) lc0_stat_indi_pane_g1_ParamLimits

0xe773,	// (0x00038e64) lc0_stat_indi_pane_g1

0xe780,	// (0x00038e71) lc0_stat_indi_pane_g2_ParamLimits

0xe780,	// (0x00038e71) lc0_stat_indi_pane_g2

0x0001,

0xfe48,	// (0x0003a539) lc0_stat_indi_pane_g_ParamLimits

0xfe48,	// (0x0003a539) lc0_stat_indi_pane_g

0x7306,	// (0x000319f7) lc0_uni_indicator_pane_ParamLimits

0x7306,	// (0x000319f7) lc0_uni_indicator_pane

0xe78d,	// (0x00038e7e) ls0_title_pane_g1_ParamLimits

0xe78d,	// (0x00038e7e) ls0_title_pane_g1

0xe7a1,	// (0x00038e92) ls0_title_pane_t1_ParamLimits

0xe7a1,	// (0x00038e92) ls0_title_pane_t1

0x7313,	// (0x00031a04) lc0_uni_indicator_pane_g1_ParamLimits

0x7313,	// (0x00031a04) lc0_uni_indicator_pane_g1

0xe7d7,	// (0x00038ec8) lc0_stat_clock_pane_t1

0x4b04,	// (0x0002f1f5) main_ai5_pane

0xe7e5,	// (0x00038ed6) ai5_sk_pane_ParamLimits

0xe7e5,	// (0x00038ed6) ai5_sk_pane

0xe7f2,	// (0x00038ee3) cell_ai5_widget_pane_ParamLimits

0xe7f2,	// (0x00038ee3) cell_ai5_widget_pane

0xe8bc,	// (0x00038fad) aid_size_cell_widget_grid

0xe8d2,	// (0x00038fc3) bg_ai5_widget_pane_ParamLimits

0xe8d2,	// (0x00038fc3) bg_ai5_widget_pane

0xe946,	// (0x00039037) cell_ai5_widget_pane_g2

0xe956,	// (0x00039047) cell_ai5_widget_pane_g3

0xe96d,	// (0x0003905e) cell_ai5_widget_pane_g4

0xe979,	// (0x0003906a) cell_ai5_widget_pane_g5

0xe985,	// (0x00039076) cell_ai5_widget_pane_g6

0xe991,	// (0x00039082) cell_ai5_widget_pane_g7

0xe9d9,	// (0x000390ca) cell_ai5_widget_pane_t1_ParamLimits

0xe9d9,	// (0x000390ca) cell_ai5_widget_pane_t1

0xe9f6,	// (0x000390e7) cell_ai5_widget_pane_t2_ParamLimits

0xe9f6,	// (0x000390e7) cell_ai5_widget_pane_t2

0xea0e,	// (0x000390ff) cell_ai5_widget_pane_t3_ParamLimits

0xea0e,	// (0x000390ff) cell_ai5_widget_pane_t3

0xea26,	// (0x00039117) cell_ai5_widget_pane_t4_ParamLimits

0xea26,	// (0x00039117) cell_ai5_widget_pane_t4

0xea43,	// (0x00039134) cell_ai5_widget_pane_t5_ParamLimits

0xea43,	// (0x00039134) cell_ai5_widget_pane_t5

0xea62,	// (0x00039153) cell_ai5_widget_pane_t6_ParamLimits

0xea62,	// (0x00039153) cell_ai5_widget_pane_t6

0xea74,	// (0x00039165) cell_ai5_widget_pane_t7_ParamLimits

0xea74,	// (0x00039165) cell_ai5_widget_pane_t7

0xea8d,	// (0x0003917e) cell_ai5_widget_pane_t8_ParamLimits

0xea8d,	// (0x0003917e) cell_ai5_widget_pane_t8

0x0009,

0xfe62,	// (0x0003a553) cell_ai5_widget_pane_t_ParamLimits

0xfe62,	// (0x0003a553) cell_ai5_widget_pane_t

0xeae1,	// (0x000391d2) grid_ai5_widget_pane

0x883e,	// (0x00032f2f) highlight_cell_ai5_widget_pane_ParamLimits

0x883e,	// (0x00032f2f) highlight_cell_ai5_widget_pane

0xeaf9,	// (0x000391ea) ai5_sk_left_pane

0xeb03,	// (0x000391f4) ai5_sk_middle_pane

0xeb0d,	// (0x000391fe) ai5_sk_right_pane

0xeb17,	// (0x00039208) bg_ai5_widget_pane_g1_ParamLimits

0xeb17,	// (0x00039208) bg_ai5_widget_pane_g1

0xeb23,	// (0x00039214) bg_ai5_widget_pane_g2_ParamLimits

0xeb23,	// (0x00039214) bg_ai5_widget_pane_g2

0xeb2f,	// (0x00039220) bg_ai5_widget_pane_g3_ParamLimits

0xeb2f,	// (0x00039220) bg_ai5_widget_pane_g3

0xeb3b,	// (0x0003922c) bg_ai5_widget_pane_g4_ParamLimits

0xeb3b,	// (0x0003922c) bg_ai5_widget_pane_g4

0xeb47,	// (0x00039238) bg_ai5_widget_pane_g5_ParamLimits

0xeb47,	// (0x00039238) bg_ai5_widget_pane_g5

0xeb53,	// (0x00039244) bg_ai5_widget_pane_g6_ParamLimits

0xeb53,	// (0x00039244) bg_ai5_widget_pane_g6

0xeb5f,	// (0x00039250) bg_ai5_widget_pane_g7_ParamLimits

0xeb5f,	// (0x00039250) bg_ai5_widget_pane_g7

0xeb6b,	// (0x0003925c) bg_ai5_widget_pane_g8_ParamLimits

0xeb6b,	// (0x0003925c) bg_ai5_widget_pane_g8

0xeb77,	// (0x00039268) bg_ai5_widget_pane_g9_ParamLimits

0xeb77,	// (0x00039268) bg_ai5_widget_pane_g9

0x0008,

0xfe77,	// (0x0003a568) bg_ai5_widget_pane_g_ParamLimits

0xfe77,	// (0x0003a568) bg_ai5_widget_pane_g

0xeba9,	// (0x0003929a) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba9,	// (0x0003929a) cell_shortcut_ai5_widget_pane

0x94aa,	// (0x00033b9b) bg_cell_shortcut_ai5_widget_pane

0xebba,	// (0x000392ab) cell_grid_ai5_widget_pane_g1

0x94aa,	// (0x00033b9b) highlight_cell_shortcut_ai5_widget_pane

0x9cea,	// (0x000343db) ai5_sk_left_pane_g1

0xebc3,	// (0x000392b4) ai5_sk_left_pane_g2

0xebcb,	// (0x000392bc) ai5_sk_left_pane_g3

0xebd3,	// (0x000392c4) ai5_sk_left_pane_g4

0x0003,

0xfe8a,	// (0x0003a57b) ai5_sk_left_pane_g

0xebdb,	// (0x000392cc) ai5_sk_left_pane_t1

0x9cf2,	// (0x000343e3) ai5_sk_right_pane_g1

0xebe9,	// (0x000392da) ai5_sk_right_pane_g2

0xebf1,	// (0x000392e2) ai5_sk_right_pane_g3

0xebf9,	// (0x000392ea) ai5_sk_right_pane_g4

0x0003,

0xfe93,	// (0x0003a584) ai5_sk_right_pane_g

0xec01,	// (0x000392f2) ai5_sk_right_pane_t1

0x9cf2,	// (0x000343e3) ai5_sk_middle_pane_g1

0x9cea,	// (0x000343db) ai5_sk_middle_pane_g2

0x9d0a,	// (0x000343fb) ai5_sk_middle_pane_g3

0xebf1,	// (0x000392e2) ai5_sk_middle_pane_g4

0xebcb,	// (0x000392bc) ai5_sk_middle_pane_g5

0xec0f,	// (0x00039300) ai5_sk_middle_pane_g6

0xec17,	// (0x00039308) ai5_sk_middle_pane_g7

0x0006,

0xfe9c,	// (0x0003a58d) ai5_sk_middle_pane_g

0x982a,	// (0x00033f1b) aid_touch_area_size_lc0_ParamLimits

0x982a,	// (0x00033f1b) aid_touch_area_size_lc0

0x6939,	// (0x0003102a) cell_hwr_candidate_pane_t1_ParamLimits

0x9846,	// (0x00033f37) aid_touch_navi_pane

0x9b15,	// (0x00034206) status_dt_navi_pane_ParamLimits

0x9b15,	// (0x00034206) status_dt_navi_pane

0x9b22,	// (0x00034213) status_dt_sta_pane_ParamLimits

0x9b22,	// (0x00034213) status_dt_sta_pane

0xec1f,	// (0x00039310) dt_sta_controll_pane

0xec2c,	// (0x0003931d) dt_sta_indi_pane

0xec3d,	// (0x0003932e) dt_sta_title_pane

0x826d,	// (0x0003295e) bg_dt_sta_indi_pane_ParamLimits

0x826d,	// (0x0003295e) bg_dt_sta_indi_pane

0xec50,	// (0x00039341) dt_sta_battery_pane

0xec58,	// (0x00039349) dt_sta_indi_pane_g1

0xec61,	// (0x00039352) dt_sta_indi_pane_g2

0xec6a,	// (0x0003935b) dt_sta_indi_pane_g3

0x0002,

0xfeab,	// (0x0003a59c) dt_sta_indi_pane_g

0xec73,	// (0x00039364) dt_sta_signal_pane

0x883e,	// (0x00032f2f) bg_dt_sta_title_pane_ParamLimits

0x883e,	// (0x00032f2f) bg_dt_sta_title_pane

0xec7c,	// (0x0003936d) dt_sta_title_pane_g1

0xec84,	// (0x00039375) dt_sta_title_pane_t1_ParamLimits

0xec84,	// (0x00039375) dt_sta_title_pane_t1

0x767f,	// (0x00031d70) bg_dt_sta_control_pane

0xec99,	// (0x0003938a) dt_sta_controll_pane_g1

0xeca2,	// (0x00039393) bg_dt_sta_title_pane_g1

0xecab,	// (0x0003939c) bg_dt_sta_title_pane_g2

0xecb4,	// (0x000393a5) bg_dt_sta_title_pane_g3

0x0002,

0xfeb2,	// (0x0003a5a3) bg_dt_sta_title_pane_g

0xc29d,	// (0x0003698e) bg_dt_sta_indi_pane_g1

0xecbd,	// (0x000393ae) dt_sta_signal_pane_g1

0xecc5,	// (0x000393b6) dt_sta_signal_pane_g2

0x0001,

0xfeb9,	// (0x0003a5aa) dt_sta_signal_pane_g

0xeccd,	// (0x000393be) dt_sta_battery_pane_g1

0xecd6,	// (0x000393c7) dt_sta_battery_pane_t1

0xc29d,	// (0x0003698e) bg_dt_sta_control_pane_g1

0x8fa0,	// (0x00033691) fep_china_uni_eep_pane

0x8fa8,	// (0x00033699) fep_china_uni_entry_pane_ParamLimits

0x8fb8,	// (0x000336a9) popup_fep_china_uni_window_g1_ParamLimits

0x8fc8,	// (0x000336b9) popup_fep_china_uni_window_g2_ParamLimits

0x8fc8,	// (0x000336b9) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00039e0e) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00039e0e) popup_fep_china_uni_window_g

0xece5,	// (0x000393d6) fep_china_uni_eep_pane_g1

0xeced,	// (0x000393de) fep_china_uni_eep_pane_t1

0xe754,	// (0x00038e45) aid_touch_area_size_smil_player

0x9992,	// (0x00034083) lc0_clock_pane

0x9b71,	// (0x00034262) status_pane_g5_ParamLimits

0x9b71,	// (0x00034262) status_pane_g5

0x5cda,	// (0x000303cb) popup_keymap_window

0x9b37,	// (0x00034228) status_icon_pane

0xe956,	// (0x00039047) cell_ai5_widget_pane_g3_ParamLimits

0xe96d,	// (0x0003905e) cell_ai5_widget_pane_g4_ParamLimits

0xe979,	// (0x0003906a) cell_ai5_widget_pane_g5_ParamLimits

0xe99d,	// (0x0003908e) cell_ai5_widget_pane_g8_ParamLimits

0xe99d,	// (0x0003908e) cell_ai5_widget_pane_g8

0xe9b1,	// (0x000390a2) cell_ai5_widget_pane_g9_ParamLimits

0xe9b1,	// (0x000390a2) cell_ai5_widget_pane_g9

0xe9c5,	// (0x000390b6) cell_ai5_widget_pane_g10_ParamLimits

0xe9c5,	// (0x000390b6) cell_ai5_widget_pane_g10

0xecfc,	// (0x000393ed) status_icon_pane_g1

0x767f,	// (0x00031d70) bg_popup_sub_pane_cp13

0xed04,	// (0x000393f5) popup_keymap_window_t1

0x976f,	// (0x00033e60) control_pane_g6_ParamLimits

0x976f,	// (0x00033e60) control_pane_g6

0x977c,	// (0x00033e6d) control_pane_g7_ParamLimits

0x977c,	// (0x00033e6d) control_pane_g7

0x9789,	// (0x00033e7a) control_pane_g8_ParamLimits

0x9789,	// (0x00033e7a) control_pane_g8

0xec1f,	// (0x00039310) dt_sta_controll_pane_ParamLimits

0xec2c,	// (0x0003931d) dt_sta_indi_pane_ParamLimits

0xec3d,	// (0x0003932e) dt_sta_title_pane_ParamLimits

0x8776,	// (0x00032e67) aid_size_touch_scroll_bar_cale

0x4bdd,	// (0x0002f2ce) popup_discreet_window_ParamLimits

0x4bdd,	// (0x0002f2ce) popup_discreet_window

0x4c57,	// (0x0002f348) popup_sk_window

0xa368,	// (0x00034a59) bg_popup_sub_pane_cp28_ParamLimits

0xa368,	// (0x00034a59) bg_popup_sub_pane_cp28

0xed12,	// (0x00039403) popup_discreet_window_g1_ParamLimits

0xed12,	// (0x00039403) popup_discreet_window_g1

0xed32,	// (0x00039423) popup_discreet_window_t1_ParamLimits

0xed32,	// (0x00039423) popup_discreet_window_t1

0xed50,	// (0x00039441) popup_discreet_window_t2_ParamLimits

0xed50,	// (0x00039441) popup_discreet_window_t2

0x0002,

0xfebe,	// (0x0003a5af) popup_discreet_window_t_ParamLimits

0xfebe,	// (0x0003a5af) popup_discreet_window_t

0x7328,	// (0x00031a19) popup_sk_window_g1

0x7332,	// (0x00031a23) popup_sk_window_g2

0x0001,

0xfec5,	// (0x0003a5b6) popup_sk_window_g

0x733c,	// (0x00031a2d) popup_sk_window_t1

0x734a,	// (0x00031a3b) popup_sk_window_t1_copy1

0xe946,	// (0x00039037) cell_ai5_widget_pane_g2_ParamLimits

0xea9f,	// (0x00039190) cell_ai5_widget_pane_t9_ParamLimits

0xea9f,	// (0x00039190) cell_ai5_widget_pane_t9

0x767f,	// (0x00031d70) main_fep_fshwr2_pane

0x7358,	// (0x00031a49) aid_fshwr2_btn_pane

0x7364,	// (0x00031a55) aid_fshwr2_syb_pane

0x7370,	// (0x00031a61) aid_fshwr2_txt_pane

0x737c,	// (0x00031a6d) fshwr2_func_candi_pane

0x7391,	// (0x00031a82) fshwr2_hwr_syb_pane

0x73a1,	// (0x00031a92) fshwr2_icf_pane

0x4b04,	// (0x0002f1f5) fshwr2_icf_bg_pane

0x73ca,	// (0x00031abb) fshwr2_icf_pane_t1_ParamLimits

0x73ca,	// (0x00031abb) fshwr2_icf_pane_t1

0x8e92,	// (0x00033583) fshwr2_func_candi_pane_g1

0xeda2,	// (0x00039493) fshwr2_func_candi_row_pane_ParamLimits

0xeda2,	// (0x00039493) fshwr2_func_candi_row_pane

0x73e2,	// (0x00031ad3) cell_fshwr2_syb_pane_ParamLimits

0x73e2,	// (0x00031ad3) cell_fshwr2_syb_pane

0x690a,	// (0x00030ffb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x690a,	// (0x00030ffb) fshwr2_hwr_syb_pane_g1

0x4b04,	// (0x0002f1f5) bg_popup_call_pane_cp01

0x73f8,	// (0x00031ae9) fshwr2_func_candi_cell_pane_ParamLimits

0x73f8,	// (0x00031ae9) fshwr2_func_candi_cell_pane

0xa9e4,	// (0x000350d5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e4,	// (0x000350d5) fshwr2_func_candi_cell_bg_pane

0x742d,	// (0x00031b1e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x742d,	// (0x00031b1e) fshwr2_func_candi_cell_pane_g1

0x744d,	// (0x00031b3e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x744d,	// (0x00031b3e) fshwr2_func_candi_cell_pane_t1

0x4b04,	// (0x0002f1f5) bg_button_pane_cp08

0xb684,	// (0x00035d75) cell_fshwr2_syb_bg_pane

0x7460,	// (0x00031b51) cell_fshwr2_syb_bg_pane_g1

0x7468,	// (0x00031b59) cell_fshwr2_syb_bg_pane_t1

0x883e,	// (0x00032f2f) main_tmo_pane

0xae7d,	// (0x0003556e) uni_indicator_pane_g1_ParamLimits

0xae93,	// (0x00035584) uni_indicator_pane_g2_ParamLimits

0xaea9,	// (0x0003559a) uni_indicator_pane_g3_ParamLimits

0xaebe,	// (0x000355af) uni_indicator_pane_g4_ParamLimits

0xaebe,	// (0x000355af) uni_indicator_pane_g4

0xaed2,	// (0x000355c3) uni_indicator_pane_g5_ParamLimits

0xaed2,	// (0x000355c3) uni_indicator_pane_g5

0xaed2,	// (0x000355c3) uni_indicator_pane_g6_ParamLimits

0xaed2,	// (0x000355c3) uni_indicator_pane_g6

0xf921,	// (0x0003a012) uni_indicator_pane_g_ParamLimits

0xd780,	// (0x00037e71) popup_tmo_note_window_ParamLimits

0xd780,	// (0x00037e71) popup_tmo_note_window

0x6ba3,	// (0x00031294) fshwr2_bg_pane

0x743e,	// (0x00031b2f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x743e,	// (0x00031b2f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeca,	// (0x0003a5bb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeca,	// (0x0003a5bb) fshwr2_func_candi_cell_pane_g

0x68f2,	// (0x00030fe3) bg_popup_window_pane_cp01

0x7477,	// (0x00031b68) bg_popup_window_pane_g1_cp01

0xedb2,	// (0x000394a3) bg_popup_window_pane_cp22_ParamLimits

0xedb2,	// (0x000394a3) bg_popup_window_pane_cp22

0xedc0,	// (0x000394b1) listscroll_tmo_link_pane_ParamLimits

0xedc0,	// (0x000394b1) listscroll_tmo_link_pane

0xee00,	// (0x000394f1) popup_tmo_note_window_g1_ParamLimits

0xee00,	// (0x000394f1) popup_tmo_note_window_g1

0xee0d,	// (0x000394fe) tmo_note_info_pane_ParamLimits

0xee0d,	// (0x000394fe) tmo_note_info_pane

0xee27,	// (0x00039518) list_tmo_note_info_pane_g1_ParamLimits

0xee27,	// (0x00039518) list_tmo_note_info_pane_g1

0xee3e,	// (0x0003952f) list_tmo_note_info_pane_g2_ParamLimits

0xee3e,	// (0x0003952f) list_tmo_note_info_pane_g2

0x0001,

0xfecf,	// (0x0003a5c0) list_tmo_note_info_pane_g_ParamLimits

0xfecf,	// (0x0003a5c0) list_tmo_note_info_pane_g

0xee5a,	// (0x0003954b) list_tmo_note_info_text_pane_ParamLimits

0xee5a,	// (0x0003954b) list_tmo_note_info_text_pane

0xeedd,	// (0x000395ce) list_tmo_link_pane

0xeeea,	// (0x000395db) scroll_pane_cp20

0xeef7,	// (0x000395e8) list_single_tmo_link_pane_ParamLimits

0xeef7,	// (0x000395e8) list_single_tmo_link_pane

0xef07,	// (0x000395f8) list_single_tmo_link_pane_t1

0xef15,	// (0x00039606) list_tmo_note_info_text_pane_t1_ParamLimits

0xef15,	// (0x00039606) list_tmo_note_info_text_pane_t1

0x88f8,	// (0x00032fe9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88f8,	// (0x00032fe9) aid_size_touch_scroll_bar_cp01

0x53cf,	// (0x0002fac0) aid_size_touch_slider_marker

0x4c3f,	// (0x0002f330) popup_settings_window_ParamLimits

0x4c3f,	// (0x0002f330) popup_settings_window

0x5b67,	// (0x00030258) popup_candi_list_indi_window

0x9846,	// (0x00033f37) aid_touch_navi_pane_ParamLimits

0x6afe,	// (0x000311ef) rs_clock_indi_pane

0x6b07,	// (0x000311f8) sctrl_sk_bottom_pane_ParamLimits

0x6b18,	// (0x00031209) sctrl_sk_top_pane_ParamLimits

0x6c1b,	// (0x0003130c) popup_fep_tooltip_window

0xe8bc,	// (0x00038fad) aid_size_cell_widget_grid_ParamLimits

0xe931,	// (0x00039022) cell_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x00039022) cell_ai5_widget_pane_g1

0xe985,	// (0x00039076) cell_ai5_widget_pane_g6_ParamLimits

0xe991,	// (0x00039082) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4d,	// (0x0003a53e) cell_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0003a53e) cell_ai5_widget_pane_g

0xeac3,	// (0x000391b4) cell_ai5_widget_pane_t10_ParamLimits

0xeac3,	// (0x000391b4) cell_ai5_widget_pane_t10

0xeae1,	// (0x000391d2) grid_ai5_widget_pane_ParamLimits

0xeb83,	// (0x00039274) cell_contacts_ai5_widget_pane_ParamLimits

0xeb83,	// (0x00039274) cell_contacts_ai5_widget_pane

0xed65,	// (0x00039456) popup_discreet_window_t3_ParamLimits

0xed65,	// (0x00039456) popup_discreet_window_t3

0x73b6,	// (0x00031aa7) popup_fshwr2_char_preview_window_ParamLimits

0x73b6,	// (0x00031aa7) popup_fshwr2_char_preview_window

0xee78,	// (0x00039569) tmo_note_info_pane_t1

0xee8d,	// (0x0003957e) tmo_note_info_pane_t2

0xeea4,	// (0x00039595) tmo_note_info_pane_t3

0xeeb9,	// (0x000395aa) tmo_note_info_pane_t4

0xeecb,	// (0x000395bc) tmo_note_info_pane_t5

0x0004,

0xfed4,	// (0x0003a5c5) tmo_note_info_pane_t

0xeedd,	// (0x000395ce) list_tmo_link_pane_ParamLimits

0xeeea,	// (0x000395db) scroll_pane_cp20_ParamLimits

0x4b04,	// (0x0002f1f5) bg_popup_fep_char_preview_window_cp01

0xef2e,	// (0x0003961f) popup_fshwr2_char_preview_window_t1

0xef3c,	// (0x0003962d) popup_candi_list_indi_window_g1

0xef45,	// (0x00039636) bg_cell_contacts_ai5_widget_pane

0xef51,	// (0x00039642) cell_contacts_ai5_widget_pane_g1

0xef66,	// (0x00039657) cell_contacts_ai5_widget_pane_g2

0xef72,	// (0x00039663) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0006,	// (0x0002a6f7) cell_contacts_ai5_widget_pane_g

0xef7e,	// (0x0003966f) cell_contacts_ai5_widget_pane_t1

0x883e,	// (0x00032f2f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff5,	// (0x000396e6) settings_container_pane

0x94aa,	// (0x00033b9b) listscroll_set_pane_copy1

0xb973,	// (0x00036064) scroll_pane_cp121_copy1

0xf001,	// (0x000396f2) set_content_pane_copy1

0xf009,	// (0x000396fa) aid_height_set_list_copy1_ParamLimits

0xf009,	// (0x000396fa) aid_height_set_list_copy1

0xb0c5,	// (0x000357b6) aid_size_parent_copy1_ParamLimits

0xb0c5,	// (0x000357b6) aid_size_parent_copy1

0xf015,	// (0x00039706) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf015,	// (0x00039706) button_value_adjust_pane_cp6_copy1

0x97e4,	// (0x00033ed5) list_highlight_pane_cp2_copy1_ParamLimits

0x97e4,	// (0x00033ed5) list_highlight_pane_cp2_copy1

0xf029,	// (0x0003971a) list_set_pane_copy1_ParamLimits

0xf029,	// (0x0003971a) list_set_pane_copy1

0xef90,	// (0x00039681) main_pane_set_t1_copy1_ParamLimits

0xef90,	// (0x00039681) main_pane_set_t1_copy1

0xefca,	// (0x000396bb) main_pane_set_t2_copy1_ParamLimits

0xefca,	// (0x000396bb) main_pane_set_t2_copy1

0xf0d6,	// (0x000397c7) main_pane_set_t3_copy1

0xf0e4,	// (0x000397d5) main_pane_set_t4_copy1

0xefe9,	// (0x000396da) set_content_pane_g1_copy1_ParamLimits

0xefe9,	// (0x000396da) set_content_pane_g1_copy1

0xf0f2,	// (0x000397e3) setting_code_pane_copy1

0xf0fa,	// (0x000397eb) setting_slider_graphic_pane_copy1

0xf0fa,	// (0x000397eb) setting_slider_pane_copy1

0xf0fa,	// (0x000397eb) setting_text_pane_copy1

0xf0fa,	// (0x000397eb) setting_volume_pane_copy1

0xf0f2,	// (0x000397e3) settings_code_pane_cp2_copy1

0xf102,	// (0x000397f3) settings_code_pane_cp_copy1_ParamLimits

0xf102,	// (0x000397f3) settings_code_pane_cp_copy1

0x7480,	// (0x00031b71) volume_set_pane_copy1

0xf116,	// (0x00039807) volume_set_pane_g10_copy1

0xf11e,	// (0x0003980f) volume_set_pane_g1_copy1

0xf126,	// (0x00039817) volume_set_pane_g2_copy1

0xf12e,	// (0x0003981f) volume_set_pane_g3_copy1

0xf136,	// (0x00039827) volume_set_pane_g4_copy1

0xf13e,	// (0x0003982f) volume_set_pane_g5_copy1

0xf146,	// (0x00039837) volume_set_pane_g6_copy1

0xf14e,	// (0x0003983f) volume_set_pane_g7_copy1

0xf156,	// (0x00039847) volume_set_pane_g8_copy1

0xf15e,	// (0x0003984f) volume_set_pane_g9_copy1

0x7fe4,	// (0x000326d5) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fe4,	// (0x000326d5) bg_set_opt_pane_cp_copy1

0x7488,	// (0x00031b79) setting_slider_pane_t1_copy1_ParamLimits

0x7488,	// (0x00031b79) setting_slider_pane_t1_copy1

0x74a6,	// (0x00031b97) setting_slider_pane_t2_copy1_ParamLimits

0x74a6,	// (0x00031b97) setting_slider_pane_t2_copy1

0x74c0,	// (0x00031bb1) setting_slider_pane_t3_copy1_ParamLimits

0x74c0,	// (0x00031bb1) setting_slider_pane_t3_copy1

0x74d8,	// (0x00031bc9) slider_set_pane_copy1_ParamLimits

0x74d8,	// (0x00031bc9) slider_set_pane_copy1

0x8899,	// (0x00032f8a) set_opt_bg_pane_g1_copy2

0x88a1,	// (0x00032f92) set_opt_bg_pane_g2_copy2

0xf166,	// (0x00039857) set_opt_bg_pane_g3_copy2

0x88b1,	// (0x00032fa2) set_opt_bg_pane_g4_copy2

0x88b9,	// (0x00032faa) set_opt_bg_pane_g5_copy2

0x88c1,	// (0x00032fb2) set_opt_bg_pane_g6_copy2

0xf170,	// (0x00039861) set_opt_bg_pane_g7_copy2

0xf178,	// (0x00039869) set_opt_bg_pane_g8_copy2

0xf182,	// (0x00039873) set_opt_bg_pane_g9_copy2

0x74ee,	// (0x00031bdf) aid_size_touch_slider_mark_copy1_ParamLimits

0x74ee,	// (0x00031bdf) aid_size_touch_slider_mark_copy1

0xf18c,	// (0x0003987d) slider_set_pane_g1_copy1

0x7502,	// (0x00031bf3) slider_set_pane_g2_copy1

0x650f,	// (0x00030c00) slider_set_pane_g3_copy1_ParamLimits

0x650f,	// (0x00030c00) slider_set_pane_g3_copy1

0x6523,	// (0x00030c14) slider_set_pane_g4_copy1_ParamLimits

0x6523,	// (0x00030c14) slider_set_pane_g4_copy1

0x653b,	// (0x00030c2c) slider_set_pane_g5_copy1_ParamLimits

0x653b,	// (0x00030c2c) slider_set_pane_g5_copy1

0x650f,	// (0x00030c00) slider_set_pane_g6_copy1_ParamLimits

0x650f,	// (0x00030c00) slider_set_pane_g6_copy1

0x750a,	// (0x00031bfb) slider_set_pane_g7_copy1_ParamLimits

0x750a,	// (0x00031bfb) slider_set_pane_g7_copy1

0x7693,	// (0x00031d84) bg_set_opt_pane_cp2_copy1

0xf195,	// (0x00039886) setting_slider_graphic_pane_g1_copy1

0xf19e,	// (0x0003988f) setting_slider_graphic_pane_t1_copy1

0xf1ae,	// (0x0003989f) setting_slider_graphic_pane_t2_copy1

0xf1be,	// (0x000398af) slider_set_pane_cp_copy1

0xf1ce,	// (0x000398bf) input_focus_pane_cp1_copy1

0xf1d7,	// (0x000398c8) list_set_text_pane_copy1

0xf1df,	// (0x000398d0) setting_text_pane_g1_copy1

0x7fc7,	// (0x000326b8) set_text_pane_t1_copy1

0xf1ce,	// (0x000398bf) input_focus_pane_cp2_copy1

0xf1df,	// (0x000398d0) setting_code_pane_g1_copy1

0xf1e8,	// (0x000398d9) setting_code_pane_t1_copy1

0xf1f6,	// (0x000398e7) list_set_graphic_pane_copy1

0x7693,	// (0x00031d84) bg_set_opt_pane_cp4_copy1

0x919d,	// (0x0003388e) list_set_graphic_pane_g1_copy1_ParamLimits

0x919d,	// (0x0003388e) list_set_graphic_pane_g1_copy1

0xf20a,	// (0x000398fb) list_set_graphic_pane_g2_copy1

0x91b5,	// (0x000338a6) list_set_graphic_pane_t1_copy1_ParamLimits

0x91b5,	// (0x000338a6) list_set_graphic_pane_t1_copy1

0xc29d,	// (0x0003698e) rs_clock_indi_pane_g1

0xf212,	// (0x00039903) rs_clock_indi_pane_t1

0xf220,	// (0x00039911) rs_indi_pane

0xf228,	// (0x00039919) rs_indi_pane_g1

0xf231,	// (0x00039922) rs_indi_pane_g2

0xf23a,	// (0x0003992b) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x0003a5d0) rs_indi_pane_g

0x94aa,	// (0x00033b9b) bg_popup_preview_window_pane_cp03

0xf243,	// (0x00039934) popup_fep_tooltip_window_t1

0xcf19,	// (0x0003760a) popup_note2_window_g2_ParamLimits

0xcf19,	// (0x0003760a) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0003a370) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0003a370) popup_note2_window_g

0xd415,	// (0x00037b06) bg_popup_sub_pane_cp11_ParamLimits

0xd422,	// (0x00037b13) cell_ai3_links_pane_g1_ParamLimits

0xd439,	// (0x00037b2a) cell_ai3_links_pane_t1

0x7fc7,	// (0x000326b8) set_text_pane_t1_copy1_ParamLimits

0x93c7,	// (0x00033ab8) cell_graphic_popup_pane_cp2_ParamLimits

0x93c7,	// (0x00033ab8) cell_graphic_popup_pane_cp2

0xf251,	// (0x00039942) cell_graphic_popup_pane_g1_cp2

0x8589,	// (0x00032c7a) cell_graphic_popup_pane_g2_cp2

0xf259,	// (0x0003994a) cell_graphic_popup_pane_g3_cp2

0xf261,	// (0x00039952) cell_graphic_popup_pane_t2_cp2

0x859a,	// (0x00032c8b) grid_highlight_pane_cp3_cp2

0x8bd9,	// (0x000332ca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x883e,	// (0x00032f2f) main_tmo_pane_ParamLimits

0xd774,	// (0x00037e65) popup_tmo_big_image_note_window

0xe920,	// (0x00039011) cell_ai5_widget_list_pane

0xe928,	// (0x00039019) cell_ai5_widget_lrg_icon_pane

0xee78,	// (0x00039569) tmo_note_info_pane_t1_ParamLimits

0xee8d,	// (0x0003957e) tmo_note_info_pane_t2_ParamLimits

0xeea4,	// (0x00039595) tmo_note_info_pane_t3_ParamLimits

0xeeb9,	// (0x000395aa) tmo_note_info_pane_t4_ParamLimits

0xeecb,	// (0x000395bc) tmo_note_info_pane_t5_ParamLimits

0xfed4,	// (0x0003a5c5) tmo_note_info_pane_t_ParamLimits

0xeff5,	// (0x000396e6) settings_container_pane_ParamLimits

0xf1c6,	// (0x000398b7) indicator_popup_pane_cp5

0xf1c6,	// (0x000398b7) indicator_popup_pane_cp6

0xf1f6,	// (0x000398e7) list_set_graphic_pane_copy1_ParamLimits

0x767f,	// (0x00031d70) bg_popup_window_pane_cp23

0xf26f,	// (0x00039960) popup_tmo_big_image_note_window_g1

0xf278,	// (0x00039969) popup_tmo_big_image_note_window_t1

0xf288,	// (0x00039979) popup_tmo_big_image_note_window_t2

0xf298,	// (0x00039989) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x0003a5d7) popup_tmo_big_image_note_window_t

0xc29d,	// (0x0003698e) cell_ai5_widget_lrg_icon_pane_g1

0xf2a8,	// (0x00039999) cell_ai5_widget_lrg_icon_pane_t1

0xf2b6,	// (0x000399a7) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b6,	// (0x000399a7) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x000399be) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x000399be) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x000399cb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x000399cb) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x000399f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x000399f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x0003a5de) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x0003a5de) cell_ai5_widget_list_row_pane_t

0x4b04,	// (0x0002f1f5) main_fep_vtchi_ss_pane

0xf34c,	// (0x00039a3d) popup_fep_char_pre_window

0xf354,	// (0x00039a45) popup_fep_ituss_window

0xf375,	// (0x00039a66) popup_fep_vkbss_window

0xf394,	// (0x00039a85) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x00039a85) grid_vkbss_keypad_pane

0xf3a4,	// (0x00039a95) ituss_keypad_pane

0x752c,	// (0x00031c1d) aid_vkbss_key_offset_ParamLimits

0x752c,	// (0x00031c1d) aid_vkbss_key_offset

0x7538,	// (0x00031c29) cell_vkbss_key_pane_ParamLimits

0x7538,	// (0x00031c29) cell_vkbss_key_pane

0x9b4b,	// (0x0003423c) bg_cell_vkbss_key_g1_ParamLimits

0x9b4b,	// (0x0003423c) bg_cell_vkbss_key_g1

0xf3b3,	// (0x00039aa4) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x00039aa4) cell_vkbss_key_3p_pane

0xf3cd,	// (0x00039abe) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x00039abe) cell_vkbss_key_g1

0xf3e7,	// (0x00039ad8) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x00039ad8) cell_vkbss_key_t1

0x754e,	// (0x00031c3f) cell_ituss_key_pane_ParamLimits

0x754e,	// (0x00031c3f) cell_ituss_key_pane

0xf412,	// (0x00039b03) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x00039b03) bg_cell_ituss_key_g1

0xf41e,	// (0x00039b0f) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00039b0f) cell_ituss_key_pane_g1

0x755f,	// (0x00031c50) cell_ituss_key_pane_g2_ParamLimits

0x755f,	// (0x00031c50) cell_ituss_key_pane_g2

0x0002,

0xfef4,	// (0x0003a5e5) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0003a5e5) cell_ituss_key_pane_g

0x758b,	// (0x00031c7c) cell_ituss_key_t1_ParamLimits

0x758b,	// (0x00031c7c) cell_ituss_key_t1

0x75c5,	// (0x00031cb6) cell_ituss_key_t2_ParamLimits

0x75c5,	// (0x00031cb6) cell_ituss_key_t2

0x75f6,	// (0x00031ce7) cell_ituss_key_t3_ParamLimits

0x75f6,	// (0x00031ce7) cell_ituss_key_t3

0x75c5,	// (0x00031cb6) cell_ituss_key_t4_ParamLimits

0x75c5,	// (0x00031cb6) cell_ituss_key_t4

0x0004,

0xfefb,	// (0x0003a5ec) cell_ituss_key_t_ParamLimits

0xfefb,	// (0x0003a5ec) cell_ituss_key_t

0xf444,	// (0x00039b35) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00039b3d) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x00039b45) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0003a5f7) cell_vkbss_key_3p_pane_g

0x4b04,	// (0x0002f1f5) bg_popup_fep_char_preview_window_cp02

0x7639,	// (0x00031d2a) popup_fep_char_pre_window_t1

0xe8b2,	// (0x00038fa3) main_ai5_sk_pane

0xef45,	// (0x00039636) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef51,	// (0x00039642) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef66,	// (0x00039657) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef72,	// (0x00039663) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0006,	// (0x0002a6f7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7e,	// (0x0003966f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x883e,	// (0x00032f2f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45c,	// (0x00039b4d) main_ai5_sk_pane_g1

0xa1a6,	// (0x00034897) popup_query_code_window_g1

0xf36a,	// (0x00039a5b) popup_fep_vkb_icf_pane

0xf37e,	// (0x00039a6f) popup_fep_vtchi_icf_pane

0xf465,	// (0x00039b56) bg_icf_pane

0xf471,	// (0x00039b62) list_vkb_icf_pane

0xf47d,	// (0x00039b6e) bg_icf_pane_cp01

0xf490,	// (0x00039b81) vtchi_icf_list_pane

0xf4a0,	// (0x00039b91) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x00039b91) list_vkb_icf_pane_t1

0xf4b8,	// (0x00039ba9) vtchi_icf_list_pane_t1_ParamLimits

0xf4b8,	// (0x00039ba9) vtchi_icf_list_pane_t1

0xf354,	// (0x00039a45) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x00039a6f) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x00039a95) ituss_keypad_pane_ParamLimits

0x7520,	// (0x00031c11) ituss_sks_pane

0xf465,	// (0x00039b56) bg_icf_pane_ParamLimits

0xf330,	// (0x00039a21) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x00039a21) icf_edit_indi_pane

0xf471,	// (0x00039b62) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x00039b6e) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x00039a30) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x00039a30) icf_edit_indi_pane_cp01

0xf498,	// (0x00039b89) vtchi_query_pane

0xc50b,	// (0x00036bfc) icf_edit_indi_pane_g1_ParamLimits

0xc50b,	// (0x00036bfc) icf_edit_indi_pane_g1

0xf531,	// (0x00039c22) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00039c22) icf_edit_indi_pane_g2

0x0001,

0x0024,	// (0x0002a715) icf_edit_indi_pane_g_ParamLimits

0x0024,	// (0x0002a715) icf_edit_indi_pane_g

0xf540,	// (0x00039c31) icf_edit_indi_pane_t1

0xf4da,	// (0x00039bcb) bg_input_focus_pane_cp042

0x876d,	// (0x00032e5e) vtchi_button_pane

0xf4e3,	// (0x00039bd4) vtchi_query_pane_t1

0xf4f1,	// (0x00039be2) vtchi_query_pane_t2

0xf4ff,	// (0x00039bf0) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x0003a5fe) vtchi_query_pane_t

0x4b04,	// (0x0002f1f5) bg_button_pane_cp13

0xf50d,	// (0x00039bfe) vtchi_button_pane_g1

0x7648,	// (0x00031d39) ituss_sks_pane_g1

0x7653,	// (0x00031d44) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x0003a605) ituss_sks_pane_g

0xf515,	// (0x00039c06) ituss_sks_pane_t1

0xf523,	// (0x00039c14) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x0003a60a) ituss_sks_pane_t

0xbce7,	// (0x000363d8) indicator_nsta_pane_cp_g1

0xbcf0,	// (0x000363e1) indicator_nsta_pane_cp_g2

0xbcf8,	// (0x000363e9) indicator_nsta_pane_cp_g3

0xbd00,	// (0x000363f1) indicator_nsta_pane_cp_g4

0xbd08,	// (0x000363f9) indicator_nsta_pane_cp_g5

0xbd08,	// (0x000363f9) indicator_nsta_pane_cp_g6

0x0005,

0xfabd,	// (0x0003a1ae) indicator_nsta_pane_cp_g

0xe47b,	// (0x00038b6c) cell_graphic2_pane_t2_ParamLimits

0xe47b,	// (0x00038b6c) cell_graphic2_pane_t2

0x0001,

0xfdd6,	// (0x0003a4c7) cell_graphic2_pane_t_ParamLimits

0xfdd6,	// (0x0003a4c7) cell_graphic2_pane_t

0xe4a8,	// (0x00038b99) cell_graphic2_control_pane_t1

0x8f50,	// (0x00033641) signal_pane_g3_ParamLimits

0x8f50,	// (0x00033641) signal_pane_g3

0x8f62,	// (0x00033653) signal_pane_g4_ParamLimits

0x8f62,	// (0x00033653) signal_pane_g4

0xf31a,	// (0x00039a0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x00039a0b) cell_ai5_widget_list_row_pane_t3

0xf432,	// (0x00039b23) cell_ituss_key_pane_t1_ParamLimits

0xf432,	// (0x00039b23) cell_ituss_key_pane_t1

0x9de4,	// (0x000344d5) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de4,	// (0x000344d5) form_field_data_wide_pane_vc_t2

0x9df8,	// (0x000344e9) form_field_data_wide_pane_vc_t3_ParamLimits

0x9df8,	// (0x000344e9) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00039efa) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00039efa) form_field_data_wide_pane_vc_t

0xb9b3,	// (0x000360a4) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9b3,	// (0x000360a4) form_field_slider_wide_pane_vc_t3

0xba8d,	// (0x0003617e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba8d,	// (0x0003617e) form_field_popup_wide_pane_vc_t2

0xbaa4,	// (0x00036195) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaa4,	// (0x00036195) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaac,	// (0x0003a19d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaac,	// (0x0003a19d) form_field_popup_wide_pane_vc_t

0x7358,	// (0x00031a49) aid_fshwr2_btn_pane_ParamLimits

0x7364,	// (0x00031a55) aid_fshwr2_syb_pane_ParamLimits

0x7370,	// (0x00031a61) aid_fshwr2_txt_pane_ParamLimits

0x6ba3,	// (0x00031294) fshwr2_bg_pane_ParamLimits

0x737c,	// (0x00031a6d) fshwr2_func_candi_pane_ParamLimits

0x7391,	// (0x00031a82) fshwr2_hwr_syb_pane_ParamLimits

0x73a1,	// (0x00031a92) fshwr2_icf_pane_ParamLimits

0x7ba2,	// (0x00032293) list_double_graphic_pane_vc_g4_ParamLimits

0x7ba2,	// (0x00032293) list_double_graphic_pane_vc_g4

0x757f,	// (0x00031c70) cell_ituss_key_pane_g3_ParamLimits

0x757f,	// (0x00031c70) cell_ituss_key_pane_g3

0x7627,	// (0x00031d18) cell_ituss_key_t5_ParamLimits

0x7627,	// (0x00031d18) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
