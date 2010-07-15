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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f424 };

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
0xd06f,	// (0x0002c493) Screen

0xd07b,	// (0x0002c49f) application_window_ParamLimits

0xd07b,	// (0x0002c49f) application_window

0x3679,	// (0x00022a9d) screen_g1

0xbfbd,	// (0x0002b3e1) area_bottom_pane_ParamLimits

0xbfbd,	// (0x0002b3e1) area_bottom_pane

0x13c5,	// (0x000207e9) area_top_pane_ParamLimits

0x13c5,	// (0x000207e9) area_top_pane

0x1459,	// (0x0002087d) main_pane_ParamLimits

0x1459,	// (0x0002087d) main_pane

0x3683,	// (0x00022aa7) misc_graphics

0xd7b7,	// (0x0002cbdb) battery_pane_ParamLimits

0xd7b7,	// (0x0002cbdb) battery_pane

0x5d41,	// (0x00025165) bg_status_flat_pane_g8

0x5d49,	// (0x0002516d) bg_status_flat_pane_g9

0x5123,	// (0x00024547) context_pane_ParamLimits

0x5123,	// (0x00024547) context_pane

0xd922,	// (0x0002cd46) navi_pane_ParamLimits

0xd922,	// (0x0002cd46) navi_pane

0xd9a0,	// (0x0002cdc4) signal_pane_ParamLimits

0xd9a0,	// (0x0002cdc4) signal_pane

0x0008,

0xf86d,	// (0x0002ec91) bg_status_flat_pane_g

0xda30,	// (0x0002ce54) status_pane_g1_ParamLimits

0xda30,	// (0x0002ce54) status_pane_g1

0xda46,	// (0x0002ce6a) status_pane_g2_ParamLimits

0xda46,	// (0x0002ce6a) status_pane_g2

0x534a,	// (0x0002476e) status_pane_g3_ParamLimits

0x534a,	// (0x0002476e) status_pane_g3

0x0004,

0xf7a0,	// (0x0002ebc4) status_pane_g_ParamLimits

0xf7a0,	// (0x0002ebc4) status_pane_g

0xda52,	// (0x0002ce76) title_pane_ParamLimits

0xda52,	// (0x0002ce76) title_pane

0xdab5,	// (0x0002ced9) uni_indicator_pane_ParamLimits

0xdab5,	// (0x0002ced9) uni_indicator_pane

0x4f91,	// (0x000243b5) bg_list_pane_ParamLimits

0x4f91,	// (0x000243b5) bg_list_pane

0xd72a,	// (0x0002cb4e) find_pane

0x5549,	// (0x0002496d) listscroll_app_pane_ParamLimits

0x5549,	// (0x0002496d) listscroll_app_pane

0x4fbd,	// (0x000243e1) listscroll_form_pane

0xc31f,	// (0x0002b743) listscroll_gen_pane_ParamLimits

0xc31f,	// (0x0002b743) listscroll_gen_pane

0x1d2e,	// (0x00021152) listscroll_set_pane

0x68b7,	// (0x00025cdb) main_idle_act_pane

0x4c8d,	// (0x000240b1) main_idle_trad_pane

0x4c8d,	// (0x000240b1) main_list_empty_pane

0x4fb1,	// (0x000243d5) main_midp_pane

0x4fd7,	// (0x000243fb) main_pane_g1_ParamLimits

0x4fd7,	// (0x000243fb) main_pane_g1

0xc333,	// (0x0002b757) popup_ai_message_window_ParamLimits

0xc333,	// (0x0002b757) popup_ai_message_window

0xc3c4,	// (0x0002b7e8) popup_fep_china_uni_window_ParamLimits

0xc3c4,	// (0x0002b7e8) popup_fep_china_uni_window

0x1e38,	// (0x0002125c) popup_fep_japan_candidate_window_ParamLimits

0x1e38,	// (0x0002125c) popup_fep_japan_candidate_window

0x1e58,	// (0x0002127c) popup_fep_japan_predictive_window_ParamLimits

0x1e58,	// (0x0002127c) popup_fep_japan_predictive_window

0xc420,	// (0x0002b844) popup_find_window

0xc43d,	// (0x0002b861) popup_grid_graphic_window_ParamLimits

0xc43d,	// (0x0002b861) popup_grid_graphic_window

0x1ebf,	// (0x000212e3) popup_large_graphic_colour_window

0xc4db,	// (0x0002b8ff) popup_menu_window_ParamLimits

0xc4db,	// (0x0002b8ff) popup_menu_window

0xc6ad,	// (0x0002bad1) popup_note_image_window

0xc673,	// (0x0002ba97) popup_note_wait_window_ParamLimits

0xc673,	// (0x0002ba97) popup_note_wait_window

0xc6c5,	// (0x0002bae9) popup_note_window_ParamLimits

0xc6c5,	// (0x0002bae9) popup_note_window

0xc76b,	// (0x0002bb8f) popup_query_code_window_ParamLimits

0xc76b,	// (0x0002bb8f) popup_query_code_window

0x2107,	// (0x0002152b) popup_query_data_code_window_ParamLimits

0x2107,	// (0x0002152b) popup_query_data_code_window

0xc7a5,	// (0x0002bbc9) popup_query_data_window_ParamLimits

0xc7a5,	// (0x0002bbc9) popup_query_data_window

0xc827,	// (0x0002bc4b) popup_query_sat_info_window_ParamLimits

0xc827,	// (0x0002bc4b) popup_query_sat_info_window

0xc8be,	// (0x0002bce2) popup_snote_single_graphic_window_ParamLimits

0xc8be,	// (0x0002bce2) popup_snote_single_graphic_window

0xc8be,	// (0x0002bce2) popup_snote_single_text_window_ParamLimits

0xc8be,	// (0x0002bce2) popup_snote_single_text_window

0x218e,	// (0x000215b2) popup_sub_window_general

0x22be,	// (0x000216e2) popup_window_general_ParamLimits

0x22be,	// (0x000216e2) popup_window_general

0x4fe5,	// (0x00024409) power_save_pane

0xc1a4,	// (0x0002b5c8) control_pane_g1_ParamLimits

0xc1a4,	// (0x0002b5c8) control_pane_g1

0xc1cd,	// (0x0002b5f1) control_pane_g2_ParamLimits

0xc1cd,	// (0x0002b5f1) control_pane_g2

0x4f54,	// (0x00024378) control_pane_g3_ParamLimits

0x4f54,	// (0x00024378) control_pane_g3

0x0007,

0xf788,	// (0x0002ebac) control_pane_g_ParamLimits

0xf788,	// (0x0002ebac) control_pane_g

0xc20e,	// (0x0002b632) control_pane_t1_ParamLimits

0xc20e,	// (0x0002b632) control_pane_t1

0xc274,	// (0x0002b698) control_pane_t2_ParamLimits

0xc274,	// (0x0002b698) control_pane_t2

0x0002,

0xf799,	// (0x0002ebbd) control_pane_t_ParamLimits

0xf799,	// (0x0002ebbd) control_pane_t

0xd65c,	// (0x0002ca80) navi_navi_volume_pane_cp1

0xd664,	// (0x0002ca88) status_small_icon_pane

0x4e89,	// (0x000242ad) status_small_pane_g1_ParamLimits

0x4e89,	// (0x000242ad) status_small_pane_g1

0xd66c,	// (0x0002ca90) status_small_pane_g2_ParamLimits

0xd66c,	// (0x0002ca90) status_small_pane_g2

0xd678,	// (0x0002ca9c) status_small_pane_g3_ParamLimits

0xd678,	// (0x0002ca9c) status_small_pane_g3

0xd684,	// (0x0002caa8) status_small_pane_g4_ParamLimits

0xd684,	// (0x0002caa8) status_small_pane_g4

0xd690,	// (0x0002cab4) status_small_pane_g5_ParamLimits

0xd690,	// (0x0002cab4) status_small_pane_g5

0xd69e,	// (0x0002cac2) status_small_pane_g6_ParamLimits

0xd69e,	// (0x0002cac2) status_small_pane_g6

0x0007,

0xf777,	// (0x0002eb9b) status_small_pane_g_ParamLimits

0xf777,	// (0x0002eb9b) status_small_pane_g

0xd6cd,	// (0x0002caf1) status_small_pane_t1

0xd6ef,	// (0x0002cb13) status_small_wait_pane_ParamLimits

0xd6ef,	// (0x0002cb13) status_small_wait_pane

0xd527,	// (0x0002c94b) aid_levels_signal_ParamLimits

0xd527,	// (0x0002c94b) aid_levels_signal

0xd53f,	// (0x0002c963) signal_pane_g1_ParamLimits

0xd53f,	// (0x0002c963) signal_pane_g1

0xd55a,	// (0x0002c97e) signal_pane_g2_ParamLimits

0xd55a,	// (0x0002c97e) signal_pane_g2

0x0003,

0xf708,	// (0x0002eb2c) signal_pane_g_ParamLimits

0xf708,	// (0x0002eb2c) signal_pane_g

0x4761,	// (0x00023b85) context_pane_g1

0xd08b,	// (0x0002c4af) title_pane_g1

0xd0c2,	// (0x0002c4e6) title_pane_t1

0x372b,	// (0x00022b4f) title_pane_t2

0x3751,	// (0x00022b75) title_pane_t3

0x0002,

0xf557,	// (0x0002e97b) title_pane_t

0xdadd,	// (0x0002cf01) aid_levels_battery_ParamLimits

0xdadd,	// (0x0002cf01) aid_levels_battery

0xdb37,	// (0x0002cf5b) battery_pane_g1_ParamLimits

0xdb37,	// (0x0002cf5b) battery_pane_g1

0xdb54,	// (0x0002cf78) battery_pane_g2_ParamLimits

0xdb54,	// (0x0002cf78) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002ebcf) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002ebcf) battery_pane_g

0xdd15,	// (0x0002d139) uni_indicator_pane_g1

0xdd2a,	// (0x0002d14e) uni_indicator_pane_g2

0xdd40,	// (0x0002d164) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002ed39) uni_indicator_pane_g

0x4aff,	// (0x00023f23) navi_icon_pane_ParamLimits

0x4aff,	// (0x00023f23) navi_icon_pane

0x4a3d,	// (0x00023e61) navi_midp_pane

0x4b1b,	// (0x00023f3f) navi_navi_pane

0x4b25,	// (0x00023f49) navi_text_pane_ParamLimits

0x4b25,	// (0x00023f49) navi_text_pane

0x3679,	// (0x00022a9d) status_small_wait_pane_g1

0x3ba6,	// (0x00022fca) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002ed34) status_small_wait_pane_g

0x639c,	// (0x000257c0) navi_navi_icon_text_pane

0x63a4,	// (0x000257c8) navi_navi_pane_g1_ParamLimits

0x63a4,	// (0x000257c8) navi_navi_pane_g1

0x63b6,	// (0x000257da) navi_navi_pane_g2_ParamLimits

0x63b6,	// (0x000257da) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002ed02) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002ed02) navi_navi_pane_g

0x63c8,	// (0x000257ec) navi_navi_tabs_pane

0x63d1,	// (0x000257f5) navi_navi_text_pane

0x639c,	// (0x000257c0) navi_navi_volume_pane

0x6378,	// (0x0002579c) navi_text_pane_t1

0x636c,	// (0x00025790) navi_icon_pane_g1

0x62bf,	// (0x000256e3) navi_navi_text_pane_t1

0x2548,	// (0x0002196c) navi_navi_volume_pane_g1

0x2550,	// (0x00021974) volume_small_pane

0x6225,	// (0x00025649) navi_navi_icon_text_pane_g1

0x622d,	// (0x00025651) navi_navi_icon_text_pane_t1

0x4b1b,	// (0x00023f3f) navi_tabs_2_long_pane

0x4b1b,	// (0x00023f3f) navi_tabs_2_pane

0x4b1b,	// (0x00023f3f) navi_tabs_3_long_pane

0x4b1b,	// (0x00023f3f) navi_tabs_3_pane

0x4b1b,	// (0x00023f3f) navi_tabs_4_pane

0x2528,	// (0x0002194c) tabs_2_active_pane_ParamLimits

0x2528,	// (0x0002194c) tabs_2_active_pane

0x2538,	// (0x0002195c) tabs_2_passive_pane_ParamLimits

0x2538,	// (0x0002195c) tabs_2_passive_pane

0x24f6,	// (0x0002191a) tabs_3_active_pane_ParamLimits

0x24f6,	// (0x0002191a) tabs_3_active_pane

0x2506,	// (0x0002192a) tabs_3_passive_pane_ParamLimits

0x2506,	// (0x0002192a) tabs_3_passive_pane

0x2517,	// (0x0002193b) tabs_3_passive_pane_cp_ParamLimits

0x2517,	// (0x0002193b) tabs_3_passive_pane_cp

0x24b2,	// (0x000218d6) tabs_4_active_pane_ParamLimits

0x24b2,	// (0x000218d6) tabs_4_active_pane

0x24c3,	// (0x000218e7) tabs_4_passive_pane_ParamLimits

0x24c3,	// (0x000218e7) tabs_4_passive_pane

0x24d4,	// (0x000218f8) tabs_4_passive_pane_cp_ParamLimits

0x24d4,	// (0x000218f8) tabs_4_passive_pane_cp

0x24e5,	// (0x00021909) tabs_4_passive_pane_cp2_ParamLimits

0x24e5,	// (0x00021909) tabs_4_passive_pane_cp2

0x248e,	// (0x000218b2) tabs_2_long_active_pane_ParamLimits

0x248e,	// (0x000218b2) tabs_2_long_active_pane

0x24a0,	// (0x000218c4) tabs_2_long_passive_pane_ParamLimits

0x24a0,	// (0x000218c4) tabs_2_long_passive_pane

0x244f,	// (0x00021873) tabs_3_long_active_pane_ParamLimits

0x244f,	// (0x00021873) tabs_3_long_active_pane

0x2462,	// (0x00021886) tabs_3_long_passive_pane_ParamLimits

0x2462,	// (0x00021886) tabs_3_long_passive_pane

0x247b,	// (0x0002189f) tabs_3_long_passive_pane_cp_ParamLimits

0x247b,	// (0x0002189f) tabs_3_long_passive_pane_cp

0x23f5,	// (0x00021819) volume_small_pane_g1

0x23fe,	// (0x00021822) volume_small_pane_g2

0x2407,	// (0x0002182b) volume_small_pane_g3

0x2410,	// (0x00021834) volume_small_pane_g4

0x2419,	// (0x0002183d) volume_small_pane_g5

0x2422,	// (0x00021846) volume_small_pane_g6

0x242b,	// (0x0002184f) volume_small_pane_g7

0x2434,	// (0x00021858) volume_small_pane_g8

0x243d,	// (0x00021861) volume_small_pane_g9

0x2446,	// (0x0002186a) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002ecce) volume_small_pane_g

0x39de,	// (0x00022e02) bg_active_tab_pane_cp2_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp2

0x3771,	// (0x00022b95) tabs_3_active_pane_g1

0xd14e,	// (0x0002c572) tabs_3_active_pane_t1

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp2_ParamLimits

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp2

0x3771,	// (0x00022b95) tabs_3_passive_pane_g1

0xd14e,	// (0x0002c572) tabs_3_passive_pane_t1

0x39de,	// (0x00022e02) bg_active_tab_pane_cp3_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp3

0x378b,	// (0x00022baf) tabs_4_active_pane_g1

0xd160,	// (0x0002c584) tabs_4_active_pane_t1

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp3_ParamLimits

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp3

0x378b,	// (0x00022baf) tabs_4_1_passive_pane_g1

0xd160,	// (0x0002c584) tabs_4_1_passive_pane_t1

0x4fb1,	// (0x000243d5) list_highlight_pane_cp2

0xddc6,	// (0x0002d1ea) list_set_pane_ParamLimits

0xddc6,	// (0x0002d1ea) list_set_pane

0xde60,	// (0x0002d284) main_pane_set_t1_ParamLimits

0xde60,	// (0x0002d284) main_pane_set_t1

0xde80,	// (0x0002d2a4) main_pane_set_t2_ParamLimits

0xde80,	// (0x0002d2a4) main_pane_set_t2

0xde94,	// (0x0002d2b8) main_pane_set_t3_ParamLimits

0xde94,	// (0x0002d2b8) main_pane_set_t3

0xdea6,	// (0x0002d2ca) main_pane_set_t4_ParamLimits

0xdea6,	// (0x0002d2ca) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002ed9e) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002ed9e) main_pane_set_t

0xdeb8,	// (0x0002d2dc) setting_code_pane

0xdec2,	// (0x0002d2e6) setting_slider_graphic_pane

0xdec2,	// (0x0002d2e6) setting_slider_pane

0xdec2,	// (0x0002d2e6) setting_text_pane

0xdec2,	// (0x0002d2e6) setting_volume_pane

0x16a8,	// (0x00020acc) volume_set_pane

0x3763,	// (0x00022b87) bg_set_opt_pane_cp

0x16b0,	// (0x00020ad4) setting_slider_pane_t1

0x16c9,	// (0x00020aed) setting_slider_pane_t2

0x16e3,	// (0x00020b07) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e982) setting_slider_pane_t

0x16fb,	// (0x00020b1f) slider_set_pane

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp2

0x37a5,	// (0x00022bc9) setting_slider_graphic_pane_g1

0x1711,	// (0x00020b35) setting_slider_graphic_pane_t1

0x1721,	// (0x00020b45) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e989) setting_slider_graphic_pane_t

0x1731,	// (0x00020b55) slider_set_pane_cp

0x3683,	// (0x00022aa7) input_focus_pane_cp1

0x689e,	// (0x00025cc2) list_set_text_pane

0x3679,	// (0x00022a9d) setting_text_pane_g1

0x3683,	// (0x00022aa7) input_focus_pane_cp2

0x3679,	// (0x00022a9d) setting_code_pane_g1

0x37ae,	// (0x00022bd2) setting_code_pane_t1

0x0142,	// (0x0001f566) set_text_pane_t1_ParamLimits

0x0142,	// (0x0001f566) set_text_pane_t1

0x4050,	// (0x00023474) set_opt_bg_pane_g1

0x4058,	// (0x0002347c) set_opt_bg_pane_g2

0x6878,	// (0x00025c9c) set_opt_bg_pane_g3

0x4068,	// (0x0002348c) set_opt_bg_pane_g4

0x4070,	// (0x00023494) set_opt_bg_pane_g5

0x4078,	// (0x0002349c) set_opt_bg_pane_g6

0x6882,	// (0x00025ca6) set_opt_bg_pane_g7

0x688a,	// (0x00025cae) set_opt_bg_pane_g8

0x6894,	// (0x00025cb8) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002ed8b) set_opt_bg_pane_g

0x686b,	// (0x00025c8f) slider_set_pane_g1

0x25bd,	// (0x000219e1) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002ed7c) slider_set_pane_g

0x2559,	// (0x0002197d) volume_set_pane_g1

0x2561,	// (0x00021985) volume_set_pane_g2

0x2569,	// (0x0002198d) volume_set_pane_g3

0x2571,	// (0x00021995) volume_set_pane_g4

0x2579,	// (0x0002199d) volume_set_pane_g5

0x2581,	// (0x000219a5) volume_set_pane_g6

0x2589,	// (0x000219ad) volume_set_pane_g7

0x2591,	// (0x000219b5) volume_set_pane_g8

0x2599,	// (0x000219bd) volume_set_pane_g9

0x25a1,	// (0x000219c5) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002ed54) volume_set_pane_g

0xd172,	// (0x0002c596) indicator_pane_ParamLimits

0xd172,	// (0x0002c596) indicator_pane

0xd19a,	// (0x0002c5be) main_idle_pane_g2_ParamLimits

0xd19a,	// (0x0002c5be) main_idle_pane_g2

0xd1d2,	// (0x0002c5f6) main_pane_idle_g1_ParamLimits

0xd1d2,	// (0x0002c5f6) main_pane_idle_g1

0x37fd,	// (0x00022c21) popup_clock_digital_analogue_window_ParamLimits

0x37fd,	// (0x00022c21) popup_clock_digital_analogue_window

0xd1f9,	// (0x0002c61d) soft_indicator_pane_ParamLimits

0xd1f9,	// (0x0002c61d) soft_indicator_pane

0xd213,	// (0x0002c637) wallpaper_pane_ParamLimits

0xd213,	// (0x0002c637) wallpaper_pane

0x3679,	// (0x00022a9d) wallpaper_pane_g1

0xd225,	// (0x0002c649) indicator_pane_g1_ParamLimits

0xd225,	// (0x0002c649) indicator_pane_g1

0x6ca2,	// (0x000260c6) navi_navi_icon_text_pane_srt_g1

0x384f,	// (0x00022c73) soft_indicator_pane_t1

0x3869,	// (0x00022c8d) aid_ps_area_pane

0xd23b,	// (0x0002c65f) aid_ps_clock_pane

0x3888,	// (0x00022cac) aid_ps_indicator_pane

0x3894,	// (0x00022cb8) indicator_ps_pane_ParamLimits

0x3894,	// (0x00022cb8) indicator_ps_pane

0x38a3,	// (0x00022cc7) power_save_pane_g1_ParamLimits

0x38a3,	// (0x00022cc7) power_save_pane_g1

0x38af,	// (0x00022cd3) power_save_pane_g2_ParamLimits

0x38af,	// (0x00022cd3) power_save_pane_g2

0x12b9,	// (0x000206dd) aid_navinavi_width_pane

0x3869,	// (0x00022c8d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e98e) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e98e) power_save_pane_g

0x38bd,	// (0x00022ce1) power_save_pane_t1_ParamLimits

0x38bd,	// (0x00022ce1) power_save_pane_t1

0xd23b,	// (0x0002c65f) aid_ps_clock_pane_ParamLimits

0x3888,	// (0x00022cac) aid_ps_indicator_pane_ParamLimits

0x38cf,	// (0x00022cf3) power_save_pane_t4_ParamLimits

0x38cf,	// (0x00022cf3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e993) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e993) power_save_pane_t

0x38f9,	// (0x00022d1d) power_save_t3_ParamLimits

0x38f9,	// (0x00022d1d) power_save_t3

0x38e4,	// (0x00022d08) power_save_t2_ParamLimits

0x38e4,	// (0x00022d08) power_save_t2

0x390e,	// (0x00022d32) indicator_ps_pane_g1

0xd249,	// (0x0002c66d) ai_gene_pane_ParamLimits

0xd249,	// (0x0002c66d) ai_gene_pane

0xd260,	// (0x0002c684) ai_links_pane_ParamLimits

0xd260,	// (0x0002c684) ai_links_pane

0xd278,	// (0x0002c69c) indicator_pane_cp1_ParamLimits

0xd278,	// (0x0002c69c) indicator_pane_cp1

0xd287,	// (0x0002c6ab) main_pane_idle_g1_cp_ParamLimits

0xd287,	// (0x0002c6ab) main_pane_idle_g1_cp

0x3947,	// (0x00022d6b) popup_ai_links_title_window

0xd29f,	// (0x0002c6c3) soft_indicator_pane_cp1_ParamLimits

0xd29f,	// (0x0002c6c3) soft_indicator_pane_cp1

0x6665,	// (0x00025a89) ai_links_pane_g1

0x666e,	// (0x00025a92) grid_ai_links_pane

0xdd0c,	// (0x0002d130) ai_gene_pane_1

0x6653,	// (0x00025a77) ai_gene_pane_2

0x665c,	// (0x00025a80) list_highlight_pane_cp4

0xdce8,	// (0x0002d10c) cell_ai_link_pane_ParamLimits

0xdce8,	// (0x0002d10c) cell_ai_link_pane

0x6624,	// (0x00025a48) cell_ai_link_pane_g1

0x3ba6,	// (0x00022fca) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002ed2f) cell_ai_link_pane_g

0x3683,	// (0x00022aa7) grid_highlight_cp2

0x3683,	// (0x00022aa7) bg_popup_sub_pane_cp1

0x396a,	// (0x00022d8e) popup_ai_links_title_window_t1

0x6572,	// (0x00025996) ai_gene_pane_1_g1_ParamLimits

0x6572,	// (0x00025996) ai_gene_pane_1_g1

0x657e,	// (0x000259a2) ai_gene_pane_1_g2_ParamLimits

0x657e,	// (0x000259a2) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002ed25) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002ed25) ai_gene_pane_1_g

0x658b,	// (0x000259af) ai_gene_pane_1_t1_ParamLimits

0x658b,	// (0x000259af) ai_gene_pane_1_t1

0x65bf,	// (0x000259e3) grid_ai_soft_ind_pane

0x655d,	// (0x00025981) ai_gene_pane_2_t1_ParamLimits

0x655d,	// (0x00025981) ai_gene_pane_2_t1

0xd2b3,	// (0x0002c6d7) main_pane_empty_t1_ParamLimits

0xd2b3,	// (0x0002c6d7) main_pane_empty_t1

0xd2cb,	// (0x0002c6ef) main_pane_empty_t2_ParamLimits

0xd2cb,	// (0x0002c6ef) main_pane_empty_t2

0xd2e0,	// (0x0002c704) main_pane_empty_t3_ParamLimits

0xd2e0,	// (0x0002c704) main_pane_empty_t3

0xd2f2,	// (0x0002c716) main_pane_empty_t4_ParamLimits

0xd2f2,	// (0x0002c716) main_pane_empty_t4

0xd304,	// (0x0002c728) main_pane_empty_t5_ParamLimits

0xd304,	// (0x0002c728) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e998) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e998) main_pane_empty_t

0x40a1,	// (0x000234c5) bg_popup_window_pane_ParamLimits

0x40a1,	// (0x000234c5) bg_popup_window_pane

0x62cd,	// (0x000256f1) find_popup_pane_cp2_ParamLimits

0x62cd,	// (0x000256f1) find_popup_pane_cp2

0x62d9,	// (0x000256fd) heading_pane_ParamLimits

0x62d9,	// (0x000256fd) heading_pane

0x3683,	// (0x00022aa7) bg_popup_sub_pane

0xdc69,	// (0x0002d08d) bg_popup_window_pane_g1_ParamLimits

0xdc69,	// (0x0002d08d) bg_popup_window_pane_g1

0xdc78,	// (0x0002d09c) bg_popup_window_pane_g2_ParamLimits

0xdc78,	// (0x0002d09c) bg_popup_window_pane_g2

0xdc84,	// (0x0002d0a8) bg_popup_window_pane_g3_ParamLimits

0xdc84,	// (0x0002d0a8) bg_popup_window_pane_g3

0xdc90,	// (0x0002d0b4) bg_popup_window_pane_g4_ParamLimits

0xdc90,	// (0x0002d0b4) bg_popup_window_pane_g4

0xdc9f,	// (0x0002d0c3) bg_popup_window_pane_g5_ParamLimits

0xdc9f,	// (0x0002d0c3) bg_popup_window_pane_g5

0xdcaf,	// (0x0002d0d3) bg_popup_window_pane_g6_ParamLimits

0xdcaf,	// (0x0002d0d3) bg_popup_window_pane_g6

0xdcbb,	// (0x0002d0df) bg_popup_window_pane_g7_ParamLimits

0xdcbb,	// (0x0002d0df) bg_popup_window_pane_g7

0xdcca,	// (0x0002d0ee) bg_popup_window_pane_g8_ParamLimits

0xdcca,	// (0x0002d0ee) bg_popup_window_pane_g8

0xdcd9,	// (0x0002d0fd) bg_popup_window_pane_g9_ParamLimits

0xdcd9,	// (0x0002d0fd) bg_popup_window_pane_g9

0x62b3,	// (0x000256d7) bg_popup_window_pane_g10_ParamLimits

0x62b3,	// (0x000256d7) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002eced) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002eced) bg_popup_window_pane_g

0x61dc,	// (0x00025600) bg_popup_heading_pane_ParamLimits

0x61dc,	// (0x00025600) bg_popup_heading_pane

0x2645,	// (0x00021a69) tabs_4_passive_pane_cp_srt_ParamLimits

0x2645,	// (0x00021a69) tabs_4_passive_pane_cp_srt

0x2657,	// (0x00021a7b) tabs_4_passive_pane_srt_ParamLimits

0x61f0,	// (0x00025614) heading_pane_g2

0x2657,	// (0x00021a7b) tabs_4_passive_pane_srt

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp3_srt

0x61f8,	// (0x0002561c) heading_pane_t1_ParamLimits

0x61f8,	// (0x0002561c) heading_pane_t1

0x620f,	// (0x00025633) heading_pane_t2_ParamLimits

0x620f,	// (0x00025633) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002ece8) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002ece8) heading_pane_t

0x5d09,	// (0x0002512d) bg_popup_heading_pane_g1

0x5db8,	// (0x000251dc) bg_popup_heading_pane_g2

0x5dc2,	// (0x000251e6) bg_popup_heading_pane_g3

0x5dcc,	// (0x000251f0) bg_popup_heading_pane_g4

0x5dd6,	// (0x000251fa) bg_popup_heading_pane_g5

0x5de0,	// (0x00025204) bg_popup_heading_pane_g6

0x5de8,	// (0x0002520c) bg_popup_heading_pane_g7

0x5df0,	// (0x00025214) bg_popup_heading_pane_g8

0x5dfa,	// (0x0002521e) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002eca4) bg_popup_heading_pane_g

0x54d5,	// (0x000248f9) bg_popup_sub_pane_g1

0x54dd,	// (0x00024901) bg_popup_sub_pane_g2

0x54e5,	// (0x00024909) bg_popup_sub_pane_g3

0x54ed,	// (0x00024911) bg_popup_sub_pane_g4

0x54f5,	// (0x00024919) bg_popup_sub_pane_g5

0x54fd,	// (0x00024921) bg_popup_sub_pane_g6

0x5505,	// (0x00024929) bg_popup_sub_pane_g7

0x550d,	// (0x00024931) bg_popup_sub_pane_g8

0x5515,	// (0x00024939) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002ec7e) bg_popup_sub_pane_g

0x39de,	// (0x00022e02) bg_popup_window_pane_cp5_ParamLimits

0x39de,	// (0x00022e02) bg_popup_window_pane_cp5

0x39fa,	// (0x00022e1e) popup_note_window_g1_ParamLimits

0x39fa,	// (0x00022e1e) popup_note_window_g1

0x3a06,	// (0x00022e2a) popup_note_window_t1_ParamLimits

0x3a06,	// (0x00022e2a) popup_note_window_t1

0x3a1c,	// (0x00022e40) popup_note_window_t2_ParamLimits

0x3a1c,	// (0x00022e40) popup_note_window_t2

0x3a32,	// (0x00022e56) popup_note_window_t3_ParamLimits

0x3a32,	// (0x00022e56) popup_note_window_t3

0x3a48,	// (0x00022e6c) popup_note_window_t4_ParamLimits

0x3a48,	// (0x00022e6c) popup_note_window_t4

0x3a70,	// (0x00022e94) popup_note_window_t5_ParamLimits

0x3a70,	// (0x00022e94) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e9a3) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e9a3) popup_note_window_t

0x3aba,	// (0x00022ede) bg_popup_window_pane_cp6_ParamLimits

0x3aba,	// (0x00022ede) bg_popup_window_pane_cp6

0x5c85,	// (0x000250a9) popup_note_image_window_g1_ParamLimits

0x5c85,	// (0x000250a9) popup_note_image_window_g1

0x5c91,	// (0x000250b5) popup_note_image_window_g2_ParamLimits

0x5c91,	// (0x000250b5) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002ec72) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002ec72) popup_note_image_window_g

0x5caa,	// (0x000250ce) popup_note_image_window_t1_ParamLimits

0x5caa,	// (0x000250ce) popup_note_image_window_t1

0x5cc3,	// (0x000250e7) popup_note_image_window_t2_ParamLimits

0x5cc3,	// (0x000250e7) popup_note_image_window_t2

0x5cdc,	// (0x00025100) popup_note_image_window_t3_ParamLimits

0x5cdc,	// (0x00025100) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002ec77) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002ec77) popup_note_image_window_t

0x5b46,	// (0x00024f6a) bg_popup_window_pane_cp7_ParamLimits

0x5b46,	// (0x00024f6a) bg_popup_window_pane_cp7

0x5b76,	// (0x00024f9a) popup_note_wait_window_g1_ParamLimits

0x5b76,	// (0x00024f9a) popup_note_wait_window_g1

0x5b82,	// (0x00024fa6) popup_note_wait_window_g2_ParamLimits

0x5b82,	// (0x00024fa6) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002ec60) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002ec60) popup_note_wait_window_g

0x5b9a,	// (0x00024fbe) popup_note_wait_window_t1_ParamLimits

0x5b9a,	// (0x00024fbe) popup_note_wait_window_t1

0x5bc1,	// (0x00024fe5) popup_note_wait_window_t2_ParamLimits

0x5bc1,	// (0x00024fe5) popup_note_wait_window_t2

0x5bde,	// (0x00025002) popup_note_wait_window_t3_ParamLimits

0x5bde,	// (0x00025002) popup_note_wait_window_t3

0x5bf1,	// (0x00025015) popup_note_wait_window_t4_ParamLimits

0x5bf1,	// (0x00025015) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002ec67) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002ec67) popup_note_wait_window_t

0x5c16,	// (0x0002503a) wait_bar_pane_ParamLimits

0x5c16,	// (0x0002503a) wait_bar_pane

0x3683,	// (0x00022aa7) wait_anim_pane

0x3683,	// (0x00022aa7) wait_border_pane

0x3679,	// (0x00022a9d) wait_anim_pane_g1

0x3679,	// (0x00022a9d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002eb27) wait_anim_pane_g

0x5aea,	// (0x00024f0e) wait_border_pane_g1

0x5af5,	// (0x00024f19) wait_border_pane_g2

0x5afe,	// (0x00024f22) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002ec59) wait_border_pane_g

0x5955,	// (0x00024d79) bg_popup_window_pane_cp16_ParamLimits

0x5955,	// (0x00024d79) bg_popup_window_pane_cp16

0x5a55,	// (0x00024e79) indicator_popup_pane_cp4_ParamLimits

0x5a55,	// (0x00024e79) indicator_popup_pane_cp4

0x5a69,	// (0x00024e8d) popup_query_data_window_t1_ParamLimits

0x5a69,	// (0x00024e8d) popup_query_data_window_t1

0x5a7b,	// (0x00024e9f) popup_query_data_window_t2_ParamLimits

0x5a7b,	// (0x00024e9f) popup_query_data_window_t2

0x5a94,	// (0x00024eb8) popup_query_data_window_t3_ParamLimits

0x5a94,	// (0x00024eb8) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002ec52) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002ec52) popup_query_data_window_t

0x5aae,	// (0x00024ed2) query_popup_data_pane_ParamLimits

0x5aae,	// (0x00024ed2) query_popup_data_pane

0x5ac2,	// (0x00024ee6) query_popup_data_pane_cp1_ParamLimits

0x5ac2,	// (0x00024ee6) query_popup_data_pane_cp1

0x5955,	// (0x00024d79) bg_popup_window_pane_cp10_ParamLimits

0x5955,	// (0x00024d79) bg_popup_window_pane_cp10

0x5987,	// (0x00024dab) indicator_popup_pane_ParamLimits

0x5987,	// (0x00024dab) indicator_popup_pane

0x59a9,	// (0x00024dcd) popup_query_code_window_t1_ParamLimits

0x59a9,	// (0x00024dcd) popup_query_code_window_t1

0x59c3,	// (0x00024de7) popup_query_code_window_t2_ParamLimits

0x59c3,	// (0x00024de7) popup_query_code_window_t2

0x5a0c,	// (0x00024e30) popup_query_code_window_t3_ParamLimits

0x5a0c,	// (0x00024e30) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002ec4b) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002ec4b) popup_query_code_window_t

0x5a3b,	// (0x00024e5f) query_popup_pane_ParamLimits

0x5a3b,	// (0x00024e5f) query_popup_pane

0x3aba,	// (0x00022ede) bg_popup_window_pane_cp15_ParamLimits

0x3aba,	// (0x00022ede) bg_popup_window_pane_cp15

0x3ad8,	// (0x00022efc) indicator_popup_pane_cp1_ParamLimits

0x3ad8,	// (0x00022efc) indicator_popup_pane_cp1

0x3aeb,	// (0x00022f0f) indicator_popup_pane_cp2_ParamLimits

0x3aeb,	// (0x00022f0f) indicator_popup_pane_cp2

0x3afe,	// (0x00022f22) popup_query_data_code_window_g1_ParamLimits

0x3afe,	// (0x00022f22) popup_query_data_code_window_g1

0x3b11,	// (0x00022f35) popup_query_data_code_window_t1_ParamLimits

0x3b11,	// (0x00022f35) popup_query_data_code_window_t1

0x3b23,	// (0x00022f47) popup_query_data_code_window_t2_ParamLimits

0x3b23,	// (0x00022f47) popup_query_data_code_window_t2

0x3b35,	// (0x00022f59) popup_query_data_code_window_t3_ParamLimits

0x3b35,	// (0x00022f59) popup_query_data_code_window_t3

0x3b4b,	// (0x00022f6f) popup_query_data_code_window_t4_ParamLimits

0x3b4b,	// (0x00022f6f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e9ae) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e9ae) popup_query_data_code_window_t

0x2328,	// (0x0002174c) list_single_midp_graphic_pane_g3

0x3b63,	// (0x00022f87) query_popup_data_pane_cp2_ParamLimits

0x3b76,	// (0x00022f9a) query_popup_pane_cp2_ParamLimits

0x3b76,	// (0x00022f9a) query_popup_pane_cp2

0x3683,	// (0x00022aa7) bg_popup_window_pane_cp11

0x5941,	// (0x00024d65) heading_pane_cp5

0x3c61,	// (0x00023085) listscroll_popup_info_pane

0x3683,	// (0x00022aa7) input_focus_pane_cp3

0x3b89,	// (0x00022fad) query_popup_pane_t1

0x3b97,	// (0x00022fbb) list_popup_info_pane_ParamLimits

0x3b97,	// (0x00022fbb) list_popup_info_pane

0x3ba6,	// (0x00022fca) listscroll_popup_info_pane_g1

0x3bae,	// (0x00022fd2) scroll_pane_cp7

0x3bb8,	// (0x00022fdc) popup_info_list_pane_t1_ParamLimits

0x3bb8,	// (0x00022fdc) popup_info_list_pane_t1

0x3bd2,	// (0x00022ff6) popup_info_list_pane_t2_ParamLimits

0x3bd2,	// (0x00022ff6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e9b7) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e9b7) popup_info_list_pane_t

0x3683,	// (0x00022aa7) bg_popup_window_pane_cp12

0x6cbc,	// (0x000260e0) find_popup_pane

0x3763,	// (0x00022b87) bg_popup_window_pane_cp3

0x3bec,	// (0x00023010) heading_pane_cp3

0x3bf8,	// (0x0002301c) listscroll_popup_graphic_pane

0x3683,	// (0x00022aa7) bg_popup_window_pane_cp4

0xd366,	// (0x0002c78a) heading_pane_cp4

0x3c61,	// (0x00023085) listscroll_popup_colour_pane

0x3c69,	// (0x0002308d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c69,	// (0x0002308d) cell_large_graphic_colour_none_popup_pane

0xd36e,	// (0x0002c792) grid_large_graphic_colour_popup_pane_ParamLimits

0xd36e,	// (0x0002c792) grid_large_graphic_colour_popup_pane

0x3ca9,	// (0x000230cd) listscroll_popup_colour_pane_g1_ParamLimits

0x3ca9,	// (0x000230cd) listscroll_popup_colour_pane_g1

0x3cc0,	// (0x000230e4) listscroll_popup_colour_pane_g2_ParamLimits

0x3cc0,	// (0x000230e4) listscroll_popup_colour_pane_g2

0x3cd7,	// (0x000230fb) listscroll_popup_colour_pane_g3_ParamLimits

0x3cd7,	// (0x000230fb) listscroll_popup_colour_pane_g3

0xd392,	// (0x0002c7b6) listscroll_popup_colour_pane_g4_ParamLimits

0xd392,	// (0x0002c7b6) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e9bc) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e9bc) listscroll_popup_colour_pane_g

0x3cfb,	// (0x0002311f) scroll_pane_cp6_ParamLimits

0x3cfb,	// (0x0002311f) scroll_pane_cp6

0xd3a2,	// (0x0002c7c6) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3a2,	// (0x0002c7c6) cell_large_graphic_colour_popup_pane

0x3d2c,	// (0x00023150) cell_large_graphic_colour_none_popup_pane_t1

0x3683,	// (0x00022aa7) grid_highlight_pane_cp5

0x3d3b,	// (0x0002315f) cell_large_graphic_colour_popup_pane_g1

0x3d43,	// (0x00023167) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e9c5) cell_large_graphic_colour_popup_pane_g

0x3d4b,	// (0x0002316f) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d54,	// (0x00023178) grid_highlight_pane_cp4

0x3d5c,	// (0x00023180) bg_popup_window_pane_cp8_ParamLimits

0x3d5c,	// (0x00023180) bg_popup_window_pane_cp8

0x3d77,	// (0x0002319b) popup_snote_single_text_window_g1_ParamLimits

0x3d77,	// (0x0002319b) popup_snote_single_text_window_g1

0x3d89,	// (0x000231ad) popup_snote_single_text_window_t1_ParamLimits

0x3d89,	// (0x000231ad) popup_snote_single_text_window_t1

0x3d9c,	// (0x000231c0) popup_snote_single_text_window_t2_ParamLimits

0x3d9c,	// (0x000231c0) popup_snote_single_text_window_t2

0x3daf,	// (0x000231d3) popup_snote_single_text_window_t3_ParamLimits

0x3daf,	// (0x000231d3) popup_snote_single_text_window_t3

0x3de8,	// (0x0002320c) popup_snote_single_text_window_t4_ParamLimits

0x3de8,	// (0x0002320c) popup_snote_single_text_window_t4

0x3e1c,	// (0x00023240) popup_snote_single_text_window_t5_ParamLimits

0x3e1c,	// (0x00023240) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e9ca) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e9ca) popup_snote_single_text_window_t

0x3e4b,	// (0x0002326f) bg_popup_window_pane_cp9_ParamLimits

0x3e4b,	// (0x0002326f) bg_popup_window_pane_cp9

0x3d77,	// (0x0002319b) popup_snote_single_graphic_window_g1_ParamLimits

0x3d77,	// (0x0002319b) popup_snote_single_graphic_window_g1

0x3e59,	// (0x0002327d) popup_snote_single_graphic_window_g2_ParamLimits

0x3e59,	// (0x0002327d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e9d5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e9d5) popup_snote_single_graphic_window_g

0x3e65,	// (0x00023289) popup_snote_single_graphic_window_t1_ParamLimits

0x3e65,	// (0x00023289) popup_snote_single_graphic_window_t1

0x3e78,	// (0x0002329c) popup_snote_single_graphic_window_t2_ParamLimits

0x3e78,	// (0x0002329c) popup_snote_single_graphic_window_t2

0x3e8b,	// (0x000232af) popup_snote_single_graphic_window_t3_ParamLimits

0x3e8b,	// (0x000232af) popup_snote_single_graphic_window_t3

0x3ec4,	// (0x000232e8) popup_snote_single_graphic_window_t4_ParamLimits

0x3ec4,	// (0x000232e8) popup_snote_single_graphic_window_t4

0x3ef8,	// (0x0002331c) popup_snote_single_graphic_window_t5_ParamLimits

0x3ef8,	// (0x0002331c) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e9da) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e9da) popup_snote_single_graphic_window_t

0x6bfe,	// (0x00026022) grid_graphic_popup_pane_ParamLimits

0x6bfe,	// (0x00026022) grid_graphic_popup_pane

0x6c28,	// (0x0002604c) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c28,	// (0x0002604c) listscroll_popup_graphic_pane_g1

0xdfd1,	// (0x0002d3f5) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfd1,	// (0x0002d3f5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002edc8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002edc8) listscroll_popup_graphic_pane_g

0x6c50,	// (0x00026074) scroll_pane_cp5

0xdf76,	// (0x0002d39a) cell_graphic_popup_pane_ParamLimits

0xdf76,	// (0x0002d39a) cell_graphic_popup_pane

0x6b7e,	// (0x00025fa2) cell_graphic_popup_pane_g1

0x6b86,	// (0x00025faa) cell_graphic_popup_pane_g2

0x3d4b,	// (0x0002316f) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002edc1) cell_graphic_popup_pane_g

0x6b8f,	// (0x00025fb3) cell_graphic_popup_pane_t2

0x3d54,	// (0x00023178) grid_highlight_pane_cp3

0x3f39,	// (0x0002335d) list_gen_pane_ParamLimits

0x3f39,	// (0x0002335d) list_gen_pane

0x3f6b,	// (0x0002338f) scroll_pane

0xdf2d,	// (0x0002d351) bg_list_pane_g1_ParamLimits

0xdf2d,	// (0x0002d351) bg_list_pane_g1

0x6af3,	// (0x00025f17) bg_list_pane_g2_ParamLimits

0x6af3,	// (0x00025f17) bg_list_pane_g2

0x6b08,	// (0x00025f2c) bg_list_pane_g3_ParamLimits

0x6b08,	// (0x00025f2c) bg_list_pane_g3

0x6b1c,	// (0x00025f40) bg_list_pane_g4_ParamLimits

0x6b1c,	// (0x00025f40) bg_list_pane_g4

0xdf4a,	// (0x0002d36e) bg_list_pane_g5_ParamLimits

0xdf4a,	// (0x0002d36e) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002edb6) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002edb6) bg_list_pane_g

0xdef5,	// (0x0002d319) list_double2_graphic_large_graphic_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double2_graphic_large_graphic_pane

0xdef5,	// (0x0002d319) list_double2_graphic_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double2_graphic_pane

0xdef5,	// (0x0002d319) list_double2_large_graphic_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double2_large_graphic_pane

0xdef5,	// (0x0002d319) list_double2_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double2_pane

0xdef5,	// (0x0002d319) list_double_graphic_heading_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_graphic_heading_pane

0xdef5,	// (0x0002d319) list_double_graphic_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_graphic_pane

0xdef5,	// (0x0002d319) list_double_heading_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_heading_pane

0xdef5,	// (0x0002d319) list_double_large_graphic_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_large_graphic_pane

0xdef5,	// (0x0002d319) list_double_number_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_number_pane

0xdef5,	// (0x0002d319) list_double_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_pane

0xdef5,	// (0x0002d319) list_double_time_pane_ParamLimits

0xdef5,	// (0x0002d319) list_double_time_pane

0xdef5,	// (0x0002d319) list_setting_number_pane_ParamLimits

0xdef5,	// (0x0002d319) list_setting_number_pane

0xdef5,	// (0x0002d319) list_setting_pane_ParamLimits

0xdef5,	// (0x0002d319) list_setting_pane

0xdf07,	// (0x0002d32b) list_single_2graphic_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_2graphic_pane

0xdf07,	// (0x0002d32b) list_single_graphic_heading_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_graphic_heading_pane

0xdf07,	// (0x0002d32b) list_single_graphic_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_graphic_pane

0xdf07,	// (0x0002d32b) list_single_heading_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_heading_pane

0xdf07,	// (0x0002d32b) list_single_large_graphic_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_large_graphic_pane

0xdf07,	// (0x0002d32b) list_single_number_heading_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_number_heading_pane

0xdf07,	// (0x0002d32b) list_single_number_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_number_pane

0xdf07,	// (0x0002d32b) list_single_pane_ParamLimits

0xdf07,	// (0x0002d32b) list_single_pane

0x3683,	// (0x00022aa7) list_highlight_pane_cp1

0x091f,	// (0x0001fd43) list_single_pane_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_pane_g1

0x092b,	// (0x0001fd4f) list_single_pane_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_pane_g

0x0c4f,	// (0x00020073) list_single_pane_t1_ParamLimits

0x0c4f,	// (0x00020073) list_single_pane_t1

0x091f,	// (0x0001fd43) list_single_number_pane_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_number_pane_g1

0x092b,	// (0x0001fd4f) list_single_number_pane_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_number_pane_g

0x097d,	// (0x0001fda1) list_single_number_pane_t1_ParamLimits

0x097d,	// (0x0001fda1) list_single_number_pane_t1

0xbd14,	// (0x0002b138) list_single_number_pane_t2_ParamLimits

0xbd14,	// (0x0002b138) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002ed77) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002ed77) list_single_number_pane_t

0xb710,	// (0x0002ab34) list_single_graphic_pane_g1_ParamLimits

0xb710,	// (0x0002ab34) list_single_graphic_pane_g1

0x091f,	// (0x0001fd43) list_single_graphic_pane_g2_ParamLimits

0x091f,	// (0x0001fd43) list_single_graphic_pane_g2

0x092b,	// (0x0001fd4f) list_single_graphic_pane_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e9e5) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e9e5) list_single_graphic_pane_g

0xb71c,	// (0x0002ab40) list_single_graphic_pane_t1_ParamLimits

0xb71c,	// (0x0002ab40) list_single_graphic_pane_t1

0x091f,	// (0x0001fd43) list_single_heading_pane_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_heading_pane_g1

0x092b,	// (0x0001fd4f) list_single_heading_pane_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_heading_pane_g

0xb732,	// (0x0002ab56) list_single_heading_pane_t1_ParamLimits

0xb732,	// (0x0002ab56) list_single_heading_pane_t1

0xb748,	// (0x0002ab6c) list_single_heading_pane_t2_ParamLimits

0xb748,	// (0x0002ab6c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e9f1) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e9f1) list_single_heading_pane_t

0x091f,	// (0x0001fd43) list_single_number_heading_pane_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_number_heading_pane_g1

0x092b,	// (0x0001fd4f) list_single_number_heading_pane_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_number_heading_pane_g

0xb732,	// (0x0002ab56) list_single_number_heading_pane_t1_ParamLimits

0xb732,	// (0x0002ab56) list_single_number_heading_pane_t1

0x0c03,	// (0x00020027) list_single_number_heading_pane_t2_ParamLimits

0x0c03,	// (0x00020027) list_single_number_heading_pane_t2

0x0c15,	// (0x00020039) list_single_number_heading_pane_t3_ParamLimits

0x0c15,	// (0x00020039) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e9f6) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e9f6) list_single_number_heading_pane_t

0x0913,	// (0x0001fd37) list_single_graphic_heading_pane_g1_ParamLimits

0x0913,	// (0x0001fd37) list_single_graphic_heading_pane_g1

0xb75a,	// (0x0002ab7e) list_single_graphic_heading_pane_g4_ParamLimits

0xb75a,	// (0x0002ab7e) list_single_graphic_heading_pane_g4

0x092b,	// (0x0001fd4f) list_single_graphic_heading_pane_g5_ParamLimits

0x092b,	// (0x0001fd4f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e9fd) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e9fd) list_single_graphic_heading_pane_g

0xb732,	// (0x0002ab56) list_single_graphic_heading_pane_t1_ParamLimits

0xb732,	// (0x0002ab56) list_single_graphic_heading_pane_t1

0xb76b,	// (0x0002ab8f) list_single_graphic_heading_pane_t2_ParamLimits

0xb76b,	// (0x0002ab8f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002ea04) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002ea04) list_single_graphic_heading_pane_t

0x0c65,	// (0x00020089) list_single_large_graphic_pane_g1_ParamLimits

0x0c65,	// (0x00020089) list_single_large_graphic_pane_g1

0x091f,	// (0x0001fd43) list_single_large_graphic_pane_g2_ParamLimits

0x091f,	// (0x0001fd43) list_single_large_graphic_pane_g2

0x092b,	// (0x0001fd4f) list_single_large_graphic_pane_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002ea09) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002ea09) list_single_large_graphic_pane_g

0x5af5,	// (0x00024f19) wait_border_pane_g2_copy1

0xb77d,	// (0x0002aba1) list_single_large_graphic_pane_g4_cp2

0x0c71,	// (0x00020095) list_single_large_graphic_pane_t1_ParamLimits

0x0c71,	// (0x00020095) list_single_large_graphic_pane_t1

0xb785,	// (0x0002aba9) list_double_pane_g1_ParamLimits

0xb785,	// (0x0002aba9) list_double_pane_g1

0xb791,	// (0x0002abb5) list_double_pane_g2_ParamLimits

0xb791,	// (0x0002abb5) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002ea10) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002ea10) list_double_pane_g

0xb79d,	// (0x0002abc1) list_double_pane_t1_ParamLimits

0xb79d,	// (0x0002abc1) list_double_pane_t1

0xb7b3,	// (0x0002abd7) list_double_pane_t2_ParamLimits

0xb7b3,	// (0x0002abd7) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002ea15) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002ea15) list_double_pane_t

0xb7c5,	// (0x0002abe9) list_double2_pane_g1_ParamLimits

0xb7c5,	// (0x0002abe9) list_double2_pane_g1

0xb7d6,	// (0x0002abfa) list_double2_pane_g2_ParamLimits

0xb7d6,	// (0x0002abfa) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002ea1a) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002ea1a) list_double2_pane_g

0xb7e2,	// (0x0002ac06) list_double2_pane_t1_ParamLimits

0xb7e2,	// (0x0002ac06) list_double2_pane_t1

0xb7f8,	// (0x0002ac1c) list_double2_pane_t2_ParamLimits

0xb7f8,	// (0x0002ac1c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002ea1f) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002ea1f) list_double2_pane_t

0xb785,	// (0x0002aba9) list_double_number_pane_g1_ParamLimits

0xb785,	// (0x0002aba9) list_double_number_pane_g1

0xb791,	// (0x0002abb5) list_double_number_pane_g2_ParamLimits

0xb791,	// (0x0002abb5) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002ea10) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002ea10) list_double_number_pane_g

0xb80a,	// (0x0002ac2e) list_double_number_pane_t1_ParamLimits

0xb80a,	// (0x0002ac2e) list_double_number_pane_t1

0xb81c,	// (0x0002ac40) list_double_number_pane_t2_ParamLimits

0xb81c,	// (0x0002ac40) list_double_number_pane_t2

0xb832,	// (0x0002ac56) list_double_number_pane_t3_ParamLimits

0xb832,	// (0x0002ac56) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002ea24) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002ea24) list_double_number_pane_t

0xb844,	// (0x0002ac68) list_double_graphic_pane_g1_ParamLimits

0xb844,	// (0x0002ac68) list_double_graphic_pane_g1

0xb850,	// (0x0002ac74) list_double_graphic_pane_g2_ParamLimits

0xb850,	// (0x0002ac74) list_double_graphic_pane_g2

0xb85f,	// (0x0002ac83) list_double_graphic_pane_g3_ParamLimits

0xb85f,	// (0x0002ac83) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002ea2b) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002ea2b) list_double_graphic_pane_g

0xb877,	// (0x0002ac9b) list_double_graphic_pane_t1_ParamLimits

0xb877,	// (0x0002ac9b) list_double_graphic_pane_t1

0xb88d,	// (0x0002acb1) list_double_graphic_pane_t2_ParamLimits

0xb88d,	// (0x0002acb1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002ea34) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002ea34) list_double_graphic_pane_t

0x048b,	// (0x0001f8af) list_double2_graphic_pane_g1_ParamLimits

0x048b,	// (0x0001f8af) list_double2_graphic_pane_g1

0x0f26,	// (0x0002034a) list_double2_graphic_pane_g2_ParamLimits

0x0f26,	// (0x0002034a) list_double2_graphic_pane_g2

0xb7d6,	// (0x0002abfa) list_double2_graphic_pane_g3_ParamLimits

0xb7d6,	// (0x0002abfa) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002ea39) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002ea39) list_double2_graphic_pane_g

0xb89f,	// (0x0002acc3) list_double2_graphic_pane_t1_ParamLimits

0xb89f,	// (0x0002acc3) list_double2_graphic_pane_t1

0xb8b5,	// (0x0002acd9) list_double2_graphic_pane_t2_ParamLimits

0xb8b5,	// (0x0002acd9) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002ea40) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002ea40) list_double2_graphic_pane_t

0xb8c7,	// (0x0002aceb) list_double_large_graphic_pane_g1_ParamLimits

0xb8c7,	// (0x0002aceb) list_double_large_graphic_pane_g1

0xb8e6,	// (0x0002ad0a) list_double_large_graphic_pane_g2_ParamLimits

0xb8e6,	// (0x0002ad0a) list_double_large_graphic_pane_g2

0xb791,	// (0x0002abb5) list_double_large_graphic_pane_g3_ParamLimits

0xb791,	// (0x0002abb5) list_double_large_graphic_pane_g3

0xb8f7,	// (0x0002ad1b) list_double_large_graphic_pane_g4_ParamLimits

0xb8f7,	// (0x0002ad1b) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ea45) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ea45) list_double_large_graphic_pane_g

0xb90a,	// (0x0002ad2e) list_double_large_graphic_pane_t1_ParamLimits

0xb90a,	// (0x0002ad2e) list_double_large_graphic_pane_t1

0xb923,	// (0x0002ad47) list_double_large_graphic_pane_t2_ParamLimits

0xb923,	// (0x0002ad47) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ea50) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ea50) list_double_large_graphic_pane_t

0xb935,	// (0x0002ad59) list_double2_large_graphic_pane_g1_ParamLimits

0xb935,	// (0x0002ad59) list_double2_large_graphic_pane_g1

0xb7c5,	// (0x0002abe9) list_double2_large_graphic_pane_g2_ParamLimits

0xb7c5,	// (0x0002abe9) list_double2_large_graphic_pane_g2

0xb7d6,	// (0x0002abfa) list_double2_large_graphic_pane_g3_ParamLimits

0xb7d6,	// (0x0002abfa) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ea55) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ea55) list_double2_large_graphic_pane_g

0xb941,	// (0x0002ad65) list_double2_large_graphic_pane_t1_ParamLimits

0xb941,	// (0x0002ad65) list_double2_large_graphic_pane_t1

0xb957,	// (0x0002ad7b) list_double2_large_graphic_pane_t2_ParamLimits

0xb957,	// (0x0002ad7b) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ea5c) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ea5c) list_double2_large_graphic_pane_t

0xb969,	// (0x0002ad8d) list_double_heading_pane_g1_ParamLimits

0xb969,	// (0x0002ad8d) list_double_heading_pane_g1

0x0260,	// (0x0001f684) list_double_heading_pane_g2_ParamLimits

0x0260,	// (0x0001f684) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ea61) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ea61) list_double_heading_pane_g

0xb97a,	// (0x0002ad9e) list_double_heading_pane_t1_ParamLimits

0xb97a,	// (0x0002ad9e) list_double_heading_pane_t1

0xb7f8,	// (0x0002ac1c) list_double_heading_pane_t2_ParamLimits

0xb7f8,	// (0x0002ac1c) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ea66) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ea66) list_double_heading_pane_t

0x048b,	// (0x0001f8af) list_double_graphic_heading_pane_g1_ParamLimits

0x048b,	// (0x0001f8af) list_double_graphic_heading_pane_g1

0xb969,	// (0x0002ad8d) list_double_graphic_heading_pane_g2_ParamLimits

0xb969,	// (0x0002ad8d) list_double_graphic_heading_pane_g2

0x0260,	// (0x0001f684) list_double_graphic_heading_pane_g3_ParamLimits

0x0260,	// (0x0001f684) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ea6b) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ea6b) list_double_graphic_heading_pane_g

0xb990,	// (0x0002adb4) list_double_graphic_heading_pane_t1_ParamLimits

0xb990,	// (0x0002adb4) list_double_graphic_heading_pane_t1

0xb8b5,	// (0x0002acd9) list_double_graphic_heading_pane_t2_ParamLimits

0xb8b5,	// (0x0002acd9) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ea72) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ea72) list_double_graphic_heading_pane_t

0xb8e6,	// (0x0002ad0a) list_double_time_pane_g1_ParamLimits

0xb8e6,	// (0x0002ad0a) list_double_time_pane_g1

0xb791,	// (0x0002abb5) list_double_time_pane_g2_ParamLimits

0xb791,	// (0x0002abb5) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002ea77) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002ea77) list_double_time_pane_g

0xb9a6,	// (0x0002adca) list_double_time_pane_t1_ParamLimits

0xb9a6,	// (0x0002adca) list_double_time_pane_t1

0xb9bc,	// (0x0002ade0) list_double_time_pane_t2_ParamLimits

0xb9bc,	// (0x0002ade0) list_double_time_pane_t2

0xb9ce,	// (0x0002adf2) list_double_time_pane_t3_ParamLimits

0xb9ce,	// (0x0002adf2) list_double_time_pane_t3

0xb9e0,	// (0x0002ae04) list_double_time_pane_t4_ParamLimits

0xb9e0,	// (0x0002ae04) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002ea7c) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002ea7c) list_double_time_pane_t

0xb9f2,	// (0x0002ae16) list_setting_pane_g1_ParamLimits

0xb9f2,	// (0x0002ae16) list_setting_pane_g1

0xb9fe,	// (0x0002ae22) list_setting_pane_g2_ParamLimits

0xb9fe,	// (0x0002ae22) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002ea85) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002ea85) list_setting_pane_g

0xba0a,	// (0x0002ae2e) list_setting_pane_t1_ParamLimits

0xba0a,	// (0x0002ae2e) list_setting_pane_t1

0xba24,	// (0x0002ae48) list_setting_pane_t2_ParamLimits

0xba24,	// (0x0002ae48) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002ea8a) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002ea8a) list_setting_pane_t

0xba63,	// (0x0002ae87) set_value_pane_cp_ParamLimits

0xba63,	// (0x0002ae87) set_value_pane_cp

0xba6f,	// (0x0002ae93) list_setting_number_pane_g1_ParamLimits

0xba6f,	// (0x0002ae93) list_setting_number_pane_g1

0xba7b,	// (0x0002ae9f) list_setting_number_pane_g2_ParamLimits

0xba7b,	// (0x0002ae9f) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002ea91) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002ea91) list_setting_number_pane_g

0xba87,	// (0x0002aeab) list_setting_number_pane_t1_ParamLimits

0xba87,	// (0x0002aeab) list_setting_number_pane_t1

0xbaa0,	// (0x0002aec4) list_setting_number_pane_t2_ParamLimits

0xbaa0,	// (0x0002aec4) list_setting_number_pane_t2

0xbaba,	// (0x0002aede) list_setting_number_pane_t3_ParamLimits

0xbaba,	// (0x0002aede) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002ea96) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002ea96) list_setting_number_pane_t

0xba63,	// (0x0002ae87) set_value_pane_ParamLimits

0xba63,	// (0x0002ae87) set_value_pane

0x3f9f,	// (0x000233c3) bg_set_opt_pane_ParamLimits

0x3f9f,	// (0x000233c3) bg_set_opt_pane

0x05ec,	// (0x0001fa10) set_value_pane_t1

0x3fc0,	// (0x000233e4) slider_set_pane_cp3

0x3fc9,	// (0x000233ed) volume_small_pane_cp

0x3fd2,	// (0x000233f6) list_form_gen_pane

0x3fdb,	// (0x000233ff) scroll_pane_cp8

0xbafd,	// (0x0002af21) form_field_data_pane_ParamLimits

0xbafd,	// (0x0002af21) form_field_data_pane

0xbb14,	// (0x0002af38) form_field_data_wide_pane_ParamLimits

0xbb14,	// (0x0002af38) form_field_data_wide_pane

0xbb34,	// (0x0002af58) form_field_popup_pane_ParamLimits

0xbb34,	// (0x0002af58) form_field_popup_pane

0xbb4c,	// (0x0002af70) form_field_popup_wide_pane_ParamLimits

0xbb4c,	// (0x0002af70) form_field_popup_wide_pane

0x0680,	// (0x0001faa4) form_field_slider_pane_ParamLimits

0x0680,	// (0x0001faa4) form_field_slider_pane

0x0693,	// (0x0001fab7) form_field_slider_wide_pane_ParamLimits

0x0693,	// (0x0001fab7) form_field_slider_wide_pane

0x3fec,	// (0x00023410) data_form_pane

0xbb6d,	// (0x0002af91) form_field_data_pane_t1

0x3ff8,	// (0x0002341c) input_focus_pane

0x06c8,	// (0x0001faec) data_form_wide_pane

0x06e5,	// (0x0001fb09) form_field_data_wide_pane_t1

0x3d69,	// (0x0002318d) input_focus_pane_cp6

0xbb87,	// (0x0002afab) form_field_popup_pane_t1

0x3ff8,	// (0x0002341c) input_focus_pane_cp7

0x4026,	// (0x0002344a) list_form_pane

0x0727,	// (0x0001fb4b) form_field_popup_wide_pane_t1

0x3ff8,	// (0x0002341c) input_focus_pane_cp8

0x4032,	// (0x00023456) list_form_wide_pane

0xbba9,	// (0x0002afcd) form_field_slider_pane_t1_ParamLimits

0xbba9,	// (0x0002afcd) form_field_slider_pane_t1

0xbbc1,	// (0x0002afe5) form_field_slider_pane_t2_ParamLimits

0xbbc1,	// (0x0002afe5) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002eaa6) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002eaa6) form_field_slider_pane_t

0x39de,	// (0x00022e02) input_focus_pane_cp9_ParamLimits

0x39de,	// (0x00022e02) input_focus_pane_cp9

0xbbd6,	// (0x0002affa) slider_cont_pane_ParamLimits

0xbbd6,	// (0x0002affa) slider_cont_pane

0x403e,	// (0x00023462) form_field_slider_wide_pane_t1_ParamLimits

0x403e,	// (0x00023462) form_field_slider_wide_pane_t1

0x0783,	// (0x0001fba7) form_field_slider_wide_pane_t2_ParamLimits

0x0783,	// (0x0001fba7) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002eaab) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002eaab) form_field_slider_wide_pane_t

0x39de,	// (0x00022e02) input_focus_pane_cp10_ParamLimits

0x39de,	// (0x00022e02) input_focus_pane_cp10

0xbbea,	// (0x0002b00e) slider_cont_pane_cp1_ParamLimits

0xbbea,	// (0x0002b00e) slider_cont_pane_cp1

0xbbfe,	// (0x0002b022) slider_form_pane_cp

0x4050,	// (0x00023474) input_focus_pane_g1

0x4058,	// (0x0002347c) input_focus_pane_g2

0x4060,	// (0x00023484) input_focus_pane_g3

0x4068,	// (0x0002348c) input_focus_pane_g4

0x4070,	// (0x00023494) input_focus_pane_g5

0x4078,	// (0x0002349c) input_focus_pane_g6

0x4080,	// (0x000234a4) input_focus_pane_g7

0x4088,	// (0x000234ac) input_focus_pane_g8

0x4090,	// (0x000234b4) input_focus_pane_g9

0x3679,	// (0x00022a9d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002eab0) input_focus_pane_g

0x5afe,	// (0x00024f22) wait_border_pane_g3_copy1

0xbc06,	// (0x0002b02a) data_form_pane_t1

0x3679,	// (0x00022a9d) wait_anim_pane_g1_copy1

0xbd26,	// (0x0002b14a) data_form_wide_pane_t1

0xbc20,	// (0x0002b044) list_form_graphic_pane_cp_ParamLimits

0xbc20,	// (0x0002b044) list_form_graphic_pane_cp

0x6a13,	// (0x00025e37) slider_form_pane_g1

0x6a1c,	// (0x00025e40) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002eda7) slider_form_pane_g

0xbc20,	// (0x0002b044) list_form_graphic_pane_ParamLimits

0xbc20,	// (0x0002b044) list_form_graphic_pane

0x0801,	// (0x0001fc25) list_form_graphic_pane_g1

0x0809,	// (0x0001fc2d) list_form_graphic_pane_t1_ParamLimits

0x0809,	// (0x0001fc2d) list_form_graphic_pane_t1

0x3763,	// (0x00022b87) list_highlight_pane_cp5_ParamLimits

0x3763,	// (0x00022b87) list_highlight_pane_cp5

0xbc32,	// (0x0002b056) find_pane_g1

0x4098,	// (0x000234bc) input_find_pane

0xbc3b,	// (0x0002b05f) input_find_pane_g1_ParamLimits

0xbc3b,	// (0x0002b05f) input_find_pane_g1

0xbc47,	// (0x0002b06b) input_find_pane_t1_ParamLimits

0xbc47,	// (0x0002b06b) input_find_pane_t1

0xbc5c,	// (0x0002b080) input_find_pane_t2_ParamLimits

0xbc5c,	// (0x0002b080) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002eac5) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002eac5) input_find_pane_t

0x40a1,	// (0x000234c5) input_focus_pane_cp5_ParamLimits

0x40a1,	// (0x000234c5) input_focus_pane_cp5

0x40bb,	// (0x000234df) bg_popup_window_pane_cp2_ParamLimits

0x40bb,	// (0x000234df) bg_popup_window_pane_cp2

0x40c8,	// (0x000234ec) listscroll_menu_pane_ParamLimits

0x40c8,	// (0x000234ec) listscroll_menu_pane

0xd3d7,	// (0x0002c7fb) popup_submenu_window_ParamLimits

0xd3d7,	// (0x0002c7fb) popup_submenu_window

0x4100,	// (0x00023524) find_popup_pane_g1

0x4108,	// (0x0002352c) input_popup_find_pane_cp

0x40a1,	// (0x000234c5) input_focus_pane_cp4_ParamLimits

0x40a1,	// (0x000234c5) input_focus_pane_cp4

0x411e,	// (0x00023542) input_popup_find_pane_t1_ParamLimits

0x411e,	// (0x00023542) input_popup_find_pane_t1

0x3683,	// (0x00022aa7) bg_popup_sub_pane_cp

0x414c,	// (0x00023570) listscroll_popup_sub_pane

0x4154,	// (0x00023578) list_submenu_pane_ParamLimits

0x4154,	// (0x00023578) list_submenu_pane

0x4165,	// (0x00023589) scroll_pane_cp4

0x416d,	// (0x00023591) list_single_popup_submenu_pane_ParamLimits

0x416d,	// (0x00023591) list_single_popup_submenu_pane

0x4181,	// (0x000235a5) list_single_popup_submenu_pane_g1

0x4189,	// (0x000235ad) list_single_popup_submenu_pane_t1_ParamLimits

0x4189,	// (0x000235ad) list_single_popup_submenu_pane_t1

0x39de,	// (0x00022e02) bg_active_tab_pane_cp1_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp1

0x419e,	// (0x000235c2) tabs_2_active_pane_g1

0xd411,	// (0x0002c835) tabs_2_active_pane_t1

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp1_ParamLimits

0x39de,	// (0x00022e02) bg_passive_tab_pane_cp1

0x419e,	// (0x000235c2) tabs_2_passive_pane_g1

0xd411,	// (0x0002c835) tabs_2_passive_pane_t1

0x3763,	// (0x00022b87) bg_active_tab_pane_cp4

0xd423,	// (0x0002c847) tabs_2_long_active_pane_t1

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp4

0x2330,	// (0x00021754) list_single_midp_graphic_pane_g4_ParamLimits

0x3763,	// (0x00022b87) bg_active_tab_pane_cp5

0xd436,	// (0x0002c85a) tabs_3_long_active_pane_t1

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp5

0x2330,	// (0x00021754) list_single_midp_graphic_pane_g4

0x3763,	// (0x00022b87) bg_popup_window_pane_cp13_ParamLimits

0x3763,	// (0x00022b87) bg_popup_window_pane_cp13

0x4200,	// (0x00023624) listscroll_popup_fast_pane_ParamLimits

0x4200,	// (0x00023624) listscroll_popup_fast_pane

0x420f,	// (0x00023633) grid_popup_fast_pane_ParamLimits

0x420f,	// (0x00023633) grid_popup_fast_pane

0x4221,	// (0x00023645) scroll_pane_cp9_ParamLimits

0x4221,	// (0x00023645) scroll_pane_cp9

0x8312,	// (0x00027736) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8312,	// (0x00027736) list_single_graphic_hl_pane_t1_cp2

0x4245,	// (0x00023669) input_focus_pane_cp20_ParamLimits

0x4245,	// (0x00023669) input_focus_pane_cp20

0x4253,	// (0x00023677) query_popup_data_pane_t1_ParamLimits

0x4253,	// (0x00023677) query_popup_data_pane_t1

0x4266,	// (0x0002368a) query_popup_data_pane_t2_ParamLimits

0x4266,	// (0x0002368a) query_popup_data_pane_t2

0x42ac,	// (0x000236d0) query_popup_data_pane_t3_ParamLimits

0x42ac,	// (0x000236d0) query_popup_data_pane_t3

0x42ed,	// (0x00023711) query_popup_data_pane_t4_ParamLimits

0x42ed,	// (0x00023711) query_popup_data_pane_t4

0x4329,	// (0x0002374d) query_popup_data_pane_t5_ParamLimits

0x4329,	// (0x0002374d) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002eaca) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002eaca) query_popup_data_pane_t

0x4050,	// (0x00023474) bg_set_opt_pane_g1

0x4058,	// (0x0002347c) bg_set_opt_pane_g2

0x4060,	// (0x00023484) bg_set_opt_pane_g3

0x4068,	// (0x0002348c) bg_set_opt_pane_g4

0x4070,	// (0x00023494) bg_set_opt_pane_g5

0x4078,	// (0x0002349c) bg_set_opt_pane_g6

0x4080,	// (0x000234a4) bg_set_opt_pane_g7

0x4088,	// (0x000234ac) bg_set_opt_pane_g8

0x4090,	// (0x000234b4) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002ead5) bg_set_opt_pane_g

0x19d6,	// (0x00020dfa) control_top_pane_stacon_ParamLimits

0x19d6,	// (0x00020dfa) control_top_pane_stacon

0x1a29,	// (0x00020e4d) signal_pane_stacon_ParamLimits

0x1a29,	// (0x00020e4d) signal_pane_stacon

0x491b,	// (0x00023d3f) stacon_top_pane_g1_ParamLimits

0x491b,	// (0x00023d3f) stacon_top_pane_g1

0x1a4e,	// (0x00020e72) title_pane_stacon_ParamLimits

0x1a4e,	// (0x00020e72) title_pane_stacon

0x1a78,	// (0x00020e9c) uni_indicator_pane_stacon_ParamLimits

0x1a78,	// (0x00020e9c) uni_indicator_pane_stacon

0x1a8d,	// (0x00020eb1) battery_pane_stacon_ParamLimits

0x1a8d,	// (0x00020eb1) battery_pane_stacon

0x1ad1,	// (0x00020ef5) control_bottom_pane_stacon_ParamLimits

0x1ad1,	// (0x00020ef5) control_bottom_pane_stacon

0x1af4,	// (0x00020f18) navi_pane_stacon_ParamLimits

0x1af4,	// (0x00020f18) navi_pane_stacon

0x493d,	// (0x00023d61) stacon_bottom_pane_g1_ParamLimits

0x493d,	// (0x00023d61) stacon_bottom_pane_g1

0x1739,	// (0x00020b5d) aid_levels_signal_lsc_ParamLimits

0x1739,	// (0x00020b5d) aid_levels_signal_lsc

0x174f,	// (0x00020b73) signal_pane_stacon_g1_ParamLimits

0x174f,	// (0x00020b73) signal_pane_stacon_g1

0x1763,	// (0x00020b87) signal_pane_stacon_g2_ParamLimits

0x1763,	// (0x00020b87) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002eae8) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002eae8) signal_pane_stacon_g

0x1798,	// (0x00020bbc) title_pane_stacon_t1_ParamLimits

0x1798,	// (0x00020bbc) title_pane_stacon_t1

0x436d,	// (0x00023791) uni_indicator_pane_stacon_g1

0x4377,	// (0x0002379b) uni_indicator_pane_stacon_g2

0x4381,	// (0x000237a5) uni_indicator_pane_stacon_g3

0x438b,	// (0x000237af) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002eaf4) uni_indicator_pane_stacon_g

0x17bd,	// (0x00020be1) control_top_pane_stacon_g1

0x17c5,	// (0x00020be9) control_top_pane_stacon_t1_ParamLimits

0x17c5,	// (0x00020be9) control_top_pane_stacon_t1

0x17fc,	// (0x00020c20) aid_levels_battery_lsc_ParamLimits

0x17fc,	// (0x00020c20) aid_levels_battery_lsc

0x1813,	// (0x00020c37) battery_pane_stacon_g1_ParamLimits

0x1813,	// (0x00020c37) battery_pane_stacon_g1

0x1826,	// (0x00020c4a) battery_pane_stacon_g2_ParamLimits

0x1826,	// (0x00020c4a) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002eafd) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002eafd) battery_pane_stacon_g

0x1864,	// (0x00020c88) navi_icon_pane_stacon

0x1878,	// (0x00020c9c) navi_navi_pane_stacon

0x1864,	// (0x00020c88) navi_text_pane_stacon

0x17bd,	// (0x00020be1) control_bottom_pane_stacon_g1

0x188c,	// (0x00020cb0) control_bottom_pane_stacon_t1_ParamLimits

0x188c,	// (0x00020cb0) control_bottom_pane_stacon_t1

0xd448,	// (0x0002c86c) grid_app_pane_ParamLimits

0xd448,	// (0x0002c86c) grid_app_pane

0xd480,	// (0x0002c8a4) scroll_pane_cp15_ParamLimits

0xd480,	// (0x0002c8a4) scroll_pane_cp15

0xd495,	// (0x0002c8b9) cell_app_pane_ParamLimits

0xd495,	// (0x0002c8b9) cell_app_pane

0xd4da,	// (0x0002c8fe) cell_app_pane_g1_ParamLimits

0xd4da,	// (0x0002c8fe) cell_app_pane_g1

0x4430,	// (0x00023854) cell_app_pane_g2_ParamLimits

0x4430,	// (0x00023854) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002eb02) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002eb02) cell_app_pane_g

0xd4fe,	// (0x0002c922) cell_app_pane_t1_ParamLimits

0xd4fe,	// (0x0002c922) cell_app_pane_t1

0x4453,	// (0x00023877) grid_highlight_pane_ParamLimits

0x4453,	// (0x00023877) grid_highlight_pane

0x4050,	// (0x00023474) cell_highlight_pane_g1

0x4058,	// (0x0002347c) cell_highlight_pane_g2

0x4060,	// (0x00023484) cell_highlight_pane_g3

0x4068,	// (0x0002348c) cell_highlight_pane_g4

0x4070,	// (0x00023494) cell_highlight_pane_g5

0x4078,	// (0x0002349c) cell_highlight_pane_g6

0x4080,	// (0x000234a4) cell_highlight_pane_g7

0x4088,	// (0x000234ac) cell_highlight_pane_g8

0x4090,	// (0x000234b4) cell_highlight_pane_g9

0x3679,	// (0x00022a9d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002eab0) cell_highlight_pane_g

0x4464,	// (0x00023888) bg_scroll_pane

0x18d6,	// (0x00020cfa) scroll_handle_pane

0x44ab,	// (0x000238cf) scroll_bg_pane_g1

0x44c0,	// (0x000238e4) scroll_bg_pane_g2

0x44d8,	// (0x000238fc) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002eb07) scroll_bg_pane_g

0x44ed,	// (0x00023911) scroll_handle_focus_pane_ParamLimits

0x44ed,	// (0x00023911) scroll_handle_focus_pane

0x44ab,	// (0x000238cf) scroll_handle_pane_g1

0x44fa,	// (0x0002391e) scroll_handle_pane_g2

0x44d8,	// (0x000238fc) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002eb0e) scroll_handle_pane_g

0x40a1,	// (0x000234c5) bg_popup_sub_pane_cp21_ParamLimits

0x40a1,	// (0x000234c5) bg_popup_sub_pane_cp21

0x450e,	// (0x00023932) popup_fep_japan_predictive_window_t1_ParamLimits

0x450e,	// (0x00023932) popup_fep_japan_predictive_window_t1

0x4528,	// (0x0002394c) popup_fep_japan_predictive_window_t2_ParamLimits

0x4528,	// (0x0002394c) popup_fep_japan_predictive_window_t2

0x455b,	// (0x0002397f) popup_fep_japan_predictive_window_t3_ParamLimits

0x455b,	// (0x0002397f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002eb15) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002eb15) popup_fep_japan_predictive_window_t

0x3683,	// (0x00022aa7) bg_popup_sub_pane_cp23

0x4592,	// (0x000239b6) listscroll_japin_cand_pane

0x459a,	// (0x000239be) popup_fep_japan_candidate_window_t1

0x45a8,	// (0x000239cc) candidate_pane_ParamLimits

0x45a8,	// (0x000239cc) candidate_pane

0x45ba,	// (0x000239de) scroll_pane_cp30

0x45c2,	// (0x000239e6) list_single_popup_jap_candidate_pane_ParamLimits

0x45c2,	// (0x000239e6) list_single_popup_jap_candidate_pane

0x3683,	// (0x00022aa7) list_highlight_pane_cp30

0x45d7,	// (0x000239fb) list_single_popup_jap_candidate_pane_t1

0x45e6,	// (0x00023a0a) level_1_signal

0x45f8,	// (0x00023a1c) level_2_signal

0x460b,	// (0x00023a2f) level_3_signal

0x461e,	// (0x00023a42) level_4_signal

0x4631,	// (0x00023a55) level_5_signal

0x4644,	// (0x00023a68) level_6_signal

0x4657,	// (0x00023a7b) level_7_signal

0x45e6,	// (0x00023a0a) level_1_battery

0x45f8,	// (0x00023a1c) level_2_battery

0x460b,	// (0x00023a2f) level_3_battery

0x461e,	// (0x00023a42) level_4_battery

0x4631,	// (0x00023a55) level_5_battery

0x4644,	// (0x00023a68) level_6_battery

0x4657,	// (0x00023a7b) level_7_battery

0x4682,	// (0x00023aa6) list_menu_pane_ParamLimits

0x4682,	// (0x00023aa6) list_menu_pane

0x4698,	// (0x00023abc) scroll_pane_cp25_ParamLimits

0x4698,	// (0x00023abc) scroll_pane_cp25

0x46b1,	// (0x00023ad5) list_double2_graphic_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double2_graphic_pane_cp2

0x46b1,	// (0x00023ad5) list_double2_large_graphic_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double2_large_graphic_pane_cp2

0x46b1,	// (0x00023ad5) list_double2_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double2_pane_cp2

0x46b1,	// (0x00023ad5) list_double_graphic_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double_graphic_pane_cp2

0x46b1,	// (0x00023ad5) list_double_large_graphic_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double_large_graphic_pane_cp2

0x46b1,	// (0x00023ad5) list_double_number_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double_number_pane_cp2

0x46b1,	// (0x00023ad5) list_double_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double_pane_cp2

0xd515,	// (0x0002c939) list_single_2graphic_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_2graphic_pane_cp2

0xd515,	// (0x0002c939) list_single_graphic_heading_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_graphic_heading_pane_cp2

0xd515,	// (0x0002c939) list_single_graphic_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_graphic_pane_cp2

0xd515,	// (0x0002c939) list_single_heading_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_heading_pane_cp2

0x46ee,	// (0x00023b12) list_single_large_graphic_pane_cp2_ParamLimits

0x46ee,	// (0x00023b12) list_single_large_graphic_pane_cp2

0xd515,	// (0x0002c939) list_single_number_heading_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_number_heading_pane_cp2

0xd515,	// (0x0002c939) list_single_number_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_number_pane_cp2

0xd515,	// (0x0002c939) list_single_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_pane_cp2

0x476a,	// (0x00023b8e) bg_popup_sub_pane_cp22

0x1988,	// (0x00020dac) popup_side_volume_key_window_g1

0x19b2,	// (0x00020dd6) popup_side_volume_key_window_t1

0x19ce,	// (0x00020df2) volume_small_pane_cp1

0x39de,	// (0x00022e02) bg_popup_sub_pane_cp24_ParamLimits

0x39de,	// (0x00022e02) bg_popup_sub_pane_cp24

0x4780,	// (0x00023ba4) fep_china_uni_candidate_pane_ParamLimits

0x4780,	// (0x00023ba4) fep_china_uni_candidate_pane

0x4794,	// (0x00023bb8) fep_china_uni_entry_pane

0x47a4,	// (0x00023bc8) popup_fep_china_uni_window_g1

0x47c0,	// (0x00023be4) fep_china_uni_entry_pane_g1

0x47c8,	// (0x00023bec) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002eb46) fep_china_uni_entry_pane_g

0x47d0,	// (0x00023bf4) fep_entry_item_pane

0x47da,	// (0x00023bfe) fep_candidate_item_pane

0x47e2,	// (0x00023c06) fep_china_uni_candidate_pane_g1

0x47ea,	// (0x00023c0e) fep_china_uni_candidate_pane_g2

0x47f2,	// (0x00023c16) fep_china_uni_candidate_pane_g3

0x47fa,	// (0x00023c1e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002eb4b) fep_china_uni_candidate_pane_g

0x3679,	// (0x00022a9d) fep_entry_item_pane_g1

0x4802,	// (0x00023c26) fep_entry_item_pane_t1_ParamLimits

0x4802,	// (0x00023c26) fep_entry_item_pane_t1

0x4818,	// (0x00023c3c) fep_candidate_item_pane_t1_ParamLimits

0x4818,	// (0x00023c3c) fep_candidate_item_pane_t1

0x482d,	// (0x00023c51) fep_candidate_item_pane_t2_ParamLimits

0x482d,	// (0x00023c51) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002eb54) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002eb54) fep_candidate_item_pane_t

0x3763,	// (0x00022b87) list_highlight_pane_cp31_ParamLimits

0x3763,	// (0x00022b87) list_highlight_pane_cp31

0x483f,	// (0x00023c63) level_1_signal_lsc

0x4848,	// (0x00023c6c) level_2_signal_lsc

0x4851,	// (0x00023c75) level_3_signal_lsc

0x485a,	// (0x00023c7e) level_4_signal_lsc

0x4863,	// (0x00023c87) level_5_signal_lsc

0x486c,	// (0x00023c90) level_6_signal_lsc

0x4875,	// (0x00023c99) level_7_signal_lsc

0x4875,	// (0x00023c99) level_1_battery_lsc

0x487e,	// (0x00023ca2) level_2_battery_lsc

0x4887,	// (0x00023cab) level_3_battery_lsc

0x4890,	// (0x00023cb4) level_4_battery_lsc

0x4899,	// (0x00023cbd) level_5_battery_lsc

0x48a2,	// (0x00023cc6) level_6_battery_lsc

0x483f,	// (0x00023c63) level_7_battery_lsc

0x48ab,	// (0x00023ccf) scroll_handle_focus_pane_g1

0x48b4,	// (0x00023cd8) scroll_handle_focus_pane_g2

0x48bd,	// (0x00023ce1) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002eb59) scroll_handle_focus_pane_g

0xbc71,	// (0x0002b095) list_single_2graphic_pane_g1_ParamLimits

0xbc71,	// (0x0002b095) list_single_2graphic_pane_g1

0xb75a,	// (0x0002ab7e) list_single_2graphic_pane_g2_ParamLimits

0xb75a,	// (0x0002ab7e) list_single_2graphic_pane_g2

0x092b,	// (0x0001fd4f) list_single_2graphic_pane_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_single_2graphic_pane_g3

0xbc7d,	// (0x0002b0a1) list_single_2graphic_pane_g4_ParamLimits

0xbc7d,	// (0x0002b0a1) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002eb60) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002eb60) list_single_2graphic_pane_g

0xbc89,	// (0x0002b0ad) list_single_2graphic_pane_t1_ParamLimits

0xbc89,	// (0x0002b0ad) list_single_2graphic_pane_t1

0xbcb7,	// (0x0002b0db) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbcb7,	// (0x0002b0db) list_double2_graphic_large_graphic_pane_g1

0xb7c5,	// (0x0002abe9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7c5,	// (0x0002abe9) list_double2_graphic_large_graphic_pane_g2

0xb7d6,	// (0x0002abfa) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb7d6,	// (0x0002abfa) list_double2_graphic_large_graphic_pane_g3

0xbcc9,	// (0x0002b0ed) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbcc9,	// (0x0002b0ed) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002eb69) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002eb69) list_double2_graphic_large_graphic_pane_g

0xbcd5,	// (0x0002b0f9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbcd5,	// (0x0002b0f9) list_double2_graphic_large_graphic_pane_t1

0xbceb,	// (0x0002b10f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbceb,	// (0x0002b10f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002eb72) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002eb72) list_double2_graphic_large_graphic_pane_t

0x4a05,	// (0x00023e29) popup_fast_swap_window_ParamLimits

0x4a05,	// (0x00023e29) popup_fast_swap_window

0x4a21,	// (0x00023e45) popup_side_volume_key_window

0x4a3d,	// (0x00023e61) stacon_top_pane

0x4a47,	// (0x00023e6b) status_pane_ParamLimits

0x4a47,	// (0x00023e6b) status_pane

0xd5a2,	// (0x0002c9c6) status_small_pane

0x3683,	// (0x00022aa7) control_pane

0x3683,	// (0x00022aa7) stacon_bottom_pane

0x3fdb,	// (0x000233ff) scroll_pane_cp121

0x3fd2,	// (0x000233f6) set_content_pane

0x48c6,	// (0x00023cea) bg_active_tab_pane_g1_cp1

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp1

0x48d8,	// (0x00023cfc) bg_active_tab_pane_g3_cp1

0x48c6,	// (0x00023cea) bg_passive_tab_pane_g1_cp1

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp1

0x48d8,	// (0x00023cfc) bg_passive_tab_pane_g3_cp1

0x48e1,	// (0x00023d05) bg_active_tab_pane_g1_cp2

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp2

0x48ea,	// (0x00023d0e) bg_active_tab_pane_g3_cp2

0x48e1,	// (0x00023d05) bg_passive_tab_pane_g1_cp2

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp2

0x48ea,	// (0x00023d0e) bg_passive_tab_pane_g3_cp2

0x48f3,	// (0x00023d17) bg_active_tab_pane_g1_cp3

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp3

0x48fc,	// (0x00023d20) bg_active_tab_pane_g3_cp3

0x48f3,	// (0x00023d17) bg_passive_tab_pane_g1_cp3

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp3

0x48fc,	// (0x00023d20) bg_passive_tab_pane_g3_cp3

0x4905,	// (0x00023d29) bg_active_tab_pane_g1_cp4

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp4

0x4910,	// (0x00023d34) bg_active_tab_pane_g3_cp4

0x4905,	// (0x00023d29) bg_passive_tab_pane_g1_cp4

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp4

0x4910,	// (0x00023d34) bg_passive_tab_pane_g3_cp4

0x4959,	// (0x00023d7d) bg_active_tab_pane_g1_cp5

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp5

0x4962,	// (0x00023d86) bg_active_tab_pane_g3_cp5

0x4959,	// (0x00023d7d) bg_passive_tab_pane_g1_cp5

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp5

0x4962,	// (0x00023d86) bg_passive_tab_pane_g3_cp5

0x7010,	// (0x00026434) list_set_graphic_pane_ParamLimits

0x7010,	// (0x00026434) list_set_graphic_pane

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp4

0x4988,	// (0x00023dac) list_set_graphic_pane_g1_ParamLimits

0x4988,	// (0x00023dac) list_set_graphic_pane_g1

0x4994,	// (0x00023db8) list_set_graphic_pane_g2_ParamLimits

0x4994,	// (0x00023db8) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002eb77) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002eb77) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002eed9) volume_small_pane_cp_g

0x49b8,	// (0x00023ddc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x49b8,	// (0x00023ddc) list_double2_large_graphic_pane_g1_cp2

0x49c4,	// (0x00023de8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x49c4,	// (0x00023de8) list_double2_large_graphic_pane_g2_cp2

0x49d5,	// (0x00023df9) list_double2_large_graphic_pane_g3_cp2

0x49dd,	// (0x00023e01) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x49dd,	// (0x00023e01) list_double2_large_graphic_pane_t1_cp2

0x49f3,	// (0x00023e17) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x49f3,	// (0x00023e17) list_double2_large_graphic_pane_t2_cp2

0x65d1,	// (0x000259f5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x65d1,	// (0x000259f5) list_double_large_graphic_pane_g1_cp2

0x65e2,	// (0x00025a06) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x65e2,	// (0x00025a06) list_double_large_graphic_pane_g2_cp2

0x4b6e,	// (0x00023f92) list_double_large_graphic_pane_g3_cp2

0x65f3,	// (0x00025a17) list_double_large_graphic_pane_g4_cp

0x65fb,	// (0x00025a1f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65fb,	// (0x00025a1f) list_double_large_graphic_pane_t1_cp2

0x6612,	// (0x00025a36) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6612,	// (0x00025a36) list_double_large_graphic_pane_t2_cp2

0x4a60,	// (0x00023e84) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a60,	// (0x00023e84) list_double2_graphic_pane_g1_cp2

0x4a6e,	// (0x00023e92) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a6e,	// (0x00023e92) list_double2_graphic_pane_g2_cp2

0x4a7f,	// (0x00023ea3) list_double2_graphic_pane_g3_cp2

0x4a89,	// (0x00023ead) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a89,	// (0x00023ead) list_double2_graphic_pane_t1_cp2

0x4a9f,	// (0x00023ec3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a9f,	// (0x00023ec3) list_double2_graphic_pane_t2_cp2

0x4ab1,	// (0x00023ed5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4ab1,	// (0x00023ed5) list_single_number_heading_pane_g1_cp2

0x4abd,	// (0x00023ee1) list_single_number_heading_pane_g2_cp2

0x4ac5,	// (0x00023ee9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4ac5,	// (0x00023ee9) list_single_number_heading_pane_t1_cp2

0x4adb,	// (0x00023eff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4adb,	// (0x00023eff) list_single_number_heading_pane_t2_cp2

0x4aed,	// (0x00023f11) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4aed,	// (0x00023f11) list_single_number_heading_pane_t3_cp2

0x4ab1,	// (0x00023ed5) list_single_heading_pane_g1_cp2_ParamLimits

0x4ab1,	// (0x00023ed5) list_single_heading_pane_g1_cp2

0x4abd,	// (0x00023ee1) list_single_heading_pane_g2_cp2

0x4ac5,	// (0x00023ee9) list_single_heading_pane_t1_cp2_ParamLimits

0x4ac5,	// (0x00023ee9) list_single_heading_pane_t1_cp2

0x63d9,	// (0x000257fd) list_single_heading_pane_t2_cp2_ParamLimits

0x63d9,	// (0x000257fd) list_single_heading_pane_t2_cp2

0x6321,	// (0x00025745) list_double_graphic_pane_g1_cp2_ParamLimits

0x6321,	// (0x00025745) list_double_graphic_pane_g1_cp2

0x632d,	// (0x00025751) list_double_graphic_pane_g2_cp2_ParamLimits

0x632d,	// (0x00025751) list_double_graphic_pane_g2_cp2

0x633c,	// (0x00025760) list_double_graphic_pane_g3_cp2

0x6344,	// (0x00025768) list_double_graphic_pane_t1_cp2_ParamLimits

0x6344,	// (0x00025768) list_double_graphic_pane_t1_cp2

0x635a,	// (0x0002577e) list_double_graphic_pane_t2_cp2_ParamLimits

0x635a,	// (0x0002577e) list_double_graphic_pane_t2_cp2

0x4b62,	// (0x00023f86) list_double_number_pane_g1_cp2_ParamLimits

0x4b62,	// (0x00023f86) list_double_number_pane_g1_cp2

0x4b6e,	// (0x00023f92) list_double_number_pane_g2_cp2

0x62e5,	// (0x00025709) list_double_number_pane_t1_cp2_ParamLimits

0x62e5,	// (0x00025709) list_double_number_pane_t1_cp2

0x62f9,	// (0x0002571d) list_double_number_pane_t2_cp2_ParamLimits

0x62f9,	// (0x0002571d) list_double_number_pane_t2_cp2

0x630f,	// (0x00025733) list_double_number_pane_t3_cp2_ParamLimits

0x630f,	// (0x00025733) list_double_number_pane_t3_cp2

0x61ce,	// (0x000255f2) list_single_graphic_pane_g1_cp2_ParamLimits

0x61ce,	// (0x000255f2) list_single_graphic_pane_g1_cp2

0x4bc6,	// (0x00023fea) list_single_graphic_pane_g2_cp2_ParamLimits

0x4bc6,	// (0x00023fea) list_single_graphic_pane_g2_cp2

0x4bd2,	// (0x00023ff6) list_single_graphic_pane_g3_cp2

0x61a4,	// (0x000255c8) list_single_graphic_pane_t1_cp2_ParamLimits

0x61a4,	// (0x000255c8) list_single_graphic_pane_t1_cp2

0x4bc6,	// (0x00023fea) list_single_number_pane_g1_cp2_ParamLimits

0x4bc6,	// (0x00023fea) list_single_number_pane_g1_cp2

0x4bd2,	// (0x00023ff6) list_single_number_pane_g2_cp2

0x61a4,	// (0x000255c8) list_single_number_pane_t1_cp2_ParamLimits

0x61a4,	// (0x000255c8) list_single_number_pane_t1_cp2

0x61ba,	// (0x000255de) list_single_number_pane_t2_cp2_ParamLimits

0x61ba,	// (0x000255de) list_single_number_pane_t2_cp2

0x49c4,	// (0x00023de8) list_double2_pane_g1_cp2_ParamLimits

0x49c4,	// (0x00023de8) list_double2_pane_g1_cp2

0x49d5,	// (0x00023df9) list_double2_pane_g2_cp2

0x4b3a,	// (0x00023f5e) list_double2_pane_t1_cp2_ParamLimits

0x4b3a,	// (0x00023f5e) list_double2_pane_t1_cp2

0x4b50,	// (0x00023f74) list_double2_pane_t2_cp2_ParamLimits

0x4b50,	// (0x00023f74) list_double2_pane_t2_cp2

0x4b62,	// (0x00023f86) list_double_pane_g1_cp2_ParamLimits

0x4b62,	// (0x00023f86) list_double_pane_g1_cp2

0x4b6e,	// (0x00023f92) list_double_pane_g2_cp2

0x4b76,	// (0x00023f9a) list_double_pane_t1_cp2_ParamLimits

0x4b76,	// (0x00023f9a) list_double_pane_t1_cp2

0x4b8c,	// (0x00023fb0) list_double_pane_t2_cp2_ParamLimits

0x4b8c,	// (0x00023fb0) list_double_pane_t2_cp2

0x4bb6,	// (0x00023fda) list_single_pane_cp2_g3

0x4bc6,	// (0x00023fea) list_single_pane_g1_cp2_ParamLimits

0x4bc6,	// (0x00023fea) list_single_pane_g1_cp2

0x4bd2,	// (0x00023ff6) list_single_pane_g2_cp2

0x4bda,	// (0x00023ffe) list_single_pane_t1_cp2_ParamLimits

0x4bda,	// (0x00023ffe) list_single_pane_t1_cp2

0x4bf2,	// (0x00024016) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4bf2,	// (0x00024016) list_single_large_graphic_pane_g1_cp2

0x4bfe,	// (0x00024022) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4bfe,	// (0x00024022) list_single_large_graphic_pane_g2_cp2

0x4c0a,	// (0x0002402e) list_single_large_graphic_pane_g3_cp2

0x4c12,	// (0x00024036) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c12,	// (0x00024036) list_single_large_graphic_pane_g4_cp1

0x4c2c,	// (0x00024050) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c2c,	// (0x00024050) list_single_large_graphic_pane_t1_cp2

0x6170,	// (0x00025594) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6170,	// (0x00025594) list_single_graphic_heading_pane_g1_cp2

0x613d,	// (0x00025561) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x613d,	// (0x00025561) list_single_graphic_heading_pane_g4_cp2

0x4bd2,	// (0x00023ff6) list_single_graphic_heading_pane_g5_cp2

0x617c,	// (0x000255a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x617c,	// (0x000255a0) list_single_graphic_heading_pane_t1_cp2

0x6192,	// (0x000255b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6192,	// (0x000255b6) list_single_graphic_heading_pane_t2_cp2

0x6131,	// (0x00025555) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6131,	// (0x00025555) list_single_2graphic_pane_g1_cp2

0x613d,	// (0x00025561) list_single_2graphic_pane_g2_cp2_ParamLimits

0x613d,	// (0x00025561) list_single_2graphic_pane_g2_cp2

0x4bd2,	// (0x00023ff6) list_single_2graphic_pane_g3_cp2

0x614e,	// (0x00025572) list_single_2graphic_pane_g4_cp2_ParamLimits

0x614e,	// (0x00025572) list_single_2graphic_pane_g4_cp2

0x615a,	// (0x0002557e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x615a,	// (0x0002557e) list_single_2graphic_pane_t1_cp2

0x3679,	// (0x00022a9d) list_highlight_pane_g10_cp1

0x5d09,	// (0x0002512d) list_highlight_pane_g1_cp1

0x5d11,	// (0x00025135) list_highlight_pane_g2_cp1

0x5d19,	// (0x0002513d) list_highlight_pane_g3_cp1

0x5d21,	// (0x00025145) list_highlight_pane_g4_cp1

0x5d29,	// (0x0002514d) list_highlight_pane_g5_cp1

0x5d31,	// (0x00025155) list_highlight_pane_g6_cp1

0x5d39,	// (0x0002515d) list_highlight_pane_g7_cp1

0x5d41,	// (0x00025165) list_highlight_pane_g8_cp1

0x5d49,	// (0x0002516d) list_highlight_pane_g9_cp1

0xdc20,	// (0x0002d044) form_field_slider_pane_t3

0xdc2e,	// (0x0002d052) form_field_slider_pane_t4

0x5c45,	// (0x00025069) slider_form_pane_ParamLimits

0x5c45,	// (0x00025069) slider_form_pane

0x3683,	// (0x00022aa7) control_abbreviations

0x3683,	// (0x00022aa7) control_conventions

0x3683,	// (0x00022aa7) control_definitions

0x3683,	// (0x00022aa7) format_table_attribute

0x6423,	// (0x00025847) bg_popup_preview_window_pane_g9

0x3683,	// (0x00022aa7) format_table_data2

0x3683,	// (0x00022aa7) format_table_data3

0x3683,	// (0x00022aa7) format_table_data_example

0x0008,

0x3683,	// (0x00022aa7) intro_purpose

0xf8e3,	// (0x0002ed07) bg_popup_preview_window_pane_g

0x3683,	// (0x00022aa7) texts_category

0x3683,	// (0x00022aa7) texts_graphics

0x4c42,	// (0x00024066) text_digital

0x4c51,	// (0x00024075) text_primary

0x4c60,	// (0x00024084) text_primary_small

0x4c6f,	// (0x00024093) text_secondary

0x4c7e,	// (0x000240a2) text_title

0x6b52,	// (0x00025f76) bg_passive_tab_pane_g1_cp3_srt

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp3_srt

0x6b5b,	// (0x00025f7f) bg_passive_tab_pane_g3_cp3_srt

0x39de,	// (0x00022e02) bg_active_tab_pane_cp3_srt_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp3_srt

0x6b64,	// (0x00025f88) tabs_4_active_pane_srt_g1

0xdf60,	// (0x0002d384) tabs_4_active_pane_srt_t1_ParamLimits

0xdf60,	// (0x0002d384) tabs_4_active_pane_srt_t1

0x6b52,	// (0x00025f76) bg_active_tab_pane_g1_cp3_copy1

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp3_copy1

0x6b5b,	// (0x00025f7f) bg_active_tab_pane_g3_cp3_copy1

0x3763,	// (0x00022b87) tabs_2_long_active_pane_srt_ParamLimits

0x3763,	// (0x00022b87) tabs_2_long_active_pane_srt

0x3763,	// (0x00022b87) tabs_2_long_passive_pane_srt_ParamLimits

0x3763,	// (0x00022b87) tabs_2_long_passive_pane_srt

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp4_srt

0x6846,	// (0x00025c6a) bg_passive_tab_pane_g1_cp4_srt

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp4_srt

0x684f,	// (0x00025c73) bg_passive_tab_pane_g3_cp4_srt

0x3763,	// (0x00022b87) bg_active_tab_pane_cp4_srt_ParamLimits

0x3763,	// (0x00022b87) bg_active_tab_pane_cp4_srt

0xdd8a,	// (0x0002d1ae) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd8a,	// (0x0002d1ae) tabs_2_long_active_pane_srt_t1

0x6846,	// (0x00025c6a) bg_active_tab_pane_g1_cp4_srt

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp4_srt

0x684f,	// (0x00025c73) bg_active_tab_pane_g3_cp4_srt

0x39de,	// (0x00022e02) tabs_3_long_active_pane_srt_ParamLimits

0x39de,	// (0x00022e02) tabs_3_long_active_pane_srt

0x39de,	// (0x00022e02) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39de,	// (0x00022e02) tabs_3_long_passive_pane_cp_srt

0x39de,	// (0x00022e02) tabs_3_long_passive_pane_srt_ParamLimits

0x39de,	// (0x00022e02) tabs_3_long_passive_pane_srt

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp5_srt

0x4959,	// (0x00023d7d) bg_passive_tab_pane_g1_cp5_srt

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp5_srt

0x4962,	// (0x00023d86) bg_passive_tab_pane_g3_cp5_srt

0x3763,	// (0x00022b87) bg_active_tab_pane_cp5_srt_ParamLimits

0x3763,	// (0x00022b87) bg_active_tab_pane_cp5_srt

0xdd74,	// (0x0002d198) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd74,	// (0x0002d198) tabs_3_long_active_pane_srt_t1

0x4959,	// (0x00023d7d) bg_active_tab_pane_g1_cp5_srt

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp5_srt

0x4962,	// (0x00023d86) bg_active_tab_pane_g3_cp5_srt

0x6826,	// (0x00025c4a) navi_text_pane_srt_t1

0x681e,	// (0x00025c42) navi_icon_pane_srt_g1

0x4e53,	// (0x00024277) midp_editing_number_pane_srt

0x4c8d,	// (0x000240b1) midp_ticker_pane_srt

0x4e5b,	// (0x0002427f) midp_ticker_pane_srt_g1

0x4e63,	// (0x00024287) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002eb96) midp_ticker_pane_srt_g

0x4e6b,	// (0x0002428f) midp_ticker_pane_srt_t1

0x680f,	// (0x00025c33) midp_editing_number_pane_t1_copy1

0xd5ad,	// (0x0002c9d1) listscroll_midp_pane

0xd5ad,	// (0x0002c9d1) midp_form_pane

0x4d05,	// (0x00024129) midp_info_popup_window_ParamLimits

0x4d05,	// (0x00024129) midp_info_popup_window

0x40a1,	// (0x000234c5) bg_popup_sub_pane_cp50_ParamLimits

0x40a1,	// (0x000234c5) bg_popup_sub_pane_cp50

0x5935,	// (0x00024d59) listscroll_midp_info_pane_ParamLimits

0x5935,	// (0x00024d59) listscroll_midp_info_pane

0x5909,	// (0x00024d2d) listscroll_form_midp_pane_ParamLimits

0x5909,	// (0x00024d2d) listscroll_form_midp_pane

0x5915,	// (0x00024d39) scroll_bar_cp050

0x5909,	// (0x00024d2d) list_midp_pane

0x7596,	// (0x000269ba) signal_pane_g2_cp

0x5823,	// (0x00024c47) listscroll_midp_info_pane_t1_ParamLimits

0x5823,	// (0x00024c47) listscroll_midp_info_pane_t1

0x583b,	// (0x00024c5f) listscroll_midp_info_pane_t2_ParamLimits

0x583b,	// (0x00024c5f) listscroll_midp_info_pane_t2

0x5879,	// (0x00024c9d) listscroll_midp_info_pane_t3_ParamLimits

0x5879,	// (0x00024c9d) listscroll_midp_info_pane_t3

0x58b3,	// (0x00024cd7) listscroll_midp_info_pane_t4_ParamLimits

0x58b3,	// (0x00024cd7) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002ec42) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002ec42) listscroll_midp_info_pane_t

0x4165,	// (0x00023589) scroll_pane_cp21

0x57c1,	// (0x00024be5) form_midp_field_choice_group_pane

0x57ca,	// (0x00024bee) form_midp_field_text_pane

0x5809,	// (0x00024c2d) form_midp_field_time_pane

0x5811,	// (0x00024c35) form_midp_gauge_slider_pane

0x581a,	// (0x00024c3e) form_midp_gauge_wait_pane

0x3683,	// (0x00022aa7) form_midp_image_pane

0xbcfd,	// (0x0002b121) list_single_midp_pane_ParamLimits

0xbcfd,	// (0x0002b121) list_single_midp_pane

0xdbff,	// (0x0002d023) form_midp_field_text_pane_t1

0x5549,	// (0x0002496d) input_focus_pane_cp050

0x57b0,	// (0x00024bd4) list_midp_form_text_pane

0x5748,	// (0x00024b6c) form_midp_field_choice_group_pane_t1

0x5756,	// (0x00024b7a) input_focus_pane_cp051

0x576a,	// (0x00024b8e) list_midp_choice_pane

0x3683,	// (0x00022aa7) status_idle_pane

0x572c,	// (0x00024b50) form_midp_field_time_pane_t1

0x3679,	// (0x00022a9d) wait_anim_pane_g2_copy1

0x573a,	// (0x00024b5e) form_midp_field_time_pane_t2

0x0001,

0x4db3,	// (0x000241d7) aid_navinavi_width_2_pane

0xf819,	// (0x0002ec3d) form_midp_field_time_pane_t

0x3683,	// (0x00022aa7) input_focus_pane_cp052

0x3683,	// (0x00022aa7) bg_input_focus_pane_cp040

0x56ec,	// (0x00024b10) form_midp_gauge_slider_pane_t1

0x56fa,	// (0x00024b1e) form_midp_gauge_slider_pane_t2

0xdbe3,	// (0x0002d007) form_midp_gauge_slider_pane_t3

0xdbf1,	// (0x0002d015) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002ec34) form_midp_gauge_slider_pane_t

0x5724,	// (0x00024b48) form_midp_slider_pane

0x3763,	// (0x00022b87) bg_input_focus_pane_cp041_ParamLimits

0x3763,	// (0x00022b87) bg_input_focus_pane_cp041

0x56b9,	// (0x00024add) form_midp_gauge_wait_pane_t1_ParamLimits

0x56b9,	// (0x00024add) form_midp_gauge_wait_pane_t1

0x56cb,	// (0x00024aef) form_midp_gauge_wait_pane_t2_ParamLimits

0x56cb,	// (0x00024aef) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002ec2f) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002ec2f) form_midp_gauge_wait_pane_t

0x56dd,	// (0x00024b01) form_midp_wait_pane_ParamLimits

0x56dd,	// (0x00024b01) form_midp_wait_pane

0x5683,	// (0x00024aa7) form_midp_image_pane_g1

0x568c,	// (0x00024ab0) form_midp_image_pane_t1

0x569b,	// (0x00024abf) form_midp_image_pane_t2

0x56aa,	// (0x00024ace) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002ec28) form_midp_image_pane_t

0x567a,	// (0x00024a9e) list_single_midp_pane_g1

0x0a31,	// (0x0001fe55) list_single_midp_pane_t1

0xdbcf,	// (0x0002cff3) list_midp_form_item_pane_ParamLimits

0xdbcf,	// (0x0002cff3) list_midp_form_item_pane

0x4d5b,	// (0x0002417f) list_midp_form_item_pane_t1

0x4d6a,	// (0x0002418e) midp_ticker_pane_g1

0x4d76,	// (0x0002419a) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002eb7c) midp_ticker_pane_g

0x4d82,	// (0x000241a6) midp_ticker_pane_t1

0x6a60,	// (0x00025e84) midp_editing_number_pane_t1

0x6a3e,	// (0x00025e62) midp_editing_number_pane

0x6a4d,	// (0x00025e71) midp_ticker_pane

0x67ff,	// (0x00025c23) ai_message_heading_pane

0x3683,	// (0x00022aa7) bg_popup_window_pane_cp14

0x6807,	// (0x00025c2b) listscroll_ai_message_pane

0x6789,	// (0x00025bad) ai_message_heading_pane_g1_ParamLimits

0x6789,	// (0x00025bad) ai_message_heading_pane_g1

0x6795,	// (0x00025bb9) ai_message_heading_pane_g2_ParamLimits

0x6795,	// (0x00025bb9) ai_message_heading_pane_g2

0x67a1,	// (0x00025bc5) ai_message_heading_pane_g3_ParamLimits

0x67a1,	// (0x00025bc5) ai_message_heading_pane_g3

0x67ad,	// (0x00025bd1) ai_message_heading_pane_g4_ParamLimits

0x67ad,	// (0x00025bd1) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002ed69) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002ed69) ai_message_heading_pane_g

0x67b9,	// (0x00025bdd) ai_message_heading_pane_t1_ParamLimits

0x67b9,	// (0x00025bdd) ai_message_heading_pane_t1

0x67d3,	// (0x00025bf7) ai_message_heading_pane_t2_ParamLimits

0x67d3,	// (0x00025bf7) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002ed72) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002ed72) ai_message_heading_pane_t

0x67e5,	// (0x00025c09) bg_popup_heading_pane_cp1_ParamLimits

0x67e5,	// (0x00025c09) bg_popup_heading_pane_cp1

0x6777,	// (0x00025b9b) list_ai_message_pane_ParamLimits

0x6777,	// (0x00025b9b) list_ai_message_pane

0x4165,	// (0x00023589) scroll_pane_cp10

0x6713,	// (0x00025b37) list_ai_message_pane_g1

0x671b,	// (0x00025b3f) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002ed46) list_ai_message_pane_g

0x6723,	// (0x00025b47) list_ai_message_pane_t1_ParamLimits

0x6723,	// (0x00025b47) list_ai_message_pane_t1

0x6738,	// (0x00025b5c) list_ai_message_pane_t2_ParamLimits

0x6738,	// (0x00025b5c) list_ai_message_pane_t2

0x674d,	// (0x00025b71) list_ai_message_pane_t3_ParamLimits

0x674d,	// (0x00025b71) list_ai_message_pane_t3

0x6762,	// (0x00025b86) list_ai_message_pane_t4_ParamLimits

0x6762,	// (0x00025b86) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002ed4b) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002ed4b) list_ai_message_pane_t

0xdd53,	// (0x0002d177) cell_ai_soft_ind_pane_ParamLimits

0xdd53,	// (0x0002d177) cell_ai_soft_ind_pane

0x4d94,	// (0x000241b8) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d94,	// (0x000241b8) cell_ai_soft_ind_pane_g1

0x3683,	// (0x00022aa7) grid_highlight_cp1

0x4da1,	// (0x000241c5) text_secondary_cp56_ParamLimits

0x4da1,	// (0x000241c5) text_secondary_cp56

0x66d3,	// (0x00025af7) example_general_pane_ParamLimits

0x66d3,	// (0x00025af7) example_general_pane

0x66df,	// (0x00025b03) example_parent_pane_g1_ParamLimits

0x66df,	// (0x00025b03) example_parent_pane_g1

0x66eb,	// (0x00025b0f) example_parent_pane_t1_ParamLimits

0x66eb,	// (0x00025b0f) example_parent_pane_t1

0xc6f7,	// (0x0002bb1b) popup_preview_text_window_ParamLimits

0xc6f7,	// (0x0002bb1b) popup_preview_text_window

0x4bbe,	// (0x00023fe2) list_single_pane_cp2_g4

0x3aba,	// (0x00022ede) bg_popup_preview_window_pane_ParamLimits

0x3aba,	// (0x00022ede) bg_popup_preview_window_pane

0x642b,	// (0x0002584f) popup_preview_text_window_t1_ParamLimits

0x642b,	// (0x0002584f) popup_preview_text_window_t1

0x6449,	// (0x0002586d) popup_preview_text_window_t2_ParamLimits

0x6449,	// (0x0002586d) popup_preview_text_window_t2

0x6492,	// (0x000258b6) popup_preview_text_window_t3_ParamLimits

0x6492,	// (0x000258b6) popup_preview_text_window_t3

0x64d7,	// (0x000258fb) popup_preview_text_window_t4_ParamLimits

0x64d7,	// (0x000258fb) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002ed1a) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002ed1a) popup_preview_text_window_t

0x6555,	// (0x00025979) scroll_pane_cp11

0x54d5,	// (0x000248f9) bg_popup_preview_window_pane_g1

0x63eb,	// (0x0002580f) bg_popup_preview_window_pane_g2

0x63f3,	// (0x00025817) bg_popup_preview_window_pane_g3

0x63fb,	// (0x0002581f) bg_popup_preview_window_pane_g4

0x6403,	// (0x00025827) bg_popup_preview_window_pane_g5

0x640b,	// (0x0002582f) bg_popup_preview_window_pane_g6

0x6413,	// (0x00025837) bg_popup_preview_window_pane_g7

0x641b,	// (0x0002583f) bg_popup_preview_window_pane_g8

0x12c5,	// (0x000206e9) aid_popup_width_pane

0xc673,	// (0x0002ba97) popup_midp_note_alarm_window_ParamLimits

0xc673,	// (0x0002ba97) popup_midp_note_alarm_window

0x3fec,	// (0x00023410) data_form_pane_ParamLimits

0xbb63,	// (0x0002af87) form_field_data_pane_g1

0xbb6d,	// (0x0002af91) form_field_data_pane_t1_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_ParamLimits

0x06c8,	// (0x0001faec) data_form_wide_pane_ParamLimits

0x06d9,	// (0x0001fafd) form_field_data_wide_pane_g1

0x06e5,	// (0x0001fb09) form_field_data_wide_pane_t1_ParamLimits

0x3d69,	// (0x0002318d) input_focus_pane_cp6_ParamLimits

0xd403,	// (0x0002c827) input_popup_find_pane_g1_ParamLimits

0xd403,	// (0x0002c827) input_popup_find_pane_g1

0x1837,	// (0x00020c5b) aid_navi_side_left_pane

0x184c,	// (0x00020c70) aid_navi_side_right_pane

0x5e04,	// (0x00025228) bg_popup_window_pane_cp30_ParamLimits

0x5e04,	// (0x00025228) bg_popup_window_pane_cp30

0x5e7e,	// (0x000252a2) popup_midp_note_alarm_window_g1_ParamLimits

0x5e7e,	// (0x000252a2) popup_midp_note_alarm_window_g1

0x5eae,	// (0x000252d2) popup_midp_note_alarm_window_t1_ParamLimits

0x5eae,	// (0x000252d2) popup_midp_note_alarm_window_t1

0x5f4f,	// (0x00025373) popup_midp_note_alarm_window_t2_ParamLimits

0x5f4f,	// (0x00025373) popup_midp_note_alarm_window_t2

0x5ffd,	// (0x00025421) popup_midp_note_alarm_window_t3_ParamLimits

0x5ffd,	// (0x00025421) popup_midp_note_alarm_window_t3

0x602f,	// (0x00025453) popup_midp_note_alarm_window_t4_ParamLimits

0x602f,	// (0x00025453) popup_midp_note_alarm_window_t4

0x6055,	// (0x00025479) popup_midp_note_alarm_window_t5_ParamLimits

0x6055,	// (0x00025479) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002ecb7) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002ecb7) popup_midp_note_alarm_window_t

0x6101,	// (0x00025525) wait_bar_pane_cp1_ParamLimits

0x6101,	// (0x00025525) wait_bar_pane_cp1

0x3683,	// (0x00022aa7) wait_anim_pane_copy1

0x3683,	// (0x00022aa7) wait_border_pane_copy1

0x5aea,	// (0x00024f0e) wait_border_pane_g1_copy1

0x06ff,	// (0x0001fb23) form_field_popup_pane_g1

0xbb87,	// (0x0002afab) form_field_popup_pane_t1_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_cp7_ParamLimits

0x4026,	// (0x0002344a) list_form_pane_ParamLimits

0x071f,	// (0x0001fb43) form_field_popup_wide_pane_g1

0x0727,	// (0x0001fb4b) form_field_popup_wide_pane_t1_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_cp8_ParamLimits

0x4032,	// (0x00023456) list_form_wide_pane_ParamLimits

0xdfb9,	// (0x0002d3dd) aid_size_cell_graphic_pane

0xbc06,	// (0x0002b02a) data_form_pane_t1_ParamLimits

0xbd26,	// (0x0002b14a) data_form_wide_pane_t1_ParamLimits

0xd816,	// (0x0002cc3a) bg_status_flat_pane

0xd0c2,	// (0x0002c4e6) title_pane_t1_ParamLimits

0x372b,	// (0x00022b4f) title_pane_t2_ParamLimits

0x3751,	// (0x00022b75) title_pane_t3_ParamLimits

0xf557,	// (0x0002e97b) title_pane_t_ParamLimits

0x45e6,	// (0x00023a0a) level_1_signal_ParamLimits

0x45f8,	// (0x00023a1c) level_2_signal_ParamLimits

0x460b,	// (0x00023a2f) level_3_signal_ParamLimits

0x461e,	// (0x00023a42) level_4_signal_ParamLimits

0x4631,	// (0x00023a55) level_5_signal_ParamLimits

0x4644,	// (0x00023a68) level_6_signal_ParamLimits

0x4657,	// (0x00023a7b) level_7_signal_ParamLimits

0x45e6,	// (0x00023a0a) level_1_battery_ParamLimits

0x45f8,	// (0x00023a1c) level_2_battery_ParamLimits

0x460b,	// (0x00023a2f) level_3_battery_ParamLimits

0x461e,	// (0x00023a42) level_4_battery_ParamLimits

0x4631,	// (0x00023a55) level_5_battery_ParamLimits

0x4644,	// (0x00023a68) level_6_battery_ParamLimits

0x4657,	// (0x00023a7b) level_7_battery_ParamLimits

0x5d09,	// (0x0002512d) bg_status_flat_pane_g1

0x5d11,	// (0x00025135) bg_status_flat_pane_g2

0x5d19,	// (0x0002513d) bg_status_flat_pane_g3

0x5d21,	// (0x00025145) bg_status_flat_pane_g4

0x5d29,	// (0x0002514d) bg_status_flat_pane_g5

0x5d31,	// (0x00025155) bg_status_flat_pane_g6

0x5d39,	// (0x0002515d) bg_status_flat_pane_g7

0xd14e,	// (0x0002c572) tabs_3_active_pane_t1_ParamLimits

0xd14e,	// (0x0002c572) tabs_3_passive_pane_t1_ParamLimits

0xd160,	// (0x0002c584) tabs_4_active_pane_t1_ParamLimits

0xd160,	// (0x0002c584) tabs_4_1_passive_pane_t1_ParamLimits

0xd411,	// (0x0002c835) tabs_2_active_pane_t1_ParamLimits

0xd411,	// (0x0002c835) tabs_2_passive_pane_t1_ParamLimits

0x3763,	// (0x00022b87) bg_active_tab_pane_cp4_ParamLimits

0xd423,	// (0x0002c847) tabs_2_long_active_pane_t1_ParamLimits

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp4_ParamLimits

0xdaf9,	// (0x0002cf1d) list_single_midp_graphic_pane_t1_ParamLimits

0x3763,	// (0x00022b87) bg_active_tab_pane_cp5_ParamLimits

0xd436,	// (0x0002c85a) tabs_3_long_active_pane_t1_ParamLimits

0x4fb1,	// (0x000243d5) bg_passive_tab_pane_cp5_ParamLimits

0xdaf9,	// (0x0002cf1d) list_single_midp_graphic_pane_t1

0xd816,	// (0x0002cc3a) bg_status_flat_pane_ParamLimits

0x5165,	// (0x00024589) indicator_pane_cp2_ParamLimits

0x5165,	// (0x00024589) indicator_pane_cp2

0xd994,	// (0x0002cdb8) navi_pane_srt_ParamLimits

0xd994,	// (0x0002cdb8) navi_pane_srt

0x52b4,	// (0x000246d8) popup_clock_digital_analogue_window_cp1

0x3840,	// (0x00022c64) indicator_pane_t1

0x4c8d,	// (0x000240b1) copy_highlight_pane

0x4c8d,	// (0x000240b1) cursor_graphics_pane

0x4c8d,	// (0x000240b1) graphic_within_text_pane

0x4c8d,	// (0x000240b1) link_highlight_pane

0x6518,	// (0x0002593c) popup_preview_text_window_t5_ParamLimits

0x6518,	// (0x0002593c) popup_preview_text_window_t5

0x4dbb,	// (0x000241df) cursor_digital_pane

0x4dbb,	// (0x000241df) cursor_primary_pane

0x4dcc,	// (0x000241f0) cursor_primary_small_pane

0x4dd4,	// (0x000241f8) cursor_secondary_pane

0x4ddc,	// (0x00024200) cursor_title_pane

0x4dbb,	// (0x000241df) link_highlight_digital_pane

0x4dc3,	// (0x000241e7) link_highlight_primary_pane

0x4dcc,	// (0x000241f0) link_highlight_primary_small_pane

0x4dd4,	// (0x000241f8) link_highlight_secondary_pane

0x4ddc,	// (0x00024200) link_highlight_title_pane

0x4dbb,	// (0x000241df) copy_highlight_digital_pane

0x4dbb,	// (0x000241df) copy_highlight_primary_pane

0x4dcc,	// (0x000241f0) copy_highlight_primary_small_pane

0x4dd4,	// (0x000241f8) copy_highlight_secondary_pane

0x4ddc,	// (0x00024200) copy_highlight_title_pane

0x4dd4,	// (0x000241f8) graphic_text_digital_pane

0x5da7,	// (0x000251cb) graphic_text_primary_pane

0x5db0,	// (0x000251d4) graphic_text_primary_small_pane

0x4dcc,	// (0x000241f0) graphic_text_secondary_pane

0x4dbb,	// (0x000241df) graphic_text_title_pane

0xd652,	// (0x0002ca76) cursor_primary_pane_g1

0x5d99,	// (0x000251bd) cursor_text_primary_t1

0xdc50,	// (0x0002d074) cursor_primary_small_pane_g1

0x5d8b,	// (0x000251af) cursor_text_primary_small_t1

0xdc46,	// (0x0002d06a) cursor_primary_small_pane_g1_copy1

0x5d73,	// (0x00025197) cursor_text_primary_small_t1_copy1

0x5d51,	// (0x00025175) cursor_text_title_t1

0xdc3c,	// (0x0002d060) cursor_title_pane_g1

0xd652,	// (0x0002ca76) cursor_digital_pane_g1

0x4dee,	// (0x00024212) cursor_text_digital_t1

0x4e13,	// (0x00024237) link_highlight_primary_pane_g1

0x5cfa,	// (0x0002511e) link_highlight_primary_pane_t1

0x4dfc,	// (0x00024220) link_highlight_primary_small_pane_g1

0x4e04,	// (0x00024228) link_highlight_primary_small_pane_t1

0x4e13,	// (0x00024237) link_highlight_secondary_pane_g1

0x4e1b,	// (0x0002423f) link_highlight_secondary_pane_t1

0x5c6e,	// (0x00025092) link_highlight_title_pane_g1

0x5c76,	// (0x0002509a) link_highlight_title_pane_t1

0x5c57,	// (0x0002507b) link_highlight_digital_pane_g1

0x5c5f,	// (0x00025083) link_highlight_digital_pane_t1

0x5b2f,	// (0x00024f53) copy_highlight_primary_pane_g1

0x5b37,	// (0x00024f5b) copy_highlight_primary_pane_t1

0x5b09,	// (0x00024f2d) copy_highlight_primary_small_pane_g1

0x5b20,	// (0x00024f44) copy_highlight_primary_small_pane_t1

0x4e2a,	// (0x0002424e) copy_highlight_secondary_pane_g1

0x4e32,	// (0x00024256) copy_highlight_secondary_pane_t1

0x5b09,	// (0x00024f2d) copy_highlight_title_pane_g1

0x5b11,	// (0x00024f35) copy_highlight_title_pane_t1

0x5b2f,	// (0x00024f53) copy_highlight_digital_pane_g1

0x6db4,	// (0x000261d8) copy_highlight_digital_pane_t1

0x6d08,	// (0x0002612c) graphic_text_primary_pane_g1

0x6d98,	// (0x000261bc) graphic_text_primary_pane_t1

0x6da6,	// (0x000261ca) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002ede6) graphic_text_primary_pane_t

0x6d74,	// (0x00026198) graphic_text_primary_small_pane_g1

0x6d7c,	// (0x000261a0) graphic_text_primary_small_pane_t1

0x6d8a,	// (0x000261ae) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002ede1) graphic_text_primary_small_pane_t

0x6d50,	// (0x00026174) graphic_text_secondary_pane_g1

0x6d58,	// (0x0002617c) graphic_text_secondary_pane_t1

0x6d66,	// (0x0002618a) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002eddc) graphic_text_secondary_pane_t

0x6d2c,	// (0x00026150) graphic_text_title_pane_g1

0x6d34,	// (0x00026158) graphic_text_title_pane_t1

0x6d42,	// (0x00026166) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002edd7) graphic_text_title_pane_t

0x6d08,	// (0x0002612c) graphic_text_digital_pane_g1

0x6d10,	// (0x00026134) graphic_text_digital_pane_t1

0x6d1e,	// (0x00026142) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002edd2) graphic_text_digital_pane_t

0x3763,	// (0x00022b87) navi_icon_pane_srt_ParamLimits

0x3763,	// (0x00022b87) navi_icon_pane_srt

0x3683,	// (0x00022aa7) navi_midp_pane_srt

0x3683,	// (0x00022aa7) navi_navi_pane_srt

0x3763,	// (0x00022b87) navi_text_pane_srt_ParamLimits

0x3763,	// (0x00022b87) navi_text_pane_srt

0x6cd3,	// (0x000260f7) navi_navi_icon_text_pane_srt

0x6cdb,	// (0x000260ff) navi_navi_pane_srt_g1_ParamLimits

0x6cdb,	// (0x000260ff) navi_navi_pane_srt_g1

0x6ced,	// (0x00026111) navi_navi_pane_srt_g2_ParamLimits

0x6ced,	// (0x00026111) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002edcd) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002edcd) navi_navi_pane_srt_g

0x6cff,	// (0x00026123) navi_navi_tabs_pane_srt

0x6cd3,	// (0x000260f7) navi_navi_text_pane_srt

0x6cd3,	// (0x000260f7) navi_navi_volume_pane_srt

0x6cc4,	// (0x000260e8) navi_navi_text_pane_srt_t1

0x26bc,	// (0x00021ae0) navi_navi_volume_pane_srt_g1

0x26c4,	// (0x00021ae8) volume_small_pane_srt_ParamLimits

0x26c4,	// (0x00021ae8) volume_small_pane_srt

0x1b17,	// (0x00020f3b) volume_small_pane_srt_g1_ParamLimits

0x1b17,	// (0x00020f3b) volume_small_pane_srt_g1

0x1b27,	// (0x00020f4b) volume_small_pane_srt_g2_ParamLimits

0x1b27,	// (0x00020f4b) volume_small_pane_srt_g2

0x1b38,	// (0x00020f5c) volume_small_pane_srt_g3_ParamLimits

0x1b38,	// (0x00020f5c) volume_small_pane_srt_g3

0x1b49,	// (0x00020f6d) volume_small_pane_srt_g4_ParamLimits

0x1b49,	// (0x00020f6d) volume_small_pane_srt_g4

0x1b5a,	// (0x00020f7e) volume_small_pane_srt_g5_ParamLimits

0x1b5a,	// (0x00020f7e) volume_small_pane_srt_g5

0x1b6b,	// (0x00020f8f) volume_small_pane_srt_g6_ParamLimits

0x1b6b,	// (0x00020f8f) volume_small_pane_srt_g6

0x1b7c,	// (0x00020fa0) volume_small_pane_srt_g7_ParamLimits

0x1b7c,	// (0x00020fa0) volume_small_pane_srt_g7

0x1b8d,	// (0x00020fb1) volume_small_pane_srt_g8_ParamLimits

0x1b8d,	// (0x00020fb1) volume_small_pane_srt_g8

0x1b9e,	// (0x00020fc2) volume_small_pane_srt_g9_ParamLimits

0x1b9e,	// (0x00020fc2) volume_small_pane_srt_g9

0x1baf,	// (0x00020fd3) volume_small_pane_srt_g10_ParamLimits

0x1baf,	// (0x00020fd3) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002eb81) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002eb81) volume_small_pane_srt_g

0x3b63,	// (0x00022f87) query_popup_data_pane_cp2

0x6caa,	// (0x000260ce) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6caa,	// (0x000260ce) navi_navi_icon_text_pane_srt_t1

0x5da7,	// (0x000251cb) navi_tabs_2_long_pane_srt

0x5da7,	// (0x000251cb) navi_tabs_2_pane_srt

0x5da7,	// (0x000251cb) navi_tabs_3_long_pane_srt

0x5da7,	// (0x000251cb) navi_tabs_3_pane_srt

0x5da7,	// (0x000251cb) navi_tabs_4_pane_srt

0x269c,	// (0x00021ac0) tabs_2_active_pane_srt_ParamLimits

0x269c,	// (0x00021ac0) tabs_2_active_pane_srt

0x26ac,	// (0x00021ad0) tabs_2_passive_pane_srt_ParamLimits

0x26ac,	// (0x00021ad0) tabs_2_passive_pane_srt

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp1_srt

0x6c76,	// (0x0002609a) bg_passive_tab_pane_g1_cp1_srt

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp1_srt

0x6c7f,	// (0x000260a3) bg_passive_tab_pane_g3_cp1_srt

0x39de,	// (0x00022e02) bg_active_tab_pane_cp1_srt_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp1_srt

0x6c88,	// (0x000260ac) tabs_2_active_pane_srt_g1

0xdffb,	// (0x0002d41f) tabs_2_active_pane_srt_t1_ParamLimits

0xdffb,	// (0x0002d41f) tabs_2_active_pane_srt_t1

0x6c76,	// (0x0002609a) bg_active_tab_pane_g1_cp1_srt

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp1_srt

0x6c7f,	// (0x000260a3) bg_active_tab_pane_g3_cp1_srt

0x2669,	// (0x00021a8d) tabs_3_active_pane_srt_ParamLimits

0x2669,	// (0x00021a8d) tabs_3_active_pane_srt

0x267a,	// (0x00021a9e) tabs_3_passive_pane_cp_srt_ParamLimits

0x267a,	// (0x00021a9e) tabs_3_passive_pane_cp_srt

0x268b,	// (0x00021aaf) tabs_3_passive_pane_srt_ParamLimits

0x268b,	// (0x00021aaf) tabs_3_passive_pane_srt

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5549,	// (0x0002496d) bg_passive_tab_pane_cp2_srt

0x4e41,	// (0x00024265) bg_passive_tab_pane_g1_cp2_srt

0x48cf,	// (0x00023cf3) bg_passive_tab_pane_g2_cp2_srt

0x4e4a,	// (0x0002426e) bg_passive_tab_pane_g3_cp2_srt

0x39de,	// (0x00022e02) bg_active_tab_pane_cp2_srt_ParamLimits

0x39de,	// (0x00022e02) bg_active_tab_pane_cp2_srt

0x6c5c,	// (0x00026080) tabs_3_active_pane_srt_g1

0xdfe5,	// (0x0002d409) tabs_3_active_pane_srt_t1_ParamLimits

0xdfe5,	// (0x0002d409) tabs_3_active_pane_srt_t1

0x4e41,	// (0x00024265) bg_active_tab_pane_g1_cp2_srt

0x48cf,	// (0x00023cf3) bg_active_tab_pane_g2_cp2_srt

0x4e4a,	// (0x0002426e) bg_active_tab_pane_g3_cp2_srt

0x2621,	// (0x00021a45) tabs_4_active_pane_srt_ParamLimits

0x2621,	// (0x00021a45) tabs_4_active_pane_srt

0x2633,	// (0x00021a57) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2633,	// (0x00021a57) tabs_4_passive_pane_cp2_srt

0x1d1e,	// (0x00021142) aid_size_cell_toolbar

0x68b7,	// (0x00025cdb) main_idle_act_pane_ParamLimits

0x1ebf,	// (0x000212e3) popup_large_graphic_colour_window_ParamLimits

0xc983,	// (0x0002bda7) popup_toolbar_window_ParamLimits

0xc983,	// (0x0002bda7) popup_toolbar_window

0x6a6f,	// (0x00025e93) list_single_graphic_2heading_pane_ParamLimits

0x6a6f,	// (0x00025e93) list_single_graphic_2heading_pane

0x4395,	// (0x000237b9) aid_size_cell_apps_grid_lsc_pane

0x43a7,	// (0x000237cb) aid_size_cell_apps_grid_prt_pane

0x4fb1,	// (0x000243d5) bg_wml_button_pane_cp1_ParamLimits

0x4fb1,	// (0x000243d5) bg_wml_button_pane_cp1

0xdbff,	// (0x0002d023) form_midp_field_text_pane_t1_ParamLimits

0x5549,	// (0x0002496d) input_focus_pane_cp050_ParamLimits

0x57b0,	// (0x00024bd4) list_midp_form_text_pane_ParamLimits

0x5756,	// (0x00024b7a) input_focus_pane_cp051_ParamLimits

0x576a,	// (0x00024b8e) list_midp_choice_pane_ParamLimits

0xdb9d,	// (0x0002cfc1) list_single_2graphic_pane_cp3_ParamLimits

0xdb9d,	// (0x0002cfc1) list_single_2graphic_pane_cp3

0xdbb0,	// (0x0002cfd4) list_single_midp_graphic_pane_ParamLimits

0xdbb0,	// (0x0002cfd4) list_single_midp_graphic_pane

0x0913,	// (0x0001fd37) list_single_graphic_2heading_pane_g1_ParamLimits

0x0913,	// (0x0001fd37) list_single_graphic_2heading_pane_g1

0x091f,	// (0x0001fd43) list_single_graphic_2heading_pane_g4_ParamLimits

0x091f,	// (0x0001fd43) list_single_graphic_2heading_pane_g4

0x092b,	// (0x0001fd4f) list_single_graphic_2heading_pane_g5_ParamLimits

0x092b,	// (0x0001fd4f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002ebd4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002ebd4) list_single_graphic_2heading_pane_g

0x0937,	// (0x0001fd5b) list_single_graphic_2heading_pane_t1_ParamLimits

0x0937,	// (0x0001fd5b) list_single_graphic_2heading_pane_t1

0x094b,	// (0x0001fd6f) list_single_graphic_2heading_pane_t2_ParamLimits

0x094b,	// (0x0001fd6f) list_single_graphic_2heading_pane_t2

0x0965,	// (0x0001fd89) list_single_graphic_2heading_pane_t3_ParamLimits

0x0965,	// (0x0001fd89) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002ebdb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002ebdb) list_single_graphic_2heading_pane_t

0x5413,	// (0x00024837) bg_popup_sub_pane_cp2

0x543d,	// (0x00024861) grid_toobar_pane

0x22d3,	// (0x000216f7) cell_toolbar_pane_ParamLimits

0x22d3,	// (0x000216f7) cell_toolbar_pane

0x5479,	// (0x0002489d) cell_toolbar_pane_g1_ParamLimits

0x5479,	// (0x0002489d) cell_toolbar_pane_g1

0x548d,	// (0x000248b1) cell_toolbar_pane_g2_ParamLimits

0x548d,	// (0x000248b1) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002ebe2) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002ebe2) cell_toolbar_pane_g

0x54af,	// (0x000248d3) grid_highlight_pane_cp2_ParamLimits

0x54af,	// (0x000248d3) grid_highlight_pane_cp2

0x54c9,	// (0x000248ed) toolbar_button_pane

0x54d5,	// (0x000248f9) toolbar_button_pane_g1

0x54dd,	// (0x00024901) toolbar_button_pane_g2

0x54e5,	// (0x00024909) toolbar_button_pane_g3

0x54ed,	// (0x00024911) toolbar_button_pane_g4

0x54f5,	// (0x00024919) toolbar_button_pane_g5

0x54fd,	// (0x00024921) toolbar_button_pane_g6

0x5505,	// (0x00024929) toolbar_button_pane_g7

0x550d,	// (0x00024931) toolbar_button_pane_g8

0x5515,	// (0x00024939) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002ebe7) toolbar_button_pane_g

0x230b,	// (0x0002172f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x230b,	// (0x0002172f) list_single_2graphic_pane_g1_cp3

0xc9db,	// (0x0002bdff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc9db,	// (0x0002bdff) list_single_2graphic_pane_g2_cp3

0x2328,	// (0x0002174c) list_single_2graphic_pane_g3_cp3

0x2330,	// (0x00021754) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2330,	// (0x00021754) list_single_2graphic_pane_g4_cp3

0x233c,	// (0x00021760) list_single_2graphic_pane_t1_cp3_ParamLimits

0x233c,	// (0x00021760) list_single_2graphic_pane_t1_cp3

0x5929,	// (0x00024d4d) list_single_midp_graphic_pane_g2_ParamLimits

0x5929,	// (0x00024d4d) list_single_midp_graphic_pane_g2

0x1d26,	// (0x0002114a) aid_zoom_text_primary

0x08e7,	// (0x0001fd0b) aid_zoom_text_secondary

0xd6aa,	// (0x0002cace) status_small_pane_g7_ParamLimits

0xd6aa,	// (0x0002cace) status_small_pane_g7

0xd6cd,	// (0x0002caf1) status_small_pane_t1_ParamLimits

0xd09e,	// (0x0002c4c2) title_pane_g2

0x0003,

0xf54e,	// (0x0002e972) title_pane_g

0xd316,	// (0x0002c73a) aid_size_cell_colour_1_pane_ParamLimits

0xd316,	// (0x0002c73a) aid_size_cell_colour_1_pane

0xd32a,	// (0x0002c74e) aid_size_cell_colour_2_pane_ParamLimits

0xd32a,	// (0x0002c74e) aid_size_cell_colour_2_pane

0xd33e,	// (0x0002c762) aid_size_cell_colour_3_pane_ParamLimits

0xd33e,	// (0x0002c762) aid_size_cell_colour_3_pane

0xd352,	// (0x0002c776) aid_size_cell_colour_4_pane_ParamLimits

0xd352,	// (0x0002c776) aid_size_cell_colour_4_pane

0x1774,	// (0x00020b98) title_pane_stacon_g1_ParamLimits

0x1774,	// (0x00020b98) title_pane_stacon_g1

0x5b8e,	// (0x00024fb2) popup_note_wait_window_g3_ParamLimits

0x5b8e,	// (0x00024fb2) popup_note_wait_window_g3

0x5c04,	// (0x00025028) popup_note_wait_window_t5_ParamLimits

0x5c04,	// (0x00025028) popup_note_wait_window_t5

0x3683,	// (0x00022aa7) main_feb_china_hwr_fs_writing_pane

0xc38b,	// (0x0002b7af) popup_feb_china_hwr_fs_window_ParamLimits

0xc38b,	// (0x0002b7af) popup_feb_china_hwr_fs_window

0xc9ec,	// (0x0002be10) aid_size_cell_hwr_fs_ParamLimits

0xc9ec,	// (0x0002be10) aid_size_cell_hwr_fs

0x5549,	// (0x0002496d) bg_popup_sub_pane_cp3_ParamLimits

0x5549,	// (0x0002496d) bg_popup_sub_pane_cp3

0xca01,	// (0x0002be25) grid_hwr_fs_pane_ParamLimits

0xca01,	// (0x0002be25) grid_hwr_fs_pane

0x2385,	// (0x000217a9) linegrid_hwr_fs_pane_ParamLimits

0x2385,	// (0x000217a9) linegrid_hwr_fs_pane

0xca19,	// (0x0002be3d) cell_hwr_fs_pane_ParamLimits

0xca19,	// (0x0002be3d) cell_hwr_fs_pane

0x5555,	// (0x00024979) linegrid_hwr_fs_pane_g1_ParamLimits

0x5555,	// (0x00024979) linegrid_hwr_fs_pane_g1

0xdb71,	// (0x0002cf95) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb71,	// (0x0002cf95) linegrid_hwr_fs_pane_g2

0x5573,	// (0x00024997) linegrid_hwr_fs_pane_g3_ParamLimits

0x5573,	// (0x00024997) linegrid_hwr_fs_pane_g3

0x23b7,	// (0x000217db) linegrid_hwr_fs_pane_g4_ParamLimits

0x23b7,	// (0x000217db) linegrid_hwr_fs_pane_g4

0x23d1,	// (0x000217f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x23d1,	// (0x000217f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002ec0d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002ec0d) linegrid_hwr_fs_pane_g

0x557f,	// (0x000249a3) cell_hwr_fs_pane_g1_ParamLimits

0x557f,	// (0x000249a3) cell_hwr_fs_pane_g1

0x534a,	// (0x0002476e) cell_hwr_fs_pane_g2_ParamLimits

0x534a,	// (0x0002476e) cell_hwr_fs_pane_g2

0xdb83,	// (0x0002cfa7) cell_hwr_fs_pane_g3_ParamLimits

0xdb83,	// (0x0002cfa7) cell_hwr_fs_pane_g3

0xdb90,	// (0x0002cfb4) cell_hwr_fs_pane_g4_ParamLimits

0xdb90,	// (0x0002cfb4) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002ec18) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002ec18) cell_hwr_fs_pane_g

0xca3f,	// (0x0002be63) cell_hwr_fs_pane_t1

0x3683,	// (0x00022aa7) grid_highlight_pane_cp6

0x3683,	// (0x00022aa7) main_idle_act2_pane

0x414c,	// (0x00023570) aid_inside_area_popup_secondary

0xdc5a,	// (0x0002d07e) aid_inside_area_window_primary_ParamLimits

0xdc5a,	// (0x0002d07e) aid_inside_area_window_primary

0x6dc3,	// (0x000261e7) ai2_news_ticker_pane

0x6dcb,	// (0x000261ef) aid_size_cell_ai1_link_ParamLimits

0x6dcb,	// (0x000261ef) aid_size_cell_ai1_link

0xe011,	// (0x0002d435) popup_ai2_data_window_ParamLimits

0xe011,	// (0x0002d435) popup_ai2_data_window

0x6dfb,	// (0x0002621f) popup_ai2_link_window_ParamLimits

0x6dfb,	// (0x0002621f) popup_ai2_link_window

0x5549,	// (0x0002496d) bg_popup_sub_pane_cp4_ParamLimits

0x5549,	// (0x0002496d) bg_popup_sub_pane_cp4

0x6e0f,	// (0x00026233) grid_ai2_link_pane_ParamLimits

0x6e0f,	// (0x00026233) grid_ai2_link_pane

0x6e26,	// (0x0002624a) popup_ai2_link_window_g1_ParamLimits

0x6e26,	// (0x0002624a) popup_ai2_link_window_g1

0x6e32,	// (0x00026256) popup_ai2_link_window_g2_ParamLimits

0x6e32,	// (0x00026256) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002edeb) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002edeb) popup_ai2_link_window_g

0x6e41,	// (0x00026265) ai2_mp_button_pane

0x6e49,	// (0x0002626d) ai2_mp_volume_pane

0x5756,	// (0x00024b7a) bg_popup_sub_pane_cp5_ParamLimits

0x5756,	// (0x00024b7a) bg_popup_sub_pane_cp5

0x6e51,	// (0x00026275) heading_ai2_gene_pane_ParamLimits

0x6e51,	// (0x00026275) heading_ai2_gene_pane

0x6e5d,	// (0x00026281) list_ai2_gene_pane_ParamLimits

0x6e5d,	// (0x00026281) list_ai2_gene_pane

0x6ea5,	// (0x000262c9) cell_ai2_link_pane_ParamLimits

0x6ea5,	// (0x000262c9) cell_ai2_link_pane

0x6ebb,	// (0x000262df) cell_ai2_link_pane_g1

0x3683,	// (0x00022aa7) grid_highlight_pane_cp7

0x26d9,	// (0x00021afd) ai2_mp_volume_pane_g1

0x6f8b,	// (0x000263af) ai2_mp_volume_pane_g2

0xe03b,	// (0x0002d45f) list_ai2_gene_pane_t1

0x6f93,	// (0x000263b7) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002ee04) ai2_mp_volume_pane_g

0x26e1,	// (0x00021b05) volume_small_pane_cp3

0x6f9b,	// (0x000263bf) aid_size_cell_ai2_button

0x6fa3,	// (0x000263c7) grid_ai2_button_pane

0x6fac,	// (0x000263d0) cell_ai2_button_pane_ParamLimits

0x6fac,	// (0x000263d0) cell_ai2_button_pane

0x3679,	// (0x00022a9d) cell_ai2_button_pane_g1

0x3683,	// (0x00022aa7) grid_highlight_pane_cp8

0x6f4b,	// (0x0002636f) ai2_gene_pane_t1_ParamLimits

0x6f4b,	// (0x0002636f) ai2_gene_pane_t1

0xc315,	// (0x0002b739) aid_height_parent_landscape

0xdda1,	// (0x0002d1c5) aid_height_set_list

0x68b7,	// (0x00025cdb) aid_size_parent

0xdfb9,	// (0x0002d3dd) aid_size_cell_graphic_pane_ParamLimits

0x6e6d,	// (0x00026291) popup_ai2_data_window_g1_ParamLimits

0x6e6d,	// (0x00026291) popup_ai2_data_window_g1

0x6e79,	// (0x0002629d) ai2_news_ticker_pane_g1

0x6e81,	// (0x000262a5) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002edf0) ai2_news_ticker_pane_g

0x6e89,	// (0x000262ad) ai2_news_ticker_pane_t1

0x6e97,	// (0x000262bb) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002edf5) ai2_news_ticker_pane_t

0x6ec4,	// (0x000262e8) heading_ai2_gene_pane_g1

0x6ecc,	// (0x000262f0) heading_ai2_gene_pane_t1_ParamLimits

0x6ecc,	// (0x000262f0) heading_ai2_gene_pane_t1

0x6ee1,	// (0x00026305) list_highlight_pane_cp6

0xe025,	// (0x0002d449) ai2_gene_pane_ParamLimits

0xe025,	// (0x0002d449) ai2_gene_pane

0xe049,	// (0x0002d46d) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002edfa) list_ai2_gene_pane_t

0x6f1c,	// (0x00026340) list_highlight_pane_cp8_ParamLimits

0x6f1c,	// (0x00026340) list_highlight_pane_cp8

0x6f2d,	// (0x00026351) ai2_gene_pane_g1_ParamLimits

0x6f2d,	// (0x00026351) ai2_gene_pane_g1

0x6f3f,	// (0x00026363) ai2_gene_pane_g2_ParamLimits

0x6f3f,	// (0x00026363) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002edff) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002edff) ai2_gene_pane_g

0x3f8e,	// (0x000233b2) scroll_pane_cp12

0xc2d2,	// (0x0002b6f6) control_pane_t3_ParamLimits

0xc2d2,	// (0x0002b6f6) control_pane_t3

0xd6be,	// (0x0002cae2) status_small_pane_g8_ParamLimits

0xd6be,	// (0x0002cae2) status_small_pane_g8

0xc420,	// (0x0002b844) popup_find_window_ParamLimits

0xc6ad,	// (0x0002bad1) popup_note_image_window_ParamLimits

0x0913,	// (0x0001fd37) list_double2_graphic_pane_vc_g1_ParamLimits

0x0913,	// (0x0001fd37) list_double2_graphic_pane_vc_g1

0x091f,	// (0x0001fd43) list_double2_graphic_pane_vc_g2_ParamLimits

0x091f,	// (0x0001fd43) list_double2_graphic_pane_vc_g2

0x092b,	// (0x0001fd4f) list_double2_graphic_pane_vc_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ebd4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ebd4) list_double2_graphic_pane_vc_g

0x097d,	// (0x0001fda1) list_double2_graphic_pane_vc_t1_ParamLimits

0x097d,	// (0x0001fda1) list_double2_graphic_pane_vc_t1

0x091f,	// (0x0001fd43) list_single_heading_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_heading_pane_vc_g1

0x092b,	// (0x0001fd4f) list_single_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_heading_pane_vc_g

0x0993,	// (0x0001fdb7) list_single_heading_pane_vc_t1_ParamLimits

0x0993,	// (0x0001fdb7) list_single_heading_pane_vc_t1

0x09a9,	// (0x0001fdcd) list_single_heading_pane_vc_t2_ParamLimits

0x09a9,	// (0x0001fdcd) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002ebfc) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002ebfc) list_single_heading_pane_vc_t

0x09bb,	// (0x0001fddf) list_setting_number_pane_vc_g1_ParamLimits

0x09bb,	// (0x0001fddf) list_setting_number_pane_vc_g1

0x09c7,	// (0x0001fdeb) list_setting_number_pane_vc_g2_ParamLimits

0x09c7,	// (0x0001fdeb) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ec01) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ec01) list_setting_number_pane_vc_g

0x09d3,	// (0x0001fdf7) list_setting_number_pane_vc_t1_ParamLimits

0x09d3,	// (0x0001fdf7) list_setting_number_pane_vc_t1

0x09e7,	// (0x0001fe0b) list_setting_number_pane_vc_t2_ParamLimits

0x09e7,	// (0x0001fe0b) list_setting_number_pane_vc_t2

0x0a03,	// (0x0001fe27) list_setting_number_pane_vc_t3_ParamLimits

0x0a03,	// (0x0001fe27) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002ec06) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002ec06) list_setting_number_pane_vc_t

0x0a21,	// (0x0001fe45) set_value_pane_vc_ParamLimits

0x0a21,	// (0x0001fe45) set_value_pane_vc

0x6a6f,	// (0x00025e93) list_double2_graphic_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double2_graphic_pane_vc

0x6a6f,	// (0x00025e93) list_double2_large_graphic_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double2_large_graphic_pane_vc

0x6a6f,	// (0x00025e93) list_double2_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double2_pane_vc

0x6a6f,	// (0x00025e93) list_double_graphic_heading_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_graphic_heading_pane_vc

0x6a6f,	// (0x00025e93) list_double_graphic_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_graphic_pane_vc

0x6a6f,	// (0x00025e93) list_double_heading_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_heading_pane_vc

0x6a81,	// (0x00025ea5) list_double_large_graphic_pane_vc_ParamLimits

0x6a81,	// (0x00025ea5) list_double_large_graphic_pane_vc

0x6a6f,	// (0x00025e93) list_double_number_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_number_pane_vc

0x6a6f,	// (0x00025e93) list_double_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_pane_vc

0x6a6f,	// (0x00025e93) list_double_time_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_double_time_pane_vc

0x6a6f,	// (0x00025e93) list_setting_number_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_setting_number_pane_vc

0x6a6f,	// (0x00025e93) list_setting_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_setting_pane_vc

0x6a6f,	// (0x00025e93) list_single_graphic_heading_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_single_graphic_heading_pane_vc

0x6a6f,	// (0x00025e93) list_single_heading_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_single_heading_pane_vc

0x6a6f,	// (0x00025e93) list_single_number_heading_pane_vc_ParamLimits

0x6a6f,	// (0x00025e93) list_single_number_heading_pane_vc

0x0913,	// (0x0001fd37) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0913,	// (0x0001fd37) list_double_graphic_heading_pane_vc_g1

0x091f,	// (0x0001fd43) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x091f,	// (0x0001fd43) list_double_graphic_heading_pane_vc_g2

0x092b,	// (0x0001fd4f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ebd4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ebd4) list_double_graphic_heading_pane_vc_g

0x0b7b,	// (0x0001ff9f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b7b,	// (0x0001ff9f) list_double_graphic_heading_pane_vc_t1

0x0b97,	// (0x0001ffbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b97,	// (0x0001ffbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002ee0b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002ee0b) list_double_graphic_heading_pane_vc_t

0x09bb,	// (0x0001fddf) list_setting_pane_vc_g1_ParamLimits

0x09bb,	// (0x0001fddf) list_setting_pane_vc_g1

0x09c7,	// (0x0001fdeb) list_setting_pane_vc_g2_ParamLimits

0x09c7,	// (0x0001fdeb) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ec01) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ec01) list_setting_pane_vc_g

0x0bb5,	// (0x0001ffd9) list_setting_pane_vc_t1_ParamLimits

0x0bb5,	// (0x0001ffd9) list_setting_pane_vc_t1

0x0bd1,	// (0x0001fff5) list_setting_pane_vc_t2_ParamLimits

0x0bd1,	// (0x0001fff5) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002ee39) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002ee39) list_setting_pane_vc_t

0x0a21,	// (0x0001fe45) set_value_pane_cp_vc_ParamLimits

0x0a21,	// (0x0001fe45) set_value_pane_cp_vc

0x091f,	// (0x0001fd43) list_single_number_heading_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_single_number_heading_pane_vc_g1

0x092b,	// (0x0001fd4f) list_single_number_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_single_number_heading_pane_vc_g

0x0bed,	// (0x00020011) list_single_number_heading_pane_vc_t1_ParamLimits

0x0bed,	// (0x00020011) list_single_number_heading_pane_vc_t1

0x0c03,	// (0x00020027) list_single_number_heading_pane_vc_t2_ParamLimits

0x0c03,	// (0x00020027) list_single_number_heading_pane_vc_t2

0x0c15,	// (0x00020039) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c15,	// (0x00020039) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002ee3e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002ee3e) list_single_number_heading_pane_vc_t

0x0913,	// (0x0001fd37) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0913,	// (0x0001fd37) list_single_graphic_heading_pane_vc_g1

0x091f,	// (0x0001fd43) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x091f,	// (0x0001fd43) list_single_graphic_heading_pane_vc_g4

0x092b,	// (0x0001fd4f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x092b,	// (0x0001fd4f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002ebd4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ebd4) list_single_graphic_heading_pane_vc_g

0x0c27,	// (0x0002004b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c27,	// (0x0002004b) list_single_graphic_heading_pane_vc_t1

0x0c3d,	// (0x00020061) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c3d,	// (0x00020061) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002ee45) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002ee45) list_single_graphic_heading_pane_vc_t

0x091f,	// (0x0001fd43) list_double2_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_double2_pane_vc_g1

0x092b,	// (0x0001fd4f) list_double2_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_double2_pane_vc_g

0x0c4f,	// (0x00020073) list_double2_pane_vc_t1_ParamLimits

0x0c4f,	// (0x00020073) list_double2_pane_vc_t1

0x0c65,	// (0x00020089) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0c65,	// (0x00020089) list_double2_large_graphic_pane_vc_g1

0x091f,	// (0x0001fd43) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x091f,	// (0x0001fd43) list_double2_large_graphic_pane_vc_g2

0x092b,	// (0x0001fd4f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x092b,	// (0x0001fd4f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002ea09) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002ea09) list_double2_large_graphic_pane_vc_g

0x0c71,	// (0x00020095) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c71,	// (0x00020095) list_double2_large_graphic_pane_vc_t1

0x0c87,	// (0x000200ab) list_double_time_pane_vc_g1_ParamLimits

0x0c87,	// (0x000200ab) list_double_time_pane_vc_g1

0x0c93,	// (0x000200b7) list_double_time_pane_vc_g2_ParamLimits

0x0c93,	// (0x000200b7) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002ee4a) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002ee4a) list_double_time_pane_vc_g

0x0c9f,	// (0x000200c3) list_double_time_pane_vc_t1_ParamLimits

0x0c9f,	// (0x000200c3) list_double_time_pane_vc_t1

0x0cc3,	// (0x000200e7) list_double_time_pane_vc_t2_ParamLimits

0x0cc3,	// (0x000200e7) list_double_time_pane_vc_t2

0x0d12,	// (0x00020136) list_double_time_pane_vc_t3_ParamLimits

0x0d12,	// (0x00020136) list_double_time_pane_vc_t3

0x0d24,	// (0x00020148) list_double_time_pane_vc_t4_ParamLimits

0x0d24,	// (0x00020148) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002ee4f) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002ee4f) list_double_time_pane_vc_t

0x091f,	// (0x0001fd43) list_double_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_double_pane_vc_g1

0x092b,	// (0x0001fd4f) list_double_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_double_pane_vc_g

0x0d38,	// (0x0002015c) list_double_pane_vc_t1_ParamLimits

0x0d38,	// (0x0002015c) list_double_pane_vc_t1

0x0d4c,	// (0x00020170) list_double_pane_vc_t2_ParamLimits

0x0d4c,	// (0x00020170) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002ee58) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002ee58) list_double_pane_vc_t

0x091f,	// (0x0001fd43) list_double_number_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_double_number_pane_vc_g1

0x092b,	// (0x0001fd4f) list_double_number_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_double_number_pane_vc_g

0x0d64,	// (0x00020188) list_double_number_pane_vc_t1_ParamLimits

0x0d64,	// (0x00020188) list_double_number_pane_vc_t1

0x0d76,	// (0x0002019a) list_double_number_pane_vc_t2_ParamLimits

0x0d76,	// (0x0002019a) list_double_number_pane_vc_t2

0x0d8a,	// (0x000201ae) list_double_number_pane_vc_t3_ParamLimits

0x0d8a,	// (0x000201ae) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002ee5d) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002ee5d) list_double_number_pane_vc_t

0x0da2,	// (0x000201c6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0da2,	// (0x000201c6) list_double_large_graphic_pane_vc_g1

0x0dc4,	// (0x000201e8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0dc4,	// (0x000201e8) list_double_large_graphic_pane_vc_g2

0x0dd8,	// (0x000201fc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0dd8,	// (0x000201fc) list_double_large_graphic_pane_vc_g3

0x0de7,	// (0x0002020b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0de7,	// (0x0002020b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002ee64) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002ee64) list_double_large_graphic_pane_vc_g

0x0df3,	// (0x00020217) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0df3,	// (0x00020217) list_double_large_graphic_pane_vc_t1

0x0e0f,	// (0x00020233) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0e0f,	// (0x00020233) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ee6d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ee6d) list_double_large_graphic_pane_vc_t

0x091f,	// (0x0001fd43) list_double_heading_pane_vc_g1_ParamLimits

0x091f,	// (0x0001fd43) list_double_heading_pane_vc_g1

0x092b,	// (0x0001fd4f) list_double_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x0001fd4f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e9ec) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e9ec) list_double_heading_pane_vc_g

0x0e31,	// (0x00020255) list_double_heading_pane_vc_t1_ParamLimits

0x0e31,	// (0x00020255) list_double_heading_pane_vc_t1

0x0e45,	// (0x00020269) list_double_heading_pane_vc_t2_ParamLimits

0x0e45,	// (0x00020269) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002ee72) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ee72) list_double_heading_pane_vc_t

0x0e5d,	// (0x00020281) list_double_graphic_pane_vc_g1_ParamLimits

0x0e5d,	// (0x00020281) list_double_graphic_pane_vc_g1

0x0e69,	// (0x0002028d) list_double_graphic_pane_vc_g2_ParamLimits

0x0e69,	// (0x0002028d) list_double_graphic_pane_vc_g2

0x091f,	// (0x0001fd43) list_double_graphic_pane_vc_g3_ParamLimits

0x091f,	// (0x0001fd43) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002ee77) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002ee77) list_double_graphic_pane_vc_g

0x0e86,	// (0x000202aa) list_double_graphic_pane_vc_t1_ParamLimits

0x0e86,	// (0x000202aa) list_double_graphic_pane_vc_t1

0x0eb0,	// (0x000202d4) list_double_graphic_pane_vc_t2_ParamLimits

0x0eb0,	// (0x000202d4) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002ee80) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002ee80) list_double_graphic_pane_vc_t

0x12d1,	// (0x000206f5) aid_size_cell_fastswap

0xbf95,	// (0x0002b3b9) aid_size_cell_touch_ParamLimits

0xbf95,	// (0x0002b3b9) aid_size_cell_touch

0x1534,	// (0x00020958) popup_fast_swap_wide_window_ParamLimits

0x1534,	// (0x00020958) popup_fast_swap_wide_window

0xc145,	// (0x0002b569) touch_pane_ParamLimits

0xc145,	// (0x0002b569) touch_pane

0x3fe4,	// (0x00023408) button_value_adjust_pane_cp2

0x05fa,	// (0x0001fa1e) button_value_adjust_pane_cp4

0x061a,	// (0x0001fa3e) form_field_data_pane_cp2

0xbb2a,	// (0x0002af4e) form_field_data_wide_pane_cp2

0x4464,	// (0x00023888) bg_scroll_pane_ParamLimits

0x18d6,	// (0x00020cfa) scroll_handle_pane_ParamLimits

0x18ea,	// (0x00020d0e) scroll_sc2_down_pane_ParamLimits

0x18ea,	// (0x00020d0e) scroll_sc2_down_pane

0x4495,	// (0x000238b9) scroll_sc2_up_pane_ParamLimits

0x4495,	// (0x000238b9) scroll_sc2_up_pane

0xe169,	// (0x0002d58d) grid_wheel_folder_pane_g1_ParamLimits

0xe169,	// (0x0002d58d) grid_wheel_folder_pane_g1

0x1aaf,	// (0x00020ed3) clock_nsta_pane_cp2_ParamLimits

0x1aaf,	// (0x00020ed3) clock_nsta_pane_cp2

0xd5ad,	// (0x0002c9d1) listscroll_midp_pane_ParamLimits

0xd5b9,	// (0x0002c9dd) midp_canvas_pane

0x4f89,	// (0x000243ad) nsta_clock_indic_pane

0x4fbd,	// (0x000243e1) listscroll_form_pane_vc

0x4fc5,	// (0x000243e9) listscroll_set_pane_vc_ParamLimits

0x4fc5,	// (0x000243e9) listscroll_set_pane_vc

0xd83e,	// (0x0002cc62) clock_nsta_pane

0xd868,	// (0x0002cc8c) indicator_nsta_pane

0x5413,	// (0x00024837) bg_popup_sub_pane_cp2_ParamLimits

0x5427,	// (0x0002484b) find_pane_cp2_ParamLimits

0x5427,	// (0x0002484b) find_pane_cp2

0x543d,	// (0x00024861) grid_toobar_pane_ParamLimits

0x551d,	// (0x00024941) list_form_gen_pane_vc_ParamLimits

0x551d,	// (0x00024941) list_form_gen_pane_vc

0x5533,	// (0x00024957) scroll_pane_cp8_vc_ParamLimits

0x5533,	// (0x00024957) scroll_pane_cp8_vc

0x55af,	// (0x000249d3) data_form_wide_pane_vc_ParamLimits

0x55af,	// (0x000249d3) data_form_wide_pane_vc

0x55bb,	// (0x000249df) form_field_data_wide_pane_vc_g1

0x55c3,	// (0x000249e7) form_field_data_wide_pane_vc_t1_ParamLimits

0x55c3,	// (0x000249e7) form_field_data_wide_pane_vc_t1

0x3ff8,	// (0x0002341c) input_focus_pane_cp6_vc_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_cp6_vc

0x5909,	// (0x00024d2d) list_midp_pane_ParamLimits

0x6c50,	// (0x00026074) scroll_pane_cp16_ParamLimits

0x6c50,	// (0x00026074) scroll_pane_cp16

0x5963,	// (0x00024d87) button_value_adjust_pane_ParamLimits

0x5963,	// (0x00024d87) button_value_adjust_pane

0xddb2,	// (0x0002d1d6) button_value_adjust_pane_cp6_ParamLimits

0xddb2,	// (0x0002d1d6) button_value_adjust_pane_cp6

0xdecc,	// (0x0002d2f0) settings_code_pane_cp_ParamLimits

0xdecc,	// (0x0002d2f0) settings_code_pane_cp

0x3679,	// (0x00022a9d) cell_touch_pane_g1

0x3679,	// (0x00022a9d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002eb27) cell_touch_pane_g

0xe057,	// (0x0002d47b) cell_touch_pane_cp_ParamLimits

0xe057,	// (0x0002d47b) cell_touch_pane_cp

0xe073,	// (0x0002d497) cell_touch_pane_ParamLimits

0xe073,	// (0x0002d497) cell_touch_pane

0x3679,	// (0x00022a9d) scroll_sc2_down_pane_g1

0x3679,	// (0x00022a9d) scroll_sc2_up_pane_g1

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp4_vc

0x6fe0,	// (0x00026404) list_set_graphic_pane_vc_g1_ParamLimits

0x6fe0,	// (0x00026404) list_set_graphic_pane_vc_g1

0x6fec,	// (0x00026410) list_set_graphic_pane_vc_g2_ParamLimits

0x6fec,	// (0x00026410) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002ee10) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002ee10) list_set_graphic_pane_vc_g

0x6ff8,	// (0x0002641c) text_primary_small_cp13_vc_ParamLimits

0x6ff8,	// (0x0002641c) text_primary_small_cp13_vc

0x7010,	// (0x00026434) list_set_graphic_pane_vc_ParamLimits

0x7010,	// (0x00026434) list_set_graphic_pane_vc

0x3683,	// (0x00022aa7) input_focus_pane_cp2_vc

0x3679,	// (0x00022a9d) setting_code_pane_vc_g1

0x37ae,	// (0x00022bd2) setting_code_pane_vc_t1

0x7022,	// (0x00026446) set_text_pane_vc_t1_ParamLimits

0x7022,	// (0x00026446) set_text_pane_vc_t1

0x3683,	// (0x00022aa7) input_focus_pane_cp1_vc

0x703e,	// (0x00026462) list_set_text_pane_vc

0x3679,	// (0x00022a9d) setting_text_pane_vc_g1

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp2_vc

0x37a5,	// (0x00022bc9) setting_slider_graphic_pane_vc_g1

0x7048,	// (0x0002646c) setting_slider_graphic_pane_vc_t1

0x7058,	// (0x0002647c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002ee15) setting_slider_graphic_pane_vc_t

0x7068,	// (0x0002648c) slider_set_pane_cp_vc

0x7070,	// (0x00026494) slider_set_pane_vc_g1

0x7079,	// (0x0002649d) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002ee1a) slider_set_pane_vc_g

0x4050,	// (0x00023474) set_opt_bg_pane_g1_copy1

0x4058,	// (0x0002347c) set_opt_bg_pane_g2_copy1

0x70a5,	// (0x000264c9) set_opt_bg_pane_g3_copy1

0x4068,	// (0x0002348c) set_opt_bg_pane_g4_copy1

0x4070,	// (0x00023494) set_opt_bg_pane_g5_copy1

0x4078,	// (0x0002349c) set_opt_bg_pane_g6_copy1

0x70af,	// (0x000264d3) set_opt_bg_pane_g7_copy1

0x70b7,	// (0x000264db) set_opt_bg_pane_g8_copy1

0x70c1,	// (0x000264e5) set_opt_bg_pane_g9_copy1

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp_vc

0x70cb,	// (0x000264ef) setting_slider_pane_vc_t1

0x70da,	// (0x000264fe) setting_slider_pane_vc_t2

0x70ea,	// (0x0002650e) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002ee29) setting_slider_pane_vc_t

0x70fa,	// (0x0002651e) slider_set_pane_vc

0x23f5,	// (0x00021819) volume_set_pane_vc_g1

0x23fe,	// (0x00021822) volume_set_pane_vc_g2

0x2407,	// (0x0002182b) volume_set_pane_vc_g3

0x2410,	// (0x00021834) volume_set_pane_vc_g4

0x2419,	// (0x0002183d) volume_set_pane_vc_g5

0x2422,	// (0x00021846) volume_set_pane_vc_g6

0x242b,	// (0x0002184f) volume_set_pane_vc_g7

0x2434,	// (0x00021858) volume_set_pane_vc_g8

0x243d,	// (0x00021861) volume_set_pane_vc_g9

0x2446,	// (0x0002186a) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002ecce) volume_set_pane_vc_g

0x7102,	// (0x00026526) volume_set_pane_vc

0x710a,	// (0x0002652e) button_value_adjust_pane_cp1_vc

0x7114,	// (0x00026538) list_highlight_pane_cp2_vc

0x711d,	// (0x00026541) list_set_pane_vc_ParamLimits

0x711d,	// (0x00026541) list_set_pane_vc

0x717b,	// (0x0002659f) main_pane_set_vc_t1_ParamLimits

0x717b,	// (0x0002659f) main_pane_set_vc_t1

0x7190,	// (0x000265b4) main_pane_set_vc_t2_ParamLimits

0x7190,	// (0x000265b4) main_pane_set_vc_t2

0x71a2,	// (0x000265c6) main_pane_set_vc_t3_ParamLimits

0x71a2,	// (0x000265c6) main_pane_set_vc_t3

0x71b6,	// (0x000265da) main_pane_set_vc_t4_ParamLimits

0x71b6,	// (0x000265da) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002ee30) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002ee30) main_pane_set_vc_t

0x71ca,	// (0x000265ee) setting_code_pane_vc_ParamLimits

0x71ca,	// (0x000265ee) setting_code_pane_vc

0x71db,	// (0x000265ff) setting_slider_graphic_pane_vc

0x71db,	// (0x000265ff) setting_slider_pane_vc

0x71db,	// (0x000265ff) setting_text_pane_vc

0x71db,	// (0x000265ff) setting_volume_pane_vc

0x71e5,	// (0x00026609) scroll_pane_cp121_vc

0x3fd2,	// (0x000233f6) set_content_pane_vc

0x71ed,	// (0x00026611) button_value_adjust_pane_g1

0x71f6,	// (0x0002661a) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002ee85) button_value_adjust_pane_g

0x71ff,	// (0x00026623) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71ff,	// (0x00026623) form_field_slider_wide_pane_vc_t1

0x7213,	// (0x00026637) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7213,	// (0x00026637) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002ee8a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002ee8a) form_field_slider_wide_pane_vc_t

0x39de,	// (0x00022e02) input_focus_pane_cp10_vc_ParamLimits

0x39de,	// (0x00022e02) input_focus_pane_cp10_vc

0x7241,	// (0x00026665) slider_cont_pane_cp1_vc_ParamLimits

0x7241,	// (0x00026665) slider_cont_pane_cp1_vc

0x7253,	// (0x00026677) slider_form_pane_g1_cp2

0x7079,	// (0x0002649d) slider_form_pane_g2_cp2

0x7280,	// (0x000266a4) form_field_slider_pane_vc_t3

0x728e,	// (0x000266b2) form_field_slider_pane_vc_t4

0x729c,	// (0x000266c0) slider_form_pane_vc_ParamLimits

0x729c,	// (0x000266c0) slider_form_pane_vc

0x72a9,	// (0x000266cd) form_field_slider_pane_vc_t1_ParamLimits

0x72a9,	// (0x000266cd) form_field_slider_pane_vc_t1

0x7213,	// (0x00026637) form_field_slider_pane_vc_t2_ParamLimits

0x7213,	// (0x00026637) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002ee9c) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002ee9c) form_field_slider_pane_vc_t

0x39de,	// (0x00022e02) input_focus_pane_cp9_vc_ParamLimits

0x39de,	// (0x00022e02) input_focus_pane_cp9_vc

0x72c5,	// (0x000266e9) slider_cont_pane_vc_ParamLimits

0x72c5,	// (0x000266e9) slider_cont_pane_vc

0x72d9,	// (0x000266fd) list_form_graphic_pane_cp_vc_ParamLimits

0x72d9,	// (0x000266fd) list_form_graphic_pane_cp_vc

0x55bb,	// (0x000249df) form_field_popup_wide_pane_vc_g1

0x72ee,	// (0x00026712) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72ee,	// (0x00026712) form_field_popup_wide_pane_vc_t1

0x3ff8,	// (0x0002341c) input_focus_pane_cp8_vc_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_cp8_vc

0x7333,	// (0x00026757) list_form_wide_pane_vc_ParamLimits

0x7333,	// (0x00026757) list_form_wide_pane_vc

0x733f,	// (0x00026763) list_form_graphic_pane_vc_g1

0x7347,	// (0x0002676b) list_form_graphic_pane_vc_t1_ParamLimits

0x7347,	// (0x0002676b) list_form_graphic_pane_vc_t1

0x3763,	// (0x00022b87) list_highlight_pane_cp5_vc_ParamLimits

0x3763,	// (0x00022b87) list_highlight_pane_cp5_vc

0x7363,	// (0x00026787) list_form_graphic_pane_vc_ParamLimits

0x7363,	// (0x00026787) list_form_graphic_pane_vc

0x55bb,	// (0x000249df) form_field_popup_pane_vc_g1

0x7379,	// (0x0002679d) form_field_popup_pane_vc_t1_ParamLimits

0x7379,	// (0x0002679d) form_field_popup_pane_vc_t1

0x3ff8,	// (0x0002341c) input_focus_pane_cp7_vc_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_cp7_vc

0x7390,	// (0x000267b4) list_form_pane_vc_ParamLimits

0x7390,	// (0x000267b4) list_form_pane_vc

0x739c,	// (0x000267c0) data_form_pane_vc_t1_ParamLimits

0x739c,	// (0x000267c0) data_form_pane_vc_t1

0x4050,	// (0x00023474) input_focus_pane_vc_g1

0x4058,	// (0x0002347c) input_focus_pane_vc_g2

0x4060,	// (0x00023484) input_focus_pane_vc_g3

0x4068,	// (0x0002348c) input_focus_pane_vc_g4

0x4070,	// (0x00023494) input_focus_pane_vc_g5

0x4078,	// (0x0002349c) input_focus_pane_vc_g6

0x4080,	// (0x000234a4) input_focus_pane_vc_g7

0x4088,	// (0x000234ac) input_focus_pane_vc_g8

0x4090,	// (0x000234b4) input_focus_pane_vc_g9

0x3679,	// (0x00022a9d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002eab0) input_focus_pane_vc_g

0x55af,	// (0x000249d3) data_form_pane_vc_ParamLimits

0x55af,	// (0x000249d3) data_form_pane_vc

0x55bb,	// (0x000249df) form_field_data_pane_vc_g1

0x73b7,	// (0x000267db) form_field_data_pane_vc_t1_ParamLimits

0x73b7,	// (0x000267db) form_field_data_pane_vc_t1

0x3ff8,	// (0x0002341c) input_focus_pane_vc_ParamLimits

0x3ff8,	// (0x0002341c) input_focus_pane_vc

0x73d1,	// (0x000267f5) button_value_adjust_pane_cp3_vc

0x73d9,	// (0x000267fd) button_value_adjust_pane_cp5_vc

0x73e1,	// (0x00026805) form_field_data_pane_vc_ParamLimits

0x73e1,	// (0x00026805) form_field_data_pane_vc

0x73f8,	// (0x0002681c) form_field_data_pane_vc_cp2

0x7400,	// (0x00026824) form_field_data_wide_pane_vc_ParamLimits

0x7400,	// (0x00026824) form_field_data_wide_pane_vc

0x7416,	// (0x0002683a) form_field_data_wide_pane_vc_cp2

0x741e,	// (0x00026842) form_field_popup_pane_vc_ParamLimits

0x741e,	// (0x00026842) form_field_popup_pane_vc

0x7435,	// (0x00026859) form_field_popup_wide_pane_vc_ParamLimits

0x7435,	// (0x00026859) form_field_popup_wide_pane_vc

0x744b,	// (0x0002686f) form_field_slider_pane_vc_ParamLimits

0x744b,	// (0x0002686f) form_field_slider_pane_vc

0x745e,	// (0x00026882) form_field_slider_wide_pane_vc_ParamLimits

0x745e,	// (0x00026882) form_field_slider_wide_pane_vc

0xe091,	// (0x0002d4b5) grid_touch_1_pane_ParamLimits

0xe091,	// (0x0002d4b5) grid_touch_1_pane

0xe0a5,	// (0x0002d4c9) grid_touch_2_pane_ParamLimits

0xe0a5,	// (0x0002d4c9) grid_touch_2_pane

0x752c,	// (0x00026950) touch_pane_g1_ParamLimits

0x752c,	// (0x00026950) touch_pane_g1

0x7495,	// (0x000268b9) cell_app_pane_cp_wide_ParamLimits

0x7495,	// (0x000268b9) cell_app_pane_cp_wide

0x74a6,	// (0x000268ca) grid_popup_fast_wide_pane_ParamLimits

0x74a6,	// (0x000268ca) grid_popup_fast_wide_pane

0x74ba,	// (0x000268de) scroll_pane_cp19_ParamLimits

0x74ba,	// (0x000268de) scroll_pane_cp19

0x3683,	// (0x00022aa7) bg_popup_window_pane_cp20

0x74ce,	// (0x000268f2) listscroll_popup_fast_wide_pane

0x41b8,	// (0x000235dc) grid_indicator_nsta_pane

0x74d6,	// (0x000268fa) clock_nsta_pane_g1

0x74df,	// (0x00026903) clock_nsta_pane_t1

0xe0cf,	// (0x0002d4f3) cell_indicator_nsta_pane_ParamLimits

0xe0cf,	// (0x0002d4f3) cell_indicator_nsta_pane

0x752c,	// (0x00026950) cell_indicator_nsta_pane_g1

0xe0e6,	// (0x0002d50a) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002eead) cell_indicator_nsta_pane_g

0x7547,	// (0x0002696b) clock_nsta_pane_cp

0x7550,	// (0x00026974) indicator_nsta_pane_cp

0x7558,	// (0x0002697c) nsta_clock_indic_pane_g1

0x382c,	// (0x00022c50) grid_indicator_pane

0x458a,	// (0x000239ae) scroll_pane_cp29

0x19fe,	// (0x00020e22) indicator_nsta_pane_cp2_ParamLimits

0x19fe,	// (0x00020e22) indicator_nsta_pane_cp2

0x3763,	// (0x00022b87) main_apps_wheel_pane

0x57ca,	// (0x00024bee) form_midp_field_text_pane_ParamLimits

0x5915,	// (0x00024d39) scroll_bar_cp050_ParamLimits

0x75a8,	// (0x000269cc) cell_indicator_pane_ParamLimits

0x75a8,	// (0x000269cc) cell_indicator_pane

0x75bf,	// (0x000269e3) cell_indicator_pane_g1

0xe0f3,	// (0x0002d517) grid_wheel_folder_pane_ParamLimits

0xe0f3,	// (0x0002d517) grid_wheel_folder_pane

0xe101,	// (0x0002d525) list_wheel_apps_pane_ParamLimits

0xe101,	// (0x0002d525) list_wheel_apps_pane

0xe10f,	// (0x0002d533) main_apps_wheel_pane_g1_ParamLimits

0xe10f,	// (0x0002d533) main_apps_wheel_pane_g1

0xe11b,	// (0x0002d53f) main_apps_wheel_pane_g2_ParamLimits

0xe11b,	// (0x0002d53f) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002eec9) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002eec9) main_apps_wheel_pane_g

0xe129,	// (0x0002d54d) main_apps_wheel_pane_t1_ParamLimits

0xe129,	// (0x0002d54d) main_apps_wheel_pane_t1

0xe13d,	// (0x0002d561) list_wheel_apps_pane_g1

0xe145,	// (0x0002d569) list_wheel_apps_pane_g2

0xe14d,	// (0x0002d571) list_wheel_apps_pane_g3

0xe155,	// (0x0002d579) list_wheel_apps_pane_g4

0xe15f,	// (0x0002d583) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002eece) list_wheel_apps_pane_g

0x4b0d,	// (0x00023f31) navi_icon_text_pane

0xd732,	// (0x0002cb56) aid_fill_nsta

0x7690,	// (0x00026ab4) navi_icon_text_pane_g1

0x769c,	// (0x00026ac0) navi_icon_text_pane_t1

0x49a0,	// (0x00023dc4) list_set_graphic_pane_t1_ParamLimits

0x49a0,	// (0x00023dc4) list_set_graphic_pane_t1

0x6084,	// (0x000254a8) popup_midp_note_alarm_window_t6_ParamLimits

0x6084,	// (0x000254a8) popup_midp_note_alarm_window_t6

0x6096,	// (0x000254ba) popup_midp_note_alarm_window_t7_ParamLimits

0x6096,	// (0x000254ba) popup_midp_note_alarm_window_t7

0x60a8,	// (0x000254cc) popup_midp_note_alarm_window_t8_ParamLimits

0x60a8,	// (0x000254cc) popup_midp_note_alarm_window_t8

0x60ba,	// (0x000254de) popup_midp_note_alarm_window_t9_ParamLimits

0x60ba,	// (0x000254de) popup_midp_note_alarm_window_t9

0x60cc,	// (0x000254f0) popup_midp_note_alarm_window_t10_ParamLimits

0x60cc,	// (0x000254f0) popup_midp_note_alarm_window_t10

0x60de,	// (0x00025502) popup_midp_note_alarm_window_t11_ParamLimits

0x60de,	// (0x00025502) popup_midp_note_alarm_window_t11

0x60f0,	// (0x00025514) scroll_pane_cp17_ParamLimits

0x60f0,	// (0x00025514) scroll_pane_cp17

0x23f5,	// (0x00021819) volume_small_pane_cp_g1

0x26ea,	// (0x00021b0e) volume_small_pane_cp_g2

0x26f3,	// (0x00021b17) volume_small_pane_cp_g3

0x26fc,	// (0x00021b20) volume_small_pane_cp_g4

0x2705,	// (0x00021b29) volume_small_pane_cp_g5

0x270e,	// (0x00021b32) volume_small_pane_cp_g6

0x2717,	// (0x00021b3b) volume_small_pane_cp_g7

0x2720,	// (0x00021b44) volume_small_pane_cp_g8

0x2729,	// (0x00021b4d) volume_small_pane_cp_g9

0x2732,	// (0x00021b56) volume_small_pane_cp_g10

0x4d6a,	// (0x0002418e) midp_ticker_pane_g1_ParamLimits

0x4d76,	// (0x0002419a) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002eb7c) midp_ticker_pane_g_ParamLimits

0x4d82,	// (0x000241a6) midp_ticker_pane_t1_ParamLimits

0xd756,	// (0x0002cb7a) aid_fill_nsta_2

0x5901,	// (0x00024d25) list_form2_midp_pane

0x6a3e,	// (0x00025e62) midp_editing_number_pane_ParamLimits

0x6a4d,	// (0x00025e71) midp_ticker_pane_ParamLimits

0x76ae,	// (0x00026ad2) form2_midp_field_pane

0x76d2,	// (0x00026af6) scroll_pane_cp51

0x76f2,	// (0x00026b16) form2_midp_button_pane_ParamLimits

0x76f2,	// (0x00026b16) form2_midp_button_pane

0x7704,	// (0x00026b28) form2_midp_content_pane_ParamLimits

0x7704,	// (0x00026b28) form2_midp_content_pane

0x771e,	// (0x00026b42) form2_midp_field_choice_group_pane

0x7726,	// (0x00026b4a) form2_midp_field_pane_g1

0x772e,	// (0x00026b52) form2_midp_field_pane_g2

0x7736,	// (0x00026b5a) form2_midp_field_pane_g3

0x773e,	// (0x00026b62) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002eef3) form2_midp_field_pane_g

0x7746,	// (0x00026b6a) form2_midp_gauge_slider_pane

0x774e,	// (0x00026b72) form2_midp_gauge_wait_pane

0x7756,	// (0x00026b7a) form2_midp_image_pane_ParamLimits

0x7756,	// (0x00026b7a) form2_midp_image_pane

0x7771,	// (0x00026b95) form2_midp_label_pane_ParamLimits

0x7771,	// (0x00026b95) form2_midp_label_pane

0xe192,	// (0x0002d5b6) form2_midp_label_pane_cp_ParamLimits

0xe192,	// (0x0002d5b6) form2_midp_label_pane_cp

0x77ab,	// (0x00026bcf) form2_midp_string_pane_ParamLimits

0x77ab,	// (0x00026bcf) form2_midp_string_pane

0xbd76,	// (0x0002b19a) form2_midp_text_pane_ParamLimits

0xbd76,	// (0x0002b19a) form2_midp_text_pane

0x77bd,	// (0x00026be1) form2_midp_time_pane

0x77cd,	// (0x00026bf1) input_focus_pane_cp51_ParamLimits

0x77cd,	// (0x00026bf1) input_focus_pane_cp51

0x77e5,	// (0x00026c09) form2_midp_label_pane_t1_ParamLimits

0x77e5,	// (0x00026c09) form2_midp_label_pane_t1

0xbd8f,	// (0x0002b1b3) form2_mdip_text_pane_t1_ParamLimits

0xbd8f,	// (0x0002b1b3) form2_mdip_text_pane_t1

0x0f13,	// (0x00020337) form2_midp_time_pane_t1

0x782e,	// (0x00026c52) form2_midp_gauge_slider_pane_t1

0xe1b1,	// (0x0002d5d5) form2_midp_gauge_slider_pane_t2

0xe1c3,	// (0x0002d5e7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002eefc) form2_midp_gauge_slider_pane_t

0x7864,	// (0x00026c88) form2_midp_slider_pane

0x7870,	// (0x00026c94) form2_midp_gauge_wait_pane_t1

0x787e,	// (0x00026ca2) form2_midp_wait_pane_ParamLimits

0x787e,	// (0x00026ca2) form2_midp_wait_pane

0xe1d5,	// (0x0002d5f9) list_single_2graphic_pane_cp4_ParamLimits

0xe1d5,	// (0x0002d5f9) list_single_2graphic_pane_cp4

0xdbb0,	// (0x0002cfd4) list_single_midp_graphic_pane_cp_ParamLimits

0xdbb0,	// (0x0002cfd4) list_single_midp_graphic_pane_cp

0x3683,	// (0x00022aa7) list_highlight_pane_cp20

0x78cd,	// (0x00026cf1) list_single_2graphic_pane_g1_cp4

0x78d5,	// (0x00026cf9) list_single_2graphic_pane_g2_cp4

0x78dd,	// (0x00026d01) list_single_2graphic_pane_t1_cp4

0x3763,	// (0x00022b87) list_highlight_pane_cp21

0x78ec,	// (0x00026d10) list_single_midp_graphic_pane_g4_cp

0x78fb,	// (0x00026d1f) list_single_midp_graphic_pane_t1_cp

0xe1e9,	// (0x0002d60d) form2_mdip_string_pane_t1_ParamLimits

0xe1e9,	// (0x0002d60d) form2_mdip_string_pane_t1

0x3683,	// (0x00022aa7) bg_wml_button_pane_cp2

0x3679,	// (0x00022a9d) form2_midp_image_pane_g1

0x03e4,	// (0x0001f808) list_double_large_graphic_pane_g5_ParamLimits

0x03e4,	// (0x0001f808) list_double_large_graphic_pane_g5

0xd5ad,	// (0x0002c9d1) midp_form_pane_ParamLimits

0x3763,	// (0x00022b87) main_apps_wheel_pane_ParamLimits

0xc72b,	// (0x0002bb4f) popup_preview_window_ParamLimits

0xc72b,	// (0x0002bb4f) popup_preview_window

0x227e,	// (0x000216a2) popup_touch_info_window_ParamLimits

0x227e,	// (0x000216a2) popup_touch_info_window

0x229c,	// (0x000216c0) popup_touch_menu_window_ParamLimits

0x229c,	// (0x000216c0) popup_touch_menu_window

0x366f,	// (0x00022a93) bg_popup_sub_pane_cp6

0x7a09,	// (0x00026e2d) list_touch_menu_pane

0x7a11,	// (0x00026e35) list_single_touch_menu_pane_ParamLimits

0x7a11,	// (0x00026e35) list_single_touch_menu_pane

0x7a27,	// (0x00026e4b) list_single_touch_menu_pane_t1

0x3763,	// (0x00022b87) bg_popup_sub_pane_cp7_ParamLimits

0x3763,	// (0x00022b87) bg_popup_sub_pane_cp7

0x7a35,	// (0x00026e59) heading_sub_pane

0x7a3d,	// (0x00026e61) list_touch_info_pane_ParamLimits

0x7a3d,	// (0x00026e61) list_touch_info_pane

0x7a4c,	// (0x00026e70) list_single_touch_info_pane_ParamLimits

0x7a4c,	// (0x00026e70) list_single_touch_info_pane

0x7a5e,	// (0x00026e82) list_single_touch_info_pane_t1

0x7a6c,	// (0x00026e90) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002ef0a) list_single_touch_info_pane_t

0x4c8d,	// (0x000240b1) bg_popup_heading_pane_cp

0x7a7a,	// (0x00026e9e) heading_sub_pane_t1

0x5549,	// (0x0002496d) bg_popup_preview_window_pane_cp_ParamLimits

0x5549,	// (0x0002496d) bg_popup_preview_window_pane_cp

0x7a35,	// (0x00026e59) heading_preview_pane

0x7a3d,	// (0x00026e61) list_preview_pane_ParamLimits

0x7a3d,	// (0x00026e61) list_preview_pane

0x7a88,	// (0x00026eac) popup_preview_window_g1

0x7a4c,	// (0x00026e70) list_single_preview_pane_ParamLimits

0x7a4c,	// (0x00026e70) list_single_preview_pane

0x7a90,	// (0x00026eb4) list_single_preview_pane_g1

0x7a98,	// (0x00026ebc) list_single_preview_pane_t1

0x7a5e,	// (0x00026e82) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002ef0f) list_single_preview_pane_t

0x7aa6,	// (0x00026eca) bg_popup_heading_pane_cp2_ParamLimits

0x7aa6,	// (0x00026eca) bg_popup_heading_pane_cp2

0x7abc,	// (0x00026ee0) heading_preview_pane_g1

0x7ac4,	// (0x00026ee8) heading_preview_pane_t1_ParamLimits

0x7ac4,	// (0x00026ee8) heading_preview_pane_t1

0x384f,	// (0x00022c73) soft_indicator_pane_t1_ParamLimits

0x3f6b,	// (0x0002338f) scroll_pane_ParamLimits

0x4483,	// (0x000238a7) scroll_sc2_left_pane

0x448c,	// (0x000238b0) scroll_sc2_right_pane

0x44ab,	// (0x000238cf) scroll_bg_pane_g1_ParamLimits

0x44c0,	// (0x000238e4) scroll_bg_pane_g2_ParamLimits

0x44d8,	// (0x000238fc) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002eb07) scroll_bg_pane_g_ParamLimits

0x44ab,	// (0x000238cf) scroll_handle_pane_g1_ParamLimits

0x44fa,	// (0x0002391e) scroll_handle_pane_g2_ParamLimits

0x44d8,	// (0x000238fc) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002eb0e) scroll_handle_pane_g_ParamLimits

0x1d44,	// (0x00021168) popup_choice_list_window_ParamLimits

0x1d44,	// (0x00021168) popup_choice_list_window

0x541f,	// (0x00024843) choice_list_pane

0x54a1,	// (0x000248c5) cell_toolbar_pane_t1

0x54c9,	// (0x000248ed) toolbar_button_pane_ParamLimits

0x65aa,	// (0x000259ce) ai_gene_pane_1_t2_ParamLimits

0x65aa,	// (0x000259ce) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002ed2a) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002ed2a) ai_gene_pane_1_t

0x7ae1,	// (0x00026f05) scroll_sc2_left_pane_g1

0x7ae1,	// (0x00026f05) scroll_sc2_right_pane_g1

0x4fb1,	// (0x000243d5) bg_popup_sub_pane_cp10

0x7aeb,	// (0x00026f0f) list_choice_list_pane

0x7b04,	// (0x00026f28) list_single_choice_list_pane_ParamLimits

0x7b04,	// (0x00026f28) list_single_choice_list_pane

0x7b17,	// (0x00026f3b) list_single_choice_list_pane_g1

0x4189,	// (0x000235ad) list_single_choice_list_pane_t1_ParamLimits

0x4189,	// (0x000235ad) list_single_choice_list_pane_t1

0x7b1f,	// (0x00026f43) choice_list_pane_g1

0x7b27,	// (0x00026f4b) choice_list_pane_t1

0x366f,	// (0x00022a93) input_focus_pane_cp11

0x4360,	// (0x00023784) title_pane_stacon_g2_ParamLimits

0x4360,	// (0x00023784) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002eaed) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002eaed) title_pane_stacon_g

0x4c8d,	// (0x000240b1) cursor_press_pane

0xc3d8,	// (0x0002b7fc) popup_fep_hwr_window_ParamLimits

0xc3d8,	// (0x0002b7fc) popup_fep_hwr_window

0x1e6a,	// (0x0002128e) popup_fep_vkb_window_ParamLimits

0x1e6a,	// (0x0002128e) popup_fep_vkb_window

0x7b35,	// (0x00026f59) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002ef38) fep_vkb_side_pane_g_ParamLimits

0x2774,	// (0x00021b98) fep_hwr_candidate_pane_ParamLimits

0x2774,	// (0x00021b98) fep_hwr_candidate_pane

0x279e,	// (0x00021bc2) fep_hwr_side_pane_ParamLimits

0x279e,	// (0x00021bc2) fep_hwr_side_pane

0x27be,	// (0x00021be2) fep_hwr_top_pane_ParamLimits

0x27be,	// (0x00021be2) fep_hwr_top_pane

0x27d6,	// (0x00021bfa) fep_hwr_write_pane_ParamLimits

0x27d6,	// (0x00021bfa) fep_hwr_write_pane

0xfb14,	// (0x0002ef38) fep_vkb_side_pane_g

0x7b3d,	// (0x00026f61) fep_hwr_top_pane_g1

0x7b4f,	// (0x00026f73) fep_hwr_top_pane_g2

0x2802,	// (0x00021c26) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002ef14) fep_hwr_top_pane_g

0x2817,	// (0x00021c3b) fep_hwr_top_text_pane

0x467a,	// (0x00023a9e) fep_hwr_top_text_pane_g1

0x7b85,	// (0x00026fa9) fep_hwr_top_text_pane_t1

0x290d,	// (0x00021d31) fep_hwr_candidate_pane_g1

0x7dd8,	// (0x000271fc) fep_vkb_keypad_pane_g3_ParamLimits

0x7dd8,	// (0x000271fc) fep_vkb_keypad_pane_g3

0x7e00,	// (0x00027224) fep_vkb_keypad_pane_g4_ParamLimits

0x7e00,	// (0x00027224) fep_vkb_keypad_pane_g4

0x7e6f,	// (0x00027293) fep_vkb_bottom_pane_g2_ParamLimits

0x7e6f,	// (0x00027293) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002ef3f) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002ef3f) fep_vkb_bottom_pane_g

0x7ae1,	// (0x00026f05) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002ef49) cell_vkb_side_pane_g

0x7efa,	// (0x0002731e) cell_vkb_side_pane_t1

0x7f08,	// (0x0002732c) cell_vkb_side_pane_t1_copy1

0x7ae1,	// (0x00026f05) bg_fep_vkb_candidate_pane_g2

0x8034,	// (0x00027458) cell_vkb_candidate_pane_ParamLimits

0x7b93,	// (0x00026fb7) aid_size_cell_vkb_ParamLimits

0x7b93,	// (0x00026fb7) aid_size_cell_vkb

0x8034,	// (0x00027458) cell_vkb_candidate_pane

0x2927,	// (0x00021d4b) bg_popup_fep_shadow_pane_g1

0xe26b,	// (0x0002d68f) fep_vkb_bottom_pane_ParamLimits

0xe26b,	// (0x0002d68f) fep_vkb_bottom_pane

0x7c57,	// (0x0002707b) fep_vkb_candidate_pane_ParamLimits

0x7c57,	// (0x0002707b) fep_vkb_candidate_pane

0xe290,	// (0x0002d6b4) fep_vkb_keypad_pane_ParamLimits

0xe290,	// (0x0002d6b4) fep_vkb_keypad_pane

0xe2cc,	// (0x0002d6f0) fep_vkb_side_pane_ParamLimits

0xe2cc,	// (0x0002d6f0) fep_vkb_side_pane

0xe308,	// (0x0002d72c) fep_vkb_top_pane_ParamLimits

0xe308,	// (0x0002d72c) fep_vkb_top_pane

0x7d31,	// (0x00027155) fep_vkb_top_pane_g1_ParamLimits

0x7d31,	// (0x00027155) fep_vkb_top_pane_g1

0x7d40,	// (0x00027164) fep_vkb_top_pane_g2_ParamLimits

0x7d40,	// (0x00027164) fep_vkb_top_pane_g2

0x7d4f,	// (0x00027173) fep_vkb_top_pane_g3_ParamLimits

0x7d4f,	// (0x00027173) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002ef2f) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002ef2f) fep_vkb_top_pane_g

0x7d6d,	// (0x00027191) fep_vkb_top_text_pane_ParamLimits

0x7d6d,	// (0x00027191) fep_vkb_top_text_pane

0xe344,	// (0x0002d768) fep_vkb_side_pane_g1_ParamLimits

0xe344,	// (0x0002d768) fep_vkb_side_pane_g1

0x7dc7,	// (0x000271eb) grid_vkb_side_pane_ParamLimits

0x7dc7,	// (0x000271eb) grid_vkb_side_pane

0x292f,	// (0x00021d53) bg_popup_fep_shadow_pane_g2

0x2938,	// (0x00021d5c) bg_popup_fep_shadow_pane_g3

0x2940,	// (0x00021d64) bg_popup_fep_shadow_pane_g4

0x2949,	// (0x00021d6d) bg_popup_fep_shadow_pane_g5

0x2953,	// (0x00021d77) bg_popup_fep_shadow_pane_g6

0x295b,	// (0x00021d7f) bg_popup_fep_shadow_pane_g7

0x4070,	// (0x00023494) bg_popup_fep_shadow_pane_g8

0x7e1e,	// (0x00027242) grid_vkb_keypad_number_pane_ParamLimits

0x7e1e,	// (0x00027242) grid_vkb_keypad_number_pane

0x7e2e,	// (0x00027252) grid_vkb_keypad_pane_ParamLimits

0x7e2e,	// (0x00027252) grid_vkb_keypad_pane

0x7e54,	// (0x00027278) fep_vkb_bottom_pane_g1_ParamLimits

0x7e54,	// (0x00027278) fep_vkb_bottom_pane_g1

0x7e7d,	// (0x000272a1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e7d,	// (0x000272a1) grid_vkb_keypad_bottom_left_pane

0x7e92,	// (0x000272b6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e92,	// (0x000272b6) grid_vkb_keypad_bottom_right_pane

0x7ea7,	// (0x000272cb) fep_vkb_top_text_pane_g1

0xe38b,	// (0x0002d7af) fep_vkb_top_text_pane_t1

0xe39d,	// (0x0002d7c1) cell_vkb_side_pane_ParamLimits

0xe39d,	// (0x0002d7c1) cell_vkb_side_pane

0x7ae1,	// (0x00026f05) cell_vkb_side_pane_g1

0x7f16,	// (0x0002733a) cell_vkb_keypad_pane_ParamLimits

0x7f16,	// (0x0002733a) cell_vkb_keypad_pane

0x7f8b,	// (0x000273af) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002ef5c) bg_popup_fep_shadow_pane_g

0x7ae1,	// (0x00026f05) cell_hwr_side_pane_g1

0x7ae1,	// (0x00026f05) cell_hwr_side_pane_g2

0x7f95,	// (0x000273b9) cell_vkb_keypad_pane_t1

0xe3b3,	// (0x0002d7d7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3b3,	// (0x0002d7d7) cell_vkb_keypad_bottom_left_pane

0xe3c8,	// (0x0002d7ec) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe3c8,	// (0x0002d7ec) cell_vkb_keypad_bottom_right_pane

0x7ae1,	// (0x00026f05) cell_vkb_keypad_bottom_left_pane_g1

0x7ae1,	// (0x00026f05) cell_vkb_keypad_bottom_right_pane_g1

0x7ff9,	// (0x0002741d) cell_vkb_keypad_number_pane_ParamLimits

0x7ff9,	// (0x0002741d) cell_vkb_keypad_number_pane

0x8018,	// (0x0002743c) cell_vkb_keypad_number_pane_g1

0x8022,	// (0x00027446) cell_vkb_keypad_number_pane_g2

0x802b,	// (0x0002744f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002ef4e) cell_vkb_keypad_number_pane_g

0x7f95,	// (0x000273b9) cell_vkb_keypad_number_pane_t1

0x804f,	// (0x00027473) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002ef49) cell_hwr_side_pane_g

0x8068,	// (0x0002748c) cell_hwr_side_pane_t1

0x296d,	// (0x00021d91) cell_hwr_side_pane_t1_copy1

0x7d5f,	// (0x00027183) cell_hwr_candidate_pane_g1

0x297b,	// (0x00021d9f) cell_hwr_candidate_pane_t1

0x7ae1,	// (0x00026f05) cell_vkb_candidate_pane_g2

0x80ac,	// (0x000274d0) cell_vkb_candidate_pane_t1

0x273b,	// (0x00021b5f) bg_popup_fep_shadow_pane_ParamLimits

0x273b,	// (0x00021b5f) bg_popup_fep_shadow_pane

0xdb0f,	// (0x0002cf33) bg_fep_hwr_top_pane_g4

0x7b61,	// (0x00026f85) bg_hwr_side_pane_g1_ParamLimits

0x7b61,	// (0x00026f85) bg_hwr_side_pane_g1

0xca65,	// (0x0002be89) cell_hwr_side_pane_ParamLimits

0xca65,	// (0x0002be89) cell_hwr_side_pane

0x288e,	// (0x00021cb2) fep_hwr_write_pane_g1_ParamLimits

0x288e,	// (0x00021cb2) fep_hwr_write_pane_g1

0x289b,	// (0x00021cbf) fep_hwr_write_pane_g2_ParamLimits

0x289b,	// (0x00021cbf) fep_hwr_write_pane_g2

0x28a8,	// (0x00021ccc) fep_hwr_write_pane_g3_ParamLimits

0x28a8,	// (0x00021ccc) fep_hwr_write_pane_g3

0xca85,	// (0x0002bea9) fep_hwr_write_pane_g4_ParamLimits

0xca85,	// (0x0002bea9) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002ef1b) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002ef1b) fep_hwr_write_pane_g

0xdb0f,	// (0x0002cf33) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdb0f,	// (0x0002cf33) bg_fep_hwr_candidate_pane_g2

0x28cb,	// (0x00021cef) cell_hwr_candidate_pane_ParamLimits

0x28cb,	// (0x00021cef) cell_hwr_candidate_pane

0x290d,	// (0x00021d31) fep_hwr_candidate_pane_g1_ParamLimits

0x7bc1,	// (0x00026fe5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7bc1,	// (0x00026fe5) bg_popup_fep_shadow_pane_cp2

0x7d5f,	// (0x00027183) fep_vkb_top_pane_g4_ParamLimits

0x7d5f,	// (0x00027183) fep_vkb_top_pane_g4

0x7da5,	// (0x000271c9) fep_vkb_side_pane_g2_ParamLimits

0x7da5,	// (0x000271c9) fep_vkb_side_pane_g2

0xba38,	// (0x0002ae5c) list_setting_pane_t4_ParamLimits

0xba38,	// (0x0002ae5c) list_setting_pane_t4

0xbad2,	// (0x0002aef6) list_setting_number_pane_t5_ParamLimits

0xbad2,	// (0x0002aef6) list_setting_number_pane_t5

0x46b1,	// (0x00023ad5) list_double_heading_pane_cp2_ParamLimits

0x46b1,	// (0x00023ad5) list_double_heading_pane_cp2

0x4006,	// (0x0002342a) list_double_heading_pane_g1_cp2_ParamLimits

0x4006,	// (0x0002342a) list_double_heading_pane_g1_cp2

0x4012,	// (0x00023436) list_double_heading_pane_g2_cp2_ParamLimits

0x4012,	// (0x00023436) list_double_heading_pane_g2_cp2

0x80ba,	// (0x000274de) list_double_heading_pane_t1_cp2_ParamLimits

0x80ba,	// (0x000274de) list_double_heading_pane_t1_cp2

0x80d0,	// (0x000274f4) list_double_heading_pane_t2_cp2_ParamLimits

0x80d0,	// (0x000274f4) list_double_heading_pane_t2_cp2

0x3657,	// (0x00022a7b) aid_value_unit2

0x158e,	// (0x000209b2) popup_preview_fixed_window

0x39ec,	// (0x00022e10) bg_popup_preview_window_pane_cp02

0x80e2,	// (0x00027506) list_preview_fixed_pane

0x8128,	// (0x0002754c) list_empty_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_empty_pane_fp

0x8128,	// (0x0002754c) list_single_cale_day_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_cale_day_pane_fp

0x8128,	// (0x0002754c) list_single_graphic_heading_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_graphic_heading_pane_fp

0x8128,	// (0x0002754c) list_single_graphic_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_graphic_pane_fp

0x8128,	// (0x0002754c) list_single_heading_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_heading_pane_fp

0x8128,	// (0x0002754c) list_single_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_pane_fp

0x813d,	// (0x00027561) list_single_pane_fp_g1_ParamLimits

0x813d,	// (0x00027561) list_single_pane_fp_g1

0x0f26,	// (0x0002034a) list_single_pane_fp_g2_ParamLimits

0x0f26,	// (0x0002034a) list_single_pane_fp_g2

0x0f32,	// (0x00020356) list_single_pane_fp_g3_ParamLimits

0x0f32,	// (0x00020356) list_single_pane_fp_g3

0x8149,	// (0x0002756d) list_single_pane_fp_g4_ParamLimits

0x8149,	// (0x0002756d) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002ef7d) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002ef7d) list_single_pane_fp_g

0x0f46,	// (0x0002036a) list_single_pane_fp_t1_ParamLimits

0x0f46,	// (0x0002036a) list_single_pane_fp_t1

0x0f5d,	// (0x00020381) list_single_graphic_pane_fp_g1_ParamLimits

0x0f5d,	// (0x00020381) list_single_graphic_pane_fp_g1

0x813d,	// (0x00027561) list_single_graphic_pane_fp_g2_ParamLimits

0x813d,	// (0x00027561) list_single_graphic_pane_fp_g2

0x0f26,	// (0x0002034a) list_single_graphic_pane_fp_g3_ParamLimits

0x0f26,	// (0x0002034a) list_single_graphic_pane_fp_g3

0x0f32,	// (0x00020356) list_single_graphic_pane_fp_g4_ParamLimits

0x0f32,	// (0x00020356) list_single_graphic_pane_fp_g4

0x8149,	// (0x0002756d) list_single_graphic_pane_fp_g5_ParamLimits

0x8149,	// (0x0002756d) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ef86) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ef86) list_single_graphic_pane_fp_g

0x0f69,	// (0x0002038d) list_single_graphic_pane_fp_t1_ParamLimits

0x0f69,	// (0x0002038d) list_single_graphic_pane_fp_t1

0x0f5d,	// (0x00020381) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f5d,	// (0x00020381) list_single_graphic_heading_pane_fp_g1

0x813d,	// (0x00027561) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x813d,	// (0x00027561) list_single_graphic_heading_pane_fp_g2

0x0f26,	// (0x0002034a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0f26,	// (0x0002034a) list_single_graphic_heading_pane_fp_g3

0x0f32,	// (0x00020356) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0f32,	// (0x00020356) list_single_graphic_heading_pane_fp_g4

0x8149,	// (0x0002756d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8149,	// (0x0002756d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ef86) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ef86) list_single_graphic_heading_pane_fp_g

0x0f7f,	// (0x000203a3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f7f,	// (0x000203a3) list_single_graphic_heading_pane_fp_t1

0x0f95,	// (0x000203b9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f95,	// (0x000203b9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002ef91) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002ef91) list_single_graphic_heading_pane_fp_t

0x0fa7,	// (0x000203cb) list_single_cale_day_pane_fp_g1_ParamLimits

0x0fa7,	// (0x000203cb) list_single_cale_day_pane_fp_g1

0x8155,	// (0x00027579) list_single_cale_day_pane_fp_g2_ParamLimits

0x8155,	// (0x00027579) list_single_cale_day_pane_fp_g2

0x0fdf,	// (0x00020403) list_single_cale_day_pane_fp_g3_ParamLimits

0x0fdf,	// (0x00020403) list_single_cale_day_pane_fp_g3

0x1007,	// (0x0002042b) list_single_cale_day_pane_fp_g4_ParamLimits

0x1007,	// (0x0002042b) list_single_cale_day_pane_fp_g4

0x102b,	// (0x0002044f) list_single_cale_day_pane_fp_g5_ParamLimits

0x102b,	// (0x0002044f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002ef96) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002ef96) list_single_cale_day_pane_fp_g

0x104f,	// (0x00020473) list_single_cale_day_pane_fp_t1_ParamLimits

0x104f,	// (0x00020473) list_single_cale_day_pane_fp_t1

0x1075,	// (0x00020499) list_single_cale_day_pane_fp_t2_ParamLimits

0x1075,	// (0x00020499) list_single_cale_day_pane_fp_t2

0x108e,	// (0x000204b2) list_single_cale_day_pane_fp_t3_ParamLimits

0x108e,	// (0x000204b2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002efa1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002efa1) list_single_cale_day_pane_fp_t

0x813d,	// (0x00027561) list_empty_pane_fp_g1_ParamLimits

0x813d,	// (0x00027561) list_empty_pane_fp_g1

0x10a7,	// (0x000204cb) list_empty_pane_fp_t1

0x10b5,	// (0x000204d9) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002efa8) list_empty_pane_fp_t

0x813d,	// (0x00027561) list_single_heading_pane_fp_g1_ParamLimits

0x813d,	// (0x00027561) list_single_heading_pane_fp_g1

0x0f26,	// (0x0002034a) list_single_heading_pane_fp_g2_ParamLimits

0x0f26,	// (0x0002034a) list_single_heading_pane_fp_g2

0x0f32,	// (0x00020356) list_single_heading_pane_fp_g3_ParamLimits

0x0f32,	// (0x00020356) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002efad) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002efad) list_single_heading_pane_fp_g

0x10c3,	// (0x000204e7) list_single_heading_pane_fp_t1_ParamLimits

0x10c3,	// (0x000204e7) list_single_heading_pane_fp_t1

0x10d5,	// (0x000204f9) list_single_heading_pane_fp_t2_ParamLimits

0x10d5,	// (0x000204f9) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002efb4) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002efb4) list_single_heading_pane_fp_t

0x41f7,	// (0x0002361b) aid_size_cell_fast

0x395c,	// (0x00022d80) soft_indicator_pane_cp1_t1

0x4234,	// (0x00023658) cell_app_pane_cp2_ParamLimits

0x4234,	// (0x00023658) cell_app_pane_cp2

0x275d,	// (0x00021b81) fep_hwr_candidate_drop_down_list_pane

0xdb1d,	// (0x0002cf41) fep_hwr_candidate_pane_g3_ParamLimits

0xdb1d,	// (0x0002cf41) fep_hwr_candidate_pane_g3

0xdb2a,	// (0x0002cf4e) fep_hwr_candidate_pane_g4_ParamLimits

0xdb2a,	// (0x0002cf4e) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002ef28) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002ef28) fep_hwr_candidate_pane_g

0x7c46,	// (0x0002706a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c46,	// (0x0002706a) fep_vkb_candidate_drop_down_list_pane

0x8057,	// (0x0002747b) fep_vkb_candidate_pane_g3

0x805f,	// (0x00027483) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002ef55) fep_vkb_candidate_pane_g

0x7d5f,	// (0x00027183) cell_hwr_candidate_pane_g1_ParamLimits

0x8161,	// (0x00027585) cell_hwr_candidate_pane_g3_ParamLimits

0x8161,	// (0x00027585) cell_hwr_candidate_pane_g3

0x8182,	// (0x000275a6) cell_hwr_candidate_pane_g4_ParamLimits

0x8182,	// (0x000275a6) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002ef6f) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002ef6f) cell_hwr_candidate_pane_g

0x8076,	// (0x0002749a) cell_vkb_candidate_pane_g3_ParamLimits

0x8076,	// (0x0002749a) cell_vkb_candidate_pane_g3

0x8091,	// (0x000274b5) cell_vkb_candidate_pane_g4_ParamLimits

0x8091,	// (0x000274b5) cell_vkb_candidate_pane_g4

0x81a3,	// (0x000275c7) cell_app_pane_cp2_g1_ParamLimits

0x81a3,	// (0x000275c7) cell_app_pane_cp2_g1

0x81c1,	// (0x000275e5) cell_app_pane_cp2_g2_ParamLimits

0x81c1,	// (0x000275e5) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002efb9) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002efb9) cell_app_pane_cp2_g

0x81cd,	// (0x000275f1) cell_app_pane_cp2_t1_ParamLimits

0x81cd,	// (0x000275f1) cell_app_pane_cp2_t1

0x3ff8,	// (0x0002341c) grid_highlight_pane_cp1_ParamLimits

0x3ff8,	// (0x0002341c) grid_highlight_pane_cp1

0x2999,	// (0x00021dbd) cell_hwr_candidate_pane_cp1_ParamLimits

0x2999,	// (0x00021dbd) cell_hwr_candidate_pane_cp1

0x7d5f,	// (0x00027183) fep_hwr_candidate_drop_down_list_pane_g1

0x81df,	// (0x00027603) fep_hwr_candidate_drop_down_list_pane_g2

0x81ec,	// (0x00027610) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002efbe) fep_hwr_candidate_drop_down_list_pane_g

0x29b8,	// (0x00021ddc) fep_hwr_candidate_drop_down_list_scroll_pane

0x29c1,	// (0x00021de5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x29c1,	// (0x00021de5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x29ce,	// (0x00021df2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x29ce,	// (0x00021df2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x29db,	// (0x00021dff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x29db,	// (0x00021dff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8076,	// (0x0002749a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8076,	// (0x0002749a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8091,	// (0x000274b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8091,	// (0x000274b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x29e8,	// (0x00021e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x29e8,	// (0x00021e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a03,	// (0x00021e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a03,	// (0x00021e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a1e,	// (0x00021e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a1e,	// (0x00021e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002efc5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002efc5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x81f9,	// (0x0002761d) cell_vkb_candidate_pane_cp1_ParamLimits

0x81f9,	// (0x0002761d) cell_vkb_candidate_pane_cp1

0x7d5f,	// (0x00027183) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d5f,	// (0x00027183) fep_vkb_candidate_drop_down_list_pane_g1

0x81df,	// (0x00027603) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81df,	// (0x00027603) fep_vkb_candidate_drop_down_list_pane_g2

0x81ec,	// (0x00027610) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81ec,	// (0x00027610) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002efbe) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002efbe) fep_vkb_candidate_drop_down_list_pane_g

0x8219,	// (0x0002763d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8219,	// (0x0002763d) fep_vkb_candidate_drop_down_list_scroll_pane

0x8226,	// (0x0002764a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8226,	// (0x0002764a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8233,	// (0x00027657) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8233,	// (0x00027657) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x823f,	// (0x00027663) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x823f,	// (0x00027663) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8161,	// (0x00027585) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8161,	// (0x00027585) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8182,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8182,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x824b,	// (0x0002766f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x824b,	// (0x0002766f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x826c,	// (0x00027690) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x826c,	// (0x00027690) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x828d,	// (0x000276b1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x828d,	// (0x000276b1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002efd6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002efd6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd08b,	// (0x0002c4af) title_pane_g1_ParamLimits

0xd09e,	// (0x0002c4c2) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e972) title_pane_g_ParamLimits

0x466a,	// (0x00023a8e) aid_call2_pane

0x4672,	// (0x00023a96) aid_call_pane

0x467a,	// (0x00023a9e) popup_clock_analogue_window_g1

0x467a,	// (0x00023a9e) popup_clock_analogue_window_g2

0x18ff,	// (0x00020d23) popup_clock_analogue_window_g3

0x1908,	// (0x00020d2c) popup_clock_analogue_window_g4

0x3679,	// (0x00022a9d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002eb1c) popup_clock_analogue_window_g

0x1910,	// (0x00020d34) popup_clock_analogue_window_t1

0x191e,	// (0x00020d42) clock_digital_number_pane_ParamLimits

0x191e,	// (0x00020d42) clock_digital_number_pane

0x192a,	// (0x00020d4e) clock_digital_number_pane_cp02_ParamLimits

0x192a,	// (0x00020d4e) clock_digital_number_pane_cp02

0x1936,	// (0x00020d5a) clock_digital_number_pane_cp03_ParamLimits

0x1936,	// (0x00020d5a) clock_digital_number_pane_cp03

0x1942,	// (0x00020d66) clock_digital_number_pane_cp04_ParamLimits

0x1942,	// (0x00020d66) clock_digital_number_pane_cp04

0x194e,	// (0x00020d72) clock_digital_separator_pane_ParamLimits

0x194e,	// (0x00020d72) clock_digital_separator_pane

0x195a,	// (0x00020d7e) popup_clock_digital_window_t1_ParamLimits

0x195a,	// (0x00020d7e) popup_clock_digital_window_t1

0x3679,	// (0x00022a9d) clock_digital_number_pane_g1

0x3679,	// (0x00022a9d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002eb27) clock_digital_number_pane_g

0x3679,	// (0x00022a9d) clock_digital_separator_pane_g1

0x3679,	// (0x00022a9d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002eb27) clock_digital_separator_pane_g

0xd732,	// (0x0002cb56) aid_fill_nsta_ParamLimits

0xd868,	// (0x0002cc8c) indicator_nsta_pane_ParamLimits

0x52ac,	// (0x000246d0) popup_clock_analogue_window

0x52ac,	// (0x000246d0) popup_clock_digital_window

0x41b8,	// (0x000235dc) grid_indicator_nsta_pane_ParamLimits

0x74ed,	// (0x00026911) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002eea8) clock_nsta_pane_t

0x18c3,	// (0x00020ce7) aid_size_max_handle

0xc19b,	// (0x0002b5bf) aid_size_min_handle

0x4c8d,	// (0x000240b1) editor_scroll_pane

0x82a8,	// (0x000276cc) ex_editor_pane

0x4165,	// (0x00023589) scroll_pane_cp13

0x3f97,	// (0x000233bb) scroll_pane_cp14

0x46a9,	// (0x00023acd) scroll_pane_cp36

0xd515,	// (0x0002c939) list_single_graphic_hl_pane_cp2_ParamLimits

0xd515,	// (0x0002c939) list_single_graphic_hl_pane_cp2

0xbd52,	// (0x0002b176) list_single_graphic_hl_pane_ParamLimits

0xbd52,	// (0x0002b176) list_single_graphic_hl_pane

0x10eb,	// (0x0002050f) aid_size_min_hl_cp1

0x82b0,	// (0x000276d4) list_highlight_pane_cp34_ParamLimits

0x82b0,	// (0x000276d4) list_highlight_pane_cp34

0x82c1,	// (0x000276e5) list_single_graphic_hl_pane_g1_ParamLimits

0x82c1,	// (0x000276e5) list_single_graphic_hl_pane_g1

0xbdac,	// (0x0002b1d0) list_single_graphic_hl_pane_g2_ParamLimits

0xbdac,	// (0x0002b1d0) list_single_graphic_hl_pane_g2

0xbdac,	// (0x0002b1d0) list_single_graphic_hl_pane_g3_ParamLimits

0xbdac,	// (0x0002b1d0) list_single_graphic_hl_pane_g3

0xbdb8,	// (0x0002b1dc) list_single_graphic_hl_pane_g4_ParamLimits

0xbdb8,	// (0x0002b1dc) list_single_graphic_hl_pane_g4

0xbdc4,	// (0x0002b1e8) list_single_graphic_hl_pane_g5_ParamLimits

0xbdc4,	// (0x0002b1e8) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002efe7) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002efe7) list_single_graphic_hl_pane_g

0xbdd8,	// (0x0002b1fc) list_single_graphic_hl_pane_t1_ParamLimits

0xbdd8,	// (0x0002b1fc) list_single_graphic_hl_pane_t1

0x82ce,	// (0x000276f2) aid_size_min_hl_cp2

0x82d7,	// (0x000276fb) list_highlight_pane_cp34_cp2_ParamLimits

0x82d7,	// (0x000276fb) list_highlight_pane_cp34_cp2

0x82c1,	// (0x000276e5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82c1,	// (0x000276e5) list_single_graphic_hl_pane_g1_cp2

0x82e4,	// (0x00027708) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82e4,	// (0x00027708) list_single_graphic_hl_pane_g2_cp2

0x82f0,	// (0x00027714) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82f0,	// (0x00027714) list_single_graphic_hl_pane_g3_cp2

0x75f0,	// (0x00026a14) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x75f0,	// (0x00026a14) list_single_graphic_hl_pane_g4_cp2

0x82fe,	// (0x00027722) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x82fe,	// (0x00027722) list_single_graphic_hl_pane_g5_cp2

0xc1f6,	// (0x0002b61a) control_pane_g4_ParamLimits

0xc1f6,	// (0x0002b61a) control_pane_g4

0x4fb1,	// (0x000243d5) bg_popup_sub_pane_cp10_ParamLimits

0x7aeb,	// (0x00026f0f) list_choice_list_pane_ParamLimits

0x7afa,	// (0x00026f1e) scroll_pane_cp23

0x39ec,	// (0x00022e10) bg_popup_preview_window_pane_cp02_ParamLimits

0x80e2,	// (0x00027506) list_preview_fixed_pane_ParamLimits

0x80f8,	// (0x0002751c) list_preview_fixed_pane_cp_ParamLimits

0x80f8,	// (0x0002751c) list_preview_fixed_pane_cp

0x8104,	// (0x00027528) popup_preview_fixed_window_g1_ParamLimits

0x8104,	// (0x00027528) popup_preview_fixed_window_g1

0x8110,	// (0x00027534) popup_preview_fixed_window_g2_ParamLimits

0x8110,	// (0x00027534) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002ef76) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002ef76) popup_preview_fixed_window_g

0x1837,	// (0x00020c5b) aid_navi_side_left_pane_ParamLimits

0x184c,	// (0x00020c70) aid_navi_side_right_pane_ParamLimits

0x1864,	// (0x00020c88) navi_icon_pane_stacon_ParamLimits

0x1878,	// (0x00020c9c) navi_navi_pane_stacon_ParamLimits

0x1864,	// (0x00020c88) navi_text_pane_stacon_ParamLimits

0x366f,	// (0x00022a93) main_text_info_pane

0x8328,	// (0x0002774c) listscroll_text_info_pane

0x8330,	// (0x00027754) list_text_info_pane_ParamLimits

0x8330,	// (0x00027754) list_text_info_pane

0x833f,	// (0x00027763) scroll_pane_cp24_ParamLimits

0x833f,	// (0x00027763) scroll_pane_cp24

0xe3e3,	// (0x0002d807) list_text_info_pane_t1_ParamLimits

0xe3e3,	// (0x0002d807) list_text_info_pane_t1

0xc34b,	// (0x0002b76f) popup_fast_swap2_window_ParamLimits

0xc34b,	// (0x0002b76f) popup_fast_swap2_window

0x838e,	// (0x000277b2) aid_size_cell_fast2

0x366f,	// (0x00022a93) bg_popup_window_pane_cp17

0x5941,	// (0x00024d65) heading_pane_cp2

0x3c61,	// (0x00023085) listscroll_fast2_pane

0x8398,	// (0x000277bc) grid_fast2_pane

0x83a2,	// (0x000277c6) listscroll_fast2_pane_g1

0x83aa,	// (0x000277ce) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002eff2) listscroll_fast2_pane_g

0x4165,	// (0x00023589) scroll_pane_cp26

0x83b4,	// (0x000277d8) cell_fast2_pane_ParamLimits

0x83b4,	// (0x000277d8) cell_fast2_pane

0x83c9,	// (0x000277ed) cell_fast2_pane_g1

0x83d2,	// (0x000277f6) cell_fast2_pane_g2

0x83db,	// (0x000277ff) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002eff7) cell_fast2_pane_g

0x3d54,	// (0x00023178) grid_highlight_pane_cp9

0x3d69,	// (0x0002318d) main_eswt_pane_ParamLimits

0x3d69,	// (0x0002318d) main_eswt_pane

0x8354,	// (0x00027778) list_single_text_info_pane

0x83e3,	// (0x00027807) eswt_ctrl_button_pane

0x83e3,	// (0x00027807) eswt_ctrl_canvas_pane

0x83eb,	// (0x0002780f) eswt_ctrl_combo_pane

0x83e3,	// (0x00027807) eswt_ctrl_default_pane

0x83e3,	// (0x00027807) eswt_ctrl_label_pane

0x83f3,	// (0x00027817) eswt_ctrl_wait_pane

0x83fb,	// (0x0002781f) eswt_shell_pane

0x366f,	// (0x00022a93) listscroll_eswt_app_pane

0x841b,	// (0x0002783f) popup_eswt_tasktip_window_ParamLimits

0x841b,	// (0x0002783f) popup_eswt_tasktip_window

0x5549,	// (0x0002496d) bg_popup_window_pane_cp18

0x842c,	// (0x00027850) eswt_control_pane_g1_ParamLimits

0x842c,	// (0x00027850) eswt_control_pane_g1

0x8439,	// (0x0002785d) eswt_control_pane_g2_ParamLimits

0x8439,	// (0x0002785d) eswt_control_pane_g2

0x8446,	// (0x0002786a) eswt_control_pane_g3_ParamLimits

0x8446,	// (0x0002786a) eswt_control_pane_g3

0x8453,	// (0x00027877) eswt_control_pane_g4_ParamLimits

0x8453,	// (0x00027877) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002effe) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002effe) eswt_control_pane_g

0x3ff8,	// (0x0002341c) bg_button_pane_ParamLimits

0x3ff8,	// (0x0002341c) bg_button_pane

0x3d69,	// (0x0002318d) common_borders_pane_copy2_ParamLimits

0x3d69,	// (0x0002318d) common_borders_pane_copy2

0x8460,	// (0x00027884) control_button_pane_g1_ParamLimits

0x8460,	// (0x00027884) control_button_pane_g1

0x846c,	// (0x00027890) control_button_pane_g2_ParamLimits

0x846c,	// (0x00027890) control_button_pane_g2

0x8478,	// (0x0002789c) control_button_pane_g3_ParamLimits

0x8478,	// (0x0002789c) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002f007) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002f007) control_button_pane_g

0x848c,	// (0x000278b0) control_button_pane_t1

0x849a,	// (0x000278be) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002f00e) control_button_pane_t

0x54d5,	// (0x000248f9) bg_button_pane_g1

0x54dd,	// (0x00024901) bg_button_pane_g2

0x54e5,	// (0x00024909) bg_button_pane_g3

0x54ed,	// (0x00024911) bg_button_pane_g4

0x54f5,	// (0x00024919) bg_button_pane_g5

0x54fd,	// (0x00024921) bg_button_pane_g6

0x5505,	// (0x00024929) bg_button_pane_g7

0x550d,	// (0x00024931) bg_button_pane_g8

0x5515,	// (0x00024939) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002ec7e) bg_button_pane_g

0x7aa6,	// (0x00026eca) common_borders_pane_ParamLimits

0x7aa6,	// (0x00026eca) common_borders_pane

0x842c,	// (0x00027850) eswt_control_pane_g1_copy1_ParamLimits

0x842c,	// (0x00027850) eswt_control_pane_g1_copy1

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy1_ParamLimits

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy1

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy1_ParamLimits

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy1

0x8453,	// (0x00027877) eswt_control_pane_g4_copy1_ParamLimits

0x8453,	// (0x00027877) eswt_control_pane_g4_copy1

0x7ae1,	// (0x00026f05) bg_eswt_ctrl_canvas_pane_g1

0x7aa6,	// (0x00026eca) common_borders_pane_cp2_ParamLimits

0x7aa6,	// (0x00026eca) common_borders_pane_cp2

0x7aa6,	// (0x00026eca) common_borders_pane_cp3_ParamLimits

0x7aa6,	// (0x00026eca) common_borders_pane_cp3

0x84a8,	// (0x000278cc) separator_horizontal_pane

0x84b0,	// (0x000278d4) separator_vertical_pane

0x842c,	// (0x00027850) eswt_control_pane_g1_copy2_ParamLimits

0x842c,	// (0x00027850) eswt_control_pane_g1_copy2

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy2_ParamLimits

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy2

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy2_ParamLimits

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy2

0x8453,	// (0x00027877) eswt_control_pane_g4_copy2_ParamLimits

0x8453,	// (0x00027877) eswt_control_pane_g4_copy2

0x366f,	// (0x00022a93) common_borders_pane_cp4

0x84b9,	// (0x000278dd) separator_horizontal_pane_g1

0x84c2,	// (0x000278e6) separator_horizontal_pane_g2

0x84cb,	// (0x000278ef) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002f013) separator_horizontal_pane_g

0x842c,	// (0x00027850) eswt_control_pane_g1_copy3_ParamLimits

0x842c,	// (0x00027850) eswt_control_pane_g1_copy3

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy3_ParamLimits

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy3

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy3_ParamLimits

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy3

0x8453,	// (0x00027877) eswt_control_pane_g4_copy3_ParamLimits

0x8453,	// (0x00027877) eswt_control_pane_g4_copy3

0x366f,	// (0x00022a93) common_borders_pane_cp5

0x84d4,	// (0x000278f8) separator_vertical_pane_g1

0x84dd,	// (0x00027901) separator_vertical_pane_g2

0x84e6,	// (0x0002790a) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002f01a) separator_vertical_pane_g

0x842c,	// (0x00027850) eswt_control_pane_g1_copy4_ParamLimits

0x842c,	// (0x00027850) eswt_control_pane_g1_copy4

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy4_ParamLimits

0x8439,	// (0x0002785d) eswt_control_pane_g2_copy4

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy4_ParamLimits

0x8446,	// (0x0002786a) eswt_control_pane_g3_copy4

0x8453,	// (0x00027877) eswt_control_pane_g4_copy4_ParamLimits

0x8453,	// (0x00027877) eswt_control_pane_g4_copy4

0xe3fe,	// (0x0002d822) eswt_ctrl_combo_button_pane

0xe406,	// (0x0002d82a) eswt_ctrl_input_pane

0xe40e,	// (0x0002d832) popup_choice_list_window_cp70

0xe416,	// (0x0002d83a) eswt_ctrl_input_pane_t1

0x366f,	// (0x00022a93) input_focus_pane_cp70

0x7aa6,	// (0x00026eca) bg_button_pane_cp70_ParamLimits

0x7aa6,	// (0x00026eca) bg_button_pane_cp70

0xe424,	// (0x0002d848) eswt_ctrl_combo_button_pane_g1

0x851d,	// (0x00027941) wait_bar_pane_cp70

0x5549,	// (0x0002496d) bg_popup_window_pane_cp70_ParamLimits

0x5549,	// (0x0002496d) bg_popup_window_pane_cp70

0x8525,	// (0x00027949) popup_eswt_tasktip_window_t1

0x853b,	// (0x0002795f) wait_bar_pane_cp71_ParamLimits

0x853b,	// (0x0002795f) wait_bar_pane_cp71

0x8547,	// (0x0002796b) grid_eswt_app_pane

0x448c,	// (0x000238b0) scroll_pane_cp70

0xe42c,	// (0x0002d850) cell_eswt_app_pane_ParamLimits

0xe42c,	// (0x0002d850) cell_eswt_app_pane

0xe456,	// (0x0002d87a) cell_eswt_app_pane_g1_ParamLimits

0xe456,	// (0x0002d87a) cell_eswt_app_pane_g1

0xe485,	// (0x0002d8a9) cell_eswt_app_pane_g2_ParamLimits

0xe485,	// (0x0002d8a9) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002f021) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002f021) cell_eswt_app_pane_g

0xe4ae,	// (0x0002d8d2) cell_eswt_app_pane_t1_ParamLimits

0xe4ae,	// (0x0002d8d2) cell_eswt_app_pane_t1

0x860a,	// (0x00027a2e) grid_highlight_pane_cp70_ParamLimits

0x860a,	// (0x00027a2e) grid_highlight_pane_cp70

0x4b62,	// (0x00023f86) set_content_pane_g1

0xd6e7,	// (0x0002cb0b) status_small_volume_pane

0x2a39,	// (0x00021e5d) status_small_volume_pane_g1

0x2a41,	// (0x00021e65) volume_small2_pane

0x2a4a,	// (0x00021e6e) volume_small2_pane_g1

0x2a53,	// (0x00021e77) volume_small2_pane_g2

0x2a5c,	// (0x00021e80) volume_small2_pane_g3

0x2a65,	// (0x00021e89) volume_small2_pane_g4

0x2a6e,	// (0x00021e92) volume_small2_pane_g5

0x2a77,	// (0x00021e9b) volume_small2_pane_g6

0x2a80,	// (0x00021ea4) volume_small2_pane_g7

0x2a89,	// (0x00021ead) volume_small2_pane_g8

0x2a92,	// (0x00021eb6) volume_small2_pane_g9

0x2a9b,	// (0x00021ebf) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002f026) volume_small2_pane_g

0x7ea7,	// (0x000272cb) fep_vkb_top_text_pane_g1_ParamLimits

0xe38b,	// (0x0002d7af) fep_vkb_top_text_pane_t1_ParamLimits

0x811c,	// (0x00027540) popup_preview_fixed_window_g3_ParamLimits

0x811c,	// (0x00027540) popup_preview_fixed_window_g3

0xc96e,	// (0x0002bd92) popup_toolbar_trans_pane

0xdda1,	// (0x0002d1c5) aid_height_set_list_ParamLimits

0x68b7,	// (0x00025cdb) aid_size_parent_ParamLimits

0x4fb1,	// (0x000243d5) list_highlight_pane_cp2_ParamLimits

0x4b62,	// (0x00023f86) set_content_pane_g1_ParamLimits

0xbd64,	// (0x0002b188) list_single_image_pane_ParamLimits

0xbd64,	// (0x0002b188) list_single_image_pane

0xe4e0,	// (0x0002d904) aid_size_cell_image_ParamLimits

0xe4e0,	// (0x0002d904) aid_size_cell_image

0xe4ed,	// (0x0002d911) grid_single_image_pane_ParamLimits

0xe4ed,	// (0x0002d911) grid_single_image_pane

0x5929,	// (0x00024d4d) list_single_image_pane_g1_ParamLimits

0x5929,	// (0x00024d4d) list_single_image_pane_g1

0x862f,	// (0x00027a53) list_single_image_pane_g2_ParamLimits

0x862f,	// (0x00027a53) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002f03b) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002f03b) list_single_image_pane_g

0x8643,	// (0x00027a67) list_single_image_pane_t1_ParamLimits

0x8643,	// (0x00027a67) list_single_image_pane_t1

0xe4fb,	// (0x0002d91f) cell_image_list_pane_ParamLimits

0xe4fb,	// (0x0002d91f) cell_image_list_pane

0xe511,	// (0x0002d935) cell_image_list_pane_g1

0xe51a,	// (0x0002d93e) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002f040) cell_image_list_pane_g

0x867f,	// (0x00027aa3) aid_size_cell_tb_trans_pane

0x3ff8,	// (0x0002341c) bg_tb_trans_pane

0x8691,	// (0x00027ab5) grid_tb_trans_pane

0x54d5,	// (0x000248f9) bg_tb_trans_pane_g1

0x54dd,	// (0x00024901) bg_tb_trans_pane_g2

0x54e5,	// (0x00024909) bg_tb_trans_pane_g3

0x54ed,	// (0x00024911) bg_tb_trans_pane_g4

0x54f5,	// (0x00024919) bg_tb_trans_pane_g5

0x550d,	// (0x00024931) bg_tb_trans_pane_g6

0x5515,	// (0x00024939) bg_tb_trans_pane_g7

0x54fd,	// (0x00024921) bg_tb_trans_pane_g8

0x5505,	// (0x00024929) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002f045) bg_tb_trans_pane_g

0x86a5,	// (0x00027ac9) cell_toolbar_trans_pane_ParamLimits

0x86a5,	// (0x00027ac9) cell_toolbar_trans_pane

0x7ae1,	// (0x00026f05) cell_toolbar_trans_pane_g1

0xe176,	// (0x0002d59a) list_form2_midp_pane_t1

0xe184,	// (0x0002d5a8) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002eeee) list_form2_midp_pane_t

0x76d2,	// (0x00026af6) scroll_pane_cp51_ParamLimits

0x788e,	// (0x00026cb2) form2_midp_wait_pane_g1

0x7897,	// (0x00026cbb) form2_midp_wait_pane_g2

0x78a0,	// (0x00026cc4) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002ef03) form2_midp_wait_pane_g

0x3763,	// (0x00022b87) list_highlight_pane_cp21_ParamLimits

0x78ec,	// (0x00026d10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x78fb,	// (0x00026d1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a6f,	// (0x00025e93) list_single_2graphic_im_pane_ParamLimits

0x6a6f,	// (0x00025e93) list_single_2graphic_im_pane

0xe523,	// (0x0002d947) list_single_2graphic_im_pane_g1_ParamLimits

0xe523,	// (0x0002d947) list_single_2graphic_im_pane_g1

0xe534,	// (0x0002d958) list_single_2graphic_im_pane_g2_ParamLimits

0xe534,	// (0x0002d958) list_single_2graphic_im_pane_g2

0xe540,	// (0x0002d964) list_single_2graphic_im_pane_g3_ParamLimits

0xe540,	// (0x0002d964) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002f058) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002f058) list_single_2graphic_im_pane_g

0xe554,	// (0x0002d978) list_single_2graphic_im_pane_t1_ParamLimits

0xe554,	// (0x0002d978) list_single_2graphic_im_pane_t1

0x8128,	// (0x0002754c) list_single_graphic_2heading_pane_fp_ParamLimits

0x8128,	// (0x0002754c) list_single_graphic_2heading_pane_fp

0x0f5d,	// (0x00020381) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f5d,	// (0x00020381) list_single_graphic_2heading_pane_fp_g1

0x813d,	// (0x00027561) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x813d,	// (0x00027561) list_single_graphic_2heading_pane_fp_g2

0x0f26,	// (0x0002034a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0f26,	// (0x0002034a) list_single_graphic_2heading_pane_fp_g3

0x0f32,	// (0x00020356) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0f32,	// (0x00020356) list_single_graphic_2heading_pane_fp_g4

0x8149,	// (0x0002756d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8149,	// (0x0002756d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ef86) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ef86) list_single_graphic_2heading_pane_fp_g

0x1136,	// (0x0002055a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1136,	// (0x0002055a) list_single_graphic_2heading_pane_fp_t1

0x0f95,	// (0x000203b9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f95,	// (0x000203b9) list_single_graphic_2heading_pane_fp_t2

0x114c,	// (0x00020570) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x114c,	// (0x00020570) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002f061) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002f061) list_single_graphic_2heading_pane_fp_t

0x7b6d,	// (0x00026f91) fep_hwr_write_pane_g5_ParamLimits

0x7b6d,	// (0x00026f91) fep_hwr_write_pane_g5

0x7b79,	// (0x00026f9d) fep_hwr_write_pane_g6_ParamLimits

0x7b79,	// (0x00026f9d) fep_hwr_write_pane_g6

0x83fb,	// (0x0002781f) eswt_shell_pane_ParamLimits

0x5549,	// (0x0002496d) bg_popup_window_pane_cp18_ParamLimits

0x67ff,	// (0x00025c23) heading_pane_cp70

0x8525,	// (0x00027949) popup_eswt_tasktip_window_t1_ParamLimits

0xd78d,	// (0x0002cbb1) aid_touch_tab_arrow_left

0xd7a3,	// (0x0002cbc7) aid_touch_tab_arrow_right

0xd0b6,	// (0x0002c4da) title_pane_g3_ParamLimits

0xd0b6,	// (0x0002c4da) title_pane_g3

0x3fb7,	// (0x000233db) set_value_pane_g1

0xc96e,	// (0x0002bd92) popup_toolbar_trans_pane_ParamLimits

0x867f,	// (0x00027aa3) aid_size_cell_tb_trans_pane_ParamLimits

0x3ff8,	// (0x0002341c) bg_tb_trans_pane_ParamLimits

0x8691,	// (0x00027ab5) grid_tb_trans_pane_ParamLimits

0x39ec,	// (0x00022e10) cont_note_pane_ParamLimits

0x39ec,	// (0x00022e10) cont_note_pane

0x3d69,	// (0x0002318d) cont_snote2_single_text_pane_ParamLimits

0x3d69,	// (0x0002318d) cont_snote2_single_text_pane

0x3d69,	// (0x0002318d) cont_snote2_single_graphic_pane_ParamLimits

0x3d69,	// (0x0002318d) cont_snote2_single_graphic_pane

0x5b68,	// (0x00024f8c) cont_note_wait_pane_ParamLimits

0x5b68,	// (0x00024f8c) cont_note_wait_pane

0x5b68,	// (0x00024f8c) cont_note_image_pane_ParamLimits

0x5b68,	// (0x00024f8c) cont_note_image_pane

0x8739,	// (0x00027b5d) popup_note2_window_g1_ParamLimits

0x8739,	// (0x00027b5d) popup_note2_window_g1

0x876a,	// (0x00027b8e) popup_note2_window_t1_ParamLimits

0x876a,	// (0x00027b8e) popup_note2_window_t1

0x87af,	// (0x00027bd3) popup_note2_window_t2_ParamLimits

0x87af,	// (0x00027bd3) popup_note2_window_t2

0x87f4,	// (0x00027c18) popup_note2_window_t3_ParamLimits

0x87f4,	// (0x00027c18) popup_note2_window_t3

0x8839,	// (0x00027c5d) popup_note2_window_t4_ParamLimits

0x8839,	// (0x00027c5d) popup_note2_window_t4

0x3a70,	// (0x00022e94) popup_note2_window_t5_ParamLimits

0x3a70,	// (0x00022e94) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002f06d) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002f06d) popup_note2_window_t

0x8868,	// (0x00027c8c) popup_note2_image_window_g1_ParamLimits

0x8868,	// (0x00027c8c) popup_note2_image_window_g1

0x8874,	// (0x00027c98) popup_note2_image_window_g2_ParamLimits

0x8874,	// (0x00027c98) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002f078) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002f078) popup_note2_image_window_g

0x8886,	// (0x00027caa) popup_note2_image_window_t1_ParamLimits

0x8886,	// (0x00027caa) popup_note2_image_window_t1

0x889e,	// (0x00027cc2) popup_note2_image_window_t2_ParamLimits

0x889e,	// (0x00027cc2) popup_note2_image_window_t2

0x88b6,	// (0x00027cda) popup_note2_image_window_t3_ParamLimits

0x88b6,	// (0x00027cda) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002f07d) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002f07d) popup_note2_image_window_t

0x5b76,	// (0x00024f9a) popup_note2_wait_window_g1_ParamLimits

0x5b76,	// (0x00024f9a) popup_note2_wait_window_g1

0x88d2,	// (0x00027cf6) popup_note2_wait_window_g2_ParamLimits

0x88d2,	// (0x00027cf6) popup_note2_wait_window_g2

0x5b8e,	// (0x00024fb2) popup_note2_wait_window_g3_ParamLimits

0x5b8e,	// (0x00024fb2) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002f084) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002f084) popup_note2_wait_window_g

0x88de,	// (0x00027d02) popup_note2_wait_window_t1_ParamLimits

0x88de,	// (0x00027d02) popup_note2_wait_window_t1

0x88fc,	// (0x00027d20) popup_note2_wait_window_t2_ParamLimits

0x88fc,	// (0x00027d20) popup_note2_wait_window_t2

0x891a,	// (0x00027d3e) popup_note2_wait_window_t3_ParamLimits

0x891a,	// (0x00027d3e) popup_note2_wait_window_t3

0x892c,	// (0x00027d50) popup_note2_wait_window_t4_ParamLimits

0x892c,	// (0x00027d50) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002f08b) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002f08b) popup_note2_wait_window_t

0x893e,	// (0x00027d62) wait_bar2_pane_ParamLimits

0x893e,	// (0x00027d62) wait_bar2_pane

0x8956,	// (0x00027d7a) popup_snote2_single_text_window_g1_ParamLimits

0x8956,	// (0x00027d7a) popup_snote2_single_text_window_g1

0x897e,	// (0x00027da2) popup_snote2_single_text_window_t1_ParamLimits

0x897e,	// (0x00027da2) popup_snote2_single_text_window_t1

0x89ca,	// (0x00027dee) popup_snote2_single_text_window_t2_ParamLimits

0x89ca,	// (0x00027dee) popup_snote2_single_text_window_t2

0x8a16,	// (0x00027e3a) popup_snote2_single_text_window_t3_ParamLimits

0x8a16,	// (0x00027e3a) popup_snote2_single_text_window_t3

0x8a57,	// (0x00027e7b) popup_snote2_single_text_window_t4_ParamLimits

0x8a57,	// (0x00027e7b) popup_snote2_single_text_window_t4

0x8a8d,	// (0x00027eb1) popup_snote2_single_text_window_t5_ParamLimits

0x8a8d,	// (0x00027eb1) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002f094) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002f094) popup_snote2_single_text_window_t

0x8ab8,	// (0x00027edc) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ab8,	// (0x00027edc) popup_snote2_single_graphic_window_g1

0x8ae0,	// (0x00027f04) popup_snote2_single_graphic_window_g2_ParamLimits

0x8ae0,	// (0x00027f04) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002f09f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002f09f) popup_snote2_single_graphic_window_g

0x8b08,	// (0x00027f2c) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b08,	// (0x00027f2c) popup_snote2_single_graphic_window_t1

0x8b54,	// (0x00027f78) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b54,	// (0x00027f78) popup_snote2_single_graphic_window_t2

0x8a16,	// (0x00027e3a) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a16,	// (0x00027e3a) popup_snote2_single_graphic_window_t3

0x8a57,	// (0x00027e7b) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a57,	// (0x00027e7b) popup_snote2_single_graphic_window_t4

0x8a8d,	// (0x00027eb1) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a8d,	// (0x00027eb1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002f0a4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002f0a4) popup_snote2_single_graphic_window_t

0x7587,	// (0x000269ab) clock_nsta_pane_cp2_t1

0x7587,	// (0x000269ab) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002eec4) clock_nsta_pane_cp2_t

0x06d9,	// (0x0001fafd) form_field_data_wide_pane_g1_ParamLimits

0x4006,	// (0x0002342a) form_field_data_wide_pane_g2_ParamLimits

0x4006,	// (0x0002342a) form_field_data_wide_pane_g2

0x4012,	// (0x00023436) form_field_data_wide_pane_g3_ParamLimits

0x4012,	// (0x00023436) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002ea9f) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002ea9f) form_field_data_wide_pane_g

0xe0b9,	// (0x0002d4dd) grid_touch_3_pane_ParamLimits

0xe0b9,	// (0x0002d4dd) grid_touch_3_pane

0xe585,	// (0x0002d9a9) cell_touch_3_pane_ParamLimits

0xe585,	// (0x0002d9a9) cell_touch_3_pane

0x7ae1,	// (0x00026f05) cell_touch_3_pane_g1

0x7ae1,	// (0x00026f05) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002ef49) cell_touch_3_pane_g

0x3ac8,	// (0x00022eec) cont_query_data_pane

0x3ad0,	// (0x00022ef4) cont_query_data_pane_cp1

0x8bce,	// (0x00027ff2) button_value_adjust_pane_cp7

0x8bd6,	// (0x00027ffa) query_popup_pane_cp3

0x476a,	// (0x00023b8e) bg_popup_sub_pane_cp22_ParamLimits

0x1979,	// (0x00020d9d) navi_navi_volume_pane_cp2

0x1994,	// (0x00020db8) popup_side_volume_key_window_g2

0x19a3,	// (0x00020dc7) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002eb35) popup_side_volume_key_window_g

0x19c0,	// (0x00020de4) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002eb3c) popup_side_volume_key_window_t

0x4a21,	// (0x00023e45) popup_side_volume_key_window_ParamLimits

0xb86b,	// (0x0002ac8f) list_double_graphic_pane_g4_ParamLimits

0xb86b,	// (0x0002ac8f) list_double_graphic_pane_g4

0xdf1a,	// (0x0002d33e) list_single_2heading_msg_pane_ParamLimits

0xdf1a,	// (0x0002d33e) list_single_2heading_msg_pane

0xbdee,	// (0x0002b212) list_single_2heading_msg_pane_g1_ParamLimits

0xbdee,	// (0x0002b212) list_single_2heading_msg_pane_g1

0xbdfa,	// (0x0002b21e) list_single_2heading_msg_pane_g2_ParamLimits

0xbdfa,	// (0x0002b21e) list_single_2heading_msg_pane_g2

0xbe0d,	// (0x0002b231) list_single_2heading_msg_pane_g3_ParamLimits

0xbe0d,	// (0x0002b231) list_single_2heading_msg_pane_g3

0xbe19,	// (0x0002b23d) list_single_2heading_msg_pane_g4_ParamLimits

0xbe19,	// (0x0002b23d) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002f0af) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002f0af) list_single_2heading_msg_pane_g

0xbe31,	// (0x0002b255) list_single_2heading_msg_pane_t1_ParamLimits

0xbe31,	// (0x0002b255) list_single_2heading_msg_pane_t1

0xbe59,	// (0x0002b27d) list_single_2heading_msg_pane_t2_ParamLimits

0xbe59,	// (0x0002b27d) list_single_2heading_msg_pane_t2

0xbec4,	// (0x0002b2e8) list_single_2heading_msg_pane_t3_ParamLimits

0xbec4,	// (0x0002b2e8) list_single_2heading_msg_pane_t3

0x1231,	// (0x00020655) list_single_2heading_msg_pane_t4_ParamLimits

0x1231,	// (0x00020655) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002f0b8) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002f0b8) list_single_2heading_msg_pane_t

0x36b7,	// (0x00022adb) title_pane_g4_ParamLimits

0x36b7,	// (0x00022adb) title_pane_g4

0x1788,	// (0x00020bac) title_pane_stacon_g3_ParamLimits

0x1788,	// (0x00020bac) title_pane_stacon_g3

0x86fc,	// (0x00027b20) list_single_2graphic_im_pane_g4_ParamLimits

0x86fc,	// (0x00027b20) list_single_2graphic_im_pane_g4

0x65c7,	// (0x000259eb) popup_side_volume_key_window_cp

0x6dd7,	// (0x000261fb) main_idle_act2_pane_t1

0x2303,	// (0x00021727) toolbar_button_pane_g10

0xd3c1,	// (0x0002c7e5) popup_toolbar_window_cp1

0x7578,	// (0x0002699c) clock_nsta_pane_cp_t1

0x7578,	// (0x0002699c) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002eebf) clock_nsta_pane_cp_t

0x1979,	// (0x00020d9d) navi_navi_volume_pane_cp2_ParamLimits

0x1988,	// (0x00020dac) popup_side_volume_key_window_g1_ParamLimits

0x1994,	// (0x00020db8) popup_side_volume_key_window_g2_ParamLimits

0x19a3,	// (0x00020dc7) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002eb35) popup_side_volume_key_window_g_ParamLimits

0x2749,	// (0x00021b6d) fep_hwr_aid_pane

0xdb0f,	// (0x0002cf33) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b3d,	// (0x00026f61) fep_hwr_top_pane_g1_ParamLimits

0x7b4f,	// (0x00026f73) fep_hwr_top_pane_g2_ParamLimits

0x2802,	// (0x00021c26) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002ef14) fep_hwr_top_pane_g_ParamLimits

0x2817,	// (0x00021c3b) fep_hwr_top_text_pane_ParamLimits

0x638a,	// (0x000257ae) aid_touch_tab_arrow_arrow_2

0x6393,	// (0x000257b7) aid_touch_tab_arrow_left_2

0x275d,	// (0x00021b81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2794,	// (0x00021bb8) fep_hwr_prediction_pane

0x7caf,	// (0x000270d3) fep_vkb_prediction_pane

0xe36b,	// (0x0002d78f) fep_vkb_side_pane_g3_ParamLimits

0xe36b,	// (0x0002d78f) fep_vkb_side_pane_g3

0x7d5f,	// (0x00027183) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x81df,	// (0x00027603) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x81ec,	// (0x00027610) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002efbe) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8bfb,	// (0x0002801f) fep_hwr_prediction_pane_g1

0x2aa4,	// (0x00021ec8) fep_hwr_prediction_pane_g2

0x2aac,	// (0x00021ed0) fep_hwr_prediction_pane_g3

0x2ab4,	// (0x00021ed8) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002f0c1) fep_hwr_prediction_pane_g

0x8bfb,	// (0x0002801f) fep_vkb_prediction_pane_g1

0x8c05,	// (0x00028029) fep_vkb_prediction_pane_g2

0x8c0d,	// (0x00028031) fep_vkb_prediction_pane_g3

0x8c15,	// (0x00028039) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002f0ca) fep_vkb_prediction_pane_g

0x25c9,	// (0x000219ed) slider_set_pane_g3

0x25dd,	// (0x00021a01) slider_set_pane_g4

0x25f5,	// (0x00021a19) slider_set_pane_g5

0x25c9,	// (0x000219ed) slider_set_pane_g6

0x260b,	// (0x00021a2f) slider_set_pane_g7

0x6a1c,	// (0x00025e40) slider_form_pane_g3

0x6a25,	// (0x00025e49) slider_form_pane_g4

0x6a2d,	// (0x00025e51) slider_form_pane_g5

0x6a1c,	// (0x00025e40) slider_form_pane_g6

0xdeec,	// (0x0002d310) slider_form_pane_g7

0x7081,	// (0x000264a5) slider_set_pane_vc_g3

0x708a,	// (0x000264ae) slider_set_pane_vc_g4

0x7093,	// (0x000264b7) slider_set_pane_vc_g5

0x7081,	// (0x000264a5) slider_set_pane_vc_g6

0x709c,	// (0x000264c0) slider_set_pane_vc_g7

0x725c,	// (0x00026680) slider_form_pane_vc_g1

0x7265,	// (0x00026689) slider_form_pane_vc_g2

0x726e,	// (0x00026692) slider_form_pane_vc_g3

0x725c,	// (0x00026680) slider_form_pane_vc_g4

0x7277,	// (0x0002669b) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002ee91) slider_form_pane_vc_g

0x366f,	// (0x00022a93) main_idle_act3_pane

0x8c1d,	// (0x00028041) ai3_links_pane

0xe5cd,	// (0x0002d9f1) popup_ai3_data_window_ParamLimits

0xe5cd,	// (0x0002d9f1) popup_ai3_data_window

0x366f,	// (0x00022a93) grid_ai3_links_pane

0xe5e7,	// (0x0002da0b) cell_ai3_links_pane_ParamLimits

0xe5e7,	// (0x0002da0b) cell_ai3_links_pane

0x8c58,	// (0x0002807c) bg_popup_sub_pane_cp11

0x8c65,	// (0x00028089) cell_ai3_links_pane_g1

0x366f,	// (0x00022a93) bg_popup_sub_pane_cp12

0x8c8a,	// (0x000280ae) heading_ai3_data_pane

0x8c92,	// (0x000280b6) list_ai3_gene_pane

0x8c9e,	// (0x000280c2) popup_ai3_data_window_g1

0x8ca6,	// (0x000280ca) heading_ai3_data_pane_g1

0x8cae,	// (0x000280d2) heading_ai3_data_pane_t1

0x8cbc,	// (0x000280e0) list_double_ai3_gene_pane_ParamLimits

0x8cbc,	// (0x000280e0) list_double_ai3_gene_pane

0x8cc9,	// (0x000280ed) list_single_ai3_gene_pane_ParamLimits

0x8cc9,	// (0x000280ed) list_single_ai3_gene_pane

0x7aa6,	// (0x00026eca) list_highlight_pane_cp7_ParamLimits

0x7aa6,	// (0x00026eca) list_highlight_pane_cp7

0x8cd6,	// (0x000280fa) list_single_a13_gene_pane_t1_ParamLimits

0x8cd6,	// (0x000280fa) list_single_a13_gene_pane_t1

0x8ced,	// (0x00028111) list_single_ai3_gene_pane_g1

0x8cf6,	// (0x0002811a) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002f0d3) list_single_ai3_gene_pane_g

0x8cfe,	// (0x00028122) list_double_ai3_gene_pane_g1_ParamLimits

0x8cfe,	// (0x00028122) list_double_ai3_gene_pane_g1

0x8d0a,	// (0x0002812e) list_double_ai3_gene_pane_t1_ParamLimits

0x8d0a,	// (0x0002812e) list_double_ai3_gene_pane_t1

0x8d26,	// (0x0002814a) list_double_ai3_gene_pane_t2_ParamLimits

0x8d26,	// (0x0002814a) list_double_ai3_gene_pane_t2

0x8d3c,	// (0x00028160) list_double_ai3_gene_pane_t3_ParamLimits

0x8d3c,	// (0x00028160) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002f0d8) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002f0d8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1162,	// (0x00020586) aid_size_min_col_2

0xe5b7,	// (0x0002d9db) aid_size_min_msg_ParamLimits

0xe5b7,	// (0x0002d9db) aid_size_min_msg

0xe37f,	// (0x0002d7a3) fep_vkb_top_text_pane_g2_ParamLimits

0xe37f,	// (0x0002d7a3) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002ef44) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002ef44) fep_vkb_top_text_pane_g

0x366f,	// (0x00022a93) main_hc_apps_shell_pane

0x8d59,	// (0x0002817d) grid_hc_apps_pane_ParamLimits

0x8d59,	// (0x0002817d) grid_hc_apps_pane

0x8d68,	// (0x0002818c) list_hc_apps_pane

0x8d70,	// (0x00028194) scroll_pane_cp37_ParamLimits

0x8d70,	// (0x00028194) scroll_pane_cp37

0xe601,	// (0x0002da25) cell_hc_apps_pane_ParamLimits

0xe601,	// (0x0002da25) cell_hc_apps_pane

0xe6bf,	// (0x0002dae3) cell_hc_apps_pane_g1_ParamLimits

0xe6bf,	// (0x0002dae3) cell_hc_apps_pane_g1

0x8e5b,	// (0x0002827f) cell_hc_apps_pane_g2_ParamLimits

0x8e5b,	// (0x0002827f) cell_hc_apps_pane_g2

0x8e77,	// (0x0002829b) cell_hc_apps_pane_g3_ParamLimits

0x8e77,	// (0x0002829b) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002f0df) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002f0df) cell_hc_apps_pane_g

0xe6ec,	// (0x0002db10) cell_hc_apps_pane_t1_ParamLimits

0xe6ec,	// (0x0002db10) cell_hc_apps_pane_t1

0x39ec,	// (0x00022e10) grid_highlight_pane_cp10_ParamLimits

0x39ec,	// (0x00022e10) grid_highlight_pane_cp10

0xe72a,	// (0x0002db4e) list_single_hc_apps_pane_ParamLimits

0xe72a,	// (0x0002db4e) list_single_hc_apps_pane

0xe757,	// (0x0002db7b) list_single_hc_apps_pane_g1

0xbf32,	// (0x0002b356) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002f0e6) list_single_hc_apps_pane_g

0xbf4b,	// (0x0002b36f) list_single_hc_apps_pane_g2_copy1

0xbf67,	// (0x0002b38b) list_single_hc_apps_pane_t1

0x3763,	// (0x00022b87) bg_set_opt_pane_cp_ParamLimits

0x16b0,	// (0x00020ad4) setting_slider_pane_t1_ParamLimits

0x16c9,	// (0x00020aed) setting_slider_pane_t2_ParamLimits

0x16e3,	// (0x00020b07) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e982) setting_slider_pane_t_ParamLimits

0x16fb,	// (0x00020b1f) slider_set_pane_ParamLimits

0x1c22,	// (0x00021046) control_pane_g5_ParamLimits

0x1c22,	// (0x00021046) control_pane_g5

0x686b,	// (0x00025c8f) slider_set_pane_g1_ParamLimits

0x25bd,	// (0x000219e1) slider_set_pane_g2_ParamLimits

0x25c9,	// (0x000219ed) slider_set_pane_g3_ParamLimits

0x25dd,	// (0x00021a01) slider_set_pane_g4_ParamLimits

0x25f5,	// (0x00021a19) slider_set_pane_g5_ParamLimits

0x25c9,	// (0x000219ed) slider_set_pane_g6_ParamLimits

0x260b,	// (0x00021a2f) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002ed7c) slider_set_pane_g_ParamLimits

0x4b0d,	// (0x00023f31) navi_icon_text_pane_ParamLimits

0xd756,	// (0x0002cb7a) aid_fill_nsta_2_ParamLimits

0xd78d,	// (0x0002cbb1) aid_touch_tab_arrow_left_ParamLimits

0xd7a3,	// (0x0002cbc7) aid_touch_tab_arrow_right_ParamLimits

0xd83e,	// (0x0002cc62) clock_nsta_pane_ParamLimits

0x636c,	// (0x00025790) navi_icon_pane_g1_ParamLimits

0x6378,	// (0x0002579c) navi_text_pane_t1_ParamLimits

0x7690,	// (0x00026ab4) navi_icon_text_pane_g1_ParamLimits

0x769c,	// (0x00026ac0) navi_icon_text_pane_t1_ParamLimits

0xe757,	// (0x0002db7b) list_single_hc_apps_pane_g1_ParamLimits

0xbf32,	// (0x0002b356) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002f0e6) list_single_hc_apps_pane_g_ParamLimits

0xbf4b,	// (0x0002b36f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf67,	// (0x0002b38b) list_single_hc_apps_pane_t1_ParamLimits

0xc0cb,	// (0x0002b4ef) popup_toolbar2_fixed_window_ParamLimits

0xc0cb,	// (0x0002b4ef) popup_toolbar2_fixed_window

0xc964,	// (0x0002bd88) popup_toolbar2_float_window

0x366f,	// (0x00022a93) bg_popup_sub_pane_cp27

0x8f4e,	// (0x00028372) grid_toolbar2_float_pane

0x366f,	// (0x00022a93) bg_popup_sub_pane_cp26

0x8f4e,	// (0x00028372) grid_toolbar2_fixed_pane

0xe770,	// (0x0002db94) cell_toolbar2_fixed_pane_ParamLimits

0xe770,	// (0x0002db94) cell_toolbar2_fixed_pane

0xe78a,	// (0x0002dbae) cell_toolbar2_fixed_pane_g1

0x8f6f,	// (0x00028393) toolbar2_fixed_button_pane

0x54d5,	// (0x000248f9) toolbar2_fixed_button_pane_g1

0x54dd,	// (0x00024901) toolbar2_fixed_button_pane_g2

0x54e5,	// (0x00024909) toolbar2_fixed_button_pane_g3

0x54ed,	// (0x00024911) toolbar2_fixed_button_pane_g4

0x54f5,	// (0x00024919) toolbar2_fixed_button_pane_g5

0x54fd,	// (0x00024921) toolbar2_fixed_button_pane_g6

0x5505,	// (0x00024929) toolbar2_fixed_button_pane_g7

0x550d,	// (0x00024931) toolbar2_fixed_button_pane_g8

0x5515,	// (0x00024939) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002ec7e) toolbar2_fixed_button_pane_g

0x8f77,	// (0x0002839b) cell_toolbar2_float_pane_ParamLimits

0x8f77,	// (0x0002839b) cell_toolbar2_float_pane

0x8f88,	// (0x000283ac) cell_toolbar2_float_pane_g1

0x8f6f,	// (0x00028393) toolbar2_fixed_button_pane_cp

0xe259,	// (0x0002d67d) fep_vkb_accented_list_pane_ParamLimits

0xe259,	// (0x0002d67d) fep_vkb_accented_list_pane

0x2965,	// (0x00021d89) bg_popup_fep_shadow_pane_g9

0x4c8d,	// (0x000240b1) bg_popup_fep_shadow_pane_cp3

0x414c,	// (0x00023570) list_accented_list_pane

0x8f91,	// (0x000283b5) list_single_accented_list_pane_ParamLimits

0x8f91,	// (0x000283b5) list_single_accented_list_pane

0x4c8d,	// (0x000240b1) list_highlight_pane_cp10

0x8fa2,	// (0x000283c6) list_single_accented_list_pane_t1

0xc88e,	// (0x0002bcb2) popup_slider_window_ParamLimits

0xc88e,	// (0x0002bcb2) popup_slider_window

0x8bde,	// (0x00028002) aid_indentation_list_msg

0xe881,	// (0x0002dca5) bg_popup_window_pane_cp19

0x90ce,	// (0x000284f2) popup_slider_window_g1

0x90ea,	// (0x0002850e) popup_slider_window_g2

0x9106,	// (0x0002852a) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002f0eb) popup_slider_window_g

0x916c,	// (0x00028590) popup_slider_window_t1

0x91e0,	// (0x00028604) small_volume_slider_vertical_pane

0x7ae1,	// (0x00026f05) small_volume_slider_vertical_pane_g1

0x7ae1,	// (0x00026f05) small_volume_slider_vertical_pane_g2

0x91fc,	// (0x00028620) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002f0fd) small_volume_slider_vertical_pane_g

0xc039,	// (0x0002b45d) area_side_right_pane_ParamLimits

0xc039,	// (0x0002b45d) area_side_right_pane

0xca9a,	// (0x0002bebe) aid_size_side_button_ParamLimits

0xca9a,	// (0x0002bebe) aid_size_side_button

0xcab3,	// (0x0002bed7) grid_sctrl_middle_pane_ParamLimits

0xcab3,	// (0x0002bed7) grid_sctrl_middle_pane

0x2aef,	// (0x00021f13) sctrl_sk_bottom_pane

0x2b00,	// (0x00021f24) sctrl_sk_top_pane

0x2b12,	// (0x00021f36) aid_touch_sctrl_top

0x39ec,	// (0x00022e10) bg_sctrl_sk_pane_ParamLimits

0x39ec,	// (0x00022e10) bg_sctrl_sk_pane

0x2b1f,	// (0x00021f43) sctrl_sk_top_pane_g1

0x2b2c,	// (0x00021f50) sctrl_sk_top_pane_t1

0x2b12,	// (0x00021f36) aid_touch_sctrl_bottom

0x39ec,	// (0x00022e10) bg_sctrl_sk_pane_cp_ParamLimits

0x39ec,	// (0x00022e10) bg_sctrl_sk_pane_cp

0x2b47,	// (0x00021f6b) sctrl_sk_bottom_pane_g1

0x2b2c,	// (0x00021f50) sctrl_sk_bottom_pane_t1

0xcacd,	// (0x0002bef1) cell_sctrl_middle_pane_ParamLimits

0xcacd,	// (0x0002bef1) cell_sctrl_middle_pane

0xcade,	// (0x0002bf02) aid_touch_sctrl_middle_ParamLimits

0xcade,	// (0x0002bf02) aid_touch_sctrl_middle

0xcaeb,	// (0x0002bf0f) bg_sctrl_middle_pane_ParamLimits

0xcaeb,	// (0x0002bf0f) bg_sctrl_middle_pane

0x9284,	// (0x000286a8) cell_sctrl_middle_pane_g1_ParamLimits

0x9284,	// (0x000286a8) cell_sctrl_middle_pane_g1

0xcaf9,	// (0x0002bf1d) cell_sctrl_middle_pane_g2_ParamLimits

0xcaf9,	// (0x0002bf1d) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002f109) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002f109) cell_sctrl_middle_pane_g

0x54d5,	// (0x000248f9) bg_sctrl_middle_pane_g1

0x54dd,	// (0x00024901) bg_sctrl_middle_pane_g2

0x54e5,	// (0x00024909) bg_sctrl_middle_pane_g3

0x54ed,	// (0x00024911) bg_sctrl_middle_pane_g4

0x54f5,	// (0x00024919) bg_sctrl_middle_pane_g5

0x54fd,	// (0x00024921) bg_sctrl_middle_pane_g6

0x5505,	// (0x00024929) bg_sctrl_middle_pane_g7

0x550d,	// (0x00024931) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002f10e) bg_sctrl_middle_pane_g

0x5515,	// (0x00024939) bg_sctrl_middle_pane_g8_copy1

0x54d5,	// (0x000248f9) bg_sctrl_sk_pane_g1

0x54dd,	// (0x00024901) bg_sctrl_sk_pane_g2

0x54e5,	// (0x00024909) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002ec7e) bg_sctrl_sk_pane_g

0x3f27,	// (0x0002334b) aid_size_touch_scroll_bar

0x54ed,	// (0x00024911) bg_sctrl_sk_pane_g4

0x54f5,	// (0x00024919) bg_sctrl_sk_pane_g5

0x54fd,	// (0x00024921) bg_sctrl_sk_pane_g6

0x5505,	// (0x00024929) bg_sctrl_sk_pane_g7

0x550d,	// (0x00024931) bg_sctrl_sk_pane_g8

0x5515,	// (0x00024939) bg_sctrl_sk_pane_g9

0x1dc0,	// (0x000211e4) popup_fep_china_hwr2_fs_candidate_window

0xc3a8,	// (0x0002b7cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc3a8,	// (0x0002b7cc) popup_fep_china_hwr2_fs_control_window

0x7d5f,	// (0x00027183) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002f104) sctrl_sk_top_pane_g

0xe939,	// (0x0002dd5d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe939,	// (0x0002dd5d) aid_fep_china_hwr2_fs_cell

0xe94d,	// (0x0002dd71) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe94d,	// (0x0002dd71) bg_popup_fep_shadow_pane_cp4

0xe964,	// (0x0002dd88) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe964,	// (0x0002dd88) bg_popup_fep_shadow_pane_cp5

0xe976,	// (0x0002dd9a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe976,	// (0x0002dd9a) popup_fep_china_hwr2_fs_control_bar_grid

0xe98a,	// (0x0002ddae) popup_fep_china_hwr2_fs_control_funtion_grid

0x9258,	// (0x0002867c) aid_fep_china_hwr2_fs_candi_cell

0x366f,	// (0x00022a93) bg_popup_fep_shadow_pane_cp6

0x9262,	// (0x00028686) popup_fep_china_hwr2_fs_candidate_grid

0xe992,	// (0x0002ddb6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe992,	// (0x0002ddb6) cell_fep_china_hwr2_fs_funtion_grid

0x7ae1,	// (0x00026f05) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9284,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9284,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9292,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9292,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002f11f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002f11f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9aa,	// (0x0002ddce) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9aa,	// (0x0002ddce) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9bf,	// (0x0002dde3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9bf,	// (0x0002dde3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0002f124) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0002f124) cell_fep_china_hwr2_fs_funtion_grid_t

0x92d9,	// (0x000286fd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92e1,	// (0x00028705) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92e9,	// (0x0002870d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x0002f129) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92f1,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92f1,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid

0x930a,	// (0x0002872e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9312,	// (0x00028736) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7ae1,	// (0x00026f05) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7ae1,	// (0x00026f05) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002ef49) cell_fep_china_hwr2_fs_candidate_grid_g

0x931a,	// (0x0002873e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x50cb,	// (0x000244ef) clock_nsta_pane_cp_24_ParamLimits

0x50cb,	// (0x000244ef) clock_nsta_pane_cp_24

0x5149,	// (0x0002456d) indicator_nsta_pane_cp_24_ParamLimits

0x5149,	// (0x0002456d) indicator_nsta_pane_cp_24

0x61e8,	// (0x0002560c) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002ece3) heading_pane_g

0x6c20,	// (0x00026044) grid_sct_catagory_button_pane

0x6c50,	// (0x00026074) scroll_pane_cp5_ParamLimits

0x76de,	// (0x00026b02) button_value_adjust_pane_cp5_ParamLimits

0x76de,	// (0x00026b02) button_value_adjust_pane_cp5

0x77bd,	// (0x00026be1) form2_midp_time_pane_ParamLimits

0x9328,	// (0x0002874c) cell_sct_catagory_button_pane_ParamLimits

0x9328,	// (0x0002874c) cell_sct_catagory_button_pane

0x7aa6,	// (0x00026eca) bg_button_pane_cp01_ParamLimits

0x7aa6,	// (0x00026eca) bg_button_pane_cp01

0x7ae1,	// (0x00026f05) cell_sct_catagory_button_pane_g1

0xc907,	// (0x0002bd2b) popup_tb_extension_window

0xe9db,	// (0x0002ddff) aid_size_cell_ext_ParamLimits

0xe9db,	// (0x0002ddff) aid_size_cell_ext

0x3d69,	// (0x0002318d) bg_tb_trans_pane_cp1_ParamLimits

0x3d69,	// (0x0002318d) bg_tb_trans_pane_cp1

0xea01,	// (0x0002de25) grid_tb_ext_pane_ParamLimits

0xea01,	// (0x0002de25) grid_tb_ext_pane

0xea3c,	// (0x0002de60) cell_tb_ext_pane_ParamLimits

0xea3c,	// (0x0002de60) cell_tb_ext_pane

0xea64,	// (0x0002de88) cell_tb_ext_pane_g1_ParamLimits

0xea64,	// (0x0002de88) cell_tb_ext_pane_g1

0x93bc,	// (0x000287e0) cell_tb_ext_pane_t1

0x39ec,	// (0x00022e10) list_highlight_pane_cp11_ParamLimits

0x39ec,	// (0x00022e10) list_highlight_pane_cp11

0xc0e0,	// (0x0002b504) popup_uni_indicator_window_ParamLimits

0xc0e0,	// (0x0002b504) popup_uni_indicator_window

0x3ff8,	// (0x0002341c) bg_popup_sub_pane_cp14

0x93d7,	// (0x000287fb) list_uniindi_pane

0x93e3,	// (0x00028807) uniindi_top_pane

0x39ec,	// (0x00022e10) bg_uniindi_top_pane

0x9402,	// (0x00028826) uniindi_top_pane_g1

0x9418,	// (0x0002883c) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0002f130) uniindi_top_pane_g

0x9442,	// (0x00028866) uniindi_top_pane_t1

0x946c,	// (0x00028890) list_single_uniindi_pane_ParamLimits

0x946c,	// (0x00028890) list_single_uniindi_pane

0x7ae1,	// (0x00026f05) bg_uniindi_top_pane_g1

0x947f,	// (0x000288a3) list_single_uniindi_pane_g1

0x9492,	// (0x000288b6) list_single_uniindi_pane_t1

0x366f,	// (0x00022a93) control_bg_pane

0x94b7,	// (0x000288db) bg_sctrl_sk_pane_cp1

0x94c0,	// (0x000288e4) bg_sctrl_sk_pane_cp2

0x94c9,	// (0x000288ed) control_bg_pane_g1

0x94d2,	// (0x000288f6) control_bg_pane_g2

0x0001,

0xfd15,	// (0x0002f139) control_bg_pane_g

0x752c,	// (0x00026950) cell_indicator_nsta_pane_g1_ParamLimits

0xe0e6,	// (0x0002d50a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002eead) cell_indicator_nsta_pane_g_ParamLimits

0x0f13,	// (0x00020337) form2_midp_time_pane_t1_ParamLimits

0x273b,	// (0x00021b5f) main_idle_act4_pane_ParamLimits

0x273b,	// (0x00021b5f) main_idle_act4_pane

0xc907,	// (0x0002bd2b) popup_tb_extension_window_ParamLimits

0xea23,	// (0x0002de47) tb_ext_find_pane_ParamLimits

0xea23,	// (0x0002de47) tb_ext_find_pane

0x94db,	// (0x000288ff) ai_gene_pane_1_cp1

0x4dd4,	// (0x000241f8) ai_gene_pane_2_cp1

0x94e3,	// (0x00028907) list_single_idle_plugin_calendar_pane

0x94ec,	// (0x00028910) list_single_idle_plugin_notification_pane

0x94f5,	// (0x00028919) list_single_idle_plugin_player_pane

0xea81,	// (0x0002dea5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xea81,	// (0x0002dea5) list_single_idle_plugin_shortcut_pane

0xeaa9,	// (0x0002decd) main_idle_act4_pane_t1

0xeabf,	// (0x0002dee3) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0002f13e) main_idle_act4_pane_t

0xead5,	// (0x0002def9) middle_sk_idle_act4_pane_ParamLimits

0xead5,	// (0x0002def9) middle_sk_idle_act4_pane

0xeaf1,	// (0x0002df15) popup_clock_digital_analogue_window_cp2

0xeb19,	// (0x0002df3d) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb19,	// (0x0002df3d) shortcut_wheel_idle_act4_pane

0x7ae1,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g1

0x7ae1,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g2

0x7ae1,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g3

0x7ae1,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g4

0x7ae1,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g5

0x9588,	// (0x000289ac) shortcut_wheel_idle_act4_pane_g6

0x9590,	// (0x000289b4) shortcut_wheel_idle_act4_pane_g7

0x9598,	// (0x000289bc) shortcut_wheel_idle_act4_pane_g8

0x95a0,	// (0x000289c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0002f143) shortcut_wheel_idle_act4_pane_g

0xdb0f,	// (0x0002cf33) middle_sk_idle_act4_pane_g1_ParamLimits

0xdb0f,	// (0x0002cf33) middle_sk_idle_act4_pane_g1

0xeb96,	// (0x0002dfba) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb96,	// (0x0002dfba) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0002f166) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0002f166) middle_sk_idle_act4_pane_g

0xebae,	// (0x0002dfd2) middle_sk_idle_act4_pane_t1_ParamLimits

0xebae,	// (0x0002dfd2) middle_sk_idle_act4_pane_t1

0xebdd,	// (0x0002e001) grid_ai_shortcut_pane_ParamLimits

0xebdd,	// (0x0002e001) grid_ai_shortcut_pane

0xebfa,	// (0x0002e01e) list_highlight_pane_cp16_ParamLimits

0xebfa,	// (0x0002e01e) list_highlight_pane_cp16

0xec07,	// (0x0002e02b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec07,	// (0x0002e02b) list_single_idle_plugin_shortcut_pane_g1

0xec13,	// (0x0002e037) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec13,	// (0x0002e037) list_single_idle_plugin_shortcut_pane_g2

0xec2f,	// (0x0002e053) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec2f,	// (0x0002e053) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x0002f16b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x0002f16b) list_single_idle_plugin_shortcut_pane_g

0xec44,	// (0x0002e068) cell_ai_shortcut_pane_ParamLimits

0xec44,	// (0x0002e068) cell_ai_shortcut_pane

0xec5a,	// (0x0002e07e) cell_ai_shortcut_pane_g1_ParamLimits

0xec5a,	// (0x0002e07e) cell_ai_shortcut_pane_g1

0x94db,	// (0x000288ff) ai_gene_pane_1_cp2

0x96d0,	// (0x00028af4) ai_gene_pane_2_cp2

0x96d8,	// (0x00028afc) list_highlight_pane_cp15

0x96e1,	// (0x00028b05) list_single_idle_plugin_calendar_pane_g1

0x96d8,	// (0x00028afc) list_highlight_pane_cp17

0x96e9,	// (0x00028b0d) list_single_idle_plugin_calendar_pane_g1_copy1

0x96f1,	// (0x00028b15) list_single_idle_plugin_player_pane_g1

0x6e79,	// (0x0002629d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0002f172) list_single_idle_plugin_player_pane_g

0x96f9,	// (0x00028b1d) list_single_idle_plugin_player_pane_t1

0x9707,	// (0x00028b2b) list_single_idle_plugin_player_pane_t2

0x9715,	// (0x00028b39) list_single_idle_plugin_player_pane_t3

0x9723,	// (0x00028b47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0002f177) list_single_idle_plugin_player_pane_t

0x9731,	// (0x00028b55) wait_bar_pane_cp15

0x9739,	// (0x00028b5d) grid_ai_notification_pane

0x6e79,	// (0x0002629d) list_single_idle_plugin_notification_pane_g1

0xec7c,	// (0x0002e0a0) cell_ai_notification_pane_ParamLimits

0xec7c,	// (0x0002e0a0) cell_ai_notification_pane

0x974f,	// (0x00028b73) cell_ai_notification_pane_g1

0x9757,	// (0x00028b7b) cell_ai_notification_pane_t1

0xec89,	// (0x0002e0ad) tb_ext_find_button_pane

0xec91,	// (0x0002e0b5) tb_ext_find_pane_g1

0xec99,	// (0x0002e0bd) tb_ext_find_pane_t1

0x467a,	// (0x00023a9e) tb_ext_find_button_pane_g1

0x9783,	// (0x00028ba7) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0002f180) tb_ext_find_button_pane_g

0xeaa9,	// (0x0002decd) main_idle_act4_pane_t1_ParamLimits

0xeabf,	// (0x0002dee3) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0002f13e) main_idle_act4_pane_t_ParamLimits

0xeaf1,	// (0x0002df15) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb09,	// (0x0002df2d) sat_plugin_idle_act4_pane_ParamLimits

0xeb09,	// (0x0002df2d) sat_plugin_idle_act4_pane

0xeca7,	// (0x0002e0cb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeca7,	// (0x0002e0cb) sat_plugin_idle_act4_pane_t1

0xecbf,	// (0x0002e0e3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xecbf,	// (0x0002e0e3) sat_plugin_idle_act4_pane_t2

0xecd7,	// (0x0002e0fb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecd7,	// (0x0002e0fb) sat_plugin_idle_act4_pane_t3

0xecef,	// (0x0002e113) sat_plugin_idle_act4_pane_t4_ParamLimits

0xecef,	// (0x0002e113) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0002f185) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0002f185) sat_plugin_idle_act4_pane_t

0x1514,	// (0x00020938) popup_battery_window_ParamLimits

0x1514,	// (0x00020938) popup_battery_window

0x39ec,	// (0x00022e10) bg_popup_sub_pane_cp25_ParamLimits

0x39ec,	// (0x00022e10) bg_popup_sub_pane_cp25

0x97d8,	// (0x00028bfc) popup_battery_window_g1_ParamLimits

0x97d8,	// (0x00028bfc) popup_battery_window_g1

0x97e4,	// (0x00028c08) popup_battery_window_t1_ParamLimits

0x97e4,	// (0x00028c08) popup_battery_window_t1

0x97f6,	// (0x00028c1a) popup_battery_window_t2_ParamLimits

0x97f6,	// (0x00028c1a) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x0002f18e) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x0002f18e) popup_battery_window_t

0xd5b9,	// (0x0002c9dd) midp_canvas_pane_ParamLimits

0xd616,	// (0x0002ca3a) midp_keypad_pane_ParamLimits

0xd616,	// (0x0002ca3a) midp_keypad_pane

0x4fb1,	// (0x000243d5) main_midp_pane_ParamLimits

0x7596,	// (0x000269ba) signal_pane_g2_cp_ParamLimits

0xed07,	// (0x0002e12b) aid_size_cell_midp_keypad_ParamLimits

0xed07,	// (0x0002e12b) aid_size_cell_midp_keypad

0xed25,	// (0x0002e149) midp_keyp_game_grid_pane_ParamLimits

0xed25,	// (0x0002e149) midp_keyp_game_grid_pane

0xed4c,	// (0x0002e170) midp_keyp_rocker_pane_ParamLimits

0xed4c,	// (0x0002e170) midp_keyp_rocker_pane

0xed9d,	// (0x0002e1c1) midp_keyp_sk_left_pane_ParamLimits

0xed9d,	// (0x0002e1c1) midp_keyp_sk_left_pane

0xedf1,	// (0x0002e215) midp_keyp_sk_right_pane_ParamLimits

0xedf1,	// (0x0002e215) midp_keyp_sk_right_pane

0x366f,	// (0x00022a93) bg_button_pane_cp03

0xee45,	// (0x0002e269) midp_keyp_sk_left_pane_g1

0x366f,	// (0x00022a93) bg_button_pane_cp04

0xee45,	// (0x0002e269) midp_keyp_sk_right_pane_g1

0x7ae1,	// (0x00026f05) midp_keyp_rocker_pane_g1

0xee4e,	// (0x0002e272) keyp_game_cell_pane_ParamLimits

0xee4e,	// (0x0002e272) keyp_game_cell_pane

0x366f,	// (0x00022a93) bg_button_pane_cp02

0xee72,	// (0x0002e296) keyp_game_cell_pane_g1

0xc07b,	// (0x0002b49f) popup_fep_vkb2_window_ParamLimits

0xc07b,	// (0x0002b49f) popup_fep_vkb2_window

0xcb05,	// (0x0002bf29) aid_size_cell_vkb2_ParamLimits

0xcb05,	// (0x0002bf29) aid_size_cell_vkb2

0xcb3b,	// (0x0002bf5f) popup_fep_vkb2_window_g1_ParamLimits

0xcb3b,	// (0x0002bf5f) popup_fep_vkb2_window_g1

0xcb8b,	// (0x0002bfaf) vkb2_area_bottom_pane_ParamLimits

0xcb8b,	// (0x0002bfaf) vkb2_area_bottom_pane

0xcbdf,	// (0x0002c003) vkb2_area_keypad_pane_ParamLimits

0xcbdf,	// (0x0002c003) vkb2_area_keypad_pane

0xcc27,	// (0x0002c04b) vkb2_area_top_pane_ParamLimits

0xcc27,	// (0x0002c04b) vkb2_area_top_pane

0xccad,	// (0x0002c0d1) vkb2_top_entry_pane_ParamLimits

0xccad,	// (0x0002c0d1) vkb2_top_entry_pane

0xccda,	// (0x0002c0fe) vkb2_top_grid_left_pane_ParamLimits

0xccda,	// (0x0002c0fe) vkb2_top_grid_left_pane

0xccfa,	// (0x0002c11e) vkb2_top_grid_right_pane_ParamLimits

0xccfa,	// (0x0002c11e) vkb2_top_grid_right_pane

0x2da5,	// (0x000221c9) vkb2_cell_keypad_pane_ParamLimits

0x2da5,	// (0x000221c9) vkb2_cell_keypad_pane

0xcd40,	// (0x0002c164) vkb2_area_bottom_grid_pane_ParamLimits

0xcd40,	// (0x0002c164) vkb2_area_bottom_grid_pane

0xcd6a,	// (0x0002c18e) vkb2_area_bottom_pane_g1_ParamLimits

0xcd6a,	// (0x0002c18e) vkb2_area_bottom_pane_g1

0xcd90,	// (0x0002c1b4) vkb2_area_bottom_pane_g2_ParamLimits

0xcd90,	// (0x0002c1b4) vkb2_area_bottom_pane_g2

0xcdc1,	// (0x0002c1e5) vkb2_area_bottom_pane_g3_ParamLimits

0xcdc1,	// (0x0002c1e5) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0002f193) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0002f193) vkb2_area_bottom_pane_g

0x2f4f,	// (0x00022373) vkb2_top_cell_left_pane_ParamLimits

0x2f4f,	// (0x00022373) vkb2_top_cell_left_pane

0xee7b,	// (0x0002e29f) vkb2_top_entry_pane_g1_ParamLimits

0xee7b,	// (0x0002e29f) vkb2_top_entry_pane_g1

0xee89,	// (0x0002e2ad) vkb2_top_entry_pane_t1_ParamLimits

0xee89,	// (0x0002e2ad) vkb2_top_entry_pane_t1

0x99a7,	// (0x00028dcb) vkb2_top_entry_pane_t2_ParamLimits

0x99a7,	// (0x00028dcb) vkb2_top_entry_pane_t2

0x99d9,	// (0x00028dfd) vkb2_top_entry_pane_t3_ParamLimits

0x99d9,	// (0x00028dfd) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x0002f19a) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x0002f19a) vkb2_top_entry_pane_t

0xce2b,	// (0x0002c24f) vkb2_top_grid_right_pane_g1_ParamLimits

0xce2b,	// (0x0002c24f) vkb2_top_grid_right_pane_g1

0x2fb2,	// (0x000223d6) vkb2_top_grid_right_pane_g2_ParamLimits

0x2fb2,	// (0x000223d6) vkb2_top_grid_right_pane_g2

0x2fca,	// (0x000223ee) vkb2_top_grid_right_pane_g3_ParamLimits

0x2fca,	// (0x000223ee) vkb2_top_grid_right_pane_g3

0xce41,	// (0x0002c265) vkb2_top_grid_right_pane_g4_ParamLimits

0xce41,	// (0x0002c265) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0002f1a1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0002f1a1) vkb2_top_grid_right_pane_g

0x2ff8,	// (0x0002241c) vkb2_top_cell_left_pane_g1

0x300f,	// (0x00022433) vkb2_cell_keypad_pane_g1_ParamLimits

0x300f,	// (0x00022433) vkb2_cell_keypad_pane_g1

0x99fd,	// (0x00028e21) vkb2_cell_keypad_pane_t1_ParamLimits

0x99fd,	// (0x00028e21) vkb2_cell_keypad_pane_t1

0x301d,	// (0x00022441) vkb2_cell_bottom_grid_pane_ParamLimits

0x301d,	// (0x00022441) vkb2_cell_bottom_grid_pane

0x3056,	// (0x0002247a) vkb2_cell_bottom_grid_pane_g1

0xeb3a,	// (0x0002df5e) aid_call2_pane_cp02

0xeb42,	// (0x0002df66) aid_call_pane_cp02

0xeb4a,	// (0x0002df6e) clock_digital_number_pane_cp10

0xeb52,	// (0x0002df76) clock_digital_number_pane_cp11

0xeb5a,	// (0x0002df7e) clock_digital_number_pane_cp12

0xeb62,	// (0x0002df86) clock_digital_number_pane_cp13

0xeb6a,	// (0x0002df8e) clock_digital_separator_pane_cp10

0x467a,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g1

0x467a,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g2

0xeb72,	// (0x0002df96) popup_clock_digital_analogue_window_cp2_g3

0x467a,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g4

0xeb72,	// (0x0002df96) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0002f156) popup_clock_digital_analogue_window_cp2_g

0xeb7a,	// (0x0002df9e) popup_clock_digital_analogue_window_cp2_t1

0xeb88,	// (0x0002dfac) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0002f161) popup_clock_digital_analogue_window_cp2_t

0x7ae1,	// (0x00026f05) clock_digital_number_pane_cp10_g1

0x7ae1,	// (0x00026f05) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ef49) clock_digital_number_pane_cp10_g

0x7ae1,	// (0x00026f05) clock_digital_separator_pane_cp10_g1

0x7ae1,	// (0x00026f05) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ef49) clock_digital_separator_pane_cp10_g

0x9424,	// (0x00028848) uniindi_top_pane_g3

0x9435,	// (0x00028859) uniindi_top_pane_g4

0x2e30,	// (0x00022254) vkb2_row_keypad_pane_ParamLimits

0x2e30,	// (0x00022254) vkb2_row_keypad_pane

0x3072,	// (0x00022496) vkb2_cell_t_keypad_pane_ParamLimits

0x3072,	// (0x00022496) vkb2_cell_t_keypad_pane

0x3082,	// (0x000224a6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3082,	// (0x000224a6) vkb2_cell_t_keypad_pane_cp08

0x3095,	// (0x000224b9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3095,	// (0x000224b9) vkb2_cell_t_keypad_pane_cp09

0x30a9,	// (0x000224cd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x30a9,	// (0x000224cd) vkb2_cell_t_keypad_pane_cp01

0x30ba,	// (0x000224de) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x30ba,	// (0x000224de) vkb2_cell_t_keypad_pane_cp02

0x30cb,	// (0x000224ef) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x30cb,	// (0x000224ef) vkb2_cell_t_keypad_pane_cp03

0x30dc,	// (0x00022500) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x30dc,	// (0x00022500) vkb2_cell_t_keypad_pane_cp04

0x30ed,	// (0x00022511) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x30ed,	// (0x00022511) vkb2_cell_t_keypad_pane_cp05

0x30fe,	// (0x00022522) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x30fe,	// (0x00022522) vkb2_cell_t_keypad_pane_cp06

0x310f,	// (0x00022533) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x310f,	// (0x00022533) vkb2_cell_t_keypad_pane_cp07

0x3120,	// (0x00022544) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3120,	// (0x00022544) vkb2_cell_t_keypad_pane_cp10

0x7d5f,	// (0x00027183) vkb2_cell_t_keypad_pane_g1

0x9a14,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1

0x366f,	// (0x00022a93) popup_grid_graphic2_window

0xeec2,	// (0x0002e2e6) aid_size_cell_graphic2_ParamLimits

0xeec2,	// (0x0002e2e6) aid_size_cell_graphic2

0xef00,	// (0x0002e324) bg_popup_window_pane_cp21_ParamLimits

0xef00,	// (0x0002e324) bg_popup_window_pane_cp21

0xef0e,	// (0x0002e332) graphic2_pages_pane_ParamLimits

0xef0e,	// (0x0002e332) graphic2_pages_pane

0xef64,	// (0x0002e388) grid_graphic2_control_pane_ParamLimits

0xef64,	// (0x0002e388) grid_graphic2_control_pane

0xefac,	// (0x0002e3d0) grid_graphic2_pane_ParamLimits

0xefac,	// (0x0002e3d0) grid_graphic2_pane

0xf033,	// (0x0002e457) cell_graphic2_pane

0x366f,	// (0x00022a93) main_comp_mode_pane

0x8c92,	// (0x000280b6) list_ai3_gene_pane_ParamLimits

0xe881,	// (0x0002dca5) bg_popup_window_pane_cp19_ParamLimits

0x9072,	// (0x00028496) bg_touch_area_indi_pane_ParamLimits

0x9072,	// (0x00028496) bg_touch_area_indi_pane

0x9088,	// (0x000284ac) bg_touch_area_indi_pane_cp01_ParamLimits

0x9088,	// (0x000284ac) bg_touch_area_indi_pane_cp01

0x909e,	// (0x000284c2) bg_touch_area_indi_pane_cp02_ParamLimits

0x909e,	// (0x000284c2) bg_touch_area_indi_pane_cp02

0x90b4,	// (0x000284d8) bg_touch_area_indi_pane_cp03_ParamLimits

0x90b4,	// (0x000284d8) bg_touch_area_indi_pane_cp03

0x90ce,	// (0x000284f2) popup_slider_window_g1_ParamLimits

0x90ea,	// (0x0002850e) popup_slider_window_g2_ParamLimits

0x9106,	// (0x0002852a) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002f0eb) popup_slider_window_g_ParamLimits

0x916c,	// (0x00028590) popup_slider_window_t1_ParamLimits

0x91e0,	// (0x00028604) small_volume_slider_vertical_pane_ParamLimits

0xf033,	// (0x0002e457) cell_graphic2_pane_ParamLimits

0xf08e,	// (0x0002e4b2) bg_button_pane_cp10_ParamLimits

0xf08e,	// (0x0002e4b2) bg_button_pane_cp10

0xf0a1,	// (0x0002e4c5) bg_button_pane_cp11_ParamLimits

0xf0a1,	// (0x0002e4c5) bg_button_pane_cp11

0xf0b4,	// (0x0002e4d8) graphic2_pages_pane_g1_ParamLimits

0xf0b4,	// (0x0002e4d8) graphic2_pages_pane_g1

0xf0cf,	// (0x0002e4f3) graphic2_pages_pane_g2_ParamLimits

0xf0cf,	// (0x0002e4f3) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0002f1af) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0002f1af) graphic2_pages_pane_g

0xf0e7,	// (0x0002e50b) graphic2_pages_pane_t1_ParamLimits

0xf0e7,	// (0x0002e50b) graphic2_pages_pane_t1

0xf0ff,	// (0x0002e523) cell_graphic2_control_pane_ParamLimits

0xf0ff,	// (0x0002e523) cell_graphic2_control_pane

0xf131,	// (0x0002e555) cell_graphic2_pane_g1_ParamLimits

0xf131,	// (0x0002e555) cell_graphic2_pane_g1

0xdb1d,	// (0x0002cf41) cell_graphic2_pane_g2_ParamLimits

0xdb1d,	// (0x0002cf41) cell_graphic2_pane_g2

0xf13e,	// (0x0002e562) cell_graphic2_pane_g3_ParamLimits

0xf13e,	// (0x0002e562) cell_graphic2_pane_g3

0xdb2a,	// (0x0002cf4e) cell_graphic2_pane_g4_ParamLimits

0xdb2a,	// (0x0002cf4e) cell_graphic2_pane_g4

0xf14b,	// (0x0002e56f) cell_graphic2_pane_g5_ParamLimits

0xf14b,	// (0x0002e56f) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0002f1b4) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0002f1b4) cell_graphic2_pane_g

0xf16b,	// (0x0002e58f) cell_graphic2_pane_t1_ParamLimits

0xf16b,	// (0x0002e58f) cell_graphic2_pane_t1

0x61dc,	// (0x00025600) grid_highlight_pane_cp11_ParamLimits

0x61dc,	// (0x00025600) grid_highlight_pane_cp11

0x39ec,	// (0x00022e10) bg_button_pane_cp05

0xf1b4,	// (0x0002e5d8) cell_graphic2_control_pane_g1

0x7ae1,	// (0x00026f05) bg_touch_area_indi_pane_g1

0x9cf0,	// (0x00029114) aid_cmod_rocker_key_size

0x9cfa,	// (0x0002911e) aid_cmode_itu_key_size

0x9d04,	// (0x00029128) main_cmode_video_pane

0x9d2f,	// (0x00029153) main_comp_mode_itu_pane

0x9d3b,	// (0x0002915f) main_comp_mode_rocker_pane

0x9d47,	// (0x0002916b) cell_cmode_rocker_pane_ParamLimits

0x9d47,	// (0x0002916b) cell_cmode_rocker_pane

0x9d59,	// (0x0002917d) cell_cmode_itu_pane_ParamLimits

0x9d59,	// (0x0002917d) cell_cmode_itu_pane

0x3ff8,	// (0x0002341c) bg_button_pane_cp06_ParamLimits

0x3ff8,	// (0x0002341c) bg_button_pane_cp06

0x7d5f,	// (0x00027183) cell_cmode_rocker_pane_g1_ParamLimits

0x7d5f,	// (0x00027183) cell_cmode_rocker_pane_g1

0x9284,	// (0x000286a8) cell_cmode_rocker_pane_g2_ParamLimits

0x9284,	// (0x000286a8) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0002f1c4) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0002f1c4) cell_cmode_rocker_pane_g

0x366f,	// (0x00022a93) bg_button_pane_cp07

0x9d6e,	// (0x00029192) cell_cmode_itu_pane_g1

0x9d77,	// (0x0002919b) cell_cmode_itu_pane_t1

0x9d85,	// (0x000291a9) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0002f1c9) cell_cmode_itu_pane_t

0x94a7,	// (0x000288cb) aid_touch_ctrl_left

0x94af,	// (0x000288d3) aid_touch_ctrl_right

0x366f,	// (0x00022a93) compa_mode_pane

0xf1d8,	// (0x0002e5fc) aid_cmod_rocker_key_size_cp

0xf1e2,	// (0x0002e606) aid_cmode_itu_key_size_cp

0x9da7,	// (0x000291cb) compa_mode_pane_g1

0x9daf,	// (0x000291d3) compa_mode_pane_g2

0x9db7,	// (0x000291db) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0002f1ce) compa_mode_pane_g

0xf1ec,	// (0x0002e610) main_comp_mode_itu_pane_cp

0xf1f4,	// (0x0002e618) main_comp_mode_rocker_pane_cp

0xf1fc,	// (0x0002e620) cell_cmode_itu_pane_cp_ParamLimits

0xf1fc,	// (0x0002e620) cell_cmode_itu_pane_cp

0xf211,	// (0x0002e635) cell_cmode_rocker_pane_cp_ParamLimits

0xf211,	// (0x0002e635) cell_cmode_rocker_pane_cp

0x3ff8,	// (0x0002341c) bg_button_pane_cp06_cp_ParamLimits

0x3ff8,	// (0x0002341c) bg_button_pane_cp06_cp

0x7d5f,	// (0x00027183) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d5f,	// (0x00027183) cell_cmode_rocker_pane_g1_cp

0x7ae1,	// (0x00026f05) cell_cmode_rocker_pane_g2_cp

0x366f,	// (0x00022a93) bg_button_pane_cp07_cp

0xf223,	// (0x0002e647) cell_cmode_itu_pane_g1_cp

0xf22c,	// (0x0002e650) cell_cmode_itu_pane_t1_cp

0xf22c,	// (0x0002e650) cell_cmode_itu_pane_t2_cp

0xdee2,	// (0x0002d306) settings_code_pane_cp2

0x3763,	// (0x00022b87) bg_popup_window_pane_cp3_ParamLimits

0x3bec,	// (0x00023010) heading_pane_cp3_ParamLimits

0x3bf8,	// (0x0002301c) listscroll_popup_graphic_pane_ParamLimits

0x2749,	// (0x00021b6d) fep_hwr_aid_pane_ParamLimits

0x2b12,	// (0x00021f36) aid_touch_sctrl_top_ParamLimits

0x2b1f,	// (0x00021f43) sctrl_sk_top_pane_g1_ParamLimits

0x7d5f,	// (0x00027183) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002f104) sctrl_sk_top_pane_g_ParamLimits

0x2b2c,	// (0x00021f50) sctrl_sk_top_pane_t1_ParamLimits

0x2b12,	// (0x00021f36) aid_touch_sctrl_bottom_ParamLimits

0x2b2c,	// (0x00021f50) sctrl_sk_bottom_pane_t1_ParamLimits

0x93f0,	// (0x00028814) aid_area_touch_clock

0xcc6f,	// (0x0002c093) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc6f,	// (0x0002c093) aid_vkb2_area_top_pane_cell

0xcd1a,	// (0x0002c13e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd1a,	// (0x0002c13e) aid_vkb2_area_bottom_pane_cell

0x995f,	// (0x00028d83) popup_char_count_window

0x9e04,	// (0x00029228) popup_char_count_window_g1

0x9e0d,	// (0x00029231) popup_char_count_window_g2

0x9e16,	// (0x0002923a) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0002f1d5) popup_char_count_window_g

0x9e1f,	// (0x00029243) popup_char_count_window_t1

0x2bcd,	// (0x00021ff1) popup_fep_char_preview_window_ParamLimits

0x2bcd,	// (0x00021ff1) popup_fep_char_preview_window

0xcc8f,	// (0x0002c0b3) vkb2_top_candi_pane_ParamLimits

0xcc8f,	// (0x0002c0b3) vkb2_top_candi_pane

0xf23a,	// (0x0002e65e) cell_vkb2_top_candi_pane_ParamLimits

0xf23a,	// (0x0002e65e) cell_vkb2_top_candi_pane

0x5b68,	// (0x00024f8c) bg_popup_fep_char_preview_window_ParamLimits

0x5b68,	// (0x00024f8c) bg_popup_fep_char_preview_window

0x3135,	// (0x00022559) popup_fep_char_preview_window_t1_ParamLimits

0x3135,	// (0x00022559) popup_fep_char_preview_window_t1

0x9e7a,	// (0x0002929e) bg_popup_fep_char_preview_window_g1

0x9e82,	// (0x000292a6) bg_popup_fep_char_preview_window_g2

0x9e8a,	// (0x000292ae) bg_popup_fep_char_preview_window_g3

0x9e92,	// (0x000292b6) bg_popup_fep_char_preview_window_g4

0x9e9a,	// (0x000292be) bg_popup_fep_char_preview_window_g5

0x316f,	// (0x00022593) bg_popup_fep_char_preview_window_g6

0x9ea2,	// (0x000292c6) bg_popup_fep_char_preview_window_g7

0x9eaa,	// (0x000292ce) bg_popup_fep_char_preview_window_g8

0x9eb2,	// (0x000292d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb8,	// (0x0002f1dc) bg_popup_fep_char_preview_window_g

0x7d5f,	// (0x00027183) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7d5f,	// (0x00027183) cell_vkb2_top_candi_pane_g1

0x8161,	// (0x00027585) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8161,	// (0x00027585) cell_vkb2_top_candi_pane_g2

0x8182,	// (0x000275a6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8182,	// (0x000275a6) cell_vkb2_top_candi_pane_g3

0x3177,	// (0x0002259b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3177,	// (0x0002259b) cell_vkb2_top_candi_pane_g4

0x9d0e,	// (0x00029132) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d0e,	// (0x00029132) cell_vkb2_top_candi_pane_g5

0x9284,	// (0x000286a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9284,	// (0x000286a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0002f1ef) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0002f1ef) cell_vkb2_top_candi_pane_g

0x3198,	// (0x000225bc) cell_vkb2_top_candi_pane_t1

0x25a9,	// (0x000219cd) aid_size_touch_slider_mark_ParamLimits

0x25a9,	// (0x000219cd) aid_size_touch_slider_mark

0xef4a,	// (0x0002e36e) grid_graphic2_catg_pane_ParamLimits

0xef4a,	// (0x0002e36e) grid_graphic2_catg_pane

0xf006,	// (0x0002e42a) popup_grid_graphic2_window_t1_ParamLimits

0xf006,	// (0x0002e42a) popup_grid_graphic2_window_t1

0xf01c,	// (0x0002e440) popup_grid_graphic2_window_t2_ParamLimits

0xf01c,	// (0x0002e440) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x0002f1aa) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x0002f1aa) popup_grid_graphic2_window_t

0x39ec,	// (0x00022e10) bg_button_pane_cp05_ParamLimits

0xf1b4,	// (0x0002e5d8) cell_graphic2_control_pane_g1_ParamLimits

0xf2a0,	// (0x0002e6c4) cell_graphic2_catg_pane_ParamLimits

0xf2a0,	// (0x0002e6c4) cell_graphic2_catg_pane

0x366f,	// (0x00022a93) bg_button_pane_cp12

0xf2b2,	// (0x0002e6d6) cell_graphic2_catg_pane_g1

0x93bc,	// (0x000287e0) cell_tb_ext_pane_t1_ParamLimits

0x2f6f,	// (0x00022393) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2f6f,	// (0x00022393) vkb2_top_cell_right_narrow_pane

0x2f87,	// (0x000223ab) vkb2_top_cell_right_wide_pane_ParamLimits

0x2f87,	// (0x000223ab) vkb2_top_cell_right_wide_pane

0x273b,	// (0x00021b5f) bg_vkb2_func_pane_ParamLimits

0x273b,	// (0x00021b5f) bg_vkb2_func_pane

0x2ff8,	// (0x0002241c) vkb2_top_cell_left_pane_g1_ParamLimits

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp03

0x3056,	// (0x0002247a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54dd,	// (0x00024901) bg_vkb2_func_pane_g1

0x54e5,	// (0x00024909) bg_vkb2_func_pane_g2

0x54f5,	// (0x00024919) bg_vkb2_func_pane_g3

0x54ed,	// (0x00024911) bg_vkb2_func_pane_g4

0x54fd,	// (0x00024921) bg_vkb2_func_pane_g5

0x5505,	// (0x00024929) bg_vkb2_func_pane_g6

0x550d,	// (0x00024931) bg_vkb2_func_pane_g7

0x5515,	// (0x00024939) bg_vkb2_func_pane_g8

0x54d5,	// (0x000248f9) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0002f1fc) bg_vkb2_func_pane_g

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp01

0x2ff8,	// (0x0002241c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2ff8,	// (0x0002241c) vkb2_top_cell_right_wide_pane_g1

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x273b,	// (0x00021b5f) bg_vkb2_fuc_pane_cp02

0x3056,	// (0x0002247a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3056,	// (0x0002247a) vkb2_top_cell_right_narrow_pane_g1

0xe7c3,	// (0x0002dbe7) aid_touch_area_decrease_ParamLimits

0xe7c3,	// (0x0002dbe7) aid_touch_area_decrease

0xe7fd,	// (0x0002dc21) aid_touch_area_increase_ParamLimits

0xe7fd,	// (0x0002dc21) aid_touch_area_increase

0xe825,	// (0x0002dc49) aid_touch_area_mute_ParamLimits

0xe825,	// (0x0002dc49) aid_touch_area_mute

0xe84d,	// (0x0002dc71) aid_touch_area_slider_ParamLimits

0xe84d,	// (0x0002dc71) aid_touch_area_slider

0xe88d,	// (0x0002dcb1) popup_slider_window_g4_ParamLimits

0xe88d,	// (0x0002dcb1) popup_slider_window_g4

0xe8b5,	// (0x0002dcd9) popup_slider_window_g5_ParamLimits

0xe8b5,	// (0x0002dcd9) popup_slider_window_g5

0xe8e9,	// (0x0002dd0d) popup_slider_window_g6_ParamLimits

0xe8e9,	// (0x0002dd0d) popup_slider_window_g6

0x919a,	// (0x000285be) popup_slider_window_t2_ParamLimits

0x919a,	// (0x000285be) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002f0f8) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002f0f8) popup_slider_window_t

0xe905,	// (0x0002dd29) slider_pane_ParamLimits

0xe905,	// (0x0002dd29) slider_pane

0x9ed5,	// (0x000292f9) slider_pane_g1_ParamLimits

0x9ed5,	// (0x000292f9) slider_pane_g1

0x9ee9,	// (0x0002930d) slider_pane_g2_ParamLimits

0x9ee9,	// (0x0002930d) slider_pane_g2

0x9eff,	// (0x00029323) slider_pane_g3_ParamLimits

0x9eff,	// (0x00029323) slider_pane_g3

0x0003,

0xfdeb,	// (0x0002f20f) slider_pane_g_ParamLimits

0xfdeb,	// (0x0002f20f) slider_pane_g

0xc94f,	// (0x0002bd73) popup_tb_float_extension_window_ParamLimits

0xc94f,	// (0x0002bd73) popup_tb_float_extension_window

0x9f2b,	// (0x0002934f) aid_size_cell_tb_float_ext

0x366f,	// (0x00022a93) bg_popup_sub_window_cp28

0x9f37,	// (0x0002935b) grid_tb_float_ext_pane

0x9f41,	// (0x00029365) cell_tb_float_ext_pane_ParamLimits

0x9f41,	// (0x00029365) cell_tb_float_ext_pane

0x9f5b,	// (0x0002937f) cell_tb_float_ext_pane_g1

0x9f64,	// (0x00029388) grid_highlight_pane_cp12

0xca78,	// (0x0002be9c) cell_last_hwr_side_pane_ParamLimits

0xca78,	// (0x0002be9c) cell_last_hwr_side_pane

0x7ae1,	// (0x00026f05) cell_last_hwr_side_pane_g1

0x9f6d,	// (0x00029391) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x0002f218) cell_last_hwr_side_pane_g

0xcdf6,	// (0x0002c21a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcdf6,	// (0x0002c21a) vkb2_area_bottom_space_btn_pane

0x7d5f,	// (0x00027183) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a14,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3198,	// (0x000225bc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x31b7,	// (0x000225db) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x31b7,	// (0x000225db) vkb2_area_bottom_space_btn_pane_g1

0x31f1,	// (0x00022615) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x31f1,	// (0x00022615) vkb2_area_bottom_space_btn_pane_g2

0x3227,	// (0x0002264b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3227,	// (0x0002264b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x0002f21d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x0002f21d) vkb2_area_bottom_space_btn_pane_g

0x27f0,	// (0x00021c14) cel_fep_hwr_func_pane_ParamLimits

0x27f0,	// (0x00021c14) cel_fep_hwr_func_pane

0xca4d,	// (0x0002be71) cell_hwr_side_button_pane_ParamLimits

0xca4d,	// (0x0002be71) cell_hwr_side_button_pane

0x93f0,	// (0x00028814) aid_area_touch_clock_ParamLimits

0x39ec,	// (0x00022e10) bg_uniindi_top_pane_ParamLimits

0x9402,	// (0x00028826) uniindi_top_pane_g1_ParamLimits

0x9418,	// (0x0002883c) uniindi_top_pane_g2_ParamLimits

0x9424,	// (0x00028848) uniindi_top_pane_g3_ParamLimits

0x9435,	// (0x00028859) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0002f130) uniindi_top_pane_g_ParamLimits

0x9442,	// (0x00028866) uniindi_top_pane_t1_ParamLimits

0x39ec,	// (0x00022e10) bg_vkb2_func_pane_cp01_ParamLimits

0x39ec,	// (0x00022e10) bg_vkb2_func_pane_cp01

0x9f76,	// (0x0002939a) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f76,	// (0x0002939a) cel_fep_hwr_func_pane_g1

0x39ec,	// (0x00022e10) bg_vkb2_func_pane_cp02_ParamLimits

0x39ec,	// (0x00022e10) bg_vkb2_func_pane_cp02

0x9f76,	// (0x0002939a) cell_hwr_side_button_pane_g1_ParamLimits

0x9f76,	// (0x0002939a) cell_hwr_side_button_pane_g1

0x5356,	// (0x0002477a) status_pane_g4_ParamLimits

0x5356,	// (0x0002477a) status_pane_g4

0x5370,	// (0x00024794) status_pane_t1

0x7826,	// (0x00026c4a) form2_midp_gauge_slider_cont_pane

0x782e,	// (0x00026c52) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1b1,	// (0x0002d5d5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1c3,	// (0x0002d5e7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002eefc) form2_midp_gauge_slider_pane_t_ParamLimits

0x7864,	// (0x00026c88) form2_midp_slider_pane_ParamLimits

0x2b8d,	// (0x00021fb1) aid_size_cell_func_vkb2_ParamLimits

0x2b8d,	// (0x00021fb1) aid_size_cell_func_vkb2

0x9f17,	// (0x0002933b) slider_pane_g4_ParamLimits

0x9f17,	// (0x0002933b) slider_pane_g4

0xce57,	// (0x0002c27b) form2_midp_gauge_slider_pane_t2_cp01

0xce65,	// (0x0002c289) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce65,	// (0x0002c289) form2_midp_gauge_slider_pane_t3_cp01

0x329c,	// (0x000226c0) form2_midp_slider_pane_cp01

0x366f,	// (0x00022a93) navi_smil_pane

0x9faf,	// (0x000293d3) navi_smil_pane_g1

0x9fb7,	// (0x000293db) navi_smil_pane_t1

0x9f84,	// (0x000293a8) form2_midp_slider_pane_g1

0x9f8d,	// (0x000293b1) form2_midp_slider_pane_g2

0x9f95,	// (0x000293b9) form2_midp_slider_pane_g3

0x9f84,	// (0x000293a8) form2_midp_slider_pane_g4

0xf2bb,	// (0x0002e6df) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x0002f226) form2_midp_slider_pane_g

0x3261,	// (0x00022685) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3261,	// (0x00022685) vkb2_area_bottom_space_btn_pane_g4

0xd889,	// (0x0002ccad) lc0_navi_pane_ParamLimits

0xd889,	// (0x0002ccad) lc0_navi_pane

0xd8f3,	// (0x0002cd17) lc0_stat_indi_pane_ParamLimits

0xd8f3,	// (0x0002cd17) lc0_stat_indi_pane

0xd908,	// (0x0002cd2c) ls0_title_pane_ParamLimits

0xd908,	// (0x0002cd2c) ls0_title_pane

0x3ff8,	// (0x0002341c) bg_popup_sub_pane_cp14_ParamLimits

0x93d7,	// (0x000287fb) list_uniindi_pane_ParamLimits

0x93e3,	// (0x00028807) uniindi_top_pane_ParamLimits

0x947f,	// (0x000288a3) list_single_uniindi_pane_g1_ParamLimits

0x9492,	// (0x000288b6) list_single_uniindi_pane_t1_ParamLimits

0xce82,	// (0x0002c2a6) lc0_stat_clock_pane_ParamLimits

0xce82,	// (0x0002c2a6) lc0_stat_clock_pane

0xf2c6,	// (0x0002e6ea) lc0_stat_indi_pane_g1_ParamLimits

0xf2c6,	// (0x0002e6ea) lc0_stat_indi_pane_g1

0xf2d3,	// (0x0002e6f7) lc0_stat_indi_pane_g2_ParamLimits

0xf2d3,	// (0x0002e6f7) lc0_stat_indi_pane_g2

0x0001,

0x0060,	// (0x0001f484) lc0_stat_indi_pane_g_ParamLimits

0x0060,	// (0x0001f484) lc0_stat_indi_pane_g

0xce8f,	// (0x0002c2b3) lc0_uni_indicator_pane_ParamLimits

0xce8f,	// (0x0002c2b3) lc0_uni_indicator_pane

0xf2e0,	// (0x0002e704) ls0_title_pane_g1_ParamLimits

0xf2e0,	// (0x0002e704) ls0_title_pane_g1

0xf2f4,	// (0x0002e718) ls0_title_pane_t1_ParamLimits

0xf2f4,	// (0x0002e718) ls0_title_pane_t1

0xce9c,	// (0x0002c2c0) lc0_uni_indicator_pane_g1_ParamLimits

0xce9c,	// (0x0002c2c0) lc0_uni_indicator_pane_g1

0xa029,	// (0x0002944d) lc0_stat_clock_pane_t1

0x366f,	// (0x00022a93) main_ai5_pane

0xa037,	// (0x0002945b) ai5_sk_pane_ParamLimits

0xa037,	// (0x0002945b) ai5_sk_pane

0xf322,	// (0x0002e746) cell_ai5_widget_pane_ParamLimits

0xf322,	// (0x0002e746) cell_ai5_widget_pane

0xa0ff,	// (0x00029523) aid_size_cell_widget_grid

0xa115,	// (0x00029539) bg_ai5_widget_pane_ParamLimits

0xa115,	// (0x00029539) bg_ai5_widget_pane

0xa18d,	// (0x000295b1) cell_ai5_widget_pane_g2

0xa1a1,	// (0x000295c5) cell_ai5_widget_pane_g3

0xa1bb,	// (0x000295df) cell_ai5_widget_pane_g4

0xa1cb,	// (0x000295ef) cell_ai5_widget_pane_g5

0xa1db,	// (0x000295ff) cell_ai5_widget_pane_g6

0xa1e7,	// (0x0002960b) cell_ai5_widget_pane_g7

0xa22f,	// (0x00029653) cell_ai5_widget_pane_t1_ParamLimits

0xa22f,	// (0x00029653) cell_ai5_widget_pane_t1

0xa24c,	// (0x00029670) cell_ai5_widget_pane_t2_ParamLimits

0xa24c,	// (0x00029670) cell_ai5_widget_pane_t2

0xa264,	// (0x00029688) cell_ai5_widget_pane_t3_ParamLimits

0xa264,	// (0x00029688) cell_ai5_widget_pane_t3

0xa27c,	// (0x000296a0) cell_ai5_widget_pane_t4_ParamLimits

0xa27c,	// (0x000296a0) cell_ai5_widget_pane_t4

0xa2a2,	// (0x000296c6) cell_ai5_widget_pane_t5_ParamLimits

0xa2a2,	// (0x000296c6) cell_ai5_widget_pane_t5

0xa2c2,	// (0x000296e6) cell_ai5_widget_pane_t6_ParamLimits

0xa2c2,	// (0x000296e6) cell_ai5_widget_pane_t6

0xa2d4,	// (0x000296f8) cell_ai5_widget_pane_t7_ParamLimits

0xa2d4,	// (0x000296f8) cell_ai5_widget_pane_t7

0xa2ed,	// (0x00029711) cell_ai5_widget_pane_t8_ParamLimits

0xa2ed,	// (0x00029711) cell_ai5_widget_pane_t8

0x0009,

0xfe22,	// (0x0002f246) cell_ai5_widget_pane_t_ParamLimits

0xfe22,	// (0x0002f246) cell_ai5_widget_pane_t

0xa34c,	// (0x00029770) grid_ai5_widget_pane

0x3ff8,	// (0x0002341c) highlight_cell_ai5_widget_pane_ParamLimits

0x3ff8,	// (0x0002341c) highlight_cell_ai5_widget_pane

0xf388,	// (0x0002e7ac) ai5_sk_left_pane

0xf392,	// (0x0002e7b6) ai5_sk_middle_pane

0xf39c,	// (0x0002e7c0) ai5_sk_right_pane

0xa381,	// (0x000297a5) bg_ai5_widget_pane_g1_ParamLimits

0xa381,	// (0x000297a5) bg_ai5_widget_pane_g1

0xa38d,	// (0x000297b1) bg_ai5_widget_pane_g2_ParamLimits

0xa38d,	// (0x000297b1) bg_ai5_widget_pane_g2

0xa399,	// (0x000297bd) bg_ai5_widget_pane_g3_ParamLimits

0xa399,	// (0x000297bd) bg_ai5_widget_pane_g3

0xa3a5,	// (0x000297c9) bg_ai5_widget_pane_g4_ParamLimits

0xa3a5,	// (0x000297c9) bg_ai5_widget_pane_g4

0xa3b1,	// (0x000297d5) bg_ai5_widget_pane_g5_ParamLimits

0xa3b1,	// (0x000297d5) bg_ai5_widget_pane_g5

0xa3bd,	// (0x000297e1) bg_ai5_widget_pane_g6_ParamLimits

0xa3bd,	// (0x000297e1) bg_ai5_widget_pane_g6

0xa3c9,	// (0x000297ed) bg_ai5_widget_pane_g7_ParamLimits

0xa3c9,	// (0x000297ed) bg_ai5_widget_pane_g7

0xa3d5,	// (0x000297f9) bg_ai5_widget_pane_g8_ParamLimits

0xa3d5,	// (0x000297f9) bg_ai5_widget_pane_g8

0xa3e1,	// (0x00029805) bg_ai5_widget_pane_g9_ParamLimits

0xa3e1,	// (0x00029805) bg_ai5_widget_pane_g9

0x0008,

0xfe37,	// (0x0002f25b) bg_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0002f25b) bg_ai5_widget_pane_g

0xa413,	// (0x00029837) cell_shortcut_ai5_widget_pane_ParamLimits

0xa413,	// (0x00029837) cell_shortcut_ai5_widget_pane

0x4c8d,	// (0x000240b1) bg_cell_shortcut_ai5_widget_pane

0xa424,	// (0x00029848) cell_grid_ai5_widget_pane_g1

0x4c8d,	// (0x000240b1) highlight_cell_shortcut_ai5_widget_pane

0x54e5,	// (0x00024909) ai5_sk_left_pane_g1

0xa42d,	// (0x00029851) ai5_sk_left_pane_g2

0xa435,	// (0x00029859) ai5_sk_left_pane_g3

0xa43d,	// (0x00029861) ai5_sk_left_pane_g4

0x0003,

0xfe4a,	// (0x0002f26e) ai5_sk_left_pane_g

0xa445,	// (0x00029869) ai5_sk_left_pane_t1

0x54dd,	// (0x00024901) ai5_sk_right_pane_g1

0xa453,	// (0x00029877) ai5_sk_right_pane_g2

0xa45b,	// (0x0002987f) ai5_sk_right_pane_g3

0xa463,	// (0x00029887) ai5_sk_right_pane_g4

0x0003,

0xfe53,	// (0x0002f277) ai5_sk_right_pane_g

0xa46b,	// (0x0002988f) ai5_sk_right_pane_t1

0x54dd,	// (0x00024901) ai5_sk_middle_pane_g1

0x54e5,	// (0x00024909) ai5_sk_middle_pane_g2

0x54fd,	// (0x00024921) ai5_sk_middle_pane_g3

0xa45b,	// (0x0002987f) ai5_sk_middle_pane_g4

0xa435,	// (0x00029859) ai5_sk_middle_pane_g5

0xa479,	// (0x0002989d) ai5_sk_middle_pane_g6

0xf3a6,	// (0x0002e7ca) ai5_sk_middle_pane_g7

0x0006,

0xfe5c,	// (0x0002f280) ai5_sk_middle_pane_g

0xd775,	// (0x0002cb99) aid_touch_area_size_lc0_ParamLimits

0xd775,	// (0x0002cb99) aid_touch_area_size_lc0

0x297b,	// (0x00021d9f) cell_hwr_candidate_pane_t1_ParamLimits

0x502d,	// (0x00024451) aid_touch_navi_pane

0xda01,	// (0x0002ce25) status_dt_navi_pane_ParamLimits

0xda01,	// (0x0002ce25) status_dt_navi_pane

0xda19,	// (0x0002ce3d) status_dt_sta_pane_ParamLimits

0xda19,	// (0x0002ce3d) status_dt_sta_pane

0xf3ae,	// (0x0002e7d2) dt_sta_controll_pane

0xf3bb,	// (0x0002e7df) dt_sta_indi_pane

0xf3c8,	// (0x0002e7ec) dt_sta_title_pane

0x39ec,	// (0x00022e10) bg_dt_sta_indi_pane_ParamLimits

0x39ec,	// (0x00022e10) bg_dt_sta_indi_pane

0xf3da,	// (0x0002e7fe) dt_sta_battery_pane

0xf3e2,	// (0x0002e806) dt_sta_indi_pane_g1

0xa4cb,	// (0x000298ef) dt_sta_indi_pane_g2

0xa4d4,	// (0x000298f8) dt_sta_indi_pane_g3

0x0002,

0xfe6b,	// (0x0002f28f) dt_sta_indi_pane_g

0xa4dd,	// (0x00029901) dt_sta_signal_pane

0x3ff8,	// (0x0002341c) bg_dt_sta_title_pane_ParamLimits

0x3ff8,	// (0x0002341c) bg_dt_sta_title_pane

0xa4e6,	// (0x0002990a) dt_sta_title_pane_g1

0xa4ee,	// (0x00029912) dt_sta_title_pane_t1_ParamLimits

0xa4ee,	// (0x00029912) dt_sta_title_pane_t1

0x366f,	// (0x00022a93) bg_dt_sta_control_pane

0xf3eb,	// (0x0002e80f) dt_sta_controll_pane_g1

0xa50c,	// (0x00029930) bg_dt_sta_title_pane_g1

0xa515,	// (0x00029939) bg_dt_sta_title_pane_g2

0xa51e,	// (0x00029942) bg_dt_sta_title_pane_g3

0x0002,

0xfe72,	// (0x0002f296) bg_dt_sta_title_pane_g

0x7ae1,	// (0x00026f05) bg_dt_sta_indi_pane_g1

0xa527,	// (0x0002994b) dt_sta_signal_pane_g1

0xa52f,	// (0x00029953) dt_sta_signal_pane_g2

0x0001,

0xfe79,	// (0x0002f29d) dt_sta_signal_pane_g

0xa537,	// (0x0002995b) dt_sta_battery_pane_g1

0xa540,	// (0x00029964) dt_sta_battery_pane_t1

0x7ae1,	// (0x00026f05) bg_dt_sta_control_pane_g1

0x478c,	// (0x00023bb0) fep_china_uni_eep_pane

0x4794,	// (0x00023bb8) fep_china_uni_entry_pane_ParamLimits

0x47a4,	// (0x00023bc8) popup_fep_china_uni_window_g1_ParamLimits

0x47b4,	// (0x00023bd8) popup_fep_china_uni_window_g2_ParamLimits

0x47b4,	// (0x00023bd8) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002eb41) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002eb41) popup_fep_china_uni_window_g

0xa54f,	// (0x00029973) fep_china_uni_eep_pane_g1

0xa557,	// (0x0002997b) fep_china_uni_eep_pane_t1

0x9fa6,	// (0x000293ca) aid_touch_area_size_smil_player

0x517d,	// (0x000245a1) lc0_clock_pane

0x5364,	// (0x00024788) status_pane_g5_ParamLimits

0x5364,	// (0x00024788) status_pane_g5

0xc4d1,	// (0x0002b8f5) popup_keymap_window

0x5322,	// (0x00024746) status_icon_pane

0xa1a1,	// (0x000295c5) cell_ai5_widget_pane_g3_ParamLimits

0xa1bb,	// (0x000295df) cell_ai5_widget_pane_g4_ParamLimits

0xa1cb,	// (0x000295ef) cell_ai5_widget_pane_g5_ParamLimits

0xa1f3,	// (0x00029617) cell_ai5_widget_pane_g8_ParamLimits

0xa1f3,	// (0x00029617) cell_ai5_widget_pane_g8

0xa207,	// (0x0002962b) cell_ai5_widget_pane_g9_ParamLimits

0xa207,	// (0x0002962b) cell_ai5_widget_pane_g9

0xa21b,	// (0x0002963f) cell_ai5_widget_pane_g10_ParamLimits

0xa21b,	// (0x0002963f) cell_ai5_widget_pane_g10

0xa566,	// (0x0002998a) status_icon_pane_g1

0x366f,	// (0x00022a93) bg_popup_sub_pane_cp13

0xa56e,	// (0x00029992) popup_keymap_window_t1

0xd703,	// (0x0002cb27) control_pane_g6_ParamLimits

0xd703,	// (0x0002cb27) control_pane_g6

0xd710,	// (0x0002cb34) control_pane_g7_ParamLimits

0xd710,	// (0x0002cb34) control_pane_g7

0xd71d,	// (0x0002cb41) control_pane_g8_ParamLimits

0xd71d,	// (0x0002cb41) control_pane_g8

0xf3ae,	// (0x0002e7d2) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x0002e7df) dt_sta_indi_pane_ParamLimits

0xf3c8,	// (0x0002e7ec) dt_sta_title_pane_ParamLimits

0x3f30,	// (0x00023354) aid_size_touch_scroll_bar_cale

0x1528,	// (0x0002094c) popup_discreet_window_ParamLimits

0x1528,	// (0x0002094c) popup_discreet_window

0xc0c1,	// (0x0002b4e5) popup_sk_window

0x5b68,	// (0x00024f8c) bg_popup_sub_pane_cp28_ParamLimits

0x5b68,	// (0x00024f8c) bg_popup_sub_pane_cp28

0xa57c,	// (0x000299a0) popup_discreet_window_g1_ParamLimits

0xa57c,	// (0x000299a0) popup_discreet_window_g1

0xa59c,	// (0x000299c0) popup_discreet_window_t1_ParamLimits

0xa59c,	// (0x000299c0) popup_discreet_window_t1

0xa5ba,	// (0x000299de) popup_discreet_window_t2_ParamLimits

0xa5ba,	// (0x000299de) popup_discreet_window_t2

0x0002,

0xfe7e,	// (0x0002f2a2) popup_discreet_window_t_ParamLimits

0xfe7e,	// (0x0002f2a2) popup_discreet_window_t

0x32d3,	// (0x000226f7) popup_sk_window_g1

0x32dd,	// (0x00022701) popup_sk_window_g2

0x0001,

0xfe85,	// (0x0002f2a9) popup_sk_window_g

0x32e5,	// (0x00022709) popup_sk_window_t1

0x32f3,	// (0x00022717) popup_sk_window_t1_copy1

0xa18d,	// (0x000295b1) cell_ai5_widget_pane_g2_ParamLimits

0xa2ff,	// (0x00029723) cell_ai5_widget_pane_t9_ParamLimits

0xa2ff,	// (0x00029723) cell_ai5_widget_pane_t9

0x366f,	// (0x00022a93) main_fep_fshwr2_pane

0xcec3,	// (0x0002c2e7) aid_fshwr2_btn_pane

0xced7,	// (0x0002c2fb) aid_fshwr2_syb_pane

0xceeb,	// (0x0002c30f) aid_fshwr2_txt_pane

0xcefb,	// (0x0002c31f) fshwr2_func_candi_pane

0xcf1b,	// (0x0002c33f) fshwr2_hwr_syb_pane

0xcf3d,	// (0x0002c361) fshwr2_icf_pane

0x366f,	// (0x00022a93) fshwr2_icf_bg_pane

0x338d,	// (0x000227b1) fshwr2_icf_pane_t1_ParamLimits

0x338d,	// (0x000227b1) fshwr2_icf_pane_t1

0x467a,	// (0x00023a9e) fshwr2_func_candi_pane_g1

0xf3f4,	// (0x0002e818) fshwr2_func_candi_row_pane_ParamLimits

0xf3f4,	// (0x0002e818) fshwr2_func_candi_row_pane

0xcf6d,	// (0x0002c391) cell_fshwr2_syb_pane_ParamLimits

0xcf6d,	// (0x0002c391) cell_fshwr2_syb_pane

0x9f76,	// (0x0002939a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9f76,	// (0x0002939a) fshwr2_hwr_syb_pane_g1

0x366f,	// (0x00022a93) bg_popup_call_pane_cp01

0xcf93,	// (0x0002c3b7) fshwr2_func_candi_cell_pane_ParamLimits

0xcf93,	// (0x0002c3b7) fshwr2_func_candi_cell_pane

0xf417,	// (0x0002e83b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf417,	// (0x0002e83b) fshwr2_func_candi_cell_bg_pane

0xcfde,	// (0x0002c402) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcfde,	// (0x0002c402) fshwr2_func_candi_cell_pane_g1

0xd015,	// (0x0002c439) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd015,	// (0x0002c439) fshwr2_func_candi_cell_pane_t1

0x366f,	// (0x00022a93) bg_button_pane_cp08

0xa63d,	// (0x00029a61) cell_fshwr2_syb_bg_pane

0xd030,	// (0x0002c454) cell_fshwr2_syb_bg_pane_g1

0xd043,	// (0x0002c467) cell_fshwr2_syb_bg_pane_t1

0x3ff8,	// (0x0002341c) main_tmo_pane

0xdd15,	// (0x0002d139) uni_indicator_pane_g1_ParamLimits

0xdd2a,	// (0x0002d14e) uni_indicator_pane_g2_ParamLimits

0xdd40,	// (0x0002d164) uni_indicator_pane_g3_ParamLimits

0x66ab,	// (0x00025acf) uni_indicator_pane_g4_ParamLimits

0x66ab,	// (0x00025acf) uni_indicator_pane_g4

0x66bf,	// (0x00025ae3) uni_indicator_pane_g5_ParamLimits

0x66bf,	// (0x00025ae3) uni_indicator_pane_g5

0x66bf,	// (0x00025ae3) uni_indicator_pane_g6_ParamLimits

0x66bf,	// (0x00025ae3) uni_indicator_pane_g6

0xf915,	// (0x0002ed39) uni_indicator_pane_g_ParamLimits

0xe79f,	// (0x0002dbc3) popup_tmo_note_window_ParamLimits

0xe79f,	// (0x0002dbc3) popup_tmo_note_window

0x3ff8,	// (0x0002341c) fshwr2_bg_pane

0xd006,	// (0x0002c42a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd006,	// (0x0002c42a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8a,	// (0x0002f2ae) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8a,	// (0x0002f2ae) fshwr2_func_candi_cell_pane_g

0x7ae1,	// (0x00026f05) bg_popup_window_pane_cp01

0x3476,	// (0x0002289a) bg_popup_window_pane_g1_cp01

0xa649,	// (0x00029a6d) bg_popup_window_pane_cp22_ParamLimits

0xa649,	// (0x00029a6d) bg_popup_window_pane_cp22

0xa657,	// (0x00029a7b) listscroll_tmo_link_pane_ParamLimits

0xa657,	// (0x00029a7b) listscroll_tmo_link_pane

0xa697,	// (0x00029abb) popup_tmo_note_window_g1_ParamLimits

0xa697,	// (0x00029abb) popup_tmo_note_window_g1

0xa6a4,	// (0x00029ac8) tmo_note_info_pane_ParamLimits

0xa6a4,	// (0x00029ac8) tmo_note_info_pane

0xf423,	// (0x0002e847) list_tmo_note_info_pane_g1_ParamLimits

0xf423,	// (0x0002e847) list_tmo_note_info_pane_g1

0xa6d5,	// (0x00029af9) list_tmo_note_info_pane_g2_ParamLimits

0xa6d5,	// (0x00029af9) list_tmo_note_info_pane_g2

0x0001,

0xfe8f,	// (0x0002f2b3) list_tmo_note_info_pane_g_ParamLimits

0xfe8f,	// (0x0002f2b3) list_tmo_note_info_pane_g

0xa6f1,	// (0x00029b15) list_tmo_note_info_text_pane_ParamLimits

0xa6f1,	// (0x00029b15) list_tmo_note_info_text_pane

0xa772,	// (0x00029b96) list_tmo_link_pane

0xa77f,	// (0x00029ba3) scroll_pane_cp20

0xa78c,	// (0x00029bb0) list_single_tmo_link_pane_ParamLimits

0xa78c,	// (0x00029bb0) list_single_tmo_link_pane

0xa79c,	// (0x00029bc0) list_single_tmo_link_pane_t1

0xa7aa,	// (0x00029bce) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7aa,	// (0x00029bce) list_tmo_note_info_text_pane_t1

0xd3cb,	// (0x0002c7ef) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd3cb,	// (0x0002c7ef) aid_size_touch_scroll_bar_cp01

0xbba1,	// (0x0002afc5) aid_size_touch_slider_marker

0xc0b1,	// (0x0002b4d5) popup_settings_window_ParamLimits

0xc0b1,	// (0x0002b4d5) popup_settings_window

0x090b,	// (0x0001fd2f) popup_candi_list_indi_window

0x502d,	// (0x00024451) aid_touch_navi_pane_ParamLimits

0x2ae6,	// (0x00021f0a) rs_clock_indi_pane

0x2aef,	// (0x00021f13) sctrl_sk_bottom_pane_ParamLimits

0x2b00,	// (0x00021f24) sctrl_sk_top_pane_ParamLimits

0x2be7,	// (0x0002200b) popup_fep_tooltip_window

0xa0ff,	// (0x00029523) aid_size_cell_widget_grid_ParamLimits

0xa178,	// (0x0002959c) cell_ai5_widget_pane_g1_ParamLimits

0xa178,	// (0x0002959c) cell_ai5_widget_pane_g1

0xa1db,	// (0x000295ff) cell_ai5_widget_pane_g6_ParamLimits

0xa1e7,	// (0x0002960b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe0d,	// (0x0002f231) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0002f231) cell_ai5_widget_pane_g

0xa32e,	// (0x00029752) cell_ai5_widget_pane_t10_ParamLimits

0xa32e,	// (0x00029752) cell_ai5_widget_pane_t10

0xa34c,	// (0x00029770) grid_ai5_widget_pane_ParamLimits

0xa3ed,	// (0x00029811) cell_contacts_ai5_widget_pane_ParamLimits

0xa3ed,	// (0x00029811) cell_contacts_ai5_widget_pane

0xa5cf,	// (0x000299f3) popup_discreet_window_t3_ParamLimits

0xa5cf,	// (0x000299f3) popup_discreet_window_t3

0xcf59,	// (0x0002c37d) popup_fshwr2_char_preview_window_ParamLimits

0xcf59,	// (0x0002c37d) popup_fshwr2_char_preview_window

0xf43a,	// (0x0002e85e) tmo_note_info_pane_t1

0xf44f,	// (0x0002e873) tmo_note_info_pane_t2

0xf466,	// (0x0002e88a) tmo_note_info_pane_t3

0xa74e,	// (0x00029b72) tmo_note_info_pane_t4

0xa760,	// (0x00029b84) tmo_note_info_pane_t5

0x0004,

0xfe94,	// (0x0002f2b8) tmo_note_info_pane_t

0xa772,	// (0x00029b96) list_tmo_link_pane_ParamLimits

0xa77f,	// (0x00029ba3) scroll_pane_cp20_ParamLimits

0x366f,	// (0x00022a93) bg_popup_fep_char_preview_window_cp01

0xa7c3,	// (0x00029be7) popup_fshwr2_char_preview_window_t1

0xa7d1,	// (0x00029bf5) popup_candi_list_indi_window_g1

0xa7da,	// (0x00029bfe) bg_cell_contacts_ai5_widget_pane

0xa7e6,	// (0x00029c0a) cell_contacts_ai5_widget_pane_g1

0x81c1,	// (0x000275e5) cell_contacts_ai5_widget_pane_g2

0xa7fb,	// (0x00029c1f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9f,	// (0x0002f2c3) cell_contacts_ai5_widget_pane_g

0xa807,	// (0x00029c2b) cell_contacts_ai5_widget_pane_t1

0x3ff8,	// (0x0002341c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa87e,	// (0x00029ca2) settings_container_pane

0x4c8d,	// (0x000240b1) listscroll_set_pane_copy1

0x71e5,	// (0x00026609) scroll_pane_cp121_copy1

0x5901,	// (0x00024d25) set_content_pane_copy1

0xa88a,	// (0x00029cae) aid_height_set_list_copy1_ParamLimits

0xa88a,	// (0x00029cae) aid_height_set_list_copy1

0x68b7,	// (0x00025cdb) aid_size_parent_copy1_ParamLimits

0x68b7,	// (0x00025cdb) aid_size_parent_copy1

0xa896,	// (0x00029cba) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa896,	// (0x00029cba) button_value_adjust_pane_cp6_copy1

0x4fb1,	// (0x000243d5) list_highlight_pane_cp2_copy1_ParamLimits

0x4fb1,	// (0x000243d5) list_highlight_pane_cp2_copy1

0xa8aa,	// (0x00029cce) list_set_pane_copy1_ParamLimits

0xa8aa,	// (0x00029cce) list_set_pane_copy1

0xa819,	// (0x00029c3d) main_pane_set_t1_copy1_ParamLimits

0xa819,	// (0x00029c3d) main_pane_set_t1_copy1

0xa853,	// (0x00029c77) main_pane_set_t2_copy1_ParamLimits

0xa853,	// (0x00029c77) main_pane_set_t2_copy1

0xa957,	// (0x00029d7b) main_pane_set_t3_copy1

0xa965,	// (0x00029d89) main_pane_set_t4_copy1

0xa872,	// (0x00029c96) set_content_pane_g1_copy1_ParamLimits

0xa872,	// (0x00029c96) set_content_pane_g1_copy1

0xa973,	// (0x00029d97) setting_code_pane_copy1

0xa97b,	// (0x00029d9f) setting_slider_graphic_pane_copy1

0xa97b,	// (0x00029d9f) setting_slider_pane_copy1

0xa97b,	// (0x00029d9f) setting_text_pane_copy1

0xa97b,	// (0x00029d9f) setting_volume_pane_copy1

0xa973,	// (0x00029d97) settings_code_pane_cp2_copy1

0xa983,	// (0x00029da7) settings_code_pane_cp_copy1_ParamLimits

0xa983,	// (0x00029da7) settings_code_pane_cp_copy1

0x347f,	// (0x000228a3) volume_set_pane_copy1

0xa997,	// (0x00029dbb) volume_set_pane_g10_copy1

0xa99f,	// (0x00029dc3) volume_set_pane_g1_copy1

0xa9a7,	// (0x00029dcb) volume_set_pane_g2_copy1

0xa9af,	// (0x00029dd3) volume_set_pane_g3_copy1

0xa9b7,	// (0x00029ddb) volume_set_pane_g4_copy1

0xa9bf,	// (0x00029de3) volume_set_pane_g5_copy1

0xa9c7,	// (0x00029deb) volume_set_pane_g6_copy1

0xa9cf,	// (0x00029df3) volume_set_pane_g7_copy1

0xa9d7,	// (0x00029dfb) volume_set_pane_g8_copy1

0xa9df,	// (0x00029e03) volume_set_pane_g9_copy1

0x3763,	// (0x00022b87) bg_set_opt_pane_cp_copy1_ParamLimits

0x3763,	// (0x00022b87) bg_set_opt_pane_cp_copy1

0x3487,	// (0x000228ab) setting_slider_pane_t1_copy1_ParamLimits

0x3487,	// (0x000228ab) setting_slider_pane_t1_copy1

0x34a5,	// (0x000228c9) setting_slider_pane_t2_copy1_ParamLimits

0x34a5,	// (0x000228c9) setting_slider_pane_t2_copy1

0x34bf,	// (0x000228e3) setting_slider_pane_t3_copy1_ParamLimits

0x34bf,	// (0x000228e3) setting_slider_pane_t3_copy1

0x34d7,	// (0x000228fb) slider_set_pane_copy1_ParamLimits

0x34d7,	// (0x000228fb) slider_set_pane_copy1

0x4050,	// (0x00023474) set_opt_bg_pane_g1_copy2

0x4058,	// (0x0002347c) set_opt_bg_pane_g2_copy2

0xa9e7,	// (0x00029e0b) set_opt_bg_pane_g3_copy2

0x4068,	// (0x0002348c) set_opt_bg_pane_g4_copy2

0x4070,	// (0x00023494) set_opt_bg_pane_g5_copy2

0x4078,	// (0x0002349c) set_opt_bg_pane_g6_copy2

0xa9f1,	// (0x00029e15) set_opt_bg_pane_g7_copy2

0xa9f9,	// (0x00029e1d) set_opt_bg_pane_g8_copy2

0xaa03,	// (0x00029e27) set_opt_bg_pane_g9_copy2

0x34ed,	// (0x00022911) aid_size_touch_slider_mark_copy1_ParamLimits

0x34ed,	// (0x00022911) aid_size_touch_slider_mark_copy1

0xaa0d,	// (0x00029e31) slider_set_pane_g1_copy1

0x3501,	// (0x00022925) slider_set_pane_g2_copy1

0x25c9,	// (0x000219ed) slider_set_pane_g3_copy1_ParamLimits

0x25c9,	// (0x000219ed) slider_set_pane_g3_copy1

0x25dd,	// (0x00021a01) slider_set_pane_g4_copy1_ParamLimits

0x25dd,	// (0x00021a01) slider_set_pane_g4_copy1

0x25f5,	// (0x00021a19) slider_set_pane_g5_copy1_ParamLimits

0x25f5,	// (0x00021a19) slider_set_pane_g5_copy1

0x25c9,	// (0x000219ed) slider_set_pane_g6_copy1_ParamLimits

0x25c9,	// (0x000219ed) slider_set_pane_g6_copy1

0x3509,	// (0x0002292d) slider_set_pane_g7_copy1_ParamLimits

0x3509,	// (0x0002292d) slider_set_pane_g7_copy1

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp2_copy1

0xaa16,	// (0x00029e3a) setting_slider_graphic_pane_g1_copy1

0xaa1f,	// (0x00029e43) setting_slider_graphic_pane_t1_copy1

0xaa2f,	// (0x00029e53) setting_slider_graphic_pane_t2_copy1

0xaa3f,	// (0x00029e63) slider_set_pane_cp_copy1

0xaa4f,	// (0x00029e73) input_focus_pane_cp1_copy1

0xaa58,	// (0x00029e7c) list_set_text_pane_copy1

0xaa60,	// (0x00029e84) setting_text_pane_g1_copy1

0x0142,	// (0x0001f566) set_text_pane_t1_copy1

0xaa4f,	// (0x00029e73) input_focus_pane_cp2_copy1

0xaa60,	// (0x00029e84) setting_code_pane_g1_copy1

0xaa69,	// (0x00029e8d) setting_code_pane_t1_copy1

0xaa77,	// (0x00029e9b) list_set_graphic_pane_copy1

0x3683,	// (0x00022aa7) bg_set_opt_pane_cp4_copy1

0x4988,	// (0x00023dac) list_set_graphic_pane_g1_copy1_ParamLimits

0x4988,	// (0x00023dac) list_set_graphic_pane_g1_copy1

0xaa8a,	// (0x00029eae) list_set_graphic_pane_g2_copy1

0x49a0,	// (0x00023dc4) list_set_graphic_pane_t1_copy1_ParamLimits

0x49a0,	// (0x00023dc4) list_set_graphic_pane_t1_copy1

0x7ae1,	// (0x00026f05) rs_clock_indi_pane_g1

0xaa92,	// (0x00029eb6) rs_clock_indi_pane_t1

0xaaa0,	// (0x00029ec4) rs_indi_pane

0xaaa8,	// (0x00029ecc) rs_indi_pane_g1

0xaab1,	// (0x00029ed5) rs_indi_pane_g2

0xaaba,	// (0x00029ede) rs_indi_pane_g3

0x0002,

0xfea6,	// (0x0002f2ca) rs_indi_pane_g

0x4c8d,	// (0x000240b1) bg_popup_preview_window_pane_cp03

0xaac3,	// (0x00029ee7) popup_fep_tooltip_window_t1

0x875d,	// (0x00027b81) popup_note2_window_g2_ParamLimits

0x875d,	// (0x00027b81) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002f068) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002f068) popup_note2_window_g

0x8c58,	// (0x0002807c) bg_popup_sub_pane_cp11_ParamLimits

0x8c65,	// (0x00028089) cell_ai3_links_pane_g1_ParamLimits

0x8c7c,	// (0x000280a0) cell_ai3_links_pane_t1

0x0142,	// (0x0001f566) set_text_pane_t1_copy1_ParamLimits

0x4b9e,	// (0x00023fc2) cell_graphic_popup_pane_cp2_ParamLimits

0x4b9e,	// (0x00023fc2) cell_graphic_popup_pane_cp2

0xaad1,	// (0x00029ef5) cell_graphic_popup_pane_g1_cp2

0x3d43,	// (0x00023167) cell_graphic_popup_pane_g2_cp2

0xaad9,	// (0x00029efd) cell_graphic_popup_pane_g3_cp2

0xaae1,	// (0x00029f05) cell_graphic_popup_pane_t2_cp2

0x3d54,	// (0x00023178) grid_highlight_pane_cp3_cp2

0x4395,	// (0x000237b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ff8,	// (0x0002341c) main_tmo_pane_ParamLimits

0xe793,	// (0x0002dbb7) popup_tmo_big_image_note_window

0xa167,	// (0x0002958b) cell_ai5_widget_list_pane

0xa16f,	// (0x00029593) cell_ai5_widget_lrg_icon_pane

0xf43a,	// (0x0002e85e) tmo_note_info_pane_t1_ParamLimits

0xf44f,	// (0x0002e873) tmo_note_info_pane_t2_ParamLimits

0xf466,	// (0x0002e88a) tmo_note_info_pane_t3_ParamLimits

0xa74e,	// (0x00029b72) tmo_note_info_pane_t4_ParamLimits

0xa760,	// (0x00029b84) tmo_note_info_pane_t5_ParamLimits

0xfe94,	// (0x0002f2b8) tmo_note_info_pane_t_ParamLimits

0xa87e,	// (0x00029ca2) settings_container_pane_ParamLimits

0xaa47,	// (0x00029e6b) indicator_popup_pane_cp5

0xaa47,	// (0x00029e6b) indicator_popup_pane_cp6

0xaa77,	// (0x00029e9b) list_set_graphic_pane_copy1_ParamLimits

0x366f,	// (0x00022a93) bg_popup_window_pane_cp23

0xaaef,	// (0x00029f13) popup_tmo_big_image_note_window_g1

0xaaf9,	// (0x00029f1d) popup_tmo_big_image_note_window_t1

0xab09,	// (0x00029f2d) popup_tmo_big_image_note_window_t2

0xab19,	// (0x00029f3d) popup_tmo_big_image_note_window_t3

0x0002,

0xfead,	// (0x0002f2d1) popup_tmo_big_image_note_window_t

0x7ae1,	// (0x00026f05) cell_ai5_widget_lrg_icon_pane_g1

0xab29,	// (0x00029f4d) cell_ai5_widget_lrg_icon_pane_t1

0xab37,	// (0x00029f5b) cell_ai5_widget_list_row_pane_ParamLimits

0xab37,	// (0x00029f5b) cell_ai5_widget_list_row_pane

0xab4e,	// (0x00029f72) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab4e,	// (0x00029f72) cell_ai5_widget_list_row_pane_g1

0xab5b,	// (0x00029f7f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab5b,	// (0x00029f7f) cell_ai5_widget_list_row_pane_t1

0xab8c,	// (0x00029fb0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab8c,	// (0x00029fb0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb4,	// (0x0002f2d8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb4,	// (0x0002f2d8) cell_ai5_widget_list_row_pane_t

0x366f,	// (0x00022a93) main_fep_vtchi_ss_pane

0xabd4,	// (0x00029ff8) popup_fep_char_pre_window

0xabdc,	// (0x0002a000) popup_fep_ituss_window

0xf48a,	// (0x0002e8ae) popup_fep_vkbss_window

0xf497,	// (0x0002e8bb) grid_vkbss_keypad_pane_ParamLimits

0xf497,	// (0x0002e8bb) grid_vkbss_keypad_pane

0xac42,	// (0x0002a066) ituss_keypad_pane

0x352b,	// (0x0002294f) aid_vkbss_key_offset_ParamLimits

0x352b,	// (0x0002294f) aid_vkbss_key_offset

0xd059,	// (0x0002c47d) cell_vkbss_key_pane_ParamLimits

0xd059,	// (0x0002c47d) cell_vkbss_key_pane

0xac51,	// (0x0002a075) bg_cell_vkbss_key_g1_ParamLimits

0xac51,	// (0x0002a075) bg_cell_vkbss_key_g1

0xf4a7,	// (0x0002e8cb) cell_vkbss_key_3p_pane_ParamLimits

0xf4a7,	// (0x0002e8cb) cell_vkbss_key_3p_pane

0xf4c1,	// (0x0002e8e5) cell_vkbss_key_g1_ParamLimits

0xf4c1,	// (0x0002e8e5) cell_vkbss_key_g1

0xf4db,	// (0x0002e8ff) cell_vkbss_key_t1_ParamLimits

0xf4db,	// (0x0002e8ff) cell_vkbss_key_t1

0x354d,	// (0x00022971) cell_ituss_key_pane_ParamLimits

0x354d,	// (0x00022971) cell_ituss_key_pane

0xacb0,	// (0x0002a0d4) bg_cell_ituss_key_g1_ParamLimits

0xacb0,	// (0x0002a0d4) bg_cell_ituss_key_g1

0xacbc,	// (0x0002a0e0) cell_ituss_key_pane_g1_ParamLimits

0xacbc,	// (0x0002a0e0) cell_ituss_key_pane_g1

0x355e,	// (0x00022982) cell_ituss_key_pane_g2_ParamLimits

0x355e,	// (0x00022982) cell_ituss_key_pane_g2

0x0002,

0xfebb,	// (0x0002f2df) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x0002f2df) cell_ituss_key_pane_g

0x358a,	// (0x000229ae) cell_ituss_key_t1_ParamLimits

0x358a,	// (0x000229ae) cell_ituss_key_t1

0x35c4,	// (0x000229e8) cell_ituss_key_t2_ParamLimits

0x35c4,	// (0x000229e8) cell_ituss_key_t2

0x35f5,	// (0x00022a19) cell_ituss_key_t3_ParamLimits

0x35f5,	// (0x00022a19) cell_ituss_key_t3

0x35c4,	// (0x000229e8) cell_ituss_key_t4_ParamLimits

0x35c4,	// (0x000229e8) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x0002f2e6) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x0002f2e6) cell_ituss_key_t

0xace8,	// (0x0002a10c) cell_vkbss_key_3p_pane_g1

0xacf0,	// (0x0002a114) cell_vkbss_key_3p_pane_g2

0xacf8,	// (0x0002a11c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x0002f2f1) cell_vkbss_key_3p_pane_g

0x4c8d,	// (0x000240b1) bg_popup_fep_char_preview_window_cp02

0xad00,	// (0x0002a124) popup_fep_char_pre_window_t1

0xf37e,	// (0x0002e7a2) main_ai5_sk_pane

0xa7da,	// (0x00029bfe) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7e6,	// (0x00029c0a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x81c1,	// (0x000275e5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7fb,	// (0x00029c1f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9f,	// (0x0002f2c3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa807,	// (0x00029c2b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ff8,	// (0x0002341c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf506,	// (0x0002e92a) main_ai5_sk_pane_g1

0x59a1,	// (0x00024dc5) popup_query_code_window_g1

0xf47b,	// (0x0002e89f) popup_fep_vkb_icf_pane

0xac1c,	// (0x0002a040) popup_fep_vtchi_icf_pane

0xad17,	// (0x0002a13b) bg_icf_pane

0xad23,	// (0x0002a147) list_vkb_icf_pane

0xad32,	// (0x0002a156) bg_icf_pane_cp01

0xad45,	// (0x0002a169) vtchi_icf_list_pane

0xf50f,	// (0x0002e933) list_vkb_icf_pane_t1_ParamLimits

0xf50f,	// (0x0002e933) list_vkb_icf_pane_t1

0xad76,	// (0x0002a19a) vtchi_icf_list_pane_t1_ParamLimits

0xad76,	// (0x0002a19a) vtchi_icf_list_pane_t1

0xabdc,	// (0x0002a000) popup_fep_ituss_window_ParamLimits

0xac1c,	// (0x0002a040) popup_fep_vtchi_icf_pane_ParamLimits

0xac42,	// (0x0002a066) ituss_keypad_pane_ParamLimits

0x351f,	// (0x00022943) ituss_sks_pane

0xad17,	// (0x0002a13b) bg_icf_pane_ParamLimits

0xabb4,	// (0x00029fd8) icf_edit_indi_pane_ParamLimits

0xabb4,	// (0x00029fd8) icf_edit_indi_pane

0xad23,	// (0x0002a147) list_vkb_icf_pane_ParamLimits

0xad32,	// (0x0002a156) bg_icf_pane_cp01_ParamLimits

0xabc7,	// (0x00029feb) icf_edit_indi_pane_cp01_ParamLimits

0xabc7,	// (0x00029feb) icf_edit_indi_pane_cp01

0xad4d,	// (0x0002a171) vtchi_query_pane

0x9f76,	// (0x0002939a) icf_edit_indi_pane_g1_ParamLimits

0x9f76,	// (0x0002939a) icf_edit_indi_pane_g1

0xf525,	// (0x0002e949) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e949) icf_edit_indi_pane_g2

0x0001,

0xfee5,	// (0x0002f309) icf_edit_indi_pane_g_ParamLimits

0xfee5,	// (0x0002f309) icf_edit_indi_pane_g

0xf537,	// (0x0002e95b) icf_edit_indi_pane_t1

0xad90,	// (0x0002a1b4) bg_input_focus_pane_cp042

0x3f27,	// (0x0002334b) vtchi_button_pane

0xad99,	// (0x0002a1bd) vtchi_query_pane_t1

0xada7,	// (0x0002a1cb) vtchi_query_pane_t2

0xadb5,	// (0x0002a1d9) vtchi_query_pane_t3

0x0002,

0xfed4,	// (0x0002f2f8) vtchi_query_pane_t

0x366f,	// (0x00022a93) bg_button_pane_cp13

0xadc3,	// (0x0002a1e7) vtchi_button_pane_g1

0x3638,	// (0x00022a5c) ituss_sks_pane_g1

0x3643,	// (0x00022a67) ituss_sks_pane_g2

0x0001,

0xfedb,	// (0x0002f2ff) ituss_sks_pane_g

0xadcb,	// (0x0002a1ef) ituss_sks_pane_t1

0xadd9,	// (0x0002a1fd) ituss_sks_pane_t2

0x0001,

0xfee0,	// (0x0002f304) ituss_sks_pane_t

0x7560,	// (0x00026984) indicator_nsta_pane_cp_g1

0x7568,	// (0x0002698c) indicator_nsta_pane_cp_g2

0x7570,	// (0x00026994) indicator_nsta_pane_cp_g3

0x7560,	// (0x00026984) indicator_nsta_pane_cp_g4

0x7568,	// (0x0002698c) indicator_nsta_pane_cp_g5

0x7570,	// (0x00026994) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002eeb2) indicator_nsta_pane_cp_g

0xf196,	// (0x0002e5ba) cell_graphic2_pane_t2_ParamLimits

0xf196,	// (0x0002e5ba) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0002f1bf) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0002f1bf) cell_graphic2_pane_t

0xf1ca,	// (0x0002e5ee) cell_graphic2_control_pane_t1

0xd576,	// (0x0002c99a) signal_pane_g3_ParamLimits

0xd576,	// (0x0002c99a) signal_pane_g3

0xd58a,	// (0x0002c9ae) signal_pane_g4_ParamLimits

0xd58a,	// (0x0002c9ae) signal_pane_g4

0xab9e,	// (0x00029fc2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab9e,	// (0x00029fc2) cell_ai5_widget_list_row_pane_t3

0xacd6,	// (0x0002a0fa) cell_ituss_key_pane_t1_ParamLimits

0xacd6,	// (0x0002a0fa) cell_ituss_key_pane_t1

0x55da,	// (0x000249fe) form_field_data_wide_pane_vc_t2_ParamLimits

0x55da,	// (0x000249fe) form_field_data_wide_pane_vc_t2

0x55ee,	// (0x00024a12) form_field_data_wide_pane_vc_t3_ParamLimits

0x55ee,	// (0x00024a12) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002ec21) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002ec21) form_field_data_wide_pane_vc_t

0x7227,	// (0x0002664b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7227,	// (0x0002664b) form_field_slider_wide_pane_vc_t3

0x7305,	// (0x00026729) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7305,	// (0x00026729) form_field_popup_wide_pane_vc_t2

0x731c,	// (0x00026740) form_field_popup_wide_pane_vc_t3_ParamLimits

0x731c,	// (0x00026740) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002eea1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002eea1) form_field_popup_wide_pane_vc_t

0xcec3,	// (0x0002c2e7) aid_fshwr2_btn_pane_ParamLimits

0xced7,	// (0x0002c2fb) aid_fshwr2_syb_pane_ParamLimits

0xceeb,	// (0x0002c30f) aid_fshwr2_txt_pane_ParamLimits

0x3ff8,	// (0x0002341c) fshwr2_bg_pane_ParamLimits

0xcefb,	// (0x0002c31f) fshwr2_func_candi_pane_ParamLimits

0xcf1b,	// (0x0002c33f) fshwr2_hwr_syb_pane_ParamLimits

0xcf3d,	// (0x0002c361) fshwr2_icf_pane_ParamLimits

0x0e7a,	// (0x0002029e) list_double_graphic_pane_vc_g4_ParamLimits

0x0e7a,	// (0x0002029e) list_double_graphic_pane_vc_g4

0x357e,	// (0x000229a2) cell_ituss_key_pane_g3_ParamLimits

0x357e,	// (0x000229a2) cell_ituss_key_pane_g3

0x3626,	// (0x00022a4a) cell_ituss_key_t5_ParamLimits

0x3626,	// (0x00022a4a) cell_ituss_key_t5

0xf48a,	// (0x0002e8ae) popup_fep_vkbss_window_ParamLimits

0xa0f6,	// (0x0002951a) aid_cell_ai5_quarter

0xf537,	// (0x0002e95b) icf_edit_indi_pane_t1_ParamLimits

0x3a94,	// (0x00022eb8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3a94,	// (0x00022eb8) aid_tch_indicator_popup_pane_cp2

0x3aa7,	// (0x00022ecb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3aa7,	// (0x00022ecb) aid_tch_query_popup_data_pane_cp2

0x5949,	// (0x00024d6d) aid_tch_query_popup_pane_ParamLimits

0x5949,	// (0x00024d6d) aid_tch_query_popup_pane

0x5949,	// (0x00024d6d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5949,	// (0x00024d6d) aid_tch_query_popup_data_pane_cp1

0xa63d,	// (0x00029a61) cell_fshwr2_syb_bg_pane_ParamLimits

0xd030,	// (0x0002c454) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd043,	// (0x0002c467) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf47b,	// (0x0002e89f) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
