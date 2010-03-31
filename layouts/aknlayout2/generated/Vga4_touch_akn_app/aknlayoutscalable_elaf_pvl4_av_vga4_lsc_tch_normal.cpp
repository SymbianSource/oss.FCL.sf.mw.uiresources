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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000020d1 };

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
0x9a67,	// (0x0000bb38) Screen

0x9a73,	// (0x0000bb44) application_window_ParamLimits

0x9a73,	// (0x0000bb44) application_window

0xe1c8,	// (0x00010299) screen_g1

0x9aab,	// (0x0000bb7c) area_bottom_pane_ParamLimits

0x9aab,	// (0x0000bb7c) area_bottom_pane

0xe1f2,	// (0x000102c3) area_top_pane_ParamLimits

0xe1f2,	// (0x000102c3) area_top_pane

0xe286,	// (0x00010357) main_pane_ParamLimits

0xe286,	// (0x00010357) main_pane

0xe341,	// (0x00010412) misc_graphics

0xb3c1,	// (0x0000d492) battery_pane_ParamLimits

0xb3c1,	// (0x0000d492) battery_pane

0x20f3,	// (0x000041c4) bg_status_flat_pane_g8

0x20fb,	// (0x000041cc) bg_status_flat_pane_g9

0x1271,	// (0x00003342) context_pane_ParamLimits

0x1271,	// (0x00003342) context_pane

0xb538,	// (0x0000d609) navi_pane_ParamLimits

0xb538,	// (0x0000d609) navi_pane

0xb5c2,	// (0x0000d693) signal_pane_ParamLimits

0xb5c2,	// (0x0000d693) signal_pane

0x0008,

0xf86e,	// (0x0001193f) bg_status_flat_pane_g

0xb652,	// (0x0000d723) status_pane_g1_ParamLimits

0xb652,	// (0x0000d723) status_pane_g1

0xb668,	// (0x0000d739) status_pane_g2_ParamLimits

0xb668,	// (0x0000d739) status_pane_g2

0x14b2,	// (0x00003583) status_pane_g3_ParamLimits

0x14b2,	// (0x00003583) status_pane_g3

0x0004,

0xf7a1,	// (0x00011872) status_pane_g_ParamLimits

0xf7a1,	// (0x00011872) status_pane_g

0xb674,	// (0x0000d745) title_pane_ParamLimits

0xb674,	// (0x0000d745) title_pane

0xb6d7,	// (0x0000d7a8) uni_indicator_pane_ParamLimits

0xb6d7,	// (0x0000d7a8) uni_indicator_pane

0x0a8a,	// (0x00002b5b) bg_list_pane_ParamLimits

0x0a8a,	// (0x00002b5b) bg_list_pane

0xabef,	// (0x0000ccc0) find_pane

0xabf7,	// (0x0000ccc8) listscroll_app_pane_ParamLimits

0xabf7,	// (0x0000ccc8) listscroll_app_pane

0x0abe,	// (0x00002b8f) listscroll_form_pane

0xac07,	// (0x0000ccd8) listscroll_gen_pane_ParamLimits

0xac07,	// (0x0000ccd8) listscroll_gen_pane

0x0ada,	// (0x00002bab) listscroll_set_pane

0x2f03,	// (0x00004fd4) main_idle_act_pane

0x0577,	// (0x00002648) main_idle_trad_pane

0x0577,	// (0x00002648) main_list_empty_pane

0x0af4,	// (0x00002bc5) main_midp_pane

0x0b00,	// (0x00002bd1) main_pane_g1_ParamLimits

0x0b00,	// (0x00002bd1) main_pane_g1

0xac1b,	// (0x0000ccec) popup_ai_message_window_ParamLimits

0xac1b,	// (0x0000ccec) popup_ai_message_window

0xacbb,	// (0x0000cd8c) popup_fep_china_uni_window_ParamLimits

0xacbb,	// (0x0000cd8c) popup_fep_china_uni_window

0x0c2a,	// (0x00002cfb) popup_fep_japan_candidate_window_ParamLimits

0x0c2a,	// (0x00002cfb) popup_fep_japan_candidate_window

0x0c54,	// (0x00002d25) popup_fep_japan_predictive_window_ParamLimits

0x0c54,	// (0x00002d25) popup_fep_japan_predictive_window

0xad1b,	// (0x0000cdec) popup_find_window

0xad38,	// (0x0000ce09) popup_grid_graphic_window_ParamLimits

0xad38,	// (0x0000ce09) popup_grid_graphic_window

0x0cc5,	// (0x00002d96) popup_large_graphic_colour_window

0xaddc,	// (0x0000cead) popup_menu_window_ParamLimits

0xaddc,	// (0x0000cead) popup_menu_window

0xafcc,	// (0x0000d09d) popup_note_image_window

0xaf8c,	// (0x0000d05d) popup_note_wait_window_ParamLimits

0xaf8c,	// (0x0000d05d) popup_note_wait_window

0xafe4,	// (0x0000d0b5) popup_note_window_ParamLimits

0xafe4,	// (0x0000d0b5) popup_note_window

0xb092,	// (0x0000d163) popup_query_code_window_ParamLimits

0xb092,	// (0x0000d163) popup_query_code_window

0x0f31,	// (0x00003002) popup_query_data_code_window_ParamLimits

0x0f31,	// (0x00003002) popup_query_data_code_window

0xb0d2,	// (0x0000d1a3) popup_query_data_window_ParamLimits

0xb0d2,	// (0x0000d1a3) popup_query_data_window

0xb166,	// (0x0000d237) popup_query_sat_info_window_ParamLimits

0xb166,	// (0x0000d237) popup_query_sat_info_window

0xb211,	// (0x0000d2e2) popup_snote_single_graphic_window_ParamLimits

0xb211,	// (0x0000d2e2) popup_snote_single_graphic_window

0xb211,	// (0x0000d2e2) popup_snote_single_text_window_ParamLimits

0xb211,	// (0x0000d2e2) popup_snote_single_text_window

0x0fcc,	// (0x0000309d) popup_sub_window_general

0x1112,	// (0x000031e3) popup_window_general_ParamLimits

0x1112,	// (0x000031e3) popup_window_general

0x112b,	// (0x000031fc) power_save_pane

0xaa5d,	// (0x0000cb2e) control_pane_g1_ParamLimits

0xaa5d,	// (0x0000cb2e) control_pane_g1

0xaa86,	// (0x0000cb57) control_pane_g2_ParamLimits

0xaa86,	// (0x0000cb57) control_pane_g2

0x092f,	// (0x00002a00) control_pane_g3_ParamLimits

0x092f,	// (0x00002a00) control_pane_g3

0x0007,

0xf789,	// (0x0001185a) control_pane_g_ParamLimits

0xf789,	// (0x0001185a) control_pane_g

0xaae8,	// (0x0000cbb9) control_pane_t1_ParamLimits

0xaae8,	// (0x0000cbb9) control_pane_t1

0xab46,	// (0x0000cc17) control_pane_t2_ParamLimits

0xab46,	// (0x0000cc17) control_pane_t2

0x0002,

0xf79a,	// (0x0001186b) control_pane_t_ParamLimits

0xf79a,	// (0x0001186b) control_pane_t

0x0802,	// (0x000028d3) navi_navi_volume_pane_cp1

0x080b,	// (0x000028dc) status_small_icon_pane

0x0813,	// (0x000028e4) status_small_pane_g1_ParamLimits

0x0813,	// (0x000028e4) status_small_pane_g1

0x0847,	// (0x00002918) status_small_pane_g2_ParamLimits

0x0847,	// (0x00002918) status_small_pane_g2

0x0853,	// (0x00002924) status_small_pane_g3_ParamLimits

0x0853,	// (0x00002924) status_small_pane_g3

0x085f,	// (0x00002930) status_small_pane_g4_ParamLimits

0x085f,	// (0x00002930) status_small_pane_g4

0x086b,	// (0x0000293c) status_small_pane_g5_ParamLimits

0x086b,	// (0x0000293c) status_small_pane_g5

0x087a,	// (0x0000294b) status_small_pane_g6_ParamLimits

0x087a,	// (0x0000294b) status_small_pane_g6

0x0007,

0xf778,	// (0x00011849) status_small_pane_g_ParamLimits

0xf778,	// (0x00011849) status_small_pane_g

0x08aa,	// (0x0000297b) status_small_pane_t1

0x08cd,	// (0x0000299e) status_small_wait_pane_ParamLimits

0x08cd,	// (0x0000299e) status_small_wait_pane

0xa7a2,	// (0x0000c873) aid_levels_signal_ParamLimits

0xa7a2,	// (0x0000c873) aid_levels_signal

0xa7ba,	// (0x0000c88b) signal_pane_g1_ParamLimits

0xa7ba,	// (0x0000c88b) signal_pane_g1

0xa7d5,	// (0x0000c8a6) signal_pane_g2_ParamLimits

0xa7d5,	// (0x0000c8a6) signal_pane_g2

0x0003,

0xf709,	// (0x000117da) signal_pane_g_ParamLimits

0xf709,	// (0x000117da) signal_pane_g

0xf388,	// (0x00011459) context_pane_g1

0x9c97,	// (0x0000bd68) title_pane_g1

0x9cc2,	// (0x0000bd93) title_pane_t1

0xe3b7,	// (0x00010488) title_pane_t2

0xe3dd,	// (0x000104ae) title_pane_t3

0x0002,

0xf55d,	// (0x0001162e) title_pane_t

0xb6ff,	// (0x0000d7d0) aid_levels_battery_ParamLimits

0xb6ff,	// (0x0000d7d0) aid_levels_battery

0xb71b,	// (0x0000d7ec) battery_pane_g1_ParamLimits

0xb71b,	// (0x0000d7ec) battery_pane_g1

0xb738,	// (0x0000d809) battery_pane_g2_ParamLimits

0xb738,	// (0x0000d809) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001187d) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001187d) battery_pane_g

0xbbe4,	// (0x0000dcb5) uni_indicator_pane_g1

0xbbfb,	// (0x0000dccc) uni_indicator_pane_g2

0xbc11,	// (0x0000dce2) uni_indicator_pane_g3

0x0005,

0xf916,	// (0x000119e7) uni_indicator_pane_g

0x03e5,	// (0x000024b6) navi_icon_pane_ParamLimits

0x03e5,	// (0x000024b6) navi_icon_pane

0x032c,	// (0x000023fd) navi_midp_pane

0x0401,	// (0x000024d2) navi_navi_pane

0x040b,	// (0x000024dc) navi_text_pane_ParamLimits

0x040b,	// (0x000024dc) navi_text_pane

0xe1c8,	// (0x00010299) status_small_wait_pane_g1

0xe785,	// (0x00010856) status_small_wait_pane_g2

0x0001,

0xf911,	// (0x000119e2) status_small_wait_pane_g

0xbb4b,	// (0x0000dc1c) navi_navi_icon_text_pane

0xbb53,	// (0x0000dc24) navi_navi_pane_g1_ParamLimits

0xbb53,	// (0x0000dc24) navi_navi_pane_g1

0xbb65,	// (0x0000dc36) navi_navi_pane_g2_ParamLimits

0xbb65,	// (0x0000dc36) navi_navi_pane_g2

0x0001,

0xf8df,	// (0x000119b0) navi_navi_pane_g_ParamLimits

0xf8df,	// (0x000119b0) navi_navi_pane_g

0x28e8,	// (0x000049b9) navi_navi_tabs_pane

0xbb77,	// (0x0000dc48) navi_navi_text_pane

0xbb4b,	// (0x0000dc1c) navi_navi_volume_pane

0xbb39,	// (0x0000dc0a) navi_text_pane_t1

0xbb2d,	// (0x0000dbfe) navi_icon_pane_g1

0x27df,	// (0x000048b0) navi_navi_text_pane_t1

0xbb08,	// (0x0000dbd9) navi_navi_volume_pane_g1

0xbb10,	// (0x0000dbe1) volume_small_pane

0xba64,	// (0x0000db35) navi_navi_icon_text_pane_g1

0xba6c,	// (0x0000db3d) navi_navi_icon_text_pane_t1

0x0401,	// (0x000024d2) navi_tabs_2_long_pane

0x0401,	// (0x000024d2) navi_tabs_2_pane

0x0401,	// (0x000024d2) navi_tabs_3_long_pane

0x0401,	// (0x000024d2) navi_tabs_3_pane

0x0401,	// (0x000024d2) navi_tabs_4_pane

0xba22,	// (0x0000daf3) tabs_2_active_pane_ParamLimits

0xba22,	// (0x0000daf3) tabs_2_active_pane

0xba32,	// (0x0000db03) tabs_2_passive_pane_ParamLimits

0xba32,	// (0x0000db03) tabs_2_passive_pane

0xb9f0,	// (0x0000dac1) tabs_3_active_pane_ParamLimits

0xb9f0,	// (0x0000dac1) tabs_3_active_pane

0xba00,	// (0x0000dad1) tabs_3_passive_pane_ParamLimits

0xba00,	// (0x0000dad1) tabs_3_passive_pane

0xba11,	// (0x0000dae2) tabs_3_passive_pane_cp_ParamLimits

0xba11,	// (0x0000dae2) tabs_3_passive_pane_cp

0xb9ac,	// (0x0000da7d) tabs_4_active_pane_ParamLimits

0xb9ac,	// (0x0000da7d) tabs_4_active_pane

0xb9bd,	// (0x0000da8e) tabs_4_passive_pane_ParamLimits

0xb9bd,	// (0x0000da8e) tabs_4_passive_pane

0xb9ce,	// (0x0000da9f) tabs_4_passive_pane_cp_ParamLimits

0xb9ce,	// (0x0000da9f) tabs_4_passive_pane_cp

0xb9df,	// (0x0000dab0) tabs_4_passive_pane_cp2_ParamLimits

0xb9df,	// (0x0000dab0) tabs_4_passive_pane_cp2

0xb988,	// (0x0000da59) tabs_2_long_active_pane_ParamLimits

0xb988,	// (0x0000da59) tabs_2_long_active_pane

0xb99a,	// (0x0000da6b) tabs_2_long_passive_pane_ParamLimits

0xb99a,	// (0x0000da6b) tabs_2_long_passive_pane

0xb93d,	// (0x0000da0e) tabs_3_long_active_pane_ParamLimits

0xb93d,	// (0x0000da0e) tabs_3_long_active_pane

0xb956,	// (0x0000da27) tabs_3_long_passive_pane_ParamLimits

0xb956,	// (0x0000da27) tabs_3_long_passive_pane

0xb96f,	// (0x0000da40) tabs_3_long_passive_pane_cp_ParamLimits

0xb96f,	// (0x0000da40) tabs_3_long_passive_pane_cp

0x2558,	// (0x00004629) volume_small_pane_g1

0xb8ec,	// (0x0000d9bd) volume_small_pane_g2

0xb8f5,	// (0x0000d9c6) volume_small_pane_g3

0xb8fe,	// (0x0000d9cf) volume_small_pane_g4

0xb907,	// (0x0000d9d8) volume_small_pane_g5

0xb910,	// (0x0000d9e1) volume_small_pane_g6

0xb919,	// (0x0000d9ea) volume_small_pane_g7

0xb922,	// (0x0000d9f3) volume_small_pane_g8

0xb92b,	// (0x0000d9fc) volume_small_pane_g9

0xb934,	// (0x0000da05) volume_small_pane_g10

0x0009,

0xf8ab,	// (0x0001197c) volume_small_pane_g

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp2_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp2

0x9d4e,	// (0x0000be1f) tabs_3_active_pane_g1

0x9d56,	// (0x0000be27) tabs_3_active_pane_t1

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp2_ParamLimits

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp2

0x9d4e,	// (0x0000be1f) tabs_3_passive_pane_g1

0x9d56,	// (0x0000be27) tabs_3_passive_pane_t1

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp3_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp3

0x9d68,	// (0x0000be39) tabs_4_active_pane_g1

0x9d70,	// (0x0000be41) tabs_4_active_pane_t1

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp3_ParamLimits

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp3

0x9d68,	// (0x0000be39) tabs_4_1_passive_pane_g1

0x9d70,	// (0x0000be41) tabs_4_1_passive_pane_t1

0x0af4,	// (0x00002bc5) list_highlight_pane_cp2

0xbcb8,	// (0x0000dd89) list_set_pane_ParamLimits

0xbcb8,	// (0x0000dd89) list_set_pane

0xbd80,	// (0x0000de51) main_pane_set_t1_ParamLimits

0xbd80,	// (0x0000de51) main_pane_set_t1

0xbda0,	// (0x0000de71) main_pane_set_t2_ParamLimits

0xbda0,	// (0x0000de71) main_pane_set_t2

0xbdb4,	// (0x0000de85) main_pane_set_t3_ParamLimits

0xbdb4,	// (0x0000de85) main_pane_set_t3

0xbdc8,	// (0x0000de99) main_pane_set_t4_ParamLimits

0xbdc8,	// (0x0000de99) main_pane_set_t4

0x0003,

0xf97b,	// (0x00011a4c) main_pane_set_t_ParamLimits

0xf97b,	// (0x00011a4c) main_pane_set_t

0xbddc,	// (0x0000dead) setting_code_pane

0x3057,	// (0x00005128) setting_slider_graphic_pane

0x3057,	// (0x00005128) setting_slider_pane

0x3057,	// (0x00005128) setting_text_pane

0x3057,	// (0x00005128) setting_volume_pane

0xe3fd,	// (0x000104ce) volume_set_pane

0xe407,	// (0x000104d8) bg_set_opt_pane_cp

0xe415,	// (0x000104e6) setting_slider_pane_t1

0xe42e,	// (0x000104ff) setting_slider_pane_t2

0xe448,	// (0x00010519) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00011635) setting_slider_pane_t

0xe460,	// (0x00010531) slider_set_pane

0xe341,	// (0x00010412) bg_set_opt_pane_cp2

0xe476,	// (0x00010547) setting_slider_graphic_pane_g1

0xe47f,	// (0x00010550) setting_slider_graphic_pane_t1

0xe48f,	// (0x00010560) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001163c) setting_slider_graphic_pane_t

0xe49f,	// (0x00010570) slider_set_pane_cp

0xe341,	// (0x00010412) input_focus_pane_cp1

0x2eea,	// (0x00004fbb) list_set_text_pane

0xe1c8,	// (0x00010299) setting_text_pane_g1

0xe341,	// (0x00010412) input_focus_pane_cp2

0xe1c8,	// (0x00010299) setting_code_pane_g1

0xe4a7,	// (0x00010578) setting_code_pane_t1

0xe4b5,	// (0x00010586) set_text_pane_t1_ParamLimits

0xe4b5,	// (0x00010586) set_text_pane_t1

0xec0e,	// (0x00010cdf) set_opt_bg_pane_g1

0xec16,	// (0x00010ce7) set_opt_bg_pane_g2

0x2ec2,	// (0x00004f93) set_opt_bg_pane_g3

0xec26,	// (0x00010cf7) set_opt_bg_pane_g4

0xec52,	// (0x00010d23) set_opt_bg_pane_g5

0xec5a,	// (0x00010d2b) set_opt_bg_pane_g6

0x2ecc,	// (0x00004f9d) set_opt_bg_pane_g7

0x2ed6,	// (0x00004fa7) set_opt_bg_pane_g8

0x2ee0,	// (0x00004fb1) set_opt_bg_pane_g9

0x0008,

0xf968,	// (0x00011a39) set_opt_bg_pane_g

0x2e51,	// (0x00004f22) slider_set_pane_g1

0x2e5e,	// (0x00004f2f) slider_set_pane_g2

0x0006,

0xf959,	// (0x00011a2a) slider_set_pane_g

0x2cb9,	// (0x00004d8a) volume_set_pane_g1

0x2cc3,	// (0x00004d94) volume_set_pane_g2

0x2ccd,	// (0x00004d9e) volume_set_pane_g3

0x2cd7,	// (0x00004da8) volume_set_pane_g4

0x2ce1,	// (0x00004db2) volume_set_pane_g5

0x2ceb,	// (0x00004dbc) volume_set_pane_g6

0x2cf5,	// (0x00004dc6) volume_set_pane_g7

0x2cff,	// (0x00004dd0) volume_set_pane_g8

0x2d09,	// (0x00004dda) volume_set_pane_g9

0x2d13,	// (0x00004de4) volume_set_pane_g10

0x0009,

0xf931,	// (0x00011a02) volume_set_pane_g

0x9d82,	// (0x0000be53) indicator_pane_ParamLimits

0x9d82,	// (0x0000be53) indicator_pane

0x9dae,	// (0x0000be7f) main_idle_pane_g2_ParamLimits

0x9dae,	// (0x0000be7f) main_idle_pane_g2

0x9de6,	// (0x0000beb7) main_pane_idle_g1_ParamLimits

0x9de6,	// (0x0000beb7) main_pane_idle_g1

0xe4cf,	// (0x000105a0) popup_clock_digital_analogue_window_ParamLimits

0xe4cf,	// (0x000105a0) popup_clock_digital_analogue_window

0x9e14,	// (0x0000bee5) soft_indicator_pane_ParamLimits

0x9e14,	// (0x0000bee5) soft_indicator_pane

0x9e30,	// (0x0000bf01) wallpaper_pane_ParamLimits

0x9e30,	// (0x0000bf01) wallpaper_pane

0xe1c8,	// (0x00010299) wallpaper_pane_g1

0x9e42,	// (0x0000bf13) indicator_pane_g1_ParamLimits

0x9e42,	// (0x0000bf13) indicator_pane_g1

0x3421,	// (0x000054f2) navi_navi_icon_text_pane_srt_g1

0xe4fd,	// (0x000105ce) soft_indicator_pane_t1

0xe517,	// (0x000105e8) aid_ps_area_pane

0x9e5b,	// (0x0000bf2c) aid_ps_clock_pane

0xe528,	// (0x000105f9) aid_ps_indicator_pane

0xe534,	// (0x00010605) indicator_ps_pane_ParamLimits

0xe534,	// (0x00010605) indicator_ps_pane

0xe543,	// (0x00010614) power_save_pane_g1_ParamLimits

0xe543,	// (0x00010614) power_save_pane_g1

0xe54f,	// (0x00010620) power_save_pane_g2_ParamLimits

0xe54f,	// (0x00010620) power_save_pane_g2

0xe1d2,	// (0x000102a3) aid_navinavi_width_pane

0xe517,	// (0x000105e8) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00011641) power_save_pane_g_ParamLimits

0xf570,	// (0x00011641) power_save_pane_g

0xe55d,	// (0x0001062e) power_save_pane_t1_ParamLimits

0xe55d,	// (0x0001062e) power_save_pane_t1

0x9e5b,	// (0x0000bf2c) aid_ps_clock_pane_ParamLimits

0xe528,	// (0x000105f9) aid_ps_indicator_pane_ParamLimits

0xe56f,	// (0x00010640) power_save_pane_t4_ParamLimits

0xe56f,	// (0x00010640) power_save_pane_t4

0x0001,

0xf575,	// (0x00011646) power_save_pane_t_ParamLimits

0xf575,	// (0x00011646) power_save_pane_t

0xe599,	// (0x0001066a) power_save_t3_ParamLimits

0xe599,	// (0x0001066a) power_save_t3

0xe584,	// (0x00010655) power_save_t2_ParamLimits

0xe584,	// (0x00010655) power_save_t2

0xe5ae,	// (0x0001067f) indicator_ps_pane_g1

0x9e69,	// (0x0000bf3a) ai_gene_pane_ParamLimits

0x9e69,	// (0x0000bf3a) ai_gene_pane

0x9e80,	// (0x0000bf51) ai_links_pane_ParamLimits

0x9e80,	// (0x0000bf51) ai_links_pane

0x9e98,	// (0x0000bf69) indicator_pane_cp1_ParamLimits

0x9e98,	// (0x0000bf69) indicator_pane_cp1

0x9ea7,	// (0x0000bf78) main_pane_idle_g1_cp_ParamLimits

0x9ea7,	// (0x0000bf78) main_pane_idle_g1_cp

0xe5b7,	// (0x00010688) popup_ai_links_title_window

0x9ebf,	// (0x0000bf90) soft_indicator_pane_cp1_ParamLimits

0x9ebf,	// (0x0000bf90) soft_indicator_pane_cp1

0x2b97,	// (0x00004c68) ai_links_pane_g1

0x2ba0,	// (0x00004c71) grid_ai_links_pane

0xbbdb,	// (0x0000dcac) ai_gene_pane_1

0x2b85,	// (0x00004c56) ai_gene_pane_2

0x2b8e,	// (0x00004c5f) list_highlight_pane_cp4

0xbbb7,	// (0x0000dc88) cell_ai_link_pane_ParamLimits

0xbbb7,	// (0x0000dc88) cell_ai_link_pane

0x2b54,	// (0x00004c25) cell_ai_link_pane_g1

0xe785,	// (0x00010856) cell_ai_link_pane_g2

0x0001,

0xf90c,	// (0x000119dd) cell_ai_link_pane_g

0xe341,	// (0x00010412) grid_highlight_cp2

0xe341,	// (0x00010412) bg_popup_sub_pane_cp1

0xe5ce,	// (0x0001069f) popup_ai_links_title_window_t1

0x2aa0,	// (0x00004b71) ai_gene_pane_1_g1_ParamLimits

0x2aa0,	// (0x00004b71) ai_gene_pane_1_g1

0x2aac,	// (0x00004b7d) ai_gene_pane_1_g2_ParamLimits

0x2aac,	// (0x00004b7d) ai_gene_pane_1_g2

0x0001,

0xf902,	// (0x000119d3) ai_gene_pane_1_g_ParamLimits

0xf902,	// (0x000119d3) ai_gene_pane_1_g

0x2ab9,	// (0x00004b8a) ai_gene_pane_1_t1_ParamLimits

0x2ab9,	// (0x00004b8a) ai_gene_pane_1_t1

0x2aed,	// (0x00004bbe) grid_ai_soft_ind_pane

0x2a8b,	// (0x00004b5c) ai_gene_pane_2_t1_ParamLimits

0x2a8b,	// (0x00004b5c) ai_gene_pane_2_t1

0x9ed3,	// (0x0000bfa4) main_pane_empty_t1_ParamLimits

0x9ed3,	// (0x0000bfa4) main_pane_empty_t1

0x9eeb,	// (0x0000bfbc) main_pane_empty_t2_ParamLimits

0x9eeb,	// (0x0000bfbc) main_pane_empty_t2

0x9f00,	// (0x0000bfd1) main_pane_empty_t3_ParamLimits

0x9f00,	// (0x0000bfd1) main_pane_empty_t3

0x9f12,	// (0x0000bfe3) main_pane_empty_t4_ParamLimits

0x9f12,	// (0x0000bfe3) main_pane_empty_t4

0x9f24,	// (0x0000bff5) main_pane_empty_t5_ParamLimits

0x9f24,	// (0x0000bff5) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001164b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001164b) main_pane_empty_t

0xecb2,	// (0x00010d83) bg_popup_window_pane_ParamLimits

0xecb2,	// (0x00010d83) bg_popup_window_pane

0x27ed,	// (0x000048be) find_popup_pane_cp2_ParamLimits

0x27ed,	// (0x000048be) find_popup_pane_cp2

0x27f9,	// (0x000048ca) heading_pane_ParamLimits

0x27f9,	// (0x000048ca) heading_pane

0xe341,	// (0x00010412) bg_popup_sub_pane

0xba89,	// (0x0000db5a) bg_popup_window_pane_g1_ParamLimits

0xba89,	// (0x0000db5a) bg_popup_window_pane_g1

0xba98,	// (0x0000db69) bg_popup_window_pane_g2_ParamLimits

0xba98,	// (0x0000db69) bg_popup_window_pane_g2

0xbaa4,	// (0x0000db75) bg_popup_window_pane_g3_ParamLimits

0xbaa4,	// (0x0000db75) bg_popup_window_pane_g3

0xbab0,	// (0x0000db81) bg_popup_window_pane_g4_ParamLimits

0xbab0,	// (0x0000db81) bg_popup_window_pane_g4

0xbabf,	// (0x0000db90) bg_popup_window_pane_g5_ParamLimits

0xbabf,	// (0x0000db90) bg_popup_window_pane_g5

0xbacf,	// (0x0000dba0) bg_popup_window_pane_g6_ParamLimits

0xbacf,	// (0x0000dba0) bg_popup_window_pane_g6

0xbadb,	// (0x0000dbac) bg_popup_window_pane_g7_ParamLimits

0xbadb,	// (0x0000dbac) bg_popup_window_pane_g7

0xbaea,	// (0x0000dbbb) bg_popup_window_pane_g8_ParamLimits

0xbaea,	// (0x0000dbbb) bg_popup_window_pane_g8

0xbaf9,	// (0x0000dbca) bg_popup_window_pane_g9_ParamLimits

0xbaf9,	// (0x0000dbca) bg_popup_window_pane_g9

0x27c2,	// (0x00004893) bg_popup_window_pane_g10_ParamLimits

0x27c2,	// (0x00004893) bg_popup_window_pane_g10

0x0009,

0xf8ca,	// (0x0001199b) bg_popup_window_pane_g_ParamLimits

0xf8ca,	// (0x0001199b) bg_popup_window_pane_g

0x26eb,	// (0x000047bc) bg_popup_heading_pane_ParamLimits

0x26eb,	// (0x000047bc) bg_popup_heading_pane

0x3364,	// (0x00005435) tabs_4_passive_pane_cp_srt_ParamLimits

0x3364,	// (0x00005435) tabs_4_passive_pane_cp_srt

0x3376,	// (0x00005447) tabs_4_passive_pane_srt_ParamLimits

0x26ff,	// (0x000047d0) heading_pane_g2

0x3376,	// (0x00005447) tabs_4_passive_pane_srt

0x1880,	// (0x00003951) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1880,	// (0x00003951) bg_passive_tab_pane_cp3_srt

0x2707,	// (0x000047d8) heading_pane_t1_ParamLimits

0x2707,	// (0x000047d8) heading_pane_t1

0x271e,	// (0x000047ef) heading_pane_t2_ParamLimits

0x271e,	// (0x000047ef) heading_pane_t2

0x0001,

0xf8c5,	// (0x00011996) heading_pane_t_ParamLimits

0xf8c5,	// (0x00011996) heading_pane_t

0x20bb,	// (0x0000418c) bg_popup_heading_pane_g1

0x216a,	// (0x0000423b) bg_popup_heading_pane_g2

0x2174,	// (0x00004245) bg_popup_heading_pane_g3

0x217e,	// (0x0000424f) bg_popup_heading_pane_g4

0x2188,	// (0x00004259) bg_popup_heading_pane_g5

0x2192,	// (0x00004263) bg_popup_heading_pane_g6

0x219a,	// (0x0000426b) bg_popup_heading_pane_g7

0x21a2,	// (0x00004273) bg_popup_heading_pane_g8

0x21ac,	// (0x0000427d) bg_popup_heading_pane_g9

0x0008,

0xf881,	// (0x00011952) bg_popup_heading_pane_g

0x16e3,	// (0x000037b4) bg_popup_sub_pane_g1

0x16eb,	// (0x000037bc) bg_popup_sub_pane_g2

0x16f3,	// (0x000037c4) bg_popup_sub_pane_g3

0x16fb,	// (0x000037cc) bg_popup_sub_pane_g4

0x1703,	// (0x000037d4) bg_popup_sub_pane_g5

0x170b,	// (0x000037dc) bg_popup_sub_pane_g6

0x1713,	// (0x000037e4) bg_popup_sub_pane_g7

0x171b,	// (0x000037ec) bg_popup_sub_pane_g8

0x1723,	// (0x000037f4) bg_popup_sub_pane_g9

0x0008,

0xf85b,	// (0x0001192c) bg_popup_sub_pane_g

0xe3ef,	// (0x000104c0) bg_popup_window_pane_cp5_ParamLimits

0xe3ef,	// (0x000104c0) bg_popup_window_pane_cp5

0xe5eb,	// (0x000106bc) popup_note_window_g1_ParamLimits

0xe5eb,	// (0x000106bc) popup_note_window_g1

0xe5f7,	// (0x000106c8) popup_note_window_t1_ParamLimits

0xe5f7,	// (0x000106c8) popup_note_window_t1

0xe60d,	// (0x000106de) popup_note_window_t2_ParamLimits

0xe60d,	// (0x000106de) popup_note_window_t2

0xe623,	// (0x000106f4) popup_note_window_t3_ParamLimits

0xe623,	// (0x000106f4) popup_note_window_t3

0xe639,	// (0x0001070a) popup_note_window_t4_ParamLimits

0xe639,	// (0x0001070a) popup_note_window_t4

0xe661,	// (0x00010732) popup_note_window_t5_ParamLimits

0xe661,	// (0x00010732) popup_note_window_t5

0x0004,

0xf585,	// (0x00011656) popup_note_window_t_ParamLimits

0xf585,	// (0x00011656) popup_note_window_t

0xe685,	// (0x00010756) bg_popup_window_pane_cp6_ParamLimits

0xe685,	// (0x00010756) bg_popup_window_pane_cp6

0x2037,	// (0x00004108) popup_note_image_window_g1_ParamLimits

0x2037,	// (0x00004108) popup_note_image_window_g1

0x2043,	// (0x00004114) popup_note_image_window_g2_ParamLimits

0x2043,	// (0x00004114) popup_note_image_window_g2

0x0001,

0xf84f,	// (0x00011920) popup_note_image_window_g_ParamLimits

0xf84f,	// (0x00011920) popup_note_image_window_g

0x205c,	// (0x0000412d) popup_note_image_window_t1_ParamLimits

0x205c,	// (0x0000412d) popup_note_image_window_t1

0x2075,	// (0x00004146) popup_note_image_window_t2_ParamLimits

0x2075,	// (0x00004146) popup_note_image_window_t2

0x208e,	// (0x0000415f) popup_note_image_window_t3_ParamLimits

0x208e,	// (0x0000415f) popup_note_image_window_t3

0x0002,

0xf854,	// (0x00011925) popup_note_image_window_t_ParamLimits

0xf854,	// (0x00011925) popup_note_image_window_t

0x1ef7,	// (0x00003fc8) bg_popup_window_pane_cp7_ParamLimits

0x1ef7,	// (0x00003fc8) bg_popup_window_pane_cp7

0x1f27,	// (0x00003ff8) popup_note_wait_window_g1_ParamLimits

0x1f27,	// (0x00003ff8) popup_note_wait_window_g1

0x1f33,	// (0x00004004) popup_note_wait_window_g2_ParamLimits

0x1f33,	// (0x00004004) popup_note_wait_window_g2

0x0002,

0xf83d,	// (0x0001190e) popup_note_wait_window_g_ParamLimits

0xf83d,	// (0x0001190e) popup_note_wait_window_g

0x1f4b,	// (0x0000401c) popup_note_wait_window_t1_ParamLimits

0x1f4b,	// (0x0000401c) popup_note_wait_window_t1

0x1f72,	// (0x00004043) popup_note_wait_window_t2_ParamLimits

0x1f72,	// (0x00004043) popup_note_wait_window_t2

0x1f90,	// (0x00004061) popup_note_wait_window_t3_ParamLimits

0x1f90,	// (0x00004061) popup_note_wait_window_t3

0x1fa3,	// (0x00004074) popup_note_wait_window_t4_ParamLimits

0x1fa3,	// (0x00004074) popup_note_wait_window_t4

0x0004,

0xf844,	// (0x00011915) popup_note_wait_window_t_ParamLimits

0xf844,	// (0x00011915) popup_note_wait_window_t

0x1fc8,	// (0x00004099) wait_bar_pane_ParamLimits

0x1fc8,	// (0x00004099) wait_bar_pane

0xe341,	// (0x00010412) wait_anim_pane

0xe341,	// (0x00010412) wait_border_pane

0xe1c8,	// (0x00010299) wait_anim_pane_g1

0xe1c8,	// (0x00010299) wait_anim_pane_g2

0x0001,

0xf704,	// (0x000117d5) wait_anim_pane_g

0x1e9b,	// (0x00003f6c) wait_border_pane_g1

0x1ea6,	// (0x00003f77) wait_border_pane_g2

0x1eaf,	// (0x00003f80) wait_border_pane_g3

0x0002,

0xf836,	// (0x00011907) wait_border_pane_g

0x1d05,	// (0x00003dd6) bg_popup_window_pane_cp16_ParamLimits

0x1d05,	// (0x00003dd6) bg_popup_window_pane_cp16

0x1e05,	// (0x00003ed6) indicator_popup_pane_cp4_ParamLimits

0x1e05,	// (0x00003ed6) indicator_popup_pane_cp4

0x1e19,	// (0x00003eea) popup_query_data_window_t1_ParamLimits

0x1e19,	// (0x00003eea) popup_query_data_window_t1

0x1e2b,	// (0x00003efc) popup_query_data_window_t2_ParamLimits

0x1e2b,	// (0x00003efc) popup_query_data_window_t2

0x1e44,	// (0x00003f15) popup_query_data_window_t3_ParamLimits

0x1e44,	// (0x00003f15) popup_query_data_window_t3

0x0002,

0xf82f,	// (0x00011900) popup_query_data_window_t_ParamLimits

0xf82f,	// (0x00011900) popup_query_data_window_t

0x1e5e,	// (0x00003f2f) query_popup_data_pane_ParamLimits

0x1e5e,	// (0x00003f2f) query_popup_data_pane

0x1e72,	// (0x00003f43) query_popup_data_pane_cp1_ParamLimits

0x1e72,	// (0x00003f43) query_popup_data_pane_cp1

0x1d05,	// (0x00003dd6) bg_popup_window_pane_cp10_ParamLimits

0x1d05,	// (0x00003dd6) bg_popup_window_pane_cp10

0x1d37,	// (0x00003e08) indicator_popup_pane_ParamLimits

0x1d37,	// (0x00003e08) indicator_popup_pane

0x1d59,	// (0x00003e2a) popup_query_code_window_t1_ParamLimits

0x1d59,	// (0x00003e2a) popup_query_code_window_t1

0x1d73,	// (0x00003e44) popup_query_code_window_t2_ParamLimits

0x1d73,	// (0x00003e44) popup_query_code_window_t2

0x1dbc,	// (0x00003e8d) popup_query_code_window_t3_ParamLimits

0x1dbc,	// (0x00003e8d) popup_query_code_window_t3

0x0002,

0xf828,	// (0x000118f9) popup_query_code_window_t_ParamLimits

0xf828,	// (0x000118f9) popup_query_code_window_t

0x1deb,	// (0x00003ebc) query_popup_pane_ParamLimits

0x1deb,	// (0x00003ebc) query_popup_pane

0xe685,	// (0x00010756) bg_popup_window_pane_cp15_ParamLimits

0xe685,	// (0x00010756) bg_popup_window_pane_cp15

0xe6a5,	// (0x00010776) indicator_popup_pane_cp1_ParamLimits

0xe6a5,	// (0x00010776) indicator_popup_pane_cp1

0xe6b8,	// (0x00010789) indicator_popup_pane_cp2_ParamLimits

0xe6b8,	// (0x00010789) indicator_popup_pane_cp2

0xe6d3,	// (0x000107a4) popup_query_data_code_window_g1_ParamLimits

0xe6d3,	// (0x000107a4) popup_query_data_code_window_g1

0xe6e6,	// (0x000107b7) popup_query_data_code_window_t1_ParamLimits

0xe6e6,	// (0x000107b7) popup_query_data_code_window_t1

0xe6f8,	// (0x000107c9) popup_query_data_code_window_t2_ParamLimits

0xe6f8,	// (0x000107c9) popup_query_data_code_window_t2

0xe70a,	// (0x000107db) popup_query_data_code_window_t3_ParamLimits

0xe70a,	// (0x000107db) popup_query_data_code_window_t3

0xe720,	// (0x000107f1) popup_query_data_code_window_t4_ParamLimits

0xe720,	// (0x000107f1) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00011661) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00011661) popup_query_data_code_window_t

0x03a1,	// (0x00002472) list_single_midp_graphic_pane_g3

0xe73a,	// (0x0001080b) query_popup_data_pane_cp2_ParamLimits

0xe74d,	// (0x0001081e) query_popup_pane_cp2_ParamLimits

0xe74d,	// (0x0001081e) query_popup_pane_cp2

0xe341,	// (0x00010412) bg_popup_window_pane_cp11

0x1cfd,	// (0x00003dce) heading_pane_cp5

0xe7e3,	// (0x000108b4) listscroll_popup_info_pane

0xe341,	// (0x00010412) input_focus_pane_cp3

0xe768,	// (0x00010839) query_popup_pane_t1

0xe776,	// (0x00010847) list_popup_info_pane_ParamLimits

0xe776,	// (0x00010847) list_popup_info_pane

0xe785,	// (0x00010856) listscroll_popup_info_pane_g1

0xe78d,	// (0x0001085e) scroll_pane_cp7

0xe797,	// (0x00010868) popup_info_list_pane_t1_ParamLimits

0xe797,	// (0x00010868) popup_info_list_pane_t1

0xe7b1,	// (0x00010882) popup_info_list_pane_t2_ParamLimits

0xe7b1,	// (0x00010882) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001166a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001166a) popup_info_list_pane_t

0xe341,	// (0x00010412) bg_popup_window_pane_cp12

0x3458,	// (0x00005529) find_popup_pane

0xe407,	// (0x000104d8) bg_popup_window_pane_cp3

0xe7cb,	// (0x0001089c) heading_pane_cp3

0xe7d7,	// (0x000108a8) listscroll_popup_graphic_pane

0xe341,	// (0x00010412) bg_popup_window_pane_cp4

0x9f86,	// (0x0000c057) heading_pane_cp4

0xe7e3,	// (0x000108b4) listscroll_popup_colour_pane

0x9f90,	// (0x0000c061) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9f90,	// (0x0000c061) cell_large_graphic_colour_none_popup_pane

0x9fa4,	// (0x0000c075) grid_large_graphic_colour_popup_pane_ParamLimits

0x9fa4,	// (0x0000c075) grid_large_graphic_colour_popup_pane

0x9fc8,	// (0x0000c099) listscroll_popup_colour_pane_g1_ParamLimits

0x9fc8,	// (0x0000c099) listscroll_popup_colour_pane_g1

0x9fdf,	// (0x0000c0b0) listscroll_popup_colour_pane_g2_ParamLimits

0x9fdf,	// (0x0000c0b0) listscroll_popup_colour_pane_g2

0x9ff6,	// (0x0000c0c7) listscroll_popup_colour_pane_g3_ParamLimits

0x9ff6,	// (0x0000c0c7) listscroll_popup_colour_pane_g3

0xa006,	// (0x0000c0d7) listscroll_popup_colour_pane_g4_ParamLimits

0xa006,	// (0x0000c0d7) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001166f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001166f) listscroll_popup_colour_pane_g

0xe7eb,	// (0x000108bc) scroll_pane_cp6_ParamLimits

0xe7eb,	// (0x000108bc) scroll_pane_cp6

0xa016,	// (0x0000c0e7) cell_large_graphic_colour_popup_pane_ParamLimits

0xa016,	// (0x0000c0e7) cell_large_graphic_colour_popup_pane

0xe7fd,	// (0x000108ce) cell_large_graphic_colour_none_popup_pane_t1

0xe341,	// (0x00010412) grid_highlight_pane_cp5

0xe80c,	// (0x000108dd) cell_large_graphic_colour_popup_pane_g1

0xe814,	// (0x000108e5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00011678) cell_large_graphic_colour_popup_pane_g

0xe81c,	// (0x000108ed) cell_large_graphic_colour_popup_pane_g2_copy1

0xe825,	// (0x000108f6) grid_highlight_pane_cp4

0xe82d,	// (0x000108fe) bg_popup_window_pane_cp8_ParamLimits

0xe82d,	// (0x000108fe) bg_popup_window_pane_cp8

0xe848,	// (0x00010919) popup_snote_single_text_window_g1_ParamLimits

0xe848,	// (0x00010919) popup_snote_single_text_window_g1

0xe85a,	// (0x0001092b) popup_snote_single_text_window_t1_ParamLimits

0xe85a,	// (0x0001092b) popup_snote_single_text_window_t1

0xe86d,	// (0x0001093e) popup_snote_single_text_window_t2_ParamLimits

0xe86d,	// (0x0001093e) popup_snote_single_text_window_t2

0xe880,	// (0x00010951) popup_snote_single_text_window_t3_ParamLimits

0xe880,	// (0x00010951) popup_snote_single_text_window_t3

0xe8b9,	// (0x0001098a) popup_snote_single_text_window_t4_ParamLimits

0xe8b9,	// (0x0001098a) popup_snote_single_text_window_t4

0xe8ed,	// (0x000109be) popup_snote_single_text_window_t5_ParamLimits

0xe8ed,	// (0x000109be) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001167d) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001167d) popup_snote_single_text_window_t

0xe91c,	// (0x000109ed) bg_popup_window_pane_cp9_ParamLimits

0xe91c,	// (0x000109ed) bg_popup_window_pane_cp9

0xe848,	// (0x00010919) popup_snote_single_graphic_window_g1_ParamLimits

0xe848,	// (0x00010919) popup_snote_single_graphic_window_g1

0xe92a,	// (0x000109fb) popup_snote_single_graphic_window_g2_ParamLimits

0xe92a,	// (0x000109fb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00011688) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00011688) popup_snote_single_graphic_window_g

0xe936,	// (0x00010a07) popup_snote_single_graphic_window_t1_ParamLimits

0xe936,	// (0x00010a07) popup_snote_single_graphic_window_t1

0xe949,	// (0x00010a1a) popup_snote_single_graphic_window_t2_ParamLimits

0xe949,	// (0x00010a1a) popup_snote_single_graphic_window_t2

0xe95c,	// (0x00010a2d) popup_snote_single_graphic_window_t3_ParamLimits

0xe95c,	// (0x00010a2d) popup_snote_single_graphic_window_t3

0xe995,	// (0x00010a66) popup_snote_single_graphic_window_t4_ParamLimits

0xe995,	// (0x00010a66) popup_snote_single_graphic_window_t4

0xe9c9,	// (0x00010a9a) popup_snote_single_graphic_window_t5_ParamLimits

0xe9c9,	// (0x00010a9a) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001168d) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001168d) popup_snote_single_graphic_window_t

0x32de,	// (0x000053af) grid_graphic_popup_pane_ParamLimits

0x32de,	// (0x000053af) grid_graphic_popup_pane

0x330c,	// (0x000053dd) listscroll_popup_graphic_pane_g1_ParamLimits

0x330c,	// (0x000053dd) listscroll_popup_graphic_pane_g1

0xbf26,	// (0x0000dff7) listscroll_popup_graphic_pane_g2_ParamLimits

0xbf26,	// (0x0000dff7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a5,	// (0x00011a76) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a5,	// (0x00011a76) listscroll_popup_graphic_pane_g

0x3334,	// (0x00005405) scroll_pane_cp5

0xbee5,	// (0x0000dfb6) cell_graphic_popup_pane_ParamLimits

0xbee5,	// (0x0000dfb6) cell_graphic_popup_pane

0x3267,	// (0x00005338) cell_graphic_popup_pane_g1

0x326f,	// (0x00005340) cell_graphic_popup_pane_g2

0xe81c,	// (0x000108ed) cell_graphic_popup_pane_g3

0x0002,

0xf99e,	// (0x00011a6f) cell_graphic_popup_pane_g

0x3278,	// (0x00005349) cell_graphic_popup_pane_t2

0xe825,	// (0x000108f6) grid_highlight_pane_cp3

0xea0a,	// (0x00010adb) list_gen_pane_ParamLimits

0xea0a,	// (0x00010adb) list_gen_pane

0xea32,	// (0x00010b03) scroll_pane

0xbe9c,	// (0x0000df6d) bg_list_pane_g1_ParamLimits

0xbe9c,	// (0x0000df6d) bg_list_pane_g1

0x31dc,	// (0x000052ad) bg_list_pane_g2_ParamLimits

0x31dc,	// (0x000052ad) bg_list_pane_g2

0x31f1,	// (0x000052c2) bg_list_pane_g3_ParamLimits

0x31f1,	// (0x000052c2) bg_list_pane_g3

0x3205,	// (0x000052d6) bg_list_pane_g4_ParamLimits

0x3205,	// (0x000052d6) bg_list_pane_g4

0xbeb9,	// (0x0000df8a) bg_list_pane_g5_ParamLimits

0xbeb9,	// (0x0000df8a) bg_list_pane_g5

0x0004,

0xf993,	// (0x00011a64) bg_list_pane_g_ParamLimits

0xf993,	// (0x00011a64) bg_list_pane_g

0xbe36,	// (0x0000df07) list_double2_graphic_large_graphic_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double2_graphic_large_graphic_pane

0xbe36,	// (0x0000df07) list_double2_graphic_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double2_graphic_pane

0xbe36,	// (0x0000df07) list_double2_large_graphic_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double2_large_graphic_pane

0xbe36,	// (0x0000df07) list_double2_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double2_pane

0xbe36,	// (0x0000df07) list_double_graphic_heading_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_graphic_heading_pane

0xbe36,	// (0x0000df07) list_double_graphic_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_graphic_pane

0xbe36,	// (0x0000df07) list_double_heading_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_heading_pane

0xbe36,	// (0x0000df07) list_double_large_graphic_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_large_graphic_pane

0xbe36,	// (0x0000df07) list_double_number_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_number_pane

0xbe36,	// (0x0000df07) list_double_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_pane

0xbe36,	// (0x0000df07) list_double_time_pane_ParamLimits

0xbe36,	// (0x0000df07) list_double_time_pane

0xbe36,	// (0x0000df07) list_setting_number_pane_ParamLimits

0xbe36,	// (0x0000df07) list_setting_number_pane

0xbe36,	// (0x0000df07) list_setting_pane_ParamLimits

0xbe36,	// (0x0000df07) list_setting_pane

0xbe4a,	// (0x0000df1b) list_single_2graphic_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_2graphic_pane

0xbe4a,	// (0x0000df1b) list_single_graphic_heading_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_graphic_heading_pane

0xbe4a,	// (0x0000df1b) list_single_graphic_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_graphic_pane

0xbe4a,	// (0x0000df1b) list_single_heading_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_heading_pane

0xbe4a,	// (0x0000df1b) list_single_large_graphic_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_large_graphic_pane

0xbe4a,	// (0x0000df1b) list_single_number_heading_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_number_heading_pane

0xbe4a,	// (0x0000df1b) list_single_number_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_number_pane

0xbe4a,	// (0x0000df1b) list_single_pane_ParamLimits

0xbe4a,	// (0x0000df1b) list_single_pane

0xe341,	// (0x00010412) list_highlight_pane_cp1

0x04e8,	// (0x000025b9) list_single_pane_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_pane_g1

0x1587,	// (0x00003658) list_single_pane_g2_ParamLimits

0x1587,	// (0x00003658) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_pane_g

0x3a7d,	// (0x00005b4e) list_single_pane_t1_ParamLimits

0x3a7d,	// (0x00005b4e) list_single_pane_t1

0x04e8,	// (0x000025b9) list_single_number_pane_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_number_pane_g1

0x1587,	// (0x00003658) list_single_number_pane_g2_ParamLimits

0x1587,	// (0x00003658) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_number_pane_g

0x1671,	// (0x00003742) list_single_number_pane_t1_ParamLimits

0x1671,	// (0x00003742) list_single_number_pane_t1

0xbc54,	// (0x0000dd25) list_single_number_pane_t2_ParamLimits

0xbc54,	// (0x0000dd25) list_single_number_pane_t2

0x0001,

0xf954,	// (0x00011a25) list_single_number_pane_t_ParamLimits

0xf954,	// (0x00011a25) list_single_number_pane_t

0x5329,	// (0x000073fa) list_single_graphic_pane_g1_ParamLimits

0x5329,	// (0x000073fa) list_single_graphic_pane_g1

0x04e8,	// (0x000025b9) list_single_graphic_pane_g2_ParamLimits

0x04e8,	// (0x000025b9) list_single_graphic_pane_g2

0x1587,	// (0x00003658) list_single_graphic_pane_g3_ParamLimits

0x1587,	// (0x00003658) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00011698) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00011698) list_single_graphic_pane_g

0xa041,	// (0x0000c112) list_single_graphic_pane_t1_ParamLimits

0xa041,	// (0x0000c112) list_single_graphic_pane_t1

0x04e8,	// (0x000025b9) list_single_heading_pane_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_heading_pane_g1

0x1587,	// (0x00003658) list_single_heading_pane_g2_ParamLimits

0x1587,	// (0x00003658) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_heading_pane_g

0x3a9f,	// (0x00005b70) list_single_heading_pane_t1_ParamLimits

0x3a9f,	// (0x00005b70) list_single_heading_pane_t1

0xa057,	// (0x0000c128) list_single_heading_pane_t2_ParamLimits

0xa057,	// (0x0000c128) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000116a4) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000116a4) list_single_heading_pane_t

0x04e8,	// (0x000025b9) list_single_number_heading_pane_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_number_heading_pane_g1

0x1587,	// (0x00003658) list_single_number_heading_pane_g2_ParamLimits

0x1587,	// (0x00003658) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_number_heading_pane_g

0x3a9f,	// (0x00005b70) list_single_number_heading_pane_t1_ParamLimits

0x3a9f,	// (0x00005b70) list_single_number_heading_pane_t1

0xa069,	// (0x0000c13a) list_single_number_heading_pane_t2_ParamLimits

0xa069,	// (0x0000c13a) list_single_number_heading_pane_t2

0x3a59,	// (0x00005b2a) list_single_number_heading_pane_t3_ParamLimits

0x3a59,	// (0x00005b2a) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000116a9) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000116a9) list_single_number_heading_pane_t

0x157b,	// (0x0000364c) list_single_graphic_heading_pane_g1_ParamLimits

0x157b,	// (0x0000364c) list_single_graphic_heading_pane_g1

0xa07b,	// (0x0000c14c) list_single_graphic_heading_pane_g4_ParamLimits

0xa07b,	// (0x0000c14c) list_single_graphic_heading_pane_g4

0x1587,	// (0x00003658) list_single_graphic_heading_pane_g5_ParamLimits

0x1587,	// (0x00003658) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000116b0) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000116b0) list_single_graphic_heading_pane_g

0x3a9f,	// (0x00005b70) list_single_graphic_heading_pane_t1_ParamLimits

0x3a9f,	// (0x00005b70) list_single_graphic_heading_pane_t1

0xa08c,	// (0x0000c15d) list_single_graphic_heading_pane_t2_ParamLimits

0xa08c,	// (0x0000c15d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000116b7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000116b7) list_single_graphic_heading_pane_t

0x3a93,	// (0x00005b64) list_single_large_graphic_pane_g1_ParamLimits

0x3a93,	// (0x00005b64) list_single_large_graphic_pane_g1

0x04e8,	// (0x000025b9) list_single_large_graphic_pane_g2_ParamLimits

0x04e8,	// (0x000025b9) list_single_large_graphic_pane_g2

0x1587,	// (0x00003658) list_single_large_graphic_pane_g3_ParamLimits

0x1587,	// (0x00003658) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000116bc) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000116bc) list_single_large_graphic_pane_g

0x1ea6,	// (0x00003f77) wait_border_pane_g2_copy1

0xa09e,	// (0x0000c16f) list_single_large_graphic_pane_g4_cp2

0x3a9f,	// (0x00005b70) list_single_large_graphic_pane_t1_ParamLimits

0x3a9f,	// (0x00005b70) list_single_large_graphic_pane_t1

0xa0a6,	// (0x0000c177) list_double_pane_g1_ParamLimits

0xa0a6,	// (0x0000c177) list_double_pane_g1

0xa0b2,	// (0x0000c183) list_double_pane_g2_ParamLimits

0xa0b2,	// (0x0000c183) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000116c3) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000116c3) list_double_pane_g

0xa0be,	// (0x0000c18f) list_double_pane_t1_ParamLimits

0xa0be,	// (0x0000c18f) list_double_pane_t1

0xa0d4,	// (0x0000c1a5) list_double_pane_t2_ParamLimits

0xa0d4,	// (0x0000c1a5) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000116c8) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000116c8) list_double_pane_t

0xa0e6,	// (0x0000c1b7) list_double2_pane_g1_ParamLimits

0xa0e6,	// (0x0000c1b7) list_double2_pane_g1

0xa0f7,	// (0x0000c1c8) list_double2_pane_g2_ParamLimits

0xa0f7,	// (0x0000c1c8) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000116cd) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000116cd) list_double2_pane_g

0xa103,	// (0x0000c1d4) list_double2_pane_t1_ParamLimits

0xa103,	// (0x0000c1d4) list_double2_pane_t1

0xa119,	// (0x0000c1ea) list_double2_pane_t2_ParamLimits

0xa119,	// (0x0000c1ea) list_double2_pane_t2

0x0001,

0xf601,	// (0x000116d2) list_double2_pane_t_ParamLimits

0xf601,	// (0x000116d2) list_double2_pane_t

0xa0a6,	// (0x0000c177) list_double_number_pane_g1_ParamLimits

0xa0a6,	// (0x0000c177) list_double_number_pane_g1

0xa0b2,	// (0x0000c183) list_double_number_pane_g2_ParamLimits

0xa0b2,	// (0x0000c183) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000116c3) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000116c3) list_double_number_pane_g

0xa12b,	// (0x0000c1fc) list_double_number_pane_t1_ParamLimits

0xa12b,	// (0x0000c1fc) list_double_number_pane_t1

0xa13d,	// (0x0000c20e) list_double_number_pane_t2_ParamLimits

0xa13d,	// (0x0000c20e) list_double_number_pane_t2

0xa153,	// (0x0000c224) list_double_number_pane_t3_ParamLimits

0xa153,	// (0x0000c224) list_double_number_pane_t3

0x0002,

0xf606,	// (0x000116d7) list_double_number_pane_t_ParamLimits

0xf606,	// (0x000116d7) list_double_number_pane_t

0xea66,	// (0x00010b37) list_double_graphic_pane_g1_ParamLimits

0xea66,	// (0x00010b37) list_double_graphic_pane_g1

0xa165,	// (0x0000c236) list_double_graphic_pane_g2_ParamLimits

0xa165,	// (0x0000c236) list_double_graphic_pane_g2

0xa174,	// (0x0000c245) list_double_graphic_pane_g3_ParamLimits

0xa174,	// (0x0000c245) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000116de) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000116de) list_double_graphic_pane_g

0xa18c,	// (0x0000c25d) list_double_graphic_pane_t1_ParamLimits

0xa18c,	// (0x0000c25d) list_double_graphic_pane_t1

0xa1a2,	// (0x0000c273) list_double_graphic_pane_t2_ParamLimits

0xa1a2,	// (0x0000c273) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000116e7) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000116e7) list_double_graphic_pane_t

0xa1b4,	// (0x0000c285) list_double2_graphic_pane_g1_ParamLimits

0xa1b4,	// (0x0000c285) list_double2_graphic_pane_g1

0xa1c0,	// (0x0000c291) list_double2_graphic_pane_g2_ParamLimits

0xa1c0,	// (0x0000c291) list_double2_graphic_pane_g2

0xa0f7,	// (0x0000c1c8) list_double2_graphic_pane_g3_ParamLimits

0xa0f7,	// (0x0000c1c8) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000116ec) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000116ec) list_double2_graphic_pane_g

0xa1cc,	// (0x0000c29d) list_double2_graphic_pane_t1_ParamLimits

0xa1cc,	// (0x0000c29d) list_double2_graphic_pane_t1

0xa1e2,	// (0x0000c2b3) list_double2_graphic_pane_t2_ParamLimits

0xa1e2,	// (0x0000c2b3) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x000116f3) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x000116f3) list_double2_graphic_pane_t

0xa1f4,	// (0x0000c2c5) list_double_large_graphic_pane_g1_ParamLimits

0xa1f4,	// (0x0000c2c5) list_double_large_graphic_pane_g1

0xa21f,	// (0x0000c2f0) list_double_large_graphic_pane_g2_ParamLimits

0xa21f,	// (0x0000c2f0) list_double_large_graphic_pane_g2

0xa0b2,	// (0x0000c183) list_double_large_graphic_pane_g3_ParamLimits

0xa0b2,	// (0x0000c183) list_double_large_graphic_pane_g3

0xa230,	// (0x0000c301) list_double_large_graphic_pane_g4_ParamLimits

0xa230,	// (0x0000c301) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x000116f8) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x000116f8) list_double_large_graphic_pane_g

0xa242,	// (0x0000c313) list_double_large_graphic_pane_t1_ParamLimits

0xa242,	// (0x0000c313) list_double_large_graphic_pane_t1

0xa25b,	// (0x0000c32c) list_double_large_graphic_pane_t2_ParamLimits

0xa25b,	// (0x0000c32c) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00011703) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00011703) list_double_large_graphic_pane_t

0xa26d,	// (0x0000c33e) list_double2_large_graphic_pane_g1_ParamLimits

0xa26d,	// (0x0000c33e) list_double2_large_graphic_pane_g1

0xa0e6,	// (0x0000c1b7) list_double2_large_graphic_pane_g2_ParamLimits

0xa0e6,	// (0x0000c1b7) list_double2_large_graphic_pane_g2

0xa0f7,	// (0x0000c1c8) list_double2_large_graphic_pane_g3_ParamLimits

0xa0f7,	// (0x0000c1c8) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00011708) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00011708) list_double2_large_graphic_pane_g

0xa279,	// (0x0000c34a) list_double2_large_graphic_pane_t1_ParamLimits

0xa279,	// (0x0000c34a) list_double2_large_graphic_pane_t1

0xa28f,	// (0x0000c360) list_double2_large_graphic_pane_t2_ParamLimits

0xa28f,	// (0x0000c360) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001170f) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001170f) list_double2_large_graphic_pane_t

0xa2a1,	// (0x0000c372) list_double_heading_pane_g1_ParamLimits

0xa2a1,	// (0x0000c372) list_double_heading_pane_g1

0xa2b2,	// (0x0000c383) list_double_heading_pane_g2_ParamLimits

0xa2b2,	// (0x0000c383) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00011714) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00011714) list_double_heading_pane_g

0xa2be,	// (0x0000c38f) list_double_heading_pane_t1_ParamLimits

0xa2be,	// (0x0000c38f) list_double_heading_pane_t1

0xa2d4,	// (0x0000c3a5) list_double_heading_pane_t2_ParamLimits

0xa2d4,	// (0x0000c3a5) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00011719) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00011719) list_double_heading_pane_t

0xa2e6,	// (0x0000c3b7) list_double_graphic_heading_pane_g1_ParamLimits

0xa2e6,	// (0x0000c3b7) list_double_graphic_heading_pane_g1

0xa2a1,	// (0x0000c372) list_double_graphic_heading_pane_g2_ParamLimits

0xa2a1,	// (0x0000c372) list_double_graphic_heading_pane_g2

0xa2b2,	// (0x0000c383) list_double_graphic_heading_pane_g3_ParamLimits

0xa2b2,	// (0x0000c383) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001171e) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001171e) list_double_graphic_heading_pane_g

0xa2f2,	// (0x0000c3c3) list_double_graphic_heading_pane_t1_ParamLimits

0xa2f2,	// (0x0000c3c3) list_double_graphic_heading_pane_t1

0xa308,	// (0x0000c3d9) list_double_graphic_heading_pane_t2_ParamLimits

0xa308,	// (0x0000c3d9) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00011725) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00011725) list_double_graphic_heading_pane_t

0xa21f,	// (0x0000c2f0) list_double_time_pane_g1_ParamLimits

0xa21f,	// (0x0000c2f0) list_double_time_pane_g1

0xa0b2,	// (0x0000c183) list_double_time_pane_g2_ParamLimits

0xa0b2,	// (0x0000c183) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001172a) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001172a) list_double_time_pane_g

0xa31a,	// (0x0000c3eb) list_double_time_pane_t1_ParamLimits

0xa31a,	// (0x0000c3eb) list_double_time_pane_t1

0xa330,	// (0x0000c401) list_double_time_pane_t2_ParamLimits

0xa330,	// (0x0000c401) list_double_time_pane_t2

0xa342,	// (0x0000c413) list_double_time_pane_t3_ParamLimits

0xa342,	// (0x0000c413) list_double_time_pane_t3

0xa354,	// (0x0000c425) list_double_time_pane_t4_ParamLimits

0xa354,	// (0x0000c425) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001172f) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001172f) list_double_time_pane_t

0xa1c0,	// (0x0000c291) list_setting_pane_g1_ParamLimits

0xa1c0,	// (0x0000c291) list_setting_pane_g1

0xa0f7,	// (0x0000c1c8) list_setting_pane_g2_ParamLimits

0xa0f7,	// (0x0000c1c8) list_setting_pane_g2

0x0001,

0xf667,	// (0x00011738) list_setting_pane_g_ParamLimits

0xf667,	// (0x00011738) list_setting_pane_g

0xa366,	// (0x0000c437) list_setting_pane_t1_ParamLimits

0xa366,	// (0x0000c437) list_setting_pane_t1

0xa37d,	// (0x0000c44e) list_setting_pane_t2_ParamLimits

0xa37d,	// (0x0000c44e) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001173d) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001173d) list_setting_pane_t

0xa3bc,	// (0x0000c48d) set_value_pane_cp_ParamLimits

0xa3bc,	// (0x0000c48d) set_value_pane_cp

0xa1c0,	// (0x0000c291) list_setting_number_pane_g1_ParamLimits

0xa1c0,	// (0x0000c291) list_setting_number_pane_g1

0xa0f7,	// (0x0000c1c8) list_setting_number_pane_g2_ParamLimits

0xa0f7,	// (0x0000c1c8) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00011738) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00011738) list_setting_number_pane_g

0xa3ca,	// (0x0000c49b) list_setting_number_pane_t1_ParamLimits

0xa3ca,	// (0x0000c49b) list_setting_number_pane_t1

0xa3de,	// (0x0000c4af) list_setting_number_pane_t2_ParamLimits

0xa3de,	// (0x0000c4af) list_setting_number_pane_t2

0xa3f5,	// (0x0000c4c6) list_setting_number_pane_t3_ParamLimits

0xa3f5,	// (0x0000c4c6) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00011744) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00011744) list_setting_number_pane_t

0xa3bc,	// (0x0000c48d) set_value_pane_ParamLimits

0xa3bc,	// (0x0000c48d) set_value_pane

0xea87,	// (0x00010b58) bg_set_opt_pane_ParamLimits

0xea87,	// (0x00010b58) bg_set_opt_pane

0xeaa8,	// (0x00010b79) set_value_pane_t1

0xeab6,	// (0x00010b87) slider_set_pane_cp3

0xeabf,	// (0x00010b90) volume_small_pane_cp

0xeac8,	// (0x00010b99) list_form_gen_pane

0xead1,	// (0x00010ba2) scroll_pane_cp8

0xa438,	// (0x0000c509) form_field_data_pane_ParamLimits

0xa438,	// (0x0000c509) form_field_data_pane

0xa453,	// (0x0000c524) form_field_data_wide_pane_ParamLimits

0xa453,	// (0x0000c524) form_field_data_wide_pane

0xa477,	// (0x0000c548) form_field_popup_pane_ParamLimits

0xa477,	// (0x0000c548) form_field_popup_pane

0xeaf2,	// (0x00010bc3) form_field_popup_wide_pane_ParamLimits

0xeaf2,	// (0x00010bc3) form_field_popup_wide_pane

0xeb13,	// (0x00010be4) form_field_slider_pane_ParamLimits

0xeb13,	// (0x00010be4) form_field_slider_pane

0xeb26,	// (0x00010bf7) form_field_slider_wide_pane_ParamLimits

0xeb26,	// (0x00010bf7) form_field_slider_wide_pane

0xeb39,	// (0x00010c0a) data_form_pane

0xa4a3,	// (0x0000c574) form_field_data_pane_t1

0xeb45,	// (0x00010c16) input_focus_pane

0xeb53,	// (0x00010c24) data_form_wide_pane

0xeb90,	// (0x00010c61) form_field_data_wide_pane_t1

0xe83a,	// (0x0001090b) input_focus_pane_cp6

0xa4bd,	// (0x0000c58e) form_field_popup_pane_t1

0xeb45,	// (0x00010c16) input_focus_pane_cp7

0xebb2,	// (0x00010c83) list_form_pane

0xebc6,	// (0x00010c97) form_field_popup_wide_pane_t1

0xeb45,	// (0x00010c16) input_focus_pane_cp8

0xebdb,	// (0x00010cac) list_form_wide_pane

0xa4df,	// (0x0000c5b0) form_field_slider_pane_t1_ParamLimits

0xa4df,	// (0x0000c5b0) form_field_slider_pane_t1

0xa4f7,	// (0x0000c5c8) form_field_slider_pane_t2_ParamLimits

0xa4f7,	// (0x0000c5c8) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00011754) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00011754) form_field_slider_pane_t

0xe3ef,	// (0x000104c0) input_focus_pane_cp9_ParamLimits

0xe3ef,	// (0x000104c0) input_focus_pane_cp9

0xa50c,	// (0x0000c5dd) slider_cont_pane_ParamLimits

0xa50c,	// (0x0000c5dd) slider_cont_pane

0xebea,	// (0x00010cbb) form_field_slider_wide_pane_t1_ParamLimits

0xebea,	// (0x00010cbb) form_field_slider_wide_pane_t1

0xebfc,	// (0x00010ccd) form_field_slider_wide_pane_t2_ParamLimits

0xebfc,	// (0x00010ccd) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00011759) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00011759) form_field_slider_wide_pane_t

0xe3ef,	// (0x000104c0) input_focus_pane_cp10_ParamLimits

0xe3ef,	// (0x000104c0) input_focus_pane_cp10

0xa520,	// (0x0000c5f1) slider_cont_pane_cp1_ParamLimits

0xa520,	// (0x0000c5f1) slider_cont_pane_cp1

0xa534,	// (0x0000c605) slider_form_pane_cp

0xec0e,	// (0x00010cdf) input_focus_pane_g1

0xec16,	// (0x00010ce7) input_focus_pane_g2

0xec1e,	// (0x00010cef) input_focus_pane_g3

0xec26,	// (0x00010cf7) input_focus_pane_g4

0xec52,	// (0x00010d23) input_focus_pane_g5

0xec5a,	// (0x00010d2b) input_focus_pane_g6

0xec62,	// (0x00010d33) input_focus_pane_g7

0xec6a,	// (0x00010d3b) input_focus_pane_g8

0xec72,	// (0x00010d43) input_focus_pane_g9

0xe1c8,	// (0x00010299) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001175e) input_focus_pane_g

0x1eaf,	// (0x00003f80) wait_border_pane_g3_copy1

0xa53c,	// (0x0000c60d) data_form_pane_t1

0xe1c8,	// (0x00010299) wait_anim_pane_g1_copy1

0xbe0b,	// (0x0000dedc) data_form_wide_pane_t1

0xec7a,	// (0x00010d4b) list_form_graphic_pane_cp_ParamLimits

0xec7a,	// (0x00010d4b) list_form_graphic_pane_cp

0x307f,	// (0x00005150) slider_form_pane_g1

0x3088,	// (0x00005159) slider_form_pane_g2

0x0006,

0xf984,	// (0x00011a55) slider_form_pane_g

0xa558,	// (0x0000c629) list_form_graphic_pane_ParamLimits

0xa558,	// (0x0000c629) list_form_graphic_pane

0xec8c,	// (0x00010d5d) list_form_graphic_pane_g1

0xec94,	// (0x00010d65) list_form_graphic_pane_t1_ParamLimits

0xec94,	// (0x00010d65) list_form_graphic_pane_t1

0xe407,	// (0x000104d8) list_highlight_pane_cp5_ParamLimits

0xe407,	// (0x000104d8) list_highlight_pane_cp5

0xa569,	// (0x0000c63a) find_pane_g1

0xeca9,	// (0x00010d7a) input_find_pane

0xa572,	// (0x0000c643) input_find_pane_g1_ParamLimits

0xa572,	// (0x0000c643) input_find_pane_g1

0xa57e,	// (0x0000c64f) input_find_pane_t1_ParamLimits

0xa57e,	// (0x0000c64f) input_find_pane_t1

0xa593,	// (0x0000c664) input_find_pane_t2_ParamLimits

0xa593,	// (0x0000c664) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00011773) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00011773) input_find_pane_t

0xecb2,	// (0x00010d83) input_focus_pane_cp5_ParamLimits

0xecb2,	// (0x00010d83) input_focus_pane_cp5

0xecc0,	// (0x00010d91) bg_popup_window_pane_cp2_ParamLimits

0xecc0,	// (0x00010d91) bg_popup_window_pane_cp2

0xeccd,	// (0x00010d9e) listscroll_menu_pane_ParamLimits

0xeccd,	// (0x00010d9e) listscroll_menu_pane

0xa5b4,	// (0x0000c685) popup_submenu_window_ParamLimits

0xa5b4,	// (0x0000c685) popup_submenu_window

0xecd9,	// (0x00010daa) find_popup_pane_g1

0xece1,	// (0x00010db2) input_popup_find_pane_cp

0xecb2,	// (0x00010d83) input_focus_pane_cp4_ParamLimits

0xecb2,	// (0x00010d83) input_focus_pane_cp4

0xeceb,	// (0x00010dbc) input_popup_find_pane_t1_ParamLimits

0xeceb,	// (0x00010dbc) input_popup_find_pane_t1

0xe341,	// (0x00010412) bg_popup_sub_pane_cp

0xed19,	// (0x00010dea) listscroll_popup_sub_pane

0xed21,	// (0x00010df2) list_submenu_pane_ParamLimits

0xed21,	// (0x00010df2) list_submenu_pane

0xed32,	// (0x00010e03) scroll_pane_cp4

0xed3a,	// (0x00010e0b) list_single_popup_submenu_pane_ParamLimits

0xed3a,	// (0x00010e0b) list_single_popup_submenu_pane

0xed4f,	// (0x00010e20) list_single_popup_submenu_pane_g1

0xed57,	// (0x00010e28) list_single_popup_submenu_pane_t1_ParamLimits

0xed57,	// (0x00010e28) list_single_popup_submenu_pane_t1

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp1_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp1

0xa5f2,	// (0x0000c6c3) tabs_2_active_pane_g1

0xa5fa,	// (0x0000c6cb) tabs_2_active_pane_t1

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp1_ParamLimits

0xe3ef,	// (0x000104c0) bg_passive_tab_pane_cp1

0xa5f2,	// (0x0000c6c3) tabs_2_passive_pane_g1

0xa5fa,	// (0x0000c6cb) tabs_2_passive_pane_t1

0xe407,	// (0x000104d8) bg_active_tab_pane_cp4

0xa60c,	// (0x0000c6dd) tabs_2_long_active_pane_t1

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp4

0x1750,	// (0x00003821) list_single_midp_graphic_pane_g4_ParamLimits

0xe407,	// (0x000104d8) bg_active_tab_pane_cp5

0xa61f,	// (0x0000c6f0) tabs_3_long_active_pane_t1

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp5

0x1750,	// (0x00003821) list_single_midp_graphic_pane_g4

0xe407,	// (0x000104d8) bg_popup_window_pane_cp13_ParamLimits

0xe407,	// (0x000104d8) bg_popup_window_pane_cp13

0xed75,	// (0x00010e46) listscroll_popup_fast_pane_ParamLimits

0xed75,	// (0x00010e46) listscroll_popup_fast_pane

0xed84,	// (0x00010e55) grid_popup_fast_pane_ParamLimits

0xed84,	// (0x00010e55) grid_popup_fast_pane

0xed96,	// (0x00010e67) scroll_pane_cp9_ParamLimits

0xed96,	// (0x00010e67) scroll_pane_cp9

0x53a3,	// (0x00007474) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x53a3,	// (0x00007474) list_single_graphic_hl_pane_t1_cp2

0xedba,	// (0x00010e8b) input_focus_pane_cp20_ParamLimits

0xedba,	// (0x00010e8b) input_focus_pane_cp20

0xedc8,	// (0x00010e99) query_popup_data_pane_t1_ParamLimits

0xedc8,	// (0x00010e99) query_popup_data_pane_t1

0xede9,	// (0x00010eba) query_popup_data_pane_t2_ParamLimits

0xede9,	// (0x00010eba) query_popup_data_pane_t2

0xee2f,	// (0x00010f00) query_popup_data_pane_t3_ParamLimits

0xee2f,	// (0x00010f00) query_popup_data_pane_t3

0xee70,	// (0x00010f41) query_popup_data_pane_t4_ParamLimits

0xee70,	// (0x00010f41) query_popup_data_pane_t4

0xeeac,	// (0x00010f7d) query_popup_data_pane_t5_ParamLimits

0xeeac,	// (0x00010f7d) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00011778) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00011778) query_popup_data_pane_t

0xec0e,	// (0x00010cdf) bg_set_opt_pane_g1

0xec16,	// (0x00010ce7) bg_set_opt_pane_g2

0xec1e,	// (0x00010cef) bg_set_opt_pane_g3

0xec26,	// (0x00010cf7) bg_set_opt_pane_g4

0xec52,	// (0x00010d23) bg_set_opt_pane_g5

0xec5a,	// (0x00010d2b) bg_set_opt_pane_g6

0xec62,	// (0x00010d33) bg_set_opt_pane_g7

0xec6a,	// (0x00010d3b) bg_set_opt_pane_g8

0xec72,	// (0x00010d43) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00011783) bg_set_opt_pane_g

0x00c8,	// (0x00002199) control_top_pane_stacon_ParamLimits

0x00c8,	// (0x00002199) control_top_pane_stacon

0x011b,	// (0x000021ec) signal_pane_stacon_ParamLimits

0x011b,	// (0x000021ec) signal_pane_stacon

0x0140,	// (0x00002211) stacon_top_pane_g1_ParamLimits

0x0140,	// (0x00002211) stacon_top_pane_g1

0x0162,	// (0x00002233) title_pane_stacon_ParamLimits

0x0162,	// (0x00002233) title_pane_stacon

0x018c,	// (0x0000225d) uni_indicator_pane_stacon_ParamLimits

0x018c,	// (0x0000225d) uni_indicator_pane_stacon

0x01a4,	// (0x00002275) battery_pane_stacon_ParamLimits

0x01a4,	// (0x00002275) battery_pane_stacon

0x01e8,	// (0x000022b9) control_bottom_pane_stacon_ParamLimits

0x01e8,	// (0x000022b9) control_bottom_pane_stacon

0x020b,	// (0x000022dc) navi_pane_stacon_ParamLimits

0x020b,	// (0x000022dc) navi_pane_stacon

0x022e,	// (0x000022ff) stacon_bottom_pane_g1_ParamLimits

0x022e,	// (0x000022ff) stacon_bottom_pane_g1

0xeee3,	// (0x00010fb4) aid_levels_signal_lsc_ParamLimits

0xeee3,	// (0x00010fb4) aid_levels_signal_lsc

0xeefa,	// (0x00010fcb) signal_pane_stacon_g1_ParamLimits

0xeefa,	// (0x00010fcb) signal_pane_stacon_g1

0xef0e,	// (0x00010fdf) signal_pane_stacon_g2_ParamLimits

0xef0e,	// (0x00010fdf) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00011796) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00011796) signal_pane_stacon_g

0xef50,	// (0x00011021) title_pane_stacon_t1_ParamLimits

0xef50,	// (0x00011021) title_pane_stacon_t1

0xef75,	// (0x00011046) uni_indicator_pane_stacon_g1

0xef7f,	// (0x00011050) uni_indicator_pane_stacon_g2

0xef89,	// (0x0001105a) uni_indicator_pane_stacon_g3

0xef93,	// (0x00011064) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x000117a2) uni_indicator_pane_stacon_g

0xef9d,	// (0x0001106e) control_top_pane_stacon_g1

0xefa5,	// (0x00011076) control_top_pane_stacon_t1_ParamLimits

0xefa5,	// (0x00011076) control_top_pane_stacon_t1

0xefdc,	// (0x000110ad) aid_levels_battery_lsc_ParamLimits

0xefdc,	// (0x000110ad) aid_levels_battery_lsc

0xeff4,	// (0x000110c5) battery_pane_stacon_g1_ParamLimits

0xeff4,	// (0x000110c5) battery_pane_stacon_g1

0xf007,	// (0x000110d8) battery_pane_stacon_g2_ParamLimits

0xf007,	// (0x000110d8) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x000117ab) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x000117ab) battery_pane_stacon_g

0xf045,	// (0x00011116) navi_icon_pane_stacon

0xf059,	// (0x0001112a) navi_navi_pane_stacon

0xf045,	// (0x00011116) navi_text_pane_stacon

0xef9d,	// (0x0001106e) control_bottom_pane_stacon_g1

0xf06f,	// (0x00011140) control_bottom_pane_stacon_t1_ParamLimits

0xf06f,	// (0x00011140) control_bottom_pane_stacon_t1

0xa631,	// (0x0000c702) grid_app_pane_ParamLimits

0xa631,	// (0x0000c702) grid_app_pane

0xa669,	// (0x0000c73a) scroll_pane_cp15_ParamLimits

0xa669,	// (0x0000c73a) scroll_pane_cp15

0xa67e,	// (0x0000c74f) cell_app_pane_ParamLimits

0xa67e,	// (0x0000c74f) cell_app_pane

0xa6cb,	// (0x0000c79c) cell_app_pane_g1_ParamLimits

0xa6cb,	// (0x0000c79c) cell_app_pane_g1

0xf0c0,	// (0x00011191) cell_app_pane_g2_ParamLimits

0xf0c0,	// (0x00011191) cell_app_pane_g2

0x0001,

0xf6df,	// (0x000117b0) cell_app_pane_g_ParamLimits

0xf6df,	// (0x000117b0) cell_app_pane_g

0xf0cc,	// (0x0001119d) cell_app_pane_t1_ParamLimits

0xf0cc,	// (0x0001119d) cell_app_pane_t1

0xf0e3,	// (0x000111b4) grid_highlight_pane_ParamLimits

0xf0e3,	// (0x000111b4) grid_highlight_pane

0xec0e,	// (0x00010cdf) cell_highlight_pane_g1

0xec16,	// (0x00010ce7) cell_highlight_pane_g2

0xec1e,	// (0x00010cef) cell_highlight_pane_g3

0xec26,	// (0x00010cf7) cell_highlight_pane_g4

0xec52,	// (0x00010d23) cell_highlight_pane_g5

0xec5a,	// (0x00010d2b) cell_highlight_pane_g6

0xec62,	// (0x00010d33) cell_highlight_pane_g7

0xec6a,	// (0x00010d3b) cell_highlight_pane_g8

0xec72,	// (0x00010d43) cell_highlight_pane_g9

0xe1c8,	// (0x00010299) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001175e) cell_highlight_pane_g

0xf0fe,	// (0x000111cf) bg_scroll_pane

0xf11d,	// (0x000111ee) scroll_handle_pane

0xf16e,	// (0x0001123f) scroll_bg_pane_g1

0xf183,	// (0x00011254) scroll_bg_pane_g2

0xf19b,	// (0x0001126c) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x000117b5) scroll_bg_pane_g

0xf1b0,	// (0x00011281) scroll_handle_focus_pane_ParamLimits

0xf1b0,	// (0x00011281) scroll_handle_focus_pane

0xf16e,	// (0x0001123f) scroll_handle_pane_g1

0xf1bd,	// (0x0001128e) scroll_handle_pane_g2

0xf19b,	// (0x0001126c) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x000117bc) scroll_handle_pane_g

0xecb2,	// (0x00010d83) bg_popup_sub_pane_cp21_ParamLimits

0xecb2,	// (0x00010d83) bg_popup_sub_pane_cp21

0xf1d1,	// (0x000112a2) popup_fep_japan_predictive_window_t1_ParamLimits

0xf1d1,	// (0x000112a2) popup_fep_japan_predictive_window_t1

0xf1e8,	// (0x000112b9) popup_fep_japan_predictive_window_t2_ParamLimits

0xf1e8,	// (0x000112b9) popup_fep_japan_predictive_window_t2

0xf21b,	// (0x000112ec) popup_fep_japan_predictive_window_t3_ParamLimits

0xf21b,	// (0x000112ec) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x000117c3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x000117c3) popup_fep_japan_predictive_window_t

0xe341,	// (0x00010412) bg_popup_sub_pane_cp23

0xf252,	// (0x00011323) listscroll_japin_cand_pane

0xf25a,	// (0x0001132b) popup_fep_japan_candidate_window_t1

0xf268,	// (0x00011339) candidate_pane_ParamLimits

0xf268,	// (0x00011339) candidate_pane

0xf27a,	// (0x0001134b) scroll_pane_cp30

0xf284,	// (0x00011355) list_single_popup_jap_candidate_pane_ParamLimits

0xf284,	// (0x00011355) list_single_popup_jap_candidate_pane

0xe341,	// (0x00010412) list_highlight_pane_cp30

0xf298,	// (0x00011369) list_single_popup_jap_candidate_pane_t1

0xa6f4,	// (0x0000c7c5) level_1_signal

0xa706,	// (0x0000c7d7) level_2_signal

0xa719,	// (0x0000c7ea) level_3_signal

0xa72c,	// (0x0000c7fd) level_4_signal

0xa73f,	// (0x0000c810) level_5_signal

0xa752,	// (0x0000c823) level_6_signal

0xa765,	// (0x0000c836) level_7_signal

0xa6f4,	// (0x0000c7c5) level_1_battery

0xa706,	// (0x0000c7d7) level_2_battery

0xa719,	// (0x0000c7ea) level_3_battery

0xa72c,	// (0x0000c7fd) level_4_battery

0xa73f,	// (0x0000c810) level_5_battery

0xa752,	// (0x0000c823) level_6_battery

0xa765,	// (0x0000c836) level_7_battery

0xf2de,	// (0x000113af) list_menu_pane_ParamLimits

0xf2de,	// (0x000113af) list_menu_pane

0xf2f4,	// (0x000113c5) scroll_pane_cp25_ParamLimits

0xf2f4,	// (0x000113c5) scroll_pane_cp25

0xf30d,	// (0x000113de) list_double2_graphic_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double2_graphic_pane_cp2

0xf30d,	// (0x000113de) list_double2_large_graphic_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double2_large_graphic_pane_cp2

0xf30d,	// (0x000113de) list_double2_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double2_pane_cp2

0xf30d,	// (0x000113de) list_double_graphic_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double_graphic_pane_cp2

0xf30d,	// (0x000113de) list_double_large_graphic_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double_large_graphic_pane_cp2

0xf30d,	// (0x000113de) list_double_number_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double_number_pane_cp2

0xf30d,	// (0x000113de) list_double_pane_cp2_ParamLimits

0xf30d,	// (0x000113de) list_double_pane_cp2

0xa78b,	// (0x0000c85c) list_single_2graphic_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_2graphic_pane_cp2

0xa78b,	// (0x0000c85c) list_single_graphic_heading_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_graphic_heading_pane_cp2

0xa78b,	// (0x0000c85c) list_single_graphic_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_graphic_pane_cp2

0xa78b,	// (0x0000c85c) list_single_heading_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_heading_pane_cp2

0xf31d,	// (0x000113ee) list_single_large_graphic_pane_cp2_ParamLimits

0xf31d,	// (0x000113ee) list_single_large_graphic_pane_cp2

0xa78b,	// (0x0000c85c) list_single_number_heading_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_number_heading_pane_cp2

0xa78b,	// (0x0000c85c) list_single_number_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_number_pane_cp2

0xa78b,	// (0x0000c85c) list_single_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_pane_cp2

0xf391,	// (0x00011462) bg_popup_sub_pane_cp22

0xf3b6,	// (0x00011487) popup_side_volume_key_window_g1

0xf3e0,	// (0x000114b1) popup_side_volume_key_window_t1

0xf3fe,	// (0x000114cf) volume_small_pane_cp1

0xe3ef,	// (0x000104c0) bg_popup_sub_pane_cp24_ParamLimits

0xe3ef,	// (0x000104c0) bg_popup_sub_pane_cp24

0xf406,	// (0x000114d7) fep_china_uni_candidate_pane_ParamLimits

0xf406,	// (0x000114d7) fep_china_uni_candidate_pane

0xf41a,	// (0x000114eb) fep_china_uni_entry_pane

0xf42a,	// (0x000114fb) popup_fep_china_uni_window_g1

0xf446,	// (0x00011517) fep_china_uni_entry_pane_g1

0xf450,	// (0x00011521) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x000117f4) fep_china_uni_entry_pane_g

0xf45a,	// (0x0001152b) fep_entry_item_pane

0xf464,	// (0x00011535) fep_candidate_item_pane

0xf46c,	// (0x0001153d) fep_china_uni_candidate_pane_g1

0xf476,	// (0x00011547) fep_china_uni_candidate_pane_g2

0xf47e,	// (0x0001154f) fep_china_uni_candidate_pane_g3

0xf486,	// (0x00011557) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x000117f9) fep_china_uni_candidate_pane_g

0xe1c8,	// (0x00010299) fep_entry_item_pane_g1

0xf490,	// (0x00011561) fep_entry_item_pane_t1_ParamLimits

0xf490,	// (0x00011561) fep_entry_item_pane_t1

0xf4a6,	// (0x00011577) fep_candidate_item_pane_t1_ParamLimits

0xf4a6,	// (0x00011577) fep_candidate_item_pane_t1

0xf4bb,	// (0x0001158c) fep_candidate_item_pane_t2_ParamLimits

0xf4bb,	// (0x0001158c) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00011802) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00011802) fep_candidate_item_pane_t

0xe407,	// (0x000104d8) list_highlight_pane_cp31_ParamLimits

0xe407,	// (0x000104d8) list_highlight_pane_cp31

0xf4cd,	// (0x0001159e) level_1_signal_lsc

0xf4d6,	// (0x000115a7) level_2_signal_lsc

0xf4df,	// (0x000115b0) level_3_signal_lsc

0xf4e8,	// (0x000115b9) level_4_signal_lsc

0xf4f1,	// (0x000115c2) level_5_signal_lsc

0xf4fa,	// (0x000115cb) level_6_signal_lsc

0xf503,	// (0x000115d4) level_7_signal_lsc

0xf503,	// (0x000115d4) level_1_battery_lsc

0xf50c,	// (0x000115dd) level_2_battery_lsc

0xf515,	// (0x000115e6) level_3_battery_lsc

0xf51e,	// (0x000115ef) level_4_battery_lsc

0xf527,	// (0x000115f8) level_5_battery_lsc

0xf530,	// (0x00011601) level_6_battery_lsc

0xf4cd,	// (0x0001159e) level_7_battery_lsc

0xf539,	// (0x0001160a) scroll_handle_focus_pane_g1

0xf542,	// (0x00011613) scroll_handle_focus_pane_g2

0xf54b,	// (0x0001161c) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00011807) scroll_handle_focus_pane_g

0xa81d,	// (0x0000c8ee) list_single_2graphic_pane_g1_ParamLimits

0xa81d,	// (0x0000c8ee) list_single_2graphic_pane_g1

0xa07b,	// (0x0000c14c) list_single_2graphic_pane_g2_ParamLimits

0xa07b,	// (0x0000c14c) list_single_2graphic_pane_g2

0x1587,	// (0x00003658) list_single_2graphic_pane_g3_ParamLimits

0x1587,	// (0x00003658) list_single_2graphic_pane_g3

0xa829,	// (0x0000c8fa) list_single_2graphic_pane_g4_ParamLimits

0xa829,	// (0x0000c8fa) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001180e) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001180e) list_single_2graphic_pane_g

0xa83a,	// (0x0000c90b) list_single_2graphic_pane_t1_ParamLimits

0xa83a,	// (0x0000c90b) list_single_2graphic_pane_t1

0xa868,	// (0x0000c939) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa868,	// (0x0000c939) list_double2_graphic_large_graphic_pane_g1

0xa0e6,	// (0x0000c1b7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa0e6,	// (0x0000c1b7) list_double2_graphic_large_graphic_pane_g2

0xa0f7,	// (0x0000c1c8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa0f7,	// (0x0000c1c8) list_double2_graphic_large_graphic_pane_g3

0xa87a,	// (0x0000c94b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa87a,	// (0x0000c94b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00011817) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00011817) list_double2_graphic_large_graphic_pane_g

0xa886,	// (0x0000c957) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa886,	// (0x0000c957) list_double2_graphic_large_graphic_pane_t1

0xa89c,	// (0x0000c96d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa89c,	// (0x0000c96d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00011820) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00011820) list_double2_graphic_large_graphic_pane_t

0x02f0,	// (0x000023c1) popup_fast_swap_window_ParamLimits

0x02f0,	// (0x000023c1) popup_fast_swap_window

0x030e,	// (0x000023df) popup_side_volume_key_window

0x032c,	// (0x000023fd) stacon_top_pane

0x0336,	// (0x00002407) status_pane_ParamLimits

0x0336,	// (0x00002407) status_pane

0x032c,	// (0x000023fd) status_small_pane

0xe341,	// (0x00010412) control_pane

0xe341,	// (0x00010412) stacon_bottom_pane

0xead1,	// (0x00010ba2) scroll_pane_cp121

0xeac8,	// (0x00010b99) set_content_pane

0xa8ae,	// (0x0000c97f) bg_active_tab_pane_g1_cp1

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp1

0xa8b7,	// (0x0000c988) bg_active_tab_pane_g3_cp1

0xa8ae,	// (0x0000c97f) bg_passive_tab_pane_g1_cp1

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp1

0xa8b7,	// (0x0000c988) bg_passive_tab_pane_g3_cp1

0xa8c0,	// (0x0000c991) bg_active_tab_pane_g1_cp2

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp2

0xa8c9,	// (0x0000c99a) bg_active_tab_pane_g3_cp2

0xa8c0,	// (0x0000c991) bg_passive_tab_pane_g1_cp2

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp2

0xa8c9,	// (0x0000c99a) bg_passive_tab_pane_g3_cp2

0xa8d2,	// (0x0000c9a3) bg_active_tab_pane_g1_cp3

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp3

0xa8db,	// (0x0000c9ac) bg_active_tab_pane_g3_cp3

0xa8d2,	// (0x0000c9a3) bg_passive_tab_pane_g1_cp3

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp3

0xa8db,	// (0x0000c9ac) bg_passive_tab_pane_g3_cp3

0xa8e4,	// (0x0000c9b5) bg_active_tab_pane_g1_cp4

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp4

0xa8ed,	// (0x0000c9be) bg_active_tab_pane_g3_cp4

0xa8e4,	// (0x0000c9b5) bg_passive_tab_pane_g1_cp4

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp4

0xa8ed,	// (0x0000c9be) bg_passive_tab_pane_g3_cp4

0x024a,	// (0x0000231b) bg_active_tab_pane_g1_cp5

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp5

0x0253,	// (0x00002324) bg_active_tab_pane_g3_cp5

0x024a,	// (0x0000231b) bg_passive_tab_pane_g1_cp5

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp5

0x0253,	// (0x00002324) bg_passive_tab_pane_g3_cp5

0x380b,	// (0x000058dc) list_set_graphic_pane_ParamLimits

0x380b,	// (0x000058dc) list_set_graphic_pane

0xe341,	// (0x00010412) bg_set_opt_pane_cp4

0xa8f6,	// (0x0000c9c7) list_set_graphic_pane_g1_ParamLimits

0xa8f6,	// (0x0000c9c7) list_set_graphic_pane_g1

0xa902,	// (0x0000c9d3) list_set_graphic_pane_g2_ParamLimits

0xa902,	// (0x0000c9d3) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00011825) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00011825) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00011ba6) volume_small_pane_cp_g

0xa926,	// (0x0000c9f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa926,	// (0x0000c9f7) list_double2_large_graphic_pane_g1_cp2

0xa934,	// (0x0000ca05) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa934,	// (0x0000ca05) list_double2_large_graphic_pane_g2_cp2

0x02c0,	// (0x00002391) list_double2_large_graphic_pane_g3_cp2

0x02c8,	// (0x00002399) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x02c8,	// (0x00002399) list_double2_large_graphic_pane_t1_cp2

0x02de,	// (0x000023af) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x02de,	// (0x000023af) list_double2_large_graphic_pane_t2_cp2

0xbb93,	// (0x0000dc64) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbb93,	// (0x0000dc64) list_double_large_graphic_pane_g1_cp2

0xbba6,	// (0x0000dc77) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbba6,	// (0x0000dc77) list_double_large_graphic_pane_g2_cp2

0x0454,	// (0x00002525) list_double_large_graphic_pane_g3_cp2

0x2b23,	// (0x00004bf4) list_double_large_graphic_pane_g4_cp

0x2b2b,	// (0x00004bfc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2b2b,	// (0x00004bfc) list_double_large_graphic_pane_t1_cp2

0x2b42,	// (0x00004c13) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2b42,	// (0x00004c13) list_double_large_graphic_pane_t2_cp2

0xa945,	// (0x0000ca16) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa945,	// (0x0000ca16) list_double2_graphic_pane_g1_cp2

0xa953,	// (0x0000ca24) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa953,	// (0x0000ca24) list_double2_graphic_pane_g2_cp2

0xa964,	// (0x0000ca35) list_double2_graphic_pane_g3_cp2

0x036d,	// (0x0000243e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x036d,	// (0x0000243e) list_double2_graphic_pane_t1_cp2

0x0383,	// (0x00002454) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0383,	// (0x00002454) list_double2_graphic_pane_t2_cp2

0x0395,	// (0x00002466) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0395,	// (0x00002466) list_single_number_heading_pane_g1_cp2

0x03a1,	// (0x00002472) list_single_number_heading_pane_g2_cp2

0x03a9,	// (0x0000247a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x03a9,	// (0x0000247a) list_single_number_heading_pane_t1_cp2

0xa96e,	// (0x0000ca3f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa96e,	// (0x0000ca3f) list_single_number_heading_pane_t2_cp2

0x03d3,	// (0x000024a4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x03d3,	// (0x000024a4) list_single_number_heading_pane_t3_cp2

0x0395,	// (0x00002466) list_single_heading_pane_g1_cp2_ParamLimits

0x0395,	// (0x00002466) list_single_heading_pane_g1_cp2

0x03a1,	// (0x00002472) list_single_heading_pane_g2_cp2

0x03a9,	// (0x0000247a) list_single_heading_pane_t1_cp2_ParamLimits

0x03a9,	// (0x0000247a) list_single_heading_pane_t1_cp2

0xbb7f,	// (0x0000dc50) list_single_heading_pane_t2_cp2_ParamLimits

0xbb7f,	// (0x0000dc50) list_single_heading_pane_t2_cp2

0x2841,	// (0x00004912) list_double_graphic_pane_g1_cp2_ParamLimits

0x2841,	// (0x00004912) list_double_graphic_pane_g1_cp2

0x284d,	// (0x0000491e) list_double_graphic_pane_g2_cp2_ParamLimits

0x284d,	// (0x0000491e) list_double_graphic_pane_g2_cp2

0x285c,	// (0x0000492d) list_double_graphic_pane_g3_cp2

0x2864,	// (0x00004935) list_double_graphic_pane_t1_cp2_ParamLimits

0x2864,	// (0x00004935) list_double_graphic_pane_t1_cp2

0x287a,	// (0x0000494b) list_double_graphic_pane_t2_cp2_ParamLimits

0x287a,	// (0x0000494b) list_double_graphic_pane_t2_cp2

0x0448,	// (0x00002519) list_double_number_pane_g1_cp2_ParamLimits

0x0448,	// (0x00002519) list_double_number_pane_g1_cp2

0x0454,	// (0x00002525) list_double_number_pane_g2_cp2

0xbb19,	// (0x0000dbea) list_double_number_pane_t1_cp2_ParamLimits

0xbb19,	// (0x0000dbea) list_double_number_pane_t1_cp2

0x2819,	// (0x000048ea) list_double_number_pane_t2_cp2_ParamLimits

0x2819,	// (0x000048ea) list_double_number_pane_t2_cp2

0x282f,	// (0x00004900) list_double_number_pane_t3_cp2_ParamLimits

0x282f,	// (0x00004900) list_double_number_pane_t3_cp2

0xba56,	// (0x0000db27) list_single_graphic_pane_g1_cp2_ParamLimits

0xba56,	// (0x0000db27) list_single_graphic_pane_g1_cp2

0x04ae,	// (0x0000257f) list_single_graphic_pane_g2_cp2_ParamLimits

0x04ae,	// (0x0000257f) list_single_graphic_pane_g2_cp2

0x04ba,	// (0x0000258b) list_single_graphic_pane_g3_cp2

0x26b3,	// (0x00004784) list_single_graphic_pane_t1_cp2_ParamLimits

0x26b3,	// (0x00004784) list_single_graphic_pane_t1_cp2

0x04ae,	// (0x0000257f) list_single_number_pane_g1_cp2_ParamLimits

0x04ae,	// (0x0000257f) list_single_number_pane_g1_cp2

0x04ba,	// (0x0000258b) list_single_number_pane_g2_cp2

0x26b3,	// (0x00004784) list_single_number_pane_t1_cp2_ParamLimits

0x26b3,	// (0x00004784) list_single_number_pane_t1_cp2

0xba42,	// (0x0000db13) list_single_number_pane_t2_cp2_ParamLimits

0xba42,	// (0x0000db13) list_single_number_pane_t2_cp2

0xa934,	// (0x0000ca05) list_double2_pane_g1_cp2_ParamLimits

0xa934,	// (0x0000ca05) list_double2_pane_g1_cp2

0x02c0,	// (0x00002391) list_double2_pane_g2_cp2

0x0420,	// (0x000024f1) list_double2_pane_t1_cp2_ParamLimits

0x0420,	// (0x000024f1) list_double2_pane_t1_cp2

0x0436,	// (0x00002507) list_double2_pane_t2_cp2_ParamLimits

0x0436,	// (0x00002507) list_double2_pane_t2_cp2

0x0448,	// (0x00002519) list_double_pane_g1_cp2_ParamLimits

0x0448,	// (0x00002519) list_double_pane_g1_cp2

0x0454,	// (0x00002525) list_double_pane_g2_cp2

0x045c,	// (0x0000252d) list_double_pane_t1_cp2_ParamLimits

0x045c,	// (0x0000252d) list_double_pane_t1_cp2

0x0472,	// (0x00002543) list_double_pane_t2_cp2_ParamLimits

0x0472,	// (0x00002543) list_double_pane_t2_cp2

0x049e,	// (0x0000256f) list_single_pane_cp2_g3

0x04ae,	// (0x0000257f) list_single_pane_g1_cp2_ParamLimits

0x04ae,	// (0x0000257f) list_single_pane_g1_cp2

0x04ba,	// (0x0000258b) list_single_pane_g2_cp2

0x04c2,	// (0x00002593) list_single_pane_t1_cp2_ParamLimits

0x04c2,	// (0x00002593) list_single_pane_t1_cp2

0xa99c,	// (0x0000ca6d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa99c,	// (0x0000ca6d) list_single_large_graphic_pane_g1_cp2

0x04e8,	// (0x000025b9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x04e8,	// (0x000025b9) list_single_large_graphic_pane_g2_cp2

0x04f4,	// (0x000025c5) list_single_large_graphic_pane_g3_cp2

0x04fc,	// (0x000025cd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x04fc,	// (0x000025cd) list_single_large_graphic_pane_g4_cp1

0x0516,	// (0x000025e7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0516,	// (0x000025e7) list_single_large_graphic_pane_t1_cp2

0x2522,	// (0x000045f3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2522,	// (0x000045f3) list_single_graphic_heading_pane_g1_cp2

0xb8c7,	// (0x0000d998) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb8c7,	// (0x0000d998) list_single_graphic_heading_pane_g4_cp2

0x04ba,	// (0x0000258b) list_single_graphic_heading_pane_g5_cp2

0x252e,	// (0x000045ff) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x252e,	// (0x000045ff) list_single_graphic_heading_pane_t1_cp2

0xb8d8,	// (0x0000d9a9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb8d8,	// (0x0000d9a9) list_single_graphic_heading_pane_t2_cp2

0x24e3,	// (0x000045b4) list_single_2graphic_pane_g1_cp2_ParamLimits

0x24e3,	// (0x000045b4) list_single_2graphic_pane_g1_cp2

0xb8c7,	// (0x0000d998) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb8c7,	// (0x0000d998) list_single_2graphic_pane_g2_cp2

0x04ba,	// (0x0000258b) list_single_2graphic_pane_g3_cp2

0x2500,	// (0x000045d1) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2500,	// (0x000045d1) list_single_2graphic_pane_g4_cp2

0x250c,	// (0x000045dd) list_single_2graphic_pane_t1_cp2_ParamLimits

0x250c,	// (0x000045dd) list_single_2graphic_pane_t1_cp2

0xe1c8,	// (0x00010299) list_highlight_pane_g10_cp1

0x20bb,	// (0x0000418c) list_highlight_pane_g1_cp1

0x20c3,	// (0x00004194) list_highlight_pane_g2_cp1

0x20cb,	// (0x0000419c) list_highlight_pane_g3_cp1

0x20d3,	// (0x000041a4) list_highlight_pane_g4_cp1

0x20db,	// (0x000041ac) list_highlight_pane_g5_cp1

0x20e3,	// (0x000041b4) list_highlight_pane_g6_cp1

0x20eb,	// (0x000041bc) list_highlight_pane_g7_cp1

0x20f3,	// (0x000041c4) list_highlight_pane_g8_cp1

0x20fb,	// (0x000041cc) list_highlight_pane_g9_cp1

0xb88d,	// (0x0000d95e) form_field_slider_pane_t3

0xb89b,	// (0x0000d96c) form_field_slider_pane_t4

0x1ff7,	// (0x000040c8) slider_form_pane_ParamLimits

0x1ff7,	// (0x000040c8) slider_form_pane

0xe341,	// (0x00010412) control_abbreviations

0xe341,	// (0x00010412) control_conventions

0xe341,	// (0x00010412) control_definitions

0xe341,	// (0x00010412) format_table_attribute

0x294f,	// (0x00004a20) bg_popup_preview_window_pane_g9

0xe341,	// (0x00010412) format_table_data2

0xe341,	// (0x00010412) format_table_data3

0xe341,	// (0x00010412) format_table_data_example

0x0008,

0xe341,	// (0x00010412) intro_purpose

0xf8e4,	// (0x000119b5) bg_popup_preview_window_pane_g

0xe341,	// (0x00010412) texts_category

0xe341,	// (0x00010412) texts_graphics

0x052c,	// (0x000025fd) text_digital

0x053b,	// (0x0000260c) text_primary

0x054a,	// (0x0000261b) text_primary_small

0x0559,	// (0x0000262a) text_secondary

0x0568,	// (0x00002639) text_title

0x323b,	// (0x0000530c) bg_passive_tab_pane_g1_cp3_srt

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp3_srt

0x3244,	// (0x00005315) bg_passive_tab_pane_g3_cp3_srt

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp3_srt_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp3_srt

0x324d,	// (0x0000531e) tabs_4_active_pane_srt_g1

0xbecf,	// (0x0000dfa0) tabs_4_active_pane_srt_t1_ParamLimits

0xbecf,	// (0x0000dfa0) tabs_4_active_pane_srt_t1

0x323b,	// (0x0000530c) bg_active_tab_pane_g1_cp3_copy1

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp3_copy1

0x3244,	// (0x00005315) bg_active_tab_pane_g3_cp3_copy1

0xe407,	// (0x000104d8) tabs_2_long_active_pane_srt_ParamLimits

0xe407,	// (0x000104d8) tabs_2_long_active_pane_srt

0xe407,	// (0x000104d8) tabs_2_long_passive_pane_srt_ParamLimits

0xe407,	// (0x000104d8) tabs_2_long_passive_pane_srt

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp4_srt

0x2e18,	// (0x00004ee9) bg_passive_tab_pane_g1_cp4_srt

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp4_srt

0x2e21,	// (0x00004ef2) bg_passive_tab_pane_g3_cp4_srt

0xe407,	// (0x000104d8) bg_active_tab_pane_cp4_srt_ParamLimits

0xe407,	// (0x000104d8) bg_active_tab_pane_cp4_srt

0xbc7c,	// (0x0000dd4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc7c,	// (0x0000dd4d) tabs_2_long_active_pane_srt_t1

0x2e18,	// (0x00004ee9) bg_active_tab_pane_g1_cp4_srt

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp4_srt

0x2e21,	// (0x00004ef2) bg_active_tab_pane_g3_cp4_srt

0xe3ef,	// (0x000104c0) tabs_3_long_active_pane_srt_ParamLimits

0xe3ef,	// (0x000104c0) tabs_3_long_active_pane_srt

0xe3ef,	// (0x000104c0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe3ef,	// (0x000104c0) tabs_3_long_passive_pane_cp_srt

0xe3ef,	// (0x000104c0) tabs_3_long_passive_pane_srt_ParamLimits

0xe3ef,	// (0x000104c0) tabs_3_long_passive_pane_srt

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp5_srt

0x024a,	// (0x0000231b) bg_passive_tab_pane_g1_cp5_srt

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp5_srt

0x0253,	// (0x00002324) bg_passive_tab_pane_g3_cp5_srt

0xe407,	// (0x000104d8) bg_active_tab_pane_cp5_srt_ParamLimits

0xe407,	// (0x000104d8) bg_active_tab_pane_cp5_srt

0xbc66,	// (0x0000dd37) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbc66,	// (0x0000dd37) tabs_3_long_active_pane_srt_t1

0x024a,	// (0x0000231b) bg_active_tab_pane_g1_cp5_srt

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp5_srt

0x0253,	// (0x00002324) bg_active_tab_pane_g3_cp5_srt

0x2df8,	// (0x00004ec9) navi_text_pane_srt_t1

0x2df0,	// (0x00004ec1) navi_icon_pane_srt_g1

0x07dc,	// (0x000028ad) midp_editing_number_pane_srt

0x0577,	// (0x00002648) midp_ticker_pane_srt

0x07e4,	// (0x000028b5) midp_ticker_pane_srt_g1

0x07ec,	// (0x000028bd) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x00011844) midp_ticker_pane_srt_g

0x07f4,	// (0x000028c5) midp_ticker_pane_srt_t1

0x2de1,	// (0x00004eb2) midp_editing_number_pane_t1_copy1

0x0af4,	// (0x00002bc5) listscroll_midp_pane

0x0af4,	// (0x00002bc5) midp_form_pane

0x05e1,	// (0x000026b2) midp_info_popup_window_ParamLimits

0x05e1,	// (0x000026b2) midp_info_popup_window

0xecb2,	// (0x00010d83) bg_popup_sub_pane_cp50_ParamLimits

0xecb2,	// (0x00010d83) bg_popup_sub_pane_cp50

0x1cf1,	// (0x00003dc2) listscroll_midp_info_pane_ParamLimits

0x1cf1,	// (0x00003dc2) listscroll_midp_info_pane

0x1cd9,	// (0x00003daa) listscroll_form_midp_pane_ParamLimits

0x1cd9,	// (0x00003daa) listscroll_form_midp_pane

0x1ce5,	// (0x00003db6) scroll_bar_cp050

0xb881,	// (0x0000d952) list_midp_pane

0x4054,	// (0x00006125) signal_pane_g2_cp

0x1bf3,	// (0x00003cc4) listscroll_midp_info_pane_t1_ParamLimits

0x1bf3,	// (0x00003cc4) listscroll_midp_info_pane_t1

0x1c0b,	// (0x00003cdc) listscroll_midp_info_pane_t2_ParamLimits

0x1c0b,	// (0x00003cdc) listscroll_midp_info_pane_t2

0x1c49,	// (0x00003d1a) listscroll_midp_info_pane_t3_ParamLimits

0x1c49,	// (0x00003d1a) listscroll_midp_info_pane_t3

0x1c83,	// (0x00003d54) listscroll_midp_info_pane_t4_ParamLimits

0x1c83,	// (0x00003d54) listscroll_midp_info_pane_t4

0x0003,

0xf81f,	// (0x000118f0) listscroll_midp_info_pane_t_ParamLimits

0xf81f,	// (0x000118f0) listscroll_midp_info_pane_t

0xed32,	// (0x00010e03) scroll_pane_cp21

0x1b8d,	// (0x00003c5e) form_midp_field_choice_group_pane

0x1b96,	// (0x00003c67) form_midp_field_text_pane

0x1bd9,	// (0x00003caa) form_midp_field_time_pane

0x1be1,	// (0x00003cb2) form_midp_gauge_slider_pane

0x1bea,	// (0x00003cbb) form_midp_gauge_wait_pane

0xe341,	// (0x00010412) form_midp_image_pane

0xb864,	// (0x0000d935) list_single_midp_pane_ParamLimits

0xb864,	// (0x0000d935) list_single_midp_pane

0xb83c,	// (0x0000d90d) form_midp_field_text_pane_t1

0x1880,	// (0x00003951) input_focus_pane_cp050

0x1b5c,	// (0x00003c2d) list_midp_form_text_pane

0x1b00,	// (0x00003bd1) form_midp_field_choice_group_pane_t1

0x1b0e,	// (0x00003bdf) input_focus_pane_cp051

0x1b22,	// (0x00003bf3) list_midp_choice_pane

0xe341,	// (0x00010412) status_idle_pane

0x1ae4,	// (0x00003bb5) form_midp_field_time_pane_t1

0xe1c8,	// (0x00010299) wait_anim_pane_g2_copy1

0x1af2,	// (0x00003bc3) form_midp_field_time_pane_t2

0x0001,

0x0691,	// (0x00002762) aid_navinavi_width_2_pane

0xf81a,	// (0x000118eb) form_midp_field_time_pane_t

0xe341,	// (0x00010412) input_focus_pane_cp052

0xe341,	// (0x00010412) bg_input_focus_pane_cp040

0x1aa4,	// (0x00003b75) form_midp_gauge_slider_pane_t1

0x1ab2,	// (0x00003b83) form_midp_gauge_slider_pane_t2

0xb820,	// (0x0000d8f1) form_midp_gauge_slider_pane_t3

0xb82e,	// (0x0000d8ff) form_midp_gauge_slider_pane_t4

0x0003,

0xf811,	// (0x000118e2) form_midp_gauge_slider_pane_t

0x1adc,	// (0x00003bad) form_midp_slider_pane

0xe407,	// (0x000104d8) bg_input_focus_pane_cp041_ParamLimits

0xe407,	// (0x000104d8) bg_input_focus_pane_cp041

0x1a71,	// (0x00003b42) form_midp_gauge_wait_pane_t1_ParamLimits

0x1a71,	// (0x00003b42) form_midp_gauge_wait_pane_t1

0x1a83,	// (0x00003b54) form_midp_gauge_wait_pane_t2_ParamLimits

0x1a83,	// (0x00003b54) form_midp_gauge_wait_pane_t2

0x0001,

0xf80c,	// (0x000118dd) form_midp_gauge_wait_pane_t_ParamLimits

0xf80c,	// (0x000118dd) form_midp_gauge_wait_pane_t

0x1a95,	// (0x00003b66) form_midp_wait_pane_ParamLimits

0x1a95,	// (0x00003b66) form_midp_wait_pane

0x1a39,	// (0x00003b0a) form_midp_image_pane_g1

0x1a42,	// (0x00003b13) form_midp_image_pane_t1

0x1a51,	// (0x00003b22) form_midp_image_pane_t2

0x1a60,	// (0x00003b31) form_midp_image_pane_t3

0x0002,

0xf805,	// (0x000118d6) form_midp_image_pane_t

0x1a21,	// (0x00003af2) list_single_midp_pane_g1

0x1a2a,	// (0x00003afb) list_single_midp_pane_t1

0xb809,	// (0x0000d8da) list_midp_form_item_pane_ParamLimits

0xb809,	// (0x0000d8da) list_midp_form_item_pane

0x0639,	// (0x0000270a) list_midp_form_item_pane_t1

0x0648,	// (0x00002719) midp_ticker_pane_g1

0x0654,	// (0x00002725) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001182a) midp_ticker_pane_g

0xaa41,	// (0x0000cb12) midp_ticker_pane_t1

0xbe27,	// (0x0000def8) midp_editing_number_pane_t1

0x30df,	// (0x000051b0) midp_editing_number_pane

0x30ee,	// (0x000051bf) midp_ticker_pane

0x2da9,	// (0x00004e7a) ai_message_heading_pane

0xe341,	// (0x00010412) bg_popup_window_pane_cp14

0x2db1,	// (0x00004e82) listscroll_ai_message_pane

0x2d2f,	// (0x00004e00) ai_message_heading_pane_g1_ParamLimits

0x2d2f,	// (0x00004e00) ai_message_heading_pane_g1

0x2d3b,	// (0x00004e0c) ai_message_heading_pane_g2_ParamLimits

0x2d3b,	// (0x00004e0c) ai_message_heading_pane_g2

0x2d49,	// (0x00004e1a) ai_message_heading_pane_g3_ParamLimits

0x2d49,	// (0x00004e1a) ai_message_heading_pane_g3

0x2d55,	// (0x00004e26) ai_message_heading_pane_g4_ParamLimits

0x2d55,	// (0x00004e26) ai_message_heading_pane_g4

0x0003,

0xf946,	// (0x00011a17) ai_message_heading_pane_g_ParamLimits

0xf946,	// (0x00011a17) ai_message_heading_pane_g

0x2d61,	// (0x00004e32) ai_message_heading_pane_t1_ParamLimits

0x2d61,	// (0x00004e32) ai_message_heading_pane_t1

0x2d7b,	// (0x00004e4c) ai_message_heading_pane_t2_ParamLimits

0x2d7b,	// (0x00004e4c) ai_message_heading_pane_t2

0x0001,

0xf94f,	// (0x00011a20) ai_message_heading_pane_t_ParamLimits

0xf94f,	// (0x00011a20) ai_message_heading_pane_t

0x2d8f,	// (0x00004e60) bg_popup_heading_pane_cp1_ParamLimits

0x2d8f,	// (0x00004e60) bg_popup_heading_pane_cp1

0x2d1d,	// (0x00004dee) list_ai_message_pane_ParamLimits

0x2d1d,	// (0x00004dee) list_ai_message_pane

0xed32,	// (0x00010e03) scroll_pane_cp10

0x2c55,	// (0x00004d26) list_ai_message_pane_g1

0x2c5d,	// (0x00004d2e) list_ai_message_pane_g2

0x0001,

0xf923,	// (0x000119f4) list_ai_message_pane_g

0x2c65,	// (0x00004d36) list_ai_message_pane_t1_ParamLimits

0x2c65,	// (0x00004d36) list_ai_message_pane_t1

0x2c7a,	// (0x00004d4b) list_ai_message_pane_t2_ParamLimits

0x2c7a,	// (0x00004d4b) list_ai_message_pane_t2

0x2c8f,	// (0x00004d60) list_ai_message_pane_t3_ParamLimits

0x2c8f,	// (0x00004d60) list_ai_message_pane_t3

0x2ca4,	// (0x00004d75) list_ai_message_pane_t4_ParamLimits

0x2ca4,	// (0x00004d75) list_ai_message_pane_t4

0x0003,

0xf928,	// (0x000119f9) list_ai_message_pane_t_ParamLimits

0xf928,	// (0x000119f9) list_ai_message_pane_t

0xbc3a,	// (0x0000dd0b) cell_ai_soft_ind_pane_ParamLimits

0xbc3a,	// (0x0000dd0b) cell_ai_soft_ind_pane

0x0672,	// (0x00002743) cell_ai_soft_ind_pane_g1_ParamLimits

0x0672,	// (0x00002743) cell_ai_soft_ind_pane_g1

0xe341,	// (0x00010412) grid_highlight_cp1

0x067f,	// (0x00002750) text_secondary_cp56_ParamLimits

0x067f,	// (0x00002750) text_secondary_cp56

0x2c13,	// (0x00004ce4) example_general_pane_ParamLimits

0x2c13,	// (0x00004ce4) example_general_pane

0x2c1f,	// (0x00004cf0) example_parent_pane_g1_ParamLimits

0x2c1f,	// (0x00004cf0) example_parent_pane_g1

0x2c2b,	// (0x00004cfc) example_parent_pane_t1_ParamLimits

0x2c2b,	// (0x00004cfc) example_parent_pane_t1

0xb01c,	// (0x0000d0ed) popup_preview_text_window_ParamLimits

0xb01c,	// (0x0000d0ed) popup_preview_text_window

0x04a6,	// (0x00002577) list_single_pane_cp2_g4

0xe685,	// (0x00010756) bg_popup_preview_window_pane_ParamLimits

0xe685,	// (0x00010756) bg_popup_preview_window_pane

0x2959,	// (0x00004a2a) popup_preview_text_window_t1_ParamLimits

0x2959,	// (0x00004a2a) popup_preview_text_window_t1

0x2977,	// (0x00004a48) popup_preview_text_window_t2_ParamLimits

0x2977,	// (0x00004a48) popup_preview_text_window_t2

0x29c0,	// (0x00004a91) popup_preview_text_window_t3_ParamLimits

0x29c0,	// (0x00004a91) popup_preview_text_window_t3

0x2a05,	// (0x00004ad6) popup_preview_text_window_t4_ParamLimits

0x2a05,	// (0x00004ad6) popup_preview_text_window_t4

0x0004,

0xf8f7,	// (0x000119c8) popup_preview_text_window_t_ParamLimits

0xf8f7,	// (0x000119c8) popup_preview_text_window_t

0x2a83,	// (0x00004b54) scroll_pane_cp11

0x16e3,	// (0x000037b4) bg_popup_preview_window_pane_g1

0x290d,	// (0x000049de) bg_popup_preview_window_pane_g2

0x2917,	// (0x000049e8) bg_popup_preview_window_pane_g3

0x2921,	// (0x000049f2) bg_popup_preview_window_pane_g4

0x292b,	// (0x000049fc) bg_popup_preview_window_pane_g5

0x2935,	// (0x00004a06) bg_popup_preview_window_pane_g6

0x293d,	// (0x00004a0e) bg_popup_preview_window_pane_g7

0x2945,	// (0x00004a16) bg_popup_preview_window_pane_g8

0xe1de,	// (0x000102af) aid_popup_width_pane

0xaf8c,	// (0x0000d05d) popup_midp_note_alarm_window_ParamLimits

0xaf8c,	// (0x0000d05d) popup_midp_note_alarm_window

0xeb39,	// (0x00010c0a) data_form_pane_ParamLimits

0xa499,	// (0x0000c56a) form_field_data_pane_g1

0xa4a3,	// (0x0000c574) form_field_data_pane_t1_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_ParamLimits

0xeb53,	// (0x00010c24) data_form_wide_pane_ParamLimits

0xeb64,	// (0x00010c35) form_field_data_wide_pane_g1

0xeb90,	// (0x00010c61) form_field_data_wide_pane_t1_ParamLimits

0xe83a,	// (0x0001090b) input_focus_pane_cp6_ParamLimits

0xa5e4,	// (0x0000c6b5) input_popup_find_pane_g1_ParamLimits

0xa5e4,	// (0x0000c6b5) input_popup_find_pane_g1

0xf018,	// (0x000110e9) aid_navi_side_left_pane

0xf02d,	// (0x000110fe) aid_navi_side_right_pane

0x21b6,	// (0x00004287) bg_popup_window_pane_cp30_ParamLimits

0x21b6,	// (0x00004287) bg_popup_window_pane_cp30

0x2230,	// (0x00004301) popup_midp_note_alarm_window_g1_ParamLimits

0x2230,	// (0x00004301) popup_midp_note_alarm_window_g1

0x2260,	// (0x00004331) popup_midp_note_alarm_window_t1_ParamLimits

0x2260,	// (0x00004331) popup_midp_note_alarm_window_t1

0x2301,	// (0x000043d2) popup_midp_note_alarm_window_t2_ParamLimits

0x2301,	// (0x000043d2) popup_midp_note_alarm_window_t2

0x23af,	// (0x00004480) popup_midp_note_alarm_window_t3_ParamLimits

0x23af,	// (0x00004480) popup_midp_note_alarm_window_t3

0x23e1,	// (0x000044b2) popup_midp_note_alarm_window_t4_ParamLimits

0x23e1,	// (0x000044b2) popup_midp_note_alarm_window_t4

0x2407,	// (0x000044d8) popup_midp_note_alarm_window_t5_ParamLimits

0x2407,	// (0x000044d8) popup_midp_note_alarm_window_t5

0x000a,

0xf894,	// (0x00011965) popup_midp_note_alarm_window_t_ParamLimits

0xf894,	// (0x00011965) popup_midp_note_alarm_window_t

0x24b3,	// (0x00004584) wait_bar_pane_cp1_ParamLimits

0x24b3,	// (0x00004584) wait_bar_pane_cp1

0xe341,	// (0x00010412) wait_anim_pane_copy1

0xe341,	// (0x00010412) wait_border_pane_copy1

0x1e9b,	// (0x00003f6c) wait_border_pane_g1_copy1

0xebaa,	// (0x00010c7b) form_field_popup_pane_g1

0xa4bd,	// (0x0000c58e) form_field_popup_pane_t1_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_cp7_ParamLimits

0xebb2,	// (0x00010c83) list_form_pane_ParamLimits

0xebbe,	// (0x00010c8f) form_field_popup_wide_pane_g1

0xebc6,	// (0x00010c97) form_field_popup_wide_pane_t1_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_cp8_ParamLimits

0xebdb,	// (0x00010cac) list_form_wide_pane_ParamLimits

0x32c8,	// (0x00005399) aid_size_cell_graphic_pane

0xa53c,	// (0x0000c60d) data_form_pane_t1_ParamLimits

0xbe0b,	// (0x0000dedc) data_form_wide_pane_t1_ParamLimits

0xb420,	// (0x0000d4f1) bg_status_flat_pane

0x9cc2,	// (0x0000bd93) title_pane_t1_ParamLimits

0xe3b7,	// (0x00010488) title_pane_t2_ParamLimits

0xe3dd,	// (0x000104ae) title_pane_t3_ParamLimits

0xf55d,	// (0x0001162e) title_pane_t_ParamLimits

0xa6f4,	// (0x0000c7c5) level_1_signal_ParamLimits

0xa706,	// (0x0000c7d7) level_2_signal_ParamLimits

0xa719,	// (0x0000c7ea) level_3_signal_ParamLimits

0xa72c,	// (0x0000c7fd) level_4_signal_ParamLimits

0xa73f,	// (0x0000c810) level_5_signal_ParamLimits

0xa752,	// (0x0000c823) level_6_signal_ParamLimits

0xa765,	// (0x0000c836) level_7_signal_ParamLimits

0xa6f4,	// (0x0000c7c5) level_1_battery_ParamLimits

0xa706,	// (0x0000c7d7) level_2_battery_ParamLimits

0xa719,	// (0x0000c7ea) level_3_battery_ParamLimits

0xa72c,	// (0x0000c7fd) level_4_battery_ParamLimits

0xa73f,	// (0x0000c810) level_5_battery_ParamLimits

0xa752,	// (0x0000c823) level_6_battery_ParamLimits

0xa765,	// (0x0000c836) level_7_battery_ParamLimits

0x20bb,	// (0x0000418c) bg_status_flat_pane_g1

0x20c3,	// (0x00004194) bg_status_flat_pane_g2

0x20cb,	// (0x0000419c) bg_status_flat_pane_g3

0x20d3,	// (0x000041a4) bg_status_flat_pane_g4

0x20db,	// (0x000041ac) bg_status_flat_pane_g5

0x20e3,	// (0x000041b4) bg_status_flat_pane_g6

0x20eb,	// (0x000041bc) bg_status_flat_pane_g7

0x9d56,	// (0x0000be27) tabs_3_active_pane_t1_ParamLimits

0x9d56,	// (0x0000be27) tabs_3_passive_pane_t1_ParamLimits

0x9d70,	// (0x0000be41) tabs_4_active_pane_t1_ParamLimits

0x9d70,	// (0x0000be41) tabs_4_1_passive_pane_t1_ParamLimits

0xa5fa,	// (0x0000c6cb) tabs_2_active_pane_t1_ParamLimits

0xa5fa,	// (0x0000c6cb) tabs_2_passive_pane_t1_ParamLimits

0xe407,	// (0x000104d8) bg_active_tab_pane_cp4_ParamLimits

0xa60c,	// (0x0000c6dd) tabs_2_long_active_pane_t1_ParamLimits

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp4_ParamLimits

0x17a1,	// (0x00003872) list_single_midp_graphic_pane_t1_ParamLimits

0xe407,	// (0x000104d8) bg_active_tab_pane_cp5_ParamLimits

0xa61f,	// (0x0000c6f0) tabs_3_long_active_pane_t1_ParamLimits

0x0af4,	// (0x00002bc5) bg_passive_tab_pane_cp5_ParamLimits

0x17a1,	// (0x00003872) list_single_midp_graphic_pane_t1

0xb420,	// (0x0000d4f1) bg_status_flat_pane_ParamLimits

0x12b5,	// (0x00003386) indicator_pane_cp2_ParamLimits

0x12b5,	// (0x00003386) indicator_pane_cp2

0xb5b6,	// (0x0000d687) navi_pane_srt_ParamLimits

0xb5b6,	// (0x0000d687) navi_pane_srt

0x141c,	// (0x000034ed) popup_clock_digital_analogue_window_cp1

0xe4ee,	// (0x000105bf) indicator_pane_t1

0x0577,	// (0x00002648) copy_highlight_pane

0x0577,	// (0x00002648) cursor_graphics_pane

0x0577,	// (0x00002648) graphic_within_text_pane

0x0577,	// (0x00002648) link_highlight_pane

0x2a46,	// (0x00004b17) popup_preview_text_window_t5_ParamLimits

0x2a46,	// (0x00004b17) popup_preview_text_window_t5

0x069b,	// (0x0000276c) cursor_digital_pane

0x069b,	// (0x0000276c) cursor_primary_pane

0x06ac,	// (0x0000277d) cursor_primary_small_pane

0x06b4,	// (0x00002785) cursor_secondary_pane

0x06bc,	// (0x0000278d) cursor_title_pane

0x069b,	// (0x0000276c) link_highlight_digital_pane

0x06a3,	// (0x00002774) link_highlight_primary_pane

0x06ac,	// (0x0000277d) link_highlight_primary_small_pane

0x06b4,	// (0x00002785) link_highlight_secondary_pane

0x06bc,	// (0x0000278d) link_highlight_title_pane

0x069b,	// (0x0000276c) copy_highlight_digital_pane

0x069b,	// (0x0000276c) copy_highlight_primary_pane

0x06ac,	// (0x0000277d) copy_highlight_primary_small_pane

0x06b4,	// (0x00002785) copy_highlight_secondary_pane

0x06bc,	// (0x0000278d) copy_highlight_title_pane

0x06b4,	// (0x00002785) graphic_text_digital_pane

0x2159,	// (0x0000422a) graphic_text_primary_pane

0x2162,	// (0x00004233) graphic_text_primary_small_pane

0x06ac,	// (0x0000277d) graphic_text_secondary_pane

0x069b,	// (0x0000276c) graphic_text_title_pane

0xaa53,	// (0x0000cb24) cursor_primary_pane_g1

0x214b,	// (0x0000421c) cursor_text_primary_t1

0xb8bd,	// (0x0000d98e) cursor_primary_small_pane_g1

0x213d,	// (0x0000420e) cursor_text_primary_small_t1

0xb8b3,	// (0x0000d984) cursor_primary_small_pane_g1_copy1

0x2125,	// (0x000041f6) cursor_text_primary_small_t1_copy1

0x2103,	// (0x000041d4) cursor_text_title_t1

0xb8a9,	// (0x0000d97a) cursor_title_pane_g1

0xaa53,	// (0x0000cb24) cursor_digital_pane_g1

0x06ce,	// (0x0000279f) cursor_text_digital_t1

0x06dc,	// (0x000027ad) link_highlight_primary_pane_g1

0x20ac,	// (0x0000417d) link_highlight_primary_pane_t1

0x06dc,	// (0x000027ad) link_highlight_primary_small_pane_g1

0x06e4,	// (0x000027b5) link_highlight_primary_small_pane_t1

0x06f3,	// (0x000027c4) link_highlight_secondary_pane_g1

0x06fb,	// (0x000027cc) link_highlight_secondary_pane_t1

0x2020,	// (0x000040f1) link_highlight_title_pane_g1

0x2028,	// (0x000040f9) link_highlight_title_pane_t1

0x2009,	// (0x000040da) link_highlight_digital_pane_g1

0x2011,	// (0x000040e2) link_highlight_digital_pane_t1

0x1ed1,	// (0x00003fa2) copy_highlight_primary_pane_g1

0x1ee8,	// (0x00003fb9) copy_highlight_primary_pane_t1

0x1ed1,	// (0x00003fa2) copy_highlight_primary_small_pane_g1

0x1ed9,	// (0x00003faa) copy_highlight_primary_small_pane_t1

0x070a,	// (0x000027db) copy_highlight_secondary_pane_g1

0x0712,	// (0x000027e3) copy_highlight_secondary_pane_t1

0x1eba,	// (0x00003f8b) copy_highlight_title_pane_g1

0x1ec2,	// (0x00003f93) copy_highlight_title_pane_t1

0x1ed1,	// (0x00003fa2) copy_highlight_digital_pane_g1

0x3550,	// (0x00005621) copy_highlight_digital_pane_t1

0x34a4,	// (0x00005575) graphic_text_primary_pane_g1

0x3534,	// (0x00005605) graphic_text_primary_pane_t1

0x3542,	// (0x00005613) graphic_text_primary_pane_t2

0x0001,

0xf9c3,	// (0x00011a94) graphic_text_primary_pane_t

0x3510,	// (0x000055e1) graphic_text_primary_small_pane_g1

0x3518,	// (0x000055e9) graphic_text_primary_small_pane_t1

0x3526,	// (0x000055f7) graphic_text_primary_small_pane_t2

0x0001,

0xf9be,	// (0x00011a8f) graphic_text_primary_small_pane_t

0x34ec,	// (0x000055bd) graphic_text_secondary_pane_g1

0x34f4,	// (0x000055c5) graphic_text_secondary_pane_t1

0x3502,	// (0x000055d3) graphic_text_secondary_pane_t2

0x0001,

0xf9b9,	// (0x00011a8a) graphic_text_secondary_pane_t

0x34c8,	// (0x00005599) graphic_text_title_pane_g1

0x34d0,	// (0x000055a1) graphic_text_title_pane_t1

0x34de,	// (0x000055af) graphic_text_title_pane_t2

0x0001,

0xf9b4,	// (0x00011a85) graphic_text_title_pane_t

0x34a4,	// (0x00005575) graphic_text_digital_pane_g1

0x34ac,	// (0x0000557d) graphic_text_digital_pane_t1

0x34ba,	// (0x0000558b) graphic_text_digital_pane_t2

0x0001,

0xf9af,	// (0x00011a80) graphic_text_digital_pane_t

0xe407,	// (0x000104d8) navi_icon_pane_srt_ParamLimits

0xe407,	// (0x000104d8) navi_icon_pane_srt

0xe341,	// (0x00010412) navi_midp_pane_srt

0xe341,	// (0x00010412) navi_navi_pane_srt

0xe407,	// (0x000104d8) navi_text_pane_srt_ParamLimits

0xe407,	// (0x000104d8) navi_text_pane_srt

0x346f,	// (0x00005540) navi_navi_icon_text_pane_srt

0x3477,	// (0x00005548) navi_navi_pane_srt_g1_ParamLimits

0x3477,	// (0x00005548) navi_navi_pane_srt_g1

0x3489,	// (0x0000555a) navi_navi_pane_srt_g2_ParamLimits

0x3489,	// (0x0000555a) navi_navi_pane_srt_g2

0x0001,

0xf9aa,	// (0x00011a7b) navi_navi_pane_srt_g_ParamLimits

0xf9aa,	// (0x00011a7b) navi_navi_pane_srt_g

0x349b,	// (0x0000556c) navi_navi_tabs_pane_srt

0x346f,	// (0x00005540) navi_navi_text_pane_srt

0x346f,	// (0x00005540) navi_navi_volume_pane_srt

0x3460,	// (0x00005531) navi_navi_text_pane_srt_t1

0x343b,	// (0x0000550c) navi_navi_volume_pane_srt_g1

0x3443,	// (0x00005514) volume_small_pane_srt_ParamLimits

0x3443,	// (0x00005514) volume_small_pane_srt

0x0721,	// (0x000027f2) volume_small_pane_srt_g1_ParamLimits

0x0721,	// (0x000027f2) volume_small_pane_srt_g1

0x0731,	// (0x00002802) volume_small_pane_srt_g2_ParamLimits

0x0731,	// (0x00002802) volume_small_pane_srt_g2

0x0742,	// (0x00002813) volume_small_pane_srt_g3_ParamLimits

0x0742,	// (0x00002813) volume_small_pane_srt_g3

0x0753,	// (0x00002824) volume_small_pane_srt_g4_ParamLimits

0x0753,	// (0x00002824) volume_small_pane_srt_g4

0x0764,	// (0x00002835) volume_small_pane_srt_g5_ParamLimits

0x0764,	// (0x00002835) volume_small_pane_srt_g5

0x0775,	// (0x00002846) volume_small_pane_srt_g6_ParamLimits

0x0775,	// (0x00002846) volume_small_pane_srt_g6

0x0786,	// (0x00002857) volume_small_pane_srt_g7_ParamLimits

0x0786,	// (0x00002857) volume_small_pane_srt_g7

0x0797,	// (0x00002868) volume_small_pane_srt_g8_ParamLimits

0x0797,	// (0x00002868) volume_small_pane_srt_g8

0x07a8,	// (0x00002879) volume_small_pane_srt_g9_ParamLimits

0x07a8,	// (0x00002879) volume_small_pane_srt_g9

0x07b9,	// (0x0000288a) volume_small_pane_srt_g10_ParamLimits

0x07b9,	// (0x0000288a) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001182f) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001182f) volume_small_pane_srt_g

0xe73a,	// (0x0001080b) query_popup_data_pane_cp2

0x3429,	// (0x000054fa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3429,	// (0x000054fa) navi_navi_icon_text_pane_srt_t1

0x2159,	// (0x0000422a) navi_tabs_2_long_pane_srt

0x2159,	// (0x0000422a) navi_tabs_2_pane_srt

0x2159,	// (0x0000422a) navi_tabs_3_long_pane_srt

0x2159,	// (0x0000422a) navi_tabs_3_pane_srt

0x2159,	// (0x0000422a) navi_tabs_4_pane_srt

0x3401,	// (0x000054d2) tabs_2_active_pane_srt_ParamLimits

0x3401,	// (0x000054d2) tabs_2_active_pane_srt

0x3411,	// (0x000054e2) tabs_2_passive_pane_srt_ParamLimits

0x3411,	// (0x000054e2) tabs_2_passive_pane_srt

0x1880,	// (0x00003951) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1880,	// (0x00003951) bg_passive_tab_pane_cp1_srt

0x33d5,	// (0x000054a6) bg_passive_tab_pane_g1_cp1_srt

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp1_srt

0x33de,	// (0x000054af) bg_passive_tab_pane_g3_cp1_srt

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp1_srt_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp1_srt

0x33e7,	// (0x000054b8) tabs_2_active_pane_srt_g1

0xbf50,	// (0x0000e021) tabs_2_active_pane_srt_t1_ParamLimits

0xbf50,	// (0x0000e021) tabs_2_active_pane_srt_t1

0x33d5,	// (0x000054a6) bg_active_tab_pane_g1_cp1_srt

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp1_srt

0x33de,	// (0x000054af) bg_active_tab_pane_g3_cp1_srt

0x33a2,	// (0x00005473) tabs_3_active_pane_srt_ParamLimits

0x33a2,	// (0x00005473) tabs_3_active_pane_srt

0x33b3,	// (0x00005484) tabs_3_passive_pane_cp_srt_ParamLimits

0x33b3,	// (0x00005484) tabs_3_passive_pane_cp_srt

0x33c4,	// (0x00005495) tabs_3_passive_pane_srt_ParamLimits

0x33c4,	// (0x00005495) tabs_3_passive_pane_srt

0x1880,	// (0x00003951) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1880,	// (0x00003951) bg_passive_tab_pane_cp2_srt

0x07ca,	// (0x0000289b) bg_passive_tab_pane_g1_cp2_srt

0x007c,	// (0x0000214d) bg_passive_tab_pane_g2_cp2_srt

0x07d3,	// (0x000028a4) bg_passive_tab_pane_g3_cp2_srt

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp2_srt_ParamLimits

0xe3ef,	// (0x000104c0) bg_active_tab_pane_cp2_srt

0x3388,	// (0x00005459) tabs_3_active_pane_srt_g1

0xbf3a,	// (0x0000e00b) tabs_3_active_pane_srt_t1_ParamLimits

0xbf3a,	// (0x0000e00b) tabs_3_active_pane_srt_t1

0x07ca,	// (0x0000289b) bg_active_tab_pane_g1_cp2_srt

0x007c,	// (0x0000214d) bg_active_tab_pane_g2_cp2_srt

0x07d3,	// (0x000028a4) bg_active_tab_pane_g3_cp2_srt

0x3340,	// (0x00005411) tabs_4_active_pane_srt_ParamLimits

0x3340,	// (0x00005411) tabs_4_active_pane_srt

0x3352,	// (0x00005423) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3352,	// (0x00005423) tabs_4_passive_pane_cp2_srt

0x0a72,	// (0x00002b43) aid_size_cell_toolbar

0x2f03,	// (0x00004fd4) main_idle_act_pane_ParamLimits

0x0cc5,	// (0x00002d96) popup_large_graphic_colour_window_ParamLimits

0xb2e2,	// (0x0000d3b3) popup_toolbar_window_ParamLimits

0xb2e2,	// (0x0000d3b3) popup_toolbar_window

0x3124,	// (0x000051f5) list_single_graphic_2heading_pane_ParamLimits

0x3124,	// (0x000051f5) list_single_graphic_2heading_pane

0xf0a6,	// (0x00011177) aid_size_cell_apps_grid_lsc_pane

0xf0b8,	// (0x00011189) aid_size_cell_apps_grid_prt_pane

0x0af4,	// (0x00002bc5) bg_wml_button_pane_cp1_ParamLimits

0x0af4,	// (0x00002bc5) bg_wml_button_pane_cp1

0xb83c,	// (0x0000d90d) form_midp_field_text_pane_t1_ParamLimits

0x1880,	// (0x00003951) input_focus_pane_cp050_ParamLimits

0x1b5c,	// (0x00003c2d) list_midp_form_text_pane_ParamLimits

0x1b0e,	// (0x00003bdf) input_focus_pane_cp051_ParamLimits

0x1b22,	// (0x00003bf3) list_midp_choice_pane_ParamLimits

0xb7f3,	// (0x0000d8c4) list_single_2graphic_pane_cp3_ParamLimits

0xb7f3,	// (0x0000d8c4) list_single_2graphic_pane_cp3

0x441e,	// (0x000064ef) list_single_midp_graphic_pane_ParamLimits

0x441e,	// (0x000064ef) list_single_midp_graphic_pane

0x157b,	// (0x0000364c) list_single_graphic_2heading_pane_g1_ParamLimits

0x157b,	// (0x0000364c) list_single_graphic_2heading_pane_g1

0x04e8,	// (0x000025b9) list_single_graphic_2heading_pane_g4_ParamLimits

0x04e8,	// (0x000025b9) list_single_graphic_2heading_pane_g4

0x1587,	// (0x00003658) list_single_graphic_2heading_pane_g5_ParamLimits

0x1587,	// (0x00003658) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00011882) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00011882) list_single_graphic_2heading_pane_g

0x1593,	// (0x00003664) list_single_graphic_2heading_pane_t1_ParamLimits

0x1593,	// (0x00003664) list_single_graphic_2heading_pane_t1

0x15a7,	// (0x00003678) list_single_graphic_2heading_pane_t2_ParamLimits

0x15a7,	// (0x00003678) list_single_graphic_2heading_pane_t2

0x15c3,	// (0x00003694) list_single_graphic_2heading_pane_t3_ParamLimits

0x15c3,	// (0x00003694) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00011889) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00011889) list_single_graphic_2heading_pane_t

0x15db,	// (0x000036ac) bg_popup_sub_pane_cp2

0x1605,	// (0x000036d6) grid_toobar_pane

0x1641,	// (0x00003712) cell_toolbar_pane_ParamLimits

0x1641,	// (0x00003712) cell_toolbar_pane

0x1687,	// (0x00003758) cell_toolbar_pane_g1_ParamLimits

0x1687,	// (0x00003758) cell_toolbar_pane_g1

0x169b,	// (0x0000376c) cell_toolbar_pane_g2_ParamLimits

0x169b,	// (0x0000376c) cell_toolbar_pane_g2

0x0001,

0xf7bf,	// (0x00011890) cell_toolbar_pane_g_ParamLimits

0xf7bf,	// (0x00011890) cell_toolbar_pane_g

0x16bd,	// (0x0000378e) grid_highlight_pane_cp2_ParamLimits

0x16bd,	// (0x0000378e) grid_highlight_pane_cp2

0x16d7,	// (0x000037a8) toolbar_button_pane

0x16e3,	// (0x000037b4) toolbar_button_pane_g1

0x16eb,	// (0x000037bc) toolbar_button_pane_g2

0x16f3,	// (0x000037c4) toolbar_button_pane_g3

0x16fb,	// (0x000037cc) toolbar_button_pane_g4

0x1703,	// (0x000037d4) toolbar_button_pane_g5

0x170b,	// (0x000037dc) toolbar_button_pane_g6

0x1713,	// (0x000037e4) toolbar_button_pane_g7

0x171b,	// (0x000037ec) toolbar_button_pane_g8

0x1723,	// (0x000037f4) toolbar_button_pane_g9

0x0009,

0xf7c4,	// (0x00011895) toolbar_button_pane_g

0x1733,	// (0x00003804) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1733,	// (0x00003804) list_single_2graphic_pane_g1_cp3

0xb755,	// (0x0000d826) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb755,	// (0x0000d826) list_single_2graphic_pane_g2_cp3

0x03a1,	// (0x00002472) list_single_2graphic_pane_g3_cp3

0x1750,	// (0x00003821) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1750,	// (0x00003821) list_single_2graphic_pane_g4_cp3

0x175c,	// (0x0000382d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x175c,	// (0x0000382d) list_single_2graphic_pane_t1_cp3

0x0395,	// (0x00002466) list_single_midp_graphic_pane_g2_ParamLimits

0x0395,	// (0x00002466) list_single_midp_graphic_pane_g2

0x0a7a,	// (0x00002b4b) aid_zoom_text_primary

0x0a82,	// (0x00002b53) aid_zoom_text_secondary

0x0887,	// (0x00002958) status_small_pane_g7_ParamLimits

0x0887,	// (0x00002958) status_small_pane_g7

0x08aa,	// (0x0000297b) status_small_pane_t1_ParamLimits

0x9caa,	// (0x0000bd7b) title_pane_g2

0x0003,

0xf554,	// (0x00011625) title_pane_g

0x9f36,	// (0x0000c007) aid_size_cell_colour_1_pane_ParamLimits

0x9f36,	// (0x0000c007) aid_size_cell_colour_1_pane

0x9f4a,	// (0x0000c01b) aid_size_cell_colour_2_pane_ParamLimits

0x9f4a,	// (0x0000c01b) aid_size_cell_colour_2_pane

0x9f5e,	// (0x0000c02f) aid_size_cell_colour_3_pane_ParamLimits

0x9f5e,	// (0x0000c02f) aid_size_cell_colour_3_pane

0x9f72,	// (0x0000c043) aid_size_cell_colour_4_pane_ParamLimits

0x9f72,	// (0x0000c043) aid_size_cell_colour_4_pane

0xef1f,	// (0x00010ff0) title_pane_stacon_g1_ParamLimits

0xef1f,	// (0x00010ff0) title_pane_stacon_g1

0x1f3f,	// (0x00004010) popup_note_wait_window_g3_ParamLimits

0x1f3f,	// (0x00004010) popup_note_wait_window_g3

0x1fb6,	// (0x00004087) popup_note_wait_window_t5_ParamLimits

0x1fb6,	// (0x00004087) popup_note_wait_window_t5

0xe341,	// (0x00010412) main_feb_china_hwr_fs_writing_pane

0xac79,	// (0x0000cd4a) popup_feb_china_hwr_fs_window_ParamLimits

0xac79,	// (0x0000cd4a) popup_feb_china_hwr_fs_window

0xb766,	// (0x0000d837) aid_size_cell_hwr_fs_ParamLimits

0xb766,	// (0x0000d837) aid_size_cell_hwr_fs

0x1880,	// (0x00003951) bg_popup_sub_pane_cp3_ParamLimits

0x1880,	// (0x00003951) bg_popup_sub_pane_cp3

0xb77b,	// (0x0000d84c) grid_hwr_fs_pane_ParamLimits

0xb77b,	// (0x0000d84c) grid_hwr_fs_pane

0x18a4,	// (0x00003975) linegrid_hwr_fs_pane_ParamLimits

0x18a4,	// (0x00003975) linegrid_hwr_fs_pane

0xb793,	// (0x0000d864) cell_hwr_fs_pane_ParamLimits

0xb793,	// (0x0000d864) cell_hwr_fs_pane

0x18d8,	// (0x000039a9) linegrid_hwr_fs_pane_g1_ParamLimits

0x18d8,	// (0x000039a9) linegrid_hwr_fs_pane_g1

0xb7b9,	// (0x0000d88a) linegrid_hwr_fs_pane_g2_ParamLimits

0xb7b9,	// (0x0000d88a) linegrid_hwr_fs_pane_g2

0x18f6,	// (0x000039c7) linegrid_hwr_fs_pane_g3_ParamLimits

0x18f6,	// (0x000039c7) linegrid_hwr_fs_pane_g3

0x1902,	// (0x000039d3) linegrid_hwr_fs_pane_g4_ParamLimits

0x1902,	// (0x000039d3) linegrid_hwr_fs_pane_g4

0x1920,	// (0x000039f1) linegrid_hwr_fs_pane_g5_ParamLimits

0x1920,	// (0x000039f1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ea,	// (0x000118bb) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x000118bb) linegrid_hwr_fs_pane_g

0x1936,	// (0x00003a07) cell_hwr_fs_pane_g1_ParamLimits

0x1936,	// (0x00003a07) cell_hwr_fs_pane_g1

0x14b2,	// (0x00003583) cell_hwr_fs_pane_g2_ParamLimits

0x14b2,	// (0x00003583) cell_hwr_fs_pane_g2

0xb7cb,	// (0x0000d89c) cell_hwr_fs_pane_g3_ParamLimits

0xb7cb,	// (0x0000d89c) cell_hwr_fs_pane_g3

0xb7d8,	// (0x0000d8a9) cell_hwr_fs_pane_g4_ParamLimits

0xb7d8,	// (0x0000d8a9) cell_hwr_fs_pane_g4

0x0003,

0xf7f5,	// (0x000118c6) cell_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x000118c6) cell_hwr_fs_pane_g

0xb7e5,	// (0x0000d8b6) cell_hwr_fs_pane_t1

0xe341,	// (0x00010412) grid_highlight_pane_cp6

0xe341,	// (0x00010412) main_idle_act2_pane

0xed19,	// (0x00010dea) aid_inside_area_popup_secondary

0xba7a,	// (0x0000db4b) aid_inside_area_window_primary_ParamLimits

0xba7a,	// (0x0000db4b) aid_inside_area_window_primary

0x355f,	// (0x00005630) ai2_news_ticker_pane

0x3567,	// (0x00005638) aid_size_cell_ai1_link_ParamLimits

0x3567,	// (0x00005638) aid_size_cell_ai1_link

0x3581,	// (0x00005652) popup_ai2_data_window_ParamLimits

0x3581,	// (0x00005652) popup_ai2_data_window

0x359f,	// (0x00005670) popup_ai2_link_window_ParamLimits

0x359f,	// (0x00005670) popup_ai2_link_window

0x1880,	// (0x00003951) bg_popup_sub_pane_cp4_ParamLimits

0x1880,	// (0x00003951) bg_popup_sub_pane_cp4

0x35b5,	// (0x00005686) grid_ai2_link_pane_ParamLimits

0x35b5,	// (0x00005686) grid_ai2_link_pane

0x35cc,	// (0x0000569d) popup_ai2_link_window_g1_ParamLimits

0x35cc,	// (0x0000569d) popup_ai2_link_window_g1

0x35d8,	// (0x000056a9) popup_ai2_link_window_g2_ParamLimits

0x35d8,	// (0x000056a9) popup_ai2_link_window_g2

0x0001,

0xf9c8,	// (0x00011a99) popup_ai2_link_window_g_ParamLimits

0xf9c8,	// (0x00011a99) popup_ai2_link_window_g

0x35e9,	// (0x000056ba) ai2_mp_button_pane

0x35f1,	// (0x000056c2) ai2_mp_volume_pane

0x1b0e,	// (0x00003bdf) bg_popup_sub_pane_cp5_ParamLimits

0x1b0e,	// (0x00003bdf) bg_popup_sub_pane_cp5

0x35f9,	// (0x000056ca) heading_ai2_gene_pane_ParamLimits

0x35f9,	// (0x000056ca) heading_ai2_gene_pane

0x3605,	// (0x000056d6) list_ai2_gene_pane_ParamLimits

0x3605,	// (0x000056d6) list_ai2_gene_pane

0x364d,	// (0x0000571e) cell_ai2_link_pane_ParamLimits

0x364d,	// (0x0000571e) cell_ai2_link_pane

0x3663,	// (0x00005734) cell_ai2_link_pane_g1

0xe341,	// (0x00010412) grid_highlight_pane_cp7

0x3736,	// (0x00005807) ai2_mp_volume_pane_g1

0x373e,	// (0x0000580f) ai2_mp_volume_pane_g2

0x36ab,	// (0x0000577c) list_ai2_gene_pane_t1

0x3746,	// (0x00005817) ai2_mp_volume_pane_g3

0x0002,

0xf9e1,	// (0x00011ab2) ai2_mp_volume_pane_g

0x374e,	// (0x0000581f) volume_small_pane_cp3

0x3757,	// (0x00005828) aid_size_cell_ai2_button

0x375f,	// (0x00005830) grid_ai2_button_pane

0x3768,	// (0x00005839) cell_ai2_button_pane_ParamLimits

0x3768,	// (0x00005839) cell_ai2_button_pane

0xe1c8,	// (0x00010299) cell_ai2_button_pane_g1

0xe341,	// (0x00010412) grid_highlight_pane_cp8

0x36f6,	// (0x000057c7) ai2_gene_pane_t1_ParamLimits

0x36f6,	// (0x000057c7) ai2_gene_pane_t1

0xabe5,	// (0x0000ccb6) aid_height_parent_landscape

0xbc93,	// (0x0000dd64) aid_height_set_list

0x2f03,	// (0x00004fd4) aid_size_parent

0x32c8,	// (0x00005399) aid_size_cell_graphic_pane_ParamLimits

0x3615,	// (0x000056e6) popup_ai2_data_window_g1_ParamLimits

0x3615,	// (0x000056e6) popup_ai2_data_window_g1

0x3621,	// (0x000056f2) ai2_news_ticker_pane_g1

0x3629,	// (0x000056fa) ai2_news_ticker_pane_g2

0x0001,

0xf9cd,	// (0x00011a9e) ai2_news_ticker_pane_g

0x3631,	// (0x00005702) ai2_news_ticker_pane_t1

0x363f,	// (0x00005710) ai2_news_ticker_pane_t2

0x0001,

0xf9d2,	// (0x00011aa3) ai2_news_ticker_pane_t

0x366c,	// (0x0000573d) heading_ai2_gene_pane_g1

0x3674,	// (0x00005745) heading_ai2_gene_pane_t1_ParamLimits

0x3674,	// (0x00005745) heading_ai2_gene_pane_t1

0x3689,	// (0x0000575a) list_highlight_pane_cp6

0x3691,	// (0x00005762) ai2_gene_pane_ParamLimits

0x3691,	// (0x00005762) ai2_gene_pane

0x36b9,	// (0x0000578a) list_ai2_gene_pane_t2

0x0001,

0xf9d7,	// (0x00011aa8) list_ai2_gene_pane_t

0x36c7,	// (0x00005798) list_highlight_pane_cp8_ParamLimits

0x36c7,	// (0x00005798) list_highlight_pane_cp8

0x36d8,	// (0x000057a9) ai2_gene_pane_g1_ParamLimits

0x36d8,	// (0x000057a9) ai2_gene_pane_g1

0x36ea,	// (0x000057bb) ai2_gene_pane_g2_ParamLimits

0x36ea,	// (0x000057bb) ai2_gene_pane_g2

0x0001,

0xf9dc,	// (0x00011aad) ai2_gene_pane_g_ParamLimits

0xf9dc,	// (0x00011aad) ai2_gene_pane_g

0xea55,	// (0x00010b26) scroll_pane_cp12

0xaba4,	// (0x0000cc75) control_pane_t3_ParamLimits

0xaba4,	// (0x0000cc75) control_pane_t3

0x089b,	// (0x0000296c) status_small_pane_g8_ParamLimits

0x089b,	// (0x0000296c) status_small_pane_g8

0xad1b,	// (0x0000cdec) popup_find_window_ParamLimits

0xafcc,	// (0x0000d09d) popup_note_image_window_ParamLimits

0x157b,	// (0x0000364c) list_double2_graphic_pane_vc_g1_ParamLimits

0x157b,	// (0x0000364c) list_double2_graphic_pane_vc_g1

0x04e8,	// (0x000025b9) list_double2_graphic_pane_vc_g2_ParamLimits

0x04e8,	// (0x000025b9) list_double2_graphic_pane_vc_g2

0x1587,	// (0x00003658) list_double2_graphic_pane_vc_g3_ParamLimits

0x1587,	// (0x00003658) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b1,	// (0x00011882) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b1,	// (0x00011882) list_double2_graphic_pane_vc_g

0x1671,	// (0x00003742) list_double2_graphic_pane_vc_t1_ParamLimits

0x1671,	// (0x00003742) list_double2_graphic_pane_vc_t1

0x04e8,	// (0x000025b9) list_single_heading_pane_vc_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_heading_pane_vc_g1

0x1587,	// (0x00003658) list_single_heading_pane_vc_g2_ParamLimits

0x1587,	// (0x00003658) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_heading_pane_vc_g

0x1777,	// (0x00003848) list_single_heading_pane_vc_t1_ParamLimits

0x1777,	// (0x00003848) list_single_heading_pane_vc_t1

0x178f,	// (0x00003860) list_single_heading_pane_vc_t2_ParamLimits

0x178f,	// (0x00003860) list_single_heading_pane_vc_t2

0x0001,

0xf7d9,	// (0x000118aa) list_single_heading_pane_vc_t_ParamLimits

0xf7d9,	// (0x000118aa) list_single_heading_pane_vc_t

0x17b7,	// (0x00003888) list_setting_number_pane_vc_g1_ParamLimits

0x17b7,	// (0x00003888) list_setting_number_pane_vc_g1

0x17c3,	// (0x00003894) list_setting_number_pane_vc_g2_ParamLimits

0x17c3,	// (0x00003894) list_setting_number_pane_vc_g2

0x0001,

0xf7de,	// (0x000118af) list_setting_number_pane_vc_g_ParamLimits

0xf7de,	// (0x000118af) list_setting_number_pane_vc_g

0x17cf,	// (0x000038a0) list_setting_number_pane_vc_t1_ParamLimits

0x17cf,	// (0x000038a0) list_setting_number_pane_vc_t1

0x17e3,	// (0x000038b4) list_setting_number_pane_vc_t2_ParamLimits

0x17e3,	// (0x000038b4) list_setting_number_pane_vc_t2

0x17ff,	// (0x000038d0) list_setting_number_pane_vc_t3_ParamLimits

0x17ff,	// (0x000038d0) list_setting_number_pane_vc_t3

0x0002,

0xf7e3,	// (0x000118b4) list_setting_number_pane_vc_t_ParamLimits

0xf7e3,	// (0x000118b4) list_setting_number_pane_vc_t

0x182d,	// (0x000038fe) set_value_pane_vc_ParamLimits

0x182d,	// (0x000038fe) set_value_pane_vc

0x3124,	// (0x000051f5) list_double2_graphic_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double2_graphic_pane_vc

0x3124,	// (0x000051f5) list_double2_large_graphic_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double2_large_graphic_pane_vc

0x3124,	// (0x000051f5) list_double2_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double2_pane_vc

0x3124,	// (0x000051f5) list_double_graphic_heading_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_graphic_heading_pane_vc

0x3124,	// (0x000051f5) list_double_graphic_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_graphic_pane_vc

0x3124,	// (0x000051f5) list_double_heading_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_heading_pane_vc

0x3124,	// (0x000051f5) list_double_large_graphic_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_large_graphic_pane_vc

0x3124,	// (0x000051f5) list_double_number_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_number_pane_vc

0x3124,	// (0x000051f5) list_double_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_pane_vc

0x3124,	// (0x000051f5) list_double_time_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_double_time_pane_vc

0x3124,	// (0x000051f5) list_setting_number_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_setting_number_pane_vc

0x3124,	// (0x000051f5) list_setting_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_setting_pane_vc

0x3124,	// (0x000051f5) list_single_graphic_heading_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_single_graphic_heading_pane_vc

0x3124,	// (0x000051f5) list_single_heading_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_single_heading_pane_vc

0x3124,	// (0x000051f5) list_single_number_heading_pane_vc_ParamLimits

0x3124,	// (0x000051f5) list_single_number_heading_pane_vc

0x157b,	// (0x0000364c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x157b,	// (0x0000364c) list_double_graphic_heading_pane_vc_g1

0x379b,	// (0x0000586c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x379b,	// (0x0000586c) list_double_graphic_heading_pane_vc_g2

0x37a7,	// (0x00005878) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x37a7,	// (0x00005878) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e8,	// (0x00011ab9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e8,	// (0x00011ab9) list_double_graphic_heading_pane_vc_g

0x37b3,	// (0x00005884) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x37b3,	// (0x00005884) list_double_graphic_heading_pane_vc_t1

0x37c9,	// (0x0000589a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x37c9,	// (0x0000589a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ef,	// (0x00011ac0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ef,	// (0x00011ac0) list_double_graphic_heading_pane_vc_t

0x17b7,	// (0x00003888) list_setting_pane_vc_g1_ParamLimits

0x17b7,	// (0x00003888) list_setting_pane_vc_g1

0x17c3,	// (0x00003894) list_setting_pane_vc_g2_ParamLimits

0x17c3,	// (0x00003894) list_setting_pane_vc_g2

0x0001,

0xf7de,	// (0x000118af) list_setting_pane_vc_g_ParamLimits

0xf7de,	// (0x000118af) list_setting_pane_vc_g

0x3a0f,	// (0x00005ae0) list_setting_pane_vc_t1_ParamLimits

0x3a0f,	// (0x00005ae0) list_setting_pane_vc_t1

0x3a2b,	// (0x00005afc) list_setting_pane_vc_t2_ParamLimits

0x3a2b,	// (0x00005afc) list_setting_pane_vc_t2

0x0001,

0xfa32,	// (0x00011b03) list_setting_pane_vc_t_ParamLimits

0xfa32,	// (0x00011b03) list_setting_pane_vc_t

0x182d,	// (0x000038fe) set_value_pane_cp_vc_ParamLimits

0x182d,	// (0x000038fe) set_value_pane_cp_vc

0x04e8,	// (0x000025b9) list_single_number_heading_pane_vc_g1_ParamLimits

0x04e8,	// (0x000025b9) list_single_number_heading_pane_vc_g1

0x1587,	// (0x00003658) list_single_number_heading_pane_vc_g2_ParamLimits

0x1587,	// (0x00003658) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001169f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001169f) list_single_number_heading_pane_vc_g

0x1777,	// (0x00003848) list_single_number_heading_pane_vc_t1_ParamLimits

0x1777,	// (0x00003848) list_single_number_heading_pane_vc_t1

0x3a47,	// (0x00005b18) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a47,	// (0x00005b18) list_single_number_heading_pane_vc_t2

0x3a59,	// (0x00005b2a) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a59,	// (0x00005b2a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa37,	// (0x00011b08) list_single_number_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x00011b08) list_single_number_heading_pane_vc_t

0x157b,	// (0x0000364c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x157b,	// (0x0000364c) list_single_graphic_heading_pane_vc_g1

0x04e8,	// (0x000025b9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x04e8,	// (0x000025b9) list_single_graphic_heading_pane_vc_g4

0x1587,	// (0x00003658) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1587,	// (0x00003658) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b1,	// (0x00011882) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b1,	// (0x00011882) list_single_graphic_heading_pane_vc_g

0x1777,	// (0x00003848) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1777,	// (0x00003848) list_single_graphic_heading_pane_vc_t1

0x3a6b,	// (0x00005b3c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3a6b,	// (0x00005b3c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00011b0f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00011b0f) list_single_graphic_heading_pane_vc_t

0x04e8,	// (0x000025b9) list_double2_pane_vc_g1_ParamLimits

0x04e8,	// (0x000025b9) list_double2_pane_vc_g1

0x1587,	// (0x00003658) list_double2_pane_vc_g2_ParamLimits

0x1587,	// (0x00003658) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001169f) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001169f) list_double2_pane_vc_g

0x3a7d,	// (0x00005b4e) list_double2_pane_vc_t1_ParamLimits

0x3a7d,	// (0x00005b4e) list_double2_pane_vc_t1

0x3a93,	// (0x00005b64) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3a93,	// (0x00005b64) list_double2_large_graphic_pane_vc_g1

0x04e8,	// (0x000025b9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x04e8,	// (0x000025b9) list_double2_large_graphic_pane_vc_g2

0x1587,	// (0x00003658) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1587,	// (0x00003658) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000116bc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000116bc) list_double2_large_graphic_pane_vc_g

0x3a9f,	// (0x00005b70) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a9f,	// (0x00005b70) list_double2_large_graphic_pane_vc_t1

0x3ab5,	// (0x00005b86) list_double_time_pane_vc_g1_ParamLimits

0x3ab5,	// (0x00005b86) list_double_time_pane_vc_g1

0x3ac1,	// (0x00005b92) list_double_time_pane_vc_g2_ParamLimits

0x3ac1,	// (0x00005b92) list_double_time_pane_vc_g2

0x0001,

0xfa43,	// (0x00011b14) list_double_time_pane_vc_g_ParamLimits

0xfa43,	// (0x00011b14) list_double_time_pane_vc_g

0x3acd,	// (0x00005b9e) list_double_time_pane_vc_t1_ParamLimits

0x3acd,	// (0x00005b9e) list_double_time_pane_vc_t1

0x3afd,	// (0x00005bce) list_double_time_pane_vc_t2_ParamLimits

0x3afd,	// (0x00005bce) list_double_time_pane_vc_t2

0x3b26,	// (0x00005bf7) list_double_time_pane_vc_t3_ParamLimits

0x3b26,	// (0x00005bf7) list_double_time_pane_vc_t3

0x3b38,	// (0x00005c09) list_double_time_pane_vc_t4_ParamLimits

0x3b38,	// (0x00005c09) list_double_time_pane_vc_t4

0x0003,

0xfa48,	// (0x00011b19) list_double_time_pane_vc_t_ParamLimits

0xfa48,	// (0x00011b19) list_double_time_pane_vc_t

0x04e8,	// (0x000025b9) list_double_pane_vc_g1_ParamLimits

0x04e8,	// (0x000025b9) list_double_pane_vc_g1

0x1587,	// (0x00003658) list_double_pane_vc_g2_ParamLimits

0x1587,	// (0x00003658) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001169f) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001169f) list_double_pane_vc_g

0x3b5d,	// (0x00005c2e) list_double_pane_vc_t1_ParamLimits

0x3b5d,	// (0x00005c2e) list_double_pane_vc_t1

0x3b71,	// (0x00005c42) list_double_pane_vc_t2_ParamLimits

0x3b71,	// (0x00005c42) list_double_pane_vc_t2

0x0001,

0xfa51,	// (0x00011b22) list_double_pane_vc_t_ParamLimits

0xfa51,	// (0x00011b22) list_double_pane_vc_t

0x04e8,	// (0x000025b9) list_double_number_pane_vc_g1_ParamLimits

0x04e8,	// (0x000025b9) list_double_number_pane_vc_g1

0x1587,	// (0x00003658) list_double_number_pane_vc_g2_ParamLimits

0x1587,	// (0x00003658) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001169f) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001169f) list_double_number_pane_vc_g

0x3b87,	// (0x00005c58) list_double_number_pane_vc_t1_ParamLimits

0x3b87,	// (0x00005c58) list_double_number_pane_vc_t1

0x3b9b,	// (0x00005c6c) list_double_number_pane_vc_t2_ParamLimits

0x3b9b,	// (0x00005c6c) list_double_number_pane_vc_t2

0x3baf,	// (0x00005c80) list_double_number_pane_vc_t3_ParamLimits

0x3baf,	// (0x00005c80) list_double_number_pane_vc_t3

0x0002,

0xfa56,	// (0x00011b27) list_double_number_pane_vc_t_ParamLimits

0xfa56,	// (0x00011b27) list_double_number_pane_vc_t

0x3bc5,	// (0x00005c96) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3bc5,	// (0x00005c96) list_double_large_graphic_pane_vc_g1

0x3bd6,	// (0x00005ca7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3bd6,	// (0x00005ca7) list_double_large_graphic_pane_vc_g2

0x1587,	// (0x00003658) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1587,	// (0x00003658) list_double_large_graphic_pane_vc_g3

0x3be5,	// (0x00005cb6) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3be5,	// (0x00005cb6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5d,	// (0x00011b2e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x00011b2e) list_double_large_graphic_pane_vc_g

0x3bf1,	// (0x00005cc2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3bf1,	// (0x00005cc2) list_double_large_graphic_pane_vc_t1

0x3c0a,	// (0x00005cdb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c0a,	// (0x00005cdb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x00011b37) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x00011b37) list_double_large_graphic_pane_vc_t

0x379b,	// (0x0000586c) list_double_heading_pane_vc_g1_ParamLimits

0x379b,	// (0x0000586c) list_double_heading_pane_vc_g1

0x37a7,	// (0x00005878) list_double_heading_pane_vc_g2_ParamLimits

0x37a7,	// (0x00005878) list_double_heading_pane_vc_g2

0x0001,

0xfa6b,	// (0x00011b3c) list_double_heading_pane_vc_g_ParamLimits

0xfa6b,	// (0x00011b3c) list_double_heading_pane_vc_g

0x3c21,	// (0x00005cf2) list_double_heading_pane_vc_t1_ParamLimits

0x3c21,	// (0x00005cf2) list_double_heading_pane_vc_t1

0x1777,	// (0x00003848) list_double_heading_pane_vc_t2_ParamLimits

0x1777,	// (0x00003848) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x00011b41) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x00011b41) list_double_heading_pane_vc_t

0x157b,	// (0x0000364c) list_double_graphic_pane_vc_g1_ParamLimits

0x157b,	// (0x0000364c) list_double_graphic_pane_vc_g1

0x3c33,	// (0x00005d04) list_double_graphic_pane_vc_g2_ParamLimits

0x3c33,	// (0x00005d04) list_double_graphic_pane_vc_g2

0x3c42,	// (0x00005d13) list_double_graphic_pane_vc_g3_ParamLimits

0x3c42,	// (0x00005d13) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x00011b46) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x00011b46) list_double_graphic_pane_vc_g

0x3c4e,	// (0x00005d1f) list_double_graphic_pane_vc_t1_ParamLimits

0x3c4e,	// (0x00005d1f) list_double_graphic_pane_vc_t1

0x3c62,	// (0x00005d33) list_double_graphic_pane_vc_t2_ParamLimits

0x3c62,	// (0x00005d33) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00011b4d) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00011b4d) list_double_graphic_pane_vc_t

0xe1ea,	// (0x000102bb) aid_size_cell_fastswap

0x9a83,	// (0x0000bb54) aid_size_cell_touch_ParamLimits

0x9a83,	// (0x0000bb54) aid_size_cell_touch

0xe371,	// (0x00010442) popup_fast_swap_wide_window_ParamLimits

0xe371,	// (0x00010442) popup_fast_swap_wide_window

0x9c41,	// (0x0000bd12) touch_pane_ParamLimits

0x9c41,	// (0x0000bd12) touch_pane

0xeada,	// (0x00010bab) button_value_adjust_pane_cp2

0xeae2,	// (0x00010bb3) button_value_adjust_pane_cp4

0xeaea,	// (0x00010bbb) form_field_data_pane_cp2

0xa46d,	// (0x0000c53e) form_field_data_wide_pane_cp2

0xf0fe,	// (0x000111cf) bg_scroll_pane_ParamLimits

0xf11d,	// (0x000111ee) scroll_handle_pane_ParamLimits

0xf131,	// (0x00011202) scroll_sc2_down_pane_ParamLimits

0xf131,	// (0x00011202) scroll_sc2_down_pane

0xf158,	// (0x00011229) scroll_sc2_up_pane_ParamLimits

0xf158,	// (0x00011229) scroll_sc2_up_pane

0xc091,	// (0x0000e162) grid_wheel_folder_pane_g1_ParamLimits

0xc091,	// (0x0000e162) grid_wheel_folder_pane_g1

0x01c6,	// (0x00002297) clock_nsta_pane_cp2_ParamLimits

0x01c6,	// (0x00002297) clock_nsta_pane_cp2

0x0af4,	// (0x00002bc5) listscroll_midp_pane_ParamLimits

0xa9aa,	// (0x0000ca7b) midp_canvas_pane

0x0a60,	// (0x00002b31) nsta_clock_indic_pane

0x0abe,	// (0x00002b8f) listscroll_form_pane_vc

0x0ae2,	// (0x00002bb3) listscroll_set_pane_vc_ParamLimits

0x0ae2,	// (0x00002bb3) listscroll_set_pane_vc

0xb448,	// (0x0000d519) clock_nsta_pane

0xb472,	// (0x0000d543) indicator_nsta_pane

0x15db,	// (0x000036ac) bg_popup_sub_pane_cp2_ParamLimits

0x15ef,	// (0x000036c0) find_pane_cp2_ParamLimits

0x15ef,	// (0x000036c0) find_pane_cp2

0x1605,	// (0x000036d6) grid_toobar_pane_ParamLimits

0x183f,	// (0x00003910) list_form_gen_pane_vc_ParamLimits

0x183f,	// (0x00003910) list_form_gen_pane_vc

0x1855,	// (0x00003926) scroll_pane_cp8_vc_ParamLimits

0x1855,	// (0x00003926) scroll_pane_cp8_vc

0x1974,	// (0x00003a45) data_form_wide_pane_vc_ParamLimits

0x1974,	// (0x00003a45) data_form_wide_pane_vc

0x1980,	// (0x00003a51) form_field_data_wide_pane_vc_g1

0x1988,	// (0x00003a59) form_field_data_wide_pane_vc_t1_ParamLimits

0x1988,	// (0x00003a59) form_field_data_wide_pane_vc_t1

0xeb45,	// (0x00010c16) input_focus_pane_cp6_vc_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_cp6_vc

0xb881,	// (0x0000d952) list_midp_pane_ParamLimits

0x3334,	// (0x00005405) scroll_pane_cp16_ParamLimits

0x3334,	// (0x00005405) scroll_pane_cp16

0x1d13,	// (0x00003de4) button_value_adjust_pane_ParamLimits

0x1d13,	// (0x00003de4) button_value_adjust_pane

0xbca4,	// (0x0000dd75) button_value_adjust_pane_cp6_ParamLimits

0xbca4,	// (0x0000dd75) button_value_adjust_pane_cp6

0xbde6,	// (0x0000deb7) settings_code_pane_cp_ParamLimits

0xbde6,	// (0x0000deb7) settings_code_pane_cp

0xe1c8,	// (0x00010299) cell_touch_pane_g1

0xe1c8,	// (0x00010299) cell_touch_pane_g2

0x0001,

0xf704,	// (0x000117d5) cell_touch_pane_g

0xbf66,	// (0x0000e037) cell_touch_pane_cp_ParamLimits

0xbf66,	// (0x0000e037) cell_touch_pane_cp

0xbf82,	// (0x0000e053) cell_touch_pane_ParamLimits

0xbf82,	// (0x0000e053) cell_touch_pane

0xe1c8,	// (0x00010299) scroll_sc2_down_pane_g1

0xe1c8,	// (0x00010299) scroll_sc2_up_pane_g1

0xe341,	// (0x00010412) bg_set_opt_pane_cp4_vc

0x37e7,	// (0x000058b8) list_set_graphic_pane_vc_g1_ParamLimits

0x37e7,	// (0x000058b8) list_set_graphic_pane_vc_g1

0xec2e,	// (0x00010cff) list_set_graphic_pane_vc_g2_ParamLimits

0xec2e,	// (0x00010cff) list_set_graphic_pane_vc_g2

0x0001,

0xf9f4,	// (0x00011ac5) list_set_graphic_pane_vc_g_ParamLimits

0xf9f4,	// (0x00011ac5) list_set_graphic_pane_vc_g

0x37f3,	// (0x000058c4) text_primary_small_cp13_vc_ParamLimits

0x37f3,	// (0x000058c4) text_primary_small_cp13_vc

0x380b,	// (0x000058dc) list_set_graphic_pane_vc_ParamLimits

0x380b,	// (0x000058dc) list_set_graphic_pane_vc

0xe341,	// (0x00010412) input_focus_pane_cp2_vc

0xe1c8,	// (0x00010299) setting_code_pane_vc_g1

0xe4a7,	// (0x00010578) setting_code_pane_vc_t1

0x3820,	// (0x000058f1) set_text_pane_vc_t1_ParamLimits

0x3820,	// (0x000058f1) set_text_pane_vc_t1

0xe341,	// (0x00010412) input_focus_pane_cp1_vc

0x383e,	// (0x0000590f) list_set_text_pane_vc

0xe1c8,	// (0x00010299) setting_text_pane_vc_g1

0xe341,	// (0x00010412) bg_set_opt_pane_cp2_vc

0xe476,	// (0x00010547) setting_slider_graphic_pane_vc_g1

0x3848,	// (0x00005919) setting_slider_graphic_pane_vc_t1

0x385a,	// (0x0000592b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f9,	// (0x00011aca) setting_slider_graphic_pane_vc_t

0x386c,	// (0x0000593d) slider_set_pane_cp_vc

0x3876,	// (0x00005947) slider_set_pane_vc_g1

0x387f,	// (0x00005950) slider_set_pane_vc_g2

0x0006,

0xf9fe,	// (0x00011acf) slider_set_pane_vc_g

0xec0e,	// (0x00010cdf) set_opt_bg_pane_g1_copy1

0xec16,	// (0x00010ce7) set_opt_bg_pane_g2_copy1

0x38ab,	// (0x0000597c) set_opt_bg_pane_g3_copy1

0xec26,	// (0x00010cf7) set_opt_bg_pane_g4_copy1

0xec52,	// (0x00010d23) set_opt_bg_pane_g5_copy1

0xec5a,	// (0x00010d2b) set_opt_bg_pane_g6_copy1

0x38b5,	// (0x00005986) set_opt_bg_pane_g7_copy1

0x38bf,	// (0x00005990) set_opt_bg_pane_g8_copy1

0x38c9,	// (0x0000599a) set_opt_bg_pane_g9_copy1

0xe341,	// (0x00010412) bg_set_opt_pane_cp_vc

0x38d3,	// (0x000059a4) setting_slider_pane_vc_t1

0x38e2,	// (0x000059b3) setting_slider_pane_vc_t2

0x38f4,	// (0x000059c5) setting_slider_pane_vc_t3

0x0002,

0xfa0d,	// (0x00011ade) setting_slider_pane_vc_t

0x3906,	// (0x000059d7) slider_set_pane_vc

0x2558,	// (0x00004629) volume_set_pane_vc_g1

0x2561,	// (0x00004632) volume_set_pane_vc_g2

0x256a,	// (0x0000463b) volume_set_pane_vc_g3

0x2573,	// (0x00004644) volume_set_pane_vc_g4

0x257c,	// (0x0000464d) volume_set_pane_vc_g5

0x2585,	// (0x00004656) volume_set_pane_vc_g6

0x258e,	// (0x0000465f) volume_set_pane_vc_g7

0x2597,	// (0x00004668) volume_set_pane_vc_g8

0x25a0,	// (0x00004671) volume_set_pane_vc_g9

0x25a9,	// (0x0000467a) volume_set_pane_vc_g10

0x0009,

0xfa14,	// (0x00011ae5) volume_set_pane_vc_g

0x3910,	// (0x000059e1) volume_set_pane_vc

0x391a,	// (0x000059eb) button_value_adjust_pane_cp1_vc

0x3924,	// (0x000059f5) list_highlight_pane_cp2_vc

0x392d,	// (0x000059fe) list_set_pane_vc_ParamLimits

0x392d,	// (0x000059fe) list_set_pane_vc

0x399d,	// (0x00005a6e) main_pane_set_vc_t1_ParamLimits

0x399d,	// (0x00005a6e) main_pane_set_vc_t1

0x39b2,	// (0x00005a83) main_pane_set_vc_t2_ParamLimits

0x39b2,	// (0x00005a83) main_pane_set_vc_t2

0x39c4,	// (0x00005a95) main_pane_set_vc_t3_ParamLimits

0x39c4,	// (0x00005a95) main_pane_set_vc_t3

0x39d8,	// (0x00005aa9) main_pane_set_vc_t4_ParamLimits

0x39d8,	// (0x00005aa9) main_pane_set_vc_t4

0x0003,

0xfa29,	// (0x00011afa) main_pane_set_vc_t_ParamLimits

0xfa29,	// (0x00011afa) main_pane_set_vc_t

0x39ec,	// (0x00005abd) setting_code_pane_vc_ParamLimits

0x39ec,	// (0x00005abd) setting_code_pane_vc

0x39fd,	// (0x00005ace) setting_slider_graphic_pane_vc

0x39fd,	// (0x00005ace) setting_slider_pane_vc

0x39fd,	// (0x00005ace) setting_text_pane_vc

0x39fd,	// (0x00005ace) setting_volume_pane_vc

0x3a07,	// (0x00005ad8) scroll_pane_cp121_vc

0xeac8,	// (0x00010b99) set_content_pane_vc

0x3c78,	// (0x00005d49) button_value_adjust_pane_g1

0x3c81,	// (0x00005d52) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x00011b52) button_value_adjust_pane_g

0x3c8a,	// (0x00005d5b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3c8a,	// (0x00005d5b) form_field_slider_wide_pane_vc_t1

0x3c9c,	// (0x00005d6d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c9c,	// (0x00005d6d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x00011b57) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x00011b57) form_field_slider_wide_pane_vc_t

0xe3ef,	// (0x000104c0) input_focus_pane_cp10_vc_ParamLimits

0xe3ef,	// (0x000104c0) input_focus_pane_cp10_vc

0x3cc8,	// (0x00005d99) slider_cont_pane_cp1_vc_ParamLimits

0x3cc8,	// (0x00005d99) slider_cont_pane_cp1_vc

0x3cda,	// (0x00005dab) slider_form_pane_g1_cp2

0x387f,	// (0x00005950) slider_form_pane_g2_cp2

0x3d07,	// (0x00005dd8) form_field_slider_pane_vc_t3

0x3d15,	// (0x00005de6) form_field_slider_pane_vc_t4

0x3d23,	// (0x00005df4) slider_form_pane_vc_ParamLimits

0x3d23,	// (0x00005df4) slider_form_pane_vc

0x3d30,	// (0x00005e01) form_field_slider_pane_vc_t1_ParamLimits

0x3d30,	// (0x00005e01) form_field_slider_pane_vc_t1

0x3c9c,	// (0x00005d6d) form_field_slider_pane_vc_t2_ParamLimits

0x3c9c,	// (0x00005d6d) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00011b69) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00011b69) form_field_slider_pane_vc_t

0xe3ef,	// (0x000104c0) input_focus_pane_cp9_vc_ParamLimits

0xe3ef,	// (0x000104c0) input_focus_pane_cp9_vc

0x3d46,	// (0x00005e17) slider_cont_pane_vc_ParamLimits

0x3d46,	// (0x00005e17) slider_cont_pane_vc

0x3d5a,	// (0x00005e2b) list_form_graphic_pane_cp_vc_ParamLimits

0x3d5a,	// (0x00005e2b) list_form_graphic_pane_cp_vc

0x1980,	// (0x00003a51) form_field_popup_wide_pane_vc_g1

0x3d6f,	// (0x00005e40) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3d6f,	// (0x00005e40) form_field_popup_wide_pane_vc_t1

0xeb45,	// (0x00010c16) input_focus_pane_cp8_vc_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_cp8_vc

0x3db4,	// (0x00005e85) list_form_wide_pane_vc_ParamLimits

0x3db4,	// (0x00005e85) list_form_wide_pane_vc

0x3dc0,	// (0x00005e91) list_form_graphic_pane_vc_g1

0x3dc8,	// (0x00005e99) list_form_graphic_pane_vc_t1_ParamLimits

0x3dc8,	// (0x00005e99) list_form_graphic_pane_vc_t1

0xe407,	// (0x000104d8) list_highlight_pane_cp5_vc_ParamLimits

0xe407,	// (0x000104d8) list_highlight_pane_cp5_vc

0x3de4,	// (0x00005eb5) list_form_graphic_pane_vc_ParamLimits

0x3de4,	// (0x00005eb5) list_form_graphic_pane_vc

0x1980,	// (0x00003a51) form_field_popup_pane_vc_g1

0x3dfa,	// (0x00005ecb) form_field_popup_pane_vc_t1_ParamLimits

0x3dfa,	// (0x00005ecb) form_field_popup_pane_vc_t1

0xeb45,	// (0x00010c16) input_focus_pane_cp7_vc_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_cp7_vc

0x3e11,	// (0x00005ee2) list_form_pane_vc_ParamLimits

0x3e11,	// (0x00005ee2) list_form_pane_vc

0x3e1d,	// (0x00005eee) data_form_pane_vc_t1_ParamLimits

0x3e1d,	// (0x00005eee) data_form_pane_vc_t1

0xec0e,	// (0x00010cdf) input_focus_pane_vc_g1

0xec16,	// (0x00010ce7) input_focus_pane_vc_g2

0xec1e,	// (0x00010cef) input_focus_pane_vc_g3

0xec26,	// (0x00010cf7) input_focus_pane_vc_g4

0xec52,	// (0x00010d23) input_focus_pane_vc_g5

0xec5a,	// (0x00010d2b) input_focus_pane_vc_g6

0xec62,	// (0x00010d33) input_focus_pane_vc_g7

0xec6a,	// (0x00010d3b) input_focus_pane_vc_g8

0xec72,	// (0x00010d43) input_focus_pane_vc_g9

0xe1c8,	// (0x00010299) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001175e) input_focus_pane_vc_g

0x1974,	// (0x00003a45) data_form_pane_vc_ParamLimits

0x1974,	// (0x00003a45) data_form_pane_vc

0x1980,	// (0x00003a51) form_field_data_pane_vc_g1

0x3e3a,	// (0x00005f0b) form_field_data_pane_vc_t1_ParamLimits

0x3e3a,	// (0x00005f0b) form_field_data_pane_vc_t1

0xeb45,	// (0x00010c16) input_focus_pane_vc_ParamLimits

0xeb45,	// (0x00010c16) input_focus_pane_vc

0x3e54,	// (0x00005f25) button_value_adjust_pane_cp3_vc

0x3e5c,	// (0x00005f2d) button_value_adjust_pane_cp5_vc

0x3e64,	// (0x00005f35) form_field_data_pane_vc_ParamLimits

0x3e64,	// (0x00005f35) form_field_data_pane_vc

0x3e7f,	// (0x00005f50) form_field_data_pane_vc_cp2

0x3e87,	// (0x00005f58) form_field_data_wide_pane_vc_ParamLimits

0x3e87,	// (0x00005f58) form_field_data_wide_pane_vc

0x3ea1,	// (0x00005f72) form_field_data_wide_pane_vc_cp2

0x3ea9,	// (0x00005f7a) form_field_popup_pane_vc_ParamLimits

0x3ea9,	// (0x00005f7a) form_field_popup_pane_vc

0x3ec4,	// (0x00005f95) form_field_popup_wide_pane_vc_ParamLimits

0x3ec4,	// (0x00005f95) form_field_popup_wide_pane_vc

0x3ede,	// (0x00005faf) form_field_slider_pane_vc_ParamLimits

0x3ede,	// (0x00005faf) form_field_slider_pane_vc

0x3ef1,	// (0x00005fc2) form_field_slider_wide_pane_vc_ParamLimits

0x3ef1,	// (0x00005fc2) form_field_slider_wide_pane_vc

0xbfa0,	// (0x0000e071) grid_touch_1_pane_ParamLimits

0xbfa0,	// (0x0000e071) grid_touch_1_pane

0xbfb4,	// (0x0000e085) grid_touch_2_pane_ParamLimits

0xbfb4,	// (0x0000e085) grid_touch_2_pane

0x3fc8,	// (0x00006099) touch_pane_g1_ParamLimits

0x3fc8,	// (0x00006099) touch_pane_g1

0x3f2a,	// (0x00005ffb) cell_app_pane_cp_wide_ParamLimits

0x3f2a,	// (0x00005ffb) cell_app_pane_cp_wide

0x3f3b,	// (0x0000600c) grid_popup_fast_wide_pane_ParamLimits

0x3f3b,	// (0x0000600c) grid_popup_fast_wide_pane

0x3f4f,	// (0x00006020) scroll_pane_cp19_ParamLimits

0x3f4f,	// (0x00006020) scroll_pane_cp19

0xe341,	// (0x00010412) bg_popup_window_pane_cp20

0x3f63,	// (0x00006034) listscroll_popup_fast_wide_pane

0xeddb,	// (0x00010eac) grid_indicator_nsta_pane

0x3f6b,	// (0x0000603c) clock_nsta_pane_g1

0x3f74,	// (0x00006045) clock_nsta_pane_t1

0xbfe0,	// (0x0000e0b1) cell_indicator_nsta_pane_ParamLimits

0xbfe0,	// (0x0000e0b1) cell_indicator_nsta_pane

0x3fc8,	// (0x00006099) cell_indicator_nsta_pane_g1

0xbffd,	// (0x0000e0ce) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00011b7a) cell_indicator_nsta_pane_g

0x3fec,	// (0x000060bd) clock_nsta_pane_cp

0x3ff4,	// (0x000060c5) indicator_nsta_pane_cp

0x3ffd,	// (0x000060ce) nsta_clock_indic_pane_g1

0xe4e6,	// (0x000105b7) grid_indicator_pane

0xf24a,	// (0x0001131b) scroll_pane_cp29

0x00f0,	// (0x000021c1) indicator_nsta_pane_cp2_ParamLimits

0x00f0,	// (0x000021c1) indicator_nsta_pane_cp2

0xe407,	// (0x000104d8) main_apps_wheel_pane

0x1b96,	// (0x00003c67) form_midp_field_text_pane_ParamLimits

0x1ce5,	// (0x00003db6) scroll_bar_cp050_ParamLimits

0x4066,	// (0x00006137) cell_indicator_pane_ParamLimits

0x4066,	// (0x00006137) cell_indicator_pane

0x407e,	// (0x0000614f) cell_indicator_pane_g1

0xc013,	// (0x0000e0e4) grid_wheel_folder_pane_ParamLimits

0xc013,	// (0x0000e0e4) grid_wheel_folder_pane

0xc021,	// (0x0000e0f2) list_wheel_apps_pane_ParamLimits

0xc021,	// (0x0000e0f2) list_wheel_apps_pane

0xc02f,	// (0x0000e100) main_apps_wheel_pane_g1_ParamLimits

0xc02f,	// (0x0000e100) main_apps_wheel_pane_g1

0xc03f,	// (0x0000e110) main_apps_wheel_pane_g2_ParamLimits

0xc03f,	// (0x0000e110) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00011b96) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00011b96) main_apps_wheel_pane_g

0xc04f,	// (0x0000e120) main_apps_wheel_pane_t1_ParamLimits

0xc04f,	// (0x0000e120) main_apps_wheel_pane_t1

0xc067,	// (0x0000e138) list_wheel_apps_pane_g1

0xc06f,	// (0x0000e140) list_wheel_apps_pane_g2

0xc077,	// (0x0000e148) list_wheel_apps_pane_g3

0xc07f,	// (0x0000e150) list_wheel_apps_pane_g4

0xc087,	// (0x0000e158) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00011b9b) list_wheel_apps_pane_g

0x03f3,	// (0x000024c4) navi_icon_text_pane

0xb33a,	// (0x0000d40b) aid_fill_nsta

0xc0a4,	// (0x0000e175) navi_icon_text_pane_g1

0xc0b0,	// (0x0000e181) navi_icon_text_pane_t1

0xa90e,	// (0x0000c9df) list_set_graphic_pane_t1_ParamLimits

0xa90e,	// (0x0000c9df) list_set_graphic_pane_t1

0x2436,	// (0x00004507) popup_midp_note_alarm_window_t6_ParamLimits

0x2436,	// (0x00004507) popup_midp_note_alarm_window_t6

0x2448,	// (0x00004519) popup_midp_note_alarm_window_t7_ParamLimits

0x2448,	// (0x00004519) popup_midp_note_alarm_window_t7

0x245a,	// (0x0000452b) popup_midp_note_alarm_window_t8_ParamLimits

0x245a,	// (0x0000452b) popup_midp_note_alarm_window_t8

0x246c,	// (0x0000453d) popup_midp_note_alarm_window_t9_ParamLimits

0x246c,	// (0x0000453d) popup_midp_note_alarm_window_t9

0x247e,	// (0x0000454f) popup_midp_note_alarm_window_t10_ParamLimits

0x247e,	// (0x0000454f) popup_midp_note_alarm_window_t10

0x2490,	// (0x00004561) popup_midp_note_alarm_window_t11_ParamLimits

0x2490,	// (0x00004561) popup_midp_note_alarm_window_t11

0x24a2,	// (0x00004573) scroll_pane_cp17_ParamLimits

0x24a2,	// (0x00004573) scroll_pane_cp17

0x2558,	// (0x00004629) volume_small_pane_cp_g1

0x4171,	// (0x00006242) volume_small_pane_cp_g2

0x417a,	// (0x0000624b) volume_small_pane_cp_g3

0x4183,	// (0x00006254) volume_small_pane_cp_g4

0x418c,	// (0x0000625d) volume_small_pane_cp_g5

0x4195,	// (0x00006266) volume_small_pane_cp_g6

0x419e,	// (0x0000626f) volume_small_pane_cp_g7

0x41a7,	// (0x00006278) volume_small_pane_cp_g8

0x41b0,	// (0x00006281) volume_small_pane_cp_g9

0x41b9,	// (0x0000628a) volume_small_pane_cp_g10

0x0648,	// (0x00002719) midp_ticker_pane_g1_ParamLimits

0x0654,	// (0x00002725) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001182a) midp_ticker_pane_g_ParamLimits

0xaa41,	// (0x0000cb12) midp_ticker_pane_t1_ParamLimits

0xb35e,	// (0x0000d42f) aid_fill_nsta_2

0x1cd1,	// (0x00003da2) list_form2_midp_pane

0x30df,	// (0x000051b0) midp_editing_number_pane_ParamLimits

0x30ee,	// (0x000051bf) midp_ticker_pane_ParamLimits

0x41c2,	// (0x00006293) form2_midp_field_pane

0x41e6,	// (0x000062b7) scroll_pane_cp51

0x4206,	// (0x000062d7) form2_midp_button_pane_ParamLimits

0x4206,	// (0x000062d7) form2_midp_button_pane

0x4218,	// (0x000062e9) form2_midp_content_pane_ParamLimits

0x4218,	// (0x000062e9) form2_midp_content_pane

0x4232,	// (0x00006303) form2_midp_field_choice_group_pane

0x423a,	// (0x0000630b) form2_midp_field_pane_g1

0x4242,	// (0x00006313) form2_midp_field_pane_g2

0x424a,	// (0x0000631b) form2_midp_field_pane_g3

0x4252,	// (0x00006323) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00011bc0) form2_midp_field_pane_g

0x425a,	// (0x0000632b) form2_midp_gauge_slider_pane

0x4262,	// (0x00006333) form2_midp_gauge_wait_pane

0x426a,	// (0x0000633b) form2_midp_image_pane_ParamLimits

0x426a,	// (0x0000633b) form2_midp_image_pane

0x4285,	// (0x00006356) form2_midp_label_pane_ParamLimits

0x4285,	// (0x00006356) form2_midp_label_pane

0xc0de,	// (0x0000e1af) form2_midp_label_pane_cp_ParamLimits

0xc0de,	// (0x0000e1af) form2_midp_label_pane_cp

0x42c5,	// (0x00006396) form2_midp_string_pane_ParamLimits

0x42c5,	// (0x00006396) form2_midp_string_pane

0xc0ff,	// (0x0000e1d0) form2_midp_text_pane_ParamLimits

0xc0ff,	// (0x0000e1d0) form2_midp_text_pane

0x42f8,	// (0x000063c9) form2_midp_time_pane

0x4308,	// (0x000063d9) input_focus_pane_cp51_ParamLimits

0x4308,	// (0x000063d9) input_focus_pane_cp51

0x4320,	// (0x000063f1) form2_midp_label_pane_t1_ParamLimits

0x4320,	// (0x000063f1) form2_midp_label_pane_t1

0xc120,	// (0x0000e1f1) form2_mdip_text_pane_t1_ParamLimits

0xc120,	// (0x0000e1f1) form2_mdip_text_pane_t1

0x4388,	// (0x00006459) form2_midp_time_pane_t1

0x43a3,	// (0x00006474) form2_midp_gauge_slider_pane_t1

0xc13f,	// (0x0000e210) form2_midp_gauge_slider_pane_t2

0xc151,	// (0x0000e222) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00011bc9) form2_midp_gauge_slider_pane_t

0x43d9,	// (0x000064aa) form2_midp_slider_pane

0x43e5,	// (0x000064b6) form2_midp_gauge_wait_pane_t1

0x43f3,	// (0x000064c4) form2_midp_wait_pane_ParamLimits

0x43f3,	// (0x000064c4) form2_midp_wait_pane

0x19c7,	// (0x00003a98) list_single_2graphic_pane_cp4_ParamLimits

0x19c7,	// (0x00003a98) list_single_2graphic_pane_cp4

0x441e,	// (0x000064ef) list_single_midp_graphic_pane_cp_ParamLimits

0x441e,	// (0x000064ef) list_single_midp_graphic_pane_cp

0xe341,	// (0x00010412) list_highlight_pane_cp20

0x4442,	// (0x00006513) list_single_2graphic_pane_g1_cp4

0x366c,	// (0x0000573d) list_single_2graphic_pane_g2_cp4

0x444a,	// (0x0000651b) list_single_2graphic_pane_t1_cp4

0xe407,	// (0x000104d8) list_highlight_pane_cp21

0x4459,	// (0x0000652a) list_single_midp_graphic_pane_g4_cp

0x4468,	// (0x00006539) list_single_midp_graphic_pane_t1_cp

0xc163,	// (0x0000e234) form2_mdip_string_pane_t1_ParamLimits

0xc163,	// (0x0000e234) form2_mdip_string_pane_t1

0xe341,	// (0x00010412) bg_wml_button_pane_cp2

0xe1c8,	// (0x00010299) form2_midp_image_pane_g1

0xea72,	// (0x00010b43) list_double_large_graphic_pane_g5_ParamLimits

0xea72,	// (0x00010b43) list_double_large_graphic_pane_g5

0x0af4,	// (0x00002bc5) midp_form_pane_ParamLimits

0xe407,	// (0x000104d8) main_apps_wheel_pane_ParamLimits

0xb052,	// (0x0000d123) popup_preview_window_ParamLimits

0xb052,	// (0x0000d123) popup_preview_window

0x10c4,	// (0x00003195) popup_touch_info_window_ParamLimits

0x10c4,	// (0x00003195) popup_touch_info_window

0x10e6,	// (0x000031b7) popup_touch_menu_window_ParamLimits

0x10e6,	// (0x000031b7) popup_touch_menu_window

0xe1be,	// (0x0001028f) bg_popup_sub_pane_cp6

0x4522,	// (0x000065f3) list_touch_menu_pane

0x452a,	// (0x000065fb) list_single_touch_menu_pane_ParamLimits

0x452a,	// (0x000065fb) list_single_touch_menu_pane

0x4542,	// (0x00006613) list_single_touch_menu_pane_t1

0xe407,	// (0x000104d8) bg_popup_sub_pane_cp7_ParamLimits

0xe407,	// (0x000104d8) bg_popup_sub_pane_cp7

0x4550,	// (0x00006621) heading_sub_pane

0x4558,	// (0x00006629) list_touch_info_pane_ParamLimits

0x4558,	// (0x00006629) list_touch_info_pane

0x4567,	// (0x00006638) list_single_touch_info_pane_ParamLimits

0x4567,	// (0x00006638) list_single_touch_info_pane

0x4579,	// (0x0000664a) list_single_touch_info_pane_t1

0x4587,	// (0x00006658) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00011bd7) list_single_touch_info_pane_t

0x0577,	// (0x00002648) bg_popup_heading_pane_cp

0x4595,	// (0x00006666) heading_sub_pane_t1

0x1880,	// (0x00003951) bg_popup_preview_window_pane_cp_ParamLimits

0x1880,	// (0x00003951) bg_popup_preview_window_pane_cp

0x4550,	// (0x00006621) heading_preview_pane

0x4558,	// (0x00006629) list_preview_pane_ParamLimits

0x4558,	// (0x00006629) list_preview_pane

0x45a3,	// (0x00006674) popup_preview_window_g1

0x4567,	// (0x00006638) list_single_preview_pane_ParamLimits

0x4567,	// (0x00006638) list_single_preview_pane

0x45ab,	// (0x0000667c) list_single_preview_pane_g1

0x45b3,	// (0x00006684) list_single_preview_pane_t1

0x4579,	// (0x0000664a) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00011bdc) list_single_preview_pane_t

0x45c1,	// (0x00006692) bg_popup_heading_pane_cp2_ParamLimits

0x45c1,	// (0x00006692) bg_popup_heading_pane_cp2

0x45d7,	// (0x000066a8) heading_preview_pane_g1

0x45df,	// (0x000066b0) heading_preview_pane_t1_ParamLimits

0x45df,	// (0x000066b0) heading_preview_pane_t1

0xe4fd,	// (0x000105ce) soft_indicator_pane_t1_ParamLimits

0xea32,	// (0x00010b03) scroll_pane_ParamLimits

0xf146,	// (0x00011217) scroll_sc2_left_pane

0xf14f,	// (0x00011220) scroll_sc2_right_pane

0xf16e,	// (0x0001123f) scroll_bg_pane_g1_ParamLimits

0xf183,	// (0x00011254) scroll_bg_pane_g2_ParamLimits

0xf19b,	// (0x0001126c) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x000117b5) scroll_bg_pane_g_ParamLimits

0xf16e,	// (0x0001123f) scroll_handle_pane_g1_ParamLimits

0xf1bd,	// (0x0001128e) scroll_handle_pane_g2_ParamLimits

0xf19b,	// (0x0001126c) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x000117bc) scroll_handle_pane_g_ParamLimits

0x0b24,	// (0x00002bf5) popup_choice_list_window_ParamLimits

0x0b24,	// (0x00002bf5) popup_choice_list_window

0x15e7,	// (0x000036b8) choice_list_pane

0x16af,	// (0x00003780) cell_toolbar_pane_t1

0x16d7,	// (0x000037a8) toolbar_button_pane_ParamLimits

0x2ad8,	// (0x00004ba9) ai_gene_pane_1_t2_ParamLimits

0x2ad8,	// (0x00004ba9) ai_gene_pane_1_t2

0x0001,

0xf907,	// (0x000119d8) ai_gene_pane_1_t_ParamLimits

0xf907,	// (0x000119d8) ai_gene_pane_1_t

0x45fc,	// (0x000066cd) scroll_sc2_left_pane_g1

0x45fc,	// (0x000066cd) scroll_sc2_right_pane_g1

0x0af4,	// (0x00002bc5) bg_popup_sub_pane_cp10

0x4606,	// (0x000066d7) list_choice_list_pane

0x461f,	// (0x000066f0) list_single_choice_list_pane_ParamLimits

0x461f,	// (0x000066f0) list_single_choice_list_pane

0x4637,	// (0x00006708) list_single_choice_list_pane_g1

0xed57,	// (0x00010e28) list_single_choice_list_pane_t1_ParamLimits

0xed57,	// (0x00010e28) list_single_choice_list_pane_t1

0x463f,	// (0x00006710) choice_list_pane_g1

0x4647,	// (0x00006718) choice_list_pane_t1

0xe1be,	// (0x0001028f) input_focus_pane_cp11

0xef33,	// (0x00011004) title_pane_stacon_g2_ParamLimits

0xef33,	// (0x00011004) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001179b) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001179b) title_pane_stacon_g

0x0577,	// (0x00002648) cursor_press_pane

0xaccf,	// (0x0000cda0) popup_fep_hwr_window_ParamLimits

0xaccf,	// (0x0000cda0) popup_fep_hwr_window

0x0c68,	// (0x00002d39) popup_fep_vkb_window_ParamLimits

0x0c68,	// (0x00002d39) popup_fep_vkb_window

0x4655,	// (0x00006726) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00011c05) fep_vkb_side_pane_g_ParamLimits

0x4696,	// (0x00006767) fep_hwr_candidate_pane_ParamLimits

0x4696,	// (0x00006767) fep_hwr_candidate_pane

0x46c0,	// (0x00006791) fep_hwr_side_pane_ParamLimits

0x46c0,	// (0x00006791) fep_hwr_side_pane

0x46e2,	// (0x000067b3) fep_hwr_top_pane_ParamLimits

0x46e2,	// (0x000067b3) fep_hwr_top_pane

0x46fa,	// (0x000067cb) fep_hwr_write_pane_ParamLimits

0x46fa,	// (0x000067cb) fep_hwr_write_pane

0xfb34,	// (0x00011c05) fep_vkb_side_pane_g

0x4734,	// (0x00006805) fep_hwr_top_pane_g1

0x4746,	// (0x00006817) fep_hwr_top_pane_g2

0x4758,	// (0x00006829) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00011be1) fep_hwr_top_pane_g

0x476d,	// (0x0000683e) fep_hwr_top_text_pane

0xf2b7,	// (0x00011388) fep_hwr_top_text_pane_g1

0x4849,	// (0x0000691a) fep_hwr_top_text_pane_t1

0x48a9,	// (0x0000697a) fep_hwr_candidate_pane_g1

0x4b1a,	// (0x00006beb) fep_vkb_keypad_pane_g3_ParamLimits

0x4b1a,	// (0x00006beb) fep_vkb_keypad_pane_g3

0x4b46,	// (0x00006c17) fep_vkb_keypad_pane_g4_ParamLimits

0x4b46,	// (0x00006c17) fep_vkb_keypad_pane_g4

0x4bbd,	// (0x00006c8e) fep_vkb_bottom_pane_g2_ParamLimits

0x4bbd,	// (0x00006c8e) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00011c0c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00011c0c) fep_vkb_bottom_pane_g

0x45fc,	// (0x000066cd) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00011c16) cell_vkb_side_pane_g

0x4c48,	// (0x00006d19) cell_vkb_side_pane_t1

0x4c56,	// (0x00006d27) cell_vkb_side_pane_t1_copy1

0x45fc,	// (0x000066cd) bg_fep_vkb_candidate_pane_g2

0x4d9a,	// (0x00006e6b) cell_vkb_candidate_pane_ParamLimits

0x48dd,	// (0x000069ae) aid_size_cell_vkb_ParamLimits

0x48dd,	// (0x000069ae) aid_size_cell_vkb

0x4d9a,	// (0x00006e6b) cell_vkb_candidate_pane

0x4dd4,	// (0x00006ea5) bg_popup_fep_shadow_pane_g1

0xc258,	// (0x0000e329) fep_vkb_bottom_pane_ParamLimits

0xc258,	// (0x0000e329) fep_vkb_bottom_pane

0x49ac,	// (0x00006a7d) fep_vkb_candidate_pane_ParamLimits

0x49ac,	// (0x00006a7d) fep_vkb_candidate_pane

0xc284,	// (0x0000e355) fep_vkb_keypad_pane_ParamLimits

0xc284,	// (0x0000e355) fep_vkb_keypad_pane

0xc2ab,	// (0x0000e37c) fep_vkb_side_pane_ParamLimits

0xc2ab,	// (0x0000e37c) fep_vkb_side_pane

0xc2e7,	// (0x0000e3b8) fep_vkb_top_pane_ParamLimits

0xc2e7,	// (0x0000e3b8) fep_vkb_top_pane

0x4a73,	// (0x00006b44) fep_vkb_top_pane_g1_ParamLimits

0x4a73,	// (0x00006b44) fep_vkb_top_pane_g1

0x4a82,	// (0x00006b53) fep_vkb_top_pane_g2_ParamLimits

0x4a82,	// (0x00006b53) fep_vkb_top_pane_g2

0x4a91,	// (0x00006b62) fep_vkb_top_pane_g3_ParamLimits

0x4a91,	// (0x00006b62) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00011bfc) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00011bfc) fep_vkb_top_pane_g

0x4aaf,	// (0x00006b80) fep_vkb_top_text_pane_ParamLimits

0x4aaf,	// (0x00006b80) fep_vkb_top_text_pane

0xc323,	// (0x0000e3f4) fep_vkb_side_pane_g1_ParamLimits

0xc323,	// (0x0000e3f4) fep_vkb_side_pane_g1

0x4b09,	// (0x00006bda) grid_vkb_side_pane_ParamLimits

0x4b09,	// (0x00006bda) grid_vkb_side_pane

0x4ddc,	// (0x00006ead) bg_popup_fep_shadow_pane_g2

0x4de5,	// (0x00006eb6) bg_popup_fep_shadow_pane_g3

0x4ded,	// (0x00006ebe) bg_popup_fep_shadow_pane_g4

0x4df6,	// (0x00006ec7) bg_popup_fep_shadow_pane_g5

0x4e00,	// (0x00006ed1) bg_popup_fep_shadow_pane_g6

0x4e08,	// (0x00006ed9) bg_popup_fep_shadow_pane_g7

0xec52,	// (0x00010d23) bg_popup_fep_shadow_pane_g8

0x4b68,	// (0x00006c39) grid_vkb_keypad_number_pane_ParamLimits

0x4b68,	// (0x00006c39) grid_vkb_keypad_number_pane

0x4b7c,	// (0x00006c4d) grid_vkb_keypad_pane_ParamLimits

0x4b7c,	// (0x00006c4d) grid_vkb_keypad_pane

0x4ba2,	// (0x00006c73) fep_vkb_bottom_pane_g1_ParamLimits

0x4ba2,	// (0x00006c73) fep_vkb_bottom_pane_g1

0x4bcb,	// (0x00006c9c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4bcb,	// (0x00006c9c) grid_vkb_keypad_bottom_left_pane

0x4be0,	// (0x00006cb1) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4be0,	// (0x00006cb1) grid_vkb_keypad_bottom_right_pane

0x4bf5,	// (0x00006cc6) fep_vkb_top_text_pane_g1

0xc36a,	// (0x0000e43b) fep_vkb_top_text_pane_t1

0xc37c,	// (0x0000e44d) cell_vkb_side_pane_ParamLimits

0xc37c,	// (0x0000e44d) cell_vkb_side_pane

0x45fc,	// (0x000066cd) cell_vkb_side_pane_g1

0x4c64,	// (0x00006d35) cell_vkb_keypad_pane_ParamLimits

0x4c64,	// (0x00006d35) cell_vkb_keypad_pane

0x4cf1,	// (0x00006dc2) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00011c29) bg_popup_fep_shadow_pane_g

0x45fc,	// (0x000066cd) cell_hwr_side_pane_g1

0x45fc,	// (0x000066cd) cell_hwr_side_pane_g2

0x4cfb,	// (0x00006dcc) cell_vkb_keypad_pane_t1

0xc392,	// (0x0000e463) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc392,	// (0x0000e463) cell_vkb_keypad_bottom_left_pane

0xc3a7,	// (0x0000e478) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3a7,	// (0x0000e478) cell_vkb_keypad_bottom_right_pane

0x45fc,	// (0x000066cd) cell_vkb_keypad_bottom_left_pane_g1

0x45fc,	// (0x000066cd) cell_vkb_keypad_bottom_right_pane_g1

0x4d5f,	// (0x00006e30) cell_vkb_keypad_number_pane_ParamLimits

0x4d5f,	// (0x00006e30) cell_vkb_keypad_number_pane

0x4d7e,	// (0x00006e4f) cell_vkb_keypad_number_pane_g1

0x4d88,	// (0x00006e59) cell_vkb_keypad_number_pane_g2

0x4d91,	// (0x00006e62) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00011c1b) cell_vkb_keypad_number_pane_g

0x4cfb,	// (0x00006dcc) cell_vkb_keypad_number_pane_t1

0x4dbb,	// (0x00006e8c) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00011c16) cell_hwr_side_pane_g

0x4e1a,	// (0x00006eeb) cell_hwr_side_pane_t1

0x4e28,	// (0x00006ef9) cell_hwr_side_pane_t1_copy1

0x4aa1,	// (0x00006b72) cell_hwr_candidate_pane_g1

0x4e78,	// (0x00006f49) cell_hwr_candidate_pane_t1

0x45fc,	// (0x000066cd) cell_vkb_candidate_pane_g2

0x4ecc,	// (0x00006f9d) cell_vkb_candidate_pane_t1

0x465d,	// (0x0000672e) bg_popup_fep_shadow_pane_ParamLimits

0x465d,	// (0x0000672e) bg_popup_fep_shadow_pane

0x4714,	// (0x000067e5) bg_fep_hwr_top_pane_g4

0x4782,	// (0x00006853) bg_hwr_side_pane_g1_ParamLimits

0x4782,	// (0x00006853) bg_hwr_side_pane_g1

0xc211,	// (0x0000e2e2) cell_hwr_side_pane_ParamLimits

0xc211,	// (0x0000e2e2) cell_hwr_side_pane

0x47f4,	// (0x000068c5) fep_hwr_write_pane_g1_ParamLimits

0x47f4,	// (0x000068c5) fep_hwr_write_pane_g1

0x4801,	// (0x000068d2) fep_hwr_write_pane_g2_ParamLimits

0x4801,	// (0x000068d2) fep_hwr_write_pane_g2

0x480e,	// (0x000068df) fep_hwr_write_pane_g3_ParamLimits

0x480e,	// (0x000068df) fep_hwr_write_pane_g3

0xc231,	// (0x0000e302) fep_hwr_write_pane_g4_ParamLimits

0xc231,	// (0x0000e302) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00011be8) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00011be8) fep_hwr_write_pane_g

0x4714,	// (0x000067e5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4714,	// (0x000067e5) bg_fep_hwr_candidate_pane_g2

0x4857,	// (0x00006928) cell_hwr_candidate_pane_ParamLimits

0x4857,	// (0x00006928) cell_hwr_candidate_pane

0x48a9,	// (0x0000697a) fep_hwr_candidate_pane_g1_ParamLimits

0x490b,	// (0x000069dc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x490b,	// (0x000069dc) bg_popup_fep_shadow_pane_cp2

0x4aa1,	// (0x00006b72) fep_vkb_top_pane_g4_ParamLimits

0x4aa1,	// (0x00006b72) fep_vkb_top_pane_g4

0x4ae7,	// (0x00006bb8) fep_vkb_side_pane_g2_ParamLimits

0x4ae7,	// (0x00006bb8) fep_vkb_side_pane_g2

0xa391,	// (0x0000c462) list_setting_pane_t4_ParamLimits

0xa391,	// (0x0000c462) list_setting_pane_t4

0xa40d,	// (0x0000c4de) list_setting_number_pane_t5_ParamLimits

0xa40d,	// (0x0000c4de) list_setting_number_pane_t5

0xa778,	// (0x0000c849) list_double_heading_pane_cp2_ParamLimits

0xa778,	// (0x0000c849) list_double_heading_pane_cp2

0x4eda,	// (0x00006fab) list_double_heading_pane_g1_cp2_ParamLimits

0x4eda,	// (0x00006fab) list_double_heading_pane_g1_cp2

0x4ee6,	// (0x00006fb7) list_double_heading_pane_g2_cp2_ParamLimits

0x4ee6,	// (0x00006fb7) list_double_heading_pane_g2_cp2

0x4efa,	// (0x00006fcb) list_double_heading_pane_t1_cp2_ParamLimits

0x4efa,	// (0x00006fcb) list_double_heading_pane_t1_cp2

0x4f10,	// (0x00006fe1) list_double_heading_pane_t2_cp2_ParamLimits

0x4f10,	// (0x00006fe1) list_double_heading_pane_t2_cp2

0xe1b6,	// (0x00010287) aid_value_unit2

0xe395,	// (0x00010466) popup_preview_fixed_window

0xe5dd,	// (0x000106ae) bg_popup_preview_window_pane_cp02

0x4f22,	// (0x00006ff3) list_preview_fixed_pane

0x4f68,	// (0x00007039) list_empty_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_empty_pane_fp

0x4f68,	// (0x00007039) list_single_cale_day_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_cale_day_pane_fp

0x4f68,	// (0x00007039) list_single_graphic_heading_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_graphic_heading_pane_fp

0x4f68,	// (0x00007039) list_single_graphic_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_graphic_pane_fp

0x4f68,	// (0x00007039) list_single_heading_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_heading_pane_fp

0x4f68,	// (0x00007039) list_single_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_pane_fp

0x4f81,	// (0x00007052) list_single_pane_fp_g1_ParamLimits

0x4f81,	// (0x00007052) list_single_pane_fp_g1

0x4eda,	// (0x00006fab) list_single_pane_fp_g2_ParamLimits

0x4eda,	// (0x00006fab) list_single_pane_fp_g2

0x4ee6,	// (0x00006fb7) list_single_pane_fp_g3_ParamLimits

0x4ee6,	// (0x00006fb7) list_single_pane_fp_g3

0x4f8d,	// (0x0000705e) list_single_pane_fp_g4_ParamLimits

0x4f8d,	// (0x0000705e) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00011c4a) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00011c4a) list_single_pane_fp_g

0x4f99,	// (0x0000706a) list_single_pane_fp_t1_ParamLimits

0x4f99,	// (0x0000706a) list_single_pane_fp_t1

0x4fb0,	// (0x00007081) list_single_graphic_pane_fp_g1_ParamLimits

0x4fb0,	// (0x00007081) list_single_graphic_pane_fp_g1

0x4f81,	// (0x00007052) list_single_graphic_pane_fp_g2_ParamLimits

0x4f81,	// (0x00007052) list_single_graphic_pane_fp_g2

0x4eda,	// (0x00006fab) list_single_graphic_pane_fp_g3_ParamLimits

0x4eda,	// (0x00006fab) list_single_graphic_pane_fp_g3

0x4ee6,	// (0x00006fb7) list_single_graphic_pane_fp_g4_ParamLimits

0x4ee6,	// (0x00006fb7) list_single_graphic_pane_fp_g4

0x4f8d,	// (0x0000705e) list_single_graphic_pane_fp_g5_ParamLimits

0x4f8d,	// (0x0000705e) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x00011c53) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x00011c53) list_single_graphic_pane_fp_g

0x4fbc,	// (0x0000708d) list_single_graphic_pane_fp_t1_ParamLimits

0x4fbc,	// (0x0000708d) list_single_graphic_pane_fp_t1

0x4fb0,	// (0x00007081) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4fb0,	// (0x00007081) list_single_graphic_heading_pane_fp_g1

0x4f81,	// (0x00007052) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4f81,	// (0x00007052) list_single_graphic_heading_pane_fp_g2

0x4eda,	// (0x00006fab) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4eda,	// (0x00006fab) list_single_graphic_heading_pane_fp_g3

0x4ee6,	// (0x00006fb7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ee6,	// (0x00006fb7) list_single_graphic_heading_pane_fp_g4

0x4f8d,	// (0x0000705e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4f8d,	// (0x0000705e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00011c53) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00011c53) list_single_graphic_heading_pane_fp_g

0x4fd2,	// (0x000070a3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4fd2,	// (0x000070a3) list_single_graphic_heading_pane_fp_t1

0x4fe8,	// (0x000070b9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4fe8,	// (0x000070b9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00011c5e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00011c5e) list_single_graphic_heading_pane_fp_t

0x4ffa,	// (0x000070cb) list_single_cale_day_pane_fp_g1_ParamLimits

0x4ffa,	// (0x000070cb) list_single_cale_day_pane_fp_g1

0x5032,	// (0x00007103) list_single_cale_day_pane_fp_g2_ParamLimits

0x5032,	// (0x00007103) list_single_cale_day_pane_fp_g2

0x503e,	// (0x0000710f) list_single_cale_day_pane_fp_g3_ParamLimits

0x503e,	// (0x0000710f) list_single_cale_day_pane_fp_g3

0x5066,	// (0x00007137) list_single_cale_day_pane_fp_g4_ParamLimits

0x5066,	// (0x00007137) list_single_cale_day_pane_fp_g4

0x508a,	// (0x0000715b) list_single_cale_day_pane_fp_g5_ParamLimits

0x508a,	// (0x0000715b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x00011c63) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x00011c63) list_single_cale_day_pane_fp_g

0x50ae,	// (0x0000717f) list_single_cale_day_pane_fp_t1_ParamLimits

0x50ae,	// (0x0000717f) list_single_cale_day_pane_fp_t1

0x50d4,	// (0x000071a5) list_single_cale_day_pane_fp_t2_ParamLimits

0x50d4,	// (0x000071a5) list_single_cale_day_pane_fp_t2

0x50ed,	// (0x000071be) list_single_cale_day_pane_fp_t3_ParamLimits

0x50ed,	// (0x000071be) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00011c6e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00011c6e) list_single_cale_day_pane_fp_t

0x4f81,	// (0x00007052) list_empty_pane_fp_g1_ParamLimits

0x4f81,	// (0x00007052) list_empty_pane_fp_g1

0x5106,	// (0x000071d7) list_empty_pane_fp_t1

0x5114,	// (0x000071e5) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x00011c75) list_empty_pane_fp_t

0x4f81,	// (0x00007052) list_single_heading_pane_fp_g1_ParamLimits

0x4f81,	// (0x00007052) list_single_heading_pane_fp_g1

0x4eda,	// (0x00006fab) list_single_heading_pane_fp_g2_ParamLimits

0x4eda,	// (0x00006fab) list_single_heading_pane_fp_g2

0x4ee6,	// (0x00006fb7) list_single_heading_pane_fp_g3_ParamLimits

0x4ee6,	// (0x00006fb7) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00011c7a) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00011c7a) list_single_heading_pane_fp_g

0x5122,	// (0x000071f3) list_single_heading_pane_fp_t1_ParamLimits

0x5122,	// (0x000071f3) list_single_heading_pane_fp_t1

0x5134,	// (0x00007205) list_single_heading_pane_fp_t2_ParamLimits

0x5134,	// (0x00007205) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00011c81) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00011c81) list_single_heading_pane_fp_t

0xed6c,	// (0x00010e3d) aid_size_cell_fast

0xe5c0,	// (0x00010691) soft_indicator_pane_cp1_t1

0xeda9,	// (0x00010e7a) cell_app_pane_cp2_ParamLimits

0xeda9,	// (0x00010e7a) cell_app_pane_cp2

0x467f,	// (0x00006750) fep_hwr_candidate_drop_down_list_pane

0x48c3,	// (0x00006994) fep_hwr_candidate_pane_g3_ParamLimits

0x48c3,	// (0x00006994) fep_hwr_candidate_pane_g3

0x48d0,	// (0x000069a1) fep_hwr_candidate_pane_g4_ParamLimits

0x48d0,	// (0x000069a1) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00011bf5) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00011bf5) fep_hwr_candidate_pane_g

0x499b,	// (0x00006a6c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x499b,	// (0x00006a6c) fep_vkb_candidate_drop_down_list_pane

0x4dc3,	// (0x00006e94) fep_vkb_candidate_pane_g3

0x4dcb,	// (0x00006e9c) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00011c22) fep_vkb_candidate_pane_g

0x4aa1,	// (0x00006b72) cell_hwr_candidate_pane_g1_ParamLimits

0x4e36,	// (0x00006f07) cell_hwr_candidate_pane_g3_ParamLimits

0x4e36,	// (0x00006f07) cell_hwr_candidate_pane_g3

0x4e57,	// (0x00006f28) cell_hwr_candidate_pane_g4_ParamLimits

0x4e57,	// (0x00006f28) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00011c3c) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00011c3c) cell_hwr_candidate_pane_g

0x4e96,	// (0x00006f67) cell_vkb_candidate_pane_g3_ParamLimits

0x4e96,	// (0x00006f67) cell_vkb_candidate_pane_g3

0x4eb1,	// (0x00006f82) cell_vkb_candidate_pane_g4_ParamLimits

0x4eb1,	// (0x00006f82) cell_vkb_candidate_pane_g4

0x514a,	// (0x0000721b) cell_app_pane_cp2_g1_ParamLimits

0x514a,	// (0x0000721b) cell_app_pane_cp2_g1

0x5168,	// (0x00007239) cell_app_pane_cp2_g2_ParamLimits

0x5168,	// (0x00007239) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00011c86) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00011c86) cell_app_pane_cp2_g

0x5174,	// (0x00007245) cell_app_pane_cp2_t1_ParamLimits

0x5174,	// (0x00007245) cell_app_pane_cp2_t1

0xeb45,	// (0x00010c16) grid_highlight_pane_cp1_ParamLimits

0xeb45,	// (0x00010c16) grid_highlight_pane_cp1

0x5186,	// (0x00007257) cell_hwr_candidate_pane_cp1_ParamLimits

0x5186,	// (0x00007257) cell_hwr_candidate_pane_cp1

0x4aa1,	// (0x00006b72) fep_hwr_candidate_drop_down_list_pane_g1

0x51aa,	// (0x0000727b) fep_hwr_candidate_drop_down_list_pane_g2

0x51b7,	// (0x00007288) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00011c8b) fep_hwr_candidate_drop_down_list_pane_g

0x51c4,	// (0x00007295) fep_hwr_candidate_drop_down_list_scroll_pane

0x51cd,	// (0x0000729e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x51cd,	// (0x0000729e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x51da,	// (0x000072ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x51da,	// (0x000072ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x51e7,	// (0x000072b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x51e7,	// (0x000072b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4e96,	// (0x00006f67) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e96,	// (0x00006f67) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4eb1,	// (0x00006f82) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4eb1,	// (0x00006f82) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x51f4,	// (0x000072c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x51f4,	// (0x000072c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x520f,	// (0x000072e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x520f,	// (0x000072e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x522a,	// (0x000072fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x522a,	// (0x000072fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00011c92) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00011c92) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5245,	// (0x00007316) cell_vkb_candidate_pane_cp1_ParamLimits

0x5245,	// (0x00007316) cell_vkb_candidate_pane_cp1

0x4aa1,	// (0x00006b72) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) fep_vkb_candidate_drop_down_list_pane_g1

0x51aa,	// (0x0000727b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x51aa,	// (0x0000727b) fep_vkb_candidate_drop_down_list_pane_g2

0x51b7,	// (0x00007288) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x51b7,	// (0x00007288) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00011c8b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00011c8b) fep_vkb_candidate_drop_down_list_pane_g

0x526b,	// (0x0000733c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x526b,	// (0x0000733c) fep_vkb_candidate_drop_down_list_scroll_pane

0x5278,	// (0x00007349) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5278,	// (0x00007349) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5285,	// (0x00007356) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5285,	// (0x00007356) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5291,	// (0x00007362) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5291,	// (0x00007362) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e36,	// (0x00006f07) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e36,	// (0x00006f07) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e57,	// (0x00006f28) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e57,	// (0x00006f28) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x529d,	// (0x0000736e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x529d,	// (0x0000736e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x52be,	// (0x0000738f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52be,	// (0x0000738f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x52df,	// (0x000073b0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52df,	// (0x000073b0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00011ca3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00011ca3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9c97,	// (0x0000bd68) title_pane_g1_ParamLimits

0x9caa,	// (0x0000bd7b) title_pane_g2_ParamLimits

0xf554,	// (0x00011625) title_pane_g_ParamLimits

0xf2a7,	// (0x00011378) aid_call2_pane

0xf2af,	// (0x00011380) aid_call_pane

0xf2b7,	// (0x00011388) popup_clock_analogue_window_g1

0xf2b7,	// (0x00011388) popup_clock_analogue_window_g2

0xf2bf,	// (0x00011390) popup_clock_analogue_window_g3

0xf2c8,	// (0x00011399) popup_clock_analogue_window_g4

0xe1c8,	// (0x00010299) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x000117ca) popup_clock_analogue_window_g

0xf2d0,	// (0x000113a1) popup_clock_analogue_window_t1

0xf32d,	// (0x000113fe) clock_digital_number_pane_ParamLimits

0xf32d,	// (0x000113fe) clock_digital_number_pane

0xf339,	// (0x0001140a) clock_digital_number_pane_cp02_ParamLimits

0xf339,	// (0x0001140a) clock_digital_number_pane_cp02

0xf345,	// (0x00011416) clock_digital_number_pane_cp03_ParamLimits

0xf345,	// (0x00011416) clock_digital_number_pane_cp03

0xf351,	// (0x00011422) clock_digital_number_pane_cp04_ParamLimits

0xf351,	// (0x00011422) clock_digital_number_pane_cp04

0xf35d,	// (0x0001142e) clock_digital_separator_pane_ParamLimits

0xf35d,	// (0x0001142e) clock_digital_separator_pane

0xf369,	// (0x0001143a) popup_clock_digital_window_t1_ParamLimits

0xf369,	// (0x0001143a) popup_clock_digital_window_t1

0xe1c8,	// (0x00010299) clock_digital_number_pane_g1

0xe1c8,	// (0x00010299) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x000117d5) clock_digital_number_pane_g

0xe1c8,	// (0x00010299) clock_digital_separator_pane_g1

0xe1c8,	// (0x00010299) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x000117d5) clock_digital_separator_pane_g

0xb33a,	// (0x0000d40b) aid_fill_nsta_ParamLimits

0xb472,	// (0x0000d543) indicator_nsta_pane_ParamLimits

0x1414,	// (0x000034e5) popup_clock_analogue_window

0x1414,	// (0x000034e5) popup_clock_digital_window

0xeddb,	// (0x00010eac) grid_indicator_nsta_pane_ParamLimits

0x3f82,	// (0x00006053) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00011b75) clock_nsta_pane_t

0xf0f4,	// (0x000111c5) aid_size_max_handle

0xa6eb,	// (0x0000c7bc) aid_size_min_handle

0x0577,	// (0x00002648) editor_scroll_pane

0x52fa,	// (0x000073cb) ex_editor_pane

0xed32,	// (0x00010e03) scroll_pane_cp13

0xea5e,	// (0x00010b2f) scroll_pane_cp14

0xf305,	// (0x000113d6) scroll_pane_cp36

0xa78b,	// (0x0000c85c) list_single_graphic_hl_pane_cp2_ParamLimits

0xa78b,	// (0x0000c85c) list_single_graphic_hl_pane_cp2

0xbe74,	// (0x0000df45) list_single_graphic_hl_pane_ParamLimits

0xbe74,	// (0x0000df45) list_single_graphic_hl_pane

0x5302,	// (0x000073d3) aid_size_min_hl_cp1

0x530b,	// (0x000073dc) list_highlight_pane_cp34_ParamLimits

0x530b,	// (0x000073dc) list_highlight_pane_cp34

0x531c,	// (0x000073ed) list_single_graphic_hl_pane_g1_ParamLimits

0x531c,	// (0x000073ed) list_single_graphic_hl_pane_g1

0xec3a,	// (0x00010d0b) list_single_graphic_hl_pane_g2_ParamLimits

0xec3a,	// (0x00010d0b) list_single_graphic_hl_pane_g2

0xec3a,	// (0x00010d0b) list_single_graphic_hl_pane_g3_ParamLimits

0xec3a,	// (0x00010d0b) list_single_graphic_hl_pane_g3

0xec46,	// (0x00010d17) list_single_graphic_hl_pane_g4_ParamLimits

0xec46,	// (0x00010d17) list_single_graphic_hl_pane_g4

0x538f,	// (0x00007460) list_single_graphic_hl_pane_g5_ParamLimits

0x538f,	// (0x00007460) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00011cb4) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00011cb4) list_single_graphic_hl_pane_g

0xc3c2,	// (0x0000e493) list_single_graphic_hl_pane_t1_ParamLimits

0xc3c2,	// (0x0000e493) list_single_graphic_hl_pane_t1

0x535f,	// (0x00007430) aid_size_min_hl_cp2

0x5368,	// (0x00007439) list_highlight_pane_cp34_cp2_ParamLimits

0x5368,	// (0x00007439) list_highlight_pane_cp34_cp2

0x531c,	// (0x000073ed) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x531c,	// (0x000073ed) list_single_graphic_hl_pane_g1_cp2

0x5375,	// (0x00007446) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5375,	// (0x00007446) list_single_graphic_hl_pane_g2_cp2

0xc3d8,	// (0x0000e4a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc3d8,	// (0x0000e4a9) list_single_graphic_hl_pane_g3_cp2

0xec46,	// (0x00010d17) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xec46,	// (0x00010d17) list_single_graphic_hl_pane_g4_cp2

0x538f,	// (0x00007460) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x538f,	// (0x00007460) list_single_graphic_hl_pane_g5_cp2

0xaaab,	// (0x0000cb7c) control_pane_g4_ParamLimits

0xaaab,	// (0x0000cb7c) control_pane_g4

0x0af4,	// (0x00002bc5) bg_popup_sub_pane_cp10_ParamLimits

0x4606,	// (0x000066d7) list_choice_list_pane_ParamLimits

0x4615,	// (0x000066e6) scroll_pane_cp23

0xe5dd,	// (0x000106ae) bg_popup_preview_window_pane_cp02_ParamLimits

0x4f22,	// (0x00006ff3) list_preview_fixed_pane_ParamLimits

0x4f38,	// (0x00007009) list_preview_fixed_pane_cp_ParamLimits

0x4f38,	// (0x00007009) list_preview_fixed_pane_cp

0x4f44,	// (0x00007015) popup_preview_fixed_window_g1_ParamLimits

0x4f44,	// (0x00007015) popup_preview_fixed_window_g1

0x4f50,	// (0x00007021) popup_preview_fixed_window_g2_ParamLimits

0x4f50,	// (0x00007021) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x00011c43) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x00011c43) popup_preview_fixed_window_g

0xf018,	// (0x000110e9) aid_navi_side_left_pane_ParamLimits

0xf02d,	// (0x000110fe) aid_navi_side_right_pane_ParamLimits

0xf045,	// (0x00011116) navi_icon_pane_stacon_ParamLimits

0xf059,	// (0x0001112a) navi_navi_pane_stacon_ParamLimits

0xf045,	// (0x00011116) navi_text_pane_stacon_ParamLimits

0xe1be,	// (0x0001028f) main_text_info_pane

0x53b9,	// (0x0000748a) listscroll_text_info_pane

0x53c1,	// (0x00007492) list_text_info_pane_ParamLimits

0x53c1,	// (0x00007492) list_text_info_pane

0x53d0,	// (0x000074a1) scroll_pane_cp24_ParamLimits

0x53d0,	// (0x000074a1) scroll_pane_cp24

0xc3e6,	// (0x0000e4b7) list_text_info_pane_t1_ParamLimits

0xc3e6,	// (0x0000e4b7) list_text_info_pane_t1

0xac33,	// (0x0000cd04) popup_fast_swap2_window_ParamLimits

0xac33,	// (0x0000cd04) popup_fast_swap2_window

0x5413,	// (0x000074e4) aid_size_cell_fast2

0xe1be,	// (0x0001028f) bg_popup_window_pane_cp17

0x1cfd,	// (0x00003dce) heading_pane_cp2

0xe7e3,	// (0x000108b4) listscroll_fast2_pane

0x541d,	// (0x000074ee) grid_fast2_pane

0x5427,	// (0x000074f8) listscroll_fast2_pane_g1

0x5431,	// (0x00007502) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00011cbf) listscroll_fast2_pane_g

0xed32,	// (0x00010e03) scroll_pane_cp26

0x543b,	// (0x0000750c) cell_fast2_pane_ParamLimits

0x543b,	// (0x0000750c) cell_fast2_pane

0x5452,	// (0x00007523) cell_fast2_pane_g1

0x545b,	// (0x0000752c) cell_fast2_pane_g2

0x5464,	// (0x00007535) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00011cc4) cell_fast2_pane_g

0xe825,	// (0x000108f6) grid_highlight_pane_cp9

0xe83a,	// (0x0001090b) main_eswt_pane_ParamLimits

0xe83a,	// (0x0001090b) main_eswt_pane

0x53e5,	// (0x000074b6) list_single_text_info_pane

0x546c,	// (0x0000753d) eswt_ctrl_button_pane

0x546c,	// (0x0000753d) eswt_ctrl_canvas_pane

0x5474,	// (0x00007545) eswt_ctrl_combo_pane

0x546c,	// (0x0000753d) eswt_ctrl_default_pane

0x546c,	// (0x0000753d) eswt_ctrl_label_pane

0x547c,	// (0x0000754d) eswt_ctrl_wait_pane

0x5484,	// (0x00007555) eswt_shell_pane

0xe1be,	// (0x0001028f) listscroll_eswt_app_pane

0x54a4,	// (0x00007575) popup_eswt_tasktip_window_ParamLimits

0x54a4,	// (0x00007575) popup_eswt_tasktip_window

0x1880,	// (0x00003951) bg_popup_window_pane_cp18

0x54b5,	// (0x00007586) eswt_control_pane_g1_ParamLimits

0x54b5,	// (0x00007586) eswt_control_pane_g1

0x54c2,	// (0x00007593) eswt_control_pane_g2_ParamLimits

0x54c2,	// (0x00007593) eswt_control_pane_g2

0x54cf,	// (0x000075a0) eswt_control_pane_g3_ParamLimits

0x54cf,	// (0x000075a0) eswt_control_pane_g3

0x54dc,	// (0x000075ad) eswt_control_pane_g4_ParamLimits

0x54dc,	// (0x000075ad) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00011ccb) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00011ccb) eswt_control_pane_g

0xeb45,	// (0x00010c16) bg_button_pane_ParamLimits

0xeb45,	// (0x00010c16) bg_button_pane

0xe83a,	// (0x0001090b) common_borders_pane_copy2_ParamLimits

0xe83a,	// (0x0001090b) common_borders_pane_copy2

0x54e9,	// (0x000075ba) control_button_pane_g1_ParamLimits

0x54e9,	// (0x000075ba) control_button_pane_g1

0x54f5,	// (0x000075c6) control_button_pane_g2_ParamLimits

0x54f5,	// (0x000075c6) control_button_pane_g2

0x5501,	// (0x000075d2) control_button_pane_g3_ParamLimits

0x5501,	// (0x000075d2) control_button_pane_g3

0x0002,

0xfc03,	// (0x00011cd4) control_button_pane_g_ParamLimits

0xfc03,	// (0x00011cd4) control_button_pane_g

0x5515,	// (0x000075e6) control_button_pane_t1

0x5523,	// (0x000075f4) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00011cdb) control_button_pane_t

0x16e3,	// (0x000037b4) bg_button_pane_g1

0x16eb,	// (0x000037bc) bg_button_pane_g2

0x16f3,	// (0x000037c4) bg_button_pane_g3

0x16fb,	// (0x000037cc) bg_button_pane_g4

0x1703,	// (0x000037d4) bg_button_pane_g5

0x170b,	// (0x000037dc) bg_button_pane_g6

0x1713,	// (0x000037e4) bg_button_pane_g7

0x171b,	// (0x000037ec) bg_button_pane_g8

0x1723,	// (0x000037f4) bg_button_pane_g9

0x0008,

0xf85b,	// (0x0001192c) bg_button_pane_g

0x45c1,	// (0x00006692) common_borders_pane_ParamLimits

0x45c1,	// (0x00006692) common_borders_pane

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy1_ParamLimits

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy1

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy1_ParamLimits

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy1

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy1_ParamLimits

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy1

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy1_ParamLimits

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy1

0x45fc,	// (0x000066cd) bg_eswt_ctrl_canvas_pane_g1

0x45c1,	// (0x00006692) common_borders_pane_cp2_ParamLimits

0x45c1,	// (0x00006692) common_borders_pane_cp2

0x45c1,	// (0x00006692) common_borders_pane_cp3_ParamLimits

0x45c1,	// (0x00006692) common_borders_pane_cp3

0x5531,	// (0x00007602) separator_horizontal_pane

0x5539,	// (0x0000760a) separator_vertical_pane

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy2_ParamLimits

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy2

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy2_ParamLimits

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy2

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy2_ParamLimits

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy2

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy2_ParamLimits

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy2

0xe1be,	// (0x0001028f) common_borders_pane_cp4

0x5542,	// (0x00007613) separator_horizontal_pane_g1

0x554b,	// (0x0000761c) separator_horizontal_pane_g2

0x5554,	// (0x00007625) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00011ce0) separator_horizontal_pane_g

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy3_ParamLimits

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy3

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy3_ParamLimits

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy3

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy3_ParamLimits

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy3

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy3_ParamLimits

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy3

0xe1be,	// (0x0001028f) common_borders_pane_cp5

0x555d,	// (0x0000762e) separator_vertical_pane_g1

0x5566,	// (0x00007637) separator_vertical_pane_g2

0x556f,	// (0x00007640) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00011ce7) separator_vertical_pane_g

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy4_ParamLimits

0x54b5,	// (0x00007586) eswt_control_pane_g1_copy4

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy4_ParamLimits

0x54c2,	// (0x00007593) eswt_control_pane_g2_copy4

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy4_ParamLimits

0x54cf,	// (0x000075a0) eswt_control_pane_g3_copy4

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy4_ParamLimits

0x54dc,	// (0x000075ad) eswt_control_pane_g4_copy4

0xc408,	// (0x0000e4d9) eswt_ctrl_combo_button_pane

0xc410,	// (0x0000e4e1) eswt_ctrl_input_pane

0xc418,	// (0x0000e4e9) popup_choice_list_window_cp70

0xc420,	// (0x0000e4f1) eswt_ctrl_input_pane_t1

0xe1be,	// (0x0001028f) input_focus_pane_cp70

0x45c1,	// (0x00006692) bg_button_pane_cp70_ParamLimits

0x45c1,	// (0x00006692) bg_button_pane_cp70

0xc42e,	// (0x0000e4ff) eswt_ctrl_combo_button_pane_g1

0x55a6,	// (0x00007677) wait_bar_pane_cp70

0x1880,	// (0x00003951) bg_popup_window_pane_cp70_ParamLimits

0x1880,	// (0x00003951) bg_popup_window_pane_cp70

0x55ae,	// (0x0000767f) popup_eswt_tasktip_window_t1

0x55c4,	// (0x00007695) wait_bar_pane_cp71_ParamLimits

0x55c4,	// (0x00007695) wait_bar_pane_cp71

0x55d0,	// (0x000076a1) grid_eswt_app_pane

0xf14f,	// (0x00011220) scroll_pane_cp70

0xc436,	// (0x0000e507) cell_eswt_app_pane_ParamLimits

0xc436,	// (0x0000e507) cell_eswt_app_pane

0xc468,	// (0x0000e539) cell_eswt_app_pane_g1_ParamLimits

0xc468,	// (0x0000e539) cell_eswt_app_pane_g1

0xc497,	// (0x0000e568) cell_eswt_app_pane_g2_ParamLimits

0xc497,	// (0x0000e568) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00011cee) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00011cee) cell_eswt_app_pane_g

0xc4c0,	// (0x0000e591) cell_eswt_app_pane_t1_ParamLimits

0xc4c0,	// (0x0000e591) cell_eswt_app_pane_t1

0x5695,	// (0x00007766) grid_highlight_pane_cp70_ParamLimits

0x5695,	// (0x00007766) grid_highlight_pane_cp70

0x0448,	// (0x00002519) set_content_pane_g1

0x08c4,	// (0x00002995) status_small_volume_pane

0x56a1,	// (0x00007772) status_small_volume_pane_g1

0x56a9,	// (0x0000777a) volume_small2_pane

0x56b2,	// (0x00007783) volume_small2_pane_g1

0x56bb,	// (0x0000778c) volume_small2_pane_g2

0x56c4,	// (0x00007795) volume_small2_pane_g3

0x56cd,	// (0x0000779e) volume_small2_pane_g4

0x56d6,	// (0x000077a7) volume_small2_pane_g5

0x56df,	// (0x000077b0) volume_small2_pane_g6

0x56e8,	// (0x000077b9) volume_small2_pane_g7

0x56f1,	// (0x000077c2) volume_small2_pane_g8

0x56fa,	// (0x000077cb) volume_small2_pane_g9

0x5703,	// (0x000077d4) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00011cf3) volume_small2_pane_g

0x4bf5,	// (0x00006cc6) fep_vkb_top_text_pane_g1_ParamLimits

0xc36a,	// (0x0000e43b) fep_vkb_top_text_pane_t1_ParamLimits

0x4f5c,	// (0x0000702d) popup_preview_fixed_window_g3_ParamLimits

0x4f5c,	// (0x0000702d) popup_preview_fixed_window_g3

0xb2cd,	// (0x0000d39e) popup_toolbar_trans_pane

0xbc93,	// (0x0000dd64) aid_height_set_list_ParamLimits

0x2f03,	// (0x00004fd4) aid_size_parent_ParamLimits

0x0af4,	// (0x00002bc5) list_highlight_pane_cp2_ParamLimits

0x0448,	// (0x00002519) set_content_pane_g1_ParamLimits

0xbe88,	// (0x0000df59) list_single_image_pane_ParamLimits

0xbe88,	// (0x0000df59) list_single_image_pane

0xc4f2,	// (0x0000e5c3) aid_size_cell_image_ParamLimits

0xc4f2,	// (0x0000e5c3) aid_size_cell_image

0xc4ff,	// (0x0000e5d0) grid_single_image_pane_ParamLimits

0xc4ff,	// (0x0000e5d0) grid_single_image_pane

0xeb70,	// (0x00010c41) list_single_image_pane_g1_ParamLimits

0xeb70,	// (0x00010c41) list_single_image_pane_g1

0xeb7c,	// (0x00010c4d) list_single_image_pane_g2_ParamLimits

0xeb7c,	// (0x00010c4d) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00011d08) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00011d08) list_single_image_pane_g

0x5727,	// (0x000077f8) list_single_image_pane_t1_ParamLimits

0x5727,	// (0x000077f8) list_single_image_pane_t1

0xc50d,	// (0x0000e5de) cell_image_list_pane_ParamLimits

0xc50d,	// (0x0000e5de) cell_image_list_pane

0xc521,	// (0x0000e5f2) cell_image_list_pane_g1

0xc52a,	// (0x0000e5fb) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00011d0d) cell_image_list_pane_g

0x5765,	// (0x00007836) aid_size_cell_tb_trans_pane

0xeb45,	// (0x00010c16) bg_tb_trans_pane

0x5777,	// (0x00007848) grid_tb_trans_pane

0x16e3,	// (0x000037b4) bg_tb_trans_pane_g1

0x16eb,	// (0x000037bc) bg_tb_trans_pane_g2

0x16f3,	// (0x000037c4) bg_tb_trans_pane_g3

0x16fb,	// (0x000037cc) bg_tb_trans_pane_g4

0x1703,	// (0x000037d4) bg_tb_trans_pane_g5

0x171b,	// (0x000037ec) bg_tb_trans_pane_g6

0x1723,	// (0x000037f4) bg_tb_trans_pane_g7

0x170b,	// (0x000037dc) bg_tb_trans_pane_g8

0x1713,	// (0x000037e4) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00011d12) bg_tb_trans_pane_g

0x578b,	// (0x0000785c) cell_toolbar_trans_pane_ParamLimits

0x578b,	// (0x0000785c) cell_toolbar_trans_pane

0x45fc,	// (0x000066cd) cell_toolbar_trans_pane_g1

0xc0c2,	// (0x0000e193) list_form2_midp_pane_t1

0xc0d0,	// (0x0000e1a1) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00011bbb) list_form2_midp_pane_t

0x41e6,	// (0x000062b7) scroll_pane_cp51_ParamLimits

0x4403,	// (0x000064d4) form2_midp_wait_pane_g1

0x440c,	// (0x000064dd) form2_midp_wait_pane_g2

0x4415,	// (0x000064e6) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00011bd0) form2_midp_wait_pane_g

0xe407,	// (0x000104d8) list_highlight_pane_cp21_ParamLimits

0x4459,	// (0x0000652a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4468,	// (0x00006539) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3124,	// (0x000051f5) list_single_2graphic_im_pane_ParamLimits

0x3124,	// (0x000051f5) list_single_2graphic_im_pane

0xc533,	// (0x0000e604) list_single_2graphic_im_pane_g1_ParamLimits

0xc533,	// (0x0000e604) list_single_2graphic_im_pane_g1

0xc544,	// (0x0000e615) list_single_2graphic_im_pane_g2_ParamLimits

0xc544,	// (0x0000e615) list_single_2graphic_im_pane_g2

0xc550,	// (0x0000e621) list_single_2graphic_im_pane_g3_ParamLimits

0xc550,	// (0x0000e621) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00011d25) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00011d25) list_single_2graphic_im_pane_g

0xc564,	// (0x0000e635) list_single_2graphic_im_pane_t1_ParamLimits

0xc564,	// (0x0000e635) list_single_2graphic_im_pane_t1

0x4f68,	// (0x00007039) list_single_graphic_2heading_pane_fp_ParamLimits

0x4f68,	// (0x00007039) list_single_graphic_2heading_pane_fp

0x4fb0,	// (0x00007081) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4fb0,	// (0x00007081) list_single_graphic_2heading_pane_fp_g1

0x4f81,	// (0x00007052) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4f81,	// (0x00007052) list_single_graphic_2heading_pane_fp_g2

0x4eda,	// (0x00006fab) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4eda,	// (0x00006fab) list_single_graphic_2heading_pane_fp_g3

0x4ee6,	// (0x00006fb7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ee6,	// (0x00006fb7) list_single_graphic_2heading_pane_fp_g4

0x4f8d,	// (0x0000705e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4f8d,	// (0x0000705e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00011c53) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00011c53) list_single_graphic_2heading_pane_fp_g

0x581f,	// (0x000078f0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x581f,	// (0x000078f0) list_single_graphic_2heading_pane_fp_t1

0x4fe8,	// (0x000070b9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4fe8,	// (0x000070b9) list_single_graphic_2heading_pane_fp_t2

0x5835,	// (0x00007906) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5835,	// (0x00007906) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00011d2e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00011d2e) list_single_graphic_2heading_pane_fp_t

0x4831,	// (0x00006902) fep_hwr_write_pane_g5_ParamLimits

0x4831,	// (0x00006902) fep_hwr_write_pane_g5

0x483d,	// (0x0000690e) fep_hwr_write_pane_g6_ParamLimits

0x483d,	// (0x0000690e) fep_hwr_write_pane_g6

0x5484,	// (0x00007555) eswt_shell_pane_ParamLimits

0x1880,	// (0x00003951) bg_popup_window_pane_cp18_ParamLimits

0x2da9,	// (0x00004e7a) heading_pane_cp70

0x55ae,	// (0x0000767f) popup_eswt_tasktip_window_t1_ParamLimits

0xb397,	// (0x0000d468) aid_touch_tab_arrow_left

0xb3ad,	// (0x0000d47e) aid_touch_tab_arrow_right

0xe39f,	// (0x00010470) title_pane_g3_ParamLimits

0xe39f,	// (0x00010470) title_pane_g3

0xea9f,	// (0x00010b70) set_value_pane_g1

0xb2cd,	// (0x0000d39e) popup_toolbar_trans_pane_ParamLimits

0x5765,	// (0x00007836) aid_size_cell_tb_trans_pane_ParamLimits

0xeb45,	// (0x00010c16) bg_tb_trans_pane_ParamLimits

0x5777,	// (0x00007848) grid_tb_trans_pane_ParamLimits

0xe5dd,	// (0x000106ae) cont_note_pane_ParamLimits

0xe5dd,	// (0x000106ae) cont_note_pane

0xe83a,	// (0x0001090b) cont_snote2_single_text_pane_ParamLimits

0xe83a,	// (0x0001090b) cont_snote2_single_text_pane

0xe83a,	// (0x0001090b) cont_snote2_single_graphic_pane_ParamLimits

0xe83a,	// (0x0001090b) cont_snote2_single_graphic_pane

0x1f19,	// (0x00003fea) cont_note_wait_pane_ParamLimits

0x1f19,	// (0x00003fea) cont_note_wait_pane

0x1f19,	// (0x00003fea) cont_note_image_pane_ParamLimits

0x1f19,	// (0x00003fea) cont_note_image_pane

0x584b,	// (0x0000791c) popup_note2_window_g1_ParamLimits

0x584b,	// (0x0000791c) popup_note2_window_g1

0x587c,	// (0x0000794d) popup_note2_window_t1_ParamLimits

0x587c,	// (0x0000794d) popup_note2_window_t1

0x58c1,	// (0x00007992) popup_note2_window_t2_ParamLimits

0x58c1,	// (0x00007992) popup_note2_window_t2

0x5906,	// (0x000079d7) popup_note2_window_t3_ParamLimits

0x5906,	// (0x000079d7) popup_note2_window_t3

0x594b,	// (0x00007a1c) popup_note2_window_t4_ParamLimits

0x594b,	// (0x00007a1c) popup_note2_window_t4

0xe661,	// (0x00010732) popup_note2_window_t5_ParamLimits

0xe661,	// (0x00010732) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00011d3a) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00011d3a) popup_note2_window_t

0x597a,	// (0x00007a4b) popup_note2_image_window_g1_ParamLimits

0x597a,	// (0x00007a4b) popup_note2_image_window_g1

0x5986,	// (0x00007a57) popup_note2_image_window_g2_ParamLimits

0x5986,	// (0x00007a57) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00011d45) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00011d45) popup_note2_image_window_g

0x5998,	// (0x00007a69) popup_note2_image_window_t1_ParamLimits

0x5998,	// (0x00007a69) popup_note2_image_window_t1

0x59b0,	// (0x00007a81) popup_note2_image_window_t2_ParamLimits

0x59b0,	// (0x00007a81) popup_note2_image_window_t2

0x59c8,	// (0x00007a99) popup_note2_image_window_t3_ParamLimits

0x59c8,	// (0x00007a99) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00011d4a) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00011d4a) popup_note2_image_window_t

0x1f27,	// (0x00003ff8) popup_note2_wait_window_g1_ParamLimits

0x1f27,	// (0x00003ff8) popup_note2_wait_window_g1

0x59e4,	// (0x00007ab5) popup_note2_wait_window_g2_ParamLimits

0x59e4,	// (0x00007ab5) popup_note2_wait_window_g2

0x1f3f,	// (0x00004010) popup_note2_wait_window_g3_ParamLimits

0x1f3f,	// (0x00004010) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x00011d51) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x00011d51) popup_note2_wait_window_g

0x59f0,	// (0x00007ac1) popup_note2_wait_window_t1_ParamLimits

0x59f0,	// (0x00007ac1) popup_note2_wait_window_t1

0x5a0e,	// (0x00007adf) popup_note2_wait_window_t2_ParamLimits

0x5a0e,	// (0x00007adf) popup_note2_wait_window_t2

0x5a2c,	// (0x00007afd) popup_note2_wait_window_t3_ParamLimits

0x5a2c,	// (0x00007afd) popup_note2_wait_window_t3

0x5a3e,	// (0x00007b0f) popup_note2_wait_window_t4_ParamLimits

0x5a3e,	// (0x00007b0f) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x00011d58) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x00011d58) popup_note2_wait_window_t

0x5a50,	// (0x00007b21) wait_bar2_pane_ParamLimits

0x5a50,	// (0x00007b21) wait_bar2_pane

0x5a68,	// (0x00007b39) popup_snote2_single_text_window_g1_ParamLimits

0x5a68,	// (0x00007b39) popup_snote2_single_text_window_g1

0x5a90,	// (0x00007b61) popup_snote2_single_text_window_t1_ParamLimits

0x5a90,	// (0x00007b61) popup_snote2_single_text_window_t1

0x5adc,	// (0x00007bad) popup_snote2_single_text_window_t2_ParamLimits

0x5adc,	// (0x00007bad) popup_snote2_single_text_window_t2

0x5b28,	// (0x00007bf9) popup_snote2_single_text_window_t3_ParamLimits

0x5b28,	// (0x00007bf9) popup_snote2_single_text_window_t3

0x5b69,	// (0x00007c3a) popup_snote2_single_text_window_t4_ParamLimits

0x5b69,	// (0x00007c3a) popup_snote2_single_text_window_t4

0x5b9f,	// (0x00007c70) popup_snote2_single_text_window_t5_ParamLimits

0x5b9f,	// (0x00007c70) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x00011d61) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x00011d61) popup_snote2_single_text_window_t

0x5bca,	// (0x00007c9b) popup_snote2_single_graphic_window_g1_ParamLimits

0x5bca,	// (0x00007c9b) popup_snote2_single_graphic_window_g1

0x5bf2,	// (0x00007cc3) popup_snote2_single_graphic_window_g2_ParamLimits

0x5bf2,	// (0x00007cc3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00011d6c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00011d6c) popup_snote2_single_graphic_window_g

0x5c1a,	// (0x00007ceb) popup_snote2_single_graphic_window_t1_ParamLimits

0x5c1a,	// (0x00007ceb) popup_snote2_single_graphic_window_t1

0x5c66,	// (0x00007d37) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c66,	// (0x00007d37) popup_snote2_single_graphic_window_t2

0x5b28,	// (0x00007bf9) popup_snote2_single_graphic_window_t3_ParamLimits

0x5b28,	// (0x00007bf9) popup_snote2_single_graphic_window_t3

0x5b69,	// (0x00007c3a) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b69,	// (0x00007c3a) popup_snote2_single_graphic_window_t4

0x5b9f,	// (0x00007c70) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b9f,	// (0x00007c70) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x00011d71) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x00011d71) popup_snote2_single_graphic_window_t

0x4045,	// (0x00006116) clock_nsta_pane_cp2_t1

0x4045,	// (0x00006116) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00011b91) clock_nsta_pane_cp2_t

0xeb64,	// (0x00010c35) form_field_data_wide_pane_g1_ParamLimits

0xeb70,	// (0x00010c41) form_field_data_wide_pane_g2_ParamLimits

0xeb70,	// (0x00010c41) form_field_data_wide_pane_g2

0xeb7c,	// (0x00010c4d) form_field_data_wide_pane_g3_ParamLimits

0xeb7c,	// (0x00010c4d) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001174d) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001174d) form_field_data_wide_pane_g

0xbfca,	// (0x0000e09b) grid_touch_3_pane_ParamLimits

0xbfca,	// (0x0000e09b) grid_touch_3_pane

0xc595,	// (0x0000e666) cell_touch_3_pane_ParamLimits

0xc595,	// (0x0000e666) cell_touch_3_pane

0x45fc,	// (0x000066cd) cell_touch_3_pane_g1

0x45fc,	// (0x000066cd) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00011c16) cell_touch_3_pane_g

0xe693,	// (0x00010764) cont_query_data_pane

0xe69b,	// (0x0001076c) cont_query_data_pane_cp1

0x5ce5,	// (0x00007db6) button_value_adjust_pane_cp7

0x5ced,	// (0x00007dbe) query_popup_pane_cp3

0xf391,	// (0x00011462) bg_popup_sub_pane_cp22_ParamLimits

0xf3a7,	// (0x00011478) navi_navi_volume_pane_cp2

0xf3c2,	// (0x00011493) popup_side_volume_key_window_g2

0xf3d1,	// (0x000114a2) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x000117e3) popup_side_volume_key_window_g

0xf3ee,	// (0x000114bf) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x000117ea) popup_side_volume_key_window_t

0x030e,	// (0x000023df) popup_side_volume_key_window_ParamLimits

0xa180,	// (0x0000c251) list_double_graphic_pane_g4_ParamLimits

0xa180,	// (0x0000c251) list_double_graphic_pane_g4

0xbe5f,	// (0x0000df30) list_single_2heading_msg_pane_ParamLimits

0xbe5f,	// (0x0000df30) list_single_2heading_msg_pane

0xc5df,	// (0x0000e6b0) list_single_2heading_msg_pane_g1_ParamLimits

0xc5df,	// (0x0000e6b0) list_single_2heading_msg_pane_g1

0xc5eb,	// (0x0000e6bc) list_single_2heading_msg_pane_g2_ParamLimits

0xc5eb,	// (0x0000e6bc) list_single_2heading_msg_pane_g2

0xc5fe,	// (0x0000e6cf) list_single_2heading_msg_pane_g3_ParamLimits

0xc5fe,	// (0x0000e6cf) list_single_2heading_msg_pane_g3

0xc60a,	// (0x0000e6db) list_single_2heading_msg_pane_g4_ParamLimits

0xc60a,	// (0x0000e6db) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00011d7c) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00011d7c) list_single_2heading_msg_pane_g

0xc622,	// (0x0000e6f3) list_single_2heading_msg_pane_t1_ParamLimits

0xc622,	// (0x0000e6f3) list_single_2heading_msg_pane_t1

0xc64a,	// (0x0000e71b) list_single_2heading_msg_pane_t2_ParamLimits

0xc64a,	// (0x0000e71b) list_single_2heading_msg_pane_t2

0xc6b5,	// (0x0000e786) list_single_2heading_msg_pane_t3_ParamLimits

0xc6b5,	// (0x0000e786) list_single_2heading_msg_pane_t3

0x5dde,	// (0x00007eaf) list_single_2heading_msg_pane_t4_ParamLimits

0x5dde,	// (0x00007eaf) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00011d85) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00011d85) list_single_2heading_msg_pane_t

0xe3ab,	// (0x0001047c) title_pane_g4_ParamLimits

0xe3ab,	// (0x0001047c) title_pane_g4

0xef40,	// (0x00011011) title_pane_stacon_g3_ParamLimits

0xef40,	// (0x00011011) title_pane_stacon_g3

0x57e2,	// (0x000078b3) list_single_2graphic_im_pane_g4_ParamLimits

0x57e2,	// (0x000078b3) list_single_2graphic_im_pane_g4

0x2af5,	// (0x00004bc6) popup_side_volume_key_window_cp

0x3573,	// (0x00005644) main_idle_act2_pane_t1

0x172b,	// (0x000037fc) toolbar_button_pane_g10

0xa037,	// (0x0000c108) popup_toolbar_window_cp1

0x4036,	// (0x00006107) clock_nsta_pane_cp_t1

0x4036,	// (0x00006107) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00011b8c) clock_nsta_pane_cp_t

0xf3a7,	// (0x00011478) navi_navi_volume_pane_cp2_ParamLimits

0xf3b6,	// (0x00011487) popup_side_volume_key_window_g1_ParamLimits

0xf3c2,	// (0x00011493) popup_side_volume_key_window_g2_ParamLimits

0xf3d1,	// (0x000114a2) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x000117e3) popup_side_volume_key_window_g_ParamLimits

0x466b,	// (0x0000673c) fep_hwr_aid_pane

0x4714,	// (0x000067e5) bg_fep_hwr_top_pane_g4_ParamLimits

0x4734,	// (0x00006805) fep_hwr_top_pane_g1_ParamLimits

0x4746,	// (0x00006817) fep_hwr_top_pane_g2_ParamLimits

0x4758,	// (0x00006829) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00011be1) fep_hwr_top_pane_g_ParamLimits

0x476d,	// (0x0000683e) fep_hwr_top_text_pane_ParamLimits

0x28aa,	// (0x0000497b) aid_touch_tab_arrow_arrow_2

0x28b3,	// (0x00004984) aid_touch_tab_arrow_left_2

0x467f,	// (0x00006750) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x46b6,	// (0x00006787) fep_hwr_prediction_pane

0x49ef,	// (0x00006ac0) fep_vkb_prediction_pane

0xc34a,	// (0x0000e41b) fep_vkb_side_pane_g3_ParamLimits

0xc34a,	// (0x0000e41b) fep_vkb_side_pane_g3

0x4aa1,	// (0x00006b72) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x51aa,	// (0x0000727b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x51b7,	// (0x00007288) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00011c8b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e03,	// (0x00007ed4) fep_hwr_prediction_pane_g1

0x5e0d,	// (0x00007ede) fep_hwr_prediction_pane_g2

0x5e15,	// (0x00007ee6) fep_hwr_prediction_pane_g3

0x5e1d,	// (0x00007eee) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00011d8e) fep_hwr_prediction_pane_g

0x5e03,	// (0x00007ed4) fep_vkb_prediction_pane_g1

0x5e25,	// (0x00007ef6) fep_vkb_prediction_pane_g2

0x5e2d,	// (0x00007efe) fep_vkb_prediction_pane_g3

0x5e35,	// (0x00007f06) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00011d97) fep_vkb_prediction_pane_g

0x2e6a,	// (0x00004f3b) slider_set_pane_g3

0x2e7e,	// (0x00004f4f) slider_set_pane_g4

0x2e96,	// (0x00004f67) slider_set_pane_g5

0x2e6a,	// (0x00004f3b) slider_set_pane_g6

0x2eac,	// (0x00004f7d) slider_set_pane_g7

0x3088,	// (0x00005159) slider_form_pane_g3

0x3091,	// (0x00005162) slider_form_pane_g4

0x3099,	// (0x0000516a) slider_form_pane_g5

0x3088,	// (0x00005159) slider_form_pane_g6

0xbe02,	// (0x0000ded3) slider_form_pane_g7

0x3887,	// (0x00005958) slider_set_pane_vc_g3

0x3890,	// (0x00005961) slider_set_pane_vc_g4

0x3899,	// (0x0000596a) slider_set_pane_vc_g5

0x3887,	// (0x00005958) slider_set_pane_vc_g6

0x38a2,	// (0x00005973) slider_set_pane_vc_g7

0x3ce3,	// (0x00005db4) slider_form_pane_vc_g1

0x3cec,	// (0x00005dbd) slider_form_pane_vc_g2

0x3cf5,	// (0x00005dc6) slider_form_pane_vc_g3

0x3ce3,	// (0x00005db4) slider_form_pane_vc_g4

0x3cfe,	// (0x00005dcf) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x00011b5e) slider_form_pane_vc_g

0xe1be,	// (0x0001028f) main_idle_act3_pane

0x5e3d,	// (0x00007f0e) ai3_links_pane

0xc723,	// (0x0000e7f4) popup_ai3_data_window_ParamLimits

0xc723,	// (0x0000e7f4) popup_ai3_data_window

0xe1be,	// (0x0001028f) grid_ai3_links_pane

0xc741,	// (0x0000e812) cell_ai3_links_pane_ParamLimits

0xc741,	// (0x0000e812) cell_ai3_links_pane

0x5e7e,	// (0x00007f4f) bg_popup_sub_pane_cp11

0x5e8b,	// (0x00007f5c) cell_ai3_links_pane_g1

0xe1be,	// (0x0001028f) bg_popup_sub_pane_cp12

0x5eb0,	// (0x00007f81) heading_ai3_data_pane

0x5eb8,	// (0x00007f89) list_ai3_gene_pane

0x5ec4,	// (0x00007f95) popup_ai3_data_window_g1

0x5ecc,	// (0x00007f9d) heading_ai3_data_pane_g1

0x5ed4,	// (0x00007fa5) heading_ai3_data_pane_t1

0x5ee2,	// (0x00007fb3) list_double_ai3_gene_pane_ParamLimits

0x5ee2,	// (0x00007fb3) list_double_ai3_gene_pane

0x5eef,	// (0x00007fc0) list_single_ai3_gene_pane_ParamLimits

0x5eef,	// (0x00007fc0) list_single_ai3_gene_pane

0x45c1,	// (0x00006692) list_highlight_pane_cp7_ParamLimits

0x45c1,	// (0x00006692) list_highlight_pane_cp7

0x5efc,	// (0x00007fcd) list_single_a13_gene_pane_t1_ParamLimits

0x5efc,	// (0x00007fcd) list_single_a13_gene_pane_t1

0x5f13,	// (0x00007fe4) list_single_ai3_gene_pane_g1

0x5f1c,	// (0x00007fed) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x00011da0) list_single_ai3_gene_pane_g

0x5f24,	// (0x00007ff5) list_double_ai3_gene_pane_g1_ParamLimits

0x5f24,	// (0x00007ff5) list_double_ai3_gene_pane_g1

0x5f30,	// (0x00008001) list_double_ai3_gene_pane_t1_ParamLimits

0x5f30,	// (0x00008001) list_double_ai3_gene_pane_t1

0x5f4c,	// (0x0000801d) list_double_ai3_gene_pane_t2_ParamLimits

0x5f4c,	// (0x0000801d) list_double_ai3_gene_pane_t2

0x5f61,	// (0x00008032) list_double_ai3_gene_pane_t3_ParamLimits

0x5f61,	// (0x00008032) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00011da5) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00011da5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5cfe,	// (0x00007dcf) aid_size_min_col_2

0xc5c9,	// (0x0000e69a) aid_size_min_msg_ParamLimits

0xc5c9,	// (0x0000e69a) aid_size_min_msg

0xc35e,	// (0x0000e42f) fep_vkb_top_text_pane_g2_ParamLimits

0xc35e,	// (0x0000e42f) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00011c11) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00011c11) fep_vkb_top_text_pane_g

0xe1be,	// (0x0001028f) main_hc_apps_shell_pane

0x5f7e,	// (0x0000804f) grid_hc_apps_pane_ParamLimits

0x5f7e,	// (0x0000804f) grid_hc_apps_pane

0x5f8d,	// (0x0000805e) list_hc_apps_pane

0x5f95,	// (0x00008066) scroll_pane_cp37_ParamLimits

0x5f95,	// (0x00008066) scroll_pane_cp37

0xc75b,	// (0x0000e82c) cell_hc_apps_pane_ParamLimits

0xc75b,	// (0x0000e82c) cell_hc_apps_pane

0xc825,	// (0x0000e8f6) cell_hc_apps_pane_g1_ParamLimits

0xc825,	// (0x0000e8f6) cell_hc_apps_pane_g1

0x608a,	// (0x0000815b) cell_hc_apps_pane_g2_ParamLimits

0x608a,	// (0x0000815b) cell_hc_apps_pane_g2

0x60a6,	// (0x00008177) cell_hc_apps_pane_g3_ParamLimits

0x60a6,	// (0x00008177) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00011dac) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00011dac) cell_hc_apps_pane_g

0xc852,	// (0x0000e923) cell_hc_apps_pane_t1_ParamLimits

0xc852,	// (0x0000e923) cell_hc_apps_pane_t1

0xe5dd,	// (0x000106ae) grid_highlight_pane_cp10_ParamLimits

0xe5dd,	// (0x000106ae) grid_highlight_pane_cp10

0xc892,	// (0x0000e963) list_single_hc_apps_pane_ParamLimits

0xc892,	// (0x0000e963) list_single_hc_apps_pane

0xc8cc,	// (0x0000e99d) list_single_hc_apps_pane_g1

0xc8e5,	// (0x0000e9b6) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00011db3) list_single_hc_apps_pane_g

0xc8fe,	// (0x0000e9cf) list_single_hc_apps_pane_g2_copy1

0xc91a,	// (0x0000e9eb) list_single_hc_apps_pane_t1

0xe407,	// (0x000104d8) bg_set_opt_pane_cp_ParamLimits

0xe415,	// (0x000104e6) setting_slider_pane_t1_ParamLimits

0xe42e,	// (0x000104ff) setting_slider_pane_t2_ParamLimits

0xe448,	// (0x00010519) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00011635) setting_slider_pane_t_ParamLimits

0xe460,	// (0x00010531) slider_set_pane_ParamLimits

0x0951,	// (0x00002a22) control_pane_g5_ParamLimits

0x0951,	// (0x00002a22) control_pane_g5

0x2e51,	// (0x00004f22) slider_set_pane_g1_ParamLimits

0x2e5e,	// (0x00004f2f) slider_set_pane_g2_ParamLimits

0x2e6a,	// (0x00004f3b) slider_set_pane_g3_ParamLimits

0x2e7e,	// (0x00004f4f) slider_set_pane_g4_ParamLimits

0x2e96,	// (0x00004f67) slider_set_pane_g5_ParamLimits

0x2e6a,	// (0x00004f3b) slider_set_pane_g6_ParamLimits

0x2eac,	// (0x00004f7d) slider_set_pane_g7_ParamLimits

0xf959,	// (0x00011a2a) slider_set_pane_g_ParamLimits

0x03f3,	// (0x000024c4) navi_icon_text_pane_ParamLimits

0xb35e,	// (0x0000d42f) aid_fill_nsta_2_ParamLimits

0xb397,	// (0x0000d468) aid_touch_tab_arrow_left_ParamLimits

0xb3ad,	// (0x0000d47e) aid_touch_tab_arrow_right_ParamLimits

0xb448,	// (0x0000d519) clock_nsta_pane_ParamLimits

0xbb2d,	// (0x0000dbfe) navi_icon_pane_g1_ParamLimits

0xbb39,	// (0x0000dc0a) navi_text_pane_t1_ParamLimits

0xc0a4,	// (0x0000e175) navi_icon_text_pane_g1_ParamLimits

0xc0b0,	// (0x0000e181) navi_icon_text_pane_t1_ParamLimits

0xc8cc,	// (0x0000e99d) list_single_hc_apps_pane_g1_ParamLimits

0xc8e5,	// (0x0000e9b6) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00011db3) list_single_hc_apps_pane_g_ParamLimits

0xc8fe,	// (0x0000e9cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc91a,	// (0x0000e9eb) list_single_hc_apps_pane_t1_ParamLimits

0x9bbd,	// (0x0000bc8e) popup_toolbar2_fixed_window_ParamLimits

0x9bbd,	// (0x0000bc8e) popup_toolbar2_fixed_window

0xb2c3,	// (0x0000d394) popup_toolbar2_float_window

0xe1be,	// (0x0001028f) bg_popup_sub_pane_cp27

0x61c3,	// (0x00008294) grid_toolbar2_float_pane

0xe1be,	// (0x0001028f) bg_popup_sub_pane_cp26

0x61c3,	// (0x00008294) grid_toolbar2_fixed_pane

0xc948,	// (0x0000ea19) cell_toolbar2_fixed_pane_ParamLimits

0xc948,	// (0x0000ea19) cell_toolbar2_fixed_pane

0xc965,	// (0x0000ea36) cell_toolbar2_fixed_pane_g1

0x61e4,	// (0x000082b5) toolbar2_fixed_button_pane

0x16e3,	// (0x000037b4) toolbar2_fixed_button_pane_g1

0x16eb,	// (0x000037bc) toolbar2_fixed_button_pane_g2

0x16f3,	// (0x000037c4) toolbar2_fixed_button_pane_g3

0x16fb,	// (0x000037cc) toolbar2_fixed_button_pane_g4

0x1703,	// (0x000037d4) toolbar2_fixed_button_pane_g5

0x170b,	// (0x000037dc) toolbar2_fixed_button_pane_g6

0x1713,	// (0x000037e4) toolbar2_fixed_button_pane_g7

0x171b,	// (0x000037ec) toolbar2_fixed_button_pane_g8

0x1723,	// (0x000037f4) toolbar2_fixed_button_pane_g9

0x0008,

0xf85b,	// (0x0001192c) toolbar2_fixed_button_pane_g

0x61ec,	// (0x000082bd) cell_toolbar2_float_pane_ParamLimits

0x61ec,	// (0x000082bd) cell_toolbar2_float_pane

0x61fd,	// (0x000082ce) cell_toolbar2_float_pane_g1

0x61e4,	// (0x000082b5) toolbar2_fixed_button_pane_cp

0xc246,	// (0x0000e317) fep_vkb_accented_list_pane_ParamLimits

0xc246,	// (0x0000e317) fep_vkb_accented_list_pane

0x4e12,	// (0x00006ee3) bg_popup_fep_shadow_pane_g9

0x0577,	// (0x00002648) bg_popup_fep_shadow_pane_cp3

0xed19,	// (0x00010dea) list_accented_list_pane

0x6206,	// (0x000082d7) list_single_accented_list_pane_ParamLimits

0x6206,	// (0x000082d7) list_single_accented_list_pane

0x0577,	// (0x00002648) list_highlight_pane_cp10

0x6217,	// (0x000082e8) list_single_accented_list_pane_t1

0xb1df,	// (0x0000d2b0) popup_slider_window_ParamLimits

0xb1df,	// (0x0000d2b0) popup_slider_window

0x5cf5,	// (0x00007dc6) aid_indentation_list_msg

0xca70,	// (0x0000eb41) bg_popup_window_pane_cp19

0x6351,	// (0x00008422) popup_slider_window_g1

0x636d,	// (0x0000843e) popup_slider_window_g2

0x6389,	// (0x0000845a) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00011db8) popup_slider_window_g

0x63e5,	// (0x000084b6) popup_slider_window_t1

0x6459,	// (0x0000852a) small_volume_slider_vertical_pane

0x45fc,	// (0x000066cd) small_volume_slider_vertical_pane_g1

0x45fc,	// (0x000066cd) small_volume_slider_vertical_pane_g2

0x6475,	// (0x00008546) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00011dca) small_volume_slider_vertical_pane_g

0x9b27,	// (0x0000bbf8) area_side_right_pane_ParamLimits

0x9b27,	// (0x0000bbf8) area_side_right_pane

0xcb28,	// (0x0000ebf9) aid_size_side_button_ParamLimits

0xcb28,	// (0x0000ebf9) aid_size_side_button

0xcb41,	// (0x0000ec12) grid_sctrl_middle_pane_ParamLimits

0xcb41,	// (0x0000ec12) grid_sctrl_middle_pane

0x64b2,	// (0x00008583) sctrl_sk_bottom_pane

0x64c3,	// (0x00008594) sctrl_sk_top_pane

0x64d5,	// (0x000085a6) aid_touch_sctrl_top

0xe5dd,	// (0x000106ae) bg_sctrl_sk_pane_ParamLimits

0xe5dd,	// (0x000106ae) bg_sctrl_sk_pane

0x64e2,	// (0x000085b3) sctrl_sk_top_pane_g1

0x64ef,	// (0x000085c0) sctrl_sk_top_pane_t1

0x64d5,	// (0x000085a6) aid_touch_sctrl_bottom

0xe5dd,	// (0x000106ae) bg_sctrl_sk_pane_cp_ParamLimits

0xe5dd,	// (0x000106ae) bg_sctrl_sk_pane_cp

0x650a,	// (0x000085db) sctrl_sk_bottom_pane_g1

0x64ef,	// (0x000085c0) sctrl_sk_bottom_pane_t1

0xcb5b,	// (0x0000ec2c) cell_sctrl_middle_pane_ParamLimits

0xcb5b,	// (0x0000ec2c) cell_sctrl_middle_pane

0xcb6e,	// (0x0000ec3f) aid_touch_sctrl_middle_ParamLimits

0xcb6e,	// (0x0000ec3f) aid_touch_sctrl_middle

0xcb7b,	// (0x0000ec4c) bg_sctrl_middle_pane_ParamLimits

0xcb7b,	// (0x0000ec4c) bg_sctrl_middle_pane

0x65d4,	// (0x000086a5) cell_sctrl_middle_pane_g1_ParamLimits

0x65d4,	// (0x000086a5) cell_sctrl_middle_pane_g1

0xcb89,	// (0x0000ec5a) cell_sctrl_middle_pane_g2_ParamLimits

0xcb89,	// (0x0000ec5a) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x00011dd6) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x00011dd6) cell_sctrl_middle_pane_g

0x16e3,	// (0x000037b4) bg_sctrl_middle_pane_g1

0x16eb,	// (0x000037bc) bg_sctrl_middle_pane_g2

0x16f3,	// (0x000037c4) bg_sctrl_middle_pane_g3

0x16fb,	// (0x000037cc) bg_sctrl_middle_pane_g4

0x1703,	// (0x000037d4) bg_sctrl_middle_pane_g5

0x170b,	// (0x000037dc) bg_sctrl_middle_pane_g6

0x1713,	// (0x000037e4) bg_sctrl_middle_pane_g7

0x171b,	// (0x000037ec) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x00011ddb) bg_sctrl_middle_pane_g

0x1723,	// (0x000037f4) bg_sctrl_middle_pane_g8_copy1

0x16e3,	// (0x000037b4) bg_sctrl_sk_pane_g1

0x16eb,	// (0x000037bc) bg_sctrl_sk_pane_g2

0x16f3,	// (0x000037c4) bg_sctrl_sk_pane_g3

0x0008,

0xf85b,	// (0x0001192c) bg_sctrl_sk_pane_g

0xe9f8,	// (0x00010ac9) aid_size_touch_scroll_bar

0x16fb,	// (0x000037cc) bg_sctrl_sk_pane_g4

0x1703,	// (0x000037d4) bg_sctrl_sk_pane_g5

0x170b,	// (0x000037dc) bg_sctrl_sk_pane_g6

0x1713,	// (0x000037e4) bg_sctrl_sk_pane_g7

0x171b,	// (0x000037ec) bg_sctrl_sk_pane_g8

0x1723,	// (0x000037f4) bg_sctrl_sk_pane_g9

0x0baa,	// (0x00002c7b) popup_fep_china_hwr2_fs_candidate_window

0xac97,	// (0x0000cd68) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xac97,	// (0x0000cd68) popup_fep_china_hwr2_fs_control_window

0x4aa1,	// (0x00006b72) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x00011dd1) sctrl_sk_top_pane_g

0xcb95,	// (0x0000ec66) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcb95,	// (0x0000ec66) aid_fep_china_hwr2_fs_cell

0xcbab,	// (0x0000ec7c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcbab,	// (0x0000ec7c) bg_popup_fep_shadow_pane_cp4

0xcbc2,	// (0x0000ec93) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcbc2,	// (0x0000ec93) bg_popup_fep_shadow_pane_cp5

0xcbd4,	// (0x0000eca5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcbd4,	// (0x0000eca5) popup_fep_china_hwr2_fs_control_bar_grid

0xcbe8,	// (0x0000ecb9) popup_fep_china_hwr2_fs_control_funtion_grid

0x65a8,	// (0x00008679) aid_fep_china_hwr2_fs_candi_cell

0xe1be,	// (0x0001028f) bg_popup_fep_shadow_pane_cp6

0x65b2,	// (0x00008683) popup_fep_china_hwr2_fs_candidate_grid

0xcbf0,	// (0x0000ecc1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcbf0,	// (0x0000ecc1) cell_fep_china_hwr2_fs_funtion_grid

0x45fc,	// (0x000066cd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x65d4,	// (0x000086a5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x65d4,	// (0x000086a5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x65e2,	// (0x000086b3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x65e2,	// (0x000086b3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x00011dec) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x00011dec) cell_fep_china_hwr2_fs_funtion_grid_g

0xcc08,	// (0x0000ecd9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcc08,	// (0x0000ecd9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcc1d,	// (0x0000ecee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcc1d,	// (0x0000ecee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x00011df1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x00011df1) cell_fep_china_hwr2_fs_funtion_grid_t

0x6629,	// (0x000086fa) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6631,	// (0x00008702) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6639,	// (0x0000870a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x00011df6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6641,	// (0x00008712) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6641,	// (0x00008712) cell_fep_china_hwr2_fs_candidate_grid

0x6660,	// (0x00008731) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6668,	// (0x00008739) popup_fep_china_hwr2_fs_candidate_grid_g21

0x45fc,	// (0x000066cd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x45fc,	// (0x000066cd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00011c16) cell_fep_china_hwr2_fs_candidate_grid_g

0x6670,	// (0x00008741) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1219,	// (0x000032ea) clock_nsta_pane_cp_24_ParamLimits

0x1219,	// (0x000032ea) clock_nsta_pane_cp_24

0x1299,	// (0x0000336a) indicator_nsta_pane_cp_24_ParamLimits

0x1299,	// (0x0000336a) indicator_nsta_pane_cp_24

0x26f7,	// (0x000047c8) heading_pane_g1

0x0001,

0xf8c0,	// (0x00011991) heading_pane_g

0x3302,	// (0x000053d3) grid_sct_catagory_button_pane

0x3334,	// (0x00005405) scroll_pane_cp5_ParamLimits

0x41f2,	// (0x000062c3) button_value_adjust_pane_cp5_ParamLimits

0x41f2,	// (0x000062c3) button_value_adjust_pane_cp5

0x42f8,	// (0x000063c9) form2_midp_time_pane_ParamLimits

0x667e,	// (0x0000874f) cell_sct_catagory_button_pane_ParamLimits

0x667e,	// (0x0000874f) cell_sct_catagory_button_pane

0x45c1,	// (0x00006692) bg_button_pane_cp01_ParamLimits

0x45c1,	// (0x00006692) bg_button_pane_cp01

0x45fc,	// (0x000066cd) cell_sct_catagory_button_pane_g1

0xb260,	// (0x0000d331) popup_tb_extension_window

0xcc39,	// (0x0000ed0a) aid_size_cell_ext_ParamLimits

0xcc39,	// (0x0000ed0a) aid_size_cell_ext

0xe83a,	// (0x0001090b) bg_tb_trans_pane_cp1_ParamLimits

0xe83a,	// (0x0001090b) bg_tb_trans_pane_cp1

0xcc5f,	// (0x0000ed30) grid_tb_ext_pane_ParamLimits

0xcc5f,	// (0x0000ed30) grid_tb_ext_pane

0xcc9f,	// (0x0000ed70) cell_tb_ext_pane_ParamLimits

0xcc9f,	// (0x0000ed70) cell_tb_ext_pane

0xccc7,	// (0x0000ed98) cell_tb_ext_pane_g1_ParamLimits

0xccc7,	// (0x0000ed98) cell_tb_ext_pane_g1

0x6714,	// (0x000087e5) cell_tb_ext_pane_t1

0xe5dd,	// (0x000106ae) list_highlight_pane_cp11_ParamLimits

0xe5dd,	// (0x000106ae) list_highlight_pane_cp11

0x9bd2,	// (0x0000bca3) popup_uni_indicator_window_ParamLimits

0x9bd2,	// (0x0000bca3) popup_uni_indicator_window

0xeb45,	// (0x00010c16) bg_popup_sub_pane_cp14

0x672f,	// (0x00008800) list_uniindi_pane

0x673b,	// (0x0000880c) uniindi_top_pane

0xe5dd,	// (0x000106ae) bg_uniindi_top_pane

0x675c,	// (0x0000882d) uniindi_top_pane_g1

0x6772,	// (0x00008843) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x00011dfd) uniindi_top_pane_g

0x679c,	// (0x0000886d) uniindi_top_pane_t1

0x67c8,	// (0x00008899) list_single_uniindi_pane_ParamLimits

0x67c8,	// (0x00008899) list_single_uniindi_pane

0x45fc,	// (0x000066cd) bg_uniindi_top_pane_g1

0x67da,	// (0x000088ab) list_single_uniindi_pane_g1

0x67ed,	// (0x000088be) list_single_uniindi_pane_t1

0xe1be,	// (0x0001028f) control_bg_pane

0x6812,	// (0x000088e3) bg_sctrl_sk_pane_cp1

0x681b,	// (0x000088ec) bg_sctrl_sk_pane_cp2

0x6824,	// (0x000088f5) control_bg_pane_g1

0x682d,	// (0x000088fe) control_bg_pane_g2

0x0001,

0xfd35,	// (0x00011e06) control_bg_pane_g

0x3fc8,	// (0x00006099) cell_indicator_nsta_pane_g1_ParamLimits

0xbffd,	// (0x0000e0ce) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00011b7a) cell_indicator_nsta_pane_g_ParamLimits

0x4388,	// (0x00006459) form2_midp_time_pane_t1_ParamLimits

0x465d,	// (0x0000672e) main_idle_act4_pane_ParamLimits

0x465d,	// (0x0000672e) main_idle_act4_pane

0xb260,	// (0x0000d331) popup_tb_extension_window_ParamLimits

0xcc87,	// (0x0000ed58) tb_ext_find_pane_ParamLimits

0xcc87,	// (0x0000ed58) tb_ext_find_pane

0x6836,	// (0x00008907) ai_gene_pane_1_cp1

0x06b4,	// (0x00002785) ai_gene_pane_2_cp1

0x683e,	// (0x0000890f) list_single_idle_plugin_calendar_pane

0x6847,	// (0x00008918) list_single_idle_plugin_notification_pane

0x6850,	// (0x00008921) list_single_idle_plugin_player_pane

0xcce4,	// (0x0000edb5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcce4,	// (0x0000edb5) list_single_idle_plugin_shortcut_pane

0xcd0c,	// (0x0000eddd) main_idle_act4_pane_t1

0xcd24,	// (0x0000edf5) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x00011e0b) main_idle_act4_pane_t

0xcd3c,	// (0x0000ee0d) middle_sk_idle_act4_pane_ParamLimits

0xcd3c,	// (0x0000ee0d) middle_sk_idle_act4_pane

0xcd58,	// (0x0000ee29) popup_clock_digital_analogue_window_cp2

0xcd7f,	// (0x0000ee50) shortcut_wheel_idle_act4_pane_ParamLimits

0xcd7f,	// (0x0000ee50) shortcut_wheel_idle_act4_pane

0x45fc,	// (0x000066cd) shortcut_wheel_idle_act4_pane_g1

0x45fc,	// (0x000066cd) shortcut_wheel_idle_act4_pane_g2

0x45fc,	// (0x000066cd) shortcut_wheel_idle_act4_pane_g3

0x45fc,	// (0x000066cd) shortcut_wheel_idle_act4_pane_g4

0x45fc,	// (0x000066cd) shortcut_wheel_idle_act4_pane_g5

0x68e3,	// (0x000089b4) shortcut_wheel_idle_act4_pane_g6

0x68eb,	// (0x000089bc) shortcut_wheel_idle_act4_pane_g7

0x68f3,	// (0x000089c4) shortcut_wheel_idle_act4_pane_g8

0x68fb,	// (0x000089cc) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x00011e10) shortcut_wheel_idle_act4_pane_g

0x4714,	// (0x000067e5) middle_sk_idle_act4_pane_g1_ParamLimits

0x4714,	// (0x000067e5) middle_sk_idle_act4_pane_g1

0xcdfc,	// (0x0000eecd) middle_sk_idle_act4_pane_g2_ParamLimits

0xcdfc,	// (0x0000eecd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x00011e33) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x00011e33) middle_sk_idle_act4_pane_g

0xce14,	// (0x0000eee5) middle_sk_idle_act4_pane_t1_ParamLimits

0xce14,	// (0x0000eee5) middle_sk_idle_act4_pane_t1

0xce43,	// (0x0000ef14) grid_ai_shortcut_pane_ParamLimits

0xce43,	// (0x0000ef14) grid_ai_shortcut_pane

0xce60,	// (0x0000ef31) list_highlight_pane_cp16_ParamLimits

0xce60,	// (0x0000ef31) list_highlight_pane_cp16

0xce6d,	// (0x0000ef3e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xce6d,	// (0x0000ef3e) list_single_idle_plugin_shortcut_pane_g1

0xce79,	// (0x0000ef4a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xce79,	// (0x0000ef4a) list_single_idle_plugin_shortcut_pane_g2

0xce97,	// (0x0000ef68) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xce97,	// (0x0000ef68) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00011e38) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00011e38) list_single_idle_plugin_shortcut_pane_g

0xceac,	// (0x0000ef7d) cell_ai_shortcut_pane_ParamLimits

0xceac,	// (0x0000ef7d) cell_ai_shortcut_pane

0xcec2,	// (0x0000ef93) cell_ai_shortcut_pane_g1_ParamLimits

0xcec2,	// (0x0000ef93) cell_ai_shortcut_pane_g1

0x6836,	// (0x00008907) ai_gene_pane_1_cp2

0x6a2c,	// (0x00008afd) ai_gene_pane_2_cp2

0x6a34,	// (0x00008b05) list_highlight_pane_cp15

0x6a3d,	// (0x00008b0e) list_single_idle_plugin_calendar_pane_g1

0x6a34,	// (0x00008b05) list_highlight_pane_cp17

0x6a45,	// (0x00008b16) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a4d,	// (0x00008b1e) list_single_idle_plugin_player_pane_g1

0x3621,	// (0x000056f2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x00011e3f) list_single_idle_plugin_player_pane_g

0x6a55,	// (0x00008b26) list_single_idle_plugin_player_pane_t1

0x6a63,	// (0x00008b34) list_single_idle_plugin_player_pane_t2

0x6a71,	// (0x00008b42) list_single_idle_plugin_player_pane_t3

0x6a7f,	// (0x00008b50) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00011e44) list_single_idle_plugin_player_pane_t

0x6a8d,	// (0x00008b5e) wait_bar_pane_cp15

0x6a95,	// (0x00008b66) grid_ai_notification_pane

0x3621,	// (0x000056f2) list_single_idle_plugin_notification_pane_g1

0xcee4,	// (0x0000efb5) cell_ai_notification_pane_ParamLimits

0xcee4,	// (0x0000efb5) cell_ai_notification_pane

0x6aab,	// (0x00008b7c) cell_ai_notification_pane_g1

0x6ab3,	// (0x00008b84) cell_ai_notification_pane_t1

0xcef1,	// (0x0000efc2) tb_ext_find_button_pane

0xcef9,	// (0x0000efca) tb_ext_find_pane_g1

0xcf01,	// (0x0000efd2) tb_ext_find_pane_t1

0xf2b7,	// (0x00011388) tb_ext_find_button_pane_g1

0x6adf,	// (0x00008bb0) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00011e4d) tb_ext_find_button_pane_g

0xcd0c,	// (0x0000eddd) main_idle_act4_pane_t1_ParamLimits

0xcd24,	// (0x0000edf5) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x00011e0b) main_idle_act4_pane_t_ParamLimits

0xcd58,	// (0x0000ee29) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcd6f,	// (0x0000ee40) sat_plugin_idle_act4_pane_ParamLimits

0xcd6f,	// (0x0000ee40) sat_plugin_idle_act4_pane

0xcf0f,	// (0x0000efe0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcf0f,	// (0x0000efe0) sat_plugin_idle_act4_pane_t1

0xcf27,	// (0x0000eff8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcf27,	// (0x0000eff8) sat_plugin_idle_act4_pane_t2

0xcf3f,	// (0x0000f010) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcf3f,	// (0x0000f010) sat_plugin_idle_act4_pane_t3

0xcf57,	// (0x0000f028) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcf57,	// (0x0000f028) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x00011e52) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x00011e52) sat_plugin_idle_act4_pane_t

0xe34b,	// (0x0001041c) popup_battery_window_ParamLimits

0xe34b,	// (0x0001041c) popup_battery_window

0xe5dd,	// (0x000106ae) bg_popup_sub_pane_cp25_ParamLimits

0xe5dd,	// (0x000106ae) bg_popup_sub_pane_cp25

0x6b34,	// (0x00008c05) popup_battery_window_g1_ParamLimits

0x6b34,	// (0x00008c05) popup_battery_window_g1

0x6b40,	// (0x00008c11) popup_battery_window_t1_ParamLimits

0x6b40,	// (0x00008c11) popup_battery_window_t1

0x6b52,	// (0x00008c23) popup_battery_window_t2_ParamLimits

0x6b52,	// (0x00008c23) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00011e5b) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00011e5b) popup_battery_window_t

0xa9aa,	// (0x0000ca7b) midp_canvas_pane_ParamLimits

0xaa05,	// (0x0000cad6) midp_keypad_pane_ParamLimits

0xaa05,	// (0x0000cad6) midp_keypad_pane

0x0af4,	// (0x00002bc5) main_midp_pane_ParamLimits

0x4054,	// (0x00006125) signal_pane_g2_cp_ParamLimits

0xcf6f,	// (0x0000f040) aid_size_cell_midp_keypad_ParamLimits

0xcf6f,	// (0x0000f040) aid_size_cell_midp_keypad

0xcf8d,	// (0x0000f05e) midp_keyp_game_grid_pane_ParamLimits

0xcf8d,	// (0x0000f05e) midp_keyp_game_grid_pane

0xcfb4,	// (0x0000f085) midp_keyp_rocker_pane_ParamLimits

0xcfb4,	// (0x0000f085) midp_keyp_rocker_pane

0xcff3,	// (0x0000f0c4) midp_keyp_sk_left_pane_ParamLimits

0xcff3,	// (0x0000f0c4) midp_keyp_sk_left_pane

0xd047,	// (0x0000f118) midp_keyp_sk_right_pane_ParamLimits

0xd047,	// (0x0000f118) midp_keyp_sk_right_pane

0xe1be,	// (0x0001028f) bg_button_pane_cp03

0xd09b,	// (0x0000f16c) midp_keyp_sk_left_pane_g1

0xe1be,	// (0x0001028f) bg_button_pane_cp04

0xd09b,	// (0x0000f16c) midp_keyp_sk_right_pane_g1

0x45fc,	// (0x000066cd) midp_keyp_rocker_pane_g1

0xd0a4,	// (0x0000f175) keyp_game_cell_pane_ParamLimits

0xd0a4,	// (0x0000f175) keyp_game_cell_pane

0xe1be,	// (0x0001028f) bg_button_pane_cp02

0xd0ca,	// (0x0000f19b) keyp_game_cell_pane_g1

0x9b69,	// (0x0000bc3a) popup_fep_vkb2_window_ParamLimits

0x9b69,	// (0x0000bc3a) popup_fep_vkb2_window

0xd0d3,	// (0x0000f1a4) aid_size_cell_vkb2_ParamLimits

0xd0d3,	// (0x0000f1a4) aid_size_cell_vkb2

0xd109,	// (0x0000f1da) popup_fep_vkb2_window_g1_ParamLimits

0xd109,	// (0x0000f1da) popup_fep_vkb2_window_g1

0xd159,	// (0x0000f22a) vkb2_area_bottom_pane_ParamLimits

0xd159,	// (0x0000f22a) vkb2_area_bottom_pane

0xd1b5,	// (0x0000f286) vkb2_area_keypad_pane_ParamLimits

0xd1b5,	// (0x0000f286) vkb2_area_keypad_pane

0xd203,	// (0x0000f2d4) vkb2_area_top_pane_ParamLimits

0xd203,	// (0x0000f2d4) vkb2_area_top_pane

0xd289,	// (0x0000f35a) vkb2_top_entry_pane_ParamLimits

0xd289,	// (0x0000f35a) vkb2_top_entry_pane

0xd2b6,	// (0x0000f387) vkb2_top_grid_left_pane_ParamLimits

0xd2b6,	// (0x0000f387) vkb2_top_grid_left_pane

0xd2d6,	// (0x0000f3a7) vkb2_top_grid_right_pane_ParamLimits

0xd2d6,	// (0x0000f3a7) vkb2_top_grid_right_pane

0x6ed1,	// (0x00008fa2) vkb2_cell_keypad_pane_ParamLimits

0x6ed1,	// (0x00008fa2) vkb2_cell_keypad_pane

0xd31c,	// (0x0000f3ed) vkb2_area_bottom_grid_pane_ParamLimits

0xd31c,	// (0x0000f3ed) vkb2_area_bottom_grid_pane

0xd346,	// (0x0000f417) vkb2_area_bottom_pane_g1_ParamLimits

0xd346,	// (0x0000f417) vkb2_area_bottom_pane_g1

0xd36c,	// (0x0000f43d) vkb2_area_bottom_pane_g2_ParamLimits

0xd36c,	// (0x0000f43d) vkb2_area_bottom_pane_g2

0xd39d,	// (0x0000f46e) vkb2_area_bottom_pane_g3_ParamLimits

0xd39d,	// (0x0000f46e) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x00011e60) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x00011e60) vkb2_area_bottom_pane_g

0x707b,	// (0x0000914c) vkb2_top_cell_left_pane_ParamLimits

0x707b,	// (0x0000914c) vkb2_top_cell_left_pane

0xd407,	// (0x0000f4d8) vkb2_top_entry_pane_g1_ParamLimits

0xd407,	// (0x0000f4d8) vkb2_top_entry_pane_g1

0xd415,	// (0x0000f4e6) vkb2_top_entry_pane_t1_ParamLimits

0xd415,	// (0x0000f4e6) vkb2_top_entry_pane_t1

0x70e3,	// (0x000091b4) vkb2_top_entry_pane_t2_ParamLimits

0x70e3,	// (0x000091b4) vkb2_top_entry_pane_t2

0x7115,	// (0x000091e6) vkb2_top_entry_pane_t3_ParamLimits

0x7115,	// (0x000091e6) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00011e67) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00011e67) vkb2_top_entry_pane_t

0xd44e,	// (0x0000f51f) vkb2_top_grid_right_pane_g1_ParamLimits

0xd44e,	// (0x0000f51f) vkb2_top_grid_right_pane_g1

0x717c,	// (0x0000924d) vkb2_top_grid_right_pane_g2_ParamLimits

0x717c,	// (0x0000924d) vkb2_top_grid_right_pane_g2

0x7194,	// (0x00009265) vkb2_top_grid_right_pane_g3_ParamLimits

0x7194,	// (0x00009265) vkb2_top_grid_right_pane_g3

0xd464,	// (0x0000f535) vkb2_top_grid_right_pane_g4_ParamLimits

0xd464,	// (0x0000f535) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x00011e6e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x00011e6e) vkb2_top_grid_right_pane_g

0x71c2,	// (0x00009293) vkb2_top_cell_left_pane_g1

0x71d9,	// (0x000092aa) vkb2_cell_keypad_pane_g1_ParamLimits

0x71d9,	// (0x000092aa) vkb2_cell_keypad_pane_g1

0x71e7,	// (0x000092b8) vkb2_cell_keypad_pane_t1_ParamLimits

0x71e7,	// (0x000092b8) vkb2_cell_keypad_pane_t1

0x71fe,	// (0x000092cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x71fe,	// (0x000092cf) vkb2_cell_bottom_grid_pane

0x7237,	// (0x00009308) vkb2_cell_bottom_grid_pane_g1

0xcda0,	// (0x0000ee71) aid_call2_pane_cp02

0xcda8,	// (0x0000ee79) aid_call_pane_cp02

0xcdb0,	// (0x0000ee81) clock_digital_number_pane_cp10

0xcdb8,	// (0x0000ee89) clock_digital_number_pane_cp11

0xcdc0,	// (0x0000ee91) clock_digital_number_pane_cp12

0xcdc8,	// (0x0000ee99) clock_digital_number_pane_cp13

0xcdd0,	// (0x0000eea1) clock_digital_separator_pane_cp10

0xf2b7,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g1

0xf2b7,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g2

0xcdd8,	// (0x0000eea9) popup_clock_digital_analogue_window_cp2_g3

0xf2b7,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g4

0xcdd8,	// (0x0000eea9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x00011e23) popup_clock_digital_analogue_window_cp2_g

0xcde0,	// (0x0000eeb1) popup_clock_digital_analogue_window_cp2_t1

0xcdee,	// (0x0000eebf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x00011e2e) popup_clock_digital_analogue_window_cp2_t

0x45fc,	// (0x000066cd) clock_digital_number_pane_cp10_g1

0x45fc,	// (0x000066cd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011c16) clock_digital_number_pane_cp10_g

0x45fc,	// (0x000066cd) clock_digital_separator_pane_cp10_g1

0x45fc,	// (0x000066cd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011c16) clock_digital_separator_pane_cp10_g

0x677e,	// (0x0000884f) uniindi_top_pane_g3

0x678f,	// (0x00008860) uniindi_top_pane_g4

0x6f5c,	// (0x0000902d) vkb2_row_keypad_pane_ParamLimits

0x6f5c,	// (0x0000902d) vkb2_row_keypad_pane

0x7253,	// (0x00009324) vkb2_cell_t_keypad_pane_ParamLimits

0x7253,	// (0x00009324) vkb2_cell_t_keypad_pane

0x7263,	// (0x00009334) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7263,	// (0x00009334) vkb2_cell_t_keypad_pane_cp08

0x7278,	// (0x00009349) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7278,	// (0x00009349) vkb2_cell_t_keypad_pane_cp09

0x728c,	// (0x0000935d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x728c,	// (0x0000935d) vkb2_cell_t_keypad_pane_cp01

0x729d,	// (0x0000936e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x729d,	// (0x0000936e) vkb2_cell_t_keypad_pane_cp02

0x72ae,	// (0x0000937f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x72ae,	// (0x0000937f) vkb2_cell_t_keypad_pane_cp03

0x72bf,	// (0x00009390) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x72bf,	// (0x00009390) vkb2_cell_t_keypad_pane_cp04

0x72d0,	// (0x000093a1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x72d0,	// (0x000093a1) vkb2_cell_t_keypad_pane_cp05

0x72e1,	// (0x000093b2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x72e1,	// (0x000093b2) vkb2_cell_t_keypad_pane_cp06

0x72f4,	// (0x000093c5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x72f4,	// (0x000093c5) vkb2_cell_t_keypad_pane_cp07

0x7309,	// (0x000093da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7309,	// (0x000093da) vkb2_cell_t_keypad_pane_cp10

0x4aa1,	// (0x00006b72) vkb2_cell_t_keypad_pane_g1

0x731e,	// (0x000093ef) vkb2_cell_t_keypad_pane_t1

0xe1be,	// (0x0001028f) popup_grid_graphic2_window

0xd47a,	// (0x0000f54b) aid_size_cell_graphic2_ParamLimits

0xd47a,	// (0x0000f54b) aid_size_cell_graphic2

0xd4b8,	// (0x0000f589) bg_popup_window_pane_cp21_ParamLimits

0xd4b8,	// (0x0000f589) bg_popup_window_pane_cp21

0xd4c6,	// (0x0000f597) graphic2_pages_pane_ParamLimits

0xd4c6,	// (0x0000f597) graphic2_pages_pane

0xd51e,	// (0x0000f5ef) grid_graphic2_control_pane_ParamLimits

0xd51e,	// (0x0000f5ef) grid_graphic2_control_pane

0xd566,	// (0x0000f637) grid_graphic2_pane_ParamLimits

0xd566,	// (0x0000f637) grid_graphic2_pane

0xd5f1,	// (0x0000f6c2) cell_graphic2_pane

0xe1be,	// (0x0001028f) main_comp_mode_pane

0x5eb8,	// (0x00007f89) list_ai3_gene_pane_ParamLimits

0xca70,	// (0x0000eb41) bg_popup_window_pane_cp19_ParamLimits

0x62ef,	// (0x000083c0) bg_touch_area_indi_pane_ParamLimits

0x62ef,	// (0x000083c0) bg_touch_area_indi_pane

0x6305,	// (0x000083d6) bg_touch_area_indi_pane_cp01_ParamLimits

0x6305,	// (0x000083d6) bg_touch_area_indi_pane_cp01

0x631d,	// (0x000083ee) bg_touch_area_indi_pane_cp02_ParamLimits

0x631d,	// (0x000083ee) bg_touch_area_indi_pane_cp02

0x6337,	// (0x00008408) bg_touch_area_indi_pane_cp03_ParamLimits

0x6337,	// (0x00008408) bg_touch_area_indi_pane_cp03

0x6351,	// (0x00008422) popup_slider_window_g1_ParamLimits

0x636d,	// (0x0000843e) popup_slider_window_g2_ParamLimits

0x6389,	// (0x0000845a) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00011db8) popup_slider_window_g_ParamLimits

0x63e5,	// (0x000084b6) popup_slider_window_t1_ParamLimits

0x6459,	// (0x0000852a) small_volume_slider_vertical_pane_ParamLimits

0xd5f1,	// (0x0000f6c2) cell_graphic2_pane_ParamLimits

0xd654,	// (0x0000f725) bg_button_pane_cp10_ParamLimits

0xd654,	// (0x0000f725) bg_button_pane_cp10

0xd667,	// (0x0000f738) bg_button_pane_cp11_ParamLimits

0xd667,	// (0x0000f738) bg_button_pane_cp11

0xd67a,	// (0x0000f74b) graphic2_pages_pane_g1_ParamLimits

0xd67a,	// (0x0000f74b) graphic2_pages_pane_g1

0xd695,	// (0x0000f766) graphic2_pages_pane_g2_ParamLimits

0xd695,	// (0x0000f766) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00011e7c) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00011e7c) graphic2_pages_pane_g

0xd6ad,	// (0x0000f77e) graphic2_pages_pane_t1_ParamLimits

0xd6ad,	// (0x0000f77e) graphic2_pages_pane_t1

0xd6c5,	// (0x0000f796) cell_graphic2_control_pane_ParamLimits

0xd6c5,	// (0x0000f796) cell_graphic2_control_pane

0xd6f9,	// (0x0000f7ca) cell_graphic2_pane_g1_ParamLimits

0xd6f9,	// (0x0000f7ca) cell_graphic2_pane_g1

0x48c3,	// (0x00006994) cell_graphic2_pane_g2_ParamLimits

0x48c3,	// (0x00006994) cell_graphic2_pane_g2

0xd706,	// (0x0000f7d7) cell_graphic2_pane_g3_ParamLimits

0xd706,	// (0x0000f7d7) cell_graphic2_pane_g3

0x48d0,	// (0x000069a1) cell_graphic2_pane_g4_ParamLimits

0x48d0,	// (0x000069a1) cell_graphic2_pane_g4

0xd713,	// (0x0000f7e4) cell_graphic2_pane_g5_ParamLimits

0xd713,	// (0x0000f7e4) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x00011e81) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x00011e81) cell_graphic2_pane_g

0xd733,	// (0x0000f804) cell_graphic2_pane_t1_ParamLimits

0xd733,	// (0x0000f804) cell_graphic2_pane_t1

0x26eb,	// (0x000047bc) grid_highlight_pane_cp11_ParamLimits

0x26eb,	// (0x000047bc) grid_highlight_pane_cp11

0xe5dd,	// (0x000106ae) bg_button_pane_cp05

0xd768,	// (0x0000f839) cell_graphic2_control_pane_g1

0x45fc,	// (0x000066cd) bg_touch_area_indi_pane_g1

0x75f8,	// (0x000096c9) aid_cmod_rocker_key_size

0x7602,	// (0x000096d3) aid_cmode_itu_key_size

0x760c,	// (0x000096dd) main_cmode_video_pane

0x7616,	// (0x000096e7) main_comp_mode_itu_pane

0x7622,	// (0x000096f3) main_comp_mode_rocker_pane

0x762e,	// (0x000096ff) cell_cmode_rocker_pane_ParamLimits

0x762e,	// (0x000096ff) cell_cmode_rocker_pane

0x7642,	// (0x00009713) cell_cmode_itu_pane_ParamLimits

0x7642,	// (0x00009713) cell_cmode_itu_pane

0xeb45,	// (0x00010c16) bg_button_pane_cp06_ParamLimits

0xeb45,	// (0x00010c16) bg_button_pane_cp06

0x4aa1,	// (0x00006b72) cell_cmode_rocker_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) cell_cmode_rocker_pane_g1

0x65d4,	// (0x000086a5) cell_cmode_rocker_pane_g2_ParamLimits

0x65d4,	// (0x000086a5) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x00011e91) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x00011e91) cell_cmode_rocker_pane_g

0xe1be,	// (0x0001028f) bg_button_pane_cp07

0x7659,	// (0x0000972a) cell_cmode_itu_pane_g1

0x7662,	// (0x00009733) cell_cmode_itu_pane_t1

0x7670,	// (0x00009741) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00011e96) cell_cmode_itu_pane_t

0x6802,	// (0x000088d3) aid_touch_ctrl_left

0x680a,	// (0x000088db) aid_touch_ctrl_right

0xe1be,	// (0x0001028f) compa_mode_pane

0xd78e,	// (0x0000f85f) aid_cmod_rocker_key_size_cp

0xd798,	// (0x0000f869) aid_cmode_itu_key_size_cp

0x7692,	// (0x00009763) compa_mode_pane_g1

0x769a,	// (0x0000976b) compa_mode_pane_g2

0x76a2,	// (0x00009773) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00011e9b) compa_mode_pane_g

0xd7a2,	// (0x0000f873) main_comp_mode_itu_pane_cp

0xd7aa,	// (0x0000f87b) main_comp_mode_rocker_pane_cp

0xd7b2,	// (0x0000f883) cell_cmode_itu_pane_cp_ParamLimits

0xd7b2,	// (0x0000f883) cell_cmode_itu_pane_cp

0xd7c7,	// (0x0000f898) cell_cmode_rocker_pane_cp_ParamLimits

0xd7c7,	// (0x0000f898) cell_cmode_rocker_pane_cp

0xeb45,	// (0x00010c16) bg_button_pane_cp06_cp_ParamLimits

0xeb45,	// (0x00010c16) bg_button_pane_cp06_cp

0x4aa1,	// (0x00006b72) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4aa1,	// (0x00006b72) cell_cmode_rocker_pane_g1_cp

0x45fc,	// (0x000066cd) cell_cmode_rocker_pane_g2_cp

0xe1be,	// (0x0001028f) bg_button_pane_cp07_cp

0xd7d9,	// (0x0000f8aa) cell_cmode_itu_pane_g1_cp

0xd7e2,	// (0x0000f8b3) cell_cmode_itu_pane_t1_cp

0xd7e2,	// (0x0000f8b3) cell_cmode_itu_pane_t2_cp

0xbdfa,	// (0x0000decb) settings_code_pane_cp2

0xe407,	// (0x000104d8) bg_popup_window_pane_cp3_ParamLimits

0xe7cb,	// (0x0001089c) heading_pane_cp3_ParamLimits

0xe7d7,	// (0x000108a8) listscroll_popup_graphic_pane_ParamLimits

0x466b,	// (0x0000673c) fep_hwr_aid_pane_ParamLimits

0x64d5,	// (0x000085a6) aid_touch_sctrl_top_ParamLimits

0x64e2,	// (0x000085b3) sctrl_sk_top_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x00011dd1) sctrl_sk_top_pane_g_ParamLimits

0x64ef,	// (0x000085c0) sctrl_sk_top_pane_t1_ParamLimits

0x64d5,	// (0x000085a6) aid_touch_sctrl_bottom_ParamLimits

0x64ef,	// (0x000085c0) sctrl_sk_bottom_pane_t1_ParamLimits

0x6748,	// (0x00008819) aid_area_touch_clock

0xd24b,	// (0x0000f31c) aid_vkb2_area_top_pane_cell_ParamLimits

0xd24b,	// (0x0000f31c) aid_vkb2_area_top_pane_cell

0xd2f6,	// (0x0000f3c7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd2f6,	// (0x0000f3c7) aid_vkb2_area_bottom_pane_cell

0x709b,	// (0x0000916c) popup_char_count_window

0x76f8,	// (0x000097c9) popup_char_count_window_g1

0x7701,	// (0x000097d2) popup_char_count_window_g2

0x770a,	// (0x000097db) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x00011ea2) popup_char_count_window_g

0x7713,	// (0x000097e4) popup_char_count_window_t1

0x6ced,	// (0x00008dbe) popup_fep_char_preview_window_ParamLimits

0x6ced,	// (0x00008dbe) popup_fep_char_preview_window

0xd26b,	// (0x0000f33c) vkb2_top_candi_pane_ParamLimits

0xd26b,	// (0x0000f33c) vkb2_top_candi_pane

0xd7f0,	// (0x0000f8c1) cell_vkb2_top_candi_pane_ParamLimits

0xd7f0,	// (0x0000f8c1) cell_vkb2_top_candi_pane

0x1f19,	// (0x00003fea) bg_popup_fep_char_preview_window_ParamLimits

0x1f19,	// (0x00003fea) bg_popup_fep_char_preview_window

0x7772,	// (0x00009843) popup_fep_char_preview_window_t1_ParamLimits

0x7772,	// (0x00009843) popup_fep_char_preview_window_t1

0x77ac,	// (0x0000987d) bg_popup_fep_char_preview_window_g1

0x77b4,	// (0x00009885) bg_popup_fep_char_preview_window_g2

0x77bc,	// (0x0000988d) bg_popup_fep_char_preview_window_g3

0x77c4,	// (0x00009895) bg_popup_fep_char_preview_window_g4

0x77cc,	// (0x0000989d) bg_popup_fep_char_preview_window_g5

0x77d4,	// (0x000098a5) bg_popup_fep_char_preview_window_g6

0x77dc,	// (0x000098ad) bg_popup_fep_char_preview_window_g7

0x77e4,	// (0x000098b5) bg_popup_fep_char_preview_window_g8

0x77ec,	// (0x000098bd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00011ea9) bg_popup_fep_char_preview_window_g

0x4aa1,	// (0x00006b72) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) cell_vkb2_top_candi_pane_g1

0x4e36,	// (0x00006f07) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4e36,	// (0x00006f07) cell_vkb2_top_candi_pane_g2

0x4e57,	// (0x00006f28) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4e57,	// (0x00006f28) cell_vkb2_top_candi_pane_g3

0x77f4,	// (0x000098c5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x77f4,	// (0x000098c5) cell_vkb2_top_candi_pane_g4

0x7815,	// (0x000098e6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7815,	// (0x000098e6) cell_vkb2_top_candi_pane_g5

0x65d4,	// (0x000086a5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x65d4,	// (0x000086a5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00011ebc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00011ebc) cell_vkb2_top_candi_pane_g

0x7836,	// (0x00009907) cell_vkb2_top_candi_pane_t1

0x2e3d,	// (0x00004f0e) aid_size_touch_slider_mark_ParamLimits

0x2e3d,	// (0x00004f0e) aid_size_touch_slider_mark

0xd502,	// (0x0000f5d3) grid_graphic2_catg_pane_ParamLimits

0xd502,	// (0x0000f5d3) grid_graphic2_catg_pane

0xd5c0,	// (0x0000f691) popup_grid_graphic2_window_t1_ParamLimits

0xd5c0,	// (0x0000f691) popup_grid_graphic2_window_t1

0xd5d6,	// (0x0000f6a7) popup_grid_graphic2_window_t2_ParamLimits

0xd5d6,	// (0x0000f6a7) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00011e77) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00011e77) popup_grid_graphic2_window_t

0xe5dd,	// (0x000106ae) bg_button_pane_cp05_ParamLimits

0xd768,	// (0x0000f839) cell_graphic2_control_pane_g1_ParamLimits

0xd85a,	// (0x0000f92b) cell_graphic2_catg_pane_ParamLimits

0xd85a,	// (0x0000f92b) cell_graphic2_catg_pane

0xe1be,	// (0x0001028f) bg_button_pane_cp12

0xd86c,	// (0x0000f93d) cell_graphic2_catg_pane_g1

0x6714,	// (0x000087e5) cell_tb_ext_pane_t1_ParamLimits

0x7139,	// (0x0000920a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7139,	// (0x0000920a) vkb2_top_cell_right_narrow_pane

0x7151,	// (0x00009222) vkb2_top_cell_right_wide_pane_ParamLimits

0x7151,	// (0x00009222) vkb2_top_cell_right_wide_pane

0x465d,	// (0x0000672e) bg_vkb2_func_pane_ParamLimits

0x465d,	// (0x0000672e) bg_vkb2_func_pane

0x71c2,	// (0x00009293) vkb2_top_cell_left_pane_g1_ParamLimits

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp03

0x7237,	// (0x00009308) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x16eb,	// (0x000037bc) bg_vkb2_func_pane_g1

0x16f3,	// (0x000037c4) bg_vkb2_func_pane_g2

0x1703,	// (0x000037d4) bg_vkb2_func_pane_g3

0x16fb,	// (0x000037cc) bg_vkb2_func_pane_g4

0x170b,	// (0x000037dc) bg_vkb2_func_pane_g5

0x1713,	// (0x000037e4) bg_vkb2_func_pane_g6

0x171b,	// (0x000037ec) bg_vkb2_func_pane_g7

0x1723,	// (0x000037f4) bg_vkb2_func_pane_g8

0x16e3,	// (0x000037b4) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00011ec9) bg_vkb2_func_pane_g

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp01

0x71c2,	// (0x00009293) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x71c2,	// (0x00009293) vkb2_top_cell_right_wide_pane_g1

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x465d,	// (0x0000672e) bg_vkb2_fuc_pane_cp02

0x7237,	// (0x00009308) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7237,	// (0x00009308) vkb2_top_cell_right_narrow_pane_g1

0xc9aa,	// (0x0000ea7b) aid_touch_area_decrease_ParamLimits

0xc9aa,	// (0x0000ea7b) aid_touch_area_decrease

0xc9e4,	// (0x0000eab5) aid_touch_area_increase_ParamLimits

0xc9e4,	// (0x0000eab5) aid_touch_area_increase

0xca0c,	// (0x0000eadd) aid_touch_area_mute_ParamLimits

0xca0c,	// (0x0000eadd) aid_touch_area_mute

0xca3c,	// (0x0000eb0d) aid_touch_area_slider_ParamLimits

0xca3c,	// (0x0000eb0d) aid_touch_area_slider

0xca7c,	// (0x0000eb4d) popup_slider_window_g4_ParamLimits

0xca7c,	// (0x0000eb4d) popup_slider_window_g4

0xcaa4,	// (0x0000eb75) popup_slider_window_g5_ParamLimits

0xcaa4,	// (0x0000eb75) popup_slider_window_g5

0xcad8,	// (0x0000eba9) popup_slider_window_g6_ParamLimits

0xcad8,	// (0x0000eba9) popup_slider_window_g6

0x6413,	// (0x000084e4) popup_slider_window_t2_ParamLimits

0x6413,	// (0x000084e4) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00011dc5) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00011dc5) popup_slider_window_t

0xcaf4,	// (0x0000ebc5) slider_pane_ParamLimits

0xcaf4,	// (0x0000ebc5) slider_pane

0x786f,	// (0x00009940) slider_pane_g1_ParamLimits

0x786f,	// (0x00009940) slider_pane_g1

0x7883,	// (0x00009954) slider_pane_g2_ParamLimits

0x7883,	// (0x00009954) slider_pane_g2

0x7899,	// (0x0000996a) slider_pane_g3_ParamLimits

0x7899,	// (0x0000996a) slider_pane_g3

0x0003,

0xfe0b,	// (0x00011edc) slider_pane_g_ParamLimits

0xfe0b,	// (0x00011edc) slider_pane_g

0xb2ac,	// (0x0000d37d) popup_tb_float_extension_window_ParamLimits

0xb2ac,	// (0x0000d37d) popup_tb_float_extension_window

0x78c5,	// (0x00009996) aid_size_cell_tb_float_ext

0xe1be,	// (0x0001028f) bg_popup_sub_window_cp28

0x78d1,	// (0x000099a2) grid_tb_float_ext_pane

0x78dd,	// (0x000099ae) cell_tb_float_ext_pane_ParamLimits

0x78dd,	// (0x000099ae) cell_tb_float_ext_pane

0x78f9,	// (0x000099ca) cell_tb_float_ext_pane_g1

0x7902,	// (0x000099d3) grid_highlight_pane_cp12

0xc224,	// (0x0000e2f5) cell_last_hwr_side_pane_ParamLimits

0xc224,	// (0x0000e2f5) cell_last_hwr_side_pane

0x45fc,	// (0x000066cd) cell_last_hwr_side_pane_g1

0x790b,	// (0x000099dc) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x00011ee5) cell_last_hwr_side_pane_g

0xd3d2,	// (0x0000f4a3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd3d2,	// (0x0000f4a3) vkb2_area_bottom_space_btn_pane

0x4aa1,	// (0x00006b72) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x731e,	// (0x000093ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7836,	// (0x00009907) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7914,	// (0x000099e5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7914,	// (0x000099e5) vkb2_area_bottom_space_btn_pane_g1

0x794e,	// (0x00009a1f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x794e,	// (0x00009a1f) vkb2_area_bottom_space_btn_pane_g2

0x7984,	// (0x00009a55) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7984,	// (0x00009a55) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x00011eea) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x00011eea) vkb2_area_bottom_space_btn_pane_g

0x4722,	// (0x000067f3) cel_fep_hwr_func_pane_ParamLimits

0x4722,	// (0x000067f3) cel_fep_hwr_func_pane

0xc1f9,	// (0x0000e2ca) cell_hwr_side_button_pane_ParamLimits

0xc1f9,	// (0x0000e2ca) cell_hwr_side_button_pane

0x6748,	// (0x00008819) aid_area_touch_clock_ParamLimits

0xe5dd,	// (0x000106ae) bg_uniindi_top_pane_ParamLimits

0x675c,	// (0x0000882d) uniindi_top_pane_g1_ParamLimits

0x6772,	// (0x00008843) uniindi_top_pane_g2_ParamLimits

0x677e,	// (0x0000884f) uniindi_top_pane_g3_ParamLimits

0x678f,	// (0x00008860) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x00011dfd) uniindi_top_pane_g_ParamLimits

0x679c,	// (0x0000886d) uniindi_top_pane_t1_ParamLimits

0xe5dd,	// (0x000106ae) bg_vkb2_func_pane_cp01_ParamLimits

0xe5dd,	// (0x000106ae) bg_vkb2_func_pane_cp01

0x79ce,	// (0x00009a9f) cel_fep_hwr_func_pane_g1_ParamLimits

0x79ce,	// (0x00009a9f) cel_fep_hwr_func_pane_g1

0xe5dd,	// (0x000106ae) bg_vkb2_func_pane_cp02_ParamLimits

0xe5dd,	// (0x000106ae) bg_vkb2_func_pane_cp02

0x79ce,	// (0x00009a9f) cell_hwr_side_button_pane_g1_ParamLimits

0x79ce,	// (0x00009a9f) cell_hwr_side_button_pane_g1

0x14be,	// (0x0000358f) status_pane_g4_ParamLimits

0x14be,	// (0x0000358f) status_pane_g4

0x14d8,	// (0x000035a9) status_pane_t1

0x439b,	// (0x0000646c) form2_midp_gauge_slider_cont_pane

0x43a3,	// (0x00006474) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc13f,	// (0x0000e210) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc151,	// (0x0000e222) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00011bc9) form2_midp_gauge_slider_pane_t_ParamLimits

0x43d9,	// (0x000064aa) form2_midp_slider_pane_ParamLimits

0x6cad,	// (0x00008d7e) aid_size_cell_func_vkb2_ParamLimits

0x6cad,	// (0x00008d7e) aid_size_cell_func_vkb2

0x78b1,	// (0x00009982) slider_pane_g4_ParamLimits

0x78b1,	// (0x00009982) slider_pane_g4

0xd875,	// (0x0000f946) form2_midp_gauge_slider_pane_t2_cp01

0xd883,	// (0x0000f954) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd883,	// (0x0000f954) form2_midp_gauge_slider_pane_t3_cp01

0x7a07,	// (0x00009ad8) form2_midp_slider_pane_cp01

0xe1be,	// (0x0001028f) navi_smil_pane

0x7a3b,	// (0x00009b0c) navi_smil_pane_g1

0x7a43,	// (0x00009b14) navi_smil_pane_t1

0x7a10,	// (0x00009ae1) form2_midp_slider_pane_g1

0x7a19,	// (0x00009aea) form2_midp_slider_pane_g2

0x7a21,	// (0x00009af2) form2_midp_slider_pane_g3

0x7a10,	// (0x00009ae1) form2_midp_slider_pane_g4

0xd8a0,	// (0x0000f971) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x00011ef3) form2_midp_slider_pane_g

0x79be,	// (0x00009a8f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x79be,	// (0x00009a8f) vkb2_area_bottom_space_btn_pane_g4

0xb493,	// (0x0000d564) lc0_navi_pane_ParamLimits

0xb493,	// (0x0000d564) lc0_navi_pane

0xb503,	// (0x0000d5d4) lc0_stat_indi_pane_ParamLimits

0xb503,	// (0x0000d5d4) lc0_stat_indi_pane

0xb518,	// (0x0000d5e9) ls0_title_pane_ParamLimits

0xb518,	// (0x0000d5e9) ls0_title_pane

0xeb45,	// (0x00010c16) bg_popup_sub_pane_cp14_ParamLimits

0x672f,	// (0x00008800) list_uniindi_pane_ParamLimits

0x673b,	// (0x0000880c) uniindi_top_pane_ParamLimits

0x67da,	// (0x000088ab) list_single_uniindi_pane_g1_ParamLimits

0x67ed,	// (0x000088be) list_single_uniindi_pane_t1_ParamLimits

0xd8a9,	// (0x0000f97a) lc0_stat_clock_pane_ParamLimits

0xd8a9,	// (0x0000f97a) lc0_stat_clock_pane

0xd8b6,	// (0x0000f987) lc0_stat_indi_pane_g1_ParamLimits

0xd8b6,	// (0x0000f987) lc0_stat_indi_pane_g1

0xd8c3,	// (0x0000f994) lc0_stat_indi_pane_g2_ParamLimits

0xd8c3,	// (0x0000f994) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x00011efe) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x00011efe) lc0_stat_indi_pane_g

0xd8d0,	// (0x0000f9a1) lc0_uni_indicator_pane_ParamLimits

0xd8d0,	// (0x0000f9a1) lc0_uni_indicator_pane

0xd8dd,	// (0x0000f9ae) ls0_title_pane_g1_ParamLimits

0xd8dd,	// (0x0000f9ae) ls0_title_pane_g1

0xd8f1,	// (0x0000f9c2) ls0_title_pane_t1_ParamLimits

0xd8f1,	// (0x0000f9c2) ls0_title_pane_t1

0xd91f,	// (0x0000f9f0) lc0_uni_indicator_pane_g1_ParamLimits

0xd91f,	// (0x0000f9f0) lc0_uni_indicator_pane_g1

0x7ae2,	// (0x00009bb3) lc0_stat_clock_pane_t1

0xe1be,	// (0x0001028f) main_ai5_pane

0x7af0,	// (0x00009bc1) ai5_sk_pane_ParamLimits

0x7af0,	// (0x00009bc1) ai5_sk_pane

0xd93e,	// (0x0000fa0f) cell_ai5_widget_pane_ParamLimits

0xd93e,	// (0x0000fa0f) cell_ai5_widget_pane

0x8099,	// (0x0000a16a) aid_size_cell_widget_grid

0x80a7,	// (0x0000a178) bg_ai5_widget_pane_ParamLimits

0x80a7,	// (0x0000a178) bg_ai5_widget_pane

0x811b,	// (0x0000a1ec) cell_ai5_widget_pane_g2

0x812b,	// (0x0000a1fc) cell_ai5_widget_pane_g3

0x8142,	// (0x0000a213) cell_ai5_widget_pane_g4

0x814e,	// (0x0000a21f) cell_ai5_widget_pane_g5

0xdc95,	// (0x0000fd66) cell_ai5_widget_pane_g6

0xdca1,	// (0x0000fd72) cell_ai5_widget_pane_g7

0x81ae,	// (0x0000a27f) cell_ai5_widget_pane_t1_ParamLimits

0x81ae,	// (0x0000a27f) cell_ai5_widget_pane_t1

0x81cb,	// (0x0000a29c) cell_ai5_widget_pane_t2_ParamLimits

0x81cb,	// (0x0000a29c) cell_ai5_widget_pane_t2

0x81e3,	// (0x0000a2b4) cell_ai5_widget_pane_t3_ParamLimits

0x81e3,	// (0x0000a2b4) cell_ai5_widget_pane_t3

0x81fb,	// (0x0000a2cc) cell_ai5_widget_pane_t4_ParamLimits

0x81fb,	// (0x0000a2cc) cell_ai5_widget_pane_t4

0x8218,	// (0x0000a2e9) cell_ai5_widget_pane_t5_ParamLimits

0x8218,	// (0x0000a2e9) cell_ai5_widget_pane_t5

0x8237,	// (0x0000a308) cell_ai5_widget_pane_t6_ParamLimits

0x8237,	// (0x0000a308) cell_ai5_widget_pane_t6

0x8249,	// (0x0000a31a) cell_ai5_widget_pane_t7_ParamLimits

0x8249,	// (0x0000a31a) cell_ai5_widget_pane_t7

0x8262,	// (0x0000a333) cell_ai5_widget_pane_t8_ParamLimits

0x8262,	// (0x0000a333) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x00011f18) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x00011f18) cell_ai5_widget_pane_t

0x82b6,	// (0x0000a387) grid_ai5_widget_pane

0xeb45,	// (0x00010c16) highlight_cell_ai5_widget_pane_ParamLimits

0xeb45,	// (0x00010c16) highlight_cell_ai5_widget_pane

0xdcad,	// (0x0000fd7e) ai5_sk_left_pane

0xdcb7,	// (0x0000fd88) ai5_sk_middle_pane

0xdcc1,	// (0x0000fd92) ai5_sk_right_pane

0x82e8,	// (0x0000a3b9) bg_ai5_widget_pane_g1_ParamLimits

0x82e8,	// (0x0000a3b9) bg_ai5_widget_pane_g1

0x82f4,	// (0x0000a3c5) bg_ai5_widget_pane_g2_ParamLimits

0x82f4,	// (0x0000a3c5) bg_ai5_widget_pane_g2

0x8300,	// (0x0000a3d1) bg_ai5_widget_pane_g3_ParamLimits

0x8300,	// (0x0000a3d1) bg_ai5_widget_pane_g3

0x830c,	// (0x0000a3dd) bg_ai5_widget_pane_g4_ParamLimits

0x830c,	// (0x0000a3dd) bg_ai5_widget_pane_g4

0x8318,	// (0x0000a3e9) bg_ai5_widget_pane_g5_ParamLimits

0x8318,	// (0x0000a3e9) bg_ai5_widget_pane_g5

0x8324,	// (0x0000a3f5) bg_ai5_widget_pane_g6_ParamLimits

0x8324,	// (0x0000a3f5) bg_ai5_widget_pane_g6

0x8330,	// (0x0000a401) bg_ai5_widget_pane_g7_ParamLimits

0x8330,	// (0x0000a401) bg_ai5_widget_pane_g7

0x833c,	// (0x0000a40d) bg_ai5_widget_pane_g8_ParamLimits

0x833c,	// (0x0000a40d) bg_ai5_widget_pane_g8

0x8348,	// (0x0000a419) bg_ai5_widget_pane_g9_ParamLimits

0x8348,	// (0x0000a419) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00011f2d) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00011f2d) bg_ai5_widget_pane_g

0x837e,	// (0x0000a44f) cell_shortcut_ai5_widget_pane_ParamLimits

0x837e,	// (0x0000a44f) cell_shortcut_ai5_widget_pane

0x0577,	// (0x00002648) bg_cell_shortcut_ai5_widget_pane

0x8391,	// (0x0000a462) cell_grid_ai5_widget_pane_g1

0x839a,	// (0x0000a46b) highlight_cell_shortcut_ai5_widget_pane

0x16f3,	// (0x000037c4) ai5_sk_left_pane_g1

0x83a2,	// (0x0000a473) ai5_sk_left_pane_g2

0x83aa,	// (0x0000a47b) ai5_sk_left_pane_g3

0x83b2,	// (0x0000a483) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00011f40) ai5_sk_left_pane_g

0x83ba,	// (0x0000a48b) ai5_sk_left_pane_t1

0x16eb,	// (0x000037bc) ai5_sk_right_pane_g1

0x83c8,	// (0x0000a499) ai5_sk_right_pane_g2

0x83d0,	// (0x0000a4a1) ai5_sk_right_pane_g3

0x83d8,	// (0x0000a4a9) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00011f49) ai5_sk_right_pane_g

0x83e0,	// (0x0000a4b1) ai5_sk_right_pane_t1

0x16eb,	// (0x000037bc) ai5_sk_middle_pane_g1

0x16f3,	// (0x000037c4) ai5_sk_middle_pane_g2

0x170b,	// (0x000037dc) ai5_sk_middle_pane_g3

0x83d0,	// (0x0000a4a1) ai5_sk_middle_pane_g4

0x83aa,	// (0x0000a47b) ai5_sk_middle_pane_g5

0x83ee,	// (0x0000a4bf) ai5_sk_middle_pane_g6

0xdccb,	// (0x0000fd9c) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00011f52) ai5_sk_middle_pane_g

0xb37d,	// (0x0000d44e) aid_touch_area_size_lc0_ParamLimits

0xb37d,	// (0x0000d44e) aid_touch_area_size_lc0

0x4e78,	// (0x00006f49) cell_hwr_candidate_pane_t1_ParamLimits

0x1175,	// (0x00003246) aid_touch_navi_pane

0xb623,	// (0x0000d6f4) status_dt_navi_pane_ParamLimits

0xb623,	// (0x0000d6f4) status_dt_navi_pane

0xb63b,	// (0x0000d70c) status_dt_sta_pane_ParamLimits

0xb63b,	// (0x0000d70c) status_dt_sta_pane

0xdcd3,	// (0x0000fda4) dt_sta_controll_pane

0xdce0,	// (0x0000fdb1) dt_sta_indi_pane

0xdced,	// (0x0000fdbe) dt_sta_title_pane

0xe5dd,	// (0x000106ae) bg_dt_sta_indi_pane_ParamLimits

0xe5dd,	// (0x000106ae) bg_dt_sta_indi_pane

0xdcff,	// (0x0000fdd0) dt_sta_battery_pane

0xdd07,	// (0x0000fdd8) dt_sta_indi_pane_g1

0xdd10,	// (0x0000fde1) dt_sta_indi_pane_g2

0xdd19,	// (0x0000fdea) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00011f61) dt_sta_indi_pane_g

0xdd22,	// (0x0000fdf3) dt_sta_signal_pane

0xeb45,	// (0x00010c16) bg_dt_sta_title_pane_ParamLimits

0xeb45,	// (0x00010c16) bg_dt_sta_title_pane

0xdd2b,	// (0x0000fdfc) dt_sta_title_pane_g1

0xdd33,	// (0x0000fe04) dt_sta_title_pane_t1_ParamLimits

0xdd33,	// (0x0000fe04) dt_sta_title_pane_t1

0xe1be,	// (0x0001028f) bg_dt_sta_control_pane

0xdd48,	// (0x0000fe19) dt_sta_controll_pane_g1

0xdd51,	// (0x0000fe22) bg_dt_sta_title_pane_g1

0xdd5a,	// (0x0000fe2b) bg_dt_sta_title_pane_g2

0xdd63,	// (0x0000fe34) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00011f68) bg_dt_sta_title_pane_g

0x45fc,	// (0x000066cd) bg_dt_sta_indi_pane_g1

0x849c,	// (0x0000a56d) dt_sta_signal_pane_g1

0x84a4,	// (0x0000a575) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00011f6f) dt_sta_signal_pane_g

0x84ac,	// (0x0000a57d) dt_sta_battery_pane_g1

0x84b5,	// (0x0000a586) dt_sta_battery_pane_t1

0x45fc,	// (0x000066cd) bg_dt_sta_control_pane_g1

0xf412,	// (0x000114e3) fep_china_uni_eep_pane

0xf41a,	// (0x000114eb) fep_china_uni_entry_pane_ParamLimits

0xf42a,	// (0x000114fb) popup_fep_china_uni_window_g1_ParamLimits

0xf43a,	// (0x0001150b) popup_fep_china_uni_window_g2_ParamLimits

0xf43a,	// (0x0001150b) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x000117ef) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x000117ef) popup_fep_china_uni_window_g

0x84c4,	// (0x0000a595) fep_china_uni_eep_pane_g1

0x84cc,	// (0x0000a59d) fep_china_uni_eep_pane_t1

0x7a32,	// (0x00009b03) aid_touch_area_size_smil_player

0x12cd,	// (0x0000339e) lc0_clock_pane

0x14cc,	// (0x0000359d) status_pane_g5_ParamLimits

0x14cc,	// (0x0000359d) status_pane_g5

0xadd2,	// (0x0000cea3) popup_keymap_window

0x148a,	// (0x0000355b) status_icon_pane

0x812b,	// (0x0000a1fc) cell_ai5_widget_pane_g3_ParamLimits

0x8142,	// (0x0000a213) cell_ai5_widget_pane_g4_ParamLimits

0x814e,	// (0x0000a21f) cell_ai5_widget_pane_g5_ParamLimits

0x8172,	// (0x0000a243) cell_ai5_widget_pane_g8_ParamLimits

0x8172,	// (0x0000a243) cell_ai5_widget_pane_g8

0x8186,	// (0x0000a257) cell_ai5_widget_pane_g9_ParamLimits

0x8186,	// (0x0000a257) cell_ai5_widget_pane_g9

0x819a,	// (0x0000a26b) cell_ai5_widget_pane_g10_ParamLimits

0x819a,	// (0x0000a26b) cell_ai5_widget_pane_g10

0x84db,	// (0x0000a5ac) status_icon_pane_g1

0xe1be,	// (0x0001028f) bg_popup_sub_pane_cp13

0x84e3,	// (0x0000a5b4) popup_keymap_window_t1

0xaac1,	// (0x0000cb92) control_pane_g6_ParamLimits

0xaac1,	// (0x0000cb92) control_pane_g6

0xaace,	// (0x0000cb9f) control_pane_g7_ParamLimits

0xaace,	// (0x0000cb9f) control_pane_g7

0xaadb,	// (0x0000cbac) control_pane_g8_ParamLimits

0xaadb,	// (0x0000cbac) control_pane_g8

0xdcd3,	// (0x0000fda4) dt_sta_controll_pane_ParamLimits

0xdce0,	// (0x0000fdb1) dt_sta_indi_pane_ParamLimits

0xdced,	// (0x0000fdbe) dt_sta_title_pane_ParamLimits

0xea01,	// (0x00010ad2) aid_size_touch_scroll_bar_cale

0xe363,	// (0x00010434) popup_discreet_window_ParamLimits

0xe363,	// (0x00010434) popup_discreet_window

0x9bb3,	// (0x0000bc84) popup_sk_window

0x1f19,	// (0x00003fea) bg_popup_sub_pane_cp28_ParamLimits

0x1f19,	// (0x00003fea) bg_popup_sub_pane_cp28

0x84f1,	// (0x0000a5c2) popup_discreet_window_g1_ParamLimits

0x84f1,	// (0x0000a5c2) popup_discreet_window_g1

0x8511,	// (0x0000a5e2) popup_discreet_window_t1_ParamLimits

0x8511,	// (0x0000a5e2) popup_discreet_window_t1

0x852f,	// (0x0000a600) popup_discreet_window_t2_ParamLimits

0x852f,	// (0x0000a600) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00011f74) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00011f74) popup_discreet_window_t

0x8581,	// (0x0000a652) popup_sk_window_g1

0x858b,	// (0x0000a65c) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00011f7b) popup_sk_window_g

0x8595,	// (0x0000a666) popup_sk_window_t1

0x85a5,	// (0x0000a676) popup_sk_window_t1_copy1

0x811b,	// (0x0000a1ec) cell_ai5_widget_pane_g2_ParamLimits

0x8274,	// (0x0000a345) cell_ai5_widget_pane_t9_ParamLimits

0x8274,	// (0x0000a345) cell_ai5_widget_pane_t9

0xe1be,	// (0x0001028f) main_fep_fshwr2_pane

0xdd6c,	// (0x0000fe3d) aid_fshwr2_btn_pane

0xdd7d,	// (0x0000fe4e) aid_fshwr2_syb_pane

0xdd8e,	// (0x0000fe5f) aid_fshwr2_txt_pane

0xdd9a,	// (0x0000fe6b) fshwr2_func_candi_pane

0xddbb,	// (0x0000fe8c) fshwr2_hwr_syb_pane

0xddd8,	// (0x0000fea9) fshwr2_icf_pane

0xe1be,	// (0x0001028f) fshwr2_icf_bg_pane

0x8630,	// (0x0000a701) fshwr2_icf_pane_t1_ParamLimits

0x8630,	// (0x0000a701) fshwr2_icf_pane_t1

0xf2b7,	// (0x00011388) fshwr2_func_candi_pane_g1

0xde08,	// (0x0000fed9) fshwr2_func_candi_row_pane_ParamLimits

0xde08,	// (0x0000fed9) fshwr2_func_candi_row_pane

0xde18,	// (0x0000fee9) cell_fshwr2_syb_pane_ParamLimits

0xde18,	// (0x0000fee9) cell_fshwr2_syb_pane

0x4aa1,	// (0x00006b72) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) fshwr2_hwr_syb_pane_g1

0xe1be,	// (0x0001028f) bg_popup_call_pane_cp01

0xde32,	// (0x0000ff03) fshwr2_func_candi_cell_pane_ParamLimits

0xde32,	// (0x0000ff03) fshwr2_func_candi_cell_pane

0x869a,	// (0x0000a76b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x869a,	// (0x0000a76b) fshwr2_func_candi_cell_bg_pane

0xde5a,	// (0x0000ff2b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xde5a,	// (0x0000ff2b) fshwr2_func_candi_cell_pane_g1

0x86c6,	// (0x0000a797) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x86c6,	// (0x0000a797) fshwr2_func_candi_cell_pane_t1

0xe1be,	// (0x0001028f) bg_button_pane_cp08

0x0577,	// (0x00002648) cell_fshwr2_syb_bg_pane

0xde7a,	// (0x0000ff4b) cell_fshwr2_syb_bg_pane_g1

0xde82,	// (0x0000ff53) cell_fshwr2_syb_bg_pane_t1

0xeb45,	// (0x00010c16) main_tmo_pane

0xbbe4,	// (0x0000dcb5) uni_indicator_pane_g1_ParamLimits

0xbbfb,	// (0x0000dccc) uni_indicator_pane_g2_ParamLimits

0xbc11,	// (0x0000dce2) uni_indicator_pane_g3_ParamLimits

0xbc26,	// (0x0000dcf7) uni_indicator_pane_g4_ParamLimits

0xbc26,	// (0x0000dcf7) uni_indicator_pane_g4

0x2bff,	// (0x00004cd0) uni_indicator_pane_g5_ParamLimits

0x2bff,	// (0x00004cd0) uni_indicator_pane_g5

0x2bff,	// (0x00004cd0) uni_indicator_pane_g6_ParamLimits

0x2bff,	// (0x00004cd0) uni_indicator_pane_g6

0xf916,	// (0x000119e7) uni_indicator_pane_g_ParamLimits

0xc97a,	// (0x0000ea4b) popup_tmo_note_window_ParamLimits

0xc97a,	// (0x0000ea4b) popup_tmo_note_window

0xeb45,	// (0x00010c16) fshwr2_bg_pane

0xde6b,	// (0x0000ff3c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xde6b,	// (0x0000ff3c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00011f80) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00011f80) fshwr2_func_candi_cell_pane_g

0x45fc,	// (0x000066cd) bg_popup_window_pane_cp01

0x86f0,	// (0x0000a7c1) bg_popup_window_pane_g1_cp01

0x86f9,	// (0x0000a7ca) bg_popup_window_pane_cp22_ParamLimits

0x86f9,	// (0x0000a7ca) bg_popup_window_pane_cp22

0x8707,	// (0x0000a7d8) listscroll_tmo_link_pane_ParamLimits

0x8707,	// (0x0000a7d8) listscroll_tmo_link_pane

0x8747,	// (0x0000a818) popup_tmo_note_window_g1_ParamLimits

0x8747,	// (0x0000a818) popup_tmo_note_window_g1

0x8754,	// (0x0000a825) tmo_note_info_pane_ParamLimits

0x8754,	// (0x0000a825) tmo_note_info_pane

0xde91,	// (0x0000ff62) list_tmo_note_info_pane_g1_ParamLimits

0xde91,	// (0x0000ff62) list_tmo_note_info_pane_g1

0x8785,	// (0x0000a856) list_tmo_note_info_pane_g2_ParamLimits

0x8785,	// (0x0000a856) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00011f85) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00011f85) list_tmo_note_info_pane_g

0x87a1,	// (0x0000a872) list_tmo_note_info_text_pane_ParamLimits

0x87a1,	// (0x0000a872) list_tmo_note_info_text_pane

0x8826,	// (0x0000a8f7) list_tmo_link_pane

0x8833,	// (0x0000a904) scroll_pane_cp20

0x8840,	// (0x0000a911) list_single_tmo_link_pane_ParamLimits

0x8840,	// (0x0000a911) list_single_tmo_link_pane

0x8850,	// (0x0000a921) list_single_tmo_link_pane_t1

0x885e,	// (0x0000a92f) list_tmo_note_info_text_pane_t1_ParamLimits

0x885e,	// (0x0000a92f) list_tmo_note_info_text_pane_t1

0xa5a8,	// (0x0000c679) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5a8,	// (0x0000c679) aid_size_touch_scroll_bar_cp01

0xa4d7,	// (0x0000c5a8) aid_size_touch_slider_marker

0x9ba3,	// (0x0000bc74) popup_settings_window_ParamLimits

0x9ba3,	// (0x0000bc74) popup_settings_window

0x0b1c,	// (0x00002bed) popup_candi_list_indi_window

0x1175,	// (0x00003246) aid_touch_navi_pane_ParamLimits

0x64a9,	// (0x0000857a) rs_clock_indi_pane

0x64b2,	// (0x00008583) sctrl_sk_bottom_pane_ParamLimits

0x64c3,	// (0x00008594) sctrl_sk_top_pane_ParamLimits

0x6d07,	// (0x00008dd8) popup_fep_tooltip_window

0x8099,	// (0x0000a16a) aid_size_cell_widget_grid_ParamLimits

0x8106,	// (0x0000a1d7) cell_ai5_widget_pane_g1_ParamLimits

0x8106,	// (0x0000a1d7) cell_ai5_widget_pane_g1

0xdc95,	// (0x0000fd66) cell_ai5_widget_pane_g6_ParamLimits

0xdca1,	// (0x0000fd72) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x00011f03) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x00011f03) cell_ai5_widget_pane_g

0x8298,	// (0x0000a369) cell_ai5_widget_pane_t10_ParamLimits

0x8298,	// (0x0000a369) cell_ai5_widget_pane_t10

0x82b6,	// (0x0000a387) grid_ai5_widget_pane_ParamLimits

0x8354,	// (0x0000a425) cell_contacts_ai5_widget_pane_ParamLimits

0x8354,	// (0x0000a425) cell_contacts_ai5_widget_pane

0x8544,	// (0x0000a615) popup_discreet_window_t3_ParamLimits

0x8544,	// (0x0000a615) popup_discreet_window_t3

0xddf0,	// (0x0000fec1) popup_fshwr2_char_preview_window_ParamLimits

0xddf0,	// (0x0000fec1) popup_fshwr2_char_preview_window

0xdea8,	// (0x0000ff79) tmo_note_info_pane_t1

0xdebd,	// (0x0000ff8e) tmo_note_info_pane_t2

0xded6,	// (0x0000ffa7) tmo_note_info_pane_t3

0x8802,	// (0x0000a8d3) tmo_note_info_pane_t4

0x8814,	// (0x0000a8e5) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00011f8a) tmo_note_info_pane_t

0x8826,	// (0x0000a8f7) list_tmo_link_pane_ParamLimits

0x8833,	// (0x0000a904) scroll_pane_cp20_ParamLimits

0xe1be,	// (0x0001028f) bg_popup_fep_char_preview_window_cp01

0x8877,	// (0x0000a948) popup_fshwr2_char_preview_window_t1

0x8885,	// (0x0000a956) popup_candi_list_indi_window_g1

0x888e,	// (0x0000a95f) bg_cell_contacts_ai5_widget_pane

0x889a,	// (0x0000a96b) cell_contacts_ai5_widget_pane_g1

0x88ae,	// (0x0000a97f) cell_contacts_ai5_widget_pane_g2

0x88ba,	// (0x0000a98b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00011f95) cell_contacts_ai5_widget_pane_g

0x88cd,	// (0x0000a99e) cell_contacts_ai5_widget_pane_t1

0xeb45,	// (0x00010c16) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdf50,	// (0x00010021) settings_container_pane

0x0577,	// (0x00002648) listscroll_set_pane_copy1

0x3a07,	// (0x00005ad8) scroll_pane_cp121_copy1

0x8953,	// (0x0000aa24) set_content_pane_copy1

0xdf5c,	// (0x0001002d) aid_height_set_list_copy1_ParamLimits

0xdf5c,	// (0x0001002d) aid_height_set_list_copy1

0x2f03,	// (0x00004fd4) aid_size_parent_copy1_ParamLimits

0x2f03,	// (0x00004fd4) aid_size_parent_copy1

0xdf68,	// (0x00010039) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdf68,	// (0x00010039) button_value_adjust_pane_cp6_copy1

0x0af4,	// (0x00002bc5) list_highlight_pane_cp2_copy1_ParamLimits

0x0af4,	// (0x00002bc5) list_highlight_pane_cp2_copy1

0xdf7c,	// (0x0001004d) list_set_pane_copy1_ParamLimits

0xdf7c,	// (0x0001004d) list_set_pane_copy1

0xdeeb,	// (0x0000ffbc) main_pane_set_t1_copy1_ParamLimits

0xdeeb,	// (0x0000ffbc) main_pane_set_t1_copy1

0xdf25,	// (0x0000fff6) main_pane_set_t2_copy1_ParamLimits

0xdf25,	// (0x0000fff6) main_pane_set_t2_copy1

0xe043,	// (0x00010114) main_pane_set_t3_copy1

0xe051,	// (0x00010122) main_pane_set_t4_copy1

0xdf44,	// (0x00010015) set_content_pane_g1_copy1_ParamLimits

0xdf44,	// (0x00010015) set_content_pane_g1_copy1

0xe05f,	// (0x00010130) setting_code_pane_copy1

0x8a66,	// (0x0000ab37) setting_slider_graphic_pane_copy1

0x8a66,	// (0x0000ab37) setting_slider_pane_copy1

0x8a66,	// (0x0000ab37) setting_text_pane_copy1

0x8a66,	// (0x0000ab37) setting_volume_pane_copy1

0xe05f,	// (0x00010130) settings_code_pane_cp2_copy1

0xe067,	// (0x00010138) settings_code_pane_cp_copy1_ParamLimits

0xe067,	// (0x00010138) settings_code_pane_cp_copy1

0xe07b,	// (0x0001014c) volume_set_pane_copy1

0xe087,	// (0x00010158) volume_set_pane_g10_copy1

0xe093,	// (0x00010164) volume_set_pane_g1_copy1

0xe09d,	// (0x0001016e) volume_set_pane_g2_copy1

0xe0a7,	// (0x00010178) volume_set_pane_g3_copy1

0xe0b1,	// (0x00010182) volume_set_pane_g4_copy1

0xe0bb,	// (0x0001018c) volume_set_pane_g5_copy1

0xe0c5,	// (0x00010196) volume_set_pane_g6_copy1

0xe0cf,	// (0x000101a0) volume_set_pane_g7_copy1

0xe0d9,	// (0x000101aa) volume_set_pane_g8_copy1

0xe0e3,	// (0x000101b4) volume_set_pane_g9_copy1

0xe407,	// (0x000104d8) bg_set_opt_pane_cp_copy1_ParamLimits

0xe407,	// (0x000104d8) bg_set_opt_pane_cp_copy1

0x8af4,	// (0x0000abc5) setting_slider_pane_t1_copy1_ParamLimits

0x8af4,	// (0x0000abc5) setting_slider_pane_t1_copy1

0xe0ed,	// (0x000101be) setting_slider_pane_t2_copy1_ParamLimits

0xe0ed,	// (0x000101be) setting_slider_pane_t2_copy1

0xe107,	// (0x000101d8) setting_slider_pane_t3_copy1_ParamLimits

0xe107,	// (0x000101d8) setting_slider_pane_t3_copy1

0xe11f,	// (0x000101f0) slider_set_pane_copy1_ParamLimits

0xe11f,	// (0x000101f0) slider_set_pane_copy1

0xec0e,	// (0x00010cdf) set_opt_bg_pane_g1_copy2

0xec16,	// (0x00010ce7) set_opt_bg_pane_g2_copy2

0x8b5a,	// (0x0000ac2b) set_opt_bg_pane_g3_copy2

0xec26,	// (0x00010cf7) set_opt_bg_pane_g4_copy2

0xec52,	// (0x00010d23) set_opt_bg_pane_g5_copy2

0xec5a,	// (0x00010d2b) set_opt_bg_pane_g6_copy2

0xe135,	// (0x00010206) set_opt_bg_pane_g7_copy2

0x8b6e,	// (0x0000ac3f) set_opt_bg_pane_g8_copy2

0x8b78,	// (0x0000ac49) set_opt_bg_pane_g9_copy2

0x8b82,	// (0x0000ac53) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b82,	// (0x0000ac53) aid_size_touch_slider_mark_copy1

0x8b96,	// (0x0000ac67) slider_set_pane_g1_copy1

0x8b9f,	// (0x0000ac70) slider_set_pane_g2_copy1

0x2e6a,	// (0x00004f3b) slider_set_pane_g3_copy1_ParamLimits

0x2e6a,	// (0x00004f3b) slider_set_pane_g3_copy1

0x2e7e,	// (0x00004f4f) slider_set_pane_g4_copy1_ParamLimits

0x2e7e,	// (0x00004f4f) slider_set_pane_g4_copy1

0x2e96,	// (0x00004f67) slider_set_pane_g5_copy1_ParamLimits

0x2e96,	// (0x00004f67) slider_set_pane_g5_copy1

0x2e6a,	// (0x00004f3b) slider_set_pane_g6_copy1_ParamLimits

0x2e6a,	// (0x00004f3b) slider_set_pane_g6_copy1

0xe13f,	// (0x00010210) slider_set_pane_g7_copy1_ParamLimits

0xe13f,	// (0x00010210) slider_set_pane_g7_copy1

0xe341,	// (0x00010412) bg_set_opt_pane_cp2_copy1

0x8bbd,	// (0x0000ac8e) setting_slider_graphic_pane_g1_copy1

0xe155,	// (0x00010226) setting_slider_graphic_pane_t1_copy1

0xe165,	// (0x00010236) setting_slider_graphic_pane_t2_copy1

0xe175,	// (0x00010246) slider_set_pane_cp_copy1

0x8bf6,	// (0x0000acc7) input_focus_pane_cp1_copy1

0x8bff,	// (0x0000acd0) list_set_text_pane_copy1

0x8c07,	// (0x0000acd8) setting_text_pane_g1_copy1

0xe4b5,	// (0x00010586) set_text_pane_t1_copy1

0x8bf6,	// (0x0000acc7) input_focus_pane_cp2_copy1

0x8c07,	// (0x0000acd8) setting_code_pane_g1_copy1

0xe17d,	// (0x0001024e) setting_code_pane_t1_copy1

0xe18b,	// (0x0001025c) list_set_graphic_pane_copy1

0xe341,	// (0x00010412) bg_set_opt_pane_cp4_copy1

0xa8f6,	// (0x0000c9c7) list_set_graphic_pane_g1_copy1_ParamLimits

0xa8f6,	// (0x0000c9c7) list_set_graphic_pane_g1_copy1

0xe19d,	// (0x0001026e) list_set_graphic_pane_g2_copy1

0xa90e,	// (0x0000c9df) list_set_graphic_pane_t1_copy1_ParamLimits

0xa90e,	// (0x0000c9df) list_set_graphic_pane_t1_copy1

0x45fc,	// (0x000066cd) rs_clock_indi_pane_g1

0x8c51,	// (0x0000ad22) rs_clock_indi_pane_t1

0x8c5f,	// (0x0000ad30) rs_indi_pane

0x8c67,	// (0x0000ad38) rs_indi_pane_g1

0x8c70,	// (0x0000ad41) rs_indi_pane_g2

0x8c79,	// (0x0000ad4a) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00011f9c) rs_indi_pane_g

0x0577,	// (0x00002648) bg_popup_preview_window_pane_cp03

0x8c82,	// (0x0000ad53) popup_fep_tooltip_window_t1

0x586f,	// (0x00007940) popup_note2_window_g2_ParamLimits

0x586f,	// (0x00007940) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00011d35) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00011d35) popup_note2_window_g

0x5e7e,	// (0x00007f4f) bg_popup_sub_pane_cp11_ParamLimits

0x5e8b,	// (0x00007f5c) cell_ai3_links_pane_g1_ParamLimits

0x5ea2,	// (0x00007f73) cell_ai3_links_pane_t1

0xe4b5,	// (0x00010586) set_text_pane_t1_copy1_ParamLimits

0xa982,	// (0x0000ca53) cell_graphic_popup_pane_cp2_ParamLimits

0xa982,	// (0x0000ca53) cell_graphic_popup_pane_cp2

0xe1a5,	// (0x00010276) cell_graphic_popup_pane_g1_cp2

0xe814,	// (0x000108e5) cell_graphic_popup_pane_g2_cp2

0x8c98,	// (0x0000ad69) cell_graphic_popup_pane_g3_cp2

0x8ca0,	// (0x0000ad71) cell_graphic_popup_pane_t2_cp2

0xe825,	// (0x000108f6) grid_highlight_pane_cp3_cp2

0xf0a6,	// (0x00011177) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xeb45,	// (0x00010c16) main_tmo_pane_ParamLimits

0xc96e,	// (0x0000ea3f) popup_tmo_big_image_note_window

0x80f5,	// (0x0000a1c6) cell_ai5_widget_list_pane

0x80fd,	// (0x0000a1ce) cell_ai5_widget_lrg_icon_pane

0xdea8,	// (0x0000ff79) tmo_note_info_pane_t1_ParamLimits

0xdebd,	// (0x0000ff8e) tmo_note_info_pane_t2_ParamLimits

0xded6,	// (0x0000ffa7) tmo_note_info_pane_t3_ParamLimits

0x8802,	// (0x0000a8d3) tmo_note_info_pane_t4_ParamLimits

0x8814,	// (0x0000a8e5) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00011f8a) tmo_note_info_pane_t_ParamLimits

0xdf50,	// (0x00010021) settings_container_pane_ParamLimits

0x8bee,	// (0x0000acbf) indicator_popup_pane_cp5

0x8bee,	// (0x0000acbf) indicator_popup_pane_cp6

0xe18b,	// (0x0001025c) list_set_graphic_pane_copy1_ParamLimits

0xe1be,	// (0x0001028f) bg_popup_window_pane_cp23

0x8cae,	// (0x0000ad7f) popup_tmo_big_image_note_window_g1

0x8cba,	// (0x0000ad8b) popup_tmo_big_image_note_window_t1

0x8cca,	// (0x0000ad9b) popup_tmo_big_image_note_window_t2

0x8cda,	// (0x0000adab) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00011fa3) popup_tmo_big_image_note_window_t

0x45fc,	// (0x000066cd) cell_ai5_widget_lrg_icon_pane_g1

0x8cea,	// (0x0000adbb) cell_ai5_widget_lrg_icon_pane_t1

0x8cf8,	// (0x0000adc9) cell_ai5_widget_list_row_pane_ParamLimits

0x8cf8,	// (0x0000adc9) cell_ai5_widget_list_row_pane

0x8d11,	// (0x0000ade2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8d11,	// (0x0000ade2) cell_ai5_widget_list_row_pane_g1

0x8d1e,	// (0x0000adef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8d1e,	// (0x0000adef) cell_ai5_widget_list_row_pane_t1

0x8d49,	// (0x0000ae1a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8d49,	// (0x0000ae1a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00011faa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00011faa) cell_ai5_widget_list_row_pane_t

0xe1be,	// (0x0001028f) main_fep_vtchi_ss_pane

0x8d80,	// (0x0000ae51) popup_fep_char_pre_window

0x8d88,	// (0x0000ae59) popup_fep_ituss_window

0x8da9,	// (0x0000ae7a) popup_fep_vkbss_window

0x8dca,	// (0x0000ae9b) grid_vkbss_keypad_pane_ParamLimits

0x8dca,	// (0x0000ae9b) grid_vkbss_keypad_pane

0x8dda,	// (0x0000aeab) ituss_keypad_pane

0x8df6,	// (0x0000aec7) aid_vkbss_key_offset_ParamLimits

0x8df6,	// (0x0000aec7) aid_vkbss_key_offset

0x8e02,	// (0x0000aed3) cell_vkbss_key_pane_ParamLimits

0x8e02,	// (0x0000aed3) cell_vkbss_key_pane

0x8e18,	// (0x0000aee9) bg_cell_vkbss_key_g1_ParamLimits

0x8e18,	// (0x0000aee9) bg_cell_vkbss_key_g1

0x8e24,	// (0x0000aef5) cell_vkbss_key_3p_pane_ParamLimits

0x8e24,	// (0x0000aef5) cell_vkbss_key_3p_pane

0x8e3e,	// (0x0000af0f) cell_vkbss_key_g1_ParamLimits

0x8e3e,	// (0x0000af0f) cell_vkbss_key_g1

0x8e58,	// (0x0000af29) cell_vkbss_key_t1_ParamLimits

0x8e58,	// (0x0000af29) cell_vkbss_key_t1

0x8e83,	// (0x0000af54) cell_ituss_key_pane_ParamLimits

0x8e83,	// (0x0000af54) cell_ituss_key_pane

0x8e94,	// (0x0000af65) bg_cell_ituss_key_g1_ParamLimits

0x8e94,	// (0x0000af65) bg_cell_ituss_key_g1

0x8ea0,	// (0x0000af71) cell_ituss_key_pane_g1_ParamLimits

0x8ea0,	// (0x0000af71) cell_ituss_key_pane_g1

0x8eb4,	// (0x0000af85) cell_ituss_key_pane_g2_ParamLimits

0x8eb4,	// (0x0000af85) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x00011fb1) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00011fb1) cell_ituss_key_pane_g

0x8ee6,	// (0x0000afb7) cell_ituss_key_t1_ParamLimits

0x8ee6,	// (0x0000afb7) cell_ituss_key_t1

0x8f24,	// (0x0000aff5) cell_ituss_key_t2_ParamLimits

0x8f24,	// (0x0000aff5) cell_ituss_key_t2

0x8f55,	// (0x0000b026) cell_ituss_key_t3_ParamLimits

0x8f55,	// (0x0000b026) cell_ituss_key_t3

0x8f86,	// (0x0000b057) cell_ituss_key_t4_ParamLimits

0x8f86,	// (0x0000b057) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00011fb6) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00011fb6) cell_ituss_key_t

0x8fb7,	// (0x0000b088) cell_vkbss_key_3p_pane_g1

0x8fbf,	// (0x0000b090) cell_vkbss_key_3p_pane_g2

0x8fc7,	// (0x0000b098) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00011fbf) cell_vkbss_key_3p_pane_g

0xe1be,	// (0x0001028f) bg_popup_fep_char_preview_window_cp02

0x8fcf,	// (0x0000b0a0) popup_fep_char_pre_window_t1

0xdc8b,	// (0x0000fd5c) main_ai5_sk_pane

0x888e,	// (0x0000a95f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x889a,	// (0x0000a96b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x88ae,	// (0x0000a97f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x88ba,	// (0x0000a98b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00011f95) cell_contacts_ai5_widget_pane_g_ParamLimits

0x88cd,	// (0x0000a99e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xeb45,	// (0x00010c16) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe1ad,	// (0x0001027e) main_ai5_sk_pane_g1

0x1d51,	// (0x00003e22) popup_query_code_window_g1

0x8d9e,	// (0x0000ae6f) popup_fep_vkb_icf_pane

0x8db4,	// (0x0000ae85) popup_fep_vtchi_icf_pane

0xeb45,	// (0x00010c16) bg_icf_pane

0x8fe7,	// (0x0000b0b8) list_vkb_icf_pane

0xeb45,	// (0x00010c16) bg_icf_pane_cp01

0x8ff3,	// (0x0000b0c4) vtchi_icf_list_pane

0x9004,	// (0x0000b0d5) list_vkb_icf_pane_t1_ParamLimits

0x9004,	// (0x0000b0d5) list_vkb_icf_pane_t1

0x901a,	// (0x0000b0eb) vtchi_icf_list_pane_t1_ParamLimits

0x901a,	// (0x0000b0eb) vtchi_icf_list_pane_t1

0x8d88,	// (0x0000ae59) popup_fep_ituss_window_ParamLimits

0x8db4,	// (0x0000ae85) popup_fep_vtchi_icf_pane_ParamLimits

0x8dda,	// (0x0000aeab) ituss_keypad_pane_ParamLimits

0x8dea,	// (0x0000aebb) ituss_sks_pane

0xeb45,	// (0x00010c16) bg_icf_pane_ParamLimits

0x8d71,	// (0x0000ae42) icf_edit_indi_pane_ParamLimits

0x8d71,	// (0x0000ae42) icf_edit_indi_pane

0x8fe7,	// (0x0000b0b8) list_vkb_icf_pane_ParamLimits

0xeb45,	// (0x00010c16) bg_icf_pane_cp01_ParamLimits

0x8d71,	// (0x0000ae42) icf_edit_indi_pane_cp01_ParamLimits

0x8d71,	// (0x0000ae42) icf_edit_indi_pane_cp01

0x8ffb,	// (0x0000b0cc) vtchi_query_pane

0x4aa1,	// (0x00006b72) icf_edit_indi_pane_g1_ParamLimits

0x4aa1,	// (0x00006b72) icf_edit_indi_pane_g1

0x909c,	// (0x0000b16d) icf_edit_indi_pane_g2_ParamLimits

0x909c,	// (0x0000b16d) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00011fd7) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00011fd7) icf_edit_indi_pane_g

0x90ab,	// (0x0000b17c) icf_edit_indi_pane_t1

0x9032,	// (0x0000b103) bg_input_focus_pane_cp042

0xe9f8,	// (0x00010ac9) vtchi_button_pane

0x903b,	// (0x0000b10c) vtchi_query_pane_t1

0x9049,	// (0x0000b11a) vtchi_query_pane_t2

0x9057,	// (0x0000b128) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00011fc6) vtchi_query_pane_t

0xe1be,	// (0x0001028f) bg_button_pane_cp13

0x9065,	// (0x0000b136) vtchi_button_pane_g1

0x906d,	// (0x0000b13e) ituss_sks_pane_g1

0x9078,	// (0x0000b149) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011fcd) ituss_sks_pane_g

0x9080,	// (0x0000b151) ituss_sks_pane_t1

0x908e,	// (0x0000b15f) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00011fd2) ituss_sks_pane_t

0x4005,	// (0x000060d6) indicator_nsta_pane_cp_g1

0x400e,	// (0x000060df) indicator_nsta_pane_cp_g2

0x4016,	// (0x000060e7) indicator_nsta_pane_cp_g3

0x401e,	// (0x000060ef) indicator_nsta_pane_cp_g4

0x4026,	// (0x000060f7) indicator_nsta_pane_cp_g5

0x402e,	// (0x000060ff) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00011b7f) indicator_nsta_pane_cp_g

0xd74a,	// (0x0000f81b) cell_graphic2_pane_t2_ParamLimits

0xd74a,	// (0x0000f81b) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00011e8c) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00011e8c) cell_graphic2_pane_t

0xd780,	// (0x0000f851) cell_graphic2_control_pane_t1

0xa7f1,	// (0x0000c8c2) signal_pane_g3_ParamLimits

0xa7f1,	// (0x0000c8c2) signal_pane_g3

0xa805,	// (0x0000c8d6) signal_pane_g4_ParamLimits

0xa805,	// (0x0000c8d6) signal_pane_g4

0x8d5b,	// (0x0000ae2c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8d5b,	// (0x0000ae2c) cell_ai5_widget_list_row_pane_t3

0x8ed4,	// (0x0000afa5) cell_ituss_key_pane_t1_ParamLimits

0x8ed4,	// (0x0000afa5) cell_ituss_key_pane_t1

0x199f,	// (0x00003a70) form_field_data_wide_pane_vc_t2_ParamLimits

0x199f,	// (0x00003a70) form_field_data_wide_pane_vc_t2

0x19b3,	// (0x00003a84) form_field_data_wide_pane_vc_t3_ParamLimits

0x19b3,	// (0x00003a84) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fe,	// (0x000118cf) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fe,	// (0x000118cf) form_field_data_wide_pane_vc_t

0x3cb0,	// (0x00005d81) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3cb0,	// (0x00005d81) form_field_slider_wide_pane_vc_t3

0x3d86,	// (0x00005e57) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3d86,	// (0x00005e57) form_field_popup_wide_pane_vc_t2

0x3d9d,	// (0x00005e6e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d9d,	// (0x00005e6e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x00011b6e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x00011b6e) form_field_popup_wide_pane_vc_t

0xdd6c,	// (0x0000fe3d) aid_fshwr2_btn_pane_ParamLimits

0xdd7d,	// (0x0000fe4e) aid_fshwr2_syb_pane_ParamLimits

0xdd8e,	// (0x0000fe5f) aid_fshwr2_txt_pane_ParamLimits

0xeb45,	// (0x00010c16) fshwr2_bg_pane_ParamLimits

0xdd9a,	// (0x0000fe6b) fshwr2_func_candi_pane_ParamLimits

0xddbb,	// (0x0000fe8c) fshwr2_hwr_syb_pane_ParamLimits

0xddd8,	// (0x0000fea9) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
