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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001ed3b };

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
0x6450,	// (0x0002518b) Screen

0x645c,	// (0x00025197) application_window_ParamLimits

0x645c,	// (0x00025197) application_window

0x16f6,	// (0x00020431) screen_g1

0x64b8,	// (0x000251f3) area_bottom_pane_ParamLimits

0x64b8,	// (0x000251f3) area_bottom_pane

0x6578,	// (0x000252b3) area_top_pane_ParamLimits

0x6578,	// (0x000252b3) area_top_pane

0x660c,	// (0x00025347) main_pane_ParamLimits

0x660c,	// (0x00025347) main_pane

0x1700,	// (0x0002043b) misc_graphics

0x84db,	// (0x00027216) battery_pane_ParamLimits

0x84db,	// (0x00027216) battery_pane

0xa558,	// (0x00029293) bg_status_flat_pane_g8

0xa560,	// (0x0002929b) bg_status_flat_pane_g9

0x85a3,	// (0x000272de) context_pane_ParamLimits

0x85a3,	// (0x000272de) context_pane

0x86b9,	// (0x000273f4) navi_pane_ParamLimits

0x86b9,	// (0x000273f4) navi_pane

0x873d,	// (0x00027478) signal_pane_ParamLimits

0x873d,	// (0x00027478) signal_pane

0x0008,

0xf86a,	// (0x0002e5a5) bg_status_flat_pane_g

0x9b65,	// (0x000288a0) status_pane_g1_ParamLimits

0x9b65,	// (0x000288a0) status_pane_g1

0x9b79,	// (0x000288b4) status_pane_g2_ParamLimits

0x9b79,	// (0x000288b4) status_pane_g2

0x9b85,	// (0x000288c0) status_pane_g3_ParamLimits

0x9b85,	// (0x000288c0) status_pane_g3

0x0004,

0xf796,	// (0x0002e4d1) status_pane_g_ParamLimits

0xf796,	// (0x0002e4d1) status_pane_g

0x9bb9,	// (0x000288f4) title_pane_ParamLimits

0x9bb9,	// (0x000288f4) title_pane

0x9bf6,	// (0x00028931) uni_indicator_pane_ParamLimits

0x9bf6,	// (0x00028931) uni_indicator_pane

0x7e57,	// (0x00026b92) bg_list_pane_ParamLimits

0x7e57,	// (0x00026b92) bg_list_pane

0x5a57,	// (0x00024792) find_pane

0x7e77,	// (0x00026bb2) listscroll_app_pane_ParamLimits

0x7e77,	// (0x00026bb2) listscroll_app_pane

0x7e88,	// (0x00026bc3) listscroll_form_pane

0x5a5f,	// (0x0002479a) listscroll_gen_pane_ParamLimits

0x5a5f,	// (0x0002479a) listscroll_gen_pane

0x7e90,	// (0x00026bcb) listscroll_set_pane

0x6ebd,	// (0x00025bf8) main_idle_act_pane

0x7940,	// (0x0002667b) main_idle_trad_pane

0x7940,	// (0x0002667b) main_list_empty_pane

0x7eaa,	// (0x00026be5) main_midp_pane

0x7eb6,	// (0x00026bf1) main_pane_g1_ParamLimits

0x7eb6,	// (0x00026bf1) main_pane_g1

0x7ec4,	// (0x00026bff) popup_ai_message_window_ParamLimits

0x7ec4,	// (0x00026bff) popup_ai_message_window

0x7f68,	// (0x00026ca3) popup_fep_china_uni_window_ParamLimits

0x7f68,	// (0x00026ca3) popup_fep_china_uni_window

0x7fc2,	// (0x00026cfd) popup_fep_japan_candidate_window_ParamLimits

0x7fc2,	// (0x00026cfd) popup_fep_japan_candidate_window

0x7fe0,	// (0x00026d1b) popup_fep_japan_predictive_window_ParamLimits

0x7fe0,	// (0x00026d1b) popup_fep_japan_predictive_window

0x8010,	// (0x00026d4b) popup_find_window

0x801d,	// (0x00026d58) popup_grid_graphic_window_ParamLimits

0x801d,	// (0x00026d58) popup_grid_graphic_window

0x8047,	// (0x00026d82) popup_large_graphic_colour_window

0x806d,	// (0x00026da8) popup_menu_window_ParamLimits

0x806d,	// (0x00026da8) popup_menu_window

0x8229,	// (0x00026f64) popup_note_image_window

0x8215,	// (0x00026f50) popup_note_wait_window_ParamLimits

0x8215,	// (0x00026f50) popup_note_wait_window

0x8215,	// (0x00026f50) popup_note_window_ParamLimits

0x8215,	// (0x00026f50) popup_note_window

0x827f,	// (0x00026fba) popup_query_code_window_ParamLimits

0x827f,	// (0x00026fba) popup_query_code_window

0x8293,	// (0x00026fce) popup_query_data_code_window_ParamLimits

0x8293,	// (0x00026fce) popup_query_data_code_window

0x82b0,	// (0x00026feb) popup_query_data_window_ParamLimits

0x82b0,	// (0x00026feb) popup_query_data_window

0x82cc,	// (0x00027007) popup_query_sat_info_window_ParamLimits

0x82cc,	// (0x00027007) popup_query_sat_info_window

0x8305,	// (0x00027040) popup_snote_single_graphic_window_ParamLimits

0x8305,	// (0x00027040) popup_snote_single_graphic_window

0x8305,	// (0x00027040) popup_snote_single_text_window_ParamLimits

0x8305,	// (0x00027040) popup_snote_single_text_window

0x831a,	// (0x00027055) popup_sub_window_general

0x844a,	// (0x00027185) popup_window_general_ParamLimits

0x844a,	// (0x00027185) popup_window_general

0x845f,	// (0x0002719a) power_save_pane

0x7cac,	// (0x000269e7) control_pane_g1_ParamLimits

0x7cac,	// (0x000269e7) control_pane_g1

0x7cd3,	// (0x00026a0e) control_pane_g2_ParamLimits

0x7cd3,	// (0x00026a0e) control_pane_g2

0x7cfa,	// (0x00026a35) control_pane_g3_ParamLimits

0x7cfa,	// (0x00026a35) control_pane_g3

0x0007,

0xf77e,	// (0x0002e4b9) control_pane_g_ParamLimits

0xf77e,	// (0x0002e4b9) control_pane_g

0x7d52,	// (0x00026a8d) control_pane_t1_ParamLimits

0x7d52,	// (0x00026a8d) control_pane_t1

0x7da6,	// (0x00026ae1) control_pane_t2_ParamLimits

0x7da6,	// (0x00026ae1) control_pane_t2

0x0002,

0xf78f,	// (0x0002e4ca) control_pane_t_ParamLimits

0xf78f,	// (0x0002e4ca) control_pane_t

0x7bd1,	// (0x0002690c) navi_navi_volume_pane_cp1

0x7bd9,	// (0x00026914) status_small_icon_pane

0x7be1,	// (0x0002691c) status_small_pane_g1_ParamLimits

0x7be1,	// (0x0002691c) status_small_pane_g1

0x7c15,	// (0x00026950) status_small_pane_g2_ParamLimits

0x7c15,	// (0x00026950) status_small_pane_g2

0x7c21,	// (0x0002695c) status_small_pane_g3_ParamLimits

0x7c21,	// (0x0002695c) status_small_pane_g3

0x7c2d,	// (0x00026968) status_small_pane_g4_ParamLimits

0x7c2d,	// (0x00026968) status_small_pane_g4

0x7c39,	// (0x00026974) status_small_pane_g5_ParamLimits

0x7c39,	// (0x00026974) status_small_pane_g5

0x7c47,	// (0x00026982) status_small_pane_g6_ParamLimits

0x7c47,	// (0x00026982) status_small_pane_g6

0x0007,

0xf76d,	// (0x0002e4a8) status_small_pane_g_ParamLimits

0xf76d,	// (0x0002e4a8) status_small_pane_g

0x7c76,	// (0x000269b1) status_small_pane_t1

0x7c98,	// (0x000269d3) status_small_wait_pane_ParamLimits

0x7c98,	// (0x000269d3) status_small_wait_pane

0x7292,	// (0x00025fcd) aid_levels_signal_ParamLimits

0x7292,	// (0x00025fcd) aid_levels_signal

0x72a4,	// (0x00025fdf) signal_pane_g1_ParamLimits

0x72a4,	// (0x00025fdf) signal_pane_g1

0x72b9,	// (0x00025ff4) signal_pane_g2_ParamLimits

0x72b9,	// (0x00025ff4) signal_pane_g2

0x0003,

0xf6fe,	// (0x0002e439) signal_pane_g_ParamLimits

0xf6fe,	// (0x0002e439) signal_pane_g

0x3afe,	// (0x00022839) context_pane_g1

0x684d,	// (0x00025588) title_pane_g1

0x6877,	// (0x000255b2) title_pane_t1

0x1716,	// (0x00020451) title_pane_t2

0x173c,	// (0x00020477) title_pane_t3

0x0002,

0xf557,	// (0x0002e292) title_pane_t

0x9c0e,	// (0x00028949) aid_levels_battery_ParamLimits

0x9c0e,	// (0x00028949) aid_levels_battery

0x9c22,	// (0x0002895d) battery_pane_g1_ParamLimits

0x9c22,	// (0x0002895d) battery_pane_g1

0x9c38,	// (0x00028973) battery_pane_g2_ParamLimits

0x9c38,	// (0x00028973) battery_pane_g2

0x0001,

0xf7a1,	// (0x0002e4dc) battery_pane_g_ParamLimits

0xf7a1,	// (0x0002e4dc) battery_pane_g

0xae7c,	// (0x00029bb7) uni_indicator_pane_g1

0xae8f,	// (0x00029bca) uni_indicator_pane_g2

0xaea1,	// (0x00029bdc) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0002e64d) uni_indicator_pane_g

0x77b2,	// (0x000264ed) navi_icon_pane_ParamLimits

0x77b2,	// (0x000264ed) navi_icon_pane

0x76fc,	// (0x00026437) navi_midp_pane

0x77ce,	// (0x00026509) navi_navi_pane

0x77d8,	// (0x00026513) navi_text_pane_ParamLimits

0x77d8,	// (0x00026513) navi_text_pane

0x16f6,	// (0x00020431) status_small_wait_pane_g1

0x19a7,	// (0x000206e2) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0002e648) status_small_wait_pane_g

0xaba3,	// (0x000298de) navi_navi_icon_text_pane

0xabab,	// (0x000298e6) navi_navi_pane_g1_ParamLimits

0xabab,	// (0x000298e6) navi_navi_pane_g1

0xabbd,	// (0x000298f8) navi_navi_pane_g2_ParamLimits

0xabbd,	// (0x000298f8) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0002e616) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0002e616) navi_navi_pane_g

0xabcf,	// (0x0002990a) navi_navi_tabs_pane

0xabd8,	// (0x00029913) navi_navi_text_pane

0xaba3,	// (0x000298de) navi_navi_volume_pane

0xab7f,	// (0x000298ba) navi_text_pane_t1

0xab73,	// (0x000298ae) navi_icon_pane_g1

0xaac6,	// (0x00029801) navi_navi_text_pane_t1

0x8a09,	// (0x00027744) navi_navi_volume_pane_g1

0x8a11,	// (0x0002774c) volume_small_pane

0xaa2c,	// (0x00029767) navi_navi_icon_text_pane_g1

0xaa34,	// (0x0002976f) navi_navi_icon_text_pane_t1

0x77ce,	// (0x00026509) navi_tabs_2_long_pane

0x77ce,	// (0x00026509) navi_tabs_2_pane

0x77ce,	// (0x00026509) navi_tabs_3_long_pane

0x77ce,	// (0x00026509) navi_tabs_3_pane

0x77ce,	// (0x00026509) navi_tabs_4_pane

0x89e9,	// (0x00027724) tabs_2_active_pane_ParamLimits

0x89e9,	// (0x00027724) tabs_2_active_pane

0x89f9,	// (0x00027734) tabs_2_passive_pane_ParamLimits

0x89f9,	// (0x00027734) tabs_2_passive_pane

0x89b7,	// (0x000276f2) tabs_3_active_pane_ParamLimits

0x89b7,	// (0x000276f2) tabs_3_active_pane

0x89c7,	// (0x00027702) tabs_3_passive_pane_ParamLimits

0x89c7,	// (0x00027702) tabs_3_passive_pane

0x89d8,	// (0x00027713) tabs_3_passive_pane_cp_ParamLimits

0x89d8,	// (0x00027713) tabs_3_passive_pane_cp

0x8973,	// (0x000276ae) tabs_4_active_pane_ParamLimits

0x8973,	// (0x000276ae) tabs_4_active_pane

0x8984,	// (0x000276bf) tabs_4_passive_pane_ParamLimits

0x8984,	// (0x000276bf) tabs_4_passive_pane

0x8995,	// (0x000276d0) tabs_4_passive_pane_cp_ParamLimits

0x8995,	// (0x000276d0) tabs_4_passive_pane_cp

0x89a6,	// (0x000276e1) tabs_4_passive_pane_cp2_ParamLimits

0x89a6,	// (0x000276e1) tabs_4_passive_pane_cp2

0x894f,	// (0x0002768a) tabs_2_long_active_pane_ParamLimits

0x894f,	// (0x0002768a) tabs_2_long_active_pane

0x8961,	// (0x0002769c) tabs_2_long_passive_pane_ParamLimits

0x8961,	// (0x0002769c) tabs_2_long_passive_pane

0x890a,	// (0x00027645) tabs_3_long_active_pane_ParamLimits

0x890a,	// (0x00027645) tabs_3_long_active_pane

0x8923,	// (0x0002765e) tabs_3_long_passive_pane_ParamLimits

0x8923,	// (0x0002765e) tabs_3_long_passive_pane

0x8936,	// (0x00027671) tabs_3_long_passive_pane_cp_ParamLimits

0x8936,	// (0x00027671) tabs_3_long_passive_pane_cp

0x88b0,	// (0x000275eb) volume_small_pane_g1

0x88b9,	// (0x000275f4) volume_small_pane_g2

0x88c2,	// (0x000275fd) volume_small_pane_g3

0x88cb,	// (0x00027606) volume_small_pane_g4

0x88d4,	// (0x0002760f) volume_small_pane_g5

0x88dd,	// (0x00027618) volume_small_pane_g6

0x88e6,	// (0x00027621) volume_small_pane_g7

0x88ef,	// (0x0002762a) volume_small_pane_g8

0x88f8,	// (0x00027633) volume_small_pane_g9

0x8901,	// (0x0002763c) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0002e5e2) volume_small_pane_g

0x175c,	// (0x00020497) bg_active_tab_pane_cp2_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp2

0x68df,	// (0x0002561a) tabs_3_active_pane_g1

0x68e7,	// (0x00025622) tabs_3_active_pane_t1

0x175c,	// (0x00020497) bg_passive_tab_pane_cp2_ParamLimits

0x175c,	// (0x00020497) bg_passive_tab_pane_cp2

0x68df,	// (0x0002561a) tabs_3_passive_pane_g1

0x68e7,	// (0x00025622) tabs_3_passive_pane_t1

0x175c,	// (0x00020497) bg_active_tab_pane_cp3_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp3

0x68f9,	// (0x00025634) tabs_4_active_pane_g1

0x6901,	// (0x0002563c) tabs_4_active_pane_t1

0x175c,	// (0x00020497) bg_passive_tab_pane_cp3_ParamLimits

0x175c,	// (0x00020497) bg_passive_tab_pane_cp3

0x68f9,	// (0x00025634) tabs_4_1_passive_pane_g1

0x6901,	// (0x0002563c) tabs_4_1_passive_pane_t1

0x7eaa,	// (0x00026be5) list_highlight_pane_cp2

0xb0e4,	// (0x00029e1f) list_set_pane_ParamLimits

0xb0e4,	// (0x00029e1f) list_set_pane

0xb186,	// (0x00029ec1) main_pane_set_t1_ParamLimits

0xb186,	// (0x00029ec1) main_pane_set_t1

0xb1a6,	// (0x00029ee1) main_pane_set_t2_ParamLimits

0xb1a6,	// (0x00029ee1) main_pane_set_t2

0xb1ba,	// (0x00029ef5) main_pane_set_t3_ParamLimits

0xb1ba,	// (0x00029ef5) main_pane_set_t3

0xb1cc,	// (0x00029f07) main_pane_set_t4_ParamLimits

0xb1cc,	// (0x00029f07) main_pane_set_t4

0x0003,

0xf977,	// (0x0002e6b2) main_pane_set_t_ParamLimits

0xf977,	// (0x0002e6b2) main_pane_set_t

0xb1de,	// (0x00029f19) setting_code_pane

0xb1ea,	// (0x00029f25) setting_slider_graphic_pane

0xb1ea,	// (0x00029f25) setting_slider_pane

0xb1ea,	// (0x00029f25) setting_text_pane

0xb1ea,	// (0x00029f25) setting_volume_pane

0x6913,	// (0x0002564e) volume_set_pane

0x175c,	// (0x00020497) bg_set_opt_pane_cp

0x691b,	// (0x00025656) setting_slider_pane_t1

0x6934,	// (0x0002566f) setting_slider_pane_t2

0x694e,	// (0x00025689) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e299) setting_slider_pane_t

0x6966,	// (0x000256a1) slider_set_pane

0x1700,	// (0x0002043b) bg_set_opt_pane_cp2

0x176a,	// (0x000204a5) setting_slider_graphic_pane_g1

0x697c,	// (0x000256b7) setting_slider_graphic_pane_t1

0x698c,	// (0x000256c7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e2a0) setting_slider_graphic_pane_t

0x699c,	// (0x000256d7) slider_set_pane_cp

0x1700,	// (0x0002043b) input_focus_pane_cp1

0xb0a3,	// (0x00029dde) list_set_text_pane

0x16f6,	// (0x00020431) setting_text_pane_g1

0x1700,	// (0x0002043b) input_focus_pane_cp2

0x16f6,	// (0x00020431) setting_code_pane_g1

0x1773,	// (0x000204ae) setting_code_pane_t1

0x5305,	// (0x00024040) set_text_pane_t1_ParamLimits

0x5305,	// (0x00024040) set_text_pane_t1

0x1c4c,	// (0x00020987) set_opt_bg_pane_g1

0x1c54,	// (0x0002098f) set_opt_bg_pane_g2

0xb07d,	// (0x00029db8) set_opt_bg_pane_g3

0x1c64,	// (0x0002099f) set_opt_bg_pane_g4

0x1c6c,	// (0x000209a7) set_opt_bg_pane_g5

0x1c74,	// (0x000209af) set_opt_bg_pane_g6

0xb087,	// (0x00029dc2) set_opt_bg_pane_g7

0xb08f,	// (0x00029dca) set_opt_bg_pane_g8

0xb099,	// (0x00029dd4) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0002e69f) set_opt_bg_pane_g

0xb070,	// (0x00029dab) slider_set_pane_g1

0x8a7e,	// (0x000277b9) slider_set_pane_g2

0x0006,

0xf955,	// (0x0002e690) slider_set_pane_g

0x8a1a,	// (0x00027755) volume_set_pane_g1

0x8a22,	// (0x0002775d) volume_set_pane_g2

0x8a2a,	// (0x00027765) volume_set_pane_g3

0x8a32,	// (0x0002776d) volume_set_pane_g4

0x8a3a,	// (0x00027775) volume_set_pane_g5

0x8a42,	// (0x0002777d) volume_set_pane_g6

0x8a4a,	// (0x00027785) volume_set_pane_g7

0x8a52,	// (0x0002778d) volume_set_pane_g8

0x8a5a,	// (0x00027795) volume_set_pane_g9

0x8a62,	// (0x0002779d) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0002e668) volume_set_pane_g

0x69a4,	// (0x000256df) indicator_pane_ParamLimits

0x69a4,	// (0x000256df) indicator_pane

0x69b0,	// (0x000256eb) main_idle_pane_g2_ParamLimits

0x69b0,	// (0x000256eb) main_idle_pane_g2

0x69d8,	// (0x00025713) main_pane_idle_g1_ParamLimits

0x69d8,	// (0x00025713) main_pane_idle_g1

0x179b,	// (0x000204d6) popup_clock_digital_analogue_window_ParamLimits

0x179b,	// (0x000204d6) popup_clock_digital_analogue_window

0x69e5,	// (0x00025720) soft_indicator_pane_ParamLimits

0x69e5,	// (0x00025720) soft_indicator_pane

0x69f1,	// (0x0002572c) wallpaper_pane_ParamLimits

0x69f1,	// (0x0002572c) wallpaper_pane

0x16f6,	// (0x00020431) wallpaper_pane_g1

0x69fd,	// (0x00025738) indicator_pane_g1_ParamLimits

0x69fd,	// (0x00025738) indicator_pane_g1

0xb4a7,	// (0x0002a1e2) navi_navi_icon_text_pane_srt_g1

0x17c9,	// (0x00020504) soft_indicator_pane_t1

0x17e3,	// (0x0002051e) aid_ps_area_pane

0x6a09,	// (0x00025744) aid_ps_clock_pane

0x17f4,	// (0x0002052f) aid_ps_indicator_pane

0x1800,	// (0x0002053b) indicator_ps_pane_ParamLimits

0x1800,	// (0x0002053b) indicator_ps_pane

0x180f,	// (0x0002054a) power_save_pane_g1_ParamLimits

0x180f,	// (0x0002054a) power_save_pane_g1

0x181b,	// (0x00020556) power_save_pane_g2_ParamLimits

0x181b,	// (0x00020556) power_save_pane_g2

0x646c,	// (0x000251a7) aid_navinavi_width_pane

0x17e3,	// (0x0002051e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e2a5) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e2a5) power_save_pane_g

0x1829,	// (0x00020564) power_save_pane_t1_ParamLimits

0x1829,	// (0x00020564) power_save_pane_t1

0x6a09,	// (0x00025744) aid_ps_clock_pane_ParamLimits

0x17f4,	// (0x0002052f) aid_ps_indicator_pane_ParamLimits

0x183b,	// (0x00020576) power_save_pane_t4_ParamLimits

0x183b,	// (0x00020576) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e2aa) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e2aa) power_save_pane_t

0x1865,	// (0x000205a0) power_save_t3_ParamLimits

0x1865,	// (0x000205a0) power_save_t3

0x1850,	// (0x0002058b) power_save_t2_ParamLimits

0x1850,	// (0x0002058b) power_save_t2

0x187a,	// (0x000205b5) indicator_ps_pane_g1

0x6a17,	// (0x00025752) ai_gene_pane_ParamLimits

0x6a17,	// (0x00025752) ai_gene_pane

0x6a23,	// (0x0002575e) ai_links_pane_ParamLimits

0x6a23,	// (0x0002575e) ai_links_pane

0x6a2f,	// (0x0002576a) indicator_pane_cp1_ParamLimits

0x6a2f,	// (0x0002576a) indicator_pane_cp1

0x6a3b,	// (0x00025776) main_pane_idle_g1_cp_ParamLimits

0x6a3b,	// (0x00025776) main_pane_idle_g1_cp

0x6a47,	// (0x00025782) popup_ai_links_title_window

0x6a50,	// (0x0002578b) soft_indicator_pane_cp1_ParamLimits

0x6a50,	// (0x0002578b) soft_indicator_pane_cp1

0xae6a,	// (0x00029ba5) ai_links_pane_g1

0xae73,	// (0x00029bae) grid_ai_links_pane

0xae4d,	// (0x00029b88) ai_gene_pane_1

0xae58,	// (0x00029b93) ai_gene_pane_2

0xae61,	// (0x00029b9c) list_highlight_pane_cp4

0xae31,	// (0x00029b6c) cell_ai_link_pane_ParamLimits

0xae31,	// (0x00029b6c) cell_ai_link_pane

0xae29,	// (0x00029b64) cell_ai_link_pane_g1

0x19a7,	// (0x000206e2) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0002e643) cell_ai_link_pane_g

0x1700,	// (0x0002043b) grid_highlight_cp2

0x1700,	// (0x0002043b) bg_popup_sub_pane_cp1

0x1891,	// (0x000205cc) popup_ai_links_title_window_t1

0xad79,	// (0x00029ab4) ai_gene_pane_1_g1_ParamLimits

0xad79,	// (0x00029ab4) ai_gene_pane_1_g1

0xad85,	// (0x00029ac0) ai_gene_pane_1_g2_ParamLimits

0xad85,	// (0x00029ac0) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0002e639) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0002e639) ai_gene_pane_1_g

0xad92,	// (0x00029acd) ai_gene_pane_1_t1_ParamLimits

0xad92,	// (0x00029acd) ai_gene_pane_1_t1

0xadc6,	// (0x00029b01) grid_ai_soft_ind_pane

0xad64,	// (0x00029a9f) ai_gene_pane_2_t1_ParamLimits

0xad64,	// (0x00029a9f) ai_gene_pane_2_t1

0x6a5c,	// (0x00025797) main_pane_empty_t1_ParamLimits

0x6a5c,	// (0x00025797) main_pane_empty_t1

0x6a74,	// (0x000257af) main_pane_empty_t2_ParamLimits

0x6a74,	// (0x000257af) main_pane_empty_t2

0x6a89,	// (0x000257c4) main_pane_empty_t3_ParamLimits

0x6a89,	// (0x000257c4) main_pane_empty_t3

0x6a9b,	// (0x000257d6) main_pane_empty_t4_ParamLimits

0x6a9b,	// (0x000257d6) main_pane_empty_t4

0x6aad,	// (0x000257e8) main_pane_empty_t5_ParamLimits

0x6aad,	// (0x000257e8) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e2af) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e2af) main_pane_empty_t

0x1c9d,	// (0x000209d8) bg_popup_window_pane_ParamLimits

0x1c9d,	// (0x000209d8) bg_popup_window_pane

0xaad4,	// (0x0002980f) find_popup_pane_cp2_ParamLimits

0xaad4,	// (0x0002980f) find_popup_pane_cp2

0xaae0,	// (0x0002981b) heading_pane_ParamLimits

0xaae0,	// (0x0002981b) heading_pane

0x1700,	// (0x0002043b) bg_popup_sub_pane

0xaa4e,	// (0x00029789) bg_popup_window_pane_g1_ParamLimits

0xaa4e,	// (0x00029789) bg_popup_window_pane_g1

0xaa5a,	// (0x00029795) bg_popup_window_pane_g2_ParamLimits

0xaa5a,	// (0x00029795) bg_popup_window_pane_g2

0xaa66,	// (0x000297a1) bg_popup_window_pane_g3_ParamLimits

0xaa66,	// (0x000297a1) bg_popup_window_pane_g3

0xaa72,	// (0x000297ad) bg_popup_window_pane_g4_ParamLimits

0xaa72,	// (0x000297ad) bg_popup_window_pane_g4

0xaa7e,	// (0x000297b9) bg_popup_window_pane_g5_ParamLimits

0xaa7e,	// (0x000297b9) bg_popup_window_pane_g5

0xaa8a,	// (0x000297c5) bg_popup_window_pane_g6_ParamLimits

0xaa8a,	// (0x000297c5) bg_popup_window_pane_g6

0xaa96,	// (0x000297d1) bg_popup_window_pane_g7_ParamLimits

0xaa96,	// (0x000297d1) bg_popup_window_pane_g7

0xaaa2,	// (0x000297dd) bg_popup_window_pane_g8_ParamLimits

0xaaa2,	// (0x000297dd) bg_popup_window_pane_g8

0xaaae,	// (0x000297e9) bg_popup_window_pane_g9_ParamLimits

0xaaae,	// (0x000297e9) bg_popup_window_pane_g9

0xaaba,	// (0x000297f5) bg_popup_window_pane_g10_ParamLimits

0xaaba,	// (0x000297f5) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0002e601) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0002e601) bg_popup_window_pane_g

0xa9e3,	// (0x0002971e) bg_popup_heading_pane_ParamLimits

0xa9e3,	// (0x0002971e) bg_popup_heading_pane

0x8b06,	// (0x00027841) tabs_4_passive_pane_cp_srt_ParamLimits

0x8b06,	// (0x00027841) tabs_4_passive_pane_cp_srt

0x8b18,	// (0x00027853) tabs_4_passive_pane_srt_ParamLimits

0xa9f7,	// (0x00029732) heading_pane_g2

0x8b18,	// (0x00027853) tabs_4_passive_pane_srt

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp3_srt

0xa9ff,	// (0x0002973a) heading_pane_t1_ParamLimits

0xa9ff,	// (0x0002973a) heading_pane_t1

0xaa16,	// (0x00029751) heading_pane_t2_ParamLimits

0xaa16,	// (0x00029751) heading_pane_t2

0x0001,

0xf8c1,	// (0x0002e5fc) heading_pane_t_ParamLimits

0xf8c1,	// (0x0002e5fc) heading_pane_t

0xa520,	// (0x0002925b) bg_popup_heading_pane_g1

0xa5cf,	// (0x0002930a) bg_popup_heading_pane_g2

0xa5d9,	// (0x00029314) bg_popup_heading_pane_g3

0xa5e3,	// (0x0002931e) bg_popup_heading_pane_g4

0xa5ed,	// (0x00029328) bg_popup_heading_pane_g5

0xa5f7,	// (0x00029332) bg_popup_heading_pane_g6

0xa5ff,	// (0x0002933a) bg_popup_heading_pane_g7

0xa607,	// (0x00029342) bg_popup_heading_pane_g8

0xa611,	// (0x0002934c) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0002e5b8) bg_popup_heading_pane_g

0x9d0d,	// (0x00028a48) bg_popup_sub_pane_g1

0x9d15,	// (0x00028a50) bg_popup_sub_pane_g2

0x9d1d,	// (0x00028a58) bg_popup_sub_pane_g3

0x9d25,	// (0x00028a60) bg_popup_sub_pane_g4

0x9d2d,	// (0x00028a68) bg_popup_sub_pane_g5

0x9d35,	// (0x00028a70) bg_popup_sub_pane_g6

0x9d3d,	// (0x00028a78) bg_popup_sub_pane_g7

0x9d45,	// (0x00028a80) bg_popup_sub_pane_g8

0x9d4d,	// (0x00028a88) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0002e592) bg_popup_sub_pane_g

0x174e,	// (0x00020489) bg_popup_window_pane_cp5_ParamLimits

0x174e,	// (0x00020489) bg_popup_window_pane_cp5

0x18ae,	// (0x000205e9) popup_note_window_g1_ParamLimits

0x18ae,	// (0x000205e9) popup_note_window_g1

0x18ba,	// (0x000205f5) popup_note_window_t1_ParamLimits

0x18ba,	// (0x000205f5) popup_note_window_t1

0x18d0,	// (0x0002060b) popup_note_window_t2_ParamLimits

0x18d0,	// (0x0002060b) popup_note_window_t2

0x18e6,	// (0x00020621) popup_note_window_t3_ParamLimits

0x18e6,	// (0x00020621) popup_note_window_t3

0x18fc,	// (0x00020637) popup_note_window_t4_ParamLimits

0x18fc,	// (0x00020637) popup_note_window_t4

0x1924,	// (0x0002065f) popup_note_window_t5_ParamLimits

0x1924,	// (0x0002065f) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e2ba) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e2ba) popup_note_window_t

0x1948,	// (0x00020683) bg_popup_window_pane_cp6_ParamLimits

0x1948,	// (0x00020683) bg_popup_window_pane_cp6

0xa49c,	// (0x000291d7) popup_note_image_window_g1_ParamLimits

0xa49c,	// (0x000291d7) popup_note_image_window_g1

0xa4a8,	// (0x000291e3) popup_note_image_window_g2_ParamLimits

0xa4a8,	// (0x000291e3) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0002e586) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0002e586) popup_note_image_window_g

0xa4c1,	// (0x000291fc) popup_note_image_window_t1_ParamLimits

0xa4c1,	// (0x000291fc) popup_note_image_window_t1

0xa4da,	// (0x00029215) popup_note_image_window_t2_ParamLimits

0xa4da,	// (0x00029215) popup_note_image_window_t2

0xa4f3,	// (0x0002922e) popup_note_image_window_t3_ParamLimits

0xa4f3,	// (0x0002922e) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0002e58b) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0002e58b) popup_note_image_window_t

0xa365,	// (0x000290a0) bg_popup_window_pane_cp7_ParamLimits

0xa365,	// (0x000290a0) bg_popup_window_pane_cp7

0xa395,	// (0x000290d0) popup_note_wait_window_g1_ParamLimits

0xa395,	// (0x000290d0) popup_note_wait_window_g1

0xa3a1,	// (0x000290dc) popup_note_wait_window_g2_ParamLimits

0xa3a1,	// (0x000290dc) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0002e574) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0002e574) popup_note_wait_window_g

0xa3b9,	// (0x000290f4) popup_note_wait_window_t1_ParamLimits

0xa3b9,	// (0x000290f4) popup_note_wait_window_t1

0xa3e0,	// (0x0002911b) popup_note_wait_window_t2_ParamLimits

0xa3e0,	// (0x0002911b) popup_note_wait_window_t2

0xa3fd,	// (0x00029138) popup_note_wait_window_t3_ParamLimits

0xa3fd,	// (0x00029138) popup_note_wait_window_t3

0xa410,	// (0x0002914b) popup_note_wait_window_t4_ParamLimits

0xa410,	// (0x0002914b) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0002e57b) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0002e57b) popup_note_wait_window_t

0xa435,	// (0x00029170) wait_bar_pane_ParamLimits

0xa435,	// (0x00029170) wait_bar_pane

0x1700,	// (0x0002043b) wait_anim_pane

0x1700,	// (0x0002043b) wait_border_pane

0x16f6,	// (0x00020431) wait_anim_pane_g1

0x16f6,	// (0x00020431) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0002e434) wait_anim_pane_g

0xa311,	// (0x0002904c) wait_border_pane_g1

0xa31c,	// (0x00029057) wait_border_pane_g2

0xa325,	// (0x00029060) wait_border_pane_g3

0x0002,

0xf832,	// (0x0002e56d) wait_border_pane_g

0xa17c,	// (0x00028eb7) bg_popup_window_pane_cp16_ParamLimits

0xa17c,	// (0x00028eb7) bg_popup_window_pane_cp16

0xa27c,	// (0x00028fb7) indicator_popup_pane_cp4_ParamLimits

0xa27c,	// (0x00028fb7) indicator_popup_pane_cp4

0xa290,	// (0x00028fcb) popup_query_data_window_t1_ParamLimits

0xa290,	// (0x00028fcb) popup_query_data_window_t1

0xa2a2,	// (0x00028fdd) popup_query_data_window_t2_ParamLimits

0xa2a2,	// (0x00028fdd) popup_query_data_window_t2

0xa2bb,	// (0x00028ff6) popup_query_data_window_t3_ParamLimits

0xa2bb,	// (0x00028ff6) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0002e566) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0002e566) popup_query_data_window_t

0xa2d5,	// (0x00029010) query_popup_data_pane_ParamLimits

0xa2d5,	// (0x00029010) query_popup_data_pane

0xa2e9,	// (0x00029024) query_popup_data_pane_cp1_ParamLimits

0xa2e9,	// (0x00029024) query_popup_data_pane_cp1

0xa17c,	// (0x00028eb7) bg_popup_window_pane_cp10_ParamLimits

0xa17c,	// (0x00028eb7) bg_popup_window_pane_cp10

0xa1ae,	// (0x00028ee9) indicator_popup_pane_ParamLimits

0xa1ae,	// (0x00028ee9) indicator_popup_pane

0xa1d0,	// (0x00028f0b) popup_query_code_window_t1_ParamLimits

0xa1d0,	// (0x00028f0b) popup_query_code_window_t1

0xa1ea,	// (0x00028f25) popup_query_code_window_t2_ParamLimits

0xa1ea,	// (0x00028f25) popup_query_code_window_t2

0xa233,	// (0x00028f6e) popup_query_code_window_t3_ParamLimits

0xa233,	// (0x00028f6e) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0002e55f) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0002e55f) popup_query_code_window_t

0xa262,	// (0x00028f9d) query_popup_pane_ParamLimits

0xa262,	// (0x00028f9d) query_popup_pane

0x1948,	// (0x00020683) bg_popup_window_pane_cp15_ParamLimits

0x1948,	// (0x00020683) bg_popup_window_pane_cp15

0x6ac1,	// (0x000257fc) indicator_popup_pane_cp1_ParamLimits

0x6ac1,	// (0x000257fc) indicator_popup_pane_cp1

0x6ad4,	// (0x0002580f) indicator_popup_pane_cp2_ParamLimits

0x6ad4,	// (0x0002580f) indicator_popup_pane_cp2

0x6ae7,	// (0x00025822) popup_query_data_code_window_g1_ParamLimits

0x6ae7,	// (0x00025822) popup_query_data_code_window_g1

0x1966,	// (0x000206a1) popup_query_data_code_window_t1_ParamLimits

0x1966,	// (0x000206a1) popup_query_data_code_window_t1

0x1978,	// (0x000206b3) popup_query_data_code_window_t2_ParamLimits

0x1978,	// (0x000206b3) popup_query_data_code_window_t2

0x6afa,	// (0x00025835) popup_query_data_code_window_t3_ParamLimits

0x6afa,	// (0x00025835) popup_query_data_code_window_t3

0x6b10,	// (0x0002584b) popup_query_data_code_window_t4_ParamLimits

0x6b10,	// (0x0002584b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e2c5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e2c5) popup_query_data_code_window_t

0x7770,	// (0x000264ab) list_single_midp_graphic_pane_g3

0x6b28,	// (0x00025863) query_popup_data_pane_cp2_ParamLimits

0x6b3b,	// (0x00025876) query_popup_pane_cp2_ParamLimits

0x6b3b,	// (0x00025876) query_popup_pane_cp2

0x1700,	// (0x0002043b) bg_popup_window_pane_cp11

0xa174,	// (0x00028eaf) heading_pane_cp5

0x19d4,	// (0x0002070f) listscroll_popup_info_pane

0x1700,	// (0x0002043b) input_focus_pane_cp3

0x198a,	// (0x000206c5) query_popup_pane_t1

0x1998,	// (0x000206d3) list_popup_info_pane_ParamLimits

0x1998,	// (0x000206d3) list_popup_info_pane

0x19a7,	// (0x000206e2) listscroll_popup_info_pane_g1

0x19af,	// (0x000206ea) scroll_pane_cp7

0x6b4e,	// (0x00025889) popup_info_list_pane_t1_ParamLimits

0x6b4e,	// (0x00025889) popup_info_list_pane_t1

0x6b68,	// (0x000258a3) popup_info_list_pane_t2_ParamLimits

0x6b68,	// (0x000258a3) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e2ce) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e2ce) popup_info_list_pane_t

0x1700,	// (0x0002043b) bg_popup_window_pane_cp12

0xb4c1,	// (0x0002a1fc) find_popup_pane

0x175c,	// (0x00020497) bg_popup_window_pane_cp3

0x19b9,	// (0x000206f4) heading_pane_cp3

0x19c5,	// (0x00020700) listscroll_popup_graphic_pane

0x1700,	// (0x0002043b) bg_popup_window_pane_cp4

0x6bd2,	// (0x0002590d) heading_pane_cp4

0x19d4,	// (0x0002070f) listscroll_popup_colour_pane

0x6bdc,	// (0x00025917) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6bdc,	// (0x00025917) cell_large_graphic_colour_none_popup_pane

0x6bf0,	// (0x0002592b) grid_large_graphic_colour_popup_pane_ParamLimits

0x6bf0,	// (0x0002592b) grid_large_graphic_colour_popup_pane

0x6c18,	// (0x00025953) listscroll_popup_colour_pane_g1_ParamLimits

0x6c18,	// (0x00025953) listscroll_popup_colour_pane_g1

0x6c2f,	// (0x0002596a) listscroll_popup_colour_pane_g2_ParamLimits

0x6c2f,	// (0x0002596a) listscroll_popup_colour_pane_g2

0x6c46,	// (0x00025981) listscroll_popup_colour_pane_g3_ParamLimits

0x6c46,	// (0x00025981) listscroll_popup_colour_pane_g3

0x6c56,	// (0x00025991) listscroll_popup_colour_pane_g4_ParamLimits

0x6c56,	// (0x00025991) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e2d3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e2d3) listscroll_popup_colour_pane_g

0x19dc,	// (0x00020717) scroll_pane_cp6_ParamLimits

0x19dc,	// (0x00020717) scroll_pane_cp6

0x6c66,	// (0x000259a1) cell_large_graphic_colour_popup_pane_ParamLimits

0x6c66,	// (0x000259a1) cell_large_graphic_colour_popup_pane

0x6c85,	// (0x000259c0) cell_large_graphic_colour_none_popup_pane_t1

0x1700,	// (0x0002043b) grid_highlight_pane_cp5

0x19ee,	// (0x00020729) cell_large_graphic_colour_popup_pane_g1

0x19f6,	// (0x00020731) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e2dc) cell_large_graphic_colour_popup_pane_g

0x19fe,	// (0x00020739) cell_large_graphic_colour_popup_pane_g2_copy1

0x1a07,	// (0x00020742) grid_highlight_pane_cp4

0x1a0f,	// (0x0002074a) bg_popup_window_pane_cp8_ParamLimits

0x1a0f,	// (0x0002074a) bg_popup_window_pane_cp8

0x6c94,	// (0x000259cf) popup_snote_single_text_window_g1_ParamLimits

0x6c94,	// (0x000259cf) popup_snote_single_text_window_g1

0x6ca6,	// (0x000259e1) popup_snote_single_text_window_t1_ParamLimits

0x6ca6,	// (0x000259e1) popup_snote_single_text_window_t1

0x6cb9,	// (0x000259f4) popup_snote_single_text_window_t2_ParamLimits

0x6cb9,	// (0x000259f4) popup_snote_single_text_window_t2

0x6ccc,	// (0x00025a07) popup_snote_single_text_window_t3_ParamLimits

0x6ccc,	// (0x00025a07) popup_snote_single_text_window_t3

0x6d05,	// (0x00025a40) popup_snote_single_text_window_t4_ParamLimits

0x6d05,	// (0x00025a40) popup_snote_single_text_window_t4

0x6d39,	// (0x00025a74) popup_snote_single_text_window_t5_ParamLimits

0x6d39,	// (0x00025a74) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e2e1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e2e1) popup_snote_single_text_window_t

0x1a2a,	// (0x00020765) bg_popup_window_pane_cp9_ParamLimits

0x1a2a,	// (0x00020765) bg_popup_window_pane_cp9

0x6c94,	// (0x000259cf) popup_snote_single_graphic_window_g1_ParamLimits

0x6c94,	// (0x000259cf) popup_snote_single_graphic_window_g1

0x1a38,	// (0x00020773) popup_snote_single_graphic_window_g2_ParamLimits

0x1a38,	// (0x00020773) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e2ec) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e2ec) popup_snote_single_graphic_window_g

0x1a44,	// (0x0002077f) popup_snote_single_graphic_window_t1_ParamLimits

0x1a44,	// (0x0002077f) popup_snote_single_graphic_window_t1

0x1a57,	// (0x00020792) popup_snote_single_graphic_window_t2_ParamLimits

0x1a57,	// (0x00020792) popup_snote_single_graphic_window_t2

0x6d68,	// (0x00025aa3) popup_snote_single_graphic_window_t3_ParamLimits

0x6d68,	// (0x00025aa3) popup_snote_single_graphic_window_t3

0x6da1,	// (0x00025adc) popup_snote_single_graphic_window_t4_ParamLimits

0x6da1,	// (0x00025adc) popup_snote_single_graphic_window_t4

0x6dd5,	// (0x00025b10) popup_snote_single_graphic_window_t5_ParamLimits

0x6dd5,	// (0x00025b10) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e2f1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e2f1) popup_snote_single_graphic_window_t

0xb403,	// (0x0002a13e) grid_graphic_popup_pane_ParamLimits

0xb403,	// (0x0002a13e) grid_graphic_popup_pane

0xb42d,	// (0x0002a168) listscroll_popup_graphic_pane_g1_ParamLimits

0xb42d,	// (0x0002a168) listscroll_popup_graphic_pane_g1

0xb441,	// (0x0002a17c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb441,	// (0x0002a17c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0002e6dc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0002e6dc) listscroll_popup_graphic_pane_g

0xb455,	// (0x0002a190) scroll_pane_cp5

0xb3a2,	// (0x0002a0dd) cell_graphic_popup_pane_ParamLimits

0xb3a2,	// (0x0002a0dd) cell_graphic_popup_pane

0xb383,	// (0x0002a0be) cell_graphic_popup_pane_g1

0xb38b,	// (0x0002a0c6) cell_graphic_popup_pane_g2

0x19fe,	// (0x00020739) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0002e6d5) cell_graphic_popup_pane_g

0xb394,	// (0x0002a0cf) cell_graphic_popup_pane_t2

0x1a07,	// (0x00020742) grid_highlight_pane_cp3

0x1a7c,	// (0x000207b7) list_gen_pane_ParamLimits

0x1a7c,	// (0x000207b7) list_gen_pane

0x1aa4,	// (0x000207df) scroll_pane

0xb2db,	// (0x0002a016) bg_list_pane_g1_ParamLimits

0xb2db,	// (0x0002a016) bg_list_pane_g1

0xb2f8,	// (0x0002a033) bg_list_pane_g2_ParamLimits

0xb2f8,	// (0x0002a033) bg_list_pane_g2

0xb30d,	// (0x0002a048) bg_list_pane_g3_ParamLimits

0xb30d,	// (0x0002a048) bg_list_pane_g3

0xb321,	// (0x0002a05c) bg_list_pane_g4_ParamLimits

0xb321,	// (0x0002a05c) bg_list_pane_g4

0xb335,	// (0x0002a070) bg_list_pane_g5_ParamLimits

0xb335,	// (0x0002a070) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0002e6ca) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0002e6ca) bg_list_pane_g

0xb270,	// (0x00029fab) list_double2_graphic_large_graphic_pane_ParamLimits

0xb270,	// (0x00029fab) list_double2_graphic_large_graphic_pane

0xb270,	// (0x00029fab) list_double2_graphic_pane_ParamLimits

0xb270,	// (0x00029fab) list_double2_graphic_pane

0xb270,	// (0x00029fab) list_double2_large_graphic_pane_ParamLimits

0xb270,	// (0x00029fab) list_double2_large_graphic_pane

0x5c44,	// (0x0002497f) list_double2_pane_ParamLimits

0x5c44,	// (0x0002497f) list_double2_pane

0xb270,	// (0x00029fab) list_double_graphic_heading_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_graphic_heading_pane

0xb270,	// (0x00029fab) list_double_graphic_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_graphic_pane

0xb270,	// (0x00029fab) list_double_heading_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_heading_pane

0xb270,	// (0x00029fab) list_double_large_graphic_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_large_graphic_pane

0xb270,	// (0x00029fab) list_double_number_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_number_pane

0xb270,	// (0x00029fab) list_double_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_pane

0xb270,	// (0x00029fab) list_double_time_pane_ParamLimits

0xb270,	// (0x00029fab) list_double_time_pane

0xb270,	// (0x00029fab) list_setting_number_pane_ParamLimits

0xb270,	// (0x00029fab) list_setting_number_pane

0xb270,	// (0x00029fab) list_setting_pane_ParamLimits

0xb270,	// (0x00029fab) list_setting_pane

0x5c85,	// (0x000249c0) list_single_2graphic_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_2graphic_pane

0x5c85,	// (0x000249c0) list_single_graphic_heading_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_graphic_heading_pane

0x5c85,	// (0x000249c0) list_single_graphic_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_graphic_pane

0x5c85,	// (0x000249c0) list_single_heading_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_heading_pane

0x5ce7,	// (0x00024a22) list_single_large_graphic_pane_ParamLimits

0x5ce7,	// (0x00024a22) list_single_large_graphic_pane

0x5c85,	// (0x000249c0) list_single_number_heading_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_number_heading_pane

0x5c85,	// (0x000249c0) list_single_number_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_number_pane

0x5c85,	// (0x000249c0) list_single_pane_ParamLimits

0x5c85,	// (0x000249c0) list_single_pane

0x1700,	// (0x0002043b) list_highlight_pane_cp1

0x532c,	// (0x00024067) list_single_pane_g1_ParamLimits

0x532c,	// (0x00024067) list_single_pane_g1

0x5338,	// (0x00024073) list_single_pane_g2_ParamLimits

0x5338,	// (0x00024073) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_pane_g

0x5c1b,	// (0x00024956) list_single_pane_t1_ParamLimits

0x5c1b,	// (0x00024956) list_single_pane_t1

0x532c,	// (0x00024067) list_single_number_pane_g1_ParamLimits

0x532c,	// (0x00024067) list_single_number_pane_g1

0x5338,	// (0x00024073) list_single_number_pane_g2_ParamLimits

0x5338,	// (0x00024073) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_number_pane_g

0x5344,	// (0x0002407f) list_single_number_pane_t1_ParamLimits

0x5344,	// (0x0002407f) list_single_number_pane_t1

0x5bdd,	// (0x00024918) list_single_number_pane_t2_ParamLimits

0x5bdd,	// (0x00024918) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0002e68b) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0002e68b) list_single_number_pane_t

0x5320,	// (0x0002405b) list_single_graphic_pane_g1_ParamLimits

0x5320,	// (0x0002405b) list_single_graphic_pane_g1

0x532c,	// (0x00024067) list_single_graphic_pane_g2_ParamLimits

0x532c,	// (0x00024067) list_single_graphic_pane_g2

0x5338,	// (0x00024073) list_single_graphic_pane_g3_ParamLimits

0x5338,	// (0x00024073) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e2fc) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e2fc) list_single_graphic_pane_g

0x5344,	// (0x0002407f) list_single_graphic_pane_t1_ParamLimits

0x5344,	// (0x0002407f) list_single_graphic_pane_t1

0x532c,	// (0x00024067) list_single_heading_pane_g1_ParamLimits

0x532c,	// (0x00024067) list_single_heading_pane_g1

0x5338,	// (0x00024073) list_single_heading_pane_g2_ParamLimits

0x5338,	// (0x00024073) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_heading_pane_g

0x535a,	// (0x00024095) list_single_heading_pane_t1_ParamLimits

0x535a,	// (0x00024095) list_single_heading_pane_t1

0x5370,	// (0x000240ab) list_single_heading_pane_t2_ParamLimits

0x5370,	// (0x000240ab) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e308) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e308) list_single_heading_pane_t

0x532c,	// (0x00024067) list_single_number_heading_pane_g1_ParamLimits

0x532c,	// (0x00024067) list_single_number_heading_pane_g1

0x5338,	// (0x00024073) list_single_number_heading_pane_g2_ParamLimits

0x5338,	// (0x00024073) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_number_heading_pane_g

0x535a,	// (0x00024095) list_single_number_heading_pane_t1_ParamLimits

0x535a,	// (0x00024095) list_single_number_heading_pane_t1

0x5382,	// (0x000240bd) list_single_number_heading_pane_t2_ParamLimits

0x5382,	// (0x000240bd) list_single_number_heading_pane_t2

0x5394,	// (0x000240cf) list_single_number_heading_pane_t3_ParamLimits

0x5394,	// (0x000240cf) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e30d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e30d) list_single_number_heading_pane_t

0x53a6,	// (0x000240e1) list_single_graphic_heading_pane_g1_ParamLimits

0x53a6,	// (0x000240e1) list_single_graphic_heading_pane_g1

0x53b2,	// (0x000240ed) list_single_graphic_heading_pane_g4_ParamLimits

0x53b2,	// (0x000240ed) list_single_graphic_heading_pane_g4

0x5338,	// (0x00024073) list_single_graphic_heading_pane_g5_ParamLimits

0x5338,	// (0x00024073) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e314) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e314) list_single_graphic_heading_pane_g

0x535a,	// (0x00024095) list_single_graphic_heading_pane_t1_ParamLimits

0x535a,	// (0x00024095) list_single_graphic_heading_pane_t1

0x53c3,	// (0x000240fe) list_single_graphic_heading_pane_t2_ParamLimits

0x53c3,	// (0x000240fe) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e31b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e31b) list_single_graphic_heading_pane_t

0x53d5,	// (0x00024110) list_single_large_graphic_pane_g1_ParamLimits

0x53d5,	// (0x00024110) list_single_large_graphic_pane_g1

0x53e1,	// (0x0002411c) list_single_large_graphic_pane_g2_ParamLimits

0x53e1,	// (0x0002411c) list_single_large_graphic_pane_g2

0x53ed,	// (0x00024128) list_single_large_graphic_pane_g3_ParamLimits

0x53ed,	// (0x00024128) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e320) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e320) list_single_large_graphic_pane_g

0xa31c,	// (0x00029057) wait_border_pane_g2_copy1

0x53f9,	// (0x00024134) list_single_large_graphic_pane_g4_cp2

0x5401,	// (0x0002413c) list_single_large_graphic_pane_t1_ParamLimits

0x5401,	// (0x0002413c) list_single_large_graphic_pane_t1

0x5417,	// (0x00024152) list_double_pane_g1_ParamLimits

0x5417,	// (0x00024152) list_double_pane_g1

0x5423,	// (0x0002415e) list_double_pane_g2_ParamLimits

0x5423,	// (0x0002415e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e327) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e327) list_double_pane_g

0x542f,	// (0x0002416a) list_double_pane_t1_ParamLimits

0x542f,	// (0x0002416a) list_double_pane_t1

0x5445,	// (0x00024180) list_double_pane_t2_ParamLimits

0x5445,	// (0x00024180) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e32c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e32c) list_double_pane_t

0x5457,	// (0x00024192) list_double2_pane_g1_ParamLimits

0x5457,	// (0x00024192) list_double2_pane_g1

0x5468,	// (0x000241a3) list_double2_pane_g2_ParamLimits

0x5468,	// (0x000241a3) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e331) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e331) list_double2_pane_g

0x5474,	// (0x000241af) list_double2_pane_t1_ParamLimits

0x5474,	// (0x000241af) list_double2_pane_t1

0x548a,	// (0x000241c5) list_double2_pane_t2_ParamLimits

0x548a,	// (0x000241c5) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e336) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e336) list_double2_pane_t

0x5417,	// (0x00024152) list_double_number_pane_g1_ParamLimits

0x5417,	// (0x00024152) list_double_number_pane_g1

0x5423,	// (0x0002415e) list_double_number_pane_g2_ParamLimits

0x5423,	// (0x0002415e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e327) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e327) list_double_number_pane_g

0x549c,	// (0x000241d7) list_double_number_pane_t1_ParamLimits

0x549c,	// (0x000241d7) list_double_number_pane_t1

0x54ae,	// (0x000241e9) list_double_number_pane_t2_ParamLimits

0x54ae,	// (0x000241e9) list_double_number_pane_t2

0x54c4,	// (0x000241ff) list_double_number_pane_t3_ParamLimits

0x54c4,	// (0x000241ff) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e33b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e33b) list_double_number_pane_t

0x54d6,	// (0x00024211) list_double_graphic_pane_g1_ParamLimits

0x54d6,	// (0x00024211) list_double_graphic_pane_g1

0x54e2,	// (0x0002421d) list_double_graphic_pane_g2_ParamLimits

0x54e2,	// (0x0002421d) list_double_graphic_pane_g2

0x54f1,	// (0x0002422c) list_double_graphic_pane_g3_ParamLimits

0x54f1,	// (0x0002422c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e342) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e342) list_double_graphic_pane_g

0x54ae,	// (0x000241e9) list_double_graphic_pane_t1_ParamLimits

0x54ae,	// (0x000241e9) list_double_graphic_pane_t1

0x54c4,	// (0x000241ff) list_double_graphic_pane_t2_ParamLimits

0x54c4,	// (0x000241ff) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e34b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e34b) list_double_graphic_pane_t

0x5509,	// (0x00024244) list_double2_graphic_pane_g1_ParamLimits

0x5509,	// (0x00024244) list_double2_graphic_pane_g1

0x5417,	// (0x00024152) list_double2_graphic_pane_g2_ParamLimits

0x5417,	// (0x00024152) list_double2_graphic_pane_g2

0x5423,	// (0x0002415e) list_double2_graphic_pane_g3_ParamLimits

0x5423,	// (0x0002415e) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e350) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e350) list_double2_graphic_pane_g

0x5515,	// (0x00024250) list_double2_graphic_pane_t1_ParamLimits

0x5515,	// (0x00024250) list_double2_graphic_pane_t1

0x552b,	// (0x00024266) list_double2_graphic_pane_t2_ParamLimits

0x552b,	// (0x00024266) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e357) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e357) list_double2_graphic_pane_t

0x553d,	// (0x00024278) list_double_large_graphic_pane_g1_ParamLimits

0x553d,	// (0x00024278) list_double_large_graphic_pane_g1

0x555c,	// (0x00024297) list_double_large_graphic_pane_g2_ParamLimits

0x555c,	// (0x00024297) list_double_large_graphic_pane_g2

0x5423,	// (0x0002415e) list_double_large_graphic_pane_g3_ParamLimits

0x5423,	// (0x0002415e) list_double_large_graphic_pane_g3

0x556d,	// (0x000242a8) list_double_large_graphic_pane_g4_ParamLimits

0x556d,	// (0x000242a8) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e35c) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e35c) list_double_large_graphic_pane_g

0x5595,	// (0x000242d0) list_double_large_graphic_pane_t1_ParamLimits

0x5595,	// (0x000242d0) list_double_large_graphic_pane_t1

0x55ae,	// (0x000242e9) list_double_large_graphic_pane_t2_ParamLimits

0x55ae,	// (0x000242e9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e367) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e367) list_double_large_graphic_pane_t

0x6e0e,	// (0x00025b49) list_double2_large_graphic_pane_g1_ParamLimits

0x6e0e,	// (0x00025b49) list_double2_large_graphic_pane_g1

0x55c0,	// (0x000242fb) list_double2_large_graphic_pane_g2_ParamLimits

0x55c0,	// (0x000242fb) list_double2_large_graphic_pane_g2

0x55d1,	// (0x0002430c) list_double2_large_graphic_pane_g3_ParamLimits

0x55d1,	// (0x0002430c) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e36c) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e36c) list_double2_large_graphic_pane_g

0x5515,	// (0x00024250) list_double2_large_graphic_pane_t1_ParamLimits

0x5515,	// (0x00024250) list_double2_large_graphic_pane_t1

0x552b,	// (0x00024266) list_double2_large_graphic_pane_t2_ParamLimits

0x552b,	// (0x00024266) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e357) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e357) list_double2_large_graphic_pane_t

0x55dd,	// (0x00024318) list_double_heading_pane_g1_ParamLimits

0x55dd,	// (0x00024318) list_double_heading_pane_g1

0x55ee,	// (0x00024329) list_double_heading_pane_g2_ParamLimits

0x55ee,	// (0x00024329) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002e373) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002e373) list_double_heading_pane_g

0x55fa,	// (0x00024335) list_double_heading_pane_t1_ParamLimits

0x55fa,	// (0x00024335) list_double_heading_pane_t1

0x5610,	// (0x0002434b) list_double_heading_pane_t2_ParamLimits

0x5610,	// (0x0002434b) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e378) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e378) list_double_heading_pane_t

0x5509,	// (0x00024244) list_double_graphic_heading_pane_g1_ParamLimits

0x5509,	// (0x00024244) list_double_graphic_heading_pane_g1

0x55dd,	// (0x00024318) list_double_graphic_heading_pane_g2_ParamLimits

0x55dd,	// (0x00024318) list_double_graphic_heading_pane_g2

0x55ee,	// (0x00024329) list_double_graphic_heading_pane_g3_ParamLimits

0x55ee,	// (0x00024329) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002e37d) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002e37d) list_double_graphic_heading_pane_g

0x55fa,	// (0x00024335) list_double_graphic_heading_pane_t1_ParamLimits

0x55fa,	// (0x00024335) list_double_graphic_heading_pane_t1

0x5610,	// (0x0002434b) list_double_graphic_heading_pane_t2_ParamLimits

0x5610,	// (0x0002434b) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e378) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e378) list_double_graphic_heading_pane_t

0x555c,	// (0x00024297) list_double_time_pane_g1_ParamLimits

0x555c,	// (0x00024297) list_double_time_pane_g1

0x5423,	// (0x0002415e) list_double_time_pane_g2_ParamLimits

0x5423,	// (0x0002415e) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0002e384) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0002e384) list_double_time_pane_g

0x5622,	// (0x0002435d) list_double_time_pane_t1_ParamLimits

0x5622,	// (0x0002435d) list_double_time_pane_t1

0x5638,	// (0x00024373) list_double_time_pane_t2_ParamLimits

0x5638,	// (0x00024373) list_double_time_pane_t2

0x564a,	// (0x00024385) list_double_time_pane_t3_ParamLimits

0x564a,	// (0x00024385) list_double_time_pane_t3

0x565c,	// (0x00024397) list_double_time_pane_t4_ParamLimits

0x565c,	// (0x00024397) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0002e389) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0002e389) list_double_time_pane_t

0x566e,	// (0x000243a9) list_setting_pane_g1_ParamLimits

0x566e,	// (0x000243a9) list_setting_pane_g1

0x55ee,	// (0x00024329) list_setting_pane_g2_ParamLimits

0x55ee,	// (0x00024329) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002e392) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002e392) list_setting_pane_g

0x567a,	// (0x000243b5) list_setting_pane_t1_ParamLimits

0x567a,	// (0x000243b5) list_setting_pane_t1

0x5691,	// (0x000243cc) list_setting_pane_t2_ParamLimits

0x5691,	// (0x000243cc) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002e397) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002e397) list_setting_pane_t

0x56ce,	// (0x00024409) set_value_pane_cp_ParamLimits

0x56ce,	// (0x00024409) set_value_pane_cp

0x56da,	// (0x00024415) list_setting_number_pane_g1_ParamLimits

0x56da,	// (0x00024415) list_setting_number_pane_g1

0x56e6,	// (0x00024421) list_setting_number_pane_g2_ParamLimits

0x56e6,	// (0x00024421) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0002e39e) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0002e39e) list_setting_number_pane_g

0x56f2,	// (0x0002442d) list_setting_number_pane_t1_ParamLimits

0x56f2,	// (0x0002442d) list_setting_number_pane_t1

0x5706,	// (0x00024441) list_setting_number_pane_t2_ParamLimits

0x5706,	// (0x00024441) list_setting_number_pane_t2

0x571d,	// (0x00024458) list_setting_number_pane_t3_ParamLimits

0x571d,	// (0x00024458) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0002e3a3) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0002e3a3) list_setting_number_pane_t

0x56ce,	// (0x00024409) set_value_pane_ParamLimits

0x56ce,	// (0x00024409) set_value_pane

0x1b05,	// (0x00020840) bg_set_opt_pane_ParamLimits

0x1b05,	// (0x00020840) bg_set_opt_pane

0x5760,	// (0x0002449b) set_value_pane_t1

0x1b34,	// (0x0002086f) slider_set_pane_cp3

0x6e1a,	// (0x00025b55) volume_small_pane_cp

0x1b3d,	// (0x00020878) list_form_gen_pane

0x1b46,	// (0x00020881) scroll_pane_cp8

0x5776,	// (0x000244b1) form_field_data_pane_ParamLimits

0x5776,	// (0x000244b1) form_field_data_pane

0x5796,	// (0x000244d1) form_field_data_wide_pane_ParamLimits

0x5796,	// (0x000244d1) form_field_data_wide_pane

0x57b7,	// (0x000244f2) form_field_popup_pane_ParamLimits

0x57b7,	// (0x000244f2) form_field_popup_pane

0x57d5,	// (0x00024510) form_field_popup_wide_pane_ParamLimits

0x57d5,	// (0x00024510) form_field_popup_wide_pane

0x57f2,	// (0x0002452d) form_field_slider_pane_ParamLimits

0x57f2,	// (0x0002452d) form_field_slider_pane

0x5805,	// (0x00024540) form_field_slider_wide_pane_ParamLimits

0x5805,	// (0x00024540) form_field_slider_wide_pane

0x1b7a,	// (0x000208b5) data_form_pane

0x5822,	// (0x0002455d) form_field_data_pane_t1

0x1b86,	// (0x000208c1) input_focus_pane

0x583a,	// (0x00024575) data_form_wide_pane

0x5857,	// (0x00024592) form_field_data_wide_pane_t1

0x1a1c,	// (0x00020757) input_focus_pane_cp6

0x5879,	// (0x000245b4) form_field_popup_pane_t1

0x1b86,	// (0x000208c1) input_focus_pane_cp7

0x1bf3,	// (0x0002092e) list_form_pane

0x5899,	// (0x000245d4) form_field_popup_wide_pane_t1

0x1b86,	// (0x000208c1) input_focus_pane_cp8

0x1c1c,	// (0x00020957) list_form_wide_pane

0x58b6,	// (0x000245f1) form_field_slider_pane_t1_ParamLimits

0x58b6,	// (0x000245f1) form_field_slider_pane_t1

0x58cc,	// (0x00024607) form_field_slider_pane_t2_ParamLimits

0x58cc,	// (0x00024607) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0002e3b3) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0002e3b3) form_field_slider_pane_t

0x174e,	// (0x00020489) input_focus_pane_cp9_ParamLimits

0x174e,	// (0x00020489) input_focus_pane_cp9

0x58e1,	// (0x0002461c) slider_cont_pane_ParamLimits

0x58e1,	// (0x0002461c) slider_cont_pane

0x1c28,	// (0x00020963) form_field_slider_wide_pane_t1_ParamLimits

0x1c28,	// (0x00020963) form_field_slider_wide_pane_t1

0x58f5,	// (0x00024630) form_field_slider_wide_pane_t2_ParamLimits

0x58f5,	// (0x00024630) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0002e3b8) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0002e3b8) form_field_slider_wide_pane_t

0x174e,	// (0x00020489) input_focus_pane_cp10_ParamLimits

0x174e,	// (0x00020489) input_focus_pane_cp10

0x5907,	// (0x00024642) slider_cont_pane_cp1_ParamLimits

0x5907,	// (0x00024642) slider_cont_pane_cp1

0x591b,	// (0x00024656) slider_form_pane_cp

0x1c4c,	// (0x00020987) input_focus_pane_g1

0x1c54,	// (0x0002098f) input_focus_pane_g2

0x1c5c,	// (0x00020997) input_focus_pane_g3

0x1c64,	// (0x0002099f) input_focus_pane_g4

0x1c6c,	// (0x000209a7) input_focus_pane_g5

0x1c74,	// (0x000209af) input_focus_pane_g6

0x1c7c,	// (0x000209b7) input_focus_pane_g7

0x1c84,	// (0x000209bf) input_focus_pane_g8

0x1c8c,	// (0x000209c7) input_focus_pane_g9

0x16f6,	// (0x00020431) input_focus_pane_g10

0x0009,

0xf682,	// (0x0002e3bd) input_focus_pane_g

0xa325,	// (0x00029060) wait_border_pane_g3_copy1

0x5923,	// (0x0002465e) data_form_pane_t1

0x16f6,	// (0x00020431) wait_anim_pane_g1_copy1

0x5bef,	// (0x0002492a) data_form_wide_pane_t1

0x593e,	// (0x00024679) list_form_graphic_pane_cp_ParamLimits

0x593e,	// (0x00024679) list_form_graphic_pane_cp

0xb214,	// (0x00029f4f) slider_form_pane_g1

0xb21d,	// (0x00029f58) slider_form_pane_g2

0x0006,

0xf980,	// (0x0002e6bb) slider_form_pane_g

0x5952,	// (0x0002468d) list_form_graphic_pane_ParamLimits

0x5952,	// (0x0002468d) list_form_graphic_pane

0x5969,	// (0x000246a4) list_form_graphic_pane_g1

0x5971,	// (0x000246ac) list_form_graphic_pane_t1_ParamLimits

0x5971,	// (0x000246ac) list_form_graphic_pane_t1

0x175c,	// (0x00020497) list_highlight_pane_cp5_ParamLimits

0x175c,	// (0x00020497) list_highlight_pane_cp5

0x5986,	// (0x000246c1) find_pane_g1

0x1c94,	// (0x000209cf) input_find_pane

0x598f,	// (0x000246ca) input_find_pane_g1_ParamLimits

0x598f,	// (0x000246ca) input_find_pane_g1

0x599b,	// (0x000246d6) input_find_pane_t1_ParamLimits

0x599b,	// (0x000246d6) input_find_pane_t1

0x59b0,	// (0x000246eb) input_find_pane_t2_ParamLimits

0x59b0,	// (0x000246eb) input_find_pane_t2

0x0001,

0xf697,	// (0x0002e3d2) input_find_pane_t_ParamLimits

0xf697,	// (0x0002e3d2) input_find_pane_t

0x1c9d,	// (0x000209d8) input_focus_pane_cp5_ParamLimits

0x1c9d,	// (0x000209d8) input_focus_pane_cp5

0x1cab,	// (0x000209e6) bg_popup_window_pane_cp2_ParamLimits

0x1cab,	// (0x000209e6) bg_popup_window_pane_cp2

0x1cb8,	// (0x000209f3) listscroll_menu_pane_ParamLimits

0x1cb8,	// (0x000209f3) listscroll_menu_pane

0x6e2f,	// (0x00025b6a) popup_submenu_window_ParamLimits

0x6e2f,	// (0x00025b6a) popup_submenu_window

0x1cc4,	// (0x000209ff) find_popup_pane_g1

0x6e57,	// (0x00025b92) input_popup_find_pane_cp

0x1c9d,	// (0x000209d8) input_focus_pane_cp4_ParamLimits

0x1c9d,	// (0x000209d8) input_focus_pane_cp4

0x1ccc,	// (0x00020a07) input_popup_find_pane_t1_ParamLimits

0x1ccc,	// (0x00020a07) input_popup_find_pane_t1

0x1700,	// (0x0002043b) bg_popup_sub_pane_cp

0x1cfa,	// (0x00020a35) listscroll_popup_sub_pane

0x1d02,	// (0x00020a3d) list_submenu_pane_ParamLimits

0x1d02,	// (0x00020a3d) list_submenu_pane

0x1d13,	// (0x00020a4e) scroll_pane_cp4

0x6e6f,	// (0x00025baa) list_single_popup_submenu_pane_ParamLimits

0x6e6f,	// (0x00025baa) list_single_popup_submenu_pane

0x1e52,	// (0x00020b8d) list_single_popup_submenu_pane_g1

0x6e83,	// (0x00025bbe) list_single_popup_submenu_pane_t1_ParamLimits

0x6e83,	// (0x00025bbe) list_single_popup_submenu_pane_t1

0x175c,	// (0x00020497) bg_active_tab_pane_cp1_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp1

0x1d1b,	// (0x00020a56) tabs_2_active_pane_g1

0x6e98,	// (0x00025bd3) tabs_2_active_pane_t1

0x175c,	// (0x00020497) bg_passive_tab_pane_cp1_ParamLimits

0x175c,	// (0x00020497) bg_passive_tab_pane_cp1

0x1d1b,	// (0x00020a56) tabs_2_passive_pane_g1

0x6e98,	// (0x00025bd3) tabs_2_passive_pane_t1

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp4

0x6eaa,	// (0x00025be5) tabs_2_long_active_pane_t1

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp4

0x87d5,	// (0x00027510) list_single_midp_graphic_pane_g4_ParamLimits

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp5

0x6ec9,	// (0x00025c04) tabs_3_long_active_pane_t1

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp5

0x87d5,	// (0x00027510) list_single_midp_graphic_pane_g4

0x175c,	// (0x00020497) bg_popup_window_pane_cp13_ParamLimits

0x175c,	// (0x00020497) bg_popup_window_pane_cp13

0x1d23,	// (0x00020a5e) listscroll_popup_fast_pane_ParamLimits

0x1d23,	// (0x00020a5e) listscroll_popup_fast_pane

0x1d2f,	// (0x00020a6a) grid_popup_fast_pane_ParamLimits

0x1d2f,	// (0x00020a6a) grid_popup_fast_pane

0x1d41,	// (0x00020a7c) scroll_pane_cp9_ParamLimits

0x1d41,	// (0x00020a7c) scroll_pane_cp9

0xcb3e,	// (0x0002b879) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb3e,	// (0x0002b879) list_single_graphic_hl_pane_t1_cp2

0x1d54,	// (0x00020a8f) input_focus_pane_cp20_ParamLimits

0x1d54,	// (0x00020a8f) input_focus_pane_cp20

0x1d62,	// (0x00020a9d) query_popup_data_pane_t1_ParamLimits

0x1d62,	// (0x00020a9d) query_popup_data_pane_t1

0x1d75,	// (0x00020ab0) query_popup_data_pane_t2_ParamLimits

0x1d75,	// (0x00020ab0) query_popup_data_pane_t2

0x1dbb,	// (0x00020af6) query_popup_data_pane_t3_ParamLimits

0x1dbb,	// (0x00020af6) query_popup_data_pane_t3

0x1dfc,	// (0x00020b37) query_popup_data_pane_t4_ParamLimits

0x1dfc,	// (0x00020b37) query_popup_data_pane_t4

0x3694,	// (0x000223cf) query_popup_data_pane_t5_ParamLimits

0x3694,	// (0x000223cf) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0002e3d7) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0002e3d7) query_popup_data_pane_t

0x1c4c,	// (0x00020987) bg_set_opt_pane_g1

0x1c54,	// (0x0002098f) bg_set_opt_pane_g2

0x1c5c,	// (0x00020997) bg_set_opt_pane_g3

0x1c64,	// (0x0002099f) bg_set_opt_pane_g4

0x1c6c,	// (0x000209a7) bg_set_opt_pane_g5

0x1c74,	// (0x000209af) bg_set_opt_pane_g6

0x1c7c,	// (0x000209b7) bg_set_opt_pane_g7

0x1c84,	// (0x000209bf) bg_set_opt_pane_g8

0x1c8c,	// (0x000209c7) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0002e3e2) bg_set_opt_pane_g

0x749c,	// (0x000261d7) control_top_pane_stacon_ParamLimits

0x749c,	// (0x000261d7) control_top_pane_stacon

0x74ef,	// (0x0002622a) signal_pane_stacon_ParamLimits

0x74ef,	// (0x0002622a) signal_pane_stacon

0x7514,	// (0x0002624f) stacon_top_pane_g1_ParamLimits

0x7514,	// (0x0002624f) stacon_top_pane_g1

0x7536,	// (0x00026271) title_pane_stacon_ParamLimits

0x7536,	// (0x00026271) title_pane_stacon

0x7560,	// (0x0002629b) uni_indicator_pane_stacon_ParamLimits

0x7560,	// (0x0002629b) uni_indicator_pane_stacon

0x7575,	// (0x000262b0) battery_pane_stacon_ParamLimits

0x7575,	// (0x000262b0) battery_pane_stacon

0x75b9,	// (0x000262f4) control_bottom_pane_stacon_ParamLimits

0x75b9,	// (0x000262f4) control_bottom_pane_stacon

0x75dc,	// (0x00026317) navi_pane_stacon_ParamLimits

0x75dc,	// (0x00026317) navi_pane_stacon

0x75ff,	// (0x0002633a) stacon_bottom_pane_g1_ParamLimits

0x75ff,	// (0x0002633a) stacon_bottom_pane_g1

0x6ef5,	// (0x00025c30) aid_levels_signal_lsc_ParamLimits

0x6ef5,	// (0x00025c30) aid_levels_signal_lsc

0x6f0b,	// (0x00025c46) signal_pane_stacon_g1_ParamLimits

0x6f0b,	// (0x00025c46) signal_pane_stacon_g1

0x6f1f,	// (0x00025c5a) signal_pane_stacon_g2_ParamLimits

0x6f1f,	// (0x00025c5a) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0002e3f5) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0002e3f5) signal_pane_stacon_g

0x6f54,	// (0x00025c8f) title_pane_stacon_t1_ParamLimits

0x6f54,	// (0x00025c8f) title_pane_stacon_t1

0x3770,	// (0x000224ab) uni_indicator_pane_stacon_g1

0x377a,	// (0x000224b5) uni_indicator_pane_stacon_g2

0x375c,	// (0x00022497) uni_indicator_pane_stacon_g3

0x3766,	// (0x000224a1) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0002e401) uni_indicator_pane_stacon_g

0x6f79,	// (0x00025cb4) control_top_pane_stacon_g1

0x6f81,	// (0x00025cbc) control_top_pane_stacon_t1_ParamLimits

0x6f81,	// (0x00025cbc) control_top_pane_stacon_t1

0x6fb8,	// (0x00025cf3) aid_levels_battery_lsc_ParamLimits

0x6fb8,	// (0x00025cf3) aid_levels_battery_lsc

0x6fcf,	// (0x00025d0a) battery_pane_stacon_g1_ParamLimits

0x6fcf,	// (0x00025d0a) battery_pane_stacon_g1

0x6fe2,	// (0x00025d1d) battery_pane_stacon_g2_ParamLimits

0x6fe2,	// (0x00025d1d) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0002e40a) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e40a) battery_pane_stacon_g

0x7020,	// (0x00025d5b) navi_icon_pane_stacon

0x7034,	// (0x00025d6f) navi_navi_pane_stacon

0x7020,	// (0x00025d5b) navi_text_pane_stacon

0x6f79,	// (0x00025cb4) control_bottom_pane_stacon_g1

0x7048,	// (0x00025d83) control_bottom_pane_stacon_t1_ParamLimits

0x7048,	// (0x00025d83) control_bottom_pane_stacon_t1

0x707f,	// (0x00025dba) grid_app_pane_ParamLimits

0x707f,	// (0x00025dba) grid_app_pane

0x70a3,	// (0x00025dde) scroll_pane_cp15_ParamLimits

0x70a3,	// (0x00025dde) scroll_pane_cp15

0x70b6,	// (0x00025df1) cell_app_pane_ParamLimits

0x70b6,	// (0x00025df1) cell_app_pane

0x70de,	// (0x00025e19) cell_app_pane_g1_ParamLimits

0x70de,	// (0x00025e19) cell_app_pane_g1

0x38a4,	// (0x000225df) cell_app_pane_g2_ParamLimits

0x38a4,	// (0x000225df) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0002e40f) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0002e40f) cell_app_pane_g

0x7102,	// (0x00025e3d) cell_app_pane_t1_ParamLimits

0x7102,	// (0x00025e3d) cell_app_pane_t1

0x38b0,	// (0x000225eb) grid_highlight_pane_ParamLimits

0x38b0,	// (0x000225eb) grid_highlight_pane

0x1c4c,	// (0x00020987) cell_highlight_pane_g1

0x1c54,	// (0x0002098f) cell_highlight_pane_g2

0x1c5c,	// (0x00020997) cell_highlight_pane_g3

0x1c64,	// (0x0002099f) cell_highlight_pane_g4

0x1c6c,	// (0x000209a7) cell_highlight_pane_g5

0x1c74,	// (0x000209af) cell_highlight_pane_g6

0x1c7c,	// (0x000209b7) cell_highlight_pane_g7

0x1c84,	// (0x000209bf) cell_highlight_pane_g8

0x1c8c,	// (0x000209c7) cell_highlight_pane_g9

0x16f6,	// (0x00020431) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0002e3bd) cell_highlight_pane_g

0x38cb,	// (0x00022606) bg_scroll_pane

0x712c,	// (0x00025e67) scroll_handle_pane

0x3927,	// (0x00022662) scroll_bg_pane_g1

0x393c,	// (0x00022677) scroll_bg_pane_g2

0x3954,	// (0x0002268f) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0002e414) scroll_bg_pane_g

0x7155,	// (0x00025e90) scroll_handle_focus_pane_ParamLimits

0x7155,	// (0x00025e90) scroll_handle_focus_pane

0x3927,	// (0x00022662) scroll_handle_pane_g1

0x3969,	// (0x000226a4) scroll_handle_pane_g2

0x3954,	// (0x0002268f) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0002e41b) scroll_handle_pane_g

0x1c9d,	// (0x000209d8) bg_popup_sub_pane_cp21_ParamLimits

0x1c9d,	// (0x000209d8) bg_popup_sub_pane_cp21

0x7162,	// (0x00025e9d) popup_fep_japan_predictive_window_t1_ParamLimits

0x7162,	// (0x00025e9d) popup_fep_japan_predictive_window_t1

0x717c,	// (0x00025eb7) popup_fep_japan_predictive_window_t2_ParamLimits

0x717c,	// (0x00025eb7) popup_fep_japan_predictive_window_t2

0x71af,	// (0x00025eea) popup_fep_japan_predictive_window_t3_ParamLimits

0x71af,	// (0x00025eea) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0002e422) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0002e422) popup_fep_japan_predictive_window_t

0x1700,	// (0x0002043b) bg_popup_sub_pane_cp23

0x3dce,	// (0x00022b09) listscroll_japin_cand_pane

0x397d,	// (0x000226b8) popup_fep_japan_candidate_window_t1

0x398b,	// (0x000226c6) candidate_pane_ParamLimits

0x398b,	// (0x000226c6) candidate_pane

0x71e6,	// (0x00025f21) scroll_pane_cp30

0x399d,	// (0x000226d8) list_single_popup_jap_candidate_pane_ParamLimits

0x399d,	// (0x000226d8) list_single_popup_jap_candidate_pane

0x1700,	// (0x0002043b) list_highlight_pane_cp30

0x39b2,	// (0x000226ed) list_single_popup_jap_candidate_pane_t1

0x39c1,	// (0x000226fc) level_1_signal

0x39ce,	// (0x00022709) level_2_signal

0x39db,	// (0x00022716) level_3_signal

0x39e8,	// (0x00022723) level_4_signal

0x39f5,	// (0x00022730) level_5_signal

0x3a02,	// (0x0002273d) level_6_signal

0x3a0f,	// (0x0002274a) level_7_signal

0x39c1,	// (0x000226fc) level_1_battery

0x39ce,	// (0x00022709) level_2_battery

0x39db,	// (0x00022716) level_3_battery

0x39e8,	// (0x00022723) level_4_battery

0x39f5,	// (0x00022730) level_5_battery

0x3a02,	// (0x0002273d) level_6_battery

0x3a0f,	// (0x0002274a) level_7_battery

0x3a53,	// (0x0002278e) list_menu_pane_ParamLimits

0x3a53,	// (0x0002278e) list_menu_pane

0x3a69,	// (0x000227a4) scroll_pane_cp25_ParamLimits

0x3a69,	// (0x000227a4) scroll_pane_cp25

0x3a82,	// (0x000227bd) list_double2_graphic_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double2_graphic_pane_cp2

0x3a82,	// (0x000227bd) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double2_large_graphic_pane_cp2

0x3a82,	// (0x000227bd) list_double2_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double2_pane_cp2

0x3a82,	// (0x000227bd) list_double_graphic_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double_graphic_pane_cp2

0x3a82,	// (0x000227bd) list_double_large_graphic_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double_large_graphic_pane_cp2

0x3a82,	// (0x000227bd) list_double_number_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double_number_pane_cp2

0x3a82,	// (0x000227bd) list_double_pane_cp2_ParamLimits

0x3a82,	// (0x000227bd) list_double_pane_cp2

0x7221,	// (0x00025f5c) list_single_2graphic_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_2graphic_pane_cp2

0x7221,	// (0x00025f5c) list_single_graphic_heading_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_graphic_heading_pane_cp2

0x7221,	// (0x00025f5c) list_single_graphic_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_graphic_pane_cp2

0x7221,	// (0x00025f5c) list_single_heading_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_heading_pane_cp2

0x3a92,	// (0x000227cd) list_single_large_graphic_pane_cp2_ParamLimits

0x3a92,	// (0x000227cd) list_single_large_graphic_pane_cp2

0x7221,	// (0x00025f5c) list_single_number_heading_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_number_heading_pane_cp2

0x7221,	// (0x00025f5c) list_single_number_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_number_pane_cp2

0x7221,	// (0x00025f5c) list_single_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_pane_cp2

0x3b07,	// (0x00022842) bg_popup_sub_pane_cp22

0x72f9,	// (0x00026034) popup_side_volume_key_window_g1

0x731d,	// (0x00026058) popup_side_volume_key_window_t1

0x7339,	// (0x00026074) volume_small_pane_cp1

0x174e,	// (0x00020489) bg_popup_sub_pane_cp24_ParamLimits

0x174e,	// (0x00020489) bg_popup_sub_pane_cp24

0x3b37,	// (0x00022872) fep_china_uni_candidate_pane_ParamLimits

0x3b37,	// (0x00022872) fep_china_uni_candidate_pane

0x3b4b,	// (0x00022886) fep_china_uni_entry_pane

0x3b5b,	// (0x00022896) popup_fep_china_uni_window_g1

0x7341,	// (0x0002607c) fep_china_uni_entry_pane_g1

0x7349,	// (0x00026084) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0002e453) fep_china_uni_entry_pane_g

0x7351,	// (0x0002608c) fep_entry_item_pane

0x735b,	// (0x00026096) fep_candidate_item_pane

0x7363,	// (0x0002609e) fep_china_uni_candidate_pane_g1

0x736b,	// (0x000260a6) fep_china_uni_candidate_pane_g2

0x7373,	// (0x000260ae) fep_china_uni_candidate_pane_g3

0x737b,	// (0x000260b6) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0002e458) fep_china_uni_candidate_pane_g

0x16f6,	// (0x00020431) fep_entry_item_pane_g1

0x7383,	// (0x000260be) fep_entry_item_pane_t1_ParamLimits

0x7383,	// (0x000260be) fep_entry_item_pane_t1

0x7399,	// (0x000260d4) fep_candidate_item_pane_t1_ParamLimits

0x7399,	// (0x000260d4) fep_candidate_item_pane_t1

0x73ae,	// (0x000260e9) fep_candidate_item_pane_t2_ParamLimits

0x73ae,	// (0x000260e9) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0002e461) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0002e461) fep_candidate_item_pane_t

0x175c,	// (0x00020497) list_highlight_pane_cp31_ParamLimits

0x175c,	// (0x00020497) list_highlight_pane_cp31

0x73c0,	// (0x000260fb) level_1_signal_lsc

0x73c9,	// (0x00026104) level_2_signal_lsc

0x73d2,	// (0x0002610d) level_3_signal_lsc

0x73db,	// (0x00026116) level_4_signal_lsc

0x73e4,	// (0x0002611f) level_5_signal_lsc

0x73ed,	// (0x00026128) level_6_signal_lsc

0x73f6,	// (0x00026131) level_7_signal_lsc

0x73f6,	// (0x00026131) level_1_battery_lsc

0x73ff,	// (0x0002613a) level_2_battery_lsc

0x7408,	// (0x00026143) level_3_battery_lsc

0x7411,	// (0x0002614c) level_4_battery_lsc

0x741a,	// (0x00026155) level_5_battery_lsc

0x7423,	// (0x0002615e) level_6_battery_lsc

0x73c0,	// (0x000260fb) level_7_battery_lsc

0x742c,	// (0x00026167) scroll_handle_focus_pane_g1

0x7435,	// (0x00026170) scroll_handle_focus_pane_g2

0x743e,	// (0x00026179) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0002e466) scroll_handle_focus_pane_g

0x59c5,	// (0x00024700) list_single_2graphic_pane_g1_ParamLimits

0x59c5,	// (0x00024700) list_single_2graphic_pane_g1

0x53b2,	// (0x000240ed) list_single_2graphic_pane_g2_ParamLimits

0x53b2,	// (0x000240ed) list_single_2graphic_pane_g2

0x5338,	// (0x00024073) list_single_2graphic_pane_g3_ParamLimits

0x5338,	// (0x00024073) list_single_2graphic_pane_g3

0x59d1,	// (0x0002470c) list_single_2graphic_pane_g4_ParamLimits

0x59d1,	// (0x0002470c) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0002e46d) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0002e46d) list_single_2graphic_pane_g

0x59dd,	// (0x00024718) list_single_2graphic_pane_t1_ParamLimits

0x59dd,	// (0x00024718) list_single_2graphic_pane_t1

0x5a0b,	// (0x00024746) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a0b,	// (0x00024746) list_double2_graphic_large_graphic_pane_g1

0x55c0,	// (0x000242fb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x55c0,	// (0x000242fb) list_double2_graphic_large_graphic_pane_g2

0x55d1,	// (0x0002430c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55d1,	// (0x0002430c) list_double2_graphic_large_graphic_pane_g3

0x5a1b,	// (0x00024756) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a1b,	// (0x00024756) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0002e476) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0002e476) list_double2_graphic_large_graphic_pane_g

0x5a27,	// (0x00024762) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a27,	// (0x00024762) list_double2_graphic_large_graphic_pane_t1

0x5a3d,	// (0x00024778) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a3d,	// (0x00024778) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0002e47f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0002e47f) list_double2_graphic_large_graphic_pane_t

0x76c6,	// (0x00026401) popup_fast_swap_window_ParamLimits

0x76c6,	// (0x00026401) popup_fast_swap_window

0x76e2,	// (0x0002641d) popup_side_volume_key_window

0x76fc,	// (0x00026437) stacon_top_pane

0x7706,	// (0x00026441) status_pane_ParamLimits

0x7706,	// (0x00026441) status_pane

0x7714,	// (0x0002644f) status_small_pane

0x1700,	// (0x0002043b) control_pane

0x1700,	// (0x0002043b) stacon_bottom_pane

0x1b46,	// (0x00020881) scroll_pane_cp121

0x1b3d,	// (0x00020878) set_content_pane

0x7447,	// (0x00026182) bg_active_tab_pane_g1_cp1

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp1

0x7459,	// (0x00026194) bg_active_tab_pane_g3_cp1

0x7447,	// (0x00026182) bg_passive_tab_pane_g1_cp1

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp1

0x7459,	// (0x00026194) bg_passive_tab_pane_g3_cp1

0x7462,	// (0x0002619d) bg_active_tab_pane_g1_cp2

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp2

0x746b,	// (0x000261a6) bg_active_tab_pane_g3_cp2

0x7462,	// (0x0002619d) bg_passive_tab_pane_g1_cp2

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp2

0x746b,	// (0x000261a6) bg_passive_tab_pane_g3_cp2

0x7474,	// (0x000261af) bg_active_tab_pane_g1_cp3

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp3

0x747d,	// (0x000261b8) bg_active_tab_pane_g3_cp3

0x7474,	// (0x000261af) bg_passive_tab_pane_g1_cp3

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp3

0x747d,	// (0x000261b8) bg_passive_tab_pane_g3_cp3

0x7486,	// (0x000261c1) bg_active_tab_pane_g1_cp4

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp4

0x7491,	// (0x000261cc) bg_active_tab_pane_g3_cp4

0x7486,	// (0x000261c1) bg_passive_tab_pane_g1_cp4

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp4

0x7491,	// (0x000261cc) bg_passive_tab_pane_g3_cp4

0x761b,	// (0x00026356) bg_active_tab_pane_g1_cp5

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp5

0x7624,	// (0x0002635f) bg_active_tab_pane_g3_cp5

0x761b,	// (0x00026356) bg_passive_tab_pane_g1_cp5

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp5

0x7624,	// (0x0002635f) bg_passive_tab_pane_g3_cp5

0x762d,	// (0x00026368) list_set_graphic_pane_ParamLimits

0x762d,	// (0x00026368) list_set_graphic_pane

0x1700,	// (0x0002043b) bg_set_opt_pane_cp4

0x764b,	// (0x00026386) list_set_graphic_pane_g1_ParamLimits

0x764b,	// (0x00026386) list_set_graphic_pane_g1

0x7657,	// (0x00026392) list_set_graphic_pane_g2_ParamLimits

0x7657,	// (0x00026392) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0002e484) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0002e484) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002e817) volume_small_pane_cp_g

0x7679,	// (0x000263b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7679,	// (0x000263b4) list_double2_large_graphic_pane_g1_cp2

0x7685,	// (0x000263c0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7685,	// (0x000263c0) list_double2_large_graphic_pane_g2_cp2

0x7696,	// (0x000263d1) list_double2_large_graphic_pane_g3_cp2

0x769e,	// (0x000263d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x769e,	// (0x000263d9) list_double2_large_graphic_pane_t1_cp2

0x76b4,	// (0x000263ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x76b4,	// (0x000263ef) list_double2_large_graphic_pane_t2_cp2

0xadd6,	// (0x00029b11) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd6,	// (0x00029b11) list_double_large_graphic_pane_g1_cp2

0xade7,	// (0x00029b22) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade7,	// (0x00029b22) list_double_large_graphic_pane_g2_cp2

0x7821,	// (0x0002655c) list_double_large_graphic_pane_g3_cp2

0xadf8,	// (0x00029b33) list_double_large_graphic_pane_g4_cp

0xae00,	// (0x00029b3b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae00,	// (0x00029b3b) list_double_large_graphic_pane_t1_cp2

0xae17,	// (0x00029b52) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae17,	// (0x00029b52) list_double_large_graphic_pane_t2_cp2

0x771f,	// (0x0002645a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x771f,	// (0x0002645a) list_double2_graphic_pane_g1_cp2

0x772d,	// (0x00026468) list_double2_graphic_pane_g2_cp2_ParamLimits

0x772d,	// (0x00026468) list_double2_graphic_pane_g2_cp2

0x773e,	// (0x00026479) list_double2_graphic_pane_g3_cp2

0x7748,	// (0x00026483) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7748,	// (0x00026483) list_double2_graphic_pane_t1_cp2

0x775e,	// (0x00026499) list_double2_graphic_pane_t2_cp2_ParamLimits

0x775e,	// (0x00026499) list_double2_graphic_pane_t2_cp2

0x1e38,	// (0x00020b73) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1e38,	// (0x00020b73) list_single_number_heading_pane_g1_cp2

0x7770,	// (0x000264ab) list_single_number_heading_pane_g2_cp2

0x7778,	// (0x000264b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7778,	// (0x000264b3) list_single_number_heading_pane_t1_cp2

0x778e,	// (0x000264c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x778e,	// (0x000264c9) list_single_number_heading_pane_t2_cp2

0x77a0,	// (0x000264db) list_single_number_heading_pane_t3_cp2_ParamLimits

0x77a0,	// (0x000264db) list_single_number_heading_pane_t3_cp2

0x1e38,	// (0x00020b73) list_single_heading_pane_g1_cp2_ParamLimits

0x1e38,	// (0x00020b73) list_single_heading_pane_g1_cp2

0x7770,	// (0x000264ab) list_single_heading_pane_g2_cp2

0x7778,	// (0x000264b3) list_single_heading_pane_t1_cp2_ParamLimits

0x7778,	// (0x000264b3) list_single_heading_pane_t1_cp2

0xabe0,	// (0x0002991b) list_single_heading_pane_t2_cp2_ParamLimits

0xabe0,	// (0x0002991b) list_single_heading_pane_t2_cp2

0xab28,	// (0x00029863) list_double_graphic_pane_g1_cp2_ParamLimits

0xab28,	// (0x00029863) list_double_graphic_pane_g1_cp2

0xab34,	// (0x0002986f) list_double_graphic_pane_g2_cp2_ParamLimits

0xab34,	// (0x0002986f) list_double_graphic_pane_g2_cp2

0xab43,	// (0x0002987e) list_double_graphic_pane_g3_cp2

0xab4b,	// (0x00029886) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4b,	// (0x00029886) list_double_graphic_pane_t1_cp2

0xab61,	// (0x0002989c) list_double_graphic_pane_t2_cp2_ParamLimits

0xab61,	// (0x0002989c) list_double_graphic_pane_t2_cp2

0x7815,	// (0x00026550) list_double_number_pane_g1_cp2_ParamLimits

0x7815,	// (0x00026550) list_double_number_pane_g1_cp2

0x7821,	// (0x0002655c) list_double_number_pane_g2_cp2

0xaaec,	// (0x00029827) list_double_number_pane_t1_cp2_ParamLimits

0xaaec,	// (0x00029827) list_double_number_pane_t1_cp2

0xab00,	// (0x0002983b) list_double_number_pane_t2_cp2_ParamLimits

0xab00,	// (0x0002983b) list_double_number_pane_t2_cp2

0xab16,	// (0x00029851) list_double_number_pane_t3_cp2_ParamLimits

0xab16,	// (0x00029851) list_double_number_pane_t3_cp2

0xa9d5,	// (0x00029710) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d5,	// (0x00029710) list_single_graphic_pane_g1_cp2

0x7879,	// (0x000265b4) list_single_graphic_pane_g2_cp2_ParamLimits

0x7879,	// (0x000265b4) list_single_graphic_pane_g2_cp2

0x7885,	// (0x000265c0) list_single_graphic_pane_g3_cp2

0xa9ab,	// (0x000296e6) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ab,	// (0x000296e6) list_single_graphic_pane_t1_cp2

0x7879,	// (0x000265b4) list_single_number_pane_g1_cp2_ParamLimits

0x7879,	// (0x000265b4) list_single_number_pane_g1_cp2

0x7885,	// (0x000265c0) list_single_number_pane_g2_cp2

0xa9ab,	// (0x000296e6) list_single_number_pane_t1_cp2_ParamLimits

0xa9ab,	// (0x000296e6) list_single_number_pane_t1_cp2

0xa9c1,	// (0x000296fc) list_single_number_pane_t2_cp2_ParamLimits

0xa9c1,	// (0x000296fc) list_single_number_pane_t2_cp2

0x7685,	// (0x000263c0) list_double2_pane_g1_cp2_ParamLimits

0x7685,	// (0x000263c0) list_double2_pane_g1_cp2

0x7696,	// (0x000263d1) list_double2_pane_g2_cp2

0x77ed,	// (0x00026528) list_double2_pane_t1_cp2_ParamLimits

0x77ed,	// (0x00026528) list_double2_pane_t1_cp2

0x7803,	// (0x0002653e) list_double2_pane_t2_cp2_ParamLimits

0x7803,	// (0x0002653e) list_double2_pane_t2_cp2

0x7815,	// (0x00026550) list_double_pane_g1_cp2_ParamLimits

0x7815,	// (0x00026550) list_double_pane_g1_cp2

0x7821,	// (0x0002655c) list_double_pane_g2_cp2

0x7829,	// (0x00026564) list_double_pane_t1_cp2_ParamLimits

0x7829,	// (0x00026564) list_double_pane_t1_cp2

0x783f,	// (0x0002657a) list_double_pane_t2_cp2_ParamLimits

0x783f,	// (0x0002657a) list_double_pane_t2_cp2

0x7869,	// (0x000265a4) list_single_pane_cp2_g3

0x7879,	// (0x000265b4) list_single_pane_g1_cp2_ParamLimits

0x7879,	// (0x000265b4) list_single_pane_g1_cp2

0x7885,	// (0x000265c0) list_single_pane_g2_cp2

0x788d,	// (0x000265c8) list_single_pane_t1_cp2_ParamLimits

0x788d,	// (0x000265c8) list_single_pane_t1_cp2

0x78a5,	// (0x000265e0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x78a5,	// (0x000265e0) list_single_large_graphic_pane_g1_cp2

0x78b1,	// (0x000265ec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x78b1,	// (0x000265ec) list_single_large_graphic_pane_g2_cp2

0x78bd,	// (0x000265f8) list_single_large_graphic_pane_g3_cp2

0x78c5,	// (0x00026600) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x78c5,	// (0x00026600) list_single_large_graphic_pane_g4_cp1

0x78df,	// (0x0002661a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x78df,	// (0x0002661a) list_single_large_graphic_pane_t1_cp2

0xa977,	// (0x000296b2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa977,	// (0x000296b2) list_single_graphic_heading_pane_g1_cp2

0xa944,	// (0x0002967f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa944,	// (0x0002967f) list_single_graphic_heading_pane_g4_cp2

0x7885,	// (0x000265c0) list_single_graphic_heading_pane_g5_cp2

0xa983,	// (0x000296be) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa983,	// (0x000296be) list_single_graphic_heading_pane_t1_cp2

0xa999,	// (0x000296d4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa999,	// (0x000296d4) list_single_graphic_heading_pane_t2_cp2

0xa938,	// (0x00029673) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa938,	// (0x00029673) list_single_2graphic_pane_g1_cp2

0xa944,	// (0x0002967f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa944,	// (0x0002967f) list_single_2graphic_pane_g2_cp2

0x7885,	// (0x000265c0) list_single_2graphic_pane_g3_cp2

0xa955,	// (0x00029690) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa955,	// (0x00029690) list_single_2graphic_pane_g4_cp2

0xa961,	// (0x0002969c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa961,	// (0x0002969c) list_single_2graphic_pane_t1_cp2

0x16f6,	// (0x00020431) list_highlight_pane_g10_cp1

0xa520,	// (0x0002925b) list_highlight_pane_g1_cp1

0xa528,	// (0x00029263) list_highlight_pane_g2_cp1

0xa530,	// (0x0002926b) list_highlight_pane_g3_cp1

0xa538,	// (0x00029273) list_highlight_pane_g4_cp1

0xa540,	// (0x0002927b) list_highlight_pane_g5_cp1

0xa548,	// (0x00029283) list_highlight_pane_g6_cp1

0xa550,	// (0x0002928b) list_highlight_pane_g7_cp1

0xa558,	// (0x00029293) list_highlight_pane_g8_cp1

0xa560,	// (0x0002929b) list_highlight_pane_g9_cp1

0xa448,	// (0x00029183) form_field_slider_pane_t3

0xa456,	// (0x00029191) form_field_slider_pane_t4

0xa464,	// (0x0002919f) slider_form_pane_ParamLimits

0xa464,	// (0x0002919f) slider_form_pane

0x1700,	// (0x0002043b) control_abbreviations

0x1700,	// (0x0002043b) control_conventions

0x1700,	// (0x0002043b) control_definitions

0x1700,	// (0x0002043b) format_table_attribute

0xac2a,	// (0x00029965) bg_popup_preview_window_pane_g9

0x1700,	// (0x0002043b) format_table_data2

0x1700,	// (0x0002043b) format_table_data3

0x1700,	// (0x0002043b) format_table_data_example

0x0008,

0x1700,	// (0x0002043b) intro_purpose

0xf8e0,	// (0x0002e61b) bg_popup_preview_window_pane_g

0x1700,	// (0x0002043b) texts_category

0x1700,	// (0x0002043b) texts_graphics

0x78f5,	// (0x00026630) text_digital

0x7904,	// (0x0002663f) text_primary

0x7913,	// (0x0002664e) text_primary_small

0x7922,	// (0x0002665d) text_secondary

0x7931,	// (0x0002666c) text_title

0xb357,	// (0x0002a092) bg_passive_tab_pane_g1_cp3_srt

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp3_srt

0xb360,	// (0x0002a09b) bg_passive_tab_pane_g3_cp3_srt

0x175c,	// (0x00020497) bg_active_tab_pane_cp3_srt_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp3_srt

0xb369,	// (0x0002a0a4) tabs_4_active_pane_srt_g1

0xb371,	// (0x0002a0ac) tabs_4_active_pane_srt_t1_ParamLimits

0xb371,	// (0x0002a0ac) tabs_4_active_pane_srt_t1

0xb357,	// (0x0002a092) bg_active_tab_pane_g1_cp3_copy1

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp3_copy1

0xb360,	// (0x0002a09b) bg_active_tab_pane_g3_cp3_copy1

0x175c,	// (0x00020497) tabs_2_long_active_pane_srt_ParamLimits

0x175c,	// (0x00020497) tabs_2_long_active_pane_srt

0x175c,	// (0x00020497) tabs_2_long_passive_pane_srt_ParamLimits

0x175c,	// (0x00020497) tabs_2_long_passive_pane_srt

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp4_srt

0xb04b,	// (0x00029d86) bg_passive_tab_pane_g1_cp4_srt

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp4_srt

0xb054,	// (0x00029d8f) bg_passive_tab_pane_g3_cp4_srt

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp4_srt_ParamLimits

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp4_srt

0xb05d,	// (0x00029d98) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb05d,	// (0x00029d98) tabs_2_long_active_pane_srt_t1

0xb04b,	// (0x00029d86) bg_active_tab_pane_g1_cp4_srt

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp4_srt

0xb054,	// (0x00029d8f) bg_active_tab_pane_g3_cp4_srt

0x174e,	// (0x00020489) tabs_3_long_active_pane_srt_ParamLimits

0x174e,	// (0x00020489) tabs_3_long_active_pane_srt

0x174e,	// (0x00020489) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x174e,	// (0x00020489) tabs_3_long_passive_pane_cp_srt

0x174e,	// (0x00020489) tabs_3_long_passive_pane_srt_ParamLimits

0x174e,	// (0x00020489) tabs_3_long_passive_pane_srt

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp5_srt

0x761b,	// (0x00026356) bg_passive_tab_pane_g1_cp5_srt

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp5_srt

0x7624,	// (0x0002635f) bg_passive_tab_pane_g3_cp5_srt

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp5_srt_ParamLimits

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp5_srt

0xb039,	// (0x00029d74) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb039,	// (0x00029d74) tabs_3_long_active_pane_srt_t1

0x761b,	// (0x00026356) bg_active_tab_pane_g1_cp5_srt

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp5_srt

0x7624,	// (0x0002635f) bg_active_tab_pane_g3_cp5_srt

0xb02b,	// (0x00029d66) navi_text_pane_srt_t1

0xb023,	// (0x00029d5e) navi_icon_pane_srt_g1

0x7bab,	// (0x000268e6) midp_editing_number_pane_srt

0x7940,	// (0x0002667b) midp_ticker_pane_srt

0x7bb3,	// (0x000268ee) midp_ticker_pane_srt_g1

0x7bbb,	// (0x000268f6) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0002e4a3) midp_ticker_pane_srt_g

0x7bc3,	// (0x000268fe) midp_ticker_pane_srt_t1

0xb014,	// (0x00029d4f) midp_editing_number_pane_t1_copy1

0x7948,	// (0x00026683) listscroll_midp_pane

0x7948,	// (0x00026683) midp_form_pane

0x79ba,	// (0x000266f5) midp_info_popup_window_ParamLimits

0x79ba,	// (0x000266f5) midp_info_popup_window

0x1c9d,	// (0x000209d8) bg_popup_sub_pane_cp50_ParamLimits

0x1c9d,	// (0x000209d8) bg_popup_sub_pane_cp50

0xa168,	// (0x00028ea3) listscroll_midp_info_pane_ParamLimits

0xa168,	// (0x00028ea3) listscroll_midp_info_pane

0xa148,	// (0x00028e83) listscroll_form_midp_pane_ParamLimits

0xa148,	// (0x00028e83) listscroll_form_midp_pane

0xa154,	// (0x00028e8f) scroll_bar_cp050

0xa128,	// (0x00028e63) list_midp_pane

0xbd8d,	// (0x0002aac8) signal_pane_g2_cp

0xa062,	// (0x00028d9d) listscroll_midp_info_pane_t1_ParamLimits

0xa062,	// (0x00028d9d) listscroll_midp_info_pane_t1

0xa07a,	// (0x00028db5) listscroll_midp_info_pane_t2_ParamLimits

0xa07a,	// (0x00028db5) listscroll_midp_info_pane_t2

0xa0b8,	// (0x00028df3) listscroll_midp_info_pane_t3_ParamLimits

0xa0b8,	// (0x00028df3) listscroll_midp_info_pane_t3

0xa0f2,	// (0x00028e2d) listscroll_midp_info_pane_t4_ParamLimits

0xa0f2,	// (0x00028e2d) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0002e556) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0002e556) listscroll_midp_info_pane_t

0x1d13,	// (0x00020a4e) scroll_pane_cp21

0xa002,	// (0x00028d3d) form_midp_field_choice_group_pane

0xa00b,	// (0x00028d46) form_midp_field_text_pane

0xa048,	// (0x00028d83) form_midp_field_time_pane

0xa050,	// (0x00028d8b) form_midp_gauge_slider_pane

0xa059,	// (0x00028d94) form_midp_gauge_wait_pane

0x1700,	// (0x0002043b) form_midp_image_pane

0x5baa,	// (0x000248e5) list_single_midp_pane_ParamLimits

0x5baa,	// (0x000248e5) list_single_midp_pane

0x9fb7,	// (0x00028cf2) form_midp_field_text_pane_t1

0x9d81,	// (0x00028abc) input_focus_pane_cp050

0x9ff1,	// (0x00028d2c) list_midp_form_text_pane

0x9f86,	// (0x00028cc1) form_midp_field_choice_group_pane_t1

0x9f94,	// (0x00028ccf) input_focus_pane_cp051

0x9fa8,	// (0x00028ce3) list_midp_choice_pane

0x1700,	// (0x0002043b) status_idle_pane

0x9f6a,	// (0x00028ca5) form_midp_field_time_pane_t1

0x16f6,	// (0x00020431) wait_anim_pane_g2_copy1

0x9f78,	// (0x00028cb3) form_midp_field_time_pane_t2

0x0001,

0x7a6a,	// (0x000267a5) aid_navinavi_width_2_pane

0xf816,	// (0x0002e551) form_midp_field_time_pane_t

0x1700,	// (0x0002043b) input_focus_pane_cp052

0x1700,	// (0x0002043b) bg_input_focus_pane_cp040

0x9f2a,	// (0x00028c65) form_midp_gauge_slider_pane_t1

0x9f38,	// (0x00028c73) form_midp_gauge_slider_pane_t2

0x9f46,	// (0x00028c81) form_midp_gauge_slider_pane_t3

0x9f54,	// (0x00028c8f) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0002e548) form_midp_gauge_slider_pane_t

0x9f62,	// (0x00028c9d) form_midp_slider_pane

0x175c,	// (0x00020497) bg_input_focus_pane_cp041_ParamLimits

0x175c,	// (0x00020497) bg_input_focus_pane_cp041

0x9ef7,	// (0x00028c32) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ef7,	// (0x00028c32) form_midp_gauge_wait_pane_t1

0x9f09,	// (0x00028c44) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f09,	// (0x00028c44) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0002e543) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0002e543) form_midp_gauge_wait_pane_t

0x9f1b,	// (0x00028c56) form_midp_wait_pane_ParamLimits

0x9f1b,	// (0x00028c56) form_midp_wait_pane

0x9ec1,	// (0x00028bfc) form_midp_image_pane_g1

0x9eca,	// (0x00028c05) form_midp_image_pane_t1

0x9ed9,	// (0x00028c14) form_midp_image_pane_t2

0x9ee8,	// (0x00028c23) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0002e53c) form_midp_image_pane_t

0x9eb8,	// (0x00028bf3) list_single_midp_pane_g1

0x5b9b,	// (0x000248d6) list_single_midp_pane_t1

0x9e8f,	// (0x00028bca) list_midp_form_item_pane_ParamLimits

0x9e8f,	// (0x00028bca) list_midp_form_item_pane

0x7a12,	// (0x0002674d) list_midp_form_item_pane_t1

0x7a21,	// (0x0002675c) midp_ticker_pane_g1

0x7a2d,	// (0x00026768) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0002e489) midp_ticker_pane_g

0x7a39,	// (0x00026774) midp_ticker_pane_t1

0xb261,	// (0x00029f9c) midp_editing_number_pane_t1

0xb23f,	// (0x00029f7a) midp_editing_number_pane

0xb24e,	// (0x00029f89) midp_ticker_pane

0xb004,	// (0x00029d3f) ai_message_heading_pane

0x1700,	// (0x0002043b) bg_popup_window_pane_cp14

0xb00c,	// (0x00029d47) listscroll_ai_message_pane

0xaf8e,	// (0x00029cc9) ai_message_heading_pane_g1_ParamLimits

0xaf8e,	// (0x00029cc9) ai_message_heading_pane_g1

0xaf9a,	// (0x00029cd5) ai_message_heading_pane_g2_ParamLimits

0xaf9a,	// (0x00029cd5) ai_message_heading_pane_g2

0xafa6,	// (0x00029ce1) ai_message_heading_pane_g3_ParamLimits

0xafa6,	// (0x00029ce1) ai_message_heading_pane_g3

0xafb2,	// (0x00029ced) ai_message_heading_pane_g4_ParamLimits

0xafb2,	// (0x00029ced) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0002e67d) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0002e67d) ai_message_heading_pane_g

0xafbe,	// (0x00029cf9) ai_message_heading_pane_t1_ParamLimits

0xafbe,	// (0x00029cf9) ai_message_heading_pane_t1

0xafd8,	// (0x00029d13) ai_message_heading_pane_t2_ParamLimits

0xafd8,	// (0x00029d13) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0002e686) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0002e686) ai_message_heading_pane_t

0xafea,	// (0x00029d25) bg_popup_heading_pane_cp1_ParamLimits

0xafea,	// (0x00029d25) bg_popup_heading_pane_cp1

0xaf7c,	// (0x00029cb7) list_ai_message_pane_ParamLimits

0xaf7c,	// (0x00029cb7) list_ai_message_pane

0x1d13,	// (0x00020a4e) scroll_pane_cp10

0xaf18,	// (0x00029c53) list_ai_message_pane_g1

0xaf20,	// (0x00029c5b) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0002e65a) list_ai_message_pane_g

0xaf28,	// (0x00029c63) list_ai_message_pane_t1_ParamLimits

0xaf28,	// (0x00029c63) list_ai_message_pane_t1

0xaf3d,	// (0x00029c78) list_ai_message_pane_t2_ParamLimits

0xaf3d,	// (0x00029c78) list_ai_message_pane_t2

0xaf52,	// (0x00029c8d) list_ai_message_pane_t3_ParamLimits

0xaf52,	// (0x00029c8d) list_ai_message_pane_t3

0xaf67,	// (0x00029ca2) list_ai_message_pane_t4_ParamLimits

0xaf67,	// (0x00029ca2) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0002e65f) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0002e65f) list_ai_message_pane_t

0xaf03,	// (0x00029c3e) cell_ai_soft_ind_pane_ParamLimits

0xaf03,	// (0x00029c3e) cell_ai_soft_ind_pane

0x7a4b,	// (0x00026786) cell_ai_soft_ind_pane_g1_ParamLimits

0x7a4b,	// (0x00026786) cell_ai_soft_ind_pane_g1

0x1700,	// (0x0002043b) grid_highlight_cp1

0x7a58,	// (0x00026793) text_secondary_cp56_ParamLimits

0x7a58,	// (0x00026793) text_secondary_cp56

0xaed8,	// (0x00029c13) example_general_pane_ParamLimits

0xaed8,	// (0x00029c13) example_general_pane

0xaee4,	// (0x00029c1f) example_parent_pane_g1_ParamLimits

0xaee4,	// (0x00029c1f) example_parent_pane_g1

0xaef0,	// (0x00029c2b) example_parent_pane_t1_ParamLimits

0xaef0,	// (0x00029c2b) example_parent_pane_t1

0x8237,	// (0x00026f72) popup_preview_text_window_ParamLimits

0x8237,	// (0x00026f72) popup_preview_text_window

0x7871,	// (0x000265ac) list_single_pane_cp2_g4

0x1948,	// (0x00020683) bg_popup_preview_window_pane_ParamLimits

0x1948,	// (0x00020683) bg_popup_preview_window_pane

0xac32,	// (0x0002996d) popup_preview_text_window_t1_ParamLimits

0xac32,	// (0x0002996d) popup_preview_text_window_t1

0xac50,	// (0x0002998b) popup_preview_text_window_t2_ParamLimits

0xac50,	// (0x0002998b) popup_preview_text_window_t2

0xac99,	// (0x000299d4) popup_preview_text_window_t3_ParamLimits

0xac99,	// (0x000299d4) popup_preview_text_window_t3

0xacde,	// (0x00029a19) popup_preview_text_window_t4_ParamLimits

0xacde,	// (0x00029a19) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0002e62e) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0002e62e) popup_preview_text_window_t

0xad5c,	// (0x00029a97) scroll_pane_cp11

0x9d0d,	// (0x00028a48) bg_popup_preview_window_pane_g1

0xabf2,	// (0x0002992d) bg_popup_preview_window_pane_g2

0xabfa,	// (0x00029935) bg_popup_preview_window_pane_g3

0xac02,	// (0x0002993d) bg_popup_preview_window_pane_g4

0xac0a,	// (0x00029945) bg_popup_preview_window_pane_g5

0xac12,	// (0x0002994d) bg_popup_preview_window_pane_g6

0xac1a,	// (0x00029955) bg_popup_preview_window_pane_g7

0xac22,	// (0x0002995d) bg_popup_preview_window_pane_g8

0x6478,	// (0x000251b3) aid_popup_width_pane

0x8215,	// (0x00026f50) popup_midp_note_alarm_window_ParamLimits

0x8215,	// (0x00026f50) popup_midp_note_alarm_window

0x1b7a,	// (0x000208b5) data_form_pane_ParamLimits

0x5818,	// (0x00024553) form_field_data_pane_g1

0x5822,	// (0x0002455d) form_field_data_pane_t1_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_ParamLimits

0x583a,	// (0x00024575) data_form_wide_pane_ParamLimits

0x584b,	// (0x00024586) form_field_data_wide_pane_g1

0x5857,	// (0x00024592) form_field_data_wide_pane_t1_ParamLimits

0x1a1c,	// (0x00020757) input_focus_pane_cp6_ParamLimits

0x6e61,	// (0x00025b9c) input_popup_find_pane_g1_ParamLimits

0x6e61,	// (0x00025b9c) input_popup_find_pane_g1

0x6ff3,	// (0x00025d2e) aid_navi_side_left_pane

0x7008,	// (0x00025d43) aid_navi_side_right_pane

0xa61b,	// (0x00029356) bg_popup_window_pane_cp30_ParamLimits

0xa61b,	// (0x00029356) bg_popup_window_pane_cp30

0xa695,	// (0x000293d0) popup_midp_note_alarm_window_g1_ParamLimits

0xa695,	// (0x000293d0) popup_midp_note_alarm_window_g1

0xa6c5,	// (0x00029400) popup_midp_note_alarm_window_t1_ParamLimits

0xa6c5,	// (0x00029400) popup_midp_note_alarm_window_t1

0xa766,	// (0x000294a1) popup_midp_note_alarm_window_t2_ParamLimits

0xa766,	// (0x000294a1) popup_midp_note_alarm_window_t2

0xa814,	// (0x0002954f) popup_midp_note_alarm_window_t3_ParamLimits

0xa814,	// (0x0002954f) popup_midp_note_alarm_window_t3

0xa83c,	// (0x00029577) popup_midp_note_alarm_window_t4_ParamLimits

0xa83c,	// (0x00029577) popup_midp_note_alarm_window_t4

0xa85c,	// (0x00029597) popup_midp_note_alarm_window_t5_ParamLimits

0xa85c,	// (0x00029597) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0002e5cb) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0002e5cb) popup_midp_note_alarm_window_t

0xa908,	// (0x00029643) wait_bar_pane_cp1_ParamLimits

0xa908,	// (0x00029643) wait_bar_pane_cp1

0x1700,	// (0x0002043b) wait_anim_pane_copy1

0x1700,	// (0x0002043b) wait_border_pane_copy1

0xa311,	// (0x0002904c) wait_border_pane_g1_copy1

0x5871,	// (0x000245ac) form_field_popup_pane_g1

0x5879,	// (0x000245b4) form_field_popup_pane_t1_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_cp7_ParamLimits

0x1bf3,	// (0x0002092e) list_form_pane_ParamLimits

0x5891,	// (0x000245cc) form_field_popup_wide_pane_g1

0x5899,	// (0x000245d4) form_field_popup_wide_pane_t1_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_cp8_ParamLimits

0x1c1c,	// (0x00020957) list_form_wide_pane_ParamLimits

0xb3eb,	// (0x0002a126) aid_size_cell_graphic_pane

0x5923,	// (0x0002465e) data_form_pane_t1_ParamLimits

0x5bef,	// (0x0002492a) data_form_wide_pane_t1_ParamLimits

0x851c,	// (0x00027257) bg_status_flat_pane

0x6877,	// (0x000255b2) title_pane_t1_ParamLimits

0x1716,	// (0x00020451) title_pane_t2_ParamLimits

0x173c,	// (0x00020477) title_pane_t3_ParamLimits

0xf557,	// (0x0002e292) title_pane_t_ParamLimits

0x39c1,	// (0x000226fc) level_1_signal_ParamLimits

0x39ce,	// (0x00022709) level_2_signal_ParamLimits

0x39db,	// (0x00022716) level_3_signal_ParamLimits

0x39e8,	// (0x00022723) level_4_signal_ParamLimits

0x39f5,	// (0x00022730) level_5_signal_ParamLimits

0x3a02,	// (0x0002273d) level_6_signal_ParamLimits

0x3a0f,	// (0x0002274a) level_7_signal_ParamLimits

0x39c1,	// (0x000226fc) level_1_battery_ParamLimits

0x39ce,	// (0x00022709) level_2_battery_ParamLimits

0x39db,	// (0x00022716) level_3_battery_ParamLimits

0x39e8,	// (0x00022723) level_4_battery_ParamLimits

0x39f5,	// (0x00022730) level_5_battery_ParamLimits

0x3a02,	// (0x0002273d) level_6_battery_ParamLimits

0x3a0f,	// (0x0002274a) level_7_battery_ParamLimits

0xa520,	// (0x0002925b) bg_status_flat_pane_g1

0xa528,	// (0x00029263) bg_status_flat_pane_g2

0xa530,	// (0x0002926b) bg_status_flat_pane_g3

0xa538,	// (0x00029273) bg_status_flat_pane_g4

0xa540,	// (0x0002927b) bg_status_flat_pane_g5

0xa548,	// (0x00029283) bg_status_flat_pane_g6

0xa550,	// (0x0002928b) bg_status_flat_pane_g7

0x68e7,	// (0x00025622) tabs_3_active_pane_t1_ParamLimits

0x68e7,	// (0x00025622) tabs_3_passive_pane_t1_ParamLimits

0x6901,	// (0x0002563c) tabs_4_active_pane_t1_ParamLimits

0x6901,	// (0x0002563c) tabs_4_1_passive_pane_t1_ParamLimits

0x6e98,	// (0x00025bd3) tabs_2_active_pane_t1_ParamLimits

0x6e98,	// (0x00025bd3) tabs_2_passive_pane_t1_ParamLimits

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp4_ParamLimits

0x6eaa,	// (0x00025be5) tabs_2_long_active_pane_t1_ParamLimits

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp4_ParamLimits

0x87fd,	// (0x00027538) list_single_midp_graphic_pane_t1_ParamLimits

0x1e44,	// (0x00020b7f) bg_active_tab_pane_cp5_ParamLimits

0x6ec9,	// (0x00025c04) tabs_3_long_active_pane_t1_ParamLimits

0x6ebd,	// (0x00025bf8) bg_passive_tab_pane_cp5_ParamLimits

0x87fd,	// (0x00027538) list_single_midp_graphic_pane_t1

0x851c,	// (0x00027257) bg_status_flat_pane_ParamLimits

0x85e5,	// (0x00027320) indicator_pane_cp2_ParamLimits

0x85e5,	// (0x00027320) indicator_pane_cp2

0x8710,	// (0x0002744b) navi_pane_srt_ParamLimits

0x8710,	// (0x0002744b) navi_pane_srt

0x8734,	// (0x0002746f) popup_clock_digital_analogue_window_cp1

0x17ba,	// (0x000204f5) indicator_pane_t1

0x7940,	// (0x0002667b) copy_highlight_pane

0x7940,	// (0x0002667b) cursor_graphics_pane

0x7940,	// (0x0002667b) graphic_within_text_pane

0x7940,	// (0x0002667b) link_highlight_pane

0xad1f,	// (0x00029a5a) popup_preview_text_window_t5_ParamLimits

0xad1f,	// (0x00029a5a) popup_preview_text_window_t5

0x7a72,	// (0x000267ad) cursor_digital_pane

0x7a72,	// (0x000267ad) cursor_primary_pane

0x7a83,	// (0x000267be) cursor_primary_small_pane

0x7a8b,	// (0x000267c6) cursor_secondary_pane

0x7a93,	// (0x000267ce) cursor_title_pane

0x7a72,	// (0x000267ad) link_highlight_digital_pane

0x7a7a,	// (0x000267b5) link_highlight_primary_pane

0x7a83,	// (0x000267be) link_highlight_primary_small_pane

0x7a8b,	// (0x000267c6) link_highlight_secondary_pane

0x7a93,	// (0x000267ce) link_highlight_title_pane

0x7a72,	// (0x000267ad) copy_highlight_digital_pane

0x7a72,	// (0x000267ad) copy_highlight_primary_pane

0x7a83,	// (0x000267be) copy_highlight_primary_small_pane

0x7a8b,	// (0x000267c6) copy_highlight_secondary_pane

0x7a93,	// (0x000267ce) copy_highlight_title_pane

0x7a8b,	// (0x000267c6) graphic_text_digital_pane

0xa5be,	// (0x000292f9) graphic_text_primary_pane

0xa5c7,	// (0x00029302) graphic_text_primary_small_pane

0x7a83,	// (0x000267be) graphic_text_secondary_pane

0x7a72,	// (0x000267ad) graphic_text_title_pane

0x7a9b,	// (0x000267d6) cursor_primary_pane_g1

0xa5b0,	// (0x000292eb) cursor_text_primary_t1

0xa598,	// (0x000292d3) cursor_primary_small_pane_g1

0xa5a2,	// (0x000292dd) cursor_text_primary_small_t1

0xa580,	// (0x000292bb) cursor_primary_small_pane_g1_copy1

0xa58a,	// (0x000292c5) cursor_text_primary_small_t1_copy1

0xa568,	// (0x000292a3) cursor_text_title_t1

0xa576,	// (0x000292b1) cursor_title_pane_g1

0x7a9b,	// (0x000267d6) cursor_digital_pane_g1

0x7aa5,	// (0x000267e0) cursor_text_digital_t1

0x7ab3,	// (0x000267ee) link_highlight_primary_pane_g1

0xa511,	// (0x0002924c) link_highlight_primary_pane_t1

0x7ab3,	// (0x000267ee) link_highlight_primary_small_pane_g1

0x7abb,	// (0x000267f6) link_highlight_primary_small_pane_t1

0x7ab3,	// (0x000267ee) link_highlight_secondary_pane_g1

0x7aca,	// (0x00026805) link_highlight_secondary_pane_t1

0xa476,	// (0x000291b1) link_highlight_title_pane_g1

0xa48d,	// (0x000291c8) link_highlight_title_pane_t1

0xa476,	// (0x000291b1) link_highlight_digital_pane_g1

0xa47e,	// (0x000291b9) link_highlight_digital_pane_t1

0xa330,	// (0x0002906b) copy_highlight_primary_pane_g1

0xa356,	// (0x00029091) copy_highlight_primary_pane_t1

0xa330,	// (0x0002906b) copy_highlight_primary_small_pane_g1

0xa347,	// (0x00029082) copy_highlight_primary_small_pane_t1

0x7ad9,	// (0x00026814) copy_highlight_secondary_pane_g1

0x7ae1,	// (0x0002681c) copy_highlight_secondary_pane_t1

0xa330,	// (0x0002906b) copy_highlight_title_pane_g1

0xa338,	// (0x00029073) copy_highlight_title_pane_t1

0xa330,	// (0x0002906b) copy_highlight_digital_pane_g1

0xb5b9,	// (0x0002a2f4) copy_highlight_digital_pane_t1

0xb50d,	// (0x0002a248) graphic_text_primary_pane_g1

0xb59d,	// (0x0002a2d8) graphic_text_primary_pane_t1

0xb5ab,	// (0x0002a2e6) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0002e6fa) graphic_text_primary_pane_t

0xb579,	// (0x0002a2b4) graphic_text_primary_small_pane_g1

0xb581,	// (0x0002a2bc) graphic_text_primary_small_pane_t1

0xb58f,	// (0x0002a2ca) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0002e6f5) graphic_text_primary_small_pane_t

0xb555,	// (0x0002a290) graphic_text_secondary_pane_g1

0xb55d,	// (0x0002a298) graphic_text_secondary_pane_t1

0xb56b,	// (0x0002a2a6) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0002e6f0) graphic_text_secondary_pane_t

0xb531,	// (0x0002a26c) graphic_text_title_pane_g1

0xb539,	// (0x0002a274) graphic_text_title_pane_t1

0xb547,	// (0x0002a282) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0002e6eb) graphic_text_title_pane_t

0xb50d,	// (0x0002a248) graphic_text_digital_pane_g1

0xb515,	// (0x0002a250) graphic_text_digital_pane_t1

0xb523,	// (0x0002a25e) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0002e6e6) graphic_text_digital_pane_t

0x175c,	// (0x00020497) navi_icon_pane_srt_ParamLimits

0x175c,	// (0x00020497) navi_icon_pane_srt

0x1700,	// (0x0002043b) navi_midp_pane_srt

0x1700,	// (0x0002043b) navi_navi_pane_srt

0x175c,	// (0x00020497) navi_text_pane_srt_ParamLimits

0x175c,	// (0x00020497) navi_text_pane_srt

0xb4d8,	// (0x0002a213) navi_navi_icon_text_pane_srt

0xb4e0,	// (0x0002a21b) navi_navi_pane_srt_g1_ParamLimits

0xb4e0,	// (0x0002a21b) navi_navi_pane_srt_g1

0xb4f2,	// (0x0002a22d) navi_navi_pane_srt_g2_ParamLimits

0xb4f2,	// (0x0002a22d) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0002e6e1) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0002e6e1) navi_navi_pane_srt_g

0xb504,	// (0x0002a23f) navi_navi_tabs_pane_srt

0xb4d8,	// (0x0002a213) navi_navi_text_pane_srt

0xb4d8,	// (0x0002a213) navi_navi_volume_pane_srt

0xb4c9,	// (0x0002a204) navi_navi_text_pane_srt_t1

0x8b7d,	// (0x000278b8) navi_navi_volume_pane_srt_g1

0x8b85,	// (0x000278c0) volume_small_pane_srt_ParamLimits

0x8b85,	// (0x000278c0) volume_small_pane_srt

0x7af0,	// (0x0002682b) volume_small_pane_srt_g1_ParamLimits

0x7af0,	// (0x0002682b) volume_small_pane_srt_g1

0x7b00,	// (0x0002683b) volume_small_pane_srt_g2_ParamLimits

0x7b00,	// (0x0002683b) volume_small_pane_srt_g2

0x7b11,	// (0x0002684c) volume_small_pane_srt_g3_ParamLimits

0x7b11,	// (0x0002684c) volume_small_pane_srt_g3

0x7b22,	// (0x0002685d) volume_small_pane_srt_g4_ParamLimits

0x7b22,	// (0x0002685d) volume_small_pane_srt_g4

0x7b33,	// (0x0002686e) volume_small_pane_srt_g5_ParamLimits

0x7b33,	// (0x0002686e) volume_small_pane_srt_g5

0x7b44,	// (0x0002687f) volume_small_pane_srt_g6_ParamLimits

0x7b44,	// (0x0002687f) volume_small_pane_srt_g6

0x7b55,	// (0x00026890) volume_small_pane_srt_g7_ParamLimits

0x7b55,	// (0x00026890) volume_small_pane_srt_g7

0x7b66,	// (0x000268a1) volume_small_pane_srt_g8_ParamLimits

0x7b66,	// (0x000268a1) volume_small_pane_srt_g8

0x7b77,	// (0x000268b2) volume_small_pane_srt_g9_ParamLimits

0x7b77,	// (0x000268b2) volume_small_pane_srt_g9

0x7b88,	// (0x000268c3) volume_small_pane_srt_g10_ParamLimits

0x7b88,	// (0x000268c3) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0002e48e) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0002e48e) volume_small_pane_srt_g

0x6b28,	// (0x00025863) query_popup_data_pane_cp2

0xb4af,	// (0x0002a1ea) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4af,	// (0x0002a1ea) navi_navi_icon_text_pane_srt_t1

0xa5be,	// (0x000292f9) navi_tabs_2_long_pane_srt

0xa5be,	// (0x000292f9) navi_tabs_2_pane_srt

0xa5be,	// (0x000292f9) navi_tabs_3_long_pane_srt

0xa5be,	// (0x000292f9) navi_tabs_3_pane_srt

0xa5be,	// (0x000292f9) navi_tabs_4_pane_srt

0x8b5d,	// (0x00027898) tabs_2_active_pane_srt_ParamLimits

0x8b5d,	// (0x00027898) tabs_2_active_pane_srt

0x8b6d,	// (0x000278a8) tabs_2_passive_pane_srt_ParamLimits

0x8b6d,	// (0x000278a8) tabs_2_passive_pane_srt

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp1_srt

0xb47b,	// (0x0002a1b6) bg_passive_tab_pane_g1_cp1_srt

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp1_srt

0xb484,	// (0x0002a1bf) bg_passive_tab_pane_g3_cp1_srt

0x175c,	// (0x00020497) bg_active_tab_pane_cp1_srt_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp1_srt

0xb48d,	// (0x0002a1c8) tabs_2_active_pane_srt_g1

0xb495,	// (0x0002a1d0) tabs_2_active_pane_srt_t1_ParamLimits

0xb495,	// (0x0002a1d0) tabs_2_active_pane_srt_t1

0xb47b,	// (0x0002a1b6) bg_active_tab_pane_g1_cp1_srt

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp1_srt

0xb484,	// (0x0002a1bf) bg_active_tab_pane_g3_cp1_srt

0x8b2a,	// (0x00027865) tabs_3_active_pane_srt_ParamLimits

0x8b2a,	// (0x00027865) tabs_3_active_pane_srt

0x8b3b,	// (0x00027876) tabs_3_passive_pane_cp_srt_ParamLimits

0x8b3b,	// (0x00027876) tabs_3_passive_pane_cp_srt

0x8b4c,	// (0x00027887) tabs_3_passive_pane_srt_ParamLimits

0x8b4c,	// (0x00027887) tabs_3_passive_pane_srt

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7eaa,	// (0x00026be5) bg_passive_tab_pane_cp2_srt

0x7b99,	// (0x000268d4) bg_passive_tab_pane_g1_cp2_srt

0x7450,	// (0x0002618b) bg_passive_tab_pane_g2_cp2_srt

0x7ba2,	// (0x000268dd) bg_passive_tab_pane_g3_cp2_srt

0x175c,	// (0x00020497) bg_active_tab_pane_cp2_srt_ParamLimits

0x175c,	// (0x00020497) bg_active_tab_pane_cp2_srt

0xb461,	// (0x0002a19c) tabs_3_active_pane_srt_g1

0xb469,	// (0x0002a1a4) tabs_3_active_pane_srt_t1_ParamLimits

0xb469,	// (0x0002a1a4) tabs_3_active_pane_srt_t1

0x7b99,	// (0x000268d4) bg_active_tab_pane_g1_cp2_srt

0x7450,	// (0x0002618b) bg_active_tab_pane_g2_cp2_srt

0x7ba2,	// (0x000268dd) bg_active_tab_pane_g3_cp2_srt

0x8ae2,	// (0x0002781d) tabs_4_active_pane_srt_ParamLimits

0x8ae2,	// (0x0002781d) tabs_4_active_pane_srt

0x8af4,	// (0x0002782f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8af4,	// (0x0002782f) tabs_4_passive_pane_cp2_srt

0x7e47,	// (0x00026b82) aid_size_cell_toolbar

0x6ebd,	// (0x00025bf8) main_idle_act_pane_ParamLimits

0x8047,	// (0x00026d82) popup_large_graphic_colour_window_ParamLimits

0x83b2,	// (0x000270ed) popup_toolbar_window_ParamLimits

0x83b2,	// (0x000270ed) popup_toolbar_window

0x5c31,	// (0x0002496c) list_single_graphic_2heading_pane_ParamLimits

0x5c31,	// (0x0002496c) list_single_graphic_2heading_pane

0x388a,	// (0x000225c5) aid_size_cell_apps_grid_lsc_pane

0x389c,	// (0x000225d7) aid_size_cell_apps_grid_prt_pane

0x7eaa,	// (0x00026be5) bg_wml_button_pane_cp1_ParamLimits

0x7eaa,	// (0x00026be5) bg_wml_button_pane_cp1

0x9fb7,	// (0x00028cf2) form_midp_field_text_pane_t1_ParamLimits

0x9d81,	// (0x00028abc) input_focus_pane_cp050_ParamLimits

0x9ff1,	// (0x00028d2c) list_midp_form_text_pane_ParamLimits

0x9f94,	// (0x00028ccf) input_focus_pane_cp051_ParamLimits

0x9fa8,	// (0x00028ce3) list_midp_choice_pane_ParamLimits

0x9e37,	// (0x00028b72) list_single_2graphic_pane_cp3_ParamLimits

0x9e37,	// (0x00028b72) list_single_2graphic_pane_cp3

0x9e5c,	// (0x00028b97) list_single_midp_graphic_pane_ParamLimits

0x9e5c,	// (0x00028b97) list_single_midp_graphic_pane

0x5a7b,	// (0x000247b6) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a7b,	// (0x000247b6) list_single_graphic_2heading_pane_g1

0x532c,	// (0x00024067) list_single_graphic_2heading_pane_g4_ParamLimits

0x532c,	// (0x00024067) list_single_graphic_2heading_pane_g4

0x5338,	// (0x00024073) list_single_graphic_2heading_pane_g5_ParamLimits

0x5338,	// (0x00024073) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0002e4e1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0002e4e1) list_single_graphic_2heading_pane_g

0x5a87,	// (0x000247c2) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a87,	// (0x000247c2) list_single_graphic_2heading_pane_t1

0x5a9b,	// (0x000247d6) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a9b,	// (0x000247d6) list_single_graphic_2heading_pane_t2

0x5ab5,	// (0x000247f0) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ab5,	// (0x000247f0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0002e4e8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0002e4e8) list_single_graphic_2heading_pane_t

0x9c4b,	// (0x00028986) bg_popup_sub_pane_cp2

0x9c75,	// (0x000289b0) grid_toobar_pane

0x8780,	// (0x000274bb) cell_toolbar_pane_ParamLimits

0x8780,	// (0x000274bb) cell_toolbar_pane

0x9cb1,	// (0x000289ec) cell_toolbar_pane_g1_ParamLimits

0x9cb1,	// (0x000289ec) cell_toolbar_pane_g1

0x9cc5,	// (0x00028a00) cell_toolbar_pane_g2_ParamLimits

0x9cc5,	// (0x00028a00) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0002e4f6) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0002e4f6) cell_toolbar_pane_g

0x9ce7,	// (0x00028a22) grid_highlight_pane_cp2_ParamLimits

0x9ce7,	// (0x00028a22) grid_highlight_pane_cp2

0x9d01,	// (0x00028a3c) toolbar_button_pane

0x9d0d,	// (0x00028a48) toolbar_button_pane_g1

0x9d15,	// (0x00028a50) toolbar_button_pane_g2

0x9d1d,	// (0x00028a58) toolbar_button_pane_g3

0x9d25,	// (0x00028a60) toolbar_button_pane_g4

0x9d2d,	// (0x00028a68) toolbar_button_pane_g5

0x9d35,	// (0x00028a70) toolbar_button_pane_g6

0x9d3d,	// (0x00028a78) toolbar_button_pane_g7

0x9d45,	// (0x00028a80) toolbar_button_pane_g8

0x9d4d,	// (0x00028a88) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0002e4fb) toolbar_button_pane_g

0x87b8,	// (0x000274f3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x87b8,	// (0x000274f3) list_single_2graphic_pane_g1_cp3

0x87c4,	// (0x000274ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0x87c4,	// (0x000274ff) list_single_2graphic_pane_g2_cp3

0x7770,	// (0x000264ab) list_single_2graphic_pane_g3_cp3

0x87d5,	// (0x00027510) list_single_2graphic_pane_g4_cp3_ParamLimits

0x87d5,	// (0x00027510) list_single_2graphic_pane_g4_cp3

0x87e1,	// (0x0002751c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x87e1,	// (0x0002751c) list_single_2graphic_pane_t1_cp3

0x1e38,	// (0x00020b73) list_single_midp_graphic_pane_g2_ParamLimits

0x1e38,	// (0x00020b73) list_single_midp_graphic_pane_g2

0x7e4f,	// (0x00026b8a) aid_zoom_text_primary

0x5a4f,	// (0x0002478a) aid_zoom_text_secondary

0x7c53,	// (0x0002698e) status_small_pane_g7_ParamLimits

0x7c53,	// (0x0002698e) status_small_pane_g7

0x7c76,	// (0x000269b1) status_small_pane_t1_ParamLimits

0x685a,	// (0x00025595) title_pane_g2

0x0003,

0xf54e,	// (0x0002e289) title_pane_g

0x6b82,	// (0x000258bd) aid_size_cell_colour_1_pane_ParamLimits

0x6b82,	// (0x000258bd) aid_size_cell_colour_1_pane

0x6b96,	// (0x000258d1) aid_size_cell_colour_2_pane_ParamLimits

0x6b96,	// (0x000258d1) aid_size_cell_colour_2_pane

0x6baa,	// (0x000258e5) aid_size_cell_colour_3_pane_ParamLimits

0x6baa,	// (0x000258e5) aid_size_cell_colour_3_pane

0x6bbe,	// (0x000258f9) aid_size_cell_colour_4_pane_ParamLimits

0x6bbe,	// (0x000258f9) aid_size_cell_colour_4_pane

0x6f30,	// (0x00025c6b) title_pane_stacon_g1_ParamLimits

0x6f30,	// (0x00025c6b) title_pane_stacon_g1

0xa3ad,	// (0x000290e8) popup_note_wait_window_g3_ParamLimits

0xa3ad,	// (0x000290e8) popup_note_wait_window_g3

0xa423,	// (0x0002915e) popup_note_wait_window_t5_ParamLimits

0xa423,	// (0x0002915e) popup_note_wait_window_t5

0x1700,	// (0x0002043b) main_feb_china_hwr_fs_writing_pane

0x7f2e,	// (0x00026c69) popup_feb_china_hwr_fs_window_ParamLimits

0x7f2e,	// (0x00026c69) popup_feb_china_hwr_fs_window

0x8813,	// (0x0002754e) aid_size_cell_hwr_fs_ParamLimits

0x8813,	// (0x0002754e) aid_size_cell_hwr_fs

0x9d81,	// (0x00028abc) bg_popup_sub_pane_cp3_ParamLimits

0x9d81,	// (0x00028abc) bg_popup_sub_pane_cp3

0x8828,	// (0x00027563) grid_hwr_fs_pane_ParamLimits

0x8828,	// (0x00027563) grid_hwr_fs_pane

0x8840,	// (0x0002757b) linegrid_hwr_fs_pane_ParamLimits

0x8840,	// (0x0002757b) linegrid_hwr_fs_pane

0x8850,	// (0x0002758b) cell_hwr_fs_pane_ParamLimits

0x8850,	// (0x0002758b) cell_hwr_fs_pane

0x9d8d,	// (0x00028ac8) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d8d,	// (0x00028ac8) linegrid_hwr_fs_pane_g1

0x9d99,	// (0x00028ad4) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d99,	// (0x00028ad4) linegrid_hwr_fs_pane_g2

0x9dab,	// (0x00028ae6) linegrid_hwr_fs_pane_g3_ParamLimits

0x9dab,	// (0x00028ae6) linegrid_hwr_fs_pane_g3

0x8872,	// (0x000275ad) linegrid_hwr_fs_pane_g4_ParamLimits

0x8872,	// (0x000275ad) linegrid_hwr_fs_pane_g4

0x888c,	// (0x000275c7) linegrid_hwr_fs_pane_g5_ParamLimits

0x888c,	// (0x000275c7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0002e521) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0002e521) linegrid_hwr_fs_pane_g

0x9db7,	// (0x00028af2) cell_hwr_fs_pane_g1_ParamLimits

0x9db7,	// (0x00028af2) cell_hwr_fs_pane_g1

0x9b85,	// (0x000288c0) cell_hwr_fs_pane_g2_ParamLimits

0x9b85,	// (0x000288c0) cell_hwr_fs_pane_g2

0x9dcd,	// (0x00028b08) cell_hwr_fs_pane_g3_ParamLimits

0x9dcd,	// (0x00028b08) cell_hwr_fs_pane_g3

0x9dda,	// (0x00028b15) cell_hwr_fs_pane_g4_ParamLimits

0x9dda,	// (0x00028b15) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0002e52c) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0002e52c) cell_hwr_fs_pane_g

0x88a2,	// (0x000275dd) cell_hwr_fs_pane_t1

0x1700,	// (0x0002043b) grid_highlight_pane_cp6

0x1700,	// (0x0002043b) main_idle_act2_pane

0x1cfa,	// (0x00020a35) aid_inside_area_popup_secondary

0xaa42,	// (0x0002977d) aid_inside_area_window_primary_ParamLimits

0xaa42,	// (0x0002977d) aid_inside_area_window_primary

0xb5c8,	// (0x0002a303) ai2_news_ticker_pane

0xb5d0,	// (0x0002a30b) aid_size_cell_ai1_link_ParamLimits

0xb5d0,	// (0x0002a30b) aid_size_cell_ai1_link

0xb5ea,	// (0x0002a325) popup_ai2_data_window_ParamLimits

0xb5ea,	// (0x0002a325) popup_ai2_data_window

0xb600,	// (0x0002a33b) popup_ai2_link_window_ParamLimits

0xb600,	// (0x0002a33b) popup_ai2_link_window

0x9d81,	// (0x00028abc) bg_popup_sub_pane_cp4_ParamLimits

0x9d81,	// (0x00028abc) bg_popup_sub_pane_cp4

0xb614,	// (0x0002a34f) grid_ai2_link_pane_ParamLimits

0xb614,	// (0x0002a34f) grid_ai2_link_pane

0xb62b,	// (0x0002a366) popup_ai2_link_window_g1_ParamLimits

0xb62b,	// (0x0002a366) popup_ai2_link_window_g1

0xb637,	// (0x0002a372) popup_ai2_link_window_g2_ParamLimits

0xb637,	// (0x0002a372) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0002e6ff) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0002e6ff) popup_ai2_link_window_g

0xb646,	// (0x0002a381) ai2_mp_button_pane

0xb64e,	// (0x0002a389) ai2_mp_volume_pane

0x9f94,	// (0x00028ccf) bg_popup_sub_pane_cp5_ParamLimits

0x9f94,	// (0x00028ccf) bg_popup_sub_pane_cp5

0xb656,	// (0x0002a391) heading_ai2_gene_pane_ParamLimits

0xb656,	// (0x0002a391) heading_ai2_gene_pane

0xb662,	// (0x0002a39d) list_ai2_gene_pane_ParamLimits

0xb662,	// (0x0002a39d) list_ai2_gene_pane

0xb6aa,	// (0x0002a3e5) cell_ai2_link_pane_ParamLimits

0xb6aa,	// (0x0002a3e5) cell_ai2_link_pane

0xb6c0,	// (0x0002a3fb) cell_ai2_link_pane_g1

0x1700,	// (0x0002043b) grid_highlight_pane_cp7

0x8b9a,	// (0x000278d5) ai2_mp_volume_pane_g1

0xb790,	// (0x0002a4cb) ai2_mp_volume_pane_g2

0xb705,	// (0x0002a440) list_ai2_gene_pane_t1

0xb798,	// (0x0002a4d3) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0002e718) ai2_mp_volume_pane_g

0x8ba2,	// (0x000278dd) volume_small_pane_cp3

0xb7a0,	// (0x0002a4db) aid_size_cell_ai2_button

0xb7a8,	// (0x0002a4e3) grid_ai2_button_pane

0xb7b1,	// (0x0002a4ec) cell_ai2_button_pane_ParamLimits

0xb7b1,	// (0x0002a4ec) cell_ai2_button_pane

0x16f6,	// (0x00020431) cell_ai2_button_pane_g1

0x1700,	// (0x0002043b) grid_highlight_pane_cp8

0xb750,	// (0x0002a48b) ai2_gene_pane_t1_ParamLimits

0xb750,	// (0x0002a48b) ai2_gene_pane_t1

0x7e3d,	// (0x00026b78) aid_height_parent_landscape

0xb0ab,	// (0x00029de6) aid_height_set_list

0xb0bc,	// (0x00029df7) aid_size_parent

0xb3eb,	// (0x0002a126) aid_size_cell_graphic_pane_ParamLimits

0xb672,	// (0x0002a3ad) popup_ai2_data_window_g1_ParamLimits

0xb672,	// (0x0002a3ad) popup_ai2_data_window_g1

0xb67e,	// (0x0002a3b9) ai2_news_ticker_pane_g1

0xb686,	// (0x0002a3c1) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0002e704) ai2_news_ticker_pane_g

0xb68e,	// (0x0002a3c9) ai2_news_ticker_pane_t1

0xb69c,	// (0x0002a3d7) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0002e709) ai2_news_ticker_pane_t

0xb6c9,	// (0x0002a404) heading_ai2_gene_pane_g1

0xb6d1,	// (0x0002a40c) heading_ai2_gene_pane_t1_ParamLimits

0xb6d1,	// (0x0002a40c) heading_ai2_gene_pane_t1

0xb6e6,	// (0x0002a421) list_highlight_pane_cp6

0xb6ee,	// (0x0002a429) ai2_gene_pane_ParamLimits

0xb6ee,	// (0x0002a429) ai2_gene_pane

0xb713,	// (0x0002a44e) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0002e70e) list_ai2_gene_pane_t

0xb721,	// (0x0002a45c) list_highlight_pane_cp8_ParamLimits

0xb721,	// (0x0002a45c) list_highlight_pane_cp8

0xb732,	// (0x0002a46d) ai2_gene_pane_g1_ParamLimits

0xb732,	// (0x0002a46d) ai2_gene_pane_g1

0xb744,	// (0x0002a47f) ai2_gene_pane_g2_ParamLimits

0xb744,	// (0x0002a47f) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0002e713) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0002e713) ai2_gene_pane_g

0x1ac7,	// (0x00020802) scroll_pane_cp12

0x7df2,	// (0x00026b2d) control_pane_t3_ParamLimits

0x7df2,	// (0x00026b2d) control_pane_t3

0x7c67,	// (0x000269a2) status_small_pane_g8_ParamLimits

0x7c67,	// (0x000269a2) status_small_pane_g8

0x8010,	// (0x00026d4b) popup_find_window_ParamLimits

0x8229,	// (0x00026f64) popup_note_image_window_ParamLimits

0x5acd,	// (0x00024808) list_double2_graphic_pane_vc_g1_ParamLimits

0x5acd,	// (0x00024808) list_double2_graphic_pane_vc_g1

0x532c,	// (0x00024067) list_double2_graphic_pane_vc_g2_ParamLimits

0x532c,	// (0x00024067) list_double2_graphic_pane_vc_g2

0x5338,	// (0x00024073) list_double2_graphic_pane_vc_g3_ParamLimits

0x5338,	// (0x00024073) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0002e4ef) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002e4ef) list_double2_graphic_pane_vc_g

0x5ad9,	// (0x00024814) list_double2_graphic_pane_vc_t1_ParamLimits

0x5ad9,	// (0x00024814) list_double2_graphic_pane_vc_t1

0x532c,	// (0x00024067) list_single_heading_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_single_heading_pane_vc_g1

0x5338,	// (0x00024073) list_single_heading_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_heading_pane_vc_g

0x5aef,	// (0x0002482a) list_single_heading_pane_vc_t1_ParamLimits

0x5aef,	// (0x0002482a) list_single_heading_pane_vc_t1

0x5b05,	// (0x00024840) list_single_heading_pane_vc_t2_ParamLimits

0x5b05,	// (0x00024840) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0002e510) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0002e510) list_single_heading_pane_vc_t

0x5b17,	// (0x00024852) list_setting_number_pane_vc_g1_ParamLimits

0x5b17,	// (0x00024852) list_setting_number_pane_vc_g1

0x5b23,	// (0x0002485e) list_setting_number_pane_vc_g2_ParamLimits

0x5b23,	// (0x0002485e) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e515) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e515) list_setting_number_pane_vc_g

0x5b2f,	// (0x0002486a) list_setting_number_pane_vc_t1_ParamLimits

0x5b2f,	// (0x0002486a) list_setting_number_pane_vc_t1

0x5b43,	// (0x0002487e) list_setting_number_pane_vc_t2_ParamLimits

0x5b43,	// (0x0002487e) list_setting_number_pane_vc_t2

0x5b5f,	// (0x0002489a) list_setting_number_pane_vc_t3_ParamLimits

0x5b5f,	// (0x0002489a) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0002e51a) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0002e51a) list_setting_number_pane_vc_t

0x5b8b,	// (0x000248c6) set_value_pane_vc_ParamLimits

0x5b8b,	// (0x000248c6) set_value_pane_vc

0x5c31,	// (0x0002496c) list_double2_graphic_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double2_graphic_pane_vc

0xb28c,	// (0x00029fc7) list_double2_large_graphic_pane_vc_ParamLimits

0xb28c,	// (0x00029fc7) list_double2_large_graphic_pane_vc

0x5c31,	// (0x0002496c) list_double2_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double2_pane_vc

0x5c31,	// (0x0002496c) list_double_graphic_heading_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_graphic_heading_pane_vc

0x5c31,	// (0x0002496c) list_double_graphic_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_graphic_pane_vc

0x5c31,	// (0x0002496c) list_double_heading_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_heading_pane_vc

0xb29e,	// (0x00029fd9) list_double_large_graphic_pane_vc_ParamLimits

0xb29e,	// (0x00029fd9) list_double_large_graphic_pane_vc

0x5c31,	// (0x0002496c) list_double_number_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_number_pane_vc

0x5c31,	// (0x0002496c) list_double_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_pane_vc

0x5c31,	// (0x0002496c) list_double_time_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_double_time_pane_vc

0x5c31,	// (0x0002496c) list_setting_number_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_setting_number_pane_vc

0x5c31,	// (0x0002496c) list_setting_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_setting_pane_vc

0x5c31,	// (0x0002496c) list_single_graphic_heading_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_single_graphic_heading_pane_vc

0x5c31,	// (0x0002496c) list_single_heading_pane_vc_ParamLimits

0x5c31,	// (0x0002496c) list_single_heading_pane_vc

0x5c63,	// (0x0002499e) list_single_number_heading_pane_vc_ParamLimits

0x5c63,	// (0x0002499e) list_single_number_heading_pane_vc

0x5d0a,	// (0x00024a45) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d0a,	// (0x00024a45) list_double_graphic_heading_pane_vc_g1

0x532c,	// (0x00024067) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x532c,	// (0x00024067) list_double_graphic_heading_pane_vc_g2

0x5338,	// (0x00024073) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5338,	// (0x00024073) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0002e71f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0002e71f) list_double_graphic_heading_pane_vc_g

0x5d16,	// (0x00024a51) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d16,	// (0x00024a51) list_double_graphic_heading_pane_vc_t1

0x5d2a,	// (0x00024a65) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d2a,	// (0x00024a65) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0002e726) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0002e726) list_double_graphic_heading_pane_vc_t

0x5b17,	// (0x00024852) list_setting_pane_vc_g1_ParamLimits

0x5b17,	// (0x00024852) list_setting_pane_vc_g1

0x5b23,	// (0x0002485e) list_setting_pane_vc_g2_ParamLimits

0x5b23,	// (0x0002485e) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e515) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e515) list_setting_pane_vc_g

0x5d42,	// (0x00024a7d) list_setting_pane_vc_t1_ParamLimits

0x5d42,	// (0x00024a7d) list_setting_pane_vc_t1

0x5d5e,	// (0x00024a99) list_setting_pane_vc_t2_ParamLimits

0x5d5e,	// (0x00024a99) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002e769) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e769) list_setting_pane_vc_t

0x5b8b,	// (0x000248c6) set_value_pane_cp_vc_ParamLimits

0x5b8b,	// (0x000248c6) set_value_pane_cp_vc

0x532c,	// (0x00024067) list_single_number_heading_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_single_number_heading_pane_vc_g1

0x5338,	// (0x00024073) list_single_number_heading_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_single_number_heading_pane_vc_g

0x5d78,	// (0x00024ab3) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d78,	// (0x00024ab3) list_single_number_heading_pane_vc_t1

0x5d8e,	// (0x00024ac9) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d8e,	// (0x00024ac9) list_single_number_heading_pane_vc_t2

0x5da0,	// (0x00024adb) list_single_number_heading_pane_vc_t3_ParamLimits

0x5da0,	// (0x00024adb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002e76e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e76e) list_single_number_heading_pane_vc_t

0x5db2,	// (0x00024aed) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5db2,	// (0x00024aed) list_single_graphic_heading_pane_vc_g1

0x532c,	// (0x00024067) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x532c,	// (0x00024067) list_single_graphic_heading_pane_vc_g4

0x5338,	// (0x00024073) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5338,	// (0x00024073) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0002e775) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002e775) list_single_graphic_heading_pane_vc_g

0x5dbe,	// (0x00024af9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5dbe,	// (0x00024af9) list_single_graphic_heading_pane_vc_t1

0x5dd4,	// (0x00024b0f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5dd4,	// (0x00024b0f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0002e77c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0002e77c) list_single_graphic_heading_pane_vc_t

0x532c,	// (0x00024067) list_double2_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_double2_pane_vc_g1

0x5338,	// (0x00024073) list_double2_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_double2_pane_vc_g

0x5de6,	// (0x00024b21) list_double2_pane_vc_t1_ParamLimits

0x5de6,	// (0x00024b21) list_double2_pane_vc_t1

0x5dfe,	// (0x00024b39) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5dfe,	// (0x00024b39) list_double2_large_graphic_pane_vc_g1

0x5e0a,	// (0x00024b45) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5e0a,	// (0x00024b45) list_double2_large_graphic_pane_vc_g2

0x5e16,	// (0x00024b51) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5e16,	// (0x00024b51) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0002e781) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002e781) list_double2_large_graphic_pane_vc_g

0x5e22,	// (0x00024b5d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e22,	// (0x00024b5d) list_double2_large_graphic_pane_vc_t1

0x5e38,	// (0x00024b73) list_double_time_pane_vc_g1_ParamLimits

0x5e38,	// (0x00024b73) list_double_time_pane_vc_g1

0x5e44,	// (0x00024b7f) list_double_time_pane_vc_g2_ParamLimits

0x5e44,	// (0x00024b7f) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0002e788) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0002e788) list_double_time_pane_vc_g

0x5e50,	// (0x00024b8b) list_double_time_pane_vc_t1_ParamLimits

0x5e50,	// (0x00024b8b) list_double_time_pane_vc_t1

0x5e74,	// (0x00024baf) list_double_time_pane_vc_t2_ParamLimits

0x5e74,	// (0x00024baf) list_double_time_pane_vc_t2

0x5ec3,	// (0x00024bfe) list_double_time_pane_vc_t3_ParamLimits

0x5ec3,	// (0x00024bfe) list_double_time_pane_vc_t3

0x5ed5,	// (0x00024c10) list_double_time_pane_vc_t4_ParamLimits

0x5ed5,	// (0x00024c10) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0002e78d) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0002e78d) list_double_time_pane_vc_t

0x532c,	// (0x00024067) list_double_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_double_pane_vc_g1

0x5338,	// (0x00024073) list_double_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_double_pane_vc_g

0x5ee9,	// (0x00024c24) list_double_pane_vc_t1_ParamLimits

0x5ee9,	// (0x00024c24) list_double_pane_vc_t1

0x5efd,	// (0x00024c38) list_double_pane_vc_t2_ParamLimits

0x5efd,	// (0x00024c38) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002e796) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e796) list_double_pane_vc_t

0x532c,	// (0x00024067) list_double_number_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_double_number_pane_vc_g1

0x5338,	// (0x00024073) list_double_number_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_double_number_pane_vc_g

0x5f15,	// (0x00024c50) list_double_number_pane_vc_t1_ParamLimits

0x5f15,	// (0x00024c50) list_double_number_pane_vc_t1

0x5ee9,	// (0x00024c24) list_double_number_pane_vc_t2_ParamLimits

0x5ee9,	// (0x00024c24) list_double_number_pane_vc_t2

0x5f27,	// (0x00024c62) list_double_number_pane_vc_t3_ParamLimits

0x5f27,	// (0x00024c62) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0002e79b) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0002e79b) list_double_number_pane_vc_t

0x5f3f,	// (0x00024c7a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5f3f,	// (0x00024c7a) list_double_large_graphic_pane_vc_g1

0x5f61,	// (0x00024c9c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5f61,	// (0x00024c9c) list_double_large_graphic_pane_vc_g2

0x5f75,	// (0x00024cb0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5f75,	// (0x00024cb0) list_double_large_graphic_pane_vc_g3

0x5f84,	// (0x00024cbf) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f84,	// (0x00024cbf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0002e7a2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0002e7a2) list_double_large_graphic_pane_vc_g

0x5f90,	// (0x00024ccb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f90,	// (0x00024ccb) list_double_large_graphic_pane_vc_t1

0x5fac,	// (0x00024ce7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5fac,	// (0x00024ce7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0002e7ab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0002e7ab) list_double_large_graphic_pane_vc_t

0x532c,	// (0x00024067) list_double_heading_pane_vc_g1_ParamLimits

0x532c,	// (0x00024067) list_double_heading_pane_vc_g1

0x5338,	// (0x00024073) list_double_heading_pane_vc_g2_ParamLimits

0x5338,	// (0x00024073) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e303) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e303) list_double_heading_pane_vc_g

0x5fce,	// (0x00024d09) list_double_heading_pane_vc_t1_ParamLimits

0x5fce,	// (0x00024d09) list_double_heading_pane_vc_t1

0x5fe2,	// (0x00024d1d) list_double_heading_pane_vc_t2_ParamLimits

0x5fe2,	// (0x00024d1d) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0002e7b0) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0002e7b0) list_double_heading_pane_vc_t

0x5ffa,	// (0x00024d35) list_double_graphic_pane_vc_g1_ParamLimits

0x5ffa,	// (0x00024d35) list_double_graphic_pane_vc_g1

0x6012,	// (0x00024d4d) list_double_graphic_pane_vc_g2_ParamLimits

0x6012,	// (0x00024d4d) list_double_graphic_pane_vc_g2

0x532c,	// (0x00024067) list_double_graphic_pane_vc_g3_ParamLimits

0x532c,	// (0x00024067) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0002e7b5) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0002e7b5) list_double_graphic_pane_vc_g

0x602f,	// (0x00024d6a) list_double_graphic_pane_vc_t1_ParamLimits

0x602f,	// (0x00024d6a) list_double_graphic_pane_vc_t1

0x604e,	// (0x00024d89) list_double_graphic_pane_vc_t2_ParamLimits

0x604e,	// (0x00024d89) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0002e7be) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0002e7be) list_double_graphic_pane_vc_t

0x6484,	// (0x000251bf) aid_size_cell_fastswap

0x648c,	// (0x000251c7) aid_size_cell_touch_ParamLimits

0x648c,	// (0x000251c7) aid_size_cell_touch

0x66e7,	// (0x00025422) popup_fast_swap_wide_window_ParamLimits

0x66e7,	// (0x00025422) popup_fast_swap_wide_window

0x67ed,	// (0x00025528) touch_pane_ParamLimits

0x67ed,	// (0x00025528) touch_pane

0x1b4f,	// (0x0002088a) button_value_adjust_pane_cp2

0x576e,	// (0x000244a9) button_value_adjust_pane_cp4

0x578e,	// (0x000244c9) form_field_data_pane_cp2

0x57ad,	// (0x000244e8) form_field_data_wide_pane_cp2

0x38cb,	// (0x00022606) bg_scroll_pane_ParamLimits

0x712c,	// (0x00025e67) scroll_handle_pane_ParamLimits

0x7140,	// (0x00025e7b) scroll_sc2_down_pane_ParamLimits

0x7140,	// (0x00025e7b) scroll_sc2_down_pane

0x3911,	// (0x0002264c) scroll_sc2_up_pane_ParamLimits

0x3911,	// (0x0002264c) scroll_sc2_up_pane

0xbe66,	// (0x0002aba1) grid_wheel_folder_pane_g1_ParamLimits

0xbe66,	// (0x0002aba1) grid_wheel_folder_pane_g1

0x7597,	// (0x000262d2) clock_nsta_pane_cp2_ParamLimits

0x7597,	// (0x000262d2) clock_nsta_pane_cp2

0x7948,	// (0x00026683) listscroll_midp_pane_ParamLimits

0x7954,	// (0x0002668f) midp_canvas_pane

0x7e35,	// (0x00026b70) nsta_clock_indic_pane

0x7e88,	// (0x00026bc3) listscroll_form_pane_vc

0x7e98,	// (0x00026bd3) listscroll_set_pane_vc_ParamLimits

0x7e98,	// (0x00026bd3) listscroll_set_pane_vc

0x8538,	// (0x00027273) clock_nsta_pane

0x85b3,	// (0x000272ee) indicator_nsta_pane

0x9c4b,	// (0x00028986) bg_popup_sub_pane_cp2_ParamLimits

0x9c5f,	// (0x0002899a) find_pane_cp2_ParamLimits

0x9c5f,	// (0x0002899a) find_pane_cp2

0x9c75,	// (0x000289b0) grid_toobar_pane_ParamLimits

0x9d55,	// (0x00028a90) list_form_gen_pane_vc_ParamLimits

0x9d55,	// (0x00028a90) list_form_gen_pane_vc

0x9d6b,	// (0x00028aa6) scroll_pane_cp8_vc_ParamLimits

0x9d6b,	// (0x00028aa6) scroll_pane_cp8_vc

0x9de7,	// (0x00028b22) data_form_wide_pane_vc_ParamLimits

0x9de7,	// (0x00028b22) data_form_wide_pane_vc

0x9df3,	// (0x00028b2e) form_field_data_wide_pane_vc_g1

0x9dfb,	// (0x00028b36) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dfb,	// (0x00028b36) form_field_data_wide_pane_vc_t1

0x1b86,	// (0x000208c1) input_focus_pane_cp6_vc_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_cp6_vc

0xa128,	// (0x00028e63) list_midp_pane_ParamLimits

0xa134,	// (0x00028e6f) scroll_pane_cp16_ParamLimits

0xa134,	// (0x00028e6f) scroll_pane_cp16

0xa18a,	// (0x00028ec5) button_value_adjust_pane_ParamLimits

0xa18a,	// (0x00028ec5) button_value_adjust_pane

0xb0ce,	// (0x00029e09) button_value_adjust_pane_cp6_ParamLimits

0xb0ce,	// (0x00029e09) button_value_adjust_pane_cp6

0xb1f4,	// (0x00029f2f) settings_code_pane_cp_ParamLimits

0xb1f4,	// (0x00029f2f) settings_code_pane_cp

0x16f6,	// (0x00020431) cell_touch_pane_g1

0x16f6,	// (0x00020431) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0002e434) cell_touch_pane_g

0xb7c3,	// (0x0002a4fe) cell_touch_pane_cp_ParamLimits

0xb7c3,	// (0x0002a4fe) cell_touch_pane_cp

0xb7d3,	// (0x0002a50e) cell_touch_pane_ParamLimits

0xb7d3,	// (0x0002a50e) cell_touch_pane

0x16f6,	// (0x00020431) scroll_sc2_down_pane_g1

0x16f6,	// (0x00020431) scroll_sc2_up_pane_g1

0x1700,	// (0x0002043b) bg_set_opt_pane_cp4_vc

0xb7e5,	// (0x0002a520) list_set_graphic_pane_vc_g1_ParamLimits

0xb7e5,	// (0x0002a520) list_set_graphic_pane_vc_g1

0xb7f1,	// (0x0002a52c) list_set_graphic_pane_vc_g2_ParamLimits

0xb7f1,	// (0x0002a52c) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0002e72b) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0002e72b) list_set_graphic_pane_vc_g

0xb7fd,	// (0x0002a538) text_primary_small_cp13_vc_ParamLimits

0xb7fd,	// (0x0002a538) text_primary_small_cp13_vc

0xb815,	// (0x0002a550) list_set_graphic_pane_vc_ParamLimits

0xb815,	// (0x0002a550) list_set_graphic_pane_vc

0x1700,	// (0x0002043b) input_focus_pane_cp2_vc

0x16f6,	// (0x00020431) setting_code_pane_vc_g1

0x1773,	// (0x000204ae) setting_code_pane_vc_t1

0xb828,	// (0x0002a563) set_text_pane_vc_t1_ParamLimits

0xb828,	// (0x0002a563) set_text_pane_vc_t1

0x1700,	// (0x0002043b) input_focus_pane_cp1_vc

0xb844,	// (0x0002a57f) list_set_text_pane_vc

0x16f6,	// (0x00020431) setting_text_pane_vc_g1

0x1700,	// (0x0002043b) bg_set_opt_pane_cp2_vc

0x176a,	// (0x000204a5) setting_slider_graphic_pane_vc_g1

0xb84e,	// (0x0002a589) setting_slider_graphic_pane_vc_t1

0xb85e,	// (0x0002a599) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002e730) setting_slider_graphic_pane_vc_t

0xb86e,	// (0x0002a5a9) slider_set_pane_cp_vc

0xb876,	// (0x0002a5b1) slider_set_pane_vc_g1

0xb87f,	// (0x0002a5ba) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0002e735) slider_set_pane_vc_g

0x1c4c,	// (0x00020987) set_opt_bg_pane_g1_copy1

0x1c54,	// (0x0002098f) set_opt_bg_pane_g2_copy1

0xb8ab,	// (0x0002a5e6) set_opt_bg_pane_g3_copy1

0x1c64,	// (0x0002099f) set_opt_bg_pane_g4_copy1

0x1c6c,	// (0x000209a7) set_opt_bg_pane_g5_copy1

0x1c74,	// (0x000209af) set_opt_bg_pane_g6_copy1

0xb8b3,	// (0x0002a5ee) set_opt_bg_pane_g7_copy1

0xb8bb,	// (0x0002a5f6) set_opt_bg_pane_g8_copy1

0xb8c3,	// (0x0002a5fe) set_opt_bg_pane_g9_copy1

0x1700,	// (0x0002043b) bg_set_opt_pane_cp_vc

0xb8cb,	// (0x0002a606) setting_slider_pane_vc_t1

0xb8da,	// (0x0002a615) setting_slider_pane_vc_t2

0xb8ea,	// (0x0002a625) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0002e744) setting_slider_pane_vc_t

0xb8fa,	// (0x0002a635) slider_set_pane_vc

0x88b0,	// (0x000275eb) volume_set_pane_vc_g1

0x8bab,	// (0x000278e6) volume_set_pane_vc_g2

0x8bb4,	// (0x000278ef) volume_set_pane_vc_g3

0x8bbd,	// (0x000278f8) volume_set_pane_vc_g4

0x8bc6,	// (0x00027901) volume_set_pane_vc_g5

0x8bcf,	// (0x0002790a) volume_set_pane_vc_g6

0x8bd8,	// (0x00027913) volume_set_pane_vc_g7

0x8be1,	// (0x0002791c) volume_set_pane_vc_g8

0x8bea,	// (0x00027925) volume_set_pane_vc_g9

0x8bf3,	// (0x0002792e) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0002e74b) volume_set_pane_vc_g

0xb902,	// (0x0002a63d) volume_set_pane_vc

0xb90a,	// (0x0002a645) button_value_adjust_pane_cp1_vc

0xb914,	// (0x0002a64f) list_highlight_pane_cp2_vc

0xb91d,	// (0x0002a658) list_set_pane_vc_ParamLimits

0xb91d,	// (0x0002a658) list_set_pane_vc

0xb97b,	// (0x0002a6b6) main_pane_set_vc_t1_ParamLimits

0xb97b,	// (0x0002a6b6) main_pane_set_vc_t1

0xb990,	// (0x0002a6cb) main_pane_set_vc_t2_ParamLimits

0xb990,	// (0x0002a6cb) main_pane_set_vc_t2

0xb9a2,	// (0x0002a6dd) main_pane_set_vc_t3_ParamLimits

0xb9a2,	// (0x0002a6dd) main_pane_set_vc_t3

0xb9b4,	// (0x0002a6ef) main_pane_set_vc_t4_ParamLimits

0xb9b4,	// (0x0002a6ef) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002e760) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002e760) main_pane_set_vc_t

0xb9c6,	// (0x0002a701) setting_code_pane_vc_ParamLimits

0xb9c6,	// (0x0002a701) setting_code_pane_vc

0xb9d5,	// (0x0002a710) setting_slider_graphic_pane_vc

0xb9d5,	// (0x0002a710) setting_slider_pane_vc

0xb9d5,	// (0x0002a710) setting_text_pane_vc

0xb9d5,	// (0x0002a710) setting_volume_pane_vc

0xb9dd,	// (0x0002a718) scroll_pane_cp121_vc

0x1b3d,	// (0x00020878) set_content_pane_vc

0xb9e5,	// (0x0002a720) button_value_adjust_pane_g1

0xb9ee,	// (0x0002a729) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0002e7c3) button_value_adjust_pane_g

0xb9f7,	// (0x0002a732) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9f7,	// (0x0002a732) form_field_slider_wide_pane_vc_t1

0xba0b,	// (0x0002a746) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba0b,	// (0x0002a746) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002e7c8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002e7c8) form_field_slider_wide_pane_vc_t

0x174e,	// (0x00020489) input_focus_pane_cp10_vc_ParamLimits

0x174e,	// (0x00020489) input_focus_pane_cp10_vc

0xba39,	// (0x0002a774) slider_cont_pane_cp1_vc_ParamLimits

0xba39,	// (0x0002a774) slider_cont_pane_cp1_vc

0xba4b,	// (0x0002a786) slider_form_pane_g1_cp2

0xb87f,	// (0x0002a5ba) slider_form_pane_g2_cp2

0xba78,	// (0x0002a7b3) form_field_slider_pane_vc_t3

0xba86,	// (0x0002a7c1) form_field_slider_pane_vc_t4

0xba94,	// (0x0002a7cf) slider_form_pane_vc_ParamLimits

0xba94,	// (0x0002a7cf) slider_form_pane_vc

0xbaa1,	// (0x0002a7dc) form_field_slider_pane_vc_t1_ParamLimits

0xbaa1,	// (0x0002a7dc) form_field_slider_pane_vc_t1

0xba0b,	// (0x0002a746) form_field_slider_pane_vc_t2_ParamLimits

0xba0b,	// (0x0002a746) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002e7da) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002e7da) form_field_slider_pane_vc_t

0x174e,	// (0x00020489) input_focus_pane_cp9_vc_ParamLimits

0x174e,	// (0x00020489) input_focus_pane_cp9_vc

0xbabd,	// (0x0002a7f8) slider_cont_pane_vc_ParamLimits

0xbabd,	// (0x0002a7f8) slider_cont_pane_vc

0xbad1,	// (0x0002a80c) list_form_graphic_pane_cp_vc_ParamLimits

0xbad1,	// (0x0002a80c) list_form_graphic_pane_cp_vc

0x9df3,	// (0x00028b2e) form_field_popup_wide_pane_vc_g1

0xbae6,	// (0x0002a821) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbae6,	// (0x0002a821) form_field_popup_wide_pane_vc_t1

0x1b86,	// (0x000208c1) input_focus_pane_cp8_vc_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_cp8_vc

0xbb2b,	// (0x0002a866) list_form_wide_pane_vc_ParamLimits

0xbb2b,	// (0x0002a866) list_form_wide_pane_vc

0xbb37,	// (0x0002a872) list_form_graphic_pane_vc_g1

0xbb3f,	// (0x0002a87a) list_form_graphic_pane_vc_t1_ParamLimits

0xbb3f,	// (0x0002a87a) list_form_graphic_pane_vc_t1

0x175c,	// (0x00020497) list_highlight_pane_cp5_vc_ParamLimits

0x175c,	// (0x00020497) list_highlight_pane_cp5_vc

0xbb5b,	// (0x0002a896) list_form_graphic_pane_vc_ParamLimits

0xbb5b,	// (0x0002a896) list_form_graphic_pane_vc

0x9df3,	// (0x00028b2e) form_field_popup_pane_vc_g1

0xbb71,	// (0x0002a8ac) form_field_popup_pane_vc_t1_ParamLimits

0xbb71,	// (0x0002a8ac) form_field_popup_pane_vc_t1

0x1b86,	// (0x000208c1) input_focus_pane_cp7_vc_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_cp7_vc

0xbb88,	// (0x0002a8c3) list_form_pane_vc_ParamLimits

0xbb88,	// (0x0002a8c3) list_form_pane_vc

0xbb94,	// (0x0002a8cf) data_form_pane_vc_t1_ParamLimits

0xbb94,	// (0x0002a8cf) data_form_pane_vc_t1

0x1c4c,	// (0x00020987) input_focus_pane_vc_g1

0x1c54,	// (0x0002098f) input_focus_pane_vc_g2

0x1c5c,	// (0x00020997) input_focus_pane_vc_g3

0x1c64,	// (0x0002099f) input_focus_pane_vc_g4

0x1c6c,	// (0x000209a7) input_focus_pane_vc_g5

0x1c74,	// (0x000209af) input_focus_pane_vc_g6

0x1c7c,	// (0x000209b7) input_focus_pane_vc_g7

0x1c84,	// (0x000209bf) input_focus_pane_vc_g8

0x1c8c,	// (0x000209c7) input_focus_pane_vc_g9

0x16f6,	// (0x00020431) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0002e3bd) input_focus_pane_vc_g

0x9de7,	// (0x00028b22) data_form_pane_vc_ParamLimits

0x9de7,	// (0x00028b22) data_form_pane_vc

0x9df3,	// (0x00028b2e) form_field_data_pane_vc_g1

0xbbaf,	// (0x0002a8ea) form_field_data_pane_vc_t1_ParamLimits

0xbbaf,	// (0x0002a8ea) form_field_data_pane_vc_t1

0x1b86,	// (0x000208c1) input_focus_pane_vc_ParamLimits

0x1b86,	// (0x000208c1) input_focus_pane_vc

0xbbc9,	// (0x0002a904) button_value_adjust_pane_cp3_vc

0xbbd1,	// (0x0002a90c) button_value_adjust_pane_cp5_vc

0xbbd9,	// (0x0002a914) form_field_data_pane_vc_ParamLimits

0xbbd9,	// (0x0002a914) form_field_data_pane_vc

0xbbf0,	// (0x0002a92b) form_field_data_pane_vc_cp2

0xbbf8,	// (0x0002a933) form_field_data_wide_pane_vc_ParamLimits

0xbbf8,	// (0x0002a933) form_field_data_wide_pane_vc

0xbc0e,	// (0x0002a949) form_field_data_wide_pane_vc_cp2

0xbc16,	// (0x0002a951) form_field_popup_pane_vc_ParamLimits

0xbc16,	// (0x0002a951) form_field_popup_pane_vc

0xbc2d,	// (0x0002a968) form_field_popup_wide_pane_vc_ParamLimits

0xbc2d,	// (0x0002a968) form_field_popup_wide_pane_vc

0xbc43,	// (0x0002a97e) form_field_slider_pane_vc_ParamLimits

0xbc43,	// (0x0002a97e) form_field_slider_pane_vc

0xbc56,	// (0x0002a991) form_field_slider_wide_pane_vc_ParamLimits

0xbc56,	// (0x0002a991) form_field_slider_wide_pane_vc

0xbc69,	// (0x0002a9a4) grid_touch_1_pane_ParamLimits

0xbc69,	// (0x0002a9a4) grid_touch_1_pane

0xbc75,	// (0x0002a9b0) grid_touch_2_pane_ParamLimits

0xbc75,	// (0x0002a9b0) grid_touch_2_pane

0x7cfa,	// (0x00026a35) touch_pane_g1_ParamLimits

0x7cfa,	// (0x00026a35) touch_pane_g1

0xbc8d,	// (0x0002a9c8) cell_app_pane_cp_wide_ParamLimits

0xbc8d,	// (0x0002a9c8) cell_app_pane_cp_wide

0xbc9e,	// (0x0002a9d9) grid_popup_fast_wide_pane_ParamLimits

0xbc9e,	// (0x0002a9d9) grid_popup_fast_wide_pane

0xbcb2,	// (0x0002a9ed) scroll_pane_cp19_ParamLimits

0xbcb2,	// (0x0002a9ed) scroll_pane_cp19

0x1700,	// (0x0002043b) bg_popup_window_pane_cp20

0xbcc6,	// (0x0002aa01) listscroll_popup_fast_wide_pane

0x175c,	// (0x00020497) grid_indicator_nsta_pane

0xbcce,	// (0x0002aa09) clock_nsta_pane_g1

0xbcd7,	// (0x0002aa12) clock_nsta_pane_t1

0xbcf3,	// (0x0002aa2e) cell_indicator_nsta_pane_ParamLimits

0xbcf3,	// (0x0002aa2e) cell_indicator_nsta_pane

0xbd24,	// (0x0002aa5f) cell_indicator_nsta_pane_g1

0xbd32,	// (0x0002aa6d) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002e7eb) cell_indicator_nsta_pane_g

0xbd3f,	// (0x0002aa7a) clock_nsta_pane_cp

0xbd47,	// (0x0002aa82) indicator_nsta_pane_cp

0xbd4f,	// (0x0002aa8a) nsta_clock_indic_pane_g1

0x17b2,	// (0x000204ed) grid_indicator_pane

0x71de,	// (0x00025f19) scroll_pane_cp29

0x74c4,	// (0x000261ff) indicator_nsta_pane_cp2_ParamLimits

0x74c4,	// (0x000261ff) indicator_nsta_pane_cp2

0x175c,	// (0x00020497) main_apps_wheel_pane

0xa00b,	// (0x00028d46) form_midp_field_text_pane_ParamLimits

0xa154,	// (0x00028e8f) scroll_bar_cp050_ParamLimits

0xbd9f,	// (0x0002aada) cell_indicator_pane_ParamLimits

0xbd9f,	// (0x0002aada) cell_indicator_pane

0xbdb8,	// (0x0002aaf3) cell_indicator_pane_g1

0xbdc2,	// (0x0002aafd) grid_wheel_folder_pane_ParamLimits

0xbdc2,	// (0x0002aafd) grid_wheel_folder_pane

0xbdd8,	// (0x0002ab13) list_wheel_apps_pane_ParamLimits

0xbdd8,	// (0x0002ab13) list_wheel_apps_pane

0xbde9,	// (0x0002ab24) main_apps_wheel_pane_g1_ParamLimits

0xbde9,	// (0x0002ab24) main_apps_wheel_pane_g1

0xbdfd,	// (0x0002ab38) main_apps_wheel_pane_g2_ParamLimits

0xbdfd,	// (0x0002ab38) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002e807) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002e807) main_apps_wheel_pane_g

0xbe15,	// (0x0002ab50) main_apps_wheel_pane_t1_ParamLimits

0xbe15,	// (0x0002ab50) main_apps_wheel_pane_t1

0xbe38,	// (0x0002ab73) list_wheel_apps_pane_g1

0xbe40,	// (0x0002ab7b) list_wheel_apps_pane_g2

0xbe48,	// (0x0002ab83) list_wheel_apps_pane_g3

0xbe52,	// (0x0002ab8d) list_wheel_apps_pane_g4

0xbe5c,	// (0x0002ab97) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002e80c) list_wheel_apps_pane_g

0x77c0,	// (0x000264fb) navi_icon_text_pane

0x8467,	// (0x000271a2) aid_fill_nsta

0xbe7f,	// (0x0002abba) navi_icon_text_pane_g1

0xbe8b,	// (0x0002abc6) navi_icon_text_pane_t1

0x7663,	// (0x0002639e) list_set_graphic_pane_t1_ParamLimits

0x7663,	// (0x0002639e) list_set_graphic_pane_t1

0xa88b,	// (0x000295c6) popup_midp_note_alarm_window_t6_ParamLimits

0xa88b,	// (0x000295c6) popup_midp_note_alarm_window_t6

0xa89d,	// (0x000295d8) popup_midp_note_alarm_window_t7_ParamLimits

0xa89d,	// (0x000295d8) popup_midp_note_alarm_window_t7

0xa8af,	// (0x000295ea) popup_midp_note_alarm_window_t8_ParamLimits

0xa8af,	// (0x000295ea) popup_midp_note_alarm_window_t8

0xa8c1,	// (0x000295fc) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c1,	// (0x000295fc) popup_midp_note_alarm_window_t9

0xa8d3,	// (0x0002960e) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d3,	// (0x0002960e) popup_midp_note_alarm_window_t10

0xa8e5,	// (0x00029620) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e5,	// (0x00029620) popup_midp_note_alarm_window_t11

0xa8f7,	// (0x00029632) scroll_pane_cp17_ParamLimits

0xa8f7,	// (0x00029632) scroll_pane_cp17

0x88b0,	// (0x000275eb) volume_small_pane_cp_g1

0x8bfc,	// (0x00027937) volume_small_pane_cp_g2

0x8c05,	// (0x00027940) volume_small_pane_cp_g3

0x8c0e,	// (0x00027949) volume_small_pane_cp_g4

0x8c17,	// (0x00027952) volume_small_pane_cp_g5

0x8bc6,	// (0x00027901) volume_small_pane_cp_g6

0x8c20,	// (0x0002795b) volume_small_pane_cp_g7

0x8c29,	// (0x00027964) volume_small_pane_cp_g8

0x8c32,	// (0x0002796d) volume_small_pane_cp_g9

0x8c3b,	// (0x00027976) volume_small_pane_cp_g10

0x7a21,	// (0x0002675c) midp_ticker_pane_g1_ParamLimits

0x7a2d,	// (0x00026768) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0002e489) midp_ticker_pane_g_ParamLimits

0x7a39,	// (0x00026774) midp_ticker_pane_t1_ParamLimits

0x847d,	// (0x000271b8) aid_fill_nsta_2

0xa140,	// (0x00028e7b) list_form2_midp_pane

0xb23f,	// (0x00029f7a) midp_editing_number_pane_ParamLimits

0xb24e,	// (0x00029f89) midp_ticker_pane_ParamLimits

0xbe9d,	// (0x0002abd8) form2_midp_field_pane

0xbec1,	// (0x0002abfc) scroll_pane_cp51

0xbee1,	// (0x0002ac1c) form2_midp_button_pane_ParamLimits

0xbee1,	// (0x0002ac1c) form2_midp_button_pane

0xbef3,	// (0x0002ac2e) form2_midp_content_pane_ParamLimits

0xbef3,	// (0x0002ac2e) form2_midp_content_pane

0xbf0d,	// (0x0002ac48) form2_midp_field_choice_group_pane

0xbf15,	// (0x0002ac50) form2_midp_field_pane_g1

0xbf1d,	// (0x0002ac58) form2_midp_field_pane_g2

0xbf25,	// (0x0002ac60) form2_midp_field_pane_g3

0xbf2d,	// (0x0002ac68) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002e831) form2_midp_field_pane_g

0xbf35,	// (0x0002ac70) form2_midp_gauge_slider_pane

0xbf3d,	// (0x0002ac78) form2_midp_gauge_wait_pane

0xbf45,	// (0x0002ac80) form2_midp_image_pane_ParamLimits

0xbf45,	// (0x0002ac80) form2_midp_image_pane

0xbf60,	// (0x0002ac9b) form2_midp_label_pane_ParamLimits

0xbf60,	// (0x0002ac9b) form2_midp_label_pane

0xbf79,	// (0x0002acb4) form2_midp_label_pane_cp_ParamLimits

0xbf79,	// (0x0002acb4) form2_midp_label_pane_cp

0xbf9a,	// (0x0002acd5) form2_midp_string_pane_ParamLimits

0xbf9a,	// (0x0002acd5) form2_midp_string_pane

0x6078,	// (0x00024db3) form2_midp_text_pane_ParamLimits

0x6078,	// (0x00024db3) form2_midp_text_pane

0xbfac,	// (0x0002ace7) form2_midp_time_pane

0xbfbc,	// (0x0002acf7) input_focus_pane_cp51_ParamLimits

0xbfbc,	// (0x0002acf7) input_focus_pane_cp51

0xbfd4,	// (0x0002ad0f) form2_midp_label_pane_t1_ParamLimits

0xbfd4,	// (0x0002ad0f) form2_midp_label_pane_t1

0x6091,	// (0x00024dcc) form2_mdip_text_pane_t1_ParamLimits

0x6091,	// (0x00024dcc) form2_mdip_text_pane_t1

0x60af,	// (0x00024dea) form2_midp_time_pane_t1

0xc01d,	// (0x0002ad58) form2_midp_gauge_slider_pane_t1

0xc02f,	// (0x0002ad6a) form2_midp_gauge_slider_pane_t2

0xc041,	// (0x0002ad7c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002e83a) form2_midp_gauge_slider_pane_t

0xc053,	// (0x0002ad8e) form2_midp_slider_pane

0xc05f,	// (0x0002ad9a) form2_midp_gauge_wait_pane_t1

0xc06d,	// (0x0002ada8) form2_midp_wait_pane_ParamLimits

0xc06d,	// (0x0002ada8) form2_midp_wait_pane

0xc098,	// (0x0002add3) list_single_2graphic_pane_cp4_ParamLimits

0xc098,	// (0x0002add3) list_single_2graphic_pane_cp4

0x9e5c,	// (0x00028b97) list_single_midp_graphic_pane_cp_ParamLimits

0x9e5c,	// (0x00028b97) list_single_midp_graphic_pane_cp

0x1700,	// (0x0002043b) list_highlight_pane_cp20

0xc0c0,	// (0x0002adfb) list_single_2graphic_pane_g1_cp4

0xb6c9,	// (0x0002a404) list_single_2graphic_pane_g2_cp4

0xc0c8,	// (0x0002ae03) list_single_2graphic_pane_t1_cp4

0x175c,	// (0x00020497) list_highlight_pane_cp21

0xc0d7,	// (0x0002ae12) list_single_midp_graphic_pane_g4_cp

0xc0e6,	// (0x0002ae21) list_single_midp_graphic_pane_t1_cp

0xc0fb,	// (0x0002ae36) form2_mdip_string_pane_t1_ParamLimits

0xc0fb,	// (0x0002ae36) form2_mdip_string_pane_t1

0x1700,	// (0x0002043b) bg_wml_button_pane_cp2

0x16f6,	// (0x00020431) form2_midp_image_pane_g1

0x5580,	// (0x000242bb) list_double_large_graphic_pane_g5_ParamLimits

0x5580,	// (0x000242bb) list_double_large_graphic_pane_g5

0x7948,	// (0x00026683) midp_form_pane_ParamLimits

0x175c,	// (0x00020497) main_apps_wheel_pane_ParamLimits

0x824f,	// (0x00026f8a) popup_preview_window_ParamLimits

0x824f,	// (0x00026f8a) popup_preview_window

0x840a,	// (0x00027145) popup_touch_info_window_ParamLimits

0x840a,	// (0x00027145) popup_touch_info_window

0x8428,	// (0x00027163) popup_touch_menu_window_ParamLimits

0x8428,	// (0x00027163) popup_touch_menu_window

0x16ec,	// (0x00020427) bg_popup_sub_pane_cp6

0xc202,	// (0x0002af3d) list_touch_menu_pane

0xc20a,	// (0x0002af45) list_single_touch_menu_pane_ParamLimits

0xc20a,	// (0x0002af45) list_single_touch_menu_pane

0xc220,	// (0x0002af5b) list_single_touch_menu_pane_t1

0x175c,	// (0x00020497) bg_popup_sub_pane_cp7_ParamLimits

0x175c,	// (0x00020497) bg_popup_sub_pane_cp7

0xc22e,	// (0x0002af69) heading_sub_pane

0xc236,	// (0x0002af71) list_touch_info_pane_ParamLimits

0xc236,	// (0x0002af71) list_touch_info_pane

0xc245,	// (0x0002af80) list_single_touch_info_pane_ParamLimits

0xc245,	// (0x0002af80) list_single_touch_info_pane

0xc257,	// (0x0002af92) list_single_touch_info_pane_t1

0xc265,	// (0x0002afa0) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002e848) list_single_touch_info_pane_t

0x7940,	// (0x0002667b) bg_popup_heading_pane_cp

0xc273,	// (0x0002afae) heading_sub_pane_t1

0x9d81,	// (0x00028abc) bg_popup_preview_window_pane_cp_ParamLimits

0x9d81,	// (0x00028abc) bg_popup_preview_window_pane_cp

0xc22e,	// (0x0002af69) heading_preview_pane

0xc236,	// (0x0002af71) list_preview_pane_ParamLimits

0xc236,	// (0x0002af71) list_preview_pane

0xc281,	// (0x0002afbc) popup_preview_window_g1

0xc245,	// (0x0002af80) list_single_preview_pane_ParamLimits

0xc245,	// (0x0002af80) list_single_preview_pane

0xc289,	// (0x0002afc4) list_single_preview_pane_g1

0xc291,	// (0x0002afcc) list_single_preview_pane_t1

0xc257,	// (0x0002af92) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002e84d) list_single_preview_pane_t

0xc29f,	// (0x0002afda) bg_popup_heading_pane_cp2_ParamLimits

0xc29f,	// (0x0002afda) bg_popup_heading_pane_cp2

0xc2b5,	// (0x0002aff0) heading_preview_pane_g1

0xc2bd,	// (0x0002aff8) heading_preview_pane_t1_ParamLimits

0xc2bd,	// (0x0002aff8) heading_preview_pane_t1

0x17c9,	// (0x00020504) soft_indicator_pane_t1_ParamLimits

0x1aa4,	// (0x000207df) scroll_pane_ParamLimits

0x3908,	// (0x00022643) scroll_sc2_left_pane

0x38ff,	// (0x0002263a) scroll_sc2_right_pane

0x3927,	// (0x00022662) scroll_bg_pane_g1_ParamLimits

0x393c,	// (0x00022677) scroll_bg_pane_g2_ParamLimits

0x3954,	// (0x0002268f) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0002e414) scroll_bg_pane_g_ParamLimits

0x3927,	// (0x00022662) scroll_handle_pane_g1_ParamLimits

0x3969,	// (0x000226a4) scroll_handle_pane_g2_ParamLimits

0x3954,	// (0x0002268f) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0002e41b) scroll_handle_pane_g_ParamLimits

0x7ed2,	// (0x00026c0d) popup_choice_list_window_ParamLimits

0x7ed2,	// (0x00026c0d) popup_choice_list_window

0x9c57,	// (0x00028992) choice_list_pane

0x9cd9,	// (0x00028a14) cell_toolbar_pane_t1

0x9d01,	// (0x00028a3c) toolbar_button_pane_ParamLimits

0xadb1,	// (0x00029aec) ai_gene_pane_1_t2_ParamLimits

0xadb1,	// (0x00029aec) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0002e63e) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0002e63e) ai_gene_pane_1_t

0xc2da,	// (0x0002b015) scroll_sc2_left_pane_g1

0xc2da,	// (0x0002b015) scroll_sc2_right_pane_g1

0x7eaa,	// (0x00026be5) bg_popup_sub_pane_cp10

0xc2e4,	// (0x0002b01f) list_choice_list_pane

0xc2fd,	// (0x0002b038) list_single_choice_list_pane_ParamLimits

0xc2fd,	// (0x0002b038) list_single_choice_list_pane

0xc310,	// (0x0002b04b) list_single_choice_list_pane_g1

0x6e83,	// (0x00025bbe) list_single_choice_list_pane_t1_ParamLimits

0x6e83,	// (0x00025bbe) list_single_choice_list_pane_t1

0xc318,	// (0x0002b053) choice_list_pane_g1

0xc320,	// (0x0002b05b) choice_list_pane_t1

0x16ec,	// (0x00020427) input_focus_pane_cp11

0x371a,	// (0x00022455) title_pane_stacon_g2_ParamLimits

0x371a,	// (0x00022455) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0002e3fa) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e3fa) title_pane_stacon_g

0x7940,	// (0x0002667b) cursor_press_pane

0x7f7a,	// (0x00026cb5) popup_fep_hwr_window_ParamLimits

0x7f7a,	// (0x00026cb5) popup_fep_hwr_window

0x7ff2,	// (0x00026d2d) popup_fep_vkb_window_ParamLimits

0x7ff2,	// (0x00026d2d) popup_fep_vkb_window

0xc32e,	// (0x0002b069) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002e876) fep_vkb_side_pane_g_ParamLimits

0x8c7d,	// (0x000279b8) fep_hwr_candidate_pane_ParamLimits

0x8c7d,	// (0x000279b8) fep_hwr_candidate_pane

0x8ca7,	// (0x000279e2) fep_hwr_side_pane_ParamLimits

0x8ca7,	// (0x000279e2) fep_hwr_side_pane

0x8cc7,	// (0x00027a02) fep_hwr_top_pane_ParamLimits

0x8cc7,	// (0x00027a02) fep_hwr_top_pane

0x8cdf,	// (0x00027a1a) fep_hwr_write_pane_ParamLimits

0x8cdf,	// (0x00027a1a) fep_hwr_write_pane

0xfb3b,	// (0x0002e876) fep_vkb_side_pane_g

0xc336,	// (0x0002b071) fep_hwr_top_pane_g1

0xc348,	// (0x0002b083) fep_hwr_top_pane_g2

0x8d0b,	// (0x00027a46) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002e852) fep_hwr_top_pane_g

0x8d20,	// (0x00027a5b) fep_hwr_top_text_pane

0x3a2c,	// (0x00022767) fep_hwr_top_text_pane_g1

0xc37e,	// (0x0002b0b9) fep_hwr_top_text_pane_t1

0x8e16,	// (0x00027b51) fep_hwr_candidate_pane_g1

0xc5c3,	// (0x0002b2fe) fep_vkb_keypad_pane_g3_ParamLimits

0xc5c3,	// (0x0002b2fe) fep_vkb_keypad_pane_g3

0xc5eb,	// (0x0002b326) fep_vkb_keypad_pane_g4_ParamLimits

0xc5eb,	// (0x0002b326) fep_vkb_keypad_pane_g4

0xc65a,	// (0x0002b395) fep_vkb_bottom_pane_g2_ParamLimits

0xc65a,	// (0x0002b395) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002e87d) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002e87d) fep_vkb_bottom_pane_g

0xc2da,	// (0x0002b015) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002e887) cell_vkb_side_pane_g

0xc6e5,	// (0x0002b420) cell_vkb_side_pane_t1

0xc6f3,	// (0x0002b42e) cell_vkb_side_pane_t1_copy1

0xc2da,	// (0x0002b015) bg_fep_vkb_candidate_pane_g2

0xc81f,	// (0x0002b55a) cell_vkb_candidate_pane_ParamLimits

0xc38c,	// (0x0002b0c7) aid_size_cell_vkb_ParamLimits

0xc38c,	// (0x0002b0c7) aid_size_cell_vkb

0xc81f,	// (0x0002b55a) cell_vkb_candidate_pane

0x8e30,	// (0x00027b6b) bg_popup_fep_shadow_pane_g1

0xc41a,	// (0x0002b155) fep_vkb_bottom_pane_ParamLimits

0xc41a,	// (0x0002b155) fep_vkb_bottom_pane

0xc450,	// (0x0002b18b) fep_vkb_candidate_pane_ParamLimits

0xc450,	// (0x0002b18b) fep_vkb_candidate_pane

0xc46c,	// (0x0002b1a7) fep_vkb_keypad_pane_ParamLimits

0xc46c,	// (0x0002b1a7) fep_vkb_keypad_pane

0xc4ab,	// (0x0002b1e6) fep_vkb_side_pane_ParamLimits

0xc4ab,	// (0x0002b1e6) fep_vkb_side_pane

0xc4e7,	// (0x0002b222) fep_vkb_top_pane_ParamLimits

0xc4e7,	// (0x0002b222) fep_vkb_top_pane

0xc51c,	// (0x0002b257) fep_vkb_top_pane_g1_ParamLimits

0xc51c,	// (0x0002b257) fep_vkb_top_pane_g1

0xc52b,	// (0x0002b266) fep_vkb_top_pane_g2_ParamLimits

0xc52b,	// (0x0002b266) fep_vkb_top_pane_g2

0xc53a,	// (0x0002b275) fep_vkb_top_pane_g3_ParamLimits

0xc53a,	// (0x0002b275) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002e86d) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002e86d) fep_vkb_top_pane_g

0xc558,	// (0x0002b293) fep_vkb_top_text_pane_ParamLimits

0xc558,	// (0x0002b293) fep_vkb_top_text_pane

0xc569,	// (0x0002b2a4) fep_vkb_side_pane_g1_ParamLimits

0xc569,	// (0x0002b2a4) fep_vkb_side_pane_g1

0xc5b2,	// (0x0002b2ed) grid_vkb_side_pane_ParamLimits

0xc5b2,	// (0x0002b2ed) grid_vkb_side_pane

0x8e38,	// (0x00027b73) bg_popup_fep_shadow_pane_g2

0x8e41,	// (0x00027b7c) bg_popup_fep_shadow_pane_g3

0x8e49,	// (0x00027b84) bg_popup_fep_shadow_pane_g4

0x8e52,	// (0x00027b8d) bg_popup_fep_shadow_pane_g5

0x8e5c,	// (0x00027b97) bg_popup_fep_shadow_pane_g6

0x8e64,	// (0x00027b9f) bg_popup_fep_shadow_pane_g7

0x1c6c,	// (0x000209a7) bg_popup_fep_shadow_pane_g8

0xc609,	// (0x0002b344) grid_vkb_keypad_number_pane_ParamLimits

0xc609,	// (0x0002b344) grid_vkb_keypad_number_pane

0xc619,	// (0x0002b354) grid_vkb_keypad_pane_ParamLimits

0xc619,	// (0x0002b354) grid_vkb_keypad_pane

0xc63f,	// (0x0002b37a) fep_vkb_bottom_pane_g1_ParamLimits

0xc63f,	// (0x0002b37a) fep_vkb_bottom_pane_g1

0xc668,	// (0x0002b3a3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc668,	// (0x0002b3a3) grid_vkb_keypad_bottom_left_pane

0xc67d,	// (0x0002b3b8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc67d,	// (0x0002b3b8) grid_vkb_keypad_bottom_right_pane

0xc692,	// (0x0002b3cd) fep_vkb_top_text_pane_g1

0xc6ad,	// (0x0002b3e8) fep_vkb_top_text_pane_t1

0xc6c2,	// (0x0002b3fd) cell_vkb_side_pane_ParamLimits

0xc6c2,	// (0x0002b3fd) cell_vkb_side_pane

0xc2da,	// (0x0002b015) cell_vkb_side_pane_g1

0xc701,	// (0x0002b43c) cell_vkb_keypad_pane_ParamLimits

0xc701,	// (0x0002b43c) cell_vkb_keypad_pane

0xc776,	// (0x0002b4b1) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002e89a) bg_popup_fep_shadow_pane_g

0xc2da,	// (0x0002b015) cell_hwr_side_pane_g1

0xc2da,	// (0x0002b015) cell_hwr_side_pane_g2

0xc780,	// (0x0002b4bb) cell_vkb_keypad_pane_t1

0xc78e,	// (0x0002b4c9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc78e,	// (0x0002b4c9) cell_vkb_keypad_bottom_left_pane

0xc7ab,	// (0x0002b4e6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ab,	// (0x0002b4e6) cell_vkb_keypad_bottom_right_pane

0xc2da,	// (0x0002b015) cell_vkb_keypad_bottom_left_pane_g1

0xc2da,	// (0x0002b015) cell_vkb_keypad_bottom_right_pane_g1

0xc7e4,	// (0x0002b51f) cell_vkb_keypad_number_pane_ParamLimits

0xc7e4,	// (0x0002b51f) cell_vkb_keypad_number_pane

0xc803,	// (0x0002b53e) cell_vkb_keypad_number_pane_g1

0xc80d,	// (0x0002b548) cell_vkb_keypad_number_pane_g2

0xc816,	// (0x0002b551) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002e88c) cell_vkb_keypad_number_pane_g

0xc780,	// (0x0002b4bb) cell_vkb_keypad_number_pane_t1

0xc83a,	// (0x0002b575) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0002e887) cell_hwr_side_pane_g

0xc853,	// (0x0002b58e) cell_hwr_side_pane_t1

0x8e76,	// (0x00027bb1) cell_hwr_side_pane_t1_copy1

0xc54a,	// (0x0002b285) cell_hwr_candidate_pane_g1

0x8e84,	// (0x00027bbf) cell_hwr_candidate_pane_t1

0xc2da,	// (0x0002b015) cell_vkb_candidate_pane_g2

0xc8d9,	// (0x0002b614) cell_vkb_candidate_pane_t1

0x8c44,	// (0x0002797f) bg_popup_fep_shadow_pane_ParamLimits

0x8c44,	// (0x0002797f) bg_popup_fep_shadow_pane

0x16bc,	// (0x000203f7) bg_fep_hwr_top_pane_g4

0xc35a,	// (0x0002b095) bg_hwr_side_pane_g1_ParamLimits

0xc35a,	// (0x0002b095) bg_hwr_side_pane_g1

0x8d5c,	// (0x00027a97) cell_hwr_side_pane_ParamLimits

0x8d5c,	// (0x00027a97) cell_hwr_side_pane

0x8d97,	// (0x00027ad2) fep_hwr_write_pane_g1_ParamLimits

0x8d97,	// (0x00027ad2) fep_hwr_write_pane_g1

0x8da4,	// (0x00027adf) fep_hwr_write_pane_g2_ParamLimits

0x8da4,	// (0x00027adf) fep_hwr_write_pane_g2

0x8db1,	// (0x00027aec) fep_hwr_write_pane_g3_ParamLimits

0x8db1,	// (0x00027aec) fep_hwr_write_pane_g3

0x8dbf,	// (0x00027afa) fep_hwr_write_pane_g4_ParamLimits

0x8dbf,	// (0x00027afa) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002e859) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002e859) fep_hwr_write_pane_g

0x16bc,	// (0x000203f7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x16bc,	// (0x000203f7) bg_fep_hwr_candidate_pane_g2

0x8dd4,	// (0x00027b0f) cell_hwr_candidate_pane_ParamLimits

0x8dd4,	// (0x00027b0f) cell_hwr_candidate_pane

0x8e16,	// (0x00027b51) fep_hwr_candidate_pane_g1_ParamLimits

0xc3ba,	// (0x0002b0f5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3ba,	// (0x0002b0f5) bg_popup_fep_shadow_pane_cp2

0xc54a,	// (0x0002b285) fep_vkb_top_pane_g4_ParamLimits

0xc54a,	// (0x0002b285) fep_vkb_top_pane_g4

0xc590,	// (0x0002b2cb) fep_vkb_side_pane_g2_ParamLimits

0xc590,	// (0x0002b2cb) fep_vkb_side_pane_g2

0x56a3,	// (0x000243de) list_setting_pane_t4_ParamLimits

0x56a3,	// (0x000243de) list_setting_pane_t4

0x5735,	// (0x00024470) list_setting_number_pane_t5_ParamLimits

0x5735,	// (0x00024470) list_setting_number_pane_t5

0x720d,	// (0x00025f48) list_double_heading_pane_cp2_ParamLimits

0x720d,	// (0x00025f48) list_double_heading_pane_cp2

0xc8e7,	// (0x0002b622) list_double_heading_pane_g1_cp2_ParamLimits

0xc8e7,	// (0x0002b622) list_double_heading_pane_g1_cp2

0xc8f3,	// (0x0002b62e) list_double_heading_pane_g2_cp2_ParamLimits

0xc8f3,	// (0x0002b62e) list_double_heading_pane_g2_cp2

0xc907,	// (0x0002b642) list_double_heading_pane_t1_cp2_ParamLimits

0xc907,	// (0x0002b642) list_double_heading_pane_t1_cp2

0xc91d,	// (0x0002b658) list_double_heading_pane_t2_cp2_ParamLimits

0xc91d,	// (0x0002b658) list_double_heading_pane_t2_cp2

0x16e4,	// (0x0002041f) aid_value_unit2

0x6733,	// (0x0002546e) popup_preview_fixed_window

0x18a0,	// (0x000205db) bg_popup_preview_window_pane_cp02

0xc92f,	// (0x0002b66a) list_preview_fixed_pane

0xc975,	// (0x0002b6b0) list_empty_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_empty_pane_fp

0xc975,	// (0x0002b6b0) list_single_cale_day_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_cale_day_pane_fp

0xc975,	// (0x0002b6b0) list_single_graphic_heading_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_graphic_heading_pane_fp

0xc975,	// (0x0002b6b0) list_single_graphic_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_graphic_pane_fp

0xc975,	// (0x0002b6b0) list_single_heading_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_heading_pane_fp

0xc975,	// (0x0002b6b0) list_single_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_pane_fp

0xc98b,	// (0x0002b6c6) list_single_pane_fp_g1_ParamLimits

0xc98b,	// (0x0002b6c6) list_single_pane_fp_g1

0x566e,	// (0x000243a9) list_single_pane_fp_g2_ParamLimits

0x566e,	// (0x000243a9) list_single_pane_fp_g2

0x60c2,	// (0x00024dfd) list_single_pane_fp_g3_ParamLimits

0x60c2,	// (0x00024dfd) list_single_pane_fp_g3

0xc997,	// (0x0002b6d2) list_single_pane_fp_g4_ParamLimits

0xc997,	// (0x0002b6d2) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002e8bb) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002e8bb) list_single_pane_fp_g

0x60d6,	// (0x00024e11) list_single_pane_fp_t1_ParamLimits

0x60d6,	// (0x00024e11) list_single_pane_fp_t1

0x60ed,	// (0x00024e28) list_single_graphic_pane_fp_g1_ParamLimits

0x60ed,	// (0x00024e28) list_single_graphic_pane_fp_g1

0xc98b,	// (0x0002b6c6) list_single_graphic_pane_fp_g2_ParamLimits

0xc98b,	// (0x0002b6c6) list_single_graphic_pane_fp_g2

0x566e,	// (0x000243a9) list_single_graphic_pane_fp_g3_ParamLimits

0x566e,	// (0x000243a9) list_single_graphic_pane_fp_g3

0x60c2,	// (0x00024dfd) list_single_graphic_pane_fp_g4_ParamLimits

0x60c2,	// (0x00024dfd) list_single_graphic_pane_fp_g4

0xc997,	// (0x0002b6d2) list_single_graphic_pane_fp_g5_ParamLimits

0xc997,	// (0x0002b6d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e8c4) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e8c4) list_single_graphic_pane_fp_g

0x60f9,	// (0x00024e34) list_single_graphic_pane_fp_t1_ParamLimits

0x60f9,	// (0x00024e34) list_single_graphic_pane_fp_t1

0x60ed,	// (0x00024e28) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x60ed,	// (0x00024e28) list_single_graphic_heading_pane_fp_g1

0xc98b,	// (0x0002b6c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc98b,	// (0x0002b6c6) list_single_graphic_heading_pane_fp_g2

0x566e,	// (0x000243a9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x566e,	// (0x000243a9) list_single_graphic_heading_pane_fp_g3

0x60c2,	// (0x00024dfd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x60c2,	// (0x00024dfd) list_single_graphic_heading_pane_fp_g4

0xc997,	// (0x0002b6d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc997,	// (0x0002b6d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e8c4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e8c4) list_single_graphic_heading_pane_fp_g

0x610f,	// (0x00024e4a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x610f,	// (0x00024e4a) list_single_graphic_heading_pane_fp_t1

0x6125,	// (0x00024e60) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6125,	// (0x00024e60) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002e8cf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002e8cf) list_single_graphic_heading_pane_fp_t

0x6137,	// (0x00024e72) list_single_cale_day_pane_fp_g1_ParamLimits

0x6137,	// (0x00024e72) list_single_cale_day_pane_fp_g1

0xc9a3,	// (0x0002b6de) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9a3,	// (0x0002b6de) list_single_cale_day_pane_fp_g2

0x616f,	// (0x00024eaa) list_single_cale_day_pane_fp_g3_ParamLimits

0x616f,	// (0x00024eaa) list_single_cale_day_pane_fp_g3

0x6197,	// (0x00024ed2) list_single_cale_day_pane_fp_g4_ParamLimits

0x6197,	// (0x00024ed2) list_single_cale_day_pane_fp_g4

0x61bb,	// (0x00024ef6) list_single_cale_day_pane_fp_g5_ParamLimits

0x61bb,	// (0x00024ef6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002e8d4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002e8d4) list_single_cale_day_pane_fp_g

0x61df,	// (0x00024f1a) list_single_cale_day_pane_fp_t1_ParamLimits

0x61df,	// (0x00024f1a) list_single_cale_day_pane_fp_t1

0x6205,	// (0x00024f40) list_single_cale_day_pane_fp_t2_ParamLimits

0x6205,	// (0x00024f40) list_single_cale_day_pane_fp_t2

0x621e,	// (0x00024f59) list_single_cale_day_pane_fp_t3_ParamLimits

0x621e,	// (0x00024f59) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002e8df) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002e8df) list_single_cale_day_pane_fp_t

0xc98b,	// (0x0002b6c6) list_empty_pane_fp_g1_ParamLimits

0xc98b,	// (0x0002b6c6) list_empty_pane_fp_g1

0x6237,	// (0x00024f72) list_empty_pane_fp_t1

0x6245,	// (0x00024f80) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002e8e6) list_empty_pane_fp_t

0xc98b,	// (0x0002b6c6) list_single_heading_pane_fp_g1_ParamLimits

0xc98b,	// (0x0002b6c6) list_single_heading_pane_fp_g1

0x566e,	// (0x000243a9) list_single_heading_pane_fp_g2_ParamLimits

0x566e,	// (0x000243a9) list_single_heading_pane_fp_g2

0x60c2,	// (0x00024dfd) list_single_heading_pane_fp_g3_ParamLimits

0x60c2,	// (0x00024dfd) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002e8eb) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002e8eb) list_single_heading_pane_fp_g

0x6253,	// (0x00024f8e) list_single_heading_pane_fp_t1_ParamLimits

0x6253,	// (0x00024f8e) list_single_heading_pane_fp_t1

0x6265,	// (0x00024fa0) list_single_heading_pane_fp_t2_ParamLimits

0x6265,	// (0x00024fa0) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002e8f2) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002e8f2) list_single_heading_pane_fp_t

0x6edb,	// (0x00025c16) aid_size_cell_fast

0x1883,	// (0x000205be) soft_indicator_pane_cp1_t1

0x6ee4,	// (0x00025c1f) cell_app_pane_cp2_ParamLimits

0x6ee4,	// (0x00025c1f) cell_app_pane_cp2

0x8c66,	// (0x000279a1) fep_hwr_candidate_drop_down_list_pane

0x16ca,	// (0x00020405) fep_hwr_candidate_pane_g3_ParamLimits

0x16ca,	// (0x00020405) fep_hwr_candidate_pane_g3

0x16d7,	// (0x00020412) fep_hwr_candidate_pane_g4_ParamLimits

0x16d7,	// (0x00020412) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002e866) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002e866) fep_hwr_candidate_pane_g

0xc43f,	// (0x0002b17a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc43f,	// (0x0002b17a) fep_vkb_candidate_drop_down_list_pane

0xc842,	// (0x0002b57d) fep_vkb_candidate_pane_g3

0xc84a,	// (0x0002b585) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002e893) fep_vkb_candidate_pane_g

0xc54a,	// (0x0002b285) cell_hwr_candidate_pane_g1_ParamLimits

0xc861,	// (0x0002b59c) cell_hwr_candidate_pane_g3_ParamLimits

0xc861,	// (0x0002b59c) cell_hwr_candidate_pane_g3

0xc882,	// (0x0002b5bd) cell_hwr_candidate_pane_g4_ParamLimits

0xc882,	// (0x0002b5bd) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002e8ad) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002e8ad) cell_hwr_candidate_pane_g

0xc8a3,	// (0x0002b5de) cell_vkb_candidate_pane_g3_ParamLimits

0xc8a3,	// (0x0002b5de) cell_vkb_candidate_pane_g3

0xc8be,	// (0x0002b5f9) cell_vkb_candidate_pane_g4_ParamLimits

0xc8be,	// (0x0002b5f9) cell_vkb_candidate_pane_g4

0xc9af,	// (0x0002b6ea) cell_app_pane_cp2_g1_ParamLimits

0xc9af,	// (0x0002b6ea) cell_app_pane_cp2_g1

0xc9cd,	// (0x0002b708) cell_app_pane_cp2_g2_ParamLimits

0xc9cd,	// (0x0002b708) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002e8f7) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002e8f7) cell_app_pane_cp2_g

0xc9d9,	// (0x0002b714) cell_app_pane_cp2_t1_ParamLimits

0xc9d9,	// (0x0002b714) cell_app_pane_cp2_t1

0x1b86,	// (0x000208c1) grid_highlight_pane_cp1_ParamLimits

0x1b86,	// (0x000208c1) grid_highlight_pane_cp1

0x8ea2,	// (0x00027bdd) cell_hwr_candidate_pane_cp1_ParamLimits

0x8ea2,	// (0x00027bdd) cell_hwr_candidate_pane_cp1

0xc54a,	// (0x0002b285) fep_hwr_candidate_drop_down_list_pane_g1

0xc9eb,	// (0x0002b726) fep_hwr_candidate_drop_down_list_pane_g2

0xc9f8,	// (0x0002b733) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002e8fc) fep_hwr_candidate_drop_down_list_pane_g

0x8ec1,	// (0x00027bfc) fep_hwr_candidate_drop_down_list_scroll_pane

0x8eca,	// (0x00027c05) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8eca,	// (0x00027c05) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8ed7,	// (0x00027c12) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8ed7,	// (0x00027c12) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8ee4,	// (0x00027c1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8ee4,	// (0x00027c1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8a3,	// (0x0002b5de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8a3,	// (0x0002b5de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8be,	// (0x0002b5f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8be,	// (0x0002b5f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8ef1,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8ef1,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8f0c,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8f0c,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8f27,	// (0x00027c62) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8f27,	// (0x00027c62) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002e903) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002e903) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca05,	// (0x0002b740) cell_vkb_candidate_pane_cp1_ParamLimits

0xca05,	// (0x0002b740) cell_vkb_candidate_pane_cp1

0xc54a,	// (0x0002b285) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) fep_vkb_candidate_drop_down_list_pane_g1

0xc9eb,	// (0x0002b726) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9eb,	// (0x0002b726) fep_vkb_candidate_drop_down_list_pane_g2

0xc9f8,	// (0x0002b733) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9f8,	// (0x0002b733) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002e8fc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0002e8fc) fep_vkb_candidate_drop_down_list_pane_g

0xca25,	// (0x0002b760) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca25,	// (0x0002b760) fep_vkb_candidate_drop_down_list_scroll_pane

0xca32,	// (0x0002b76d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca32,	// (0x0002b76d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca3f,	// (0x0002b77a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca3f,	// (0x0002b77a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca4b,	// (0x0002b786) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca4b,	// (0x0002b786) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc861,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc861,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc882,	// (0x0002b5bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc882,	// (0x0002b5bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca57,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca57,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca78,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca78,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca99,	// (0x0002b7d4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca99,	// (0x0002b7d4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002e914) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002e914) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x684d,	// (0x00025588) title_pane_g1_ParamLimits

0x685a,	// (0x00025595) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e289) title_pane_g_ParamLimits

0x3a24,	// (0x0002275f) aid_call2_pane

0x3a1c,	// (0x00022757) aid_call_pane

0x3a2c,	// (0x00022767) popup_clock_analogue_window_g1

0x3a2c,	// (0x00022767) popup_clock_analogue_window_g2

0x71ee,	// (0x00025f29) popup_clock_analogue_window_g3

0x71f7,	// (0x00025f32) popup_clock_analogue_window_g4

0x16f6,	// (0x00020431) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0002e429) popup_clock_analogue_window_g

0x71ff,	// (0x00025f3a) popup_clock_analogue_window_t1

0x7237,	// (0x00025f72) clock_digital_number_pane_ParamLimits

0x7237,	// (0x00025f72) clock_digital_number_pane

0x7243,	// (0x00025f7e) clock_digital_number_pane_cp02_ParamLimits

0x7243,	// (0x00025f7e) clock_digital_number_pane_cp02

0x724f,	// (0x00025f8a) clock_digital_number_pane_cp03_ParamLimits

0x724f,	// (0x00025f8a) clock_digital_number_pane_cp03

0x725b,	// (0x00025f96) clock_digital_number_pane_cp04_ParamLimits

0x725b,	// (0x00025f96) clock_digital_number_pane_cp04

0x7267,	// (0x00025fa2) clock_digital_separator_pane_ParamLimits

0x7267,	// (0x00025fa2) clock_digital_separator_pane

0x7273,	// (0x00025fae) popup_clock_digital_window_t1_ParamLimits

0x7273,	// (0x00025fae) popup_clock_digital_window_t1

0x16f6,	// (0x00020431) clock_digital_number_pane_g1

0x16f6,	// (0x00020431) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0002e434) clock_digital_number_pane_g

0x16f6,	// (0x00020431) clock_digital_separator_pane_g1

0x16f6,	// (0x00020431) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0002e434) clock_digital_separator_pane_g

0x8467,	// (0x000271a2) aid_fill_nsta_ParamLimits

0x85b3,	// (0x000272ee) indicator_nsta_pane_ParamLimits

0x872c,	// (0x00027467) popup_clock_analogue_window

0x872c,	// (0x00027467) popup_clock_digital_window

0x175c,	// (0x00020497) grid_indicator_nsta_pane_ParamLimits

0xbce5,	// (0x0002aa20) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002e7e6) clock_nsta_pane_t

0x7119,	// (0x00025e54) aid_size_max_handle

0x7123,	// (0x00025e5e) aid_size_min_handle

0x7940,	// (0x0002667b) editor_scroll_pane

0xcab4,	// (0x0002b7ef) ex_editor_pane

0x1d13,	// (0x00020a4e) scroll_pane_cp13

0x1ad0,	// (0x0002080b) scroll_pane_cp14

0x3a7a,	// (0x000227b5) scroll_pane_cp36

0x7221,	// (0x00025f5c) list_single_graphic_hl_pane_cp2_ParamLimits

0x7221,	// (0x00025f5c) list_single_graphic_hl_pane_cp2

0xb2bc,	// (0x00029ff7) list_single_graphic_hl_pane_ParamLimits

0xb2bc,	// (0x00029ff7) list_single_graphic_hl_pane

0x14c6,	// (0x00020201) aid_size_min_hl_cp1

0xcabc,	// (0x0002b7f7) list_highlight_pane_cp34_ParamLimits

0xcabc,	// (0x0002b7f7) list_highlight_pane_cp34

0xcacd,	// (0x0002b808) list_single_graphic_hl_pane_g1_ParamLimits

0xcacd,	// (0x0002b808) list_single_graphic_hl_pane_g1

0x627b,	// (0x00024fb6) list_single_graphic_hl_pane_g2_ParamLimits

0x627b,	// (0x00024fb6) list_single_graphic_hl_pane_g2

0x627b,	// (0x00024fb6) list_single_graphic_hl_pane_g3_ParamLimits

0x627b,	// (0x00024fb6) list_single_graphic_hl_pane_g3

0x6287,	// (0x00024fc2) list_single_graphic_hl_pane_g4_ParamLimits

0x6287,	// (0x00024fc2) list_single_graphic_hl_pane_g4

0x6293,	// (0x00024fce) list_single_graphic_hl_pane_g5_ParamLimits

0x6293,	// (0x00024fce) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0002e925) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0002e925) list_single_graphic_hl_pane_g

0x62a7,	// (0x00024fe2) list_single_graphic_hl_pane_t1_ParamLimits

0x62a7,	// (0x00024fe2) list_single_graphic_hl_pane_t1

0xcafa,	// (0x0002b835) aid_size_min_hl_cp2

0xcb03,	// (0x0002b83e) list_highlight_pane_cp34_cp2_ParamLimits

0xcb03,	// (0x0002b83e) list_highlight_pane_cp34_cp2

0xcacd,	// (0x0002b808) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcacd,	// (0x0002b808) list_single_graphic_hl_pane_g1_cp2

0xcb10,	// (0x0002b84b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb10,	// (0x0002b84b) list_single_graphic_hl_pane_g2_cp2

0xcb1c,	// (0x0002b857) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb1c,	// (0x0002b857) list_single_graphic_hl_pane_g3_cp2

0x7879,	// (0x000265b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7879,	// (0x000265b4) list_single_graphic_hl_pane_g4_cp2

0xcb2a,	// (0x0002b865) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb2a,	// (0x0002b865) list_single_graphic_hl_pane_g5_cp2

0x7d08,	// (0x00026a43) control_pane_g4_ParamLimits

0x7d08,	// (0x00026a43) control_pane_g4

0x7eaa,	// (0x00026be5) bg_popup_sub_pane_cp10_ParamLimits

0xc2e4,	// (0x0002b01f) list_choice_list_pane_ParamLimits

0xc2f3,	// (0x0002b02e) scroll_pane_cp23

0x18a0,	// (0x000205db) bg_popup_preview_window_pane_cp02_ParamLimits

0xc92f,	// (0x0002b66a) list_preview_fixed_pane_ParamLimits

0xc945,	// (0x0002b680) list_preview_fixed_pane_cp_ParamLimits

0xc945,	// (0x0002b680) list_preview_fixed_pane_cp

0xc951,	// (0x0002b68c) popup_preview_fixed_window_g1_ParamLimits

0xc951,	// (0x0002b68c) popup_preview_fixed_window_g1

0xc95d,	// (0x0002b698) popup_preview_fixed_window_g2_ParamLimits

0xc95d,	// (0x0002b698) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002e8b4) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002e8b4) popup_preview_fixed_window_g

0x6ff3,	// (0x00025d2e) aid_navi_side_left_pane_ParamLimits

0x7008,	// (0x00025d43) aid_navi_side_right_pane_ParamLimits

0x7020,	// (0x00025d5b) navi_icon_pane_stacon_ParamLimits

0x7034,	// (0x00025d6f) navi_navi_pane_stacon_ParamLimits

0x7020,	// (0x00025d5b) navi_text_pane_stacon_ParamLimits

0x16ec,	// (0x00020427) main_text_info_pane

0xcb54,	// (0x0002b88f) listscroll_text_info_pane

0xcb5c,	// (0x0002b897) list_text_info_pane_ParamLimits

0xcb5c,	// (0x0002b897) list_text_info_pane

0xcb6b,	// (0x0002b8a6) scroll_pane_cp24_ParamLimits

0xcb6b,	// (0x0002b8a6) scroll_pane_cp24

0xcb89,	// (0x0002b8c4) list_text_info_pane_t1_ParamLimits

0xcb89,	// (0x0002b8c4) list_text_info_pane_t1

0x7eee,	// (0x00026c29) popup_fast_swap2_window_ParamLimits

0x7eee,	// (0x00026c29) popup_fast_swap2_window

0xcbbd,	// (0x0002b8f8) aid_size_cell_fast2

0x16ec,	// (0x00020427) bg_popup_window_pane_cp17

0xa174,	// (0x00028eaf) heading_pane_cp2

0x19d4,	// (0x0002070f) listscroll_fast2_pane

0xcbc7,	// (0x0002b902) grid_fast2_pane

0xcbd1,	// (0x0002b90c) listscroll_fast2_pane_g1

0xcbd9,	// (0x0002b914) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0002e930) listscroll_fast2_pane_g

0x1d13,	// (0x00020a4e) scroll_pane_cp26

0xcbe3,	// (0x0002b91e) cell_fast2_pane_ParamLimits

0xcbe3,	// (0x0002b91e) cell_fast2_pane

0xcbf8,	// (0x0002b933) cell_fast2_pane_g1

0xcc01,	// (0x0002b93c) cell_fast2_pane_g2

0xcc0a,	// (0x0002b945) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0002e935) cell_fast2_pane_g

0x1a07,	// (0x00020742) grid_highlight_pane_cp9

0x1a1c,	// (0x00020757) main_eswt_pane_ParamLimits

0x1a1c,	// (0x00020757) main_eswt_pane

0xcb80,	// (0x0002b8bb) list_single_text_info_pane

0xcc12,	// (0x0002b94d) eswt_ctrl_button_pane

0xcc12,	// (0x0002b94d) eswt_ctrl_canvas_pane

0xcc1a,	// (0x0002b955) eswt_ctrl_combo_pane

0xcc12,	// (0x0002b94d) eswt_ctrl_default_pane

0xcc12,	// (0x0002b94d) eswt_ctrl_label_pane

0xcc22,	// (0x0002b95d) eswt_ctrl_wait_pane

0xcc2a,	// (0x0002b965) eswt_shell_pane

0x16ec,	// (0x00020427) listscroll_eswt_app_pane

0xcc4a,	// (0x0002b985) popup_eswt_tasktip_window_ParamLimits

0xcc4a,	// (0x0002b985) popup_eswt_tasktip_window

0x9d81,	// (0x00028abc) bg_popup_window_pane_cp18

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_ParamLimits

0xcc5b,	// (0x0002b996) eswt_control_pane_g1

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_ParamLimits

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_ParamLimits

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_ParamLimits

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0002e93c) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0002e93c) eswt_control_pane_g

0x1b86,	// (0x000208c1) bg_button_pane_ParamLimits

0x1b86,	// (0x000208c1) bg_button_pane

0x1a1c,	// (0x00020757) common_borders_pane_copy2_ParamLimits

0x1a1c,	// (0x00020757) common_borders_pane_copy2

0xcc8f,	// (0x0002b9ca) control_button_pane_g1_ParamLimits

0xcc8f,	// (0x0002b9ca) control_button_pane_g1

0xcc9b,	// (0x0002b9d6) control_button_pane_g2_ParamLimits

0xcc9b,	// (0x0002b9d6) control_button_pane_g2

0xcca7,	// (0x0002b9e2) control_button_pane_g3_ParamLimits

0xcca7,	// (0x0002b9e2) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0002e945) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0002e945) control_button_pane_g

0xccbb,	// (0x0002b9f6) control_button_pane_t1

0xccc9,	// (0x0002ba04) control_button_pane_t2

0x0001,

0xfc11,	// (0x0002e94c) control_button_pane_t

0x9d0d,	// (0x00028a48) bg_button_pane_g1

0x9d15,	// (0x00028a50) bg_button_pane_g2

0x9d1d,	// (0x00028a58) bg_button_pane_g3

0x9d25,	// (0x00028a60) bg_button_pane_g4

0x9d2d,	// (0x00028a68) bg_button_pane_g5

0x9d35,	// (0x00028a70) bg_button_pane_g6

0x9d3d,	// (0x00028a78) bg_button_pane_g7

0x9d45,	// (0x00028a80) bg_button_pane_g8

0x9d4d,	// (0x00028a88) bg_button_pane_g9

0x0008,

0xf857,	// (0x0002e592) bg_button_pane_g

0xc29f,	// (0x0002afda) common_borders_pane_ParamLimits

0xc29f,	// (0x0002afda) common_borders_pane

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy1_ParamLimits

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy1

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy1_ParamLimits

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy1

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy1_ParamLimits

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy1

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy1_ParamLimits

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy1

0xc2da,	// (0x0002b015) bg_eswt_ctrl_canvas_pane_g1

0xc29f,	// (0x0002afda) common_borders_pane_cp2_ParamLimits

0xc29f,	// (0x0002afda) common_borders_pane_cp2

0xc29f,	// (0x0002afda) common_borders_pane_cp3_ParamLimits

0xc29f,	// (0x0002afda) common_borders_pane_cp3

0xccd7,	// (0x0002ba12) separator_horizontal_pane

0xccdf,	// (0x0002ba1a) separator_vertical_pane

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy2_ParamLimits

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy2

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy2_ParamLimits

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy2

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy2_ParamLimits

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy2

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy2_ParamLimits

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy2

0x16ec,	// (0x00020427) common_borders_pane_cp4

0xcce8,	// (0x0002ba23) separator_horizontal_pane_g1

0xccf1,	// (0x0002ba2c) separator_horizontal_pane_g2

0xccfa,	// (0x0002ba35) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0002e951) separator_horizontal_pane_g

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy3_ParamLimits

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy3

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy3_ParamLimits

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy3

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy3_ParamLimits

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy3

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy3_ParamLimits

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy3

0x16ec,	// (0x00020427) common_borders_pane_cp5

0xcd03,	// (0x0002ba3e) separator_vertical_pane_g1

0xcd0c,	// (0x0002ba47) separator_vertical_pane_g2

0xcd15,	// (0x0002ba50) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0002e958) separator_vertical_pane_g

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy4_ParamLimits

0xcc5b,	// (0x0002b996) eswt_control_pane_g1_copy4

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy4_ParamLimits

0xcc68,	// (0x0002b9a3) eswt_control_pane_g2_copy4

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy4_ParamLimits

0xcc75,	// (0x0002b9b0) eswt_control_pane_g3_copy4

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy4_ParamLimits

0xcc82,	// (0x0002b9bd) eswt_control_pane_g4_copy4

0xcd1e,	// (0x0002ba59) eswt_ctrl_combo_button_pane

0xcd26,	// (0x0002ba61) eswt_ctrl_input_pane

0xcd2e,	// (0x0002ba69) popup_choice_list_window_cp70

0xcd36,	// (0x0002ba71) eswt_ctrl_input_pane_t1

0x16ec,	// (0x00020427) input_focus_pane_cp70

0xc29f,	// (0x0002afda) bg_button_pane_cp70_ParamLimits

0xc29f,	// (0x0002afda) bg_button_pane_cp70

0xcd44,	// (0x0002ba7f) eswt_ctrl_combo_button_pane_g1

0xcd4c,	// (0x0002ba87) wait_bar_pane_cp70

0x9d81,	// (0x00028abc) bg_popup_window_pane_cp70_ParamLimits

0x9d81,	// (0x00028abc) bg_popup_window_pane_cp70

0xcd54,	// (0x0002ba8f) popup_eswt_tasktip_window_t1

0xcd6a,	// (0x0002baa5) wait_bar_pane_cp71_ParamLimits

0xcd6a,	// (0x0002baa5) wait_bar_pane_cp71

0xcd76,	// (0x0002bab1) grid_eswt_app_pane

0x38ff,	// (0x0002263a) scroll_pane_cp70

0xcd7f,	// (0x0002baba) cell_eswt_app_pane_ParamLimits

0xcd7f,	// (0x0002baba) cell_eswt_app_pane

0xcdaf,	// (0x0002baea) cell_eswt_app_pane_g1_ParamLimits

0xcdaf,	// (0x0002baea) cell_eswt_app_pane_g1

0xcdde,	// (0x0002bb19) cell_eswt_app_pane_g2_ParamLimits

0xcdde,	// (0x0002bb19) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0002e95f) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0002e95f) cell_eswt_app_pane_g

0xce02,	// (0x0002bb3d) cell_eswt_app_pane_t1_ParamLimits

0xce02,	// (0x0002bb3d) cell_eswt_app_pane_t1

0xce34,	// (0x0002bb6f) grid_highlight_pane_cp70_ParamLimits

0xce34,	// (0x0002bb6f) grid_highlight_pane_cp70

0x7815,	// (0x00026550) set_content_pane_g1

0x7c90,	// (0x000269cb) status_small_volume_pane

0x8f42,	// (0x00027c7d) status_small_volume_pane_g1

0x8f4a,	// (0x00027c85) volume_small2_pane

0x8f53,	// (0x00027c8e) volume_small2_pane_g1

0x8f5c,	// (0x00027c97) volume_small2_pane_g2

0x8f65,	// (0x00027ca0) volume_small2_pane_g3

0x8f6e,	// (0x00027ca9) volume_small2_pane_g4

0x8f77,	// (0x00027cb2) volume_small2_pane_g5

0x8f80,	// (0x00027cbb) volume_small2_pane_g6

0x8f89,	// (0x00027cc4) volume_small2_pane_g7

0x8f92,	// (0x00027ccd) volume_small2_pane_g8

0x8f9b,	// (0x00027cd6) volume_small2_pane_g9

0x8fa4,	// (0x00027cdf) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0002e964) volume_small2_pane_g

0xc692,	// (0x0002b3cd) fep_vkb_top_text_pane_g1_ParamLimits

0xc6ad,	// (0x0002b3e8) fep_vkb_top_text_pane_t1_ParamLimits

0xc969,	// (0x0002b6a4) popup_preview_fixed_window_g3_ParamLimits

0xc969,	// (0x0002b6a4) popup_preview_fixed_window_g3

0x839d,	// (0x000270d8) popup_toolbar_trans_pane

0xb0ab,	// (0x00029de6) aid_height_set_list_ParamLimits

0xb0bc,	// (0x00029df7) aid_size_parent_ParamLimits

0x7eaa,	// (0x00026be5) list_highlight_pane_cp2_ParamLimits

0x7815,	// (0x00026550) set_content_pane_g1_ParamLimits

0x5ccb,	// (0x00024a06) list_single_image_pane_ParamLimits

0x5ccb,	// (0x00024a06) list_single_image_pane

0xce40,	// (0x0002bb7b) aid_size_cell_image_ParamLimits

0xce40,	// (0x0002bb7b) aid_size_cell_image

0xce4d,	// (0x0002bb88) grid_single_image_pane_ParamLimits

0xce4d,	// (0x0002bb88) grid_single_image_pane

0xcada,	// (0x0002b815) list_single_image_pane_g1_ParamLimits

0xcada,	// (0x0002b815) list_single_image_pane_g1

0xcae6,	// (0x0002b821) list_single_image_pane_g2_ParamLimits

0xcae6,	// (0x0002b821) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0002e979) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0002e979) list_single_image_pane_g

0xce5b,	// (0x0002bb96) list_single_image_pane_t1_ParamLimits

0xce5b,	// (0x0002bb96) list_single_image_pane_t1

0xce71,	// (0x0002bbac) cell_image_list_pane_ParamLimits

0xce71,	// (0x0002bbac) cell_image_list_pane

0xce85,	// (0x0002bbc0) cell_image_list_pane_g1

0xce8e,	// (0x0002bbc9) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0002e97e) cell_image_list_pane_g

0xce97,	// (0x0002bbd2) aid_size_cell_tb_trans_pane

0x1b86,	// (0x000208c1) bg_tb_trans_pane

0xcea9,	// (0x0002bbe4) grid_tb_trans_pane

0x9d0d,	// (0x00028a48) bg_tb_trans_pane_g1

0x9d15,	// (0x00028a50) bg_tb_trans_pane_g2

0x9d1d,	// (0x00028a58) bg_tb_trans_pane_g3

0x9d25,	// (0x00028a60) bg_tb_trans_pane_g4

0x9d2d,	// (0x00028a68) bg_tb_trans_pane_g5

0x9d45,	// (0x00028a80) bg_tb_trans_pane_g6

0x9d4d,	// (0x00028a88) bg_tb_trans_pane_g7

0x9d35,	// (0x00028a70) bg_tb_trans_pane_g8

0x9d3d,	// (0x00028a78) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0002e983) bg_tb_trans_pane_g

0xcebd,	// (0x0002bbf8) cell_toolbar_trans_pane_ParamLimits

0xcebd,	// (0x0002bbf8) cell_toolbar_trans_pane

0xc2da,	// (0x0002b015) cell_toolbar_trans_pane_g1

0xbea5,	// (0x0002abe0) list_form2_midp_pane_t1

0xbeb3,	// (0x0002abee) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002e82c) list_form2_midp_pane_t

0xbec1,	// (0x0002abfc) scroll_pane_cp51_ParamLimits

0xc07d,	// (0x0002adb8) form2_midp_wait_pane_g1

0xc086,	// (0x0002adc1) form2_midp_wait_pane_g2

0xc08f,	// (0x0002adca) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002e841) form2_midp_wait_pane_g

0x175c,	// (0x00020497) list_highlight_pane_cp21_ParamLimits

0xc0d7,	// (0x0002ae12) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0e6,	// (0x0002ae21) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5c63,	// (0x0002499e) list_single_2graphic_im_pane_ParamLimits

0x5c63,	// (0x0002499e) list_single_2graphic_im_pane

0xcee3,	// (0x0002bc1e) list_single_2graphic_im_pane_g1_ParamLimits

0xcee3,	// (0x0002bc1e) list_single_2graphic_im_pane_g1

0xcef4,	// (0x0002bc2f) list_single_2graphic_im_pane_g2_ParamLimits

0xcef4,	// (0x0002bc2f) list_single_2graphic_im_pane_g2

0xcf00,	// (0x0002bc3b) list_single_2graphic_im_pane_g3_ParamLimits

0xcf00,	// (0x0002bc3b) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0002e996) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0002e996) list_single_2graphic_im_pane_g

0xcf20,	// (0x0002bc5b) list_single_2graphic_im_pane_t1_ParamLimits

0xcf20,	// (0x0002bc5b) list_single_2graphic_im_pane_t1

0xc975,	// (0x0002b6b0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc975,	// (0x0002b6b0) list_single_graphic_2heading_pane_fp

0x60ed,	// (0x00024e28) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x60ed,	// (0x00024e28) list_single_graphic_2heading_pane_fp_g1

0xc98b,	// (0x0002b6c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc98b,	// (0x0002b6c6) list_single_graphic_2heading_pane_fp_g2

0x566e,	// (0x000243a9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x566e,	// (0x000243a9) list_single_graphic_2heading_pane_fp_g3

0x60c2,	// (0x00024dfd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x60c2,	// (0x00024dfd) list_single_graphic_2heading_pane_fp_g4

0xc997,	// (0x0002b6d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc997,	// (0x0002b6d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002e8c4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002e8c4) list_single_graphic_2heading_pane_fp_g

0x62bd,	// (0x00024ff8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x62bd,	// (0x00024ff8) list_single_graphic_2heading_pane_fp_t1

0x6125,	// (0x00024e60) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6125,	// (0x00024e60) list_single_graphic_2heading_pane_fp_t2

0x62d3,	// (0x0002500e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x62d3,	// (0x0002500e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0002e99f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0002e99f) list_single_graphic_2heading_pane_fp_t

0xc366,	// (0x0002b0a1) fep_hwr_write_pane_g5_ParamLimits

0xc366,	// (0x0002b0a1) fep_hwr_write_pane_g5

0xc372,	// (0x0002b0ad) fep_hwr_write_pane_g6_ParamLimits

0xc372,	// (0x0002b0ad) fep_hwr_write_pane_g6

0xcc2a,	// (0x0002b965) eswt_shell_pane_ParamLimits

0x9d81,	// (0x00028abc) bg_popup_window_pane_cp18_ParamLimits

0xb004,	// (0x00029d3f) heading_pane_cp70

0xcd54,	// (0x0002ba8f) popup_eswt_tasktip_window_t1_ParamLimits

0x84bc,	// (0x000271f7) aid_touch_tab_arrow_left

0x84cb,	// (0x00027206) aid_touch_tab_arrow_right

0x686b,	// (0x000255a6) title_pane_g3_ParamLimits

0x686b,	// (0x000255a6) title_pane_g3

0x1b1d,	// (0x00020858) set_value_pane_g1

0x839d,	// (0x000270d8) popup_toolbar_trans_pane_ParamLimits

0xce97,	// (0x0002bbd2) aid_size_cell_tb_trans_pane_ParamLimits

0x1b86,	// (0x000208c1) bg_tb_trans_pane_ParamLimits

0xcea9,	// (0x0002bbe4) grid_tb_trans_pane_ParamLimits

0x18a0,	// (0x000205db) cont_note_pane_ParamLimits

0x18a0,	// (0x000205db) cont_note_pane

0x1a1c,	// (0x00020757) cont_snote2_single_text_pane_ParamLimits

0x1a1c,	// (0x00020757) cont_snote2_single_text_pane

0x1a1c,	// (0x00020757) cont_snote2_single_graphic_pane_ParamLimits

0x1a1c,	// (0x00020757) cont_snote2_single_graphic_pane

0xa387,	// (0x000290c2) cont_note_wait_pane_ParamLimits

0xa387,	// (0x000290c2) cont_note_wait_pane

0xa387,	// (0x000290c2) cont_note_image_pane_ParamLimits

0xa387,	// (0x000290c2) cont_note_image_pane

0xcf51,	// (0x0002bc8c) popup_note2_window_g1_ParamLimits

0xcf51,	// (0x0002bc8c) popup_note2_window_g1

0xcf82,	// (0x0002bcbd) popup_note2_window_t1_ParamLimits

0xcf82,	// (0x0002bcbd) popup_note2_window_t1

0xcfc7,	// (0x0002bd02) popup_note2_window_t2_ParamLimits

0xcfc7,	// (0x0002bd02) popup_note2_window_t2

0xd00c,	// (0x0002bd47) popup_note2_window_t3_ParamLimits

0xd00c,	// (0x0002bd47) popup_note2_window_t3

0xd051,	// (0x0002bd8c) popup_note2_window_t4_ParamLimits

0xd051,	// (0x0002bd8c) popup_note2_window_t4

0x1924,	// (0x0002065f) popup_note2_window_t5_ParamLimits

0x1924,	// (0x0002065f) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0002e9ab) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0002e9ab) popup_note2_window_t

0xd080,	// (0x0002bdbb) popup_note2_image_window_g1_ParamLimits

0xd080,	// (0x0002bdbb) popup_note2_image_window_g1

0xd08c,	// (0x0002bdc7) popup_note2_image_window_g2_ParamLimits

0xd08c,	// (0x0002bdc7) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0002e9b6) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0002e9b6) popup_note2_image_window_g

0xd09e,	// (0x0002bdd9) popup_note2_image_window_t1_ParamLimits

0xd09e,	// (0x0002bdd9) popup_note2_image_window_t1

0xd0b6,	// (0x0002bdf1) popup_note2_image_window_t2_ParamLimits

0xd0b6,	// (0x0002bdf1) popup_note2_image_window_t2

0xd0ce,	// (0x0002be09) popup_note2_image_window_t3_ParamLimits

0xd0ce,	// (0x0002be09) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0002e9bb) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0002e9bb) popup_note2_image_window_t

0xa395,	// (0x000290d0) popup_note2_wait_window_g1_ParamLimits

0xa395,	// (0x000290d0) popup_note2_wait_window_g1

0xa3a1,	// (0x000290dc) popup_note2_wait_window_g2_ParamLimits

0xa3a1,	// (0x000290dc) popup_note2_wait_window_g2

0xa3ad,	// (0x000290e8) popup_note2_wait_window_g3_ParamLimits

0xa3ad,	// (0x000290e8) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0002e574) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0002e574) popup_note2_wait_window_g

0xd0ea,	// (0x0002be25) popup_note2_wait_window_t1_ParamLimits

0xd0ea,	// (0x0002be25) popup_note2_wait_window_t1

0xd108,	// (0x0002be43) popup_note2_wait_window_t2_ParamLimits

0xd108,	// (0x0002be43) popup_note2_wait_window_t2

0xd126,	// (0x0002be61) popup_note2_wait_window_t3_ParamLimits

0xd126,	// (0x0002be61) popup_note2_wait_window_t3

0xd138,	// (0x0002be73) popup_note2_wait_window_t4_ParamLimits

0xd138,	// (0x0002be73) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002e9c2) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002e9c2) popup_note2_wait_window_t

0xd14a,	// (0x0002be85) wait_bar2_pane_ParamLimits

0xd14a,	// (0x0002be85) wait_bar2_pane

0xd162,	// (0x0002be9d) popup_snote2_single_text_window_g1_ParamLimits

0xd162,	// (0x0002be9d) popup_snote2_single_text_window_g1

0xd18a,	// (0x0002bec5) popup_snote2_single_text_window_t1_ParamLimits

0xd18a,	// (0x0002bec5) popup_snote2_single_text_window_t1

0xd1d6,	// (0x0002bf11) popup_snote2_single_text_window_t2_ParamLimits

0xd1d6,	// (0x0002bf11) popup_snote2_single_text_window_t2

0xd222,	// (0x0002bf5d) popup_snote2_single_text_window_t3_ParamLimits

0xd222,	// (0x0002bf5d) popup_snote2_single_text_window_t3

0xd263,	// (0x0002bf9e) popup_snote2_single_text_window_t4_ParamLimits

0xd263,	// (0x0002bf9e) popup_snote2_single_text_window_t4

0xd299,	// (0x0002bfd4) popup_snote2_single_text_window_t5_ParamLimits

0xd299,	// (0x0002bfd4) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002e9cb) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002e9cb) popup_snote2_single_text_window_t

0xd2c4,	// (0x0002bfff) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2c4,	// (0x0002bfff) popup_snote2_single_graphic_window_g1

0xd2ec,	// (0x0002c027) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ec,	// (0x0002c027) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002e9d6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002e9d6) popup_snote2_single_graphic_window_g

0xd314,	// (0x0002c04f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd314,	// (0x0002c04f) popup_snote2_single_graphic_window_t1

0xd360,	// (0x0002c09b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd360,	// (0x0002c09b) popup_snote2_single_graphic_window_t2

0xd222,	// (0x0002bf5d) popup_snote2_single_graphic_window_t3_ParamLimits

0xd222,	// (0x0002bf5d) popup_snote2_single_graphic_window_t3

0xd263,	// (0x0002bf9e) popup_snote2_single_graphic_window_t4_ParamLimits

0xd263,	// (0x0002bf9e) popup_snote2_single_graphic_window_t4

0xd299,	// (0x0002bfd4) popup_snote2_single_graphic_window_t5_ParamLimits

0xd299,	// (0x0002bfd4) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002e9db) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002e9db) popup_snote2_single_graphic_window_t

0xbd7e,	// (0x0002aab9) clock_nsta_pane_cp2_t1

0xbd7e,	// (0x0002aab9) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002e802) clock_nsta_pane_cp2_t

0x584b,	// (0x00024586) form_field_data_wide_pane_g1_ParamLimits

0x1bb1,	// (0x000208ec) form_field_data_wide_pane_g2_ParamLimits

0x1bb1,	// (0x000208ec) form_field_data_wide_pane_g2

0x1bbd,	// (0x000208f8) form_field_data_wide_pane_g3_ParamLimits

0x1bbd,	// (0x000208f8) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0002e3ac) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0002e3ac) form_field_data_wide_pane_g

0xbc81,	// (0x0002a9bc) grid_touch_3_pane_ParamLimits

0xbc81,	// (0x0002a9bc) grid_touch_3_pane

0xd3ac,	// (0x0002c0e7) cell_touch_3_pane_ParamLimits

0xd3ac,	// (0x0002c0e7) cell_touch_3_pane

0xc2da,	// (0x0002b015) cell_touch_3_pane_g1

0xc2da,	// (0x0002b015) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002e887) cell_touch_3_pane_g

0x1956,	// (0x00020691) cont_query_data_pane

0x195e,	// (0x00020699) cont_query_data_pane_cp1

0xd3da,	// (0x0002c115) button_value_adjust_pane_cp7

0xd3e2,	// (0x0002c11d) query_popup_pane_cp3

0x3b07,	// (0x00022842) bg_popup_sub_pane_cp22_ParamLimits

0x72ed,	// (0x00026028) navi_navi_volume_pane_cp2

0x7305,	// (0x00026040) popup_side_volume_key_window_g2

0x7311,	// (0x0002604c) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0002e442) popup_side_volume_key_window_g

0x732b,	// (0x00026066) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0002e449) popup_side_volume_key_window_t

0x76e2,	// (0x0002641d) popup_side_volume_key_window_ParamLimits

0x54fd,	// (0x00024238) list_double_graphic_pane_g4_ParamLimits

0x54fd,	// (0x00024238) list_double_graphic_pane_g4

0x5ca8,	// (0x000249e3) list_single_2heading_msg_pane_ParamLimits

0x5ca8,	// (0x000249e3) list_single_2heading_msg_pane

0x62f3,	// (0x0002502e) list_single_2heading_msg_pane_g1_ParamLimits

0x62f3,	// (0x0002502e) list_single_2heading_msg_pane_g1

0x532c,	// (0x00024067) list_single_2heading_msg_pane_g2_ParamLimits

0x532c,	// (0x00024067) list_single_2heading_msg_pane_g2

0x5e38,	// (0x00024b73) list_single_2heading_msg_pane_g3_ParamLimits

0x5e38,	// (0x00024b73) list_single_2heading_msg_pane_g3

0x62ff,	// (0x0002503a) list_single_2heading_msg_pane_g4_ParamLimits

0x62ff,	// (0x0002503a) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002e9e6) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002e9e6) list_single_2heading_msg_pane_g

0x6317,	// (0x00025052) list_single_2heading_msg_pane_t1_ParamLimits

0x6317,	// (0x00025052) list_single_2heading_msg_pane_t1

0x633f,	// (0x0002507a) list_single_2heading_msg_pane_t2_ParamLimits

0x633f,	// (0x0002507a) list_single_2heading_msg_pane_t2

0x6373,	// (0x000250ae) list_single_2heading_msg_pane_t3_ParamLimits

0x6373,	// (0x000250ae) list_single_2heading_msg_pane_t3

0x63ac,	// (0x000250e7) list_single_2heading_msg_pane_t4_ParamLimits

0x63ac,	// (0x000250e7) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002e9ef) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002e9ef) list_single_2heading_msg_pane_t

0x170a,	// (0x00020445) title_pane_g4_ParamLimits

0x170a,	// (0x00020445) title_pane_g4

0x6f44,	// (0x00025c7f) title_pane_stacon_g3_ParamLimits

0x6f44,	// (0x00025c7f) title_pane_stacon_g3

0xcf14,	// (0x0002bc4f) list_single_2graphic_im_pane_g4_ParamLimits

0xcf14,	// (0x0002bc4f) list_single_2graphic_im_pane_g4

0xadce,	// (0x00029b09) popup_side_volume_key_window_cp

0xb5dc,	// (0x0002a317) main_idle_act2_pane_t1

0x87b0,	// (0x000274eb) toolbar_button_pane_g10

0x6e04,	// (0x00025b3f) popup_toolbar_window_cp1

0xbd6f,	// (0x0002aaaa) clock_nsta_pane_cp_t1

0xbd6f,	// (0x0002aaaa) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002e7fd) clock_nsta_pane_cp_t

0x72ed,	// (0x00026028) navi_navi_volume_pane_cp2_ParamLimits

0x72f9,	// (0x00026034) popup_side_volume_key_window_g1_ParamLimits

0x7305,	// (0x00026040) popup_side_volume_key_window_g2_ParamLimits

0x7311,	// (0x0002604c) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0002e442) popup_side_volume_key_window_g_ParamLimits

0x8c52,	// (0x0002798d) fep_hwr_aid_pane

0x16bc,	// (0x000203f7) bg_fep_hwr_top_pane_g4_ParamLimits

0xc336,	// (0x0002b071) fep_hwr_top_pane_g1_ParamLimits

0xc348,	// (0x0002b083) fep_hwr_top_pane_g2_ParamLimits

0x8d0b,	// (0x00027a46) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002e852) fep_hwr_top_pane_g_ParamLimits

0x8d20,	// (0x00027a5b) fep_hwr_top_text_pane_ParamLimits

0xab91,	// (0x000298cc) aid_touch_tab_arrow_arrow_2

0xab9a,	// (0x000298d5) aid_touch_tab_arrow_left_2

0x8c66,	// (0x000279a1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8c9d,	// (0x000279d8) fep_hwr_prediction_pane

0xc4a1,	// (0x0002b1dc) fep_vkb_prediction_pane

0xc59e,	// (0x0002b2d9) fep_vkb_side_pane_g3_ParamLimits

0xc59e,	// (0x0002b2d9) fep_vkb_side_pane_g3

0xc54a,	// (0x0002b285) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9eb,	// (0x0002b726) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9f8,	// (0x0002b733) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002e8fc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd407,	// (0x0002c142) fep_hwr_prediction_pane_g1

0x8fad,	// (0x00027ce8) fep_hwr_prediction_pane_g2

0x8fb5,	// (0x00027cf0) fep_hwr_prediction_pane_g3

0x8fbd,	// (0x00027cf8) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002e9f8) fep_hwr_prediction_pane_g

0xd407,	// (0x0002c142) fep_vkb_prediction_pane_g1

0xd411,	// (0x0002c14c) fep_vkb_prediction_pane_g2

0xd419,	// (0x0002c154) fep_vkb_prediction_pane_g3

0xd421,	// (0x0002c15c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002ea01) fep_vkb_prediction_pane_g

0x8a8a,	// (0x000277c5) slider_set_pane_g3

0x8a9e,	// (0x000277d9) slider_set_pane_g4

0x8ab6,	// (0x000277f1) slider_set_pane_g5

0x8a8a,	// (0x000277c5) slider_set_pane_g6

0x8acc,	// (0x00027807) slider_set_pane_g7

0xb21d,	// (0x00029f58) slider_form_pane_g3

0xb226,	// (0x00029f61) slider_form_pane_g4

0xb22e,	// (0x00029f69) slider_form_pane_g5

0xb21d,	// (0x00029f58) slider_form_pane_g6

0xb236,	// (0x00029f71) slider_form_pane_g7

0xb887,	// (0x0002a5c2) slider_set_pane_vc_g3

0xb890,	// (0x0002a5cb) slider_set_pane_vc_g4

0xb899,	// (0x0002a5d4) slider_set_pane_vc_g5

0xb887,	// (0x0002a5c2) slider_set_pane_vc_g6

0xb8a2,	// (0x0002a5dd) slider_set_pane_vc_g7

0xba54,	// (0x0002a78f) slider_form_pane_vc_g1

0xba5d,	// (0x0002a798) slider_form_pane_vc_g2

0xba66,	// (0x0002a7a1) slider_form_pane_vc_g3

0xba54,	// (0x0002a78f) slider_form_pane_vc_g4

0xba6f,	// (0x0002a7aa) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002e7cf) slider_form_pane_vc_g

0x16ec,	// (0x00020427) main_idle_act3_pane

0xd429,	// (0x0002c164) ai3_links_pane

0xd432,	// (0x0002c16d) popup_ai3_data_window_ParamLimits

0xd432,	// (0x0002c16d) popup_ai3_data_window

0x16ec,	// (0x00020427) grid_ai3_links_pane

0xd44a,	// (0x0002c185) cell_ai3_links_pane_ParamLimits

0xd44a,	// (0x0002c185) cell_ai3_links_pane

0xd462,	// (0x0002c19d) bg_popup_sub_pane_cp11

0xd46f,	// (0x0002c1aa) cell_ai3_links_pane_g1

0x16ec,	// (0x00020427) bg_popup_sub_pane_cp12

0xd494,	// (0x0002c1cf) heading_ai3_data_pane

0xd49c,	// (0x0002c1d7) list_ai3_gene_pane

0xd4a8,	// (0x0002c1e3) popup_ai3_data_window_g1

0xd4b0,	// (0x0002c1eb) heading_ai3_data_pane_g1

0xd4b8,	// (0x0002c1f3) heading_ai3_data_pane_t1

0xd4c6,	// (0x0002c201) list_double_ai3_gene_pane_ParamLimits

0xd4c6,	// (0x0002c201) list_double_ai3_gene_pane

0xd4d3,	// (0x0002c20e) list_single_ai3_gene_pane_ParamLimits

0xd4d3,	// (0x0002c20e) list_single_ai3_gene_pane

0xc29f,	// (0x0002afda) list_highlight_pane_cp7_ParamLimits

0xc29f,	// (0x0002afda) list_highlight_pane_cp7

0xd4e0,	// (0x0002c21b) list_single_a13_gene_pane_t1_ParamLimits

0xd4e0,	// (0x0002c21b) list_single_a13_gene_pane_t1

0xd4f7,	// (0x0002c232) list_single_ai3_gene_pane_g1

0xd500,	// (0x0002c23b) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002ea0a) list_single_ai3_gene_pane_g

0xd508,	// (0x0002c243) list_double_ai3_gene_pane_g1_ParamLimits

0xd508,	// (0x0002c243) list_double_ai3_gene_pane_g1

0xd514,	// (0x0002c24f) list_double_ai3_gene_pane_t1_ParamLimits

0xd514,	// (0x0002c24f) list_double_ai3_gene_pane_t1

0xd530,	// (0x0002c26b) list_double_ai3_gene_pane_t2_ParamLimits

0xd530,	// (0x0002c26b) list_double_ai3_gene_pane_t2

0xd545,	// (0x0002c280) list_double_ai3_gene_pane_t3_ParamLimits

0xd545,	// (0x0002c280) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002ea0f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002ea0f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x62e9,	// (0x00025024) aid_size_min_col_2

0xd3f3,	// (0x0002c12e) aid_size_min_msg_ParamLimits

0xd3f3,	// (0x0002c12e) aid_size_min_msg

0xc69e,	// (0x0002b3d9) fep_vkb_top_text_pane_g2_ParamLimits

0xc69e,	// (0x0002b3d9) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002e882) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002e882) fep_vkb_top_text_pane_g

0x16ec,	// (0x00020427) main_hc_apps_shell_pane

0xd562,	// (0x0002c29d) grid_hc_apps_pane_ParamLimits

0xd562,	// (0x0002c29d) grid_hc_apps_pane

0xd571,	// (0x0002c2ac) list_hc_apps_pane

0xd579,	// (0x0002c2b4) scroll_pane_cp37_ParamLimits

0xd579,	// (0x0002c2b4) scroll_pane_cp37

0xd585,	// (0x0002c2c0) cell_hc_apps_pane_ParamLimits

0xd585,	// (0x0002c2c0) cell_hc_apps_pane

0xd633,	// (0x0002c36e) cell_hc_apps_pane_g1_ParamLimits

0xd633,	// (0x0002c36e) cell_hc_apps_pane_g1

0xd664,	// (0x0002c39f) cell_hc_apps_pane_g2_ParamLimits

0xd664,	// (0x0002c39f) cell_hc_apps_pane_g2

0xd680,	// (0x0002c3bb) cell_hc_apps_pane_g3_ParamLimits

0xd680,	// (0x0002c3bb) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002ea16) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002ea16) cell_hc_apps_pane_g

0xd6a2,	// (0x0002c3dd) cell_hc_apps_pane_t1_ParamLimits

0xd6a2,	// (0x0002c3dd) cell_hc_apps_pane_t1

0x18a0,	// (0x000205db) grid_highlight_pane_cp10_ParamLimits

0x18a0,	// (0x000205db) grid_highlight_pane_cp10

0xd6e2,	// (0x0002c41d) list_single_hc_apps_pane_ParamLimits

0xd6e2,	// (0x0002c41d) list_single_hc_apps_pane

0xd745,	// (0x0002c480) list_single_hc_apps_pane_g1

0x63d1,	// (0x0002510c) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002ea1d) list_single_hc_apps_pane_g

0x63ea,	// (0x00025125) list_single_hc_apps_pane_g2_copy1

0x6406,	// (0x00025141) list_single_hc_apps_pane_t1

0x175c,	// (0x00020497) bg_set_opt_pane_cp_ParamLimits

0x691b,	// (0x00025656) setting_slider_pane_t1_ParamLimits

0x6934,	// (0x0002566f) setting_slider_pane_t2_ParamLimits

0x694e,	// (0x00025689) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e299) setting_slider_pane_t_ParamLimits

0x6966,	// (0x000256a1) slider_set_pane_ParamLimits

0x7d1c,	// (0x00026a57) control_pane_g5_ParamLimits

0x7d1c,	// (0x00026a57) control_pane_g5

0xb070,	// (0x00029dab) slider_set_pane_g1_ParamLimits

0x8a7e,	// (0x000277b9) slider_set_pane_g2_ParamLimits

0x8a8a,	// (0x000277c5) slider_set_pane_g3_ParamLimits

0x8a9e,	// (0x000277d9) slider_set_pane_g4_ParamLimits

0x8ab6,	// (0x000277f1) slider_set_pane_g5_ParamLimits

0x8a8a,	// (0x000277c5) slider_set_pane_g6_ParamLimits

0x8acc,	// (0x00027807) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0002e690) slider_set_pane_g_ParamLimits

0x77c0,	// (0x000264fb) navi_icon_text_pane_ParamLimits

0x847d,	// (0x000271b8) aid_fill_nsta_2_ParamLimits

0x84bc,	// (0x000271f7) aid_touch_tab_arrow_left_ParamLimits

0x84cb,	// (0x00027206) aid_touch_tab_arrow_right_ParamLimits

0x8538,	// (0x00027273) clock_nsta_pane_ParamLimits

0xab73,	// (0x000298ae) navi_icon_pane_g1_ParamLimits

0xab7f,	// (0x000298ba) navi_text_pane_t1_ParamLimits

0xbe7f,	// (0x0002abba) navi_icon_text_pane_g1_ParamLimits

0xbe8b,	// (0x0002abc6) navi_icon_text_pane_t1_ParamLimits

0xd745,	// (0x0002c480) list_single_hc_apps_pane_g1_ParamLimits

0x63d1,	// (0x0002510c) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002ea1d) list_single_hc_apps_pane_g_ParamLimits

0x63ea,	// (0x00025125) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6406,	// (0x00025141) list_single_hc_apps_pane_t1_ParamLimits

0x675f,	// (0x0002549a) popup_toolbar2_fixed_window_ParamLimits

0x675f,	// (0x0002549a) popup_toolbar2_fixed_window

0x8393,	// (0x000270ce) popup_toolbar2_float_window

0x16ec,	// (0x00020427) bg_popup_sub_pane_cp27

0xd75e,	// (0x0002c499) grid_toolbar2_float_pane

0x16ec,	// (0x00020427) bg_popup_sub_pane_cp26

0xd75e,	// (0x0002c499) grid_toolbar2_fixed_pane

0xd766,	// (0x0002c4a1) cell_toolbar2_fixed_pane_ParamLimits

0xd766,	// (0x0002c4a1) cell_toolbar2_fixed_pane

0xd776,	// (0x0002c4b1) cell_toolbar2_fixed_pane_g1

0x9c8d,	// (0x000289c8) toolbar2_fixed_button_pane

0x9d0d,	// (0x00028a48) toolbar2_fixed_button_pane_g1

0x9d15,	// (0x00028a50) toolbar2_fixed_button_pane_g2

0x9d1d,	// (0x00028a58) toolbar2_fixed_button_pane_g3

0x9d25,	// (0x00028a60) toolbar2_fixed_button_pane_g4

0x9d2d,	// (0x00028a68) toolbar2_fixed_button_pane_g5

0x9d35,	// (0x00028a70) toolbar2_fixed_button_pane_g6

0x9d3d,	// (0x00028a78) toolbar2_fixed_button_pane_g7

0x9d45,	// (0x00028a80) toolbar2_fixed_button_pane_g8

0x9d4d,	// (0x00028a88) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0002e592) toolbar2_fixed_button_pane_g

0xd77f,	// (0x0002c4ba) cell_toolbar2_float_pane_ParamLimits

0xd77f,	// (0x0002c4ba) cell_toolbar2_float_pane

0xd790,	// (0x0002c4cb) cell_toolbar2_float_pane_g1

0x9c8d,	// (0x000289c8) toolbar2_fixed_button_pane_cp

0xc408,	// (0x0002b143) fep_vkb_accented_list_pane_ParamLimits

0xc408,	// (0x0002b143) fep_vkb_accented_list_pane

0x8e6e,	// (0x00027ba9) bg_popup_fep_shadow_pane_g9

0x7940,	// (0x0002667b) bg_popup_fep_shadow_pane_cp3

0x1cfa,	// (0x00020a35) list_accented_list_pane

0xd799,	// (0x0002c4d4) list_single_accented_list_pane_ParamLimits

0xd799,	// (0x0002c4d4) list_single_accented_list_pane

0x7940,	// (0x0002667b) list_highlight_pane_cp10

0xd7aa,	// (0x0002c4e5) list_single_accented_list_pane_t1

0x82e3,	// (0x0002701e) popup_slider_window_ParamLimits

0x82e3,	// (0x0002701e) popup_slider_window

0xd3ea,	// (0x0002c125) aid_indentation_list_msg

0xd860,	// (0x0002c59b) bg_popup_window_pane_cp19

0xd8ca,	// (0x0002c605) popup_slider_window_g1

0xd8e6,	// (0x0002c621) popup_slider_window_g2

0xd902,	// (0x0002c63d) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002ea22) popup_slider_window_g

0xd95e,	// (0x0002c699) popup_slider_window_t1

0xd9d2,	// (0x0002c70d) small_volume_slider_vertical_pane

0xc2da,	// (0x0002b015) small_volume_slider_vertical_pane_g1

0xc2da,	// (0x0002b015) small_volume_slider_vertical_pane_g2

0xd9ee,	// (0x0002c729) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002ea34) small_volume_slider_vertical_pane_g

0x652f,	// (0x0002526a) area_side_right_pane_ParamLimits

0x652f,	// (0x0002526a) area_side_right_pane

0x8fc5,	// (0x00027d00) aid_size_side_button_ParamLimits

0x8fc5,	// (0x00027d00) aid_size_side_button

0x8fd9,	// (0x00027d14) grid_sctrl_middle_pane_ParamLimits

0x8fd9,	// (0x00027d14) grid_sctrl_middle_pane

0x8ff8,	// (0x00027d33) sctrl_sk_bottom_pane

0x9009,	// (0x00027d44) sctrl_sk_top_pane

0x901b,	// (0x00027d56) aid_touch_sctrl_top

0x18a0,	// (0x000205db) bg_sctrl_sk_pane_ParamLimits

0x18a0,	// (0x000205db) bg_sctrl_sk_pane

0x9028,	// (0x00027d63) sctrl_sk_top_pane_g1

0x9035,	// (0x00027d70) sctrl_sk_top_pane_t1

0x901b,	// (0x00027d56) aid_touch_sctrl_bottom

0x18a0,	// (0x000205db) bg_sctrl_sk_pane_cp_ParamLimits

0x18a0,	// (0x000205db) bg_sctrl_sk_pane_cp

0x9050,	// (0x00027d8b) sctrl_sk_bottom_pane_g1

0x9035,	// (0x00027d70) sctrl_sk_bottom_pane_t1

0x9059,	// (0x00027d94) cell_sctrl_middle_pane_ParamLimits

0x9059,	// (0x00027d94) cell_sctrl_middle_pane

0x9074,	// (0x00027daf) aid_touch_sctrl_middle_ParamLimits

0x9074,	// (0x00027daf) aid_touch_sctrl_middle

0x1b86,	// (0x000208c1) bg_sctrl_middle_pane_ParamLimits

0x1b86,	// (0x000208c1) bg_sctrl_middle_pane

0xc54a,	// (0x0002b285) cell_sctrl_middle_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) cell_sctrl_middle_pane_g1

0x9086,	// (0x00027dc1) cell_sctrl_middle_pane_g2_ParamLimits

0x9086,	// (0x00027dc1) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002ea40) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002ea40) cell_sctrl_middle_pane_g

0x9d0d,	// (0x00028a48) bg_sctrl_middle_pane_g1

0x9d15,	// (0x00028a50) bg_sctrl_middle_pane_g2

0x9d1d,	// (0x00028a58) bg_sctrl_middle_pane_g3

0x9d25,	// (0x00028a60) bg_sctrl_middle_pane_g4

0x9d2d,	// (0x00028a68) bg_sctrl_middle_pane_g5

0x9d35,	// (0x00028a70) bg_sctrl_middle_pane_g6

0x9d3d,	// (0x00028a78) bg_sctrl_middle_pane_g7

0x9d45,	// (0x00028a80) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002ea45) bg_sctrl_middle_pane_g

0x9d4d,	// (0x00028a88) bg_sctrl_middle_pane_g8_copy1

0x9d0d,	// (0x00028a48) bg_sctrl_sk_pane_g1

0x9d15,	// (0x00028a50) bg_sctrl_sk_pane_g2

0x9d1d,	// (0x00028a58) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0002e592) bg_sctrl_sk_pane_g

0x1a6a,	// (0x000207a5) aid_size_touch_scroll_bar

0x9d25,	// (0x00028a60) bg_sctrl_sk_pane_g4

0x9d2d,	// (0x00028a68) bg_sctrl_sk_pane_g5

0x9d35,	// (0x00028a70) bg_sctrl_sk_pane_g6

0x9d3d,	// (0x00028a78) bg_sctrl_sk_pane_g7

0x9d45,	// (0x00028a80) bg_sctrl_sk_pane_g8

0x9d4d,	// (0x00028a88) bg_sctrl_sk_pane_g9

0x7f4c,	// (0x00026c87) popup_fep_china_hwr2_fs_candidate_window

0x7f56,	// (0x00026c91) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7f56,	// (0x00026c91) popup_fep_china_hwr2_fs_control_window

0xc54a,	// (0x0002b285) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002ea3b) sctrl_sk_top_pane_g

0xd9f7,	// (0x0002c732) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9f7,	// (0x0002c732) aid_fep_china_hwr2_fs_cell

0xda09,	// (0x0002c744) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda09,	// (0x0002c744) bg_popup_fep_shadow_pane_cp4

0xda20,	// (0x0002c75b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda20,	// (0x0002c75b) bg_popup_fep_shadow_pane_cp5

0xda32,	// (0x0002c76d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda32,	// (0x0002c76d) popup_fep_china_hwr2_fs_control_bar_grid

0xda42,	// (0x0002c77d) popup_fep_china_hwr2_fs_control_funtion_grid

0xda4a,	// (0x0002c785) aid_fep_china_hwr2_fs_candi_cell

0x16ec,	// (0x00020427) bg_popup_fep_shadow_pane_cp6

0xda54,	// (0x0002c78f) popup_fep_china_hwr2_fs_candidate_grid

0xda5e,	// (0x0002c799) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda5e,	// (0x0002c799) cell_fep_china_hwr2_fs_funtion_grid

0xc2da,	// (0x0002b015) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda76,	// (0x0002c7b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda76,	// (0x0002c7b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda84,	// (0x0002c7bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda84,	// (0x0002c7bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002ea56) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002ea56) cell_fep_china_hwr2_fs_funtion_grid_g

0xda9a,	// (0x0002c7d5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda9a,	// (0x0002c7d5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaaf,	// (0x0002c7ea) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaaf,	// (0x0002c7ea) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002ea5b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002ea5b) cell_fep_china_hwr2_fs_funtion_grid_t

0xdacb,	// (0x0002c806) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad3,	// (0x0002c80e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdadb,	// (0x0002c816) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002ea60) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae3,	// (0x0002c81e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae3,	// (0x0002c81e) cell_fep_china_hwr2_fs_candidate_grid

0xdafc,	// (0x0002c837) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb04,	// (0x0002c83f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2da,	// (0x0002b015) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2da,	// (0x0002b015) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002e887) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb0c,	// (0x0002c847) cell_fep_china_hwr2_fs_candidate_grid_t1

0x854b,	// (0x00027286) clock_nsta_pane_cp_24_ParamLimits

0x854b,	// (0x00027286) clock_nsta_pane_cp_24

0x85c9,	// (0x00027304) indicator_nsta_pane_cp_24_ParamLimits

0x85c9,	// (0x00027304) indicator_nsta_pane_cp_24

0xa9ef,	// (0x0002972a) heading_pane_g1

0x0001,

0xf8bc,	// (0x0002e5f7) heading_pane_g

0xb425,	// (0x0002a160) grid_sct_catagory_button_pane

0xb455,	// (0x0002a190) scroll_pane_cp5_ParamLimits

0xbecd,	// (0x0002ac08) button_value_adjust_pane_cp5_ParamLimits

0xbecd,	// (0x0002ac08) button_value_adjust_pane_cp5

0xbfac,	// (0x0002ace7) form2_midp_time_pane_ParamLimits

0xdb1a,	// (0x0002c855) cell_sct_catagory_button_pane_ParamLimits

0xdb1a,	// (0x0002c855) cell_sct_catagory_button_pane

0xc29f,	// (0x0002afda) bg_button_pane_cp01_ParamLimits

0xc29f,	// (0x0002afda) bg_button_pane_cp01

0xc2da,	// (0x0002b015) cell_sct_catagory_button_pane_g1

0x8322,	// (0x0002705d) popup_tb_extension_window

0xdb2c,	// (0x0002c867) aid_size_cell_ext_ParamLimits

0xdb2c,	// (0x0002c867) aid_size_cell_ext

0x18a0,	// (0x000205db) bg_tb_trans_pane_cp1_ParamLimits

0x18a0,	// (0x000205db) bg_tb_trans_pane_cp1

0xdb4c,	// (0x0002c887) grid_tb_ext_pane_ParamLimits

0xdb4c,	// (0x0002c887) grid_tb_ext_pane

0xdb7c,	// (0x0002c8b7) cell_tb_ext_pane_ParamLimits

0xdb7c,	// (0x0002c8b7) cell_tb_ext_pane

0xdb93,	// (0x0002c8ce) cell_tb_ext_pane_g1_ParamLimits

0xdb93,	// (0x0002c8ce) cell_tb_ext_pane_g1

0xdbb0,	// (0x0002c8eb) cell_tb_ext_pane_t1

0x18a0,	// (0x000205db) list_highlight_pane_cp11_ParamLimits

0x18a0,	// (0x000205db) list_highlight_pane_cp11

0x677e,	// (0x000254b9) popup_uni_indicator_window_ParamLimits

0x677e,	// (0x000254b9) popup_uni_indicator_window

0x1b86,	// (0x000208c1) bg_popup_sub_pane_cp14

0xdbcc,	// (0x0002c907) list_uniindi_pane

0xdbd8,	// (0x0002c913) uniindi_top_pane

0x18a0,	// (0x000205db) bg_uniindi_top_pane

0xdbf7,	// (0x0002c932) uniindi_top_pane_g1

0xdc0d,	// (0x0002c948) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002ea67) uniindi_top_pane_g

0xdc37,	// (0x0002c972) uniindi_top_pane_t1

0xdc61,	// (0x0002c99c) list_single_uniindi_pane_ParamLimits

0xdc61,	// (0x0002c99c) list_single_uniindi_pane

0xc2da,	// (0x0002b015) bg_uniindi_top_pane_g1

0xdc73,	// (0x0002c9ae) list_single_uniindi_pane_g1

0xdc86,	// (0x0002c9c1) list_single_uniindi_pane_t1

0x16ec,	// (0x00020427) control_bg_pane

0xdcab,	// (0x0002c9e6) bg_sctrl_sk_pane_cp1

0xdcb4,	// (0x0002c9ef) bg_sctrl_sk_pane_cp2

0xdcbd,	// (0x0002c9f8) control_bg_pane_g1

0xdcc6,	// (0x0002ca01) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002ea70) control_bg_pane_g

0xbd24,	// (0x0002aa5f) cell_indicator_nsta_pane_g1_ParamLimits

0xbd32,	// (0x0002aa6d) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002e7eb) cell_indicator_nsta_pane_g_ParamLimits

0x60af,	// (0x00024dea) form2_midp_time_pane_t1_ParamLimits

0x1a1c,	// (0x00020757) main_idle_act4_pane_ParamLimits

0x1a1c,	// (0x00020757) main_idle_act4_pane

0x8322,	// (0x0002705d) popup_tb_extension_window_ParamLimits

0xdb6c,	// (0x0002c8a7) tb_ext_find_pane_ParamLimits

0xdb6c,	// (0x0002c8a7) tb_ext_find_pane

0xdccf,	// (0x0002ca0a) ai_gene_pane_1_cp1

0x7a8b,	// (0x000267c6) ai_gene_pane_2_cp1

0xdcd7,	// (0x0002ca12) list_single_idle_plugin_calendar_pane

0xdce0,	// (0x0002ca1b) list_single_idle_plugin_notification_pane

0xdce9,	// (0x0002ca24) list_single_idle_plugin_player_pane

0xdcf2,	// (0x0002ca2d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf2,	// (0x0002ca2d) list_single_idle_plugin_shortcut_pane

0xdd14,	// (0x0002ca4f) main_idle_act4_pane_t1

0xdd26,	// (0x0002ca61) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002ea75) main_idle_act4_pane_t

0xdd38,	// (0x0002ca73) middle_sk_idle_act4_pane_ParamLimits

0xdd38,	// (0x0002ca73) middle_sk_idle_act4_pane

0xdd4e,	// (0x0002ca89) popup_clock_digital_analogue_window_cp2

0xdd68,	// (0x0002caa3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd68,	// (0x0002caa3) shortcut_wheel_idle_act4_pane

0xc2da,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g1

0xc2da,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g2

0xc2da,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g3

0xc2da,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g4

0xc2da,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g5

0xdd7c,	// (0x0002cab7) shortcut_wheel_idle_act4_pane_g6

0xdd84,	// (0x0002cabf) shortcut_wheel_idle_act4_pane_g7

0xdd8c,	// (0x0002cac7) shortcut_wheel_idle_act4_pane_g8

0xdd94,	// (0x0002cacf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002ea7a) shortcut_wheel_idle_act4_pane_g

0xc54a,	// (0x0002b285) middle_sk_idle_act4_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) middle_sk_idle_act4_pane_g1

0xddf8,	// (0x0002cb33) middle_sk_idle_act4_pane_g2_ParamLimits

0xddf8,	// (0x0002cb33) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002ea9d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002ea9d) middle_sk_idle_act4_pane_g

0xde04,	// (0x0002cb3f) middle_sk_idle_act4_pane_t1_ParamLimits

0xde04,	// (0x0002cb3f) middle_sk_idle_act4_pane_t1

0xde21,	// (0x0002cb5c) grid_ai_shortcut_pane_ParamLimits

0xde21,	// (0x0002cb5c) grid_ai_shortcut_pane

0xde3a,	// (0x0002cb75) list_highlight_pane_cp16_ParamLimits

0xde3a,	// (0x0002cb75) list_highlight_pane_cp16

0xde47,	// (0x0002cb82) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde47,	// (0x0002cb82) list_single_idle_plugin_shortcut_pane_g1

0xde53,	// (0x0002cb8e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde53,	// (0x0002cb8e) list_single_idle_plugin_shortcut_pane_g2

0xde6b,	// (0x0002cba6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde6b,	// (0x0002cba6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002eaa2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002eaa2) list_single_idle_plugin_shortcut_pane_g

0xde7e,	// (0x0002cbb9) cell_ai_shortcut_pane_ParamLimits

0xde7e,	// (0x0002cbb9) cell_ai_shortcut_pane

0xdea2,	// (0x0002cbdd) cell_ai_shortcut_pane_g1_ParamLimits

0xdea2,	// (0x0002cbdd) cell_ai_shortcut_pane_g1

0xdccf,	// (0x0002ca0a) ai_gene_pane_1_cp2

0xdec4,	// (0x0002cbff) ai_gene_pane_2_cp2

0xdecc,	// (0x0002cc07) list_highlight_pane_cp15

0xded5,	// (0x0002cc10) list_single_idle_plugin_calendar_pane_g1

0xdecc,	// (0x0002cc07) list_highlight_pane_cp17

0xdedd,	// (0x0002cc18) list_single_idle_plugin_calendar_pane_g1_copy1

0xdee5,	// (0x0002cc20) list_single_idle_plugin_player_pane_g1

0xb67e,	// (0x0002a3b9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002eaa9) list_single_idle_plugin_player_pane_g

0xdeed,	// (0x0002cc28) list_single_idle_plugin_player_pane_t1

0xdefb,	// (0x0002cc36) list_single_idle_plugin_player_pane_t2

0xdf09,	// (0x0002cc44) list_single_idle_plugin_player_pane_t3

0xdf17,	// (0x0002cc52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002eaae) list_single_idle_plugin_player_pane_t

0xdf25,	// (0x0002cc60) wait_bar_pane_cp15

0xdf2d,	// (0x0002cc68) grid_ai_notification_pane

0xb67e,	// (0x0002a3b9) list_single_idle_plugin_notification_pane_g1

0xdf36,	// (0x0002cc71) cell_ai_notification_pane_ParamLimits

0xdf36,	// (0x0002cc71) cell_ai_notification_pane

0xdf43,	// (0x0002cc7e) cell_ai_notification_pane_g1

0xdf4b,	// (0x0002cc86) cell_ai_notification_pane_t1

0xdf59,	// (0x0002cc94) tb_ext_find_button_pane

0xdf61,	// (0x0002cc9c) tb_ext_find_pane_g1

0xdf69,	// (0x0002cca4) tb_ext_find_pane_t1

0x3a2c,	// (0x00022767) tb_ext_find_button_pane_g1

0xdf77,	// (0x0002ccb2) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002eab7) tb_ext_find_button_pane_g

0xdd14,	// (0x0002ca4f) main_idle_act4_pane_t1_ParamLimits

0xdd26,	// (0x0002ca61) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002ea75) main_idle_act4_pane_t_ParamLimits

0xdd4e,	// (0x0002ca89) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd5c,	// (0x0002ca97) sat_plugin_idle_act4_pane_ParamLimits

0xdd5c,	// (0x0002ca97) sat_plugin_idle_act4_pane

0xdf80,	// (0x0002ccbb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf80,	// (0x0002ccbb) sat_plugin_idle_act4_pane_t1

0xdf93,	// (0x0002ccce) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf93,	// (0x0002ccce) sat_plugin_idle_act4_pane_t2

0xdfa6,	// (0x0002cce1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfa6,	// (0x0002cce1) sat_plugin_idle_act4_pane_t3

0xdfb9,	// (0x0002ccf4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfb9,	// (0x0002ccf4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002eabc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002eabc) sat_plugin_idle_act4_pane_t

0x66c7,	// (0x00025402) popup_battery_window_ParamLimits

0x66c7,	// (0x00025402) popup_battery_window

0x18a0,	// (0x000205db) bg_popup_sub_pane_cp25_ParamLimits

0x18a0,	// (0x000205db) bg_popup_sub_pane_cp25

0xdfcc,	// (0x0002cd07) popup_battery_window_g1_ParamLimits

0xdfcc,	// (0x0002cd07) popup_battery_window_g1

0xdfd8,	// (0x0002cd13) popup_battery_window_t1_ParamLimits

0xdfd8,	// (0x0002cd13) popup_battery_window_t1

0xdfea,	// (0x0002cd25) popup_battery_window_t2_ParamLimits

0xdfea,	// (0x0002cd25) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002eac5) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002eac5) popup_battery_window_t

0x7954,	// (0x0002668f) midp_canvas_pane_ParamLimits

0x79cd,	// (0x00026708) midp_keypad_pane_ParamLimits

0x79cd,	// (0x00026708) midp_keypad_pane

0x7eaa,	// (0x00026be5) main_midp_pane_ParamLimits

0xbd8d,	// (0x0002aac8) signal_pane_g2_cp_ParamLimits

0xe007,	// (0x0002cd42) aid_size_cell_midp_keypad_ParamLimits

0xe007,	// (0x0002cd42) aid_size_cell_midp_keypad

0xe021,	// (0x0002cd5c) midp_keyp_game_grid_pane_ParamLimits

0xe021,	// (0x0002cd5c) midp_keyp_game_grid_pane

0xe041,	// (0x0002cd7c) midp_keyp_rocker_pane_ParamLimits

0xe041,	// (0x0002cd7c) midp_keyp_rocker_pane

0xe07a,	// (0x0002cdb5) midp_keyp_sk_left_pane_ParamLimits

0xe07a,	// (0x0002cdb5) midp_keyp_sk_left_pane

0xe0d4,	// (0x0002ce0f) midp_keyp_sk_right_pane_ParamLimits

0xe0d4,	// (0x0002ce0f) midp_keyp_sk_right_pane

0x16ec,	// (0x00020427) bg_button_pane_cp03

0xe12e,	// (0x0002ce69) midp_keyp_sk_left_pane_g1

0x16ec,	// (0x00020427) bg_button_pane_cp04

0xe12e,	// (0x0002ce69) midp_keyp_sk_right_pane_g1

0xc2da,	// (0x0002b015) midp_keyp_rocker_pane_g1

0xe137,	// (0x0002ce72) keyp_game_cell_pane_ParamLimits

0xe137,	// (0x0002ce72) keyp_game_cell_pane

0x16ec,	// (0x00020427) bg_button_pane_cp02

0xe14a,	// (0x0002ce85) keyp_game_cell_pane_g1

0x66fd,	// (0x00025438) popup_fep_vkb2_window_ParamLimits

0x66fd,	// (0x00025438) popup_fep_vkb2_window

0x90a4,	// (0x00027ddf) aid_size_cell_vkb2_ParamLimits

0x90a4,	// (0x00027ddf) aid_size_cell_vkb2

0x90f8,	// (0x00027e33) popup_fep_vkb2_window_g1_ParamLimits

0x90f8,	// (0x00027e33) popup_fep_vkb2_window_g1

0x9140,	// (0x00027e7b) vkb2_area_bottom_pane_ParamLimits

0x9140,	// (0x00027e7b) vkb2_area_bottom_pane

0x918c,	// (0x00027ec7) vkb2_area_keypad_pane_ParamLimits

0x918c,	// (0x00027ec7) vkb2_area_keypad_pane

0x91ce,	// (0x00027f09) vkb2_area_top_pane_ParamLimits

0x91ce,	// (0x00027f09) vkb2_area_top_pane

0x9248,	// (0x00027f83) vkb2_top_entry_pane_ParamLimits

0x9248,	// (0x00027f83) vkb2_top_entry_pane

0x9272,	// (0x00027fad) vkb2_top_grid_left_pane_ParamLimits

0x9272,	// (0x00027fad) vkb2_top_grid_left_pane

0x9290,	// (0x00027fcb) vkb2_top_grid_right_pane_ParamLimits

0x9290,	// (0x00027fcb) vkb2_top_grid_right_pane

0x92ae,	// (0x00027fe9) vkb2_cell_keypad_pane_ParamLimits

0x92ae,	// (0x00027fe9) vkb2_cell_keypad_pane

0x937f,	// (0x000280ba) vkb2_area_bottom_grid_pane_ParamLimits

0x937f,	// (0x000280ba) vkb2_area_bottom_grid_pane

0x93a5,	// (0x000280e0) vkb2_area_bottom_pane_g1_ParamLimits

0x93a5,	// (0x000280e0) vkb2_area_bottom_pane_g1

0x93c9,	// (0x00028104) vkb2_area_bottom_pane_g2_ParamLimits

0x93c9,	// (0x00028104) vkb2_area_bottom_pane_g2

0x93f7,	// (0x00028132) vkb2_area_bottom_pane_g3_ParamLimits

0x93f7,	// (0x00028132) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002eaca) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002eaca) vkb2_area_bottom_pane_g

0x9458,	// (0x00028193) vkb2_top_cell_left_pane_ParamLimits

0x9458,	// (0x00028193) vkb2_top_cell_left_pane

0xe15b,	// (0x0002ce96) vkb2_top_entry_pane_g1_ParamLimits

0xe15b,	// (0x0002ce96) vkb2_top_entry_pane_g1

0xe169,	// (0x0002cea4) vkb2_top_entry_pane_t1_ParamLimits

0xe169,	// (0x0002cea4) vkb2_top_entry_pane_t1

0xe19b,	// (0x0002ced6) vkb2_top_entry_pane_t2_ParamLimits

0xe19b,	// (0x0002ced6) vkb2_top_entry_pane_t2

0xe1cd,	// (0x0002cf08) vkb2_top_entry_pane_t3_ParamLimits

0xe1cd,	// (0x0002cf08) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002ead1) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002ead1) vkb2_top_entry_pane_t

0x94a5,	// (0x000281e0) vkb2_top_grid_right_pane_g1_ParamLimits

0x94a5,	// (0x000281e0) vkb2_top_grid_right_pane_g1

0x94bb,	// (0x000281f6) vkb2_top_grid_right_pane_g2_ParamLimits

0x94bb,	// (0x000281f6) vkb2_top_grid_right_pane_g2

0x94d3,	// (0x0002820e) vkb2_top_grid_right_pane_g3_ParamLimits

0x94d3,	// (0x0002820e) vkb2_top_grid_right_pane_g3

0x94eb,	// (0x00028226) vkb2_top_grid_right_pane_g4_ParamLimits

0x94eb,	// (0x00028226) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002ead8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002ead8) vkb2_top_grid_right_pane_g

0x9501,	// (0x0002823c) vkb2_top_cell_left_pane_g1

0x9518,	// (0x00028253) vkb2_cell_keypad_pane_g1_ParamLimits

0x9518,	// (0x00028253) vkb2_cell_keypad_pane_g1

0xe1f1,	// (0x0002cf2c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1f1,	// (0x0002cf2c) vkb2_cell_keypad_pane_t1

0x9526,	// (0x00028261) vkb2_cell_bottom_grid_pane_ParamLimits

0x9526,	// (0x00028261) vkb2_cell_bottom_grid_pane

0x955f,	// (0x0002829a) vkb2_cell_bottom_grid_pane_g1

0xdd9c,	// (0x0002cad7) aid_call2_pane_cp02

0xdda4,	// (0x0002cadf) aid_call_pane_cp02

0xddac,	// (0x0002cae7) clock_digital_number_pane_cp10

0xddb4,	// (0x0002caef) clock_digital_number_pane_cp11

0xddbc,	// (0x0002caf7) clock_digital_number_pane_cp12

0xddc4,	// (0x0002caff) clock_digital_number_pane_cp13

0xddcc,	// (0x0002cb07) clock_digital_separator_pane_cp10

0x3a2c,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g1

0x3a2c,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g2

0xddd4,	// (0x0002cb0f) popup_clock_digital_analogue_window_cp2_g3

0x3a2c,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g4

0xddd4,	// (0x0002cb0f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002ea8d) popup_clock_digital_analogue_window_cp2_g

0xdddc,	// (0x0002cb17) popup_clock_digital_analogue_window_cp2_t1

0xddea,	// (0x0002cb25) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002ea98) popup_clock_digital_analogue_window_cp2_t

0xc2da,	// (0x0002b015) clock_digital_number_pane_cp10_g1

0xc2da,	// (0x0002b015) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e887) clock_digital_number_pane_cp10_g

0xc2da,	// (0x0002b015) clock_digital_separator_pane_cp10_g1

0xc2da,	// (0x0002b015) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e887) clock_digital_separator_pane_cp10_g

0xdc19,	// (0x0002c954) uniindi_top_pane_g3

0xdc2a,	// (0x0002c965) uniindi_top_pane_g4

0x9339,	// (0x00028074) vkb2_row_keypad_pane_ParamLimits

0x9339,	// (0x00028074) vkb2_row_keypad_pane

0x957b,	// (0x000282b6) vkb2_cell_t_keypad_pane_ParamLimits

0x957b,	// (0x000282b6) vkb2_cell_t_keypad_pane

0x958b,	// (0x000282c6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x958b,	// (0x000282c6) vkb2_cell_t_keypad_pane_cp08

0x959e,	// (0x000282d9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x959e,	// (0x000282d9) vkb2_cell_t_keypad_pane_cp09

0x95b2,	// (0x000282ed) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x95b2,	// (0x000282ed) vkb2_cell_t_keypad_pane_cp01

0x95c3,	// (0x000282fe) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x95c3,	// (0x000282fe) vkb2_cell_t_keypad_pane_cp02

0x95d4,	// (0x0002830f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x95d4,	// (0x0002830f) vkb2_cell_t_keypad_pane_cp03

0x95e5,	// (0x00028320) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x95e5,	// (0x00028320) vkb2_cell_t_keypad_pane_cp04

0x95f6,	// (0x00028331) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x95f6,	// (0x00028331) vkb2_cell_t_keypad_pane_cp05

0x9607,	// (0x00028342) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9607,	// (0x00028342) vkb2_cell_t_keypad_pane_cp06

0x9618,	// (0x00028353) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9618,	// (0x00028353) vkb2_cell_t_keypad_pane_cp07

0x9629,	// (0x00028364) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9629,	// (0x00028364) vkb2_cell_t_keypad_pane_cp10

0xc54a,	// (0x0002b285) vkb2_cell_t_keypad_pane_g1

0xe208,	// (0x0002cf43) vkb2_cell_t_keypad_pane_t1

0x16ec,	// (0x00020427) popup_grid_graphic2_window

0xe21a,	// (0x0002cf55) aid_size_cell_graphic2_ParamLimits

0xe21a,	// (0x0002cf55) aid_size_cell_graphic2

0xe252,	// (0x0002cf8d) bg_popup_window_pane_cp21_ParamLimits

0xe252,	// (0x0002cf8d) bg_popup_window_pane_cp21

0xe260,	// (0x0002cf9b) graphic2_pages_pane_ParamLimits

0xe260,	// (0x0002cf9b) graphic2_pages_pane

0xe2a6,	// (0x0002cfe1) grid_graphic2_control_pane_ParamLimits

0xe2a6,	// (0x0002cfe1) grid_graphic2_control_pane

0xe2e4,	// (0x0002d01f) grid_graphic2_pane_ParamLimits

0xe2e4,	// (0x0002d01f) grid_graphic2_pane

0xe358,	// (0x0002d093) cell_graphic2_pane

0x16ec,	// (0x00020427) main_comp_mode_pane

0xd49c,	// (0x0002c1d7) list_ai3_gene_pane_ParamLimits

0xd860,	// (0x0002c59b) bg_popup_window_pane_cp19_ParamLimits

0xd86c,	// (0x0002c5a7) bg_touch_area_indi_pane_ParamLimits

0xd86c,	// (0x0002c5a7) bg_touch_area_indi_pane

0xd882,	// (0x0002c5bd) bg_touch_area_indi_pane_cp01_ParamLimits

0xd882,	// (0x0002c5bd) bg_touch_area_indi_pane_cp01

0xd898,	// (0x0002c5d3) bg_touch_area_indi_pane_cp02_ParamLimits

0xd898,	// (0x0002c5d3) bg_touch_area_indi_pane_cp02

0xd8b0,	// (0x0002c5eb) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8b0,	// (0x0002c5eb) bg_touch_area_indi_pane_cp03

0xd8ca,	// (0x0002c605) popup_slider_window_g1_ParamLimits

0xd8e6,	// (0x0002c621) popup_slider_window_g2_ParamLimits

0xd902,	// (0x0002c63d) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002ea22) popup_slider_window_g_ParamLimits

0xd95e,	// (0x0002c699) popup_slider_window_t1_ParamLimits

0xd9d2,	// (0x0002c70d) small_volume_slider_vertical_pane_ParamLimits

0xe358,	// (0x0002d093) cell_graphic2_pane_ParamLimits

0xe3a7,	// (0x0002d0e2) bg_button_pane_cp10_ParamLimits

0xe3a7,	// (0x0002d0e2) bg_button_pane_cp10

0xe3ba,	// (0x0002d0f5) bg_button_pane_cp11_ParamLimits

0xe3ba,	// (0x0002d0f5) bg_button_pane_cp11

0xe3cd,	// (0x0002d108) graphic2_pages_pane_g1_ParamLimits

0xe3cd,	// (0x0002d108) graphic2_pages_pane_g1

0xe3e8,	// (0x0002d123) graphic2_pages_pane_g2_ParamLimits

0xe3e8,	// (0x0002d123) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002eae6) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002eae6) graphic2_pages_pane_g

0xe400,	// (0x0002d13b) graphic2_pages_pane_t1_ParamLimits

0xe400,	// (0x0002d13b) graphic2_pages_pane_t1

0xe418,	// (0x0002d153) cell_graphic2_control_pane_ParamLimits

0xe418,	// (0x0002d153) cell_graphic2_control_pane

0xe436,	// (0x0002d171) cell_graphic2_pane_g1_ParamLimits

0xe436,	// (0x0002d171) cell_graphic2_pane_g1

0xe443,	// (0x0002d17e) cell_graphic2_pane_g2_ParamLimits

0xe443,	// (0x0002d17e) cell_graphic2_pane_g2

0xe450,	// (0x0002d18b) cell_graphic2_pane_g3_ParamLimits

0xe450,	// (0x0002d18b) cell_graphic2_pane_g3

0xe45d,	// (0x0002d198) cell_graphic2_pane_g4_ParamLimits

0xe45d,	// (0x0002d198) cell_graphic2_pane_g4

0xe46a,	// (0x0002d1a5) cell_graphic2_pane_g5_ParamLimits

0xe46a,	// (0x0002d1a5) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002eaeb) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002eaeb) cell_graphic2_pane_g

0xe485,	// (0x0002d1c0) cell_graphic2_pane_t1_ParamLimits

0xe485,	// (0x0002d1c0) cell_graphic2_pane_t1

0x9d81,	// (0x00028abc) grid_highlight_pane_cp11_ParamLimits

0x9d81,	// (0x00028abc) grid_highlight_pane_cp11

0x18a0,	// (0x000205db) bg_button_pane_cp05

0xe4bc,	// (0x0002d1f7) cell_graphic2_control_pane_g1

0xc2da,	// (0x0002b015) bg_touch_area_indi_pane_g1

0xe4e4,	// (0x0002d21f) aid_cmod_rocker_key_size

0xe4ee,	// (0x0002d229) aid_cmode_itu_key_size

0xe4f8,	// (0x0002d233) main_cmode_video_pane

0xe502,	// (0x0002d23d) main_comp_mode_itu_pane

0xe50e,	// (0x0002d249) main_comp_mode_rocker_pane

0xe51a,	// (0x0002d255) cell_cmode_rocker_pane_ParamLimits

0xe51a,	// (0x0002d255) cell_cmode_rocker_pane

0xe52c,	// (0x0002d267) cell_cmode_itu_pane_ParamLimits

0xe52c,	// (0x0002d267) cell_cmode_itu_pane

0x1b86,	// (0x000208c1) bg_button_pane_cp06_ParamLimits

0x1b86,	// (0x000208c1) bg_button_pane_cp06

0xc54a,	// (0x0002b285) cell_cmode_rocker_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) cell_cmode_rocker_pane_g1

0xda76,	// (0x0002c7b1) cell_cmode_rocker_pane_g2_ParamLimits

0xda76,	// (0x0002c7b1) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002eafb) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002eafb) cell_cmode_rocker_pane_g

0x16ec,	// (0x00020427) bg_button_pane_cp07

0xe541,	// (0x0002d27c) cell_cmode_itu_pane_g1

0xe54a,	// (0x0002d285) cell_cmode_itu_pane_t1

0xe558,	// (0x0002d293) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002eb00) cell_cmode_itu_pane_t

0xdc9b,	// (0x0002c9d6) aid_touch_ctrl_left

0xdca3,	// (0x0002c9de) aid_touch_ctrl_right

0x16ec,	// (0x00020427) compa_mode_pane

0xe566,	// (0x0002d2a1) aid_cmod_rocker_key_size_cp

0xe570,	// (0x0002d2ab) aid_cmode_itu_key_size_cp

0xe57a,	// (0x0002d2b5) compa_mode_pane_g1

0xe582,	// (0x0002d2bd) compa_mode_pane_g2

0xe58a,	// (0x0002d2c5) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002eb05) compa_mode_pane_g

0xe592,	// (0x0002d2cd) main_comp_mode_itu_pane_cp

0xe59a,	// (0x0002d2d5) main_comp_mode_rocker_pane_cp

0xe5a2,	// (0x0002d2dd) cell_cmode_itu_pane_cp_ParamLimits

0xe5a2,	// (0x0002d2dd) cell_cmode_itu_pane_cp

0xe5b7,	// (0x0002d2f2) cell_cmode_rocker_pane_cp_ParamLimits

0xe5b7,	// (0x0002d2f2) cell_cmode_rocker_pane_cp

0x1b86,	// (0x000208c1) bg_button_pane_cp06_cp_ParamLimits

0x1b86,	// (0x000208c1) bg_button_pane_cp06_cp

0xc54a,	// (0x0002b285) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc54a,	// (0x0002b285) cell_cmode_rocker_pane_g1_cp

0xc2da,	// (0x0002b015) cell_cmode_rocker_pane_g2_cp

0x16ec,	// (0x00020427) bg_button_pane_cp07_cp

0xe5c9,	// (0x0002d304) cell_cmode_itu_pane_g1_cp

0xe5d2,	// (0x0002d30d) cell_cmode_itu_pane_t1_cp

0xe5d2,	// (0x0002d30d) cell_cmode_itu_pane_t2_cp

0xb20a,	// (0x00029f45) settings_code_pane_cp2

0x175c,	// (0x00020497) bg_popup_window_pane_cp3_ParamLimits

0x19b9,	// (0x000206f4) heading_pane_cp3_ParamLimits

0x19c5,	// (0x00020700) listscroll_popup_graphic_pane_ParamLimits

0x8c52,	// (0x0002798d) fep_hwr_aid_pane_ParamLimits

0x901b,	// (0x00027d56) aid_touch_sctrl_top_ParamLimits

0x9028,	// (0x00027d63) sctrl_sk_top_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002ea3b) sctrl_sk_top_pane_g_ParamLimits

0x9035,	// (0x00027d70) sctrl_sk_top_pane_t1_ParamLimits

0x901b,	// (0x00027d56) aid_touch_sctrl_bottom_ParamLimits

0x9035,	// (0x00027d70) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe5,	// (0x0002c920) aid_area_touch_clock

0x9210,	// (0x00027f4b) aid_vkb2_area_top_pane_cell_ParamLimits

0x9210,	// (0x00027f4b) aid_vkb2_area_top_pane_cell

0x935b,	// (0x00028096) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x935b,	// (0x00028096) aid_vkb2_area_bottom_pane_cell

0xe153,	// (0x0002ce8e) popup_char_count_window

0xe5e0,	// (0x0002d31b) popup_char_count_window_g1

0xe5e9,	// (0x0002d324) popup_char_count_window_g2

0xe5f2,	// (0x0002d32d) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002eb0c) popup_char_count_window_g

0xe5fb,	// (0x0002d336) popup_char_count_window_t1

0x90d6,	// (0x00027e11) popup_fep_char_preview_window_ParamLimits

0x90d6,	// (0x00027e11) popup_fep_char_preview_window

0x922e,	// (0x00027f69) vkb2_top_candi_pane_ParamLimits

0x922e,	// (0x00027f69) vkb2_top_candi_pane

0xe609,	// (0x0002d344) cell_vkb2_top_candi_pane_ParamLimits

0xe609,	// (0x0002d344) cell_vkb2_top_candi_pane

0xa387,	// (0x000290c2) bg_popup_fep_char_preview_window_ParamLimits

0xa387,	// (0x000290c2) bg_popup_fep_char_preview_window

0x963e,	// (0x00028379) popup_fep_char_preview_window_t1_ParamLimits

0x963e,	// (0x00028379) popup_fep_char_preview_window_t1

0xe656,	// (0x0002d391) bg_popup_fep_char_preview_window_g1

0xe65e,	// (0x0002d399) bg_popup_fep_char_preview_window_g2

0xe666,	// (0x0002d3a1) bg_popup_fep_char_preview_window_g3

0xe66e,	// (0x0002d3a9) bg_popup_fep_char_preview_window_g4

0xe676,	// (0x0002d3b1) bg_popup_fep_char_preview_window_g5

0x9678,	// (0x000283b3) bg_popup_fep_char_preview_window_g6

0xe67e,	// (0x0002d3b9) bg_popup_fep_char_preview_window_g7

0xe686,	// (0x0002d3c1) bg_popup_fep_char_preview_window_g8

0xe68e,	// (0x0002d3c9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002eb13) bg_popup_fep_char_preview_window_g

0xc54a,	// (0x0002b285) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) cell_vkb2_top_candi_pane_g1

0xc861,	// (0x0002b59c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc861,	// (0x0002b59c) cell_vkb2_top_candi_pane_g2

0xc882,	// (0x0002b5bd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc882,	// (0x0002b5bd) cell_vkb2_top_candi_pane_g3

0x9680,	// (0x000283bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9680,	// (0x000283bb) cell_vkb2_top_candi_pane_g4

0xe696,	// (0x0002d3d1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe696,	// (0x0002d3d1) cell_vkb2_top_candi_pane_g5

0xda76,	// (0x0002c7b1) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda76,	// (0x0002c7b1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002eb26) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002eb26) cell_vkb2_top_candi_pane_g

0x96a1,	// (0x000283dc) cell_vkb2_top_candi_pane_t1

0x8a6a,	// (0x000277a5) aid_size_touch_slider_mark_ParamLimits

0x8a6a,	// (0x000277a5) aid_size_touch_slider_mark

0xe296,	// (0x0002cfd1) grid_graphic2_catg_pane_ParamLimits

0xe296,	// (0x0002cfd1) grid_graphic2_catg_pane

0xe334,	// (0x0002d06f) popup_grid_graphic2_window_t1_ParamLimits

0xe334,	// (0x0002d06f) popup_grid_graphic2_window_t1

0xe346,	// (0x0002d081) popup_grid_graphic2_window_t2_ParamLimits

0xe346,	// (0x0002d081) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002eae1) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002eae1) popup_grid_graphic2_window_t

0x18a0,	// (0x000205db) bg_button_pane_cp05_ParamLimits

0xe4bc,	// (0x0002d1f7) cell_graphic2_control_pane_g1_ParamLimits

0xe6b7,	// (0x0002d3f2) cell_graphic2_catg_pane_ParamLimits

0xe6b7,	// (0x0002d3f2) cell_graphic2_catg_pane

0x16ec,	// (0x00020427) bg_button_pane_cp12

0xe6c9,	// (0x0002d404) cell_graphic2_catg_pane_g1

0xdbb0,	// (0x0002c8eb) cell_tb_ext_pane_t1_ParamLimits

0x9478,	// (0x000281b3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9478,	// (0x000281b3) vkb2_top_cell_right_narrow_pane

0x9490,	// (0x000281cb) vkb2_top_cell_right_wide_pane_ParamLimits

0x9490,	// (0x000281cb) vkb2_top_cell_right_wide_pane

0x8c44,	// (0x0002797f) bg_vkb2_func_pane_ParamLimits

0x8c44,	// (0x0002797f) bg_vkb2_func_pane

0x9501,	// (0x0002823c) vkb2_top_cell_left_pane_g1_ParamLimits

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp03

0x955f,	// (0x0002829a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d15,	// (0x00028a50) bg_vkb2_func_pane_g1

0x9d1d,	// (0x00028a58) bg_vkb2_func_pane_g2

0x9d2d,	// (0x00028a68) bg_vkb2_func_pane_g3

0x9d25,	// (0x00028a60) bg_vkb2_func_pane_g4

0x9d35,	// (0x00028a70) bg_vkb2_func_pane_g5

0x9d3d,	// (0x00028a78) bg_vkb2_func_pane_g6

0x9d45,	// (0x00028a80) bg_vkb2_func_pane_g7

0x9d4d,	// (0x00028a88) bg_vkb2_func_pane_g8

0x9d0d,	// (0x00028a48) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002eb33) bg_vkb2_func_pane_g

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp01

0x9501,	// (0x0002823c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9501,	// (0x0002823c) vkb2_top_cell_right_wide_pane_g1

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8c44,	// (0x0002797f) bg_vkb2_fuc_pane_cp02

0x955f,	// (0x0002829a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x955f,	// (0x0002829a) vkb2_top_cell_right_narrow_pane_g1

0xd7e2,	// (0x0002c51d) aid_touch_area_decrease_ParamLimits

0xd7e2,	// (0x0002c51d) aid_touch_area_decrease

0xd802,	// (0x0002c53d) aid_touch_area_increase_ParamLimits

0xd802,	// (0x0002c53d) aid_touch_area_increase

0xd80e,	// (0x0002c549) aid_touch_area_mute_ParamLimits

0xd80e,	// (0x0002c549) aid_touch_area_mute

0xd832,	// (0x0002c56d) aid_touch_area_slider_ParamLimits

0xd832,	// (0x0002c56d) aid_touch_area_slider

0xd91e,	// (0x0002c659) popup_slider_window_g4_ParamLimits

0xd91e,	// (0x0002c659) popup_slider_window_g4

0xd92a,	// (0x0002c665) popup_slider_window_g5_ParamLimits

0xd92a,	// (0x0002c665) popup_slider_window_g5

0xd94c,	// (0x0002c687) popup_slider_window_g6_ParamLimits

0xd94c,	// (0x0002c687) popup_slider_window_g6

0xd98c,	// (0x0002c6c7) popup_slider_window_t2_ParamLimits

0xd98c,	// (0x0002c6c7) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002ea2f) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002ea2f) popup_slider_window_t

0xd9a4,	// (0x0002c6df) slider_pane_ParamLimits

0xd9a4,	// (0x0002c6df) slider_pane

0xe6d2,	// (0x0002d40d) slider_pane_g1_ParamLimits

0xe6d2,	// (0x0002d40d) slider_pane_g1

0xe6e6,	// (0x0002d421) slider_pane_g2_ParamLimits

0xe6e6,	// (0x0002d421) slider_pane_g2

0xe6fc,	// (0x0002d437) slider_pane_g3_ParamLimits

0xe6fc,	// (0x0002d437) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002eb46) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002eb46) slider_pane_g

0x837e,	// (0x000270b9) popup_tb_float_extension_window_ParamLimits

0x837e,	// (0x000270b9) popup_tb_float_extension_window

0xe728,	// (0x0002d463) aid_size_cell_tb_float_ext

0x16ec,	// (0x00020427) bg_popup_sub_window_cp28

0xe734,	// (0x0002d46f) grid_tb_float_ext_pane

0xe73e,	// (0x0002d479) cell_tb_float_ext_pane_ParamLimits

0xe73e,	// (0x0002d479) cell_tb_float_ext_pane

0xe758,	// (0x0002d493) cell_tb_float_ext_pane_g1

0xe761,	// (0x0002d49c) grid_highlight_pane_cp12

0x8d85,	// (0x00027ac0) cell_last_hwr_side_pane_ParamLimits

0x8d85,	// (0x00027ac0) cell_last_hwr_side_pane

0xc2da,	// (0x0002b015) cell_last_hwr_side_pane_g1

0xe76a,	// (0x0002d4a5) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002eb4f) cell_last_hwr_side_pane_g

0x9427,	// (0x00028162) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9427,	// (0x00028162) vkb2_area_bottom_space_btn_pane

0xc54a,	// (0x0002b285) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe208,	// (0x0002cf43) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96a1,	// (0x000283dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96c0,	// (0x000283fb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96c0,	// (0x000283fb) vkb2_area_bottom_space_btn_pane_g1

0x96fa,	// (0x00028435) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x96fa,	// (0x00028435) vkb2_area_bottom_space_btn_pane_g2

0x9730,	// (0x0002846b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9730,	// (0x0002846b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002eb54) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002eb54) vkb2_area_bottom_space_btn_pane_g

0x8cf9,	// (0x00027a34) cel_fep_hwr_func_pane_ParamLimits

0x8cf9,	// (0x00027a34) cel_fep_hwr_func_pane

0x8d35,	// (0x00027a70) cell_hwr_side_button_pane_ParamLimits

0x8d35,	// (0x00027a70) cell_hwr_side_button_pane

0xdbe5,	// (0x0002c920) aid_area_touch_clock_ParamLimits

0x18a0,	// (0x000205db) bg_uniindi_top_pane_ParamLimits

0xdbf7,	// (0x0002c932) uniindi_top_pane_g1_ParamLimits

0xdc0d,	// (0x0002c948) uniindi_top_pane_g2_ParamLimits

0xdc19,	// (0x0002c954) uniindi_top_pane_g3_ParamLimits

0xdc2a,	// (0x0002c965) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002ea67) uniindi_top_pane_g_ParamLimits

0xdc37,	// (0x0002c972) uniindi_top_pane_t1_ParamLimits

0x18a0,	// (0x000205db) bg_vkb2_func_pane_cp01_ParamLimits

0x18a0,	// (0x000205db) bg_vkb2_func_pane_cp01

0xe773,	// (0x0002d4ae) cel_fep_hwr_func_pane_g1_ParamLimits

0xe773,	// (0x0002d4ae) cel_fep_hwr_func_pane_g1

0x18a0,	// (0x000205db) bg_vkb2_func_pane_cp02_ParamLimits

0x18a0,	// (0x000205db) bg_vkb2_func_pane_cp02

0xe773,	// (0x0002d4ae) cell_hwr_side_button_pane_g1_ParamLimits

0xe773,	// (0x0002d4ae) cell_hwr_side_button_pane_g1

0x9b91,	// (0x000288cc) status_pane_g4_ParamLimits

0x9b91,	// (0x000288cc) status_pane_g4

0x9bab,	// (0x000288e6) status_pane_t1

0xc015,	// (0x0002ad50) form2_midp_gauge_slider_cont_pane

0xc01d,	// (0x0002ad58) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc02f,	// (0x0002ad6a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc041,	// (0x0002ad7c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002e83a) form2_midp_gauge_slider_pane_t_ParamLimits

0xc053,	// (0x0002ad8e) form2_midp_slider_pane_ParamLimits

0x9096,	// (0x00027dd1) aid_size_cell_func_vkb2_ParamLimits

0x9096,	// (0x00027dd1) aid_size_cell_func_vkb2

0xe714,	// (0x0002d44f) slider_pane_g4_ParamLimits

0xe714,	// (0x0002d44f) slider_pane_g4

0x977a,	// (0x000284b5) form2_midp_gauge_slider_pane_t2_cp01

0x9788,	// (0x000284c3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9788,	// (0x000284c3) form2_midp_gauge_slider_pane_t3_cp01

0x97a5,	// (0x000284e0) form2_midp_slider_pane_cp01

0x16ec,	// (0x00020427) navi_smil_pane

0xe7ac,	// (0x0002d4e7) navi_smil_pane_g1

0xe7b4,	// (0x0002d4ef) navi_smil_pane_t1

0xe781,	// (0x0002d4bc) form2_midp_slider_pane_g1

0xe78a,	// (0x0002d4c5) form2_midp_slider_pane_g2

0xe792,	// (0x0002d4cd) form2_midp_slider_pane_g3

0xe781,	// (0x0002d4bc) form2_midp_slider_pane_g4

0xe79a,	// (0x0002d4d5) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002eb5d) form2_midp_slider_pane_g

0x976a,	// (0x000284a5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x976a,	// (0x000284a5) vkb2_area_bottom_space_btn_pane_g4

0x8605,	// (0x00027340) lc0_navi_pane_ParamLimits

0x8605,	// (0x00027340) lc0_navi_pane

0x867b,	// (0x000273b6) lc0_stat_indi_pane_ParamLimits

0x867b,	// (0x000273b6) lc0_stat_indi_pane

0x8692,	// (0x000273cd) ls0_title_pane_ParamLimits

0x8692,	// (0x000273cd) ls0_title_pane

0x1b86,	// (0x000208c1) bg_popup_sub_pane_cp14_ParamLimits

0xdbcc,	// (0x0002c907) list_uniindi_pane_ParamLimits

0xdbd8,	// (0x0002c913) uniindi_top_pane_ParamLimits

0xdc73,	// (0x0002c9ae) list_single_uniindi_pane_g1_ParamLimits

0xdc86,	// (0x0002c9c1) list_single_uniindi_pane_t1_ParamLimits

0x97ae,	// (0x000284e9) lc0_stat_clock_pane_ParamLimits

0x97ae,	// (0x000284e9) lc0_stat_clock_pane

0xe7c2,	// (0x0002d4fd) lc0_stat_indi_pane_g1_ParamLimits

0xe7c2,	// (0x0002d4fd) lc0_stat_indi_pane_g1

0xe7cf,	// (0x0002d50a) lc0_stat_indi_pane_g2_ParamLimits

0xe7cf,	// (0x0002d50a) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002eb68) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002eb68) lc0_stat_indi_pane_g

0x97bb,	// (0x000284f6) lc0_uni_indicator_pane_ParamLimits

0x97bb,	// (0x000284f6) lc0_uni_indicator_pane

0xe7dc,	// (0x0002d517) ls0_title_pane_g1_ParamLimits

0xe7dc,	// (0x0002d517) ls0_title_pane_g1

0xe7f0,	// (0x0002d52b) ls0_title_pane_t1_ParamLimits

0xe7f0,	// (0x0002d52b) ls0_title_pane_t1

0x97c8,	// (0x00028503) lc0_uni_indicator_pane_g1_ParamLimits

0x97c8,	// (0x00028503) lc0_uni_indicator_pane_g1

0xe826,	// (0x0002d561) lc0_stat_clock_pane_t1

0x16ec,	// (0x00020427) main_ai5_pane

0xe834,	// (0x0002d56f) ai5_sk_pane_ParamLimits

0xe834,	// (0x0002d56f) ai5_sk_pane

0xe841,	// (0x0002d57c) cell_ai5_widget_pane_ParamLimits

0xe841,	// (0x0002d57c) cell_ai5_widget_pane

0xe8f3,	// (0x0002d62e) aid_size_cell_widget_grid

0xe901,	// (0x0002d63c) bg_ai5_widget_pane_ParamLimits

0xe901,	// (0x0002d63c) bg_ai5_widget_pane

0xe975,	// (0x0002d6b0) cell_ai5_widget_pane_g2

0xe985,	// (0x0002d6c0) cell_ai5_widget_pane_g3

0xe99c,	// (0x0002d6d7) cell_ai5_widget_pane_g4

0xe9a8,	// (0x0002d6e3) cell_ai5_widget_pane_g5

0xe9b4,	// (0x0002d6ef) cell_ai5_widget_pane_g6

0xe9c0,	// (0x0002d6fb) cell_ai5_widget_pane_g7

0xea08,	// (0x0002d743) cell_ai5_widget_pane_t1_ParamLimits

0xea08,	// (0x0002d743) cell_ai5_widget_pane_t1

0xea25,	// (0x0002d760) cell_ai5_widget_pane_t2_ParamLimits

0xea25,	// (0x0002d760) cell_ai5_widget_pane_t2

0xea3d,	// (0x0002d778) cell_ai5_widget_pane_t3_ParamLimits

0xea3d,	// (0x0002d778) cell_ai5_widget_pane_t3

0xea55,	// (0x0002d790) cell_ai5_widget_pane_t4_ParamLimits

0xea55,	// (0x0002d790) cell_ai5_widget_pane_t4

0xea72,	// (0x0002d7ad) cell_ai5_widget_pane_t5_ParamLimits

0xea72,	// (0x0002d7ad) cell_ai5_widget_pane_t5

0xea91,	// (0x0002d7cc) cell_ai5_widget_pane_t6_ParamLimits

0xea91,	// (0x0002d7cc) cell_ai5_widget_pane_t6

0xeaa3,	// (0x0002d7de) cell_ai5_widget_pane_t7_ParamLimits

0xeaa3,	// (0x0002d7de) cell_ai5_widget_pane_t7

0xeabc,	// (0x0002d7f7) cell_ai5_widget_pane_t8_ParamLimits

0xeabc,	// (0x0002d7f7) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002eb82) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002eb82) cell_ai5_widget_pane_t

0xeb10,	// (0x0002d84b) grid_ai5_widget_pane

0x1b86,	// (0x000208c1) highlight_cell_ai5_widget_pane_ParamLimits

0x1b86,	// (0x000208c1) highlight_cell_ai5_widget_pane

0xeb1e,	// (0x0002d859) ai5_sk_left_pane

0xeb28,	// (0x0002d863) ai5_sk_middle_pane

0xeb32,	// (0x0002d86d) ai5_sk_right_pane

0xeb3c,	// (0x0002d877) bg_ai5_widget_pane_g1_ParamLimits

0xeb3c,	// (0x0002d877) bg_ai5_widget_pane_g1

0xeb48,	// (0x0002d883) bg_ai5_widget_pane_g2_ParamLimits

0xeb48,	// (0x0002d883) bg_ai5_widget_pane_g2

0xeb54,	// (0x0002d88f) bg_ai5_widget_pane_g3_ParamLimits

0xeb54,	// (0x0002d88f) bg_ai5_widget_pane_g3

0xeb60,	// (0x0002d89b) bg_ai5_widget_pane_g4_ParamLimits

0xeb60,	// (0x0002d89b) bg_ai5_widget_pane_g4

0xeb6c,	// (0x0002d8a7) bg_ai5_widget_pane_g5_ParamLimits

0xeb6c,	// (0x0002d8a7) bg_ai5_widget_pane_g5

0xeb78,	// (0x0002d8b3) bg_ai5_widget_pane_g6_ParamLimits

0xeb78,	// (0x0002d8b3) bg_ai5_widget_pane_g6

0xeb84,	// (0x0002d8bf) bg_ai5_widget_pane_g7_ParamLimits

0xeb84,	// (0x0002d8bf) bg_ai5_widget_pane_g7

0xeb90,	// (0x0002d8cb) bg_ai5_widget_pane_g8_ParamLimits

0xeb90,	// (0x0002d8cb) bg_ai5_widget_pane_g8

0xeb9c,	// (0x0002d8d7) bg_ai5_widget_pane_g9_ParamLimits

0xeb9c,	// (0x0002d8d7) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002eb97) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002eb97) bg_ai5_widget_pane_g

0xebce,	// (0x0002d909) cell_shortcut_ai5_widget_pane_ParamLimits

0xebce,	// (0x0002d909) cell_shortcut_ai5_widget_pane

0x7940,	// (0x0002667b) bg_cell_shortcut_ai5_widget_pane

0xebdf,	// (0x0002d91a) cell_grid_ai5_widget_pane_g1

0x7940,	// (0x0002667b) highlight_cell_shortcut_ai5_widget_pane

0x9d1d,	// (0x00028a58) ai5_sk_left_pane_g1

0xebe8,	// (0x0002d923) ai5_sk_left_pane_g2

0xebf0,	// (0x0002d92b) ai5_sk_left_pane_g3

0xebf8,	// (0x0002d933) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002ebaa) ai5_sk_left_pane_g

0xec00,	// (0x0002d93b) ai5_sk_left_pane_t1

0x9d15,	// (0x00028a50) ai5_sk_right_pane_g1

0xec0e,	// (0x0002d949) ai5_sk_right_pane_g2

0xec16,	// (0x0002d951) ai5_sk_right_pane_g3

0xec1e,	// (0x0002d959) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002ebb3) ai5_sk_right_pane_g

0xec26,	// (0x0002d961) ai5_sk_right_pane_t1

0x9d15,	// (0x00028a50) ai5_sk_middle_pane_g1

0x9d1d,	// (0x00028a58) ai5_sk_middle_pane_g2

0x9d35,	// (0x00028a70) ai5_sk_middle_pane_g3

0xec16,	// (0x0002d951) ai5_sk_middle_pane_g4

0xebf0,	// (0x0002d92b) ai5_sk_middle_pane_g5

0xec34,	// (0x0002d96f) ai5_sk_middle_pane_g6

0xec3c,	// (0x0002d977) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002ebbc) ai5_sk_middle_pane_g

0x848b,	// (0x000271c6) aid_touch_area_size_lc0_ParamLimits

0x848b,	// (0x000271c6) aid_touch_area_size_lc0

0x8e84,	// (0x00027bbf) cell_hwr_candidate_pane_t1_ParamLimits

0x84a7,	// (0x000271e2) aid_touch_navi_pane

0x9b3b,	// (0x00028876) status_dt_navi_pane_ParamLimits

0x9b3b,	// (0x00028876) status_dt_navi_pane

0x9b48,	// (0x00028883) status_dt_sta_pane_ParamLimits

0x9b48,	// (0x00028883) status_dt_sta_pane

0xec44,	// (0x0002d97f) dt_sta_controll_pane

0xec51,	// (0x0002d98c) dt_sta_indi_pane

0xec62,	// (0x0002d99d) dt_sta_title_pane

0x18a0,	// (0x000205db) bg_dt_sta_indi_pane_ParamLimits

0x18a0,	// (0x000205db) bg_dt_sta_indi_pane

0xec75,	// (0x0002d9b0) dt_sta_battery_pane

0xec7d,	// (0x0002d9b8) dt_sta_indi_pane_g1

0xec86,	// (0x0002d9c1) dt_sta_indi_pane_g2

0xec8f,	// (0x0002d9ca) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002ebcb) dt_sta_indi_pane_g

0xec98,	// (0x0002d9d3) dt_sta_signal_pane

0x1b86,	// (0x000208c1) bg_dt_sta_title_pane_ParamLimits

0x1b86,	// (0x000208c1) bg_dt_sta_title_pane

0xab43,	// (0x0002987e) dt_sta_title_pane_g1

0xeca1,	// (0x0002d9dc) dt_sta_title_pane_t1_ParamLimits

0xeca1,	// (0x0002d9dc) dt_sta_title_pane_t1

0x16ec,	// (0x00020427) bg_dt_sta_control_pane

0xecb6,	// (0x0002d9f1) dt_sta_controll_pane_g1

0xecbf,	// (0x0002d9fa) bg_dt_sta_title_pane_g1

0xecc8,	// (0x0002da03) bg_dt_sta_title_pane_g2

0xecd1,	// (0x0002da0c) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002ebd2) bg_dt_sta_title_pane_g

0xc2da,	// (0x0002b015) bg_dt_sta_indi_pane_g1

0xecda,	// (0x0002da15) dt_sta_signal_pane_g1

0xece2,	// (0x0002da1d) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002ebd9) dt_sta_signal_pane_g

0xecea,	// (0x0002da25) dt_sta_battery_pane_g1

0xecf3,	// (0x0002da2e) dt_sta_battery_pane_t1

0xc2da,	// (0x0002b015) bg_dt_sta_control_pane_g1

0x3b43,	// (0x0002287e) fep_china_uni_eep_pane

0x3b4b,	// (0x00022886) fep_china_uni_entry_pane_ParamLimits

0x3b5b,	// (0x00022896) popup_fep_china_uni_window_g1_ParamLimits

0x3b6b,	// (0x000228a6) popup_fep_china_uni_window_g2_ParamLimits

0x3b6b,	// (0x000228a6) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0002e44e) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0002e44e) popup_fep_china_uni_window_g

0xed02,	// (0x0002da3d) fep_china_uni_eep_pane_g1

0xed0a,	// (0x0002da45) fep_china_uni_eep_pane_t1

0xe7a3,	// (0x0002d4de) aid_touch_area_size_smil_player

0x85fd,	// (0x00027338) lc0_clock_pane

0x9b9f,	// (0x000288da) status_pane_g5_ParamLimits

0x9b9f,	// (0x000288da) status_pane_g5

0x803f,	// (0x00026d7a) popup_keymap_window

0x9b5d,	// (0x00028898) status_icon_pane

0xe985,	// (0x0002d6c0) cell_ai5_widget_pane_g3_ParamLimits

0xe99c,	// (0x0002d6d7) cell_ai5_widget_pane_g4_ParamLimits

0xe9a8,	// (0x0002d6e3) cell_ai5_widget_pane_g5_ParamLimits

0xe9cc,	// (0x0002d707) cell_ai5_widget_pane_g8_ParamLimits

0xe9cc,	// (0x0002d707) cell_ai5_widget_pane_g8

0xe9e0,	// (0x0002d71b) cell_ai5_widget_pane_g9_ParamLimits

0xe9e0,	// (0x0002d71b) cell_ai5_widget_pane_g9

0xe9f4,	// (0x0002d72f) cell_ai5_widget_pane_g10_ParamLimits

0xe9f4,	// (0x0002d72f) cell_ai5_widget_pane_g10

0xed19,	// (0x0002da54) status_icon_pane_g1

0x16ec,	// (0x00020427) bg_popup_sub_pane_cp13

0xed21,	// (0x0002da5c) popup_keymap_window_t1

0x7d2b,	// (0x00026a66) control_pane_g6_ParamLimits

0x7d2b,	// (0x00026a66) control_pane_g6

0x7d38,	// (0x00026a73) control_pane_g7_ParamLimits

0x7d38,	// (0x00026a73) control_pane_g7

0x7d45,	// (0x00026a80) control_pane_g8_ParamLimits

0x7d45,	// (0x00026a80) control_pane_g8

0xec44,	// (0x0002d97f) dt_sta_controll_pane_ParamLimits

0xec51,	// (0x0002d98c) dt_sta_indi_pane_ParamLimits

0xec62,	// (0x0002d99d) dt_sta_title_pane_ParamLimits

0x1a73,	// (0x000207ae) aid_size_touch_scroll_bar_cale

0x66db,	// (0x00025416) popup_discreet_window_ParamLimits

0x66db,	// (0x00025416) popup_discreet_window

0x6755,	// (0x00025490) popup_sk_window

0xa387,	// (0x000290c2) bg_popup_sub_pane_cp28_ParamLimits

0xa387,	// (0x000290c2) bg_popup_sub_pane_cp28

0xed2f,	// (0x0002da6a) popup_discreet_window_g1_ParamLimits

0xed2f,	// (0x0002da6a) popup_discreet_window_g1

0xed4f,	// (0x0002da8a) popup_discreet_window_t1_ParamLimits

0xed4f,	// (0x0002da8a) popup_discreet_window_t1

0xed6d,	// (0x0002daa8) popup_discreet_window_t2_ParamLimits

0xed6d,	// (0x0002daa8) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002ebde) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002ebde) popup_discreet_window_t

0x97dc,	// (0x00028517) popup_sk_window_g1

0x97e6,	// (0x00028521) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002ebe5) popup_sk_window_g

0x97ee,	// (0x00028529) popup_sk_window_t1

0x97fc,	// (0x00028537) popup_sk_window_t1_copy1

0xe975,	// (0x0002d6b0) cell_ai5_widget_pane_g2_ParamLimits

0xeace,	// (0x0002d809) cell_ai5_widget_pane_t9_ParamLimits

0xeace,	// (0x0002d809) cell_ai5_widget_pane_t9

0x16ec,	// (0x00020427) main_fep_fshwr2_pane

0x980a,	// (0x00028545) aid_fshwr2_btn_pane

0x9816,	// (0x00028551) aid_fshwr2_syb_pane

0x9827,	// (0x00028562) aid_fshwr2_txt_pane

0x9833,	// (0x0002856e) fshwr2_func_candi_pane

0x984b,	// (0x00028586) fshwr2_hwr_syb_pane

0x9862,	// (0x0002859d) fshwr2_icf_pane

0x16ec,	// (0x00020427) fshwr2_icf_bg_pane

0x988b,	// (0x000285c6) fshwr2_icf_pane_t1_ParamLimits

0x988b,	// (0x000285c6) fshwr2_icf_pane_t1

0x3a2c,	// (0x00022767) fshwr2_func_candi_pane_g1

0xedbf,	// (0x0002dafa) fshwr2_func_candi_row_pane_ParamLimits

0xedbf,	// (0x0002dafa) fshwr2_func_candi_row_pane

0x98a4,	// (0x000285df) cell_fshwr2_syb_pane_ParamLimits

0x98a4,	// (0x000285df) cell_fshwr2_syb_pane

0xc54a,	// (0x0002b285) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) fshwr2_hwr_syb_pane_g1

0x16ec,	// (0x00020427) bg_popup_call_pane_cp01

0x98ba,	// (0x000285f5) fshwr2_func_candi_cell_pane_ParamLimits

0x98ba,	// (0x000285f5) fshwr2_func_candi_cell_pane

0xa9e3,	// (0x0002971e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e3,	// (0x0002971e) fshwr2_func_candi_cell_bg_pane

0x9905,	// (0x00028640) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9905,	// (0x00028640) fshwr2_func_candi_cell_pane_g1

0x992d,	// (0x00028668) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x992d,	// (0x00028668) fshwr2_func_candi_cell_pane_t1

0x16ec,	// (0x00020427) bg_button_pane_cp08

0xedcf,	// (0x0002db0a) cell_fshwr2_syb_bg_pane

0x9940,	// (0x0002867b) cell_fshwr2_syb_bg_pane_g1

0x9948,	// (0x00028683) cell_fshwr2_syb_bg_pane_t1

0x1b86,	// (0x000208c1) main_tmo_pane

0xae7c,	// (0x00029bb7) uni_indicator_pane_g1_ParamLimits

0xae8f,	// (0x00029bca) uni_indicator_pane_g2_ParamLimits

0xaea1,	// (0x00029bdc) uni_indicator_pane_g3_ParamLimits

0xaeb0,	// (0x00029beb) uni_indicator_pane_g4_ParamLimits

0xaeb0,	// (0x00029beb) uni_indicator_pane_g4

0xaec4,	// (0x00029bff) uni_indicator_pane_g5_ParamLimits

0xaec4,	// (0x00029bff) uni_indicator_pane_g5

0xaec4,	// (0x00029bff) uni_indicator_pane_g6_ParamLimits

0xaec4,	// (0x00029bff) uni_indicator_pane_g6

0xf912,	// (0x0002e64d) uni_indicator_pane_g_ParamLimits

0xd7c4,	// (0x0002c4ff) popup_tmo_note_window_ParamLimits

0xd7c4,	// (0x0002c4ff) popup_tmo_note_window

0x1b86,	// (0x000208c1) fshwr2_bg_pane

0x991e,	// (0x00028659) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x991e,	// (0x00028659) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002ebea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002ebea) fshwr2_func_candi_cell_pane_g

0xc2da,	// (0x0002b015) bg_popup_window_pane_cp01

0x9957,	// (0x00028692) bg_popup_window_pane_g1_cp01

0xedd7,	// (0x0002db12) bg_popup_window_pane_cp22_ParamLimits

0xedd7,	// (0x0002db12) bg_popup_window_pane_cp22

0xede5,	// (0x0002db20) listscroll_tmo_link_pane_ParamLimits

0xede5,	// (0x0002db20) listscroll_tmo_link_pane

0xee25,	// (0x0002db60) popup_tmo_note_window_g1_ParamLimits

0xee25,	// (0x0002db60) popup_tmo_note_window_g1

0xee32,	// (0x0002db6d) tmo_note_info_pane_ParamLimits

0xee32,	// (0x0002db6d) tmo_note_info_pane

0xee4c,	// (0x0002db87) list_tmo_note_info_pane_g1_ParamLimits

0xee4c,	// (0x0002db87) list_tmo_note_info_pane_g1

0xee63,	// (0x0002db9e) list_tmo_note_info_pane_g2_ParamLimits

0xee63,	// (0x0002db9e) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002ebef) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002ebef) list_tmo_note_info_pane_g

0xee7f,	// (0x0002dbba) list_tmo_note_info_text_pane_ParamLimits

0xee7f,	// (0x0002dbba) list_tmo_note_info_text_pane

0xef00,	// (0x0002dc3b) list_tmo_link_pane

0xef0d,	// (0x0002dc48) scroll_pane_cp20

0xef1a,	// (0x0002dc55) list_single_tmo_link_pane_ParamLimits

0xef1a,	// (0x0002dc55) list_single_tmo_link_pane

0xef2a,	// (0x0002dc65) list_single_tmo_link_pane_t1

0xef38,	// (0x0002dc73) list_tmo_note_info_text_pane_t1_ParamLimits

0xef38,	// (0x0002dc73) list_tmo_note_info_text_pane_t1

0x6e23,	// (0x00025b5e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6e23,	// (0x00025b5e) aid_size_touch_scroll_bar_cp01

0x58ae,	// (0x000245e9) aid_size_touch_slider_marker

0x673d,	// (0x00025478) popup_settings_window_ParamLimits

0x673d,	// (0x00025478) popup_settings_window

0x5a73,	// (0x000247ae) popup_candi_list_indi_window

0x84a7,	// (0x000271e2) aid_touch_navi_pane_ParamLimits

0x8fef,	// (0x00027d2a) rs_clock_indi_pane

0x8ff8,	// (0x00027d33) sctrl_sk_bottom_pane_ParamLimits

0x9009,	// (0x00027d44) sctrl_sk_top_pane_ParamLimits

0x90f0,	// (0x00027e2b) popup_fep_tooltip_window

0xe8f3,	// (0x0002d62e) aid_size_cell_widget_grid_ParamLimits

0xe960,	// (0x0002d69b) cell_ai5_widget_pane_g1_ParamLimits

0xe960,	// (0x0002d69b) cell_ai5_widget_pane_g1

0xe9b4,	// (0x0002d6ef) cell_ai5_widget_pane_g6_ParamLimits

0xe9c0,	// (0x0002d6fb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002eb6d) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002eb6d) cell_ai5_widget_pane_g

0xeaf2,	// (0x0002d82d) cell_ai5_widget_pane_t10_ParamLimits

0xeaf2,	// (0x0002d82d) cell_ai5_widget_pane_t10

0xeb10,	// (0x0002d84b) grid_ai5_widget_pane_ParamLimits

0xeba8,	// (0x0002d8e3) cell_contacts_ai5_widget_pane_ParamLimits

0xeba8,	// (0x0002d8e3) cell_contacts_ai5_widget_pane

0xed82,	// (0x0002dabd) popup_discreet_window_t3_ParamLimits

0xed82,	// (0x0002dabd) popup_discreet_window_t3

0x9877,	// (0x000285b2) popup_fshwr2_char_preview_window_ParamLimits

0x9877,	// (0x000285b2) popup_fshwr2_char_preview_window

0xee9d,	// (0x0002dbd8) tmo_note_info_pane_t1

0xeeb2,	// (0x0002dbed) tmo_note_info_pane_t2

0xeec7,	// (0x0002dc02) tmo_note_info_pane_t3

0xeedc,	// (0x0002dc17) tmo_note_info_pane_t4

0xeeee,	// (0x0002dc29) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002ebf4) tmo_note_info_pane_t

0xef00,	// (0x0002dc3b) list_tmo_link_pane_ParamLimits

0xef0d,	// (0x0002dc48) scroll_pane_cp20_ParamLimits

0x16ec,	// (0x00020427) bg_popup_fep_char_preview_window_cp01

0xef51,	// (0x0002dc8c) popup_fshwr2_char_preview_window_t1

0xef5f,	// (0x0002dc9a) popup_candi_list_indi_window_g1

0xef68,	// (0x0002dca3) bg_cell_contacts_ai5_widget_pane

0xef74,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_g1

0xc9cd,	// (0x0002b708) cell_contacts_ai5_widget_pane_g2

0xef89,	// (0x0002dcc4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002ebff) cell_contacts_ai5_widget_pane_g

0xef95,	// (0x0002dcd0) cell_contacts_ai5_widget_pane_t1

0x1b86,	// (0x000208c1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf00c,	// (0x0002dd47) settings_container_pane

0x7940,	// (0x0002667b) listscroll_set_pane_copy1

0xb9dd,	// (0x0002a718) scroll_pane_cp121_copy1

0xa140,	// (0x00028e7b) set_content_pane_copy1

0xf018,	// (0x0002dd53) aid_height_set_list_copy1_ParamLimits

0xf018,	// (0x0002dd53) aid_height_set_list_copy1

0xb0bc,	// (0x00029df7) aid_size_parent_copy1_ParamLimits

0xb0bc,	// (0x00029df7) aid_size_parent_copy1

0xf024,	// (0x0002dd5f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf024,	// (0x0002dd5f) button_value_adjust_pane_cp6_copy1

0x7eaa,	// (0x00026be5) list_highlight_pane_cp2_copy1_ParamLimits

0x7eaa,	// (0x00026be5) list_highlight_pane_cp2_copy1

0xf038,	// (0x0002dd73) list_set_pane_copy1_ParamLimits

0xf038,	// (0x0002dd73) list_set_pane_copy1

0xefa7,	// (0x0002dce2) main_pane_set_t1_copy1_ParamLimits

0xefa7,	// (0x0002dce2) main_pane_set_t1_copy1

0xefe1,	// (0x0002dd1c) main_pane_set_t2_copy1_ParamLimits

0xefe1,	// (0x0002dd1c) main_pane_set_t2_copy1

0xf0e5,	// (0x0002de20) main_pane_set_t3_copy1

0xf0f3,	// (0x0002de2e) main_pane_set_t4_copy1

0xf000,	// (0x0002dd3b) set_content_pane_g1_copy1_ParamLimits

0xf000,	// (0x0002dd3b) set_content_pane_g1_copy1

0xf101,	// (0x0002de3c) setting_code_pane_copy1

0xf109,	// (0x0002de44) setting_slider_graphic_pane_copy1

0xf109,	// (0x0002de44) setting_slider_pane_copy1

0xf109,	// (0x0002de44) setting_text_pane_copy1

0xf109,	// (0x0002de44) setting_volume_pane_copy1

0xf101,	// (0x0002de3c) settings_code_pane_cp2_copy1

0xf111,	// (0x0002de4c) settings_code_pane_cp_copy1_ParamLimits

0xf111,	// (0x0002de4c) settings_code_pane_cp_copy1

0x9960,	// (0x0002869b) volume_set_pane_copy1

0xf125,	// (0x0002de60) volume_set_pane_g10_copy1

0xf12d,	// (0x0002de68) volume_set_pane_g1_copy1

0xf135,	// (0x0002de70) volume_set_pane_g2_copy1

0xf13d,	// (0x0002de78) volume_set_pane_g3_copy1

0xf145,	// (0x0002de80) volume_set_pane_g4_copy1

0xf14d,	// (0x0002de88) volume_set_pane_g5_copy1

0xf155,	// (0x0002de90) volume_set_pane_g6_copy1

0xf15d,	// (0x0002de98) volume_set_pane_g7_copy1

0xf165,	// (0x0002dea0) volume_set_pane_g8_copy1

0xf16d,	// (0x0002dea8) volume_set_pane_g9_copy1

0x175c,	// (0x00020497) bg_set_opt_pane_cp_copy1_ParamLimits

0x175c,	// (0x00020497) bg_set_opt_pane_cp_copy1

0x9968,	// (0x000286a3) setting_slider_pane_t1_copy1_ParamLimits

0x9968,	// (0x000286a3) setting_slider_pane_t1_copy1

0x9986,	// (0x000286c1) setting_slider_pane_t2_copy1_ParamLimits

0x9986,	// (0x000286c1) setting_slider_pane_t2_copy1

0x99a0,	// (0x000286db) setting_slider_pane_t3_copy1_ParamLimits

0x99a0,	// (0x000286db) setting_slider_pane_t3_copy1

0x99b8,	// (0x000286f3) slider_set_pane_copy1_ParamLimits

0x99b8,	// (0x000286f3) slider_set_pane_copy1

0x1c4c,	// (0x00020987) set_opt_bg_pane_g1_copy2

0x1c54,	// (0x0002098f) set_opt_bg_pane_g2_copy2

0xf175,	// (0x0002deb0) set_opt_bg_pane_g3_copy2

0x1c64,	// (0x0002099f) set_opt_bg_pane_g4_copy2

0x1c6c,	// (0x000209a7) set_opt_bg_pane_g5_copy2

0x1c74,	// (0x000209af) set_opt_bg_pane_g6_copy2

0xf17f,	// (0x0002deba) set_opt_bg_pane_g7_copy2

0xf187,	// (0x0002dec2) set_opt_bg_pane_g8_copy2

0xf191,	// (0x0002decc) set_opt_bg_pane_g9_copy2

0x99ce,	// (0x00028709) aid_size_touch_slider_mark_copy1_ParamLimits

0x99ce,	// (0x00028709) aid_size_touch_slider_mark_copy1

0xf19b,	// (0x0002ded6) slider_set_pane_g1_copy1

0x99e2,	// (0x0002871d) slider_set_pane_g2_copy1

0x8a8a,	// (0x000277c5) slider_set_pane_g3_copy1_ParamLimits

0x8a8a,	// (0x000277c5) slider_set_pane_g3_copy1

0x8a9e,	// (0x000277d9) slider_set_pane_g4_copy1_ParamLimits

0x8a9e,	// (0x000277d9) slider_set_pane_g4_copy1

0x8ab6,	// (0x000277f1) slider_set_pane_g5_copy1_ParamLimits

0x8ab6,	// (0x000277f1) slider_set_pane_g5_copy1

0x8a8a,	// (0x000277c5) slider_set_pane_g6_copy1_ParamLimits

0x8a8a,	// (0x000277c5) slider_set_pane_g6_copy1

0x99ea,	// (0x00028725) slider_set_pane_g7_copy1_ParamLimits

0x99ea,	// (0x00028725) slider_set_pane_g7_copy1

0x1700,	// (0x0002043b) bg_set_opt_pane_cp2_copy1

0xf1a4,	// (0x0002dedf) setting_slider_graphic_pane_g1_copy1

0xf1ad,	// (0x0002dee8) setting_slider_graphic_pane_t1_copy1

0xf1bd,	// (0x0002def8) setting_slider_graphic_pane_t2_copy1

0xf1cd,	// (0x0002df08) slider_set_pane_cp_copy1

0xf1dd,	// (0x0002df18) input_focus_pane_cp1_copy1

0xf1e6,	// (0x0002df21) list_set_text_pane_copy1

0xf1ee,	// (0x0002df29) setting_text_pane_g1_copy1

0x6434,	// (0x0002516f) set_text_pane_t1_copy1

0xf1dd,	// (0x0002df18) input_focus_pane_cp2_copy1

0xf1ee,	// (0x0002df29) setting_code_pane_g1_copy1

0xf1f7,	// (0x0002df32) setting_code_pane_t1_copy1

0xf205,	// (0x0002df40) list_set_graphic_pane_copy1

0x1700,	// (0x0002043b) bg_set_opt_pane_cp4_copy1

0x764b,	// (0x00026386) list_set_graphic_pane_g1_copy1_ParamLimits

0x764b,	// (0x00026386) list_set_graphic_pane_g1_copy1

0xf219,	// (0x0002df54) list_set_graphic_pane_g2_copy1

0x7663,	// (0x0002639e) list_set_graphic_pane_t1_copy1_ParamLimits

0x7663,	// (0x0002639e) list_set_graphic_pane_t1_copy1

0xc2da,	// (0x0002b015) rs_clock_indi_pane_g1

0xf221,	// (0x0002df5c) rs_clock_indi_pane_t1

0xf22f,	// (0x0002df6a) rs_indi_pane

0xf237,	// (0x0002df72) rs_indi_pane_g1

0xf240,	// (0x0002df7b) rs_indi_pane_g2

0xef5f,	// (0x0002dc9a) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002ec06) rs_indi_pane_g

0x7940,	// (0x0002667b) bg_popup_preview_window_pane_cp03

0xf249,	// (0x0002df84) popup_fep_tooltip_window_t1

0xcf75,	// (0x0002bcb0) popup_note2_window_g2_ParamLimits

0xcf75,	// (0x0002bcb0) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0002e9a6) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0002e9a6) popup_note2_window_g

0xd462,	// (0x0002c19d) bg_popup_sub_pane_cp11_ParamLimits

0xd46f,	// (0x0002c1aa) cell_ai3_links_pane_g1_ParamLimits

0xd486,	// (0x0002c1c1) cell_ai3_links_pane_t1

0x6434,	// (0x0002516f) set_text_pane_t1_copy1_ParamLimits

0x7851,	// (0x0002658c) cell_graphic_popup_pane_cp2_ParamLimits

0x7851,	// (0x0002658c) cell_graphic_popup_pane_cp2

0xf257,	// (0x0002df92) cell_graphic_popup_pane_g1_cp2

0x19f6,	// (0x00020731) cell_graphic_popup_pane_g2_cp2

0xf25f,	// (0x0002df9a) cell_graphic_popup_pane_g3_cp2

0xf267,	// (0x0002dfa2) cell_graphic_popup_pane_t2_cp2

0x1a07,	// (0x00020742) grid_highlight_pane_cp3_cp2

0x388a,	// (0x000225c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1b86,	// (0x000208c1) main_tmo_pane_ParamLimits

0xd7b8,	// (0x0002c4f3) popup_tmo_big_image_note_window

0xe94f,	// (0x0002d68a) cell_ai5_widget_list_pane

0xe957,	// (0x0002d692) cell_ai5_widget_lrg_icon_pane

0xee9d,	// (0x0002dbd8) tmo_note_info_pane_t1_ParamLimits

0xeeb2,	// (0x0002dbed) tmo_note_info_pane_t2_ParamLimits

0xeec7,	// (0x0002dc02) tmo_note_info_pane_t3_ParamLimits

0xeedc,	// (0x0002dc17) tmo_note_info_pane_t4_ParamLimits

0xeeee,	// (0x0002dc29) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002ebf4) tmo_note_info_pane_t_ParamLimits

0xf00c,	// (0x0002dd47) settings_container_pane_ParamLimits

0xf1d5,	// (0x0002df10) indicator_popup_pane_cp5

0xf1d5,	// (0x0002df10) indicator_popup_pane_cp6

0xf205,	// (0x0002df40) list_set_graphic_pane_copy1_ParamLimits

0x16ec,	// (0x00020427) bg_popup_window_pane_cp23

0xf275,	// (0x0002dfb0) popup_tmo_big_image_note_window_g1

0xf27e,	// (0x0002dfb9) popup_tmo_big_image_note_window_t1

0xf28e,	// (0x0002dfc9) popup_tmo_big_image_note_window_t2

0xf29e,	// (0x0002dfd9) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002ec0d) popup_tmo_big_image_note_window_t

0xc2da,	// (0x0002b015) cell_ai5_widget_lrg_icon_pane_g1

0xf2ae,	// (0x0002dfe9) cell_ai5_widget_lrg_icon_pane_t1

0xf2bc,	// (0x0002dff7) cell_ai5_widget_list_row_pane_ParamLimits

0xf2bc,	// (0x0002dff7) cell_ai5_widget_list_row_pane

0xf2d3,	// (0x0002e00e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d3,	// (0x0002e00e) cell_ai5_widget_list_row_pane_g1

0xf2e0,	// (0x0002e01b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e0,	// (0x0002e01b) cell_ai5_widget_list_row_pane_t1

0xf30b,	// (0x0002e046) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30b,	// (0x0002e046) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0002ec14) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002ec14) cell_ai5_widget_list_row_pane_t

0x16ec,	// (0x00020427) main_fep_vtchi_ss_pane

0xf34f,	// (0x0002e08a) popup_fep_char_pre_window

0xf357,	// (0x0002e092) popup_fep_ituss_window

0xf378,	// (0x0002e0b3) popup_fep_vkbss_window

0xf3a2,	// (0x0002e0dd) grid_vkbss_keypad_pane_ParamLimits

0xf3a2,	// (0x0002e0dd) grid_vkbss_keypad_pane

0xf3b2,	// (0x0002e0ed) ituss_keypad_pane

0x9a0c,	// (0x00028747) aid_vkbss_key_offset_ParamLimits

0x9a0c,	// (0x00028747) aid_vkbss_key_offset

0x9a18,	// (0x00028753) cell_vkbss_key_pane_ParamLimits

0x9a18,	// (0x00028753) cell_vkbss_key_pane

0x9b79,	// (0x000288b4) bg_cell_vkbss_key_g1_ParamLimits

0x9b79,	// (0x000288b4) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0002e0fc) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0002e0fc) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0002e110) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0002e110) cell_vkbss_key_g1

0xf3e9,	// (0x0002e124) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0002e124) cell_vkbss_key_t1

0x9a2e,	// (0x00028769) cell_ituss_key_pane_ParamLimits

0x9a2e,	// (0x00028769) cell_ituss_key_pane

0xf414,	// (0x0002e14f) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0002e14f) bg_cell_ituss_key_g1

0xf420,	// (0x0002e15b) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0002e15b) cell_ituss_key_pane_g1

0x9a3f,	// (0x0002877a) cell_ituss_key_pane_g2_ParamLimits

0x9a3f,	// (0x0002877a) cell_ituss_key_pane_g2

0x0002,

0xfee0,	// (0x0002ec1b) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0002ec1b) cell_ituss_key_pane_g

0x9a6b,	// (0x000287a6) cell_ituss_key_t1_ParamLimits

0x9a6b,	// (0x000287a6) cell_ituss_key_t1

0x9aa5,	// (0x000287e0) cell_ituss_key_t2_ParamLimits

0x9aa5,	// (0x000287e0) cell_ituss_key_t2

0x9ad6,	// (0x00028811) cell_ituss_key_t3_ParamLimits

0x9ad6,	// (0x00028811) cell_ituss_key_t3

0x9aa5,	// (0x000287e0) cell_ituss_key_t4_ParamLimits

0x9aa5,	// (0x000287e0) cell_ituss_key_t4

0x0004,

0xfee7,	// (0x0002ec22) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002ec22) cell_ituss_key_t

0xf446,	// (0x0002e181) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0002e189) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0002e191) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef2,	// (0x0002ec2d) cell_vkbss_key_3p_pane_g

0x16ec,	// (0x00020427) bg_popup_fep_char_preview_window_cp02

0x9b19,	// (0x00028854) popup_fep_char_pre_window_t1

0xe8e9,	// (0x0002d624) main_ai5_sk_pane

0xef68,	// (0x0002dca3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef74,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9cd,	// (0x0002b708) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef89,	// (0x0002dcc4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002ebff) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef95,	// (0x0002dcd0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1b86,	// (0x000208c1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0002e199) main_ai5_sk_pane_g1

0xa1c8,	// (0x00028f03) popup_query_code_window_g1

0xf36d,	// (0x0002e0a8) popup_fep_vkb_icf_pane

0xf38c,	// (0x0002e0c7) popup_fep_vtchi_icf_pane

0xf467,	// (0x0002e1a2) bg_icf_pane

0xf473,	// (0x0002e1ae) list_vkb_icf_pane

0xf482,	// (0x0002e1bd) bg_icf_pane_cp01

0xf495,	// (0x0002e1d0) vtchi_icf_list_pane

0xf4a5,	// (0x0002e1e0) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0002e1e0) list_vkb_icf_pane_t1

0xf4bc,	// (0x0002e1f7) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0002e1f7) vtchi_icf_list_pane_t1

0xf357,	// (0x0002e092) popup_fep_ituss_window_ParamLimits

0xf38c,	// (0x0002e0c7) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0002e0ed) ituss_keypad_pane_ParamLimits

0x9a00,	// (0x0002873b) ituss_sks_pane

0xf467,	// (0x0002e1a2) bg_icf_pane_ParamLimits

0xf333,	// (0x0002e06e) icf_edit_indi_pane_ParamLimits

0xf333,	// (0x0002e06e) icf_edit_indi_pane

0xf473,	// (0x0002e1ae) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0002e1bd) bg_icf_pane_cp01_ParamLimits

0xf342,	// (0x0002e07d) icf_edit_indi_pane_cp01_ParamLimits

0xf342,	// (0x0002e07d) icf_edit_indi_pane_cp01

0xf49d,	// (0x0002e1d8) vtchi_query_pane

0xc54a,	// (0x0002b285) icf_edit_indi_pane_g1_ParamLimits

0xc54a,	// (0x0002b285) icf_edit_indi_pane_g1

0xf531,	// (0x0002e26c) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0002e26c) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002ec45) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002ec45) icf_edit_indi_pane_g

0xf540,	// (0x0002e27b) icf_edit_indi_pane_t1

0xf4da,	// (0x0002e215) bg_input_focus_pane_cp042

0x1a6a,	// (0x000207a5) vtchi_button_pane

0xf4e3,	// (0x0002e21e) vtchi_query_pane_t1

0xf4f1,	// (0x0002e22c) vtchi_query_pane_t2

0xf4ff,	// (0x0002e23a) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002ec34) vtchi_query_pane_t

0x16ec,	// (0x00020427) bg_button_pane_cp13

0xf50d,	// (0x0002e248) vtchi_button_pane_g1

0x9b28,	// (0x00028863) ituss_sks_pane_g1

0x9b33,	// (0x0002886e) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002ec3b) ituss_sks_pane_g

0xf515,	// (0x0002e250) ituss_sks_pane_t1

0xf523,	// (0x0002e25e) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002ec40) ituss_sks_pane_t

0xbd57,	// (0x0002aa92) indicator_nsta_pane_cp_g1

0xbd5f,	// (0x0002aa9a) indicator_nsta_pane_cp_g2

0xbd67,	// (0x0002aaa2) indicator_nsta_pane_cp_g3

0xbd57,	// (0x0002aa92) indicator_nsta_pane_cp_g4

0xbd5f,	// (0x0002aa9a) indicator_nsta_pane_cp_g5

0xbd67,	// (0x0002aaa2) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002e7f0) indicator_nsta_pane_cp_g

0xe4a9,	// (0x0002d1e4) cell_graphic2_pane_t2_ParamLimits

0xe4a9,	// (0x0002d1e4) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002eaf6) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002eaf6) cell_graphic2_pane_t

0xe4d6,	// (0x0002d211) cell_graphic2_control_pane_t1

0x72cb,	// (0x00026006) signal_pane_g3_ParamLimits

0x72cb,	// (0x00026006) signal_pane_g3

0x72dd,	// (0x00026018) signal_pane_g4_ParamLimits

0x72dd,	// (0x00026018) signal_pane_g4

0xf31d,	// (0x0002e058) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31d,	// (0x0002e058) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0002e16f) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0002e16f) cell_ituss_key_pane_t1

0x9e0f,	// (0x00028b4a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e0f,	// (0x00028b4a) form_field_data_wide_pane_vc_t2

0x9e23,	// (0x00028b5e) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e23,	// (0x00028b5e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0002e535) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0002e535) form_field_data_wide_pane_vc_t

0xba1f,	// (0x0002a75a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba1f,	// (0x0002a75a) form_field_slider_wide_pane_vc_t3

0xbafd,	// (0x0002a838) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbafd,	// (0x0002a838) form_field_popup_wide_pane_vc_t2

0xbb14,	// (0x0002a84f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb14,	// (0x0002a84f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0002e7df) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0002e7df) form_field_popup_wide_pane_vc_t

0x980a,	// (0x00028545) aid_fshwr2_btn_pane_ParamLimits

0x9816,	// (0x00028551) aid_fshwr2_syb_pane_ParamLimits

0x9827,	// (0x00028562) aid_fshwr2_txt_pane_ParamLimits

0x1b86,	// (0x000208c1) fshwr2_bg_pane_ParamLimits

0x9833,	// (0x0002856e) fshwr2_func_candi_pane_ParamLimits

0x984b,	// (0x00028586) fshwr2_hwr_syb_pane_ParamLimits

0x9862,	// (0x0002859d) fshwr2_icf_pane_ParamLimits

0x6023,	// (0x00024d5e) list_double_graphic_pane_vc_g4_ParamLimits

0x6023,	// (0x00024d5e) list_double_graphic_pane_vc_g4

0x9a5f,	// (0x0002879a) cell_ituss_key_pane_g3_ParamLimits

0x9a5f,	// (0x0002879a) cell_ituss_key_pane_g3

0x9b07,	// (0x00028842) cell_ituss_key_t5_ParamLimits

0x9b07,	// (0x00028842) cell_ituss_key_t5

0xf378,	// (0x0002e0b3) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
