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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005674d };

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
0x51ab,	// (0x0005b8f8) Screen

0x51b7,	// (0x0005b904) application_window_ParamLimits

0x51b7,	// (0x0005b904) application_window

0xe1e3,	// (0x00064930) screen_g1

0x5213,	// (0x0005b960) area_bottom_pane_ParamLimits

0x5213,	// (0x0005b960) area_bottom_pane

0x52d9,	// (0x0005ba26) area_top_pane_ParamLimits

0x52d9,	// (0x0005ba26) area_top_pane

0x5377,	// (0x0005bac4) main_pane_ParamLimits

0x5377,	// (0x0005bac4) main_pane

0xe1ed,	// (0x0006493a) misc_graphics

0x738c,	// (0x0005dad9) battery_pane_ParamLimits

0x738c,	// (0x0005dad9) battery_pane

0x98ea,	// (0x00060037) bg_status_flat_pane_g8

0x98f2,	// (0x0006003f) bg_status_flat_pane_g9

0x7454,	// (0x0005dba1) context_pane_ParamLimits

0x7454,	// (0x0005dba1) context_pane

0x756a,	// (0x0005dcb7) navi_pane_ParamLimits

0x756a,	// (0x0005dcb7) navi_pane

0x75ee,	// (0x0005dd3b) signal_pane_ParamLimits

0x75ee,	// (0x0005dd3b) signal_pane

0x0008,

0xf84d,	// (0x00065f9a) bg_status_flat_pane_g

0x8ecb,	// (0x0005f618) status_pane_g1_ParamLimits

0x8ecb,	// (0x0005f618) status_pane_g1

0x8edf,	// (0x0005f62c) status_pane_g2_ParamLimits

0x8edf,	// (0x0005f62c) status_pane_g2

0x8eeb,	// (0x0005f638) status_pane_g3_ParamLimits

0x8eeb,	// (0x0005f638) status_pane_g3

0x0004,

0xf774,	// (0x00065ec1) status_pane_g_ParamLimits

0xf774,	// (0x00065ec1) status_pane_g

0x8f1f,	// (0x0005f66c) title_pane_ParamLimits

0x8f1f,	// (0x0005f66c) title_pane

0x8f5c,	// (0x0005f6a9) uni_indicator_pane_ParamLimits

0x8f5c,	// (0x0005f6a9) uni_indicator_pane

0x183f,	// (0x00057f8c) bg_list_pane_ParamLimits

0x183f,	// (0x00057f8c) bg_list_pane

0x6d43,	// (0x0005d490) find_pane

0xf51b,	// (0x00065c68) listscroll_app_pane_ParamLimits

0xf51b,	// (0x00065c68) listscroll_app_pane

0x185f,	// (0x00057fac) listscroll_form_pane

0x6d4b,	// (0x0005d498) listscroll_gen_pane_ParamLimits

0x6d4b,	// (0x0005d498) listscroll_gen_pane

0x6d5f,	// (0x0005d4ac) listscroll_set_pane

0x621c,	// (0x0005c969) main_idle_act_pane

0x16d3,	// (0x00057e20) main_idle_trad_pane

0x16d3,	// (0x00057e20) main_list_empty_pane

0xf51b,	// (0x00065c68) main_midp_pane

0x1879,	// (0x00057fc6) main_pane_g1_ParamLimits

0x1879,	// (0x00057fc6) main_pane_g1

0x6d75,	// (0x0005d4c2) popup_ai_message_window_ParamLimits

0x6d75,	// (0x0005d4c2) popup_ai_message_window

0x6e19,	// (0x0005d566) popup_fep_china_uni_window_ParamLimits

0x6e19,	// (0x0005d566) popup_fep_china_uni_window

0x6e73,	// (0x0005d5c0) popup_fep_japan_candidate_window_ParamLimits

0x6e73,	// (0x0005d5c0) popup_fep_japan_candidate_window

0x6e91,	// (0x0005d5de) popup_fep_japan_predictive_window_ParamLimits

0x6e91,	// (0x0005d5de) popup_fep_japan_predictive_window

0x6ec1,	// (0x0005d60e) popup_find_window

0x6ece,	// (0x0005d61b) popup_grid_graphic_window_ParamLimits

0x6ece,	// (0x0005d61b) popup_grid_graphic_window

0x6ef8,	// (0x0005d645) popup_large_graphic_colour_window

0x6f1e,	// (0x0005d66b) popup_menu_window_ParamLimits

0x6f1e,	// (0x0005d66b) popup_menu_window

0x70da,	// (0x0005d827) popup_note_image_window

0x70c6,	// (0x0005d813) popup_note_wait_window_ParamLimits

0x70c6,	// (0x0005d813) popup_note_wait_window

0x70c6,	// (0x0005d813) popup_note_window_ParamLimits

0x70c6,	// (0x0005d813) popup_note_window

0x7130,	// (0x0005d87d) popup_query_code_window_ParamLimits

0x7130,	// (0x0005d87d) popup_query_code_window

0x7144,	// (0x0005d891) popup_query_data_code_window_ParamLimits

0x7144,	// (0x0005d891) popup_query_data_code_window

0x7161,	// (0x0005d8ae) popup_query_data_window_ParamLimits

0x7161,	// (0x0005d8ae) popup_query_data_window

0x717d,	// (0x0005d8ca) popup_query_sat_info_window_ParamLimits

0x717d,	// (0x0005d8ca) popup_query_sat_info_window

0x71b6,	// (0x0005d903) popup_snote_single_graphic_window_ParamLimits

0x71b6,	// (0x0005d903) popup_snote_single_graphic_window

0x71b6,	// (0x0005d903) popup_snote_single_text_window_ParamLimits

0x71b6,	// (0x0005d903) popup_snote_single_text_window

0x71cb,	// (0x0005d918) popup_sub_window_general

0x72fb,	// (0x0005da48) popup_window_general_ParamLimits

0x72fb,	// (0x0005da48) popup_window_general

0x7310,	// (0x0005da5d) power_save_pane

0x6baa,	// (0x0005d2f7) control_pane_g1_ParamLimits

0x6baa,	// (0x0005d2f7) control_pane_g1

0x6bd1,	// (0x0005d31e) control_pane_g2_ParamLimits

0x6bd1,	// (0x0005d31e) control_pane_g2

0x1829,	// (0x00057f76) control_pane_g3_ParamLimits

0x1829,	// (0x00057f76) control_pane_g3

0x0007,

0xf75c,	// (0x00065ea9) control_pane_g_ParamLimits

0xf75c,	// (0x00065ea9) control_pane_g

0x6c42,	// (0x0005d38f) control_pane_t1_ParamLimits

0x6c42,	// (0x0005d38f) control_pane_t1

0x6c98,	// (0x0005d3e5) control_pane_t2_ParamLimits

0x6c98,	// (0x0005d3e5) control_pane_t2

0x0002,

0xf76d,	// (0x00065eba) control_pane_t_ParamLimits

0xf76d,	// (0x00065eba) control_pane_t

0x6b23,	// (0x0005d270) navi_navi_volume_pane_cp1

0x6b2b,	// (0x0005d278) status_small_icon_pane

0x17d5,	// (0x00057f22) status_small_pane_g1_ParamLimits

0x17d5,	// (0x00057f22) status_small_pane_g1

0x6b33,	// (0x0005d280) status_small_pane_g2_ParamLimits

0x6b33,	// (0x0005d280) status_small_pane_g2

0x1809,	// (0x00057f56) status_small_pane_g3_ParamLimits

0x1809,	// (0x00057f56) status_small_pane_g3

0x6b3f,	// (0x0005d28c) status_small_pane_g4_ParamLimits

0x6b3f,	// (0x0005d28c) status_small_pane_g4

0x6b4b,	// (0x0005d298) status_small_pane_g5_ParamLimits

0x6b4b,	// (0x0005d298) status_small_pane_g5

0x6b59,	// (0x0005d2a6) status_small_pane_g6_ParamLimits

0x6b59,	// (0x0005d2a6) status_small_pane_g6

0x0007,

0xf74b,	// (0x00065e98) status_small_pane_g_ParamLimits

0xf74b,	// (0x00065e98) status_small_pane_g

0x6b74,	// (0x0005d2c1) status_small_pane_t1

0x6b96,	// (0x0005d2e3) status_small_wait_pane_ParamLimits

0x6b96,	// (0x0005d2e3) status_small_wait_pane

0x6605,	// (0x0005cd52) aid_levels_signal_ParamLimits

0x6605,	// (0x0005cd52) aid_levels_signal

0x6617,	// (0x0005cd64) signal_pane_g1_ParamLimits

0x6617,	// (0x0005cd64) signal_pane_g1

0x662c,	// (0x0005cd79) signal_pane_g2_ParamLimits

0x662c,	// (0x0005cd79) signal_pane_g2

0x0003,

0xf6dc,	// (0x00065e29) signal_pane_g_ParamLimits

0xf6dc,	// (0x00065e29) signal_pane_g

0x12c9,	// (0x00057a16) context_pane_g1

0x55b8,	// (0x0005bd05) title_pane_g1

0x55e2,	// (0x0005bd2f) title_pane_t1

0xe203,	// (0x00064950) title_pane_t2

0xe229,	// (0x00064976) title_pane_t3

0x0002,

0xf530,	// (0x00065c7d) title_pane_t

0x8f74,	// (0x0005f6c1) aid_levels_battery_ParamLimits

0x8f74,	// (0x0005f6c1) aid_levels_battery

0x8f88,	// (0x0005f6d5) battery_pane_g1_ParamLimits

0x8f88,	// (0x0005f6d5) battery_pane_g1

0x8f9e,	// (0x0005f6eb) battery_pane_g2_ParamLimits

0x8f9e,	// (0x0005f6eb) battery_pane_g2

0x0001,

0xf77f,	// (0x00065ecc) battery_pane_g_ParamLimits

0xf77f,	// (0x00065ecc) battery_pane_g

0xa20e,	// (0x0006095b) uni_indicator_pane_g1

0xa221,	// (0x0006096e) uni_indicator_pane_g2

0xa233,	// (0x00060980) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x00066042) uni_indicator_pane_g

0x1572,	// (0x00057cbf) navi_icon_pane_ParamLimits

0x1572,	// (0x00057cbf) navi_icon_pane

0x14bb,	// (0x00057c08) navi_midp_pane

0x158e,	// (0x00057cdb) navi_navi_pane

0x1598,	// (0x00057ce5) navi_text_pane_ParamLimits

0x1598,	// (0x00057ce5) navi_text_pane

0xe1e3,	// (0x00064930) status_small_wait_pane_g1

0xe47a,	// (0x00064bc7) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0006603d) status_small_wait_pane_g

0x9f35,	// (0x00060682) navi_navi_icon_text_pane

0x9f3d,	// (0x0006068a) navi_navi_pane_g1_ParamLimits

0x9f3d,	// (0x0006068a) navi_navi_pane_g1

0x9f4f,	// (0x0006069c) navi_navi_pane_g2_ParamLimits

0x9f4f,	// (0x0006069c) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0006600b) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0006600b) navi_navi_pane_g

0x9f61,	// (0x000606ae) navi_navi_tabs_pane

0x9f6a,	// (0x000606b7) navi_navi_text_pane

0x9f35,	// (0x00060682) navi_navi_volume_pane

0x9f11,	// (0x0006065e) navi_text_pane_t1

0x9f05,	// (0x00060652) navi_icon_pane_g1

0x9e58,	// (0x000605a5) navi_navi_text_pane_t1

0x7908,	// (0x0005e055) navi_navi_volume_pane_g1

0x7910,	// (0x0005e05d) volume_small_pane

0x9dbe,	// (0x0006050b) navi_navi_icon_text_pane_g1

0x9dc6,	// (0x00060513) navi_navi_icon_text_pane_t1

0x158e,	// (0x00057cdb) navi_tabs_2_long_pane

0x158e,	// (0x00057cdb) navi_tabs_2_pane

0x158e,	// (0x00057cdb) navi_tabs_3_long_pane

0x158e,	// (0x00057cdb) navi_tabs_3_pane

0x158e,	// (0x00057cdb) navi_tabs_4_pane

0x78e8,	// (0x0005e035) tabs_2_active_pane_ParamLimits

0x78e8,	// (0x0005e035) tabs_2_active_pane

0x78f8,	// (0x0005e045) tabs_2_passive_pane_ParamLimits

0x78f8,	// (0x0005e045) tabs_2_passive_pane

0x78b6,	// (0x0005e003) tabs_3_active_pane_ParamLimits

0x78b6,	// (0x0005e003) tabs_3_active_pane

0x78c6,	// (0x0005e013) tabs_3_passive_pane_ParamLimits

0x78c6,	// (0x0005e013) tabs_3_passive_pane

0x78d7,	// (0x0005e024) tabs_3_passive_pane_cp_ParamLimits

0x78d7,	// (0x0005e024) tabs_3_passive_pane_cp

0x7872,	// (0x0005dfbf) tabs_4_active_pane_ParamLimits

0x7872,	// (0x0005dfbf) tabs_4_active_pane

0x7883,	// (0x0005dfd0) tabs_4_passive_pane_ParamLimits

0x7883,	// (0x0005dfd0) tabs_4_passive_pane

0x7894,	// (0x0005dfe1) tabs_4_passive_pane_cp_ParamLimits

0x7894,	// (0x0005dfe1) tabs_4_passive_pane_cp

0x78a5,	// (0x0005dff2) tabs_4_passive_pane_cp2_ParamLimits

0x78a5,	// (0x0005dff2) tabs_4_passive_pane_cp2

0x784e,	// (0x0005df9b) tabs_2_long_active_pane_ParamLimits

0x784e,	// (0x0005df9b) tabs_2_long_active_pane

0x7860,	// (0x0005dfad) tabs_2_long_passive_pane_ParamLimits

0x7860,	// (0x0005dfad) tabs_2_long_passive_pane

0x7809,	// (0x0005df56) tabs_3_long_active_pane_ParamLimits

0x7809,	// (0x0005df56) tabs_3_long_active_pane

0x7822,	// (0x0005df6f) tabs_3_long_passive_pane_ParamLimits

0x7822,	// (0x0005df6f) tabs_3_long_passive_pane

0x7835,	// (0x0005df82) tabs_3_long_passive_pane_cp_ParamLimits

0x7835,	// (0x0005df82) tabs_3_long_passive_pane_cp

0x77af,	// (0x0005defc) volume_small_pane_g1

0x77b8,	// (0x0005df05) volume_small_pane_g2

0x77c1,	// (0x0005df0e) volume_small_pane_g3

0x77ca,	// (0x0005df17) volume_small_pane_g4

0x77d3,	// (0x0005df20) volume_small_pane_g5

0x77dc,	// (0x0005df29) volume_small_pane_g6

0x77e5,	// (0x0005df32) volume_small_pane_g7

0x77ee,	// (0x0005df3b) volume_small_pane_g8

0x77f7,	// (0x0005df44) volume_small_pane_g9

0x7800,	// (0x0005df4d) volume_small_pane_g10

0x0009,

0xf88a,	// (0x00065fd7) volume_small_pane_g

0xe23b,	// (0x00064988) bg_active_tab_pane_cp2_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp2

0x564a,	// (0x0005bd97) tabs_3_active_pane_g1

0x5652,	// (0x0005bd9f) tabs_3_active_pane_t1

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp2_ParamLimits

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp2

0x564a,	// (0x0005bd97) tabs_3_passive_pane_g1

0x5652,	// (0x0005bd9f) tabs_3_passive_pane_t1

0xe23b,	// (0x00064988) bg_active_tab_pane_cp3_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp3

0x5664,	// (0x0005bdb1) tabs_4_active_pane_g1

0x566c,	// (0x0005bdb9) tabs_4_active_pane_t1

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp3_ParamLimits

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp3

0x5664,	// (0x0005bdb1) tabs_4_1_passive_pane_g1

0x566c,	// (0x0005bdb9) tabs_4_1_passive_pane_t1

0xf51b,	// (0x00065c68) list_highlight_pane_cp2

0xa466,	// (0x00060bb3) list_set_pane_ParamLimits

0xa466,	// (0x00060bb3) list_set_pane

0xa508,	// (0x00060c55) main_pane_set_t1_ParamLimits

0xa508,	// (0x00060c55) main_pane_set_t1

0xa528,	// (0x00060c75) main_pane_set_t2_ParamLimits

0xa528,	// (0x00060c75) main_pane_set_t2

0xa53c,	// (0x00060c89) main_pane_set_t3_ParamLimits

0xa53c,	// (0x00060c89) main_pane_set_t3

0xa54e,	// (0x00060c9b) main_pane_set_t4_ParamLimits

0xa54e,	// (0x00060c9b) main_pane_set_t4

0x0003,

0xf95a,	// (0x000660a7) main_pane_set_t_ParamLimits

0xf95a,	// (0x000660a7) main_pane_set_t

0xa560,	// (0x00060cad) setting_code_pane

0xa56c,	// (0x00060cb9) setting_slider_graphic_pane

0xa56c,	// (0x00060cb9) setting_slider_pane

0xa56c,	// (0x00060cb9) setting_text_pane

0xa56c,	// (0x00060cb9) setting_volume_pane

0x567e,	// (0x0005bdcb) volume_set_pane

0xe23b,	// (0x00064988) bg_set_opt_pane_cp

0x5686,	// (0x0005bdd3) setting_slider_pane_t1

0x569f,	// (0x0005bdec) setting_slider_pane_t2

0x56b9,	// (0x0005be06) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00065c84) setting_slider_pane_t

0x56d1,	// (0x0005be1e) slider_set_pane

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp2

0xe249,	// (0x00064996) setting_slider_graphic_pane_g1

0x56e7,	// (0x0005be34) setting_slider_graphic_pane_t1

0x56f7,	// (0x0005be44) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00065c8b) setting_slider_graphic_pane_t

0x5707,	// (0x0005be54) slider_set_pane_cp

0xe1ed,	// (0x0006493a) input_focus_pane_cp1

0xa425,	// (0x00060b72) list_set_text_pane

0xe1e3,	// (0x00064930) setting_text_pane_g1

0xe1ed,	// (0x0006493a) input_focus_pane_cp2

0xe1e3,	// (0x00064930) setting_code_pane_g1

0xe252,	// (0x0006499f) setting_code_pane_t1

0x3a43,	// (0x0005a190) set_text_pane_t1_ParamLimits

0x3a43,	// (0x0005a190) set_text_pane_t1

0xf1ce,	// (0x0006591b) set_opt_bg_pane_g1

0xf1d6,	// (0x00065923) set_opt_bg_pane_g2

0xa3ff,	// (0x00060b4c) set_opt_bg_pane_g3

0xf1e6,	// (0x00065933) set_opt_bg_pane_g4

0xf1ee,	// (0x0006593b) set_opt_bg_pane_g5

0xf1f6,	// (0x00065943) set_opt_bg_pane_g6

0xa409,	// (0x00060b56) set_opt_bg_pane_g7

0xa411,	// (0x00060b5e) set_opt_bg_pane_g8

0xa41b,	// (0x00060b68) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x00066094) set_opt_bg_pane_g

0xa3f2,	// (0x00060b3f) slider_set_pane_g1

0x798f,	// (0x0005e0dc) slider_set_pane_g2

0x0006,

0xf938,	// (0x00066085) slider_set_pane_g

0x7919,	// (0x0005e066) volume_set_pane_g1

0x7921,	// (0x0005e06e) volume_set_pane_g2

0x7929,	// (0x0005e076) volume_set_pane_g3

0x7931,	// (0x0005e07e) volume_set_pane_g4

0x7939,	// (0x0005e086) volume_set_pane_g5

0x7941,	// (0x0005e08e) volume_set_pane_g6

0x7949,	// (0x0005e096) volume_set_pane_g7

0x7951,	// (0x0005e09e) volume_set_pane_g8

0x7959,	// (0x0005e0a6) volume_set_pane_g9

0x7961,	// (0x0005e0ae) volume_set_pane_g10

0x0009,

0xf910,	// (0x0006605d) volume_set_pane_g

0x570f,	// (0x0005be5c) indicator_pane_ParamLimits

0x570f,	// (0x0005be5c) indicator_pane

0x571b,	// (0x0005be68) main_idle_pane_g2_ParamLimits

0x571b,	// (0x0005be68) main_idle_pane_g2

0x5743,	// (0x0005be90) main_pane_idle_g1_ParamLimits

0x5743,	// (0x0005be90) main_pane_idle_g1

0xe260,	// (0x000649ad) popup_clock_digital_analogue_window_ParamLimits

0xe260,	// (0x000649ad) popup_clock_digital_analogue_window

0x5750,	// (0x0005be9d) soft_indicator_pane_ParamLimits

0x5750,	// (0x0005be9d) soft_indicator_pane

0x575c,	// (0x0005bea9) wallpaper_pane_ParamLimits

0x575c,	// (0x0005bea9) wallpaper_pane

0xe1e3,	// (0x00064930) wallpaper_pane_g1

0x5768,	// (0x0005beb5) indicator_pane_g1_ParamLimits

0x5768,	// (0x0005beb5) indicator_pane_g1

0xa88c,	// (0x00060fd9) navi_navi_icon_text_pane_srt_g1

0xe28e,	// (0x000649db) soft_indicator_pane_t1

0xe2a8,	// (0x000649f5) aid_ps_area_pane

0x5774,	// (0x0005bec1) aid_ps_clock_pane

0xe2b9,	// (0x00064a06) aid_ps_indicator_pane

0xe2c5,	// (0x00064a12) indicator_ps_pane_ParamLimits

0xe2c5,	// (0x00064a12) indicator_ps_pane

0xe2d4,	// (0x00064a21) power_save_pane_g1_ParamLimits

0xe2d4,	// (0x00064a21) power_save_pane_g1

0xe2e0,	// (0x00064a2d) power_save_pane_g2_ParamLimits

0xe2e0,	// (0x00064a2d) power_save_pane_g2

0x51c7,	// (0x0005b914) aid_navinavi_width_pane

0xe2a8,	// (0x000649f5) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00065c90) power_save_pane_g_ParamLimits

0xf543,	// (0x00065c90) power_save_pane_g

0xe2ee,	// (0x00064a3b) power_save_pane_t1_ParamLimits

0xe2ee,	// (0x00064a3b) power_save_pane_t1

0x5774,	// (0x0005bec1) aid_ps_clock_pane_ParamLimits

0xe2b9,	// (0x00064a06) aid_ps_indicator_pane_ParamLimits

0xe300,	// (0x00064a4d) power_save_pane_t4_ParamLimits

0xe300,	// (0x00064a4d) power_save_pane_t4

0x0001,

0xf548,	// (0x00065c95) power_save_pane_t_ParamLimits

0xf548,	// (0x00065c95) power_save_pane_t

0xe32a,	// (0x00064a77) power_save_t3_ParamLimits

0xe32a,	// (0x00064a77) power_save_t3

0xe315,	// (0x00064a62) power_save_t2_ParamLimits

0xe315,	// (0x00064a62) power_save_t2

0xe33f,	// (0x00064a8c) indicator_ps_pane_g1

0x5782,	// (0x0005becf) ai_gene_pane_ParamLimits

0x5782,	// (0x0005becf) ai_gene_pane

0x578e,	// (0x0005bedb) ai_links_pane_ParamLimits

0x578e,	// (0x0005bedb) ai_links_pane

0x579a,	// (0x0005bee7) indicator_pane_cp1_ParamLimits

0x579a,	// (0x0005bee7) indicator_pane_cp1

0x57a6,	// (0x0005bef3) main_pane_idle_g1_cp_ParamLimits

0x57a6,	// (0x0005bef3) main_pane_idle_g1_cp

0x57b2,	// (0x0005beff) popup_ai_links_title_window

0x57bb,	// (0x0005bf08) soft_indicator_pane_cp1_ParamLimits

0x57bb,	// (0x0005bf08) soft_indicator_pane_cp1

0xa1fc,	// (0x00060949) ai_links_pane_g1

0xa205,	// (0x00060952) grid_ai_links_pane

0xa1df,	// (0x0006092c) ai_gene_pane_1

0xa1ea,	// (0x00060937) ai_gene_pane_2

0xa1f3,	// (0x00060940) list_highlight_pane_cp4

0xa1c3,	// (0x00060910) cell_ai_link_pane_ParamLimits

0xa1c3,	// (0x00060910) cell_ai_link_pane

0xa1bb,	// (0x00060908) cell_ai_link_pane_g1

0xe47a,	// (0x00064bc7) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x00066038) cell_ai_link_pane_g

0xe1ed,	// (0x0006493a) grid_highlight_cp2

0xe1ed,	// (0x0006493a) bg_popup_sub_pane_cp1

0xe356,	// (0x00064aa3) popup_ai_links_title_window_t1

0xa10b,	// (0x00060858) ai_gene_pane_1_g1_ParamLimits

0xa10b,	// (0x00060858) ai_gene_pane_1_g1

0xa117,	// (0x00060864) ai_gene_pane_1_g2_ParamLimits

0xa117,	// (0x00060864) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0006602e) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0006602e) ai_gene_pane_1_g

0xa124,	// (0x00060871) ai_gene_pane_1_t1_ParamLimits

0xa124,	// (0x00060871) ai_gene_pane_1_t1

0xa158,	// (0x000608a5) grid_ai_soft_ind_pane

0xa0f6,	// (0x00060843) ai_gene_pane_2_t1_ParamLimits

0xa0f6,	// (0x00060843) ai_gene_pane_2_t1

0x57c7,	// (0x0005bf14) main_pane_empty_t1_ParamLimits

0x57c7,	// (0x0005bf14) main_pane_empty_t1

0x57df,	// (0x0005bf2c) main_pane_empty_t2_ParamLimits

0x57df,	// (0x0005bf2c) main_pane_empty_t2

0x57f4,	// (0x0005bf41) main_pane_empty_t3_ParamLimits

0x57f4,	// (0x0005bf41) main_pane_empty_t3

0x5806,	// (0x0005bf53) main_pane_empty_t4_ParamLimits

0x5806,	// (0x0005bf53) main_pane_empty_t4

0x5818,	// (0x0005bf65) main_pane_empty_t5_ParamLimits

0x5818,	// (0x0005bf65) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00065c9a) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00065c9a) main_pane_empty_t

0xf253,	// (0x000659a0) bg_popup_window_pane_ParamLimits

0xf253,	// (0x000659a0) bg_popup_window_pane

0x9e66,	// (0x000605b3) find_popup_pane_cp2_ParamLimits

0x9e66,	// (0x000605b3) find_popup_pane_cp2

0x9e72,	// (0x000605bf) heading_pane_ParamLimits

0x9e72,	// (0x000605bf) heading_pane

0xe1ed,	// (0x0006493a) bg_popup_sub_pane

0x9de0,	// (0x0006052d) bg_popup_window_pane_g1_ParamLimits

0x9de0,	// (0x0006052d) bg_popup_window_pane_g1

0x9dec,	// (0x00060539) bg_popup_window_pane_g2_ParamLimits

0x9dec,	// (0x00060539) bg_popup_window_pane_g2

0x9df8,	// (0x00060545) bg_popup_window_pane_g3_ParamLimits

0x9df8,	// (0x00060545) bg_popup_window_pane_g3

0x9e04,	// (0x00060551) bg_popup_window_pane_g4_ParamLimits

0x9e04,	// (0x00060551) bg_popup_window_pane_g4

0x9e10,	// (0x0006055d) bg_popup_window_pane_g5_ParamLimits

0x9e10,	// (0x0006055d) bg_popup_window_pane_g5

0x9e1c,	// (0x00060569) bg_popup_window_pane_g6_ParamLimits

0x9e1c,	// (0x00060569) bg_popup_window_pane_g6

0x9e28,	// (0x00060575) bg_popup_window_pane_g7_ParamLimits

0x9e28,	// (0x00060575) bg_popup_window_pane_g7

0x9e34,	// (0x00060581) bg_popup_window_pane_g8_ParamLimits

0x9e34,	// (0x00060581) bg_popup_window_pane_g8

0x9e40,	// (0x0006058d) bg_popup_window_pane_g9_ParamLimits

0x9e40,	// (0x0006058d) bg_popup_window_pane_g9

0x9e4c,	// (0x00060599) bg_popup_window_pane_g10_ParamLimits

0x9e4c,	// (0x00060599) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x00065ff6) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x00065ff6) bg_popup_window_pane_g

0x9d75,	// (0x000604c2) bg_popup_heading_pane_ParamLimits

0x9d75,	// (0x000604c2) bg_popup_heading_pane

0x7abd,	// (0x0005e20a) tabs_4_passive_pane_cp_srt_ParamLimits

0x7abd,	// (0x0005e20a) tabs_4_passive_pane_cp_srt

0x7acf,	// (0x0005e21c) tabs_4_passive_pane_srt_ParamLimits

0x9d89,	// (0x000604d6) heading_pane_g2

0x7acf,	// (0x0005e21c) tabs_4_passive_pane_srt

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp3_srt_ParamLimits

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp3_srt

0x9d91,	// (0x000604de) heading_pane_t1_ParamLimits

0x9d91,	// (0x000604de) heading_pane_t1

0x9da8,	// (0x000604f5) heading_pane_t2_ParamLimits

0x9da8,	// (0x000604f5) heading_pane_t2

0x0001,

0xf8a4,	// (0x00065ff1) heading_pane_t_ParamLimits

0xf8a4,	// (0x00065ff1) heading_pane_t

0x98b2,	// (0x0005ffff) bg_popup_heading_pane_g1

0x9961,	// (0x000600ae) bg_popup_heading_pane_g2

0x996b,	// (0x000600b8) bg_popup_heading_pane_g3

0x9975,	// (0x000600c2) bg_popup_heading_pane_g4

0x997f,	// (0x000600cc) bg_popup_heading_pane_g5

0x9989,	// (0x000600d6) bg_popup_heading_pane_g6

0x9991,	// (0x000600de) bg_popup_heading_pane_g7

0x9999,	// (0x000600e6) bg_popup_heading_pane_g8

0x99a3,	// (0x000600f0) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x00065fad) bg_popup_heading_pane_g

0x9073,	// (0x0005f7c0) bg_popup_sub_pane_g1

0x9083,	// (0x0005f7d0) bg_popup_sub_pane_g2

0x907b,	// (0x0005f7c8) bg_popup_sub_pane_g3

0x9093,	// (0x0005f7e0) bg_popup_sub_pane_g4

0x908b,	// (0x0005f7d8) bg_popup_sub_pane_g5

0x909b,	// (0x0005f7e8) bg_popup_sub_pane_g6

0x90a3,	// (0x0005f7f0) bg_popup_sub_pane_g7

0x90b3,	// (0x0005f800) bg_popup_sub_pane_g8

0x90ab,	// (0x0005f7f8) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x00065f87) bg_popup_sub_pane_g

0xe365,	// (0x00064ab2) bg_popup_window_pane_cp5_ParamLimits

0xe365,	// (0x00064ab2) bg_popup_window_pane_cp5

0xe381,	// (0x00064ace) popup_note_window_g1_ParamLimits

0xe381,	// (0x00064ace) popup_note_window_g1

0xe38d,	// (0x00064ada) popup_note_window_t1_ParamLimits

0xe38d,	// (0x00064ada) popup_note_window_t1

0xe3a3,	// (0x00064af0) popup_note_window_t2_ParamLimits

0xe3a3,	// (0x00064af0) popup_note_window_t2

0xe3b9,	// (0x00064b06) popup_note_window_t3_ParamLimits

0xe3b9,	// (0x00064b06) popup_note_window_t3

0xe3cf,	// (0x00064b1c) popup_note_window_t4_ParamLimits

0xe3cf,	// (0x00064b1c) popup_note_window_t4

0xe3f7,	// (0x00064b44) popup_note_window_t5_ParamLimits

0xe3f7,	// (0x00064b44) popup_note_window_t5

0x0004,

0xf558,	// (0x00065ca5) popup_note_window_t_ParamLimits

0xf558,	// (0x00065ca5) popup_note_window_t

0xe41b,	// (0x00064b68) bg_popup_window_pane_cp6_ParamLimits

0xe41b,	// (0x00064b68) bg_popup_window_pane_cp6

0x982e,	// (0x0005ff7b) popup_note_image_window_g1_ParamLimits

0x982e,	// (0x0005ff7b) popup_note_image_window_g1

0x983a,	// (0x0005ff87) popup_note_image_window_g2_ParamLimits

0x983a,	// (0x0005ff87) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x00065f7b) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x00065f7b) popup_note_image_window_g

0x9853,	// (0x0005ffa0) popup_note_image_window_t1_ParamLimits

0x9853,	// (0x0005ffa0) popup_note_image_window_t1

0x986c,	// (0x0005ffb9) popup_note_image_window_t2_ParamLimits

0x986c,	// (0x0005ffb9) popup_note_image_window_t2

0x9885,	// (0x0005ffd2) popup_note_image_window_t3_ParamLimits

0x9885,	// (0x0005ffd2) popup_note_image_window_t3

0x0002,

0xf833,	// (0x00065f80) popup_note_image_window_t_ParamLimits

0xf833,	// (0x00065f80) popup_note_image_window_t

0x96f7,	// (0x0005fe44) bg_popup_window_pane_cp7_ParamLimits

0x96f7,	// (0x0005fe44) bg_popup_window_pane_cp7

0x9727,	// (0x0005fe74) popup_note_wait_window_g1_ParamLimits

0x9727,	// (0x0005fe74) popup_note_wait_window_g1

0x9733,	// (0x0005fe80) popup_note_wait_window_g2_ParamLimits

0x9733,	// (0x0005fe80) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x00065f69) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x00065f69) popup_note_wait_window_g

0x974b,	// (0x0005fe98) popup_note_wait_window_t1_ParamLimits

0x974b,	// (0x0005fe98) popup_note_wait_window_t1

0x9772,	// (0x0005febf) popup_note_wait_window_t2_ParamLimits

0x9772,	// (0x0005febf) popup_note_wait_window_t2

0x978f,	// (0x0005fedc) popup_note_wait_window_t3_ParamLimits

0x978f,	// (0x0005fedc) popup_note_wait_window_t3

0x97a2,	// (0x0005feef) popup_note_wait_window_t4_ParamLimits

0x97a2,	// (0x0005feef) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x00065f70) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x00065f70) popup_note_wait_window_t

0x97c7,	// (0x0005ff14) wait_bar_pane_ParamLimits

0x97c7,	// (0x0005ff14) wait_bar_pane

0xe1ed,	// (0x0006493a) wait_anim_pane

0xe1ed,	// (0x0006493a) wait_border_pane

0xe1e3,	// (0x00064930) wait_anim_pane_g1

0xe1e3,	// (0x00064930) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x00065e24) wait_anim_pane_g

0x96a3,	// (0x0005fdf0) wait_border_pane_g1

0x96ae,	// (0x0005fdfb) wait_border_pane_g2

0x96b7,	// (0x0005fe04) wait_border_pane_g3

0x0002,

0xf815,	// (0x00065f62) wait_border_pane_g

0x950e,	// (0x0005fc5b) bg_popup_window_pane_cp16_ParamLimits

0x950e,	// (0x0005fc5b) bg_popup_window_pane_cp16

0x960e,	// (0x0005fd5b) indicator_popup_pane_cp4_ParamLimits

0x960e,	// (0x0005fd5b) indicator_popup_pane_cp4

0x9622,	// (0x0005fd6f) popup_query_data_window_t1_ParamLimits

0x9622,	// (0x0005fd6f) popup_query_data_window_t1

0x9634,	// (0x0005fd81) popup_query_data_window_t2_ParamLimits

0x9634,	// (0x0005fd81) popup_query_data_window_t2

0x964d,	// (0x0005fd9a) popup_query_data_window_t3_ParamLimits

0x964d,	// (0x0005fd9a) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x00065f5b) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x00065f5b) popup_query_data_window_t

0x9667,	// (0x0005fdb4) query_popup_data_pane_ParamLimits

0x9667,	// (0x0005fdb4) query_popup_data_pane

0x967b,	// (0x0005fdc8) query_popup_data_pane_cp1_ParamLimits

0x967b,	// (0x0005fdc8) query_popup_data_pane_cp1

0x950e,	// (0x0005fc5b) bg_popup_window_pane_cp10_ParamLimits

0x950e,	// (0x0005fc5b) bg_popup_window_pane_cp10

0x9540,	// (0x0005fc8d) indicator_popup_pane_ParamLimits

0x9540,	// (0x0005fc8d) indicator_popup_pane

0x9562,	// (0x0005fcaf) popup_query_code_window_t1_ParamLimits

0x9562,	// (0x0005fcaf) popup_query_code_window_t1

0x957c,	// (0x0005fcc9) popup_query_code_window_t2_ParamLimits

0x957c,	// (0x0005fcc9) popup_query_code_window_t2

0x95c5,	// (0x0005fd12) popup_query_code_window_t3_ParamLimits

0x95c5,	// (0x0005fd12) popup_query_code_window_t3

0x0002,

0xf807,	// (0x00065f54) popup_query_code_window_t_ParamLimits

0xf807,	// (0x00065f54) popup_query_code_window_t

0x95f4,	// (0x0005fd41) query_popup_pane_ParamLimits

0x95f4,	// (0x0005fd41) query_popup_pane

0xe41b,	// (0x00064b68) bg_popup_window_pane_cp15_ParamLimits

0xe41b,	// (0x00064b68) bg_popup_window_pane_cp15

0x5852,	// (0x0005bf9f) indicator_popup_pane_cp1_ParamLimits

0x5852,	// (0x0005bf9f) indicator_popup_pane_cp1

0x5865,	// (0x0005bfb2) indicator_popup_pane_cp2_ParamLimits

0x5865,	// (0x0005bfb2) indicator_popup_pane_cp2

0x5878,	// (0x0005bfc5) popup_query_data_code_window_g1_ParamLimits

0x5878,	// (0x0005bfc5) popup_query_data_code_window_g1

0xe439,	// (0x00064b86) popup_query_data_code_window_t1_ParamLimits

0xe439,	// (0x00064b86) popup_query_data_code_window_t1

0xe44b,	// (0x00064b98) popup_query_data_code_window_t2_ParamLimits

0xe44b,	// (0x00064b98) popup_query_data_code_window_t2

0x588b,	// (0x0005bfd8) popup_query_data_code_window_t3_ParamLimits

0x588b,	// (0x0005bfd8) popup_query_data_code_window_t3

0x58a1,	// (0x0005bfee) popup_query_data_code_window_t4_ParamLimits

0x58a1,	// (0x0005bfee) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00065cb0) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00065cb0) popup_query_data_code_window_t

0x7692,	// (0x0005dddf) list_single_midp_graphic_pane_g3

0x58b9,	// (0x0005c006) query_popup_data_pane_cp2_ParamLimits

0x58cc,	// (0x0005c019) query_popup_pane_cp2_ParamLimits

0x58cc,	// (0x0005c019) query_popup_pane_cp2

0xe1ed,	// (0x0006493a) bg_popup_window_pane_cp11

0x94f2,	// (0x0005fc3f) heading_pane_cp5

0x94fa,	// (0x0005fc47) listscroll_popup_info_pane

0xe1ed,	// (0x0006493a) input_focus_pane_cp3

0xe45d,	// (0x00064baa) query_popup_pane_t1

0xe46b,	// (0x00064bb8) list_popup_info_pane_ParamLimits

0xe46b,	// (0x00064bb8) list_popup_info_pane

0xe47a,	// (0x00064bc7) listscroll_popup_info_pane_g1

0xe482,	// (0x00064bcf) scroll_pane_cp7

0x58df,	// (0x0005c02c) popup_info_list_pane_t1_ParamLimits

0x58df,	// (0x0005c02c) popup_info_list_pane_t1

0x58f9,	// (0x0005c046) popup_info_list_pane_t2_ParamLimits

0x58f9,	// (0x0005c046) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00065cb9) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00065cb9) popup_info_list_pane_t

0xe1ed,	// (0x0006493a) bg_popup_window_pane_cp12

0xa8a6,	// (0x00060ff3) find_popup_pane

0xe23b,	// (0x00064988) bg_popup_window_pane_cp3

0xe48c,	// (0x00064bd9) heading_pane_cp3

0xe49b,	// (0x00064be8) listscroll_popup_graphic_pane

0xe1ed,	// (0x0006493a) bg_popup_window_pane_cp4

0x5963,	// (0x0005c0b0) heading_pane_cp4

0xe4ab,	// (0x00064bf8) listscroll_popup_colour_pane

0x596d,	// (0x0005c0ba) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x596d,	// (0x0005c0ba) cell_large_graphic_colour_none_popup_pane

0x5981,	// (0x0005c0ce) grid_large_graphic_colour_popup_pane_ParamLimits

0x5981,	// (0x0005c0ce) grid_large_graphic_colour_popup_pane

0x59a5,	// (0x0005c0f2) listscroll_popup_colour_pane_g1_ParamLimits

0x59a5,	// (0x0005c0f2) listscroll_popup_colour_pane_g1

0x59bc,	// (0x0005c109) listscroll_popup_colour_pane_g2_ParamLimits

0x59bc,	// (0x0005c109) listscroll_popup_colour_pane_g2

0x59d3,	// (0x0005c120) listscroll_popup_colour_pane_g3_ParamLimits

0x59d3,	// (0x0005c120) listscroll_popup_colour_pane_g3

0x59e3,	// (0x0005c130) listscroll_popup_colour_pane_g4_ParamLimits

0x59e3,	// (0x0005c130) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00065cbe) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00065cbe) listscroll_popup_colour_pane_g

0xe4b3,	// (0x00064c00) scroll_pane_cp6_ParamLimits

0xe4b3,	// (0x00064c00) scroll_pane_cp6

0x59f3,	// (0x0005c140) cell_large_graphic_colour_popup_pane_ParamLimits

0x59f3,	// (0x0005c140) cell_large_graphic_colour_popup_pane

0x5a12,	// (0x0005c15f) cell_large_graphic_colour_none_popup_pane_t1

0xe1ed,	// (0x0006493a) grid_highlight_pane_cp5

0xe4c5,	// (0x00064c12) cell_large_graphic_colour_popup_pane_g1

0xe4cd,	// (0x00064c1a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00065cc7) cell_large_graphic_colour_popup_pane_g

0xe4d5,	// (0x00064c22) cell_large_graphic_colour_popup_pane_g2_copy1

0xe4de,	// (0x00064c2b) grid_highlight_pane_cp4

0xe4e6,	// (0x00064c33) bg_popup_window_pane_cp8_ParamLimits

0xe4e6,	// (0x00064c33) bg_popup_window_pane_cp8

0x5a21,	// (0x0005c16e) popup_snote_single_text_window_g1_ParamLimits

0x5a21,	// (0x0005c16e) popup_snote_single_text_window_g1

0x5a33,	// (0x0005c180) popup_snote_single_text_window_t1_ParamLimits

0x5a33,	// (0x0005c180) popup_snote_single_text_window_t1

0x5a46,	// (0x0005c193) popup_snote_single_text_window_t2_ParamLimits

0x5a46,	// (0x0005c193) popup_snote_single_text_window_t2

0x5a59,	// (0x0005c1a6) popup_snote_single_text_window_t3_ParamLimits

0x5a59,	// (0x0005c1a6) popup_snote_single_text_window_t3

0x5a92,	// (0x0005c1df) popup_snote_single_text_window_t4_ParamLimits

0x5a92,	// (0x0005c1df) popup_snote_single_text_window_t4

0x5ac6,	// (0x0005c213) popup_snote_single_text_window_t5_ParamLimits

0x5ac6,	// (0x0005c213) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00065ccc) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00065ccc) popup_snote_single_text_window_t

0xf078,	// (0x000657c5) bg_popup_window_pane_cp9_ParamLimits

0xf078,	// (0x000657c5) bg_popup_window_pane_cp9

0x5a21,	// (0x0005c16e) popup_snote_single_graphic_window_g1_ParamLimits

0x5a21,	// (0x0005c16e) popup_snote_single_graphic_window_g1

0xf086,	// (0x000657d3) popup_snote_single_graphic_window_g2_ParamLimits

0xf086,	// (0x000657d3) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00065cd7) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00065cd7) popup_snote_single_graphic_window_g

0xf092,	// (0x000657df) popup_snote_single_graphic_window_t1_ParamLimits

0xf092,	// (0x000657df) popup_snote_single_graphic_window_t1

0xf0a5,	// (0x000657f2) popup_snote_single_graphic_window_t2_ParamLimits

0xf0a5,	// (0x000657f2) popup_snote_single_graphic_window_t2

0x5af5,	// (0x0005c242) popup_snote_single_graphic_window_t3_ParamLimits

0x5af5,	// (0x0005c242) popup_snote_single_graphic_window_t3

0x5b2e,	// (0x0005c27b) popup_snote_single_graphic_window_t4_ParamLimits

0x5b2e,	// (0x0005c27b) popup_snote_single_graphic_window_t4

0x5b62,	// (0x0005c2af) popup_snote_single_graphic_window_t5_ParamLimits

0x5b62,	// (0x0005c2af) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00065cdc) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00065cdc) popup_snote_single_graphic_window_t

0xa7e8,	// (0x00060f35) grid_graphic_popup_pane_ParamLimits

0xa7e8,	// (0x00060f35) grid_graphic_popup_pane

0xa812,	// (0x00060f5f) listscroll_popup_graphic_pane_g1_ParamLimits

0xa812,	// (0x00060f5f) listscroll_popup_graphic_pane_g1

0xa826,	// (0x00060f73) listscroll_popup_graphic_pane_g2_ParamLimits

0xa826,	// (0x00060f73) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x000660d1) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x000660d1) listscroll_popup_graphic_pane_g

0xa83a,	// (0x00060f87) scroll_pane_cp5

0xa777,	// (0x00060ec4) cell_graphic_popup_pane_ParamLimits

0xa777,	// (0x00060ec4) cell_graphic_popup_pane

0xa758,	// (0x00060ea5) cell_graphic_popup_pane_g1

0xa760,	// (0x00060ead) cell_graphic_popup_pane_g2

0xe4d5,	// (0x00064c22) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x000660ca) cell_graphic_popup_pane_g

0xa769,	// (0x00060eb6) cell_graphic_popup_pane_t2

0xe4de,	// (0x00064c2b) grid_highlight_pane_cp3

0xf0ca,	// (0x00065817) list_gen_pane_ParamLimits

0xf0ca,	// (0x00065817) list_gen_pane

0xf0f2,	// (0x0006583f) scroll_pane

0xa6b0,	// (0x00060dfd) bg_list_pane_g1_ParamLimits

0xa6b0,	// (0x00060dfd) bg_list_pane_g1

0xa6cd,	// (0x00060e1a) bg_list_pane_g2_ParamLimits

0xa6cd,	// (0x00060e1a) bg_list_pane_g2

0xa6e2,	// (0x00060e2f) bg_list_pane_g3_ParamLimits

0xa6e2,	// (0x00060e2f) bg_list_pane_g3

0xa6f6,	// (0x00060e43) bg_list_pane_g4_ParamLimits

0xa6f6,	// (0x00060e43) bg_list_pane_g4

0xa70a,	// (0x00060e57) bg_list_pane_g5_ParamLimits

0xa70a,	// (0x00060e57) bg_list_pane_g5

0x0004,

0xf972,	// (0x000660bf) bg_list_pane_g_ParamLimits

0xf972,	// (0x000660bf) bg_list_pane_g

0xa5f2,	// (0x00060d3f) list_double2_graphic_large_graphic_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double2_graphic_large_graphic_pane

0xa5f2,	// (0x00060d3f) list_double2_graphic_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double2_graphic_pane

0xa5f2,	// (0x00060d3f) list_double2_large_graphic_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double2_large_graphic_pane

0x7a23,	// (0x0005e170) list_double2_pane_ParamLimits

0x7a23,	// (0x0005e170) list_double2_pane

0xa5f2,	// (0x00060d3f) list_double_graphic_heading_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_graphic_heading_pane

0xa5f2,	// (0x00060d3f) list_double_graphic_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_graphic_pane

0xa5f2,	// (0x00060d3f) list_double_heading_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_heading_pane

0xa5f2,	// (0x00060d3f) list_double_large_graphic_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_large_graphic_pane

0xa5f2,	// (0x00060d3f) list_double_number_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_number_pane

0xa5f2,	// (0x00060d3f) list_double_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_pane

0xa5f2,	// (0x00060d3f) list_double_time_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_double_time_pane

0xa5f2,	// (0x00060d3f) list_setting_number_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_setting_number_pane

0xa5f2,	// (0x00060d3f) list_setting_pane_ParamLimits

0xa5f2,	// (0x00060d3f) list_setting_pane

0xa670,	// (0x00060dbd) list_single_2graphic_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_2graphic_pane

0xa670,	// (0x00060dbd) list_single_graphic_heading_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_graphic_heading_pane

0xa670,	// (0x00060dbd) list_single_graphic_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_graphic_pane

0xa670,	// (0x00060dbd) list_single_heading_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_heading_pane

0x7a77,	// (0x0005e1c4) list_single_large_graphic_pane_ParamLimits

0x7a77,	// (0x0005e1c4) list_single_large_graphic_pane

0xa670,	// (0x00060dbd) list_single_number_heading_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_number_heading_pane

0xa670,	// (0x00060dbd) list_single_number_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_number_pane

0xa670,	// (0x00060dbd) list_single_pane_ParamLimits

0xa670,	// (0x00060dbd) list_single_pane

0xe1ed,	// (0x0006493a) list_highlight_pane_cp1

0x4666,	// (0x0005adb3) list_single_pane_g1_ParamLimits

0x4666,	// (0x0005adb3) list_single_pane_g1

0x4672,	// (0x0005adbf) list_single_pane_g2_ParamLimits

0x4672,	// (0x0005adbf) list_single_pane_g2

0x0001,

0xf5ab,	// (0x00065cf8) list_single_pane_g_ParamLimits

0xf5ab,	// (0x00065cf8) list_single_pane_g

0x5ba7,	// (0x0005c2f4) list_single_pane_t1_ParamLimits

0x5ba7,	// (0x0005c2f4) list_single_pane_t1

0x4666,	// (0x0005adb3) list_single_number_pane_g1_ParamLimits

0x4666,	// (0x0005adb3) list_single_number_pane_g1

0x4672,	// (0x0005adbf) list_single_number_pane_g2_ParamLimits

0x4672,	// (0x0005adbf) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x00065cf8) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x00065cf8) list_single_number_pane_g

0x5ba7,	// (0x0005c2f4) list_single_number_pane_t1_ParamLimits

0x5ba7,	// (0x0005c2f4) list_single_number_pane_t1

0x7969,	// (0x0005e0b6) list_single_number_pane_t2_ParamLimits

0x7969,	// (0x0005e0b6) list_single_number_pane_t2

0x0001,

0xf933,	// (0x00066080) list_single_number_pane_t_ParamLimits

0xf933,	// (0x00066080) list_single_number_pane_t

0x5b9b,	// (0x0005c2e8) list_single_graphic_pane_g1_ParamLimits

0x5b9b,	// (0x0005c2e8) list_single_graphic_pane_g1

0x4666,	// (0x0005adb3) list_single_graphic_pane_g2_ParamLimits

0x4666,	// (0x0005adb3) list_single_graphic_pane_g2

0x4672,	// (0x0005adbf) list_single_graphic_pane_g3_ParamLimits

0x4672,	// (0x0005adbf) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00065ce7) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00065ce7) list_single_graphic_pane_g

0x5ba7,	// (0x0005c2f4) list_single_graphic_pane_t1_ParamLimits

0x5ba7,	// (0x0005c2f4) list_single_graphic_pane_t1

0x5bbd,	// (0x0005c30a) list_single_heading_pane_g1_ParamLimits

0x5bbd,	// (0x0005c30a) list_single_heading_pane_g1

0x4672,	// (0x0005adbf) list_single_heading_pane_g2_ParamLimits

0x4672,	// (0x0005adbf) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00065cee) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00065cee) list_single_heading_pane_g

0x5bd0,	// (0x0005c31d) list_single_heading_pane_t1_ParamLimits

0x5bd0,	// (0x0005c31d) list_single_heading_pane_t1

0x5be6,	// (0x0005c333) list_single_heading_pane_t2_ParamLimits

0x5be6,	// (0x0005c333) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00065cf3) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00065cf3) list_single_heading_pane_t

0x4666,	// (0x0005adb3) list_single_number_heading_pane_g1_ParamLimits

0x4666,	// (0x0005adb3) list_single_number_heading_pane_g1

0x4672,	// (0x0005adbf) list_single_number_heading_pane_g2_ParamLimits

0x4672,	// (0x0005adbf) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x00065cf8) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x00065cf8) list_single_number_heading_pane_g

0x5bf8,	// (0x0005c345) list_single_number_heading_pane_t1_ParamLimits

0x5bf8,	// (0x0005c345) list_single_number_heading_pane_t1

0x5c0e,	// (0x0005c35b) list_single_number_heading_pane_t2_ParamLimits

0x5c0e,	// (0x0005c35b) list_single_number_heading_pane_t2

0x5c20,	// (0x0005c36d) list_single_number_heading_pane_t3_ParamLimits

0x5c20,	// (0x0005c36d) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00065cfd) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00065cfd) list_single_number_heading_pane_t

0x5b9b,	// (0x0005c2e8) list_single_graphic_heading_pane_g1_ParamLimits

0x5b9b,	// (0x0005c2e8) list_single_graphic_heading_pane_g1

0x5c32,	// (0x0005c37f) list_single_graphic_heading_pane_g4_ParamLimits

0x5c32,	// (0x0005c37f) list_single_graphic_heading_pane_g4

0x4672,	// (0x0005adbf) list_single_graphic_heading_pane_g5_ParamLimits

0x4672,	// (0x0005adbf) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x00065d04) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x00065d04) list_single_graphic_heading_pane_g

0x5bf8,	// (0x0005c345) list_single_graphic_heading_pane_t1_ParamLimits

0x5bf8,	// (0x0005c345) list_single_graphic_heading_pane_t1

0x5c43,	// (0x0005c390) list_single_graphic_heading_pane_t2_ParamLimits

0x5c43,	// (0x0005c390) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x00065d0b) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x00065d0b) list_single_graphic_heading_pane_t

0x5c55,	// (0x0005c3a2) list_single_large_graphic_pane_g1_ParamLimits

0x5c55,	// (0x0005c3a2) list_single_large_graphic_pane_g1

0x42af,	// (0x0005a9fc) list_single_large_graphic_pane_g2_ParamLimits

0x42af,	// (0x0005a9fc) list_single_large_graphic_pane_g2

0x42bb,	// (0x0005aa08) list_single_large_graphic_pane_g3_ParamLimits

0x42bb,	// (0x0005aa08) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x00065d10) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x00065d10) list_single_large_graphic_pane_g

0x96ae,	// (0x0005fdfb) wait_border_pane_g2_copy1

0x5c61,	// (0x0005c3ae) list_single_large_graphic_pane_g4_cp2

0x5c69,	// (0x0005c3b6) list_single_large_graphic_pane_t1_ParamLimits

0x5c69,	// (0x0005c3b6) list_single_large_graphic_pane_t1

0x247c,	// (0x00058bc9) list_double_pane_g1_ParamLimits

0x247c,	// (0x00058bc9) list_double_pane_g1

0x42dc,	// (0x0005aa29) list_double_pane_g2_ParamLimits

0x42dc,	// (0x0005aa29) list_double_pane_g2

0x0001,

0xf5ca,	// (0x00065d17) list_double_pane_g_ParamLimits

0xf5ca,	// (0x00065d17) list_double_pane_g

0x5c7f,	// (0x0005c3cc) list_double_pane_t1_ParamLimits

0x5c7f,	// (0x0005c3cc) list_double_pane_t1

0x5c95,	// (0x0005c3e2) list_double_pane_t2_ParamLimits

0x5c95,	// (0x0005c3e2) list_double_pane_t2

0x0001,

0xf5cf,	// (0x00065d1c) list_double_pane_t_ParamLimits

0xf5cf,	// (0x00065d1c) list_double_pane_t

0x5ca7,	// (0x0005c3f4) list_double2_pane_g1_ParamLimits

0x5ca7,	// (0x0005c3f4) list_double2_pane_g1

0x3a88,	// (0x0005a1d5) list_double2_pane_g2_ParamLimits

0x3a88,	// (0x0005a1d5) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x00065d21) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x00065d21) list_double2_pane_g

0x5cb8,	// (0x0005c405) list_double2_pane_t1_ParamLimits

0x5cb8,	// (0x0005c405) list_double2_pane_t1

0x5cce,	// (0x0005c41b) list_double2_pane_t2_ParamLimits

0x5cce,	// (0x0005c41b) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x00065d26) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x00065d26) list_double2_pane_t

0x247c,	// (0x00058bc9) list_double_number_pane_g1_ParamLimits

0x247c,	// (0x00058bc9) list_double_number_pane_g1

0x42dc,	// (0x0005aa29) list_double_number_pane_g2_ParamLimits

0x42dc,	// (0x0005aa29) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x00065d17) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x00065d17) list_double_number_pane_g

0x5ce0,	// (0x0005c42d) list_double_number_pane_t1_ParamLimits

0x5ce0,	// (0x0005c42d) list_double_number_pane_t1

0x5c7f,	// (0x0005c3cc) list_double_number_pane_t2_ParamLimits

0x5c7f,	// (0x0005c3cc) list_double_number_pane_t2

0x5c95,	// (0x0005c3e2) list_double_number_pane_t3_ParamLimits

0x5c95,	// (0x0005c3e2) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x00065d2b) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x00065d2b) list_double_number_pane_t

0x5cf2,	// (0x0005c43f) list_double_graphic_pane_g1_ParamLimits

0x5cf2,	// (0x0005c43f) list_double_graphic_pane_g1

0x5cfe,	// (0x0005c44b) list_double_graphic_pane_g2_ParamLimits

0x5cfe,	// (0x0005c44b) list_double_graphic_pane_g2

0x5d0d,	// (0x0005c45a) list_double_graphic_pane_g3_ParamLimits

0x5d0d,	// (0x0005c45a) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x00065d32) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00065d32) list_double_graphic_pane_g

0x5c7f,	// (0x0005c3cc) list_double_graphic_pane_t1_ParamLimits

0x5c7f,	// (0x0005c3cc) list_double_graphic_pane_t1

0x5c95,	// (0x0005c3e2) list_double_graphic_pane_t2_ParamLimits

0x5c95,	// (0x0005c3e2) list_double_graphic_pane_t2

0x0001,

0xf5cf,	// (0x00065d1c) list_double_graphic_pane_t_ParamLimits

0xf5cf,	// (0x00065d1c) list_double_graphic_pane_t

0x5cf2,	// (0x0005c43f) list_double2_graphic_pane_g1_ParamLimits

0x5cf2,	// (0x0005c43f) list_double2_graphic_pane_g1

0x247c,	// (0x00058bc9) list_double2_graphic_pane_g2_ParamLimits

0x247c,	// (0x00058bc9) list_double2_graphic_pane_g2

0x42dc,	// (0x0005aa29) list_double2_graphic_pane_g3_ParamLimits

0x42dc,	// (0x0005aa29) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00065d3b) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00065d3b) list_double2_graphic_pane_g

0x5c7f,	// (0x0005c3cc) list_double2_graphic_pane_t1_ParamLimits

0x5c7f,	// (0x0005c3cc) list_double2_graphic_pane_t1

0x5d25,	// (0x0005c472) list_double2_graphic_pane_t2_ParamLimits

0x5d25,	// (0x0005c472) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x00065d42) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x00065d42) list_double2_graphic_pane_t

0x5d37,	// (0x0005c484) list_double_large_graphic_pane_g1_ParamLimits

0x5d37,	// (0x0005c484) list_double_large_graphic_pane_g1

0x5d56,	// (0x0005c4a3) list_double_large_graphic_pane_g2_ParamLimits

0x5d56,	// (0x0005c4a3) list_double_large_graphic_pane_g2

0x42dc,	// (0x0005aa29) list_double_large_graphic_pane_g3_ParamLimits

0x42dc,	// (0x0005aa29) list_double_large_graphic_pane_g3

0x5d6c,	// (0x0005c4b9) list_double_large_graphic_pane_g4_ParamLimits

0x5d6c,	// (0x0005c4b9) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00065d47) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00065d47) list_double_large_graphic_pane_g

0x5d7e,	// (0x0005c4cb) list_double_large_graphic_pane_t1_ParamLimits

0x5d7e,	// (0x0005c4cb) list_double_large_graphic_pane_t1

0x5d97,	// (0x0005c4e4) list_double_large_graphic_pane_t2_ParamLimits

0x5d97,	// (0x0005c4e4) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x00065d52) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x00065d52) list_double_large_graphic_pane_t

0x5da9,	// (0x0005c4f6) list_double2_large_graphic_pane_g1_ParamLimits

0x5da9,	// (0x0005c4f6) list_double2_large_graphic_pane_g1

0x5db5,	// (0x0005c502) list_double2_large_graphic_pane_g2_ParamLimits

0x5db5,	// (0x0005c502) list_double2_large_graphic_pane_g2

0x42dc,	// (0x0005aa29) list_double2_large_graphic_pane_g3_ParamLimits

0x42dc,	// (0x0005aa29) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00065d57) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00065d57) list_double2_large_graphic_pane_g

0x5dc6,	// (0x0005c513) list_double2_large_graphic_pane_t1_ParamLimits

0x5dc6,	// (0x0005c513) list_double2_large_graphic_pane_t1

0x5ddc,	// (0x0005c529) list_double2_large_graphic_pane_t2_ParamLimits

0x5ddc,	// (0x0005c529) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x00065d5e) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x00065d5e) list_double2_large_graphic_pane_t

0x5dee,	// (0x0005c53b) list_double_heading_pane_g1_ParamLimits

0x5dee,	// (0x0005c53b) list_double_heading_pane_g1

0x5dff,	// (0x0005c54c) list_double_heading_pane_g2_ParamLimits

0x5dff,	// (0x0005c54c) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x00065d63) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x00065d63) list_double_heading_pane_g

0x5e0b,	// (0x0005c558) list_double_heading_pane_t1_ParamLimits

0x5e0b,	// (0x0005c558) list_double_heading_pane_t1

0x5e21,	// (0x0005c56e) list_double_heading_pane_t2_ParamLimits

0x5e21,	// (0x0005c56e) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00065d68) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00065d68) list_double_heading_pane_t

0x5e33,	// (0x0005c580) list_double_graphic_heading_pane_g1_ParamLimits

0x5e33,	// (0x0005c580) list_double_graphic_heading_pane_g1

0x5dee,	// (0x0005c53b) list_double_graphic_heading_pane_g2_ParamLimits

0x5dee,	// (0x0005c53b) list_double_graphic_heading_pane_g2

0x5dff,	// (0x0005c54c) list_double_graphic_heading_pane_g3_ParamLimits

0x5dff,	// (0x0005c54c) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x00065d6d) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x00065d6d) list_double_graphic_heading_pane_g

0x5e0b,	// (0x0005c558) list_double_graphic_heading_pane_t1_ParamLimits

0x5e0b,	// (0x0005c558) list_double_graphic_heading_pane_t1

0x5e21,	// (0x0005c56e) list_double_graphic_heading_pane_t2_ParamLimits

0x5e21,	// (0x0005c56e) list_double_graphic_heading_pane_t2

0x0001,

0xf61b,	// (0x00065d68) list_double_graphic_heading_pane_t_ParamLimits

0xf61b,	// (0x00065d68) list_double_graphic_heading_pane_t

0x5e3f,	// (0x0005c58c) list_double_time_pane_g1_ParamLimits

0x5e3f,	// (0x0005c58c) list_double_time_pane_g1

0x5e50,	// (0x0005c59d) list_double_time_pane_g2_ParamLimits

0x5e50,	// (0x0005c59d) list_double_time_pane_g2

0x0001,

0xf627,	// (0x00065d74) list_double_time_pane_g_ParamLimits

0xf627,	// (0x00065d74) list_double_time_pane_g

0x5e5c,	// (0x0005c5a9) list_double_time_pane_t1_ParamLimits

0x5e5c,	// (0x0005c5a9) list_double_time_pane_t1

0x5e72,	// (0x0005c5bf) list_double_time_pane_t2_ParamLimits

0x5e72,	// (0x0005c5bf) list_double_time_pane_t2

0x5e84,	// (0x0005c5d1) list_double_time_pane_t3_ParamLimits

0x5e84,	// (0x0005c5d1) list_double_time_pane_t3

0x5e96,	// (0x0005c5e3) list_double_time_pane_t4_ParamLimits

0x5e96,	// (0x0005c5e3) list_double_time_pane_t4

0x0003,

0xf62c,	// (0x00065d79) list_double_time_pane_t_ParamLimits

0xf62c,	// (0x00065d79) list_double_time_pane_t

0x5ea8,	// (0x0005c5f5) list_setting_pane_g1_ParamLimits

0x5ea8,	// (0x0005c5f5) list_setting_pane_g1

0x5eb4,	// (0x0005c601) list_setting_pane_g2_ParamLimits

0x5eb4,	// (0x0005c601) list_setting_pane_g2

0x0001,

0xf635,	// (0x00065d82) list_setting_pane_g_ParamLimits

0xf635,	// (0x00065d82) list_setting_pane_g

0x5ec0,	// (0x0005c60d) list_setting_pane_t1_ParamLimits

0x5ec0,	// (0x0005c60d) list_setting_pane_t1

0x5eda,	// (0x0005c627) list_setting_pane_t2_ParamLimits

0x5eda,	// (0x0005c627) list_setting_pane_t2

0x0002,

0xf63a,	// (0x00065d87) list_setting_pane_t_ParamLimits

0xf63a,	// (0x00065d87) list_setting_pane_t

0x5f17,	// (0x0005c664) set_value_pane_cp_ParamLimits

0x5f17,	// (0x0005c664) set_value_pane_cp

0x5f23,	// (0x0005c670) list_setting_number_pane_g1_ParamLimits

0x5f23,	// (0x0005c670) list_setting_number_pane_g1

0x5f2f,	// (0x0005c67c) list_setting_number_pane_g2_ParamLimits

0x5f2f,	// (0x0005c67c) list_setting_number_pane_g2

0x0001,

0xf641,	// (0x00065d8e) list_setting_number_pane_g_ParamLimits

0xf641,	// (0x00065d8e) list_setting_number_pane_g

0x5f3b,	// (0x0005c688) list_setting_number_pane_t1_ParamLimits

0x5f3b,	// (0x0005c688) list_setting_number_pane_t1

0x5f54,	// (0x0005c6a1) list_setting_number_pane_t2_ParamLimits

0x5f54,	// (0x0005c6a1) list_setting_number_pane_t2

0x5f6e,	// (0x0005c6bb) list_setting_number_pane_t3_ParamLimits

0x5f6e,	// (0x0005c6bb) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x00065d93) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x00065d93) list_setting_number_pane_t

0x5f17,	// (0x0005c664) set_value_pane_ParamLimits

0x5f17,	// (0x0005c664) set_value_pane

0xf126,	// (0x00065873) bg_set_opt_pane_ParamLimits

0xf126,	// (0x00065873) bg_set_opt_pane

0x3a94,	// (0x0005a1e1) set_value_pane_t1

0xf147,	// (0x00065894) slider_set_pane_cp3

0x5fb1,	// (0x0005c6fe) volume_small_pane_cp

0xf150,	// (0x0006589d) list_form_gen_pane

0xf159,	// (0x000658a6) scroll_pane_cp8

0x5fba,	// (0x0005c707) form_field_data_pane_ParamLimits

0x5fba,	// (0x0005c707) form_field_data_pane

0x5fd4,	// (0x0005c721) form_field_data_wide_pane_ParamLimits

0x5fd4,	// (0x0005c721) form_field_data_wide_pane

0x5ff7,	// (0x0005c744) form_field_popup_pane_ParamLimits

0x5ff7,	// (0x0005c744) form_field_popup_pane

0x6017,	// (0x0005c764) form_field_popup_wide_pane_ParamLimits

0x6017,	// (0x0005c764) form_field_popup_wide_pane

0x3ab2,	// (0x0005a1ff) form_field_slider_pane_ParamLimits

0x3ab2,	// (0x0005a1ff) form_field_slider_pane

0x6034,	// (0x0005c781) form_field_slider_wide_pane_ParamLimits

0x6034,	// (0x0005c781) form_field_slider_wide_pane

0xf16a,	// (0x000658b7) data_form_pane

0x6051,	// (0x0005c79e) form_field_data_pane_t1

0xf176,	// (0x000658c3) input_focus_pane

0x3ac5,	// (0x0005a212) data_form_wide_pane

0x3ae2,	// (0x0005a22f) form_field_data_wide_pane_t1

0xe4f3,	// (0x00064c40) input_focus_pane_cp6

0x6069,	// (0x0005c7b6) form_field_popup_pane_t1

0xf176,	// (0x000658c3) input_focus_pane_cp7

0xf1a4,	// (0x000658f1) list_form_pane

0x3b0c,	// (0x0005a259) form_field_popup_wide_pane_t1

0xf176,	// (0x000658c3) input_focus_pane_cp8

0xf1b0,	// (0x000658fd) list_form_wide_pane

0x6089,	// (0x0005c7d6) form_field_slider_pane_t1_ParamLimits

0x6089,	// (0x0005c7d6) form_field_slider_pane_t1

0x609f,	// (0x0005c7ec) form_field_slider_pane_t2_ParamLimits

0x609f,	// (0x0005c7ec) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x00065da3) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x00065da3) form_field_slider_pane_t

0xe365,	// (0x00064ab2) input_focus_pane_cp9_ParamLimits

0xe365,	// (0x00064ab2) input_focus_pane_cp9

0x60b4,	// (0x0005c801) slider_cont_pane_ParamLimits

0x60b4,	// (0x0005c801) slider_cont_pane

0xf1bc,	// (0x00065909) form_field_slider_wide_pane_t1_ParamLimits

0xf1bc,	// (0x00065909) form_field_slider_wide_pane_t1

0x3b21,	// (0x0005a26e) form_field_slider_wide_pane_t2_ParamLimits

0x3b21,	// (0x0005a26e) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x00065da8) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x00065da8) form_field_slider_wide_pane_t

0xe365,	// (0x00064ab2) input_focus_pane_cp10_ParamLimits

0xe365,	// (0x00064ab2) input_focus_pane_cp10

0x60c8,	// (0x0005c815) slider_cont_pane_cp1_ParamLimits

0x60c8,	// (0x0005c815) slider_cont_pane_cp1

0x60dc,	// (0x0005c829) slider_form_pane_cp

0xf1ce,	// (0x0006591b) input_focus_pane_g1

0xf1d6,	// (0x00065923) input_focus_pane_g2

0xf1de,	// (0x0006592b) input_focus_pane_g3

0xf1e6,	// (0x00065933) input_focus_pane_g4

0xf1ee,	// (0x0006593b) input_focus_pane_g5

0xf1f6,	// (0x00065943) input_focus_pane_g6

0xf1fe,	// (0x0006594b) input_focus_pane_g7

0xf206,	// (0x00065953) input_focus_pane_g8

0xf20e,	// (0x0006595b) input_focus_pane_g9

0xe1e3,	// (0x00064930) input_focus_pane_g10

0x0009,

0xf660,	// (0x00065dad) input_focus_pane_g

0x96b7,	// (0x0005fe04) wait_border_pane_g3_copy1

0x60e4,	// (0x0005c831) data_form_pane_t1

0xe1e3,	// (0x00064930) wait_anim_pane_g1_copy1

0x79f3,	// (0x0005e140) data_form_wide_pane_t1

0x60ff,	// (0x0005c84c) list_form_graphic_pane_cp_ParamLimits

0x60ff,	// (0x0005c84c) list_form_graphic_pane_cp

0xa596,	// (0x00060ce3) slider_form_pane_g1

0xa59f,	// (0x00060cec) slider_form_pane_g2

0x0006,

0xf963,	// (0x000660b0) slider_form_pane_g

0x60ff,	// (0x0005c84c) list_form_graphic_pane_ParamLimits

0x60ff,	// (0x0005c84c) list_form_graphic_pane

0x6118,	// (0x0005c865) list_form_graphic_pane_g1

0x6120,	// (0x0005c86d) list_form_graphic_pane_t1_ParamLimits

0x6120,	// (0x0005c86d) list_form_graphic_pane_t1

0xe23b,	// (0x00064988) list_highlight_pane_cp5_ParamLimits

0xe23b,	// (0x00064988) list_highlight_pane_cp5

0x6135,	// (0x0005c882) find_pane_g1

0xf216,	// (0x00065963) input_find_pane

0x613e,	// (0x0005c88b) input_find_pane_g1_ParamLimits

0x613e,	// (0x0005c88b) input_find_pane_g1

0x614a,	// (0x0005c897) input_find_pane_t1_ParamLimits

0x614a,	// (0x0005c897) input_find_pane_t1

0x615f,	// (0x0005c8ac) input_find_pane_t2_ParamLimits

0x615f,	// (0x0005c8ac) input_find_pane_t2

0x0001,

0xf675,	// (0x00065dc2) input_find_pane_t_ParamLimits

0xf675,	// (0x00065dc2) input_find_pane_t

0xf21f,	// (0x0006596c) input_focus_pane_cp5_ParamLimits

0xf21f,	// (0x0006596c) input_focus_pane_cp5

0xf232,	// (0x0006597f) bg_popup_window_pane_cp2_ParamLimits

0xf232,	// (0x0006597f) bg_popup_window_pane_cp2

0xf23f,	// (0x0006598c) listscroll_menu_pane_ParamLimits

0xf23f,	// (0x0006598c) listscroll_menu_pane

0x6180,	// (0x0005c8cd) popup_submenu_window_ParamLimits

0x6180,	// (0x0005c8cd) popup_submenu_window

0xf24b,	// (0x00065998) find_popup_pane_g1

0x61a8,	// (0x0005c8f5) input_popup_find_pane_cp

0xf253,	// (0x000659a0) input_focus_pane_cp4_ParamLimits

0xf253,	// (0x000659a0) input_focus_pane_cp4

0xf261,	// (0x000659ae) input_popup_find_pane_t1_ParamLimits

0xf261,	// (0x000659ae) input_popup_find_pane_t1

0xe1ed,	// (0x0006493a) bg_popup_sub_pane_cp

0xf28f,	// (0x000659dc) listscroll_popup_sub_pane

0xf297,	// (0x000659e4) list_submenu_pane_ParamLimits

0xf297,	// (0x000659e4) list_submenu_pane

0xf2a8,	// (0x000659f5) scroll_pane_cp4

0x61c0,	// (0x0005c90d) list_single_popup_submenu_pane_ParamLimits

0x61c0,	// (0x0005c90d) list_single_popup_submenu_pane

0x22ae,	// (0x000589fb) list_single_popup_submenu_pane_g1

0x61d4,	// (0x0005c921) list_single_popup_submenu_pane_t1_ParamLimits

0x61d4,	// (0x0005c921) list_single_popup_submenu_pane_t1

0xe23b,	// (0x00064988) bg_active_tab_pane_cp1_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp1

0xf2b0,	// (0x000659fd) tabs_2_active_pane_g1

0x61e9,	// (0x0005c936) tabs_2_active_pane_t1

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp1_ParamLimits

0xe23b,	// (0x00064988) bg_passive_tab_pane_cp1

0xf2b0,	// (0x000659fd) tabs_2_passive_pane_g1

0x61e9,	// (0x0005c936) tabs_2_passive_pane_t1

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp4

0x6209,	// (0x0005c956) tabs_2_long_active_pane_t1

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp4

0x769a,	// (0x0005dde7) list_single_midp_graphic_pane_g4_ParamLimits

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp5

0x6228,	// (0x0005c975) tabs_3_long_active_pane_t1

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp5

0x769a,	// (0x0005dde7) list_single_midp_graphic_pane_g4

0xe23b,	// (0x00064988) bg_popup_window_pane_cp13_ParamLimits

0xe23b,	// (0x00064988) bg_popup_window_pane_cp13

0xf2b8,	// (0x00065a05) listscroll_popup_fast_pane_ParamLimits

0xf2b8,	// (0x00065a05) listscroll_popup_fast_pane

0xf2c4,	// (0x00065a11) grid_popup_fast_pane_ParamLimits

0xf2c4,	// (0x00065a11) grid_popup_fast_pane

0xf2d6,	// (0x00065a23) scroll_pane_cp9_ParamLimits

0xf2d6,	// (0x00065a23) scroll_pane_cp9

0xc0a6,	// (0x000627f3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc0a6,	// (0x000627f3) list_single_graphic_hl_pane_t1_cp2

0xf2e9,	// (0x00065a36) input_focus_pane_cp20_ParamLimits

0xf2e9,	// (0x00065a36) input_focus_pane_cp20

0xf2f7,	// (0x00065a44) query_popup_data_pane_t1_ParamLimits

0xf2f7,	// (0x00065a44) query_popup_data_pane_t1

0xf30a,	// (0x00065a57) query_popup_data_pane_t2_ParamLimits

0xf30a,	// (0x00065a57) query_popup_data_pane_t2

0xf350,	// (0x00065a9d) query_popup_data_pane_t3_ParamLimits

0xf350,	// (0x00065a9d) query_popup_data_pane_t3

0xf391,	// (0x00065ade) query_popup_data_pane_t4_ParamLimits

0xf391,	// (0x00065ade) query_popup_data_pane_t4

0xf3cd,	// (0x00065b1a) query_popup_data_pane_t5_ParamLimits

0xf3cd,	// (0x00065b1a) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x00065dc7) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x00065dc7) query_popup_data_pane_t

0xf1ce,	// (0x0006591b) bg_set_opt_pane_g1

0xf1d6,	// (0x00065923) bg_set_opt_pane_g2

0xf1de,	// (0x0006592b) bg_set_opt_pane_g3

0xf1e6,	// (0x00065933) bg_set_opt_pane_g4

0xf1ee,	// (0x0006593b) bg_set_opt_pane_g5

0xf1f6,	// (0x00065943) bg_set_opt_pane_g6

0xf1fe,	// (0x0006594b) bg_set_opt_pane_g7

0xf206,	// (0x00065953) bg_set_opt_pane_g8

0xf20e,	// (0x0006595b) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x00065dd2) bg_set_opt_pane_g

0x67b3,	// (0x0005cf00) control_top_pane_stacon_ParamLimits

0x67b3,	// (0x0005cf00) control_top_pane_stacon

0x6806,	// (0x0005cf53) signal_pane_stacon_ParamLimits

0x6806,	// (0x0005cf53) signal_pane_stacon

0x140e,	// (0x00057b5b) stacon_top_pane_g1_ParamLimits

0x140e,	// (0x00057b5b) stacon_top_pane_g1

0x682b,	// (0x0005cf78) title_pane_stacon_ParamLimits

0x682b,	// (0x0005cf78) title_pane_stacon

0x6855,	// (0x0005cfa2) uni_indicator_pane_stacon_ParamLimits

0x6855,	// (0x0005cfa2) uni_indicator_pane_stacon

0x686a,	// (0x0005cfb7) battery_pane_stacon_ParamLimits

0x686a,	// (0x0005cfb7) battery_pane_stacon

0x68ae,	// (0x0005cffb) control_bottom_pane_stacon_ParamLimits

0x68ae,	// (0x0005cffb) control_bottom_pane_stacon

0x68d1,	// (0x0005d01e) navi_pane_stacon_ParamLimits

0x68d1,	// (0x0005d01e) navi_pane_stacon

0x1430,	// (0x00057b7d) stacon_bottom_pane_g1_ParamLimits

0x1430,	// (0x00057b7d) stacon_bottom_pane_g1

0x6254,	// (0x0005c9a1) aid_levels_signal_lsc_ParamLimits

0x6254,	// (0x0005c9a1) aid_levels_signal_lsc

0x626a,	// (0x0005c9b7) signal_pane_stacon_g1_ParamLimits

0x626a,	// (0x0005c9b7) signal_pane_stacon_g1

0x627e,	// (0x0005c9cb) signal_pane_stacon_g2_ParamLimits

0x627e,	// (0x0005c9cb) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x00065de5) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x00065de5) signal_pane_stacon_g

0x62b3,	// (0x0005ca00) title_pane_stacon_t1_ParamLimits

0x62b3,	// (0x0005ca00) title_pane_stacon_t1

0xf411,	// (0x00065b5e) uni_indicator_pane_stacon_g1

0xf41b,	// (0x00065b68) uni_indicator_pane_stacon_g2

0xf425,	// (0x00065b72) uni_indicator_pane_stacon_g3

0xf42f,	// (0x00065b7c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x00065df1) uni_indicator_pane_stacon_g

0x62d8,	// (0x0005ca25) control_top_pane_stacon_g1

0x62e0,	// (0x0005ca2d) control_top_pane_stacon_t1_ParamLimits

0x62e0,	// (0x0005ca2d) control_top_pane_stacon_t1

0x6317,	// (0x0005ca64) aid_levels_battery_lsc_ParamLimits

0x6317,	// (0x0005ca64) aid_levels_battery_lsc

0x632e,	// (0x0005ca7b) battery_pane_stacon_g1_ParamLimits

0x632e,	// (0x0005ca7b) battery_pane_stacon_g1

0x6341,	// (0x0005ca8e) battery_pane_stacon_g2_ParamLimits

0x6341,	// (0x0005ca8e) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x00065dfa) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x00065dfa) battery_pane_stacon_g

0x637f,	// (0x0005cacc) navi_icon_pane_stacon

0x6393,	// (0x0005cae0) navi_navi_pane_stacon

0x637f,	// (0x0005cacc) navi_text_pane_stacon

0x62d8,	// (0x0005ca25) control_bottom_pane_stacon_g1

0x63a7,	// (0x0005caf4) control_bottom_pane_stacon_t1_ParamLimits

0x63a7,	// (0x0005caf4) control_bottom_pane_stacon_t1

0x63de,	// (0x0005cb2b) grid_app_pane_ParamLimits

0x63de,	// (0x0005cb2b) grid_app_pane

0x6400,	// (0x0005cb4d) scroll_pane_cp15_ParamLimits

0x6400,	// (0x0005cb4d) scroll_pane_cp15

0x6413,	// (0x0005cb60) cell_app_pane_ParamLimits

0x6413,	// (0x0005cb60) cell_app_pane

0x643b,	// (0x0005cb88) cell_app_pane_g1_ParamLimits

0x643b,	// (0x0005cb88) cell_app_pane_g1

0xf453,	// (0x00065ba0) cell_app_pane_g2_ParamLimits

0xf453,	// (0x00065ba0) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x00065dff) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x00065dff) cell_app_pane_g

0x645f,	// (0x0005cbac) cell_app_pane_t1_ParamLimits

0x645f,	// (0x0005cbac) cell_app_pane_t1

0xf45f,	// (0x00065bac) grid_highlight_pane_ParamLimits

0xf45f,	// (0x00065bac) grid_highlight_pane

0xf1ce,	// (0x0006591b) cell_highlight_pane_g1

0xf1d6,	// (0x00065923) cell_highlight_pane_g2

0xf1de,	// (0x0006592b) cell_highlight_pane_g3

0xf1e6,	// (0x00065933) cell_highlight_pane_g4

0xf1ee,	// (0x0006593b) cell_highlight_pane_g5

0xf1f6,	// (0x00065943) cell_highlight_pane_g6

0xf1fe,	// (0x0006594b) cell_highlight_pane_g7

0xf206,	// (0x00065953) cell_highlight_pane_g8

0xf20e,	// (0x0006595b) cell_highlight_pane_g9

0xe1e3,	// (0x00064930) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x00065dad) cell_highlight_pane_g

0xf470,	// (0x00065bbd) bg_scroll_pane

0x6489,	// (0x0005cbd6) scroll_handle_pane

0xf4b7,	// (0x00065c04) scroll_bg_pane_g1

0xf4cc,	// (0x00065c19) scroll_bg_pane_g2

0xf4e4,	// (0x00065c31) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x00065e04) scroll_bg_pane_g

0x64b2,	// (0x0005cbff) scroll_handle_focus_pane_ParamLimits

0x64b2,	// (0x0005cbff) scroll_handle_focus_pane

0xf4b7,	// (0x00065c04) scroll_handle_pane_g1

0xf4f9,	// (0x00065c46) scroll_handle_pane_g2

0xf4e4,	// (0x00065c31) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x00065e0b) scroll_handle_pane_g

0xf253,	// (0x000659a0) bg_popup_sub_pane_cp21_ParamLimits

0xf253,	// (0x000659a0) bg_popup_sub_pane_cp21

0x64bf,	// (0x0005cc0c) popup_fep_japan_predictive_window_t1_ParamLimits

0x64bf,	// (0x0005cc0c) popup_fep_japan_predictive_window_t1

0x64d9,	// (0x0005cc26) popup_fep_japan_predictive_window_t2_ParamLimits

0x64d9,	// (0x0005cc26) popup_fep_japan_predictive_window_t2

0x650c,	// (0x0005cc59) popup_fep_japan_predictive_window_t3_ParamLimits

0x650c,	// (0x0005cc59) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x00065e12) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x00065e12) popup_fep_japan_predictive_window_t

0xe1ed,	// (0x0006493a) bg_popup_sub_pane_cp23

0x2bfb,	// (0x00059348) listscroll_japin_cand_pane

0xf50d,	// (0x00065c5a) popup_fep_japan_candidate_window_t1

0x11d0,	// (0x0005791d) candidate_pane_ParamLimits

0x11d0,	// (0x0005791d) candidate_pane

0x6543,	// (0x0005cc90) scroll_pane_cp30

0x11e2,	// (0x0005792f) list_single_popup_jap_candidate_pane_ParamLimits

0x11e2,	// (0x0005792f) list_single_popup_jap_candidate_pane

0xe1ed,	// (0x0006493a) list_highlight_pane_cp30

0x11f7,	// (0x00057944) list_single_popup_jap_candidate_pane_t1

0x1206,	// (0x00057953) level_1_signal

0x1213,	// (0x00057960) level_2_signal

0x1220,	// (0x0005796d) level_3_signal

0x122d,	// (0x0005797a) level_4_signal

0x123a,	// (0x00057987) level_5_signal

0x1247,	// (0x00057994) level_6_signal

0x1254,	// (0x000579a1) level_7_signal

0x1206,	// (0x00057953) level_1_battery

0x1213,	// (0x00057960) level_2_battery

0x1220,	// (0x0005796d) level_3_battery

0x122d,	// (0x0005797a) level_4_battery

0x123a,	// (0x00057987) level_5_battery

0x1247,	// (0x00057994) level_6_battery

0x1254,	// (0x000579a1) level_7_battery

0x1279,	// (0x000579c6) list_menu_pane_ParamLimits

0x1279,	// (0x000579c6) list_menu_pane

0x128f,	// (0x000579dc) scroll_pane_cp25_ParamLimits

0x128f,	// (0x000579dc) scroll_pane_cp25

0x12a8,	// (0x000579f5) list_double2_graphic_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double2_graphic_pane_cp2

0x12a8,	// (0x000579f5) list_double2_large_graphic_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double2_large_graphic_pane_cp2

0x12a8,	// (0x000579f5) list_double2_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double2_pane_cp2

0x12a8,	// (0x000579f5) list_double_graphic_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double_graphic_pane_cp2

0x12a8,	// (0x000579f5) list_double_large_graphic_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double_large_graphic_pane_cp2

0x12a8,	// (0x000579f5) list_double_number_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double_number_pane_cp2

0x12a8,	// (0x000579f5) list_double_pane_cp2_ParamLimits

0x12a8,	// (0x000579f5) list_double_pane_cp2

0x657e,	// (0x0005cccb) list_single_2graphic_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_2graphic_pane_cp2

0x657e,	// (0x0005cccb) list_single_graphic_heading_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_graphic_heading_pane_cp2

0x657e,	// (0x0005cccb) list_single_graphic_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_graphic_pane_cp2

0x657e,	// (0x0005cccb) list_single_heading_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_heading_pane_cp2

0x12b8,	// (0x00057a05) list_single_large_graphic_pane_cp2_ParamLimits

0x12b8,	// (0x00057a05) list_single_large_graphic_pane_cp2

0x657e,	// (0x0005cccb) list_single_number_heading_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_number_heading_pane_cp2

0x657e,	// (0x0005cccb) list_single_number_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_number_pane_cp2

0x6594,	// (0x0005cce1) list_single_pane_cp2_ParamLimits

0x6594,	// (0x0005cce1) list_single_pane_cp2

0x12d2,	// (0x00057a1f) bg_popup_sub_pane_cp22

0x666c,	// (0x0005cdb9) popup_side_volume_key_window_g1

0x6690,	// (0x0005cddd) popup_side_volume_key_window_t1

0x66ac,	// (0x0005cdf9) volume_small_pane_cp1

0xe365,	// (0x00064ab2) bg_popup_sub_pane_cp24_ParamLimits

0xe365,	// (0x00064ab2) bg_popup_sub_pane_cp24

0x12e8,	// (0x00057a35) fep_china_uni_candidate_pane_ParamLimits

0x12e8,	// (0x00057a35) fep_china_uni_candidate_pane

0x12fc,	// (0x00057a49) fep_china_uni_entry_pane

0x130c,	// (0x00057a59) popup_fep_china_uni_window_g1

0x66b4,	// (0x0005ce01) fep_china_uni_entry_pane_g1

0x66bc,	// (0x0005ce09) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x00065e43) fep_china_uni_entry_pane_g

0x1328,	// (0x00057a75) fep_entry_item_pane

0x1332,	// (0x00057a7f) fep_candidate_item_pane

0x66c4,	// (0x0005ce11) fep_china_uni_candidate_pane_g1

0x133a,	// (0x00057a87) fep_china_uni_candidate_pane_g2

0x1342,	// (0x00057a8f) fep_china_uni_candidate_pane_g3

0x66cc,	// (0x0005ce19) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x00065e48) fep_china_uni_candidate_pane_g

0xe1e3,	// (0x00064930) fep_entry_item_pane_g1

0x134a,	// (0x00057a97) fep_entry_item_pane_t1_ParamLimits

0x134a,	// (0x00057a97) fep_entry_item_pane_t1

0x1360,	// (0x00057aad) fep_candidate_item_pane_t1_ParamLimits

0x1360,	// (0x00057aad) fep_candidate_item_pane_t1

0x1375,	// (0x00057ac2) fep_candidate_item_pane_t2_ParamLimits

0x1375,	// (0x00057ac2) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x00065e51) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x00065e51) fep_candidate_item_pane_t

0xe23b,	// (0x00064988) list_highlight_pane_cp31_ParamLimits

0xe23b,	// (0x00064988) list_highlight_pane_cp31

0x1387,	// (0x00057ad4) level_1_signal_lsc

0x1390,	// (0x00057add) level_2_signal_lsc

0x1399,	// (0x00057ae6) level_3_signal_lsc

0x13a2,	// (0x00057aef) level_4_signal_lsc

0x13ab,	// (0x00057af8) level_5_signal_lsc

0x13b4,	// (0x00057b01) level_6_signal_lsc

0x13bd,	// (0x00057b0a) level_7_signal_lsc

0x13bd,	// (0x00057b0a) level_1_battery_lsc

0x13c6,	// (0x00057b13) level_2_battery_lsc

0x13cf,	// (0x00057b1c) level_3_battery_lsc

0x13d8,	// (0x00057b25) level_4_battery_lsc

0x13e1,	// (0x00057b2e) level_5_battery_lsc

0x13ea,	// (0x00057b37) level_6_battery_lsc

0x1387,	// (0x00057ad4) level_7_battery_lsc

0x13f3,	// (0x00057b40) scroll_handle_focus_pane_g1

0x13fc,	// (0x00057b49) scroll_handle_focus_pane_g2

0x1405,	// (0x00057b52) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x00065e56) scroll_handle_focus_pane_g

0x66d4,	// (0x0005ce21) list_single_2graphic_pane_g1_ParamLimits

0x66d4,	// (0x0005ce21) list_single_2graphic_pane_g1

0x5c32,	// (0x0005c37f) list_single_2graphic_pane_g2_ParamLimits

0x5c32,	// (0x0005c37f) list_single_2graphic_pane_g2

0x4672,	// (0x0005adbf) list_single_2graphic_pane_g3_ParamLimits

0x4672,	// (0x0005adbf) list_single_2graphic_pane_g3

0x66e0,	// (0x0005ce2d) list_single_2graphic_pane_g4_ParamLimits

0x66e0,	// (0x0005ce2d) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x00065e5d) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x00065e5d) list_single_2graphic_pane_g

0x66ec,	// (0x0005ce39) list_single_2graphic_pane_t1_ParamLimits

0x66ec,	// (0x0005ce39) list_single_2graphic_pane_t1

0x671a,	// (0x0005ce67) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x671a,	// (0x0005ce67) list_double2_graphic_large_graphic_pane_g1

0x5db5,	// (0x0005c502) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5db5,	// (0x0005c502) list_double2_graphic_large_graphic_pane_g2

0x42dc,	// (0x0005aa29) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x42dc,	// (0x0005aa29) list_double2_graphic_large_graphic_pane_g3

0x672a,	// (0x0005ce77) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x672a,	// (0x0005ce77) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x00065e66) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x00065e66) list_double2_graphic_large_graphic_pane_g

0x6736,	// (0x0005ce83) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6736,	// (0x0005ce83) list_double2_graphic_large_graphic_pane_t1

0x674c,	// (0x0005ce99) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x674c,	// (0x0005ce99) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x00065e6f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x00065e6f) list_double2_graphic_large_graphic_pane_t

0x6930,	// (0x0005d07d) popup_fast_swap_window_ParamLimits

0x6930,	// (0x0005d07d) popup_fast_swap_window

0x694c,	// (0x0005d099) popup_side_volume_key_window

0x14bb,	// (0x00057c08) stacon_top_pane

0x14c5,	// (0x00057c12) status_pane_ParamLimits

0x14c5,	// (0x00057c12) status_pane

0xe1d9,	// (0x00064926) status_small_pane

0xe1ed,	// (0x0006493a) control_pane

0xe1ed,	// (0x0006493a) stacon_bottom_pane

0xf159,	// (0x000658a6) scroll_pane_cp121

0xf150,	// (0x0006589d) set_content_pane

0x675e,	// (0x0005ceab) bg_active_tab_pane_g1_cp1

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp1

0x6770,	// (0x0005cebd) bg_active_tab_pane_g3_cp1

0x675e,	// (0x0005ceab) bg_passive_tab_pane_g1_cp1

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp1

0x6770,	// (0x0005cebd) bg_passive_tab_pane_g3_cp1

0x6779,	// (0x0005cec6) bg_active_tab_pane_g1_cp2

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp2

0x6782,	// (0x0005cecf) bg_active_tab_pane_g3_cp2

0x6779,	// (0x0005cec6) bg_passive_tab_pane_g1_cp2

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp2

0x6782,	// (0x0005cecf) bg_passive_tab_pane_g3_cp2

0x678b,	// (0x0005ced8) bg_active_tab_pane_g1_cp3

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp3

0x6794,	// (0x0005cee1) bg_active_tab_pane_g3_cp3

0x678b,	// (0x0005ced8) bg_passive_tab_pane_g1_cp3

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp3

0x6794,	// (0x0005cee1) bg_passive_tab_pane_g3_cp3

0x679d,	// (0x0005ceea) bg_active_tab_pane_g1_cp4

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp4

0x67a8,	// (0x0005cef5) bg_active_tab_pane_g3_cp4

0x679d,	// (0x0005ceea) bg_passive_tab_pane_g1_cp4

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp4

0x67a8,	// (0x0005cef5) bg_passive_tab_pane_g3_cp4

0x68f4,	// (0x0005d041) bg_active_tab_pane_g1_cp5

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp5

0x68fd,	// (0x0005d04a) bg_active_tab_pane_g3_cp5

0x68f4,	// (0x0005d041) bg_passive_tab_pane_g1_cp5

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp5

0x68fd,	// (0x0005d04a) bg_passive_tab_pane_g3_cp5

0x6906,	// (0x0005d053) list_set_graphic_pane_ParamLimits

0x6906,	// (0x0005d053) list_set_graphic_pane

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp4

0x144c,	// (0x00057b99) list_set_graphic_pane_g1_ParamLimits

0x144c,	// (0x00057b99) list_set_graphic_pane_g1

0x1458,	// (0x00057ba5) list_set_graphic_pane_g2_ParamLimits

0x1458,	// (0x00057ba5) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x00065e74) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x00065e74) list_set_graphic_pane_g

0x0009,

0xfabf,	// (0x0006620c) volume_small_pane_cp_g

0x6924,	// (0x0005d071) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6924,	// (0x0005d071) list_double2_large_graphic_pane_g1_cp2

0x147a,	// (0x00057bc7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x147a,	// (0x00057bc7) list_double2_large_graphic_pane_g2_cp2

0x148b,	// (0x00057bd8) list_double2_large_graphic_pane_g3_cp2

0x1493,	// (0x00057be0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1493,	// (0x00057be0) list_double2_large_graphic_pane_t1_cp2

0x14a9,	// (0x00057bf6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x14a9,	// (0x00057bf6) list_double2_large_graphic_pane_t2_cp2

0xa168,	// (0x000608b5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa168,	// (0x000608b5) list_double_large_graphic_pane_g1_cp2

0xa179,	// (0x000608c6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa179,	// (0x000608c6) list_double_large_graphic_pane_g2_cp2

0x15e1,	// (0x00057d2e) list_double_large_graphic_pane_g3_cp2

0xa18a,	// (0x000608d7) list_double_large_graphic_pane_g4_cp

0xa192,	// (0x000608df) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa192,	// (0x000608df) list_double_large_graphic_pane_t1_cp2

0xa1a9,	// (0x000608f6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1a9,	// (0x000608f6) list_double_large_graphic_pane_t2_cp2

0x14d3,	// (0x00057c20) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14d3,	// (0x00057c20) list_double2_graphic_pane_g1_cp2

0x14e1,	// (0x00057c2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14e1,	// (0x00057c2e) list_double2_graphic_pane_g2_cp2

0x14f2,	// (0x00057c3f) list_double2_graphic_pane_g3_cp2

0x14fc,	// (0x00057c49) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14fc,	// (0x00057c49) list_double2_graphic_pane_t1_cp2

0x1512,	// (0x00057c5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1512,	// (0x00057c5f) list_double2_graphic_pane_t2_cp2

0x1524,	// (0x00057c71) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1524,	// (0x00057c71) list_single_number_heading_pane_g1_cp2

0x1530,	// (0x00057c7d) list_single_number_heading_pane_g2_cp2

0x1538,	// (0x00057c85) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1538,	// (0x00057c85) list_single_number_heading_pane_t1_cp2

0x154e,	// (0x00057c9b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x154e,	// (0x00057c9b) list_single_number_heading_pane_t2_cp2

0x1560,	// (0x00057cad) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1560,	// (0x00057cad) list_single_number_heading_pane_t3_cp2

0x1524,	// (0x00057c71) list_single_heading_pane_g1_cp2_ParamLimits

0x1524,	// (0x00057c71) list_single_heading_pane_g1_cp2

0x1530,	// (0x00057c7d) list_single_heading_pane_g2_cp2

0x1538,	// (0x00057c85) list_single_heading_pane_t1_cp2_ParamLimits

0x1538,	// (0x00057c85) list_single_heading_pane_t1_cp2

0x9f72,	// (0x000606bf) list_single_heading_pane_t2_cp2_ParamLimits

0x9f72,	// (0x000606bf) list_single_heading_pane_t2_cp2

0x9eba,	// (0x00060607) list_double_graphic_pane_g1_cp2_ParamLimits

0x9eba,	// (0x00060607) list_double_graphic_pane_g1_cp2

0x9ec6,	// (0x00060613) list_double_graphic_pane_g2_cp2_ParamLimits

0x9ec6,	// (0x00060613) list_double_graphic_pane_g2_cp2

0x9ed5,	// (0x00060622) list_double_graphic_pane_g3_cp2

0x9edd,	// (0x0006062a) list_double_graphic_pane_t1_cp2_ParamLimits

0x9edd,	// (0x0006062a) list_double_graphic_pane_t1_cp2

0x9ef3,	// (0x00060640) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ef3,	// (0x00060640) list_double_graphic_pane_t2_cp2

0x15d5,	// (0x00057d22) list_double_number_pane_g1_cp2_ParamLimits

0x15d5,	// (0x00057d22) list_double_number_pane_g1_cp2

0x15e1,	// (0x00057d2e) list_double_number_pane_g2_cp2

0x9e7e,	// (0x000605cb) list_double_number_pane_t1_cp2_ParamLimits

0x9e7e,	// (0x000605cb) list_double_number_pane_t1_cp2

0x9e92,	// (0x000605df) list_double_number_pane_t2_cp2_ParamLimits

0x9e92,	// (0x000605df) list_double_number_pane_t2_cp2

0x9ea8,	// (0x000605f5) list_double_number_pane_t3_cp2_ParamLimits

0x9ea8,	// (0x000605f5) list_double_number_pane_t3_cp2

0x9d67,	// (0x000604b4) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d67,	// (0x000604b4) list_single_graphic_pane_g1_cp2

0x11c4,	// (0x00057911) list_single_graphic_pane_g2_cp2_ParamLimits

0x11c4,	// (0x00057911) list_single_graphic_pane_g2_cp2

0x163e,	// (0x00057d8b) list_single_graphic_pane_g3_cp2

0x9d3d,	// (0x0006048a) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d3d,	// (0x0006048a) list_single_graphic_pane_t1_cp2

0x11c4,	// (0x00057911) list_single_number_pane_g1_cp2_ParamLimits

0x11c4,	// (0x00057911) list_single_number_pane_g1_cp2

0x163e,	// (0x00057d8b) list_single_number_pane_g2_cp2

0x9d3d,	// (0x0006048a) list_single_number_pane_t1_cp2_ParamLimits

0x9d3d,	// (0x0006048a) list_single_number_pane_t1_cp2

0x9d53,	// (0x000604a0) list_single_number_pane_t2_cp2_ParamLimits

0x9d53,	// (0x000604a0) list_single_number_pane_t2_cp2

0x147a,	// (0x00057bc7) list_double2_pane_g1_cp2_ParamLimits

0x147a,	// (0x00057bc7) list_double2_pane_g1_cp2

0x148b,	// (0x00057bd8) list_double2_pane_g2_cp2

0x15ad,	// (0x00057cfa) list_double2_pane_t1_cp2_ParamLimits

0x15ad,	// (0x00057cfa) list_double2_pane_t1_cp2

0x15c3,	// (0x00057d10) list_double2_pane_t2_cp2_ParamLimits

0x15c3,	// (0x00057d10) list_double2_pane_t2_cp2

0x15d5,	// (0x00057d22) list_double_pane_g1_cp2_ParamLimits

0x15d5,	// (0x00057d22) list_double_pane_g1_cp2

0x15e1,	// (0x00057d2e) list_double_pane_g2_cp2

0x15e9,	// (0x00057d36) list_double_pane_t1_cp2_ParamLimits

0x15e9,	// (0x00057d36) list_double_pane_t1_cp2

0x15ff,	// (0x00057d4c) list_double_pane_t2_cp2_ParamLimits

0x15ff,	// (0x00057d4c) list_double_pane_t2_cp2

0x6966,	// (0x0005d0b3) list_single_pane_cp2_g3

0x11c4,	// (0x00057911) list_single_pane_g1_cp2_ParamLimits

0x11c4,	// (0x00057911) list_single_pane_g1_cp2

0x163e,	// (0x00057d8b) list_single_pane_g2_cp2

0x1646,	// (0x00057d93) list_single_pane_t1_cp2_ParamLimits

0x1646,	// (0x00057d93) list_single_pane_t1_cp2

0x696e,	// (0x0005d0bb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x696e,	// (0x0005d0bb) list_single_large_graphic_pane_g1_cp2

0x165e,	// (0x00057dab) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x165e,	// (0x00057dab) list_single_large_graphic_pane_g2_cp2

0x166a,	// (0x00057db7) list_single_large_graphic_pane_g3_cp2

0x697a,	// (0x0005d0c7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x697a,	// (0x0005d0c7) list_single_large_graphic_pane_g4_cp1

0x1672,	// (0x00057dbf) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1672,	// (0x00057dbf) list_single_large_graphic_pane_t1_cp2

0x9d09,	// (0x00060456) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d09,	// (0x00060456) list_single_graphic_heading_pane_g1_cp2

0x9cd6,	// (0x00060423) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9cd6,	// (0x00060423) list_single_graphic_heading_pane_g4_cp2

0x163e,	// (0x00057d8b) list_single_graphic_heading_pane_g5_cp2

0x9d15,	// (0x00060462) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d15,	// (0x00060462) list_single_graphic_heading_pane_t1_cp2

0x9d2b,	// (0x00060478) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d2b,	// (0x00060478) list_single_graphic_heading_pane_t2_cp2

0x9cca,	// (0x00060417) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9cca,	// (0x00060417) list_single_2graphic_pane_g1_cp2

0x9cd6,	// (0x00060423) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9cd6,	// (0x00060423) list_single_2graphic_pane_g2_cp2

0x163e,	// (0x00057d8b) list_single_2graphic_pane_g3_cp2

0x9ce7,	// (0x00060434) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ce7,	// (0x00060434) list_single_2graphic_pane_g4_cp2

0x9cf3,	// (0x00060440) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cf3,	// (0x00060440) list_single_2graphic_pane_t1_cp2

0xe1e3,	// (0x00064930) list_highlight_pane_g10_cp1

0x98b2,	// (0x0005ffff) list_highlight_pane_g1_cp1

0x98ba,	// (0x00060007) list_highlight_pane_g2_cp1

0x98c2,	// (0x0006000f) list_highlight_pane_g3_cp1

0x98ca,	// (0x00060017) list_highlight_pane_g4_cp1

0x98d2,	// (0x0006001f) list_highlight_pane_g5_cp1

0x98da,	// (0x00060027) list_highlight_pane_g6_cp1

0x98e2,	// (0x0006002f) list_highlight_pane_g7_cp1

0x98ea,	// (0x00060037) list_highlight_pane_g8_cp1

0x98f2,	// (0x0006003f) list_highlight_pane_g9_cp1

0x97da,	// (0x0005ff27) form_field_slider_pane_t3

0x97e8,	// (0x0005ff35) form_field_slider_pane_t4

0x97f6,	// (0x0005ff43) slider_form_pane_ParamLimits

0x97f6,	// (0x0005ff43) slider_form_pane

0xe1ed,	// (0x0006493a) control_abbreviations

0xe1ed,	// (0x0006493a) control_conventions

0xe1ed,	// (0x0006493a) control_definitions

0xe1ed,	// (0x0006493a) format_table_attribute

0x9fbc,	// (0x00060709) bg_popup_preview_window_pane_g9

0xe1ed,	// (0x0006493a) format_table_data2

0xe1ed,	// (0x0006493a) format_table_data3

0xe1ed,	// (0x0006493a) format_table_data_example

0x0008,

0xe1ed,	// (0x0006493a) intro_purpose

0xf8c3,	// (0x00066010) bg_popup_preview_window_pane_g

0xe1ed,	// (0x0006493a) texts_category

0xe1ed,	// (0x0006493a) texts_graphics

0x1688,	// (0x00057dd5) text_digital

0x1697,	// (0x00057de4) text_primary

0x16a6,	// (0x00057df3) text_primary_small

0x16b5,	// (0x00057e02) text_secondary

0x16c4,	// (0x00057e11) text_title

0xa72c,	// (0x00060e79) bg_passive_tab_pane_g1_cp3_srt

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp3_srt

0xa735,	// (0x00060e82) bg_passive_tab_pane_g3_cp3_srt

0xe23b,	// (0x00064988) bg_active_tab_pane_cp3_srt_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp3_srt

0xa73e,	// (0x00060e8b) tabs_4_active_pane_srt_g1

0xa746,	// (0x00060e93) tabs_4_active_pane_srt_t1_ParamLimits

0xa746,	// (0x00060e93) tabs_4_active_pane_srt_t1

0xa72c,	// (0x00060e79) bg_active_tab_pane_g1_cp3_copy1

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp3_copy1

0xa735,	// (0x00060e82) bg_active_tab_pane_g3_cp3_copy1

0xe23b,	// (0x00064988) tabs_2_long_active_pane_srt_ParamLimits

0xe23b,	// (0x00064988) tabs_2_long_active_pane_srt

0xe23b,	// (0x00064988) tabs_2_long_passive_pane_srt_ParamLimits

0xe23b,	// (0x00064988) tabs_2_long_passive_pane_srt

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp4_srt_ParamLimits

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp4_srt

0xa3cd,	// (0x00060b1a) bg_passive_tab_pane_g1_cp4_srt

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp4_srt

0xa3d6,	// (0x00060b23) bg_passive_tab_pane_g3_cp4_srt

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp4_srt_ParamLimits

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp4_srt

0xa3df,	// (0x00060b2c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3df,	// (0x00060b2c) tabs_2_long_active_pane_srt_t1

0xa3cd,	// (0x00060b1a) bg_active_tab_pane_g1_cp4_srt

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp4_srt

0xa3d6,	// (0x00060b23) bg_active_tab_pane_g3_cp4_srt

0xe365,	// (0x00064ab2) tabs_3_long_active_pane_srt_ParamLimits

0xe365,	// (0x00064ab2) tabs_3_long_active_pane_srt

0xe365,	// (0x00064ab2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe365,	// (0x00064ab2) tabs_3_long_passive_pane_cp_srt

0xe365,	// (0x00064ab2) tabs_3_long_passive_pane_srt_ParamLimits

0xe365,	// (0x00064ab2) tabs_3_long_passive_pane_srt

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp5_srt_ParamLimits

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp5_srt

0x68f4,	// (0x0005d041) bg_passive_tab_pane_g1_cp5_srt

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp5_srt

0x68fd,	// (0x0005d04a) bg_passive_tab_pane_g3_cp5_srt

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp5_srt_ParamLimits

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp5_srt

0xa3bb,	// (0x00060b08) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3bb,	// (0x00060b08) tabs_3_long_active_pane_srt_t1

0x68f4,	// (0x0005d041) bg_active_tab_pane_g1_cp5_srt

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp5_srt

0x68fd,	// (0x0005d04a) bg_active_tab_pane_g3_cp5_srt

0xa3ad,	// (0x00060afa) navi_text_pane_srt_t1

0xa3a5,	// (0x00060af2) navi_icon_pane_srt_g1

0x17af,	// (0x00057efc) midp_editing_number_pane_srt

0x16d3,	// (0x00057e20) midp_ticker_pane_srt

0x17b7,	// (0x00057f04) midp_ticker_pane_srt_g1

0x17bf,	// (0x00057f0c) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x00065e93) midp_ticker_pane_srt_g

0x17c7,	// (0x00057f14) midp_ticker_pane_srt_t1

0xa396,	// (0x00060ae3) midp_editing_number_pane_t1_copy1

0x6994,	// (0x0005d0e1) listscroll_midp_pane

0x6994,	// (0x0005d0e1) midp_form_pane

0x6a06,	// (0x0005d153) midp_info_popup_window_ParamLimits

0x6a06,	// (0x0005d153) midp_info_popup_window

0xf253,	// (0x000659a0) bg_popup_sub_pane_cp50_ParamLimits

0xf253,	// (0x000659a0) bg_popup_sub_pane_cp50

0x94e6,	// (0x0005fc33) listscroll_midp_info_pane_ParamLimits

0x94e6,	// (0x0005fc33) listscroll_midp_info_pane

0x94c6,	// (0x0005fc13) listscroll_form_midp_pane_ParamLimits

0x94c6,	// (0x0005fc13) listscroll_form_midp_pane

0x94d2,	// (0x0005fc1f) scroll_bar_cp050

0x94a6,	// (0x0005fbf3) list_midp_pane

0xb21e,	// (0x0006196b) signal_pane_g2_cp

0x93e0,	// (0x0005fb2d) listscroll_midp_info_pane_t1_ParamLimits

0x93e0,	// (0x0005fb2d) listscroll_midp_info_pane_t1

0x93f8,	// (0x0005fb45) listscroll_midp_info_pane_t2_ParamLimits

0x93f8,	// (0x0005fb45) listscroll_midp_info_pane_t2

0x9436,	// (0x0005fb83) listscroll_midp_info_pane_t3_ParamLimits

0x9436,	// (0x0005fb83) listscroll_midp_info_pane_t3

0x9470,	// (0x0005fbbd) listscroll_midp_info_pane_t4_ParamLimits

0x9470,	// (0x0005fbbd) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x00065f4b) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x00065f4b) listscroll_midp_info_pane_t

0xf2a8,	// (0x000659f5) scroll_pane_cp21

0x9380,	// (0x0005facd) form_midp_field_choice_group_pane

0x9389,	// (0x0005fad6) form_midp_field_text_pane

0x93c6,	// (0x0005fb13) form_midp_field_time_pane

0x93ce,	// (0x0005fb1b) form_midp_gauge_slider_pane

0x93d7,	// (0x0005fb24) form_midp_gauge_wait_pane

0xe1ed,	// (0x0006493a) form_midp_image_pane

0x7781,	// (0x0005dece) list_single_midp_pane_ParamLimits

0x7781,	// (0x0005dece) list_single_midp_pane

0x9335,	// (0x0005fa82) form_midp_field_text_pane_t1

0x90ff,	// (0x0005f84c) input_focus_pane_cp050

0x936f,	// (0x0005fabc) list_midp_form_text_pane

0x9304,	// (0x0005fa51) form_midp_field_choice_group_pane_t1

0x9312,	// (0x0005fa5f) input_focus_pane_cp051

0x9326,	// (0x0005fa73) list_midp_choice_pane

0xe1ed,	// (0x0006493a) status_idle_pane

0x92e8,	// (0x0005fa35) form_midp_field_time_pane_t1

0xe1e3,	// (0x00064930) wait_anim_pane_g2_copy1

0x92f6,	// (0x0005fa43) form_midp_field_time_pane_t2

0x0001,

0x1733,	// (0x00057e80) aid_navinavi_width_2_pane

0xf7f9,	// (0x00065f46) form_midp_field_time_pane_t

0xe1ed,	// (0x0006493a) input_focus_pane_cp052

0xe1ed,	// (0x0006493a) bg_input_focus_pane_cp040

0x92a8,	// (0x0005f9f5) form_midp_gauge_slider_pane_t1

0x92b6,	// (0x0005fa03) form_midp_gauge_slider_pane_t2

0x92c4,	// (0x0005fa11) form_midp_gauge_slider_pane_t3

0x92d2,	// (0x0005fa1f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x00065f3d) form_midp_gauge_slider_pane_t

0x92e0,	// (0x0005fa2d) form_midp_slider_pane

0xe23b,	// (0x00064988) bg_input_focus_pane_cp041_ParamLimits

0xe23b,	// (0x00064988) bg_input_focus_pane_cp041

0x9275,	// (0x0005f9c2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9275,	// (0x0005f9c2) form_midp_gauge_wait_pane_t1

0x9287,	// (0x0005f9d4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9287,	// (0x0005f9d4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x00065f38) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x00065f38) form_midp_gauge_wait_pane_t

0x9299,	// (0x0005f9e6) form_midp_wait_pane_ParamLimits

0x9299,	// (0x0005f9e6) form_midp_wait_pane

0x923f,	// (0x0005f98c) form_midp_image_pane_g1

0x9248,	// (0x0005f995) form_midp_image_pane_t1

0x9257,	// (0x0005f9a4) form_midp_image_pane_t2

0x9266,	// (0x0005f9b3) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x00065f31) form_midp_image_pane_t

0x9236,	// (0x0005f983) list_single_midp_pane_g1

0x3c65,	// (0x0005a3b2) list_single_midp_pane_t1

0x920d,	// (0x0005f95a) list_midp_form_item_pane_ParamLimits

0x920d,	// (0x0005f95a) list_midp_form_item_pane

0x16db,	// (0x00057e28) list_midp_form_item_pane_t1

0x16ea,	// (0x00057e37) midp_ticker_pane_g1

0x16f6,	// (0x00057e43) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x00065e79) midp_ticker_pane_g

0x1702,	// (0x00057e4f) midp_ticker_pane_t1

0xa5e3,	// (0x00060d30) midp_editing_number_pane_t1

0xa5c1,	// (0x00060d0e) midp_editing_number_pane

0xa5d0,	// (0x00060d1d) midp_ticker_pane

0x94f2,	// (0x0005fc3f) ai_message_heading_pane

0xe1ed,	// (0x0006493a) bg_popup_window_pane_cp14

0x94fa,	// (0x0005fc47) listscroll_ai_message_pane

0xa320,	// (0x00060a6d) ai_message_heading_pane_g1_ParamLimits

0xa320,	// (0x00060a6d) ai_message_heading_pane_g1

0xa32c,	// (0x00060a79) ai_message_heading_pane_g2_ParamLimits

0xa32c,	// (0x00060a79) ai_message_heading_pane_g2

0xa338,	// (0x00060a85) ai_message_heading_pane_g3_ParamLimits

0xa338,	// (0x00060a85) ai_message_heading_pane_g3

0xa344,	// (0x00060a91) ai_message_heading_pane_g4_ParamLimits

0xa344,	// (0x00060a91) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x00066072) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x00066072) ai_message_heading_pane_g

0xa350,	// (0x00060a9d) ai_message_heading_pane_t1_ParamLimits

0xa350,	// (0x00060a9d) ai_message_heading_pane_t1

0xa36a,	// (0x00060ab7) ai_message_heading_pane_t2_ParamLimits

0xa36a,	// (0x00060ab7) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0006607b) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0006607b) ai_message_heading_pane_t

0xa37c,	// (0x00060ac9) bg_popup_heading_pane_cp1_ParamLimits

0xa37c,	// (0x00060ac9) bg_popup_heading_pane_cp1

0xa30e,	// (0x00060a5b) list_ai_message_pane_ParamLimits

0xa30e,	// (0x00060a5b) list_ai_message_pane

0xf2a8,	// (0x000659f5) scroll_pane_cp10

0xa2aa,	// (0x000609f7) list_ai_message_pane_g1

0xa2b2,	// (0x000609ff) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0006604f) list_ai_message_pane_g

0xa2ba,	// (0x00060a07) list_ai_message_pane_t1_ParamLimits

0xa2ba,	// (0x00060a07) list_ai_message_pane_t1

0xa2cf,	// (0x00060a1c) list_ai_message_pane_t2_ParamLimits

0xa2cf,	// (0x00060a1c) list_ai_message_pane_t2

0xa2e4,	// (0x00060a31) list_ai_message_pane_t3_ParamLimits

0xa2e4,	// (0x00060a31) list_ai_message_pane_t3

0xa2f9,	// (0x00060a46) list_ai_message_pane_t4_ParamLimits

0xa2f9,	// (0x00060a46) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x00066054) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x00066054) list_ai_message_pane_t

0xa295,	// (0x000609e2) cell_ai_soft_ind_pane_ParamLimits

0xa295,	// (0x000609e2) cell_ai_soft_ind_pane

0x1714,	// (0x00057e61) cell_ai_soft_ind_pane_g1_ParamLimits

0x1714,	// (0x00057e61) cell_ai_soft_ind_pane_g1

0xe1ed,	// (0x0006493a) grid_highlight_cp1

0x1721,	// (0x00057e6e) text_secondary_cp56_ParamLimits

0x1721,	// (0x00057e6e) text_secondary_cp56

0xa26a,	// (0x000609b7) example_general_pane_ParamLimits

0xa26a,	// (0x000609b7) example_general_pane

0xa276,	// (0x000609c3) example_parent_pane_g1_ParamLimits

0xa276,	// (0x000609c3) example_parent_pane_g1

0xa282,	// (0x000609cf) example_parent_pane_t1_ParamLimits

0xa282,	// (0x000609cf) example_parent_pane_t1

0x70e8,	// (0x0005d835) popup_preview_text_window_ParamLimits

0x70e8,	// (0x0005d835) popup_preview_text_window

0x1636,	// (0x00057d83) list_single_pane_cp2_g4

0xe41b,	// (0x00064b68) bg_popup_preview_window_pane_ParamLimits

0xe41b,	// (0x00064b68) bg_popup_preview_window_pane

0x9fc4,	// (0x00060711) popup_preview_text_window_t1_ParamLimits

0x9fc4,	// (0x00060711) popup_preview_text_window_t1

0x9fe2,	// (0x0006072f) popup_preview_text_window_t2_ParamLimits

0x9fe2,	// (0x0006072f) popup_preview_text_window_t2

0xa02b,	// (0x00060778) popup_preview_text_window_t3_ParamLimits

0xa02b,	// (0x00060778) popup_preview_text_window_t3

0xa070,	// (0x000607bd) popup_preview_text_window_t4_ParamLimits

0xa070,	// (0x000607bd) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x00066023) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x00066023) popup_preview_text_window_t

0xa0ee,	// (0x0006083b) scroll_pane_cp11

0x9073,	// (0x0005f7c0) bg_popup_preview_window_pane_g1

0x9f84,	// (0x000606d1) bg_popup_preview_window_pane_g2

0x9f8c,	// (0x000606d9) bg_popup_preview_window_pane_g3

0x9f94,	// (0x000606e1) bg_popup_preview_window_pane_g4

0x9f9c,	// (0x000606e9) bg_popup_preview_window_pane_g5

0x9fa4,	// (0x000606f1) bg_popup_preview_window_pane_g6

0x9fac,	// (0x000606f9) bg_popup_preview_window_pane_g7

0x9fb4,	// (0x00060701) bg_popup_preview_window_pane_g8

0x51d3,	// (0x0005b920) aid_popup_width_pane

0x70c6,	// (0x0005d813) popup_midp_note_alarm_window_ParamLimits

0x70c6,	// (0x0005d813) popup_midp_note_alarm_window

0xf16a,	// (0x000658b7) data_form_pane_ParamLimits

0x6047,	// (0x0005c794) form_field_data_pane_g1

0x6051,	// (0x0005c79e) form_field_data_pane_t1_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_ParamLimits

0x3ac5,	// (0x0005a212) data_form_wide_pane_ParamLimits

0x3ad6,	// (0x0005a223) form_field_data_wide_pane_g1

0x3ae2,	// (0x0005a22f) form_field_data_wide_pane_t1_ParamLimits

0xe4f3,	// (0x00064c40) input_focus_pane_cp6_ParamLimits

0x61b2,	// (0x0005c8ff) input_popup_find_pane_g1_ParamLimits

0x61b2,	// (0x0005c8ff) input_popup_find_pane_g1

0x6352,	// (0x0005ca9f) aid_navi_side_left_pane

0x6367,	// (0x0005cab4) aid_navi_side_right_pane

0x99ad,	// (0x000600fa) bg_popup_window_pane_cp30_ParamLimits

0x99ad,	// (0x000600fa) bg_popup_window_pane_cp30

0x9a27,	// (0x00060174) popup_midp_note_alarm_window_g1_ParamLimits

0x9a27,	// (0x00060174) popup_midp_note_alarm_window_g1

0x9a57,	// (0x000601a4) popup_midp_note_alarm_window_t1_ParamLimits

0x9a57,	// (0x000601a4) popup_midp_note_alarm_window_t1

0x9af8,	// (0x00060245) popup_midp_note_alarm_window_t2_ParamLimits

0x9af8,	// (0x00060245) popup_midp_note_alarm_window_t2

0x9ba6,	// (0x000602f3) popup_midp_note_alarm_window_t3_ParamLimits

0x9ba6,	// (0x000602f3) popup_midp_note_alarm_window_t3

0x9bce,	// (0x0006031b) popup_midp_note_alarm_window_t4_ParamLimits

0x9bce,	// (0x0006031b) popup_midp_note_alarm_window_t4

0x9bee,	// (0x0006033b) popup_midp_note_alarm_window_t5_ParamLimits

0x9bee,	// (0x0006033b) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x00065fc0) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x00065fc0) popup_midp_note_alarm_window_t

0x9c9a,	// (0x000603e7) wait_bar_pane_cp1_ParamLimits

0x9c9a,	// (0x000603e7) wait_bar_pane_cp1

0xe1ed,	// (0x0006493a) wait_anim_pane_copy1

0xe1ed,	// (0x0006493a) wait_border_pane_copy1

0x96a3,	// (0x0005fdf0) wait_border_pane_g1_copy1

0x3afc,	// (0x0005a249) form_field_popup_pane_g1

0x6069,	// (0x0005c7b6) form_field_popup_pane_t1_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_cp7_ParamLimits

0xf1a4,	// (0x000658f1) list_form_pane_ParamLimits

0x3b04,	// (0x0005a251) form_field_popup_wide_pane_g1

0x3b0c,	// (0x0005a259) form_field_popup_wide_pane_t1_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_cp8_ParamLimits

0xf1b0,	// (0x000658fd) list_form_wide_pane_ParamLimits

0xa7d0,	// (0x00060f1d) aid_size_cell_graphic_pane

0x60e4,	// (0x0005c831) data_form_pane_t1_ParamLimits

0x79f3,	// (0x0005e140) data_form_wide_pane_t1_ParamLimits

0x73cd,	// (0x0005db1a) bg_status_flat_pane

0x55e2,	// (0x0005bd2f) title_pane_t1_ParamLimits

0xe203,	// (0x00064950) title_pane_t2_ParamLimits

0xe229,	// (0x00064976) title_pane_t3_ParamLimits

0xf530,	// (0x00065c7d) title_pane_t_ParamLimits

0x1206,	// (0x00057953) level_1_signal_ParamLimits

0x1213,	// (0x00057960) level_2_signal_ParamLimits

0x1220,	// (0x0005796d) level_3_signal_ParamLimits

0x122d,	// (0x0005797a) level_4_signal_ParamLimits

0x123a,	// (0x00057987) level_5_signal_ParamLimits

0x1247,	// (0x00057994) level_6_signal_ParamLimits

0x1254,	// (0x000579a1) level_7_signal_ParamLimits

0x1206,	// (0x00057953) level_1_battery_ParamLimits

0x1213,	// (0x00057960) level_2_battery_ParamLimits

0x1220,	// (0x0005796d) level_3_battery_ParamLimits

0x122d,	// (0x0005797a) level_4_battery_ParamLimits

0x123a,	// (0x00057987) level_5_battery_ParamLimits

0x1247,	// (0x00057994) level_6_battery_ParamLimits

0x1254,	// (0x000579a1) level_7_battery_ParamLimits

0x98b2,	// (0x0005ffff) bg_status_flat_pane_g1

0x98ba,	// (0x00060007) bg_status_flat_pane_g2

0x98c2,	// (0x0006000f) bg_status_flat_pane_g3

0x98ca,	// (0x00060017) bg_status_flat_pane_g4

0x98d2,	// (0x0006001f) bg_status_flat_pane_g5

0x98da,	// (0x00060027) bg_status_flat_pane_g6

0x98e2,	// (0x0006002f) bg_status_flat_pane_g7

0x5652,	// (0x0005bd9f) tabs_3_active_pane_t1_ParamLimits

0x5652,	// (0x0005bd9f) tabs_3_passive_pane_t1_ParamLimits

0x566c,	// (0x0005bdb9) tabs_4_active_pane_t1_ParamLimits

0x566c,	// (0x0005bdb9) tabs_4_1_passive_pane_t1_ParamLimits

0x61e9,	// (0x0005c936) tabs_2_active_pane_t1_ParamLimits

0x61e9,	// (0x0005c936) tabs_2_passive_pane_t1_ParamLimits

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp4_ParamLimits

0x6209,	// (0x0005c956) tabs_2_long_active_pane_t1_ParamLimits

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp4_ParamLimits

0x76ce,	// (0x0005de1b) list_single_midp_graphic_pane_t1_ParamLimits

0x61fb,	// (0x0005c948) bg_active_tab_pane_cp5_ParamLimits

0x6228,	// (0x0005c975) tabs_3_long_active_pane_t1_ParamLimits

0x621c,	// (0x0005c969) bg_passive_tab_pane_cp5_ParamLimits

0x76ce,	// (0x0005de1b) list_single_midp_graphic_pane_t1

0x73cd,	// (0x0005db1a) bg_status_flat_pane_ParamLimits

0x7496,	// (0x0005dbe3) indicator_pane_cp2_ParamLimits

0x7496,	// (0x0005dbe3) indicator_pane_cp2

0x75c1,	// (0x0005dd0e) navi_pane_srt_ParamLimits

0x75c1,	// (0x0005dd0e) navi_pane_srt

0x75e5,	// (0x0005dd32) popup_clock_digital_analogue_window_cp1

0xe27f,	// (0x000649cc) indicator_pane_t1

0x16d3,	// (0x00057e20) copy_highlight_pane

0x16d3,	// (0x00057e20) cursor_graphics_pane

0x16d3,	// (0x00057e20) graphic_within_text_pane

0x16d3,	// (0x00057e20) link_highlight_pane

0xa0b1,	// (0x000607fe) popup_preview_text_window_t5_ParamLimits

0xa0b1,	// (0x000607fe) popup_preview_text_window_t5

0x173b,	// (0x00057e88) cursor_digital_pane

0x173b,	// (0x00057e88) cursor_primary_pane

0x174c,	// (0x00057e99) cursor_primary_small_pane

0x1754,	// (0x00057ea1) cursor_secondary_pane

0x175c,	// (0x00057ea9) cursor_title_pane

0x173b,	// (0x00057e88) link_highlight_digital_pane

0x1743,	// (0x00057e90) link_highlight_primary_pane

0x174c,	// (0x00057e99) link_highlight_primary_small_pane

0x1754,	// (0x00057ea1) link_highlight_secondary_pane

0x175c,	// (0x00057ea9) link_highlight_title_pane

0x173b,	// (0x00057e88) copy_highlight_digital_pane

0x173b,	// (0x00057e88) copy_highlight_primary_pane

0x174c,	// (0x00057e99) copy_highlight_primary_small_pane

0x1754,	// (0x00057ea1) copy_highlight_secondary_pane

0x175c,	// (0x00057ea9) copy_highlight_title_pane

0x1754,	// (0x00057ea1) graphic_text_digital_pane

0x9950,	// (0x0006009d) graphic_text_primary_pane

0x9959,	// (0x000600a6) graphic_text_primary_small_pane

0x174c,	// (0x00057e99) graphic_text_secondary_pane

0x173b,	// (0x00057e88) graphic_text_title_pane

0x6a5e,	// (0x0005d1ab) cursor_primary_pane_g1

0x9942,	// (0x0006008f) cursor_text_primary_t1

0x992a,	// (0x00060077) cursor_primary_small_pane_g1

0x9934,	// (0x00060081) cursor_text_primary_small_t1

0x9912,	// (0x0006005f) cursor_primary_small_pane_g1_copy1

0x991c,	// (0x00060069) cursor_text_primary_small_t1_copy1

0x98fa,	// (0x00060047) cursor_text_title_t1

0x9908,	// (0x00060055) cursor_title_pane_g1

0x6a5e,	// (0x0005d1ab) cursor_digital_pane_g1

0x1764,	// (0x00057eb1) cursor_text_digital_t1

0x1772,	// (0x00057ebf) link_highlight_primary_pane_g1

0x98a3,	// (0x0005fff0) link_highlight_primary_pane_t1

0x1772,	// (0x00057ebf) link_highlight_primary_small_pane_g1

0x177a,	// (0x00057ec7) link_highlight_primary_small_pane_t1

0x1772,	// (0x00057ebf) link_highlight_secondary_pane_g1

0x1789,	// (0x00057ed6) link_highlight_secondary_pane_t1

0x9808,	// (0x0005ff55) link_highlight_title_pane_g1

0x981f,	// (0x0005ff6c) link_highlight_title_pane_t1

0x9808,	// (0x0005ff55) link_highlight_digital_pane_g1

0x9810,	// (0x0005ff5d) link_highlight_digital_pane_t1

0x96c2,	// (0x0005fe0f) copy_highlight_primary_pane_g1

0x96e8,	// (0x0005fe35) copy_highlight_primary_pane_t1

0x96c2,	// (0x0005fe0f) copy_highlight_primary_small_pane_g1

0x96d9,	// (0x0005fe26) copy_highlight_primary_small_pane_t1

0x1798,	// (0x00057ee5) copy_highlight_secondary_pane_g1

0x17a0,	// (0x00057eed) copy_highlight_secondary_pane_t1

0x96c2,	// (0x0005fe0f) copy_highlight_title_pane_g1

0x96ca,	// (0x0005fe17) copy_highlight_title_pane_t1

0x96c2,	// (0x0005fe0f) copy_highlight_digital_pane_g1

0xa99e,	// (0x000610eb) copy_highlight_digital_pane_t1

0xa8f2,	// (0x0006103f) graphic_text_primary_pane_g1

0xa982,	// (0x000610cf) graphic_text_primary_pane_t1

0xa990,	// (0x000610dd) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x000660ef) graphic_text_primary_pane_t

0xa95e,	// (0x000610ab) graphic_text_primary_small_pane_g1

0xa966,	// (0x000610b3) graphic_text_primary_small_pane_t1

0xa974,	// (0x000610c1) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x000660ea) graphic_text_primary_small_pane_t

0xa93a,	// (0x00061087) graphic_text_secondary_pane_g1

0xa942,	// (0x0006108f) graphic_text_secondary_pane_t1

0xa950,	// (0x0006109d) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x000660e5) graphic_text_secondary_pane_t

0xa916,	// (0x00061063) graphic_text_title_pane_g1

0xa91e,	// (0x0006106b) graphic_text_title_pane_t1

0xa92c,	// (0x00061079) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x000660e0) graphic_text_title_pane_t

0xa8f2,	// (0x0006103f) graphic_text_digital_pane_g1

0xa8fa,	// (0x00061047) graphic_text_digital_pane_t1

0xa908,	// (0x00061055) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x000660db) graphic_text_digital_pane_t

0xe23b,	// (0x00064988) navi_icon_pane_srt_ParamLimits

0xe23b,	// (0x00064988) navi_icon_pane_srt

0xe1ed,	// (0x0006493a) navi_midp_pane_srt

0xe1ed,	// (0x0006493a) navi_navi_pane_srt

0xe23b,	// (0x00064988) navi_text_pane_srt_ParamLimits

0xe23b,	// (0x00064988) navi_text_pane_srt

0xa8bd,	// (0x0006100a) navi_navi_icon_text_pane_srt

0xa8c5,	// (0x00061012) navi_navi_pane_srt_g1_ParamLimits

0xa8c5,	// (0x00061012) navi_navi_pane_srt_g1

0xa8d7,	// (0x00061024) navi_navi_pane_srt_g2_ParamLimits

0xa8d7,	// (0x00061024) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x000660d6) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x000660d6) navi_navi_pane_srt_g

0xa8e9,	// (0x00061036) navi_navi_tabs_pane_srt

0xa8bd,	// (0x0006100a) navi_navi_text_pane_srt

0xa8bd,	// (0x0006100a) navi_navi_volume_pane_srt

0xa8ae,	// (0x00060ffb) navi_navi_text_pane_srt_t1

0x7b34,	// (0x0005e281) navi_navi_volume_pane_srt_g1

0x7b3c,	// (0x0005e289) volume_small_pane_srt_ParamLimits

0x7b3c,	// (0x0005e289) volume_small_pane_srt

0x6a68,	// (0x0005d1b5) volume_small_pane_srt_g1_ParamLimits

0x6a68,	// (0x0005d1b5) volume_small_pane_srt_g1

0x6a78,	// (0x0005d1c5) volume_small_pane_srt_g2_ParamLimits

0x6a78,	// (0x0005d1c5) volume_small_pane_srt_g2

0x6a89,	// (0x0005d1d6) volume_small_pane_srt_g3_ParamLimits

0x6a89,	// (0x0005d1d6) volume_small_pane_srt_g3

0x6a9a,	// (0x0005d1e7) volume_small_pane_srt_g4_ParamLimits

0x6a9a,	// (0x0005d1e7) volume_small_pane_srt_g4

0x6aab,	// (0x0005d1f8) volume_small_pane_srt_g5_ParamLimits

0x6aab,	// (0x0005d1f8) volume_small_pane_srt_g5

0x6abc,	// (0x0005d209) volume_small_pane_srt_g6_ParamLimits

0x6abc,	// (0x0005d209) volume_small_pane_srt_g6

0x6acd,	// (0x0005d21a) volume_small_pane_srt_g7_ParamLimits

0x6acd,	// (0x0005d21a) volume_small_pane_srt_g7

0x6ade,	// (0x0005d22b) volume_small_pane_srt_g8_ParamLimits

0x6ade,	// (0x0005d22b) volume_small_pane_srt_g8

0x6aef,	// (0x0005d23c) volume_small_pane_srt_g9_ParamLimits

0x6aef,	// (0x0005d23c) volume_small_pane_srt_g9

0x6b00,	// (0x0005d24d) volume_small_pane_srt_g10_ParamLimits

0x6b00,	// (0x0005d24d) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x00065e7e) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x00065e7e) volume_small_pane_srt_g

0x58b9,	// (0x0005c006) query_popup_data_pane_cp2

0xa894,	// (0x00060fe1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa894,	// (0x00060fe1) navi_navi_icon_text_pane_srt_t1

0x9950,	// (0x0006009d) navi_tabs_2_long_pane_srt

0x9950,	// (0x0006009d) navi_tabs_2_pane_srt

0x9950,	// (0x0006009d) navi_tabs_3_long_pane_srt

0x9950,	// (0x0006009d) navi_tabs_3_pane_srt

0x9950,	// (0x0006009d) navi_tabs_4_pane_srt

0x7b14,	// (0x0005e261) tabs_2_active_pane_srt_ParamLimits

0x7b14,	// (0x0005e261) tabs_2_active_pane_srt

0x7b24,	// (0x0005e271) tabs_2_passive_pane_srt_ParamLimits

0x7b24,	// (0x0005e271) tabs_2_passive_pane_srt

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp1_srt_ParamLimits

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp1_srt

0xa860,	// (0x00060fad) bg_passive_tab_pane_g1_cp1_srt

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp1_srt

0xa869,	// (0x00060fb6) bg_passive_tab_pane_g3_cp1_srt

0xe23b,	// (0x00064988) bg_active_tab_pane_cp1_srt_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp1_srt

0xa872,	// (0x00060fbf) tabs_2_active_pane_srt_g1

0xa87a,	// (0x00060fc7) tabs_2_active_pane_srt_t1_ParamLimits

0xa87a,	// (0x00060fc7) tabs_2_active_pane_srt_t1

0xa860,	// (0x00060fad) bg_active_tab_pane_g1_cp1_srt

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp1_srt

0xa869,	// (0x00060fb6) bg_active_tab_pane_g3_cp1_srt

0x7ae1,	// (0x0005e22e) tabs_3_active_pane_srt_ParamLimits

0x7ae1,	// (0x0005e22e) tabs_3_active_pane_srt

0x7af2,	// (0x0005e23f) tabs_3_passive_pane_cp_srt_ParamLimits

0x7af2,	// (0x0005e23f) tabs_3_passive_pane_cp_srt

0x7b03,	// (0x0005e250) tabs_3_passive_pane_srt_ParamLimits

0x7b03,	// (0x0005e250) tabs_3_passive_pane_srt

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp2_srt_ParamLimits

0xf51b,	// (0x00065c68) bg_passive_tab_pane_cp2_srt

0x6b11,	// (0x0005d25e) bg_passive_tab_pane_g1_cp2_srt

0x6767,	// (0x0005ceb4) bg_passive_tab_pane_g2_cp2_srt

0x6b1a,	// (0x0005d267) bg_passive_tab_pane_g3_cp2_srt

0xe23b,	// (0x00064988) bg_active_tab_pane_cp2_srt_ParamLimits

0xe23b,	// (0x00064988) bg_active_tab_pane_cp2_srt

0xa846,	// (0x00060f93) tabs_3_active_pane_srt_g1

0xa84e,	// (0x00060f9b) tabs_3_active_pane_srt_t1_ParamLimits

0xa84e,	// (0x00060f9b) tabs_3_active_pane_srt_t1

0x6b11,	// (0x0005d25e) bg_active_tab_pane_g1_cp2_srt

0x6767,	// (0x0005ceb4) bg_active_tab_pane_g2_cp2_srt

0x6b1a,	// (0x0005d267) bg_active_tab_pane_g3_cp2_srt

0x7a99,	// (0x0005e1e6) tabs_4_active_pane_srt_ParamLimits

0x7a99,	// (0x0005e1e6) tabs_4_active_pane_srt

0x7aab,	// (0x0005e1f8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7aab,	// (0x0005e1f8) tabs_4_passive_pane_cp2_srt

0x6d33,	// (0x0005d480) aid_size_cell_toolbar

0x621c,	// (0x0005c969) main_idle_act_pane_ParamLimits

0x6ef8,	// (0x0005d645) popup_large_graphic_colour_window_ParamLimits

0x7263,	// (0x0005d9b0) popup_toolbar_window_ParamLimits

0x7263,	// (0x0005d9b0) popup_toolbar_window

0xa60e,	// (0x00060d5b) list_single_graphic_2heading_pane_ParamLimits

0xa60e,	// (0x00060d5b) list_single_graphic_2heading_pane

0xf439,	// (0x00065b86) aid_size_cell_apps_grid_lsc_pane

0xf44b,	// (0x00065b98) aid_size_cell_apps_grid_prt_pane

0xf51b,	// (0x00065c68) bg_wml_button_pane_cp1_ParamLimits

0xf51b,	// (0x00065c68) bg_wml_button_pane_cp1

0x9335,	// (0x0005fa82) form_midp_field_text_pane_t1_ParamLimits

0x90ff,	// (0x0005f84c) input_focus_pane_cp050_ParamLimits

0x936f,	// (0x0005fabc) list_midp_form_text_pane_ParamLimits

0x9312,	// (0x0005fa5f) input_focus_pane_cp051_ParamLimits

0x9326,	// (0x0005fa73) list_midp_choice_pane_ParamLimits

0x91b5,	// (0x0005f902) list_single_2graphic_pane_cp3_ParamLimits

0x91b5,	// (0x0005f902) list_single_2graphic_pane_cp3

0x91da,	// (0x0005f927) list_single_midp_graphic_pane_ParamLimits

0x91da,	// (0x0005f927) list_single_midp_graphic_pane

0x5141,	// (0x0005b88e) list_single_graphic_2heading_pane_g1_ParamLimits

0x5141,	// (0x0005b88e) list_single_graphic_2heading_pane_g1

0x514d,	// (0x0005b89a) list_single_graphic_2heading_pane_g4_ParamLimits

0x514d,	// (0x0005b89a) list_single_graphic_2heading_pane_g4

0x5159,	// (0x0005b8a6) list_single_graphic_2heading_pane_g5_ParamLimits

0x5159,	// (0x0005b8a6) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x00065ed1) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x00065ed1) list_single_graphic_2heading_pane_g

0x5165,	// (0x0005b8b2) list_single_graphic_2heading_pane_t1_ParamLimits

0x5165,	// (0x0005b8b2) list_single_graphic_2heading_pane_t1

0x5179,	// (0x0005b8c6) list_single_graphic_2heading_pane_t2_ParamLimits

0x5179,	// (0x0005b8c6) list_single_graphic_2heading_pane_t2

0x5193,	// (0x0005b8e0) list_single_graphic_2heading_pane_t3_ParamLimits

0x5193,	// (0x0005b8e0) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x00065ed8) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x00065ed8) list_single_graphic_2heading_pane_t

0x8fb1,	// (0x0005f6fe) bg_popup_sub_pane_cp2

0x8fdb,	// (0x0005f728) grid_toobar_pane

0x7631,	// (0x0005dd7e) cell_toolbar_pane_ParamLimits

0x7631,	// (0x0005dd7e) cell_toolbar_pane

0x9017,	// (0x0005f764) cell_toolbar_pane_g1_ParamLimits

0x9017,	// (0x0005f764) cell_toolbar_pane_g1

0x902b,	// (0x0005f778) cell_toolbar_pane_g2_ParamLimits

0x902b,	// (0x0005f778) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x00065ee6) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x00065ee6) cell_toolbar_pane_g

0x904d,	// (0x0005f79a) grid_highlight_pane_cp2_ParamLimits

0x904d,	// (0x0005f79a) grid_highlight_pane_cp2

0x9067,	// (0x0005f7b4) toolbar_button_pane

0x9073,	// (0x0005f7c0) toolbar_button_pane_g1

0x907b,	// (0x0005f7c8) toolbar_button_pane_g2

0x9083,	// (0x0005f7d0) toolbar_button_pane_g3

0x908b,	// (0x0005f7d8) toolbar_button_pane_g4

0x9093,	// (0x0005f7e0) toolbar_button_pane_g5

0x909b,	// (0x0005f7e8) toolbar_button_pane_g6

0x90a3,	// (0x0005f7f0) toolbar_button_pane_g7

0x90ab,	// (0x0005f7f8) toolbar_button_pane_g8

0x90b3,	// (0x0005f800) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00065eeb) toolbar_button_pane_g

0x7675,	// (0x0005ddc2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7675,	// (0x0005ddc2) list_single_2graphic_pane_g1_cp3

0x7681,	// (0x0005ddce) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7681,	// (0x0005ddce) list_single_2graphic_pane_g2_cp3

0x7692,	// (0x0005dddf) list_single_2graphic_pane_g3_cp3

0x769a,	// (0x0005dde7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x769a,	// (0x0005dde7) list_single_2graphic_pane_g4_cp3

0x76a6,	// (0x0005ddf3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x76a6,	// (0x0005ddf3) list_single_2graphic_pane_t1_cp3

0x76c2,	// (0x0005de0f) list_single_midp_graphic_pane_g2_ParamLimits

0x76c2,	// (0x0005de0f) list_single_midp_graphic_pane_g2

0x5139,	// (0x0005b886) aid_zoom_text_primary

0x6d3b,	// (0x0005d488) aid_zoom_text_secondary

0x1815,	// (0x00057f62) status_small_pane_g7_ParamLimits

0x1815,	// (0x00057f62) status_small_pane_g7

0x6b74,	// (0x0005d2c1) status_small_pane_t1_ParamLimits

0x55c5,	// (0x0005bd12) title_pane_g2

0x0003,

0xf527,	// (0x00065c74) title_pane_g

0x5913,	// (0x0005c060) aid_size_cell_colour_1_pane_ParamLimits

0x5913,	// (0x0005c060) aid_size_cell_colour_1_pane

0x5927,	// (0x0005c074) aid_size_cell_colour_2_pane_ParamLimits

0x5927,	// (0x0005c074) aid_size_cell_colour_2_pane

0x593b,	// (0x0005c088) aid_size_cell_colour_3_pane_ParamLimits

0x593b,	// (0x0005c088) aid_size_cell_colour_3_pane

0x594f,	// (0x0005c09c) aid_size_cell_colour_4_pane_ParamLimits

0x594f,	// (0x0005c09c) aid_size_cell_colour_4_pane

0x628f,	// (0x0005c9dc) title_pane_stacon_g1_ParamLimits

0x628f,	// (0x0005c9dc) title_pane_stacon_g1

0x973f,	// (0x0005fe8c) popup_note_wait_window_g3_ParamLimits

0x973f,	// (0x0005fe8c) popup_note_wait_window_g3

0x97b5,	// (0x0005ff02) popup_note_wait_window_t5_ParamLimits

0x97b5,	// (0x0005ff02) popup_note_wait_window_t5

0xe1ed,	// (0x0006493a) main_feb_china_hwr_fs_writing_pane

0x6ddf,	// (0x0005d52c) popup_feb_china_hwr_fs_window_ParamLimits

0x6ddf,	// (0x0005d52c) popup_feb_china_hwr_fs_window

0x76e4,	// (0x0005de31) aid_size_cell_hwr_fs_ParamLimits

0x76e4,	// (0x0005de31) aid_size_cell_hwr_fs

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp3_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp3

0x76f9,	// (0x0005de46) grid_hwr_fs_pane_ParamLimits

0x76f9,	// (0x0005de46) grid_hwr_fs_pane

0x7711,	// (0x0005de5e) linegrid_hwr_fs_pane_ParamLimits

0x7711,	// (0x0005de5e) linegrid_hwr_fs_pane

0x7721,	// (0x0005de6e) cell_hwr_fs_pane_ParamLimits

0x7721,	// (0x0005de6e) cell_hwr_fs_pane

0x910b,	// (0x0005f858) linegrid_hwr_fs_pane_g1_ParamLimits

0x910b,	// (0x0005f858) linegrid_hwr_fs_pane_g1

0x9117,	// (0x0005f864) linegrid_hwr_fs_pane_g2_ParamLimits

0x9117,	// (0x0005f864) linegrid_hwr_fs_pane_g2

0x9129,	// (0x0005f876) linegrid_hwr_fs_pane_g3_ParamLimits

0x9129,	// (0x0005f876) linegrid_hwr_fs_pane_g3

0x7743,	// (0x0005de90) linegrid_hwr_fs_pane_g4_ParamLimits

0x7743,	// (0x0005de90) linegrid_hwr_fs_pane_g4

0x775d,	// (0x0005deaa) linegrid_hwr_fs_pane_g5_ParamLimits

0x775d,	// (0x0005deaa) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x00065f16) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x00065f16) linegrid_hwr_fs_pane_g

0x9135,	// (0x0005f882) cell_hwr_fs_pane_g1_ParamLimits

0x9135,	// (0x0005f882) cell_hwr_fs_pane_g1

0x8eeb,	// (0x0005f638) cell_hwr_fs_pane_g2_ParamLimits

0x8eeb,	// (0x0005f638) cell_hwr_fs_pane_g2

0x914b,	// (0x0005f898) cell_hwr_fs_pane_g3_ParamLimits

0x914b,	// (0x0005f898) cell_hwr_fs_pane_g3

0x9158,	// (0x0005f8a5) cell_hwr_fs_pane_g4_ParamLimits

0x9158,	// (0x0005f8a5) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x00065f21) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x00065f21) cell_hwr_fs_pane_g

0x7773,	// (0x0005dec0) cell_hwr_fs_pane_t1

0xe1ed,	// (0x0006493a) grid_highlight_pane_cp6

0xe1ed,	// (0x0006493a) main_idle_act2_pane

0xf28f,	// (0x000659dc) aid_inside_area_popup_secondary

0x9dd4,	// (0x00060521) aid_inside_area_window_primary_ParamLimits

0x9dd4,	// (0x00060521) aid_inside_area_window_primary

0xa9ad,	// (0x000610fa) ai2_news_ticker_pane

0xa9b5,	// (0x00061102) aid_size_cell_ai1_link_ParamLimits

0xa9b5,	// (0x00061102) aid_size_cell_ai1_link

0xa9cf,	// (0x0006111c) popup_ai2_data_window_ParamLimits

0xa9cf,	// (0x0006111c) popup_ai2_data_window

0xa9e5,	// (0x00061132) popup_ai2_link_window_ParamLimits

0xa9e5,	// (0x00061132) popup_ai2_link_window

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp4_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp4

0xa9f9,	// (0x00061146) grid_ai2_link_pane_ParamLimits

0xa9f9,	// (0x00061146) grid_ai2_link_pane

0xaa10,	// (0x0006115d) popup_ai2_link_window_g1_ParamLimits

0xaa10,	// (0x0006115d) popup_ai2_link_window_g1

0xaa1c,	// (0x00061169) popup_ai2_link_window_g2_ParamLimits

0xaa1c,	// (0x00061169) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x000660f4) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x000660f4) popup_ai2_link_window_g

0xaa2b,	// (0x00061178) ai2_mp_button_pane

0xaa33,	// (0x00061180) ai2_mp_volume_pane

0x9312,	// (0x0005fa5f) bg_popup_sub_pane_cp5_ParamLimits

0x9312,	// (0x0005fa5f) bg_popup_sub_pane_cp5

0xaa3b,	// (0x00061188) heading_ai2_gene_pane_ParamLimits

0xaa3b,	// (0x00061188) heading_ai2_gene_pane

0xaa47,	// (0x00061194) list_ai2_gene_pane_ParamLimits

0xaa47,	// (0x00061194) list_ai2_gene_pane

0xaa8f,	// (0x000611dc) cell_ai2_link_pane_ParamLimits

0xaa8f,	// (0x000611dc) cell_ai2_link_pane

0xaaa5,	// (0x000611f2) cell_ai2_link_pane_g1

0xe1ed,	// (0x0006493a) grid_highlight_pane_cp7

0x7b51,	// (0x0005e29e) ai2_mp_volume_pane_g1

0xab75,	// (0x000612c2) ai2_mp_volume_pane_g2

0xaaea,	// (0x00061237) list_ai2_gene_pane_t1

0xab7d,	// (0x000612ca) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0006610d) ai2_mp_volume_pane_g

0x7b59,	// (0x0005e2a6) volume_small_pane_cp3

0xab85,	// (0x000612d2) aid_size_cell_ai2_button

0xab8d,	// (0x000612da) grid_ai2_button_pane

0xab96,	// (0x000612e3) cell_ai2_button_pane_ParamLimits

0xab96,	// (0x000612e3) cell_ai2_button_pane

0xe1e3,	// (0x00064930) cell_ai2_button_pane_g1

0xe1ed,	// (0x0006493a) grid_highlight_pane_cp8

0xab35,	// (0x00061282) ai2_gene_pane_t1_ParamLimits

0xab35,	// (0x00061282) ai2_gene_pane_t1

0x6d29,	// (0x0005d476) aid_height_parent_landscape

0xa42d,	// (0x00060b7a) aid_height_set_list

0xa43e,	// (0x00060b8b) aid_size_parent

0xa7d0,	// (0x00060f1d) aid_size_cell_graphic_pane_ParamLimits

0xaa57,	// (0x000611a4) popup_ai2_data_window_g1_ParamLimits

0xaa57,	// (0x000611a4) popup_ai2_data_window_g1

0xaa63,	// (0x000611b0) ai2_news_ticker_pane_g1

0xaa6b,	// (0x000611b8) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x000660f9) ai2_news_ticker_pane_g

0xaa73,	// (0x000611c0) ai2_news_ticker_pane_t1

0xaa81,	// (0x000611ce) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x000660fe) ai2_news_ticker_pane_t

0xaaae,	// (0x000611fb) heading_ai2_gene_pane_g1

0xaab6,	// (0x00061203) heading_ai2_gene_pane_t1_ParamLimits

0xaab6,	// (0x00061203) heading_ai2_gene_pane_t1

0xaacb,	// (0x00061218) list_highlight_pane_cp6

0xaad3,	// (0x00061220) ai2_gene_pane_ParamLimits

0xaad3,	// (0x00061220) ai2_gene_pane

0xaaf8,	// (0x00061245) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00066103) list_ai2_gene_pane_t

0xab06,	// (0x00061253) list_highlight_pane_cp8_ParamLimits

0xab06,	// (0x00061253) list_highlight_pane_cp8

0xab17,	// (0x00061264) ai2_gene_pane_g1_ParamLimits

0xab17,	// (0x00061264) ai2_gene_pane_g1

0xab29,	// (0x00061276) ai2_gene_pane_g2_ParamLimits

0xab29,	// (0x00061276) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x00066108) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x00066108) ai2_gene_pane_g

0xf115,	// (0x00065862) scroll_pane_cp12

0x6ce6,	// (0x0005d433) control_pane_t3_ParamLimits

0x6ce6,	// (0x0005d433) control_pane_t3

0x6b65,	// (0x0005d2b2) status_small_pane_g8_ParamLimits

0x6b65,	// (0x0005d2b2) status_small_pane_g8

0x6ec1,	// (0x0005d60e) popup_find_window_ParamLimits

0x70da,	// (0x0005d827) popup_note_image_window_ParamLimits

0x3bad,	// (0x0005a2fa) list_double2_graphic_pane_vc_g1_ParamLimits

0x3bad,	// (0x0005a2fa) list_double2_graphic_pane_vc_g1

0x11c4,	// (0x00057911) list_double2_graphic_pane_vc_g2_ParamLimits

0x11c4,	// (0x00057911) list_double2_graphic_pane_vc_g2

0x7661,	// (0x0005ddae) list_double2_graphic_pane_vc_g3_ParamLimits

0x7661,	// (0x0005ddae) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00065edf) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00065edf) list_double2_graphic_pane_vc_g

0x3bb9,	// (0x0005a306) list_double2_graphic_pane_vc_t1_ParamLimits

0x3bb9,	// (0x0005a306) list_double2_graphic_pane_vc_t1

0x11c4,	// (0x00057911) list_single_heading_pane_vc_g1_ParamLimits

0x11c4,	// (0x00057911) list_single_heading_pane_vc_g1

0x7661,	// (0x0005ddae) list_single_heading_pane_vc_g2_ParamLimits

0x7661,	// (0x0005ddae) list_single_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x00065f00) list_single_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x00065f00) list_single_heading_pane_vc_g

0x3bcf,	// (0x0005a31c) list_single_heading_pane_vc_t1_ParamLimits

0x3bcf,	// (0x0005a31c) list_single_heading_pane_vc_t1

0x3be5,	// (0x0005a332) list_single_heading_pane_vc_t2_ParamLimits

0x3be5,	// (0x0005a332) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x00065f05) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x00065f05) list_single_heading_pane_vc_t

0x90bb,	// (0x0005f808) list_setting_number_pane_vc_g1_ParamLimits

0x90bb,	// (0x0005f808) list_setting_number_pane_vc_g1

0x90c7,	// (0x0005f814) list_setting_number_pane_vc_g2_ParamLimits

0x90c7,	// (0x0005f814) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x00065f0a) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x00065f0a) list_setting_number_pane_vc_g

0x3bfb,	// (0x0005a348) list_setting_number_pane_vc_t1_ParamLimits

0x3bfb,	// (0x0005a348) list_setting_number_pane_vc_t1

0x3c0f,	// (0x0005a35c) list_setting_number_pane_vc_t2_ParamLimits

0x3c0f,	// (0x0005a35c) list_setting_number_pane_vc_t2

0x3c2b,	// (0x0005a378) list_setting_number_pane_vc_t3_ParamLimits

0x3c2b,	// (0x0005a378) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x00065f0f) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x00065f0f) list_setting_number_pane_vc_t

0x3c55,	// (0x0005a3a2) set_value_pane_vc_ParamLimits

0x3c55,	// (0x0005a3a2) set_value_pane_vc

0xa60e,	// (0x00060d5b) list_double2_graphic_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double2_graphic_pane_vc

0xa621,	// (0x00060d6e) list_double2_large_graphic_pane_vc_ParamLimits

0xa621,	// (0x00060d6e) list_double2_large_graphic_pane_vc

0xa60e,	// (0x00060d5b) list_double2_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double2_pane_vc

0xa60e,	// (0x00060d5b) list_double_graphic_heading_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_graphic_heading_pane_vc

0xa60e,	// (0x00060d5b) list_double_graphic_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_graphic_pane_vc

0xa60e,	// (0x00060d5b) list_double_heading_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_heading_pane_vc

0xa633,	// (0x00060d80) list_double_large_graphic_pane_vc_ParamLimits

0xa633,	// (0x00060d80) list_double_large_graphic_pane_vc

0xa60e,	// (0x00060d5b) list_double_number_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_number_pane_vc

0xa60e,	// (0x00060d5b) list_double_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_pane_vc

0xa60e,	// (0x00060d5b) list_double_time_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_double_time_pane_vc

0xa60e,	// (0x00060d5b) list_setting_number_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_setting_number_pane_vc

0xa60e,	// (0x00060d5b) list_setting_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_setting_pane_vc

0xa60e,	// (0x00060d5b) list_single_graphic_heading_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_single_graphic_heading_pane_vc

0xa60e,	// (0x00060d5b) list_single_heading_pane_vc_ParamLimits

0xa60e,	// (0x00060d5b) list_single_heading_pane_vc

0xa651,	// (0x00060d9e) list_single_number_heading_pane_vc_ParamLimits

0xa651,	// (0x00060d9e) list_single_number_heading_pane_vc

0x3c74,	// (0x0005a3c1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c74,	// (0x0005a3c1) list_double_graphic_heading_pane_vc_g1

0x4666,	// (0x0005adb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4666,	// (0x0005adb3) list_double_graphic_heading_pane_vc_g2

0x4672,	// (0x0005adbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4672,	// (0x0005adbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x00066114) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x00066114) list_double_graphic_heading_pane_vc_g

0x3c80,	// (0x0005a3cd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c80,	// (0x0005a3cd) list_double_graphic_heading_pane_vc_t1

0x3c94,	// (0x0005a3e1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c94,	// (0x0005a3e1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0006611b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0006611b) list_double_graphic_heading_pane_vc_t

0x90bb,	// (0x0005f808) list_setting_pane_vc_g1_ParamLimits

0x90bb,	// (0x0005f808) list_setting_pane_vc_g1

0x90c7,	// (0x0005f814) list_setting_pane_vc_g2_ParamLimits

0x90c7,	// (0x0005f814) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x00065f0a) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x00065f0a) list_setting_pane_vc_g

0x3cac,	// (0x0005a3f9) list_setting_pane_vc_t1_ParamLimits

0x3cac,	// (0x0005a3f9) list_setting_pane_vc_t1

0x3cc8,	// (0x0005a415) list_setting_pane_vc_t2_ParamLimits

0x3cc8,	// (0x0005a415) list_setting_pane_vc_t2

0x0001,

0xfa11,	// (0x0006615e) list_setting_pane_vc_t_ParamLimits

0xfa11,	// (0x0006615e) list_setting_pane_vc_t

0x3c55,	// (0x0005a3a2) set_value_pane_cp_vc_ParamLimits

0x3c55,	// (0x0005a3a2) set_value_pane_cp_vc

0x11c4,	// (0x00057911) list_single_number_heading_pane_vc_g1_ParamLimits

0x11c4,	// (0x00057911) list_single_number_heading_pane_vc_g1

0x7661,	// (0x0005ddae) list_single_number_heading_pane_vc_g2_ParamLimits

0x7661,	// (0x0005ddae) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x00065f00) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x00065f00) list_single_number_heading_pane_vc_g

0x3a5c,	// (0x0005a1a9) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a5c,	// (0x0005a1a9) list_single_number_heading_pane_vc_t1

0x3ce2,	// (0x0005a42f) list_single_number_heading_pane_vc_t2_ParamLimits

0x3ce2,	// (0x0005a42f) list_single_number_heading_pane_vc_t2

0x3cf8,	// (0x0005a445) list_single_number_heading_pane_vc_t3_ParamLimits

0x3cf8,	// (0x0005a445) list_single_number_heading_pane_vc_t3

0x0002,

0xfa16,	// (0x00066163) list_single_number_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00066163) list_single_number_heading_pane_vc_t

0x3d0a,	// (0x0005a457) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3d0a,	// (0x0005a457) list_single_graphic_heading_pane_vc_g1

0x11c4,	// (0x00057911) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x11c4,	// (0x00057911) list_single_graphic_heading_pane_vc_g4

0x7661,	// (0x0005ddae) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7661,	// (0x0005ddae) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1d,	// (0x0006616a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1d,	// (0x0006616a) list_single_graphic_heading_pane_vc_g

0x3a5c,	// (0x0005a1a9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a5c,	// (0x0005a1a9) list_single_graphic_heading_pane_vc_t1

0x3d16,	// (0x0005a463) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3d16,	// (0x0005a463) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00066171) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00066171) list_single_graphic_heading_pane_vc_t

0x11c4,	// (0x00057911) list_double2_pane_vc_g1_ParamLimits

0x11c4,	// (0x00057911) list_double2_pane_vc_g1

0x7661,	// (0x0005ddae) list_double2_pane_vc_g2_ParamLimits

0x7661,	// (0x0005ddae) list_double2_pane_vc_g2

0x0001,

0xf7b3,	// (0x00065f00) list_double2_pane_vc_g_ParamLimits

0xf7b3,	// (0x00065f00) list_double2_pane_vc_g

0x3d28,	// (0x0005a475) list_double2_pane_vc_t1_ParamLimits

0x3d28,	// (0x0005a475) list_double2_pane_vc_t1

0xadcf,	// (0x0006151c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xadcf,	// (0x0006151c) list_double2_large_graphic_pane_vc_g1

0x42af,	// (0x0005a9fc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x42af,	// (0x0005a9fc) list_double2_large_graphic_pane_vc_g2

0x42bb,	// (0x0005aa08) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x42bb,	// (0x0005aa08) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa29,	// (0x00066176) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x00066176) list_double2_large_graphic_pane_vc_g

0x3a72,	// (0x0005a1bf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a72,	// (0x0005a1bf) list_double2_large_graphic_pane_vc_t1

0xaddb,	// (0x00061528) list_double_time_pane_vc_g1_ParamLimits

0xaddb,	// (0x00061528) list_double_time_pane_vc_g1

0xade7,	// (0x00061534) list_double_time_pane_vc_g2_ParamLimits

0xade7,	// (0x00061534) list_double_time_pane_vc_g2

0x0001,

0xfa30,	// (0x0006617d) list_double_time_pane_vc_g_ParamLimits

0xfa30,	// (0x0006617d) list_double_time_pane_vc_g

0x3d40,	// (0x0005a48d) list_double_time_pane_vc_t1_ParamLimits

0x3d40,	// (0x0005a48d) list_double_time_pane_vc_t1

0x3d64,	// (0x0005a4b1) list_double_time_pane_vc_t2_ParamLimits

0x3d64,	// (0x0005a4b1) list_double_time_pane_vc_t2

0x3db3,	// (0x0005a500) list_double_time_pane_vc_t3_ParamLimits

0x3db3,	// (0x0005a500) list_double_time_pane_vc_t3

0x3dc5,	// (0x0005a512) list_double_time_pane_vc_t4_ParamLimits

0x3dc5,	// (0x0005a512) list_double_time_pane_vc_t4

0x0003,

0xfa35,	// (0x00066182) list_double_time_pane_vc_t_ParamLimits

0xfa35,	// (0x00066182) list_double_time_pane_vc_t

0x11c4,	// (0x00057911) list_double_pane_vc_g1_ParamLimits

0x11c4,	// (0x00057911) list_double_pane_vc_g1

0x7661,	// (0x0005ddae) list_double_pane_vc_g2_ParamLimits

0x7661,	// (0x0005ddae) list_double_pane_vc_g2

0x0001,

0xf7b3,	// (0x00065f00) list_double_pane_vc_g_ParamLimits

0xf7b3,	// (0x00065f00) list_double_pane_vc_g

0x3dd9,	// (0x0005a526) list_double_pane_vc_t1_ParamLimits

0x3dd9,	// (0x0005a526) list_double_pane_vc_t1

0x3ded,	// (0x0005a53a) list_double_pane_vc_t2_ParamLimits

0x3ded,	// (0x0005a53a) list_double_pane_vc_t2

0x0001,

0xfa3e,	// (0x0006618b) list_double_pane_vc_t_ParamLimits

0xfa3e,	// (0x0006618b) list_double_pane_vc_t

0x11c4,	// (0x00057911) list_double_number_pane_vc_g1_ParamLimits

0x11c4,	// (0x00057911) list_double_number_pane_vc_g1

0x7661,	// (0x0005ddae) list_double_number_pane_vc_g2_ParamLimits

0x7661,	// (0x0005ddae) list_double_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00065f00) list_double_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00065f00) list_double_number_pane_vc_g

0x3e05,	// (0x0005a552) list_double_number_pane_vc_t1_ParamLimits

0x3e05,	// (0x0005a552) list_double_number_pane_vc_t1

0x3dd9,	// (0x0005a526) list_double_number_pane_vc_t2_ParamLimits

0x3dd9,	// (0x0005a526) list_double_number_pane_vc_t2

0x3e17,	// (0x0005a564) list_double_number_pane_vc_t3_ParamLimits

0x3e17,	// (0x0005a564) list_double_number_pane_vc_t3

0x0002,

0xfa43,	// (0x00066190) list_double_number_pane_vc_t_ParamLimits

0xfa43,	// (0x00066190) list_double_number_pane_vc_t

0xadf3,	// (0x00061540) list_double_large_graphic_pane_vc_g1_ParamLimits

0xadf3,	// (0x00061540) list_double_large_graphic_pane_vc_g1

0xae0f,	// (0x0006155c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xae0f,	// (0x0006155c) list_double_large_graphic_pane_vc_g2

0xae23,	// (0x00061570) list_double_large_graphic_pane_vc_g3_ParamLimits

0xae23,	// (0x00061570) list_double_large_graphic_pane_vc_g3

0x3e31,	// (0x0005a57e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e31,	// (0x0005a57e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4a,	// (0x00066197) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00066197) list_double_large_graphic_pane_vc_g

0x3e40,	// (0x0005a58d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e40,	// (0x0005a58d) list_double_large_graphic_pane_vc_t1

0x3e5c,	// (0x0005a5a9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e5c,	// (0x0005a5a9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x000661a0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x000661a0) list_double_large_graphic_pane_vc_t

0x4666,	// (0x0005adb3) list_double_heading_pane_vc_g1_ParamLimits

0x4666,	// (0x0005adb3) list_double_heading_pane_vc_g1

0x4672,	// (0x0005adbf) list_double_heading_pane_vc_g2_ParamLimits

0x4672,	// (0x0005adbf) list_double_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00065cf8) list_double_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00065cf8) list_double_heading_pane_vc_g

0x3e7e,	// (0x0005a5cb) list_double_heading_pane_vc_t1_ParamLimits

0x3e7e,	// (0x0005a5cb) list_double_heading_pane_vc_t1

0x3e92,	// (0x0005a5df) list_double_heading_pane_vc_t2_ParamLimits

0x3e92,	// (0x0005a5df) list_double_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x000661a5) list_double_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x000661a5) list_double_heading_pane_vc_t

0x3eaa,	// (0x0005a5f7) list_double_graphic_pane_vc_g1_ParamLimits

0x3eaa,	// (0x0005a5f7) list_double_graphic_pane_vc_g1

0xae32,	// (0x0006157f) list_double_graphic_pane_vc_g2_ParamLimits

0xae32,	// (0x0006157f) list_double_graphic_pane_vc_g2

0x11c4,	// (0x00057911) list_double_graphic_pane_vc_g3_ParamLimits

0x11c4,	// (0x00057911) list_double_graphic_pane_vc_g3

0x0003,

0xfa5d,	// (0x000661aa) list_double_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x000661aa) list_double_graphic_pane_vc_g

0x3ebd,	// (0x0005a60a) list_double_graphic_pane_vc_t1_ParamLimits

0x3ebd,	// (0x0005a60a) list_double_graphic_pane_vc_t1

0x3edc,	// (0x0005a629) list_double_graphic_pane_vc_t2_ParamLimits

0x3edc,	// (0x0005a629) list_double_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x000661b3) list_double_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x000661b3) list_double_graphic_pane_vc_t

0x51df,	// (0x0005b92c) aid_size_cell_fastswap

0x51e7,	// (0x0005b934) aid_size_cell_touch_ParamLimits

0x51e7,	// (0x0005b934) aid_size_cell_touch

0x5452,	// (0x0005bb9f) popup_fast_swap_wide_window_ParamLimits

0x5452,	// (0x0005bb9f) popup_fast_swap_wide_window

0x5558,	// (0x0005bca5) touch_pane_ParamLimits

0x5558,	// (0x0005bca5) touch_pane

0xf162,	// (0x000658af) button_value_adjust_pane_cp2

0x3aa2,	// (0x0005a1ef) button_value_adjust_pane_cp4

0x3aaa,	// (0x0005a1f7) form_field_data_pane_cp2

0x5fed,	// (0x0005c73a) form_field_data_wide_pane_cp2

0xf470,	// (0x00065bbd) bg_scroll_pane_ParamLimits

0x6489,	// (0x0005cbd6) scroll_handle_pane_ParamLimits

0x649d,	// (0x0005cbea) scroll_sc2_down_pane_ParamLimits

0x649d,	// (0x0005cbea) scroll_sc2_down_pane

0xf4a1,	// (0x00065bee) scroll_sc2_up_pane_ParamLimits

0xf4a1,	// (0x00065bee) scroll_sc2_up_pane

0xb2f7,	// (0x00061a44) grid_wheel_folder_pane_g1_ParamLimits

0xb2f7,	// (0x00061a44) grid_wheel_folder_pane_g1

0x688c,	// (0x0005cfd9) clock_nsta_pane_cp2_ParamLimits

0x688c,	// (0x0005cfd9) clock_nsta_pane_cp2

0x6994,	// (0x0005d0e1) listscroll_midp_pane_ParamLimits

0x69a0,	// (0x0005d0ed) midp_canvas_pane

0x1837,	// (0x00057f84) nsta_clock_indic_pane

0x185f,	// (0x00057fac) listscroll_form_pane_vc

0x1867,	// (0x00057fb4) listscroll_set_pane_vc_ParamLimits

0x1867,	// (0x00057fb4) listscroll_set_pane_vc

0x73e9,	// (0x0005db36) clock_nsta_pane

0x7464,	// (0x0005dbb1) indicator_nsta_pane

0x8fb1,	// (0x0005f6fe) bg_popup_sub_pane_cp2_ParamLimits

0x8fc5,	// (0x0005f712) find_pane_cp2_ParamLimits

0x8fc5,	// (0x0005f712) find_pane_cp2

0x8fdb,	// (0x0005f728) grid_toobar_pane_ParamLimits

0x90d3,	// (0x0005f820) list_form_gen_pane_vc_ParamLimits

0x90d3,	// (0x0005f820) list_form_gen_pane_vc

0x90e9,	// (0x0005f836) scroll_pane_cp8_vc_ParamLimits

0x90e9,	// (0x0005f836) scroll_pane_cp8_vc

0x9165,	// (0x0005f8b2) data_form_wide_pane_vc_ParamLimits

0x9165,	// (0x0005f8b2) data_form_wide_pane_vc

0x9171,	// (0x0005f8be) form_field_data_wide_pane_vc_g1

0x9179,	// (0x0005f8c6) form_field_data_wide_pane_vc_t1_ParamLimits

0x9179,	// (0x0005f8c6) form_field_data_wide_pane_vc_t1

0xf176,	// (0x000658c3) input_focus_pane_cp6_vc_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_cp6_vc

0x94a6,	// (0x0005fbf3) list_midp_pane_ParamLimits

0x94b2,	// (0x0005fbff) scroll_pane_cp16_ParamLimits

0x94b2,	// (0x0005fbff) scroll_pane_cp16

0x951c,	// (0x0005fc69) button_value_adjust_pane_ParamLimits

0x951c,	// (0x0005fc69) button_value_adjust_pane

0xa450,	// (0x00060b9d) button_value_adjust_pane_cp6_ParamLimits

0xa450,	// (0x00060b9d) button_value_adjust_pane_cp6

0xa576,	// (0x00060cc3) settings_code_pane_cp_ParamLimits

0xa576,	// (0x00060cc3) settings_code_pane_cp

0xe1e3,	// (0x00064930) cell_touch_pane_g1

0xe1e3,	// (0x00064930) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x00065e24) cell_touch_pane_g

0xaba8,	// (0x000612f5) cell_touch_pane_cp_ParamLimits

0xaba8,	// (0x000612f5) cell_touch_pane_cp

0xabb8,	// (0x00061305) cell_touch_pane_ParamLimits

0xabb8,	// (0x00061305) cell_touch_pane

0xe1e3,	// (0x00064930) scroll_sc2_down_pane_g1

0xe1e3,	// (0x00064930) scroll_sc2_up_pane_g1

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp4_vc

0xabca,	// (0x00061317) list_set_graphic_pane_vc_g1_ParamLimits

0xabca,	// (0x00061317) list_set_graphic_pane_vc_g1

0xabd6,	// (0x00061323) list_set_graphic_pane_vc_g2_ParamLimits

0xabd6,	// (0x00061323) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x00066120) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x00066120) list_set_graphic_pane_vc_g

0xabe2,	// (0x0006132f) text_primary_small_cp13_vc_ParamLimits

0xabe2,	// (0x0006132f) text_primary_small_cp13_vc

0xabfa,	// (0x00061347) list_set_graphic_pane_vc_ParamLimits

0xabfa,	// (0x00061347) list_set_graphic_pane_vc

0xe1ed,	// (0x0006493a) input_focus_pane_cp2_vc

0xe1e3,	// (0x00064930) setting_code_pane_vc_g1

0xe252,	// (0x0006499f) setting_code_pane_vc_t1

0xac0d,	// (0x0006135a) set_text_pane_vc_t1_ParamLimits

0xac0d,	// (0x0006135a) set_text_pane_vc_t1

0xe1ed,	// (0x0006493a) input_focus_pane_cp1_vc

0xac2a,	// (0x00061377) list_set_text_pane_vc

0xe1e3,	// (0x00064930) setting_text_pane_vc_g1

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp2_vc

0xe249,	// (0x00064996) setting_slider_graphic_pane_vc_g1

0xac34,	// (0x00061381) setting_slider_graphic_pane_vc_t1

0xac44,	// (0x00061391) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x00066125) setting_slider_graphic_pane_vc_t

0xac54,	// (0x000613a1) slider_set_pane_cp_vc

0xac5c,	// (0x000613a9) slider_set_pane_vc_g1

0xac65,	// (0x000613b2) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0006612a) slider_set_pane_vc_g

0xf1ce,	// (0x0006591b) set_opt_bg_pane_g1_copy1

0xf1d6,	// (0x00065923) set_opt_bg_pane_g2_copy1

0xac91,	// (0x000613de) set_opt_bg_pane_g3_copy1

0xf1e6,	// (0x00065933) set_opt_bg_pane_g4_copy1

0xf1ee,	// (0x0006593b) set_opt_bg_pane_g5_copy1

0xf1f6,	// (0x00065943) set_opt_bg_pane_g6_copy1

0xac99,	// (0x000613e6) set_opt_bg_pane_g7_copy1

0xaca3,	// (0x000613f0) set_opt_bg_pane_g8_copy1

0xacab,	// (0x000613f8) set_opt_bg_pane_g9_copy1

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp_vc

0xacb3,	// (0x00061400) setting_slider_pane_vc_t1

0xacc2,	// (0x0006140f) setting_slider_pane_vc_t2

0xacd2,	// (0x0006141f) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00066139) setting_slider_pane_vc_t

0xace2,	// (0x0006142f) slider_set_pane_vc

0x77af,	// (0x0005defc) volume_set_pane_vc_g1

0x7b62,	// (0x0005e2af) volume_set_pane_vc_g2

0x7b6b,	// (0x0005e2b8) volume_set_pane_vc_g3

0x7b74,	// (0x0005e2c1) volume_set_pane_vc_g4

0x7b7d,	// (0x0005e2ca) volume_set_pane_vc_g5

0x7b86,	// (0x0005e2d3) volume_set_pane_vc_g6

0x7b8f,	// (0x0005e2dc) volume_set_pane_vc_g7

0x7b98,	// (0x0005e2e5) volume_set_pane_vc_g8

0x7ba1,	// (0x0005e2ee) volume_set_pane_vc_g9

0x7baa,	// (0x0005e2f7) volume_set_pane_vc_g10

0x0009,

0xf9f3,	// (0x00066140) volume_set_pane_vc_g

0xacea,	// (0x00061437) volume_set_pane_vc

0xacf4,	// (0x00061441) button_value_adjust_pane_cp1_vc

0xacfe,	// (0x0006144b) list_highlight_pane_cp2_vc

0xad07,	// (0x00061454) list_set_pane_vc_ParamLimits

0xad07,	// (0x00061454) list_set_pane_vc

0xad65,	// (0x000614b2) main_pane_set_vc_t1_ParamLimits

0xad65,	// (0x000614b2) main_pane_set_vc_t1

0xad7a,	// (0x000614c7) main_pane_set_vc_t2_ParamLimits

0xad7a,	// (0x000614c7) main_pane_set_vc_t2

0xad8c,	// (0x000614d9) main_pane_set_vc_t3_ParamLimits

0xad8c,	// (0x000614d9) main_pane_set_vc_t3

0xad9e,	// (0x000614eb) main_pane_set_vc_t4_ParamLimits

0xad9e,	// (0x000614eb) main_pane_set_vc_t4

0x0003,

0xfa08,	// (0x00066155) main_pane_set_vc_t_ParamLimits

0xfa08,	// (0x00066155) main_pane_set_vc_t

0xadb0,	// (0x000614fd) setting_code_pane_vc_ParamLimits

0xadb0,	// (0x000614fd) setting_code_pane_vc

0xadbf,	// (0x0006150c) setting_slider_graphic_pane_vc

0xadbf,	// (0x0006150c) setting_slider_pane_vc

0xadbf,	// (0x0006150c) setting_text_pane_vc

0xadbf,	// (0x0006150c) setting_volume_pane_vc

0xadc7,	// (0x00061514) scroll_pane_cp121_vc

0xf150,	// (0x0006589d) set_content_pane_vc

0xae4f,	// (0x0006159c) button_value_adjust_pane_g1

0xae58,	// (0x000615a5) button_value_adjust_pane_g2

0x0001,

0xfa6b,	// (0x000661b8) button_value_adjust_pane_g

0xae61,	// (0x000615ae) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae61,	// (0x000615ae) form_field_slider_wide_pane_vc_t1

0xae75,	// (0x000615c2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae75,	// (0x000615c2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa70,	// (0x000661bd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa70,	// (0x000661bd) form_field_slider_wide_pane_vc_t

0xe365,	// (0x00064ab2) input_focus_pane_cp10_vc_ParamLimits

0xe365,	// (0x00064ab2) input_focus_pane_cp10_vc

0xaea3,	// (0x000615f0) slider_cont_pane_cp1_vc_ParamLimits

0xaea3,	// (0x000615f0) slider_cont_pane_cp1_vc

0xaeb5,	// (0x00061602) slider_form_pane_g1_cp2

0xac65,	// (0x000613b2) slider_form_pane_g2_cp2

0xaee2,	// (0x0006162f) form_field_slider_pane_vc_t3

0xaef0,	// (0x0006163d) form_field_slider_pane_vc_t4

0xaefe,	// (0x0006164b) slider_form_pane_vc_ParamLimits

0xaefe,	// (0x0006164b) slider_form_pane_vc

0xaf0b,	// (0x00061658) form_field_slider_pane_vc_t1_ParamLimits

0xaf0b,	// (0x00061658) form_field_slider_pane_vc_t1

0xae75,	// (0x000615c2) form_field_slider_pane_vc_t2_ParamLimits

0xae75,	// (0x000615c2) form_field_slider_pane_vc_t2

0x0001,

0xfa82,	// (0x000661cf) form_field_slider_pane_vc_t_ParamLimits

0xfa82,	// (0x000661cf) form_field_slider_pane_vc_t

0xe365,	// (0x00064ab2) input_focus_pane_cp9_vc_ParamLimits

0xe365,	// (0x00064ab2) input_focus_pane_cp9_vc

0xaf27,	// (0x00061674) slider_cont_pane_vc_ParamLimits

0xaf27,	// (0x00061674) slider_cont_pane_vc

0xaf3b,	// (0x00061688) list_form_graphic_pane_cp_vc_ParamLimits

0xaf3b,	// (0x00061688) list_form_graphic_pane_cp_vc

0x9171,	// (0x0005f8be) form_field_popup_wide_pane_vc_g1

0xaf50,	// (0x0006169d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf50,	// (0x0006169d) form_field_popup_wide_pane_vc_t1

0xf176,	// (0x000658c3) input_focus_pane_cp8_vc_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_cp8_vc

0xaf95,	// (0x000616e2) list_form_wide_pane_vc_ParamLimits

0xaf95,	// (0x000616e2) list_form_wide_pane_vc

0xafa1,	// (0x000616ee) list_form_graphic_pane_vc_g1

0xafa9,	// (0x000616f6) list_form_graphic_pane_vc_t1_ParamLimits

0xafa9,	// (0x000616f6) list_form_graphic_pane_vc_t1

0xe23b,	// (0x00064988) list_highlight_pane_cp5_vc_ParamLimits

0xe23b,	// (0x00064988) list_highlight_pane_cp5_vc

0xafc5,	// (0x00061712) list_form_graphic_pane_vc_ParamLimits

0xafc5,	// (0x00061712) list_form_graphic_pane_vc

0x9171,	// (0x0005f8be) form_field_popup_pane_vc_g1

0xafdb,	// (0x00061728) form_field_popup_pane_vc_t1_ParamLimits

0xafdb,	// (0x00061728) form_field_popup_pane_vc_t1

0xf176,	// (0x000658c3) input_focus_pane_cp7_vc_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_cp7_vc

0xaff2,	// (0x0006173f) list_form_pane_vc_ParamLimits

0xaff2,	// (0x0006173f) list_form_pane_vc

0xaffe,	// (0x0006174b) data_form_pane_vc_t1_ParamLimits

0xaffe,	// (0x0006174b) data_form_pane_vc_t1

0xf1ce,	// (0x0006591b) input_focus_pane_vc_g1

0xf1d6,	// (0x00065923) input_focus_pane_vc_g2

0xf1de,	// (0x0006592b) input_focus_pane_vc_g3

0xf1e6,	// (0x00065933) input_focus_pane_vc_g4

0xf1ee,	// (0x0006593b) input_focus_pane_vc_g5

0xf1f6,	// (0x00065943) input_focus_pane_vc_g6

0xf1fe,	// (0x0006594b) input_focus_pane_vc_g7

0xf206,	// (0x00065953) input_focus_pane_vc_g8

0xf20e,	// (0x0006595b) input_focus_pane_vc_g9

0xe1e3,	// (0x00064930) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x00065dad) input_focus_pane_vc_g

0x9165,	// (0x0005f8b2) data_form_pane_vc_ParamLimits

0x9165,	// (0x0005f8b2) data_form_pane_vc

0x9171,	// (0x0005f8be) form_field_data_pane_vc_g1

0xb019,	// (0x00061766) form_field_data_pane_vc_t1_ParamLimits

0xb019,	// (0x00061766) form_field_data_pane_vc_t1

0xf176,	// (0x000658c3) input_focus_pane_vc_ParamLimits

0xf176,	// (0x000658c3) input_focus_pane_vc

0xb033,	// (0x00061780) button_value_adjust_pane_cp3_vc

0xb03b,	// (0x00061788) button_value_adjust_pane_cp5_vc

0xb043,	// (0x00061790) form_field_data_pane_vc_ParamLimits

0xb043,	// (0x00061790) form_field_data_pane_vc

0xb05a,	// (0x000617a7) form_field_data_pane_vc_cp2

0xb062,	// (0x000617af) form_field_data_wide_pane_vc_ParamLimits

0xb062,	// (0x000617af) form_field_data_wide_pane_vc

0xb078,	// (0x000617c5) form_field_data_wide_pane_vc_cp2

0xb080,	// (0x000617cd) form_field_popup_pane_vc_ParamLimits

0xb080,	// (0x000617cd) form_field_popup_pane_vc

0xb097,	// (0x000617e4) form_field_popup_wide_pane_vc_ParamLimits

0xb097,	// (0x000617e4) form_field_popup_wide_pane_vc

0xb0ad,	// (0x000617fa) form_field_slider_pane_vc_ParamLimits

0xb0ad,	// (0x000617fa) form_field_slider_pane_vc

0xb0c0,	// (0x0006180d) form_field_slider_wide_pane_vc_ParamLimits

0xb0c0,	// (0x0006180d) form_field_slider_wide_pane_vc

0xb0d3,	// (0x00061820) grid_touch_1_pane_ParamLimits

0xb0d3,	// (0x00061820) grid_touch_1_pane

0xb0df,	// (0x0006182c) grid_touch_2_pane_ParamLimits

0xb0df,	// (0x0006182c) grid_touch_2_pane

0x1829,	// (0x00057f76) touch_pane_g1_ParamLimits

0x1829,	// (0x00057f76) touch_pane_g1

0xb0f7,	// (0x00061844) cell_app_pane_cp_wide_ParamLimits

0xb0f7,	// (0x00061844) cell_app_pane_cp_wide

0xb108,	// (0x00061855) grid_popup_fast_wide_pane_ParamLimits

0xb108,	// (0x00061855) grid_popup_fast_wide_pane

0xb11c,	// (0x00061869) scroll_pane_cp19_ParamLimits

0xb11c,	// (0x00061869) scroll_pane_cp19

0xe1ed,	// (0x0006493a) bg_popup_window_pane_cp20

0xb130,	// (0x0006187d) listscroll_popup_fast_wide_pane

0xb138,	// (0x00061885) grid_indicator_nsta_pane

0xb14a,	// (0x00061897) clock_nsta_pane_g1

0xb153,	// (0x000618a0) clock_nsta_pane_t1

0xb16f,	// (0x000618bc) cell_indicator_nsta_pane_ParamLimits

0xb16f,	// (0x000618bc) cell_indicator_nsta_pane

0xb1a4,	// (0x000618f1) cell_indicator_nsta_pane_g1

0xb1b2,	// (0x000618ff) cell_indicator_nsta_pane_g2

0x0001,

0xfa93,	// (0x000661e0) cell_indicator_nsta_pane_g

0xb1c4,	// (0x00061911) clock_nsta_pane_cp

0xb1cd,	// (0x0006191a) indicator_nsta_pane_cp

0xb1d7,	// (0x00061924) nsta_clock_indic_pane_g1

0xe277,	// (0x000649c4) grid_indicator_pane

0x653b,	// (0x0005cc88) scroll_pane_cp29

0x67db,	// (0x0005cf28) indicator_nsta_pane_cp2_ParamLimits

0x67db,	// (0x0005cf28) indicator_nsta_pane_cp2

0xe23b,	// (0x00064988) main_apps_wheel_pane

0x9389,	// (0x0005fad6) form_midp_field_text_pane_ParamLimits

0x94d2,	// (0x0005fc1f) scroll_bar_cp050_ParamLimits

0xb230,	// (0x0006197d) cell_indicator_pane_ParamLimits

0xb230,	// (0x0006197d) cell_indicator_pane

0xb249,	// (0x00061996) cell_indicator_pane_g1

0xb253,	// (0x000619a0) grid_wheel_folder_pane_ParamLimits

0xb253,	// (0x000619a0) grid_wheel_folder_pane

0xb269,	// (0x000619b6) list_wheel_apps_pane_ParamLimits

0xb269,	// (0x000619b6) list_wheel_apps_pane

0xb27a,	// (0x000619c7) main_apps_wheel_pane_g1_ParamLimits

0xb27a,	// (0x000619c7) main_apps_wheel_pane_g1

0xb28e,	// (0x000619db) main_apps_wheel_pane_g2_ParamLimits

0xb28e,	// (0x000619db) main_apps_wheel_pane_g2

0x0001,

0xfaaf,	// (0x000661fc) main_apps_wheel_pane_g_ParamLimits

0xfaaf,	// (0x000661fc) main_apps_wheel_pane_g

0xb2a6,	// (0x000619f3) main_apps_wheel_pane_t1_ParamLimits

0xb2a6,	// (0x000619f3) main_apps_wheel_pane_t1

0xb2c9,	// (0x00061a16) list_wheel_apps_pane_g1

0xb2d1,	// (0x00061a1e) list_wheel_apps_pane_g2

0xb2d9,	// (0x00061a26) list_wheel_apps_pane_g3

0xb2e3,	// (0x00061a30) list_wheel_apps_pane_g4

0xb2ed,	// (0x00061a3a) list_wheel_apps_pane_g5

0x0004,

0xfab4,	// (0x00066201) list_wheel_apps_pane_g

0x1580,	// (0x00057ccd) navi_icon_text_pane

0x7318,	// (0x0005da65) aid_fill_nsta

0xb310,	// (0x00061a5d) navi_icon_text_pane_g1

0xb31c,	// (0x00061a69) navi_icon_text_pane_t1

0x1464,	// (0x00057bb1) list_set_graphic_pane_t1_ParamLimits

0x1464,	// (0x00057bb1) list_set_graphic_pane_t1

0x9c1d,	// (0x0006036a) popup_midp_note_alarm_window_t6_ParamLimits

0x9c1d,	// (0x0006036a) popup_midp_note_alarm_window_t6

0x9c2f,	// (0x0006037c) popup_midp_note_alarm_window_t7_ParamLimits

0x9c2f,	// (0x0006037c) popup_midp_note_alarm_window_t7

0x9c41,	// (0x0006038e) popup_midp_note_alarm_window_t8_ParamLimits

0x9c41,	// (0x0006038e) popup_midp_note_alarm_window_t8

0x9c53,	// (0x000603a0) popup_midp_note_alarm_window_t9_ParamLimits

0x9c53,	// (0x000603a0) popup_midp_note_alarm_window_t9

0x9c65,	// (0x000603b2) popup_midp_note_alarm_window_t10_ParamLimits

0x9c65,	// (0x000603b2) popup_midp_note_alarm_window_t10

0x9c77,	// (0x000603c4) popup_midp_note_alarm_window_t11_ParamLimits

0x9c77,	// (0x000603c4) popup_midp_note_alarm_window_t11

0x9c89,	// (0x000603d6) scroll_pane_cp17_ParamLimits

0x9c89,	// (0x000603d6) scroll_pane_cp17

0x77af,	// (0x0005defc) volume_small_pane_cp_g1

0x7bb3,	// (0x0005e300) volume_small_pane_cp_g2

0x7bbc,	// (0x0005e309) volume_small_pane_cp_g3

0x7bc5,	// (0x0005e312) volume_small_pane_cp_g4

0x7bce,	// (0x0005e31b) volume_small_pane_cp_g5

0x7b7d,	// (0x0005e2ca) volume_small_pane_cp_g6

0x7bd7,	// (0x0005e324) volume_small_pane_cp_g7

0x7be0,	// (0x0005e32d) volume_small_pane_cp_g8

0x7be9,	// (0x0005e336) volume_small_pane_cp_g9

0x7bf2,	// (0x0005e33f) volume_small_pane_cp_g10

0x16ea,	// (0x00057e37) midp_ticker_pane_g1_ParamLimits

0x16f6,	// (0x00057e43) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x00065e79) midp_ticker_pane_g_ParamLimits

0x1702,	// (0x00057e4f) midp_ticker_pane_t1_ParamLimits

0x732e,	// (0x0005da7b) aid_fill_nsta_2

0x94be,	// (0x0005fc0b) list_form2_midp_pane

0xa5c1,	// (0x00060d0e) midp_editing_number_pane_ParamLimits

0xa5d0,	// (0x00060d1d) midp_ticker_pane_ParamLimits

0xb32e,	// (0x00061a7b) form2_midp_field_pane

0xb352,	// (0x00061a9f) scroll_pane_cp51

0xb372,	// (0x00061abf) form2_midp_button_pane_ParamLimits

0xb372,	// (0x00061abf) form2_midp_button_pane

0xb384,	// (0x00061ad1) form2_midp_content_pane_ParamLimits

0xb384,	// (0x00061ad1) form2_midp_content_pane

0xb39e,	// (0x00061aeb) form2_midp_field_choice_group_pane

0xb3a6,	// (0x00061af3) form2_midp_field_pane_g1

0xb3ae,	// (0x00061afb) form2_midp_field_pane_g2

0xb3b6,	// (0x00061b03) form2_midp_field_pane_g3

0xb3be,	// (0x00061b0b) form2_midp_field_pane_g4

0x0003,

0xfad9,	// (0x00066226) form2_midp_field_pane_g

0xb3c6,	// (0x00061b13) form2_midp_gauge_slider_pane

0xb3ce,	// (0x00061b1b) form2_midp_gauge_wait_pane

0xb3d6,	// (0x00061b23) form2_midp_image_pane_ParamLimits

0xb3d6,	// (0x00061b23) form2_midp_image_pane

0xb3f1,	// (0x00061b3e) form2_midp_label_pane_ParamLimits

0xb3f1,	// (0x00061b3e) form2_midp_label_pane

0xb40a,	// (0x00061b57) form2_midp_label_pane_cp_ParamLimits

0xb40a,	// (0x00061b57) form2_midp_label_pane_cp

0xb42b,	// (0x00061b78) form2_midp_string_pane_ParamLimits

0xb42b,	// (0x00061b78) form2_midp_string_pane

0x7bfb,	// (0x0005e348) form2_midp_text_pane_ParamLimits

0x7bfb,	// (0x0005e348) form2_midp_text_pane

0xb43d,	// (0x00061b8a) form2_midp_time_pane

0xb44d,	// (0x00061b9a) input_focus_pane_cp51_ParamLimits

0xb44d,	// (0x00061b9a) input_focus_pane_cp51

0xb465,	// (0x00061bb2) form2_midp_label_pane_t1_ParamLimits

0xb465,	// (0x00061bb2) form2_midp_label_pane_t1

0x7c18,	// (0x0005e365) form2_mdip_text_pane_t1_ParamLimits

0x7c18,	// (0x0005e365) form2_mdip_text_pane_t1

0x3f0b,	// (0x0005a658) form2_midp_time_pane_t1

0xb4ae,	// (0x00061bfb) form2_midp_gauge_slider_pane_t1

0xb4c0,	// (0x00061c0d) form2_midp_gauge_slider_pane_t2

0xb4d2,	// (0x00061c1f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae2,	// (0x0006622f) form2_midp_gauge_slider_pane_t

0xb4e4,	// (0x00061c31) form2_midp_slider_pane

0xb4f0,	// (0x00061c3d) form2_midp_gauge_wait_pane_t1

0xb4fe,	// (0x00061c4b) form2_midp_wait_pane_ParamLimits

0xb4fe,	// (0x00061c4b) form2_midp_wait_pane

0xb529,	// (0x00061c76) list_single_2graphic_pane_cp4_ParamLimits

0xb529,	// (0x00061c76) list_single_2graphic_pane_cp4

0x91da,	// (0x0005f927) list_single_midp_graphic_pane_cp_ParamLimits

0x91da,	// (0x0005f927) list_single_midp_graphic_pane_cp

0xe1ed,	// (0x0006493a) list_highlight_pane_cp20

0xb551,	// (0x00061c9e) list_single_2graphic_pane_g1_cp4

0xaaae,	// (0x000611fb) list_single_2graphic_pane_g2_cp4

0xb559,	// (0x00061ca6) list_single_2graphic_pane_t1_cp4

0xe23b,	// (0x00064988) list_highlight_pane_cp21

0xb568,	// (0x00061cb5) list_single_midp_graphic_pane_g4_cp

0xb577,	// (0x00061cc4) list_single_midp_graphic_pane_t1_cp

0xb58c,	// (0x00061cd9) form2_mdip_string_pane_t1_ParamLimits

0xb58c,	// (0x00061cd9) form2_mdip_string_pane_t1

0xe1ed,	// (0x0006493a) bg_wml_button_pane_cp2

0xe1e3,	// (0x00064930) form2_midp_image_pane_g1

0x42c7,	// (0x0005aa14) list_double_large_graphic_pane_g5_ParamLimits

0x42c7,	// (0x0005aa14) list_double_large_graphic_pane_g5

0x6994,	// (0x0005d0e1) midp_form_pane_ParamLimits

0xe23b,	// (0x00064988) main_apps_wheel_pane_ParamLimits

0x7100,	// (0x0005d84d) popup_preview_window_ParamLimits

0x7100,	// (0x0005d84d) popup_preview_window

0x72bb,	// (0x0005da08) popup_touch_info_window_ParamLimits

0x72bb,	// (0x0005da08) popup_touch_info_window

0x72d9,	// (0x0005da26) popup_touch_menu_window_ParamLimits

0x72d9,	// (0x0005da26) popup_touch_menu_window

0xe1d9,	// (0x00064926) bg_popup_sub_pane_cp6

0xb693,	// (0x00061de0) list_touch_menu_pane

0xb69b,	// (0x00061de8) list_single_touch_menu_pane_ParamLimits

0xb69b,	// (0x00061de8) list_single_touch_menu_pane

0xb6b1,	// (0x00061dfe) list_single_touch_menu_pane_t1

0xe23b,	// (0x00064988) bg_popup_sub_pane_cp7_ParamLimits

0xe23b,	// (0x00064988) bg_popup_sub_pane_cp7

0x94f2,	// (0x0005fc3f) heading_sub_pane

0xb6bf,	// (0x00061e0c) list_touch_info_pane_ParamLimits

0xb6bf,	// (0x00061e0c) list_touch_info_pane

0xb6cf,	// (0x00061e1c) list_single_touch_info_pane_ParamLimits

0xb6cf,	// (0x00061e1c) list_single_touch_info_pane

0xb6e1,	// (0x00061e2e) list_single_touch_info_pane_t1

0xb6ef,	// (0x00061e3c) list_single_touch_info_pane_t2

0x0001,

0xfaf0,	// (0x0006623d) list_single_touch_info_pane_t

0x16d3,	// (0x00057e20) bg_popup_heading_pane_cp

0xb6fd,	// (0x00061e4a) heading_sub_pane_t1

0x90ff,	// (0x0005f84c) bg_popup_preview_window_pane_cp_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_preview_window_pane_cp

0x94f2,	// (0x0005fc3f) heading_preview_pane

0xb6bf,	// (0x00061e0c) list_preview_pane_ParamLimits

0xb6bf,	// (0x00061e0c) list_preview_pane

0xb70b,	// (0x00061e58) popup_preview_window_g1

0xb6cf,	// (0x00061e1c) list_single_preview_pane_ParamLimits

0xb6cf,	// (0x00061e1c) list_single_preview_pane

0xb713,	// (0x00061e60) list_single_preview_pane_g1

0xb71b,	// (0x00061e68) list_single_preview_pane_t1

0xb6e1,	// (0x00061e2e) list_single_preview_pane_t2

0x0001,

0xfaf5,	// (0x00066242) list_single_preview_pane_t

0xb729,	// (0x00061e76) bg_popup_heading_pane_cp2_ParamLimits

0xb729,	// (0x00061e76) bg_popup_heading_pane_cp2

0xb73f,	// (0x00061e8c) heading_preview_pane_g1

0xb747,	// (0x00061e94) heading_preview_pane_t1_ParamLimits

0xb747,	// (0x00061e94) heading_preview_pane_t1

0xe28e,	// (0x000649db) soft_indicator_pane_t1_ParamLimits

0xf0f2,	// (0x0006583f) scroll_pane_ParamLimits

0xf48f,	// (0x00065bdc) scroll_sc2_left_pane

0xf498,	// (0x00065be5) scroll_sc2_right_pane

0xf4b7,	// (0x00065c04) scroll_bg_pane_g1_ParamLimits

0xf4cc,	// (0x00065c19) scroll_bg_pane_g2_ParamLimits

0xf4e4,	// (0x00065c31) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x00065e04) scroll_bg_pane_g_ParamLimits

0xf4b7,	// (0x00065c04) scroll_handle_pane_g1_ParamLimits

0xf4f9,	// (0x00065c46) scroll_handle_pane_g2_ParamLimits

0xf4e4,	// (0x00065c31) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x00065e0b) scroll_handle_pane_g_ParamLimits

0x6d83,	// (0x0005d4d0) popup_choice_list_window_ParamLimits

0x6d83,	// (0x0005d4d0) popup_choice_list_window

0x8fbd,	// (0x0005f70a) choice_list_pane

0x903f,	// (0x0005f78c) cell_toolbar_pane_t1

0x9067,	// (0x0005f7b4) toolbar_button_pane_ParamLimits

0xa143,	// (0x00060890) ai_gene_pane_1_t2_ParamLimits

0xa143,	// (0x00060890) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x00066033) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x00066033) ai_gene_pane_1_t

0xb839,	// (0x00061f86) scroll_sc2_left_pane_g1

0xb839,	// (0x00061f86) scroll_sc2_right_pane_g1

0xf51b,	// (0x00065c68) bg_popup_sub_pane_cp10

0xb843,	// (0x00061f90) list_choice_list_pane

0xb85c,	// (0x00061fa9) list_single_choice_list_pane_ParamLimits

0xb85c,	// (0x00061fa9) list_single_choice_list_pane

0xb86f,	// (0x00061fbc) list_single_choice_list_pane_g1

0x61d4,	// (0x0005c921) list_single_choice_list_pane_t1_ParamLimits

0x61d4,	// (0x0005c921) list_single_choice_list_pane_t1

0xb877,	// (0x00061fc4) choice_list_pane_g1

0xb87f,	// (0x00061fcc) choice_list_pane_t1

0xe1d9,	// (0x00064926) input_focus_pane_cp11

0xf404,	// (0x00065b51) title_pane_stacon_g2_ParamLimits

0xf404,	// (0x00065b51) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x00065dea) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x00065dea) title_pane_stacon_g

0x16d3,	// (0x00057e20) cursor_press_pane

0x6e2b,	// (0x0005d578) popup_fep_hwr_window_ParamLimits

0x6e2b,	// (0x0005d578) popup_fep_hwr_window

0x6ea3,	// (0x0005d5f0) popup_fep_vkb_window_ParamLimits

0x6ea3,	// (0x0005d5f0) popup_fep_vkb_window

0xb88d,	// (0x00061fda) cursor_press_pane_g1

0x0002,

0xfb1e,	// (0x0006626b) fep_vkb_side_pane_g_ParamLimits

0x7c6f,	// (0x0005e3bc) fep_hwr_candidate_pane_ParamLimits

0x7c6f,	// (0x0005e3bc) fep_hwr_candidate_pane

0x7c99,	// (0x0005e3e6) fep_hwr_side_pane_ParamLimits

0x7c99,	// (0x0005e3e6) fep_hwr_side_pane

0x7cb9,	// (0x0005e406) fep_hwr_top_pane_ParamLimits

0x7cb9,	// (0x0005e406) fep_hwr_top_pane

0x7cd1,	// (0x0005e41e) fep_hwr_write_pane_ParamLimits

0x7cd1,	// (0x0005e41e) fep_hwr_write_pane

0xfb1e,	// (0x0006626b) fep_vkb_side_pane_g

0xb895,	// (0x00061fe2) fep_hwr_top_pane_g1

0xb8a7,	// (0x00061ff4) fep_hwr_top_pane_g2

0x7d0b,	// (0x0005e458) fep_hwr_top_pane_g3

0x0002,

0xfafa,	// (0x00066247) fep_hwr_top_pane_g

0x7d20,	// (0x0005e46d) fep_hwr_top_text_pane

0x1271,	// (0x000579be) fep_hwr_top_text_pane_g1

0xb8dd,	// (0x0006202a) fep_hwr_top_text_pane_t1

0x7e16,	// (0x0005e563) fep_hwr_candidate_pane_g1

0xbb22,	// (0x0006226f) fep_vkb_keypad_pane_g3_ParamLimits

0xbb22,	// (0x0006226f) fep_vkb_keypad_pane_g3

0xbb4a,	// (0x00062297) fep_vkb_keypad_pane_g4_ParamLimits

0xbb4a,	// (0x00062297) fep_vkb_keypad_pane_g4

0xbbb9,	// (0x00062306) fep_vkb_bottom_pane_g2_ParamLimits

0xbbb9,	// (0x00062306) fep_vkb_bottom_pane_g2

0x0001,

0xfb25,	// (0x00066272) fep_vkb_bottom_pane_g_ParamLimits

0xfb25,	// (0x00066272) fep_vkb_bottom_pane_g

0xb839,	// (0x00061f86) cell_vkb_side_pane_g2

0x0001,

0xfb2f,	// (0x0006627c) cell_vkb_side_pane_g

0xbc44,	// (0x00062391) cell_vkb_side_pane_t1

0xbc52,	// (0x0006239f) cell_vkb_side_pane_t1_copy1

0xb839,	// (0x00061f86) bg_fep_vkb_candidate_pane_g2

0xbd7e,	// (0x000624cb) cell_vkb_candidate_pane_ParamLimits

0xb8eb,	// (0x00062038) aid_size_cell_vkb_ParamLimits

0xb8eb,	// (0x00062038) aid_size_cell_vkb

0xbd7e,	// (0x000624cb) cell_vkb_candidate_pane

0x7e3d,	// (0x0005e58a) bg_popup_fep_shadow_pane_g1

0xb979,	// (0x000620c6) fep_vkb_bottom_pane_ParamLimits

0xb979,	// (0x000620c6) fep_vkb_bottom_pane

0xb9af,	// (0x000620fc) fep_vkb_candidate_pane_ParamLimits

0xb9af,	// (0x000620fc) fep_vkb_candidate_pane

0xb9cb,	// (0x00062118) fep_vkb_keypad_pane_ParamLimits

0xb9cb,	// (0x00062118) fep_vkb_keypad_pane

0xba0a,	// (0x00062157) fep_vkb_side_pane_ParamLimits

0xba0a,	// (0x00062157) fep_vkb_side_pane

0xba46,	// (0x00062193) fep_vkb_top_pane_ParamLimits

0xba46,	// (0x00062193) fep_vkb_top_pane

0xba7b,	// (0x000621c8) fep_vkb_top_pane_g1_ParamLimits

0xba7b,	// (0x000621c8) fep_vkb_top_pane_g1

0xba8a,	// (0x000621d7) fep_vkb_top_pane_g2_ParamLimits

0xba8a,	// (0x000621d7) fep_vkb_top_pane_g2

0xba99,	// (0x000621e6) fep_vkb_top_pane_g3_ParamLimits

0xba99,	// (0x000621e6) fep_vkb_top_pane_g3

0x0003,

0xfb15,	// (0x00066262) fep_vkb_top_pane_g_ParamLimits

0xfb15,	// (0x00066262) fep_vkb_top_pane_g

0xbab7,	// (0x00062204) fep_vkb_top_text_pane_ParamLimits

0xbab7,	// (0x00062204) fep_vkb_top_text_pane

0xbac8,	// (0x00062215) fep_vkb_side_pane_g1_ParamLimits

0xbac8,	// (0x00062215) fep_vkb_side_pane_g1

0xbb11,	// (0x0006225e) grid_vkb_side_pane_ParamLimits

0xbb11,	// (0x0006225e) grid_vkb_side_pane

0x7e45,	// (0x0005e592) bg_popup_fep_shadow_pane_g2

0x7e4e,	// (0x0005e59b) bg_popup_fep_shadow_pane_g3

0x7e56,	// (0x0005e5a3) bg_popup_fep_shadow_pane_g4

0x7e5f,	// (0x0005e5ac) bg_popup_fep_shadow_pane_g5

0x7e69,	// (0x0005e5b6) bg_popup_fep_shadow_pane_g6

0x7e71,	// (0x0005e5be) bg_popup_fep_shadow_pane_g7

0xf1e6,	// (0x00065933) bg_popup_fep_shadow_pane_g8

0xbb68,	// (0x000622b5) grid_vkb_keypad_number_pane_ParamLimits

0xbb68,	// (0x000622b5) grid_vkb_keypad_number_pane

0xbb78,	// (0x000622c5) grid_vkb_keypad_pane_ParamLimits

0xbb78,	// (0x000622c5) grid_vkb_keypad_pane

0xbb9e,	// (0x000622eb) fep_vkb_bottom_pane_g1_ParamLimits

0xbb9e,	// (0x000622eb) fep_vkb_bottom_pane_g1

0xbbc7,	// (0x00062314) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbbc7,	// (0x00062314) grid_vkb_keypad_bottom_left_pane

0xbbdc,	// (0x00062329) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbbdc,	// (0x00062329) grid_vkb_keypad_bottom_right_pane

0xbbf1,	// (0x0006233e) fep_vkb_top_text_pane_g1

0xbc0c,	// (0x00062359) fep_vkb_top_text_pane_t1

0xbc21,	// (0x0006236e) cell_vkb_side_pane_ParamLimits

0xbc21,	// (0x0006236e) cell_vkb_side_pane

0xb839,	// (0x00061f86) cell_vkb_side_pane_g1

0xbc60,	// (0x000623ad) cell_vkb_keypad_pane_ParamLimits

0xbc60,	// (0x000623ad) cell_vkb_keypad_pane

0xbcd5,	// (0x00062422) cell_vkb_keypad_pane_g1

0x0008,

0xfb42,	// (0x0006628f) bg_popup_fep_shadow_pane_g

0x7e83,	// (0x0005e5d0) cell_hwr_side_pane_g1

0x7e83,	// (0x0005e5d0) cell_hwr_side_pane_g2

0xbcdf,	// (0x0006242c) cell_vkb_keypad_pane_t1

0xbced,	// (0x0006243a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbced,	// (0x0006243a) cell_vkb_keypad_bottom_left_pane

0xbd0a,	// (0x00062457) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbd0a,	// (0x00062457) cell_vkb_keypad_bottom_right_pane

0xb839,	// (0x00061f86) cell_vkb_keypad_bottom_left_pane_g1

0xb839,	// (0x00061f86) cell_vkb_keypad_bottom_right_pane_g1

0xbd43,	// (0x00062490) cell_vkb_keypad_number_pane_ParamLimits

0xbd43,	// (0x00062490) cell_vkb_keypad_number_pane

0xbd62,	// (0x000624af) cell_vkb_keypad_number_pane_g1

0xbd6c,	// (0x000624b9) cell_vkb_keypad_number_pane_g2

0xbd75,	// (0x000624c2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb34,	// (0x00066281) cell_vkb_keypad_number_pane_g

0xbcdf,	// (0x0006242c) cell_vkb_keypad_number_pane_t1

0xbd99,	// (0x000624e6) fep_vkb_candidate_pane_g1

0x0001,

0xfb55,	// (0x000662a2) cell_hwr_side_pane_g

0xbdb2,	// (0x000624ff) cell_hwr_side_pane_t1

0x7e8d,	// (0x0005e5da) cell_hwr_side_pane_t1_copy1

0x7e9b,	// (0x0005e5e8) cell_hwr_candidate_pane_g1

0x7eca,	// (0x0005e617) cell_hwr_candidate_pane_t1

0xb839,	// (0x00061f86) cell_vkb_candidate_pane_g2

0xbe17,	// (0x00062564) cell_vkb_candidate_pane_t1

0x7c36,	// (0x0005e383) bg_popup_fep_shadow_pane_ParamLimits

0x7c36,	// (0x0005e383) bg_popup_fep_shadow_pane

0x7ceb,	// (0x0005e438) bg_fep_hwr_top_pane_g4

0xb8b9,	// (0x00062006) bg_hwr_side_pane_g1_ParamLimits

0xb8b9,	// (0x00062006) bg_hwr_side_pane_g1

0x7d5c,	// (0x0005e4a9) cell_hwr_side_pane_ParamLimits

0x7d5c,	// (0x0005e4a9) cell_hwr_side_pane

0x7d97,	// (0x0005e4e4) fep_hwr_write_pane_g1_ParamLimits

0x7d97,	// (0x0005e4e4) fep_hwr_write_pane_g1

0x7da4,	// (0x0005e4f1) fep_hwr_write_pane_g2_ParamLimits

0x7da4,	// (0x0005e4f1) fep_hwr_write_pane_g2

0x7db1,	// (0x0005e4fe) fep_hwr_write_pane_g3_ParamLimits

0x7db1,	// (0x0005e4fe) fep_hwr_write_pane_g3

0x7dbf,	// (0x0005e50c) fep_hwr_write_pane_g4_ParamLimits

0x7dbf,	// (0x0005e50c) fep_hwr_write_pane_g4

0x0005,

0xfb01,	// (0x0006624e) fep_hwr_write_pane_g_ParamLimits

0xfb01,	// (0x0006624e) fep_hwr_write_pane_g

0x7ceb,	// (0x0005e438) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7ceb,	// (0x0005e438) bg_fep_hwr_candidate_pane_g2

0x7dd4,	// (0x0005e521) cell_hwr_candidate_pane_ParamLimits

0x7dd4,	// (0x0005e521) cell_hwr_candidate_pane

0x7e16,	// (0x0005e563) fep_hwr_candidate_pane_g1_ParamLimits

0xb919,	// (0x00062066) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb919,	// (0x00062066) bg_popup_fep_shadow_pane_cp2

0xbaa9,	// (0x000621f6) fep_vkb_top_pane_g4_ParamLimits

0xbaa9,	// (0x000621f6) fep_vkb_top_pane_g4

0xbaef,	// (0x0006223c) fep_vkb_side_pane_g2_ParamLimits

0xbaef,	// (0x0006223c) fep_vkb_side_pane_g2

0x5eec,	// (0x0005c639) list_setting_pane_t4_ParamLimits

0x5eec,	// (0x0005c639) list_setting_pane_t4

0x5f86,	// (0x0005c6d3) list_setting_number_pane_t5_ParamLimits

0x5f86,	// (0x0005c6d3) list_setting_number_pane_t5

0x656a,	// (0x0005ccb7) list_double_heading_pane_cp2_ParamLimits

0x656a,	// (0x0005ccb7) list_double_heading_pane_cp2

0x2470,	// (0x00058bbd) list_double_heading_pane_g1_cp2_ParamLimits

0x2470,	// (0x00058bbd) list_double_heading_pane_g1_cp2

0xbe25,	// (0x00062572) list_double_heading_pane_g2_cp2_ParamLimits

0xbe25,	// (0x00062572) list_double_heading_pane_g2_cp2

0xbe39,	// (0x00062586) list_double_heading_pane_t1_cp2_ParamLimits

0xbe39,	// (0x00062586) list_double_heading_pane_t1_cp2

0xbe4f,	// (0x0006259c) list_double_heading_pane_t2_cp2_ParamLimits

0xbe4f,	// (0x0006259c) list_double_heading_pane_t2_cp2

0xe1d1,	// (0x0006491e) aid_value_unit2

0x549e,	// (0x0005bbeb) popup_preview_fixed_window

0xe373,	// (0x00064ac0) bg_popup_preview_window_pane_cp02

0xbe61,	// (0x000625ae) list_preview_fixed_pane

0xbea7,	// (0x000625f4) list_empty_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_empty_pane_fp

0xbea7,	// (0x000625f4) list_single_cale_day_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_cale_day_pane_fp

0xbea7,	// (0x000625f4) list_single_graphic_heading_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_graphic_heading_pane_fp

0xbea7,	// (0x000625f4) list_single_graphic_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_graphic_pane_fp

0xbea7,	// (0x000625f4) list_single_heading_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_heading_pane_fp

0xbea7,	// (0x000625f4) list_single_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_pane_fp

0xbebd,	// (0x0006260a) list_single_pane_fp_g1_ParamLimits

0xbebd,	// (0x0006260a) list_single_pane_fp_g1

0x247c,	// (0x00058bc9) list_single_pane_fp_g2_ParamLimits

0x247c,	// (0x00058bc9) list_single_pane_fp_g2

0xbec9,	// (0x00062616) list_single_pane_fp_g3_ParamLimits

0xbec9,	// (0x00062616) list_single_pane_fp_g3

0xbedd,	// (0x0006262a) list_single_pane_fp_g4_ParamLimits

0xbedd,	// (0x0006262a) list_single_pane_fp_g4

0x0003,

0xfb68,	// (0x000662b5) list_single_pane_fp_g_ParamLimits

0xfb68,	// (0x000662b5) list_single_pane_fp_g

0x3f1e,	// (0x0005a66b) list_single_pane_fp_t1_ParamLimits

0x3f1e,	// (0x0005a66b) list_single_pane_fp_t1

0x3f35,	// (0x0005a682) list_single_graphic_pane_fp_g1_ParamLimits

0x3f35,	// (0x0005a682) list_single_graphic_pane_fp_g1

0xbebd,	// (0x0006260a) list_single_graphic_pane_fp_g2_ParamLimits

0xbebd,	// (0x0006260a) list_single_graphic_pane_fp_g2

0x247c,	// (0x00058bc9) list_single_graphic_pane_fp_g3_ParamLimits

0x247c,	// (0x00058bc9) list_single_graphic_pane_fp_g3

0xbec9,	// (0x00062616) list_single_graphic_pane_fp_g4_ParamLimits

0xbec9,	// (0x00062616) list_single_graphic_pane_fp_g4

0xbedd,	// (0x0006262a) list_single_graphic_pane_fp_g5_ParamLimits

0xbedd,	// (0x0006262a) list_single_graphic_pane_fp_g5

0x0004,

0xfb71,	// (0x000662be) list_single_graphic_pane_fp_g_ParamLimits

0xfb71,	// (0x000662be) list_single_graphic_pane_fp_g

0x3f41,	// (0x0005a68e) list_single_graphic_pane_fp_t1_ParamLimits

0x3f41,	// (0x0005a68e) list_single_graphic_pane_fp_t1

0x3f35,	// (0x0005a682) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3f35,	// (0x0005a682) list_single_graphic_heading_pane_fp_g1

0xbebd,	// (0x0006260a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbebd,	// (0x0006260a) list_single_graphic_heading_pane_fp_g2

0x247c,	// (0x00058bc9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x247c,	// (0x00058bc9) list_single_graphic_heading_pane_fp_g3

0xbec9,	// (0x00062616) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbec9,	// (0x00062616) list_single_graphic_heading_pane_fp_g4

0xbedd,	// (0x0006262a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbedd,	// (0x0006262a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb71,	// (0x000662be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb71,	// (0x000662be) list_single_graphic_heading_pane_fp_g

0x3f57,	// (0x0005a6a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f57,	// (0x0005a6a4) list_single_graphic_heading_pane_fp_t1

0x3f6d,	// (0x0005a6ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f6d,	// (0x0005a6ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x000662c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x000662c9) list_single_graphic_heading_pane_fp_t

0x3f7f,	// (0x0005a6cc) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f7f,	// (0x0005a6cc) list_single_cale_day_pane_fp_g1

0xbee9,	// (0x00062636) list_single_cale_day_pane_fp_g2_ParamLimits

0xbee9,	// (0x00062636) list_single_cale_day_pane_fp_g2

0xb764,	// (0x00061eb1) list_single_cale_day_pane_fp_g3_ParamLimits

0xb764,	// (0x00061eb1) list_single_cale_day_pane_fp_g3

0xb78c,	// (0x00061ed9) list_single_cale_day_pane_fp_g4_ParamLimits

0xb78c,	// (0x00061ed9) list_single_cale_day_pane_fp_g4

0xb7b0,	// (0x00061efd) list_single_cale_day_pane_fp_g5_ParamLimits

0xb7b0,	// (0x00061efd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb81,	// (0x000662ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb81,	// (0x000662ce) list_single_cale_day_pane_fp_g

0x3fb7,	// (0x0005a704) list_single_cale_day_pane_fp_t1_ParamLimits

0x3fb7,	// (0x0005a704) list_single_cale_day_pane_fp_t1

0x3fdd,	// (0x0005a72a) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fdd,	// (0x0005a72a) list_single_cale_day_pane_fp_t2

0x3ff6,	// (0x0005a743) list_single_cale_day_pane_fp_t3_ParamLimits

0x3ff6,	// (0x0005a743) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8c,	// (0x000662d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8c,	// (0x000662d9) list_single_cale_day_pane_fp_t

0xbebd,	// (0x0006260a) list_empty_pane_fp_g1_ParamLimits

0xbebd,	// (0x0006260a) list_empty_pane_fp_g1

0x400f,	// (0x0005a75c) list_empty_pane_fp_t1

0x401d,	// (0x0005a76a) list_empty_pane_fp_t2

0x0001,

0xfb93,	// (0x000662e0) list_empty_pane_fp_t

0xbebd,	// (0x0006260a) list_single_heading_pane_fp_g1_ParamLimits

0xbebd,	// (0x0006260a) list_single_heading_pane_fp_g1

0x247c,	// (0x00058bc9) list_single_heading_pane_fp_g2_ParamLimits

0x247c,	// (0x00058bc9) list_single_heading_pane_fp_g2

0xbec9,	// (0x00062616) list_single_heading_pane_fp_g3_ParamLimits

0xbec9,	// (0x00062616) list_single_heading_pane_fp_g3

0x0002,

0xfb98,	// (0x000662e5) list_single_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x000662e5) list_single_heading_pane_fp_g

0x402b,	// (0x0005a778) list_single_heading_pane_fp_t1_ParamLimits

0x402b,	// (0x0005a778) list_single_heading_pane_fp_t1

0x403d,	// (0x0005a78a) list_single_heading_pane_fp_t2_ParamLimits

0x403d,	// (0x0005a78a) list_single_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x000662ec) list_single_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x000662ec) list_single_heading_pane_fp_t

0x623a,	// (0x0005c987) aid_size_cell_fast

0xe348,	// (0x00064a95) soft_indicator_pane_cp1_t1

0x6243,	// (0x0005c990) cell_app_pane_cp2_ParamLimits

0x6243,	// (0x0005c990) cell_app_pane_cp2

0x7c58,	// (0x0005e3a5) fep_hwr_candidate_drop_down_list_pane

0x7e30,	// (0x0005e57d) fep_hwr_candidate_pane_g3_ParamLimits

0x7e30,	// (0x0005e57d) fep_hwr_candidate_pane_g3

0x345b,	// (0x00059ba8) fep_hwr_candidate_pane_g4_ParamLimits

0x345b,	// (0x00059ba8) fep_hwr_candidate_pane_g4

0x0002,

0xfb0e,	// (0x0006625b) fep_hwr_candidate_pane_g_ParamLimits

0xfb0e,	// (0x0006625b) fep_hwr_candidate_pane_g

0xb99e,	// (0x000620eb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb99e,	// (0x000620eb) fep_vkb_candidate_drop_down_list_pane

0xbda1,	// (0x000624ee) fep_vkb_candidate_pane_g3

0xbda9,	// (0x000624f6) fep_vkb_candidate_pane_g4

0x0002,

0xfb3b,	// (0x00066288) fep_vkb_candidate_pane_g

0x7e9b,	// (0x0005e5e8) cell_hwr_candidate_pane_g1_ParamLimits

0x7ea9,	// (0x0005e5f6) cell_hwr_candidate_pane_g3_ParamLimits

0x7ea9,	// (0x0005e5f6) cell_hwr_candidate_pane_g3

0xbdc0,	// (0x0006250d) cell_hwr_candidate_pane_g4_ParamLimits

0xbdc0,	// (0x0006250d) cell_hwr_candidate_pane_g4

0x0002,

0xfb5a,	// (0x000662a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb5a,	// (0x000662a7) cell_hwr_candidate_pane_g

0xbde1,	// (0x0006252e) cell_vkb_candidate_pane_g3_ParamLimits

0xbde1,	// (0x0006252e) cell_vkb_candidate_pane_g3

0xbdfc,	// (0x00062549) cell_vkb_candidate_pane_g4_ParamLimits

0xbdfc,	// (0x00062549) cell_vkb_candidate_pane_g4

0xbef5,	// (0x00062642) cell_app_pane_cp2_g1_ParamLimits

0xbef5,	// (0x00062642) cell_app_pane_cp2_g1

0xbf13,	// (0x00062660) cell_app_pane_cp2_g2_ParamLimits

0xbf13,	// (0x00062660) cell_app_pane_cp2_g2

0x0001,

0xfba4,	// (0x000662f1) cell_app_pane_cp2_g_ParamLimits

0xfba4,	// (0x000662f1) cell_app_pane_cp2_g

0xbf1f,	// (0x0006266c) cell_app_pane_cp2_t1_ParamLimits

0xbf1f,	// (0x0006266c) cell_app_pane_cp2_t1

0xf176,	// (0x000658c3) grid_highlight_pane_cp1_ParamLimits

0xf176,	// (0x000658c3) grid_highlight_pane_cp1

0x7ee8,	// (0x0005e635) cell_hwr_candidate_pane_cp1_ParamLimits

0x7ee8,	// (0x0005e635) cell_hwr_candidate_pane_cp1

0x7e9b,	// (0x0005e5e8) fep_hwr_candidate_drop_down_list_pane_g1

0x7f07,	// (0x0005e654) fep_hwr_candidate_drop_down_list_pane_g2

0x7f14,	// (0x0005e661) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x000662f6) fep_hwr_candidate_drop_down_list_pane_g

0x7f21,	// (0x0005e66e) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f2a,	// (0x0005e677) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f2a,	// (0x0005e677) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f37,	// (0x0005e684) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f37,	// (0x0005e684) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f44,	// (0x0005e691) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f44,	// (0x0005e691) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f51,	// (0x0005e69e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f51,	// (0x0005e69e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f6c,	// (0x0005e6b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f6c,	// (0x0005e6b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f87,	// (0x0005e6d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f87,	// (0x0005e6d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fa2,	// (0x0005e6ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fa2,	// (0x0005e6ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fbd,	// (0x0005e70a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fbd,	// (0x0005e70a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x000662fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x000662fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbf31,	// (0x0006267e) cell_vkb_candidate_pane_cp1_ParamLimits

0xbf31,	// (0x0006267e) cell_vkb_candidate_pane_cp1

0xbaa9,	// (0x000621f6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbaa9,	// (0x000621f6) fep_vkb_candidate_drop_down_list_pane_g1

0xbf51,	// (0x0006269e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbf51,	// (0x0006269e) fep_vkb_candidate_drop_down_list_pane_g2

0xbf5e,	// (0x000626ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbf5e,	// (0x000626ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0006630e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0006630e) fep_vkb_candidate_drop_down_list_pane_g

0xbf6b,	// (0x000626b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbf6b,	// (0x000626b8) fep_vkb_candidate_drop_down_list_scroll_pane

0xbf78,	// (0x000626c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf78,	// (0x000626c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf85,	// (0x000626d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf85,	// (0x000626d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf91,	// (0x000626de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf91,	// (0x000626de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf9d,	// (0x000626ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf9d,	// (0x000626ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbfbe,	// (0x0006270b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbfbe,	// (0x0006270b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbfdf,	// (0x0006272c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbfdf,	// (0x0006272c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc000,	// (0x0006274d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc000,	// (0x0006274d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc021,	// (0x0006276e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc021,	// (0x0006276e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x00066315) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x00066315) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x55b8,	// (0x0005bd05) title_pane_g1_ParamLimits

0x55c5,	// (0x0005bd12) title_pane_g2_ParamLimits

0xf527,	// (0x00065c74) title_pane_g_ParamLimits

0x1269,	// (0x000579b6) aid_call2_pane

0x1261,	// (0x000579ae) aid_call_pane

0x1271,	// (0x000579be) popup_clock_analogue_window_g1

0x1271,	// (0x000579be) popup_clock_analogue_window_g2

0x654b,	// (0x0005cc98) popup_clock_analogue_window_g3

0x6554,	// (0x0005cca1) popup_clock_analogue_window_g4

0xe1e3,	// (0x00064930) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x00065e19) popup_clock_analogue_window_g

0x655c,	// (0x0005cca9) popup_clock_analogue_window_t1

0x65aa,	// (0x0005ccf7) clock_digital_number_pane_ParamLimits

0x65aa,	// (0x0005ccf7) clock_digital_number_pane

0x65b6,	// (0x0005cd03) clock_digital_number_pane_cp02_ParamLimits

0x65b6,	// (0x0005cd03) clock_digital_number_pane_cp02

0x65c2,	// (0x0005cd0f) clock_digital_number_pane_cp03_ParamLimits

0x65c2,	// (0x0005cd0f) clock_digital_number_pane_cp03

0x65ce,	// (0x0005cd1b) clock_digital_number_pane_cp04_ParamLimits

0x65ce,	// (0x0005cd1b) clock_digital_number_pane_cp04

0x65da,	// (0x0005cd27) clock_digital_separator_pane_ParamLimits

0x65da,	// (0x0005cd27) clock_digital_separator_pane

0x65e6,	// (0x0005cd33) popup_clock_digital_window_t1_ParamLimits

0x65e6,	// (0x0005cd33) popup_clock_digital_window_t1

0xe1e3,	// (0x00064930) clock_digital_number_pane_g1

0xe1e3,	// (0x00064930) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x00065e24) clock_digital_number_pane_g

0xe1e3,	// (0x00064930) clock_digital_separator_pane_g1

0xe1e3,	// (0x00064930) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x00065e24) clock_digital_separator_pane_g

0x7318,	// (0x0005da65) aid_fill_nsta_ParamLimits

0x7464,	// (0x0005dbb1) indicator_nsta_pane_ParamLimits

0x75dd,	// (0x0005dd2a) popup_clock_analogue_window

0x75dd,	// (0x0005dd2a) popup_clock_digital_window

0xb138,	// (0x00061885) grid_indicator_nsta_pane_ParamLimits

0xb161,	// (0x000618ae) clock_nsta_pane_t2

0x0001,

0xfa8e,	// (0x000661db) clock_nsta_pane_t

0x6476,	// (0x0005cbc3) aid_size_max_handle

0x6480,	// (0x0005cbcd) aid_size_min_handle

0x16d3,	// (0x00057e20) editor_scroll_pane

0xc03c,	// (0x00062789) ex_editor_pane

0xf2a8,	// (0x000659f5) scroll_pane_cp13

0xf11e,	// (0x0006586b) scroll_pane_cp14

0x12a0,	// (0x000579ed) scroll_pane_cp36

0x657e,	// (0x0005cccb) list_single_graphic_hl_pane_cp2_ParamLimits

0x657e,	// (0x0005cccb) list_single_graphic_hl_pane_cp2

0x7a3e,	// (0x0005e18b) list_single_graphic_hl_pane_ParamLimits

0x7a3e,	// (0x0005e18b) list_single_graphic_hl_pane

0x7fd8,	// (0x0005e725) aid_size_min_hl_cp1

0xc044,	// (0x00062791) list_highlight_pane_cp34_ParamLimits

0xc044,	// (0x00062791) list_highlight_pane_cp34

0xc055,	// (0x000627a2) list_single_graphic_hl_pane_g1_ParamLimits

0xc055,	// (0x000627a2) list_single_graphic_hl_pane_g1

0x7fe1,	// (0x0005e72e) list_single_graphic_hl_pane_g2_ParamLimits

0x7fe1,	// (0x0005e72e) list_single_graphic_hl_pane_g2

0x7fe1,	// (0x0005e72e) list_single_graphic_hl_pane_g3_ParamLimits

0x7fe1,	// (0x0005e72e) list_single_graphic_hl_pane_g3

0x7fed,	// (0x0005e73a) list_single_graphic_hl_pane_g4_ParamLimits

0x7fed,	// (0x0005e73a) list_single_graphic_hl_pane_g4

0x7ff9,	// (0x0005e746) list_single_graphic_hl_pane_g5_ParamLimits

0x7ff9,	// (0x0005e746) list_single_graphic_hl_pane_g5

0x0004,

0xfbd9,	// (0x00066326) list_single_graphic_hl_pane_g_ParamLimits

0xfbd9,	// (0x00066326) list_single_graphic_hl_pane_g

0x800d,	// (0x0005e75a) list_single_graphic_hl_pane_t1_ParamLimits

0x800d,	// (0x0005e75a) list_single_graphic_hl_pane_t1

0xc062,	// (0x000627af) aid_size_min_hl_cp2

0xc06b,	// (0x000627b8) list_highlight_pane_cp34_cp2_ParamLimits

0xc06b,	// (0x000627b8) list_highlight_pane_cp34_cp2

0xc055,	// (0x000627a2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc055,	// (0x000627a2) list_single_graphic_hl_pane_g1_cp2

0xc078,	// (0x000627c5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc078,	// (0x000627c5) list_single_graphic_hl_pane_g2_cp2

0xc084,	// (0x000627d1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc084,	// (0x000627d1) list_single_graphic_hl_pane_g3_cp2

0x11c4,	// (0x00057911) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x11c4,	// (0x00057911) list_single_graphic_hl_pane_g4_cp2

0xc092,	// (0x000627df) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc092,	// (0x000627df) list_single_graphic_hl_pane_g5_cp2

0x6bf8,	// (0x0005d345) control_pane_g4_ParamLimits

0x6bf8,	// (0x0005d345) control_pane_g4

0xf51b,	// (0x00065c68) bg_popup_sub_pane_cp10_ParamLimits

0xb843,	// (0x00061f90) list_choice_list_pane_ParamLimits

0xb852,	// (0x00061f9f) scroll_pane_cp23

0xe373,	// (0x00064ac0) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe61,	// (0x000625ae) list_preview_fixed_pane_ParamLimits

0xbe77,	// (0x000625c4) list_preview_fixed_pane_cp_ParamLimits

0xbe77,	// (0x000625c4) list_preview_fixed_pane_cp

0xbe83,	// (0x000625d0) popup_preview_fixed_window_g1_ParamLimits

0xbe83,	// (0x000625d0) popup_preview_fixed_window_g1

0xbe8f,	// (0x000625dc) popup_preview_fixed_window_g2_ParamLimits

0xbe8f,	// (0x000625dc) popup_preview_fixed_window_g2

0x0002,

0xfb61,	// (0x000662ae) popup_preview_fixed_window_g_ParamLimits

0xfb61,	// (0x000662ae) popup_preview_fixed_window_g

0x6352,	// (0x0005ca9f) aid_navi_side_left_pane_ParamLimits

0x6367,	// (0x0005cab4) aid_navi_side_right_pane_ParamLimits

0x637f,	// (0x0005cacc) navi_icon_pane_stacon_ParamLimits

0x6393,	// (0x0005cae0) navi_navi_pane_stacon_ParamLimits

0x637f,	// (0x0005cacc) navi_text_pane_stacon_ParamLimits

0x536d,	// (0x0005baba) main_text_info_pane

0xc0bc,	// (0x00062809) listscroll_text_info_pane

0xc0c4,	// (0x00062811) list_text_info_pane_ParamLimits

0xc0c4,	// (0x00062811) list_text_info_pane

0xc0d3,	// (0x00062820) scroll_pane_cp24_ParamLimits

0xc0d3,	// (0x00062820) scroll_pane_cp24

0xc0f1,	// (0x0006283e) list_text_info_pane_t1_ParamLimits

0xc0f1,	// (0x0006283e) list_text_info_pane_t1

0x6d9f,	// (0x0005d4ec) popup_fast_swap2_window_ParamLimits

0x6d9f,	// (0x0005d4ec) popup_fast_swap2_window

0xc125,	// (0x00062872) aid_size_cell_fast2

0xe1d9,	// (0x00064926) bg_popup_window_pane_cp17

0x94f2,	// (0x0005fc3f) heading_pane_cp2

0xc12f,	// (0x0006287c) listscroll_fast2_pane

0xc137,	// (0x00062884) grid_fast2_pane

0xc141,	// (0x0006288e) listscroll_fast2_pane_g1

0xc149,	// (0x00062896) listscroll_fast2_pane_g2

0x0001,

0xfbe4,	// (0x00066331) listscroll_fast2_pane_g

0xf2a8,	// (0x000659f5) scroll_pane_cp26

0xc153,	// (0x000628a0) cell_fast2_pane_ParamLimits

0xc153,	// (0x000628a0) cell_fast2_pane

0xc168,	// (0x000628b5) cell_fast2_pane_g1

0xc171,	// (0x000628be) cell_fast2_pane_g2

0xc17a,	// (0x000628c7) cell_fast2_pane_g3

0x0002,

0xfbe9,	// (0x00066336) cell_fast2_pane_g

0xe4de,	// (0x00064c2b) grid_highlight_pane_cp9

0x6d67,	// (0x0005d4b4) main_eswt_pane_ParamLimits

0x6d67,	// (0x0005d4b4) main_eswt_pane

0xc0e8,	// (0x00062835) list_single_text_info_pane

0xc182,	// (0x000628cf) eswt_ctrl_button_pane

0xc182,	// (0x000628cf) eswt_ctrl_canvas_pane

0xc18a,	// (0x000628d7) eswt_ctrl_combo_pane

0xc182,	// (0x000628cf) eswt_ctrl_default_pane

0xc182,	// (0x000628cf) eswt_ctrl_label_pane

0xc192,	// (0x000628df) eswt_ctrl_wait_pane

0xc19a,	// (0x000628e7) eswt_shell_pane

0xe1d9,	// (0x00064926) listscroll_eswt_app_pane

0xc1ba,	// (0x00062907) popup_eswt_tasktip_window_ParamLimits

0xc1ba,	// (0x00062907) popup_eswt_tasktip_window

0x90ff,	// (0x0005f84c) bg_popup_window_pane_cp18

0xc1cb,	// (0x00062918) eswt_control_pane_g1_ParamLimits

0xc1cb,	// (0x00062918) eswt_control_pane_g1

0xc1d8,	// (0x00062925) eswt_control_pane_g2_ParamLimits

0xc1d8,	// (0x00062925) eswt_control_pane_g2

0xc1e5,	// (0x00062932) eswt_control_pane_g3_ParamLimits

0xc1e5,	// (0x00062932) eswt_control_pane_g3

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_ParamLimits

0xc1f2,	// (0x0006293f) eswt_control_pane_g4

0x0003,

0xfbf0,	// (0x0006633d) eswt_control_pane_g_ParamLimits

0xfbf0,	// (0x0006633d) eswt_control_pane_g

0xf176,	// (0x000658c3) bg_button_pane_ParamLimits

0xf176,	// (0x000658c3) bg_button_pane

0xe4f3,	// (0x00064c40) common_borders_pane_copy2_ParamLimits

0xe4f3,	// (0x00064c40) common_borders_pane_copy2

0xc1ff,	// (0x0006294c) control_button_pane_g1_ParamLimits

0xc1ff,	// (0x0006294c) control_button_pane_g1

0xc20b,	// (0x00062958) control_button_pane_g2_ParamLimits

0xc20b,	// (0x00062958) control_button_pane_g2

0xc217,	// (0x00062964) control_button_pane_g3_ParamLimits

0xc217,	// (0x00062964) control_button_pane_g3

0x0002,

0xfbf9,	// (0x00066346) control_button_pane_g_ParamLimits

0xfbf9,	// (0x00066346) control_button_pane_g

0xc22b,	// (0x00062978) control_button_pane_t1

0xc239,	// (0x00062986) control_button_pane_t2

0x0001,

0xfc00,	// (0x0006634d) control_button_pane_t

0x9073,	// (0x0005f7c0) bg_button_pane_g1

0x9083,	// (0x0005f7d0) bg_button_pane_g2

0x907b,	// (0x0005f7c8) bg_button_pane_g3

0x9093,	// (0x0005f7e0) bg_button_pane_g4

0x908b,	// (0x0005f7d8) bg_button_pane_g5

0x909b,	// (0x0005f7e8) bg_button_pane_g6

0x90a3,	// (0x0005f7f0) bg_button_pane_g7

0x90b3,	// (0x0005f800) bg_button_pane_g8

0x90ab,	// (0x0005f7f8) bg_button_pane_g9

0x0008,

0xf83a,	// (0x00065f87) bg_button_pane_g

0xb729,	// (0x00061e76) common_borders_pane_ParamLimits

0xb729,	// (0x00061e76) common_borders_pane

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy1_ParamLimits

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy1

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy1_ParamLimits

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy1

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy1_ParamLimits

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy1

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy1_ParamLimits

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy1

0xb839,	// (0x00061f86) bg_eswt_ctrl_canvas_pane_g1

0xb729,	// (0x00061e76) common_borders_pane_cp2_ParamLimits

0xb729,	// (0x00061e76) common_borders_pane_cp2

0xb729,	// (0x00061e76) common_borders_pane_cp3_ParamLimits

0xb729,	// (0x00061e76) common_borders_pane_cp3

0xc247,	// (0x00062994) separator_horizontal_pane

0xc24f,	// (0x0006299c) separator_vertical_pane

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy2_ParamLimits

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy2

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy2_ParamLimits

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy2

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy2_ParamLimits

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy2

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy2_ParamLimits

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy2

0xe1d9,	// (0x00064926) common_borders_pane_cp4

0xc258,	// (0x000629a5) separator_horizontal_pane_g1

0xc261,	// (0x000629ae) separator_horizontal_pane_g2

0xc26a,	// (0x000629b7) separator_horizontal_pane_g3

0x0002,

0xfc05,	// (0x00066352) separator_horizontal_pane_g

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy3_ParamLimits

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy3

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy3_ParamLimits

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy3

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy3_ParamLimits

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy3

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy3_ParamLimits

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy3

0xe1d9,	// (0x00064926) common_borders_pane_cp5

0xc273,	// (0x000629c0) separator_vertical_pane_g1

0xc27c,	// (0x000629c9) separator_vertical_pane_g2

0xc285,	// (0x000629d2) separator_vertical_pane_g3

0x0002,

0xfc0c,	// (0x00066359) separator_vertical_pane_g

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy4_ParamLimits

0xc1cb,	// (0x00062918) eswt_control_pane_g1_copy4

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy4_ParamLimits

0xc1d8,	// (0x00062925) eswt_control_pane_g2_copy4

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy4_ParamLimits

0xc1e5,	// (0x00062932) eswt_control_pane_g3_copy4

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy4_ParamLimits

0xc1f2,	// (0x0006293f) eswt_control_pane_g4_copy4

0xc28e,	// (0x000629db) eswt_ctrl_combo_button_pane

0xc296,	// (0x000629e3) eswt_ctrl_input_pane

0xc29e,	// (0x000629eb) popup_choice_list_window_cp70

0xc2a6,	// (0x000629f3) eswt_ctrl_input_pane_t1

0xe1d9,	// (0x00064926) input_focus_pane_cp70

0xb729,	// (0x00061e76) bg_button_pane_cp70_ParamLimits

0xb729,	// (0x00061e76) bg_button_pane_cp70

0xc2b4,	// (0x00062a01) eswt_ctrl_combo_button_pane_g1

0xc2bc,	// (0x00062a09) wait_bar_pane_cp70

0x90ff,	// (0x0005f84c) bg_popup_window_pane_cp70_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_window_pane_cp70

0xc2c4,	// (0x00062a11) popup_eswt_tasktip_window_t1

0xc2da,	// (0x00062a27) wait_bar_pane_cp71_ParamLimits

0xc2da,	// (0x00062a27) wait_bar_pane_cp71

0xc2e6,	// (0x00062a33) grid_eswt_app_pane

0xf48f,	// (0x00065bdc) scroll_pane_cp70

0xc2ef,	// (0x00062a3c) cell_eswt_app_pane_ParamLimits

0xc2ef,	// (0x00062a3c) cell_eswt_app_pane

0xc31f,	// (0x00062a6c) cell_eswt_app_pane_g1_ParamLimits

0xc31f,	// (0x00062a6c) cell_eswt_app_pane_g1

0xc34e,	// (0x00062a9b) cell_eswt_app_pane_g2_ParamLimits

0xc34e,	// (0x00062a9b) cell_eswt_app_pane_g2

0x0001,

0xfc13,	// (0x00066360) cell_eswt_app_pane_g_ParamLimits

0xfc13,	// (0x00066360) cell_eswt_app_pane_g

0xc372,	// (0x00062abf) cell_eswt_app_pane_t1_ParamLimits

0xc372,	// (0x00062abf) cell_eswt_app_pane_t1

0xc3a4,	// (0x00062af1) grid_highlight_pane_cp70_ParamLimits

0xc3a4,	// (0x00062af1) grid_highlight_pane_cp70

0x15d5,	// (0x00057d22) set_content_pane_g1

0x6b8e,	// (0x0005d2db) status_small_volume_pane

0x8023,	// (0x0005e770) status_small_volume_pane_g1

0x802b,	// (0x0005e778) volume_small2_pane

0x8034,	// (0x0005e781) volume_small2_pane_g1

0x803d,	// (0x0005e78a) volume_small2_pane_g2

0x8046,	// (0x0005e793) volume_small2_pane_g3

0x804f,	// (0x0005e79c) volume_small2_pane_g4

0x8058,	// (0x0005e7a5) volume_small2_pane_g5

0x8061,	// (0x0005e7ae) volume_small2_pane_g6

0x806a,	// (0x0005e7b7) volume_small2_pane_g7

0x8073,	// (0x0005e7c0) volume_small2_pane_g8

0x807c,	// (0x0005e7c9) volume_small2_pane_g9

0x8085,	// (0x0005e7d2) volume_small2_pane_g10

0x0009,

0xfc18,	// (0x00066365) volume_small2_pane_g

0xbbf1,	// (0x0006233e) fep_vkb_top_text_pane_g1_ParamLimits

0xbc0c,	// (0x00062359) fep_vkb_top_text_pane_t1_ParamLimits

0xbe9b,	// (0x000625e8) popup_preview_fixed_window_g3_ParamLimits

0xbe9b,	// (0x000625e8) popup_preview_fixed_window_g3

0x724e,	// (0x0005d99b) popup_toolbar_trans_pane

0xa42d,	// (0x00060b7a) aid_height_set_list_ParamLimits

0xa43e,	// (0x00060b8b) aid_size_parent_ParamLimits

0xf51b,	// (0x00065c68) list_highlight_pane_cp2_ParamLimits

0x15d5,	// (0x00057d22) set_content_pane_g1_ParamLimits

0x7a5c,	// (0x0005e1a9) list_single_image_pane_ParamLimits

0x7a5c,	// (0x0005e1a9) list_single_image_pane

0xc3b0,	// (0x00062afd) aid_size_cell_image_ParamLimits

0xc3b0,	// (0x00062afd) aid_size_cell_image

0xc3bd,	// (0x00062b0a) grid_single_image_pane_ParamLimits

0xc3bd,	// (0x00062b0a) grid_single_image_pane

0x247c,	// (0x00058bc9) list_single_image_pane_g1_ParamLimits

0x247c,	// (0x00058bc9) list_single_image_pane_g1

0xbec9,	// (0x00062616) list_single_image_pane_g2_ParamLimits

0xbec9,	// (0x00062616) list_single_image_pane_g2

0x0001,

0xfc2d,	// (0x0006637a) list_single_image_pane_g_ParamLimits

0xfc2d,	// (0x0006637a) list_single_image_pane_g

0xc3c9,	// (0x00062b16) list_single_image_pane_t1_ParamLimits

0xc3c9,	// (0x00062b16) list_single_image_pane_t1

0xc3df,	// (0x00062b2c) cell_image_list_pane_ParamLimits

0xc3df,	// (0x00062b2c) cell_image_list_pane

0xc3f3,	// (0x00062b40) cell_image_list_pane_g1

0xc3fc,	// (0x00062b49) cell_image_list_pane_g2

0x0001,

0xfc32,	// (0x0006637f) cell_image_list_pane_g

0xc405,	// (0x00062b52) aid_size_cell_tb_trans_pane

0xf176,	// (0x000658c3) bg_tb_trans_pane

0xc417,	// (0x00062b64) grid_tb_trans_pane

0x9073,	// (0x0005f7c0) bg_tb_trans_pane_g1

0x9083,	// (0x0005f7d0) bg_tb_trans_pane_g2

0x907b,	// (0x0005f7c8) bg_tb_trans_pane_g3

0x9093,	// (0x0005f7e0) bg_tb_trans_pane_g4

0x908b,	// (0x0005f7d8) bg_tb_trans_pane_g5

0x90b3,	// (0x0005f800) bg_tb_trans_pane_g6

0x90ab,	// (0x0005f7f8) bg_tb_trans_pane_g7

0x909b,	// (0x0005f7e8) bg_tb_trans_pane_g8

0x90a3,	// (0x0005f7f0) bg_tb_trans_pane_g9

0x0008,

0xfc37,	// (0x00066384) bg_tb_trans_pane_g

0xc42b,	// (0x00062b78) cell_toolbar_trans_pane_ParamLimits

0xc42b,	// (0x00062b78) cell_toolbar_trans_pane

0xb839,	// (0x00061f86) cell_toolbar_trans_pane_g1

0xb336,	// (0x00061a83) list_form2_midp_pane_t1

0xb344,	// (0x00061a91) list_form2_midp_pane_t2

0x0001,

0xfad4,	// (0x00066221) list_form2_midp_pane_t

0xb352,	// (0x00061a9f) scroll_pane_cp51_ParamLimits

0xb50e,	// (0x00061c5b) form2_midp_wait_pane_g1

0xb517,	// (0x00061c64) form2_midp_wait_pane_g2

0xb520,	// (0x00061c6d) form2_midp_wait_pane_g3

0x0002,

0xfae9,	// (0x00066236) form2_midp_wait_pane_g

0xe23b,	// (0x00064988) list_highlight_pane_cp21_ParamLimits

0xb568,	// (0x00061cb5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb577,	// (0x00061cc4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa651,	// (0x00060d9e) list_single_2graphic_im_pane_ParamLimits

0xa651,	// (0x00060d9e) list_single_2graphic_im_pane

0xc451,	// (0x00062b9e) list_single_2graphic_im_pane_g1_ParamLimits

0xc451,	// (0x00062b9e) list_single_2graphic_im_pane_g1

0xc462,	// (0x00062baf) list_single_2graphic_im_pane_g2_ParamLimits

0xc462,	// (0x00062baf) list_single_2graphic_im_pane_g2

0xc46e,	// (0x00062bbb) list_single_2graphic_im_pane_g3_ParamLimits

0xc46e,	// (0x00062bbb) list_single_2graphic_im_pane_g3

0x0003,

0xfc4a,	// (0x00066397) list_single_2graphic_im_pane_g_ParamLimits

0xfc4a,	// (0x00066397) list_single_2graphic_im_pane_g

0xc48e,	// (0x00062bdb) list_single_2graphic_im_pane_t1_ParamLimits

0xc48e,	// (0x00062bdb) list_single_2graphic_im_pane_t1

0xbea7,	// (0x000625f4) list_single_graphic_2heading_pane_fp_ParamLimits

0xbea7,	// (0x000625f4) list_single_graphic_2heading_pane_fp

0x3f35,	// (0x0005a682) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3f35,	// (0x0005a682) list_single_graphic_2heading_pane_fp_g1

0xbebd,	// (0x0006260a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbebd,	// (0x0006260a) list_single_graphic_2heading_pane_fp_g2

0x247c,	// (0x00058bc9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x247c,	// (0x00058bc9) list_single_graphic_2heading_pane_fp_g3

0xbec9,	// (0x00062616) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbec9,	// (0x00062616) list_single_graphic_2heading_pane_fp_g4

0xbedd,	// (0x0006262a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbedd,	// (0x0006262a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb71,	// (0x000662be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb71,	// (0x000662be) list_single_graphic_2heading_pane_fp_g

0x4053,	// (0x0005a7a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4053,	// (0x0005a7a0) list_single_graphic_2heading_pane_fp_t1

0x3f6d,	// (0x0005a6ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f6d,	// (0x0005a6ba) list_single_graphic_2heading_pane_fp_t2

0x4069,	// (0x0005a7b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4069,	// (0x0005a7b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc53,	// (0x000663a0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc53,	// (0x000663a0) list_single_graphic_2heading_pane_fp_t

0xb8c5,	// (0x00062012) fep_hwr_write_pane_g5_ParamLimits

0xb8c5,	// (0x00062012) fep_hwr_write_pane_g5

0xb8d1,	// (0x0006201e) fep_hwr_write_pane_g6_ParamLimits

0xb8d1,	// (0x0006201e) fep_hwr_write_pane_g6

0xc19a,	// (0x000628e7) eswt_shell_pane_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_window_pane_cp18_ParamLimits

0x94f2,	// (0x0005fc3f) heading_pane_cp70

0xc2c4,	// (0x00062a11) popup_eswt_tasktip_window_t1_ParamLimits

0x736d,	// (0x0005daba) aid_touch_tab_arrow_left

0x737c,	// (0x0005dac9) aid_touch_tab_arrow_right

0x55d6,	// (0x0005bd23) title_pane_g3_ParamLimits

0x55d6,	// (0x0005bd23) title_pane_g3

0xf13e,	// (0x0006588b) set_value_pane_g1

0x724e,	// (0x0005d99b) popup_toolbar_trans_pane_ParamLimits

0xc405,	// (0x00062b52) aid_size_cell_tb_trans_pane_ParamLimits

0xf176,	// (0x000658c3) bg_tb_trans_pane_ParamLimits

0xc417,	// (0x00062b64) grid_tb_trans_pane_ParamLimits

0xe373,	// (0x00064ac0) cont_note_pane_ParamLimits

0xe373,	// (0x00064ac0) cont_note_pane

0xe4f3,	// (0x00064c40) cont_snote2_single_text_pane_ParamLimits

0xe4f3,	// (0x00064c40) cont_snote2_single_text_pane

0xe4f3,	// (0x00064c40) cont_snote2_single_graphic_pane_ParamLimits

0xe4f3,	// (0x00064c40) cont_snote2_single_graphic_pane

0x9719,	// (0x0005fe66) cont_note_wait_pane_ParamLimits

0x9719,	// (0x0005fe66) cont_note_wait_pane

0x9719,	// (0x0005fe66) cont_note_image_pane_ParamLimits

0x9719,	// (0x0005fe66) cont_note_image_pane

0xc4bf,	// (0x00062c0c) popup_note2_window_g1_ParamLimits

0xc4bf,	// (0x00062c0c) popup_note2_window_g1

0xc4f0,	// (0x00062c3d) popup_note2_window_t1_ParamLimits

0xc4f0,	// (0x00062c3d) popup_note2_window_t1

0xc535,	// (0x00062c82) popup_note2_window_t2_ParamLimits

0xc535,	// (0x00062c82) popup_note2_window_t2

0xc57a,	// (0x00062cc7) popup_note2_window_t3_ParamLimits

0xc57a,	// (0x00062cc7) popup_note2_window_t3

0xc5bf,	// (0x00062d0c) popup_note2_window_t4_ParamLimits

0xc5bf,	// (0x00062d0c) popup_note2_window_t4

0xe3f7,	// (0x00064b44) popup_note2_window_t5_ParamLimits

0xe3f7,	// (0x00064b44) popup_note2_window_t5

0x0004,

0xfc5f,	// (0x000663ac) popup_note2_window_t_ParamLimits

0xfc5f,	// (0x000663ac) popup_note2_window_t

0xc5ee,	// (0x00062d3b) popup_note2_image_window_g1_ParamLimits

0xc5ee,	// (0x00062d3b) popup_note2_image_window_g1

0xc5fa,	// (0x00062d47) popup_note2_image_window_g2_ParamLimits

0xc5fa,	// (0x00062d47) popup_note2_image_window_g2

0x0001,

0xfc6a,	// (0x000663b7) popup_note2_image_window_g_ParamLimits

0xfc6a,	// (0x000663b7) popup_note2_image_window_g

0xc60c,	// (0x00062d59) popup_note2_image_window_t1_ParamLimits

0xc60c,	// (0x00062d59) popup_note2_image_window_t1

0xc624,	// (0x00062d71) popup_note2_image_window_t2_ParamLimits

0xc624,	// (0x00062d71) popup_note2_image_window_t2

0xc63c,	// (0x00062d89) popup_note2_image_window_t3_ParamLimits

0xc63c,	// (0x00062d89) popup_note2_image_window_t3

0x0002,

0xfc6f,	// (0x000663bc) popup_note2_image_window_t_ParamLimits

0xfc6f,	// (0x000663bc) popup_note2_image_window_t

0x9727,	// (0x0005fe74) popup_note2_wait_window_g1_ParamLimits

0x9727,	// (0x0005fe74) popup_note2_wait_window_g1

0x9733,	// (0x0005fe80) popup_note2_wait_window_g2_ParamLimits

0x9733,	// (0x0005fe80) popup_note2_wait_window_g2

0x973f,	// (0x0005fe8c) popup_note2_wait_window_g3_ParamLimits

0x973f,	// (0x0005fe8c) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x00065f69) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x00065f69) popup_note2_wait_window_g

0xc658,	// (0x00062da5) popup_note2_wait_window_t1_ParamLimits

0xc658,	// (0x00062da5) popup_note2_wait_window_t1

0xc676,	// (0x00062dc3) popup_note2_wait_window_t2_ParamLimits

0xc676,	// (0x00062dc3) popup_note2_wait_window_t2

0xc694,	// (0x00062de1) popup_note2_wait_window_t3_ParamLimits

0xc694,	// (0x00062de1) popup_note2_wait_window_t3

0xc6a6,	// (0x00062df3) popup_note2_wait_window_t4_ParamLimits

0xc6a6,	// (0x00062df3) popup_note2_wait_window_t4

0x0003,

0xfc76,	// (0x000663c3) popup_note2_wait_window_t_ParamLimits

0xfc76,	// (0x000663c3) popup_note2_wait_window_t

0xc6b8,	// (0x00062e05) wait_bar2_pane_ParamLimits

0xc6b8,	// (0x00062e05) wait_bar2_pane

0xc6d0,	// (0x00062e1d) popup_snote2_single_text_window_g1_ParamLimits

0xc6d0,	// (0x00062e1d) popup_snote2_single_text_window_g1

0xc6f8,	// (0x00062e45) popup_snote2_single_text_window_t1_ParamLimits

0xc6f8,	// (0x00062e45) popup_snote2_single_text_window_t1

0xc744,	// (0x00062e91) popup_snote2_single_text_window_t2_ParamLimits

0xc744,	// (0x00062e91) popup_snote2_single_text_window_t2

0xc790,	// (0x00062edd) popup_snote2_single_text_window_t3_ParamLimits

0xc790,	// (0x00062edd) popup_snote2_single_text_window_t3

0xc7d1,	// (0x00062f1e) popup_snote2_single_text_window_t4_ParamLimits

0xc7d1,	// (0x00062f1e) popup_snote2_single_text_window_t4

0xc807,	// (0x00062f54) popup_snote2_single_text_window_t5_ParamLimits

0xc807,	// (0x00062f54) popup_snote2_single_text_window_t5

0x0004,

0xfc7f,	// (0x000663cc) popup_snote2_single_text_window_t_ParamLimits

0xfc7f,	// (0x000663cc) popup_snote2_single_text_window_t

0xc832,	// (0x00062f7f) popup_snote2_single_graphic_window_g1_ParamLimits

0xc832,	// (0x00062f7f) popup_snote2_single_graphic_window_g1

0xc85a,	// (0x00062fa7) popup_snote2_single_graphic_window_g2_ParamLimits

0xc85a,	// (0x00062fa7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8a,	// (0x000663d7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8a,	// (0x000663d7) popup_snote2_single_graphic_window_g

0xc882,	// (0x00062fcf) popup_snote2_single_graphic_window_t1_ParamLimits

0xc882,	// (0x00062fcf) popup_snote2_single_graphic_window_t1

0xc8ce,	// (0x0006301b) popup_snote2_single_graphic_window_t2_ParamLimits

0xc8ce,	// (0x0006301b) popup_snote2_single_graphic_window_t2

0xc790,	// (0x00062edd) popup_snote2_single_graphic_window_t3_ParamLimits

0xc790,	// (0x00062edd) popup_snote2_single_graphic_window_t3

0xc7d1,	// (0x00062f1e) popup_snote2_single_graphic_window_t4_ParamLimits

0xc7d1,	// (0x00062f1e) popup_snote2_single_graphic_window_t4

0xc807,	// (0x00062f54) popup_snote2_single_graphic_window_t5_ParamLimits

0xc807,	// (0x00062f54) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8f,	// (0x000663dc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8f,	// (0x000663dc) popup_snote2_single_graphic_window_t

0xb20f,	// (0x0006195c) clock_nsta_pane_cp2_t1

0xb20f,	// (0x0006195c) clock_nsta_pane_cp2_t2

0x0001,

0xfaaa,	// (0x000661f7) clock_nsta_pane_cp2_t

0x3ad6,	// (0x0005a223) form_field_data_wide_pane_g1_ParamLimits

0xf184,	// (0x000658d1) form_field_data_wide_pane_g2_ParamLimits

0xf184,	// (0x000658d1) form_field_data_wide_pane_g2

0xf190,	// (0x000658dd) form_field_data_wide_pane_g3_ParamLimits

0xf190,	// (0x000658dd) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x00065d9c) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x00065d9c) form_field_data_wide_pane_g

0xb0eb,	// (0x00061838) grid_touch_3_pane_ParamLimits

0xb0eb,	// (0x00061838) grid_touch_3_pane

0xc91a,	// (0x00063067) cell_touch_3_pane_ParamLimits

0xc91a,	// (0x00063067) cell_touch_3_pane

0xb839,	// (0x00061f86) cell_touch_3_pane_g1

0xb839,	// (0x00061f86) cell_touch_3_pane_g2

0x0001,

0xfb2f,	// (0x0006627c) cell_touch_3_pane_g

0xe429,	// (0x00064b76) cont_query_data_pane

0xe431,	// (0x00064b7e) cont_query_data_pane_cp1

0xc948,	// (0x00063095) button_value_adjust_pane_cp7

0xc950,	// (0x0006309d) query_popup_pane_cp3

0x12d2,	// (0x00057a1f) bg_popup_sub_pane_cp22_ParamLimits

0x6660,	// (0x0005cdad) navi_navi_volume_pane_cp2

0x6678,	// (0x0005cdc5) popup_side_volume_key_window_g2

0x6684,	// (0x0005cdd1) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x00065e32) popup_side_volume_key_window_g

0x669e,	// (0x0005cdeb) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x00065e39) popup_side_volume_key_window_t

0x694c,	// (0x0005d099) popup_side_volume_key_window_ParamLimits

0x5d19,	// (0x0005c466) list_double_graphic_pane_g4_ParamLimits

0x5d19,	// (0x0005c466) list_double_graphic_pane_g4

0xa690,	// (0x00060ddd) list_single_2heading_msg_pane_ParamLimits

0xa690,	// (0x00060ddd) list_single_2heading_msg_pane

0xb7d4,	// (0x00061f21) list_single_2heading_msg_pane_g1_ParamLimits

0xb7d4,	// (0x00061f21) list_single_2heading_msg_pane_g1

0x4666,	// (0x0005adb3) list_single_2heading_msg_pane_g2_ParamLimits

0x4666,	// (0x0005adb3) list_single_2heading_msg_pane_g2

0xb7e0,	// (0x00061f2d) list_single_2heading_msg_pane_g3_ParamLimits

0xb7e0,	// (0x00061f2d) list_single_2heading_msg_pane_g3

0xb7ec,	// (0x00061f39) list_single_2heading_msg_pane_g4_ParamLimits

0xb7ec,	// (0x00061f39) list_single_2heading_msg_pane_g4

0x0003,

0xfc9a,	// (0x000663e7) list_single_2heading_msg_pane_g_ParamLimits

0xfc9a,	// (0x000663e7) list_single_2heading_msg_pane_g

0x808e,	// (0x0005e7db) list_single_2heading_msg_pane_t1_ParamLimits

0x808e,	// (0x0005e7db) list_single_2heading_msg_pane_t1

0x80b6,	// (0x0005e803) list_single_2heading_msg_pane_t2_ParamLimits

0x80b6,	// (0x0005e803) list_single_2heading_msg_pane_t2

0x80e5,	// (0x0005e832) list_single_2heading_msg_pane_t3_ParamLimits

0x80e5,	// (0x0005e832) list_single_2heading_msg_pane_t3

0x4089,	// (0x0005a7d6) list_single_2heading_msg_pane_t4_ParamLimits

0x4089,	// (0x0005a7d6) list_single_2heading_msg_pane_t4

0x0003,

0xfca3,	// (0x000663f0) list_single_2heading_msg_pane_t_ParamLimits

0xfca3,	// (0x000663f0) list_single_2heading_msg_pane_t

0xe1f7,	// (0x00064944) title_pane_g4_ParamLimits

0xe1f7,	// (0x00064944) title_pane_g4

0x62a3,	// (0x0005c9f0) title_pane_stacon_g3_ParamLimits

0x62a3,	// (0x0005c9f0) title_pane_stacon_g3

0xc482,	// (0x00062bcf) list_single_2graphic_im_pane_g4_ParamLimits

0xc482,	// (0x00062bcf) list_single_2graphic_im_pane_g4

0xa160,	// (0x000608ad) popup_side_volume_key_window_cp

0xa9c1,	// (0x0006110e) main_idle_act2_pane_t1

0x766d,	// (0x0005ddba) toolbar_button_pane_g10

0x5b91,	// (0x0005c2de) popup_toolbar_window_cp1

0xb200,	// (0x0006194d) clock_nsta_pane_cp_t1

0xb200,	// (0x0006194d) clock_nsta_pane_cp_t2

0x0001,

0xfaa5,	// (0x000661f2) clock_nsta_pane_cp_t

0x6660,	// (0x0005cdad) navi_navi_volume_pane_cp2_ParamLimits

0x666c,	// (0x0005cdb9) popup_side_volume_key_window_g1_ParamLimits

0x6678,	// (0x0005cdc5) popup_side_volume_key_window_g2_ParamLimits

0x6684,	// (0x0005cdd1) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x00065e32) popup_side_volume_key_window_g_ParamLimits

0x7c44,	// (0x0005e391) fep_hwr_aid_pane

0x7ceb,	// (0x0005e438) bg_fep_hwr_top_pane_g4_ParamLimits

0xb895,	// (0x00061fe2) fep_hwr_top_pane_g1_ParamLimits

0xb8a7,	// (0x00061ff4) fep_hwr_top_pane_g2_ParamLimits

0x7d0b,	// (0x0005e458) fep_hwr_top_pane_g3_ParamLimits

0xfafa,	// (0x00066247) fep_hwr_top_pane_g_ParamLimits

0x7d20,	// (0x0005e46d) fep_hwr_top_text_pane_ParamLimits

0x9f23,	// (0x00060670) aid_touch_tab_arrow_arrow_2

0x9f2c,	// (0x00060679) aid_touch_tab_arrow_left_2

0x7c58,	// (0x0005e3a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c8f,	// (0x0005e3dc) fep_hwr_prediction_pane

0xba00,	// (0x0006214d) fep_vkb_prediction_pane

0xbafd,	// (0x0006224a) fep_vkb_side_pane_g3_ParamLimits

0xbafd,	// (0x0006224a) fep_vkb_side_pane_g3

0x7e9b,	// (0x0005e5e8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7f07,	// (0x0005e654) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7f14,	// (0x0005e661) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba9,	// (0x000662f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x811e,	// (0x0005e86b) fep_hwr_prediction_pane_g1

0x8128,	// (0x0005e875) fep_hwr_prediction_pane_g2

0x8130,	// (0x0005e87d) fep_hwr_prediction_pane_g3

0x8138,	// (0x0005e885) fep_hwr_prediction_pane_g4

0x0003,

0xfcac,	// (0x000663f9) fep_hwr_prediction_pane_g

0xc975,	// (0x000630c2) fep_vkb_prediction_pane_g1

0xc97f,	// (0x000630cc) fep_vkb_prediction_pane_g2

0xc987,	// (0x000630d4) fep_vkb_prediction_pane_g3

0xc98f,	// (0x000630dc) fep_vkb_prediction_pane_g4

0x0003,

0xfcb5,	// (0x00066402) fep_vkb_prediction_pane_g

0x799b,	// (0x0005e0e8) slider_set_pane_g3

0x79af,	// (0x0005e0fc) slider_set_pane_g4

0x79c7,	// (0x0005e114) slider_set_pane_g5

0x799b,	// (0x0005e0e8) slider_set_pane_g6

0x79dd,	// (0x0005e12a) slider_set_pane_g7

0xa59f,	// (0x00060cec) slider_form_pane_g3

0xa5a8,	// (0x00060cf5) slider_form_pane_g4

0xa5b0,	// (0x00060cfd) slider_form_pane_g5

0xa59f,	// (0x00060cec) slider_form_pane_g6

0xa5b8,	// (0x00060d05) slider_form_pane_g7

0xac6d,	// (0x000613ba) slider_set_pane_vc_g3

0xac76,	// (0x000613c3) slider_set_pane_vc_g4

0xac7f,	// (0x000613cc) slider_set_pane_vc_g5

0xac6d,	// (0x000613ba) slider_set_pane_vc_g6

0xac88,	// (0x000613d5) slider_set_pane_vc_g7

0xaebe,	// (0x0006160b) slider_form_pane_vc_g1

0xaec7,	// (0x00061614) slider_form_pane_vc_g2

0xaed0,	// (0x0006161d) slider_form_pane_vc_g3

0xaebe,	// (0x0006160b) slider_form_pane_vc_g4

0xaed9,	// (0x00061626) slider_form_pane_vc_g5

0x0004,

0xfa77,	// (0x000661c4) slider_form_pane_vc_g

0x536d,	// (0x0005baba) main_idle_act3_pane

0xc997,	// (0x000630e4) ai3_links_pane

0xc9a0,	// (0x000630ed) popup_ai3_data_window_ParamLimits

0xc9a0,	// (0x000630ed) popup_ai3_data_window

0xe1d9,	// (0x00064926) grid_ai3_links_pane

0xc9b8,	// (0x00063105) cell_ai3_links_pane_ParamLimits

0xc9b8,	// (0x00063105) cell_ai3_links_pane

0xc9d0,	// (0x0006311d) bg_popup_sub_pane_cp11

0xc9dd,	// (0x0006312a) cell_ai3_links_pane_g1

0xe1d9,	// (0x00064926) bg_popup_sub_pane_cp12

0xca02,	// (0x0006314f) heading_ai3_data_pane

0xca0a,	// (0x00063157) list_ai3_gene_pane

0xca16,	// (0x00063163) popup_ai3_data_window_g1

0xca1e,	// (0x0006316b) heading_ai3_data_pane_g1

0xca26,	// (0x00063173) heading_ai3_data_pane_t1

0xca34,	// (0x00063181) list_double_ai3_gene_pane_ParamLimits

0xca34,	// (0x00063181) list_double_ai3_gene_pane

0xca41,	// (0x0006318e) list_single_ai3_gene_pane_ParamLimits

0xca41,	// (0x0006318e) list_single_ai3_gene_pane

0xb729,	// (0x00061e76) list_highlight_pane_cp7_ParamLimits

0xb729,	// (0x00061e76) list_highlight_pane_cp7

0xca4e,	// (0x0006319b) list_single_a13_gene_pane_t1_ParamLimits

0xca4e,	// (0x0006319b) list_single_a13_gene_pane_t1

0xca65,	// (0x000631b2) list_single_ai3_gene_pane_g1

0xca6e,	// (0x000631bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcbe,	// (0x0006640b) list_single_ai3_gene_pane_g

0xca76,	// (0x000631c3) list_double_ai3_gene_pane_g1_ParamLimits

0xca76,	// (0x000631c3) list_double_ai3_gene_pane_g1

0xca82,	// (0x000631cf) list_double_ai3_gene_pane_t1_ParamLimits

0xca82,	// (0x000631cf) list_double_ai3_gene_pane_t1

0xca9e,	// (0x000631eb) list_double_ai3_gene_pane_t2_ParamLimits

0xca9e,	// (0x000631eb) list_double_ai3_gene_pane_t2

0xcab3,	// (0x00063200) list_double_ai3_gene_pane_t3_ParamLimits

0xcab3,	// (0x00063200) list_double_ai3_gene_pane_t3

0x0002,

0xfcc3,	// (0x00066410) list_double_ai3_gene_pane_t_ParamLimits

0xfcc3,	// (0x00066410) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x407f,	// (0x0005a7cc) aid_size_min_col_2

0xc961,	// (0x000630ae) aid_size_min_msg_ParamLimits

0xc961,	// (0x000630ae) aid_size_min_msg

0xbbfd,	// (0x0006234a) fep_vkb_top_text_pane_g2_ParamLimits

0xbbfd,	// (0x0006234a) fep_vkb_top_text_pane_g2

0x0001,

0xfb2a,	// (0x00066277) fep_vkb_top_text_pane_g_ParamLimits

0xfb2a,	// (0x00066277) fep_vkb_top_text_pane_g

0x536d,	// (0x0005baba) main_hc_apps_shell_pane

0xcad0,	// (0x0006321d) grid_hc_apps_pane_ParamLimits

0xcad0,	// (0x0006321d) grid_hc_apps_pane

0xcae2,	// (0x0006322f) list_hc_apps_pane

0xcaea,	// (0x00063237) scroll_pane_cp37_ParamLimits

0xcaea,	// (0x00063237) scroll_pane_cp37

0xcaf6,	// (0x00063243) cell_hc_apps_pane_ParamLimits

0xcaf6,	// (0x00063243) cell_hc_apps_pane

0xcba4,	// (0x000632f1) cell_hc_apps_pane_g1_ParamLimits

0xcba4,	// (0x000632f1) cell_hc_apps_pane_g1

0xcbd4,	// (0x00063321) cell_hc_apps_pane_g2_ParamLimits

0xcbd4,	// (0x00063321) cell_hc_apps_pane_g2

0xcbf0,	// (0x0006333d) cell_hc_apps_pane_g3_ParamLimits

0xcbf0,	// (0x0006333d) cell_hc_apps_pane_g3

0x0002,

0xfcca,	// (0x00066417) cell_hc_apps_pane_g_ParamLimits

0xfcca,	// (0x00066417) cell_hc_apps_pane_g

0xcc12,	// (0x0006335f) cell_hc_apps_pane_t1_ParamLimits

0xcc12,	// (0x0006335f) cell_hc_apps_pane_t1

0xe373,	// (0x00064ac0) grid_highlight_pane_cp10_ParamLimits

0xe373,	// (0x00064ac0) grid_highlight_pane_cp10

0xcc52,	// (0x0006339f) list_single_hc_apps_pane_ParamLimits

0xcc52,	// (0x0006339f) list_single_hc_apps_pane

0xccb5,	// (0x00063402) list_single_hc_apps_pane_g1

0xb804,	// (0x00061f51) list_single_hc_apps_pane_g2

0x0001,

0xfcd1,	// (0x0006641e) list_single_hc_apps_pane_g

0xb81d,	// (0x00061f6a) list_single_hc_apps_pane_g2_copy1

0x8140,	// (0x0005e88d) list_single_hc_apps_pane_t1

0xe23b,	// (0x00064988) bg_set_opt_pane_cp_ParamLimits

0x5686,	// (0x0005bdd3) setting_slider_pane_t1_ParamLimits

0x569f,	// (0x0005bdec) setting_slider_pane_t2_ParamLimits

0x56b9,	// (0x0005be06) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00065c84) setting_slider_pane_t_ParamLimits

0x56d1,	// (0x0005be1e) slider_set_pane_ParamLimits

0x6c0c,	// (0x0005d359) control_pane_g5_ParamLimits

0x6c0c,	// (0x0005d359) control_pane_g5

0xa3f2,	// (0x00060b3f) slider_set_pane_g1_ParamLimits

0x798f,	// (0x0005e0dc) slider_set_pane_g2_ParamLimits

0x799b,	// (0x0005e0e8) slider_set_pane_g3_ParamLimits

0x79af,	// (0x0005e0fc) slider_set_pane_g4_ParamLimits

0x79c7,	// (0x0005e114) slider_set_pane_g5_ParamLimits

0x799b,	// (0x0005e0e8) slider_set_pane_g6_ParamLimits

0x79dd,	// (0x0005e12a) slider_set_pane_g7_ParamLimits

0xf938,	// (0x00066085) slider_set_pane_g_ParamLimits

0x1580,	// (0x00057ccd) navi_icon_text_pane_ParamLimits

0x732e,	// (0x0005da7b) aid_fill_nsta_2_ParamLimits

0x736d,	// (0x0005daba) aid_touch_tab_arrow_left_ParamLimits

0x737c,	// (0x0005dac9) aid_touch_tab_arrow_right_ParamLimits

0x73e9,	// (0x0005db36) clock_nsta_pane_ParamLimits

0x9f05,	// (0x00060652) navi_icon_pane_g1_ParamLimits

0x9f11,	// (0x0006065e) navi_text_pane_t1_ParamLimits

0xb310,	// (0x00061a5d) navi_icon_text_pane_g1_ParamLimits

0xb31c,	// (0x00061a69) navi_icon_text_pane_t1_ParamLimits

0xccb5,	// (0x00063402) list_single_hc_apps_pane_g1_ParamLimits

0xb804,	// (0x00061f51) list_single_hc_apps_pane_g2_ParamLimits

0xfcd1,	// (0x0006641e) list_single_hc_apps_pane_g_ParamLimits

0xb81d,	// (0x00061f6a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8140,	// (0x0005e88d) list_single_hc_apps_pane_t1_ParamLimits

0x54ca,	// (0x0005bc17) popup_toolbar2_fixed_window_ParamLimits

0x54ca,	// (0x0005bc17) popup_toolbar2_fixed_window

0x7244,	// (0x0005d991) popup_toolbar2_float_window

0xe1d9,	// (0x00064926) bg_popup_sub_pane_cp27

0xccce,	// (0x0006341b) grid_toolbar2_float_pane

0xe1d9,	// (0x00064926) bg_popup_sub_pane_cp26

0xccce,	// (0x0006341b) grid_toolbar2_fixed_pane

0xccd6,	// (0x00063423) cell_toolbar2_fixed_pane_ParamLimits

0xccd6,	// (0x00063423) cell_toolbar2_fixed_pane

0xcce6,	// (0x00063433) cell_toolbar2_fixed_pane_g1

0x7116,	// (0x0005d863) toolbar2_fixed_button_pane

0x9073,	// (0x0005f7c0) toolbar2_fixed_button_pane_g1

0x9083,	// (0x0005f7d0) toolbar2_fixed_button_pane_g2

0x907b,	// (0x0005f7c8) toolbar2_fixed_button_pane_g3

0x9093,	// (0x0005f7e0) toolbar2_fixed_button_pane_g4

0x908b,	// (0x0005f7d8) toolbar2_fixed_button_pane_g5

0x909b,	// (0x0005f7e8) toolbar2_fixed_button_pane_g6

0x90a3,	// (0x0005f7f0) toolbar2_fixed_button_pane_g7

0x90b3,	// (0x0005f800) toolbar2_fixed_button_pane_g8

0x90ab,	// (0x0005f7f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x00065f87) toolbar2_fixed_button_pane_g

0xccef,	// (0x0006343c) cell_toolbar2_float_pane_ParamLimits

0xccef,	// (0x0006343c) cell_toolbar2_float_pane

0xcd00,	// (0x0006344d) cell_toolbar2_float_pane_g1

0x7116,	// (0x0005d863) toolbar2_fixed_button_pane_cp

0xb967,	// (0x000620b4) fep_vkb_accented_list_pane_ParamLimits

0xb967,	// (0x000620b4) fep_vkb_accented_list_pane

0x7e7b,	// (0x0005e5c8) bg_popup_fep_shadow_pane_g9

0x16d3,	// (0x00057e20) bg_popup_fep_shadow_pane_cp3

0xf28f,	// (0x000659dc) list_accented_list_pane

0xcd09,	// (0x00063456) list_single_accented_list_pane_ParamLimits

0xcd09,	// (0x00063456) list_single_accented_list_pane

0x16d3,	// (0x00057e20) list_highlight_pane_cp10

0xcd1a,	// (0x00063467) list_single_accented_list_pane_t1

0x7194,	// (0x0005d8e1) popup_slider_window_ParamLimits

0x7194,	// (0x0005d8e1) popup_slider_window

0xc958,	// (0x000630a5) aid_indentation_list_msg

0xcdd8,	// (0x00063525) bg_popup_window_pane_cp19

0xce40,	// (0x0006358d) popup_slider_window_g1

0xce5c,	// (0x000635a9) popup_slider_window_g2

0xce78,	// (0x000635c5) popup_slider_window_g3

0x0005,

0xfcd6,	// (0x00066423) popup_slider_window_g

0xcede,	// (0x0006362b) popup_slider_window_t1

0xcf52,	// (0x0006369f) small_volume_slider_vertical_pane

0xb839,	// (0x00061f86) small_volume_slider_vertical_pane_g1

0xb839,	// (0x00061f86) small_volume_slider_vertical_pane_g2

0xcf6e,	// (0x000636bb) small_volume_slider_vertical_pane_g3

0x0002,

0xfce8,	// (0x00066435) small_volume_slider_vertical_pane_g

0x528a,	// (0x0005b9d7) area_side_right_pane_ParamLimits

0x528a,	// (0x0005b9d7) area_side_right_pane

0x816e,	// (0x0005e8bb) aid_size_side_button_ParamLimits

0x816e,	// (0x0005e8bb) aid_size_side_button

0x8182,	// (0x0005e8cf) grid_sctrl_middle_pane_ParamLimits

0x8182,	// (0x0005e8cf) grid_sctrl_middle_pane

0x81a1,	// (0x0005e8ee) sctrl_sk_bottom_pane

0x81b2,	// (0x0005e8ff) sctrl_sk_top_pane

0x81c4,	// (0x0005e911) aid_touch_sctrl_top

0x81d1,	// (0x0005e91e) bg_sctrl_sk_pane_ParamLimits

0x81d1,	// (0x0005e91e) bg_sctrl_sk_pane

0x81df,	// (0x0005e92c) sctrl_sk_top_pane_g1

0x81ec,	// (0x0005e939) sctrl_sk_top_pane_t1

0x81c4,	// (0x0005e911) aid_touch_sctrl_bottom

0x81d1,	// (0x0005e91e) bg_sctrl_sk_pane_cp_ParamLimits

0x81d1,	// (0x0005e91e) bg_sctrl_sk_pane_cp

0x8207,	// (0x0005e954) sctrl_sk_bottom_pane_g1

0x81ec,	// (0x0005e939) sctrl_sk_bottom_pane_t1

0x8210,	// (0x0005e95d) cell_sctrl_middle_pane_ParamLimits

0x8210,	// (0x0005e95d) cell_sctrl_middle_pane

0x822b,	// (0x0005e978) aid_touch_sctrl_middle_ParamLimits

0x822b,	// (0x0005e978) aid_touch_sctrl_middle

0x823d,	// (0x0005e98a) bg_sctrl_middle_pane_ParamLimits

0x823d,	// (0x0005e98a) bg_sctrl_middle_pane

0x7e9b,	// (0x0005e5e8) cell_sctrl_middle_pane_g1_ParamLimits

0x7e9b,	// (0x0005e5e8) cell_sctrl_middle_pane_g1

0x824b,	// (0x0005e998) cell_sctrl_middle_pane_g2_ParamLimits

0x824b,	// (0x0005e998) cell_sctrl_middle_pane_g2

0x0001,

0xfcf4,	// (0x00066441) cell_sctrl_middle_pane_g_ParamLimits

0xfcf4,	// (0x00066441) cell_sctrl_middle_pane_g

0x9073,	// (0x0005f7c0) bg_sctrl_middle_pane_g1

0x907b,	// (0x0005f7c8) bg_sctrl_middle_pane_g2

0x9083,	// (0x0005f7d0) bg_sctrl_middle_pane_g3

0x908b,	// (0x0005f7d8) bg_sctrl_middle_pane_g4

0x9093,	// (0x0005f7e0) bg_sctrl_middle_pane_g5

0x909b,	// (0x0005f7e8) bg_sctrl_middle_pane_g6

0x90a3,	// (0x0005f7f0) bg_sctrl_middle_pane_g7

0x90ab,	// (0x0005f7f8) bg_sctrl_middle_pane_g8

0x0007,

0xfcf9,	// (0x00066446) bg_sctrl_middle_pane_g

0x90b3,	// (0x0005f800) bg_sctrl_middle_pane_g8_copy1

0x9073,	// (0x0005f7c0) bg_sctrl_sk_pane_g1

0x9083,	// (0x0005f7d0) bg_sctrl_sk_pane_g2

0x907b,	// (0x0005f7c8) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x00065f87) bg_sctrl_sk_pane_g

0xf0b8,	// (0x00065805) aid_size_touch_scroll_bar

0x9093,	// (0x0005f7e0) bg_sctrl_sk_pane_g4

0x908b,	// (0x0005f7d8) bg_sctrl_sk_pane_g5

0x909b,	// (0x0005f7e8) bg_sctrl_sk_pane_g6

0x90a3,	// (0x0005f7f0) bg_sctrl_sk_pane_g7

0x90b3,	// (0x0005f800) bg_sctrl_sk_pane_g8

0x90ab,	// (0x0005f7f8) bg_sctrl_sk_pane_g9

0x6dfd,	// (0x0005d54a) popup_fep_china_hwr2_fs_candidate_window

0x6e07,	// (0x0005d554) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e07,	// (0x0005d554) popup_fep_china_hwr2_fs_control_window

0x7e9b,	// (0x0005e5e8) sctrl_sk_top_pane_g2

0x0001,

0xfcef,	// (0x0006643c) sctrl_sk_top_pane_g

0xcf77,	// (0x000636c4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf77,	// (0x000636c4) aid_fep_china_hwr2_fs_cell

0xcf89,	// (0x000636d6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf89,	// (0x000636d6) bg_popup_fep_shadow_pane_cp4

0xcfa0,	// (0x000636ed) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcfa0,	// (0x000636ed) bg_popup_fep_shadow_pane_cp5

0xcfb2,	// (0x000636ff) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcfb2,	// (0x000636ff) popup_fep_china_hwr2_fs_control_bar_grid

0xcfc2,	// (0x0006370f) popup_fep_china_hwr2_fs_control_funtion_grid

0xcfca,	// (0x00063717) aid_fep_china_hwr2_fs_candi_cell

0xe1d9,	// (0x00064926) bg_popup_fep_shadow_pane_cp6

0xcfd4,	// (0x00063721) popup_fep_china_hwr2_fs_candidate_grid

0xcfde,	// (0x0006372b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcfde,	// (0x0006372b) cell_fep_china_hwr2_fs_funtion_grid

0xb839,	// (0x00061f86) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcff6,	// (0x00063743) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcff6,	// (0x00063743) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd004,	// (0x00063751) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd004,	// (0x00063751) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0a,	// (0x00066457) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0a,	// (0x00066457) cell_fep_china_hwr2_fs_funtion_grid_g

0xd01a,	// (0x00063767) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd01a,	// (0x00063767) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd02f,	// (0x0006377c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd02f,	// (0x0006377c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0f,	// (0x0006645c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0f,	// (0x0006645c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd04b,	// (0x00063798) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd053,	// (0x000637a0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd05b,	// (0x000637a8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd14,	// (0x00066461) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd063,	// (0x000637b0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd063,	// (0x000637b0) cell_fep_china_hwr2_fs_candidate_grid

0xd07c,	// (0x000637c9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd084,	// (0x000637d1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb839,	// (0x00061f86) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb839,	// (0x00061f86) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2f,	// (0x0006627c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd08c,	// (0x000637d9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x73fc,	// (0x0005db49) clock_nsta_pane_cp_24_ParamLimits

0x73fc,	// (0x0005db49) clock_nsta_pane_cp_24

0x747a,	// (0x0005dbc7) indicator_nsta_pane_cp_24_ParamLimits

0x747a,	// (0x0005dbc7) indicator_nsta_pane_cp_24

0x9d81,	// (0x000604ce) heading_pane_g1

0x0001,

0xf89f,	// (0x00065fec) heading_pane_g

0xa80a,	// (0x00060f57) grid_sct_catagory_button_pane

0xa83a,	// (0x00060f87) scroll_pane_cp5_ParamLimits

0xb35e,	// (0x00061aab) button_value_adjust_pane_cp5_ParamLimits

0xb35e,	// (0x00061aab) button_value_adjust_pane_cp5

0xb43d,	// (0x00061b8a) form2_midp_time_pane_ParamLimits

0xd09a,	// (0x000637e7) cell_sct_catagory_button_pane_ParamLimits

0xd09a,	// (0x000637e7) cell_sct_catagory_button_pane

0xb729,	// (0x00061e76) bg_button_pane_cp01_ParamLimits

0xb729,	// (0x00061e76) bg_button_pane_cp01

0xb839,	// (0x00061f86) cell_sct_catagory_button_pane_g1

0x71d3,	// (0x0005d920) popup_tb_extension_window

0xd0ac,	// (0x000637f9) aid_size_cell_ext_ParamLimits

0xd0ac,	// (0x000637f9) aid_size_cell_ext

0xe373,	// (0x00064ac0) bg_tb_trans_pane_cp1_ParamLimits

0xe373,	// (0x00064ac0) bg_tb_trans_pane_cp1

0xd0cc,	// (0x00063819) grid_tb_ext_pane_ParamLimits

0xd0cc,	// (0x00063819) grid_tb_ext_pane

0xd0fc,	// (0x00063849) cell_tb_ext_pane_ParamLimits

0xd0fc,	// (0x00063849) cell_tb_ext_pane

0xd113,	// (0x00063860) cell_tb_ext_pane_g1_ParamLimits

0xd113,	// (0x00063860) cell_tb_ext_pane_g1

0xd130,	// (0x0006387d) cell_tb_ext_pane_t1

0xe373,	// (0x00064ac0) list_highlight_pane_cp11_ParamLimits

0xe373,	// (0x00064ac0) list_highlight_pane_cp11

0x54e9,	// (0x0005bc36) popup_uni_indicator_window_ParamLimits

0x54e9,	// (0x0005bc36) popup_uni_indicator_window

0xf176,	// (0x000658c3) bg_popup_sub_pane_cp14

0xd14c,	// (0x00063899) list_uniindi_pane

0xd158,	// (0x000638a5) uniindi_top_pane

0xe373,	// (0x00064ac0) bg_uniindi_top_pane

0xd177,	// (0x000638c4) uniindi_top_pane_g1

0xd18d,	// (0x000638da) uniindi_top_pane_g2

0x0003,

0xfd1b,	// (0x00066468) uniindi_top_pane_g

0xd1b7,	// (0x00063904) uniindi_top_pane_t1

0xd1e1,	// (0x0006392e) list_single_uniindi_pane_ParamLimits

0xd1e1,	// (0x0006392e) list_single_uniindi_pane

0xb839,	// (0x00061f86) bg_uniindi_top_pane_g1

0xd1f4,	// (0x00063941) list_single_uniindi_pane_g1

0xd207,	// (0x00063954) list_single_uniindi_pane_t1

0x536d,	// (0x0005baba) control_bg_pane

0xd22c,	// (0x00063979) bg_sctrl_sk_pane_cp1

0xd235,	// (0x00063982) bg_sctrl_sk_pane_cp2

0xd23e,	// (0x0006398b) control_bg_pane_g1

0xd247,	// (0x00063994) control_bg_pane_g2

0x0001,

0xfd24,	// (0x00066471) control_bg_pane_g

0xb1a4,	// (0x000618f1) cell_indicator_nsta_pane_g1_ParamLimits

0xb1b2,	// (0x000618ff) cell_indicator_nsta_pane_g2_ParamLimits

0xfa93,	// (0x000661e0) cell_indicator_nsta_pane_g_ParamLimits

0x3f0b,	// (0x0005a658) form2_midp_time_pane_t1_ParamLimits

0x6d67,	// (0x0005d4b4) main_idle_act4_pane_ParamLimits

0x6d67,	// (0x0005d4b4) main_idle_act4_pane

0x71d3,	// (0x0005d920) popup_tb_extension_window_ParamLimits

0xd0ec,	// (0x00063839) tb_ext_find_pane_ParamLimits

0xd0ec,	// (0x00063839) tb_ext_find_pane

0xd250,	// (0x0006399d) ai_gene_pane_1_cp1

0x1754,	// (0x00057ea1) ai_gene_pane_2_cp1

0xd258,	// (0x000639a5) list_single_idle_plugin_calendar_pane

0xd261,	// (0x000639ae) list_single_idle_plugin_notification_pane

0xd26a,	// (0x000639b7) list_single_idle_plugin_player_pane

0xd273,	// (0x000639c0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd273,	// (0x000639c0) list_single_idle_plugin_shortcut_pane

0xd295,	// (0x000639e2) main_idle_act4_pane_t1

0xd2a7,	// (0x000639f4) main_idle_act4_pane_t2

0x0001,

0xfd29,	// (0x00066476) main_idle_act4_pane_t

0xd2b9,	// (0x00063a06) middle_sk_idle_act4_pane_ParamLimits

0xd2b9,	// (0x00063a06) middle_sk_idle_act4_pane

0xd2cf,	// (0x00063a1c) popup_clock_digital_analogue_window_cp2

0xd2e9,	// (0x00063a36) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2e9,	// (0x00063a36) shortcut_wheel_idle_act4_pane

0xb839,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g1

0xb839,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g2

0xb839,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g3

0xb839,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g4

0xb839,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g5

0xd2fd,	// (0x00063a4a) shortcut_wheel_idle_act4_pane_g6

0xd305,	// (0x00063a52) shortcut_wheel_idle_act4_pane_g7

0xd30d,	// (0x00063a5a) shortcut_wheel_idle_act4_pane_g8

0xd315,	// (0x00063a62) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2e,	// (0x0006647b) shortcut_wheel_idle_act4_pane_g

0xbaa9,	// (0x000621f6) middle_sk_idle_act4_pane_g1_ParamLimits

0xbaa9,	// (0x000621f6) middle_sk_idle_act4_pane_g1

0xd379,	// (0x00063ac6) middle_sk_idle_act4_pane_g2_ParamLimits

0xd379,	// (0x00063ac6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd51,	// (0x0006649e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd51,	// (0x0006649e) middle_sk_idle_act4_pane_g

0xd385,	// (0x00063ad2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd385,	// (0x00063ad2) middle_sk_idle_act4_pane_t1

0xd3a2,	// (0x00063aef) grid_ai_shortcut_pane_ParamLimits

0xd3a2,	// (0x00063aef) grid_ai_shortcut_pane

0xd3bb,	// (0x00063b08) list_highlight_pane_cp16_ParamLimits

0xd3bb,	// (0x00063b08) list_highlight_pane_cp16

0xd3c8,	// (0x00063b15) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3c8,	// (0x00063b15) list_single_idle_plugin_shortcut_pane_g1

0xd3d4,	// (0x00063b21) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3d4,	// (0x00063b21) list_single_idle_plugin_shortcut_pane_g2

0xd3ec,	// (0x00063b39) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd3ec,	// (0x00063b39) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd56,	// (0x000664a3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd56,	// (0x000664a3) list_single_idle_plugin_shortcut_pane_g

0xd3ff,	// (0x00063b4c) cell_ai_shortcut_pane_ParamLimits

0xd3ff,	// (0x00063b4c) cell_ai_shortcut_pane

0xd423,	// (0x00063b70) cell_ai_shortcut_pane_g1_ParamLimits

0xd423,	// (0x00063b70) cell_ai_shortcut_pane_g1

0xd250,	// (0x0006399d) ai_gene_pane_1_cp2

0xd445,	// (0x00063b92) ai_gene_pane_2_cp2

0xd44d,	// (0x00063b9a) list_highlight_pane_cp15

0xd456,	// (0x00063ba3) list_single_idle_plugin_calendar_pane_g1

0xd44d,	// (0x00063b9a) list_highlight_pane_cp17

0xd45e,	// (0x00063bab) list_single_idle_plugin_calendar_pane_g1_copy1

0xd466,	// (0x00063bb3) list_single_idle_plugin_player_pane_g1

0xaa63,	// (0x000611b0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5d,	// (0x000664aa) list_single_idle_plugin_player_pane_g

0xd46e,	// (0x00063bbb) list_single_idle_plugin_player_pane_t1

0xd47c,	// (0x00063bc9) list_single_idle_plugin_player_pane_t2

0xd48a,	// (0x00063bd7) list_single_idle_plugin_player_pane_t3

0xd498,	// (0x00063be5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd62,	// (0x000664af) list_single_idle_plugin_player_pane_t

0xd4a6,	// (0x00063bf3) wait_bar_pane_cp15

0xd4ae,	// (0x00063bfb) grid_ai_notification_pane

0xaa63,	// (0x000611b0) list_single_idle_plugin_notification_pane_g1

0xd4b7,	// (0x00063c04) cell_ai_notification_pane_ParamLimits

0xd4b7,	// (0x00063c04) cell_ai_notification_pane

0xd4c4,	// (0x00063c11) cell_ai_notification_pane_g1

0xd4cc,	// (0x00063c19) cell_ai_notification_pane_t1

0xd4da,	// (0x00063c27) tb_ext_find_button_pane

0xd4e2,	// (0x00063c2f) tb_ext_find_pane_g1

0xd4ea,	// (0x00063c37) tb_ext_find_pane_t1

0x1271,	// (0x000579be) tb_ext_find_button_pane_g1

0xd4f8,	// (0x00063c45) tb_ext_find_button_pane_g2

0x0001,

0xfd6b,	// (0x000664b8) tb_ext_find_button_pane_g

0xd295,	// (0x000639e2) main_idle_act4_pane_t1_ParamLimits

0xd2a7,	// (0x000639f4) main_idle_act4_pane_t2_ParamLimits

0xfd29,	// (0x00066476) main_idle_act4_pane_t_ParamLimits

0xd2cf,	// (0x00063a1c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2dd,	// (0x00063a2a) sat_plugin_idle_act4_pane_ParamLimits

0xd2dd,	// (0x00063a2a) sat_plugin_idle_act4_pane

0xd501,	// (0x00063c4e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd501,	// (0x00063c4e) sat_plugin_idle_act4_pane_t1

0xd514,	// (0x00063c61) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd514,	// (0x00063c61) sat_plugin_idle_act4_pane_t2

0xd527,	// (0x00063c74) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd527,	// (0x00063c74) sat_plugin_idle_act4_pane_t3

0xd53a,	// (0x00063c87) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd53a,	// (0x00063c87) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd70,	// (0x000664bd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd70,	// (0x000664bd) sat_plugin_idle_act4_pane_t

0x5432,	// (0x0005bb7f) popup_battery_window_ParamLimits

0x5432,	// (0x0005bb7f) popup_battery_window

0xe373,	// (0x00064ac0) bg_popup_sub_pane_cp25_ParamLimits

0xe373,	// (0x00064ac0) bg_popup_sub_pane_cp25

0xd54d,	// (0x00063c9a) popup_battery_window_g1_ParamLimits

0xd54d,	// (0x00063c9a) popup_battery_window_g1

0xd559,	// (0x00063ca6) popup_battery_window_t1_ParamLimits

0xd559,	// (0x00063ca6) popup_battery_window_t1

0xd56b,	// (0x00063cb8) popup_battery_window_t2_ParamLimits

0xd56b,	// (0x00063cb8) popup_battery_window_t2

0x0001,

0xfd79,	// (0x000664c6) popup_battery_window_t_ParamLimits

0xfd79,	// (0x000664c6) popup_battery_window_t

0x69a0,	// (0x0005d0ed) midp_canvas_pane_ParamLimits

0x6a19,	// (0x0005d166) midp_keypad_pane_ParamLimits

0x6a19,	// (0x0005d166) midp_keypad_pane

0xf51b,	// (0x00065c68) main_midp_pane_ParamLimits

0xb21e,	// (0x0006196b) signal_pane_g2_cp_ParamLimits

0xd588,	// (0x00063cd5) aid_size_cell_midp_keypad_ParamLimits

0xd588,	// (0x00063cd5) aid_size_cell_midp_keypad

0xd5a2,	// (0x00063cef) midp_keyp_game_grid_pane_ParamLimits

0xd5a2,	// (0x00063cef) midp_keyp_game_grid_pane

0xd5c2,	// (0x00063d0f) midp_keyp_rocker_pane_ParamLimits

0xd5c2,	// (0x00063d0f) midp_keyp_rocker_pane

0xd5fb,	// (0x00063d48) midp_keyp_sk_left_pane_ParamLimits

0xd5fb,	// (0x00063d48) midp_keyp_sk_left_pane

0xd655,	// (0x00063da2) midp_keyp_sk_right_pane_ParamLimits

0xd655,	// (0x00063da2) midp_keyp_sk_right_pane

0xe1d9,	// (0x00064926) bg_button_pane_cp03

0xd6af,	// (0x00063dfc) midp_keyp_sk_left_pane_g1

0xe1d9,	// (0x00064926) bg_button_pane_cp04

0xd6af,	// (0x00063dfc) midp_keyp_sk_right_pane_g1

0xb839,	// (0x00061f86) midp_keyp_rocker_pane_g1

0xd6b8,	// (0x00063e05) keyp_game_cell_pane_ParamLimits

0xd6b8,	// (0x00063e05) keyp_game_cell_pane

0xe1d9,	// (0x00064926) bg_button_pane_cp02

0xd6cb,	// (0x00063e18) keyp_game_cell_pane_g1

0x5468,	// (0x0005bbb5) popup_fep_vkb2_window_ParamLimits

0x5468,	// (0x0005bbb5) popup_fep_vkb2_window

0x8269,	// (0x0005e9b6) aid_size_cell_vkb2_ParamLimits

0x8269,	// (0x0005e9b6) aid_size_cell_vkb2

0x82b5,	// (0x0005ea02) popup_fep_vkb2_window_g1_ParamLimits

0x82b5,	// (0x0005ea02) popup_fep_vkb2_window_g1

0x82fd,	// (0x0005ea4a) vkb2_area_bottom_pane_ParamLimits

0x82fd,	// (0x0005ea4a) vkb2_area_bottom_pane

0x8349,	// (0x0005ea96) vkb2_area_keypad_pane_ParamLimits

0x8349,	// (0x0005ea96) vkb2_area_keypad_pane

0x838b,	// (0x0005ead8) vkb2_area_top_pane_ParamLimits

0x838b,	// (0x0005ead8) vkb2_area_top_pane

0x840a,	// (0x0005eb57) vkb2_top_entry_pane_ParamLimits

0x840a,	// (0x0005eb57) vkb2_top_entry_pane

0x8434,	// (0x0005eb81) vkb2_top_grid_left_pane_ParamLimits

0x8434,	// (0x0005eb81) vkb2_top_grid_left_pane

0x8453,	// (0x0005eba0) vkb2_top_grid_right_pane_ParamLimits

0x8453,	// (0x0005eba0) vkb2_top_grid_right_pane

0x8472,	// (0x0005ebbf) vkb2_cell_keypad_pane_ParamLimits

0x8472,	// (0x0005ebbf) vkb2_cell_keypad_pane

0x8543,	// (0x0005ec90) vkb2_area_bottom_grid_pane_ParamLimits

0x8543,	// (0x0005ec90) vkb2_area_bottom_grid_pane

0x8569,	// (0x0005ecb6) vkb2_area_bottom_pane_g1_ParamLimits

0x8569,	// (0x0005ecb6) vkb2_area_bottom_pane_g1

0x858d,	// (0x0005ecda) vkb2_area_bottom_pane_g2_ParamLimits

0x858d,	// (0x0005ecda) vkb2_area_bottom_pane_g2

0x85bb,	// (0x0005ed08) vkb2_area_bottom_pane_g3_ParamLimits

0x85bb,	// (0x0005ed08) vkb2_area_bottom_pane_g3

0x0002,

0xfd7e,	// (0x000664cb) vkb2_area_bottom_pane_g_ParamLimits

0xfd7e,	// (0x000664cb) vkb2_area_bottom_pane_g

0x861c,	// (0x0005ed69) vkb2_top_cell_left_pane_ParamLimits

0x861c,	// (0x0005ed69) vkb2_top_cell_left_pane

0xd6dc,	// (0x00063e29) vkb2_top_entry_pane_g1_ParamLimits

0xd6dc,	// (0x00063e29) vkb2_top_entry_pane_g1

0xd6ea,	// (0x00063e37) vkb2_top_entry_pane_t1_ParamLimits

0xd6ea,	// (0x00063e37) vkb2_top_entry_pane_t1

0xd71c,	// (0x00063e69) vkb2_top_entry_pane_t2_ParamLimits

0xd71c,	// (0x00063e69) vkb2_top_entry_pane_t2

0xd74e,	// (0x00063e9b) vkb2_top_entry_pane_t3_ParamLimits

0xd74e,	// (0x00063e9b) vkb2_top_entry_pane_t3

0x0002,

0xfd85,	// (0x000664d2) vkb2_top_entry_pane_t_ParamLimits

0xfd85,	// (0x000664d2) vkb2_top_entry_pane_t

0x8669,	// (0x0005edb6) vkb2_top_grid_right_pane_g1_ParamLimits

0x8669,	// (0x0005edb6) vkb2_top_grid_right_pane_g1

0x867f,	// (0x0005edcc) vkb2_top_grid_right_pane_g2_ParamLimits

0x867f,	// (0x0005edcc) vkb2_top_grid_right_pane_g2

0x8697,	// (0x0005ede4) vkb2_top_grid_right_pane_g3_ParamLimits

0x8697,	// (0x0005ede4) vkb2_top_grid_right_pane_g3

0x86af,	// (0x0005edfc) vkb2_top_grid_right_pane_g4_ParamLimits

0x86af,	// (0x0005edfc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8c,	// (0x000664d9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8c,	// (0x000664d9) vkb2_top_grid_right_pane_g

0x86c5,	// (0x0005ee12) vkb2_top_cell_left_pane_g1

0x86e7,	// (0x0005ee34) vkb2_cell_keypad_pane_g1_ParamLimits

0x86e7,	// (0x0005ee34) vkb2_cell_keypad_pane_g1

0xd772,	// (0x00063ebf) vkb2_cell_keypad_pane_t1_ParamLimits

0xd772,	// (0x00063ebf) vkb2_cell_keypad_pane_t1

0x86f5,	// (0x0005ee42) vkb2_cell_bottom_grid_pane_ParamLimits

0x86f5,	// (0x0005ee42) vkb2_cell_bottom_grid_pane

0x872e,	// (0x0005ee7b) vkb2_cell_bottom_grid_pane_g1

0xd31d,	// (0x00063a6a) aid_call2_pane_cp02

0xd325,	// (0x00063a72) aid_call_pane_cp02

0xd32d,	// (0x00063a7a) clock_digital_number_pane_cp10

0xd335,	// (0x00063a82) clock_digital_number_pane_cp11

0xd33d,	// (0x00063a8a) clock_digital_number_pane_cp12

0xd345,	// (0x00063a92) clock_digital_number_pane_cp13

0xd34d,	// (0x00063a9a) clock_digital_separator_pane_cp10

0x1271,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g1

0x1271,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g2

0xd355,	// (0x00063aa2) popup_clock_digital_analogue_window_cp2_g3

0x1271,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g4

0xd355,	// (0x00063aa2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd41,	// (0x0006648e) popup_clock_digital_analogue_window_cp2_g

0xd35d,	// (0x00063aaa) popup_clock_digital_analogue_window_cp2_t1

0xd36b,	// (0x00063ab8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4c,	// (0x00066499) popup_clock_digital_analogue_window_cp2_t

0xb839,	// (0x00061f86) clock_digital_number_pane_cp10_g1

0xb839,	// (0x00061f86) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2f,	// (0x0006627c) clock_digital_number_pane_cp10_g

0xb839,	// (0x00061f86) clock_digital_separator_pane_cp10_g1

0xb839,	// (0x00061f86) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2f,	// (0x0006627c) clock_digital_separator_pane_cp10_g

0xd199,	// (0x000638e6) uniindi_top_pane_g3

0xd1aa,	// (0x000638f7) uniindi_top_pane_g4

0x84fd,	// (0x0005ec4a) vkb2_row_keypad_pane_ParamLimits

0x84fd,	// (0x0005ec4a) vkb2_row_keypad_pane

0x874e,	// (0x0005ee9b) vkb2_cell_t_keypad_pane_ParamLimits

0x874e,	// (0x0005ee9b) vkb2_cell_t_keypad_pane

0x875e,	// (0x0005eeab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x875e,	// (0x0005eeab) vkb2_cell_t_keypad_pane_cp08

0x8771,	// (0x0005eebe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8771,	// (0x0005eebe) vkb2_cell_t_keypad_pane_cp09

0x8785,	// (0x0005eed2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8785,	// (0x0005eed2) vkb2_cell_t_keypad_pane_cp01

0x8796,	// (0x0005eee3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8796,	// (0x0005eee3) vkb2_cell_t_keypad_pane_cp02

0x87a7,	// (0x0005eef4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x87a7,	// (0x0005eef4) vkb2_cell_t_keypad_pane_cp03

0x87b8,	// (0x0005ef05) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x87b8,	// (0x0005ef05) vkb2_cell_t_keypad_pane_cp04

0x87c9,	// (0x0005ef16) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x87c9,	// (0x0005ef16) vkb2_cell_t_keypad_pane_cp05

0x87da,	// (0x0005ef27) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x87da,	// (0x0005ef27) vkb2_cell_t_keypad_pane_cp06

0x87eb,	// (0x0005ef38) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x87eb,	// (0x0005ef38) vkb2_cell_t_keypad_pane_cp07

0x87fc,	// (0x0005ef49) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x87fc,	// (0x0005ef49) vkb2_cell_t_keypad_pane_cp10

0x7e9b,	// (0x0005e5e8) vkb2_cell_t_keypad_pane_g1

0xd789,	// (0x00063ed6) vkb2_cell_t_keypad_pane_t1

0x536d,	// (0x0005baba) popup_grid_graphic2_window

0xd79b,	// (0x00063ee8) aid_size_cell_graphic2_ParamLimits

0xd79b,	// (0x00063ee8) aid_size_cell_graphic2

0xd7d3,	// (0x00063f20) bg_popup_window_pane_cp21_ParamLimits

0xd7d3,	// (0x00063f20) bg_popup_window_pane_cp21

0xd7e1,	// (0x00063f2e) graphic2_pages_pane_ParamLimits

0xd7e1,	// (0x00063f2e) graphic2_pages_pane

0xd827,	// (0x00063f74) grid_graphic2_control_pane_ParamLimits

0xd827,	// (0x00063f74) grid_graphic2_control_pane

0xd865,	// (0x00063fb2) grid_graphic2_pane_ParamLimits

0xd865,	// (0x00063fb2) grid_graphic2_pane

0xd8d9,	// (0x00064026) cell_graphic2_pane

0x536d,	// (0x0005baba) main_comp_mode_pane

0xca0a,	// (0x00063157) list_ai3_gene_pane_ParamLimits

0xcdd8,	// (0x00063525) bg_popup_window_pane_cp19_ParamLimits

0xcde4,	// (0x00063531) bg_touch_area_indi_pane_ParamLimits

0xcde4,	// (0x00063531) bg_touch_area_indi_pane

0xcdfa,	// (0x00063547) bg_touch_area_indi_pane_cp01_ParamLimits

0xcdfa,	// (0x00063547) bg_touch_area_indi_pane_cp01

0xce10,	// (0x0006355d) bg_touch_area_indi_pane_cp02_ParamLimits

0xce10,	// (0x0006355d) bg_touch_area_indi_pane_cp02

0xce26,	// (0x00063573) bg_touch_area_indi_pane_cp03_ParamLimits

0xce26,	// (0x00063573) bg_touch_area_indi_pane_cp03

0xce40,	// (0x0006358d) popup_slider_window_g1_ParamLimits

0xce5c,	// (0x000635a9) popup_slider_window_g2_ParamLimits

0xce78,	// (0x000635c5) popup_slider_window_g3_ParamLimits

0xfcd6,	// (0x00066423) popup_slider_window_g_ParamLimits

0xcede,	// (0x0006362b) popup_slider_window_t1_ParamLimits

0xcf52,	// (0x0006369f) small_volume_slider_vertical_pane_ParamLimits

0xd8d9,	// (0x00064026) cell_graphic2_pane_ParamLimits

0xd928,	// (0x00064075) bg_button_pane_cp10_ParamLimits

0xd928,	// (0x00064075) bg_button_pane_cp10

0xd93b,	// (0x00064088) bg_button_pane_cp11_ParamLimits

0xd93b,	// (0x00064088) bg_button_pane_cp11

0xd94e,	// (0x0006409b) graphic2_pages_pane_g1_ParamLimits

0xd94e,	// (0x0006409b) graphic2_pages_pane_g1

0xd969,	// (0x000640b6) graphic2_pages_pane_g2_ParamLimits

0xd969,	// (0x000640b6) graphic2_pages_pane_g2

0x0001,

0xfd9a,	// (0x000664e7) graphic2_pages_pane_g_ParamLimits

0xfd9a,	// (0x000664e7) graphic2_pages_pane_g

0xd981,	// (0x000640ce) graphic2_pages_pane_t1_ParamLimits

0xd981,	// (0x000640ce) graphic2_pages_pane_t1

0xd999,	// (0x000640e6) cell_graphic2_control_pane_ParamLimits

0xd999,	// (0x000640e6) cell_graphic2_control_pane

0xd9b7,	// (0x00064104) cell_graphic2_pane_g1_ParamLimits

0xd9b7,	// (0x00064104) cell_graphic2_pane_g1

0xd9c4,	// (0x00064111) cell_graphic2_pane_g2_ParamLimits

0xd9c4,	// (0x00064111) cell_graphic2_pane_g2

0xd9d1,	// (0x0006411e) cell_graphic2_pane_g3_ParamLimits

0xd9d1,	// (0x0006411e) cell_graphic2_pane_g3

0xd9de,	// (0x0006412b) cell_graphic2_pane_g4_ParamLimits

0xd9de,	// (0x0006412b) cell_graphic2_pane_g4

0xd9eb,	// (0x00064138) cell_graphic2_pane_g5_ParamLimits

0xd9eb,	// (0x00064138) cell_graphic2_pane_g5

0x0004,

0xfd9f,	// (0x000664ec) cell_graphic2_pane_g_ParamLimits

0xfd9f,	// (0x000664ec) cell_graphic2_pane_g

0xda04,	// (0x00064151) cell_graphic2_pane_t1_ParamLimits

0xda04,	// (0x00064151) cell_graphic2_pane_t1

0x90ff,	// (0x0005f84c) grid_highlight_pane_cp11_ParamLimits

0x90ff,	// (0x0005f84c) grid_highlight_pane_cp11

0xe373,	// (0x00064ac0) bg_button_pane_cp05

0xda3a,	// (0x00064187) cell_graphic2_control_pane_g1

0xb839,	// (0x00061f86) bg_touch_area_indi_pane_g1

0xda62,	// (0x000641af) aid_cmod_rocker_key_size

0xda6c,	// (0x000641b9) aid_cmode_itu_key_size

0xda76,	// (0x000641c3) main_cmode_video_pane

0xda80,	// (0x000641cd) main_comp_mode_itu_pane

0xda8c,	// (0x000641d9) main_comp_mode_rocker_pane

0xda98,	// (0x000641e5) cell_cmode_rocker_pane_ParamLimits

0xda98,	// (0x000641e5) cell_cmode_rocker_pane

0xdaaa,	// (0x000641f7) cell_cmode_itu_pane_ParamLimits

0xdaaa,	// (0x000641f7) cell_cmode_itu_pane

0xf176,	// (0x000658c3) bg_button_pane_cp06_ParamLimits

0xf176,	// (0x000658c3) bg_button_pane_cp06

0xbaa9,	// (0x000621f6) cell_cmode_rocker_pane_g1_ParamLimits

0xbaa9,	// (0x000621f6) cell_cmode_rocker_pane_g1

0xcff6,	// (0x00063743) cell_cmode_rocker_pane_g2_ParamLimits

0xcff6,	// (0x00063743) cell_cmode_rocker_pane_g2

0x0001,

0xfdaf,	// (0x000664fc) cell_cmode_rocker_pane_g_ParamLimits

0xfdaf,	// (0x000664fc) cell_cmode_rocker_pane_g

0xe1d9,	// (0x00064926) bg_button_pane_cp07

0xdabf,	// (0x0006420c) cell_cmode_itu_pane_g1

0xdac8,	// (0x00064215) cell_cmode_itu_pane_t1

0xdad6,	// (0x00064223) cell_cmode_itu_pane_t2

0x0001,

0xfdb4,	// (0x00066501) cell_cmode_itu_pane_t

0xd21c,	// (0x00063969) aid_touch_ctrl_left

0xd224,	// (0x00063971) aid_touch_ctrl_right

0xe1d9,	// (0x00064926) compa_mode_pane

0xdae4,	// (0x00064231) aid_cmod_rocker_key_size_cp

0xdaee,	// (0x0006423b) aid_cmode_itu_key_size_cp

0xdaf8,	// (0x00064245) compa_mode_pane_g1

0xdb00,	// (0x0006424d) compa_mode_pane_g2

0xdb08,	// (0x00064255) compa_mode_pane_g3

0x0002,

0xfdb9,	// (0x00066506) compa_mode_pane_g

0xdb10,	// (0x0006425d) main_comp_mode_itu_pane_cp

0xdb18,	// (0x00064265) main_comp_mode_rocker_pane_cp

0xdb20,	// (0x0006426d) cell_cmode_itu_pane_cp_ParamLimits

0xdb20,	// (0x0006426d) cell_cmode_itu_pane_cp

0xdb35,	// (0x00064282) cell_cmode_rocker_pane_cp_ParamLimits

0xdb35,	// (0x00064282) cell_cmode_rocker_pane_cp

0xf176,	// (0x000658c3) bg_button_pane_cp06_cp_ParamLimits

0xf176,	// (0x000658c3) bg_button_pane_cp06_cp

0xbaa9,	// (0x000621f6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbaa9,	// (0x000621f6) cell_cmode_rocker_pane_g1_cp

0xb839,	// (0x00061f86) cell_cmode_rocker_pane_g2_cp

0xe1d9,	// (0x00064926) bg_button_pane_cp07_cp

0xdb47,	// (0x00064294) cell_cmode_itu_pane_g1_cp

0xdb50,	// (0x0006429d) cell_cmode_itu_pane_t1_cp

0xdb50,	// (0x0006429d) cell_cmode_itu_pane_t2_cp

0xa58c,	// (0x00060cd9) settings_code_pane_cp2

0xe23b,	// (0x00064988) bg_popup_window_pane_cp3_ParamLimits

0xe48c,	// (0x00064bd9) heading_pane_cp3_ParamLimits

0xe49b,	// (0x00064be8) listscroll_popup_graphic_pane_ParamLimits

0x7c44,	// (0x0005e391) fep_hwr_aid_pane_ParamLimits

0x81c4,	// (0x0005e911) aid_touch_sctrl_top_ParamLimits

0x81df,	// (0x0005e92c) sctrl_sk_top_pane_g1_ParamLimits

0x7e9b,	// (0x0005e5e8) sctrl_sk_top_pane_g2_ParamLimits

0xfcef,	// (0x0006643c) sctrl_sk_top_pane_g_ParamLimits

0x81ec,	// (0x0005e939) sctrl_sk_top_pane_t1_ParamLimits

0x81c4,	// (0x0005e911) aid_touch_sctrl_bottom_ParamLimits

0x81ec,	// (0x0005e939) sctrl_sk_bottom_pane_t1_ParamLimits

0xd165,	// (0x000638b2) aid_area_touch_clock

0x83d1,	// (0x0005eb1e) aid_vkb2_area_top_pane_cell_ParamLimits

0x83d1,	// (0x0005eb1e) aid_vkb2_area_top_pane_cell

0x851f,	// (0x0005ec6c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x851f,	// (0x0005ec6c) aid_vkb2_area_bottom_pane_cell

0xd6d4,	// (0x00063e21) popup_char_count_window

0xdb5e,	// (0x000642ab) popup_char_count_window_g1

0xdb67,	// (0x000642b4) popup_char_count_window_g2

0xdb70,	// (0x000642bd) popup_char_count_window_g3

0x0002,

0xfdc0,	// (0x0006650d) popup_char_count_window_g

0xdb79,	// (0x000642c6) popup_char_count_window_t1

0x8293,	// (0x0005e9e0) popup_fep_char_preview_window_ParamLimits

0x8293,	// (0x0005e9e0) popup_fep_char_preview_window

0x83ef,	// (0x0005eb3c) vkb2_top_candi_pane_ParamLimits

0x83ef,	// (0x0005eb3c) vkb2_top_candi_pane

0xdb87,	// (0x000642d4) cell_vkb2_top_candi_pane_ParamLimits

0xdb87,	// (0x000642d4) cell_vkb2_top_candi_pane

0x8811,	// (0x0005ef5e) bg_popup_fep_char_preview_window_ParamLimits

0x8811,	// (0x0005ef5e) bg_popup_fep_char_preview_window

0x881f,	// (0x0005ef6c) popup_fep_char_preview_window_t1_ParamLimits

0x881f,	// (0x0005ef6c) popup_fep_char_preview_window_t1

0xdbd1,	// (0x0006431e) bg_popup_fep_char_preview_window_g1

0xdbd9,	// (0x00064326) bg_popup_fep_char_preview_window_g2

0xdbe1,	// (0x0006432e) bg_popup_fep_char_preview_window_g3

0xdbe9,	// (0x00064336) bg_popup_fep_char_preview_window_g4

0xdbf1,	// (0x0006433e) bg_popup_fep_char_preview_window_g5

0xdbf9,	// (0x00064346) bg_popup_fep_char_preview_window_g6

0xdc01,	// (0x0006434e) bg_popup_fep_char_preview_window_g7

0xdc09,	// (0x00064356) bg_popup_fep_char_preview_window_g8

0xdc11,	// (0x0006435e) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc7,	// (0x00066514) bg_popup_fep_char_preview_window_g

0x7e9b,	// (0x0005e5e8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e9b,	// (0x0005e5e8) cell_vkb2_top_candi_pane_g1

0x7ea9,	// (0x0005e5f6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7ea9,	// (0x0005e5f6) cell_vkb2_top_candi_pane_g2

0xbdc0,	// (0x0006250d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbdc0,	// (0x0006250d) cell_vkb2_top_candi_pane_g3

0x8861,	// (0x0005efae) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8861,	// (0x0005efae) cell_vkb2_top_candi_pane_g4

0xbfbe,	// (0x0006270b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbfbe,	// (0x0006270b) cell_vkb2_top_candi_pane_g5

0x8882,	// (0x0005efcf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8882,	// (0x0005efcf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddc,	// (0x00066529) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddc,	// (0x00066529) cell_vkb2_top_candi_pane_g

0x8890,	// (0x0005efdd) cell_vkb2_top_candi_pane_t1

0x797b,	// (0x0005e0c8) aid_size_touch_slider_mark_ParamLimits

0x797b,	// (0x0005e0c8) aid_size_touch_slider_mark

0xd817,	// (0x00063f64) grid_graphic2_catg_pane_ParamLimits

0xd817,	// (0x00063f64) grid_graphic2_catg_pane

0xd8b5,	// (0x00064002) popup_grid_graphic2_window_t1_ParamLimits

0xd8b5,	// (0x00064002) popup_grid_graphic2_window_t1

0xd8c7,	// (0x00064014) popup_grid_graphic2_window_t2_ParamLimits

0xd8c7,	// (0x00064014) popup_grid_graphic2_window_t2

0x0001,

0xfd95,	// (0x000664e2) popup_grid_graphic2_window_t_ParamLimits

0xfd95,	// (0x000664e2) popup_grid_graphic2_window_t

0xe373,	// (0x00064ac0) bg_button_pane_cp05_ParamLimits

0xda3a,	// (0x00064187) cell_graphic2_control_pane_g1_ParamLimits

0xdc19,	// (0x00064366) cell_graphic2_catg_pane_ParamLimits

0xdc19,	// (0x00064366) cell_graphic2_catg_pane

0xe1d9,	// (0x00064926) bg_button_pane_cp12

0xdc2b,	// (0x00064378) cell_graphic2_catg_pane_g1

0xd130,	// (0x0006387d) cell_tb_ext_pane_t1_ParamLimits

0x863c,	// (0x0005ed89) vkb2_top_cell_right_narrow_pane_ParamLimits

0x863c,	// (0x0005ed89) vkb2_top_cell_right_narrow_pane

0x8654,	// (0x0005eda1) vkb2_top_cell_right_wide_pane_ParamLimits

0x8654,	// (0x0005eda1) vkb2_top_cell_right_wide_pane

0x7c36,	// (0x0005e383) bg_vkb2_func_pane_ParamLimits

0x7c36,	// (0x0005e383) bg_vkb2_func_pane

0x86c5,	// (0x0005ee12) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp03

0x872e,	// (0x0005ee7b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x907b,	// (0x0005f7c8) bg_vkb2_func_pane_g1

0x9083,	// (0x0005f7d0) bg_vkb2_func_pane_g2

0x9093,	// (0x0005f7e0) bg_vkb2_func_pane_g3

0x908b,	// (0x0005f7d8) bg_vkb2_func_pane_g4

0x909b,	// (0x0005f7e8) bg_vkb2_func_pane_g5

0x90a3,	// (0x0005f7f0) bg_vkb2_func_pane_g6

0x90ab,	// (0x0005f7f8) bg_vkb2_func_pane_g7

0x90b3,	// (0x0005f800) bg_vkb2_func_pane_g8

0x9073,	// (0x0005f7c0) bg_vkb2_func_pane_g9

0x0008,

0xfde9,	// (0x00066536) bg_vkb2_func_pane_g

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp01

0x86c5,	// (0x0005ee12) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x86c5,	// (0x0005ee12) vkb2_top_cell_right_wide_pane_g1

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c36,	// (0x0005e383) bg_vkb2_fuc_pane_cp02

0x88af,	// (0x0005effc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x88af,	// (0x0005effc) vkb2_top_cell_right_narrow_pane_g1

0xcd52,	// (0x0006349f) aid_touch_area_decrease_ParamLimits

0xcd52,	// (0x0006349f) aid_touch_area_decrease

0xcd76,	// (0x000634c3) aid_touch_area_increase_ParamLimits

0xcd76,	// (0x000634c3) aid_touch_area_increase

0xcd8e,	// (0x000634db) aid_touch_area_mute_ParamLimits

0xcd8e,	// (0x000634db) aid_touch_area_mute

0xcdaa,	// (0x000634f7) aid_touch_area_slider_ParamLimits

0xcdaa,	// (0x000634f7) aid_touch_area_slider

0xce94,	// (0x000635e1) popup_slider_window_g4_ParamLimits

0xce94,	// (0x000635e1) popup_slider_window_g4

0xceac,	// (0x000635f9) popup_slider_window_g5_ParamLimits

0xceac,	// (0x000635f9) popup_slider_window_g5

0xcece,	// (0x0006361b) popup_slider_window_g6_ParamLimits

0xcece,	// (0x0006361b) popup_slider_window_g6

0xcf0c,	// (0x00063659) popup_slider_window_t2_ParamLimits

0xcf0c,	// (0x00063659) popup_slider_window_t2

0x0001,

0xfce3,	// (0x00066430) popup_slider_window_t_ParamLimits

0xfce3,	// (0x00066430) popup_slider_window_t

0xcf24,	// (0x00063671) slider_pane_ParamLimits

0xcf24,	// (0x00063671) slider_pane

0xdc34,	// (0x00064381) slider_pane_g1_ParamLimits

0xdc34,	// (0x00064381) slider_pane_g1

0xdc48,	// (0x00064395) slider_pane_g2_ParamLimits

0xdc48,	// (0x00064395) slider_pane_g2

0xdc5e,	// (0x000643ab) slider_pane_g3_ParamLimits

0xdc5e,	// (0x000643ab) slider_pane_g3

0x0003,

0xfdfc,	// (0x00066549) slider_pane_g_ParamLimits

0xfdfc,	// (0x00066549) slider_pane_g

0x722f,	// (0x0005d97c) popup_tb_float_extension_window_ParamLimits

0x722f,	// (0x0005d97c) popup_tb_float_extension_window

0xdc8a,	// (0x000643d7) aid_size_cell_tb_float_ext

0xe1d9,	// (0x00064926) bg_popup_sub_window_cp28

0xdc96,	// (0x000643e3) grid_tb_float_ext_pane

0xdca0,	// (0x000643ed) cell_tb_float_ext_pane_ParamLimits

0xdca0,	// (0x000643ed) cell_tb_float_ext_pane

0xdcba,	// (0x00064407) cell_tb_float_ext_pane_g1

0xdcc3,	// (0x00064410) grid_highlight_pane_cp12

0x7d85,	// (0x0005e4d2) cell_last_hwr_side_pane_ParamLimits

0x7d85,	// (0x0005e4d2) cell_last_hwr_side_pane

0xb839,	// (0x00061f86) cell_last_hwr_side_pane_g1

0xdccc,	// (0x00064419) cell_last_hwr_side_pane_g2

0x0001,

0xfe05,	// (0x00066552) cell_last_hwr_side_pane_g

0x85eb,	// (0x0005ed38) vkb2_area_bottom_space_btn_pane_ParamLimits

0x85eb,	// (0x0005ed38) vkb2_area_bottom_space_btn_pane

0x7e9b,	// (0x0005e5e8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd789,	// (0x00063ed6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8890,	// (0x0005efdd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x88cf,	// (0x0005f01c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x88cf,	// (0x0005f01c) vkb2_area_bottom_space_btn_pane_g1

0x8909,	// (0x0005f056) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8909,	// (0x0005f056) vkb2_area_bottom_space_btn_pane_g2

0x893f,	// (0x0005f08c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x893f,	// (0x0005f08c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0a,	// (0x00066557) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0a,	// (0x00066557) vkb2_area_bottom_space_btn_pane_g

0x7cf9,	// (0x0005e446) cel_fep_hwr_func_pane_ParamLimits

0x7cf9,	// (0x0005e446) cel_fep_hwr_func_pane

0x7d35,	// (0x0005e482) cell_hwr_side_button_pane_ParamLimits

0x7d35,	// (0x0005e482) cell_hwr_side_button_pane

0xd165,	// (0x000638b2) aid_area_touch_clock_ParamLimits

0xe373,	// (0x00064ac0) bg_uniindi_top_pane_ParamLimits

0xd177,	// (0x000638c4) uniindi_top_pane_g1_ParamLimits

0xd18d,	// (0x000638da) uniindi_top_pane_g2_ParamLimits

0xd199,	// (0x000638e6) uniindi_top_pane_g3_ParamLimits

0xd1aa,	// (0x000638f7) uniindi_top_pane_g4_ParamLimits

0xfd1b,	// (0x00066468) uniindi_top_pane_g_ParamLimits

0xd1b7,	// (0x00063904) uniindi_top_pane_t1_ParamLimits

0xe373,	// (0x00064ac0) bg_vkb2_func_pane_cp01_ParamLimits

0xe373,	// (0x00064ac0) bg_vkb2_func_pane_cp01

0xdcd5,	// (0x00064422) cel_fep_hwr_func_pane_g1_ParamLimits

0xdcd5,	// (0x00064422) cel_fep_hwr_func_pane_g1

0xe373,	// (0x00064ac0) bg_vkb2_func_pane_cp02_ParamLimits

0xe373,	// (0x00064ac0) bg_vkb2_func_pane_cp02

0xdcd5,	// (0x00064422) cell_hwr_side_button_pane_g1_ParamLimits

0xdcd5,	// (0x00064422) cell_hwr_side_button_pane_g1

0x8ef7,	// (0x0005f644) status_pane_g4_ParamLimits

0x8ef7,	// (0x0005f644) status_pane_g4

0x8f11,	// (0x0005f65e) status_pane_t1

0xb4a6,	// (0x00061bf3) form2_midp_gauge_slider_cont_pane

0xb4ae,	// (0x00061bfb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4c0,	// (0x00061c0d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4d2,	// (0x00061c1f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae2,	// (0x0006622f) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4e4,	// (0x00061c31) form2_midp_slider_pane_ParamLimits

0x825b,	// (0x0005e9a8) aid_size_cell_func_vkb2_ParamLimits

0x825b,	// (0x0005e9a8) aid_size_cell_func_vkb2

0xdc76,	// (0x000643c3) slider_pane_g4_ParamLimits

0xdc76,	// (0x000643c3) slider_pane_g4

0x8989,	// (0x0005f0d6) form2_midp_gauge_slider_pane_t2_cp01

0x8997,	// (0x0005f0e4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8997,	// (0x0005f0e4) form2_midp_gauge_slider_pane_t3_cp01

0x89b4,	// (0x0005f101) form2_midp_slider_pane_cp01

0xe1d9,	// (0x00064926) navi_smil_pane

0xdd0e,	// (0x0006445b) navi_smil_pane_g1

0xdd16,	// (0x00064463) navi_smil_pane_t1

0xdce3,	// (0x00064430) form2_midp_slider_pane_g1

0xdcec,	// (0x00064439) form2_midp_slider_pane_g2

0xdcf4,	// (0x00064441) form2_midp_slider_pane_g3

0xdce3,	// (0x00064430) form2_midp_slider_pane_g4

0xdcfc,	// (0x00064449) form2_midp_slider_pane_g5

0x0004,

0xfe13,	// (0x00066560) form2_midp_slider_pane_g

0x8979,	// (0x0005f0c6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8979,	// (0x0005f0c6) vkb2_area_bottom_space_btn_pane_g4

0x74b6,	// (0x0005dc03) lc0_navi_pane_ParamLimits

0x74b6,	// (0x0005dc03) lc0_navi_pane

0x752c,	// (0x0005dc79) lc0_stat_indi_pane_ParamLimits

0x752c,	// (0x0005dc79) lc0_stat_indi_pane

0x7543,	// (0x0005dc90) ls0_title_pane_ParamLimits

0x7543,	// (0x0005dc90) ls0_title_pane

0xf176,	// (0x000658c3) bg_popup_sub_pane_cp14_ParamLimits

0xd14c,	// (0x00063899) list_uniindi_pane_ParamLimits

0xd158,	// (0x000638a5) uniindi_top_pane_ParamLimits

0xd1f4,	// (0x00063941) list_single_uniindi_pane_g1_ParamLimits

0xd207,	// (0x00063954) list_single_uniindi_pane_t1_ParamLimits

0x89bd,	// (0x0005f10a) lc0_stat_clock_pane_ParamLimits

0x89bd,	// (0x0005f10a) lc0_stat_clock_pane

0xdd24,	// (0x00064471) lc0_stat_indi_pane_g1_ParamLimits

0xdd24,	// (0x00064471) lc0_stat_indi_pane_g1

0xdd31,	// (0x0006447e) lc0_stat_indi_pane_g2_ParamLimits

0xdd31,	// (0x0006447e) lc0_stat_indi_pane_g2

0x0001,

0xfe1e,	// (0x0006656b) lc0_stat_indi_pane_g_ParamLimits

0xfe1e,	// (0x0006656b) lc0_stat_indi_pane_g

0x89ca,	// (0x0005f117) lc0_uni_indicator_pane_ParamLimits

0x89ca,	// (0x0005f117) lc0_uni_indicator_pane

0xdd3e,	// (0x0006448b) ls0_title_pane_g1_ParamLimits

0xdd3e,	// (0x0006448b) ls0_title_pane_g1

0xdd52,	// (0x0006449f) ls0_title_pane_t1_ParamLimits

0xdd52,	// (0x0006449f) ls0_title_pane_t1

0x89d7,	// (0x0005f124) lc0_uni_indicator_pane_g1_ParamLimits

0x89d7,	// (0x0005f124) lc0_uni_indicator_pane_g1

0xdd88,	// (0x000644d5) lc0_stat_clock_pane_t1

0x536d,	// (0x0005baba) main_ai5_pane

0xdd9e,	// (0x000644eb) ai5_sk_pane_ParamLimits

0xdd9e,	// (0x000644eb) ai5_sk_pane

0xddab,	// (0x000644f8) cell_ai5_widget_pane_ParamLimits

0xddab,	// (0x000644f8) cell_ai5_widget_pane

0xde74,	// (0x000645c1) aid_size_cell_widget_grid

0xde82,	// (0x000645cf) bg_ai5_widget_pane_ParamLimits

0xde82,	// (0x000645cf) bg_ai5_widget_pane

0xdf00,	// (0x0006464d) cell_ai5_widget_pane_g2

0xdf14,	// (0x00064661) cell_ai5_widget_pane_g3

0xdf2e,	// (0x0006467b) cell_ai5_widget_pane_g4

0xdf3e,	// (0x0006468b) cell_ai5_widget_pane_g5

0xdf4e,	// (0x0006469b) cell_ai5_widget_pane_g6

0xdf5a,	// (0x000646a7) cell_ai5_widget_pane_g7

0xdfc6,	// (0x00064713) cell_ai5_widget_pane_t1_ParamLimits

0xdfc6,	// (0x00064713) cell_ai5_widget_pane_t1

0xdfe3,	// (0x00064730) cell_ai5_widget_pane_t2_ParamLimits

0xdfe3,	// (0x00064730) cell_ai5_widget_pane_t2

0xdffb,	// (0x00064748) cell_ai5_widget_pane_t3_ParamLimits

0xdffb,	// (0x00064748) cell_ai5_widget_pane_t3

0xe013,	// (0x00064760) cell_ai5_widget_pane_t4_ParamLimits

0xe013,	// (0x00064760) cell_ai5_widget_pane_t4

0xe039,	// (0x00064786) cell_ai5_widget_pane_t5_ParamLimits

0xe039,	// (0x00064786) cell_ai5_widget_pane_t5

0xe058,	// (0x000647a5) cell_ai5_widget_pane_t6_ParamLimits

0xe058,	// (0x000647a5) cell_ai5_widget_pane_t6

0xe06a,	// (0x000647b7) cell_ai5_widget_pane_t7_ParamLimits

0xe06a,	// (0x000647b7) cell_ai5_widget_pane_t7

0xe089,	// (0x000647d6) cell_ai5_widget_pane_t8_ParamLimits

0xe089,	// (0x000647d6) cell_ai5_widget_pane_t8

0x000b,

0xfe3e,	// (0x0006658b) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x0006658b) cell_ai5_widget_pane_t

0xe10d,	// (0x0006485a) grid_ai5_widget_pane

0xf176,	// (0x000658c3) highlight_cell_ai5_widget_pane_ParamLimits

0xf176,	// (0x000658c3) highlight_cell_ai5_widget_pane

0xe121,	// (0x0006486e) ai5_sk_left_pane

0xe12b,	// (0x00064878) ai5_sk_middle_pane

0xe135,	// (0x00064882) ai5_sk_right_pane

0xe13f,	// (0x0006488c) bg_ai5_widget_pane_g1_ParamLimits

0xe13f,	// (0x0006488c) bg_ai5_widget_pane_g1

0xe14b,	// (0x00064898) bg_ai5_widget_pane_g2_ParamLimits

0xe14b,	// (0x00064898) bg_ai5_widget_pane_g2

0xe157,	// (0x000648a4) bg_ai5_widget_pane_g3_ParamLimits

0xe157,	// (0x000648a4) bg_ai5_widget_pane_g3

0xe163,	// (0x000648b0) bg_ai5_widget_pane_g4_ParamLimits

0xe163,	// (0x000648b0) bg_ai5_widget_pane_g4

0xe16f,	// (0x000648bc) bg_ai5_widget_pane_g5_ParamLimits

0xe16f,	// (0x000648bc) bg_ai5_widget_pane_g5

0xe17b,	// (0x000648c8) bg_ai5_widget_pane_g6_ParamLimits

0xe17b,	// (0x000648c8) bg_ai5_widget_pane_g6

0xe187,	// (0x000648d4) bg_ai5_widget_pane_g7_ParamLimits

0xe187,	// (0x000648d4) bg_ai5_widget_pane_g7

0xe193,	// (0x000648e0) bg_ai5_widget_pane_g8_ParamLimits

0xe193,	// (0x000648e0) bg_ai5_widget_pane_g8

0xe19f,	// (0x000648ec) bg_ai5_widget_pane_g9_ParamLimits

0xe19f,	// (0x000648ec) bg_ai5_widget_pane_g9

0x0008,

0xfe57,	// (0x000665a4) bg_ai5_widget_pane_g_ParamLimits

0xfe57,	// (0x000665a4) bg_ai5_widget_pane_g

0xe501,	// (0x00064c4e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe501,	// (0x00064c4e) cell_shortcut_ai5_widget_pane

0x16d3,	// (0x00057e20) bg_cell_shortcut_ai5_widget_pane

0xe512,	// (0x00064c5f) cell_grid_ai5_widget_pane_g1

0x16d3,	// (0x00057e20) highlight_cell_shortcut_ai5_widget_pane

0x907b,	// (0x0005f7c8) ai5_sk_left_pane_g1

0xe51b,	// (0x00064c68) ai5_sk_left_pane_g2

0xe523,	// (0x00064c70) ai5_sk_left_pane_g3

0xe52b,	// (0x00064c78) ai5_sk_left_pane_g4

0x0003,

0xfe6a,	// (0x000665b7) ai5_sk_left_pane_g

0xe533,	// (0x00064c80) ai5_sk_left_pane_t1

0x9083,	// (0x0005f7d0) ai5_sk_right_pane_g1

0xe541,	// (0x00064c8e) ai5_sk_right_pane_g2

0xe549,	// (0x00064c96) ai5_sk_right_pane_g3

0xe551,	// (0x00064c9e) ai5_sk_right_pane_g4

0x0003,

0xfe73,	// (0x000665c0) ai5_sk_right_pane_g

0xe559,	// (0x00064ca6) ai5_sk_right_pane_t1

0x9083,	// (0x0005f7d0) ai5_sk_middle_pane_g1

0x907b,	// (0x0005f7c8) ai5_sk_middle_pane_g2

0x909b,	// (0x0005f7e8) ai5_sk_middle_pane_g3

0xe549,	// (0x00064c96) ai5_sk_middle_pane_g4

0xe523,	// (0x00064c70) ai5_sk_middle_pane_g5

0xe567,	// (0x00064cb4) ai5_sk_middle_pane_g6

0xe56f,	// (0x00064cbc) ai5_sk_middle_pane_g7

0x0006,

0xfe7c,	// (0x000665c9) ai5_sk_middle_pane_g

0x733c,	// (0x0005da89) aid_touch_area_size_lc0_ParamLimits

0x733c,	// (0x0005da89) aid_touch_area_size_lc0

0x7eca,	// (0x0005e617) cell_hwr_candidate_pane_t1_ParamLimits

0x7358,	// (0x0005daa5) aid_touch_navi_pane

0x8ea1,	// (0x0005f5ee) status_dt_navi_pane_ParamLimits

0x8ea1,	// (0x0005f5ee) status_dt_navi_pane

0x8eae,	// (0x0005f5fb) status_dt_sta_pane_ParamLimits

0x8eae,	// (0x0005f5fb) status_dt_sta_pane

0xe577,	// (0x00064cc4) dt_sta_controll_pane

0xe584,	// (0x00064cd1) dt_sta_indi_pane

0xe595,	// (0x00064ce2) dt_sta_title_pane

0xe373,	// (0x00064ac0) bg_dt_sta_indi_pane_ParamLimits

0xe373,	// (0x00064ac0) bg_dt_sta_indi_pane

0xe5a8,	// (0x00064cf5) dt_sta_battery_pane

0xe5b0,	// (0x00064cfd) dt_sta_indi_pane_g1

0xe5b9,	// (0x00064d06) dt_sta_indi_pane_g2

0xe5c2,	// (0x00064d0f) dt_sta_indi_pane_g3

0x0002,

0xfe8b,	// (0x000665d8) dt_sta_indi_pane_g

0xe5cb,	// (0x00064d18) dt_sta_signal_pane

0xf176,	// (0x000658c3) bg_dt_sta_title_pane_ParamLimits

0xf176,	// (0x000658c3) bg_dt_sta_title_pane

0x9ed5,	// (0x00060622) dt_sta_title_pane_g1

0xe5d4,	// (0x00064d21) dt_sta_title_pane_t1_ParamLimits

0xe5d4,	// (0x00064d21) dt_sta_title_pane_t1

0xe1d9,	// (0x00064926) bg_dt_sta_control_pane

0xe5e9,	// (0x00064d36) dt_sta_controll_pane_g1

0xe5f2,	// (0x00064d3f) bg_dt_sta_title_pane_g1

0xe5fb,	// (0x00064d48) bg_dt_sta_title_pane_g2

0xe604,	// (0x00064d51) bg_dt_sta_title_pane_g3

0x0002,

0xfe92,	// (0x000665df) bg_dt_sta_title_pane_g

0xb839,	// (0x00061f86) bg_dt_sta_indi_pane_g1

0xe60d,	// (0x00064d5a) dt_sta_signal_pane_g1

0xe615,	// (0x00064d62) dt_sta_signal_pane_g2

0x0001,

0xfe99,	// (0x000665e6) dt_sta_signal_pane_g

0xe61d,	// (0x00064d6a) dt_sta_battery_pane_g1

0xe626,	// (0x00064d73) dt_sta_battery_pane_t1

0xb839,	// (0x00061f86) bg_dt_sta_control_pane_g1

0x12f4,	// (0x00057a41) fep_china_uni_eep_pane

0x12fc,	// (0x00057a49) fep_china_uni_entry_pane_ParamLimits

0x130c,	// (0x00057a59) popup_fep_china_uni_window_g1_ParamLimits

0x131c,	// (0x00057a69) popup_fep_china_uni_window_g2_ParamLimits

0x131c,	// (0x00057a69) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x00065e3e) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x00065e3e) popup_fep_china_uni_window_g

0xe635,	// (0x00064d82) fep_china_uni_eep_pane_g1

0xe63d,	// (0x00064d8a) fep_china_uni_eep_pane_t1

0xdd05,	// (0x00064452) aid_touch_area_size_smil_player

0x74ae,	// (0x0005dbfb) lc0_clock_pane

0x8f05,	// (0x0005f652) status_pane_g5_ParamLimits

0x8f05,	// (0x0005f652) status_pane_g5

0x6ef0,	// (0x0005d63d) popup_keymap_window

0x8ec3,	// (0x0005f610) status_icon_pane

0xdf14,	// (0x00064661) cell_ai5_widget_pane_g3_ParamLimits

0xdf2e,	// (0x0006467b) cell_ai5_widget_pane_g4_ParamLimits

0xdf3e,	// (0x0006468b) cell_ai5_widget_pane_g5_ParamLimits

0xdf66,	// (0x000646b3) cell_ai5_widget_pane_g8_ParamLimits

0xdf66,	// (0x000646b3) cell_ai5_widget_pane_g8

0xdf7a,	// (0x000646c7) cell_ai5_widget_pane_g9_ParamLimits

0xdf7a,	// (0x000646c7) cell_ai5_widget_pane_g9

0xdf8e,	// (0x000646db) cell_ai5_widget_pane_g10_ParamLimits

0xdf8e,	// (0x000646db) cell_ai5_widget_pane_g10

0xe64c,	// (0x00064d99) status_icon_pane_g1

0xe1d9,	// (0x00064926) bg_popup_sub_pane_cp13

0xe654,	// (0x00064da1) popup_keymap_window_t1

0x6c1b,	// (0x0005d368) control_pane_g6_ParamLimits

0x6c1b,	// (0x0005d368) control_pane_g6

0x6c28,	// (0x0005d375) control_pane_g7_ParamLimits

0x6c28,	// (0x0005d375) control_pane_g7

0x6c35,	// (0x0005d382) control_pane_g8_ParamLimits

0x6c35,	// (0x0005d382) control_pane_g8

0xe577,	// (0x00064cc4) dt_sta_controll_pane_ParamLimits

0xe584,	// (0x00064cd1) dt_sta_indi_pane_ParamLimits

0xe595,	// (0x00064ce2) dt_sta_title_pane_ParamLimits

0xf0c1,	// (0x0006580e) aid_size_touch_scroll_bar_cale

0x5446,	// (0x0005bb93) popup_discreet_window_ParamLimits

0x5446,	// (0x0005bb93) popup_discreet_window

0x54c0,	// (0x0005bc0d) popup_sk_window

0x9719,	// (0x0005fe66) bg_popup_sub_pane_cp28_ParamLimits

0x9719,	// (0x0005fe66) bg_popup_sub_pane_cp28

0xe662,	// (0x00064daf) popup_discreet_window_g1_ParamLimits

0xe662,	// (0x00064daf) popup_discreet_window_g1

0xe682,	// (0x00064dcf) popup_discreet_window_t1_ParamLimits

0xe682,	// (0x00064dcf) popup_discreet_window_t1

0xe6a0,	// (0x00064ded) popup_discreet_window_t2_ParamLimits

0xe6a0,	// (0x00064ded) popup_discreet_window_t2

0x0002,

0xfe9e,	// (0x000665eb) popup_discreet_window_t_ParamLimits

0xfe9e,	// (0x000665eb) popup_discreet_window_t

0x89eb,	// (0x0005f138) popup_sk_window_g1

0x89f5,	// (0x0005f142) popup_sk_window_g2

0x0001,

0xfea5,	// (0x000665f2) popup_sk_window_g

0x89fd,	// (0x0005f14a) popup_sk_window_t1

0x8a0b,	// (0x0005f158) popup_sk_window_t1_copy1

0xdf00,	// (0x0006464d) cell_ai5_widget_pane_g2_ParamLimits

0xe09b,	// (0x000647e8) cell_ai5_widget_pane_t9_ParamLimits

0xe09b,	// (0x000647e8) cell_ai5_widget_pane_t9

0xe1d9,	// (0x00064926) main_fep_fshwr2_pane

0x8a19,	// (0x0005f166) aid_fshwr2_btn_pane

0x8a2d,	// (0x0005f17a) aid_fshwr2_syb_pane

0x8a41,	// (0x0005f18e) aid_fshwr2_txt_pane

0x8a51,	// (0x0005f19e) fshwr2_func_candi_pane

0x8a75,	// (0x0005f1c2) fshwr2_hwr_syb_pane

0x8a8f,	// (0x0005f1dc) fshwr2_icf_pane

0x536d,	// (0x0005baba) fshwr2_icf_bg_pane

0x8abd,	// (0x0005f20a) fshwr2_icf_pane_t1_ParamLimits

0x8abd,	// (0x0005f20a) fshwr2_icf_pane_t1

0x1271,	// (0x000579be) fshwr2_func_candi_pane_g1

0xe6f2,	// (0x00064e3f) fshwr2_func_candi_row_pane_ParamLimits

0xe6f2,	// (0x00064e3f) fshwr2_func_candi_row_pane

0x8ad6,	// (0x0005f223) cell_fshwr2_syb_pane_ParamLimits

0x8ad6,	// (0x0005f223) cell_fshwr2_syb_pane

0x8af9,	// (0x0005f246) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8af9,	// (0x0005f246) fshwr2_hwr_syb_pane_g1

0x536d,	// (0x0005baba) bg_popup_call_pane_cp01

0x8b07,	// (0x0005f254) fshwr2_func_candi_cell_pane_ParamLimits

0x8b07,	// (0x0005f254) fshwr2_func_candi_cell_pane

0x9d75,	// (0x000604c2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d75,	// (0x000604c2) fshwr2_func_candi_cell_bg_pane

0x8b52,	// (0x0005f29f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8b52,	// (0x0005f29f) fshwr2_func_candi_cell_pane_g1

0x8b72,	// (0x0005f2bf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8b72,	// (0x0005f2bf) fshwr2_func_candi_cell_pane_t1

0x536d,	// (0x0005baba) bg_button_pane_cp08

0xf51b,	// (0x00065c68) cell_fshwr2_syb_bg_pane

0x8b85,	// (0x0005f2d2) cell_fshwr2_syb_bg_pane_g1

0x8b99,	// (0x0005f2e6) cell_fshwr2_syb_bg_pane_t1

0xf176,	// (0x000658c3) main_tmo_pane

0xa20e,	// (0x0006095b) uni_indicator_pane_g1_ParamLimits

0xa221,	// (0x0006096e) uni_indicator_pane_g2_ParamLimits

0xa233,	// (0x00060980) uni_indicator_pane_g3_ParamLimits

0xa242,	// (0x0006098f) uni_indicator_pane_g4_ParamLimits

0xa242,	// (0x0006098f) uni_indicator_pane_g4

0xa256,	// (0x000609a3) uni_indicator_pane_g5_ParamLimits

0xa256,	// (0x000609a3) uni_indicator_pane_g5

0xa256,	// (0x000609a3) uni_indicator_pane_g6_ParamLimits

0xa256,	// (0x000609a3) uni_indicator_pane_g6

0xf8f5,	// (0x00066042) uni_indicator_pane_g_ParamLimits

0xcd34,	// (0x00063481) popup_tmo_note_window_ParamLimits

0xcd34,	// (0x00063481) popup_tmo_note_window

0x823d,	// (0x0005e98a) fshwr2_bg_pane

0x8b63,	// (0x0005f2b0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8b63,	// (0x0005f2b0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaa,	// (0x000665f7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaa,	// (0x000665f7) fshwr2_func_candi_cell_pane_g

0x7e83,	// (0x0005e5d0) bg_popup_window_pane_cp01

0x8baf,	// (0x0005f2fc) bg_popup_window_pane_g1_cp01

0xe719,	// (0x00064e66) bg_popup_window_pane_cp22_ParamLimits

0xe719,	// (0x00064e66) bg_popup_window_pane_cp22

0xe727,	// (0x00064e74) listscroll_tmo_link_pane_ParamLimits

0xe727,	// (0x00064e74) listscroll_tmo_link_pane

0xe767,	// (0x00064eb4) popup_tmo_note_window_g1_ParamLimits

0xe767,	// (0x00064eb4) popup_tmo_note_window_g1

0xe774,	// (0x00064ec1) tmo_note_info_pane_ParamLimits

0xe774,	// (0x00064ec1) tmo_note_info_pane

0xe78e,	// (0x00064edb) list_tmo_note_info_pane_g1_ParamLimits

0xe78e,	// (0x00064edb) list_tmo_note_info_pane_g1

0xe7a5,	// (0x00064ef2) list_tmo_note_info_pane_g2_ParamLimits

0xe7a5,	// (0x00064ef2) list_tmo_note_info_pane_g2

0x0001,

0xfeaf,	// (0x000665fc) list_tmo_note_info_pane_g_ParamLimits

0xfeaf,	// (0x000665fc) list_tmo_note_info_pane_g

0xe7c1,	// (0x00064f0e) list_tmo_note_info_text_pane_ParamLimits

0xe7c1,	// (0x00064f0e) list_tmo_note_info_text_pane

0xe842,	// (0x00064f8f) list_tmo_link_pane

0xe84f,	// (0x00064f9c) scroll_pane_cp20

0xe85c,	// (0x00064fa9) list_single_tmo_link_pane_ParamLimits

0xe85c,	// (0x00064fa9) list_single_tmo_link_pane

0xe86c,	// (0x00064fb9) list_single_tmo_link_pane_t1

0xe87a,	// (0x00064fc7) list_tmo_note_info_text_pane_t1_ParamLimits

0xe87a,	// (0x00064fc7) list_tmo_note_info_text_pane_t1

0x6174,	// (0x0005c8c1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6174,	// (0x0005c8c1) aid_size_touch_scroll_bar_cp01

0x6081,	// (0x0005c7ce) aid_size_touch_slider_marker

0x54a8,	// (0x0005bbf5) popup_settings_window_ParamLimits

0x54a8,	// (0x0005bbf5) popup_settings_window

0x3b3b,	// (0x0005a288) popup_candi_list_indi_window

0x7358,	// (0x0005daa5) aid_touch_navi_pane_ParamLimits

0x8198,	// (0x0005e8e5) rs_clock_indi_pane

0x81a1,	// (0x0005e8ee) sctrl_sk_bottom_pane_ParamLimits

0x81b2,	// (0x0005e8ff) sctrl_sk_top_pane_ParamLimits

0x82ad,	// (0x0005e9fa) popup_fep_tooltip_window

0xde74,	// (0x000645c1) aid_size_cell_widget_grid_ParamLimits

0xdee9,	// (0x00064636) cell_ai5_widget_pane_g1_ParamLimits

0xdee9,	// (0x00064636) cell_ai5_widget_pane_g1

0xdf4e,	// (0x0006469b) cell_ai5_widget_pane_g6_ParamLimits

0xdf5a,	// (0x000646a7) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe23,	// (0x00066570) cell_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x00066570) cell_ai5_widget_pane_g

0xe0ca,	// (0x00064817) cell_ai5_widget_pane_t10_ParamLimits

0xe0ca,	// (0x00064817) cell_ai5_widget_pane_t10

0xe10d,	// (0x0006485a) grid_ai5_widget_pane_ParamLimits

0xe1ab,	// (0x000648f8) cell_contacts_ai5_widget_pane_ParamLimits

0xe1ab,	// (0x000648f8) cell_contacts_ai5_widget_pane

0xe6b5,	// (0x00064e02) popup_discreet_window_t3_ParamLimits

0xe6b5,	// (0x00064e02) popup_discreet_window_t3

0x8aa7,	// (0x0005f1f4) popup_fshwr2_char_preview_window_ParamLimits

0x8aa7,	// (0x0005f1f4) popup_fshwr2_char_preview_window

0xe7df,	// (0x00064f2c) tmo_note_info_pane_t1

0xe7f4,	// (0x00064f41) tmo_note_info_pane_t2

0xe809,	// (0x00064f56) tmo_note_info_pane_t3

0xe81e,	// (0x00064f6b) tmo_note_info_pane_t4

0xe830,	// (0x00064f7d) tmo_note_info_pane_t5

0x0004,

0xfeb4,	// (0x00066601) tmo_note_info_pane_t

0xe842,	// (0x00064f8f) list_tmo_link_pane_ParamLimits

0xe84f,	// (0x00064f9c) scroll_pane_cp20_ParamLimits

0x536d,	// (0x0005baba) bg_popup_fep_char_preview_window_cp01

0xe893,	// (0x00064fe0) popup_fshwr2_char_preview_window_t1

0xe8a1,	// (0x00064fee) popup_candi_list_indi_window_g1

0xe8aa,	// (0x00064ff7) bg_cell_contacts_ai5_widget_pane

0xe8b6,	// (0x00065003) cell_contacts_ai5_widget_pane_g1

0xbf13,	// (0x00062660) cell_contacts_ai5_widget_pane_g2

0xe8cb,	// (0x00065018) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebf,	// (0x0006660c) cell_contacts_ai5_widget_pane_g

0xe8d7,	// (0x00065024) cell_contacts_ai5_widget_pane_t1

0xf176,	// (0x000658c3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe94e,	// (0x0006509b) settings_container_pane

0x16d3,	// (0x00057e20) listscroll_set_pane_copy1

0xadc7,	// (0x00061514) scroll_pane_cp121_copy1

0x94be,	// (0x0005fc0b) set_content_pane_copy1

0xe95a,	// (0x000650a7) aid_height_set_list_copy1_ParamLimits

0xe95a,	// (0x000650a7) aid_height_set_list_copy1

0xa43e,	// (0x00060b8b) aid_size_parent_copy1_ParamLimits

0xa43e,	// (0x00060b8b) aid_size_parent_copy1

0xe966,	// (0x000650b3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe966,	// (0x000650b3) button_value_adjust_pane_cp6_copy1

0xf51b,	// (0x00065c68) list_highlight_pane_cp2_copy1_ParamLimits

0xf51b,	// (0x00065c68) list_highlight_pane_cp2_copy1

0xe97a,	// (0x000650c7) list_set_pane_copy1_ParamLimits

0xe97a,	// (0x000650c7) list_set_pane_copy1

0xe8e9,	// (0x00065036) main_pane_set_t1_copy1_ParamLimits

0xe8e9,	// (0x00065036) main_pane_set_t1_copy1

0xe923,	// (0x00065070) main_pane_set_t2_copy1_ParamLimits

0xe923,	// (0x00065070) main_pane_set_t2_copy1

0xea27,	// (0x00065174) main_pane_set_t3_copy1

0xea35,	// (0x00065182) main_pane_set_t4_copy1

0xe942,	// (0x0006508f) set_content_pane_g1_copy1_ParamLimits

0xe942,	// (0x0006508f) set_content_pane_g1_copy1

0xea43,	// (0x00065190) setting_code_pane_copy1

0xea4b,	// (0x00065198) setting_slider_graphic_pane_copy1

0xea4b,	// (0x00065198) setting_slider_pane_copy1

0xea53,	// (0x000651a0) setting_text_pane_copy1

0xea53,	// (0x000651a0) setting_volume_pane_copy1

0xea43,	// (0x00065190) settings_code_pane_cp2_copy1

0xea5b,	// (0x000651a8) settings_code_pane_cp_copy1_ParamLimits

0xea5b,	// (0x000651a8) settings_code_pane_cp_copy1

0x8bb8,	// (0x0005f305) volume_set_pane_copy1

0xea6f,	// (0x000651bc) volume_set_pane_g10_copy1

0xea77,	// (0x000651c4) volume_set_pane_g1_copy1

0xea7f,	// (0x000651cc) volume_set_pane_g2_copy1

0xea87,	// (0x000651d4) volume_set_pane_g3_copy1

0xea8f,	// (0x000651dc) volume_set_pane_g4_copy1

0xea97,	// (0x000651e4) volume_set_pane_g5_copy1

0xea9f,	// (0x000651ec) volume_set_pane_g6_copy1

0xeaa7,	// (0x000651f4) volume_set_pane_g7_copy1

0xeaaf,	// (0x000651fc) volume_set_pane_g8_copy1

0xeab7,	// (0x00065204) volume_set_pane_g9_copy1

0xe23b,	// (0x00064988) bg_set_opt_pane_cp_copy1_ParamLimits

0xe23b,	// (0x00064988) bg_set_opt_pane_cp_copy1

0x8bc0,	// (0x0005f30d) setting_slider_pane_t1_copy1_ParamLimits

0x8bc0,	// (0x0005f30d) setting_slider_pane_t1_copy1

0x8bdf,	// (0x0005f32c) setting_slider_pane_t2_copy1_ParamLimits

0x8bdf,	// (0x0005f32c) setting_slider_pane_t2_copy1

0x8bf9,	// (0x0005f346) setting_slider_pane_t3_copy1_ParamLimits

0x8bf9,	// (0x0005f346) setting_slider_pane_t3_copy1

0x8c11,	// (0x0005f35e) slider_set_pane_copy1_ParamLimits

0x8c11,	// (0x0005f35e) slider_set_pane_copy1

0xf1ce,	// (0x0006591b) set_opt_bg_pane_g1_copy2

0xf1d6,	// (0x00065923) set_opt_bg_pane_g2_copy2

0xeabf,	// (0x0006520c) set_opt_bg_pane_g3_copy2

0xf1e6,	// (0x00065933) set_opt_bg_pane_g4_copy2

0xf1ee,	// (0x0006593b) set_opt_bg_pane_g5_copy2

0xf1f6,	// (0x00065943) set_opt_bg_pane_g6_copy2

0xeac9,	// (0x00065216) set_opt_bg_pane_g7_copy2

0xead1,	// (0x0006521e) set_opt_bg_pane_g8_copy2

0xeadb,	// (0x00065228) set_opt_bg_pane_g9_copy2

0x8c27,	// (0x0005f374) aid_size_touch_slider_mark_copy1_ParamLimits

0x8c27,	// (0x0005f374) aid_size_touch_slider_mark_copy1

0xeae5,	// (0x00065232) slider_set_pane_g1_copy1

0x8c3b,	// (0x0005f388) slider_set_pane_g2_copy1

0x799b,	// (0x0005e0e8) slider_set_pane_g3_copy1_ParamLimits

0x799b,	// (0x0005e0e8) slider_set_pane_g3_copy1

0x79af,	// (0x0005e0fc) slider_set_pane_g4_copy1_ParamLimits

0x79af,	// (0x0005e0fc) slider_set_pane_g4_copy1

0x79c7,	// (0x0005e114) slider_set_pane_g5_copy1_ParamLimits

0x79c7,	// (0x0005e114) slider_set_pane_g5_copy1

0x799b,	// (0x0005e0e8) slider_set_pane_g6_copy1_ParamLimits

0x799b,	// (0x0005e0e8) slider_set_pane_g6_copy1

0x8c43,	// (0x0005f390) slider_set_pane_g7_copy1_ParamLimits

0x8c43,	// (0x0005f390) slider_set_pane_g7_copy1

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp2_copy1

0xeaee,	// (0x0006523b) setting_slider_graphic_pane_g1_copy1

0xeaf7,	// (0x00065244) setting_slider_graphic_pane_t1_copy1

0xeb07,	// (0x00065254) setting_slider_graphic_pane_t2_copy1

0xeb17,	// (0x00065264) slider_set_pane_cp_copy1

0xeb27,	// (0x00065274) input_focus_pane_cp1_copy1

0xeb30,	// (0x0006527d) list_set_text_pane_copy1

0xeb38,	// (0x00065285) setting_text_pane_g1_copy1

0x40ce,	// (0x0005a81b) set_text_pane_t1_copy1

0xeb27,	// (0x00065274) input_focus_pane_cp2_copy1

0xeb38,	// (0x00065285) setting_code_pane_g1_copy1

0xeb41,	// (0x0006528e) setting_code_pane_t1_copy1

0xeb4f,	// (0x0006529c) list_set_graphic_pane_copy1

0xe1ed,	// (0x0006493a) bg_set_opt_pane_cp4_copy1

0x144c,	// (0x00057b99) list_set_graphic_pane_g1_copy1_ParamLimits

0x144c,	// (0x00057b99) list_set_graphic_pane_g1_copy1

0xeb63,	// (0x000652b0) list_set_graphic_pane_g2_copy1

0x1464,	// (0x00057bb1) list_set_graphic_pane_t1_copy1_ParamLimits

0x1464,	// (0x00057bb1) list_set_graphic_pane_t1_copy1

0xb839,	// (0x00061f86) rs_clock_indi_pane_g1

0xeb6b,	// (0x000652b8) rs_clock_indi_pane_t1

0xeb79,	// (0x000652c6) rs_indi_pane

0xeb81,	// (0x000652ce) rs_indi_pane_g1

0xeb8a,	// (0x000652d7) rs_indi_pane_g2

0xe8a1,	// (0x00064fee) rs_indi_pane_g3

0x0002,

0xfec6,	// (0x00066613) rs_indi_pane_g

0x16d3,	// (0x00057e20) bg_popup_preview_window_pane_cp03

0xeb93,	// (0x000652e0) popup_fep_tooltip_window_t1

0xc4e3,	// (0x00062c30) popup_note2_window_g2_ParamLimits

0xc4e3,	// (0x00062c30) popup_note2_window_g2

0x0001,

0xfc5a,	// (0x000663a7) popup_note2_window_g_ParamLimits

0xfc5a,	// (0x000663a7) popup_note2_window_g

0xc9d0,	// (0x0006311d) bg_popup_sub_pane_cp11_ParamLimits

0xc9dd,	// (0x0006312a) cell_ai3_links_pane_g1_ParamLimits

0xc9f4,	// (0x00063141) cell_ai3_links_pane_t1

0x40ce,	// (0x0005a81b) set_text_pane_t1_copy1_ParamLimits

0x1611,	// (0x00057d5e) cell_graphic_popup_pane_cp2_ParamLimits

0x1611,	// (0x00057d5e) cell_graphic_popup_pane_cp2

0xeba1,	// (0x000652ee) cell_graphic_popup_pane_g1_cp2

0xe4cd,	// (0x00064c1a) cell_graphic_popup_pane_g2_cp2

0xeba9,	// (0x000652f6) cell_graphic_popup_pane_g3_cp2

0xebb1,	// (0x000652fe) cell_graphic_popup_pane_t2_cp2

0xe4de,	// (0x00064c2b) grid_highlight_pane_cp3_cp2

0xf439,	// (0x00065b86) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf176,	// (0x000658c3) main_tmo_pane_ParamLimits

0xcd28,	// (0x00063475) popup_tmo_big_image_note_window

0xded8,	// (0x00064625) cell_ai5_widget_list_pane

0xdee0,	// (0x0006462d) cell_ai5_widget_lrg_icon_pane

0xe7df,	// (0x00064f2c) tmo_note_info_pane_t1_ParamLimits

0xe7f4,	// (0x00064f41) tmo_note_info_pane_t2_ParamLimits

0xe809,	// (0x00064f56) tmo_note_info_pane_t3_ParamLimits

0xe81e,	// (0x00064f6b) tmo_note_info_pane_t4_ParamLimits

0xe830,	// (0x00064f7d) tmo_note_info_pane_t5_ParamLimits

0xfeb4,	// (0x00066601) tmo_note_info_pane_t_ParamLimits

0xe94e,	// (0x0006509b) settings_container_pane_ParamLimits

0xeb1f,	// (0x0006526c) indicator_popup_pane_cp5

0xeb1f,	// (0x0006526c) indicator_popup_pane_cp6

0xeb4f,	// (0x0006529c) list_set_graphic_pane_copy1_ParamLimits

0xe1d9,	// (0x00064926) bg_popup_window_pane_cp23

0xebbf,	// (0x0006530c) popup_tmo_big_image_note_window_g1

0xebc8,	// (0x00065315) popup_tmo_big_image_note_window_t1

0xebd8,	// (0x00065325) popup_tmo_big_image_note_window_t2

0xebe8,	// (0x00065335) popup_tmo_big_image_note_window_t3

0x0002,

0xfecd,	// (0x0006661a) popup_tmo_big_image_note_window_t

0xb839,	// (0x00061f86) cell_ai5_widget_lrg_icon_pane_g1

0xebf8,	// (0x00065345) cell_ai5_widget_lrg_icon_pane_t1

0xec06,	// (0x00065353) cell_ai5_widget_list_row_pane_ParamLimits

0xec06,	// (0x00065353) cell_ai5_widget_list_row_pane

0xec1d,	// (0x0006536a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec1d,	// (0x0006536a) cell_ai5_widget_list_row_pane_g1

0xec2a,	// (0x00065377) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xec2a,	// (0x00065377) cell_ai5_widget_list_row_pane_t1

0xec55,	// (0x000653a2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xec55,	// (0x000653a2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed4,	// (0x00066621) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed4,	// (0x00066621) cell_ai5_widget_list_row_pane_t

0x536d,	// (0x0005baba) main_fep_vtchi_ss_pane

0xeca5,	// (0x000653f2) popup_fep_char_pre_window

0xecad,	// (0x000653fa) popup_fep_ituss_window

0xecdf,	// (0x0006542c) popup_fep_vkbss_window

0xf51b,	// (0x00065c68) grid_vkbss_keypad_pane_ParamLimits

0xf51b,	// (0x00065c68) grid_vkbss_keypad_pane

0xed25,	// (0x00065472) ituss_keypad_pane

0x8c84,	// (0x0005f3d1) aid_vkbss_key_offset_ParamLimits

0x8c84,	// (0x0005f3d1) aid_vkbss_key_offset

0x8c90,	// (0x0005f3dd) cell_vkbss_key_pane_ParamLimits

0x8c90,	// (0x0005f3dd) cell_vkbss_key_pane

0xed35,	// (0x00065482) bg_cell_vkbss_key_g1_ParamLimits

0xed35,	// (0x00065482) bg_cell_vkbss_key_g1

0xed41,	// (0x0006548e) cell_vkbss_key_3p_pane_ParamLimits

0xed41,	// (0x0006548e) cell_vkbss_key_3p_pane

0xed77,	// (0x000654c4) cell_vkbss_key_g1_ParamLimits

0xed77,	// (0x000654c4) cell_vkbss_key_g1

0xedad,	// (0x000654fa) cell_vkbss_key_t1_ParamLimits

0xedad,	// (0x000654fa) cell_vkbss_key_t1

0x8cdb,	// (0x0005f428) cell_ituss_key_pane_ParamLimits

0x8cdb,	// (0x0005f428) cell_ituss_key_pane

0xee09,	// (0x00065556) bg_cell_ituss_key_g1_ParamLimits

0xee09,	// (0x00065556) bg_cell_ituss_key_g1

0xee15,	// (0x00065562) cell_ituss_key_pane_g1_ParamLimits

0xee15,	// (0x00065562) cell_ituss_key_pane_g1

0x8cec,	// (0x0005f439) cell_ituss_key_pane_g2_ParamLimits

0x8cec,	// (0x0005f439) cell_ituss_key_pane_g2

0x0005,

0xfedb,	// (0x00066628) cell_ituss_key_pane_g_ParamLimits

0xfedb,	// (0x00066628) cell_ituss_key_pane_g

0x8d70,	// (0x0005f4bd) cell_ituss_key_t1_ParamLimits

0x8d70,	// (0x0005f4bd) cell_ituss_key_t1

0x8daa,	// (0x0005f4f7) cell_ituss_key_t2_ParamLimits

0x8daa,	// (0x0005f4f7) cell_ituss_key_t2

0x8ddc,	// (0x0005f529) cell_ituss_key_t3_ParamLimits

0x8ddc,	// (0x0005f529) cell_ituss_key_t3

0x8e0d,	// (0x0005f55a) cell_ituss_key_t4_ParamLimits

0x8e0d,	// (0x0005f55a) cell_ituss_key_t4

0x0005,

0xfee8,	// (0x00066635) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00066635) cell_ituss_key_t

0xee3b,	// (0x00065588) cell_vkbss_key_3p_pane_g1

0xee43,	// (0x00065590) cell_vkbss_key_3p_pane_g2

0xee4b,	// (0x00065598) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00066642) cell_vkbss_key_3p_pane_g

0x16d3,	// (0x00057e20) bg_popup_fep_char_preview_window_cp02

0xee53,	// (0x000655a0) popup_fep_char_pre_window_t1

0xde61,	// (0x000645ae) main_ai5_sk_pane

0xe8aa,	// (0x00064ff7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe8b6,	// (0x00065003) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbf13,	// (0x00062660) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe8cb,	// (0x00065018) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebf,	// (0x0006660c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe8d7,	// (0x00065024) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf176,	// (0x000658c3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee61,	// (0x000655ae) main_ai5_sk_pane_g1

0x955a,	// (0x0005fca7) popup_query_code_window_g1

0xecc6,	// (0x00065413) popup_fep_vkb_icf_pane

0xecf9,	// (0x00065446) popup_fep_vtchi_icf_pane

0xee6a,	// (0x000655b7) bg_icf_pane

0xee6a,	// (0x000655b7) list_vkb_icf_pane

0xee76,	// (0x000655c3) bg_icf_pane_cp01

0xee89,	// (0x000655d6) vtchi_icf_list_pane

0xeee9,	// (0x00065636) list_vkb_icf_pane_t1_ParamLimits

0xeee9,	// (0x00065636) list_vkb_icf_pane_t1

0xef0e,	// (0x0006565b) vtchi_icf_list_pane_t1_ParamLimits

0xef0e,	// (0x0006565b) vtchi_icf_list_pane_t1

0xecad,	// (0x000653fa) popup_fep_ituss_window_ParamLimits

0xecf9,	// (0x00065446) popup_fep_vtchi_icf_pane_ParamLimits

0xed25,	// (0x00065472) ituss_keypad_pane_ParamLimits

0x8c7a,	// (0x0005f3c7) ituss_sks_pane

0xee6a,	// (0x000655b7) bg_icf_pane_ParamLimits

0xec7d,	// (0x000653ca) icf_edit_indi_pane_ParamLimits

0xec7d,	// (0x000653ca) icf_edit_indi_pane

0xee6a,	// (0x000655b7) list_vkb_icf_pane_ParamLimits

0xee76,	// (0x000655c3) bg_icf_pane_cp01_ParamLimits

0xec98,	// (0x000653e5) icf_edit_indi_pane_cp01_ParamLimits

0xec98,	// (0x000653e5) icf_edit_indi_pane_cp01

0xee89,	// (0x000655d6) vtchi_query_pane

0xdcd5,	// (0x00064422) icf_edit_indi_pane_g1_ParamLimits

0xdcd5,	// (0x00064422) icf_edit_indi_pane_g1

0xef89,	// (0x000656d6) icf_edit_indi_pane_g2_ParamLimits

0xef89,	// (0x000656d6) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0006666d) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0006666d) icf_edit_indi_pane_g

0xef9d,	// (0x000656ea) icf_edit_indi_pane_t1

0xef32,	// (0x0006567f) bg_input_focus_pane_cp042

0xf0b8,	// (0x00065805) vtchi_button_pane

0xef3b,	// (0x00065688) vtchi_query_pane_t1

0xef49,	// (0x00065696) vtchi_query_pane_t2

0xef57,	// (0x000656a4) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0006665c) vtchi_query_pane_t

0x536d,	// (0x0005baba) bg_button_pane_cp13

0xef65,	// (0x000656b2) vtchi_button_pane_g1

0x8e8e,	// (0x0005f5db) ituss_sks_pane_g1

0x8e99,	// (0x0005f5e6) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00066663) ituss_sks_pane_g

0xef6d,	// (0x000656ba) ituss_sks_pane_t1

0xef7b,	// (0x000656c8) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00066668) ituss_sks_pane_t

0xb1df,	// (0x0006192c) indicator_nsta_pane_cp_g1

0xb1e8,	// (0x00061935) indicator_nsta_pane_cp_g2

0xb1f0,	// (0x0006193d) indicator_nsta_pane_cp_g3

0xb1f8,	// (0x00061945) indicator_nsta_pane_cp_g4

0xb1e8,	// (0x00061935) indicator_nsta_pane_cp_g5

0xb1f0,	// (0x0006193d) indicator_nsta_pane_cp_g6

0x0005,

0xfa98,	// (0x000661e5) indicator_nsta_pane_cp_g

0xda28,	// (0x00064175) cell_graphic2_pane_t2_ParamLimits

0xda28,	// (0x00064175) cell_graphic2_pane_t2

0x0001,

0xfdaa,	// (0x000664f7) cell_graphic2_pane_t_ParamLimits

0xfdaa,	// (0x000664f7) cell_graphic2_pane_t

0xda54,	// (0x000641a1) cell_graphic2_control_pane_t1

0x663e,	// (0x0005cd8b) signal_pane_g3_ParamLimits

0x663e,	// (0x0005cd8b) signal_pane_g3

0x6650,	// (0x0005cd9d) signal_pane_g4_ParamLimits

0x6650,	// (0x0005cd9d) signal_pane_g4

0xec67,	// (0x000653b4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xec67,	// (0x000653b4) cell_ai5_widget_list_row_pane_t3

0xee29,	// (0x00065576) cell_ituss_key_pane_t1_ParamLimits

0xee29,	// (0x00065576) cell_ituss_key_pane_t1

0x918d,	// (0x0005f8da) form_field_data_wide_pane_vc_t2_ParamLimits

0x918d,	// (0x0005f8da) form_field_data_wide_pane_vc_t2

0x91a1,	// (0x0005f8ee) form_field_data_wide_pane_vc_t3_ParamLimits

0x91a1,	// (0x0005f8ee) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x00065f2a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x00065f2a) form_field_data_wide_pane_vc_t

0xae89,	// (0x000615d6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae89,	// (0x000615d6) form_field_slider_wide_pane_vc_t3

0xaf67,	// (0x000616b4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf67,	// (0x000616b4) form_field_popup_wide_pane_vc_t2

0xaf7e,	// (0x000616cb) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf7e,	// (0x000616cb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa87,	// (0x000661d4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x000661d4) form_field_popup_wide_pane_vc_t

0x8a19,	// (0x0005f166) aid_fshwr2_btn_pane_ParamLimits

0x8a2d,	// (0x0005f17a) aid_fshwr2_syb_pane_ParamLimits

0x8a41,	// (0x0005f18e) aid_fshwr2_txt_pane_ParamLimits

0x823d,	// (0x0005e98a) fshwr2_bg_pane_ParamLimits

0x8a51,	// (0x0005f19e) fshwr2_func_candi_pane_ParamLimits

0x8a75,	// (0x0005f1c2) fshwr2_hwr_syb_pane_ParamLimits

0x8a8f,	// (0x0005f1dc) fshwr2_icf_pane_ParamLimits

0xae43,	// (0x00061590) list_double_graphic_pane_vc_g4_ParamLimits

0xae43,	// (0x00061590) list_double_graphic_pane_vc_g4

0x8d0c,	// (0x0005f459) cell_ituss_key_pane_g3_ParamLimits

0x8d0c,	// (0x0005f459) cell_ituss_key_pane_g3

0x8e3e,	// (0x0005f58b) cell_ituss_key_t5_ParamLimits

0x8e3e,	// (0x0005f58b) cell_ituss_key_t5

0xecdf,	// (0x0006542c) popup_fep_vkbss_window_ParamLimits

0xde6b,	// (0x000645b8) aid_cell_ai5_quarter

0xef9d,	// (0x000656ea) icf_edit_indi_pane_t1_ParamLimits

0x582c,	// (0x0005bf79) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x582c,	// (0x0005bf79) aid_tch_indicator_popup_pane_cp2

0x583f,	// (0x0005bf8c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x583f,	// (0x0005bf8c) aid_tch_query_popup_data_pane_cp2

0x9502,	// (0x0005fc4f) aid_tch_query_popup_pane_ParamLimits

0x9502,	// (0x0005fc4f) aid_tch_query_popup_pane

0x9502,	// (0x0005fc4f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9502,	// (0x0005fc4f) aid_tch_query_popup_data_pane_cp1

0xf51b,	// (0x00065c68) cell_fshwr2_syb_bg_pane_ParamLimits

0x8b85,	// (0x0005f2d2) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8b99,	// (0x0005f2e6) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xecc6,	// (0x00065413) popup_fep_vkb_icf_pane_ParamLimits

0x8859,	// (0x0005efa6) bg_popup_fep_char_preview_window_g10

0xdfa2,	// (0x000646ef) cell_ai5_widget_pane_g11_ParamLimits

0xdfa2,	// (0x000646ef) cell_ai5_widget_pane_g11

0xdfae,	// (0x000646fb) cell_ai5_widget_pane_g12_ParamLimits

0xdfae,	// (0x000646fb) cell_ai5_widget_pane_g12

0xdfba,	// (0x00064707) cell_ai5_widget_pane_g13_ParamLimits

0xdfba,	// (0x00064707) cell_ai5_widget_pane_g13

0xe0e9,	// (0x00064836) cell_ai5_widget_pane_t11_ParamLimits

0xe0e9,	// (0x00064836) cell_ai5_widget_pane_t11

0xe0fb,	// (0x00064848) cell_ai5_widget_pane_t12_ParamLimits

0xe0fb,	// (0x00064848) cell_ai5_widget_pane_t12

0x8d18,	// (0x0005f465) cell_ituss_key_pane_g4_ParamLimits

0x8d18,	// (0x0005f465) cell_ituss_key_pane_g4

0x8d34,	// (0x0005f481) cell_ituss_key_pane_g5_ParamLimits

0x8d34,	// (0x0005f481) cell_ituss_key_pane_g5

0x8d50,	// (0x0005f49d) cell_ituss_key_pane_g6_ParamLimits

0x8d50,	// (0x0005f49d) cell_ituss_key_pane_g6

0x9073,	// (0x0005f7c0) bg_icf_pane_g1

0xee91,	// (0x000655de) bg_icf_pane_g2

0xee9d,	// (0x000655ea) bg_icf_pane_g3

0xeea7,	// (0x000655f4) bg_icf_pane_g4

0xeeb3,	// (0x00065600) bg_icf_pane_g5

0xeebd,	// (0x0006560a) bg_icf_pane_g6

0xeec9,	// (0x00065616) bg_icf_pane_g7

0xeed3,	// (0x00065620) bg_icf_pane_g8

0xeedf,	// (0x0006562c) bg_icf_pane_g9

0x0008,

0xfefc,	// (0x00066649) bg_icf_pane_g

0xed12,	// (0x0006545f) popup_hyb_candi_window_ParamLimits

0xed12,	// (0x0006545f) popup_hyb_candi_window

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp01_ParamLimits

0x90ff,	// (0x0005f84c) bg_popup_sub_pane_cp01

0xefb6,	// (0x00065703) entry_hyb_candi_pane_ParamLimits

0xefb6,	// (0x00065703) entry_hyb_candi_pane

0xefc5,	// (0x00065712) grid_hyb_candi_pane_ParamLimits

0xefc5,	// (0x00065712) grid_hyb_candi_pane

0xefda,	// (0x00065727) grid_hyb_phrase_pane_ParamLimits

0xefda,	// (0x00065727) grid_hyb_phrase_pane

0xefe9,	// (0x00065736) cell_hyb_candi_pane_ParamLimits

0xefe9,	// (0x00065736) cell_hyb_candi_pane

0xf00c,	// (0x00065759) cell_hyb_candi_scroll_pane

0x1271,	// (0x000579be) cell_hyb_candi_pane_g1

0xf015,	// (0x00065762) cell_hyb_candi_pane_t1

0xf023,	// (0x00065770) cell_hyb_phrase_pane

0x1271,	// (0x000579be) cell_hyb_phrase_pane_g1

0xf02c,	// (0x00065779) cell_hyb_phrase_pane_t1

0xf03a,	// (0x00065787) entry_hyb_candi_pane_t1

0x16d3,	// (0x00057e20) input_focus_pane_cp06

0xf048,	// (0x00065795) cell_hyb_candi_scroll_pane_g1

0xf050,	// (0x0006579d) cell_hyb_candi_scroll_pane_g1_aid

0xf058,	// (0x000657a5) cell_hyb_candi_scroll_pane_g2

0xf060,	// (0x000657ad) cell_hyb_candi_scroll_pane_g2_aid

0xf068,	// (0x000657b5) cell_hyb_candi_scroll_pane_g3

0xf070,	// (0x000657bd) cell_hyb_candi_scroll_pane_g4

0xdd96,	// (0x000644e3) ai5_page_g1

0x8e50,	// (0x0005f59d) cell_ituss_key_t6_ParamLimits

0x8e50,	// (0x0005f59d) cell_ituss_key_t6

0x8c59,	// (0x0005f3a6) icf_edit_indi_pane_cp02_ParamLimits

0x8c59,	// (0x0005f3a6) icf_edit_indi_pane_cp02

0x8c6d,	// (0x0005f3ba) icf_edit_indi_pane_cp03_ParamLimits

0x8c6d,	// (0x0005f3ba) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
