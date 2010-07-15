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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000309c8 };

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
0x5b25,	// (0x000364ed) Screen

0x5b31,	// (0x000364f9) application_window_ParamLimits

0x5b31,	// (0x000364f9) application_window

0x22ba,	// (0x00032c82) screen_g1

0x5b8d,	// (0x00036555) area_bottom_pane_ParamLimits

0x5b8d,	// (0x00036555) area_bottom_pane

0x5c4d,	// (0x00036615) area_top_pane_ParamLimits

0x5c4d,	// (0x00036615) area_top_pane

0x5ceb,	// (0x000366b3) main_pane_ParamLimits

0x5ceb,	// (0x000366b3) main_pane

0x22c4,	// (0x00032c8c) misc_graphics

0x97fa,	// (0x0003a1c2) battery_pane_ParamLimits

0x97fa,	// (0x0003a1c2) battery_pane

0xa4c8,	// (0x0003ae90) bg_status_flat_pane_g8

0xa4d0,	// (0x0003ae98) bg_status_flat_pane_g9

0x98c2,	// (0x0003a28a) context_pane_ParamLimits

0x98c2,	// (0x0003a28a) context_pane

0x99d8,	// (0x0003a3a0) navi_pane_ParamLimits

0x99d8,	// (0x0003a3a0) navi_pane

0x9a5c,	// (0x0003a424) signal_pane_ParamLimits

0x9a5c,	// (0x0003a424) signal_pane

0x0008,

0xf86a,	// (0x00040232) bg_status_flat_pane_g

0x9ac9,	// (0x0003a491) status_pane_g1_ParamLimits

0x9ac9,	// (0x0003a491) status_pane_g1

0x9add,	// (0x0003a4a5) status_pane_g2_ParamLimits

0x9add,	// (0x0003a4a5) status_pane_g2

0x9ae9,	// (0x0003a4b1) status_pane_g3_ParamLimits

0x9ae9,	// (0x0003a4b1) status_pane_g3

0x0004,

0xf796,	// (0x0004015e) status_pane_g_ParamLimits

0xf796,	// (0x0004015e) status_pane_g

0x9b1d,	// (0x0003a4e5) title_pane_ParamLimits

0x9b1d,	// (0x0003a4e5) title_pane

0x9b5a,	// (0x0003a522) uni_indicator_pane_ParamLimits

0x9b5a,	// (0x0003a522) uni_indicator_pane

0x972a,	// (0x0003a0f2) bg_list_pane_ParamLimits

0x972a,	// (0x0003a0f2) bg_list_pane

0x472f,	// (0x000350f7) find_pane

0x974a,	// (0x0003a112) listscroll_app_pane_ParamLimits

0x974a,	// (0x0003a112) listscroll_app_pane

0x9756,	// (0x0003a11e) listscroll_form_pane

0x5aa7,	// (0x0003646f) listscroll_gen_pane_ParamLimits

0x5aa7,	// (0x0003646f) listscroll_gen_pane

0x79fe,	// (0x000383c6) listscroll_set_pane

0x6b9e,	// (0x00037566) main_idle_act_pane

0x7516,	// (0x00037ede) main_idle_trad_pane

0x7516,	// (0x00037ede) main_list_empty_pane

0x974a,	// (0x0003a112) main_midp_pane

0x9770,	// (0x0003a138) main_pane_g1_ParamLimits

0x9770,	// (0x0003a138) main_pane_g1

0x7a14,	// (0x000383dc) popup_ai_message_window_ParamLimits

0x7a14,	// (0x000383dc) popup_ai_message_window

0x7ab8,	// (0x00038480) popup_fep_china_uni_window_ParamLimits

0x7ab8,	// (0x00038480) popup_fep_china_uni_window

0x7b12,	// (0x000384da) popup_fep_japan_candidate_window_ParamLimits

0x7b12,	// (0x000384da) popup_fep_japan_candidate_window

0x7b30,	// (0x000384f8) popup_fep_japan_predictive_window_ParamLimits

0x7b30,	// (0x000384f8) popup_fep_japan_predictive_window

0x7b60,	// (0x00038528) popup_find_window

0x7b6d,	// (0x00038535) popup_grid_graphic_window_ParamLimits

0x7b6d,	// (0x00038535) popup_grid_graphic_window

0x7b97,	// (0x0003855f) popup_large_graphic_colour_window

0x7bbd,	// (0x00038585) popup_menu_window_ParamLimits

0x7bbd,	// (0x00038585) popup_menu_window

0x7d79,	// (0x00038741) popup_note_image_window

0x7d65,	// (0x0003872d) popup_note_wait_window_ParamLimits

0x7d65,	// (0x0003872d) popup_note_wait_window

0x7d65,	// (0x0003872d) popup_note_window_ParamLimits

0x7d65,	// (0x0003872d) popup_note_window

0x7dcf,	// (0x00038797) popup_query_code_window_ParamLimits

0x7dcf,	// (0x00038797) popup_query_code_window

0x7de3,	// (0x000387ab) popup_query_data_code_window_ParamLimits

0x7de3,	// (0x000387ab) popup_query_data_code_window

0x7e00,	// (0x000387c8) popup_query_data_window_ParamLimits

0x7e00,	// (0x000387c8) popup_query_data_window

0x7e1c,	// (0x000387e4) popup_query_sat_info_window_ParamLimits

0x7e1c,	// (0x000387e4) popup_query_sat_info_window

0x7e55,	// (0x0003881d) popup_snote_single_graphic_window_ParamLimits

0x7e55,	// (0x0003881d) popup_snote_single_graphic_window

0x7e55,	// (0x0003881d) popup_snote_single_text_window_ParamLimits

0x7e55,	// (0x0003881d) popup_snote_single_text_window

0x7e6a,	// (0x00038832) popup_sub_window_general

0x7f9a,	// (0x00038962) popup_window_general_ParamLimits

0x7f9a,	// (0x00038962) popup_window_general

0x977e,	// (0x0003a146) power_save_pane

0x7882,	// (0x0003824a) control_pane_g1_ParamLimits

0x7882,	// (0x0003824a) control_pane_g1

0x78a9,	// (0x00038271) control_pane_g2_ParamLimits

0x78a9,	// (0x00038271) control_pane_g2

0x78d0,	// (0x00038298) control_pane_g3_ParamLimits

0x78d0,	// (0x00038298) control_pane_g3

0x0007,

0xf77e,	// (0x00040146) control_pane_g_ParamLimits

0xf77e,	// (0x00040146) control_pane_g

0x7901,	// (0x000382c9) control_pane_t1_ParamLimits

0x7901,	// (0x000382c9) control_pane_t1

0x7955,	// (0x0003831d) control_pane_t2_ParamLimits

0x7955,	// (0x0003831d) control_pane_t2

0x0002,

0xf78f,	// (0x00040157) control_pane_t_ParamLimits

0xf78f,	// (0x00040157) control_pane_t

0x77a7,	// (0x0003816f) navi_navi_volume_pane_cp1

0x77af,	// (0x00038177) status_small_icon_pane

0x77b7,	// (0x0003817f) status_small_pane_g1_ParamLimits

0x77b7,	// (0x0003817f) status_small_pane_g1

0x77eb,	// (0x000381b3) status_small_pane_g2_ParamLimits

0x77eb,	// (0x000381b3) status_small_pane_g2

0x77f7,	// (0x000381bf) status_small_pane_g3_ParamLimits

0x77f7,	// (0x000381bf) status_small_pane_g3

0x7803,	// (0x000381cb) status_small_pane_g4_ParamLimits

0x7803,	// (0x000381cb) status_small_pane_g4

0x780f,	// (0x000381d7) status_small_pane_g5_ParamLimits

0x780f,	// (0x000381d7) status_small_pane_g5

0x781d,	// (0x000381e5) status_small_pane_g6_ParamLimits

0x781d,	// (0x000381e5) status_small_pane_g6

0x0007,

0xf76d,	// (0x00040135) status_small_pane_g_ParamLimits

0xf76d,	// (0x00040135) status_small_pane_g

0x784c,	// (0x00038214) status_small_pane_t1

0x786e,	// (0x00038236) status_small_wait_pane_ParamLimits

0x786e,	// (0x00038236) status_small_wait_pane

0x6f71,	// (0x00037939) aid_levels_signal_ParamLimits

0x6f71,	// (0x00037939) aid_levels_signal

0x6f83,	// (0x0003794b) signal_pane_g1_ParamLimits

0x6f83,	// (0x0003794b) signal_pane_g1

0x6f98,	// (0x00037960) signal_pane_g2_ParamLimits

0x6f98,	// (0x00037960) signal_pane_g2

0x0003,

0xf6fe,	// (0x000400c6) signal_pane_g_ParamLimits

0xf6fe,	// (0x000400c6) signal_pane_g

0x2b5d,	// (0x00033525) context_pane_g1

0x5f2c,	// (0x000368f4) title_pane_g1

0x5f56,	// (0x0003691e) title_pane_t1

0x22da,	// (0x00032ca2) title_pane_t2

0x2300,	// (0x00032cc8) title_pane_t3

0x0002,

0xf557,	// (0x0003ff1f) title_pane_t

0x9b72,	// (0x0003a53a) aid_levels_battery_ParamLimits

0x9b72,	// (0x0003a53a) aid_levels_battery

0x9b86,	// (0x0003a54e) battery_pane_g1_ParamLimits

0x9b86,	// (0x0003a54e) battery_pane_g1

0x9b9c,	// (0x0003a564) battery_pane_g2_ParamLimits

0x9b9c,	// (0x0003a564) battery_pane_g2

0x0001,

0xf7a1,	// (0x00040169) battery_pane_g_ParamLimits

0xf7a1,	// (0x00040169) battery_pane_g

0xadec,	// (0x0003b7b4) uni_indicator_pane_g1

0xadff,	// (0x0003b7c7) uni_indicator_pane_g2

0xae11,	// (0x0003b7d9) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x000402da) uni_indicator_pane_g

0x7388,	// (0x00037d50) navi_icon_pane_ParamLimits

0x7388,	// (0x00037d50) navi_icon_pane

0x72d2,	// (0x00037c9a) navi_midp_pane

0x73a4,	// (0x00037d6c) navi_navi_pane

0x73ae,	// (0x00037d76) navi_text_pane_ParamLimits

0x73ae,	// (0x00037d76) navi_text_pane

0x22ba,	// (0x00032c82) status_small_wait_pane_g1

0x2551,	// (0x00032f19) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x000402d5) status_small_wait_pane_g

0xab13,	// (0x0003b4db) navi_navi_icon_text_pane

0xab1b,	// (0x0003b4e3) navi_navi_pane_g1_ParamLimits

0xab1b,	// (0x0003b4e3) navi_navi_pane_g1

0xab2d,	// (0x0003b4f5) navi_navi_pane_g2_ParamLimits

0xab2d,	// (0x0003b4f5) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x000402a3) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x000402a3) navi_navi_pane_g

0xab3f,	// (0x0003b507) navi_navi_tabs_pane

0xab48,	// (0x0003b510) navi_navi_text_pane

0xab13,	// (0x0003b4db) navi_navi_volume_pane

0xaaef,	// (0x0003b4b7) navi_text_pane_t1

0xaae3,	// (0x0003b4ab) navi_icon_pane_g1

0xaa36,	// (0x0003b3fe) navi_navi_text_pane_t1

0x827f,	// (0x00038c47) navi_navi_volume_pane_g1

0x8287,	// (0x00038c4f) volume_small_pane

0xa99c,	// (0x0003b364) navi_navi_icon_text_pane_g1

0xa9a4,	// (0x0003b36c) navi_navi_icon_text_pane_t1

0x73a4,	// (0x00037d6c) navi_tabs_2_long_pane

0x73a4,	// (0x00037d6c) navi_tabs_2_pane

0x73a4,	// (0x00037d6c) navi_tabs_3_long_pane

0x73a4,	// (0x00037d6c) navi_tabs_3_pane

0x73a4,	// (0x00037d6c) navi_tabs_4_pane

0x825f,	// (0x00038c27) tabs_2_active_pane_ParamLimits

0x825f,	// (0x00038c27) tabs_2_active_pane

0x826f,	// (0x00038c37) tabs_2_passive_pane_ParamLimits

0x826f,	// (0x00038c37) tabs_2_passive_pane

0x822d,	// (0x00038bf5) tabs_3_active_pane_ParamLimits

0x822d,	// (0x00038bf5) tabs_3_active_pane

0x823d,	// (0x00038c05) tabs_3_passive_pane_ParamLimits

0x823d,	// (0x00038c05) tabs_3_passive_pane

0x824e,	// (0x00038c16) tabs_3_passive_pane_cp_ParamLimits

0x824e,	// (0x00038c16) tabs_3_passive_pane_cp

0x81e9,	// (0x00038bb1) tabs_4_active_pane_ParamLimits

0x81e9,	// (0x00038bb1) tabs_4_active_pane

0x81fa,	// (0x00038bc2) tabs_4_passive_pane_ParamLimits

0x81fa,	// (0x00038bc2) tabs_4_passive_pane

0x820b,	// (0x00038bd3) tabs_4_passive_pane_cp_ParamLimits

0x820b,	// (0x00038bd3) tabs_4_passive_pane_cp

0x821c,	// (0x00038be4) tabs_4_passive_pane_cp2_ParamLimits

0x821c,	// (0x00038be4) tabs_4_passive_pane_cp2

0x81c5,	// (0x00038b8d) tabs_2_long_active_pane_ParamLimits

0x81c5,	// (0x00038b8d) tabs_2_long_active_pane

0x81d7,	// (0x00038b9f) tabs_2_long_passive_pane_ParamLimits

0x81d7,	// (0x00038b9f) tabs_2_long_passive_pane

0x8180,	// (0x00038b48) tabs_3_long_active_pane_ParamLimits

0x8180,	// (0x00038b48) tabs_3_long_active_pane

0x8199,	// (0x00038b61) tabs_3_long_passive_pane_ParamLimits

0x8199,	// (0x00038b61) tabs_3_long_passive_pane

0x81ac,	// (0x00038b74) tabs_3_long_passive_pane_cp_ParamLimits

0x81ac,	// (0x00038b74) tabs_3_long_passive_pane_cp

0x8126,	// (0x00038aee) volume_small_pane_g1

0x812f,	// (0x00038af7) volume_small_pane_g2

0x8138,	// (0x00038b00) volume_small_pane_g3

0x8141,	// (0x00038b09) volume_small_pane_g4

0x814a,	// (0x00038b12) volume_small_pane_g5

0x8153,	// (0x00038b1b) volume_small_pane_g6

0x815c,	// (0x00038b24) volume_small_pane_g7

0x8165,	// (0x00038b2d) volume_small_pane_g8

0x816e,	// (0x00038b36) volume_small_pane_g9

0x8177,	// (0x00038b3f) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0004026f) volume_small_pane_g

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp2_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp2

0x5fbe,	// (0x00036986) tabs_3_active_pane_g1

0x5fc6,	// (0x0003698e) tabs_3_active_pane_t1

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp2_ParamLimits

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp2

0x5fbe,	// (0x00036986) tabs_3_passive_pane_g1

0x5fc6,	// (0x0003698e) tabs_3_passive_pane_t1

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp3_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp3

0x5fd8,	// (0x000369a0) tabs_4_active_pane_g1

0x5fe0,	// (0x000369a8) tabs_4_active_pane_t1

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp3_ParamLimits

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp3

0x5fd8,	// (0x000369a0) tabs_4_1_passive_pane_g1

0x5fe0,	// (0x000369a8) tabs_4_1_passive_pane_t1

0x974a,	// (0x0003a112) list_highlight_pane_cp2

0xb054,	// (0x0003ba1c) list_set_pane_ParamLimits

0xb054,	// (0x0003ba1c) list_set_pane

0xb0f6,	// (0x0003babe) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x0003babe) main_pane_set_t1

0xb116,	// (0x0003bade) main_pane_set_t2_ParamLimits

0xb116,	// (0x0003bade) main_pane_set_t2

0xb12a,	// (0x0003baf2) main_pane_set_t3_ParamLimits

0xb12a,	// (0x0003baf2) main_pane_set_t3

0xb13c,	// (0x0003bb04) main_pane_set_t4_ParamLimits

0xb13c,	// (0x0003bb04) main_pane_set_t4

0x0003,

0xf977,	// (0x0004033f) main_pane_set_t_ParamLimits

0xf977,	// (0x0004033f) main_pane_set_t

0xb14e,	// (0x0003bb16) setting_code_pane

0xb15a,	// (0x0003bb22) setting_slider_graphic_pane

0xb15a,	// (0x0003bb22) setting_slider_pane

0xb15a,	// (0x0003bb22) setting_text_pane

0xb15a,	// (0x0003bb22) setting_volume_pane

0x5ff2,	// (0x000369ba) volume_set_pane

0x2320,	// (0x00032ce8) bg_set_opt_pane_cp

0x5ffa,	// (0x000369c2) setting_slider_pane_t1

0x6013,	// (0x000369db) setting_slider_pane_t2

0x602d,	// (0x000369f5) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003ff26) setting_slider_pane_t

0x6045,	// (0x00036a0d) slider_set_pane

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp2

0x232e,	// (0x00032cf6) setting_slider_graphic_pane_g1

0x605b,	// (0x00036a23) setting_slider_graphic_pane_t1

0x606b,	// (0x00036a33) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003ff2d) setting_slider_graphic_pane_t

0x607b,	// (0x00036a43) slider_set_pane_cp

0x22c4,	// (0x00032c8c) input_focus_pane_cp1

0xb013,	// (0x0003b9db) list_set_text_pane

0x22ba,	// (0x00032c82) setting_text_pane_g1

0x22c4,	// (0x00032c8c) input_focus_pane_cp2

0x22ba,	// (0x00032c82) setting_code_pane_g1

0x2337,	// (0x00032cff) setting_code_pane_t1

0x45f3,	// (0x00034fbb) set_text_pane_t1_ParamLimits

0x45f3,	// (0x00034fbb) set_text_pane_t1

0x272a,	// (0x000330f2) set_opt_bg_pane_g1

0x2732,	// (0x000330fa) set_opt_bg_pane_g2

0xafed,	// (0x0003b9b5) set_opt_bg_pane_g3

0x2742,	// (0x0003310a) set_opt_bg_pane_g4

0x274a,	// (0x00033112) set_opt_bg_pane_g5

0x2752,	// (0x0003311a) set_opt_bg_pane_g6

0xaff7,	// (0x0003b9bf) set_opt_bg_pane_g7

0xafff,	// (0x0003b9c7) set_opt_bg_pane_g8

0xb009,	// (0x0003b9d1) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0004032c) set_opt_bg_pane_g

0xafe0,	// (0x0003b9a8) slider_set_pane_g1

0x8306,	// (0x00038cce) slider_set_pane_g2

0x0006,

0xf955,	// (0x0004031d) slider_set_pane_g

0x8290,	// (0x00038c58) volume_set_pane_g1

0x8298,	// (0x00038c60) volume_set_pane_g2

0x82a0,	// (0x00038c68) volume_set_pane_g3

0x82a8,	// (0x00038c70) volume_set_pane_g4

0x82b0,	// (0x00038c78) volume_set_pane_g5

0x82b8,	// (0x00038c80) volume_set_pane_g6

0x82c0,	// (0x00038c88) volume_set_pane_g7

0x82c8,	// (0x00038c90) volume_set_pane_g8

0x82d0,	// (0x00038c98) volume_set_pane_g9

0x82d8,	// (0x00038ca0) volume_set_pane_g10

0x0009,

0xf92d,	// (0x000402f5) volume_set_pane_g

0x6083,	// (0x00036a4b) indicator_pane_ParamLimits

0x6083,	// (0x00036a4b) indicator_pane

0x608f,	// (0x00036a57) main_idle_pane_g2_ParamLimits

0x608f,	// (0x00036a57) main_idle_pane_g2

0x60b7,	// (0x00036a7f) main_pane_idle_g1_ParamLimits

0x60b7,	// (0x00036a7f) main_pane_idle_g1

0x2345,	// (0x00032d0d) popup_clock_digital_analogue_window_ParamLimits

0x2345,	// (0x00032d0d) popup_clock_digital_analogue_window

0x60c4,	// (0x00036a8c) soft_indicator_pane_ParamLimits

0x60c4,	// (0x00036a8c) soft_indicator_pane

0x60d0,	// (0x00036a98) wallpaper_pane_ParamLimits

0x60d0,	// (0x00036a98) wallpaper_pane

0x22ba,	// (0x00032c82) wallpaper_pane_g1

0x60dc,	// (0x00036aa4) indicator_pane_g1_ParamLimits

0x60dc,	// (0x00036aa4) indicator_pane_g1

0xb417,	// (0x0003bddf) navi_navi_icon_text_pane_srt_g1

0x2373,	// (0x00032d3b) soft_indicator_pane_t1

0x238d,	// (0x00032d55) aid_ps_area_pane

0x60e8,	// (0x00036ab0) aid_ps_clock_pane

0x239e,	// (0x00032d66) aid_ps_indicator_pane

0x23aa,	// (0x00032d72) indicator_ps_pane_ParamLimits

0x23aa,	// (0x00032d72) indicator_ps_pane

0x23b9,	// (0x00032d81) power_save_pane_g1_ParamLimits

0x23b9,	// (0x00032d81) power_save_pane_g1

0x23c5,	// (0x00032d8d) power_save_pane_g2_ParamLimits

0x23c5,	// (0x00032d8d) power_save_pane_g2

0x5b41,	// (0x00036509) aid_navinavi_width_pane

0x238d,	// (0x00032d55) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003ff32) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003ff32) power_save_pane_g

0x23d3,	// (0x00032d9b) power_save_pane_t1_ParamLimits

0x23d3,	// (0x00032d9b) power_save_pane_t1

0x60e8,	// (0x00036ab0) aid_ps_clock_pane_ParamLimits

0x239e,	// (0x00032d66) aid_ps_indicator_pane_ParamLimits

0x23e5,	// (0x00032dad) power_save_pane_t4_ParamLimits

0x23e5,	// (0x00032dad) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003ff37) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003ff37) power_save_pane_t

0x240f,	// (0x00032dd7) power_save_t3_ParamLimits

0x240f,	// (0x00032dd7) power_save_t3

0x23fa,	// (0x00032dc2) power_save_t2_ParamLimits

0x23fa,	// (0x00032dc2) power_save_t2

0x2424,	// (0x00032dec) indicator_ps_pane_g1

0x60f6,	// (0x00036abe) ai_gene_pane_ParamLimits

0x60f6,	// (0x00036abe) ai_gene_pane

0x6102,	// (0x00036aca) ai_links_pane_ParamLimits

0x6102,	// (0x00036aca) ai_links_pane

0x610e,	// (0x00036ad6) indicator_pane_cp1_ParamLimits

0x610e,	// (0x00036ad6) indicator_pane_cp1

0x611a,	// (0x00036ae2) main_pane_idle_g1_cp_ParamLimits

0x611a,	// (0x00036ae2) main_pane_idle_g1_cp

0x6126,	// (0x00036aee) popup_ai_links_title_window

0x612f,	// (0x00036af7) soft_indicator_pane_cp1_ParamLimits

0x612f,	// (0x00036af7) soft_indicator_pane_cp1

0xadda,	// (0x0003b7a2) ai_links_pane_g1

0xade3,	// (0x0003b7ab) grid_ai_links_pane

0xadbd,	// (0x0003b785) ai_gene_pane_1

0xadc8,	// (0x0003b790) ai_gene_pane_2

0xadd1,	// (0x0003b799) list_highlight_pane_cp4

0xada1,	// (0x0003b769) cell_ai_link_pane_ParamLimits

0xada1,	// (0x0003b769) cell_ai_link_pane

0xad99,	// (0x0003b761) cell_ai_link_pane_g1

0x2551,	// (0x00032f19) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x000402d0) cell_ai_link_pane_g

0x22c4,	// (0x00032c8c) grid_highlight_cp2

0x22c4,	// (0x00032c8c) bg_popup_sub_pane_cp1

0x243b,	// (0x00032e03) popup_ai_links_title_window_t1

0xace9,	// (0x0003b6b1) ai_gene_pane_1_g1_ParamLimits

0xace9,	// (0x0003b6b1) ai_gene_pane_1_g1

0xacf5,	// (0x0003b6bd) ai_gene_pane_1_g2_ParamLimits

0xacf5,	// (0x0003b6bd) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x000402c6) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x000402c6) ai_gene_pane_1_g

0xad02,	// (0x0003b6ca) ai_gene_pane_1_t1_ParamLimits

0xad02,	// (0x0003b6ca) ai_gene_pane_1_t1

0xad36,	// (0x0003b6fe) grid_ai_soft_ind_pane

0xacd4,	// (0x0003b69c) ai_gene_pane_2_t1_ParamLimits

0xacd4,	// (0x0003b69c) ai_gene_pane_2_t1

0x613b,	// (0x00036b03) main_pane_empty_t1_ParamLimits

0x613b,	// (0x00036b03) main_pane_empty_t1

0x6153,	// (0x00036b1b) main_pane_empty_t2_ParamLimits

0x6153,	// (0x00036b1b) main_pane_empty_t2

0x6168,	// (0x00036b30) main_pane_empty_t3_ParamLimits

0x6168,	// (0x00036b30) main_pane_empty_t3

0x617a,	// (0x00036b42) main_pane_empty_t4_ParamLimits

0x617a,	// (0x00036b42) main_pane_empty_t4

0x618c,	// (0x00036b54) main_pane_empty_t5_ParamLimits

0x618c,	// (0x00036b54) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003ff3c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003ff3c) main_pane_empty_t

0x277b,	// (0x00033143) bg_popup_window_pane_ParamLimits

0x277b,	// (0x00033143) bg_popup_window_pane

0xaa44,	// (0x0003b40c) find_popup_pane_cp2_ParamLimits

0xaa44,	// (0x0003b40c) find_popup_pane_cp2

0xaa50,	// (0x0003b418) heading_pane_ParamLimits

0xaa50,	// (0x0003b418) heading_pane

0x22c4,	// (0x00032c8c) bg_popup_sub_pane

0xa9be,	// (0x0003b386) bg_popup_window_pane_g1_ParamLimits

0xa9be,	// (0x0003b386) bg_popup_window_pane_g1

0xa9ca,	// (0x0003b392) bg_popup_window_pane_g2_ParamLimits

0xa9ca,	// (0x0003b392) bg_popup_window_pane_g2

0xa9d6,	// (0x0003b39e) bg_popup_window_pane_g3_ParamLimits

0xa9d6,	// (0x0003b39e) bg_popup_window_pane_g3

0xa9e2,	// (0x0003b3aa) bg_popup_window_pane_g4_ParamLimits

0xa9e2,	// (0x0003b3aa) bg_popup_window_pane_g4

0xa9ee,	// (0x0003b3b6) bg_popup_window_pane_g5_ParamLimits

0xa9ee,	// (0x0003b3b6) bg_popup_window_pane_g5

0xa9fa,	// (0x0003b3c2) bg_popup_window_pane_g6_ParamLimits

0xa9fa,	// (0x0003b3c2) bg_popup_window_pane_g6

0xaa06,	// (0x0003b3ce) bg_popup_window_pane_g7_ParamLimits

0xaa06,	// (0x0003b3ce) bg_popup_window_pane_g7

0xaa12,	// (0x0003b3da) bg_popup_window_pane_g8_ParamLimits

0xaa12,	// (0x0003b3da) bg_popup_window_pane_g8

0xaa1e,	// (0x0003b3e6) bg_popup_window_pane_g9_ParamLimits

0xaa1e,	// (0x0003b3e6) bg_popup_window_pane_g9

0xaa2a,	// (0x0003b3f2) bg_popup_window_pane_g10_ParamLimits

0xaa2a,	// (0x0003b3f2) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0004028e) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0004028e) bg_popup_window_pane_g

0xa953,	// (0x0003b31b) bg_popup_heading_pane_ParamLimits

0xa953,	// (0x0003b31b) bg_popup_heading_pane

0x8496,	// (0x00038e5e) tabs_4_passive_pane_cp_srt_ParamLimits

0x8496,	// (0x00038e5e) tabs_4_passive_pane_cp_srt

0x84a8,	// (0x00038e70) tabs_4_passive_pane_srt_ParamLimits

0xa967,	// (0x0003b32f) heading_pane_g2

0x84a8,	// (0x00038e70) tabs_4_passive_pane_srt

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp3_srt_ParamLimits

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp3_srt

0xa96f,	// (0x0003b337) heading_pane_t1_ParamLimits

0xa96f,	// (0x0003b337) heading_pane_t1

0xa986,	// (0x0003b34e) heading_pane_t2_ParamLimits

0xa986,	// (0x0003b34e) heading_pane_t2

0x0001,

0xf8c1,	// (0x00040289) heading_pane_t_ParamLimits

0xf8c1,	// (0x00040289) heading_pane_t

0xa490,	// (0x0003ae58) bg_popup_heading_pane_g1

0xa53f,	// (0x0003af07) bg_popup_heading_pane_g2

0xa549,	// (0x0003af11) bg_popup_heading_pane_g3

0xa553,	// (0x0003af1b) bg_popup_heading_pane_g4

0xa55d,	// (0x0003af25) bg_popup_heading_pane_g5

0xa567,	// (0x0003af2f) bg_popup_heading_pane_g6

0xa56f,	// (0x0003af37) bg_popup_heading_pane_g7

0xa577,	// (0x0003af3f) bg_popup_heading_pane_g8

0xa581,	// (0x0003af49) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x00040245) bg_popup_heading_pane_g

0x9c71,	// (0x0003a639) bg_popup_sub_pane_g1

0x9c81,	// (0x0003a649) bg_popup_sub_pane_g2

0x9c79,	// (0x0003a641) bg_popup_sub_pane_g3

0x9c91,	// (0x0003a659) bg_popup_sub_pane_g4

0x9c89,	// (0x0003a651) bg_popup_sub_pane_g5

0x9c99,	// (0x0003a661) bg_popup_sub_pane_g6

0x9ca1,	// (0x0003a669) bg_popup_sub_pane_g7

0x9cb1,	// (0x0003a679) bg_popup_sub_pane_g8

0x9ca9,	// (0x0003a671) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0004021f) bg_popup_sub_pane_g

0x2312,	// (0x00032cda) bg_popup_window_pane_cp5_ParamLimits

0x2312,	// (0x00032cda) bg_popup_window_pane_cp5

0x2458,	// (0x00032e20) popup_note_window_g1_ParamLimits

0x2458,	// (0x00032e20) popup_note_window_g1

0x2464,	// (0x00032e2c) popup_note_window_t1_ParamLimits

0x2464,	// (0x00032e2c) popup_note_window_t1

0x247a,	// (0x00032e42) popup_note_window_t2_ParamLimits

0x247a,	// (0x00032e42) popup_note_window_t2

0x2490,	// (0x00032e58) popup_note_window_t3_ParamLimits

0x2490,	// (0x00032e58) popup_note_window_t3

0x24a6,	// (0x00032e6e) popup_note_window_t4_ParamLimits

0x24a6,	// (0x00032e6e) popup_note_window_t4

0x24ce,	// (0x00032e96) popup_note_window_t5_ParamLimits

0x24ce,	// (0x00032e96) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003ff47) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003ff47) popup_note_window_t

0x24f2,	// (0x00032eba) bg_popup_window_pane_cp6_ParamLimits

0x24f2,	// (0x00032eba) bg_popup_window_pane_cp6

0xa40c,	// (0x0003add4) popup_note_image_window_g1_ParamLimits

0xa40c,	// (0x0003add4) popup_note_image_window_g1

0xa418,	// (0x0003ade0) popup_note_image_window_g2_ParamLimits

0xa418,	// (0x0003ade0) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x00040213) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x00040213) popup_note_image_window_g

0xa431,	// (0x0003adf9) popup_note_image_window_t1_ParamLimits

0xa431,	// (0x0003adf9) popup_note_image_window_t1

0xa44a,	// (0x0003ae12) popup_note_image_window_t2_ParamLimits

0xa44a,	// (0x0003ae12) popup_note_image_window_t2

0xa463,	// (0x0003ae2b) popup_note_image_window_t3_ParamLimits

0xa463,	// (0x0003ae2b) popup_note_image_window_t3

0x0002,

0xf850,	// (0x00040218) popup_note_image_window_t_ParamLimits

0xf850,	// (0x00040218) popup_note_image_window_t

0xa2d5,	// (0x0003ac9d) bg_popup_window_pane_cp7_ParamLimits

0xa2d5,	// (0x0003ac9d) bg_popup_window_pane_cp7

0xa305,	// (0x0003accd) popup_note_wait_window_g1_ParamLimits

0xa305,	// (0x0003accd) popup_note_wait_window_g1

0xa311,	// (0x0003acd9) popup_note_wait_window_g2_ParamLimits

0xa311,	// (0x0003acd9) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x00040201) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x00040201) popup_note_wait_window_g

0xa329,	// (0x0003acf1) popup_note_wait_window_t1_ParamLimits

0xa329,	// (0x0003acf1) popup_note_wait_window_t1

0xa350,	// (0x0003ad18) popup_note_wait_window_t2_ParamLimits

0xa350,	// (0x0003ad18) popup_note_wait_window_t2

0xa36d,	// (0x0003ad35) popup_note_wait_window_t3_ParamLimits

0xa36d,	// (0x0003ad35) popup_note_wait_window_t3

0xa380,	// (0x0003ad48) popup_note_wait_window_t4_ParamLimits

0xa380,	// (0x0003ad48) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x00040208) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x00040208) popup_note_wait_window_t

0xa3a5,	// (0x0003ad6d) wait_bar_pane_ParamLimits

0xa3a5,	// (0x0003ad6d) wait_bar_pane

0x22c4,	// (0x00032c8c) wait_anim_pane

0x22c4,	// (0x00032c8c) wait_border_pane

0x22ba,	// (0x00032c82) wait_anim_pane_g1

0x22ba,	// (0x00032c82) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x000400c1) wait_anim_pane_g

0xa281,	// (0x0003ac49) wait_border_pane_g1

0xa28c,	// (0x0003ac54) wait_border_pane_g2

0xa295,	// (0x0003ac5d) wait_border_pane_g3

0x0002,

0xf832,	// (0x000401fa) wait_border_pane_g

0xa0ec,	// (0x0003aab4) bg_popup_window_pane_cp16_ParamLimits

0xa0ec,	// (0x0003aab4) bg_popup_window_pane_cp16

0xa1ec,	// (0x0003abb4) indicator_popup_pane_cp4_ParamLimits

0xa1ec,	// (0x0003abb4) indicator_popup_pane_cp4

0xa200,	// (0x0003abc8) popup_query_data_window_t1_ParamLimits

0xa200,	// (0x0003abc8) popup_query_data_window_t1

0xa212,	// (0x0003abda) popup_query_data_window_t2_ParamLimits

0xa212,	// (0x0003abda) popup_query_data_window_t2

0xa22b,	// (0x0003abf3) popup_query_data_window_t3_ParamLimits

0xa22b,	// (0x0003abf3) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x000401f3) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x000401f3) popup_query_data_window_t

0xa245,	// (0x0003ac0d) query_popup_data_pane_ParamLimits

0xa245,	// (0x0003ac0d) query_popup_data_pane

0xa259,	// (0x0003ac21) query_popup_data_pane_cp1_ParamLimits

0xa259,	// (0x0003ac21) query_popup_data_pane_cp1

0xa0ec,	// (0x0003aab4) bg_popup_window_pane_cp10_ParamLimits

0xa0ec,	// (0x0003aab4) bg_popup_window_pane_cp10

0xa11e,	// (0x0003aae6) indicator_popup_pane_ParamLimits

0xa11e,	// (0x0003aae6) indicator_popup_pane

0xa140,	// (0x0003ab08) popup_query_code_window_t1_ParamLimits

0xa140,	// (0x0003ab08) popup_query_code_window_t1

0xa15a,	// (0x0003ab22) popup_query_code_window_t2_ParamLimits

0xa15a,	// (0x0003ab22) popup_query_code_window_t2

0xa1a3,	// (0x0003ab6b) popup_query_code_window_t3_ParamLimits

0xa1a3,	// (0x0003ab6b) popup_query_code_window_t3

0x0002,

0xf824,	// (0x000401ec) popup_query_code_window_t_ParamLimits

0xf824,	// (0x000401ec) popup_query_code_window_t

0xa1d2,	// (0x0003ab9a) query_popup_pane_ParamLimits

0xa1d2,	// (0x0003ab9a) query_popup_pane

0x24f2,	// (0x00032eba) bg_popup_window_pane_cp15_ParamLimits

0x24f2,	// (0x00032eba) bg_popup_window_pane_cp15

0x61c6,	// (0x00036b8e) indicator_popup_pane_cp1_ParamLimits

0x61c6,	// (0x00036b8e) indicator_popup_pane_cp1

0x61d9,	// (0x00036ba1) indicator_popup_pane_cp2_ParamLimits

0x61d9,	// (0x00036ba1) indicator_popup_pane_cp2

0x61ec,	// (0x00036bb4) popup_query_data_code_window_g1_ParamLimits

0x61ec,	// (0x00036bb4) popup_query_data_code_window_g1

0x2510,	// (0x00032ed8) popup_query_data_code_window_t1_ParamLimits

0x2510,	// (0x00032ed8) popup_query_data_code_window_t1

0x2522,	// (0x00032eea) popup_query_data_code_window_t2_ParamLimits

0x2522,	// (0x00032eea) popup_query_data_code_window_t2

0x61ff,	// (0x00036bc7) popup_query_data_code_window_t3_ParamLimits

0x61ff,	// (0x00036bc7) popup_query_data_code_window_t3

0x6215,	// (0x00036bdd) popup_query_data_code_window_t4_ParamLimits

0x6215,	// (0x00036bdd) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003ff52) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003ff52) popup_query_data_code_window_t

0x8004,	// (0x000389cc) list_single_midp_graphic_pane_g3

0x622d,	// (0x00036bf5) query_popup_data_pane_cp2_ParamLimits

0x6240,	// (0x00036c08) query_popup_pane_cp2_ParamLimits

0x6240,	// (0x00036c08) query_popup_pane_cp2

0x22c4,	// (0x00032c8c) bg_popup_window_pane_cp11

0xa0d8,	// (0x0003aaa0) heading_pane_cp5

0x257e,	// (0x00032f46) listscroll_popup_info_pane

0x22c4,	// (0x00032c8c) input_focus_pane_cp3

0x2534,	// (0x00032efc) query_popup_pane_t1

0x2542,	// (0x00032f0a) list_popup_info_pane_ParamLimits

0x2542,	// (0x00032f0a) list_popup_info_pane

0x2551,	// (0x00032f19) listscroll_popup_info_pane_g1

0x2559,	// (0x00032f21) scroll_pane_cp7

0x6253,	// (0x00036c1b) popup_info_list_pane_t1_ParamLimits

0x6253,	// (0x00036c1b) popup_info_list_pane_t1

0x626d,	// (0x00036c35) popup_info_list_pane_t2_ParamLimits

0x626d,	// (0x00036c35) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003ff5b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003ff5b) popup_info_list_pane_t

0x22c4,	// (0x00032c8c) bg_popup_window_pane_cp12

0xb431,	// (0x0003bdf9) find_popup_pane

0x2320,	// (0x00032ce8) bg_popup_window_pane_cp3

0x2563,	// (0x00032f2b) heading_pane_cp3

0x256f,	// (0x00032f37) listscroll_popup_graphic_pane

0x22c4,	// (0x00032c8c) bg_popup_window_pane_cp4

0x62d7,	// (0x00036c9f) heading_pane_cp4

0x257e,	// (0x00032f46) listscroll_popup_colour_pane

0x62e1,	// (0x00036ca9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x62e1,	// (0x00036ca9) cell_large_graphic_colour_none_popup_pane

0x62f5,	// (0x00036cbd) grid_large_graphic_colour_popup_pane_ParamLimits

0x62f5,	// (0x00036cbd) grid_large_graphic_colour_popup_pane

0x631d,	// (0x00036ce5) listscroll_popup_colour_pane_g1_ParamLimits

0x631d,	// (0x00036ce5) listscroll_popup_colour_pane_g1

0x6334,	// (0x00036cfc) listscroll_popup_colour_pane_g2_ParamLimits

0x6334,	// (0x00036cfc) listscroll_popup_colour_pane_g2

0x634b,	// (0x00036d13) listscroll_popup_colour_pane_g3_ParamLimits

0x634b,	// (0x00036d13) listscroll_popup_colour_pane_g3

0x635b,	// (0x00036d23) listscroll_popup_colour_pane_g4_ParamLimits

0x635b,	// (0x00036d23) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003ff60) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003ff60) listscroll_popup_colour_pane_g

0x2586,	// (0x00032f4e) scroll_pane_cp6_ParamLimits

0x2586,	// (0x00032f4e) scroll_pane_cp6

0x636b,	// (0x00036d33) cell_large_graphic_colour_popup_pane_ParamLimits

0x636b,	// (0x00036d33) cell_large_graphic_colour_popup_pane

0x638a,	// (0x00036d52) cell_large_graphic_colour_none_popup_pane_t1

0x22c4,	// (0x00032c8c) grid_highlight_pane_cp5

0x2598,	// (0x00032f60) cell_large_graphic_colour_popup_pane_g1

0x25a0,	// (0x00032f68) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003ff69) cell_large_graphic_colour_popup_pane_g

0x25a8,	// (0x00032f70) cell_large_graphic_colour_popup_pane_g2_copy1

0x25b1,	// (0x00032f79) grid_highlight_pane_cp4

0x25b9,	// (0x00032f81) bg_popup_window_pane_cp8_ParamLimits

0x25b9,	// (0x00032f81) bg_popup_window_pane_cp8

0x6399,	// (0x00036d61) popup_snote_single_text_window_g1_ParamLimits

0x6399,	// (0x00036d61) popup_snote_single_text_window_g1

0x63ab,	// (0x00036d73) popup_snote_single_text_window_t1_ParamLimits

0x63ab,	// (0x00036d73) popup_snote_single_text_window_t1

0x63be,	// (0x00036d86) popup_snote_single_text_window_t2_ParamLimits

0x63be,	// (0x00036d86) popup_snote_single_text_window_t2

0x63d1,	// (0x00036d99) popup_snote_single_text_window_t3_ParamLimits

0x63d1,	// (0x00036d99) popup_snote_single_text_window_t3

0x640a,	// (0x00036dd2) popup_snote_single_text_window_t4_ParamLimits

0x640a,	// (0x00036dd2) popup_snote_single_text_window_t4

0x643e,	// (0x00036e06) popup_snote_single_text_window_t5_ParamLimits

0x643e,	// (0x00036e06) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003ff6e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003ff6e) popup_snote_single_text_window_t

0x25d4,	// (0x00032f9c) bg_popup_window_pane_cp9_ParamLimits

0x25d4,	// (0x00032f9c) bg_popup_window_pane_cp9

0x6399,	// (0x00036d61) popup_snote_single_graphic_window_g1_ParamLimits

0x6399,	// (0x00036d61) popup_snote_single_graphic_window_g1

0x25e2,	// (0x00032faa) popup_snote_single_graphic_window_g2_ParamLimits

0x25e2,	// (0x00032faa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003ff79) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003ff79) popup_snote_single_graphic_window_g

0x25ee,	// (0x00032fb6) popup_snote_single_graphic_window_t1_ParamLimits

0x25ee,	// (0x00032fb6) popup_snote_single_graphic_window_t1

0x2601,	// (0x00032fc9) popup_snote_single_graphic_window_t2_ParamLimits

0x2601,	// (0x00032fc9) popup_snote_single_graphic_window_t2

0x646d,	// (0x00036e35) popup_snote_single_graphic_window_t3_ParamLimits

0x646d,	// (0x00036e35) popup_snote_single_graphic_window_t3

0x64a6,	// (0x00036e6e) popup_snote_single_graphic_window_t4_ParamLimits

0x64a6,	// (0x00036e6e) popup_snote_single_graphic_window_t4

0x64da,	// (0x00036ea2) popup_snote_single_graphic_window_t5_ParamLimits

0x64da,	// (0x00036ea2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003ff7e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003ff7e) popup_snote_single_graphic_window_t

0xb373,	// (0x0003bd3b) grid_graphic_popup_pane_ParamLimits

0xb373,	// (0x0003bd3b) grid_graphic_popup_pane

0xb39d,	// (0x0003bd65) listscroll_popup_graphic_pane_g1_ParamLimits

0xb39d,	// (0x0003bd65) listscroll_popup_graphic_pane_g1

0xb3b1,	// (0x0003bd79) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3b1,	// (0x0003bd79) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x00040369) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x00040369) listscroll_popup_graphic_pane_g

0xb3c5,	// (0x0003bd8d) scroll_pane_cp5

0xb312,	// (0x0003bcda) cell_graphic_popup_pane_ParamLimits

0xb312,	// (0x0003bcda) cell_graphic_popup_pane

0xb2f3,	// (0x0003bcbb) cell_graphic_popup_pane_g1

0xb2fb,	// (0x0003bcc3) cell_graphic_popup_pane_g2

0x25a8,	// (0x00032f70) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x00040362) cell_graphic_popup_pane_g

0xb304,	// (0x0003bccc) cell_graphic_popup_pane_t2

0x25b1,	// (0x00032f79) grid_highlight_pane_cp3

0x2626,	// (0x00032fee) list_gen_pane_ParamLimits

0x2626,	// (0x00032fee) list_gen_pane

0x264e,	// (0x00033016) scroll_pane

0xb24b,	// (0x0003bc13) bg_list_pane_g1_ParamLimits

0xb24b,	// (0x0003bc13) bg_list_pane_g1

0xb268,	// (0x0003bc30) bg_list_pane_g2_ParamLimits

0xb268,	// (0x0003bc30) bg_list_pane_g2

0xb27d,	// (0x0003bc45) bg_list_pane_g3_ParamLimits

0xb27d,	// (0x0003bc45) bg_list_pane_g3

0xb291,	// (0x0003bc59) bg_list_pane_g4_ParamLimits

0xb291,	// (0x0003bc59) bg_list_pane_g4

0xb2a5,	// (0x0003bc6d) bg_list_pane_g5_ParamLimits

0xb2a5,	// (0x0003bc6d) bg_list_pane_g5

0x0004,

0xf98f,	// (0x00040357) bg_list_pane_g_ParamLimits

0xf98f,	// (0x00040357) bg_list_pane_g

0xb1e0,	// (0x0003bba8) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double2_graphic_large_graphic_pane

0xb1e0,	// (0x0003bba8) list_double2_graphic_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double2_graphic_pane

0xb1e0,	// (0x0003bba8) list_double2_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double2_large_graphic_pane

0x83ac,	// (0x00038d74) list_double2_pane_ParamLimits

0x83ac,	// (0x00038d74) list_double2_pane

0xb1e0,	// (0x0003bba8) list_double_graphic_heading_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_graphic_heading_pane

0xb1e0,	// (0x0003bba8) list_double_graphic_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_graphic_pane

0xb1e0,	// (0x0003bba8) list_double_heading_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_heading_pane

0xb1e0,	// (0x0003bba8) list_double_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_large_graphic_pane

0xb1e0,	// (0x0003bba8) list_double_number_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_number_pane

0xb1e0,	// (0x0003bba8) list_double_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_pane

0xb1e0,	// (0x0003bba8) list_double_time_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_double_time_pane

0xb1e0,	// (0x0003bba8) list_setting_number_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_setting_number_pane

0xb1e0,	// (0x0003bba8) list_setting_pane_ParamLimits

0xb1e0,	// (0x0003bba8) list_setting_pane

0x83ed,	// (0x00038db5) list_single_2graphic_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_2graphic_pane

0x83ed,	// (0x00038db5) list_single_graphic_heading_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_graphic_heading_pane

0x83ed,	// (0x00038db5) list_single_graphic_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_graphic_pane

0x83ed,	// (0x00038db5) list_single_heading_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_heading_pane

0x844f,	// (0x00038e17) list_single_large_graphic_pane_ParamLimits

0x844f,	// (0x00038e17) list_single_large_graphic_pane

0x83ed,	// (0x00038db5) list_single_number_heading_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_number_heading_pane

0x83ed,	// (0x00038db5) list_single_number_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_number_pane

0x83ed,	// (0x00038db5) list_single_pane_ParamLimits

0x83ed,	// (0x00038db5) list_single_pane

0x22c4,	// (0x00032c8c) list_highlight_pane_cp1

0x461a,	// (0x00034fe2) list_single_pane_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_pane_g1

0x4626,	// (0x00034fee) list_single_pane_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_pane_g

0x8396,	// (0x00038d5e) list_single_pane_t1_ParamLimits

0x8396,	// (0x00038d5e) list_single_pane_t1

0x461a,	// (0x00034fe2) list_single_number_pane_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_number_pane_g1

0x4626,	// (0x00034fee) list_single_number_pane_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_number_pane_g

0x651f,	// (0x00036ee7) list_single_number_pane_t1_ParamLimits

0x651f,	// (0x00036ee7) list_single_number_pane_t1

0x82e0,	// (0x00038ca8) list_single_number_pane_t2_ParamLimits

0x82e0,	// (0x00038ca8) list_single_number_pane_t2

0x0001,

0xf950,	// (0x00040318) list_single_number_pane_t_ParamLimits

0xf950,	// (0x00040318) list_single_number_pane_t

0x6513,	// (0x00036edb) list_single_graphic_pane_g1_ParamLimits

0x6513,	// (0x00036edb) list_single_graphic_pane_g1

0x461a,	// (0x00034fe2) list_single_graphic_pane_g2_ParamLimits

0x461a,	// (0x00034fe2) list_single_graphic_pane_g2

0x4626,	// (0x00034fee) list_single_graphic_pane_g3_ParamLimits

0x4626,	// (0x00034fee) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003ff89) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003ff89) list_single_graphic_pane_g

0x651f,	// (0x00036ee7) list_single_graphic_pane_t1_ParamLimits

0x651f,	// (0x00036ee7) list_single_graphic_pane_t1

0x461a,	// (0x00034fe2) list_single_heading_pane_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_heading_pane_g1

0x4626,	// (0x00034fee) list_single_heading_pane_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_heading_pane_g

0x4648,	// (0x00035010) list_single_heading_pane_t1_ParamLimits

0x4648,	// (0x00035010) list_single_heading_pane_t1

0x465e,	// (0x00035026) list_single_heading_pane_t2_ParamLimits

0x465e,	// (0x00035026) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003ff95) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003ff95) list_single_heading_pane_t

0x461a,	// (0x00034fe2) list_single_number_heading_pane_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_number_heading_pane_g1

0x4626,	// (0x00034fee) list_single_number_heading_pane_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_number_heading_pane_g

0x4648,	// (0x00035010) list_single_number_heading_pane_t1_ParamLimits

0x4648,	// (0x00035010) list_single_number_heading_pane_t1

0x4670,	// (0x00035038) list_single_number_heading_pane_t2_ParamLimits

0x4670,	// (0x00035038) list_single_number_heading_pane_t2

0x4682,	// (0x0003504a) list_single_number_heading_pane_t3_ParamLimits

0x4682,	// (0x0003504a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003ff9a) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003ff9a) list_single_number_heading_pane_t

0x6535,	// (0x00036efd) list_single_graphic_heading_pane_g1_ParamLimits

0x6535,	// (0x00036efd) list_single_graphic_heading_pane_g1

0x6541,	// (0x00036f09) list_single_graphic_heading_pane_g4_ParamLimits

0x6541,	// (0x00036f09) list_single_graphic_heading_pane_g4

0x4626,	// (0x00034fee) list_single_graphic_heading_pane_g5_ParamLimits

0x4626,	// (0x00034fee) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003ffa1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003ffa1) list_single_graphic_heading_pane_g

0x4648,	// (0x00035010) list_single_graphic_heading_pane_t1_ParamLimits

0x4648,	// (0x00035010) list_single_graphic_heading_pane_t1

0x6552,	// (0x00036f1a) list_single_graphic_heading_pane_t2_ParamLimits

0x6552,	// (0x00036f1a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003ffa8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003ffa8) list_single_graphic_heading_pane_t

0x6564,	// (0x00036f2c) list_single_large_graphic_pane_g1_ParamLimits

0x6564,	// (0x00036f2c) list_single_large_graphic_pane_g1

0x4daa,	// (0x00035772) list_single_large_graphic_pane_g2_ParamLimits

0x4daa,	// (0x00035772) list_single_large_graphic_pane_g2

0x6570,	// (0x00036f38) list_single_large_graphic_pane_g3_ParamLimits

0x6570,	// (0x00036f38) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003ffad) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003ffad) list_single_large_graphic_pane_g

0xa28c,	// (0x0003ac54) wait_border_pane_g2_copy1

0x657c,	// (0x00036f44) list_single_large_graphic_pane_g4_cp2

0x6584,	// (0x00036f4c) list_single_large_graphic_pane_t1_ParamLimits

0x6584,	// (0x00036f4c) list_single_large_graphic_pane_t1

0x659a,	// (0x00036f62) list_double_pane_g1_ParamLimits

0x659a,	// (0x00036f62) list_double_pane_g1

0x65a6,	// (0x00036f6e) list_double_pane_g2_ParamLimits

0x65a6,	// (0x00036f6e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003ffb4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003ffb4) list_double_pane_g

0x65b2,	// (0x00036f7a) list_double_pane_t1_ParamLimits

0x65b2,	// (0x00036f7a) list_double_pane_t1

0x65c8,	// (0x00036f90) list_double_pane_t2_ParamLimits

0x65c8,	// (0x00036f90) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003ffb9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003ffb9) list_double_pane_t

0x65da,	// (0x00036fa2) list_double2_pane_g1_ParamLimits

0x65da,	// (0x00036fa2) list_double2_pane_g1

0x46da,	// (0x000350a2) list_double2_pane_g2_ParamLimits

0x46da,	// (0x000350a2) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003ffbe) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003ffbe) list_double2_pane_g

0x65eb,	// (0x00036fb3) list_double2_pane_t1_ParamLimits

0x65eb,	// (0x00036fb3) list_double2_pane_t1

0x6601,	// (0x00036fc9) list_double2_pane_t2_ParamLimits

0x6601,	// (0x00036fc9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003ffc3) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003ffc3) list_double2_pane_t

0x659a,	// (0x00036f62) list_double_number_pane_g1_ParamLimits

0x659a,	// (0x00036f62) list_double_number_pane_g1

0x65a6,	// (0x00036f6e) list_double_number_pane_g2_ParamLimits

0x65a6,	// (0x00036f6e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003ffb4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003ffb4) list_double_number_pane_g

0x6613,	// (0x00036fdb) list_double_number_pane_t1_ParamLimits

0x6613,	// (0x00036fdb) list_double_number_pane_t1

0x6625,	// (0x00036fed) list_double_number_pane_t2_ParamLimits

0x6625,	// (0x00036fed) list_double_number_pane_t2

0x663b,	// (0x00037003) list_double_number_pane_t3_ParamLimits

0x663b,	// (0x00037003) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003ffc8) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003ffc8) list_double_number_pane_t

0x664d,	// (0x00037015) list_double_graphic_pane_g1_ParamLimits

0x664d,	// (0x00037015) list_double_graphic_pane_g1

0x6659,	// (0x00037021) list_double_graphic_pane_g2_ParamLimits

0x6659,	// (0x00037021) list_double_graphic_pane_g2

0x6668,	// (0x00037030) list_double_graphic_pane_g3_ParamLimits

0x6668,	// (0x00037030) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003ffcf) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003ffcf) list_double_graphic_pane_g

0x6625,	// (0x00036fed) list_double_graphic_pane_t1_ParamLimits

0x6625,	// (0x00036fed) list_double_graphic_pane_t1

0x663b,	// (0x00037003) list_double_graphic_pane_t2_ParamLimits

0x663b,	// (0x00037003) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003ffd8) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003ffd8) list_double_graphic_pane_t

0x6680,	// (0x00037048) list_double2_graphic_pane_g1_ParamLimits

0x6680,	// (0x00037048) list_double2_graphic_pane_g1

0x659a,	// (0x00036f62) list_double2_graphic_pane_g2_ParamLimits

0x659a,	// (0x00036f62) list_double2_graphic_pane_g2

0x65a6,	// (0x00036f6e) list_double2_graphic_pane_g3_ParamLimits

0x65a6,	// (0x00036f6e) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003ffdd) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003ffdd) list_double2_graphic_pane_g

0x668c,	// (0x00037054) list_double2_graphic_pane_t1_ParamLimits

0x668c,	// (0x00037054) list_double2_graphic_pane_t1

0x66a2,	// (0x0003706a) list_double2_graphic_pane_t2_ParamLimits

0x66a2,	// (0x0003706a) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003ffe4) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003ffe4) list_double2_graphic_pane_t

0x66b4,	// (0x0003707c) list_double_large_graphic_pane_g1_ParamLimits

0x66b4,	// (0x0003707c) list_double_large_graphic_pane_g1

0x66d3,	// (0x0003709b) list_double_large_graphic_pane_g2_ParamLimits

0x66d3,	// (0x0003709b) list_double_large_graphic_pane_g2

0x65a6,	// (0x00036f6e) list_double_large_graphic_pane_g3_ParamLimits

0x65a6,	// (0x00036f6e) list_double_large_graphic_pane_g3

0x66e4,	// (0x000370ac) list_double_large_graphic_pane_g4_ParamLimits

0x66e4,	// (0x000370ac) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003ffe9) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003ffe9) list_double_large_graphic_pane_g

0x66f7,	// (0x000370bf) list_double_large_graphic_pane_t1_ParamLimits

0x66f7,	// (0x000370bf) list_double_large_graphic_pane_t1

0x6710,	// (0x000370d8) list_double_large_graphic_pane_t2_ParamLimits

0x6710,	// (0x000370d8) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003fff4) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003fff4) list_double_large_graphic_pane_t

0x6722,	// (0x000370ea) list_double2_large_graphic_pane_g1_ParamLimits

0x6722,	// (0x000370ea) list_double2_large_graphic_pane_g1

0x672e,	// (0x000370f6) list_double2_large_graphic_pane_g2_ParamLimits

0x672e,	// (0x000370f6) list_double2_large_graphic_pane_g2

0x673f,	// (0x00037107) list_double2_large_graphic_pane_g3_ParamLimits

0x673f,	// (0x00037107) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003fff9) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003fff9) list_double2_large_graphic_pane_g

0x668c,	// (0x00037054) list_double2_large_graphic_pane_t1_ParamLimits

0x668c,	// (0x00037054) list_double2_large_graphic_pane_t1

0x66a2,	// (0x0003706a) list_double2_large_graphic_pane_t2_ParamLimits

0x66a2,	// (0x0003706a) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003ffe4) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003ffe4) list_double2_large_graphic_pane_t

0x674b,	// (0x00037113) list_double_heading_pane_g1_ParamLimits

0x674b,	// (0x00037113) list_double_heading_pane_g1

0x675c,	// (0x00037124) list_double_heading_pane_g2_ParamLimits

0x675c,	// (0x00037124) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00040000) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00040000) list_double_heading_pane_g

0x6768,	// (0x00037130) list_double_heading_pane_t1_ParamLimits

0x6768,	// (0x00037130) list_double_heading_pane_t1

0x677e,	// (0x00037146) list_double_heading_pane_t2_ParamLimits

0x677e,	// (0x00037146) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00040005) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00040005) list_double_heading_pane_t

0x6680,	// (0x00037048) list_double_graphic_heading_pane_g1_ParamLimits

0x6680,	// (0x00037048) list_double_graphic_heading_pane_g1

0x674b,	// (0x00037113) list_double_graphic_heading_pane_g2_ParamLimits

0x674b,	// (0x00037113) list_double_graphic_heading_pane_g2

0x675c,	// (0x00037124) list_double_graphic_heading_pane_g3_ParamLimits

0x675c,	// (0x00037124) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0004000a) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0004000a) list_double_graphic_heading_pane_g

0x6768,	// (0x00037130) list_double_graphic_heading_pane_t1_ParamLimits

0x6768,	// (0x00037130) list_double_graphic_heading_pane_t1

0x677e,	// (0x00037146) list_double_graphic_heading_pane_t2_ParamLimits

0x677e,	// (0x00037146) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00040005) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00040005) list_double_graphic_heading_pane_t

0x66d3,	// (0x0003709b) list_double_time_pane_g1_ParamLimits

0x66d3,	// (0x0003709b) list_double_time_pane_g1

0x65a6,	// (0x00036f6e) list_double_time_pane_g2_ParamLimits

0x65a6,	// (0x00036f6e) list_double_time_pane_g2

0x0001,

0xf649,	// (0x00040011) list_double_time_pane_g_ParamLimits

0xf649,	// (0x00040011) list_double_time_pane_g

0x6790,	// (0x00037158) list_double_time_pane_t1_ParamLimits

0x6790,	// (0x00037158) list_double_time_pane_t1

0x67a6,	// (0x0003716e) list_double_time_pane_t2_ParamLimits

0x67a6,	// (0x0003716e) list_double_time_pane_t2

0x67b8,	// (0x00037180) list_double_time_pane_t3_ParamLimits

0x67b8,	// (0x00037180) list_double_time_pane_t3

0x67ca,	// (0x00037192) list_double_time_pane_t4_ParamLimits

0x67ca,	// (0x00037192) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x00040016) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x00040016) list_double_time_pane_t

0x4be5,	// (0x000355ad) list_setting_pane_g1_ParamLimits

0x4be5,	// (0x000355ad) list_setting_pane_g1

0x675c,	// (0x00037124) list_setting_pane_g2_ParamLimits

0x675c,	// (0x00037124) list_setting_pane_g2

0x0001,

0xf657,	// (0x0004001f) list_setting_pane_g_ParamLimits

0xf657,	// (0x0004001f) list_setting_pane_g

0x67dc,	// (0x000371a4) list_setting_pane_t1_ParamLimits

0x67dc,	// (0x000371a4) list_setting_pane_t1

0x67f3,	// (0x000371bb) list_setting_pane_t2_ParamLimits

0x67f3,	// (0x000371bb) list_setting_pane_t2

0x0002,

0xf65c,	// (0x00040024) list_setting_pane_t_ParamLimits

0xf65c,	// (0x00040024) list_setting_pane_t

0x6830,	// (0x000371f8) set_value_pane_cp_ParamLimits

0x6830,	// (0x000371f8) set_value_pane_cp

0x683c,	// (0x00037204) list_setting_number_pane_g1_ParamLimits

0x683c,	// (0x00037204) list_setting_number_pane_g1

0x6848,	// (0x00037210) list_setting_number_pane_g2_ParamLimits

0x6848,	// (0x00037210) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0004002b) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0004002b) list_setting_number_pane_g

0x6854,	// (0x0003721c) list_setting_number_pane_t1_ParamLimits

0x6854,	// (0x0003721c) list_setting_number_pane_t1

0x6868,	// (0x00037230) list_setting_number_pane_t2_ParamLimits

0x6868,	// (0x00037230) list_setting_number_pane_t2

0x687f,	// (0x00037247) list_setting_number_pane_t3_ParamLimits

0x687f,	// (0x00037247) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x00040030) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x00040030) list_setting_number_pane_t

0x6830,	// (0x000371f8) set_value_pane_ParamLimits

0x6830,	// (0x000371f8) set_value_pane

0x2682,	// (0x0003304a) bg_set_opt_pane_ParamLimits

0x2682,	// (0x0003304a) bg_set_opt_pane

0x68c2,	// (0x0003728a) set_value_pane_t1

0x26a3,	// (0x0003306b) slider_set_pane_cp3

0x68d0,	// (0x00037298) volume_small_pane_cp

0x26ac,	// (0x00033074) list_form_gen_pane

0x26b5,	// (0x0003307d) scroll_pane_cp8

0x68d9,	// (0x000372a1) form_field_data_pane_ParamLimits

0x68d9,	// (0x000372a1) form_field_data_pane

0x68f1,	// (0x000372b9) form_field_data_wide_pane_ParamLimits

0x68f1,	// (0x000372b9) form_field_data_wide_pane

0x6912,	// (0x000372da) form_field_popup_pane_ParamLimits

0x6912,	// (0x000372da) form_field_popup_pane

0x6930,	// (0x000372f8) form_field_popup_wide_pane_ParamLimits

0x6930,	// (0x000372f8) form_field_popup_wide_pane

0x470b,	// (0x000350d3) form_field_slider_pane_ParamLimits

0x470b,	// (0x000350d3) form_field_slider_pane

0x694d,	// (0x00037315) form_field_slider_wide_pane_ParamLimits

0x694d,	// (0x00037315) form_field_slider_wide_pane

0x26c6,	// (0x0003308e) data_form_pane

0x696a,	// (0x00037332) form_field_data_pane_t1

0x26d2,	// (0x0003309a) input_focus_pane

0x6982,	// (0x0003734a) data_form_wide_pane

0x699f,	// (0x00037367) form_field_data_wide_pane_t1

0x25c6,	// (0x00032f8e) input_focus_pane_cp6

0x69c1,	// (0x00037389) form_field_popup_pane_t1

0x26d2,	// (0x0003309a) input_focus_pane_cp7

0x2700,	// (0x000330c8) list_form_pane

0x69e1,	// (0x000373a9) form_field_popup_wide_pane_t1

0x26d2,	// (0x0003309a) input_focus_pane_cp8

0x270c,	// (0x000330d4) list_form_wide_pane

0x69fe,	// (0x000373c6) form_field_slider_pane_t1_ParamLimits

0x69fe,	// (0x000373c6) form_field_slider_pane_t1

0x6a14,	// (0x000373dc) form_field_slider_pane_t2_ParamLimits

0x6a14,	// (0x000373dc) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x00040040) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x00040040) form_field_slider_pane_t

0x2312,	// (0x00032cda) input_focus_pane_cp9_ParamLimits

0x2312,	// (0x00032cda) input_focus_pane_cp9

0x6a29,	// (0x000373f1) slider_cont_pane_ParamLimits

0x6a29,	// (0x000373f1) slider_cont_pane

0x2718,	// (0x000330e0) form_field_slider_wide_pane_t1_ParamLimits

0x2718,	// (0x000330e0) form_field_slider_wide_pane_t1

0x6a3d,	// (0x00037405) form_field_slider_wide_pane_t2_ParamLimits

0x6a3d,	// (0x00037405) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x00040045) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x00040045) form_field_slider_wide_pane_t

0x2312,	// (0x00032cda) input_focus_pane_cp10_ParamLimits

0x2312,	// (0x00032cda) input_focus_pane_cp10

0x6a4f,	// (0x00037417) slider_cont_pane_cp1_ParamLimits

0x6a4f,	// (0x00037417) slider_cont_pane_cp1

0x6a63,	// (0x0003742b) slider_form_pane_cp

0x272a,	// (0x000330f2) input_focus_pane_g1

0x2732,	// (0x000330fa) input_focus_pane_g2

0x273a,	// (0x00033102) input_focus_pane_g3

0x2742,	// (0x0003310a) input_focus_pane_g4

0x274a,	// (0x00033112) input_focus_pane_g5

0x2752,	// (0x0003311a) input_focus_pane_g6

0x275a,	// (0x00033122) input_focus_pane_g7

0x2762,	// (0x0003312a) input_focus_pane_g8

0x276a,	// (0x00033132) input_focus_pane_g9

0x22ba,	// (0x00032c82) input_focus_pane_g10

0x0009,

0xf682,	// (0x0004004a) input_focus_pane_g

0xa295,	// (0x0003ac5d) wait_border_pane_g3_copy1

0x6a6b,	// (0x00037433) data_form_pane_t1

0x22ba,	// (0x00032c82) wait_anim_pane_g1_copy1

0x836a,	// (0x00038d32) data_form_wide_pane_t1

0x6a86,	// (0x0003744e) list_form_graphic_pane_cp_ParamLimits

0x6a86,	// (0x0003744e) list_form_graphic_pane_cp

0xb184,	// (0x0003bb4c) slider_form_pane_g1

0xb18d,	// (0x0003bb55) slider_form_pane_g2

0x0006,

0xf980,	// (0x00040348) slider_form_pane_g

0x6a9a,	// (0x00037462) list_form_graphic_pane_ParamLimits

0x6a9a,	// (0x00037462) list_form_graphic_pane

0x6ab1,	// (0x00037479) list_form_graphic_pane_g1

0x6ab9,	// (0x00037481) list_form_graphic_pane_t1_ParamLimits

0x6ab9,	// (0x00037481) list_form_graphic_pane_t1

0x2320,	// (0x00032ce8) list_highlight_pane_cp5_ParamLimits

0x2320,	// (0x00032ce8) list_highlight_pane_cp5

0x471e,	// (0x000350e6) find_pane_g1

0x2772,	// (0x0003313a) input_find_pane

0x6ace,	// (0x00037496) input_find_pane_g1_ParamLimits

0x6ace,	// (0x00037496) input_find_pane_g1

0x6ada,	// (0x000374a2) input_find_pane_t1_ParamLimits

0x6ada,	// (0x000374a2) input_find_pane_t1

0x6aef,	// (0x000374b7) input_find_pane_t2_ParamLimits

0x6aef,	// (0x000374b7) input_find_pane_t2

0x0001,

0xf697,	// (0x0004005f) input_find_pane_t_ParamLimits

0xf697,	// (0x0004005f) input_find_pane_t

0x277b,	// (0x00033143) input_focus_pane_cp5_ParamLimits

0x277b,	// (0x00033143) input_focus_pane_cp5

0x2789,	// (0x00033151) bg_popup_window_pane_cp2_ParamLimits

0x2789,	// (0x00033151) bg_popup_window_pane_cp2

0x2796,	// (0x0003315e) listscroll_menu_pane_ParamLimits

0x2796,	// (0x0003315e) listscroll_menu_pane

0x6b10,	// (0x000374d8) popup_submenu_window_ParamLimits

0x6b10,	// (0x000374d8) popup_submenu_window

0x27a2,	// (0x0003316a) find_popup_pane_g1

0x6b38,	// (0x00037500) input_popup_find_pane_cp

0x277b,	// (0x00033143) input_focus_pane_cp4_ParamLimits

0x277b,	// (0x00033143) input_focus_pane_cp4

0x27aa,	// (0x00033172) input_popup_find_pane_t1_ParamLimits

0x27aa,	// (0x00033172) input_popup_find_pane_t1

0x22c4,	// (0x00032c8c) bg_popup_sub_pane_cp

0x27d8,	// (0x000331a0) listscroll_popup_sub_pane

0x27e0,	// (0x000331a8) list_submenu_pane_ParamLimits

0x27e0,	// (0x000331a8) list_submenu_pane

0x27f1,	// (0x000331b9) scroll_pane_cp4

0x6b50,	// (0x00037518) list_single_popup_submenu_pane_ParamLimits

0x6b50,	// (0x00037518) list_single_popup_submenu_pane

0x2d69,	// (0x00033731) list_single_popup_submenu_pane_g1

0x6b64,	// (0x0003752c) list_single_popup_submenu_pane_t1_ParamLimits

0x6b64,	// (0x0003752c) list_single_popup_submenu_pane_t1

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp1_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp1

0x27f9,	// (0x000331c1) tabs_2_active_pane_g1

0x6b79,	// (0x00037541) tabs_2_active_pane_t1

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp1_ParamLimits

0x2320,	// (0x00032ce8) bg_passive_tab_pane_cp1

0x27f9,	// (0x000331c1) tabs_2_passive_pane_g1

0x6b79,	// (0x00037541) tabs_2_passive_pane_t1

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp4

0x6b8b,	// (0x00037553) tabs_2_long_active_pane_t1

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp4

0x800c,	// (0x000389d4) list_single_midp_graphic_pane_g4_ParamLimits

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp5

0x6baa,	// (0x00037572) tabs_3_long_active_pane_t1

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp5

0x800c,	// (0x000389d4) list_single_midp_graphic_pane_g4

0x2320,	// (0x00032ce8) bg_popup_window_pane_cp13_ParamLimits

0x2320,	// (0x00032ce8) bg_popup_window_pane_cp13

0x2801,	// (0x000331c9) listscroll_popup_fast_pane_ParamLimits

0x2801,	// (0x000331c9) listscroll_popup_fast_pane

0x280d,	// (0x000331d5) grid_popup_fast_pane_ParamLimits

0x280d,	// (0x000331d5) grid_popup_fast_pane

0x281f,	// (0x000331e7) scroll_pane_cp9_ParamLimits

0x281f,	// (0x000331e7) scroll_pane_cp9

0xca98,	// (0x0003d460) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca98,	// (0x0003d460) list_single_graphic_hl_pane_t1_cp2

0x2832,	// (0x000331fa) input_focus_pane_cp20_ParamLimits

0x2832,	// (0x000331fa) input_focus_pane_cp20

0x2840,	// (0x00033208) query_popup_data_pane_t1_ParamLimits

0x2840,	// (0x00033208) query_popup_data_pane_t1

0x2853,	// (0x0003321b) query_popup_data_pane_t2_ParamLimits

0x2853,	// (0x0003321b) query_popup_data_pane_t2

0x2899,	// (0x00033261) query_popup_data_pane_t3_ParamLimits

0x2899,	// (0x00033261) query_popup_data_pane_t3

0x28da,	// (0x000332a2) query_popup_data_pane_t4_ParamLimits

0x28da,	// (0x000332a2) query_popup_data_pane_t4

0x2916,	// (0x000332de) query_popup_data_pane_t5_ParamLimits

0x2916,	// (0x000332de) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x00040064) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x00040064) query_popup_data_pane_t

0x272a,	// (0x000330f2) bg_set_opt_pane_g1

0x2732,	// (0x000330fa) bg_set_opt_pane_g2

0x273a,	// (0x00033102) bg_set_opt_pane_g3

0x2742,	// (0x0003310a) bg_set_opt_pane_g4

0x274a,	// (0x00033112) bg_set_opt_pane_g5

0x2752,	// (0x0003311a) bg_set_opt_pane_g6

0x275a,	// (0x00033122) bg_set_opt_pane_g7

0x2762,	// (0x0003312a) bg_set_opt_pane_g8

0x276a,	// (0x00033132) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0004006f) bg_set_opt_pane_g

0x711f,	// (0x00037ae7) control_top_pane_stacon_ParamLimits

0x711f,	// (0x00037ae7) control_top_pane_stacon

0x7172,	// (0x00037b3a) signal_pane_stacon_ParamLimits

0x7172,	// (0x00037b3a) signal_pane_stacon

0x2ca2,	// (0x0003366a) stacon_top_pane_g1_ParamLimits

0x2ca2,	// (0x0003366a) stacon_top_pane_g1

0x7197,	// (0x00037b5f) title_pane_stacon_ParamLimits

0x7197,	// (0x00037b5f) title_pane_stacon

0x71c1,	// (0x00037b89) uni_indicator_pane_stacon_ParamLimits

0x71c1,	// (0x00037b89) uni_indicator_pane_stacon

0x71d6,	// (0x00037b9e) battery_pane_stacon_ParamLimits

0x71d6,	// (0x00037b9e) battery_pane_stacon

0x721a,	// (0x00037be2) control_bottom_pane_stacon_ParamLimits

0x721a,	// (0x00037be2) control_bottom_pane_stacon

0x723d,	// (0x00037c05) navi_pane_stacon_ParamLimits

0x723d,	// (0x00037c05) navi_pane_stacon

0x2cc4,	// (0x0003368c) stacon_bottom_pane_g1_ParamLimits

0x2cc4,	// (0x0003368c) stacon_bottom_pane_g1

0x6bd6,	// (0x0003759e) aid_levels_signal_lsc_ParamLimits

0x6bd6,	// (0x0003759e) aid_levels_signal_lsc

0x6bec,	// (0x000375b4) signal_pane_stacon_g1_ParamLimits

0x6bec,	// (0x000375b4) signal_pane_stacon_g1

0x6c00,	// (0x000375c8) signal_pane_stacon_g2_ParamLimits

0x6c00,	// (0x000375c8) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x00040082) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00040082) signal_pane_stacon_g

0x6c35,	// (0x000375fd) title_pane_stacon_t1_ParamLimits

0x6c35,	// (0x000375fd) title_pane_stacon_t1

0x296e,	// (0x00033336) uni_indicator_pane_stacon_g1

0x2978,	// (0x00033340) uni_indicator_pane_stacon_g2

0x295a,	// (0x00033322) uni_indicator_pane_stacon_g3

0x2964,	// (0x0003332c) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0004008e) uni_indicator_pane_stacon_g

0x6c5a,	// (0x00037622) control_top_pane_stacon_g1

0x6c62,	// (0x0003762a) control_top_pane_stacon_t1_ParamLimits

0x6c62,	// (0x0003762a) control_top_pane_stacon_t1

0x6c99,	// (0x00037661) aid_levels_battery_lsc_ParamLimits

0x6c99,	// (0x00037661) aid_levels_battery_lsc

0x6cb0,	// (0x00037678) battery_pane_stacon_g1_ParamLimits

0x6cb0,	// (0x00037678) battery_pane_stacon_g1

0x6cc3,	// (0x0003768b) battery_pane_stacon_g2_ParamLimits

0x6cc3,	// (0x0003768b) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00040097) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00040097) battery_pane_stacon_g

0x6d01,	// (0x000376c9) navi_icon_pane_stacon

0x6d15,	// (0x000376dd) navi_navi_pane_stacon

0x6d01,	// (0x000376c9) navi_text_pane_stacon

0x6c5a,	// (0x00037622) control_bottom_pane_stacon_g1

0x6d29,	// (0x000376f1) control_bottom_pane_stacon_t1_ParamLimits

0x6d29,	// (0x000376f1) control_bottom_pane_stacon_t1

0x6d60,	// (0x00037728) grid_app_pane_ParamLimits

0x6d60,	// (0x00037728) grid_app_pane

0x6d82,	// (0x0003774a) scroll_pane_cp15_ParamLimits

0x6d82,	// (0x0003774a) scroll_pane_cp15

0x6d95,	// (0x0003775d) cell_app_pane_ParamLimits

0x6d95,	// (0x0003775d) cell_app_pane

0x6dbd,	// (0x00037785) cell_app_pane_g1_ParamLimits

0x6dbd,	// (0x00037785) cell_app_pane_g1

0x299c,	// (0x00033364) cell_app_pane_g2_ParamLimits

0x299c,	// (0x00033364) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0004009c) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0004009c) cell_app_pane_g

0x6de1,	// (0x000377a9) cell_app_pane_t1_ParamLimits

0x6de1,	// (0x000377a9) cell_app_pane_t1

0x29a8,	// (0x00033370) grid_highlight_pane_ParamLimits

0x29a8,	// (0x00033370) grid_highlight_pane

0x272a,	// (0x000330f2) cell_highlight_pane_g1

0x2732,	// (0x000330fa) cell_highlight_pane_g2

0x273a,	// (0x00033102) cell_highlight_pane_g3

0x2742,	// (0x0003310a) cell_highlight_pane_g4

0x274a,	// (0x00033112) cell_highlight_pane_g5

0x2752,	// (0x0003311a) cell_highlight_pane_g6

0x275a,	// (0x00033122) cell_highlight_pane_g7

0x2762,	// (0x0003312a) cell_highlight_pane_g8

0x276a,	// (0x00033132) cell_highlight_pane_g9

0x22ba,	// (0x00032c82) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0004004a) cell_highlight_pane_g

0x29b9,	// (0x00033381) bg_scroll_pane

0x6e0b,	// (0x000377d3) scroll_handle_pane

0x2a00,	// (0x000333c8) scroll_bg_pane_g1

0x2a15,	// (0x000333dd) scroll_bg_pane_g2

0x2a2d,	// (0x000333f5) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x000400a1) scroll_bg_pane_g

0x6e34,	// (0x000377fc) scroll_handle_focus_pane_ParamLimits

0x6e34,	// (0x000377fc) scroll_handle_focus_pane

0x2a00,	// (0x000333c8) scroll_handle_pane_g1

0x2a42,	// (0x0003340a) scroll_handle_pane_g2

0x2a2d,	// (0x000333f5) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x000400a8) scroll_handle_pane_g

0x277b,	// (0x00033143) bg_popup_sub_pane_cp21_ParamLimits

0x277b,	// (0x00033143) bg_popup_sub_pane_cp21

0x6e41,	// (0x00037809) popup_fep_japan_predictive_window_t1_ParamLimits

0x6e41,	// (0x00037809) popup_fep_japan_predictive_window_t1

0x6e5b,	// (0x00037823) popup_fep_japan_predictive_window_t2_ParamLimits

0x6e5b,	// (0x00037823) popup_fep_japan_predictive_window_t2

0x6e8e,	// (0x00037856) popup_fep_japan_predictive_window_t3_ParamLimits

0x6e8e,	// (0x00037856) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x000400af) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x000400af) popup_fep_japan_predictive_window_t

0x22c4,	// (0x00032c8c) bg_popup_sub_pane_cp23

0x358b,	// (0x00033f53) listscroll_japin_cand_pane

0x2a56,	// (0x0003341e) popup_fep_japan_candidate_window_t1

0x2a64,	// (0x0003342c) candidate_pane_ParamLimits

0x2a64,	// (0x0003342c) candidate_pane

0x6ec5,	// (0x0003788d) scroll_pane_cp30

0x2a76,	// (0x0003343e) list_single_popup_jap_candidate_pane_ParamLimits

0x2a76,	// (0x0003343e) list_single_popup_jap_candidate_pane

0x22c4,	// (0x00032c8c) list_highlight_pane_cp30

0x2a8b,	// (0x00033453) list_single_popup_jap_candidate_pane_t1

0x2a9a,	// (0x00033462) level_1_signal

0x2aa7,	// (0x0003346f) level_2_signal

0x2ab4,	// (0x0003347c) level_3_signal

0x2ac1,	// (0x00033489) level_4_signal

0x2ace,	// (0x00033496) level_5_signal

0x2adb,	// (0x000334a3) level_6_signal

0x2ae8,	// (0x000334b0) level_7_signal

0x2a9a,	// (0x00033462) level_1_battery

0x2aa7,	// (0x0003346f) level_2_battery

0x2ab4,	// (0x0003347c) level_3_battery

0x2ac1,	// (0x00033489) level_4_battery

0x2ace,	// (0x00033496) level_5_battery

0x2adb,	// (0x000334a3) level_6_battery

0x2ae8,	// (0x000334b0) level_7_battery

0x2b0d,	// (0x000334d5) list_menu_pane_ParamLimits

0x2b0d,	// (0x000334d5) list_menu_pane

0x2b23,	// (0x000334eb) scroll_pane_cp25_ParamLimits

0x2b23,	// (0x000334eb) scroll_pane_cp25

0x2b3c,	// (0x00033504) list_double2_graphic_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double2_graphic_pane_cp2

0x2b3c,	// (0x00033504) list_double2_large_graphic_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double2_large_graphic_pane_cp2

0x2b3c,	// (0x00033504) list_double2_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double2_pane_cp2

0x2b3c,	// (0x00033504) list_double_graphic_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double_graphic_pane_cp2

0x2b3c,	// (0x00033504) list_double_large_graphic_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double_large_graphic_pane_cp2

0x2b3c,	// (0x00033504) list_double_number_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double_number_pane_cp2

0x2b3c,	// (0x00033504) list_double_pane_cp2_ParamLimits

0x2b3c,	// (0x00033504) list_double_pane_cp2

0x6f00,	// (0x000378c8) list_single_2graphic_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_2graphic_pane_cp2

0x6f00,	// (0x000378c8) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_graphic_heading_pane_cp2

0x6f00,	// (0x000378c8) list_single_graphic_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_graphic_pane_cp2

0x6f00,	// (0x000378c8) list_single_heading_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_heading_pane_cp2

0x2b4c,	// (0x00033514) list_single_large_graphic_pane_cp2_ParamLimits

0x2b4c,	// (0x00033514) list_single_large_graphic_pane_cp2

0x6f00,	// (0x000378c8) list_single_number_heading_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_number_heading_pane_cp2

0x6f00,	// (0x000378c8) list_single_number_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_number_pane_cp2

0x6f00,	// (0x000378c8) list_single_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_pane_cp2

0x2b66,	// (0x0003352e) bg_popup_sub_pane_cp22

0x6fd8,	// (0x000379a0) popup_side_volume_key_window_g1

0x6ffc,	// (0x000379c4) popup_side_volume_key_window_t1

0x7018,	// (0x000379e0) volume_small_pane_cp1

0x2312,	// (0x00032cda) bg_popup_sub_pane_cp24_ParamLimits

0x2312,	// (0x00032cda) bg_popup_sub_pane_cp24

0x2b7c,	// (0x00033544) fep_china_uni_candidate_pane_ParamLimits

0x2b7c,	// (0x00033544) fep_china_uni_candidate_pane

0x2b90,	// (0x00033558) fep_china_uni_entry_pane

0x2ba0,	// (0x00033568) popup_fep_china_uni_window_g1

0x7020,	// (0x000379e8) fep_china_uni_entry_pane_g1

0x7028,	// (0x000379f0) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x000400e0) fep_china_uni_entry_pane_g

0x2bbc,	// (0x00033584) fep_entry_item_pane

0x2bc6,	// (0x0003358e) fep_candidate_item_pane

0x7030,	// (0x000379f8) fep_china_uni_candidate_pane_g1

0x2bce,	// (0x00033596) fep_china_uni_candidate_pane_g2

0x2bd6,	// (0x0003359e) fep_china_uni_candidate_pane_g3

0x7038,	// (0x00037a00) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x000400e5) fep_china_uni_candidate_pane_g

0x22ba,	// (0x00032c82) fep_entry_item_pane_g1

0x2bde,	// (0x000335a6) fep_entry_item_pane_t1_ParamLimits

0x2bde,	// (0x000335a6) fep_entry_item_pane_t1

0x2bf4,	// (0x000335bc) fep_candidate_item_pane_t1_ParamLimits

0x2bf4,	// (0x000335bc) fep_candidate_item_pane_t1

0x2c09,	// (0x000335d1) fep_candidate_item_pane_t2_ParamLimits

0x2c09,	// (0x000335d1) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x000400ee) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x000400ee) fep_candidate_item_pane_t

0x2320,	// (0x00032ce8) list_highlight_pane_cp31_ParamLimits

0x2320,	// (0x00032ce8) list_highlight_pane_cp31

0x2c1b,	// (0x000335e3) level_1_signal_lsc

0x2c24,	// (0x000335ec) level_2_signal_lsc

0x2c2d,	// (0x000335f5) level_3_signal_lsc

0x2c36,	// (0x000335fe) level_4_signal_lsc

0x2c3f,	// (0x00033607) level_5_signal_lsc

0x2c48,	// (0x00033610) level_6_signal_lsc

0x2c51,	// (0x00033619) level_7_signal_lsc

0x2c51,	// (0x00033619) level_1_battery_lsc

0x2c5a,	// (0x00033622) level_2_battery_lsc

0x2c63,	// (0x0003362b) level_3_battery_lsc

0x2c6c,	// (0x00033634) level_4_battery_lsc

0x2c75,	// (0x0003363d) level_5_battery_lsc

0x2c7e,	// (0x00033646) level_6_battery_lsc

0x2c1b,	// (0x000335e3) level_7_battery_lsc

0x2c87,	// (0x0003364f) scroll_handle_focus_pane_g1

0x2c90,	// (0x00033658) scroll_handle_focus_pane_g2

0x2c99,	// (0x00033661) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x000400f3) scroll_handle_focus_pane_g

0x7040,	// (0x00037a08) list_single_2graphic_pane_g1_ParamLimits

0x7040,	// (0x00037a08) list_single_2graphic_pane_g1

0x6541,	// (0x00036f09) list_single_2graphic_pane_g2_ParamLimits

0x6541,	// (0x00036f09) list_single_2graphic_pane_g2

0x4626,	// (0x00034fee) list_single_2graphic_pane_g3_ParamLimits

0x4626,	// (0x00034fee) list_single_2graphic_pane_g3

0x704c,	// (0x00037a14) list_single_2graphic_pane_g4_ParamLimits

0x704c,	// (0x00037a14) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x000400fa) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x000400fa) list_single_2graphic_pane_g

0x7058,	// (0x00037a20) list_single_2graphic_pane_t1_ParamLimits

0x7058,	// (0x00037a20) list_single_2graphic_pane_t1

0x7086,	// (0x00037a4e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7086,	// (0x00037a4e) list_double2_graphic_large_graphic_pane_g1

0x672e,	// (0x000370f6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x672e,	// (0x000370f6) list_double2_graphic_large_graphic_pane_g2

0x673f,	// (0x00037107) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x673f,	// (0x00037107) list_double2_graphic_large_graphic_pane_g3

0x7096,	// (0x00037a5e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7096,	// (0x00037a5e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x00040103) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x00040103) list_double2_graphic_large_graphic_pane_g

0x70a2,	// (0x00037a6a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x70a2,	// (0x00037a6a) list_double2_graphic_large_graphic_pane_t1

0x70b8,	// (0x00037a80) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x70b8,	// (0x00037a80) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0004010c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0004010c) list_double2_graphic_large_graphic_pane_t

0x729c,	// (0x00037c64) popup_fast_swap_window_ParamLimits

0x729c,	// (0x00037c64) popup_fast_swap_window

0x72b8,	// (0x00037c80) popup_side_volume_key_window

0x72d2,	// (0x00037c9a) stacon_top_pane

0x72dc,	// (0x00037ca4) status_pane_ParamLimits

0x72dc,	// (0x00037ca4) status_pane

0x72ea,	// (0x00037cb2) status_small_pane

0x22c4,	// (0x00032c8c) control_pane

0x22c4,	// (0x00032c8c) stacon_bottom_pane

0x26b5,	// (0x0003307d) scroll_pane_cp121

0x26ac,	// (0x00033074) set_content_pane

0x70ca,	// (0x00037a92) bg_active_tab_pane_g1_cp1

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp1

0x70dc,	// (0x00037aa4) bg_active_tab_pane_g3_cp1

0x70ca,	// (0x00037a92) bg_passive_tab_pane_g1_cp1

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp1

0x70dc,	// (0x00037aa4) bg_passive_tab_pane_g3_cp1

0x70e5,	// (0x00037aad) bg_active_tab_pane_g1_cp2

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp2

0x70ee,	// (0x00037ab6) bg_active_tab_pane_g3_cp2

0x70e5,	// (0x00037aad) bg_passive_tab_pane_g1_cp2

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp2

0x70ee,	// (0x00037ab6) bg_passive_tab_pane_g3_cp2

0x70f7,	// (0x00037abf) bg_active_tab_pane_g1_cp3

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp3

0x7100,	// (0x00037ac8) bg_active_tab_pane_g3_cp3

0x70f7,	// (0x00037abf) bg_passive_tab_pane_g1_cp3

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp3

0x7100,	// (0x00037ac8) bg_passive_tab_pane_g3_cp3

0x7109,	// (0x00037ad1) bg_active_tab_pane_g1_cp4

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp4

0x7114,	// (0x00037adc) bg_active_tab_pane_g3_cp4

0x7109,	// (0x00037ad1) bg_passive_tab_pane_g1_cp4

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp4

0x7114,	// (0x00037adc) bg_passive_tab_pane_g3_cp4

0x7260,	// (0x00037c28) bg_active_tab_pane_g1_cp5

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp5

0x7269,	// (0x00037c31) bg_active_tab_pane_g3_cp5

0x7260,	// (0x00037c28) bg_passive_tab_pane_g1_cp5

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp5

0x7269,	// (0x00037c31) bg_passive_tab_pane_g3_cp5

0x7272,	// (0x00037c3a) list_set_graphic_pane_ParamLimits

0x7272,	// (0x00037c3a) list_set_graphic_pane

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp4

0x2ce0,	// (0x000336a8) list_set_graphic_pane_g1_ParamLimits

0x2ce0,	// (0x000336a8) list_set_graphic_pane_g1

0x2cec,	// (0x000336b4) list_set_graphic_pane_g2_ParamLimits

0x2cec,	// (0x000336b4) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x00040111) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x00040111) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x000404a4) volume_small_pane_cp_g

0x7290,	// (0x00037c58) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7290,	// (0x00037c58) list_double2_large_graphic_pane_g1_cp2

0x2d0e,	// (0x000336d6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2d0e,	// (0x000336d6) list_double2_large_graphic_pane_g2_cp2

0x2d1f,	// (0x000336e7) list_double2_large_graphic_pane_g3_cp2

0x2d27,	// (0x000336ef) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2d27,	// (0x000336ef) list_double2_large_graphic_pane_t1_cp2

0x2d3d,	// (0x00033705) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2d3d,	// (0x00033705) list_double2_large_graphic_pane_t2_cp2

0xad46,	// (0x0003b70e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad46,	// (0x0003b70e) list_double_large_graphic_pane_g1_cp2

0xad57,	// (0x0003b71f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad57,	// (0x0003b71f) list_double_large_graphic_pane_g2_cp2

0x73f7,	// (0x00037dbf) list_double_large_graphic_pane_g3_cp2

0xad68,	// (0x0003b730) list_double_large_graphic_pane_g4_cp

0xad70,	// (0x0003b738) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad70,	// (0x0003b738) list_double_large_graphic_pane_t1_cp2

0xad87,	// (0x0003b74f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad87,	// (0x0003b74f) list_double_large_graphic_pane_t2_cp2

0x72f5,	// (0x00037cbd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x72f5,	// (0x00037cbd) list_double2_graphic_pane_g1_cp2

0x7303,	// (0x00037ccb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7303,	// (0x00037ccb) list_double2_graphic_pane_g2_cp2

0x7314,	// (0x00037cdc) list_double2_graphic_pane_g3_cp2

0x731e,	// (0x00037ce6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x731e,	// (0x00037ce6) list_double2_graphic_pane_t1_cp2

0x7334,	// (0x00037cfc) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7334,	// (0x00037cfc) list_double2_graphic_pane_t2_cp2

0x2d4f,	// (0x00033717) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2d4f,	// (0x00033717) list_single_number_heading_pane_g1_cp2

0x7346,	// (0x00037d0e) list_single_number_heading_pane_g2_cp2

0x734e,	// (0x00037d16) list_single_number_heading_pane_t1_cp2_ParamLimits

0x734e,	// (0x00037d16) list_single_number_heading_pane_t1_cp2

0x7364,	// (0x00037d2c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7364,	// (0x00037d2c) list_single_number_heading_pane_t2_cp2

0x7376,	// (0x00037d3e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7376,	// (0x00037d3e) list_single_number_heading_pane_t3_cp2

0x2d4f,	// (0x00033717) list_single_heading_pane_g1_cp2_ParamLimits

0x2d4f,	// (0x00033717) list_single_heading_pane_g1_cp2

0x7346,	// (0x00037d0e) list_single_heading_pane_g2_cp2

0x734e,	// (0x00037d16) list_single_heading_pane_t1_cp2_ParamLimits

0x734e,	// (0x00037d16) list_single_heading_pane_t1_cp2

0xab50,	// (0x0003b518) list_single_heading_pane_t2_cp2_ParamLimits

0xab50,	// (0x0003b518) list_single_heading_pane_t2_cp2

0xaa98,	// (0x0003b460) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa98,	// (0x0003b460) list_double_graphic_pane_g1_cp2

0xaaa4,	// (0x0003b46c) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaa4,	// (0x0003b46c) list_double_graphic_pane_g2_cp2

0xaab3,	// (0x0003b47b) list_double_graphic_pane_g3_cp2

0xaabb,	// (0x0003b483) list_double_graphic_pane_t1_cp2_ParamLimits

0xaabb,	// (0x0003b483) list_double_graphic_pane_t1_cp2

0xaad1,	// (0x0003b499) list_double_graphic_pane_t2_cp2_ParamLimits

0xaad1,	// (0x0003b499) list_double_graphic_pane_t2_cp2

0x73eb,	// (0x00037db3) list_double_number_pane_g1_cp2_ParamLimits

0x73eb,	// (0x00037db3) list_double_number_pane_g1_cp2

0x73f7,	// (0x00037dbf) list_double_number_pane_g2_cp2

0xaa5c,	// (0x0003b424) list_double_number_pane_t1_cp2_ParamLimits

0xaa5c,	// (0x0003b424) list_double_number_pane_t1_cp2

0xaa70,	// (0x0003b438) list_double_number_pane_t2_cp2_ParamLimits

0xaa70,	// (0x0003b438) list_double_number_pane_t2_cp2

0xaa86,	// (0x0003b44e) list_double_number_pane_t3_cp2_ParamLimits

0xaa86,	// (0x0003b44e) list_double_number_pane_t3_cp2

0xa945,	// (0x0003b30d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa945,	// (0x0003b30d) list_single_graphic_pane_g1_cp2

0x744f,	// (0x00037e17) list_single_graphic_pane_g2_cp2_ParamLimits

0x744f,	// (0x00037e17) list_single_graphic_pane_g2_cp2

0x745b,	// (0x00037e23) list_single_graphic_pane_g3_cp2

0xa91b,	// (0x0003b2e3) list_single_graphic_pane_t1_cp2_ParamLimits

0xa91b,	// (0x0003b2e3) list_single_graphic_pane_t1_cp2

0x744f,	// (0x00037e17) list_single_number_pane_g1_cp2_ParamLimits

0x744f,	// (0x00037e17) list_single_number_pane_g1_cp2

0x745b,	// (0x00037e23) list_single_number_pane_g2_cp2

0xa91b,	// (0x0003b2e3) list_single_number_pane_t1_cp2_ParamLimits

0xa91b,	// (0x0003b2e3) list_single_number_pane_t1_cp2

0xa931,	// (0x0003b2f9) list_single_number_pane_t2_cp2_ParamLimits

0xa931,	// (0x0003b2f9) list_single_number_pane_t2_cp2

0x2d0e,	// (0x000336d6) list_double2_pane_g1_cp2_ParamLimits

0x2d0e,	// (0x000336d6) list_double2_pane_g1_cp2

0x2d1f,	// (0x000336e7) list_double2_pane_g2_cp2

0x73c3,	// (0x00037d8b) list_double2_pane_t1_cp2_ParamLimits

0x73c3,	// (0x00037d8b) list_double2_pane_t1_cp2

0x73d9,	// (0x00037da1) list_double2_pane_t2_cp2_ParamLimits

0x73d9,	// (0x00037da1) list_double2_pane_t2_cp2

0x73eb,	// (0x00037db3) list_double_pane_g1_cp2_ParamLimits

0x73eb,	// (0x00037db3) list_double_pane_g1_cp2

0x73f7,	// (0x00037dbf) list_double_pane_g2_cp2

0x73ff,	// (0x00037dc7) list_double_pane_t1_cp2_ParamLimits

0x73ff,	// (0x00037dc7) list_double_pane_t1_cp2

0x7415,	// (0x00037ddd) list_double_pane_t2_cp2_ParamLimits

0x7415,	// (0x00037ddd) list_double_pane_t2_cp2

0x743f,	// (0x00037e07) list_single_pane_cp2_g3

0x744f,	// (0x00037e17) list_single_pane_g1_cp2_ParamLimits

0x744f,	// (0x00037e17) list_single_pane_g1_cp2

0x745b,	// (0x00037e23) list_single_pane_g2_cp2

0x7463,	// (0x00037e2b) list_single_pane_t1_cp2_ParamLimits

0x7463,	// (0x00037e2b) list_single_pane_t1_cp2

0x747b,	// (0x00037e43) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x747b,	// (0x00037e43) list_single_large_graphic_pane_g1_cp2

0x7487,	// (0x00037e4f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7487,	// (0x00037e4f) list_single_large_graphic_pane_g2_cp2

0x7493,	// (0x00037e5b) list_single_large_graphic_pane_g3_cp2

0x749b,	// (0x00037e63) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x749b,	// (0x00037e63) list_single_large_graphic_pane_g4_cp1

0x74b5,	// (0x00037e7d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x74b5,	// (0x00037e7d) list_single_large_graphic_pane_t1_cp2

0xa8e7,	// (0x0003b2af) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8e7,	// (0x0003b2af) list_single_graphic_heading_pane_g1_cp2

0xa8b4,	// (0x0003b27c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8b4,	// (0x0003b27c) list_single_graphic_heading_pane_g4_cp2

0x745b,	// (0x00037e23) list_single_graphic_heading_pane_g5_cp2

0xa8f3,	// (0x0003b2bb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8f3,	// (0x0003b2bb) list_single_graphic_heading_pane_t1_cp2

0xa909,	// (0x0003b2d1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa909,	// (0x0003b2d1) list_single_graphic_heading_pane_t2_cp2

0xa8a8,	// (0x0003b270) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8a8,	// (0x0003b270) list_single_2graphic_pane_g1_cp2

0xa8b4,	// (0x0003b27c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8b4,	// (0x0003b27c) list_single_2graphic_pane_g2_cp2

0x745b,	// (0x00037e23) list_single_2graphic_pane_g3_cp2

0xa8c5,	// (0x0003b28d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8c5,	// (0x0003b28d) list_single_2graphic_pane_g4_cp2

0xa8d1,	// (0x0003b299) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8d1,	// (0x0003b299) list_single_2graphic_pane_t1_cp2

0x22ba,	// (0x00032c82) list_highlight_pane_g10_cp1

0xa490,	// (0x0003ae58) list_highlight_pane_g1_cp1

0xa498,	// (0x0003ae60) list_highlight_pane_g2_cp1

0xa4a0,	// (0x0003ae68) list_highlight_pane_g3_cp1

0xa4a8,	// (0x0003ae70) list_highlight_pane_g4_cp1

0xa4b0,	// (0x0003ae78) list_highlight_pane_g5_cp1

0xa4b8,	// (0x0003ae80) list_highlight_pane_g6_cp1

0xa4c0,	// (0x0003ae88) list_highlight_pane_g7_cp1

0xa4c8,	// (0x0003ae90) list_highlight_pane_g8_cp1

0xa4d0,	// (0x0003ae98) list_highlight_pane_g9_cp1

0xa3b8,	// (0x0003ad80) form_field_slider_pane_t3

0xa3c6,	// (0x0003ad8e) form_field_slider_pane_t4

0xa3d4,	// (0x0003ad9c) slider_form_pane_ParamLimits

0xa3d4,	// (0x0003ad9c) slider_form_pane

0x22c4,	// (0x00032c8c) control_abbreviations

0x22c4,	// (0x00032c8c) control_conventions

0x22c4,	// (0x00032c8c) control_definitions

0x22c4,	// (0x00032c8c) format_table_attribute

0xab9a,	// (0x0003b562) bg_popup_preview_window_pane_g9

0x22c4,	// (0x00032c8c) format_table_data2

0x22c4,	// (0x00032c8c) format_table_data3

0x22c4,	// (0x00032c8c) format_table_data_example

0x0008,

0x22c4,	// (0x00032c8c) intro_purpose

0xf8e0,	// (0x000402a8) bg_popup_preview_window_pane_g

0x22c4,	// (0x00032c8c) texts_category

0x22c4,	// (0x00032c8c) texts_graphics

0x74cb,	// (0x00037e93) text_digital

0x74da,	// (0x00037ea2) text_primary

0x74e9,	// (0x00037eb1) text_primary_small

0x74f8,	// (0x00037ec0) text_secondary

0x7507,	// (0x00037ecf) text_title

0xb2c7,	// (0x0003bc8f) bg_passive_tab_pane_g1_cp3_srt

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp3_srt

0xb2d0,	// (0x0003bc98) bg_passive_tab_pane_g3_cp3_srt

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp3_srt_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp3_srt

0xb2d9,	// (0x0003bca1) tabs_4_active_pane_srt_g1

0xb2e1,	// (0x0003bca9) tabs_4_active_pane_srt_t1_ParamLimits

0xb2e1,	// (0x0003bca9) tabs_4_active_pane_srt_t1

0xb2c7,	// (0x0003bc8f) bg_active_tab_pane_g1_cp3_copy1

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp3_copy1

0xb2d0,	// (0x0003bc98) bg_active_tab_pane_g3_cp3_copy1

0x2320,	// (0x00032ce8) tabs_2_long_active_pane_srt_ParamLimits

0x2320,	// (0x00032ce8) tabs_2_long_active_pane_srt

0x2320,	// (0x00032ce8) tabs_2_long_passive_pane_srt_ParamLimits

0x2320,	// (0x00032ce8) tabs_2_long_passive_pane_srt

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp4_srt

0xafbb,	// (0x0003b983) bg_passive_tab_pane_g1_cp4_srt

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp4_srt

0xafc4,	// (0x0003b98c) bg_passive_tab_pane_g3_cp4_srt

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp4_srt

0xafcd,	// (0x0003b995) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafcd,	// (0x0003b995) tabs_2_long_active_pane_srt_t1

0xafbb,	// (0x0003b983) bg_active_tab_pane_g1_cp4_srt

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp4_srt

0xafc4,	// (0x0003b98c) bg_active_tab_pane_g3_cp4_srt

0x2312,	// (0x00032cda) tabs_3_long_active_pane_srt_ParamLimits

0x2312,	// (0x00032cda) tabs_3_long_active_pane_srt

0x2312,	// (0x00032cda) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2312,	// (0x00032cda) tabs_3_long_passive_pane_cp_srt

0x2312,	// (0x00032cda) tabs_3_long_passive_pane_srt_ParamLimits

0x2312,	// (0x00032cda) tabs_3_long_passive_pane_srt

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp5_srt

0x7260,	// (0x00037c28) bg_passive_tab_pane_g1_cp5_srt

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp5_srt

0x7269,	// (0x00037c31) bg_passive_tab_pane_g3_cp5_srt

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp5_srt

0xafa9,	// (0x0003b971) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x0003b971) tabs_3_long_active_pane_srt_t1

0x7260,	// (0x00037c28) bg_active_tab_pane_g1_cp5_srt

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp5_srt

0x7269,	// (0x00037c31) bg_active_tab_pane_g3_cp5_srt

0xaf9b,	// (0x0003b963) navi_text_pane_srt_t1

0xaf93,	// (0x0003b95b) navi_icon_pane_srt_g1

0x7781,	// (0x00038149) midp_editing_number_pane_srt

0x7516,	// (0x00037ede) midp_ticker_pane_srt

0x7789,	// (0x00038151) midp_ticker_pane_srt_g1

0x7791,	// (0x00038159) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x00040130) midp_ticker_pane_srt_g

0x7799,	// (0x00038161) midp_ticker_pane_srt_t1

0xaf84,	// (0x0003b94c) midp_editing_number_pane_t1_copy1

0x751e,	// (0x00037ee6) listscroll_midp_pane

0x751e,	// (0x00037ee6) midp_form_pane

0x7590,	// (0x00037f58) midp_info_popup_window_ParamLimits

0x7590,	// (0x00037f58) midp_info_popup_window

0x277b,	// (0x00033143) bg_popup_sub_pane_cp50_ParamLimits

0x277b,	// (0x00033143) bg_popup_sub_pane_cp50

0xa0cc,	// (0x0003aa94) listscroll_midp_info_pane_ParamLimits

0xa0cc,	// (0x0003aa94) listscroll_midp_info_pane

0xa0ac,	// (0x0003aa74) listscroll_form_midp_pane_ParamLimits

0xa0ac,	// (0x0003aa74) listscroll_form_midp_pane

0xa0b8,	// (0x0003aa80) scroll_bar_cp050

0xa08c,	// (0x0003aa54) list_midp_pane

0xbcfe,	// (0x0003c6c6) signal_pane_g2_cp

0x9fc6,	// (0x0003a98e) listscroll_midp_info_pane_t1_ParamLimits

0x9fc6,	// (0x0003a98e) listscroll_midp_info_pane_t1

0x9fde,	// (0x0003a9a6) listscroll_midp_info_pane_t2_ParamLimits

0x9fde,	// (0x0003a9a6) listscroll_midp_info_pane_t2

0xa01c,	// (0x0003a9e4) listscroll_midp_info_pane_t3_ParamLimits

0xa01c,	// (0x0003a9e4) listscroll_midp_info_pane_t3

0xa056,	// (0x0003aa1e) listscroll_midp_info_pane_t4_ParamLimits

0xa056,	// (0x0003aa1e) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x000401e3) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x000401e3) listscroll_midp_info_pane_t

0x27f1,	// (0x000331b9) scroll_pane_cp21

0x9f66,	// (0x0003a92e) form_midp_field_choice_group_pane

0x9f6f,	// (0x0003a937) form_midp_field_text_pane

0x9fac,	// (0x0003a974) form_midp_field_time_pane

0x9fb4,	// (0x0003a97c) form_midp_gauge_slider_pane

0x9fbd,	// (0x0003a985) form_midp_gauge_wait_pane

0x22c4,	// (0x00032c8c) form_midp_image_pane

0x80f3,	// (0x00038abb) list_single_midp_pane_ParamLimits

0x80f3,	// (0x00038abb) list_single_midp_pane

0x9f1b,	// (0x0003a8e3) form_midp_field_text_pane_t1

0x9ce5,	// (0x0003a6ad) input_focus_pane_cp050

0x9f55,	// (0x0003a91d) list_midp_form_text_pane

0x9eea,	// (0x0003a8b2) form_midp_field_choice_group_pane_t1

0x9ef8,	// (0x0003a8c0) input_focus_pane_cp051

0x9f0c,	// (0x0003a8d4) list_midp_choice_pane

0x22c4,	// (0x00032c8c) status_idle_pane

0x9ece,	// (0x0003a896) form_midp_field_time_pane_t1

0x22ba,	// (0x00032c82) wait_anim_pane_g2_copy1

0x9edc,	// (0x0003a8a4) form_midp_field_time_pane_t2

0x0001,

0x7640,	// (0x00038008) aid_navinavi_width_2_pane

0xf816,	// (0x000401de) form_midp_field_time_pane_t

0x22c4,	// (0x00032c8c) input_focus_pane_cp052

0x22c4,	// (0x00032c8c) bg_input_focus_pane_cp040

0x9e8e,	// (0x0003a856) form_midp_gauge_slider_pane_t1

0x9e9c,	// (0x0003a864) form_midp_gauge_slider_pane_t2

0x9eaa,	// (0x0003a872) form_midp_gauge_slider_pane_t3

0x9eb8,	// (0x0003a880) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x000401d5) form_midp_gauge_slider_pane_t

0x9ec6,	// (0x0003a88e) form_midp_slider_pane

0x2320,	// (0x00032ce8) bg_input_focus_pane_cp041_ParamLimits

0x2320,	// (0x00032ce8) bg_input_focus_pane_cp041

0x9e5b,	// (0x0003a823) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e5b,	// (0x0003a823) form_midp_gauge_wait_pane_t1

0x9e6d,	// (0x0003a835) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e6d,	// (0x0003a835) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x000401d0) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x000401d0) form_midp_gauge_wait_pane_t

0x9e7f,	// (0x0003a847) form_midp_wait_pane_ParamLimits

0x9e7f,	// (0x0003a847) form_midp_wait_pane

0x9e25,	// (0x0003a7ed) form_midp_image_pane_g1

0x9e2e,	// (0x0003a7f6) form_midp_image_pane_t1

0x9e3d,	// (0x0003a805) form_midp_image_pane_t2

0x9e4c,	// (0x0003a814) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x000401c9) form_midp_image_pane_t

0x9e1c,	// (0x0003a7e4) list_single_midp_pane_g1

0x4851,	// (0x00035219) list_single_midp_pane_t1

0x9df3,	// (0x0003a7bb) list_midp_form_item_pane_ParamLimits

0x9df3,	// (0x0003a7bb) list_midp_form_item_pane

0x75e8,	// (0x00037fb0) list_midp_form_item_pane_t1

0x75f7,	// (0x00037fbf) midp_ticker_pane_g1

0x7603,	// (0x00037fcb) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x00040116) midp_ticker_pane_g

0x760f,	// (0x00037fd7) midp_ticker_pane_t1

0xb1d1,	// (0x0003bb99) midp_editing_number_pane_t1

0xb1af,	// (0x0003bb77) midp_editing_number_pane

0xb1be,	// (0x0003bb86) midp_ticker_pane

0xaf74,	// (0x0003b93c) ai_message_heading_pane

0x22c4,	// (0x00032c8c) bg_popup_window_pane_cp14

0xaf7c,	// (0x0003b944) listscroll_ai_message_pane

0xaefe,	// (0x0003b8c6) ai_message_heading_pane_g1_ParamLimits

0xaefe,	// (0x0003b8c6) ai_message_heading_pane_g1

0xaf0a,	// (0x0003b8d2) ai_message_heading_pane_g2_ParamLimits

0xaf0a,	// (0x0003b8d2) ai_message_heading_pane_g2

0xaf16,	// (0x0003b8de) ai_message_heading_pane_g3_ParamLimits

0xaf16,	// (0x0003b8de) ai_message_heading_pane_g3

0xaf22,	// (0x0003b8ea) ai_message_heading_pane_g4_ParamLimits

0xaf22,	// (0x0003b8ea) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0004030a) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0004030a) ai_message_heading_pane_g

0xaf2e,	// (0x0003b8f6) ai_message_heading_pane_t1_ParamLimits

0xaf2e,	// (0x0003b8f6) ai_message_heading_pane_t1

0xaf48,	// (0x0003b910) ai_message_heading_pane_t2_ParamLimits

0xaf48,	// (0x0003b910) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x00040313) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x00040313) ai_message_heading_pane_t

0xaf5a,	// (0x0003b922) bg_popup_heading_pane_cp1_ParamLimits

0xaf5a,	// (0x0003b922) bg_popup_heading_pane_cp1

0xaeec,	// (0x0003b8b4) list_ai_message_pane_ParamLimits

0xaeec,	// (0x0003b8b4) list_ai_message_pane

0x27f1,	// (0x000331b9) scroll_pane_cp10

0xae88,	// (0x0003b850) list_ai_message_pane_g1

0xae90,	// (0x0003b858) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x000402e7) list_ai_message_pane_g

0xae98,	// (0x0003b860) list_ai_message_pane_t1_ParamLimits

0xae98,	// (0x0003b860) list_ai_message_pane_t1

0xaead,	// (0x0003b875) list_ai_message_pane_t2_ParamLimits

0xaead,	// (0x0003b875) list_ai_message_pane_t2

0xaec2,	// (0x0003b88a) list_ai_message_pane_t3_ParamLimits

0xaec2,	// (0x0003b88a) list_ai_message_pane_t3

0xaed7,	// (0x0003b89f) list_ai_message_pane_t4_ParamLimits

0xaed7,	// (0x0003b89f) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x000402ec) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x000402ec) list_ai_message_pane_t

0xae73,	// (0x0003b83b) cell_ai_soft_ind_pane_ParamLimits

0xae73,	// (0x0003b83b) cell_ai_soft_ind_pane

0x7621,	// (0x00037fe9) cell_ai_soft_ind_pane_g1_ParamLimits

0x7621,	// (0x00037fe9) cell_ai_soft_ind_pane_g1

0x22c4,	// (0x00032c8c) grid_highlight_cp1

0x762e,	// (0x00037ff6) text_secondary_cp56_ParamLimits

0x762e,	// (0x00037ff6) text_secondary_cp56

0xae48,	// (0x0003b810) example_general_pane_ParamLimits

0xae48,	// (0x0003b810) example_general_pane

0xae54,	// (0x0003b81c) example_parent_pane_g1_ParamLimits

0xae54,	// (0x0003b81c) example_parent_pane_g1

0xae60,	// (0x0003b828) example_parent_pane_t1_ParamLimits

0xae60,	// (0x0003b828) example_parent_pane_t1

0x7d87,	// (0x0003874f) popup_preview_text_window_ParamLimits

0x7d87,	// (0x0003874f) popup_preview_text_window

0x7447,	// (0x00037e0f) list_single_pane_cp2_g4

0x24f2,	// (0x00032eba) bg_popup_preview_window_pane_ParamLimits

0x24f2,	// (0x00032eba) bg_popup_preview_window_pane

0xaba2,	// (0x0003b56a) popup_preview_text_window_t1_ParamLimits

0xaba2,	// (0x0003b56a) popup_preview_text_window_t1

0xabc0,	// (0x0003b588) popup_preview_text_window_t2_ParamLimits

0xabc0,	// (0x0003b588) popup_preview_text_window_t2

0xac09,	// (0x0003b5d1) popup_preview_text_window_t3_ParamLimits

0xac09,	// (0x0003b5d1) popup_preview_text_window_t3

0xac4e,	// (0x0003b616) popup_preview_text_window_t4_ParamLimits

0xac4e,	// (0x0003b616) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x000402bb) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x000402bb) popup_preview_text_window_t

0xaccc,	// (0x0003b694) scroll_pane_cp11

0x9c71,	// (0x0003a639) bg_popup_preview_window_pane_g1

0xab62,	// (0x0003b52a) bg_popup_preview_window_pane_g2

0xab6a,	// (0x0003b532) bg_popup_preview_window_pane_g3

0xab72,	// (0x0003b53a) bg_popup_preview_window_pane_g4

0xab7a,	// (0x0003b542) bg_popup_preview_window_pane_g5

0xab82,	// (0x0003b54a) bg_popup_preview_window_pane_g6

0xab8a,	// (0x0003b552) bg_popup_preview_window_pane_g7

0xab92,	// (0x0003b55a) bg_popup_preview_window_pane_g8

0x5b4d,	// (0x00036515) aid_popup_width_pane

0x7d65,	// (0x0003872d) popup_midp_note_alarm_window_ParamLimits

0x7d65,	// (0x0003872d) popup_midp_note_alarm_window

0x26c6,	// (0x0003308e) data_form_pane_ParamLimits

0x6960,	// (0x00037328) form_field_data_pane_g1

0x696a,	// (0x00037332) form_field_data_pane_t1_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_ParamLimits

0x6982,	// (0x0003734a) data_form_wide_pane_ParamLimits

0x6993,	// (0x0003735b) form_field_data_wide_pane_g1

0x699f,	// (0x00037367) form_field_data_wide_pane_t1_ParamLimits

0x25c6,	// (0x00032f8e) input_focus_pane_cp6_ParamLimits

0x6b42,	// (0x0003750a) input_popup_find_pane_g1_ParamLimits

0x6b42,	// (0x0003750a) input_popup_find_pane_g1

0x6cd4,	// (0x0003769c) aid_navi_side_left_pane

0x6ce9,	// (0x000376b1) aid_navi_side_right_pane

0xa58b,	// (0x0003af53) bg_popup_window_pane_cp30_ParamLimits

0xa58b,	// (0x0003af53) bg_popup_window_pane_cp30

0xa605,	// (0x0003afcd) popup_midp_note_alarm_window_g1_ParamLimits

0xa605,	// (0x0003afcd) popup_midp_note_alarm_window_g1

0xa635,	// (0x0003affd) popup_midp_note_alarm_window_t1_ParamLimits

0xa635,	// (0x0003affd) popup_midp_note_alarm_window_t1

0xa6d6,	// (0x0003b09e) popup_midp_note_alarm_window_t2_ParamLimits

0xa6d6,	// (0x0003b09e) popup_midp_note_alarm_window_t2

0xa784,	// (0x0003b14c) popup_midp_note_alarm_window_t3_ParamLimits

0xa784,	// (0x0003b14c) popup_midp_note_alarm_window_t3

0xa7ac,	// (0x0003b174) popup_midp_note_alarm_window_t4_ParamLimits

0xa7ac,	// (0x0003b174) popup_midp_note_alarm_window_t4

0xa7cc,	// (0x0003b194) popup_midp_note_alarm_window_t5_ParamLimits

0xa7cc,	// (0x0003b194) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x00040258) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x00040258) popup_midp_note_alarm_window_t

0xa878,	// (0x0003b240) wait_bar_pane_cp1_ParamLimits

0xa878,	// (0x0003b240) wait_bar_pane_cp1

0x22c4,	// (0x00032c8c) wait_anim_pane_copy1

0x22c4,	// (0x00032c8c) wait_border_pane_copy1

0xa281,	// (0x0003ac49) wait_border_pane_g1_copy1

0x69b9,	// (0x00037381) form_field_popup_pane_g1

0x69c1,	// (0x00037389) form_field_popup_pane_t1_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_cp7_ParamLimits

0x2700,	// (0x000330c8) list_form_pane_ParamLimits

0x69d9,	// (0x000373a1) form_field_popup_wide_pane_g1

0x69e1,	// (0x000373a9) form_field_popup_wide_pane_t1_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_cp8_ParamLimits

0x270c,	// (0x000330d4) list_form_wide_pane_ParamLimits

0xb35b,	// (0x0003bd23) aid_size_cell_graphic_pane

0x6a6b,	// (0x00037433) data_form_pane_t1_ParamLimits

0x836a,	// (0x00038d32) data_form_wide_pane_t1_ParamLimits

0x983b,	// (0x0003a203) bg_status_flat_pane

0x5f56,	// (0x0003691e) title_pane_t1_ParamLimits

0x22da,	// (0x00032ca2) title_pane_t2_ParamLimits

0x2300,	// (0x00032cc8) title_pane_t3_ParamLimits

0xf557,	// (0x0003ff1f) title_pane_t_ParamLimits

0x2a9a,	// (0x00033462) level_1_signal_ParamLimits

0x2aa7,	// (0x0003346f) level_2_signal_ParamLimits

0x2ab4,	// (0x0003347c) level_3_signal_ParamLimits

0x2ac1,	// (0x00033489) level_4_signal_ParamLimits

0x2ace,	// (0x00033496) level_5_signal_ParamLimits

0x2adb,	// (0x000334a3) level_6_signal_ParamLimits

0x2ae8,	// (0x000334b0) level_7_signal_ParamLimits

0x2a9a,	// (0x00033462) level_1_battery_ParamLimits

0x2aa7,	// (0x0003346f) level_2_battery_ParamLimits

0x2ab4,	// (0x0003347c) level_3_battery_ParamLimits

0x2ac1,	// (0x00033489) level_4_battery_ParamLimits

0x2ace,	// (0x00033496) level_5_battery_ParamLimits

0x2adb,	// (0x000334a3) level_6_battery_ParamLimits

0x2ae8,	// (0x000334b0) level_7_battery_ParamLimits

0xa490,	// (0x0003ae58) bg_status_flat_pane_g1

0xa498,	// (0x0003ae60) bg_status_flat_pane_g2

0xa4a0,	// (0x0003ae68) bg_status_flat_pane_g3

0xa4a8,	// (0x0003ae70) bg_status_flat_pane_g4

0xa4b0,	// (0x0003ae78) bg_status_flat_pane_g5

0xa4b8,	// (0x0003ae80) bg_status_flat_pane_g6

0xa4c0,	// (0x0003ae88) bg_status_flat_pane_g7

0x5fc6,	// (0x0003698e) tabs_3_active_pane_t1_ParamLimits

0x5fc6,	// (0x0003698e) tabs_3_passive_pane_t1_ParamLimits

0x5fe0,	// (0x000369a8) tabs_4_active_pane_t1_ParamLimits

0x5fe0,	// (0x000369a8) tabs_4_1_passive_pane_t1_ParamLimits

0x6b79,	// (0x00037541) tabs_2_active_pane_t1_ParamLimits

0x6b79,	// (0x00037541) tabs_2_passive_pane_t1_ParamLimits

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp4_ParamLimits

0x6b8b,	// (0x00037553) tabs_2_long_active_pane_t1_ParamLimits

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp4_ParamLimits

0x8040,	// (0x00038a08) list_single_midp_graphic_pane_t1_ParamLimits

0x2d5b,	// (0x00033723) bg_active_tab_pane_cp5_ParamLimits

0x6baa,	// (0x00037572) tabs_3_long_active_pane_t1_ParamLimits

0x6b9e,	// (0x00037566) bg_passive_tab_pane_cp5_ParamLimits

0x8040,	// (0x00038a08) list_single_midp_graphic_pane_t1

0x983b,	// (0x0003a203) bg_status_flat_pane_ParamLimits

0x9904,	// (0x0003a2cc) indicator_pane_cp2_ParamLimits

0x9904,	// (0x0003a2cc) indicator_pane_cp2

0x9a2f,	// (0x0003a3f7) navi_pane_srt_ParamLimits

0x9a2f,	// (0x0003a3f7) navi_pane_srt

0x9a53,	// (0x0003a41b) popup_clock_digital_analogue_window_cp1

0x2364,	// (0x00032d2c) indicator_pane_t1

0x7516,	// (0x00037ede) copy_highlight_pane

0x7516,	// (0x00037ede) cursor_graphics_pane

0x7516,	// (0x00037ede) graphic_within_text_pane

0x7516,	// (0x00037ede) link_highlight_pane

0xac8f,	// (0x0003b657) popup_preview_text_window_t5_ParamLimits

0xac8f,	// (0x0003b657) popup_preview_text_window_t5

0x7648,	// (0x00038010) cursor_digital_pane

0x7648,	// (0x00038010) cursor_primary_pane

0x7659,	// (0x00038021) cursor_primary_small_pane

0x7661,	// (0x00038029) cursor_secondary_pane

0x7669,	// (0x00038031) cursor_title_pane

0x7648,	// (0x00038010) link_highlight_digital_pane

0x7650,	// (0x00038018) link_highlight_primary_pane

0x7659,	// (0x00038021) link_highlight_primary_small_pane

0x7661,	// (0x00038029) link_highlight_secondary_pane

0x7669,	// (0x00038031) link_highlight_title_pane

0x7648,	// (0x00038010) copy_highlight_digital_pane

0x7648,	// (0x00038010) copy_highlight_primary_pane

0x7659,	// (0x00038021) copy_highlight_primary_small_pane

0x7661,	// (0x00038029) copy_highlight_secondary_pane

0x7669,	// (0x00038031) copy_highlight_title_pane

0x7661,	// (0x00038029) graphic_text_digital_pane

0xa52e,	// (0x0003aef6) graphic_text_primary_pane

0xa537,	// (0x0003aeff) graphic_text_primary_small_pane

0x7659,	// (0x00038021) graphic_text_secondary_pane

0x7648,	// (0x00038010) graphic_text_title_pane

0x7671,	// (0x00038039) cursor_primary_pane_g1

0xa520,	// (0x0003aee8) cursor_text_primary_t1

0xa508,	// (0x0003aed0) cursor_primary_small_pane_g1

0xa512,	// (0x0003aeda) cursor_text_primary_small_t1

0xa4f0,	// (0x0003aeb8) cursor_primary_small_pane_g1_copy1

0xa4fa,	// (0x0003aec2) cursor_text_primary_small_t1_copy1

0xa4d8,	// (0x0003aea0) cursor_text_title_t1

0xa4e6,	// (0x0003aeae) cursor_title_pane_g1

0x7671,	// (0x00038039) cursor_digital_pane_g1

0x767b,	// (0x00038043) cursor_text_digital_t1

0x7689,	// (0x00038051) link_highlight_primary_pane_g1

0xa481,	// (0x0003ae49) link_highlight_primary_pane_t1

0x7689,	// (0x00038051) link_highlight_primary_small_pane_g1

0x7691,	// (0x00038059) link_highlight_primary_small_pane_t1

0x7689,	// (0x00038051) link_highlight_secondary_pane_g1

0x76a0,	// (0x00038068) link_highlight_secondary_pane_t1

0xa3e6,	// (0x0003adae) link_highlight_title_pane_g1

0xa3fd,	// (0x0003adc5) link_highlight_title_pane_t1

0xa3e6,	// (0x0003adae) link_highlight_digital_pane_g1

0xa3ee,	// (0x0003adb6) link_highlight_digital_pane_t1

0xa2a0,	// (0x0003ac68) copy_highlight_primary_pane_g1

0xa2c6,	// (0x0003ac8e) copy_highlight_primary_pane_t1

0xa2a0,	// (0x0003ac68) copy_highlight_primary_small_pane_g1

0xa2b7,	// (0x0003ac7f) copy_highlight_primary_small_pane_t1

0x76af,	// (0x00038077) copy_highlight_secondary_pane_g1

0x76b7,	// (0x0003807f) copy_highlight_secondary_pane_t1

0xa2a0,	// (0x0003ac68) copy_highlight_title_pane_g1

0xa2a8,	// (0x0003ac70) copy_highlight_title_pane_t1

0xa2a0,	// (0x0003ac68) copy_highlight_digital_pane_g1

0xb529,	// (0x0003bef1) copy_highlight_digital_pane_t1

0xb47d,	// (0x0003be45) graphic_text_primary_pane_g1

0xb50d,	// (0x0003bed5) graphic_text_primary_pane_t1

0xb51b,	// (0x0003bee3) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x00040387) graphic_text_primary_pane_t

0xb4e9,	// (0x0003beb1) graphic_text_primary_small_pane_g1

0xb4f1,	// (0x0003beb9) graphic_text_primary_small_pane_t1

0xb4ff,	// (0x0003bec7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x00040382) graphic_text_primary_small_pane_t

0xb4c5,	// (0x0003be8d) graphic_text_secondary_pane_g1

0xb4cd,	// (0x0003be95) graphic_text_secondary_pane_t1

0xb4db,	// (0x0003bea3) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0004037d) graphic_text_secondary_pane_t

0xb4a1,	// (0x0003be69) graphic_text_title_pane_g1

0xb4a9,	// (0x0003be71) graphic_text_title_pane_t1

0xb4b7,	// (0x0003be7f) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x00040378) graphic_text_title_pane_t

0xb47d,	// (0x0003be45) graphic_text_digital_pane_g1

0xb485,	// (0x0003be4d) graphic_text_digital_pane_t1

0xb493,	// (0x0003be5b) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x00040373) graphic_text_digital_pane_t

0x2320,	// (0x00032ce8) navi_icon_pane_srt_ParamLimits

0x2320,	// (0x00032ce8) navi_icon_pane_srt

0x22c4,	// (0x00032c8c) navi_midp_pane_srt

0x22c4,	// (0x00032c8c) navi_navi_pane_srt

0x2320,	// (0x00032ce8) navi_text_pane_srt_ParamLimits

0x2320,	// (0x00032ce8) navi_text_pane_srt

0xb448,	// (0x0003be10) navi_navi_icon_text_pane_srt

0xb450,	// (0x0003be18) navi_navi_pane_srt_g1_ParamLimits

0xb450,	// (0x0003be18) navi_navi_pane_srt_g1

0xb462,	// (0x0003be2a) navi_navi_pane_srt_g2_ParamLimits

0xb462,	// (0x0003be2a) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0004036e) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0004036e) navi_navi_pane_srt_g

0xb474,	// (0x0003be3c) navi_navi_tabs_pane_srt

0xb448,	// (0x0003be10) navi_navi_text_pane_srt

0xb448,	// (0x0003be10) navi_navi_volume_pane_srt

0xb439,	// (0x0003be01) navi_navi_text_pane_srt_t1

0x850d,	// (0x00038ed5) navi_navi_volume_pane_srt_g1

0x8515,	// (0x00038edd) volume_small_pane_srt_ParamLimits

0x8515,	// (0x00038edd) volume_small_pane_srt

0x76c6,	// (0x0003808e) volume_small_pane_srt_g1_ParamLimits

0x76c6,	// (0x0003808e) volume_small_pane_srt_g1

0x76d6,	// (0x0003809e) volume_small_pane_srt_g2_ParamLimits

0x76d6,	// (0x0003809e) volume_small_pane_srt_g2

0x76e7,	// (0x000380af) volume_small_pane_srt_g3_ParamLimits

0x76e7,	// (0x000380af) volume_small_pane_srt_g3

0x76f8,	// (0x000380c0) volume_small_pane_srt_g4_ParamLimits

0x76f8,	// (0x000380c0) volume_small_pane_srt_g4

0x7709,	// (0x000380d1) volume_small_pane_srt_g5_ParamLimits

0x7709,	// (0x000380d1) volume_small_pane_srt_g5

0x771a,	// (0x000380e2) volume_small_pane_srt_g6_ParamLimits

0x771a,	// (0x000380e2) volume_small_pane_srt_g6

0x772b,	// (0x000380f3) volume_small_pane_srt_g7_ParamLimits

0x772b,	// (0x000380f3) volume_small_pane_srt_g7

0x773c,	// (0x00038104) volume_small_pane_srt_g8_ParamLimits

0x773c,	// (0x00038104) volume_small_pane_srt_g8

0x774d,	// (0x00038115) volume_small_pane_srt_g9_ParamLimits

0x774d,	// (0x00038115) volume_small_pane_srt_g9

0x775e,	// (0x00038126) volume_small_pane_srt_g10_ParamLimits

0x775e,	// (0x00038126) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0004011b) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0004011b) volume_small_pane_srt_g

0x622d,	// (0x00036bf5) query_popup_data_pane_cp2

0xb41f,	// (0x0003bde7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb41f,	// (0x0003bde7) navi_navi_icon_text_pane_srt_t1

0xa52e,	// (0x0003aef6) navi_tabs_2_long_pane_srt

0xa52e,	// (0x0003aef6) navi_tabs_2_pane_srt

0xa52e,	// (0x0003aef6) navi_tabs_3_long_pane_srt

0xa52e,	// (0x0003aef6) navi_tabs_3_pane_srt

0xa52e,	// (0x0003aef6) navi_tabs_4_pane_srt

0x84ed,	// (0x00038eb5) tabs_2_active_pane_srt_ParamLimits

0x84ed,	// (0x00038eb5) tabs_2_active_pane_srt

0x84fd,	// (0x00038ec5) tabs_2_passive_pane_srt_ParamLimits

0x84fd,	// (0x00038ec5) tabs_2_passive_pane_srt

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp1_srt_ParamLimits

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp1_srt

0xb3eb,	// (0x0003bdb3) bg_passive_tab_pane_g1_cp1_srt

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0003bdbc) bg_passive_tab_pane_g3_cp1_srt

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp1_srt_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp1_srt

0xb3fd,	// (0x0003bdc5) tabs_2_active_pane_srt_g1

0xb405,	// (0x0003bdcd) tabs_2_active_pane_srt_t1_ParamLimits

0xb405,	// (0x0003bdcd) tabs_2_active_pane_srt_t1

0xb3eb,	// (0x0003bdb3) bg_active_tab_pane_g1_cp1_srt

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0003bdbc) bg_active_tab_pane_g3_cp1_srt

0x84ba,	// (0x00038e82) tabs_3_active_pane_srt_ParamLimits

0x84ba,	// (0x00038e82) tabs_3_active_pane_srt

0x84cb,	// (0x00038e93) tabs_3_passive_pane_cp_srt_ParamLimits

0x84cb,	// (0x00038e93) tabs_3_passive_pane_cp_srt

0x84dc,	// (0x00038ea4) tabs_3_passive_pane_srt_ParamLimits

0x84dc,	// (0x00038ea4) tabs_3_passive_pane_srt

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp2_srt_ParamLimits

0x974a,	// (0x0003a112) bg_passive_tab_pane_cp2_srt

0x776f,	// (0x00038137) bg_passive_tab_pane_g1_cp2_srt

0x70d3,	// (0x00037a9b) bg_passive_tab_pane_g2_cp2_srt

0x7778,	// (0x00038140) bg_passive_tab_pane_g3_cp2_srt

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp2_srt_ParamLimits

0x2320,	// (0x00032ce8) bg_active_tab_pane_cp2_srt

0xb3d1,	// (0x0003bd99) tabs_3_active_pane_srt_g1

0xb3d9,	// (0x0003bda1) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d9,	// (0x0003bda1) tabs_3_active_pane_srt_t1

0x776f,	// (0x00038137) bg_active_tab_pane_g1_cp2_srt

0x70d3,	// (0x00037a9b) bg_active_tab_pane_g2_cp2_srt

0x7778,	// (0x00038140) bg_active_tab_pane_g3_cp2_srt

0x8472,	// (0x00038e3a) tabs_4_active_pane_srt_ParamLimits

0x8472,	// (0x00038e3a) tabs_4_active_pane_srt

0x8484,	// (0x00038e4c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8484,	// (0x00038e4c) tabs_4_passive_pane_cp2_srt

0x79ee,	// (0x000383b6) aid_size_cell_toolbar

0x6b9e,	// (0x00037566) main_idle_act_pane_ParamLimits

0x7b97,	// (0x0003855f) popup_large_graphic_colour_window_ParamLimits

0x7f02,	// (0x000388ca) popup_toolbar_window_ParamLimits

0x7f02,	// (0x000388ca) popup_toolbar_window

0x4860,	// (0x00035228) list_single_graphic_2heading_pane_ParamLimits

0x4860,	// (0x00035228) list_single_graphic_2heading_pane

0x2982,	// (0x0003334a) aid_size_cell_apps_grid_lsc_pane

0x2994,	// (0x0003335c) aid_size_cell_apps_grid_prt_pane

0x974a,	// (0x0003a112) bg_wml_button_pane_cp1_ParamLimits

0x974a,	// (0x0003a112) bg_wml_button_pane_cp1

0x9f1b,	// (0x0003a8e3) form_midp_field_text_pane_t1_ParamLimits

0x9ce5,	// (0x0003a6ad) input_focus_pane_cp050_ParamLimits

0x9f55,	// (0x0003a91d) list_midp_form_text_pane_ParamLimits

0x9ef8,	// (0x0003a8c0) input_focus_pane_cp051_ParamLimits

0x9f0c,	// (0x0003a8d4) list_midp_choice_pane_ParamLimits

0x9d9b,	// (0x0003a763) list_single_2graphic_pane_cp3_ParamLimits

0x9d9b,	// (0x0003a763) list_single_2graphic_pane_cp3

0x9dc0,	// (0x0003a788) list_single_midp_graphic_pane_ParamLimits

0x9dc0,	// (0x0003a788) list_single_midp_graphic_pane

0x5abb,	// (0x00036483) list_single_graphic_2heading_pane_g1_ParamLimits

0x5abb,	// (0x00036483) list_single_graphic_2heading_pane_g1

0x5ac7,	// (0x0003648f) list_single_graphic_2heading_pane_g4_ParamLimits

0x5ac7,	// (0x0003648f) list_single_graphic_2heading_pane_g4

0x5ad3,	// (0x0003649b) list_single_graphic_2heading_pane_g5_ParamLimits

0x5ad3,	// (0x0003649b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0004016e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0004016e) list_single_graphic_2heading_pane_g

0x5adf,	// (0x000364a7) list_single_graphic_2heading_pane_t1_ParamLimits

0x5adf,	// (0x000364a7) list_single_graphic_2heading_pane_t1

0x5af3,	// (0x000364bb) list_single_graphic_2heading_pane_t2_ParamLimits

0x5af3,	// (0x000364bb) list_single_graphic_2heading_pane_t2

0x5b0d,	// (0x000364d5) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b0d,	// (0x000364d5) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x00040175) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x00040175) list_single_graphic_2heading_pane_t

0x9baf,	// (0x0003a577) bg_popup_sub_pane_cp2

0x9bd9,	// (0x0003a5a1) grid_toobar_pane

0x7faf,	// (0x00038977) cell_toolbar_pane_ParamLimits

0x7faf,	// (0x00038977) cell_toolbar_pane

0x9c15,	// (0x0003a5dd) cell_toolbar_pane_g1_ParamLimits

0x9c15,	// (0x0003a5dd) cell_toolbar_pane_g1

0x9c29,	// (0x0003a5f1) cell_toolbar_pane_g2_ParamLimits

0x9c29,	// (0x0003a5f1) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x00040183) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x00040183) cell_toolbar_pane_g

0x9c4b,	// (0x0003a613) grid_highlight_pane_cp2_ParamLimits

0x9c4b,	// (0x0003a613) grid_highlight_pane_cp2

0x9c65,	// (0x0003a62d) toolbar_button_pane

0x9c71,	// (0x0003a639) toolbar_button_pane_g1

0x9c79,	// (0x0003a641) toolbar_button_pane_g2

0x9c81,	// (0x0003a649) toolbar_button_pane_g3

0x9c89,	// (0x0003a651) toolbar_button_pane_g4

0x9c91,	// (0x0003a659) toolbar_button_pane_g5

0x9c99,	// (0x0003a661) toolbar_button_pane_g6

0x9ca1,	// (0x0003a669) toolbar_button_pane_g7

0x9ca9,	// (0x0003a671) toolbar_button_pane_g8

0x9cb1,	// (0x0003a679) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x00040188) toolbar_button_pane_g

0x7fe7,	// (0x000389af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7fe7,	// (0x000389af) list_single_2graphic_pane_g1_cp3

0x7ff3,	// (0x000389bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7ff3,	// (0x000389bb) list_single_2graphic_pane_g2_cp3

0x8004,	// (0x000389cc) list_single_2graphic_pane_g3_cp3

0x800c,	// (0x000389d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x800c,	// (0x000389d4) list_single_2graphic_pane_g4_cp3

0x8018,	// (0x000389e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8018,	// (0x000389e0) list_single_2graphic_pane_t1_cp3

0x8034,	// (0x000389fc) list_single_midp_graphic_pane_g2_ParamLimits

0x8034,	// (0x000389fc) list_single_midp_graphic_pane_g2

0x79f6,	// (0x000383be) aid_zoom_text_primary

0x5a9f,	// (0x00036467) aid_zoom_text_secondary

0x7829,	// (0x000381f1) status_small_pane_g7_ParamLimits

0x7829,	// (0x000381f1) status_small_pane_g7

0x784c,	// (0x00038214) status_small_pane_t1_ParamLimits

0x5f39,	// (0x00036901) title_pane_g2

0x0003,

0xf54e,	// (0x0003ff16) title_pane_g

0x6287,	// (0x00036c4f) aid_size_cell_colour_1_pane_ParamLimits

0x6287,	// (0x00036c4f) aid_size_cell_colour_1_pane

0x629b,	// (0x00036c63) aid_size_cell_colour_2_pane_ParamLimits

0x629b,	// (0x00036c63) aid_size_cell_colour_2_pane

0x62af,	// (0x00036c77) aid_size_cell_colour_3_pane_ParamLimits

0x62af,	// (0x00036c77) aid_size_cell_colour_3_pane

0x62c3,	// (0x00036c8b) aid_size_cell_colour_4_pane_ParamLimits

0x62c3,	// (0x00036c8b) aid_size_cell_colour_4_pane

0x6c11,	// (0x000375d9) title_pane_stacon_g1_ParamLimits

0x6c11,	// (0x000375d9) title_pane_stacon_g1

0xa31d,	// (0x0003ace5) popup_note_wait_window_g3_ParamLimits

0xa31d,	// (0x0003ace5) popup_note_wait_window_g3

0xa393,	// (0x0003ad5b) popup_note_wait_window_t5_ParamLimits

0xa393,	// (0x0003ad5b) popup_note_wait_window_t5

0x22c4,	// (0x00032c8c) main_feb_china_hwr_fs_writing_pane

0x7a7e,	// (0x00038446) popup_feb_china_hwr_fs_window_ParamLimits

0x7a7e,	// (0x00038446) popup_feb_china_hwr_fs_window

0x8056,	// (0x00038a1e) aid_size_cell_hwr_fs_ParamLimits

0x8056,	// (0x00038a1e) aid_size_cell_hwr_fs

0x9ce5,	// (0x0003a6ad) bg_popup_sub_pane_cp3_ParamLimits

0x9ce5,	// (0x0003a6ad) bg_popup_sub_pane_cp3

0x806b,	// (0x00038a33) grid_hwr_fs_pane_ParamLimits

0x806b,	// (0x00038a33) grid_hwr_fs_pane

0x8083,	// (0x00038a4b) linegrid_hwr_fs_pane_ParamLimits

0x8083,	// (0x00038a4b) linegrid_hwr_fs_pane

0x8093,	// (0x00038a5b) cell_hwr_fs_pane_ParamLimits

0x8093,	// (0x00038a5b) cell_hwr_fs_pane

0x9cf1,	// (0x0003a6b9) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cf1,	// (0x0003a6b9) linegrid_hwr_fs_pane_g1

0x9cfd,	// (0x0003a6c5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9cfd,	// (0x0003a6c5) linegrid_hwr_fs_pane_g2

0x9d0f,	// (0x0003a6d7) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d0f,	// (0x0003a6d7) linegrid_hwr_fs_pane_g3

0x80b5,	// (0x00038a7d) linegrid_hwr_fs_pane_g4_ParamLimits

0x80b5,	// (0x00038a7d) linegrid_hwr_fs_pane_g4

0x80cf,	// (0x00038a97) linegrid_hwr_fs_pane_g5_ParamLimits

0x80cf,	// (0x00038a97) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x000401ae) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x000401ae) linegrid_hwr_fs_pane_g

0x9d1b,	// (0x0003a6e3) cell_hwr_fs_pane_g1_ParamLimits

0x9d1b,	// (0x0003a6e3) cell_hwr_fs_pane_g1

0x9ae9,	// (0x0003a4b1) cell_hwr_fs_pane_g2_ParamLimits

0x9ae9,	// (0x0003a4b1) cell_hwr_fs_pane_g2

0x9d31,	// (0x0003a6f9) cell_hwr_fs_pane_g3_ParamLimits

0x9d31,	// (0x0003a6f9) cell_hwr_fs_pane_g3

0x9d3e,	// (0x0003a706) cell_hwr_fs_pane_g4_ParamLimits

0x9d3e,	// (0x0003a706) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x000401b9) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x000401b9) cell_hwr_fs_pane_g

0x80e5,	// (0x00038aad) cell_hwr_fs_pane_t1

0x22c4,	// (0x00032c8c) grid_highlight_pane_cp6

0x22c4,	// (0x00032c8c) main_idle_act2_pane

0x27d8,	// (0x000331a0) aid_inside_area_popup_secondary

0xa9b2,	// (0x0003b37a) aid_inside_area_window_primary_ParamLimits

0xa9b2,	// (0x0003b37a) aid_inside_area_window_primary

0xb538,	// (0x0003bf00) ai2_news_ticker_pane

0xb540,	// (0x0003bf08) aid_size_cell_ai1_link_ParamLimits

0xb540,	// (0x0003bf08) aid_size_cell_ai1_link

0xb55a,	// (0x0003bf22) popup_ai2_data_window_ParamLimits

0xb55a,	// (0x0003bf22) popup_ai2_data_window

0xb570,	// (0x0003bf38) popup_ai2_link_window_ParamLimits

0xb570,	// (0x0003bf38) popup_ai2_link_window

0x9ce5,	// (0x0003a6ad) bg_popup_sub_pane_cp4_ParamLimits

0x9ce5,	// (0x0003a6ad) bg_popup_sub_pane_cp4

0xb584,	// (0x0003bf4c) grid_ai2_link_pane_ParamLimits

0xb584,	// (0x0003bf4c) grid_ai2_link_pane

0xb59b,	// (0x0003bf63) popup_ai2_link_window_g1_ParamLimits

0xb59b,	// (0x0003bf63) popup_ai2_link_window_g1

0xb5a7,	// (0x0003bf6f) popup_ai2_link_window_g2_ParamLimits

0xb5a7,	// (0x0003bf6f) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0004038c) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0004038c) popup_ai2_link_window_g

0xb5b6,	// (0x0003bf7e) ai2_mp_button_pane

0xb5be,	// (0x0003bf86) ai2_mp_volume_pane

0x9ef8,	// (0x0003a8c0) bg_popup_sub_pane_cp5_ParamLimits

0x9ef8,	// (0x0003a8c0) bg_popup_sub_pane_cp5

0xb5c6,	// (0x0003bf8e) heading_ai2_gene_pane_ParamLimits

0xb5c6,	// (0x0003bf8e) heading_ai2_gene_pane

0xb5d2,	// (0x0003bf9a) list_ai2_gene_pane_ParamLimits

0xb5d2,	// (0x0003bf9a) list_ai2_gene_pane

0xb61a,	// (0x0003bfe2) cell_ai2_link_pane_ParamLimits

0xb61a,	// (0x0003bfe2) cell_ai2_link_pane

0xb630,	// (0x0003bff8) cell_ai2_link_pane_g1

0x22c4,	// (0x00032c8c) grid_highlight_pane_cp7

0x852a,	// (0x00038ef2) ai2_mp_volume_pane_g1

0xb700,	// (0x0003c0c8) ai2_mp_volume_pane_g2

0xb675,	// (0x0003c03d) list_ai2_gene_pane_t1

0xb708,	// (0x0003c0d0) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x000403a5) ai2_mp_volume_pane_g

0x8532,	// (0x00038efa) volume_small_pane_cp3

0xb710,	// (0x0003c0d8) aid_size_cell_ai2_button

0xb718,	// (0x0003c0e0) grid_ai2_button_pane

0xb721,	// (0x0003c0e9) cell_ai2_button_pane_ParamLimits

0xb721,	// (0x0003c0e9) cell_ai2_button_pane

0x22ba,	// (0x00032c82) cell_ai2_button_pane_g1

0x22c4,	// (0x00032c8c) grid_highlight_pane_cp8

0xb6c0,	// (0x0003c088) ai2_gene_pane_t1_ParamLimits

0xb6c0,	// (0x0003c088) ai2_gene_pane_t1

0x79e4,	// (0x000383ac) aid_height_parent_landscape

0xb01b,	// (0x0003b9e3) aid_height_set_list

0xb02c,	// (0x0003b9f4) aid_size_parent

0xb35b,	// (0x0003bd23) aid_size_cell_graphic_pane_ParamLimits

0xb5e2,	// (0x0003bfaa) popup_ai2_data_window_g1_ParamLimits

0xb5e2,	// (0x0003bfaa) popup_ai2_data_window_g1

0xb5ee,	// (0x0003bfb6) ai2_news_ticker_pane_g1

0xb5f6,	// (0x0003bfbe) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x00040391) ai2_news_ticker_pane_g

0xb5fe,	// (0x0003bfc6) ai2_news_ticker_pane_t1

0xb60c,	// (0x0003bfd4) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x00040396) ai2_news_ticker_pane_t

0xb639,	// (0x0003c001) heading_ai2_gene_pane_g1

0xb641,	// (0x0003c009) heading_ai2_gene_pane_t1_ParamLimits

0xb641,	// (0x0003c009) heading_ai2_gene_pane_t1

0xb656,	// (0x0003c01e) list_highlight_pane_cp6

0xb65e,	// (0x0003c026) ai2_gene_pane_ParamLimits

0xb65e,	// (0x0003c026) ai2_gene_pane

0xb683,	// (0x0003c04b) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0004039b) list_ai2_gene_pane_t

0xb691,	// (0x0003c059) list_highlight_pane_cp8_ParamLimits

0xb691,	// (0x0003c059) list_highlight_pane_cp8

0xb6a2,	// (0x0003c06a) ai2_gene_pane_g1_ParamLimits

0xb6a2,	// (0x0003c06a) ai2_gene_pane_g1

0xb6b4,	// (0x0003c07c) ai2_gene_pane_g2_ParamLimits

0xb6b4,	// (0x0003c07c) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x000403a0) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x000403a0) ai2_gene_pane_g

0x2671,	// (0x00033039) scroll_pane_cp12

0x79a1,	// (0x00038369) control_pane_t3_ParamLimits

0x79a1,	// (0x00038369) control_pane_t3

0x783d,	// (0x00038205) status_small_pane_g8_ParamLimits

0x783d,	// (0x00038205) status_small_pane_g8

0x7b60,	// (0x00038528) popup_find_window_ParamLimits

0x7d79,	// (0x00038741) popup_note_image_window_ParamLimits

0x460e,	// (0x00034fd6) list_double2_graphic_pane_vc_g1_ParamLimits

0x460e,	// (0x00034fd6) list_double2_graphic_pane_vc_g1

0x461a,	// (0x00034fe2) list_double2_graphic_pane_vc_g2_ParamLimits

0x461a,	// (0x00034fe2) list_double2_graphic_pane_vc_g2

0x4626,	// (0x00034fee) list_double2_graphic_pane_vc_g3_ParamLimits

0x4626,	// (0x00034fee) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0004017c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0004017c) list_double2_graphic_pane_vc_g

0x4632,	// (0x00034ffa) list_double2_graphic_pane_vc_t1_ParamLimits

0x4632,	// (0x00034ffa) list_double2_graphic_pane_vc_t1

0x461a,	// (0x00034fe2) list_single_heading_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_heading_pane_vc_g1

0x4626,	// (0x00034fee) list_single_heading_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_heading_pane_vc_g

0x47a5,	// (0x0003516d) list_single_heading_pane_vc_t1_ParamLimits

0x47a5,	// (0x0003516d) list_single_heading_pane_vc_t1

0x47bb,	// (0x00035183) list_single_heading_pane_vc_t2_ParamLimits

0x47bb,	// (0x00035183) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0004019d) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0004019d) list_single_heading_pane_vc_t

0x47cd,	// (0x00035195) list_setting_number_pane_vc_g1_ParamLimits

0x47cd,	// (0x00035195) list_setting_number_pane_vc_g1

0x47d9,	// (0x000351a1) list_setting_number_pane_vc_g2_ParamLimits

0x47d9,	// (0x000351a1) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x000401a2) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x000401a2) list_setting_number_pane_vc_g

0x47e5,	// (0x000351ad) list_setting_number_pane_vc_t1_ParamLimits

0x47e5,	// (0x000351ad) list_setting_number_pane_vc_t1

0x47f9,	// (0x000351c1) list_setting_number_pane_vc_t2_ParamLimits

0x47f9,	// (0x000351c1) list_setting_number_pane_vc_t2

0x4815,	// (0x000351dd) list_setting_number_pane_vc_t3_ParamLimits

0x4815,	// (0x000351dd) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x000401a7) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x000401a7) list_setting_number_pane_vc_t

0x4841,	// (0x00035209) set_value_pane_vc_ParamLimits

0x4841,	// (0x00035209) set_value_pane_vc

0x4860,	// (0x00035228) list_double2_graphic_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double2_graphic_pane_vc

0xb1fc,	// (0x0003bbc4) list_double2_large_graphic_pane_vc_ParamLimits

0xb1fc,	// (0x0003bbc4) list_double2_large_graphic_pane_vc

0x4860,	// (0x00035228) list_double2_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double2_pane_vc

0x4860,	// (0x00035228) list_double_graphic_heading_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_graphic_heading_pane_vc

0x4860,	// (0x00035228) list_double_graphic_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_graphic_pane_vc

0x4860,	// (0x00035228) list_double_heading_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_heading_pane_vc

0xb20e,	// (0x0003bbd6) list_double_large_graphic_pane_vc_ParamLimits

0xb20e,	// (0x0003bbd6) list_double_large_graphic_pane_vc

0x4860,	// (0x00035228) list_double_number_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_number_pane_vc

0x4860,	// (0x00035228) list_double_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_pane_vc

0x4860,	// (0x00035228) list_double_time_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_double_time_pane_vc

0x4860,	// (0x00035228) list_setting_number_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_setting_number_pane_vc

0x4860,	// (0x00035228) list_setting_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_setting_pane_vc

0x4860,	// (0x00035228) list_single_graphic_heading_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_single_graphic_heading_pane_vc

0x4860,	// (0x00035228) list_single_heading_pane_vc_ParamLimits

0x4860,	// (0x00035228) list_single_heading_pane_vc

0x83cb,	// (0x00038d93) list_single_number_heading_pane_vc_ParamLimits

0x83cb,	// (0x00038d93) list_single_number_heading_pane_vc

0x4694,	// (0x0003505c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4694,	// (0x0003505c) list_double_graphic_heading_pane_vc_g1

0x461a,	// (0x00034fe2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x461a,	// (0x00034fe2) list_double_graphic_heading_pane_vc_g2

0x4626,	// (0x00034fee) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4626,	// (0x00034fee) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x000403ac) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x000403ac) list_double_graphic_heading_pane_vc_g

0x4873,	// (0x0003523b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4873,	// (0x0003523b) list_double_graphic_heading_pane_vc_t1

0x4887,	// (0x0003524f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4887,	// (0x0003524f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x000403b3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x000403b3) list_double_graphic_heading_pane_vc_t

0x47cd,	// (0x00035195) list_setting_pane_vc_g1_ParamLimits

0x47cd,	// (0x00035195) list_setting_pane_vc_g1

0x47d9,	// (0x000351a1) list_setting_pane_vc_g2_ParamLimits

0x47d9,	// (0x000351a1) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x000401a2) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x000401a2) list_setting_pane_vc_g

0x489f,	// (0x00035267) list_setting_pane_vc_t1_ParamLimits

0x489f,	// (0x00035267) list_setting_pane_vc_t1

0x48bb,	// (0x00035283) list_setting_pane_vc_t2_ParamLimits

0x48bb,	// (0x00035283) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x000403f6) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x000403f6) list_setting_pane_vc_t

0x4841,	// (0x00035209) set_value_pane_cp_vc_ParamLimits

0x4841,	// (0x00035209) set_value_pane_cp_vc

0x461a,	// (0x00034fe2) list_single_number_heading_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_single_number_heading_pane_vc_g1

0x4626,	// (0x00034fee) list_single_number_heading_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_single_number_heading_pane_vc_g

0x48d5,	// (0x0003529d) list_single_number_heading_pane_vc_t1_ParamLimits

0x48d5,	// (0x0003529d) list_single_number_heading_pane_vc_t1

0x48eb,	// (0x000352b3) list_single_number_heading_pane_vc_t2_ParamLimits

0x48eb,	// (0x000352b3) list_single_number_heading_pane_vc_t2

0x48fd,	// (0x000352c5) list_single_number_heading_pane_vc_t3_ParamLimits

0x48fd,	// (0x000352c5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x000403fb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x000403fb) list_single_number_heading_pane_vc_t

0x490f,	// (0x000352d7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x490f,	// (0x000352d7) list_single_graphic_heading_pane_vc_g1

0x461a,	// (0x00034fe2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x461a,	// (0x00034fe2) list_single_graphic_heading_pane_vc_g4

0x4626,	// (0x00034fee) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4626,	// (0x00034fee) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x00040402) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x00040402) list_single_graphic_heading_pane_vc_g

0x491b,	// (0x000352e3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x491b,	// (0x000352e3) list_single_graphic_heading_pane_vc_t1

0x4931,	// (0x000352f9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4931,	// (0x000352f9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x00040409) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x00040409) list_single_graphic_heading_pane_vc_t

0x461a,	// (0x00034fe2) list_double2_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_double2_pane_vc_g1

0x4626,	// (0x00034fee) list_double2_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_double2_pane_vc_g

0x4943,	// (0x0003530b) list_double2_pane_vc_t1_ParamLimits

0x4943,	// (0x0003530b) list_double2_pane_vc_t1

0x46a0,	// (0x00035068) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x46a0,	// (0x00035068) list_double2_large_graphic_pane_vc_g1

0x46ac,	// (0x00035074) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x46ac,	// (0x00035074) list_double2_large_graphic_pane_vc_g2

0x46b8,	// (0x00035080) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x46b8,	// (0x00035080) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0004040e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0004040e) list_double2_large_graphic_pane_vc_g

0x46c4,	// (0x0003508c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x46c4,	// (0x0003508c) list_double2_large_graphic_pane_vc_t1

0x495b,	// (0x00035323) list_double_time_pane_vc_g1_ParamLimits

0x495b,	// (0x00035323) list_double_time_pane_vc_g1

0x4967,	// (0x0003532f) list_double_time_pane_vc_g2_ParamLimits

0x4967,	// (0x0003532f) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x00040415) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x00040415) list_double_time_pane_vc_g

0x4973,	// (0x0003533b) list_double_time_pane_vc_t1_ParamLimits

0x4973,	// (0x0003533b) list_double_time_pane_vc_t1

0x4997,	// (0x0003535f) list_double_time_pane_vc_t2_ParamLimits

0x4997,	// (0x0003535f) list_double_time_pane_vc_t2

0x49e6,	// (0x000353ae) list_double_time_pane_vc_t3_ParamLimits

0x49e6,	// (0x000353ae) list_double_time_pane_vc_t3

0x49f8,	// (0x000353c0) list_double_time_pane_vc_t4_ParamLimits

0x49f8,	// (0x000353c0) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0004041a) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0004041a) list_double_time_pane_vc_t

0x461a,	// (0x00034fe2) list_double_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_double_pane_vc_g1

0x4626,	// (0x00034fee) list_double_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_double_pane_vc_g

0x4a0c,	// (0x000353d4) list_double_pane_vc_t1_ParamLimits

0x4a0c,	// (0x000353d4) list_double_pane_vc_t1

0x4a20,	// (0x000353e8) list_double_pane_vc_t2_ParamLimits

0x4a20,	// (0x000353e8) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x00040423) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x00040423) list_double_pane_vc_t

0x461a,	// (0x00034fe2) list_double_number_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_double_number_pane_vc_g1

0x4626,	// (0x00034fee) list_double_number_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_double_number_pane_vc_g

0x4a38,	// (0x00035400) list_double_number_pane_vc_t1_ParamLimits

0x4a38,	// (0x00035400) list_double_number_pane_vc_t1

0x4a0c,	// (0x000353d4) list_double_number_pane_vc_t2_ParamLimits

0x4a0c,	// (0x000353d4) list_double_number_pane_vc_t2

0x4a4a,	// (0x00035412) list_double_number_pane_vc_t3_ParamLimits

0x4a4a,	// (0x00035412) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x00040428) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x00040428) list_double_number_pane_vc_t

0x4a62,	// (0x0003542a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4a62,	// (0x0003542a) list_double_large_graphic_pane_vc_g1

0x4a84,	// (0x0003544c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4a84,	// (0x0003544c) list_double_large_graphic_pane_vc_g2

0x4a98,	// (0x00035460) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4a98,	// (0x00035460) list_double_large_graphic_pane_vc_g3

0x4aa7,	// (0x0003546f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4aa7,	// (0x0003546f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0004042f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0004042f) list_double_large_graphic_pane_vc_g

0x4ab3,	// (0x0003547b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4ab3,	// (0x0003547b) list_double_large_graphic_pane_vc_t1

0x4acf,	// (0x00035497) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4acf,	// (0x00035497) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00040438) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00040438) list_double_large_graphic_pane_vc_t

0x461a,	// (0x00034fe2) list_double_heading_pane_vc_g1_ParamLimits

0x461a,	// (0x00034fe2) list_double_heading_pane_vc_g1

0x4626,	// (0x00034fee) list_double_heading_pane_vc_g2_ParamLimits

0x4626,	// (0x00034fee) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ff90) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ff90) list_double_heading_pane_vc_g

0x4af1,	// (0x000354b9) list_double_heading_pane_vc_t1_ParamLimits

0x4af1,	// (0x000354b9) list_double_heading_pane_vc_t1

0x4b05,	// (0x000354cd) list_double_heading_pane_vc_t2_ParamLimits

0x4b05,	// (0x000354cd) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0004043d) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0004043d) list_double_heading_pane_vc_t

0x4b1d,	// (0x000354e5) list_double_graphic_pane_vc_g1_ParamLimits

0x4b1d,	// (0x000354e5) list_double_graphic_pane_vc_g1

0x4b35,	// (0x000354fd) list_double_graphic_pane_vc_g2_ParamLimits

0x4b35,	// (0x000354fd) list_double_graphic_pane_vc_g2

0x461a,	// (0x00034fe2) list_double_graphic_pane_vc_g3_ParamLimits

0x461a,	// (0x00034fe2) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x00040442) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x00040442) list_double_graphic_pane_vc_g

0x4b52,	// (0x0003551a) list_double_graphic_pane_vc_t1_ParamLimits

0x4b52,	// (0x0003551a) list_double_graphic_pane_vc_t1

0x4b71,	// (0x00035539) list_double_graphic_pane_vc_t2_ParamLimits

0x4b71,	// (0x00035539) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0004044b) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0004044b) list_double_graphic_pane_vc_t

0x5b59,	// (0x00036521) aid_size_cell_fastswap

0x5b61,	// (0x00036529) aid_size_cell_touch_ParamLimits

0x5b61,	// (0x00036529) aid_size_cell_touch

0x5dc6,	// (0x0003678e) popup_fast_swap_wide_window_ParamLimits

0x5dc6,	// (0x0003678e) popup_fast_swap_wide_window

0x5ecc,	// (0x00036894) touch_pane_ParamLimits

0x5ecc,	// (0x00036894) touch_pane

0x26be,	// (0x00033086) button_value_adjust_pane_cp2

0x46fb,	// (0x000350c3) button_value_adjust_pane_cp4

0x4703,	// (0x000350cb) form_field_data_pane_cp2

0x6908,	// (0x000372d0) form_field_data_wide_pane_cp2

0x29b9,	// (0x00033381) bg_scroll_pane_ParamLimits

0x6e0b,	// (0x000377d3) scroll_handle_pane_ParamLimits

0x6e1f,	// (0x000377e7) scroll_sc2_down_pane_ParamLimits

0x6e1f,	// (0x000377e7) scroll_sc2_down_pane

0x29ea,	// (0x000333b2) scroll_sc2_up_pane_ParamLimits

0x29ea,	// (0x000333b2) scroll_sc2_up_pane

0xbdd7,	// (0x0003c79f) grid_wheel_folder_pane_g1_ParamLimits

0xbdd7,	// (0x0003c79f) grid_wheel_folder_pane_g1

0x71f8,	// (0x00037bc0) clock_nsta_pane_cp2_ParamLimits

0x71f8,	// (0x00037bc0) clock_nsta_pane_cp2

0x751e,	// (0x00037ee6) listscroll_midp_pane_ParamLimits

0x752a,	// (0x00037ef2) midp_canvas_pane

0x9722,	// (0x0003a0ea) nsta_clock_indic_pane

0x9756,	// (0x0003a11e) listscroll_form_pane_vc

0x975e,	// (0x0003a126) listscroll_set_pane_vc_ParamLimits

0x975e,	// (0x0003a126) listscroll_set_pane_vc

0x9857,	// (0x0003a21f) clock_nsta_pane

0x98d2,	// (0x0003a29a) indicator_nsta_pane

0x9baf,	// (0x0003a577) bg_popup_sub_pane_cp2_ParamLimits

0x9bc3,	// (0x0003a58b) find_pane_cp2_ParamLimits

0x9bc3,	// (0x0003a58b) find_pane_cp2

0x9bd9,	// (0x0003a5a1) grid_toobar_pane_ParamLimits

0x9cb9,	// (0x0003a681) list_form_gen_pane_vc_ParamLimits

0x9cb9,	// (0x0003a681) list_form_gen_pane_vc

0x9ccf,	// (0x0003a697) scroll_pane_cp8_vc_ParamLimits

0x9ccf,	// (0x0003a697) scroll_pane_cp8_vc

0x9d4b,	// (0x0003a713) data_form_wide_pane_vc_ParamLimits

0x9d4b,	// (0x0003a713) data_form_wide_pane_vc

0x9d57,	// (0x0003a71f) form_field_data_wide_pane_vc_g1

0x9d5f,	// (0x0003a727) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d5f,	// (0x0003a727) form_field_data_wide_pane_vc_t1

0x26d2,	// (0x0003309a) input_focus_pane_cp6_vc_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_cp6_vc

0xa08c,	// (0x0003aa54) list_midp_pane_ParamLimits

0xa098,	// (0x0003aa60) scroll_pane_cp16_ParamLimits

0xa098,	// (0x0003aa60) scroll_pane_cp16

0xa0fa,	// (0x0003aac2) button_value_adjust_pane_ParamLimits

0xa0fa,	// (0x0003aac2) button_value_adjust_pane

0xb03e,	// (0x0003ba06) button_value_adjust_pane_cp6_ParamLimits

0xb03e,	// (0x0003ba06) button_value_adjust_pane_cp6

0xb164,	// (0x0003bb2c) settings_code_pane_cp_ParamLimits

0xb164,	// (0x0003bb2c) settings_code_pane_cp

0x22ba,	// (0x00032c82) cell_touch_pane_g1

0x22ba,	// (0x00032c82) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x000400c1) cell_touch_pane_g

0xb733,	// (0x0003c0fb) cell_touch_pane_cp_ParamLimits

0xb733,	// (0x0003c0fb) cell_touch_pane_cp

0xb743,	// (0x0003c10b) cell_touch_pane_ParamLimits

0xb743,	// (0x0003c10b) cell_touch_pane

0x22ba,	// (0x00032c82) scroll_sc2_down_pane_g1

0x22ba,	// (0x00032c82) scroll_sc2_up_pane_g1

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp4_vc

0xb755,	// (0x0003c11d) list_set_graphic_pane_vc_g1_ParamLimits

0xb755,	// (0x0003c11d) list_set_graphic_pane_vc_g1

0xb761,	// (0x0003c129) list_set_graphic_pane_vc_g2_ParamLimits

0xb761,	// (0x0003c129) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x000403b8) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x000403b8) list_set_graphic_pane_vc_g

0xb76d,	// (0x0003c135) text_primary_small_cp13_vc_ParamLimits

0xb76d,	// (0x0003c135) text_primary_small_cp13_vc

0xb785,	// (0x0003c14d) list_set_graphic_pane_vc_ParamLimits

0xb785,	// (0x0003c14d) list_set_graphic_pane_vc

0x22c4,	// (0x00032c8c) input_focus_pane_cp2_vc

0x22ba,	// (0x00032c82) setting_code_pane_vc_g1

0x2337,	// (0x00032cff) setting_code_pane_vc_t1

0xb798,	// (0x0003c160) set_text_pane_vc_t1_ParamLimits

0xb798,	// (0x0003c160) set_text_pane_vc_t1

0x22c4,	// (0x00032c8c) input_focus_pane_cp1_vc

0xb7b4,	// (0x0003c17c) list_set_text_pane_vc

0x22ba,	// (0x00032c82) setting_text_pane_vc_g1

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp2_vc

0x232e,	// (0x00032cf6) setting_slider_graphic_pane_vc_g1

0xb7be,	// (0x0003c186) setting_slider_graphic_pane_vc_t1

0xb7ce,	// (0x0003c196) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x000403bd) setting_slider_graphic_pane_vc_t

0xb7de,	// (0x0003c1a6) slider_set_pane_cp_vc

0xb7e6,	// (0x0003c1ae) slider_set_pane_vc_g1

0xb7ef,	// (0x0003c1b7) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x000403c2) slider_set_pane_vc_g

0x272a,	// (0x000330f2) set_opt_bg_pane_g1_copy1

0x2732,	// (0x000330fa) set_opt_bg_pane_g2_copy1

0xb81b,	// (0x0003c1e3) set_opt_bg_pane_g3_copy1

0x2742,	// (0x0003310a) set_opt_bg_pane_g4_copy1

0x274a,	// (0x00033112) set_opt_bg_pane_g5_copy1

0x2752,	// (0x0003311a) set_opt_bg_pane_g6_copy1

0xb823,	// (0x0003c1eb) set_opt_bg_pane_g7_copy1

0xb82b,	// (0x0003c1f3) set_opt_bg_pane_g8_copy1

0xb833,	// (0x0003c1fb) set_opt_bg_pane_g9_copy1

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp_vc

0xb83b,	// (0x0003c203) setting_slider_pane_vc_t1

0xb84a,	// (0x0003c212) setting_slider_pane_vc_t2

0xb85a,	// (0x0003c222) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x000403d1) setting_slider_pane_vc_t

0xb86a,	// (0x0003c232) slider_set_pane_vc

0x8126,	// (0x00038aee) volume_set_pane_vc_g1

0x853b,	// (0x00038f03) volume_set_pane_vc_g2

0x8544,	// (0x00038f0c) volume_set_pane_vc_g3

0x854d,	// (0x00038f15) volume_set_pane_vc_g4

0x8556,	// (0x00038f1e) volume_set_pane_vc_g5

0x855f,	// (0x00038f27) volume_set_pane_vc_g6

0x8568,	// (0x00038f30) volume_set_pane_vc_g7

0x8571,	// (0x00038f39) volume_set_pane_vc_g8

0x857a,	// (0x00038f42) volume_set_pane_vc_g9

0x8583,	// (0x00038f4b) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x000403d8) volume_set_pane_vc_g

0xb872,	// (0x0003c23a) volume_set_pane_vc

0xb87a,	// (0x0003c242) button_value_adjust_pane_cp1_vc

0xb884,	// (0x0003c24c) list_highlight_pane_cp2_vc

0xb88d,	// (0x0003c255) list_set_pane_vc_ParamLimits

0xb88d,	// (0x0003c255) list_set_pane_vc

0xb8eb,	// (0x0003c2b3) main_pane_set_vc_t1_ParamLimits

0xb8eb,	// (0x0003c2b3) main_pane_set_vc_t1

0xb900,	// (0x0003c2c8) main_pane_set_vc_t2_ParamLimits

0xb900,	// (0x0003c2c8) main_pane_set_vc_t2

0xb912,	// (0x0003c2da) main_pane_set_vc_t3_ParamLimits

0xb912,	// (0x0003c2da) main_pane_set_vc_t3

0xb924,	// (0x0003c2ec) main_pane_set_vc_t4_ParamLimits

0xb924,	// (0x0003c2ec) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x000403ed) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x000403ed) main_pane_set_vc_t

0xb936,	// (0x0003c2fe) setting_code_pane_vc_ParamLimits

0xb936,	// (0x0003c2fe) setting_code_pane_vc

0xb945,	// (0x0003c30d) setting_slider_graphic_pane_vc

0xb945,	// (0x0003c30d) setting_slider_pane_vc

0xb945,	// (0x0003c30d) setting_text_pane_vc

0xb945,	// (0x0003c30d) setting_volume_pane_vc

0xb94d,	// (0x0003c315) scroll_pane_cp121_vc

0x26ac,	// (0x00033074) set_content_pane_vc

0xb955,	// (0x0003c31d) button_value_adjust_pane_g1

0xb95e,	// (0x0003c326) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00040450) button_value_adjust_pane_g

0xb967,	// (0x0003c32f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb967,	// (0x0003c32f) form_field_slider_wide_pane_vc_t1

0xb97b,	// (0x0003c343) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb97b,	// (0x0003c343) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00040455) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00040455) form_field_slider_wide_pane_vc_t

0x2312,	// (0x00032cda) input_focus_pane_cp10_vc_ParamLimits

0x2312,	// (0x00032cda) input_focus_pane_cp10_vc

0xb9a9,	// (0x0003c371) slider_cont_pane_cp1_vc_ParamLimits

0xb9a9,	// (0x0003c371) slider_cont_pane_cp1_vc

0xb9bb,	// (0x0003c383) slider_form_pane_g1_cp2

0xb7ef,	// (0x0003c1b7) slider_form_pane_g2_cp2

0xb9e8,	// (0x0003c3b0) form_field_slider_pane_vc_t3

0xb9f6,	// (0x0003c3be) form_field_slider_pane_vc_t4

0xba04,	// (0x0003c3cc) slider_form_pane_vc_ParamLimits

0xba04,	// (0x0003c3cc) slider_form_pane_vc

0xba11,	// (0x0003c3d9) form_field_slider_pane_vc_t1_ParamLimits

0xba11,	// (0x0003c3d9) form_field_slider_pane_vc_t1

0xb97b,	// (0x0003c343) form_field_slider_pane_vc_t2_ParamLimits

0xb97b,	// (0x0003c343) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00040467) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00040467) form_field_slider_pane_vc_t

0x2312,	// (0x00032cda) input_focus_pane_cp9_vc_ParamLimits

0x2312,	// (0x00032cda) input_focus_pane_cp9_vc

0xba2d,	// (0x0003c3f5) slider_cont_pane_vc_ParamLimits

0xba2d,	// (0x0003c3f5) slider_cont_pane_vc

0xba41,	// (0x0003c409) list_form_graphic_pane_cp_vc_ParamLimits

0xba41,	// (0x0003c409) list_form_graphic_pane_cp_vc

0x9d57,	// (0x0003a71f) form_field_popup_wide_pane_vc_g1

0xba56,	// (0x0003c41e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba56,	// (0x0003c41e) form_field_popup_wide_pane_vc_t1

0x26d2,	// (0x0003309a) input_focus_pane_cp8_vc_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_cp8_vc

0xba9b,	// (0x0003c463) list_form_wide_pane_vc_ParamLimits

0xba9b,	// (0x0003c463) list_form_wide_pane_vc

0xbaa7,	// (0x0003c46f) list_form_graphic_pane_vc_g1

0xbaaf,	// (0x0003c477) list_form_graphic_pane_vc_t1_ParamLimits

0xbaaf,	// (0x0003c477) list_form_graphic_pane_vc_t1

0x2320,	// (0x00032ce8) list_highlight_pane_cp5_vc_ParamLimits

0x2320,	// (0x00032ce8) list_highlight_pane_cp5_vc

0xbacb,	// (0x0003c493) list_form_graphic_pane_vc_ParamLimits

0xbacb,	// (0x0003c493) list_form_graphic_pane_vc

0x9d57,	// (0x0003a71f) form_field_popup_pane_vc_g1

0xbae1,	// (0x0003c4a9) form_field_popup_pane_vc_t1_ParamLimits

0xbae1,	// (0x0003c4a9) form_field_popup_pane_vc_t1

0x26d2,	// (0x0003309a) input_focus_pane_cp7_vc_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_cp7_vc

0xbaf8,	// (0x0003c4c0) list_form_pane_vc_ParamLimits

0xbaf8,	// (0x0003c4c0) list_form_pane_vc

0xbb04,	// (0x0003c4cc) data_form_pane_vc_t1_ParamLimits

0xbb04,	// (0x0003c4cc) data_form_pane_vc_t1

0x272a,	// (0x000330f2) input_focus_pane_vc_g1

0x2732,	// (0x000330fa) input_focus_pane_vc_g2

0x273a,	// (0x00033102) input_focus_pane_vc_g3

0x2742,	// (0x0003310a) input_focus_pane_vc_g4

0x274a,	// (0x00033112) input_focus_pane_vc_g5

0x2752,	// (0x0003311a) input_focus_pane_vc_g6

0x275a,	// (0x00033122) input_focus_pane_vc_g7

0x2762,	// (0x0003312a) input_focus_pane_vc_g8

0x276a,	// (0x00033132) input_focus_pane_vc_g9

0x22ba,	// (0x00032c82) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0004004a) input_focus_pane_vc_g

0x9d4b,	// (0x0003a713) data_form_pane_vc_ParamLimits

0x9d4b,	// (0x0003a713) data_form_pane_vc

0x9d57,	// (0x0003a71f) form_field_data_pane_vc_g1

0xbb1f,	// (0x0003c4e7) form_field_data_pane_vc_t1_ParamLimits

0xbb1f,	// (0x0003c4e7) form_field_data_pane_vc_t1

0x26d2,	// (0x0003309a) input_focus_pane_vc_ParamLimits

0x26d2,	// (0x0003309a) input_focus_pane_vc

0xbb39,	// (0x0003c501) button_value_adjust_pane_cp3_vc

0xbb41,	// (0x0003c509) button_value_adjust_pane_cp5_vc

0xbb49,	// (0x0003c511) form_field_data_pane_vc_ParamLimits

0xbb49,	// (0x0003c511) form_field_data_pane_vc

0xbb60,	// (0x0003c528) form_field_data_pane_vc_cp2

0xbb68,	// (0x0003c530) form_field_data_wide_pane_vc_ParamLimits

0xbb68,	// (0x0003c530) form_field_data_wide_pane_vc

0xbb7e,	// (0x0003c546) form_field_data_wide_pane_vc_cp2

0xbb86,	// (0x0003c54e) form_field_popup_pane_vc_ParamLimits

0xbb86,	// (0x0003c54e) form_field_popup_pane_vc

0xbb9d,	// (0x0003c565) form_field_popup_wide_pane_vc_ParamLimits

0xbb9d,	// (0x0003c565) form_field_popup_wide_pane_vc

0xbbb3,	// (0x0003c57b) form_field_slider_pane_vc_ParamLimits

0xbbb3,	// (0x0003c57b) form_field_slider_pane_vc

0xbbc6,	// (0x0003c58e) form_field_slider_wide_pane_vc_ParamLimits

0xbbc6,	// (0x0003c58e) form_field_slider_wide_pane_vc

0xbbd9,	// (0x0003c5a1) grid_touch_1_pane_ParamLimits

0xbbd9,	// (0x0003c5a1) grid_touch_1_pane

0xbbe5,	// (0x0003c5ad) grid_touch_2_pane_ParamLimits

0xbbe5,	// (0x0003c5ad) grid_touch_2_pane

0x78d0,	// (0x00038298) touch_pane_g1_ParamLimits

0x78d0,	// (0x00038298) touch_pane_g1

0xbbfd,	// (0x0003c5c5) cell_app_pane_cp_wide_ParamLimits

0xbbfd,	// (0x0003c5c5) cell_app_pane_cp_wide

0xbc0e,	// (0x0003c5d6) grid_popup_fast_wide_pane_ParamLimits

0xbc0e,	// (0x0003c5d6) grid_popup_fast_wide_pane

0xbc22,	// (0x0003c5ea) scroll_pane_cp19_ParamLimits

0xbc22,	// (0x0003c5ea) scroll_pane_cp19

0x22c4,	// (0x00032c8c) bg_popup_window_pane_cp20

0xbc36,	// (0x0003c5fe) listscroll_popup_fast_wide_pane

0x2320,	// (0x00032ce8) grid_indicator_nsta_pane

0xbc3e,	// (0x0003c606) clock_nsta_pane_g1

0xbc47,	// (0x0003c60f) clock_nsta_pane_t1

0xbc63,	// (0x0003c62b) cell_indicator_nsta_pane_ParamLimits

0xbc63,	// (0x0003c62b) cell_indicator_nsta_pane

0xbc94,	// (0x0003c65c) cell_indicator_nsta_pane_g1

0xbca2,	// (0x0003c66a) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00040478) cell_indicator_nsta_pane_g

0xbcaf,	// (0x0003c677) clock_nsta_pane_cp

0xbcb8,	// (0x0003c680) indicator_nsta_pane_cp

0xbcc0,	// (0x0003c688) nsta_clock_indic_pane_g1

0x235c,	// (0x00032d24) grid_indicator_pane

0x6ebd,	// (0x00037885) scroll_pane_cp29

0x7147,	// (0x00037b0f) indicator_nsta_pane_cp2_ParamLimits

0x7147,	// (0x00037b0f) indicator_nsta_pane_cp2

0x2320,	// (0x00032ce8) main_apps_wheel_pane

0x9f6f,	// (0x0003a937) form_midp_field_text_pane_ParamLimits

0xa0b8,	// (0x0003aa80) scroll_bar_cp050_ParamLimits

0xbd10,	// (0x0003c6d8) cell_indicator_pane_ParamLimits

0xbd10,	// (0x0003c6d8) cell_indicator_pane

0xbd29,	// (0x0003c6f1) cell_indicator_pane_g1

0xbd33,	// (0x0003c6fb) grid_wheel_folder_pane_ParamLimits

0xbd33,	// (0x0003c6fb) grid_wheel_folder_pane

0xbd49,	// (0x0003c711) list_wheel_apps_pane_ParamLimits

0xbd49,	// (0x0003c711) list_wheel_apps_pane

0xbd5a,	// (0x0003c722) main_apps_wheel_pane_g1_ParamLimits

0xbd5a,	// (0x0003c722) main_apps_wheel_pane_g1

0xbd6e,	// (0x0003c736) main_apps_wheel_pane_g2_ParamLimits

0xbd6e,	// (0x0003c736) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00040494) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00040494) main_apps_wheel_pane_g

0xbd86,	// (0x0003c74e) main_apps_wheel_pane_t1_ParamLimits

0xbd86,	// (0x0003c74e) main_apps_wheel_pane_t1

0xbda9,	// (0x0003c771) list_wheel_apps_pane_g1

0xbdb1,	// (0x0003c779) list_wheel_apps_pane_g2

0xbdb9,	// (0x0003c781) list_wheel_apps_pane_g3

0xbdc3,	// (0x0003c78b) list_wheel_apps_pane_g4

0xbdcd,	// (0x0003c795) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00040499) list_wheel_apps_pane_g

0x7396,	// (0x00037d5e) navi_icon_text_pane

0x9786,	// (0x0003a14e) aid_fill_nsta

0xbdf0,	// (0x0003c7b8) navi_icon_text_pane_g1

0xbdfc,	// (0x0003c7c4) navi_icon_text_pane_t1

0x2cf8,	// (0x000336c0) list_set_graphic_pane_t1_ParamLimits

0x2cf8,	// (0x000336c0) list_set_graphic_pane_t1

0xa7fb,	// (0x0003b1c3) popup_midp_note_alarm_window_t6_ParamLimits

0xa7fb,	// (0x0003b1c3) popup_midp_note_alarm_window_t6

0xa80d,	// (0x0003b1d5) popup_midp_note_alarm_window_t7_ParamLimits

0xa80d,	// (0x0003b1d5) popup_midp_note_alarm_window_t7

0xa81f,	// (0x0003b1e7) popup_midp_note_alarm_window_t8_ParamLimits

0xa81f,	// (0x0003b1e7) popup_midp_note_alarm_window_t8

0xa831,	// (0x0003b1f9) popup_midp_note_alarm_window_t9_ParamLimits

0xa831,	// (0x0003b1f9) popup_midp_note_alarm_window_t9

0xa843,	// (0x0003b20b) popup_midp_note_alarm_window_t10_ParamLimits

0xa843,	// (0x0003b20b) popup_midp_note_alarm_window_t10

0xa855,	// (0x0003b21d) popup_midp_note_alarm_window_t11_ParamLimits

0xa855,	// (0x0003b21d) popup_midp_note_alarm_window_t11

0xa867,	// (0x0003b22f) scroll_pane_cp17_ParamLimits

0xa867,	// (0x0003b22f) scroll_pane_cp17

0x8126,	// (0x00038aee) volume_small_pane_cp_g1

0x858c,	// (0x00038f54) volume_small_pane_cp_g2

0x8595,	// (0x00038f5d) volume_small_pane_cp_g3

0x859e,	// (0x00038f66) volume_small_pane_cp_g4

0x85a7,	// (0x00038f6f) volume_small_pane_cp_g5

0x8556,	// (0x00038f1e) volume_small_pane_cp_g6

0x85b0,	// (0x00038f78) volume_small_pane_cp_g7

0x85b9,	// (0x00038f81) volume_small_pane_cp_g8

0x85c2,	// (0x00038f8a) volume_small_pane_cp_g9

0x85cb,	// (0x00038f93) volume_small_pane_cp_g10

0x75f7,	// (0x00037fbf) midp_ticker_pane_g1_ParamLimits

0x7603,	// (0x00037fcb) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x00040116) midp_ticker_pane_g_ParamLimits

0x760f,	// (0x00037fd7) midp_ticker_pane_t1_ParamLimits

0x979c,	// (0x0003a164) aid_fill_nsta_2

0xa0a4,	// (0x0003aa6c) list_form2_midp_pane

0xb1af,	// (0x0003bb77) midp_editing_number_pane_ParamLimits

0xb1be,	// (0x0003bb86) midp_ticker_pane_ParamLimits

0xbe0e,	// (0x0003c7d6) form2_midp_field_pane

0xbe32,	// (0x0003c7fa) scroll_pane_cp51

0xbe52,	// (0x0003c81a) form2_midp_button_pane_ParamLimits

0xbe52,	// (0x0003c81a) form2_midp_button_pane

0xbe64,	// (0x0003c82c) form2_midp_content_pane_ParamLimits

0xbe64,	// (0x0003c82c) form2_midp_content_pane

0xbe7e,	// (0x0003c846) form2_midp_field_choice_group_pane

0xbe86,	// (0x0003c84e) form2_midp_field_pane_g1

0xbe8e,	// (0x0003c856) form2_midp_field_pane_g2

0xbe96,	// (0x0003c85e) form2_midp_field_pane_g3

0xbe9e,	// (0x0003c866) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000404be) form2_midp_field_pane_g

0xbea6,	// (0x0003c86e) form2_midp_gauge_slider_pane

0xbeae,	// (0x0003c876) form2_midp_gauge_wait_pane

0xbeb6,	// (0x0003c87e) form2_midp_image_pane_ParamLimits

0xbeb6,	// (0x0003c87e) form2_midp_image_pane

0xbed1,	// (0x0003c899) form2_midp_label_pane_ParamLimits

0xbed1,	// (0x0003c899) form2_midp_label_pane

0xbeea,	// (0x0003c8b2) form2_midp_label_pane_cp_ParamLimits

0xbeea,	// (0x0003c8b2) form2_midp_label_pane_cp

0xbf0b,	// (0x0003c8d3) form2_midp_string_pane_ParamLimits

0xbf0b,	// (0x0003c8d3) form2_midp_string_pane

0x4b9b,	// (0x00035563) form2_midp_text_pane_ParamLimits

0x4b9b,	// (0x00035563) form2_midp_text_pane

0xbf1d,	// (0x0003c8e5) form2_midp_time_pane

0xbf2d,	// (0x0003c8f5) input_focus_pane_cp51_ParamLimits

0xbf2d,	// (0x0003c8f5) input_focus_pane_cp51

0xbf45,	// (0x0003c90d) form2_midp_label_pane_t1_ParamLimits

0xbf45,	// (0x0003c90d) form2_midp_label_pane_t1

0x4bb4,	// (0x0003557c) form2_mdip_text_pane_t1_ParamLimits

0x4bb4,	// (0x0003557c) form2_mdip_text_pane_t1

0x4bd2,	// (0x0003559a) form2_midp_time_pane_t1

0xbf8e,	// (0x0003c956) form2_midp_gauge_slider_pane_t1

0xbfa0,	// (0x0003c968) form2_midp_gauge_slider_pane_t2

0xbfb2,	// (0x0003c97a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000404c7) form2_midp_gauge_slider_pane_t

0xbfc4,	// (0x0003c98c) form2_midp_slider_pane

0xbfd0,	// (0x0003c998) form2_midp_gauge_wait_pane_t1

0xbfde,	// (0x0003c9a6) form2_midp_wait_pane_ParamLimits

0xbfde,	// (0x0003c9a6) form2_midp_wait_pane

0xc009,	// (0x0003c9d1) list_single_2graphic_pane_cp4_ParamLimits

0xc009,	// (0x0003c9d1) list_single_2graphic_pane_cp4

0x9dc0,	// (0x0003a788) list_single_midp_graphic_pane_cp_ParamLimits

0x9dc0,	// (0x0003a788) list_single_midp_graphic_pane_cp

0x22c4,	// (0x00032c8c) list_highlight_pane_cp20

0xc031,	// (0x0003c9f9) list_single_2graphic_pane_g1_cp4

0xb639,	// (0x0003c001) list_single_2graphic_pane_g2_cp4

0xc039,	// (0x0003ca01) list_single_2graphic_pane_t1_cp4

0x2320,	// (0x00032ce8) list_highlight_pane_cp21

0xc048,	// (0x0003ca10) list_single_midp_graphic_pane_g4_cp

0xc057,	// (0x0003ca1f) list_single_midp_graphic_pane_t1_cp

0xc06c,	// (0x0003ca34) form2_mdip_string_pane_t1_ParamLimits

0xc06c,	// (0x0003ca34) form2_mdip_string_pane_t1

0x22c4,	// (0x00032c8c) bg_wml_button_pane_cp2

0x22ba,	// (0x00032c82) form2_midp_image_pane_g1

0x46e6,	// (0x000350ae) list_double_large_graphic_pane_g5_ParamLimits

0x46e6,	// (0x000350ae) list_double_large_graphic_pane_g5

0x751e,	// (0x00037ee6) midp_form_pane_ParamLimits

0x2320,	// (0x00032ce8) main_apps_wheel_pane_ParamLimits

0x7d9f,	// (0x00038767) popup_preview_window_ParamLimits

0x7d9f,	// (0x00038767) popup_preview_window

0x7f5a,	// (0x00038922) popup_touch_info_window_ParamLimits

0x7f5a,	// (0x00038922) popup_touch_info_window

0x7f78,	// (0x00038940) popup_touch_menu_window_ParamLimits

0x7f78,	// (0x00038940) popup_touch_menu_window

0x22b0,	// (0x00032c78) bg_popup_sub_pane_cp6

0xc173,	// (0x0003cb3b) list_touch_menu_pane

0xc17b,	// (0x0003cb43) list_single_touch_menu_pane_ParamLimits

0xc17b,	// (0x0003cb43) list_single_touch_menu_pane

0xc191,	// (0x0003cb59) list_single_touch_menu_pane_t1

0x2320,	// (0x00032ce8) bg_popup_sub_pane_cp7_ParamLimits

0x2320,	// (0x00032ce8) bg_popup_sub_pane_cp7

0xc19f,	// (0x0003cb67) heading_sub_pane

0xc1a7,	// (0x0003cb6f) list_touch_info_pane_ParamLimits

0xc1a7,	// (0x0003cb6f) list_touch_info_pane

0xc1b6,	// (0x0003cb7e) list_single_touch_info_pane_ParamLimits

0xc1b6,	// (0x0003cb7e) list_single_touch_info_pane

0xc1c8,	// (0x0003cb90) list_single_touch_info_pane_t1

0xc1d6,	// (0x0003cb9e) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000404d5) list_single_touch_info_pane_t

0x7516,	// (0x00037ede) bg_popup_heading_pane_cp

0xc1e4,	// (0x0003cbac) heading_sub_pane_t1

0x9ce5,	// (0x0003a6ad) bg_popup_preview_window_pane_cp_ParamLimits

0x9ce5,	// (0x0003a6ad) bg_popup_preview_window_pane_cp

0xc19f,	// (0x0003cb67) heading_preview_pane

0xc1a7,	// (0x0003cb6f) list_preview_pane_ParamLimits

0xc1a7,	// (0x0003cb6f) list_preview_pane

0xc1f2,	// (0x0003cbba) popup_preview_window_g1

0xc1b6,	// (0x0003cb7e) list_single_preview_pane_ParamLimits

0xc1b6,	// (0x0003cb7e) list_single_preview_pane

0xc1fa,	// (0x0003cbc2) list_single_preview_pane_g1

0xc202,	// (0x0003cbca) list_single_preview_pane_t1

0xc1c8,	// (0x0003cb90) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000404da) list_single_preview_pane_t

0xc210,	// (0x0003cbd8) bg_popup_heading_pane_cp2_ParamLimits

0xc210,	// (0x0003cbd8) bg_popup_heading_pane_cp2

0xc226,	// (0x0003cbee) heading_preview_pane_g1

0xc22e,	// (0x0003cbf6) heading_preview_pane_t1_ParamLimits

0xc22e,	// (0x0003cbf6) heading_preview_pane_t1

0x2373,	// (0x00032d3b) soft_indicator_pane_t1_ParamLimits

0x264e,	// (0x00033016) scroll_pane_ParamLimits

0x29e1,	// (0x000333a9) scroll_sc2_left_pane

0x29d8,	// (0x000333a0) scroll_sc2_right_pane

0x2a00,	// (0x000333c8) scroll_bg_pane_g1_ParamLimits

0x2a15,	// (0x000333dd) scroll_bg_pane_g2_ParamLimits

0x2a2d,	// (0x000333f5) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x000400a1) scroll_bg_pane_g_ParamLimits

0x2a00,	// (0x000333c8) scroll_handle_pane_g1_ParamLimits

0x2a42,	// (0x0003340a) scroll_handle_pane_g2_ParamLimits

0x2a2d,	// (0x000333f5) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x000400a8) scroll_handle_pane_g_ParamLimits

0x7a22,	// (0x000383ea) popup_choice_list_window_ParamLimits

0x7a22,	// (0x000383ea) popup_choice_list_window

0x9bbb,	// (0x0003a583) choice_list_pane

0x9c3d,	// (0x0003a605) cell_toolbar_pane_t1

0x9c65,	// (0x0003a62d) toolbar_button_pane_ParamLimits

0xad21,	// (0x0003b6e9) ai_gene_pane_1_t2_ParamLimits

0xad21,	// (0x0003b6e9) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x000402cb) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x000402cb) ai_gene_pane_1_t

0xc24b,	// (0x0003cc13) scroll_sc2_left_pane_g1

0xc24b,	// (0x0003cc13) scroll_sc2_right_pane_g1

0x974a,	// (0x0003a112) bg_popup_sub_pane_cp10

0xc255,	// (0x0003cc1d) list_choice_list_pane

0xc26e,	// (0x0003cc36) list_single_choice_list_pane_ParamLimits

0xc26e,	// (0x0003cc36) list_single_choice_list_pane

0xc281,	// (0x0003cc49) list_single_choice_list_pane_g1

0x6b64,	// (0x0003752c) list_single_choice_list_pane_t1_ParamLimits

0x6b64,	// (0x0003752c) list_single_choice_list_pane_t1

0xc289,	// (0x0003cc51) choice_list_pane_g1

0xc291,	// (0x0003cc59) choice_list_pane_t1

0x22b0,	// (0x00032c78) input_focus_pane_cp11

0x294d,	// (0x00033315) title_pane_stacon_g2_ParamLimits

0x294d,	// (0x00033315) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x00040087) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00040087) title_pane_stacon_g

0x7516,	// (0x00037ede) cursor_press_pane

0x7aca,	// (0x00038492) popup_fep_hwr_window_ParamLimits

0x7aca,	// (0x00038492) popup_fep_hwr_window

0x7b42,	// (0x0003850a) popup_fep_vkb_window_ParamLimits

0x7b42,	// (0x0003850a) popup_fep_vkb_window

0xc29f,	// (0x0003cc67) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00040503) fep_vkb_side_pane_g_ParamLimits

0x860d,	// (0x00038fd5) fep_hwr_candidate_pane_ParamLimits

0x860d,	// (0x00038fd5) fep_hwr_candidate_pane

0x8637,	// (0x00038fff) fep_hwr_side_pane_ParamLimits

0x8637,	// (0x00038fff) fep_hwr_side_pane

0x8657,	// (0x0003901f) fep_hwr_top_pane_ParamLimits

0x8657,	// (0x0003901f) fep_hwr_top_pane

0x866f,	// (0x00039037) fep_hwr_write_pane_ParamLimits

0x866f,	// (0x00039037) fep_hwr_write_pane

0xfb3b,	// (0x00040503) fep_vkb_side_pane_g

0xc2a7,	// (0x0003cc6f) fep_hwr_top_pane_g1

0xc2b9,	// (0x0003cc81) fep_hwr_top_pane_g2

0x86a9,	// (0x00039071) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000404df) fep_hwr_top_pane_g

0x86be,	// (0x00039086) fep_hwr_top_text_pane

0x2b05,	// (0x000334cd) fep_hwr_top_text_pane_g1

0xc2ef,	// (0x0003ccb7) fep_hwr_top_text_pane_t1

0x87b4,	// (0x0003917c) fep_hwr_candidate_pane_g1

0xc534,	// (0x0003cefc) fep_vkb_keypad_pane_g3_ParamLimits

0xc534,	// (0x0003cefc) fep_vkb_keypad_pane_g3

0xc55c,	// (0x0003cf24) fep_vkb_keypad_pane_g4_ParamLimits

0xc55c,	// (0x0003cf24) fep_vkb_keypad_pane_g4

0xc5cb,	// (0x0003cf93) fep_vkb_bottom_pane_g2_ParamLimits

0xc5cb,	// (0x0003cf93) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0004050a) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0004050a) fep_vkb_bottom_pane_g

0xc24b,	// (0x0003cc13) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00040514) cell_vkb_side_pane_g

0xc656,	// (0x0003d01e) cell_vkb_side_pane_t1

0xc664,	// (0x0003d02c) cell_vkb_side_pane_t1_copy1

0xc24b,	// (0x0003cc13) bg_fep_vkb_candidate_pane_g2

0xc790,	// (0x0003d158) cell_vkb_candidate_pane_ParamLimits

0xc2fd,	// (0x0003ccc5) aid_size_cell_vkb_ParamLimits

0xc2fd,	// (0x0003ccc5) aid_size_cell_vkb

0xc790,	// (0x0003d158) cell_vkb_candidate_pane

0x87db,	// (0x000391a3) bg_popup_fep_shadow_pane_g1

0xc38b,	// (0x0003cd53) fep_vkb_bottom_pane_ParamLimits

0xc38b,	// (0x0003cd53) fep_vkb_bottom_pane

0xc3c1,	// (0x0003cd89) fep_vkb_candidate_pane_ParamLimits

0xc3c1,	// (0x0003cd89) fep_vkb_candidate_pane

0xc3dd,	// (0x0003cda5) fep_vkb_keypad_pane_ParamLimits

0xc3dd,	// (0x0003cda5) fep_vkb_keypad_pane

0xc41c,	// (0x0003cde4) fep_vkb_side_pane_ParamLimits

0xc41c,	// (0x0003cde4) fep_vkb_side_pane

0xc458,	// (0x0003ce20) fep_vkb_top_pane_ParamLimits

0xc458,	// (0x0003ce20) fep_vkb_top_pane

0xc48d,	// (0x0003ce55) fep_vkb_top_pane_g1_ParamLimits

0xc48d,	// (0x0003ce55) fep_vkb_top_pane_g1

0xc49c,	// (0x0003ce64) fep_vkb_top_pane_g2_ParamLimits

0xc49c,	// (0x0003ce64) fep_vkb_top_pane_g2

0xc4ab,	// (0x0003ce73) fep_vkb_top_pane_g3_ParamLimits

0xc4ab,	// (0x0003ce73) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000404fa) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000404fa) fep_vkb_top_pane_g

0xc4c9,	// (0x0003ce91) fep_vkb_top_text_pane_ParamLimits

0xc4c9,	// (0x0003ce91) fep_vkb_top_text_pane

0xc4da,	// (0x0003cea2) fep_vkb_side_pane_g1_ParamLimits

0xc4da,	// (0x0003cea2) fep_vkb_side_pane_g1

0xc523,	// (0x0003ceeb) grid_vkb_side_pane_ParamLimits

0xc523,	// (0x0003ceeb) grid_vkb_side_pane

0x87e3,	// (0x000391ab) bg_popup_fep_shadow_pane_g2

0x87ec,	// (0x000391b4) bg_popup_fep_shadow_pane_g3

0x87f4,	// (0x000391bc) bg_popup_fep_shadow_pane_g4

0x87fd,	// (0x000391c5) bg_popup_fep_shadow_pane_g5

0x8807,	// (0x000391cf) bg_popup_fep_shadow_pane_g6

0x880f,	// (0x000391d7) bg_popup_fep_shadow_pane_g7

0x2742,	// (0x0003310a) bg_popup_fep_shadow_pane_g8

0xc57a,	// (0x0003cf42) grid_vkb_keypad_number_pane_ParamLimits

0xc57a,	// (0x0003cf42) grid_vkb_keypad_number_pane

0xc58a,	// (0x0003cf52) grid_vkb_keypad_pane_ParamLimits

0xc58a,	// (0x0003cf52) grid_vkb_keypad_pane

0xc5b0,	// (0x0003cf78) fep_vkb_bottom_pane_g1_ParamLimits

0xc5b0,	// (0x0003cf78) fep_vkb_bottom_pane_g1

0xc5d9,	// (0x0003cfa1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5d9,	// (0x0003cfa1) grid_vkb_keypad_bottom_left_pane

0xc5ee,	// (0x0003cfb6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5ee,	// (0x0003cfb6) grid_vkb_keypad_bottom_right_pane

0xc603,	// (0x0003cfcb) fep_vkb_top_text_pane_g1

0xc61e,	// (0x0003cfe6) fep_vkb_top_text_pane_t1

0xc633,	// (0x0003cffb) cell_vkb_side_pane_ParamLimits

0xc633,	// (0x0003cffb) cell_vkb_side_pane

0xc24b,	// (0x0003cc13) cell_vkb_side_pane_g1

0xc672,	// (0x0003d03a) cell_vkb_keypad_pane_ParamLimits

0xc672,	// (0x0003d03a) cell_vkb_keypad_pane

0xc6e7,	// (0x0003d0af) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00040527) bg_popup_fep_shadow_pane_g

0x8821,	// (0x000391e9) cell_hwr_side_pane_g1

0x8821,	// (0x000391e9) cell_hwr_side_pane_g2

0xc6f1,	// (0x0003d0b9) cell_vkb_keypad_pane_t1

0xc6ff,	// (0x0003d0c7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6ff,	// (0x0003d0c7) cell_vkb_keypad_bottom_left_pane

0xc71c,	// (0x0003d0e4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc71c,	// (0x0003d0e4) cell_vkb_keypad_bottom_right_pane

0xc24b,	// (0x0003cc13) cell_vkb_keypad_bottom_left_pane_g1

0xc24b,	// (0x0003cc13) cell_vkb_keypad_bottom_right_pane_g1

0xc755,	// (0x0003d11d) cell_vkb_keypad_number_pane_ParamLimits

0xc755,	// (0x0003d11d) cell_vkb_keypad_number_pane

0xc774,	// (0x0003d13c) cell_vkb_keypad_number_pane_g1

0xc77e,	// (0x0003d146) cell_vkb_keypad_number_pane_g2

0xc787,	// (0x0003d14f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00040519) cell_vkb_keypad_number_pane_g

0xc6f1,	// (0x0003d0b9) cell_vkb_keypad_number_pane_t1

0xc7ab,	// (0x0003d173) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0004053a) cell_hwr_side_pane_g

0xc7c4,	// (0x0003d18c) cell_hwr_side_pane_t1

0x882b,	// (0x000391f3) cell_hwr_side_pane_t1_copy1

0x8839,	// (0x00039201) cell_hwr_candidate_pane_g1

0x8868,	// (0x00039230) cell_hwr_candidate_pane_t1

0xc24b,	// (0x0003cc13) cell_vkb_candidate_pane_g2

0xc808,	// (0x0003d1d0) cell_vkb_candidate_pane_t1

0x85d4,	// (0x00038f9c) bg_popup_fep_shadow_pane_ParamLimits

0x85d4,	// (0x00038f9c) bg_popup_fep_shadow_pane

0x8689,	// (0x00039051) bg_fep_hwr_top_pane_g4

0xc2cb,	// (0x0003cc93) bg_hwr_side_pane_g1_ParamLimits

0xc2cb,	// (0x0003cc93) bg_hwr_side_pane_g1

0x86fa,	// (0x000390c2) cell_hwr_side_pane_ParamLimits

0x86fa,	// (0x000390c2) cell_hwr_side_pane

0x8735,	// (0x000390fd) fep_hwr_write_pane_g1_ParamLimits

0x8735,	// (0x000390fd) fep_hwr_write_pane_g1

0x8742,	// (0x0003910a) fep_hwr_write_pane_g2_ParamLimits

0x8742,	// (0x0003910a) fep_hwr_write_pane_g2

0x874f,	// (0x00039117) fep_hwr_write_pane_g3_ParamLimits

0x874f,	// (0x00039117) fep_hwr_write_pane_g3

0x875d,	// (0x00039125) fep_hwr_write_pane_g4_ParamLimits

0x875d,	// (0x00039125) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000404e6) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000404e6) fep_hwr_write_pane_g

0x8689,	// (0x00039051) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x8689,	// (0x00039051) bg_fep_hwr_candidate_pane_g2

0x8772,	// (0x0003913a) cell_hwr_candidate_pane_ParamLimits

0x8772,	// (0x0003913a) cell_hwr_candidate_pane

0x87b4,	// (0x0003917c) fep_hwr_candidate_pane_g1_ParamLimits

0xc32b,	// (0x0003ccf3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc32b,	// (0x0003ccf3) bg_popup_fep_shadow_pane_cp2

0xc4bb,	// (0x0003ce83) fep_vkb_top_pane_g4_ParamLimits

0xc4bb,	// (0x0003ce83) fep_vkb_top_pane_g4

0xc501,	// (0x0003cec9) fep_vkb_side_pane_g2_ParamLimits

0xc501,	// (0x0003cec9) fep_vkb_side_pane_g2

0x6805,	// (0x000371cd) list_setting_pane_t4_ParamLimits

0x6805,	// (0x000371cd) list_setting_pane_t4

0x6897,	// (0x0003725f) list_setting_number_pane_t5_ParamLimits

0x6897,	// (0x0003725f) list_setting_number_pane_t5

0x6eec,	// (0x000378b4) list_double_heading_pane_cp2_ParamLimits

0x6eec,	// (0x000378b4) list_double_heading_pane_cp2

0xc816,	// (0x0003d1de) list_double_heading_pane_g1_cp2_ParamLimits

0xc816,	// (0x0003d1de) list_double_heading_pane_g1_cp2

0xc822,	// (0x0003d1ea) list_double_heading_pane_g2_cp2_ParamLimits

0xc822,	// (0x0003d1ea) list_double_heading_pane_g2_cp2

0xc836,	// (0x0003d1fe) list_double_heading_pane_t1_cp2_ParamLimits

0xc836,	// (0x0003d1fe) list_double_heading_pane_t1_cp2

0xc84c,	// (0x0003d214) list_double_heading_pane_t2_cp2_ParamLimits

0xc84c,	// (0x0003d214) list_double_heading_pane_t2_cp2

0x22a8,	// (0x00032c70) aid_value_unit2

0x5e12,	// (0x000367da) popup_preview_fixed_window

0x244a,	// (0x00032e12) bg_popup_preview_window_pane_cp02

0xc85e,	// (0x0003d226) list_preview_fixed_pane

0xc8a4,	// (0x0003d26c) list_empty_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_empty_pane_fp

0xc8a4,	// (0x0003d26c) list_single_cale_day_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_cale_day_pane_fp

0xc8a4,	// (0x0003d26c) list_single_graphic_heading_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_graphic_heading_pane_fp

0xc8a4,	// (0x0003d26c) list_single_graphic_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_graphic_pane_fp

0xc8a4,	// (0x0003d26c) list_single_heading_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_heading_pane_fp

0xc8a4,	// (0x0003d26c) list_single_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_pane_fp

0xc8ba,	// (0x0003d282) list_single_pane_fp_g1_ParamLimits

0xc8ba,	// (0x0003d282) list_single_pane_fp_g1

0x4be5,	// (0x000355ad) list_single_pane_fp_g2_ParamLimits

0x4be5,	// (0x000355ad) list_single_pane_fp_g2

0x4bf1,	// (0x000355b9) list_single_pane_fp_g3_ParamLimits

0x4bf1,	// (0x000355b9) list_single_pane_fp_g3

0xc8c6,	// (0x0003d28e) list_single_pane_fp_g4_ParamLimits

0xc8c6,	// (0x0003d28e) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0004054d) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0004054d) list_single_pane_fp_g

0x4c05,	// (0x000355cd) list_single_pane_fp_t1_ParamLimits

0x4c05,	// (0x000355cd) list_single_pane_fp_t1

0x4c1c,	// (0x000355e4) list_single_graphic_pane_fp_g1_ParamLimits

0x4c1c,	// (0x000355e4) list_single_graphic_pane_fp_g1

0xc8ba,	// (0x0003d282) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ba,	// (0x0003d282) list_single_graphic_pane_fp_g2

0x4be5,	// (0x000355ad) list_single_graphic_pane_fp_g3_ParamLimits

0x4be5,	// (0x000355ad) list_single_graphic_pane_fp_g3

0x4bf1,	// (0x000355b9) list_single_graphic_pane_fp_g4_ParamLimits

0x4bf1,	// (0x000355b9) list_single_graphic_pane_fp_g4

0xc8c6,	// (0x0003d28e) list_single_graphic_pane_fp_g5_ParamLimits

0xc8c6,	// (0x0003d28e) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00040556) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00040556) list_single_graphic_pane_fp_g

0x4c28,	// (0x000355f0) list_single_graphic_pane_fp_t1_ParamLimits

0x4c28,	// (0x000355f0) list_single_graphic_pane_fp_t1

0x4c1c,	// (0x000355e4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c1c,	// (0x000355e4) list_single_graphic_heading_pane_fp_g1

0xc8ba,	// (0x0003d282) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ba,	// (0x0003d282) list_single_graphic_heading_pane_fp_g2

0x4be5,	// (0x000355ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4be5,	// (0x000355ad) list_single_graphic_heading_pane_fp_g3

0x4bf1,	// (0x000355b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4bf1,	// (0x000355b9) list_single_graphic_heading_pane_fp_g4

0xc8c6,	// (0x0003d28e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8c6,	// (0x0003d28e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00040556) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00040556) list_single_graphic_heading_pane_fp_g

0x4c3e,	// (0x00035606) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c3e,	// (0x00035606) list_single_graphic_heading_pane_fp_t1

0x4c54,	// (0x0003561c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c54,	// (0x0003561c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00040561) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00040561) list_single_graphic_heading_pane_fp_t

0x4c66,	// (0x0003562e) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c66,	// (0x0003562e) list_single_cale_day_pane_fp_g1

0xc8d2,	// (0x0003d29a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8d2,	// (0x0003d29a) list_single_cale_day_pane_fp_g2

0x4c9e,	// (0x00035666) list_single_cale_day_pane_fp_g3_ParamLimits

0x4c9e,	// (0x00035666) list_single_cale_day_pane_fp_g3

0x4cc6,	// (0x0003568e) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cc6,	// (0x0003568e) list_single_cale_day_pane_fp_g4

0x4cea,	// (0x000356b2) list_single_cale_day_pane_fp_g5_ParamLimits

0x4cea,	// (0x000356b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00040566) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00040566) list_single_cale_day_pane_fp_g

0x4d0e,	// (0x000356d6) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d0e,	// (0x000356d6) list_single_cale_day_pane_fp_t1

0x4d34,	// (0x000356fc) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d34,	// (0x000356fc) list_single_cale_day_pane_fp_t2

0x4d4d,	// (0x00035715) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d4d,	// (0x00035715) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00040571) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00040571) list_single_cale_day_pane_fp_t

0xc8ba,	// (0x0003d282) list_empty_pane_fp_g1_ParamLimits

0xc8ba,	// (0x0003d282) list_empty_pane_fp_g1

0x4d66,	// (0x0003572e) list_empty_pane_fp_t1

0x4d74,	// (0x0003573c) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00040578) list_empty_pane_fp_t

0xc8ba,	// (0x0003d282) list_single_heading_pane_fp_g1_ParamLimits

0xc8ba,	// (0x0003d282) list_single_heading_pane_fp_g1

0x4be5,	// (0x000355ad) list_single_heading_pane_fp_g2_ParamLimits

0x4be5,	// (0x000355ad) list_single_heading_pane_fp_g2

0x4bf1,	// (0x000355b9) list_single_heading_pane_fp_g3_ParamLimits

0x4bf1,	// (0x000355b9) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0004057d) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0004057d) list_single_heading_pane_fp_g

0x4d82,	// (0x0003574a) list_single_heading_pane_fp_t1_ParamLimits

0x4d82,	// (0x0003574a) list_single_heading_pane_fp_t1

0x4d94,	// (0x0003575c) list_single_heading_pane_fp_t2_ParamLimits

0x4d94,	// (0x0003575c) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00040584) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00040584) list_single_heading_pane_fp_t

0x6bbc,	// (0x00037584) aid_size_cell_fast

0x242d,	// (0x00032df5) soft_indicator_pane_cp1_t1

0x6bc5,	// (0x0003758d) cell_app_pane_cp2_ParamLimits

0x6bc5,	// (0x0003758d) cell_app_pane_cp2

0x85f6,	// (0x00038fbe) fep_hwr_candidate_drop_down_list_pane

0x87ce,	// (0x00039196) fep_hwr_candidate_pane_g3_ParamLimits

0x87ce,	// (0x00039196) fep_hwr_candidate_pane_g3

0x3deb,	// (0x000347b3) fep_hwr_candidate_pane_g4_ParamLimits

0x3deb,	// (0x000347b3) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000404f3) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000404f3) fep_hwr_candidate_pane_g

0xc3b0,	// (0x0003cd78) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3b0,	// (0x0003cd78) fep_vkb_candidate_drop_down_list_pane

0xc7b3,	// (0x0003d17b) fep_vkb_candidate_pane_g3

0xc7bb,	// (0x0003d183) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00040520) fep_vkb_candidate_pane_g

0x8839,	// (0x00039201) cell_hwr_candidate_pane_g1_ParamLimits

0x8847,	// (0x0003920f) cell_hwr_candidate_pane_g3_ParamLimits

0x8847,	// (0x0003920f) cell_hwr_candidate_pane_g3

0xd9bc,	// (0x0003e384) cell_hwr_candidate_pane_g4_ParamLimits

0xd9bc,	// (0x0003e384) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0004053f) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0004053f) cell_hwr_candidate_pane_g

0xc7d2,	// (0x0003d19a) cell_vkb_candidate_pane_g3_ParamLimits

0xc7d2,	// (0x0003d19a) cell_vkb_candidate_pane_g3

0xc7ed,	// (0x0003d1b5) cell_vkb_candidate_pane_g4_ParamLimits

0xc7ed,	// (0x0003d1b5) cell_vkb_candidate_pane_g4

0xc8de,	// (0x0003d2a6) cell_app_pane_cp2_g1_ParamLimits

0xc8de,	// (0x0003d2a6) cell_app_pane_cp2_g1

0xc8fc,	// (0x0003d2c4) cell_app_pane_cp2_g2_ParamLimits

0xc8fc,	// (0x0003d2c4) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00040589) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00040589) cell_app_pane_cp2_g

0xc908,	// (0x0003d2d0) cell_app_pane_cp2_t1_ParamLimits

0xc908,	// (0x0003d2d0) cell_app_pane_cp2_t1

0x26d2,	// (0x0003309a) grid_highlight_pane_cp1_ParamLimits

0x26d2,	// (0x0003309a) grid_highlight_pane_cp1

0x8886,	// (0x0003924e) cell_hwr_candidate_pane_cp1_ParamLimits

0x8886,	// (0x0003924e) cell_hwr_candidate_pane_cp1

0x8839,	// (0x00039201) fep_hwr_candidate_drop_down_list_pane_g1

0x88a5,	// (0x0003926d) fep_hwr_candidate_drop_down_list_pane_g2

0x88b2,	// (0x0003927a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0004058e) fep_hwr_candidate_drop_down_list_pane_g

0x88bf,	// (0x00039287) fep_hwr_candidate_drop_down_list_scroll_pane

0x88c8,	// (0x00039290) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x88c8,	// (0x00039290) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x88d5,	// (0x0003929d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x88d5,	// (0x0003929d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x88e2,	// (0x000392aa) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x88e2,	// (0x000392aa) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x88ef,	// (0x000392b7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x88ef,	// (0x000392b7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x890a,	// (0x000392d2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x890a,	// (0x000392d2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8925,	// (0x000392ed) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8925,	// (0x000392ed) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8940,	// (0x00039308) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8940,	// (0x00039308) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x895b,	// (0x00039323) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x895b,	// (0x00039323) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00040595) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00040595) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc91a,	// (0x0003d2e2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc91a,	// (0x0003d2e2) cell_vkb_candidate_pane_cp1

0xc4bb,	// (0x0003ce83) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4bb,	// (0x0003ce83) fep_vkb_candidate_drop_down_list_pane_g1

0xc93a,	// (0x0003d302) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc93a,	// (0x0003d302) fep_vkb_candidate_drop_down_list_pane_g2

0xc947,	// (0x0003d30f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc947,	// (0x0003d30f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000405a6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x000405a6) fep_vkb_candidate_drop_down_list_pane_g

0xc954,	// (0x0003d31c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc954,	// (0x0003d31c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc961,	// (0x0003d329) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc961,	// (0x0003d329) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc96e,	// (0x0003d336) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc96e,	// (0x0003d336) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc97a,	// (0x0003d342) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc97a,	// (0x0003d342) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc986,	// (0x0003d34e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc986,	// (0x0003d34e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9a7,	// (0x0003d36f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9a7,	// (0x0003d36f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9c8,	// (0x0003d390) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9c8,	// (0x0003d390) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9e9,	// (0x0003d3b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9e9,	// (0x0003d3b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca0a,	// (0x0003d3d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca0a,	// (0x0003d3d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000405ad) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000405ad) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5f2c,	// (0x000368f4) title_pane_g1_ParamLimits

0x5f39,	// (0x00036901) title_pane_g2_ParamLimits

0xf54e,	// (0x0003ff16) title_pane_g_ParamLimits

0x2afd,	// (0x000334c5) aid_call2_pane

0x2af5,	// (0x000334bd) aid_call_pane

0x2b05,	// (0x000334cd) popup_clock_analogue_window_g1

0x2b05,	// (0x000334cd) popup_clock_analogue_window_g2

0x6ecd,	// (0x00037895) popup_clock_analogue_window_g3

0x6ed6,	// (0x0003789e) popup_clock_analogue_window_g4

0x22ba,	// (0x00032c82) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x000400b6) popup_clock_analogue_window_g

0x6ede,	// (0x000378a6) popup_clock_analogue_window_t1

0x6f16,	// (0x000378de) clock_digital_number_pane_ParamLimits

0x6f16,	// (0x000378de) clock_digital_number_pane

0x6f22,	// (0x000378ea) clock_digital_number_pane_cp02_ParamLimits

0x6f22,	// (0x000378ea) clock_digital_number_pane_cp02

0x6f2e,	// (0x000378f6) clock_digital_number_pane_cp03_ParamLimits

0x6f2e,	// (0x000378f6) clock_digital_number_pane_cp03

0x6f3a,	// (0x00037902) clock_digital_number_pane_cp04_ParamLimits

0x6f3a,	// (0x00037902) clock_digital_number_pane_cp04

0x6f46,	// (0x0003790e) clock_digital_separator_pane_ParamLimits

0x6f46,	// (0x0003790e) clock_digital_separator_pane

0x6f52,	// (0x0003791a) popup_clock_digital_window_t1_ParamLimits

0x6f52,	// (0x0003791a) popup_clock_digital_window_t1

0x22ba,	// (0x00032c82) clock_digital_number_pane_g1

0x22ba,	// (0x00032c82) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x000400c1) clock_digital_number_pane_g

0x22ba,	// (0x00032c82) clock_digital_separator_pane_g1

0x22ba,	// (0x00032c82) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x000400c1) clock_digital_separator_pane_g

0x9786,	// (0x0003a14e) aid_fill_nsta_ParamLimits

0x98d2,	// (0x0003a29a) indicator_nsta_pane_ParamLimits

0x9a4b,	// (0x0003a413) popup_clock_analogue_window

0x9a4b,	// (0x0003a413) popup_clock_digital_window

0x2320,	// (0x00032ce8) grid_indicator_nsta_pane_ParamLimits

0xbc55,	// (0x0003c61d) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00040473) clock_nsta_pane_t

0x6df8,	// (0x000377c0) aid_size_max_handle

0x6e02,	// (0x000377ca) aid_size_min_handle

0x7516,	// (0x00037ede) editor_scroll_pane

0xca25,	// (0x0003d3ed) ex_editor_pane

0x27f1,	// (0x000331b9) scroll_pane_cp13

0x267a,	// (0x00033042) scroll_pane_cp14

0x2b34,	// (0x000334fc) scroll_pane_cp36

0x6f00,	// (0x000378c8) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f00,	// (0x000378c8) list_single_graphic_hl_pane_cp2

0xb22c,	// (0x0003bbf4) list_single_graphic_hl_pane_ParamLimits

0xb22c,	// (0x0003bbf4) list_single_graphic_hl_pane

0xca2d,	// (0x0003d3f5) aid_size_min_hl_cp1

0xca36,	// (0x0003d3fe) list_highlight_pane_cp34_ParamLimits

0xca36,	// (0x0003d3fe) list_highlight_pane_cp34

0xca47,	// (0x0003d40f) list_single_graphic_hl_pane_g1_ParamLimits

0xca47,	// (0x0003d40f) list_single_graphic_hl_pane_g1

0x8976,	// (0x0003933e) list_single_graphic_hl_pane_g2_ParamLimits

0x8976,	// (0x0003933e) list_single_graphic_hl_pane_g2

0x8976,	// (0x0003933e) list_single_graphic_hl_pane_g3_ParamLimits

0x8976,	// (0x0003933e) list_single_graphic_hl_pane_g3

0x8982,	// (0x0003934a) list_single_graphic_hl_pane_g4_ParamLimits

0x8982,	// (0x0003934a) list_single_graphic_hl_pane_g4

0x898e,	// (0x00039356) list_single_graphic_hl_pane_g5_ParamLimits

0x898e,	// (0x00039356) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x000405be) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x000405be) list_single_graphic_hl_pane_g

0x89a2,	// (0x0003936a) list_single_graphic_hl_pane_t1_ParamLimits

0x89a2,	// (0x0003936a) list_single_graphic_hl_pane_t1

0xca54,	// (0x0003d41c) aid_size_min_hl_cp2

0xca5d,	// (0x0003d425) list_highlight_pane_cp34_cp2_ParamLimits

0xca5d,	// (0x0003d425) list_highlight_pane_cp34_cp2

0xca47,	// (0x0003d40f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca47,	// (0x0003d40f) list_single_graphic_hl_pane_g1_cp2

0xca6a,	// (0x0003d432) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca6a,	// (0x0003d432) list_single_graphic_hl_pane_g2_cp2

0xca76,	// (0x0003d43e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca76,	// (0x0003d43e) list_single_graphic_hl_pane_g3_cp2

0x744f,	// (0x00037e17) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x744f,	// (0x00037e17) list_single_graphic_hl_pane_g4_cp2

0xca84,	// (0x0003d44c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca84,	// (0x0003d44c) list_single_graphic_hl_pane_g5_cp2

0x78de,	// (0x000382a6) control_pane_g4_ParamLimits

0x78de,	// (0x000382a6) control_pane_g4

0x974a,	// (0x0003a112) bg_popup_sub_pane_cp10_ParamLimits

0xc255,	// (0x0003cc1d) list_choice_list_pane_ParamLimits

0xc264,	// (0x0003cc2c) scroll_pane_cp23

0x244a,	// (0x00032e12) bg_popup_preview_window_pane_cp02_ParamLimits

0xc85e,	// (0x0003d226) list_preview_fixed_pane_ParamLimits

0xc874,	// (0x0003d23c) list_preview_fixed_pane_cp_ParamLimits

0xc874,	// (0x0003d23c) list_preview_fixed_pane_cp

0xc880,	// (0x0003d248) popup_preview_fixed_window_g1_ParamLimits

0xc880,	// (0x0003d248) popup_preview_fixed_window_g1

0xc88c,	// (0x0003d254) popup_preview_fixed_window_g2_ParamLimits

0xc88c,	// (0x0003d254) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00040546) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00040546) popup_preview_fixed_window_g

0x6cd4,	// (0x0003769c) aid_navi_side_left_pane_ParamLimits

0x6ce9,	// (0x000376b1) aid_navi_side_right_pane_ParamLimits

0x6d01,	// (0x000376c9) navi_icon_pane_stacon_ParamLimits

0x6d15,	// (0x000376dd) navi_navi_pane_stacon_ParamLimits

0x6d01,	// (0x000376c9) navi_text_pane_stacon_ParamLimits

0x5ce1,	// (0x000366a9) main_text_info_pane

0xcaae,	// (0x0003d476) listscroll_text_info_pane

0xcab6,	// (0x0003d47e) list_text_info_pane_ParamLimits

0xcab6,	// (0x0003d47e) list_text_info_pane

0xcac5,	// (0x0003d48d) scroll_pane_cp24_ParamLimits

0xcac5,	// (0x0003d48d) scroll_pane_cp24

0xcae3,	// (0x0003d4ab) list_text_info_pane_t1_ParamLimits

0xcae3,	// (0x0003d4ab) list_text_info_pane_t1

0x7a3e,	// (0x00038406) popup_fast_swap2_window_ParamLimits

0x7a3e,	// (0x00038406) popup_fast_swap2_window

0xcb17,	// (0x0003d4df) aid_size_cell_fast2

0x22b0,	// (0x00032c78) bg_popup_window_pane_cp17

0xa0d8,	// (0x0003aaa0) heading_pane_cp2

0x257e,	// (0x00032f46) listscroll_fast2_pane

0xcb21,	// (0x0003d4e9) grid_fast2_pane

0xcb2b,	// (0x0003d4f3) listscroll_fast2_pane_g1

0xcb33,	// (0x0003d4fb) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x000405c9) listscroll_fast2_pane_g

0x27f1,	// (0x000331b9) scroll_pane_cp26

0xcb3d,	// (0x0003d505) cell_fast2_pane_ParamLimits

0xcb3d,	// (0x0003d505) cell_fast2_pane

0xcb52,	// (0x0003d51a) cell_fast2_pane_g1

0xcb5b,	// (0x0003d523) cell_fast2_pane_g2

0xcb64,	// (0x0003d52c) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x000405ce) cell_fast2_pane_g

0x25b1,	// (0x00032f79) grid_highlight_pane_cp9

0x7a06,	// (0x000383ce) main_eswt_pane_ParamLimits

0x7a06,	// (0x000383ce) main_eswt_pane

0xcada,	// (0x0003d4a2) list_single_text_info_pane

0xcb6c,	// (0x0003d534) eswt_ctrl_button_pane

0xcb6c,	// (0x0003d534) eswt_ctrl_canvas_pane

0xcb74,	// (0x0003d53c) eswt_ctrl_combo_pane

0xcb6c,	// (0x0003d534) eswt_ctrl_default_pane

0xcb6c,	// (0x0003d534) eswt_ctrl_label_pane

0xcb7c,	// (0x0003d544) eswt_ctrl_wait_pane

0xcb84,	// (0x0003d54c) eswt_shell_pane

0x22b0,	// (0x00032c78) listscroll_eswt_app_pane

0xcba4,	// (0x0003d56c) popup_eswt_tasktip_window_ParamLimits

0xcba4,	// (0x0003d56c) popup_eswt_tasktip_window

0x9ce5,	// (0x0003a6ad) bg_popup_window_pane_cp18

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_ParamLimits

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_ParamLimits

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_ParamLimits

0xcbcf,	// (0x0003d597) eswt_control_pane_g3

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_ParamLimits

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x000405d5) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x000405d5) eswt_control_pane_g

0x26d2,	// (0x0003309a) bg_button_pane_ParamLimits

0x26d2,	// (0x0003309a) bg_button_pane

0x25c6,	// (0x00032f8e) common_borders_pane_copy2_ParamLimits

0x25c6,	// (0x00032f8e) common_borders_pane_copy2

0xcbe9,	// (0x0003d5b1) control_button_pane_g1_ParamLimits

0xcbe9,	// (0x0003d5b1) control_button_pane_g1

0xcbf5,	// (0x0003d5bd) control_button_pane_g2_ParamLimits

0xcbf5,	// (0x0003d5bd) control_button_pane_g2

0xcc01,	// (0x0003d5c9) control_button_pane_g3_ParamLimits

0xcc01,	// (0x0003d5c9) control_button_pane_g3

0x0002,

0xfc16,	// (0x000405de) control_button_pane_g_ParamLimits

0xfc16,	// (0x000405de) control_button_pane_g

0xcc15,	// (0x0003d5dd) control_button_pane_t1

0xcc23,	// (0x0003d5eb) control_button_pane_t2

0x0001,

0xfc1d,	// (0x000405e5) control_button_pane_t

0x9c71,	// (0x0003a639) bg_button_pane_g1

0x9c81,	// (0x0003a649) bg_button_pane_g2

0x9c79,	// (0x0003a641) bg_button_pane_g3

0x9c91,	// (0x0003a659) bg_button_pane_g4

0x9c89,	// (0x0003a651) bg_button_pane_g5

0x9c99,	// (0x0003a661) bg_button_pane_g6

0x9ca1,	// (0x0003a669) bg_button_pane_g7

0x9cb1,	// (0x0003a679) bg_button_pane_g8

0x9ca9,	// (0x0003a671) bg_button_pane_g9

0x0008,

0xf857,	// (0x0004021f) bg_button_pane_g

0xc210,	// (0x0003cbd8) common_borders_pane_ParamLimits

0xc210,	// (0x0003cbd8) common_borders_pane

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy1_ParamLimits

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy1

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy1_ParamLimits

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy1

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy1_ParamLimits

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy1

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy1_ParamLimits

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy1

0xc24b,	// (0x0003cc13) bg_eswt_ctrl_canvas_pane_g1

0xc210,	// (0x0003cbd8) common_borders_pane_cp2_ParamLimits

0xc210,	// (0x0003cbd8) common_borders_pane_cp2

0xc210,	// (0x0003cbd8) common_borders_pane_cp3_ParamLimits

0xc210,	// (0x0003cbd8) common_borders_pane_cp3

0xcc31,	// (0x0003d5f9) separator_horizontal_pane

0xcc39,	// (0x0003d601) separator_vertical_pane

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy2_ParamLimits

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy2

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy2_ParamLimits

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy2

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy2_ParamLimits

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy2

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy2_ParamLimits

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy2

0x22b0,	// (0x00032c78) common_borders_pane_cp4

0xcc42,	// (0x0003d60a) separator_horizontal_pane_g1

0xcc4b,	// (0x0003d613) separator_horizontal_pane_g2

0xcc54,	// (0x0003d61c) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x000405ea) separator_horizontal_pane_g

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy3_ParamLimits

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy3

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy3_ParamLimits

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy3

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy3_ParamLimits

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy3

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy3_ParamLimits

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy3

0x22b0,	// (0x00032c78) common_borders_pane_cp5

0xcc5d,	// (0x0003d625) separator_vertical_pane_g1

0xcc66,	// (0x0003d62e) separator_vertical_pane_g2

0xcc6f,	// (0x0003d637) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x000405f1) separator_vertical_pane_g

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy4_ParamLimits

0xcbb5,	// (0x0003d57d) eswt_control_pane_g1_copy4

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy4_ParamLimits

0xcbc2,	// (0x0003d58a) eswt_control_pane_g2_copy4

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy4_ParamLimits

0xcbcf,	// (0x0003d597) eswt_control_pane_g3_copy4

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy4_ParamLimits

0xcbdc,	// (0x0003d5a4) eswt_control_pane_g4_copy4

0xcc78,	// (0x0003d640) eswt_ctrl_combo_button_pane

0xcc80,	// (0x0003d648) eswt_ctrl_input_pane

0xcc88,	// (0x0003d650) popup_choice_list_window_cp70

0xcc90,	// (0x0003d658) eswt_ctrl_input_pane_t1

0x22b0,	// (0x00032c78) input_focus_pane_cp70

0xc210,	// (0x0003cbd8) bg_button_pane_cp70_ParamLimits

0xc210,	// (0x0003cbd8) bg_button_pane_cp70

0xcc9e,	// (0x0003d666) eswt_ctrl_combo_button_pane_g1

0xcca6,	// (0x0003d66e) wait_bar_pane_cp70

0x9ce5,	// (0x0003a6ad) bg_popup_window_pane_cp70_ParamLimits

0x9ce5,	// (0x0003a6ad) bg_popup_window_pane_cp70

0xccae,	// (0x0003d676) popup_eswt_tasktip_window_t1

0xccc4,	// (0x0003d68c) wait_bar_pane_cp71_ParamLimits

0xccc4,	// (0x0003d68c) wait_bar_pane_cp71

0xccd0,	// (0x0003d698) grid_eswt_app_pane

0x29e1,	// (0x000333a9) scroll_pane_cp70

0xccd9,	// (0x0003d6a1) cell_eswt_app_pane_ParamLimits

0xccd9,	// (0x0003d6a1) cell_eswt_app_pane

0xcd09,	// (0x0003d6d1) cell_eswt_app_pane_g1_ParamLimits

0xcd09,	// (0x0003d6d1) cell_eswt_app_pane_g1

0xcd38,	// (0x0003d700) cell_eswt_app_pane_g2_ParamLimits

0xcd38,	// (0x0003d700) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x000405f8) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x000405f8) cell_eswt_app_pane_g

0xcd5c,	// (0x0003d724) cell_eswt_app_pane_t1_ParamLimits

0xcd5c,	// (0x0003d724) cell_eswt_app_pane_t1

0xcd8e,	// (0x0003d756) grid_highlight_pane_cp70_ParamLimits

0xcd8e,	// (0x0003d756) grid_highlight_pane_cp70

0x73eb,	// (0x00037db3) set_content_pane_g1

0x7866,	// (0x0003822e) status_small_volume_pane

0x89b8,	// (0x00039380) status_small_volume_pane_g1

0x89c0,	// (0x00039388) volume_small2_pane

0x89c9,	// (0x00039391) volume_small2_pane_g1

0x89d2,	// (0x0003939a) volume_small2_pane_g2

0x89db,	// (0x000393a3) volume_small2_pane_g3

0x89e4,	// (0x000393ac) volume_small2_pane_g4

0x89ed,	// (0x000393b5) volume_small2_pane_g5

0x89f6,	// (0x000393be) volume_small2_pane_g6

0x89ff,	// (0x000393c7) volume_small2_pane_g7

0x8a08,	// (0x000393d0) volume_small2_pane_g8

0x8a11,	// (0x000393d9) volume_small2_pane_g9

0x8a1a,	// (0x000393e2) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x000405fd) volume_small2_pane_g

0xc603,	// (0x0003cfcb) fep_vkb_top_text_pane_g1_ParamLimits

0xc61e,	// (0x0003cfe6) fep_vkb_top_text_pane_t1_ParamLimits

0xc898,	// (0x0003d260) popup_preview_fixed_window_g3_ParamLimits

0xc898,	// (0x0003d260) popup_preview_fixed_window_g3

0x7eed,	// (0x000388b5) popup_toolbar_trans_pane

0xb01b,	// (0x0003b9e3) aid_height_set_list_ParamLimits

0xb02c,	// (0x0003b9f4) aid_size_parent_ParamLimits

0x974a,	// (0x0003a112) list_highlight_pane_cp2_ParamLimits

0x73eb,	// (0x00037db3) set_content_pane_g1_ParamLimits

0x8433,	// (0x00038dfb) list_single_image_pane_ParamLimits

0x8433,	// (0x00038dfb) list_single_image_pane

0xcd9a,	// (0x0003d762) aid_size_cell_image_ParamLimits

0xcd9a,	// (0x0003d762) aid_size_cell_image

0xcda7,	// (0x0003d76f) grid_single_image_pane_ParamLimits

0xcda7,	// (0x0003d76f) grid_single_image_pane

0xcdb5,	// (0x0003d77d) list_single_image_pane_g1_ParamLimits

0xcdb5,	// (0x0003d77d) list_single_image_pane_g1

0xcdc1,	// (0x0003d789) list_single_image_pane_g2_ParamLimits

0xcdc1,	// (0x0003d789) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00040612) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00040612) list_single_image_pane_g

0xcdd5,	// (0x0003d79d) list_single_image_pane_t1_ParamLimits

0xcdd5,	// (0x0003d79d) list_single_image_pane_t1

0xcdeb,	// (0x0003d7b3) cell_image_list_pane_ParamLimits

0xcdeb,	// (0x0003d7b3) cell_image_list_pane

0xcdff,	// (0x0003d7c7) cell_image_list_pane_g1

0xce08,	// (0x0003d7d0) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00040617) cell_image_list_pane_g

0xce11,	// (0x0003d7d9) aid_size_cell_tb_trans_pane

0x26d2,	// (0x0003309a) bg_tb_trans_pane

0xce23,	// (0x0003d7eb) grid_tb_trans_pane

0x9c71,	// (0x0003a639) bg_tb_trans_pane_g1

0x9c81,	// (0x0003a649) bg_tb_trans_pane_g2

0x9c79,	// (0x0003a641) bg_tb_trans_pane_g3

0x9c91,	// (0x0003a659) bg_tb_trans_pane_g4

0x9c89,	// (0x0003a651) bg_tb_trans_pane_g5

0x9cb1,	// (0x0003a679) bg_tb_trans_pane_g6

0x9ca9,	// (0x0003a671) bg_tb_trans_pane_g7

0x9c99,	// (0x0003a661) bg_tb_trans_pane_g8

0x9ca1,	// (0x0003a669) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0004061c) bg_tb_trans_pane_g

0xce37,	// (0x0003d7ff) cell_toolbar_trans_pane_ParamLimits

0xce37,	// (0x0003d7ff) cell_toolbar_trans_pane

0xc24b,	// (0x0003cc13) cell_toolbar_trans_pane_g1

0xbe16,	// (0x0003c7de) list_form2_midp_pane_t1

0xbe24,	// (0x0003c7ec) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000404b9) list_form2_midp_pane_t

0xbe32,	// (0x0003c7fa) scroll_pane_cp51_ParamLimits

0xbfee,	// (0x0003c9b6) form2_midp_wait_pane_g1

0xbff7,	// (0x0003c9bf) form2_midp_wait_pane_g2

0xc000,	// (0x0003c9c8) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000404ce) form2_midp_wait_pane_g

0x2320,	// (0x00032ce8) list_highlight_pane_cp21_ParamLimits

0xc048,	// (0x0003ca10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc057,	// (0x0003ca1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x83cb,	// (0x00038d93) list_single_2graphic_im_pane_ParamLimits

0x83cb,	// (0x00038d93) list_single_2graphic_im_pane

0xce5d,	// (0x0003d825) list_single_2graphic_im_pane_g1_ParamLimits

0xce5d,	// (0x0003d825) list_single_2graphic_im_pane_g1

0xce6e,	// (0x0003d836) list_single_2graphic_im_pane_g2_ParamLimits

0xce6e,	// (0x0003d836) list_single_2graphic_im_pane_g2

0xce7a,	// (0x0003d842) list_single_2graphic_im_pane_g3_ParamLimits

0xce7a,	// (0x0003d842) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0004062f) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0004062f) list_single_2graphic_im_pane_g

0xce9a,	// (0x0003d862) list_single_2graphic_im_pane_t1_ParamLimits

0xce9a,	// (0x0003d862) list_single_2graphic_im_pane_t1

0xc8a4,	// (0x0003d26c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8a4,	// (0x0003d26c) list_single_graphic_2heading_pane_fp

0x4c1c,	// (0x000355e4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c1c,	// (0x000355e4) list_single_graphic_2heading_pane_fp_g1

0xc8ba,	// (0x0003d282) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ba,	// (0x0003d282) list_single_graphic_2heading_pane_fp_g2

0x4be5,	// (0x000355ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4be5,	// (0x000355ad) list_single_graphic_2heading_pane_fp_g3

0x4bf1,	// (0x000355b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4bf1,	// (0x000355b9) list_single_graphic_2heading_pane_fp_g4

0xc8c6,	// (0x0003d28e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8c6,	// (0x0003d28e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00040556) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00040556) list_single_graphic_2heading_pane_fp_g

0x4db6,	// (0x0003577e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4db6,	// (0x0003577e) list_single_graphic_2heading_pane_fp_t1

0x4c54,	// (0x0003561c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c54,	// (0x0003561c) list_single_graphic_2heading_pane_fp_t2

0x4dcc,	// (0x00035794) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4dcc,	// (0x00035794) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00040638) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00040638) list_single_graphic_2heading_pane_fp_t

0xc2d7,	// (0x0003cc9f) fep_hwr_write_pane_g5_ParamLimits

0xc2d7,	// (0x0003cc9f) fep_hwr_write_pane_g5

0xc2e3,	// (0x0003ccab) fep_hwr_write_pane_g6_ParamLimits

0xc2e3,	// (0x0003ccab) fep_hwr_write_pane_g6

0xcb84,	// (0x0003d54c) eswt_shell_pane_ParamLimits

0x9ce5,	// (0x0003a6ad) bg_popup_window_pane_cp18_ParamLimits

0xaf74,	// (0x0003b93c) heading_pane_cp70

0xccae,	// (0x0003d676) popup_eswt_tasktip_window_t1_ParamLimits

0x97db,	// (0x0003a1a3) aid_touch_tab_arrow_left

0x97ea,	// (0x0003a1b2) aid_touch_tab_arrow_right

0x5f4a,	// (0x00036912) title_pane_g3_ParamLimits

0x5f4a,	// (0x00036912) title_pane_g3

0x269a,	// (0x00033062) set_value_pane_g1

0x7eed,	// (0x000388b5) popup_toolbar_trans_pane_ParamLimits

0xce11,	// (0x0003d7d9) aid_size_cell_tb_trans_pane_ParamLimits

0x26d2,	// (0x0003309a) bg_tb_trans_pane_ParamLimits

0xce23,	// (0x0003d7eb) grid_tb_trans_pane_ParamLimits

0x244a,	// (0x00032e12) cont_note_pane_ParamLimits

0x244a,	// (0x00032e12) cont_note_pane

0x25c6,	// (0x00032f8e) cont_snote2_single_text_pane_ParamLimits

0x25c6,	// (0x00032f8e) cont_snote2_single_text_pane

0x25c6,	// (0x00032f8e) cont_snote2_single_graphic_pane_ParamLimits

0x25c6,	// (0x00032f8e) cont_snote2_single_graphic_pane

0xa2f7,	// (0x0003acbf) cont_note_wait_pane_ParamLimits

0xa2f7,	// (0x0003acbf) cont_note_wait_pane

0xa2f7,	// (0x0003acbf) cont_note_image_pane_ParamLimits

0xa2f7,	// (0x0003acbf) cont_note_image_pane

0xcecb,	// (0x0003d893) popup_note2_window_g1_ParamLimits

0xcecb,	// (0x0003d893) popup_note2_window_g1

0xcefc,	// (0x0003d8c4) popup_note2_window_t1_ParamLimits

0xcefc,	// (0x0003d8c4) popup_note2_window_t1

0xcf41,	// (0x0003d909) popup_note2_window_t2_ParamLimits

0xcf41,	// (0x0003d909) popup_note2_window_t2

0xcf86,	// (0x0003d94e) popup_note2_window_t3_ParamLimits

0xcf86,	// (0x0003d94e) popup_note2_window_t3

0xcfcb,	// (0x0003d993) popup_note2_window_t4_ParamLimits

0xcfcb,	// (0x0003d993) popup_note2_window_t4

0x24ce,	// (0x00032e96) popup_note2_window_t5_ParamLimits

0x24ce,	// (0x00032e96) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00040644) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00040644) popup_note2_window_t

0xcffa,	// (0x0003d9c2) popup_note2_image_window_g1_ParamLimits

0xcffa,	// (0x0003d9c2) popup_note2_image_window_g1

0xd006,	// (0x0003d9ce) popup_note2_image_window_g2_ParamLimits

0xd006,	// (0x0003d9ce) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0004064f) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0004064f) popup_note2_image_window_g

0xd018,	// (0x0003d9e0) popup_note2_image_window_t1_ParamLimits

0xd018,	// (0x0003d9e0) popup_note2_image_window_t1

0xd030,	// (0x0003d9f8) popup_note2_image_window_t2_ParamLimits

0xd030,	// (0x0003d9f8) popup_note2_image_window_t2

0xd048,	// (0x0003da10) popup_note2_image_window_t3_ParamLimits

0xd048,	// (0x0003da10) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00040654) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00040654) popup_note2_image_window_t

0xa305,	// (0x0003accd) popup_note2_wait_window_g1_ParamLimits

0xa305,	// (0x0003accd) popup_note2_wait_window_g1

0xa311,	// (0x0003acd9) popup_note2_wait_window_g2_ParamLimits

0xa311,	// (0x0003acd9) popup_note2_wait_window_g2

0xa31d,	// (0x0003ace5) popup_note2_wait_window_g3_ParamLimits

0xa31d,	// (0x0003ace5) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x00040201) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x00040201) popup_note2_wait_window_g

0xd064,	// (0x0003da2c) popup_note2_wait_window_t1_ParamLimits

0xd064,	// (0x0003da2c) popup_note2_wait_window_t1

0xd082,	// (0x0003da4a) popup_note2_wait_window_t2_ParamLimits

0xd082,	// (0x0003da4a) popup_note2_wait_window_t2

0xd0a0,	// (0x0003da68) popup_note2_wait_window_t3_ParamLimits

0xd0a0,	// (0x0003da68) popup_note2_wait_window_t3

0xd0b2,	// (0x0003da7a) popup_note2_wait_window_t4_ParamLimits

0xd0b2,	// (0x0003da7a) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0004065b) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0004065b) popup_note2_wait_window_t

0xd0c4,	// (0x0003da8c) wait_bar2_pane_ParamLimits

0xd0c4,	// (0x0003da8c) wait_bar2_pane

0xd0dc,	// (0x0003daa4) popup_snote2_single_text_window_g1_ParamLimits

0xd0dc,	// (0x0003daa4) popup_snote2_single_text_window_g1

0xd104,	// (0x0003dacc) popup_snote2_single_text_window_t1_ParamLimits

0xd104,	// (0x0003dacc) popup_snote2_single_text_window_t1

0xd150,	// (0x0003db18) popup_snote2_single_text_window_t2_ParamLimits

0xd150,	// (0x0003db18) popup_snote2_single_text_window_t2

0xd19c,	// (0x0003db64) popup_snote2_single_text_window_t3_ParamLimits

0xd19c,	// (0x0003db64) popup_snote2_single_text_window_t3

0xd1dd,	// (0x0003dba5) popup_snote2_single_text_window_t4_ParamLimits

0xd1dd,	// (0x0003dba5) popup_snote2_single_text_window_t4

0xd213,	// (0x0003dbdb) popup_snote2_single_text_window_t5_ParamLimits

0xd213,	// (0x0003dbdb) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x00040664) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x00040664) popup_snote2_single_text_window_t

0xd23e,	// (0x0003dc06) popup_snote2_single_graphic_window_g1_ParamLimits

0xd23e,	// (0x0003dc06) popup_snote2_single_graphic_window_g1

0xd266,	// (0x0003dc2e) popup_snote2_single_graphic_window_g2_ParamLimits

0xd266,	// (0x0003dc2e) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0004066f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0004066f) popup_snote2_single_graphic_window_g

0xd28e,	// (0x0003dc56) popup_snote2_single_graphic_window_t1_ParamLimits

0xd28e,	// (0x0003dc56) popup_snote2_single_graphic_window_t1

0xd2da,	// (0x0003dca2) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2da,	// (0x0003dca2) popup_snote2_single_graphic_window_t2

0xd19c,	// (0x0003db64) popup_snote2_single_graphic_window_t3_ParamLimits

0xd19c,	// (0x0003db64) popup_snote2_single_graphic_window_t3

0xd1dd,	// (0x0003dba5) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1dd,	// (0x0003dba5) popup_snote2_single_graphic_window_t4

0xd213,	// (0x0003dbdb) popup_snote2_single_graphic_window_t5_ParamLimits

0xd213,	// (0x0003dbdb) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x00040674) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x00040674) popup_snote2_single_graphic_window_t

0xbcef,	// (0x0003c6b7) clock_nsta_pane_cp2_t1

0xbcef,	// (0x0003c6b7) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0004048f) clock_nsta_pane_cp2_t

0x6993,	// (0x0003735b) form_field_data_wide_pane_g1_ParamLimits

0x26e0,	// (0x000330a8) form_field_data_wide_pane_g2_ParamLimits

0x26e0,	// (0x000330a8) form_field_data_wide_pane_g2

0x26ec,	// (0x000330b4) form_field_data_wide_pane_g3_ParamLimits

0x26ec,	// (0x000330b4) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x00040039) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x00040039) form_field_data_wide_pane_g

0xbbf1,	// (0x0003c5b9) grid_touch_3_pane_ParamLimits

0xbbf1,	// (0x0003c5b9) grid_touch_3_pane

0xd326,	// (0x0003dcee) cell_touch_3_pane_ParamLimits

0xd326,	// (0x0003dcee) cell_touch_3_pane

0xc24b,	// (0x0003cc13) cell_touch_3_pane_g1

0xc24b,	// (0x0003cc13) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00040514) cell_touch_3_pane_g

0x2500,	// (0x00032ec8) cont_query_data_pane

0x2508,	// (0x00032ed0) cont_query_data_pane_cp1

0xd354,	// (0x0003dd1c) button_value_adjust_pane_cp7

0xd35c,	// (0x0003dd24) query_popup_pane_cp3

0x2b66,	// (0x0003352e) bg_popup_sub_pane_cp22_ParamLimits

0x6fcc,	// (0x00037994) navi_navi_volume_pane_cp2

0x6fe4,	// (0x000379ac) popup_side_volume_key_window_g2

0x6ff0,	// (0x000379b8) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x000400cf) popup_side_volume_key_window_g

0x700a,	// (0x000379d2) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x000400d6) popup_side_volume_key_window_t

0x72b8,	// (0x00037c80) popup_side_volume_key_window_ParamLimits

0x6674,	// (0x0003703c) list_double_graphic_pane_g4_ParamLimits

0x6674,	// (0x0003703c) list_double_graphic_pane_g4

0x8410,	// (0x00038dd8) list_single_2heading_msg_pane_ParamLimits

0x8410,	// (0x00038dd8) list_single_2heading_msg_pane

0x8a23,	// (0x000393eb) list_single_2heading_msg_pane_g1_ParamLimits

0x8a23,	// (0x000393eb) list_single_2heading_msg_pane_g1

0x461a,	// (0x00034fe2) list_single_2heading_msg_pane_g2_ParamLimits

0x461a,	// (0x00034fe2) list_single_2heading_msg_pane_g2

0x495b,	// (0x00035323) list_single_2heading_msg_pane_g3_ParamLimits

0x495b,	// (0x00035323) list_single_2heading_msg_pane_g3

0x4dec,	// (0x000357b4) list_single_2heading_msg_pane_g4_ParamLimits

0x4dec,	// (0x000357b4) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0004067f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0004067f) list_single_2heading_msg_pane_g

0x4e04,	// (0x000357cc) list_single_2heading_msg_pane_t1_ParamLimits

0x4e04,	// (0x000357cc) list_single_2heading_msg_pane_t1

0x8a2f,	// (0x000393f7) list_single_2heading_msg_pane_t2_ParamLimits

0x8a2f,	// (0x000393f7) list_single_2heading_msg_pane_t2

0x8a63,	// (0x0003942b) list_single_2heading_msg_pane_t3_ParamLimits

0x8a63,	// (0x0003942b) list_single_2heading_msg_pane_t3

0x4e2c,	// (0x000357f4) list_single_2heading_msg_pane_t4_ParamLimits

0x4e2c,	// (0x000357f4) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x00040688) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x00040688) list_single_2heading_msg_pane_t

0x22ce,	// (0x00032c96) title_pane_g4_ParamLimits

0x22ce,	// (0x00032c96) title_pane_g4

0x6c25,	// (0x000375ed) title_pane_stacon_g3_ParamLimits

0x6c25,	// (0x000375ed) title_pane_stacon_g3

0xce8e,	// (0x0003d856) list_single_2graphic_im_pane_g4_ParamLimits

0xce8e,	// (0x0003d856) list_single_2graphic_im_pane_g4

0xad3e,	// (0x0003b706) popup_side_volume_key_window_cp

0xb54c,	// (0x0003bf14) main_idle_act2_pane_t1

0x7fdf,	// (0x000389a7) toolbar_button_pane_g10

0x6509,	// (0x00036ed1) popup_toolbar_window_cp1

0xbce0,	// (0x0003c6a8) clock_nsta_pane_cp_t1

0xbce0,	// (0x0003c6a8) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0004048a) clock_nsta_pane_cp_t

0x6fcc,	// (0x00037994) navi_navi_volume_pane_cp2_ParamLimits

0x6fd8,	// (0x000379a0) popup_side_volume_key_window_g1_ParamLimits

0x6fe4,	// (0x000379ac) popup_side_volume_key_window_g2_ParamLimits

0x6ff0,	// (0x000379b8) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x000400cf) popup_side_volume_key_window_g_ParamLimits

0x85e2,	// (0x00038faa) fep_hwr_aid_pane

0x8689,	// (0x00039051) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2a7,	// (0x0003cc6f) fep_hwr_top_pane_g1_ParamLimits

0xc2b9,	// (0x0003cc81) fep_hwr_top_pane_g2_ParamLimits

0x86a9,	// (0x00039071) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000404df) fep_hwr_top_pane_g_ParamLimits

0x86be,	// (0x00039086) fep_hwr_top_text_pane_ParamLimits

0xab01,	// (0x0003b4c9) aid_touch_tab_arrow_arrow_2

0xab0a,	// (0x0003b4d2) aid_touch_tab_arrow_left_2

0x85f6,	// (0x00038fbe) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x862d,	// (0x00038ff5) fep_hwr_prediction_pane

0xc412,	// (0x0003cdda) fep_vkb_prediction_pane

0xc50f,	// (0x0003ced7) fep_vkb_side_pane_g3_ParamLimits

0xc50f,	// (0x0003ced7) fep_vkb_side_pane_g3

0x8839,	// (0x00039201) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x88a5,	// (0x0003926d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x88b2,	// (0x0003927a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0004058e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a9c,	// (0x00039464) fep_hwr_prediction_pane_g1

0x8aa6,	// (0x0003946e) fep_hwr_prediction_pane_g2

0x8aae,	// (0x00039476) fep_hwr_prediction_pane_g3

0x8ab6,	// (0x0003947e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00040691) fep_hwr_prediction_pane_g

0xd381,	// (0x0003dd49) fep_vkb_prediction_pane_g1

0xd38b,	// (0x0003dd53) fep_vkb_prediction_pane_g2

0xd393,	// (0x0003dd5b) fep_vkb_prediction_pane_g3

0xd39b,	// (0x0003dd63) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0004069a) fep_vkb_prediction_pane_g

0x8312,	// (0x00038cda) slider_set_pane_g3

0x8326,	// (0x00038cee) slider_set_pane_g4

0x833e,	// (0x00038d06) slider_set_pane_g5

0x8312,	// (0x00038cda) slider_set_pane_g6

0x8354,	// (0x00038d1c) slider_set_pane_g7

0xb18d,	// (0x0003bb55) slider_form_pane_g3

0xb196,	// (0x0003bb5e) slider_form_pane_g4

0xb19e,	// (0x0003bb66) slider_form_pane_g5

0xb18d,	// (0x0003bb55) slider_form_pane_g6

0xb1a6,	// (0x0003bb6e) slider_form_pane_g7

0xb7f7,	// (0x0003c1bf) slider_set_pane_vc_g3

0xb800,	// (0x0003c1c8) slider_set_pane_vc_g4

0xb809,	// (0x0003c1d1) slider_set_pane_vc_g5

0xb7f7,	// (0x0003c1bf) slider_set_pane_vc_g6

0xb812,	// (0x0003c1da) slider_set_pane_vc_g7

0xb9c4,	// (0x0003c38c) slider_form_pane_vc_g1

0xb9cd,	// (0x0003c395) slider_form_pane_vc_g2

0xb9d6,	// (0x0003c39e) slider_form_pane_vc_g3

0xb9c4,	// (0x0003c38c) slider_form_pane_vc_g4

0xb9df,	// (0x0003c3a7) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0004045c) slider_form_pane_vc_g

0x5ce1,	// (0x000366a9) main_idle_act3_pane

0xd3a3,	// (0x0003dd6b) ai3_links_pane

0xd3ac,	// (0x0003dd74) popup_ai3_data_window_ParamLimits

0xd3ac,	// (0x0003dd74) popup_ai3_data_window

0x22b0,	// (0x00032c78) grid_ai3_links_pane

0xd3c4,	// (0x0003dd8c) cell_ai3_links_pane_ParamLimits

0xd3c4,	// (0x0003dd8c) cell_ai3_links_pane

0xd3dc,	// (0x0003dda4) bg_popup_sub_pane_cp11

0xd3e9,	// (0x0003ddb1) cell_ai3_links_pane_g1

0x22b0,	// (0x00032c78) bg_popup_sub_pane_cp12

0xd40e,	// (0x0003ddd6) heading_ai3_data_pane

0xd416,	// (0x0003ddde) list_ai3_gene_pane

0xd422,	// (0x0003ddea) popup_ai3_data_window_g1

0xd42a,	// (0x0003ddf2) heading_ai3_data_pane_g1

0xd432,	// (0x0003ddfa) heading_ai3_data_pane_t1

0xd440,	// (0x0003de08) list_double_ai3_gene_pane_ParamLimits

0xd440,	// (0x0003de08) list_double_ai3_gene_pane

0xd44d,	// (0x0003de15) list_single_ai3_gene_pane_ParamLimits

0xd44d,	// (0x0003de15) list_single_ai3_gene_pane

0xc210,	// (0x0003cbd8) list_highlight_pane_cp7_ParamLimits

0xc210,	// (0x0003cbd8) list_highlight_pane_cp7

0xd45a,	// (0x0003de22) list_single_a13_gene_pane_t1_ParamLimits

0xd45a,	// (0x0003de22) list_single_a13_gene_pane_t1

0xd471,	// (0x0003de39) list_single_ai3_gene_pane_g1

0xd47a,	// (0x0003de42) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x000406a3) list_single_ai3_gene_pane_g

0xd482,	// (0x0003de4a) list_double_ai3_gene_pane_g1_ParamLimits

0xd482,	// (0x0003de4a) list_double_ai3_gene_pane_g1

0xd48e,	// (0x0003de56) list_double_ai3_gene_pane_t1_ParamLimits

0xd48e,	// (0x0003de56) list_double_ai3_gene_pane_t1

0xd4aa,	// (0x0003de72) list_double_ai3_gene_pane_t2_ParamLimits

0xd4aa,	// (0x0003de72) list_double_ai3_gene_pane_t2

0xd4bf,	// (0x0003de87) list_double_ai3_gene_pane_t3_ParamLimits

0xd4bf,	// (0x0003de87) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x000406a8) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x000406a8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4de2,	// (0x000357aa) aid_size_min_col_2

0xd36d,	// (0x0003dd35) aid_size_min_msg_ParamLimits

0xd36d,	// (0x0003dd35) aid_size_min_msg

0xc60f,	// (0x0003cfd7) fep_vkb_top_text_pane_g2_ParamLimits

0xc60f,	// (0x0003cfd7) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0004050f) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0004050f) fep_vkb_top_text_pane_g

0x5ce1,	// (0x000366a9) main_hc_apps_shell_pane

0xd4dc,	// (0x0003dea4) grid_hc_apps_pane_ParamLimits

0xd4dc,	// (0x0003dea4) grid_hc_apps_pane

0xd4eb,	// (0x0003deb3) list_hc_apps_pane

0xd4f3,	// (0x0003debb) scroll_pane_cp37_ParamLimits

0xd4f3,	// (0x0003debb) scroll_pane_cp37

0xd4ff,	// (0x0003dec7) cell_hc_apps_pane_ParamLimits

0xd4ff,	// (0x0003dec7) cell_hc_apps_pane

0xd5ad,	// (0x0003df75) cell_hc_apps_pane_g1_ParamLimits

0xd5ad,	// (0x0003df75) cell_hc_apps_pane_g1

0xd5de,	// (0x0003dfa6) cell_hc_apps_pane_g2_ParamLimits

0xd5de,	// (0x0003dfa6) cell_hc_apps_pane_g2

0xd5fa,	// (0x0003dfc2) cell_hc_apps_pane_g3_ParamLimits

0xd5fa,	// (0x0003dfc2) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x000406af) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x000406af) cell_hc_apps_pane_g

0xd61c,	// (0x0003dfe4) cell_hc_apps_pane_t1_ParamLimits

0xd61c,	// (0x0003dfe4) cell_hc_apps_pane_t1

0x244a,	// (0x00032e12) grid_highlight_pane_cp10_ParamLimits

0x244a,	// (0x00032e12) grid_highlight_pane_cp10

0xd65c,	// (0x0003e024) list_single_hc_apps_pane_ParamLimits

0xd65c,	// (0x0003e024) list_single_hc_apps_pane

0xd6bf,	// (0x0003e087) list_single_hc_apps_pane_g1

0x8abe,	// (0x00039486) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x000406b6) list_single_hc_apps_pane_g

0x8ad7,	// (0x0003949f) list_single_hc_apps_pane_g2_copy1

0x8af3,	// (0x000394bb) list_single_hc_apps_pane_t1

0x2320,	// (0x00032ce8) bg_set_opt_pane_cp_ParamLimits

0x5ffa,	// (0x000369c2) setting_slider_pane_t1_ParamLimits

0x6013,	// (0x000369db) setting_slider_pane_t2_ParamLimits

0x602d,	// (0x000369f5) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003ff26) setting_slider_pane_t_ParamLimits

0x6045,	// (0x00036a0d) slider_set_pane_ParamLimits

0x78f2,	// (0x000382ba) control_pane_g5_ParamLimits

0x78f2,	// (0x000382ba) control_pane_g5

0xafe0,	// (0x0003b9a8) slider_set_pane_g1_ParamLimits

0x8306,	// (0x00038cce) slider_set_pane_g2_ParamLimits

0x8312,	// (0x00038cda) slider_set_pane_g3_ParamLimits

0x8326,	// (0x00038cee) slider_set_pane_g4_ParamLimits

0x833e,	// (0x00038d06) slider_set_pane_g5_ParamLimits

0x8312,	// (0x00038cda) slider_set_pane_g6_ParamLimits

0x8354,	// (0x00038d1c) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0004031d) slider_set_pane_g_ParamLimits

0x7396,	// (0x00037d5e) navi_icon_text_pane_ParamLimits

0x979c,	// (0x0003a164) aid_fill_nsta_2_ParamLimits

0x97db,	// (0x0003a1a3) aid_touch_tab_arrow_left_ParamLimits

0x97ea,	// (0x0003a1b2) aid_touch_tab_arrow_right_ParamLimits

0x9857,	// (0x0003a21f) clock_nsta_pane_ParamLimits

0xaae3,	// (0x0003b4ab) navi_icon_pane_g1_ParamLimits

0xaaef,	// (0x0003b4b7) navi_text_pane_t1_ParamLimits

0xbdf0,	// (0x0003c7b8) navi_icon_text_pane_g1_ParamLimits

0xbdfc,	// (0x0003c7c4) navi_icon_text_pane_t1_ParamLimits

0xd6bf,	// (0x0003e087) list_single_hc_apps_pane_g1_ParamLimits

0x8abe,	// (0x00039486) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x000406b6) list_single_hc_apps_pane_g_ParamLimits

0x8ad7,	// (0x0003949f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8af3,	// (0x000394bb) list_single_hc_apps_pane_t1_ParamLimits

0x5e3e,	// (0x00036806) popup_toolbar2_fixed_window_ParamLimits

0x5e3e,	// (0x00036806) popup_toolbar2_fixed_window

0x7ee3,	// (0x000388ab) popup_toolbar2_float_window

0x22b0,	// (0x00032c78) bg_popup_sub_pane_cp27

0xd6d8,	// (0x0003e0a0) grid_toolbar2_float_pane

0x22b0,	// (0x00032c78) bg_popup_sub_pane_cp26

0xd6d8,	// (0x0003e0a0) grid_toolbar2_fixed_pane

0xd6e0,	// (0x0003e0a8) cell_toolbar2_fixed_pane_ParamLimits

0xd6e0,	// (0x0003e0a8) cell_toolbar2_fixed_pane

0xd6f0,	// (0x0003e0b8) cell_toolbar2_fixed_pane_g1

0x7db5,	// (0x0003877d) toolbar2_fixed_button_pane

0x9c71,	// (0x0003a639) toolbar2_fixed_button_pane_g1

0x9c81,	// (0x0003a649) toolbar2_fixed_button_pane_g2

0x9c79,	// (0x0003a641) toolbar2_fixed_button_pane_g3

0x9c91,	// (0x0003a659) toolbar2_fixed_button_pane_g4

0x9c89,	// (0x0003a651) toolbar2_fixed_button_pane_g5

0x9c99,	// (0x0003a661) toolbar2_fixed_button_pane_g6

0x9ca1,	// (0x0003a669) toolbar2_fixed_button_pane_g7

0x9cb1,	// (0x0003a679) toolbar2_fixed_button_pane_g8

0x9ca9,	// (0x0003a671) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0004021f) toolbar2_fixed_button_pane_g

0xd6f9,	// (0x0003e0c1) cell_toolbar2_float_pane_ParamLimits

0xd6f9,	// (0x0003e0c1) cell_toolbar2_float_pane

0xd70a,	// (0x0003e0d2) cell_toolbar2_float_pane_g1

0x7db5,	// (0x0003877d) toolbar2_fixed_button_pane_cp

0xc379,	// (0x0003cd41) fep_vkb_accented_list_pane_ParamLimits

0xc379,	// (0x0003cd41) fep_vkb_accented_list_pane

0x8819,	// (0x000391e1) bg_popup_fep_shadow_pane_g9

0x7516,	// (0x00037ede) bg_popup_fep_shadow_pane_cp3

0x27d8,	// (0x000331a0) list_accented_list_pane

0xd713,	// (0x0003e0db) list_single_accented_list_pane_ParamLimits

0xd713,	// (0x0003e0db) list_single_accented_list_pane

0x7516,	// (0x00037ede) list_highlight_pane_cp10

0xd724,	// (0x0003e0ec) list_single_accented_list_pane_t1

0x7e33,	// (0x000387fb) popup_slider_window_ParamLimits

0x7e33,	// (0x000387fb) popup_slider_window

0xd364,	// (0x0003dd2c) aid_indentation_list_msg

0xd7e2,	// (0x0003e1aa) bg_popup_window_pane_cp19

0xd84a,	// (0x0003e212) popup_slider_window_g1

0xd866,	// (0x0003e22e) popup_slider_window_g2

0xd882,	// (0x0003e24a) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x000406bb) popup_slider_window_g

0xd8e8,	// (0x0003e2b0) popup_slider_window_t1

0xd95c,	// (0x0003e324) small_volume_slider_vertical_pane

0xc24b,	// (0x0003cc13) small_volume_slider_vertical_pane_g1

0xc24b,	// (0x0003cc13) small_volume_slider_vertical_pane_g2

0xd978,	// (0x0003e340) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x000406cd) small_volume_slider_vertical_pane_g

0x5c04,	// (0x000365cc) area_side_right_pane_ParamLimits

0x5c04,	// (0x000365cc) area_side_right_pane

0x8b21,	// (0x000394e9) aid_size_side_button_ParamLimits

0x8b21,	// (0x000394e9) aid_size_side_button

0x8b35,	// (0x000394fd) grid_sctrl_middle_pane_ParamLimits

0x8b35,	// (0x000394fd) grid_sctrl_middle_pane

0x8b54,	// (0x0003951c) sctrl_sk_bottom_pane

0x8b65,	// (0x0003952d) sctrl_sk_top_pane

0x8b77,	// (0x0003953f) aid_touch_sctrl_top

0x8b84,	// (0x0003954c) bg_sctrl_sk_pane_ParamLimits

0x8b84,	// (0x0003954c) bg_sctrl_sk_pane

0x8b92,	// (0x0003955a) sctrl_sk_top_pane_g1

0x8b9f,	// (0x00039567) sctrl_sk_top_pane_t1

0x8b77,	// (0x0003953f) aid_touch_sctrl_bottom

0x8b84,	// (0x0003954c) bg_sctrl_sk_pane_cp_ParamLimits

0x8b84,	// (0x0003954c) bg_sctrl_sk_pane_cp

0x8bba,	// (0x00039582) sctrl_sk_bottom_pane_g1

0x8b9f,	// (0x00039567) sctrl_sk_bottom_pane_t1

0x8bc3,	// (0x0003958b) cell_sctrl_middle_pane_ParamLimits

0x8bc3,	// (0x0003958b) cell_sctrl_middle_pane

0x8bde,	// (0x000395a6) aid_touch_sctrl_middle_ParamLimits

0x8bde,	// (0x000395a6) aid_touch_sctrl_middle

0x8bf0,	// (0x000395b8) bg_sctrl_middle_pane_ParamLimits

0x8bf0,	// (0x000395b8) bg_sctrl_middle_pane

0x8839,	// (0x00039201) cell_sctrl_middle_pane_g1_ParamLimits

0x8839,	// (0x00039201) cell_sctrl_middle_pane_g1

0x8bfe,	// (0x000395c6) cell_sctrl_middle_pane_g2_ParamLimits

0x8bfe,	// (0x000395c6) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x000406d9) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x000406d9) cell_sctrl_middle_pane_g

0x9c71,	// (0x0003a639) bg_sctrl_middle_pane_g1

0x9c79,	// (0x0003a641) bg_sctrl_middle_pane_g2

0x9c81,	// (0x0003a649) bg_sctrl_middle_pane_g3

0x9c89,	// (0x0003a651) bg_sctrl_middle_pane_g4

0x9c91,	// (0x0003a659) bg_sctrl_middle_pane_g5

0x9c99,	// (0x0003a661) bg_sctrl_middle_pane_g6

0x9ca1,	// (0x0003a669) bg_sctrl_middle_pane_g7

0x9ca9,	// (0x0003a671) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x000406de) bg_sctrl_middle_pane_g

0x9cb1,	// (0x0003a679) bg_sctrl_middle_pane_g8_copy1

0x9c71,	// (0x0003a639) bg_sctrl_sk_pane_g1

0x9c81,	// (0x0003a649) bg_sctrl_sk_pane_g2

0x9c79,	// (0x0003a641) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0004021f) bg_sctrl_sk_pane_g

0x2614,	// (0x00032fdc) aid_size_touch_scroll_bar

0x9c91,	// (0x0003a659) bg_sctrl_sk_pane_g4

0x9c89,	// (0x0003a651) bg_sctrl_sk_pane_g5

0x9c99,	// (0x0003a661) bg_sctrl_sk_pane_g6

0x9ca1,	// (0x0003a669) bg_sctrl_sk_pane_g7

0x9cb1,	// (0x0003a679) bg_sctrl_sk_pane_g8

0x9ca9,	// (0x0003a671) bg_sctrl_sk_pane_g9

0x7a9c,	// (0x00038464) popup_fep_china_hwr2_fs_candidate_window

0x7aa6,	// (0x0003846e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7aa6,	// (0x0003846e) popup_fep_china_hwr2_fs_control_window

0x8839,	// (0x00039201) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x000406d4) sctrl_sk_top_pane_g

0xd981,	// (0x0003e349) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd981,	// (0x0003e349) aid_fep_china_hwr2_fs_cell

0xd993,	// (0x0003e35b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd993,	// (0x0003e35b) bg_popup_fep_shadow_pane_cp4

0xd9aa,	// (0x0003e372) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9aa,	// (0x0003e372) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x0003e3a5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x0003e3a5) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x0003e3b5) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x0003e3bd) aid_fep_china_hwr2_fs_candi_cell

0x22b0,	// (0x00032c78) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x0003e3c7) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x0003e3d1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x0003e3d1) cell_fep_china_hwr2_fs_funtion_grid

0xc24b,	// (0x0003cc13) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x0003e3e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x0003e3e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x0003e3f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x0003e3f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x000406ef) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x000406ef) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x0003e40d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x0003e40d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x0003e422) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x0003e422) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x000406f4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x000406f4) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x0003e43e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x0003e446) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x0003e44e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x000406f9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x0003e456) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x0003e456) cell_fep_china_hwr2_fs_candidate_grid

0xdaa7,	// (0x0003e46f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdaaf,	// (0x0003e477) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc24b,	// (0x0003cc13) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc24b,	// (0x0003cc13) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00040514) cell_fep_china_hwr2_fs_candidate_grid_g

0xdab7,	// (0x0003e47f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x986a,	// (0x0003a232) clock_nsta_pane_cp_24_ParamLimits

0x986a,	// (0x0003a232) clock_nsta_pane_cp_24

0x98e8,	// (0x0003a2b0) indicator_nsta_pane_cp_24_ParamLimits

0x98e8,	// (0x0003a2b0) indicator_nsta_pane_cp_24

0xa95f,	// (0x0003b327) heading_pane_g1

0x0001,

0xf8bc,	// (0x00040284) heading_pane_g

0xb395,	// (0x0003bd5d) grid_sct_catagory_button_pane

0xb3c5,	// (0x0003bd8d) scroll_pane_cp5_ParamLimits

0xbe3e,	// (0x0003c806) button_value_adjust_pane_cp5_ParamLimits

0xbe3e,	// (0x0003c806) button_value_adjust_pane_cp5

0xbf1d,	// (0x0003c8e5) form2_midp_time_pane_ParamLimits

0xdac5,	// (0x0003e48d) cell_sct_catagory_button_pane_ParamLimits

0xdac5,	// (0x0003e48d) cell_sct_catagory_button_pane

0xc210,	// (0x0003cbd8) bg_button_pane_cp01_ParamLimits

0xc210,	// (0x0003cbd8) bg_button_pane_cp01

0xc24b,	// (0x0003cc13) cell_sct_catagory_button_pane_g1

0x7e72,	// (0x0003883a) popup_tb_extension_window

0xdad7,	// (0x0003e49f) aid_size_cell_ext_ParamLimits

0xdad7,	// (0x0003e49f) aid_size_cell_ext

0x244a,	// (0x00032e12) bg_tb_trans_pane_cp1_ParamLimits

0x244a,	// (0x00032e12) bg_tb_trans_pane_cp1

0xdaf7,	// (0x0003e4bf) grid_tb_ext_pane_ParamLimits

0xdaf7,	// (0x0003e4bf) grid_tb_ext_pane

0xdb27,	// (0x0003e4ef) cell_tb_ext_pane_ParamLimits

0xdb27,	// (0x0003e4ef) cell_tb_ext_pane

0xdb3e,	// (0x0003e506) cell_tb_ext_pane_g1_ParamLimits

0xdb3e,	// (0x0003e506) cell_tb_ext_pane_g1

0xdb5b,	// (0x0003e523) cell_tb_ext_pane_t1

0x244a,	// (0x00032e12) list_highlight_pane_cp11_ParamLimits

0x244a,	// (0x00032e12) list_highlight_pane_cp11

0x5e5d,	// (0x00036825) popup_uni_indicator_window_ParamLimits

0x5e5d,	// (0x00036825) popup_uni_indicator_window

0x26d2,	// (0x0003309a) bg_popup_sub_pane_cp14

0xdb77,	// (0x0003e53f) list_uniindi_pane

0xdb83,	// (0x0003e54b) uniindi_top_pane

0x244a,	// (0x00032e12) bg_uniindi_top_pane

0xdba2,	// (0x0003e56a) uniindi_top_pane_g1

0xdbb8,	// (0x0003e580) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x00040700) uniindi_top_pane_g

0xdbe2,	// (0x0003e5aa) uniindi_top_pane_t1

0xdc0c,	// (0x0003e5d4) list_single_uniindi_pane_ParamLimits

0xdc0c,	// (0x0003e5d4) list_single_uniindi_pane

0xc24b,	// (0x0003cc13) bg_uniindi_top_pane_g1

0xdc1e,	// (0x0003e5e6) list_single_uniindi_pane_g1

0xdc31,	// (0x0003e5f9) list_single_uniindi_pane_t1

0x5ce1,	// (0x000366a9) control_bg_pane

0xdc56,	// (0x0003e61e) bg_sctrl_sk_pane_cp1

0xdc5f,	// (0x0003e627) bg_sctrl_sk_pane_cp2

0xdc68,	// (0x0003e630) control_bg_pane_g1

0xdc71,	// (0x0003e639) control_bg_pane_g2

0x0001,

0xfd41,	// (0x00040709) control_bg_pane_g

0xbc94,	// (0x0003c65c) cell_indicator_nsta_pane_g1_ParamLimits

0xbca2,	// (0x0003c66a) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00040478) cell_indicator_nsta_pane_g_ParamLimits

0x4bd2,	// (0x0003559a) form2_midp_time_pane_t1_ParamLimits

0x7a06,	// (0x000383ce) main_idle_act4_pane_ParamLimits

0x7a06,	// (0x000383ce) main_idle_act4_pane

0x7e72,	// (0x0003883a) popup_tb_extension_window_ParamLimits

0xdb17,	// (0x0003e4df) tb_ext_find_pane_ParamLimits

0xdb17,	// (0x0003e4df) tb_ext_find_pane

0xdc7a,	// (0x0003e642) ai_gene_pane_1_cp1

0x7661,	// (0x00038029) ai_gene_pane_2_cp1

0xdc82,	// (0x0003e64a) list_single_idle_plugin_calendar_pane

0xdc8b,	// (0x0003e653) list_single_idle_plugin_notification_pane

0xdc94,	// (0x0003e65c) list_single_idle_plugin_player_pane

0xdc9d,	// (0x0003e665) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc9d,	// (0x0003e665) list_single_idle_plugin_shortcut_pane

0xdcbf,	// (0x0003e687) main_idle_act4_pane_t1

0xdcd1,	// (0x0003e699) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0004070e) main_idle_act4_pane_t

0xdce3,	// (0x0003e6ab) middle_sk_idle_act4_pane_ParamLimits

0xdce3,	// (0x0003e6ab) middle_sk_idle_act4_pane

0xdcf9,	// (0x0003e6c1) popup_clock_digital_analogue_window_cp2

0xdd13,	// (0x0003e6db) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd13,	// (0x0003e6db) shortcut_wheel_idle_act4_pane

0xc24b,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g1

0xc24b,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g2

0xc24b,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g3

0xc24b,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g4

0xc24b,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g5

0xdd27,	// (0x0003e6ef) shortcut_wheel_idle_act4_pane_g6

0xdd2f,	// (0x0003e6f7) shortcut_wheel_idle_act4_pane_g7

0xdd37,	// (0x0003e6ff) shortcut_wheel_idle_act4_pane_g8

0xdd3f,	// (0x0003e707) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x00040713) shortcut_wheel_idle_act4_pane_g

0xc4bb,	// (0x0003ce83) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4bb,	// (0x0003ce83) middle_sk_idle_act4_pane_g1

0xdda3,	// (0x0003e76b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdda3,	// (0x0003e76b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x00040736) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x00040736) middle_sk_idle_act4_pane_g

0xddaf,	// (0x0003e777) middle_sk_idle_act4_pane_t1_ParamLimits

0xddaf,	// (0x0003e777) middle_sk_idle_act4_pane_t1

0xddcc,	// (0x0003e794) grid_ai_shortcut_pane_ParamLimits

0xddcc,	// (0x0003e794) grid_ai_shortcut_pane

0xdde5,	// (0x0003e7ad) list_highlight_pane_cp16_ParamLimits

0xdde5,	// (0x0003e7ad) list_highlight_pane_cp16

0xddf2,	// (0x0003e7ba) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf2,	// (0x0003e7ba) list_single_idle_plugin_shortcut_pane_g1

0xddfe,	// (0x0003e7c6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddfe,	// (0x0003e7c6) list_single_idle_plugin_shortcut_pane_g2

0xde16,	// (0x0003e7de) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde16,	// (0x0003e7de) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0004073b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0004073b) list_single_idle_plugin_shortcut_pane_g

0xde29,	// (0x0003e7f1) cell_ai_shortcut_pane_ParamLimits

0xde29,	// (0x0003e7f1) cell_ai_shortcut_pane

0xde4d,	// (0x0003e815) cell_ai_shortcut_pane_g1_ParamLimits

0xde4d,	// (0x0003e815) cell_ai_shortcut_pane_g1

0xdc7a,	// (0x0003e642) ai_gene_pane_1_cp2

0xde6f,	// (0x0003e837) ai_gene_pane_2_cp2

0xde77,	// (0x0003e83f) list_highlight_pane_cp15

0xde80,	// (0x0003e848) list_single_idle_plugin_calendar_pane_g1

0xde77,	// (0x0003e83f) list_highlight_pane_cp17

0xde88,	// (0x0003e850) list_single_idle_plugin_calendar_pane_g1_copy1

0xde90,	// (0x0003e858) list_single_idle_plugin_player_pane_g1

0xb5ee,	// (0x0003bfb6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x00040742) list_single_idle_plugin_player_pane_g

0xde98,	// (0x0003e860) list_single_idle_plugin_player_pane_t1

0xdea6,	// (0x0003e86e) list_single_idle_plugin_player_pane_t2

0xdeb4,	// (0x0003e87c) list_single_idle_plugin_player_pane_t3

0xdec2,	// (0x0003e88a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x00040747) list_single_idle_plugin_player_pane_t

0xded0,	// (0x0003e898) wait_bar_pane_cp15

0xded8,	// (0x0003e8a0) grid_ai_notification_pane

0xb5ee,	// (0x0003bfb6) list_single_idle_plugin_notification_pane_g1

0xdee1,	// (0x0003e8a9) cell_ai_notification_pane_ParamLimits

0xdee1,	// (0x0003e8a9) cell_ai_notification_pane

0xdeee,	// (0x0003e8b6) cell_ai_notification_pane_g1

0xdef6,	// (0x0003e8be) cell_ai_notification_pane_t1

0xdf04,	// (0x0003e8cc) tb_ext_find_button_pane

0xdf0c,	// (0x0003e8d4) tb_ext_find_pane_g1

0xdf14,	// (0x0003e8dc) tb_ext_find_pane_t1

0x2b05,	// (0x000334cd) tb_ext_find_button_pane_g1

0xdf22,	// (0x0003e8ea) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x00040750) tb_ext_find_button_pane_g

0xdcbf,	// (0x0003e687) main_idle_act4_pane_t1_ParamLimits

0xdcd1,	// (0x0003e699) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0004070e) main_idle_act4_pane_t_ParamLimits

0xdcf9,	// (0x0003e6c1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd07,	// (0x0003e6cf) sat_plugin_idle_act4_pane_ParamLimits

0xdd07,	// (0x0003e6cf) sat_plugin_idle_act4_pane

0xdf2b,	// (0x0003e8f3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf2b,	// (0x0003e8f3) sat_plugin_idle_act4_pane_t1

0xdf3e,	// (0x0003e906) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf3e,	// (0x0003e906) sat_plugin_idle_act4_pane_t2

0xdf51,	// (0x0003e919) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf51,	// (0x0003e919) sat_plugin_idle_act4_pane_t3

0xdf64,	// (0x0003e92c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf64,	// (0x0003e92c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x00040755) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x00040755) sat_plugin_idle_act4_pane_t

0x5da6,	// (0x0003676e) popup_battery_window_ParamLimits

0x5da6,	// (0x0003676e) popup_battery_window

0x244a,	// (0x00032e12) bg_popup_sub_pane_cp25_ParamLimits

0x244a,	// (0x00032e12) bg_popup_sub_pane_cp25

0xdf77,	// (0x0003e93f) popup_battery_window_g1_ParamLimits

0xdf77,	// (0x0003e93f) popup_battery_window_g1

0xdf83,	// (0x0003e94b) popup_battery_window_t1_ParamLimits

0xdf83,	// (0x0003e94b) popup_battery_window_t1

0xdf95,	// (0x0003e95d) popup_battery_window_t2_ParamLimits

0xdf95,	// (0x0003e95d) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0004075e) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0004075e) popup_battery_window_t

0x752a,	// (0x00037ef2) midp_canvas_pane_ParamLimits

0x75a3,	// (0x00037f6b) midp_keypad_pane_ParamLimits

0x75a3,	// (0x00037f6b) midp_keypad_pane

0x974a,	// (0x0003a112) main_midp_pane_ParamLimits

0xbcfe,	// (0x0003c6c6) signal_pane_g2_cp_ParamLimits

0xdfb2,	// (0x0003e97a) aid_size_cell_midp_keypad_ParamLimits

0xdfb2,	// (0x0003e97a) aid_size_cell_midp_keypad

0xdfcc,	// (0x0003e994) midp_keyp_game_grid_pane_ParamLimits

0xdfcc,	// (0x0003e994) midp_keyp_game_grid_pane

0xdfec,	// (0x0003e9b4) midp_keyp_rocker_pane_ParamLimits

0xdfec,	// (0x0003e9b4) midp_keyp_rocker_pane

0xe025,	// (0x0003e9ed) midp_keyp_sk_left_pane_ParamLimits

0xe025,	// (0x0003e9ed) midp_keyp_sk_left_pane

0xe07f,	// (0x0003ea47) midp_keyp_sk_right_pane_ParamLimits

0xe07f,	// (0x0003ea47) midp_keyp_sk_right_pane

0x22b0,	// (0x00032c78) bg_button_pane_cp03

0xe0d9,	// (0x0003eaa1) midp_keyp_sk_left_pane_g1

0x22b0,	// (0x00032c78) bg_button_pane_cp04

0xe0d9,	// (0x0003eaa1) midp_keyp_sk_right_pane_g1

0xc24b,	// (0x0003cc13) midp_keyp_rocker_pane_g1

0xe0e2,	// (0x0003eaaa) keyp_game_cell_pane_ParamLimits

0xe0e2,	// (0x0003eaaa) keyp_game_cell_pane

0x22b0,	// (0x00032c78) bg_button_pane_cp02

0xe0f5,	// (0x0003eabd) keyp_game_cell_pane_g1

0x5ddc,	// (0x000367a4) popup_fep_vkb2_window_ParamLimits

0x5ddc,	// (0x000367a4) popup_fep_vkb2_window

0x8c1c,	// (0x000395e4) aid_size_cell_vkb2_ParamLimits

0x8c1c,	// (0x000395e4) aid_size_cell_vkb2

0x8c70,	// (0x00039638) popup_fep_vkb2_window_g1_ParamLimits

0x8c70,	// (0x00039638) popup_fep_vkb2_window_g1

0x8cb8,	// (0x00039680) vkb2_area_bottom_pane_ParamLimits

0x8cb8,	// (0x00039680) vkb2_area_bottom_pane

0x8d04,	// (0x000396cc) vkb2_area_keypad_pane_ParamLimits

0x8d04,	// (0x000396cc) vkb2_area_keypad_pane

0x8d46,	// (0x0003970e) vkb2_area_top_pane_ParamLimits

0x8d46,	// (0x0003970e) vkb2_area_top_pane

0x8dc0,	// (0x00039788) vkb2_top_entry_pane_ParamLimits

0x8dc0,	// (0x00039788) vkb2_top_entry_pane

0x8dea,	// (0x000397b2) vkb2_top_grid_left_pane_ParamLimits

0x8dea,	// (0x000397b2) vkb2_top_grid_left_pane

0x8e08,	// (0x000397d0) vkb2_top_grid_right_pane_ParamLimits

0x8e08,	// (0x000397d0) vkb2_top_grid_right_pane

0x8e26,	// (0x000397ee) vkb2_cell_keypad_pane_ParamLimits

0x8e26,	// (0x000397ee) vkb2_cell_keypad_pane

0x8ef7,	// (0x000398bf) vkb2_area_bottom_grid_pane_ParamLimits

0x8ef7,	// (0x000398bf) vkb2_area_bottom_grid_pane

0x8f1d,	// (0x000398e5) vkb2_area_bottom_pane_g1_ParamLimits

0x8f1d,	// (0x000398e5) vkb2_area_bottom_pane_g1

0x8f41,	// (0x00039909) vkb2_area_bottom_pane_g2_ParamLimits

0x8f41,	// (0x00039909) vkb2_area_bottom_pane_g2

0x8f6f,	// (0x00039937) vkb2_area_bottom_pane_g3_ParamLimits

0x8f6f,	// (0x00039937) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x00040763) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x00040763) vkb2_area_bottom_pane_g

0x8fd0,	// (0x00039998) vkb2_top_cell_left_pane_ParamLimits

0x8fd0,	// (0x00039998) vkb2_top_cell_left_pane

0xe106,	// (0x0003eace) vkb2_top_entry_pane_g1_ParamLimits

0xe106,	// (0x0003eace) vkb2_top_entry_pane_g1

0xe114,	// (0x0003eadc) vkb2_top_entry_pane_t1_ParamLimits

0xe114,	// (0x0003eadc) vkb2_top_entry_pane_t1

0xe146,	// (0x0003eb0e) vkb2_top_entry_pane_t2_ParamLimits

0xe146,	// (0x0003eb0e) vkb2_top_entry_pane_t2

0xe178,	// (0x0003eb40) vkb2_top_entry_pane_t3_ParamLimits

0xe178,	// (0x0003eb40) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0004076a) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0004076a) vkb2_top_entry_pane_t

0x901d,	// (0x000399e5) vkb2_top_grid_right_pane_g1_ParamLimits

0x901d,	// (0x000399e5) vkb2_top_grid_right_pane_g1

0x9033,	// (0x000399fb) vkb2_top_grid_right_pane_g2_ParamLimits

0x9033,	// (0x000399fb) vkb2_top_grid_right_pane_g2

0x904b,	// (0x00039a13) vkb2_top_grid_right_pane_g3_ParamLimits

0x904b,	// (0x00039a13) vkb2_top_grid_right_pane_g3

0x9063,	// (0x00039a2b) vkb2_top_grid_right_pane_g4_ParamLimits

0x9063,	// (0x00039a2b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x00040771) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x00040771) vkb2_top_grid_right_pane_g

0x9079,	// (0x00039a41) vkb2_top_cell_left_pane_g1

0x9090,	// (0x00039a58) vkb2_cell_keypad_pane_g1_ParamLimits

0x9090,	// (0x00039a58) vkb2_cell_keypad_pane_g1

0xe19c,	// (0x0003eb64) vkb2_cell_keypad_pane_t1_ParamLimits

0xe19c,	// (0x0003eb64) vkb2_cell_keypad_pane_t1

0x909e,	// (0x00039a66) vkb2_cell_bottom_grid_pane_ParamLimits

0x909e,	// (0x00039a66) vkb2_cell_bottom_grid_pane

0x90d7,	// (0x00039a9f) vkb2_cell_bottom_grid_pane_g1

0xdd47,	// (0x0003e70f) aid_call2_pane_cp02

0xdd4f,	// (0x0003e717) aid_call_pane_cp02

0xdd57,	// (0x0003e71f) clock_digital_number_pane_cp10

0xdd5f,	// (0x0003e727) clock_digital_number_pane_cp11

0xdd67,	// (0x0003e72f) clock_digital_number_pane_cp12

0xdd6f,	// (0x0003e737) clock_digital_number_pane_cp13

0xdd77,	// (0x0003e73f) clock_digital_separator_pane_cp10

0x2b05,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g1

0x2b05,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g2

0xdd7f,	// (0x0003e747) popup_clock_digital_analogue_window_cp2_g3

0x2b05,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g4

0xdd7f,	// (0x0003e747) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x00040726) popup_clock_digital_analogue_window_cp2_g

0xdd87,	// (0x0003e74f) popup_clock_digital_analogue_window_cp2_t1

0xdd95,	// (0x0003e75d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x00040731) popup_clock_digital_analogue_window_cp2_t

0xc24b,	// (0x0003cc13) clock_digital_number_pane_cp10_g1

0xc24b,	// (0x0003cc13) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00040514) clock_digital_number_pane_cp10_g

0xc24b,	// (0x0003cc13) clock_digital_separator_pane_cp10_g1

0xc24b,	// (0x0003cc13) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00040514) clock_digital_separator_pane_cp10_g

0xdbc4,	// (0x0003e58c) uniindi_top_pane_g3

0xdbd5,	// (0x0003e59d) uniindi_top_pane_g4

0x8eb1,	// (0x00039879) vkb2_row_keypad_pane_ParamLimits

0x8eb1,	// (0x00039879) vkb2_row_keypad_pane

0x90f3,	// (0x00039abb) vkb2_cell_t_keypad_pane_ParamLimits

0x90f3,	// (0x00039abb) vkb2_cell_t_keypad_pane

0x9103,	// (0x00039acb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9103,	// (0x00039acb) vkb2_cell_t_keypad_pane_cp08

0x9116,	// (0x00039ade) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9116,	// (0x00039ade) vkb2_cell_t_keypad_pane_cp09

0x912a,	// (0x00039af2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x912a,	// (0x00039af2) vkb2_cell_t_keypad_pane_cp01

0x913b,	// (0x00039b03) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x913b,	// (0x00039b03) vkb2_cell_t_keypad_pane_cp02

0x914c,	// (0x00039b14) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x914c,	// (0x00039b14) vkb2_cell_t_keypad_pane_cp03

0x915d,	// (0x00039b25) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x915d,	// (0x00039b25) vkb2_cell_t_keypad_pane_cp04

0x916e,	// (0x00039b36) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x916e,	// (0x00039b36) vkb2_cell_t_keypad_pane_cp05

0x917f,	// (0x00039b47) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x917f,	// (0x00039b47) vkb2_cell_t_keypad_pane_cp06

0x9190,	// (0x00039b58) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9190,	// (0x00039b58) vkb2_cell_t_keypad_pane_cp07

0x91a1,	// (0x00039b69) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91a1,	// (0x00039b69) vkb2_cell_t_keypad_pane_cp10

0x8839,	// (0x00039201) vkb2_cell_t_keypad_pane_g1

0xe1b3,	// (0x0003eb7b) vkb2_cell_t_keypad_pane_t1

0x5ce1,	// (0x000366a9) popup_grid_graphic2_window

0xe1c5,	// (0x0003eb8d) aid_size_cell_graphic2_ParamLimits

0xe1c5,	// (0x0003eb8d) aid_size_cell_graphic2

0xe1fd,	// (0x0003ebc5) bg_popup_window_pane_cp21_ParamLimits

0xe1fd,	// (0x0003ebc5) bg_popup_window_pane_cp21

0xe20b,	// (0x0003ebd3) graphic2_pages_pane_ParamLimits

0xe20b,	// (0x0003ebd3) graphic2_pages_pane

0xe251,	// (0x0003ec19) grid_graphic2_control_pane_ParamLimits

0xe251,	// (0x0003ec19) grid_graphic2_control_pane

0xe28f,	// (0x0003ec57) grid_graphic2_pane_ParamLimits

0xe28f,	// (0x0003ec57) grid_graphic2_pane

0xe303,	// (0x0003eccb) cell_graphic2_pane

0x5ce1,	// (0x000366a9) main_comp_mode_pane

0xd416,	// (0x0003ddde) list_ai3_gene_pane_ParamLimits

0xd7e2,	// (0x0003e1aa) bg_popup_window_pane_cp19_ParamLimits

0xd7ee,	// (0x0003e1b6) bg_touch_area_indi_pane_ParamLimits

0xd7ee,	// (0x0003e1b6) bg_touch_area_indi_pane

0xd804,	// (0x0003e1cc) bg_touch_area_indi_pane_cp01_ParamLimits

0xd804,	// (0x0003e1cc) bg_touch_area_indi_pane_cp01

0xd81a,	// (0x0003e1e2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd81a,	// (0x0003e1e2) bg_touch_area_indi_pane_cp02

0xd830,	// (0x0003e1f8) bg_touch_area_indi_pane_cp03_ParamLimits

0xd830,	// (0x0003e1f8) bg_touch_area_indi_pane_cp03

0xd84a,	// (0x0003e212) popup_slider_window_g1_ParamLimits

0xd866,	// (0x0003e22e) popup_slider_window_g2_ParamLimits

0xd882,	// (0x0003e24a) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x000406bb) popup_slider_window_g_ParamLimits

0xd8e8,	// (0x0003e2b0) popup_slider_window_t1_ParamLimits

0xd95c,	// (0x0003e324) small_volume_slider_vertical_pane_ParamLimits

0xe303,	// (0x0003eccb) cell_graphic2_pane_ParamLimits

0xe352,	// (0x0003ed1a) bg_button_pane_cp10_ParamLimits

0xe352,	// (0x0003ed1a) bg_button_pane_cp10

0xe365,	// (0x0003ed2d) bg_button_pane_cp11_ParamLimits

0xe365,	// (0x0003ed2d) bg_button_pane_cp11

0xe378,	// (0x0003ed40) graphic2_pages_pane_g1_ParamLimits

0xe378,	// (0x0003ed40) graphic2_pages_pane_g1

0xe393,	// (0x0003ed5b) graphic2_pages_pane_g2_ParamLimits

0xe393,	// (0x0003ed5b) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0004077f) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0004077f) graphic2_pages_pane_g

0xe3ab,	// (0x0003ed73) graphic2_pages_pane_t1_ParamLimits

0xe3ab,	// (0x0003ed73) graphic2_pages_pane_t1

0xe3c3,	// (0x0003ed8b) cell_graphic2_control_pane_ParamLimits

0xe3c3,	// (0x0003ed8b) cell_graphic2_control_pane

0xe3e1,	// (0x0003eda9) cell_graphic2_pane_g1_ParamLimits

0xe3e1,	// (0x0003eda9) cell_graphic2_pane_g1

0xe3ee,	// (0x0003edb6) cell_graphic2_pane_g2_ParamLimits

0xe3ee,	// (0x0003edb6) cell_graphic2_pane_g2

0xe3fb,	// (0x0003edc3) cell_graphic2_pane_g3_ParamLimits

0xe3fb,	// (0x0003edc3) cell_graphic2_pane_g3

0xe408,	// (0x0003edd0) cell_graphic2_pane_g4_ParamLimits

0xe408,	// (0x0003edd0) cell_graphic2_pane_g4

0xe415,	// (0x0003eddd) cell_graphic2_pane_g5_ParamLimits

0xe415,	// (0x0003eddd) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x00040784) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x00040784) cell_graphic2_pane_g

0xe430,	// (0x0003edf8) cell_graphic2_pane_t1_ParamLimits

0xe430,	// (0x0003edf8) cell_graphic2_pane_t1

0x9ce5,	// (0x0003a6ad) grid_highlight_pane_cp11_ParamLimits

0x9ce5,	// (0x0003a6ad) grid_highlight_pane_cp11

0x244a,	// (0x00032e12) bg_button_pane_cp05

0xe467,	// (0x0003ee2f) cell_graphic2_control_pane_g1

0xc24b,	// (0x0003cc13) bg_touch_area_indi_pane_g1

0xe48f,	// (0x0003ee57) aid_cmod_rocker_key_size

0xe499,	// (0x0003ee61) aid_cmode_itu_key_size

0xe4a3,	// (0x0003ee6b) main_cmode_video_pane

0xe4ad,	// (0x0003ee75) main_comp_mode_itu_pane

0xe4b9,	// (0x0003ee81) main_comp_mode_rocker_pane

0xe4c5,	// (0x0003ee8d) cell_cmode_rocker_pane_ParamLimits

0xe4c5,	// (0x0003ee8d) cell_cmode_rocker_pane

0xe4d7,	// (0x0003ee9f) cell_cmode_itu_pane_ParamLimits

0xe4d7,	// (0x0003ee9f) cell_cmode_itu_pane

0x26d2,	// (0x0003309a) bg_button_pane_cp06_ParamLimits

0x26d2,	// (0x0003309a) bg_button_pane_cp06

0xc4bb,	// (0x0003ce83) cell_cmode_rocker_pane_g1_ParamLimits

0xc4bb,	// (0x0003ce83) cell_cmode_rocker_pane_g1

0xda21,	// (0x0003e3e9) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x0003e3e9) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x00040794) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x00040794) cell_cmode_rocker_pane_g

0x22b0,	// (0x00032c78) bg_button_pane_cp07

0xe4ec,	// (0x0003eeb4) cell_cmode_itu_pane_g1

0xe4f5,	// (0x0003eebd) cell_cmode_itu_pane_t1

0xe503,	// (0x0003eecb) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x00040799) cell_cmode_itu_pane_t

0xdc46,	// (0x0003e60e) aid_touch_ctrl_left

0xdc4e,	// (0x0003e616) aid_touch_ctrl_right

0x22b0,	// (0x00032c78) compa_mode_pane

0xe511,	// (0x0003eed9) aid_cmod_rocker_key_size_cp

0xe51b,	// (0x0003eee3) aid_cmode_itu_key_size_cp

0xe525,	// (0x0003eeed) compa_mode_pane_g1

0xe52d,	// (0x0003eef5) compa_mode_pane_g2

0xe535,	// (0x0003eefd) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0004079e) compa_mode_pane_g

0xe53d,	// (0x0003ef05) main_comp_mode_itu_pane_cp

0xe545,	// (0x0003ef0d) main_comp_mode_rocker_pane_cp

0xe54d,	// (0x0003ef15) cell_cmode_itu_pane_cp_ParamLimits

0xe54d,	// (0x0003ef15) cell_cmode_itu_pane_cp

0xe562,	// (0x0003ef2a) cell_cmode_rocker_pane_cp_ParamLimits

0xe562,	// (0x0003ef2a) cell_cmode_rocker_pane_cp

0x26d2,	// (0x0003309a) bg_button_pane_cp06_cp_ParamLimits

0x26d2,	// (0x0003309a) bg_button_pane_cp06_cp

0xc4bb,	// (0x0003ce83) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4bb,	// (0x0003ce83) cell_cmode_rocker_pane_g1_cp

0xc24b,	// (0x0003cc13) cell_cmode_rocker_pane_g2_cp

0x22b0,	// (0x00032c78) bg_button_pane_cp07_cp

0xe574,	// (0x0003ef3c) cell_cmode_itu_pane_g1_cp

0xe57d,	// (0x0003ef45) cell_cmode_itu_pane_t1_cp

0xe57d,	// (0x0003ef45) cell_cmode_itu_pane_t2_cp

0xb17a,	// (0x0003bb42) settings_code_pane_cp2

0x2320,	// (0x00032ce8) bg_popup_window_pane_cp3_ParamLimits

0x2563,	// (0x00032f2b) heading_pane_cp3_ParamLimits

0x256f,	// (0x00032f37) listscroll_popup_graphic_pane_ParamLimits

0x85e2,	// (0x00038faa) fep_hwr_aid_pane_ParamLimits

0x8b77,	// (0x0003953f) aid_touch_sctrl_top_ParamLimits

0x8b92,	// (0x0003955a) sctrl_sk_top_pane_g1_ParamLimits

0x8839,	// (0x00039201) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x000406d4) sctrl_sk_top_pane_g_ParamLimits

0x8b9f,	// (0x00039567) sctrl_sk_top_pane_t1_ParamLimits

0x8b77,	// (0x0003953f) aid_touch_sctrl_bottom_ParamLimits

0x8b9f,	// (0x00039567) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb90,	// (0x0003e558) aid_area_touch_clock

0x8d88,	// (0x00039750) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d88,	// (0x00039750) aid_vkb2_area_top_pane_cell

0x8ed3,	// (0x0003989b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8ed3,	// (0x0003989b) aid_vkb2_area_bottom_pane_cell

0xe0fe,	// (0x0003eac6) popup_char_count_window

0xe58b,	// (0x0003ef53) popup_char_count_window_g1

0xe594,	// (0x0003ef5c) popup_char_count_window_g2

0xe59d,	// (0x0003ef65) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x000407a5) popup_char_count_window_g

0xe5a6,	// (0x0003ef6e) popup_char_count_window_t1

0x8c4e,	// (0x00039616) popup_fep_char_preview_window_ParamLimits

0x8c4e,	// (0x00039616) popup_fep_char_preview_window

0x8da6,	// (0x0003976e) vkb2_top_candi_pane_ParamLimits

0x8da6,	// (0x0003976e) vkb2_top_candi_pane

0xe5b4,	// (0x0003ef7c) cell_vkb2_top_candi_pane_ParamLimits

0xe5b4,	// (0x0003ef7c) cell_vkb2_top_candi_pane

0x91b6,	// (0x00039b7e) bg_popup_fep_char_preview_window_ParamLimits

0x91b6,	// (0x00039b7e) bg_popup_fep_char_preview_window

0x91c4,	// (0x00039b8c) popup_fep_char_preview_window_t1_ParamLimits

0x91c4,	// (0x00039b8c) popup_fep_char_preview_window_t1

0xe601,	// (0x0003efc9) bg_popup_fep_char_preview_window_g1

0xe609,	// (0x0003efd1) bg_popup_fep_char_preview_window_g2

0xe611,	// (0x0003efd9) bg_popup_fep_char_preview_window_g3

0xe619,	// (0x0003efe1) bg_popup_fep_char_preview_window_g4

0xe621,	// (0x0003efe9) bg_popup_fep_char_preview_window_g5

0x91fe,	// (0x00039bc6) bg_popup_fep_char_preview_window_g6

0xe629,	// (0x0003eff1) bg_popup_fep_char_preview_window_g7

0xe631,	// (0x0003eff9) bg_popup_fep_char_preview_window_g8

0xe639,	// (0x0003f001) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x000407ac) bg_popup_fep_char_preview_window_g

0x8839,	// (0x00039201) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8839,	// (0x00039201) cell_vkb2_top_candi_pane_g1

0x8847,	// (0x0003920f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8847,	// (0x0003920f) cell_vkb2_top_candi_pane_g2

0xd9bc,	// (0x0003e384) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd9bc,	// (0x0003e384) cell_vkb2_top_candi_pane_g3

0x9206,	// (0x00039bce) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9206,	// (0x00039bce) cell_vkb2_top_candi_pane_g4

0xc9a7,	// (0x0003d36f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9a7,	// (0x0003d36f) cell_vkb2_top_candi_pane_g5

0x9227,	// (0x00039bef) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9227,	// (0x00039bef) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x000407bf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x000407bf) cell_vkb2_top_candi_pane_g

0x9235,	// (0x00039bfd) cell_vkb2_top_candi_pane_t1

0x82f2,	// (0x00038cba) aid_size_touch_slider_mark_ParamLimits

0x82f2,	// (0x00038cba) aid_size_touch_slider_mark

0xe241,	// (0x0003ec09) grid_graphic2_catg_pane_ParamLimits

0xe241,	// (0x0003ec09) grid_graphic2_catg_pane

0xe2df,	// (0x0003eca7) popup_grid_graphic2_window_t1_ParamLimits

0xe2df,	// (0x0003eca7) popup_grid_graphic2_window_t1

0xe2f1,	// (0x0003ecb9) popup_grid_graphic2_window_t2_ParamLimits

0xe2f1,	// (0x0003ecb9) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0004077a) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0004077a) popup_grid_graphic2_window_t

0x244a,	// (0x00032e12) bg_button_pane_cp05_ParamLimits

0xe467,	// (0x0003ee2f) cell_graphic2_control_pane_g1_ParamLimits

0xe641,	// (0x0003f009) cell_graphic2_catg_pane_ParamLimits

0xe641,	// (0x0003f009) cell_graphic2_catg_pane

0x22b0,	// (0x00032c78) bg_button_pane_cp12

0xe653,	// (0x0003f01b) cell_graphic2_catg_pane_g1

0xdb5b,	// (0x0003e523) cell_tb_ext_pane_t1_ParamLimits

0x8ff0,	// (0x000399b8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ff0,	// (0x000399b8) vkb2_top_cell_right_narrow_pane

0x9008,	// (0x000399d0) vkb2_top_cell_right_wide_pane_ParamLimits

0x9008,	// (0x000399d0) vkb2_top_cell_right_wide_pane

0x85d4,	// (0x00038f9c) bg_vkb2_func_pane_ParamLimits

0x85d4,	// (0x00038f9c) bg_vkb2_func_pane

0x9079,	// (0x00039a41) vkb2_top_cell_left_pane_g1_ParamLimits

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp03

0x90d7,	// (0x00039a9f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c79,	// (0x0003a641) bg_vkb2_func_pane_g1

0x9c81,	// (0x0003a649) bg_vkb2_func_pane_g2

0x9c91,	// (0x0003a659) bg_vkb2_func_pane_g3

0x9c89,	// (0x0003a651) bg_vkb2_func_pane_g4

0x9c99,	// (0x0003a661) bg_vkb2_func_pane_g5

0x9ca1,	// (0x0003a669) bg_vkb2_func_pane_g6

0x9ca9,	// (0x0003a671) bg_vkb2_func_pane_g7

0x9cb1,	// (0x0003a679) bg_vkb2_func_pane_g8

0x9c71,	// (0x0003a639) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x000407cc) bg_vkb2_func_pane_g

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp01

0x9079,	// (0x00039a41) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9079,	// (0x00039a41) vkb2_top_cell_right_wide_pane_g1

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x85d4,	// (0x00038f9c) bg_vkb2_fuc_pane_cp02

0x90d7,	// (0x00039a9f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x90d7,	// (0x00039a9f) vkb2_top_cell_right_narrow_pane_g1

0xd75c,	// (0x0003e124) aid_touch_area_decrease_ParamLimits

0xd75c,	// (0x0003e124) aid_touch_area_decrease

0xd780,	// (0x0003e148) aid_touch_area_increase_ParamLimits

0xd780,	// (0x0003e148) aid_touch_area_increase

0xd798,	// (0x0003e160) aid_touch_area_mute_ParamLimits

0xd798,	// (0x0003e160) aid_touch_area_mute

0xd7b4,	// (0x0003e17c) aid_touch_area_slider_ParamLimits

0xd7b4,	// (0x0003e17c) aid_touch_area_slider

0xd89e,	// (0x0003e266) popup_slider_window_g4_ParamLimits

0xd89e,	// (0x0003e266) popup_slider_window_g4

0xd8b6,	// (0x0003e27e) popup_slider_window_g5_ParamLimits

0xd8b6,	// (0x0003e27e) popup_slider_window_g5

0xd8d8,	// (0x0003e2a0) popup_slider_window_g6_ParamLimits

0xd8d8,	// (0x0003e2a0) popup_slider_window_g6

0xd916,	// (0x0003e2de) popup_slider_window_t2_ParamLimits

0xd916,	// (0x0003e2de) popup_slider_window_t2

0x0001,

0xfd00,	// (0x000406c8) popup_slider_window_t_ParamLimits

0xfd00,	// (0x000406c8) popup_slider_window_t

0xd92e,	// (0x0003e2f6) slider_pane_ParamLimits

0xd92e,	// (0x0003e2f6) slider_pane

0xe65c,	// (0x0003f024) slider_pane_g1_ParamLimits

0xe65c,	// (0x0003f024) slider_pane_g1

0xe670,	// (0x0003f038) slider_pane_g2_ParamLimits

0xe670,	// (0x0003f038) slider_pane_g2

0xe686,	// (0x0003f04e) slider_pane_g3_ParamLimits

0xe686,	// (0x0003f04e) slider_pane_g3

0x0003,

0xfe17,	// (0x000407df) slider_pane_g_ParamLimits

0xfe17,	// (0x000407df) slider_pane_g

0x7ece,	// (0x00038896) popup_tb_float_extension_window_ParamLimits

0x7ece,	// (0x00038896) popup_tb_float_extension_window

0xe6b2,	// (0x0003f07a) aid_size_cell_tb_float_ext

0x22b0,	// (0x00032c78) bg_popup_sub_window_cp28

0xe6be,	// (0x0003f086) grid_tb_float_ext_pane

0xe6c8,	// (0x0003f090) cell_tb_float_ext_pane_ParamLimits

0xe6c8,	// (0x0003f090) cell_tb_float_ext_pane

0xe6e2,	// (0x0003f0aa) cell_tb_float_ext_pane_g1

0xe6eb,	// (0x0003f0b3) grid_highlight_pane_cp12

0x8723,	// (0x000390eb) cell_last_hwr_side_pane_ParamLimits

0x8723,	// (0x000390eb) cell_last_hwr_side_pane

0xc24b,	// (0x0003cc13) cell_last_hwr_side_pane_g1

0xe6f4,	// (0x0003f0bc) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x000407e8) cell_last_hwr_side_pane_g

0x8f9f,	// (0x00039967) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8f9f,	// (0x00039967) vkb2_area_bottom_space_btn_pane

0x8839,	// (0x00039201) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1b3,	// (0x0003eb7b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9235,	// (0x00039bfd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9254,	// (0x00039c1c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9254,	// (0x00039c1c) vkb2_area_bottom_space_btn_pane_g1

0x928e,	// (0x00039c56) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x928e,	// (0x00039c56) vkb2_area_bottom_space_btn_pane_g2

0x92c4,	// (0x00039c8c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x92c4,	// (0x00039c8c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x000407ed) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x000407ed) vkb2_area_bottom_space_btn_pane_g

0x8697,	// (0x0003905f) cel_fep_hwr_func_pane_ParamLimits

0x8697,	// (0x0003905f) cel_fep_hwr_func_pane

0x86d3,	// (0x0003909b) cell_hwr_side_button_pane_ParamLimits

0x86d3,	// (0x0003909b) cell_hwr_side_button_pane

0xdb90,	// (0x0003e558) aid_area_touch_clock_ParamLimits

0x244a,	// (0x00032e12) bg_uniindi_top_pane_ParamLimits

0xdba2,	// (0x0003e56a) uniindi_top_pane_g1_ParamLimits

0xdbb8,	// (0x0003e580) uniindi_top_pane_g2_ParamLimits

0xdbc4,	// (0x0003e58c) uniindi_top_pane_g3_ParamLimits

0xdbd5,	// (0x0003e59d) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x00040700) uniindi_top_pane_g_ParamLimits

0xdbe2,	// (0x0003e5aa) uniindi_top_pane_t1_ParamLimits

0x244a,	// (0x00032e12) bg_vkb2_func_pane_cp01_ParamLimits

0x244a,	// (0x00032e12) bg_vkb2_func_pane_cp01

0xe6fd,	// (0x0003f0c5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6fd,	// (0x0003f0c5) cel_fep_hwr_func_pane_g1

0x244a,	// (0x00032e12) bg_vkb2_func_pane_cp02_ParamLimits

0x244a,	// (0x00032e12) bg_vkb2_func_pane_cp02

0xe6fd,	// (0x0003f0c5) cell_hwr_side_button_pane_g1_ParamLimits

0xe6fd,	// (0x0003f0c5) cell_hwr_side_button_pane_g1

0x9af5,	// (0x0003a4bd) status_pane_g4_ParamLimits

0x9af5,	// (0x0003a4bd) status_pane_g4

0x9b0f,	// (0x0003a4d7) status_pane_t1

0xbf86,	// (0x0003c94e) form2_midp_gauge_slider_cont_pane

0xbf8e,	// (0x0003c956) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa0,	// (0x0003c968) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb2,	// (0x0003c97a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000404c7) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc4,	// (0x0003c98c) form2_midp_slider_pane_ParamLimits

0x8c0e,	// (0x000395d6) aid_size_cell_func_vkb2_ParamLimits

0x8c0e,	// (0x000395d6) aid_size_cell_func_vkb2

0xe69e,	// (0x0003f066) slider_pane_g4_ParamLimits

0xe69e,	// (0x0003f066) slider_pane_g4

0x930e,	// (0x00039cd6) form2_midp_gauge_slider_pane_t2_cp01

0x931c,	// (0x00039ce4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x931c,	// (0x00039ce4) form2_midp_gauge_slider_pane_t3_cp01

0x9339,	// (0x00039d01) form2_midp_slider_pane_cp01

0x22b0,	// (0x00032c78) navi_smil_pane

0xe736,	// (0x0003f0fe) navi_smil_pane_g1

0xe73e,	// (0x0003f106) navi_smil_pane_t1

0xe70b,	// (0x0003f0d3) form2_midp_slider_pane_g1

0xe714,	// (0x0003f0dc) form2_midp_slider_pane_g2

0xe71c,	// (0x0003f0e4) form2_midp_slider_pane_g3

0xe70b,	// (0x0003f0d3) form2_midp_slider_pane_g4

0xe724,	// (0x0003f0ec) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x000407f6) form2_midp_slider_pane_g

0x92fe,	// (0x00039cc6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x92fe,	// (0x00039cc6) vkb2_area_bottom_space_btn_pane_g4

0x9924,	// (0x0003a2ec) lc0_navi_pane_ParamLimits

0x9924,	// (0x0003a2ec) lc0_navi_pane

0x999a,	// (0x0003a362) lc0_stat_indi_pane_ParamLimits

0x999a,	// (0x0003a362) lc0_stat_indi_pane

0x99b1,	// (0x0003a379) ls0_title_pane_ParamLimits

0x99b1,	// (0x0003a379) ls0_title_pane

0x26d2,	// (0x0003309a) bg_popup_sub_pane_cp14_ParamLimits

0xdb77,	// (0x0003e53f) list_uniindi_pane_ParamLimits

0xdb83,	// (0x0003e54b) uniindi_top_pane_ParamLimits

0xdc1e,	// (0x0003e5e6) list_single_uniindi_pane_g1_ParamLimits

0xdc31,	// (0x0003e5f9) list_single_uniindi_pane_t1_ParamLimits

0x9342,	// (0x00039d0a) lc0_stat_clock_pane_ParamLimits

0x9342,	// (0x00039d0a) lc0_stat_clock_pane

0xe74c,	// (0x0003f114) lc0_stat_indi_pane_g1_ParamLimits

0xe74c,	// (0x0003f114) lc0_stat_indi_pane_g1

0xe759,	// (0x0003f121) lc0_stat_indi_pane_g2_ParamLimits

0xe759,	// (0x0003f121) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x00040801) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x00040801) lc0_stat_indi_pane_g

0x934f,	// (0x00039d17) lc0_uni_indicator_pane_ParamLimits

0x934f,	// (0x00039d17) lc0_uni_indicator_pane

0xe766,	// (0x0003f12e) ls0_title_pane_g1_ParamLimits

0xe766,	// (0x0003f12e) ls0_title_pane_g1

0xe77a,	// (0x0003f142) ls0_title_pane_t1_ParamLimits

0xe77a,	// (0x0003f142) ls0_title_pane_t1

0x935c,	// (0x00039d24) lc0_uni_indicator_pane_g1_ParamLimits

0x935c,	// (0x00039d24) lc0_uni_indicator_pane_g1

0xe7b0,	// (0x0003f178) lc0_stat_clock_pane_t1

0x5ce1,	// (0x000366a9) main_ai5_pane

0xe7be,	// (0x0003f186) ai5_sk_pane_ParamLimits

0xe7be,	// (0x0003f186) ai5_sk_pane

0xe7cb,	// (0x0003f193) cell_ai5_widget_pane_ParamLimits

0xe7cb,	// (0x0003f193) cell_ai5_widget_pane

0xe87d,	// (0x0003f245) aid_size_cell_widget_grid

0xe88b,	// (0x0003f253) bg_ai5_widget_pane_ParamLimits

0xe88b,	// (0x0003f253) bg_ai5_widget_pane

0xe903,	// (0x0003f2cb) cell_ai5_widget_pane_g2

0xe917,	// (0x0003f2df) cell_ai5_widget_pane_g3

0xe931,	// (0x0003f2f9) cell_ai5_widget_pane_g4

0xe941,	// (0x0003f309) cell_ai5_widget_pane_g5

0xe951,	// (0x0003f319) cell_ai5_widget_pane_g6

0xe95d,	// (0x0003f325) cell_ai5_widget_pane_g7

0xe9a5,	// (0x0003f36d) cell_ai5_widget_pane_t1_ParamLimits

0xe9a5,	// (0x0003f36d) cell_ai5_widget_pane_t1

0xe9c2,	// (0x0003f38a) cell_ai5_widget_pane_t2_ParamLimits

0xe9c2,	// (0x0003f38a) cell_ai5_widget_pane_t2

0xe9da,	// (0x0003f3a2) cell_ai5_widget_pane_t3_ParamLimits

0xe9da,	// (0x0003f3a2) cell_ai5_widget_pane_t3

0xe9f2,	// (0x0003f3ba) cell_ai5_widget_pane_t4_ParamLimits

0xe9f2,	// (0x0003f3ba) cell_ai5_widget_pane_t4

0xea18,	// (0x0003f3e0) cell_ai5_widget_pane_t5_ParamLimits

0xea18,	// (0x0003f3e0) cell_ai5_widget_pane_t5

0xea38,	// (0x0003f400) cell_ai5_widget_pane_t6_ParamLimits

0xea38,	// (0x0003f400) cell_ai5_widget_pane_t6

0xea4a,	// (0x0003f412) cell_ai5_widget_pane_t7_ParamLimits

0xea4a,	// (0x0003f412) cell_ai5_widget_pane_t7

0xea63,	// (0x0003f42b) cell_ai5_widget_pane_t8_ParamLimits

0xea63,	// (0x0003f42b) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0004081b) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0004081b) cell_ai5_widget_pane_t

0xeac2,	// (0x0003f48a) grid_ai5_widget_pane

0x26d2,	// (0x0003309a) highlight_cell_ai5_widget_pane_ParamLimits

0x26d2,	// (0x0003309a) highlight_cell_ai5_widget_pane

0xead0,	// (0x0003f498) ai5_sk_left_pane

0xeada,	// (0x0003f4a2) ai5_sk_middle_pane

0xeae4,	// (0x0003f4ac) ai5_sk_right_pane

0xeaee,	// (0x0003f4b6) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x0003f4b6) bg_ai5_widget_pane_g1

0xeafa,	// (0x0003f4c2) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x0003f4c2) bg_ai5_widget_pane_g2

0xeb06,	// (0x0003f4ce) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x0003f4ce) bg_ai5_widget_pane_g3

0xeb12,	// (0x0003f4da) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x0003f4da) bg_ai5_widget_pane_g4

0xeb1e,	// (0x0003f4e6) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x0003f4e6) bg_ai5_widget_pane_g5

0xeb2a,	// (0x0003f4f2) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x0003f4f2) bg_ai5_widget_pane_g6

0xeb36,	// (0x0003f4fe) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x0003f4fe) bg_ai5_widget_pane_g7

0xeb42,	// (0x0003f50a) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x0003f50a) bg_ai5_widget_pane_g8

0xeb4e,	// (0x0003f516) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x0003f516) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x00040830) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x00040830) bg_ai5_widget_pane_g

0xeb80,	// (0x0003f548) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x0003f548) cell_shortcut_ai5_widget_pane

0x7516,	// (0x00037ede) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x0003f559) cell_grid_ai5_widget_pane_g1

0x7516,	// (0x00037ede) highlight_cell_shortcut_ai5_widget_pane

0x9c79,	// (0x0003a641) ai5_sk_left_pane_g1

0xeb9a,	// (0x0003f562) ai5_sk_left_pane_g2

0xeba2,	// (0x0003f56a) ai5_sk_left_pane_g3

0xebaa,	// (0x0003f572) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x00040843) ai5_sk_left_pane_g

0xebb2,	// (0x0003f57a) ai5_sk_left_pane_t1

0x9c81,	// (0x0003a649) ai5_sk_right_pane_g1

0xebc0,	// (0x0003f588) ai5_sk_right_pane_g2

0xebc8,	// (0x0003f590) ai5_sk_right_pane_g3

0xebd0,	// (0x0003f598) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0004084c) ai5_sk_right_pane_g

0xebd8,	// (0x0003f5a0) ai5_sk_right_pane_t1

0x9c81,	// (0x0003a649) ai5_sk_middle_pane_g1

0x9c79,	// (0x0003a641) ai5_sk_middle_pane_g2

0x9c99,	// (0x0003a661) ai5_sk_middle_pane_g3

0xebc8,	// (0x0003f590) ai5_sk_middle_pane_g4

0xeba2,	// (0x0003f56a) ai5_sk_middle_pane_g5

0xebe6,	// (0x0003f5ae) ai5_sk_middle_pane_g6

0xebee,	// (0x0003f5b6) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x00040855) ai5_sk_middle_pane_g

0x97aa,	// (0x0003a172) aid_touch_area_size_lc0_ParamLimits

0x97aa,	// (0x0003a172) aid_touch_area_size_lc0

0x8868,	// (0x00039230) cell_hwr_candidate_pane_t1_ParamLimits

0x97c6,	// (0x0003a18e) aid_touch_navi_pane

0x9a9f,	// (0x0003a467) status_dt_navi_pane_ParamLimits

0x9a9f,	// (0x0003a467) status_dt_navi_pane

0x9aac,	// (0x0003a474) status_dt_sta_pane_ParamLimits

0x9aac,	// (0x0003a474) status_dt_sta_pane

0xebf6,	// (0x0003f5be) dt_sta_controll_pane

0xec03,	// (0x0003f5cb) dt_sta_indi_pane

0xec14,	// (0x0003f5dc) dt_sta_title_pane

0x244a,	// (0x00032e12) bg_dt_sta_indi_pane_ParamLimits

0x244a,	// (0x00032e12) bg_dt_sta_indi_pane

0xec27,	// (0x0003f5ef) dt_sta_battery_pane

0xec2f,	// (0x0003f5f7) dt_sta_indi_pane_g1

0xec38,	// (0x0003f600) dt_sta_indi_pane_g2

0xec41,	// (0x0003f609) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x00040864) dt_sta_indi_pane_g

0xec4a,	// (0x0003f612) dt_sta_signal_pane

0x26d2,	// (0x0003309a) bg_dt_sta_title_pane_ParamLimits

0x26d2,	// (0x0003309a) bg_dt_sta_title_pane

0xaab3,	// (0x0003b47b) dt_sta_title_pane_g1

0xec53,	// (0x0003f61b) dt_sta_title_pane_t1_ParamLimits

0xec53,	// (0x0003f61b) dt_sta_title_pane_t1

0x22b0,	// (0x00032c78) bg_dt_sta_control_pane

0xec68,	// (0x0003f630) dt_sta_controll_pane_g1

0xec71,	// (0x0003f639) bg_dt_sta_title_pane_g1

0xec7a,	// (0x0003f642) bg_dt_sta_title_pane_g2

0xec83,	// (0x0003f64b) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0004086b) bg_dt_sta_title_pane_g

0xc24b,	// (0x0003cc13) bg_dt_sta_indi_pane_g1

0xec8c,	// (0x0003f654) dt_sta_signal_pane_g1

0xec94,	// (0x0003f65c) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x00040872) dt_sta_signal_pane_g

0xec9c,	// (0x0003f664) dt_sta_battery_pane_g1

0xeca5,	// (0x0003f66d) dt_sta_battery_pane_t1

0xc24b,	// (0x0003cc13) bg_dt_sta_control_pane_g1

0x2b88,	// (0x00033550) fep_china_uni_eep_pane

0x2b90,	// (0x00033558) fep_china_uni_entry_pane_ParamLimits

0x2ba0,	// (0x00033568) popup_fep_china_uni_window_g1_ParamLimits

0x2bb0,	// (0x00033578) popup_fep_china_uni_window_g2_ParamLimits

0x2bb0,	// (0x00033578) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x000400db) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x000400db) popup_fep_china_uni_window_g

0xecb4,	// (0x0003f67c) fep_china_uni_eep_pane_g1

0xecbc,	// (0x0003f684) fep_china_uni_eep_pane_t1

0xe72d,	// (0x0003f0f5) aid_touch_area_size_smil_player

0x991c,	// (0x0003a2e4) lc0_clock_pane

0x9b03,	// (0x0003a4cb) status_pane_g5_ParamLimits

0x9b03,	// (0x0003a4cb) status_pane_g5

0x7b8f,	// (0x00038557) popup_keymap_window

0x9ac1,	// (0x0003a489) status_icon_pane

0xe917,	// (0x0003f2df) cell_ai5_widget_pane_g3_ParamLimits

0xe931,	// (0x0003f2f9) cell_ai5_widget_pane_g4_ParamLimits

0xe941,	// (0x0003f309) cell_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0003f331) cell_ai5_widget_pane_g8_ParamLimits

0xe969,	// (0x0003f331) cell_ai5_widget_pane_g8

0xe97d,	// (0x0003f345) cell_ai5_widget_pane_g9_ParamLimits

0xe97d,	// (0x0003f345) cell_ai5_widget_pane_g9

0xe991,	// (0x0003f359) cell_ai5_widget_pane_g10_ParamLimits

0xe991,	// (0x0003f359) cell_ai5_widget_pane_g10

0xeccb,	// (0x0003f693) status_icon_pane_g1

0x22b0,	// (0x00032c78) bg_popup_sub_pane_cp13

0xecd3,	// (0x0003f69b) popup_keymap_window_t1

0x96fb,	// (0x0003a0c3) control_pane_g6_ParamLimits

0x96fb,	// (0x0003a0c3) control_pane_g6

0x9708,	// (0x0003a0d0) control_pane_g7_ParamLimits

0x9708,	// (0x0003a0d0) control_pane_g7

0x9715,	// (0x0003a0dd) control_pane_g8_ParamLimits

0x9715,	// (0x0003a0dd) control_pane_g8

0xebf6,	// (0x0003f5be) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x0003f5cb) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x0003f5dc) dt_sta_title_pane_ParamLimits

0x261d,	// (0x00032fe5) aid_size_touch_scroll_bar_cale

0x5dba,	// (0x00036782) popup_discreet_window_ParamLimits

0x5dba,	// (0x00036782) popup_discreet_window

0x5e34,	// (0x000367fc) popup_sk_window

0xa2f7,	// (0x0003acbf) bg_popup_sub_pane_cp28_ParamLimits

0xa2f7,	// (0x0003acbf) bg_popup_sub_pane_cp28

0xece1,	// (0x0003f6a9) popup_discreet_window_g1_ParamLimits

0xece1,	// (0x0003f6a9) popup_discreet_window_g1

0xed01,	// (0x0003f6c9) popup_discreet_window_t1_ParamLimits

0xed01,	// (0x0003f6c9) popup_discreet_window_t1

0xed1f,	// (0x0003f6e7) popup_discreet_window_t2_ParamLimits

0xed1f,	// (0x0003f6e7) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x00040877) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x00040877) popup_discreet_window_t

0x9370,	// (0x00039d38) popup_sk_window_g1

0x937a,	// (0x00039d42) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0004087e) popup_sk_window_g

0x9382,	// (0x00039d4a) popup_sk_window_t1

0x9390,	// (0x00039d58) popup_sk_window_t1_copy1

0xe903,	// (0x0003f2cb) cell_ai5_widget_pane_g2_ParamLimits

0xea75,	// (0x0003f43d) cell_ai5_widget_pane_t9_ParamLimits

0xea75,	// (0x0003f43d) cell_ai5_widget_pane_t9

0x22b0,	// (0x00032c78) main_fep_fshwr2_pane

0x939e,	// (0x00039d66) aid_fshwr2_btn_pane

0x93aa,	// (0x00039d72) aid_fshwr2_syb_pane

0x93bc,	// (0x00039d84) aid_fshwr2_txt_pane

0x93c8,	// (0x00039d90) fshwr2_func_candi_pane

0x93e6,	// (0x00039dae) fshwr2_hwr_syb_pane

0x9400,	// (0x00039dc8) fshwr2_icf_pane

0x5ce1,	// (0x000366a9) fshwr2_icf_bg_pane

0x942c,	// (0x00039df4) fshwr2_icf_pane_t1_ParamLimits

0x942c,	// (0x00039df4) fshwr2_icf_pane_t1

0x2b05,	// (0x000334cd) fshwr2_func_candi_pane_g1

0xed71,	// (0x0003f739) fshwr2_func_candi_row_pane_ParamLimits

0xed71,	// (0x0003f739) fshwr2_func_candi_row_pane

0x9445,	// (0x00039e0d) cell_fshwr2_syb_pane_ParamLimits

0x9445,	// (0x00039e0d) cell_fshwr2_syb_pane

0x9468,	// (0x00039e30) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9468,	// (0x00039e30) fshwr2_hwr_syb_pane_g1

0x5ce1,	// (0x000366a9) bg_popup_call_pane_cp01

0x9476,	// (0x00039e3e) fshwr2_func_candi_cell_pane_ParamLimits

0x9476,	// (0x00039e3e) fshwr2_func_candi_cell_pane

0xa953,	// (0x0003b31b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa953,	// (0x0003b31b) fshwr2_func_candi_cell_bg_pane

0x94c1,	// (0x00039e89) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94c1,	// (0x00039e89) fshwr2_func_candi_cell_pane_g1

0x94e9,	// (0x00039eb1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94e9,	// (0x00039eb1) fshwr2_func_candi_cell_pane_t1

0x5ce1,	// (0x000366a9) bg_button_pane_cp08

0xed98,	// (0x0003f760) cell_fshwr2_syb_bg_pane

0x94fc,	// (0x00039ec4) cell_fshwr2_syb_bg_pane_g1

0x9510,	// (0x00039ed8) cell_fshwr2_syb_bg_pane_t1

0x26d2,	// (0x0003309a) main_tmo_pane

0xadec,	// (0x0003b7b4) uni_indicator_pane_g1_ParamLimits

0xadff,	// (0x0003b7c7) uni_indicator_pane_g2_ParamLimits

0xae11,	// (0x0003b7d9) uni_indicator_pane_g3_ParamLimits

0xae20,	// (0x0003b7e8) uni_indicator_pane_g4_ParamLimits

0xae20,	// (0x0003b7e8) uni_indicator_pane_g4

0xae34,	// (0x0003b7fc) uni_indicator_pane_g5_ParamLimits

0xae34,	// (0x0003b7fc) uni_indicator_pane_g5

0xae34,	// (0x0003b7fc) uni_indicator_pane_g6_ParamLimits

0xae34,	// (0x0003b7fc) uni_indicator_pane_g6

0xf912,	// (0x000402da) uni_indicator_pane_g_ParamLimits

0xd73e,	// (0x0003e106) popup_tmo_note_window_ParamLimits

0xd73e,	// (0x0003e106) popup_tmo_note_window

0x8bf0,	// (0x000395b8) fshwr2_bg_pane

0x94da,	// (0x00039ea2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x94da,	// (0x00039ea2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x00040883) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x00040883) fshwr2_func_candi_cell_pane_g

0x8821,	// (0x000391e9) bg_popup_window_pane_cp01

0x9526,	// (0x00039eee) bg_popup_window_pane_g1_cp01

0xeda4,	// (0x0003f76c) bg_popup_window_pane_cp22_ParamLimits

0xeda4,	// (0x0003f76c) bg_popup_window_pane_cp22

0xedb2,	// (0x0003f77a) listscroll_tmo_link_pane_ParamLimits

0xedb2,	// (0x0003f77a) listscroll_tmo_link_pane

0xedf2,	// (0x0003f7ba) popup_tmo_note_window_g1_ParamLimits

0xedf2,	// (0x0003f7ba) popup_tmo_note_window_g1

0xedff,	// (0x0003f7c7) tmo_note_info_pane_ParamLimits

0xedff,	// (0x0003f7c7) tmo_note_info_pane

0xee19,	// (0x0003f7e1) list_tmo_note_info_pane_g1_ParamLimits

0xee19,	// (0x0003f7e1) list_tmo_note_info_pane_g1

0xee30,	// (0x0003f7f8) list_tmo_note_info_pane_g2_ParamLimits

0xee30,	// (0x0003f7f8) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x00040888) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x00040888) list_tmo_note_info_pane_g

0xee4c,	// (0x0003f814) list_tmo_note_info_text_pane_ParamLimits

0xee4c,	// (0x0003f814) list_tmo_note_info_text_pane

0xeecd,	// (0x0003f895) list_tmo_link_pane

0xeeda,	// (0x0003f8a2) scroll_pane_cp20

0xeee7,	// (0x0003f8af) list_single_tmo_link_pane_ParamLimits

0xeee7,	// (0x0003f8af) list_single_tmo_link_pane

0xeef7,	// (0x0003f8bf) list_single_tmo_link_pane_t1

0xef05,	// (0x0003f8cd) list_tmo_note_info_text_pane_t1_ParamLimits

0xef05,	// (0x0003f8cd) list_tmo_note_info_text_pane_t1

0x6b04,	// (0x000374cc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b04,	// (0x000374cc) aid_size_touch_scroll_bar_cp01

0x69f6,	// (0x000373be) aid_size_touch_slider_marker

0x5e1c,	// (0x000367e4) popup_settings_window_ParamLimits

0x5e1c,	// (0x000367e4) popup_settings_window

0x474b,	// (0x00035113) popup_candi_list_indi_window

0x97c6,	// (0x0003a18e) aid_touch_navi_pane_ParamLimits

0x8b4b,	// (0x00039513) rs_clock_indi_pane

0x8b54,	// (0x0003951c) sctrl_sk_bottom_pane_ParamLimits

0x8b65,	// (0x0003952d) sctrl_sk_top_pane_ParamLimits

0x8c68,	// (0x00039630) popup_fep_tooltip_window

0xe87d,	// (0x0003f245) aid_size_cell_widget_grid_ParamLimits

0xe8ee,	// (0x0003f2b6) cell_ai5_widget_pane_g1_ParamLimits

0xe8ee,	// (0x0003f2b6) cell_ai5_widget_pane_g1

0xe951,	// (0x0003f319) cell_ai5_widget_pane_g6_ParamLimits

0xe95d,	// (0x0003f325) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x00040806) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x00040806) cell_ai5_widget_pane_g

0xeaa4,	// (0x0003f46c) cell_ai5_widget_pane_t10_ParamLimits

0xeaa4,	// (0x0003f46c) cell_ai5_widget_pane_t10

0xeac2,	// (0x0003f48a) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0003f522) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0003f522) cell_contacts_ai5_widget_pane

0xed34,	// (0x0003f6fc) popup_discreet_window_t3_ParamLimits

0xed34,	// (0x0003f6fc) popup_discreet_window_t3

0x9418,	// (0x00039de0) popup_fshwr2_char_preview_window_ParamLimits

0x9418,	// (0x00039de0) popup_fshwr2_char_preview_window

0xee6a,	// (0x0003f832) tmo_note_info_pane_t1

0xee7f,	// (0x0003f847) tmo_note_info_pane_t2

0xee94,	// (0x0003f85c) tmo_note_info_pane_t3

0xeea9,	// (0x0003f871) tmo_note_info_pane_t4

0xeebb,	// (0x0003f883) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0004088d) tmo_note_info_pane_t

0xeecd,	// (0x0003f895) list_tmo_link_pane_ParamLimits

0xeeda,	// (0x0003f8a2) scroll_pane_cp20_ParamLimits

0x5ce1,	// (0x000366a9) bg_popup_fep_char_preview_window_cp01

0xef1e,	// (0x0003f8e6) popup_fshwr2_char_preview_window_t1

0xef2c,	// (0x0003f8f4) popup_candi_list_indi_window_g1

0xef35,	// (0x0003f8fd) bg_cell_contacts_ai5_widget_pane

0xef41,	// (0x0003f909) cell_contacts_ai5_widget_pane_g1

0xc8fc,	// (0x0003d2c4) cell_contacts_ai5_widget_pane_g2

0xef56,	// (0x0003f91e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x00040898) cell_contacts_ai5_widget_pane_g

0xef62,	// (0x0003f92a) cell_contacts_ai5_widget_pane_t1

0x26d2,	// (0x0003309a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd9,	// (0x0003f9a1) settings_container_pane

0x7516,	// (0x00037ede) listscroll_set_pane_copy1

0xb94d,	// (0x0003c315) scroll_pane_cp121_copy1

0xa0a4,	// (0x0003aa6c) set_content_pane_copy1

0xefe5,	// (0x0003f9ad) aid_height_set_list_copy1_ParamLimits

0xefe5,	// (0x0003f9ad) aid_height_set_list_copy1

0xb02c,	// (0x0003b9f4) aid_size_parent_copy1_ParamLimits

0xb02c,	// (0x0003b9f4) aid_size_parent_copy1

0xeff1,	// (0x0003f9b9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff1,	// (0x0003f9b9) button_value_adjust_pane_cp6_copy1

0x974a,	// (0x0003a112) list_highlight_pane_cp2_copy1_ParamLimits

0x974a,	// (0x0003a112) list_highlight_pane_cp2_copy1

0xf005,	// (0x0003f9cd) list_set_pane_copy1_ParamLimits

0xf005,	// (0x0003f9cd) list_set_pane_copy1

0xef74,	// (0x0003f93c) main_pane_set_t1_copy1_ParamLimits

0xef74,	// (0x0003f93c) main_pane_set_t1_copy1

0xefae,	// (0x0003f976) main_pane_set_t2_copy1_ParamLimits

0xefae,	// (0x0003f976) main_pane_set_t2_copy1

0xf0b2,	// (0x0003fa7a) main_pane_set_t3_copy1

0xf0c0,	// (0x0003fa88) main_pane_set_t4_copy1

0xefcd,	// (0x0003f995) set_content_pane_g1_copy1_ParamLimits

0xefcd,	// (0x0003f995) set_content_pane_g1_copy1

0xf0ce,	// (0x0003fa96) setting_code_pane_copy1

0xf0d6,	// (0x0003fa9e) setting_slider_graphic_pane_copy1

0xf0d6,	// (0x0003fa9e) setting_slider_pane_copy1

0xf0d6,	// (0x0003fa9e) setting_text_pane_copy1

0xf0d6,	// (0x0003fa9e) setting_volume_pane_copy1

0xf0ce,	// (0x0003fa96) settings_code_pane_cp2_copy1

0xf0de,	// (0x0003faa6) settings_code_pane_cp_copy1_ParamLimits

0xf0de,	// (0x0003faa6) settings_code_pane_cp_copy1

0x952f,	// (0x00039ef7) volume_set_pane_copy1

0xf0f2,	// (0x0003faba) volume_set_pane_g10_copy1

0xf0fa,	// (0x0003fac2) volume_set_pane_g1_copy1

0xf102,	// (0x0003faca) volume_set_pane_g2_copy1

0xf10a,	// (0x0003fad2) volume_set_pane_g3_copy1

0xf112,	// (0x0003fada) volume_set_pane_g4_copy1

0xf11a,	// (0x0003fae2) volume_set_pane_g5_copy1

0xf122,	// (0x0003faea) volume_set_pane_g6_copy1

0xf12a,	// (0x0003faf2) volume_set_pane_g7_copy1

0xf132,	// (0x0003fafa) volume_set_pane_g8_copy1

0xf13a,	// (0x0003fb02) volume_set_pane_g9_copy1

0x2320,	// (0x00032ce8) bg_set_opt_pane_cp_copy1_ParamLimits

0x2320,	// (0x00032ce8) bg_set_opt_pane_cp_copy1

0x9537,	// (0x00039eff) setting_slider_pane_t1_copy1_ParamLimits

0x9537,	// (0x00039eff) setting_slider_pane_t1_copy1

0x9555,	// (0x00039f1d) setting_slider_pane_t2_copy1_ParamLimits

0x9555,	// (0x00039f1d) setting_slider_pane_t2_copy1

0x956f,	// (0x00039f37) setting_slider_pane_t3_copy1_ParamLimits

0x956f,	// (0x00039f37) setting_slider_pane_t3_copy1

0x9587,	// (0x00039f4f) slider_set_pane_copy1_ParamLimits

0x9587,	// (0x00039f4f) slider_set_pane_copy1

0x272a,	// (0x000330f2) set_opt_bg_pane_g1_copy2

0x2732,	// (0x000330fa) set_opt_bg_pane_g2_copy2

0xf142,	// (0x0003fb0a) set_opt_bg_pane_g3_copy2

0x2742,	// (0x0003310a) set_opt_bg_pane_g4_copy2

0x274a,	// (0x00033112) set_opt_bg_pane_g5_copy2

0x2752,	// (0x0003311a) set_opt_bg_pane_g6_copy2

0xf14c,	// (0x0003fb14) set_opt_bg_pane_g7_copy2

0xf154,	// (0x0003fb1c) set_opt_bg_pane_g8_copy2

0xf15e,	// (0x0003fb26) set_opt_bg_pane_g9_copy2

0x959d,	// (0x00039f65) aid_size_touch_slider_mark_copy1_ParamLimits

0x959d,	// (0x00039f65) aid_size_touch_slider_mark_copy1

0xf168,	// (0x0003fb30) slider_set_pane_g1_copy1

0x95b1,	// (0x00039f79) slider_set_pane_g2_copy1

0x8312,	// (0x00038cda) slider_set_pane_g3_copy1_ParamLimits

0x8312,	// (0x00038cda) slider_set_pane_g3_copy1

0x8326,	// (0x00038cee) slider_set_pane_g4_copy1_ParamLimits

0x8326,	// (0x00038cee) slider_set_pane_g4_copy1

0x833e,	// (0x00038d06) slider_set_pane_g5_copy1_ParamLimits

0x833e,	// (0x00038d06) slider_set_pane_g5_copy1

0x8312,	// (0x00038cda) slider_set_pane_g6_copy1_ParamLimits

0x8312,	// (0x00038cda) slider_set_pane_g6_copy1

0x95b9,	// (0x00039f81) slider_set_pane_g7_copy1_ParamLimits

0x95b9,	// (0x00039f81) slider_set_pane_g7_copy1

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp2_copy1

0xf171,	// (0x0003fb39) setting_slider_graphic_pane_g1_copy1

0xf17a,	// (0x0003fb42) setting_slider_graphic_pane_t1_copy1

0xf18a,	// (0x0003fb52) setting_slider_graphic_pane_t2_copy1

0xf19a,	// (0x0003fb62) slider_set_pane_cp_copy1

0xf1aa,	// (0x0003fb72) input_focus_pane_cp1_copy1

0xf1b3,	// (0x0003fb7b) list_set_text_pane_copy1

0xf1bb,	// (0x0003fb83) setting_text_pane_g1_copy1

0x4e51,	// (0x00035819) set_text_pane_t1_copy1

0xf1aa,	// (0x0003fb72) input_focus_pane_cp2_copy1

0xf1bb,	// (0x0003fb83) setting_code_pane_g1_copy1

0xf1c4,	// (0x0003fb8c) setting_code_pane_t1_copy1

0xf1d2,	// (0x0003fb9a) list_set_graphic_pane_copy1

0x22c4,	// (0x00032c8c) bg_set_opt_pane_cp4_copy1

0x2ce0,	// (0x000336a8) list_set_graphic_pane_g1_copy1_ParamLimits

0x2ce0,	// (0x000336a8) list_set_graphic_pane_g1_copy1

0xf1e6,	// (0x0003fbae) list_set_graphic_pane_g2_copy1

0x2cf8,	// (0x000336c0) list_set_graphic_pane_t1_copy1_ParamLimits

0x2cf8,	// (0x000336c0) list_set_graphic_pane_t1_copy1

0xc24b,	// (0x0003cc13) rs_clock_indi_pane_g1

0xf1ee,	// (0x0003fbb6) rs_clock_indi_pane_t1

0xf1fc,	// (0x0003fbc4) rs_indi_pane

0xf204,	// (0x0003fbcc) rs_indi_pane_g1

0xf20d,	// (0x0003fbd5) rs_indi_pane_g2

0xef2c,	// (0x0003f8f4) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0004089f) rs_indi_pane_g

0x7516,	// (0x00037ede) bg_popup_preview_window_pane_cp03

0xf216,	// (0x0003fbde) popup_fep_tooltip_window_t1

0xceef,	// (0x0003d8b7) popup_note2_window_g2_ParamLimits

0xceef,	// (0x0003d8b7) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0004063f) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0004063f) popup_note2_window_g

0xd3dc,	// (0x0003dda4) bg_popup_sub_pane_cp11_ParamLimits

0xd3e9,	// (0x0003ddb1) cell_ai3_links_pane_g1_ParamLimits

0xd400,	// (0x0003ddc8) cell_ai3_links_pane_t1

0x4e51,	// (0x00035819) set_text_pane_t1_copy1_ParamLimits

0x7427,	// (0x00037def) cell_graphic_popup_pane_cp2_ParamLimits

0x7427,	// (0x00037def) cell_graphic_popup_pane_cp2

0xf224,	// (0x0003fbec) cell_graphic_popup_pane_g1_cp2

0x25a0,	// (0x00032f68) cell_graphic_popup_pane_g2_cp2

0xf22c,	// (0x0003fbf4) cell_graphic_popup_pane_g3_cp2

0xf234,	// (0x0003fbfc) cell_graphic_popup_pane_t2_cp2

0x25b1,	// (0x00032f79) grid_highlight_pane_cp3_cp2

0x2982,	// (0x0003334a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x26d2,	// (0x0003309a) main_tmo_pane_ParamLimits

0xd732,	// (0x0003e0fa) popup_tmo_big_image_note_window

0xe8dd,	// (0x0003f2a5) cell_ai5_widget_list_pane

0xe8e5,	// (0x0003f2ad) cell_ai5_widget_lrg_icon_pane

0xee6a,	// (0x0003f832) tmo_note_info_pane_t1_ParamLimits

0xee7f,	// (0x0003f847) tmo_note_info_pane_t2_ParamLimits

0xee94,	// (0x0003f85c) tmo_note_info_pane_t3_ParamLimits

0xeea9,	// (0x0003f871) tmo_note_info_pane_t4_ParamLimits

0xeebb,	// (0x0003f883) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0004088d) tmo_note_info_pane_t_ParamLimits

0xefd9,	// (0x0003f9a1) settings_container_pane_ParamLimits

0xf1a2,	// (0x0003fb6a) indicator_popup_pane_cp5

0xf1a2,	// (0x0003fb6a) indicator_popup_pane_cp6

0xf1d2,	// (0x0003fb9a) list_set_graphic_pane_copy1_ParamLimits

0x22b0,	// (0x00032c78) bg_popup_window_pane_cp23

0xf242,	// (0x0003fc0a) popup_tmo_big_image_note_window_g1

0xf24b,	// (0x0003fc13) popup_tmo_big_image_note_window_t1

0xf25b,	// (0x0003fc23) popup_tmo_big_image_note_window_t2

0xf26b,	// (0x0003fc33) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x000408a6) popup_tmo_big_image_note_window_t

0xc24b,	// (0x0003cc13) cell_ai5_widget_lrg_icon_pane_g1

0xf27b,	// (0x0003fc43) cell_ai5_widget_lrg_icon_pane_t1

0xf289,	// (0x0003fc51) cell_ai5_widget_list_row_pane_ParamLimits

0xf289,	// (0x0003fc51) cell_ai5_widget_list_row_pane

0xf2a0,	// (0x0003fc68) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a0,	// (0x0003fc68) cell_ai5_widget_list_row_pane_g1

0xf2ad,	// (0x0003fc75) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2ad,	// (0x0003fc75) cell_ai5_widget_list_row_pane_t1

0xf2d8,	// (0x0003fca0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d8,	// (0x0003fca0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x000408ad) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x000408ad) cell_ai5_widget_list_row_pane_t

0x5ce1,	// (0x000366a9) main_fep_vtchi_ss_pane

0xf320,	// (0x0003fce8) popup_fep_char_pre_window

0xf328,	// (0x0003fcf0) popup_fep_ituss_window

0xf354,	// (0x0003fd1c) popup_fep_vkbss_window

0xf37e,	// (0x0003fd46) grid_vkbss_keypad_pane_ParamLimits

0xf37e,	// (0x0003fd46) grid_vkbss_keypad_pane

0xf38e,	// (0x0003fd56) ituss_keypad_pane

0x95db,	// (0x00039fa3) aid_vkbss_key_offset_ParamLimits

0x95db,	// (0x00039fa3) aid_vkbss_key_offset

0x95e7,	// (0x00039faf) cell_vkbss_key_pane_ParamLimits

0x95e7,	// (0x00039faf) cell_vkbss_key_pane

0x9add,	// (0x0003a4a5) bg_cell_vkbss_key_g1_ParamLimits

0x9add,	// (0x0003a4a5) bg_cell_vkbss_key_g1

0xf39d,	// (0x0003fd65) cell_vkbss_key_3p_pane_ParamLimits

0xf39d,	// (0x0003fd65) cell_vkbss_key_3p_pane

0xf3b1,	// (0x0003fd79) cell_vkbss_key_g1_ParamLimits

0xf3b1,	// (0x0003fd79) cell_vkbss_key_g1

0xf3c5,	// (0x0003fd8d) cell_vkbss_key_t1_ParamLimits

0xf3c5,	// (0x0003fd8d) cell_vkbss_key_t1

0x95fd,	// (0x00039fc5) cell_ituss_key_pane_ParamLimits

0x95fd,	// (0x00039fc5) cell_ituss_key_pane

0xf3f0,	// (0x0003fdb8) bg_cell_ituss_key_g1_ParamLimits

0xf3f0,	// (0x0003fdb8) bg_cell_ituss_key_g1

0xf3fc,	// (0x0003fdc4) cell_ituss_key_pane_g1_ParamLimits

0xf3fc,	// (0x0003fdc4) cell_ituss_key_pane_g1

0x960e,	// (0x00039fd6) cell_ituss_key_pane_g2_ParamLimits

0x960e,	// (0x00039fd6) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x000408b4) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x000408b4) cell_ituss_key_pane_g

0x963a,	// (0x0003a002) cell_ituss_key_t1_ParamLimits

0x963a,	// (0x0003a002) cell_ituss_key_t1

0x9674,	// (0x0003a03c) cell_ituss_key_t2_ParamLimits

0x9674,	// (0x0003a03c) cell_ituss_key_t2

0x96a5,	// (0x0003a06d) cell_ituss_key_t3_ParamLimits

0x96a5,	// (0x0003a06d) cell_ituss_key_t3

0x9674,	// (0x0003a03c) cell_ituss_key_t4_ParamLimits

0x9674,	// (0x0003a03c) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x000408bb) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x000408bb) cell_ituss_key_t

0xf422,	// (0x0003fdea) cell_vkbss_key_3p_pane_g1

0xf42a,	// (0x0003fdf2) cell_vkbss_key_3p_pane_g2

0xf432,	// (0x0003fdfa) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x000408c6) cell_vkbss_key_3p_pane_g

0x7516,	// (0x00037ede) bg_popup_fep_char_preview_window_cp02

0xf43a,	// (0x0003fe02) popup_fep_char_pre_window_t1

0xe873,	// (0x0003f23b) main_ai5_sk_pane

0xef35,	// (0x0003f8fd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef41,	// (0x0003f909) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8fc,	// (0x0003d2c4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef56,	// (0x0003f91e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x00040898) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef62,	// (0x0003f92a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x26d2,	// (0x0003309a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf448,	// (0x0003fe10) main_ai5_sk_pane_g1

0xa138,	// (0x0003ab00) popup_query_code_window_g1

0xf33e,	// (0x0003fd06) popup_fep_vkb_icf_pane

0xf368,	// (0x0003fd30) popup_fep_vtchi_icf_pane

0xf451,	// (0x0003fe19) bg_icf_pane

0xf45d,	// (0x0003fe25) list_vkb_icf_pane

0xf46c,	// (0x0003fe34) bg_icf_pane_cp01

0xf47f,	// (0x0003fe47) vtchi_icf_list_pane

0xf48f,	// (0x0003fe57) list_vkb_icf_pane_t1_ParamLimits

0xf48f,	// (0x0003fe57) list_vkb_icf_pane_t1

0xf4b0,	// (0x0003fe78) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0003fe78) vtchi_icf_list_pane_t1

0xf328,	// (0x0003fcf0) popup_fep_ituss_window_ParamLimits

0xf368,	// (0x0003fd30) popup_fep_vtchi_icf_pane_ParamLimits

0xf38e,	// (0x0003fd56) ituss_keypad_pane_ParamLimits

0x95cf,	// (0x00039f97) ituss_sks_pane

0xf451,	// (0x0003fe19) bg_icf_pane_ParamLimits

0xf300,	// (0x0003fcc8) icf_edit_indi_pane_ParamLimits

0xf300,	// (0x0003fcc8) icf_edit_indi_pane

0xf45d,	// (0x0003fe25) list_vkb_icf_pane_ParamLimits

0xf46c,	// (0x0003fe34) bg_icf_pane_cp01_ParamLimits

0xf313,	// (0x0003fcdb) icf_edit_indi_pane_cp01_ParamLimits

0xf313,	// (0x0003fcdb) icf_edit_indi_pane_cp01

0xf487,	// (0x0003fe4f) vtchi_query_pane

0xe6fd,	// (0x0003f0c5) icf_edit_indi_pane_g1_ParamLimits

0xe6fd,	// (0x0003f0c5) icf_edit_indi_pane_g1

0xf525,	// (0x0003feed) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0003feed) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x000408de) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x000408de) icf_edit_indi_pane_g

0xf537,	// (0x0003feff) icf_edit_indi_pane_t1

0xf4ce,	// (0x0003fe96) bg_input_focus_pane_cp042

0x2614,	// (0x00032fdc) vtchi_button_pane

0xf4d7,	// (0x0003fe9f) vtchi_query_pane_t1

0xf4e5,	// (0x0003fead) vtchi_query_pane_t2

0xf4f3,	// (0x0003febb) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x000408cd) vtchi_query_pane_t

0x5ce1,	// (0x000366a9) bg_button_pane_cp13

0xf501,	// (0x0003fec9) vtchi_button_pane_g1

0x96e8,	// (0x0003a0b0) ituss_sks_pane_g1

0x96f3,	// (0x0003a0bb) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x000408d4) ituss_sks_pane_g

0xf509,	// (0x0003fed1) ituss_sks_pane_t1

0xf517,	// (0x0003fedf) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x000408d9) ituss_sks_pane_t

0xbcc8,	// (0x0003c690) indicator_nsta_pane_cp_g1

0xbcd0,	// (0x0003c698) indicator_nsta_pane_cp_g2

0xbcd8,	// (0x0003c6a0) indicator_nsta_pane_cp_g3

0xbcc8,	// (0x0003c690) indicator_nsta_pane_cp_g4

0xbcd0,	// (0x0003c698) indicator_nsta_pane_cp_g5

0xbcd8,	// (0x0003c6a0) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0004047d) indicator_nsta_pane_cp_g

0xe454,	// (0x0003ee1c) cell_graphic2_pane_t2_ParamLimits

0xe454,	// (0x0003ee1c) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0004078f) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0004078f) cell_graphic2_pane_t

0xe481,	// (0x0003ee49) cell_graphic2_control_pane_t1

0x6faa,	// (0x00037972) signal_pane_g3_ParamLimits

0x6faa,	// (0x00037972) signal_pane_g3

0x6fbc,	// (0x00037984) signal_pane_g4_ParamLimits

0x6fbc,	// (0x00037984) signal_pane_g4

0xf2ea,	// (0x0003fcb2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ea,	// (0x0003fcb2) cell_ai5_widget_list_row_pane_t3

0xf410,	// (0x0003fdd8) cell_ituss_key_pane_t1_ParamLimits

0xf410,	// (0x0003fdd8) cell_ituss_key_pane_t1

0x9d73,	// (0x0003a73b) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d73,	// (0x0003a73b) form_field_data_wide_pane_vc_t2

0x9d87,	// (0x0003a74f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d87,	// (0x0003a74f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x000401c2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x000401c2) form_field_data_wide_pane_vc_t

0xb98f,	// (0x0003c357) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb98f,	// (0x0003c357) form_field_slider_wide_pane_vc_t3

0xba6d,	// (0x0003c435) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba6d,	// (0x0003c435) form_field_popup_wide_pane_vc_t2

0xba84,	// (0x0003c44c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba84,	// (0x0003c44c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0004046c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0004046c) form_field_popup_wide_pane_vc_t

0x939e,	// (0x00039d66) aid_fshwr2_btn_pane_ParamLimits

0x93aa,	// (0x00039d72) aid_fshwr2_syb_pane_ParamLimits

0x93bc,	// (0x00039d84) aid_fshwr2_txt_pane_ParamLimits

0x8bf0,	// (0x000395b8) fshwr2_bg_pane_ParamLimits

0x93c8,	// (0x00039d90) fshwr2_func_candi_pane_ParamLimits

0x93e6,	// (0x00039dae) fshwr2_hwr_syb_pane_ParamLimits

0x9400,	// (0x00039dc8) fshwr2_icf_pane_ParamLimits

0x4b46,	// (0x0003550e) list_double_graphic_pane_vc_g4_ParamLimits

0x4b46,	// (0x0003550e) list_double_graphic_pane_vc_g4

0x962e,	// (0x00039ff6) cell_ituss_key_pane_g3_ParamLimits

0x962e,	// (0x00039ff6) cell_ituss_key_pane_g3

0x96d6,	// (0x0003a09e) cell_ituss_key_t5_ParamLimits

0x96d6,	// (0x0003a09e) cell_ituss_key_t5

0xf354,	// (0x0003fd1c) popup_fep_vkbss_window_ParamLimits

0xca2d,	// (0x0003d3f5) aid_cell_ai5_quarter

0xf537,	// (0x0003feff) icf_edit_indi_pane_t1_ParamLimits

0x61a0,	// (0x00036b68) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x61a0,	// (0x00036b68) aid_tch_indicator_popup_pane_cp2

0x61b3,	// (0x00036b7b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x61b3,	// (0x00036b7b) aid_tch_query_popup_data_pane_cp2

0xa0e0,	// (0x0003aaa8) aid_tch_query_popup_pane_ParamLimits

0xa0e0,	// (0x0003aaa8) aid_tch_query_popup_pane

0xa0e0,	// (0x0003aaa8) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0e0,	// (0x0003aaa8) aid_tch_query_popup_data_pane_cp1

0xed98,	// (0x0003f760) cell_fshwr2_syb_bg_pane_ParamLimits

0x94fc,	// (0x00039ec4) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9510,	// (0x00039ed8) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf33e,	// (0x0003fd06) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
