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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002639b };

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
0x8c31,	// (0x0002efcc) Screen

0x8c3d,	// (0x0002efd8) application_window_ParamLimits

0x8c3d,	// (0x0002efd8) application_window

0xba42,	// (0x00031ddd) screen_g1

0x8021,	// (0x0002e3bc) area_bottom_pane_ParamLimits

0x8021,	// (0x0002e3bc) area_bottom_pane

0x0814,	// (0x00026baf) area_top_pane_ParamLimits

0x0814,	// (0x00026baf) area_top_pane

0x08b2,	// (0x00026c4d) main_pane_ParamLimits

0x08b2,	// (0x00026c4d) main_pane

0xba4c,	// (0x00031de7) misc_graphics

0x9d4d,	// (0x000300e8) battery_pane_ParamLimits

0x9d4d,	// (0x000300e8) battery_pane

0xd927,	// (0x00033cc2) bg_status_flat_pane_g8

0xd92f,	// (0x00033cca) bg_status_flat_pane_g9

0xd05c,	// (0x000333f7) context_pane_ParamLimits

0xd05c,	// (0x000333f7) context_pane

0x9eb8,	// (0x00030253) navi_pane_ParamLimits

0x9eb8,	// (0x00030253) navi_pane

0x9f2f,	// (0x000302ca) signal_pane_ParamLimits

0x9f2f,	// (0x000302ca) signal_pane

0x0008,

0x0001,	// (0x0002639c) bg_status_flat_pane_g

0x9fbf,	// (0x0003035a) status_pane_g1_ParamLimits

0x9fbf,	// (0x0003035a) status_pane_g1

0x9fd5,	// (0x00030370) status_pane_g2_ParamLimits

0x9fd5,	// (0x00030370) status_pane_g2

0xd0c1,	// (0x0003345c) status_pane_g3_ParamLimits

0xd0c1,	// (0x0003345c) status_pane_g3

0x0004,

0xf7b8,	// (0x00035b53) status_pane_g_ParamLimits

0xf7b8,	// (0x00035b53) status_pane_g

0x9fe1,	// (0x0003037c) title_pane_ParamLimits

0x9fe1,	// (0x0003037c) title_pane

0xa042,	// (0x000303dd) uni_indicator_pane_ParamLimits

0xa042,	// (0x000303dd) uni_indicator_pane

0xce87,	// (0x00033222) bg_list_pane_ParamLimits

0xce87,	// (0x00033222) bg_list_pane

0x66f0,	// (0x0002ca8b) find_pane

0x963b,	// (0x0002f9d6) listscroll_app_pane_ParamLimits

0x963b,	// (0x0002f9d6) listscroll_app_pane

0xcea7,	// (0x00033242) listscroll_form_pane

0x66f8,	// (0x0002ca93) listscroll_gen_pane_ParamLimits

0x66f8,	// (0x0002ca93) listscroll_gen_pane

0xcea7,	// (0x00033242) listscroll_set_pane

0xd953,	// (0x00033cee) main_idle_act_pane

0xcc6d,	// (0x00033008) main_idle_trad_pane

0xcc6d,	// (0x00033008) main_list_empty_pane

0xc37d,	// (0x00032718) main_midp_pane

0xcec1,	// (0x0003325c) main_pane_g1_ParamLimits

0xcec1,	// (0x0003325c) main_pane_g1

0x9647,	// (0x0002f9e2) popup_ai_message_window_ParamLimits

0x9647,	// (0x0002f9e2) popup_ai_message_window

0x96d8,	// (0x0002fa73) popup_fep_china_uni_window_ParamLimits

0x96d8,	// (0x0002fa73) popup_fep_china_uni_window

0xcef3,	// (0x0003328e) popup_fep_japan_candidate_window_ParamLimits

0xcef3,	// (0x0003328e) popup_fep_japan_candidate_window

0xcf11,	// (0x000332ac) popup_fep_japan_predictive_window_ParamLimits

0xcf11,	// (0x000332ac) popup_fep_japan_predictive_window

0x9732,	// (0x0002facd) popup_find_window

0x974f,	// (0x0002faea) popup_grid_graphic_window_ParamLimits

0x974f,	// (0x0002faea) popup_grid_graphic_window

0xcf41,	// (0x000332dc) popup_large_graphic_colour_window

0x97e1,	// (0x0002fb7c) popup_menu_window_ParamLimits

0x97e1,	// (0x0002fb7c) popup_menu_window

0x99ad,	// (0x0002fd48) popup_note_image_window

0x9973,	// (0x0002fd0e) popup_note_wait_window_ParamLimits

0x9973,	// (0x0002fd0e) popup_note_wait_window

0x99c5,	// (0x0002fd60) popup_note_window_ParamLimits

0x99c5,	// (0x0002fd60) popup_note_window

0x9a6b,	// (0x0002fe06) popup_query_code_window_ParamLimits

0x9a6b,	// (0x0002fe06) popup_query_code_window

0xcf67,	// (0x00033302) popup_query_data_code_window_ParamLimits

0xcf67,	// (0x00033302) popup_query_data_code_window

0x9aa5,	// (0x0002fe40) popup_query_data_window_ParamLimits

0x9aa5,	// (0x0002fe40) popup_query_data_window

0x9b1b,	// (0x0002feb6) popup_query_sat_info_window_ParamLimits

0x9b1b,	// (0x0002feb6) popup_query_sat_info_window

0x9bb2,	// (0x0002ff4d) popup_snote_single_graphic_window_ParamLimits

0x9bb2,	// (0x0002ff4d) popup_snote_single_graphic_window

0x9bb2,	// (0x0002ff4d) popup_snote_single_text_window_ParamLimits

0x9bb2,	// (0x0002ff4d) popup_snote_single_text_window

0xcf7e,	// (0x00033319) popup_sub_window_general

0xcfc4,	// (0x0003335f) popup_window_general_ParamLimits

0xcfc4,	// (0x0003335f) popup_window_general

0xcfd9,	// (0x00033374) power_save_pane

0x8495,	// (0x0002e830) control_pane_g1_ParamLimits

0x8495,	// (0x0002e830) control_pane_g1

0x1579,	// (0x00027914) control_pane_g2_ParamLimits

0x1579,	// (0x00027914) control_pane_g2

0xce61,	// (0x000331fc) control_pane_g3_ParamLimits

0xce61,	// (0x000331fc) control_pane_g3

0x0007,

0xf7a0,	// (0x00035b3b) control_pane_g_ParamLimits

0xf7a0,	// (0x00035b3b) control_pane_g

0x84d6,	// (0x0002e871) control_pane_t1_ParamLimits

0x84d6,	// (0x0002e871) control_pane_t1

0x8534,	// (0x0002e8cf) control_pane_t2_ParamLimits

0x8534,	// (0x0002e8cf) control_pane_t2

0x0002,

0xf7b1,	// (0x00035b4c) control_pane_t_ParamLimits

0xf7b1,	// (0x00035b4c) control_pane_t

0xcd82,	// (0x0003311d) navi_navi_volume_pane_cp1

0xcd8b,	// (0x00033126) status_small_icon_pane

0xcd93,	// (0x0003312e) status_small_pane_g1_ParamLimits

0xcd93,	// (0x0003312e) status_small_pane_g1

0xcdc7,	// (0x00033162) status_small_pane_g2_ParamLimits

0xcdc7,	// (0x00033162) status_small_pane_g2

0xcdd3,	// (0x0003316e) status_small_pane_g3_ParamLimits

0xcdd3,	// (0x0003316e) status_small_pane_g3

0xcddf,	// (0x0003317a) status_small_pane_g4_ParamLimits

0xcddf,	// (0x0003317a) status_small_pane_g4

0xcdeb,	// (0x00033186) status_small_pane_g5_ParamLimits

0xcdeb,	// (0x00033186) status_small_pane_g5

0xcdfa,	// (0x00033195) status_small_pane_g6_ParamLimits

0xcdfa,	// (0x00033195) status_small_pane_g6

0x0007,

0xf78f,	// (0x00035b2a) status_small_pane_g_ParamLimits

0xf78f,	// (0x00035b2a) status_small_pane_g

0xce2a,	// (0x000331c5) status_small_pane_t1

0xce4d,	// (0x000331e8) status_small_wait_pane_ParamLimits

0xce4d,	// (0x000331e8) status_small_wait_pane

0x92e3,	// (0x0002f67e) aid_levels_signal_ParamLimits

0x92e3,	// (0x0002f67e) aid_levels_signal

0x92fb,	// (0x0002f696) signal_pane_g1_ParamLimits

0x92fb,	// (0x0002f696) signal_pane_g1

0x9316,	// (0x0002f6b1) signal_pane_g2_ParamLimits

0x9316,	// (0x0002f6b1) signal_pane_g2

0x0001,

0xf724,	// (0x00035abf) signal_pane_g_ParamLimits

0xf724,	// (0x00035abf) signal_pane_g

0xc7b1,	// (0x00032b4c) context_pane_g1

0x8c4d,	// (0x0002efe8) title_pane_g1

0x8c82,	// (0x0002f01d) title_pane_t1

0xba62,	// (0x00031dfd) title_pane_t2

0xba88,	// (0x00031e23) title_pane_t3

0x0002,

0xf573,	// (0x0003590e) title_pane_t

0xa06a,	// (0x00030405) aid_levels_battery_ParamLimits

0xa06a,	// (0x00030405) aid_levels_battery

0xa086,	// (0x00030421) battery_pane_g1_ParamLimits

0xa086,	// (0x00030421) battery_pane_g1

0xa0a3,	// (0x0003043e) battery_pane_g2_ParamLimits

0xa0a3,	// (0x0003043e) battery_pane_g2

0x0001,

0xf7c3,	// (0x00035b5e) battery_pane_g_ParamLimits

0xf7c3,	// (0x00035b5e) battery_pane_g

0xa2e8,	// (0x00030683) uni_indicator_pane_g1

0xa2fd,	// (0x00030698) uni_indicator_pane_g2

0xa312,	// (0x000306ad) uni_indicator_pane_g3

0x0005,

0xf8e3,	// (0x00035c7e) uni_indicator_pane_g

0xcadd,	// (0x00032e78) navi_icon_pane_ParamLimits

0xcadd,	// (0x00032e78) navi_icon_pane

0xca24,	// (0x00032dbf) navi_midp_pane

0xcaf9,	// (0x00032e94) navi_navi_pane

0xcb03,	// (0x00032e9e) navi_text_pane_ParamLimits

0xcb03,	// (0x00032e9e) navi_text_pane

0xba42,	// (0x00031ddd) status_small_wait_pane_g1

0xbe9a,	// (0x00032235) status_small_wait_pane_g2

0x0001,

0xf8de,	// (0x00035c79) status_small_wait_pane_g

0xa287,	// (0x00030622) navi_navi_icon_text_pane

0xa28f,	// (0x0003062a) navi_navi_pane_g1_ParamLimits

0xa28f,	// (0x0003062a) navi_navi_pane_g1

0xa2a1,	// (0x0003063c) navi_navi_pane_g2_ParamLimits

0xa2a1,	// (0x0003063c) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00035c74) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00035c74) navi_navi_pane_g

0xdebc,	// (0x00034257) navi_navi_tabs_pane

0xa2b3,	// (0x0003064e) navi_navi_text_pane

0xa287,	// (0x00030622) navi_navi_volume_pane

0xa275,	// (0x00030610) navi_text_pane_t1

0xa269,	// (0x00030604) navi_icon_pane_g1

0xddfd,	// (0x00034198) navi_navi_text_pane_t1

0x8783,	// (0x0002eb1e) navi_navi_volume_pane_g1

0x878b,	// (0x0002eb26) volume_small_pane

0xa1c5,	// (0x00030560) navi_navi_icon_text_pane_g1

0xa1cd,	// (0x00030568) navi_navi_icon_text_pane_t1

0xcaf9,	// (0x00032e94) navi_tabs_2_long_pane

0xcaf9,	// (0x00032e94) navi_tabs_2_pane

0xcaf9,	// (0x00032e94) navi_tabs_3_long_pane

0xcaf9,	// (0x00032e94) navi_tabs_3_pane

0xcaf9,	// (0x00032e94) navi_tabs_4_pane

0x8763,	// (0x0002eafe) tabs_2_active_pane_ParamLimits

0x8763,	// (0x0002eafe) tabs_2_active_pane

0x8773,	// (0x0002eb0e) tabs_2_passive_pane_ParamLimits

0x8773,	// (0x0002eb0e) tabs_2_passive_pane

0x8731,	// (0x0002eacc) tabs_3_active_pane_ParamLimits

0x8731,	// (0x0002eacc) tabs_3_active_pane

0x8741,	// (0x0002eadc) tabs_3_passive_pane_ParamLimits

0x8741,	// (0x0002eadc) tabs_3_passive_pane

0x8752,	// (0x0002eaed) tabs_3_passive_pane_cp_ParamLimits

0x8752,	// (0x0002eaed) tabs_3_passive_pane_cp

0x86ed,	// (0x0002ea88) tabs_4_active_pane_ParamLimits

0x86ed,	// (0x0002ea88) tabs_4_active_pane

0x86fe,	// (0x0002ea99) tabs_4_passive_pane_ParamLimits

0x86fe,	// (0x0002ea99) tabs_4_passive_pane

0x870f,	// (0x0002eaaa) tabs_4_passive_pane_cp_ParamLimits

0x870f,	// (0x0002eaaa) tabs_4_passive_pane_cp

0x8720,	// (0x0002eabb) tabs_4_passive_pane_cp2_ParamLimits

0x8720,	// (0x0002eabb) tabs_4_passive_pane_cp2

0x86cd,	// (0x0002ea68) tabs_2_long_active_pane_ParamLimits

0x86cd,	// (0x0002ea68) tabs_2_long_active_pane

0x86dd,	// (0x0002ea78) tabs_2_long_passive_pane_ParamLimits

0x86dd,	// (0x0002ea78) tabs_2_long_passive_pane

0x8698,	// (0x0002ea33) tabs_3_long_active_pane_ParamLimits

0x8698,	// (0x0002ea33) tabs_3_long_active_pane

0x86a9,	// (0x0002ea44) tabs_3_long_passive_pane_ParamLimits

0x86a9,	// (0x0002ea44) tabs_3_long_passive_pane

0x86bc,	// (0x0002ea57) tabs_3_long_passive_pane_cp_ParamLimits

0x86bc,	// (0x0002ea57) tabs_3_long_passive_pane_cp

0x2127,	// (0x000284c2) volume_small_pane_g1

0x8647,	// (0x0002e9e2) volume_small_pane_g2

0x8650,	// (0x0002e9eb) volume_small_pane_g3

0x8659,	// (0x0002e9f4) volume_small_pane_g4

0x8662,	// (0x0002e9fd) volume_small_pane_g5

0x866b,	// (0x0002ea06) volume_small_pane_g6

0x8674,	// (0x0002ea0f) volume_small_pane_g7

0x867d,	// (0x0002ea18) volume_small_pane_g8

0x8686,	// (0x0002ea21) volume_small_pane_g9

0x868f,	// (0x0002ea2a) volume_small_pane_g10

0x0009,

0xf8af,	// (0x00035c4a) volume_small_pane_g

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp2_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp2

0x8d0e,	// (0x0002f0a9) tabs_3_active_pane_g1

0x8d16,	// (0x0002f0b1) tabs_3_active_pane_t1

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp2_ParamLimits

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp2

0x8d0e,	// (0x0002f0a9) tabs_3_passive_pane_g1

0x8d16,	// (0x0002f0b1) tabs_3_passive_pane_t1

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp3_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp3

0x8d28,	// (0x0002f0c3) tabs_4_active_pane_g1

0x8d30,	// (0x0002f0cb) tabs_4_active_pane_t1

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp3_ParamLimits

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp3

0x8d28,	// (0x0002f0c3) tabs_4_1_passive_pane_g1

0x8d30,	// (0x0002f0cb) tabs_4_1_passive_pane_t1

0xc37d,	// (0x00032718) list_highlight_pane_cp2

0xa39f,	// (0x0003073a) list_set_pane_ParamLimits

0xa39f,	// (0x0003073a) list_set_pane

0xa439,	// (0x000307d4) main_pane_set_t1_ParamLimits

0xa439,	// (0x000307d4) main_pane_set_t1

0xa459,	// (0x000307f4) main_pane_set_t2_ParamLimits

0xa459,	// (0x000307f4) main_pane_set_t2

0xa46d,	// (0x00030808) main_pane_set_t3_ParamLimits

0xa46d,	// (0x00030808) main_pane_set_t3

0xa47f,	// (0x0003081a) main_pane_set_t4_ParamLimits

0xa47f,	// (0x0003081a) main_pane_set_t4

0x0003,

0xf92c,	// (0x00035cc7) main_pane_set_t_ParamLimits

0xf92c,	// (0x00035cc7) main_pane_set_t

0xa491,	// (0x0003082c) setting_code_pane

0xa499,	// (0x00030834) setting_slider_graphic_pane

0xa499,	// (0x00030834) setting_slider_pane

0xa499,	// (0x00030834) setting_text_pane

0xa499,	// (0x00030834) setting_volume_pane

0x0ba9,	// (0x00026f44) volume_set_pane

0xbaa8,	// (0x00031e43) bg_set_opt_pane_cp

0x0bb1,	// (0x00026f4c) setting_slider_pane_t1

0x0bca,	// (0x00026f65) setting_slider_pane_t2

0x0be3,	// (0x00026f7e) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00035915) setting_slider_pane_t

0x0bfa,	// (0x00026f95) slider_set_pane

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp2

0xbab6,	// (0x00031e51) setting_slider_graphic_pane_g1

0x0c10,	// (0x00026fab) setting_slider_graphic_pane_t1

0x0c1f,	// (0x00026fba) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003591c) setting_slider_graphic_pane_t

0x0c2e,	// (0x00026fc9) slider_set_pane_cp

0xba4c,	// (0x00031de7) input_focus_pane_cp1

0xe311,	// (0x000346ac) list_set_text_pane

0xba42,	// (0x00031ddd) setting_text_pane_g1

0xba4c,	// (0x00031de7) input_focus_pane_cp2

0xba42,	// (0x00031ddd) setting_code_pane_g1

0xbabf,	// (0x00031e5a) setting_code_pane_t1

0x42d6,	// (0x0002a671) set_text_pane_t1_ParamLimits

0x42d6,	// (0x0002a671) set_text_pane_t1

0xc28d,	// (0x00032628) set_opt_bg_pane_g1

0xc295,	// (0x00032630) set_opt_bg_pane_g2

0xe2f1,	// (0x0003468c) set_opt_bg_pane_g3

0xc2a5,	// (0x00032640) set_opt_bg_pane_g4

0xc2ad,	// (0x00032648) set_opt_bg_pane_g5

0xc2b5,	// (0x00032650) set_opt_bg_pane_g6

0xe2f9,	// (0x00034694) set_opt_bg_pane_g7

0xe301,	// (0x0003469c) set_opt_bg_pane_g8

0xe309,	// (0x000346a4) set_opt_bg_pane_g9

0x0008,

0xf919,	// (0x00035cb4) set_opt_bg_pane_g

0xe2e4,	// (0x0003467f) slider_set_pane_g1

0x247e,	// (0x00028819) slider_set_pane_g2

0x0006,

0xf90a,	// (0x00035ca5) slider_set_pane_g

0x23f5,	// (0x00028790) volume_set_pane_g1

0x23fd,	// (0x00028798) volume_set_pane_g2

0x2405,	// (0x000287a0) volume_set_pane_g3

0x240d,	// (0x000287a8) volume_set_pane_g4

0x2415,	// (0x000287b0) volume_set_pane_g5

0x241d,	// (0x000287b8) volume_set_pane_g6

0x2425,	// (0x000287c0) volume_set_pane_g7

0x242d,	// (0x000287c8) volume_set_pane_g8

0x2435,	// (0x000287d0) volume_set_pane_g9

0x243d,	// (0x000287d8) volume_set_pane_g10

0x0009,

0xf8f0,	// (0x00035c8b) volume_set_pane_g

0x8d42,	// (0x0002f0dd) indicator_pane_ParamLimits

0x8d42,	// (0x0002f0dd) indicator_pane

0x8d6a,	// (0x0002f105) main_idle_pane_g2_ParamLimits

0x8d6a,	// (0x0002f105) main_idle_pane_g2

0x8da2,	// (0x0002f13d) main_pane_idle_g1_ParamLimits

0x8da2,	// (0x0002f13d) main_pane_idle_g1

0xbacd,	// (0x00031e68) popup_clock_digital_analogue_window_ParamLimits

0xbacd,	// (0x00031e68) popup_clock_digital_analogue_window

0x8dc9,	// (0x0002f164) soft_indicator_pane_ParamLimits

0x8dc9,	// (0x0002f164) soft_indicator_pane

0x8de3,	// (0x0002f17e) wallpaper_pane_ParamLimits

0x8de3,	// (0x0002f17e) wallpaper_pane

0xba42,	// (0x00031ddd) wallpaper_pane_g1

0x8df5,	// (0x0002f190) indicator_pane_g1_ParamLimits

0x8df5,	// (0x0002f190) indicator_pane_g1

0xe458,	// (0x000347f3) navi_navi_icon_text_pane_srt_g1

0xbafb,	// (0x00031e96) soft_indicator_pane_t1

0xbb15,	// (0x00031eb0) aid_ps_area_pane

0x8e0e,	// (0x0002f1a9) aid_ps_clock_pane

0xbb26,	// (0x00031ec1) aid_ps_indicator_pane

0xbb32,	// (0x00031ecd) indicator_ps_pane_ParamLimits

0xbb32,	// (0x00031ecd) indicator_ps_pane

0xbb41,	// (0x00031edc) power_save_pane_g1_ParamLimits

0xbb41,	// (0x00031edc) power_save_pane_g1

0xbb4d,	// (0x00031ee8) power_save_pane_g2_ParamLimits

0xbb4d,	// (0x00031ee8) power_save_pane_g2

0x0708,	// (0x00026aa3) aid_navinavi_width_pane

0xbb15,	// (0x00031eb0) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00035921) power_save_pane_g_ParamLimits

0xf586,	// (0x00035921) power_save_pane_g

0xbb5b,	// (0x00031ef6) power_save_pane_t1_ParamLimits

0xbb5b,	// (0x00031ef6) power_save_pane_t1

0x8e0e,	// (0x0002f1a9) aid_ps_clock_pane_ParamLimits

0xbb26,	// (0x00031ec1) aid_ps_indicator_pane_ParamLimits

0xbb6d,	// (0x00031f08) power_save_pane_t4_ParamLimits

0xbb6d,	// (0x00031f08) power_save_pane_t4

0x0001,

0xf58b,	// (0x00035926) power_save_pane_t_ParamLimits

0xf58b,	// (0x00035926) power_save_pane_t

0xbb97,	// (0x00031f32) power_save_t3_ParamLimits

0xbb97,	// (0x00031f32) power_save_t3

0xbb82,	// (0x00031f1d) power_save_t2_ParamLimits

0xbb82,	// (0x00031f1d) power_save_t2

0xbbac,	// (0x00031f47) indicator_ps_pane_g1

0x8e1c,	// (0x0002f1b7) ai_gene_pane_ParamLimits

0x8e1c,	// (0x0002f1b7) ai_gene_pane

0x8e33,	// (0x0002f1ce) ai_links_pane_ParamLimits

0x8e33,	// (0x0002f1ce) ai_links_pane

0x8e4b,	// (0x0002f1e6) indicator_pane_cp1_ParamLimits

0x8e4b,	// (0x0002f1e6) indicator_pane_cp1

0x8e5a,	// (0x0002f1f5) main_pane_idle_g1_cp_ParamLimits

0x8e5a,	// (0x0002f1f5) main_pane_idle_g1_cp

0xbbb5,	// (0x00031f50) popup_ai_links_title_window

0x8e72,	// (0x0002f20d) soft_indicator_pane_cp1_ParamLimits

0x8e72,	// (0x0002f20d) soft_indicator_pane_cp1

0xe12c,	// (0x000344c7) ai_links_pane_g1

0xe135,	// (0x000344d0) grid_ai_links_pane

0xa2df,	// (0x0003067a) ai_gene_pane_1

0xe11a,	// (0x000344b5) ai_gene_pane_2

0xe123,	// (0x000344be) list_highlight_pane_cp4

0xa2bb,	// (0x00030656) cell_ai_link_pane_ParamLimits

0xa2bb,	// (0x00030656) cell_ai_link_pane

0xe112,	// (0x000344ad) cell_ai_link_pane_g1

0xbe9a,	// (0x00032235) cell_ai_link_pane_g2

0x0001,

0x009f,	// (0x0002643a) cell_ai_link_pane_g

0xba4c,	// (0x00031de7) grid_highlight_cp2

0xba4c,	// (0x00031de7) bg_popup_sub_pane_cp1

0xbbcc,	// (0x00031f67) popup_ai_links_title_window_t1

0xe060,	// (0x000343fb) ai_gene_pane_1_g1_ParamLimits

0xe060,	// (0x000343fb) ai_gene_pane_1_g1

0xe06c,	// (0x00034407) ai_gene_pane_1_g2_ParamLimits

0xe06c,	// (0x00034407) ai_gene_pane_1_g2

0x0001,

0x0095,	// (0x00026430) ai_gene_pane_1_g_ParamLimits

0x0095,	// (0x00026430) ai_gene_pane_1_g

0xe079,	// (0x00034414) ai_gene_pane_1_t1_ParamLimits

0xe079,	// (0x00034414) ai_gene_pane_1_t1

0xe0ad,	// (0x00034448) grid_ai_soft_ind_pane

0xe04b,	// (0x000343e6) ai_gene_pane_2_t1_ParamLimits

0xe04b,	// (0x000343e6) ai_gene_pane_2_t1

0x8e86,	// (0x0002f221) main_pane_empty_t1_ParamLimits

0x8e86,	// (0x0002f221) main_pane_empty_t1

0x8e9e,	// (0x0002f239) main_pane_empty_t2_ParamLimits

0x8e9e,	// (0x0002f239) main_pane_empty_t2

0x8eb3,	// (0x0002f24e) main_pane_empty_t3_ParamLimits

0x8eb3,	// (0x0002f24e) main_pane_empty_t3

0x8ec5,	// (0x0002f260) main_pane_empty_t4_ParamLimits

0x8ec5,	// (0x0002f260) main_pane_empty_t4

0x8ed7,	// (0x0002f272) main_pane_empty_t5_ParamLimits

0x8ed7,	// (0x0002f272) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003592b) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003592b) main_pane_empty_t

0xc2de,	// (0x00032679) bg_popup_window_pane_ParamLimits

0xc2de,	// (0x00032679) bg_popup_window_pane

0xde0b,	// (0x000341a6) find_popup_pane_cp2_ParamLimits

0xde0b,	// (0x000341a6) find_popup_pane_cp2

0xde17,	// (0x000341b2) heading_pane_ParamLimits

0xde17,	// (0x000341b2) heading_pane

0xba4c,	// (0x00031de7) bg_popup_sub_pane

0xa1ea,	// (0x00030585) bg_popup_window_pane_g1_ParamLimits

0xa1ea,	// (0x00030585) bg_popup_window_pane_g1

0xa1f9,	// (0x00030594) bg_popup_window_pane_g2_ParamLimits

0xa1f9,	// (0x00030594) bg_popup_window_pane_g2

0xa205,	// (0x000305a0) bg_popup_window_pane_g3_ParamLimits

0xa205,	// (0x000305a0) bg_popup_window_pane_g3

0xa211,	// (0x000305ac) bg_popup_window_pane_g4_ParamLimits

0xa211,	// (0x000305ac) bg_popup_window_pane_g4

0xa220,	// (0x000305bb) bg_popup_window_pane_g5_ParamLimits

0xa220,	// (0x000305bb) bg_popup_window_pane_g5

0xa230,	// (0x000305cb) bg_popup_window_pane_g6_ParamLimits

0xa230,	// (0x000305cb) bg_popup_window_pane_g6

0xa23c,	// (0x000305d7) bg_popup_window_pane_g7_ParamLimits

0xa23c,	// (0x000305d7) bg_popup_window_pane_g7

0xa24b,	// (0x000305e6) bg_popup_window_pane_g8_ParamLimits

0xa24b,	// (0x000305e6) bg_popup_window_pane_g8

0xa25a,	// (0x000305f5) bg_popup_window_pane_g9_ParamLimits

0xa25a,	// (0x000305f5) bg_popup_window_pane_g9

0xddf1,	// (0x0003418c) bg_popup_window_pane_g10_ParamLimits

0xddf1,	// (0x0003418c) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00035c5f) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00035c5f) bg_popup_window_pane_g

0xdda8,	// (0x00034143) bg_popup_heading_pane_ParamLimits

0xdda8,	// (0x00034143) bg_popup_heading_pane

0x2734,	// (0x00028acf) tabs_4_passive_pane_cp_srt_ParamLimits

0x2734,	// (0x00028acf) tabs_4_passive_pane_cp_srt

0x2746,	// (0x00028ae1) tabs_4_passive_pane_srt_ParamLimits

0xddbc,	// (0x00034157) heading_pane_g2

0x2746,	// (0x00028ae1) tabs_4_passive_pane_srt

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp3_srt

0xddc4,	// (0x0003415f) heading_pane_t1_ParamLimits

0xddc4,	// (0x0003415f) heading_pane_t1

0xdddb,	// (0x00034176) heading_pane_t2_ParamLimits

0xdddb,	// (0x00034176) heading_pane_t2

0x0001,

0x0058,	// (0x000263f3) heading_pane_t_ParamLimits

0x0058,	// (0x000263f3) heading_pane_t

0xd8ef,	// (0x00033c8a) bg_popup_heading_pane_g1

0xd992,	// (0x00033d2d) bg_popup_heading_pane_g2

0xd99c,	// (0x00033d37) bg_popup_heading_pane_g3

0xd9a6,	// (0x00033d41) bg_popup_heading_pane_g4

0xd9b0,	// (0x00033d4b) bg_popup_heading_pane_g5

0xd9ba,	// (0x00033d55) bg_popup_heading_pane_g6

0xd9c2,	// (0x00033d5d) bg_popup_heading_pane_g7

0xd9ca,	// (0x00033d65) bg_popup_heading_pane_g8

0xd9d4,	// (0x00033d6f) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x00035c20) bg_popup_heading_pane_g

0xd1b5,	// (0x00033550) bg_popup_sub_pane_g1

0xd1c5,	// (0x00033560) bg_popup_sub_pane_g2

0xd1bd,	// (0x00033558) bg_popup_sub_pane_g3

0xd1d5,	// (0x00033570) bg_popup_sub_pane_g4

0xd1cd,	// (0x00033568) bg_popup_sub_pane_g5

0xd1dd,	// (0x00033578) bg_popup_sub_pane_g6

0xd1e5,	// (0x00033580) bg_popup_sub_pane_g7

0xd1f5,	// (0x00033590) bg_popup_sub_pane_g8

0xd1ed,	// (0x00033588) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00035c0d) bg_popup_sub_pane_g

0xba9a,	// (0x00031e35) bg_popup_window_pane_cp5_ParamLimits

0xba9a,	// (0x00031e35) bg_popup_window_pane_cp5

0xbbe9,	// (0x00031f84) popup_note_window_g1_ParamLimits

0xbbe9,	// (0x00031f84) popup_note_window_g1

0xbbf5,	// (0x00031f90) popup_note_window_t1_ParamLimits

0xbbf5,	// (0x00031f90) popup_note_window_t1

0xbc07,	// (0x00031fa2) popup_note_window_t2_ParamLimits

0xbc07,	// (0x00031fa2) popup_note_window_t2

0xbd50,	// (0x000320eb) popup_note_window_t3_ParamLimits

0xbd50,	// (0x000320eb) popup_note_window_t3

0xbd62,	// (0x000320fd) popup_note_window_t4_ParamLimits

0xbd62,	// (0x000320fd) popup_note_window_t4

0xbd8a,	// (0x00032125) popup_note_window_t5_ParamLimits

0xbd8a,	// (0x00032125) popup_note_window_t5

0x0004,

0xf59b,	// (0x00035936) popup_note_window_t_ParamLimits

0xf59b,	// (0x00035936) popup_note_window_t

0xbdae,	// (0x00032149) bg_popup_window_pane_cp6_ParamLimits

0xbdae,	// (0x00032149) bg_popup_window_pane_cp6

0xd863,	// (0x00033bfe) popup_note_image_window_g1_ParamLimits

0xd863,	// (0x00033bfe) popup_note_image_window_g1

0xd86f,	// (0x00033c0a) popup_note_image_window_g2_ParamLimits

0xd86f,	// (0x00033c0a) popup_note_image_window_g2

0x0001,

0xf866,	// (0x00035c01) popup_note_image_window_g_ParamLimits

0xf866,	// (0x00035c01) popup_note_image_window_g

0xd888,	// (0x00033c23) popup_note_image_window_t1_ParamLimits

0xd888,	// (0x00033c23) popup_note_image_window_t1

0xd8a1,	// (0x00033c3c) popup_note_image_window_t2_ParamLimits

0xd8a1,	// (0x00033c3c) popup_note_image_window_t2

0xd8ba,	// (0x00033c55) popup_note_image_window_t3_ParamLimits

0xd8ba,	// (0x00033c55) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00035c06) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00035c06) popup_note_image_window_t

0xd740,	// (0x00033adb) bg_popup_window_pane_cp7_ParamLimits

0xd740,	// (0x00033adb) bg_popup_window_pane_cp7

0xd770,	// (0x00033b0b) popup_note_wait_window_g1_ParamLimits

0xd770,	// (0x00033b0b) popup_note_wait_window_g1

0xd77c,	// (0x00033b17) popup_note_wait_window_g2_ParamLimits

0xd77c,	// (0x00033b17) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x00035bef) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x00035bef) popup_note_wait_window_g

0xd794,	// (0x00033b2f) popup_note_wait_window_t1_ParamLimits

0xd794,	// (0x00033b2f) popup_note_wait_window_t1

0xd7bb,	// (0x00033b56) popup_note_wait_window_t2_ParamLimits

0xd7bb,	// (0x00033b56) popup_note_wait_window_t2

0xd7d8,	// (0x00033b73) popup_note_wait_window_t3_ParamLimits

0xd7d8,	// (0x00033b73) popup_note_wait_window_t3

0xd7eb,	// (0x00033b86) popup_note_wait_window_t4_ParamLimits

0xd7eb,	// (0x00033b86) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00035bf6) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00035bf6) popup_note_wait_window_t

0xd810,	// (0x00033bab) wait_bar_pane_ParamLimits

0xd810,	// (0x00033bab) wait_bar_pane

0xba4c,	// (0x00031de7) wait_anim_pane

0xba4c,	// (0x00031de7) wait_border_pane

0xba42,	// (0x00031ddd) wait_anim_pane_g1

0xba42,	// (0x00031ddd) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00035aba) wait_anim_pane_g

0xd6e4,	// (0x00033a7f) wait_border_pane_g1

0xd6ef,	// (0x00033a8a) wait_border_pane_g2

0xd6f8,	// (0x00033a93) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00035be8) wait_border_pane_g

0xd554,	// (0x000338ef) bg_popup_window_pane_cp16_ParamLimits

0xd554,	// (0x000338ef) bg_popup_window_pane_cp16

0xd654,	// (0x000339ef) indicator_popup_pane_cp4_ParamLimits

0xd654,	// (0x000339ef) indicator_popup_pane_cp4

0xd668,	// (0x00033a03) popup_query_data_window_t1_ParamLimits

0xd668,	// (0x00033a03) popup_query_data_window_t1

0xd67a,	// (0x00033a15) popup_query_data_window_t2_ParamLimits

0xd67a,	// (0x00033a15) popup_query_data_window_t2

0xd693,	// (0x00033a2e) popup_query_data_window_t3_ParamLimits

0xd693,	// (0x00033a2e) popup_query_data_window_t3

0x0002,

0xf846,	// (0x00035be1) popup_query_data_window_t_ParamLimits

0xf846,	// (0x00035be1) popup_query_data_window_t

0xd6ad,	// (0x00033a48) query_popup_data_pane_ParamLimits

0xd6ad,	// (0x00033a48) query_popup_data_pane

0xd6c1,	// (0x00033a5c) query_popup_data_pane_cp1_ParamLimits

0xd6c1,	// (0x00033a5c) query_popup_data_pane_cp1

0xd554,	// (0x000338ef) bg_popup_window_pane_cp10_ParamLimits

0xd554,	// (0x000338ef) bg_popup_window_pane_cp10

0xd586,	// (0x00033921) indicator_popup_pane_ParamLimits

0xd586,	// (0x00033921) indicator_popup_pane

0xd5a8,	// (0x00033943) popup_query_code_window_t1_ParamLimits

0xd5a8,	// (0x00033943) popup_query_code_window_t1

0xd5c2,	// (0x0003395d) popup_query_code_window_t2_ParamLimits

0xd5c2,	// (0x0003395d) popup_query_code_window_t2

0xd60b,	// (0x000339a6) popup_query_code_window_t3_ParamLimits

0xd60b,	// (0x000339a6) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x00035bda) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x00035bda) popup_query_code_window_t

0xd63a,	// (0x000339d5) query_popup_pane_ParamLimits

0xd63a,	// (0x000339d5) query_popup_pane

0xbdae,	// (0x00032149) bg_popup_window_pane_cp15_ParamLimits

0xbdae,	// (0x00032149) bg_popup_window_pane_cp15

0xbdcc,	// (0x00032167) indicator_popup_pane_cp1_ParamLimits

0xbdcc,	// (0x00032167) indicator_popup_pane_cp1

0xbddf,	// (0x0003217a) indicator_popup_pane_cp2_ParamLimits

0xbddf,	// (0x0003217a) indicator_popup_pane_cp2

0xbdf2,	// (0x0003218d) popup_query_data_code_window_g1_ParamLimits

0xbdf2,	// (0x0003218d) popup_query_data_code_window_g1

0xbe05,	// (0x000321a0) popup_query_data_code_window_t1_ParamLimits

0xbe05,	// (0x000321a0) popup_query_data_code_window_t1

0xbe17,	// (0x000321b2) popup_query_data_code_window_t2_ParamLimits

0xbe17,	// (0x000321b2) popup_query_data_code_window_t2

0xbe29,	// (0x000321c4) popup_query_data_code_window_t3_ParamLimits

0xbe29,	// (0x000321c4) popup_query_data_code_window_t3

0xbe3f,	// (0x000321da) popup_query_data_code_window_t4_ParamLimits

0xbe3f,	// (0x000321da) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00035941) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00035941) popup_query_data_code_window_t

0x1ecb,	// (0x00028266) list_single_midp_graphic_pane_g3

0xbe57,	// (0x000321f2) query_popup_data_pane_cp2_ParamLimits

0xbe6a,	// (0x00032205) query_popup_pane_cp2_ParamLimits

0xbe6a,	// (0x00032205) query_popup_pane_cp2

0xba4c,	// (0x00031de7) bg_popup_window_pane_cp11

0xd54c,	// (0x000338e7) heading_pane_cp5

0xbef8,	// (0x00032293) listscroll_popup_info_pane

0xba4c,	// (0x00031de7) input_focus_pane_cp3

0xbe7d,	// (0x00032218) query_popup_pane_t1

0xbe8b,	// (0x00032226) list_popup_info_pane_ParamLimits

0xbe8b,	// (0x00032226) list_popup_info_pane

0xbe9a,	// (0x00032235) listscroll_popup_info_pane_g1

0xbea2,	// (0x0003223d) scroll_pane_cp7

0xbeac,	// (0x00032247) popup_info_list_pane_t1_ParamLimits

0xbeac,	// (0x00032247) popup_info_list_pane_t1

0xbec6,	// (0x00032261) popup_info_list_pane_t2_ParamLimits

0xbec6,	// (0x00032261) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003594a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003594a) popup_info_list_pane_t

0xba4c,	// (0x00031de7) bg_popup_window_pane_cp12

0xe472,	// (0x0003480d) find_popup_pane

0xbaa8,	// (0x00031e43) bg_popup_window_pane_cp3

0xbee0,	// (0x0003227b) heading_pane_cp3

0xbeec,	// (0x00032287) listscroll_popup_graphic_pane

0xba4c,	// (0x00031de7) bg_popup_window_pane_cp4

0x8f39,	// (0x0002f2d4) heading_pane_cp4

0xbef8,	// (0x00032293) listscroll_popup_colour_pane

0xbf00,	// (0x0003229b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbf00,	// (0x0003229b) cell_large_graphic_colour_none_popup_pane

0x8f41,	// (0x0002f2dc) grid_large_graphic_colour_popup_pane_ParamLimits

0x8f41,	// (0x0002f2dc) grid_large_graphic_colour_popup_pane

0xbf14,	// (0x000322af) listscroll_popup_colour_pane_g1_ParamLimits

0xbf14,	// (0x000322af) listscroll_popup_colour_pane_g1

0xbf2b,	// (0x000322c6) listscroll_popup_colour_pane_g2_ParamLimits

0xbf2b,	// (0x000322c6) listscroll_popup_colour_pane_g2

0xbf42,	// (0x000322dd) listscroll_popup_colour_pane_g3_ParamLimits

0xbf42,	// (0x000322dd) listscroll_popup_colour_pane_g3

0x8f65,	// (0x0002f300) listscroll_popup_colour_pane_g4_ParamLimits

0x8f65,	// (0x0002f300) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003594f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003594f) listscroll_popup_colour_pane_g

0xbf52,	// (0x000322ed) scroll_pane_cp6_ParamLimits

0xbf52,	// (0x000322ed) scroll_pane_cp6

0x8f74,	// (0x0002f30f) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f74,	// (0x0002f30f) cell_large_graphic_colour_popup_pane

0xbf64,	// (0x000322ff) cell_large_graphic_colour_none_popup_pane_t1

0xba4c,	// (0x00031de7) grid_highlight_pane_cp5

0xbf73,	// (0x0003230e) cell_large_graphic_colour_popup_pane_g1

0xbf7b,	// (0x00032316) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00035958) cell_large_graphic_colour_popup_pane_g

0xbf83,	// (0x0003231e) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf8c,	// (0x00032327) grid_highlight_pane_cp4

0xbf94,	// (0x0003232f) bg_popup_window_pane_cp8_ParamLimits

0xbf94,	// (0x0003232f) bg_popup_window_pane_cp8

0xbfaf,	// (0x0003234a) popup_snote_single_text_window_g1_ParamLimits

0xbfaf,	// (0x0003234a) popup_snote_single_text_window_g1

0xbfc1,	// (0x0003235c) popup_snote_single_text_window_t1_ParamLimits

0xbfc1,	// (0x0003235c) popup_snote_single_text_window_t1

0xbfd4,	// (0x0003236f) popup_snote_single_text_window_t2_ParamLimits

0xbfd4,	// (0x0003236f) popup_snote_single_text_window_t2

0xbfe7,	// (0x00032382) popup_snote_single_text_window_t3_ParamLimits

0xbfe7,	// (0x00032382) popup_snote_single_text_window_t3

0xc020,	// (0x000323bb) popup_snote_single_text_window_t4_ParamLimits

0xc020,	// (0x000323bb) popup_snote_single_text_window_t4

0xc054,	// (0x000323ef) popup_snote_single_text_window_t5_ParamLimits

0xc054,	// (0x000323ef) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003595d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003595d) popup_snote_single_text_window_t

0xc083,	// (0x0003241e) bg_popup_window_pane_cp9_ParamLimits

0xc083,	// (0x0003241e) bg_popup_window_pane_cp9

0xbfaf,	// (0x0003234a) popup_snote_single_graphic_window_g1_ParamLimits

0xbfaf,	// (0x0003234a) popup_snote_single_graphic_window_g1

0xc091,	// (0x0003242c) popup_snote_single_graphic_window_g2_ParamLimits

0xc091,	// (0x0003242c) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00035968) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00035968) popup_snote_single_graphic_window_g

0xc09d,	// (0x00032438) popup_snote_single_graphic_window_t1_ParamLimits

0xc09d,	// (0x00032438) popup_snote_single_graphic_window_t1

0xc0b0,	// (0x0003244b) popup_snote_single_graphic_window_t2_ParamLimits

0xc0b0,	// (0x0003244b) popup_snote_single_graphic_window_t2

0xc0c3,	// (0x0003245e) popup_snote_single_graphic_window_t3_ParamLimits

0xc0c3,	// (0x0003245e) popup_snote_single_graphic_window_t3

0xc0fc,	// (0x00032497) popup_snote_single_graphic_window_t4_ParamLimits

0xc0fc,	// (0x00032497) popup_snote_single_graphic_window_t4

0xc130,	// (0x000324cb) popup_snote_single_graphic_window_t5_ParamLimits

0xc130,	// (0x000324cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003596d) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003596d) popup_snote_single_graphic_window_t

0xe3f6,	// (0x00034791) grid_graphic_popup_pane_ParamLimits

0xe3f6,	// (0x00034791) grid_graphic_popup_pane

0xe422,	// (0x000347bd) listscroll_popup_graphic_pane_g1_ParamLimits

0xe422,	// (0x000347bd) listscroll_popup_graphic_pane_g1

0xa5aa,	// (0x00030945) listscroll_popup_graphic_pane_g2_ParamLimits

0xa5aa,	// (0x00030945) listscroll_popup_graphic_pane_g2

0x0001,

0xf956,	// (0x00035cf1) listscroll_popup_graphic_pane_g_ParamLimits

0xf956,	// (0x00035cf1) listscroll_popup_graphic_pane_g

0xe2d8,	// (0x00034673) scroll_pane_cp5

0xa56d,	// (0x00030908) cell_graphic_popup_pane_ParamLimits

0xa56d,	// (0x00030908) cell_graphic_popup_pane

0xe3c1,	// (0x0003475c) cell_graphic_popup_pane_g1

0xe3c9,	// (0x00034764) cell_graphic_popup_pane_g2

0xbf83,	// (0x0003231e) cell_graphic_popup_pane_g3

0x0002,

0xf94f,	// (0x00035cea) cell_graphic_popup_pane_g

0xe3d2,	// (0x0003476d) cell_graphic_popup_pane_t2

0xbf8c,	// (0x00032327) grid_highlight_pane_cp3

0xc171,	// (0x0003250c) list_gen_pane_ParamLimits

0xc171,	// (0x0003250c) list_gen_pane

0xc199,	// (0x00032534) scroll_pane

0xa528,	// (0x000308c3) bg_list_pane_g1_ParamLimits

0xa528,	// (0x000308c3) bg_list_pane_g1

0xe370,	// (0x0003470b) bg_list_pane_g2_ParamLimits

0xe370,	// (0x0003470b) bg_list_pane_g2

0xe383,	// (0x0003471e) bg_list_pane_g3_ParamLimits

0xe383,	// (0x0003471e) bg_list_pane_g3

0xe395,	// (0x00034730) bg_list_pane_g4_ParamLimits

0xe395,	// (0x00034730) bg_list_pane_g4

0xa543,	// (0x000308de) bg_list_pane_g5_ParamLimits

0xa543,	// (0x000308de) bg_list_pane_g5

0x0004,

0xf944,	// (0x00035cdf) bg_list_pane_g_ParamLimits

0xf944,	// (0x00035cdf) bg_list_pane_g

0xa4db,	// (0x00030876) list_double2_graphic_large_graphic_pane_ParamLimits

0xa4db,	// (0x00030876) list_double2_graphic_large_graphic_pane

0xa4db,	// (0x00030876) list_double2_graphic_pane_ParamLimits

0xa4db,	// (0x00030876) list_double2_graphic_pane

0xa4db,	// (0x00030876) list_double2_large_graphic_pane_ParamLimits

0xa4db,	// (0x00030876) list_double2_large_graphic_pane

0xa4ee,	// (0x00030889) list_double2_pane_ParamLimits

0xa4ee,	// (0x00030889) list_double2_pane

0xa4db,	// (0x00030876) list_double_graphic_heading_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_graphic_heading_pane

0xa4db,	// (0x00030876) list_double_graphic_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_graphic_pane

0xa4db,	// (0x00030876) list_double_heading_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_heading_pane

0xa4db,	// (0x00030876) list_double_large_graphic_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_large_graphic_pane

0xa4db,	// (0x00030876) list_double_number_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_number_pane

0xa4db,	// (0x00030876) list_double_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_pane

0xa4db,	// (0x00030876) list_double_time_pane_ParamLimits

0xa4db,	// (0x00030876) list_double_time_pane

0xa4db,	// (0x00030876) list_setting_number_pane_ParamLimits

0xa4db,	// (0x00030876) list_setting_number_pane

0xa4db,	// (0x00030876) list_setting_pane_ParamLimits

0xa4db,	// (0x00030876) list_setting_pane

0x94f7,	// (0x0002f892) list_single_2graphic_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_2graphic_pane

0x94f7,	// (0x0002f892) list_single_graphic_heading_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_graphic_heading_pane

0x94f7,	// (0x0002f892) list_single_graphic_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_graphic_pane

0x94f7,	// (0x0002f892) list_single_heading_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_heading_pane

0xa4ee,	// (0x00030889) list_single_large_graphic_pane_ParamLimits

0xa4ee,	// (0x00030889) list_single_large_graphic_pane

0x94f7,	// (0x0002f892) list_single_number_heading_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_number_heading_pane

0x94f7,	// (0x0002f892) list_single_number_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_number_pane

0x94f7,	// (0x0002f892) list_single_pane_ParamLimits

0x94f7,	// (0x0002f892) list_single_pane

0xba4c,	// (0x00031de7) list_highlight_pane_cp1

0x42fc,	// (0x0002a697) list_single_pane_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_pane_g1

0x4308,	// (0x0002a6a3) list_single_pane_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_pane_g

0x67e0,	// (0x0002cb7b) list_single_pane_t1_ParamLimits

0x67e0,	// (0x0002cb7b) list_single_pane_t1

0x42fc,	// (0x0002a697) list_single_number_pane_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_number_pane_g1

0x4308,	// (0x0002a6a3) list_single_number_pane_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_number_pane_g

0x6714,	// (0x0002caaf) list_single_number_pane_t1_ParamLimits

0x6714,	// (0x0002caaf) list_single_number_pane_t1

0x67a0,	// (0x0002cb3b) list_single_number_pane_t2_ParamLimits

0x67a0,	// (0x0002cb3b) list_single_number_pane_t2

0x0001,

0xf905,	// (0x00035ca0) list_single_number_pane_t_ParamLimits

0xf905,	// (0x00035ca0) list_single_number_pane_t

0x42f0,	// (0x0002a68b) list_single_graphic_pane_g1_ParamLimits

0x42f0,	// (0x0002a68b) list_single_graphic_pane_g1

0x42fc,	// (0x0002a697) list_single_graphic_pane_g2_ParamLimits

0x42fc,	// (0x0002a697) list_single_graphic_pane_g2

0x4308,	// (0x0002a6a3) list_single_graphic_pane_g3_ParamLimits

0x4308,	// (0x0002a6a3) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00035978) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00035978) list_single_graphic_pane_g

0x4314,	// (0x0002a6af) list_single_graphic_pane_t1_ParamLimits

0x4314,	// (0x0002a6af) list_single_graphic_pane_t1

0x42fc,	// (0x0002a697) list_single_heading_pane_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_heading_pane_g1

0x4308,	// (0x0002a6a3) list_single_heading_pane_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_heading_pane_g

0x432a,	// (0x0002a6c5) list_single_heading_pane_t1_ParamLimits

0x432a,	// (0x0002a6c5) list_single_heading_pane_t1

0x4340,	// (0x0002a6db) list_single_heading_pane_t2_ParamLimits

0x4340,	// (0x0002a6db) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00035984) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00035984) list_single_heading_pane_t

0x42fc,	// (0x0002a697) list_single_number_heading_pane_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_number_heading_pane_g1

0x4308,	// (0x0002a6a3) list_single_number_heading_pane_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_number_heading_pane_g

0x432a,	// (0x0002a6c5) list_single_number_heading_pane_t1_ParamLimits

0x432a,	// (0x0002a6c5) list_single_number_heading_pane_t1

0x4352,	// (0x0002a6ed) list_single_number_heading_pane_t2_ParamLimits

0x4352,	// (0x0002a6ed) list_single_number_heading_pane_t2

0x4364,	// (0x0002a6ff) list_single_number_heading_pane_t3_ParamLimits

0x4364,	// (0x0002a6ff) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00035989) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00035989) list_single_number_heading_pane_t

0x4376,	// (0x0002a711) list_single_graphic_heading_pane_g1_ParamLimits

0x4376,	// (0x0002a711) list_single_graphic_heading_pane_g1

0x819a,	// (0x0002e535) list_single_graphic_heading_pane_g4_ParamLimits

0x819a,	// (0x0002e535) list_single_graphic_heading_pane_g4

0x4308,	// (0x0002a6a3) list_single_graphic_heading_pane_g5_ParamLimits

0x4308,	// (0x0002a6a3) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00035990) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00035990) list_single_graphic_heading_pane_g

0x432a,	// (0x0002a6c5) list_single_graphic_heading_pane_t1_ParamLimits

0x432a,	// (0x0002a6c5) list_single_graphic_heading_pane_t1

0x4393,	// (0x0002a72e) list_single_graphic_heading_pane_t2_ParamLimits

0x4393,	// (0x0002a72e) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00035997) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00035997) list_single_graphic_heading_pane_t

0x6925,	// (0x0002ccc0) list_single_large_graphic_pane_g1_ParamLimits

0x6925,	// (0x0002ccc0) list_single_large_graphic_pane_g1

0x6931,	// (0x0002cccc) list_single_large_graphic_pane_g2_ParamLimits

0x6931,	// (0x0002cccc) list_single_large_graphic_pane_g2

0x693d,	// (0x0002ccd8) list_single_large_graphic_pane_g3_ParamLimits

0x693d,	// (0x0002ccd8) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003599c) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003599c) list_single_large_graphic_pane_g

0xd6ef,	// (0x00033a8a) wait_border_pane_g2_copy1

0x81ab,	// (0x0002e546) list_single_large_graphic_pane_g4_cp2

0x6949,	// (0x0002cce4) list_single_large_graphic_pane_t1_ParamLimits

0x6949,	// (0x0002cce4) list_single_large_graphic_pane_t1

0x81b3,	// (0x0002e54e) list_double_pane_g1_ParamLimits

0x81b3,	// (0x0002e54e) list_double_pane_g1

0x81bf,	// (0x0002e55a) list_double_pane_g2_ParamLimits

0x81bf,	// (0x0002e55a) list_double_pane_g2

0x0001,

0xf608,	// (0x000359a3) list_double_pane_g_ParamLimits

0xf608,	// (0x000359a3) list_double_pane_g

0x81cb,	// (0x0002e566) list_double_pane_t1_ParamLimits

0x81cb,	// (0x0002e566) list_double_pane_t1

0x81e1,	// (0x0002e57c) list_double_pane_t2_ParamLimits

0x81e1,	// (0x0002e57c) list_double_pane_t2

0x0001,

0xf60d,	// (0x000359a8) list_double_pane_t_ParamLimits

0xf60d,	// (0x000359a8) list_double_pane_t

0x81f3,	// (0x0002e58e) list_double2_pane_g1_ParamLimits

0x81f3,	// (0x0002e58e) list_double2_pane_g1

0x6299,	// (0x0002c634) list_double2_pane_g2_ParamLimits

0x6299,	// (0x0002c634) list_double2_pane_g2

0x0001,

0xf612,	// (0x000359ad) list_double2_pane_g_ParamLimits

0xf612,	// (0x000359ad) list_double2_pane_g

0x8204,	// (0x0002e59f) list_double2_pane_t1_ParamLimits

0x8204,	// (0x0002e59f) list_double2_pane_t1

0x821a,	// (0x0002e5b5) list_double2_pane_t2_ParamLimits

0x821a,	// (0x0002e5b5) list_double2_pane_t2

0x0001,

0xf617,	// (0x000359b2) list_double2_pane_t_ParamLimits

0xf617,	// (0x000359b2) list_double2_pane_t

0x81b3,	// (0x0002e54e) list_double_number_pane_g1_ParamLimits

0x81b3,	// (0x0002e54e) list_double_number_pane_g1

0x81bf,	// (0x0002e55a) list_double_number_pane_g2_ParamLimits

0x81bf,	// (0x0002e55a) list_double_number_pane_g2

0x0001,

0xf608,	// (0x000359a3) list_double_number_pane_g_ParamLimits

0xf608,	// (0x000359a3) list_double_number_pane_g

0x822c,	// (0x0002e5c7) list_double_number_pane_t1_ParamLimits

0x822c,	// (0x0002e5c7) list_double_number_pane_t1

0x823e,	// (0x0002e5d9) list_double_number_pane_t2_ParamLimits

0x823e,	// (0x0002e5d9) list_double_number_pane_t2

0x8254,	// (0x0002e5ef) list_double_number_pane_t3_ParamLimits

0x8254,	// (0x0002e5ef) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x000359b7) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x000359b7) list_double_number_pane_t

0x8266,	// (0x0002e601) list_double_graphic_pane_g1_ParamLimits

0x8266,	// (0x0002e601) list_double_graphic_pane_g1

0x8272,	// (0x0002e60d) list_double_graphic_pane_g2_ParamLimits

0x8272,	// (0x0002e60d) list_double_graphic_pane_g2

0x8281,	// (0x0002e61c) list_double_graphic_pane_g3_ParamLimits

0x8281,	// (0x0002e61c) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x000359be) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x000359be) list_double_graphic_pane_g

0x8299,	// (0x0002e634) list_double_graphic_pane_t1_ParamLimits

0x8299,	// (0x0002e634) list_double_graphic_pane_t1

0x82af,	// (0x0002e64a) list_double_graphic_pane_t2_ParamLimits

0x82af,	// (0x0002e64a) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x000359c7) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x000359c7) list_double_graphic_pane_t

0x8266,	// (0x0002e601) list_double2_graphic_pane_g1_ParamLimits

0x8266,	// (0x0002e601) list_double2_graphic_pane_g1

0x82c1,	// (0x0002e65c) list_double2_graphic_pane_g2_ParamLimits

0x82c1,	// (0x0002e65c) list_double2_graphic_pane_g2

0x82cd,	// (0x0002e668) list_double2_graphic_pane_g3_ParamLimits

0x82cd,	// (0x0002e668) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x000359cc) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x000359cc) list_double2_graphic_pane_g

0x823e,	// (0x0002e5d9) list_double2_graphic_pane_t1_ParamLimits

0x823e,	// (0x0002e5d9) list_double2_graphic_pane_t1

0x82d9,	// (0x0002e674) list_double2_graphic_pane_t2_ParamLimits

0x82d9,	// (0x0002e674) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x000359d3) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x000359d3) list_double2_graphic_pane_t

0x82eb,	// (0x0002e686) list_double_large_graphic_pane_g1_ParamLimits

0x82eb,	// (0x0002e686) list_double_large_graphic_pane_g1

0x8316,	// (0x0002e6b1) list_double_large_graphic_pane_g2_ParamLimits

0x8316,	// (0x0002e6b1) list_double_large_graphic_pane_g2

0x81bf,	// (0x0002e55a) list_double_large_graphic_pane_g3_ParamLimits

0x81bf,	// (0x0002e55a) list_double_large_graphic_pane_g3

0x8327,	// (0x0002e6c2) list_double_large_graphic_pane_g4_ParamLimits

0x8327,	// (0x0002e6c2) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x000359d8) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x000359d8) list_double_large_graphic_pane_g

0x8339,	// (0x0002e6d4) list_double_large_graphic_pane_t1_ParamLimits

0x8339,	// (0x0002e6d4) list_double_large_graphic_pane_t1

0x8352,	// (0x0002e6ed) list_double_large_graphic_pane_t2_ParamLimits

0x8352,	// (0x0002e6ed) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x000359e3) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x000359e3) list_double_large_graphic_pane_t

0x8364,	// (0x0002e6ff) list_double2_large_graphic_pane_g1_ParamLimits

0x8364,	// (0x0002e6ff) list_double2_large_graphic_pane_g1

0x8316,	// (0x0002e6b1) list_double2_large_graphic_pane_g2_ParamLimits

0x8316,	// (0x0002e6b1) list_double2_large_graphic_pane_g2

0x81bf,	// (0x0002e55a) list_double2_large_graphic_pane_g3_ParamLimits

0x81bf,	// (0x0002e55a) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x000359e8) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x000359e8) list_double2_large_graphic_pane_g

0x8370,	// (0x0002e70b) list_double2_large_graphic_pane_t1_ParamLimits

0x8370,	// (0x0002e70b) list_double2_large_graphic_pane_t1

0x8386,	// (0x0002e721) list_double2_large_graphic_pane_t2_ParamLimits

0x8386,	// (0x0002e721) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x000359ef) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x000359ef) list_double2_large_graphic_pane_t

0x8398,	// (0x0002e733) list_double_heading_pane_g1_ParamLimits

0x8398,	// (0x0002e733) list_double_heading_pane_g1

0x60c0,	// (0x0002c45b) list_double_heading_pane_g2_ParamLimits

0x60c0,	// (0x0002c45b) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x000359f4) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x000359f4) list_double_heading_pane_g

0x83a9,	// (0x0002e744) list_double_heading_pane_t1_ParamLimits

0x83a9,	// (0x0002e744) list_double_heading_pane_t1

0x83bf,	// (0x0002e75a) list_double_heading_pane_t2_ParamLimits

0x83bf,	// (0x0002e75a) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x000359f9) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x000359f9) list_double_heading_pane_t

0x6151,	// (0x0002c4ec) list_double_graphic_heading_pane_g1_ParamLimits

0x6151,	// (0x0002c4ec) list_double_graphic_heading_pane_g1

0x8398,	// (0x0002e733) list_double_graphic_heading_pane_g2_ParamLimits

0x8398,	// (0x0002e733) list_double_graphic_heading_pane_g2

0x60c0,	// (0x0002c45b) list_double_graphic_heading_pane_g3_ParamLimits

0x60c0,	// (0x0002c45b) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x000359fe) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x000359fe) list_double_graphic_heading_pane_g

0x83d1,	// (0x0002e76c) list_double_graphic_heading_pane_t1_ParamLimits

0x83d1,	// (0x0002e76c) list_double_graphic_heading_pane_t1

0x82d9,	// (0x0002e674) list_double_graphic_heading_pane_t2_ParamLimits

0x82d9,	// (0x0002e674) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00035a05) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00035a05) list_double_graphic_heading_pane_t

0x8316,	// (0x0002e6b1) list_double_time_pane_g1_ParamLimits

0x8316,	// (0x0002e6b1) list_double_time_pane_g1

0x81bf,	// (0x0002e55a) list_double_time_pane_g2_ParamLimits

0x81bf,	// (0x0002e55a) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00035a0a) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00035a0a) list_double_time_pane_g

0x8370,	// (0x0002e70b) list_double_time_pane_t1_ParamLimits

0x8370,	// (0x0002e70b) list_double_time_pane_t1

0x83e7,	// (0x0002e782) list_double_time_pane_t2_ParamLimits

0x83e7,	// (0x0002e782) list_double_time_pane_t2

0x83f9,	// (0x0002e794) list_double_time_pane_t3_ParamLimits

0x83f9,	// (0x0002e794) list_double_time_pane_t3

0x840b,	// (0x0002e7a6) list_double_time_pane_t4_ParamLimits

0x840b,	// (0x0002e7a6) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00035a0f) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00035a0f) list_double_time_pane_t

0x61ac,	// (0x0002c547) list_setting_pane_g1_ParamLimits

0x61ac,	// (0x0002c547) list_setting_pane_g1

0x61b8,	// (0x0002c553) list_setting_pane_g2_ParamLimits

0x61b8,	// (0x0002c553) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00035a18) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00035a18) list_setting_pane_g

0x841d,	// (0x0002e7b8) list_setting_pane_t1_ParamLimits

0x841d,	// (0x0002e7b8) list_setting_pane_t1

0x8437,	// (0x0002e7d2) list_setting_pane_t2_ParamLimits

0x8437,	// (0x0002e7d2) list_setting_pane_t2

0x0002,

0xf682,	// (0x00035a1d) list_setting_pane_t_ParamLimits

0xf682,	// (0x00035a1d) list_setting_pane_t

0x8474,	// (0x0002e80f) set_value_pane_cp_ParamLimits

0x8474,	// (0x0002e80f) set_value_pane_cp

0x8480,	// (0x0002e81b) list_setting_number_pane_g1_ParamLimits

0x8480,	// (0x0002e81b) list_setting_number_pane_g1

0x8f9d,	// (0x0002f338) list_setting_number_pane_g2_ParamLimits

0x8f9d,	// (0x0002f338) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00035a24) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00035a24) list_setting_number_pane_g

0x8fa9,	// (0x0002f344) list_setting_number_pane_t1_ParamLimits

0x8fa9,	// (0x0002f344) list_setting_number_pane_t1

0x8fc2,	// (0x0002f35d) list_setting_number_pane_t2_ParamLimits

0x8fc2,	// (0x0002f35d) list_setting_number_pane_t2

0x8fdc,	// (0x0002f377) list_setting_number_pane_t3_ParamLimits

0x8fdc,	// (0x0002f377) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00035a29) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00035a29) list_setting_number_pane_t

0x8474,	// (0x0002e80f) set_value_pane_ParamLimits

0x8474,	// (0x0002e80f) set_value_pane

0xc1cd,	// (0x00032568) bg_set_opt_pane_ParamLimits

0xc1cd,	// (0x00032568) bg_set_opt_pane

0x6405,	// (0x0002c7a0) set_value_pane_t1

0xc1ee,	// (0x00032589) slider_set_pane_cp3

0xc1f7,	// (0x00032592) volume_small_pane_cp

0xc200,	// (0x0003259b) list_form_gen_pane

0xc209,	// (0x000325a4) scroll_pane_cp8

0x901f,	// (0x0002f3ba) form_field_data_pane_ParamLimits

0x901f,	// (0x0002f3ba) form_field_data_pane

0x9036,	// (0x0002f3d1) form_field_data_wide_pane_ParamLimits

0x9036,	// (0x0002f3d1) form_field_data_wide_pane

0x9056,	// (0x0002f3f1) form_field_popup_pane_ParamLimits

0x9056,	// (0x0002f3f1) form_field_popup_pane

0x9074,	// (0x0002f40f) form_field_popup_wide_pane_ParamLimits

0x9074,	// (0x0002f40f) form_field_popup_wide_pane

0x6495,	// (0x0002c830) form_field_slider_pane_ParamLimits

0x6495,	// (0x0002c830) form_field_slider_pane

0x64a8,	// (0x0002c843) form_field_slider_wide_pane_ParamLimits

0x64a8,	// (0x0002c843) form_field_slider_wide_pane

0xc21a,	// (0x000325b5) data_form_pane

0x9095,	// (0x0002f430) form_field_data_pane_t1

0xc226,	// (0x000325c1) input_focus_pane

0xc234,	// (0x000325cf) data_form_wide_pane

0x64eb,	// (0x0002c886) form_field_data_wide_pane_t1

0xbfa1,	// (0x0003233c) input_focus_pane_cp6

0x90af,	// (0x0002f44a) form_field_popup_pane_t1

0xc226,	// (0x000325c1) input_focus_pane_cp7

0xc260,	// (0x000325fb) list_form_pane

0x652f,	// (0x0002c8ca) form_field_popup_wide_pane_t1

0xc226,	// (0x000325c1) input_focus_pane_cp8

0xc26c,	// (0x00032607) list_form_wide_pane

0x90d1,	// (0x0002f46c) form_field_slider_pane_t1_ParamLimits

0x90d1,	// (0x0002f46c) form_field_slider_pane_t1

0x90e9,	// (0x0002f484) form_field_slider_pane_t2_ParamLimits

0x90e9,	// (0x0002f484) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00035a39) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00035a39) form_field_slider_pane_t

0xba9a,	// (0x00031e35) input_focus_pane_cp9_ParamLimits

0xba9a,	// (0x00031e35) input_focus_pane_cp9

0x90fe,	// (0x0002f499) slider_cont_pane_ParamLimits

0x90fe,	// (0x0002f499) slider_cont_pane

0xc27b,	// (0x00032616) form_field_slider_wide_pane_t1_ParamLimits

0xc27b,	// (0x00032616) form_field_slider_wide_pane_t1

0x6586,	// (0x0002c921) form_field_slider_wide_pane_t2_ParamLimits

0x6586,	// (0x0002c921) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00035a3e) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00035a3e) form_field_slider_wide_pane_t

0xba9a,	// (0x00031e35) input_focus_pane_cp10_ParamLimits

0xba9a,	// (0x00031e35) input_focus_pane_cp10

0x9112,	// (0x0002f4ad) slider_cont_pane_cp1_ParamLimits

0x9112,	// (0x0002f4ad) slider_cont_pane_cp1

0x9126,	// (0x0002f4c1) slider_form_pane_cp

0xc28d,	// (0x00032628) input_focus_pane_g1

0xc295,	// (0x00032630) input_focus_pane_g2

0xc29d,	// (0x00032638) input_focus_pane_g3

0xc2a5,	// (0x00032640) input_focus_pane_g4

0xc2ad,	// (0x00032648) input_focus_pane_g5

0xc2b5,	// (0x00032650) input_focus_pane_g6

0xc2bd,	// (0x00032658) input_focus_pane_g7

0xc2c5,	// (0x00032660) input_focus_pane_g8

0xc2cd,	// (0x00032668) input_focus_pane_g9

0xba42,	// (0x00031ddd) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00035a43) input_focus_pane_g

0xd6f8,	// (0x00033a93) wait_border_pane_g3_copy1

0x912e,	// (0x0002f4c9) data_form_pane_t1

0xba42,	// (0x00031ddd) wait_anim_pane_g1_copy1

0x94cb,	// (0x0002f866) data_form_wide_pane_t1

0x9148,	// (0x0002f4e3) list_form_graphic_pane_cp_ParamLimits

0x9148,	// (0x0002f4e3) list_form_graphic_pane_cp

0xe319,	// (0x000346b4) slider_form_pane_g1

0xe322,	// (0x000346bd) slider_form_pane_g2

0x0006,

0xf935,	// (0x00035cd0) slider_form_pane_g

0x915b,	// (0x0002f4f6) list_form_graphic_pane_ParamLimits

0x915b,	// (0x0002f4f6) list_form_graphic_pane

0x6600,	// (0x0002c99b) list_form_graphic_pane_g1

0x6608,	// (0x0002c9a3) list_form_graphic_pane_t1_ParamLimits

0x6608,	// (0x0002c9a3) list_form_graphic_pane_t1

0xbaa8,	// (0x00031e43) list_highlight_pane_cp5_ParamLimits

0xbaa8,	// (0x00031e43) list_highlight_pane_cp5

0x661d,	// (0x0002c9b8) find_pane_g1

0xc2d5,	// (0x00032670) input_find_pane

0x6626,	// (0x0002c9c1) input_find_pane_g1_ParamLimits

0x6626,	// (0x0002c9c1) input_find_pane_g1

0x6632,	// (0x0002c9cd) input_find_pane_t1_ParamLimits

0x6632,	// (0x0002c9cd) input_find_pane_t1

0x6647,	// (0x0002c9e2) input_find_pane_t2_ParamLimits

0x6647,	// (0x0002c9e2) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00035a58) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00035a58) input_find_pane_t

0xc2de,	// (0x00032679) input_focus_pane_cp5_ParamLimits

0xc2de,	// (0x00032679) input_focus_pane_cp5

0x917b,	// (0x0002f516) bg_popup_window_pane_cp2_ParamLimits

0x917b,	// (0x0002f516) bg_popup_window_pane_cp2

0x9188,	// (0x0002f523) listscroll_menu_pane_ParamLimits

0x9188,	// (0x0002f523) listscroll_menu_pane

0x9194,	// (0x0002f52f) popup_submenu_window_ParamLimits

0x9194,	// (0x0002f52f) popup_submenu_window

0xc2ec,	// (0x00032687) find_popup_pane_g1

0xc2f4,	// (0x0003268f) input_popup_find_pane_cp

0xc2de,	// (0x00032679) input_focus_pane_cp4_ParamLimits

0xc2de,	// (0x00032679) input_focus_pane_cp4

0xc2fe,	// (0x00032699) input_popup_find_pane_t1_ParamLimits

0xc2fe,	// (0x00032699) input_popup_find_pane_t1

0xba4c,	// (0x00031de7) bg_popup_sub_pane_cp

0xc32c,	// (0x000326c7) listscroll_popup_sub_pane

0xc334,	// (0x000326cf) list_submenu_pane_ParamLimits

0xc334,	// (0x000326cf) list_submenu_pane

0xc345,	// (0x000326e0) scroll_pane_cp4

0xc34d,	// (0x000326e8) list_single_popup_submenu_pane_ParamLimits

0xc34d,	// (0x000326e8) list_single_popup_submenu_pane

0xc360,	// (0x000326fb) list_single_popup_submenu_pane_g1

0xc368,	// (0x00032703) list_single_popup_submenu_pane_t1_ParamLimits

0xc368,	// (0x00032703) list_single_popup_submenu_pane_t1

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp1_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp1

0x91c6,	// (0x0002f561) tabs_2_active_pane_g1

0x91ce,	// (0x0002f569) tabs_2_active_pane_t1

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp1_ParamLimits

0xba9a,	// (0x00031e35) bg_passive_tab_pane_cp1

0x91c6,	// (0x0002f561) tabs_2_passive_pane_g1

0x91ce,	// (0x0002f569) tabs_2_passive_pane_t1

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp4

0x91e0,	// (0x0002f57b) tabs_2_long_active_pane_t1

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp4

0x1ed3,	// (0x0002826e) list_single_midp_graphic_pane_g4_ParamLimits

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp5

0x91f3,	// (0x0002f58e) tabs_3_long_active_pane_t1

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp5

0x1ed3,	// (0x0002826e) list_single_midp_graphic_pane_g4

0xbaa8,	// (0x00031e43) bg_popup_window_pane_cp13_ParamLimits

0xbaa8,	// (0x00031e43) bg_popup_window_pane_cp13

0xc392,	// (0x0003272d) listscroll_popup_fast_pane_ParamLimits

0xc392,	// (0x0003272d) listscroll_popup_fast_pane

0xc3a1,	// (0x0003273c) grid_popup_fast_pane_ParamLimits

0xc3a1,	// (0x0003273c) grid_popup_fast_pane

0xc3b3,	// (0x0003274e) scroll_pane_cp9_ParamLimits

0xc3b3,	// (0x0003274e) scroll_pane_cp9

0x31d7,	// (0x00029572) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x31d7,	// (0x00029572) list_single_graphic_hl_pane_t1_cp2

0xc3d7,	// (0x00032772) input_focus_pane_cp20_ParamLimits

0xc3d7,	// (0x00032772) input_focus_pane_cp20

0xc3e5,	// (0x00032780) query_popup_data_pane_t1_ParamLimits

0xc3e5,	// (0x00032780) query_popup_data_pane_t1

0xc3f8,	// (0x00032793) query_popup_data_pane_t2_ParamLimits

0xc3f8,	// (0x00032793) query_popup_data_pane_t2

0xc43e,	// (0x000327d9) query_popup_data_pane_t3_ParamLimits

0xc43e,	// (0x000327d9) query_popup_data_pane_t3

0xc47f,	// (0x0003281a) query_popup_data_pane_t4_ParamLimits

0xc47f,	// (0x0003281a) query_popup_data_pane_t4

0xc4bb,	// (0x00032856) query_popup_data_pane_t5_ParamLimits

0xc4bb,	// (0x00032856) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00035a5d) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00035a5d) query_popup_data_pane_t

0xc28d,	// (0x00032628) bg_set_opt_pane_g1

0xc295,	// (0x00032630) bg_set_opt_pane_g2

0xc29d,	// (0x00032638) bg_set_opt_pane_g3

0xc2a5,	// (0x00032640) bg_set_opt_pane_g4

0xc2ad,	// (0x00032648) bg_set_opt_pane_g5

0xc2b5,	// (0x00032650) bg_set_opt_pane_g6

0xc2bd,	// (0x00032658) bg_set_opt_pane_g7

0xc2c5,	// (0x00032660) bg_set_opt_pane_g8

0xc2cd,	// (0x00032668) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00035a68) bg_set_opt_pane_g

0x1277,	// (0x00027612) control_top_pane_stacon_ParamLimits

0x1277,	// (0x00027612) control_top_pane_stacon

0x12ca,	// (0x00027665) signal_pane_stacon_ParamLimits

0x12ca,	// (0x00027665) signal_pane_stacon

0xc91f,	// (0x00032cba) stacon_top_pane_g1_ParamLimits

0xc91f,	// (0x00032cba) stacon_top_pane_g1

0x12ef,	// (0x0002768a) title_pane_stacon_ParamLimits

0x12ef,	// (0x0002768a) title_pane_stacon

0x1319,	// (0x000276b4) uni_indicator_pane_stacon_ParamLimits

0x1319,	// (0x000276b4) uni_indicator_pane_stacon

0x132e,	// (0x000276c9) battery_pane_stacon_ParamLimits

0x132e,	// (0x000276c9) battery_pane_stacon

0x1372,	// (0x0002770d) control_bottom_pane_stacon_ParamLimits

0x1372,	// (0x0002770d) control_bottom_pane_stacon

0x1395,	// (0x00027730) navi_pane_stacon_ParamLimits

0x1395,	// (0x00027730) navi_pane_stacon

0xc941,	// (0x00032cdc) stacon_bottom_pane_g1_ParamLimits

0xc941,	// (0x00032cdc) stacon_bottom_pane_g1

0x0ea2,	// (0x0002723d) aid_levels_signal_lsc_ParamLimits

0x0ea2,	// (0x0002723d) aid_levels_signal_lsc

0x0eb9,	// (0x00027254) signal_pane_stacon_g1_ParamLimits

0x0eb9,	// (0x00027254) signal_pane_stacon_g1

0x0ecd,	// (0x00027268) signal_pane_stacon_g2_ParamLimits

0x0ecd,	// (0x00027268) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00035a7b) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00035a7b) signal_pane_stacon_g

0x0f02,	// (0x0002729d) title_pane_stacon_t1_ParamLimits

0x0f02,	// (0x0002729d) title_pane_stacon_t1

0xc4ff,	// (0x0003289a) uni_indicator_pane_stacon_g1

0xc509,	// (0x000328a4) uni_indicator_pane_stacon_g2

0xc513,	// (0x000328ae) uni_indicator_pane_stacon_g3

0xc51d,	// (0x000328b8) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00035a87) uni_indicator_pane_stacon_g

0x0f27,	// (0x000272c2) control_top_pane_stacon_g1

0x0f2f,	// (0x000272ca) control_top_pane_stacon_t1_ParamLimits

0x0f2f,	// (0x000272ca) control_top_pane_stacon_t1

0x0f66,	// (0x00027301) aid_levels_battery_lsc_ParamLimits

0x0f66,	// (0x00027301) aid_levels_battery_lsc

0x0f7e,	// (0x00027319) battery_pane_stacon_g1_ParamLimits

0x0f7e,	// (0x00027319) battery_pane_stacon_g1

0x0f91,	// (0x0002732c) battery_pane_stacon_g2_ParamLimits

0x0f91,	// (0x0002732c) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00035a90) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00035a90) battery_pane_stacon_g

0x0fcf,	// (0x0002736a) navi_icon_pane_stacon

0x0fe3,	// (0x0002737e) navi_navi_pane_stacon

0x0fcf,	// (0x0002736a) navi_text_pane_stacon

0x0f27,	// (0x000272c2) control_bottom_pane_stacon_g1

0x0ff7,	// (0x00027392) control_bottom_pane_stacon_t1_ParamLimits

0x0ff7,	// (0x00027392) control_bottom_pane_stacon_t1

0x9205,	// (0x0002f5a0) grid_app_pane_ParamLimits

0x9205,	// (0x0002f5a0) grid_app_pane

0x923b,	// (0x0002f5d6) scroll_pane_cp15_ParamLimits

0x923b,	// (0x0002f5d6) scroll_pane_cp15

0x9254,	// (0x0002f5ef) cell_app_pane_ParamLimits

0x9254,	// (0x0002f5ef) cell_app_pane

0x929b,	// (0x0002f636) cell_app_pane_g1_ParamLimits

0x929b,	// (0x0002f636) cell_app_pane_g1

0xc541,	// (0x000328dc) cell_app_pane_g2_ParamLimits

0xc541,	// (0x000328dc) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00035a95) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00035a95) cell_app_pane_g

0xc54d,	// (0x000328e8) cell_app_pane_t1_ParamLimits

0xc54d,	// (0x000328e8) cell_app_pane_t1

0xc564,	// (0x000328ff) grid_highlight_pane_ParamLimits

0xc564,	// (0x000328ff) grid_highlight_pane

0xc28d,	// (0x00032628) cell_highlight_pane_g1

0xc295,	// (0x00032630) cell_highlight_pane_g2

0xc29d,	// (0x00032638) cell_highlight_pane_g3

0xc2a5,	// (0x00032640) cell_highlight_pane_g4

0xc2ad,	// (0x00032648) cell_highlight_pane_g5

0xc2b5,	// (0x00032650) cell_highlight_pane_g6

0xc2bd,	// (0x00032658) cell_highlight_pane_g7

0xc2c5,	// (0x00032660) cell_highlight_pane_g8

0xc2cd,	// (0x00032668) cell_highlight_pane_g9

0xba42,	// (0x00031ddd) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00035a43) cell_highlight_pane_g

0xc575,	// (0x00032910) bg_scroll_pane

0x10c6,	// (0x00027461) scroll_handle_pane

0xc5bc,	// (0x00032957) scroll_bg_pane_g1

0xc5d1,	// (0x0003296c) scroll_bg_pane_g2

0xc5e9,	// (0x00032984) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00035a9a) scroll_bg_pane_g

0xc5fe,	// (0x00032999) scroll_handle_focus_pane_ParamLimits

0xc5fe,	// (0x00032999) scroll_handle_focus_pane

0xc5bc,	// (0x00032957) scroll_handle_pane_g1

0xc60b,	// (0x000329a6) scroll_handle_pane_g2

0xc5e9,	// (0x00032984) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00035aa1) scroll_handle_pane_g

0xc2de,	// (0x00032679) bg_popup_sub_pane_cp21_ParamLimits

0xc2de,	// (0x00032679) bg_popup_sub_pane_cp21

0xc61f,	// (0x000329ba) popup_fep_japan_predictive_window_t1_ParamLimits

0xc61f,	// (0x000329ba) popup_fep_japan_predictive_window_t1

0xc636,	// (0x000329d1) popup_fep_japan_predictive_window_t2_ParamLimits

0xc636,	// (0x000329d1) popup_fep_japan_predictive_window_t2

0xc669,	// (0x00032a04) popup_fep_japan_predictive_window_t3_ParamLimits

0xc669,	// (0x00032a04) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00035aa8) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00035aa8) popup_fep_japan_predictive_window_t

0xba4c,	// (0x00031de7) bg_popup_sub_pane_cp23

0xc6a0,	// (0x00032a3b) listscroll_japin_cand_pane

0xc6a8,	// (0x00032a43) popup_fep_japan_candidate_window_t1

0xc6b6,	// (0x00032a51) candidate_pane_ParamLimits

0xc6b6,	// (0x00032a51) candidate_pane

0xc6c8,	// (0x00032a63) scroll_pane_cp30

0xc6d0,	// (0x00032a6b) list_single_popup_jap_candidate_pane_ParamLimits

0xc6d0,	// (0x00032a6b) list_single_popup_jap_candidate_pane

0xba4c,	// (0x00031de7) list_highlight_pane_cp30

0xc6e4,	// (0x00032a7f) list_single_popup_jap_candidate_pane_t1

0xc6f3,	// (0x00032a8e) level_1_signal

0xc700,	// (0x00032a9b) level_2_signal

0xc70d,	// (0x00032aa8) level_3_signal

0xc71a,	// (0x00032ab5) level_4_signal

0xc727,	// (0x00032ac2) level_5_signal

0xc734,	// (0x00032acf) level_6_signal

0xc741,	// (0x00032adc) level_7_signal

0xc6f3,	// (0x00032a8e) level_1_battery

0xc700,	// (0x00032a9b) level_2_battery

0xc70d,	// (0x00032aa8) level_3_battery

0xc71a,	// (0x00032ab5) level_4_battery

0xc727,	// (0x00032ac2) level_5_battery

0xc734,	// (0x00032acf) level_6_battery

0xc741,	// (0x00032adc) level_7_battery

0xc766,	// (0x00032b01) list_menu_pane_ParamLimits

0xc766,	// (0x00032b01) list_menu_pane

0xc777,	// (0x00032b12) scroll_pane_cp25_ParamLimits

0xc777,	// (0x00032b12) scroll_pane_cp25

0xc790,	// (0x00032b2b) list_double2_graphic_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double2_graphic_pane_cp2

0xc790,	// (0x00032b2b) list_double2_large_graphic_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double2_large_graphic_pane_cp2

0xc790,	// (0x00032b2b) list_double2_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double2_pane_cp2

0xc790,	// (0x00032b2b) list_double_graphic_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double_graphic_pane_cp2

0xc790,	// (0x00032b2b) list_double_large_graphic_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double_large_graphic_pane_cp2

0xc790,	// (0x00032b2b) list_double_number_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double_number_pane_cp2

0xc790,	// (0x00032b2b) list_double_pane_cp2_ParamLimits

0xc790,	// (0x00032b2b) list_double_pane_cp2

0x92d0,	// (0x0002f66b) list_single_2graphic_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_2graphic_pane_cp2

0x92d0,	// (0x0002f66b) list_single_graphic_heading_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_graphic_heading_pane_cp2

0x92d0,	// (0x0002f66b) list_single_graphic_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_graphic_pane_cp2

0x92d0,	// (0x0002f66b) list_single_heading_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_heading_pane_cp2

0xc7a0,	// (0x00032b3b) list_single_large_graphic_pane_cp2_ParamLimits

0xc7a0,	// (0x00032b3b) list_single_large_graphic_pane_cp2

0x92d0,	// (0x0002f66b) list_single_number_heading_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_number_heading_pane_cp2

0x92d0,	// (0x0002f66b) list_single_number_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_number_pane_cp2

0x92d0,	// (0x0002f66b) list_single_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_pane_cp2

0xc7ba,	// (0x00032b55) bg_popup_sub_pane_cp22

0x11dd,	// (0x00027578) popup_side_volume_key_window_g1

0x1207,	// (0x000275a2) popup_side_volume_key_window_t1

0x1223,	// (0x000275be) volume_small_pane_cp1

0xba9a,	// (0x00031e35) bg_popup_sub_pane_cp24_ParamLimits

0xba9a,	// (0x00031e35) bg_popup_sub_pane_cp24

0xc7d0,	// (0x00032b6b) fep_china_uni_candidate_pane_ParamLimits

0xc7d0,	// (0x00032b6b) fep_china_uni_candidate_pane

0xc7e4,	// (0x00032b7f) fep_china_uni_entry_pane

0xc7f4,	// (0x00032b8f) popup_fep_china_uni_window_g1

0xc810,	// (0x00032bab) fep_china_uni_entry_pane_g1

0xc818,	// (0x00032bb3) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00035ad5) fep_china_uni_entry_pane_g

0xc820,	// (0x00032bbb) fep_entry_item_pane

0xc82a,	// (0x00032bc5) fep_candidate_item_pane

0xc832,	// (0x00032bcd) fep_china_uni_candidate_pane_g1

0xc83a,	// (0x00032bd5) fep_china_uni_candidate_pane_g2

0xc842,	// (0x00032bdd) fep_china_uni_candidate_pane_g3

0xc84a,	// (0x00032be5) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00035ada) fep_china_uni_candidate_pane_g

0xba42,	// (0x00031ddd) fep_entry_item_pane_g1

0xc852,	// (0x00032bed) fep_entry_item_pane_t1_ParamLimits

0xc852,	// (0x00032bed) fep_entry_item_pane_t1

0xc868,	// (0x00032c03) fep_candidate_item_pane_t1_ParamLimits

0xc868,	// (0x00032c03) fep_candidate_item_pane_t1

0xc87d,	// (0x00032c18) fep_candidate_item_pane_t2_ParamLimits

0xc87d,	// (0x00032c18) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00035ae3) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00035ae3) fep_candidate_item_pane_t

0xbaa8,	// (0x00031e43) list_highlight_pane_cp31_ParamLimits

0xbaa8,	// (0x00031e43) list_highlight_pane_cp31

0xc88f,	// (0x00032c2a) level_1_signal_lsc

0xc898,	// (0x00032c33) level_2_signal_lsc

0xc8a1,	// (0x00032c3c) level_3_signal_lsc

0xc8aa,	// (0x00032c45) level_4_signal_lsc

0xc8b3,	// (0x00032c4e) level_5_signal_lsc

0xc8bc,	// (0x00032c57) level_6_signal_lsc

0xc8c5,	// (0x00032c60) level_7_signal_lsc

0xc8c5,	// (0x00032c60) level_1_battery_lsc

0xc8ce,	// (0x00032c69) level_2_battery_lsc

0xc8d7,	// (0x00032c72) level_3_battery_lsc

0xc8e0,	// (0x00032c7b) level_4_battery_lsc

0xc8e9,	// (0x00032c84) level_5_battery_lsc

0xc8f2,	// (0x00032c8d) level_6_battery_lsc

0xc88f,	// (0x00032c2a) level_7_battery_lsc

0xc8fb,	// (0x00032c96) scroll_handle_focus_pane_g1

0xc904,	// (0x00032c9f) scroll_handle_focus_pane_g2

0xc90d,	// (0x00032ca8) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00035ae8) scroll_handle_focus_pane_g

0x665c,	// (0x0002c9f7) list_single_2graphic_pane_g1_ParamLimits

0x665c,	// (0x0002c9f7) list_single_2graphic_pane_g1

0x819a,	// (0x0002e535) list_single_2graphic_pane_g2_ParamLimits

0x819a,	// (0x0002e535) list_single_2graphic_pane_g2

0x4308,	// (0x0002a6a3) list_single_2graphic_pane_g3_ParamLimits

0x4308,	// (0x0002a6a3) list_single_2graphic_pane_g3

0x6668,	// (0x0002ca03) list_single_2graphic_pane_g4_ParamLimits

0x6668,	// (0x0002ca03) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00035aef) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00035aef) list_single_2graphic_pane_g

0x6674,	// (0x0002ca0f) list_single_2graphic_pane_t1_ParamLimits

0x6674,	// (0x0002ca0f) list_single_2graphic_pane_t1

0x9332,	// (0x0002f6cd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9332,	// (0x0002f6cd) list_double2_graphic_large_graphic_pane_g1

0x8316,	// (0x0002e6b1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8316,	// (0x0002e6b1) list_double2_graphic_large_graphic_pane_g2

0x81bf,	// (0x0002e55a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81bf,	// (0x0002e55a) list_double2_graphic_large_graphic_pane_g3

0x9344,	// (0x0002f6df) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9344,	// (0x0002f6df) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00035af8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00035af8) list_double2_graphic_large_graphic_pane_g

0x9350,	// (0x0002f6eb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9350,	// (0x0002f6eb) list_double2_graphic_large_graphic_pane_t1

0x9366,	// (0x0002f701) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9366,	// (0x0002f701) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00035b01) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00035b01) list_double2_graphic_large_graphic_pane_t

0xc9ee,	// (0x00032d89) popup_fast_swap_window_ParamLimits

0xc9ee,	// (0x00032d89) popup_fast_swap_window

0xca0a,	// (0x00032da5) popup_side_volume_key_window

0xca24,	// (0x00032dbf) stacon_top_pane

0xca2e,	// (0x00032dc9) status_pane_ParamLimits

0xca2e,	// (0x00032dc9) status_pane

0xca24,	// (0x00032dbf) status_small_pane

0xba4c,	// (0x00031de7) control_pane

0xba4c,	// (0x00031de7) stacon_bottom_pane

0xc209,	// (0x000325a4) scroll_pane_cp121

0xc200,	// (0x0003259b) set_content_pane

0x9378,	// (0x0002f713) bg_active_tab_pane_g1_cp1

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp1

0x9381,	// (0x0002f71c) bg_active_tab_pane_g3_cp1

0x9378,	// (0x0002f713) bg_passive_tab_pane_g1_cp1

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp1

0x9381,	// (0x0002f71c) bg_passive_tab_pane_g3_cp1

0x938a,	// (0x0002f725) bg_active_tab_pane_g1_cp2

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp2

0x9393,	// (0x0002f72e) bg_active_tab_pane_g3_cp2

0x938a,	// (0x0002f725) bg_passive_tab_pane_g1_cp2

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp2

0x9393,	// (0x0002f72e) bg_passive_tab_pane_g3_cp2

0x939c,	// (0x0002f737) bg_active_tab_pane_g1_cp3

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp3

0x93a5,	// (0x0002f740) bg_active_tab_pane_g3_cp3

0x939c,	// (0x0002f737) bg_passive_tab_pane_g1_cp3

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp3

0x93a5,	// (0x0002f740) bg_passive_tab_pane_g3_cp3

0x93ae,	// (0x0002f749) bg_active_tab_pane_g1_cp4

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp4

0x93b7,	// (0x0002f752) bg_active_tab_pane_g3_cp4

0x93ae,	// (0x0002f749) bg_passive_tab_pane_g1_cp4

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp4

0x93b7,	// (0x0002f752) bg_passive_tab_pane_g3_cp4

0xc95d,	// (0x00032cf8) bg_active_tab_pane_g1_cp5

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp5

0xc966,	// (0x00032d01) bg_active_tab_pane_g3_cp5

0xc95d,	// (0x00032cf8) bg_passive_tab_pane_g1_cp5

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp5

0xc966,	// (0x00032d01) bg_passive_tab_pane_g3_cp5

0x5cfe,	// (0x0002c099) list_set_graphic_pane_ParamLimits

0x5cfe,	// (0x0002c099) list_set_graphic_pane

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp4

0xc96f,	// (0x00032d0a) list_set_graphic_pane_g1_ParamLimits

0xc96f,	// (0x00032d0a) list_set_graphic_pane_g1

0xc97b,	// (0x00032d16) list_set_graphic_pane_g2_ParamLimits

0xc97b,	// (0x00032d16) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00035b06) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00035b06) list_set_graphic_pane_g

0x0009,

0xf9d6,	// (0x00035d71) volume_small_pane_cp_g

0xc99f,	// (0x00032d3a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc99f,	// (0x00032d3a) list_double2_large_graphic_pane_g1_cp2

0xc9ad,	// (0x00032d48) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc9ad,	// (0x00032d48) list_double2_large_graphic_pane_g2_cp2

0xc9be,	// (0x00032d59) list_double2_large_graphic_pane_g3_cp2

0xc9c6,	// (0x00032d61) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc9c6,	// (0x00032d61) list_double2_large_graphic_pane_t1_cp2

0xc9dc,	// (0x00032d77) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9dc,	// (0x00032d77) list_double2_large_graphic_pane_t2_cp2

0xe0bd,	// (0x00034458) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0bd,	// (0x00034458) list_double_large_graphic_pane_g1_cp2

0xe0d0,	// (0x0003446b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0d0,	// (0x0003446b) list_double_large_graphic_pane_g2_cp2

0xcb4c,	// (0x00032ee7) list_double_large_graphic_pane_g3_cp2

0xe0e1,	// (0x0003447c) list_double_large_graphic_pane_g4_cp

0xe0e9,	// (0x00034484) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe0e9,	// (0x00034484) list_double_large_graphic_pane_t1_cp2

0xe100,	// (0x0003449b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe100,	// (0x0003449b) list_double_large_graphic_pane_t2_cp2

0xca3c,	// (0x00032dd7) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca3c,	// (0x00032dd7) list_double2_graphic_pane_g1_cp2

0xca4a,	// (0x00032de5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca4a,	// (0x00032de5) list_double2_graphic_pane_g2_cp2

0xca5b,	// (0x00032df6) list_double2_graphic_pane_g3_cp2

0xca65,	// (0x00032e00) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca65,	// (0x00032e00) list_double2_graphic_pane_t1_cp2

0xca7b,	// (0x00032e16) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca7b,	// (0x00032e16) list_double2_graphic_pane_t2_cp2

0xca8d,	// (0x00032e28) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca8d,	// (0x00032e28) list_single_number_heading_pane_g1_cp2

0xca99,	// (0x00032e34) list_single_number_heading_pane_g2_cp2

0xcaa1,	// (0x00032e3c) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcaa1,	// (0x00032e3c) list_single_number_heading_pane_t1_cp2

0xcab7,	// (0x00032e52) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcab7,	// (0x00032e52) list_single_number_heading_pane_t2_cp2

0xcacb,	// (0x00032e66) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcacb,	// (0x00032e66) list_single_number_heading_pane_t3_cp2

0xca8d,	// (0x00032e28) list_single_heading_pane_g1_cp2_ParamLimits

0xca8d,	// (0x00032e28) list_single_heading_pane_g1_cp2

0xca99,	// (0x00032e34) list_single_heading_pane_g2_cp2

0xcaa1,	// (0x00032e3c) list_single_heading_pane_t1_cp2_ParamLimits

0xcaa1,	// (0x00032e3c) list_single_heading_pane_t1_cp2

0xdec5,	// (0x00034260) list_single_heading_pane_t2_cp2_ParamLimits

0xdec5,	// (0x00034260) list_single_heading_pane_t2_cp2

0xde5f,	// (0x000341fa) list_double_graphic_pane_g1_cp2_ParamLimits

0xde5f,	// (0x000341fa) list_double_graphic_pane_g1_cp2

0xde6b,	// (0x00034206) list_double_graphic_pane_g2_cp2_ParamLimits

0xde6b,	// (0x00034206) list_double_graphic_pane_g2_cp2

0xde7a,	// (0x00034215) list_double_graphic_pane_g3_cp2

0xde82,	// (0x0003421d) list_double_graphic_pane_t1_cp2_ParamLimits

0xde82,	// (0x0003421d) list_double_graphic_pane_t1_cp2

0xde98,	// (0x00034233) list_double_graphic_pane_t2_cp2_ParamLimits

0xde98,	// (0x00034233) list_double_graphic_pane_t2_cp2

0xcb40,	// (0x00032edb) list_double_number_pane_g1_cp2_ParamLimits

0xcb40,	// (0x00032edb) list_double_number_pane_g1_cp2

0xcb4c,	// (0x00032ee7) list_double_number_pane_g2_cp2

0xde23,	// (0x000341be) list_double_number_pane_t1_cp2_ParamLimits

0xde23,	// (0x000341be) list_double_number_pane_t1_cp2

0xde37,	// (0x000341d2) list_double_number_pane_t2_cp2_ParamLimits

0xde37,	// (0x000341d2) list_double_number_pane_t2_cp2

0xde4d,	// (0x000341e8) list_double_number_pane_t3_cp2_ParamLimits

0xde4d,	// (0x000341e8) list_double_number_pane_t3_cp2

0xdd9a,	// (0x00034135) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd9a,	// (0x00034135) list_single_graphic_pane_g1_cp2

0xcba4,	// (0x00032f3f) list_single_graphic_pane_g2_cp2_ParamLimits

0xcba4,	// (0x00032f3f) list_single_graphic_pane_g2_cp2

0xcbb0,	// (0x00032f4b) list_single_graphic_pane_g3_cp2

0xdd70,	// (0x0003410b) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0003410b) list_single_graphic_pane_t1_cp2

0xcba4,	// (0x00032f3f) list_single_number_pane_g1_cp2_ParamLimits

0xcba4,	// (0x00032f3f) list_single_number_pane_g1_cp2

0xcbb0,	// (0x00032f4b) list_single_number_pane_g2_cp2

0xdd70,	// (0x0003410b) list_single_number_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0003410b) list_single_number_pane_t1_cp2

0xdd86,	// (0x00034121) list_single_number_pane_t2_cp2_ParamLimits

0xdd86,	// (0x00034121) list_single_number_pane_t2_cp2

0xc9ad,	// (0x00032d48) list_double2_pane_g1_cp2_ParamLimits

0xc9ad,	// (0x00032d48) list_double2_pane_g1_cp2

0xc9be,	// (0x00032d59) list_double2_pane_g2_cp2

0xcb18,	// (0x00032eb3) list_double2_pane_t1_cp2_ParamLimits

0xcb18,	// (0x00032eb3) list_double2_pane_t1_cp2

0xcb2e,	// (0x00032ec9) list_double2_pane_t2_cp2_ParamLimits

0xcb2e,	// (0x00032ec9) list_double2_pane_t2_cp2

0xcb40,	// (0x00032edb) list_double_pane_g1_cp2_ParamLimits

0xcb40,	// (0x00032edb) list_double_pane_g1_cp2

0xcb4c,	// (0x00032ee7) list_double_pane_g2_cp2

0xcb54,	// (0x00032eef) list_double_pane_t1_cp2_ParamLimits

0xcb54,	// (0x00032eef) list_double_pane_t1_cp2

0xcb6a,	// (0x00032f05) list_double_pane_t2_cp2_ParamLimits

0xcb6a,	// (0x00032f05) list_double_pane_t2_cp2

0xcb94,	// (0x00032f2f) list_single_pane_cp2_g3

0xcba4,	// (0x00032f3f) list_single_pane_g1_cp2_ParamLimits

0xcba4,	// (0x00032f3f) list_single_pane_g1_cp2

0xcbb0,	// (0x00032f4b) list_single_pane_g2_cp2

0xcbb8,	// (0x00032f53) list_single_pane_t1_cp2_ParamLimits

0xcbb8,	// (0x00032f53) list_single_pane_t1_cp2

0xcbd0,	// (0x00032f6b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcbd0,	// (0x00032f6b) list_single_large_graphic_pane_g1_cp2

0xcbde,	// (0x00032f79) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcbde,	// (0x00032f79) list_single_large_graphic_pane_g2_cp2

0xcbea,	// (0x00032f85) list_single_large_graphic_pane_g3_cp2

0xcbf2,	// (0x00032f8d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbf2,	// (0x00032f8d) list_single_large_graphic_pane_g4_cp1

0xcc0c,	// (0x00032fa7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcc0c,	// (0x00032fa7) list_single_large_graphic_pane_t1_cp2

0xdd3a,	// (0x000340d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd3a,	// (0x000340d5) list_single_graphic_heading_pane_g1_cp2

0xdd07,	// (0x000340a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd07,	// (0x000340a2) list_single_graphic_heading_pane_g4_cp2

0xcbb0,	// (0x00032f4b) list_single_graphic_heading_pane_g5_cp2

0xdd46,	// (0x000340e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd46,	// (0x000340e1) list_single_graphic_heading_pane_t1_cp2

0xdd5c,	// (0x000340f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd5c,	// (0x000340f7) list_single_graphic_heading_pane_t2_cp2

0xdcfb,	// (0x00034096) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdcfb,	// (0x00034096) list_single_2graphic_pane_g1_cp2

0xdd07,	// (0x000340a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd07,	// (0x000340a2) list_single_2graphic_pane_g2_cp2

0xcbb0,	// (0x00032f4b) list_single_2graphic_pane_g3_cp2

0xdd18,	// (0x000340b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd18,	// (0x000340b3) list_single_2graphic_pane_g4_cp2

0xdd24,	// (0x000340bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd24,	// (0x000340bf) list_single_2graphic_pane_t1_cp2

0xba42,	// (0x00031ddd) list_highlight_pane_g10_cp1

0xd8ef,	// (0x00033c8a) list_highlight_pane_g1_cp1

0xd8f7,	// (0x00033c92) list_highlight_pane_g2_cp1

0xd8ff,	// (0x00033c9a) list_highlight_pane_g3_cp1

0xd907,	// (0x00033ca2) list_highlight_pane_g4_cp1

0xd90f,	// (0x00033caa) list_highlight_pane_g5_cp1

0xd917,	// (0x00033cb2) list_highlight_pane_g6_cp1

0xd91f,	// (0x00033cba) list_highlight_pane_g7_cp1

0xd927,	// (0x00033cc2) list_highlight_pane_g8_cp1

0xd92f,	// (0x00033cca) list_highlight_pane_g9_cp1

0xa187,	// (0x00030522) form_field_slider_pane_t3

0xa197,	// (0x00030532) form_field_slider_pane_t4

0xd823,	// (0x00033bbe) slider_form_pane_ParamLimits

0xd823,	// (0x00033bbe) slider_form_pane

0xba4c,	// (0x00031de7) control_abbreviations

0xba4c,	// (0x00031de7) control_conventions

0xba4c,	// (0x00031de7) control_definitions

0xba4c,	// (0x00031de7) format_table_attribute

0xdf11,	// (0x000342ac) bg_popup_preview_window_pane_g9

0xba4c,	// (0x00031de7) format_table_data2

0xba4c,	// (0x00031de7) format_table_data3

0xba4c,	// (0x00031de7) format_table_data_example

0x0008,

0xba4c,	// (0x00031de7) intro_purpose

0x0077,	// (0x00026412) bg_popup_preview_window_pane_g

0xba4c,	// (0x00031de7) texts_category

0xba4c,	// (0x00031de7) texts_graphics

0xcc22,	// (0x00032fbd) text_digital

0xcc31,	// (0x00032fcc) text_primary

0xcc40,	// (0x00032fdb) text_primary_small

0xcc4f,	// (0x00032fea) text_secondary

0xcc5e,	// (0x00032ff9) text_title

0xe3a7,	// (0x00034742) bg_passive_tab_pane_g1_cp3_srt

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp3_srt

0xe3b0,	// (0x0003474b) bg_passive_tab_pane_g3_cp3_srt

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp3_srt_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp3_srt

0xe3b9,	// (0x00034754) tabs_4_active_pane_srt_g1

0xa557,	// (0x000308f2) tabs_4_active_pane_srt_t1_ParamLimits

0xa557,	// (0x000308f2) tabs_4_active_pane_srt_t1

0xe3a7,	// (0x00034742) bg_active_tab_pane_g1_cp3_copy1

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp3_copy1

0xe3b0,	// (0x0003474b) bg_active_tab_pane_g3_cp3_copy1

0xbaa8,	// (0x00031e43) tabs_2_long_active_pane_srt_ParamLimits

0xbaa8,	// (0x00031e43) tabs_2_long_active_pane_srt

0xbaa8,	// (0x00031e43) tabs_2_long_passive_pane_srt_ParamLimits

0xbaa8,	// (0x00031e43) tabs_2_long_passive_pane_srt

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp4_srt

0xe2c6,	// (0x00034661) bg_passive_tab_pane_g1_cp4_srt

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp4_srt

0xe2cf,	// (0x0003466a) bg_passive_tab_pane_g3_cp4_srt

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp4_srt_ParamLimits

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp4_srt

0xa363,	// (0x000306fe) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa363,	// (0x000306fe) tabs_2_long_active_pane_srt_t1

0xe2c6,	// (0x00034661) bg_active_tab_pane_g1_cp4_srt

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp4_srt

0xe2cf,	// (0x0003466a) bg_active_tab_pane_g3_cp4_srt

0xba9a,	// (0x00031e35) tabs_3_long_active_pane_srt_ParamLimits

0xba9a,	// (0x00031e35) tabs_3_long_active_pane_srt

0xba9a,	// (0x00031e35) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xba9a,	// (0x00031e35) tabs_3_long_passive_pane_cp_srt

0xba9a,	// (0x00031e35) tabs_3_long_passive_pane_srt_ParamLimits

0xba9a,	// (0x00031e35) tabs_3_long_passive_pane_srt

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp5_srt

0xc95d,	// (0x00032cf8) bg_passive_tab_pane_g1_cp5_srt

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp5_srt

0xc966,	// (0x00032d01) bg_passive_tab_pane_g3_cp5_srt

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp5_srt_ParamLimits

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp5_srt

0xa34d,	// (0x000306e8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa34d,	// (0x000306e8) tabs_3_long_active_pane_srt_t1

0xc95d,	// (0x00032cf8) bg_active_tab_pane_g1_cp5_srt

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp5_srt

0xc966,	// (0x00032d01) bg_active_tab_pane_g3_cp5_srt

0xe2b8,	// (0x00034653) navi_text_pane_srt_t1

0xe2b0,	// (0x0003464b) navi_icon_pane_srt_g1

0xcd5c,	// (0x000330f7) midp_editing_number_pane_srt

0xcc6d,	// (0x00033008) midp_ticker_pane_srt

0xcd64,	// (0x000330ff) midp_ticker_pane_srt_g1

0xcd6c,	// (0x00033107) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00035b25) midp_ticker_pane_srt_g

0xcd74,	// (0x0003310f) midp_ticker_pane_srt_t1

0xe2a1,	// (0x0003463c) midp_editing_number_pane_t1_copy1

0x93c0,	// (0x0002f75b) listscroll_midp_pane

0x93c0,	// (0x0002f75b) midp_form_pane

0xcc75,	// (0x00033010) midp_info_popup_window_ParamLimits

0xcc75,	// (0x00033010) midp_info_popup_window

0xc2de,	// (0x00032679) bg_popup_sub_pane_cp50_ParamLimits

0xc2de,	// (0x00032679) bg_popup_sub_pane_cp50

0xd540,	// (0x000338db) listscroll_midp_info_pane_ParamLimits

0xd540,	// (0x000338db) listscroll_midp_info_pane

0xd528,	// (0x000338c3) listscroll_form_midp_pane_ParamLimits

0xd528,	// (0x000338c3) listscroll_form_midp_pane

0xd534,	// (0x000338cf) scroll_bar_cp050

0xa17b,	// (0x00030516) list_midp_pane

0xec7b,	// (0x00035016) signal_pane_g2_cp

0xd45a,	// (0x000337f5) listscroll_midp_info_pane_t1_ParamLimits

0xd45a,	// (0x000337f5) listscroll_midp_info_pane_t1

0xd472,	// (0x0003380d) listscroll_midp_info_pane_t2_ParamLimits

0xd472,	// (0x0003380d) listscroll_midp_info_pane_t2

0xd4b0,	// (0x0003384b) listscroll_midp_info_pane_t3_ParamLimits

0xd4b0,	// (0x0003384b) listscroll_midp_info_pane_t3

0xd4ea,	// (0x00033885) listscroll_midp_info_pane_t4_ParamLimits

0xd4ea,	// (0x00033885) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x00035bd1) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x00035bd1) listscroll_midp_info_pane_t

0xc345,	// (0x000326e0) scroll_pane_cp21

0xd3fe,	// (0x00033799) form_midp_field_choice_group_pane

0xd407,	// (0x000337a2) form_midp_field_text_pane

0xd440,	// (0x000337db) form_midp_field_time_pane

0xd448,	// (0x000337e3) form_midp_gauge_slider_pane

0xd451,	// (0x000337ec) form_midp_gauge_wait_pane

0xba4c,	// (0x00031de7) form_midp_image_pane

0x94af,	// (0x0002f84a) list_single_midp_pane_ParamLimits

0x94af,	// (0x0002f84a) list_single_midp_pane

0xa157,	// (0x000304f2) form_midp_field_text_pane_t1

0xd2a5,	// (0x00033640) input_focus_pane_cp050

0xd3ed,	// (0x00033788) list_midp_form_text_pane

0xd3bc,	// (0x00033757) form_midp_field_choice_group_pane_t1

0xd3ca,	// (0x00033765) input_focus_pane_cp051

0xd3de,	// (0x00033779) list_midp_choice_pane

0xba4c,	// (0x00031de7) status_idle_pane

0xd3a0,	// (0x0003373b) form_midp_field_time_pane_t1

0xba42,	// (0x00031ddd) wait_anim_pane_g2_copy1

0xd3ae,	// (0x00033749) form_midp_field_time_pane_t2

0x0001,

0xccce,	// (0x00033069) aid_navinavi_width_2_pane

0xf831,	// (0x00035bcc) form_midp_field_time_pane_t

0xba4c,	// (0x00031de7) input_focus_pane_cp052

0xba4c,	// (0x00031de7) bg_input_focus_pane_cp040

0xd37c,	// (0x00033717) form_midp_gauge_slider_pane_t1

0xd38a,	// (0x00033725) form_midp_gauge_slider_pane_t2

0xa13b,	// (0x000304d6) form_midp_gauge_slider_pane_t3

0xa149,	// (0x000304e4) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x00035bc3) form_midp_gauge_slider_pane_t

0xd398,	// (0x00033733) form_midp_slider_pane

0xbaa8,	// (0x00031e43) bg_input_focus_pane_cp041_ParamLimits

0xbaa8,	// (0x00031e43) bg_input_focus_pane_cp041

0xd349,	// (0x000336e4) form_midp_gauge_wait_pane_t1_ParamLimits

0xd349,	// (0x000336e4) form_midp_gauge_wait_pane_t1

0xd35b,	// (0x000336f6) form_midp_gauge_wait_pane_t2_ParamLimits

0xd35b,	// (0x000336f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x00035bbe) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x00035bbe) form_midp_gauge_wait_pane_t

0xd36d,	// (0x00033708) form_midp_wait_pane_ParamLimits

0xd36d,	// (0x00033708) form_midp_wait_pane

0xd313,	// (0x000336ae) form_midp_image_pane_g1

0xd31c,	// (0x000336b7) form_midp_image_pane_t1

0xd32b,	// (0x000336c6) form_midp_image_pane_t2

0xd33a,	// (0x000336d5) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x00035bb7) form_midp_image_pane_t

0xd30a,	// (0x000336a5) list_single_midp_pane_g1

0x6754,	// (0x0002caef) list_single_midp_pane_t1

0xa124,	// (0x000304bf) list_midp_form_item_pane_ParamLimits

0xa124,	// (0x000304bf) list_midp_form_item_pane

0xcc88,	// (0x00033023) list_midp_form_item_pane_t1

0xcc97,	// (0x00033032) midp_ticker_pane_g1

0xcca3,	// (0x0003303e) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00035b0b) midp_ticker_pane_g

0x946c,	// (0x0002f807) midp_ticker_pane_t1

0xa4cc,	// (0x00030867) midp_editing_number_pane_t1

0xe33b,	// (0x000346d6) midp_editing_number_pane

0xe34a,	// (0x000346e5) midp_ticker_pane

0xe291,	// (0x0003462c) ai_message_heading_pane

0xba4c,	// (0x00031de7) bg_popup_window_pane_cp14

0xe299,	// (0x00034634) listscroll_ai_message_pane

0xe21b,	// (0x000345b6) ai_message_heading_pane_g1_ParamLimits

0xe21b,	// (0x000345b6) ai_message_heading_pane_g1

0xe227,	// (0x000345c2) ai_message_heading_pane_g2_ParamLimits

0xe227,	// (0x000345c2) ai_message_heading_pane_g2

0xe233,	// (0x000345ce) ai_message_heading_pane_g3_ParamLimits

0xe233,	// (0x000345ce) ai_message_heading_pane_g3

0xe23f,	// (0x000345da) ai_message_heading_pane_g4_ParamLimits

0xe23f,	// (0x000345da) ai_message_heading_pane_g4

0x0003,

0x00d9,	// (0x00026474) ai_message_heading_pane_g_ParamLimits

0x00d9,	// (0x00026474) ai_message_heading_pane_g

0xe24b,	// (0x000345e6) ai_message_heading_pane_t1_ParamLimits

0xe24b,	// (0x000345e6) ai_message_heading_pane_t1

0xe265,	// (0x00034600) ai_message_heading_pane_t2_ParamLimits

0xe265,	// (0x00034600) ai_message_heading_pane_t2

0x0001,

0x00e2,	// (0x0002647d) ai_message_heading_pane_t_ParamLimits

0x00e2,	// (0x0002647d) ai_message_heading_pane_t

0xe277,	// (0x00034612) bg_popup_heading_pane_cp1_ParamLimits

0xe277,	// (0x00034612) bg_popup_heading_pane_cp1

0xe209,	// (0x000345a4) list_ai_message_pane_ParamLimits

0xe209,	// (0x000345a4) list_ai_message_pane

0xc345,	// (0x000326e0) scroll_pane_cp10

0xe1a5,	// (0x00034540) list_ai_message_pane_g1

0xe1ad,	// (0x00034548) list_ai_message_pane_g2

0x0001,

0x00b6,	// (0x00026451) list_ai_message_pane_g

0xe1b5,	// (0x00034550) list_ai_message_pane_t1_ParamLimits

0xe1b5,	// (0x00034550) list_ai_message_pane_t1

0xe1ca,	// (0x00034565) list_ai_message_pane_t2_ParamLimits

0xe1ca,	// (0x00034565) list_ai_message_pane_t2

0xe1df,	// (0x0003457a) list_ai_message_pane_t3_ParamLimits

0xe1df,	// (0x0003457a) list_ai_message_pane_t3

0xe1f4,	// (0x0003458f) list_ai_message_pane_t4_ParamLimits

0xe1f4,	// (0x0003458f) list_ai_message_pane_t4

0x0003,

0x00bb,	// (0x00026456) list_ai_message_pane_t_ParamLimits

0x00bb,	// (0x00026456) list_ai_message_pane_t

0xa328,	// (0x000306c3) cell_ai_soft_ind_pane_ParamLimits

0xa328,	// (0x000306c3) cell_ai_soft_ind_pane

0xccaf,	// (0x0003304a) cell_ai_soft_ind_pane_g1_ParamLimits

0xccaf,	// (0x0003304a) cell_ai_soft_ind_pane_g1

0xba4c,	// (0x00031de7) grid_highlight_cp1

0xccbc,	// (0x00033057) text_secondary_cp56_ParamLimits

0xccbc,	// (0x00033057) text_secondary_cp56

0xe17a,	// (0x00034515) example_general_pane_ParamLimits

0xe17a,	// (0x00034515) example_general_pane

0xe186,	// (0x00034521) example_parent_pane_g1_ParamLimits

0xe186,	// (0x00034521) example_parent_pane_g1

0xe192,	// (0x0003452d) example_parent_pane_t1_ParamLimits

0xe192,	// (0x0003452d) example_parent_pane_t1

0x99f7,	// (0x0002fd92) popup_preview_text_window_ParamLimits

0x99f7,	// (0x0002fd92) popup_preview_text_window

0xcb9c,	// (0x00032f37) list_single_pane_cp2_g4

0xbdae,	// (0x00032149) bg_popup_preview_window_pane_ParamLimits

0xbdae,	// (0x00032149) bg_popup_preview_window_pane

0xdf19,	// (0x000342b4) popup_preview_text_window_t1_ParamLimits

0xdf19,	// (0x000342b4) popup_preview_text_window_t1

0xdf37,	// (0x000342d2) popup_preview_text_window_t2_ParamLimits

0xdf37,	// (0x000342d2) popup_preview_text_window_t2

0xdf80,	// (0x0003431b) popup_preview_text_window_t3_ParamLimits

0xdf80,	// (0x0003431b) popup_preview_text_window_t3

0xdfc5,	// (0x00034360) popup_preview_text_window_t4_ParamLimits

0xdfc5,	// (0x00034360) popup_preview_text_window_t4

0x0004,

0x008a,	// (0x00026425) popup_preview_text_window_t_ParamLimits

0x008a,	// (0x00026425) popup_preview_text_window_t

0xe043,	// (0x000343de) scroll_pane_cp11

0xd1b5,	// (0x00033550) bg_popup_preview_window_pane_g1

0xded9,	// (0x00034274) bg_popup_preview_window_pane_g2

0xdee1,	// (0x0003427c) bg_popup_preview_window_pane_g3

0xdee9,	// (0x00034284) bg_popup_preview_window_pane_g4

0xdef1,	// (0x0003428c) bg_popup_preview_window_pane_g5

0xdef9,	// (0x00034294) bg_popup_preview_window_pane_g6

0xdf01,	// (0x0003429c) bg_popup_preview_window_pane_g7

0xdf09,	// (0x000342a4) bg_popup_preview_window_pane_g8

0x0714,	// (0x00026aaf) aid_popup_width_pane

0x9973,	// (0x0002fd0e) popup_midp_note_alarm_window_ParamLimits

0x9973,	// (0x0002fd0e) popup_midp_note_alarm_window

0xc21a,	// (0x000325b5) data_form_pane_ParamLimits

0x908b,	// (0x0002f426) form_field_data_pane_g1

0x9095,	// (0x0002f430) form_field_data_pane_t1_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_ParamLimits

0xc234,	// (0x000325cf) data_form_wide_pane_ParamLimits

0x64df,	// (0x0002c87a) form_field_data_wide_pane_g1

0x64eb,	// (0x0002c886) form_field_data_wide_pane_t1_ParamLimits

0xbfa1,	// (0x0003233c) input_focus_pane_cp6_ParamLimits

0x91b8,	// (0x0002f553) input_popup_find_pane_g1_ParamLimits

0x91b8,	// (0x0002f553) input_popup_find_pane_g1

0x0fa2,	// (0x0002733d) aid_navi_side_left_pane

0x0fb7,	// (0x00027352) aid_navi_side_right_pane

0xd9de,	// (0x00033d79) bg_popup_window_pane_cp30_ParamLimits

0xd9de,	// (0x00033d79) bg_popup_window_pane_cp30

0xda58,	// (0x00033df3) popup_midp_note_alarm_window_g1_ParamLimits

0xda58,	// (0x00033df3) popup_midp_note_alarm_window_g1

0xda88,	// (0x00033e23) popup_midp_note_alarm_window_t1_ParamLimits

0xda88,	// (0x00033e23) popup_midp_note_alarm_window_t1

0xdb29,	// (0x00033ec4) popup_midp_note_alarm_window_t2_ParamLimits

0xdb29,	// (0x00033ec4) popup_midp_note_alarm_window_t2

0xdbd7,	// (0x00033f72) popup_midp_note_alarm_window_t3_ParamLimits

0xdbd7,	// (0x00033f72) popup_midp_note_alarm_window_t3

0xdbff,	// (0x00033f9a) popup_midp_note_alarm_window_t4_ParamLimits

0xdbff,	// (0x00033f9a) popup_midp_note_alarm_window_t4

0xdc1f,	// (0x00033fba) popup_midp_note_alarm_window_t5_ParamLimits

0xdc1f,	// (0x00033fba) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x00035c33) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x00035c33) popup_midp_note_alarm_window_t

0xdccb,	// (0x00034066) wait_bar_pane_cp1_ParamLimits

0xdccb,	// (0x00034066) wait_bar_pane_cp1

0xba4c,	// (0x00031de7) wait_anim_pane_copy1

0xba4c,	// (0x00031de7) wait_border_pane_copy1

0xd6e4,	// (0x00033a7f) wait_border_pane_g1_copy1

0x6505,	// (0x0002c8a0) form_field_popup_pane_g1

0x90af,	// (0x0002f44a) form_field_popup_pane_t1_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_cp7_ParamLimits

0xc260,	// (0x000325fb) list_form_pane_ParamLimits

0x6527,	// (0x0002c8c2) form_field_popup_wide_pane_g1

0x652f,	// (0x0002c8ca) form_field_popup_wide_pane_t1_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_cp8_ParamLimits

0xc26c,	// (0x00032607) list_form_wide_pane_ParamLimits

0xe3e0,	// (0x0003477b) aid_size_cell_graphic_pane

0x912e,	// (0x0002f4c9) data_form_pane_t1_ParamLimits

0x94cb,	// (0x0002f866) data_form_wide_pane_t1_ParamLimits

0x9dac,	// (0x00030147) bg_status_flat_pane

0x8c82,	// (0x0002f01d) title_pane_t1_ParamLimits

0xba62,	// (0x00031dfd) title_pane_t2_ParamLimits

0xba88,	// (0x00031e23) title_pane_t3_ParamLimits

0xf573,	// (0x0003590e) title_pane_t_ParamLimits

0xc6f3,	// (0x00032a8e) level_1_signal_ParamLimits

0xc700,	// (0x00032a9b) level_2_signal_ParamLimits

0xc70d,	// (0x00032aa8) level_3_signal_ParamLimits

0xc71a,	// (0x00032ab5) level_4_signal_ParamLimits

0xc727,	// (0x00032ac2) level_5_signal_ParamLimits

0xc734,	// (0x00032acf) level_6_signal_ParamLimits

0xc741,	// (0x00032adc) level_7_signal_ParamLimits

0xc6f3,	// (0x00032a8e) level_1_battery_ParamLimits

0xc700,	// (0x00032a9b) level_2_battery_ParamLimits

0xc70d,	// (0x00032aa8) level_3_battery_ParamLimits

0xc71a,	// (0x00032ab5) level_4_battery_ParamLimits

0xc727,	// (0x00032ac2) level_5_battery_ParamLimits

0xc734,	// (0x00032acf) level_6_battery_ParamLimits

0xc741,	// (0x00032adc) level_7_battery_ParamLimits

0xd8ef,	// (0x00033c8a) bg_status_flat_pane_g1

0xd8f7,	// (0x00033c92) bg_status_flat_pane_g2

0xd8ff,	// (0x00033c9a) bg_status_flat_pane_g3

0xd907,	// (0x00033ca2) bg_status_flat_pane_g4

0xd90f,	// (0x00033caa) bg_status_flat_pane_g5

0xd917,	// (0x00033cb2) bg_status_flat_pane_g6

0xd91f,	// (0x00033cba) bg_status_flat_pane_g7

0x8d16,	// (0x0002f0b1) tabs_3_active_pane_t1_ParamLimits

0x8d16,	// (0x0002f0b1) tabs_3_passive_pane_t1_ParamLimits

0x8d30,	// (0x0002f0cb) tabs_4_active_pane_t1_ParamLimits

0x8d30,	// (0x0002f0cb) tabs_4_1_passive_pane_t1_ParamLimits

0x91ce,	// (0x0002f569) tabs_2_active_pane_t1_ParamLimits

0x91ce,	// (0x0002f569) tabs_2_passive_pane_t1_ParamLimits

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp4_ParamLimits

0x91e0,	// (0x0002f57b) tabs_2_long_active_pane_t1_ParamLimits

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp4_ParamLimits

0x1f05,	// (0x000282a0) list_single_midp_graphic_pane_t1_ParamLimits

0xbaa8,	// (0x00031e43) bg_active_tab_pane_cp5_ParamLimits

0x91f3,	// (0x0002f58e) tabs_3_long_active_pane_t1_ParamLimits

0xc37d,	// (0x00032718) bg_passive_tab_pane_cp5_ParamLimits

0x1f05,	// (0x000282a0) list_single_midp_graphic_pane_t1

0x9dac,	// (0x00030147) bg_status_flat_pane_ParamLimits

0xd088,	// (0x00033423) indicator_pane_cp2_ParamLimits

0xd088,	// (0x00033423) indicator_pane_cp2

0x9f23,	// (0x000302be) navi_pane_srt_ParamLimits

0x9f23,	// (0x000302be) navi_pane_srt

0xd0b0,	// (0x0003344b) popup_clock_digital_analogue_window_cp1

0xbaec,	// (0x00031e87) indicator_pane_t1

0xcc6d,	// (0x00033008) copy_highlight_pane

0xcc6d,	// (0x00033008) cursor_graphics_pane

0xcc6d,	// (0x00033008) graphic_within_text_pane

0xcc6d,	// (0x00033008) link_highlight_pane

0xe006,	// (0x000343a1) popup_preview_text_window_t5_ParamLimits

0xe006,	// (0x000343a1) popup_preview_text_window_t5

0xccd6,	// (0x00033071) cursor_digital_pane

0xccd6,	// (0x00033071) cursor_primary_pane

0xcce7,	// (0x00033082) cursor_primary_small_pane

0xccef,	// (0x0003308a) cursor_secondary_pane

0xccf7,	// (0x00033092) cursor_title_pane

0xccd6,	// (0x00033071) link_highlight_digital_pane

0xccde,	// (0x00033079) link_highlight_primary_pane

0xcce7,	// (0x00033082) link_highlight_primary_small_pane

0xccef,	// (0x0003308a) link_highlight_secondary_pane

0xccf7,	// (0x00033092) link_highlight_title_pane

0xccd6,	// (0x00033071) copy_highlight_digital_pane

0xccd6,	// (0x00033071) copy_highlight_primary_pane

0xcce7,	// (0x00033082) copy_highlight_primary_small_pane

0xccef,	// (0x0003308a) copy_highlight_secondary_pane

0xccf7,	// (0x00033092) copy_highlight_title_pane

0xccef,	// (0x0003308a) graphic_text_digital_pane

0xd981,	// (0x00033d1c) graphic_text_primary_pane

0xd98a,	// (0x00033d25) graphic_text_primary_small_pane

0xcce7,	// (0x00033082) graphic_text_secondary_pane

0xccd6,	// (0x00033071) graphic_text_title_pane

0x947e,	// (0x0002f819) cursor_primary_pane_g1

0xd973,	// (0x00033d0e) cursor_text_primary_t1

0xa1bb,	// (0x00030556) cursor_primary_small_pane_g1

0xd965,	// (0x00033d00) cursor_text_primary_small_t1

0xa1b1,	// (0x0003054c) cursor_primary_small_pane_g1_copy1

0xd945,	// (0x00033ce0) cursor_text_primary_small_t1_copy1

0xd937,	// (0x00033cd2) cursor_text_title_t1

0xa1a7,	// (0x00030542) cursor_title_pane_g1

0x947e,	// (0x0002f819) cursor_digital_pane_g1

0xccff,	// (0x0003309a) cursor_text_digital_t1

0xd8d8,	// (0x00033c73) link_highlight_primary_pane_g1

0xd8e0,	// (0x00033c7b) link_highlight_primary_pane_t1

0xcd0d,	// (0x000330a8) link_highlight_primary_small_pane_g1

0xcd15,	// (0x000330b0) link_highlight_primary_small_pane_t1

0xcd0d,	// (0x000330a8) link_highlight_secondary_pane_g1

0xcd24,	// (0x000330bf) link_highlight_secondary_pane_t1

0xd84c,	// (0x00033be7) link_highlight_title_pane_g1

0xd854,	// (0x00033bef) link_highlight_title_pane_t1

0xd835,	// (0x00033bd0) link_highlight_digital_pane_g1

0xd83d,	// (0x00033bd8) link_highlight_digital_pane_t1

0xd729,	// (0x00033ac4) copy_highlight_primary_pane_g1

0xd731,	// (0x00033acc) copy_highlight_primary_pane_t1

0xd703,	// (0x00033a9e) copy_highlight_primary_small_pane_g1

0xd71a,	// (0x00033ab5) copy_highlight_primary_small_pane_t1

0xcd33,	// (0x000330ce) copy_highlight_secondary_pane_g1

0xcd3b,	// (0x000330d6) copy_highlight_secondary_pane_t1

0xd703,	// (0x00033a9e) copy_highlight_title_pane_g1

0xd70b,	// (0x00033aa6) copy_highlight_title_pane_t1

0xd729,	// (0x00033ac4) copy_highlight_digital_pane_g1

0xe56a,	// (0x00034905) copy_highlight_digital_pane_t1

0xe4be,	// (0x00034859) graphic_text_primary_pane_g1

0xe54e,	// (0x000348e9) graphic_text_primary_pane_t1

0xe55c,	// (0x000348f7) graphic_text_primary_pane_t2

0x0001,

0x0156,	// (0x000264f1) graphic_text_primary_pane_t

0xe52a,	// (0x000348c5) graphic_text_primary_small_pane_g1

0xe532,	// (0x000348cd) graphic_text_primary_small_pane_t1

0xe540,	// (0x000348db) graphic_text_primary_small_pane_t2

0x0001,

0x0151,	// (0x000264ec) graphic_text_primary_small_pane_t

0xe506,	// (0x000348a1) graphic_text_secondary_pane_g1

0xe50e,	// (0x000348a9) graphic_text_secondary_pane_t1

0xe51c,	// (0x000348b7) graphic_text_secondary_pane_t2

0x0001,

0x014c,	// (0x000264e7) graphic_text_secondary_pane_t

0xe4e2,	// (0x0003487d) graphic_text_title_pane_g1

0xe4ea,	// (0x00034885) graphic_text_title_pane_t1

0xe4f8,	// (0x00034893) graphic_text_title_pane_t2

0x0001,

0x0147,	// (0x000264e2) graphic_text_title_pane_t

0xe4be,	// (0x00034859) graphic_text_digital_pane_g1

0xe4c6,	// (0x00034861) graphic_text_digital_pane_t1

0xe4d4,	// (0x0003486f) graphic_text_digital_pane_t2

0x0001,

0x0142,	// (0x000264dd) graphic_text_digital_pane_t

0xbaa8,	// (0x00031e43) navi_icon_pane_srt_ParamLimits

0xbaa8,	// (0x00031e43) navi_icon_pane_srt

0xba4c,	// (0x00031de7) navi_midp_pane_srt

0xba4c,	// (0x00031de7) navi_navi_pane_srt

0xbaa8,	// (0x00031e43) navi_text_pane_srt_ParamLimits

0xbaa8,	// (0x00031e43) navi_text_pane_srt

0xe489,	// (0x00034824) navi_navi_icon_text_pane_srt

0xe491,	// (0x0003482c) navi_navi_pane_srt_g1_ParamLimits

0xe491,	// (0x0003482c) navi_navi_pane_srt_g1

0xe4a3,	// (0x0003483e) navi_navi_pane_srt_g2_ParamLimits

0xe4a3,	// (0x0003483e) navi_navi_pane_srt_g2

0x0001,

0x013d,	// (0x000264d8) navi_navi_pane_srt_g_ParamLimits

0x013d,	// (0x000264d8) navi_navi_pane_srt_g

0xe4b5,	// (0x00034850) navi_navi_tabs_pane_srt

0xe489,	// (0x00034824) navi_navi_text_pane_srt

0xe489,	// (0x00034824) navi_navi_volume_pane_srt

0xe47a,	// (0x00034815) navi_navi_text_pane_srt_t1

0x27cf,	// (0x00028b6a) navi_navi_volume_pane_srt_g1

0x27d7,	// (0x00028b72) volume_small_pane_srt_ParamLimits

0x27d7,	// (0x00028b72) volume_small_pane_srt

0x14a7,	// (0x00027842) volume_small_pane_srt_g1_ParamLimits

0x14a7,	// (0x00027842) volume_small_pane_srt_g1

0x14b7,	// (0x00027852) volume_small_pane_srt_g2_ParamLimits

0x14b7,	// (0x00027852) volume_small_pane_srt_g2

0x14c8,	// (0x00027863) volume_small_pane_srt_g3_ParamLimits

0x14c8,	// (0x00027863) volume_small_pane_srt_g3

0x14d9,	// (0x00027874) volume_small_pane_srt_g4_ParamLimits

0x14d9,	// (0x00027874) volume_small_pane_srt_g4

0x14ea,	// (0x00027885) volume_small_pane_srt_g5_ParamLimits

0x14ea,	// (0x00027885) volume_small_pane_srt_g5

0x14fb,	// (0x00027896) volume_small_pane_srt_g6_ParamLimits

0x14fb,	// (0x00027896) volume_small_pane_srt_g6

0x150c,	// (0x000278a7) volume_small_pane_srt_g7_ParamLimits

0x150c,	// (0x000278a7) volume_small_pane_srt_g7

0x151d,	// (0x000278b8) volume_small_pane_srt_g8_ParamLimits

0x151d,	// (0x000278b8) volume_small_pane_srt_g8

0x152e,	// (0x000278c9) volume_small_pane_srt_g9_ParamLimits

0x152e,	// (0x000278c9) volume_small_pane_srt_g9

0x153f,	// (0x000278da) volume_small_pane_srt_g10_ParamLimits

0x153f,	// (0x000278da) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00035b10) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00035b10) volume_small_pane_srt_g

0xbe57,	// (0x000321f2) query_popup_data_pane_cp2

0xe460,	// (0x000347fb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe460,	// (0x000347fb) navi_navi_icon_text_pane_srt_t1

0xd981,	// (0x00033d1c) navi_tabs_2_long_pane_srt

0xd981,	// (0x00033d1c) navi_tabs_2_pane_srt

0xd981,	// (0x00033d1c) navi_tabs_3_long_pane_srt

0xd981,	// (0x00033d1c) navi_tabs_3_pane_srt

0xd981,	// (0x00033d1c) navi_tabs_4_pane_srt

0x27af,	// (0x00028b4a) tabs_2_active_pane_srt_ParamLimits

0x27af,	// (0x00028b4a) tabs_2_active_pane_srt

0x27bf,	// (0x00028b5a) tabs_2_passive_pane_srt_ParamLimits

0x27bf,	// (0x00028b5a) tabs_2_passive_pane_srt

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp1_srt

0xe43e,	// (0x000347d9) bg_passive_tab_pane_g1_cp1_srt

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp1_srt

0xe447,	// (0x000347e2) bg_passive_tab_pane_g3_cp1_srt

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp1_srt_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp1_srt

0xe450,	// (0x000347eb) tabs_2_active_pane_srt_g1

0xa5d4,	// (0x0003096f) tabs_2_active_pane_srt_t1_ParamLimits

0xa5d4,	// (0x0003096f) tabs_2_active_pane_srt_t1

0xe43e,	// (0x000347d9) bg_active_tab_pane_g1_cp1_srt

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp1_srt

0xe447,	// (0x000347e2) bg_active_tab_pane_g3_cp1_srt

0x276a,	// (0x00028b05) tabs_3_active_pane_srt_ParamLimits

0x276a,	// (0x00028b05) tabs_3_active_pane_srt

0x277b,	// (0x00028b16) tabs_3_passive_pane_cp_srt_ParamLimits

0x277b,	// (0x00028b16) tabs_3_passive_pane_cp_srt

0x278c,	// (0x00028b27) tabs_3_passive_pane_srt_ParamLimits

0x278c,	// (0x00028b27) tabs_3_passive_pane_srt

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd2a5,	// (0x00033640) bg_passive_tab_pane_cp2_srt

0xcd4a,	// (0x000330e5) bg_passive_tab_pane_g1_cp2_srt

0xc916,	// (0x00032cb1) bg_passive_tab_pane_g2_cp2_srt

0xcd53,	// (0x000330ee) bg_passive_tab_pane_g3_cp2_srt

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp2_srt_ParamLimits

0xba9a,	// (0x00031e35) bg_active_tab_pane_cp2_srt

0xe436,	// (0x000347d1) tabs_3_active_pane_srt_g1

0xa5be,	// (0x00030959) tabs_3_active_pane_srt_t1_ParamLimits

0xa5be,	// (0x00030959) tabs_3_active_pane_srt_t1

0xcd4a,	// (0x000330e5) bg_active_tab_pane_g1_cp2_srt

0xc916,	// (0x00032cb1) bg_active_tab_pane_g2_cp2_srt

0xcd53,	// (0x000330ee) bg_active_tab_pane_g3_cp2_srt

0x2710,	// (0x00028aab) tabs_4_active_pane_srt_ParamLimits

0x2710,	// (0x00028aab) tabs_4_active_pane_srt

0x2722,	// (0x00028abd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2722,	// (0x00028abd) tabs_4_passive_pane_cp2_srt

0xce77,	// (0x00033212) aid_size_cell_toolbar

0xd953,	// (0x00033cee) main_idle_act_pane_ParamLimits

0xcf41,	// (0x000332dc) popup_large_graphic_colour_window_ParamLimits

0x9c77,	// (0x00030012) popup_toolbar_window_ParamLimits

0x9c77,	// (0x00030012) popup_toolbar_window

0x6818,	// (0x0002cbb3) list_single_graphic_2heading_pane_ParamLimits

0x6818,	// (0x0002cbb3) list_single_graphic_2heading_pane

0xc527,	// (0x000328c2) aid_size_cell_apps_grid_lsc_pane

0xc539,	// (0x000328d4) aid_size_cell_apps_grid_prt_pane

0xc37d,	// (0x00032718) bg_wml_button_pane_cp1_ParamLimits

0xc37d,	// (0x00032718) bg_wml_button_pane_cp1

0xa157,	// (0x000304f2) form_midp_field_text_pane_t1_ParamLimits

0xd2a5,	// (0x00033640) input_focus_pane_cp050_ParamLimits

0xd3ed,	// (0x00033788) list_midp_form_text_pane_ParamLimits

0xd3ca,	// (0x00033765) input_focus_pane_cp051_ParamLimits

0xd3de,	// (0x00033779) list_midp_choice_pane_ParamLimits

0xa0ec,	// (0x00030487) list_single_2graphic_pane_cp3_ParamLimits

0xa0ec,	// (0x00030487) list_single_2graphic_pane_cp3

0xa102,	// (0x0003049d) list_single_midp_graphic_pane_ParamLimits

0xa102,	// (0x0003049d) list_single_midp_graphic_pane

0x0680,	// (0x00026a1b) list_single_graphic_2heading_pane_g1_ParamLimits

0x0680,	// (0x00026a1b) list_single_graphic_2heading_pane_g1

0x068c,	// (0x00026a27) list_single_graphic_2heading_pane_g4_ParamLimits

0x068c,	// (0x00026a27) list_single_graphic_2heading_pane_g4

0x0698,	// (0x00026a33) list_single_graphic_2heading_pane_g5_ParamLimits

0x0698,	// (0x00026a33) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00035b63) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00035b63) list_single_graphic_2heading_pane_g

0x06a4,	// (0x00026a3f) list_single_graphic_2heading_pane_t1_ParamLimits

0x06a4,	// (0x00026a3f) list_single_graphic_2heading_pane_t1

0x06b8,	// (0x00026a53) list_single_graphic_2heading_pane_t2_ParamLimits

0x06b8,	// (0x00026a53) list_single_graphic_2heading_pane_t2

0x06d4,	// (0x00026a6f) list_single_graphic_2heading_pane_t3_ParamLimits

0x06d4,	// (0x00026a6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00035b6a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00035b6a) list_single_graphic_2heading_pane_t

0xd0f3,	// (0x0003348e) bg_popup_sub_pane_cp2

0xd11d,	// (0x000334b8) grid_toobar_pane

0x1e76,	// (0x00028211) cell_toolbar_pane_ParamLimits

0x1e76,	// (0x00028211) cell_toolbar_pane

0xd159,	// (0x000334f4) cell_toolbar_pane_g1_ParamLimits

0xd159,	// (0x000334f4) cell_toolbar_pane_g1

0xd16d,	// (0x00033508) cell_toolbar_pane_g2_ParamLimits

0xd16d,	// (0x00033508) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00035b78) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00035b78) cell_toolbar_pane_g

0xd18f,	// (0x0003352a) grid_highlight_pane_cp2_ParamLimits

0xd18f,	// (0x0003352a) grid_highlight_pane_cp2

0xd1a9,	// (0x00033544) toolbar_button_pane

0xd1b5,	// (0x00033550) toolbar_button_pane_g1

0xd1bd,	// (0x00033558) toolbar_button_pane_g2

0xd1c5,	// (0x00033560) toolbar_button_pane_g3

0xd1cd,	// (0x00033568) toolbar_button_pane_g4

0xd1d5,	// (0x00033570) toolbar_button_pane_g5

0xd1dd,	// (0x00033578) toolbar_button_pane_g6

0xd1e5,	// (0x00033580) toolbar_button_pane_g7

0xd1ed,	// (0x00033588) toolbar_button_pane_g8

0xd1f5,	// (0x00033590) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00035b7d) toolbar_button_pane_g

0x1eae,	// (0x00028249) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1eae,	// (0x00028249) list_single_2graphic_pane_g1_cp3

0x85d5,	// (0x0002e970) list_single_2graphic_pane_g2_cp3_ParamLimits

0x85d5,	// (0x0002e970) list_single_2graphic_pane_g2_cp3

0x1ecb,	// (0x00028266) list_single_2graphic_pane_g3_cp3

0x1ed3,	// (0x0002826e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1ed3,	// (0x0002826e) list_single_2graphic_pane_g4_cp3

0x1edf,	// (0x0002827a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1edf,	// (0x0002827a) list_single_2graphic_pane_t1_cp3

0x1ef9,	// (0x00028294) list_single_midp_graphic_pane_g2_ParamLimits

0x1ef9,	// (0x00028294) list_single_midp_graphic_pane_g2

0xce7f,	// (0x0003321a) aid_zoom_text_primary

0x66e8,	// (0x0002ca83) aid_zoom_text_secondary

0xce07,	// (0x000331a2) status_small_pane_g7_ParamLimits

0xce07,	// (0x000331a2) status_small_pane_g7

0xce2a,	// (0x000331c5) status_small_pane_t1_ParamLimits

0x8c5e,	// (0x0002eff9) title_pane_g2

0x0003,

0xf56a,	// (0x00035905) title_pane_g

0x8ee9,	// (0x0002f284) aid_size_cell_colour_1_pane_ParamLimits

0x8ee9,	// (0x0002f284) aid_size_cell_colour_1_pane

0x8efd,	// (0x0002f298) aid_size_cell_colour_2_pane_ParamLimits

0x8efd,	// (0x0002f298) aid_size_cell_colour_2_pane

0x8f11,	// (0x0002f2ac) aid_size_cell_colour_3_pane_ParamLimits

0x8f11,	// (0x0002f2ac) aid_size_cell_colour_3_pane

0x8f25,	// (0x0002f2c0) aid_size_cell_colour_4_pane_ParamLimits

0x8f25,	// (0x0002f2c0) aid_size_cell_colour_4_pane

0x0ede,	// (0x00027279) title_pane_stacon_g1_ParamLimits

0x0ede,	// (0x00027279) title_pane_stacon_g1

0xd788,	// (0x00033b23) popup_note_wait_window_g3_ParamLimits

0xd788,	// (0x00033b23) popup_note_wait_window_g3

0xd7fe,	// (0x00033b99) popup_note_wait_window_t5_ParamLimits

0xd7fe,	// (0x00033b99) popup_note_wait_window_t5

0xba4c,	// (0x00031de7) main_feb_china_hwr_fs_writing_pane

0x969f,	// (0x0002fa3a) popup_feb_china_hwr_fs_window_ParamLimits

0x969f,	// (0x0002fa3a) popup_feb_china_hwr_fs_window

0x85e6,	// (0x0002e981) aid_size_cell_hwr_fs_ParamLimits

0x85e6,	// (0x0002e981) aid_size_cell_hwr_fs

0xd2a5,	// (0x00033640) bg_popup_sub_pane_cp3_ParamLimits

0xd2a5,	// (0x00033640) bg_popup_sub_pane_cp3

0x85fb,	// (0x0002e996) grid_hwr_fs_pane_ParamLimits

0x85fb,	// (0x0002e996) grid_hwr_fs_pane

0x1f48,	// (0x000282e3) linegrid_hwr_fs_pane_ParamLimits

0x1f48,	// (0x000282e3) linegrid_hwr_fs_pane

0x8613,	// (0x0002e9ae) cell_hwr_fs_pane_ParamLimits

0x8613,	// (0x0002e9ae) cell_hwr_fs_pane

0xd2b1,	// (0x0003364c) linegrid_hwr_fs_pane_g1_ParamLimits

0xd2b1,	// (0x0003364c) linegrid_hwr_fs_pane_g1

0xa0c0,	// (0x0003045b) linegrid_hwr_fs_pane_g2_ParamLimits

0xa0c0,	// (0x0003045b) linegrid_hwr_fs_pane_g2

0xd2bd,	// (0x00033658) linegrid_hwr_fs_pane_g3_ParamLimits

0xd2bd,	// (0x00033658) linegrid_hwr_fs_pane_g3

0x1f8c,	// (0x00028327) linegrid_hwr_fs_pane_g4_ParamLimits

0x1f8c,	// (0x00028327) linegrid_hwr_fs_pane_g4

0x1fa6,	// (0x00028341) linegrid_hwr_fs_pane_g5_ParamLimits

0x1fa6,	// (0x00028341) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x00035ba3) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x00035ba3) linegrid_hwr_fs_pane_g

0xd2c9,	// (0x00033664) cell_hwr_fs_pane_g1_ParamLimits

0xd2c9,	// (0x00033664) cell_hwr_fs_pane_g1

0xd0c1,	// (0x0003345c) cell_hwr_fs_pane_g2_ParamLimits

0xd0c1,	// (0x0003345c) cell_hwr_fs_pane_g2

0xa0d2,	// (0x0003046d) cell_hwr_fs_pane_g3_ParamLimits

0xa0d2,	// (0x0003046d) cell_hwr_fs_pane_g3

0xa0df,	// (0x0003047a) cell_hwr_fs_pane_g4_ParamLimits

0xa0df,	// (0x0003047a) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x00035bae) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x00035bae) cell_hwr_fs_pane_g

0x8639,	// (0x0002e9d4) cell_hwr_fs_pane_t1

0xba4c,	// (0x00031de7) grid_highlight_pane_cp6

0xba4c,	// (0x00031de7) main_idle_act2_pane

0xc32c,	// (0x000326c7) aid_inside_area_popup_secondary

0xa1db,	// (0x00030576) aid_inside_area_window_primary_ParamLimits

0xa1db,	// (0x00030576) aid_inside_area_window_primary

0xe579,	// (0x00034914) ai2_news_ticker_pane

0xe581,	// (0x0003491c) aid_size_cell_ai1_link_ParamLimits

0xe581,	// (0x0003491c) aid_size_cell_ai1_link

0xe59b,	// (0x00034936) popup_ai2_data_window_ParamLimits

0xe59b,	// (0x00034936) popup_ai2_data_window

0xe5af,	// (0x0003494a) popup_ai2_link_window_ParamLimits

0xe5af,	// (0x0003494a) popup_ai2_link_window

0xd2a5,	// (0x00033640) bg_popup_sub_pane_cp4_ParamLimits

0xd2a5,	// (0x00033640) bg_popup_sub_pane_cp4

0xe5c3,	// (0x0003495e) grid_ai2_link_pane_ParamLimits

0xe5c3,	// (0x0003495e) grid_ai2_link_pane

0xe5da,	// (0x00034975) popup_ai2_link_window_g1_ParamLimits

0xe5da,	// (0x00034975) popup_ai2_link_window_g1

0xe5e6,	// (0x00034981) popup_ai2_link_window_g2_ParamLimits

0xe5e6,	// (0x00034981) popup_ai2_link_window_g2

0x0001,

0x015b,	// (0x000264f6) popup_ai2_link_window_g_ParamLimits

0x015b,	// (0x000264f6) popup_ai2_link_window_g

0xe5f5,	// (0x00034990) ai2_mp_button_pane

0xe5fd,	// (0x00034998) ai2_mp_volume_pane

0xd3ca,	// (0x00033765) bg_popup_sub_pane_cp5_ParamLimits

0xd3ca,	// (0x00033765) bg_popup_sub_pane_cp5

0xe605,	// (0x000349a0) heading_ai2_gene_pane_ParamLimits

0xe605,	// (0x000349a0) heading_ai2_gene_pane

0xe611,	// (0x000349ac) list_ai2_gene_pane_ParamLimits

0xe611,	// (0x000349ac) list_ai2_gene_pane

0xe659,	// (0x000349f4) cell_ai2_link_pane_ParamLimits

0xe659,	// (0x000349f4) cell_ai2_link_pane

0xe66f,	// (0x00034a0a) cell_ai2_link_pane_g1

0xba4c,	// (0x00031de7) grid_highlight_pane_cp7

0x27ec,	// (0x00028b87) ai2_mp_volume_pane_g1

0xe740,	// (0x00034adb) ai2_mp_volume_pane_g2

0xe6b5,	// (0x00034a50) list_ai2_gene_pane_t1

0xe748,	// (0x00034ae3) ai2_mp_volume_pane_g3

0x0002,

0xf95b,	// (0x00035cf6) ai2_mp_volume_pane_g

0x27f4,	// (0x00028b8f) volume_small_pane_cp3

0xe750,	// (0x00034aeb) aid_size_cell_ai2_button

0xe758,	// (0x00034af3) grid_ai2_button_pane

0xe761,	// (0x00034afc) cell_ai2_button_pane_ParamLimits

0xe761,	// (0x00034afc) cell_ai2_button_pane

0xba42,	// (0x00031ddd) cell_ai2_button_pane_g1

0xba4c,	// (0x00031de7) grid_highlight_pane_cp8

0xe700,	// (0x00034a9b) ai2_gene_pane_t1_ParamLimits

0xe700,	// (0x00034a9b) ai2_gene_pane_t1

0x9631,	// (0x0002f9cc) aid_height_parent_landscape

0xa37a,	// (0x00030715) aid_height_set_list

0xd953,	// (0x00033cee) aid_size_parent

0xe3e0,	// (0x0003477b) aid_size_cell_graphic_pane_ParamLimits

0xe621,	// (0x000349bc) popup_ai2_data_window_g1_ParamLimits

0xe621,	// (0x000349bc) popup_ai2_data_window_g1

0xe62d,	// (0x000349c8) ai2_news_ticker_pane_g1

0xe635,	// (0x000349d0) ai2_news_ticker_pane_g2

0x0001,

0x0160,	// (0x000264fb) ai2_news_ticker_pane_g

0xe63d,	// (0x000349d8) ai2_news_ticker_pane_t1

0xe64b,	// (0x000349e6) ai2_news_ticker_pane_t2

0x0001,

0x0165,	// (0x00026500) ai2_news_ticker_pane_t

0xe678,	// (0x00034a13) heading_ai2_gene_pane_g1

0xe680,	// (0x00034a1b) heading_ai2_gene_pane_t1_ParamLimits

0xe680,	// (0x00034a1b) heading_ai2_gene_pane_t1

0xe695,	// (0x00034a30) list_highlight_pane_cp6

0xe69d,	// (0x00034a38) ai2_gene_pane_ParamLimits

0xe69d,	// (0x00034a38) ai2_gene_pane

0xe6c3,	// (0x00034a5e) list_ai2_gene_pane_t2

0x0001,

0x016a,	// (0x00026505) list_ai2_gene_pane_t

0xe6d1,	// (0x00034a6c) list_highlight_pane_cp8_ParamLimits

0xe6d1,	// (0x00034a6c) list_highlight_pane_cp8

0xe6e2,	// (0x00034a7d) ai2_gene_pane_g1_ParamLimits

0xe6e2,	// (0x00034a7d) ai2_gene_pane_g1

0xe6f4,	// (0x00034a8f) ai2_gene_pane_g2_ParamLimits

0xe6f4,	// (0x00034a8f) ai2_gene_pane_g2

0x0001,

0x016f,	// (0x0002650a) ai2_gene_pane_g_ParamLimits

0x016f,	// (0x0002650a) ai2_gene_pane_g

0xc1bc,	// (0x00032557) scroll_pane_cp12

0x8592,	// (0x0002e92d) control_pane_t3_ParamLimits

0x8592,	// (0x0002e92d) control_pane_t3

0xce1b,	// (0x000331b6) status_small_pane_g8_ParamLimits

0xce1b,	// (0x000331b6) status_small_pane_g8

0x9732,	// (0x0002facd) popup_find_window_ParamLimits

0x99ad,	// (0x0002fd48) popup_note_image_window_ParamLimits

0x4376,	// (0x0002a711) list_double2_graphic_pane_vc_g1_ParamLimits

0x4376,	// (0x0002a711) list_double2_graphic_pane_vc_g1

0x42fc,	// (0x0002a697) list_double2_graphic_pane_vc_g2_ParamLimits

0x42fc,	// (0x0002a697) list_double2_graphic_pane_vc_g2

0x4308,	// (0x0002a6a3) list_double2_graphic_pane_vc_g3_ParamLimits

0x4308,	// (0x0002a6a3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00035b71) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035b71) list_double2_graphic_pane_vc_g

0x6714,	// (0x0002caaf) list_double2_graphic_pane_vc_t1_ParamLimits

0x6714,	// (0x0002caaf) list_double2_graphic_pane_vc_t1

0x42fc,	// (0x0002a697) list_single_heading_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_heading_pane_vc_g1

0x4308,	// (0x0002a6a3) list_single_heading_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_heading_pane_vc_g

0x672a,	// (0x0002cac5) list_single_heading_pane_vc_t1_ParamLimits

0x672a,	// (0x0002cac5) list_single_heading_pane_vc_t1

0x6740,	// (0x0002cadb) list_single_heading_pane_vc_t2_ParamLimits

0x6740,	// (0x0002cadb) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x00035b92) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x00035b92) list_single_heading_pane_vc_t

0xd1fd,	// (0x00033598) list_setting_number_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00033598) list_setting_number_pane_vc_g1

0xd209,	// (0x000335a4) list_setting_number_pane_vc_g2_ParamLimits

0xd209,	// (0x000335a4) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00035b97) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00035b97) list_setting_number_pane_vc_g

0xd215,	// (0x000335b0) list_setting_number_pane_vc_t1_ParamLimits

0xd215,	// (0x000335b0) list_setting_number_pane_vc_t1

0xd229,	// (0x000335c4) list_setting_number_pane_vc_t2_ParamLimits

0xd229,	// (0x000335c4) list_setting_number_pane_vc_t2

0xd245,	// (0x000335e0) list_setting_number_pane_vc_t3_ParamLimits

0xd245,	// (0x000335e0) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x00035b9c) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x00035b9c) list_setting_number_pane_vc_t

0xd26d,	// (0x00033608) set_value_pane_vc_ParamLimits

0xd26d,	// (0x00033608) set_value_pane_vc

0x6818,	// (0x0002cbb3) list_double2_graphic_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double2_graphic_pane_vc

0xe35d,	// (0x000346f8) list_double2_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x000346f8) list_double2_large_graphic_pane_vc

0x6818,	// (0x0002cbb3) list_double2_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double2_pane_vc

0x6818,	// (0x0002cbb3) list_double_graphic_heading_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_graphic_heading_pane_vc

0x6818,	// (0x0002cbb3) list_double_graphic_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_graphic_pane_vc

0x6818,	// (0x0002cbb3) list_double_heading_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_heading_pane_vc

0xe35d,	// (0x000346f8) list_double_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x000346f8) list_double_large_graphic_pane_vc

0x6818,	// (0x0002cbb3) list_double_number_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_number_pane_vc

0x6818,	// (0x0002cbb3) list_double_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_pane_vc

0x6818,	// (0x0002cbb3) list_double_time_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_double_time_pane_vc

0x6818,	// (0x0002cbb3) list_setting_number_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_setting_number_pane_vc

0x6818,	// (0x0002cbb3) list_setting_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_setting_pane_vc

0x6818,	// (0x0002cbb3) list_single_graphic_heading_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_single_graphic_heading_pane_vc

0x6818,	// (0x0002cbb3) list_single_heading_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_single_heading_pane_vc

0x6818,	// (0x0002cbb3) list_single_number_heading_pane_vc_ParamLimits

0x6818,	// (0x0002cbb3) list_single_number_heading_pane_vc

0x4376,	// (0x0002a711) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4376,	// (0x0002a711) list_double_graphic_heading_pane_vc_g1

0x42fc,	// (0x0002a697) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x42fc,	// (0x0002a697) list_double_graphic_heading_pane_vc_g2

0x4308,	// (0x0002a6a3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4308,	// (0x0002a6a3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d6,	// (0x00035b71) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035b71) list_double_graphic_heading_pane_vc_g

0x68e9,	// (0x0002cc84) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x68e9,	// (0x0002cc84) list_double_graphic_heading_pane_vc_t1

0x672a,	// (0x0002cac5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x672a,	// (0x0002cac5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf962,	// (0x00035cfd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf962,	// (0x00035cfd) list_double_graphic_heading_pane_vc_t

0xd1fd,	// (0x00033598) list_setting_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00033598) list_setting_pane_vc_g1

0xd209,	// (0x000335a4) list_setting_pane_vc_g2_ParamLimits

0xd209,	// (0x000335a4) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x00035b97) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x00035b97) list_setting_pane_vc_g

0xe957,	// (0x00034cf2) list_setting_pane_vc_t1_ParamLimits

0xe957,	// (0x00034cf2) list_setting_pane_vc_t1

0xe96b,	// (0x00034d06) list_setting_pane_vc_t2_ParamLimits

0xe96b,	// (0x00034d06) list_setting_pane_vc_t2

0x0001,

0x01be,	// (0x00026559) list_setting_pane_vc_t_ParamLimits

0x01be,	// (0x00026559) list_setting_pane_vc_t

0xd26d,	// (0x00033608) set_value_pane_cp_vc_ParamLimits

0xd26d,	// (0x00033608) set_value_pane_cp_vc

0x42fc,	// (0x0002a697) list_single_number_heading_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_single_number_heading_pane_vc_g1

0x4308,	// (0x0002a6a3) list_single_number_heading_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_single_number_heading_pane_vc_g

0x672a,	// (0x0002cac5) list_single_number_heading_pane_vc_t1_ParamLimits

0x672a,	// (0x0002cac5) list_single_number_heading_pane_vc_t1

0x68fd,	// (0x0002cc98) list_single_number_heading_pane_vc_t2_ParamLimits

0x68fd,	// (0x0002cc98) list_single_number_heading_pane_vc_t2

0x4364,	// (0x0002a6ff) list_single_number_heading_pane_vc_t3_ParamLimits

0x4364,	// (0x0002a6ff) list_single_number_heading_pane_vc_t3

0x0002,

0xf97c,	// (0x00035d17) list_single_number_heading_pane_vc_t_ParamLimits

0xf97c,	// (0x00035d17) list_single_number_heading_pane_vc_t

0x4376,	// (0x0002a711) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4376,	// (0x0002a711) list_single_graphic_heading_pane_vc_g1

0x42fc,	// (0x0002a697) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x42fc,	// (0x0002a697) list_single_graphic_heading_pane_vc_g4

0x4308,	// (0x0002a6a3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4308,	// (0x0002a6a3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d6,	// (0x00035b71) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035b71) list_single_graphic_heading_pane_vc_g

0x672a,	// (0x0002cac5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x672a,	// (0x0002cac5) list_single_graphic_heading_pane_vc_t1

0x6911,	// (0x0002ccac) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6911,	// (0x0002ccac) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf983,	// (0x00035d1e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf983,	// (0x00035d1e) list_single_graphic_heading_pane_vc_t

0x42fc,	// (0x0002a697) list_double2_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_double2_pane_vc_g1

0x4308,	// (0x0002a6a3) list_double2_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_double2_pane_vc_g

0x67e0,	// (0x0002cb7b) list_double2_pane_vc_t1_ParamLimits

0x67e0,	// (0x0002cb7b) list_double2_pane_vc_t1

0x6925,	// (0x0002ccc0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6925,	// (0x0002ccc0) list_double2_large_graphic_pane_vc_g1

0x6931,	// (0x0002cccc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6931,	// (0x0002cccc) list_double2_large_graphic_pane_vc_g2

0x693d,	// (0x0002ccd8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x693d,	// (0x0002ccd8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0003599c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0003599c) list_double2_large_graphic_pane_vc_g

0x6949,	// (0x0002cce4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6949,	// (0x0002cce4) list_double2_large_graphic_pane_vc_t1

0x695f,	// (0x0002ccfa) list_double_time_pane_vc_g1_ParamLimits

0x695f,	// (0x0002ccfa) list_double_time_pane_vc_g1

0x696b,	// (0x0002cd06) list_double_time_pane_vc_g2_ParamLimits

0x696b,	// (0x0002cd06) list_double_time_pane_vc_g2

0x0001,

0xf988,	// (0x00035d23) list_double_time_pane_vc_g_ParamLimits

0xf988,	// (0x00035d23) list_double_time_pane_vc_g

0x6977,	// (0x0002cd12) list_double_time_pane_vc_t1_ParamLimits

0x6977,	// (0x0002cd12) list_double_time_pane_vc_t1

0x6990,	// (0x0002cd2b) list_double_time_pane_vc_t2_ParamLimits

0x6990,	// (0x0002cd2b) list_double_time_pane_vc_t2

0x69d0,	// (0x0002cd6b) list_double_time_pane_vc_t3_ParamLimits

0x69d0,	// (0x0002cd6b) list_double_time_pane_vc_t3

0x69e8,	// (0x0002cd83) list_double_time_pane_vc_t4_ParamLimits

0x69e8,	// (0x0002cd83) list_double_time_pane_vc_t4

0x0003,

0xf98d,	// (0x00035d28) list_double_time_pane_vc_t_ParamLimits

0xf98d,	// (0x00035d28) list_double_time_pane_vc_t

0x42fc,	// (0x0002a697) list_double_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_double_pane_vc_g1

0x4308,	// (0x0002a6a3) list_double_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_double_pane_vc_g

0x69fc,	// (0x0002cd97) list_double_pane_vc_t1_ParamLimits

0x69fc,	// (0x0002cd97) list_double_pane_vc_t1

0x6a0e,	// (0x0002cda9) list_double_pane_vc_t2_ParamLimits

0x6a0e,	// (0x0002cda9) list_double_pane_vc_t2

0x0001,

0xf996,	// (0x00035d31) list_double_pane_vc_t_ParamLimits

0xf996,	// (0x00035d31) list_double_pane_vc_t

0x42fc,	// (0x0002a697) list_double_number_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_double_number_pane_vc_g1

0x4308,	// (0x0002a6a3) list_double_number_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_double_number_pane_vc_g

0x6a26,	// (0x0002cdc1) list_double_number_pane_vc_t1_ParamLimits

0x6a26,	// (0x0002cdc1) list_double_number_pane_vc_t1

0x6a3a,	// (0x0002cdd5) list_double_number_pane_vc_t2_ParamLimits

0x6a3a,	// (0x0002cdd5) list_double_number_pane_vc_t2

0x6a0e,	// (0x0002cda9) list_double_number_pane_vc_t3_ParamLimits

0x6a0e,	// (0x0002cda9) list_double_number_pane_vc_t3

0x0002,

0xf99b,	// (0x00035d36) list_double_number_pane_vc_t_ParamLimits

0xf99b,	// (0x00035d36) list_double_number_pane_vc_t

0x6a4c,	// (0x0002cde7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6a4c,	// (0x0002cde7) list_double_large_graphic_pane_vc_g1

0x6a58,	// (0x0002cdf3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6a58,	// (0x0002cdf3) list_double_large_graphic_pane_vc_g2

0x693d,	// (0x0002ccd8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x693d,	// (0x0002ccd8) list_double_large_graphic_pane_vc_g3

0x6a67,	// (0x0002ce02) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6a67,	// (0x0002ce02) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9a2,	// (0x00035d3d) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9a2,	// (0x00035d3d) list_double_large_graphic_pane_vc_g

0x6a73,	// (0x0002ce0e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6a73,	// (0x0002ce0e) list_double_large_graphic_pane_vc_t1

0x6a85,	// (0x0002ce20) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6a85,	// (0x0002ce20) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9ab,	// (0x00035d46) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9ab,	// (0x00035d46) list_double_large_graphic_pane_vc_t

0x42fc,	// (0x0002a697) list_double_heading_pane_vc_g1_ParamLimits

0x42fc,	// (0x0002a697) list_double_heading_pane_vc_g1

0x4308,	// (0x0002a6a3) list_double_heading_pane_vc_g2_ParamLimits

0x4308,	// (0x0002a6a3) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003597f) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003597f) list_double_heading_pane_vc_g

0x6a9e,	// (0x0002ce39) list_double_heading_pane_vc_t1_ParamLimits

0x6a9e,	// (0x0002ce39) list_double_heading_pane_vc_t1

0x672a,	// (0x0002cac5) list_double_heading_pane_vc_t2_ParamLimits

0x672a,	// (0x0002cac5) list_double_heading_pane_vc_t2

0x0001,

0xf9b0,	// (0x00035d4b) list_double_heading_pane_vc_t_ParamLimits

0xf9b0,	// (0x00035d4b) list_double_heading_pane_vc_t

0x6ab2,	// (0x0002ce4d) list_double_graphic_pane_vc_g1_ParamLimits

0x6ab2,	// (0x0002ce4d) list_double_graphic_pane_vc_g1

0x6ac2,	// (0x0002ce5d) list_double_graphic_pane_vc_g2_ParamLimits

0x6ac2,	// (0x0002ce5d) list_double_graphic_pane_vc_g2

0x6ad1,	// (0x0002ce6c) list_double_graphic_pane_vc_g3_ParamLimits

0x6ad1,	// (0x0002ce6c) list_double_graphic_pane_vc_g3

0x0002,

0xf9b5,	// (0x00035d50) list_double_graphic_pane_vc_g_ParamLimits

0xf9b5,	// (0x00035d50) list_double_graphic_pane_vc_g

0x6add,	// (0x0002ce78) list_double_graphic_pane_vc_t1_ParamLimits

0x6add,	// (0x0002ce78) list_double_graphic_pane_vc_t1

0x6a0e,	// (0x0002cda9) list_double_graphic_pane_vc_t2_ParamLimits

0x6a0e,	// (0x0002cda9) list_double_graphic_pane_vc_t2

0x0001,

0xf9bc,	// (0x00035d57) list_double_graphic_pane_vc_t_ParamLimits

0xf9bc,	// (0x00035d57) list_double_graphic_pane_vc_t

0x0720,	// (0x00026abb) aid_size_cell_fastswap

0x7ff9,	// (0x0002e394) aid_size_cell_touch_ParamLimits

0x7ff9,	// (0x0002e394) aid_size_cell_touch

0x098d,	// (0x00026d28) popup_fast_swap_wide_window_ParamLimits

0x098d,	// (0x00026d28) popup_fast_swap_wide_window

0x8144,	// (0x0002e4df) touch_pane_ParamLimits

0x8144,	// (0x0002e4df) touch_pane

0xc212,	// (0x000325ad) button_value_adjust_pane_cp2

0x6413,	// (0x0002c7ae) button_value_adjust_pane_cp4

0x6433,	// (0x0002c7ce) form_field_data_pane_cp2

0x904c,	// (0x0002f3e7) form_field_data_wide_pane_cp2

0xc575,	// (0x00032910) bg_scroll_pane_ParamLimits

0x10c6,	// (0x00027461) scroll_handle_pane_ParamLimits

0x10da,	// (0x00027475) scroll_sc2_down_pane_ParamLimits

0x10da,	// (0x00027475) scroll_sc2_down_pane

0xc5a6,	// (0x00032941) scroll_sc2_up_pane_ParamLimits

0xc5a6,	// (0x00032941) scroll_sc2_up_pane

0xa70b,	// (0x00030aa6) grid_wheel_folder_pane_g1_ParamLimits

0xa70b,	// (0x00030aa6) grid_wheel_folder_pane_g1

0x1350,	// (0x000276eb) clock_nsta_pane_cp2_ParamLimits

0x1350,	// (0x000276eb) clock_nsta_pane_cp2

0x93c0,	// (0x0002f75b) listscroll_midp_pane_ParamLimits

0x93d1,	// (0x0002f76c) midp_canvas_pane

0xce6f,	// (0x0003320a) nsta_clock_indic_pane

0xcea7,	// (0x00033242) listscroll_form_pane_vc

0xceaf,	// (0x0003324a) listscroll_set_pane_vc_ParamLimits

0xceaf,	// (0x0003324a) listscroll_set_pane_vc

0x9dd4,	// (0x0003016f) clock_nsta_pane

0x9dfe,	// (0x00030199) indicator_nsta_pane

0xd0f3,	// (0x0003348e) bg_popup_sub_pane_cp2_ParamLimits

0xd107,	// (0x000334a2) find_pane_cp2_ParamLimits

0xd107,	// (0x000334a2) find_pane_cp2

0xd11d,	// (0x000334b8) grid_toobar_pane_ParamLimits

0xd279,	// (0x00033614) list_form_gen_pane_vc_ParamLimits

0xd279,	// (0x00033614) list_form_gen_pane_vc

0xd28f,	// (0x0003362a) scroll_pane_cp8_vc_ParamLimits

0xd28f,	// (0x0003362a) scroll_pane_cp8_vc

0xd2df,	// (0x0003367a) data_form_wide_pane_vc_ParamLimits

0xd2df,	// (0x0003367a) data_form_wide_pane_vc

0xd2eb,	// (0x00033686) form_field_data_wide_pane_vc_g1

0xd2f3,	// (0x0003368e) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2f3,	// (0x0003368e) form_field_data_wide_pane_vc_t1

0xc226,	// (0x000325c1) input_focus_pane_cp6_vc_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_cp6_vc

0xa17b,	// (0x00030516) list_midp_pane_ParamLimits

0xe2d8,	// (0x00034673) scroll_pane_cp16_ParamLimits

0xe2d8,	// (0x00034673) scroll_pane_cp16

0xd562,	// (0x000338fd) button_value_adjust_pane_ParamLimits

0xd562,	// (0x000338fd) button_value_adjust_pane

0xa38b,	// (0x00030726) button_value_adjust_pane_cp6_ParamLimits

0xa38b,	// (0x00030726) button_value_adjust_pane_cp6

0xa4a1,	// (0x0003083c) settings_code_pane_cp_ParamLimits

0xa4a1,	// (0x0003083c) settings_code_pane_cp

0xba42,	// (0x00031ddd) cell_touch_pane_g1

0xba42,	// (0x00031ddd) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00035aba) cell_touch_pane_g

0xa5ea,	// (0x00030985) cell_touch_pane_cp_ParamLimits

0xa5ea,	// (0x00030985) cell_touch_pane_cp

0xa606,	// (0x000309a1) cell_touch_pane_ParamLimits

0xa606,	// (0x000309a1) cell_touch_pane

0xba42,	// (0x00031ddd) scroll_sc2_down_pane_g1

0xba42,	// (0x00031ddd) scroll_sc2_up_pane_g1

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp4_vc

0xe773,	// (0x00034b0e) list_set_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x00034b0e) list_set_graphic_pane_vc_g1

0xe77f,	// (0x00034b1a) list_set_graphic_pane_vc_g2_ParamLimits

0xe77f,	// (0x00034b1a) list_set_graphic_pane_vc_g2

0x0001,

0x0180,	// (0x0002651b) list_set_graphic_pane_vc_g_ParamLimits

0x0180,	// (0x0002651b) list_set_graphic_pane_vc_g

0xe78b,	// (0x00034b26) text_primary_small_cp13_vc_ParamLimits

0xe78b,	// (0x00034b26) text_primary_small_cp13_vc

0xe7a3,	// (0x00034b3e) list_set_graphic_pane_vc_ParamLimits

0xe7a3,	// (0x00034b3e) list_set_graphic_pane_vc

0xba4c,	// (0x00031de7) input_focus_pane_cp2_vc

0xba42,	// (0x00031ddd) setting_code_pane_vc_g1

0xe7b7,	// (0x00034b52) setting_code_pane_vc_t1

0xe7c5,	// (0x00034b60) set_text_pane_vc_t1_ParamLimits

0xe7c5,	// (0x00034b60) set_text_pane_vc_t1

0xba4c,	// (0x00031de7) input_focus_pane_cp1_vc

0xe7e4,	// (0x00034b7f) list_set_text_pane_vc

0xba42,	// (0x00031ddd) setting_text_pane_vc_g1

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp2_vc

0xe7ee,	// (0x00034b89) setting_slider_graphic_pane_vc_g1

0xe7f6,	// (0x00034b91) setting_slider_graphic_pane_vc_t1

0xe804,	// (0x00034b9f) setting_slider_graphic_pane_vc_t2

0x0001,

0x0185,	// (0x00026520) setting_slider_graphic_pane_vc_t

0xe812,	// (0x00034bad) slider_set_pane_cp_vc

0xe81a,	// (0x00034bb5) slider_set_pane_vc_g1

0xe823,	// (0x00034bbe) slider_set_pane_vc_g2

0x0006,

0x018a,	// (0x00026525) slider_set_pane_vc_g

0xc28d,	// (0x00032628) set_opt_bg_pane_g1_copy1

0xc295,	// (0x00032630) set_opt_bg_pane_g2_copy1

0xe84f,	// (0x00034bea) set_opt_bg_pane_g3_copy1

0xc2a5,	// (0x00032640) set_opt_bg_pane_g4_copy1

0xc2ad,	// (0x00032648) set_opt_bg_pane_g5_copy1

0xc2b5,	// (0x00032650) set_opt_bg_pane_g6_copy1

0xe857,	// (0x00034bf2) set_opt_bg_pane_g7_copy1

0xe861,	// (0x00034bfc) set_opt_bg_pane_g8_copy1

0xe869,	// (0x00034c04) set_opt_bg_pane_g9_copy1

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp_vc

0xe871,	// (0x00034c0c) setting_slider_pane_vc_t1

0xe7f6,	// (0x00034b91) setting_slider_pane_vc_t2

0xe804,	// (0x00034b9f) setting_slider_pane_vc_t3

0x0002,

0x0199,	// (0x00026534) setting_slider_pane_vc_t

0xe812,	// (0x00034bad) slider_set_pane_vc

0x2127,	// (0x000284c2) volume_set_pane_vc_g1

0x281f,	// (0x00028bba) volume_set_pane_vc_g2

0x2828,	// (0x00028bc3) volume_set_pane_vc_g3

0x2831,	// (0x00028bcc) volume_set_pane_vc_g4

0x283a,	// (0x00028bd5) volume_set_pane_vc_g5

0x2843,	// (0x00028bde) volume_set_pane_vc_g6

0x284c,	// (0x00028be7) volume_set_pane_vc_g7

0x2855,	// (0x00028bf0) volume_set_pane_vc_g8

0x285e,	// (0x00028bf9) volume_set_pane_vc_g9

0x2867,	// (0x00028c02) volume_set_pane_vc_g10

0x0009,

0xf967,	// (0x00035d02) volume_set_pane_vc_g

0xe880,	// (0x00034c1b) volume_set_pane_vc

0xe888,	// (0x00034c23) button_value_adjust_pane_cp1_vc

0xe892,	// (0x00034c2d) list_highlight_pane_cp2_vc

0xe89b,	// (0x00034c36) list_set_pane_vc_ParamLimits

0xe89b,	// (0x00034c36) list_set_pane_vc

0xe8ed,	// (0x00034c88) main_pane_set_vc_t1_ParamLimits

0xe8ed,	// (0x00034c88) main_pane_set_vc_t1

0xe902,	// (0x00034c9d) main_pane_set_vc_t2_ParamLimits

0xe902,	// (0x00034c9d) main_pane_set_vc_t2

0xe914,	// (0x00034caf) main_pane_set_vc_t3_ParamLimits

0xe914,	// (0x00034caf) main_pane_set_vc_t3

0xe926,	// (0x00034cc1) main_pane_set_vc_t4_ParamLimits

0xe926,	// (0x00034cc1) main_pane_set_vc_t4

0x0003,

0x01b5,	// (0x00026550) main_pane_set_vc_t_ParamLimits

0x01b5,	// (0x00026550) main_pane_set_vc_t

0xe938,	// (0x00034cd3) setting_code_pane_vc_ParamLimits

0xe938,	// (0x00034cd3) setting_code_pane_vc

0xe947,	// (0x00034ce2) setting_slider_graphic_pane_vc

0xe947,	// (0x00034ce2) setting_slider_pane_vc

0xe947,	// (0x00034ce2) setting_text_pane_vc

0xe947,	// (0x00034ce2) setting_volume_pane_vc

0xe94f,	// (0x00034cea) scroll_pane_cp121_vc

0xc200,	// (0x0003259b) set_content_pane_vc

0xe98d,	// (0x00034d28) button_value_adjust_pane_g1

0xe996,	// (0x00034d31) button_value_adjust_pane_g2

0x0001,

0x0208,	// (0x000265a3) button_value_adjust_pane_g

0xe99f,	// (0x00034d3a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe99f,	// (0x00034d3a) form_field_slider_wide_pane_vc_t1

0xe9b3,	// (0x00034d4e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00034d4e) form_field_slider_wide_pane_vc_t2

0x0001,

0x020d,	// (0x000265a8) form_field_slider_wide_pane_vc_t_ParamLimits

0x020d,	// (0x000265a8) form_field_slider_wide_pane_vc_t

0xba9a,	// (0x00031e35) input_focus_pane_cp10_vc_ParamLimits

0xba9a,	// (0x00031e35) input_focus_pane_cp10_vc

0xe9c5,	// (0x00034d60) slider_cont_pane_cp1_vc_ParamLimits

0xe9c5,	// (0x00034d60) slider_cont_pane_cp1_vc

0xe81a,	// (0x00034bb5) slider_form_pane_g1_cp2

0xe823,	// (0x00034bbe) slider_form_pane_g2_cp2

0xe9de,	// (0x00034d79) form_field_slider_pane_vc_t3

0xe9ec,	// (0x00034d87) form_field_slider_pane_vc_t4

0xe9fa,	// (0x00034d95) slider_form_pane_vc_ParamLimits

0xe9fa,	// (0x00034d95) slider_form_pane_vc

0xea07,	// (0x00034da2) form_field_slider_pane_vc_t1_ParamLimits

0xea07,	// (0x00034da2) form_field_slider_pane_vc_t1

0xe9b3,	// (0x00034d4e) form_field_slider_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00034d4e) form_field_slider_pane_vc_t2

0x0001,

0x021d,	// (0x000265b8) form_field_slider_pane_vc_t_ParamLimits

0x021d,	// (0x000265b8) form_field_slider_pane_vc_t

0xba9a,	// (0x00031e35) input_focus_pane_cp9_vc_ParamLimits

0xba9a,	// (0x00031e35) input_focus_pane_cp9_vc

0xea23,	// (0x00034dbe) slider_cont_pane_vc_ParamLimits

0xea23,	// (0x00034dbe) slider_cont_pane_vc

0xea35,	// (0x00034dd0) list_form_graphic_pane_cp_vc_ParamLimits

0xea35,	// (0x00034dd0) list_form_graphic_pane_cp_vc

0xd2eb,	// (0x00033686) form_field_popup_wide_pane_vc_g1

0xea4a,	// (0x00034de5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea4a,	// (0x00034de5) form_field_popup_wide_pane_vc_t1

0xc226,	// (0x000325c1) input_focus_pane_cp8_vc_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_cp8_vc

0xea61,	// (0x00034dfc) list_form_wide_pane_vc_ParamLimits

0xea61,	// (0x00034dfc) list_form_wide_pane_vc

0xea6d,	// (0x00034e08) list_form_graphic_pane_vc_g1

0xea75,	// (0x00034e10) list_form_graphic_pane_vc_t1_ParamLimits

0xea75,	// (0x00034e10) list_form_graphic_pane_vc_t1

0xbaa8,	// (0x00031e43) list_highlight_pane_cp5_vc_ParamLimits

0xbaa8,	// (0x00031e43) list_highlight_pane_cp5_vc

0xea91,	// (0x00034e2c) list_form_graphic_pane_vc_ParamLimits

0xea91,	// (0x00034e2c) list_form_graphic_pane_vc

0xd2eb,	// (0x00033686) form_field_popup_pane_vc_g1

0xeaa7,	// (0x00034e42) form_field_popup_pane_vc_t1_ParamLimits

0xeaa7,	// (0x00034e42) form_field_popup_pane_vc_t1

0xc226,	// (0x000325c1) input_focus_pane_cp7_vc_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_cp7_vc

0xeabe,	// (0x00034e59) list_form_pane_vc_ParamLimits

0xeabe,	// (0x00034e59) list_form_pane_vc

0xeaca,	// (0x00034e65) data_form_pane_vc_t1_ParamLimits

0xeaca,	// (0x00034e65) data_form_pane_vc_t1

0xc28d,	// (0x00032628) input_focus_pane_vc_g1

0xc295,	// (0x00032630) input_focus_pane_vc_g2

0xc29d,	// (0x00032638) input_focus_pane_vc_g3

0xc2a5,	// (0x00032640) input_focus_pane_vc_g4

0xc2ad,	// (0x00032648) input_focus_pane_vc_g5

0xc2b5,	// (0x00032650) input_focus_pane_vc_g6

0xc2bd,	// (0x00032658) input_focus_pane_vc_g7

0xc2c5,	// (0x00032660) input_focus_pane_vc_g8

0xc2cd,	// (0x00032668) input_focus_pane_vc_g9

0xba42,	// (0x00031ddd) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00035a43) input_focus_pane_vc_g

0xd2df,	// (0x0003367a) data_form_pane_vc_ParamLimits

0xd2df,	// (0x0003367a) data_form_pane_vc

0xd2eb,	// (0x00033686) form_field_data_pane_vc_g1

0xeae5,	// (0x00034e80) form_field_data_pane_vc_t1_ParamLimits

0xeae5,	// (0x00034e80) form_field_data_pane_vc_t1

0xc226,	// (0x000325c1) input_focus_pane_vc_ParamLimits

0xc226,	// (0x000325c1) input_focus_pane_vc

0xeaff,	// (0x00034e9a) button_value_adjust_pane_cp3_vc

0xeb07,	// (0x00034ea2) button_value_adjust_pane_cp5_vc

0xeb0f,	// (0x00034eaa) form_field_data_pane_vc_ParamLimits

0xeb0f,	// (0x00034eaa) form_field_data_pane_vc

0xeb26,	// (0x00034ec1) form_field_data_pane_vc_cp2

0xeb2e,	// (0x00034ec9) form_field_data_wide_pane_vc_ParamLimits

0xeb2e,	// (0x00034ec9) form_field_data_wide_pane_vc

0xeb44,	// (0x00034edf) form_field_data_wide_pane_vc_cp2

0xeb4c,	// (0x00034ee7) form_field_popup_pane_vc_ParamLimits

0xeb4c,	// (0x00034ee7) form_field_popup_pane_vc

0xeb63,	// (0x00034efe) form_field_popup_wide_pane_vc_ParamLimits

0xeb63,	// (0x00034efe) form_field_popup_wide_pane_vc

0xeb79,	// (0x00034f14) form_field_slider_pane_vc_ParamLimits

0xeb79,	// (0x00034f14) form_field_slider_pane_vc

0xeb8c,	// (0x00034f27) form_field_slider_wide_pane_vc_ParamLimits

0xeb8c,	// (0x00034f27) form_field_slider_wide_pane_vc

0xa624,	// (0x000309bf) grid_touch_1_pane_ParamLimits

0xa624,	// (0x000309bf) grid_touch_1_pane

0xa638,	// (0x000309d3) grid_touch_2_pane_ParamLimits

0xa638,	// (0x000309d3) grid_touch_2_pane

0xeb9f,	// (0x00034f3a) touch_pane_g1_ParamLimits

0xeb9f,	// (0x00034f3a) touch_pane_g1

0xebad,	// (0x00034f48) cell_app_pane_cp_wide_ParamLimits

0xebad,	// (0x00034f48) cell_app_pane_cp_wide

0xebbe,	// (0x00034f59) grid_popup_fast_wide_pane_ParamLimits

0xebbe,	// (0x00034f59) grid_popup_fast_wide_pane

0xebd2,	// (0x00034f6d) scroll_pane_cp19_ParamLimits

0xebd2,	// (0x00034f6d) scroll_pane_cp19

0xba4c,	// (0x00031de7) bg_popup_window_pane_cp20

0xebe6,	// (0x00034f81) listscroll_popup_fast_wide_pane

0xcff6,	// (0x00033391) grid_indicator_nsta_pane

0xebee,	// (0x00034f89) clock_nsta_pane_g1

0xebf7,	// (0x00034f92) clock_nsta_pane_t1

0xa662,	// (0x000309fd) cell_indicator_nsta_pane_ParamLimits

0xa662,	// (0x000309fd) cell_indicator_nsta_pane

0xeb9f,	// (0x00034f3a) cell_indicator_nsta_pane_g1

0xa67f,	// (0x00030a1a) cell_indicator_nsta_pane_g2

0x0001,

0xf9c1,	// (0x00035d5c) cell_indicator_nsta_pane_g

0xec13,	// (0x00034fae) clock_nsta_pane_cp

0xec1b,	// (0x00034fb6) indicator_nsta_pane_cp

0xec24,	// (0x00034fbf) nsta_clock_indic_pane_g1

0xbae4,	// (0x00031e7f) grid_indicator_pane

0xc698,	// (0x00032a33) scroll_pane_cp29

0x129f,	// (0x0002763a) indicator_nsta_pane_cp2_ParamLimits

0x129f,	// (0x0002763a) indicator_nsta_pane_cp2

0xbaa8,	// (0x00031e43) main_apps_wheel_pane

0xd407,	// (0x000337a2) form_midp_field_text_pane_ParamLimits

0xd534,	// (0x000338cf) scroll_bar_cp050_ParamLimits

0xec8d,	// (0x00035028) cell_indicator_pane_ParamLimits

0xec8d,	// (0x00035028) cell_indicator_pane

0xecaa,	// (0x00035045) cell_indicator_pane_g1

0xa695,	// (0x00030a30) grid_wheel_folder_pane_ParamLimits

0xa695,	// (0x00030a30) grid_wheel_folder_pane

0xa6a3,	// (0x00030a3e) list_wheel_apps_pane_ParamLimits

0xa6a3,	// (0x00030a3e) list_wheel_apps_pane

0xa6b1,	// (0x00030a4c) main_apps_wheel_pane_g1_ParamLimits

0xa6b1,	// (0x00030a4c) main_apps_wheel_pane_g1

0xa6bd,	// (0x00030a58) main_apps_wheel_pane_g2_ParamLimits

0xa6bd,	// (0x00030a58) main_apps_wheel_pane_g2

0x0001,

0xf9c6,	// (0x00035d61) main_apps_wheel_pane_g_ParamLimits

0xf9c6,	// (0x00035d61) main_apps_wheel_pane_g

0xa6cb,	// (0x00030a66) main_apps_wheel_pane_t1_ParamLimits

0xa6cb,	// (0x00030a66) main_apps_wheel_pane_t1

0xa6df,	// (0x00030a7a) list_wheel_apps_pane_g1

0xa6e7,	// (0x00030a82) list_wheel_apps_pane_g2

0xa6ef,	// (0x00030a8a) list_wheel_apps_pane_g3

0xa6f7,	// (0x00030a92) list_wheel_apps_pane_g4

0xa701,	// (0x00030a9c) list_wheel_apps_pane_g5

0x0004,

0xf9cb,	// (0x00035d66) list_wheel_apps_pane_g

0xcaeb,	// (0x00032e86) navi_icon_text_pane

0x9ccf,	// (0x0003006a) aid_fill_nsta

0xa718,	// (0x00030ab3) navi_icon_text_pane_g1

0xa724,	// (0x00030abf) navi_icon_text_pane_t1

0xc987,	// (0x00032d22) list_set_graphic_pane_t1_ParamLimits

0xc987,	// (0x00032d22) list_set_graphic_pane_t1

0xdc4e,	// (0x00033fe9) popup_midp_note_alarm_window_t6_ParamLimits

0xdc4e,	// (0x00033fe9) popup_midp_note_alarm_window_t6

0xdc60,	// (0x00033ffb) popup_midp_note_alarm_window_t7_ParamLimits

0xdc60,	// (0x00033ffb) popup_midp_note_alarm_window_t7

0xdc72,	// (0x0003400d) popup_midp_note_alarm_window_t8_ParamLimits

0xdc72,	// (0x0003400d) popup_midp_note_alarm_window_t8

0xdc84,	// (0x0003401f) popup_midp_note_alarm_window_t9_ParamLimits

0xdc84,	// (0x0003401f) popup_midp_note_alarm_window_t9

0xdc96,	// (0x00034031) popup_midp_note_alarm_window_t10_ParamLimits

0xdc96,	// (0x00034031) popup_midp_note_alarm_window_t10

0xdca8,	// (0x00034043) popup_midp_note_alarm_window_t11_ParamLimits

0xdca8,	// (0x00034043) popup_midp_note_alarm_window_t11

0xdcba,	// (0x00034055) scroll_pane_cp17_ParamLimits

0xdcba,	// (0x00034055) scroll_pane_cp17

0x2127,	// (0x000284c2) volume_small_pane_cp_g1

0x29c1,	// (0x00028d5c) volume_small_pane_cp_g2

0x29ca,	// (0x00028d65) volume_small_pane_cp_g3

0x29d3,	// (0x00028d6e) volume_small_pane_cp_g4

0x29dc,	// (0x00028d77) volume_small_pane_cp_g5

0x29e5,	// (0x00028d80) volume_small_pane_cp_g6

0x29ee,	// (0x00028d89) volume_small_pane_cp_g7

0x29f7,	// (0x00028d92) volume_small_pane_cp_g8

0x2a00,	// (0x00028d9b) volume_small_pane_cp_g9

0x2a09,	// (0x00028da4) volume_small_pane_cp_g10

0xcc97,	// (0x00033032) midp_ticker_pane_g1_ParamLimits

0xcca3,	// (0x0003303e) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00035b0b) midp_ticker_pane_g_ParamLimits

0x946c,	// (0x0002f807) midp_ticker_pane_t1_ParamLimits

0x9cef,	// (0x0003008a) aid_fill_nsta_2

0xd520,	// (0x000338bb) list_form2_midp_pane

0xe33b,	// (0x000346d6) midp_editing_number_pane_ParamLimits

0xe34a,	// (0x000346e5) midp_ticker_pane_ParamLimits

0xecb4,	// (0x0003504f) form2_midp_field_pane

0xecbc,	// (0x00035057) scroll_pane_cp51

0xecdc,	// (0x00035077) form2_midp_button_pane_ParamLimits

0xecdc,	// (0x00035077) form2_midp_button_pane

0xecee,	// (0x00035089) form2_midp_content_pane_ParamLimits

0xecee,	// (0x00035089) form2_midp_content_pane

0xed08,	// (0x000350a3) form2_midp_field_choice_group_pane

0xed10,	// (0x000350ab) form2_midp_field_pane_g1

0xed18,	// (0x000350b3) form2_midp_field_pane_g2

0xed20,	// (0x000350bb) form2_midp_field_pane_g3

0xed28,	// (0x000350c3) form2_midp_field_pane_g4

0x0003,

0x026d,	// (0x00026608) form2_midp_field_pane_g

0xed30,	// (0x000350cb) form2_midp_gauge_slider_pane

0xed38,	// (0x000350d3) form2_midp_gauge_wait_pane

0xed40,	// (0x000350db) form2_midp_image_pane_ParamLimits

0xed40,	// (0x000350db) form2_midp_image_pane

0xed5b,	// (0x000350f6) form2_midp_label_pane_ParamLimits

0xed5b,	// (0x000350f6) form2_midp_label_pane

0xa752,	// (0x00030aed) form2_midp_label_pane_cp_ParamLimits

0xa752,	// (0x00030aed) form2_midp_label_pane_cp

0xed74,	// (0x0003510f) form2_midp_string_pane_ParamLimits

0xed74,	// (0x0003510f) form2_midp_string_pane

0x6aef,	// (0x0002ce8a) form2_midp_text_pane_ParamLimits

0x6aef,	// (0x0002ce8a) form2_midp_text_pane

0xed86,	// (0x00035121) form2_midp_time_pane

0xed96,	// (0x00035131) input_focus_pane_cp51_ParamLimits

0xed96,	// (0x00035131) input_focus_pane_cp51

0xedae,	// (0x00035149) form2_midp_label_pane_t1_ParamLimits

0xedae,	// (0x00035149) form2_midp_label_pane_t1

0x6b08,	// (0x0002cea3) form2_mdip_text_pane_t1_ParamLimits

0x6b08,	// (0x0002cea3) form2_mdip_text_pane_t1

0x6b25,	// (0x0002cec0) form2_midp_time_pane_t1

0xedf6,	// (0x00035191) form2_midp_gauge_slider_pane_t1

0xa773,	// (0x00030b0e) form2_midp_gauge_slider_pane_t2

0xa785,	// (0x00030b20) form2_midp_gauge_slider_pane_t3

0x0002,

0xf9f0,	// (0x00035d8b) form2_midp_gauge_slider_pane_t

0xee08,	// (0x000351a3) form2_midp_slider_pane

0xee14,	// (0x000351af) form2_midp_gauge_wait_pane_t1

0xee22,	// (0x000351bd) form2_midp_wait_pane_ParamLimits

0xee22,	// (0x000351bd) form2_midp_wait_pane

0xa797,	// (0x00030b32) list_single_2graphic_pane_cp4_ParamLimits

0xa797,	// (0x00030b32) list_single_2graphic_pane_cp4

0xa102,	// (0x0003049d) list_single_midp_graphic_pane_cp_ParamLimits

0xa102,	// (0x0003049d) list_single_midp_graphic_pane_cp

0xba4c,	// (0x00031de7) list_highlight_pane_cp20

0xee4d,	// (0x000351e8) list_single_2graphic_pane_g1_cp4

0xe678,	// (0x00034a13) list_single_2graphic_pane_g2_cp4

0xee55,	// (0x000351f0) list_single_2graphic_pane_t1_cp4

0xbaa8,	// (0x00031e43) list_highlight_pane_cp21

0xee64,	// (0x000351ff) list_single_midp_graphic_pane_g4_cp

0xee73,	// (0x0003520e) list_single_midp_graphic_pane_t1_cp

0xa7ae,	// (0x00030b49) form2_mdip_string_pane_t1_ParamLimits

0xa7ae,	// (0x00030b49) form2_mdip_string_pane_t1

0xba4c,	// (0x00031de7) bg_wml_button_pane_cp2

0xba42,	// (0x00031ddd) form2_midp_image_pane_g1

0x6214,	// (0x0002c5af) list_double_large_graphic_pane_g5_ParamLimits

0x6214,	// (0x0002c5af) list_double_large_graphic_pane_g5

0x93c0,	// (0x0002f75b) midp_form_pane_ParamLimits

0xbaa8,	// (0x00031e43) main_apps_wheel_pane_ParamLimits

0x9a2b,	// (0x0002fdc6) popup_preview_window_ParamLimits

0x9a2b,	// (0x0002fdc6) popup_preview_window

0xcf86,	// (0x00033321) popup_touch_info_window_ParamLimits

0xcf86,	// (0x00033321) popup_touch_info_window

0xcfa4,	// (0x0003333f) popup_touch_menu_window_ParamLimits

0xcfa4,	// (0x0003333f) popup_touch_menu_window

0xba38,	// (0x00031dd3) bg_popup_sub_pane_cp6

0xee88,	// (0x00035223) list_touch_menu_pane

0xee90,	// (0x0003522b) list_single_touch_menu_pane_ParamLimits

0xee90,	// (0x0003522b) list_single_touch_menu_pane

0xeea5,	// (0x00035240) list_single_touch_menu_pane_t1

0xbaa8,	// (0x00031e43) bg_popup_sub_pane_cp7_ParamLimits

0xbaa8,	// (0x00031e43) bg_popup_sub_pane_cp7

0xeeb3,	// (0x0003524e) heading_sub_pane

0xeebb,	// (0x00035256) list_touch_info_pane_ParamLimits

0xeebb,	// (0x00035256) list_touch_info_pane

0xeeca,	// (0x00035265) list_single_touch_info_pane_ParamLimits

0xeeca,	// (0x00035265) list_single_touch_info_pane

0xeedc,	// (0x00035277) list_single_touch_info_pane_t1

0xeeea,	// (0x00035285) list_single_touch_info_pane_t2

0x0001,

0x0284,	// (0x0002661f) list_single_touch_info_pane_t

0xcc6d,	// (0x00033008) bg_popup_heading_pane_cp

0xeef8,	// (0x00035293) heading_sub_pane_t1

0xd2a5,	// (0x00033640) bg_popup_preview_window_pane_cp_ParamLimits

0xd2a5,	// (0x00033640) bg_popup_preview_window_pane_cp

0xeeb3,	// (0x0003524e) heading_preview_pane

0xeebb,	// (0x00035256) list_preview_pane_ParamLimits

0xeebb,	// (0x00035256) list_preview_pane

0xef06,	// (0x000352a1) popup_preview_window_g1

0xeeca,	// (0x00035265) list_single_preview_pane_ParamLimits

0xeeca,	// (0x00035265) list_single_preview_pane

0xef0e,	// (0x000352a9) list_single_preview_pane_g1

0xef16,	// (0x000352b1) list_single_preview_pane_t1

0xeedc,	// (0x00035277) list_single_preview_pane_t2

0x0001,

0x0289,	// (0x00026624) list_single_preview_pane_t

0xef24,	// (0x000352bf) bg_popup_heading_pane_cp2_ParamLimits

0xef24,	// (0x000352bf) bg_popup_heading_pane_cp2

0xef3a,	// (0x000352d5) heading_preview_pane_g1

0xef42,	// (0x000352dd) heading_preview_pane_t1_ParamLimits

0xef42,	// (0x000352dd) heading_preview_pane_t1

0xbafb,	// (0x00031e96) soft_indicator_pane_t1_ParamLimits

0xc199,	// (0x00032534) scroll_pane_ParamLimits

0xc594,	// (0x0003292f) scroll_sc2_left_pane

0xc59d,	// (0x00032938) scroll_sc2_right_pane

0xc5bc,	// (0x00032957) scroll_bg_pane_g1_ParamLimits

0xc5d1,	// (0x0003296c) scroll_bg_pane_g2_ParamLimits

0xc5e9,	// (0x00032984) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00035a9a) scroll_bg_pane_g_ParamLimits

0xc5bc,	// (0x00032957) scroll_handle_pane_g1_ParamLimits

0xc60b,	// (0x000329a6) scroll_handle_pane_g2_ParamLimits

0xc5e9,	// (0x00032984) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00035aa1) scroll_handle_pane_g_ParamLimits

0xcecf,	// (0x0003326a) popup_choice_list_window_ParamLimits

0xcecf,	// (0x0003326a) popup_choice_list_window

0xd0ff,	// (0x0003349a) choice_list_pane

0xd181,	// (0x0003351c) cell_toolbar_pane_t1

0xd1a9,	// (0x00033544) toolbar_button_pane_ParamLimits

0xe098,	// (0x00034433) ai_gene_pane_1_t2_ParamLimits

0xe098,	// (0x00034433) ai_gene_pane_1_t2

0x0001,

0x009a,	// (0x00026435) ai_gene_pane_1_t_ParamLimits

0x009a,	// (0x00026435) ai_gene_pane_1_t

0xef5f,	// (0x000352fa) scroll_sc2_left_pane_g1

0xef5f,	// (0x000352fa) scroll_sc2_right_pane_g1

0xc37d,	// (0x00032718) bg_popup_sub_pane_cp10

0xef69,	// (0x00035304) list_choice_list_pane

0xef80,	// (0x0003531b) list_single_choice_list_pane_ParamLimits

0xef80,	// (0x0003531b) list_single_choice_list_pane

0xef94,	// (0x0003532f) list_single_choice_list_pane_g1

0xef9c,	// (0x00035337) list_single_choice_list_pane_t1_ParamLimits

0xef9c,	// (0x00035337) list_single_choice_list_pane_t1

0xefb1,	// (0x0003534c) choice_list_pane_g1

0xefb9,	// (0x00035354) choice_list_pane_t1

0xba38,	// (0x00031dd3) input_focus_pane_cp11

0xc4f2,	// (0x0003288d) title_pane_stacon_g2_ParamLimits

0xc4f2,	// (0x0003288d) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00035a80) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00035a80) title_pane_stacon_g

0xcc6d,	// (0x00033008) cursor_press_pane

0x96ea,	// (0x0002fa85) popup_fep_hwr_window_ParamLimits

0x96ea,	// (0x0002fa85) popup_fep_hwr_window

0xcf23,	// (0x000332be) popup_fep_vkb_window_ParamLimits

0xcf23,	// (0x000332be) popup_fep_vkb_window

0xefc7,	// (0x00035362) cursor_press_pane_g1

0x0002,

0xfa12,	// (0x00035dad) fep_vkb_side_pane_g_ParamLimits

0x2c15,	// (0x00028fb0) fep_hwr_candidate_pane_ParamLimits

0x2c15,	// (0x00028fb0) fep_hwr_candidate_pane

0x2c3f,	// (0x00028fda) fep_hwr_side_pane_ParamLimits

0x2c3f,	// (0x00028fda) fep_hwr_side_pane

0x2c5f,	// (0x00028ffa) fep_hwr_top_pane_ParamLimits

0x2c5f,	// (0x00028ffa) fep_hwr_top_pane

0x2c77,	// (0x00029012) fep_hwr_write_pane_ParamLimits

0x2c77,	// (0x00029012) fep_hwr_write_pane

0xfa12,	// (0x00035dad) fep_vkb_side_pane_g

0xefcf,	// (0x0003536a) fep_hwr_top_pane_g1

0xefe1,	// (0x0003537c) fep_hwr_top_pane_g2

0x2cb1,	// (0x0002904c) fep_hwr_top_pane_g3

0x0002,

0xf9f7,	// (0x00035d92) fep_hwr_top_pane_g

0x2cc6,	// (0x00029061) fep_hwr_top_text_pane

0xc75e,	// (0x00032af9) fep_hwr_top_text_pane_g1

0xf017,	// (0x000353b2) fep_hwr_top_text_pane_t1

0x2dbc,	// (0x00029157) fep_hwr_candidate_pane_g1

0xf224,	// (0x000355bf) fep_vkb_keypad_pane_g3_ParamLimits

0xf224,	// (0x000355bf) fep_vkb_keypad_pane_g3

0xf24c,	// (0x000355e7) fep_vkb_keypad_pane_g4_ParamLimits

0xf24c,	// (0x000355e7) fep_vkb_keypad_pane_g4

0xf2c9,	// (0x00035664) fep_vkb_bottom_pane_g2_ParamLimits

0xf2c9,	// (0x00035664) fep_vkb_bottom_pane_g2

0x0001,

0xfa19,	// (0x00035db4) fep_vkb_bottom_pane_g_ParamLimits

0xfa19,	// (0x00035db4) fep_vkb_bottom_pane_g

0xef5f,	// (0x000352fa) cell_vkb_side_pane_g2

0x0001,

0x02c3,	// (0x0002665e) cell_vkb_side_pane_g

0xf30d,	// (0x000356a8) cell_vkb_side_pane_t1

0xf31b,	// (0x000356b6) cell_vkb_side_pane_t1_copy1

0xef5f,	// (0x000352fa) bg_fep_vkb_candidate_pane_g2

0xf3f7,	// (0x00035792) cell_vkb_candidate_pane_ParamLimits

0xf025,	// (0x000353c0) aid_size_cell_vkb_ParamLimits

0xf025,	// (0x000353c0) aid_size_cell_vkb

0xf3f7,	// (0x00035792) cell_vkb_candidate_pane

0x2ecd,	// (0x00029268) bg_popup_fep_shadow_pane_g1

0xf0a1,	// (0x0003543c) fep_vkb_bottom_pane_ParamLimits

0xf0a1,	// (0x0003543c) fep_vkb_bottom_pane

0xf0de,	// (0x00035479) fep_vkb_candidate_pane_ParamLimits

0xf0de,	// (0x00035479) fep_vkb_candidate_pane

0xf0fa,	// (0x00035495) fep_vkb_keypad_pane_ParamLimits

0xf0fa,	// (0x00035495) fep_vkb_keypad_pane

0xf140,	// (0x000354db) fep_vkb_side_pane_ParamLimits

0xf140,	// (0x000354db) fep_vkb_side_pane

0xf17c,	// (0x00035517) fep_vkb_top_pane_ParamLimits

0xf17c,	// (0x00035517) fep_vkb_top_pane

0xf1b8,	// (0x00035553) fep_vkb_top_pane_g1_ParamLimits

0xf1b8,	// (0x00035553) fep_vkb_top_pane_g1

0xf1c7,	// (0x00035562) fep_vkb_top_pane_g2_ParamLimits

0xf1c7,	// (0x00035562) fep_vkb_top_pane_g2

0xf1d6,	// (0x00035571) fep_vkb_top_pane_g3_ParamLimits

0xf1d6,	// (0x00035571) fep_vkb_top_pane_g3

0x0003,

0x02a9,	// (0x00026644) fep_vkb_top_pane_g_ParamLimits

0x02a9,	// (0x00026644) fep_vkb_top_pane_g

0xf1f4,	// (0x0003558f) fep_vkb_top_text_pane_ParamLimits

0xf1f4,	// (0x0003558f) fep_vkb_top_text_pane

0xa846,	// (0x00030be1) fep_vkb_side_pane_g1_ParamLimits

0xa846,	// (0x00030be1) fep_vkb_side_pane_g1

0xf213,	// (0x000355ae) grid_vkb_side_pane_ParamLimits

0xf213,	// (0x000355ae) grid_vkb_side_pane

0x2ed5,	// (0x00029270) bg_popup_fep_shadow_pane_g2

0x2ede,	// (0x00029279) bg_popup_fep_shadow_pane_g3

0x2ee6,	// (0x00029281) bg_popup_fep_shadow_pane_g4

0x2eef,	// (0x0002928a) bg_popup_fep_shadow_pane_g5

0x2ef9,	// (0x00029294) bg_popup_fep_shadow_pane_g6

0x2f01,	// (0x0002929c) bg_popup_fep_shadow_pane_g7

0xc2a5,	// (0x00032640) bg_popup_fep_shadow_pane_g8

0xf278,	// (0x00035613) grid_vkb_keypad_number_pane_ParamLimits

0xf278,	// (0x00035613) grid_vkb_keypad_number_pane

0xf288,	// (0x00035623) grid_vkb_keypad_pane_ParamLimits

0xf288,	// (0x00035623) grid_vkb_keypad_pane

0xf2ae,	// (0x00035649) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ae,	// (0x00035649) fep_vkb_bottom_pane_g1

0xf2d7,	// (0x00035672) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf2d7,	// (0x00035672) grid_vkb_keypad_bottom_left_pane

0xf2ec,	// (0x00035687) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf2ec,	// (0x00035687) grid_vkb_keypad_bottom_right_pane

0xf301,	// (0x0003569c) fep_vkb_top_text_pane_g1

0xa88d,	// (0x00030c28) fep_vkb_top_text_pane_t1

0xa89f,	// (0x00030c3a) cell_vkb_side_pane_ParamLimits

0xa89f,	// (0x00030c3a) cell_vkb_side_pane

0xef5f,	// (0x000352fa) cell_vkb_side_pane_g1

0xf329,	// (0x000356c4) cell_vkb_keypad_pane_ParamLimits

0xf329,	// (0x000356c4) cell_vkb_keypad_pane

0xf3a4,	// (0x0003573f) cell_vkb_keypad_pane_g1

0x0008,

0xfa23,	// (0x00035dbe) bg_popup_fep_shadow_pane_g

0x2f13,	// (0x000292ae) cell_hwr_side_pane_g1

0x2f13,	// (0x000292ae) cell_hwr_side_pane_g2

0xf3ae,	// (0x00035749) cell_vkb_keypad_pane_t1

0xa8b5,	// (0x00030c50) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa8b5,	// (0x00030c50) cell_vkb_keypad_bottom_left_pane

0xa8ca,	// (0x00030c65) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa8ca,	// (0x00030c65) cell_vkb_keypad_bottom_right_pane

0xef5f,	// (0x000352fa) cell_vkb_keypad_bottom_left_pane_g1

0xef5f,	// (0x000352fa) cell_vkb_keypad_bottom_right_pane_g1

0xf3bc,	// (0x00035757) cell_vkb_keypad_number_pane_ParamLimits

0xf3bc,	// (0x00035757) cell_vkb_keypad_number_pane

0xf3db,	// (0x00035776) cell_vkb_keypad_number_pane_g1

0xf3e5,	// (0x00035780) cell_vkb_keypad_number_pane_g2

0xf3ee,	// (0x00035789) cell_vkb_keypad_number_pane_g3

0x0002,

0x02c8,	// (0x00026663) cell_vkb_keypad_number_pane_g

0xf3ae,	// (0x00035749) cell_vkb_keypad_number_pane_t1

0xf414,	// (0x000357af) fep_vkb_candidate_pane_g1

0x0001,

0xfa36,	// (0x00035dd1) cell_hwr_side_pane_g

0xf42d,	// (0x000357c8) cell_hwr_side_pane_t1

0x2f1d,	// (0x000292b8) cell_hwr_side_pane_t1_copy1

0x2f2b,	// (0x000292c6) cell_hwr_candidate_pane_g1

0x2f5a,	// (0x000292f5) cell_hwr_candidate_pane_t1

0xef5f,	// (0x000352fa) cell_vkb_candidate_pane_g2

0xf471,	// (0x0003580c) cell_vkb_candidate_pane_t1

0x2bdc,	// (0x00028f77) bg_popup_fep_shadow_pane_ParamLimits

0x2bdc,	// (0x00028f77) bg_popup_fep_shadow_pane

0x2c91,	// (0x0002902c) bg_fep_hwr_top_pane_g4

0xeff3,	// (0x0003538e) bg_hwr_side_pane_g1_ParamLimits

0xeff3,	// (0x0003538e) bg_hwr_side_pane_g1

0x87ac,	// (0x0002eb47) cell_hwr_side_pane_ParamLimits

0x87ac,	// (0x0002eb47) cell_hwr_side_pane

0x2d3d,	// (0x000290d8) fep_hwr_write_pane_g1_ParamLimits

0x2d3d,	// (0x000290d8) fep_hwr_write_pane_g1

0x2d4a,	// (0x000290e5) fep_hwr_write_pane_g2_ParamLimits

0x2d4a,	// (0x000290e5) fep_hwr_write_pane_g2

0x2d57,	// (0x000290f2) fep_hwr_write_pane_g3_ParamLimits

0x2d57,	// (0x000290f2) fep_hwr_write_pane_g3

0x87cc,	// (0x0002eb67) fep_hwr_write_pane_g4_ParamLimits

0x87cc,	// (0x0002eb67) fep_hwr_write_pane_g4

0x0005,

0xf9fe,	// (0x00035d99) fep_hwr_write_pane_g_ParamLimits

0xf9fe,	// (0x00035d99) fep_hwr_write_pane_g

0x2c91,	// (0x0002902c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2c91,	// (0x0002902c) bg_fep_hwr_candidate_pane_g2

0x2d7a,	// (0x00029115) cell_hwr_candidate_pane_ParamLimits

0x2d7a,	// (0x00029115) cell_hwr_candidate_pane

0x2dbc,	// (0x00029157) fep_hwr_candidate_pane_g1_ParamLimits

0xf053,	// (0x000353ee) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf053,	// (0x000353ee) bg_popup_fep_shadow_pane_cp2

0xf1e6,	// (0x00035581) fep_vkb_top_pane_g4_ParamLimits

0xf1e6,	// (0x00035581) fep_vkb_top_pane_g4

0xf205,	// (0x000355a0) fep_vkb_side_pane_g2_ParamLimits

0xf205,	// (0x000355a0) fep_vkb_side_pane_g2

0x8449,	// (0x0002e7e4) list_setting_pane_t4_ParamLimits

0x8449,	// (0x0002e7e4) list_setting_pane_t4

0x8ff4,	// (0x0002f38f) list_setting_number_pane_t5_ParamLimits

0x8ff4,	// (0x0002f38f) list_setting_number_pane_t5

0x92bf,	// (0x0002f65a) list_double_heading_pane_cp2_ParamLimits

0x92bf,	// (0x0002f65a) list_double_heading_pane_cp2

0xc240,	// (0x000325db) list_double_heading_pane_g1_cp2_ParamLimits

0xc240,	// (0x000325db) list_double_heading_pane_g1_cp2

0xc24c,	// (0x000325e7) list_double_heading_pane_g2_cp2_ParamLimits

0xc24c,	// (0x000325e7) list_double_heading_pane_g2_cp2

0xf47f,	// (0x0003581a) list_double_heading_pane_t1_cp2_ParamLimits

0xf47f,	// (0x0003581a) list_double_heading_pane_t1_cp2

0xf495,	// (0x00035830) list_double_heading_pane_t2_cp2_ParamLimits

0xf495,	// (0x00035830) list_double_heading_pane_t2_cp2

0xba30,	// (0x00031dcb) aid_value_unit2

0x09d9,	// (0x00026d74) popup_preview_fixed_window

0xbbdb,	// (0x00031f76) bg_popup_preview_window_pane_cp02

0xf4a7,	// (0x00035842) list_preview_fixed_pane

0xf4ed,	// (0x00035888) list_empty_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_empty_pane_fp

0xf4ed,	// (0x00035888) list_single_cale_day_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_cale_day_pane_fp

0xf4ed,	// (0x00035888) list_single_graphic_heading_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_graphic_heading_pane_fp

0xf4ed,	// (0x00035888) list_single_graphic_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_graphic_pane_fp

0xf4ed,	// (0x00035888) list_single_heading_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_heading_pane_fp

0xf4ed,	// (0x00035888) list_single_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_pane_fp

0xf504,	// (0x0003589f) list_single_pane_fp_g1_ParamLimits

0xf504,	// (0x0003589f) list_single_pane_fp_g1

0x61ac,	// (0x0002c547) list_single_pane_fp_g2_ParamLimits

0x61ac,	// (0x0002c547) list_single_pane_fp_g2

0x6b38,	// (0x0002ced3) list_single_pane_fp_g3_ParamLimits

0x6b38,	// (0x0002ced3) list_single_pane_fp_g3

0xf510,	// (0x000358ab) list_single_pane_fp_g4_ParamLimits

0xf510,	// (0x000358ab) list_single_pane_fp_g4

0x0003,

0xfa49,	// (0x00035de4) list_single_pane_fp_g_ParamLimits

0xfa49,	// (0x00035de4) list_single_pane_fp_g

0x6b4c,	// (0x0002cee7) list_single_pane_fp_t1_ParamLimits

0x6b4c,	// (0x0002cee7) list_single_pane_fp_t1

0x6b63,	// (0x0002cefe) list_single_graphic_pane_fp_g1_ParamLimits

0x6b63,	// (0x0002cefe) list_single_graphic_pane_fp_g1

0xf504,	// (0x0003589f) list_single_graphic_pane_fp_g2_ParamLimits

0xf504,	// (0x0003589f) list_single_graphic_pane_fp_g2

0x61ac,	// (0x0002c547) list_single_graphic_pane_fp_g3_ParamLimits

0x61ac,	// (0x0002c547) list_single_graphic_pane_fp_g3

0x6b38,	// (0x0002ced3) list_single_graphic_pane_fp_g4_ParamLimits

0x6b38,	// (0x0002ced3) list_single_graphic_pane_fp_g4

0xf510,	// (0x000358ab) list_single_graphic_pane_fp_g5_ParamLimits

0xf510,	// (0x000358ab) list_single_graphic_pane_fp_g5

0x0004,

0xfa52,	// (0x00035ded) list_single_graphic_pane_fp_g_ParamLimits

0xfa52,	// (0x00035ded) list_single_graphic_pane_fp_g

0x6b6f,	// (0x0002cf0a) list_single_graphic_pane_fp_t1_ParamLimits

0x6b6f,	// (0x0002cf0a) list_single_graphic_pane_fp_t1

0x6b63,	// (0x0002cefe) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6b63,	// (0x0002cefe) list_single_graphic_heading_pane_fp_g1

0xf504,	// (0x0003589f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf504,	// (0x0003589f) list_single_graphic_heading_pane_fp_g2

0x61ac,	// (0x0002c547) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x61ac,	// (0x0002c547) list_single_graphic_heading_pane_fp_g3

0x6b38,	// (0x0002ced3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6b38,	// (0x0002ced3) list_single_graphic_heading_pane_fp_g4

0xf510,	// (0x000358ab) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf510,	// (0x000358ab) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa52,	// (0x00035ded) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa52,	// (0x00035ded) list_single_graphic_heading_pane_fp_g

0x6b85,	// (0x0002cf20) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6b85,	// (0x0002cf20) list_single_graphic_heading_pane_fp_t1

0x6b9b,	// (0x0002cf36) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6b9b,	// (0x0002cf36) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa5d,	// (0x00035df8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa5d,	// (0x00035df8) list_single_graphic_heading_pane_fp_t

0x6bad,	// (0x0002cf48) list_single_cale_day_pane_fp_g1_ParamLimits

0x6bad,	// (0x0002cf48) list_single_cale_day_pane_fp_g1

0xf51c,	// (0x000358b7) list_single_cale_day_pane_fp_g2_ParamLimits

0xf51c,	// (0x000358b7) list_single_cale_day_pane_fp_g2

0x6be5,	// (0x0002cf80) list_single_cale_day_pane_fp_g3_ParamLimits

0x6be5,	// (0x0002cf80) list_single_cale_day_pane_fp_g3

0x6c0d,	// (0x0002cfa8) list_single_cale_day_pane_fp_g4_ParamLimits

0x6c0d,	// (0x0002cfa8) list_single_cale_day_pane_fp_g4

0x6c31,	// (0x0002cfcc) list_single_cale_day_pane_fp_g5_ParamLimits

0x6c31,	// (0x0002cfcc) list_single_cale_day_pane_fp_g5

0x0004,

0xfa62,	// (0x00035dfd) list_single_cale_day_pane_fp_g_ParamLimits

0xfa62,	// (0x00035dfd) list_single_cale_day_pane_fp_g

0x6c55,	// (0x0002cff0) list_single_cale_day_pane_fp_t1_ParamLimits

0x6c55,	// (0x0002cff0) list_single_cale_day_pane_fp_t1

0x6c7b,	// (0x0002d016) list_single_cale_day_pane_fp_t2_ParamLimits

0x6c7b,	// (0x0002d016) list_single_cale_day_pane_fp_t2

0x6c94,	// (0x0002d02f) list_single_cale_day_pane_fp_t3_ParamLimits

0x6c94,	// (0x0002d02f) list_single_cale_day_pane_fp_t3

0x0002,

0xfa6d,	// (0x00035e08) list_single_cale_day_pane_fp_t_ParamLimits

0xfa6d,	// (0x00035e08) list_single_cale_day_pane_fp_t

0xf504,	// (0x0003589f) list_empty_pane_fp_g1_ParamLimits

0xf504,	// (0x0003589f) list_empty_pane_fp_g1

0x6cad,	// (0x0002d048) list_empty_pane_fp_t1

0x6cbb,	// (0x0002d056) list_empty_pane_fp_t2

0x0001,

0xfa74,	// (0x00035e0f) list_empty_pane_fp_t

0xf504,	// (0x0003589f) list_single_heading_pane_fp_g1_ParamLimits

0xf504,	// (0x0003589f) list_single_heading_pane_fp_g1

0x61ac,	// (0x0002c547) list_single_heading_pane_fp_g2_ParamLimits

0x61ac,	// (0x0002c547) list_single_heading_pane_fp_g2

0x6b38,	// (0x0002ced3) list_single_heading_pane_fp_g3_ParamLimits

0x6b38,	// (0x0002ced3) list_single_heading_pane_fp_g3

0x0002,

0xfa79,	// (0x00035e14) list_single_heading_pane_fp_g_ParamLimits

0xfa79,	// (0x00035e14) list_single_heading_pane_fp_g

0x6cc9,	// (0x0002d064) list_single_heading_pane_fp_t1_ParamLimits

0x6cc9,	// (0x0002d064) list_single_heading_pane_fp_t1

0x6cdb,	// (0x0002d076) list_single_heading_pane_fp_t2_ParamLimits

0x6cdb,	// (0x0002d076) list_single_heading_pane_fp_t2

0x0001,

0xfa80,	// (0x00035e1b) list_single_heading_pane_fp_t_ParamLimits

0xfa80,	// (0x00035e1b) list_single_heading_pane_fp_t

0xc389,	// (0x00032724) aid_size_cell_fast

0xbbbe,	// (0x00031f59) soft_indicator_pane_cp1_t1

0xc3c6,	// (0x00032761) cell_app_pane_cp2_ParamLimits

0xc3c6,	// (0x00032761) cell_app_pane_cp2

0x2bfe,	// (0x00028f99) fep_hwr_candidate_drop_down_list_pane

0x2dd6,	// (0x00029171) fep_hwr_candidate_pane_g3_ParamLimits

0x2dd6,	// (0x00029171) fep_hwr_candidate_pane_g3

0xb37b,	// (0x00031716) fep_hwr_candidate_pane_g4_ParamLimits

0xb37b,	// (0x00031716) fep_hwr_candidate_pane_g4

0x0002,

0xfa0b,	// (0x00035da6) fep_hwr_candidate_pane_g_ParamLimits

0xfa0b,	// (0x00035da6) fep_hwr_candidate_pane_g

0xf0cd,	// (0x00035468) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf0cd,	// (0x00035468) fep_vkb_candidate_drop_down_list_pane

0xf41c,	// (0x000357b7) fep_vkb_candidate_pane_g3

0xf424,	// (0x000357bf) fep_vkb_candidate_pane_g4

0x0002,

0x02cf,	// (0x0002666a) fep_vkb_candidate_pane_g

0x2f2b,	// (0x000292c6) cell_hwr_candidate_pane_g1_ParamLimits

0x2f39,	// (0x000292d4) cell_hwr_candidate_pane_g3_ParamLimits

0x2f39,	// (0x000292d4) cell_hwr_candidate_pane_g3

0x43f3,	// (0x0002a78e) cell_hwr_candidate_pane_g4_ParamLimits

0x43f3,	// (0x0002a78e) cell_hwr_candidate_pane_g4

0x0002,

0xfa3b,	// (0x00035dd6) cell_hwr_candidate_pane_g_ParamLimits

0xfa3b,	// (0x00035dd6) cell_hwr_candidate_pane_g

0xf43b,	// (0x000357d6) cell_vkb_candidate_pane_g3_ParamLimits

0xf43b,	// (0x000357d6) cell_vkb_candidate_pane_g3

0xf456,	// (0x000357f1) cell_vkb_candidate_pane_g4_ParamLimits

0xf456,	// (0x000357f1) cell_vkb_candidate_pane_g4

0x2f78,	// (0x00029313) cell_app_pane_cp2_g1_ParamLimits

0x2f78,	// (0x00029313) cell_app_pane_cp2_g1

0x2f96,	// (0x00029331) cell_app_pane_cp2_g2_ParamLimits

0x2f96,	// (0x00029331) cell_app_pane_cp2_g2

0x0001,

0xfa85,	// (0x00035e20) cell_app_pane_cp2_g_ParamLimits

0xfa85,	// (0x00035e20) cell_app_pane_cp2_g

0x2fa2,	// (0x0002933d) cell_app_pane_cp2_t1_ParamLimits

0x2fa2,	// (0x0002933d) cell_app_pane_cp2_t1

0xc226,	// (0x000325c1) grid_highlight_pane_cp1_ParamLimits

0xc226,	// (0x000325c1) grid_highlight_pane_cp1

0x2fb4,	// (0x0002934f) cell_hwr_candidate_pane_cp1_ParamLimits

0x2fb4,	// (0x0002934f) cell_hwr_candidate_pane_cp1

0x2f2b,	// (0x000292c6) fep_hwr_candidate_drop_down_list_pane_g1

0x2fd3,	// (0x0002936e) fep_hwr_candidate_drop_down_list_pane_g2

0x2fe0,	// (0x0002937b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfa8a,	// (0x00035e25) fep_hwr_candidate_drop_down_list_pane_g

0x2fed,	// (0x00029388) fep_hwr_candidate_drop_down_list_scroll_pane

0x2ff6,	// (0x00029391) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2ff6,	// (0x00029391) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3003,	// (0x0002939e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3003,	// (0x0002939e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3010,	// (0x000293ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3010,	// (0x000293ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x301d,	// (0x000293b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x301d,	// (0x000293b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x3038,	// (0x000293d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3038,	// (0x000293d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3053,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3053,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x306e,	// (0x00029409) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x306e,	// (0x00029409) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3089,	// (0x00029424) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3089,	// (0x00029424) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa91,	// (0x00035e2c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa91,	// (0x00035e2c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x30a4,	// (0x0002943f) cell_vkb_candidate_pane_cp1_ParamLimits

0x30a4,	// (0x0002943f) cell_vkb_candidate_pane_cp1

0xf1e6,	// (0x00035581) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf1e6,	// (0x00035581) fep_vkb_candidate_drop_down_list_pane_g1

0x30c4,	// (0x0002945f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x30c4,	// (0x0002945f) fep_vkb_candidate_drop_down_list_pane_g2

0x30d1,	// (0x0002946c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x30d1,	// (0x0002946c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfaa2,	// (0x00035e3d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfaa2,	// (0x00035e3d) fep_vkb_candidate_drop_down_list_pane_g

0x30de,	// (0x00029479) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x30de,	// (0x00029479) fep_vkb_candidate_drop_down_list_scroll_pane

0x30eb,	// (0x00029486) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x30eb,	// (0x00029486) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x30f8,	// (0x00029493) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x30f8,	// (0x00029493) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x3104,	// (0x0002949f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3104,	// (0x0002949f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf528,	// (0x000358c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf528,	// (0x000358c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf549,	// (0x000358e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf549,	// (0x000358e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x3110,	// (0x000294ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3110,	// (0x000294ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x3131,	// (0x000294cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3131,	// (0x000294cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x3152,	// (0x000294ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3152,	// (0x000294ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfaa9,	// (0x00035e44) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfaa9,	// (0x00035e44) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8c4d,	// (0x0002efe8) title_pane_g1_ParamLimits

0x8c5e,	// (0x0002eff9) title_pane_g2_ParamLimits

0xf56a,	// (0x00035905) title_pane_g_ParamLimits

0xc74e,	// (0x00032ae9) aid_call2_pane

0xc756,	// (0x00032af1) aid_call_pane

0xc75e,	// (0x00032af9) popup_clock_analogue_window_g1

0xc75e,	// (0x00032af9) popup_clock_analogue_window_g2

0x10ef,	// (0x0002748a) popup_clock_analogue_window_g3

0x10f8,	// (0x00027493) popup_clock_analogue_window_g4

0xba42,	// (0x00031ddd) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00035aaf) popup_clock_analogue_window_g

0x1100,	// (0x0002749b) popup_clock_analogue_window_t1

0x1137,	// (0x000274d2) clock_digital_number_pane_ParamLimits

0x1137,	// (0x000274d2) clock_digital_number_pane

0x1143,	// (0x000274de) clock_digital_number_pane_cp02_ParamLimits

0x1143,	// (0x000274de) clock_digital_number_pane_cp02

0x114f,	// (0x000274ea) clock_digital_number_pane_cp03_ParamLimits

0x114f,	// (0x000274ea) clock_digital_number_pane_cp03

0x115b,	// (0x000274f6) clock_digital_number_pane_cp04_ParamLimits

0x115b,	// (0x000274f6) clock_digital_number_pane_cp04

0x1167,	// (0x00027502) clock_digital_separator_pane_ParamLimits

0x1167,	// (0x00027502) clock_digital_separator_pane

0x1173,	// (0x0002750e) popup_clock_digital_window_t1_ParamLimits

0x1173,	// (0x0002750e) popup_clock_digital_window_t1

0xba42,	// (0x00031ddd) clock_digital_number_pane_g1

0xba42,	// (0x00031ddd) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00035aba) clock_digital_number_pane_g

0xba42,	// (0x00031ddd) clock_digital_separator_pane_g1

0xba42,	// (0x00031ddd) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00035aba) clock_digital_separator_pane_g

0x9ccf,	// (0x0003006a) aid_fill_nsta_ParamLimits

0x9dfe,	// (0x00030199) indicator_nsta_pane_ParamLimits

0xd0a8,	// (0x00033443) popup_clock_analogue_window

0xd0a8,	// (0x00033443) popup_clock_digital_window

0xcff6,	// (0x00033391) grid_indicator_nsta_pane_ParamLimits

0xec05,	// (0x00034fa0) clock_nsta_pane_t2

0x0001,

0x0222,	// (0x000265bd) clock_nsta_pane_t

0x10b3,	// (0x0002744e) aid_size_max_handle

0x848c,	// (0x0002e827) aid_size_min_handle

0xcc6d,	// (0x00033008) editor_scroll_pane

0x316d,	// (0x00029508) ex_editor_pane

0xc345,	// (0x000326e0) scroll_pane_cp13

0xc1c5,	// (0x00032560) scroll_pane_cp14

0xc788,	// (0x00032b23) scroll_pane_cp36

0x92d0,	// (0x0002f66b) list_single_graphic_hl_pane_cp2_ParamLimits

0x92d0,	// (0x0002f66b) list_single_graphic_hl_pane_cp2

0xa502,	// (0x0003089d) list_single_graphic_hl_pane_ParamLimits

0xa502,	// (0x0003089d) list_single_graphic_hl_pane

0x6cf1,	// (0x0002d08c) aid_size_min_hl_cp1

0x3175,	// (0x00029510) list_highlight_pane_cp34_ParamLimits

0x3175,	// (0x00029510) list_highlight_pane_cp34

0x3186,	// (0x00029521) list_single_graphic_hl_pane_g1_ParamLimits

0x3186,	// (0x00029521) list_single_graphic_hl_pane_g1

0x9521,	// (0x0002f8bc) list_single_graphic_hl_pane_g2_ParamLimits

0x9521,	// (0x0002f8bc) list_single_graphic_hl_pane_g2

0x9521,	// (0x0002f8bc) list_single_graphic_hl_pane_g3_ParamLimits

0x9521,	// (0x0002f8bc) list_single_graphic_hl_pane_g3

0x6d06,	// (0x0002d0a1) list_single_graphic_hl_pane_g4_ParamLimits

0x6d06,	// (0x0002d0a1) list_single_graphic_hl_pane_g4

0x6d12,	// (0x0002d0ad) list_single_graphic_hl_pane_g5_ParamLimits

0x6d12,	// (0x0002d0ad) list_single_graphic_hl_pane_g5

0x0004,

0xfaba,	// (0x00035e55) list_single_graphic_hl_pane_g_ParamLimits

0xfaba,	// (0x00035e55) list_single_graphic_hl_pane_g

0x6d26,	// (0x0002d0c1) list_single_graphic_hl_pane_t1_ParamLimits

0x6d26,	// (0x0002d0c1) list_single_graphic_hl_pane_t1

0x3193,	// (0x0002952e) aid_size_min_hl_cp2

0x319c,	// (0x00029537) list_highlight_pane_cp34_cp2_ParamLimits

0x319c,	// (0x00029537) list_highlight_pane_cp34_cp2

0x3186,	// (0x00029521) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x3186,	// (0x00029521) list_single_graphic_hl_pane_g1_cp2

0x31a9,	// (0x00029544) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x31a9,	// (0x00029544) list_single_graphic_hl_pane_g2_cp2

0x31b5,	// (0x00029550) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x31b5,	// (0x00029550) list_single_graphic_hl_pane_g3_cp2

0xcba4,	// (0x00032f3f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcba4,	// (0x00032f3f) list_single_graphic_hl_pane_g4_cp2

0x31c3,	// (0x0002955e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x31c3,	// (0x0002955e) list_single_graphic_hl_pane_g5_cp2

0x84be,	// (0x0002e859) control_pane_g4_ParamLimits

0x84be,	// (0x0002e859) control_pane_g4

0xc37d,	// (0x00032718) bg_popup_sub_pane_cp10_ParamLimits

0xef69,	// (0x00035304) list_choice_list_pane_ParamLimits

0xef78,	// (0x00035313) scroll_pane_cp23

0xbbdb,	// (0x00031f76) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4a7,	// (0x00035842) list_preview_fixed_pane_ParamLimits

0xf4bd,	// (0x00035858) list_preview_fixed_pane_cp_ParamLimits

0xf4bd,	// (0x00035858) list_preview_fixed_pane_cp

0xf4c9,	// (0x00035864) popup_preview_fixed_window_g1_ParamLimits

0xf4c9,	// (0x00035864) popup_preview_fixed_window_g1

0xf4d5,	// (0x00035870) popup_preview_fixed_window_g2_ParamLimits

0xf4d5,	// (0x00035870) popup_preview_fixed_window_g2

0x0002,

0xfa42,	// (0x00035ddd) popup_preview_fixed_window_g_ParamLimits

0xfa42,	// (0x00035ddd) popup_preview_fixed_window_g

0x0fa2,	// (0x0002733d) aid_navi_side_left_pane_ParamLimits

0x0fb7,	// (0x00027352) aid_navi_side_right_pane_ParamLimits

0x0fcf,	// (0x0002736a) navi_icon_pane_stacon_ParamLimits

0x0fe3,	// (0x0002737e) navi_navi_pane_stacon_ParamLimits

0x0fcf,	// (0x0002736a) navi_text_pane_stacon_ParamLimits

0xba38,	// (0x00031dd3) main_text_info_pane

0x31ed,	// (0x00029588) listscroll_text_info_pane

0x31f5,	// (0x00029590) list_text_info_pane_ParamLimits

0x31f5,	// (0x00029590) list_text_info_pane

0x3204,	// (0x0002959f) scroll_pane_cp24_ParamLimits

0x3204,	// (0x0002959f) scroll_pane_cp24

0xa8e5,	// (0x00030c80) list_text_info_pane_t1_ParamLimits

0xa8e5,	// (0x00030c80) list_text_info_pane_t1

0x965f,	// (0x0002f9fa) popup_fast_swap2_window_ParamLimits

0x965f,	// (0x0002f9fa) popup_fast_swap2_window

0x325b,	// (0x000295f6) aid_size_cell_fast2

0xba38,	// (0x00031dd3) bg_popup_window_pane_cp17

0xd54c,	// (0x000338e7) heading_pane_cp2

0xbef8,	// (0x00032293) listscroll_fast2_pane

0x3265,	// (0x00029600) grid_fast2_pane

0x326f,	// (0x0002960a) listscroll_fast2_pane_g1

0x3277,	// (0x00029612) listscroll_fast2_pane_g2

0x0001,

0xfac5,	// (0x00035e60) listscroll_fast2_pane_g

0xc345,	// (0x000326e0) scroll_pane_cp26

0x3281,	// (0x0002961c) cell_fast2_pane_ParamLimits

0x3281,	// (0x0002961c) cell_fast2_pane

0x3296,	// (0x00029631) cell_fast2_pane_g1

0x329f,	// (0x0002963a) cell_fast2_pane_g2

0x32a8,	// (0x00029643) cell_fast2_pane_g3

0x0002,

0xfaca,	// (0x00035e65) cell_fast2_pane_g

0xbf8c,	// (0x00032327) grid_highlight_pane_cp9

0xbfa1,	// (0x0003233c) main_eswt_pane_ParamLimits

0xbfa1,	// (0x0003233c) main_eswt_pane

0x3219,	// (0x000295b4) list_single_text_info_pane

0x32b0,	// (0x0002964b) eswt_ctrl_button_pane

0x32b0,	// (0x0002964b) eswt_ctrl_canvas_pane

0x32b8,	// (0x00029653) eswt_ctrl_combo_pane

0x32b0,	// (0x0002964b) eswt_ctrl_default_pane

0x32b0,	// (0x0002964b) eswt_ctrl_label_pane

0x32c0,	// (0x0002965b) eswt_ctrl_wait_pane

0x32c8,	// (0x00029663) eswt_shell_pane

0xba38,	// (0x00031dd3) listscroll_eswt_app_pane

0x32e8,	// (0x00029683) popup_eswt_tasktip_window_ParamLimits

0x32e8,	// (0x00029683) popup_eswt_tasktip_window

0xd2a5,	// (0x00033640) bg_popup_window_pane_cp18

0x32f9,	// (0x00029694) eswt_control_pane_g1_ParamLimits

0x32f9,	// (0x00029694) eswt_control_pane_g1

0x3306,	// (0x000296a1) eswt_control_pane_g2_ParamLimits

0x3306,	// (0x000296a1) eswt_control_pane_g2

0x3313,	// (0x000296ae) eswt_control_pane_g3_ParamLimits

0x3313,	// (0x000296ae) eswt_control_pane_g3

0x3320,	// (0x000296bb) eswt_control_pane_g4_ParamLimits

0x3320,	// (0x000296bb) eswt_control_pane_g4

0x0003,

0xfad1,	// (0x00035e6c) eswt_control_pane_g_ParamLimits

0xfad1,	// (0x00035e6c) eswt_control_pane_g

0xc226,	// (0x000325c1) bg_button_pane_ParamLimits

0xc226,	// (0x000325c1) bg_button_pane

0xbfa1,	// (0x0003233c) common_borders_pane_copy2_ParamLimits

0xbfa1,	// (0x0003233c) common_borders_pane_copy2

0x332d,	// (0x000296c8) control_button_pane_g1_ParamLimits

0x332d,	// (0x000296c8) control_button_pane_g1

0x3339,	// (0x000296d4) control_button_pane_g2_ParamLimits

0x3339,	// (0x000296d4) control_button_pane_g2

0x3345,	// (0x000296e0) control_button_pane_g3_ParamLimits

0x3345,	// (0x000296e0) control_button_pane_g3

0x0002,

0xfada,	// (0x00035e75) control_button_pane_g_ParamLimits

0xfada,	// (0x00035e75) control_button_pane_g

0x3359,	// (0x000296f4) control_button_pane_t1

0x3367,	// (0x00029702) control_button_pane_t2

0x0001,

0xfae1,	// (0x00035e7c) control_button_pane_t

0xd1b5,	// (0x00033550) bg_button_pane_g1

0xd1c5,	// (0x00033560) bg_button_pane_g2

0xd1bd,	// (0x00033558) bg_button_pane_g3

0xd1d5,	// (0x00033570) bg_button_pane_g4

0xd1cd,	// (0x00033568) bg_button_pane_g5

0xd1dd,	// (0x00033578) bg_button_pane_g6

0xd1e5,	// (0x00033580) bg_button_pane_g7

0xd1f5,	// (0x00033590) bg_button_pane_g8

0xd1ed,	// (0x00033588) bg_button_pane_g9

0x0008,

0xf872,	// (0x00035c0d) bg_button_pane_g

0xef24,	// (0x000352bf) common_borders_pane_ParamLimits

0xef24,	// (0x000352bf) common_borders_pane

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy1_ParamLimits

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy1

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy1_ParamLimits

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy1

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy1_ParamLimits

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy1

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy1_ParamLimits

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy1

0xef5f,	// (0x000352fa) bg_eswt_ctrl_canvas_pane_g1

0xef24,	// (0x000352bf) common_borders_pane_cp2_ParamLimits

0xef24,	// (0x000352bf) common_borders_pane_cp2

0xef24,	// (0x000352bf) common_borders_pane_cp3_ParamLimits

0xef24,	// (0x000352bf) common_borders_pane_cp3

0x3375,	// (0x00029710) separator_horizontal_pane

0x337d,	// (0x00029718) separator_vertical_pane

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy2_ParamLimits

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy2

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy2_ParamLimits

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy2

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy2_ParamLimits

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy2

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy2_ParamLimits

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy2

0xba38,	// (0x00031dd3) common_borders_pane_cp4

0x3386,	// (0x00029721) separator_horizontal_pane_g1

0x338f,	// (0x0002972a) separator_horizontal_pane_g2

0x3398,	// (0x00029733) separator_horizontal_pane_g3

0x0002,

0xfae6,	// (0x00035e81) separator_horizontal_pane_g

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy3_ParamLimits

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy3

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy3_ParamLimits

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy3

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy3_ParamLimits

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy3

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy3_ParamLimits

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy3

0xba38,	// (0x00031dd3) common_borders_pane_cp5

0x33a1,	// (0x0002973c) separator_vertical_pane_g1

0x33aa,	// (0x00029745) separator_vertical_pane_g2

0x33b3,	// (0x0002974e) separator_vertical_pane_g3

0x0002,

0xfaed,	// (0x00035e88) separator_vertical_pane_g

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy4_ParamLimits

0x32f9,	// (0x00029694) eswt_control_pane_g1_copy4

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy4_ParamLimits

0x3306,	// (0x000296a1) eswt_control_pane_g2_copy4

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy4_ParamLimits

0x3313,	// (0x000296ae) eswt_control_pane_g3_copy4

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy4_ParamLimits

0x3320,	// (0x000296bb) eswt_control_pane_g4_copy4

0xa903,	// (0x00030c9e) eswt_ctrl_combo_button_pane

0xa90b,	// (0x00030ca6) eswt_ctrl_input_pane

0xa913,	// (0x00030cae) popup_choice_list_window_cp70

0xa91b,	// (0x00030cb6) eswt_ctrl_input_pane_t1

0xba38,	// (0x00031dd3) input_focus_pane_cp70

0xef24,	// (0x000352bf) bg_button_pane_cp70_ParamLimits

0xef24,	// (0x000352bf) bg_button_pane_cp70

0xa929,	// (0x00030cc4) eswt_ctrl_combo_button_pane_g1

0x33ea,	// (0x00029785) wait_bar_pane_cp70

0xd2a5,	// (0x00033640) bg_popup_window_pane_cp70_ParamLimits

0xd2a5,	// (0x00033640) bg_popup_window_pane_cp70

0x33f2,	// (0x0002978d) popup_eswt_tasktip_window_t1

0x3408,	// (0x000297a3) wait_bar_pane_cp71_ParamLimits

0x3408,	// (0x000297a3) wait_bar_pane_cp71

0x3414,	// (0x000297af) grid_eswt_app_pane

0xc594,	// (0x0003292f) scroll_pane_cp70

0xa931,	// (0x00030ccc) cell_eswt_app_pane_ParamLimits

0xa931,	// (0x00030ccc) cell_eswt_app_pane

0xa95b,	// (0x00030cf6) cell_eswt_app_pane_g1_ParamLimits

0xa95b,	// (0x00030cf6) cell_eswt_app_pane_g1

0xa98a,	// (0x00030d25) cell_eswt_app_pane_g2_ParamLimits

0xa98a,	// (0x00030d25) cell_eswt_app_pane_g2

0x0001,

0xfaf4,	// (0x00035e8f) cell_eswt_app_pane_g_ParamLimits

0xfaf4,	// (0x00035e8f) cell_eswt_app_pane_g

0xa9b3,	// (0x00030d4e) cell_eswt_app_pane_t1_ParamLimits

0xa9b3,	// (0x00030d4e) cell_eswt_app_pane_t1

0x34db,	// (0x00029876) grid_highlight_pane_cp70_ParamLimits

0x34db,	// (0x00029876) grid_highlight_pane_cp70

0xcb40,	// (0x00032edb) set_content_pane_g1

0xce44,	// (0x000331df) status_small_volume_pane

0x34e7,	// (0x00029882) status_small_volume_pane_g1

0x34ef,	// (0x0002988a) volume_small2_pane

0x34f8,	// (0x00029893) volume_small2_pane_g1

0x3501,	// (0x0002989c) volume_small2_pane_g2

0x350a,	// (0x000298a5) volume_small2_pane_g3

0x3513,	// (0x000298ae) volume_small2_pane_g4

0x351c,	// (0x000298b7) volume_small2_pane_g5

0x3525,	// (0x000298c0) volume_small2_pane_g6

0x352e,	// (0x000298c9) volume_small2_pane_g7

0x3537,	// (0x000298d2) volume_small2_pane_g8

0x3540,	// (0x000298db) volume_small2_pane_g9

0x3549,	// (0x000298e4) volume_small2_pane_g10

0x0009,

0xfaf9,	// (0x00035e94) volume_small2_pane_g

0xf301,	// (0x0003569c) fep_vkb_top_text_pane_g1_ParamLimits

0xa88d,	// (0x00030c28) fep_vkb_top_text_pane_t1_ParamLimits

0xf4e1,	// (0x0003587c) popup_preview_fixed_window_g3_ParamLimits

0xf4e1,	// (0x0003587c) popup_preview_fixed_window_g3

0x9c62,	// (0x0002fffd) popup_toolbar_trans_pane

0xa37a,	// (0x00030715) aid_height_set_list_ParamLimits

0xd953,	// (0x00033cee) aid_size_parent_ParamLimits

0xc37d,	// (0x00032718) list_highlight_pane_cp2_ParamLimits

0xcb40,	// (0x00032edb) set_content_pane_g1_ParamLimits

0xa515,	// (0x000308b0) list_single_image_pane_ParamLimits

0xa515,	// (0x000308b0) list_single_image_pane

0xa9e5,	// (0x00030d80) aid_size_cell_image_ParamLimits

0xa9e5,	// (0x00030d80) aid_size_cell_image

0xa9f2,	// (0x00030d8d) grid_single_image_pane_ParamLimits

0xa9f2,	// (0x00030d8d) grid_single_image_pane

0xc240,	// (0x000325db) list_single_image_pane_g1_ParamLimits

0xc240,	// (0x000325db) list_single_image_pane_g1

0xc24c,	// (0x000325e7) list_single_image_pane_g2_ParamLimits

0xc24c,	// (0x000325e7) list_single_image_pane_g2

0x0001,

0x03b5,	// (0x00026750) list_single_image_pane_g_ParamLimits

0x03b5,	// (0x00026750) list_single_image_pane_g

0x356b,	// (0x00029906) list_single_image_pane_t1_ParamLimits

0x356b,	// (0x00029906) list_single_image_pane_t1

0xa9fe,	// (0x00030d99) cell_image_list_pane_ParamLimits

0xa9fe,	// (0x00030d99) cell_image_list_pane

0xaa12,	// (0x00030dad) cell_image_list_pane_g1

0xaa1b,	// (0x00030db6) cell_image_list_pane_g2

0x0001,

0xfb0e,	// (0x00035ea9) cell_image_list_pane_g

0x35a7,	// (0x00029942) aid_size_cell_tb_trans_pane

0xc226,	// (0x000325c1) bg_tb_trans_pane

0x35b9,	// (0x00029954) grid_tb_trans_pane

0xd1b5,	// (0x00033550) bg_tb_trans_pane_g1

0xd1c5,	// (0x00033560) bg_tb_trans_pane_g2

0xd1bd,	// (0x00033558) bg_tb_trans_pane_g3

0xd1d5,	// (0x00033570) bg_tb_trans_pane_g4

0xd1cd,	// (0x00033568) bg_tb_trans_pane_g5

0xd1f5,	// (0x00033590) bg_tb_trans_pane_g6

0xd1ed,	// (0x00033588) bg_tb_trans_pane_g7

0xd1dd,	// (0x00033578) bg_tb_trans_pane_g8

0xd1e5,	// (0x00033580) bg_tb_trans_pane_g9

0x0008,

0xfb13,	// (0x00035eae) bg_tb_trans_pane_g

0x35cd,	// (0x00029968) cell_toolbar_trans_pane_ParamLimits

0x35cd,	// (0x00029968) cell_toolbar_trans_pane

0xef5f,	// (0x000352fa) cell_toolbar_trans_pane_g1

0xa736,	// (0x00030ad1) list_form2_midp_pane_t1

0xa744,	// (0x00030adf) list_form2_midp_pane_t2

0x0001,

0xf9eb,	// (0x00035d86) list_form2_midp_pane_t

0xecbc,	// (0x00035057) scroll_pane_cp51_ParamLimits

0xee32,	// (0x000351cd) form2_midp_wait_pane_g1

0xee3b,	// (0x000351d6) form2_midp_wait_pane_g2

0xee44,	// (0x000351df) form2_midp_wait_pane_g3

0x0002,

0x027d,	// (0x00026618) form2_midp_wait_pane_g

0xbaa8,	// (0x00031e43) list_highlight_pane_cp21_ParamLimits

0xee64,	// (0x000351ff) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xee73,	// (0x0003520e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6818,	// (0x0002cbb3) list_single_2graphic_im_pane_ParamLimits

0x6818,	// (0x0002cbb3) list_single_2graphic_im_pane

0xaa24,	// (0x00030dbf) list_single_2graphic_im_pane_g1_ParamLimits

0xaa24,	// (0x00030dbf) list_single_2graphic_im_pane_g1

0xaa35,	// (0x00030dd0) list_single_2graphic_im_pane_g2_ParamLimits

0xaa35,	// (0x00030dd0) list_single_2graphic_im_pane_g2

0xaa41,	// (0x00030ddc) list_single_2graphic_im_pane_g3_ParamLimits

0xaa41,	// (0x00030ddc) list_single_2graphic_im_pane_g3

0x0003,

0xfb26,	// (0x00035ec1) list_single_2graphic_im_pane_g_ParamLimits

0xfb26,	// (0x00035ec1) list_single_2graphic_im_pane_g

0xaa55,	// (0x00030df0) list_single_2graphic_im_pane_t1_ParamLimits

0xaa55,	// (0x00030df0) list_single_2graphic_im_pane_t1

0xf4ed,	// (0x00035888) list_single_graphic_2heading_pane_fp_ParamLimits

0xf4ed,	// (0x00035888) list_single_graphic_2heading_pane_fp

0x6b63,	// (0x0002cefe) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6b63,	// (0x0002cefe) list_single_graphic_2heading_pane_fp_g1

0xf504,	// (0x0003589f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf504,	// (0x0003589f) list_single_graphic_2heading_pane_fp_g2

0x61ac,	// (0x0002c547) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x61ac,	// (0x0002c547) list_single_graphic_2heading_pane_fp_g3

0x6b38,	// (0x0002ced3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6b38,	// (0x0002ced3) list_single_graphic_2heading_pane_fp_g4

0xf510,	// (0x000358ab) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf510,	// (0x000358ab) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa52,	// (0x00035ded) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa52,	// (0x00035ded) list_single_graphic_2heading_pane_fp_g

0x6d3c,	// (0x0002d0d7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6d3c,	// (0x0002d0d7) list_single_graphic_2heading_pane_fp_t1

0x6b9b,	// (0x0002cf36) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6b9b,	// (0x0002cf36) list_single_graphic_2heading_pane_fp_t2

0x6d52,	// (0x0002d0ed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6d52,	// (0x0002d0ed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb2f,	// (0x00035eca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb2f,	// (0x00035eca) list_single_graphic_2heading_pane_fp_t

0xefff,	// (0x0003539a) fep_hwr_write_pane_g5_ParamLimits

0xefff,	// (0x0003539a) fep_hwr_write_pane_g5

0xf00b,	// (0x000353a6) fep_hwr_write_pane_g6_ParamLimits

0xf00b,	// (0x000353a6) fep_hwr_write_pane_g6

0x32c8,	// (0x00029663) eswt_shell_pane_ParamLimits

0xd2a5,	// (0x00033640) bg_popup_window_pane_cp18_ParamLimits

0xe291,	// (0x0003462c) heading_pane_cp70

0x33f2,	// (0x0002978d) popup_eswt_tasktip_window_t1_ParamLimits

0x9d23,	// (0x000300be) aid_touch_tab_arrow_left

0x9d39,	// (0x000300d4) aid_touch_tab_arrow_right

0x8c76,	// (0x0002f011) title_pane_g3_ParamLimits

0x8c76,	// (0x0002f011) title_pane_g3

0xc1e5,	// (0x00032580) set_value_pane_g1

0x9c62,	// (0x0002fffd) popup_toolbar_trans_pane_ParamLimits

0x35a7,	// (0x00029942) aid_size_cell_tb_trans_pane_ParamLimits

0xc226,	// (0x000325c1) bg_tb_trans_pane_ParamLimits

0x35b9,	// (0x00029954) grid_tb_trans_pane_ParamLimits

0xbbdb,	// (0x00031f76) cont_note_pane_ParamLimits

0xbbdb,	// (0x00031f76) cont_note_pane

0xbfa1,	// (0x0003233c) cont_snote2_single_text_pane_ParamLimits

0xbfa1,	// (0x0003233c) cont_snote2_single_text_pane

0xbfa1,	// (0x0003233c) cont_snote2_single_graphic_pane_ParamLimits

0xbfa1,	// (0x0003233c) cont_snote2_single_graphic_pane

0xd762,	// (0x00033afd) cont_note_wait_pane_ParamLimits

0xd762,	// (0x00033afd) cont_note_wait_pane

0xd762,	// (0x00033afd) cont_note_image_pane_ParamLimits

0xd762,	// (0x00033afd) cont_note_image_pane

0x3661,	// (0x000299fc) popup_note2_window_g1_ParamLimits

0x3661,	// (0x000299fc) popup_note2_window_g1

0x3692,	// (0x00029a2d) popup_note2_window_t1_ParamLimits

0x3692,	// (0x00029a2d) popup_note2_window_t1

0x36d7,	// (0x00029a72) popup_note2_window_t2_ParamLimits

0x36d7,	// (0x00029a72) popup_note2_window_t2

0x371c,	// (0x00029ab7) popup_note2_window_t3_ParamLimits

0x371c,	// (0x00029ab7) popup_note2_window_t3

0x3761,	// (0x00029afc) popup_note2_window_t4_ParamLimits

0x3761,	// (0x00029afc) popup_note2_window_t4

0xbd8a,	// (0x00032125) popup_note2_window_t5_ParamLimits

0xbd8a,	// (0x00032125) popup_note2_window_t5

0x0004,

0xfb3b,	// (0x00035ed6) popup_note2_window_t_ParamLimits

0xfb3b,	// (0x00035ed6) popup_note2_window_t

0x3790,	// (0x00029b2b) popup_note2_image_window_g1_ParamLimits

0x3790,	// (0x00029b2b) popup_note2_image_window_g1

0x379c,	// (0x00029b37) popup_note2_image_window_g2_ParamLimits

0x379c,	// (0x00029b37) popup_note2_image_window_g2

0x0001,

0xfb46,	// (0x00035ee1) popup_note2_image_window_g_ParamLimits

0xfb46,	// (0x00035ee1) popup_note2_image_window_g

0x37ae,	// (0x00029b49) popup_note2_image_window_t1_ParamLimits

0x37ae,	// (0x00029b49) popup_note2_image_window_t1

0x37c6,	// (0x00029b61) popup_note2_image_window_t2_ParamLimits

0x37c6,	// (0x00029b61) popup_note2_image_window_t2

0x37de,	// (0x00029b79) popup_note2_image_window_t3_ParamLimits

0x37de,	// (0x00029b79) popup_note2_image_window_t3

0x0002,

0xfb4b,	// (0x00035ee6) popup_note2_image_window_t_ParamLimits

0xfb4b,	// (0x00035ee6) popup_note2_image_window_t

0xd770,	// (0x00033b0b) popup_note2_wait_window_g1_ParamLimits

0xd770,	// (0x00033b0b) popup_note2_wait_window_g1

0xd77c,	// (0x00033b17) popup_note2_wait_window_g2_ParamLimits

0xd77c,	// (0x00033b17) popup_note2_wait_window_g2

0xd788,	// (0x00033b23) popup_note2_wait_window_g3_ParamLimits

0xd788,	// (0x00033b23) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x00035bef) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x00035bef) popup_note2_wait_window_g

0x37fa,	// (0x00029b95) popup_note2_wait_window_t1_ParamLimits

0x37fa,	// (0x00029b95) popup_note2_wait_window_t1

0x3818,	// (0x00029bb3) popup_note2_wait_window_t2_ParamLimits

0x3818,	// (0x00029bb3) popup_note2_wait_window_t2

0x3836,	// (0x00029bd1) popup_note2_wait_window_t3_ParamLimits

0x3836,	// (0x00029bd1) popup_note2_wait_window_t3

0x3848,	// (0x00029be3) popup_note2_wait_window_t4_ParamLimits

0x3848,	// (0x00029be3) popup_note2_wait_window_t4

0x0003,

0xfb52,	// (0x00035eed) popup_note2_wait_window_t_ParamLimits

0xfb52,	// (0x00035eed) popup_note2_wait_window_t

0x385a,	// (0x00029bf5) wait_bar2_pane_ParamLimits

0x385a,	// (0x00029bf5) wait_bar2_pane

0x3872,	// (0x00029c0d) popup_snote2_single_text_window_g1_ParamLimits

0x3872,	// (0x00029c0d) popup_snote2_single_text_window_g1

0x389a,	// (0x00029c35) popup_snote2_single_text_window_t1_ParamLimits

0x389a,	// (0x00029c35) popup_snote2_single_text_window_t1

0x38e6,	// (0x00029c81) popup_snote2_single_text_window_t2_ParamLimits

0x38e6,	// (0x00029c81) popup_snote2_single_text_window_t2

0x3932,	// (0x00029ccd) popup_snote2_single_text_window_t3_ParamLimits

0x3932,	// (0x00029ccd) popup_snote2_single_text_window_t3

0x3973,	// (0x00029d0e) popup_snote2_single_text_window_t4_ParamLimits

0x3973,	// (0x00029d0e) popup_snote2_single_text_window_t4

0x39a9,	// (0x00029d44) popup_snote2_single_text_window_t5_ParamLimits

0x39a9,	// (0x00029d44) popup_snote2_single_text_window_t5

0x0004,

0xfb5b,	// (0x00035ef6) popup_snote2_single_text_window_t_ParamLimits

0xfb5b,	// (0x00035ef6) popup_snote2_single_text_window_t

0x39d4,	// (0x00029d6f) popup_snote2_single_graphic_window_g1_ParamLimits

0x39d4,	// (0x00029d6f) popup_snote2_single_graphic_window_g1

0x39fc,	// (0x00029d97) popup_snote2_single_graphic_window_g2_ParamLimits

0x39fc,	// (0x00029d97) popup_snote2_single_graphic_window_g2

0x0001,

0xfb66,	// (0x00035f01) popup_snote2_single_graphic_window_g_ParamLimits

0xfb66,	// (0x00035f01) popup_snote2_single_graphic_window_g

0x4414,	// (0x0002a7af) popup_snote2_single_graphic_window_t1_ParamLimits

0x4414,	// (0x0002a7af) popup_snote2_single_graphic_window_t1

0x4460,	// (0x0002a7fb) popup_snote2_single_graphic_window_t2_ParamLimits

0x4460,	// (0x0002a7fb) popup_snote2_single_graphic_window_t2

0x3932,	// (0x00029ccd) popup_snote2_single_graphic_window_t3_ParamLimits

0x3932,	// (0x00029ccd) popup_snote2_single_graphic_window_t3

0x3973,	// (0x00029d0e) popup_snote2_single_graphic_window_t4_ParamLimits

0x3973,	// (0x00029d0e) popup_snote2_single_graphic_window_t4

0x39a9,	// (0x00029d44) popup_snote2_single_graphic_window_t5_ParamLimits

0x39a9,	// (0x00029d44) popup_snote2_single_graphic_window_t5

0x0004,

0xfb6b,	// (0x00035f06) popup_snote2_single_graphic_window_t_ParamLimits

0xfb6b,	// (0x00035f06) popup_snote2_single_graphic_window_t

0xec6c,	// (0x00035007) clock_nsta_pane_cp2_t1

0xec6c,	// (0x00035007) clock_nsta_pane_cp2_t2

0x0001,

0x023e,	// (0x000265d9) clock_nsta_pane_cp2_t

0x64df,	// (0x0002c87a) form_field_data_wide_pane_g1_ParamLimits

0xc240,	// (0x000325db) form_field_data_wide_pane_g2_ParamLimits

0xc240,	// (0x000325db) form_field_data_wide_pane_g2

0xc24c,	// (0x000325e7) form_field_data_wide_pane_g3_ParamLimits

0xc24c,	// (0x000325e7) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00035a32) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00035a32) form_field_data_wide_pane_g

0xa64c,	// (0x000309e7) grid_touch_3_pane_ParamLimits

0xa64c,	// (0x000309e7) grid_touch_3_pane

0xaa86,	// (0x00030e21) cell_touch_3_pane_ParamLimits

0xaa86,	// (0x00030e21) cell_touch_3_pane

0xef5f,	// (0x000352fa) cell_touch_3_pane_g1

0xef5f,	// (0x000352fa) cell_touch_3_pane_g2

0x0001,

0x02c3,	// (0x0002665e) cell_touch_3_pane_g

0xbdbc,	// (0x00032157) cont_query_data_pane

0xbdc4,	// (0x0003215f) cont_query_data_pane_cp1

0x44db,	// (0x0002a876) button_value_adjust_pane_cp7

0x44e3,	// (0x0002a87e) query_popup_pane_cp3

0xc7ba,	// (0x00032b55) bg_popup_sub_pane_cp22_ParamLimits

0x11ce,	// (0x00027569) navi_navi_volume_pane_cp2

0x11e9,	// (0x00027584) popup_side_volume_key_window_g2

0x11f8,	// (0x00027593) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00035ac4) popup_side_volume_key_window_g

0x1215,	// (0x000275b0) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00035acb) popup_side_volume_key_window_t

0xca0a,	// (0x00032da5) popup_side_volume_key_window_ParamLimits

0x828d,	// (0x0002e628) list_double_graphic_pane_g4_ParamLimits

0x828d,	// (0x0002e628) list_double_graphic_pane_g4

0x950c,	// (0x0002f8a7) list_single_2heading_msg_pane_ParamLimits

0x950c,	// (0x0002f8a7) list_single_2heading_msg_pane

0x952d,	// (0x0002f8c8) list_single_2heading_msg_pane_g1_ParamLimits

0x952d,	// (0x0002f8c8) list_single_2heading_msg_pane_g1

0x9539,	// (0x0002f8d4) list_single_2heading_msg_pane_g2_ParamLimits

0x9539,	// (0x0002f8d4) list_single_2heading_msg_pane_g2

0x954c,	// (0x0002f8e7) list_single_2heading_msg_pane_g3_ParamLimits

0x954c,	// (0x0002f8e7) list_single_2heading_msg_pane_g3

0x6d7e,	// (0x0002d119) list_single_2heading_msg_pane_g4_ParamLimits

0x6d7e,	// (0x0002d119) list_single_2heading_msg_pane_g4

0x0003,

0xfb76,	// (0x00035f11) list_single_2heading_msg_pane_g_ParamLimits

0xfb76,	// (0x00035f11) list_single_2heading_msg_pane_g

0x6d96,	// (0x0002d131) list_single_2heading_msg_pane_t1_ParamLimits

0x6d96,	// (0x0002d131) list_single_2heading_msg_pane_t1

0x9558,	// (0x0002f8f3) list_single_2heading_msg_pane_t2_ParamLimits

0x9558,	// (0x0002f8f3) list_single_2heading_msg_pane_t2

0x95c3,	// (0x0002f95e) list_single_2heading_msg_pane_t3_ParamLimits

0x95c3,	// (0x0002f95e) list_single_2heading_msg_pane_t3

0x6e2b,	// (0x0002d1c6) list_single_2heading_msg_pane_t4_ParamLimits

0x6e2b,	// (0x0002d1c6) list_single_2heading_msg_pane_t4

0x0003,

0xfb7f,	// (0x00035f1a) list_single_2heading_msg_pane_t_ParamLimits

0xfb7f,	// (0x00035f1a) list_single_2heading_msg_pane_t

0xba56,	// (0x00031df1) title_pane_g4_ParamLimits

0xba56,	// (0x00031df1) title_pane_g4

0x0ef2,	// (0x0002728d) title_pane_stacon_g3_ParamLimits

0x0ef2,	// (0x0002728d) title_pane_stacon_g3

0x3624,	// (0x000299bf) list_single_2graphic_im_pane_g4_ParamLimits

0x3624,	// (0x000299bf) list_single_2graphic_im_pane_g4

0xe0b5,	// (0x00034450) popup_side_volume_key_window_cp

0xe58d,	// (0x00034928) main_idle_act2_pane_t1

0x1ea6,	// (0x00028241) toolbar_button_pane_g10

0x8f93,	// (0x0002f32e) popup_toolbar_window_cp1

0xec5d,	// (0x00034ff8) clock_nsta_pane_cp_t1

0xec5d,	// (0x00034ff8) clock_nsta_pane_cp_t2

0x0001,

0x0239,	// (0x000265d4) clock_nsta_pane_cp_t

0x11ce,	// (0x00027569) navi_navi_volume_pane_cp2_ParamLimits

0x11dd,	// (0x00027578) popup_side_volume_key_window_g1_ParamLimits

0x11e9,	// (0x00027584) popup_side_volume_key_window_g2_ParamLimits

0x11f8,	// (0x00027593) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00035ac4) popup_side_volume_key_window_g_ParamLimits

0x2bea,	// (0x00028f85) fep_hwr_aid_pane

0x2c91,	// (0x0002902c) bg_fep_hwr_top_pane_g4_ParamLimits

0xefcf,	// (0x0003536a) fep_hwr_top_pane_g1_ParamLimits

0xefe1,	// (0x0003537c) fep_hwr_top_pane_g2_ParamLimits

0x2cb1,	// (0x0002904c) fep_hwr_top_pane_g3_ParamLimits

0xf9f7,	// (0x00035d92) fep_hwr_top_pane_g_ParamLimits

0x2cc6,	// (0x00029061) fep_hwr_top_text_pane_ParamLimits

0xdeaa,	// (0x00034245) aid_touch_tab_arrow_arrow_2

0xdeb3,	// (0x0003424e) aid_touch_tab_arrow_left_2

0x2bfe,	// (0x00028f99) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2c35,	// (0x00028fd0) fep_hwr_prediction_pane

0xf136,	// (0x000354d1) fep_vkb_prediction_pane

0xa86d,	// (0x00030c08) fep_vkb_side_pane_g3_ParamLimits

0xa86d,	// (0x00030c08) fep_vkb_side_pane_g3

0x2f2b,	// (0x000292c6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2fd3,	// (0x0002936e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2fe0,	// (0x0002937b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfa8a,	// (0x00035e25) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x3a24,	// (0x00029dbf) fep_hwr_prediction_pane_g1

0x3a2e,	// (0x00029dc9) fep_hwr_prediction_pane_g2

0xefc7,	// (0x00035362) fep_hwr_prediction_pane_g3

0x3a36,	// (0x00029dd1) fep_hwr_prediction_pane_g4

0x0003,

0xfb88,	// (0x00035f23) fep_hwr_prediction_pane_g

0x4508,	// (0x0002a8a3) fep_vkb_prediction_pane_g1

0x4512,	// (0x0002a8ad) fep_vkb_prediction_pane_g2

0x451a,	// (0x0002a8b5) fep_vkb_prediction_pane_g3

0x4522,	// (0x0002a8bd) fep_vkb_prediction_pane_g4

0x0003,

0xfb91,	// (0x00035f2c) fep_vkb_prediction_pane_g

0x248a,	// (0x00028825) slider_set_pane_g3

0x249e,	// (0x00028839) slider_set_pane_g4

0x24b6,	// (0x00028851) slider_set_pane_g5

0x248a,	// (0x00028825) slider_set_pane_g6

0x24cc,	// (0x00028867) slider_set_pane_g7

0xe322,	// (0x000346bd) slider_form_pane_g3

0xe32b,	// (0x000346c6) slider_form_pane_g4

0xe333,	// (0x000346ce) slider_form_pane_g5

0xe322,	// (0x000346bd) slider_form_pane_g6

0xa4c1,	// (0x0003085c) slider_form_pane_g7

0xe82b,	// (0x00034bc6) slider_set_pane_vc_g3

0xe834,	// (0x00034bcf) slider_set_pane_vc_g4

0xe83d,	// (0x00034bd8) slider_set_pane_vc_g5

0xe82b,	// (0x00034bc6) slider_set_pane_vc_g6

0xe846,	// (0x00034be1) slider_set_pane_vc_g7

0xe82b,	// (0x00034bc6) slider_form_pane_vc_g1

0xe834,	// (0x00034bcf) slider_form_pane_vc_g2

0xe83d,	// (0x00034bd8) slider_form_pane_vc_g3

0xe82b,	// (0x00034bc6) slider_form_pane_vc_g4

0xe9d5,	// (0x00034d70) slider_form_pane_vc_g5

0x0004,

0x0212,	// (0x000265ad) slider_form_pane_vc_g

0xba38,	// (0x00031dd3) main_idle_act3_pane

0x452a,	// (0x0002a8c5) ai3_links_pane

0xaacf,	// (0x00030e6a) popup_ai3_data_window_ParamLimits

0xaacf,	// (0x00030e6a) popup_ai3_data_window

0xba38,	// (0x00031dd3) grid_ai3_links_pane

0xaae7,	// (0x00030e82) cell_ai3_links_pane_ParamLimits

0xaae7,	// (0x00030e82) cell_ai3_links_pane

0x4563,	// (0x0002a8fe) bg_popup_sub_pane_cp11

0x4570,	// (0x0002a90b) cell_ai3_links_pane_g1

0xba38,	// (0x00031dd3) bg_popup_sub_pane_cp12

0x4595,	// (0x0002a930) heading_ai3_data_pane

0x459d,	// (0x0002a938) list_ai3_gene_pane

0x45a9,	// (0x0002a944) popup_ai3_data_window_g1

0x45b1,	// (0x0002a94c) heading_ai3_data_pane_g1

0x45b9,	// (0x0002a954) heading_ai3_data_pane_t1

0x45c7,	// (0x0002a962) list_double_ai3_gene_pane_ParamLimits

0x45c7,	// (0x0002a962) list_double_ai3_gene_pane

0x45d4,	// (0x0002a96f) list_single_ai3_gene_pane_ParamLimits

0x45d4,	// (0x0002a96f) list_single_ai3_gene_pane

0xef24,	// (0x000352bf) list_highlight_pane_cp7_ParamLimits

0xef24,	// (0x000352bf) list_highlight_pane_cp7

0x45e1,	// (0x0002a97c) list_single_a13_gene_pane_t1_ParamLimits

0x45e1,	// (0x0002a97c) list_single_a13_gene_pane_t1

0x45f8,	// (0x0002a993) list_single_ai3_gene_pane_g1

0x4601,	// (0x0002a99c) list_single_ai3_gene_pane_g2

0x0001,

0xfb9a,	// (0x00035f35) list_single_ai3_gene_pane_g

0x4609,	// (0x0002a9a4) list_double_ai3_gene_pane_g1_ParamLimits

0x4609,	// (0x0002a9a4) list_double_ai3_gene_pane_g1

0x4615,	// (0x0002a9b0) list_double_ai3_gene_pane_t1_ParamLimits

0x4615,	// (0x0002a9b0) list_double_ai3_gene_pane_t1

0x4631,	// (0x0002a9cc) list_double_ai3_gene_pane_t2_ParamLimits

0x4631,	// (0x0002a9cc) list_double_ai3_gene_pane_t2

0x4646,	// (0x0002a9e1) list_double_ai3_gene_pane_t3_ParamLimits

0x4646,	// (0x0002a9e1) list_double_ai3_gene_pane_t3

0x0002,

0xfb9f,	// (0x00035f3a) list_double_ai3_gene_pane_t_ParamLimits

0xfb9f,	// (0x00035f3a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6d68,	// (0x0002d103) aid_size_min_col_2

0xaab9,	// (0x00030e54) aid_size_min_msg_ParamLimits

0xaab9,	// (0x00030e54) aid_size_min_msg

0xa881,	// (0x00030c1c) fep_vkb_top_text_pane_g2_ParamLimits

0xa881,	// (0x00030c1c) fep_vkb_top_text_pane_g2

0x0001,

0xfa1e,	// (0x00035db9) fep_vkb_top_text_pane_g_ParamLimits

0xfa1e,	// (0x00035db9) fep_vkb_top_text_pane_g

0xba38,	// (0x00031dd3) main_hc_apps_shell_pane

0x4663,	// (0x0002a9fe) grid_hc_apps_pane_ParamLimits

0x4663,	// (0x0002a9fe) grid_hc_apps_pane

0x4672,	// (0x0002aa0d) list_hc_apps_pane

0x467a,	// (0x0002aa15) scroll_pane_cp37_ParamLimits

0x467a,	// (0x0002aa15) scroll_pane_cp37

0xab01,	// (0x00030e9c) cell_hc_apps_pane_ParamLimits

0xab01,	// (0x00030e9c) cell_hc_apps_pane

0xabc1,	// (0x00030f5c) cell_hc_apps_pane_g1_ParamLimits

0xabc1,	// (0x00030f5c) cell_hc_apps_pane_g1

0x4767,	// (0x0002ab02) cell_hc_apps_pane_g2_ParamLimits

0x4767,	// (0x0002ab02) cell_hc_apps_pane_g2

0x4783,	// (0x0002ab1e) cell_hc_apps_pane_g3_ParamLimits

0x4783,	// (0x0002ab1e) cell_hc_apps_pane_g3

0x0002,

0xfba6,	// (0x00035f41) cell_hc_apps_pane_g_ParamLimits

0xfba6,	// (0x00035f41) cell_hc_apps_pane_g

0xabee,	// (0x00030f89) cell_hc_apps_pane_t1_ParamLimits

0xabee,	// (0x00030f89) cell_hc_apps_pane_t1

0xbbdb,	// (0x00031f76) grid_highlight_pane_cp10_ParamLimits

0xbbdb,	// (0x00031f76) grid_highlight_pane_cp10

0xac2c,	// (0x00030fc7) list_single_hc_apps_pane_ParamLimits

0xac2c,	// (0x00030fc7) list_single_hc_apps_pane

0x4858,	// (0x0002abf3) list_single_hc_apps_pane_g1

0x6e50,	// (0x0002d1eb) list_single_hc_apps_pane_g2

0x0001,

0xfbad,	// (0x00035f48) list_single_hc_apps_pane_g

0x6e69,	// (0x0002d204) list_single_hc_apps_pane_g2_copy1

0x6e85,	// (0x0002d220) list_single_hc_apps_pane_t1

0xbaa8,	// (0x00031e43) bg_set_opt_pane_cp_ParamLimits

0x0bb1,	// (0x00026f4c) setting_slider_pane_t1_ParamLimits

0x0bca,	// (0x00026f65) setting_slider_pane_t2_ParamLimits

0x0be3,	// (0x00026f7e) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00035915) setting_slider_pane_t_ParamLimits

0x0bfa,	// (0x00026f95) slider_set_pane_ParamLimits

0x15b1,	// (0x0002794c) control_pane_g5_ParamLimits

0x15b1,	// (0x0002794c) control_pane_g5

0xe2e4,	// (0x0003467f) slider_set_pane_g1_ParamLimits

0x247e,	// (0x00028819) slider_set_pane_g2_ParamLimits

0x248a,	// (0x00028825) slider_set_pane_g3_ParamLimits

0x249e,	// (0x00028839) slider_set_pane_g4_ParamLimits

0x24b6,	// (0x00028851) slider_set_pane_g5_ParamLimits

0x248a,	// (0x00028825) slider_set_pane_g6_ParamLimits

0x24cc,	// (0x00028867) slider_set_pane_g7_ParamLimits

0xf90a,	// (0x00035ca5) slider_set_pane_g_ParamLimits

0xcaeb,	// (0x00032e86) navi_icon_text_pane_ParamLimits

0x9cef,	// (0x0003008a) aid_fill_nsta_2_ParamLimits

0x9d23,	// (0x000300be) aid_touch_tab_arrow_left_ParamLimits

0x9d39,	// (0x000300d4) aid_touch_tab_arrow_right_ParamLimits

0x9dd4,	// (0x0003016f) clock_nsta_pane_ParamLimits

0xa269,	// (0x00030604) navi_icon_pane_g1_ParamLimits

0xa275,	// (0x00030610) navi_text_pane_t1_ParamLimits

0xa718,	// (0x00030ab3) navi_icon_text_pane_g1_ParamLimits

0xa724,	// (0x00030abf) navi_icon_text_pane_t1_ParamLimits

0x4858,	// (0x0002abf3) list_single_hc_apps_pane_g1_ParamLimits

0x6e50,	// (0x0002d1eb) list_single_hc_apps_pane_g2_ParamLimits

0xfbad,	// (0x00035f48) list_single_hc_apps_pane_g_ParamLimits

0x6e69,	// (0x0002d204) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6e85,	// (0x0002d220) list_single_hc_apps_pane_t1_ParamLimits

0x812f,	// (0x0002e4ca) popup_toolbar2_fixed_window_ParamLimits

0x812f,	// (0x0002e4ca) popup_toolbar2_fixed_window

0x9c58,	// (0x0002fff3) popup_toolbar2_float_window

0xba38,	// (0x00031dd3) bg_popup_sub_pane_cp27

0x4871,	// (0x0002ac0c) grid_toolbar2_float_pane

0xba38,	// (0x00031dd3) bg_popup_sub_pane_cp26

0x4871,	// (0x0002ac0c) grid_toolbar2_fixed_pane

0xac5f,	// (0x00030ffa) cell_toolbar2_fixed_pane_ParamLimits

0xac5f,	// (0x00030ffa) cell_toolbar2_fixed_pane

0xac7a,	// (0x00031015) cell_toolbar2_fixed_pane_g1

0x4893,	// (0x0002ac2e) toolbar2_fixed_button_pane

0xd1b5,	// (0x00033550) toolbar2_fixed_button_pane_g1

0xd1c5,	// (0x00033560) toolbar2_fixed_button_pane_g2

0xd1bd,	// (0x00033558) toolbar2_fixed_button_pane_g3

0xd1d5,	// (0x00033570) toolbar2_fixed_button_pane_g4

0xd1cd,	// (0x00033568) toolbar2_fixed_button_pane_g5

0xd1dd,	// (0x00033578) toolbar2_fixed_button_pane_g6

0xd1e5,	// (0x00033580) toolbar2_fixed_button_pane_g7

0xd1f5,	// (0x00033590) toolbar2_fixed_button_pane_g8

0xd1ed,	// (0x00033588) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00035c0d) toolbar2_fixed_button_pane_g

0x489b,	// (0x0002ac36) cell_toolbar2_float_pane_ParamLimits

0x489b,	// (0x0002ac36) cell_toolbar2_float_pane

0x48ac,	// (0x0002ac47) cell_toolbar2_float_pane_g1

0x4893,	// (0x0002ac2e) toolbar2_fixed_button_pane_cp

0xa834,	// (0x00030bcf) fep_vkb_accented_list_pane_ParamLimits

0xa834,	// (0x00030bcf) fep_vkb_accented_list_pane

0x2f0b,	// (0x000292a6) bg_popup_fep_shadow_pane_g9

0xcc6d,	// (0x00033008) bg_popup_fep_shadow_pane_cp3

0xc32c,	// (0x000326c7) list_accented_list_pane

0x48b5,	// (0x0002ac50) list_single_accented_list_pane_ParamLimits

0x48b5,	// (0x0002ac50) list_single_accented_list_pane

0xcc6d,	// (0x00033008) list_highlight_pane_cp10

0x48c6,	// (0x0002ac61) list_single_accented_list_pane_t1

0x9b82,	// (0x0002ff1d) popup_slider_window_ParamLimits

0x9b82,	// (0x0002ff1d) popup_slider_window

0x44eb,	// (0x0002a886) aid_indentation_list_msg

0xad73,	// (0x0003110e) bg_popup_window_pane_cp19

0x49ea,	// (0x0002ad85) popup_slider_window_g1

0x4a06,	// (0x0002ada1) popup_slider_window_g2

0x4a22,	// (0x0002adbd) popup_slider_window_g3

0x0005,

0xfbb2,	// (0x00035f4d) popup_slider_window_g

0x4a7e,	// (0x0002ae19) popup_slider_window_t1

0x4af2,	// (0x0002ae8d) small_volume_slider_vertical_pane

0xef5f,	// (0x000352fa) small_volume_slider_vertical_pane_g1

0xef5f,	// (0x000352fa) small_volume_slider_vertical_pane_g2

0x4b0e,	// (0x0002aea9) small_volume_slider_vertical_pane_g3

0x0002,

0xfbc4,	// (0x00035f5f) small_volume_slider_vertical_pane_g

0x809d,	// (0x0002e438) area_side_right_pane_ParamLimits

0x809d,	// (0x0002e438) area_side_right_pane

0x87e1,	// (0x0002eb7c) aid_size_side_button_ParamLimits

0x87e1,	// (0x0002eb7c) aid_size_side_button

0x87fa,	// (0x0002eb95) grid_sctrl_middle_pane_ParamLimits

0x87fa,	// (0x0002eb95) grid_sctrl_middle_pane

0x3a72,	// (0x00029e0d) sctrl_sk_bottom_pane

0x3a83,	// (0x00029e1e) sctrl_sk_top_pane

0x3a95,	// (0x00029e30) aid_touch_sctrl_top

0x3aa2,	// (0x00029e3d) bg_sctrl_sk_pane_ParamLimits

0x3aa2,	// (0x00029e3d) bg_sctrl_sk_pane

0x3ab0,	// (0x00029e4b) sctrl_sk_top_pane_g1

0x3abd,	// (0x00029e58) sctrl_sk_top_pane_t1

0x3a95,	// (0x00029e30) aid_touch_sctrl_bottom

0x3aa2,	// (0x00029e3d) bg_sctrl_sk_pane_cp_ParamLimits

0x3aa2,	// (0x00029e3d) bg_sctrl_sk_pane_cp

0x3ad8,	// (0x00029e73) sctrl_sk_bottom_pane_g1

0x3abd,	// (0x00029e58) sctrl_sk_bottom_pane_t1

0x8814,	// (0x0002ebaf) cell_sctrl_middle_pane_ParamLimits

0x8814,	// (0x0002ebaf) cell_sctrl_middle_pane

0x8825,	// (0x0002ebc0) aid_touch_sctrl_middle_ParamLimits

0x8825,	// (0x0002ebc0) aid_touch_sctrl_middle

0x8832,	// (0x0002ebcd) bg_sctrl_middle_pane_ParamLimits

0x8832,	// (0x0002ebcd) bg_sctrl_middle_pane

0x4145,	// (0x0002a4e0) cell_sctrl_middle_pane_g1_ParamLimits

0x4145,	// (0x0002a4e0) cell_sctrl_middle_pane_g1

0x8840,	// (0x0002ebdb) cell_sctrl_middle_pane_g2_ParamLimits

0x8840,	// (0x0002ebdb) cell_sctrl_middle_pane_g2

0x0001,

0xfbd0,	// (0x00035f6b) cell_sctrl_middle_pane_g_ParamLimits

0xfbd0,	// (0x00035f6b) cell_sctrl_middle_pane_g

0xd1b5,	// (0x00033550) bg_sctrl_middle_pane_g1

0xd1bd,	// (0x00033558) bg_sctrl_middle_pane_g2

0xd1c5,	// (0x00033560) bg_sctrl_middle_pane_g3

0xd1cd,	// (0x00033568) bg_sctrl_middle_pane_g4

0xd1d5,	// (0x00033570) bg_sctrl_middle_pane_g5

0xd1dd,	// (0x00033578) bg_sctrl_middle_pane_g6

0xd1e5,	// (0x00033580) bg_sctrl_middle_pane_g7

0xd1ed,	// (0x00033588) bg_sctrl_middle_pane_g8

0x0007,

0x0481,	// (0x0002681c) bg_sctrl_middle_pane_g

0xd1f5,	// (0x00033590) bg_sctrl_middle_pane_g8_copy1

0xd1b5,	// (0x00033550) bg_sctrl_sk_pane_g1

0xd1c5,	// (0x00033560) bg_sctrl_sk_pane_g2

0xd1bd,	// (0x00033558) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00035c0d) bg_sctrl_sk_pane_g

0xc15f,	// (0x000324fa) aid_size_touch_scroll_bar

0xd1d5,	// (0x00033570) bg_sctrl_sk_pane_g4

0xd1cd,	// (0x00033568) bg_sctrl_sk_pane_g5

0xd1dd,	// (0x00033578) bg_sctrl_sk_pane_g6

0xd1e5,	// (0x00033580) bg_sctrl_sk_pane_g7

0xd1f5,	// (0x00033590) bg_sctrl_sk_pane_g8

0xd1ed,	// (0x00033588) bg_sctrl_sk_pane_g9

0xcee9,	// (0x00033284) popup_fep_china_hwr2_fs_candidate_window

0x96bc,	// (0x0002fa57) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x96bc,	// (0x0002fa57) popup_fep_china_hwr2_fs_control_window

0x2f2b,	// (0x000292c6) sctrl_sk_top_pane_g2

0x0001,

0xfbcb,	// (0x00035f66) sctrl_sk_top_pane_g

0xae2b,	// (0x000311c6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xae2b,	// (0x000311c6) aid_fep_china_hwr2_fs_cell

0xae3f,	// (0x000311da) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xae3f,	// (0x000311da) bg_popup_fep_shadow_pane_cp4

0xae56,	// (0x000311f1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xae56,	// (0x000311f1) bg_popup_fep_shadow_pane_cp5

0xae68,	// (0x00031203) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xae68,	// (0x00031203) popup_fep_china_hwr2_fs_control_bar_grid

0xae7c,	// (0x00031217) popup_fep_china_hwr2_fs_control_funtion_grid

0x4b6a,	// (0x0002af05) aid_fep_china_hwr2_fs_candi_cell

0xba38,	// (0x00031dd3) bg_popup_fep_shadow_pane_cp6

0x4b74,	// (0x0002af0f) popup_fep_china_hwr2_fs_candidate_grid

0xae84,	// (0x0003121f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xae84,	// (0x0003121f) cell_fep_china_hwr2_fs_funtion_grid

0xef5f,	// (0x000352fa) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4b96,	// (0x0002af31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4b96,	// (0x0002af31) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4ba4,	// (0x0002af3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4ba4,	// (0x0002af3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfbd5,	// (0x00035f70) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfbd5,	// (0x00035f70) cell_fep_china_hwr2_fs_funtion_grid_g

0xae9c,	// (0x00031237) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xae9c,	// (0x00031237) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaeb1,	// (0x0003124c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaeb1,	// (0x0003124c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfbda,	// (0x00035f75) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfbda,	// (0x00035f75) cell_fep_china_hwr2_fs_funtion_grid_t

0x4beb,	// (0x0002af86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4bf3,	// (0x0002af8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4bfb,	// (0x0002af96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfbdf,	// (0x00035f7a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4c03,	// (0x0002af9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4c03,	// (0x0002af9e) cell_fep_china_hwr2_fs_candidate_grid

0x4c1c,	// (0x0002afb7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4c24,	// (0x0002afbf) popup_fep_china_hwr2_fs_candidate_grid_g21

0xef5f,	// (0x000352fa) cell_fep_china_hwr2_fs_candidate_grid_g1

0xef5f,	// (0x000352fa) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x02c3,	// (0x0002665e) cell_fep_china_hwr2_fs_candidate_grid_g

0x4c2c,	// (0x0002afc7) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd004,	// (0x0003339f) clock_nsta_pane_cp_24_ParamLimits

0xd004,	// (0x0003339f) clock_nsta_pane_cp_24

0xd06c,	// (0x00033407) indicator_nsta_pane_cp_24_ParamLimits

0xd06c,	// (0x00033407) indicator_nsta_pane_cp_24

0xddb4,	// (0x0003414f) heading_pane_g1

0x0001,

0x0053,	// (0x000263ee) heading_pane_g

0xe418,	// (0x000347b3) grid_sct_catagory_button_pane

0xe2d8,	// (0x00034673) scroll_pane_cp5_ParamLimits

0xecc8,	// (0x00035063) button_value_adjust_pane_cp5_ParamLimits

0xecc8,	// (0x00035063) button_value_adjust_pane_cp5

0xed86,	// (0x00035121) form2_midp_time_pane_ParamLimits

0x4c3a,	// (0x0002afd5) cell_sct_catagory_button_pane_ParamLimits

0x4c3a,	// (0x0002afd5) cell_sct_catagory_button_pane

0xef24,	// (0x000352bf) bg_button_pane_cp01_ParamLimits

0xef24,	// (0x000352bf) bg_button_pane_cp01

0xef5f,	// (0x000352fa) cell_sct_catagory_button_pane_g1

0x9bfb,	// (0x0002ff96) popup_tb_extension_window

0xaecd,	// (0x00031268) aid_size_cell_ext_ParamLimits

0xaecd,	// (0x00031268) aid_size_cell_ext

0xbfa1,	// (0x0003233c) bg_tb_trans_pane_cp1_ParamLimits

0xbfa1,	// (0x0003233c) bg_tb_trans_pane_cp1

0xaef3,	// (0x0003128e) grid_tb_ext_pane_ParamLimits

0xaef3,	// (0x0003128e) grid_tb_ext_pane

0xaf33,	// (0x000312ce) cell_tb_ext_pane_ParamLimits

0xaf33,	// (0x000312ce) cell_tb_ext_pane

0xaf5b,	// (0x000312f6) cell_tb_ext_pane_g1_ParamLimits

0xaf5b,	// (0x000312f6) cell_tb_ext_pane_g1

0x4cd2,	// (0x0002b06d) cell_tb_ext_pane_t1

0xbbdb,	// (0x00031f76) list_highlight_pane_cp11_ParamLimits

0xbbdb,	// (0x00031f76) list_highlight_pane_cp11

0x0a24,	// (0x00026dbf) popup_uni_indicator_window_ParamLimits

0x0a24,	// (0x00026dbf) popup_uni_indicator_window

0xc226,	// (0x000325c1) bg_popup_sub_pane_cp14

0x4ced,	// (0x0002b088) list_uniindi_pane

0x4cf9,	// (0x0002b094) uniindi_top_pane

0xbbdb,	// (0x00031f76) bg_uniindi_top_pane

0x4d18,	// (0x0002b0b3) uniindi_top_pane_g1

0x4d2e,	// (0x0002b0c9) uniindi_top_pane_g2

0x0003,

0xfbe6,	// (0x00035f81) uniindi_top_pane_g

0x4d58,	// (0x0002b0f3) uniindi_top_pane_t1

0x4d82,	// (0x0002b11d) list_single_uniindi_pane_ParamLimits

0x4d82,	// (0x0002b11d) list_single_uniindi_pane

0xef5f,	// (0x000352fa) bg_uniindi_top_pane_g1

0x4d94,	// (0x0002b12f) list_single_uniindi_pane_g1

0x4da7,	// (0x0002b142) list_single_uniindi_pane_t1

0x08a8,	// (0x00026c43) control_bg_pane

0x4dcc,	// (0x0002b167) bg_sctrl_sk_pane_cp1

0x4dd5,	// (0x0002b170) bg_sctrl_sk_pane_cp2

0x4dde,	// (0x0002b179) control_bg_pane_g1

0x4de7,	// (0x0002b182) control_bg_pane_g2

0x0001,

0xfbef,	// (0x00035f8a) control_bg_pane_g

0xeb9f,	// (0x00034f3a) cell_indicator_nsta_pane_g1_ParamLimits

0xa67f,	// (0x00030a1a) cell_indicator_nsta_pane_g2_ParamLimits

0xf9c1,	// (0x00035d5c) cell_indicator_nsta_pane_g_ParamLimits

0x6b25,	// (0x0002cec0) form2_midp_time_pane_t1_ParamLimits

0xf26a,	// (0x00035605) main_idle_act4_pane_ParamLimits

0xf26a,	// (0x00035605) main_idle_act4_pane

0x9bfb,	// (0x0002ff96) popup_tb_extension_window_ParamLimits

0xaf1a,	// (0x000312b5) tb_ext_find_pane_ParamLimits

0xaf1a,	// (0x000312b5) tb_ext_find_pane

0x4df0,	// (0x0002b18b) ai_gene_pane_1_cp1

0xccef,	// (0x0003308a) ai_gene_pane_2_cp1

0x4df8,	// (0x0002b193) list_single_idle_plugin_calendar_pane

0x4e01,	// (0x0002b19c) list_single_idle_plugin_notification_pane

0x4e0a,	// (0x0002b1a5) list_single_idle_plugin_player_pane

0xaf78,	// (0x00031313) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaf78,	// (0x00031313) list_single_idle_plugin_shortcut_pane

0xafa0,	// (0x0003133b) main_idle_act4_pane_t1

0xafb6,	// (0x00031351) main_idle_act4_pane_t2

0x0001,

0xfbf4,	// (0x00035f8f) main_idle_act4_pane_t

0xafce,	// (0x00031369) middle_sk_idle_act4_pane_ParamLimits

0xafce,	// (0x00031369) middle_sk_idle_act4_pane

0xafea,	// (0x00031385) popup_clock_digital_analogue_window_cp2

0xb011,	// (0x000313ac) shortcut_wheel_idle_act4_pane_ParamLimits

0xb011,	// (0x000313ac) shortcut_wheel_idle_act4_pane

0xef5f,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g1

0xef5f,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g2

0xef5f,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g3

0xef5f,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g4

0xef5f,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g5

0x4e9d,	// (0x0002b238) shortcut_wheel_idle_act4_pane_g6

0x4ea5,	// (0x0002b240) shortcut_wheel_idle_act4_pane_g7

0x4ead,	// (0x0002b248) shortcut_wheel_idle_act4_pane_g8

0x4eb5,	// (0x0002b250) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfbf9,	// (0x00035f94) shortcut_wheel_idle_act4_pane_g

0x884c,	// (0x0002ebe7) middle_sk_idle_act4_pane_g1_ParamLimits

0x884c,	// (0x0002ebe7) middle_sk_idle_act4_pane_g1

0xb08e,	// (0x00031429) middle_sk_idle_act4_pane_g2_ParamLimits

0xb08e,	// (0x00031429) middle_sk_idle_act4_pane_g2

0x0001,

0xfc1c,	// (0x00035fb7) middle_sk_idle_act4_pane_g_ParamLimits

0xfc1c,	// (0x00035fb7) middle_sk_idle_act4_pane_g

0xb0a6,	// (0x00031441) middle_sk_idle_act4_pane_t1_ParamLimits

0xb0a6,	// (0x00031441) middle_sk_idle_act4_pane_t1

0xb0d5,	// (0x00031470) grid_ai_shortcut_pane_ParamLimits

0xb0d5,	// (0x00031470) grid_ai_shortcut_pane

0xb0f2,	// (0x0003148d) list_highlight_pane_cp16_ParamLimits

0xb0f2,	// (0x0003148d) list_highlight_pane_cp16

0xb0ff,	// (0x0003149a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb0ff,	// (0x0003149a) list_single_idle_plugin_shortcut_pane_g1

0xb10b,	// (0x000314a6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb10b,	// (0x000314a6) list_single_idle_plugin_shortcut_pane_g2

0xb127,	// (0x000314c2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb127,	// (0x000314c2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfc21,	// (0x00035fbc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfc21,	// (0x00035fbc) list_single_idle_plugin_shortcut_pane_g

0xb13c,	// (0x000314d7) cell_ai_shortcut_pane_ParamLimits

0xb13c,	// (0x000314d7) cell_ai_shortcut_pane

0xb152,	// (0x000314ed) cell_ai_shortcut_pane_g1_ParamLimits

0xb152,	// (0x000314ed) cell_ai_shortcut_pane_g1

0x4df0,	// (0x0002b18b) ai_gene_pane_1_cp2

0x4fe2,	// (0x0002b37d) ai_gene_pane_2_cp2

0x4fea,	// (0x0002b385) list_highlight_pane_cp15

0x4ff3,	// (0x0002b38e) list_single_idle_plugin_calendar_pane_g1

0x4fea,	// (0x0002b385) list_highlight_pane_cp17

0x4ffb,	// (0x0002b396) list_single_idle_plugin_calendar_pane_g1_copy1

0x5003,	// (0x0002b39e) list_single_idle_plugin_player_pane_g1

0xe62d,	// (0x000349c8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc28,	// (0x00035fc3) list_single_idle_plugin_player_pane_g

0x500b,	// (0x0002b3a6) list_single_idle_plugin_player_pane_t1

0x5019,	// (0x0002b3b4) list_single_idle_plugin_player_pane_t2

0x5027,	// (0x0002b3c2) list_single_idle_plugin_player_pane_t3

0x5035,	// (0x0002b3d0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfc2d,	// (0x00035fc8) list_single_idle_plugin_player_pane_t

0x5043,	// (0x0002b3de) wait_bar_pane_cp15

0x504b,	// (0x0002b3e6) grid_ai_notification_pane

0xe62d,	// (0x000349c8) list_single_idle_plugin_notification_pane_g1

0xb174,	// (0x0003150f) cell_ai_notification_pane_ParamLimits

0xb174,	// (0x0003150f) cell_ai_notification_pane

0x5061,	// (0x0002b3fc) cell_ai_notification_pane_g1

0x5069,	// (0x0002b404) cell_ai_notification_pane_t1

0xb181,	// (0x0003151c) tb_ext_find_button_pane

0xb189,	// (0x00031524) tb_ext_find_pane_g1

0xb191,	// (0x0003152c) tb_ext_find_pane_t1

0xc75e,	// (0x00032af9) tb_ext_find_button_pane_g1

0x5095,	// (0x0002b430) tb_ext_find_button_pane_g2

0x0001,

0xfc36,	// (0x00035fd1) tb_ext_find_button_pane_g

0xafa0,	// (0x0003133b) main_idle_act4_pane_t1_ParamLimits

0xafb6,	// (0x00031351) main_idle_act4_pane_t2_ParamLimits

0xfbf4,	// (0x00035f8f) main_idle_act4_pane_t_ParamLimits

0xafea,	// (0x00031385) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb001,	// (0x0003139c) sat_plugin_idle_act4_pane_ParamLimits

0xb001,	// (0x0003139c) sat_plugin_idle_act4_pane

0xb19f,	// (0x0003153a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb19f,	// (0x0003153a) sat_plugin_idle_act4_pane_t1

0xb1b7,	// (0x00031552) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb1b7,	// (0x00031552) sat_plugin_idle_act4_pane_t2

0xb1cf,	// (0x0003156a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb1cf,	// (0x0003156a) sat_plugin_idle_act4_pane_t3

0xb1e7,	// (0x00031582) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb1e7,	// (0x00031582) sat_plugin_idle_act4_pane_t4

0x0003,

0xfc3b,	// (0x00035fd6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfc3b,	// (0x00035fd6) sat_plugin_idle_act4_pane_t

0x096d,	// (0x00026d08) popup_battery_window_ParamLimits

0x096d,	// (0x00026d08) popup_battery_window

0xbbdb,	// (0x00031f76) bg_popup_sub_pane_cp25_ParamLimits

0xbbdb,	// (0x00031f76) bg_popup_sub_pane_cp25

0x50ea,	// (0x0002b485) popup_battery_window_g1_ParamLimits

0x50ea,	// (0x0002b485) popup_battery_window_g1

0x50f6,	// (0x0002b491) popup_battery_window_t1_ParamLimits

0x50f6,	// (0x0002b491) popup_battery_window_t1

0x5108,	// (0x0002b4a3) popup_battery_window_t2_ParamLimits

0x5108,	// (0x0002b4a3) popup_battery_window_t2

0x0001,

0xfc44,	// (0x00035fdf) popup_battery_window_t_ParamLimits

0xfc44,	// (0x00035fdf) popup_battery_window_t

0x93d1,	// (0x0002f76c) midp_canvas_pane_ParamLimits

0x942e,	// (0x0002f7c9) midp_keypad_pane_ParamLimits

0x942e,	// (0x0002f7c9) midp_keypad_pane

0xc37d,	// (0x00032718) main_midp_pane_ParamLimits

0xec7b,	// (0x00035016) signal_pane_g2_cp_ParamLimits

0xb1ff,	// (0x0003159a) aid_size_cell_midp_keypad_ParamLimits

0xb1ff,	// (0x0003159a) aid_size_cell_midp_keypad

0xb21d,	// (0x000315b8) midp_keyp_game_grid_pane_ParamLimits

0xb21d,	// (0x000315b8) midp_keyp_game_grid_pane

0xb244,	// (0x000315df) midp_keyp_rocker_pane_ParamLimits

0xb244,	// (0x000315df) midp_keyp_rocker_pane

0xb29d,	// (0x00031638) midp_keyp_sk_left_pane_ParamLimits

0xb29d,	// (0x00031638) midp_keyp_sk_left_pane

0xb2f1,	// (0x0003168c) midp_keyp_sk_right_pane_ParamLimits

0xb2f1,	// (0x0003168c) midp_keyp_sk_right_pane

0xba38,	// (0x00031dd3) bg_button_pane_cp03

0xb345,	// (0x000316e0) midp_keyp_sk_left_pane_g1

0xba38,	// (0x00031dd3) bg_button_pane_cp04

0xb345,	// (0x000316e0) midp_keyp_sk_right_pane_g1

0xef5f,	// (0x000352fa) midp_keyp_rocker_pane_g1

0xb34e,	// (0x000316e9) keyp_game_cell_pane_ParamLimits

0xb34e,	// (0x000316e9) keyp_game_cell_pane

0xba38,	// (0x00031dd3) bg_button_pane_cp02

0xb372,	// (0x0003170d) keyp_game_cell_pane_g1

0x80df,	// (0x0002e47a) popup_fep_vkb2_window_ParamLimits

0x80df,	// (0x0002e47a) popup_fep_vkb2_window

0x885a,	// (0x0002ebf5) aid_size_cell_vkb2_ParamLimits

0x885a,	// (0x0002ebf5) aid_size_cell_vkb2

0x8890,	// (0x0002ec2b) popup_fep_vkb2_window_g1_ParamLimits

0x8890,	// (0x0002ec2b) popup_fep_vkb2_window_g1

0x88d7,	// (0x0002ec72) vkb2_area_bottom_pane_ParamLimits

0x88d7,	// (0x0002ec72) vkb2_area_bottom_pane

0x892b,	// (0x0002ecc6) vkb2_area_keypad_pane_ParamLimits

0x892b,	// (0x0002ecc6) vkb2_area_keypad_pane

0x8973,	// (0x0002ed0e) vkb2_area_top_pane_ParamLimits

0x8973,	// (0x0002ed0e) vkb2_area_top_pane

0x89f9,	// (0x0002ed94) vkb2_top_entry_pane_ParamLimits

0x89f9,	// (0x0002ed94) vkb2_top_entry_pane

0x8a26,	// (0x0002edc1) vkb2_top_grid_left_pane_ParamLimits

0x8a26,	// (0x0002edc1) vkb2_top_grid_left_pane

0x8a46,	// (0x0002ede1) vkb2_top_grid_right_pane_ParamLimits

0x8a46,	// (0x0002ede1) vkb2_top_grid_right_pane

0x3d40,	// (0x0002a0db) vkb2_cell_keypad_pane_ParamLimits

0x3d40,	// (0x0002a0db) vkb2_cell_keypad_pane

0x8a8c,	// (0x0002ee27) vkb2_area_bottom_grid_pane_ParamLimits

0x8a8c,	// (0x0002ee27) vkb2_area_bottom_grid_pane

0x8ab6,	// (0x0002ee51) vkb2_area_bottom_pane_g1_ParamLimits

0x8ab6,	// (0x0002ee51) vkb2_area_bottom_pane_g1

0x8adc,	// (0x0002ee77) vkb2_area_bottom_pane_g2_ParamLimits

0x8adc,	// (0x0002ee77) vkb2_area_bottom_pane_g2

0x8b0d,	// (0x0002eea8) vkb2_area_bottom_pane_g3_ParamLimits

0x8b0d,	// (0x0002eea8) vkb2_area_bottom_pane_g3

0x0002,

0xfc49,	// (0x00035fe4) vkb2_area_bottom_pane_g_ParamLimits

0xfc49,	// (0x00035fe4) vkb2_area_bottom_pane_g

0x3eea,	// (0x0002a285) vkb2_top_cell_left_pane_ParamLimits

0x3eea,	// (0x0002a285) vkb2_top_cell_left_pane

0xb388,	// (0x00031723) vkb2_top_entry_pane_g1_ParamLimits

0xb388,	// (0x00031723) vkb2_top_entry_pane_g1

0xb396,	// (0x00031731) vkb2_top_entry_pane_t1_ParamLimits

0xb396,	// (0x00031731) vkb2_top_entry_pane_t1

0x52b9,	// (0x0002b654) vkb2_top_entry_pane_t2_ParamLimits

0x52b9,	// (0x0002b654) vkb2_top_entry_pane_t2

0x52eb,	// (0x0002b686) vkb2_top_entry_pane_t3_ParamLimits

0x52eb,	// (0x0002b686) vkb2_top_entry_pane_t3

0x0002,

0xfc50,	// (0x00035feb) vkb2_top_entry_pane_t_ParamLimits

0xfc50,	// (0x00035feb) vkb2_top_entry_pane_t

0x8b77,	// (0x0002ef12) vkb2_top_grid_right_pane_g1_ParamLimits

0x8b77,	// (0x0002ef12) vkb2_top_grid_right_pane_g1

0x3f4d,	// (0x0002a2e8) vkb2_top_grid_right_pane_g2_ParamLimits

0x3f4d,	// (0x0002a2e8) vkb2_top_grid_right_pane_g2

0x3f65,	// (0x0002a300) vkb2_top_grid_right_pane_g3_ParamLimits

0x3f65,	// (0x0002a300) vkb2_top_grid_right_pane_g3

0x8b8d,	// (0x0002ef28) vkb2_top_grid_right_pane_g4_ParamLimits

0x8b8d,	// (0x0002ef28) vkb2_top_grid_right_pane_g4

0x0003,

0xfc57,	// (0x00035ff2) vkb2_top_grid_right_pane_g_ParamLimits

0xfc57,	// (0x00035ff2) vkb2_top_grid_right_pane_g

0x3f93,	// (0x0002a32e) vkb2_top_cell_left_pane_g1

0x3faa,	// (0x0002a345) vkb2_cell_keypad_pane_g1_ParamLimits

0x3faa,	// (0x0002a345) vkb2_cell_keypad_pane_g1

0x530f,	// (0x0002b6aa) vkb2_cell_keypad_pane_t1_ParamLimits

0x530f,	// (0x0002b6aa) vkb2_cell_keypad_pane_t1

0x3fb8,	// (0x0002a353) vkb2_cell_bottom_grid_pane_ParamLimits

0x3fb8,	// (0x0002a353) vkb2_cell_bottom_grid_pane

0x3ff1,	// (0x0002a38c) vkb2_cell_bottom_grid_pane_g1

0xb032,	// (0x000313cd) aid_call2_pane_cp02

0xb03a,	// (0x000313d5) aid_call_pane_cp02

0xb042,	// (0x000313dd) clock_digital_number_pane_cp10

0xb04a,	// (0x000313e5) clock_digital_number_pane_cp11

0xb052,	// (0x000313ed) clock_digital_number_pane_cp12

0xb05a,	// (0x000313f5) clock_digital_number_pane_cp13

0xb062,	// (0x000313fd) clock_digital_separator_pane_cp10

0xc75e,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g1

0xc75e,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g2

0xb06a,	// (0x00031405) popup_clock_digital_analogue_window_cp2_g3

0xc75e,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g4

0xb06a,	// (0x00031405) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfc0c,	// (0x00035fa7) popup_clock_digital_analogue_window_cp2_g

0xb072,	// (0x0003140d) popup_clock_digital_analogue_window_cp2_t1

0xb080,	// (0x0003141b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfc17,	// (0x00035fb2) popup_clock_digital_analogue_window_cp2_t

0xef5f,	// (0x000352fa) clock_digital_number_pane_cp10_g1

0xef5f,	// (0x000352fa) clock_digital_number_pane_cp10_g2

0x0001,

0x02c3,	// (0x0002665e) clock_digital_number_pane_cp10_g

0xef5f,	// (0x000352fa) clock_digital_separator_pane_cp10_g1

0xef5f,	// (0x000352fa) clock_digital_separator_pane_cp10_g2

0x0001,

0x02c3,	// (0x0002665e) clock_digital_separator_pane_cp10_g

0x4d3a,	// (0x0002b0d5) uniindi_top_pane_g3

0x4d4b,	// (0x0002b0e6) uniindi_top_pane_g4

0x3dcb,	// (0x0002a166) vkb2_row_keypad_pane_ParamLimits

0x3dcb,	// (0x0002a166) vkb2_row_keypad_pane

0x4011,	// (0x0002a3ac) vkb2_cell_t_keypad_pane_ParamLimits

0x4011,	// (0x0002a3ac) vkb2_cell_t_keypad_pane

0x4021,	// (0x0002a3bc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x4021,	// (0x0002a3bc) vkb2_cell_t_keypad_pane_cp08

0x4034,	// (0x0002a3cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x4034,	// (0x0002a3cf) vkb2_cell_t_keypad_pane_cp09

0x4048,	// (0x0002a3e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x4048,	// (0x0002a3e3) vkb2_cell_t_keypad_pane_cp01

0x4059,	// (0x0002a3f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x4059,	// (0x0002a3f4) vkb2_cell_t_keypad_pane_cp02

0x406a,	// (0x0002a405) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x406a,	// (0x0002a405) vkb2_cell_t_keypad_pane_cp03

0x407b,	// (0x0002a416) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x407b,	// (0x0002a416) vkb2_cell_t_keypad_pane_cp04

0x408c,	// (0x0002a427) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x408c,	// (0x0002a427) vkb2_cell_t_keypad_pane_cp05

0x409d,	// (0x0002a438) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x409d,	// (0x0002a438) vkb2_cell_t_keypad_pane_cp06

0x40ae,	// (0x0002a449) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x40ae,	// (0x0002a449) vkb2_cell_t_keypad_pane_cp07

0x40bf,	// (0x0002a45a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x40bf,	// (0x0002a45a) vkb2_cell_t_keypad_pane_cp10

0x2f2b,	// (0x000292c6) vkb2_cell_t_keypad_pane_g1

0x5326,	// (0x0002b6c1) vkb2_cell_t_keypad_pane_t1

0x08a8,	// (0x00026c43) popup_grid_graphic2_window

0xb3cf,	// (0x0003176a) aid_size_cell_graphic2_ParamLimits

0xb3cf,	// (0x0003176a) aid_size_cell_graphic2

0xd762,	// (0x00033afd) bg_popup_window_pane_cp21_ParamLimits

0xd762,	// (0x00033afd) bg_popup_window_pane_cp21

0xb401,	// (0x0003179c) graphic2_pages_pane_ParamLimits

0xb401,	// (0x0003179c) graphic2_pages_pane

0xb457,	// (0x000317f2) grid_graphic2_control_pane_ParamLimits

0xb457,	// (0x000317f2) grid_graphic2_control_pane

0xb48b,	// (0x00031826) grid_graphic2_pane_ParamLimits

0xb48b,	// (0x00031826) grid_graphic2_pane

0xb4fe,	// (0x00031899) cell_graphic2_pane

0xba38,	// (0x00031dd3) main_comp_mode_pane

0x459d,	// (0x0002a938) list_ai3_gene_pane_ParamLimits

0xad73,	// (0x0003110e) bg_popup_window_pane_cp19_ParamLimits

0x498c,	// (0x0002ad27) bg_touch_area_indi_pane_ParamLimits

0x498c,	// (0x0002ad27) bg_touch_area_indi_pane

0x49a2,	// (0x0002ad3d) bg_touch_area_indi_pane_cp01_ParamLimits

0x49a2,	// (0x0002ad3d) bg_touch_area_indi_pane_cp01

0x49b8,	// (0x0002ad53) bg_touch_area_indi_pane_cp02_ParamLimits

0x49b8,	// (0x0002ad53) bg_touch_area_indi_pane_cp02

0x49d0,	// (0x0002ad6b) bg_touch_area_indi_pane_cp03_ParamLimits

0x49d0,	// (0x0002ad6b) bg_touch_area_indi_pane_cp03

0x49ea,	// (0x0002ad85) popup_slider_window_g1_ParamLimits

0x4a06,	// (0x0002ada1) popup_slider_window_g2_ParamLimits

0x4a22,	// (0x0002adbd) popup_slider_window_g3_ParamLimits

0xfbb2,	// (0x00035f4d) popup_slider_window_g_ParamLimits

0x4a7e,	// (0x0002ae19) popup_slider_window_t1_ParamLimits

0x4af2,	// (0x0002ae8d) small_volume_slider_vertical_pane_ParamLimits

0xb4fe,	// (0x00031899) cell_graphic2_pane_ParamLimits

0xb559,	// (0x000318f4) bg_button_pane_cp10_ParamLimits

0xb559,	// (0x000318f4) bg_button_pane_cp10

0xb56c,	// (0x00031907) bg_button_pane_cp11_ParamLimits

0xb56c,	// (0x00031907) bg_button_pane_cp11

0xb57f,	// (0x0003191a) graphic2_pages_pane_g1_ParamLimits

0xb57f,	// (0x0003191a) graphic2_pages_pane_g1

0xb59a,	// (0x00031935) graphic2_pages_pane_g2_ParamLimits

0xb59a,	// (0x00031935) graphic2_pages_pane_g2

0x0001,

0xfc65,	// (0x00036000) graphic2_pages_pane_g_ParamLimits

0xfc65,	// (0x00036000) graphic2_pages_pane_g

0xb5b2,	// (0x0003194d) graphic2_pages_pane_t1_ParamLimits

0xb5b2,	// (0x0003194d) graphic2_pages_pane_t1

0xb5ca,	// (0x00031965) cell_graphic2_control_pane_ParamLimits

0xb5ca,	// (0x00031965) cell_graphic2_control_pane

0xb5e4,	// (0x0003197f) cell_graphic2_pane_g1_ParamLimits

0xb5e4,	// (0x0003197f) cell_graphic2_pane_g1

0x8ba3,	// (0x0002ef3e) cell_graphic2_pane_g2_ParamLimits

0x8ba3,	// (0x0002ef3e) cell_graphic2_pane_g2

0xb37b,	// (0x00031716) cell_graphic2_pane_g3_ParamLimits

0xb37b,	// (0x00031716) cell_graphic2_pane_g3

0x8bb0,	// (0x0002ef4b) cell_graphic2_pane_g4_ParamLimits

0x8bb0,	// (0x0002ef4b) cell_graphic2_pane_g4

0xb5f1,	// (0x0003198c) cell_graphic2_pane_g5_ParamLimits

0xb5f1,	// (0x0003198c) cell_graphic2_pane_g5

0x0004,

0xfc6a,	// (0x00036005) cell_graphic2_pane_g_ParamLimits

0xfc6a,	// (0x00036005) cell_graphic2_pane_g

0xb611,	// (0x000319ac) cell_graphic2_pane_t1_ParamLimits

0xb611,	// (0x000319ac) cell_graphic2_pane_t1

0xdda8,	// (0x00034143) grid_highlight_pane_cp11_ParamLimits

0xdda8,	// (0x00034143) grid_highlight_pane_cp11

0xc226,	// (0x000325c1) bg_button_pane_cp05

0xb646,	// (0x000319e1) cell_graphic2_control_pane_g1

0xef5f,	// (0x000352fa) bg_touch_area_indi_pane_g1

0x5338,	// (0x0002b6d3) aid_cmod_rocker_key_size

0x5342,	// (0x0002b6dd) aid_cmode_itu_key_size

0x534c,	// (0x0002b6e7) main_cmode_video_pane

0x5356,	// (0x0002b6f1) main_comp_mode_itu_pane

0x5362,	// (0x0002b6fd) main_comp_mode_rocker_pane

0x536e,	// (0x0002b709) cell_cmode_rocker_pane_ParamLimits

0x536e,	// (0x0002b709) cell_cmode_rocker_pane

0x5380,	// (0x0002b71b) cell_cmode_itu_pane_ParamLimits

0x5380,	// (0x0002b71b) cell_cmode_itu_pane

0xc226,	// (0x000325c1) bg_button_pane_cp06_ParamLimits

0xc226,	// (0x000325c1) bg_button_pane_cp06

0xf1e6,	// (0x00035581) cell_cmode_rocker_pane_g1_ParamLimits

0xf1e6,	// (0x00035581) cell_cmode_rocker_pane_g1

0x4b96,	// (0x0002af31) cell_cmode_rocker_pane_g2_ParamLimits

0x4b96,	// (0x0002af31) cell_cmode_rocker_pane_g2

0x0001,

0xfc7a,	// (0x00036015) cell_cmode_rocker_pane_g_ParamLimits

0xfc7a,	// (0x00036015) cell_cmode_rocker_pane_g

0xba38,	// (0x00031dd3) bg_button_pane_cp07

0x5395,	// (0x0002b730) cell_cmode_itu_pane_g1

0x539e,	// (0x0002b739) cell_cmode_itu_pane_t1

0x53ac,	// (0x0002b747) cell_cmode_itu_pane_t2

0x0001,

0xfc7f,	// (0x0003601a) cell_cmode_itu_pane_t

0x4dbc,	// (0x0002b157) aid_touch_ctrl_left

0x4dc4,	// (0x0002b15f) aid_touch_ctrl_right

0xba38,	// (0x00031dd3) compa_mode_pane

0xb653,	// (0x000319ee) aid_cmod_rocker_key_size_cp

0xb65d,	// (0x000319f8) aid_cmode_itu_key_size_cp

0x53ba,	// (0x0002b755) compa_mode_pane_g1

0x53c2,	// (0x0002b75d) compa_mode_pane_g2

0x53ca,	// (0x0002b765) compa_mode_pane_g3

0x0002,

0xfc84,	// (0x0003601f) compa_mode_pane_g

0xb667,	// (0x00031a02) main_comp_mode_itu_pane_cp

0xb66f,	// (0x00031a0a) main_comp_mode_rocker_pane_cp

0xb677,	// (0x00031a12) cell_cmode_itu_pane_cp_ParamLimits

0xb677,	// (0x00031a12) cell_cmode_itu_pane_cp

0xb68c,	// (0x00031a27) cell_cmode_rocker_pane_cp_ParamLimits

0xb68c,	// (0x00031a27) cell_cmode_rocker_pane_cp

0xc226,	// (0x000325c1) bg_button_pane_cp06_cp_ParamLimits

0xc226,	// (0x000325c1) bg_button_pane_cp06_cp

0xf1e6,	// (0x00035581) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf1e6,	// (0x00035581) cell_cmode_rocker_pane_g1_cp

0xef5f,	// (0x000352fa) cell_cmode_rocker_pane_g2_cp

0xba38,	// (0x00031dd3) bg_button_pane_cp07_cp

0xb69e,	// (0x00031a39) cell_cmode_itu_pane_g1_cp

0xb6a7,	// (0x00031a42) cell_cmode_itu_pane_t1_cp

0xb6a7,	// (0x00031a42) cell_cmode_itu_pane_t2_cp

0xa4b7,	// (0x00030852) settings_code_pane_cp2

0xbaa8,	// (0x00031e43) bg_popup_window_pane_cp3_ParamLimits

0xbee0,	// (0x0003227b) heading_pane_cp3_ParamLimits

0xbeec,	// (0x00032287) listscroll_popup_graphic_pane_ParamLimits

0x2bea,	// (0x00028f85) fep_hwr_aid_pane_ParamLimits

0x3a95,	// (0x00029e30) aid_touch_sctrl_top_ParamLimits

0x3ab0,	// (0x00029e4b) sctrl_sk_top_pane_g1_ParamLimits

0x2f2b,	// (0x000292c6) sctrl_sk_top_pane_g2_ParamLimits

0xfbcb,	// (0x00035f66) sctrl_sk_top_pane_g_ParamLimits

0x3abd,	// (0x00029e58) sctrl_sk_top_pane_t1_ParamLimits

0x3a95,	// (0x00029e30) aid_touch_sctrl_bottom_ParamLimits

0x3abd,	// (0x00029e58) sctrl_sk_bottom_pane_t1_ParamLimits

0x4d06,	// (0x0002b0a1) aid_area_touch_clock

0x89bb,	// (0x0002ed56) aid_vkb2_area_top_pane_cell_ParamLimits

0x89bb,	// (0x0002ed56) aid_vkb2_area_top_pane_cell

0x8a66,	// (0x0002ee01) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8a66,	// (0x0002ee01) aid_vkb2_area_bottom_pane_cell

0x5271,	// (0x0002b60c) popup_char_count_window

0x53d2,	// (0x0002b76d) popup_char_count_window_g1

0x53db,	// (0x0002b776) popup_char_count_window_g2

0x53e4,	// (0x0002b77f) popup_char_count_window_g3

0x0002,

0xfc8b,	// (0x00036026) popup_char_count_window_g

0x53ed,	// (0x0002b788) popup_char_count_window_t1

0x3b70,	// (0x00029f0b) popup_fep_char_preview_window_ParamLimits

0x3b70,	// (0x00029f0b) popup_fep_char_preview_window

0x89db,	// (0x0002ed76) vkb2_top_candi_pane_ParamLimits

0x89db,	// (0x0002ed76) vkb2_top_candi_pane

0xb6b5,	// (0x00031a50) cell_vkb2_top_candi_pane_ParamLimits

0xb6b5,	// (0x00031a50) cell_vkb2_top_candi_pane

0x40d4,	// (0x0002a46f) bg_popup_fep_char_preview_window_ParamLimits

0x40d4,	// (0x0002a46f) bg_popup_fep_char_preview_window

0x40e2,	// (0x0002a47d) popup_fep_char_preview_window_t1_ParamLimits

0x40e2,	// (0x0002a47d) popup_fep_char_preview_window_t1

0x53fb,	// (0x0002b796) bg_popup_fep_char_preview_window_g1

0x5403,	// (0x0002b79e) bg_popup_fep_char_preview_window_g2

0x540b,	// (0x0002b7a6) bg_popup_fep_char_preview_window_g3

0x5413,	// (0x0002b7ae) bg_popup_fep_char_preview_window_g4

0x541b,	// (0x0002b7b6) bg_popup_fep_char_preview_window_g5

0x411c,	// (0x0002a4b7) bg_popup_fep_char_preview_window_g6

0x5423,	// (0x0002b7be) bg_popup_fep_char_preview_window_g7

0x542b,	// (0x0002b7c6) bg_popup_fep_char_preview_window_g8

0x5433,	// (0x0002b7ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc92,	// (0x0003602d) bg_popup_fep_char_preview_window_g

0x2f2b,	// (0x000292c6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2f2b,	// (0x000292c6) cell_vkb2_top_candi_pane_g1

0x2f39,	// (0x000292d4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2f39,	// (0x000292d4) cell_vkb2_top_candi_pane_g2

0x43f3,	// (0x0002a78e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x43f3,	// (0x0002a78e) cell_vkb2_top_candi_pane_g3

0x4124,	// (0x0002a4bf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4124,	// (0x0002a4bf) cell_vkb2_top_candi_pane_g4

0xf549,	// (0x000358e4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf549,	// (0x000358e4) cell_vkb2_top_candi_pane_g5

0x4145,	// (0x0002a4e0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4145,	// (0x0002a4e0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfca5,	// (0x00036040) cell_vkb2_top_candi_pane_g_ParamLimits

0xfca5,	// (0x00036040) cell_vkb2_top_candi_pane_g

0x4153,	// (0x0002a4ee) cell_vkb2_top_candi_pane_t1

0x246a,	// (0x00028805) aid_size_touch_slider_mark_ParamLimits

0x246a,	// (0x00028805) aid_size_touch_slider_mark

0xb43d,	// (0x000317d8) grid_graphic2_catg_pane_ParamLimits

0xb43d,	// (0x000317d8) grid_graphic2_catg_pane

0xb4d1,	// (0x0003186c) popup_grid_graphic2_window_t1_ParamLimits

0xb4d1,	// (0x0003186c) popup_grid_graphic2_window_t1

0xb4e7,	// (0x00031882) popup_grid_graphic2_window_t2_ParamLimits

0xb4e7,	// (0x00031882) popup_grid_graphic2_window_t2

0x0001,

0xfc60,	// (0x00035ffb) popup_grid_graphic2_window_t_ParamLimits

0xfc60,	// (0x00035ffb) popup_grid_graphic2_window_t

0xc226,	// (0x000325c1) bg_button_pane_cp05_ParamLimits

0xb646,	// (0x000319e1) cell_graphic2_control_pane_g1_ParamLimits

0xb71b,	// (0x00031ab6) cell_graphic2_catg_pane_ParamLimits

0xb71b,	// (0x00031ab6) cell_graphic2_catg_pane

0xba38,	// (0x00031dd3) bg_button_pane_cp12

0xb72d,	// (0x00031ac8) cell_graphic2_catg_pane_g1

0x4cd2,	// (0x0002b06d) cell_tb_ext_pane_t1_ParamLimits

0x3f0a,	// (0x0002a2a5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3f0a,	// (0x0002a2a5) vkb2_top_cell_right_narrow_pane

0x3f22,	// (0x0002a2bd) vkb2_top_cell_right_wide_pane_ParamLimits

0x3f22,	// (0x0002a2bd) vkb2_top_cell_right_wide_pane

0x2bdc,	// (0x00028f77) bg_vkb2_func_pane_ParamLimits

0x2bdc,	// (0x00028f77) bg_vkb2_func_pane

0x3f93,	// (0x0002a32e) vkb2_top_cell_left_pane_g1_ParamLimits

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp03

0x3ff1,	// (0x0002a38c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd1bd,	// (0x00033558) bg_vkb2_func_pane_g1

0xd1c5,	// (0x00033560) bg_vkb2_func_pane_g2

0xd1d5,	// (0x00033570) bg_vkb2_func_pane_g3

0xd1cd,	// (0x00033568) bg_vkb2_func_pane_g4

0xd1dd,	// (0x00033578) bg_vkb2_func_pane_g5

0xd1e5,	// (0x00033580) bg_vkb2_func_pane_g6

0xd1ed,	// (0x00033588) bg_vkb2_func_pane_g7

0xd1f5,	// (0x00033590) bg_vkb2_func_pane_g8

0xd1b5,	// (0x00033550) bg_vkb2_func_pane_g9

0x0008,

0x056f,	// (0x0002690a) bg_vkb2_func_pane_g

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp01

0x3f93,	// (0x0002a32e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3f93,	// (0x0002a32e) vkb2_top_cell_right_wide_pane_g1

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2bdc,	// (0x00028f77) bg_vkb2_fuc_pane_cp02

0x3ff1,	// (0x0002a38c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3ff1,	// (0x0002a38c) vkb2_top_cell_right_narrow_pane_g1

0xacad,	// (0x00031048) aid_touch_area_decrease_ParamLimits

0xacad,	// (0x00031048) aid_touch_area_decrease

0xace7,	// (0x00031082) aid_touch_area_increase_ParamLimits

0xace7,	// (0x00031082) aid_touch_area_increase

0xad0f,	// (0x000310aa) aid_touch_area_mute_ParamLimits

0xad0f,	// (0x000310aa) aid_touch_area_mute

0xad3f,	// (0x000310da) aid_touch_area_slider_ParamLimits

0xad3f,	// (0x000310da) aid_touch_area_slider

0xad7f,	// (0x0003111a) popup_slider_window_g4_ParamLimits

0xad7f,	// (0x0003111a) popup_slider_window_g4

0xada7,	// (0x00031142) popup_slider_window_g5_ParamLimits

0xada7,	// (0x00031142) popup_slider_window_g5

0xaddb,	// (0x00031176) popup_slider_window_g6_ParamLimits

0xaddb,	// (0x00031176) popup_slider_window_g6

0x4aac,	// (0x0002ae47) popup_slider_window_t2_ParamLimits

0x4aac,	// (0x0002ae47) popup_slider_window_t2

0x0001,

0xfbbf,	// (0x00035f5a) popup_slider_window_t_ParamLimits

0xfbbf,	// (0x00035f5a) popup_slider_window_t

0xadf7,	// (0x00031192) slider_pane_ParamLimits

0xadf7,	// (0x00031192) slider_pane

0x543b,	// (0x0002b7d6) slider_pane_g1_ParamLimits

0x543b,	// (0x0002b7d6) slider_pane_g1

0x544f,	// (0x0002b7ea) slider_pane_g2_ParamLimits

0x544f,	// (0x0002b7ea) slider_pane_g2

0x5465,	// (0x0002b800) slider_pane_g3_ParamLimits

0x5465,	// (0x0002b800) slider_pane_g3

0x0003,

0xfcb2,	// (0x0003604d) slider_pane_g_ParamLimits

0xfcb2,	// (0x0003604d) slider_pane_g

0x9c43,	// (0x0002ffde) popup_tb_float_extension_window_ParamLimits

0x9c43,	// (0x0002ffde) popup_tb_float_extension_window

0x5491,	// (0x0002b82c) aid_size_cell_tb_float_ext

0xba38,	// (0x00031dd3) bg_popup_sub_window_cp28

0x549d,	// (0x0002b838) grid_tb_float_ext_pane

0x54a7,	// (0x0002b842) cell_tb_float_ext_pane_ParamLimits

0x54a7,	// (0x0002b842) cell_tb_float_ext_pane

0x54c1,	// (0x0002b85c) cell_tb_float_ext_pane_g1

0x54ca,	// (0x0002b865) grid_highlight_pane_cp12

0x87bf,	// (0x0002eb5a) cell_last_hwr_side_pane_ParamLimits

0x87bf,	// (0x0002eb5a) cell_last_hwr_side_pane

0xef5f,	// (0x000352fa) cell_last_hwr_side_pane_g1

0x54d3,	// (0x0002b86e) cell_last_hwr_side_pane_g2

0x0001,

0xfcbb,	// (0x00036056) cell_last_hwr_side_pane_g

0x8b42,	// (0x0002eedd) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8b42,	// (0x0002eedd) vkb2_area_bottom_space_btn_pane

0x2f2b,	// (0x000292c6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5326,	// (0x0002b6c1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4153,	// (0x0002a4ee) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4172,	// (0x0002a50d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4172,	// (0x0002a50d) vkb2_area_bottom_space_btn_pane_g1

0x41ac,	// (0x0002a547) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x41ac,	// (0x0002a547) vkb2_area_bottom_space_btn_pane_g2

0x41e2,	// (0x0002a57d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x41e2,	// (0x0002a57d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfcc0,	// (0x0003605b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfcc0,	// (0x0003605b) vkb2_area_bottom_space_btn_pane_g

0x2c9f,	// (0x0002903a) cel_fep_hwr_func_pane_ParamLimits

0x2c9f,	// (0x0002903a) cel_fep_hwr_func_pane

0x8794,	// (0x0002eb2f) cell_hwr_side_button_pane_ParamLimits

0x8794,	// (0x0002eb2f) cell_hwr_side_button_pane

0x4d06,	// (0x0002b0a1) aid_area_touch_clock_ParamLimits

0xbbdb,	// (0x00031f76) bg_uniindi_top_pane_ParamLimits

0x4d18,	// (0x0002b0b3) uniindi_top_pane_g1_ParamLimits

0x4d2e,	// (0x0002b0c9) uniindi_top_pane_g2_ParamLimits

0x4d3a,	// (0x0002b0d5) uniindi_top_pane_g3_ParamLimits

0x4d4b,	// (0x0002b0e6) uniindi_top_pane_g4_ParamLimits

0xfbe6,	// (0x00035f81) uniindi_top_pane_g_ParamLimits

0x4d58,	// (0x0002b0f3) uniindi_top_pane_t1_ParamLimits

0xbbdb,	// (0x00031f76) bg_vkb2_func_pane_cp01_ParamLimits

0xbbdb,	// (0x00031f76) bg_vkb2_func_pane_cp01

0x54dc,	// (0x0002b877) cel_fep_hwr_func_pane_g1_ParamLimits

0x54dc,	// (0x0002b877) cel_fep_hwr_func_pane_g1

0xbbdb,	// (0x00031f76) bg_vkb2_func_pane_cp02_ParamLimits

0xbbdb,	// (0x00031f76) bg_vkb2_func_pane_cp02

0x54dc,	// (0x0002b877) cell_hwr_side_button_pane_g1_ParamLimits

0x54dc,	// (0x0002b877) cell_hwr_side_button_pane_g1

0xd0cd,	// (0x00033468) status_pane_g4_ParamLimits

0xd0cd,	// (0x00033468) status_pane_g4

0xd0e5,	// (0x00033480) status_pane_t1

0xedee,	// (0x00035189) form2_midp_gauge_slider_cont_pane

0xedf6,	// (0x00035191) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa773,	// (0x00030b0e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa785,	// (0x00030b20) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf9f0,	// (0x00035d8b) form2_midp_gauge_slider_pane_t_ParamLimits

0xee08,	// (0x000351a3) form2_midp_slider_pane_ParamLimits

0x3b30,	// (0x00029ecb) aid_size_cell_func_vkb2_ParamLimits

0x3b30,	// (0x00029ecb) aid_size_cell_func_vkb2

0x547d,	// (0x0002b818) slider_pane_g4_ParamLimits

0x547d,	// (0x0002b818) slider_pane_g4

0x8bbd,	// (0x0002ef58) form2_midp_gauge_slider_pane_t2_cp01

0x8bcb,	// (0x0002ef66) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8bcb,	// (0x0002ef66) form2_midp_gauge_slider_pane_t3_cp01

0x4257,	// (0x0002a5f2) form2_midp_slider_pane_cp01

0xba38,	// (0x00031dd3) navi_smil_pane

0x550c,	// (0x0002b8a7) navi_smil_pane_g1

0x5514,	// (0x0002b8af) navi_smil_pane_t1

0x54ea,	// (0x0002b885) form2_midp_slider_pane_g1

0x54f3,	// (0x0002b88e) form2_midp_slider_pane_g2

0x54fb,	// (0x0002b896) form2_midp_slider_pane_g3

0x54ea,	// (0x0002b885) form2_midp_slider_pane_g4

0xb736,	// (0x00031ad1) form2_midp_slider_pane_g5

0x0004,

0xfcc9,	// (0x00036064) form2_midp_slider_pane_g

0x421c,	// (0x0002a5b7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x421c,	// (0x0002a5b7) vkb2_area_bottom_space_btn_pane_g4

0x9e1f,	// (0x000301ba) lc0_navi_pane_ParamLimits

0x9e1f,	// (0x000301ba) lc0_navi_pane

0x9e89,	// (0x00030224) lc0_stat_indi_pane_ParamLimits

0x9e89,	// (0x00030224) lc0_stat_indi_pane

0x9e9e,	// (0x00030239) ls0_title_pane_ParamLimits

0x9e9e,	// (0x00030239) ls0_title_pane

0xc226,	// (0x000325c1) bg_popup_sub_pane_cp14_ParamLimits

0x4ced,	// (0x0002b088) list_uniindi_pane_ParamLimits

0x4cf9,	// (0x0002b094) uniindi_top_pane_ParamLimits

0x4d94,	// (0x0002b12f) list_single_uniindi_pane_g1_ParamLimits

0x4da7,	// (0x0002b142) list_single_uniindi_pane_t1_ParamLimits

0x8be8,	// (0x0002ef83) lc0_stat_clock_pane_ParamLimits

0x8be8,	// (0x0002ef83) lc0_stat_clock_pane

0xb73f,	// (0x00031ada) lc0_stat_indi_pane_g1_ParamLimits

0xb73f,	// (0x00031ada) lc0_stat_indi_pane_g1

0xb74c,	// (0x00031ae7) lc0_stat_indi_pane_g2_ParamLimits

0xb74c,	// (0x00031ae7) lc0_stat_indi_pane_g2

0x0001,

0xfcd4,	// (0x0003606f) lc0_stat_indi_pane_g_ParamLimits

0xfcd4,	// (0x0003606f) lc0_stat_indi_pane_g

0x8bf5,	// (0x0002ef90) lc0_uni_indicator_pane_ParamLimits

0x8bf5,	// (0x0002ef90) lc0_uni_indicator_pane

0xb759,	// (0x00031af4) ls0_title_pane_g1_ParamLimits

0xb759,	// (0x00031af4) ls0_title_pane_g1

0xb76d,	// (0x00031b08) ls0_title_pane_t1_ParamLimits

0xb76d,	// (0x00031b08) ls0_title_pane_t1

0x8c02,	// (0x0002ef9d) lc0_uni_indicator_pane_g1_ParamLimits

0x8c02,	// (0x0002ef9d) lc0_uni_indicator_pane_g1

0x5522,	// (0x0002b8bd) lc0_stat_clock_pane_t1

0xba38,	// (0x00031dd3) main_ai5_pane

0x5530,	// (0x0002b8cb) ai5_sk_pane_ParamLimits

0x5530,	// (0x0002b8cb) ai5_sk_pane

0xb79b,	// (0x00031b36) cell_ai5_widget_pane_ParamLimits

0xb79b,	// (0x00031b36) cell_ai5_widget_pane

0x553d,	// (0x0002b8d8) aid_size_cell_widget_grid

0x5551,	// (0x0002b8ec) bg_ai5_widget_pane_ParamLimits

0x5551,	// (0x0002b8ec) bg_ai5_widget_pane

0xb824,	// (0x00031bbf) cell_ai5_widget_pane_g2

0xb834,	// (0x00031bcf) cell_ai5_widget_pane_g3

0xb853,	// (0x00031bee) cell_ai5_widget_pane_g4

0xb85f,	// (0x00031bfa) cell_ai5_widget_pane_g5

0xb86b,	// (0x00031c06) cell_ai5_widget_pane_g6

0xb877,	// (0x00031c12) cell_ai5_widget_pane_g7

0xb8bf,	// (0x00031c5a) cell_ai5_widget_pane_t1_ParamLimits

0xb8bf,	// (0x00031c5a) cell_ai5_widget_pane_t1

0xb8dc,	// (0x00031c77) cell_ai5_widget_pane_t2_ParamLimits

0xb8dc,	// (0x00031c77) cell_ai5_widget_pane_t2

0xb8f4,	// (0x00031c8f) cell_ai5_widget_pane_t3_ParamLimits

0xb8f4,	// (0x00031c8f) cell_ai5_widget_pane_t3

0xb90c,	// (0x00031ca7) cell_ai5_widget_pane_t4_ParamLimits

0xb90c,	// (0x00031ca7) cell_ai5_widget_pane_t4

0xb926,	// (0x00031cc1) cell_ai5_widget_pane_t5_ParamLimits

0xb926,	// (0x00031cc1) cell_ai5_widget_pane_t5

0x555d,	// (0x0002b8f8) cell_ai5_widget_pane_t6_ParamLimits

0x555d,	// (0x0002b8f8) cell_ai5_widget_pane_t6

0x556f,	// (0x0002b90a) cell_ai5_widget_pane_t7_ParamLimits

0x556f,	// (0x0002b90a) cell_ai5_widget_pane_t7

0xb945,	// (0x00031ce0) cell_ai5_widget_pane_t8_ParamLimits

0xb945,	// (0x00031ce0) cell_ai5_widget_pane_t8

0x0009,

0xfcd9,	// (0x00036074) cell_ai5_widget_pane_t_ParamLimits

0xfcd9,	// (0x00036074) cell_ai5_widget_pane_t

0xb991,	// (0x00031d2c) grid_ai5_widget_pane

0xc226,	// (0x000325c1) highlight_cell_ai5_widget_pane_ParamLimits

0xc226,	// (0x000325c1) highlight_cell_ai5_widget_pane

0xb9a7,	// (0x00031d42) ai5_sk_left_pane

0xb9b1,	// (0x00031d4c) ai5_sk_middle_pane

0xb9bb,	// (0x00031d56) ai5_sk_right_pane

0x5588,	// (0x0002b923) bg_ai5_widget_pane_g1_ParamLimits

0x5588,	// (0x0002b923) bg_ai5_widget_pane_g1

0x5594,	// (0x0002b92f) bg_ai5_widget_pane_g2_ParamLimits

0x5594,	// (0x0002b92f) bg_ai5_widget_pane_g2

0x55a0,	// (0x0002b93b) bg_ai5_widget_pane_g3_ParamLimits

0x55a0,	// (0x0002b93b) bg_ai5_widget_pane_g3

0x55ac,	// (0x0002b947) bg_ai5_widget_pane_g4_ParamLimits

0x55ac,	// (0x0002b947) bg_ai5_widget_pane_g4

0x55b8,	// (0x0002b953) bg_ai5_widget_pane_g5_ParamLimits

0x55b8,	// (0x0002b953) bg_ai5_widget_pane_g5

0x55c4,	// (0x0002b95f) bg_ai5_widget_pane_g6_ParamLimits

0x55c4,	// (0x0002b95f) bg_ai5_widget_pane_g6

0x55d0,	// (0x0002b96b) bg_ai5_widget_pane_g7_ParamLimits

0x55d0,	// (0x0002b96b) bg_ai5_widget_pane_g7

0x55dc,	// (0x0002b977) bg_ai5_widget_pane_g8_ParamLimits

0x55dc,	// (0x0002b977) bg_ai5_widget_pane_g8

0x55e8,	// (0x0002b983) bg_ai5_widget_pane_g9_ParamLimits

0x55e8,	// (0x0002b983) bg_ai5_widget_pane_g9

0x0008,

0xfcee,	// (0x00036089) bg_ai5_widget_pane_g_ParamLimits

0xfcee,	// (0x00036089) bg_ai5_widget_pane_g

0x561b,	// (0x0002b9b6) cell_shortcut_ai5_widget_pane_ParamLimits

0x561b,	// (0x0002b9b6) cell_shortcut_ai5_widget_pane

0xbae4,	// (0x00031e7f) bg_cell_shortcut_ai5_widget_pane

0x562c,	// (0x0002b9c7) cell_grid_ai5_widget_pane_g1

0x5635,	// (0x0002b9d0) highlight_cell_shortcut_ai5_widget_pane

0xd1bd,	// (0x00033558) ai5_sk_left_pane_g1

0x563d,	// (0x0002b9d8) ai5_sk_left_pane_g2

0x5645,	// (0x0002b9e0) ai5_sk_left_pane_g3

0x564d,	// (0x0002b9e8) ai5_sk_left_pane_g4

0x0003,

0xfd01,	// (0x0003609c) ai5_sk_left_pane_g

0x5655,	// (0x0002b9f0) ai5_sk_left_pane_t1

0xd1c5,	// (0x00033560) ai5_sk_right_pane_g1

0x5663,	// (0x0002b9fe) ai5_sk_right_pane_g2

0x566b,	// (0x0002ba06) ai5_sk_right_pane_g3

0x5673,	// (0x0002ba0e) ai5_sk_right_pane_g4

0x0003,

0xfd0a,	// (0x000360a5) ai5_sk_right_pane_g

0x567b,	// (0x0002ba16) ai5_sk_right_pane_t1

0xd1c5,	// (0x00033560) ai5_sk_middle_pane_g1

0xd1bd,	// (0x00033558) ai5_sk_middle_pane_g2

0xd1dd,	// (0x00033578) ai5_sk_middle_pane_g3

0x566b,	// (0x0002ba06) ai5_sk_middle_pane_g4

0x5645,	// (0x0002b9e0) ai5_sk_middle_pane_g5

0x5689,	// (0x0002ba24) ai5_sk_middle_pane_g6

0xb9c5,	// (0x00031d60) ai5_sk_middle_pane_g7

0x0006,

0xfd13,	// (0x000360ae) ai5_sk_middle_pane_g

0x9d0b,	// (0x000300a6) aid_touch_area_size_lc0_ParamLimits

0x9d0b,	// (0x000300a6) aid_touch_area_size_lc0

0x2f5a,	// (0x000292f5) cell_hwr_candidate_pane_t1_ParamLimits

0xcfe1,	// (0x0003337c) aid_touch_navi_pane

0x9f90,	// (0x0003032b) status_dt_navi_pane_ParamLimits

0x9f90,	// (0x0003032b) status_dt_navi_pane

0x9fa8,	// (0x00030343) status_dt_sta_pane_ParamLimits

0x9fa8,	// (0x00030343) status_dt_sta_pane

0xb9cd,	// (0x00031d68) dt_sta_controll_pane

0xb9da,	// (0x00031d75) dt_sta_indi_pane

0xb9e7,	// (0x00031d82) dt_sta_title_pane

0xbbdb,	// (0x00031f76) bg_dt_sta_indi_pane_ParamLimits

0xbbdb,	// (0x00031f76) bg_dt_sta_indi_pane

0xb9f9,	// (0x00031d94) dt_sta_battery_pane

0xba01,	// (0x00031d9c) dt_sta_indi_pane_g1

0x5691,	// (0x0002ba2c) dt_sta_indi_pane_g2

0x569a,	// (0x0002ba35) dt_sta_indi_pane_g3

0x0002,

0xfd22,	// (0x000360bd) dt_sta_indi_pane_g

0x56a3,	// (0x0002ba3e) dt_sta_signal_pane

0xc226,	// (0x000325c1) bg_dt_sta_title_pane_ParamLimits

0xc226,	// (0x000325c1) bg_dt_sta_title_pane

0xde7a,	// (0x00034215) dt_sta_title_pane_g1

0xba0a,	// (0x00031da5) dt_sta_title_pane_t1_ParamLimits

0xba0a,	// (0x00031da5) dt_sta_title_pane_t1

0xba38,	// (0x00031dd3) bg_dt_sta_control_pane

0xba1f,	// (0x00031dba) dt_sta_controll_pane_g1

0x56ac,	// (0x0002ba47) bg_dt_sta_title_pane_g1

0x56b5,	// (0x0002ba50) bg_dt_sta_title_pane_g2

0x56be,	// (0x0002ba59) bg_dt_sta_title_pane_g3

0x0002,

0xfd29,	// (0x000360c4) bg_dt_sta_title_pane_g

0xef5f,	// (0x000352fa) bg_dt_sta_indi_pane_g1

0x56c7,	// (0x0002ba62) dt_sta_signal_pane_g1

0x56cf,	// (0x0002ba6a) dt_sta_signal_pane_g2

0x0001,

0xfd30,	// (0x000360cb) dt_sta_signal_pane_g

0x56d7,	// (0x0002ba72) dt_sta_battery_pane_g1

0x56e0,	// (0x0002ba7b) dt_sta_battery_pane_t1

0xef5f,	// (0x000352fa) bg_dt_sta_control_pane_g1

0xc7dc,	// (0x00032b77) fep_china_uni_eep_pane

0xc7e4,	// (0x00032b7f) fep_china_uni_entry_pane_ParamLimits

0xc7f4,	// (0x00032b8f) popup_fep_china_uni_window_g1_ParamLimits

0xc804,	// (0x00032b9f) popup_fep_china_uni_window_g2_ParamLimits

0xc804,	// (0x00032b9f) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00035ad0) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00035ad0) popup_fep_china_uni_window_g

0x56ef,	// (0x0002ba8a) fep_china_uni_eep_pane_g1

0x56f7,	// (0x0002ba92) fep_china_uni_eep_pane_t1

0x5503,	// (0x0002b89e) aid_touch_area_size_smil_player

0xd0a0,	// (0x0003343b) lc0_clock_pane

0xd0d9,	// (0x00033474) status_pane_g5_ParamLimits

0xd0d9,	// (0x00033474) status_pane_g5

0x97d7,	// (0x0002fb72) popup_keymap_window

0xd0b9,	// (0x00033454) status_icon_pane

0xb834,	// (0x00031bcf) cell_ai5_widget_pane_g3_ParamLimits

0xb853,	// (0x00031bee) cell_ai5_widget_pane_g4_ParamLimits

0xb85f,	// (0x00031bfa) cell_ai5_widget_pane_g5_ParamLimits

0xb883,	// (0x00031c1e) cell_ai5_widget_pane_g8_ParamLimits

0xb883,	// (0x00031c1e) cell_ai5_widget_pane_g8

0xb897,	// (0x00031c32) cell_ai5_widget_pane_g9_ParamLimits

0xb897,	// (0x00031c32) cell_ai5_widget_pane_g9

0xb8ab,	// (0x00031c46) cell_ai5_widget_pane_g10_ParamLimits

0xb8ab,	// (0x00031c46) cell_ai5_widget_pane_g10

0x5706,	// (0x0002baa1) status_icon_pane_g1

0xba38,	// (0x00031dd3) bg_popup_sub_pane_cp13

0x570e,	// (0x0002baa9) popup_keymap_window_t1

0x9488,	// (0x0002f823) control_pane_g6_ParamLimits

0x9488,	// (0x0002f823) control_pane_g6

0x9495,	// (0x0002f830) control_pane_g7_ParamLimits

0x9495,	// (0x0002f830) control_pane_g7

0x94a2,	// (0x0002f83d) control_pane_g8_ParamLimits

0x94a2,	// (0x0002f83d) control_pane_g8

0xb9cd,	// (0x00031d68) dt_sta_controll_pane_ParamLimits

0xb9da,	// (0x00031d75) dt_sta_indi_pane_ParamLimits

0xb9e7,	// (0x00031d82) dt_sta_title_pane_ParamLimits

0xc168,	// (0x00032503) aid_size_touch_scroll_bar_cale

0x0981,	// (0x00026d1c) popup_discreet_window_ParamLimits

0x0981,	// (0x00026d1c) popup_discreet_window

0x8125,	// (0x0002e4c0) popup_sk_window

0xd762,	// (0x00033afd) bg_popup_sub_pane_cp28_ParamLimits

0xd762,	// (0x00033afd) bg_popup_sub_pane_cp28

0x571c,	// (0x0002bab7) popup_discreet_window_g1_ParamLimits

0x571c,	// (0x0002bab7) popup_discreet_window_g1

0x573c,	// (0x0002bad7) popup_discreet_window_t1_ParamLimits

0x573c,	// (0x0002bad7) popup_discreet_window_t1

0x575a,	// (0x0002baf5) popup_discreet_window_t2_ParamLimits

0x575a,	// (0x0002baf5) popup_discreet_window_t2

0x0002,

0xfd35,	// (0x000360d0) popup_discreet_window_t_ParamLimits

0xfd35,	// (0x000360d0) popup_discreet_window_t

0x4290,	// (0x0002a62b) popup_sk_window_g1

0x429a,	// (0x0002a635) popup_sk_window_g2

0x0001,

0xfd3c,	// (0x000360d7) popup_sk_window_g

0x57ac,	// (0x0002bb47) popup_sk_window_t1

0x57ba,	// (0x0002bb55) popup_sk_window_t1_copy1

0xb824,	// (0x00031bbf) cell_ai5_widget_pane_g2_ParamLimits

0xb957,	// (0x00031cf2) cell_ai5_widget_pane_t9_ParamLimits

0xb957,	// (0x00031cf2) cell_ai5_widget_pane_t9

0xba38,	// (0x00031dd3) main_fep_fshwr2_pane

0xba28,	// (0x00031dc3) aid_fshwr2_btn_pane

0xbc19,	// (0x00031fb4) aid_fshwr2_syb_pane

0xbc21,	// (0x00031fbc) aid_fshwr2_txt_pane

0xbc29,	// (0x00031fc4) fshwr2_func_candi_pane

0xbc33,	// (0x00031fce) fshwr2_hwr_syb_pane

0xbc41,	// (0x00031fdc) fshwr2_icf_pane

0xba38,	// (0x00031dd3) fshwr2_icf_bg_pane

0xbc4b,	// (0x00031fe6) fshwr2_icf_pane_t1_ParamLimits

0xbc4b,	// (0x00031fe6) fshwr2_icf_pane_t1

0xef5f,	// (0x000352fa) fshwr2_func_candi_pane_g1

0x57dc,	// (0x0002bb77) fshwr2_func_candi_row_pane_ParamLimits

0x57dc,	// (0x0002bb77) fshwr2_func_candi_row_pane

0xbc65,	// (0x00032000) cell_fshwr2_syb_pane_ParamLimits

0xbc65,	// (0x00032000) cell_fshwr2_syb_pane

0xf1e6,	// (0x00035581) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf1e6,	// (0x00035581) fshwr2_hwr_syb_pane_g1

0xba38,	// (0x00031dd3) bg_popup_call_pane_cp01

0x57ed,	// (0x0002bb88) fshwr2_func_candi_cell_pane_ParamLimits

0x57ed,	// (0x0002bb88) fshwr2_func_candi_cell_pane

0x581e,	// (0x0002bbb9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x581e,	// (0x0002bbb9) fshwr2_func_candi_cell_bg_pane

0x5838,	// (0x0002bbd3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5838,	// (0x0002bbd3) fshwr2_func_candi_cell_pane_g1

0x5858,	// (0x0002bbf3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5858,	// (0x0002bbf3) fshwr2_func_candi_cell_pane_t1

0xba38,	// (0x00031dd3) bg_button_pane_cp08

0xcc6d,	// (0x00033008) cell_fshwr2_syb_bg_pane

0xbc7f,	// (0x0003201a) cell_fshwr2_syb_bg_pane_g1

0x586b,	// (0x0002bc06) cell_fshwr2_syb_bg_pane_t1

0xc226,	// (0x000325c1) main_tmo_pane

0xa2e8,	// (0x00030683) uni_indicator_pane_g1_ParamLimits

0xa2fd,	// (0x00030698) uni_indicator_pane_g2_ParamLimits

0xa312,	// (0x000306ad) uni_indicator_pane_g3_ParamLimits

0xe13e,	// (0x000344d9) uni_indicator_pane_g4_ParamLimits

0xe13e,	// (0x000344d9) uni_indicator_pane_g4

0xe152,	// (0x000344ed) uni_indicator_pane_g5_ParamLimits

0xe152,	// (0x000344ed) uni_indicator_pane_g5

0xe166,	// (0x00034501) uni_indicator_pane_g6_ParamLimits

0xe166,	// (0x00034501) uni_indicator_pane_g6

0xf8e3,	// (0x00035c7e) uni_indicator_pane_g_ParamLimits

0xac8f,	// (0x0003102a) popup_tmo_note_window_ParamLimits

0xac8f,	// (0x0003102a) popup_tmo_note_window

0xba38,	// (0x00031dd3) fshwr2_bg_pane

0x5849,	// (0x0002bbe4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5849,	// (0x0002bbe4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd41,	// (0x000360dc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd41,	// (0x000360dc) fshwr2_func_candi_cell_pane_g

0xef5f,	// (0x000352fa) bg_popup_window_pane_cp01

0x587a,	// (0x0002bc15) bg_popup_window_pane_g1_cp01

0x5883,	// (0x0002bc1e) bg_popup_window_pane_cp22_ParamLimits

0x5883,	// (0x0002bc1e) bg_popup_window_pane_cp22

0x5891,	// (0x0002bc2c) listscroll_tmo_link_pane_ParamLimits

0x5891,	// (0x0002bc2c) listscroll_tmo_link_pane

0x58d1,	// (0x0002bc6c) popup_tmo_note_window_g1_ParamLimits

0x58d1,	// (0x0002bc6c) popup_tmo_note_window_g1

0x58de,	// (0x0002bc79) tmo_note_info_pane_ParamLimits

0x58de,	// (0x0002bc79) tmo_note_info_pane

0xbc87,	// (0x00032022) list_tmo_note_info_pane_g1_ParamLimits

0xbc87,	// (0x00032022) list_tmo_note_info_pane_g1

0x58f8,	// (0x0002bc93) list_tmo_note_info_pane_g2_ParamLimits

0x58f8,	// (0x0002bc93) list_tmo_note_info_pane_g2

0x0001,

0xfd46,	// (0x000360e1) list_tmo_note_info_pane_g_ParamLimits

0xfd46,	// (0x000360e1) list_tmo_note_info_pane_g

0x5914,	// (0x0002bcaf) list_tmo_note_info_text_pane_ParamLimits

0x5914,	// (0x0002bcaf) list_tmo_note_info_text_pane

0x5956,	// (0x0002bcf1) list_tmo_link_pane

0x5963,	// (0x0002bcfe) scroll_pane_cp20

0x5970,	// (0x0002bd0b) list_single_tmo_link_pane_ParamLimits

0x5970,	// (0x0002bd0b) list_single_tmo_link_pane

0x5980,	// (0x0002bd1b) list_single_tmo_link_pane_t1

0x598e,	// (0x0002bd29) list_tmo_note_info_text_pane_t1_ParamLimits

0x598e,	// (0x0002bd29) list_tmo_note_info_text_pane_t1

0x916f,	// (0x0002f50a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x916f,	// (0x0002f50a) aid_size_touch_scroll_bar_cp01

0x90c9,	// (0x0002f464) aid_size_touch_slider_marker

0x8115,	// (0x0002e4b0) popup_settings_window_ParamLimits

0x8115,	// (0x0002e4b0) popup_settings_window

0x670c,	// (0x0002caa7) popup_candi_list_indi_window

0xcfe1,	// (0x0003337c) aid_touch_navi_pane_ParamLimits

0x3a69,	// (0x00029e04) rs_clock_indi_pane

0x3a72,	// (0x00029e0d) sctrl_sk_bottom_pane_ParamLimits

0x3a83,	// (0x00029e1e) sctrl_sk_top_pane_ParamLimits

0x3b8a,	// (0x00029f25) popup_fep_tooltip_window

0x553d,	// (0x0002b8d8) aid_size_cell_widget_grid_ParamLimits

0xb818,	// (0x00031bb3) cell_ai5_widget_pane_g1_ParamLimits

0xb818,	// (0x00031bb3) cell_ai5_widget_pane_g1

0xb86b,	// (0x00031c06) cell_ai5_widget_pane_g6_ParamLimits

0xb877,	// (0x00031c12) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x05a9,	// (0x00026944) cell_ai5_widget_pane_g_ParamLimits

0x05a9,	// (0x00026944) cell_ai5_widget_pane_g

0xb97b,	// (0x00031d16) cell_ai5_widget_pane_t10_ParamLimits

0xb97b,	// (0x00031d16) cell_ai5_widget_pane_t10

0xb991,	// (0x00031d2c) grid_ai5_widget_pane_ParamLimits

0x55f4,	// (0x0002b98f) cell_contacts_ai5_widget_pane_ParamLimits

0x55f4,	// (0x0002b98f) cell_contacts_ai5_widget_pane

0x576f,	// (0x0002bb0a) popup_discreet_window_t3_ParamLimits

0x576f,	// (0x0002bb0a) popup_discreet_window_t3

0x57c8,	// (0x0002bb63) popup_fshwr2_char_preview_window_ParamLimits

0x57c8,	// (0x0002bb63) popup_fshwr2_char_preview_window

0xbc9e,	// (0x00032039) tmo_note_info_pane_t1

0xbcb3,	// (0x0003204e) tmo_note_info_pane_t2

0xbccc,	// (0x00032067) tmo_note_info_pane_t3

0x5932,	// (0x0002bccd) tmo_note_info_pane_t4

0x5944,	// (0x0002bcdf) tmo_note_info_pane_t5

0x0004,

0xfd4b,	// (0x000360e6) tmo_note_info_pane_t

0x5956,	// (0x0002bcf1) list_tmo_link_pane_ParamLimits

0x5963,	// (0x0002bcfe) scroll_pane_cp20_ParamLimits

0xba38,	// (0x00031dd3) bg_popup_fep_char_preview_window_cp01

0x59a7,	// (0x0002bd42) popup_fshwr2_char_preview_window_t1

0x59b5,	// (0x0002bd50) popup_candi_list_indi_window_g1

0x59be,	// (0x0002bd59) bg_cell_contacts_ai5_widget_pane

0x59ca,	// (0x0002bd65) cell_contacts_ai5_widget_pane_g1

0x59de,	// (0x0002bd79) cell_contacts_ai5_widget_pane_g2

0x59ed,	// (0x0002bd88) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd56,	// (0x000360f1) cell_contacts_ai5_widget_pane_g

0x5a00,	// (0x0002bd9b) cell_contacts_ai5_widget_pane_t1

0xc226,	// (0x000325c1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5a7a,	// (0x0002be15) settings_container_pane

0xcc6d,	// (0x00033008) listscroll_set_pane_copy1

0xe94f,	// (0x00034cea) scroll_pane_cp121_copy1

0x5a86,	// (0x0002be21) set_content_pane_copy1

0x5a8e,	// (0x0002be29) aid_height_set_list_copy1_ParamLimits

0x5a8e,	// (0x0002be29) aid_height_set_list_copy1

0xd953,	// (0x00033cee) aid_size_parent_copy1_ParamLimits

0xd953,	// (0x00033cee) aid_size_parent_copy1

0x5a9a,	// (0x0002be35) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5a9a,	// (0x0002be35) button_value_adjust_pane_cp6_copy1

0xc37d,	// (0x00032718) list_highlight_pane_cp2_copy1_ParamLimits

0xc37d,	// (0x00032718) list_highlight_pane_cp2_copy1

0x5aae,	// (0x0002be49) list_set_pane_copy1_ParamLimits

0x5aae,	// (0x0002be49) list_set_pane_copy1

0x5a15,	// (0x0002bdb0) main_pane_set_t1_copy1_ParamLimits

0x5a15,	// (0x0002bdb0) main_pane_set_t1_copy1

0x5a4f,	// (0x0002bdea) main_pane_set_t2_copy1_ParamLimits

0x5a4f,	// (0x0002bdea) main_pane_set_t2_copy1

0x5b5b,	// (0x0002bef6) main_pane_set_t3_copy1

0x5b69,	// (0x0002bf04) main_pane_set_t4_copy1

0x5a6e,	// (0x0002be09) set_content_pane_g1_copy1_ParamLimits

0x5a6e,	// (0x0002be09) set_content_pane_g1_copy1

0x5b77,	// (0x0002bf12) setting_code_pane_copy1

0x5b81,	// (0x0002bf1c) setting_slider_graphic_pane_copy1

0x5b81,	// (0x0002bf1c) setting_slider_pane_copy1

0x5b81,	// (0x0002bf1c) setting_text_pane_copy1

0x5b8b,	// (0x0002bf26) setting_volume_pane_copy1

0x5b94,	// (0x0002bf2f) settings_code_pane_cp2_copy1

0x5b9c,	// (0x0002bf37) settings_code_pane_cp_copy1_ParamLimits

0x5b9c,	// (0x0002bf37) settings_code_pane_cp_copy1

0x5bb0,	// (0x0002bf4b) volume_set_pane_copy1

0x5bb8,	// (0x0002bf53) volume_set_pane_g10_copy1

0x5bc0,	// (0x0002bf5b) volume_set_pane_g1_copy1

0x5bc8,	// (0x0002bf63) volume_set_pane_g2_copy1

0x5bd0,	// (0x0002bf6b) volume_set_pane_g3_copy1

0x5bd8,	// (0x0002bf73) volume_set_pane_g4_copy1

0x5be0,	// (0x0002bf7b) volume_set_pane_g5_copy1

0x5be8,	// (0x0002bf83) volume_set_pane_g6_copy1

0x5bf0,	// (0x0002bf8b) volume_set_pane_g7_copy1

0x5bf8,	// (0x0002bf93) volume_set_pane_g8_copy1

0x5c00,	// (0x0002bf9b) volume_set_pane_g9_copy1

0xbaa8,	// (0x00031e43) bg_set_opt_pane_cp_copy1_ParamLimits

0xbaa8,	// (0x00031e43) bg_set_opt_pane_cp_copy1

0x5c08,	// (0x0002bfa3) setting_slider_pane_t1_copy1_ParamLimits

0x5c08,	// (0x0002bfa3) setting_slider_pane_t1_copy1

0x5c26,	// (0x0002bfc1) setting_slider_pane_t2_copy1_ParamLimits

0x5c26,	// (0x0002bfc1) setting_slider_pane_t2_copy1

0x5c40,	// (0x0002bfdb) setting_slider_pane_t3_copy1_ParamLimits

0x5c40,	// (0x0002bfdb) setting_slider_pane_t3_copy1

0x5c58,	// (0x0002bff3) slider_set_pane_copy1_ParamLimits

0x5c58,	// (0x0002bff3) slider_set_pane_copy1

0xc28d,	// (0x00032628) set_opt_bg_pane_g1_copy2

0xc295,	// (0x00032630) set_opt_bg_pane_g2_copy2

0x5c6e,	// (0x0002c009) set_opt_bg_pane_g3_copy2

0xc2a5,	// (0x00032640) set_opt_bg_pane_g4_copy2

0xc2ad,	// (0x00032648) set_opt_bg_pane_g5_copy2

0xc2b5,	// (0x00032650) set_opt_bg_pane_g6_copy2

0x5c78,	// (0x0002c013) set_opt_bg_pane_g7_copy2

0x5c80,	// (0x0002c01b) set_opt_bg_pane_g8_copy2

0x5c8a,	// (0x0002c025) set_opt_bg_pane_g9_copy2

0x42a4,	// (0x0002a63f) aid_size_touch_slider_mark_copy1_ParamLimits

0x42a4,	// (0x0002a63f) aid_size_touch_slider_mark_copy1

0x5c94,	// (0x0002c02f) slider_set_pane_g1_copy1

0x42b8,	// (0x0002a653) slider_set_pane_g2_copy1

0x248a,	// (0x00028825) slider_set_pane_g3_copy1_ParamLimits

0x248a,	// (0x00028825) slider_set_pane_g3_copy1

0x249e,	// (0x00028839) slider_set_pane_g4_copy1_ParamLimits

0x249e,	// (0x00028839) slider_set_pane_g4_copy1

0x24b6,	// (0x00028851) slider_set_pane_g5_copy1_ParamLimits

0x24b6,	// (0x00028851) slider_set_pane_g5_copy1

0x248a,	// (0x00028825) slider_set_pane_g6_copy1_ParamLimits

0x248a,	// (0x00028825) slider_set_pane_g6_copy1

0x42c0,	// (0x0002a65b) slider_set_pane_g7_copy1_ParamLimits

0x42c0,	// (0x0002a65b) slider_set_pane_g7_copy1

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp2_copy1

0x5c9d,	// (0x0002c038) setting_slider_graphic_pane_g1_copy1

0x5ca6,	// (0x0002c041) setting_slider_graphic_pane_t1_copy1

0x5cb6,	// (0x0002c051) setting_slider_graphic_pane_t2_copy1

0x5cc6,	// (0x0002c061) slider_set_pane_cp_copy1

0x5cd6,	// (0x0002c071) input_focus_pane_cp1_copy1

0x5cdf,	// (0x0002c07a) list_set_text_pane_copy1

0x5ce7,	// (0x0002c082) setting_text_pane_g1_copy1

0x6eb3,	// (0x0002d24e) set_text_pane_t1_copy1

0x5cd6,	// (0x0002c071) input_focus_pane_cp2_copy1

0x5ce7,	// (0x0002c082) setting_code_pane_g1_copy1

0x5cf0,	// (0x0002c08b) setting_code_pane_t1_copy1

0x5cfe,	// (0x0002c099) list_set_graphic_pane_copy1

0xba4c,	// (0x00031de7) bg_set_opt_pane_cp4_copy1

0xc96f,	// (0x00032d0a) list_set_graphic_pane_g1_copy1_ParamLimits

0xc96f,	// (0x00032d0a) list_set_graphic_pane_g1_copy1

0x5d12,	// (0x0002c0ad) list_set_graphic_pane_g2_copy1

0xc987,	// (0x00032d22) list_set_graphic_pane_t1_copy1_ParamLimits

0xc987,	// (0x00032d22) list_set_graphic_pane_t1_copy1

0xef5f,	// (0x000352fa) rs_clock_indi_pane_g1

0x5d1a,	// (0x0002c0b5) rs_clock_indi_pane_t1

0x5d28,	// (0x0002c0c3) rs_indi_pane

0x5d30,	// (0x0002c0cb) rs_indi_pane_g1

0x5d39,	// (0x0002c0d4) rs_indi_pane_g2

0x5d42,	// (0x0002c0dd) rs_indi_pane_g3

0x0002,

0xfd5d,	// (0x000360f8) rs_indi_pane_g

0xcc6d,	// (0x00033008) bg_popup_preview_window_pane_cp03

0x5d4b,	// (0x0002c0e6) popup_fep_tooltip_window_t1

0x3685,	// (0x00029a20) popup_note2_window_g2_ParamLimits

0x3685,	// (0x00029a20) popup_note2_window_g2

0x0001,

0xfb36,	// (0x00035ed1) popup_note2_window_g_ParamLimits

0xfb36,	// (0x00035ed1) popup_note2_window_g

0x4563,	// (0x0002a8fe) bg_popup_sub_pane_cp11_ParamLimits

0x4570,	// (0x0002a90b) cell_ai3_links_pane_g1_ParamLimits

0x4587,	// (0x0002a922) cell_ai3_links_pane_t1

0x6eb3,	// (0x0002d24e) set_text_pane_t1_copy1_ParamLimits

0xcb7c,	// (0x00032f17) cell_graphic_popup_pane_cp2_ParamLimits

0xcb7c,	// (0x00032f17) cell_graphic_popup_pane_cp2

0x5d59,	// (0x0002c0f4) cell_graphic_popup_pane_g1_cp2

0xbf7b,	// (0x00032316) cell_graphic_popup_pane_g2_cp2

0x5d61,	// (0x0002c0fc) cell_graphic_popup_pane_g3_cp2

0x5d69,	// (0x0002c104) cell_graphic_popup_pane_t2_cp2

0xbf8c,	// (0x00032327) grid_highlight_pane_cp3_cp2

0xc527,	// (0x000328c2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc226,	// (0x000325c1) main_tmo_pane_ParamLimits

0xac83,	// (0x0003101e) popup_tmo_big_image_note_window

0xb808,	// (0x00031ba3) cell_ai5_widget_list_pane

0xb810,	// (0x00031bab) cell_ai5_widget_lrg_icon_pane

0xbc9e,	// (0x00032039) tmo_note_info_pane_t1_ParamLimits

0xbcb3,	// (0x0003204e) tmo_note_info_pane_t2_ParamLimits

0xbccc,	// (0x00032067) tmo_note_info_pane_t3_ParamLimits

0x5932,	// (0x0002bccd) tmo_note_info_pane_t4_ParamLimits

0x5944,	// (0x0002bcdf) tmo_note_info_pane_t5_ParamLimits

0xfd4b,	// (0x000360e6) tmo_note_info_pane_t_ParamLimits

0x5a7a,	// (0x0002be15) settings_container_pane_ParamLimits

0x5cce,	// (0x0002c069) indicator_popup_pane_cp5

0x5cce,	// (0x0002c069) indicator_popup_pane_cp6

0x5cfe,	// (0x0002c099) list_set_graphic_pane_copy1_ParamLimits

0xba38,	// (0x00031dd3) bg_popup_window_pane_cp23

0x5d77,	// (0x0002c112) popup_tmo_big_image_note_window_g1

0x5d82,	// (0x0002c11d) popup_tmo_big_image_note_window_t1

0x5d92,	// (0x0002c12d) popup_tmo_big_image_note_window_t2

0x5da2,	// (0x0002c13d) popup_tmo_big_image_note_window_t3

0x0002,

0xfd64,	// (0x000360ff) popup_tmo_big_image_note_window_t

0xbce1,	// (0x0003207c) cell_ai5_widget_lrg_icon_pane_g1

0xbce9,	// (0x00032084) cell_ai5_widget_lrg_icon_pane_t1

0xbcf7,	// (0x00032092) cell_ai5_widget_list_row_pane_ParamLimits

0xbcf7,	// (0x00032092) cell_ai5_widget_list_row_pane

0xbd10,	// (0x000320ab) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbd10,	// (0x000320ab) cell_ai5_widget_list_row_pane_g1

0xbd1d,	// (0x000320b8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbd1d,	// (0x000320b8) cell_ai5_widget_list_row_pane_t1

0xbd35,	// (0x000320d0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbd35,	// (0x000320d0) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfd6b,	// (0x00036106) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd6b,	// (0x00036106) cell_ai5_widget_list_row_pane_t

0x08a8,	// (0x00026c43) main_fep_vtchi_ss_pane

0x5db2,	// (0x0002c14d) popup_fep_char_pre_window

0x5dba,	// (0x0002c155) popup_fep_ituss_window

0x5ddb,	// (0x0002c176) popup_fep_vkbss_window

0x5dfa,	// (0x0002c195) grid_vkbss_keypad_pane_ParamLimits

0x5dfa,	// (0x0002c195) grid_vkbss_keypad_pane

0x5e0a,	// (0x0002c1a5) ituss_keypad_pane

0x5e22,	// (0x0002c1bd) aid_vkbss_key_offset_ParamLimits

0x5e22,	// (0x0002c1bd) aid_vkbss_key_offset

0x5e2e,	// (0x0002c1c9) cell_vkbss_key_pane_ParamLimits

0x5e2e,	// (0x0002c1c9) cell_vkbss_key_pane

0x5e44,	// (0x0002c1df) bg_cell_vkbss_key_g1_ParamLimits

0x5e44,	// (0x0002c1df) bg_cell_vkbss_key_g1

0x5e50,	// (0x0002c1eb) cell_vkbss_key_3p_pane_ParamLimits

0x5e50,	// (0x0002c1eb) cell_vkbss_key_3p_pane

0x5e6a,	// (0x0002c205) cell_vkbss_key_g1_ParamLimits

0x5e6a,	// (0x0002c205) cell_vkbss_key_g1

0x5e84,	// (0x0002c21f) cell_vkbss_key_t1_ParamLimits

0x5e84,	// (0x0002c21f) cell_vkbss_key_t1

0x5eaf,	// (0x0002c24a) cell_ituss_key_pane_ParamLimits

0x5eaf,	// (0x0002c24a) cell_ituss_key_pane

0x5ebf,	// (0x0002c25a) bg_cell_ituss_key_g1_ParamLimits

0x5ebf,	// (0x0002c25a) bg_cell_ituss_key_g1

0x5ecb,	// (0x0002c266) cell_ituss_key_pane_g1_ParamLimits

0x5ecb,	// (0x0002c266) cell_ituss_key_pane_g1

0x5ed7,	// (0x0002c272) cell_ituss_key_pane_g2_ParamLimits

0x5ed7,	// (0x0002c272) cell_ituss_key_pane_g2

0x0001,

0xfd70,	// (0x0003610b) cell_ituss_key_pane_g_ParamLimits

0xfd70,	// (0x0003610b) cell_ituss_key_pane_g

0x5ef0,	// (0x0002c28b) cell_ituss_key_t1_ParamLimits

0x5ef0,	// (0x0002c28b) cell_ituss_key_t1

0x5f1e,	// (0x0002c2b9) cell_ituss_key_t2_ParamLimits

0x5f1e,	// (0x0002c2b9) cell_ituss_key_t2

0x5f4f,	// (0x0002c2ea) cell_ituss_key_t3_ParamLimits

0x5f4f,	// (0x0002c2ea) cell_ituss_key_t3

0x5f80,	// (0x0002c31b) cell_ituss_key_t4_ParamLimits

0x5f80,	// (0x0002c31b) cell_ituss_key_t4

0x0003,

0xfd75,	// (0x00036110) cell_ituss_key_t_ParamLimits

0xfd75,	// (0x00036110) cell_ituss_key_t

0x5fb1,	// (0x0002c34c) cell_vkbss_key_3p_pane_g1

0x5fb9,	// (0x0002c354) cell_vkbss_key_3p_pane_g2

0x5fc1,	// (0x0002c35c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd7e,	// (0x00036119) cell_vkbss_key_3p_pane_g

0xba38,	// (0x00031dd3) bg_popup_fep_char_preview_window_cp02

0x5fc9,	// (0x0002c364) popup_fep_char_pre_window_t1

0xb7fe,	// (0x00031b99) main_ai5_sk_pane

0x59be,	// (0x0002bd59) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x59ca,	// (0x0002bd65) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x59de,	// (0x0002bd79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x59ed,	// (0x0002bd88) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd56,	// (0x000360f1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x5a00,	// (0x0002bd9b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc226,	// (0x000325c1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbd47,	// (0x000320e2) main_ai5_sk_pane_g1

0xd5a0,	// (0x0003393b) popup_query_code_window_g1

0x5dd0,	// (0x0002c16b) popup_fep_vkb_icf_pane

0x5de4,	// (0x0002c17f) popup_fep_vtchi_icf_pane

0xc226,	// (0x000325c1) bg_icf_pane

0x5fe7,	// (0x0002c382) list_vkb_icf_pane

0xc226,	// (0x000325c1) bg_icf_pane_cp01

0x4893,	// (0x0002ac2e) vtchi_icf_list_pane

0x6007,	// (0x0002c3a2) list_vkb_icf_pane_t1_ParamLimits

0x6007,	// (0x0002c3a2) list_vkb_icf_pane_t1

0x6021,	// (0x0002c3bc) vtchi_icf_list_pane_t1_ParamLimits

0x6021,	// (0x0002c3bc) vtchi_icf_list_pane_t1

0x5dba,	// (0x0002c155) popup_fep_ituss_window_ParamLimits

0x5de4,	// (0x0002c17f) popup_fep_vtchi_icf_pane_ParamLimits

0x5e0a,	// (0x0002c1a5) ituss_keypad_pane_ParamLimits

0x5e19,	// (0x0002c1b4) ituss_sks_pane

0xc226,	// (0x000325c1) bg_icf_pane_ParamLimits

0x5fd8,	// (0x0002c373) icf_edit_indi_pane_ParamLimits

0x5fd8,	// (0x0002c373) icf_edit_indi_pane

0x5fe7,	// (0x0002c382) list_vkb_icf_pane_ParamLimits

0xc226,	// (0x000325c1) bg_icf_pane_cp01_ParamLimits

0x5ff3,	// (0x0002c38e) icf_edit_indi_pane_cp01_ParamLimits

0x5ff3,	// (0x0002c38e) icf_edit_indi_pane_cp01

0x5fff,	// (0x0002c39a) vtchi_query_pane

0xf1e6,	// (0x00035581) icf_edit_indi_pane_g1_ParamLimits

0xf1e6,	// (0x00035581) icf_edit_indi_pane_g1

0x6046,	// (0x0002c3e1) icf_edit_indi_pane_g2_ParamLimits

0x6046,	// (0x0002c3e1) icf_edit_indi_pane_g2

0x0001,

0xfd85,	// (0x00036120) icf_edit_indi_pane_g_ParamLimits

0xfd85,	// (0x00036120) icf_edit_indi_pane_g

0x6052,	// (0x0002c3ed) icf_edit_indi_pane_t1

0x6060,	// (0x0002c3fb) bg_input_focus_pane_cp042

0xc15f,	// (0x000324fa) vtchi_button_pane

0x6069,	// (0x0002c404) vtchi_query_pane_t1

0x6077,	// (0x0002c412) vtchi_query_pane_t2

0x6085,	// (0x0002c420) vtchi_query_pane_t3

0x0002,

0xfd8a,	// (0x00036125) vtchi_query_pane_t

0xba38,	// (0x00031dd3) bg_button_pane_cp13

0x6093,	// (0x0002c42e) vtchi_button_pane_g1

0x4dde,	// (0x0002b179) ituss_sks_pane_g1

0x609b,	// (0x0002c436) ituss_sks_pane_g2

0x0001,

0xfd91,	// (0x0003612c) ituss_sks_pane_g

0x60a4,	// (0x0002c43f) ituss_sks_pane_t1

0x60b2,	// (0x0002c44d) ituss_sks_pane_t2

0x0001,

0xfd96,	// (0x00036131) ituss_sks_pane_t

0xec2c,	// (0x00034fc7) indicator_nsta_pane_cp_g1

0xec35,	// (0x00034fd0) indicator_nsta_pane_cp_g2

0xec3d,	// (0x00034fd8) indicator_nsta_pane_cp_g3

0xec45,	// (0x00034fe0) indicator_nsta_pane_cp_g4

0xec4d,	// (0x00034fe8) indicator_nsta_pane_cp_g5

0xec55,	// (0x00034ff0) indicator_nsta_pane_cp_g6

0x0005,

0x022c,	// (0x000265c7) indicator_nsta_pane_cp_g

0xb628,	// (0x000319c3) cell_graphic2_pane_t2_ParamLimits

0xb628,	// (0x000319c3) cell_graphic2_pane_t2

0x0001,

0xfc75,	// (0x00036010) cell_graphic2_pane_t_ParamLimits

0xfc75,	// (0x00036010) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
