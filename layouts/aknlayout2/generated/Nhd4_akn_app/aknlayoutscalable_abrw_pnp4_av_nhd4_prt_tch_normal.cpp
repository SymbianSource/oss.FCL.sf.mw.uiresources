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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000caf0 };

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
0x7984,	// (0x00014474) Screen

0x7990,	// (0x00014480) application_window_ParamLimits

0x7990,	// (0x00014480) application_window

0x3bc6,	// (0x000106b6) screen_g1

0x548b,	// (0x00011f7b) area_bottom_pane_ParamLimits

0x548b,	// (0x00011f7b) area_bottom_pane

0x554b,	// (0x0001203b) area_top_pane_ParamLimits

0x554b,	// (0x0001203b) area_top_pane

0x55e9,	// (0x000120d9) main_pane_ParamLimits

0x55e9,	// (0x000120d9) main_pane

0x3d3f,	// (0x0001082f) misc_graphics

0x8f49,	// (0x00015a39) battery_pane_ParamLimits

0x8f49,	// (0x00015a39) battery_pane

0x9d26,	// (0x00016816) bg_status_flat_pane_g8

0x9d2e,	// (0x0001681e) bg_status_flat_pane_g9

0x9011,	// (0x00015b01) context_pane_ParamLimits

0x9011,	// (0x00015b01) context_pane

0x9127,	// (0x00015c17) navi_pane_ParamLimits

0x9127,	// (0x00015c17) navi_pane

0x91ab,	// (0x00015c9b) signal_pane_ParamLimits

0x91ab,	// (0x00015c9b) signal_pane

0x0008,

0xf86a,	// (0x0001c35a) bg_status_flat_pane_g

0x9218,	// (0x00015d08) status_pane_g1_ParamLimits

0x9218,	// (0x00015d08) status_pane_g1

0x922c,	// (0x00015d1c) status_pane_g2_ParamLimits

0x922c,	// (0x00015d1c) status_pane_g2

0x9238,	// (0x00015d28) status_pane_g3_ParamLimits

0x9238,	// (0x00015d28) status_pane_g3

0x0004,

0xf791,	// (0x0001c281) status_pane_g_ParamLimits

0xf791,	// (0x0001c281) status_pane_g

0x926c,	// (0x00015d5c) title_pane_ParamLimits

0x926c,	// (0x00015d5c) title_pane

0x92a9,	// (0x00015d99) uni_indicator_pane_ParamLimits

0x92a9,	// (0x00015d99) uni_indicator_pane

0x8e69,	// (0x00015959) bg_list_pane_ParamLimits

0x8e69,	// (0x00015959) bg_list_pane

0x8e89,	// (0x00015979) find_pane

0x8e91,	// (0x00015981) listscroll_app_pane_ParamLimits

0x8e91,	// (0x00015981) listscroll_app_pane

0x8e9d,	// (0x0001598d) listscroll_form_pane

0x5eaf,	// (0x0001299f) listscroll_gen_pane_ParamLimits

0x5eaf,	// (0x0001299f) listscroll_gen_pane

0x5ec3,	// (0x000129b3) listscroll_set_pane

0x8525,	// (0x00015015) main_idle_act_pane

0x8b69,	// (0x00015659) main_idle_trad_pane

0x8b69,	// (0x00015659) main_list_empty_pane

0x8e91,	// (0x00015981) main_midp_pane

0x8eb7,	// (0x000159a7) main_pane_g1_ParamLimits

0x8eb7,	// (0x000159a7) main_pane_g1

0x5ed9,	// (0x000129c9) popup_ai_message_window_ParamLimits

0x5ed9,	// (0x000129c9) popup_ai_message_window

0x5f7d,	// (0x00012a6d) popup_fep_china_uni_window_ParamLimits

0x5f7d,	// (0x00012a6d) popup_fep_china_uni_window

0x5fd7,	// (0x00012ac7) popup_fep_japan_candidate_window_ParamLimits

0x5fd7,	// (0x00012ac7) popup_fep_japan_candidate_window

0x5ff5,	// (0x00012ae5) popup_fep_japan_predictive_window_ParamLimits

0x5ff5,	// (0x00012ae5) popup_fep_japan_predictive_window

0x6025,	// (0x00012b15) popup_find_window

0x6032,	// (0x00012b22) popup_grid_graphic_window_ParamLimits

0x6032,	// (0x00012b22) popup_grid_graphic_window

0x605c,	// (0x00012b4c) popup_large_graphic_colour_window

0x6082,	// (0x00012b72) popup_menu_window_ParamLimits

0x6082,	// (0x00012b72) popup_menu_window

0x623e,	// (0x00012d2e) popup_note_image_window

0x622a,	// (0x00012d1a) popup_note_wait_window_ParamLimits

0x622a,	// (0x00012d1a) popup_note_wait_window

0x622a,	// (0x00012d1a) popup_note_window_ParamLimits

0x622a,	// (0x00012d1a) popup_note_window

0x6294,	// (0x00012d84) popup_query_code_window_ParamLimits

0x6294,	// (0x00012d84) popup_query_code_window

0x62a8,	// (0x00012d98) popup_query_data_code_window_ParamLimits

0x62a8,	// (0x00012d98) popup_query_data_code_window

0x62c5,	// (0x00012db5) popup_query_data_window_ParamLimits

0x62c5,	// (0x00012db5) popup_query_data_window

0x62e1,	// (0x00012dd1) popup_query_sat_info_window_ParamLimits

0x62e1,	// (0x00012dd1) popup_query_sat_info_window

0x631a,	// (0x00012e0a) popup_snote_single_graphic_window_ParamLimits

0x631a,	// (0x00012e0a) popup_snote_single_graphic_window

0x631a,	// (0x00012e0a) popup_snote_single_text_window_ParamLimits

0x631a,	// (0x00012e0a) popup_snote_single_text_window

0x632f,	// (0x00012e1f) popup_sub_window_general

0x645f,	// (0x00012f4f) popup_window_general_ParamLimits

0x645f,	// (0x00012f4f) popup_window_general

0x8ecd,	// (0x000159bd) power_save_pane

0x5d39,	// (0x00012829) control_pane_g1_ParamLimits

0x5d39,	// (0x00012829) control_pane_g1

0x5d60,	// (0x00012850) control_pane_g2_ParamLimits

0x5d60,	// (0x00012850) control_pane_g2

0x8e2c,	// (0x0001591c) control_pane_g3_ParamLimits

0x8e2c,	// (0x0001591c) control_pane_g3

0x0007,

0xf779,	// (0x0001c269) control_pane_g_ParamLimits

0xf779,	// (0x0001c269) control_pane_g

0x5daa,	// (0x0001289a) control_pane_t1_ParamLimits

0x5daa,	// (0x0001289a) control_pane_t1

0x5dfe,	// (0x000128ee) control_pane_t2_ParamLimits

0x5dfe,	// (0x000128ee) control_pane_t2

0x0002,

0xf78a,	// (0x0001c27a) control_pane_t_ParamLimits

0xf78a,	// (0x0001c27a) control_pane_t

0x8d51,	// (0x00015841) navi_navi_volume_pane_cp1

0x8d59,	// (0x00015849) status_small_icon_pane

0x8d61,	// (0x00015851) status_small_pane_g1_ParamLimits

0x8d61,	// (0x00015851) status_small_pane_g1

0x8d95,	// (0x00015885) status_small_pane_g2_ParamLimits

0x8d95,	// (0x00015885) status_small_pane_g2

0x8da1,	// (0x00015891) status_small_pane_g3_ParamLimits

0x8da1,	// (0x00015891) status_small_pane_g3

0x8dad,	// (0x0001589d) status_small_pane_g4_ParamLimits

0x8dad,	// (0x0001589d) status_small_pane_g4

0x8db9,	// (0x000158a9) status_small_pane_g5_ParamLimits

0x8db9,	// (0x000158a9) status_small_pane_g5

0x8dc7,	// (0x000158b7) status_small_pane_g6_ParamLimits

0x8dc7,	// (0x000158b7) status_small_pane_g6

0x0007,

0xf768,	// (0x0001c258) status_small_pane_g_ParamLimits

0xf768,	// (0x0001c258) status_small_pane_g

0x8df6,	// (0x000158e6) status_small_pane_t1

0x8e18,	// (0x00015908) status_small_wait_pane_ParamLimits

0x8e18,	// (0x00015908) status_small_wait_pane

0x86b8,	// (0x000151a8) aid_levels_signal_ParamLimits

0x86b8,	// (0x000151a8) aid_levels_signal

0x86ca,	// (0x000151ba) signal_pane_g1_ParamLimits

0x86ca,	// (0x000151ba) signal_pane_g1

0x86df,	// (0x000151cf) signal_pane_g2_ParamLimits

0x86df,	// (0x000151cf) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001c1e9) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001c1e9) signal_pane_g

0x492b,	// (0x0001141b) context_pane_g1

0x79a0,	// (0x00014490) title_pane_g1

0x79ca,	// (0x000144ba) title_pane_t1

0x3d75,	// (0x00010865) title_pane_t2

0x3d9b,	// (0x0001088b) title_pane_t3

0x0002,

0xf557,	// (0x0001c047) title_pane_t

0x92c1,	// (0x00015db1) aid_levels_battery_ParamLimits

0x92c1,	// (0x00015db1) aid_levels_battery

0x92d5,	// (0x00015dc5) battery_pane_g1_ParamLimits

0x92d5,	// (0x00015dc5) battery_pane_g1

0x92eb,	// (0x00015ddb) battery_pane_g2_ParamLimits

0x92eb,	// (0x00015ddb) battery_pane_g2

0x0001,

0xf79c,	// (0x0001c28c) battery_pane_g_ParamLimits

0xf79c,	// (0x0001c28c) battery_pane_g

0xa64a,	// (0x0001713a) uni_indicator_pane_g1

0xa65d,	// (0x0001714d) uni_indicator_pane_g2

0xa66f,	// (0x0001715f) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0001c402) uni_indicator_pane_g

0x89db,	// (0x000154cb) navi_icon_pane_ParamLimits

0x89db,	// (0x000154cb) navi_icon_pane

0x8925,	// (0x00015415) navi_midp_pane

0x89f7,	// (0x000154e7) navi_navi_pane

0x8a01,	// (0x000154f1) navi_text_pane_ParamLimits

0x8a01,	// (0x000154f1) navi_text_pane

0x3bc6,	// (0x000106b6) status_small_wait_pane_g1

0x4006,	// (0x00010af6) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0001c3fd) status_small_wait_pane_g

0xa371,	// (0x00016e61) navi_navi_icon_text_pane

0xa379,	// (0x00016e69) navi_navi_pane_g1_ParamLimits

0xa379,	// (0x00016e69) navi_navi_pane_g1

0xa38b,	// (0x00016e7b) navi_navi_pane_g2_ParamLimits

0xa38b,	// (0x00016e7b) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0001c3cb) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0001c3cb) navi_navi_pane_g

0xa39d,	// (0x00016e8d) navi_navi_tabs_pane

0xa3a6,	// (0x00016e96) navi_navi_text_pane

0xa371,	// (0x00016e61) navi_navi_volume_pane

0xa34d,	// (0x00016e3d) navi_text_pane_t1

0xa341,	// (0x00016e31) navi_icon_pane_g1

0xa294,	// (0x00016d84) navi_navi_text_pane_t1

0x677b,	// (0x0001326b) navi_navi_volume_pane_g1

0x6783,	// (0x00013273) volume_small_pane

0xa1fa,	// (0x00016cea) navi_navi_icon_text_pane_g1

0xa202,	// (0x00016cf2) navi_navi_icon_text_pane_t1

0x89f7,	// (0x000154e7) navi_tabs_2_long_pane

0x89f7,	// (0x000154e7) navi_tabs_2_pane

0x89f7,	// (0x000154e7) navi_tabs_3_long_pane

0x89f7,	// (0x000154e7) navi_tabs_3_pane

0x89f7,	// (0x000154e7) navi_tabs_4_pane

0x675b,	// (0x0001324b) tabs_2_active_pane_ParamLimits

0x675b,	// (0x0001324b) tabs_2_active_pane

0x676b,	// (0x0001325b) tabs_2_passive_pane_ParamLimits

0x676b,	// (0x0001325b) tabs_2_passive_pane

0x6729,	// (0x00013219) tabs_3_active_pane_ParamLimits

0x6729,	// (0x00013219) tabs_3_active_pane

0x6739,	// (0x00013229) tabs_3_passive_pane_ParamLimits

0x6739,	// (0x00013229) tabs_3_passive_pane

0x674a,	// (0x0001323a) tabs_3_passive_pane_cp_ParamLimits

0x674a,	// (0x0001323a) tabs_3_passive_pane_cp

0x66e5,	// (0x000131d5) tabs_4_active_pane_ParamLimits

0x66e5,	// (0x000131d5) tabs_4_active_pane

0x66f6,	// (0x000131e6) tabs_4_passive_pane_ParamLimits

0x66f6,	// (0x000131e6) tabs_4_passive_pane

0x6707,	// (0x000131f7) tabs_4_passive_pane_cp_ParamLimits

0x6707,	// (0x000131f7) tabs_4_passive_pane_cp

0x6718,	// (0x00013208) tabs_4_passive_pane_cp2_ParamLimits

0x6718,	// (0x00013208) tabs_4_passive_pane_cp2

0x66c1,	// (0x000131b1) tabs_2_long_active_pane_ParamLimits

0x66c1,	// (0x000131b1) tabs_2_long_active_pane

0x66d3,	// (0x000131c3) tabs_2_long_passive_pane_ParamLimits

0x66d3,	// (0x000131c3) tabs_2_long_passive_pane

0x667c,	// (0x0001316c) tabs_3_long_active_pane_ParamLimits

0x667c,	// (0x0001316c) tabs_3_long_active_pane

0x6695,	// (0x00013185) tabs_3_long_passive_pane_ParamLimits

0x6695,	// (0x00013185) tabs_3_long_passive_pane

0x66a8,	// (0x00013198) tabs_3_long_passive_pane_cp_ParamLimits

0x66a8,	// (0x00013198) tabs_3_long_passive_pane_cp

0x6622,	// (0x00013112) volume_small_pane_g1

0x662b,	// (0x0001311b) volume_small_pane_g2

0x6634,	// (0x00013124) volume_small_pane_g3

0x663d,	// (0x0001312d) volume_small_pane_g4

0x6646,	// (0x00013136) volume_small_pane_g5

0x664f,	// (0x0001313f) volume_small_pane_g6

0x6658,	// (0x00013148) volume_small_pane_g7

0x6661,	// (0x00013151) volume_small_pane_g8

0x666a,	// (0x0001315a) volume_small_pane_g9

0x6673,	// (0x00013163) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0001c397) volume_small_pane_g

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp2_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp2

0x7a32,	// (0x00014522) tabs_3_active_pane_g1

0x7a3a,	// (0x0001452a) tabs_3_active_pane_t1

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp2_ParamLimits

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp2

0x7a32,	// (0x00014522) tabs_3_passive_pane_g1

0x7a3a,	// (0x0001452a) tabs_3_passive_pane_t1

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp3_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp3

0x7a4c,	// (0x0001453c) tabs_4_active_pane_g1

0x7a54,	// (0x00014544) tabs_4_active_pane_t1

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp3_ParamLimits

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp3

0x7a4c,	// (0x0001453c) tabs_4_1_passive_pane_g1

0x7a54,	// (0x00014544) tabs_4_1_passive_pane_t1

0x8e91,	// (0x00015981) list_highlight_pane_cp2

0xa8c4,	// (0x000173b4) list_set_pane_ParamLimits

0xa8c4,	// (0x000173b4) list_set_pane

0xa966,	// (0x00017456) main_pane_set_t1_ParamLimits

0xa966,	// (0x00017456) main_pane_set_t1

0xa986,	// (0x00017476) main_pane_set_t2_ParamLimits

0xa986,	// (0x00017476) main_pane_set_t2

0xa99a,	// (0x0001748a) main_pane_set_t3_ParamLimits

0xa99a,	// (0x0001748a) main_pane_set_t3

0xa9ac,	// (0x0001749c) main_pane_set_t4_ParamLimits

0xa9ac,	// (0x0001749c) main_pane_set_t4

0x0003,

0xf977,	// (0x0001c467) main_pane_set_t_ParamLimits

0xf977,	// (0x0001c467) main_pane_set_t

0xa9be,	// (0x000174ae) setting_code_pane

0xa9ca,	// (0x000174ba) setting_slider_graphic_pane

0xa9ca,	// (0x000174ba) setting_slider_pane

0xa9ca,	// (0x000174ba) setting_text_pane

0xa9ca,	// (0x000174ba) setting_volume_pane

0x582a,	// (0x0001231a) volume_set_pane

0x3dbb,	// (0x000108ab) bg_set_opt_pane_cp

0x5832,	// (0x00012322) setting_slider_pane_t1

0x584b,	// (0x0001233b) setting_slider_pane_t2

0x5865,	// (0x00012355) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c04e) setting_slider_pane_t

0x587d,	// (0x0001236d) slider_set_pane

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp2

0x3dc9,	// (0x000108b9) setting_slider_graphic_pane_g1

0x5893,	// (0x00012383) setting_slider_graphic_pane_t1

0x58a3,	// (0x00012393) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c055) setting_slider_graphic_pane_t

0x58b3,	// (0x000123a3) slider_set_pane_cp

0x3d3f,	// (0x0001082f) input_focus_pane_cp1

0xa883,	// (0x00017373) list_set_text_pane

0x3bc6,	// (0x000106b6) setting_text_pane_g1

0x3d3f,	// (0x0001082f) input_focus_pane_cp2

0x3bc6,	// (0x000106b6) setting_code_pane_g1

0x3dd2,	// (0x000108c2) setting_code_pane_t1

0x3de0,	// (0x000108d0) set_text_pane_t1_ParamLimits

0x3de0,	// (0x000108d0) set_text_pane_t1

0x42b7,	// (0x00010da7) set_opt_bg_pane_g1

0x42bf,	// (0x00010daf) set_opt_bg_pane_g2

0xa85d,	// (0x0001734d) set_opt_bg_pane_g3

0x42cf,	// (0x00010dbf) set_opt_bg_pane_g4

0x42d7,	// (0x00010dc7) set_opt_bg_pane_g5

0x42df,	// (0x00010dcf) set_opt_bg_pane_g6

0xa867,	// (0x00017357) set_opt_bg_pane_g7

0xa86f,	// (0x0001735f) set_opt_bg_pane_g8

0xa879,	// (0x00017369) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0001c454) set_opt_bg_pane_g

0xa850,	// (0x00017340) slider_set_pane_g1

0x67f0,	// (0x000132e0) slider_set_pane_g2

0x0006,

0xf955,	// (0x0001c445) slider_set_pane_g

0x678c,	// (0x0001327c) volume_set_pane_g1

0x6794,	// (0x00013284) volume_set_pane_g2

0x679c,	// (0x0001328c) volume_set_pane_g3

0x67a4,	// (0x00013294) volume_set_pane_g4

0x67ac,	// (0x0001329c) volume_set_pane_g5

0x67b4,	// (0x000132a4) volume_set_pane_g6

0x67bc,	// (0x000132ac) volume_set_pane_g7

0x67c4,	// (0x000132b4) volume_set_pane_g8

0x67cc,	// (0x000132bc) volume_set_pane_g9

0x67d4,	// (0x000132c4) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0001c41d) volume_set_pane_g

0x7a66,	// (0x00014556) indicator_pane_ParamLimits

0x7a66,	// (0x00014556) indicator_pane

0x7a72,	// (0x00014562) main_idle_pane_g2_ParamLimits

0x7a72,	// (0x00014562) main_idle_pane_g2

0x7a9a,	// (0x0001458a) main_pane_idle_g1_ParamLimits

0x7a9a,	// (0x0001458a) main_pane_idle_g1

0x3dfa,	// (0x000108ea) popup_clock_digital_analogue_window_ParamLimits

0x3dfa,	// (0x000108ea) popup_clock_digital_analogue_window

0x7aa7,	// (0x00014597) soft_indicator_pane_ParamLimits

0x7aa7,	// (0x00014597) soft_indicator_pane

0x7ab3,	// (0x000145a3) wallpaper_pane_ParamLimits

0x7ab3,	// (0x000145a3) wallpaper_pane

0x3bc6,	// (0x000106b6) wallpaper_pane_g1

0x7abf,	// (0x000145af) indicator_pane_g1_ParamLimits

0x7abf,	// (0x000145af) indicator_pane_g1

0xad56,	// (0x00017846) navi_navi_icon_text_pane_srt_g1

0x3e28,	// (0x00010918) soft_indicator_pane_t1

0x3e42,	// (0x00010932) aid_ps_area_pane

0x7acb,	// (0x000145bb) aid_ps_clock_pane

0x3e53,	// (0x00010943) aid_ps_indicator_pane

0x3e5f,	// (0x0001094f) indicator_ps_pane_ParamLimits

0x3e5f,	// (0x0001094f) indicator_ps_pane

0x3e6e,	// (0x0001095e) power_save_pane_g1_ParamLimits

0x3e6e,	// (0x0001095e) power_save_pane_g1

0x3e7a,	// (0x0001096a) power_save_pane_g2_ParamLimits

0x3e7a,	// (0x0001096a) power_save_pane_g2

0x543f,	// (0x00011f2f) aid_navinavi_width_pane

0x3e42,	// (0x00010932) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c05a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c05a) power_save_pane_g

0x3e88,	// (0x00010978) power_save_pane_t1_ParamLimits

0x3e88,	// (0x00010978) power_save_pane_t1

0x7acb,	// (0x000145bb) aid_ps_clock_pane_ParamLimits

0x3e53,	// (0x00010943) aid_ps_indicator_pane_ParamLimits

0x3e9a,	// (0x0001098a) power_save_pane_t4_ParamLimits

0x3e9a,	// (0x0001098a) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c05f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c05f) power_save_pane_t

0x3ec4,	// (0x000109b4) power_save_t3_ParamLimits

0x3ec4,	// (0x000109b4) power_save_t3

0x3eaf,	// (0x0001099f) power_save_t2_ParamLimits

0x3eaf,	// (0x0001099f) power_save_t2

0x3ed9,	// (0x000109c9) indicator_ps_pane_g1

0x7ad9,	// (0x000145c9) ai_gene_pane_ParamLimits

0x7ad9,	// (0x000145c9) ai_gene_pane

0x7ae5,	// (0x000145d5) ai_links_pane_ParamLimits

0x7ae5,	// (0x000145d5) ai_links_pane

0x7af1,	// (0x000145e1) indicator_pane_cp1_ParamLimits

0x7af1,	// (0x000145e1) indicator_pane_cp1

0x7afd,	// (0x000145ed) main_pane_idle_g1_cp_ParamLimits

0x7afd,	// (0x000145ed) main_pane_idle_g1_cp

0x7b09,	// (0x000145f9) popup_ai_links_title_window

0x7b12,	// (0x00014602) soft_indicator_pane_cp1_ParamLimits

0x7b12,	// (0x00014602) soft_indicator_pane_cp1

0xa638,	// (0x00017128) ai_links_pane_g1

0xa641,	// (0x00017131) grid_ai_links_pane

0xa61b,	// (0x0001710b) ai_gene_pane_1

0xa626,	// (0x00017116) ai_gene_pane_2

0xa62f,	// (0x0001711f) list_highlight_pane_cp4

0xa5ff,	// (0x000170ef) cell_ai_link_pane_ParamLimits

0xa5ff,	// (0x000170ef) cell_ai_link_pane

0xa5f7,	// (0x000170e7) cell_ai_link_pane_g1

0x4006,	// (0x00010af6) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0001c3f8) cell_ai_link_pane_g

0x3d3f,	// (0x0001082f) grid_highlight_cp2

0x3d3f,	// (0x0001082f) bg_popup_sub_pane_cp1

0x3ef0,	// (0x000109e0) popup_ai_links_title_window_t1

0xa547,	// (0x00017037) ai_gene_pane_1_g1_ParamLimits

0xa547,	// (0x00017037) ai_gene_pane_1_g1

0xa553,	// (0x00017043) ai_gene_pane_1_g2_ParamLimits

0xa553,	// (0x00017043) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0001c3ee) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0001c3ee) ai_gene_pane_1_g

0xa560,	// (0x00017050) ai_gene_pane_1_t1_ParamLimits

0xa560,	// (0x00017050) ai_gene_pane_1_t1

0xa594,	// (0x00017084) grid_ai_soft_ind_pane

0xa532,	// (0x00017022) ai_gene_pane_2_t1_ParamLimits

0xa532,	// (0x00017022) ai_gene_pane_2_t1

0x7b1e,	// (0x0001460e) main_pane_empty_t1_ParamLimits

0x7b1e,	// (0x0001460e) main_pane_empty_t1

0x7b36,	// (0x00014626) main_pane_empty_t2_ParamLimits

0x7b36,	// (0x00014626) main_pane_empty_t2

0x7b4b,	// (0x0001463b) main_pane_empty_t3_ParamLimits

0x7b4b,	// (0x0001463b) main_pane_empty_t3

0x7b5d,	// (0x0001464d) main_pane_empty_t4_ParamLimits

0x7b5d,	// (0x0001464d) main_pane_empty_t4

0x7b6f,	// (0x0001465f) main_pane_empty_t5_ParamLimits

0x7b6f,	// (0x0001465f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c064) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c064) main_pane_empty_t

0x4308,	// (0x00010df8) bg_popup_window_pane_ParamLimits

0x4308,	// (0x00010df8) bg_popup_window_pane

0xa2a2,	// (0x00016d92) find_popup_pane_cp2_ParamLimits

0xa2a2,	// (0x00016d92) find_popup_pane_cp2

0xa2ae,	// (0x00016d9e) heading_pane_ParamLimits

0xa2ae,	// (0x00016d9e) heading_pane

0x3d3f,	// (0x0001082f) bg_popup_sub_pane

0xa21c,	// (0x00016d0c) bg_popup_window_pane_g1_ParamLimits

0xa21c,	// (0x00016d0c) bg_popup_window_pane_g1

0xa228,	// (0x00016d18) bg_popup_window_pane_g2_ParamLimits

0xa228,	// (0x00016d18) bg_popup_window_pane_g2

0xa234,	// (0x00016d24) bg_popup_window_pane_g3_ParamLimits

0xa234,	// (0x00016d24) bg_popup_window_pane_g3

0xa240,	// (0x00016d30) bg_popup_window_pane_g4_ParamLimits

0xa240,	// (0x00016d30) bg_popup_window_pane_g4

0xa24c,	// (0x00016d3c) bg_popup_window_pane_g5_ParamLimits

0xa24c,	// (0x00016d3c) bg_popup_window_pane_g5

0xa258,	// (0x00016d48) bg_popup_window_pane_g6_ParamLimits

0xa258,	// (0x00016d48) bg_popup_window_pane_g6

0xa264,	// (0x00016d54) bg_popup_window_pane_g7_ParamLimits

0xa264,	// (0x00016d54) bg_popup_window_pane_g7

0xa270,	// (0x00016d60) bg_popup_window_pane_g8_ParamLimits

0xa270,	// (0x00016d60) bg_popup_window_pane_g8

0xa27c,	// (0x00016d6c) bg_popup_window_pane_g9_ParamLimits

0xa27c,	// (0x00016d6c) bg_popup_window_pane_g9

0xa288,	// (0x00016d78) bg_popup_window_pane_g10_ParamLimits

0xa288,	// (0x00016d78) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0001c3b6) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0001c3b6) bg_popup_window_pane_g

0xa1b1,	// (0x00016ca1) bg_popup_heading_pane_ParamLimits

0xa1b1,	// (0x00016ca1) bg_popup_heading_pane

0x6878,	// (0x00013368) tabs_4_passive_pane_cp_srt_ParamLimits

0x6878,	// (0x00013368) tabs_4_passive_pane_cp_srt

0x688a,	// (0x0001337a) tabs_4_passive_pane_srt_ParamLimits

0xa1c5,	// (0x00016cb5) heading_pane_g2

0x688a,	// (0x0001337a) tabs_4_passive_pane_srt

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp3_srt

0xa1cd,	// (0x00016cbd) heading_pane_t1_ParamLimits

0xa1cd,	// (0x00016cbd) heading_pane_t1

0xa1e4,	// (0x00016cd4) heading_pane_t2_ParamLimits

0xa1e4,	// (0x00016cd4) heading_pane_t2

0x0001,

0xf8c1,	// (0x0001c3b1) heading_pane_t_ParamLimits

0xf8c1,	// (0x0001c3b1) heading_pane_t

0x9cee,	// (0x000167de) bg_popup_heading_pane_g1

0x9d9d,	// (0x0001688d) bg_popup_heading_pane_g2

0x9da7,	// (0x00016897) bg_popup_heading_pane_g3

0x9db1,	// (0x000168a1) bg_popup_heading_pane_g4

0x9dbb,	// (0x000168ab) bg_popup_heading_pane_g5

0x9dc5,	// (0x000168b5) bg_popup_heading_pane_g6

0x9dcd,	// (0x000168bd) bg_popup_heading_pane_g7

0x9dd5,	// (0x000168c5) bg_popup_heading_pane_g8

0x9ddf,	// (0x000168cf) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0001c36d) bg_popup_heading_pane_g

0x93e2,	// (0x00015ed2) bg_popup_sub_pane_g1

0x93f2,	// (0x00015ee2) bg_popup_sub_pane_g2

0x93ea,	// (0x00015eda) bg_popup_sub_pane_g3

0x9402,	// (0x00015ef2) bg_popup_sub_pane_g4

0x93fa,	// (0x00015eea) bg_popup_sub_pane_g5

0x940a,	// (0x00015efa) bg_popup_sub_pane_g6

0x9412,	// (0x00015f02) bg_popup_sub_pane_g7

0x9422,	// (0x00015f12) bg_popup_sub_pane_g8

0x941a,	// (0x00015f0a) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0001c347) bg_popup_sub_pane_g

0x3dad,	// (0x0001089d) bg_popup_window_pane_cp5_ParamLimits

0x3dad,	// (0x0001089d) bg_popup_window_pane_cp5

0x3f0d,	// (0x000109fd) popup_note_window_g1_ParamLimits

0x3f0d,	// (0x000109fd) popup_note_window_g1

0x3f19,	// (0x00010a09) popup_note_window_t1_ParamLimits

0x3f19,	// (0x00010a09) popup_note_window_t1

0x3f2f,	// (0x00010a1f) popup_note_window_t2_ParamLimits

0x3f2f,	// (0x00010a1f) popup_note_window_t2

0x3f45,	// (0x00010a35) popup_note_window_t3_ParamLimits

0x3f45,	// (0x00010a35) popup_note_window_t3

0x3f5b,	// (0x00010a4b) popup_note_window_t4_ParamLimits

0x3f5b,	// (0x00010a4b) popup_note_window_t4

0x3f83,	// (0x00010a73) popup_note_window_t5_ParamLimits

0x3f83,	// (0x00010a73) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c06f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c06f) popup_note_window_t

0x3fa7,	// (0x00010a97) bg_popup_window_pane_cp6_ParamLimits

0x3fa7,	// (0x00010a97) bg_popup_window_pane_cp6

0x9c6a,	// (0x0001675a) popup_note_image_window_g1_ParamLimits

0x9c6a,	// (0x0001675a) popup_note_image_window_g1

0x9c76,	// (0x00016766) popup_note_image_window_g2_ParamLimits

0x9c76,	// (0x00016766) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0001c33b) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0001c33b) popup_note_image_window_g

0x9c8f,	// (0x0001677f) popup_note_image_window_t1_ParamLimits

0x9c8f,	// (0x0001677f) popup_note_image_window_t1

0x9ca8,	// (0x00016798) popup_note_image_window_t2_ParamLimits

0x9ca8,	// (0x00016798) popup_note_image_window_t2

0x9cc1,	// (0x000167b1) popup_note_image_window_t3_ParamLimits

0x9cc1,	// (0x000167b1) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0001c340) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0001c340) popup_note_image_window_t

0x9b33,	// (0x00016623) bg_popup_window_pane_cp7_ParamLimits

0x9b33,	// (0x00016623) bg_popup_window_pane_cp7

0x9b63,	// (0x00016653) popup_note_wait_window_g1_ParamLimits

0x9b63,	// (0x00016653) popup_note_wait_window_g1

0x9b6f,	// (0x0001665f) popup_note_wait_window_g2_ParamLimits

0x9b6f,	// (0x0001665f) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0001c329) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0001c329) popup_note_wait_window_g

0x9b87,	// (0x00016677) popup_note_wait_window_t1_ParamLimits

0x9b87,	// (0x00016677) popup_note_wait_window_t1

0x9bae,	// (0x0001669e) popup_note_wait_window_t2_ParamLimits

0x9bae,	// (0x0001669e) popup_note_wait_window_t2

0x9bcb,	// (0x000166bb) popup_note_wait_window_t3_ParamLimits

0x9bcb,	// (0x000166bb) popup_note_wait_window_t3

0x9bde,	// (0x000166ce) popup_note_wait_window_t4_ParamLimits

0x9bde,	// (0x000166ce) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0001c330) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0001c330) popup_note_wait_window_t

0x9c03,	// (0x000166f3) wait_bar_pane_ParamLimits

0x9c03,	// (0x000166f3) wait_bar_pane

0x3d3f,	// (0x0001082f) wait_anim_pane

0x3d3f,	// (0x0001082f) wait_border_pane

0x3bc6,	// (0x000106b6) wait_anim_pane_g1

0x3bc6,	// (0x000106b6) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0001c1e4) wait_anim_pane_g

0x9adf,	// (0x000165cf) wait_border_pane_g1

0x9aea,	// (0x000165da) wait_border_pane_g2

0x9af3,	// (0x000165e3) wait_border_pane_g3

0x0002,

0xf832,	// (0x0001c322) wait_border_pane_g

0x994a,	// (0x0001643a) bg_popup_window_pane_cp16_ParamLimits

0x994a,	// (0x0001643a) bg_popup_window_pane_cp16

0x9a4a,	// (0x0001653a) indicator_popup_pane_cp4_ParamLimits

0x9a4a,	// (0x0001653a) indicator_popup_pane_cp4

0x9a5e,	// (0x0001654e) popup_query_data_window_t1_ParamLimits

0x9a5e,	// (0x0001654e) popup_query_data_window_t1

0x9a70,	// (0x00016560) popup_query_data_window_t2_ParamLimits

0x9a70,	// (0x00016560) popup_query_data_window_t2

0x9a89,	// (0x00016579) popup_query_data_window_t3_ParamLimits

0x9a89,	// (0x00016579) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0001c31b) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0001c31b) popup_query_data_window_t

0x9aa3,	// (0x00016593) query_popup_data_pane_ParamLimits

0x9aa3,	// (0x00016593) query_popup_data_pane

0x9ab7,	// (0x000165a7) query_popup_data_pane_cp1_ParamLimits

0x9ab7,	// (0x000165a7) query_popup_data_pane_cp1

0x994a,	// (0x0001643a) bg_popup_window_pane_cp10_ParamLimits

0x994a,	// (0x0001643a) bg_popup_window_pane_cp10

0x997c,	// (0x0001646c) indicator_popup_pane_ParamLimits

0x997c,	// (0x0001646c) indicator_popup_pane

0x999e,	// (0x0001648e) popup_query_code_window_t1_ParamLimits

0x999e,	// (0x0001648e) popup_query_code_window_t1

0x99b8,	// (0x000164a8) popup_query_code_window_t2_ParamLimits

0x99b8,	// (0x000164a8) popup_query_code_window_t2

0x9a01,	// (0x000164f1) popup_query_code_window_t3_ParamLimits

0x9a01,	// (0x000164f1) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0001c314) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0001c314) popup_query_code_window_t

0x9a30,	// (0x00016520) query_popup_pane_ParamLimits

0x9a30,	// (0x00016520) query_popup_pane

0x3fa7,	// (0x00010a97) bg_popup_window_pane_cp15_ParamLimits

0x3fa7,	// (0x00010a97) bg_popup_window_pane_cp15

0x7ba9,	// (0x00014699) indicator_popup_pane_cp1_ParamLimits

0x7ba9,	// (0x00014699) indicator_popup_pane_cp1

0x7bbc,	// (0x000146ac) indicator_popup_pane_cp2_ParamLimits

0x7bbc,	// (0x000146ac) indicator_popup_pane_cp2

0x7bcf,	// (0x000146bf) popup_query_data_code_window_g1_ParamLimits

0x7bcf,	// (0x000146bf) popup_query_data_code_window_g1

0x3fc5,	// (0x00010ab5) popup_query_data_code_window_t1_ParamLimits

0x3fc5,	// (0x00010ab5) popup_query_data_code_window_t1

0x3fd7,	// (0x00010ac7) popup_query_data_code_window_t2_ParamLimits

0x3fd7,	// (0x00010ac7) popup_query_data_code_window_t2

0x7be2,	// (0x000146d2) popup_query_data_code_window_t3_ParamLimits

0x7be2,	// (0x000146d2) popup_query_data_code_window_t3

0x7bf8,	// (0x000146e8) popup_query_data_code_window_t4_ParamLimits

0x7bf8,	// (0x000146e8) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c07a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c07a) popup_query_data_code_window_t

0x6533,	// (0x00013023) list_single_midp_graphic_pane_g3

0x7c10,	// (0x00014700) query_popup_data_pane_cp2_ParamLimits

0x7c23,	// (0x00014713) query_popup_pane_cp2_ParamLimits

0x7c23,	// (0x00014713) query_popup_pane_cp2

0x3d3f,	// (0x0001082f) bg_popup_window_pane_cp11

0x9936,	// (0x00016426) heading_pane_cp5

0x4033,	// (0x00010b23) listscroll_popup_info_pane

0x3d3f,	// (0x0001082f) input_focus_pane_cp3

0x3fe9,	// (0x00010ad9) query_popup_pane_t1

0x3ff7,	// (0x00010ae7) list_popup_info_pane_ParamLimits

0x3ff7,	// (0x00010ae7) list_popup_info_pane

0x4006,	// (0x00010af6) listscroll_popup_info_pane_g1

0x400e,	// (0x00010afe) scroll_pane_cp7

0x7c36,	// (0x00014726) popup_info_list_pane_t1_ParamLimits

0x7c36,	// (0x00014726) popup_info_list_pane_t1

0x7c50,	// (0x00014740) popup_info_list_pane_t2_ParamLimits

0x7c50,	// (0x00014740) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c083) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c083) popup_info_list_pane_t

0x3d3f,	// (0x0001082f) bg_popup_window_pane_cp12

0xad70,	// (0x00017860) find_popup_pane

0x3dbb,	// (0x000108ab) bg_popup_window_pane_cp3

0x4018,	// (0x00010b08) heading_pane_cp3

0x4024,	// (0x00010b14) listscroll_popup_graphic_pane

0x3d3f,	// (0x0001082f) bg_popup_window_pane_cp4

0x7cba,	// (0x000147aa) heading_pane_cp4

0x4033,	// (0x00010b23) listscroll_popup_colour_pane

0x7cc4,	// (0x000147b4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cc4,	// (0x000147b4) cell_large_graphic_colour_none_popup_pane

0x7cd8,	// (0x000147c8) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cd8,	// (0x000147c8) grid_large_graphic_colour_popup_pane

0x7d00,	// (0x000147f0) listscroll_popup_colour_pane_g1_ParamLimits

0x7d00,	// (0x000147f0) listscroll_popup_colour_pane_g1

0x7d17,	// (0x00014807) listscroll_popup_colour_pane_g2_ParamLimits

0x7d17,	// (0x00014807) listscroll_popup_colour_pane_g2

0x7d2e,	// (0x0001481e) listscroll_popup_colour_pane_g3_ParamLimits

0x7d2e,	// (0x0001481e) listscroll_popup_colour_pane_g3

0x7d3e,	// (0x0001482e) listscroll_popup_colour_pane_g4_ParamLimits

0x7d3e,	// (0x0001482e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c088) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c088) listscroll_popup_colour_pane_g

0x403b,	// (0x00010b2b) scroll_pane_cp6_ParamLimits

0x403b,	// (0x00010b2b) scroll_pane_cp6

0x7d4e,	// (0x0001483e) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d4e,	// (0x0001483e) cell_large_graphic_colour_popup_pane

0x7d6d,	// (0x0001485d) cell_large_graphic_colour_none_popup_pane_t1

0x3d3f,	// (0x0001082f) grid_highlight_pane_cp5

0x404d,	// (0x00010b3d) cell_large_graphic_colour_popup_pane_g1

0x4055,	// (0x00010b45) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c091) cell_large_graphic_colour_popup_pane_g

0x405d,	// (0x00010b4d) cell_large_graphic_colour_popup_pane_g2_copy1

0x4066,	// (0x00010b56) grid_highlight_pane_cp4

0x406e,	// (0x00010b5e) bg_popup_window_pane_cp8_ParamLimits

0x406e,	// (0x00010b5e) bg_popup_window_pane_cp8

0x7d7c,	// (0x0001486c) popup_snote_single_text_window_g1_ParamLimits

0x7d7c,	// (0x0001486c) popup_snote_single_text_window_g1

0x7d8e,	// (0x0001487e) popup_snote_single_text_window_t1_ParamLimits

0x7d8e,	// (0x0001487e) popup_snote_single_text_window_t1

0x7da1,	// (0x00014891) popup_snote_single_text_window_t2_ParamLimits

0x7da1,	// (0x00014891) popup_snote_single_text_window_t2

0x7db4,	// (0x000148a4) popup_snote_single_text_window_t3_ParamLimits

0x7db4,	// (0x000148a4) popup_snote_single_text_window_t3

0x7ded,	// (0x000148dd) popup_snote_single_text_window_t4_ParamLimits

0x7ded,	// (0x000148dd) popup_snote_single_text_window_t4

0x7e21,	// (0x00014911) popup_snote_single_text_window_t5_ParamLimits

0x7e21,	// (0x00014911) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c096) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c096) popup_snote_single_text_window_t

0x4089,	// (0x00010b79) bg_popup_window_pane_cp9_ParamLimits

0x4089,	// (0x00010b79) bg_popup_window_pane_cp9

0x7d7c,	// (0x0001486c) popup_snote_single_graphic_window_g1_ParamLimits

0x7d7c,	// (0x0001486c) popup_snote_single_graphic_window_g1

0x4097,	// (0x00010b87) popup_snote_single_graphic_window_g2_ParamLimits

0x4097,	// (0x00010b87) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c0a1) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c0a1) popup_snote_single_graphic_window_g

0x40a3,	// (0x00010b93) popup_snote_single_graphic_window_t1_ParamLimits

0x40a3,	// (0x00010b93) popup_snote_single_graphic_window_t1

0x40b6,	// (0x00010ba6) popup_snote_single_graphic_window_t2_ParamLimits

0x40b6,	// (0x00010ba6) popup_snote_single_graphic_window_t2

0x7e50,	// (0x00014940) popup_snote_single_graphic_window_t3_ParamLimits

0x7e50,	// (0x00014940) popup_snote_single_graphic_window_t3

0x7e89,	// (0x00014979) popup_snote_single_graphic_window_t4_ParamLimits

0x7e89,	// (0x00014979) popup_snote_single_graphic_window_t4

0x7ebd,	// (0x000149ad) popup_snote_single_graphic_window_t5_ParamLimits

0x7ebd,	// (0x000149ad) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c0a6) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c0a6) popup_snote_single_graphic_window_t

0xacb2,	// (0x000177a2) grid_graphic_popup_pane_ParamLimits

0xacb2,	// (0x000177a2) grid_graphic_popup_pane

0xacdc,	// (0x000177cc) listscroll_popup_graphic_pane_g1_ParamLimits

0xacdc,	// (0x000177cc) listscroll_popup_graphic_pane_g1

0xacf0,	// (0x000177e0) listscroll_popup_graphic_pane_g2_ParamLimits

0xacf0,	// (0x000177e0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0001c491) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0001c491) listscroll_popup_graphic_pane_g

0xad04,	// (0x000177f4) scroll_pane_cp5

0xac51,	// (0x00017741) cell_graphic_popup_pane_ParamLimits

0xac51,	// (0x00017741) cell_graphic_popup_pane

0xac32,	// (0x00017722) cell_graphic_popup_pane_g1

0xac3a,	// (0x0001772a) cell_graphic_popup_pane_g2

0x405d,	// (0x00010b4d) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0001c48a) cell_graphic_popup_pane_g

0xac43,	// (0x00017733) cell_graphic_popup_pane_t2

0x4066,	// (0x00010b56) grid_highlight_pane_cp3

0x40db,	// (0x00010bcb) list_gen_pane_ParamLimits

0x40db,	// (0x00010bcb) list_gen_pane

0x4103,	// (0x00010bf3) scroll_pane

0xab8a,	// (0x0001767a) bg_list_pane_g1_ParamLimits

0xab8a,	// (0x0001767a) bg_list_pane_g1

0xaba7,	// (0x00017697) bg_list_pane_g2_ParamLimits

0xaba7,	// (0x00017697) bg_list_pane_g2

0xabbc,	// (0x000176ac) bg_list_pane_g3_ParamLimits

0xabbc,	// (0x000176ac) bg_list_pane_g3

0xabd0,	// (0x000176c0) bg_list_pane_g4_ParamLimits

0xabd0,	// (0x000176c0) bg_list_pane_g4

0xabe4,	// (0x000176d4) bg_list_pane_g5_ParamLimits

0xabe4,	// (0x000176d4) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0001c47f) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0001c47f) bg_list_pane_g

0xaa83,	// (0x00017573) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa83,	// (0x00017573) list_double2_graphic_large_graphic_pane

0xaa83,	// (0x00017573) list_double2_graphic_pane_ParamLimits

0xaa83,	// (0x00017573) list_double2_graphic_pane

0xaa83,	// (0x00017573) list_double2_large_graphic_pane_ParamLimits

0xaa83,	// (0x00017573) list_double2_large_graphic_pane

0xaa83,	// (0x00017573) list_double2_pane_ParamLimits

0xaa83,	// (0x00017573) list_double2_pane

0xaa83,	// (0x00017573) list_double_graphic_heading_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_graphic_heading_pane

0xaa83,	// (0x00017573) list_double_graphic_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_graphic_pane

0xaa83,	// (0x00017573) list_double_heading_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_heading_pane

0xaa83,	// (0x00017573) list_double_large_graphic_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_large_graphic_pane

0xaa83,	// (0x00017573) list_double_number_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_number_pane

0xaa83,	// (0x00017573) list_double_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_pane

0xaa83,	// (0x00017573) list_double_time_pane_ParamLimits

0xaa83,	// (0x00017573) list_double_time_pane

0xaa83,	// (0x00017573) list_setting_number_pane_ParamLimits

0xaa83,	// (0x00017573) list_setting_number_pane

0xaa83,	// (0x00017573) list_setting_pane_ParamLimits

0xaa83,	// (0x00017573) list_setting_pane

0xaaee,	// (0x000175de) list_single_2graphic_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_2graphic_pane

0xaaee,	// (0x000175de) list_single_graphic_heading_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_graphic_heading_pane

0xaaee,	// (0x000175de) list_single_graphic_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_graphic_pane

0xaaee,	// (0x000175de) list_single_heading_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_heading_pane

0xab68,	// (0x00017658) list_single_large_graphic_pane_ParamLimits

0xab68,	// (0x00017658) list_single_large_graphic_pane

0xaaee,	// (0x000175de) list_single_number_heading_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_number_heading_pane

0xaaee,	// (0x000175de) list_single_number_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_number_pane

0xaaee,	// (0x000175de) list_single_pane_ParamLimits

0xaaee,	// (0x000175de) list_single_pane

0x3d3f,	// (0x0001082f) list_highlight_pane_cp1

0x7f02,	// (0x000149f2) list_single_pane_g1_ParamLimits

0x7f02,	// (0x000149f2) list_single_pane_g1

0x7f0e,	// (0x000149fe) list_single_pane_g2_ParamLimits

0x7f0e,	// (0x000149fe) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c0b8) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c0b8) list_single_pane_g

0xaa3c,	// (0x0001752c) list_single_pane_t1_ParamLimits

0xaa3c,	// (0x0001752c) list_single_pane_t1

0x7f02,	// (0x000149f2) list_single_number_pane_g1_ParamLimits

0x7f02,	// (0x000149f2) list_single_number_pane_g1

0x7f0e,	// (0x000149fe) list_single_number_pane_g2_ParamLimits

0x7f0e,	// (0x000149fe) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c0b8) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c0b8) list_single_number_pane_g

0x7f1a,	// (0x00014a0a) list_single_number_pane_t1_ParamLimits

0x7f1a,	// (0x00014a0a) list_single_number_pane_t1

0xa7e2,	// (0x000172d2) list_single_number_pane_t2_ParamLimits

0xa7e2,	// (0x000172d2) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0001c440) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0001c440) list_single_number_pane_t

0x7ef6,	// (0x000149e6) list_single_graphic_pane_g1_ParamLimits

0x7ef6,	// (0x000149e6) list_single_graphic_pane_g1

0x7f02,	// (0x000149f2) list_single_graphic_pane_g2_ParamLimits

0x7f02,	// (0x000149f2) list_single_graphic_pane_g2

0x7f0e,	// (0x000149fe) list_single_graphic_pane_g3_ParamLimits

0x7f0e,	// (0x000149fe) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c0b1) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c0b1) list_single_graphic_pane_g

0x7f1a,	// (0x00014a0a) list_single_graphic_pane_t1_ParamLimits

0x7f1a,	// (0x00014a0a) list_single_graphic_pane_t1

0x7f02,	// (0x000149f2) list_single_heading_pane_g1_ParamLimits

0x7f02,	// (0x000149f2) list_single_heading_pane_g1

0x7f0e,	// (0x000149fe) list_single_heading_pane_g2_ParamLimits

0x7f0e,	// (0x000149fe) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c0b8) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c0b8) list_single_heading_pane_g

0x7f30,	// (0x00014a20) list_single_heading_pane_t1_ParamLimits

0x7f30,	// (0x00014a20) list_single_heading_pane_t1

0x7f46,	// (0x00014a36) list_single_heading_pane_t2_ParamLimits

0x7f46,	// (0x00014a36) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c0bd) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c0bd) list_single_heading_pane_t

0x7f02,	// (0x000149f2) list_single_number_heading_pane_g1_ParamLimits

0x7f02,	// (0x000149f2) list_single_number_heading_pane_g1

0x7f0e,	// (0x000149fe) list_single_number_heading_pane_g2_ParamLimits

0x7f0e,	// (0x000149fe) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c0b8) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c0b8) list_single_number_heading_pane_g

0x7f30,	// (0x00014a20) list_single_number_heading_pane_t1_ParamLimits

0x7f30,	// (0x00014a20) list_single_number_heading_pane_t1

0x7f58,	// (0x00014a48) list_single_number_heading_pane_t2_ParamLimits

0x7f58,	// (0x00014a48) list_single_number_heading_pane_t2

0x7f6a,	// (0x00014a5a) list_single_number_heading_pane_t3_ParamLimits

0x7f6a,	// (0x00014a5a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c0c2) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c0c2) list_single_number_heading_pane_t

0x7f7c,	// (0x00014a6c) list_single_graphic_heading_pane_g1_ParamLimits

0x7f7c,	// (0x00014a6c) list_single_graphic_heading_pane_g1

0x7f88,	// (0x00014a78) list_single_graphic_heading_pane_g4_ParamLimits

0x7f88,	// (0x00014a78) list_single_graphic_heading_pane_g4

0x7f0e,	// (0x000149fe) list_single_graphic_heading_pane_g5_ParamLimits

0x7f0e,	// (0x000149fe) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c0c9) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c0c9) list_single_graphic_heading_pane_g

0x7f30,	// (0x00014a20) list_single_graphic_heading_pane_t1_ParamLimits

0x7f30,	// (0x00014a20) list_single_graphic_heading_pane_t1

0x7f99,	// (0x00014a89) list_single_graphic_heading_pane_t2_ParamLimits

0x7f99,	// (0x00014a89) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c0d0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c0d0) list_single_graphic_heading_pane_t

0x7fab,	// (0x00014a9b) list_single_large_graphic_pane_g1_ParamLimits

0x7fab,	// (0x00014a9b) list_single_large_graphic_pane_g1

0x4137,	// (0x00010c27) list_single_large_graphic_pane_g2_ParamLimits

0x4137,	// (0x00010c27) list_single_large_graphic_pane_g2

0x4143,	// (0x00010c33) list_single_large_graphic_pane_g3_ParamLimits

0x4143,	// (0x00010c33) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c0d5) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c0d5) list_single_large_graphic_pane_g

0x9aea,	// (0x000165da) wait_border_pane_g2_copy1

0x7fb7,	// (0x00014aa7) list_single_large_graphic_pane_g4_cp2

0x7fbf,	// (0x00014aaf) list_single_large_graphic_pane_t1_ParamLimits

0x7fbf,	// (0x00014aaf) list_single_large_graphic_pane_t1

0x4164,	// (0x00010c54) list_double_pane_g1_ParamLimits

0x4164,	// (0x00010c54) list_double_pane_g1

0x7fd5,	// (0x00014ac5) list_double_pane_g2_ParamLimits

0x7fd5,	// (0x00014ac5) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c0dc) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c0dc) list_double_pane_g

0x7fe1,	// (0x00014ad1) list_double_pane_t1_ParamLimits

0x7fe1,	// (0x00014ad1) list_double_pane_t1

0x7ff7,	// (0x00014ae7) list_double_pane_t2_ParamLimits

0x7ff7,	// (0x00014ae7) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c0e1) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c0e1) list_double_pane_t

0x8009,	// (0x00014af9) list_double2_pane_g1_ParamLimits

0x8009,	// (0x00014af9) list_double2_pane_g1

0x801a,	// (0x00014b0a) list_double2_pane_g2_ParamLimits

0x801a,	// (0x00014b0a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c0e6) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c0e6) list_double2_pane_g

0x8026,	// (0x00014b16) list_double2_pane_t1_ParamLimits

0x8026,	// (0x00014b16) list_double2_pane_t1

0x803c,	// (0x00014b2c) list_double2_pane_t2_ParamLimits

0x803c,	// (0x00014b2c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c0eb) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c0eb) list_double2_pane_t

0x4164,	// (0x00010c54) list_double_number_pane_g1_ParamLimits

0x4164,	// (0x00010c54) list_double_number_pane_g1

0x7fd5,	// (0x00014ac5) list_double_number_pane_g2_ParamLimits

0x7fd5,	// (0x00014ac5) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c0dc) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c0dc) list_double_number_pane_g

0x804e,	// (0x00014b3e) list_double_number_pane_t1_ParamLimits

0x804e,	// (0x00014b3e) list_double_number_pane_t1

0x8060,	// (0x00014b50) list_double_number_pane_t2_ParamLimits

0x8060,	// (0x00014b50) list_double_number_pane_t2

0x8076,	// (0x00014b66) list_double_number_pane_t3_ParamLimits

0x8076,	// (0x00014b66) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c0f0) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c0f0) list_double_number_pane_t

0x8088,	// (0x00014b78) list_double_graphic_pane_g1_ParamLimits

0x8088,	// (0x00014b78) list_double_graphic_pane_g1

0x8094,	// (0x00014b84) list_double_graphic_pane_g2_ParamLimits

0x8094,	// (0x00014b84) list_double_graphic_pane_g2

0x80a3,	// (0x00014b93) list_double_graphic_pane_g3_ParamLimits

0x80a3,	// (0x00014b93) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c0f7) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c0f7) list_double_graphic_pane_g

0x8060,	// (0x00014b50) list_double_graphic_pane_t1_ParamLimits

0x8060,	// (0x00014b50) list_double_graphic_pane_t1

0x8076,	// (0x00014b66) list_double_graphic_pane_t2_ParamLimits

0x8076,	// (0x00014b66) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c100) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c100) list_double_graphic_pane_t

0x80bb,	// (0x00014bab) list_double2_graphic_pane_g1_ParamLimits

0x80bb,	// (0x00014bab) list_double2_graphic_pane_g1

0x4170,	// (0x00010c60) list_double2_graphic_pane_g2_ParamLimits

0x4170,	// (0x00010c60) list_double2_graphic_pane_g2

0x801a,	// (0x00014b0a) list_double2_graphic_pane_g3_ParamLimits

0x801a,	// (0x00014b0a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c105) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c105) list_double2_graphic_pane_g

0x80c7,	// (0x00014bb7) list_double2_graphic_pane_t1_ParamLimits

0x80c7,	// (0x00014bb7) list_double2_graphic_pane_t1

0x80dd,	// (0x00014bcd) list_double2_graphic_pane_t2_ParamLimits

0x80dd,	// (0x00014bcd) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c10c) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c10c) list_double2_graphic_pane_t

0x80ef,	// (0x00014bdf) list_double_large_graphic_pane_g1_ParamLimits

0x80ef,	// (0x00014bdf) list_double_large_graphic_pane_g1

0x810e,	// (0x00014bfe) list_double_large_graphic_pane_g2_ParamLimits

0x810e,	// (0x00014bfe) list_double_large_graphic_pane_g2

0x7fd5,	// (0x00014ac5) list_double_large_graphic_pane_g3_ParamLimits

0x7fd5,	// (0x00014ac5) list_double_large_graphic_pane_g3

0x811f,	// (0x00014c0f) list_double_large_graphic_pane_g4_ParamLimits

0x811f,	// (0x00014c0f) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c111) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c111) list_double_large_graphic_pane_g

0x8131,	// (0x00014c21) list_double_large_graphic_pane_t1_ParamLimits

0x8131,	// (0x00014c21) list_double_large_graphic_pane_t1

0x814a,	// (0x00014c3a) list_double_large_graphic_pane_t2_ParamLimits

0x814a,	// (0x00014c3a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c11c) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c11c) list_double_large_graphic_pane_t

0x815c,	// (0x00014c4c) list_double2_large_graphic_pane_g1_ParamLimits

0x815c,	// (0x00014c4c) list_double2_large_graphic_pane_g1

0x8009,	// (0x00014af9) list_double2_large_graphic_pane_g2_ParamLimits

0x8009,	// (0x00014af9) list_double2_large_graphic_pane_g2

0x801a,	// (0x00014b0a) list_double2_large_graphic_pane_g3_ParamLimits

0x801a,	// (0x00014b0a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c121) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c121) list_double2_large_graphic_pane_g

0x80c7,	// (0x00014bb7) list_double2_large_graphic_pane_t1_ParamLimits

0x80c7,	// (0x00014bb7) list_double2_large_graphic_pane_t1

0x80dd,	// (0x00014bcd) list_double2_large_graphic_pane_t2_ParamLimits

0x80dd,	// (0x00014bcd) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c10c) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c10c) list_double2_large_graphic_pane_t

0x8168,	// (0x00014c58) list_double_heading_pane_g1_ParamLimits

0x8168,	// (0x00014c58) list_double_heading_pane_g1

0x8179,	// (0x00014c69) list_double_heading_pane_g2_ParamLimits

0x8179,	// (0x00014c69) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0001c128) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0001c128) list_double_heading_pane_g

0x8185,	// (0x00014c75) list_double_heading_pane_t1_ParamLimits

0x8185,	// (0x00014c75) list_double_heading_pane_t1

0x80dd,	// (0x00014bcd) list_double_heading_pane_t2_ParamLimits

0x80dd,	// (0x00014bcd) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c12d) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c12d) list_double_heading_pane_t

0x819b,	// (0x00014c8b) list_double_graphic_heading_pane_g1_ParamLimits

0x819b,	// (0x00014c8b) list_double_graphic_heading_pane_g1

0x8168,	// (0x00014c58) list_double_graphic_heading_pane_g2_ParamLimits

0x8168,	// (0x00014c58) list_double_graphic_heading_pane_g2

0x8179,	// (0x00014c69) list_double_graphic_heading_pane_g3_ParamLimits

0x8179,	// (0x00014c69) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0001c132) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0001c132) list_double_graphic_heading_pane_g

0x8185,	// (0x00014c75) list_double_graphic_heading_pane_t1_ParamLimits

0x8185,	// (0x00014c75) list_double_graphic_heading_pane_t1

0x80dd,	// (0x00014bcd) list_double_graphic_heading_pane_t2_ParamLimits

0x80dd,	// (0x00014bcd) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c12d) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c12d) list_double_graphic_heading_pane_t

0x810e,	// (0x00014bfe) list_double_time_pane_g1_ParamLimits

0x810e,	// (0x00014bfe) list_double_time_pane_g1

0x7fd5,	// (0x00014ac5) list_double_time_pane_g2_ParamLimits

0x7fd5,	// (0x00014ac5) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0001c139) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0001c139) list_double_time_pane_g

0x81a7,	// (0x00014c97) list_double_time_pane_t1_ParamLimits

0x81a7,	// (0x00014c97) list_double_time_pane_t1

0x81bd,	// (0x00014cad) list_double_time_pane_t2_ParamLimits

0x81bd,	// (0x00014cad) list_double_time_pane_t2

0x81cf,	// (0x00014cbf) list_double_time_pane_t3_ParamLimits

0x81cf,	// (0x00014cbf) list_double_time_pane_t3

0x81e1,	// (0x00014cd1) list_double_time_pane_t4_ParamLimits

0x81e1,	// (0x00014cd1) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0001c13e) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0001c13e) list_double_time_pane_t

0x4170,	// (0x00010c60) list_setting_pane_g1_ParamLimits

0x4170,	// (0x00010c60) list_setting_pane_g1

0x801a,	// (0x00014b0a) list_setting_pane_g2_ParamLimits

0x801a,	// (0x00014b0a) list_setting_pane_g2

0x0001,

0xf657,	// (0x0001c147) list_setting_pane_g_ParamLimits

0xf657,	// (0x0001c147) list_setting_pane_g

0x81f3,	// (0x00014ce3) list_setting_pane_t1_ParamLimits

0x81f3,	// (0x00014ce3) list_setting_pane_t1

0x820a,	// (0x00014cfa) list_setting_pane_t2_ParamLimits

0x820a,	// (0x00014cfa) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0001c14c) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0001c14c) list_setting_pane_t

0x8247,	// (0x00014d37) set_value_pane_cp_ParamLimits

0x8247,	// (0x00014d37) set_value_pane_cp

0x4170,	// (0x00010c60) list_setting_number_pane_g1_ParamLimits

0x4170,	// (0x00010c60) list_setting_number_pane_g1

0x801a,	// (0x00014b0a) list_setting_number_pane_g2_ParamLimits

0x801a,	// (0x00014b0a) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x0001c147) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x0001c147) list_setting_number_pane_g

0x8253,	// (0x00014d43) list_setting_number_pane_t1_ParamLimits

0x8253,	// (0x00014d43) list_setting_number_pane_t1

0x8267,	// (0x00014d57) list_setting_number_pane_t2_ParamLimits

0x8267,	// (0x00014d57) list_setting_number_pane_t2

0x827e,	// (0x00014d6e) list_setting_number_pane_t3_ParamLimits

0x827e,	// (0x00014d6e) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0001c153) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0001c153) list_setting_number_pane_t

0x8247,	// (0x00014d37) set_value_pane_ParamLimits

0x8247,	// (0x00014d37) set_value_pane

0x417c,	// (0x00010c6c) bg_set_opt_pane_ParamLimits

0x417c,	// (0x00010c6c) bg_set_opt_pane

0x419d,	// (0x00010c8d) set_value_pane_t1

0x41ab,	// (0x00010c9b) slider_set_pane_cp3

0x82c1,	// (0x00014db1) volume_small_pane_cp

0x41b4,	// (0x00010ca4) list_form_gen_pane

0x41bd,	// (0x00010cad) scroll_pane_cp8

0x82ca,	// (0x00014dba) form_field_data_pane_ParamLimits

0x82ca,	// (0x00014dba) form_field_data_pane

0x82e2,	// (0x00014dd2) form_field_data_wide_pane_ParamLimits

0x82e2,	// (0x00014dd2) form_field_data_wide_pane

0x8303,	// (0x00014df3) form_field_popup_pane_ParamLimits

0x8303,	// (0x00014df3) form_field_popup_pane

0x8323,	// (0x00014e13) form_field_popup_wide_pane_ParamLimits

0x8323,	// (0x00014e13) form_field_popup_wide_pane

0x41de,	// (0x00010cce) form_field_slider_pane_ParamLimits

0x41de,	// (0x00010cce) form_field_slider_pane

0x8340,	// (0x00014e30) form_field_slider_wide_pane_ParamLimits

0x8340,	// (0x00014e30) form_field_slider_wide_pane

0x41f1,	// (0x00010ce1) data_form_pane

0x835d,	// (0x00014e4d) form_field_data_pane_t1

0x41fd,	// (0x00010ced) input_focus_pane

0x420b,	// (0x00010cfb) data_form_wide_pane

0x423c,	// (0x00010d2c) form_field_data_wide_pane_t1

0x407b,	// (0x00010b6b) input_focus_pane_cp6

0x8375,	// (0x00014e65) form_field_popup_pane_t1

0x41fd,	// (0x00010ced) input_focus_pane_cp7

0x425e,	// (0x00010d4e) list_form_pane

0x4272,	// (0x00010d62) form_field_popup_wide_pane_t1

0x41fd,	// (0x00010ced) input_focus_pane_cp8

0x4287,	// (0x00010d77) list_form_wide_pane

0x8395,	// (0x00014e85) form_field_slider_pane_t1_ParamLimits

0x8395,	// (0x00014e85) form_field_slider_pane_t1

0x83a7,	// (0x00014e97) form_field_slider_pane_t2_ParamLimits

0x83a7,	// (0x00014e97) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0001c163) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0001c163) form_field_slider_pane_t

0x3dad,	// (0x0001089d) input_focus_pane_cp9_ParamLimits

0x3dad,	// (0x0001089d) input_focus_pane_cp9

0x83b9,	// (0x00014ea9) slider_cont_pane_ParamLimits

0x83b9,	// (0x00014ea9) slider_cont_pane

0x4293,	// (0x00010d83) form_field_slider_wide_pane_t1_ParamLimits

0x4293,	// (0x00010d83) form_field_slider_wide_pane_t1

0x42a5,	// (0x00010d95) form_field_slider_wide_pane_t2_ParamLimits

0x42a5,	// (0x00010d95) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0001c168) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0001c168) form_field_slider_wide_pane_t

0x3dad,	// (0x0001089d) input_focus_pane_cp10_ParamLimits

0x3dad,	// (0x0001089d) input_focus_pane_cp10

0x83cd,	// (0x00014ebd) slider_cont_pane_cp1_ParamLimits

0x83cd,	// (0x00014ebd) slider_cont_pane_cp1

0x83e1,	// (0x00014ed1) slider_form_pane_cp

0x42b7,	// (0x00010da7) input_focus_pane_g1

0x42bf,	// (0x00010daf) input_focus_pane_g2

0x42c7,	// (0x00010db7) input_focus_pane_g3

0x42cf,	// (0x00010dbf) input_focus_pane_g4

0x42d7,	// (0x00010dc7) input_focus_pane_g5

0x42df,	// (0x00010dcf) input_focus_pane_g6

0x42e7,	// (0x00010dd7) input_focus_pane_g7

0x42ef,	// (0x00010ddf) input_focus_pane_g8

0x42f7,	// (0x00010de7) input_focus_pane_g9

0x3bc6,	// (0x000106b6) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0001c16d) input_focus_pane_g

0x9af3,	// (0x000165e3) wait_border_pane_g3_copy1

0x83e9,	// (0x00014ed9) data_form_pane_t1

0x3bc6,	// (0x000106b6) wait_anim_pane_g1_copy1

0xaa1f,	// (0x0001750f) data_form_wide_pane_t1

0x8404,	// (0x00014ef4) list_form_graphic_pane_cp_ParamLimits

0x8404,	// (0x00014ef4) list_form_graphic_pane_cp

0xa9f4,	// (0x000174e4) slider_form_pane_g1

0xa9fd,	// (0x000174ed) slider_form_pane_g2

0x0006,

0xf980,	// (0x0001c470) slider_form_pane_g

0x8418,	// (0x00014f08) list_form_graphic_pane_ParamLimits

0x8418,	// (0x00014f08) list_form_graphic_pane

0x842f,	// (0x00014f1f) list_form_graphic_pane_g1

0x8437,	// (0x00014f27) list_form_graphic_pane_t1_ParamLimits

0x8437,	// (0x00014f27) list_form_graphic_pane_t1

0x3dbb,	// (0x000108ab) list_highlight_pane_cp5_ParamLimits

0x3dbb,	// (0x000108ab) list_highlight_pane_cp5

0x844c,	// (0x00014f3c) find_pane_g1

0x42ff,	// (0x00010def) input_find_pane

0x8455,	// (0x00014f45) input_find_pane_g1_ParamLimits

0x8455,	// (0x00014f45) input_find_pane_g1

0x8461,	// (0x00014f51) input_find_pane_t1_ParamLimits

0x8461,	// (0x00014f51) input_find_pane_t1

0x8476,	// (0x00014f66) input_find_pane_t2_ParamLimits

0x8476,	// (0x00014f66) input_find_pane_t2

0x0001,

0xf692,	// (0x0001c182) input_find_pane_t_ParamLimits

0xf692,	// (0x0001c182) input_find_pane_t

0x4308,	// (0x00010df8) input_focus_pane_cp5_ParamLimits

0x4308,	// (0x00010df8) input_focus_pane_cp5

0x4316,	// (0x00010e06) bg_popup_window_pane_cp2_ParamLimits

0x4316,	// (0x00010e06) bg_popup_window_pane_cp2

0x4323,	// (0x00010e13) listscroll_menu_pane_ParamLimits

0x4323,	// (0x00010e13) listscroll_menu_pane

0x8497,	// (0x00014f87) popup_submenu_window_ParamLimits

0x8497,	// (0x00014f87) popup_submenu_window

0x432f,	// (0x00010e1f) find_popup_pane_g1

0x84bf,	// (0x00014faf) input_popup_find_pane_cp

0x4308,	// (0x00010df8) input_focus_pane_cp4_ParamLimits

0x4308,	// (0x00010df8) input_focus_pane_cp4

0x4337,	// (0x00010e27) input_popup_find_pane_t1_ParamLimits

0x4337,	// (0x00010e27) input_popup_find_pane_t1

0x3d3f,	// (0x0001082f) bg_popup_sub_pane_cp

0x4365,	// (0x00010e55) listscroll_popup_sub_pane

0x436d,	// (0x00010e5d) list_submenu_pane_ParamLimits

0x436d,	// (0x00010e5d) list_submenu_pane

0x437e,	// (0x00010e6e) scroll_pane_cp4

0x84d7,	// (0x00014fc7) list_single_popup_submenu_pane_ParamLimits

0x84d7,	// (0x00014fc7) list_single_popup_submenu_pane

0x4434,	// (0x00010f24) list_single_popup_submenu_pane_g1

0x84eb,	// (0x00014fdb) list_single_popup_submenu_pane_t1_ParamLimits

0x84eb,	// (0x00014fdb) list_single_popup_submenu_pane_t1

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp1_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp1

0x4386,	// (0x00010e76) tabs_2_active_pane_g1

0x8500,	// (0x00014ff0) tabs_2_active_pane_t1

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp1_ParamLimits

0x3dbb,	// (0x000108ab) bg_passive_tab_pane_cp1

0x4386,	// (0x00010e76) tabs_2_passive_pane_g1

0x8500,	// (0x00014ff0) tabs_2_passive_pane_t1

0x4426,	// (0x00010f16) bg_active_tab_pane_cp4

0x8512,	// (0x00015002) tabs_2_long_active_pane_t1

0x8525,	// (0x00015015) bg_passive_tab_pane_cp4

0x653b,	// (0x0001302b) list_single_midp_graphic_pane_g4_ParamLimits

0x4426,	// (0x00010f16) bg_active_tab_pane_cp5

0x8531,	// (0x00015021) tabs_3_long_active_pane_t1

0x8525,	// (0x00015015) bg_passive_tab_pane_cp5

0x653b,	// (0x0001302b) list_single_midp_graphic_pane_g4

0x3dbb,	// (0x000108ab) bg_popup_window_pane_cp13_ParamLimits

0x3dbb,	// (0x000108ab) bg_popup_window_pane_cp13

0x438e,	// (0x00010e7e) listscroll_popup_fast_pane_ParamLimits

0x438e,	// (0x00010e7e) listscroll_popup_fast_pane

0x439a,	// (0x00010e8a) grid_popup_fast_pane_ParamLimits

0x439a,	// (0x00010e8a) grid_popup_fast_pane

0x43ac,	// (0x00010e9c) scroll_pane_cp9_ParamLimits

0x43ac,	// (0x00010e9c) scroll_pane_cp9

0xc946,	// (0x00019436) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc946,	// (0x00019436) list_single_graphic_hl_pane_t1_cp2

0x43bf,	// (0x00010eaf) input_focus_pane_cp20_ParamLimits

0x43bf,	// (0x00010eaf) input_focus_pane_cp20

0x43cd,	// (0x00010ebd) query_popup_data_pane_t1_ParamLimits

0x43cd,	// (0x00010ebd) query_popup_data_pane_t1

0x43e0,	// (0x00010ed0) query_popup_data_pane_t2_ParamLimits

0x43e0,	// (0x00010ed0) query_popup_data_pane_t2

0x443c,	// (0x00010f2c) query_popup_data_pane_t3_ParamLimits

0x443c,	// (0x00010f2c) query_popup_data_pane_t3

0x447d,	// (0x00010f6d) query_popup_data_pane_t4_ParamLimits

0x447d,	// (0x00010f6d) query_popup_data_pane_t4

0x44b9,	// (0x00010fa9) query_popup_data_pane_t5_ParamLimits

0x44b9,	// (0x00010fa9) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0001c187) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0001c187) query_popup_data_pane_t

0x42b7,	// (0x00010da7) bg_set_opt_pane_g1

0x42bf,	// (0x00010daf) bg_set_opt_pane_g2

0x42c7,	// (0x00010db7) bg_set_opt_pane_g3

0x42cf,	// (0x00010dbf) bg_set_opt_pane_g4

0x42d7,	// (0x00010dc7) bg_set_opt_pane_g5

0x42df,	// (0x00010dcf) bg_set_opt_pane_g6

0x42e7,	// (0x00010dd7) bg_set_opt_pane_g7

0x42ef,	// (0x00010ddf) bg_set_opt_pane_g8

0x42f7,	// (0x00010de7) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x0001c192) bg_set_opt_pane_g

0x5b4f,	// (0x0001263f) control_top_pane_stacon_ParamLimits

0x5b4f,	// (0x0001263f) control_top_pane_stacon

0x5ba2,	// (0x00012692) signal_pane_stacon_ParamLimits

0x5ba2,	// (0x00012692) signal_pane_stacon

0x8806,	// (0x000152f6) stacon_top_pane_g1_ParamLimits

0x8806,	// (0x000152f6) stacon_top_pane_g1

0x5bc7,	// (0x000126b7) title_pane_stacon_ParamLimits

0x5bc7,	// (0x000126b7) title_pane_stacon

0x5bf1,	// (0x000126e1) uni_indicator_pane_stacon_ParamLimits

0x5bf1,	// (0x000126e1) uni_indicator_pane_stacon

0x5c06,	// (0x000126f6) battery_pane_stacon_ParamLimits

0x5c06,	// (0x000126f6) battery_pane_stacon

0x5c4a,	// (0x0001273a) control_bottom_pane_stacon_ParamLimits

0x5c4a,	// (0x0001273a) control_bottom_pane_stacon

0x5c6d,	// (0x0001275d) navi_pane_stacon_ParamLimits

0x5c6d,	// (0x0001275d) navi_pane_stacon

0x8828,	// (0x00015318) stacon_bottom_pane_g1_ParamLimits

0x8828,	// (0x00015318) stacon_bottom_pane_g1

0x58bb,	// (0x000123ab) aid_levels_signal_lsc_ParamLimits

0x58bb,	// (0x000123ab) aid_levels_signal_lsc

0x58d1,	// (0x000123c1) signal_pane_stacon_g1_ParamLimits

0x58d1,	// (0x000123c1) signal_pane_stacon_g1

0x58e5,	// (0x000123d5) signal_pane_stacon_g2_ParamLimits

0x58e5,	// (0x000123d5) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0001c1a5) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0001c1a5) signal_pane_stacon_g

0x591a,	// (0x0001240a) title_pane_stacon_t1_ParamLimits

0x591a,	// (0x0001240a) title_pane_stacon_t1

0x4595,	// (0x00011085) uni_indicator_pane_stacon_g1

0x459f,	// (0x0001108f) uni_indicator_pane_stacon_g2

0x4581,	// (0x00011071) uni_indicator_pane_stacon_g3

0x458b,	// (0x0001107b) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0001c1b1) uni_indicator_pane_stacon_g

0x593f,	// (0x0001242f) control_top_pane_stacon_g1

0x5947,	// (0x00012437) control_top_pane_stacon_t1_ParamLimits

0x5947,	// (0x00012437) control_top_pane_stacon_t1

0x597e,	// (0x0001246e) aid_levels_battery_lsc_ParamLimits

0x597e,	// (0x0001246e) aid_levels_battery_lsc

0x5995,	// (0x00012485) battery_pane_stacon_g1_ParamLimits

0x5995,	// (0x00012485) battery_pane_stacon_g1

0x59a8,	// (0x00012498) battery_pane_stacon_g2_ParamLimits

0x59a8,	// (0x00012498) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001c1ba) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c1ba) battery_pane_stacon_g

0x59e6,	// (0x000124d6) navi_icon_pane_stacon

0x59fa,	// (0x000124ea) navi_navi_pane_stacon

0x59e6,	// (0x000124d6) navi_text_pane_stacon

0x593f,	// (0x0001242f) control_bottom_pane_stacon_g1

0x5a0e,	// (0x000124fe) control_bottom_pane_stacon_t1_ParamLimits

0x5a0e,	// (0x000124fe) control_bottom_pane_stacon_t1

0x855d,	// (0x0001504d) grid_app_pane_ParamLimits

0x855d,	// (0x0001504d) grid_app_pane

0x857f,	// (0x0001506f) scroll_pane_cp15_ParamLimits

0x857f,	// (0x0001506f) scroll_pane_cp15

0x8592,	// (0x00015082) cell_app_pane_ParamLimits

0x8592,	// (0x00015082) cell_app_pane

0x85ba,	// (0x000150aa) cell_app_pane_g1_ParamLimits

0x85ba,	// (0x000150aa) cell_app_pane_g1

0x46c9,	// (0x000111b9) cell_app_pane_g2_ParamLimits

0x46c9,	// (0x000111b9) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x0001c1bf) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x0001c1bf) cell_app_pane_g

0x85de,	// (0x000150ce) cell_app_pane_t1_ParamLimits

0x85de,	// (0x000150ce) cell_app_pane_t1

0x46d5,	// (0x000111c5) grid_highlight_pane_ParamLimits

0x46d5,	// (0x000111c5) grid_highlight_pane

0x42b7,	// (0x00010da7) cell_highlight_pane_g1

0x42bf,	// (0x00010daf) cell_highlight_pane_g2

0x42c7,	// (0x00010db7) cell_highlight_pane_g3

0x42cf,	// (0x00010dbf) cell_highlight_pane_g4

0x42d7,	// (0x00010dc7) cell_highlight_pane_g5

0x42df,	// (0x00010dcf) cell_highlight_pane_g6

0x42e7,	// (0x00010dd7) cell_highlight_pane_g7

0x42ef,	// (0x00010ddf) cell_highlight_pane_g8

0x42f7,	// (0x00010de7) cell_highlight_pane_g9

0x3bc6,	// (0x000106b6) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0001c16d) cell_highlight_pane_g

0x46f0,	// (0x000111e0) bg_scroll_pane

0x5a58,	// (0x00012548) scroll_handle_pane

0x474c,	// (0x0001123c) scroll_bg_pane_g1

0x4761,	// (0x00011251) scroll_bg_pane_g2

0x4779,	// (0x00011269) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0001c1c4) scroll_bg_pane_g

0x85f5,	// (0x000150e5) scroll_handle_focus_pane_ParamLimits

0x85f5,	// (0x000150e5) scroll_handle_focus_pane

0x474c,	// (0x0001123c) scroll_handle_pane_g1

0x478e,	// (0x0001127e) scroll_handle_pane_g2

0x4779,	// (0x00011269) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001c1cb) scroll_handle_pane_g

0x4308,	// (0x00010df8) bg_popup_sub_pane_cp21_ParamLimits

0x4308,	// (0x00010df8) bg_popup_sub_pane_cp21

0x8602,	// (0x000150f2) popup_fep_japan_predictive_window_t1_ParamLimits

0x8602,	// (0x000150f2) popup_fep_japan_predictive_window_t1

0x861c,	// (0x0001510c) popup_fep_japan_predictive_window_t2_ParamLimits

0x861c,	// (0x0001510c) popup_fep_japan_predictive_window_t2

0x864f,	// (0x0001513f) popup_fep_japan_predictive_window_t3_ParamLimits

0x864f,	// (0x0001513f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0001c1d2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0001c1d2) popup_fep_japan_predictive_window_t

0x3d3f,	// (0x0001082f) bg_popup_sub_pane_cp23

0x480d,	// (0x000112fd) listscroll_japin_cand_pane

0x47a2,	// (0x00011292) popup_fep_japan_candidate_window_t1

0x47b0,	// (0x000112a0) candidate_pane_ParamLimits

0x47b0,	// (0x000112a0) candidate_pane

0x8686,	// (0x00015176) scroll_pane_cp30

0x47c2,	// (0x000112b2) list_single_popup_jap_candidate_pane_ParamLimits

0x47c2,	// (0x000112b2) list_single_popup_jap_candidate_pane

0x3d3f,	// (0x0001082f) list_highlight_pane_cp30

0x47d7,	// (0x000112c7) list_single_popup_jap_candidate_pane_t1

0x47e6,	// (0x000112d6) level_1_signal

0x47f3,	// (0x000112e3) level_2_signal

0x4800,	// (0x000112f0) level_3_signal

0x4815,	// (0x00011305) level_4_signal

0x4822,	// (0x00011312) level_5_signal

0x482f,	// (0x0001131f) level_6_signal

0x483c,	// (0x0001132c) level_7_signal

0x47e6,	// (0x000112d6) level_1_battery

0x47f3,	// (0x000112e3) level_2_battery

0x4800,	// (0x000112f0) level_3_battery

0x4815,	// (0x00011305) level_4_battery

0x4822,	// (0x00011312) level_5_battery

0x482f,	// (0x0001131f) level_6_battery

0x483c,	// (0x0001132c) level_7_battery

0x4880,	// (0x00011370) list_menu_pane_ParamLimits

0x4880,	// (0x00011370) list_menu_pane

0x4896,	// (0x00011386) scroll_pane_cp25_ParamLimits

0x4896,	// (0x00011386) scroll_pane_cp25

0x48af,	// (0x0001139f) list_double2_graphic_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double2_graphic_pane_cp2

0x48af,	// (0x0001139f) list_double2_large_graphic_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double2_large_graphic_pane_cp2

0x48af,	// (0x0001139f) list_double2_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double2_pane_cp2

0x48af,	// (0x0001139f) list_double_graphic_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double_graphic_pane_cp2

0x48af,	// (0x0001139f) list_double_large_graphic_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double_large_graphic_pane_cp2

0x48af,	// (0x0001139f) list_double_number_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double_number_pane_cp2

0x48af,	// (0x0001139f) list_double_pane_cp2_ParamLimits

0x48af,	// (0x0001139f) list_double_pane_cp2

0x86a2,	// (0x00015192) list_single_2graphic_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_2graphic_pane_cp2

0x86a2,	// (0x00015192) list_single_graphic_heading_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_graphic_heading_pane_cp2

0x86a2,	// (0x00015192) list_single_graphic_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_graphic_pane_cp2

0x86a2,	// (0x00015192) list_single_heading_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_heading_pane_cp2

0x48bf,	// (0x000113af) list_single_large_graphic_pane_cp2_ParamLimits

0x48bf,	// (0x000113af) list_single_large_graphic_pane_cp2

0x86a2,	// (0x00015192) list_single_number_heading_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_number_heading_pane_cp2

0x86a2,	// (0x00015192) list_single_number_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_number_pane_cp2

0x86a2,	// (0x00015192) list_single_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_pane_cp2

0x4934,	// (0x00011424) bg_popup_sub_pane_cp22

0x5b07,	// (0x000125f7) popup_side_volume_key_window_g1

0x5b2b,	// (0x0001261b) popup_side_volume_key_window_t1

0x5b47,	// (0x00012637) volume_small_pane_cp1

0x3dad,	// (0x0001089d) bg_popup_sub_pane_cp24_ParamLimits

0x3dad,	// (0x0001089d) bg_popup_sub_pane_cp24

0x4964,	// (0x00011454) fep_china_uni_candidate_pane_ParamLimits

0x4964,	// (0x00011454) fep_china_uni_candidate_pane

0x4978,	// (0x00011468) fep_china_uni_entry_pane

0x4988,	// (0x00011478) popup_fep_china_uni_window_g1

0x8713,	// (0x00015203) fep_china_uni_entry_pane_g1

0x871b,	// (0x0001520b) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0001c203) fep_china_uni_entry_pane_g

0x49a4,	// (0x00011494) fep_entry_item_pane

0x49ae,	// (0x0001149e) fep_candidate_item_pane

0x8723,	// (0x00015213) fep_china_uni_candidate_pane_g1

0x49b6,	// (0x000114a6) fep_china_uni_candidate_pane_g2

0x49be,	// (0x000114ae) fep_china_uni_candidate_pane_g3

0x872b,	// (0x0001521b) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0001c208) fep_china_uni_candidate_pane_g

0x3bc6,	// (0x000106b6) fep_entry_item_pane_g1

0x49c6,	// (0x000114b6) fep_entry_item_pane_t1_ParamLimits

0x49c6,	// (0x000114b6) fep_entry_item_pane_t1

0x49dc,	// (0x000114cc) fep_candidate_item_pane_t1_ParamLimits

0x49dc,	// (0x000114cc) fep_candidate_item_pane_t1

0x49f1,	// (0x000114e1) fep_candidate_item_pane_t2_ParamLimits

0x49f1,	// (0x000114e1) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x0001c211) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x0001c211) fep_candidate_item_pane_t

0x3dbb,	// (0x000108ab) list_highlight_pane_cp31_ParamLimits

0x3dbb,	// (0x000108ab) list_highlight_pane_cp31

0x4a03,	// (0x000114f3) level_1_signal_lsc

0x4a0c,	// (0x000114fc) level_2_signal_lsc

0x4a15,	// (0x00011505) level_3_signal_lsc

0x4a1e,	// (0x0001150e) level_4_signal_lsc

0x4a27,	// (0x00011517) level_5_signal_lsc

0x4a30,	// (0x00011520) level_6_signal_lsc

0x4a39,	// (0x00011529) level_7_signal_lsc

0x4a39,	// (0x00011529) level_1_battery_lsc

0x4a42,	// (0x00011532) level_2_battery_lsc

0x4a4b,	// (0x0001153b) level_3_battery_lsc

0x4a54,	// (0x00011544) level_4_battery_lsc

0x4a5d,	// (0x0001154d) level_5_battery_lsc

0x4a66,	// (0x00011556) level_6_battery_lsc

0x4a03,	// (0x000114f3) level_7_battery_lsc

0x4a6f,	// (0x0001155f) scroll_handle_focus_pane_g1

0x4a78,	// (0x00011568) scroll_handle_focus_pane_g2

0x4a81,	// (0x00011571) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0001c216) scroll_handle_focus_pane_g

0x8733,	// (0x00015223) list_single_2graphic_pane_g1_ParamLimits

0x8733,	// (0x00015223) list_single_2graphic_pane_g1

0x7f88,	// (0x00014a78) list_single_2graphic_pane_g2_ParamLimits

0x7f88,	// (0x00014a78) list_single_2graphic_pane_g2

0x7f0e,	// (0x000149fe) list_single_2graphic_pane_g3_ParamLimits

0x7f0e,	// (0x000149fe) list_single_2graphic_pane_g3

0x873f,	// (0x0001522f) list_single_2graphic_pane_g4_ParamLimits

0x873f,	// (0x0001522f) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0001c21d) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0001c21d) list_single_2graphic_pane_g

0x874b,	// (0x0001523b) list_single_2graphic_pane_t1_ParamLimits

0x874b,	// (0x0001523b) list_single_2graphic_pane_t1

0x8779,	// (0x00015269) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8779,	// (0x00015269) list_double2_graphic_large_graphic_pane_g1

0x8009,	// (0x00014af9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8009,	// (0x00014af9) list_double2_graphic_large_graphic_pane_g2

0x801a,	// (0x00014b0a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x801a,	// (0x00014b0a) list_double2_graphic_large_graphic_pane_g3

0x4a8a,	// (0x0001157a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4a8a,	// (0x0001157a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0001c226) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0001c226) list_double2_graphic_large_graphic_pane_g

0x8789,	// (0x00015279) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8789,	// (0x00015279) list_double2_graphic_large_graphic_pane_t1

0x879f,	// (0x0001528f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x879f,	// (0x0001528f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x0001c22f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x0001c22f) list_double2_graphic_large_graphic_pane_t

0x88ef,	// (0x000153df) popup_fast_swap_window_ParamLimits

0x88ef,	// (0x000153df) popup_fast_swap_window

0x890b,	// (0x000153fb) popup_side_volume_key_window

0x8925,	// (0x00015415) stacon_top_pane

0x892f,	// (0x0001541f) status_pane_ParamLimits

0x892f,	// (0x0001541f) status_pane

0x893d,	// (0x0001542d) status_small_pane

0x3d3f,	// (0x0001082f) control_pane

0x3d3f,	// (0x0001082f) stacon_bottom_pane

0x41bd,	// (0x00010cad) scroll_pane_cp121

0x41b4,	// (0x00010ca4) set_content_pane

0x87b1,	// (0x000152a1) bg_active_tab_pane_g1_cp1

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp1

0x87c3,	// (0x000152b3) bg_active_tab_pane_g3_cp1

0x87b1,	// (0x000152a1) bg_passive_tab_pane_g1_cp1

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp1

0x87c3,	// (0x000152b3) bg_passive_tab_pane_g3_cp1

0x87cc,	// (0x000152bc) bg_active_tab_pane_g1_cp2

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp2

0x87d5,	// (0x000152c5) bg_active_tab_pane_g3_cp2

0x87cc,	// (0x000152bc) bg_passive_tab_pane_g1_cp2

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp2

0x87d5,	// (0x000152c5) bg_passive_tab_pane_g3_cp2

0x87de,	// (0x000152ce) bg_active_tab_pane_g1_cp3

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp3

0x87e7,	// (0x000152d7) bg_active_tab_pane_g3_cp3

0x87de,	// (0x000152ce) bg_passive_tab_pane_g1_cp3

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp3

0x87e7,	// (0x000152d7) bg_passive_tab_pane_g3_cp3

0x87f0,	// (0x000152e0) bg_active_tab_pane_g1_cp4

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp4

0x87fb,	// (0x000152eb) bg_active_tab_pane_g3_cp4

0x87f0,	// (0x000152e0) bg_passive_tab_pane_g1_cp4

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp4

0x87fb,	// (0x000152eb) bg_passive_tab_pane_g3_cp4

0x8844,	// (0x00015334) bg_active_tab_pane_g1_cp5

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp5

0x884d,	// (0x0001533d) bg_active_tab_pane_g3_cp5

0x8844,	// (0x00015334) bg_passive_tab_pane_g1_cp5

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp5

0x884d,	// (0x0001533d) bg_passive_tab_pane_g3_cp5

0x8856,	// (0x00015346) list_set_graphic_pane_ParamLimits

0x8856,	// (0x00015346) list_set_graphic_pane

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp4

0x8874,	// (0x00015364) list_set_graphic_pane_g1_ParamLimits

0x8874,	// (0x00015364) list_set_graphic_pane_g1

0x8880,	// (0x00015370) list_set_graphic_pane_g2_ParamLimits

0x8880,	// (0x00015370) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0001c234) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0001c234) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001c5cc) volume_small_pane_cp_g

0x88a2,	// (0x00015392) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88a2,	// (0x00015392) list_double2_large_graphic_pane_g1_cp2

0x88ae,	// (0x0001539e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x88ae,	// (0x0001539e) list_double2_large_graphic_pane_g2_cp2

0x88bf,	// (0x000153af) list_double2_large_graphic_pane_g3_cp2

0x88c7,	// (0x000153b7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88c7,	// (0x000153b7) list_double2_large_graphic_pane_t1_cp2

0x88dd,	// (0x000153cd) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x88dd,	// (0x000153cd) list_double2_large_graphic_pane_t2_cp2

0xa5a4,	// (0x00017094) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5a4,	// (0x00017094) list_double_large_graphic_pane_g1_cp2

0xa5b5,	// (0x000170a5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5b5,	// (0x000170a5) list_double_large_graphic_pane_g2_cp2

0x8a4a,	// (0x0001553a) list_double_large_graphic_pane_g3_cp2

0xa5c6,	// (0x000170b6) list_double_large_graphic_pane_g4_cp

0xa5ce,	// (0x000170be) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa5ce,	// (0x000170be) list_double_large_graphic_pane_t1_cp2

0xa5e5,	// (0x000170d5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5e5,	// (0x000170d5) list_double_large_graphic_pane_t2_cp2

0x8948,	// (0x00015438) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8948,	// (0x00015438) list_double2_graphic_pane_g1_cp2

0x8956,	// (0x00015446) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8956,	// (0x00015446) list_double2_graphic_pane_g2_cp2

0x8967,	// (0x00015457) list_double2_graphic_pane_g3_cp2

0x8971,	// (0x00015461) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8971,	// (0x00015461) list_double2_graphic_pane_t1_cp2

0x8987,	// (0x00015477) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8987,	// (0x00015477) list_double2_graphic_pane_t2_cp2

0x4170,	// (0x00010c60) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4170,	// (0x00010c60) list_single_number_heading_pane_g1_cp2

0x8999,	// (0x00015489) list_single_number_heading_pane_g2_cp2

0x89a1,	// (0x00015491) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89a1,	// (0x00015491) list_single_number_heading_pane_t1_cp2

0x89b7,	// (0x000154a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89b7,	// (0x000154a7) list_single_number_heading_pane_t2_cp2

0x89c9,	// (0x000154b9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89c9,	// (0x000154b9) list_single_number_heading_pane_t3_cp2

0x4170,	// (0x00010c60) list_single_heading_pane_g1_cp2_ParamLimits

0x4170,	// (0x00010c60) list_single_heading_pane_g1_cp2

0x8999,	// (0x00015489) list_single_heading_pane_g2_cp2

0x89a1,	// (0x00015491) list_single_heading_pane_t1_cp2_ParamLimits

0x89a1,	// (0x00015491) list_single_heading_pane_t1_cp2

0xa3ae,	// (0x00016e9e) list_single_heading_pane_t2_cp2_ParamLimits

0xa3ae,	// (0x00016e9e) list_single_heading_pane_t2_cp2

0xa2f6,	// (0x00016de6) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2f6,	// (0x00016de6) list_double_graphic_pane_g1_cp2

0xa302,	// (0x00016df2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa302,	// (0x00016df2) list_double_graphic_pane_g2_cp2

0xa311,	// (0x00016e01) list_double_graphic_pane_g3_cp2

0xa319,	// (0x00016e09) list_double_graphic_pane_t1_cp2_ParamLimits

0xa319,	// (0x00016e09) list_double_graphic_pane_t1_cp2

0xa32f,	// (0x00016e1f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa32f,	// (0x00016e1f) list_double_graphic_pane_t2_cp2

0x8a3e,	// (0x0001552e) list_double_number_pane_g1_cp2_ParamLimits

0x8a3e,	// (0x0001552e) list_double_number_pane_g1_cp2

0x8a4a,	// (0x0001553a) list_double_number_pane_g2_cp2

0xa2ba,	// (0x00016daa) list_double_number_pane_t1_cp2_ParamLimits

0xa2ba,	// (0x00016daa) list_double_number_pane_t1_cp2

0xa2ce,	// (0x00016dbe) list_double_number_pane_t2_cp2_ParamLimits

0xa2ce,	// (0x00016dbe) list_double_number_pane_t2_cp2

0xa2e4,	// (0x00016dd4) list_double_number_pane_t3_cp2_ParamLimits

0xa2e4,	// (0x00016dd4) list_double_number_pane_t3_cp2

0xa1a3,	// (0x00016c93) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1a3,	// (0x00016c93) list_single_graphic_pane_g1_cp2

0x8aa2,	// (0x00015592) list_single_graphic_pane_g2_cp2_ParamLimits

0x8aa2,	// (0x00015592) list_single_graphic_pane_g2_cp2

0x8aae,	// (0x0001559e) list_single_graphic_pane_g3_cp2

0xa179,	// (0x00016c69) list_single_graphic_pane_t1_cp2_ParamLimits

0xa179,	// (0x00016c69) list_single_graphic_pane_t1_cp2

0x8aa2,	// (0x00015592) list_single_number_pane_g1_cp2_ParamLimits

0x8aa2,	// (0x00015592) list_single_number_pane_g1_cp2

0x8aae,	// (0x0001559e) list_single_number_pane_g2_cp2

0xa179,	// (0x00016c69) list_single_number_pane_t1_cp2_ParamLimits

0xa179,	// (0x00016c69) list_single_number_pane_t1_cp2

0xa18f,	// (0x00016c7f) list_single_number_pane_t2_cp2_ParamLimits

0xa18f,	// (0x00016c7f) list_single_number_pane_t2_cp2

0x88ae,	// (0x0001539e) list_double2_pane_g1_cp2_ParamLimits

0x88ae,	// (0x0001539e) list_double2_pane_g1_cp2

0x88bf,	// (0x000153af) list_double2_pane_g2_cp2

0x8a16,	// (0x00015506) list_double2_pane_t1_cp2_ParamLimits

0x8a16,	// (0x00015506) list_double2_pane_t1_cp2

0x8a2c,	// (0x0001551c) list_double2_pane_t2_cp2_ParamLimits

0x8a2c,	// (0x0001551c) list_double2_pane_t2_cp2

0x8a3e,	// (0x0001552e) list_double_pane_g1_cp2_ParamLimits

0x8a3e,	// (0x0001552e) list_double_pane_g1_cp2

0x8a4a,	// (0x0001553a) list_double_pane_g2_cp2

0x8a52,	// (0x00015542) list_double_pane_t1_cp2_ParamLimits

0x8a52,	// (0x00015542) list_double_pane_t1_cp2

0x8a68,	// (0x00015558) list_double_pane_t2_cp2_ParamLimits

0x8a68,	// (0x00015558) list_double_pane_t2_cp2

0x8a92,	// (0x00015582) list_single_pane_cp2_g3

0x8aa2,	// (0x00015592) list_single_pane_g1_cp2_ParamLimits

0x8aa2,	// (0x00015592) list_single_pane_g1_cp2

0x8aae,	// (0x0001559e) list_single_pane_g2_cp2

0x8ab6,	// (0x000155a6) list_single_pane_t1_cp2_ParamLimits

0x8ab6,	// (0x000155a6) list_single_pane_t1_cp2

0x8ace,	// (0x000155be) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ace,	// (0x000155be) list_single_large_graphic_pane_g1_cp2

0x8ada,	// (0x000155ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8ada,	// (0x000155ca) list_single_large_graphic_pane_g2_cp2

0x8ae6,	// (0x000155d6) list_single_large_graphic_pane_g3_cp2

0x8aee,	// (0x000155de) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8aee,	// (0x000155de) list_single_large_graphic_pane_g4_cp1

0x8b08,	// (0x000155f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b08,	// (0x000155f8) list_single_large_graphic_pane_t1_cp2

0xa145,	// (0x00016c35) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa145,	// (0x00016c35) list_single_graphic_heading_pane_g1_cp2

0xa112,	// (0x00016c02) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa112,	// (0x00016c02) list_single_graphic_heading_pane_g4_cp2

0x8aae,	// (0x0001559e) list_single_graphic_heading_pane_g5_cp2

0xa151,	// (0x00016c41) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa151,	// (0x00016c41) list_single_graphic_heading_pane_t1_cp2

0xa167,	// (0x00016c57) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa167,	// (0x00016c57) list_single_graphic_heading_pane_t2_cp2

0xa106,	// (0x00016bf6) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa106,	// (0x00016bf6) list_single_2graphic_pane_g1_cp2

0xa112,	// (0x00016c02) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa112,	// (0x00016c02) list_single_2graphic_pane_g2_cp2

0x8aae,	// (0x0001559e) list_single_2graphic_pane_g3_cp2

0xa123,	// (0x00016c13) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa123,	// (0x00016c13) list_single_2graphic_pane_g4_cp2

0xa12f,	// (0x00016c1f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa12f,	// (0x00016c1f) list_single_2graphic_pane_t1_cp2

0x3bc6,	// (0x000106b6) list_highlight_pane_g10_cp1

0x9cee,	// (0x000167de) list_highlight_pane_g1_cp1

0x9cf6,	// (0x000167e6) list_highlight_pane_g2_cp1

0x9cfe,	// (0x000167ee) list_highlight_pane_g3_cp1

0x9d06,	// (0x000167f6) list_highlight_pane_g4_cp1

0x9d0e,	// (0x000167fe) list_highlight_pane_g5_cp1

0x9d16,	// (0x00016806) list_highlight_pane_g6_cp1

0x9d1e,	// (0x0001680e) list_highlight_pane_g7_cp1

0x9d26,	// (0x00016816) list_highlight_pane_g8_cp1

0x9d2e,	// (0x0001681e) list_highlight_pane_g9_cp1

0x9c16,	// (0x00016706) form_field_slider_pane_t3

0x9c24,	// (0x00016714) form_field_slider_pane_t4

0x9c32,	// (0x00016722) slider_form_pane_ParamLimits

0x9c32,	// (0x00016722) slider_form_pane

0x3d3f,	// (0x0001082f) control_abbreviations

0x3d3f,	// (0x0001082f) control_conventions

0x3d3f,	// (0x0001082f) control_definitions

0x3d3f,	// (0x0001082f) format_table_attribute

0xa3f8,	// (0x00016ee8) bg_popup_preview_window_pane_g9

0x3d3f,	// (0x0001082f) format_table_data2

0x3d3f,	// (0x0001082f) format_table_data3

0x3d3f,	// (0x0001082f) format_table_data_example

0x0008,

0x3d3f,	// (0x0001082f) intro_purpose

0xf8e0,	// (0x0001c3d0) bg_popup_preview_window_pane_g

0x3d3f,	// (0x0001082f) texts_category

0x3d3f,	// (0x0001082f) texts_graphics

0x8b1e,	// (0x0001560e) text_digital

0x8b2d,	// (0x0001561d) text_primary

0x8b3c,	// (0x0001562c) text_primary_small

0x8b4b,	// (0x0001563b) text_secondary

0x8b5a,	// (0x0001564a) text_title

0xac06,	// (0x000176f6) bg_passive_tab_pane_g1_cp3_srt

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp3_srt

0xac0f,	// (0x000176ff) bg_passive_tab_pane_g3_cp3_srt

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp3_srt_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp3_srt

0xac18,	// (0x00017708) tabs_4_active_pane_srt_g1

0xac20,	// (0x00017710) tabs_4_active_pane_srt_t1_ParamLimits

0xac20,	// (0x00017710) tabs_4_active_pane_srt_t1

0xac06,	// (0x000176f6) bg_active_tab_pane_g1_cp3_copy1

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp3_copy1

0xac0f,	// (0x000176ff) bg_active_tab_pane_g3_cp3_copy1

0x3dbb,	// (0x000108ab) tabs_2_long_active_pane_srt_ParamLimits

0x3dbb,	// (0x000108ab) tabs_2_long_active_pane_srt

0x3dbb,	// (0x000108ab) tabs_2_long_passive_pane_srt_ParamLimits

0x3dbb,	// (0x000108ab) tabs_2_long_passive_pane_srt

0x8525,	// (0x00015015) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8525,	// (0x00015015) bg_passive_tab_pane_cp4_srt

0xa82b,	// (0x0001731b) bg_passive_tab_pane_g1_cp4_srt

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp4_srt

0xa834,	// (0x00017324) bg_passive_tab_pane_g3_cp4_srt

0x4426,	// (0x00010f16) bg_active_tab_pane_cp4_srt_ParamLimits

0x4426,	// (0x00010f16) bg_active_tab_pane_cp4_srt

0xa83d,	// (0x0001732d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa83d,	// (0x0001732d) tabs_2_long_active_pane_srt_t1

0xa82b,	// (0x0001731b) bg_active_tab_pane_g1_cp4_srt

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp4_srt

0xa834,	// (0x00017324) bg_active_tab_pane_g3_cp4_srt

0x3dad,	// (0x0001089d) tabs_3_long_active_pane_srt_ParamLimits

0x3dad,	// (0x0001089d) tabs_3_long_active_pane_srt

0x3dad,	// (0x0001089d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3dad,	// (0x0001089d) tabs_3_long_passive_pane_cp_srt

0x3dad,	// (0x0001089d) tabs_3_long_passive_pane_srt_ParamLimits

0x3dad,	// (0x0001089d) tabs_3_long_passive_pane_srt

0x8525,	// (0x00015015) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8525,	// (0x00015015) bg_passive_tab_pane_cp5_srt

0x8844,	// (0x00015334) bg_passive_tab_pane_g1_cp5_srt

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp5_srt

0x884d,	// (0x0001533d) bg_passive_tab_pane_g3_cp5_srt

0x4426,	// (0x00010f16) bg_active_tab_pane_cp5_srt_ParamLimits

0x4426,	// (0x00010f16) bg_active_tab_pane_cp5_srt

0xa819,	// (0x00017309) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa819,	// (0x00017309) tabs_3_long_active_pane_srt_t1

0x8844,	// (0x00015334) bg_active_tab_pane_g1_cp5_srt

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp5_srt

0x884d,	// (0x0001533d) bg_active_tab_pane_g3_cp5_srt

0xa80b,	// (0x000172fb) navi_text_pane_srt_t1

0xa803,	// (0x000172f3) navi_icon_pane_srt_g1

0x8d2b,	// (0x0001581b) midp_editing_number_pane_srt

0x8b69,	// (0x00015659) midp_ticker_pane_srt

0x8d33,	// (0x00015823) midp_ticker_pane_srt_g1

0x8d3b,	// (0x0001582b) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0001c253) midp_ticker_pane_srt_g

0x8d43,	// (0x00015833) midp_ticker_pane_srt_t1

0xa7f4,	// (0x000172e4) midp_editing_number_pane_t1_copy1

0x8b71,	// (0x00015661) listscroll_midp_pane

0x8b71,	// (0x00015661) midp_form_pane

0x8be3,	// (0x000156d3) midp_info_popup_window_ParamLimits

0x8be3,	// (0x000156d3) midp_info_popup_window

0x4308,	// (0x00010df8) bg_popup_sub_pane_cp50_ParamLimits

0x4308,	// (0x00010df8) bg_popup_sub_pane_cp50

0x992a,	// (0x0001641a) listscroll_midp_info_pane_ParamLimits

0x992a,	// (0x0001641a) listscroll_midp_info_pane

0x990a,	// (0x000163fa) listscroll_form_midp_pane_ParamLimits

0x990a,	// (0x000163fa) listscroll_form_midp_pane

0x9916,	// (0x00016406) scroll_bar_cp050

0x98ea,	// (0x000163da) list_midp_pane

0xb958,	// (0x00018448) signal_pane_g2_cp

0x9824,	// (0x00016314) listscroll_midp_info_pane_t1_ParamLimits

0x9824,	// (0x00016314) listscroll_midp_info_pane_t1

0x983c,	// (0x0001632c) listscroll_midp_info_pane_t2_ParamLimits

0x983c,	// (0x0001632c) listscroll_midp_info_pane_t2

0x987a,	// (0x0001636a) listscroll_midp_info_pane_t3_ParamLimits

0x987a,	// (0x0001636a) listscroll_midp_info_pane_t3

0x98b4,	// (0x000163a4) listscroll_midp_info_pane_t4_ParamLimits

0x98b4,	// (0x000163a4) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0001c30b) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0001c30b) listscroll_midp_info_pane_t

0x437e,	// (0x00010e6e) scroll_pane_cp21

0x97c4,	// (0x000162b4) form_midp_field_choice_group_pane

0x97cd,	// (0x000162bd) form_midp_field_text_pane

0x980a,	// (0x000162fa) form_midp_field_time_pane

0x9812,	// (0x00016302) form_midp_gauge_slider_pane

0x981b,	// (0x0001630b) form_midp_gauge_wait_pane

0x3d3f,	// (0x0001082f) form_midp_image_pane

0x9792,	// (0x00016282) list_single_midp_pane_ParamLimits

0x9792,	// (0x00016282) list_single_midp_pane

0x9747,	// (0x00016237) form_midp_field_text_pane_t1

0x9502,	// (0x00015ff2) input_focus_pane_cp050

0x9781,	// (0x00016271) list_midp_form_text_pane

0x9716,	// (0x00016206) form_midp_field_choice_group_pane_t1

0x9724,	// (0x00016214) input_focus_pane_cp051

0x9738,	// (0x00016228) list_midp_choice_pane

0x3d3f,	// (0x0001082f) status_idle_pane

0x96fa,	// (0x000161ea) form_midp_field_time_pane_t1

0x3bc6,	// (0x000106b6) wait_anim_pane_g2_copy1

0x9708,	// (0x000161f8) form_midp_field_time_pane_t2

0x0001,

0x8c93,	// (0x00015783) aid_navinavi_width_2_pane

0xf816,	// (0x0001c306) form_midp_field_time_pane_t

0x3d3f,	// (0x0001082f) input_focus_pane_cp052

0x3d3f,	// (0x0001082f) bg_input_focus_pane_cp040

0x96ba,	// (0x000161aa) form_midp_gauge_slider_pane_t1

0x96c8,	// (0x000161b8) form_midp_gauge_slider_pane_t2

0x96d6,	// (0x000161c6) form_midp_gauge_slider_pane_t3

0x96e4,	// (0x000161d4) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0001c2fd) form_midp_gauge_slider_pane_t

0x96f2,	// (0x000161e2) form_midp_slider_pane

0x3dbb,	// (0x000108ab) bg_input_focus_pane_cp041_ParamLimits

0x3dbb,	// (0x000108ab) bg_input_focus_pane_cp041

0x9687,	// (0x00016177) form_midp_gauge_wait_pane_t1_ParamLimits

0x9687,	// (0x00016177) form_midp_gauge_wait_pane_t1

0x9699,	// (0x00016189) form_midp_gauge_wait_pane_t2_ParamLimits

0x9699,	// (0x00016189) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0001c2f8) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0001c2f8) form_midp_gauge_wait_pane_t

0x96ab,	// (0x0001619b) form_midp_wait_pane_ParamLimits

0x96ab,	// (0x0001619b) form_midp_wait_pane

0x9651,	// (0x00016141) form_midp_image_pane_g1

0x965a,	// (0x0001614a) form_midp_image_pane_t1

0x9669,	// (0x00016159) form_midp_image_pane_t2

0x9678,	// (0x00016168) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0001c2f1) form_midp_image_pane_t

0x9639,	// (0x00016129) list_single_midp_pane_g1

0x9642,	// (0x00016132) list_single_midp_pane_t1

0x9610,	// (0x00016100) list_midp_form_item_pane_ParamLimits

0x9610,	// (0x00016100) list_midp_form_item_pane

0x8c3b,	// (0x0001572b) list_midp_form_item_pane_t1

0x8c4a,	// (0x0001573a) midp_ticker_pane_g1

0x8c56,	// (0x00015746) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0001c239) midp_ticker_pane_g

0x8c62,	// (0x00015752) midp_ticker_pane_t1

0xaa74,	// (0x00017564) midp_editing_number_pane_t1

0xaa52,	// (0x00017542) midp_editing_number_pane

0xaa61,	// (0x00017551) midp_ticker_pane

0xa7d2,	// (0x000172c2) ai_message_heading_pane

0x3d3f,	// (0x0001082f) bg_popup_window_pane_cp14

0xa7da,	// (0x000172ca) listscroll_ai_message_pane

0xa75c,	// (0x0001724c) ai_message_heading_pane_g1_ParamLimits

0xa75c,	// (0x0001724c) ai_message_heading_pane_g1

0xa768,	// (0x00017258) ai_message_heading_pane_g2_ParamLimits

0xa768,	// (0x00017258) ai_message_heading_pane_g2

0xa774,	// (0x00017264) ai_message_heading_pane_g3_ParamLimits

0xa774,	// (0x00017264) ai_message_heading_pane_g3

0xa780,	// (0x00017270) ai_message_heading_pane_g4_ParamLimits

0xa780,	// (0x00017270) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0001c432) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0001c432) ai_message_heading_pane_g

0xa78c,	// (0x0001727c) ai_message_heading_pane_t1_ParamLimits

0xa78c,	// (0x0001727c) ai_message_heading_pane_t1

0xa7a6,	// (0x00017296) ai_message_heading_pane_t2_ParamLimits

0xa7a6,	// (0x00017296) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0001c43b) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0001c43b) ai_message_heading_pane_t

0xa7b8,	// (0x000172a8) bg_popup_heading_pane_cp1_ParamLimits

0xa7b8,	// (0x000172a8) bg_popup_heading_pane_cp1

0xa74a,	// (0x0001723a) list_ai_message_pane_ParamLimits

0xa74a,	// (0x0001723a) list_ai_message_pane

0x437e,	// (0x00010e6e) scroll_pane_cp10

0xa6e6,	// (0x000171d6) list_ai_message_pane_g1

0xa6ee,	// (0x000171de) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0001c40f) list_ai_message_pane_g

0xa6f6,	// (0x000171e6) list_ai_message_pane_t1_ParamLimits

0xa6f6,	// (0x000171e6) list_ai_message_pane_t1

0xa70b,	// (0x000171fb) list_ai_message_pane_t2_ParamLimits

0xa70b,	// (0x000171fb) list_ai_message_pane_t2

0xa720,	// (0x00017210) list_ai_message_pane_t3_ParamLimits

0xa720,	// (0x00017210) list_ai_message_pane_t3

0xa735,	// (0x00017225) list_ai_message_pane_t4_ParamLimits

0xa735,	// (0x00017225) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0001c414) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0001c414) list_ai_message_pane_t

0xa6d1,	// (0x000171c1) cell_ai_soft_ind_pane_ParamLimits

0xa6d1,	// (0x000171c1) cell_ai_soft_ind_pane

0x8c74,	// (0x00015764) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c74,	// (0x00015764) cell_ai_soft_ind_pane_g1

0x3d3f,	// (0x0001082f) grid_highlight_cp1

0x8c81,	// (0x00015771) text_secondary_cp56_ParamLimits

0x8c81,	// (0x00015771) text_secondary_cp56

0xa6a6,	// (0x00017196) example_general_pane_ParamLimits

0xa6a6,	// (0x00017196) example_general_pane

0xa6b2,	// (0x000171a2) example_parent_pane_g1_ParamLimits

0xa6b2,	// (0x000171a2) example_parent_pane_g1

0xa6be,	// (0x000171ae) example_parent_pane_t1_ParamLimits

0xa6be,	// (0x000171ae) example_parent_pane_t1

0x624c,	// (0x00012d3c) popup_preview_text_window_ParamLimits

0x624c,	// (0x00012d3c) popup_preview_text_window

0x8a9a,	// (0x0001558a) list_single_pane_cp2_g4

0x3fa7,	// (0x00010a97) bg_popup_preview_window_pane_ParamLimits

0x3fa7,	// (0x00010a97) bg_popup_preview_window_pane

0xa400,	// (0x00016ef0) popup_preview_text_window_t1_ParamLimits

0xa400,	// (0x00016ef0) popup_preview_text_window_t1

0xa41e,	// (0x00016f0e) popup_preview_text_window_t2_ParamLimits

0xa41e,	// (0x00016f0e) popup_preview_text_window_t2

0xa467,	// (0x00016f57) popup_preview_text_window_t3_ParamLimits

0xa467,	// (0x00016f57) popup_preview_text_window_t3

0xa4ac,	// (0x00016f9c) popup_preview_text_window_t4_ParamLimits

0xa4ac,	// (0x00016f9c) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0001c3e3) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0001c3e3) popup_preview_text_window_t

0xa52a,	// (0x0001701a) scroll_pane_cp11

0x93e2,	// (0x00015ed2) bg_popup_preview_window_pane_g1

0xa3c0,	// (0x00016eb0) bg_popup_preview_window_pane_g2

0xa3c8,	// (0x00016eb8) bg_popup_preview_window_pane_g3

0xa3d0,	// (0x00016ec0) bg_popup_preview_window_pane_g4

0xa3d8,	// (0x00016ec8) bg_popup_preview_window_pane_g5

0xa3e0,	// (0x00016ed0) bg_popup_preview_window_pane_g6

0xa3e8,	// (0x00016ed8) bg_popup_preview_window_pane_g7

0xa3f0,	// (0x00016ee0) bg_popup_preview_window_pane_g8

0x544b,	// (0x00011f3b) aid_popup_width_pane

0x622a,	// (0x00012d1a) popup_midp_note_alarm_window_ParamLimits

0x622a,	// (0x00012d1a) popup_midp_note_alarm_window

0x41f1,	// (0x00010ce1) data_form_pane_ParamLimits

0x8353,	// (0x00014e43) form_field_data_pane_g1

0x835d,	// (0x00014e4d) form_field_data_pane_t1_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_ParamLimits

0x420b,	// (0x00010cfb) data_form_wide_pane_ParamLimits

0x421c,	// (0x00010d0c) form_field_data_wide_pane_g1

0x423c,	// (0x00010d2c) form_field_data_wide_pane_t1_ParamLimits

0x407b,	// (0x00010b6b) input_focus_pane_cp6_ParamLimits

0x84c9,	// (0x00014fb9) input_popup_find_pane_g1_ParamLimits

0x84c9,	// (0x00014fb9) input_popup_find_pane_g1

0x59b9,	// (0x000124a9) aid_navi_side_left_pane

0x59ce,	// (0x000124be) aid_navi_side_right_pane

0x9de9,	// (0x000168d9) bg_popup_window_pane_cp30_ParamLimits

0x9de9,	// (0x000168d9) bg_popup_window_pane_cp30

0x9e63,	// (0x00016953) popup_midp_note_alarm_window_g1_ParamLimits

0x9e63,	// (0x00016953) popup_midp_note_alarm_window_g1

0x9e93,	// (0x00016983) popup_midp_note_alarm_window_t1_ParamLimits

0x9e93,	// (0x00016983) popup_midp_note_alarm_window_t1

0x9f34,	// (0x00016a24) popup_midp_note_alarm_window_t2_ParamLimits

0x9f34,	// (0x00016a24) popup_midp_note_alarm_window_t2

0x9fe2,	// (0x00016ad2) popup_midp_note_alarm_window_t3_ParamLimits

0x9fe2,	// (0x00016ad2) popup_midp_note_alarm_window_t3

0xa00a,	// (0x00016afa) popup_midp_note_alarm_window_t4_ParamLimits

0xa00a,	// (0x00016afa) popup_midp_note_alarm_window_t4

0xa02a,	// (0x00016b1a) popup_midp_note_alarm_window_t5_ParamLimits

0xa02a,	// (0x00016b1a) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0001c380) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0001c380) popup_midp_note_alarm_window_t

0xa0d6,	// (0x00016bc6) wait_bar_pane_cp1_ParamLimits

0xa0d6,	// (0x00016bc6) wait_bar_pane_cp1

0x3d3f,	// (0x0001082f) wait_anim_pane_copy1

0x3d3f,	// (0x0001082f) wait_border_pane_copy1

0x9adf,	// (0x000165cf) wait_border_pane_g1_copy1

0x4256,	// (0x00010d46) form_field_popup_pane_g1

0x8375,	// (0x00014e65) form_field_popup_pane_t1_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_cp7_ParamLimits

0x425e,	// (0x00010d4e) list_form_pane_ParamLimits

0x426a,	// (0x00010d5a) form_field_popup_wide_pane_g1

0x4272,	// (0x00010d62) form_field_popup_wide_pane_t1_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_cp8_ParamLimits

0x4287,	// (0x00010d77) list_form_wide_pane_ParamLimits

0xac9a,	// (0x0001778a) aid_size_cell_graphic_pane

0x83e9,	// (0x00014ed9) data_form_pane_t1_ParamLimits

0xaa1f,	// (0x0001750f) data_form_wide_pane_t1_ParamLimits

0x8f8a,	// (0x00015a7a) bg_status_flat_pane

0x79ca,	// (0x000144ba) title_pane_t1_ParamLimits

0x3d75,	// (0x00010865) title_pane_t2_ParamLimits

0x3d9b,	// (0x0001088b) title_pane_t3_ParamLimits

0xf557,	// (0x0001c047) title_pane_t_ParamLimits

0x47e6,	// (0x000112d6) level_1_signal_ParamLimits

0x47f3,	// (0x000112e3) level_2_signal_ParamLimits

0x4800,	// (0x000112f0) level_3_signal_ParamLimits

0x4815,	// (0x00011305) level_4_signal_ParamLimits

0x4822,	// (0x00011312) level_5_signal_ParamLimits

0x482f,	// (0x0001131f) level_6_signal_ParamLimits

0x483c,	// (0x0001132c) level_7_signal_ParamLimits

0x47e6,	// (0x000112d6) level_1_battery_ParamLimits

0x47f3,	// (0x000112e3) level_2_battery_ParamLimits

0x4800,	// (0x000112f0) level_3_battery_ParamLimits

0x4815,	// (0x00011305) level_4_battery_ParamLimits

0x4822,	// (0x00011312) level_5_battery_ParamLimits

0x482f,	// (0x0001131f) level_6_battery_ParamLimits

0x483c,	// (0x0001132c) level_7_battery_ParamLimits

0x9cee,	// (0x000167de) bg_status_flat_pane_g1

0x9cf6,	// (0x000167e6) bg_status_flat_pane_g2

0x9cfe,	// (0x000167ee) bg_status_flat_pane_g3

0x9d06,	// (0x000167f6) bg_status_flat_pane_g4

0x9d0e,	// (0x000167fe) bg_status_flat_pane_g5

0x9d16,	// (0x00016806) bg_status_flat_pane_g6

0x9d1e,	// (0x0001680e) bg_status_flat_pane_g7

0x7a3a,	// (0x0001452a) tabs_3_active_pane_t1_ParamLimits

0x7a3a,	// (0x0001452a) tabs_3_passive_pane_t1_ParamLimits

0x7a54,	// (0x00014544) tabs_4_active_pane_t1_ParamLimits

0x7a54,	// (0x00014544) tabs_4_1_passive_pane_t1_ParamLimits

0x8500,	// (0x00014ff0) tabs_2_active_pane_t1_ParamLimits

0x8500,	// (0x00014ff0) tabs_2_passive_pane_t1_ParamLimits

0x4426,	// (0x00010f16) bg_active_tab_pane_cp4_ParamLimits

0x8512,	// (0x00015002) tabs_2_long_active_pane_t1_ParamLimits

0x8525,	// (0x00015015) bg_passive_tab_pane_cp4_ParamLimits

0x656f,	// (0x0001305f) list_single_midp_graphic_pane_t1_ParamLimits

0x4426,	// (0x00010f16) bg_active_tab_pane_cp5_ParamLimits

0x8531,	// (0x00015021) tabs_3_long_active_pane_t1_ParamLimits

0x8525,	// (0x00015015) bg_passive_tab_pane_cp5_ParamLimits

0x656f,	// (0x0001305f) list_single_midp_graphic_pane_t1

0x8f8a,	// (0x00015a7a) bg_status_flat_pane_ParamLimits

0x9053,	// (0x00015b43) indicator_pane_cp2_ParamLimits

0x9053,	// (0x00015b43) indicator_pane_cp2

0x917e,	// (0x00015c6e) navi_pane_srt_ParamLimits

0x917e,	// (0x00015c6e) navi_pane_srt

0x91a2,	// (0x00015c92) popup_clock_digital_analogue_window_cp1

0x3e19,	// (0x00010909) indicator_pane_t1

0x8b69,	// (0x00015659) copy_highlight_pane

0x8b69,	// (0x00015659) cursor_graphics_pane

0x8b69,	// (0x00015659) graphic_within_text_pane

0x8b69,	// (0x00015659) link_highlight_pane

0xa4ed,	// (0x00016fdd) popup_preview_text_window_t5_ParamLimits

0xa4ed,	// (0x00016fdd) popup_preview_text_window_t5

0x8c9b,	// (0x0001578b) cursor_digital_pane

0x8c9b,	// (0x0001578b) cursor_primary_pane

0x8cac,	// (0x0001579c) cursor_primary_small_pane

0x8cb4,	// (0x000157a4) cursor_secondary_pane

0x8cbc,	// (0x000157ac) cursor_title_pane

0x8c9b,	// (0x0001578b) link_highlight_digital_pane

0x8ca3,	// (0x00015793) link_highlight_primary_pane

0x8cac,	// (0x0001579c) link_highlight_primary_small_pane

0x8cb4,	// (0x000157a4) link_highlight_secondary_pane

0x8cbc,	// (0x000157ac) link_highlight_title_pane

0x8c9b,	// (0x0001578b) copy_highlight_digital_pane

0x8c9b,	// (0x0001578b) copy_highlight_primary_pane

0x8cac,	// (0x0001579c) copy_highlight_primary_small_pane

0x8cb4,	// (0x000157a4) copy_highlight_secondary_pane

0x8cbc,	// (0x000157ac) copy_highlight_title_pane

0x8cb4,	// (0x000157a4) graphic_text_digital_pane

0x9d8c,	// (0x0001687c) graphic_text_primary_pane

0x9d95,	// (0x00016885) graphic_text_primary_small_pane

0x8cac,	// (0x0001579c) graphic_text_secondary_pane

0x8c9b,	// (0x0001578b) graphic_text_title_pane

0x8cc4,	// (0x000157b4) cursor_primary_pane_g1

0x9d7e,	// (0x0001686e) cursor_text_primary_t1

0x9d66,	// (0x00016856) cursor_primary_small_pane_g1

0x9d70,	// (0x00016860) cursor_text_primary_small_t1

0x9d4e,	// (0x0001683e) cursor_primary_small_pane_g1_copy1

0x9d58,	// (0x00016848) cursor_text_primary_small_t1_copy1

0x9d36,	// (0x00016826) cursor_text_title_t1

0x9d44,	// (0x00016834) cursor_title_pane_g1

0x8cc4,	// (0x000157b4) cursor_digital_pane_g1

0x8cce,	// (0x000157be) cursor_text_digital_t1

0x8cdc,	// (0x000157cc) link_highlight_primary_pane_g1

0x9cdf,	// (0x000167cf) link_highlight_primary_pane_t1

0x8cdc,	// (0x000157cc) link_highlight_primary_small_pane_g1

0x8ce4,	// (0x000157d4) link_highlight_primary_small_pane_t1

0x8cdc,	// (0x000157cc) link_highlight_secondary_pane_g1

0x8cf3,	// (0x000157e3) link_highlight_secondary_pane_t1

0x9c44,	// (0x00016734) link_highlight_title_pane_g1

0x9c5b,	// (0x0001674b) link_highlight_title_pane_t1

0x9c44,	// (0x00016734) link_highlight_digital_pane_g1

0x9c4c,	// (0x0001673c) link_highlight_digital_pane_t1

0x9afe,	// (0x000165ee) copy_highlight_primary_pane_g1

0x9b24,	// (0x00016614) copy_highlight_primary_pane_t1

0x9afe,	// (0x000165ee) copy_highlight_primary_small_pane_g1

0x9b15,	// (0x00016605) copy_highlight_primary_small_pane_t1

0x8d02,	// (0x000157f2) copy_highlight_secondary_pane_g1

0x8d0a,	// (0x000157fa) copy_highlight_secondary_pane_t1

0x9afe,	// (0x000165ee) copy_highlight_title_pane_g1

0x9b06,	// (0x000165f6) copy_highlight_title_pane_t1

0x9afe,	// (0x000165ee) copy_highlight_digital_pane_g1

0xae68,	// (0x00017958) copy_highlight_digital_pane_t1

0xadbc,	// (0x000178ac) graphic_text_primary_pane_g1

0xae4c,	// (0x0001793c) graphic_text_primary_pane_t1

0xae5a,	// (0x0001794a) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0001c4af) graphic_text_primary_pane_t

0xae28,	// (0x00017918) graphic_text_primary_small_pane_g1

0xae30,	// (0x00017920) graphic_text_primary_small_pane_t1

0xae3e,	// (0x0001792e) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0001c4aa) graphic_text_primary_small_pane_t

0xae04,	// (0x000178f4) graphic_text_secondary_pane_g1

0xae0c,	// (0x000178fc) graphic_text_secondary_pane_t1

0xae1a,	// (0x0001790a) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0001c4a5) graphic_text_secondary_pane_t

0xade0,	// (0x000178d0) graphic_text_title_pane_g1

0xade8,	// (0x000178d8) graphic_text_title_pane_t1

0xadf6,	// (0x000178e6) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0001c4a0) graphic_text_title_pane_t

0xadbc,	// (0x000178ac) graphic_text_digital_pane_g1

0xadc4,	// (0x000178b4) graphic_text_digital_pane_t1

0xadd2,	// (0x000178c2) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0001c49b) graphic_text_digital_pane_t

0x3dbb,	// (0x000108ab) navi_icon_pane_srt_ParamLimits

0x3dbb,	// (0x000108ab) navi_icon_pane_srt

0x3d3f,	// (0x0001082f) navi_midp_pane_srt

0x3d3f,	// (0x0001082f) navi_navi_pane_srt

0x3dbb,	// (0x000108ab) navi_text_pane_srt_ParamLimits

0x3dbb,	// (0x000108ab) navi_text_pane_srt

0xad87,	// (0x00017877) navi_navi_icon_text_pane_srt

0xad8f,	// (0x0001787f) navi_navi_pane_srt_g1_ParamLimits

0xad8f,	// (0x0001787f) navi_navi_pane_srt_g1

0xada1,	// (0x00017891) navi_navi_pane_srt_g2_ParamLimits

0xada1,	// (0x00017891) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0001c496) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0001c496) navi_navi_pane_srt_g

0xadb3,	// (0x000178a3) navi_navi_tabs_pane_srt

0xad87,	// (0x00017877) navi_navi_text_pane_srt

0xad87,	// (0x00017877) navi_navi_volume_pane_srt

0xad78,	// (0x00017868) navi_navi_text_pane_srt_t1

0x68ef,	// (0x000133df) navi_navi_volume_pane_srt_g1

0x68f7,	// (0x000133e7) volume_small_pane_srt_ParamLimits

0x68f7,	// (0x000133e7) volume_small_pane_srt

0x5c90,	// (0x00012780) volume_small_pane_srt_g1_ParamLimits

0x5c90,	// (0x00012780) volume_small_pane_srt_g1

0x5ca0,	// (0x00012790) volume_small_pane_srt_g2_ParamLimits

0x5ca0,	// (0x00012790) volume_small_pane_srt_g2

0x5cb1,	// (0x000127a1) volume_small_pane_srt_g3_ParamLimits

0x5cb1,	// (0x000127a1) volume_small_pane_srt_g3

0x5cc2,	// (0x000127b2) volume_small_pane_srt_g4_ParamLimits

0x5cc2,	// (0x000127b2) volume_small_pane_srt_g4

0x5cd3,	// (0x000127c3) volume_small_pane_srt_g5_ParamLimits

0x5cd3,	// (0x000127c3) volume_small_pane_srt_g5

0x5ce4,	// (0x000127d4) volume_small_pane_srt_g6_ParamLimits

0x5ce4,	// (0x000127d4) volume_small_pane_srt_g6

0x5cf5,	// (0x000127e5) volume_small_pane_srt_g7_ParamLimits

0x5cf5,	// (0x000127e5) volume_small_pane_srt_g7

0x5d06,	// (0x000127f6) volume_small_pane_srt_g8_ParamLimits

0x5d06,	// (0x000127f6) volume_small_pane_srt_g8

0x5d17,	// (0x00012807) volume_small_pane_srt_g9_ParamLimits

0x5d17,	// (0x00012807) volume_small_pane_srt_g9

0x5d28,	// (0x00012818) volume_small_pane_srt_g10_ParamLimits

0x5d28,	// (0x00012818) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0001c23e) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0001c23e) volume_small_pane_srt_g

0x7c10,	// (0x00014700) query_popup_data_pane_cp2

0xad5e,	// (0x0001784e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad5e,	// (0x0001784e) navi_navi_icon_text_pane_srt_t1

0x9d8c,	// (0x0001687c) navi_tabs_2_long_pane_srt

0x9d8c,	// (0x0001687c) navi_tabs_2_pane_srt

0x9d8c,	// (0x0001687c) navi_tabs_3_long_pane_srt

0x9d8c,	// (0x0001687c) navi_tabs_3_pane_srt

0x9d8c,	// (0x0001687c) navi_tabs_4_pane_srt

0x68cf,	// (0x000133bf) tabs_2_active_pane_srt_ParamLimits

0x68cf,	// (0x000133bf) tabs_2_active_pane_srt

0x68df,	// (0x000133cf) tabs_2_passive_pane_srt_ParamLimits

0x68df,	// (0x000133cf) tabs_2_passive_pane_srt

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp1_srt

0xad2a,	// (0x0001781a) bg_passive_tab_pane_g1_cp1_srt

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp1_srt

0xad33,	// (0x00017823) bg_passive_tab_pane_g3_cp1_srt

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp1_srt_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp1_srt

0xad3c,	// (0x0001782c) tabs_2_active_pane_srt_g1

0xad44,	// (0x00017834) tabs_2_active_pane_srt_t1_ParamLimits

0xad44,	// (0x00017834) tabs_2_active_pane_srt_t1

0xad2a,	// (0x0001781a) bg_active_tab_pane_g1_cp1_srt

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp1_srt

0xad33,	// (0x00017823) bg_active_tab_pane_g3_cp1_srt

0x689c,	// (0x0001338c) tabs_3_active_pane_srt_ParamLimits

0x689c,	// (0x0001338c) tabs_3_active_pane_srt

0x68ad,	// (0x0001339d) tabs_3_passive_pane_cp_srt_ParamLimits

0x68ad,	// (0x0001339d) tabs_3_passive_pane_cp_srt

0x68be,	// (0x000133ae) tabs_3_passive_pane_srt_ParamLimits

0x68be,	// (0x000133ae) tabs_3_passive_pane_srt

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e91,	// (0x00015981) bg_passive_tab_pane_cp2_srt

0x8d19,	// (0x00015809) bg_passive_tab_pane_g1_cp2_srt

0x87ba,	// (0x000152aa) bg_passive_tab_pane_g2_cp2_srt

0x8d22,	// (0x00015812) bg_passive_tab_pane_g3_cp2_srt

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp2_srt_ParamLimits

0x3dbb,	// (0x000108ab) bg_active_tab_pane_cp2_srt

0xad10,	// (0x00017800) tabs_3_active_pane_srt_g1

0xad18,	// (0x00017808) tabs_3_active_pane_srt_t1_ParamLimits

0xad18,	// (0x00017808) tabs_3_active_pane_srt_t1

0x8d19,	// (0x00015809) bg_active_tab_pane_g1_cp2_srt

0x87ba,	// (0x000152aa) bg_active_tab_pane_g2_cp2_srt

0x8d22,	// (0x00015812) bg_active_tab_pane_g3_cp2_srt

0x6854,	// (0x00013344) tabs_4_active_pane_srt_ParamLimits

0x6854,	// (0x00013344) tabs_4_active_pane_srt

0x6866,	// (0x00013356) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6866,	// (0x00013356) tabs_4_passive_pane_cp2_srt

0x5e97,	// (0x00012987) aid_size_cell_toolbar

0x8525,	// (0x00015015) main_idle_act_pane_ParamLimits

0x605c,	// (0x00012b4c) popup_large_graphic_colour_window_ParamLimits

0x63c7,	// (0x00012eb7) popup_toolbar_window_ParamLimits

0x63c7,	// (0x00012eb7) popup_toolbar_window

0xaa9f,	// (0x0001758f) list_single_graphic_2heading_pane_ParamLimits

0xaa9f,	// (0x0001758f) list_single_graphic_2heading_pane

0x46af,	// (0x0001119f) aid_size_cell_apps_grid_lsc_pane

0x46c1,	// (0x000111b1) aid_size_cell_apps_grid_prt_pane

0x8e91,	// (0x00015981) bg_wml_button_pane_cp1_ParamLimits

0x8e91,	// (0x00015981) bg_wml_button_pane_cp1

0x9747,	// (0x00016237) form_midp_field_text_pane_t1_ParamLimits

0x9502,	// (0x00015ff2) input_focus_pane_cp050_ParamLimits

0x9781,	// (0x00016271) list_midp_form_text_pane_ParamLimits

0x9724,	// (0x00016214) input_focus_pane_cp051_ParamLimits

0x9738,	// (0x00016228) list_midp_choice_pane_ParamLimits

0x95b8,	// (0x000160a8) list_single_2graphic_pane_cp3_ParamLimits

0x95b8,	// (0x000160a8) list_single_2graphic_pane_cp3

0x95dd,	// (0x000160cd) list_single_midp_graphic_pane_ParamLimits

0x95dd,	// (0x000160cd) list_single_midp_graphic_pane

0x6474,	// (0x00012f64) list_single_graphic_2heading_pane_g1_ParamLimits

0x6474,	// (0x00012f64) list_single_graphic_2heading_pane_g1

0x6480,	// (0x00012f70) list_single_graphic_2heading_pane_g4_ParamLimits

0x6480,	// (0x00012f70) list_single_graphic_2heading_pane_g4

0x648c,	// (0x00012f7c) list_single_graphic_2heading_pane_g5_ParamLimits

0x648c,	// (0x00012f7c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0001c291) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0001c291) list_single_graphic_2heading_pane_g

0x6498,	// (0x00012f88) list_single_graphic_2heading_pane_t1_ParamLimits

0x6498,	// (0x00012f88) list_single_graphic_2heading_pane_t1

0x64ac,	// (0x00012f9c) list_single_graphic_2heading_pane_t2_ParamLimits

0x64ac,	// (0x00012f9c) list_single_graphic_2heading_pane_t2

0x64c6,	// (0x00012fb6) list_single_graphic_2heading_pane_t3_ParamLimits

0x64c6,	// (0x00012fb6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0001c298) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0001c298) list_single_graphic_2heading_pane_t

0x92fe,	// (0x00015dee) bg_popup_sub_pane_cp2

0x9328,	// (0x00015e18) grid_toobar_pane

0x64de,	// (0x00012fce) cell_toolbar_pane_ParamLimits

0x64de,	// (0x00012fce) cell_toolbar_pane

0x9386,	// (0x00015e76) cell_toolbar_pane_g1_ParamLimits

0x9386,	// (0x00015e76) cell_toolbar_pane_g1

0x939a,	// (0x00015e8a) cell_toolbar_pane_g2_ParamLimits

0x939a,	// (0x00015e8a) cell_toolbar_pane_g2

0x0001,

0xf7b6,	// (0x0001c2a6) cell_toolbar_pane_g_ParamLimits

0xf7b6,	// (0x0001c2a6) cell_toolbar_pane_g

0x93bc,	// (0x00015eac) grid_highlight_pane_cp2_ParamLimits

0x93bc,	// (0x00015eac) grid_highlight_pane_cp2

0x93d6,	// (0x00015ec6) toolbar_button_pane

0x93e2,	// (0x00015ed2) toolbar_button_pane_g1

0x93ea,	// (0x00015eda) toolbar_button_pane_g2

0x93f2,	// (0x00015ee2) toolbar_button_pane_g3

0x93fa,	// (0x00015eea) toolbar_button_pane_g4

0x9402,	// (0x00015ef2) toolbar_button_pane_g5

0x940a,	// (0x00015efa) toolbar_button_pane_g6

0x9412,	// (0x00015f02) toolbar_button_pane_g7

0x941a,	// (0x00015f0a) toolbar_button_pane_g8

0x9422,	// (0x00015f12) toolbar_button_pane_g9

0x0009,

0xf7bb,	// (0x0001c2ab) toolbar_button_pane_g

0x6516,	// (0x00013006) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6516,	// (0x00013006) list_single_2graphic_pane_g1_cp3

0x6522,	// (0x00013012) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6522,	// (0x00013012) list_single_2graphic_pane_g2_cp3

0x6533,	// (0x00013023) list_single_2graphic_pane_g3_cp3

0x653b,	// (0x0001302b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x653b,	// (0x0001302b) list_single_2graphic_pane_g4_cp3

0x6547,	// (0x00013037) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6547,	// (0x00013037) list_single_2graphic_pane_t1_cp3

0x6563,	// (0x00013053) list_single_midp_graphic_pane_g2_ParamLimits

0x6563,	// (0x00013053) list_single_midp_graphic_pane_g2

0x5e9f,	// (0x0001298f) aid_zoom_text_primary

0x5ea7,	// (0x00012997) aid_zoom_text_secondary

0x8dd3,	// (0x000158c3) status_small_pane_g7_ParamLimits

0x8dd3,	// (0x000158c3) status_small_pane_g7

0x8df6,	// (0x000158e6) status_small_pane_t1_ParamLimits

0x79ad,	// (0x0001449d) title_pane_g2

0x0003,

0xf54e,	// (0x0001c03e) title_pane_g

0x7c6a,	// (0x0001475a) aid_size_cell_colour_1_pane_ParamLimits

0x7c6a,	// (0x0001475a) aid_size_cell_colour_1_pane

0x7c7e,	// (0x0001476e) aid_size_cell_colour_2_pane_ParamLimits

0x7c7e,	// (0x0001476e) aid_size_cell_colour_2_pane

0x7c92,	// (0x00014782) aid_size_cell_colour_3_pane_ParamLimits

0x7c92,	// (0x00014782) aid_size_cell_colour_3_pane

0x7ca6,	// (0x00014796) aid_size_cell_colour_4_pane_ParamLimits

0x7ca6,	// (0x00014796) aid_size_cell_colour_4_pane

0x58f6,	// (0x000123e6) title_pane_stacon_g1_ParamLimits

0x58f6,	// (0x000123e6) title_pane_stacon_g1

0x9b7b,	// (0x0001666b) popup_note_wait_window_g3_ParamLimits

0x9b7b,	// (0x0001666b) popup_note_wait_window_g3

0x9bf1,	// (0x000166e1) popup_note_wait_window_t5_ParamLimits

0x9bf1,	// (0x000166e1) popup_note_wait_window_t5

0x3d3f,	// (0x0001082f) main_feb_china_hwr_fs_writing_pane

0x5f43,	// (0x00012a33) popup_feb_china_hwr_fs_window_ParamLimits

0x5f43,	// (0x00012a33) popup_feb_china_hwr_fs_window

0x6585,	// (0x00013075) aid_size_cell_hwr_fs_ParamLimits

0x6585,	// (0x00013075) aid_size_cell_hwr_fs

0x9502,	// (0x00015ff2) bg_popup_sub_pane_cp3_ParamLimits

0x9502,	// (0x00015ff2) bg_popup_sub_pane_cp3

0x659a,	// (0x0001308a) grid_hwr_fs_pane_ParamLimits

0x659a,	// (0x0001308a) grid_hwr_fs_pane

0x65b2,	// (0x000130a2) linegrid_hwr_fs_pane_ParamLimits

0x65b2,	// (0x000130a2) linegrid_hwr_fs_pane

0x65c2,	// (0x000130b2) cell_hwr_fs_pane_ParamLimits

0x65c2,	// (0x000130b2) cell_hwr_fs_pane

0x950e,	// (0x00015ffe) linegrid_hwr_fs_pane_g1_ParamLimits

0x950e,	// (0x00015ffe) linegrid_hwr_fs_pane_g1

0x951a,	// (0x0001600a) linegrid_hwr_fs_pane_g2_ParamLimits

0x951a,	// (0x0001600a) linegrid_hwr_fs_pane_g2

0x952c,	// (0x0001601c) linegrid_hwr_fs_pane_g3_ParamLimits

0x952c,	// (0x0001601c) linegrid_hwr_fs_pane_g3

0x65e4,	// (0x000130d4) linegrid_hwr_fs_pane_g4_ParamLimits

0x65e4,	// (0x000130d4) linegrid_hwr_fs_pane_g4

0x65fe,	// (0x000130ee) linegrid_hwr_fs_pane_g5_ParamLimits

0x65fe,	// (0x000130ee) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0001c2d6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0001c2d6) linegrid_hwr_fs_pane_g

0x9538,	// (0x00016028) cell_hwr_fs_pane_g1_ParamLimits

0x9538,	// (0x00016028) cell_hwr_fs_pane_g1

0x9238,	// (0x00015d28) cell_hwr_fs_pane_g2_ParamLimits

0x9238,	// (0x00015d28) cell_hwr_fs_pane_g2

0x954e,	// (0x0001603e) cell_hwr_fs_pane_g3_ParamLimits

0x954e,	// (0x0001603e) cell_hwr_fs_pane_g3

0x955b,	// (0x0001604b) cell_hwr_fs_pane_g4_ParamLimits

0x955b,	// (0x0001604b) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0001c2e1) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001c2e1) cell_hwr_fs_pane_g

0x6614,	// (0x00013104) cell_hwr_fs_pane_t1

0x3d3f,	// (0x0001082f) grid_highlight_pane_cp6

0x3d3f,	// (0x0001082f) main_idle_act2_pane

0x4365,	// (0x00010e55) aid_inside_area_popup_secondary

0xa210,	// (0x00016d00) aid_inside_area_window_primary_ParamLimits

0xa210,	// (0x00016d00) aid_inside_area_window_primary

0xae77,	// (0x00017967) ai2_news_ticker_pane

0xae7f,	// (0x0001796f) aid_size_cell_ai1_link_ParamLimits

0xae7f,	// (0x0001796f) aid_size_cell_ai1_link

0xae99,	// (0x00017989) popup_ai2_data_window_ParamLimits

0xae99,	// (0x00017989) popup_ai2_data_window

0xaeaf,	// (0x0001799f) popup_ai2_link_window_ParamLimits

0xaeaf,	// (0x0001799f) popup_ai2_link_window

0x9502,	// (0x00015ff2) bg_popup_sub_pane_cp4_ParamLimits

0x9502,	// (0x00015ff2) bg_popup_sub_pane_cp4

0xaec3,	// (0x000179b3) grid_ai2_link_pane_ParamLimits

0xaec3,	// (0x000179b3) grid_ai2_link_pane

0xaeda,	// (0x000179ca) popup_ai2_link_window_g1_ParamLimits

0xaeda,	// (0x000179ca) popup_ai2_link_window_g1

0xaee6,	// (0x000179d6) popup_ai2_link_window_g2_ParamLimits

0xaee6,	// (0x000179d6) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0001c4b4) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0001c4b4) popup_ai2_link_window_g

0xaef5,	// (0x000179e5) ai2_mp_button_pane

0xaefd,	// (0x000179ed) ai2_mp_volume_pane

0x9724,	// (0x00016214) bg_popup_sub_pane_cp5_ParamLimits

0x9724,	// (0x00016214) bg_popup_sub_pane_cp5

0xaf05,	// (0x000179f5) heading_ai2_gene_pane_ParamLimits

0xaf05,	// (0x000179f5) heading_ai2_gene_pane

0xaf11,	// (0x00017a01) list_ai2_gene_pane_ParamLimits

0xaf11,	// (0x00017a01) list_ai2_gene_pane

0xaf59,	// (0x00017a49) cell_ai2_link_pane_ParamLimits

0xaf59,	// (0x00017a49) cell_ai2_link_pane

0xaf6f,	// (0x00017a5f) cell_ai2_link_pane_g1

0x3d3f,	// (0x0001082f) grid_highlight_pane_cp7

0x690c,	// (0x000133fc) ai2_mp_volume_pane_g1

0xb03f,	// (0x00017b2f) ai2_mp_volume_pane_g2

0xafb4,	// (0x00017aa4) list_ai2_gene_pane_t1

0xb047,	// (0x00017b37) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0001c4cd) ai2_mp_volume_pane_g

0x6914,	// (0x00013404) volume_small_pane_cp3

0xb04f,	// (0x00017b3f) aid_size_cell_ai2_button

0xb057,	// (0x00017b47) grid_ai2_button_pane

0xb060,	// (0x00017b50) cell_ai2_button_pane_ParamLimits

0xb060,	// (0x00017b50) cell_ai2_button_pane

0x3bc6,	// (0x000106b6) cell_ai2_button_pane_g1

0x3d3f,	// (0x0001082f) grid_highlight_pane_cp8

0xafff,	// (0x00017aef) ai2_gene_pane_t1_ParamLimits

0xafff,	// (0x00017aef) ai2_gene_pane_t1

0x5e8d,	// (0x0001297d) aid_height_parent_landscape

0xa88b,	// (0x0001737b) aid_height_set_list

0xa89c,	// (0x0001738c) aid_size_parent

0xac9a,	// (0x0001778a) aid_size_cell_graphic_pane_ParamLimits

0xaf21,	// (0x00017a11) popup_ai2_data_window_g1_ParamLimits

0xaf21,	// (0x00017a11) popup_ai2_data_window_g1

0xaf2d,	// (0x00017a1d) ai2_news_ticker_pane_g1

0xaf35,	// (0x00017a25) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0001c4b9) ai2_news_ticker_pane_g

0xaf3d,	// (0x00017a2d) ai2_news_ticker_pane_t1

0xaf4b,	// (0x00017a3b) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0001c4be) ai2_news_ticker_pane_t

0xaf78,	// (0x00017a68) heading_ai2_gene_pane_g1

0xaf80,	// (0x00017a70) heading_ai2_gene_pane_t1_ParamLimits

0xaf80,	// (0x00017a70) heading_ai2_gene_pane_t1

0xaf95,	// (0x00017a85) list_highlight_pane_cp6

0xaf9d,	// (0x00017a8d) ai2_gene_pane_ParamLimits

0xaf9d,	// (0x00017a8d) ai2_gene_pane

0xafc2,	// (0x00017ab2) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0001c4c3) list_ai2_gene_pane_t

0xafd0,	// (0x00017ac0) list_highlight_pane_cp8_ParamLimits

0xafd0,	// (0x00017ac0) list_highlight_pane_cp8

0xafe1,	// (0x00017ad1) ai2_gene_pane_g1_ParamLimits

0xafe1,	// (0x00017ad1) ai2_gene_pane_g1

0xaff3,	// (0x00017ae3) ai2_gene_pane_g2_ParamLimits

0xaff3,	// (0x00017ae3) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0001c4c8) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0001c4c8) ai2_gene_pane_g

0x4126,	// (0x00010c16) scroll_pane_cp12

0x5e4a,	// (0x0001293a) control_pane_t3_ParamLimits

0x5e4a,	// (0x0001293a) control_pane_t3

0x8de7,	// (0x000158d7) status_small_pane_g8_ParamLimits

0x8de7,	// (0x000158d7) status_small_pane_g8

0x6025,	// (0x00012b15) popup_find_window_ParamLimits

0x623e,	// (0x00012d2e) popup_note_image_window_ParamLimits

0x9364,	// (0x00015e54) list_double2_graphic_pane_vc_g1_ParamLimits

0x9364,	// (0x00015e54) list_double2_graphic_pane_vc_g1

0x4137,	// (0x00010c27) list_double2_graphic_pane_vc_g2_ParamLimits

0x4137,	// (0x00010c27) list_double2_graphic_pane_vc_g2

0x4143,	// (0x00010c33) list_double2_graphic_pane_vc_g3_ParamLimits

0x4143,	// (0x00010c33) list_double2_graphic_pane_vc_g3

0x0002,

0xf7af,	// (0x0001c29f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7af,	// (0x0001c29f) list_double2_graphic_pane_vc_g

0x9370,	// (0x00015e60) list_double2_graphic_pane_vc_t1_ParamLimits

0x9370,	// (0x00015e60) list_double2_graphic_pane_vc_t1

0x4137,	// (0x00010c27) list_single_heading_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_single_heading_pane_vc_g1

0x4143,	// (0x00010c33) list_single_heading_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_single_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_single_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_single_heading_pane_vc_g

0x942a,	// (0x00015f1a) list_single_heading_pane_vc_t1_ParamLimits

0x942a,	// (0x00015f1a) list_single_heading_pane_vc_t1

0x9440,	// (0x00015f30) list_single_heading_pane_vc_t2_ParamLimits

0x9440,	// (0x00015f30) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0001c2c5) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001c2c5) list_single_heading_pane_vc_t

0x9452,	// (0x00015f42) list_setting_number_pane_vc_g1_ParamLimits

0x9452,	// (0x00015f42) list_setting_number_pane_vc_g1

0x945e,	// (0x00015f4e) list_setting_number_pane_vc_g2_ParamLimits

0x945e,	// (0x00015f4e) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2ca) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2ca) list_setting_number_pane_vc_g

0x946a,	// (0x00015f5a) list_setting_number_pane_vc_t1_ParamLimits

0x946a,	// (0x00015f5a) list_setting_number_pane_vc_t1

0x947e,	// (0x00015f6e) list_setting_number_pane_vc_t2_ParamLimits

0x947e,	// (0x00015f6e) list_setting_number_pane_vc_t2

0x949a,	// (0x00015f8a) list_setting_number_pane_vc_t3_ParamLimits

0x949a,	// (0x00015f8a) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c2cf) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c2cf) list_setting_number_pane_vc_t

0x94c6,	// (0x00015fb6) set_value_pane_vc_ParamLimits

0x94c6,	// (0x00015fb6) set_value_pane_vc

0xaa9f,	// (0x0001758f) list_double2_graphic_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double2_graphic_pane_vc

0xaa9f,	// (0x0001758f) list_double2_large_graphic_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double2_large_graphic_pane_vc

0xaa9f,	// (0x0001758f) list_double2_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double2_pane_vc

0xaa9f,	// (0x0001758f) list_double_graphic_heading_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_graphic_heading_pane_vc

0xaa9f,	// (0x0001758f) list_double_graphic_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_graphic_pane_vc

0xaa9f,	// (0x0001758f) list_double_heading_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_heading_pane_vc

0xaab1,	// (0x000175a1) list_double_large_graphic_pane_vc_ParamLimits

0xaab1,	// (0x000175a1) list_double_large_graphic_pane_vc

0xaa9f,	// (0x0001758f) list_double_number_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_number_pane_vc

0xaa9f,	// (0x0001758f) list_double_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_pane_vc

0xaa9f,	// (0x0001758f) list_double_time_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_double_time_pane_vc

0xaa9f,	// (0x0001758f) list_setting_number_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_setting_number_pane_vc

0xaa9f,	// (0x0001758f) list_setting_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_setting_pane_vc

0xaa9f,	// (0x0001758f) list_single_graphic_heading_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_single_graphic_heading_pane_vc

0xaa9f,	// (0x0001758f) list_single_heading_pane_vc_ParamLimits

0xaa9f,	// (0x0001758f) list_single_heading_pane_vc

0xaacf,	// (0x000175bf) list_single_number_heading_pane_vc_ParamLimits

0xaacf,	// (0x000175bf) list_single_number_heading_pane_vc

0xb094,	// (0x00017b84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb094,	// (0x00017b84) list_double_graphic_heading_pane_vc_g1

0x4137,	// (0x00010c27) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4137,	// (0x00010c27) list_double_graphic_heading_pane_vc_g2

0x4143,	// (0x00010c33) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4143,	// (0x00010c33) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0001c4d4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0001c4d4) list_double_graphic_heading_pane_vc_g

0xb0a0,	// (0x00017b90) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb0a0,	// (0x00017b90) list_double_graphic_heading_pane_vc_t1

0xb0b4,	// (0x00017ba4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb0b4,	// (0x00017ba4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0001c4db) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0001c4db) list_double_graphic_heading_pane_vc_t

0x9452,	// (0x00015f42) list_setting_pane_vc_g1_ParamLimits

0x9452,	// (0x00015f42) list_setting_pane_vc_g1

0x945e,	// (0x00015f4e) list_setting_pane_vc_g2_ParamLimits

0x945e,	// (0x00015f4e) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2ca) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2ca) list_setting_pane_vc_g

0xb2cc,	// (0x00017dbc) list_setting_pane_vc_t1_ParamLimits

0xb2cc,	// (0x00017dbc) list_setting_pane_vc_t1

0xb2e8,	// (0x00017dd8) list_setting_pane_vc_t2_ParamLimits

0xb2e8,	// (0x00017dd8) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001c51e) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c51e) list_setting_pane_vc_t

0x94c6,	// (0x00015fb6) set_value_pane_cp_vc_ParamLimits

0x94c6,	// (0x00015fb6) set_value_pane_cp_vc

0x4137,	// (0x00010c27) list_single_number_heading_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_single_number_heading_pane_vc_g1

0x4143,	// (0x00010c33) list_single_number_heading_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_single_number_heading_pane_vc_g

0xb302,	// (0x00017df2) list_single_number_heading_pane_vc_t1_ParamLimits

0xb302,	// (0x00017df2) list_single_number_heading_pane_vc_t1

0xb318,	// (0x00017e08) list_single_number_heading_pane_vc_t2_ParamLimits

0xb318,	// (0x00017e08) list_single_number_heading_pane_vc_t2

0xb32a,	// (0x00017e1a) list_single_number_heading_pane_vc_t3_ParamLimits

0xb32a,	// (0x00017e1a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0001c523) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0001c523) list_single_number_heading_pane_vc_t

0xb33c,	// (0x00017e2c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb33c,	// (0x00017e2c) list_single_graphic_heading_pane_vc_g1

0x4137,	// (0x00010c27) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4137,	// (0x00010c27) list_single_graphic_heading_pane_vc_g4

0x4143,	// (0x00010c33) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4143,	// (0x00010c33) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0001c52a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c52a) list_single_graphic_heading_pane_vc_g

0xb348,	// (0x00017e38) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb348,	// (0x00017e38) list_single_graphic_heading_pane_vc_t1

0xb35e,	// (0x00017e4e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb35e,	// (0x00017e4e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0001c531) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0001c531) list_single_graphic_heading_pane_vc_t

0x4137,	// (0x00010c27) list_double2_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_double2_pane_vc_g1

0x4143,	// (0x00010c33) list_double2_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_double2_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_double2_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_double2_pane_vc_g

0xb370,	// (0x00017e60) list_double2_pane_vc_t1_ParamLimits

0xb370,	// (0x00017e60) list_double2_pane_vc_t1

0xb388,	// (0x00017e78) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb388,	// (0x00017e78) list_double2_large_graphic_pane_vc_g1

0x4137,	// (0x00010c27) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4137,	// (0x00010c27) list_double2_large_graphic_pane_vc_g2

0x4143,	// (0x00010c33) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4143,	// (0x00010c33) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0001c536) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001c536) list_double2_large_graphic_pane_vc_g

0x9370,	// (0x00015e60) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9370,	// (0x00015e60) list_double2_large_graphic_pane_vc_t1

0xb394,	// (0x00017e84) list_double_time_pane_vc_g1_ParamLimits

0xb394,	// (0x00017e84) list_double_time_pane_vc_g1

0xb3a0,	// (0x00017e90) list_double_time_pane_vc_g2_ParamLimits

0xb3a0,	// (0x00017e90) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0001c53d) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0001c53d) list_double_time_pane_vc_g

0xb3ac,	// (0x00017e9c) list_double_time_pane_vc_t1_ParamLimits

0xb3ac,	// (0x00017e9c) list_double_time_pane_vc_t1

0xb3d0,	// (0x00017ec0) list_double_time_pane_vc_t2_ParamLimits

0xb3d0,	// (0x00017ec0) list_double_time_pane_vc_t2

0xb3ff,	// (0x00017eef) list_double_time_pane_vc_t3_ParamLimits

0xb3ff,	// (0x00017eef) list_double_time_pane_vc_t3

0xb411,	// (0x00017f01) list_double_time_pane_vc_t4_ParamLimits

0xb411,	// (0x00017f01) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0001c542) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0001c542) list_double_time_pane_vc_t

0x4137,	// (0x00010c27) list_double_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_double_pane_vc_g1

0x4143,	// (0x00010c33) list_double_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_double_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_double_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_double_pane_vc_g

0xb425,	// (0x00017f15) list_double_pane_vc_t1_ParamLimits

0xb425,	// (0x00017f15) list_double_pane_vc_t1

0xb439,	// (0x00017f29) list_double_pane_vc_t2_ParamLimits

0xb439,	// (0x00017f29) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0001c54b) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c54b) list_double_pane_vc_t

0x4137,	// (0x00010c27) list_double_number_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_double_number_pane_vc_g1

0x4143,	// (0x00010c33) list_double_number_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_double_number_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_double_number_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_double_number_pane_vc_g

0xb451,	// (0x00017f41) list_double_number_pane_vc_t1_ParamLimits

0xb451,	// (0x00017f41) list_double_number_pane_vc_t1

0xb425,	// (0x00017f15) list_double_number_pane_vc_t2_ParamLimits

0xb425,	// (0x00017f15) list_double_number_pane_vc_t2

0xb463,	// (0x00017f53) list_double_number_pane_vc_t3_ParamLimits

0xb463,	// (0x00017f53) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0001c550) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0001c550) list_double_number_pane_vc_t

0xb47b,	// (0x00017f6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb47b,	// (0x00017f6b) list_double_large_graphic_pane_vc_g1

0xb49d,	// (0x00017f8d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb49d,	// (0x00017f8d) list_double_large_graphic_pane_vc_g2

0xb4b1,	// (0x00017fa1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb4b1,	// (0x00017fa1) list_double_large_graphic_pane_vc_g3

0xb4c0,	// (0x00017fb0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb4c0,	// (0x00017fb0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0001c557) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001c557) list_double_large_graphic_pane_vc_g

0xb4cc,	// (0x00017fbc) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb4cc,	// (0x00017fbc) list_double_large_graphic_pane_vc_t1

0xb4e8,	// (0x00017fd8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb4e8,	// (0x00017fd8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0001c560) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0001c560) list_double_large_graphic_pane_vc_t

0x4137,	// (0x00010c27) list_double_heading_pane_vc_g1_ParamLimits

0x4137,	// (0x00010c27) list_double_heading_pane_vc_g1

0x4143,	// (0x00010c33) list_double_heading_pane_vc_g2_ParamLimits

0x4143,	// (0x00010c33) list_double_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c2c0) list_double_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c2c0) list_double_heading_pane_vc_g

0xb50a,	// (0x00017ffa) list_double_heading_pane_vc_t1_ParamLimits

0xb50a,	// (0x00017ffa) list_double_heading_pane_vc_t1

0xb51e,	// (0x0001800e) list_double_heading_pane_vc_t2_ParamLimits

0xb51e,	// (0x0001800e) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0001c565) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0001c565) list_double_heading_pane_vc_t

0xb536,	// (0x00018026) list_double_graphic_pane_vc_g1_ParamLimits

0xb536,	// (0x00018026) list_double_graphic_pane_vc_g1

0xb549,	// (0x00018039) list_double_graphic_pane_vc_g2_ParamLimits

0xb549,	// (0x00018039) list_double_graphic_pane_vc_g2

0x4137,	// (0x00010c27) list_double_graphic_pane_vc_g3_ParamLimits

0x4137,	// (0x00010c27) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0001c56a) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0001c56a) list_double_graphic_pane_vc_g

0xb566,	// (0x00018056) list_double_graphic_pane_vc_t1_ParamLimits

0xb566,	// (0x00018056) list_double_graphic_pane_vc_t1

0xb585,	// (0x00018075) list_double_graphic_pane_vc_t2_ParamLimits

0xb585,	// (0x00018075) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001c573) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001c573) list_double_graphic_pane_vc_t

0x5457,	// (0x00011f47) aid_size_cell_fastswap

0x545f,	// (0x00011f4f) aid_size_cell_touch_ParamLimits

0x545f,	// (0x00011f4f) aid_size_cell_touch

0x56c4,	// (0x000121b4) popup_fast_swap_wide_window_ParamLimits

0x56c4,	// (0x000121b4) popup_fast_swap_wide_window

0x57ca,	// (0x000122ba) touch_pane_ParamLimits

0x57ca,	// (0x000122ba) touch_pane

0x41c6,	// (0x00010cb6) button_value_adjust_pane_cp2

0x41ce,	// (0x00010cbe) button_value_adjust_pane_cp4

0x41d6,	// (0x00010cc6) form_field_data_pane_cp2

0x82f9,	// (0x00014de9) form_field_data_wide_pane_cp2

0x46f0,	// (0x000111e0) bg_scroll_pane_ParamLimits

0x5a58,	// (0x00012548) scroll_handle_pane_ParamLimits

0x5a6c,	// (0x0001255c) scroll_sc2_down_pane_ParamLimits

0x5a6c,	// (0x0001255c) scroll_sc2_down_pane

0x4736,	// (0x00011226) scroll_sc2_up_pane_ParamLimits

0x4736,	// (0x00011226) scroll_sc2_up_pane

0xba31,	// (0x00018521) grid_wheel_folder_pane_g1_ParamLimits

0xba31,	// (0x00018521) grid_wheel_folder_pane_g1

0x5c28,	// (0x00012718) clock_nsta_pane_cp2_ParamLimits

0x5c28,	// (0x00012718) clock_nsta_pane_cp2

0x8b71,	// (0x00015661) listscroll_midp_pane_ParamLimits

0x8b7d,	// (0x0001566d) midp_canvas_pane

0x8e61,	// (0x00015951) nsta_clock_indic_pane

0x8e9d,	// (0x0001598d) listscroll_form_pane_vc

0x8ea5,	// (0x00015995) listscroll_set_pane_vc_ParamLimits

0x8ea5,	// (0x00015995) listscroll_set_pane_vc

0x8fa6,	// (0x00015a96) clock_nsta_pane

0x9021,	// (0x00015b11) indicator_nsta_pane

0x92fe,	// (0x00015dee) bg_popup_sub_pane_cp2_ParamLimits

0x9312,	// (0x00015e02) find_pane_cp2_ParamLimits

0x9312,	// (0x00015e02) find_pane_cp2

0x9328,	// (0x00015e18) grid_toobar_pane_ParamLimits

0x94d6,	// (0x00015fc6) list_form_gen_pane_vc_ParamLimits

0x94d6,	// (0x00015fc6) list_form_gen_pane_vc

0x94ec,	// (0x00015fdc) scroll_pane_cp8_vc_ParamLimits

0x94ec,	// (0x00015fdc) scroll_pane_cp8_vc

0x9568,	// (0x00016058) data_form_wide_pane_vc_ParamLimits

0x9568,	// (0x00016058) data_form_wide_pane_vc

0x9574,	// (0x00016064) form_field_data_wide_pane_vc_g1

0x957c,	// (0x0001606c) form_field_data_wide_pane_vc_t1_ParamLimits

0x957c,	// (0x0001606c) form_field_data_wide_pane_vc_t1

0x41fd,	// (0x00010ced) input_focus_pane_cp6_vc_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_cp6_vc

0x98ea,	// (0x000163da) list_midp_pane_ParamLimits

0x98f6,	// (0x000163e6) scroll_pane_cp16_ParamLimits

0x98f6,	// (0x000163e6) scroll_pane_cp16

0x9958,	// (0x00016448) button_value_adjust_pane_ParamLimits

0x9958,	// (0x00016448) button_value_adjust_pane

0xa8ae,	// (0x0001739e) button_value_adjust_pane_cp6_ParamLimits

0xa8ae,	// (0x0001739e) button_value_adjust_pane_cp6

0xa9d4,	// (0x000174c4) settings_code_pane_cp_ParamLimits

0xa9d4,	// (0x000174c4) settings_code_pane_cp

0x3bc6,	// (0x000106b6) cell_touch_pane_g1

0x3bc6,	// (0x000106b6) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0001c1e4) cell_touch_pane_g

0xb072,	// (0x00017b62) cell_touch_pane_cp_ParamLimits

0xb072,	// (0x00017b62) cell_touch_pane_cp

0xb082,	// (0x00017b72) cell_touch_pane_ParamLimits

0xb082,	// (0x00017b72) cell_touch_pane

0x3bc6,	// (0x000106b6) scroll_sc2_down_pane_g1

0x3bc6,	// (0x000106b6) scroll_sc2_up_pane_g1

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp4_vc

0xb0cc,	// (0x00017bbc) list_set_graphic_pane_vc_g1_ParamLimits

0xb0cc,	// (0x00017bbc) list_set_graphic_pane_vc_g1

0xb0d8,	// (0x00017bc8) list_set_graphic_pane_vc_g2_ParamLimits

0xb0d8,	// (0x00017bc8) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0001c4e0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0001c4e0) list_set_graphic_pane_vc_g

0xb0e4,	// (0x00017bd4) text_primary_small_cp13_vc_ParamLimits

0xb0e4,	// (0x00017bd4) text_primary_small_cp13_vc

0xb0fc,	// (0x00017bec) list_set_graphic_pane_vc_ParamLimits

0xb0fc,	// (0x00017bec) list_set_graphic_pane_vc

0x3d3f,	// (0x0001082f) input_focus_pane_cp2_vc

0x3bc6,	// (0x000106b6) setting_code_pane_vc_g1

0x3dd2,	// (0x000108c2) setting_code_pane_vc_t1

0xb10f,	// (0x00017bff) set_text_pane_vc_t1_ParamLimits

0xb10f,	// (0x00017bff) set_text_pane_vc_t1

0x3d3f,	// (0x0001082f) input_focus_pane_cp1_vc

0xb12b,	// (0x00017c1b) list_set_text_pane_vc

0x3bc6,	// (0x000106b6) setting_text_pane_vc_g1

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp2_vc

0x3dc9,	// (0x000108b9) setting_slider_graphic_pane_vc_g1

0xb135,	// (0x00017c25) setting_slider_graphic_pane_vc_t1

0xb145,	// (0x00017c35) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c4e5) setting_slider_graphic_pane_vc_t

0xb155,	// (0x00017c45) slider_set_pane_cp_vc

0xb15d,	// (0x00017c4d) slider_set_pane_vc_g1

0xb166,	// (0x00017c56) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0001c4ea) slider_set_pane_vc_g

0x42b7,	// (0x00010da7) set_opt_bg_pane_g1_copy1

0x42bf,	// (0x00010daf) set_opt_bg_pane_g2_copy1

0xb192,	// (0x00017c82) set_opt_bg_pane_g3_copy1

0x42cf,	// (0x00010dbf) set_opt_bg_pane_g4_copy1

0x42d7,	// (0x00010dc7) set_opt_bg_pane_g5_copy1

0x42df,	// (0x00010dcf) set_opt_bg_pane_g6_copy1

0xb19a,	// (0x00017c8a) set_opt_bg_pane_g7_copy1

0xb1a2,	// (0x00017c92) set_opt_bg_pane_g8_copy1

0xb1aa,	// (0x00017c9a) set_opt_bg_pane_g9_copy1

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp_vc

0xb1b2,	// (0x00017ca2) setting_slider_pane_vc_t1

0xb1c1,	// (0x00017cb1) setting_slider_pane_vc_t2

0xb1d1,	// (0x00017cc1) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0001c4f9) setting_slider_pane_vc_t

0xb1e1,	// (0x00017cd1) slider_set_pane_vc

0x6622,	// (0x00013112) volume_set_pane_vc_g1

0x691d,	// (0x0001340d) volume_set_pane_vc_g2

0x6926,	// (0x00013416) volume_set_pane_vc_g3

0x692f,	// (0x0001341f) volume_set_pane_vc_g4

0x6938,	// (0x00013428) volume_set_pane_vc_g5

0x6941,	// (0x00013431) volume_set_pane_vc_g6

0x694a,	// (0x0001343a) volume_set_pane_vc_g7

0x6953,	// (0x00013443) volume_set_pane_vc_g8

0x695c,	// (0x0001344c) volume_set_pane_vc_g9

0x6965,	// (0x00013455) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0001c500) volume_set_pane_vc_g

0xb1e9,	// (0x00017cd9) volume_set_pane_vc

0xb1f1,	// (0x00017ce1) button_value_adjust_pane_cp1_vc

0xb1fb,	// (0x00017ceb) list_highlight_pane_cp2_vc

0xb204,	// (0x00017cf4) list_set_pane_vc_ParamLimits

0xb204,	// (0x00017cf4) list_set_pane_vc

0xb262,	// (0x00017d52) main_pane_set_vc_t1_ParamLimits

0xb262,	// (0x00017d52) main_pane_set_vc_t1

0xb277,	// (0x00017d67) main_pane_set_vc_t2_ParamLimits

0xb277,	// (0x00017d67) main_pane_set_vc_t2

0xb289,	// (0x00017d79) main_pane_set_vc_t3_ParamLimits

0xb289,	// (0x00017d79) main_pane_set_vc_t3

0xb29b,	// (0x00017d8b) main_pane_set_vc_t4_ParamLimits

0xb29b,	// (0x00017d8b) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0001c515) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0001c515) main_pane_set_vc_t

0xb2ad,	// (0x00017d9d) setting_code_pane_vc_ParamLimits

0xb2ad,	// (0x00017d9d) setting_code_pane_vc

0xb2bc,	// (0x00017dac) setting_slider_graphic_pane_vc

0xb2bc,	// (0x00017dac) setting_slider_pane_vc

0xb2bc,	// (0x00017dac) setting_text_pane_vc

0xb2bc,	// (0x00017dac) setting_volume_pane_vc

0xb2c4,	// (0x00017db4) scroll_pane_cp121_vc

0x41b4,	// (0x00010ca4) set_content_pane_vc

0xb5af,	// (0x0001809f) button_value_adjust_pane_g1

0xb5b8,	// (0x000180a8) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001c578) button_value_adjust_pane_g

0xb5c1,	// (0x000180b1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb5c1,	// (0x000180b1) form_field_slider_wide_pane_vc_t1

0xb5d5,	// (0x000180c5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb5d5,	// (0x000180c5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001c57d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001c57d) form_field_slider_wide_pane_vc_t

0x3dad,	// (0x0001089d) input_focus_pane_cp10_vc_ParamLimits

0x3dad,	// (0x0001089d) input_focus_pane_cp10_vc

0xb603,	// (0x000180f3) slider_cont_pane_cp1_vc_ParamLimits

0xb603,	// (0x000180f3) slider_cont_pane_cp1_vc

0xb615,	// (0x00018105) slider_form_pane_g1_cp2

0xb166,	// (0x00017c56) slider_form_pane_g2_cp2

0xb642,	// (0x00018132) form_field_slider_pane_vc_t3

0xb650,	// (0x00018140) form_field_slider_pane_vc_t4

0xb65e,	// (0x0001814e) slider_form_pane_vc_ParamLimits

0xb65e,	// (0x0001814e) slider_form_pane_vc

0xb66b,	// (0x0001815b) form_field_slider_pane_vc_t1_ParamLimits

0xb66b,	// (0x0001815b) form_field_slider_pane_vc_t1

0xb5d5,	// (0x000180c5) form_field_slider_pane_vc_t2_ParamLimits

0xb5d5,	// (0x000180c5) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001c58f) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001c58f) form_field_slider_pane_vc_t

0x3dad,	// (0x0001089d) input_focus_pane_cp9_vc_ParamLimits

0x3dad,	// (0x0001089d) input_focus_pane_cp9_vc

0xb687,	// (0x00018177) slider_cont_pane_vc_ParamLimits

0xb687,	// (0x00018177) slider_cont_pane_vc

0xb69b,	// (0x0001818b) list_form_graphic_pane_cp_vc_ParamLimits

0xb69b,	// (0x0001818b) list_form_graphic_pane_cp_vc

0x9574,	// (0x00016064) form_field_popup_wide_pane_vc_g1

0xb6b0,	// (0x000181a0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6b0,	// (0x000181a0) form_field_popup_wide_pane_vc_t1

0x41fd,	// (0x00010ced) input_focus_pane_cp8_vc_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_cp8_vc

0xb6f5,	// (0x000181e5) list_form_wide_pane_vc_ParamLimits

0xb6f5,	// (0x000181e5) list_form_wide_pane_vc

0xb701,	// (0x000181f1) list_form_graphic_pane_vc_g1

0xb709,	// (0x000181f9) list_form_graphic_pane_vc_t1_ParamLimits

0xb709,	// (0x000181f9) list_form_graphic_pane_vc_t1

0x3dbb,	// (0x000108ab) list_highlight_pane_cp5_vc_ParamLimits

0x3dbb,	// (0x000108ab) list_highlight_pane_cp5_vc

0xb725,	// (0x00018215) list_form_graphic_pane_vc_ParamLimits

0xb725,	// (0x00018215) list_form_graphic_pane_vc

0x9574,	// (0x00016064) form_field_popup_pane_vc_g1

0xb73b,	// (0x0001822b) form_field_popup_pane_vc_t1_ParamLimits

0xb73b,	// (0x0001822b) form_field_popup_pane_vc_t1

0x41fd,	// (0x00010ced) input_focus_pane_cp7_vc_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_cp7_vc

0xb752,	// (0x00018242) list_form_pane_vc_ParamLimits

0xb752,	// (0x00018242) list_form_pane_vc

0xb75e,	// (0x0001824e) data_form_pane_vc_t1_ParamLimits

0xb75e,	// (0x0001824e) data_form_pane_vc_t1

0x42b7,	// (0x00010da7) input_focus_pane_vc_g1

0x42bf,	// (0x00010daf) input_focus_pane_vc_g2

0x42c7,	// (0x00010db7) input_focus_pane_vc_g3

0x42cf,	// (0x00010dbf) input_focus_pane_vc_g4

0x42d7,	// (0x00010dc7) input_focus_pane_vc_g5

0x42df,	// (0x00010dcf) input_focus_pane_vc_g6

0x42e7,	// (0x00010dd7) input_focus_pane_vc_g7

0x42ef,	// (0x00010ddf) input_focus_pane_vc_g8

0x42f7,	// (0x00010de7) input_focus_pane_vc_g9

0x3bc6,	// (0x000106b6) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0001c16d) input_focus_pane_vc_g

0x9568,	// (0x00016058) data_form_pane_vc_ParamLimits

0x9568,	// (0x00016058) data_form_pane_vc

0x9574,	// (0x00016064) form_field_data_pane_vc_g1

0xb779,	// (0x00018269) form_field_data_pane_vc_t1_ParamLimits

0xb779,	// (0x00018269) form_field_data_pane_vc_t1

0x41fd,	// (0x00010ced) input_focus_pane_vc_ParamLimits

0x41fd,	// (0x00010ced) input_focus_pane_vc

0xb793,	// (0x00018283) button_value_adjust_pane_cp3_vc

0xb79b,	// (0x0001828b) button_value_adjust_pane_cp5_vc

0xb7a3,	// (0x00018293) form_field_data_pane_vc_ParamLimits

0xb7a3,	// (0x00018293) form_field_data_pane_vc

0xb7ba,	// (0x000182aa) form_field_data_pane_vc_cp2

0xb7c2,	// (0x000182b2) form_field_data_wide_pane_vc_ParamLimits

0xb7c2,	// (0x000182b2) form_field_data_wide_pane_vc

0xb7d8,	// (0x000182c8) form_field_data_wide_pane_vc_cp2

0xb7e0,	// (0x000182d0) form_field_popup_pane_vc_ParamLimits

0xb7e0,	// (0x000182d0) form_field_popup_pane_vc

0xb7f7,	// (0x000182e7) form_field_popup_wide_pane_vc_ParamLimits

0xb7f7,	// (0x000182e7) form_field_popup_wide_pane_vc

0xb80d,	// (0x000182fd) form_field_slider_pane_vc_ParamLimits

0xb80d,	// (0x000182fd) form_field_slider_pane_vc

0xb820,	// (0x00018310) form_field_slider_wide_pane_vc_ParamLimits

0xb820,	// (0x00018310) form_field_slider_wide_pane_vc

0xb833,	// (0x00018323) grid_touch_1_pane_ParamLimits

0xb833,	// (0x00018323) grid_touch_1_pane

0xb83f,	// (0x0001832f) grid_touch_2_pane_ParamLimits

0xb83f,	// (0x0001832f) grid_touch_2_pane

0x8e2c,	// (0x0001591c) touch_pane_g1_ParamLimits

0x8e2c,	// (0x0001591c) touch_pane_g1

0xb857,	// (0x00018347) cell_app_pane_cp_wide_ParamLimits

0xb857,	// (0x00018347) cell_app_pane_cp_wide

0xb868,	// (0x00018358) grid_popup_fast_wide_pane_ParamLimits

0xb868,	// (0x00018358) grid_popup_fast_wide_pane

0xb87c,	// (0x0001836c) scroll_pane_cp19_ParamLimits

0xb87c,	// (0x0001836c) scroll_pane_cp19

0x3d3f,	// (0x0001082f) bg_popup_window_pane_cp20

0xb890,	// (0x00018380) listscroll_popup_fast_wide_pane

0x3dbb,	// (0x000108ab) grid_indicator_nsta_pane

0xb898,	// (0x00018388) clock_nsta_pane_g1

0xb8a1,	// (0x00018391) clock_nsta_pane_t1

0xb8bd,	// (0x000183ad) cell_indicator_nsta_pane_ParamLimits

0xb8bd,	// (0x000183ad) cell_indicator_nsta_pane

0xb8ee,	// (0x000183de) cell_indicator_nsta_pane_g1

0xb8fc,	// (0x000183ec) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001c5a0) cell_indicator_nsta_pane_g

0xb909,	// (0x000183f9) clock_nsta_pane_cp

0xb912,	// (0x00018402) indicator_nsta_pane_cp

0xb91a,	// (0x0001840a) nsta_clock_indic_pane_g1

0x3e11,	// (0x00010901) grid_indicator_pane

0x867e,	// (0x0001516e) scroll_pane_cp29

0x5b77,	// (0x00012667) indicator_nsta_pane_cp2_ParamLimits

0x5b77,	// (0x00012667) indicator_nsta_pane_cp2

0x3dbb,	// (0x000108ab) main_apps_wheel_pane

0x97cd,	// (0x000162bd) form_midp_field_text_pane_ParamLimits

0x9916,	// (0x00016406) scroll_bar_cp050_ParamLimits

0xb96a,	// (0x0001845a) cell_indicator_pane_ParamLimits

0xb96a,	// (0x0001845a) cell_indicator_pane

0xb983,	// (0x00018473) cell_indicator_pane_g1

0xb98d,	// (0x0001847d) grid_wheel_folder_pane_ParamLimits

0xb98d,	// (0x0001847d) grid_wheel_folder_pane

0xb9a3,	// (0x00018493) list_wheel_apps_pane_ParamLimits

0xb9a3,	// (0x00018493) list_wheel_apps_pane

0xb9b4,	// (0x000184a4) main_apps_wheel_pane_g1_ParamLimits

0xb9b4,	// (0x000184a4) main_apps_wheel_pane_g1

0xb9c8,	// (0x000184b8) main_apps_wheel_pane_g2_ParamLimits

0xb9c8,	// (0x000184b8) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001c5bc) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001c5bc) main_apps_wheel_pane_g

0xb9e0,	// (0x000184d0) main_apps_wheel_pane_t1_ParamLimits

0xb9e0,	// (0x000184d0) main_apps_wheel_pane_t1

0xba03,	// (0x000184f3) list_wheel_apps_pane_g1

0xba0b,	// (0x000184fb) list_wheel_apps_pane_g2

0xba13,	// (0x00018503) list_wheel_apps_pane_g3

0xba1d,	// (0x0001850d) list_wheel_apps_pane_g4

0xba27,	// (0x00018517) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001c5c1) list_wheel_apps_pane_g

0x89e9,	// (0x000154d9) navi_icon_text_pane

0x8ed5,	// (0x000159c5) aid_fill_nsta

0xba4a,	// (0x0001853a) navi_icon_text_pane_g1

0xba56,	// (0x00018546) navi_icon_text_pane_t1

0x888c,	// (0x0001537c) list_set_graphic_pane_t1_ParamLimits

0x888c,	// (0x0001537c) list_set_graphic_pane_t1

0xa059,	// (0x00016b49) popup_midp_note_alarm_window_t6_ParamLimits

0xa059,	// (0x00016b49) popup_midp_note_alarm_window_t6

0xa06b,	// (0x00016b5b) popup_midp_note_alarm_window_t7_ParamLimits

0xa06b,	// (0x00016b5b) popup_midp_note_alarm_window_t7

0xa07d,	// (0x00016b6d) popup_midp_note_alarm_window_t8_ParamLimits

0xa07d,	// (0x00016b6d) popup_midp_note_alarm_window_t8

0xa08f,	// (0x00016b7f) popup_midp_note_alarm_window_t9_ParamLimits

0xa08f,	// (0x00016b7f) popup_midp_note_alarm_window_t9

0xa0a1,	// (0x00016b91) popup_midp_note_alarm_window_t10_ParamLimits

0xa0a1,	// (0x00016b91) popup_midp_note_alarm_window_t10

0xa0b3,	// (0x00016ba3) popup_midp_note_alarm_window_t11_ParamLimits

0xa0b3,	// (0x00016ba3) popup_midp_note_alarm_window_t11

0xa0c5,	// (0x00016bb5) scroll_pane_cp17_ParamLimits

0xa0c5,	// (0x00016bb5) scroll_pane_cp17

0x6622,	// (0x00013112) volume_small_pane_cp_g1

0x696e,	// (0x0001345e) volume_small_pane_cp_g2

0x6977,	// (0x00013467) volume_small_pane_cp_g3

0x6980,	// (0x00013470) volume_small_pane_cp_g4

0x6989,	// (0x00013479) volume_small_pane_cp_g5

0x6938,	// (0x00013428) volume_small_pane_cp_g6

0x6992,	// (0x00013482) volume_small_pane_cp_g7

0x699b,	// (0x0001348b) volume_small_pane_cp_g8

0x69a4,	// (0x00013494) volume_small_pane_cp_g9

0x69ad,	// (0x0001349d) volume_small_pane_cp_g10

0x8c4a,	// (0x0001573a) midp_ticker_pane_g1_ParamLimits

0x8c56,	// (0x00015746) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0001c239) midp_ticker_pane_g_ParamLimits

0x8c62,	// (0x00015752) midp_ticker_pane_t1_ParamLimits

0x8eeb,	// (0x000159db) aid_fill_nsta_2

0x9902,	// (0x000163f2) list_form2_midp_pane

0xaa52,	// (0x00017542) midp_editing_number_pane_ParamLimits

0xaa61,	// (0x00017551) midp_ticker_pane_ParamLimits

0xba68,	// (0x00018558) form2_midp_field_pane

0xba8c,	// (0x0001857c) scroll_pane_cp51

0xbaac,	// (0x0001859c) form2_midp_button_pane_ParamLimits

0xbaac,	// (0x0001859c) form2_midp_button_pane

0xbabe,	// (0x000185ae) form2_midp_content_pane_ParamLimits

0xbabe,	// (0x000185ae) form2_midp_content_pane

0xbad8,	// (0x000185c8) form2_midp_field_choice_group_pane

0xbae0,	// (0x000185d0) form2_midp_field_pane_g1

0xbae8,	// (0x000185d8) form2_midp_field_pane_g2

0xbaf0,	// (0x000185e0) form2_midp_field_pane_g3

0xbaf8,	// (0x000185e8) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001c5e6) form2_midp_field_pane_g

0xbb00,	// (0x000185f0) form2_midp_gauge_slider_pane

0xbb08,	// (0x000185f8) form2_midp_gauge_wait_pane

0xbb10,	// (0x00018600) form2_midp_image_pane_ParamLimits

0xbb10,	// (0x00018600) form2_midp_image_pane

0xbb2b,	// (0x0001861b) form2_midp_label_pane_ParamLimits

0xbb2b,	// (0x0001861b) form2_midp_label_pane

0xbb44,	// (0x00018634) form2_midp_label_pane_cp_ParamLimits

0xbb44,	// (0x00018634) form2_midp_label_pane_cp

0xbb65,	// (0x00018655) form2_midp_string_pane_ParamLimits

0xbb65,	// (0x00018655) form2_midp_string_pane

0xbb77,	// (0x00018667) form2_midp_text_pane_ParamLimits

0xbb77,	// (0x00018667) form2_midp_text_pane

0xbb92,	// (0x00018682) form2_midp_time_pane

0xbba2,	// (0x00018692) input_focus_pane_cp51_ParamLimits

0xbba2,	// (0x00018692) input_focus_pane_cp51

0xbbba,	// (0x000186aa) form2_midp_label_pane_t1_ParamLimits

0xbbba,	// (0x000186aa) form2_midp_label_pane_t1

0xbbfb,	// (0x000186eb) form2_mdip_text_pane_t1_ParamLimits

0xbbfb,	// (0x000186eb) form2_mdip_text_pane_t1

0xbc1a,	// (0x0001870a) form2_midp_time_pane_t1

0xbc35,	// (0x00018725) form2_midp_gauge_slider_pane_t1

0xbc47,	// (0x00018737) form2_midp_gauge_slider_pane_t2

0xbc59,	// (0x00018749) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001c5ef) form2_midp_gauge_slider_pane_t

0xbc6b,	// (0x0001875b) form2_midp_slider_pane

0xbc77,	// (0x00018767) form2_midp_gauge_wait_pane_t1

0xbc85,	// (0x00018775) form2_midp_wait_pane_ParamLimits

0xbc85,	// (0x00018775) form2_midp_wait_pane

0xbcb0,	// (0x000187a0) list_single_2graphic_pane_cp4_ParamLimits

0xbcb0,	// (0x000187a0) list_single_2graphic_pane_cp4

0x95dd,	// (0x000160cd) list_single_midp_graphic_pane_cp_ParamLimits

0x95dd,	// (0x000160cd) list_single_midp_graphic_pane_cp

0x3d3f,	// (0x0001082f) list_highlight_pane_cp20

0xbcd8,	// (0x000187c8) list_single_2graphic_pane_g1_cp4

0xaf78,	// (0x00017a68) list_single_2graphic_pane_g2_cp4

0xbce0,	// (0x000187d0) list_single_2graphic_pane_t1_cp4

0x3dbb,	// (0x000108ab) list_highlight_pane_cp21

0xbcef,	// (0x000187df) list_single_midp_graphic_pane_g4_cp

0xbcfe,	// (0x000187ee) list_single_midp_graphic_pane_t1_cp

0xbd13,	// (0x00018803) form2_mdip_string_pane_t1_ParamLimits

0xbd13,	// (0x00018803) form2_mdip_string_pane_t1

0x3d3f,	// (0x0001082f) bg_wml_button_pane_cp2

0x3bc6,	// (0x000106b6) form2_midp_image_pane_g1

0x414f,	// (0x00010c3f) list_double_large_graphic_pane_g5_ParamLimits

0x414f,	// (0x00010c3f) list_double_large_graphic_pane_g5

0x8b71,	// (0x00015661) midp_form_pane_ParamLimits

0x3dbb,	// (0x000108ab) main_apps_wheel_pane_ParamLimits

0x6264,	// (0x00012d54) popup_preview_window_ParamLimits

0x6264,	// (0x00012d54) popup_preview_window

0x641f,	// (0x00012f0f) popup_touch_info_window_ParamLimits

0x641f,	// (0x00012f0f) popup_touch_info_window

0x643d,	// (0x00012f2d) popup_touch_menu_window_ParamLimits

0x643d,	// (0x00012f2d) popup_touch_menu_window

0x3bbc,	// (0x000106ac) bg_popup_sub_pane_cp6

0xbe1a,	// (0x0001890a) list_touch_menu_pane

0xbe22,	// (0x00018912) list_single_touch_menu_pane_ParamLimits

0xbe22,	// (0x00018912) list_single_touch_menu_pane

0xbe38,	// (0x00018928) list_single_touch_menu_pane_t1

0x3dbb,	// (0x000108ab) bg_popup_sub_pane_cp7_ParamLimits

0x3dbb,	// (0x000108ab) bg_popup_sub_pane_cp7

0xbe46,	// (0x00018936) heading_sub_pane

0xbe4e,	// (0x0001893e) list_touch_info_pane_ParamLimits

0xbe4e,	// (0x0001893e) list_touch_info_pane

0xbe5d,	// (0x0001894d) list_single_touch_info_pane_ParamLimits

0xbe5d,	// (0x0001894d) list_single_touch_info_pane

0xbe6f,	// (0x0001895f) list_single_touch_info_pane_t1

0xbe7d,	// (0x0001896d) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001c5fd) list_single_touch_info_pane_t

0x8b69,	// (0x00015659) bg_popup_heading_pane_cp

0xbe8b,	// (0x0001897b) heading_sub_pane_t1

0x9502,	// (0x00015ff2) bg_popup_preview_window_pane_cp_ParamLimits

0x9502,	// (0x00015ff2) bg_popup_preview_window_pane_cp

0xbe46,	// (0x00018936) heading_preview_pane

0xbe4e,	// (0x0001893e) list_preview_pane_ParamLimits

0xbe4e,	// (0x0001893e) list_preview_pane

0xbe99,	// (0x00018989) popup_preview_window_g1

0xbe5d,	// (0x0001894d) list_single_preview_pane_ParamLimits

0xbe5d,	// (0x0001894d) list_single_preview_pane

0xbea1,	// (0x00018991) list_single_preview_pane_g1

0xbea9,	// (0x00018999) list_single_preview_pane_t1

0xbe6f,	// (0x0001895f) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001c602) list_single_preview_pane_t

0xbeb7,	// (0x000189a7) bg_popup_heading_pane_cp2_ParamLimits

0xbeb7,	// (0x000189a7) bg_popup_heading_pane_cp2

0xbecd,	// (0x000189bd) heading_preview_pane_g1

0xbed5,	// (0x000189c5) heading_preview_pane_t1_ParamLimits

0xbed5,	// (0x000189c5) heading_preview_pane_t1

0x3e28,	// (0x00010918) soft_indicator_pane_t1_ParamLimits

0x4103,	// (0x00010bf3) scroll_pane_ParamLimits

0x472d,	// (0x0001121d) scroll_sc2_left_pane

0x4724,	// (0x00011214) scroll_sc2_right_pane

0x474c,	// (0x0001123c) scroll_bg_pane_g1_ParamLimits

0x4761,	// (0x00011251) scroll_bg_pane_g2_ParamLimits

0x4779,	// (0x00011269) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0001c1c4) scroll_bg_pane_g_ParamLimits

0x474c,	// (0x0001123c) scroll_handle_pane_g1_ParamLimits

0x478e,	// (0x0001127e) scroll_handle_pane_g2_ParamLimits

0x4779,	// (0x00011269) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001c1cb) scroll_handle_pane_g_ParamLimits

0x5ee7,	// (0x000129d7) popup_choice_list_window_ParamLimits

0x5ee7,	// (0x000129d7) popup_choice_list_window

0x930a,	// (0x00015dfa) choice_list_pane

0x93ae,	// (0x00015e9e) cell_toolbar_pane_t1

0x93d6,	// (0x00015ec6) toolbar_button_pane_ParamLimits

0xa57f,	// (0x0001706f) ai_gene_pane_1_t2_ParamLimits

0xa57f,	// (0x0001706f) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0001c3f3) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0001c3f3) ai_gene_pane_1_t

0xbef2,	// (0x000189e2) scroll_sc2_left_pane_g1

0xbef2,	// (0x000189e2) scroll_sc2_right_pane_g1

0x8e91,	// (0x00015981) bg_popup_sub_pane_cp10

0xbefc,	// (0x000189ec) list_choice_list_pane

0xbf15,	// (0x00018a05) list_single_choice_list_pane_ParamLimits

0xbf15,	// (0x00018a05) list_single_choice_list_pane

0xbf28,	// (0x00018a18) list_single_choice_list_pane_g1

0x84eb,	// (0x00014fdb) list_single_choice_list_pane_t1_ParamLimits

0x84eb,	// (0x00014fdb) list_single_choice_list_pane_t1

0xbf30,	// (0x00018a20) choice_list_pane_g1

0xbf38,	// (0x00018a28) choice_list_pane_t1

0x3bbc,	// (0x000106ac) input_focus_pane_cp11

0x453f,	// (0x0001102f) title_pane_stacon_g2_ParamLimits

0x453f,	// (0x0001102f) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0001c1aa) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0001c1aa) title_pane_stacon_g

0x8b69,	// (0x00015659) cursor_press_pane

0x5f8f,	// (0x00012a7f) popup_fep_hwr_window_ParamLimits

0x5f8f,	// (0x00012a7f) popup_fep_hwr_window

0x6007,	// (0x00012af7) popup_fep_vkb_window_ParamLimits

0x6007,	// (0x00012af7) popup_fep_vkb_window

0xbf46,	// (0x00018a36) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001c62b) fep_vkb_side_pane_g_ParamLimits

0x69ef,	// (0x000134df) fep_hwr_candidate_pane_ParamLimits

0x69ef,	// (0x000134df) fep_hwr_candidate_pane

0x6a19,	// (0x00013509) fep_hwr_side_pane_ParamLimits

0x6a19,	// (0x00013509) fep_hwr_side_pane

0x6a39,	// (0x00013529) fep_hwr_top_pane_ParamLimits

0x6a39,	// (0x00013529) fep_hwr_top_pane

0x6a51,	// (0x00013541) fep_hwr_write_pane_ParamLimits

0x6a51,	// (0x00013541) fep_hwr_write_pane

0xfb3b,	// (0x0001c62b) fep_vkb_side_pane_g

0xbf4e,	// (0x00018a3e) fep_hwr_top_pane_g1

0xbf60,	// (0x00018a50) fep_hwr_top_pane_g2

0x6a8b,	// (0x0001357b) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001c607) fep_hwr_top_pane_g

0x6aa0,	// (0x00013590) fep_hwr_top_text_pane

0x4859,	// (0x00011349) fep_hwr_top_text_pane_g1

0xbf96,	// (0x00018a86) fep_hwr_top_text_pane_t1

0x6b96,	// (0x00013686) fep_hwr_candidate_pane_g1

0xc1db,	// (0x00018ccb) fep_vkb_keypad_pane_g3_ParamLimits

0xc1db,	// (0x00018ccb) fep_vkb_keypad_pane_g3

0xc203,	// (0x00018cf3) fep_vkb_keypad_pane_g4_ParamLimits

0xc203,	// (0x00018cf3) fep_vkb_keypad_pane_g4

0xc272,	// (0x00018d62) fep_vkb_bottom_pane_g2_ParamLimits

0xc272,	// (0x00018d62) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001c632) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001c632) fep_vkb_bottom_pane_g

0xbef2,	// (0x000189e2) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001c63c) cell_vkb_side_pane_g

0xc2fd,	// (0x00018ded) cell_vkb_side_pane_t1

0xc30b,	// (0x00018dfb) cell_vkb_side_pane_t1_copy1

0xbef2,	// (0x000189e2) bg_fep_vkb_candidate_pane_g2

0xc437,	// (0x00018f27) cell_vkb_candidate_pane_ParamLimits

0xbfa4,	// (0x00018a94) aid_size_cell_vkb_ParamLimits

0xbfa4,	// (0x00018a94) aid_size_cell_vkb

0xc437,	// (0x00018f27) cell_vkb_candidate_pane

0x6bbd,	// (0x000136ad) bg_popup_fep_shadow_pane_g1

0xc032,	// (0x00018b22) fep_vkb_bottom_pane_ParamLimits

0xc032,	// (0x00018b22) fep_vkb_bottom_pane

0xc068,	// (0x00018b58) fep_vkb_candidate_pane_ParamLimits

0xc068,	// (0x00018b58) fep_vkb_candidate_pane

0xc084,	// (0x00018b74) fep_vkb_keypad_pane_ParamLimits

0xc084,	// (0x00018b74) fep_vkb_keypad_pane

0xc0c3,	// (0x00018bb3) fep_vkb_side_pane_ParamLimits

0xc0c3,	// (0x00018bb3) fep_vkb_side_pane

0xc0ff,	// (0x00018bef) fep_vkb_top_pane_ParamLimits

0xc0ff,	// (0x00018bef) fep_vkb_top_pane

0xc134,	// (0x00018c24) fep_vkb_top_pane_g1_ParamLimits

0xc134,	// (0x00018c24) fep_vkb_top_pane_g1

0xc143,	// (0x00018c33) fep_vkb_top_pane_g2_ParamLimits

0xc143,	// (0x00018c33) fep_vkb_top_pane_g2

0xc152,	// (0x00018c42) fep_vkb_top_pane_g3_ParamLimits

0xc152,	// (0x00018c42) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001c622) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001c622) fep_vkb_top_pane_g

0xc170,	// (0x00018c60) fep_vkb_top_text_pane_ParamLimits

0xc170,	// (0x00018c60) fep_vkb_top_text_pane

0xc181,	// (0x00018c71) fep_vkb_side_pane_g1_ParamLimits

0xc181,	// (0x00018c71) fep_vkb_side_pane_g1

0xc1ca,	// (0x00018cba) grid_vkb_side_pane_ParamLimits

0xc1ca,	// (0x00018cba) grid_vkb_side_pane

0x6bc5,	// (0x000136b5) bg_popup_fep_shadow_pane_g2

0x6bce,	// (0x000136be) bg_popup_fep_shadow_pane_g3

0x6bd6,	// (0x000136c6) bg_popup_fep_shadow_pane_g4

0x6bdf,	// (0x000136cf) bg_popup_fep_shadow_pane_g5

0x6be9,	// (0x000136d9) bg_popup_fep_shadow_pane_g6

0x6bf1,	// (0x000136e1) bg_popup_fep_shadow_pane_g7

0x42cf,	// (0x00010dbf) bg_popup_fep_shadow_pane_g8

0xc221,	// (0x00018d11) grid_vkb_keypad_number_pane_ParamLimits

0xc221,	// (0x00018d11) grid_vkb_keypad_number_pane

0xc231,	// (0x00018d21) grid_vkb_keypad_pane_ParamLimits

0xc231,	// (0x00018d21) grid_vkb_keypad_pane

0xc257,	// (0x00018d47) fep_vkb_bottom_pane_g1_ParamLimits

0xc257,	// (0x00018d47) fep_vkb_bottom_pane_g1

0xc280,	// (0x00018d70) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc280,	// (0x00018d70) grid_vkb_keypad_bottom_left_pane

0xc295,	// (0x00018d85) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc295,	// (0x00018d85) grid_vkb_keypad_bottom_right_pane

0xc2aa,	// (0x00018d9a) fep_vkb_top_text_pane_g1

0xc2c5,	// (0x00018db5) fep_vkb_top_text_pane_t1

0xc2da,	// (0x00018dca) cell_vkb_side_pane_ParamLimits

0xc2da,	// (0x00018dca) cell_vkb_side_pane

0xbef2,	// (0x000189e2) cell_vkb_side_pane_g1

0xc319,	// (0x00018e09) cell_vkb_keypad_pane_ParamLimits

0xc319,	// (0x00018e09) cell_vkb_keypad_pane

0xc38e,	// (0x00018e7e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001c64f) bg_popup_fep_shadow_pane_g

0x6c03,	// (0x000136f3) cell_hwr_side_pane_g1

0x6c03,	// (0x000136f3) cell_hwr_side_pane_g2

0xc398,	// (0x00018e88) cell_vkb_keypad_pane_t1

0xc3a6,	// (0x00018e96) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3a6,	// (0x00018e96) cell_vkb_keypad_bottom_left_pane

0xc3c3,	// (0x00018eb3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c3,	// (0x00018eb3) cell_vkb_keypad_bottom_right_pane

0xbef2,	// (0x000189e2) cell_vkb_keypad_bottom_left_pane_g1

0xbef2,	// (0x000189e2) cell_vkb_keypad_bottom_right_pane_g1

0xc3fc,	// (0x00018eec) cell_vkb_keypad_number_pane_ParamLimits

0xc3fc,	// (0x00018eec) cell_vkb_keypad_number_pane

0xc41b,	// (0x00018f0b) cell_vkb_keypad_number_pane_g1

0xc425,	// (0x00018f15) cell_vkb_keypad_number_pane_g2

0xc42e,	// (0x00018f1e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001c641) cell_vkb_keypad_number_pane_g

0xc398,	// (0x00018e88) cell_vkb_keypad_number_pane_t1

0xc452,	// (0x00018f42) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001c662) cell_hwr_side_pane_g

0xc46b,	// (0x00018f5b) cell_hwr_side_pane_t1

0x6c0d,	// (0x000136fd) cell_hwr_side_pane_t1_copy1

0x6c1b,	// (0x0001370b) cell_hwr_candidate_pane_g1

0x6c4a,	// (0x0001373a) cell_hwr_candidate_pane_t1

0xbef2,	// (0x000189e2) cell_vkb_candidate_pane_g2

0xc4af,	// (0x00018f9f) cell_vkb_candidate_pane_t1

0x69b6,	// (0x000134a6) bg_popup_fep_shadow_pane_ParamLimits

0x69b6,	// (0x000134a6) bg_popup_fep_shadow_pane

0x6a6b,	// (0x0001355b) bg_fep_hwr_top_pane_g4

0xbf72,	// (0x00018a62) bg_hwr_side_pane_g1_ParamLimits

0xbf72,	// (0x00018a62) bg_hwr_side_pane_g1

0x6adc,	// (0x000135cc) cell_hwr_side_pane_ParamLimits

0x6adc,	// (0x000135cc) cell_hwr_side_pane

0x6b17,	// (0x00013607) fep_hwr_write_pane_g1_ParamLimits

0x6b17,	// (0x00013607) fep_hwr_write_pane_g1

0x6b24,	// (0x00013614) fep_hwr_write_pane_g2_ParamLimits

0x6b24,	// (0x00013614) fep_hwr_write_pane_g2

0x6b31,	// (0x00013621) fep_hwr_write_pane_g3_ParamLimits

0x6b31,	// (0x00013621) fep_hwr_write_pane_g3

0x6b3f,	// (0x0001362f) fep_hwr_write_pane_g4_ParamLimits

0x6b3f,	// (0x0001362f) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001c60e) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001c60e) fep_hwr_write_pane_g

0x6a6b,	// (0x0001355b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6a6b,	// (0x0001355b) bg_fep_hwr_candidate_pane_g2

0x6b54,	// (0x00013644) cell_hwr_candidate_pane_ParamLimits

0x6b54,	// (0x00013644) cell_hwr_candidate_pane

0x6b96,	// (0x00013686) fep_hwr_candidate_pane_g1_ParamLimits

0xbfd2,	// (0x00018ac2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfd2,	// (0x00018ac2) bg_popup_fep_shadow_pane_cp2

0xc162,	// (0x00018c52) fep_vkb_top_pane_g4_ParamLimits

0xc162,	// (0x00018c52) fep_vkb_top_pane_g4

0xc1a8,	// (0x00018c98) fep_vkb_side_pane_g2_ParamLimits

0xc1a8,	// (0x00018c98) fep_vkb_side_pane_g2

0x821c,	// (0x00014d0c) list_setting_pane_t4_ParamLimits

0x821c,	// (0x00014d0c) list_setting_pane_t4

0x8296,	// (0x00014d86) list_setting_number_pane_t5_ParamLimits

0x8296,	// (0x00014d86) list_setting_number_pane_t5

0x868e,	// (0x0001517e) list_double_heading_pane_cp2_ParamLimits

0x868e,	// (0x0001517e) list_double_heading_pane_cp2

0xc4bd,	// (0x00018fad) list_double_heading_pane_g1_cp2_ParamLimits

0xc4bd,	// (0x00018fad) list_double_heading_pane_g1_cp2

0xc4c9,	// (0x00018fb9) list_double_heading_pane_g2_cp2_ParamLimits

0xc4c9,	// (0x00018fb9) list_double_heading_pane_g2_cp2

0xc4dd,	// (0x00018fcd) list_double_heading_pane_t1_cp2_ParamLimits

0xc4dd,	// (0x00018fcd) list_double_heading_pane_t1_cp2

0xc4f3,	// (0x00018fe3) list_double_heading_pane_t2_cp2_ParamLimits

0xc4f3,	// (0x00018fe3) list_double_heading_pane_t2_cp2

0x3bb4,	// (0x000106a4) aid_value_unit2

0x5710,	// (0x00012200) popup_preview_fixed_window

0x3eff,	// (0x000109ef) bg_popup_preview_window_pane_cp02

0xc505,	// (0x00018ff5) list_preview_fixed_pane

0xc54b,	// (0x0001903b) list_empty_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_empty_pane_fp

0xc54b,	// (0x0001903b) list_single_cale_day_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_cale_day_pane_fp

0xc54b,	// (0x0001903b) list_single_graphic_heading_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_graphic_heading_pane_fp

0xc54b,	// (0x0001903b) list_single_graphic_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_graphic_pane_fp

0xc54b,	// (0x0001903b) list_single_heading_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_heading_pane_fp

0xc54b,	// (0x0001903b) list_single_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_pane_fp

0xc561,	// (0x00019051) list_single_pane_fp_g1_ParamLimits

0xc561,	// (0x00019051) list_single_pane_fp_g1

0xc56d,	// (0x0001905d) list_single_pane_fp_g2_ParamLimits

0xc56d,	// (0x0001905d) list_single_pane_fp_g2

0xc579,	// (0x00019069) list_single_pane_fp_g3_ParamLimits

0xc579,	// (0x00019069) list_single_pane_fp_g3

0xc58d,	// (0x0001907d) list_single_pane_fp_g4_ParamLimits

0xc58d,	// (0x0001907d) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001c675) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c675) list_single_pane_fp_g

0xc599,	// (0x00019089) list_single_pane_fp_t1_ParamLimits

0xc599,	// (0x00019089) list_single_pane_fp_t1

0xc5b0,	// (0x000190a0) list_single_graphic_pane_fp_g1_ParamLimits

0xc5b0,	// (0x000190a0) list_single_graphic_pane_fp_g1

0xc561,	// (0x00019051) list_single_graphic_pane_fp_g2_ParamLimits

0xc561,	// (0x00019051) list_single_graphic_pane_fp_g2

0xc56d,	// (0x0001905d) list_single_graphic_pane_fp_g3_ParamLimits

0xc56d,	// (0x0001905d) list_single_graphic_pane_fp_g3

0xc579,	// (0x00019069) list_single_graphic_pane_fp_g4_ParamLimits

0xc579,	// (0x00019069) list_single_graphic_pane_fp_g4

0xc58d,	// (0x0001907d) list_single_graphic_pane_fp_g5_ParamLimits

0xc58d,	// (0x0001907d) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c67e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c67e) list_single_graphic_pane_fp_g

0xc5bc,	// (0x000190ac) list_single_graphic_pane_fp_t1_ParamLimits

0xc5bc,	// (0x000190ac) list_single_graphic_pane_fp_t1

0xc5b0,	// (0x000190a0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5b0,	// (0x000190a0) list_single_graphic_heading_pane_fp_g1

0xc561,	// (0x00019051) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc561,	// (0x00019051) list_single_graphic_heading_pane_fp_g2

0xc56d,	// (0x0001905d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc56d,	// (0x0001905d) list_single_graphic_heading_pane_fp_g3

0xc579,	// (0x00019069) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc579,	// (0x00019069) list_single_graphic_heading_pane_fp_g4

0xc58d,	// (0x0001907d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc58d,	// (0x0001907d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c67e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c67e) list_single_graphic_heading_pane_fp_g

0xc5d2,	// (0x000190c2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5d2,	// (0x000190c2) list_single_graphic_heading_pane_fp_t1

0xc5e8,	// (0x000190d8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5e8,	// (0x000190d8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001c689) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001c689) list_single_graphic_heading_pane_fp_t

0xc5fa,	// (0x000190ea) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5fa,	// (0x000190ea) list_single_cale_day_pane_fp_g1

0xc632,	// (0x00019122) list_single_cale_day_pane_fp_g2_ParamLimits

0xc632,	// (0x00019122) list_single_cale_day_pane_fp_g2

0xc63e,	// (0x0001912e) list_single_cale_day_pane_fp_g3_ParamLimits

0xc63e,	// (0x0001912e) list_single_cale_day_pane_fp_g3

0xc666,	// (0x00019156) list_single_cale_day_pane_fp_g4_ParamLimits

0xc666,	// (0x00019156) list_single_cale_day_pane_fp_g4

0xc68a,	// (0x0001917a) list_single_cale_day_pane_fp_g5_ParamLimits

0xc68a,	// (0x0001917a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001c68e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001c68e) list_single_cale_day_pane_fp_g

0xc6ae,	// (0x0001919e) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6ae,	// (0x0001919e) list_single_cale_day_pane_fp_t1

0xc6d4,	// (0x000191c4) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6d4,	// (0x000191c4) list_single_cale_day_pane_fp_t2

0xc6ed,	// (0x000191dd) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6ed,	// (0x000191dd) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001c699) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001c699) list_single_cale_day_pane_fp_t

0xc561,	// (0x00019051) list_empty_pane_fp_g1_ParamLimits

0xc561,	// (0x00019051) list_empty_pane_fp_g1

0xc706,	// (0x000191f6) list_empty_pane_fp_t1

0xc714,	// (0x00019204) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001c6a0) list_empty_pane_fp_t

0xc561,	// (0x00019051) list_single_heading_pane_fp_g1_ParamLimits

0xc561,	// (0x00019051) list_single_heading_pane_fp_g1

0xc56d,	// (0x0001905d) list_single_heading_pane_fp_g2_ParamLimits

0xc56d,	// (0x0001905d) list_single_heading_pane_fp_g2

0xc579,	// (0x00019069) list_single_heading_pane_fp_g3_ParamLimits

0xc579,	// (0x00019069) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001c6a5) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001c6a5) list_single_heading_pane_fp_g

0xc722,	// (0x00019212) list_single_heading_pane_fp_t1_ParamLimits

0xc722,	// (0x00019212) list_single_heading_pane_fp_t1

0xc734,	// (0x00019224) list_single_heading_pane_fp_t2_ParamLimits

0xc734,	// (0x00019224) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001c6ac) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c6ac) list_single_heading_pane_fp_t

0x8543,	// (0x00015033) aid_size_cell_fast

0x3ee2,	// (0x000109d2) soft_indicator_pane_cp1_t1

0x854c,	// (0x0001503c) cell_app_pane_cp2_ParamLimits

0x854c,	// (0x0001503c) cell_app_pane_cp2

0x69d8,	// (0x000134c8) fep_hwr_candidate_drop_down_list_pane

0x6bb0,	// (0x000136a0) fep_hwr_candidate_pane_g3_ParamLimits

0x6bb0,	// (0x000136a0) fep_hwr_candidate_pane_g3

0x31e3,	// (0x0000fcd3) fep_hwr_candidate_pane_g4_ParamLimits

0x31e3,	// (0x0000fcd3) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001c61b) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001c61b) fep_hwr_candidate_pane_g

0xc057,	// (0x00018b47) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc057,	// (0x00018b47) fep_vkb_candidate_drop_down_list_pane

0xc45a,	// (0x00018f4a) fep_vkb_candidate_pane_g3

0xc462,	// (0x00018f52) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001c648) fep_vkb_candidate_pane_g

0x6c1b,	// (0x0001370b) cell_hwr_candidate_pane_g1_ParamLimits

0x6c29,	// (0x00013719) cell_hwr_candidate_pane_g3_ParamLimits

0x6c29,	// (0x00013719) cell_hwr_candidate_pane_g3

0xd556,	// (0x0001a046) cell_hwr_candidate_pane_g4_ParamLimits

0xd556,	// (0x0001a046) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001c667) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001c667) cell_hwr_candidate_pane_g

0xc479,	// (0x00018f69) cell_vkb_candidate_pane_g3_ParamLimits

0xc479,	// (0x00018f69) cell_vkb_candidate_pane_g3

0xc494,	// (0x00018f84) cell_vkb_candidate_pane_g4_ParamLimits

0xc494,	// (0x00018f84) cell_vkb_candidate_pane_g4

0xc74a,	// (0x0001923a) cell_app_pane_cp2_g1_ParamLimits

0xc74a,	// (0x0001923a) cell_app_pane_cp2_g1

0xc768,	// (0x00019258) cell_app_pane_cp2_g2_ParamLimits

0xc768,	// (0x00019258) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001c6b1) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001c6b1) cell_app_pane_cp2_g

0xc774,	// (0x00019264) cell_app_pane_cp2_t1_ParamLimits

0xc774,	// (0x00019264) cell_app_pane_cp2_t1

0x41fd,	// (0x00010ced) grid_highlight_pane_cp1_ParamLimits

0x41fd,	// (0x00010ced) grid_highlight_pane_cp1

0x6c68,	// (0x00013758) cell_hwr_candidate_pane_cp1_ParamLimits

0x6c68,	// (0x00013758) cell_hwr_candidate_pane_cp1

0x6c1b,	// (0x0001370b) fep_hwr_candidate_drop_down_list_pane_g1

0x6c87,	// (0x00013777) fep_hwr_candidate_drop_down_list_pane_g2

0x6c94,	// (0x00013784) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001c6b6) fep_hwr_candidate_drop_down_list_pane_g

0x6ca1,	// (0x00013791) fep_hwr_candidate_drop_down_list_scroll_pane

0x6caa,	// (0x0001379a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6caa,	// (0x0001379a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6cb7,	// (0x000137a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6cb7,	// (0x000137a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6cc4,	// (0x000137b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6cc4,	// (0x000137b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6cd1,	// (0x000137c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cd1,	// (0x000137c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cec,	// (0x000137dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cec,	// (0x000137dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d07,	// (0x000137f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d07,	// (0x000137f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d22,	// (0x00013812) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d22,	// (0x00013812) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d3d,	// (0x0001382d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d3d,	// (0x0001382d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001c6bd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001c6bd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc786,	// (0x00019276) cell_vkb_candidate_pane_cp1_ParamLimits

0xc786,	// (0x00019276) cell_vkb_candidate_pane_cp1

0xc162,	// (0x00018c52) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc162,	// (0x00018c52) fep_vkb_candidate_drop_down_list_pane_g1

0xc7a6,	// (0x00019296) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7a6,	// (0x00019296) fep_vkb_candidate_drop_down_list_pane_g2

0xc7b3,	// (0x000192a3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7b3,	// (0x000192a3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001c6ce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001c6ce) fep_vkb_candidate_drop_down_list_pane_g

0xc7c0,	// (0x000192b0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7c0,	// (0x000192b0) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7cd,	// (0x000192bd) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7cd,	// (0x000192bd) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7da,	// (0x000192ca) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7da,	// (0x000192ca) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7e6,	// (0x000192d6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7e6,	// (0x000192d6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7f2,	// (0x000192e2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7f2,	// (0x000192e2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc813,	// (0x00019303) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc813,	// (0x00019303) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc834,	// (0x00019324) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc834,	// (0x00019324) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc855,	// (0x00019345) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc855,	// (0x00019345) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc876,	// (0x00019366) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc876,	// (0x00019366) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001c6d5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001c6d5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x79a0,	// (0x00014490) title_pane_g1_ParamLimits

0x79ad,	// (0x0001449d) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c03e) title_pane_g_ParamLimits

0x4851,	// (0x00011341) aid_call2_pane

0x4849,	// (0x00011339) aid_call_pane

0x4859,	// (0x00011349) popup_clock_analogue_window_g1

0x4859,	// (0x00011349) popup_clock_analogue_window_g2

0x5a81,	// (0x00012571) popup_clock_analogue_window_g3

0x5a8a,	// (0x0001257a) popup_clock_analogue_window_g4

0x3bc6,	// (0x000106b6) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001c1d9) popup_clock_analogue_window_g

0x5a92,	// (0x00012582) popup_clock_analogue_window_t1

0x5aa0,	// (0x00012590) clock_digital_number_pane_ParamLimits

0x5aa0,	// (0x00012590) clock_digital_number_pane

0x5aac,	// (0x0001259c) clock_digital_number_pane_cp02_ParamLimits

0x5aac,	// (0x0001259c) clock_digital_number_pane_cp02

0x5ab8,	// (0x000125a8) clock_digital_number_pane_cp03_ParamLimits

0x5ab8,	// (0x000125a8) clock_digital_number_pane_cp03

0x5ac4,	// (0x000125b4) clock_digital_number_pane_cp04_ParamLimits

0x5ac4,	// (0x000125b4) clock_digital_number_pane_cp04

0x5ad0,	// (0x000125c0) clock_digital_separator_pane_ParamLimits

0x5ad0,	// (0x000125c0) clock_digital_separator_pane

0x5adc,	// (0x000125cc) popup_clock_digital_window_t1_ParamLimits

0x5adc,	// (0x000125cc) popup_clock_digital_window_t1

0x3bc6,	// (0x000106b6) clock_digital_number_pane_g1

0x3bc6,	// (0x000106b6) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0001c1e4) clock_digital_number_pane_g

0x3bc6,	// (0x000106b6) clock_digital_separator_pane_g1

0x3bc6,	// (0x000106b6) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0001c1e4) clock_digital_separator_pane_g

0x8ed5,	// (0x000159c5) aid_fill_nsta_ParamLimits

0x9021,	// (0x00015b11) indicator_nsta_pane_ParamLimits

0x919a,	// (0x00015c8a) popup_clock_analogue_window

0x919a,	// (0x00015c8a) popup_clock_digital_window

0x3dbb,	// (0x000108ab) grid_indicator_nsta_pane_ParamLimits

0xb8af,	// (0x0001839f) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001c59b) clock_nsta_pane_t

0x5a45,	// (0x00012535) aid_size_max_handle

0x5a4f,	// (0x0001253f) aid_size_min_handle

0x8b69,	// (0x00015659) editor_scroll_pane

0xc891,	// (0x00019381) ex_editor_pane

0x437e,	// (0x00010e6e) scroll_pane_cp13

0x412f,	// (0x00010c1f) scroll_pane_cp14

0x48a7,	// (0x00011397) scroll_pane_cp36

0x86a2,	// (0x00015192) list_single_graphic_hl_pane_cp2_ParamLimits

0x86a2,	// (0x00015192) list_single_graphic_hl_pane_cp2

0xab2e,	// (0x0001761e) list_single_graphic_hl_pane_ParamLimits

0xab2e,	// (0x0001761e) list_single_graphic_hl_pane

0xc899,	// (0x00019389) aid_size_min_hl_cp1

0xc8a2,	// (0x00019392) list_highlight_pane_cp34_ParamLimits

0xc8a2,	// (0x00019392) list_highlight_pane_cp34

0xc8b3,	// (0x000193a3) list_single_graphic_hl_pane_g1_ParamLimits

0xc8b3,	// (0x000193a3) list_single_graphic_hl_pane_g1

0xc8c0,	// (0x000193b0) list_single_graphic_hl_pane_g2_ParamLimits

0xc8c0,	// (0x000193b0) list_single_graphic_hl_pane_g2

0xc8c0,	// (0x000193b0) list_single_graphic_hl_pane_g3_ParamLimits

0xc8c0,	// (0x000193b0) list_single_graphic_hl_pane_g3

0xc8cc,	// (0x000193bc) list_single_graphic_hl_pane_g4_ParamLimits

0xc8cc,	// (0x000193bc) list_single_graphic_hl_pane_g4

0xc8d8,	// (0x000193c8) list_single_graphic_hl_pane_g5_ParamLimits

0xc8d8,	// (0x000193c8) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001c6e6) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001c6e6) list_single_graphic_hl_pane_g

0xc8ec,	// (0x000193dc) list_single_graphic_hl_pane_t1_ParamLimits

0xc8ec,	// (0x000193dc) list_single_graphic_hl_pane_t1

0xc902,	// (0x000193f2) aid_size_min_hl_cp2

0xc90b,	// (0x000193fb) list_highlight_pane_cp34_cp2_ParamLimits

0xc90b,	// (0x000193fb) list_highlight_pane_cp34_cp2

0xc8b3,	// (0x000193a3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8b3,	// (0x000193a3) list_single_graphic_hl_pane_g1_cp2

0xc918,	// (0x00019408) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc918,	// (0x00019408) list_single_graphic_hl_pane_g2_cp2

0xc924,	// (0x00019414) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc924,	// (0x00019414) list_single_graphic_hl_pane_g3_cp2

0x8aa2,	// (0x00015592) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8aa2,	// (0x00015592) list_single_graphic_hl_pane_g4_cp2

0xc932,	// (0x00019422) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc932,	// (0x00019422) list_single_graphic_hl_pane_g5_cp2

0x5d87,	// (0x00012877) control_pane_g4_ParamLimits

0x5d87,	// (0x00012877) control_pane_g4

0x8e91,	// (0x00015981) bg_popup_sub_pane_cp10_ParamLimits

0xbefc,	// (0x000189ec) list_choice_list_pane_ParamLimits

0xbf0b,	// (0x000189fb) scroll_pane_cp23

0x3eff,	// (0x000109ef) bg_popup_preview_window_pane_cp02_ParamLimits

0xc505,	// (0x00018ff5) list_preview_fixed_pane_ParamLimits

0xc51b,	// (0x0001900b) list_preview_fixed_pane_cp_ParamLimits

0xc51b,	// (0x0001900b) list_preview_fixed_pane_cp

0xc527,	// (0x00019017) popup_preview_fixed_window_g1_ParamLimits

0xc527,	// (0x00019017) popup_preview_fixed_window_g1

0xc533,	// (0x00019023) popup_preview_fixed_window_g2_ParamLimits

0xc533,	// (0x00019023) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001c66e) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001c66e) popup_preview_fixed_window_g

0x59b9,	// (0x000124a9) aid_navi_side_left_pane_ParamLimits

0x59ce,	// (0x000124be) aid_navi_side_right_pane_ParamLimits

0x59e6,	// (0x000124d6) navi_icon_pane_stacon_ParamLimits

0x59fa,	// (0x000124ea) navi_navi_pane_stacon_ParamLimits

0x59e6,	// (0x000124d6) navi_text_pane_stacon_ParamLimits

0x55df,	// (0x000120cf) main_text_info_pane

0xc95c,	// (0x0001944c) listscroll_text_info_pane

0xc964,	// (0x00019454) list_text_info_pane_ParamLimits

0xc964,	// (0x00019454) list_text_info_pane

0xc973,	// (0x00019463) scroll_pane_cp24_ParamLimits

0xc973,	// (0x00019463) scroll_pane_cp24

0xc991,	// (0x00019481) list_text_info_pane_t1_ParamLimits

0xc991,	// (0x00019481) list_text_info_pane_t1

0x5f03,	// (0x000129f3) popup_fast_swap2_window_ParamLimits

0x5f03,	// (0x000129f3) popup_fast_swap2_window

0xc9c5,	// (0x000194b5) aid_size_cell_fast2

0x3bbc,	// (0x000106ac) bg_popup_window_pane_cp17

0x9936,	// (0x00016426) heading_pane_cp2

0x4033,	// (0x00010b23) listscroll_fast2_pane

0xc9cf,	// (0x000194bf) grid_fast2_pane

0xc9d9,	// (0x000194c9) listscroll_fast2_pane_g1

0xc9e1,	// (0x000194d1) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001c6f1) listscroll_fast2_pane_g

0x437e,	// (0x00010e6e) scroll_pane_cp26

0xc9eb,	// (0x000194db) cell_fast2_pane_ParamLimits

0xc9eb,	// (0x000194db) cell_fast2_pane

0xca00,	// (0x000194f0) cell_fast2_pane_g1

0xca09,	// (0x000194f9) cell_fast2_pane_g2

0xca12,	// (0x00019502) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001c6f6) cell_fast2_pane_g

0x4066,	// (0x00010b56) grid_highlight_pane_cp9

0x5ecb,	// (0x000129bb) main_eswt_pane_ParamLimits

0x5ecb,	// (0x000129bb) main_eswt_pane

0xc988,	// (0x00019478) list_single_text_info_pane

0xca1a,	// (0x0001950a) eswt_ctrl_button_pane

0xca1a,	// (0x0001950a) eswt_ctrl_canvas_pane

0xca22,	// (0x00019512) eswt_ctrl_combo_pane

0xca1a,	// (0x0001950a) eswt_ctrl_default_pane

0xca1a,	// (0x0001950a) eswt_ctrl_label_pane

0xca2a,	// (0x0001951a) eswt_ctrl_wait_pane

0xca32,	// (0x00019522) eswt_shell_pane

0x3bbc,	// (0x000106ac) listscroll_eswt_app_pane

0xca52,	// (0x00019542) popup_eswt_tasktip_window_ParamLimits

0xca52,	// (0x00019542) popup_eswt_tasktip_window

0x9502,	// (0x00015ff2) bg_popup_window_pane_cp18

0xca63,	// (0x00019553) eswt_control_pane_g1_ParamLimits

0xca63,	// (0x00019553) eswt_control_pane_g1

0xca70,	// (0x00019560) eswt_control_pane_g2_ParamLimits

0xca70,	// (0x00019560) eswt_control_pane_g2

0xca7d,	// (0x0001956d) eswt_control_pane_g3_ParamLimits

0xca7d,	// (0x0001956d) eswt_control_pane_g3

0xca8a,	// (0x0001957a) eswt_control_pane_g4_ParamLimits

0xca8a,	// (0x0001957a) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001c6fd) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001c6fd) eswt_control_pane_g

0x41fd,	// (0x00010ced) bg_button_pane_ParamLimits

0x41fd,	// (0x00010ced) bg_button_pane

0x407b,	// (0x00010b6b) common_borders_pane_copy2_ParamLimits

0x407b,	// (0x00010b6b) common_borders_pane_copy2

0xca97,	// (0x00019587) control_button_pane_g1_ParamLimits

0xca97,	// (0x00019587) control_button_pane_g1

0xcaa3,	// (0x00019593) control_button_pane_g2_ParamLimits

0xcaa3,	// (0x00019593) control_button_pane_g2

0xcaaf,	// (0x0001959f) control_button_pane_g3_ParamLimits

0xcaaf,	// (0x0001959f) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001c706) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001c706) control_button_pane_g

0xcac3,	// (0x000195b3) control_button_pane_t1

0xcad1,	// (0x000195c1) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001c70d) control_button_pane_t

0x93e2,	// (0x00015ed2) bg_button_pane_g1

0x93f2,	// (0x00015ee2) bg_button_pane_g2

0x93ea,	// (0x00015eda) bg_button_pane_g3

0x9402,	// (0x00015ef2) bg_button_pane_g4

0x93fa,	// (0x00015eea) bg_button_pane_g5

0x940a,	// (0x00015efa) bg_button_pane_g6

0x9412,	// (0x00015f02) bg_button_pane_g7

0x9422,	// (0x00015f12) bg_button_pane_g8

0x941a,	// (0x00015f0a) bg_button_pane_g9

0x0008,

0xf857,	// (0x0001c347) bg_button_pane_g

0xbeb7,	// (0x000189a7) common_borders_pane_ParamLimits

0xbeb7,	// (0x000189a7) common_borders_pane

0xca63,	// (0x00019553) eswt_control_pane_g1_copy1_ParamLimits

0xca63,	// (0x00019553) eswt_control_pane_g1_copy1

0xca70,	// (0x00019560) eswt_control_pane_g2_copy1_ParamLimits

0xca70,	// (0x00019560) eswt_control_pane_g2_copy1

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy1_ParamLimits

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy1

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy1_ParamLimits

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy1

0xbef2,	// (0x000189e2) bg_eswt_ctrl_canvas_pane_g1

0xbeb7,	// (0x000189a7) common_borders_pane_cp2_ParamLimits

0xbeb7,	// (0x000189a7) common_borders_pane_cp2

0xbeb7,	// (0x000189a7) common_borders_pane_cp3_ParamLimits

0xbeb7,	// (0x000189a7) common_borders_pane_cp3

0xcadf,	// (0x000195cf) separator_horizontal_pane

0xcae7,	// (0x000195d7) separator_vertical_pane

0xca63,	// (0x00019553) eswt_control_pane_g1_copy2_ParamLimits

0xca63,	// (0x00019553) eswt_control_pane_g1_copy2

0xca70,	// (0x00019560) eswt_control_pane_g2_copy2_ParamLimits

0xca70,	// (0x00019560) eswt_control_pane_g2_copy2

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy2_ParamLimits

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy2

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy2_ParamLimits

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy2

0x3bbc,	// (0x000106ac) common_borders_pane_cp4

0xcaf0,	// (0x000195e0) separator_horizontal_pane_g1

0xcaf9,	// (0x000195e9) separator_horizontal_pane_g2

0xcb02,	// (0x000195f2) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001c712) separator_horizontal_pane_g

0xca63,	// (0x00019553) eswt_control_pane_g1_copy3_ParamLimits

0xca63,	// (0x00019553) eswt_control_pane_g1_copy3

0xca70,	// (0x00019560) eswt_control_pane_g2_copy3_ParamLimits

0xca70,	// (0x00019560) eswt_control_pane_g2_copy3

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy3_ParamLimits

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy3

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy3_ParamLimits

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy3

0x3bbc,	// (0x000106ac) common_borders_pane_cp5

0xcb0b,	// (0x000195fb) separator_vertical_pane_g1

0xcb14,	// (0x00019604) separator_vertical_pane_g2

0xcb1d,	// (0x0001960d) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001c719) separator_vertical_pane_g

0xca63,	// (0x00019553) eswt_control_pane_g1_copy4_ParamLimits

0xca63,	// (0x00019553) eswt_control_pane_g1_copy4

0xca70,	// (0x00019560) eswt_control_pane_g2_copy4_ParamLimits

0xca70,	// (0x00019560) eswt_control_pane_g2_copy4

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy4_ParamLimits

0xca7d,	// (0x0001956d) eswt_control_pane_g3_copy4

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy4_ParamLimits

0xca8a,	// (0x0001957a) eswt_control_pane_g4_copy4

0xcb26,	// (0x00019616) eswt_ctrl_combo_button_pane

0xcb2e,	// (0x0001961e) eswt_ctrl_input_pane

0xcb36,	// (0x00019626) popup_choice_list_window_cp70

0xcb3e,	// (0x0001962e) eswt_ctrl_input_pane_t1

0x3bbc,	// (0x000106ac) input_focus_pane_cp70

0xbeb7,	// (0x000189a7) bg_button_pane_cp70_ParamLimits

0xbeb7,	// (0x000189a7) bg_button_pane_cp70

0xcb4c,	// (0x0001963c) eswt_ctrl_combo_button_pane_g1

0xcb54,	// (0x00019644) wait_bar_pane_cp70

0x9502,	// (0x00015ff2) bg_popup_window_pane_cp70_ParamLimits

0x9502,	// (0x00015ff2) bg_popup_window_pane_cp70

0xcb5c,	// (0x0001964c) popup_eswt_tasktip_window_t1

0xcb72,	// (0x00019662) wait_bar_pane_cp71_ParamLimits

0xcb72,	// (0x00019662) wait_bar_pane_cp71

0xcb7e,	// (0x0001966e) grid_eswt_app_pane

0x472d,	// (0x0001121d) scroll_pane_cp70

0xcb87,	// (0x00019677) cell_eswt_app_pane_ParamLimits

0xcb87,	// (0x00019677) cell_eswt_app_pane

0xcbb7,	// (0x000196a7) cell_eswt_app_pane_g1_ParamLimits

0xcbb7,	// (0x000196a7) cell_eswt_app_pane_g1

0xcbe6,	// (0x000196d6) cell_eswt_app_pane_g2_ParamLimits

0xcbe6,	// (0x000196d6) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001c720) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001c720) cell_eswt_app_pane_g

0xcc0a,	// (0x000196fa) cell_eswt_app_pane_t1_ParamLimits

0xcc0a,	// (0x000196fa) cell_eswt_app_pane_t1

0xcc3c,	// (0x0001972c) grid_highlight_pane_cp70_ParamLimits

0xcc3c,	// (0x0001972c) grid_highlight_pane_cp70

0x8a3e,	// (0x0001552e) set_content_pane_g1

0x8e10,	// (0x00015900) status_small_volume_pane

0x6d58,	// (0x00013848) status_small_volume_pane_g1

0x6d60,	// (0x00013850) volume_small2_pane

0x6d69,	// (0x00013859) volume_small2_pane_g1

0x6d72,	// (0x00013862) volume_small2_pane_g2

0x6d7b,	// (0x0001386b) volume_small2_pane_g3

0x6d84,	// (0x00013874) volume_small2_pane_g4

0x6d8d,	// (0x0001387d) volume_small2_pane_g5

0x6d96,	// (0x00013886) volume_small2_pane_g6

0x6d9f,	// (0x0001388f) volume_small2_pane_g7

0x6da8,	// (0x00013898) volume_small2_pane_g8

0x6db1,	// (0x000138a1) volume_small2_pane_g9

0x6dba,	// (0x000138aa) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001c725) volume_small2_pane_g

0xc2aa,	// (0x00018d9a) fep_vkb_top_text_pane_g1_ParamLimits

0xc2c5,	// (0x00018db5) fep_vkb_top_text_pane_t1_ParamLimits

0xc53f,	// (0x0001902f) popup_preview_fixed_window_g3_ParamLimits

0xc53f,	// (0x0001902f) popup_preview_fixed_window_g3

0x63b2,	// (0x00012ea2) popup_toolbar_trans_pane

0xa88b,	// (0x0001737b) aid_height_set_list_ParamLimits

0xa89c,	// (0x0001738c) aid_size_parent_ParamLimits

0x8e91,	// (0x00015981) list_highlight_pane_cp2_ParamLimits

0x8a3e,	// (0x0001552e) set_content_pane_g1_ParamLimits

0xab4d,	// (0x0001763d) list_single_image_pane_ParamLimits

0xab4d,	// (0x0001763d) list_single_image_pane

0xcc48,	// (0x00019738) aid_size_cell_image_ParamLimits

0xcc48,	// (0x00019738) aid_size_cell_image

0xcc55,	// (0x00019745) grid_single_image_pane_ParamLimits

0xcc55,	// (0x00019745) grid_single_image_pane

0xc56d,	// (0x0001905d) list_single_image_pane_g1_ParamLimits

0xc56d,	// (0x0001905d) list_single_image_pane_g1

0xc579,	// (0x00019069) list_single_image_pane_g2_ParamLimits

0xc579,	// (0x00019069) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001c73a) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001c73a) list_single_image_pane_g

0xcc63,	// (0x00019753) list_single_image_pane_t1_ParamLimits

0xcc63,	// (0x00019753) list_single_image_pane_t1

0xcc79,	// (0x00019769) cell_image_list_pane_ParamLimits

0xcc79,	// (0x00019769) cell_image_list_pane

0xcc8d,	// (0x0001977d) cell_image_list_pane_g1

0xcc96,	// (0x00019786) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001c73f) cell_image_list_pane_g

0xcc9f,	// (0x0001978f) aid_size_cell_tb_trans_pane

0x41fd,	// (0x00010ced) bg_tb_trans_pane

0xccb1,	// (0x000197a1) grid_tb_trans_pane

0x93e2,	// (0x00015ed2) bg_tb_trans_pane_g1

0x93f2,	// (0x00015ee2) bg_tb_trans_pane_g2

0x93ea,	// (0x00015eda) bg_tb_trans_pane_g3

0x9402,	// (0x00015ef2) bg_tb_trans_pane_g4

0x93fa,	// (0x00015eea) bg_tb_trans_pane_g5

0x9422,	// (0x00015f12) bg_tb_trans_pane_g6

0x941a,	// (0x00015f0a) bg_tb_trans_pane_g7

0x940a,	// (0x00015efa) bg_tb_trans_pane_g8

0x9412,	// (0x00015f02) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001c744) bg_tb_trans_pane_g

0xccc5,	// (0x000197b5) cell_toolbar_trans_pane_ParamLimits

0xccc5,	// (0x000197b5) cell_toolbar_trans_pane

0xbef2,	// (0x000189e2) cell_toolbar_trans_pane_g1

0xba70,	// (0x00018560) list_form2_midp_pane_t1

0xba7e,	// (0x0001856e) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001c5e1) list_form2_midp_pane_t

0xba8c,	// (0x0001857c) scroll_pane_cp51_ParamLimits

0xbc95,	// (0x00018785) form2_midp_wait_pane_g1

0xbc9e,	// (0x0001878e) form2_midp_wait_pane_g2

0xbca7,	// (0x00018797) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001c5f6) form2_midp_wait_pane_g

0x3dbb,	// (0x000108ab) list_highlight_pane_cp21_ParamLimits

0xbcef,	// (0x000187df) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbcfe,	// (0x000187ee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaacf,	// (0x000175bf) list_single_2graphic_im_pane_ParamLimits

0xaacf,	// (0x000175bf) list_single_2graphic_im_pane

0xcceb,	// (0x000197db) list_single_2graphic_im_pane_g1_ParamLimits

0xcceb,	// (0x000197db) list_single_2graphic_im_pane_g1

0xccfc,	// (0x000197ec) list_single_2graphic_im_pane_g2_ParamLimits

0xccfc,	// (0x000197ec) list_single_2graphic_im_pane_g2

0xcd08,	// (0x000197f8) list_single_2graphic_im_pane_g3_ParamLimits

0xcd08,	// (0x000197f8) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001c757) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001c757) list_single_2graphic_im_pane_g

0xcd28,	// (0x00019818) list_single_2graphic_im_pane_t1_ParamLimits

0xcd28,	// (0x00019818) list_single_2graphic_im_pane_t1

0xc54b,	// (0x0001903b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc54b,	// (0x0001903b) list_single_graphic_2heading_pane_fp

0xc5b0,	// (0x000190a0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5b0,	// (0x000190a0) list_single_graphic_2heading_pane_fp_g1

0xc561,	// (0x00019051) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc561,	// (0x00019051) list_single_graphic_2heading_pane_fp_g2

0xc56d,	// (0x0001905d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc56d,	// (0x0001905d) list_single_graphic_2heading_pane_fp_g3

0xc579,	// (0x00019069) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc579,	// (0x00019069) list_single_graphic_2heading_pane_fp_g4

0xc58d,	// (0x0001907d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc58d,	// (0x0001907d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c67e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c67e) list_single_graphic_2heading_pane_fp_g

0xcd59,	// (0x00019849) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd59,	// (0x00019849) list_single_graphic_2heading_pane_fp_t1

0xc5e8,	// (0x000190d8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5e8,	// (0x000190d8) list_single_graphic_2heading_pane_fp_t2

0xcd6f,	// (0x0001985f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd6f,	// (0x0001985f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001c760) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001c760) list_single_graphic_2heading_pane_fp_t

0xbf7e,	// (0x00018a6e) fep_hwr_write_pane_g5_ParamLimits

0xbf7e,	// (0x00018a6e) fep_hwr_write_pane_g5

0xbf8a,	// (0x00018a7a) fep_hwr_write_pane_g6_ParamLimits

0xbf8a,	// (0x00018a7a) fep_hwr_write_pane_g6

0xca32,	// (0x00019522) eswt_shell_pane_ParamLimits

0x9502,	// (0x00015ff2) bg_popup_window_pane_cp18_ParamLimits

0xa7d2,	// (0x000172c2) heading_pane_cp70

0xcb5c,	// (0x0001964c) popup_eswt_tasktip_window_t1_ParamLimits

0x8f2a,	// (0x00015a1a) aid_touch_tab_arrow_left

0x8f39,	// (0x00015a29) aid_touch_tab_arrow_right

0x79be,	// (0x000144ae) title_pane_g3_ParamLimits

0x79be,	// (0x000144ae) title_pane_g3

0x4194,	// (0x00010c84) set_value_pane_g1

0x63b2,	// (0x00012ea2) popup_toolbar_trans_pane_ParamLimits

0xcc9f,	// (0x0001978f) aid_size_cell_tb_trans_pane_ParamLimits

0x41fd,	// (0x00010ced) bg_tb_trans_pane_ParamLimits

0xccb1,	// (0x000197a1) grid_tb_trans_pane_ParamLimits

0x3eff,	// (0x000109ef) cont_note_pane_ParamLimits

0x3eff,	// (0x000109ef) cont_note_pane

0x407b,	// (0x00010b6b) cont_snote2_single_text_pane_ParamLimits

0x407b,	// (0x00010b6b) cont_snote2_single_text_pane

0x407b,	// (0x00010b6b) cont_snote2_single_graphic_pane_ParamLimits

0x407b,	// (0x00010b6b) cont_snote2_single_graphic_pane

0x9b55,	// (0x00016645) cont_note_wait_pane_ParamLimits

0x9b55,	// (0x00016645) cont_note_wait_pane

0x9b55,	// (0x00016645) cont_note_image_pane_ParamLimits

0x9b55,	// (0x00016645) cont_note_image_pane

0xcd85,	// (0x00019875) popup_note2_window_g1_ParamLimits

0xcd85,	// (0x00019875) popup_note2_window_g1

0xcdb6,	// (0x000198a6) popup_note2_window_t1_ParamLimits

0xcdb6,	// (0x000198a6) popup_note2_window_t1

0xcdfb,	// (0x000198eb) popup_note2_window_t2_ParamLimits

0xcdfb,	// (0x000198eb) popup_note2_window_t2

0xce40,	// (0x00019930) popup_note2_window_t3_ParamLimits

0xce40,	// (0x00019930) popup_note2_window_t3

0xce85,	// (0x00019975) popup_note2_window_t4_ParamLimits

0xce85,	// (0x00019975) popup_note2_window_t4

0x3f83,	// (0x00010a73) popup_note2_window_t5_ParamLimits

0x3f83,	// (0x00010a73) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001c76c) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001c76c) popup_note2_window_t

0xceb4,	// (0x000199a4) popup_note2_image_window_g1_ParamLimits

0xceb4,	// (0x000199a4) popup_note2_image_window_g1

0xcec0,	// (0x000199b0) popup_note2_image_window_g2_ParamLimits

0xcec0,	// (0x000199b0) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001c777) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001c777) popup_note2_image_window_g

0xced2,	// (0x000199c2) popup_note2_image_window_t1_ParamLimits

0xced2,	// (0x000199c2) popup_note2_image_window_t1

0xceea,	// (0x000199da) popup_note2_image_window_t2_ParamLimits

0xceea,	// (0x000199da) popup_note2_image_window_t2

0xcf02,	// (0x000199f2) popup_note2_image_window_t3_ParamLimits

0xcf02,	// (0x000199f2) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001c77c) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001c77c) popup_note2_image_window_t

0x9b63,	// (0x00016653) popup_note2_wait_window_g1_ParamLimits

0x9b63,	// (0x00016653) popup_note2_wait_window_g1

0x9b6f,	// (0x0001665f) popup_note2_wait_window_g2_ParamLimits

0x9b6f,	// (0x0001665f) popup_note2_wait_window_g2

0x9b7b,	// (0x0001666b) popup_note2_wait_window_g3_ParamLimits

0x9b7b,	// (0x0001666b) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0001c329) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0001c329) popup_note2_wait_window_g

0xcf1e,	// (0x00019a0e) popup_note2_wait_window_t1_ParamLimits

0xcf1e,	// (0x00019a0e) popup_note2_wait_window_t1

0xcf3c,	// (0x00019a2c) popup_note2_wait_window_t2_ParamLimits

0xcf3c,	// (0x00019a2c) popup_note2_wait_window_t2

0xcf5a,	// (0x00019a4a) popup_note2_wait_window_t3_ParamLimits

0xcf5a,	// (0x00019a4a) popup_note2_wait_window_t3

0xcf6c,	// (0x00019a5c) popup_note2_wait_window_t4_ParamLimits

0xcf6c,	// (0x00019a5c) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001c783) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001c783) popup_note2_wait_window_t

0xcf7e,	// (0x00019a6e) wait_bar2_pane_ParamLimits

0xcf7e,	// (0x00019a6e) wait_bar2_pane

0xcf96,	// (0x00019a86) popup_snote2_single_text_window_g1_ParamLimits

0xcf96,	// (0x00019a86) popup_snote2_single_text_window_g1

0xcfbe,	// (0x00019aae) popup_snote2_single_text_window_t1_ParamLimits

0xcfbe,	// (0x00019aae) popup_snote2_single_text_window_t1

0xd00a,	// (0x00019afa) popup_snote2_single_text_window_t2_ParamLimits

0xd00a,	// (0x00019afa) popup_snote2_single_text_window_t2

0xd056,	// (0x00019b46) popup_snote2_single_text_window_t3_ParamLimits

0xd056,	// (0x00019b46) popup_snote2_single_text_window_t3

0xd097,	// (0x00019b87) popup_snote2_single_text_window_t4_ParamLimits

0xd097,	// (0x00019b87) popup_snote2_single_text_window_t4

0xd0cd,	// (0x00019bbd) popup_snote2_single_text_window_t5_ParamLimits

0xd0cd,	// (0x00019bbd) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001c78c) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001c78c) popup_snote2_single_text_window_t

0xd0f8,	// (0x00019be8) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0f8,	// (0x00019be8) popup_snote2_single_graphic_window_g1

0xd120,	// (0x00019c10) popup_snote2_single_graphic_window_g2_ParamLimits

0xd120,	// (0x00019c10) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001c797) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001c797) popup_snote2_single_graphic_window_g

0xd148,	// (0x00019c38) popup_snote2_single_graphic_window_t1_ParamLimits

0xd148,	// (0x00019c38) popup_snote2_single_graphic_window_t1

0xd194,	// (0x00019c84) popup_snote2_single_graphic_window_t2_ParamLimits

0xd194,	// (0x00019c84) popup_snote2_single_graphic_window_t2

0xd056,	// (0x00019b46) popup_snote2_single_graphic_window_t3_ParamLimits

0xd056,	// (0x00019b46) popup_snote2_single_graphic_window_t3

0xd097,	// (0x00019b87) popup_snote2_single_graphic_window_t4_ParamLimits

0xd097,	// (0x00019b87) popup_snote2_single_graphic_window_t4

0xd0cd,	// (0x00019bbd) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0cd,	// (0x00019bbd) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001c79c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001c79c) popup_snote2_single_graphic_window_t

0xb949,	// (0x00018439) clock_nsta_pane_cp2_t1

0xb949,	// (0x00018439) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001c5b7) clock_nsta_pane_cp2_t

0x421c,	// (0x00010d0c) form_field_data_wide_pane_g1_ParamLimits

0x4164,	// (0x00010c54) form_field_data_wide_pane_g2_ParamLimits

0x4164,	// (0x00010c54) form_field_data_wide_pane_g2

0x4228,	// (0x00010d18) form_field_data_wide_pane_g3_ParamLimits

0x4228,	// (0x00010d18) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0001c15c) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0001c15c) form_field_data_wide_pane_g

0xb84b,	// (0x0001833b) grid_touch_3_pane_ParamLimits

0xb84b,	// (0x0001833b) grid_touch_3_pane

0xd1e0,	// (0x00019cd0) cell_touch_3_pane_ParamLimits

0xd1e0,	// (0x00019cd0) cell_touch_3_pane

0xbef2,	// (0x000189e2) cell_touch_3_pane_g1

0xbef2,	// (0x000189e2) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001c63c) cell_touch_3_pane_g

0x3fb5,	// (0x00010aa5) cont_query_data_pane

0x3fbd,	// (0x00010aad) cont_query_data_pane_cp1

0xd20e,	// (0x00019cfe) button_value_adjust_pane_cp7

0xd216,	// (0x00019d06) query_popup_pane_cp3

0x4934,	// (0x00011424) bg_popup_sub_pane_cp22_ParamLimits

0x5afb,	// (0x000125eb) navi_navi_volume_pane_cp2

0x5b13,	// (0x00012603) popup_side_volume_key_window_g2

0x5b1f,	// (0x0001260f) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0001c1f2) popup_side_volume_key_window_g

0x5b39,	// (0x00012629) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0001c1f9) popup_side_volume_key_window_t

0x890b,	// (0x000153fb) popup_side_volume_key_window_ParamLimits

0x80af,	// (0x00014b9f) list_double_graphic_pane_g4_ParamLimits

0x80af,	// (0x00014b9f) list_double_graphic_pane_g4

0xab0e,	// (0x000175fe) list_single_2heading_msg_pane_ParamLimits

0xab0e,	// (0x000175fe) list_single_2heading_msg_pane

0xd245,	// (0x00019d35) list_single_2heading_msg_pane_g1_ParamLimits

0xd245,	// (0x00019d35) list_single_2heading_msg_pane_g1

0x7f02,	// (0x000149f2) list_single_2heading_msg_pane_g2_ParamLimits

0x7f02,	// (0x000149f2) list_single_2heading_msg_pane_g2

0xd251,	// (0x00019d41) list_single_2heading_msg_pane_g3_ParamLimits

0xd251,	// (0x00019d41) list_single_2heading_msg_pane_g3

0xd25d,	// (0x00019d4d) list_single_2heading_msg_pane_g4_ParamLimits

0xd25d,	// (0x00019d4d) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001c7a7) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001c7a7) list_single_2heading_msg_pane_g

0xd275,	// (0x00019d65) list_single_2heading_msg_pane_t1_ParamLimits

0xd275,	// (0x00019d65) list_single_2heading_msg_pane_t1

0xd29d,	// (0x00019d8d) list_single_2heading_msg_pane_t2_ParamLimits

0xd29d,	// (0x00019d8d) list_single_2heading_msg_pane_t2

0xd2cc,	// (0x00019dbc) list_single_2heading_msg_pane_t3_ParamLimits

0xd2cc,	// (0x00019dbc) list_single_2heading_msg_pane_t3

0xd305,	// (0x00019df5) list_single_2heading_msg_pane_t4_ParamLimits

0xd305,	// (0x00019df5) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001c7b0) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001c7b0) list_single_2heading_msg_pane_t

0x3d69,	// (0x00010859) title_pane_g4_ParamLimits

0x3d69,	// (0x00010859) title_pane_g4

0x590a,	// (0x000123fa) title_pane_stacon_g3_ParamLimits

0x590a,	// (0x000123fa) title_pane_stacon_g3

0xcd1c,	// (0x0001980c) list_single_2graphic_im_pane_g4_ParamLimits

0xcd1c,	// (0x0001980c) list_single_2graphic_im_pane_g4

0xa59c,	// (0x0001708c) popup_side_volume_key_window_cp

0xae8b,	// (0x0001797b) main_idle_act2_pane_t1

0x650e,	// (0x00012ffe) toolbar_button_pane_g10

0x7eec,	// (0x000149dc) popup_toolbar_window_cp1

0xb93a,	// (0x0001842a) clock_nsta_pane_cp_t1

0xb93a,	// (0x0001842a) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001c5b2) clock_nsta_pane_cp_t

0x5afb,	// (0x000125eb) navi_navi_volume_pane_cp2_ParamLimits

0x5b07,	// (0x000125f7) popup_side_volume_key_window_g1_ParamLimits

0x5b13,	// (0x00012603) popup_side_volume_key_window_g2_ParamLimits

0x5b1f,	// (0x0001260f) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0001c1f2) popup_side_volume_key_window_g_ParamLimits

0x69c4,	// (0x000134b4) fep_hwr_aid_pane

0x6a6b,	// (0x0001355b) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf4e,	// (0x00018a3e) fep_hwr_top_pane_g1_ParamLimits

0xbf60,	// (0x00018a50) fep_hwr_top_pane_g2_ParamLimits

0x6a8b,	// (0x0001357b) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001c607) fep_hwr_top_pane_g_ParamLimits

0x6aa0,	// (0x00013590) fep_hwr_top_text_pane_ParamLimits

0xa35f,	// (0x00016e4f) aid_touch_tab_arrow_arrow_2

0xa368,	// (0x00016e58) aid_touch_tab_arrow_left_2

0x69d8,	// (0x000134c8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a0f,	// (0x000134ff) fep_hwr_prediction_pane

0xc0b9,	// (0x00018ba9) fep_vkb_prediction_pane

0xc1b6,	// (0x00018ca6) fep_vkb_side_pane_g3_ParamLimits

0xc1b6,	// (0x00018ca6) fep_vkb_side_pane_g3

0x6c1b,	// (0x0001370b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c87,	// (0x00013777) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c94,	// (0x00013784) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001c6b6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6dc3,	// (0x000138b3) fep_hwr_prediction_pane_g1

0x6dcd,	// (0x000138bd) fep_hwr_prediction_pane_g2

0x6dd5,	// (0x000138c5) fep_hwr_prediction_pane_g3

0x6ddd,	// (0x000138cd) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001c7b9) fep_hwr_prediction_pane_g

0xd32a,	// (0x00019e1a) fep_vkb_prediction_pane_g1

0xd334,	// (0x00019e24) fep_vkb_prediction_pane_g2

0xd33c,	// (0x00019e2c) fep_vkb_prediction_pane_g3

0xd344,	// (0x00019e34) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001c7c2) fep_vkb_prediction_pane_g

0x67fc,	// (0x000132ec) slider_set_pane_g3

0x6810,	// (0x00013300) slider_set_pane_g4

0x6828,	// (0x00013318) slider_set_pane_g5

0x67fc,	// (0x000132ec) slider_set_pane_g6

0x683e,	// (0x0001332e) slider_set_pane_g7

0xa9fd,	// (0x000174ed) slider_form_pane_g3

0xaa06,	// (0x000174f6) slider_form_pane_g4

0xaa0e,	// (0x000174fe) slider_form_pane_g5

0xa9fd,	// (0x000174ed) slider_form_pane_g6

0xaa16,	// (0x00017506) slider_form_pane_g7

0xb16e,	// (0x00017c5e) slider_set_pane_vc_g3

0xb177,	// (0x00017c67) slider_set_pane_vc_g4

0xb180,	// (0x00017c70) slider_set_pane_vc_g5

0xb16e,	// (0x00017c5e) slider_set_pane_vc_g6

0xb189,	// (0x00017c79) slider_set_pane_vc_g7

0xb61e,	// (0x0001810e) slider_form_pane_vc_g1

0xb627,	// (0x00018117) slider_form_pane_vc_g2

0xb630,	// (0x00018120) slider_form_pane_vc_g3

0xb61e,	// (0x0001810e) slider_form_pane_vc_g4

0xb639,	// (0x00018129) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001c584) slider_form_pane_vc_g

0x55df,	// (0x000120cf) main_idle_act3_pane

0xd34c,	// (0x00019e3c) ai3_links_pane

0xd355,	// (0x00019e45) popup_ai3_data_window_ParamLimits

0xd355,	// (0x00019e45) popup_ai3_data_window

0x3bbc,	// (0x000106ac) grid_ai3_links_pane

0xd36d,	// (0x00019e5d) cell_ai3_links_pane_ParamLimits

0xd36d,	// (0x00019e5d) cell_ai3_links_pane

0xd385,	// (0x00019e75) bg_popup_sub_pane_cp11

0xd392,	// (0x00019e82) cell_ai3_links_pane_g1

0x3bbc,	// (0x000106ac) bg_popup_sub_pane_cp12

0xd3b7,	// (0x00019ea7) heading_ai3_data_pane

0xd3bf,	// (0x00019eaf) list_ai3_gene_pane

0xd3cb,	// (0x00019ebb) popup_ai3_data_window_g1

0xd3d3,	// (0x00019ec3) heading_ai3_data_pane_g1

0xd3db,	// (0x00019ecb) heading_ai3_data_pane_t1

0xd3e9,	// (0x00019ed9) list_double_ai3_gene_pane_ParamLimits

0xd3e9,	// (0x00019ed9) list_double_ai3_gene_pane

0xd3f6,	// (0x00019ee6) list_single_ai3_gene_pane_ParamLimits

0xd3f6,	// (0x00019ee6) list_single_ai3_gene_pane

0xbeb7,	// (0x000189a7) list_highlight_pane_cp7_ParamLimits

0xbeb7,	// (0x000189a7) list_highlight_pane_cp7

0xd403,	// (0x00019ef3) list_single_a13_gene_pane_t1_ParamLimits

0xd403,	// (0x00019ef3) list_single_a13_gene_pane_t1

0xd41a,	// (0x00019f0a) list_single_ai3_gene_pane_g1

0xd423,	// (0x00019f13) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001c7cb) list_single_ai3_gene_pane_g

0xd42b,	// (0x00019f1b) list_double_ai3_gene_pane_g1_ParamLimits

0xd42b,	// (0x00019f1b) list_double_ai3_gene_pane_g1

0xd437,	// (0x00019f27) list_double_ai3_gene_pane_t1_ParamLimits

0xd437,	// (0x00019f27) list_double_ai3_gene_pane_t1

0xd453,	// (0x00019f43) list_double_ai3_gene_pane_t2_ParamLimits

0xd453,	// (0x00019f43) list_double_ai3_gene_pane_t2

0xd468,	// (0x00019f58) list_double_ai3_gene_pane_t3_ParamLimits

0xd468,	// (0x00019f58) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001c7d0) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001c7d0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd227,	// (0x00019d17) aid_size_min_col_2

0xd231,	// (0x00019d21) aid_size_min_msg_ParamLimits

0xd231,	// (0x00019d21) aid_size_min_msg

0xc2b6,	// (0x00018da6) fep_vkb_top_text_pane_g2_ParamLimits

0xc2b6,	// (0x00018da6) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001c637) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001c637) fep_vkb_top_text_pane_g

0x55df,	// (0x000120cf) main_hc_apps_shell_pane

0xd485,	// (0x00019f75) grid_hc_apps_pane_ParamLimits

0xd485,	// (0x00019f75) grid_hc_apps_pane

0xd494,	// (0x00019f84) list_hc_apps_pane

0xd49c,	// (0x00019f8c) scroll_pane_cp37_ParamLimits

0xd49c,	// (0x00019f8c) scroll_pane_cp37

0xd4a8,	// (0x00019f98) cell_hc_apps_pane_ParamLimits

0xd4a8,	// (0x00019f98) cell_hc_apps_pane

0xd577,	// (0x0001a067) cell_hc_apps_pane_g1_ParamLimits

0xd577,	// (0x0001a067) cell_hc_apps_pane_g1

0xd5a8,	// (0x0001a098) cell_hc_apps_pane_g2_ParamLimits

0xd5a8,	// (0x0001a098) cell_hc_apps_pane_g2

0xd5c4,	// (0x0001a0b4) cell_hc_apps_pane_g3_ParamLimits

0xd5c4,	// (0x0001a0b4) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001c7d7) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001c7d7) cell_hc_apps_pane_g

0xd5e6,	// (0x0001a0d6) cell_hc_apps_pane_t1_ParamLimits

0xd5e6,	// (0x0001a0d6) cell_hc_apps_pane_t1

0x3eff,	// (0x000109ef) grid_highlight_pane_cp10_ParamLimits

0x3eff,	// (0x000109ef) grid_highlight_pane_cp10

0xd626,	// (0x0001a116) list_single_hc_apps_pane_ParamLimits

0xd626,	// (0x0001a116) list_single_hc_apps_pane

0xd689,	// (0x0001a179) list_single_hc_apps_pane_g1

0xd6a2,	// (0x0001a192) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001c7de) list_single_hc_apps_pane_g

0xd6bb,	// (0x0001a1ab) list_single_hc_apps_pane_g2_copy1

0xd6d7,	// (0x0001a1c7) list_single_hc_apps_pane_t1

0x3dbb,	// (0x000108ab) bg_set_opt_pane_cp_ParamLimits

0x5832,	// (0x00012322) setting_slider_pane_t1_ParamLimits

0x584b,	// (0x0001233b) setting_slider_pane_t2_ParamLimits

0x5865,	// (0x00012355) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c04e) setting_slider_pane_t_ParamLimits

0x587d,	// (0x0001236d) slider_set_pane_ParamLimits

0x5d9b,	// (0x0001288b) control_pane_g5_ParamLimits

0x5d9b,	// (0x0001288b) control_pane_g5

0xa850,	// (0x00017340) slider_set_pane_g1_ParamLimits

0x67f0,	// (0x000132e0) slider_set_pane_g2_ParamLimits

0x67fc,	// (0x000132ec) slider_set_pane_g3_ParamLimits

0x6810,	// (0x00013300) slider_set_pane_g4_ParamLimits

0x6828,	// (0x00013318) slider_set_pane_g5_ParamLimits

0x67fc,	// (0x000132ec) slider_set_pane_g6_ParamLimits

0x683e,	// (0x0001332e) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0001c445) slider_set_pane_g_ParamLimits

0x89e9,	// (0x000154d9) navi_icon_text_pane_ParamLimits

0x8eeb,	// (0x000159db) aid_fill_nsta_2_ParamLimits

0x8f2a,	// (0x00015a1a) aid_touch_tab_arrow_left_ParamLimits

0x8f39,	// (0x00015a29) aid_touch_tab_arrow_right_ParamLimits

0x8fa6,	// (0x00015a96) clock_nsta_pane_ParamLimits

0xa341,	// (0x00016e31) navi_icon_pane_g1_ParamLimits

0xa34d,	// (0x00016e3d) navi_text_pane_t1_ParamLimits

0xba4a,	// (0x0001853a) navi_icon_text_pane_g1_ParamLimits

0xba56,	// (0x00018546) navi_icon_text_pane_t1_ParamLimits

0xd689,	// (0x0001a179) list_single_hc_apps_pane_g1_ParamLimits

0xd6a2,	// (0x0001a192) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001c7de) list_single_hc_apps_pane_g_ParamLimits

0xd6bb,	// (0x0001a1ab) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6d7,	// (0x0001a1c7) list_single_hc_apps_pane_t1_ParamLimits

0x573c,	// (0x0001222c) popup_toolbar2_fixed_window_ParamLimits

0x573c,	// (0x0001222c) popup_toolbar2_fixed_window

0x63a8,	// (0x00012e98) popup_toolbar2_float_window

0x3bbc,	// (0x000106ac) bg_popup_sub_pane_cp27

0xd705,	// (0x0001a1f5) grid_toolbar2_float_pane

0x3bbc,	// (0x000106ac) bg_popup_sub_pane_cp26

0xd705,	// (0x0001a1f5) grid_toolbar2_fixed_pane

0xd70d,	// (0x0001a1fd) cell_toolbar2_fixed_pane_ParamLimits

0xd70d,	// (0x0001a1fd) cell_toolbar2_fixed_pane

0xd71d,	// (0x0001a20d) cell_toolbar2_fixed_pane_g1

0x627a,	// (0x00012d6a) toolbar2_fixed_button_pane

0x93e2,	// (0x00015ed2) toolbar2_fixed_button_pane_g1

0x93f2,	// (0x00015ee2) toolbar2_fixed_button_pane_g2

0x93ea,	// (0x00015eda) toolbar2_fixed_button_pane_g3

0x9402,	// (0x00015ef2) toolbar2_fixed_button_pane_g4

0x93fa,	// (0x00015eea) toolbar2_fixed_button_pane_g5

0x940a,	// (0x00015efa) toolbar2_fixed_button_pane_g6

0x9412,	// (0x00015f02) toolbar2_fixed_button_pane_g7

0x9422,	// (0x00015f12) toolbar2_fixed_button_pane_g8

0x941a,	// (0x00015f0a) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0001c347) toolbar2_fixed_button_pane_g

0xd726,	// (0x0001a216) cell_toolbar2_float_pane_ParamLimits

0xd726,	// (0x0001a216) cell_toolbar2_float_pane

0xd737,	// (0x0001a227) cell_toolbar2_float_pane_g1

0x627a,	// (0x00012d6a) toolbar2_fixed_button_pane_cp

0xc020,	// (0x00018b10) fep_vkb_accented_list_pane_ParamLimits

0xc020,	// (0x00018b10) fep_vkb_accented_list_pane

0x6bfb,	// (0x000136eb) bg_popup_fep_shadow_pane_g9

0x8b69,	// (0x00015659) bg_popup_fep_shadow_pane_cp3

0x4365,	// (0x00010e55) list_accented_list_pane

0xd740,	// (0x0001a230) list_single_accented_list_pane_ParamLimits

0xd740,	// (0x0001a230) list_single_accented_list_pane

0x8b69,	// (0x00015659) list_highlight_pane_cp10

0xd751,	// (0x0001a241) list_single_accented_list_pane_t1

0x62f8,	// (0x00012de8) popup_slider_window_ParamLimits

0x62f8,	// (0x00012de8) popup_slider_window

0xd21e,	// (0x00019d0e) aid_indentation_list_msg

0xd80f,	// (0x0001a2ff) bg_popup_window_pane_cp19

0xd877,	// (0x0001a367) popup_slider_window_g1

0xd893,	// (0x0001a383) popup_slider_window_g2

0xd8af,	// (0x0001a39f) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001c7e3) popup_slider_window_g

0xd915,	// (0x0001a405) popup_slider_window_t1

0xd989,	// (0x0001a479) small_volume_slider_vertical_pane

0xbef2,	// (0x000189e2) small_volume_slider_vertical_pane_g1

0xbef2,	// (0x000189e2) small_volume_slider_vertical_pane_g2

0xd9a5,	// (0x0001a495) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001c7f5) small_volume_slider_vertical_pane_g

0x5502,	// (0x00011ff2) area_side_right_pane_ParamLimits

0x5502,	// (0x00011ff2) area_side_right_pane

0x6de5,	// (0x000138d5) aid_size_side_button_ParamLimits

0x6de5,	// (0x000138d5) aid_size_side_button

0x6df9,	// (0x000138e9) grid_sctrl_middle_pane_ParamLimits

0x6df9,	// (0x000138e9) grid_sctrl_middle_pane

0x6e18,	// (0x00013908) sctrl_sk_bottom_pane

0x6e29,	// (0x00013919) sctrl_sk_top_pane

0x6e3b,	// (0x0001392b) aid_touch_sctrl_top

0x6e48,	// (0x00013938) bg_sctrl_sk_pane_ParamLimits

0x6e48,	// (0x00013938) bg_sctrl_sk_pane

0x6e56,	// (0x00013946) sctrl_sk_top_pane_g1

0x6e63,	// (0x00013953) sctrl_sk_top_pane_t1

0x6e3b,	// (0x0001392b) aid_touch_sctrl_bottom

0x6e48,	// (0x00013938) bg_sctrl_sk_pane_cp_ParamLimits

0x6e48,	// (0x00013938) bg_sctrl_sk_pane_cp

0x6e7e,	// (0x0001396e) sctrl_sk_bottom_pane_g1

0x6e63,	// (0x00013953) sctrl_sk_bottom_pane_t1

0x6e87,	// (0x00013977) cell_sctrl_middle_pane_ParamLimits

0x6e87,	// (0x00013977) cell_sctrl_middle_pane

0x6ea2,	// (0x00013992) aid_touch_sctrl_middle_ParamLimits

0x6ea2,	// (0x00013992) aid_touch_sctrl_middle

0x6eb4,	// (0x000139a4) bg_sctrl_middle_pane_ParamLimits

0x6eb4,	// (0x000139a4) bg_sctrl_middle_pane

0x6c1b,	// (0x0001370b) cell_sctrl_middle_pane_g1_ParamLimits

0x6c1b,	// (0x0001370b) cell_sctrl_middle_pane_g1

0x6ec2,	// (0x000139b2) cell_sctrl_middle_pane_g2_ParamLimits

0x6ec2,	// (0x000139b2) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001c801) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001c801) cell_sctrl_middle_pane_g

0x93e2,	// (0x00015ed2) bg_sctrl_middle_pane_g1

0x93ea,	// (0x00015eda) bg_sctrl_middle_pane_g2

0x93f2,	// (0x00015ee2) bg_sctrl_middle_pane_g3

0x93fa,	// (0x00015eea) bg_sctrl_middle_pane_g4

0x9402,	// (0x00015ef2) bg_sctrl_middle_pane_g5

0x940a,	// (0x00015efa) bg_sctrl_middle_pane_g6

0x9412,	// (0x00015f02) bg_sctrl_middle_pane_g7

0x941a,	// (0x00015f0a) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001c806) bg_sctrl_middle_pane_g

0x9422,	// (0x00015f12) bg_sctrl_middle_pane_g8_copy1

0x93e2,	// (0x00015ed2) bg_sctrl_sk_pane_g1

0x93f2,	// (0x00015ee2) bg_sctrl_sk_pane_g2

0x93ea,	// (0x00015eda) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0001c347) bg_sctrl_sk_pane_g

0x40c9,	// (0x00010bb9) aid_size_touch_scroll_bar

0x9402,	// (0x00015ef2) bg_sctrl_sk_pane_g4

0x93fa,	// (0x00015eea) bg_sctrl_sk_pane_g5

0x940a,	// (0x00015efa) bg_sctrl_sk_pane_g6

0x9412,	// (0x00015f02) bg_sctrl_sk_pane_g7

0x9422,	// (0x00015f12) bg_sctrl_sk_pane_g8

0x941a,	// (0x00015f0a) bg_sctrl_sk_pane_g9

0x5f61,	// (0x00012a51) popup_fep_china_hwr2_fs_candidate_window

0x5f6b,	// (0x00012a5b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5f6b,	// (0x00012a5b) popup_fep_china_hwr2_fs_control_window

0x6c1b,	// (0x0001370b) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001c7fc) sctrl_sk_top_pane_g

0xd9ae,	// (0x0001a49e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9ae,	// (0x0001a49e) aid_fep_china_hwr2_fs_cell

0xd9c0,	// (0x0001a4b0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c0,	// (0x0001a4b0) bg_popup_fep_shadow_pane_cp4

0xd9d7,	// (0x0001a4c7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9d7,	// (0x0001a4c7) bg_popup_fep_shadow_pane_cp5

0xd9e9,	// (0x0001a4d9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9e9,	// (0x0001a4d9) popup_fep_china_hwr2_fs_control_bar_grid

0xd9f9,	// (0x0001a4e9) popup_fep_china_hwr2_fs_control_funtion_grid

0xda01,	// (0x0001a4f1) aid_fep_china_hwr2_fs_candi_cell

0x3bbc,	// (0x000106ac) bg_popup_fep_shadow_pane_cp6

0xda0b,	// (0x0001a4fb) popup_fep_china_hwr2_fs_candidate_grid

0xda15,	// (0x0001a505) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda15,	// (0x0001a505) cell_fep_china_hwr2_fs_funtion_grid

0xbef2,	// (0x000189e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda2d,	// (0x0001a51d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda2d,	// (0x0001a51d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda3b,	// (0x0001a52b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda3b,	// (0x0001a52b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001c817) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001c817) cell_fep_china_hwr2_fs_funtion_grid_g

0xda51,	// (0x0001a541) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda51,	// (0x0001a541) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda66,	// (0x0001a556) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda66,	// (0x0001a556) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001c81c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001c81c) cell_fep_china_hwr2_fs_funtion_grid_t

0xda82,	// (0x0001a572) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda8a,	// (0x0001a57a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda92,	// (0x0001a582) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001c821) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda9a,	// (0x0001a58a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda9a,	// (0x0001a58a) cell_fep_china_hwr2_fs_candidate_grid

0xdab3,	// (0x0001a5a3) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdabb,	// (0x0001a5ab) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbef2,	// (0x000189e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbef2,	// (0x000189e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001c63c) cell_fep_china_hwr2_fs_candidate_grid_g

0xdac3,	// (0x0001a5b3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fb9,	// (0x00015aa9) clock_nsta_pane_cp_24_ParamLimits

0x8fb9,	// (0x00015aa9) clock_nsta_pane_cp_24

0x9037,	// (0x00015b27) indicator_nsta_pane_cp_24_ParamLimits

0x9037,	// (0x00015b27) indicator_nsta_pane_cp_24

0xa1bd,	// (0x00016cad) heading_pane_g1

0x0001,

0xf8bc,	// (0x0001c3ac) heading_pane_g

0xacd4,	// (0x000177c4) grid_sct_catagory_button_pane

0xad04,	// (0x000177f4) scroll_pane_cp5_ParamLimits

0xba98,	// (0x00018588) button_value_adjust_pane_cp5_ParamLimits

0xba98,	// (0x00018588) button_value_adjust_pane_cp5

0xbb92,	// (0x00018682) form2_midp_time_pane_ParamLimits

0xdad1,	// (0x0001a5c1) cell_sct_catagory_button_pane_ParamLimits

0xdad1,	// (0x0001a5c1) cell_sct_catagory_button_pane

0xbeb7,	// (0x000189a7) bg_button_pane_cp01_ParamLimits

0xbeb7,	// (0x000189a7) bg_button_pane_cp01

0xbef2,	// (0x000189e2) cell_sct_catagory_button_pane_g1

0x6337,	// (0x00012e27) popup_tb_extension_window

0xdae3,	// (0x0001a5d3) aid_size_cell_ext_ParamLimits

0xdae3,	// (0x0001a5d3) aid_size_cell_ext

0x3eff,	// (0x000109ef) bg_tb_trans_pane_cp1_ParamLimits

0x3eff,	// (0x000109ef) bg_tb_trans_pane_cp1

0xdb03,	// (0x0001a5f3) grid_tb_ext_pane_ParamLimits

0xdb03,	// (0x0001a5f3) grid_tb_ext_pane

0xdb33,	// (0x0001a623) cell_tb_ext_pane_ParamLimits

0xdb33,	// (0x0001a623) cell_tb_ext_pane

0xdb4a,	// (0x0001a63a) cell_tb_ext_pane_g1_ParamLimits

0xdb4a,	// (0x0001a63a) cell_tb_ext_pane_g1

0xdb67,	// (0x0001a657) cell_tb_ext_pane_t1

0x3eff,	// (0x000109ef) list_highlight_pane_cp11_ParamLimits

0x3eff,	// (0x000109ef) list_highlight_pane_cp11

0x575b,	// (0x0001224b) popup_uni_indicator_window_ParamLimits

0x575b,	// (0x0001224b) popup_uni_indicator_window

0x41fd,	// (0x00010ced) bg_popup_sub_pane_cp14

0xdb83,	// (0x0001a673) list_uniindi_pane

0xdb8f,	// (0x0001a67f) uniindi_top_pane

0x3eff,	// (0x000109ef) bg_uniindi_top_pane

0xdbae,	// (0x0001a69e) uniindi_top_pane_g1

0xdbc4,	// (0x0001a6b4) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001c828) uniindi_top_pane_g

0xdbee,	// (0x0001a6de) uniindi_top_pane_t1

0xdc18,	// (0x0001a708) list_single_uniindi_pane_ParamLimits

0xdc18,	// (0x0001a708) list_single_uniindi_pane

0xbef2,	// (0x000189e2) bg_uniindi_top_pane_g1

0xdc2a,	// (0x0001a71a) list_single_uniindi_pane_g1

0xdc3d,	// (0x0001a72d) list_single_uniindi_pane_t1

0x55df,	// (0x000120cf) control_bg_pane

0xdc62,	// (0x0001a752) bg_sctrl_sk_pane_cp1

0xdc6b,	// (0x0001a75b) bg_sctrl_sk_pane_cp2

0xdc74,	// (0x0001a764) control_bg_pane_g1

0xdc7d,	// (0x0001a76d) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001c831) control_bg_pane_g

0xb8ee,	// (0x000183de) cell_indicator_nsta_pane_g1_ParamLimits

0xb8fc,	// (0x000183ec) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001c5a0) cell_indicator_nsta_pane_g_ParamLimits

0xbc1a,	// (0x0001870a) form2_midp_time_pane_t1_ParamLimits

0x5ecb,	// (0x000129bb) main_idle_act4_pane_ParamLimits

0x5ecb,	// (0x000129bb) main_idle_act4_pane

0x6337,	// (0x00012e27) popup_tb_extension_window_ParamLimits

0xdb23,	// (0x0001a613) tb_ext_find_pane_ParamLimits

0xdb23,	// (0x0001a613) tb_ext_find_pane

0xdc86,	// (0x0001a776) ai_gene_pane_1_cp1

0x8cb4,	// (0x000157a4) ai_gene_pane_2_cp1

0xdc8e,	// (0x0001a77e) list_single_idle_plugin_calendar_pane

0xdc97,	// (0x0001a787) list_single_idle_plugin_notification_pane

0xdca0,	// (0x0001a790) list_single_idle_plugin_player_pane

0xdca9,	// (0x0001a799) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca9,	// (0x0001a799) list_single_idle_plugin_shortcut_pane

0xdccb,	// (0x0001a7bb) main_idle_act4_pane_t1

0xdcdd,	// (0x0001a7cd) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001c836) main_idle_act4_pane_t

0xdcef,	// (0x0001a7df) middle_sk_idle_act4_pane_ParamLimits

0xdcef,	// (0x0001a7df) middle_sk_idle_act4_pane

0xdd05,	// (0x0001a7f5) popup_clock_digital_analogue_window_cp2

0xdd1f,	// (0x0001a80f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1f,	// (0x0001a80f) shortcut_wheel_idle_act4_pane

0xbef2,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g1

0xbef2,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g2

0xbef2,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g3

0xbef2,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g4

0xbef2,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g5

0xdd33,	// (0x0001a823) shortcut_wheel_idle_act4_pane_g6

0xdd3b,	// (0x0001a82b) shortcut_wheel_idle_act4_pane_g7

0xdd43,	// (0x0001a833) shortcut_wheel_idle_act4_pane_g8

0xdd4b,	// (0x0001a83b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001c83b) shortcut_wheel_idle_act4_pane_g

0xc162,	// (0x00018c52) middle_sk_idle_act4_pane_g1_ParamLimits

0xc162,	// (0x00018c52) middle_sk_idle_act4_pane_g1

0xddaf,	// (0x0001a89f) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaf,	// (0x0001a89f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001c85e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001c85e) middle_sk_idle_act4_pane_g

0xddbb,	// (0x0001a8ab) middle_sk_idle_act4_pane_t1_ParamLimits

0xddbb,	// (0x0001a8ab) middle_sk_idle_act4_pane_t1

0xddd8,	// (0x0001a8c8) grid_ai_shortcut_pane_ParamLimits

0xddd8,	// (0x0001a8c8) grid_ai_shortcut_pane

0xddf1,	// (0x0001a8e1) list_highlight_pane_cp16_ParamLimits

0xddf1,	// (0x0001a8e1) list_highlight_pane_cp16

0xddfe,	// (0x0001a8ee) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddfe,	// (0x0001a8ee) list_single_idle_plugin_shortcut_pane_g1

0xde0a,	// (0x0001a8fa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde0a,	// (0x0001a8fa) list_single_idle_plugin_shortcut_pane_g2

0xde22,	// (0x0001a912) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde22,	// (0x0001a912) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001c863) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001c863) list_single_idle_plugin_shortcut_pane_g

0xde35,	// (0x0001a925) cell_ai_shortcut_pane_ParamLimits

0xde35,	// (0x0001a925) cell_ai_shortcut_pane

0xde59,	// (0x0001a949) cell_ai_shortcut_pane_g1_ParamLimits

0xde59,	// (0x0001a949) cell_ai_shortcut_pane_g1

0xdc86,	// (0x0001a776) ai_gene_pane_1_cp2

0xde7b,	// (0x0001a96b) ai_gene_pane_2_cp2

0xde83,	// (0x0001a973) list_highlight_pane_cp15

0xde8c,	// (0x0001a97c) list_single_idle_plugin_calendar_pane_g1

0xde83,	// (0x0001a973) list_highlight_pane_cp17

0xde94,	// (0x0001a984) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9c,	// (0x0001a98c) list_single_idle_plugin_player_pane_g1

0xaf2d,	// (0x00017a1d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001c86a) list_single_idle_plugin_player_pane_g

0xdea4,	// (0x0001a994) list_single_idle_plugin_player_pane_t1

0xdeb2,	// (0x0001a9a2) list_single_idle_plugin_player_pane_t2

0xdec0,	// (0x0001a9b0) list_single_idle_plugin_player_pane_t3

0xdece,	// (0x0001a9be) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001c86f) list_single_idle_plugin_player_pane_t

0xdedc,	// (0x0001a9cc) wait_bar_pane_cp15

0xdee4,	// (0x0001a9d4) grid_ai_notification_pane

0xaf2d,	// (0x00017a1d) list_single_idle_plugin_notification_pane_g1

0xdeed,	// (0x0001a9dd) cell_ai_notification_pane_ParamLimits

0xdeed,	// (0x0001a9dd) cell_ai_notification_pane

0xdefa,	// (0x0001a9ea) cell_ai_notification_pane_g1

0xdf02,	// (0x0001a9f2) cell_ai_notification_pane_t1

0xdf10,	// (0x0001aa00) tb_ext_find_button_pane

0xdf18,	// (0x0001aa08) tb_ext_find_pane_g1

0xdf20,	// (0x0001aa10) tb_ext_find_pane_t1

0x4859,	// (0x00011349) tb_ext_find_button_pane_g1

0xdf2e,	// (0x0001aa1e) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001c878) tb_ext_find_button_pane_g

0xdccb,	// (0x0001a7bb) main_idle_act4_pane_t1_ParamLimits

0xdcdd,	// (0x0001a7cd) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001c836) main_idle_act4_pane_t_ParamLimits

0xdd05,	// (0x0001a7f5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd13,	// (0x0001a803) sat_plugin_idle_act4_pane_ParamLimits

0xdd13,	// (0x0001a803) sat_plugin_idle_act4_pane

0xdf37,	// (0x0001aa27) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf37,	// (0x0001aa27) sat_plugin_idle_act4_pane_t1

0xdf4a,	// (0x0001aa3a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf4a,	// (0x0001aa3a) sat_plugin_idle_act4_pane_t2

0xdf5d,	// (0x0001aa4d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf5d,	// (0x0001aa4d) sat_plugin_idle_act4_pane_t3

0xdf70,	// (0x0001aa60) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf70,	// (0x0001aa60) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001c87d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001c87d) sat_plugin_idle_act4_pane_t

0x56a4,	// (0x00012194) popup_battery_window_ParamLimits

0x56a4,	// (0x00012194) popup_battery_window

0x3eff,	// (0x000109ef) bg_popup_sub_pane_cp25_ParamLimits

0x3eff,	// (0x000109ef) bg_popup_sub_pane_cp25

0xdf83,	// (0x0001aa73) popup_battery_window_g1_ParamLimits

0xdf83,	// (0x0001aa73) popup_battery_window_g1

0xdf8f,	// (0x0001aa7f) popup_battery_window_t1_ParamLimits

0xdf8f,	// (0x0001aa7f) popup_battery_window_t1

0xdfa1,	// (0x0001aa91) popup_battery_window_t2_ParamLimits

0xdfa1,	// (0x0001aa91) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001c886) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001c886) popup_battery_window_t

0x8b7d,	// (0x0001566d) midp_canvas_pane_ParamLimits

0x8bf6,	// (0x000156e6) midp_keypad_pane_ParamLimits

0x8bf6,	// (0x000156e6) midp_keypad_pane

0x8e91,	// (0x00015981) main_midp_pane_ParamLimits

0xb958,	// (0x00018448) signal_pane_g2_cp_ParamLimits

0xdfbe,	// (0x0001aaae) aid_size_cell_midp_keypad_ParamLimits

0xdfbe,	// (0x0001aaae) aid_size_cell_midp_keypad

0xdfd8,	// (0x0001aac8) midp_keyp_game_grid_pane_ParamLimits

0xdfd8,	// (0x0001aac8) midp_keyp_game_grid_pane

0xdff8,	// (0x0001aae8) midp_keyp_rocker_pane_ParamLimits

0xdff8,	// (0x0001aae8) midp_keyp_rocker_pane

0xe031,	// (0x0001ab21) midp_keyp_sk_left_pane_ParamLimits

0xe031,	// (0x0001ab21) midp_keyp_sk_left_pane

0xe08b,	// (0x0001ab7b) midp_keyp_sk_right_pane_ParamLimits

0xe08b,	// (0x0001ab7b) midp_keyp_sk_right_pane

0x3bbc,	// (0x000106ac) bg_button_pane_cp03

0xe0e5,	// (0x0001abd5) midp_keyp_sk_left_pane_g1

0x3bbc,	// (0x000106ac) bg_button_pane_cp04

0xe0e5,	// (0x0001abd5) midp_keyp_sk_right_pane_g1

0xbef2,	// (0x000189e2) midp_keyp_rocker_pane_g1

0xe0ee,	// (0x0001abde) keyp_game_cell_pane_ParamLimits

0xe0ee,	// (0x0001abde) keyp_game_cell_pane

0x3bbc,	// (0x000106ac) bg_button_pane_cp02

0xe101,	// (0x0001abf1) keyp_game_cell_pane_g1

0x56da,	// (0x000121ca) popup_fep_vkb2_window_ParamLimits

0x56da,	// (0x000121ca) popup_fep_vkb2_window

0x6ee0,	// (0x000139d0) aid_size_cell_vkb2_ParamLimits

0x6ee0,	// (0x000139d0) aid_size_cell_vkb2

0x6f34,	// (0x00013a24) popup_fep_vkb2_window_g1_ParamLimits

0x6f34,	// (0x00013a24) popup_fep_vkb2_window_g1

0x6f7c,	// (0x00013a6c) vkb2_area_bottom_pane_ParamLimits

0x6f7c,	// (0x00013a6c) vkb2_area_bottom_pane

0x6fc8,	// (0x00013ab8) vkb2_area_keypad_pane_ParamLimits

0x6fc8,	// (0x00013ab8) vkb2_area_keypad_pane

0x700a,	// (0x00013afa) vkb2_area_top_pane_ParamLimits

0x700a,	// (0x00013afa) vkb2_area_top_pane

0x7084,	// (0x00013b74) vkb2_top_entry_pane_ParamLimits

0x7084,	// (0x00013b74) vkb2_top_entry_pane

0x70ae,	// (0x00013b9e) vkb2_top_grid_left_pane_ParamLimits

0x70ae,	// (0x00013b9e) vkb2_top_grid_left_pane

0x70cc,	// (0x00013bbc) vkb2_top_grid_right_pane_ParamLimits

0x70cc,	// (0x00013bbc) vkb2_top_grid_right_pane

0x70ea,	// (0x00013bda) vkb2_cell_keypad_pane_ParamLimits

0x70ea,	// (0x00013bda) vkb2_cell_keypad_pane

0x71bb,	// (0x00013cab) vkb2_area_bottom_grid_pane_ParamLimits

0x71bb,	// (0x00013cab) vkb2_area_bottom_grid_pane

0x71e1,	// (0x00013cd1) vkb2_area_bottom_pane_g1_ParamLimits

0x71e1,	// (0x00013cd1) vkb2_area_bottom_pane_g1

0x7205,	// (0x00013cf5) vkb2_area_bottom_pane_g2_ParamLimits

0x7205,	// (0x00013cf5) vkb2_area_bottom_pane_g2

0x7233,	// (0x00013d23) vkb2_area_bottom_pane_g3_ParamLimits

0x7233,	// (0x00013d23) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001c88b) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001c88b) vkb2_area_bottom_pane_g

0x7294,	// (0x00013d84) vkb2_top_cell_left_pane_ParamLimits

0x7294,	// (0x00013d84) vkb2_top_cell_left_pane

0xe112,	// (0x0001ac02) vkb2_top_entry_pane_g1_ParamLimits

0xe112,	// (0x0001ac02) vkb2_top_entry_pane_g1

0xe120,	// (0x0001ac10) vkb2_top_entry_pane_t1_ParamLimits

0xe120,	// (0x0001ac10) vkb2_top_entry_pane_t1

0xe152,	// (0x0001ac42) vkb2_top_entry_pane_t2_ParamLimits

0xe152,	// (0x0001ac42) vkb2_top_entry_pane_t2

0xe184,	// (0x0001ac74) vkb2_top_entry_pane_t3_ParamLimits

0xe184,	// (0x0001ac74) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001c892) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001c892) vkb2_top_entry_pane_t

0x72e1,	// (0x00013dd1) vkb2_top_grid_right_pane_g1_ParamLimits

0x72e1,	// (0x00013dd1) vkb2_top_grid_right_pane_g1

0x72f7,	// (0x00013de7) vkb2_top_grid_right_pane_g2_ParamLimits

0x72f7,	// (0x00013de7) vkb2_top_grid_right_pane_g2

0x730f,	// (0x00013dff) vkb2_top_grid_right_pane_g3_ParamLimits

0x730f,	// (0x00013dff) vkb2_top_grid_right_pane_g3

0x7327,	// (0x00013e17) vkb2_top_grid_right_pane_g4_ParamLimits

0x7327,	// (0x00013e17) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001c899) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001c899) vkb2_top_grid_right_pane_g

0x733d,	// (0x00013e2d) vkb2_top_cell_left_pane_g1

0x7354,	// (0x00013e44) vkb2_cell_keypad_pane_g1_ParamLimits

0x7354,	// (0x00013e44) vkb2_cell_keypad_pane_g1

0xe1a8,	// (0x0001ac98) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1a8,	// (0x0001ac98) vkb2_cell_keypad_pane_t1

0x7362,	// (0x00013e52) vkb2_cell_bottom_grid_pane_ParamLimits

0x7362,	// (0x00013e52) vkb2_cell_bottom_grid_pane

0x739b,	// (0x00013e8b) vkb2_cell_bottom_grid_pane_g1

0xdd53,	// (0x0001a843) aid_call2_pane_cp02

0xdd5b,	// (0x0001a84b) aid_call_pane_cp02

0xdd63,	// (0x0001a853) clock_digital_number_pane_cp10

0xdd6b,	// (0x0001a85b) clock_digital_number_pane_cp11

0xdd73,	// (0x0001a863) clock_digital_number_pane_cp12

0xdd7b,	// (0x0001a86b) clock_digital_number_pane_cp13

0xdd83,	// (0x0001a873) clock_digital_separator_pane_cp10

0x4859,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g1

0x4859,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g2

0xdd8b,	// (0x0001a87b) popup_clock_digital_analogue_window_cp2_g3

0x4859,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g4

0xdd8b,	// (0x0001a87b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001c84e) popup_clock_digital_analogue_window_cp2_g

0xdd93,	// (0x0001a883) popup_clock_digital_analogue_window_cp2_t1

0xdda1,	// (0x0001a891) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001c859) popup_clock_digital_analogue_window_cp2_t

0xbef2,	// (0x000189e2) clock_digital_number_pane_cp10_g1

0xbef2,	// (0x000189e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c63c) clock_digital_number_pane_cp10_g

0xbef2,	// (0x000189e2) clock_digital_separator_pane_cp10_g1

0xbef2,	// (0x000189e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c63c) clock_digital_separator_pane_cp10_g

0xdbd0,	// (0x0001a6c0) uniindi_top_pane_g3

0xdbe1,	// (0x0001a6d1) uniindi_top_pane_g4

0x7175,	// (0x00013c65) vkb2_row_keypad_pane_ParamLimits

0x7175,	// (0x00013c65) vkb2_row_keypad_pane

0x73b7,	// (0x00013ea7) vkb2_cell_t_keypad_pane_ParamLimits

0x73b7,	// (0x00013ea7) vkb2_cell_t_keypad_pane

0x73c7,	// (0x00013eb7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x73c7,	// (0x00013eb7) vkb2_cell_t_keypad_pane_cp08

0x73da,	// (0x00013eca) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x73da,	// (0x00013eca) vkb2_cell_t_keypad_pane_cp09

0x73ee,	// (0x00013ede) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x73ee,	// (0x00013ede) vkb2_cell_t_keypad_pane_cp01

0x73ff,	// (0x00013eef) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x73ff,	// (0x00013eef) vkb2_cell_t_keypad_pane_cp02

0x7410,	// (0x00013f00) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7410,	// (0x00013f00) vkb2_cell_t_keypad_pane_cp03

0x7421,	// (0x00013f11) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7421,	// (0x00013f11) vkb2_cell_t_keypad_pane_cp04

0x7432,	// (0x00013f22) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7432,	// (0x00013f22) vkb2_cell_t_keypad_pane_cp05

0x7443,	// (0x00013f33) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7443,	// (0x00013f33) vkb2_cell_t_keypad_pane_cp06

0x7454,	// (0x00013f44) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7454,	// (0x00013f44) vkb2_cell_t_keypad_pane_cp07

0x7465,	// (0x00013f55) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7465,	// (0x00013f55) vkb2_cell_t_keypad_pane_cp10

0x6c1b,	// (0x0001370b) vkb2_cell_t_keypad_pane_g1

0xe1bf,	// (0x0001acaf) vkb2_cell_t_keypad_pane_t1

0x55df,	// (0x000120cf) popup_grid_graphic2_window

0xe1d1,	// (0x0001acc1) aid_size_cell_graphic2_ParamLimits

0xe1d1,	// (0x0001acc1) aid_size_cell_graphic2

0xe209,	// (0x0001acf9) bg_popup_window_pane_cp21_ParamLimits

0xe209,	// (0x0001acf9) bg_popup_window_pane_cp21

0xe217,	// (0x0001ad07) graphic2_pages_pane_ParamLimits

0xe217,	// (0x0001ad07) graphic2_pages_pane

0xe25d,	// (0x0001ad4d) grid_graphic2_control_pane_ParamLimits

0xe25d,	// (0x0001ad4d) grid_graphic2_control_pane

0xe29b,	// (0x0001ad8b) grid_graphic2_pane_ParamLimits

0xe29b,	// (0x0001ad8b) grid_graphic2_pane

0xe30f,	// (0x0001adff) cell_graphic2_pane

0x55df,	// (0x000120cf) main_comp_mode_pane

0xd3bf,	// (0x00019eaf) list_ai3_gene_pane_ParamLimits

0xd80f,	// (0x0001a2ff) bg_popup_window_pane_cp19_ParamLimits

0xd81b,	// (0x0001a30b) bg_touch_area_indi_pane_ParamLimits

0xd81b,	// (0x0001a30b) bg_touch_area_indi_pane

0xd831,	// (0x0001a321) bg_touch_area_indi_pane_cp01_ParamLimits

0xd831,	// (0x0001a321) bg_touch_area_indi_pane_cp01

0xd847,	// (0x0001a337) bg_touch_area_indi_pane_cp02_ParamLimits

0xd847,	// (0x0001a337) bg_touch_area_indi_pane_cp02

0xd85d,	// (0x0001a34d) bg_touch_area_indi_pane_cp03_ParamLimits

0xd85d,	// (0x0001a34d) bg_touch_area_indi_pane_cp03

0xd877,	// (0x0001a367) popup_slider_window_g1_ParamLimits

0xd893,	// (0x0001a383) popup_slider_window_g2_ParamLimits

0xd8af,	// (0x0001a39f) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001c7e3) popup_slider_window_g_ParamLimits

0xd915,	// (0x0001a405) popup_slider_window_t1_ParamLimits

0xd989,	// (0x0001a479) small_volume_slider_vertical_pane_ParamLimits

0xe30f,	// (0x0001adff) cell_graphic2_pane_ParamLimits

0xe35e,	// (0x0001ae4e) bg_button_pane_cp10_ParamLimits

0xe35e,	// (0x0001ae4e) bg_button_pane_cp10

0xe371,	// (0x0001ae61) bg_button_pane_cp11_ParamLimits

0xe371,	// (0x0001ae61) bg_button_pane_cp11

0xe384,	// (0x0001ae74) graphic2_pages_pane_g1_ParamLimits

0xe384,	// (0x0001ae74) graphic2_pages_pane_g1

0xe39f,	// (0x0001ae8f) graphic2_pages_pane_g2_ParamLimits

0xe39f,	// (0x0001ae8f) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001c8a7) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001c8a7) graphic2_pages_pane_g

0xe3b7,	// (0x0001aea7) graphic2_pages_pane_t1_ParamLimits

0xe3b7,	// (0x0001aea7) graphic2_pages_pane_t1

0xe3cf,	// (0x0001aebf) cell_graphic2_control_pane_ParamLimits

0xe3cf,	// (0x0001aebf) cell_graphic2_control_pane

0xe3ed,	// (0x0001aedd) cell_graphic2_pane_g1_ParamLimits

0xe3ed,	// (0x0001aedd) cell_graphic2_pane_g1

0xe3fa,	// (0x0001aeea) cell_graphic2_pane_g2_ParamLimits

0xe3fa,	// (0x0001aeea) cell_graphic2_pane_g2

0xe407,	// (0x0001aef7) cell_graphic2_pane_g3_ParamLimits

0xe407,	// (0x0001aef7) cell_graphic2_pane_g3

0xe414,	// (0x0001af04) cell_graphic2_pane_g4_ParamLimits

0xe414,	// (0x0001af04) cell_graphic2_pane_g4

0xe421,	// (0x0001af11) cell_graphic2_pane_g5_ParamLimits

0xe421,	// (0x0001af11) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001c8ac) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001c8ac) cell_graphic2_pane_g

0xe43c,	// (0x0001af2c) cell_graphic2_pane_t1_ParamLimits

0xe43c,	// (0x0001af2c) cell_graphic2_pane_t1

0x9502,	// (0x00015ff2) grid_highlight_pane_cp11_ParamLimits

0x9502,	// (0x00015ff2) grid_highlight_pane_cp11

0x3eff,	// (0x000109ef) bg_button_pane_cp05

0xe473,	// (0x0001af63) cell_graphic2_control_pane_g1

0xbef2,	// (0x000189e2) bg_touch_area_indi_pane_g1

0xe49b,	// (0x0001af8b) aid_cmod_rocker_key_size

0xe4a5,	// (0x0001af95) aid_cmode_itu_key_size

0xe4af,	// (0x0001af9f) main_cmode_video_pane

0xe4b9,	// (0x0001afa9) main_comp_mode_itu_pane

0xe4c5,	// (0x0001afb5) main_comp_mode_rocker_pane

0xe4d1,	// (0x0001afc1) cell_cmode_rocker_pane_ParamLimits

0xe4d1,	// (0x0001afc1) cell_cmode_rocker_pane

0xe4e3,	// (0x0001afd3) cell_cmode_itu_pane_ParamLimits

0xe4e3,	// (0x0001afd3) cell_cmode_itu_pane

0x41fd,	// (0x00010ced) bg_button_pane_cp06_ParamLimits

0x41fd,	// (0x00010ced) bg_button_pane_cp06

0xc162,	// (0x00018c52) cell_cmode_rocker_pane_g1_ParamLimits

0xc162,	// (0x00018c52) cell_cmode_rocker_pane_g1

0xda2d,	// (0x0001a51d) cell_cmode_rocker_pane_g2_ParamLimits

0xda2d,	// (0x0001a51d) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001c8bc) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001c8bc) cell_cmode_rocker_pane_g

0x3bbc,	// (0x000106ac) bg_button_pane_cp07

0xe4f8,	// (0x0001afe8) cell_cmode_itu_pane_g1

0xe501,	// (0x0001aff1) cell_cmode_itu_pane_t1

0xe50f,	// (0x0001afff) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001c8c1) cell_cmode_itu_pane_t

0xdc52,	// (0x0001a742) aid_touch_ctrl_left

0xdc5a,	// (0x0001a74a) aid_touch_ctrl_right

0x3bbc,	// (0x000106ac) compa_mode_pane

0xe51d,	// (0x0001b00d) aid_cmod_rocker_key_size_cp

0xe527,	// (0x0001b017) aid_cmode_itu_key_size_cp

0xe531,	// (0x0001b021) compa_mode_pane_g1

0xe539,	// (0x0001b029) compa_mode_pane_g2

0xe541,	// (0x0001b031) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001c8c6) compa_mode_pane_g

0xe549,	// (0x0001b039) main_comp_mode_itu_pane_cp

0xe551,	// (0x0001b041) main_comp_mode_rocker_pane_cp

0xe559,	// (0x0001b049) cell_cmode_itu_pane_cp_ParamLimits

0xe559,	// (0x0001b049) cell_cmode_itu_pane_cp

0xe56e,	// (0x0001b05e) cell_cmode_rocker_pane_cp_ParamLimits

0xe56e,	// (0x0001b05e) cell_cmode_rocker_pane_cp

0x41fd,	// (0x00010ced) bg_button_pane_cp06_cp_ParamLimits

0x41fd,	// (0x00010ced) bg_button_pane_cp06_cp

0xc162,	// (0x00018c52) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc162,	// (0x00018c52) cell_cmode_rocker_pane_g1_cp

0xbef2,	// (0x000189e2) cell_cmode_rocker_pane_g2_cp

0x3bbc,	// (0x000106ac) bg_button_pane_cp07_cp

0xe580,	// (0x0001b070) cell_cmode_itu_pane_g1_cp

0xe589,	// (0x0001b079) cell_cmode_itu_pane_t1_cp

0xe589,	// (0x0001b079) cell_cmode_itu_pane_t2_cp

0xa9ea,	// (0x000174da) settings_code_pane_cp2

0x3dbb,	// (0x000108ab) bg_popup_window_pane_cp3_ParamLimits

0x4018,	// (0x00010b08) heading_pane_cp3_ParamLimits

0x4024,	// (0x00010b14) listscroll_popup_graphic_pane_ParamLimits

0x69c4,	// (0x000134b4) fep_hwr_aid_pane_ParamLimits

0x6e3b,	// (0x0001392b) aid_touch_sctrl_top_ParamLimits

0x6e56,	// (0x00013946) sctrl_sk_top_pane_g1_ParamLimits

0x6c1b,	// (0x0001370b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001c7fc) sctrl_sk_top_pane_g_ParamLimits

0x6e63,	// (0x00013953) sctrl_sk_top_pane_t1_ParamLimits

0x6e3b,	// (0x0001392b) aid_touch_sctrl_bottom_ParamLimits

0x6e63,	// (0x00013953) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb9c,	// (0x0001a68c) aid_area_touch_clock

0x704c,	// (0x00013b3c) aid_vkb2_area_top_pane_cell_ParamLimits

0x704c,	// (0x00013b3c) aid_vkb2_area_top_pane_cell

0x7197,	// (0x00013c87) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7197,	// (0x00013c87) aid_vkb2_area_bottom_pane_cell

0xe10a,	// (0x0001abfa) popup_char_count_window

0xe597,	// (0x0001b087) popup_char_count_window_g1

0xe5a0,	// (0x0001b090) popup_char_count_window_g2

0xe5a9,	// (0x0001b099) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001c8cd) popup_char_count_window_g

0xe5b2,	// (0x0001b0a2) popup_char_count_window_t1

0x6f12,	// (0x00013a02) popup_fep_char_preview_window_ParamLimits

0x6f12,	// (0x00013a02) popup_fep_char_preview_window

0x706a,	// (0x00013b5a) vkb2_top_candi_pane_ParamLimits

0x706a,	// (0x00013b5a) vkb2_top_candi_pane

0xe5c0,	// (0x0001b0b0) cell_vkb2_top_candi_pane_ParamLimits

0xe5c0,	// (0x0001b0b0) cell_vkb2_top_candi_pane

0x747a,	// (0x00013f6a) bg_popup_fep_char_preview_window_ParamLimits

0x747a,	// (0x00013f6a) bg_popup_fep_char_preview_window

0x7488,	// (0x00013f78) popup_fep_char_preview_window_t1_ParamLimits

0x7488,	// (0x00013f78) popup_fep_char_preview_window_t1

0xe60d,	// (0x0001b0fd) bg_popup_fep_char_preview_window_g1

0xe615,	// (0x0001b105) bg_popup_fep_char_preview_window_g2

0xe61d,	// (0x0001b10d) bg_popup_fep_char_preview_window_g3

0xe625,	// (0x0001b115) bg_popup_fep_char_preview_window_g4

0xe62d,	// (0x0001b11d) bg_popup_fep_char_preview_window_g5

0x74c2,	// (0x00013fb2) bg_popup_fep_char_preview_window_g6

0xe635,	// (0x0001b125) bg_popup_fep_char_preview_window_g7

0xe63d,	// (0x0001b12d) bg_popup_fep_char_preview_window_g8

0xe645,	// (0x0001b135) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001c8d4) bg_popup_fep_char_preview_window_g

0x6c1b,	// (0x0001370b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6c1b,	// (0x0001370b) cell_vkb2_top_candi_pane_g1

0x6c29,	// (0x00013719) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c29,	// (0x00013719) cell_vkb2_top_candi_pane_g2

0xd556,	// (0x0001a046) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd556,	// (0x0001a046) cell_vkb2_top_candi_pane_g3

0x74ca,	// (0x00013fba) cell_vkb2_top_candi_pane_g4_ParamLimits

0x74ca,	// (0x00013fba) cell_vkb2_top_candi_pane_g4

0xc813,	// (0x00019303) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc813,	// (0x00019303) cell_vkb2_top_candi_pane_g5

0x74eb,	// (0x00013fdb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x74eb,	// (0x00013fdb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001c8e7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001c8e7) cell_vkb2_top_candi_pane_g

0x74f9,	// (0x00013fe9) cell_vkb2_top_candi_pane_t1

0x67dc,	// (0x000132cc) aid_size_touch_slider_mark_ParamLimits

0x67dc,	// (0x000132cc) aid_size_touch_slider_mark

0xe24d,	// (0x0001ad3d) grid_graphic2_catg_pane_ParamLimits

0xe24d,	// (0x0001ad3d) grid_graphic2_catg_pane

0xe2eb,	// (0x0001addb) popup_grid_graphic2_window_t1_ParamLimits

0xe2eb,	// (0x0001addb) popup_grid_graphic2_window_t1

0xe2fd,	// (0x0001aded) popup_grid_graphic2_window_t2_ParamLimits

0xe2fd,	// (0x0001aded) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001c8a2) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001c8a2) popup_grid_graphic2_window_t

0x3eff,	// (0x000109ef) bg_button_pane_cp05_ParamLimits

0xe473,	// (0x0001af63) cell_graphic2_control_pane_g1_ParamLimits

0xe64d,	// (0x0001b13d) cell_graphic2_catg_pane_ParamLimits

0xe64d,	// (0x0001b13d) cell_graphic2_catg_pane

0x3bbc,	// (0x000106ac) bg_button_pane_cp12

0xe65f,	// (0x0001b14f) cell_graphic2_catg_pane_g1

0xdb67,	// (0x0001a657) cell_tb_ext_pane_t1_ParamLimits

0x72b4,	// (0x00013da4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x72b4,	// (0x00013da4) vkb2_top_cell_right_narrow_pane

0x72cc,	// (0x00013dbc) vkb2_top_cell_right_wide_pane_ParamLimits

0x72cc,	// (0x00013dbc) vkb2_top_cell_right_wide_pane

0x69b6,	// (0x000134a6) bg_vkb2_func_pane_ParamLimits

0x69b6,	// (0x000134a6) bg_vkb2_func_pane

0x733d,	// (0x00013e2d) vkb2_top_cell_left_pane_g1_ParamLimits

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp03

0x739b,	// (0x00013e8b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x93ea,	// (0x00015eda) bg_vkb2_func_pane_g1

0x93f2,	// (0x00015ee2) bg_vkb2_func_pane_g2

0x9402,	// (0x00015ef2) bg_vkb2_func_pane_g3

0x93fa,	// (0x00015eea) bg_vkb2_func_pane_g4

0x940a,	// (0x00015efa) bg_vkb2_func_pane_g5

0x9412,	// (0x00015f02) bg_vkb2_func_pane_g6

0x941a,	// (0x00015f0a) bg_vkb2_func_pane_g7

0x9422,	// (0x00015f12) bg_vkb2_func_pane_g8

0x93e2,	// (0x00015ed2) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001c8f4) bg_vkb2_func_pane_g

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp01

0x733d,	// (0x00013e2d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x733d,	// (0x00013e2d) vkb2_top_cell_right_wide_pane_g1

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x69b6,	// (0x000134a6) bg_vkb2_fuc_pane_cp02

0x739b,	// (0x00013e8b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x739b,	// (0x00013e8b) vkb2_top_cell_right_narrow_pane_g1

0xd789,	// (0x0001a279) aid_touch_area_decrease_ParamLimits

0xd789,	// (0x0001a279) aid_touch_area_decrease

0xd7ad,	// (0x0001a29d) aid_touch_area_increase_ParamLimits

0xd7ad,	// (0x0001a29d) aid_touch_area_increase

0xd7c5,	// (0x0001a2b5) aid_touch_area_mute_ParamLimits

0xd7c5,	// (0x0001a2b5) aid_touch_area_mute

0xd7e1,	// (0x0001a2d1) aid_touch_area_slider_ParamLimits

0xd7e1,	// (0x0001a2d1) aid_touch_area_slider

0xd8cb,	// (0x0001a3bb) popup_slider_window_g4_ParamLimits

0xd8cb,	// (0x0001a3bb) popup_slider_window_g4

0xd8e3,	// (0x0001a3d3) popup_slider_window_g5_ParamLimits

0xd8e3,	// (0x0001a3d3) popup_slider_window_g5

0xd905,	// (0x0001a3f5) popup_slider_window_g6_ParamLimits

0xd905,	// (0x0001a3f5) popup_slider_window_g6

0xd943,	// (0x0001a433) popup_slider_window_t2_ParamLimits

0xd943,	// (0x0001a433) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001c7f0) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001c7f0) popup_slider_window_t

0xd95b,	// (0x0001a44b) slider_pane_ParamLimits

0xd95b,	// (0x0001a44b) slider_pane

0xe668,	// (0x0001b158) slider_pane_g1_ParamLimits

0xe668,	// (0x0001b158) slider_pane_g1

0xe67c,	// (0x0001b16c) slider_pane_g2_ParamLimits

0xe67c,	// (0x0001b16c) slider_pane_g2

0xe692,	// (0x0001b182) slider_pane_g3_ParamLimits

0xe692,	// (0x0001b182) slider_pane_g3

0x0003,

0xfe17,	// (0x0001c907) slider_pane_g_ParamLimits

0xfe17,	// (0x0001c907) slider_pane_g

0x6393,	// (0x00012e83) popup_tb_float_extension_window_ParamLimits

0x6393,	// (0x00012e83) popup_tb_float_extension_window

0xe6be,	// (0x0001b1ae) aid_size_cell_tb_float_ext

0x3bbc,	// (0x000106ac) bg_popup_sub_window_cp28

0xe6ca,	// (0x0001b1ba) grid_tb_float_ext_pane

0xe6d4,	// (0x0001b1c4) cell_tb_float_ext_pane_ParamLimits

0xe6d4,	// (0x0001b1c4) cell_tb_float_ext_pane

0xe6ee,	// (0x0001b1de) cell_tb_float_ext_pane_g1

0xe6f7,	// (0x0001b1e7) grid_highlight_pane_cp12

0x6b05,	// (0x000135f5) cell_last_hwr_side_pane_ParamLimits

0x6b05,	// (0x000135f5) cell_last_hwr_side_pane

0xbef2,	// (0x000189e2) cell_last_hwr_side_pane_g1

0xe700,	// (0x0001b1f0) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001c910) cell_last_hwr_side_pane_g

0x7263,	// (0x00013d53) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7263,	// (0x00013d53) vkb2_area_bottom_space_btn_pane

0x6c1b,	// (0x0001370b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1bf,	// (0x0001acaf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x74f9,	// (0x00013fe9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7518,	// (0x00014008) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7518,	// (0x00014008) vkb2_area_bottom_space_btn_pane_g1

0x7552,	// (0x00014042) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7552,	// (0x00014042) vkb2_area_bottom_space_btn_pane_g2

0x7588,	// (0x00014078) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7588,	// (0x00014078) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001c915) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001c915) vkb2_area_bottom_space_btn_pane_g

0x6a79,	// (0x00013569) cel_fep_hwr_func_pane_ParamLimits

0x6a79,	// (0x00013569) cel_fep_hwr_func_pane

0x6ab5,	// (0x000135a5) cell_hwr_side_button_pane_ParamLimits

0x6ab5,	// (0x000135a5) cell_hwr_side_button_pane

0xdb9c,	// (0x0001a68c) aid_area_touch_clock_ParamLimits

0x3eff,	// (0x000109ef) bg_uniindi_top_pane_ParamLimits

0xdbae,	// (0x0001a69e) uniindi_top_pane_g1_ParamLimits

0xdbc4,	// (0x0001a6b4) uniindi_top_pane_g2_ParamLimits

0xdbd0,	// (0x0001a6c0) uniindi_top_pane_g3_ParamLimits

0xdbe1,	// (0x0001a6d1) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001c828) uniindi_top_pane_g_ParamLimits

0xdbee,	// (0x0001a6de) uniindi_top_pane_t1_ParamLimits

0x3eff,	// (0x000109ef) bg_vkb2_func_pane_cp01_ParamLimits

0x3eff,	// (0x000109ef) bg_vkb2_func_pane_cp01

0xe709,	// (0x0001b1f9) cel_fep_hwr_func_pane_g1_ParamLimits

0xe709,	// (0x0001b1f9) cel_fep_hwr_func_pane_g1

0x3eff,	// (0x000109ef) bg_vkb2_func_pane_cp02_ParamLimits

0x3eff,	// (0x000109ef) bg_vkb2_func_pane_cp02

0xe709,	// (0x0001b1f9) cell_hwr_side_button_pane_g1_ParamLimits

0xe709,	// (0x0001b1f9) cell_hwr_side_button_pane_g1

0x9244,	// (0x00015d34) status_pane_g4_ParamLimits

0x9244,	// (0x00015d34) status_pane_g4

0x925e,	// (0x00015d4e) status_pane_t1

0xbc2d,	// (0x0001871d) form2_midp_gauge_slider_cont_pane

0xbc35,	// (0x00018725) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc47,	// (0x00018737) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc59,	// (0x00018749) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001c5ef) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc6b,	// (0x0001875b) form2_midp_slider_pane_ParamLimits

0x6ed2,	// (0x000139c2) aid_size_cell_func_vkb2_ParamLimits

0x6ed2,	// (0x000139c2) aid_size_cell_func_vkb2

0xe6aa,	// (0x0001b19a) slider_pane_g4_ParamLimits

0xe6aa,	// (0x0001b19a) slider_pane_g4

0x75d2,	// (0x000140c2) form2_midp_gauge_slider_pane_t2_cp01

0x75e0,	// (0x000140d0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x75e0,	// (0x000140d0) form2_midp_gauge_slider_pane_t3_cp01

0x75fd,	// (0x000140ed) form2_midp_slider_pane_cp01

0x3bbc,	// (0x000106ac) navi_smil_pane

0xe742,	// (0x0001b232) navi_smil_pane_g1

0xe74a,	// (0x0001b23a) navi_smil_pane_t1

0xe717,	// (0x0001b207) form2_midp_slider_pane_g1

0xe720,	// (0x0001b210) form2_midp_slider_pane_g2

0xe728,	// (0x0001b218) form2_midp_slider_pane_g3

0xe717,	// (0x0001b207) form2_midp_slider_pane_g4

0xe730,	// (0x0001b220) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001c91e) form2_midp_slider_pane_g

0x75c2,	// (0x000140b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x75c2,	// (0x000140b2) vkb2_area_bottom_space_btn_pane_g4

0x9073,	// (0x00015b63) lc0_navi_pane_ParamLimits

0x9073,	// (0x00015b63) lc0_navi_pane

0x90e9,	// (0x00015bd9) lc0_stat_indi_pane_ParamLimits

0x90e9,	// (0x00015bd9) lc0_stat_indi_pane

0x9100,	// (0x00015bf0) ls0_title_pane_ParamLimits

0x9100,	// (0x00015bf0) ls0_title_pane

0x41fd,	// (0x00010ced) bg_popup_sub_pane_cp14_ParamLimits

0xdb83,	// (0x0001a673) list_uniindi_pane_ParamLimits

0xdb8f,	// (0x0001a67f) uniindi_top_pane_ParamLimits

0xdc2a,	// (0x0001a71a) list_single_uniindi_pane_g1_ParamLimits

0xdc3d,	// (0x0001a72d) list_single_uniindi_pane_t1_ParamLimits

0x7606,	// (0x000140f6) lc0_stat_clock_pane_ParamLimits

0x7606,	// (0x000140f6) lc0_stat_clock_pane

0xe758,	// (0x0001b248) lc0_stat_indi_pane_g1_ParamLimits

0xe758,	// (0x0001b248) lc0_stat_indi_pane_g1

0xe765,	// (0x0001b255) lc0_stat_indi_pane_g2_ParamLimits

0xe765,	// (0x0001b255) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001c929) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001c929) lc0_stat_indi_pane_g

0x7613,	// (0x00014103) lc0_uni_indicator_pane_ParamLimits

0x7613,	// (0x00014103) lc0_uni_indicator_pane

0xe772,	// (0x0001b262) ls0_title_pane_g1_ParamLimits

0xe772,	// (0x0001b262) ls0_title_pane_g1

0xe786,	// (0x0001b276) ls0_title_pane_t1_ParamLimits

0xe786,	// (0x0001b276) ls0_title_pane_t1

0x7620,	// (0x00014110) lc0_uni_indicator_pane_g1_ParamLimits

0x7620,	// (0x00014110) lc0_uni_indicator_pane_g1

0xe7bc,	// (0x0001b2ac) lc0_stat_clock_pane_t1

0x55df,	// (0x000120cf) main_ai5_pane

0xe7ca,	// (0x0001b2ba) ai5_sk_pane_ParamLimits

0xe7ca,	// (0x0001b2ba) ai5_sk_pane

0xe7d7,	// (0x0001b2c7) cell_ai5_widget_pane_ParamLimits

0xe7d7,	// (0x0001b2c7) cell_ai5_widget_pane

0xe892,	// (0x0001b382) aid_size_cell_widget_grid

0xe8a0,	// (0x0001b390) bg_ai5_widget_pane_ParamLimits

0xe8a0,	// (0x0001b390) bg_ai5_widget_pane

0xe918,	// (0x0001b408) cell_ai5_widget_pane_g2

0xe92c,	// (0x0001b41c) cell_ai5_widget_pane_g3

0xe946,	// (0x0001b436) cell_ai5_widget_pane_g4

0xe956,	// (0x0001b446) cell_ai5_widget_pane_g5

0xe966,	// (0x0001b456) cell_ai5_widget_pane_g6

0xe972,	// (0x0001b462) cell_ai5_widget_pane_g7

0xe9ba,	// (0x0001b4aa) cell_ai5_widget_pane_t1_ParamLimits

0xe9ba,	// (0x0001b4aa) cell_ai5_widget_pane_t1

0xe9d7,	// (0x0001b4c7) cell_ai5_widget_pane_t2_ParamLimits

0xe9d7,	// (0x0001b4c7) cell_ai5_widget_pane_t2

0xe9ef,	// (0x0001b4df) cell_ai5_widget_pane_t3_ParamLimits

0xe9ef,	// (0x0001b4df) cell_ai5_widget_pane_t3

0xea07,	// (0x0001b4f7) cell_ai5_widget_pane_t4_ParamLimits

0xea07,	// (0x0001b4f7) cell_ai5_widget_pane_t4

0xea2d,	// (0x0001b51d) cell_ai5_widget_pane_t5_ParamLimits

0xea2d,	// (0x0001b51d) cell_ai5_widget_pane_t5

0xea4d,	// (0x0001b53d) cell_ai5_widget_pane_t6_ParamLimits

0xea4d,	// (0x0001b53d) cell_ai5_widget_pane_t6

0xea5f,	// (0x0001b54f) cell_ai5_widget_pane_t7_ParamLimits

0xea5f,	// (0x0001b54f) cell_ai5_widget_pane_t7

0xea78,	// (0x0001b568) cell_ai5_widget_pane_t8_ParamLimits

0xea78,	// (0x0001b568) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001c943) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001c943) cell_ai5_widget_pane_t

0xead7,	// (0x0001b5c7) grid_ai5_widget_pane

0x41fd,	// (0x00010ced) highlight_cell_ai5_widget_pane_ParamLimits

0x41fd,	// (0x00010ced) highlight_cell_ai5_widget_pane

0xeae5,	// (0x0001b5d5) ai5_sk_left_pane

0xeaef,	// (0x0001b5df) ai5_sk_middle_pane

0xeaf9,	// (0x0001b5e9) ai5_sk_right_pane

0xeb03,	// (0x0001b5f3) bg_ai5_widget_pane_g1_ParamLimits

0xeb03,	// (0x0001b5f3) bg_ai5_widget_pane_g1

0xeb0f,	// (0x0001b5ff) bg_ai5_widget_pane_g2_ParamLimits

0xeb0f,	// (0x0001b5ff) bg_ai5_widget_pane_g2

0xeb1b,	// (0x0001b60b) bg_ai5_widget_pane_g3_ParamLimits

0xeb1b,	// (0x0001b60b) bg_ai5_widget_pane_g3

0xeb27,	// (0x0001b617) bg_ai5_widget_pane_g4_ParamLimits

0xeb27,	// (0x0001b617) bg_ai5_widget_pane_g4

0xeb33,	// (0x0001b623) bg_ai5_widget_pane_g5_ParamLimits

0xeb33,	// (0x0001b623) bg_ai5_widget_pane_g5

0xeb3f,	// (0x0001b62f) bg_ai5_widget_pane_g6_ParamLimits

0xeb3f,	// (0x0001b62f) bg_ai5_widget_pane_g6

0xeb4b,	// (0x0001b63b) bg_ai5_widget_pane_g7_ParamLimits

0xeb4b,	// (0x0001b63b) bg_ai5_widget_pane_g7

0xeb57,	// (0x0001b647) bg_ai5_widget_pane_g8_ParamLimits

0xeb57,	// (0x0001b647) bg_ai5_widget_pane_g8

0xeb63,	// (0x0001b653) bg_ai5_widget_pane_g9_ParamLimits

0xeb63,	// (0x0001b653) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001c958) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001c958) bg_ai5_widget_pane_g

0xeb95,	// (0x0001b685) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb95,	// (0x0001b685) cell_shortcut_ai5_widget_pane

0x8b69,	// (0x00015659) bg_cell_shortcut_ai5_widget_pane

0xeba6,	// (0x0001b696) cell_grid_ai5_widget_pane_g1

0x8b69,	// (0x00015659) highlight_cell_shortcut_ai5_widget_pane

0x93ea,	// (0x00015eda) ai5_sk_left_pane_g1

0xebaf,	// (0x0001b69f) ai5_sk_left_pane_g2

0xebb7,	// (0x0001b6a7) ai5_sk_left_pane_g3

0xebbf,	// (0x0001b6af) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001c96b) ai5_sk_left_pane_g

0xebc7,	// (0x0001b6b7) ai5_sk_left_pane_t1

0x93f2,	// (0x00015ee2) ai5_sk_right_pane_g1

0xebd5,	// (0x0001b6c5) ai5_sk_right_pane_g2

0xebdd,	// (0x0001b6cd) ai5_sk_right_pane_g3

0xebe5,	// (0x0001b6d5) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001c974) ai5_sk_right_pane_g

0xebed,	// (0x0001b6dd) ai5_sk_right_pane_t1

0x93f2,	// (0x00015ee2) ai5_sk_middle_pane_g1

0x93ea,	// (0x00015eda) ai5_sk_middle_pane_g2

0x940a,	// (0x00015efa) ai5_sk_middle_pane_g3

0xebdd,	// (0x0001b6cd) ai5_sk_middle_pane_g4

0xebb7,	// (0x0001b6a7) ai5_sk_middle_pane_g5

0xebfb,	// (0x0001b6eb) ai5_sk_middle_pane_g6

0xec03,	// (0x0001b6f3) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001c97d) ai5_sk_middle_pane_g

0x8ef9,	// (0x000159e9) aid_touch_area_size_lc0_ParamLimits

0x8ef9,	// (0x000159e9) aid_touch_area_size_lc0

0x6c4a,	// (0x0001373a) cell_hwr_candidate_pane_t1_ParamLimits

0x8f15,	// (0x00015a05) aid_touch_navi_pane

0x91ee,	// (0x00015cde) status_dt_navi_pane_ParamLimits

0x91ee,	// (0x00015cde) status_dt_navi_pane

0x91fb,	// (0x00015ceb) status_dt_sta_pane_ParamLimits

0x91fb,	// (0x00015ceb) status_dt_sta_pane

0xec0b,	// (0x0001b6fb) dt_sta_controll_pane

0xec18,	// (0x0001b708) dt_sta_indi_pane

0xec29,	// (0x0001b719) dt_sta_title_pane

0x3eff,	// (0x000109ef) bg_dt_sta_indi_pane_ParamLimits

0x3eff,	// (0x000109ef) bg_dt_sta_indi_pane

0xec3c,	// (0x0001b72c) dt_sta_battery_pane

0xec44,	// (0x0001b734) dt_sta_indi_pane_g1

0xec4d,	// (0x0001b73d) dt_sta_indi_pane_g2

0xec56,	// (0x0001b746) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001c98c) dt_sta_indi_pane_g

0xec5f,	// (0x0001b74f) dt_sta_signal_pane

0x41fd,	// (0x00010ced) bg_dt_sta_title_pane_ParamLimits

0x41fd,	// (0x00010ced) bg_dt_sta_title_pane

0xa311,	// (0x00016e01) dt_sta_title_pane_g1

0xec68,	// (0x0001b758) dt_sta_title_pane_t1_ParamLimits

0xec68,	// (0x0001b758) dt_sta_title_pane_t1

0x3bbc,	// (0x000106ac) bg_dt_sta_control_pane

0xec7d,	// (0x0001b76d) dt_sta_controll_pane_g1

0xec86,	// (0x0001b776) bg_dt_sta_title_pane_g1

0xec8f,	// (0x0001b77f) bg_dt_sta_title_pane_g2

0xec98,	// (0x0001b788) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001c993) bg_dt_sta_title_pane_g

0xbef2,	// (0x000189e2) bg_dt_sta_indi_pane_g1

0xeca1,	// (0x0001b791) dt_sta_signal_pane_g1

0xeca9,	// (0x0001b799) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001c99a) dt_sta_signal_pane_g

0xecb1,	// (0x0001b7a1) dt_sta_battery_pane_g1

0xecba,	// (0x0001b7aa) dt_sta_battery_pane_t1

0xbef2,	// (0x000189e2) bg_dt_sta_control_pane_g1

0x4970,	// (0x00011460) fep_china_uni_eep_pane

0x4978,	// (0x00011468) fep_china_uni_entry_pane_ParamLimits

0x4988,	// (0x00011478) popup_fep_china_uni_window_g1_ParamLimits

0x4998,	// (0x00011488) popup_fep_china_uni_window_g2_ParamLimits

0x4998,	// (0x00011488) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x0001c1fe) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x0001c1fe) popup_fep_china_uni_window_g

0xecc9,	// (0x0001b7b9) fep_china_uni_eep_pane_g1

0xecd1,	// (0x0001b7c1) fep_china_uni_eep_pane_t1

0xe739,	// (0x0001b229) aid_touch_area_size_smil_player

0x906b,	// (0x00015b5b) lc0_clock_pane

0x9252,	// (0x00015d42) status_pane_g5_ParamLimits

0x9252,	// (0x00015d42) status_pane_g5

0x6054,	// (0x00012b44) popup_keymap_window

0x9210,	// (0x00015d00) status_icon_pane

0xe92c,	// (0x0001b41c) cell_ai5_widget_pane_g3_ParamLimits

0xe946,	// (0x0001b436) cell_ai5_widget_pane_g4_ParamLimits

0xe956,	// (0x0001b446) cell_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0001b46e) cell_ai5_widget_pane_g8_ParamLimits

0xe97e,	// (0x0001b46e) cell_ai5_widget_pane_g8

0xe992,	// (0x0001b482) cell_ai5_widget_pane_g9_ParamLimits

0xe992,	// (0x0001b482) cell_ai5_widget_pane_g9

0xe9a6,	// (0x0001b496) cell_ai5_widget_pane_g10_ParamLimits

0xe9a6,	// (0x0001b496) cell_ai5_widget_pane_g10

0xece0,	// (0x0001b7d0) status_icon_pane_g1

0x3bbc,	// (0x000106ac) bg_popup_sub_pane_cp13

0xece8,	// (0x0001b7d8) popup_keymap_window_t1

0x8e3a,	// (0x0001592a) control_pane_g6_ParamLimits

0x8e3a,	// (0x0001592a) control_pane_g6

0x8e47,	// (0x00015937) control_pane_g7_ParamLimits

0x8e47,	// (0x00015937) control_pane_g7

0x8e54,	// (0x00015944) control_pane_g8_ParamLimits

0x8e54,	// (0x00015944) control_pane_g8

0xec0b,	// (0x0001b6fb) dt_sta_controll_pane_ParamLimits

0xec18,	// (0x0001b708) dt_sta_indi_pane_ParamLimits

0xec29,	// (0x0001b719) dt_sta_title_pane_ParamLimits

0x40d2,	// (0x00010bc2) aid_size_touch_scroll_bar_cale

0x56b8,	// (0x000121a8) popup_discreet_window_ParamLimits

0x56b8,	// (0x000121a8) popup_discreet_window

0x5732,	// (0x00012222) popup_sk_window

0x9b55,	// (0x00016645) bg_popup_sub_pane_cp28_ParamLimits

0x9b55,	// (0x00016645) bg_popup_sub_pane_cp28

0xecf6,	// (0x0001b7e6) popup_discreet_window_g1_ParamLimits

0xecf6,	// (0x0001b7e6) popup_discreet_window_g1

0xed16,	// (0x0001b806) popup_discreet_window_t1_ParamLimits

0xed16,	// (0x0001b806) popup_discreet_window_t1

0xed34,	// (0x0001b824) popup_discreet_window_t2_ParamLimits

0xed34,	// (0x0001b824) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001c99f) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001c99f) popup_discreet_window_t

0x7634,	// (0x00014124) popup_sk_window_g1

0x763e,	// (0x0001412e) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001c9a6) popup_sk_window_g

0x7646,	// (0x00014136) popup_sk_window_t1

0x7654,	// (0x00014144) popup_sk_window_t1_copy1

0xe918,	// (0x0001b408) cell_ai5_widget_pane_g2_ParamLimits

0xea8a,	// (0x0001b57a) cell_ai5_widget_pane_t9_ParamLimits

0xea8a,	// (0x0001b57a) cell_ai5_widget_pane_t9

0x3bbc,	// (0x000106ac) main_fep_fshwr2_pane

0x7662,	// (0x00014152) aid_fshwr2_btn_pane

0x766e,	// (0x0001415e) aid_fshwr2_syb_pane

0x767f,	// (0x0001416f) aid_fshwr2_txt_pane

0x768b,	// (0x0001417b) fshwr2_func_candi_pane

0x76a3,	// (0x00014193) fshwr2_hwr_syb_pane

0x76ba,	// (0x000141aa) fshwr2_icf_pane

0x55df,	// (0x000120cf) fshwr2_icf_bg_pane

0x76e3,	// (0x000141d3) fshwr2_icf_pane_t1_ParamLimits

0x76e3,	// (0x000141d3) fshwr2_icf_pane_t1

0x4859,	// (0x00011349) fshwr2_func_candi_pane_g1

0xed86,	// (0x0001b876) fshwr2_func_candi_row_pane_ParamLimits

0xed86,	// (0x0001b876) fshwr2_func_candi_row_pane

0x76fc,	// (0x000141ec) cell_fshwr2_syb_pane_ParamLimits

0x76fc,	// (0x000141ec) cell_fshwr2_syb_pane

0x6c1b,	// (0x0001370b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c1b,	// (0x0001370b) fshwr2_hwr_syb_pane_g1

0x55df,	// (0x000120cf) bg_popup_call_pane_cp01

0x7712,	// (0x00014202) fshwr2_func_candi_cell_pane_ParamLimits

0x7712,	// (0x00014202) fshwr2_func_candi_cell_pane

0xa1b1,	// (0x00016ca1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1b1,	// (0x00016ca1) fshwr2_func_candi_cell_bg_pane

0x775d,	// (0x0001424d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x775d,	// (0x0001424d) fshwr2_func_candi_cell_pane_g1

0x7785,	// (0x00014275) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7785,	// (0x00014275) fshwr2_func_candi_cell_pane_t1

0x55df,	// (0x000120cf) bg_button_pane_cp08

0xed96,	// (0x0001b886) cell_fshwr2_syb_bg_pane

0x7798,	// (0x00014288) cell_fshwr2_syb_bg_pane_g1

0x77a0,	// (0x00014290) cell_fshwr2_syb_bg_pane_t1

0x41fd,	// (0x00010ced) main_tmo_pane

0xa64a,	// (0x0001713a) uni_indicator_pane_g1_ParamLimits

0xa65d,	// (0x0001714d) uni_indicator_pane_g2_ParamLimits

0xa66f,	// (0x0001715f) uni_indicator_pane_g3_ParamLimits

0xa67e,	// (0x0001716e) uni_indicator_pane_g4_ParamLimits

0xa67e,	// (0x0001716e) uni_indicator_pane_g4

0xa692,	// (0x00017182) uni_indicator_pane_g5_ParamLimits

0xa692,	// (0x00017182) uni_indicator_pane_g5

0xa692,	// (0x00017182) uni_indicator_pane_g6_ParamLimits

0xa692,	// (0x00017182) uni_indicator_pane_g6

0xf912,	// (0x0001c402) uni_indicator_pane_g_ParamLimits

0xd76b,	// (0x0001a25b) popup_tmo_note_window_ParamLimits

0xd76b,	// (0x0001a25b) popup_tmo_note_window

0x6eb4,	// (0x000139a4) fshwr2_bg_pane

0x7776,	// (0x00014266) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7776,	// (0x00014266) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001c9ab) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001c9ab) fshwr2_func_candi_cell_pane_g

0x6c03,	// (0x000136f3) bg_popup_window_pane_cp01

0x77af,	// (0x0001429f) bg_popup_window_pane_g1_cp01

0xed9e,	// (0x0001b88e) bg_popup_window_pane_cp22_ParamLimits

0xed9e,	// (0x0001b88e) bg_popup_window_pane_cp22

0xedac,	// (0x0001b89c) listscroll_tmo_link_pane_ParamLimits

0xedac,	// (0x0001b89c) listscroll_tmo_link_pane

0xedec,	// (0x0001b8dc) popup_tmo_note_window_g1_ParamLimits

0xedec,	// (0x0001b8dc) popup_tmo_note_window_g1

0xedf9,	// (0x0001b8e9) tmo_note_info_pane_ParamLimits

0xedf9,	// (0x0001b8e9) tmo_note_info_pane

0xee13,	// (0x0001b903) list_tmo_note_info_pane_g1_ParamLimits

0xee13,	// (0x0001b903) list_tmo_note_info_pane_g1

0xee2a,	// (0x0001b91a) list_tmo_note_info_pane_g2_ParamLimits

0xee2a,	// (0x0001b91a) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001c9b0) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001c9b0) list_tmo_note_info_pane_g

0xee46,	// (0x0001b936) list_tmo_note_info_text_pane_ParamLimits

0xee46,	// (0x0001b936) list_tmo_note_info_text_pane

0xeec7,	// (0x0001b9b7) list_tmo_link_pane

0xeed4,	// (0x0001b9c4) scroll_pane_cp20

0xeee1,	// (0x0001b9d1) list_single_tmo_link_pane_ParamLimits

0xeee1,	// (0x0001b9d1) list_single_tmo_link_pane

0xeef1,	// (0x0001b9e1) list_single_tmo_link_pane_t1

0xeeff,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeff,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1

0x848b,	// (0x00014f7b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x848b,	// (0x00014f7b) aid_size_touch_scroll_bar_cp01

0x838d,	// (0x00014e7d) aid_size_touch_slider_marker

0x571a,	// (0x0001220a) popup_settings_window_ParamLimits

0x571a,	// (0x0001220a) popup_settings_window

0x8ec5,	// (0x000159b5) popup_candi_list_indi_window

0x8f15,	// (0x00015a05) aid_touch_navi_pane_ParamLimits

0x6e0f,	// (0x000138ff) rs_clock_indi_pane

0x6e18,	// (0x00013908) sctrl_sk_bottom_pane_ParamLimits

0x6e29,	// (0x00013919) sctrl_sk_top_pane_ParamLimits

0x6f2c,	// (0x00013a1c) popup_fep_tooltip_window

0xe892,	// (0x0001b382) aid_size_cell_widget_grid_ParamLimits

0xe903,	// (0x0001b3f3) cell_ai5_widget_pane_g1_ParamLimits

0xe903,	// (0x0001b3f3) cell_ai5_widget_pane_g1

0xe966,	// (0x0001b456) cell_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0001b462) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001c92e) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001c92e) cell_ai5_widget_pane_g

0xeab9,	// (0x0001b5a9) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x0001b5a9) cell_ai5_widget_pane_t10

0xead7,	// (0x0001b5c7) grid_ai5_widget_pane_ParamLimits

0xeb6f,	// (0x0001b65f) cell_contacts_ai5_widget_pane_ParamLimits

0xeb6f,	// (0x0001b65f) cell_contacts_ai5_widget_pane

0xed49,	// (0x0001b839) popup_discreet_window_t3_ParamLimits

0xed49,	// (0x0001b839) popup_discreet_window_t3

0x76cf,	// (0x000141bf) popup_fshwr2_char_preview_window_ParamLimits

0x76cf,	// (0x000141bf) popup_fshwr2_char_preview_window

0xee64,	// (0x0001b954) tmo_note_info_pane_t1

0xee79,	// (0x0001b969) tmo_note_info_pane_t2

0xee8e,	// (0x0001b97e) tmo_note_info_pane_t3

0xeea3,	// (0x0001b993) tmo_note_info_pane_t4

0xeeb5,	// (0x0001b9a5) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001c9b5) tmo_note_info_pane_t

0xeec7,	// (0x0001b9b7) list_tmo_link_pane_ParamLimits

0xeed4,	// (0x0001b9c4) scroll_pane_cp20_ParamLimits

0x55df,	// (0x000120cf) bg_popup_fep_char_preview_window_cp01

0xef18,	// (0x0001ba08) popup_fshwr2_char_preview_window_t1

0xef26,	// (0x0001ba16) popup_candi_list_indi_window_g1

0xef2f,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane

0xef3b,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1

0xc768,	// (0x00019258) cell_contacts_ai5_widget_pane_g2

0xef50,	// (0x0001ba40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001c9c0) cell_contacts_ai5_widget_pane_g

0xef5c,	// (0x0001ba4c) cell_contacts_ai5_widget_pane_t1

0x41fd,	// (0x00010ced) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd3,	// (0x0001bac3) settings_container_pane

0x8b69,	// (0x00015659) listscroll_set_pane_copy1

0xb2c4,	// (0x00017db4) scroll_pane_cp121_copy1

0x9902,	// (0x000163f2) set_content_pane_copy1

0xefdf,	// (0x0001bacf) aid_height_set_list_copy1_ParamLimits

0xefdf,	// (0x0001bacf) aid_height_set_list_copy1

0xa89c,	// (0x0001738c) aid_size_parent_copy1_ParamLimits

0xa89c,	// (0x0001738c) aid_size_parent_copy1

0xefeb,	// (0x0001badb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefeb,	// (0x0001badb) button_value_adjust_pane_cp6_copy1

0x8e91,	// (0x00015981) list_highlight_pane_cp2_copy1_ParamLimits

0x8e91,	// (0x00015981) list_highlight_pane_cp2_copy1

0xefff,	// (0x0001baef) list_set_pane_copy1_ParamLimits

0xefff,	// (0x0001baef) list_set_pane_copy1

0xef6e,	// (0x0001ba5e) main_pane_set_t1_copy1_ParamLimits

0xef6e,	// (0x0001ba5e) main_pane_set_t1_copy1

0xefa8,	// (0x0001ba98) main_pane_set_t2_copy1_ParamLimits

0xefa8,	// (0x0001ba98) main_pane_set_t2_copy1

0xf0ac,	// (0x0001bb9c) main_pane_set_t3_copy1

0xf0ba,	// (0x0001bbaa) main_pane_set_t4_copy1

0xefc7,	// (0x0001bab7) set_content_pane_g1_copy1_ParamLimits

0xefc7,	// (0x0001bab7) set_content_pane_g1_copy1

0xf0c8,	// (0x0001bbb8) setting_code_pane_copy1

0xf0d0,	// (0x0001bbc0) setting_slider_graphic_pane_copy1

0xf0d0,	// (0x0001bbc0) setting_slider_pane_copy1

0xf0d0,	// (0x0001bbc0) setting_text_pane_copy1

0xf0d0,	// (0x0001bbc0) setting_volume_pane_copy1

0xf0c8,	// (0x0001bbb8) settings_code_pane_cp2_copy1

0xf0d8,	// (0x0001bbc8) settings_code_pane_cp_copy1_ParamLimits

0xf0d8,	// (0x0001bbc8) settings_code_pane_cp_copy1

0x77b8,	// (0x000142a8) volume_set_pane_copy1

0xf0ec,	// (0x0001bbdc) volume_set_pane_g10_copy1

0xf0f4,	// (0x0001bbe4) volume_set_pane_g1_copy1

0xf0fc,	// (0x0001bbec) volume_set_pane_g2_copy1

0xf104,	// (0x0001bbf4) volume_set_pane_g3_copy1

0xf10c,	// (0x0001bbfc) volume_set_pane_g4_copy1

0xf114,	// (0x0001bc04) volume_set_pane_g5_copy1

0xf11c,	// (0x0001bc0c) volume_set_pane_g6_copy1

0xf124,	// (0x0001bc14) volume_set_pane_g7_copy1

0xf12c,	// (0x0001bc1c) volume_set_pane_g8_copy1

0xf134,	// (0x0001bc24) volume_set_pane_g9_copy1

0x3dbb,	// (0x000108ab) bg_set_opt_pane_cp_copy1_ParamLimits

0x3dbb,	// (0x000108ab) bg_set_opt_pane_cp_copy1

0x77c0,	// (0x000142b0) setting_slider_pane_t1_copy1_ParamLimits

0x77c0,	// (0x000142b0) setting_slider_pane_t1_copy1

0x77de,	// (0x000142ce) setting_slider_pane_t2_copy1_ParamLimits

0x77de,	// (0x000142ce) setting_slider_pane_t2_copy1

0x77f8,	// (0x000142e8) setting_slider_pane_t3_copy1_ParamLimits

0x77f8,	// (0x000142e8) setting_slider_pane_t3_copy1

0x7810,	// (0x00014300) slider_set_pane_copy1_ParamLimits

0x7810,	// (0x00014300) slider_set_pane_copy1

0x42b7,	// (0x00010da7) set_opt_bg_pane_g1_copy2

0x42bf,	// (0x00010daf) set_opt_bg_pane_g2_copy2

0xf13c,	// (0x0001bc2c) set_opt_bg_pane_g3_copy2

0x42cf,	// (0x00010dbf) set_opt_bg_pane_g4_copy2

0x42d7,	// (0x00010dc7) set_opt_bg_pane_g5_copy2

0x42df,	// (0x00010dcf) set_opt_bg_pane_g6_copy2

0xf146,	// (0x0001bc36) set_opt_bg_pane_g7_copy2

0xf14e,	// (0x0001bc3e) set_opt_bg_pane_g8_copy2

0xf158,	// (0x0001bc48) set_opt_bg_pane_g9_copy2

0x7826,	// (0x00014316) aid_size_touch_slider_mark_copy1_ParamLimits

0x7826,	// (0x00014316) aid_size_touch_slider_mark_copy1

0xf162,	// (0x0001bc52) slider_set_pane_g1_copy1

0x783a,	// (0x0001432a) slider_set_pane_g2_copy1

0x67fc,	// (0x000132ec) slider_set_pane_g3_copy1_ParamLimits

0x67fc,	// (0x000132ec) slider_set_pane_g3_copy1

0x6810,	// (0x00013300) slider_set_pane_g4_copy1_ParamLimits

0x6810,	// (0x00013300) slider_set_pane_g4_copy1

0x6828,	// (0x00013318) slider_set_pane_g5_copy1_ParamLimits

0x6828,	// (0x00013318) slider_set_pane_g5_copy1

0x67fc,	// (0x000132ec) slider_set_pane_g6_copy1_ParamLimits

0x67fc,	// (0x000132ec) slider_set_pane_g6_copy1

0x7842,	// (0x00014332) slider_set_pane_g7_copy1_ParamLimits

0x7842,	// (0x00014332) slider_set_pane_g7_copy1

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp2_copy1

0xf16b,	// (0x0001bc5b) setting_slider_graphic_pane_g1_copy1

0xf174,	// (0x0001bc64) setting_slider_graphic_pane_t1_copy1

0xf184,	// (0x0001bc74) setting_slider_graphic_pane_t2_copy1

0xf194,	// (0x0001bc84) slider_set_pane_cp_copy1

0xf1a4,	// (0x0001bc94) input_focus_pane_cp1_copy1

0xf1ad,	// (0x0001bc9d) list_set_text_pane_copy1

0xf1b5,	// (0x0001bca5) setting_text_pane_g1_copy1

0xf1be,	// (0x0001bcae) set_text_pane_t1_copy1

0xf1a4,	// (0x0001bc94) input_focus_pane_cp2_copy1

0xf1b5,	// (0x0001bca5) setting_code_pane_g1_copy1

0xf1d9,	// (0x0001bcc9) setting_code_pane_t1_copy1

0xf1e7,	// (0x0001bcd7) list_set_graphic_pane_copy1

0x3d3f,	// (0x0001082f) bg_set_opt_pane_cp4_copy1

0x8874,	// (0x00015364) list_set_graphic_pane_g1_copy1_ParamLimits

0x8874,	// (0x00015364) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0001bceb) list_set_graphic_pane_g2_copy1

0x888c,	// (0x0001537c) list_set_graphic_pane_t1_copy1_ParamLimits

0x888c,	// (0x0001537c) list_set_graphic_pane_t1_copy1

0xbef2,	// (0x000189e2) rs_clock_indi_pane_g1

0xf203,	// (0x0001bcf3) rs_clock_indi_pane_t1

0xf211,	// (0x0001bd01) rs_indi_pane

0xf219,	// (0x0001bd09) rs_indi_pane_g1

0xf222,	// (0x0001bd12) rs_indi_pane_g2

0xef26,	// (0x0001ba16) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001c9c7) rs_indi_pane_g

0x8b69,	// (0x00015659) bg_popup_preview_window_pane_cp03

0xf22b,	// (0x0001bd1b) popup_fep_tooltip_window_t1

0xcda9,	// (0x00019899) popup_note2_window_g2_ParamLimits

0xcda9,	// (0x00019899) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001c767) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001c767) popup_note2_window_g

0xd385,	// (0x00019e75) bg_popup_sub_pane_cp11_ParamLimits

0xd392,	// (0x00019e82) cell_ai3_links_pane_g1_ParamLimits

0xd3a9,	// (0x00019e99) cell_ai3_links_pane_t1

0xf1be,	// (0x0001bcae) set_text_pane_t1_copy1_ParamLimits

0x8a7a,	// (0x0001556a) cell_graphic_popup_pane_cp2_ParamLimits

0x8a7a,	// (0x0001556a) cell_graphic_popup_pane_cp2

0xf239,	// (0x0001bd29) cell_graphic_popup_pane_g1_cp2

0x4055,	// (0x00010b45) cell_graphic_popup_pane_g2_cp2

0xf241,	// (0x0001bd31) cell_graphic_popup_pane_g3_cp2

0xf249,	// (0x0001bd39) cell_graphic_popup_pane_t2_cp2

0x4066,	// (0x00010b56) grid_highlight_pane_cp3_cp2

0x46af,	// (0x0001119f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x41fd,	// (0x00010ced) main_tmo_pane_ParamLimits

0xd75f,	// (0x0001a24f) popup_tmo_big_image_note_window

0xe8f2,	// (0x0001b3e2) cell_ai5_widget_list_pane

0xe8fa,	// (0x0001b3ea) cell_ai5_widget_lrg_icon_pane

0xee64,	// (0x0001b954) tmo_note_info_pane_t1_ParamLimits

0xee79,	// (0x0001b969) tmo_note_info_pane_t2_ParamLimits

0xee8e,	// (0x0001b97e) tmo_note_info_pane_t3_ParamLimits

0xeea3,	// (0x0001b993) tmo_note_info_pane_t4_ParamLimits

0xeeb5,	// (0x0001b9a5) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001c9b5) tmo_note_info_pane_t_ParamLimits

0xefd3,	// (0x0001bac3) settings_container_pane_ParamLimits

0xf19c,	// (0x0001bc8c) indicator_popup_pane_cp5

0xf19c,	// (0x0001bc8c) indicator_popup_pane_cp6

0xf1e7,	// (0x0001bcd7) list_set_graphic_pane_copy1_ParamLimits

0x3bbc,	// (0x000106ac) bg_popup_window_pane_cp23

0xf257,	// (0x0001bd47) popup_tmo_big_image_note_window_g1

0xf260,	// (0x0001bd50) popup_tmo_big_image_note_window_t1

0xf270,	// (0x0001bd60) popup_tmo_big_image_note_window_t2

0xf280,	// (0x0001bd70) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001c9ce) popup_tmo_big_image_note_window_t

0xbef2,	// (0x000189e2) cell_ai5_widget_lrg_icon_pane_g1

0xf290,	// (0x0001bd80) cell_ai5_widget_lrg_icon_pane_t1

0xf29e,	// (0x0001bd8e) cell_ai5_widget_list_row_pane_ParamLimits

0xf29e,	// (0x0001bd8e) cell_ai5_widget_list_row_pane

0xf2b5,	// (0x0001bda5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2b5,	// (0x0001bda5) cell_ai5_widget_list_row_pane_g1

0xf2c2,	// (0x0001bdb2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2c2,	// (0x0001bdb2) cell_ai5_widget_list_row_pane_t1

0xf2ed,	// (0x0001bddd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ed,	// (0x0001bddd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0001c9d5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001c9d5) cell_ai5_widget_list_row_pane_t

0x55df,	// (0x000120cf) main_fep_vtchi_ss_pane

0xf335,	// (0x0001be25) popup_fep_char_pre_window

0xf33d,	// (0x0001be2d) popup_fep_ituss_window

0xf35e,	// (0x0001be4e) popup_fep_vkbss_window

0xf388,	// (0x0001be78) grid_vkbss_keypad_pane_ParamLimits

0xf388,	// (0x0001be78) grid_vkbss_keypad_pane

0xf398,	// (0x0001be88) ituss_keypad_pane

0x7864,	// (0x00014354) aid_vkbss_key_offset_ParamLimits

0x7864,	// (0x00014354) aid_vkbss_key_offset

0x7870,	// (0x00014360) cell_vkbss_key_pane_ParamLimits

0x7870,	// (0x00014360) cell_vkbss_key_pane

0x922c,	// (0x00015d1c) bg_cell_vkbss_key_g1_ParamLimits

0x922c,	// (0x00015d1c) bg_cell_vkbss_key_g1

0xf3a7,	// (0x0001be97) cell_vkbss_key_3p_pane_ParamLimits

0xf3a7,	// (0x0001be97) cell_vkbss_key_3p_pane

0xf3bb,	// (0x0001beab) cell_vkbss_key_g1_ParamLimits

0xf3bb,	// (0x0001beab) cell_vkbss_key_g1

0xf3cf,	// (0x0001bebf) cell_vkbss_key_t1_ParamLimits

0xf3cf,	// (0x0001bebf) cell_vkbss_key_t1

0x7886,	// (0x00014376) cell_ituss_key_pane_ParamLimits

0x7886,	// (0x00014376) cell_ituss_key_pane

0xf3fa,	// (0x0001beea) bg_cell_ituss_key_g1_ParamLimits

0xf3fa,	// (0x0001beea) bg_cell_ituss_key_g1

0xf406,	// (0x0001bef6) cell_ituss_key_pane_g1_ParamLimits

0xf406,	// (0x0001bef6) cell_ituss_key_pane_g1

0x7897,	// (0x00014387) cell_ituss_key_pane_g2_ParamLimits

0x7897,	// (0x00014387) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0001c9dc) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001c9dc) cell_ituss_key_pane_g

0x78c3,	// (0x000143b3) cell_ituss_key_t1_ParamLimits

0x78c3,	// (0x000143b3) cell_ituss_key_t1

0x78fd,	// (0x000143ed) cell_ituss_key_t2_ParamLimits

0x78fd,	// (0x000143ed) cell_ituss_key_t2

0x792e,	// (0x0001441e) cell_ituss_key_t3_ParamLimits

0x792e,	// (0x0001441e) cell_ituss_key_t3

0x78fd,	// (0x000143ed) cell_ituss_key_t4_ParamLimits

0x78fd,	// (0x000143ed) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0001c9e3) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001c9e3) cell_ituss_key_t

0xf42c,	// (0x0001bf1c) cell_vkbss_key_3p_pane_g1

0xf434,	// (0x0001bf24) cell_vkbss_key_3p_pane_g2

0xf43c,	// (0x0001bf2c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0001c9ee) cell_vkbss_key_3p_pane_g

0x8b69,	// (0x00015659) bg_popup_fep_char_preview_window_cp02

0xf444,	// (0x0001bf34) popup_fep_char_pre_window_t1

0xe87f,	// (0x0001b36f) main_ai5_sk_pane

0xef2f,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3b,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc768,	// (0x00019258) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef50,	// (0x0001ba40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001c9c0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5c,	// (0x0001ba4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x41fd,	// (0x00010ced) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf452,	// (0x0001bf42) main_ai5_sk_pane_g1

0x9996,	// (0x00016486) popup_query_code_window_g1

0xf353,	// (0x0001be43) popup_fep_vkb_icf_pane

0xf372,	// (0x0001be62) popup_fep_vtchi_icf_pane

0xf45b,	// (0x0001bf4b) bg_icf_pane

0xf467,	// (0x0001bf57) list_vkb_icf_pane

0xf476,	// (0x0001bf66) bg_icf_pane_cp01

0xf489,	// (0x0001bf79) vtchi_icf_list_pane

0xf499,	// (0x0001bf89) list_vkb_icf_pane_t1_ParamLimits

0xf499,	// (0x0001bf89) list_vkb_icf_pane_t1

0xf4b0,	// (0x0001bfa0) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0001bfa0) vtchi_icf_list_pane_t1

0xf33d,	// (0x0001be2d) popup_fep_ituss_window_ParamLimits

0xf372,	// (0x0001be62) popup_fep_vtchi_icf_pane_ParamLimits

0xf398,	// (0x0001be88) ituss_keypad_pane_ParamLimits

0x7858,	// (0x00014348) ituss_sks_pane

0xf45b,	// (0x0001bf4b) bg_icf_pane_ParamLimits

0xf315,	// (0x0001be05) icf_edit_indi_pane_ParamLimits

0xf315,	// (0x0001be05) icf_edit_indi_pane

0xf467,	// (0x0001bf57) list_vkb_icf_pane_ParamLimits

0xf476,	// (0x0001bf66) bg_icf_pane_cp01_ParamLimits

0xf328,	// (0x0001be18) icf_edit_indi_pane_cp01_ParamLimits

0xf328,	// (0x0001be18) icf_edit_indi_pane_cp01

0xf491,	// (0x0001bf81) vtchi_query_pane

0xe709,	// (0x0001b1f9) icf_edit_indi_pane_g1_ParamLimits

0xe709,	// (0x0001b1f9) icf_edit_indi_pane_g1

0xf525,	// (0x0001c015) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001c015) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001ca06) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001ca06) icf_edit_indi_pane_g

0xf537,	// (0x0001c027) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001bfbe) bg_input_focus_pane_cp042

0x40c9,	// (0x00010bb9) vtchi_button_pane

0xf4d7,	// (0x0001bfc7) vtchi_query_pane_t1

0xf4e5,	// (0x0001bfd5) vtchi_query_pane_t2

0xf4f3,	// (0x0001bfe3) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001c9f5) vtchi_query_pane_t

0x55df,	// (0x000120cf) bg_button_pane_cp13

0xf501,	// (0x0001bff1) vtchi_button_pane_g1

0x7971,	// (0x00014461) ituss_sks_pane_g1

0x797c,	// (0x0001446c) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001c9fc) ituss_sks_pane_g

0xf509,	// (0x0001bff9) ituss_sks_pane_t1

0xf517,	// (0x0001c007) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001ca01) ituss_sks_pane_t

0xb922,	// (0x00018412) indicator_nsta_pane_cp_g1

0xb92a,	// (0x0001841a) indicator_nsta_pane_cp_g2

0xb932,	// (0x00018422) indicator_nsta_pane_cp_g3

0xb922,	// (0x00018412) indicator_nsta_pane_cp_g4

0xb92a,	// (0x0001841a) indicator_nsta_pane_cp_g5

0xb932,	// (0x00018422) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001c5a5) indicator_nsta_pane_cp_g

0xe460,	// (0x0001af50) cell_graphic2_pane_t2_ParamLimits

0xe460,	// (0x0001af50) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001c8b7) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001c8b7) cell_graphic2_pane_t

0xe48d,	// (0x0001af7d) cell_graphic2_control_pane_t1

0x86f1,	// (0x000151e1) signal_pane_g3_ParamLimits

0x86f1,	// (0x000151e1) signal_pane_g3

0x8703,	// (0x000151f3) signal_pane_g4_ParamLimits

0x8703,	// (0x000151f3) signal_pane_g4

0xf2ff,	// (0x0001bdef) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ff,	// (0x0001bdef) cell_ai5_widget_list_row_pane_t3

0xf41a,	// (0x0001bf0a) cell_ituss_key_pane_t1_ParamLimits

0xf41a,	// (0x0001bf0a) cell_ituss_key_pane_t1

0x9590,	// (0x00016080) form_field_data_wide_pane_vc_t2_ParamLimits

0x9590,	// (0x00016080) form_field_data_wide_pane_vc_t2

0x95a4,	// (0x00016094) form_field_data_wide_pane_vc_t3_ParamLimits

0x95a4,	// (0x00016094) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0001c2ea) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0001c2ea) form_field_data_wide_pane_vc_t

0xb5e9,	// (0x000180d9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb5e9,	// (0x000180d9) form_field_slider_wide_pane_vc_t3

0xb6c7,	// (0x000181b7) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb6c7,	// (0x000181b7) form_field_popup_wide_pane_vc_t2

0xb6de,	// (0x000181ce) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb6de,	// (0x000181ce) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001c594) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001c594) form_field_popup_wide_pane_vc_t

0x7662,	// (0x00014152) aid_fshwr2_btn_pane_ParamLimits

0x766e,	// (0x0001415e) aid_fshwr2_syb_pane_ParamLimits

0x767f,	// (0x0001416f) aid_fshwr2_txt_pane_ParamLimits

0x6eb4,	// (0x000139a4) fshwr2_bg_pane_ParamLimits

0x768b,	// (0x0001417b) fshwr2_func_candi_pane_ParamLimits

0x76a3,	// (0x00014193) fshwr2_hwr_syb_pane_ParamLimits

0x76ba,	// (0x000141aa) fshwr2_icf_pane_ParamLimits

0xb55a,	// (0x0001804a) list_double_graphic_pane_vc_g4_ParamLimits

0xb55a,	// (0x0001804a) list_double_graphic_pane_vc_g4

0x78b7,	// (0x000143a7) cell_ituss_key_pane_g3_ParamLimits

0x78b7,	// (0x000143a7) cell_ituss_key_pane_g3

0x795f,	// (0x0001444f) cell_ituss_key_t5_ParamLimits

0x795f,	// (0x0001444f) cell_ituss_key_t5

0xf35e,	// (0x0001be4e) popup_fep_vkbss_window_ParamLimits

0xe889,	// (0x0001b379) aid_cell_ai5_quarter

0xf537,	// (0x0001c027) icf_edit_indi_pane_t1_ParamLimits

0x7b83,	// (0x00014673) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7b83,	// (0x00014673) aid_tch_indicator_popup_pane_cp2

0x7b96,	// (0x00014686) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7b96,	// (0x00014686) aid_tch_query_popup_data_pane_cp2

0x993e,	// (0x0001642e) aid_tch_query_popup_pane_ParamLimits

0x993e,	// (0x0001642e) aid_tch_query_popup_pane

0x993e,	// (0x0001642e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x993e,	// (0x0001642e) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
