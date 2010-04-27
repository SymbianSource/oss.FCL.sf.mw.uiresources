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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001f0d5 };

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
0xd008,	// (0x0002c0dd) Screen

0xd014,	// (0x0002c0e9) application_window_ParamLimits

0xd014,	// (0x0002c0e9) application_window

0x3650,	// (0x00022725) screen_g1

0xbe77,	// (0x0002af4c) area_bottom_pane_ParamLimits

0xbe77,	// (0x0002af4c) area_bottom_pane

0x13df,	// (0x000204b4) area_top_pane_ParamLimits

0x13df,	// (0x000204b4) area_top_pane

0x1473,	// (0x00020548) main_pane_ParamLimits

0x1473,	// (0x00020548) main_pane

0x365a,	// (0x0002272f) misc_graphics

0xd7bc,	// (0x0002c891) battery_pane_ParamLimits

0xd7bc,	// (0x0002c891) battery_pane

0x5c9f,	// (0x00024d74) bg_status_flat_pane_g8

0x5ca7,	// (0x00024d7c) bg_status_flat_pane_g9

0x508e,	// (0x00024163) context_pane_ParamLimits

0x508e,	// (0x00024163) context_pane

0xd927,	// (0x0002c9fc) navi_pane_ParamLimits

0xd927,	// (0x0002c9fc) navi_pane

0xd9a5,	// (0x0002ca7a) signal_pane_ParamLimits

0xd9a5,	// (0x0002ca7a) signal_pane

0x0008,

0xf86d,	// (0x0002e942) bg_status_flat_pane_g

0xda35,	// (0x0002cb0a) status_pane_g1_ParamLimits

0xda35,	// (0x0002cb0a) status_pane_g1

0xda4b,	// (0x0002cb20) status_pane_g2_ParamLimits

0xda4b,	// (0x0002cb20) status_pane_g2

0x52ad,	// (0x00024382) status_pane_g3_ParamLimits

0x52ad,	// (0x00024382) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e875) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e875) status_pane_g

0xda7f,	// (0x0002cb54) title_pane_ParamLimits

0xda7f,	// (0x0002cb54) title_pane

0xdae2,	// (0x0002cbb7) uni_indicator_pane_ParamLimits

0xdae2,	// (0x0002cbb7) uni_indicator_pane

0x4ef4,	// (0x00023fc9) bg_list_pane_ParamLimits

0x4ef4,	// (0x00023fc9) bg_list_pane

0xc1c6,	// (0x0002b29b) find_pane

0xc1ce,	// (0x0002b2a3) listscroll_app_pane_ParamLimits

0xc1ce,	// (0x0002b2a3) listscroll_app_pane

0x4f20,	// (0x00023ff5) listscroll_form_pane

0xc1de,	// (0x0002b2b3) listscroll_gen_pane_ParamLimits

0xc1de,	// (0x0002b2b3) listscroll_gen_pane

0x1d27,	// (0x00020dfc) listscroll_set_pane

0x681b,	// (0x000258f0) main_idle_act_pane

0x4c00,	// (0x00023cd5) main_idle_trad_pane

0x4c00,	// (0x00023cd5) main_list_empty_pane

0x4f3a,	// (0x0002400f) main_midp_pane

0x4f46,	// (0x0002401b) main_pane_g1_ParamLimits

0x4f46,	// (0x0002401b) main_pane_g1

0xc1f2,	// (0x0002b2c7) popup_ai_message_window_ParamLimits

0xc1f2,	// (0x0002b2c7) popup_ai_message_window

0xc283,	// (0x0002b358) popup_fep_china_uni_window_ParamLimits

0xc283,	// (0x0002b358) popup_fep_china_uni_window

0x1e2d,	// (0x00020f02) popup_fep_japan_candidate_window_ParamLimits

0x1e2d,	// (0x00020f02) popup_fep_japan_candidate_window

0x1e4b,	// (0x00020f20) popup_fep_japan_predictive_window_ParamLimits

0x1e4b,	// (0x00020f20) popup_fep_japan_predictive_window

0xc2dd,	// (0x0002b3b2) popup_find_window

0xc2fa,	// (0x0002b3cf) popup_grid_graphic_window_ParamLimits

0xc2fa,	// (0x0002b3cf) popup_grid_graphic_window

0x1eb0,	// (0x00020f85) popup_large_graphic_colour_window

0xc392,	// (0x0002b467) popup_menu_window_ParamLimits

0xc392,	// (0x0002b467) popup_menu_window

0xc55e,	// (0x0002b633) popup_note_image_window

0xc524,	// (0x0002b5f9) popup_note_wait_window_ParamLimits

0xc524,	// (0x0002b5f9) popup_note_wait_window

0xc576,	// (0x0002b64b) popup_note_window_ParamLimits

0xc576,	// (0x0002b64b) popup_note_window

0xc61c,	// (0x0002b6f1) popup_query_code_window_ParamLimits

0xc61c,	// (0x0002b6f1) popup_query_code_window

0x20fa,	// (0x000211cf) popup_query_data_code_window_ParamLimits

0x20fa,	// (0x000211cf) popup_query_data_code_window

0xc656,	// (0x0002b72b) popup_query_data_window_ParamLimits

0xc656,	// (0x0002b72b) popup_query_data_window

0xc6d2,	// (0x0002b7a7) popup_query_sat_info_window_ParamLimits

0xc6d2,	// (0x0002b7a7) popup_query_sat_info_window

0xc769,	// (0x0002b83e) popup_snote_single_graphic_window_ParamLimits

0xc769,	// (0x0002b83e) popup_snote_single_graphic_window

0xc769,	// (0x0002b83e) popup_snote_single_text_window_ParamLimits

0xc769,	// (0x0002b83e) popup_snote_single_text_window

0x217d,	// (0x00021252) popup_sub_window_general

0x22ab,	// (0x00021380) popup_window_general_ParamLimits

0x22ab,	// (0x00021380) popup_window_general

0x4f54,	// (0x00024029) power_save_pane

0xc055,	// (0x0002b12a) control_pane_g1_ParamLimits

0xc055,	// (0x0002b12a) control_pane_g1

0xc07e,	// (0x0002b153) control_pane_g2_ParamLimits

0xc07e,	// (0x0002b153) control_pane_g2

0x4eb7,	// (0x00023f8c) control_pane_g3_ParamLimits

0x4eb7,	// (0x00023f8c) control_pane_g3

0x0007,

0xf788,	// (0x0002e85d) control_pane_g_ParamLimits

0xf788,	// (0x0002e85d) control_pane_g

0xc0bf,	// (0x0002b194) control_pane_t1_ParamLimits

0xc0bf,	// (0x0002b194) control_pane_t1

0xc11d,	// (0x0002b1f2) control_pane_t2_ParamLimits

0xc11d,	// (0x0002b1f2) control_pane_t2

0x0002,

0xf799,	// (0x0002e86e) control_pane_t_ParamLimits

0xf799,	// (0x0002e86e) control_pane_t

0xd669,	// (0x0002c73e) navi_navi_volume_pane_cp1

0xd671,	// (0x0002c746) status_small_icon_pane

0x4dec,	// (0x00023ec1) status_small_pane_g1_ParamLimits

0x4dec,	// (0x00023ec1) status_small_pane_g1

0xd679,	// (0x0002c74e) status_small_pane_g2_ParamLimits

0xd679,	// (0x0002c74e) status_small_pane_g2

0xd685,	// (0x0002c75a) status_small_pane_g3_ParamLimits

0xd685,	// (0x0002c75a) status_small_pane_g3

0xd691,	// (0x0002c766) status_small_pane_g4_ParamLimits

0xd691,	// (0x0002c766) status_small_pane_g4

0xd69d,	// (0x0002c772) status_small_pane_g5_ParamLimits

0xd69d,	// (0x0002c772) status_small_pane_g5

0xd6ab,	// (0x0002c780) status_small_pane_g6_ParamLimits

0xd6ab,	// (0x0002c780) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e84c) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e84c) status_small_pane_g

0xd6da,	// (0x0002c7af) status_small_pane_t1

0xd6fc,	// (0x0002c7d1) status_small_wait_pane_ParamLimits

0xd6fc,	// (0x0002c7d1) status_small_wait_pane

0xd4d4,	// (0x0002c5a9) aid_levels_signal_ParamLimits

0xd4d4,	// (0x0002c5a9) aid_levels_signal

0xd4ec,	// (0x0002c5c1) signal_pane_g1_ParamLimits

0xd4ec,	// (0x0002c5c1) signal_pane_g1

0xd507,	// (0x0002c5dc) signal_pane_g2_ParamLimits

0xd507,	// (0x0002c5dc) signal_pane_g2

0x0003,

0xf708,	// (0x0002e7dd) signal_pane_g_ParamLimits

0xf708,	// (0x0002e7dd) signal_pane_g

0x46cb,	// (0x000237a0) context_pane_g1

0xd024,	// (0x0002c0f9) title_pane_g1

0xd05b,	// (0x0002c130) title_pane_t1

0x3702,	// (0x000227d7) title_pane_t2

0x3728,	// (0x000227fd) title_pane_t3

0x0002,

0xf557,	// (0x0002e62c) title_pane_t

0xdb0a,	// (0x0002cbdf) aid_levels_battery_ParamLimits

0xdb0a,	// (0x0002cbdf) aid_levels_battery

0xdb26,	// (0x0002cbfb) battery_pane_g1_ParamLimits

0xdb26,	// (0x0002cbfb) battery_pane_g1

0xdb43,	// (0x0002cc18) battery_pane_g2_ParamLimits

0xdb43,	// (0x0002cc18) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e880) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e880) battery_pane_g

0xdd28,	// (0x0002cdfd) uni_indicator_pane_g1

0xdd3e,	// (0x0002ce13) uni_indicator_pane_g2

0xdd54,	// (0x0002ce29) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002e9ea) uni_indicator_pane_g

0x4a7e,	// (0x00023b53) navi_icon_pane_ParamLimits

0x4a7e,	// (0x00023b53) navi_icon_pane

0x49bc,	// (0x00023a91) navi_midp_pane

0x4a9a,	// (0x00023b6f) navi_navi_pane

0x4aa4,	// (0x00023b79) navi_text_pane_ParamLimits

0x4aa4,	// (0x00023b79) navi_text_pane

0x3650,	// (0x00022725) status_small_wait_pane_g1

0x3b4b,	// (0x00022c20) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002e9e5) status_small_wait_pane_g

0x62fa,	// (0x000253cf) navi_navi_icon_text_pane

0x6302,	// (0x000253d7) navi_navi_pane_g1_ParamLimits

0x6302,	// (0x000253d7) navi_navi_pane_g1

0x6314,	// (0x000253e9) navi_navi_pane_g2_ParamLimits

0x6314,	// (0x000253e9) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002e9b3) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002e9b3) navi_navi_pane_g

0x6326,	// (0x000253fb) navi_navi_tabs_pane

0x632f,	// (0x00025404) navi_navi_text_pane

0x62fa,	// (0x000253cf) navi_navi_volume_pane

0x62d6,	// (0x000253ab) navi_text_pane_t1

0x62ca,	// (0x0002539f) navi_icon_pane_g1

0x621d,	// (0x000252f2) navi_navi_text_pane_t1

0x253b,	// (0x00021610) navi_navi_volume_pane_g1

0xc9e0,	// (0x0002bab5) volume_small_pane

0xdc65,	// (0x0002cd3a) navi_navi_icon_text_pane_g1

0x618b,	// (0x00025260) navi_navi_icon_text_pane_t1

0x4a9a,	// (0x00023b6f) navi_tabs_2_long_pane

0x4a9a,	// (0x00023b6f) navi_tabs_2_pane

0x4a9a,	// (0x00023b6f) navi_tabs_3_long_pane

0x4a9a,	// (0x00023b6f) navi_tabs_3_pane

0x4a9a,	// (0x00023b6f) navi_tabs_4_pane

0xc9c0,	// (0x0002ba95) tabs_2_active_pane_ParamLimits

0xc9c0,	// (0x0002ba95) tabs_2_active_pane

0xc9d0,	// (0x0002baa5) tabs_2_passive_pane_ParamLimits

0xc9d0,	// (0x0002baa5) tabs_2_passive_pane

0xc98e,	// (0x0002ba63) tabs_3_active_pane_ParamLimits

0xc98e,	// (0x0002ba63) tabs_3_active_pane

0xc99e,	// (0x0002ba73) tabs_3_passive_pane_ParamLimits

0xc99e,	// (0x0002ba73) tabs_3_passive_pane

0xc9af,	// (0x0002ba84) tabs_3_passive_pane_cp_ParamLimits

0xc9af,	// (0x0002ba84) tabs_3_passive_pane_cp

0xc95b,	// (0x0002ba30) tabs_4_active_pane_ParamLimits

0xc95b,	// (0x0002ba30) tabs_4_active_pane

0xc96c,	// (0x0002ba41) tabs_4_passive_pane_ParamLimits

0xc96c,	// (0x0002ba41) tabs_4_passive_pane

0x24c7,	// (0x0002159c) tabs_4_passive_pane_cp_ParamLimits

0x24c7,	// (0x0002159c) tabs_4_passive_pane_cp

0xc97d,	// (0x0002ba52) tabs_4_passive_pane_cp2_ParamLimits

0xc97d,	// (0x0002ba52) tabs_4_passive_pane_cp2

0xc937,	// (0x0002ba0c) tabs_2_long_active_pane_ParamLimits

0xc937,	// (0x0002ba0c) tabs_2_long_active_pane

0xc949,	// (0x0002ba1e) tabs_2_long_passive_pane_ParamLimits

0xc949,	// (0x0002ba1e) tabs_2_long_passive_pane

0xc8f8,	// (0x0002b9cd) tabs_3_long_active_pane_ParamLimits

0xc8f8,	// (0x0002b9cd) tabs_3_long_active_pane

0xc90b,	// (0x0002b9e0) tabs_3_long_passive_pane_ParamLimits

0xc90b,	// (0x0002b9e0) tabs_3_long_passive_pane

0xc924,	// (0x0002b9f9) tabs_3_long_passive_pane_cp_ParamLimits

0xc924,	// (0x0002b9f9) tabs_3_long_passive_pane_cp

0x23ee,	// (0x000214c3) volume_small_pane_g1

0x23f7,	// (0x000214cc) volume_small_pane_g2

0x2400,	// (0x000214d5) volume_small_pane_g3

0x2409,	// (0x000214de) volume_small_pane_g4

0x2412,	// (0x000214e7) volume_small_pane_g5

0x241b,	// (0x000214f0) volume_small_pane_g6

0x2424,	// (0x000214f9) volume_small_pane_g7

0x242d,	// (0x00021502) volume_small_pane_g8

0x2436,	// (0x0002150b) volume_small_pane_g9

0x243f,	// (0x00021514) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002e97f) volume_small_pane_g

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp2_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp2

0x3748,	// (0x0002281d) tabs_3_active_pane_g1

0xd0e7,	// (0x0002c1bc) tabs_3_active_pane_t1

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp2_ParamLimits

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp2

0x3748,	// (0x0002281d) tabs_3_passive_pane_g1

0xd0e7,	// (0x0002c1bc) tabs_3_passive_pane_t1

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp3_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp3

0x3762,	// (0x00022837) tabs_4_active_pane_g1

0xd0f9,	// (0x0002c1ce) tabs_4_active_pane_t1

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp3_ParamLimits

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp3

0x3762,	// (0x00022837) tabs_4_1_passive_pane_g1

0xd0f9,	// (0x0002c1ce) tabs_4_1_passive_pane_t1

0x4f3a,	// (0x0002400f) list_highlight_pane_cp2

0xdddd,	// (0x0002ceb2) list_set_pane_ParamLimits

0xdddd,	// (0x0002ceb2) list_set_pane

0xde77,	// (0x0002cf4c) main_pane_set_t1_ParamLimits

0xde77,	// (0x0002cf4c) main_pane_set_t1

0xde97,	// (0x0002cf6c) main_pane_set_t2_ParamLimits

0xde97,	// (0x0002cf6c) main_pane_set_t2

0xdeab,	// (0x0002cf80) main_pane_set_t3_ParamLimits

0xdeab,	// (0x0002cf80) main_pane_set_t3

0xdebd,	// (0x0002cf92) main_pane_set_t4_ParamLimits

0xdebd,	// (0x0002cf92) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002ea4f) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002ea4f) main_pane_set_t

0xdecf,	// (0x0002cfa4) setting_code_pane

0xded7,	// (0x0002cfac) setting_slider_graphic_pane

0xded7,	// (0x0002cfac) setting_slider_pane

0xded7,	// (0x0002cfac) setting_text_pane

0xded7,	// (0x0002cfac) setting_volume_pane

0x16b4,	// (0x00020789) volume_set_pane

0x373a,	// (0x0002280f) bg_set_opt_pane_cp

0x16bc,	// (0x00020791) setting_slider_pane_t1

0x16d5,	// (0x000207aa) setting_slider_pane_t2

0x16ef,	// (0x000207c4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e633) setting_slider_pane_t

0x1707,	// (0x000207dc) slider_set_pane

0x365a,	// (0x0002272f) bg_set_opt_pane_cp2

0x377c,	// (0x00022851) setting_slider_graphic_pane_g1

0x171d,	// (0x000207f2) setting_slider_graphic_pane_t1

0x172d,	// (0x00020802) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e63a) setting_slider_graphic_pane_t

0x173d,	// (0x00020812) slider_set_pane_cp

0x365a,	// (0x0002272f) input_focus_pane_cp1

0x6802,	// (0x000258d7) list_set_text_pane

0x3650,	// (0x00022725) setting_text_pane_g1

0x365a,	// (0x0002272f) input_focus_pane_cp2

0x3650,	// (0x00022725) setting_code_pane_g1

0x3785,	// (0x0002285a) setting_code_pane_t1

0x016a,	// (0x0001f23f) set_text_pane_t1_ParamLimits

0x016a,	// (0x0001f23f) set_text_pane_t1

0x3fef,	// (0x000230c4) set_opt_bg_pane_g1

0x3ff7,	// (0x000230cc) set_opt_bg_pane_g2

0x67e2,	// (0x000258b7) set_opt_bg_pane_g3

0x4007,	// (0x000230dc) set_opt_bg_pane_g4

0x400f,	// (0x000230e4) set_opt_bg_pane_g5

0x4017,	// (0x000230ec) set_opt_bg_pane_g6

0x67ea,	// (0x000258bf) set_opt_bg_pane_g7

0x67f2,	// (0x000258c7) set_opt_bg_pane_g8

0x67fa,	// (0x000258cf) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002ea3c) set_opt_bg_pane_g

0x67d5,	// (0x000258aa) slider_set_pane_g1

0x25b0,	// (0x00021685) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002ea2d) slider_set_pane_g

0x254c,	// (0x00021621) volume_set_pane_g1

0x2554,	// (0x00021629) volume_set_pane_g2

0x255c,	// (0x00021631) volume_set_pane_g3

0x2564,	// (0x00021639) volume_set_pane_g4

0x256c,	// (0x00021641) volume_set_pane_g5

0x2574,	// (0x00021649) volume_set_pane_g6

0x257c,	// (0x00021651) volume_set_pane_g7

0x2584,	// (0x00021659) volume_set_pane_g8

0x258c,	// (0x00021661) volume_set_pane_g9

0x2594,	// (0x00021669) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002ea05) volume_set_pane_g

0xd10b,	// (0x0002c1e0) indicator_pane_ParamLimits

0xd10b,	// (0x0002c1e0) indicator_pane

0xd133,	// (0x0002c208) main_idle_pane_g2_ParamLimits

0xd133,	// (0x0002c208) main_idle_pane_g2

0xd16b,	// (0x0002c240) main_pane_idle_g1_ParamLimits

0xd16b,	// (0x0002c240) main_pane_idle_g1

0x37d4,	// (0x000228a9) popup_clock_digital_analogue_window_ParamLimits

0x37d4,	// (0x000228a9) popup_clock_digital_analogue_window

0xd192,	// (0x0002c267) soft_indicator_pane_ParamLimits

0xd192,	// (0x0002c267) soft_indicator_pane

0xd1ac,	// (0x0002c281) wallpaper_pane_ParamLimits

0xd1ac,	// (0x0002c281) wallpaper_pane

0x3650,	// (0x00022725) wallpaper_pane_g1

0xd1be,	// (0x0002c293) indicator_pane_g1_ParamLimits

0xd1be,	// (0x0002c293) indicator_pane_g1

0x6b9d,	// (0x00025c72) navi_navi_icon_text_pane_srt_g1

0x3826,	// (0x000228fb) soft_indicator_pane_t1

0x3840,	// (0x00022915) aid_ps_area_pane

0xd1d4,	// (0x0002c2a9) aid_ps_clock_pane

0x385f,	// (0x00022934) aid_ps_indicator_pane

0x386b,	// (0x00022940) indicator_ps_pane_ParamLimits

0x386b,	// (0x00022940) indicator_ps_pane

0x387a,	// (0x0002294f) power_save_pane_g1_ParamLimits

0x387a,	// (0x0002294f) power_save_pane_g1

0x3886,	// (0x0002295b) power_save_pane_g2_ParamLimits

0x3886,	// (0x0002295b) power_save_pane_g2

0x12d3,	// (0x000203a8) aid_navinavi_width_pane

0x3840,	// (0x00022915) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e63f) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e63f) power_save_pane_g

0x3894,	// (0x00022969) power_save_pane_t1_ParamLimits

0x3894,	// (0x00022969) power_save_pane_t1

0xd1d4,	// (0x0002c2a9) aid_ps_clock_pane_ParamLimits

0x385f,	// (0x00022934) aid_ps_indicator_pane_ParamLimits

0x38a6,	// (0x0002297b) power_save_pane_t4_ParamLimits

0x38a6,	// (0x0002297b) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e644) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e644) power_save_pane_t

0x38d0,	// (0x000229a5) power_save_t3_ParamLimits

0x38d0,	// (0x000229a5) power_save_t3

0x38bb,	// (0x00022990) power_save_t2_ParamLimits

0x38bb,	// (0x00022990) power_save_t2

0x38e5,	// (0x000229ba) indicator_ps_pane_g1

0xd1e2,	// (0x0002c2b7) ai_gene_pane_ParamLimits

0xd1e2,	// (0x0002c2b7) ai_gene_pane

0xd1f9,	// (0x0002c2ce) ai_links_pane_ParamLimits

0xd1f9,	// (0x0002c2ce) ai_links_pane

0xd211,	// (0x0002c2e6) indicator_pane_cp1_ParamLimits

0xd211,	// (0x0002c2e6) indicator_pane_cp1

0xd220,	// (0x0002c2f5) main_pane_idle_g1_cp_ParamLimits

0xd220,	// (0x0002c2f5) main_pane_idle_g1_cp

0x391e,	// (0x000229f3) popup_ai_links_title_window

0xd238,	// (0x0002c30d) soft_indicator_pane_cp1_ParamLimits

0xd238,	// (0x0002c30d) soft_indicator_pane_cp1

0x65c1,	// (0x00025696) ai_links_pane_g1

0x65ca,	// (0x0002569f) grid_ai_links_pane

0xdd1f,	// (0x0002cdf4) ai_gene_pane_1

0x65af,	// (0x00025684) ai_gene_pane_2

0x65b8,	// (0x0002568d) list_highlight_pane_cp4

0xdcfb,	// (0x0002cdd0) cell_ai_link_pane_ParamLimits

0xdcfb,	// (0x0002cdd0) cell_ai_link_pane

0x6580,	// (0x00025655) cell_ai_link_pane_g1

0x3b4b,	// (0x00022c20) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002e9e0) cell_ai_link_pane_g

0x365a,	// (0x0002272f) grid_highlight_cp2

0x365a,	// (0x0002272f) bg_popup_sub_pane_cp1

0x3941,	// (0x00022a16) popup_ai_links_title_window_t1

0x64d0,	// (0x000255a5) ai_gene_pane_1_g1_ParamLimits

0x64d0,	// (0x000255a5) ai_gene_pane_1_g1

0x64dc,	// (0x000255b1) ai_gene_pane_1_g2_ParamLimits

0x64dc,	// (0x000255b1) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002e9d6) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002e9d6) ai_gene_pane_1_g

0x64e9,	// (0x000255be) ai_gene_pane_1_t1_ParamLimits

0x64e9,	// (0x000255be) ai_gene_pane_1_t1

0x651d,	// (0x000255f2) grid_ai_soft_ind_pane

0x64bb,	// (0x00025590) ai_gene_pane_2_t1_ParamLimits

0x64bb,	// (0x00025590) ai_gene_pane_2_t1

0xd24c,	// (0x0002c321) main_pane_empty_t1_ParamLimits

0xd24c,	// (0x0002c321) main_pane_empty_t1

0xd264,	// (0x0002c339) main_pane_empty_t2_ParamLimits

0xd264,	// (0x0002c339) main_pane_empty_t2

0xd279,	// (0x0002c34e) main_pane_empty_t3_ParamLimits

0xd279,	// (0x0002c34e) main_pane_empty_t3

0xd28b,	// (0x0002c360) main_pane_empty_t4_ParamLimits

0xd28b,	// (0x0002c360) main_pane_empty_t4

0xd29d,	// (0x0002c372) main_pane_empty_t5_ParamLimits

0xd29d,	// (0x0002c372) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e649) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e649) main_pane_empty_t

0x4040,	// (0x00023115) bg_popup_window_pane_ParamLimits

0x4040,	// (0x00023115) bg_popup_window_pane

0x622b,	// (0x00025300) find_popup_pane_cp2_ParamLimits

0x622b,	// (0x00025300) find_popup_pane_cp2

0x6237,	// (0x0002530c) heading_pane_ParamLimits

0x6237,	// (0x0002530c) heading_pane

0x365a,	// (0x0002272f) bg_popup_sub_pane

0xdc7c,	// (0x0002cd51) bg_popup_window_pane_g1_ParamLimits

0xdc7c,	// (0x0002cd51) bg_popup_window_pane_g1

0xdc8b,	// (0x0002cd60) bg_popup_window_pane_g2_ParamLimits

0xdc8b,	// (0x0002cd60) bg_popup_window_pane_g2

0xdc97,	// (0x0002cd6c) bg_popup_window_pane_g3_ParamLimits

0xdc97,	// (0x0002cd6c) bg_popup_window_pane_g3

0xdca3,	// (0x0002cd78) bg_popup_window_pane_g4_ParamLimits

0xdca3,	// (0x0002cd78) bg_popup_window_pane_g4

0xdcb2,	// (0x0002cd87) bg_popup_window_pane_g5_ParamLimits

0xdcb2,	// (0x0002cd87) bg_popup_window_pane_g5

0xdcc2,	// (0x0002cd97) bg_popup_window_pane_g6_ParamLimits

0xdcc2,	// (0x0002cd97) bg_popup_window_pane_g6

0xdcce,	// (0x0002cda3) bg_popup_window_pane_g7_ParamLimits

0xdcce,	// (0x0002cda3) bg_popup_window_pane_g7

0xdcdd,	// (0x0002cdb2) bg_popup_window_pane_g8_ParamLimits

0xdcdd,	// (0x0002cdb2) bg_popup_window_pane_g8

0xdcec,	// (0x0002cdc1) bg_popup_window_pane_g9_ParamLimits

0xdcec,	// (0x0002cdc1) bg_popup_window_pane_g9

0x6211,	// (0x000252e6) bg_popup_window_pane_g10_ParamLimits

0x6211,	// (0x000252e6) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002e99e) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002e99e) bg_popup_window_pane_g

0x613a,	// (0x0002520f) bg_popup_heading_pane_ParamLimits

0x613a,	// (0x0002520f) bg_popup_heading_pane

0x2638,	// (0x0002170d) tabs_4_passive_pane_cp_srt_ParamLimits

0x2638,	// (0x0002170d) tabs_4_passive_pane_cp_srt

0x264a,	// (0x0002171f) tabs_4_passive_pane_srt_ParamLimits

0x614e,	// (0x00025223) heading_pane_g2

0x264a,	// (0x0002171f) tabs_4_passive_pane_srt

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp3_srt_ParamLimits

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp3_srt

0x6156,	// (0x0002522b) heading_pane_t1_ParamLimits

0x6156,	// (0x0002522b) heading_pane_t1

0x616d,	// (0x00025242) heading_pane_t2_ParamLimits

0x616d,	// (0x00025242) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002e999) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002e999) heading_pane_t

0x5c67,	// (0x00024d3c) bg_popup_heading_pane_g1

0x5d16,	// (0x00024deb) bg_popup_heading_pane_g2

0x5d20,	// (0x00024df5) bg_popup_heading_pane_g3

0x5d2a,	// (0x00024dff) bg_popup_heading_pane_g4

0x5d34,	// (0x00024e09) bg_popup_heading_pane_g5

0x5d3e,	// (0x00024e13) bg_popup_heading_pane_g6

0x5d46,	// (0x00024e1b) bg_popup_heading_pane_g7

0x5d4e,	// (0x00024e23) bg_popup_heading_pane_g8

0x5d58,	// (0x00024e2d) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002e955) bg_popup_heading_pane_g

0x5438,	// (0x0002450d) bg_popup_sub_pane_g1

0x5440,	// (0x00024515) bg_popup_sub_pane_g2

0x5448,	// (0x0002451d) bg_popup_sub_pane_g3

0x5450,	// (0x00024525) bg_popup_sub_pane_g4

0x5458,	// (0x0002452d) bg_popup_sub_pane_g5

0x5460,	// (0x00024535) bg_popup_sub_pane_g6

0x5468,	// (0x0002453d) bg_popup_sub_pane_g7

0x5470,	// (0x00024545) bg_popup_sub_pane_g8

0x5478,	// (0x0002454d) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002e92f) bg_popup_sub_pane_g

0x39b5,	// (0x00022a8a) bg_popup_window_pane_cp5_ParamLimits

0x39b5,	// (0x00022a8a) bg_popup_window_pane_cp5

0x39d1,	// (0x00022aa6) popup_note_window_g1_ParamLimits

0x39d1,	// (0x00022aa6) popup_note_window_g1

0x39dd,	// (0x00022ab2) popup_note_window_t1_ParamLimits

0x39dd,	// (0x00022ab2) popup_note_window_t1

0x39ef,	// (0x00022ac4) popup_note_window_t2_ParamLimits

0x39ef,	// (0x00022ac4) popup_note_window_t2

0x3a01,	// (0x00022ad6) popup_note_window_t3_ParamLimits

0x3a01,	// (0x00022ad6) popup_note_window_t3

0x3a13,	// (0x00022ae8) popup_note_window_t4_ParamLimits

0x3a13,	// (0x00022ae8) popup_note_window_t4

0x3a3b,	// (0x00022b10) popup_note_window_t5_ParamLimits

0x3a3b,	// (0x00022b10) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e654) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e654) popup_note_window_t

0x3a5f,	// (0x00022b34) bg_popup_window_pane_cp6_ParamLimits

0x3a5f,	// (0x00022b34) bg_popup_window_pane_cp6

0x5bdb,	// (0x00024cb0) popup_note_image_window_g1_ParamLimits

0x5bdb,	// (0x00024cb0) popup_note_image_window_g1

0x5be7,	// (0x00024cbc) popup_note_image_window_g2_ParamLimits

0x5be7,	// (0x00024cbc) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002e923) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002e923) popup_note_image_window_g

0x5c00,	// (0x00024cd5) popup_note_image_window_t1_ParamLimits

0x5c00,	// (0x00024cd5) popup_note_image_window_t1

0x5c19,	// (0x00024cee) popup_note_image_window_t2_ParamLimits

0x5c19,	// (0x00024cee) popup_note_image_window_t2

0x5c32,	// (0x00024d07) popup_note_image_window_t3_ParamLimits

0x5c32,	// (0x00024d07) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002e928) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002e928) popup_note_image_window_t

0x5a9c,	// (0x00024b71) bg_popup_window_pane_cp7_ParamLimits

0x5a9c,	// (0x00024b71) bg_popup_window_pane_cp7

0x5acc,	// (0x00024ba1) popup_note_wait_window_g1_ParamLimits

0x5acc,	// (0x00024ba1) popup_note_wait_window_g1

0x5ad8,	// (0x00024bad) popup_note_wait_window_g2_ParamLimits

0x5ad8,	// (0x00024bad) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002e911) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002e911) popup_note_wait_window_g

0x5af0,	// (0x00024bc5) popup_note_wait_window_t1_ParamLimits

0x5af0,	// (0x00024bc5) popup_note_wait_window_t1

0x5b17,	// (0x00024bec) popup_note_wait_window_t2_ParamLimits

0x5b17,	// (0x00024bec) popup_note_wait_window_t2

0x5b34,	// (0x00024c09) popup_note_wait_window_t3_ParamLimits

0x5b34,	// (0x00024c09) popup_note_wait_window_t3

0x5b47,	// (0x00024c1c) popup_note_wait_window_t4_ParamLimits

0x5b47,	// (0x00024c1c) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002e918) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002e918) popup_note_wait_window_t

0x5b6c,	// (0x00024c41) wait_bar_pane_ParamLimits

0x5b6c,	// (0x00024c41) wait_bar_pane

0x365a,	// (0x0002272f) wait_anim_pane

0x365a,	// (0x0002272f) wait_border_pane

0x3650,	// (0x00022725) wait_anim_pane_g1

0x3650,	// (0x00022725) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e7d8) wait_anim_pane_g

0x5a40,	// (0x00024b15) wait_border_pane_g1

0x5a4b,	// (0x00024b20) wait_border_pane_g2

0x5a54,	// (0x00024b29) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002e90a) wait_border_pane_g

0x58b0,	// (0x00024985) bg_popup_window_pane_cp16_ParamLimits

0x58b0,	// (0x00024985) bg_popup_window_pane_cp16

0x59b0,	// (0x00024a85) indicator_popup_pane_cp4_ParamLimits

0x59b0,	// (0x00024a85) indicator_popup_pane_cp4

0x59c4,	// (0x00024a99) popup_query_data_window_t1_ParamLimits

0x59c4,	// (0x00024a99) popup_query_data_window_t1

0x59d6,	// (0x00024aab) popup_query_data_window_t2_ParamLimits

0x59d6,	// (0x00024aab) popup_query_data_window_t2

0x59ef,	// (0x00024ac4) popup_query_data_window_t3_ParamLimits

0x59ef,	// (0x00024ac4) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002e903) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002e903) popup_query_data_window_t

0x5a09,	// (0x00024ade) query_popup_data_pane_ParamLimits

0x5a09,	// (0x00024ade) query_popup_data_pane

0x5a1d,	// (0x00024af2) query_popup_data_pane_cp1_ParamLimits

0x5a1d,	// (0x00024af2) query_popup_data_pane_cp1

0x58b0,	// (0x00024985) bg_popup_window_pane_cp10_ParamLimits

0x58b0,	// (0x00024985) bg_popup_window_pane_cp10

0x58e2,	// (0x000249b7) indicator_popup_pane_ParamLimits

0x58e2,	// (0x000249b7) indicator_popup_pane

0x5904,	// (0x000249d9) popup_query_code_window_t1_ParamLimits

0x5904,	// (0x000249d9) popup_query_code_window_t1

0x591e,	// (0x000249f3) popup_query_code_window_t2_ParamLimits

0x591e,	// (0x000249f3) popup_query_code_window_t2

0x5967,	// (0x00024a3c) popup_query_code_window_t3_ParamLimits

0x5967,	// (0x00024a3c) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002e8fc) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002e8fc) popup_query_code_window_t

0x5996,	// (0x00024a6b) query_popup_pane_ParamLimits

0x5996,	// (0x00024a6b) query_popup_pane

0x3a5f,	// (0x00022b34) bg_popup_window_pane_cp15_ParamLimits

0x3a5f,	// (0x00022b34) bg_popup_window_pane_cp15

0x3a7d,	// (0x00022b52) indicator_popup_pane_cp1_ParamLimits

0x3a7d,	// (0x00022b52) indicator_popup_pane_cp1

0x3a90,	// (0x00022b65) indicator_popup_pane_cp2_ParamLimits

0x3a90,	// (0x00022b65) indicator_popup_pane_cp2

0x3aa3,	// (0x00022b78) popup_query_data_code_window_g1_ParamLimits

0x3aa3,	// (0x00022b78) popup_query_data_code_window_g1

0x3ab6,	// (0x00022b8b) popup_query_data_code_window_t1_ParamLimits

0x3ab6,	// (0x00022b8b) popup_query_data_code_window_t1

0x3ac8,	// (0x00022b9d) popup_query_data_code_window_t2_ParamLimits

0x3ac8,	// (0x00022b9d) popup_query_data_code_window_t2

0x3ada,	// (0x00022baf) popup_query_data_code_window_t3_ParamLimits

0x3ada,	// (0x00022baf) popup_query_data_code_window_t3

0x3af0,	// (0x00022bc5) popup_query_data_code_window_t4_ParamLimits

0x3af0,	// (0x00022bc5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e65f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e65f) popup_query_data_code_window_t

0x4a3c,	// (0x00023b11) list_single_midp_graphic_pane_g3

0x3b08,	// (0x00022bdd) query_popup_data_pane_cp2_ParamLimits

0x3b1b,	// (0x00022bf0) query_popup_pane_cp2_ParamLimits

0x3b1b,	// (0x00022bf0) query_popup_pane_cp2

0x365a,	// (0x0002272f) bg_popup_window_pane_cp11

0x58a8,	// (0x0002497d) heading_pane_cp5

0x3c06,	// (0x00022cdb) listscroll_popup_info_pane

0x365a,	// (0x0002272f) input_focus_pane_cp3

0x3b2e,	// (0x00022c03) query_popup_pane_t1

0x3b3c,	// (0x00022c11) list_popup_info_pane_ParamLimits

0x3b3c,	// (0x00022c11) list_popup_info_pane

0x3b4b,	// (0x00022c20) listscroll_popup_info_pane_g1

0x3b53,	// (0x00022c28) scroll_pane_cp7

0x3b5d,	// (0x00022c32) popup_info_list_pane_t1_ParamLimits

0x3b5d,	// (0x00022c32) popup_info_list_pane_t1

0x3b77,	// (0x00022c4c) popup_info_list_pane_t2_ParamLimits

0x3b77,	// (0x00022c4c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e668) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e668) popup_info_list_pane_t

0x365a,	// (0x0002272f) bg_popup_window_pane_cp12

0x6bb7,	// (0x00025c8c) find_popup_pane

0x373a,	// (0x0002280f) bg_popup_window_pane_cp3

0x3b91,	// (0x00022c66) heading_pane_cp3

0x3b9d,	// (0x00022c72) listscroll_popup_graphic_pane

0x365a,	// (0x0002272f) bg_popup_window_pane_cp4

0xd2ff,	// (0x0002c3d4) heading_pane_cp4

0x3c06,	// (0x00022cdb) listscroll_popup_colour_pane

0x3c0e,	// (0x00022ce3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c0e,	// (0x00022ce3) cell_large_graphic_colour_none_popup_pane

0xd307,	// (0x0002c3dc) grid_large_graphic_colour_popup_pane_ParamLimits

0xd307,	// (0x0002c3dc) grid_large_graphic_colour_popup_pane

0x3c4a,	// (0x00022d1f) listscroll_popup_colour_pane_g1_ParamLimits

0x3c4a,	// (0x00022d1f) listscroll_popup_colour_pane_g1

0x3c61,	// (0x00022d36) listscroll_popup_colour_pane_g2_ParamLimits

0x3c61,	// (0x00022d36) listscroll_popup_colour_pane_g2

0x3c78,	// (0x00022d4d) listscroll_popup_colour_pane_g3_ParamLimits

0x3c78,	// (0x00022d4d) listscroll_popup_colour_pane_g3

0xd32b,	// (0x0002c400) listscroll_popup_colour_pane_g4_ParamLimits

0xd32b,	// (0x0002c400) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e66d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e66d) listscroll_popup_colour_pane_g

0x3c97,	// (0x00022d6c) scroll_pane_cp6_ParamLimits

0x3c97,	// (0x00022d6c) scroll_pane_cp6

0xd33a,	// (0x0002c40f) cell_large_graphic_colour_popup_pane_ParamLimits

0xd33a,	// (0x0002c40f) cell_large_graphic_colour_popup_pane

0x3cc8,	// (0x00022d9d) cell_large_graphic_colour_none_popup_pane_t1

0x365a,	// (0x0002272f) grid_highlight_pane_cp5

0x3cd7,	// (0x00022dac) cell_large_graphic_colour_popup_pane_g1

0x3cdf,	// (0x00022db4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e676) cell_large_graphic_colour_popup_pane_g

0x3ce7,	// (0x00022dbc) cell_large_graphic_colour_popup_pane_g2_copy1

0x3cf0,	// (0x00022dc5) grid_highlight_pane_cp4

0x3cf8,	// (0x00022dcd) bg_popup_window_pane_cp8_ParamLimits

0x3cf8,	// (0x00022dcd) bg_popup_window_pane_cp8

0x3d13,	// (0x00022de8) popup_snote_single_text_window_g1_ParamLimits

0x3d13,	// (0x00022de8) popup_snote_single_text_window_g1

0x3d25,	// (0x00022dfa) popup_snote_single_text_window_t1_ParamLimits

0x3d25,	// (0x00022dfa) popup_snote_single_text_window_t1

0x3d38,	// (0x00022e0d) popup_snote_single_text_window_t2_ParamLimits

0x3d38,	// (0x00022e0d) popup_snote_single_text_window_t2

0x3d4b,	// (0x00022e20) popup_snote_single_text_window_t3_ParamLimits

0x3d4b,	// (0x00022e20) popup_snote_single_text_window_t3

0x3d84,	// (0x00022e59) popup_snote_single_text_window_t4_ParamLimits

0x3d84,	// (0x00022e59) popup_snote_single_text_window_t4

0x3db8,	// (0x00022e8d) popup_snote_single_text_window_t5_ParamLimits

0x3db8,	// (0x00022e8d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e67b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e67b) popup_snote_single_text_window_t

0x3de7,	// (0x00022ebc) bg_popup_window_pane_cp9_ParamLimits

0x3de7,	// (0x00022ebc) bg_popup_window_pane_cp9

0x3d13,	// (0x00022de8) popup_snote_single_graphic_window_g1_ParamLimits

0x3d13,	// (0x00022de8) popup_snote_single_graphic_window_g1

0x3df5,	// (0x00022eca) popup_snote_single_graphic_window_g2_ParamLimits

0x3df5,	// (0x00022eca) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e686) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e686) popup_snote_single_graphic_window_g

0x3e01,	// (0x00022ed6) popup_snote_single_graphic_window_t1_ParamLimits

0x3e01,	// (0x00022ed6) popup_snote_single_graphic_window_t1

0x3e14,	// (0x00022ee9) popup_snote_single_graphic_window_t2_ParamLimits

0x3e14,	// (0x00022ee9) popup_snote_single_graphic_window_t2

0x3e27,	// (0x00022efc) popup_snote_single_graphic_window_t3_ParamLimits

0x3e27,	// (0x00022efc) popup_snote_single_graphic_window_t3

0x3e60,	// (0x00022f35) popup_snote_single_graphic_window_t4_ParamLimits

0x3e60,	// (0x00022f35) popup_snote_single_graphic_window_t4

0x3e94,	// (0x00022f69) popup_snote_single_graphic_window_t5_ParamLimits

0x3e94,	// (0x00022f69) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e68b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e68b) popup_snote_single_graphic_window_t

0x6afb,	// (0x00025bd0) grid_graphic_popup_pane_ParamLimits

0x6afb,	// (0x00025bd0) grid_graphic_popup_pane

0x6b23,	// (0x00025bf8) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b23,	// (0x00025bf8) listscroll_popup_graphic_pane_g1

0xdfcf,	// (0x0002d0a4) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfcf,	// (0x0002d0a4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002ea79) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002ea79) listscroll_popup_graphic_pane_g

0x6b4b,	// (0x00025c20) scroll_pane_cp5

0xdf8a,	// (0x0002d05f) cell_graphic_popup_pane_ParamLimits

0xdf8a,	// (0x0002d05f) cell_graphic_popup_pane

0x6a7c,	// (0x00025b51) cell_graphic_popup_pane_g1

0x6a84,	// (0x00025b59) cell_graphic_popup_pane_g2

0x3ce7,	// (0x00022dbc) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002ea72) cell_graphic_popup_pane_g

0x6a8d,	// (0x00025b62) cell_graphic_popup_pane_t2

0x3cf0,	// (0x00022dc5) grid_highlight_pane_cp3

0x3ed5,	// (0x00022faa) list_gen_pane_ParamLimits

0x3ed5,	// (0x00022faa) list_gen_pane

0x3f07,	// (0x00022fdc) scroll_pane

0xdf45,	// (0x0002d01a) bg_list_pane_g1_ParamLimits

0xdf45,	// (0x0002d01a) bg_list_pane_g1

0x69f9,	// (0x00025ace) bg_list_pane_g2_ParamLimits

0x69f9,	// (0x00025ace) bg_list_pane_g2

0x6a0c,	// (0x00025ae1) bg_list_pane_g3_ParamLimits

0x6a0c,	// (0x00025ae1) bg_list_pane_g3

0x6a1e,	// (0x00025af3) bg_list_pane_g4_ParamLimits

0x6a1e,	// (0x00025af3) bg_list_pane_g4

0xdf60,	// (0x0002d035) bg_list_pane_g5_ParamLimits

0xdf60,	// (0x0002d035) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002ea67) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002ea67) bg_list_pane_g

0xdf0a,	// (0x0002cfdf) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double2_graphic_large_graphic_pane

0xdf0a,	// (0x0002cfdf) list_double2_graphic_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double2_graphic_pane

0xdf0a,	// (0x0002cfdf) list_double2_large_graphic_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double2_large_graphic_pane

0xdf0a,	// (0x0002cfdf) list_double2_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double2_pane

0xdf0a,	// (0x0002cfdf) list_double_graphic_heading_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_graphic_heading_pane

0xdf0a,	// (0x0002cfdf) list_double_graphic_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_graphic_pane

0xdf0a,	// (0x0002cfdf) list_double_heading_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_heading_pane

0xdf0a,	// (0x0002cfdf) list_double_large_graphic_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_large_graphic_pane

0xdf0a,	// (0x0002cfdf) list_double_number_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_number_pane

0xdf0a,	// (0x0002cfdf) list_double_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_pane

0xdf0a,	// (0x0002cfdf) list_double_time_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_double_time_pane

0xdf0a,	// (0x0002cfdf) list_setting_number_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_setting_number_pane

0xdf0a,	// (0x0002cfdf) list_setting_pane_ParamLimits

0xdf0a,	// (0x0002cfdf) list_setting_pane

0xdf1d,	// (0x0002cff2) list_single_2graphic_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_2graphic_pane

0xdf1d,	// (0x0002cff2) list_single_graphic_heading_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_graphic_heading_pane

0xdf1d,	// (0x0002cff2) list_single_graphic_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_graphic_pane

0xdf1d,	// (0x0002cff2) list_single_heading_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_heading_pane

0xdf1d,	// (0x0002cff2) list_single_large_graphic_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_large_graphic_pane

0xdf1d,	// (0x0002cff2) list_single_number_heading_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_number_heading_pane

0xdf1d,	// (0x0002cff2) list_single_number_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_number_pane

0xdf1d,	// (0x0002cff2) list_single_pane_ParamLimits

0xdf1d,	// (0x0002cff2) list_single_pane

0x365a,	// (0x0002272f) list_highlight_pane_cp1

0x0245,	// (0x0001f31a) list_single_pane_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_pane_g1

0x0251,	// (0x0001f326) list_single_pane_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_pane_g

0x0c8b,	// (0x0001fd60) list_single_pane_t1_ParamLimits

0x0c8b,	// (0x0001fd60) list_single_pane_t1

0x0245,	// (0x0001f31a) list_single_number_pane_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_number_pane_g1

0x0251,	// (0x0001f326) list_single_number_pane_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_number_pane_g

0x0961,	// (0x0001fa36) list_single_number_pane_t1_ParamLimits

0x0961,	// (0x0001fa36) list_single_number_pane_t1

0xbc0e,	// (0x0002ace3) list_single_number_pane_t2_ParamLimits

0xbc0e,	// (0x0002ace3) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002ea28) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002ea28) list_single_number_pane_t

0xb645,	// (0x0002a71a) list_single_graphic_pane_g1_ParamLimits

0xb645,	// (0x0002a71a) list_single_graphic_pane_g1

0x0245,	// (0x0001f31a) list_single_graphic_pane_g2_ParamLimits

0x0245,	// (0x0001f31a) list_single_graphic_pane_g2

0x0251,	// (0x0001f326) list_single_graphic_pane_g3_ParamLimits

0x0251,	// (0x0001f326) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e696) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e696) list_single_graphic_pane_g

0xb651,	// (0x0002a726) list_single_graphic_pane_t1_ParamLimits

0xb651,	// (0x0002a726) list_single_graphic_pane_t1

0x0245,	// (0x0001f31a) list_single_heading_pane_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_heading_pane_g1

0x0251,	// (0x0001f326) list_single_heading_pane_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_heading_pane_g

0xb667,	// (0x0002a73c) list_single_heading_pane_t1_ParamLimits

0xb667,	// (0x0002a73c) list_single_heading_pane_t1

0xb67d,	// (0x0002a752) list_single_heading_pane_t2_ParamLimits

0xb67d,	// (0x0002a752) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e6a2) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e6a2) list_single_heading_pane_t

0x0245,	// (0x0001f31a) list_single_number_heading_pane_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_number_heading_pane_g1

0x0251,	// (0x0001f326) list_single_number_heading_pane_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_number_heading_pane_g

0xb667,	// (0x0002a73c) list_single_number_heading_pane_t1_ParamLimits

0xb667,	// (0x0002a73c) list_single_number_heading_pane_t1

0xb68f,	// (0x0002a764) list_single_number_heading_pane_t2_ParamLimits

0xb68f,	// (0x0002a764) list_single_number_heading_pane_t2

0x0c65,	// (0x0001fd3a) list_single_number_heading_pane_t3_ParamLimits

0x0c65,	// (0x0001fd3a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e6a7) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e6a7) list_single_number_heading_pane_t

0x090f,	// (0x0001f9e4) list_single_graphic_heading_pane_g1_ParamLimits

0x090f,	// (0x0001f9e4) list_single_graphic_heading_pane_g1

0xb6a1,	// (0x0002a776) list_single_graphic_heading_pane_g4_ParamLimits

0xb6a1,	// (0x0002a776) list_single_graphic_heading_pane_g4

0x0251,	// (0x0001f326) list_single_graphic_heading_pane_g5_ParamLimits

0x0251,	// (0x0001f326) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e6ae) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e6ae) list_single_graphic_heading_pane_g

0xb667,	// (0x0002a73c) list_single_graphic_heading_pane_t1_ParamLimits

0xb667,	// (0x0002a73c) list_single_graphic_heading_pane_t1

0xb6b2,	// (0x0002a787) list_single_graphic_heading_pane_t2_ParamLimits

0xb6b2,	// (0x0002a787) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e6b5) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e6b5) list_single_graphic_heading_pane_t

0x0ca1,	// (0x0001fd76) list_single_large_graphic_pane_g1_ParamLimits

0x0ca1,	// (0x0001fd76) list_single_large_graphic_pane_g1

0x0245,	// (0x0001f31a) list_single_large_graphic_pane_g2_ParamLimits

0x0245,	// (0x0001f31a) list_single_large_graphic_pane_g2

0x0251,	// (0x0001f326) list_single_large_graphic_pane_g3_ParamLimits

0x0251,	// (0x0001f326) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e6ba) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e6ba) list_single_large_graphic_pane_g

0x5a4b,	// (0x00024b20) wait_border_pane_g2_copy1

0xb6c4,	// (0x0002a799) list_single_large_graphic_pane_g4_cp2

0x0cad,	// (0x0001fd82) list_single_large_graphic_pane_t1_ParamLimits

0x0cad,	// (0x0001fd82) list_single_large_graphic_pane_t1

0xb6cc,	// (0x0002a7a1) list_double_pane_g1_ParamLimits

0xb6cc,	// (0x0002a7a1) list_double_pane_g1

0x02cc,	// (0x0001f3a1) list_double_pane_g2_ParamLimits

0x02cc,	// (0x0001f3a1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e6c1) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e6c1) list_double_pane_g

0x02d8,	// (0x0001f3ad) list_double_pane_t1_ParamLimits

0x02d8,	// (0x0001f3ad) list_double_pane_t1

0xb6d8,	// (0x0002a7ad) list_double_pane_t2_ParamLimits

0xb6d8,	// (0x0002a7ad) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e6c6) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e6c6) list_double_pane_t

0xb6ea,	// (0x0002a7bf) list_double2_pane_g1_ParamLimits

0xb6ea,	// (0x0002a7bf) list_double2_pane_g1

0x0491,	// (0x0001f566) list_double2_pane_g2_ParamLimits

0x0491,	// (0x0001f566) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e6cb) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e6cb) list_double2_pane_g

0xb6fb,	// (0x0002a7d0) list_double2_pane_t1_ParamLimits

0xb6fb,	// (0x0002a7d0) list_double2_pane_t1

0xb711,	// (0x0002a7e6) list_double2_pane_t2_ParamLimits

0xb711,	// (0x0002a7e6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e6d0) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e6d0) list_double2_pane_t

0xb6cc,	// (0x0002a7a1) list_double_number_pane_g1_ParamLimits

0xb6cc,	// (0x0002a7a1) list_double_number_pane_g1

0x02cc,	// (0x0001f3a1) list_double_number_pane_g2_ParamLimits

0x02cc,	// (0x0001f3a1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e6c1) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e6c1) list_double_number_pane_g

0xb723,	// (0x0002a7f8) list_double_number_pane_t1_ParamLimits

0xb723,	// (0x0002a7f8) list_double_number_pane_t1

0x03a1,	// (0x0001f476) list_double_number_pane_t2_ParamLimits

0x03a1,	// (0x0001f476) list_double_number_pane_t2

0xb735,	// (0x0002a80a) list_double_number_pane_t3_ParamLimits

0xb735,	// (0x0002a80a) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e6d5) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e6d5) list_double_number_pane_t

0x0395,	// (0x0001f46a) list_double_graphic_pane_g1_ParamLimits

0x0395,	// (0x0001f46a) list_double_graphic_pane_g1

0xb747,	// (0x0002a81c) list_double_graphic_pane_g2_ParamLimits

0xb747,	// (0x0002a81c) list_double_graphic_pane_g2

0xb756,	// (0x0002a82b) list_double_graphic_pane_g3_ParamLimits

0xb756,	// (0x0002a82b) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e6dc) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e6dc) list_double_graphic_pane_g

0xb76e,	// (0x0002a843) list_double_graphic_pane_t1_ParamLimits

0xb76e,	// (0x0002a843) list_double_graphic_pane_t1

0xb784,	// (0x0002a859) list_double_graphic_pane_t2_ParamLimits

0xb784,	// (0x0002a859) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e6e5) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e6e5) list_double_graphic_pane_t

0xb796,	// (0x0002a86b) list_double2_graphic_pane_g1_ParamLimits

0xb796,	// (0x0002a86b) list_double2_graphic_pane_g1

0xb6cc,	// (0x0002a7a1) list_double2_graphic_pane_g2_ParamLimits

0xb6cc,	// (0x0002a7a1) list_double2_graphic_pane_g2

0x02cc,	// (0x0001f3a1) list_double2_graphic_pane_g3_ParamLimits

0x02cc,	// (0x0001f3a1) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e6ea) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e6ea) list_double2_graphic_pane_g

0xb7a2,	// (0x0002a877) list_double2_graphic_pane_t1_ParamLimits

0xb7a2,	// (0x0002a877) list_double2_graphic_pane_t1

0xb7b8,	// (0x0002a88d) list_double2_graphic_pane_t2_ParamLimits

0xb7b8,	// (0x0002a88d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e6f1) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e6f1) list_double2_graphic_pane_t

0xb7ca,	// (0x0002a89f) list_double_large_graphic_pane_g1_ParamLimits

0xb7ca,	// (0x0002a89f) list_double_large_graphic_pane_g1

0xb7e9,	// (0x0002a8be) list_double_large_graphic_pane_g2_ParamLimits

0xb7e9,	// (0x0002a8be) list_double_large_graphic_pane_g2

0x02cc,	// (0x0001f3a1) list_double_large_graphic_pane_g3_ParamLimits

0x02cc,	// (0x0001f3a1) list_double_large_graphic_pane_g3

0xb7fa,	// (0x0002a8cf) list_double_large_graphic_pane_g4_ParamLimits

0xb7fa,	// (0x0002a8cf) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e6f6) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e6f6) list_double_large_graphic_pane_g

0xb80d,	// (0x0002a8e2) list_double_large_graphic_pane_t1_ParamLimits

0xb80d,	// (0x0002a8e2) list_double_large_graphic_pane_t1

0xb826,	// (0x0002a8fb) list_double_large_graphic_pane_t2_ParamLimits

0xb826,	// (0x0002a8fb) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e701) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e701) list_double_large_graphic_pane_t

0xb838,	// (0x0002a90d) list_double2_large_graphic_pane_g1_ParamLimits

0xb838,	// (0x0002a90d) list_double2_large_graphic_pane_g1

0xb6ea,	// (0x0002a7bf) list_double2_large_graphic_pane_g2_ParamLimits

0xb6ea,	// (0x0002a7bf) list_double2_large_graphic_pane_g2

0x0491,	// (0x0001f566) list_double2_large_graphic_pane_g3_ParamLimits

0x0491,	// (0x0001f566) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e706) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e706) list_double2_large_graphic_pane_g

0xb844,	// (0x0002a919) list_double2_large_graphic_pane_t1_ParamLimits

0xb844,	// (0x0002a919) list_double2_large_graphic_pane_t1

0xb85a,	// (0x0002a92f) list_double2_large_graphic_pane_t2_ParamLimits

0xb85a,	// (0x0002a92f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e70d) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e70d) list_double2_large_graphic_pane_t

0xb86c,	// (0x0002a941) list_double_heading_pane_g1_ParamLimits

0xb86c,	// (0x0002a941) list_double_heading_pane_g1

0xb87d,	// (0x0002a952) list_double_heading_pane_g2_ParamLimits

0xb87d,	// (0x0002a952) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e712) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e712) list_double_heading_pane_g

0xb889,	// (0x0002a95e) list_double_heading_pane_t1_ParamLimits

0xb889,	// (0x0002a95e) list_double_heading_pane_t1

0xb711,	// (0x0002a7e6) list_double_heading_pane_t2_ParamLimits

0xb711,	// (0x0002a7e6) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e717) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e717) list_double_heading_pane_t

0x0395,	// (0x0001f46a) list_double_graphic_heading_pane_g1_ParamLimits

0x0395,	// (0x0001f46a) list_double_graphic_heading_pane_g1

0xb86c,	// (0x0002a941) list_double_graphic_heading_pane_g2_ParamLimits

0xb86c,	// (0x0002a941) list_double_graphic_heading_pane_g2

0xb87d,	// (0x0002a952) list_double_graphic_heading_pane_g3_ParamLimits

0xb87d,	// (0x0002a952) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e71c) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e71c) list_double_graphic_heading_pane_g

0xb89f,	// (0x0002a974) list_double_graphic_heading_pane_t1_ParamLimits

0xb89f,	// (0x0002a974) list_double_graphic_heading_pane_t1

0xb7b8,	// (0x0002a88d) list_double_graphic_heading_pane_t2_ParamLimits

0xb7b8,	// (0x0002a88d) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e723) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e723) list_double_graphic_heading_pane_t

0xb7e9,	// (0x0002a8be) list_double_time_pane_g1_ParamLimits

0xb7e9,	// (0x0002a8be) list_double_time_pane_g1

0x02cc,	// (0x0001f3a1) list_double_time_pane_g2_ParamLimits

0x02cc,	// (0x0001f3a1) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e728) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e728) list_double_time_pane_g

0xb8b5,	// (0x0002a98a) list_double_time_pane_t1_ParamLimits

0xb8b5,	// (0x0002a98a) list_double_time_pane_t1

0xb8cb,	// (0x0002a9a0) list_double_time_pane_t2_ParamLimits

0xb8cb,	// (0x0002a9a0) list_double_time_pane_t2

0xb8dd,	// (0x0002a9b2) list_double_time_pane_t3_ParamLimits

0xb8dd,	// (0x0002a9b2) list_double_time_pane_t3

0xb8ef,	// (0x0002a9c4) list_double_time_pane_t4_ParamLimits

0xb8ef,	// (0x0002a9c4) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e72d) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e72d) list_double_time_pane_t

0x0515,	// (0x0001f5ea) list_setting_pane_g1_ParamLimits

0x0515,	// (0x0001f5ea) list_setting_pane_g1

0x0491,	// (0x0001f566) list_setting_pane_g2_ParamLimits

0x0491,	// (0x0001f566) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e736) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e736) list_setting_pane_g

0xb901,	// (0x0002a9d6) list_setting_pane_t1_ParamLimits

0xb901,	// (0x0002a9d6) list_setting_pane_t1

0xb91b,	// (0x0002a9f0) list_setting_pane_t2_ParamLimits

0xb91b,	// (0x0002a9f0) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e73b) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e73b) list_setting_pane_t

0xb958,	// (0x0002aa2d) set_value_pane_cp_ParamLimits

0xb958,	// (0x0002aa2d) set_value_pane_cp

0x0581,	// (0x0001f656) list_setting_number_pane_g1_ParamLimits

0x0581,	// (0x0001f656) list_setting_number_pane_g1

0x058d,	// (0x0001f662) list_setting_number_pane_g2_ParamLimits

0x058d,	// (0x0001f662) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e742) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e742) list_setting_number_pane_g

0xb964,	// (0x0002aa39) list_setting_number_pane_t1_ParamLimits

0xb964,	// (0x0002aa39) list_setting_number_pane_t1

0xb97d,	// (0x0002aa52) list_setting_number_pane_t2_ParamLimits

0xb97d,	// (0x0002aa52) list_setting_number_pane_t2

0xb997,	// (0x0002aa6c) list_setting_number_pane_t3_ParamLimits

0xb997,	// (0x0002aa6c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e747) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e747) list_setting_number_pane_t

0xb958,	// (0x0002aa2d) set_value_pane_ParamLimits

0xb958,	// (0x0002aa2d) set_value_pane

0x3f3b,	// (0x00023010) bg_set_opt_pane_ParamLimits

0x3f3b,	// (0x00023010) bg_set_opt_pane

0x0607,	// (0x0001f6dc) set_value_pane_t1

0x3f5c,	// (0x00023031) slider_set_pane_cp3

0x3f65,	// (0x0002303a) volume_small_pane_cp

0x3f6e,	// (0x00023043) list_form_gen_pane

0x3f77,	// (0x0002304c) scroll_pane_cp8

0xb9da,	// (0x0002aaaf) form_field_data_pane_ParamLimits

0xb9da,	// (0x0002aaaf) form_field_data_pane

0xb9f1,	// (0x0002aac6) form_field_data_wide_pane_ParamLimits

0xb9f1,	// (0x0002aac6) form_field_data_wide_pane

0xba11,	// (0x0002aae6) form_field_popup_pane_ParamLimits

0xba11,	// (0x0002aae6) form_field_popup_pane

0xba29,	// (0x0002aafe) form_field_popup_wide_pane_ParamLimits

0xba29,	// (0x0002aafe) form_field_popup_wide_pane

0x0699,	// (0x0001f76e) form_field_slider_pane_ParamLimits

0x0699,	// (0x0001f76e) form_field_slider_pane

0x06ac,	// (0x0001f781) form_field_slider_wide_pane_ParamLimits

0x06ac,	// (0x0001f781) form_field_slider_wide_pane

0x3f88,	// (0x0002305d) data_form_pane

0xba50,	// (0x0002ab25) form_field_data_pane_t1

0x3f94,	// (0x00023069) input_focus_pane

0x06e3,	// (0x0001f7b8) data_form_wide_pane

0x0700,	// (0x0001f7d5) form_field_data_wide_pane_t1

0x3d05,	// (0x00022dda) input_focus_pane_cp6

0xba6a,	// (0x0002ab3f) form_field_popup_pane_t1

0x3f94,	// (0x00023069) input_focus_pane_cp7

0x3fc2,	// (0x00023097) list_form_pane

0x0744,	// (0x0001f819) form_field_popup_wide_pane_t1

0x3f94,	// (0x00023069) input_focus_pane_cp8

0x3fce,	// (0x000230a3) list_form_wide_pane

0xba8c,	// (0x0002ab61) form_field_slider_pane_t1_ParamLimits

0xba8c,	// (0x0002ab61) form_field_slider_pane_t1

0xbaa4,	// (0x0002ab79) form_field_slider_pane_t2_ParamLimits

0xbaa4,	// (0x0002ab79) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e757) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e757) form_field_slider_pane_t

0x39b5,	// (0x00022a8a) input_focus_pane_cp9_ParamLimits

0x39b5,	// (0x00022a8a) input_focus_pane_cp9

0xbab9,	// (0x0002ab8e) slider_cont_pane_ParamLimits

0xbab9,	// (0x0002ab8e) slider_cont_pane

0x3fdd,	// (0x000230b2) form_field_slider_wide_pane_t1_ParamLimits

0x3fdd,	// (0x000230b2) form_field_slider_wide_pane_t1

0x079b,	// (0x0001f870) form_field_slider_wide_pane_t2_ParamLimits

0x079b,	// (0x0001f870) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e75c) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e75c) form_field_slider_wide_pane_t

0x39b5,	// (0x00022a8a) input_focus_pane_cp10_ParamLimits

0x39b5,	// (0x00022a8a) input_focus_pane_cp10

0xbacd,	// (0x0002aba2) slider_cont_pane_cp1_ParamLimits

0xbacd,	// (0x0002aba2) slider_cont_pane_cp1

0xbae1,	// (0x0002abb6) slider_form_pane_cp

0x3fef,	// (0x000230c4) input_focus_pane_g1

0x3ff7,	// (0x000230cc) input_focus_pane_g2

0x3fff,	// (0x000230d4) input_focus_pane_g3

0x4007,	// (0x000230dc) input_focus_pane_g4

0x400f,	// (0x000230e4) input_focus_pane_g5

0x4017,	// (0x000230ec) input_focus_pane_g6

0x401f,	// (0x000230f4) input_focus_pane_g7

0x4027,	// (0x000230fc) input_focus_pane_g8

0x402f,	// (0x00023104) input_focus_pane_g9

0x3650,	// (0x00022725) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e761) input_focus_pane_g

0x5a54,	// (0x00024b29) wait_border_pane_g3_copy1

0xbae9,	// (0x0002abbe) data_form_pane_t1

0x3650,	// (0x00022725) wait_anim_pane_g1_copy1

0xbc20,	// (0x0002acf5) data_form_wide_pane_t1

0xbb03,	// (0x0002abd8) list_form_graphic_pane_cp_ParamLimits

0xbb03,	// (0x0002abd8) list_form_graphic_pane_cp

0x696f,	// (0x00025a44) slider_form_pane_g1

0x6978,	// (0x00025a4d) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002ea58) slider_form_pane_g

0xbb16,	// (0x0002abeb) list_form_graphic_pane_ParamLimits

0xbb16,	// (0x0002abeb) list_form_graphic_pane

0x07fb,	// (0x0001f8d0) list_form_graphic_pane_g1

0x0803,	// (0x0001f8d8) list_form_graphic_pane_t1_ParamLimits

0x0803,	// (0x0001f8d8) list_form_graphic_pane_t1

0x373a,	// (0x0002280f) list_highlight_pane_cp5_ParamLimits

0x373a,	// (0x0002280f) list_highlight_pane_cp5

0xbb28,	// (0x0002abfd) find_pane_g1

0x4037,	// (0x0002310c) input_find_pane

0xbb31,	// (0x0002ac06) input_find_pane_g1_ParamLimits

0xbb31,	// (0x0002ac06) input_find_pane_g1

0xbb3d,	// (0x0002ac12) input_find_pane_t1_ParamLimits

0xbb3d,	// (0x0002ac12) input_find_pane_t1

0xbb52,	// (0x0002ac27) input_find_pane_t2_ParamLimits

0xbb52,	// (0x0002ac27) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e776) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e776) input_find_pane_t

0x4040,	// (0x00023115) input_focus_pane_cp5_ParamLimits

0x4040,	// (0x00023115) input_focus_pane_cp5

0x405a,	// (0x0002312f) bg_popup_window_pane_cp2_ParamLimits

0x405a,	// (0x0002312f) bg_popup_window_pane_cp2

0x4067,	// (0x0002313c) listscroll_menu_pane_ParamLimits

0x4067,	// (0x0002313c) listscroll_menu_pane

0xd36f,	// (0x0002c444) popup_submenu_window_ParamLimits

0xd36f,	// (0x0002c444) popup_submenu_window

0x409b,	// (0x00023170) find_popup_pane_g1

0x40a3,	// (0x00023178) input_popup_find_pane_cp

0x4040,	// (0x00023115) input_focus_pane_cp4_ParamLimits

0x4040,	// (0x00023115) input_focus_pane_cp4

0x40bb,	// (0x00023190) input_popup_find_pane_t1_ParamLimits

0x40bb,	// (0x00023190) input_popup_find_pane_t1

0x365a,	// (0x0002272f) bg_popup_sub_pane_cp

0x40e9,	// (0x000231be) listscroll_popup_sub_pane

0x40f1,	// (0x000231c6) list_submenu_pane_ParamLimits

0x40f1,	// (0x000231c6) list_submenu_pane

0x4102,	// (0x000231d7) scroll_pane_cp4

0x410a,	// (0x000231df) list_single_popup_submenu_pane_ParamLimits

0x410a,	// (0x000231df) list_single_popup_submenu_pane

0x411e,	// (0x000231f3) list_single_popup_submenu_pane_g1

0x4126,	// (0x000231fb) list_single_popup_submenu_pane_t1_ParamLimits

0x4126,	// (0x000231fb) list_single_popup_submenu_pane_t1

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp1_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp1

0xd3a5,	// (0x0002c47a) tabs_2_active_pane_g1

0xd3ad,	// (0x0002c482) tabs_2_active_pane_t1

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp1_ParamLimits

0x39b5,	// (0x00022a8a) bg_passive_tab_pane_cp1

0xd3a5,	// (0x0002c47a) tabs_2_passive_pane_g1

0xd3ad,	// (0x0002c482) tabs_2_passive_pane_t1

0x373a,	// (0x0002280f) bg_active_tab_pane_cp4

0xd3bf,	// (0x0002c494) tabs_2_long_active_pane_t1

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp4

0x2315,	// (0x000213ea) list_single_midp_graphic_pane_g4_ParamLimits

0x373a,	// (0x0002280f) bg_active_tab_pane_cp5

0xd3d2,	// (0x0002c4a7) tabs_3_long_active_pane_t1

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp5

0x2315,	// (0x000213ea) list_single_midp_graphic_pane_g4

0x373a,	// (0x0002280f) bg_popup_window_pane_cp13_ParamLimits

0x373a,	// (0x0002280f) bg_popup_window_pane_cp13

0x419d,	// (0x00023272) listscroll_popup_fast_pane_ParamLimits

0x419d,	// (0x00023272) listscroll_popup_fast_pane

0x41a9,	// (0x0002327e) grid_popup_fast_pane_ParamLimits

0x41a9,	// (0x0002327e) grid_popup_fast_pane

0x41bb,	// (0x00023290) scroll_pane_cp9_ParamLimits

0x41bb,	// (0x00023290) scroll_pane_cp9

0x8215,	// (0x000272ea) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8215,	// (0x000272ea) list_single_graphic_hl_pane_t1_cp2

0x41df,	// (0x000232b4) input_focus_pane_cp20_ParamLimits

0x41df,	// (0x000232b4) input_focus_pane_cp20

0x41ed,	// (0x000232c2) query_popup_data_pane_t1_ParamLimits

0x41ed,	// (0x000232c2) query_popup_data_pane_t1

0x4200,	// (0x000232d5) query_popup_data_pane_t2_ParamLimits

0x4200,	// (0x000232d5) query_popup_data_pane_t2

0x4246,	// (0x0002331b) query_popup_data_pane_t3_ParamLimits

0x4246,	// (0x0002331b) query_popup_data_pane_t3

0x4287,	// (0x0002335c) query_popup_data_pane_t4_ParamLimits

0x4287,	// (0x0002335c) query_popup_data_pane_t4

0x42c3,	// (0x00023398) query_popup_data_pane_t5_ParamLimits

0x42c3,	// (0x00023398) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e77b) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e77b) query_popup_data_pane_t

0x3fef,	// (0x000230c4) bg_set_opt_pane_g1

0x3ff7,	// (0x000230cc) bg_set_opt_pane_g2

0x3fff,	// (0x000230d4) bg_set_opt_pane_g3

0x4007,	// (0x000230dc) bg_set_opt_pane_g4

0x400f,	// (0x000230e4) bg_set_opt_pane_g5

0x4017,	// (0x000230ec) bg_set_opt_pane_g6

0x401f,	// (0x000230f4) bg_set_opt_pane_g7

0x4027,	// (0x000230fc) bg_set_opt_pane_g8

0x402f,	// (0x00023104) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e786) bg_set_opt_pane_g

0x19db,	// (0x00020ab0) control_top_pane_stacon_ParamLimits

0x19db,	// (0x00020ab0) control_top_pane_stacon

0x1a2e,	// (0x00020b03) signal_pane_stacon_ParamLimits

0x1a2e,	// (0x00020b03) signal_pane_stacon

0x489d,	// (0x00023972) stacon_top_pane_g1_ParamLimits

0x489d,	// (0x00023972) stacon_top_pane_g1

0x1a53,	// (0x00020b28) title_pane_stacon_ParamLimits

0x1a53,	// (0x00020b28) title_pane_stacon

0x1a7d,	// (0x00020b52) uni_indicator_pane_stacon_ParamLimits

0x1a7d,	// (0x00020b52) uni_indicator_pane_stacon

0x1a92,	// (0x00020b67) battery_pane_stacon_ParamLimits

0x1a92,	// (0x00020b67) battery_pane_stacon

0x1ad6,	// (0x00020bab) control_bottom_pane_stacon_ParamLimits

0x1ad6,	// (0x00020bab) control_bottom_pane_stacon

0x1af9,	// (0x00020bce) navi_pane_stacon_ParamLimits

0x1af9,	// (0x00020bce) navi_pane_stacon

0x48bf,	// (0x00023994) stacon_bottom_pane_g1_ParamLimits

0x48bf,	// (0x00023994) stacon_bottom_pane_g1

0x1745,	// (0x0002081a) aid_levels_signal_lsc_ParamLimits

0x1745,	// (0x0002081a) aid_levels_signal_lsc

0x175c,	// (0x00020831) signal_pane_stacon_g1_ParamLimits

0x175c,	// (0x00020831) signal_pane_stacon_g1

0x1770,	// (0x00020845) signal_pane_stacon_g2_ParamLimits

0x1770,	// (0x00020845) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e799) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e799) signal_pane_stacon_g

0x17a5,	// (0x0002087a) title_pane_stacon_t1_ParamLimits

0x17a5,	// (0x0002087a) title_pane_stacon_t1

0x4307,	// (0x000233dc) uni_indicator_pane_stacon_g1

0x4311,	// (0x000233e6) uni_indicator_pane_stacon_g2

0x431b,	// (0x000233f0) uni_indicator_pane_stacon_g3

0x4325,	// (0x000233fa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e7a5) uni_indicator_pane_stacon_g

0x17ca,	// (0x0002089f) control_top_pane_stacon_g1

0x17d2,	// (0x000208a7) control_top_pane_stacon_t1_ParamLimits

0x17d2,	// (0x000208a7) control_top_pane_stacon_t1

0x1809,	// (0x000208de) aid_levels_battery_lsc_ParamLimits

0x1809,	// (0x000208de) aid_levels_battery_lsc

0x1821,	// (0x000208f6) battery_pane_stacon_g1_ParamLimits

0x1821,	// (0x000208f6) battery_pane_stacon_g1

0x1834,	// (0x00020909) battery_pane_stacon_g2_ParamLimits

0x1834,	// (0x00020909) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e7ae) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e7ae) battery_pane_stacon_g

0x1872,	// (0x00020947) navi_icon_pane_stacon

0x1886,	// (0x0002095b) navi_navi_pane_stacon

0x1872,	// (0x00020947) navi_text_pane_stacon

0x17ca,	// (0x0002089f) control_bottom_pane_stacon_g1

0x189a,	// (0x0002096f) control_bottom_pane_stacon_t1_ParamLimits

0x189a,	// (0x0002096f) control_bottom_pane_stacon_t1

0xd3e4,	// (0x0002c4b9) grid_app_pane_ParamLimits

0xd3e4,	// (0x0002c4b9) grid_app_pane

0xd41a,	// (0x0002c4ef) scroll_pane_cp15_ParamLimits

0xd41a,	// (0x0002c4ef) scroll_pane_cp15

0xd42f,	// (0x0002c504) cell_app_pane_ParamLimits

0xd42f,	// (0x0002c504) cell_app_pane

0xd476,	// (0x0002c54b) cell_app_pane_g1_ParamLimits

0xd476,	// (0x0002c54b) cell_app_pane_g1

0x43c8,	// (0x0002349d) cell_app_pane_g2_ParamLimits

0x43c8,	// (0x0002349d) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e7b3) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e7b3) cell_app_pane_g

0xd49a,	// (0x0002c56f) cell_app_pane_t1_ParamLimits

0xd49a,	// (0x0002c56f) cell_app_pane_t1

0x43eb,	// (0x000234c0) grid_highlight_pane_ParamLimits

0x43eb,	// (0x000234c0) grid_highlight_pane

0x3fef,	// (0x000230c4) cell_highlight_pane_g1

0x3ff7,	// (0x000230cc) cell_highlight_pane_g2

0x3fff,	// (0x000230d4) cell_highlight_pane_g3

0x4007,	// (0x000230dc) cell_highlight_pane_g4

0x400f,	// (0x000230e4) cell_highlight_pane_g5

0x4017,	// (0x000230ec) cell_highlight_pane_g6

0x401f,	// (0x000230f4) cell_highlight_pane_g7

0x4027,	// (0x000230fc) cell_highlight_pane_g8

0x402f,	// (0x00023104) cell_highlight_pane_g9

0x3650,	// (0x00022725) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e761) cell_highlight_pane_g

0x43fc,	// (0x000234d1) bg_scroll_pane

0x18e4,	// (0x000209b9) scroll_handle_pane

0x4443,	// (0x00023518) scroll_bg_pane_g1

0x4458,	// (0x0002352d) scroll_bg_pane_g2

0x4470,	// (0x00023545) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e7b8) scroll_bg_pane_g

0x4485,	// (0x0002355a) scroll_handle_focus_pane_ParamLimits

0x4485,	// (0x0002355a) scroll_handle_focus_pane

0x4443,	// (0x00023518) scroll_handle_pane_g1

0x4492,	// (0x00023567) scroll_handle_pane_g2

0x4470,	// (0x00023545) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e7bf) scroll_handle_pane_g

0x4040,	// (0x00023115) bg_popup_sub_pane_cp21_ParamLimits

0x4040,	// (0x00023115) bg_popup_sub_pane_cp21

0x44a6,	// (0x0002357b) popup_fep_japan_predictive_window_t1_ParamLimits

0x44a6,	// (0x0002357b) popup_fep_japan_predictive_window_t1

0x44c0,	// (0x00023595) popup_fep_japan_predictive_window_t2_ParamLimits

0x44c0,	// (0x00023595) popup_fep_japan_predictive_window_t2

0x44f3,	// (0x000235c8) popup_fep_japan_predictive_window_t3_ParamLimits

0x44f3,	// (0x000235c8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e7c6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e7c6) popup_fep_japan_predictive_window_t

0x365a,	// (0x0002272f) bg_popup_sub_pane_cp23

0x452a,	// (0x000235ff) listscroll_japin_cand_pane

0x4532,	// (0x00023607) popup_fep_japan_candidate_window_t1

0x4540,	// (0x00023615) candidate_pane_ParamLimits

0x4540,	// (0x00023615) candidate_pane

0x4552,	// (0x00023627) scroll_pane_cp30

0x455a,	// (0x0002362f) list_single_popup_jap_candidate_pane_ParamLimits

0x455a,	// (0x0002362f) list_single_popup_jap_candidate_pane

0x365a,	// (0x0002272f) list_highlight_pane_cp30

0x456e,	// (0x00023643) list_single_popup_jap_candidate_pane_t1

0x457d,	// (0x00023652) level_1_signal

0x458a,	// (0x0002365f) level_2_signal

0x4597,	// (0x0002366c) level_3_signal

0x45a4,	// (0x00023679) level_4_signal

0x45b1,	// (0x00023686) level_5_signal

0x45be,	// (0x00023693) level_6_signal

0x45cb,	// (0x000236a0) level_7_signal

0x457d,	// (0x00023652) level_1_battery

0x458a,	// (0x0002365f) level_2_battery

0x4597,	// (0x0002366c) level_3_battery

0x45a4,	// (0x00023679) level_4_battery

0x45b1,	// (0x00023686) level_5_battery

0x45be,	// (0x00023693) level_6_battery

0x45cb,	// (0x000236a0) level_7_battery

0x45f0,	// (0x000236c5) list_menu_pane_ParamLimits

0x45f0,	// (0x000236c5) list_menu_pane

0x4606,	// (0x000236db) scroll_pane_cp25_ParamLimits

0x4606,	// (0x000236db) scroll_pane_cp25

0x461f,	// (0x000236f4) list_double2_graphic_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double2_graphic_pane_cp2

0x461f,	// (0x000236f4) list_double2_large_graphic_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double2_large_graphic_pane_cp2

0x461f,	// (0x000236f4) list_double2_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double2_pane_cp2

0x461f,	// (0x000236f4) list_double_graphic_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double_graphic_pane_cp2

0x461f,	// (0x000236f4) list_double_large_graphic_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double_large_graphic_pane_cp2

0x461f,	// (0x000236f4) list_double_number_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double_number_pane_cp2

0x461f,	// (0x000236f4) list_double_pane_cp2_ParamLimits

0x461f,	// (0x000236f4) list_double_pane_cp2

0xd4c2,	// (0x0002c597) list_single_2graphic_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_2graphic_pane_cp2

0xd4c2,	// (0x0002c597) list_single_graphic_heading_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_graphic_heading_pane_cp2

0xd4c2,	// (0x0002c597) list_single_graphic_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_graphic_pane_cp2

0xd4c2,	// (0x0002c597) list_single_heading_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_heading_pane_cp2

0x4659,	// (0x0002372e) list_single_large_graphic_pane_cp2_ParamLimits

0x4659,	// (0x0002372e) list_single_large_graphic_pane_cp2

0xd4c2,	// (0x0002c597) list_single_number_heading_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_number_heading_pane_cp2

0xd4c2,	// (0x0002c597) list_single_number_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_number_pane_cp2

0xd4c2,	// (0x0002c597) list_single_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_pane_cp2

0x46d4,	// (0x000237a9) bg_popup_sub_pane_cp22

0x1993,	// (0x00020a68) popup_side_volume_key_window_g1

0x19b7,	// (0x00020a8c) popup_side_volume_key_window_t1

0x19d3,	// (0x00020aa8) volume_small_pane_cp1

0x39b5,	// (0x00022a8a) bg_popup_sub_pane_cp24_ParamLimits

0x39b5,	// (0x00022a8a) bg_popup_sub_pane_cp24

0x46ea,	// (0x000237bf) fep_china_uni_candidate_pane_ParamLimits

0x46ea,	// (0x000237bf) fep_china_uni_candidate_pane

0x46fe,	// (0x000237d3) fep_china_uni_entry_pane

0x470e,	// (0x000237e3) popup_fep_china_uni_window_g1

0x472a,	// (0x000237ff) fep_china_uni_entry_pane_g1

0x4732,	// (0x00023807) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e7f7) fep_china_uni_entry_pane_g

0x473a,	// (0x0002380f) fep_entry_item_pane

0x475c,	// (0x00023831) fep_candidate_item_pane

0x4764,	// (0x00023839) fep_china_uni_candidate_pane_g1

0x476c,	// (0x00023841) fep_china_uni_candidate_pane_g2

0x4774,	// (0x00023849) fep_china_uni_candidate_pane_g3

0x477c,	// (0x00023851) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e7fc) fep_china_uni_candidate_pane_g

0x3650,	// (0x00022725) fep_entry_item_pane_g1

0x4784,	// (0x00023859) fep_entry_item_pane_t1_ParamLimits

0x4784,	// (0x00023859) fep_entry_item_pane_t1

0x479a,	// (0x0002386f) fep_candidate_item_pane_t1_ParamLimits

0x479a,	// (0x0002386f) fep_candidate_item_pane_t1

0x47af,	// (0x00023884) fep_candidate_item_pane_t2_ParamLimits

0x47af,	// (0x00023884) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e805) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e805) fep_candidate_item_pane_t

0x373a,	// (0x0002280f) list_highlight_pane_cp31_ParamLimits

0x373a,	// (0x0002280f) list_highlight_pane_cp31

0x47c1,	// (0x00023896) level_1_signal_lsc

0x47ca,	// (0x0002389f) level_2_signal_lsc

0x47d3,	// (0x000238a8) level_3_signal_lsc

0x47dc,	// (0x000238b1) level_4_signal_lsc

0x47e5,	// (0x000238ba) level_5_signal_lsc

0x47ee,	// (0x000238c3) level_6_signal_lsc

0x47f7,	// (0x000238cc) level_7_signal_lsc

0x47f7,	// (0x000238cc) level_1_battery_lsc

0x4800,	// (0x000238d5) level_2_battery_lsc

0x4809,	// (0x000238de) level_3_battery_lsc

0x4812,	// (0x000238e7) level_4_battery_lsc

0x481b,	// (0x000238f0) level_5_battery_lsc

0x4824,	// (0x000238f9) level_6_battery_lsc

0x47c1,	// (0x00023896) level_7_battery_lsc

0x482d,	// (0x00023902) scroll_handle_focus_pane_g1

0x4836,	// (0x0002390b) scroll_handle_focus_pane_g2

0x483f,	// (0x00023914) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e80a) scroll_handle_focus_pane_g

0xbb67,	// (0x0002ac3c) list_single_2graphic_pane_g1_ParamLimits

0xbb67,	// (0x0002ac3c) list_single_2graphic_pane_g1

0xb6a1,	// (0x0002a776) list_single_2graphic_pane_g2_ParamLimits

0xb6a1,	// (0x0002a776) list_single_2graphic_pane_g2

0x0251,	// (0x0001f326) list_single_2graphic_pane_g3_ParamLimits

0x0251,	// (0x0001f326) list_single_2graphic_pane_g3

0xbb73,	// (0x0002ac48) list_single_2graphic_pane_g4_ParamLimits

0xbb73,	// (0x0002ac48) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e811) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e811) list_single_2graphic_pane_g

0xbb7f,	// (0x0002ac54) list_single_2graphic_pane_t1_ParamLimits

0xbb7f,	// (0x0002ac54) list_single_2graphic_pane_t1

0xbbad,	// (0x0002ac82) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbad,	// (0x0002ac82) list_double2_graphic_large_graphic_pane_g1

0xb6ea,	// (0x0002a7bf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb6ea,	// (0x0002a7bf) list_double2_graphic_large_graphic_pane_g2

0x0491,	// (0x0001f566) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0491,	// (0x0001f566) list_double2_graphic_large_graphic_pane_g3

0xbbbf,	// (0x0002ac94) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbbf,	// (0x0002ac94) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e81a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e81a) list_double2_graphic_large_graphic_pane_g

0xbbcb,	// (0x0002aca0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbcb,	// (0x0002aca0) list_double2_graphic_large_graphic_pane_t1

0xbbe1,	// (0x0002acb6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbe1,	// (0x0002acb6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e823) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e823) list_double2_graphic_large_graphic_pane_t

0x4986,	// (0x00023a5b) popup_fast_swap_window_ParamLimits

0x4986,	// (0x00023a5b) popup_fast_swap_window

0x49a2,	// (0x00023a77) popup_side_volume_key_window

0x49bc,	// (0x00023a91) stacon_top_pane

0x49c6,	// (0x00023a9b) status_pane_ParamLimits

0x49c6,	// (0x00023a9b) status_pane

0xd5b7,	// (0x0002c68c) status_small_pane

0x365a,	// (0x0002272f) control_pane

0x365a,	// (0x0002272f) stacon_bottom_pane

0x3f77,	// (0x0002304c) scroll_pane_cp121

0x3f6e,	// (0x00023043) set_content_pane

0xd54f,	// (0x0002c624) bg_active_tab_pane_g1_cp1

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp1

0xd558,	// (0x0002c62d) bg_active_tab_pane_g3_cp1

0xd54f,	// (0x0002c624) bg_passive_tab_pane_g1_cp1

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp1

0xd558,	// (0x0002c62d) bg_passive_tab_pane_g3_cp1

0xd561,	// (0x0002c636) bg_active_tab_pane_g1_cp2

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp2

0xd56a,	// (0x0002c63f) bg_active_tab_pane_g3_cp2

0xd561,	// (0x0002c636) bg_passive_tab_pane_g1_cp2

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp2

0xd56a,	// (0x0002c63f) bg_passive_tab_pane_g3_cp2

0x4875,	// (0x0002394a) bg_active_tab_pane_g1_cp3

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp3

0x487e,	// (0x00023953) bg_active_tab_pane_g3_cp3

0x4875,	// (0x0002394a) bg_passive_tab_pane_g1_cp3

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp3

0x487e,	// (0x00023953) bg_passive_tab_pane_g3_cp3

0xd573,	// (0x0002c648) bg_active_tab_pane_g1_cp4

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp4

0xd57e,	// (0x0002c653) bg_active_tab_pane_g3_cp4

0xd573,	// (0x0002c648) bg_passive_tab_pane_g1_cp4

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp4

0xd57e,	// (0x0002c653) bg_passive_tab_pane_g3_cp4

0x48db,	// (0x000239b0) bg_active_tab_pane_g1_cp5

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp5

0x48e4,	// (0x000239b9) bg_active_tab_pane_g3_cp5

0x48db,	// (0x000239b0) bg_passive_tab_pane_g1_cp5

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp5

0x48e4,	// (0x000239b9) bg_passive_tab_pane_g3_cp5

0x6efd,	// (0x00025fd2) list_set_graphic_pane_ParamLimits

0x6efd,	// (0x00025fd2) list_set_graphic_pane

0x365a,	// (0x0002272f) bg_set_opt_pane_cp4

0xd589,	// (0x0002c65e) list_set_graphic_pane_g1_ParamLimits

0xd589,	// (0x0002c65e) list_set_graphic_pane_g1

0xd595,	// (0x0002c66a) list_set_graphic_pane_g2_ParamLimits

0xd595,	// (0x0002c66a) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e828) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e828) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0002eba6) volume_small_pane_cp_g

0x4939,	// (0x00023a0e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4939,	// (0x00023a0e) list_double2_large_graphic_pane_g1_cp2

0x4945,	// (0x00023a1a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4945,	// (0x00023a1a) list_double2_large_graphic_pane_g2_cp2

0x4956,	// (0x00023a2b) list_double2_large_graphic_pane_g3_cp2

0x495e,	// (0x00023a33) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x495e,	// (0x00023a33) list_double2_large_graphic_pane_t1_cp2

0x4974,	// (0x00023a49) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4974,	// (0x00023a49) list_double2_large_graphic_pane_t2_cp2

0x652d,	// (0x00025602) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x652d,	// (0x00025602) list_double_large_graphic_pane_g1_cp2

0x653e,	// (0x00025613) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x653e,	// (0x00025613) list_double_large_graphic_pane_g2_cp2

0x4aed,	// (0x00023bc2) list_double_large_graphic_pane_g3_cp2

0x654f,	// (0x00025624) list_double_large_graphic_pane_g4_cp

0x6557,	// (0x0002562c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6557,	// (0x0002562c) list_double_large_graphic_pane_t1_cp2

0x656e,	// (0x00025643) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x656e,	// (0x00025643) list_double_large_graphic_pane_t2_cp2

0x49df,	// (0x00023ab4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x49df,	// (0x00023ab4) list_double2_graphic_pane_g1_cp2

0x49ed,	// (0x00023ac2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49ed,	// (0x00023ac2) list_double2_graphic_pane_g2_cp2

0x49fe,	// (0x00023ad3) list_double2_graphic_pane_g3_cp2

0x4a08,	// (0x00023add) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a08,	// (0x00023add) list_double2_graphic_pane_t1_cp2

0x4a1e,	// (0x00023af3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a1e,	// (0x00023af3) list_double2_graphic_pane_t2_cp2

0x4a30,	// (0x00023b05) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4a30,	// (0x00023b05) list_single_number_heading_pane_g1_cp2

0x4a3c,	// (0x00023b11) list_single_number_heading_pane_g2_cp2

0x4a44,	// (0x00023b19) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a44,	// (0x00023b19) list_single_number_heading_pane_t1_cp2

0x4a5a,	// (0x00023b2f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a5a,	// (0x00023b2f) list_single_number_heading_pane_t2_cp2

0x4a6c,	// (0x00023b41) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a6c,	// (0x00023b41) list_single_number_heading_pane_t3_cp2

0x4a30,	// (0x00023b05) list_single_heading_pane_g1_cp2_ParamLimits

0x4a30,	// (0x00023b05) list_single_heading_pane_g1_cp2

0x4a3c,	// (0x00023b11) list_single_heading_pane_g2_cp2

0x4a44,	// (0x00023b19) list_single_heading_pane_t1_cp2_ParamLimits

0x4a44,	// (0x00023b19) list_single_heading_pane_t1_cp2

0x6337,	// (0x0002540c) list_single_heading_pane_t2_cp2_ParamLimits

0x6337,	// (0x0002540c) list_single_heading_pane_t2_cp2

0x627f,	// (0x00025354) list_double_graphic_pane_g1_cp2_ParamLimits

0x627f,	// (0x00025354) list_double_graphic_pane_g1_cp2

0x628b,	// (0x00025360) list_double_graphic_pane_g2_cp2_ParamLimits

0x628b,	// (0x00025360) list_double_graphic_pane_g2_cp2

0x629a,	// (0x0002536f) list_double_graphic_pane_g3_cp2

0x62a2,	// (0x00025377) list_double_graphic_pane_t1_cp2_ParamLimits

0x62a2,	// (0x00025377) list_double_graphic_pane_t1_cp2

0x62b8,	// (0x0002538d) list_double_graphic_pane_t2_cp2_ParamLimits

0x62b8,	// (0x0002538d) list_double_graphic_pane_t2_cp2

0x4ae1,	// (0x00023bb6) list_double_number_pane_g1_cp2_ParamLimits

0x4ae1,	// (0x00023bb6) list_double_number_pane_g1_cp2

0x4aed,	// (0x00023bc2) list_double_number_pane_g2_cp2

0x6243,	// (0x00025318) list_double_number_pane_t1_cp2_ParamLimits

0x6243,	// (0x00025318) list_double_number_pane_t1_cp2

0x6257,	// (0x0002532c) list_double_number_pane_t2_cp2_ParamLimits

0x6257,	// (0x0002532c) list_double_number_pane_t2_cp2

0x626d,	// (0x00025342) list_double_number_pane_t3_cp2_ParamLimits

0x626d,	// (0x00025342) list_double_number_pane_t3_cp2

0x612c,	// (0x00025201) list_single_graphic_pane_g1_cp2_ParamLimits

0x612c,	// (0x00025201) list_single_graphic_pane_g1_cp2

0x4744,	// (0x00023819) list_single_graphic_pane_g2_cp2_ParamLimits

0x4744,	// (0x00023819) list_single_graphic_pane_g2_cp2

0x4b45,	// (0x00023c1a) list_single_graphic_pane_g3_cp2

0x6102,	// (0x000251d7) list_single_graphic_pane_t1_cp2_ParamLimits

0x6102,	// (0x000251d7) list_single_graphic_pane_t1_cp2

0x4744,	// (0x00023819) list_single_number_pane_g1_cp2_ParamLimits

0x4744,	// (0x00023819) list_single_number_pane_g1_cp2

0x4b45,	// (0x00023c1a) list_single_number_pane_g2_cp2

0x6102,	// (0x000251d7) list_single_number_pane_t1_cp2_ParamLimits

0x6102,	// (0x000251d7) list_single_number_pane_t1_cp2

0x6118,	// (0x000251ed) list_single_number_pane_t2_cp2_ParamLimits

0x6118,	// (0x000251ed) list_single_number_pane_t2_cp2

0x4945,	// (0x00023a1a) list_double2_pane_g1_cp2_ParamLimits

0x4945,	// (0x00023a1a) list_double2_pane_g1_cp2

0x4956,	// (0x00023a2b) list_double2_pane_g2_cp2

0x4ab9,	// (0x00023b8e) list_double2_pane_t1_cp2_ParamLimits

0x4ab9,	// (0x00023b8e) list_double2_pane_t1_cp2

0x4acf,	// (0x00023ba4) list_double2_pane_t2_cp2_ParamLimits

0x4acf,	// (0x00023ba4) list_double2_pane_t2_cp2

0x4ae1,	// (0x00023bb6) list_double_pane_g1_cp2_ParamLimits

0x4ae1,	// (0x00023bb6) list_double_pane_g1_cp2

0x4aed,	// (0x00023bc2) list_double_pane_g2_cp2

0x4af5,	// (0x00023bca) list_double_pane_t1_cp2_ParamLimits

0x4af5,	// (0x00023bca) list_double_pane_t1_cp2

0x4b0b,	// (0x00023be0) list_double_pane_t2_cp2_ParamLimits

0x4b0b,	// (0x00023be0) list_double_pane_t2_cp2

0x4b35,	// (0x00023c0a) list_single_pane_cp2_g3

0x4744,	// (0x00023819) list_single_pane_g1_cp2_ParamLimits

0x4744,	// (0x00023819) list_single_pane_g1_cp2

0x4b45,	// (0x00023c1a) list_single_pane_g2_cp2

0x4b4d,	// (0x00023c22) list_single_pane_t1_cp2_ParamLimits

0x4b4d,	// (0x00023c22) list_single_pane_t1_cp2

0x4b65,	// (0x00023c3a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b65,	// (0x00023c3a) list_single_large_graphic_pane_g1_cp2

0x4b71,	// (0x00023c46) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b71,	// (0x00023c46) list_single_large_graphic_pane_g2_cp2

0x4b7d,	// (0x00023c52) list_single_large_graphic_pane_g3_cp2

0x4b85,	// (0x00023c5a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b85,	// (0x00023c5a) list_single_large_graphic_pane_g4_cp1

0x4b9f,	// (0x00023c74) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b9f,	// (0x00023c74) list_single_large_graphic_pane_t1_cp2

0x60ce,	// (0x000251a3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x60ce,	// (0x000251a3) list_single_graphic_heading_pane_g1_cp2

0x609b,	// (0x00025170) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x609b,	// (0x00025170) list_single_graphic_heading_pane_g4_cp2

0x4b45,	// (0x00023c1a) list_single_graphic_heading_pane_g5_cp2

0x60da,	// (0x000251af) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x60da,	// (0x000251af) list_single_graphic_heading_pane_t1_cp2

0x60f0,	// (0x000251c5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x60f0,	// (0x000251c5) list_single_graphic_heading_pane_t2_cp2

0x608f,	// (0x00025164) list_single_2graphic_pane_g1_cp2_ParamLimits

0x608f,	// (0x00025164) list_single_2graphic_pane_g1_cp2

0x609b,	// (0x00025170) list_single_2graphic_pane_g2_cp2_ParamLimits

0x609b,	// (0x00025170) list_single_2graphic_pane_g2_cp2

0x4b45,	// (0x00023c1a) list_single_2graphic_pane_g3_cp2

0x60ac,	// (0x00025181) list_single_2graphic_pane_g4_cp2_ParamLimits

0x60ac,	// (0x00025181) list_single_2graphic_pane_g4_cp2

0x60b8,	// (0x0002518d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x60b8,	// (0x0002518d) list_single_2graphic_pane_t1_cp2

0x3650,	// (0x00022725) list_highlight_pane_g10_cp1

0x5c67,	// (0x00024d3c) list_highlight_pane_g1_cp1

0x5c6f,	// (0x00024d44) list_highlight_pane_g2_cp1

0x5c77,	// (0x00024d4c) list_highlight_pane_g3_cp1

0x5c7f,	// (0x00024d54) list_highlight_pane_g4_cp1

0x5c87,	// (0x00024d5c) list_highlight_pane_g5_cp1

0x5c8f,	// (0x00024d64) list_highlight_pane_g6_cp1

0x5c97,	// (0x00024d6c) list_highlight_pane_g7_cp1

0x5c9f,	// (0x00024d74) list_highlight_pane_g8_cp1

0x5ca7,	// (0x00024d7c) list_highlight_pane_g9_cp1

0xdc27,	// (0x0002ccfc) form_field_slider_pane_t3

0xdc37,	// (0x0002cd0c) form_field_slider_pane_t4

0x5b9b,	// (0x00024c70) slider_form_pane_ParamLimits

0x5b9b,	// (0x00024c70) slider_form_pane

0x365a,	// (0x0002272f) control_abbreviations

0x365a,	// (0x0002272f) control_conventions

0x365a,	// (0x0002272f) control_definitions

0x365a,	// (0x0002272f) format_table_attribute

0x6381,	// (0x00025456) bg_popup_preview_window_pane_g9

0x365a,	// (0x0002272f) format_table_data2

0x365a,	// (0x0002272f) format_table_data3

0x365a,	// (0x0002272f) format_table_data_example

0x0008,

0x365a,	// (0x0002272f) intro_purpose

0xf8e3,	// (0x0002e9b8) bg_popup_preview_window_pane_g

0x365a,	// (0x0002272f) texts_category

0x365a,	// (0x0002272f) texts_graphics

0x4bb5,	// (0x00023c8a) text_digital

0x4bc4,	// (0x00023c99) text_primary

0x4bd3,	// (0x00023ca8) text_primary_small

0x4be2,	// (0x00023cb7) text_secondary

0x4bf1,	// (0x00023cc6) text_title

0x6a50,	// (0x00025b25) bg_passive_tab_pane_g1_cp3_srt

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp3_srt

0x6a59,	// (0x00025b2e) bg_passive_tab_pane_g3_cp3_srt

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp3_srt_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp3_srt

0x6a62,	// (0x00025b37) tabs_4_active_pane_srt_g1

0xdf74,	// (0x0002d049) tabs_4_active_pane_srt_t1_ParamLimits

0xdf74,	// (0x0002d049) tabs_4_active_pane_srt_t1

0x6a50,	// (0x00025b25) bg_active_tab_pane_g1_cp3_copy1

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp3_copy1

0x6a59,	// (0x00025b2e) bg_active_tab_pane_g3_cp3_copy1

0x373a,	// (0x0002280f) tabs_2_long_active_pane_srt_ParamLimits

0x373a,	// (0x0002280f) tabs_2_long_active_pane_srt

0x373a,	// (0x0002280f) tabs_2_long_passive_pane_srt_ParamLimits

0x373a,	// (0x0002280f) tabs_2_long_passive_pane_srt

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp4_srt

0x67b0,	// (0x00025885) bg_passive_tab_pane_g1_cp4_srt

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp4_srt

0x67b9,	// (0x0002588e) bg_passive_tab_pane_g3_cp4_srt

0x373a,	// (0x0002280f) bg_active_tab_pane_cp4_srt_ParamLimits

0x373a,	// (0x0002280f) bg_active_tab_pane_cp4_srt

0xdda1,	// (0x0002ce76) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdda1,	// (0x0002ce76) tabs_2_long_active_pane_srt_t1

0x67b0,	// (0x00025885) bg_active_tab_pane_g1_cp4_srt

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp4_srt

0x67b9,	// (0x0002588e) bg_active_tab_pane_g3_cp4_srt

0x39b5,	// (0x00022a8a) tabs_3_long_active_pane_srt_ParamLimits

0x39b5,	// (0x00022a8a) tabs_3_long_active_pane_srt

0x39b5,	// (0x00022a8a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39b5,	// (0x00022a8a) tabs_3_long_passive_pane_cp_srt

0x39b5,	// (0x00022a8a) tabs_3_long_passive_pane_srt_ParamLimits

0x39b5,	// (0x00022a8a) tabs_3_long_passive_pane_srt

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp5_srt

0x48db,	// (0x000239b0) bg_passive_tab_pane_g1_cp5_srt

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp5_srt

0x48e4,	// (0x000239b9) bg_passive_tab_pane_g3_cp5_srt

0x373a,	// (0x0002280f) bg_active_tab_pane_cp5_srt_ParamLimits

0x373a,	// (0x0002280f) bg_active_tab_pane_cp5_srt

0xdd8b,	// (0x0002ce60) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd8b,	// (0x0002ce60) tabs_3_long_active_pane_srt_t1

0x48db,	// (0x000239b0) bg_active_tab_pane_g1_cp5_srt

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp5_srt

0x48e4,	// (0x000239b9) bg_active_tab_pane_g3_cp5_srt

0x6790,	// (0x00025865) navi_text_pane_srt_t1

0x6788,	// (0x0002585d) navi_icon_pane_srt_g1

0x4db6,	// (0x00023e8b) midp_editing_number_pane_srt

0x4c00,	// (0x00023cd5) midp_ticker_pane_srt

0x4dbe,	// (0x00023e93) midp_ticker_pane_srt_g1

0x4dc6,	// (0x00023e9b) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e847) midp_ticker_pane_srt_g

0x4dce,	// (0x00023ea3) midp_ticker_pane_srt_t1

0x6779,	// (0x0002584e) midp_editing_number_pane_t1_copy1

0x4f3a,	// (0x0002400f) listscroll_midp_pane

0x4f3a,	// (0x0002400f) midp_form_pane

0x4c6e,	// (0x00023d43) midp_info_popup_window_ParamLimits

0x4c6e,	// (0x00023d43) midp_info_popup_window

0x4040,	// (0x00023115) bg_popup_sub_pane_cp50_ParamLimits

0x4040,	// (0x00023115) bg_popup_sub_pane_cp50

0x589c,	// (0x00024971) listscroll_midp_info_pane_ParamLimits

0x589c,	// (0x00024971) listscroll_midp_info_pane

0x5884,	// (0x00024959) listscroll_form_midp_pane_ParamLimits

0x5884,	// (0x00024959) listscroll_form_midp_pane

0x5890,	// (0x00024965) scroll_bar_cp050

0xdc1b,	// (0x0002ccf0) list_midp_pane

0x7484,	// (0x00026559) signal_pane_g2_cp

0x579e,	// (0x00024873) listscroll_midp_info_pane_t1_ParamLimits

0x579e,	// (0x00024873) listscroll_midp_info_pane_t1

0x57b6,	// (0x0002488b) listscroll_midp_info_pane_t2_ParamLimits

0x57b6,	// (0x0002488b) listscroll_midp_info_pane_t2

0x57f4,	// (0x000248c9) listscroll_midp_info_pane_t3_ParamLimits

0x57f4,	// (0x000248c9) listscroll_midp_info_pane_t3

0x582e,	// (0x00024903) listscroll_midp_info_pane_t4_ParamLimits

0x582e,	// (0x00024903) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002e8f3) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002e8f3) listscroll_midp_info_pane_t

0x4102,	// (0x000231d7) scroll_pane_cp21

0x5740,	// (0x00024815) form_midp_field_choice_group_pane

0x5749,	// (0x0002481e) form_midp_field_text_pane

0x5784,	// (0x00024859) form_midp_field_time_pane

0x578c,	// (0x00024861) form_midp_gauge_slider_pane

0x5795,	// (0x0002486a) form_midp_gauge_wait_pane

0x365a,	// (0x0002272f) form_midp_image_pane

0xbbf3,	// (0x0002acc8) list_single_midp_pane_ParamLimits

0xbbf3,	// (0x0002acc8) list_single_midp_pane

0xdbf8,	// (0x0002cccd) form_midp_field_text_pane_t1

0x54ac,	// (0x00024581) input_focus_pane_cp050

0x572f,	// (0x00024804) list_midp_form_text_pane

0x56c3,	// (0x00024798) form_midp_field_choice_group_pane_t1

0x56d1,	// (0x000247a6) input_focus_pane_cp051

0x56e5,	// (0x000247ba) list_midp_choice_pane

0x365a,	// (0x0002272f) status_idle_pane

0x56a7,	// (0x0002477c) form_midp_field_time_pane_t1

0x3650,	// (0x00022725) wait_anim_pane_g2_copy1

0x56b5,	// (0x0002478a) form_midp_field_time_pane_t2

0x0001,

0x4d1e,	// (0x00023df3) aid_navinavi_width_2_pane

0xf819,	// (0x0002e8ee) form_midp_field_time_pane_t

0x365a,	// (0x0002272f) input_focus_pane_cp052

0x365a,	// (0x0002272f) bg_input_focus_pane_cp040

0x5667,	// (0x0002473c) form_midp_gauge_slider_pane_t1

0x5675,	// (0x0002474a) form_midp_gauge_slider_pane_t2

0xdbd8,	// (0x0002ccad) form_midp_gauge_slider_pane_t3

0xdbe8,	// (0x0002ccbd) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002e8e5) form_midp_gauge_slider_pane_t

0x569f,	// (0x00024774) form_midp_slider_pane

0x373a,	// (0x0002280f) bg_input_focus_pane_cp041_ParamLimits

0x373a,	// (0x0002280f) bg_input_focus_pane_cp041

0x5634,	// (0x00024709) form_midp_gauge_wait_pane_t1_ParamLimits

0x5634,	// (0x00024709) form_midp_gauge_wait_pane_t1

0x5646,	// (0x0002471b) form_midp_gauge_wait_pane_t2_ParamLimits

0x5646,	// (0x0002471b) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002e8e0) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002e8e0) form_midp_gauge_wait_pane_t

0x5658,	// (0x0002472d) form_midp_wait_pane_ParamLimits

0x5658,	// (0x0002472d) form_midp_wait_pane

0x55fe,	// (0x000246d3) form_midp_image_pane_g1

0x5607,	// (0x000246dc) form_midp_image_pane_t1

0x5616,	// (0x000246eb) form_midp_image_pane_t2

0x5625,	// (0x000246fa) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002e8d9) form_midp_image_pane_t

0x55f5,	// (0x000246ca) list_single_midp_pane_g1

0x0a19,	// (0x0001faee) list_single_midp_pane_t1

0xdbc2,	// (0x0002cc97) list_midp_form_item_pane_ParamLimits

0xdbc2,	// (0x0002cc97) list_midp_form_item_pane

0x4cc6,	// (0x00023d9b) list_midp_form_item_pane_t1

0x4cd5,	// (0x00023daa) midp_ticker_pane_g1

0x4ce1,	// (0x00023db6) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e82d) midp_ticker_pane_g

0x4ced,	// (0x00023dc2) midp_ticker_pane_t1

0x69bc,	// (0x00025a91) midp_editing_number_pane_t1

0x699a,	// (0x00025a6f) midp_editing_number_pane

0x69a9,	// (0x00025a7e) midp_ticker_pane

0x6769,	// (0x0002583e) ai_message_heading_pane

0x365a,	// (0x0002272f) bg_popup_window_pane_cp14

0x6771,	// (0x00025846) listscroll_ai_message_pane

0x66f3,	// (0x000257c8) ai_message_heading_pane_g1_ParamLimits

0x66f3,	// (0x000257c8) ai_message_heading_pane_g1

0x66ff,	// (0x000257d4) ai_message_heading_pane_g2_ParamLimits

0x66ff,	// (0x000257d4) ai_message_heading_pane_g2

0x670b,	// (0x000257e0) ai_message_heading_pane_g3_ParamLimits

0x670b,	// (0x000257e0) ai_message_heading_pane_g3

0x6717,	// (0x000257ec) ai_message_heading_pane_g4_ParamLimits

0x6717,	// (0x000257ec) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002ea1a) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002ea1a) ai_message_heading_pane_g

0x6723,	// (0x000257f8) ai_message_heading_pane_t1_ParamLimits

0x6723,	// (0x000257f8) ai_message_heading_pane_t1

0x673d,	// (0x00025812) ai_message_heading_pane_t2_ParamLimits

0x673d,	// (0x00025812) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002ea23) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002ea23) ai_message_heading_pane_t

0x674f,	// (0x00025824) bg_popup_heading_pane_cp1_ParamLimits

0x674f,	// (0x00025824) bg_popup_heading_pane_cp1

0x66e1,	// (0x000257b6) list_ai_message_pane_ParamLimits

0x66e1,	// (0x000257b6) list_ai_message_pane

0x4102,	// (0x000231d7) scroll_pane_cp10

0x667d,	// (0x00025752) list_ai_message_pane_g1

0x6685,	// (0x0002575a) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002e9f7) list_ai_message_pane_g

0x668d,	// (0x00025762) list_ai_message_pane_t1_ParamLimits

0x668d,	// (0x00025762) list_ai_message_pane_t1

0x66a2,	// (0x00025777) list_ai_message_pane_t2_ParamLimits

0x66a2,	// (0x00025777) list_ai_message_pane_t2

0x66b7,	// (0x0002578c) list_ai_message_pane_t3_ParamLimits

0x66b7,	// (0x0002578c) list_ai_message_pane_t3

0x66cc,	// (0x000257a1) list_ai_message_pane_t4_ParamLimits

0x66cc,	// (0x000257a1) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002e9fc) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002e9fc) list_ai_message_pane_t

0xdd69,	// (0x0002ce3e) cell_ai_soft_ind_pane_ParamLimits

0xdd69,	// (0x0002ce3e) cell_ai_soft_ind_pane

0x4cff,	// (0x00023dd4) cell_ai_soft_ind_pane_g1_ParamLimits

0x4cff,	// (0x00023dd4) cell_ai_soft_ind_pane_g1

0x365a,	// (0x0002272f) grid_highlight_cp1

0x4d0c,	// (0x00023de1) text_secondary_cp56_ParamLimits

0x4d0c,	// (0x00023de1) text_secondary_cp56

0x663c,	// (0x00025711) example_general_pane_ParamLimits

0x663c,	// (0x00025711) example_general_pane

0x6648,	// (0x0002571d) example_parent_pane_g1_ParamLimits

0x6648,	// (0x0002571d) example_parent_pane_g1

0x6654,	// (0x00025729) example_parent_pane_t1_ParamLimits

0x6654,	// (0x00025729) example_parent_pane_t1

0xc5a8,	// (0x0002b67d) popup_preview_text_window_ParamLimits

0xc5a8,	// (0x0002b67d) popup_preview_text_window

0x4b3d,	// (0x00023c12) list_single_pane_cp2_g4

0x3a5f,	// (0x00022b34) bg_popup_preview_window_pane_ParamLimits

0x3a5f,	// (0x00022b34) bg_popup_preview_window_pane

0x6389,	// (0x0002545e) popup_preview_text_window_t1_ParamLimits

0x6389,	// (0x0002545e) popup_preview_text_window_t1

0x63a7,	// (0x0002547c) popup_preview_text_window_t2_ParamLimits

0x63a7,	// (0x0002547c) popup_preview_text_window_t2

0x63f0,	// (0x000254c5) popup_preview_text_window_t3_ParamLimits

0x63f0,	// (0x000254c5) popup_preview_text_window_t3

0x6435,	// (0x0002550a) popup_preview_text_window_t4_ParamLimits

0x6435,	// (0x0002550a) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002e9cb) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002e9cb) popup_preview_text_window_t

0x64b3,	// (0x00025588) scroll_pane_cp11

0x5438,	// (0x0002450d) bg_popup_preview_window_pane_g1

0x6349,	// (0x0002541e) bg_popup_preview_window_pane_g2

0x6351,	// (0x00025426) bg_popup_preview_window_pane_g3

0x6359,	// (0x0002542e) bg_popup_preview_window_pane_g4

0x6361,	// (0x00025436) bg_popup_preview_window_pane_g5

0x6369,	// (0x0002543e) bg_popup_preview_window_pane_g6

0x6371,	// (0x00025446) bg_popup_preview_window_pane_g7

0x6379,	// (0x0002544e) bg_popup_preview_window_pane_g8

0x12df,	// (0x000203b4) aid_popup_width_pane

0xc524,	// (0x0002b5f9) popup_midp_note_alarm_window_ParamLimits

0xc524,	// (0x0002b5f9) popup_midp_note_alarm_window

0x3f88,	// (0x0002305d) data_form_pane_ParamLimits

0xba46,	// (0x0002ab1b) form_field_data_pane_g1

0xba50,	// (0x0002ab25) form_field_data_pane_t1_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_ParamLimits

0x06e3,	// (0x0001f7b8) data_form_wide_pane_ParamLimits

0x06f4,	// (0x0001f7c9) form_field_data_wide_pane_g1

0x0700,	// (0x0001f7d5) form_field_data_wide_pane_t1_ParamLimits

0x3d05,	// (0x00022dda) input_focus_pane_cp6_ParamLimits

0xd397,	// (0x0002c46c) input_popup_find_pane_g1_ParamLimits

0xd397,	// (0x0002c46c) input_popup_find_pane_g1

0x1845,	// (0x0002091a) aid_navi_side_left_pane

0x185a,	// (0x0002092f) aid_navi_side_right_pane

0x5d62,	// (0x00024e37) bg_popup_window_pane_cp30_ParamLimits

0x5d62,	// (0x00024e37) bg_popup_window_pane_cp30

0x5ddc,	// (0x00024eb1) popup_midp_note_alarm_window_g1_ParamLimits

0x5ddc,	// (0x00024eb1) popup_midp_note_alarm_window_g1

0x5e0c,	// (0x00024ee1) popup_midp_note_alarm_window_t1_ParamLimits

0x5e0c,	// (0x00024ee1) popup_midp_note_alarm_window_t1

0x5ead,	// (0x00024f82) popup_midp_note_alarm_window_t2_ParamLimits

0x5ead,	// (0x00024f82) popup_midp_note_alarm_window_t2

0x5f5b,	// (0x00025030) popup_midp_note_alarm_window_t3_ParamLimits

0x5f5b,	// (0x00025030) popup_midp_note_alarm_window_t3

0x5f8d,	// (0x00025062) popup_midp_note_alarm_window_t4_ParamLimits

0x5f8d,	// (0x00025062) popup_midp_note_alarm_window_t4

0x5fb3,	// (0x00025088) popup_midp_note_alarm_window_t5_ParamLimits

0x5fb3,	// (0x00025088) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002e968) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002e968) popup_midp_note_alarm_window_t

0x605f,	// (0x00025134) wait_bar_pane_cp1_ParamLimits

0x605f,	// (0x00025134) wait_bar_pane_cp1

0x365a,	// (0x0002272f) wait_anim_pane_copy1

0x365a,	// (0x0002272f) wait_border_pane_copy1

0x5a40,	// (0x00024b15) wait_border_pane_g1_copy1

0x071a,	// (0x0001f7ef) form_field_popup_pane_g1

0xba6a,	// (0x0002ab3f) form_field_popup_pane_t1_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_cp7_ParamLimits

0x3fc2,	// (0x00023097) list_form_pane_ParamLimits

0x073c,	// (0x0001f811) form_field_popup_wide_pane_g1

0x0744,	// (0x0001f819) form_field_popup_wide_pane_t1_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_cp8_ParamLimits

0x3fce,	// (0x000230a3) list_form_wide_pane_ParamLimits

0x6ae5,	// (0x00025bba) aid_size_cell_graphic_pane

0xbae9,	// (0x0002abbe) data_form_pane_t1_ParamLimits

0xbc20,	// (0x0002acf5) data_form_wide_pane_t1_ParamLimits

0xd81b,	// (0x0002c8f0) bg_status_flat_pane

0xd05b,	// (0x0002c130) title_pane_t1_ParamLimits

0x3702,	// (0x000227d7) title_pane_t2_ParamLimits

0x3728,	// (0x000227fd) title_pane_t3_ParamLimits

0xf557,	// (0x0002e62c) title_pane_t_ParamLimits

0x457d,	// (0x00023652) level_1_signal_ParamLimits

0x458a,	// (0x0002365f) level_2_signal_ParamLimits

0x4597,	// (0x0002366c) level_3_signal_ParamLimits

0x45a4,	// (0x00023679) level_4_signal_ParamLimits

0x45b1,	// (0x00023686) level_5_signal_ParamLimits

0x45be,	// (0x00023693) level_6_signal_ParamLimits

0x45cb,	// (0x000236a0) level_7_signal_ParamLimits

0x457d,	// (0x00023652) level_1_battery_ParamLimits

0x458a,	// (0x0002365f) level_2_battery_ParamLimits

0x4597,	// (0x0002366c) level_3_battery_ParamLimits

0x45a4,	// (0x00023679) level_4_battery_ParamLimits

0x45b1,	// (0x00023686) level_5_battery_ParamLimits

0x45be,	// (0x00023693) level_6_battery_ParamLimits

0x45cb,	// (0x000236a0) level_7_battery_ParamLimits

0x5c67,	// (0x00024d3c) bg_status_flat_pane_g1

0x5c6f,	// (0x00024d44) bg_status_flat_pane_g2

0x5c77,	// (0x00024d4c) bg_status_flat_pane_g3

0x5c7f,	// (0x00024d54) bg_status_flat_pane_g4

0x5c87,	// (0x00024d5c) bg_status_flat_pane_g5

0x5c8f,	// (0x00024d64) bg_status_flat_pane_g6

0x5c97,	// (0x00024d6c) bg_status_flat_pane_g7

0xd0e7,	// (0x0002c1bc) tabs_3_active_pane_t1_ParamLimits

0xd0e7,	// (0x0002c1bc) tabs_3_passive_pane_t1_ParamLimits

0xd0f9,	// (0x0002c1ce) tabs_4_active_pane_t1_ParamLimits

0xd0f9,	// (0x0002c1ce) tabs_4_1_passive_pane_t1_ParamLimits

0xd3ad,	// (0x0002c482) tabs_2_active_pane_t1_ParamLimits

0xd3ad,	// (0x0002c482) tabs_2_passive_pane_t1_ParamLimits

0x373a,	// (0x0002280f) bg_active_tab_pane_cp4_ParamLimits

0xd3bf,	// (0x0002c494) tabs_2_long_active_pane_t1_ParamLimits

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp4_ParamLimits

0x233b,	// (0x00021410) list_single_midp_graphic_pane_t1_ParamLimits

0x373a,	// (0x0002280f) bg_active_tab_pane_cp5_ParamLimits

0xd3d2,	// (0x0002c4a7) tabs_3_long_active_pane_t1_ParamLimits

0x4f3a,	// (0x0002400f) bg_passive_tab_pane_cp5_ParamLimits

0x233b,	// (0x00021410) list_single_midp_graphic_pane_t1

0xd81b,	// (0x0002c8f0) bg_status_flat_pane_ParamLimits

0x50d0,	// (0x000241a5) indicator_pane_cp2_ParamLimits

0x50d0,	// (0x000241a5) indicator_pane_cp2

0xd999,	// (0x0002ca6e) navi_pane_srt_ParamLimits

0xd999,	// (0x0002ca6e) navi_pane_srt

0x521f,	// (0x000242f4) popup_clock_digital_analogue_window_cp1

0x3817,	// (0x000228ec) indicator_pane_t1

0x4c00,	// (0x00023cd5) copy_highlight_pane

0x4c00,	// (0x00023cd5) cursor_graphics_pane

0x4c00,	// (0x00023cd5) graphic_within_text_pane

0x4c00,	// (0x00023cd5) link_highlight_pane

0x6476,	// (0x0002554b) popup_preview_text_window_t5_ParamLimits

0x6476,	// (0x0002554b) popup_preview_text_window_t5

0x4d26,	// (0x00023dfb) cursor_digital_pane

0x4d26,	// (0x00023dfb) cursor_primary_pane

0x4d37,	// (0x00023e0c) cursor_primary_small_pane

0x4d3f,	// (0x00023e14) cursor_secondary_pane

0x4d47,	// (0x00023e1c) cursor_title_pane

0x4d26,	// (0x00023dfb) link_highlight_digital_pane

0x4d2e,	// (0x00023e03) link_highlight_primary_pane

0x4d37,	// (0x00023e0c) link_highlight_primary_small_pane

0x4d3f,	// (0x00023e14) link_highlight_secondary_pane

0x4d47,	// (0x00023e1c) link_highlight_title_pane

0x4d26,	// (0x00023dfb) copy_highlight_digital_pane

0x4d26,	// (0x00023dfb) copy_highlight_primary_pane

0x4d37,	// (0x00023e0c) copy_highlight_primary_small_pane

0x4d3f,	// (0x00023e14) copy_highlight_secondary_pane

0x4d47,	// (0x00023e1c) copy_highlight_title_pane

0x4d3f,	// (0x00023e14) graphic_text_digital_pane

0x5d05,	// (0x00024dda) graphic_text_primary_pane

0x5d0e,	// (0x00024de3) graphic_text_primary_small_pane

0x4d37,	// (0x00023e0c) graphic_text_secondary_pane

0x4d26,	// (0x00023dfb) graphic_text_title_pane

0xd65f,	// (0x0002c734) cursor_primary_pane_g1

0x5cf7,	// (0x00024dcc) cursor_text_primary_t1

0xdc5b,	// (0x0002cd30) cursor_primary_small_pane_g1

0x5ce9,	// (0x00024dbe) cursor_text_primary_small_t1

0xdc51,	// (0x0002cd26) cursor_primary_small_pane_g1_copy1

0x5cd1,	// (0x00024da6) cursor_text_primary_small_t1_copy1

0x5caf,	// (0x00024d84) cursor_text_title_t1

0xdc47,	// (0x0002cd1c) cursor_title_pane_g1

0xd65f,	// (0x0002c734) cursor_digital_pane_g1

0x4d59,	// (0x00023e2e) cursor_text_digital_t1

0x5c50,	// (0x00024d25) link_highlight_primary_pane_g1

0x5c58,	// (0x00024d2d) link_highlight_primary_pane_t1

0x4d67,	// (0x00023e3c) link_highlight_primary_small_pane_g1

0x4d6f,	// (0x00023e44) link_highlight_primary_small_pane_t1

0x4d67,	// (0x00023e3c) link_highlight_secondary_pane_g1

0x4d7e,	// (0x00023e53) link_highlight_secondary_pane_t1

0x5bc4,	// (0x00024c99) link_highlight_title_pane_g1

0x5bcc,	// (0x00024ca1) link_highlight_title_pane_t1

0x5bad,	// (0x00024c82) link_highlight_digital_pane_g1

0x5bb5,	// (0x00024c8a) link_highlight_digital_pane_t1

0x5a85,	// (0x00024b5a) copy_highlight_primary_pane_g1

0x5a8d,	// (0x00024b62) copy_highlight_primary_pane_t1

0x5a5f,	// (0x00024b34) copy_highlight_primary_small_pane_g1

0x5a76,	// (0x00024b4b) copy_highlight_primary_small_pane_t1

0x4d8d,	// (0x00023e62) copy_highlight_secondary_pane_g1

0x4d95,	// (0x00023e6a) copy_highlight_secondary_pane_t1

0x5a5f,	// (0x00024b34) copy_highlight_title_pane_g1

0x5a67,	// (0x00024b3c) copy_highlight_title_pane_t1

0x5a85,	// (0x00024b5a) copy_highlight_digital_pane_g1

0x6caf,	// (0x00025d84) copy_highlight_digital_pane_t1

0x6c03,	// (0x00025cd8) graphic_text_primary_pane_g1

0x6c93,	// (0x00025d68) graphic_text_primary_pane_t1

0x6ca1,	// (0x00025d76) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002ea97) graphic_text_primary_pane_t

0x6c6f,	// (0x00025d44) graphic_text_primary_small_pane_g1

0x6c77,	// (0x00025d4c) graphic_text_primary_small_pane_t1

0x6c85,	// (0x00025d5a) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002ea92) graphic_text_primary_small_pane_t

0x6c4b,	// (0x00025d20) graphic_text_secondary_pane_g1

0x6c53,	// (0x00025d28) graphic_text_secondary_pane_t1

0x6c61,	// (0x00025d36) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002ea8d) graphic_text_secondary_pane_t

0x6c27,	// (0x00025cfc) graphic_text_title_pane_g1

0x6c2f,	// (0x00025d04) graphic_text_title_pane_t1

0x6c3d,	// (0x00025d12) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002ea88) graphic_text_title_pane_t

0x6c03,	// (0x00025cd8) graphic_text_digital_pane_g1

0x6c0b,	// (0x00025ce0) graphic_text_digital_pane_t1

0x6c19,	// (0x00025cee) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002ea83) graphic_text_digital_pane_t

0x373a,	// (0x0002280f) navi_icon_pane_srt_ParamLimits

0x373a,	// (0x0002280f) navi_icon_pane_srt

0x365a,	// (0x0002272f) navi_midp_pane_srt

0x365a,	// (0x0002272f) navi_navi_pane_srt

0x373a,	// (0x0002280f) navi_text_pane_srt_ParamLimits

0x373a,	// (0x0002280f) navi_text_pane_srt

0x6bce,	// (0x00025ca3) navi_navi_icon_text_pane_srt

0x6bd6,	// (0x00025cab) navi_navi_pane_srt_g1_ParamLimits

0x6bd6,	// (0x00025cab) navi_navi_pane_srt_g1

0x6be8,	// (0x00025cbd) navi_navi_pane_srt_g2_ParamLimits

0x6be8,	// (0x00025cbd) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002ea7e) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002ea7e) navi_navi_pane_srt_g

0x6bfa,	// (0x00025ccf) navi_navi_tabs_pane_srt

0x6bce,	// (0x00025ca3) navi_navi_text_pane_srt

0x6bce,	// (0x00025ca3) navi_navi_volume_pane_srt

0x6bbf,	// (0x00025c94) navi_navi_text_pane_srt_t1

0x26af,	// (0x00021784) navi_navi_volume_pane_srt_g1

0x26b7,	// (0x0002178c) volume_small_pane_srt_ParamLimits

0x26b7,	// (0x0002178c) volume_small_pane_srt

0x1b1c,	// (0x00020bf1) volume_small_pane_srt_g1_ParamLimits

0x1b1c,	// (0x00020bf1) volume_small_pane_srt_g1

0x1b2c,	// (0x00020c01) volume_small_pane_srt_g2_ParamLimits

0x1b2c,	// (0x00020c01) volume_small_pane_srt_g2

0x1b3d,	// (0x00020c12) volume_small_pane_srt_g3_ParamLimits

0x1b3d,	// (0x00020c12) volume_small_pane_srt_g3

0x1b4e,	// (0x00020c23) volume_small_pane_srt_g4_ParamLimits

0x1b4e,	// (0x00020c23) volume_small_pane_srt_g4

0x1b5f,	// (0x00020c34) volume_small_pane_srt_g5_ParamLimits

0x1b5f,	// (0x00020c34) volume_small_pane_srt_g5

0x1b70,	// (0x00020c45) volume_small_pane_srt_g6_ParamLimits

0x1b70,	// (0x00020c45) volume_small_pane_srt_g6

0x1b81,	// (0x00020c56) volume_small_pane_srt_g7_ParamLimits

0x1b81,	// (0x00020c56) volume_small_pane_srt_g7

0x1b92,	// (0x00020c67) volume_small_pane_srt_g8_ParamLimits

0x1b92,	// (0x00020c67) volume_small_pane_srt_g8

0x1ba3,	// (0x00020c78) volume_small_pane_srt_g9_ParamLimits

0x1ba3,	// (0x00020c78) volume_small_pane_srt_g9

0x1bb4,	// (0x00020c89) volume_small_pane_srt_g10_ParamLimits

0x1bb4,	// (0x00020c89) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e832) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e832) volume_small_pane_srt_g

0x3b08,	// (0x00022bdd) query_popup_data_pane_cp2

0x6ba5,	// (0x00025c7a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ba5,	// (0x00025c7a) navi_navi_icon_text_pane_srt_t1

0x5d05,	// (0x00024dda) navi_tabs_2_long_pane_srt

0x5d05,	// (0x00024dda) navi_tabs_2_pane_srt

0x5d05,	// (0x00024dda) navi_tabs_3_long_pane_srt

0x5d05,	// (0x00024dda) navi_tabs_3_pane_srt

0x5d05,	// (0x00024dda) navi_tabs_4_pane_srt

0x268f,	// (0x00021764) tabs_2_active_pane_srt_ParamLimits

0x268f,	// (0x00021764) tabs_2_active_pane_srt

0x269f,	// (0x00021774) tabs_2_passive_pane_srt_ParamLimits

0x269f,	// (0x00021774) tabs_2_passive_pane_srt

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp1_srt_ParamLimits

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp1_srt

0x6b71,	// (0x00025c46) bg_passive_tab_pane_g1_cp1_srt

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp1_srt

0x6b7a,	// (0x00025c4f) bg_passive_tab_pane_g3_cp1_srt

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp1_srt_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp1_srt

0x6b83,	// (0x00025c58) tabs_2_active_pane_srt_g1

0xdff9,	// (0x0002d0ce) tabs_2_active_pane_srt_t1_ParamLimits

0xdff9,	// (0x0002d0ce) tabs_2_active_pane_srt_t1

0x6b71,	// (0x00025c46) bg_active_tab_pane_g1_cp1_srt

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp1_srt

0x6b7a,	// (0x00025c4f) bg_active_tab_pane_g3_cp1_srt

0x265c,	// (0x00021731) tabs_3_active_pane_srt_ParamLimits

0x265c,	// (0x00021731) tabs_3_active_pane_srt

0x266d,	// (0x00021742) tabs_3_passive_pane_cp_srt_ParamLimits

0x266d,	// (0x00021742) tabs_3_passive_pane_cp_srt

0x267e,	// (0x00021753) tabs_3_passive_pane_srt_ParamLimits

0x267e,	// (0x00021753) tabs_3_passive_pane_srt

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp2_srt_ParamLimits

0x54ac,	// (0x00024581) bg_passive_tab_pane_cp2_srt

0x4da4,	// (0x00023e79) bg_passive_tab_pane_g1_cp2_srt

0x4851,	// (0x00023926) bg_passive_tab_pane_g2_cp2_srt

0x4dad,	// (0x00023e82) bg_passive_tab_pane_g3_cp2_srt

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp2_srt_ParamLimits

0x39b5,	// (0x00022a8a) bg_active_tab_pane_cp2_srt

0x6b57,	// (0x00025c2c) tabs_3_active_pane_srt_g1

0xdfe3,	// (0x0002d0b8) tabs_3_active_pane_srt_t1_ParamLimits

0xdfe3,	// (0x0002d0b8) tabs_3_active_pane_srt_t1

0x4da4,	// (0x00023e79) bg_active_tab_pane_g1_cp2_srt

0x4851,	// (0x00023926) bg_active_tab_pane_g2_cp2_srt

0x4dad,	// (0x00023e82) bg_active_tab_pane_g3_cp2_srt

0x2614,	// (0x000216e9) tabs_4_active_pane_srt_ParamLimits

0x2614,	// (0x000216e9) tabs_4_active_pane_srt

0x2626,	// (0x000216fb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2626,	// (0x000216fb) tabs_4_passive_pane_cp2_srt

0x1d17,	// (0x00020dec) aid_size_cell_toolbar

0x681b,	// (0x000258f0) main_idle_act_pane_ParamLimits

0x1eb0,	// (0x00020f85) popup_large_graphic_colour_window_ParamLimits

0xc82e,	// (0x0002b903) popup_toolbar_window_ParamLimits

0xc82e,	// (0x0002b903) popup_toolbar_window

0x69cb,	// (0x00025aa0) list_single_graphic_2heading_pane_ParamLimits

0x69cb,	// (0x00025aa0) list_single_graphic_2heading_pane

0x432f,	// (0x00023404) aid_size_cell_apps_grid_lsc_pane

0x4341,	// (0x00023416) aid_size_cell_apps_grid_prt_pane

0x4f3a,	// (0x0002400f) bg_wml_button_pane_cp1_ParamLimits

0x4f3a,	// (0x0002400f) bg_wml_button_pane_cp1

0xdbf8,	// (0x0002cccd) form_midp_field_text_pane_t1_ParamLimits

0x54ac,	// (0x00024581) input_focus_pane_cp050_ParamLimits

0x572f,	// (0x00024804) list_midp_form_text_pane_ParamLimits

0x56d1,	// (0x000247a6) input_focus_pane_cp051_ParamLimits

0x56e5,	// (0x000247ba) list_midp_choice_pane_ParamLimits

0xdb8c,	// (0x0002cc61) list_single_2graphic_pane_cp3_ParamLimits

0xdb8c,	// (0x0002cc61) list_single_2graphic_pane_cp3

0xdba1,	// (0x0002cc76) list_single_midp_graphic_pane_ParamLimits

0xdba1,	// (0x0002cc76) list_single_midp_graphic_pane

0x090f,	// (0x0001f9e4) list_single_graphic_2heading_pane_g1_ParamLimits

0x090f,	// (0x0001f9e4) list_single_graphic_2heading_pane_g1

0x0245,	// (0x0001f31a) list_single_graphic_2heading_pane_g4_ParamLimits

0x0245,	// (0x0001f31a) list_single_graphic_2heading_pane_g4

0x0251,	// (0x0001f326) list_single_graphic_2heading_pane_g5_ParamLimits

0x0251,	// (0x0001f326) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e885) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e885) list_single_graphic_2heading_pane_g

0x091b,	// (0x0001f9f0) list_single_graphic_2heading_pane_t1_ParamLimits

0x091b,	// (0x0001f9f0) list_single_graphic_2heading_pane_t1

0x092f,	// (0x0001fa04) list_single_graphic_2heading_pane_t2_ParamLimits

0x092f,	// (0x0001fa04) list_single_graphic_2heading_pane_t2

0x0949,	// (0x0001fa1e) list_single_graphic_2heading_pane_t3_ParamLimits

0x0949,	// (0x0001fa1e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e88c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e88c) list_single_graphic_2heading_pane_t

0x5376,	// (0x0002444b) bg_popup_sub_pane_cp2

0x53a0,	// (0x00024475) grid_toobar_pane

0x22c0,	// (0x00021395) cell_toolbar_pane_ParamLimits

0x22c0,	// (0x00021395) cell_toolbar_pane

0x53dc,	// (0x000244b1) cell_toolbar_pane_g1_ParamLimits

0x53dc,	// (0x000244b1) cell_toolbar_pane_g1

0x53f0,	// (0x000244c5) cell_toolbar_pane_g2_ParamLimits

0x53f0,	// (0x000244c5) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002e893) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002e893) cell_toolbar_pane_g

0x5412,	// (0x000244e7) grid_highlight_pane_cp2_ParamLimits

0x5412,	// (0x000244e7) grid_highlight_pane_cp2

0x542c,	// (0x00024501) toolbar_button_pane

0x5438,	// (0x0002450d) toolbar_button_pane_g1

0x5440,	// (0x00024515) toolbar_button_pane_g2

0x5448,	// (0x0002451d) toolbar_button_pane_g3

0x5450,	// (0x00024525) toolbar_button_pane_g4

0x5458,	// (0x0002452d) toolbar_button_pane_g5

0x5460,	// (0x00024535) toolbar_button_pane_g6

0x5468,	// (0x0002453d) toolbar_button_pane_g7

0x5470,	// (0x00024545) toolbar_button_pane_g8

0x5478,	// (0x0002454d) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002e898) toolbar_button_pane_g

0x22f8,	// (0x000213cd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x22f8,	// (0x000213cd) list_single_2graphic_pane_g1_cp3

0xc886,	// (0x0002b95b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc886,	// (0x0002b95b) list_single_2graphic_pane_g2_cp3

0x4a3c,	// (0x00023b11) list_single_2graphic_pane_g3_cp3

0x2315,	// (0x000213ea) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2315,	// (0x000213ea) list_single_2graphic_pane_g4_cp3

0x2321,	// (0x000213f6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2321,	// (0x000213f6) list_single_2graphic_pane_t1_cp3

0x4a30,	// (0x00023b05) list_single_midp_graphic_pane_g2_ParamLimits

0x4a30,	// (0x00023b05) list_single_midp_graphic_pane_g2

0x1d1f,	// (0x00020df4) aid_zoom_text_primary

0x08e3,	// (0x0001f9b8) aid_zoom_text_secondary

0xd6b7,	// (0x0002c78c) status_small_pane_g7_ParamLimits

0xd6b7,	// (0x0002c78c) status_small_pane_g7

0xd6da,	// (0x0002c7af) status_small_pane_t1_ParamLimits

0xd037,	// (0x0002c10c) title_pane_g2

0x0003,

0xf54e,	// (0x0002e623) title_pane_g

0xd2af,	// (0x0002c384) aid_size_cell_colour_1_pane_ParamLimits

0xd2af,	// (0x0002c384) aid_size_cell_colour_1_pane

0xd2c3,	// (0x0002c398) aid_size_cell_colour_2_pane_ParamLimits

0xd2c3,	// (0x0002c398) aid_size_cell_colour_2_pane

0xd2d7,	// (0x0002c3ac) aid_size_cell_colour_3_pane_ParamLimits

0xd2d7,	// (0x0002c3ac) aid_size_cell_colour_3_pane

0xd2eb,	// (0x0002c3c0) aid_size_cell_colour_4_pane_ParamLimits

0xd2eb,	// (0x0002c3c0) aid_size_cell_colour_4_pane

0x1781,	// (0x00020856) title_pane_stacon_g1_ParamLimits

0x1781,	// (0x00020856) title_pane_stacon_g1

0x5ae4,	// (0x00024bb9) popup_note_wait_window_g3_ParamLimits

0x5ae4,	// (0x00024bb9) popup_note_wait_window_g3

0x5b5a,	// (0x00024c2f) popup_note_wait_window_t5_ParamLimits

0x5b5a,	// (0x00024c2f) popup_note_wait_window_t5

0x365a,	// (0x0002272f) main_feb_china_hwr_fs_writing_pane

0xc24a,	// (0x0002b31f) popup_feb_china_hwr_fs_window_ParamLimits

0xc24a,	// (0x0002b31f) popup_feb_china_hwr_fs_window

0xc897,	// (0x0002b96c) aid_size_cell_hwr_fs_ParamLimits

0xc897,	// (0x0002b96c) aid_size_cell_hwr_fs

0x54ac,	// (0x00024581) bg_popup_sub_pane_cp3_ParamLimits

0x54ac,	// (0x00024581) bg_popup_sub_pane_cp3

0xc8ac,	// (0x0002b981) grid_hwr_fs_pane_ParamLimits

0xc8ac,	// (0x0002b981) grid_hwr_fs_pane

0x237e,	// (0x00021453) linegrid_hwr_fs_pane_ParamLimits

0x237e,	// (0x00021453) linegrid_hwr_fs_pane

0xc8c4,	// (0x0002b999) cell_hwr_fs_pane_ParamLimits

0xc8c4,	// (0x0002b999) cell_hwr_fs_pane

0x54b8,	// (0x0002458d) linegrid_hwr_fs_pane_g1_ParamLimits

0x54b8,	// (0x0002458d) linegrid_hwr_fs_pane_g1

0xdb60,	// (0x0002cc35) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb60,	// (0x0002cc35) linegrid_hwr_fs_pane_g2

0x54d6,	// (0x000245ab) linegrid_hwr_fs_pane_g3_ParamLimits

0x54d6,	// (0x000245ab) linegrid_hwr_fs_pane_g3

0x23b0,	// (0x00021485) linegrid_hwr_fs_pane_g4_ParamLimits

0x23b0,	// (0x00021485) linegrid_hwr_fs_pane_g4

0x23ca,	// (0x0002149f) linegrid_hwr_fs_pane_g5_ParamLimits

0x23ca,	// (0x0002149f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002e8be) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002e8be) linegrid_hwr_fs_pane_g

0x54e2,	// (0x000245b7) cell_hwr_fs_pane_g1_ParamLimits

0x54e2,	// (0x000245b7) cell_hwr_fs_pane_g1

0x52ad,	// (0x00024382) cell_hwr_fs_pane_g2_ParamLimits

0x52ad,	// (0x00024382) cell_hwr_fs_pane_g2

0xdb72,	// (0x0002cc47) cell_hwr_fs_pane_g3_ParamLimits

0xdb72,	// (0x0002cc47) cell_hwr_fs_pane_g3

0xdb7f,	// (0x0002cc54) cell_hwr_fs_pane_g4_ParamLimits

0xdb7f,	// (0x0002cc54) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002e8c9) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002e8c9) cell_hwr_fs_pane_g

0xc8ea,	// (0x0002b9bf) cell_hwr_fs_pane_t1

0x365a,	// (0x0002272f) grid_highlight_pane_cp6

0x365a,	// (0x0002272f) main_idle_act2_pane

0x40e9,	// (0x000231be) aid_inside_area_popup_secondary

0xdc6d,	// (0x0002cd42) aid_inside_area_window_primary_ParamLimits

0xdc6d,	// (0x0002cd42) aid_inside_area_window_primary

0x6cbe,	// (0x00025d93) ai2_news_ticker_pane

0x6cc6,	// (0x00025d9b) aid_size_cell_ai1_link_ParamLimits

0x6cc6,	// (0x00025d9b) aid_size_cell_ai1_link

0x6ce0,	// (0x00025db5) popup_ai2_data_window_ParamLimits

0x6ce0,	// (0x00025db5) popup_ai2_data_window

0x6cf4,	// (0x00025dc9) popup_ai2_link_window_ParamLimits

0x6cf4,	// (0x00025dc9) popup_ai2_link_window

0x54ac,	// (0x00024581) bg_popup_sub_pane_cp4_ParamLimits

0x54ac,	// (0x00024581) bg_popup_sub_pane_cp4

0x6d08,	// (0x00025ddd) grid_ai2_link_pane_ParamLimits

0x6d08,	// (0x00025ddd) grid_ai2_link_pane

0x6d1f,	// (0x00025df4) popup_ai2_link_window_g1_ParamLimits

0x6d1f,	// (0x00025df4) popup_ai2_link_window_g1

0x6d2b,	// (0x00025e00) popup_ai2_link_window_g2_ParamLimits

0x6d2b,	// (0x00025e00) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002ea9c) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002ea9c) popup_ai2_link_window_g

0x6d3a,	// (0x00025e0f) ai2_mp_button_pane

0x6d42,	// (0x00025e17) ai2_mp_volume_pane

0x56d1,	// (0x000247a6) bg_popup_sub_pane_cp5_ParamLimits

0x56d1,	// (0x000247a6) bg_popup_sub_pane_cp5

0x6d4a,	// (0x00025e1f) heading_ai2_gene_pane_ParamLimits

0x6d4a,	// (0x00025e1f) heading_ai2_gene_pane

0x6d56,	// (0x00025e2b) list_ai2_gene_pane_ParamLimits

0x6d56,	// (0x00025e2b) list_ai2_gene_pane

0x6d9e,	// (0x00025e73) cell_ai2_link_pane_ParamLimits

0x6d9e,	// (0x00025e73) cell_ai2_link_pane

0x6db4,	// (0x00025e89) cell_ai2_link_pane_g1

0x365a,	// (0x0002272f) grid_highlight_pane_cp7

0x26cc,	// (0x000217a1) ai2_mp_volume_pane_g1

0x6e85,	// (0x00025f5a) ai2_mp_volume_pane_g2

0x6dfa,	// (0x00025ecf) list_ai2_gene_pane_t1

0x6e8d,	// (0x00025f62) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002eab5) ai2_mp_volume_pane_g

0x26d4,	// (0x000217a9) volume_small_pane_cp3

0x6e95,	// (0x00025f6a) aid_size_cell_ai2_button

0x6e9d,	// (0x00025f72) grid_ai2_button_pane

0x6ea6,	// (0x00025f7b) cell_ai2_button_pane_ParamLimits

0x6ea6,	// (0x00025f7b) cell_ai2_button_pane

0x3650,	// (0x00022725) cell_ai2_button_pane_g1

0x365a,	// (0x0002272f) grid_highlight_pane_cp8

0x6e45,	// (0x00025f1a) ai2_gene_pane_t1_ParamLimits

0x6e45,	// (0x00025f1a) ai2_gene_pane_t1

0xc1bc,	// (0x0002b291) aid_height_parent_landscape

0xddb8,	// (0x0002ce8d) aid_height_set_list

0x681b,	// (0x000258f0) aid_size_parent

0x6ae5,	// (0x00025bba) aid_size_cell_graphic_pane_ParamLimits

0x6d66,	// (0x00025e3b) popup_ai2_data_window_g1_ParamLimits

0x6d66,	// (0x00025e3b) popup_ai2_data_window_g1

0x6d72,	// (0x00025e47) ai2_news_ticker_pane_g1

0x6d7a,	// (0x00025e4f) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002eaa1) ai2_news_ticker_pane_g

0x6d82,	// (0x00025e57) ai2_news_ticker_pane_t1

0x6d90,	// (0x00025e65) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002eaa6) ai2_news_ticker_pane_t

0x6dbd,	// (0x00025e92) heading_ai2_gene_pane_g1

0x6dc5,	// (0x00025e9a) heading_ai2_gene_pane_t1_ParamLimits

0x6dc5,	// (0x00025e9a) heading_ai2_gene_pane_t1

0x6dda,	// (0x00025eaf) list_highlight_pane_cp6

0x6de2,	// (0x00025eb7) ai2_gene_pane_ParamLimits

0x6de2,	// (0x00025eb7) ai2_gene_pane

0x6e08,	// (0x00025edd) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002eaab) list_ai2_gene_pane_t

0x6e16,	// (0x00025eeb) list_highlight_pane_cp8_ParamLimits

0x6e16,	// (0x00025eeb) list_highlight_pane_cp8

0x6e27,	// (0x00025efc) ai2_gene_pane_g1_ParamLimits

0x6e27,	// (0x00025efc) ai2_gene_pane_g1

0x6e39,	// (0x00025f0e) ai2_gene_pane_g2_ParamLimits

0x6e39,	// (0x00025f0e) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002eab0) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002eab0) ai2_gene_pane_g

0x3f2a,	// (0x00022fff) scroll_pane_cp12

0xc17b,	// (0x0002b250) control_pane_t3_ParamLimits

0xc17b,	// (0x0002b250) control_pane_t3

0xd6cb,	// (0x0002c7a0) status_small_pane_g8_ParamLimits

0xd6cb,	// (0x0002c7a0) status_small_pane_g8

0xc2dd,	// (0x0002b3b2) popup_find_window_ParamLimits

0xc55e,	// (0x0002b633) popup_note_image_window_ParamLimits

0x090f,	// (0x0001f9e4) list_double2_graphic_pane_vc_g1_ParamLimits

0x090f,	// (0x0001f9e4) list_double2_graphic_pane_vc_g1

0x0245,	// (0x0001f31a) list_double2_graphic_pane_vc_g2_ParamLimits

0x0245,	// (0x0001f31a) list_double2_graphic_pane_vc_g2

0x0251,	// (0x0001f326) list_double2_graphic_pane_vc_g3_ParamLimits

0x0251,	// (0x0001f326) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e885) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e885) list_double2_graphic_pane_vc_g

0x0961,	// (0x0001fa36) list_double2_graphic_pane_vc_t1_ParamLimits

0x0961,	// (0x0001fa36) list_double2_graphic_pane_vc_t1

0x0245,	// (0x0001f31a) list_single_heading_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_heading_pane_vc_g1

0x0251,	// (0x0001f326) list_single_heading_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_heading_pane_vc_g

0x0977,	// (0x0001fa4c) list_single_heading_pane_vc_t1_ParamLimits

0x0977,	// (0x0001fa4c) list_single_heading_pane_vc_t1

0x098d,	// (0x0001fa62) list_single_heading_pane_vc_t2_ParamLimits

0x098d,	// (0x0001fa62) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002e8ad) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002e8ad) list_single_heading_pane_vc_t

0x09a9,	// (0x0001fa7e) list_setting_number_pane_vc_g1_ParamLimits

0x09a9,	// (0x0001fa7e) list_setting_number_pane_vc_g1

0x09b5,	// (0x0001fa8a) list_setting_number_pane_vc_g2_ParamLimits

0x09b5,	// (0x0001fa8a) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e8b2) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e8b2) list_setting_number_pane_vc_g

0x09c1,	// (0x0001fa96) list_setting_number_pane_vc_t1_ParamLimits

0x09c1,	// (0x0001fa96) list_setting_number_pane_vc_t1

0x09d5,	// (0x0001faaa) list_setting_number_pane_vc_t2_ParamLimits

0x09d5,	// (0x0001faaa) list_setting_number_pane_vc_t2

0x09ef,	// (0x0001fac4) list_setting_number_pane_vc_t3_ParamLimits

0x09ef,	// (0x0001fac4) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002e8b7) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002e8b7) list_setting_number_pane_vc_t

0x0a09,	// (0x0001fade) set_value_pane_vc_ParamLimits

0x0a09,	// (0x0001fade) set_value_pane_vc

0x69cb,	// (0x00025aa0) list_double2_graphic_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double2_graphic_pane_vc

0x69cb,	// (0x00025aa0) list_double2_large_graphic_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double2_large_graphic_pane_vc

0x69cb,	// (0x00025aa0) list_double2_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double2_pane_vc

0x69cb,	// (0x00025aa0) list_double_graphic_heading_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_graphic_heading_pane_vc

0x69cb,	// (0x00025aa0) list_double_graphic_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_graphic_pane_vc

0x69cb,	// (0x00025aa0) list_double_heading_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_heading_pane_vc

0x0aed,	// (0x0001fbc2) list_double_large_graphic_pane_vc_ParamLimits

0x0aed,	// (0x0001fbc2) list_double_large_graphic_pane_vc

0x69cb,	// (0x00025aa0) list_double_number_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_number_pane_vc

0x69cb,	// (0x00025aa0) list_double_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_pane_vc

0x69cb,	// (0x00025aa0) list_double_time_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_double_time_pane_vc

0x69cb,	// (0x00025aa0) list_setting_number_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_setting_number_pane_vc

0x69cb,	// (0x00025aa0) list_setting_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_setting_pane_vc

0x69cb,	// (0x00025aa0) list_single_graphic_heading_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_single_graphic_heading_pane_vc

0x69cb,	// (0x00025aa0) list_single_heading_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_single_heading_pane_vc

0x69cb,	// (0x00025aa0) list_single_number_heading_pane_vc_ParamLimits

0x69cb,	// (0x00025aa0) list_single_number_heading_pane_vc

0x0bdf,	// (0x0001fcb4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0bdf,	// (0x0001fcb4) list_double_graphic_heading_pane_vc_g1

0x0245,	// (0x0001f31a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0245,	// (0x0001f31a) list_double_graphic_heading_pane_vc_g2

0x0251,	// (0x0001f326) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0251,	// (0x0001f326) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e7,	// (0x0002eabc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e7,	// (0x0002eabc) list_double_graphic_heading_pane_vc_g

0x0beb,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0beb,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_t1

0x0c07,	// (0x0001fcdc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c07,	// (0x0001fcdc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0002eac3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0002eac3) list_double_graphic_heading_pane_vc_t

0x09a9,	// (0x0001fa7e) list_setting_pane_vc_g1_ParamLimits

0x09a9,	// (0x0001fa7e) list_setting_pane_vc_g1

0x09b5,	// (0x0001fa8a) list_setting_pane_vc_g2_ParamLimits

0x09b5,	// (0x0001fa8a) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e8b2) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e8b2) list_setting_pane_vc_g

0x0c1f,	// (0x0001fcf4) list_setting_pane_vc_t1_ParamLimits

0x0c1f,	// (0x0001fcf4) list_setting_pane_vc_t1

0x0c39,	// (0x0001fd0e) list_setting_pane_vc_t2_ParamLimits

0x0c39,	// (0x0001fd0e) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0002eb06) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0002eb06) list_setting_pane_vc_t

0x0a09,	// (0x0001fade) set_value_pane_cp_vc_ParamLimits

0x0a09,	// (0x0001fade) set_value_pane_cp_vc

0x0245,	// (0x0001f31a) list_single_number_heading_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_single_number_heading_pane_vc_g1

0x0251,	// (0x0001f326) list_single_number_heading_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_single_number_heading_pane_vc_g

0x0977,	// (0x0001fa4c) list_single_number_heading_pane_vc_t1_ParamLimits

0x0977,	// (0x0001fa4c) list_single_number_heading_pane_vc_t1

0x0c51,	// (0x0001fd26) list_single_number_heading_pane_vc_t2_ParamLimits

0x0c51,	// (0x0001fd26) list_single_number_heading_pane_vc_t2

0x0c65,	// (0x0001fd3a) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c65,	// (0x0001fd3a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0002eb0b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0002eb0b) list_single_number_heading_pane_vc_t

0x090f,	// (0x0001f9e4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x090f,	// (0x0001f9e4) list_single_graphic_heading_pane_vc_g1

0x0245,	// (0x0001f31a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0245,	// (0x0001f31a) list_single_graphic_heading_pane_vc_g4

0x0251,	// (0x0001f326) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0251,	// (0x0001f326) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002e885) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e885) list_single_graphic_heading_pane_vc_g

0x0977,	// (0x0001fa4c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0977,	// (0x0001fa4c) list_single_graphic_heading_pane_vc_t1

0x0c77,	// (0x0001fd4c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c77,	// (0x0001fd4c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002eb12) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002eb12) list_single_graphic_heading_pane_vc_t

0x0245,	// (0x0001f31a) list_double2_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_double2_pane_vc_g1

0x0251,	// (0x0001f326) list_double2_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_double2_pane_vc_g

0x0c8b,	// (0x0001fd60) list_double2_pane_vc_t1_ParamLimits

0x0c8b,	// (0x0001fd60) list_double2_pane_vc_t1

0x0ca1,	// (0x0001fd76) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0ca1,	// (0x0001fd76) list_double2_large_graphic_pane_vc_g1

0x0245,	// (0x0001f31a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0245,	// (0x0001f31a) list_double2_large_graphic_pane_vc_g2

0x0251,	// (0x0001f326) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0251,	// (0x0001f326) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002e6ba) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002e6ba) list_double2_large_graphic_pane_vc_g

0x0cad,	// (0x0001fd82) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0cad,	// (0x0001fd82) list_double2_large_graphic_pane_vc_t1

0x0cc3,	// (0x0001fd98) list_double_time_pane_vc_g1_ParamLimits

0x0cc3,	// (0x0001fd98) list_double_time_pane_vc_g1

0x0ccf,	// (0x0001fda4) list_double_time_pane_vc_g2_ParamLimits

0x0ccf,	// (0x0001fda4) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0002eb17) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0002eb17) list_double_time_pane_vc_g

0x0cdb,	// (0x0001fdb0) list_double_time_pane_vc_t1_ParamLimits

0x0cdb,	// (0x0001fdb0) list_double_time_pane_vc_t1

0x0cf9,	// (0x0001fdce) list_double_time_pane_vc_t2_ParamLimits

0x0cf9,	// (0x0001fdce) list_double_time_pane_vc_t2

0x0d43,	// (0x0001fe18) list_double_time_pane_vc_t3_ParamLimits

0x0d43,	// (0x0001fe18) list_double_time_pane_vc_t3

0x0d55,	// (0x0001fe2a) list_double_time_pane_vc_t4_ParamLimits

0x0d55,	// (0x0001fe2a) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0002eb1c) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0002eb1c) list_double_time_pane_vc_t

0x0245,	// (0x0001f31a) list_double_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_double_pane_vc_g1

0x0251,	// (0x0001f326) list_double_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_double_pane_vc_g

0x0d69,	// (0x0001fe3e) list_double_pane_vc_t1_ParamLimits

0x0d69,	// (0x0001fe3e) list_double_pane_vc_t1

0x0d7b,	// (0x0001fe50) list_double_pane_vc_t2_ParamLimits

0x0d7b,	// (0x0001fe50) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0002eb25) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0002eb25) list_double_pane_vc_t

0x0245,	// (0x0001f31a) list_double_number_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_double_number_pane_vc_g1

0x0251,	// (0x0001f326) list_double_number_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_double_number_pane_vc_g

0x0d93,	// (0x0001fe68) list_double_number_pane_vc_t1_ParamLimits

0x0d93,	// (0x0001fe68) list_double_number_pane_vc_t1

0x0da5,	// (0x0001fe7a) list_double_number_pane_vc_t2_ParamLimits

0x0da5,	// (0x0001fe7a) list_double_number_pane_vc_t2

0x0db7,	// (0x0001fe8c) list_double_number_pane_vc_t3_ParamLimits

0x0db7,	// (0x0001fe8c) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0002eb2a) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0002eb2a) list_double_number_pane_vc_t

0x0dcf,	// (0x0001fea4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0dcf,	// (0x0001fea4) list_double_large_graphic_pane_vc_g1

0x0deb,	// (0x0001fec0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0deb,	// (0x0001fec0) list_double_large_graphic_pane_vc_g2

0x0dff,	// (0x0001fed4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0dff,	// (0x0001fed4) list_double_large_graphic_pane_vc_g3

0x0e0e,	// (0x0001fee3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0e0e,	// (0x0001fee3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0002eb31) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0002eb31) list_double_large_graphic_pane_vc_g

0x0e1d,	// (0x0001fef2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0e1d,	// (0x0001fef2) list_double_large_graphic_pane_vc_t1

0x0e37,	// (0x0001ff0c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0e37,	// (0x0001ff0c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0002eb3a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0002eb3a) list_double_large_graphic_pane_vc_t

0x0245,	// (0x0001f31a) list_double_heading_pane_vc_g1_ParamLimits

0x0245,	// (0x0001f31a) list_double_heading_pane_vc_g1

0x0251,	// (0x0001f326) list_double_heading_pane_vc_g2_ParamLimits

0x0251,	// (0x0001f326) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e69d) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e69d) list_double_heading_pane_vc_g

0x0e59,	// (0x0001ff2e) list_double_heading_pane_vc_t1_ParamLimits

0x0e59,	// (0x0001ff2e) list_double_heading_pane_vc_t1

0x0977,	// (0x0001fa4c) list_double_heading_pane_vc_t2_ParamLimits

0x0977,	// (0x0001fa4c) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002eb3f) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002eb3f) list_double_heading_pane_vc_t

0x0e6d,	// (0x0001ff42) list_double_graphic_pane_vc_g1_ParamLimits

0x0e6d,	// (0x0001ff42) list_double_graphic_pane_vc_g1

0x0e80,	// (0x0001ff55) list_double_graphic_pane_vc_g2_ParamLimits

0x0e80,	// (0x0001ff55) list_double_graphic_pane_vc_g2

0x0245,	// (0x0001f31a) list_double_graphic_pane_vc_g3_ParamLimits

0x0245,	// (0x0001f31a) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0002eb44) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002eb44) list_double_graphic_pane_vc_g

0x0e9d,	// (0x0001ff72) list_double_graphic_pane_vc_t1_ParamLimits

0x0e9d,	// (0x0001ff72) list_double_graphic_pane_vc_t1

0x0ebb,	// (0x0001ff90) list_double_graphic_pane_vc_t2_ParamLimits

0x0ebb,	// (0x0001ff90) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002eb4d) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002eb4d) list_double_graphic_pane_vc_t

0x12eb,	// (0x000203c0) aid_size_cell_fastswap

0xbe4f,	// (0x0002af24) aid_size_cell_touch_ParamLimits

0xbe4f,	// (0x0002af24) aid_size_cell_touch

0x154e,	// (0x00020623) popup_fast_swap_wide_window_ParamLimits

0x154e,	// (0x00020623) popup_fast_swap_wide_window

0xbfff,	// (0x0002b0d4) touch_pane_ParamLimits

0xbfff,	// (0x0002b0d4) touch_pane

0x3f80,	// (0x00023055) button_value_adjust_pane_cp2

0x0615,	// (0x0001f6ea) button_value_adjust_pane_cp4

0x0635,	// (0x0001f70a) form_field_data_pane_cp2

0xba07,	// (0x0002aadc) form_field_data_wide_pane_cp2

0x43fc,	// (0x000234d1) bg_scroll_pane_ParamLimits

0x18e4,	// (0x000209b9) scroll_handle_pane_ParamLimits

0x18f8,	// (0x000209cd) scroll_sc2_down_pane_ParamLimits

0x18f8,	// (0x000209cd) scroll_sc2_down_pane

0x442d,	// (0x00023502) scroll_sc2_up_pane_ParamLimits

0x442d,	// (0x00023502) scroll_sc2_up_pane

0xe121,	// (0x0002d1f6) grid_wheel_folder_pane_g1_ParamLimits

0xe121,	// (0x0002d1f6) grid_wheel_folder_pane_g1

0x1ab4,	// (0x00020b89) clock_nsta_pane_cp2_ParamLimits

0x1ab4,	// (0x00020b89) clock_nsta_pane_cp2

0x4f3a,	// (0x0002400f) listscroll_midp_pane_ParamLimits

0xd5c2,	// (0x0002c697) midp_canvas_pane

0x4eec,	// (0x00023fc1) nsta_clock_indic_pane

0x4f20,	// (0x00023ff5) listscroll_form_pane_vc

0x4f28,	// (0x00023ffd) listscroll_set_pane_vc_ParamLimits

0x4f28,	// (0x00023ffd) listscroll_set_pane_vc

0xd843,	// (0x0002c918) clock_nsta_pane

0xd86d,	// (0x0002c942) indicator_nsta_pane

0x5376,	// (0x0002444b) bg_popup_sub_pane_cp2_ParamLimits

0x538a,	// (0x0002445f) find_pane_cp2_ParamLimits

0x538a,	// (0x0002445f) find_pane_cp2

0x53a0,	// (0x00024475) grid_toobar_pane_ParamLimits

0x5480,	// (0x00024555) list_form_gen_pane_vc_ParamLimits

0x5480,	// (0x00024555) list_form_gen_pane_vc

0x5496,	// (0x0002456b) scroll_pane_cp8_vc_ParamLimits

0x5496,	// (0x0002456b) scroll_pane_cp8_vc

0x5512,	// (0x000245e7) data_form_wide_pane_vc_ParamLimits

0x5512,	// (0x000245e7) data_form_wide_pane_vc

0x551e,	// (0x000245f3) form_field_data_wide_pane_vc_g1

0x5526,	// (0x000245fb) form_field_data_wide_pane_vc_t1_ParamLimits

0x5526,	// (0x000245fb) form_field_data_wide_pane_vc_t1

0x3f94,	// (0x00023069) input_focus_pane_cp6_vc_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_cp6_vc

0xdc1b,	// (0x0002ccf0) list_midp_pane_ParamLimits

0x6b4b,	// (0x00025c20) scroll_pane_cp16_ParamLimits

0x6b4b,	// (0x00025c20) scroll_pane_cp16

0x58be,	// (0x00024993) button_value_adjust_pane_ParamLimits

0x58be,	// (0x00024993) button_value_adjust_pane

0xddc9,	// (0x0002ce9e) button_value_adjust_pane_cp6_ParamLimits

0xddc9,	// (0x0002ce9e) button_value_adjust_pane_cp6

0xdedf,	// (0x0002cfb4) settings_code_pane_cp_ParamLimits

0xdedf,	// (0x0002cfb4) settings_code_pane_cp

0x3650,	// (0x00022725) cell_touch_pane_g1

0x3650,	// (0x00022725) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e7d8) cell_touch_pane_g

0xe00f,	// (0x0002d0e4) cell_touch_pane_cp_ParamLimits

0xe00f,	// (0x0002d0e4) cell_touch_pane_cp

0xe02b,	// (0x0002d100) cell_touch_pane_ParamLimits

0xe02b,	// (0x0002d100) cell_touch_pane

0x3650,	// (0x00022725) scroll_sc2_down_pane_g1

0x3650,	// (0x00022725) scroll_sc2_up_pane_g1

0x365a,	// (0x0002272f) bg_set_opt_pane_cp4_vc

0x6ed9,	// (0x00025fae) list_set_graphic_pane_vc_g1_ParamLimits

0x6ed9,	// (0x00025fae) list_set_graphic_pane_vc_g1

0x4750,	// (0x00023825) list_set_graphic_pane_vc_g2_ParamLimits

0x4750,	// (0x00023825) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0002eac8) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0002eac8) list_set_graphic_pane_vc_g

0x6ee5,	// (0x00025fba) text_primary_small_cp13_vc_ParamLimits

0x6ee5,	// (0x00025fba) text_primary_small_cp13_vc

0x6efd,	// (0x00025fd2) list_set_graphic_pane_vc_ParamLimits

0x6efd,	// (0x00025fd2) list_set_graphic_pane_vc

0x365a,	// (0x0002272f) input_focus_pane_cp2_vc

0x3650,	// (0x00022725) setting_code_pane_vc_g1

0x3785,	// (0x0002285a) setting_code_pane_vc_t1

0x6f11,	// (0x00025fe6) set_text_pane_vc_t1_ParamLimits

0x6f11,	// (0x00025fe6) set_text_pane_vc_t1

0x365a,	// (0x0002272f) input_focus_pane_cp1_vc

0x6f2e,	// (0x00026003) list_set_text_pane_vc

0x3650,	// (0x00022725) setting_text_pane_vc_g1

0x365a,	// (0x0002272f) bg_set_opt_pane_cp2_vc

0x377c,	// (0x00022851) setting_slider_graphic_pane_vc_g1

0x6f38,	// (0x0002600d) setting_slider_graphic_pane_vc_t1

0x6f48,	// (0x0002601d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0002eacd) setting_slider_graphic_pane_vc_t

0x6f58,	// (0x0002602d) slider_set_pane_cp_vc

0x6f60,	// (0x00026035) slider_set_pane_vc_g1

0x6f69,	// (0x0002603e) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0002ead2) slider_set_pane_vc_g

0x3fef,	// (0x000230c4) set_opt_bg_pane_g1_copy1

0x3ff7,	// (0x000230cc) set_opt_bg_pane_g2_copy1

0x6f95,	// (0x0002606a) set_opt_bg_pane_g3_copy1

0x4007,	// (0x000230dc) set_opt_bg_pane_g4_copy1

0x400f,	// (0x000230e4) set_opt_bg_pane_g5_copy1

0x4017,	// (0x000230ec) set_opt_bg_pane_g6_copy1

0x6f9d,	// (0x00026072) set_opt_bg_pane_g7_copy1

0x6fa7,	// (0x0002607c) set_opt_bg_pane_g8_copy1

0x6faf,	// (0x00026084) set_opt_bg_pane_g9_copy1

0x365a,	// (0x0002272f) bg_set_opt_pane_cp_vc

0x6fb7,	// (0x0002608c) setting_slider_pane_vc_t1

0x6fc6,	// (0x0002609b) setting_slider_pane_vc_t2

0x6fd6,	// (0x000260ab) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0002eae1) setting_slider_pane_vc_t

0x6fe6,	// (0x000260bb) slider_set_pane_vc

0x23ee,	// (0x000214c3) volume_set_pane_vc_g1

0x26dd,	// (0x000217b2) volume_set_pane_vc_g2

0x26e6,	// (0x000217bb) volume_set_pane_vc_g3

0x26ef,	// (0x000217c4) volume_set_pane_vc_g4

0x26f8,	// (0x000217cd) volume_set_pane_vc_g5

0x2701,	// (0x000217d6) volume_set_pane_vc_g6

0x241b,	// (0x000214f0) volume_set_pane_vc_g7

0x270a,	// (0x000217df) volume_set_pane_vc_g8

0x2713,	// (0x000217e8) volume_set_pane_vc_g9

0x271c,	// (0x000217f1) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0002eae8) volume_set_pane_vc_g

0x6fee,	// (0x000260c3) volume_set_pane_vc

0x6ff6,	// (0x000260cb) button_value_adjust_pane_cp1_vc

0x7000,	// (0x000260d5) list_highlight_pane_cp2_vc

0x7009,	// (0x000260de) list_set_pane_vc_ParamLimits

0x7009,	// (0x000260de) list_set_pane_vc

0x7067,	// (0x0002613c) main_pane_set_vc_t1_ParamLimits

0x7067,	// (0x0002613c) main_pane_set_vc_t1

0x707c,	// (0x00026151) main_pane_set_vc_t2_ParamLimits

0x707c,	// (0x00026151) main_pane_set_vc_t2

0x708e,	// (0x00026163) main_pane_set_vc_t3_ParamLimits

0x708e,	// (0x00026163) main_pane_set_vc_t3

0x70a0,	// (0x00026175) main_pane_set_vc_t4_ParamLimits

0x70a0,	// (0x00026175) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0002eafd) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0002eafd) main_pane_set_vc_t

0x70b2,	// (0x00026187) setting_code_pane_vc_ParamLimits

0x70b2,	// (0x00026187) setting_code_pane_vc

0x70c1,	// (0x00026196) setting_slider_graphic_pane_vc

0x70c1,	// (0x00026196) setting_slider_pane_vc

0x70c1,	// (0x00026196) setting_text_pane_vc

0x70c1,	// (0x00026196) setting_volume_pane_vc

0x70c9,	// (0x0002619e) scroll_pane_cp121_vc

0x3f6e,	// (0x00023043) set_content_pane_vc

0x70d1,	// (0x000261a6) button_value_adjust_pane_g1

0x70da,	// (0x000261af) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0002eb52) button_value_adjust_pane_g

0x70e3,	// (0x000261b8) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70e3,	// (0x000261b8) form_field_slider_wide_pane_vc_t1

0x70f7,	// (0x000261cc) form_field_slider_wide_pane_vc_t2_ParamLimits

0x70f7,	// (0x000261cc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0002eb57) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0002eb57) form_field_slider_wide_pane_vc_t

0x39b5,	// (0x00022a8a) input_focus_pane_cp10_vc_ParamLimits

0x39b5,	// (0x00022a8a) input_focus_pane_cp10_vc

0x7123,	// (0x000261f8) slider_cont_pane_cp1_vc_ParamLimits

0x7123,	// (0x000261f8) slider_cont_pane_cp1_vc

0x7133,	// (0x00026208) slider_form_pane_g1_cp2

0x6f69,	// (0x0002603e) slider_form_pane_g2_cp2

0x7160,	// (0x00026235) form_field_slider_pane_vc_t3

0x716e,	// (0x00026243) form_field_slider_pane_vc_t4

0x717c,	// (0x00026251) slider_form_pane_vc_ParamLimits

0x717c,	// (0x00026251) slider_form_pane_vc

0x7189,	// (0x0002625e) form_field_slider_pane_vc_t1_ParamLimits

0x7189,	// (0x0002625e) form_field_slider_pane_vc_t1

0x70f7,	// (0x000261cc) form_field_slider_pane_vc_t2_ParamLimits

0x70f7,	// (0x000261cc) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0002eb69) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0002eb69) form_field_slider_pane_vc_t

0x39b5,	// (0x00022a8a) input_focus_pane_cp9_vc_ParamLimits

0x39b5,	// (0x00022a8a) input_focus_pane_cp9_vc

0x71a5,	// (0x0002627a) slider_cont_pane_vc_ParamLimits

0x71a5,	// (0x0002627a) slider_cont_pane_vc

0x71b7,	// (0x0002628c) list_form_graphic_pane_cp_vc_ParamLimits

0x71b7,	// (0x0002628c) list_form_graphic_pane_cp_vc

0x551e,	// (0x000245f3) form_field_popup_wide_pane_vc_g1

0x71cc,	// (0x000262a1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x71cc,	// (0x000262a1) form_field_popup_wide_pane_vc_t1

0x3f94,	// (0x00023069) input_focus_pane_cp8_vc_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_cp8_vc

0x7211,	// (0x000262e6) list_form_wide_pane_vc_ParamLimits

0x7211,	// (0x000262e6) list_form_wide_pane_vc

0x721d,	// (0x000262f2) list_form_graphic_pane_vc_g1

0x7225,	// (0x000262fa) list_form_graphic_pane_vc_t1_ParamLimits

0x7225,	// (0x000262fa) list_form_graphic_pane_vc_t1

0x373a,	// (0x0002280f) list_highlight_pane_cp5_vc_ParamLimits

0x373a,	// (0x0002280f) list_highlight_pane_cp5_vc

0x7241,	// (0x00026316) list_form_graphic_pane_vc_ParamLimits

0x7241,	// (0x00026316) list_form_graphic_pane_vc

0x551e,	// (0x000245f3) form_field_popup_pane_vc_g1

0x7257,	// (0x0002632c) form_field_popup_pane_vc_t1_ParamLimits

0x7257,	// (0x0002632c) form_field_popup_pane_vc_t1

0x3f94,	// (0x00023069) input_focus_pane_cp7_vc_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_cp7_vc

0x726e,	// (0x00026343) list_form_pane_vc_ParamLimits

0x726e,	// (0x00026343) list_form_pane_vc

0x727a,	// (0x0002634f) data_form_pane_vc_t1_ParamLimits

0x727a,	// (0x0002634f) data_form_pane_vc_t1

0x3fef,	// (0x000230c4) input_focus_pane_vc_g1

0x3ff7,	// (0x000230cc) input_focus_pane_vc_g2

0x3fff,	// (0x000230d4) input_focus_pane_vc_g3

0x4007,	// (0x000230dc) input_focus_pane_vc_g4

0x400f,	// (0x000230e4) input_focus_pane_vc_g5

0x4017,	// (0x000230ec) input_focus_pane_vc_g6

0x401f,	// (0x000230f4) input_focus_pane_vc_g7

0x4027,	// (0x000230fc) input_focus_pane_vc_g8

0x402f,	// (0x00023104) input_focus_pane_vc_g9

0x3650,	// (0x00022725) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e761) input_focus_pane_vc_g

0x5512,	// (0x000245e7) data_form_pane_vc_ParamLimits

0x5512,	// (0x000245e7) data_form_pane_vc

0x551e,	// (0x000245f3) form_field_data_pane_vc_g1

0x7295,	// (0x0002636a) form_field_data_pane_vc_t1_ParamLimits

0x7295,	// (0x0002636a) form_field_data_pane_vc_t1

0x3f94,	// (0x00023069) input_focus_pane_vc_ParamLimits

0x3f94,	// (0x00023069) input_focus_pane_vc

0x72af,	// (0x00026384) button_value_adjust_pane_cp3_vc

0x72b7,	// (0x0002638c) button_value_adjust_pane_cp5_vc

0x72bf,	// (0x00026394) form_field_data_pane_vc_ParamLimits

0x72bf,	// (0x00026394) form_field_data_pane_vc

0x72d6,	// (0x000263ab) form_field_data_pane_vc_cp2

0x72de,	// (0x000263b3) form_field_data_wide_pane_vc_ParamLimits

0x72de,	// (0x000263b3) form_field_data_wide_pane_vc

0x72f4,	// (0x000263c9) form_field_data_wide_pane_vc_cp2

0x72fc,	// (0x000263d1) form_field_popup_pane_vc_ParamLimits

0x72fc,	// (0x000263d1) form_field_popup_pane_vc

0x7313,	// (0x000263e8) form_field_popup_wide_pane_vc_ParamLimits

0x7313,	// (0x000263e8) form_field_popup_wide_pane_vc

0x7329,	// (0x000263fe) form_field_slider_pane_vc_ParamLimits

0x7329,	// (0x000263fe) form_field_slider_pane_vc

0x733c,	// (0x00026411) form_field_slider_wide_pane_vc_ParamLimits

0x733c,	// (0x00026411) form_field_slider_wide_pane_vc

0xe049,	// (0x0002d11e) grid_touch_1_pane_ParamLimits

0xe049,	// (0x0002d11e) grid_touch_1_pane

0xe05d,	// (0x0002d132) grid_touch_2_pane_ParamLimits

0xe05d,	// (0x0002d132) grid_touch_2_pane

0x740a,	// (0x000264df) touch_pane_g1_ParamLimits

0x740a,	// (0x000264df) touch_pane_g1

0x7373,	// (0x00026448) cell_app_pane_cp_wide_ParamLimits

0x7373,	// (0x00026448) cell_app_pane_cp_wide

0x7384,	// (0x00026459) grid_popup_fast_wide_pane_ParamLimits

0x7384,	// (0x00026459) grid_popup_fast_wide_pane

0x7398,	// (0x0002646d) scroll_pane_cp19_ParamLimits

0x7398,	// (0x0002646d) scroll_pane_cp19

0x365a,	// (0x0002272f) bg_popup_window_pane_cp20

0x73ac,	// (0x00026481) listscroll_popup_fast_wide_pane

0x4155,	// (0x0002322a) grid_indicator_nsta_pane

0x73b4,	// (0x00026489) clock_nsta_pane_g1

0x73bd,	// (0x00026492) clock_nsta_pane_t1

0xe087,	// (0x0002d15c) cell_indicator_nsta_pane_ParamLimits

0xe087,	// (0x0002d15c) cell_indicator_nsta_pane

0x740a,	// (0x000264df) cell_indicator_nsta_pane_g1

0xe09e,	// (0x0002d173) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0002eb7a) cell_indicator_nsta_pane_g

0x7425,	// (0x000264fa) clock_nsta_pane_cp

0x742d,	// (0x00026502) indicator_nsta_pane_cp

0x7435,	// (0x0002650a) nsta_clock_indic_pane_g1

0x3803,	// (0x000228d8) grid_indicator_pane

0x4522,	// (0x000235f7) scroll_pane_cp29

0x1a03,	// (0x00020ad8) indicator_nsta_pane_cp2_ParamLimits

0x1a03,	// (0x00020ad8) indicator_nsta_pane_cp2

0x373a,	// (0x0002280f) main_apps_wheel_pane

0x5749,	// (0x0002481e) form_midp_field_text_pane_ParamLimits

0x5890,	// (0x00024965) scroll_bar_cp050_ParamLimits

0x7496,	// (0x0002656b) cell_indicator_pane_ParamLimits

0x7496,	// (0x0002656b) cell_indicator_pane

0x74b1,	// (0x00026586) cell_indicator_pane_g1

0xe0ab,	// (0x0002d180) grid_wheel_folder_pane_ParamLimits

0xe0ab,	// (0x0002d180) grid_wheel_folder_pane

0xe0b9,	// (0x0002d18e) list_wheel_apps_pane_ParamLimits

0xe0b9,	// (0x0002d18e) list_wheel_apps_pane

0xe0c7,	// (0x0002d19c) main_apps_wheel_pane_g1_ParamLimits

0xe0c7,	// (0x0002d19c) main_apps_wheel_pane_g1

0xe0d3,	// (0x0002d1a8) main_apps_wheel_pane_g2_ParamLimits

0xe0d3,	// (0x0002d1a8) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0002eb96) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0002eb96) main_apps_wheel_pane_g

0xe0e1,	// (0x0002d1b6) main_apps_wheel_pane_t1_ParamLimits

0xe0e1,	// (0x0002d1b6) main_apps_wheel_pane_t1

0xe0f5,	// (0x0002d1ca) list_wheel_apps_pane_g1

0xe0fd,	// (0x0002d1d2) list_wheel_apps_pane_g2

0xe105,	// (0x0002d1da) list_wheel_apps_pane_g3

0xe10d,	// (0x0002d1e2) list_wheel_apps_pane_g4

0xe117,	// (0x0002d1ec) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0002eb9b) list_wheel_apps_pane_g

0x4a8c,	// (0x00023b61) navi_icon_text_pane

0xd737,	// (0x0002c80c) aid_fill_nsta

0x7578,	// (0x0002664d) navi_icon_text_pane_g1

0x7584,	// (0x00026659) navi_icon_text_pane_t1

0xd5a1,	// (0x0002c676) list_set_graphic_pane_t1_ParamLimits

0xd5a1,	// (0x0002c676) list_set_graphic_pane_t1

0x5fe2,	// (0x000250b7) popup_midp_note_alarm_window_t6_ParamLimits

0x5fe2,	// (0x000250b7) popup_midp_note_alarm_window_t6

0x5ff4,	// (0x000250c9) popup_midp_note_alarm_window_t7_ParamLimits

0x5ff4,	// (0x000250c9) popup_midp_note_alarm_window_t7

0x6006,	// (0x000250db) popup_midp_note_alarm_window_t8_ParamLimits

0x6006,	// (0x000250db) popup_midp_note_alarm_window_t8

0x6018,	// (0x000250ed) popup_midp_note_alarm_window_t9_ParamLimits

0x6018,	// (0x000250ed) popup_midp_note_alarm_window_t9

0x602a,	// (0x000250ff) popup_midp_note_alarm_window_t10_ParamLimits

0x602a,	// (0x000250ff) popup_midp_note_alarm_window_t10

0x603c,	// (0x00025111) popup_midp_note_alarm_window_t11_ParamLimits

0x603c,	// (0x00025111) popup_midp_note_alarm_window_t11

0x604e,	// (0x00025123) scroll_pane_cp17_ParamLimits

0x604e,	// (0x00025123) scroll_pane_cp17

0x23ee,	// (0x000214c3) volume_small_pane_cp_g1

0x2725,	// (0x000217fa) volume_small_pane_cp_g2

0x272e,	// (0x00021803) volume_small_pane_cp_g3

0x2400,	// (0x000214d5) volume_small_pane_cp_g4

0x2737,	// (0x0002180c) volume_small_pane_cp_g5

0x26f8,	// (0x000217cd) volume_small_pane_cp_g6

0x2412,	// (0x000214e7) volume_small_pane_cp_g7

0x2740,	// (0x00021815) volume_small_pane_cp_g8

0x2749,	// (0x0002181e) volume_small_pane_cp_g9

0x2424,	// (0x000214f9) volume_small_pane_cp_g10

0x4cd5,	// (0x00023daa) midp_ticker_pane_g1_ParamLimits

0x4ce1,	// (0x00023db6) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e82d) midp_ticker_pane_g_ParamLimits

0x4ced,	// (0x00023dc2) midp_ticker_pane_t1_ParamLimits

0xd75b,	// (0x0002c830) aid_fill_nsta_2

0x587c,	// (0x00024951) list_form2_midp_pane

0x699a,	// (0x00025a6f) midp_editing_number_pane_ParamLimits

0x69a9,	// (0x00025a7e) midp_ticker_pane_ParamLimits

0x7596,	// (0x0002666b) form2_midp_field_pane

0x75ba,	// (0x0002668f) scroll_pane_cp51

0x75da,	// (0x000266af) form2_midp_button_pane_ParamLimits

0x75da,	// (0x000266af) form2_midp_button_pane

0x75ec,	// (0x000266c1) form2_midp_content_pane_ParamLimits

0x75ec,	// (0x000266c1) form2_midp_content_pane

0x7606,	// (0x000266db) form2_midp_field_choice_group_pane

0x760e,	// (0x000266e3) form2_midp_field_pane_g1

0x7616,	// (0x000266eb) form2_midp_field_pane_g2

0x761e,	// (0x000266f3) form2_midp_field_pane_g3

0x7626,	// (0x000266fb) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0002ebc0) form2_midp_field_pane_g

0x762e,	// (0x00026703) form2_midp_gauge_slider_pane

0x7636,	// (0x0002670b) form2_midp_gauge_wait_pane

0x763e,	// (0x00026713) form2_midp_image_pane_ParamLimits

0x763e,	// (0x00026713) form2_midp_image_pane

0x7659,	// (0x0002672e) form2_midp_label_pane_ParamLimits

0x7659,	// (0x0002672e) form2_midp_label_pane

0xe14a,	// (0x0002d21f) form2_midp_label_pane_cp_ParamLimits

0xe14a,	// (0x0002d21f) form2_midp_label_pane_cp

0x7693,	// (0x00026768) form2_midp_string_pane_ParamLimits

0x7693,	// (0x00026768) form2_midp_string_pane

0x0ee5,	// (0x0001ffba) form2_midp_text_pane_ParamLimits

0x0ee5,	// (0x0001ffba) form2_midp_text_pane

0x76a5,	// (0x0002677a) form2_midp_time_pane

0x76b5,	// (0x0002678a) input_focus_pane_cp51_ParamLimits

0x76b5,	// (0x0002678a) input_focus_pane_cp51

0x76cd,	// (0x000267a2) form2_midp_label_pane_t1_ParamLimits

0x76cd,	// (0x000267a2) form2_midp_label_pane_t1

0x0efe,	// (0x0001ffd3) form2_mdip_text_pane_t1_ParamLimits

0x0efe,	// (0x0001ffd3) form2_mdip_text_pane_t1

0x0f1c,	// (0x0001fff1) form2_midp_time_pane_t1

0x7715,	// (0x000267ea) form2_midp_gauge_slider_pane_t1

0xe16b,	// (0x0002d240) form2_midp_gauge_slider_pane_t2

0xe17f,	// (0x0002d254) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0002ebc9) form2_midp_gauge_slider_pane_t

0x774b,	// (0x00026820) form2_midp_slider_pane

0x7757,	// (0x0002682c) form2_midp_gauge_wait_pane_t1

0x7765,	// (0x0002683a) form2_midp_wait_pane_ParamLimits

0x7765,	// (0x0002683a) form2_midp_wait_pane

0xe193,	// (0x0002d268) list_single_2graphic_pane_cp4_ParamLimits

0xe193,	// (0x0002d268) list_single_2graphic_pane_cp4

0xdba1,	// (0x0002cc76) list_single_midp_graphic_pane_cp_ParamLimits

0xdba1,	// (0x0002cc76) list_single_midp_graphic_pane_cp

0x365a,	// (0x0002272f) list_highlight_pane_cp20

0x77bf,	// (0x00026894) list_single_2graphic_pane_g1_cp4

0x6dbd,	// (0x00025e92) list_single_2graphic_pane_g2_cp4

0x77c7,	// (0x0002689c) list_single_2graphic_pane_t1_cp4

0x373a,	// (0x0002280f) list_highlight_pane_cp21

0x77d6,	// (0x000268ab) list_single_midp_graphic_pane_g4_cp

0x77e5,	// (0x000268ba) list_single_midp_graphic_pane_t1_cp

0xe1a9,	// (0x0002d27e) form2_mdip_string_pane_t1_ParamLimits

0xe1a9,	// (0x0002d27e) form2_mdip_string_pane_t1

0x365a,	// (0x0002272f) bg_wml_button_pane_cp2

0x3650,	// (0x00022725) form2_midp_image_pane_g1

0x040c,	// (0x0001f4e1) list_double_large_graphic_pane_g5_ParamLimits

0x040c,	// (0x0001f4e1) list_double_large_graphic_pane_g5

0x4f3a,	// (0x0002400f) midp_form_pane_ParamLimits

0x373a,	// (0x0002280f) main_apps_wheel_pane_ParamLimits

0xc5dc,	// (0x0002b6b1) popup_preview_window_ParamLimits

0xc5dc,	// (0x0002b6b1) popup_preview_window

0x226d,	// (0x00021342) popup_touch_info_window_ParamLimits

0x226d,	// (0x00021342) popup_touch_info_window

0x228b,	// (0x00021360) popup_touch_menu_window_ParamLimits

0x228b,	// (0x00021360) popup_touch_menu_window

0x3646,	// (0x0002271b) bg_popup_sub_pane_cp6

0x791d,	// (0x000269f2) list_touch_menu_pane

0x7925,	// (0x000269fa) list_single_touch_menu_pane_ParamLimits

0x7925,	// (0x000269fa) list_single_touch_menu_pane

0x7939,	// (0x00026a0e) list_single_touch_menu_pane_t1

0x373a,	// (0x0002280f) bg_popup_sub_pane_cp7_ParamLimits

0x373a,	// (0x0002280f) bg_popup_sub_pane_cp7

0x7947,	// (0x00026a1c) heading_sub_pane

0x794f,	// (0x00026a24) list_touch_info_pane_ParamLimits

0x794f,	// (0x00026a24) list_touch_info_pane

0x795e,	// (0x00026a33) list_single_touch_info_pane_ParamLimits

0x795e,	// (0x00026a33) list_single_touch_info_pane

0x7970,	// (0x00026a45) list_single_touch_info_pane_t1

0x797e,	// (0x00026a53) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0002ebd7) list_single_touch_info_pane_t

0x4c00,	// (0x00023cd5) bg_popup_heading_pane_cp

0x798c,	// (0x00026a61) heading_sub_pane_t1

0x54ac,	// (0x00024581) bg_popup_preview_window_pane_cp_ParamLimits

0x54ac,	// (0x00024581) bg_popup_preview_window_pane_cp

0x7947,	// (0x00026a1c) heading_preview_pane

0x794f,	// (0x00026a24) list_preview_pane_ParamLimits

0x794f,	// (0x00026a24) list_preview_pane

0x799a,	// (0x00026a6f) popup_preview_window_g1

0x795e,	// (0x00026a33) list_single_preview_pane_ParamLimits

0x795e,	// (0x00026a33) list_single_preview_pane

0x79a2,	// (0x00026a77) list_single_preview_pane_g1

0x79aa,	// (0x00026a7f) list_single_preview_pane_t1

0x7970,	// (0x00026a45) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0002ebdc) list_single_preview_pane_t

0x79b8,	// (0x00026a8d) bg_popup_heading_pane_cp2_ParamLimits

0x79b8,	// (0x00026a8d) bg_popup_heading_pane_cp2

0x79ce,	// (0x00026aa3) heading_preview_pane_g1

0x79d6,	// (0x00026aab) heading_preview_pane_t1_ParamLimits

0x79d6,	// (0x00026aab) heading_preview_pane_t1

0x3826,	// (0x000228fb) soft_indicator_pane_t1_ParamLimits

0x3f07,	// (0x00022fdc) scroll_pane_ParamLimits

0x441b,	// (0x000234f0) scroll_sc2_left_pane

0x4424,	// (0x000234f9) scroll_sc2_right_pane

0x4443,	// (0x00023518) scroll_bg_pane_g1_ParamLimits

0x4458,	// (0x0002352d) scroll_bg_pane_g2_ParamLimits

0x4470,	// (0x00023545) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e7b8) scroll_bg_pane_g_ParamLimits

0x4443,	// (0x00023518) scroll_handle_pane_g1_ParamLimits

0x4492,	// (0x00023567) scroll_handle_pane_g2_ParamLimits

0x4470,	// (0x00023545) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e7bf) scroll_handle_pane_g_ParamLimits

0x1d3d,	// (0x00020e12) popup_choice_list_window_ParamLimits

0x1d3d,	// (0x00020e12) popup_choice_list_window

0x5382,	// (0x00024457) choice_list_pane

0x5404,	// (0x000244d9) cell_toolbar_pane_t1

0x542c,	// (0x00024501) toolbar_button_pane_ParamLimits

0x6508,	// (0x000255dd) ai_gene_pane_1_t2_ParamLimits

0x6508,	// (0x000255dd) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002e9db) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002e9db) ai_gene_pane_1_t

0x79f3,	// (0x00026ac8) scroll_sc2_left_pane_g1

0x79f3,	// (0x00026ac8) scroll_sc2_right_pane_g1

0x4f3a,	// (0x0002400f) bg_popup_sub_pane_cp10

0x79fd,	// (0x00026ad2) list_choice_list_pane

0x7a16,	// (0x00026aeb) list_single_choice_list_pane_ParamLimits

0x7a16,	// (0x00026aeb) list_single_choice_list_pane

0x7a29,	// (0x00026afe) list_single_choice_list_pane_g1

0x4126,	// (0x000231fb) list_single_choice_list_pane_t1_ParamLimits

0x4126,	// (0x000231fb) list_single_choice_list_pane_t1

0x7a31,	// (0x00026b06) choice_list_pane_g1

0x7a39,	// (0x00026b0e) choice_list_pane_t1

0x3646,	// (0x0002271b) input_focus_pane_cp11

0x42fa,	// (0x000233cf) title_pane_stacon_g2_ParamLimits

0x42fa,	// (0x000233cf) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e79e) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e79e) title_pane_stacon_g

0x4c00,	// (0x00023cd5) cursor_press_pane

0xc295,	// (0x0002b36a) popup_fep_hwr_window_ParamLimits

0xc295,	// (0x0002b36a) popup_fep_hwr_window

0x1e5d,	// (0x00020f32) popup_fep_vkb_window_ParamLimits

0x1e5d,	// (0x00020f32) popup_fep_vkb_window

0x7a47,	// (0x00026b1c) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0002ec05) fep_vkb_side_pane_g_ParamLimits

0x278b,	// (0x00021860) fep_hwr_candidate_pane_ParamLimits

0x278b,	// (0x00021860) fep_hwr_candidate_pane

0x27b5,	// (0x0002188a) fep_hwr_side_pane_ParamLimits

0x27b5,	// (0x0002188a) fep_hwr_side_pane

0x27d5,	// (0x000218aa) fep_hwr_top_pane_ParamLimits

0x27d5,	// (0x000218aa) fep_hwr_top_pane

0x27ed,	// (0x000218c2) fep_hwr_write_pane_ParamLimits

0x27ed,	// (0x000218c2) fep_hwr_write_pane

0xfb30,	// (0x0002ec05) fep_vkb_side_pane_g

0x7a4f,	// (0x00026b24) fep_hwr_top_pane_g1

0x7a61,	// (0x00026b36) fep_hwr_top_pane_g2

0x2819,	// (0x000218ee) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0002ebe1) fep_hwr_top_pane_g

0x282e,	// (0x00021903) fep_hwr_top_text_pane

0x45e8,	// (0x000236bd) fep_hwr_top_text_pane_g1

0x7a97,	// (0x00026b6c) fep_hwr_top_text_pane_t1

0x2924,	// (0x000219f9) fep_hwr_candidate_pane_g1

0x7cda,	// (0x00026daf) fep_vkb_keypad_pane_g3_ParamLimits

0x7cda,	// (0x00026daf) fep_vkb_keypad_pane_g3

0x7d02,	// (0x00026dd7) fep_vkb_keypad_pane_g4_ParamLimits

0x7d02,	// (0x00026dd7) fep_vkb_keypad_pane_g4

0x7d71,	// (0x00026e46) fep_vkb_bottom_pane_g2_ParamLimits

0x7d71,	// (0x00026e46) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0002ec0c) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0002ec0c) fep_vkb_bottom_pane_g

0x79f3,	// (0x00026ac8) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0002ec16) cell_vkb_side_pane_g

0x7dfc,	// (0x00026ed1) cell_vkb_side_pane_t1

0x7e0a,	// (0x00026edf) cell_vkb_side_pane_t1_copy1

0x79f3,	// (0x00026ac8) bg_fep_vkb_candidate_pane_g2

0x7f36,	// (0x0002700b) cell_vkb_candidate_pane_ParamLimits

0x7aa5,	// (0x00026b7a) aid_size_cell_vkb_ParamLimits

0x7aa5,	// (0x00026b7a) aid_size_cell_vkb

0x7f36,	// (0x0002700b) cell_vkb_candidate_pane

0x293e,	// (0x00021a13) bg_popup_fep_shadow_pane_g1

0xe239,	// (0x0002d30e) fep_vkb_bottom_pane_ParamLimits

0xe239,	// (0x0002d30e) fep_vkb_bottom_pane

0x7b67,	// (0x00026c3c) fep_vkb_candidate_pane_ParamLimits

0x7b67,	// (0x00026c3c) fep_vkb_candidate_pane

0xe25e,	// (0x0002d333) fep_vkb_keypad_pane_ParamLimits

0xe25e,	// (0x0002d333) fep_vkb_keypad_pane

0xe293,	// (0x0002d368) fep_vkb_side_pane_ParamLimits

0xe293,	// (0x0002d368) fep_vkb_side_pane

0xe2cf,	// (0x0002d3a4) fep_vkb_top_pane_ParamLimits

0xe2cf,	// (0x0002d3a4) fep_vkb_top_pane

0x7c33,	// (0x00026d08) fep_vkb_top_pane_g1_ParamLimits

0x7c33,	// (0x00026d08) fep_vkb_top_pane_g1

0x7c42,	// (0x00026d17) fep_vkb_top_pane_g2_ParamLimits

0x7c42,	// (0x00026d17) fep_vkb_top_pane_g2

0x7c51,	// (0x00026d26) fep_vkb_top_pane_g3_ParamLimits

0x7c51,	// (0x00026d26) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0002ebfc) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0002ebfc) fep_vkb_top_pane_g

0x7c6f,	// (0x00026d44) fep_vkb_top_text_pane_ParamLimits

0x7c6f,	// (0x00026d44) fep_vkb_top_text_pane

0xe304,	// (0x0002d3d9) fep_vkb_side_pane_g1_ParamLimits

0xe304,	// (0x0002d3d9) fep_vkb_side_pane_g1

0x7cc9,	// (0x00026d9e) grid_vkb_side_pane_ParamLimits

0x7cc9,	// (0x00026d9e) grid_vkb_side_pane

0x2946,	// (0x00021a1b) bg_popup_fep_shadow_pane_g2

0x294f,	// (0x00021a24) bg_popup_fep_shadow_pane_g3

0x2957,	// (0x00021a2c) bg_popup_fep_shadow_pane_g4

0x2960,	// (0x00021a35) bg_popup_fep_shadow_pane_g5

0x296a,	// (0x00021a3f) bg_popup_fep_shadow_pane_g6

0x2972,	// (0x00021a47) bg_popup_fep_shadow_pane_g7

0x400f,	// (0x000230e4) bg_popup_fep_shadow_pane_g8

0x7d20,	// (0x00026df5) grid_vkb_keypad_number_pane_ParamLimits

0x7d20,	// (0x00026df5) grid_vkb_keypad_number_pane

0x7d30,	// (0x00026e05) grid_vkb_keypad_pane_ParamLimits

0x7d30,	// (0x00026e05) grid_vkb_keypad_pane

0x7d56,	// (0x00026e2b) fep_vkb_bottom_pane_g1_ParamLimits

0x7d56,	// (0x00026e2b) fep_vkb_bottom_pane_g1

0x7d7f,	// (0x00026e54) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d7f,	// (0x00026e54) grid_vkb_keypad_bottom_left_pane

0x7d94,	// (0x00026e69) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d94,	// (0x00026e69) grid_vkb_keypad_bottom_right_pane

0x7da9,	// (0x00026e7e) fep_vkb_top_text_pane_g1

0xe34b,	// (0x0002d420) fep_vkb_top_text_pane_t1

0xe35d,	// (0x0002d432) cell_vkb_side_pane_ParamLimits

0xe35d,	// (0x0002d432) cell_vkb_side_pane

0x79f3,	// (0x00026ac8) cell_vkb_side_pane_g1

0x7e18,	// (0x00026eed) cell_vkb_keypad_pane_ParamLimits

0x7e18,	// (0x00026eed) cell_vkb_keypad_pane

0x7e8d,	// (0x00026f62) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0002ec29) bg_popup_fep_shadow_pane_g

0x79f3,	// (0x00026ac8) cell_hwr_side_pane_g1

0x79f3,	// (0x00026ac8) cell_hwr_side_pane_g2

0x7e97,	// (0x00026f6c) cell_vkb_keypad_pane_t1

0xe373,	// (0x0002d448) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe373,	// (0x0002d448) cell_vkb_keypad_bottom_left_pane

0xe388,	// (0x0002d45d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe388,	// (0x0002d45d) cell_vkb_keypad_bottom_right_pane

0x79f3,	// (0x00026ac8) cell_vkb_keypad_bottom_left_pane_g1

0x79f3,	// (0x00026ac8) cell_vkb_keypad_bottom_right_pane_g1

0x7efb,	// (0x00026fd0) cell_vkb_keypad_number_pane_ParamLimits

0x7efb,	// (0x00026fd0) cell_vkb_keypad_number_pane

0x7f1a,	// (0x00026fef) cell_vkb_keypad_number_pane_g1

0x7f24,	// (0x00026ff9) cell_vkb_keypad_number_pane_g2

0x7f2d,	// (0x00027002) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0002ec1b) cell_vkb_keypad_number_pane_g

0x7e97,	// (0x00026f6c) cell_vkb_keypad_number_pane_t1

0x7f51,	// (0x00027026) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0002ec16) cell_hwr_side_pane_g

0x7f6a,	// (0x0002703f) cell_hwr_side_pane_t1

0x2984,	// (0x00021a59) cell_hwr_side_pane_t1_copy1

0x7c61,	// (0x00026d36) cell_hwr_candidate_pane_g1

0x2992,	// (0x00021a67) cell_hwr_candidate_pane_t1

0x79f3,	// (0x00026ac8) cell_vkb_candidate_pane_g2

0x7ff0,	// (0x000270c5) cell_vkb_candidate_pane_t1

0x2752,	// (0x00021827) bg_popup_fep_shadow_pane_ParamLimits

0x2752,	// (0x00021827) bg_popup_fep_shadow_pane

0xda57,	// (0x0002cb2c) bg_fep_hwr_top_pane_g4

0x7a73,	// (0x00026b48) bg_hwr_side_pane_g1_ParamLimits

0x7a73,	// (0x00026b48) bg_hwr_side_pane_g1

0xca01,	// (0x0002bad6) cell_hwr_side_pane_ParamLimits

0xca01,	// (0x0002bad6) cell_hwr_side_pane

0x28a5,	// (0x0002197a) fep_hwr_write_pane_g1_ParamLimits

0x28a5,	// (0x0002197a) fep_hwr_write_pane_g1

0x28b2,	// (0x00021987) fep_hwr_write_pane_g2_ParamLimits

0x28b2,	// (0x00021987) fep_hwr_write_pane_g2

0x28bf,	// (0x00021994) fep_hwr_write_pane_g3_ParamLimits

0x28bf,	// (0x00021994) fep_hwr_write_pane_g3

0xca21,	// (0x0002baf6) fep_hwr_write_pane_g4_ParamLimits

0xca21,	// (0x0002baf6) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0002ebe8) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0002ebe8) fep_hwr_write_pane_g

0xda57,	// (0x0002cb2c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xda57,	// (0x0002cb2c) bg_fep_hwr_candidate_pane_g2

0x28e2,	// (0x000219b7) cell_hwr_candidate_pane_ParamLimits

0x28e2,	// (0x000219b7) cell_hwr_candidate_pane

0x2924,	// (0x000219f9) fep_hwr_candidate_pane_g1_ParamLimits

0x7ad3,	// (0x00026ba8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7ad3,	// (0x00026ba8) bg_popup_fep_shadow_pane_cp2

0x7c61,	// (0x00026d36) fep_vkb_top_pane_g4_ParamLimits

0x7c61,	// (0x00026d36) fep_vkb_top_pane_g4

0x7ca7,	// (0x00026d7c) fep_vkb_side_pane_g2_ParamLimits

0x7ca7,	// (0x00026d7c) fep_vkb_side_pane_g2

0xb92d,	// (0x0002aa02) list_setting_pane_t4_ParamLimits

0xb92d,	// (0x0002aa02) list_setting_pane_t4

0xb9af,	// (0x0002aa84) list_setting_number_pane_t5_ParamLimits

0xb9af,	// (0x0002aa84) list_setting_number_pane_t5

0xd4b1,	// (0x0002c586) list_double_heading_pane_cp2_ParamLimits

0xd4b1,	// (0x0002c586) list_double_heading_pane_cp2

0x3fa2,	// (0x00023077) list_double_heading_pane_g1_cp2_ParamLimits

0x3fa2,	// (0x00023077) list_double_heading_pane_g1_cp2

0x3fae,	// (0x00023083) list_double_heading_pane_g2_cp2_ParamLimits

0x3fae,	// (0x00023083) list_double_heading_pane_g2_cp2

0x7ffe,	// (0x000270d3) list_double_heading_pane_t1_cp2_ParamLimits

0x7ffe,	// (0x000270d3) list_double_heading_pane_t1_cp2

0x8014,	// (0x000270e9) list_double_heading_pane_t2_cp2_ParamLimits

0x8014,	// (0x000270e9) list_double_heading_pane_t2_cp2

0x362e,	// (0x00022703) aid_value_unit2

0x159a,	// (0x0002066f) popup_preview_fixed_window

0x39c3,	// (0x00022a98) bg_popup_preview_window_pane_cp02

0x8026,	// (0x000270fb) list_preview_fixed_pane

0x806c,	// (0x00027141) list_empty_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_empty_pane_fp

0x806c,	// (0x00027141) list_single_cale_day_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_cale_day_pane_fp

0x806c,	// (0x00027141) list_single_graphic_heading_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_graphic_heading_pane_fp

0x806c,	// (0x00027141) list_single_graphic_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_graphic_pane_fp

0x806c,	// (0x00027141) list_single_heading_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_heading_pane_fp

0x806c,	// (0x00027141) list_single_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_pane_fp

0x8082,	// (0x00027157) list_single_pane_fp_g1_ParamLimits

0x8082,	// (0x00027157) list_single_pane_fp_g1

0x027b,	// (0x0001f350) list_single_pane_fp_g2_ParamLimits

0x027b,	// (0x0001f350) list_single_pane_fp_g2

0x0f2f,	// (0x00020004) list_single_pane_fp_g3_ParamLimits

0x0f2f,	// (0x00020004) list_single_pane_fp_g3

0x808e,	// (0x00027163) list_single_pane_fp_g4_ParamLimits

0x808e,	// (0x00027163) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0002ec4a) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0002ec4a) list_single_pane_fp_g

0x0f43,	// (0x00020018) list_single_pane_fp_t1_ParamLimits

0x0f43,	// (0x00020018) list_single_pane_fp_t1

0x0f5a,	// (0x0002002f) list_single_graphic_pane_fp_g1_ParamLimits

0x0f5a,	// (0x0002002f) list_single_graphic_pane_fp_g1

0x8082,	// (0x00027157) list_single_graphic_pane_fp_g2_ParamLimits

0x8082,	// (0x00027157) list_single_graphic_pane_fp_g2

0x027b,	// (0x0001f350) list_single_graphic_pane_fp_g3_ParamLimits

0x027b,	// (0x0001f350) list_single_graphic_pane_fp_g3

0x0f2f,	// (0x00020004) list_single_graphic_pane_fp_g4_ParamLimits

0x0f2f,	// (0x00020004) list_single_graphic_pane_fp_g4

0x808e,	// (0x00027163) list_single_graphic_pane_fp_g5_ParamLimits

0x808e,	// (0x00027163) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec53) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec53) list_single_graphic_pane_fp_g

0x0f66,	// (0x0002003b) list_single_graphic_pane_fp_t1_ParamLimits

0x0f66,	// (0x0002003b) list_single_graphic_pane_fp_t1

0x0f5a,	// (0x0002002f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f5a,	// (0x0002002f) list_single_graphic_heading_pane_fp_g1

0x8082,	// (0x00027157) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8082,	// (0x00027157) list_single_graphic_heading_pane_fp_g2

0x027b,	// (0x0001f350) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x027b,	// (0x0001f350) list_single_graphic_heading_pane_fp_g3

0x0f2f,	// (0x00020004) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0f2f,	// (0x00020004) list_single_graphic_heading_pane_fp_g4

0x808e,	// (0x00027163) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x808e,	// (0x00027163) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec53) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec53) list_single_graphic_heading_pane_fp_g

0x0f7c,	// (0x00020051) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f7c,	// (0x00020051) list_single_graphic_heading_pane_fp_t1

0x0f92,	// (0x00020067) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f92,	// (0x00020067) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0002ec5e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0002ec5e) list_single_graphic_heading_pane_fp_t

0x0fa4,	// (0x00020079) list_single_cale_day_pane_fp_g1_ParamLimits

0x0fa4,	// (0x00020079) list_single_cale_day_pane_fp_g1

0x809a,	// (0x0002716f) list_single_cale_day_pane_fp_g2_ParamLimits

0x809a,	// (0x0002716f) list_single_cale_day_pane_fp_g2

0x0fdc,	// (0x000200b1) list_single_cale_day_pane_fp_g3_ParamLimits

0x0fdc,	// (0x000200b1) list_single_cale_day_pane_fp_g3

0x1004,	// (0x000200d9) list_single_cale_day_pane_fp_g4_ParamLimits

0x1004,	// (0x000200d9) list_single_cale_day_pane_fp_g4

0x1028,	// (0x000200fd) list_single_cale_day_pane_fp_g5_ParamLimits

0x1028,	// (0x000200fd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0002ec63) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002ec63) list_single_cale_day_pane_fp_g

0x104c,	// (0x00020121) list_single_cale_day_pane_fp_t1_ParamLimits

0x104c,	// (0x00020121) list_single_cale_day_pane_fp_t1

0x1072,	// (0x00020147) list_single_cale_day_pane_fp_t2_ParamLimits

0x1072,	// (0x00020147) list_single_cale_day_pane_fp_t2

0x108b,	// (0x00020160) list_single_cale_day_pane_fp_t3_ParamLimits

0x108b,	// (0x00020160) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0002ec6e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0002ec6e) list_single_cale_day_pane_fp_t

0x8082,	// (0x00027157) list_empty_pane_fp_g1_ParamLimits

0x8082,	// (0x00027157) list_empty_pane_fp_g1

0x10a4,	// (0x00020179) list_empty_pane_fp_t1

0x10b2,	// (0x00020187) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0002ec75) list_empty_pane_fp_t

0x8082,	// (0x00027157) list_single_heading_pane_fp_g1_ParamLimits

0x8082,	// (0x00027157) list_single_heading_pane_fp_g1

0x027b,	// (0x0001f350) list_single_heading_pane_fp_g2_ParamLimits

0x027b,	// (0x0001f350) list_single_heading_pane_fp_g2

0x0f2f,	// (0x00020004) list_single_heading_pane_fp_g3_ParamLimits

0x0f2f,	// (0x00020004) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0002ec7a) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0002ec7a) list_single_heading_pane_fp_g

0x10c0,	// (0x00020195) list_single_heading_pane_fp_t1_ParamLimits

0x10c0,	// (0x00020195) list_single_heading_pane_fp_t1

0x10d2,	// (0x000201a7) list_single_heading_pane_fp_t2_ParamLimits

0x10d2,	// (0x000201a7) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0002ec81) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0002ec81) list_single_heading_pane_fp_t

0x4194,	// (0x00023269) aid_size_cell_fast

0x3933,	// (0x00022a08) soft_indicator_pane_cp1_t1

0x41ce,	// (0x000232a3) cell_app_pane_cp2_ParamLimits

0x41ce,	// (0x000232a3) cell_app_pane_cp2

0x2774,	// (0x00021849) fep_hwr_candidate_drop_down_list_pane

0xda65,	// (0x0002cb3a) fep_hwr_candidate_pane_g3_ParamLimits

0xda65,	// (0x0002cb3a) fep_hwr_candidate_pane_g3

0xda72,	// (0x0002cb47) fep_hwr_candidate_pane_g4_ParamLimits

0xda72,	// (0x0002cb47) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0002ebf5) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0002ebf5) fep_hwr_candidate_pane_g

0x7b56,	// (0x00026c2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b56,	// (0x00026c2b) fep_vkb_candidate_drop_down_list_pane

0x7f59,	// (0x0002702e) fep_vkb_candidate_pane_g3

0x7f61,	// (0x00027036) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002ec22) fep_vkb_candidate_pane_g

0x7c61,	// (0x00026d36) cell_hwr_candidate_pane_g1_ParamLimits

0x7f78,	// (0x0002704d) cell_hwr_candidate_pane_g3_ParamLimits

0x7f78,	// (0x0002704d) cell_hwr_candidate_pane_g3

0x7f99,	// (0x0002706e) cell_hwr_candidate_pane_g4_ParamLimits

0x7f99,	// (0x0002706e) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0002ec3c) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0002ec3c) cell_hwr_candidate_pane_g

0x7fba,	// (0x0002708f) cell_vkb_candidate_pane_g3_ParamLimits

0x7fba,	// (0x0002708f) cell_vkb_candidate_pane_g3

0x7fd5,	// (0x000270aa) cell_vkb_candidate_pane_g4_ParamLimits

0x7fd5,	// (0x000270aa) cell_vkb_candidate_pane_g4

0x80a6,	// (0x0002717b) cell_app_pane_cp2_g1_ParamLimits

0x80a6,	// (0x0002717b) cell_app_pane_cp2_g1

0x80c4,	// (0x00027199) cell_app_pane_cp2_g2_ParamLimits

0x80c4,	// (0x00027199) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0002ec86) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0002ec86) cell_app_pane_cp2_g

0x80d0,	// (0x000271a5) cell_app_pane_cp2_t1_ParamLimits

0x80d0,	// (0x000271a5) cell_app_pane_cp2_t1

0x3f94,	// (0x00023069) grid_highlight_pane_cp1_ParamLimits

0x3f94,	// (0x00023069) grid_highlight_pane_cp1

0x29b0,	// (0x00021a85) cell_hwr_candidate_pane_cp1_ParamLimits

0x29b0,	// (0x00021a85) cell_hwr_candidate_pane_cp1

0x7c61,	// (0x00026d36) fep_hwr_candidate_drop_down_list_pane_g1

0x80e2,	// (0x000271b7) fep_hwr_candidate_drop_down_list_pane_g2

0x80ef,	// (0x000271c4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0002ec8b) fep_hwr_candidate_drop_down_list_pane_g

0x29cf,	// (0x00021aa4) fep_hwr_candidate_drop_down_list_scroll_pane

0x29d8,	// (0x00021aad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x29d8,	// (0x00021aad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x29e5,	// (0x00021aba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x29e5,	// (0x00021aba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x29f2,	// (0x00021ac7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x29f2,	// (0x00021ac7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7fba,	// (0x0002708f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7fba,	// (0x0002708f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7fd5,	// (0x000270aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fd5,	// (0x000270aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x29ff,	// (0x00021ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x29ff,	// (0x00021ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a1a,	// (0x00021aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a1a,	// (0x00021aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a35,	// (0x00021b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a35,	// (0x00021b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0002ec92) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0002ec92) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80fc,	// (0x000271d1) cell_vkb_candidate_pane_cp1_ParamLimits

0x80fc,	// (0x000271d1) cell_vkb_candidate_pane_cp1

0x7c61,	// (0x00026d36) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) fep_vkb_candidate_drop_down_list_pane_g1

0x80e2,	// (0x000271b7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80e2,	// (0x000271b7) fep_vkb_candidate_drop_down_list_pane_g2

0x80ef,	// (0x000271c4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80ef,	// (0x000271c4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0002ec8b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0002ec8b) fep_vkb_candidate_drop_down_list_pane_g

0x811c,	// (0x000271f1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x811c,	// (0x000271f1) fep_vkb_candidate_drop_down_list_scroll_pane

0x8129,	// (0x000271fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8129,	// (0x000271fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8136,	// (0x0002720b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8136,	// (0x0002720b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8142,	// (0x00027217) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8142,	// (0x00027217) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f78,	// (0x0002704d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f78,	// (0x0002704d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f99,	// (0x0002706e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f99,	// (0x0002706e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x814e,	// (0x00027223) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x814e,	// (0x00027223) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x816f,	// (0x00027244) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x816f,	// (0x00027244) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8190,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8190,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0002eca3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0002eca3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd024,	// (0x0002c0f9) title_pane_g1_ParamLimits

0xd037,	// (0x0002c10c) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e623) title_pane_g_ParamLimits

0x45d8,	// (0x000236ad) aid_call2_pane

0x45e0,	// (0x000236b5) aid_call_pane

0x45e8,	// (0x000236bd) popup_clock_analogue_window_g1

0x45e8,	// (0x000236bd) popup_clock_analogue_window_g2

0x190d,	// (0x000209e2) popup_clock_analogue_window_g3

0x1916,	// (0x000209eb) popup_clock_analogue_window_g4

0x3650,	// (0x00022725) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e7cd) popup_clock_analogue_window_g

0x191e,	// (0x000209f3) popup_clock_analogue_window_t1

0x192c,	// (0x00020a01) clock_digital_number_pane_ParamLimits

0x192c,	// (0x00020a01) clock_digital_number_pane

0x1938,	// (0x00020a0d) clock_digital_number_pane_cp02_ParamLimits

0x1938,	// (0x00020a0d) clock_digital_number_pane_cp02

0x1944,	// (0x00020a19) clock_digital_number_pane_cp03_ParamLimits

0x1944,	// (0x00020a19) clock_digital_number_pane_cp03

0x1950,	// (0x00020a25) clock_digital_number_pane_cp04_ParamLimits

0x1950,	// (0x00020a25) clock_digital_number_pane_cp04

0x195c,	// (0x00020a31) clock_digital_separator_pane_ParamLimits

0x195c,	// (0x00020a31) clock_digital_separator_pane

0x1968,	// (0x00020a3d) popup_clock_digital_window_t1_ParamLimits

0x1968,	// (0x00020a3d) popup_clock_digital_window_t1

0x3650,	// (0x00022725) clock_digital_number_pane_g1

0x3650,	// (0x00022725) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e7d8) clock_digital_number_pane_g

0x3650,	// (0x00022725) clock_digital_separator_pane_g1

0x3650,	// (0x00022725) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e7d8) clock_digital_separator_pane_g

0xd737,	// (0x0002c80c) aid_fill_nsta_ParamLimits

0xd86d,	// (0x0002c942) indicator_nsta_pane_ParamLimits

0x5217,	// (0x000242ec) popup_clock_analogue_window

0x5217,	// (0x000242ec) popup_clock_digital_window

0x4155,	// (0x0002322a) grid_indicator_nsta_pane_ParamLimits

0x73cb,	// (0x000264a0) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0002eb75) clock_nsta_pane_t

0x18d1,	// (0x000209a6) aid_size_max_handle

0x18db,	// (0x000209b0) aid_size_min_handle

0x4c00,	// (0x00023cd5) editor_scroll_pane

0x81ab,	// (0x00027280) ex_editor_pane

0x4102,	// (0x000231d7) scroll_pane_cp13

0x3f33,	// (0x00023008) scroll_pane_cp14

0x4617,	// (0x000236ec) scroll_pane_cp36

0xd4c2,	// (0x0002c597) list_single_graphic_hl_pane_cp2_ParamLimits

0xd4c2,	// (0x0002c597) list_single_graphic_hl_pane_cp2

0xbc4c,	// (0x0002ad21) list_single_graphic_hl_pane_ParamLimits

0xbc4c,	// (0x0002ad21) list_single_graphic_hl_pane

0x10e8,	// (0x000201bd) aid_size_min_hl_cp1

0x81b3,	// (0x00027288) list_highlight_pane_cp34_ParamLimits

0x81b3,	// (0x00027288) list_highlight_pane_cp34

0x81c4,	// (0x00027299) list_single_graphic_hl_pane_g1_ParamLimits

0x81c4,	// (0x00027299) list_single_graphic_hl_pane_g1

0xbc72,	// (0x0002ad47) list_single_graphic_hl_pane_g2_ParamLimits

0xbc72,	// (0x0002ad47) list_single_graphic_hl_pane_g2

0xbc72,	// (0x0002ad47) list_single_graphic_hl_pane_g3_ParamLimits

0xbc72,	// (0x0002ad47) list_single_graphic_hl_pane_g3

0x0190,	// (0x0001f265) list_single_graphic_hl_pane_g4_ParamLimits

0x0190,	// (0x0001f265) list_single_graphic_hl_pane_g4

0xbc7e,	// (0x0002ad53) list_single_graphic_hl_pane_g5_ParamLimits

0xbc7e,	// (0x0002ad53) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0002ecb4) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0002ecb4) list_single_graphic_hl_pane_g

0xbc92,	// (0x0002ad67) list_single_graphic_hl_pane_t1_ParamLimits

0xbc92,	// (0x0002ad67) list_single_graphic_hl_pane_t1

0x81d1,	// (0x000272a6) aid_size_min_hl_cp2

0x81da,	// (0x000272af) list_highlight_pane_cp34_cp2_ParamLimits

0x81da,	// (0x000272af) list_highlight_pane_cp34_cp2

0x81c4,	// (0x00027299) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81c4,	// (0x00027299) list_single_graphic_hl_pane_g1_cp2

0x81e7,	// (0x000272bc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81e7,	// (0x000272bc) list_single_graphic_hl_pane_g2_cp2

0x81f3,	// (0x000272c8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81f3,	// (0x000272c8) list_single_graphic_hl_pane_g3_cp2

0x4744,	// (0x00023819) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4744,	// (0x00023819) list_single_graphic_hl_pane_g4_cp2

0x8201,	// (0x000272d6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8201,	// (0x000272d6) list_single_graphic_hl_pane_g5_cp2

0xc0a7,	// (0x0002b17c) control_pane_g4_ParamLimits

0xc0a7,	// (0x0002b17c) control_pane_g4

0x4f3a,	// (0x0002400f) bg_popup_sub_pane_cp10_ParamLimits

0x79fd,	// (0x00026ad2) list_choice_list_pane_ParamLimits

0x7a0c,	// (0x00026ae1) scroll_pane_cp23

0x39c3,	// (0x00022a98) bg_popup_preview_window_pane_cp02_ParamLimits

0x8026,	// (0x000270fb) list_preview_fixed_pane_ParamLimits

0x803c,	// (0x00027111) list_preview_fixed_pane_cp_ParamLimits

0x803c,	// (0x00027111) list_preview_fixed_pane_cp

0x8048,	// (0x0002711d) popup_preview_fixed_window_g1_ParamLimits

0x8048,	// (0x0002711d) popup_preview_fixed_window_g1

0x8054,	// (0x00027129) popup_preview_fixed_window_g2_ParamLimits

0x8054,	// (0x00027129) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0002ec43) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0002ec43) popup_preview_fixed_window_g

0x1845,	// (0x0002091a) aid_navi_side_left_pane_ParamLimits

0x185a,	// (0x0002092f) aid_navi_side_right_pane_ParamLimits

0x1872,	// (0x00020947) navi_icon_pane_stacon_ParamLimits

0x1886,	// (0x0002095b) navi_navi_pane_stacon_ParamLimits

0x1872,	// (0x00020947) navi_text_pane_stacon_ParamLimits

0x3646,	// (0x0002271b) main_text_info_pane

0x822b,	// (0x00027300) listscroll_text_info_pane

0x8233,	// (0x00027308) list_text_info_pane_ParamLimits

0x8233,	// (0x00027308) list_text_info_pane

0x8242,	// (0x00027317) scroll_pane_cp24_ParamLimits

0x8242,	// (0x00027317) scroll_pane_cp24

0xe3a3,	// (0x0002d478) list_text_info_pane_t1_ParamLimits

0xe3a3,	// (0x0002d478) list_text_info_pane_t1

0xc20a,	// (0x0002b2df) popup_fast_swap2_window_ParamLimits

0xc20a,	// (0x0002b2df) popup_fast_swap2_window

0x8295,	// (0x0002736a) aid_size_cell_fast2

0x3646,	// (0x0002271b) bg_popup_window_pane_cp17

0x58a8,	// (0x0002497d) heading_pane_cp2

0x3c06,	// (0x00022cdb) listscroll_fast2_pane

0x829f,	// (0x00027374) grid_fast2_pane

0x82a9,	// (0x0002737e) listscroll_fast2_pane_g1

0x82b1,	// (0x00027386) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0002ecbf) listscroll_fast2_pane_g

0x4102,	// (0x000231d7) scroll_pane_cp26

0x82bb,	// (0x00027390) cell_fast2_pane_ParamLimits

0x82bb,	// (0x00027390) cell_fast2_pane

0x82d0,	// (0x000273a5) cell_fast2_pane_g1

0x82d9,	// (0x000273ae) cell_fast2_pane_g2

0x82e2,	// (0x000273b7) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0002ecc4) cell_fast2_pane_g

0x3cf0,	// (0x00022dc5) grid_highlight_pane_cp9

0x3d05,	// (0x00022dda) main_eswt_pane_ParamLimits

0x3d05,	// (0x00022dda) main_eswt_pane

0x8257,	// (0x0002732c) list_single_text_info_pane

0x82ea,	// (0x000273bf) eswt_ctrl_button_pane

0x82ea,	// (0x000273bf) eswt_ctrl_canvas_pane

0x82f2,	// (0x000273c7) eswt_ctrl_combo_pane

0x82ea,	// (0x000273bf) eswt_ctrl_default_pane

0x82ea,	// (0x000273bf) eswt_ctrl_label_pane

0x82fa,	// (0x000273cf) eswt_ctrl_wait_pane

0x8302,	// (0x000273d7) eswt_shell_pane

0x3646,	// (0x0002271b) listscroll_eswt_app_pane

0x8322,	// (0x000273f7) popup_eswt_tasktip_window_ParamLimits

0x8322,	// (0x000273f7) popup_eswt_tasktip_window

0x54ac,	// (0x00024581) bg_popup_window_pane_cp18

0x8333,	// (0x00027408) eswt_control_pane_g1_ParamLimits

0x8333,	// (0x00027408) eswt_control_pane_g1

0x8340,	// (0x00027415) eswt_control_pane_g2_ParamLimits

0x8340,	// (0x00027415) eswt_control_pane_g2

0x834d,	// (0x00027422) eswt_control_pane_g3_ParamLimits

0x834d,	// (0x00027422) eswt_control_pane_g3

0x835a,	// (0x0002742f) eswt_control_pane_g4_ParamLimits

0x835a,	// (0x0002742f) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0002eccb) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0002eccb) eswt_control_pane_g

0x3f94,	// (0x00023069) bg_button_pane_ParamLimits

0x3f94,	// (0x00023069) bg_button_pane

0x3d05,	// (0x00022dda) common_borders_pane_copy2_ParamLimits

0x3d05,	// (0x00022dda) common_borders_pane_copy2

0x8367,	// (0x0002743c) control_button_pane_g1_ParamLimits

0x8367,	// (0x0002743c) control_button_pane_g1

0x8373,	// (0x00027448) control_button_pane_g2_ParamLimits

0x8373,	// (0x00027448) control_button_pane_g2

0x837f,	// (0x00027454) control_button_pane_g3_ParamLimits

0x837f,	// (0x00027454) control_button_pane_g3

0x0002,

0xfbff,	// (0x0002ecd4) control_button_pane_g_ParamLimits

0xfbff,	// (0x0002ecd4) control_button_pane_g

0x8393,	// (0x00027468) control_button_pane_t1

0x83a1,	// (0x00027476) control_button_pane_t2

0x0001,

0xfc06,	// (0x0002ecdb) control_button_pane_t

0x5438,	// (0x0002450d) bg_button_pane_g1

0x5440,	// (0x00024515) bg_button_pane_g2

0x5448,	// (0x0002451d) bg_button_pane_g3

0x5450,	// (0x00024525) bg_button_pane_g4

0x5458,	// (0x0002452d) bg_button_pane_g5

0x5460,	// (0x00024535) bg_button_pane_g6

0x5468,	// (0x0002453d) bg_button_pane_g7

0x5470,	// (0x00024545) bg_button_pane_g8

0x5478,	// (0x0002454d) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002e92f) bg_button_pane_g

0x79b8,	// (0x00026a8d) common_borders_pane_ParamLimits

0x79b8,	// (0x00026a8d) common_borders_pane

0x8333,	// (0x00027408) eswt_control_pane_g1_copy1_ParamLimits

0x8333,	// (0x00027408) eswt_control_pane_g1_copy1

0x8340,	// (0x00027415) eswt_control_pane_g2_copy1_ParamLimits

0x8340,	// (0x00027415) eswt_control_pane_g2_copy1

0x834d,	// (0x00027422) eswt_control_pane_g3_copy1_ParamLimits

0x834d,	// (0x00027422) eswt_control_pane_g3_copy1

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy1_ParamLimits

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy1

0x79f3,	// (0x00026ac8) bg_eswt_ctrl_canvas_pane_g1

0x79b8,	// (0x00026a8d) common_borders_pane_cp2_ParamLimits

0x79b8,	// (0x00026a8d) common_borders_pane_cp2

0x79b8,	// (0x00026a8d) common_borders_pane_cp3_ParamLimits

0x79b8,	// (0x00026a8d) common_borders_pane_cp3

0x83af,	// (0x00027484) separator_horizontal_pane

0x83b7,	// (0x0002748c) separator_vertical_pane

0x8333,	// (0x00027408) eswt_control_pane_g1_copy2_ParamLimits

0x8333,	// (0x00027408) eswt_control_pane_g1_copy2

0x8340,	// (0x00027415) eswt_control_pane_g2_copy2_ParamLimits

0x8340,	// (0x00027415) eswt_control_pane_g2_copy2

0x834d,	// (0x00027422) eswt_control_pane_g3_copy2_ParamLimits

0x834d,	// (0x00027422) eswt_control_pane_g3_copy2

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy2_ParamLimits

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy2

0x3646,	// (0x0002271b) common_borders_pane_cp4

0x83c0,	// (0x00027495) separator_horizontal_pane_g1

0x83c9,	// (0x0002749e) separator_horizontal_pane_g2

0x83d2,	// (0x000274a7) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0002ece0) separator_horizontal_pane_g

0x8333,	// (0x00027408) eswt_control_pane_g1_copy3_ParamLimits

0x8333,	// (0x00027408) eswt_control_pane_g1_copy3

0x8340,	// (0x00027415) eswt_control_pane_g2_copy3_ParamLimits

0x8340,	// (0x00027415) eswt_control_pane_g2_copy3

0x834d,	// (0x00027422) eswt_control_pane_g3_copy3_ParamLimits

0x834d,	// (0x00027422) eswt_control_pane_g3_copy3

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy3_ParamLimits

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy3

0x3646,	// (0x0002271b) common_borders_pane_cp5

0x83db,	// (0x000274b0) separator_vertical_pane_g1

0x83e4,	// (0x000274b9) separator_vertical_pane_g2

0x83ed,	// (0x000274c2) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0002ece7) separator_vertical_pane_g

0x8333,	// (0x00027408) eswt_control_pane_g1_copy4_ParamLimits

0x8333,	// (0x00027408) eswt_control_pane_g1_copy4

0x8340,	// (0x00027415) eswt_control_pane_g2_copy4_ParamLimits

0x8340,	// (0x00027415) eswt_control_pane_g2_copy4

0x834d,	// (0x00027422) eswt_control_pane_g3_copy4_ParamLimits

0x834d,	// (0x00027422) eswt_control_pane_g3_copy4

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy4_ParamLimits

0x835a,	// (0x0002742f) eswt_control_pane_g4_copy4

0x83f6,	// (0x000274cb) eswt_ctrl_combo_button_pane

0x83fe,	// (0x000274d3) eswt_ctrl_input_pane

0x8406,	// (0x000274db) popup_choice_list_window_cp70

0x840e,	// (0x000274e3) eswt_ctrl_input_pane_t1

0x3646,	// (0x0002271b) input_focus_pane_cp70

0x79b8,	// (0x00026a8d) bg_button_pane_cp70_ParamLimits

0x79b8,	// (0x00026a8d) bg_button_pane_cp70

0x841c,	// (0x000274f1) eswt_ctrl_combo_button_pane_g1

0x8424,	// (0x000274f9) wait_bar_pane_cp70

0x54ac,	// (0x00024581) bg_popup_window_pane_cp70_ParamLimits

0x54ac,	// (0x00024581) bg_popup_window_pane_cp70

0x842c,	// (0x00027501) popup_eswt_tasktip_window_t1

0x8442,	// (0x00027517) wait_bar_pane_cp71_ParamLimits

0x8442,	// (0x00027517) wait_bar_pane_cp71

0x844e,	// (0x00027523) grid_eswt_app_pane

0x4424,	// (0x000234f9) scroll_pane_cp70

0xe3c0,	// (0x0002d495) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0002d495) cell_eswt_app_pane

0xe3ea,	// (0x0002d4bf) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0002d4bf) cell_eswt_app_pane_g1

0xe419,	// (0x0002d4ee) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0002d4ee) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0002ecee) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0002ecee) cell_eswt_app_pane_g

0xe43d,	// (0x0002d512) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0002d512) cell_eswt_app_pane_t1

0x8510,	// (0x000275e5) grid_highlight_pane_cp70_ParamLimits

0x8510,	// (0x000275e5) grid_highlight_pane_cp70

0x4ae1,	// (0x00023bb6) set_content_pane_g1

0xd6f4,	// (0x0002c7c9) status_small_volume_pane

0x2a50,	// (0x00021b25) status_small_volume_pane_g1

0x2a58,	// (0x00021b2d) volume_small2_pane

0x2a61,	// (0x00021b36) volume_small2_pane_g1

0x2a6a,	// (0x00021b3f) volume_small2_pane_g2

0x2a73,	// (0x00021b48) volume_small2_pane_g3

0x2a7c,	// (0x00021b51) volume_small2_pane_g4

0x2a85,	// (0x00021b5a) volume_small2_pane_g5

0x2a8e,	// (0x00021b63) volume_small2_pane_g6

0x2a97,	// (0x00021b6c) volume_small2_pane_g7

0x2aa0,	// (0x00021b75) volume_small2_pane_g8

0x2aa9,	// (0x00021b7e) volume_small2_pane_g9

0x2ab2,	// (0x00021b87) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0002ecf3) volume_small2_pane_g

0x7da9,	// (0x00026e7e) fep_vkb_top_text_pane_g1_ParamLimits

0xe34b,	// (0x0002d420) fep_vkb_top_text_pane_t1_ParamLimits

0x8060,	// (0x00027135) popup_preview_fixed_window_g3_ParamLimits

0x8060,	// (0x00027135) popup_preview_fixed_window_g3

0xc819,	// (0x0002b8ee) popup_toolbar_trans_pane

0xddb8,	// (0x0002ce8d) aid_height_set_list_ParamLimits

0x681b,	// (0x000258f0) aid_size_parent_ParamLimits

0x4f3a,	// (0x0002400f) list_highlight_pane_cp2_ParamLimits

0x4ae1,	// (0x00023bb6) set_content_pane_g1_ParamLimits

0xbc5f,	// (0x0002ad34) list_single_image_pane_ParamLimits

0xbc5f,	// (0x0002ad34) list_single_image_pane

0xe46f,	// (0x0002d544) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0002d544) aid_size_cell_image

0xe47c,	// (0x0002d551) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0002d551) grid_single_image_pane

0x8535,	// (0x0002760a) list_single_image_pane_g1_ParamLimits

0x8535,	// (0x0002760a) list_single_image_pane_g1

0x8541,	// (0x00027616) list_single_image_pane_g2_ParamLimits

0x8541,	// (0x00027616) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0002ed08) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0002ed08) list_single_image_pane_g

0x8555,	// (0x0002762a) list_single_image_pane_t1_ParamLimits

0x8555,	// (0x0002762a) list_single_image_pane_t1

0xe488,	// (0x0002d55d) cell_image_list_pane_ParamLimits

0xe488,	// (0x0002d55d) cell_image_list_pane

0xe49c,	// (0x0002d571) cell_image_list_pane_g1

0xe4a5,	// (0x0002d57a) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0002ed0d) cell_image_list_pane_g

0x8591,	// (0x00027666) aid_size_cell_tb_trans_pane

0x3f94,	// (0x00023069) bg_tb_trans_pane

0x85a3,	// (0x00027678) grid_tb_trans_pane

0x5438,	// (0x0002450d) bg_tb_trans_pane_g1

0x5440,	// (0x00024515) bg_tb_trans_pane_g2

0x5448,	// (0x0002451d) bg_tb_trans_pane_g3

0x5450,	// (0x00024525) bg_tb_trans_pane_g4

0x5458,	// (0x0002452d) bg_tb_trans_pane_g5

0x5470,	// (0x00024545) bg_tb_trans_pane_g6

0x5478,	// (0x0002454d) bg_tb_trans_pane_g7

0x5460,	// (0x00024535) bg_tb_trans_pane_g8

0x5468,	// (0x0002453d) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0002ed12) bg_tb_trans_pane_g

0x85b7,	// (0x0002768c) cell_toolbar_trans_pane_ParamLimits

0x85b7,	// (0x0002768c) cell_toolbar_trans_pane

0x79f3,	// (0x00026ac8) cell_toolbar_trans_pane_g1

0xe12e,	// (0x0002d203) list_form2_midp_pane_t1

0xe13c,	// (0x0002d211) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0002ebbb) list_form2_midp_pane_t

0x75ba,	// (0x0002668f) scroll_pane_cp51_ParamLimits

0x7776,	// (0x0002684b) form2_midp_wait_pane_g1

0x777f,	// (0x00026854) form2_midp_wait_pane_g2

0x7788,	// (0x0002685d) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0002ebd0) form2_midp_wait_pane_g

0x373a,	// (0x0002280f) list_highlight_pane_cp21_ParamLimits

0x77d6,	// (0x000268ab) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77e5,	// (0x000268ba) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x69cb,	// (0x00025aa0) list_single_2graphic_im_pane_ParamLimits

0x69cb,	// (0x00025aa0) list_single_2graphic_im_pane

0x85dd,	// (0x000276b2) list_single_2graphic_im_pane_g1_ParamLimits

0x85dd,	// (0x000276b2) list_single_2graphic_im_pane_g1

0x85ee,	// (0x000276c3) list_single_2graphic_im_pane_g2_ParamLimits

0x85ee,	// (0x000276c3) list_single_2graphic_im_pane_g2

0x85fa,	// (0x000276cf) list_single_2graphic_im_pane_g3_ParamLimits

0x85fa,	// (0x000276cf) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0002ed25) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0002ed25) list_single_2graphic_im_pane_g

0x861a,	// (0x000276ef) list_single_2graphic_im_pane_t1_ParamLimits

0x861a,	// (0x000276ef) list_single_2graphic_im_pane_t1

0x806c,	// (0x00027141) list_single_graphic_2heading_pane_fp_ParamLimits

0x806c,	// (0x00027141) list_single_graphic_2heading_pane_fp

0x0f5a,	// (0x0002002f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f5a,	// (0x0002002f) list_single_graphic_2heading_pane_fp_g1

0x8082,	// (0x00027157) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8082,	// (0x00027157) list_single_graphic_2heading_pane_fp_g2

0x027b,	// (0x0001f350) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x027b,	// (0x0001f350) list_single_graphic_2heading_pane_fp_g3

0x0f2f,	// (0x00020004) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0f2f,	// (0x00020004) list_single_graphic_2heading_pane_fp_g4

0x808e,	// (0x00027163) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x808e,	// (0x00027163) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec53) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec53) list_single_graphic_2heading_pane_fp_g

0x1133,	// (0x00020208) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1133,	// (0x00020208) list_single_graphic_2heading_pane_fp_t1

0x0f92,	// (0x00020067) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f92,	// (0x00020067) list_single_graphic_2heading_pane_fp_t2

0x1149,	// (0x0002021e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1149,	// (0x0002021e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0002ed2e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0002ed2e) list_single_graphic_2heading_pane_fp_t

0x7a7f,	// (0x00026b54) fep_hwr_write_pane_g5_ParamLimits

0x7a7f,	// (0x00026b54) fep_hwr_write_pane_g5

0x7a8b,	// (0x00026b60) fep_hwr_write_pane_g6_ParamLimits

0x7a8b,	// (0x00026b60) fep_hwr_write_pane_g6

0x8302,	// (0x000273d7) eswt_shell_pane_ParamLimits

0x54ac,	// (0x00024581) bg_popup_window_pane_cp18_ParamLimits

0x6769,	// (0x0002583e) heading_pane_cp70

0x842c,	// (0x00027501) popup_eswt_tasktip_window_t1_ParamLimits

0xd792,	// (0x0002c867) aid_touch_tab_arrow_left

0xd7a8,	// (0x0002c87d) aid_touch_tab_arrow_right

0xd04f,	// (0x0002c124) title_pane_g3_ParamLimits

0xd04f,	// (0x0002c124) title_pane_g3

0x3f53,	// (0x00023028) set_value_pane_g1

0xc819,	// (0x0002b8ee) popup_toolbar_trans_pane_ParamLimits

0x8591,	// (0x00027666) aid_size_cell_tb_trans_pane_ParamLimits

0x3f94,	// (0x00023069) bg_tb_trans_pane_ParamLimits

0x85a3,	// (0x00027678) grid_tb_trans_pane_ParamLimits

0x39c3,	// (0x00022a98) cont_note_pane_ParamLimits

0x39c3,	// (0x00022a98) cont_note_pane

0x3d05,	// (0x00022dda) cont_snote2_single_text_pane_ParamLimits

0x3d05,	// (0x00022dda) cont_snote2_single_text_pane

0x3d05,	// (0x00022dda) cont_snote2_single_graphic_pane_ParamLimits

0x3d05,	// (0x00022dda) cont_snote2_single_graphic_pane

0x5abe,	// (0x00024b93) cont_note_wait_pane_ParamLimits

0x5abe,	// (0x00024b93) cont_note_wait_pane

0x5abe,	// (0x00024b93) cont_note_image_pane_ParamLimits

0x5abe,	// (0x00024b93) cont_note_image_pane

0x864b,	// (0x00027720) popup_note2_window_g1_ParamLimits

0x864b,	// (0x00027720) popup_note2_window_g1

0x867c,	// (0x00027751) popup_note2_window_t1_ParamLimits

0x867c,	// (0x00027751) popup_note2_window_t1

0x86c1,	// (0x00027796) popup_note2_window_t2_ParamLimits

0x86c1,	// (0x00027796) popup_note2_window_t2

0x8706,	// (0x000277db) popup_note2_window_t3_ParamLimits

0x8706,	// (0x000277db) popup_note2_window_t3

0x874b,	// (0x00027820) popup_note2_window_t4_ParamLimits

0x874b,	// (0x00027820) popup_note2_window_t4

0x3a3b,	// (0x00022b10) popup_note2_window_t5_ParamLimits

0x3a3b,	// (0x00022b10) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0002ed3a) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0002ed3a) popup_note2_window_t

0x877a,	// (0x0002784f) popup_note2_image_window_g1_ParamLimits

0x877a,	// (0x0002784f) popup_note2_image_window_g1

0x8786,	// (0x0002785b) popup_note2_image_window_g2_ParamLimits

0x8786,	// (0x0002785b) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0002ed45) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0002ed45) popup_note2_image_window_g

0x8798,	// (0x0002786d) popup_note2_image_window_t1_ParamLimits

0x8798,	// (0x0002786d) popup_note2_image_window_t1

0x87b0,	// (0x00027885) popup_note2_image_window_t2_ParamLimits

0x87b0,	// (0x00027885) popup_note2_image_window_t2

0x87c8,	// (0x0002789d) popup_note2_image_window_t3_ParamLimits

0x87c8,	// (0x0002789d) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0002ed4a) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0002ed4a) popup_note2_image_window_t

0x5acc,	// (0x00024ba1) popup_note2_wait_window_g1_ParamLimits

0x5acc,	// (0x00024ba1) popup_note2_wait_window_g1

0x87e4,	// (0x000278b9) popup_note2_wait_window_g2_ParamLimits

0x87e4,	// (0x000278b9) popup_note2_wait_window_g2

0x5ae4,	// (0x00024bb9) popup_note2_wait_window_g3_ParamLimits

0x5ae4,	// (0x00024bb9) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0002ed51) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0002ed51) popup_note2_wait_window_g

0x87f0,	// (0x000278c5) popup_note2_wait_window_t1_ParamLimits

0x87f0,	// (0x000278c5) popup_note2_wait_window_t1

0x880e,	// (0x000278e3) popup_note2_wait_window_t2_ParamLimits

0x880e,	// (0x000278e3) popup_note2_wait_window_t2

0x882c,	// (0x00027901) popup_note2_wait_window_t3_ParamLimits

0x882c,	// (0x00027901) popup_note2_wait_window_t3

0x883e,	// (0x00027913) popup_note2_wait_window_t4_ParamLimits

0x883e,	// (0x00027913) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0002ed58) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0002ed58) popup_note2_wait_window_t

0x8850,	// (0x00027925) wait_bar2_pane_ParamLimits

0x8850,	// (0x00027925) wait_bar2_pane

0x8868,	// (0x0002793d) popup_snote2_single_text_window_g1_ParamLimits

0x8868,	// (0x0002793d) popup_snote2_single_text_window_g1

0x8890,	// (0x00027965) popup_snote2_single_text_window_t1_ParamLimits

0x8890,	// (0x00027965) popup_snote2_single_text_window_t1

0x88dc,	// (0x000279b1) popup_snote2_single_text_window_t2_ParamLimits

0x88dc,	// (0x000279b1) popup_snote2_single_text_window_t2

0x8928,	// (0x000279fd) popup_snote2_single_text_window_t3_ParamLimits

0x8928,	// (0x000279fd) popup_snote2_single_text_window_t3

0x8969,	// (0x00027a3e) popup_snote2_single_text_window_t4_ParamLimits

0x8969,	// (0x00027a3e) popup_snote2_single_text_window_t4

0x899f,	// (0x00027a74) popup_snote2_single_text_window_t5_ParamLimits

0x899f,	// (0x00027a74) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0002ed61) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0002ed61) popup_snote2_single_text_window_t

0x89ca,	// (0x00027a9f) popup_snote2_single_graphic_window_g1_ParamLimits

0x89ca,	// (0x00027a9f) popup_snote2_single_graphic_window_g1

0x89f2,	// (0x00027ac7) popup_snote2_single_graphic_window_g2_ParamLimits

0x89f2,	// (0x00027ac7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0002ed6c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0002ed6c) popup_snote2_single_graphic_window_g

0x8a1a,	// (0x00027aef) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a1a,	// (0x00027aef) popup_snote2_single_graphic_window_t1

0x8a66,	// (0x00027b3b) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a66,	// (0x00027b3b) popup_snote2_single_graphic_window_t2

0x8928,	// (0x000279fd) popup_snote2_single_graphic_window_t3_ParamLimits

0x8928,	// (0x000279fd) popup_snote2_single_graphic_window_t3

0x8969,	// (0x00027a3e) popup_snote2_single_graphic_window_t4_ParamLimits

0x8969,	// (0x00027a3e) popup_snote2_single_graphic_window_t4

0x899f,	// (0x00027a74) popup_snote2_single_graphic_window_t5_ParamLimits

0x899f,	// (0x00027a74) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0002ed71) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0002ed71) popup_snote2_single_graphic_window_t

0x7475,	// (0x0002654a) clock_nsta_pane_cp2_t1

0x7475,	// (0x0002654a) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0002eb91) clock_nsta_pane_cp2_t

0x06f4,	// (0x0001f7c9) form_field_data_wide_pane_g1_ParamLimits

0x3fa2,	// (0x00023077) form_field_data_wide_pane_g2_ParamLimits

0x3fa2,	// (0x00023077) form_field_data_wide_pane_g2

0x3fae,	// (0x00023083) form_field_data_wide_pane_g3_ParamLimits

0x3fae,	// (0x00023083) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e750) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e750) form_field_data_wide_pane_g

0xe071,	// (0x0002d146) grid_touch_3_pane_ParamLimits

0xe071,	// (0x0002d146) grid_touch_3_pane

0xe4ae,	// (0x0002d583) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0002d583) cell_touch_3_pane

0x79f3,	// (0x00026ac8) cell_touch_3_pane_g1

0x79f3,	// (0x00026ac8) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0002ec16) cell_touch_3_pane_g

0x3a6d,	// (0x00022b42) cont_query_data_pane

0x3a75,	// (0x00022b4a) cont_query_data_pane_cp1

0x8ae3,	// (0x00027bb8) button_value_adjust_pane_cp7

0x8aeb,	// (0x00027bc0) query_popup_pane_cp3

0x46d4,	// (0x000237a9) bg_popup_sub_pane_cp22_ParamLimits

0x1987,	// (0x00020a5c) navi_navi_volume_pane_cp2

0x199f,	// (0x00020a74) popup_side_volume_key_window_g2

0x19ab,	// (0x00020a80) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e7e6) popup_side_volume_key_window_g

0x19c5,	// (0x00020a9a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e7ed) popup_side_volume_key_window_t

0x49a2,	// (0x00023a77) popup_side_volume_key_window_ParamLimits

0xb762,	// (0x0002a837) list_double_graphic_pane_g4_ParamLimits

0xb762,	// (0x0002a837) list_double_graphic_pane_g4

0xdf31,	// (0x0002d006) list_single_2heading_msg_pane_ParamLimits

0xdf31,	// (0x0002d006) list_single_2heading_msg_pane

0xbca8,	// (0x0002ad7d) list_single_2heading_msg_pane_g1_ParamLimits

0xbca8,	// (0x0002ad7d) list_single_2heading_msg_pane_g1

0xbcb4,	// (0x0002ad89) list_single_2heading_msg_pane_g2_ParamLimits

0xbcb4,	// (0x0002ad89) list_single_2heading_msg_pane_g2

0xbcc7,	// (0x0002ad9c) list_single_2heading_msg_pane_g3_ParamLimits

0xbcc7,	// (0x0002ad9c) list_single_2heading_msg_pane_g3

0xbcd3,	// (0x0002ada8) list_single_2heading_msg_pane_g4_ParamLimits

0xbcd3,	// (0x0002ada8) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0002ed7c) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0002ed7c) list_single_2heading_msg_pane_g

0xbceb,	// (0x0002adc0) list_single_2heading_msg_pane_t1_ParamLimits

0xbceb,	// (0x0002adc0) list_single_2heading_msg_pane_t1

0xbd13,	// (0x0002ade8) list_single_2heading_msg_pane_t2_ParamLimits

0xbd13,	// (0x0002ade8) list_single_2heading_msg_pane_t2

0xbd7e,	// (0x0002ae53) list_single_2heading_msg_pane_t3_ParamLimits

0xbd7e,	// (0x0002ae53) list_single_2heading_msg_pane_t3

0x122e,	// (0x00020303) list_single_2heading_msg_pane_t4_ParamLimits

0x122e,	// (0x00020303) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0002ed85) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0002ed85) list_single_2heading_msg_pane_t

0x368e,	// (0x00022763) title_pane_g4_ParamLimits

0x368e,	// (0x00022763) title_pane_g4

0x1795,	// (0x0002086a) title_pane_stacon_g3_ParamLimits

0x1795,	// (0x0002086a) title_pane_stacon_g3

0x860e,	// (0x000276e3) list_single_2graphic_im_pane_g4_ParamLimits

0x860e,	// (0x000276e3) list_single_2graphic_im_pane_g4

0x6525,	// (0x000255fa) popup_side_volume_key_window_cp

0x6cd2,	// (0x00025da7) main_idle_act2_pane_t1

0x22f0,	// (0x000213c5) toolbar_button_pane_g10

0xd359,	// (0x0002c42e) popup_toolbar_window_cp1

0x7466,	// (0x0002653b) clock_nsta_pane_cp_t1

0x7466,	// (0x0002653b) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0002eb8c) clock_nsta_pane_cp_t

0x1987,	// (0x00020a5c) navi_navi_volume_pane_cp2_ParamLimits

0x1993,	// (0x00020a68) popup_side_volume_key_window_g1_ParamLimits

0x199f,	// (0x00020a74) popup_side_volume_key_window_g2_ParamLimits

0x19ab,	// (0x00020a80) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e7e6) popup_side_volume_key_window_g_ParamLimits

0x2760,	// (0x00021835) fep_hwr_aid_pane

0xda57,	// (0x0002cb2c) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a4f,	// (0x00026b24) fep_hwr_top_pane_g1_ParamLimits

0x7a61,	// (0x00026b36) fep_hwr_top_pane_g2_ParamLimits

0x2819,	// (0x000218ee) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0002ebe1) fep_hwr_top_pane_g_ParamLimits

0x282e,	// (0x00021903) fep_hwr_top_text_pane_ParamLimits

0x62e8,	// (0x000253bd) aid_touch_tab_arrow_arrow_2

0x62f1,	// (0x000253c6) aid_touch_tab_arrow_left_2

0x2774,	// (0x00021849) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x27ab,	// (0x00021880) fep_hwr_prediction_pane

0x7bb8,	// (0x00026c8d) fep_vkb_prediction_pane

0xe32b,	// (0x0002d400) fep_vkb_side_pane_g3_ParamLimits

0xe32b,	// (0x0002d400) fep_vkb_side_pane_g3

0x7c61,	// (0x00026d36) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x80e2,	// (0x000271b7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x80ef,	// (0x000271c4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0002ec8b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8b10,	// (0x00027be5) fep_hwr_prediction_pane_g1

0x2abb,	// (0x00021b90) fep_hwr_prediction_pane_g2

0x2ac3,	// (0x00021b98) fep_hwr_prediction_pane_g3

0x2acb,	// (0x00021ba0) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0002ed8e) fep_hwr_prediction_pane_g

0x8b10,	// (0x00027be5) fep_vkb_prediction_pane_g1

0x8b1a,	// (0x00027bef) fep_vkb_prediction_pane_g2

0x8b22,	// (0x00027bf7) fep_vkb_prediction_pane_g3

0x8b2a,	// (0x00027bff) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0002ed97) fep_vkb_prediction_pane_g

0x25bc,	// (0x00021691) slider_set_pane_g3

0x25d0,	// (0x000216a5) slider_set_pane_g4

0x25e8,	// (0x000216bd) slider_set_pane_g5

0x25bc,	// (0x00021691) slider_set_pane_g6

0x25fe,	// (0x000216d3) slider_set_pane_g7

0x6978,	// (0x00025a4d) slider_form_pane_g3

0x6981,	// (0x00025a56) slider_form_pane_g4

0x6989,	// (0x00025a5e) slider_form_pane_g5

0x6978,	// (0x00025a4d) slider_form_pane_g6

0xdeff,	// (0x0002cfd4) slider_form_pane_g7

0x6f71,	// (0x00026046) slider_set_pane_vc_g3

0x6f7a,	// (0x0002604f) slider_set_pane_vc_g4

0x6f83,	// (0x00026058) slider_set_pane_vc_g5

0x6f71,	// (0x00026046) slider_set_pane_vc_g6

0x6f8c,	// (0x00026061) slider_set_pane_vc_g7

0x713c,	// (0x00026211) slider_form_pane_vc_g1

0x7145,	// (0x0002621a) slider_form_pane_vc_g2

0x714e,	// (0x00026223) slider_form_pane_vc_g3

0x713c,	// (0x00026211) slider_form_pane_vc_g4

0x7157,	// (0x0002622c) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0002eb5e) slider_form_pane_vc_g

0x3646,	// (0x0002271b) main_idle_act3_pane

0x8b32,	// (0x00027c07) ai3_links_pane

0xe4f7,	// (0x0002d5cc) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0002d5cc) popup_ai3_data_window

0x3646,	// (0x0002271b) grid_ai3_links_pane

0xe50f,	// (0x0002d5e4) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0002d5e4) cell_ai3_links_pane

0x8b6b,	// (0x00027c40) bg_popup_sub_pane_cp11

0x8b78,	// (0x00027c4d) cell_ai3_links_pane_g1

0x3646,	// (0x0002271b) bg_popup_sub_pane_cp12

0x8b9d,	// (0x00027c72) heading_ai3_data_pane

0x8ba5,	// (0x00027c7a) list_ai3_gene_pane

0x8bb1,	// (0x00027c86) popup_ai3_data_window_g1

0x8bb9,	// (0x00027c8e) heading_ai3_data_pane_g1

0x8bc1,	// (0x00027c96) heading_ai3_data_pane_t1

0x8bcf,	// (0x00027ca4) list_double_ai3_gene_pane_ParamLimits

0x8bcf,	// (0x00027ca4) list_double_ai3_gene_pane

0x8bdc,	// (0x00027cb1) list_single_ai3_gene_pane_ParamLimits

0x8bdc,	// (0x00027cb1) list_single_ai3_gene_pane

0x79b8,	// (0x00026a8d) list_highlight_pane_cp7_ParamLimits

0x79b8,	// (0x00026a8d) list_highlight_pane_cp7

0x8be9,	// (0x00027cbe) list_single_a13_gene_pane_t1_ParamLimits

0x8be9,	// (0x00027cbe) list_single_a13_gene_pane_t1

0x8c00,	// (0x00027cd5) list_single_ai3_gene_pane_g1

0x8c09,	// (0x00027cde) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0002eda0) list_single_ai3_gene_pane_g

0x8c11,	// (0x00027ce6) list_double_ai3_gene_pane_g1_ParamLimits

0x8c11,	// (0x00027ce6) list_double_ai3_gene_pane_g1

0x8c1d,	// (0x00027cf2) list_double_ai3_gene_pane_t1_ParamLimits

0x8c1d,	// (0x00027cf2) list_double_ai3_gene_pane_t1

0x8c39,	// (0x00027d0e) list_double_ai3_gene_pane_t2_ParamLimits

0x8c39,	// (0x00027d0e) list_double_ai3_gene_pane_t2

0x8c4e,	// (0x00027d23) list_double_ai3_gene_pane_t3_ParamLimits

0x8c4e,	// (0x00027d23) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0002eda5) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0002eda5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x115f,	// (0x00020234) aid_size_min_col_2

0xe4e1,	// (0x0002d5b6) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0002d5b6) aid_size_min_msg

0xe33f,	// (0x0002d414) fep_vkb_top_text_pane_g2_ParamLimits

0xe33f,	// (0x0002d414) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0002ec11) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0002ec11) fep_vkb_top_text_pane_g

0x3646,	// (0x0002271b) main_hc_apps_shell_pane

0x8c6b,	// (0x00027d40) grid_hc_apps_pane_ParamLimits

0x8c6b,	// (0x00027d40) grid_hc_apps_pane

0x8c7a,	// (0x00027d4f) list_hc_apps_pane

0x8c82,	// (0x00027d57) scroll_pane_cp37_ParamLimits

0x8c82,	// (0x00027d57) scroll_pane_cp37

0xe529,	// (0x0002d5fe) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0002d5fe) cell_hc_apps_pane

0xe5e7,	// (0x0002d6bc) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0002d6bc) cell_hc_apps_pane_g1

0x8d6d,	// (0x00027e42) cell_hc_apps_pane_g2_ParamLimits

0x8d6d,	// (0x00027e42) cell_hc_apps_pane_g2

0x8d89,	// (0x00027e5e) cell_hc_apps_pane_g3_ParamLimits

0x8d89,	// (0x00027e5e) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0002edac) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0002edac) cell_hc_apps_pane_g

0xe614,	// (0x0002d6e9) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0002d6e9) cell_hc_apps_pane_t1

0x39c3,	// (0x00022a98) grid_highlight_pane_cp10_ParamLimits

0x39c3,	// (0x00022a98) grid_highlight_pane_cp10

0xe652,	// (0x0002d727) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0002d727) list_single_hc_apps_pane

0xe683,	// (0x0002d758) list_single_hc_apps_pane_g1

0xbdec,	// (0x0002aec1) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0002edb3) list_single_hc_apps_pane_g

0xbe05,	// (0x0002aeda) list_single_hc_apps_pane_g2_copy1

0xbe21,	// (0x0002aef6) list_single_hc_apps_pane_t1

0x373a,	// (0x0002280f) bg_set_opt_pane_cp_ParamLimits

0x16bc,	// (0x00020791) setting_slider_pane_t1_ParamLimits

0x16d5,	// (0x000207aa) setting_slider_pane_t2_ParamLimits

0x16ef,	// (0x000207c4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e633) setting_slider_pane_t_ParamLimits

0x1707,	// (0x000207dc) slider_set_pane_ParamLimits

0x1c27,	// (0x00020cfc) control_pane_g5_ParamLimits

0x1c27,	// (0x00020cfc) control_pane_g5

0x67d5,	// (0x000258aa) slider_set_pane_g1_ParamLimits

0x25b0,	// (0x00021685) slider_set_pane_g2_ParamLimits

0x25bc,	// (0x00021691) slider_set_pane_g3_ParamLimits

0x25d0,	// (0x000216a5) slider_set_pane_g4_ParamLimits

0x25e8,	// (0x000216bd) slider_set_pane_g5_ParamLimits

0x25bc,	// (0x00021691) slider_set_pane_g6_ParamLimits

0x25fe,	// (0x000216d3) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002ea2d) slider_set_pane_g_ParamLimits

0x4a8c,	// (0x00023b61) navi_icon_text_pane_ParamLimits

0xd75b,	// (0x0002c830) aid_fill_nsta_2_ParamLimits

0xd792,	// (0x0002c867) aid_touch_tab_arrow_left_ParamLimits

0xd7a8,	// (0x0002c87d) aid_touch_tab_arrow_right_ParamLimits

0xd843,	// (0x0002c918) clock_nsta_pane_ParamLimits

0x62ca,	// (0x0002539f) navi_icon_pane_g1_ParamLimits

0x62d6,	// (0x000253ab) navi_text_pane_t1_ParamLimits

0x7578,	// (0x0002664d) navi_icon_text_pane_g1_ParamLimits

0x7584,	// (0x00026659) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0002d758) list_single_hc_apps_pane_g1_ParamLimits

0xbdec,	// (0x0002aec1) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0002edb3) list_single_hc_apps_pane_g_ParamLimits

0xbe05,	// (0x0002aeda) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe21,	// (0x0002aef6) list_single_hc_apps_pane_t1_ParamLimits

0xbf85,	// (0x0002b05a) popup_toolbar2_fixed_window_ParamLimits

0xbf85,	// (0x0002b05a) popup_toolbar2_fixed_window

0xc80f,	// (0x0002b8e4) popup_toolbar2_float_window

0x3646,	// (0x0002271b) bg_popup_sub_pane_cp27

0x8e6c,	// (0x00027f41) grid_toolbar2_float_pane

0x3646,	// (0x0002271b) bg_popup_sub_pane_cp26

0x8e6c,	// (0x00027f41) grid_toolbar2_fixed_pane

0xe69c,	// (0x0002d771) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0002d771) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0002d78c) cell_toolbar2_fixed_pane_g1

0x53b8,	// (0x0002448d) toolbar2_fixed_button_pane

0x5438,	// (0x0002450d) toolbar2_fixed_button_pane_g1

0x5440,	// (0x00024515) toolbar2_fixed_button_pane_g2

0x5448,	// (0x0002451d) toolbar2_fixed_button_pane_g3

0x5450,	// (0x00024525) toolbar2_fixed_button_pane_g4

0x5458,	// (0x0002452d) toolbar2_fixed_button_pane_g5

0x5460,	// (0x00024535) toolbar2_fixed_button_pane_g6

0x5468,	// (0x0002453d) toolbar2_fixed_button_pane_g7

0x5470,	// (0x00024545) toolbar2_fixed_button_pane_g8

0x5478,	// (0x0002454d) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002e92f) toolbar2_fixed_button_pane_g

0x8e8e,	// (0x00027f63) cell_toolbar2_float_pane_ParamLimits

0x8e8e,	// (0x00027f63) cell_toolbar2_float_pane

0x8ea2,	// (0x00027f77) cell_toolbar2_float_pane_g1

0x53b8,	// (0x0002448d) toolbar2_fixed_button_pane_cp

0xe227,	// (0x0002d2fc) fep_vkb_accented_list_pane_ParamLimits

0xe227,	// (0x0002d2fc) fep_vkb_accented_list_pane

0x297c,	// (0x00021a51) bg_popup_fep_shadow_pane_g9

0x4c00,	// (0x00023cd5) bg_popup_fep_shadow_pane_cp3

0x40e9,	// (0x000231be) list_accented_list_pane

0x8eab,	// (0x00027f80) list_single_accented_list_pane_ParamLimits

0x8eab,	// (0x00027f80) list_single_accented_list_pane

0x4c00,	// (0x00023cd5) list_highlight_pane_cp10

0x8ebc,	// (0x00027f91) list_single_accented_list_pane_t1

0xc739,	// (0x0002b80e) popup_slider_window_ParamLimits

0xc739,	// (0x0002b80e) popup_slider_window

0x8af3,	// (0x00027bc8) aid_indentation_list_msg

0xe7b0,	// (0x0002d885) bg_popup_window_pane_cp19

0x8fe0,	// (0x000280b5) popup_slider_window_g1

0x8ffc,	// (0x000280d1) popup_slider_window_g2

0x9018,	// (0x000280ed) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0002edb8) popup_slider_window_g

0x9074,	// (0x00028149) popup_slider_window_t1

0x90e8,	// (0x000281bd) small_volume_slider_vertical_pane

0x79f3,	// (0x00026ac8) small_volume_slider_vertical_pane_g1

0x79f3,	// (0x00026ac8) small_volume_slider_vertical_pane_g2

0x9104,	// (0x000281d9) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0002edca) small_volume_slider_vertical_pane_g

0xbef3,	// (0x0002afc8) area_side_right_pane_ParamLimits

0xbef3,	// (0x0002afc8) area_side_right_pane

0xca36,	// (0x0002bb0b) aid_size_side_button_ParamLimits

0xca36,	// (0x0002bb0b) aid_size_side_button

0xca4f,	// (0x0002bb24) grid_sctrl_middle_pane_ParamLimits

0xca4f,	// (0x0002bb24) grid_sctrl_middle_pane

0x2b06,	// (0x00021bdb) sctrl_sk_bottom_pane

0x2b17,	// (0x00021bec) sctrl_sk_top_pane

0x2b29,	// (0x00021bfe) aid_touch_sctrl_top

0x39c3,	// (0x00022a98) bg_sctrl_sk_pane_ParamLimits

0x39c3,	// (0x00022a98) bg_sctrl_sk_pane

0x2b36,	// (0x00021c0b) sctrl_sk_top_pane_g1

0x2b43,	// (0x00021c18) sctrl_sk_top_pane_t1

0x2b29,	// (0x00021bfe) aid_touch_sctrl_bottom

0x39c3,	// (0x00022a98) bg_sctrl_sk_pane_cp_ParamLimits

0x39c3,	// (0x00022a98) bg_sctrl_sk_pane_cp

0x2b5e,	// (0x00021c33) sctrl_sk_bottom_pane_g1

0x2b43,	// (0x00021c18) sctrl_sk_bottom_pane_t1

0xca69,	// (0x0002bb3e) cell_sctrl_middle_pane_ParamLimits

0xca69,	// (0x0002bb3e) cell_sctrl_middle_pane

0xca7a,	// (0x0002bb4f) aid_touch_sctrl_middle_ParamLimits

0xca7a,	// (0x0002bb4f) aid_touch_sctrl_middle

0xca87,	// (0x0002bb5c) bg_sctrl_middle_pane_ParamLimits

0xca87,	// (0x0002bb5c) bg_sctrl_middle_pane

0x918c,	// (0x00028261) cell_sctrl_middle_pane_g1_ParamLimits

0x918c,	// (0x00028261) cell_sctrl_middle_pane_g1

0xca95,	// (0x0002bb6a) cell_sctrl_middle_pane_g2_ParamLimits

0xca95,	// (0x0002bb6a) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0002edd6) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0002edd6) cell_sctrl_middle_pane_g

0x5438,	// (0x0002450d) bg_sctrl_middle_pane_g1

0x5440,	// (0x00024515) bg_sctrl_middle_pane_g2

0x5448,	// (0x0002451d) bg_sctrl_middle_pane_g3

0x5450,	// (0x00024525) bg_sctrl_middle_pane_g4

0x5458,	// (0x0002452d) bg_sctrl_middle_pane_g5

0x5460,	// (0x00024535) bg_sctrl_middle_pane_g6

0x5468,	// (0x0002453d) bg_sctrl_middle_pane_g7

0x5470,	// (0x00024545) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0002eddb) bg_sctrl_middle_pane_g

0x5478,	// (0x0002454d) bg_sctrl_middle_pane_g8_copy1

0x5438,	// (0x0002450d) bg_sctrl_sk_pane_g1

0x5440,	// (0x00024515) bg_sctrl_sk_pane_g2

0x5448,	// (0x0002451d) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002e92f) bg_sctrl_sk_pane_g

0x3ec3,	// (0x00022f98) aid_size_touch_scroll_bar

0x5450,	// (0x00024525) bg_sctrl_sk_pane_g4

0x5458,	// (0x0002452d) bg_sctrl_sk_pane_g5

0x5460,	// (0x00024535) bg_sctrl_sk_pane_g6

0x5468,	// (0x0002453d) bg_sctrl_sk_pane_g7

0x5470,	// (0x00024545) bg_sctrl_sk_pane_g8

0x5478,	// (0x0002454d) bg_sctrl_sk_pane_g9

0x1db7,	// (0x00020e8c) popup_fep_china_hwr2_fs_candidate_window

0xc267,	// (0x0002b33c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc267,	// (0x0002b33c) popup_fep_china_hwr2_fs_control_window

0x7c61,	// (0x00026d36) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0002edd1) sctrl_sk_top_pane_g

0xe868,	// (0x0002d93d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0002d93d) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0002d951) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0002d951) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0002d968) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0002d968) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0002d97a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0002d97a) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0002d98e) popup_fep_china_hwr2_fs_control_funtion_grid

0x9160,	// (0x00028235) aid_fep_china_hwr2_fs_candi_cell

0x3646,	// (0x0002271b) bg_popup_fep_shadow_pane_cp6

0x916a,	// (0x0002823f) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0002d996) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0002d996) cell_fep_china_hwr2_fs_funtion_grid

0x79f3,	// (0x00026ac8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x918c,	// (0x00028261) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x918c,	// (0x00028261) cell_fep_china_hwr2_fs_funtion_grid_g1

0x919a,	// (0x0002826f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x919a,	// (0x0002826f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0002edec) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0002edec) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0002d9ae) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0002d9ae) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0002d9c3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0002d9c3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0002edf1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0002edf1) cell_fep_china_hwr2_fs_funtion_grid_t

0x91e1,	// (0x000282b6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91e9,	// (0x000282be) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91f1,	// (0x000282c6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0002edf6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91f9,	// (0x000282ce) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91f9,	// (0x000282ce) cell_fep_china_hwr2_fs_candidate_grid

0x9212,	// (0x000282e7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x921a,	// (0x000282ef) popup_fep_china_hwr2_fs_candidate_grid_g21

0x79f3,	// (0x00026ac8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x79f3,	// (0x00026ac8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0002ec16) cell_fep_china_hwr2_fs_candidate_grid_g

0x9222,	// (0x000282f7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5036,	// (0x0002410b) clock_nsta_pane_cp_24_ParamLimits

0x5036,	// (0x0002410b) clock_nsta_pane_cp_24

0x50b4,	// (0x00024189) indicator_nsta_pane_cp_24_ParamLimits

0x50b4,	// (0x00024189) indicator_nsta_pane_cp_24

0x6146,	// (0x0002521b) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002e994) heading_pane_g

0x6b1b,	// (0x00025bf0) grid_sct_catagory_button_pane

0x6b4b,	// (0x00025c20) scroll_pane_cp5_ParamLimits

0x75c6,	// (0x0002669b) button_value_adjust_pane_cp5_ParamLimits

0x75c6,	// (0x0002669b) button_value_adjust_pane_cp5

0x76a5,	// (0x0002677a) form2_midp_time_pane_ParamLimits

0x9230,	// (0x00028305) cell_sct_catagory_button_pane_ParamLimits

0x9230,	// (0x00028305) cell_sct_catagory_button_pane

0x79b8,	// (0x00026a8d) bg_button_pane_cp01_ParamLimits

0x79b8,	// (0x00026a8d) bg_button_pane_cp01

0x79f3,	// (0x00026ac8) cell_sct_catagory_button_pane_g1

0xc7b2,	// (0x0002b887) popup_tb_extension_window

0xe90a,	// (0x0002d9df) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0002d9df) aid_size_cell_ext

0x3d05,	// (0x00022dda) bg_tb_trans_pane_cp1_ParamLimits

0x3d05,	// (0x00022dda) bg_tb_trans_pane_cp1

0xe930,	// (0x0002da05) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0002da05) grid_tb_ext_pane

0xe972,	// (0x0002da47) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0002da47) cell_tb_ext_pane

0xe99a,	// (0x0002da6f) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0002da6f) cell_tb_ext_pane_g1

0x92c8,	// (0x0002839d) cell_tb_ext_pane_t1

0x39c3,	// (0x00022a98) list_highlight_pane_cp11_ParamLimits

0x39c3,	// (0x00022a98) list_highlight_pane_cp11

0xbf9a,	// (0x0002b06f) popup_uni_indicator_window_ParamLimits

0xbf9a,	// (0x0002b06f) popup_uni_indicator_window

0x3f94,	// (0x00023069) bg_popup_sub_pane_cp14

0x92e3,	// (0x000283b8) list_uniindi_pane

0x92ef,	// (0x000283c4) uniindi_top_pane

0x39c3,	// (0x00022a98) bg_uniindi_top_pane

0x930e,	// (0x000283e3) uniindi_top_pane_g1

0x9324,	// (0x000283f9) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0002edfd) uniindi_top_pane_g

0x934e,	// (0x00028423) uniindi_top_pane_t1

0x9378,	// (0x0002844d) list_single_uniindi_pane_ParamLimits

0x9378,	// (0x0002844d) list_single_uniindi_pane

0x79f3,	// (0x00026ac8) bg_uniindi_top_pane_g1

0x938b,	// (0x00028460) list_single_uniindi_pane_g1

0x939e,	// (0x00028473) list_single_uniindi_pane_t1

0x3646,	// (0x0002271b) control_bg_pane

0x93c3,	// (0x00028498) bg_sctrl_sk_pane_cp1

0x93cc,	// (0x000284a1) bg_sctrl_sk_pane_cp2

0x93d5,	// (0x000284aa) control_bg_pane_g1

0x93de,	// (0x000284b3) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0002ee06) control_bg_pane_g

0x740a,	// (0x000264df) cell_indicator_nsta_pane_g1_ParamLimits

0xe09e,	// (0x0002d173) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0002eb7a) cell_indicator_nsta_pane_g_ParamLimits

0x0f1c,	// (0x0001fff1) form2_midp_time_pane_t1_ParamLimits

0x2752,	// (0x00021827) main_idle_act4_pane_ParamLimits

0x2752,	// (0x00021827) main_idle_act4_pane

0xc7b2,	// (0x0002b887) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0002da2d) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0002da2d) tb_ext_find_pane

0x93e7,	// (0x000284bc) ai_gene_pane_1_cp1

0x4d3f,	// (0x00023e14) ai_gene_pane_2_cp1

0x93ef,	// (0x000284c4) list_single_idle_plugin_calendar_pane

0x93f8,	// (0x000284cd) list_single_idle_plugin_notification_pane

0x9401,	// (0x000284d6) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0002da8c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0002da8c) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0002dab4) main_idle_act4_pane_t1

0xe9f5,	// (0x0002daca) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0002ee0b) main_idle_act4_pane_t

0xea0d,	// (0x0002dae2) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0002dae2) middle_sk_idle_act4_pane

0xea29,	// (0x0002dafe) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0002db25) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0002db25) shortcut_wheel_idle_act4_pane

0x79f3,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g1

0x79f3,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g2

0x79f3,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g3

0x79f3,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g4

0x79f3,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g5

0x9494,	// (0x00028569) shortcut_wheel_idle_act4_pane_g6

0x949c,	// (0x00028571) shortcut_wheel_idle_act4_pane_g7

0x94a4,	// (0x00028579) shortcut_wheel_idle_act4_pane_g8

0x94ac,	// (0x00028581) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0002ee10) shortcut_wheel_idle_act4_pane_g

0xda57,	// (0x0002cb2c) middle_sk_idle_act4_pane_g1_ParamLimits

0xda57,	// (0x0002cb2c) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0002dba2) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0002dba2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0002ee33) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0002ee33) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0002dbba) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0002dbba) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0002dbe9) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0002dbe9) grid_ai_shortcut_pane

0xeb31,	// (0x0002dc06) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0002dc06) list_highlight_pane_cp16

0xeb3e,	// (0x0002dc13) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0002dc13) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0002dc1f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0002dc1f) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0002dc3b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0002dc3b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0002ee38) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0002ee38) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0002dc50) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0002dc50) cell_ai_shortcut_pane

0xeb91,	// (0x0002dc66) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0002dc66) cell_ai_shortcut_pane_g1

0x93e7,	// (0x000284bc) ai_gene_pane_1_cp2

0x95d9,	// (0x000286ae) ai_gene_pane_2_cp2

0x95e1,	// (0x000286b6) list_highlight_pane_cp15

0x95ea,	// (0x000286bf) list_single_idle_plugin_calendar_pane_g1

0x95e1,	// (0x000286b6) list_highlight_pane_cp17

0x95f2,	// (0x000286c7) list_single_idle_plugin_calendar_pane_g1_copy1

0x95fa,	// (0x000286cf) list_single_idle_plugin_player_pane_g1

0x6d72,	// (0x00025e47) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0002ee3f) list_single_idle_plugin_player_pane_g

0x9602,	// (0x000286d7) list_single_idle_plugin_player_pane_t1

0x9610,	// (0x000286e5) list_single_idle_plugin_player_pane_t2

0x961e,	// (0x000286f3) list_single_idle_plugin_player_pane_t3

0x962c,	// (0x00028701) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0002ee44) list_single_idle_plugin_player_pane_t

0x963a,	// (0x0002870f) wait_bar_pane_cp15

0x9642,	// (0x00028717) grid_ai_notification_pane

0x6d72,	// (0x00025e47) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0002dc88) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0002dc88) cell_ai_notification_pane

0x9658,	// (0x0002872d) cell_ai_notification_pane_g1

0x9660,	// (0x00028735) cell_ai_notification_pane_t1

0xebc0,	// (0x0002dc95) tb_ext_find_button_pane

0xebc8,	// (0x0002dc9d) tb_ext_find_pane_g1

0xebd0,	// (0x0002dca5) tb_ext_find_pane_t1

0x45e8,	// (0x000236bd) tb_ext_find_button_pane_g1

0x968c,	// (0x00028761) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0002ee4d) tb_ext_find_button_pane_g

0xe9df,	// (0x0002dab4) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0002daca) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0002ee0b) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0002dafe) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0002db15) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0002db15) sat_plugin_idle_act4_pane

0xebde,	// (0x0002dcb3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0002dcb3) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0002dccb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0002dccb) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0002dce3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0002dce3) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0002dcfb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0002dcfb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0002ee52) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0002ee52) sat_plugin_idle_act4_pane_t

0x152e,	// (0x00020603) popup_battery_window_ParamLimits

0x152e,	// (0x00020603) popup_battery_window

0x39c3,	// (0x00022a98) bg_popup_sub_pane_cp25_ParamLimits

0x39c3,	// (0x00022a98) bg_popup_sub_pane_cp25

0x96e1,	// (0x000287b6) popup_battery_window_g1_ParamLimits

0x96e1,	// (0x000287b6) popup_battery_window_g1

0x96ed,	// (0x000287c2) popup_battery_window_t1_ParamLimits

0x96ed,	// (0x000287c2) popup_battery_window_t1

0x96ff,	// (0x000287d4) popup_battery_window_t2_ParamLimits

0x96ff,	// (0x000287d4) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0002ee5b) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0002ee5b) popup_battery_window_t

0xd5c2,	// (0x0002c697) midp_canvas_pane_ParamLimits

0xd621,	// (0x0002c6f6) midp_keypad_pane_ParamLimits

0xd621,	// (0x0002c6f6) midp_keypad_pane

0x4f3a,	// (0x0002400f) main_midp_pane_ParamLimits

0x7484,	// (0x00026559) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0002dd13) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0002dd13) aid_size_cell_midp_keypad

0xec5c,	// (0x0002dd31) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0002dd31) midp_keyp_game_grid_pane

0xec83,	// (0x0002dd58) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0002dd58) midp_keyp_rocker_pane

0xecd4,	// (0x0002dda9) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0002dda9) midp_keyp_sk_left_pane

0xed28,	// (0x0002ddfd) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0002ddfd) midp_keyp_sk_right_pane

0x3646,	// (0x0002271b) bg_button_pane_cp03

0xed7c,	// (0x0002de51) midp_keyp_sk_left_pane_g1

0x3646,	// (0x0002271b) bg_button_pane_cp04

0xed7c,	// (0x0002de51) midp_keyp_sk_right_pane_g1

0x79f3,	// (0x00026ac8) midp_keyp_rocker_pane_g1

0xed85,	// (0x0002de5a) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0002de5a) keyp_game_cell_pane

0x3646,	// (0x0002271b) bg_button_pane_cp02

0xeda9,	// (0x0002de7e) keyp_game_cell_pane_g1

0xbf35,	// (0x0002b00a) popup_fep_vkb2_window_ParamLimits

0xbf35,	// (0x0002b00a) popup_fep_vkb2_window

0xcaa1,	// (0x0002bb76) aid_size_cell_vkb2_ParamLimits

0xcaa1,	// (0x0002bb76) aid_size_cell_vkb2

0xcad7,	// (0x0002bbac) popup_fep_vkb2_window_g1_ParamLimits

0xcad7,	// (0x0002bbac) popup_fep_vkb2_window_g1

0xcb27,	// (0x0002bbfc) vkb2_area_bottom_pane_ParamLimits

0xcb27,	// (0x0002bbfc) vkb2_area_bottom_pane

0xcb7b,	// (0x0002bc50) vkb2_area_keypad_pane_ParamLimits

0xcb7b,	// (0x0002bc50) vkb2_area_keypad_pane

0xcbc3,	// (0x0002bc98) vkb2_area_top_pane_ParamLimits

0xcbc3,	// (0x0002bc98) vkb2_area_top_pane

0xcc49,	// (0x0002bd1e) vkb2_top_entry_pane_ParamLimits

0xcc49,	// (0x0002bd1e) vkb2_top_entry_pane

0xcc76,	// (0x0002bd4b) vkb2_top_grid_left_pane_ParamLimits

0xcc76,	// (0x0002bd4b) vkb2_top_grid_left_pane

0xcc96,	// (0x0002bd6b) vkb2_top_grid_right_pane_ParamLimits

0xcc96,	// (0x0002bd6b) vkb2_top_grid_right_pane

0x2dbc,	// (0x00021e91) vkb2_cell_keypad_pane_ParamLimits

0x2dbc,	// (0x00021e91) vkb2_cell_keypad_pane

0xccdc,	// (0x0002bdb1) vkb2_area_bottom_grid_pane_ParamLimits

0xccdc,	// (0x0002bdb1) vkb2_area_bottom_grid_pane

0xcd06,	// (0x0002bddb) vkb2_area_bottom_pane_g1_ParamLimits

0xcd06,	// (0x0002bddb) vkb2_area_bottom_pane_g1

0xcd2c,	// (0x0002be01) vkb2_area_bottom_pane_g2_ParamLimits

0xcd2c,	// (0x0002be01) vkb2_area_bottom_pane_g2

0xcd5d,	// (0x0002be32) vkb2_area_bottom_pane_g3_ParamLimits

0xcd5d,	// (0x0002be32) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0002ee60) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0002ee60) vkb2_area_bottom_pane_g

0x2f66,	// (0x0002203b) vkb2_top_cell_left_pane_ParamLimits

0x2f66,	// (0x0002203b) vkb2_top_cell_left_pane

0xedb2,	// (0x0002de87) vkb2_top_entry_pane_g1_ParamLimits

0xedb2,	// (0x0002de87) vkb2_top_entry_pane_g1

0xedc0,	// (0x0002de95) vkb2_top_entry_pane_t1_ParamLimits

0xedc0,	// (0x0002de95) vkb2_top_entry_pane_t1

0x98b0,	// (0x00028985) vkb2_top_entry_pane_t2_ParamLimits

0x98b0,	// (0x00028985) vkb2_top_entry_pane_t2

0x98e2,	// (0x000289b7) vkb2_top_entry_pane_t3_ParamLimits

0x98e2,	// (0x000289b7) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0002ee67) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0002ee67) vkb2_top_entry_pane_t

0xcdc7,	// (0x0002be9c) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdc7,	// (0x0002be9c) vkb2_top_grid_right_pane_g1

0x2fc9,	// (0x0002209e) vkb2_top_grid_right_pane_g2_ParamLimits

0x2fc9,	// (0x0002209e) vkb2_top_grid_right_pane_g2

0x2fe1,	// (0x000220b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x2fe1,	// (0x000220b6) vkb2_top_grid_right_pane_g3

0xcddd,	// (0x0002beb2) vkb2_top_grid_right_pane_g4_ParamLimits

0xcddd,	// (0x0002beb2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0002ee6e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0002ee6e) vkb2_top_grid_right_pane_g

0x300f,	// (0x000220e4) vkb2_top_cell_left_pane_g1

0x3026,	// (0x000220fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x3026,	// (0x000220fb) vkb2_cell_keypad_pane_g1

0x9906,	// (0x000289db) vkb2_cell_keypad_pane_t1_ParamLimits

0x9906,	// (0x000289db) vkb2_cell_keypad_pane_t1

0x3034,	// (0x00022109) vkb2_cell_bottom_grid_pane_ParamLimits

0x3034,	// (0x00022109) vkb2_cell_bottom_grid_pane

0x306d,	// (0x00022142) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0002db46) aid_call2_pane_cp02

0xea79,	// (0x0002db4e) aid_call_pane_cp02

0xea81,	// (0x0002db56) clock_digital_number_pane_cp10

0xea89,	// (0x0002db5e) clock_digital_number_pane_cp11

0xea91,	// (0x0002db66) clock_digital_number_pane_cp12

0xea99,	// (0x0002db6e) clock_digital_number_pane_cp13

0xeaa1,	// (0x0002db76) clock_digital_separator_pane_cp10

0x45e8,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g1

0x45e8,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0002db7e) popup_clock_digital_analogue_window_cp2_g3

0x45e8,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0002db7e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0002ee23) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0002db86) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0002db94) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0002ee2e) popup_clock_digital_analogue_window_cp2_t

0x79f3,	// (0x00026ac8) clock_digital_number_pane_cp10_g1

0x79f3,	// (0x00026ac8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0002ec16) clock_digital_number_pane_cp10_g

0x79f3,	// (0x00026ac8) clock_digital_separator_pane_cp10_g1

0x79f3,	// (0x00026ac8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0002ec16) clock_digital_separator_pane_cp10_g

0x9330,	// (0x00028405) uniindi_top_pane_g3

0x9341,	// (0x00028416) uniindi_top_pane_g4

0x2e47,	// (0x00021f1c) vkb2_row_keypad_pane_ParamLimits

0x2e47,	// (0x00021f1c) vkb2_row_keypad_pane

0x308d,	// (0x00022162) vkb2_cell_t_keypad_pane_ParamLimits

0x308d,	// (0x00022162) vkb2_cell_t_keypad_pane

0x309d,	// (0x00022172) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x309d,	// (0x00022172) vkb2_cell_t_keypad_pane_cp08

0x30b0,	// (0x00022185) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x30b0,	// (0x00022185) vkb2_cell_t_keypad_pane_cp09

0x30c4,	// (0x00022199) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x30c4,	// (0x00022199) vkb2_cell_t_keypad_pane_cp01

0x30d5,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x30d5,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp02

0x30e6,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x30e6,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp03

0x30f7,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x30f7,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp04

0x3108,	// (0x000221dd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3108,	// (0x000221dd) vkb2_cell_t_keypad_pane_cp05

0x3119,	// (0x000221ee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3119,	// (0x000221ee) vkb2_cell_t_keypad_pane_cp06

0x312a,	// (0x000221ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x312a,	// (0x000221ff) vkb2_cell_t_keypad_pane_cp07

0x313b,	// (0x00022210) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x313b,	// (0x00022210) vkb2_cell_t_keypad_pane_cp10

0x7c61,	// (0x00026d36) vkb2_cell_t_keypad_pane_g1

0x991d,	// (0x000289f2) vkb2_cell_t_keypad_pane_t1

0x3646,	// (0x0002271b) popup_grid_graphic2_window

0xedf9,	// (0x0002dece) aid_size_cell_graphic2_ParamLimits

0xedf9,	// (0x0002dece) aid_size_cell_graphic2

0xee37,	// (0x0002df0c) bg_popup_window_pane_cp21_ParamLimits

0xee37,	// (0x0002df0c) bg_popup_window_pane_cp21

0xee45,	// (0x0002df1a) graphic2_pages_pane_ParamLimits

0xee45,	// (0x0002df1a) graphic2_pages_pane

0xee9b,	// (0x0002df70) grid_graphic2_control_pane_ParamLimits

0xee9b,	// (0x0002df70) grid_graphic2_control_pane

0xeee3,	// (0x0002dfb8) grid_graphic2_pane_ParamLimits

0xeee3,	// (0x0002dfb8) grid_graphic2_pane

0xef6a,	// (0x0002e03f) cell_graphic2_pane

0x3646,	// (0x0002271b) main_comp_mode_pane

0x8ba5,	// (0x00027c7a) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0002d885) bg_popup_window_pane_cp19_ParamLimits

0x8f82,	// (0x00028057) bg_touch_area_indi_pane_ParamLimits

0x8f82,	// (0x00028057) bg_touch_area_indi_pane

0x8f98,	// (0x0002806d) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f98,	// (0x0002806d) bg_touch_area_indi_pane_cp01

0x8fae,	// (0x00028083) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fae,	// (0x00028083) bg_touch_area_indi_pane_cp02

0x8fc6,	// (0x0002809b) bg_touch_area_indi_pane_cp03_ParamLimits

0x8fc6,	// (0x0002809b) bg_touch_area_indi_pane_cp03

0x8fe0,	// (0x000280b5) popup_slider_window_g1_ParamLimits

0x8ffc,	// (0x000280d1) popup_slider_window_g2_ParamLimits

0x9018,	// (0x000280ed) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0002edb8) popup_slider_window_g_ParamLimits

0x9074,	// (0x00028149) popup_slider_window_t1_ParamLimits

0x90e8,	// (0x000281bd) small_volume_slider_vertical_pane_ParamLimits

0xef6a,	// (0x0002e03f) cell_graphic2_pane_ParamLimits

0xefc7,	// (0x0002e09c) bg_button_pane_cp10_ParamLimits

0xefc7,	// (0x0002e09c) bg_button_pane_cp10

0xefda,	// (0x0002e0af) bg_button_pane_cp11_ParamLimits

0xefda,	// (0x0002e0af) bg_button_pane_cp11

0xefed,	// (0x0002e0c2) graphic2_pages_pane_g1_ParamLimits

0xefed,	// (0x0002e0c2) graphic2_pages_pane_g1

0xf008,	// (0x0002e0dd) graphic2_pages_pane_g2_ParamLimits

0xf008,	// (0x0002e0dd) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0002ee7c) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0002ee7c) graphic2_pages_pane_g

0xf020,	// (0x0002e0f5) graphic2_pages_pane_t1_ParamLimits

0xf020,	// (0x0002e0f5) graphic2_pages_pane_t1

0xf038,	// (0x0002e10d) cell_graphic2_control_pane_ParamLimits

0xf038,	// (0x0002e10d) cell_graphic2_control_pane

0xf06a,	// (0x0002e13f) cell_graphic2_pane_g1_ParamLimits

0xf06a,	// (0x0002e13f) cell_graphic2_pane_g1

0xda65,	// (0x0002cb3a) cell_graphic2_pane_g2_ParamLimits

0xda65,	// (0x0002cb3a) cell_graphic2_pane_g2

0xf077,	// (0x0002e14c) cell_graphic2_pane_g3_ParamLimits

0xf077,	// (0x0002e14c) cell_graphic2_pane_g3

0xda72,	// (0x0002cb47) cell_graphic2_pane_g4_ParamLimits

0xda72,	// (0x0002cb47) cell_graphic2_pane_g4

0xf084,	// (0x0002e159) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0002e159) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0002ee81) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0002ee81) cell_graphic2_pane_g

0xf0a4,	// (0x0002e179) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0002e179) cell_graphic2_pane_t1

0x613a,	// (0x0002520f) grid_highlight_pane_cp11_ParamLimits

0x613a,	// (0x0002520f) grid_highlight_pane_cp11

0x39c3,	// (0x00022a98) bg_button_pane_cp05

0xf0d8,	// (0x0002e1ad) cell_graphic2_control_pane_g1

0x79f3,	// (0x00026ac8) bg_touch_area_indi_pane_g1

0x9beb,	// (0x00028cc0) aid_cmod_rocker_key_size

0x9bf5,	// (0x00028cca) aid_cmode_itu_key_size

0x9bff,	// (0x00028cd4) main_cmode_video_pane

0x9c09,	// (0x00028cde) main_comp_mode_itu_pane

0x9c15,	// (0x00028cea) main_comp_mode_rocker_pane

0x9c21,	// (0x00028cf6) cell_cmode_rocker_pane_ParamLimits

0x9c21,	// (0x00028cf6) cell_cmode_rocker_pane

0x9c33,	// (0x00028d08) cell_cmode_itu_pane_ParamLimits

0x9c33,	// (0x00028d08) cell_cmode_itu_pane

0x3f94,	// (0x00023069) bg_button_pane_cp06_ParamLimits

0x3f94,	// (0x00023069) bg_button_pane_cp06

0x7c61,	// (0x00026d36) cell_cmode_rocker_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) cell_cmode_rocker_pane_g1

0x918c,	// (0x00028261) cell_cmode_rocker_pane_g2_ParamLimits

0x918c,	// (0x00028261) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0002ee8c) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0002ee8c) cell_cmode_rocker_pane_g

0x3646,	// (0x0002271b) bg_button_pane_cp07

0x9c48,	// (0x00028d1d) cell_cmode_itu_pane_g1

0x9c51,	// (0x00028d26) cell_cmode_itu_pane_t1

0x9c5f,	// (0x00028d34) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0002ee91) cell_cmode_itu_pane_t

0x93b3,	// (0x00028488) aid_touch_ctrl_left

0x93bb,	// (0x00028490) aid_touch_ctrl_right

0x3646,	// (0x0002271b) compa_mode_pane

0xf0fc,	// (0x0002e1d1) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0002e1db) aid_cmode_itu_key_size_cp

0x9c81,	// (0x00028d56) compa_mode_pane_g1

0x9c89,	// (0x00028d5e) compa_mode_pane_g2

0x9c91,	// (0x00028d66) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0002ee96) compa_mode_pane_g

0xf110,	// (0x0002e1e5) main_comp_mode_itu_pane_cp

0xf118,	// (0x0002e1ed) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0002e1f5) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0002e1f5) cell_cmode_itu_pane_cp

0xf135,	// (0x0002e20a) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0002e20a) cell_cmode_rocker_pane_cp

0x3f94,	// (0x00023069) bg_button_pane_cp06_cp_ParamLimits

0x3f94,	// (0x00023069) bg_button_pane_cp06_cp

0x7c61,	// (0x00026d36) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c61,	// (0x00026d36) cell_cmode_rocker_pane_g1_cp

0x79f3,	// (0x00026ac8) cell_cmode_rocker_pane_g2_cp

0x3646,	// (0x0002271b) bg_button_pane_cp07_cp

0xf147,	// (0x0002e21c) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0002e225) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0002e225) cell_cmode_itu_pane_t2_cp

0xdef5,	// (0x0002cfca) settings_code_pane_cp2

0x373a,	// (0x0002280f) bg_popup_window_pane_cp3_ParamLimits

0x3b91,	// (0x00022c66) heading_pane_cp3_ParamLimits

0x3b9d,	// (0x00022c72) listscroll_popup_graphic_pane_ParamLimits

0x2760,	// (0x00021835) fep_hwr_aid_pane_ParamLimits

0x2b29,	// (0x00021bfe) aid_touch_sctrl_top_ParamLimits

0x2b36,	// (0x00021c0b) sctrl_sk_top_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0002edd1) sctrl_sk_top_pane_g_ParamLimits

0x2b43,	// (0x00021c18) sctrl_sk_top_pane_t1_ParamLimits

0x2b29,	// (0x00021bfe) aid_touch_sctrl_bottom_ParamLimits

0x2b43,	// (0x00021c18) sctrl_sk_bottom_pane_t1_ParamLimits

0x92fc,	// (0x000283d1) aid_area_touch_clock

0xcc0b,	// (0x0002bce0) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc0b,	// (0x0002bce0) aid_vkb2_area_top_pane_cell

0xccb6,	// (0x0002bd8b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccb6,	// (0x0002bd8b) aid_vkb2_area_bottom_pane_cell

0x9868,	// (0x0002893d) popup_char_count_window

0x9ce7,	// (0x00028dbc) popup_char_count_window_g1

0x9cf0,	// (0x00028dc5) popup_char_count_window_g2

0x9cf9,	// (0x00028dce) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0002ee9d) popup_char_count_window_g

0x9d02,	// (0x00028dd7) popup_char_count_window_t1

0x2be4,	// (0x00021cb9) popup_fep_char_preview_window_ParamLimits

0x2be4,	// (0x00021cb9) popup_fep_char_preview_window

0xcc2b,	// (0x0002bd00) vkb2_top_candi_pane_ParamLimits

0xcc2b,	// (0x0002bd00) vkb2_top_candi_pane

0xf15e,	// (0x0002e233) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0002e233) cell_vkb2_top_candi_pane

0x5abe,	// (0x00024b93) bg_popup_fep_char_preview_window_ParamLimits

0x5abe,	// (0x00024b93) bg_popup_fep_char_preview_window

0x3150,	// (0x00022225) popup_fep_char_preview_window_t1_ParamLimits

0x3150,	// (0x00022225) popup_fep_char_preview_window_t1

0x9d5d,	// (0x00028e32) bg_popup_fep_char_preview_window_g1

0x9d65,	// (0x00028e3a) bg_popup_fep_char_preview_window_g2

0x9d6d,	// (0x00028e42) bg_popup_fep_char_preview_window_g3

0x9d75,	// (0x00028e4a) bg_popup_fep_char_preview_window_g4

0x9d7d,	// (0x00028e52) bg_popup_fep_char_preview_window_g5

0x318a,	// (0x0002225f) bg_popup_fep_char_preview_window_g6

0x9d85,	// (0x00028e5a) bg_popup_fep_char_preview_window_g7

0x9d8d,	// (0x00028e62) bg_popup_fep_char_preview_window_g8

0x9d95,	// (0x00028e6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0002eea4) bg_popup_fep_char_preview_window_g

0x7c61,	// (0x00026d36) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) cell_vkb2_top_candi_pane_g1

0x7f78,	// (0x0002704d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f78,	// (0x0002704d) cell_vkb2_top_candi_pane_g2

0x7f99,	// (0x0002706e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f99,	// (0x0002706e) cell_vkb2_top_candi_pane_g3

0x3192,	// (0x00022267) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3192,	// (0x00022267) cell_vkb2_top_candi_pane_g4

0x9d9d,	// (0x00028e72) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d9d,	// (0x00028e72) cell_vkb2_top_candi_pane_g5

0x918c,	// (0x00028261) cell_vkb2_top_candi_pane_g6_ParamLimits

0x918c,	// (0x00028261) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0002eeb7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0002eeb7) cell_vkb2_top_candi_pane_g

0x31b3,	// (0x00022288) cell_vkb2_top_candi_pane_t1

0x259c,	// (0x00021671) aid_size_touch_slider_mark_ParamLimits

0x259c,	// (0x00021671) aid_size_touch_slider_mark

0xee81,	// (0x0002df56) grid_graphic2_catg_pane_ParamLimits

0xee81,	// (0x0002df56) grid_graphic2_catg_pane

0xef3d,	// (0x0002e012) popup_grid_graphic2_window_t1_ParamLimits

0xef3d,	// (0x0002e012) popup_grid_graphic2_window_t1

0xef53,	// (0x0002e028) popup_grid_graphic2_window_t2_ParamLimits

0xef53,	// (0x0002e028) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0002ee77) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0002ee77) popup_grid_graphic2_window_t

0x39c3,	// (0x00022a98) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0002e1ad) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0002e299) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0002e299) cell_graphic2_catg_pane

0x3646,	// (0x0002271b) bg_button_pane_cp12

0xf1d6,	// (0x0002e2ab) cell_graphic2_catg_pane_g1

0x92c8,	// (0x0002839d) cell_tb_ext_pane_t1_ParamLimits

0x2f86,	// (0x0002205b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2f86,	// (0x0002205b) vkb2_top_cell_right_narrow_pane

0x2f9e,	// (0x00022073) vkb2_top_cell_right_wide_pane_ParamLimits

0x2f9e,	// (0x00022073) vkb2_top_cell_right_wide_pane

0x2752,	// (0x00021827) bg_vkb2_func_pane_ParamLimits

0x2752,	// (0x00021827) bg_vkb2_func_pane

0x300f,	// (0x000220e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp03

0x306d,	// (0x00022142) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5440,	// (0x00024515) bg_vkb2_func_pane_g1

0x5448,	// (0x0002451d) bg_vkb2_func_pane_g2

0x5458,	// (0x0002452d) bg_vkb2_func_pane_g3

0x5450,	// (0x00024525) bg_vkb2_func_pane_g4

0x5460,	// (0x00024535) bg_vkb2_func_pane_g5

0x5468,	// (0x0002453d) bg_vkb2_func_pane_g6

0x5470,	// (0x00024545) bg_vkb2_func_pane_g7

0x5478,	// (0x0002454d) bg_vkb2_func_pane_g8

0x5438,	// (0x0002450d) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0002eec4) bg_vkb2_func_pane_g

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp01

0x300f,	// (0x000220e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x300f,	// (0x000220e4) vkb2_top_cell_right_wide_pane_g1

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2752,	// (0x00021827) bg_vkb2_fuc_pane_cp02

0x306d,	// (0x00022142) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x306d,	// (0x00022142) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0002d7bf) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0002d7bf) aid_touch_area_decrease

0xe724,	// (0x0002d7f9) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0002d7f9) aid_touch_area_increase

0xe74c,	// (0x0002d821) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0002d821) aid_touch_area_mute

0xe77c,	// (0x0002d851) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0002d851) aid_touch_area_slider

0xe7bc,	// (0x0002d891) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0002d891) popup_slider_window_g4

0xe7e4,	// (0x0002d8b9) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0002d8b9) popup_slider_window_g5

0xe818,	// (0x0002d8ed) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0002d8ed) popup_slider_window_g6

0x90a2,	// (0x00028177) popup_slider_window_t2_ParamLimits

0x90a2,	// (0x00028177) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0002edc5) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0002edc5) popup_slider_window_t

0xe834,	// (0x0002d909) slider_pane_ParamLimits

0xe834,	// (0x0002d909) slider_pane

0x9dd9,	// (0x00028eae) slider_pane_g1_ParamLimits

0x9dd9,	// (0x00028eae) slider_pane_g1

0x9ded,	// (0x00028ec2) slider_pane_g2_ParamLimits

0x9ded,	// (0x00028ec2) slider_pane_g2

0x9e03,	// (0x00028ed8) slider_pane_g3_ParamLimits

0x9e03,	// (0x00028ed8) slider_pane_g3

0x0003,

0xfe02,	// (0x0002eed7) slider_pane_g_ParamLimits

0xfe02,	// (0x0002eed7) slider_pane_g

0xc7fa,	// (0x0002b8cf) popup_tb_float_extension_window_ParamLimits

0xc7fa,	// (0x0002b8cf) popup_tb_float_extension_window

0x9e2f,	// (0x00028f04) aid_size_cell_tb_float_ext

0x3646,	// (0x0002271b) bg_popup_sub_window_cp28

0x9e3b,	// (0x00028f10) grid_tb_float_ext_pane

0x9e45,	// (0x00028f1a) cell_tb_float_ext_pane_ParamLimits

0x9e45,	// (0x00028f1a) cell_tb_float_ext_pane

0x9e5f,	// (0x00028f34) cell_tb_float_ext_pane_g1

0x9e68,	// (0x00028f3d) grid_highlight_pane_cp12

0xca14,	// (0x0002bae9) cell_last_hwr_side_pane_ParamLimits

0xca14,	// (0x0002bae9) cell_last_hwr_side_pane

0x79f3,	// (0x00026ac8) cell_last_hwr_side_pane_g1

0x9e71,	// (0x00028f46) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0002eee0) cell_last_hwr_side_pane_g

0xcd92,	// (0x0002be67) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd92,	// (0x0002be67) vkb2_area_bottom_space_btn_pane

0x7c61,	// (0x00026d36) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x991d,	// (0x000289f2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x31b3,	// (0x00022288) cell_vkb2_top_candi_pane_t1_ParamLimits

0x31d2,	// (0x000222a7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x31d2,	// (0x000222a7) vkb2_area_bottom_space_btn_pane_g1

0x320c,	// (0x000222e1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x320c,	// (0x000222e1) vkb2_area_bottom_space_btn_pane_g2

0x3242,	// (0x00022317) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3242,	// (0x00022317) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0002eee5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0002eee5) vkb2_area_bottom_space_btn_pane_g

0x2807,	// (0x000218dc) cel_fep_hwr_func_pane_ParamLimits

0x2807,	// (0x000218dc) cel_fep_hwr_func_pane

0xc9e9,	// (0x0002babe) cell_hwr_side_button_pane_ParamLimits

0xc9e9,	// (0x0002babe) cell_hwr_side_button_pane

0x92fc,	// (0x000283d1) aid_area_touch_clock_ParamLimits

0x39c3,	// (0x00022a98) bg_uniindi_top_pane_ParamLimits

0x930e,	// (0x000283e3) uniindi_top_pane_g1_ParamLimits

0x9324,	// (0x000283f9) uniindi_top_pane_g2_ParamLimits

0x9330,	// (0x00028405) uniindi_top_pane_g3_ParamLimits

0x9341,	// (0x00028416) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0002edfd) uniindi_top_pane_g_ParamLimits

0x934e,	// (0x00028423) uniindi_top_pane_t1_ParamLimits

0x39c3,	// (0x00022a98) bg_vkb2_func_pane_cp01_ParamLimits

0x39c3,	// (0x00022a98) bg_vkb2_func_pane_cp01

0x9e7a,	// (0x00028f4f) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e7a,	// (0x00028f4f) cel_fep_hwr_func_pane_g1

0x39c3,	// (0x00022a98) bg_vkb2_func_pane_cp02_ParamLimits

0x39c3,	// (0x00022a98) bg_vkb2_func_pane_cp02

0x9e7a,	// (0x00028f4f) cell_hwr_side_button_pane_g1_ParamLimits

0x9e7a,	// (0x00028f4f) cell_hwr_side_button_pane_g1

0x52b9,	// (0x0002438e) status_pane_g4_ParamLimits

0x52b9,	// (0x0002438e) status_pane_g4

0x52d3,	// (0x000243a8) status_pane_t1

0x770d,	// (0x000267e2) form2_midp_gauge_slider_cont_pane

0x7715,	// (0x000267ea) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe16b,	// (0x0002d240) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe17f,	// (0x0002d254) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0002ebc9) form2_midp_gauge_slider_pane_t_ParamLimits

0x774b,	// (0x00026820) form2_midp_slider_pane_ParamLimits

0x2ba4,	// (0x00021c79) aid_size_cell_func_vkb2_ParamLimits

0x2ba4,	// (0x00021c79) aid_size_cell_func_vkb2

0x9e1b,	// (0x00028ef0) slider_pane_g4_ParamLimits

0x9e1b,	// (0x00028ef0) slider_pane_g4

0xcdf3,	// (0x0002bec8) form2_midp_gauge_slider_pane_t2_cp01

0xce03,	// (0x0002bed8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce03,	// (0x0002bed8) form2_midp_gauge_slider_pane_t3_cp01

0x32b7,	// (0x0002238c) form2_midp_slider_pane_cp01

0x3646,	// (0x0002271b) navi_smil_pane

0x9eb3,	// (0x00028f88) navi_smil_pane_g1

0x9ebb,	// (0x00028f90) navi_smil_pane_t1

0x9e88,	// (0x00028f5d) form2_midp_slider_pane_g1

0x9e91,	// (0x00028f66) form2_midp_slider_pane_g2

0x9e99,	// (0x00028f6e) form2_midp_slider_pane_g3

0x9e88,	// (0x00028f5d) form2_midp_slider_pane_g4

0xf1df,	// (0x0002e2b4) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0002eeee) form2_midp_slider_pane_g

0x327c,	// (0x00022351) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x327c,	// (0x00022351) vkb2_area_bottom_space_btn_pane_g4

0xd88e,	// (0x0002c963) lc0_navi_pane_ParamLimits

0xd88e,	// (0x0002c963) lc0_navi_pane

0xd8f8,	// (0x0002c9cd) lc0_stat_indi_pane_ParamLimits

0xd8f8,	// (0x0002c9cd) lc0_stat_indi_pane

0xd90d,	// (0x0002c9e2) ls0_title_pane_ParamLimits

0xd90d,	// (0x0002c9e2) ls0_title_pane

0x3f94,	// (0x00023069) bg_popup_sub_pane_cp14_ParamLimits

0x92e3,	// (0x000283b8) list_uniindi_pane_ParamLimits

0x92ef,	// (0x000283c4) uniindi_top_pane_ParamLimits

0x938b,	// (0x00028460) list_single_uniindi_pane_g1_ParamLimits

0x939e,	// (0x00028473) list_single_uniindi_pane_t1_ParamLimits

0xce22,	// (0x0002bef7) lc0_stat_clock_pane_ParamLimits

0xce22,	// (0x0002bef7) lc0_stat_clock_pane

0xf1ea,	// (0x0002e2bf) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0002e2bf) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0002e2cc) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0002e2cc) lc0_stat_indi_pane_g2

0x0001,

0x0088,	// (0x0001f15d) lc0_stat_indi_pane_g_ParamLimits

0x0088,	// (0x0001f15d) lc0_stat_indi_pane_g

0xce2f,	// (0x0002bf04) lc0_uni_indicator_pane_ParamLimits

0xce2f,	// (0x0002bf04) lc0_uni_indicator_pane

0xf204,	// (0x0002e2d9) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0002e2d9) ls0_title_pane_g1

0xf218,	// (0x0002e2ed) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0002e2ed) ls0_title_pane_t1

0xce3c,	// (0x0002bf11) lc0_uni_indicator_pane_g1_ParamLimits

0xce3c,	// (0x0002bf11) lc0_uni_indicator_pane_g1

0x9f2d,	// (0x00029002) lc0_stat_clock_pane_t1

0x3646,	// (0x0002271b) main_ai5_pane

0x9f3b,	// (0x00029010) ai5_sk_pane_ParamLimits

0x9f3b,	// (0x00029010) ai5_sk_pane

0xf246,	// (0x0002e31b) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0002e31b) cell_ai5_widget_pane

0xa012,	// (0x000290e7) aid_size_cell_widget_grid

0xa028,	// (0x000290fd) bg_ai5_widget_pane_ParamLimits

0xa028,	// (0x000290fd) bg_ai5_widget_pane

0xa09c,	// (0x00029171) cell_ai5_widget_pane_g2

0xa0ac,	// (0x00029181) cell_ai5_widget_pane_g3

0xa0c3,	// (0x00029198) cell_ai5_widget_pane_g4

0xa0cf,	// (0x000291a4) cell_ai5_widget_pane_g5

0xa0db,	// (0x000291b0) cell_ai5_widget_pane_g6

0xa0e7,	// (0x000291bc) cell_ai5_widget_pane_g7

0xa12f,	// (0x00029204) cell_ai5_widget_pane_t1_ParamLimits

0xa12f,	// (0x00029204) cell_ai5_widget_pane_t1

0xa14c,	// (0x00029221) cell_ai5_widget_pane_t2_ParamLimits

0xa14c,	// (0x00029221) cell_ai5_widget_pane_t2

0xa164,	// (0x00029239) cell_ai5_widget_pane_t3_ParamLimits

0xa164,	// (0x00029239) cell_ai5_widget_pane_t3

0xa17c,	// (0x00029251) cell_ai5_widget_pane_t4_ParamLimits

0xa17c,	// (0x00029251) cell_ai5_widget_pane_t4

0xa199,	// (0x0002926e) cell_ai5_widget_pane_t5_ParamLimits

0xa199,	// (0x0002926e) cell_ai5_widget_pane_t5

0xa1b8,	// (0x0002928d) cell_ai5_widget_pane_t6_ParamLimits

0xa1b8,	// (0x0002928d) cell_ai5_widget_pane_t6

0xa1ca,	// (0x0002929f) cell_ai5_widget_pane_t7_ParamLimits

0xa1ca,	// (0x0002929f) cell_ai5_widget_pane_t7

0xa1e3,	// (0x000292b8) cell_ai5_widget_pane_t8_ParamLimits

0xa1e3,	// (0x000292b8) cell_ai5_widget_pane_t8

0x0009,

0xfe39,	// (0x0002ef0e) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x0002ef0e) cell_ai5_widget_pane_t

0xa237,	// (0x0002930c) grid_ai5_widget_pane

0x3f94,	// (0x00023069) highlight_cell_ai5_widget_pane_ParamLimits

0x3f94,	// (0x00023069) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0002e385) ai5_sk_left_pane

0xf2ba,	// (0x0002e38f) ai5_sk_middle_pane

0xf2c4,	// (0x0002e399) ai5_sk_right_pane

0xa26d,	// (0x00029342) bg_ai5_widget_pane_g1_ParamLimits

0xa26d,	// (0x00029342) bg_ai5_widget_pane_g1

0xa279,	// (0x0002934e) bg_ai5_widget_pane_g2_ParamLimits

0xa279,	// (0x0002934e) bg_ai5_widget_pane_g2

0xa285,	// (0x0002935a) bg_ai5_widget_pane_g3_ParamLimits

0xa285,	// (0x0002935a) bg_ai5_widget_pane_g3

0xa291,	// (0x00029366) bg_ai5_widget_pane_g4_ParamLimits

0xa291,	// (0x00029366) bg_ai5_widget_pane_g4

0xa29d,	// (0x00029372) bg_ai5_widget_pane_g5_ParamLimits

0xa29d,	// (0x00029372) bg_ai5_widget_pane_g5

0xa2a9,	// (0x0002937e) bg_ai5_widget_pane_g6_ParamLimits

0xa2a9,	// (0x0002937e) bg_ai5_widget_pane_g6

0xa2b5,	// (0x0002938a) bg_ai5_widget_pane_g7_ParamLimits

0xa2b5,	// (0x0002938a) bg_ai5_widget_pane_g7

0xa2c1,	// (0x00029396) bg_ai5_widget_pane_g8_ParamLimits

0xa2c1,	// (0x00029396) bg_ai5_widget_pane_g8

0xa2cd,	// (0x000293a2) bg_ai5_widget_pane_g9_ParamLimits

0xa2cd,	// (0x000293a2) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x0002ef23) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0002ef23) bg_ai5_widget_pane_g

0xa2ff,	// (0x000293d4) cell_shortcut_ai5_widget_pane_ParamLimits

0xa2ff,	// (0x000293d4) cell_shortcut_ai5_widget_pane

0x4c00,	// (0x00023cd5) bg_cell_shortcut_ai5_widget_pane

0xa310,	// (0x000293e5) cell_grid_ai5_widget_pane_g1

0x4c00,	// (0x00023cd5) highlight_cell_shortcut_ai5_widget_pane

0x5448,	// (0x0002451d) ai5_sk_left_pane_g1

0xa319,	// (0x000293ee) ai5_sk_left_pane_g2

0xa321,	// (0x000293f6) ai5_sk_left_pane_g3

0xa329,	// (0x000293fe) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x0002ef36) ai5_sk_left_pane_g

0xa331,	// (0x00029406) ai5_sk_left_pane_t1

0x5440,	// (0x00024515) ai5_sk_right_pane_g1

0xa33f,	// (0x00029414) ai5_sk_right_pane_g2

0xa347,	// (0x0002941c) ai5_sk_right_pane_g3

0xa34f,	// (0x00029424) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x0002ef3f) ai5_sk_right_pane_g

0xa357,	// (0x0002942c) ai5_sk_right_pane_t1

0x5440,	// (0x00024515) ai5_sk_middle_pane_g1

0x5448,	// (0x0002451d) ai5_sk_middle_pane_g2

0x5460,	// (0x00024535) ai5_sk_middle_pane_g3

0xa347,	// (0x0002941c) ai5_sk_middle_pane_g4

0xa321,	// (0x000293f6) ai5_sk_middle_pane_g5

0xa365,	// (0x0002943a) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0002e3a3) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x0002ef48) ai5_sk_middle_pane_g

0xd77a,	// (0x0002c84f) aid_touch_area_size_lc0_ParamLimits

0xd77a,	// (0x0002c84f) aid_touch_area_size_lc0

0x2992,	// (0x00021a67) cell_hwr_candidate_pane_t1_ParamLimits

0x4f9c,	// (0x00024071) aid_touch_navi_pane

0xda06,	// (0x0002cadb) status_dt_navi_pane_ParamLimits

0xda06,	// (0x0002cadb) status_dt_navi_pane

0xda1e,	// (0x0002caf3) status_dt_sta_pane_ParamLimits

0xda1e,	// (0x0002caf3) status_dt_sta_pane

0xf2d6,	// (0x0002e3ab) dt_sta_controll_pane

0xf2e3,	// (0x0002e3b8) dt_sta_indi_pane

0xf2f0,	// (0x0002e3c5) dt_sta_title_pane

0x39c3,	// (0x00022a98) bg_dt_sta_indi_pane_ParamLimits

0x39c3,	// (0x00022a98) bg_dt_sta_indi_pane

0xa3a6,	// (0x0002947b) dt_sta_battery_pane

0xf302,	// (0x0002e3d7) dt_sta_indi_pane_g1

0xf30b,	// (0x0002e3e0) dt_sta_indi_pane_g2

0xf314,	// (0x0002e3e9) dt_sta_indi_pane_g3

0x0002,

0x00eb,	// (0x0001f1c0) dt_sta_indi_pane_g

0xf31d,	// (0x0002e3f2) dt_sta_signal_pane

0x3f94,	// (0x00023069) bg_dt_sta_title_pane_ParamLimits

0x3f94,	// (0x00023069) bg_dt_sta_title_pane

0xa3d2,	// (0x000294a7) dt_sta_title_pane_g1

0xf326,	// (0x0002e3fb) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0002e3fb) dt_sta_title_pane_t1

0x3646,	// (0x0002271b) bg_dt_sta_control_pane

0xf33b,	// (0x0002e410) dt_sta_controll_pane_g1

0xa3f8,	// (0x000294cd) bg_dt_sta_title_pane_g1

0xa401,	// (0x000294d6) bg_dt_sta_title_pane_g2

0xa40a,	// (0x000294df) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0002ef57) bg_dt_sta_title_pane_g

0x79f3,	// (0x00026ac8) bg_dt_sta_indi_pane_g1

0xa413,	// (0x000294e8) dt_sta_signal_pane_g1

0xa41b,	// (0x000294f0) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0002ef5e) dt_sta_signal_pane_g

0xa423,	// (0x000294f8) dt_sta_battery_pane_g1

0xa42c,	// (0x00029501) dt_sta_battery_pane_t1

0x79f3,	// (0x00026ac8) bg_dt_sta_control_pane_g1

0x46f6,	// (0x000237cb) fep_china_uni_eep_pane

0x46fe,	// (0x000237d3) fep_china_uni_entry_pane_ParamLimits

0x470e,	// (0x000237e3) popup_fep_china_uni_window_g1_ParamLimits

0x471e,	// (0x000237f3) popup_fep_china_uni_window_g2_ParamLimits

0x471e,	// (0x000237f3) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e7f2) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e7f2) popup_fep_china_uni_window_g

0xa43b,	// (0x00029510) fep_china_uni_eep_pane_g1

0xa443,	// (0x00029518) fep_china_uni_eep_pane_t1

0x9eaa,	// (0x00028f7f) aid_touch_area_size_smil_player

0x50e8,	// (0x000241bd) lc0_clock_pane

0x52c7,	// (0x0002439c) status_pane_g5_ParamLimits

0x52c7,	// (0x0002439c) status_pane_g5

0xc388,	// (0x0002b45d) popup_keymap_window

0x528d,	// (0x00024362) status_icon_pane

0xa0ac,	// (0x00029181) cell_ai5_widget_pane_g3_ParamLimits

0xa0c3,	// (0x00029198) cell_ai5_widget_pane_g4_ParamLimits

0xa0cf,	// (0x000291a4) cell_ai5_widget_pane_g5_ParamLimits

0xa0f3,	// (0x000291c8) cell_ai5_widget_pane_g8_ParamLimits

0xa0f3,	// (0x000291c8) cell_ai5_widget_pane_g8

0xa107,	// (0x000291dc) cell_ai5_widget_pane_g9_ParamLimits

0xa107,	// (0x000291dc) cell_ai5_widget_pane_g9

0xa11b,	// (0x000291f0) cell_ai5_widget_pane_g10_ParamLimits

0xa11b,	// (0x000291f0) cell_ai5_widget_pane_g10

0xa452,	// (0x00029527) status_icon_pane_g1

0x3646,	// (0x0002271b) bg_popup_sub_pane_cp13

0xa45a,	// (0x0002952f) popup_keymap_window_t1

0xd710,	// (0x0002c7e5) control_pane_g6_ParamLimits

0xd710,	// (0x0002c7e5) control_pane_g6

0xd71d,	// (0x0002c7f2) control_pane_g7_ParamLimits

0xd71d,	// (0x0002c7f2) control_pane_g7

0xd72a,	// (0x0002c7ff) control_pane_g8_ParamLimits

0xd72a,	// (0x0002c7ff) control_pane_g8

0xf2d6,	// (0x0002e3ab) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0002e3b8) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0002e3c5) dt_sta_title_pane_ParamLimits

0x3ecc,	// (0x00022fa1) aid_size_touch_scroll_bar_cale

0x1542,	// (0x00020617) popup_discreet_window_ParamLimits

0x1542,	// (0x00020617) popup_discreet_window

0xbf7b,	// (0x0002b050) popup_sk_window

0x5abe,	// (0x00024b93) bg_popup_sub_pane_cp28_ParamLimits

0x5abe,	// (0x00024b93) bg_popup_sub_pane_cp28

0xa468,	// (0x0002953d) popup_discreet_window_g1_ParamLimits

0xa468,	// (0x0002953d) popup_discreet_window_g1

0xa488,	// (0x0002955d) popup_discreet_window_t1_ParamLimits

0xa488,	// (0x0002955d) popup_discreet_window_t1

0xa4a6,	// (0x0002957b) popup_discreet_window_t2_ParamLimits

0xa4a6,	// (0x0002957b) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0002ef63) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0002ef63) popup_discreet_window_t

0x32ef,	// (0x000223c4) popup_sk_window_g1

0x32f9,	// (0x000223ce) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0002ef6a) popup_sk_window_g

0x3303,	// (0x000223d8) popup_sk_window_t1

0x3311,	// (0x000223e6) popup_sk_window_t1_copy1

0xa09c,	// (0x00029171) cell_ai5_widget_pane_g2_ParamLimits

0xa1f5,	// (0x000292ca) cell_ai5_widget_pane_t9_ParamLimits

0xa1f5,	// (0x000292ca) cell_ai5_widget_pane_t9

0x3646,	// (0x0002271b) main_fep_fshwr2_pane

0xce6a,	// (0x0002bf3f) aid_fshwr2_btn_pane

0xce7b,	// (0x0002bf50) aid_fshwr2_syb_pane

0xce8c,	// (0x0002bf61) aid_fshwr2_txt_pane

0xce98,	// (0x0002bf6d) fshwr2_func_candi_pane

0xceb7,	// (0x0002bf8c) fshwr2_hwr_syb_pane

0xced2,	// (0x0002bfa7) fshwr2_icf_pane

0x3646,	// (0x0002271b) fshwr2_icf_bg_pane

0xcefb,	// (0x0002bfd0) fshwr2_icf_pane_t1_ParamLimits

0xcefb,	// (0x0002bfd0) fshwr2_icf_pane_t1

0x45e8,	// (0x000236bd) fshwr2_func_candi_pane_g1

0xf344,	// (0x0002e419) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0002e419) fshwr2_func_candi_row_pane

0xcf14,	// (0x0002bfe9) cell_fshwr2_syb_pane_ParamLimits

0xcf14,	// (0x0002bfe9) cell_fshwr2_syb_pane

0x7c61,	// (0x00026d36) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) fshwr2_hwr_syb_pane_g1

0x3646,	// (0x0002271b) bg_popup_call_pane_cp01

0xcf2a,	// (0x0002bfff) fshwr2_func_candi_cell_pane_ParamLimits

0xcf2a,	// (0x0002bfff) fshwr2_func_candi_cell_pane

0xf354,	// (0x0002e429) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0002e429) fshwr2_func_candi_cell_bg_pane

0xcf5f,	// (0x0002c034) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf5f,	// (0x0002c034) fshwr2_func_candi_cell_pane_g1

0xcf8e,	// (0x0002c063) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf8e,	// (0x0002c063) fshwr2_func_candi_cell_pane_t1

0x3646,	// (0x0002271b) bg_button_pane_cp08

0x6dda,	// (0x00025eaf) cell_fshwr2_syb_bg_pane

0xcfa1,	// (0x0002c076) cell_fshwr2_syb_bg_pane_g1

0xcfa9,	// (0x0002c07e) cell_fshwr2_syb_bg_pane_t1

0x3f94,	// (0x00023069) main_tmo_pane

0xdd28,	// (0x0002cdfd) uni_indicator_pane_g1_ParamLimits

0xdd3e,	// (0x0002ce13) uni_indicator_pane_g2_ParamLimits

0xdd54,	// (0x0002ce29) uni_indicator_pane_g3_ParamLimits

0x6614,	// (0x000256e9) uni_indicator_pane_g4_ParamLimits

0x6614,	// (0x000256e9) uni_indicator_pane_g4

0x6628,	// (0x000256fd) uni_indicator_pane_g5_ParamLimits

0x6628,	// (0x000256fd) uni_indicator_pane_g5

0x6628,	// (0x000256fd) uni_indicator_pane_g6_ParamLimits

0x6628,	// (0x000256fd) uni_indicator_pane_g6

0xf915,	// (0x0002e9ea) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0002d7a1) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0002d7a1) popup_tmo_note_window

0x3f94,	// (0x00023069) fshwr2_bg_pane

0xcf7f,	// (0x0002c054) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf7f,	// (0x0002c054) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0002ef6f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0002ef6f) fshwr2_func_candi_cell_pane_g

0x79f3,	// (0x00026ac8) bg_popup_window_pane_cp01

0x343e,	// (0x00022513) bg_popup_window_pane_g1_cp01

0xa508,	// (0x000295dd) bg_popup_window_pane_cp22_ParamLimits

0xa508,	// (0x000295dd) bg_popup_window_pane_cp22

0xa516,	// (0x000295eb) listscroll_tmo_link_pane_ParamLimits

0xa516,	// (0x000295eb) listscroll_tmo_link_pane

0xa556,	// (0x0002962b) popup_tmo_note_window_g1_ParamLimits

0xa556,	// (0x0002962b) popup_tmo_note_window_g1

0xa563,	// (0x00029638) tmo_note_info_pane_ParamLimits

0xa563,	// (0x00029638) tmo_note_info_pane

0xf360,	// (0x0002e435) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0002e435) list_tmo_note_info_pane_g1

0xa594,	// (0x00029669) list_tmo_note_info_pane_g2_ParamLimits

0xa594,	// (0x00029669) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0002ef74) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0002ef74) list_tmo_note_info_pane_g

0xa5b0,	// (0x00029685) list_tmo_note_info_text_pane_ParamLimits

0xa5b0,	// (0x00029685) list_tmo_note_info_text_pane

0xa633,	// (0x00029708) list_tmo_link_pane

0xa640,	// (0x00029715) scroll_pane_cp20

0xa64d,	// (0x00029722) list_single_tmo_link_pane_ParamLimits

0xa64d,	// (0x00029722) list_single_tmo_link_pane

0xa65d,	// (0x00029732) list_single_tmo_link_pane_t1

0xa66b,	// (0x00029740) list_tmo_note_info_text_pane_t1_ParamLimits

0xa66b,	// (0x00029740) list_tmo_note_info_text_pane_t1

0xd363,	// (0x0002c438) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd363,	// (0x0002c438) aid_size_touch_scroll_bar_cp01

0xba84,	// (0x0002ab59) aid_size_touch_slider_marker

0xbf6b,	// (0x0002b040) popup_settings_window_ParamLimits

0xbf6b,	// (0x0002b040) popup_settings_window

0x0907,	// (0x0001f9dc) popup_candi_list_indi_window

0x4f9c,	// (0x00024071) aid_touch_navi_pane_ParamLimits

0x2afd,	// (0x00021bd2) rs_clock_indi_pane

0x2b06,	// (0x00021bdb) sctrl_sk_bottom_pane_ParamLimits

0x2b17,	// (0x00021bec) sctrl_sk_top_pane_ParamLimits

0x2bfe,	// (0x00021cd3) popup_fep_tooltip_window

0xa012,	// (0x000290e7) aid_size_cell_widget_grid_ParamLimits

0xa087,	// (0x0002915c) cell_ai5_widget_pane_g1_ParamLimits

0xa087,	// (0x0002915c) cell_ai5_widget_pane_g1

0xa0db,	// (0x000291b0) cell_ai5_widget_pane_g6_ParamLimits

0xa0e7,	// (0x000291bc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe24,	// (0x0002eef9) cell_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x0002eef9) cell_ai5_widget_pane_g

0xa219,	// (0x000292ee) cell_ai5_widget_pane_t10_ParamLimits

0xa219,	// (0x000292ee) cell_ai5_widget_pane_t10

0xa237,	// (0x0002930c) grid_ai5_widget_pane_ParamLimits

0xa2d9,	// (0x000293ae) cell_contacts_ai5_widget_pane_ParamLimits

0xa2d9,	// (0x000293ae) cell_contacts_ai5_widget_pane

0xa4bb,	// (0x00029590) popup_discreet_window_t3_ParamLimits

0xa4bb,	// (0x00029590) popup_discreet_window_t3

0xcee7,	// (0x0002bfbc) popup_fshwr2_char_preview_window_ParamLimits

0xcee7,	// (0x0002bfbc) popup_fshwr2_char_preview_window

0xf377,	// (0x0002e44c) tmo_note_info_pane_t1

0xf38c,	// (0x0002e461) tmo_note_info_pane_t2

0xf3a5,	// (0x0002e47a) tmo_note_info_pane_t3

0xa60f,	// (0x000296e4) tmo_note_info_pane_t4

0xa621,	// (0x000296f6) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0002ef79) tmo_note_info_pane_t

0xa633,	// (0x00029708) list_tmo_link_pane_ParamLimits

0xa640,	// (0x00029715) scroll_pane_cp20_ParamLimits

0x3646,	// (0x0002271b) bg_popup_fep_char_preview_window_cp01

0xa684,	// (0x00029759) popup_fshwr2_char_preview_window_t1

0xa692,	// (0x00029767) popup_candi_list_indi_window_g1

0xa69b,	// (0x00029770) bg_cell_contacts_ai5_widget_pane

0xa6a7,	// (0x0002977c) cell_contacts_ai5_widget_pane_g1

0xa6bc,	// (0x00029791) cell_contacts_ai5_widget_pane_g2

0xa6c8,	// (0x0002979d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0002ef84) cell_contacts_ai5_widget_pane_g

0xa6d4,	// (0x000297a9) cell_contacts_ai5_widget_pane_t1

0x3f94,	// (0x00023069) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0002e48f) settings_container_pane

0x4c00,	// (0x00023cd5) listscroll_set_pane_copy1

0x70c9,	// (0x0002619e) scroll_pane_cp121_copy1

0xa757,	// (0x0002982c) set_content_pane_copy1

0xf3c6,	// (0x0002e49b) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0002e49b) aid_height_set_list_copy1

0x681b,	// (0x000258f0) aid_size_parent_copy1_ParamLimits

0x681b,	// (0x000258f0) aid_size_parent_copy1

0xf3d2,	// (0x0002e4a7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0002e4a7) button_value_adjust_pane_cp6_copy1

0x4f3a,	// (0x0002400f) list_highlight_pane_cp2_copy1_ParamLimits

0x4f3a,	// (0x0002400f) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0002e4bb) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0002e4bb) list_set_pane_copy1

0xa6e6,	// (0x000297bb) main_pane_set_t1_copy1_ParamLimits

0xa6e6,	// (0x000297bb) main_pane_set_t1_copy1

0xa720,	// (0x000297f5) main_pane_set_t2_copy1_ParamLimits

0xa720,	// (0x000297f5) main_pane_set_t2_copy1

0xa82c,	// (0x00029901) main_pane_set_t3_copy1

0xa83a,	// (0x0002990f) main_pane_set_t4_copy1

0xa73f,	// (0x00029814) set_content_pane_g1_copy1_ParamLimits

0xa73f,	// (0x00029814) set_content_pane_g1_copy1

0xf493,	// (0x0002e568) setting_code_pane_copy1

0xa850,	// (0x00029925) setting_slider_graphic_pane_copy1

0xa850,	// (0x00029925) setting_slider_pane_copy1

0xa850,	// (0x00029925) setting_text_pane_copy1

0xa850,	// (0x00029925) setting_volume_pane_copy1

0xf493,	// (0x0002e568) settings_code_pane_cp2_copy1

0xf49b,	// (0x0002e570) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0002e570) settings_code_pane_cp_copy1

0xcfb8,	// (0x0002c08d) volume_set_pane_copy1

0xf4af,	// (0x0002e584) volume_set_pane_g10_copy1

0xf4b7,	// (0x0002e58c) volume_set_pane_g1_copy1

0xf4bf,	// (0x0002e594) volume_set_pane_g2_copy1

0xf4c7,	// (0x0002e59c) volume_set_pane_g3_copy1

0xf4cf,	// (0x0002e5a4) volume_set_pane_g4_copy1

0xf4d7,	// (0x0002e5ac) volume_set_pane_g5_copy1

0xf4df,	// (0x0002e5b4) volume_set_pane_g6_copy1

0xf4e7,	// (0x0002e5bc) volume_set_pane_g7_copy1

0xf4ef,	// (0x0002e5c4) volume_set_pane_g8_copy1

0xf4f7,	// (0x0002e5cc) volume_set_pane_g9_copy1

0x373a,	// (0x0002280f) bg_set_opt_pane_cp_copy1_ParamLimits

0x373a,	// (0x0002280f) bg_set_opt_pane_cp_copy1

0x344f,	// (0x00022524) setting_slider_pane_t1_copy1_ParamLimits

0x344f,	// (0x00022524) setting_slider_pane_t1_copy1

0xcfc0,	// (0x0002c095) setting_slider_pane_t2_copy1_ParamLimits

0xcfc0,	// (0x0002c095) setting_slider_pane_t2_copy1

0xcfda,	// (0x0002c0af) setting_slider_pane_t3_copy1_ParamLimits

0xcfda,	// (0x0002c0af) setting_slider_pane_t3_copy1

0xcff2,	// (0x0002c0c7) slider_set_pane_copy1_ParamLimits

0xcff2,	// (0x0002c0c7) slider_set_pane_copy1

0x3fef,	// (0x000230c4) set_opt_bg_pane_g1_copy2

0x3ff7,	// (0x000230cc) set_opt_bg_pane_g2_copy2

0xa8bc,	// (0x00029991) set_opt_bg_pane_g3_copy2

0x4007,	// (0x000230dc) set_opt_bg_pane_g4_copy2

0x400f,	// (0x000230e4) set_opt_bg_pane_g5_copy2

0x4017,	// (0x000230ec) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0002e5d4) set_opt_bg_pane_g7_copy2

0xa8ce,	// (0x000299a3) set_opt_bg_pane_g8_copy2

0xa8d8,	// (0x000299ad) set_opt_bg_pane_g9_copy2

0x34b5,	// (0x0002258a) aid_size_touch_slider_mark_copy1_ParamLimits

0x34b5,	// (0x0002258a) aid_size_touch_slider_mark_copy1

0xa8e2,	// (0x000299b7) slider_set_pane_g1_copy1

0x34c9,	// (0x0002259e) slider_set_pane_g2_copy1

0x25bc,	// (0x00021691) slider_set_pane_g3_copy1_ParamLimits

0x25bc,	// (0x00021691) slider_set_pane_g3_copy1

0x25d0,	// (0x000216a5) slider_set_pane_g4_copy1_ParamLimits

0x25d0,	// (0x000216a5) slider_set_pane_g4_copy1

0x25e8,	// (0x000216bd) slider_set_pane_g5_copy1_ParamLimits

0x25e8,	// (0x000216bd) slider_set_pane_g5_copy1

0x25bc,	// (0x00021691) slider_set_pane_g6_copy1_ParamLimits

0x25bc,	// (0x00021691) slider_set_pane_g6_copy1

0x34d1,	// (0x000225a6) slider_set_pane_g7_copy1_ParamLimits

0x34d1,	// (0x000225a6) slider_set_pane_g7_copy1

0x365a,	// (0x0002272f) bg_set_opt_pane_cp2_copy1

0xa8eb,	// (0x000299c0) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0002e5dc) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0002e5ec) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0002e5fc) slider_set_pane_cp_copy1

0xa924,	// (0x000299f9) input_focus_pane_cp1_copy1

0xa92d,	// (0x00029a02) list_set_text_pane_copy1

0xa935,	// (0x00029a0a) setting_text_pane_g1_copy1

0x12b6,	// (0x0002038b) set_text_pane_t1_copy1

0xa924,	// (0x000299f9) input_focus_pane_cp2_copy1

0xa935,	// (0x00029a0a) setting_code_pane_g1_copy1

0xf52f,	// (0x0002e604) setting_code_pane_t1_copy1

0x6efd,	// (0x00025fd2) list_set_graphic_pane_copy1

0x365a,	// (0x0002272f) bg_set_opt_pane_cp4_copy1

0xd589,	// (0x0002c65e) list_set_graphic_pane_g1_copy1_ParamLimits

0xd589,	// (0x0002c65e) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0002e612) list_set_graphic_pane_g2_copy1

0xd5a1,	// (0x0002c676) list_set_graphic_pane_t1_copy1_ParamLimits

0xd5a1,	// (0x0002c676) list_set_graphic_pane_t1_copy1

0x79f3,	// (0x00026ac8) rs_clock_indi_pane_g1

0xa968,	// (0x00029a3d) rs_clock_indi_pane_t1

0xa976,	// (0x00029a4b) rs_indi_pane

0xa97e,	// (0x00029a53) rs_indi_pane_g1

0xa987,	// (0x00029a5c) rs_indi_pane_g2

0xa990,	// (0x00029a65) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0002ef8b) rs_indi_pane_g

0x4c00,	// (0x00023cd5) bg_popup_preview_window_pane_cp03

0xa999,	// (0x00029a6e) popup_fep_tooltip_window_t1

0x866f,	// (0x00027744) popup_note2_window_g2_ParamLimits

0x866f,	// (0x00027744) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0002ed35) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0002ed35) popup_note2_window_g

0x8b6b,	// (0x00027c40) bg_popup_sub_pane_cp11_ParamLimits

0x8b78,	// (0x00027c4d) cell_ai3_links_pane_g1_ParamLimits

0x8b8f,	// (0x00027c64) cell_ai3_links_pane_t1

0x12b6,	// (0x0002038b) set_text_pane_t1_copy1_ParamLimits

0x4b1d,	// (0x00023bf2) cell_graphic_popup_pane_cp2_ParamLimits

0x4b1d,	// (0x00023bf2) cell_graphic_popup_pane_cp2

0xa9a7,	// (0x00029a7c) cell_graphic_popup_pane_g1_cp2

0x3cdf,	// (0x00022db4) cell_graphic_popup_pane_g2_cp2

0xa9af,	// (0x00029a84) cell_graphic_popup_pane_g3_cp2

0xa9b7,	// (0x00029a8c) cell_graphic_popup_pane_t2_cp2

0x3cf0,	// (0x00022dc5) grid_highlight_pane_cp3_cp2

0x432f,	// (0x00023404) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f94,	// (0x00023069) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0002d795) popup_tmo_big_image_note_window

0xa076,	// (0x0002914b) cell_ai5_widget_list_pane

0xa07e,	// (0x00029153) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0002e44c) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0002e461) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0002e47a) tmo_note_info_pane_t3_ParamLimits

0xa60f,	// (0x000296e4) tmo_note_info_pane_t4_ParamLimits

0xa621,	// (0x000296f6) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0002ef79) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0002e48f) settings_container_pane_ParamLimits

0xa91c,	// (0x000299f1) indicator_popup_pane_cp5

0xa91c,	// (0x000299f1) indicator_popup_pane_cp6

0x6efd,	// (0x00025fd2) list_set_graphic_pane_copy1_ParamLimits

0x3646,	// (0x0002271b) bg_popup_window_pane_cp23

0xa9c5,	// (0x00029a9a) popup_tmo_big_image_note_window_g1

0xa9ce,	// (0x00029aa3) popup_tmo_big_image_note_window_t1

0xa9de,	// (0x00029ab3) popup_tmo_big_image_note_window_t2

0xa9ee,	// (0x00029ac3) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0002ef92) popup_tmo_big_image_note_window_t

0x79f3,	// (0x00026ac8) cell_ai5_widget_lrg_icon_pane_g1

0xa9fe,	// (0x00029ad3) cell_ai5_widget_lrg_icon_pane_t1

0xaa0c,	// (0x00029ae1) cell_ai5_widget_list_row_pane_ParamLimits

0xaa0c,	// (0x00029ae1) cell_ai5_widget_list_row_pane

0xaa23,	// (0x00029af8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa23,	// (0x00029af8) cell_ai5_widget_list_row_pane_g1

0xaa30,	// (0x00029b05) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa30,	// (0x00029b05) cell_ai5_widget_list_row_pane_t1

0xaa5e,	// (0x00029b33) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa5e,	// (0x00029b33) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0002ef99) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0002ef99) cell_ai5_widget_list_row_pane_t

0x3646,	// (0x0002271b) main_fep_vtchi_ss_pane

0xaaa2,	// (0x00029b77) popup_fep_char_pre_window

0xaaaa,	// (0x00029b7f) popup_fep_ituss_window

0xaacb,	// (0x00029ba0) popup_fep_vkbss_window

0xaaea,	// (0x00029bbf) grid_vkbss_keypad_pane_ParamLimits

0xaaea,	// (0x00029bbf) grid_vkbss_keypad_pane

0xaafa,	// (0x00029bcf) ituss_keypad_pane

0x34f3,	// (0x000225c8) aid_vkbss_key_offset_ParamLimits

0x34f3,	// (0x000225c8) aid_vkbss_key_offset

0x34ff,	// (0x000225d4) cell_vkbss_key_pane_ParamLimits

0x34ff,	// (0x000225d4) cell_vkbss_key_pane

0x52a1,	// (0x00024376) bg_cell_vkbss_key_g1_ParamLimits

0x52a1,	// (0x00024376) bg_cell_vkbss_key_g1

0xab09,	// (0x00029bde) cell_vkbss_key_3p_pane_ParamLimits

0xab09,	// (0x00029bde) cell_vkbss_key_3p_pane

0xab23,	// (0x00029bf8) cell_vkbss_key_g1_ParamLimits

0xab23,	// (0x00029bf8) cell_vkbss_key_g1

0xab3d,	// (0x00029c12) cell_vkbss_key_t1_ParamLimits

0xab3d,	// (0x00029c12) cell_vkbss_key_t1

0x3515,	// (0x000225ea) cell_ituss_key_pane_ParamLimits

0x3515,	// (0x000225ea) cell_ituss_key_pane

0xab68,	// (0x00029c3d) bg_cell_ituss_key_g1_ParamLimits

0xab68,	// (0x00029c3d) bg_cell_ituss_key_g1

0xab74,	// (0x00029c49) cell_ituss_key_pane_g1_ParamLimits

0xab74,	// (0x00029c49) cell_ituss_key_pane_g1

0x3526,	// (0x000225fb) cell_ituss_key_pane_g2_ParamLimits

0x3526,	// (0x000225fb) cell_ituss_key_pane_g2

0x0002,

0xfecb,	// (0x0002efa0) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0002efa0) cell_ituss_key_pane_g

0x3552,	// (0x00022627) cell_ituss_key_t1_ParamLimits

0x3552,	// (0x00022627) cell_ituss_key_t1

0x358c,	// (0x00022661) cell_ituss_key_t2_ParamLimits

0x358c,	// (0x00022661) cell_ituss_key_t2

0x35bd,	// (0x00022692) cell_ituss_key_t3_ParamLimits

0x35bd,	// (0x00022692) cell_ituss_key_t3

0x358c,	// (0x00022661) cell_ituss_key_t4_ParamLimits

0x358c,	// (0x00022661) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0002efa7) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0002efa7) cell_ituss_key_t

0xab9a,	// (0x00029c6f) cell_vkbss_key_3p_pane_g1

0xaba2,	// (0x00029c77) cell_vkbss_key_3p_pane_g2

0xabaa,	// (0x00029c7f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0002efb2) cell_vkbss_key_3p_pane_g

0x3646,	// (0x0002271b) bg_popup_fep_char_preview_window_cp02

0x3600,	// (0x000226d5) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0002e37b) main_ai5_sk_pane

0xa69b,	// (0x00029770) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6a7,	// (0x0002977c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa6bc,	// (0x00029791) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6c8,	// (0x0002979d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0002ef84) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6d4,	// (0x000297a9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f94,	// (0x00023069) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002e61a) main_ai5_sk_pane_g1

0x58fc,	// (0x000249d1) popup_query_code_window_g1

0xaac0,	// (0x00029b95) popup_fep_vkb_icf_pane

0xaad4,	// (0x00029ba9) popup_fep_vtchi_icf_pane

0xabbb,	// (0x00029c90) bg_icf_pane

0xabc7,	// (0x00029c9c) list_vkb_icf_pane

0xabd3,	// (0x00029ca8) bg_icf_pane_cp01

0xabe6,	// (0x00029cbb) vtchi_icf_list_pane

0xabf6,	// (0x00029ccb) list_vkb_icf_pane_t1_ParamLimits

0xabf6,	// (0x00029ccb) list_vkb_icf_pane_t1

0xac0e,	// (0x00029ce3) vtchi_icf_list_pane_t1_ParamLimits

0xac0e,	// (0x00029ce3) vtchi_icf_list_pane_t1

0xaaaa,	// (0x00029b7f) popup_fep_ituss_window_ParamLimits

0xaad4,	// (0x00029ba9) popup_fep_vtchi_icf_pane_ParamLimits

0xaafa,	// (0x00029bcf) ituss_keypad_pane_ParamLimits

0x34e7,	// (0x000225bc) ituss_sks_pane

0xabbb,	// (0x00029c90) bg_icf_pane_ParamLimits

0xaa86,	// (0x00029b5b) icf_edit_indi_pane_ParamLimits

0xaa86,	// (0x00029b5b) icf_edit_indi_pane

0xabc7,	// (0x00029c9c) list_vkb_icf_pane_ParamLimits

0xabd3,	// (0x00029ca8) bg_icf_pane_cp01_ParamLimits

0xaa95,	// (0x00029b6a) icf_edit_indi_pane_cp01_ParamLimits

0xaa95,	// (0x00029b6a) icf_edit_indi_pane_cp01

0xabee,	// (0x00029cc3) vtchi_query_pane

0x7c61,	// (0x00026d36) icf_edit_indi_pane_g1_ParamLimits

0x7c61,	// (0x00026d36) icf_edit_indi_pane_g1

0xac87,	// (0x00029d5c) icf_edit_indi_pane_g2_ParamLimits

0xac87,	// (0x00029d5c) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0002efca) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0002efca) icf_edit_indi_pane_g

0xac96,	// (0x00029d6b) icf_edit_indi_pane_t1

0xac30,	// (0x00029d05) bg_input_focus_pane_cp042

0x3ec3,	// (0x00022f98) vtchi_button_pane

0xac39,	// (0x00029d0e) vtchi_query_pane_t1

0xac47,	// (0x00029d1c) vtchi_query_pane_t2

0xac55,	// (0x00029d2a) vtchi_query_pane_t3

0x0002,

0xfee4,	// (0x0002efb9) vtchi_query_pane_t

0x3646,	// (0x0002271b) bg_button_pane_cp13

0xac63,	// (0x00029d38) vtchi_button_pane_g1

0x360f,	// (0x000226e4) ituss_sks_pane_g1

0x361a,	// (0x000226ef) ituss_sks_pane_g2

0x0001,

0xfeeb,	// (0x0002efc0) ituss_sks_pane_g

0xac6b,	// (0x00029d40) ituss_sks_pane_t1

0xac79,	// (0x00029d4e) ituss_sks_pane_t2

0x0001,

0xfef0,	// (0x0002efc5) ituss_sks_pane_t

0x743d,	// (0x00026512) indicator_nsta_pane_cp_g1

0x7446,	// (0x0002651b) indicator_nsta_pane_cp_g2

0x744e,	// (0x00026523) indicator_nsta_pane_cp_g3

0x7456,	// (0x0002652b) indicator_nsta_pane_cp_g4

0x745e,	// (0x00026533) indicator_nsta_pane_cp_g5

0x745e,	// (0x00026533) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0002eb7f) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0002e190) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0002e190) cell_graphic2_pane_t2

0x0001,

0x0016,	// (0x0001f0eb) cell_graphic2_pane_t_ParamLimits

0x0016,	// (0x0001f0eb) cell_graphic2_pane_t

0xf0ee,	// (0x0002e1c3) cell_graphic2_control_pane_t1

0xd523,	// (0x0002c5f8) signal_pane_g3_ParamLimits

0xd523,	// (0x0002c5f8) signal_pane_g3

0xd537,	// (0x0002c60c) signal_pane_g4_ParamLimits

0xd537,	// (0x0002c60c) signal_pane_g4

0xaa70,	// (0x00029b45) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa70,	// (0x00029b45) cell_ai5_widget_list_row_pane_t3

0xab88,	// (0x00029c5d) cell_ituss_key_pane_t1_ParamLimits

0xab88,	// (0x00029c5d) cell_ituss_key_pane_t1

0x553a,	// (0x0002460f) form_field_data_wide_pane_vc_t2_ParamLimits

0x553a,	// (0x0002460f) form_field_data_wide_pane_vc_t2

0x554e,	// (0x00024623) form_field_data_wide_pane_vc_t3_ParamLimits

0x554e,	// (0x00024623) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002e8d2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002e8d2) form_field_data_wide_pane_vc_t

0x7109,	// (0x000261de) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7109,	// (0x000261de) form_field_slider_wide_pane_vc_t3

0x71e3,	// (0x000262b8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x71e3,	// (0x000262b8) form_field_popup_wide_pane_vc_t2

0x71fa,	// (0x000262cf) form_field_popup_wide_pane_vc_t3_ParamLimits

0x71fa,	// (0x000262cf) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0002eb6e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0002eb6e) form_field_popup_wide_pane_vc_t

0xce6a,	// (0x0002bf3f) aid_fshwr2_btn_pane_ParamLimits

0xce7b,	// (0x0002bf50) aid_fshwr2_syb_pane_ParamLimits

0xce8c,	// (0x0002bf61) aid_fshwr2_txt_pane_ParamLimits

0x3f94,	// (0x00023069) fshwr2_bg_pane_ParamLimits

0xce98,	// (0x0002bf6d) fshwr2_func_candi_pane_ParamLimits

0xceb7,	// (0x0002bf8c) fshwr2_hwr_syb_pane_ParamLimits

0xced2,	// (0x0002bfa7) fshwr2_icf_pane_ParamLimits

0x0e91,	// (0x0001ff66) list_double_graphic_pane_vc_g4_ParamLimits

0x0e91,	// (0x0001ff66) list_double_graphic_pane_vc_g4

0x3546,	// (0x0002261b) cell_ituss_key_pane_g3_ParamLimits

0x3546,	// (0x0002261b) cell_ituss_key_pane_g3

0x35ee,	// (0x000226c3) cell_ituss_key_t5_ParamLimits

0x35ee,	// (0x000226c3) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
