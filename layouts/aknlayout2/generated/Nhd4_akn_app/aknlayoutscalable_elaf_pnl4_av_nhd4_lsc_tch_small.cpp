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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00025b63 };

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
0x98b3,	// (0x0002f416) Screen

0x98bf,	// (0x0002f422) application_window_ParamLimits

0x98bf,	// (0x0002f422) application_window

0xc84f,	// (0x000323b2) screen_g1

0x98f7,	// (0x0002f45a) area_bottom_pane_ParamLimits

0x98f7,	// (0x0002f45a) area_bottom_pane

0xf3df,	// (0x00034f42) area_top_pane_ParamLimits

0xf3df,	// (0x00034f42) area_top_pane

0xf473,	// (0x00034fd6) main_pane_ParamLimits

0xf473,	// (0x00034fd6) main_pane

0xc859,	// (0x000323bc) misc_graphics

0xb09b,	// (0x00030bfe) battery_pane_ParamLimits

0xb09b,	// (0x00030bfe) battery_pane

0x3715,	// (0x00029278) bg_status_flat_pane_g8

0x371d,	// (0x00029280) bg_status_flat_pane_g9

0x1760,	// (0x000272c3) context_pane_ParamLimits

0x1760,	// (0x000272c3) context_pane

0xb206,	// (0x00030d69) navi_pane_ParamLimits

0xb206,	// (0x00030d69) navi_pane

0xb284,	// (0x00030de7) signal_pane_ParamLimits

0xb284,	// (0x00030de7) signal_pane

0x0008,

0xf85e,	// (0x000353c1) bg_status_flat_pane_g

0xb314,	// (0x00030e77) status_pane_g1_ParamLimits

0xb314,	// (0x00030e77) status_pane_g1

0xb32a,	// (0x00030e8d) status_pane_g2_ParamLimits

0xb32a,	// (0x00030e8d) status_pane_g2

0x2d42,	// (0x000288a5) status_pane_g3_ParamLimits

0x2d42,	// (0x000288a5) status_pane_g3

0x0004,

0xf791,	// (0x000352f4) status_pane_g_ParamLimits

0xf791,	// (0x000352f4) status_pane_g

0xb336,	// (0x00030e99) title_pane_ParamLimits

0xb336,	// (0x00030e99) title_pane

0xb399,	// (0x00030efc) uni_indicator_pane_ParamLimits

0xb399,	// (0x00030efc) uni_indicator_pane

0x1019,	// (0x00026b7c) bg_list_pane_ParamLimits

0x1019,	// (0x00026b7c) bg_list_pane

0xec81,	// (0x000347e4) find_pane

0xa86f,	// (0x000303d2) listscroll_app_pane_ParamLimits

0xa86f,	// (0x000303d2) listscroll_app_pane

0x1045,	// (0x00026ba8) listscroll_form_pane

0xec89,	// (0x000347ec) listscroll_gen_pane_ParamLimits

0xec89,	// (0x000347ec) listscroll_gen_pane

0x104d,	// (0x00026bb0) listscroll_set_pane

0x4279,	// (0x00029ddc) main_idle_act_pane

0x0b02,	// (0x00026665) main_idle_trad_pane

0x0b02,	// (0x00026665) main_list_empty_pane

0x1067,	// (0x00026bca) main_midp_pane

0x1073,	// (0x00026bd6) main_pane_g1_ParamLimits

0x1073,	// (0x00026bd6) main_pane_g1

0xa87f,	// (0x000303e2) popup_ai_message_window_ParamLimits

0xa87f,	// (0x000303e2) popup_ai_message_window

0xa930,	// (0x00030493) popup_fep_china_uni_window_ParamLimits

0xa930,	// (0x00030493) popup_fep_china_uni_window

0xa98a,	// (0x000304ed) popup_fep_japan_candidate_window_ParamLimits

0xa98a,	// (0x000304ed) popup_fep_japan_candidate_window

0xa9a8,	// (0x0003050b) popup_fep_japan_predictive_window_ParamLimits

0xa9a8,	// (0x0003050b) popup_fep_japan_predictive_window

0xa9ba,	// (0x0003051d) popup_find_window

0xa9d7,	// (0x0003053a) popup_grid_graphic_window_ParamLimits

0xa9d7,	// (0x0003053a) popup_grid_graphic_window

0xaa75,	// (0x000305d8) popup_large_graphic_colour_window

0xaa9b,	// (0x000305fe) popup_menu_window_ParamLimits

0xaa9b,	// (0x000305fe) popup_menu_window

0xac6d,	// (0x000307d0) popup_note_image_window

0xac33,	// (0x00030796) popup_note_wait_window_ParamLimits

0xac33,	// (0x00030796) popup_note_wait_window

0xac85,	// (0x000307e8) popup_note_window_ParamLimits

0xac85,	// (0x000307e8) popup_note_window

0xad34,	// (0x00030897) popup_query_code_window_ParamLimits

0xad34,	// (0x00030897) popup_query_code_window

0xad6e,	// (0x000308d1) popup_query_data_code_window_ParamLimits

0xad6e,	// (0x000308d1) popup_query_data_code_window

0xad8b,	// (0x000308ee) popup_query_data_window_ParamLimits

0xad8b,	// (0x000308ee) popup_query_data_window

0xae0d,	// (0x00030970) popup_query_sat_info_window_ParamLimits

0xae0d,	// (0x00030970) popup_query_sat_info_window

0xaea4,	// (0x00030a07) popup_snote_single_graphic_window_ParamLimits

0xaea4,	// (0x00030a07) popup_snote_single_graphic_window

0xaea4,	// (0x00030a07) popup_snote_single_text_window_ParamLimits

0xaea4,	// (0x00030a07) popup_snote_single_text_window

0x14d7,	// (0x0002703a) popup_sub_window_general

0xb001,	// (0x00030b64) popup_window_general_ParamLimits

0xb001,	// (0x00030b64) popup_window_general

0x161c,	// (0x0002717f) power_save_pane

0xa6cd,	// (0x00030230) control_pane_g1_ParamLimits

0xa6cd,	// (0x00030230) control_pane_g1

0xa6f6,	// (0x00030259) control_pane_g2_ParamLimits

0xa6f6,	// (0x00030259) control_pane_g2

0x0ebc,	// (0x00026a1f) control_pane_g3_ParamLimits

0x0ebc,	// (0x00026a1f) control_pane_g3

0x0007,

0xf779,	// (0x000352dc) control_pane_g_ParamLimits

0xf779,	// (0x000352dc) control_pane_g

0xa75e,	// (0x000302c1) control_pane_t1_ParamLimits

0xa75e,	// (0x000302c1) control_pane_t1

0xa7c4,	// (0x00030327) control_pane_t2_ParamLimits

0xa7c4,	// (0x00030327) control_pane_t2

0x0002,

0xf78a,	// (0x000352ed) control_pane_t_ParamLimits

0xf78a,	// (0x000352ed) control_pane_t

0xa626,	// (0x00030189) navi_navi_volume_pane_cp1

0xa62e,	// (0x00030191) status_small_icon_pane

0x0da3,	// (0x00026906) status_small_pane_g1_ParamLimits

0x0da3,	// (0x00026906) status_small_pane_g1

0xa636,	// (0x00030199) status_small_pane_g2_ParamLimits

0xa636,	// (0x00030199) status_small_pane_g2

0xa642,	// (0x000301a5) status_small_pane_g3_ParamLimits

0xa642,	// (0x000301a5) status_small_pane_g3

0xa64e,	// (0x000301b1) status_small_pane_g4_ParamLimits

0xa64e,	// (0x000301b1) status_small_pane_g4

0xa65a,	// (0x000301bd) status_small_pane_g5_ParamLimits

0xa65a,	// (0x000301bd) status_small_pane_g5

0xa668,	// (0x000301cb) status_small_pane_g6_ParamLimits

0xa668,	// (0x000301cb) status_small_pane_g6

0x0007,

0xf768,	// (0x000352cb) status_small_pane_g_ParamLimits

0xf768,	// (0x000352cb) status_small_pane_g

0xa697,	// (0x000301fa) status_small_pane_t1

0xa6b9,	// (0x0003021c) status_small_wait_pane_ParamLimits

0xa6b9,	// (0x0003021c) status_small_wait_pane

0xa38e,	// (0x0002fef1) aid_levels_signal_ParamLimits

0xa38e,	// (0x0002fef1) aid_levels_signal

0xa3a6,	// (0x0002ff09) signal_pane_g1_ParamLimits

0xa3a6,	// (0x0002ff09) signal_pane_g1

0xa3c1,	// (0x0002ff24) signal_pane_g2_ParamLimits

0xa3c1,	// (0x0002ff24) signal_pane_g2

0x0003,

0xf6f9,	// (0x0003525c) signal_pane_g_ParamLimits

0xf6f9,	// (0x0003525c) signal_pane_g

0xd0f2,	// (0x00032c55) context_pane_g1

0x9af5,	// (0x0002f658) title_pane_g1

0x9b2c,	// (0x0002f68f) title_pane_t1

0xc86f,	// (0x000323d2) title_pane_t2

0xc895,	// (0x000323f8) title_pane_t3

0x0002,

0xf557,	// (0x000350ba) title_pane_t

0xb3c1,	// (0x00030f24) aid_levels_battery_ParamLimits

0xb3c1,	// (0x00030f24) aid_levels_battery

0xb3dd,	// (0x00030f40) battery_pane_g1_ParamLimits

0xb3dd,	// (0x00030f40) battery_pane_g1

0xb3fa,	// (0x00030f5d) battery_pane_g2_ParamLimits

0xb3fa,	// (0x00030f5d) battery_pane_g2

0x0001,

0xf79c,	// (0x000352ff) battery_pane_g_ParamLimits

0xf79c,	// (0x000352ff) battery_pane_g

0xba70,	// (0x000315d3) uni_indicator_pane_g1

0xba86,	// (0x000315e9) uni_indicator_pane_g2

0xba9c,	// (0x000315ff) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00035469) uni_indicator_pane_g

0x0974,	// (0x000264d7) navi_icon_pane_ParamLimits

0x0974,	// (0x000264d7) navi_icon_pane

0x08be,	// (0x00026421) navi_midp_pane

0x0990,	// (0x000264f3) navi_navi_pane

0x099a,	// (0x000264fd) navi_text_pane_ParamLimits

0x099a,	// (0x000264fd) navi_text_pane

0xc84f,	// (0x000323b2) status_small_wait_pane_g1

0xcae6,	// (0x00032649) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00035464) status_small_wait_pane_g

0xb9c9,	// (0x0003152c) navi_navi_icon_text_pane

0x3d68,	// (0x000298cb) navi_navi_pane_g1_ParamLimits

0x3d68,	// (0x000298cb) navi_navi_pane_g1

0x3d7a,	// (0x000298dd) navi_navi_pane_g2_ParamLimits

0x3d7a,	// (0x000298dd) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00035432) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00035432) navi_navi_pane_g

0x3d8c,	// (0x000298ef) navi_navi_tabs_pane

0x3d95,	// (0x000298f8) navi_navi_text_pane

0xb9c9,	// (0x0003152c) navi_navi_volume_pane

0x3d3c,	// (0x0002989f) navi_text_pane_t1

0x3d30,	// (0x00029893) navi_icon_pane_g1

0x3c83,	// (0x000297e6) navi_navi_text_pane_t1

0xb9b5,	// (0x00031518) navi_navi_volume_pane_g1

0x1bce,	// (0x00027731) volume_small_pane

0x3be9,	// (0x0002974c) navi_navi_icon_text_pane_g1

0xb919,	// (0x0003147c) navi_navi_icon_text_pane_t1

0x0990,	// (0x000264f3) navi_tabs_2_long_pane

0x0990,	// (0x000264f3) navi_tabs_2_pane

0x0990,	// (0x000264f3) navi_tabs_3_long_pane

0x0990,	// (0x000264f3) navi_tabs_3_pane

0x0990,	// (0x000264f3) navi_tabs_4_pane

0x1ba6,	// (0x00027709) tabs_2_active_pane_ParamLimits

0x1ba6,	// (0x00027709) tabs_2_active_pane

0x1bb6,	// (0x00027719) tabs_2_passive_pane_ParamLimits

0x1bb6,	// (0x00027719) tabs_2_passive_pane

0x1b74,	// (0x000276d7) tabs_3_active_pane_ParamLimits

0x1b74,	// (0x000276d7) tabs_3_active_pane

0x1b84,	// (0x000276e7) tabs_3_passive_pane_ParamLimits

0x1b84,	// (0x000276e7) tabs_3_passive_pane

0x1b95,	// (0x000276f8) tabs_3_passive_pane_cp_ParamLimits

0x1b95,	// (0x000276f8) tabs_3_passive_pane_cp

0x1b30,	// (0x00027693) tabs_4_active_pane_ParamLimits

0x1b30,	// (0x00027693) tabs_4_active_pane

0x1b41,	// (0x000276a4) tabs_4_passive_pane_ParamLimits

0x1b41,	// (0x000276a4) tabs_4_passive_pane

0x1b52,	// (0x000276b5) tabs_4_passive_pane_cp_ParamLimits

0x1b52,	// (0x000276b5) tabs_4_passive_pane_cp

0x1b63,	// (0x000276c6) tabs_4_passive_pane_cp2_ParamLimits

0x1b63,	// (0x000276c6) tabs_4_passive_pane_cp2

0x1b0c,	// (0x0002766f) tabs_2_long_active_pane_ParamLimits

0x1b0c,	// (0x0002766f) tabs_2_long_active_pane

0x1b1e,	// (0x00027681) tabs_2_long_passive_pane_ParamLimits

0x1b1e,	// (0x00027681) tabs_2_long_passive_pane

0x1ac7,	// (0x0002762a) tabs_3_long_active_pane_ParamLimits

0x1ac7,	// (0x0002762a) tabs_3_long_active_pane

0x1ae0,	// (0x00027643) tabs_3_long_passive_pane_ParamLimits

0x1ae0,	// (0x00027643) tabs_3_long_passive_pane

0x1af3,	// (0x00027656) tabs_3_long_passive_pane_cp_ParamLimits

0x1af3,	// (0x00027656) tabs_3_long_passive_pane_cp

0x1a6d,	// (0x000275d0) volume_small_pane_g1

0x1a76,	// (0x000275d9) volume_small_pane_g2

0x1a7f,	// (0x000275e2) volume_small_pane_g3

0x1a88,	// (0x000275eb) volume_small_pane_g4

0x1a91,	// (0x000275f4) volume_small_pane_g5

0x1a9a,	// (0x000275fd) volume_small_pane_g6

0x1aa3,	// (0x00027606) volume_small_pane_g7

0x1aac,	// (0x0002760f) volume_small_pane_g8

0x1ab5,	// (0x00027618) volume_small_pane_g9

0x1abe,	// (0x00027621) volume_small_pane_g10

0x0009,

0xf89b,	// (0x000353fe) volume_small_pane_g

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp2_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp2

0x9bb8,	// (0x0002f71b) tabs_3_active_pane_g1

0x9bc0,	// (0x0002f723) tabs_3_active_pane_t1

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp2_ParamLimits

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp2

0x9bb8,	// (0x0002f71b) tabs_3_passive_pane_g1

0x9bc0,	// (0x0002f723) tabs_3_passive_pane_t1

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp3_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp3

0x9bd2,	// (0x0002f735) tabs_4_active_pane_g1

0x9bda,	// (0x0002f73d) tabs_4_active_pane_t1

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp3_ParamLimits

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp3

0x9bd2,	// (0x0002f735) tabs_4_1_passive_pane_g1

0x9bda,	// (0x0002f73d) tabs_4_1_passive_pane_t1

0x1067,	// (0x00026bca) list_highlight_pane_cp2

0xbc5e,	// (0x000317c1) list_set_pane_ParamLimits

0xbc5e,	// (0x000317c1) list_set_pane

0xbcf8,	// (0x0003185b) main_pane_set_t1_ParamLimits

0xbcf8,	// (0x0003185b) main_pane_set_t1

0xbd18,	// (0x0003187b) main_pane_set_t2_ParamLimits

0xbd18,	// (0x0003187b) main_pane_set_t2

0xbd2c,	// (0x0003188f) main_pane_set_t3_ParamLimits

0xbd2c,	// (0x0003188f) main_pane_set_t3

0xbd3e,	// (0x000318a1) main_pane_set_t4_ParamLimits

0xbd3e,	// (0x000318a1) main_pane_set_t4

0x0003,

0xf96b,	// (0x000354ce) main_pane_set_t_ParamLimits

0xf96b,	// (0x000354ce) main_pane_set_t

0xbd50,	// (0x000318b3) setting_code_pane

0xbd5a,	// (0x000318bd) setting_slider_graphic_pane

0xbd5a,	// (0x000318bd) setting_slider_pane

0xbd5a,	// (0x000318bd) setting_text_pane

0xbd5a,	// (0x000318bd) setting_volume_pane

0x9bec,	// (0x0002f74f) volume_set_pane

0xc8b5,	// (0x00032418) bg_set_opt_pane_cp

0x9bf4,	// (0x0002f757) setting_slider_pane_t1

0x9c0d,	// (0x0002f770) setting_slider_pane_t2

0x9c27,	// (0x0002f78a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000350c1) setting_slider_pane_t

0x9c3f,	// (0x0002f7a2) slider_set_pane

0xc859,	// (0x000323bc) bg_set_opt_pane_cp2

0xc8c3,	// (0x00032426) setting_slider_graphic_pane_g1

0x9c55,	// (0x0002f7b8) setting_slider_graphic_pane_t1

0x9c65,	// (0x0002f7c8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000350c8) setting_slider_graphic_pane_t

0x9c75,	// (0x0002f7d8) slider_set_pane_cp

0xc859,	// (0x000323bc) input_focus_pane_cp1

0x4260,	// (0x00029dc3) list_set_text_pane

0xc84f,	// (0x000323b2) setting_text_pane_g1

0xc859,	// (0x000323bc) input_focus_pane_cp2

0xc84f,	// (0x000323b2) setting_code_pane_g1

0xc8cc,	// (0x0003242f) setting_code_pane_t1

0xeb45,	// (0x000346a8) set_text_pane_t1_ParamLimits

0xeb45,	// (0x000346a8) set_text_pane_t1

0xccbf,	// (0x00032822) set_opt_bg_pane_g1

0xccc7,	// (0x0003282a) set_opt_bg_pane_g2

0xbc13,	// (0x00031776) set_opt_bg_pane_g3

0xccd7,	// (0x0003283a) set_opt_bg_pane_g4

0xccdf,	// (0x00032842) set_opt_bg_pane_g5

0xcce7,	// (0x0003284a) set_opt_bg_pane_g6

0xbc1d,	// (0x00031780) set_opt_bg_pane_g7

0xbc25,	// (0x00031788) set_opt_bg_pane_g8

0xbc2f,	// (0x00031792) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x000354bb) set_opt_bg_pane_g

0xbbae,	// (0x00031711) slider_set_pane_g1

0x1c3b,	// (0x0002779e) slider_set_pane_g2

0x0006,

0xf949,	// (0x000354ac) slider_set_pane_g

0xbad3,	// (0x00031636) volume_set_pane_g1

0xbadb,	// (0x0003163e) volume_set_pane_g2

0xbae3,	// (0x00031646) volume_set_pane_g3

0xbaeb,	// (0x0003164e) volume_set_pane_g4

0xbaf3,	// (0x00031656) volume_set_pane_g5

0xbafb,	// (0x0003165e) volume_set_pane_g6

0xbb03,	// (0x00031666) volume_set_pane_g7

0xbb0b,	// (0x0003166e) volume_set_pane_g8

0xbb13,	// (0x00031676) volume_set_pane_g9

0xbb1b,	// (0x0003167e) volume_set_pane_g10

0x0009,

0xf921,	// (0x00035484) volume_set_pane_g

0x9c7d,	// (0x0002f7e0) indicator_pane_ParamLimits

0x9c7d,	// (0x0002f7e0) indicator_pane

0x9ca5,	// (0x0002f808) main_idle_pane_g2_ParamLimits

0x9ca5,	// (0x0002f808) main_idle_pane_g2

0x9cdd,	// (0x0002f840) main_pane_idle_g1_ParamLimits

0x9cdd,	// (0x0002f840) main_pane_idle_g1

0xc8da,	// (0x0003243d) popup_clock_digital_analogue_window_ParamLimits

0xc8da,	// (0x0003243d) popup_clock_digital_analogue_window

0x9d04,	// (0x0002f867) soft_indicator_pane_ParamLimits

0x9d04,	// (0x0002f867) soft_indicator_pane

0x9d28,	// (0x0002f88b) wallpaper_pane_ParamLimits

0x9d28,	// (0x0002f88b) wallpaper_pane

0xc84f,	// (0x000323b2) wallpaper_pane_g1

0x9d3a,	// (0x0002f89d) indicator_pane_g1_ParamLimits

0x9d3a,	// (0x0002f89d) indicator_pane_g1

0x4664,	// (0x0002a1c7) navi_navi_icon_text_pane_srt_g1

0xc908,	// (0x0003246b) soft_indicator_pane_t1

0xc922,	// (0x00032485) aid_ps_area_pane

0x9d50,	// (0x0002f8b3) aid_ps_clock_pane

0xc933,	// (0x00032496) aid_ps_indicator_pane

0xc93f,	// (0x000324a2) indicator_ps_pane_ParamLimits

0xc93f,	// (0x000324a2) indicator_ps_pane

0xc94e,	// (0x000324b1) power_save_pane_g1_ParamLimits

0xc94e,	// (0x000324b1) power_save_pane_g1

0xc95a,	// (0x000324bd) power_save_pane_g2_ParamLimits

0xc95a,	// (0x000324bd) power_save_pane_g2

0xf3bf,	// (0x00034f22) aid_navinavi_width_pane

0xc922,	// (0x00032485) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000350cd) power_save_pane_g_ParamLimits

0xf56a,	// (0x000350cd) power_save_pane_g

0xc968,	// (0x000324cb) power_save_pane_t1_ParamLimits

0xc968,	// (0x000324cb) power_save_pane_t1

0x9d50,	// (0x0002f8b3) aid_ps_clock_pane_ParamLimits

0xc933,	// (0x00032496) aid_ps_indicator_pane_ParamLimits

0xc97a,	// (0x000324dd) power_save_pane_t4_ParamLimits

0xc97a,	// (0x000324dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x000350d2) power_save_pane_t_ParamLimits

0xf56f,	// (0x000350d2) power_save_pane_t

0xc9a4,	// (0x00032507) power_save_t3_ParamLimits

0xc9a4,	// (0x00032507) power_save_t3

0xc98f,	// (0x000324f2) power_save_t2_ParamLimits

0xc98f,	// (0x000324f2) power_save_t2

0xc9b9,	// (0x0003251c) indicator_ps_pane_g1

0x9d5e,	// (0x0002f8c1) ai_gene_pane_ParamLimits

0x9d5e,	// (0x0002f8c1) ai_gene_pane

0x9d75,	// (0x0002f8d8) ai_links_pane_ParamLimits

0x9d75,	// (0x0002f8d8) ai_links_pane

0x9d8d,	// (0x0002f8f0) indicator_pane_cp1_ParamLimits

0x9d8d,	// (0x0002f8f0) indicator_pane_cp1

0x9d9c,	// (0x0002f8ff) main_pane_idle_g1_cp_ParamLimits

0x9d9c,	// (0x0002f8ff) main_pane_idle_g1_cp

0x9db4,	// (0x0002f917) popup_ai_links_title_window

0x9dbd,	// (0x0002f920) soft_indicator_pane_cp1_ParamLimits

0x9dbd,	// (0x0002f920) soft_indicator_pane_cp1

0x4027,	// (0x00029b8a) ai_links_pane_g1

0x4030,	// (0x00029b93) grid_ai_links_pane

0xba67,	// (0x000315ca) ai_gene_pane_1

0x4015,	// (0x00029b78) ai_gene_pane_2

0x401e,	// (0x00029b81) list_highlight_pane_cp4

0xba43,	// (0x000315a6) cell_ai_link_pane_ParamLimits

0xba43,	// (0x000315a6) cell_ai_link_pane

0x3fe6,	// (0x00029b49) cell_ai_link_pane_g1

0xcae6,	// (0x00032649) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x0003545f) cell_ai_link_pane_g

0xc859,	// (0x000323bc) grid_highlight_cp2

0xc859,	// (0x000323bc) bg_popup_sub_pane_cp1

0xc9d0,	// (0x00032533) popup_ai_links_title_window_t1

0x3f36,	// (0x00029a99) ai_gene_pane_1_g1_ParamLimits

0x3f36,	// (0x00029a99) ai_gene_pane_1_g1

0x3f42,	// (0x00029aa5) ai_gene_pane_1_g2_ParamLimits

0x3f42,	// (0x00029aa5) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00035455) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00035455) ai_gene_pane_1_g

0x3f4f,	// (0x00029ab2) ai_gene_pane_1_t1_ParamLimits

0x3f4f,	// (0x00029ab2) ai_gene_pane_1_t1

0x3f83,	// (0x00029ae6) grid_ai_soft_ind_pane

0x3f21,	// (0x00029a84) ai_gene_pane_2_t1_ParamLimits

0x3f21,	// (0x00029a84) ai_gene_pane_2_t1

0x9dd1,	// (0x0002f934) main_pane_empty_t1_ParamLimits

0x9dd1,	// (0x0002f934) main_pane_empty_t1

0x9de9,	// (0x0002f94c) main_pane_empty_t2_ParamLimits

0x9de9,	// (0x0002f94c) main_pane_empty_t2

0x9dfe,	// (0x0002f961) main_pane_empty_t3_ParamLimits

0x9dfe,	// (0x0002f961) main_pane_empty_t3

0x9e10,	// (0x0002f973) main_pane_empty_t4_ParamLimits

0x9e10,	// (0x0002f973) main_pane_empty_t4

0x9e22,	// (0x0002f985) main_pane_empty_t5_ParamLimits

0x9e22,	// (0x0002f985) main_pane_empty_t5

0x0004,

0xf574,	// (0x000350d7) main_pane_empty_t_ParamLimits

0xf574,	// (0x000350d7) main_pane_empty_t

0xcd10,	// (0x00032873) bg_popup_window_pane_ParamLimits

0xcd10,	// (0x00032873) bg_popup_window_pane

0xb9bd,	// (0x00031520) find_popup_pane_cp2_ParamLimits

0xb9bd,	// (0x00031520) find_popup_pane_cp2

0x3c9d,	// (0x00029800) heading_pane_ParamLimits

0x3c9d,	// (0x00029800) heading_pane

0xc859,	// (0x000323bc) bg_popup_sub_pane

0xb936,	// (0x00031499) bg_popup_window_pane_g1_ParamLimits

0xb936,	// (0x00031499) bg_popup_window_pane_g1

0xb945,	// (0x000314a8) bg_popup_window_pane_g2_ParamLimits

0xb945,	// (0x000314a8) bg_popup_window_pane_g2

0xb951,	// (0x000314b4) bg_popup_window_pane_g3_ParamLimits

0xb951,	// (0x000314b4) bg_popup_window_pane_g3

0xb95d,	// (0x000314c0) bg_popup_window_pane_g4_ParamLimits

0xb95d,	// (0x000314c0) bg_popup_window_pane_g4

0xb96c,	// (0x000314cf) bg_popup_window_pane_g5_ParamLimits

0xb96c,	// (0x000314cf) bg_popup_window_pane_g5

0xb97c,	// (0x000314df) bg_popup_window_pane_g6_ParamLimits

0xb97c,	// (0x000314df) bg_popup_window_pane_g6

0xb988,	// (0x000314eb) bg_popup_window_pane_g7_ParamLimits

0xb988,	// (0x000314eb) bg_popup_window_pane_g7

0xb997,	// (0x000314fa) bg_popup_window_pane_g8_ParamLimits

0xb997,	// (0x000314fa) bg_popup_window_pane_g8

0xb9a6,	// (0x00031509) bg_popup_window_pane_g9_ParamLimits

0xb9a6,	// (0x00031509) bg_popup_window_pane_g9

0x3c77,	// (0x000297da) bg_popup_window_pane_g10_ParamLimits

0x3c77,	// (0x000297da) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x0003541d) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x0003541d) bg_popup_window_pane_g

0x3ba0,	// (0x00029703) bg_popup_heading_pane_ParamLimits

0x3ba0,	// (0x00029703) bg_popup_heading_pane

0x1cc3,	// (0x00027826) tabs_4_passive_pane_cp_srt_ParamLimits

0x1cc3,	// (0x00027826) tabs_4_passive_pane_cp_srt

0x1cd5,	// (0x00027838) tabs_4_passive_pane_srt_ParamLimits

0x3bb4,	// (0x00029717) heading_pane_g2

0x1cd5,	// (0x00027838) tabs_4_passive_pane_srt

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp3_srt

0x3bbc,	// (0x0002971f) heading_pane_t1_ParamLimits

0x3bbc,	// (0x0002971f) heading_pane_t1

0x3bd3,	// (0x00029736) heading_pane_t2_ParamLimits

0x3bd3,	// (0x00029736) heading_pane_t2

0x0001,

0xf8b5,	// (0x00035418) heading_pane_t_ParamLimits

0xf8b5,	// (0x00035418) heading_pane_t

0x36dd,	// (0x00029240) bg_popup_heading_pane_g1

0x378c,	// (0x000292ef) bg_popup_heading_pane_g2

0x3796,	// (0x000292f9) bg_popup_heading_pane_g3

0x37a0,	// (0x00029303) bg_popup_heading_pane_g4

0x37aa,	// (0x0002930d) bg_popup_heading_pane_g5

0x37b4,	// (0x00029317) bg_popup_heading_pane_g6

0x37bc,	// (0x0002931f) bg_popup_heading_pane_g7

0x37c4,	// (0x00029327) bg_popup_heading_pane_g8

0x37ce,	// (0x00029331) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x000353d4) bg_popup_heading_pane_g

0x2eca,	// (0x00028a2d) bg_popup_sub_pane_g1

0x2ed2,	// (0x00028a35) bg_popup_sub_pane_g2

0x2eda,	// (0x00028a3d) bg_popup_sub_pane_g3

0x2ee2,	// (0x00028a45) bg_popup_sub_pane_g4

0x2eea,	// (0x00028a4d) bg_popup_sub_pane_g5

0x2ef2,	// (0x00028a55) bg_popup_sub_pane_g6

0x2efa,	// (0x00028a5d) bg_popup_sub_pane_g7

0x2f02,	// (0x00028a65) bg_popup_sub_pane_g8

0x2f0a,	// (0x00028a6d) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x000353ae) bg_popup_sub_pane_g

0xc8a7,	// (0x0003240a) bg_popup_window_pane_cp5_ParamLimits

0xc8a7,	// (0x0003240a) bg_popup_window_pane_cp5

0xc9ed,	// (0x00032550) popup_note_window_g1_ParamLimits

0xc9ed,	// (0x00032550) popup_note_window_g1

0xc9f9,	// (0x0003255c) popup_note_window_t1_ParamLimits

0xc9f9,	// (0x0003255c) popup_note_window_t1

0xca0f,	// (0x00032572) popup_note_window_t2_ParamLimits

0xca0f,	// (0x00032572) popup_note_window_t2

0xca25,	// (0x00032588) popup_note_window_t3_ParamLimits

0xca25,	// (0x00032588) popup_note_window_t3

0xca3b,	// (0x0003259e) popup_note_window_t4_ParamLimits

0xca3b,	// (0x0003259e) popup_note_window_t4

0xca63,	// (0x000325c6) popup_note_window_t5_ParamLimits

0xca63,	// (0x000325c6) popup_note_window_t5

0x0004,

0xf57f,	// (0x000350e2) popup_note_window_t_ParamLimits

0xf57f,	// (0x000350e2) popup_note_window_t

0xca87,	// (0x000325ea) bg_popup_window_pane_cp6_ParamLimits

0xca87,	// (0x000325ea) bg_popup_window_pane_cp6

0x3659,	// (0x000291bc) popup_note_image_window_g1_ParamLimits

0x3659,	// (0x000291bc) popup_note_image_window_g1

0xb7db,	// (0x0003133e) popup_note_image_window_g2_ParamLimits

0xb7db,	// (0x0003133e) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x000353a2) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x000353a2) popup_note_image_window_g

0x367e,	// (0x000291e1) popup_note_image_window_t1_ParamLimits

0x367e,	// (0x000291e1) popup_note_image_window_t1

0x3697,	// (0x000291fa) popup_note_image_window_t2_ParamLimits

0x3697,	// (0x000291fa) popup_note_image_window_t2

0x36b0,	// (0x00029213) popup_note_image_window_t3_ParamLimits

0x36b0,	// (0x00029213) popup_note_image_window_t3

0x0002,

0xf844,	// (0x000353a7) popup_note_image_window_t_ParamLimits

0xf844,	// (0x000353a7) popup_note_image_window_t

0x3522,	// (0x00029085) bg_popup_window_pane_cp7_ParamLimits

0x3522,	// (0x00029085) bg_popup_window_pane_cp7

0x3552,	// (0x000290b5) popup_note_wait_window_g1_ParamLimits

0x3552,	// (0x000290b5) popup_note_wait_window_g1

0x355e,	// (0x000290c1) popup_note_wait_window_g2_ParamLimits

0x355e,	// (0x000290c1) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00035390) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00035390) popup_note_wait_window_g

0x3576,	// (0x000290d9) popup_note_wait_window_t1_ParamLimits

0x3576,	// (0x000290d9) popup_note_wait_window_t1

0xb77c,	// (0x000312df) popup_note_wait_window_t2_ParamLimits

0xb77c,	// (0x000312df) popup_note_wait_window_t2

0xb799,	// (0x000312fc) popup_note_wait_window_t3_ParamLimits

0xb799,	// (0x000312fc) popup_note_wait_window_t3

0xb7ac,	// (0x0003130f) popup_note_wait_window_t4_ParamLimits

0xb7ac,	// (0x0003130f) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00035397) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00035397) popup_note_wait_window_t

0x35f2,	// (0x00029155) wait_bar_pane_ParamLimits

0x35f2,	// (0x00029155) wait_bar_pane

0xc859,	// (0x000323bc) wait_anim_pane

0xc859,	// (0x000323bc) wait_border_pane

0xc84f,	// (0x000323b2) wait_anim_pane_g1

0xc84f,	// (0x000323b2) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00035257) wait_anim_pane_g

0x34ce,	// (0x00029031) wait_border_pane_g1

0x34d9,	// (0x0002903c) wait_border_pane_g2

0x34e2,	// (0x00029045) wait_border_pane_g3

0x0002,

0xf826,	// (0x00035389) wait_border_pane_g

0x3339,	// (0x00028e9c) bg_popup_window_pane_cp16_ParamLimits

0x3339,	// (0x00028e9c) bg_popup_window_pane_cp16

0xb72c,	// (0x0003128f) indicator_popup_pane_cp4_ParamLimits

0xb72c,	// (0x0003128f) indicator_popup_pane_cp4

0x344d,	// (0x00028fb0) popup_query_data_window_t1_ParamLimits

0x344d,	// (0x00028fb0) popup_query_data_window_t1

0x345f,	// (0x00028fc2) popup_query_data_window_t2_ParamLimits

0x345f,	// (0x00028fc2) popup_query_data_window_t2

0x3478,	// (0x00028fdb) popup_query_data_window_t3_ParamLimits

0x3478,	// (0x00028fdb) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00035382) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00035382) popup_query_data_window_t

0xb740,	// (0x000312a3) query_popup_data_pane_ParamLimits

0xb740,	// (0x000312a3) query_popup_data_pane

0xb754,	// (0x000312b7) query_popup_data_pane_cp1_ParamLimits

0xb754,	// (0x000312b7) query_popup_data_pane_cp1

0x3339,	// (0x00028e9c) bg_popup_window_pane_cp10_ParamLimits

0x3339,	// (0x00028e9c) bg_popup_window_pane_cp10

0xb6a7,	// (0x0003120a) indicator_popup_pane_ParamLimits

0xb6a7,	// (0x0003120a) indicator_popup_pane

0xb6c9,	// (0x0003122c) popup_query_code_window_t1_ParamLimits

0xb6c9,	// (0x0003122c) popup_query_code_window_t1

0xb6e3,	// (0x00031246) popup_query_code_window_t2_ParamLimits

0xb6e3,	// (0x00031246) popup_query_code_window_t2

0x33f0,	// (0x00028f53) popup_query_code_window_t3_ParamLimits

0x33f0,	// (0x00028f53) popup_query_code_window_t3

0x0002,

0xf818,	// (0x0003537b) popup_query_code_window_t_ParamLimits

0xf818,	// (0x0003537b) popup_query_code_window_t

0x341f,	// (0x00028f82) query_popup_pane_ParamLimits

0x341f,	// (0x00028f82) query_popup_pane

0xca87,	// (0x000325ea) bg_popup_window_pane_cp15_ParamLimits

0xca87,	// (0x000325ea) bg_popup_window_pane_cp15

0x9e34,	// (0x0002f997) indicator_popup_pane_cp1_ParamLimits

0x9e34,	// (0x0002f997) indicator_popup_pane_cp1

0x9e47,	// (0x0002f9aa) indicator_popup_pane_cp2_ParamLimits

0x9e47,	// (0x0002f9aa) indicator_popup_pane_cp2

0x9e5a,	// (0x0002f9bd) popup_query_data_code_window_g1_ParamLimits

0x9e5a,	// (0x0002f9bd) popup_query_data_code_window_g1

0xcaa5,	// (0x00032608) popup_query_data_code_window_t1_ParamLimits

0xcaa5,	// (0x00032608) popup_query_data_code_window_t1

0xcab7,	// (0x0003261a) popup_query_data_code_window_t2_ParamLimits

0xcab7,	// (0x0003261a) popup_query_data_code_window_t2

0x9e6d,	// (0x0002f9d0) popup_query_data_code_window_t3_ParamLimits

0x9e6d,	// (0x0002f9d0) popup_query_data_code_window_t3

0x9e83,	// (0x0002f9e6) popup_query_data_code_window_t4_ParamLimits

0x9e83,	// (0x0002f9e6) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000350ed) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000350ed) popup_query_data_code_window_t

0x0932,	// (0x00026495) list_single_midp_graphic_pane_g3

0x9e9b,	// (0x0002f9fe) query_popup_data_pane_cp2_ParamLimits

0x9eae,	// (0x0002fa11) query_popup_pane_cp2_ParamLimits

0x9eae,	// (0x0002fa11) query_popup_pane_cp2

0xc859,	// (0x000323bc) bg_popup_window_pane_cp11

0x3331,	// (0x00028e94) heading_pane_cp5

0xcb13,	// (0x00032676) listscroll_popup_info_pane

0xc859,	// (0x000323bc) input_focus_pane_cp3

0xcac9,	// (0x0003262c) query_popup_pane_t1

0xcad7,	// (0x0003263a) list_popup_info_pane_ParamLimits

0xcad7,	// (0x0003263a) list_popup_info_pane

0xcae6,	// (0x00032649) listscroll_popup_info_pane_g1

0xcaee,	// (0x00032651) scroll_pane_cp7

0x9ec1,	// (0x0002fa24) popup_info_list_pane_t1_ParamLimits

0x9ec1,	// (0x0002fa24) popup_info_list_pane_t1

0x9edb,	// (0x0002fa3e) popup_info_list_pane_t2_ParamLimits

0x9edb,	// (0x0002fa3e) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000350f6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000350f6) popup_info_list_pane_t

0xc859,	// (0x000323bc) bg_popup_window_pane_cp12

0xbf6a,	// (0x00031acd) find_popup_pane

0xc8b5,	// (0x00032418) bg_popup_window_pane_cp3

0xcaf8,	// (0x0003265b) heading_pane_cp3

0xcb04,	// (0x00032667) listscroll_popup_graphic_pane

0xc859,	// (0x000323bc) bg_popup_window_pane_cp4

0x9f45,	// (0x0002faa8) heading_pane_cp4

0xcb13,	// (0x00032676) listscroll_popup_colour_pane

0x9f4d,	// (0x0002fab0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9f4d,	// (0x0002fab0) cell_large_graphic_colour_none_popup_pane

0x9f61,	// (0x0002fac4) grid_large_graphic_colour_popup_pane_ParamLimits

0x9f61,	// (0x0002fac4) grid_large_graphic_colour_popup_pane

0x9f85,	// (0x0002fae8) listscroll_popup_colour_pane_g1_ParamLimits

0x9f85,	// (0x0002fae8) listscroll_popup_colour_pane_g1

0x9f9c,	// (0x0002faff) listscroll_popup_colour_pane_g2_ParamLimits

0x9f9c,	// (0x0002faff) listscroll_popup_colour_pane_g2

0x9fb3,	// (0x0002fb16) listscroll_popup_colour_pane_g3_ParamLimits

0x9fb3,	// (0x0002fb16) listscroll_popup_colour_pane_g3

0x9fc3,	// (0x0002fb26) listscroll_popup_colour_pane_g4_ParamLimits

0x9fc3,	// (0x0002fb26) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000350fb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000350fb) listscroll_popup_colour_pane_g

0xcb1b,	// (0x0003267e) scroll_pane_cp6_ParamLimits

0xcb1b,	// (0x0003267e) scroll_pane_cp6

0x9fd3,	// (0x0002fb36) cell_large_graphic_colour_popup_pane_ParamLimits

0x9fd3,	// (0x0002fb36) cell_large_graphic_colour_popup_pane

0x9ff2,	// (0x0002fb55) cell_large_graphic_colour_none_popup_pane_t1

0xc859,	// (0x000323bc) grid_highlight_pane_cp5

0xcb2d,	// (0x00032690) cell_large_graphic_colour_popup_pane_g1

0xcb35,	// (0x00032698) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035104) cell_large_graphic_colour_popup_pane_g

0xcb3d,	// (0x000326a0) cell_large_graphic_colour_popup_pane_g2_copy1

0xcb46,	// (0x000326a9) grid_highlight_pane_cp4

0xcb4e,	// (0x000326b1) bg_popup_window_pane_cp8_ParamLimits

0xcb4e,	// (0x000326b1) bg_popup_window_pane_cp8

0xa001,	// (0x0002fb64) popup_snote_single_text_window_g1_ParamLimits

0xa001,	// (0x0002fb64) popup_snote_single_text_window_g1

0xa013,	// (0x0002fb76) popup_snote_single_text_window_t1_ParamLimits

0xa013,	// (0x0002fb76) popup_snote_single_text_window_t1

0xa026,	// (0x0002fb89) popup_snote_single_text_window_t2_ParamLimits

0xa026,	// (0x0002fb89) popup_snote_single_text_window_t2

0xa039,	// (0x0002fb9c) popup_snote_single_text_window_t3_ParamLimits

0xa039,	// (0x0002fb9c) popup_snote_single_text_window_t3

0xa072,	// (0x0002fbd5) popup_snote_single_text_window_t4_ParamLimits

0xa072,	// (0x0002fbd5) popup_snote_single_text_window_t4

0xa0a6,	// (0x0002fc09) popup_snote_single_text_window_t5_ParamLimits

0xa0a6,	// (0x0002fc09) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00035109) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00035109) popup_snote_single_text_window_t

0xcb69,	// (0x000326cc) bg_popup_window_pane_cp9_ParamLimits

0xcb69,	// (0x000326cc) bg_popup_window_pane_cp9

0xa001,	// (0x0002fb64) popup_snote_single_graphic_window_g1_ParamLimits

0xa001,	// (0x0002fb64) popup_snote_single_graphic_window_g1

0xcb77,	// (0x000326da) popup_snote_single_graphic_window_g2_ParamLimits

0xcb77,	// (0x000326da) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035114) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035114) popup_snote_single_graphic_window_g

0xcb83,	// (0x000326e6) popup_snote_single_graphic_window_t1_ParamLimits

0xcb83,	// (0x000326e6) popup_snote_single_graphic_window_t1

0xcb96,	// (0x000326f9) popup_snote_single_graphic_window_t2_ParamLimits

0xcb96,	// (0x000326f9) popup_snote_single_graphic_window_t2

0xa039,	// (0x0002fb9c) popup_snote_single_graphic_window_t3_ParamLimits

0xa039,	// (0x0002fb9c) popup_snote_single_graphic_window_t3

0xa072,	// (0x0002fbd5) popup_snote_single_graphic_window_t4_ParamLimits

0xa072,	// (0x0002fbd5) popup_snote_single_graphic_window_t4

0xa0d5,	// (0x0002fc38) popup_snote_single_graphic_window_t5_ParamLimits

0xa0d5,	// (0x0002fc38) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00035119) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00035119) popup_snote_single_graphic_window_t

0x45c0,	// (0x0002a123) grid_graphic_popup_pane_ParamLimits

0x45c0,	// (0x0002a123) grid_graphic_popup_pane

0x45ea,	// (0x0002a14d) listscroll_popup_graphic_pane_g1_ParamLimits

0x45ea,	// (0x0002a14d) listscroll_popup_graphic_pane_g1

0xbeb5,	// (0x00031a18) listscroll_popup_graphic_pane_g2_ParamLimits

0xbeb5,	// (0x00031a18) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x000354f8) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x000354f8) listscroll_popup_graphic_pane_g

0x4612,	// (0x0002a175) scroll_pane_cp5

0xbe5a,	// (0x000319bd) cell_graphic_popup_pane_ParamLimits

0xbe5a,	// (0x000319bd) cell_graphic_popup_pane

0x4540,	// (0x0002a0a3) cell_graphic_popup_pane_g1

0x4548,	// (0x0002a0ab) cell_graphic_popup_pane_g2

0xcb3d,	// (0x000326a0) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x000354f1) cell_graphic_popup_pane_g

0x4551,	// (0x0002a0b4) cell_graphic_popup_pane_t2

0xcb46,	// (0x000326a9) grid_highlight_pane_cp3

0xcbbb,	// (0x0003271e) list_gen_pane_ParamLimits

0xcbbb,	// (0x0003271e) list_gen_pane

0xcbe3,	// (0x00032746) scroll_pane

0xbdc4,	// (0x00031927) bg_list_pane_g1_ParamLimits

0xbdc4,	// (0x00031927) bg_list_pane_g1

0xbddf,	// (0x00031942) bg_list_pane_g2_ParamLimits

0xbddf,	// (0x00031942) bg_list_pane_g2

0xbdf2,	// (0x00031955) bg_list_pane_g3_ParamLimits

0xbdf2,	// (0x00031955) bg_list_pane_g3

0xbe04,	// (0x00031967) bg_list_pane_g4_ParamLimits

0xbe04,	// (0x00031967) bg_list_pane_g4

0xbe16,	// (0x00031979) bg_list_pane_g5_ParamLimits

0xbe16,	// (0x00031979) bg_list_pane_g5

0x0004,

0xf983,	// (0x000354e6) bg_list_pane_g_ParamLimits

0xf983,	// (0x000354e6) bg_list_pane_g

0xbd8d,	// (0x000318f0) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double2_graphic_large_graphic_pane

0xbd8d,	// (0x000318f0) list_double2_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double2_graphic_pane

0xbd8d,	// (0x000318f0) list_double2_large_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double2_large_graphic_pane

0xbd8d,	// (0x000318f0) list_double2_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double2_pane

0xbd8d,	// (0x000318f0) list_double_graphic_heading_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_graphic_heading_pane

0xbd8d,	// (0x000318f0) list_double_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_graphic_pane

0xbd8d,	// (0x000318f0) list_double_heading_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_heading_pane

0xbd8d,	// (0x000318f0) list_double_large_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_large_graphic_pane

0xbd8d,	// (0x000318f0) list_double_number_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_number_pane

0xbd8d,	// (0x000318f0) list_double_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_pane

0xbd8d,	// (0x000318f0) list_double_time_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_double_time_pane

0xbd8d,	// (0x000318f0) list_setting_number_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_setting_number_pane

0xbd8d,	// (0x000318f0) list_setting_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_setting_pane

0x96e5,	// (0x0002f248) list_single_2graphic_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_2graphic_pane

0x96e5,	// (0x0002f248) list_single_graphic_heading_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_graphic_heading_pane

0x96e5,	// (0x0002f248) list_single_graphic_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_graphic_pane

0x96e5,	// (0x0002f248) list_single_heading_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_heading_pane

0xbd8d,	// (0x000318f0) list_single_large_graphic_pane_ParamLimits

0xbd8d,	// (0x000318f0) list_single_large_graphic_pane

0x96e5,	// (0x0002f248) list_single_number_heading_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_number_heading_pane

0x96e5,	// (0x0002f248) list_single_number_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_number_pane

0x96e5,	// (0x0002f248) list_single_pane_ParamLimits

0x96e5,	// (0x0002f248) list_single_pane

0xc859,	// (0x000323bc) list_highlight_pane_cp1

0xeb6c,	// (0x000346cf) list_single_pane_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_pane_g1

0xeb78,	// (0x000346db) list_single_pane_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_pane_g

0x96cf,	// (0x0002f232) list_single_pane_t1_ParamLimits

0x96cf,	// (0x0002f232) list_single_pane_t1

0xeb6c,	// (0x000346cf) list_single_number_pane_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_number_pane_g1

0xeb78,	// (0x000346db) list_single_number_pane_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_number_pane_g

0xeb84,	// (0x000346e7) list_single_number_pane_t1_ParamLimits

0xeb84,	// (0x000346e7) list_single_number_pane_t1

0x9691,	// (0x0002f1f4) list_single_number_pane_t2_ParamLimits

0x9691,	// (0x0002f1f4) list_single_number_pane_t2

0x0001,

0xf944,	// (0x000354a7) list_single_number_pane_t_ParamLimits

0xf944,	// (0x000354a7) list_single_number_pane_t

0xeb60,	// (0x000346c3) list_single_graphic_pane_g1_ParamLimits

0xeb60,	// (0x000346c3) list_single_graphic_pane_g1

0xeb6c,	// (0x000346cf) list_single_graphic_pane_g2_ParamLimits

0xeb6c,	// (0x000346cf) list_single_graphic_pane_g2

0xeb78,	// (0x000346db) list_single_graphic_pane_g3_ParamLimits

0xeb78,	// (0x000346db) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035124) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035124) list_single_graphic_pane_g

0xeb84,	// (0x000346e7) list_single_graphic_pane_t1_ParamLimits

0xeb84,	// (0x000346e7) list_single_graphic_pane_t1

0xeb6c,	// (0x000346cf) list_single_heading_pane_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_heading_pane_g1

0xeb78,	// (0x000346db) list_single_heading_pane_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_heading_pane_g

0xeb9a,	// (0x000346fd) list_single_heading_pane_t1_ParamLimits

0xeb9a,	// (0x000346fd) list_single_heading_pane_t1

0xebb0,	// (0x00034713) list_single_heading_pane_t2_ParamLimits

0xebb0,	// (0x00034713) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035130) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035130) list_single_heading_pane_t

0xeb6c,	// (0x000346cf) list_single_number_heading_pane_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_number_heading_pane_g1

0xeb78,	// (0x000346db) list_single_number_heading_pane_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_number_heading_pane_g

0xeb9a,	// (0x000346fd) list_single_number_heading_pane_t1_ParamLimits

0xeb9a,	// (0x000346fd) list_single_number_heading_pane_t1

0xebc2,	// (0x00034725) list_single_number_heading_pane_t2_ParamLimits

0xebc2,	// (0x00034725) list_single_number_heading_pane_t2

0xebd4,	// (0x00034737) list_single_number_heading_pane_t3_ParamLimits

0xebd4,	// (0x00034737) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035135) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035135) list_single_number_heading_pane_t

0xebe6,	// (0x00034749) list_single_graphic_heading_pane_g1_ParamLimits

0xebe6,	// (0x00034749) list_single_graphic_heading_pane_g1

0x90c2,	// (0x0002ec25) list_single_graphic_heading_pane_g4_ParamLimits

0x90c2,	// (0x0002ec25) list_single_graphic_heading_pane_g4

0xeb78,	// (0x000346db) list_single_graphic_heading_pane_g5_ParamLimits

0xeb78,	// (0x000346db) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003513c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003513c) list_single_graphic_heading_pane_g

0xeb9a,	// (0x000346fd) list_single_graphic_heading_pane_t1_ParamLimits

0xeb9a,	// (0x000346fd) list_single_graphic_heading_pane_t1

0x90d3,	// (0x0002ec36) list_single_graphic_heading_pane_t2_ParamLimits

0x90d3,	// (0x0002ec36) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035143) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035143) list_single_graphic_heading_pane_t

0xebf2,	// (0x00034755) list_single_large_graphic_pane_g1_ParamLimits

0xebf2,	// (0x00034755) list_single_large_graphic_pane_g1

0xebfe,	// (0x00034761) list_single_large_graphic_pane_g2_ParamLimits

0xebfe,	// (0x00034761) list_single_large_graphic_pane_g2

0xec0a,	// (0x0003476d) list_single_large_graphic_pane_g3_ParamLimits

0xec0a,	// (0x0003476d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035148) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035148) list_single_large_graphic_pane_g

0x34d9,	// (0x0002903c) wait_border_pane_g2_copy1

0x90e5,	// (0x0002ec48) list_single_large_graphic_pane_g4_cp2

0xec16,	// (0x00034779) list_single_large_graphic_pane_t1_ParamLimits

0xec16,	// (0x00034779) list_single_large_graphic_pane_t1

0x90ed,	// (0x0002ec50) list_double_pane_g1_ParamLimits

0x90ed,	// (0x0002ec50) list_double_pane_g1

0xec2c,	// (0x0003478f) list_double_pane_g2_ParamLimits

0xec2c,	// (0x0003478f) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003514f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003514f) list_double_pane_g

0x90f9,	// (0x0002ec5c) list_double_pane_t1_ParamLimits

0x90f9,	// (0x0002ec5c) list_double_pane_t1

0x910f,	// (0x0002ec72) list_double_pane_t2_ParamLimits

0x910f,	// (0x0002ec72) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035154) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035154) list_double_pane_t

0x9121,	// (0x0002ec84) list_double2_pane_g1_ParamLimits

0x9121,	// (0x0002ec84) list_double2_pane_g1

0xec2c,	// (0x0003478f) list_double2_pane_g2_ParamLimits

0xec2c,	// (0x0003478f) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035159) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035159) list_double2_pane_g

0x90f9,	// (0x0002ec5c) list_double2_pane_t1_ParamLimits

0x90f9,	// (0x0002ec5c) list_double2_pane_t1

0x9132,	// (0x0002ec95) list_double2_pane_t2_ParamLimits

0x9132,	// (0x0002ec95) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003515e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003515e) list_double2_pane_t

0x90ed,	// (0x0002ec50) list_double_number_pane_g1_ParamLimits

0x90ed,	// (0x0002ec50) list_double_number_pane_g1

0xec2c,	// (0x0003478f) list_double_number_pane_g2_ParamLimits

0xec2c,	// (0x0003478f) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003514f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003514f) list_double_number_pane_g

0x9144,	// (0x0002eca7) list_double_number_pane_t1_ParamLimits

0x9144,	// (0x0002eca7) list_double_number_pane_t1

0x9156,	// (0x0002ecb9) list_double_number_pane_t2_ParamLimits

0x9156,	// (0x0002ecb9) list_double_number_pane_t2

0x916c,	// (0x0002eccf) list_double_number_pane_t3_ParamLimits

0x916c,	// (0x0002eccf) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035163) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035163) list_double_number_pane_t

0x917e,	// (0x0002ece1) list_double_graphic_pane_g1_ParamLimits

0x917e,	// (0x0002ece1) list_double_graphic_pane_g1

0x918a,	// (0x0002eced) list_double_graphic_pane_g2_ParamLimits

0x918a,	// (0x0002eced) list_double_graphic_pane_g2

0x9199,	// (0x0002ecfc) list_double_graphic_pane_g3_ParamLimits

0x9199,	// (0x0002ecfc) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003516a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003516a) list_double_graphic_pane_g

0x9156,	// (0x0002ecb9) list_double_graphic_pane_t1_ParamLimits

0x9156,	// (0x0002ecb9) list_double_graphic_pane_t1

0x916c,	// (0x0002eccf) list_double_graphic_pane_t2_ParamLimits

0x916c,	// (0x0002eccf) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035173) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035173) list_double_graphic_pane_t

0x917e,	// (0x0002ece1) list_double2_graphic_pane_g1_ParamLimits

0x917e,	// (0x0002ece1) list_double2_graphic_pane_g1

0x91b1,	// (0x0002ed14) list_double2_graphic_pane_g2_ParamLimits

0x91b1,	// (0x0002ed14) list_double2_graphic_pane_g2

0x91bd,	// (0x0002ed20) list_double2_graphic_pane_g3_ParamLimits

0x91bd,	// (0x0002ed20) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035178) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035178) list_double2_graphic_pane_g

0x9156,	// (0x0002ecb9) list_double2_graphic_pane_t1_ParamLimits

0x9156,	// (0x0002ecb9) list_double2_graphic_pane_t1

0x91c9,	// (0x0002ed2c) list_double2_graphic_pane_t2_ParamLimits

0x91c9,	// (0x0002ed2c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003517f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003517f) list_double2_graphic_pane_t

0x91db,	// (0x0002ed3e) list_double_large_graphic_pane_g1_ParamLimits

0x91db,	// (0x0002ed3e) list_double_large_graphic_pane_g1

0x9121,	// (0x0002ec84) list_double_large_graphic_pane_g2_ParamLimits

0x9121,	// (0x0002ec84) list_double_large_graphic_pane_g2

0xec2c,	// (0x0003478f) list_double_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x0003478f) list_double_large_graphic_pane_g3

0x91fa,	// (0x0002ed5d) list_double_large_graphic_pane_g4_ParamLimits

0x91fa,	// (0x0002ed5d) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035184) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035184) list_double_large_graphic_pane_g

0x920d,	// (0x0002ed70) list_double_large_graphic_pane_t1_ParamLimits

0x920d,	// (0x0002ed70) list_double_large_graphic_pane_t1

0x9226,	// (0x0002ed89) list_double_large_graphic_pane_t2_ParamLimits

0x9226,	// (0x0002ed89) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003518f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003518f) list_double_large_graphic_pane_t

0x9238,	// (0x0002ed9b) list_double2_large_graphic_pane_g1_ParamLimits

0x9238,	// (0x0002ed9b) list_double2_large_graphic_pane_g1

0x9121,	// (0x0002ec84) list_double2_large_graphic_pane_g2_ParamLimits

0x9121,	// (0x0002ec84) list_double2_large_graphic_pane_g2

0xec2c,	// (0x0003478f) list_double2_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x0003478f) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035194) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035194) list_double2_large_graphic_pane_g

0x9156,	// (0x0002ecb9) list_double2_large_graphic_pane_t1_ParamLimits

0x9156,	// (0x0002ecb9) list_double2_large_graphic_pane_t1

0x91c9,	// (0x0002ed2c) list_double2_large_graphic_pane_t2_ParamLimits

0x91c9,	// (0x0002ed2c) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003517f) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003517f) list_double2_large_graphic_pane_t

0x9244,	// (0x0002eda7) list_double_heading_pane_g1_ParamLimits

0x9244,	// (0x0002eda7) list_double_heading_pane_g1

0x9255,	// (0x0002edb8) list_double_heading_pane_g2_ParamLimits

0x9255,	// (0x0002edb8) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0003519b) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0003519b) list_double_heading_pane_g

0x9261,	// (0x0002edc4) list_double_heading_pane_t1_ParamLimits

0x9261,	// (0x0002edc4) list_double_heading_pane_t1

0x91c9,	// (0x0002ed2c) list_double_heading_pane_t2_ParamLimits

0x91c9,	// (0x0002ed2c) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000351a0) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000351a0) list_double_heading_pane_t

0x9277,	// (0x0002edda) list_double_graphic_heading_pane_g1_ParamLimits

0x9277,	// (0x0002edda) list_double_graphic_heading_pane_g1

0x9244,	// (0x0002eda7) list_double_graphic_heading_pane_g2_ParamLimits

0x9244,	// (0x0002eda7) list_double_graphic_heading_pane_g2

0x9255,	// (0x0002edb8) list_double_graphic_heading_pane_g3_ParamLimits

0x9255,	// (0x0002edb8) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x000351a5) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x000351a5) list_double_graphic_heading_pane_g

0x9261,	// (0x0002edc4) list_double_graphic_heading_pane_t1_ParamLimits

0x9261,	// (0x0002edc4) list_double_graphic_heading_pane_t1

0x91c9,	// (0x0002ed2c) list_double_graphic_heading_pane_t2_ParamLimits

0x91c9,	// (0x0002ed2c) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000351a0) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000351a0) list_double_graphic_heading_pane_t

0x9121,	// (0x0002ec84) list_double_time_pane_g1_ParamLimits

0x9121,	// (0x0002ec84) list_double_time_pane_g1

0xec2c,	// (0x0003478f) list_double_time_pane_g2_ParamLimits

0xec2c,	// (0x0003478f) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00035159) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00035159) list_double_time_pane_g

0x9283,	// (0x0002ede6) list_double_time_pane_t1_ParamLimits

0x9283,	// (0x0002ede6) list_double_time_pane_t1

0x9299,	// (0x0002edfc) list_double_time_pane_t2_ParamLimits

0x9299,	// (0x0002edfc) list_double_time_pane_t2

0x92ab,	// (0x0002ee0e) list_double_time_pane_t3_ParamLimits

0x92ab,	// (0x0002ee0e) list_double_time_pane_t3

0x92bd,	// (0x0002ee20) list_double_time_pane_t4_ParamLimits

0x92bd,	// (0x0002ee20) list_double_time_pane_t4

0x0003,

0xf649,	// (0x000351ac) list_double_time_pane_t_ParamLimits

0xf649,	// (0x000351ac) list_double_time_pane_t

0x92cf,	// (0x0002ee32) list_setting_pane_g1_ParamLimits

0x92cf,	// (0x0002ee32) list_setting_pane_g1

0x92db,	// (0x0002ee3e) list_setting_pane_g2_ParamLimits

0x92db,	// (0x0002ee3e) list_setting_pane_g2

0x0001,

0xf652,	// (0x000351b5) list_setting_pane_g_ParamLimits

0xf652,	// (0x000351b5) list_setting_pane_g

0x92e7,	// (0x0002ee4a) list_setting_pane_t1_ParamLimits

0x92e7,	// (0x0002ee4a) list_setting_pane_t1

0x9301,	// (0x0002ee64) list_setting_pane_t2_ParamLimits

0x9301,	// (0x0002ee64) list_setting_pane_t2

0x0002,

0xf657,	// (0x000351ba) list_setting_pane_t_ParamLimits

0xf657,	// (0x000351ba) list_setting_pane_t

0x9340,	// (0x0002eea3) set_value_pane_cp_ParamLimits

0x9340,	// (0x0002eea3) set_value_pane_cp

0x934c,	// (0x0002eeaf) list_setting_number_pane_g1_ParamLimits

0x934c,	// (0x0002eeaf) list_setting_number_pane_g1

0x9358,	// (0x0002eebb) list_setting_number_pane_g2_ParamLimits

0x9358,	// (0x0002eebb) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x000351c1) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x000351c1) list_setting_number_pane_g

0x9364,	// (0x0002eec7) list_setting_number_pane_t1_ParamLimits

0x9364,	// (0x0002eec7) list_setting_number_pane_t1

0x937d,	// (0x0002eee0) list_setting_number_pane_t2_ParamLimits

0x937d,	// (0x0002eee0) list_setting_number_pane_t2

0x9397,	// (0x0002eefa) list_setting_number_pane_t3_ParamLimits

0x9397,	// (0x0002eefa) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x000351c6) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x000351c6) list_setting_number_pane_t

0x9340,	// (0x0002eea3) set_value_pane_ParamLimits

0x9340,	// (0x0002eea3) set_value_pane

0xcc17,	// (0x0003277a) bg_set_opt_pane_ParamLimits

0xcc17,	// (0x0003277a) bg_set_opt_pane

0x93da,	// (0x0002ef3d) set_value_pane_t1

0xcc38,	// (0x0003279b) slider_set_pane_cp3

0xa10e,	// (0x0002fc71) volume_small_pane_cp

0xcc41,	// (0x000327a4) list_form_gen_pane

0xcc4a,	// (0x000327ad) scroll_pane_cp8

0x93e8,	// (0x0002ef4b) form_field_data_pane_ParamLimits

0x93e8,	// (0x0002ef4b) form_field_data_pane

0x93ff,	// (0x0002ef62) form_field_data_wide_pane_ParamLimits

0x93ff,	// (0x0002ef62) form_field_data_wide_pane

0x941f,	// (0x0002ef82) form_field_popup_pane_ParamLimits

0x941f,	// (0x0002ef82) form_field_popup_pane

0x9437,	// (0x0002ef9a) form_field_popup_wide_pane_ParamLimits

0x9437,	// (0x0002ef9a) form_field_popup_wide_pane

0xec5d,	// (0x000347c0) form_field_slider_pane_ParamLimits

0xec5d,	// (0x000347c0) form_field_slider_pane

0x944e,	// (0x0002efb1) form_field_slider_wide_pane_ParamLimits

0x944e,	// (0x0002efb1) form_field_slider_wide_pane

0xcc5b,	// (0x000327be) data_form_pane

0x946b,	// (0x0002efce) form_field_data_pane_t1

0xcc67,	// (0x000327ca) input_focus_pane

0x9485,	// (0x0002efe8) data_form_wide_pane

0x94a2,	// (0x0002f005) form_field_data_wide_pane_t1

0xcb5b,	// (0x000326be) input_focus_pane_cp6

0x94c4,	// (0x0002f027) form_field_popup_pane_t1

0xcc67,	// (0x000327ca) input_focus_pane_cp7

0xcc95,	// (0x000327f8) list_form_pane

0x94e6,	// (0x0002f049) form_field_popup_wide_pane_t1

0xcc67,	// (0x000327ca) input_focus_pane_cp8

0xcca1,	// (0x00032804) list_form_wide_pane

0x9503,	// (0x0002f066) form_field_slider_pane_t1_ParamLimits

0x9503,	// (0x0002f066) form_field_slider_pane_t1

0x951b,	// (0x0002f07e) form_field_slider_pane_t2_ParamLimits

0x951b,	// (0x0002f07e) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x000351d6) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x000351d6) form_field_slider_pane_t

0xc8a7,	// (0x0003240a) input_focus_pane_cp9_ParamLimits

0xc8a7,	// (0x0003240a) input_focus_pane_cp9

0x9530,	// (0x0002f093) slider_cont_pane_ParamLimits

0x9530,	// (0x0002f093) slider_cont_pane

0xccad,	// (0x00032810) form_field_slider_wide_pane_t1_ParamLimits

0xccad,	// (0x00032810) form_field_slider_wide_pane_t1

0x9544,	// (0x0002f0a7) form_field_slider_wide_pane_t2_ParamLimits

0x9544,	// (0x0002f0a7) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x000351db) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x000351db) form_field_slider_wide_pane_t

0xc8a7,	// (0x0003240a) input_focus_pane_cp10_ParamLimits

0xc8a7,	// (0x0003240a) input_focus_pane_cp10

0x9556,	// (0x0002f0b9) slider_cont_pane_cp1_ParamLimits

0x9556,	// (0x0002f0b9) slider_cont_pane_cp1

0x956a,	// (0x0002f0cd) slider_form_pane_cp

0xccbf,	// (0x00032822) input_focus_pane_g1

0xccc7,	// (0x0003282a) input_focus_pane_g2

0xcccf,	// (0x00032832) input_focus_pane_g3

0xccd7,	// (0x0003283a) input_focus_pane_g4

0xccdf,	// (0x00032842) input_focus_pane_g5

0xcce7,	// (0x0003284a) input_focus_pane_g6

0xccef,	// (0x00032852) input_focus_pane_g7

0xccf7,	// (0x0003285a) input_focus_pane_g8

0xccff,	// (0x00032862) input_focus_pane_g9

0xc84f,	// (0x000323b2) input_focus_pane_g10

0x0009,

0xf67d,	// (0x000351e0) input_focus_pane_g

0x34e2,	// (0x00029045) wait_border_pane_g3_copy1

0x9572,	// (0x0002f0d5) data_form_pane_t1

0xc84f,	// (0x000323b2) wait_anim_pane_g1_copy1

0x96a3,	// (0x0002f206) data_form_wide_pane_t1

0x958c,	// (0x0002f0ef) list_form_graphic_pane_cp_ParamLimits

0x958c,	// (0x0002f0ef) list_form_graphic_pane_cp

0x43d1,	// (0x00029f34) slider_form_pane_g1

0x43da,	// (0x00029f3d) slider_form_pane_g2

0x0006,

0xf974,	// (0x000354d7) slider_form_pane_g

0x959e,	// (0x0002f101) list_form_graphic_pane_ParamLimits

0x959e,	// (0x0002f101) list_form_graphic_pane

0x95b1,	// (0x0002f114) list_form_graphic_pane_g1

0x95b9,	// (0x0002f11c) list_form_graphic_pane_t1_ParamLimits

0x95b9,	// (0x0002f11c) list_form_graphic_pane_t1

0xc8b5,	// (0x00032418) list_highlight_pane_cp5_ParamLimits

0xc8b5,	// (0x00032418) list_highlight_pane_cp5

0xec70,	// (0x000347d3) find_pane_g1

0xcd07,	// (0x0003286a) input_find_pane

0x95ce,	// (0x0002f131) input_find_pane_g1_ParamLimits

0x95ce,	// (0x0002f131) input_find_pane_g1

0x95da,	// (0x0002f13d) input_find_pane_t1_ParamLimits

0x95da,	// (0x0002f13d) input_find_pane_t1

0x95ef,	// (0x0002f152) input_find_pane_t2_ParamLimits

0x95ef,	// (0x0002f152) input_find_pane_t2

0x0001,

0xf692,	// (0x000351f5) input_find_pane_t_ParamLimits

0xf692,	// (0x000351f5) input_find_pane_t

0xcd10,	// (0x00032873) input_focus_pane_cp5_ParamLimits

0xcd10,	// (0x00032873) input_focus_pane_cp5

0xcd1e,	// (0x00032881) bg_popup_window_pane_cp2_ParamLimits

0xcd1e,	// (0x00032881) bg_popup_window_pane_cp2

0xcd2b,	// (0x0003288e) listscroll_menu_pane_ParamLimits

0xcd2b,	// (0x0003288e) listscroll_menu_pane

0xa123,	// (0x0002fc86) popup_submenu_window_ParamLimits

0xa123,	// (0x0002fc86) popup_submenu_window

0xcd37,	// (0x0003289a) find_popup_pane_g1

0xa14b,	// (0x0002fcae) input_popup_find_pane_cp

0xcd10,	// (0x00032873) input_focus_pane_cp4_ParamLimits

0xcd10,	// (0x00032873) input_focus_pane_cp4

0xcd3f,	// (0x000328a2) input_popup_find_pane_t1_ParamLimits

0xcd3f,	// (0x000328a2) input_popup_find_pane_t1

0xc859,	// (0x000323bc) bg_popup_sub_pane_cp

0xcd6d,	// (0x000328d0) listscroll_popup_sub_pane

0xcd75,	// (0x000328d8) list_submenu_pane_ParamLimits

0xcd75,	// (0x000328d8) list_submenu_pane

0xcd86,	// (0x000328e9) scroll_pane_cp4

0xa163,	// (0x0002fcc6) list_single_popup_submenu_pane_ParamLimits

0xa163,	// (0x0002fcc6) list_single_popup_submenu_pane

0xa177,	// (0x0002fcda) list_single_popup_submenu_pane_g1

0xa17f,	// (0x0002fce2) list_single_popup_submenu_pane_t1_ParamLimits

0xa17f,	// (0x0002fce2) list_single_popup_submenu_pane_t1

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp1_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp1

0xcd8e,	// (0x000328f1) tabs_2_active_pane_g1

0xa194,	// (0x0002fcf7) tabs_2_active_pane_t1

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp1_ParamLimits

0xc8a7,	// (0x0003240a) bg_passive_tab_pane_cp1

0xcd8e,	// (0x000328f1) tabs_2_passive_pane_g1

0xa194,	// (0x0002fcf7) tabs_2_passive_pane_t1

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp4

0xa1a6,	// (0x0002fd09) tabs_2_long_active_pane_t1

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp4

0x1992,	// (0x000274f5) list_single_midp_graphic_pane_g4_ParamLimits

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp5

0xa1b9,	// (0x0002fd1c) tabs_3_long_active_pane_t1

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp5

0x1992,	// (0x000274f5) list_single_midp_graphic_pane_g4

0xc8b5,	// (0x00032418) bg_popup_window_pane_cp13_ParamLimits

0xc8b5,	// (0x00032418) bg_popup_window_pane_cp13

0xcd96,	// (0x000328f9) listscroll_popup_fast_pane_ParamLimits

0xcd96,	// (0x000328f9) listscroll_popup_fast_pane

0xcda2,	// (0x00032905) grid_popup_fast_pane_ParamLimits

0xcda2,	// (0x00032905) grid_popup_fast_pane

0xcdb4,	// (0x00032917) scroll_pane_cp9_ParamLimits

0xcdb4,	// (0x00032917) scroll_pane_cp9

0x5cf5,	// (0x0002b858) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5cf5,	// (0x0002b858) list_single_graphic_hl_pane_t1_cp2

0xcdc7,	// (0x0003292a) input_focus_pane_cp20_ParamLimits

0xcdc7,	// (0x0003292a) input_focus_pane_cp20

0xcdd5,	// (0x00032938) query_popup_data_pane_t1_ParamLimits

0xcdd5,	// (0x00032938) query_popup_data_pane_t1

0xcde8,	// (0x0003294b) query_popup_data_pane_t2_ParamLimits

0xcde8,	// (0x0003294b) query_popup_data_pane_t2

0xce2e,	// (0x00032991) query_popup_data_pane_t3_ParamLimits

0xce2e,	// (0x00032991) query_popup_data_pane_t3

0xce6f,	// (0x000329d2) query_popup_data_pane_t4_ParamLimits

0xce6f,	// (0x000329d2) query_popup_data_pane_t4

0xceab,	// (0x00032a0e) query_popup_data_pane_t5_ParamLimits

0xceab,	// (0x00032a0e) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x000351fa) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x000351fa) query_popup_data_pane_t

0xccbf,	// (0x00032822) bg_set_opt_pane_g1

0xccc7,	// (0x0003282a) bg_set_opt_pane_g2

0xcccf,	// (0x00032832) bg_set_opt_pane_g3

0xccd7,	// (0x0003283a) bg_set_opt_pane_g4

0xccdf,	// (0x00032842) bg_set_opt_pane_g5

0xcce7,	// (0x0003284a) bg_set_opt_pane_g6

0xccef,	// (0x00032852) bg_set_opt_pane_g7

0xccf7,	// (0x0003285a) bg_set_opt_pane_g8

0xccff,	// (0x00032862) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00035205) bg_set_opt_pane_g

0x065e,	// (0x000261c1) control_top_pane_stacon_ParamLimits

0x065e,	// (0x000261c1) control_top_pane_stacon

0x06b1,	// (0x00026214) signal_pane_stacon_ParamLimits

0x06b1,	// (0x00026214) signal_pane_stacon

0x06d6,	// (0x00026239) stacon_top_pane_g1_ParamLimits

0x06d6,	// (0x00026239) stacon_top_pane_g1

0x06f8,	// (0x0002625b) title_pane_stacon_ParamLimits

0x06f8,	// (0x0002625b) title_pane_stacon

0x0722,	// (0x00026285) uni_indicator_pane_stacon_ParamLimits

0x0722,	// (0x00026285) uni_indicator_pane_stacon

0x0737,	// (0x0002629a) battery_pane_stacon_ParamLimits

0x0737,	// (0x0002629a) battery_pane_stacon

0x077b,	// (0x000262de) control_bottom_pane_stacon_ParamLimits

0x077b,	// (0x000262de) control_bottom_pane_stacon

0x079e,	// (0x00026301) navi_pane_stacon_ParamLimits

0x079e,	// (0x00026301) navi_pane_stacon

0x07c1,	// (0x00026324) stacon_bottom_pane_g1_ParamLimits

0x07c1,	// (0x00026324) stacon_bottom_pane_g1

0x00b7,	// (0x00025c1a) aid_levels_signal_lsc_ParamLimits

0x00b7,	// (0x00025c1a) aid_levels_signal_lsc

0x00cd,	// (0x00025c30) signal_pane_stacon_g1_ParamLimits

0x00cd,	// (0x00025c30) signal_pane_stacon_g1

0x00e1,	// (0x00025c44) signal_pane_stacon_g2_ParamLimits

0x00e1,	// (0x00025c44) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00035218) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00035218) signal_pane_stacon_g

0x0116,	// (0x00025c79) title_pane_stacon_t1_ParamLimits

0x0116,	// (0x00025c79) title_pane_stacon_t1

0xceef,	// (0x00032a52) uni_indicator_pane_stacon_g1

0xcef9,	// (0x00032a5c) uni_indicator_pane_stacon_g2

0xcf03,	// (0x00032a66) uni_indicator_pane_stacon_g3

0xcf0d,	// (0x00032a70) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00035224) uni_indicator_pane_stacon_g

0x013b,	// (0x00025c9e) control_top_pane_stacon_g1

0x0143,	// (0x00025ca6) control_top_pane_stacon_t1_ParamLimits

0x0143,	// (0x00025ca6) control_top_pane_stacon_t1

0x017a,	// (0x00025cdd) aid_levels_battery_lsc_ParamLimits

0x017a,	// (0x00025cdd) aid_levels_battery_lsc

0x0191,	// (0x00025cf4) battery_pane_stacon_g1_ParamLimits

0x0191,	// (0x00025cf4) battery_pane_stacon_g1

0x01a4,	// (0x00025d07) battery_pane_stacon_g2_ParamLimits

0x01a4,	// (0x00025d07) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003522d) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003522d) battery_pane_stacon_g

0x01e2,	// (0x00025d45) navi_icon_pane_stacon

0x01f6,	// (0x00025d59) navi_navi_pane_stacon

0x01e2,	// (0x00025d45) navi_text_pane_stacon

0x013b,	// (0x00025c9e) control_bottom_pane_stacon_g1

0x020a,	// (0x00025d6d) control_bottom_pane_stacon_t1_ParamLimits

0x020a,	// (0x00025d6d) control_bottom_pane_stacon_t1

0xa1e5,	// (0x0002fd48) grid_app_pane_ParamLimits

0xa1e5,	// (0x0002fd48) grid_app_pane

0xa21d,	// (0x0002fd80) scroll_pane_cp15_ParamLimits

0xa21d,	// (0x0002fd80) scroll_pane_cp15

0xa232,	// (0x0002fd95) cell_app_pane_ParamLimits

0xa232,	// (0x0002fd95) cell_app_pane

0xa277,	// (0x0002fdda) cell_app_pane_g1_ParamLimits

0xa277,	// (0x0002fdda) cell_app_pane_g1

0xcf31,	// (0x00032a94) cell_app_pane_g2_ParamLimits

0xcf31,	// (0x00032a94) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00035232) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00035232) cell_app_pane_g

0xa29b,	// (0x0002fdfe) cell_app_pane_t1_ParamLimits

0xa29b,	// (0x0002fdfe) cell_app_pane_t1

0xcf3d,	// (0x00032aa0) grid_highlight_pane_ParamLimits

0xcf3d,	// (0x00032aa0) grid_highlight_pane

0xccbf,	// (0x00032822) cell_highlight_pane_g1

0xccc7,	// (0x0003282a) cell_highlight_pane_g2

0xcccf,	// (0x00032832) cell_highlight_pane_g3

0xccd7,	// (0x0003283a) cell_highlight_pane_g4

0xccdf,	// (0x00032842) cell_highlight_pane_g5

0xcce7,	// (0x0003284a) cell_highlight_pane_g6

0xccef,	// (0x00032852) cell_highlight_pane_g7

0xccf7,	// (0x0003285a) cell_highlight_pane_g8

0xccff,	// (0x00032862) cell_highlight_pane_g9

0xc84f,	// (0x000323b2) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x000351e0) cell_highlight_pane_g

0xcf4e,	// (0x00032ab1) bg_scroll_pane

0xa2bb,	// (0x0002fe1e) scroll_handle_pane

0xcf95,	// (0x00032af8) scroll_bg_pane_g1

0xcfaa,	// (0x00032b0d) scroll_bg_pane_g2

0xcfc2,	// (0x00032b25) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00035237) scroll_bg_pane_g

0xa2cf,	// (0x0002fe32) scroll_handle_focus_pane_ParamLimits

0xa2cf,	// (0x0002fe32) scroll_handle_focus_pane

0xcf95,	// (0x00032af8) scroll_handle_pane_g1

0xcfd7,	// (0x00032b3a) scroll_handle_pane_g2

0xcfc2,	// (0x00032b25) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0003523e) scroll_handle_pane_g

0xcd10,	// (0x00032873) bg_popup_sub_pane_cp21_ParamLimits

0xcd10,	// (0x00032873) bg_popup_sub_pane_cp21

0xa2dc,	// (0x0002fe3f) popup_fep_japan_predictive_window_t1_ParamLimits

0xa2dc,	// (0x0002fe3f) popup_fep_japan_predictive_window_t1

0xa2f3,	// (0x0002fe56) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2f3,	// (0x0002fe56) popup_fep_japan_predictive_window_t2

0xa326,	// (0x0002fe89) popup_fep_japan_predictive_window_t3_ParamLimits

0xa326,	// (0x0002fe89) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00035245) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00035245) popup_fep_japan_predictive_window_t

0xc859,	// (0x000323bc) bg_popup_sub_pane_cp23

0xa35d,	// (0x0002fec0) listscroll_japin_cand_pane

0xcfeb,	// (0x00032b4e) popup_fep_japan_candidate_window_t1

0xcff9,	// (0x00032b5c) candidate_pane_ParamLimits

0xcff9,	// (0x00032b5c) candidate_pane

0xa365,	// (0x0002fec8) scroll_pane_cp30

0xd00b,	// (0x00032b6e) list_single_popup_jap_candidate_pane_ParamLimits

0xd00b,	// (0x00032b6e) list_single_popup_jap_candidate_pane

0xc859,	// (0x000323bc) list_highlight_pane_cp30

0xd020,	// (0x00032b83) list_single_popup_jap_candidate_pane_t1

0xd02f,	// (0x00032b92) level_1_signal

0xd03c,	// (0x00032b9f) level_2_signal

0xd049,	// (0x00032bac) level_3_signal

0xd056,	// (0x00032bb9) level_4_signal

0xd063,	// (0x00032bc6) level_5_signal

0xd070,	// (0x00032bd3) level_6_signal

0xd07d,	// (0x00032be0) level_7_signal

0xd02f,	// (0x00032b92) level_1_battery

0xd03c,	// (0x00032b9f) level_2_battery

0xd049,	// (0x00032bac) level_3_battery

0xd056,	// (0x00032bb9) level_4_battery

0xd063,	// (0x00032bc6) level_5_battery

0xd070,	// (0x00032bd3) level_6_battery

0xd07d,	// (0x00032be0) level_7_battery

0xd0a2,	// (0x00032c05) list_menu_pane_ParamLimits

0xd0a2,	// (0x00032c05) list_menu_pane

0xd0b8,	// (0x00032c1b) scroll_pane_cp25_ParamLimits

0xd0b8,	// (0x00032c1b) scroll_pane_cp25

0xa36d,	// (0x0002fed0) list_double2_graphic_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double2_graphic_pane_cp2

0xa36d,	// (0x0002fed0) list_double2_large_graphic_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double2_large_graphic_pane_cp2

0xa36d,	// (0x0002fed0) list_double2_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double2_pane_cp2

0xa36d,	// (0x0002fed0) list_double_graphic_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double_graphic_pane_cp2

0xa36d,	// (0x0002fed0) list_double_large_graphic_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double_large_graphic_pane_cp2

0xa36d,	// (0x0002fed0) list_double_number_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double_number_pane_cp2

0xa36d,	// (0x0002fed0) list_double_pane_cp2_ParamLimits

0xa36d,	// (0x0002fed0) list_double_pane_cp2

0xa37c,	// (0x0002fedf) list_single_2graphic_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_2graphic_pane_cp2

0xa37c,	// (0x0002fedf) list_single_graphic_heading_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_graphic_heading_pane_cp2

0xa37c,	// (0x0002fedf) list_single_graphic_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_graphic_pane_cp2

0xa37c,	// (0x0002fedf) list_single_heading_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_heading_pane_cp2

0xd0e1,	// (0x00032c44) list_single_large_graphic_pane_cp2_ParamLimits

0xd0e1,	// (0x00032c44) list_single_large_graphic_pane_cp2

0xa37c,	// (0x0002fedf) list_single_number_heading_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_number_heading_pane_cp2

0xa37c,	// (0x0002fedf) list_single_number_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_number_pane_cp2

0xa37c,	// (0x0002fedf) list_single_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_pane_cp2

0xd0fb,	// (0x00032c5e) bg_popup_sub_pane_cp22

0x04bb,	// (0x0002601e) popup_side_volume_key_window_g1

0x04df,	// (0x00026042) popup_side_volume_key_window_t1

0xa444,	// (0x0002ffa7) volume_small_pane_cp1

0xc8a7,	// (0x0003240a) bg_popup_sub_pane_cp24_ParamLimits

0xc8a7,	// (0x0003240a) bg_popup_sub_pane_cp24

0xd111,	// (0x00032c74) fep_china_uni_candidate_pane_ParamLimits

0xd111,	// (0x00032c74) fep_china_uni_candidate_pane

0xd125,	// (0x00032c88) fep_china_uni_entry_pane

0xd135,	// (0x00032c98) popup_fep_china_uni_window_g1

0xa44c,	// (0x0002ffaf) fep_china_uni_entry_pane_g1

0xa454,	// (0x0002ffb7) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00035276) fep_china_uni_entry_pane_g

0x0513,	// (0x00026076) fep_entry_item_pane

0x051d,	// (0x00026080) fep_candidate_item_pane

0xa45c,	// (0x0002ffbf) fep_china_uni_candidate_pane_g1

0x052d,	// (0x00026090) fep_china_uni_candidate_pane_g2

0x0535,	// (0x00026098) fep_china_uni_candidate_pane_g3

0xa464,	// (0x0002ffc7) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0003527b) fep_china_uni_candidate_pane_g

0xc84f,	// (0x000323b2) fep_entry_item_pane_g1

0x0545,	// (0x000260a8) fep_entry_item_pane_t1_ParamLimits

0x0545,	// (0x000260a8) fep_entry_item_pane_t1

0x055b,	// (0x000260be) fep_candidate_item_pane_t1_ParamLimits

0x055b,	// (0x000260be) fep_candidate_item_pane_t1

0x0570,	// (0x000260d3) fep_candidate_item_pane_t2_ParamLimits

0x0570,	// (0x000260d3) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00035284) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00035284) fep_candidate_item_pane_t

0xc8b5,	// (0x00032418) list_highlight_pane_cp31_ParamLimits

0xc8b5,	// (0x00032418) list_highlight_pane_cp31

0x0582,	// (0x000260e5) level_1_signal_lsc

0x058b,	// (0x000260ee) level_2_signal_lsc

0x0594,	// (0x000260f7) level_3_signal_lsc

0x059d,	// (0x00026100) level_4_signal_lsc

0x05a6,	// (0x00026109) level_5_signal_lsc

0x05af,	// (0x00026112) level_6_signal_lsc

0x05b8,	// (0x0002611b) level_7_signal_lsc

0x05b8,	// (0x0002611b) level_1_battery_lsc

0x05c1,	// (0x00026124) level_2_battery_lsc

0x05ca,	// (0x0002612d) level_3_battery_lsc

0x05d3,	// (0x00026136) level_4_battery_lsc

0x05dc,	// (0x0002613f) level_5_battery_lsc

0x05e5,	// (0x00026148) level_6_battery_lsc

0x0582,	// (0x000260e5) level_7_battery_lsc

0x05ee,	// (0x00026151) scroll_handle_focus_pane_g1

0x05f7,	// (0x0002615a) scroll_handle_focus_pane_g2

0x0600,	// (0x00026163) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00035289) scroll_handle_focus_pane_g

0x9604,	// (0x0002f167) list_single_2graphic_pane_g1_ParamLimits

0x9604,	// (0x0002f167) list_single_2graphic_pane_g1

0x90c2,	// (0x0002ec25) list_single_2graphic_pane_g2_ParamLimits

0x90c2,	// (0x0002ec25) list_single_2graphic_pane_g2

0xeb78,	// (0x000346db) list_single_2graphic_pane_g3_ParamLimits

0xeb78,	// (0x000346db) list_single_2graphic_pane_g3

0x9610,	// (0x0002f173) list_single_2graphic_pane_g4_ParamLimits

0x9610,	// (0x0002f173) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00035290) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00035290) list_single_2graphic_pane_g

0x961c,	// (0x0002f17f) list_single_2graphic_pane_t1_ParamLimits

0x961c,	// (0x0002f17f) list_single_2graphic_pane_t1

0x964a,	// (0x0002f1ad) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x964a,	// (0x0002f1ad) list_double2_graphic_large_graphic_pane_g1

0x9121,	// (0x0002ec84) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9121,	// (0x0002ec84) list_double2_graphic_large_graphic_pane_g2

0xec2c,	// (0x0003478f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x0003478f) list_double2_graphic_large_graphic_pane_g3

0x965c,	// (0x0002f1bf) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x965c,	// (0x0002f1bf) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00035299) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00035299) list_double2_graphic_large_graphic_pane_g

0x9283,	// (0x0002ede6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9283,	// (0x0002ede6) list_double2_graphic_large_graphic_pane_t1

0x9668,	// (0x0002f1cb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9668,	// (0x0002f1cb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x000352a2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x000352a2) list_double2_graphic_large_graphic_pane_t

0xa4df,	// (0x00030042) popup_fast_swap_window_ParamLimits

0xa4df,	// (0x00030042) popup_fast_swap_window

0xa4fb,	// (0x0003005e) popup_side_volume_key_window

0x08be,	// (0x00026421) stacon_top_pane

0x08c8,	// (0x0002642b) status_pane_ParamLimits

0x08c8,	// (0x0002642b) status_pane

0xa515,	// (0x00030078) status_small_pane

0xc859,	// (0x000323bc) control_pane

0xc859,	// (0x000323bc) stacon_bottom_pane

0xcc4a,	// (0x000327ad) scroll_pane_cp121

0xcc41,	// (0x000327a4) set_content_pane

0xa46c,	// (0x0002ffcf) bg_active_tab_pane_g1_cp1

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp1

0xa47e,	// (0x0002ffe1) bg_active_tab_pane_g3_cp1

0xa46c,	// (0x0002ffcf) bg_passive_tab_pane_g1_cp1

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp1

0xa47e,	// (0x0002ffe1) bg_passive_tab_pane_g3_cp1

0xa487,	// (0x0002ffea) bg_active_tab_pane_g1_cp2

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp2

0xa490,	// (0x0002fff3) bg_active_tab_pane_g3_cp2

0xa487,	// (0x0002ffea) bg_passive_tab_pane_g1_cp2

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp2

0xa490,	// (0x0002fff3) bg_passive_tab_pane_g3_cp2

0xa499,	// (0x0002fffc) bg_active_tab_pane_g1_cp3

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp3

0xa4a2,	// (0x00030005) bg_active_tab_pane_g3_cp3

0xa499,	// (0x0002fffc) bg_passive_tab_pane_g1_cp3

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp3

0xa4a2,	// (0x00030005) bg_passive_tab_pane_g3_cp3

0xa4ab,	// (0x0003000e) bg_active_tab_pane_g1_cp4

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp4

0xa4b6,	// (0x00030019) bg_active_tab_pane_g3_cp4

0xa4ab,	// (0x0003000e) bg_passive_tab_pane_g1_cp4

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp4

0xa4b6,	// (0x00030019) bg_passive_tab_pane_g3_cp4

0xa4c1,	// (0x00030024) bg_active_tab_pane_g1_cp5

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp5

0xa4ca,	// (0x0003002d) bg_active_tab_pane_g3_cp5

0xa4c1,	// (0x00030024) bg_passive_tab_pane_g1_cp5

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp5

0xa4ca,	// (0x0003002d) bg_passive_tab_pane_g3_cp5

0x49d2,	// (0x0002a535) list_set_graphic_pane_ParamLimits

0x49d2,	// (0x0002a535) list_set_graphic_pane

0xc859,	// (0x000323bc) bg_set_opt_pane_cp4

0x080d,	// (0x00026370) list_set_graphic_pane_g1_ParamLimits

0x080d,	// (0x00026370) list_set_graphic_pane_g1

0x0819,	// (0x0002637c) list_set_graphic_pane_g2_ParamLimits

0x0819,	// (0x0002637c) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x000352a7) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x000352a7) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x0003562c) volume_small_pane_cp_g

0xa4d3,	// (0x00030036) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4d3,	// (0x00030036) list_double2_large_graphic_pane_g1_cp2

0x0847,	// (0x000263aa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0847,	// (0x000263aa) list_double2_large_graphic_pane_g2_cp2

0x0858,	// (0x000263bb) list_double2_large_graphic_pane_g3_cp2

0x0860,	// (0x000263c3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0860,	// (0x000263c3) list_double2_large_graphic_pane_t1_cp2

0x0876,	// (0x000263d9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0876,	// (0x000263d9) list_double2_large_graphic_pane_t2_cp2

0xba32,	// (0x00031595) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xba32,	// (0x00031595) list_double_large_graphic_pane_g1_cp2

0x3fa4,	// (0x00029b07) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3fa4,	// (0x00029b07) list_double_large_graphic_pane_g2_cp2

0x09e3,	// (0x00026546) list_double_large_graphic_pane_g3_cp2

0x3fb5,	// (0x00029b18) list_double_large_graphic_pane_g4_cp

0x3fbd,	// (0x00029b20) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3fbd,	// (0x00029b20) list_double_large_graphic_pane_t1_cp2

0x3fd4,	// (0x00029b37) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3fd4,	// (0x00029b37) list_double_large_graphic_pane_t2_cp2

0x08e1,	// (0x00026444) list_double2_graphic_pane_g1_cp2_ParamLimits

0x08e1,	// (0x00026444) list_double2_graphic_pane_g1_cp2

0x08ef,	// (0x00026452) list_double2_graphic_pane_g2_cp2_ParamLimits

0x08ef,	// (0x00026452) list_double2_graphic_pane_g2_cp2

0x0900,	// (0x00026463) list_double2_graphic_pane_g3_cp2

0x090a,	// (0x0002646d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x090a,	// (0x0002646d) list_double2_graphic_pane_t1_cp2

0x0920,	// (0x00026483) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0920,	// (0x00026483) list_double2_graphic_pane_t2_cp2

0xd151,	// (0x00032cb4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd151,	// (0x00032cb4) list_single_number_heading_pane_g1_cp2

0x0932,	// (0x00026495) list_single_number_heading_pane_g2_cp2

0x093a,	// (0x0002649d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x093a,	// (0x0002649d) list_single_number_heading_pane_t1_cp2

0x0950,	// (0x000264b3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0950,	// (0x000264b3) list_single_number_heading_pane_t2_cp2

0x0962,	// (0x000264c5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0962,	// (0x000264c5) list_single_number_heading_pane_t3_cp2

0xd151,	// (0x00032cb4) list_single_heading_pane_g1_cp2_ParamLimits

0xd151,	// (0x00032cb4) list_single_heading_pane_g1_cp2

0x0932,	// (0x00026495) list_single_heading_pane_g2_cp2

0x093a,	// (0x0002649d) list_single_heading_pane_t1_cp2_ParamLimits

0x093a,	// (0x0002649d) list_single_heading_pane_t1_cp2

0x3d9d,	// (0x00029900) list_single_heading_pane_t2_cp2_ParamLimits

0x3d9d,	// (0x00029900) list_single_heading_pane_t2_cp2

0x3ce5,	// (0x00029848) list_double_graphic_pane_g1_cp2_ParamLimits

0x3ce5,	// (0x00029848) list_double_graphic_pane_g1_cp2

0x3cf1,	// (0x00029854) list_double_graphic_pane_g2_cp2_ParamLimits

0x3cf1,	// (0x00029854) list_double_graphic_pane_g2_cp2

0x3d00,	// (0x00029863) list_double_graphic_pane_g3_cp2

0x3d08,	// (0x0002986b) list_double_graphic_pane_t1_cp2_ParamLimits

0x3d08,	// (0x0002986b) list_double_graphic_pane_t1_cp2

0x3d1e,	// (0x00029881) list_double_graphic_pane_t2_cp2_ParamLimits

0x3d1e,	// (0x00029881) list_double_graphic_pane_t2_cp2

0x09d7,	// (0x0002653a) list_double_number_pane_g1_cp2_ParamLimits

0x09d7,	// (0x0002653a) list_double_number_pane_g1_cp2

0x09e3,	// (0x00026546) list_double_number_pane_g2_cp2

0x3ca9,	// (0x0002980c) list_double_number_pane_t1_cp2_ParamLimits

0x3ca9,	// (0x0002980c) list_double_number_pane_t1_cp2

0x3cbd,	// (0x00029820) list_double_number_pane_t2_cp2_ParamLimits

0x3cbd,	// (0x00029820) list_double_number_pane_t2_cp2

0x3cd3,	// (0x00029836) list_double_number_pane_t3_cp2_ParamLimits

0x3cd3,	// (0x00029836) list_double_number_pane_t3_cp2

0x3b92,	// (0x000296f5) list_single_graphic_pane_g1_cp2_ParamLimits

0x3b92,	// (0x000296f5) list_single_graphic_pane_g1_cp2

0x0a3b,	// (0x0002659e) list_single_graphic_pane_g2_cp2_ParamLimits

0x0a3b,	// (0x0002659e) list_single_graphic_pane_g2_cp2

0x0a47,	// (0x000265aa) list_single_graphic_pane_g3_cp2

0x3b68,	// (0x000296cb) list_single_graphic_pane_t1_cp2_ParamLimits

0x3b68,	// (0x000296cb) list_single_graphic_pane_t1_cp2

0x0a3b,	// (0x0002659e) list_single_number_pane_g1_cp2_ParamLimits

0x0a3b,	// (0x0002659e) list_single_number_pane_g1_cp2

0x0a47,	// (0x000265aa) list_single_number_pane_g2_cp2

0x3b68,	// (0x000296cb) list_single_number_pane_t1_cp2_ParamLimits

0x3b68,	// (0x000296cb) list_single_number_pane_t1_cp2

0x3b7e,	// (0x000296e1) list_single_number_pane_t2_cp2_ParamLimits

0x3b7e,	// (0x000296e1) list_single_number_pane_t2_cp2

0x0847,	// (0x000263aa) list_double2_pane_g1_cp2_ParamLimits

0x0847,	// (0x000263aa) list_double2_pane_g1_cp2

0x0858,	// (0x000263bb) list_double2_pane_g2_cp2

0x09af,	// (0x00026512) list_double2_pane_t1_cp2_ParamLimits

0x09af,	// (0x00026512) list_double2_pane_t1_cp2

0x09c5,	// (0x00026528) list_double2_pane_t2_cp2_ParamLimits

0x09c5,	// (0x00026528) list_double2_pane_t2_cp2

0x09d7,	// (0x0002653a) list_double_pane_g1_cp2_ParamLimits

0x09d7,	// (0x0002653a) list_double_pane_g1_cp2

0x09e3,	// (0x00026546) list_double_pane_g2_cp2

0x09eb,	// (0x0002654e) list_double_pane_t1_cp2_ParamLimits

0x09eb,	// (0x0002654e) list_double_pane_t1_cp2

0x0a01,	// (0x00026564) list_double_pane_t2_cp2_ParamLimits

0x0a01,	// (0x00026564) list_double_pane_t2_cp2

0xa520,	// (0x00030083) list_single_pane_cp2_g3

0x0a3b,	// (0x0002659e) list_single_pane_g1_cp2_ParamLimits

0x0a3b,	// (0x0002659e) list_single_pane_g1_cp2

0x0a47,	// (0x000265aa) list_single_pane_g2_cp2

0x0a4f,	// (0x000265b2) list_single_pane_t1_cp2_ParamLimits

0x0a4f,	// (0x000265b2) list_single_pane_t1_cp2

0xa528,	// (0x0003008b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa528,	// (0x0003008b) list_single_large_graphic_pane_g1_cp2

0x0a73,	// (0x000265d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0a73,	// (0x000265d6) list_single_large_graphic_pane_g2_cp2

0x0a7f,	// (0x000265e2) list_single_large_graphic_pane_g3_cp2

0xa534,	// (0x00030097) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa534,	// (0x00030097) list_single_large_graphic_pane_g4_cp1

0x0aa1,	// (0x00026604) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0aa1,	// (0x00026604) list_single_large_graphic_pane_t1_cp2

0x3b34,	// (0x00029697) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3b34,	// (0x00029697) list_single_graphic_heading_pane_g1_cp2

0x3b01,	// (0x00029664) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3b01,	// (0x00029664) list_single_graphic_heading_pane_g4_cp2

0x0a47,	// (0x000265aa) list_single_graphic_heading_pane_g5_cp2

0x3b40,	// (0x000296a3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3b40,	// (0x000296a3) list_single_graphic_heading_pane_t1_cp2

0x3b56,	// (0x000296b9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3b56,	// (0x000296b9) list_single_graphic_heading_pane_t2_cp2

0x3af5,	// (0x00029658) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3af5,	// (0x00029658) list_single_2graphic_pane_g1_cp2

0x3b01,	// (0x00029664) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3b01,	// (0x00029664) list_single_2graphic_pane_g2_cp2

0x0a47,	// (0x000265aa) list_single_2graphic_pane_g3_cp2

0x3b12,	// (0x00029675) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3b12,	// (0x00029675) list_single_2graphic_pane_g4_cp2

0x3b1e,	// (0x00029681) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3b1e,	// (0x00029681) list_single_2graphic_pane_t1_cp2

0xc84f,	// (0x000323b2) list_highlight_pane_g10_cp1

0x36dd,	// (0x00029240) list_highlight_pane_g1_cp1

0x36e5,	// (0x00029248) list_highlight_pane_g2_cp1

0x36ed,	// (0x00029250) list_highlight_pane_g3_cp1

0x36f5,	// (0x00029258) list_highlight_pane_g4_cp1

0x36fd,	// (0x00029260) list_highlight_pane_g5_cp1

0x3705,	// (0x00029268) list_highlight_pane_g6_cp1

0x370d,	// (0x00029270) list_highlight_pane_g7_cp1

0x3715,	// (0x00029278) list_highlight_pane_g8_cp1

0x371d,	// (0x00029280) list_highlight_pane_g9_cp1

0xb7bf,	// (0x00031322) form_field_slider_pane_t3

0xb7cd,	// (0x00031330) form_field_slider_pane_t4

0x3621,	// (0x00029184) slider_form_pane_ParamLimits

0x3621,	// (0x00029184) slider_form_pane

0xc859,	// (0x000323bc) control_abbreviations

0xc859,	// (0x000323bc) control_conventions

0xc859,	// (0x000323bc) control_definitions

0xc859,	// (0x000323bc) format_table_attribute

0xba09,	// (0x0003156c) bg_popup_preview_window_pane_g9

0xc859,	// (0x000323bc) format_table_data2

0xc859,	// (0x000323bc) format_table_data3

0xc859,	// (0x000323bc) format_table_data_example

0x0008,

0xc859,	// (0x000323bc) intro_purpose

0xf8d4,	// (0x00035437) bg_popup_preview_window_pane_g

0xc859,	// (0x000323bc) texts_category

0xc859,	// (0x000323bc) texts_graphics

0x0ab7,	// (0x0002661a) text_digital

0x0ac6,	// (0x00026629) text_primary

0x0ad5,	// (0x00026638) text_primary_small

0x0ae4,	// (0x00026647) text_secondary

0x0af3,	// (0x00026656) text_title

0xbe2a,	// (0x0003198d) bg_passive_tab_pane_g1_cp3_srt

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp3_srt

0xbe33,	// (0x00031996) bg_passive_tab_pane_g3_cp3_srt

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp3_srt_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp3_srt

0xbe3c,	// (0x0003199f) tabs_4_active_pane_srt_g1

0xbe44,	// (0x000319a7) tabs_4_active_pane_srt_t1_ParamLimits

0xbe44,	// (0x000319a7) tabs_4_active_pane_srt_t1

0xbe2a,	// (0x0003198d) bg_active_tab_pane_g1_cp3_copy1

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp3_copy1

0xbe33,	// (0x00031996) bg_active_tab_pane_g3_cp3_copy1

0xc8b5,	// (0x00032418) tabs_2_long_active_pane_srt_ParamLimits

0xc8b5,	// (0x00032418) tabs_2_long_active_pane_srt

0xc8b5,	// (0x00032418) tabs_2_long_passive_pane_srt_ParamLimits

0xc8b5,	// (0x00032418) tabs_2_long_passive_pane_srt

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp4_srt

0xbb71,	// (0x000316d4) bg_passive_tab_pane_g1_cp4_srt

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp4_srt

0xbb7a,	// (0x000316dd) bg_passive_tab_pane_g3_cp4_srt

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp4_srt_ParamLimits

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp4_srt

0xbb83,	// (0x000316e6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbb83,	// (0x000316e6) tabs_2_long_active_pane_srt_t1

0xbb71,	// (0x000316d4) bg_active_tab_pane_g1_cp4_srt

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp4_srt

0xbb7a,	// (0x000316dd) bg_active_tab_pane_g3_cp4_srt

0xc8a7,	// (0x0003240a) tabs_3_long_active_pane_srt_ParamLimits

0xc8a7,	// (0x0003240a) tabs_3_long_active_pane_srt

0xc8a7,	// (0x0003240a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc8a7,	// (0x0003240a) tabs_3_long_passive_pane_cp_srt

0xc8a7,	// (0x0003240a) tabs_3_long_passive_pane_srt_ParamLimits

0xc8a7,	// (0x0003240a) tabs_3_long_passive_pane_srt

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp5_srt

0xa4c1,	// (0x00030024) bg_passive_tab_pane_g1_cp5_srt

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp5_srt

0xa4ca,	// (0x0003002d) bg_passive_tab_pane_g3_cp5_srt

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp5_srt_ParamLimits

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp5_srt

0xbb5b,	// (0x000316be) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbb5b,	// (0x000316be) tabs_3_long_active_pane_srt_t1

0xa4c1,	// (0x00030024) bg_active_tab_pane_g1_cp5_srt

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp5_srt

0xa4ca,	// (0x0003002d) bg_active_tab_pane_g3_cp5_srt

0x41e8,	// (0x00029d4b) navi_text_pane_srt_t1

0x41e0,	// (0x00029d43) navi_icon_pane_srt_g1

0x0d6d,	// (0x000268d0) midp_editing_number_pane_srt

0x0b02,	// (0x00026665) midp_ticker_pane_srt

0x0d75,	// (0x000268d8) midp_ticker_pane_srt_g1

0x0d7d,	// (0x000268e0) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x000352c6) midp_ticker_pane_srt_g

0x0d85,	// (0x000268e8) midp_ticker_pane_srt_t1

0x41d1,	// (0x00029d34) midp_editing_number_pane_t1_copy1

0xa54e,	// (0x000300b1) listscroll_midp_pane

0xa54e,	// (0x000300b1) midp_form_pane

0xa5b9,	// (0x0003011c) midp_info_popup_window_ParamLimits

0xa5b9,	// (0x0003011c) midp_info_popup_window

0xcd10,	// (0x00032873) bg_popup_sub_pane_cp50_ParamLimits

0xcd10,	// (0x00032873) bg_popup_sub_pane_cp50

0x3325,	// (0x00028e88) listscroll_midp_info_pane_ParamLimits

0x3325,	// (0x00028e88) listscroll_midp_info_pane

0x3305,	// (0x00028e68) listscroll_form_midp_pane_ParamLimits

0x3305,	// (0x00028e68) listscroll_form_midp_pane

0x3311,	// (0x00028e74) scroll_bar_cp050

0x3305,	// (0x00028e68) list_midp_pane

0xc034,	// (0x00031b97) signal_pane_g2_cp

0x321f,	// (0x00028d82) listscroll_midp_info_pane_t1_ParamLimits

0x321f,	// (0x00028d82) listscroll_midp_info_pane_t1

0xb5f9,	// (0x0003115c) listscroll_midp_info_pane_t2_ParamLimits

0xb5f9,	// (0x0003115c) listscroll_midp_info_pane_t2

0xb637,	// (0x0003119a) listscroll_midp_info_pane_t3_ParamLimits

0xb637,	// (0x0003119a) listscroll_midp_info_pane_t3

0xb671,	// (0x000311d4) listscroll_midp_info_pane_t4_ParamLimits

0xb671,	// (0x000311d4) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00035372) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00035372) listscroll_midp_info_pane_t

0xcd86,	// (0x000328e9) scroll_pane_cp21

0x31bf,	// (0x00028d22) form_midp_field_choice_group_pane

0xb5bc,	// (0x0003111f) form_midp_field_text_pane

0x3205,	// (0x00028d68) form_midp_field_time_pane

0x320d,	// (0x00028d70) form_midp_gauge_slider_pane

0x3216,	// (0x00028d79) form_midp_gauge_wait_pane

0xc859,	// (0x000323bc) form_midp_image_pane

0x967a,	// (0x0002f1dd) list_single_midp_pane_ParamLimits

0x967a,	// (0x0002f1dd) list_single_midp_pane

0xb59a,	// (0x000310fd) form_midp_field_text_pane_t1

0x2f3e,	// (0x00028aa1) input_focus_pane_cp050

0x31ae,	// (0x00028d11) list_midp_form_text_pane

0x3143,	// (0x00028ca6) form_midp_field_choice_group_pane_t1

0x3151,	// (0x00028cb4) input_focus_pane_cp051

0x3165,	// (0x00028cc8) list_midp_choice_pane

0xc859,	// (0x000323bc) status_idle_pane

0x3127,	// (0x00028c8a) form_midp_field_time_pane_t1

0xc84f,	// (0x000323b2) wait_anim_pane_g2_copy1

0x3135,	// (0x00028c98) form_midp_field_time_pane_t2

0x0001,

0x0c2c,	// (0x0002678f) aid_navinavi_width_2_pane

0xf80a,	// (0x0003536d) form_midp_field_time_pane_t

0xc859,	// (0x000323bc) input_focus_pane_cp052

0xc859,	// (0x000323bc) bg_input_focus_pane_cp040

0x30e7,	// (0x00028c4a) form_midp_gauge_slider_pane_t1

0x30f5,	// (0x00028c58) form_midp_gauge_slider_pane_t2

0xb57e,	// (0x000310e1) form_midp_gauge_slider_pane_t3

0xb58c,	// (0x000310ef) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00035364) form_midp_gauge_slider_pane_t

0x311f,	// (0x00028c82) form_midp_slider_pane

0xc8b5,	// (0x00032418) bg_input_focus_pane_cp041_ParamLimits

0xc8b5,	// (0x00032418) bg_input_focus_pane_cp041

0x30b4,	// (0x00028c17) form_midp_gauge_wait_pane_t1_ParamLimits

0x30b4,	// (0x00028c17) form_midp_gauge_wait_pane_t1

0x30c6,	// (0x00028c29) form_midp_gauge_wait_pane_t2_ParamLimits

0x30c6,	// (0x00028c29) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x0003535f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x0003535f) form_midp_gauge_wait_pane_t

0x30d8,	// (0x00028c3b) form_midp_wait_pane_ParamLimits

0x30d8,	// (0x00028c3b) form_midp_wait_pane

0xb548,	// (0x000310ab) form_midp_image_pane_g1

0xb551,	// (0x000310b4) form_midp_image_pane_t1

0xb560,	// (0x000310c3) form_midp_image_pane_t2

0xb56f,	// (0x000310d2) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00035358) form_midp_image_pane_t

0x3075,	// (0x00028bd8) list_single_midp_pane_g1

0xeda3,	// (0x00034906) list_single_midp_pane_t1

0xb533,	// (0x00031096) list_midp_form_item_pane_ParamLimits

0xb533,	// (0x00031096) list_midp_form_item_pane

0x0bd4,	// (0x00026737) list_midp_form_item_pane_t1

0x0be3,	// (0x00026746) midp_ticker_pane_g1

0x0bef,	// (0x00026752) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x000352ac) midp_ticker_pane_g

0x0bfb,	// (0x0002675e) midp_ticker_pane_t1

0x441e,	// (0x00029f81) midp_editing_number_pane_t1

0x43fc,	// (0x00029f5f) midp_editing_number_pane

0x440b,	// (0x00029f6e) midp_ticker_pane

0x41c1,	// (0x00029d24) ai_message_heading_pane

0xc859,	// (0x000323bc) bg_popup_window_pane_cp14

0x41c9,	// (0x00029d2c) listscroll_ai_message_pane

0x414b,	// (0x00029cae) ai_message_heading_pane_g1_ParamLimits

0x414b,	// (0x00029cae) ai_message_heading_pane_g1

0xbb23,	// (0x00031686) ai_message_heading_pane_g2_ParamLimits

0xbb23,	// (0x00031686) ai_message_heading_pane_g2

0x4163,	// (0x00029cc6) ai_message_heading_pane_g3_ParamLimits

0x4163,	// (0x00029cc6) ai_message_heading_pane_g3

0x416f,	// (0x00029cd2) ai_message_heading_pane_g4_ParamLimits

0x416f,	// (0x00029cd2) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00035499) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00035499) ai_message_heading_pane_g

0xbb2f,	// (0x00031692) ai_message_heading_pane_t1_ParamLimits

0xbb2f,	// (0x00031692) ai_message_heading_pane_t1

0xbb49,	// (0x000316ac) ai_message_heading_pane_t2_ParamLimits

0xbb49,	// (0x000316ac) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x000354a2) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x000354a2) ai_message_heading_pane_t

0x41a7,	// (0x00029d0a) bg_popup_heading_pane_cp1_ParamLimits

0x41a7,	// (0x00029d0a) bg_popup_heading_pane_cp1

0x4139,	// (0x00029c9c) list_ai_message_pane_ParamLimits

0x4139,	// (0x00029c9c) list_ai_message_pane

0xcd86,	// (0x000328e9) scroll_pane_cp10

0x40d5,	// (0x00029c38) list_ai_message_pane_g1

0x40dd,	// (0x00029c40) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00035476) list_ai_message_pane_g

0x40e5,	// (0x00029c48) list_ai_message_pane_t1_ParamLimits

0x40e5,	// (0x00029c48) list_ai_message_pane_t1

0x40fa,	// (0x00029c5d) list_ai_message_pane_t2_ParamLimits

0x40fa,	// (0x00029c5d) list_ai_message_pane_t2

0x410f,	// (0x00029c72) list_ai_message_pane_t3_ParamLimits

0x410f,	// (0x00029c72) list_ai_message_pane_t3

0x4124,	// (0x00029c87) list_ai_message_pane_t4_ParamLimits

0x4124,	// (0x00029c87) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x0003547b) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x0003547b) list_ai_message_pane_t

0xbaaf,	// (0x00031612) cell_ai_soft_ind_pane_ParamLimits

0xbaaf,	// (0x00031612) cell_ai_soft_ind_pane

0x0c0d,	// (0x00026770) cell_ai_soft_ind_pane_g1_ParamLimits

0x0c0d,	// (0x00026770) cell_ai_soft_ind_pane_g1

0xc859,	// (0x000323bc) grid_highlight_cp1

0x0c1a,	// (0x0002677d) text_secondary_cp56_ParamLimits

0x0c1a,	// (0x0002677d) text_secondary_cp56

0x4095,	// (0x00029bf8) example_general_pane_ParamLimits

0x4095,	// (0x00029bf8) example_general_pane

0x40a1,	// (0x00029c04) example_parent_pane_g1_ParamLimits

0x40a1,	// (0x00029c04) example_parent_pane_g1

0x40ad,	// (0x00029c10) example_parent_pane_t1_ParamLimits

0x40ad,	// (0x00029c10) example_parent_pane_t1

0xacb7,	// (0x0003081a) popup_preview_text_window_ParamLimits

0xacb7,	// (0x0003081a) popup_preview_text_window

0x0a33,	// (0x00026596) list_single_pane_cp2_g4

0xca87,	// (0x000325ea) bg_popup_preview_window_pane_ParamLimits

0xca87,	// (0x000325ea) bg_popup_preview_window_pane

0xba11,	// (0x00031574) popup_preview_text_window_t1_ParamLimits

0xba11,	// (0x00031574) popup_preview_text_window_t1

0x3e0d,	// (0x00029970) popup_preview_text_window_t2_ParamLimits

0x3e0d,	// (0x00029970) popup_preview_text_window_t2

0x3e56,	// (0x000299b9) popup_preview_text_window_t3_ParamLimits

0x3e56,	// (0x000299b9) popup_preview_text_window_t3

0x3e9b,	// (0x000299fe) popup_preview_text_window_t4_ParamLimits

0x3e9b,	// (0x000299fe) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x0003544a) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x0003544a) popup_preview_text_window_t

0x3f19,	// (0x00029a7c) scroll_pane_cp11

0x2eca,	// (0x00028a2d) bg_popup_preview_window_pane_g1

0xb9d1,	// (0x00031534) bg_popup_preview_window_pane_g2

0xb9d9,	// (0x0003153c) bg_popup_preview_window_pane_g3

0xb9e1,	// (0x00031544) bg_popup_preview_window_pane_g4

0xb9e9,	// (0x0003154c) bg_popup_preview_window_pane_g5

0xb9f1,	// (0x00031554) bg_popup_preview_window_pane_g6

0xb9f9,	// (0x0003155c) bg_popup_preview_window_pane_g7

0xba01,	// (0x00031564) bg_popup_preview_window_pane_g8

0xf3cb,	// (0x00034f2e) aid_popup_width_pane

0xac33,	// (0x00030796) popup_midp_note_alarm_window_ParamLimits

0xac33,	// (0x00030796) popup_midp_note_alarm_window

0xcc5b,	// (0x000327be) data_form_pane_ParamLimits

0x9461,	// (0x0002efc4) form_field_data_pane_g1

0x946b,	// (0x0002efce) form_field_data_pane_t1_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_ParamLimits

0x9485,	// (0x0002efe8) data_form_wide_pane_ParamLimits

0x9496,	// (0x0002eff9) form_field_data_wide_pane_g1

0x94a2,	// (0x0002f005) form_field_data_wide_pane_t1_ParamLimits

0xcb5b,	// (0x000326be) input_focus_pane_cp6_ParamLimits

0xa155,	// (0x0002fcb8) input_popup_find_pane_g1_ParamLimits

0xa155,	// (0x0002fcb8) input_popup_find_pane_g1

0x01b5,	// (0x00025d18) aid_navi_side_left_pane

0x01ca,	// (0x00025d2d) aid_navi_side_right_pane

0x37d8,	// (0x0002933b) bg_popup_window_pane_cp30_ParamLimits

0x37d8,	// (0x0002933b) bg_popup_window_pane_cp30

0x3852,	// (0x000293b5) popup_midp_note_alarm_window_g1_ParamLimits

0x3852,	// (0x000293b5) popup_midp_note_alarm_window_g1

0x3882,	// (0x000293e5) popup_midp_note_alarm_window_t1_ParamLimits

0x3882,	// (0x000293e5) popup_midp_note_alarm_window_t1

0xb812,	// (0x00031375) popup_midp_note_alarm_window_t2_ParamLimits

0xb812,	// (0x00031375) popup_midp_note_alarm_window_t2

0xb8c0,	// (0x00031423) popup_midp_note_alarm_window_t3_ParamLimits

0xb8c0,	// (0x00031423) popup_midp_note_alarm_window_t3

0xb8e8,	// (0x0003144b) popup_midp_note_alarm_window_t4_ParamLimits

0xb8e8,	// (0x0003144b) popup_midp_note_alarm_window_t4

0x3a19,	// (0x0002957c) popup_midp_note_alarm_window_t5_ParamLimits

0x3a19,	// (0x0002957c) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x000353e7) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x000353e7) popup_midp_note_alarm_window_t

0x3ac5,	// (0x00029628) wait_bar_pane_cp1_ParamLimits

0x3ac5,	// (0x00029628) wait_bar_pane_cp1

0xc859,	// (0x000323bc) wait_anim_pane_copy1

0xc859,	// (0x000323bc) wait_border_pane_copy1

0x34ce,	// (0x00029031) wait_border_pane_g1_copy1

0x94bc,	// (0x0002f01f) form_field_popup_pane_g1

0x94c4,	// (0x0002f027) form_field_popup_pane_t1_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_cp7_ParamLimits

0xcc95,	// (0x000327f8) list_form_pane_ParamLimits

0x94de,	// (0x0002f041) form_field_popup_wide_pane_g1

0x94e6,	// (0x0002f049) form_field_popup_wide_pane_t1_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_cp8_ParamLimits

0xcca1,	// (0x00032804) list_form_wide_pane_ParamLimits

0xbe9d,	// (0x00031a00) aid_size_cell_graphic_pane

0x9572,	// (0x0002f0d5) data_form_pane_t1_ParamLimits

0x96a3,	// (0x0002f206) data_form_wide_pane_t1_ParamLimits

0xb0fa,	// (0x00030c5d) bg_status_flat_pane

0x9b2c,	// (0x0002f68f) title_pane_t1_ParamLimits

0xc86f,	// (0x000323d2) title_pane_t2_ParamLimits

0xc895,	// (0x000323f8) title_pane_t3_ParamLimits

0xf557,	// (0x000350ba) title_pane_t_ParamLimits

0xd02f,	// (0x00032b92) level_1_signal_ParamLimits

0xd03c,	// (0x00032b9f) level_2_signal_ParamLimits

0xd049,	// (0x00032bac) level_3_signal_ParamLimits

0xd056,	// (0x00032bb9) level_4_signal_ParamLimits

0xd063,	// (0x00032bc6) level_5_signal_ParamLimits

0xd070,	// (0x00032bd3) level_6_signal_ParamLimits

0xd07d,	// (0x00032be0) level_7_signal_ParamLimits

0xd02f,	// (0x00032b92) level_1_battery_ParamLimits

0xd03c,	// (0x00032b9f) level_2_battery_ParamLimits

0xd049,	// (0x00032bac) level_3_battery_ParamLimits

0xd056,	// (0x00032bb9) level_4_battery_ParamLimits

0xd063,	// (0x00032bc6) level_5_battery_ParamLimits

0xd070,	// (0x00032bd3) level_6_battery_ParamLimits

0xd07d,	// (0x00032be0) level_7_battery_ParamLimits

0x36dd,	// (0x00029240) bg_status_flat_pane_g1

0x36e5,	// (0x00029248) bg_status_flat_pane_g2

0x36ed,	// (0x00029250) bg_status_flat_pane_g3

0x36f5,	// (0x00029258) bg_status_flat_pane_g4

0x36fd,	// (0x00029260) bg_status_flat_pane_g5

0x3705,	// (0x00029268) bg_status_flat_pane_g6

0x370d,	// (0x00029270) bg_status_flat_pane_g7

0x9bc0,	// (0x0002f723) tabs_3_active_pane_t1_ParamLimits

0x9bc0,	// (0x0002f723) tabs_3_passive_pane_t1_ParamLimits

0x9bda,	// (0x0002f73d) tabs_4_active_pane_t1_ParamLimits

0x9bda,	// (0x0002f73d) tabs_4_1_passive_pane_t1_ParamLimits

0xa194,	// (0x0002fcf7) tabs_2_active_pane_t1_ParamLimits

0xa194,	// (0x0002fcf7) tabs_2_passive_pane_t1_ParamLimits

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp4_ParamLimits

0xa1a6,	// (0x0002fd09) tabs_2_long_active_pane_t1_ParamLimits

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp4_ParamLimits

0x19ba,	// (0x0002751d) list_single_midp_graphic_pane_t1_ParamLimits

0xc8b5,	// (0x00032418) bg_active_tab_pane_cp5_ParamLimits

0xa1b9,	// (0x0002fd1c) tabs_3_long_active_pane_t1_ParamLimits

0x1067,	// (0x00026bca) bg_passive_tab_pane_cp5_ParamLimits

0x19ba,	// (0x0002751d) list_single_midp_graphic_pane_t1

0xb0fa,	// (0x00030c5d) bg_status_flat_pane_ParamLimits

0x17a2,	// (0x00027305) indicator_pane_cp2_ParamLimits

0x17a2,	// (0x00027305) indicator_pane_cp2

0xb278,	// (0x00030ddb) navi_pane_srt_ParamLimits

0xb278,	// (0x00030ddb) navi_pane_srt

0x18f1,	// (0x00027454) popup_clock_digital_analogue_window_cp1

0xc8f9,	// (0x0003245c) indicator_pane_t1

0x0b02,	// (0x00026665) copy_highlight_pane

0x0b02,	// (0x00026665) cursor_graphics_pane

0x0b02,	// (0x00026665) graphic_within_text_pane

0x0b02,	// (0x00026665) link_highlight_pane

0x3edc,	// (0x00029a3f) popup_preview_text_window_t5_ParamLimits

0x3edc,	// (0x00029a3f) popup_preview_text_window_t5

0x0c34,	// (0x00026797) cursor_digital_pane

0x0c34,	// (0x00026797) cursor_primary_pane

0x0c45,	// (0x000267a8) cursor_primary_small_pane

0x0c4d,	// (0x000267b0) cursor_secondary_pane

0x0c55,	// (0x000267b8) cursor_title_pane

0x0c34,	// (0x00026797) link_highlight_digital_pane

0x0c3c,	// (0x0002679f) link_highlight_primary_pane

0x0c45,	// (0x000267a8) link_highlight_primary_small_pane

0x0c4d,	// (0x000267b0) link_highlight_secondary_pane

0x0c55,	// (0x000267b8) link_highlight_title_pane

0x0c34,	// (0x00026797) copy_highlight_digital_pane

0x0c34,	// (0x00026797) copy_highlight_primary_pane

0x0c45,	// (0x000267a8) copy_highlight_primary_small_pane

0x0c4d,	// (0x000267b0) copy_highlight_secondary_pane

0x0c55,	// (0x000267b8) copy_highlight_title_pane

0x0c4d,	// (0x000267b0) graphic_text_digital_pane

0x377b,	// (0x000292de) graphic_text_primary_pane

0x3784,	// (0x000292e7) graphic_text_primary_small_pane

0x0c45,	// (0x000267a8) graphic_text_secondary_pane

0x0c34,	// (0x00026797) graphic_text_title_pane

0xa60a,	// (0x0003016d) cursor_primary_pane_g1

0x376d,	// (0x000292d0) cursor_text_primary_t1

0xb808,	// (0x0003136b) cursor_primary_small_pane_g1

0x375f,	// (0x000292c2) cursor_text_primary_small_t1

0xb7fe,	// (0x00031361) cursor_primary_small_pane_g1_copy1

0x3747,	// (0x000292aa) cursor_text_primary_small_t1_copy1

0x3725,	// (0x00029288) cursor_text_title_t1

0xb7f4,	// (0x00031357) cursor_title_pane_g1

0xa60a,	// (0x0003016d) cursor_digital_pane_g1

0x0c67,	// (0x000267ca) cursor_text_digital_t1

0x0c75,	// (0x000267d8) link_highlight_primary_pane_g1

0x36ce,	// (0x00029231) link_highlight_primary_pane_t1

0x0c75,	// (0x000267d8) link_highlight_primary_small_pane_g1

0x0c7d,	// (0x000267e0) link_highlight_primary_small_pane_t1

0x0c75,	// (0x000267d8) link_highlight_secondary_pane_g1

0x0c8c,	// (0x000267ef) link_highlight_secondary_pane_t1

0x3633,	// (0x00029196) link_highlight_title_pane_g1

0x364a,	// (0x000291ad) link_highlight_title_pane_t1

0x3633,	// (0x00029196) link_highlight_digital_pane_g1

0x363b,	// (0x0002919e) link_highlight_digital_pane_t1

0x34ed,	// (0x00029050) copy_highlight_primary_pane_g1

0x3513,	// (0x00029076) copy_highlight_primary_pane_t1

0x34ed,	// (0x00029050) copy_highlight_primary_small_pane_g1

0x3504,	// (0x00029067) copy_highlight_primary_small_pane_t1

0x0c9b,	// (0x000267fe) copy_highlight_secondary_pane_g1

0x0ca3,	// (0x00026806) copy_highlight_secondary_pane_t1

0x34ed,	// (0x00029050) copy_highlight_title_pane_g1

0x34f5,	// (0x00029058) copy_highlight_title_pane_t1

0x34ed,	// (0x00029050) copy_highlight_digital_pane_g1

0x4776,	// (0x0002a2d9) copy_highlight_digital_pane_t1

0x46ca,	// (0x0002a22d) graphic_text_primary_pane_g1

0x475a,	// (0x0002a2bd) graphic_text_primary_pane_t1

0x4768,	// (0x0002a2cb) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00035516) graphic_text_primary_pane_t

0x4736,	// (0x0002a299) graphic_text_primary_small_pane_g1

0x473e,	// (0x0002a2a1) graphic_text_primary_small_pane_t1

0x474c,	// (0x0002a2af) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00035511) graphic_text_primary_small_pane_t

0x4712,	// (0x0002a275) graphic_text_secondary_pane_g1

0x471a,	// (0x0002a27d) graphic_text_secondary_pane_t1

0x4728,	// (0x0002a28b) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x0003550c) graphic_text_secondary_pane_t

0x46ee,	// (0x0002a251) graphic_text_title_pane_g1

0x46f6,	// (0x0002a259) graphic_text_title_pane_t1

0x4704,	// (0x0002a267) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00035507) graphic_text_title_pane_t

0x46ca,	// (0x0002a22d) graphic_text_digital_pane_g1

0x46d2,	// (0x0002a235) graphic_text_digital_pane_t1

0x46e0,	// (0x0002a243) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00035502) graphic_text_digital_pane_t

0xc8b5,	// (0x00032418) navi_icon_pane_srt_ParamLimits

0xc8b5,	// (0x00032418) navi_icon_pane_srt

0xc859,	// (0x000323bc) navi_midp_pane_srt

0xc859,	// (0x000323bc) navi_navi_pane_srt

0xc8b5,	// (0x00032418) navi_text_pane_srt_ParamLimits

0xc8b5,	// (0x00032418) navi_text_pane_srt

0x4695,	// (0x0002a1f8) navi_navi_icon_text_pane_srt

0x469d,	// (0x0002a200) navi_navi_pane_srt_g1_ParamLimits

0x469d,	// (0x0002a200) navi_navi_pane_srt_g1

0x46af,	// (0x0002a212) navi_navi_pane_srt_g2_ParamLimits

0x46af,	// (0x0002a212) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x000354fd) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x000354fd) navi_navi_pane_srt_g

0x46c1,	// (0x0002a224) navi_navi_tabs_pane_srt

0x4695,	// (0x0002a1f8) navi_navi_text_pane_srt

0x4695,	// (0x0002a1f8) navi_navi_volume_pane_srt

0x4686,	// (0x0002a1e9) navi_navi_text_pane_srt_t1

0x1d3a,	// (0x0002789d) navi_navi_volume_pane_srt_g1

0x1d42,	// (0x000278a5) volume_small_pane_srt_ParamLimits

0x1d42,	// (0x000278a5) volume_small_pane_srt

0x0cb2,	// (0x00026815) volume_small_pane_srt_g1_ParamLimits

0x0cb2,	// (0x00026815) volume_small_pane_srt_g1

0x0cc2,	// (0x00026825) volume_small_pane_srt_g2_ParamLimits

0x0cc2,	// (0x00026825) volume_small_pane_srt_g2

0x0cd3,	// (0x00026836) volume_small_pane_srt_g3_ParamLimits

0x0cd3,	// (0x00026836) volume_small_pane_srt_g3

0x0ce4,	// (0x00026847) volume_small_pane_srt_g4_ParamLimits

0x0ce4,	// (0x00026847) volume_small_pane_srt_g4

0x0cf5,	// (0x00026858) volume_small_pane_srt_g5_ParamLimits

0x0cf5,	// (0x00026858) volume_small_pane_srt_g5

0x0d06,	// (0x00026869) volume_small_pane_srt_g6_ParamLimits

0x0d06,	// (0x00026869) volume_small_pane_srt_g6

0x0d17,	// (0x0002687a) volume_small_pane_srt_g7_ParamLimits

0x0d17,	// (0x0002687a) volume_small_pane_srt_g7

0x0d28,	// (0x0002688b) volume_small_pane_srt_g8_ParamLimits

0x0d28,	// (0x0002688b) volume_small_pane_srt_g8

0x0d39,	// (0x0002689c) volume_small_pane_srt_g9_ParamLimits

0x0d39,	// (0x0002689c) volume_small_pane_srt_g9

0x0d4a,	// (0x000268ad) volume_small_pane_srt_g10_ParamLimits

0x0d4a,	// (0x000268ad) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x000352b1) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x000352b1) volume_small_pane_srt_g

0x9e9b,	// (0x0002f9fe) query_popup_data_pane_cp2

0x466c,	// (0x0002a1cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x466c,	// (0x0002a1cf) navi_navi_icon_text_pane_srt_t1

0x377b,	// (0x000292de) navi_tabs_2_long_pane_srt

0x377b,	// (0x000292de) navi_tabs_2_pane_srt

0x377b,	// (0x000292de) navi_tabs_3_long_pane_srt

0x377b,	// (0x000292de) navi_tabs_3_pane_srt

0x377b,	// (0x000292de) navi_tabs_4_pane_srt

0xbf4a,	// (0x00031aad) tabs_2_active_pane_srt_ParamLimits

0xbf4a,	// (0x00031aad) tabs_2_active_pane_srt

0xbf5a,	// (0x00031abd) tabs_2_passive_pane_srt_ParamLimits

0xbf5a,	// (0x00031abd) tabs_2_passive_pane_srt

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp1_srt

0xbf1a,	// (0x00031a7d) bg_passive_tab_pane_g1_cp1_srt

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp1_srt

0xbf23,	// (0x00031a86) bg_passive_tab_pane_g3_cp1_srt

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp1_srt_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp1_srt

0xbf2c,	// (0x00031a8f) tabs_2_active_pane_srt_g1

0xbf34,	// (0x00031a97) tabs_2_active_pane_srt_t1_ParamLimits

0xbf34,	// (0x00031a97) tabs_2_active_pane_srt_t1

0xbf1a,	// (0x00031a7d) bg_active_tab_pane_g1_cp1_srt

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp1_srt

0xbf23,	// (0x00031a86) bg_active_tab_pane_g3_cp1_srt

0xbee7,	// (0x00031a4a) tabs_3_active_pane_srt_ParamLimits

0xbee7,	// (0x00031a4a) tabs_3_active_pane_srt

0xbef8,	// (0x00031a5b) tabs_3_passive_pane_cp_srt_ParamLimits

0xbef8,	// (0x00031a5b) tabs_3_passive_pane_cp_srt

0xbf09,	// (0x00031a6c) tabs_3_passive_pane_srt_ParamLimits

0xbf09,	// (0x00031a6c) tabs_3_passive_pane_srt

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2f3e,	// (0x00028aa1) bg_passive_tab_pane_cp2_srt

0xa614,	// (0x00030177) bg_passive_tab_pane_g1_cp2_srt

0xa475,	// (0x0002ffd8) bg_passive_tab_pane_g2_cp2_srt

0xa61d,	// (0x00030180) bg_passive_tab_pane_g3_cp2_srt

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp2_srt_ParamLimits

0xc8a7,	// (0x0003240a) bg_active_tab_pane_cp2_srt

0xbec9,	// (0x00031a2c) tabs_3_active_pane_srt_g1

0xbed1,	// (0x00031a34) tabs_3_active_pane_srt_t1_ParamLimits

0xbed1,	// (0x00031a34) tabs_3_active_pane_srt_t1

0xa614,	// (0x00030177) bg_active_tab_pane_g1_cp2_srt

0xa475,	// (0x0002ffd8) bg_active_tab_pane_g2_cp2_srt

0xa61d,	// (0x00030180) bg_active_tab_pane_g3_cp2_srt

0x1c9f,	// (0x00027802) tabs_4_active_pane_srt_ParamLimits

0x1c9f,	// (0x00027802) tabs_4_active_pane_srt

0x1cb1,	// (0x00027814) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1cb1,	// (0x00027814) tabs_4_passive_pane_cp2_srt

0x1009,	// (0x00026b6c) aid_size_cell_toolbar

0x4279,	// (0x00029ddc) main_idle_act_pane_ParamLimits

0xaa75,	// (0x000305d8) popup_large_graphic_colour_window_ParamLimits

0xaf69,	// (0x00030acc) popup_toolbar_window_ParamLimits

0xaf69,	// (0x00030acc) popup_toolbar_window

0xedb2,	// (0x00034915) list_single_graphic_2heading_pane_ParamLimits

0xedb2,	// (0x00034915) list_single_graphic_2heading_pane

0xcf17,	// (0x00032a7a) aid_size_cell_apps_grid_lsc_pane

0xcf29,	// (0x00032a8c) aid_size_cell_apps_grid_prt_pane

0x1067,	// (0x00026bca) bg_wml_button_pane_cp1_ParamLimits

0x1067,	// (0x00026bca) bg_wml_button_pane_cp1

0xb59a,	// (0x000310fd) form_midp_field_text_pane_t1_ParamLimits

0x2f3e,	// (0x00028aa1) input_focus_pane_cp050_ParamLimits

0x31ae,	// (0x00028d11) list_midp_form_text_pane_ParamLimits

0x3151,	// (0x00028cb4) input_focus_pane_cp051_ParamLimits

0x3165,	// (0x00028cc8) list_midp_choice_pane_ParamLimits

0xb4ff,	// (0x00031062) list_single_2graphic_pane_cp3_ParamLimits

0xb4ff,	// (0x00031062) list_single_2graphic_pane_cp3

0xb513,	// (0x00031076) list_single_midp_graphic_pane_ParamLimits

0xb513,	// (0x00031076) list_single_midp_graphic_pane

0xeca5,	// (0x00034808) list_single_graphic_2heading_pane_g1_ParamLimits

0xeca5,	// (0x00034808) list_single_graphic_2heading_pane_g1

0xeb6c,	// (0x000346cf) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb6c,	// (0x000346cf) list_single_graphic_2heading_pane_g4

0xeb78,	// (0x000346db) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb78,	// (0x000346db) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00035304) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00035304) list_single_graphic_2heading_pane_g

0xecb1,	// (0x00034814) list_single_graphic_2heading_pane_t1_ParamLimits

0xecb1,	// (0x00034814) list_single_graphic_2heading_pane_t1

0xecc5,	// (0x00034828) list_single_graphic_2heading_pane_t2_ParamLimits

0xecc5,	// (0x00034828) list_single_graphic_2heading_pane_t2

0xecdf,	// (0x00034842) list_single_graphic_2heading_pane_t3_ParamLimits

0xecdf,	// (0x00034842) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0003530b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0003530b) list_single_graphic_2heading_pane_t

0x2e08,	// (0x0002896b) bg_popup_sub_pane_cp2

0x2e32,	// (0x00028995) grid_toobar_pane

0x193d,	// (0x000274a0) cell_toolbar_pane_ParamLimits

0x193d,	// (0x000274a0) cell_toolbar_pane

0x2e6e,	// (0x000289d1) cell_toolbar_pane_g1_ParamLimits

0x2e6e,	// (0x000289d1) cell_toolbar_pane_g1

0xb417,	// (0x00030f7a) cell_toolbar_pane_g2_ParamLimits

0xb417,	// (0x00030f7a) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00035312) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00035312) cell_toolbar_pane_g

0x2ea4,	// (0x00028a07) grid_highlight_pane_cp2_ParamLimits

0x2ea4,	// (0x00028a07) grid_highlight_pane_cp2

0x2ebe,	// (0x00028a21) toolbar_button_pane

0x2eca,	// (0x00028a2d) toolbar_button_pane_g1

0x2ed2,	// (0x00028a35) toolbar_button_pane_g2

0x2eda,	// (0x00028a3d) toolbar_button_pane_g3

0x2ee2,	// (0x00028a45) toolbar_button_pane_g4

0x2eea,	// (0x00028a4d) toolbar_button_pane_g5

0x2ef2,	// (0x00028a55) toolbar_button_pane_g6

0x2efa,	// (0x00028a5d) toolbar_button_pane_g7

0x2f02,	// (0x00028a65) toolbar_button_pane_g8

0x2f0a,	// (0x00028a6d) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00035317) toolbar_button_pane_g

0x1975,	// (0x000274d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1975,	// (0x000274d8) list_single_2graphic_pane_g1_cp3

0xb42b,	// (0x00030f8e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb42b,	// (0x00030f8e) list_single_2graphic_pane_g2_cp3

0x0932,	// (0x00026495) list_single_2graphic_pane_g3_cp3

0x1992,	// (0x000274f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1992,	// (0x000274f5) list_single_2graphic_pane_g4_cp3

0xb43c,	// (0x00030f9f) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb43c,	// (0x00030f9f) list_single_2graphic_pane_t1_cp3

0xd151,	// (0x00032cb4) list_single_midp_graphic_pane_g2_ParamLimits

0xd151,	// (0x00032cb4) list_single_midp_graphic_pane_g2

0x1011,	// (0x00026b74) aid_zoom_text_primary

0xec79,	// (0x000347dc) aid_zoom_text_secondary

0xa674,	// (0x000301d7) status_small_pane_g7_ParamLimits

0xa674,	// (0x000301d7) status_small_pane_g7

0xa697,	// (0x000301fa) status_small_pane_t1_ParamLimits

0x9b08,	// (0x0002f66b) title_pane_g2

0x0003,

0xf54e,	// (0x000350b1) title_pane_g

0x9ef5,	// (0x0002fa58) aid_size_cell_colour_1_pane_ParamLimits

0x9ef5,	// (0x0002fa58) aid_size_cell_colour_1_pane

0x9f09,	// (0x0002fa6c) aid_size_cell_colour_2_pane_ParamLimits

0x9f09,	// (0x0002fa6c) aid_size_cell_colour_2_pane

0x9f1d,	// (0x0002fa80) aid_size_cell_colour_3_pane_ParamLimits

0x9f1d,	// (0x0002fa80) aid_size_cell_colour_3_pane

0x9f31,	// (0x0002fa94) aid_size_cell_colour_4_pane_ParamLimits

0x9f31,	// (0x0002fa94) aid_size_cell_colour_4_pane

0x00f2,	// (0x00025c55) title_pane_stacon_g1_ParamLimits

0x00f2,	// (0x00025c55) title_pane_stacon_g1

0x356a,	// (0x000290cd) popup_note_wait_window_g3_ParamLimits

0x356a,	// (0x000290cd) popup_note_wait_window_g3

0x35e0,	// (0x00029143) popup_note_wait_window_t5_ParamLimits

0x35e0,	// (0x00029143) popup_note_wait_window_t5

0xc859,	// (0x000323bc) main_feb_china_hwr_fs_writing_pane

0xa8f7,	// (0x0003045a) popup_feb_china_hwr_fs_window_ParamLimits

0xa8f7,	// (0x0003045a) popup_feb_china_hwr_fs_window

0xb458,	// (0x00030fbb) aid_size_cell_hwr_fs_ParamLimits

0xb458,	// (0x00030fbb) aid_size_cell_hwr_fs

0x2f3e,	// (0x00028aa1) bg_popup_sub_pane_cp3_ParamLimits

0x2f3e,	// (0x00028aa1) bg_popup_sub_pane_cp3

0xb46d,	// (0x00030fd0) grid_hwr_fs_pane_ParamLimits

0xb46d,	// (0x00030fd0) grid_hwr_fs_pane

0x19fd,	// (0x00027560) linegrid_hwr_fs_pane_ParamLimits

0x19fd,	// (0x00027560) linegrid_hwr_fs_pane

0xb485,	// (0x00030fe8) cell_hwr_fs_pane_ParamLimits

0xb485,	// (0x00030fe8) cell_hwr_fs_pane

0x2f4a,	// (0x00028aad) linegrid_hwr_fs_pane_g1_ParamLimits

0x2f4a,	// (0x00028aad) linegrid_hwr_fs_pane_g1

0xb4ab,	// (0x0003100e) linegrid_hwr_fs_pane_g2_ParamLimits

0xb4ab,	// (0x0003100e) linegrid_hwr_fs_pane_g2

0x2f68,	// (0x00028acb) linegrid_hwr_fs_pane_g3_ParamLimits

0x2f68,	// (0x00028acb) linegrid_hwr_fs_pane_g3

0xb4bd,	// (0x00031020) linegrid_hwr_fs_pane_g4_ParamLimits

0xb4bd,	// (0x00031020) linegrid_hwr_fs_pane_g4

0x1a49,	// (0x000275ac) linegrid_hwr_fs_pane_g5_ParamLimits

0x1a49,	// (0x000275ac) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x0003533d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x0003533d) linegrid_hwr_fs_pane_g

0x2f74,	// (0x00028ad7) cell_hwr_fs_pane_g1_ParamLimits

0x2f74,	// (0x00028ad7) cell_hwr_fs_pane_g1

0x2d42,	// (0x000288a5) cell_hwr_fs_pane_g2_ParamLimits

0x2d42,	// (0x000288a5) cell_hwr_fs_pane_g2

0xb4d7,	// (0x0003103a) cell_hwr_fs_pane_g3_ParamLimits

0xb4d7,	// (0x0003103a) cell_hwr_fs_pane_g3

0xb4e4,	// (0x00031047) cell_hwr_fs_pane_g4_ParamLimits

0xb4e4,	// (0x00031047) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00035348) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00035348) cell_hwr_fs_pane_g

0xb4f1,	// (0x00031054) cell_hwr_fs_pane_t1

0xc859,	// (0x000323bc) grid_highlight_pane_cp6

0xc859,	// (0x000323bc) main_idle_act2_pane

0xcd6d,	// (0x000328d0) aid_inside_area_popup_secondary

0xb927,	// (0x0003148a) aid_inside_area_window_primary_ParamLimits

0xb927,	// (0x0003148a) aid_inside_area_window_primary

0xbf72,	// (0x00031ad5) ai2_news_ticker_pane

0x478d,	// (0x0002a2f0) aid_size_cell_ai1_link_ParamLimits

0x478d,	// (0x0002a2f0) aid_size_cell_ai1_link

0xbf7a,	// (0x00031add) popup_ai2_data_window_ParamLimits

0xbf7a,	// (0x00031add) popup_ai2_data_window

0x47bd,	// (0x0002a320) popup_ai2_link_window_ParamLimits

0x47bd,	// (0x0002a320) popup_ai2_link_window

0x2f3e,	// (0x00028aa1) bg_popup_sub_pane_cp4_ParamLimits

0x2f3e,	// (0x00028aa1) bg_popup_sub_pane_cp4

0x47d1,	// (0x0002a334) grid_ai2_link_pane_ParamLimits

0x47d1,	// (0x0002a334) grid_ai2_link_pane

0x47e8,	// (0x0002a34b) popup_ai2_link_window_g1_ParamLimits

0x47e8,	// (0x0002a34b) popup_ai2_link_window_g1

0x47f4,	// (0x0002a357) popup_ai2_link_window_g2_ParamLimits

0x47f4,	// (0x0002a357) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x0003551b) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x0003551b) popup_ai2_link_window_g

0x4803,	// (0x0002a366) ai2_mp_button_pane

0x480b,	// (0x0002a36e) ai2_mp_volume_pane

0x3151,	// (0x00028cb4) bg_popup_sub_pane_cp5_ParamLimits

0x3151,	// (0x00028cb4) bg_popup_sub_pane_cp5

0x4813,	// (0x0002a376) heading_ai2_gene_pane_ParamLimits

0x4813,	// (0x0002a376) heading_ai2_gene_pane

0x481f,	// (0x0002a382) list_ai2_gene_pane_ParamLimits

0x481f,	// (0x0002a382) list_ai2_gene_pane

0x4867,	// (0x0002a3ca) cell_ai2_link_pane_ParamLimits

0x4867,	// (0x0002a3ca) cell_ai2_link_pane

0x487d,	// (0x0002a3e0) cell_ai2_link_pane_g1

0xc859,	// (0x000323bc) grid_highlight_pane_cp7

0x1d57,	// (0x000278ba) ai2_mp_volume_pane_g1

0x494d,	// (0x0002a4b0) ai2_mp_volume_pane_g2

0x48c2,	// (0x0002a425) list_ai2_gene_pane_t1

0x4955,	// (0x0002a4b8) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00035534) ai2_mp_volume_pane_g

0xbf90,	// (0x00031af3) volume_small_pane_cp3

0x495d,	// (0x0002a4c0) aid_size_cell_ai2_button

0x4965,	// (0x0002a4c8) grid_ai2_button_pane

0x496e,	// (0x0002a4d1) cell_ai2_button_pane_ParamLimits

0x496e,	// (0x0002a4d1) cell_ai2_button_pane

0xc84f,	// (0x000323b2) cell_ai2_button_pane_g1

0xc859,	// (0x000323bc) grid_highlight_pane_cp8

0x490d,	// (0x0002a470) ai2_gene_pane_t1_ParamLimits

0x490d,	// (0x0002a470) ai2_gene_pane_t1

0xa865,	// (0x000303c8) aid_height_parent_landscape

0xbc39,	// (0x0003179c) aid_height_set_list

0x4279,	// (0x00029ddc) aid_size_parent

0xbe9d,	// (0x00031a00) aid_size_cell_graphic_pane_ParamLimits

0x482f,	// (0x0002a392) popup_ai2_data_window_g1_ParamLimits

0x482f,	// (0x0002a392) popup_ai2_data_window_g1

0x483b,	// (0x0002a39e) ai2_news_ticker_pane_g1

0x4843,	// (0x0002a3a6) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00035520) ai2_news_ticker_pane_g

0x484b,	// (0x0002a3ae) ai2_news_ticker_pane_t1

0x4859,	// (0x0002a3bc) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00035525) ai2_news_ticker_pane_t

0x4886,	// (0x0002a3e9) heading_ai2_gene_pane_g1

0x488e,	// (0x0002a3f1) heading_ai2_gene_pane_t1_ParamLimits

0x488e,	// (0x0002a3f1) heading_ai2_gene_pane_t1

0x48a3,	// (0x0002a406) list_highlight_pane_cp6

0x48ab,	// (0x0002a40e) ai2_gene_pane_ParamLimits

0x48ab,	// (0x0002a40e) ai2_gene_pane

0x48d0,	// (0x0002a433) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x0003552a) list_ai2_gene_pane_t

0x48de,	// (0x0002a441) list_highlight_pane_cp8_ParamLimits

0x48de,	// (0x0002a441) list_highlight_pane_cp8

0x48ef,	// (0x0002a452) ai2_gene_pane_g1_ParamLimits

0x48ef,	// (0x0002a452) ai2_gene_pane_g1

0x4901,	// (0x0002a464) ai2_gene_pane_g2_ParamLimits

0x4901,	// (0x0002a464) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x0003552f) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x0003552f) ai2_gene_pane_g

0xcc06,	// (0x00032769) scroll_pane_cp12

0xa822,	// (0x00030385) control_pane_t3_ParamLimits

0xa822,	// (0x00030385) control_pane_t3

0xa688,	// (0x000301eb) status_small_pane_g8_ParamLimits

0xa688,	// (0x000301eb) status_small_pane_g8

0xa9ba,	// (0x0003051d) popup_find_window_ParamLimits

0xac6d,	// (0x000307d0) popup_note_image_window_ParamLimits

0xeb60,	// (0x000346c3) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb60,	// (0x000346c3) list_double2_graphic_pane_vc_g1

0xeb6c,	// (0x000346cf) list_double2_graphic_pane_vc_g2_ParamLimits

0xeb6c,	// (0x000346cf) list_double2_graphic_pane_vc_g2

0xeb78,	// (0x000346db) list_double2_graphic_pane_vc_g3_ParamLimits

0xeb78,	// (0x000346db) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00035124) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00035124) list_double2_graphic_pane_vc_g

0xeb84,	// (0x000346e7) list_double2_graphic_pane_vc_t1_ParamLimits

0xeb84,	// (0x000346e7) list_double2_graphic_pane_vc_t1

0xeb6c,	// (0x000346cf) list_single_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_heading_pane_vc_g1

0xeb78,	// (0x000346db) list_single_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_heading_pane_vc_g

0xecf7,	// (0x0003485a) list_single_heading_pane_vc_t1_ParamLimits

0xecf7,	// (0x0003485a) list_single_heading_pane_vc_t1

0xed0d,	// (0x00034870) list_single_heading_pane_vc_t2_ParamLimits

0xed0d,	// (0x00034870) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x0003532c) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003532c) list_single_heading_pane_vc_t

0xed1f,	// (0x00034882) list_setting_number_pane_vc_g1_ParamLimits

0xed1f,	// (0x00034882) list_setting_number_pane_vc_g1

0xed2b,	// (0x0003488e) list_setting_number_pane_vc_g2_ParamLimits

0xed2b,	// (0x0003488e) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035331) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035331) list_setting_number_pane_vc_g

0xed37,	// (0x0003489a) list_setting_number_pane_vc_t1_ParamLimits

0xed37,	// (0x0003489a) list_setting_number_pane_vc_t1

0xed4b,	// (0x000348ae) list_setting_number_pane_vc_t2_ParamLimits

0xed4b,	// (0x000348ae) list_setting_number_pane_vc_t2

0xed67,	// (0x000348ca) list_setting_number_pane_vc_t3_ParamLimits

0xed67,	// (0x000348ca) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00035336) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00035336) list_setting_number_pane_vc_t

0xed93,	// (0x000348f6) set_value_pane_vc_ParamLimits

0xed93,	// (0x000348f6) set_value_pane_vc

0xedb2,	// (0x00034915) list_double2_graphic_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double2_graphic_pane_vc

0x4449,	// (0x00029fac) list_double2_large_graphic_pane_vc_ParamLimits

0x4449,	// (0x00029fac) list_double2_large_graphic_pane_vc

0xedb2,	// (0x00034915) list_double2_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double2_pane_vc

0xedb2,	// (0x00034915) list_double_graphic_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_graphic_heading_pane_vc

0xedb2,	// (0x00034915) list_double_graphic_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_graphic_pane_vc

0xedb2,	// (0x00034915) list_double_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_heading_pane_vc

0x445b,	// (0x00029fbe) list_double_large_graphic_pane_vc_ParamLimits

0x445b,	// (0x00029fbe) list_double_large_graphic_pane_vc

0xedb2,	// (0x00034915) list_double_number_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_number_pane_vc

0xedb2,	// (0x00034915) list_double_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_pane_vc

0xedb2,	// (0x00034915) list_double_time_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_double_time_pane_vc

0xedb2,	// (0x00034915) list_setting_number_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_setting_number_pane_vc

0xedb2,	// (0x00034915) list_setting_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_setting_pane_vc

0xedb2,	// (0x00034915) list_single_graphic_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_single_graphic_heading_pane_vc

0xedb2,	// (0x00034915) list_single_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_single_heading_pane_vc

0xedb2,	// (0x00034915) list_single_number_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034915) list_single_number_heading_pane_vc

0xebe6,	// (0x00034749) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebe6,	// (0x00034749) list_double_graphic_heading_pane_vc_g1

0xeb6c,	// (0x000346cf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeb6c,	// (0x000346cf) list_double_graphic_heading_pane_vc_g2

0xeb78,	// (0x000346db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeb78,	// (0x000346db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x0003553b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x0003553b) list_double_graphic_heading_pane_vc_g

0xedc5,	// (0x00034928) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedc5,	// (0x00034928) list_double_graphic_heading_pane_vc_t1

0xedd9,	// (0x0003493c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xedd9,	// (0x0003493c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00035542) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00035542) list_double_graphic_heading_pane_vc_t

0xed1f,	// (0x00034882) list_setting_pane_vc_g1_ParamLimits

0xed1f,	// (0x00034882) list_setting_pane_vc_g1

0xed2b,	// (0x0003488e) list_setting_pane_vc_g2_ParamLimits

0xed2b,	// (0x0003488e) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035331) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035331) list_setting_pane_vc_g

0xedf1,	// (0x00034954) list_setting_pane_vc_t1_ParamLimits

0xedf1,	// (0x00034954) list_setting_pane_vc_t1

0xee0d,	// (0x00034970) list_setting_pane_vc_t2_ParamLimits

0xee0d,	// (0x00034970) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00035585) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00035585) list_setting_pane_vc_t

0xed93,	// (0x000348f6) set_value_pane_cp_vc_ParamLimits

0xed93,	// (0x000348f6) set_value_pane_cp_vc

0xeb6c,	// (0x000346cf) list_single_number_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_single_number_heading_pane_vc_g1

0xeb78,	// (0x000346db) list_single_number_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_single_number_heading_pane_vc_g

0xee27,	// (0x0003498a) list_single_number_heading_pane_vc_t1_ParamLimits

0xee27,	// (0x0003498a) list_single_number_heading_pane_vc_t1

0xee3d,	// (0x000349a0) list_single_number_heading_pane_vc_t2_ParamLimits

0xee3d,	// (0x000349a0) list_single_number_heading_pane_vc_t2

0xee4f,	// (0x000349b2) list_single_number_heading_pane_vc_t3_ParamLimits

0xee4f,	// (0x000349b2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x0003558a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0003558a) list_single_number_heading_pane_vc_t

0xee61,	// (0x000349c4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xee61,	// (0x000349c4) list_single_graphic_heading_pane_vc_g1

0xeb6c,	// (0x000346cf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeb6c,	// (0x000346cf) list_single_graphic_heading_pane_vc_g4

0xeb78,	// (0x000346db) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeb78,	// (0x000346db) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00035591) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00035591) list_single_graphic_heading_pane_vc_g

0xee6d,	// (0x000349d0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xee6d,	// (0x000349d0) list_single_graphic_heading_pane_vc_t1

0xee83,	// (0x000349e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee83,	// (0x000349e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00035598) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00035598) list_single_graphic_heading_pane_vc_t

0xeb6c,	// (0x000346cf) list_double2_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_double2_pane_vc_g1

0xeb78,	// (0x000346db) list_double2_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_double2_pane_vc_g

0xee95,	// (0x000349f8) list_double2_pane_vc_t1_ParamLimits

0xee95,	// (0x000349f8) list_double2_pane_vc_t1

0xebf2,	// (0x00034755) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xebf2,	// (0x00034755) list_double2_large_graphic_pane_vc_g1

0xebfe,	// (0x00034761) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xebfe,	// (0x00034761) list_double2_large_graphic_pane_vc_g2

0xec0a,	// (0x0003476d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xec0a,	// (0x0003476d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035148) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035148) list_double2_large_graphic_pane_vc_g

0xec16,	// (0x00034779) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec16,	// (0x00034779) list_double2_large_graphic_pane_vc_t1

0xeead,	// (0x00034a10) list_double_time_pane_vc_g1_ParamLimits

0xeead,	// (0x00034a10) list_double_time_pane_vc_g1

0xeeb9,	// (0x00034a1c) list_double_time_pane_vc_g2_ParamLimits

0xeeb9,	// (0x00034a1c) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x0003559d) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003559d) list_double_time_pane_vc_g

0xeec5,	// (0x00034a28) list_double_time_pane_vc_t1_ParamLimits

0xeec5,	// (0x00034a28) list_double_time_pane_vc_t1

0xeee9,	// (0x00034a4c) list_double_time_pane_vc_t2_ParamLimits

0xeee9,	// (0x00034a4c) list_double_time_pane_vc_t2

0xef38,	// (0x00034a9b) list_double_time_pane_vc_t3_ParamLimits

0xef38,	// (0x00034a9b) list_double_time_pane_vc_t3

0xef4a,	// (0x00034aad) list_double_time_pane_vc_t4_ParamLimits

0xef4a,	// (0x00034aad) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x000355a2) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x000355a2) list_double_time_pane_vc_t

0xeb6c,	// (0x000346cf) list_double_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_double_pane_vc_g1

0xeb78,	// (0x000346db) list_double_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_double_pane_vc_g

0xef5e,	// (0x00034ac1) list_double_pane_vc_t1_ParamLimits

0xef5e,	// (0x00034ac1) list_double_pane_vc_t1

0xef72,	// (0x00034ad5) list_double_pane_vc_t2_ParamLimits

0xef72,	// (0x00034ad5) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x000355ab) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x000355ab) list_double_pane_vc_t

0xeb6c,	// (0x000346cf) list_double_number_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_double_number_pane_vc_g1

0xeb78,	// (0x000346db) list_double_number_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_double_number_pane_vc_g

0xef8a,	// (0x00034aed) list_double_number_pane_vc_t1_ParamLimits

0xef8a,	// (0x00034aed) list_double_number_pane_vc_t1

0xef5e,	// (0x00034ac1) list_double_number_pane_vc_t2_ParamLimits

0xef5e,	// (0x00034ac1) list_double_number_pane_vc_t2

0xef9c,	// (0x00034aff) list_double_number_pane_vc_t3_ParamLimits

0xef9c,	// (0x00034aff) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x000355b0) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x000355b0) list_double_number_pane_vc_t

0xefb4,	// (0x00034b17) list_double_large_graphic_pane_vc_g1_ParamLimits

0xefb4,	// (0x00034b17) list_double_large_graphic_pane_vc_g1

0xefd6,	// (0x00034b39) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefd6,	// (0x00034b39) list_double_large_graphic_pane_vc_g2

0xefea,	// (0x00034b4d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xefea,	// (0x00034b4d) list_double_large_graphic_pane_vc_g3

0xeff9,	// (0x00034b5c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeff9,	// (0x00034b5c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x000355b7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x000355b7) list_double_large_graphic_pane_vc_g

0xf005,	// (0x00034b68) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf005,	// (0x00034b68) list_double_large_graphic_pane_vc_t1

0xf021,	// (0x00034b84) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf021,	// (0x00034b84) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x000355c0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x000355c0) list_double_large_graphic_pane_vc_t

0xeb6c,	// (0x000346cf) list_double_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346cf) list_double_heading_pane_vc_g1

0xeb78,	// (0x000346db) list_double_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346db) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003512b) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003512b) list_double_heading_pane_vc_g

0xf043,	// (0x00034ba6) list_double_heading_pane_vc_t1_ParamLimits

0xf043,	// (0x00034ba6) list_double_heading_pane_vc_t1

0xf057,	// (0x00034bba) list_double_heading_pane_vc_t2_ParamLimits

0xf057,	// (0x00034bba) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x000355c5) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x000355c5) list_double_heading_pane_vc_t

0xf06f,	// (0x00034bd2) list_double_graphic_pane_vc_g1_ParamLimits

0xf06f,	// (0x00034bd2) list_double_graphic_pane_vc_g1

0xf087,	// (0x00034bea) list_double_graphic_pane_vc_g2_ParamLimits

0xf087,	// (0x00034bea) list_double_graphic_pane_vc_g2

0xeb6c,	// (0x000346cf) list_double_graphic_pane_vc_g3_ParamLimits

0xeb6c,	// (0x000346cf) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x000355ca) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x000355ca) list_double_graphic_pane_vc_g

0xf0a4,	// (0x00034c07) list_double_graphic_pane_vc_t1_ParamLimits

0xf0a4,	// (0x00034c07) list_double_graphic_pane_vc_t1

0xf0c3,	// (0x00034c26) list_double_graphic_pane_vc_t2_ParamLimits

0xf0c3,	// (0x00034c26) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x000355d3) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x000355d3) list_double_graphic_pane_vc_t

0xf3d7,	// (0x00034f3a) aid_size_cell_fastswap

0x98cf,	// (0x0002f432) aid_size_cell_touch_ParamLimits

0x98cf,	// (0x0002f432) aid_size_cell_touch

0xf52e,	// (0x00035091) popup_fast_swap_wide_window_ParamLimits

0xf52e,	// (0x00035091) popup_fast_swap_wide_window

0x9a9f,	// (0x0002f602) touch_pane_ParamLimits

0x9a9f,	// (0x0002f602) touch_pane

0xcc53,	// (0x000327b6) button_value_adjust_pane_cp2

0xec4d,	// (0x000347b0) button_value_adjust_pane_cp4

0xec55,	// (0x000347b8) form_field_data_pane_cp2

0x9415,	// (0x0002ef78) form_field_data_wide_pane_cp2

0xcf4e,	// (0x00032ab1) bg_scroll_pane_ParamLimits

0xa2bb,	// (0x0002fe1e) scroll_handle_pane_ParamLimits

0x0302,	// (0x00025e65) scroll_sc2_down_pane_ParamLimits

0x0302,	// (0x00025e65) scroll_sc2_down_pane

0xcf7f,	// (0x00032ae2) scroll_sc2_up_pane_ParamLimits

0xcf7f,	// (0x00032ae2) scroll_sc2_up_pane

0xc0bc,	// (0x00031c1f) grid_wheel_folder_pane_g1_ParamLimits

0xc0bc,	// (0x00031c1f) grid_wheel_folder_pane_g1

0x0759,	// (0x000262bc) clock_nsta_pane_cp2_ParamLimits

0x0759,	// (0x000262bc) clock_nsta_pane_cp2

0xa54e,	// (0x000300b1) listscroll_midp_pane_ParamLimits

0xa55a,	// (0x000300bd) midp_canvas_pane

0x0ff7,	// (0x00026b5a) nsta_clock_indic_pane

0x1045,	// (0x00026ba8) listscroll_form_pane_vc

0x1055,	// (0x00026bb8) listscroll_set_pane_vc_ParamLimits

0x1055,	// (0x00026bb8) listscroll_set_pane_vc

0xb122,	// (0x00030c85) clock_nsta_pane

0xb14c,	// (0x00030caf) indicator_nsta_pane

0x2e08,	// (0x0002896b) bg_popup_sub_pane_cp2_ParamLimits

0x2e1c,	// (0x0002897f) find_pane_cp2_ParamLimits

0x2e1c,	// (0x0002897f) find_pane_cp2

0x2e32,	// (0x00028995) grid_toobar_pane_ParamLimits

0x2f12,	// (0x00028a75) list_form_gen_pane_vc_ParamLimits

0x2f12,	// (0x00028a75) list_form_gen_pane_vc

0x2f28,	// (0x00028a8b) scroll_pane_cp8_vc_ParamLimits

0x2f28,	// (0x00028a8b) scroll_pane_cp8_vc

0x2fa4,	// (0x00028b07) data_form_wide_pane_vc_ParamLimits

0x2fa4,	// (0x00028b07) data_form_wide_pane_vc

0x2fb0,	// (0x00028b13) form_field_data_wide_pane_vc_g1

0x2fb8,	// (0x00028b1b) form_field_data_wide_pane_vc_t1_ParamLimits

0x2fb8,	// (0x00028b1b) form_field_data_wide_pane_vc_t1

0xcc67,	// (0x000327ca) input_focus_pane_cp6_vc_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_cp6_vc

0x3305,	// (0x00028e68) list_midp_pane_ParamLimits

0x4612,	// (0x0002a175) scroll_pane_cp16_ParamLimits

0x4612,	// (0x0002a175) scroll_pane_cp16

0x3347,	// (0x00028eaa) button_value_adjust_pane_ParamLimits

0x3347,	// (0x00028eaa) button_value_adjust_pane

0xbc4a,	// (0x000317ad) button_value_adjust_pane_cp6_ParamLimits

0xbc4a,	// (0x000317ad) button_value_adjust_pane_cp6

0xbd64,	// (0x000318c7) settings_code_pane_cp_ParamLimits

0xbd64,	// (0x000318c7) settings_code_pane_cp

0xc84f,	// (0x000323b2) cell_touch_pane_g1

0xc84f,	// (0x000323b2) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00035257) cell_touch_pane_g

0xbf99,	// (0x00031afc) cell_touch_pane_cp_ParamLimits

0xbf99,	// (0x00031afc) cell_touch_pane_cp

0xbfb5,	// (0x00031b18) cell_touch_pane_ParamLimits

0xbfb5,	// (0x00031b18) cell_touch_pane

0xc84f,	// (0x000323b2) scroll_sc2_down_pane_g1

0xc84f,	// (0x000323b2) scroll_sc2_up_pane_g1

0xc859,	// (0x000323bc) bg_set_opt_pane_cp4_vc

0x49a2,	// (0x0002a505) list_set_graphic_pane_vc_g1_ParamLimits

0x49a2,	// (0x0002a505) list_set_graphic_pane_vc_g1

0x49ae,	// (0x0002a511) list_set_graphic_pane_vc_g2_ParamLimits

0x49ae,	// (0x0002a511) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00035547) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00035547) list_set_graphic_pane_vc_g

0x49ba,	// (0x0002a51d) text_primary_small_cp13_vc_ParamLimits

0x49ba,	// (0x0002a51d) text_primary_small_cp13_vc

0x49d2,	// (0x0002a535) list_set_graphic_pane_vc_ParamLimits

0x49d2,	// (0x0002a535) list_set_graphic_pane_vc

0xc859,	// (0x000323bc) input_focus_pane_cp2_vc

0xc84f,	// (0x000323b2) setting_code_pane_vc_g1

0xc8cc,	// (0x0003242f) setting_code_pane_vc_t1

0x49e5,	// (0x0002a548) set_text_pane_vc_t1_ParamLimits

0x49e5,	// (0x0002a548) set_text_pane_vc_t1

0xc859,	// (0x000323bc) input_focus_pane_cp1_vc

0x4a01,	// (0x0002a564) list_set_text_pane_vc

0xc84f,	// (0x000323b2) setting_text_pane_vc_g1

0xc859,	// (0x000323bc) bg_set_opt_pane_cp2_vc

0xc8c3,	// (0x00032426) setting_slider_graphic_pane_vc_g1

0x4a0b,	// (0x0002a56e) setting_slider_graphic_pane_vc_t1

0x4a1b,	// (0x0002a57e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x0003554c) setting_slider_graphic_pane_vc_t

0x4a2b,	// (0x0002a58e) slider_set_pane_cp_vc

0x4a33,	// (0x0002a596) slider_set_pane_vc_g1

0x4a3c,	// (0x0002a59f) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00035551) slider_set_pane_vc_g

0xccbf,	// (0x00032822) set_opt_bg_pane_g1_copy1

0xccc7,	// (0x0003282a) set_opt_bg_pane_g2_copy1

0x4a68,	// (0x0002a5cb) set_opt_bg_pane_g3_copy1

0xccd7,	// (0x0003283a) set_opt_bg_pane_g4_copy1

0xccdf,	// (0x00032842) set_opt_bg_pane_g5_copy1

0xcce7,	// (0x0003284a) set_opt_bg_pane_g6_copy1

0x4a70,	// (0x0002a5d3) set_opt_bg_pane_g7_copy1

0x4a78,	// (0x0002a5db) set_opt_bg_pane_g8_copy1

0x4a80,	// (0x0002a5e3) set_opt_bg_pane_g9_copy1

0xc859,	// (0x000323bc) bg_set_opt_pane_cp_vc

0x4a88,	// (0x0002a5eb) setting_slider_pane_vc_t1

0x4a97,	// (0x0002a5fa) setting_slider_pane_vc_t2

0x4aa7,	// (0x0002a60a) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00035560) setting_slider_pane_vc_t

0x4ab7,	// (0x0002a61a) slider_set_pane_vc

0x1a6d,	// (0x000275d0) volume_set_pane_vc_g1

0x1d68,	// (0x000278cb) volume_set_pane_vc_g2

0x1d71,	// (0x000278d4) volume_set_pane_vc_g3

0x1d7a,	// (0x000278dd) volume_set_pane_vc_g4

0x1d83,	// (0x000278e6) volume_set_pane_vc_g5

0x1d8c,	// (0x000278ef) volume_set_pane_vc_g6

0x1d95,	// (0x000278f8) volume_set_pane_vc_g7

0x1d9e,	// (0x00027901) volume_set_pane_vc_g8

0x1da7,	// (0x0002790a) volume_set_pane_vc_g9

0x1db0,	// (0x00027913) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00035567) volume_set_pane_vc_g

0x4abf,	// (0x0002a622) volume_set_pane_vc

0x4ac7,	// (0x0002a62a) button_value_adjust_pane_cp1_vc

0x4ad1,	// (0x0002a634) list_highlight_pane_cp2_vc

0x4ada,	// (0x0002a63d) list_set_pane_vc_ParamLimits

0x4ada,	// (0x0002a63d) list_set_pane_vc

0x4b38,	// (0x0002a69b) main_pane_set_vc_t1_ParamLimits

0x4b38,	// (0x0002a69b) main_pane_set_vc_t1

0x4b4d,	// (0x0002a6b0) main_pane_set_vc_t2_ParamLimits

0x4b4d,	// (0x0002a6b0) main_pane_set_vc_t2

0x4b5f,	// (0x0002a6c2) main_pane_set_vc_t3_ParamLimits

0x4b5f,	// (0x0002a6c2) main_pane_set_vc_t3

0x4b71,	// (0x0002a6d4) main_pane_set_vc_t4_ParamLimits

0x4b71,	// (0x0002a6d4) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x0003557c) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x0003557c) main_pane_set_vc_t

0x4b83,	// (0x0002a6e6) setting_code_pane_vc_ParamLimits

0x4b83,	// (0x0002a6e6) setting_code_pane_vc

0x4b92,	// (0x0002a6f5) setting_slider_graphic_pane_vc

0x4b92,	// (0x0002a6f5) setting_slider_pane_vc

0x4b92,	// (0x0002a6f5) setting_text_pane_vc

0x4b92,	// (0x0002a6f5) setting_volume_pane_vc

0x4b9a,	// (0x0002a6fd) scroll_pane_cp121_vc

0xcc41,	// (0x000327a4) set_content_pane_vc

0x4ba2,	// (0x0002a705) button_value_adjust_pane_g1

0x4bab,	// (0x0002a70e) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x000355d8) button_value_adjust_pane_g

0x4bb4,	// (0x0002a717) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4bb4,	// (0x0002a717) form_field_slider_wide_pane_vc_t1

0x4bc8,	// (0x0002a72b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4bc8,	// (0x0002a72b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x000355dd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x000355dd) form_field_slider_wide_pane_vc_t

0xc8a7,	// (0x0003240a) input_focus_pane_cp10_vc_ParamLimits

0xc8a7,	// (0x0003240a) input_focus_pane_cp10_vc

0x4bf6,	// (0x0002a759) slider_cont_pane_cp1_vc_ParamLimits

0x4bf6,	// (0x0002a759) slider_cont_pane_cp1_vc

0x4c08,	// (0x0002a76b) slider_form_pane_g1_cp2

0x4a3c,	// (0x0002a59f) slider_form_pane_g2_cp2

0x4c35,	// (0x0002a798) form_field_slider_pane_vc_t3

0x4c43,	// (0x0002a7a6) form_field_slider_pane_vc_t4

0x4c51,	// (0x0002a7b4) slider_form_pane_vc_ParamLimits

0x4c51,	// (0x0002a7b4) slider_form_pane_vc

0x4c5e,	// (0x0002a7c1) form_field_slider_pane_vc_t1_ParamLimits

0x4c5e,	// (0x0002a7c1) form_field_slider_pane_vc_t1

0x4bc8,	// (0x0002a72b) form_field_slider_pane_vc_t2_ParamLimits

0x4bc8,	// (0x0002a72b) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x000355ef) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x000355ef) form_field_slider_pane_vc_t

0xc8a7,	// (0x0003240a) input_focus_pane_cp9_vc_ParamLimits

0xc8a7,	// (0x0003240a) input_focus_pane_cp9_vc

0x4c7a,	// (0x0002a7dd) slider_cont_pane_vc_ParamLimits

0x4c7a,	// (0x0002a7dd) slider_cont_pane_vc

0x4c8e,	// (0x0002a7f1) list_form_graphic_pane_cp_vc_ParamLimits

0x4c8e,	// (0x0002a7f1) list_form_graphic_pane_cp_vc

0x2fb0,	// (0x00028b13) form_field_popup_wide_pane_vc_g1

0x4ca3,	// (0x0002a806) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4ca3,	// (0x0002a806) form_field_popup_wide_pane_vc_t1

0xcc67,	// (0x000327ca) input_focus_pane_cp8_vc_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_cp8_vc

0x4ce8,	// (0x0002a84b) list_form_wide_pane_vc_ParamLimits

0x4ce8,	// (0x0002a84b) list_form_wide_pane_vc

0x4cf4,	// (0x0002a857) list_form_graphic_pane_vc_g1

0x4cfc,	// (0x0002a85f) list_form_graphic_pane_vc_t1_ParamLimits

0x4cfc,	// (0x0002a85f) list_form_graphic_pane_vc_t1

0xc8b5,	// (0x00032418) list_highlight_pane_cp5_vc_ParamLimits

0xc8b5,	// (0x00032418) list_highlight_pane_cp5_vc

0x4d18,	// (0x0002a87b) list_form_graphic_pane_vc_ParamLimits

0x4d18,	// (0x0002a87b) list_form_graphic_pane_vc

0x2fb0,	// (0x00028b13) form_field_popup_pane_vc_g1

0x4d2e,	// (0x0002a891) form_field_popup_pane_vc_t1_ParamLimits

0x4d2e,	// (0x0002a891) form_field_popup_pane_vc_t1

0xcc67,	// (0x000327ca) input_focus_pane_cp7_vc_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_cp7_vc

0x4d45,	// (0x0002a8a8) list_form_pane_vc_ParamLimits

0x4d45,	// (0x0002a8a8) list_form_pane_vc

0x4d51,	// (0x0002a8b4) data_form_pane_vc_t1_ParamLimits

0x4d51,	// (0x0002a8b4) data_form_pane_vc_t1

0xccbf,	// (0x00032822) input_focus_pane_vc_g1

0xccc7,	// (0x0003282a) input_focus_pane_vc_g2

0xcccf,	// (0x00032832) input_focus_pane_vc_g3

0xccd7,	// (0x0003283a) input_focus_pane_vc_g4

0xccdf,	// (0x00032842) input_focus_pane_vc_g5

0xcce7,	// (0x0003284a) input_focus_pane_vc_g6

0xccef,	// (0x00032852) input_focus_pane_vc_g7

0xccf7,	// (0x0003285a) input_focus_pane_vc_g8

0xccff,	// (0x00032862) input_focus_pane_vc_g9

0xc84f,	// (0x000323b2) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x000351e0) input_focus_pane_vc_g

0x2fa4,	// (0x00028b07) data_form_pane_vc_ParamLimits

0x2fa4,	// (0x00028b07) data_form_pane_vc

0x2fb0,	// (0x00028b13) form_field_data_pane_vc_g1

0x4d6c,	// (0x0002a8cf) form_field_data_pane_vc_t1_ParamLimits

0x4d6c,	// (0x0002a8cf) form_field_data_pane_vc_t1

0xcc67,	// (0x000327ca) input_focus_pane_vc_ParamLimits

0xcc67,	// (0x000327ca) input_focus_pane_vc

0x4d86,	// (0x0002a8e9) button_value_adjust_pane_cp3_vc

0x4d8e,	// (0x0002a8f1) button_value_adjust_pane_cp5_vc

0x4d96,	// (0x0002a8f9) form_field_data_pane_vc_ParamLimits

0x4d96,	// (0x0002a8f9) form_field_data_pane_vc

0x4dad,	// (0x0002a910) form_field_data_pane_vc_cp2

0x4db5,	// (0x0002a918) form_field_data_wide_pane_vc_ParamLimits

0x4db5,	// (0x0002a918) form_field_data_wide_pane_vc

0x4dcb,	// (0x0002a92e) form_field_data_wide_pane_vc_cp2

0x4dd3,	// (0x0002a936) form_field_popup_pane_vc_ParamLimits

0x4dd3,	// (0x0002a936) form_field_popup_pane_vc

0x4dea,	// (0x0002a94d) form_field_popup_wide_pane_vc_ParamLimits

0x4dea,	// (0x0002a94d) form_field_popup_wide_pane_vc

0x4e00,	// (0x0002a963) form_field_slider_pane_vc_ParamLimits

0x4e00,	// (0x0002a963) form_field_slider_pane_vc

0x4e13,	// (0x0002a976) form_field_slider_wide_pane_vc_ParamLimits

0x4e13,	// (0x0002a976) form_field_slider_wide_pane_vc

0xbfd2,	// (0x00031b35) grid_touch_1_pane_ParamLimits

0xbfd2,	// (0x00031b35) grid_touch_1_pane

0xbfe6,	// (0x00031b49) grid_touch_2_pane_ParamLimits

0xbfe6,	// (0x00031b49) grid_touch_2_pane

0x4ee1,	// (0x0002aa44) touch_pane_g1_ParamLimits

0x4ee1,	// (0x0002aa44) touch_pane_g1

0x4e4a,	// (0x0002a9ad) cell_app_pane_cp_wide_ParamLimits

0x4e4a,	// (0x0002a9ad) cell_app_pane_cp_wide

0x4e5b,	// (0x0002a9be) grid_popup_fast_wide_pane_ParamLimits

0x4e5b,	// (0x0002a9be) grid_popup_fast_wide_pane

0x4e6f,	// (0x0002a9d2) scroll_pane_cp19_ParamLimits

0x4e6f,	// (0x0002a9d2) scroll_pane_cp19

0xc859,	// (0x000323bc) bg_popup_window_pane_cp20

0x4e83,	// (0x0002a9e6) listscroll_popup_fast_wide_pane

0xd15d,	// (0x00032cc0) grid_indicator_nsta_pane

0x4e8b,	// (0x0002a9ee) clock_nsta_pane_g1

0x4e94,	// (0x0002a9f7) clock_nsta_pane_t1

0xc010,	// (0x00031b73) cell_indicator_nsta_pane_ParamLimits

0xc010,	// (0x00031b73) cell_indicator_nsta_pane

0x4ee1,	// (0x0002aa44) cell_indicator_nsta_pane_g1

0xc027,	// (0x00031b8a) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00035600) cell_indicator_nsta_pane_g

0x4efc,	// (0x0002aa5f) clock_nsta_pane_cp

0x4f04,	// (0x0002aa67) indicator_nsta_pane_cp

0x4f0c,	// (0x0002aa6f) nsta_clock_indic_pane_g1

0xc8f1,	// (0x00032454) grid_indicator_pane

0xa355,	// (0x0002feb8) scroll_pane_cp29

0x0686,	// (0x000261e9) indicator_nsta_pane_cp2_ParamLimits

0x0686,	// (0x000261e9) indicator_nsta_pane_cp2

0xc8b5,	// (0x00032418) main_apps_wheel_pane

0xb5bc,	// (0x0003111f) form_midp_field_text_pane_ParamLimits

0x3311,	// (0x00028e74) scroll_bar_cp050_ParamLimits

0x4f5c,	// (0x0002aabf) cell_indicator_pane_ParamLimits

0x4f5c,	// (0x0002aabf) cell_indicator_pane

0x4f75,	// (0x0002aad8) cell_indicator_pane_g1

0xc046,	// (0x00031ba9) grid_wheel_folder_pane_ParamLimits

0xc046,	// (0x00031ba9) grid_wheel_folder_pane

0xc054,	// (0x00031bb7) list_wheel_apps_pane_ParamLimits

0xc054,	// (0x00031bb7) list_wheel_apps_pane

0xc062,	// (0x00031bc5) main_apps_wheel_pane_g1_ParamLimits

0xc062,	// (0x00031bc5) main_apps_wheel_pane_g1

0xc06e,	// (0x00031bd1) main_apps_wheel_pane_g2_ParamLimits

0xc06e,	// (0x00031bd1) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x0003561c) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x0003561c) main_apps_wheel_pane_g

0xc07c,	// (0x00031bdf) main_apps_wheel_pane_t1_ParamLimits

0xc07c,	// (0x00031bdf) main_apps_wheel_pane_t1

0xc090,	// (0x00031bf3) list_wheel_apps_pane_g1

0xc098,	// (0x00031bfb) list_wheel_apps_pane_g2

0xc0a0,	// (0x00031c03) list_wheel_apps_pane_g3

0xc0a8,	// (0x00031c0b) list_wheel_apps_pane_g4

0xc0b2,	// (0x00031c15) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00035621) list_wheel_apps_pane_g

0x0982,	// (0x000264e5) navi_icon_text_pane

0xb016,	// (0x00030b79) aid_fill_nsta

0x503c,	// (0x0002ab9f) navi_icon_text_pane_g1

0x5048,	// (0x0002abab) navi_icon_text_pane_t1

0x0825,	// (0x00026388) list_set_graphic_pane_t1_ParamLimits

0x0825,	// (0x00026388) list_set_graphic_pane_t1

0x3a48,	// (0x000295ab) popup_midp_note_alarm_window_t6_ParamLimits

0x3a48,	// (0x000295ab) popup_midp_note_alarm_window_t6

0x3a5a,	// (0x000295bd) popup_midp_note_alarm_window_t7_ParamLimits

0x3a5a,	// (0x000295bd) popup_midp_note_alarm_window_t7

0x3a6c,	// (0x000295cf) popup_midp_note_alarm_window_t8_ParamLimits

0x3a6c,	// (0x000295cf) popup_midp_note_alarm_window_t8

0x3a7e,	// (0x000295e1) popup_midp_note_alarm_window_t9_ParamLimits

0x3a7e,	// (0x000295e1) popup_midp_note_alarm_window_t9

0x3a90,	// (0x000295f3) popup_midp_note_alarm_window_t10_ParamLimits

0x3a90,	// (0x000295f3) popup_midp_note_alarm_window_t10

0x3aa2,	// (0x00029605) popup_midp_note_alarm_window_t11_ParamLimits

0x3aa2,	// (0x00029605) popup_midp_note_alarm_window_t11

0xb908,	// (0x0003146b) scroll_pane_cp17_ParamLimits

0xb908,	// (0x0003146b) scroll_pane_cp17

0x1a6d,	// (0x000275d0) volume_small_pane_cp_g1

0x1db9,	// (0x0002791c) volume_small_pane_cp_g2

0x1dc2,	// (0x00027925) volume_small_pane_cp_g3

0x1dcb,	// (0x0002792e) volume_small_pane_cp_g4

0x1dd4,	// (0x00027937) volume_small_pane_cp_g5

0x1d83,	// (0x000278e6) volume_small_pane_cp_g6

0x1ddd,	// (0x00027940) volume_small_pane_cp_g7

0x1de6,	// (0x00027949) volume_small_pane_cp_g8

0x1def,	// (0x00027952) volume_small_pane_cp_g9

0x1df8,	// (0x0002795b) volume_small_pane_cp_g10

0x0be3,	// (0x00026746) midp_ticker_pane_g1_ParamLimits

0x0bef,	// (0x00026752) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x000352ac) midp_ticker_pane_g_ParamLimits

0x0bfb,	// (0x0002675e) midp_ticker_pane_t1_ParamLimits

0xb03a,	// (0x00030b9d) aid_fill_nsta_2

0x32fd,	// (0x00028e60) list_form2_midp_pane

0x43fc,	// (0x00029f5f) midp_editing_number_pane_ParamLimits

0x440b,	// (0x00029f6e) midp_ticker_pane_ParamLimits

0x505a,	// (0x0002abbd) form2_midp_field_pane

0x507e,	// (0x0002abe1) scroll_pane_cp51

0x509e,	// (0x0002ac01) form2_midp_button_pane_ParamLimits

0x509e,	// (0x0002ac01) form2_midp_button_pane

0x50b0,	// (0x0002ac13) form2_midp_content_pane_ParamLimits

0x50b0,	// (0x0002ac13) form2_midp_content_pane

0x50ca,	// (0x0002ac2d) form2_midp_field_choice_group_pane

0x50d2,	// (0x0002ac35) form2_midp_field_pane_g1

0x50da,	// (0x0002ac3d) form2_midp_field_pane_g2

0x50e2,	// (0x0002ac45) form2_midp_field_pane_g3

0x50ea,	// (0x0002ac4d) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00035646) form2_midp_field_pane_g

0x50f2,	// (0x0002ac55) form2_midp_gauge_slider_pane

0x50fa,	// (0x0002ac5d) form2_midp_gauge_wait_pane

0x5102,	// (0x0002ac65) form2_midp_image_pane_ParamLimits

0x5102,	// (0x0002ac65) form2_midp_image_pane

0xc0e5,	// (0x00031c48) form2_midp_label_pane_ParamLimits

0xc0e5,	// (0x00031c48) form2_midp_label_pane

0xc0fe,	// (0x00031c61) form2_midp_label_pane_cp_ParamLimits

0xc0fe,	// (0x00031c61) form2_midp_label_pane_cp

0x5157,	// (0x0002acba) form2_midp_string_pane_ParamLimits

0x5157,	// (0x0002acba) form2_midp_string_pane

0xf0ed,	// (0x00034c50) form2_midp_text_pane_ParamLimits

0xf0ed,	// (0x00034c50) form2_midp_text_pane

0x5169,	// (0x0002accc) form2_midp_time_pane

0x5179,	// (0x0002acdc) input_focus_pane_cp51_ParamLimits

0x5179,	// (0x0002acdc) input_focus_pane_cp51

0xd16b,	// (0x00032cce) form2_midp_label_pane_t1_ParamLimits

0xd16b,	// (0x00032cce) form2_midp_label_pane_t1

0xf106,	// (0x00034c69) form2_mdip_text_pane_t1_ParamLimits

0xf106,	// (0x00034c69) form2_mdip_text_pane_t1

0xf124,	// (0x00034c87) form2_midp_time_pane_t1

0x51da,	// (0x0002ad3d) form2_midp_gauge_slider_pane_t1

0xd1ab,	// (0x00032d0e) form2_midp_gauge_slider_pane_t2

0xd1bd,	// (0x00032d20) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x0003564f) form2_midp_gauge_slider_pane_t

0x5210,	// (0x0002ad73) form2_midp_slider_pane

0x521c,	// (0x0002ad7f) form2_midp_gauge_wait_pane_t1

0x522a,	// (0x0002ad8d) form2_midp_wait_pane_ParamLimits

0x522a,	// (0x0002ad8d) form2_midp_wait_pane

0xb4ff,	// (0x00031062) list_single_2graphic_pane_cp4_ParamLimits

0xb4ff,	// (0x00031062) list_single_2graphic_pane_cp4

0xd1cf,	// (0x00032d32) list_single_midp_graphic_pane_cp_ParamLimits

0xd1cf,	// (0x00032d32) list_single_midp_graphic_pane_cp

0xc859,	// (0x000323bc) list_highlight_pane_cp20

0x527d,	// (0x0002ade0) list_single_2graphic_pane_g1_cp4

0x4886,	// (0x0002a3e9) list_single_2graphic_pane_g2_cp4

0x5285,	// (0x0002ade8) list_single_2graphic_pane_t1_cp4

0xc8b5,	// (0x00032418) list_highlight_pane_cp21

0x5294,	// (0x0002adf7) list_single_midp_graphic_pane_g4_cp

0x52a3,	// (0x0002ae06) list_single_midp_graphic_pane_t1_cp

0xd1ee,	// (0x00032d51) form2_mdip_string_pane_t1_ParamLimits

0xd1ee,	// (0x00032d51) form2_mdip_string_pane_t1

0xc859,	// (0x000323bc) bg_wml_button_pane_cp2

0xc84f,	// (0x000323b2) form2_midp_image_pane_g1

0xec38,	// (0x0003479b) list_double_large_graphic_pane_g5_ParamLimits

0xec38,	// (0x0003479b) list_double_large_graphic_pane_g5

0xa54e,	// (0x000300b1) midp_form_pane_ParamLimits

0xc8b5,	// (0x00032418) main_apps_wheel_pane_ParamLimits

0xacf4,	// (0x00030857) popup_preview_window_ParamLimits

0xacf4,	// (0x00030857) popup_preview_window

0xafc1,	// (0x00030b24) popup_touch_info_window_ParamLimits

0xafc1,	// (0x00030b24) popup_touch_info_window

0xafdf,	// (0x00030b42) popup_touch_menu_window_ParamLimits

0xafdf,	// (0x00030b42) popup_touch_menu_window

0xc845,	// (0x000323a8) bg_popup_sub_pane_cp6

0x53b9,	// (0x0002af1c) list_touch_menu_pane

0xd262,	// (0x00032dc5) list_single_touch_menu_pane_ParamLimits

0xd262,	// (0x00032dc5) list_single_touch_menu_pane

0xd276,	// (0x00032dd9) list_single_touch_menu_pane_t1

0xc8b5,	// (0x00032418) bg_popup_sub_pane_cp7_ParamLimits

0xc8b5,	// (0x00032418) bg_popup_sub_pane_cp7

0x53e5,	// (0x0002af48) heading_sub_pane

0x53ed,	// (0x0002af50) list_touch_info_pane_ParamLimits

0x53ed,	// (0x0002af50) list_touch_info_pane

0x53fc,	// (0x0002af5f) list_single_touch_info_pane_ParamLimits

0x53fc,	// (0x0002af5f) list_single_touch_info_pane

0x540e,	// (0x0002af71) list_single_touch_info_pane_t1

0x541c,	// (0x0002af7f) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x0003565d) list_single_touch_info_pane_t

0x0b02,	// (0x00026665) bg_popup_heading_pane_cp

0x542a,	// (0x0002af8d) heading_sub_pane_t1

0x2f3e,	// (0x00028aa1) bg_popup_preview_window_pane_cp_ParamLimits

0x2f3e,	// (0x00028aa1) bg_popup_preview_window_pane_cp

0x53e5,	// (0x0002af48) heading_preview_pane

0x53ed,	// (0x0002af50) list_preview_pane_ParamLimits

0x53ed,	// (0x0002af50) list_preview_pane

0x5438,	// (0x0002af9b) popup_preview_window_g1

0x53fc,	// (0x0002af5f) list_single_preview_pane_ParamLimits

0x53fc,	// (0x0002af5f) list_single_preview_pane

0x5440,	// (0x0002afa3) list_single_preview_pane_g1

0x5448,	// (0x0002afab) list_single_preview_pane_t1

0x540e,	// (0x0002af71) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00035662) list_single_preview_pane_t

0x5456,	// (0x0002afb9) bg_popup_heading_pane_cp2_ParamLimits

0x5456,	// (0x0002afb9) bg_popup_heading_pane_cp2

0x546c,	// (0x0002afcf) heading_preview_pane_g1

0x5474,	// (0x0002afd7) heading_preview_pane_t1_ParamLimits

0x5474,	// (0x0002afd7) heading_preview_pane_t1

0xc908,	// (0x0003246b) soft_indicator_pane_t1_ParamLimits

0xcbe3,	// (0x00032746) scroll_pane_ParamLimits

0xcf6d,	// (0x00032ad0) scroll_sc2_left_pane

0xcf76,	// (0x00032ad9) scroll_sc2_right_pane

0xcf95,	// (0x00032af8) scroll_bg_pane_g1_ParamLimits

0xcfaa,	// (0x00032b0d) scroll_bg_pane_g2_ParamLimits

0xcfc2,	// (0x00032b25) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00035237) scroll_bg_pane_g_ParamLimits

0xcf95,	// (0x00032af8) scroll_handle_pane_g1_ParamLimits

0xcfd7,	// (0x00032b3a) scroll_handle_pane_g2_ParamLimits

0xcfc2,	// (0x00032b25) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0003523e) scroll_handle_pane_g_ParamLimits

0xa89b,	// (0x000303fe) popup_choice_list_window_ParamLimits

0xa89b,	// (0x000303fe) popup_choice_list_window

0x2e14,	// (0x00028977) choice_list_pane

0x2e96,	// (0x000289f9) cell_toolbar_pane_t1

0x2ebe,	// (0x00028a21) toolbar_button_pane_ParamLimits

0x3f6e,	// (0x00029ad1) ai_gene_pane_1_t2_ParamLimits

0x3f6e,	// (0x00029ad1) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x0003545a) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x0003545a) ai_gene_pane_1_t

0x5491,	// (0x0002aff4) scroll_sc2_left_pane_g1

0x5491,	// (0x0002aff4) scroll_sc2_right_pane_g1

0x1067,	// (0x00026bca) bg_popup_sub_pane_cp10

0x549b,	// (0x0002affe) list_choice_list_pane

0xd284,	// (0x00032de7) list_single_choice_list_pane_ParamLimits

0xd284,	// (0x00032de7) list_single_choice_list_pane

0xd298,	// (0x00032dfb) list_single_choice_list_pane_g1

0xa17f,	// (0x0002fce2) list_single_choice_list_pane_t1_ParamLimits

0xa17f,	// (0x0002fce2) list_single_choice_list_pane_t1

0x54cf,	// (0x0002b032) choice_list_pane_g1

0xd2a0,	// (0x00032e03) choice_list_pane_t1

0xc845,	// (0x000323a8) input_focus_pane_cp11

0xcee2,	// (0x00032a45) title_pane_stacon_g2_ParamLimits

0xcee2,	// (0x00032a45) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0003521d) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003521d) title_pane_stacon_g

0x0b02,	// (0x00026665) cursor_press_pane

0xa942,	// (0x000304a5) popup_fep_hwr_window_ParamLimits

0xa942,	// (0x000304a5) popup_fep_hwr_window

0x11af,	// (0x00026d12) popup_fep_vkb_window_ParamLimits

0x11af,	// (0x00026d12) popup_fep_vkb_window

0xd2ae,	// (0x00032e11) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x0003568b) fep_vkb_side_pane_g_ParamLimits

0x1e3a,	// (0x0002799d) fep_hwr_candidate_pane_ParamLimits

0x1e3a,	// (0x0002799d) fep_hwr_candidate_pane

0x1e64,	// (0x000279c7) fep_hwr_side_pane_ParamLimits

0x1e64,	// (0x000279c7) fep_hwr_side_pane

0x1e84,	// (0x000279e7) fep_hwr_top_pane_ParamLimits

0x1e84,	// (0x000279e7) fep_hwr_top_pane

0x1e9c,	// (0x000279ff) fep_hwr_write_pane_ParamLimits

0x1e9c,	// (0x000279ff) fep_hwr_write_pane

0xfb28,	// (0x0003568b) fep_vkb_side_pane_g

0x54ed,	// (0x0002b050) fep_hwr_top_pane_g1

0x54ff,	// (0x0002b062) fep_hwr_top_pane_g2

0x1ec8,	// (0x00027a2b) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00035667) fep_hwr_top_pane_g

0x1edd,	// (0x00027a40) fep_hwr_top_text_pane

0xd09a,	// (0x00032bfd) fep_hwr_top_text_pane_g1

0x5535,	// (0x0002b098) fep_hwr_top_text_pane_t1

0x1fd3,	// (0x00027b36) fep_hwr_candidate_pane_g1

0x577a,	// (0x0002b2dd) fep_vkb_keypad_pane_g3_ParamLimits

0x577a,	// (0x0002b2dd) fep_vkb_keypad_pane_g3

0x57a2,	// (0x0002b305) fep_vkb_keypad_pane_g4_ParamLimits

0x57a2,	// (0x0002b305) fep_vkb_keypad_pane_g4

0x5811,	// (0x0002b374) fep_vkb_bottom_pane_g2_ParamLimits

0x5811,	// (0x0002b374) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00035692) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00035692) fep_vkb_bottom_pane_g

0x5491,	// (0x0002aff4) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x0003569c) cell_vkb_side_pane_g

0x589c,	// (0x0002b3ff) cell_vkb_side_pane_t1

0x58aa,	// (0x0002b40d) cell_vkb_side_pane_t1_copy1

0x5491,	// (0x0002aff4) bg_fep_vkb_candidate_pane_g2

0x59d6,	// (0x0002b539) cell_vkb_candidate_pane_ParamLimits

0x5543,	// (0x0002b0a6) aid_size_cell_vkb_ParamLimits

0x5543,	// (0x0002b0a6) aid_size_cell_vkb

0x59d6,	// (0x0002b539) cell_vkb_candidate_pane

0x1fed,	// (0x00027b50) bg_popup_fep_shadow_pane_g1

0xd2f0,	// (0x00032e53) fep_vkb_bottom_pane_ParamLimits

0xd2f0,	// (0x00032e53) fep_vkb_bottom_pane

0x5607,	// (0x0002b16a) fep_vkb_candidate_pane_ParamLimits

0x5607,	// (0x0002b16a) fep_vkb_candidate_pane

0xd315,	// (0x00032e78) fep_vkb_keypad_pane_ParamLimits

0xd315,	// (0x00032e78) fep_vkb_keypad_pane

0xd34a,	// (0x00032ead) fep_vkb_side_pane_ParamLimits

0xd34a,	// (0x00032ead) fep_vkb_side_pane

0xd386,	// (0x00032ee9) fep_vkb_top_pane_ParamLimits

0xd386,	// (0x00032ee9) fep_vkb_top_pane

0x56d3,	// (0x0002b236) fep_vkb_top_pane_g1_ParamLimits

0x56d3,	// (0x0002b236) fep_vkb_top_pane_g1

0x56e2,	// (0x0002b245) fep_vkb_top_pane_g2_ParamLimits

0x56e2,	// (0x0002b245) fep_vkb_top_pane_g2

0x56f1,	// (0x0002b254) fep_vkb_top_pane_g3_ParamLimits

0x56f1,	// (0x0002b254) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00035682) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00035682) fep_vkb_top_pane_g

0x570f,	// (0x0002b272) fep_vkb_top_text_pane_ParamLimits

0x570f,	// (0x0002b272) fep_vkb_top_text_pane

0xd3bb,	// (0x00032f1e) fep_vkb_side_pane_g1_ParamLimits

0xd3bb,	// (0x00032f1e) fep_vkb_side_pane_g1

0x5769,	// (0x0002b2cc) grid_vkb_side_pane_ParamLimits

0x5769,	// (0x0002b2cc) grid_vkb_side_pane

0x1ff5,	// (0x00027b58) bg_popup_fep_shadow_pane_g2

0x1ffe,	// (0x00027b61) bg_popup_fep_shadow_pane_g3

0x2006,	// (0x00027b69) bg_popup_fep_shadow_pane_g4

0x200f,	// (0x00027b72) bg_popup_fep_shadow_pane_g5

0x2019,	// (0x00027b7c) bg_popup_fep_shadow_pane_g6

0x2021,	// (0x00027b84) bg_popup_fep_shadow_pane_g7

0xccdf,	// (0x00032842) bg_popup_fep_shadow_pane_g8

0x57c0,	// (0x0002b323) grid_vkb_keypad_number_pane_ParamLimits

0x57c0,	// (0x0002b323) grid_vkb_keypad_number_pane

0x57d0,	// (0x0002b333) grid_vkb_keypad_pane_ParamLimits

0x57d0,	// (0x0002b333) grid_vkb_keypad_pane

0x57f6,	// (0x0002b359) fep_vkb_bottom_pane_g1_ParamLimits

0x57f6,	// (0x0002b359) fep_vkb_bottom_pane_g1

0x581f,	// (0x0002b382) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x581f,	// (0x0002b382) grid_vkb_keypad_bottom_left_pane

0x5834,	// (0x0002b397) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5834,	// (0x0002b397) grid_vkb_keypad_bottom_right_pane

0x5849,	// (0x0002b3ac) fep_vkb_top_text_pane_g1

0xd402,	// (0x00032f65) fep_vkb_top_text_pane_t1

0xd414,	// (0x00032f77) cell_vkb_side_pane_ParamLimits

0xd414,	// (0x00032f77) cell_vkb_side_pane

0x5491,	// (0x0002aff4) cell_vkb_side_pane_g1

0x58b8,	// (0x0002b41b) cell_vkb_keypad_pane_ParamLimits

0x58b8,	// (0x0002b41b) cell_vkb_keypad_pane

0x592d,	// (0x0002b490) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x000356af) bg_popup_fep_shadow_pane_g

0x5491,	// (0x0002aff4) cell_hwr_side_pane_g1

0x5491,	// (0x0002aff4) cell_hwr_side_pane_g2

0x5937,	// (0x0002b49a) cell_vkb_keypad_pane_t1

0xd42a,	// (0x00032f8d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd42a,	// (0x00032f8d) cell_vkb_keypad_bottom_left_pane

0xd43f,	// (0x00032fa2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd43f,	// (0x00032fa2) cell_vkb_keypad_bottom_right_pane

0x5491,	// (0x0002aff4) cell_vkb_keypad_bottom_left_pane_g1

0x5491,	// (0x0002aff4) cell_vkb_keypad_bottom_right_pane_g1

0x599b,	// (0x0002b4fe) cell_vkb_keypad_number_pane_ParamLimits

0x599b,	// (0x0002b4fe) cell_vkb_keypad_number_pane

0x59ba,	// (0x0002b51d) cell_vkb_keypad_number_pane_g1

0x59c4,	// (0x0002b527) cell_vkb_keypad_number_pane_g2

0x59cd,	// (0x0002b530) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000356a1) cell_vkb_keypad_number_pane_g

0x5937,	// (0x0002b49a) cell_vkb_keypad_number_pane_t1

0x59f1,	// (0x0002b554) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x0003569c) cell_hwr_side_pane_g

0x5a0a,	// (0x0002b56d) cell_hwr_side_pane_t1

0x2033,	// (0x00027b96) cell_hwr_side_pane_t1_copy1

0x5701,	// (0x0002b264) cell_hwr_candidate_pane_g1

0x2041,	// (0x00027ba4) cell_hwr_candidate_pane_t1

0x5491,	// (0x0002aff4) cell_vkb_candidate_pane_g2

0x5a90,	// (0x0002b5f3) cell_vkb_candidate_pane_t1

0x1e01,	// (0x00027964) bg_popup_fep_shadow_pane_ParamLimits

0x1e01,	// (0x00027964) bg_popup_fep_shadow_pane

0xd2b6,	// (0x00032e19) bg_fep_hwr_top_pane_g4

0x5511,	// (0x0002b074) bg_hwr_side_pane_g1_ParamLimits

0x5511,	// (0x0002b074) bg_hwr_side_pane_g1

0xc135,	// (0x00031c98) cell_hwr_side_pane_ParamLimits

0xc135,	// (0x00031c98) cell_hwr_side_pane

0x1f54,	// (0x00027ab7) fep_hwr_write_pane_g1_ParamLimits

0x1f54,	// (0x00027ab7) fep_hwr_write_pane_g1

0x1f61,	// (0x00027ac4) fep_hwr_write_pane_g2_ParamLimits

0x1f61,	// (0x00027ac4) fep_hwr_write_pane_g2

0x1f6e,	// (0x00027ad1) fep_hwr_write_pane_g3_ParamLimits

0x1f6e,	// (0x00027ad1) fep_hwr_write_pane_g3

0xc155,	// (0x00031cb8) fep_hwr_write_pane_g4_ParamLimits

0xc155,	// (0x00031cb8) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x0003566e) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x0003566e) fep_hwr_write_pane_g

0xd2b6,	// (0x00032e19) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd2b6,	// (0x00032e19) bg_fep_hwr_candidate_pane_g2

0x1f91,	// (0x00027af4) cell_hwr_candidate_pane_ParamLimits

0x1f91,	// (0x00027af4) cell_hwr_candidate_pane

0x1fd3,	// (0x00027b36) fep_hwr_candidate_pane_g1_ParamLimits

0x5571,	// (0x0002b0d4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5571,	// (0x0002b0d4) bg_popup_fep_shadow_pane_cp2

0x5701,	// (0x0002b264) fep_vkb_top_pane_g4_ParamLimits

0x5701,	// (0x0002b264) fep_vkb_top_pane_g4

0x5747,	// (0x0002b2aa) fep_vkb_side_pane_g2_ParamLimits

0x5747,	// (0x0002b2aa) fep_vkb_side_pane_g2

0x9315,	// (0x0002ee78) list_setting_pane_t4_ParamLimits

0x9315,	// (0x0002ee78) list_setting_pane_t4

0x93af,	// (0x0002ef12) list_setting_number_pane_t5_ParamLimits

0x93af,	// (0x0002ef12) list_setting_number_pane_t5

0xd0d1,	// (0x00032c34) list_double_heading_pane_cp2_ParamLimits

0xd0d1,	// (0x00032c34) list_double_heading_pane_cp2

0x5a9e,	// (0x0002b601) list_double_heading_pane_g1_cp2_ParamLimits

0x5a9e,	// (0x0002b601) list_double_heading_pane_g1_cp2

0x5aaa,	// (0x0002b60d) list_double_heading_pane_g2_cp2_ParamLimits

0x5aaa,	// (0x0002b60d) list_double_heading_pane_g2_cp2

0x5abe,	// (0x0002b621) list_double_heading_pane_t1_cp2_ParamLimits

0x5abe,	// (0x0002b621) list_double_heading_pane_t1_cp2

0x5ad4,	// (0x0002b637) list_double_heading_pane_t2_cp2_ParamLimits

0x5ad4,	// (0x0002b637) list_double_heading_pane_t2_cp2

0xc83d,	// (0x000323a0) aid_value_unit2

0xf544,	// (0x000350a7) popup_preview_fixed_window

0xc9df,	// (0x00032542) bg_popup_preview_window_pane_cp02

0x5ae6,	// (0x0002b649) list_preview_fixed_pane

0x5b2c,	// (0x0002b68f) list_empty_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_empty_pane_fp

0x5b2c,	// (0x0002b68f) list_single_cale_day_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_cale_day_pane_fp

0x5b2c,	// (0x0002b68f) list_single_graphic_heading_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_graphic_heading_pane_fp

0x5b2c,	// (0x0002b68f) list_single_graphic_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_graphic_pane_fp

0x5b2c,	// (0x0002b68f) list_single_heading_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_heading_pane_fp

0x5b2c,	// (0x0002b68f) list_single_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_pane_fp

0x5b42,	// (0x0002b6a5) list_single_pane_fp_g1_ParamLimits

0x5b42,	// (0x0002b6a5) list_single_pane_fp_g1

0xf137,	// (0x00034c9a) list_single_pane_fp_g2_ParamLimits

0xf137,	// (0x00034c9a) list_single_pane_fp_g2

0xf143,	// (0x00034ca6) list_single_pane_fp_g3_ParamLimits

0xf143,	// (0x00034ca6) list_single_pane_fp_g3

0x5b4e,	// (0x0002b6b1) list_single_pane_fp_g4_ParamLimits

0x5b4e,	// (0x0002b6b1) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x000356d0) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x000356d0) list_single_pane_fp_g

0xf157,	// (0x00034cba) list_single_pane_fp_t1_ParamLimits

0xf157,	// (0x00034cba) list_single_pane_fp_t1

0xf16e,	// (0x00034cd1) list_single_graphic_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cd1) list_single_graphic_pane_fp_g1

0x5b42,	// (0x0002b6a5) list_single_graphic_pane_fp_g2_ParamLimits

0x5b42,	// (0x0002b6a5) list_single_graphic_pane_fp_g2

0xf137,	// (0x00034c9a) list_single_graphic_pane_fp_g3_ParamLimits

0xf137,	// (0x00034c9a) list_single_graphic_pane_fp_g3

0xf143,	// (0x00034ca6) list_single_graphic_pane_fp_g4_ParamLimits

0xf143,	// (0x00034ca6) list_single_graphic_pane_fp_g4

0x5b4e,	// (0x0002b6b1) list_single_graphic_pane_fp_g5_ParamLimits

0x5b4e,	// (0x0002b6b1) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x000356d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x000356d9) list_single_graphic_pane_fp_g

0xf17a,	// (0x00034cdd) list_single_graphic_pane_fp_t1_ParamLimits

0xf17a,	// (0x00034cdd) list_single_graphic_pane_fp_t1

0xf16e,	// (0x00034cd1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cd1) list_single_graphic_heading_pane_fp_g1

0x5b42,	// (0x0002b6a5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b42,	// (0x0002b6a5) list_single_graphic_heading_pane_fp_g2

0xf137,	// (0x00034c9a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf137,	// (0x00034c9a) list_single_graphic_heading_pane_fp_g3

0xf143,	// (0x00034ca6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf143,	// (0x00034ca6) list_single_graphic_heading_pane_fp_g4

0x5b4e,	// (0x0002b6b1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b4e,	// (0x0002b6b1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000356d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000356d9) list_single_graphic_heading_pane_fp_g

0xf190,	// (0x00034cf3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf190,	// (0x00034cf3) list_single_graphic_heading_pane_fp_t1

0xf1a6,	// (0x00034d09) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x00034d09) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x000356e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x000356e4) list_single_graphic_heading_pane_fp_t

0xf1b8,	// (0x00034d1b) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1b8,	// (0x00034d1b) list_single_cale_day_pane_fp_g1

0x5b5a,	// (0x0002b6bd) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b5a,	// (0x0002b6bd) list_single_cale_day_pane_fp_g2

0xf1f0,	// (0x00034d53) list_single_cale_day_pane_fp_g3_ParamLimits

0xf1f0,	// (0x00034d53) list_single_cale_day_pane_fp_g3

0xf218,	// (0x00034d7b) list_single_cale_day_pane_fp_g4_ParamLimits

0xf218,	// (0x00034d7b) list_single_cale_day_pane_fp_g4

0xf23c,	// (0x00034d9f) list_single_cale_day_pane_fp_g5_ParamLimits

0xf23c,	// (0x00034d9f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x000356e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x000356e9) list_single_cale_day_pane_fp_g

0xf260,	// (0x00034dc3) list_single_cale_day_pane_fp_t1_ParamLimits

0xf260,	// (0x00034dc3) list_single_cale_day_pane_fp_t1

0xf286,	// (0x00034de9) list_single_cale_day_pane_fp_t2_ParamLimits

0xf286,	// (0x00034de9) list_single_cale_day_pane_fp_t2

0xf29f,	// (0x00034e02) list_single_cale_day_pane_fp_t3_ParamLimits

0xf29f,	// (0x00034e02) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x000356f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x000356f4) list_single_cale_day_pane_fp_t

0x5b42,	// (0x0002b6a5) list_empty_pane_fp_g1_ParamLimits

0x5b42,	// (0x0002b6a5) list_empty_pane_fp_g1

0xf2b8,	// (0x00034e1b) list_empty_pane_fp_t1

0xf2c6,	// (0x00034e29) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x000356fb) list_empty_pane_fp_t

0x5b42,	// (0x0002b6a5) list_single_heading_pane_fp_g1_ParamLimits

0x5b42,	// (0x0002b6a5) list_single_heading_pane_fp_g1

0xf137,	// (0x00034c9a) list_single_heading_pane_fp_g2_ParamLimits

0xf137,	// (0x00034c9a) list_single_heading_pane_fp_g2

0xf143,	// (0x00034ca6) list_single_heading_pane_fp_g3_ParamLimits

0xf143,	// (0x00034ca6) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00035700) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00035700) list_single_heading_pane_fp_g

0xf2d4,	// (0x00034e37) list_single_heading_pane_fp_t1_ParamLimits

0xf2d4,	// (0x00034e37) list_single_heading_pane_fp_t1

0xf2e6,	// (0x00034e49) list_single_heading_pane_fp_t2_ParamLimits

0xf2e6,	// (0x00034e49) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00035707) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00035707) list_single_heading_pane_fp_t

0xa1cb,	// (0x0002fd2e) aid_size_cell_fast

0xc9c2,	// (0x00032525) soft_indicator_pane_cp1_t1

0xa1d4,	// (0x0002fd37) cell_app_pane_cp2_ParamLimits

0xa1d4,	// (0x0002fd37) cell_app_pane_cp2

0x1e23,	// (0x00027986) fep_hwr_candidate_drop_down_list_pane

0xd2c4,	// (0x00032e27) fep_hwr_candidate_pane_g3_ParamLimits

0xd2c4,	// (0x00032e27) fep_hwr_candidate_pane_g3

0xd2d1,	// (0x00032e34) fep_hwr_candidate_pane_g4_ParamLimits

0xd2d1,	// (0x00032e34) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x0003567b) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x0003567b) fep_hwr_candidate_pane_g

0x55f6,	// (0x0002b159) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55f6,	// (0x0002b159) fep_vkb_candidate_drop_down_list_pane

0x59f9,	// (0x0002b55c) fep_vkb_candidate_pane_g3

0x5a01,	// (0x0002b564) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x000356a8) fep_vkb_candidate_pane_g

0x5701,	// (0x0002b264) cell_hwr_candidate_pane_g1_ParamLimits

0x5a18,	// (0x0002b57b) cell_hwr_candidate_pane_g3_ParamLimits

0x5a18,	// (0x0002b57b) cell_hwr_candidate_pane_g3

0x5a39,	// (0x0002b59c) cell_hwr_candidate_pane_g4_ParamLimits

0x5a39,	// (0x0002b59c) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x000356c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x000356c2) cell_hwr_candidate_pane_g

0x5a5a,	// (0x0002b5bd) cell_vkb_candidate_pane_g3_ParamLimits

0x5a5a,	// (0x0002b5bd) cell_vkb_candidate_pane_g3

0x5a75,	// (0x0002b5d8) cell_vkb_candidate_pane_g4_ParamLimits

0x5a75,	// (0x0002b5d8) cell_vkb_candidate_pane_g4

0xd45a,	// (0x00032fbd) cell_app_pane_cp2_g1_ParamLimits

0xd45a,	// (0x00032fbd) cell_app_pane_cp2_g1

0x5b84,	// (0x0002b6e7) cell_app_pane_cp2_g2_ParamLimits

0x5b84,	// (0x0002b6e7) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x0003570c) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x0003570c) cell_app_pane_cp2_g

0x5b90,	// (0x0002b6f3) cell_app_pane_cp2_t1_ParamLimits

0x5b90,	// (0x0002b6f3) cell_app_pane_cp2_t1

0xcc67,	// (0x000327ca) grid_highlight_pane_cp1_ParamLimits

0xcc67,	// (0x000327ca) grid_highlight_pane_cp1

0x205f,	// (0x00027bc2) cell_hwr_candidate_pane_cp1_ParamLimits

0x205f,	// (0x00027bc2) cell_hwr_candidate_pane_cp1

0x5701,	// (0x0002b264) fep_hwr_candidate_drop_down_list_pane_g1

0x5ba2,	// (0x0002b705) fep_hwr_candidate_drop_down_list_pane_g2

0x5baf,	// (0x0002b712) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035711) fep_hwr_candidate_drop_down_list_pane_g

0x207e,	// (0x00027be1) fep_hwr_candidate_drop_down_list_scroll_pane

0x2087,	// (0x00027bea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2087,	// (0x00027bea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2094,	// (0x00027bf7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2094,	// (0x00027bf7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20a1,	// (0x00027c04) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20a1,	// (0x00027c04) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5a5a,	// (0x0002b5bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a5a,	// (0x0002b5bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5a75,	// (0x0002b5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a75,	// (0x0002b5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x20ae,	// (0x00027c11) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x20ae,	// (0x00027c11) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x20c9,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x20c9,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20e4,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20e4,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00035718) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00035718) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5bbc,	// (0x0002b71f) cell_vkb_candidate_pane_cp1_ParamLimits

0x5bbc,	// (0x0002b71f) cell_vkb_candidate_pane_cp1

0x5701,	// (0x0002b264) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5701,	// (0x0002b264) fep_vkb_candidate_drop_down_list_pane_g1

0x5ba2,	// (0x0002b705) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5ba2,	// (0x0002b705) fep_vkb_candidate_drop_down_list_pane_g2

0x5baf,	// (0x0002b712) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5baf,	// (0x0002b712) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035711) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00035711) fep_vkb_candidate_drop_down_list_pane_g

0x5bdc,	// (0x0002b73f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5bdc,	// (0x0002b73f) fep_vkb_candidate_drop_down_list_scroll_pane

0x5be9,	// (0x0002b74c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5be9,	// (0x0002b74c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5bf6,	// (0x0002b759) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5bf6,	// (0x0002b759) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5c02,	// (0x0002b765) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c02,	// (0x0002b765) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5a18,	// (0x0002b57b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a18,	// (0x0002b57b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5a39,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a39,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c0e,	// (0x0002b771) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c0e,	// (0x0002b771) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c2f,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c2f,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5c50,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c50,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00035729) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00035729) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9af5,	// (0x0002f658) title_pane_g1_ParamLimits

0x9b08,	// (0x0002f66b) title_pane_g2_ParamLimits

0xf54e,	// (0x000350b1) title_pane_g_ParamLimits

0xd08a,	// (0x00032bed) aid_call2_pane

0xd092,	// (0x00032bf5) aid_call_pane

0xd09a,	// (0x00032bfd) popup_clock_analogue_window_g1

0xd09a,	// (0x00032bfd) popup_clock_analogue_window_g2

0x03b0,	// (0x00025f13) popup_clock_analogue_window_g3

0x03b9,	// (0x00025f1c) popup_clock_analogue_window_g4

0xc84f,	// (0x000323b2) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0003524c) popup_clock_analogue_window_g

0x03c1,	// (0x00025f24) popup_clock_analogue_window_t1

0x03f9,	// (0x00025f5c) clock_digital_number_pane_ParamLimits

0x03f9,	// (0x00025f5c) clock_digital_number_pane

0x0405,	// (0x00025f68) clock_digital_number_pane_cp02_ParamLimits

0x0405,	// (0x00025f68) clock_digital_number_pane_cp02

0x0411,	// (0x00025f74) clock_digital_number_pane_cp03_ParamLimits

0x0411,	// (0x00025f74) clock_digital_number_pane_cp03

0x041d,	// (0x00025f80) clock_digital_number_pane_cp04_ParamLimits

0x041d,	// (0x00025f80) clock_digital_number_pane_cp04

0x0429,	// (0x00025f8c) clock_digital_separator_pane_ParamLimits

0x0429,	// (0x00025f8c) clock_digital_separator_pane

0x0435,	// (0x00025f98) popup_clock_digital_window_t1_ParamLimits

0x0435,	// (0x00025f98) popup_clock_digital_window_t1

0xc84f,	// (0x000323b2) clock_digital_number_pane_g1

0xc84f,	// (0x000323b2) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00035257) clock_digital_number_pane_g

0xc84f,	// (0x000323b2) clock_digital_separator_pane_g1

0xc84f,	// (0x000323b2) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00035257) clock_digital_separator_pane_g

0xb016,	// (0x00030b79) aid_fill_nsta_ParamLimits

0xb14c,	// (0x00030caf) indicator_nsta_pane_ParamLimits

0x18e9,	// (0x0002744c) popup_clock_analogue_window

0x18e9,	// (0x0002744c) popup_clock_digital_window

0xd15d,	// (0x00032cc0) grid_indicator_nsta_pane_ParamLimits

0x4ea2,	// (0x0002aa05) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x000355fb) clock_nsta_pane_t

0x02db,	// (0x00025e3e) aid_size_max_handle

0xa2b2,	// (0x0002fe15) aid_size_min_handle

0x0b02,	// (0x00026665) editor_scroll_pane

0x5c6b,	// (0x0002b7ce) ex_editor_pane

0xcd86,	// (0x000328e9) scroll_pane_cp13

0xcc0f,	// (0x00032772) scroll_pane_cp14

0xd0c9,	// (0x00032c2c) scroll_pane_cp36

0xa37c,	// (0x0002fedf) list_single_graphic_hl_pane_cp2_ParamLimits

0xa37c,	// (0x0002fedf) list_single_graphic_hl_pane_cp2

0xbda0,	// (0x00031903) list_single_graphic_hl_pane_ParamLimits

0xbda0,	// (0x00031903) list_single_graphic_hl_pane

0x970d,	// (0x0002f270) aid_size_min_hl_cp1

0x5c73,	// (0x0002b7d6) list_highlight_pane_cp34_ParamLimits

0x5c73,	// (0x0002b7d6) list_highlight_pane_cp34

0x5c84,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_ParamLimits

0x5c84,	// (0x0002b7e7) list_single_graphic_hl_pane_g1

0x9716,	// (0x0002f279) list_single_graphic_hl_pane_g2_ParamLimits

0x9716,	// (0x0002f279) list_single_graphic_hl_pane_g2

0x9716,	// (0x0002f279) list_single_graphic_hl_pane_g3_ParamLimits

0x9716,	// (0x0002f279) list_single_graphic_hl_pane_g3

0xf2fc,	// (0x00034e5f) list_single_graphic_hl_pane_g4_ParamLimits

0xf2fc,	// (0x00034e5f) list_single_graphic_hl_pane_g4

0x9722,	// (0x0002f285) list_single_graphic_hl_pane_g5_ParamLimits

0x9722,	// (0x0002f285) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x0003573a) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x0003573a) list_single_graphic_hl_pane_g

0x9736,	// (0x0002f299) list_single_graphic_hl_pane_t1_ParamLimits

0x9736,	// (0x0002f299) list_single_graphic_hl_pane_t1

0x5cb1,	// (0x0002b814) aid_size_min_hl_cp2

0x5cba,	// (0x0002b81d) list_highlight_pane_cp34_cp2_ParamLimits

0x5cba,	// (0x0002b81d) list_highlight_pane_cp34_cp2

0x5c84,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5c84,	// (0x0002b7e7) list_single_graphic_hl_pane_g1_cp2

0x5cc7,	// (0x0002b82a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5cc7,	// (0x0002b82a) list_single_graphic_hl_pane_g2_cp2

0xd478,	// (0x00032fdb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd478,	// (0x00032fdb) list_single_graphic_hl_pane_g3_cp2

0x0a3b,	// (0x0002659e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0a3b,	// (0x0002659e) list_single_graphic_hl_pane_g4_cp2

0x5ce1,	// (0x0002b844) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5ce1,	// (0x0002b844) list_single_graphic_hl_pane_g5_cp2

0xa71f,	// (0x00030282) control_pane_g4_ParamLimits

0xa71f,	// (0x00030282) control_pane_g4

0x1067,	// (0x00026bca) bg_popup_sub_pane_cp10_ParamLimits

0x549b,	// (0x0002affe) list_choice_list_pane_ParamLimits

0x54aa,	// (0x0002b00d) scroll_pane_cp23

0xc9df,	// (0x00032542) bg_popup_preview_window_pane_cp02_ParamLimits

0x5ae6,	// (0x0002b649) list_preview_fixed_pane_ParamLimits

0x5afc,	// (0x0002b65f) list_preview_fixed_pane_cp_ParamLimits

0x5afc,	// (0x0002b65f) list_preview_fixed_pane_cp

0x5b08,	// (0x0002b66b) popup_preview_fixed_window_g1_ParamLimits

0x5b08,	// (0x0002b66b) popup_preview_fixed_window_g1

0x5b14,	// (0x0002b677) popup_preview_fixed_window_g2_ParamLimits

0x5b14,	// (0x0002b677) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x000356c9) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x000356c9) popup_preview_fixed_window_g

0x01b5,	// (0x00025d18) aid_navi_side_left_pane_ParamLimits

0x01ca,	// (0x00025d2d) aid_navi_side_right_pane_ParamLimits

0x01e2,	// (0x00025d45) navi_icon_pane_stacon_ParamLimits

0x01f6,	// (0x00025d59) navi_navi_pane_stacon_ParamLimits

0x01e2,	// (0x00025d45) navi_text_pane_stacon_ParamLimits

0xc845,	// (0x000323a8) main_text_info_pane

0x5d0b,	// (0x0002b86e) listscroll_text_info_pane

0x5d13,	// (0x0002b876) list_text_info_pane_ParamLimits

0x5d13,	// (0x0002b876) list_text_info_pane

0x5d22,	// (0x0002b885) scroll_pane_cp24_ParamLimits

0x5d22,	// (0x0002b885) scroll_pane_cp24

0xd486,	// (0x00032fe9) list_text_info_pane_t1_ParamLimits

0xd486,	// (0x00032fe9) list_text_info_pane_t1

0xa8b7,	// (0x0003041a) popup_fast_swap2_window_ParamLimits

0xa8b7,	// (0x0003041a) popup_fast_swap2_window

0x5d74,	// (0x0002b8d7) aid_size_cell_fast2

0xc845,	// (0x000323a8) bg_popup_window_pane_cp17

0x3331,	// (0x00028e94) heading_pane_cp2

0xcb13,	// (0x00032676) listscroll_fast2_pane

0x5d7e,	// (0x0002b8e1) grid_fast2_pane

0x5d88,	// (0x0002b8eb) listscroll_fast2_pane_g1

0x5d90,	// (0x0002b8f3) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00035745) listscroll_fast2_pane_g

0xcd86,	// (0x000328e9) scroll_pane_cp26

0x5d9a,	// (0x0002b8fd) cell_fast2_pane_ParamLimits

0x5d9a,	// (0x0002b8fd) cell_fast2_pane

0x5daf,	// (0x0002b912) cell_fast2_pane_g1

0x5db8,	// (0x0002b91b) cell_fast2_pane_g2

0x5dc1,	// (0x0002b924) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x0003574a) cell_fast2_pane_g

0xcb46,	// (0x000326a9) grid_highlight_pane_cp9

0xcb5b,	// (0x000326be) main_eswt_pane_ParamLimits

0xcb5b,	// (0x000326be) main_eswt_pane

0x5d37,	// (0x0002b89a) list_single_text_info_pane

0x5dc9,	// (0x0002b92c) eswt_ctrl_button_pane

0x5dc9,	// (0x0002b92c) eswt_ctrl_canvas_pane

0xd4a2,	// (0x00033005) eswt_ctrl_combo_pane

0x5dc9,	// (0x0002b92c) eswt_ctrl_default_pane

0x5dc9,	// (0x0002b92c) eswt_ctrl_label_pane

0x5dd9,	// (0x0002b93c) eswt_ctrl_wait_pane

0xd4aa,	// (0x0003300d) eswt_shell_pane

0xc845,	// (0x000323a8) listscroll_eswt_app_pane

0x5e01,	// (0x0002b964) popup_eswt_tasktip_window_ParamLimits

0x5e01,	// (0x0002b964) popup_eswt_tasktip_window

0x2f3e,	// (0x00028aa1) bg_popup_window_pane_cp18

0x5e12,	// (0x0002b975) eswt_control_pane_g1_ParamLimits

0x5e12,	// (0x0002b975) eswt_control_pane_g1

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_ParamLimits

0x5e1f,	// (0x0002b982) eswt_control_pane_g2

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_ParamLimits

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_ParamLimits

0x5e39,	// (0x0002b99c) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00035751) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00035751) eswt_control_pane_g

0xcc67,	// (0x000327ca) bg_button_pane_ParamLimits

0xcc67,	// (0x000327ca) bg_button_pane

0xcb5b,	// (0x000326be) common_borders_pane_copy2_ParamLimits

0xcb5b,	// (0x000326be) common_borders_pane_copy2

0x5e46,	// (0x0002b9a9) control_button_pane_g1_ParamLimits

0x5e46,	// (0x0002b9a9) control_button_pane_g1

0x5e52,	// (0x0002b9b5) control_button_pane_g2_ParamLimits

0x5e52,	// (0x0002b9b5) control_button_pane_g2

0x5e5e,	// (0x0002b9c1) control_button_pane_g3_ParamLimits

0x5e5e,	// (0x0002b9c1) control_button_pane_g3

0x0002,

0xfbf7,	// (0x0003575a) control_button_pane_g_ParamLimits

0xfbf7,	// (0x0003575a) control_button_pane_g

0x5e72,	// (0x0002b9d5) control_button_pane_t1

0x5e80,	// (0x0002b9e3) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00035761) control_button_pane_t

0x2eca,	// (0x00028a2d) bg_button_pane_g1

0x2ed2,	// (0x00028a35) bg_button_pane_g2

0x2eda,	// (0x00028a3d) bg_button_pane_g3

0x2ee2,	// (0x00028a45) bg_button_pane_g4

0x2eea,	// (0x00028a4d) bg_button_pane_g5

0x2ef2,	// (0x00028a55) bg_button_pane_g6

0x2efa,	// (0x00028a5d) bg_button_pane_g7

0x2f02,	// (0x00028a65) bg_button_pane_g8

0x2f0a,	// (0x00028a6d) bg_button_pane_g9

0x0008,

0xf84b,	// (0x000353ae) bg_button_pane_g

0x5456,	// (0x0002afb9) common_borders_pane_ParamLimits

0x5456,	// (0x0002afb9) common_borders_pane

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy1_ParamLimits

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy1

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy1_ParamLimits

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy1

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy1_ParamLimits

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy1

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy1_ParamLimits

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy1

0x5491,	// (0x0002aff4) bg_eswt_ctrl_canvas_pane_g1

0x5456,	// (0x0002afb9) common_borders_pane_cp2_ParamLimits

0x5456,	// (0x0002afb9) common_borders_pane_cp2

0x5456,	// (0x0002afb9) common_borders_pane_cp3_ParamLimits

0x5456,	// (0x0002afb9) common_borders_pane_cp3

0x5e8e,	// (0x0002b9f1) separator_horizontal_pane

0x5e96,	// (0x0002b9f9) separator_vertical_pane

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy2_ParamLimits

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy2

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy2_ParamLimits

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy2

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy2_ParamLimits

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy2

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy2_ParamLimits

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy2

0xc845,	// (0x000323a8) common_borders_pane_cp4

0x5e9f,	// (0x0002ba02) separator_horizontal_pane_g1

0x5ea8,	// (0x0002ba0b) separator_horizontal_pane_g2

0x5eb1,	// (0x0002ba14) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00035766) separator_horizontal_pane_g

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy3_ParamLimits

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy3

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy3_ParamLimits

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy3

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy3_ParamLimits

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy3

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy3_ParamLimits

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy3

0xc845,	// (0x000323a8) common_borders_pane_cp5

0x5eba,	// (0x0002ba1d) separator_vertical_pane_g1

0x5ec3,	// (0x0002ba26) separator_vertical_pane_g2

0x5ecc,	// (0x0002ba2f) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x0003576d) separator_vertical_pane_g

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy4_ParamLimits

0x5e12,	// (0x0002b975) eswt_control_pane_g1_copy4

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy4_ParamLimits

0x5e1f,	// (0x0002b982) eswt_control_pane_g2_copy4

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy4_ParamLimits

0x5e2c,	// (0x0002b98f) eswt_control_pane_g3_copy4

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy4_ParamLimits

0x5e39,	// (0x0002b99c) eswt_control_pane_g4_copy4

0xd4ca,	// (0x0003302d) eswt_ctrl_combo_button_pane

0xd4d2,	// (0x00033035) eswt_ctrl_input_pane

0xd4da,	// (0x0003303d) popup_choice_list_window_cp70

0xd4e2,	// (0x00033045) eswt_ctrl_input_pane_t1

0xc845,	// (0x000323a8) input_focus_pane_cp70

0x5456,	// (0x0002afb9) bg_button_pane_cp70_ParamLimits

0x5456,	// (0x0002afb9) bg_button_pane_cp70

0xd4f0,	// (0x00033053) eswt_ctrl_combo_button_pane_g1

0x5f03,	// (0x0002ba66) wait_bar_pane_cp70

0x2f3e,	// (0x00028aa1) bg_popup_window_pane_cp70_ParamLimits

0x2f3e,	// (0x00028aa1) bg_popup_window_pane_cp70

0x5f0b,	// (0x0002ba6e) popup_eswt_tasktip_window_t1

0x5f21,	// (0x0002ba84) wait_bar_pane_cp71_ParamLimits

0x5f21,	// (0x0002ba84) wait_bar_pane_cp71

0x5f2d,	// (0x0002ba90) grid_eswt_app_pane

0xcf76,	// (0x00032ad9) scroll_pane_cp70

0xd4f8,	// (0x0003305b) cell_eswt_app_pane_ParamLimits

0xd4f8,	// (0x0003305b) cell_eswt_app_pane

0xd522,	// (0x00033085) cell_eswt_app_pane_g1_ParamLimits

0xd522,	// (0x00033085) cell_eswt_app_pane_g1

0xd551,	// (0x000330b4) cell_eswt_app_pane_g2_ParamLimits

0xd551,	// (0x000330b4) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00035774) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00035774) cell_eswt_app_pane_g

0xd575,	// (0x000330d8) cell_eswt_app_pane_t1_ParamLimits

0xd575,	// (0x000330d8) cell_eswt_app_pane_t1

0x5feb,	// (0x0002bb4e) grid_highlight_pane_cp70_ParamLimits

0x5feb,	// (0x0002bb4e) grid_highlight_pane_cp70

0x09d7,	// (0x0002653a) set_content_pane_g1

0xa6b1,	// (0x00030214) status_small_volume_pane

0xc16a,	// (0x00031ccd) status_small_volume_pane_g1

0xc172,	// (0x00031cd5) volume_small2_pane

0xc17b,	// (0x00031cde) volume_small2_pane_g1

0xc184,	// (0x00031ce7) volume_small2_pane_g2

0xc18d,	// (0x00031cf0) volume_small2_pane_g3

0xc196,	// (0x00031cf9) volume_small2_pane_g4

0xc19f,	// (0x00031d02) volume_small2_pane_g5

0xc1a8,	// (0x00031d0b) volume_small2_pane_g6

0xc1b1,	// (0x00031d14) volume_small2_pane_g7

0xc1ba,	// (0x00031d1d) volume_small2_pane_g8

0xc1c3,	// (0x00031d26) volume_small2_pane_g9

0xc1cc,	// (0x00031d2f) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00035779) volume_small2_pane_g

0x5849,	// (0x0002b3ac) fep_vkb_top_text_pane_g1_ParamLimits

0xd402,	// (0x00032f65) fep_vkb_top_text_pane_t1_ParamLimits

0x5b20,	// (0x0002b683) popup_preview_fixed_window_g3_ParamLimits

0x5b20,	// (0x0002b683) popup_preview_fixed_window_g3

0xaf54,	// (0x00030ab7) popup_toolbar_trans_pane

0xbc39,	// (0x0003179c) aid_height_set_list_ParamLimits

0x4279,	// (0x00029ddc) aid_size_parent_ParamLimits

0x1067,	// (0x00026bca) list_highlight_pane_cp2_ParamLimits

0x09d7,	// (0x0002653a) set_content_pane_g1_ParamLimits

0xbdb2,	// (0x00031915) list_single_image_pane_ParamLimits

0xbdb2,	// (0x00031915) list_single_image_pane

0xd5a7,	// (0x0003310a) aid_size_cell_image_ParamLimits

0xd5a7,	// (0x0003310a) aid_size_cell_image

0xd5b4,	// (0x00033117) grid_single_image_pane_ParamLimits

0xd5b4,	// (0x00033117) grid_single_image_pane

0x5c91,	// (0x0002b7f4) list_single_image_pane_g1_ParamLimits

0x5c91,	// (0x0002b7f4) list_single_image_pane_g1

0x5c9d,	// (0x0002b800) list_single_image_pane_g2_ParamLimits

0x5c9d,	// (0x0002b800) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x0003578e) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x0003578e) list_single_image_pane_g

0x6012,	// (0x0002bb75) list_single_image_pane_t1_ParamLimits

0x6012,	// (0x0002bb75) list_single_image_pane_t1

0xd5c0,	// (0x00033123) cell_image_list_pane_ParamLimits

0xd5c0,	// (0x00033123) cell_image_list_pane

0xd5d4,	// (0x00033137) cell_image_list_pane_g1

0xd5dd,	// (0x00033140) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00035793) cell_image_list_pane_g

0xd5e6,	// (0x00033149) aid_size_cell_tb_trans_pane

0xcc67,	// (0x000327ca) bg_tb_trans_pane

0xd5f8,	// (0x0003315b) grid_tb_trans_pane

0x2eca,	// (0x00028a2d) bg_tb_trans_pane_g1

0x2ed2,	// (0x00028a35) bg_tb_trans_pane_g2

0x2eda,	// (0x00028a3d) bg_tb_trans_pane_g3

0x2ee2,	// (0x00028a45) bg_tb_trans_pane_g4

0x2eea,	// (0x00028a4d) bg_tb_trans_pane_g5

0x2f02,	// (0x00028a65) bg_tb_trans_pane_g6

0x2f0a,	// (0x00028a6d) bg_tb_trans_pane_g7

0x2ef2,	// (0x00028a55) bg_tb_trans_pane_g8

0x2efa,	// (0x00028a5d) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00035798) bg_tb_trans_pane_g

0xd60c,	// (0x0003316f) cell_toolbar_trans_pane_ParamLimits

0xd60c,	// (0x0003316f) cell_toolbar_trans_pane

0x5491,	// (0x0002aff4) cell_toolbar_trans_pane_g1

0xc0c9,	// (0x00031c2c) list_form2_midp_pane_t1

0xc0d7,	// (0x00031c3a) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00035641) list_form2_midp_pane_t

0x507e,	// (0x0002abe1) scroll_pane_cp51_ParamLimits

0x523a,	// (0x0002ad9d) form2_midp_wait_pane_g1

0x5243,	// (0x0002ada6) form2_midp_wait_pane_g2

0x524c,	// (0x0002adaf) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00035656) form2_midp_wait_pane_g

0xc8b5,	// (0x00032418) list_highlight_pane_cp21_ParamLimits

0x5294,	// (0x0002adf7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x52a3,	// (0x0002ae06) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xedb2,	// (0x00034915) list_single_2graphic_im_pane_ParamLimits

0xedb2,	// (0x00034915) list_single_2graphic_im_pane

0xd632,	// (0x00033195) list_single_2graphic_im_pane_g1_ParamLimits

0xd632,	// (0x00033195) list_single_2graphic_im_pane_g1

0xd643,	// (0x000331a6) list_single_2graphic_im_pane_g2_ParamLimits

0xd643,	// (0x000331a6) list_single_2graphic_im_pane_g2

0xd64f,	// (0x000331b2) list_single_2graphic_im_pane_g3_ParamLimits

0xd64f,	// (0x000331b2) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x000357ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x000357ab) list_single_2graphic_im_pane_g

0xd663,	// (0x000331c6) list_single_2graphic_im_pane_t1_ParamLimits

0xd663,	// (0x000331c6) list_single_2graphic_im_pane_t1

0x5b2c,	// (0x0002b68f) list_single_graphic_2heading_pane_fp_ParamLimits

0x5b2c,	// (0x0002b68f) list_single_graphic_2heading_pane_fp

0xf16e,	// (0x00034cd1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cd1) list_single_graphic_2heading_pane_fp_g1

0x5b42,	// (0x0002b6a5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b42,	// (0x0002b6a5) list_single_graphic_2heading_pane_fp_g2

0xf137,	// (0x00034c9a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf137,	// (0x00034c9a) list_single_graphic_2heading_pane_fp_g3

0xf143,	// (0x00034ca6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf143,	// (0x00034ca6) list_single_graphic_2heading_pane_fp_g4

0x5b4e,	// (0x0002b6b1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b4e,	// (0x0002b6b1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000356d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000356d9) list_single_graphic_2heading_pane_fp_g

0xf308,	// (0x00034e6b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf308,	// (0x00034e6b) list_single_graphic_2heading_pane_fp_t1

0xf1a6,	// (0x00034d09) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x00034d09) list_single_graphic_2heading_pane_fp_t2

0xf31e,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf31e,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x000357b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x000357b4) list_single_graphic_2heading_pane_fp_t

0x551d,	// (0x0002b080) fep_hwr_write_pane_g5_ParamLimits

0x551d,	// (0x0002b080) fep_hwr_write_pane_g5

0x5529,	// (0x0002b08c) fep_hwr_write_pane_g6_ParamLimits

0x5529,	// (0x0002b08c) fep_hwr_write_pane_g6

0xd4aa,	// (0x0003300d) eswt_shell_pane_ParamLimits

0x2f3e,	// (0x00028aa1) bg_popup_window_pane_cp18_ParamLimits

0x41c1,	// (0x00029d24) heading_pane_cp70

0x5f0b,	// (0x0002ba6e) popup_eswt_tasktip_window_t1_ParamLimits

0xb071,	// (0x00030bd4) aid_touch_tab_arrow_left

0xb087,	// (0x00030bea) aid_touch_tab_arrow_right

0x9b20,	// (0x0002f683) title_pane_g3_ParamLimits

0x9b20,	// (0x0002f683) title_pane_g3

0xcc2f,	// (0x00032792) set_value_pane_g1

0xaf54,	// (0x00030ab7) popup_toolbar_trans_pane_ParamLimits

0xd5e6,	// (0x00033149) aid_size_cell_tb_trans_pane_ParamLimits

0xcc67,	// (0x000327ca) bg_tb_trans_pane_ParamLimits

0xd5f8,	// (0x0003315b) grid_tb_trans_pane_ParamLimits

0xc9df,	// (0x00032542) cont_note_pane_ParamLimits

0xc9df,	// (0x00032542) cont_note_pane

0xcb5b,	// (0x000326be) cont_snote2_single_text_pane_ParamLimits

0xcb5b,	// (0x000326be) cont_snote2_single_text_pane

0xcb5b,	// (0x000326be) cont_snote2_single_graphic_pane_ParamLimits

0xcb5b,	// (0x000326be) cont_snote2_single_graphic_pane

0x3544,	// (0x000290a7) cont_note_wait_pane_ParamLimits

0x3544,	// (0x000290a7) cont_note_wait_pane

0x3544,	// (0x000290a7) cont_note_image_pane_ParamLimits

0x3544,	// (0x000290a7) cont_note_image_pane

0x6108,	// (0x0002bc6b) popup_note2_window_g1_ParamLimits

0x6108,	// (0x0002bc6b) popup_note2_window_g1

0xd6a1,	// (0x00033204) popup_note2_window_t1_ParamLimits

0xd6a1,	// (0x00033204) popup_note2_window_t1

0xd6e6,	// (0x00033249) popup_note2_window_t2_ParamLimits

0xd6e6,	// (0x00033249) popup_note2_window_t2

0xd72b,	// (0x0003328e) popup_note2_window_t3_ParamLimits

0xd72b,	// (0x0003328e) popup_note2_window_t3

0x6208,	// (0x0002bd6b) popup_note2_window_t4_ParamLimits

0x6208,	// (0x0002bd6b) popup_note2_window_t4

0xca63,	// (0x000325c6) popup_note2_window_t5_ParamLimits

0xca63,	// (0x000325c6) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x000357c0) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x000357c0) popup_note2_window_t

0x6237,	// (0x0002bd9a) popup_note2_image_window_g1_ParamLimits

0x6237,	// (0x0002bd9a) popup_note2_image_window_g1

0xd770,	// (0x000332d3) popup_note2_image_window_g2_ParamLimits

0xd770,	// (0x000332d3) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x000357cb) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x000357cb) popup_note2_image_window_g

0x6255,	// (0x0002bdb8) popup_note2_image_window_t1_ParamLimits

0x6255,	// (0x0002bdb8) popup_note2_image_window_t1

0x626d,	// (0x0002bdd0) popup_note2_image_window_t2_ParamLimits

0x626d,	// (0x0002bdd0) popup_note2_image_window_t2

0x6285,	// (0x0002bde8) popup_note2_image_window_t3_ParamLimits

0x6285,	// (0x0002bde8) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x000357d0) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x000357d0) popup_note2_image_window_t

0x3552,	// (0x000290b5) popup_note2_wait_window_g1_ParamLimits

0x3552,	// (0x000290b5) popup_note2_wait_window_g1

0x355e,	// (0x000290c1) popup_note2_wait_window_g2_ParamLimits

0x355e,	// (0x000290c1) popup_note2_wait_window_g2

0x356a,	// (0x000290cd) popup_note2_wait_window_g3_ParamLimits

0x356a,	// (0x000290cd) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00035390) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00035390) popup_note2_wait_window_g

0x62a1,	// (0x0002be04) popup_note2_wait_window_t1_ParamLimits

0x62a1,	// (0x0002be04) popup_note2_wait_window_t1

0x62bf,	// (0x0002be22) popup_note2_wait_window_t2_ParamLimits

0x62bf,	// (0x0002be22) popup_note2_wait_window_t2

0x62dd,	// (0x0002be40) popup_note2_wait_window_t3_ParamLimits

0x62dd,	// (0x0002be40) popup_note2_wait_window_t3

0x62ef,	// (0x0002be52) popup_note2_wait_window_t4_ParamLimits

0x62ef,	// (0x0002be52) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x000357d7) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x000357d7) popup_note2_wait_window_t

0x6301,	// (0x0002be64) wait_bar2_pane_ParamLimits

0x6301,	// (0x0002be64) wait_bar2_pane

0x6319,	// (0x0002be7c) popup_snote2_single_text_window_g1_ParamLimits

0x6319,	// (0x0002be7c) popup_snote2_single_text_window_g1

0x6341,	// (0x0002bea4) popup_snote2_single_text_window_t1_ParamLimits

0x6341,	// (0x0002bea4) popup_snote2_single_text_window_t1

0x638d,	// (0x0002bef0) popup_snote2_single_text_window_t2_ParamLimits

0x638d,	// (0x0002bef0) popup_snote2_single_text_window_t2

0x63d9,	// (0x0002bf3c) popup_snote2_single_text_window_t3_ParamLimits

0x63d9,	// (0x0002bf3c) popup_snote2_single_text_window_t3

0x641a,	// (0x0002bf7d) popup_snote2_single_text_window_t4_ParamLimits

0x641a,	// (0x0002bf7d) popup_snote2_single_text_window_t4

0x6450,	// (0x0002bfb3) popup_snote2_single_text_window_t5_ParamLimits

0x6450,	// (0x0002bfb3) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x000357e0) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x000357e0) popup_snote2_single_text_window_t

0xd782,	// (0x000332e5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd782,	// (0x000332e5) popup_snote2_single_graphic_window_g1

0x64a3,	// (0x0002c006) popup_snote2_single_graphic_window_g2_ParamLimits

0x64a3,	// (0x0002c006) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x000357eb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x000357eb) popup_snote2_single_graphic_window_g

0x64cb,	// (0x0002c02e) popup_snote2_single_graphic_window_t1_ParamLimits

0x64cb,	// (0x0002c02e) popup_snote2_single_graphic_window_t1

0x6517,	// (0x0002c07a) popup_snote2_single_graphic_window_t2_ParamLimits

0x6517,	// (0x0002c07a) popup_snote2_single_graphic_window_t2

0x63d9,	// (0x0002bf3c) popup_snote2_single_graphic_window_t3_ParamLimits

0x63d9,	// (0x0002bf3c) popup_snote2_single_graphic_window_t3

0x641a,	// (0x0002bf7d) popup_snote2_single_graphic_window_t4_ParamLimits

0x641a,	// (0x0002bf7d) popup_snote2_single_graphic_window_t4

0x6450,	// (0x0002bfb3) popup_snote2_single_graphic_window_t5_ParamLimits

0x6450,	// (0x0002bfb3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x000357f0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x000357f0) popup_snote2_single_graphic_window_t

0x4f3b,	// (0x0002aa9e) clock_nsta_pane_cp2_t1

0x4f3b,	// (0x0002aa9e) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00035617) clock_nsta_pane_cp2_t

0x9496,	// (0x0002eff9) form_field_data_wide_pane_g1_ParamLimits

0xcc75,	// (0x000327d8) form_field_data_wide_pane_g2_ParamLimits

0xcc75,	// (0x000327d8) form_field_data_wide_pane_g2

0xcc81,	// (0x000327e4) form_field_data_wide_pane_g3_ParamLimits

0xcc81,	// (0x000327e4) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x000351cf) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x000351cf) form_field_data_wide_pane_g

0xbffa,	// (0x00031b5d) grid_touch_3_pane_ParamLimits

0xbffa,	// (0x00031b5d) grid_touch_3_pane

0xd7aa,	// (0x0003330d) cell_touch_3_pane_ParamLimits

0xd7aa,	// (0x0003330d) cell_touch_3_pane

0x5491,	// (0x0002aff4) cell_touch_3_pane_g1

0x5491,	// (0x0002aff4) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x0003569c) cell_touch_3_pane_g

0xca95,	// (0x000325f8) cont_query_data_pane

0xca9d,	// (0x00032600) cont_query_data_pane_cp1

0x6591,	// (0x0002c0f4) button_value_adjust_pane_cp7

0x6599,	// (0x0002c0fc) query_popup_pane_cp3

0xd0fb,	// (0x00032c5e) bg_popup_sub_pane_cp22_ParamLimits

0xa409,	// (0x0002ff6c) navi_navi_volume_pane_cp2

0xa418,	// (0x0002ff7b) popup_side_volume_key_window_g2

0xa427,	// (0x0002ff8a) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00035265) popup_side_volume_key_window_g

0xa436,	// (0x0002ff99) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0003526c) popup_side_volume_key_window_t

0xa4fb,	// (0x0003005e) popup_side_volume_key_window_ParamLimits

0x91a5,	// (0x0002ed08) list_double_graphic_pane_g4_ParamLimits

0x91a5,	// (0x0002ed08) list_double_graphic_pane_g4

0x96f9,	// (0x0002f25c) list_single_2heading_msg_pane_ParamLimits

0x96f9,	// (0x0002f25c) list_single_2heading_msg_pane

0x974c,	// (0x0002f2af) list_single_2heading_msg_pane_g1_ParamLimits

0x974c,	// (0x0002f2af) list_single_2heading_msg_pane_g1

0x9758,	// (0x0002f2bb) list_single_2heading_msg_pane_g2_ParamLimits

0x9758,	// (0x0002f2bb) list_single_2heading_msg_pane_g2

0x976b,	// (0x0002f2ce) list_single_2heading_msg_pane_g3_ParamLimits

0x976b,	// (0x0002f2ce) list_single_2heading_msg_pane_g3

0xf33e,	// (0x00034ea1) list_single_2heading_msg_pane_g4_ParamLimits

0xf33e,	// (0x00034ea1) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x000357fb) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x000357fb) list_single_2heading_msg_pane_g

0xf356,	// (0x00034eb9) list_single_2heading_msg_pane_t1_ParamLimits

0xf356,	// (0x00034eb9) list_single_2heading_msg_pane_t1

0x9777,	// (0x0002f2da) list_single_2heading_msg_pane_t2_ParamLimits

0x9777,	// (0x0002f2da) list_single_2heading_msg_pane_t2

0x97e2,	// (0x0002f345) list_single_2heading_msg_pane_t3_ParamLimits

0x97e2,	// (0x0002f345) list_single_2heading_msg_pane_t3

0xf37e,	// (0x00034ee1) list_single_2heading_msg_pane_t4_ParamLimits

0xf37e,	// (0x00034ee1) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x00035804) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x00035804) list_single_2heading_msg_pane_t

0xc863,	// (0x000323c6) title_pane_g4_ParamLimits

0xc863,	// (0x000323c6) title_pane_g4

0x0106,	// (0x00025c69) title_pane_stacon_g3_ParamLimits

0x0106,	// (0x00025c69) title_pane_stacon_g3

0x60cb,	// (0x0002bc2e) list_single_2graphic_im_pane_g4_ParamLimits

0x60cb,	// (0x0002bc2e) list_single_2graphic_im_pane_g4

0xba2a,	// (0x0003158d) popup_side_volume_key_window_cp

0x4799,	// (0x0002a2fc) main_idle_act2_pane_t1

0x196d,	// (0x000274d0) toolbar_button_pane_g10

0xa104,	// (0x0002fc67) popup_toolbar_window_cp1

0x4f2c,	// (0x0002aa8f) clock_nsta_pane_cp_t1

0x4f2c,	// (0x0002aa8f) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00035612) clock_nsta_pane_cp_t

0xa409,	// (0x0002ff6c) navi_navi_volume_pane_cp2_ParamLimits

0x04bb,	// (0x0002601e) popup_side_volume_key_window_g1_ParamLimits

0xa418,	// (0x0002ff7b) popup_side_volume_key_window_g2_ParamLimits

0xa427,	// (0x0002ff8a) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00035265) popup_side_volume_key_window_g_ParamLimits

0x1e0f,	// (0x00027972) fep_hwr_aid_pane

0xd2b6,	// (0x00032e19) bg_fep_hwr_top_pane_g4_ParamLimits

0x54ed,	// (0x0002b050) fep_hwr_top_pane_g1_ParamLimits

0x54ff,	// (0x0002b062) fep_hwr_top_pane_g2_ParamLimits

0x1ec8,	// (0x00027a2b) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00035667) fep_hwr_top_pane_g_ParamLimits

0x1edd,	// (0x00027a40) fep_hwr_top_text_pane_ParamLimits

0x3d4e,	// (0x000298b1) aid_touch_tab_arrow_arrow_2

0x3d57,	// (0x000298ba) aid_touch_tab_arrow_left_2

0x1e23,	// (0x00027986) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e5a,	// (0x000279bd) fep_hwr_prediction_pane

0x5658,	// (0x0002b1bb) fep_vkb_prediction_pane

0xd3e2,	// (0x00032f45) fep_vkb_side_pane_g3_ParamLimits

0xd3e2,	// (0x00032f45) fep_vkb_side_pane_g3

0x5701,	// (0x0002b264) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ba2,	// (0x0002b705) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5baf,	// (0x0002b712) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00035711) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x65be,	// (0x0002c121) fep_hwr_prediction_pane_g1

0x216a,	// (0x00027ccd) fep_hwr_prediction_pane_g2

0x2172,	// (0x00027cd5) fep_hwr_prediction_pane_g3

0x217a,	// (0x00027cdd) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x0003580d) fep_hwr_prediction_pane_g

0x65be,	// (0x0002c121) fep_vkb_prediction_pane_g1

0x65c8,	// (0x0002c12b) fep_vkb_prediction_pane_g2

0x65d0,	// (0x0002c133) fep_vkb_prediction_pane_g3

0x65d8,	// (0x0002c13b) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00035816) fep_vkb_prediction_pane_g

0xbbbb,	// (0x0003171e) slider_set_pane_g3

0xbbcf,	// (0x00031732) slider_set_pane_g4

0xbbe7,	// (0x0003174a) slider_set_pane_g5

0xbbbb,	// (0x0003171e) slider_set_pane_g6

0xbbfd,	// (0x00031760) slider_set_pane_g7

0x43da,	// (0x00029f3d) slider_form_pane_g3

0x43e3,	// (0x00029f46) slider_form_pane_g4

0x43eb,	// (0x00029f4e) slider_form_pane_g5

0x43da,	// (0x00029f3d) slider_form_pane_g6

0xbd84,	// (0x000318e7) slider_form_pane_g7

0x4a44,	// (0x0002a5a7) slider_set_pane_vc_g3

0x4a4d,	// (0x0002a5b0) slider_set_pane_vc_g4

0x4a56,	// (0x0002a5b9) slider_set_pane_vc_g5

0x4a44,	// (0x0002a5a7) slider_set_pane_vc_g6

0x4a5f,	// (0x0002a5c2) slider_set_pane_vc_g7

0x4c11,	// (0x0002a774) slider_form_pane_vc_g1

0x4c1a,	// (0x0002a77d) slider_form_pane_vc_g2

0x4c23,	// (0x0002a786) slider_form_pane_vc_g3

0x4c11,	// (0x0002a774) slider_form_pane_vc_g4

0x4c2c,	// (0x0002a78f) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x000355e4) slider_form_pane_vc_g

0xc845,	// (0x000323a8) main_idle_act3_pane

0x65e0,	// (0x0002c143) ai3_links_pane

0xd7f3,	// (0x00033356) popup_ai3_data_window_ParamLimits

0xd7f3,	// (0x00033356) popup_ai3_data_window

0xc845,	// (0x000323a8) grid_ai3_links_pane

0xd80b,	// (0x0003336e) cell_ai3_links_pane_ParamLimits

0xd80b,	// (0x0003336e) cell_ai3_links_pane

0x6619,	// (0x0002c17c) bg_popup_sub_pane_cp11

0x6626,	// (0x0002c189) cell_ai3_links_pane_g1

0xc845,	// (0x000323a8) bg_popup_sub_pane_cp12

0x664b,	// (0x0002c1ae) heading_ai3_data_pane

0x6653,	// (0x0002c1b6) list_ai3_gene_pane

0x665f,	// (0x0002c1c2) popup_ai3_data_window_g1

0x6667,	// (0x0002c1ca) heading_ai3_data_pane_g1

0x666f,	// (0x0002c1d2) heading_ai3_data_pane_t1

0xd825,	// (0x00033388) list_double_ai3_gene_pane_ParamLimits

0xd825,	// (0x00033388) list_double_ai3_gene_pane

0x668a,	// (0x0002c1ed) list_single_ai3_gene_pane_ParamLimits

0x668a,	// (0x0002c1ed) list_single_ai3_gene_pane

0x5456,	// (0x0002afb9) list_highlight_pane_cp7_ParamLimits

0x5456,	// (0x0002afb9) list_highlight_pane_cp7

0x6697,	// (0x0002c1fa) list_single_a13_gene_pane_t1_ParamLimits

0x6697,	// (0x0002c1fa) list_single_a13_gene_pane_t1

0x66ae,	// (0x0002c211) list_single_ai3_gene_pane_g1

0x66b7,	// (0x0002c21a) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x0003581f) list_single_ai3_gene_pane_g

0x66bf,	// (0x0002c222) list_double_ai3_gene_pane_g1_ParamLimits

0x66bf,	// (0x0002c222) list_double_ai3_gene_pane_g1

0xd832,	// (0x00033395) list_double_ai3_gene_pane_t1_ParamLimits

0xd832,	// (0x00033395) list_double_ai3_gene_pane_t1

0x66e7,	// (0x0002c24a) list_double_ai3_gene_pane_t2_ParamLimits

0x66e7,	// (0x0002c24a) list_double_ai3_gene_pane_t2

0x66fc,	// (0x0002c25f) list_double_ai3_gene_pane_t3_ParamLimits

0x66fc,	// (0x0002c25f) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x00035824) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x00035824) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf334,	// (0x00034e97) aid_size_min_col_2

0xd7dd,	// (0x00033340) aid_size_min_msg_ParamLimits

0xd7dd,	// (0x00033340) aid_size_min_msg

0xd3f6,	// (0x00032f59) fep_vkb_top_text_pane_g2_ParamLimits

0xd3f6,	// (0x00032f59) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00035697) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00035697) fep_vkb_top_text_pane_g

0xc845,	// (0x000323a8) main_hc_apps_shell_pane

0x6719,	// (0x0002c27c) grid_hc_apps_pane_ParamLimits

0x6719,	// (0x0002c27c) grid_hc_apps_pane

0x6728,	// (0x0002c28b) list_hc_apps_pane

0x6730,	// (0x0002c293) scroll_pane_cp37_ParamLimits

0x6730,	// (0x0002c293) scroll_pane_cp37

0xd84e,	// (0x000333b1) cell_hc_apps_pane_ParamLimits

0xd84e,	// (0x000333b1) cell_hc_apps_pane

0xd90c,	// (0x0003346f) cell_hc_apps_pane_g1_ParamLimits

0xd90c,	// (0x0003346f) cell_hc_apps_pane_g1

0x681b,	// (0x0002c37e) cell_hc_apps_pane_g2_ParamLimits

0x681b,	// (0x0002c37e) cell_hc_apps_pane_g2

0x6837,	// (0x0002c39a) cell_hc_apps_pane_g3_ParamLimits

0x6837,	// (0x0002c39a) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x0003582b) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x0003582b) cell_hc_apps_pane_g

0xd939,	// (0x0003349c) cell_hc_apps_pane_t1_ParamLimits

0xd939,	// (0x0003349c) cell_hc_apps_pane_t1

0xc9df,	// (0x00032542) grid_highlight_pane_cp10_ParamLimits

0xc9df,	// (0x00032542) grid_highlight_pane_cp10

0xd977,	// (0x000334da) list_single_hc_apps_pane_ParamLimits

0xd977,	// (0x000334da) list_single_hc_apps_pane

0xd9a7,	// (0x0003350a) list_single_hc_apps_pane_g1

0x9850,	// (0x0002f3b3) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x00035832) list_single_hc_apps_pane_g

0x9869,	// (0x0002f3cc) list_single_hc_apps_pane_g2_copy1

0x9885,	// (0x0002f3e8) list_single_hc_apps_pane_t1

0xc8b5,	// (0x00032418) bg_set_opt_pane_cp_ParamLimits

0x9bf4,	// (0x0002f757) setting_slider_pane_t1_ParamLimits

0x9c0d,	// (0x0002f770) setting_slider_pane_t2_ParamLimits

0x9c27,	// (0x0002f78a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000350c1) setting_slider_pane_t_ParamLimits

0x9c3f,	// (0x0002f7a2) slider_set_pane_ParamLimits

0x0ede,	// (0x00026a41) control_pane_g5_ParamLimits

0x0ede,	// (0x00026a41) control_pane_g5

0xbbae,	// (0x00031711) slider_set_pane_g1_ParamLimits

0x1c3b,	// (0x0002779e) slider_set_pane_g2_ParamLimits

0xbbbb,	// (0x0003171e) slider_set_pane_g3_ParamLimits

0xbbcf,	// (0x00031732) slider_set_pane_g4_ParamLimits

0xbbe7,	// (0x0003174a) slider_set_pane_g5_ParamLimits

0xbbbb,	// (0x0003171e) slider_set_pane_g6_ParamLimits

0xbbfd,	// (0x00031760) slider_set_pane_g7_ParamLimits

0xf949,	// (0x000354ac) slider_set_pane_g_ParamLimits

0x0982,	// (0x000264e5) navi_icon_text_pane_ParamLimits

0xb03a,	// (0x00030b9d) aid_fill_nsta_2_ParamLimits

0xb071,	// (0x00030bd4) aid_touch_tab_arrow_left_ParamLimits

0xb087,	// (0x00030bea) aid_touch_tab_arrow_right_ParamLimits

0xb122,	// (0x00030c85) clock_nsta_pane_ParamLimits

0x3d30,	// (0x00029893) navi_icon_pane_g1_ParamLimits

0x3d3c,	// (0x0002989f) navi_text_pane_t1_ParamLimits

0x503c,	// (0x0002ab9f) navi_icon_text_pane_g1_ParamLimits

0x5048,	// (0x0002abab) navi_icon_text_pane_t1_ParamLimits

0xd9a7,	// (0x0003350a) list_single_hc_apps_pane_g1_ParamLimits

0x9850,	// (0x0002f3b3) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x00035832) list_single_hc_apps_pane_g_ParamLimits

0x9869,	// (0x0002f3cc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9885,	// (0x0002f3e8) list_single_hc_apps_pane_t1_ParamLimits

0x9a25,	// (0x0002f588) popup_toolbar2_fixed_window_ParamLimits

0x9a25,	// (0x0002f588) popup_toolbar2_fixed_window

0xaf4a,	// (0x00030aad) popup_toolbar2_float_window

0xc845,	// (0x000323a8) bg_popup_sub_pane_cp27

0x6915,	// (0x0002c478) grid_toolbar2_float_pane

0xc845,	// (0x000323a8) bg_popup_sub_pane_cp26

0x6915,	// (0x0002c478) grid_toolbar2_fixed_pane

0xd9c0,	// (0x00033523) cell_toolbar2_fixed_pane_ParamLimits

0xd9c0,	// (0x00033523) cell_toolbar2_fixed_pane

0xd9da,	// (0x0003353d) cell_toolbar2_fixed_pane_g1

0x2e4a,	// (0x000289ad) toolbar2_fixed_button_pane

0x2eca,	// (0x00028a2d) toolbar2_fixed_button_pane_g1

0x2ed2,	// (0x00028a35) toolbar2_fixed_button_pane_g2

0x2eda,	// (0x00028a3d) toolbar2_fixed_button_pane_g3

0x2ee2,	// (0x00028a45) toolbar2_fixed_button_pane_g4

0x2eea,	// (0x00028a4d) toolbar2_fixed_button_pane_g5

0x2ef2,	// (0x00028a55) toolbar2_fixed_button_pane_g6

0x2efa,	// (0x00028a5d) toolbar2_fixed_button_pane_g7

0x2f02,	// (0x00028a65) toolbar2_fixed_button_pane_g8

0x2f0a,	// (0x00028a6d) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x000353ae) toolbar2_fixed_button_pane_g

0x6936,	// (0x0002c499) cell_toolbar2_float_pane_ParamLimits

0x6936,	// (0x0002c499) cell_toolbar2_float_pane

0x6947,	// (0x0002c4aa) cell_toolbar2_float_pane_g1

0x2e4a,	// (0x000289ad) toolbar2_fixed_button_pane_cp

0xd2de,	// (0x00032e41) fep_vkb_accented_list_pane_ParamLimits

0xd2de,	// (0x00032e41) fep_vkb_accented_list_pane

0x202b,	// (0x00027b8e) bg_popup_fep_shadow_pane_g9

0x0b02,	// (0x00026665) bg_popup_fep_shadow_pane_cp3

0xcd6d,	// (0x000328d0) list_accented_list_pane

0x6950,	// (0x0002c4b3) list_single_accented_list_pane_ParamLimits

0x6950,	// (0x0002c4b3) list_single_accented_list_pane

0x0b02,	// (0x00026665) list_highlight_pane_cp10

0x6961,	// (0x0002c4c4) list_single_accented_list_pane_t1

0xae74,	// (0x000309d7) popup_slider_window_ParamLimits

0xae74,	// (0x000309d7) popup_slider_window

0x65a1,	// (0x0002c104) aid_indentation_list_msg

0xdacf,	// (0x00033632) bg_popup_window_pane_cp19

0x6a81,	// (0x0002c5e4) popup_slider_window_g1

0x6a9d,	// (0x0002c600) popup_slider_window_g2

0x6ab9,	// (0x0002c61c) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x00035837) popup_slider_window_g

0x6b15,	// (0x0002c678) popup_slider_window_t1

0x6b89,	// (0x0002c6ec) small_volume_slider_vertical_pane

0x5491,	// (0x0002aff4) small_volume_slider_vertical_pane_g1

0x5491,	// (0x0002aff4) small_volume_slider_vertical_pane_g2

0x6ba5,	// (0x0002c708) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x00035849) small_volume_slider_vertical_pane_g

0x9973,	// (0x0002f4d6) area_side_right_pane_ParamLimits

0x9973,	// (0x0002f4d6) area_side_right_pane

0xc1d5,	// (0x00031d38) aid_size_side_button_ParamLimits

0xc1d5,	// (0x00031d38) aid_size_side_button

0xc1ee,	// (0x00031d51) grid_sctrl_middle_pane_ParamLimits

0xc1ee,	// (0x00031d51) grid_sctrl_middle_pane

0x21b5,	// (0x00027d18) sctrl_sk_bottom_pane

0x21c6,	// (0x00027d29) sctrl_sk_top_pane

0x21d8,	// (0x00027d3b) aid_touch_sctrl_top

0xc9df,	// (0x00032542) bg_sctrl_sk_pane_ParamLimits

0xc9df,	// (0x00032542) bg_sctrl_sk_pane

0x21e5,	// (0x00027d48) sctrl_sk_top_pane_g1

0x21f2,	// (0x00027d55) sctrl_sk_top_pane_t1

0x21d8,	// (0x00027d3b) aid_touch_sctrl_bottom

0xc9df,	// (0x00032542) bg_sctrl_sk_pane_cp_ParamLimits

0xc9df,	// (0x00032542) bg_sctrl_sk_pane_cp

0x220d,	// (0x00027d70) sctrl_sk_bottom_pane_g1

0x21f2,	// (0x00027d55) sctrl_sk_bottom_pane_t1

0xc208,	// (0x00031d6b) cell_sctrl_middle_pane_ParamLimits

0xc208,	// (0x00031d6b) cell_sctrl_middle_pane

0xc219,	// (0x00031d7c) aid_touch_sctrl_middle_ParamLimits

0xc219,	// (0x00031d7c) aid_touch_sctrl_middle

0xc226,	// (0x00031d89) bg_sctrl_middle_pane_ParamLimits

0xc226,	// (0x00031d89) bg_sctrl_middle_pane

0x6c2d,	// (0x0002c790) cell_sctrl_middle_pane_g1_ParamLimits

0x6c2d,	// (0x0002c790) cell_sctrl_middle_pane_g1

0xc234,	// (0x00031d97) cell_sctrl_middle_pane_g2_ParamLimits

0xc234,	// (0x00031d97) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x00035855) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x00035855) cell_sctrl_middle_pane_g

0x2eca,	// (0x00028a2d) bg_sctrl_middle_pane_g1

0x2ed2,	// (0x00028a35) bg_sctrl_middle_pane_g2

0x2eda,	// (0x00028a3d) bg_sctrl_middle_pane_g3

0x2ee2,	// (0x00028a45) bg_sctrl_middle_pane_g4

0x2eea,	// (0x00028a4d) bg_sctrl_middle_pane_g5

0x2ef2,	// (0x00028a55) bg_sctrl_middle_pane_g6

0x2efa,	// (0x00028a5d) bg_sctrl_middle_pane_g7

0x2f02,	// (0x00028a65) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x0003585a) bg_sctrl_middle_pane_g

0x2f0a,	// (0x00028a6d) bg_sctrl_middle_pane_g8_copy1

0x2eca,	// (0x00028a2d) bg_sctrl_sk_pane_g1

0x2ed2,	// (0x00028a35) bg_sctrl_sk_pane_g2

0x2eda,	// (0x00028a3d) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x000353ae) bg_sctrl_sk_pane_g

0xcba9,	// (0x0003270c) aid_size_touch_scroll_bar

0x2ee2,	// (0x00028a45) bg_sctrl_sk_pane_g4

0x2eea,	// (0x00028a4d) bg_sctrl_sk_pane_g5

0x2ef2,	// (0x00028a55) bg_sctrl_sk_pane_g6

0x2efa,	// (0x00028a5d) bg_sctrl_sk_pane_g7

0x2f02,	// (0x00028a65) bg_sctrl_sk_pane_g8

0x2f0a,	// (0x00028a6d) bg_sctrl_sk_pane_g9

0x1109,	// (0x00026c6c) popup_fep_china_hwr2_fs_candidate_window

0xa914,	// (0x00030477) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa914,	// (0x00030477) popup_fep_china_hwr2_fs_control_window

0x5701,	// (0x0002b264) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00035850) sctrl_sk_top_pane_g

0xdb87,	// (0x000336ea) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb87,	// (0x000336ea) aid_fep_china_hwr2_fs_cell

0xdb9b,	// (0x000336fe) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb9b,	// (0x000336fe) bg_popup_fep_shadow_pane_cp4

0xdbb2,	// (0x00033715) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbb2,	// (0x00033715) bg_popup_fep_shadow_pane_cp5

0xdbc4,	// (0x00033727) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdbc4,	// (0x00033727) popup_fep_china_hwr2_fs_control_bar_grid

0xdbd8,	// (0x0003373b) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c01,	// (0x0002c764) aid_fep_china_hwr2_fs_candi_cell

0xc845,	// (0x000323a8) bg_popup_fep_shadow_pane_cp6

0x6c0b,	// (0x0002c76e) popup_fep_china_hwr2_fs_candidate_grid

0xdbe0,	// (0x00033743) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdbe0,	// (0x00033743) cell_fep_china_hwr2_fs_funtion_grid

0x5491,	// (0x0002aff4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c2d,	// (0x0002c790) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c2d,	// (0x0002c790) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c3b,	// (0x0002c79e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c3b,	// (0x0002c79e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x0003586b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x0003586b) cell_fep_china_hwr2_fs_funtion_grid_g

0xdbf8,	// (0x0003375b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdbf8,	// (0x0003375b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc0d,	// (0x00033770) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc0d,	// (0x00033770) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00035870) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00035870) cell_fep_china_hwr2_fs_funtion_grid_t

0x6c82,	// (0x0002c7e5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6c8a,	// (0x0002c7ed) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6c92,	// (0x0002c7f5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00035875) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6c9a,	// (0x0002c7fd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6c9a,	// (0x0002c7fd) cell_fep_china_hwr2_fs_candidate_grid

0x6cb3,	// (0x0002c816) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6cbb,	// (0x0002c81e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5491,	// (0x0002aff4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5491,	// (0x0002aff4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x0003569c) cell_fep_china_hwr2_fs_candidate_grid_g

0x6cc3,	// (0x0002c826) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1708,	// (0x0002726b) clock_nsta_pane_cp_24_ParamLimits

0x1708,	// (0x0002726b) clock_nsta_pane_cp_24

0x1786,	// (0x000272e9) indicator_nsta_pane_cp_24_ParamLimits

0x1786,	// (0x000272e9) indicator_nsta_pane_cp_24

0x3bac,	// (0x0002970f) heading_pane_g1

0x0001,

0xf8b0,	// (0x00035413) heading_pane_g

0x45e2,	// (0x0002a145) grid_sct_catagory_button_pane

0x4612,	// (0x0002a175) scroll_pane_cp5_ParamLimits

0x508a,	// (0x0002abed) button_value_adjust_pane_cp5_ParamLimits

0x508a,	// (0x0002abed) button_value_adjust_pane_cp5

0x5169,	// (0x0002accc) form2_midp_time_pane_ParamLimits

0x6cd1,	// (0x0002c834) cell_sct_catagory_button_pane_ParamLimits

0x6cd1,	// (0x0002c834) cell_sct_catagory_button_pane

0x5456,	// (0x0002afb9) bg_button_pane_cp01_ParamLimits

0x5456,	// (0x0002afb9) bg_button_pane_cp01

0x5491,	// (0x0002aff4) cell_sct_catagory_button_pane_g1

0xaeed,	// (0x00030a50) popup_tb_extension_window

0xdc29,	// (0x0003378c) aid_size_cell_ext_ParamLimits

0xdc29,	// (0x0003378c) aid_size_cell_ext

0xcb5b,	// (0x000326be) bg_tb_trans_pane_cp1_ParamLimits

0xcb5b,	// (0x000326be) bg_tb_trans_pane_cp1

0xdc4f,	// (0x000337b2) grid_tb_ext_pane_ParamLimits

0xdc4f,	// (0x000337b2) grid_tb_ext_pane

0xdc8e,	// (0x000337f1) cell_tb_ext_pane_ParamLimits

0xdc8e,	// (0x000337f1) cell_tb_ext_pane

0xdcb6,	// (0x00033819) cell_tb_ext_pane_g1_ParamLimits

0xdcb6,	// (0x00033819) cell_tb_ext_pane_g1

0x6d67,	// (0x0002c8ca) cell_tb_ext_pane_t1

0xc9df,	// (0x00032542) list_highlight_pane_cp11_ParamLimits

0xc9df,	// (0x00032542) list_highlight_pane_cp11

0x9a3a,	// (0x0002f59d) popup_uni_indicator_window_ParamLimits

0x9a3a,	// (0x0002f59d) popup_uni_indicator_window

0xcc67,	// (0x000327ca) bg_popup_sub_pane_cp14

0xdcd3,	// (0x00033836) list_uniindi_pane

0xdcdf,	// (0x00033842) uniindi_top_pane

0xc9df,	// (0x00032542) bg_uniindi_top_pane

0xdcfe,	// (0x00033861) uniindi_top_pane_g1

0xdd14,	// (0x00033877) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x0003587c) uniindi_top_pane_g

0xdd31,	// (0x00033894) uniindi_top_pane_t1

0x6e18,	// (0x0002c97b) list_single_uniindi_pane_ParamLimits

0x6e18,	// (0x0002c97b) list_single_uniindi_pane

0x5491,	// (0x0002aff4) bg_uniindi_top_pane_g1

0x6e2a,	// (0x0002c98d) list_single_uniindi_pane_g1

0x6e3d,	// (0x0002c9a0) list_single_uniindi_pane_t1

0xc845,	// (0x000323a8) control_bg_pane

0x6e62,	// (0x0002c9c5) bg_sctrl_sk_pane_cp1

0x6e6b,	// (0x0002c9ce) bg_sctrl_sk_pane_cp2

0x6e74,	// (0x0002c9d7) control_bg_pane_g1

0x6e7d,	// (0x0002c9e0) control_bg_pane_g2

0x0001,

0xfd22,	// (0x00035885) control_bg_pane_g

0x4ee1,	// (0x0002aa44) cell_indicator_nsta_pane_g1_ParamLimits

0xc027,	// (0x00031b8a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00035600) cell_indicator_nsta_pane_g_ParamLimits

0xf124,	// (0x00034c87) form2_midp_time_pane_t1_ParamLimits

0x1e01,	// (0x00027964) main_idle_act4_pane_ParamLimits

0x1e01,	// (0x00027964) main_idle_act4_pane

0xaeed,	// (0x00030a50) popup_tb_extension_window_ParamLimits

0xdc74,	// (0x000337d7) tb_ext_find_pane_ParamLimits

0xdc74,	// (0x000337d7) tb_ext_find_pane

0x6e86,	// (0x0002c9e9) ai_gene_pane_1_cp1

0x0c4d,	// (0x000267b0) ai_gene_pane_2_cp1

0xdd5b,	// (0x000338be) list_single_idle_plugin_calendar_pane

0x6e97,	// (0x0002c9fa) list_single_idle_plugin_notification_pane

0x6ea0,	// (0x0002ca03) list_single_idle_plugin_player_pane

0xdd64,	// (0x000338c7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd64,	// (0x000338c7) list_single_idle_plugin_shortcut_pane

0xdd8c,	// (0x000338ef) main_idle_act4_pane_t1

0xdda3,	// (0x00033906) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x0003588a) main_idle_act4_pane_t

0xddba,	// (0x0003391d) middle_sk_idle_act4_pane_ParamLimits

0xddba,	// (0x0003391d) middle_sk_idle_act4_pane

0xddd6,	// (0x00033939) popup_clock_digital_analogue_window_cp2

0xde02,	// (0x00033965) shortcut_wheel_idle_act4_pane_ParamLimits

0xde02,	// (0x00033965) shortcut_wheel_idle_act4_pane

0x5491,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g1

0x5491,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g2

0x5491,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g3

0x5491,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g4

0x5491,	// (0x0002aff4) shortcut_wheel_idle_act4_pane_g5

0x6f33,	// (0x0002ca96) shortcut_wheel_idle_act4_pane_g6

0x6f3b,	// (0x0002ca9e) shortcut_wheel_idle_act4_pane_g7

0x6f43,	// (0x0002caa6) shortcut_wheel_idle_act4_pane_g8

0x6f4b,	// (0x0002caae) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x0003588f) shortcut_wheel_idle_act4_pane_g

0xd2b6,	// (0x00032e19) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2b6,	// (0x00032e19) middle_sk_idle_act4_pane_g1

0xde7f,	// (0x000339e2) middle_sk_idle_act4_pane_g2_ParamLimits

0xde7f,	// (0x000339e2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x000358b2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x000358b2) middle_sk_idle_act4_pane_g

0xde97,	// (0x000339fa) middle_sk_idle_act4_pane_t1_ParamLimits

0xde97,	// (0x000339fa) middle_sk_idle_act4_pane_t1

0xdec6,	// (0x00033a29) grid_ai_shortcut_pane_ParamLimits

0xdec6,	// (0x00033a29) grid_ai_shortcut_pane

0xdee3,	// (0x00033a46) list_highlight_pane_cp16_ParamLimits

0xdee3,	// (0x00033a46) list_highlight_pane_cp16

0xdef0,	// (0x00033a53) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdef0,	// (0x00033a53) list_single_idle_plugin_shortcut_pane_g1

0xdefc,	// (0x00033a5f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdefc,	// (0x00033a5f) list_single_idle_plugin_shortcut_pane_g2

0xdf18,	// (0x00033a7b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdf18,	// (0x00033a7b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x000358b7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x000358b7) list_single_idle_plugin_shortcut_pane_g

0xdf2d,	// (0x00033a90) cell_ai_shortcut_pane_ParamLimits

0xdf2d,	// (0x00033a90) cell_ai_shortcut_pane

0xdf43,	// (0x00033aa6) cell_ai_shortcut_pane_g1_ParamLimits

0xdf43,	// (0x00033aa6) cell_ai_shortcut_pane_g1

0x6e86,	// (0x0002c9e9) ai_gene_pane_1_cp2

0x707b,	// (0x0002cbde) ai_gene_pane_2_cp2

0x7083,	// (0x0002cbe6) list_highlight_pane_cp15

0xdf65,	// (0x00033ac8) list_single_idle_plugin_calendar_pane_g1

0x7083,	// (0x0002cbe6) list_highlight_pane_cp17

0x7094,	// (0x0002cbf7) list_single_idle_plugin_calendar_pane_g1_copy1

0x709c,	// (0x0002cbff) list_single_idle_plugin_player_pane_g1

0x483b,	// (0x0002a39e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x000358be) list_single_idle_plugin_player_pane_g

0x70a4,	// (0x0002cc07) list_single_idle_plugin_player_pane_t1

0x70b2,	// (0x0002cc15) list_single_idle_plugin_player_pane_t2

0x70c0,	// (0x0002cc23) list_single_idle_plugin_player_pane_t3

0x70ce,	// (0x0002cc31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x000358c3) list_single_idle_plugin_player_pane_t

0x70dc,	// (0x0002cc3f) wait_bar_pane_cp15

0x70e4,	// (0x0002cc47) grid_ai_notification_pane

0x483b,	// (0x0002a39e) list_single_idle_plugin_notification_pane_g1

0xdf6d,	// (0x00033ad0) cell_ai_notification_pane_ParamLimits

0xdf6d,	// (0x00033ad0) cell_ai_notification_pane

0x70fa,	// (0x0002cc5d) cell_ai_notification_pane_g1

0x7102,	// (0x0002cc65) cell_ai_notification_pane_t1

0xdf7a,	// (0x00033add) tb_ext_find_button_pane

0xdf82,	// (0x00033ae5) tb_ext_find_pane_g1

0xdf8a,	// (0x00033aed) tb_ext_find_pane_t1

0xd09a,	// (0x00032bfd) tb_ext_find_button_pane_g1

0xdf98,	// (0x00033afb) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x000358cc) tb_ext_find_button_pane_g

0xdd8c,	// (0x000338ef) main_idle_act4_pane_t1_ParamLimits

0xdda3,	// (0x00033906) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x0003588a) main_idle_act4_pane_t_ParamLimits

0xddd6,	// (0x00033939) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddee,	// (0x00033951) sat_plugin_idle_act4_pane_ParamLimits

0xddee,	// (0x00033951) sat_plugin_idle_act4_pane

0xdfa1,	// (0x00033b04) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfa1,	// (0x00033b04) sat_plugin_idle_act4_pane_t1

0xdfb9,	// (0x00033b1c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfb9,	// (0x00033b1c) sat_plugin_idle_act4_pane_t2

0xdfd1,	// (0x00033b34) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfd1,	// (0x00033b34) sat_plugin_idle_act4_pane_t3

0xdfe9,	// (0x00033b4c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfe9,	// (0x00033b4c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x000358d1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x000358d1) sat_plugin_idle_act4_pane_t

0x99b5,	// (0x0002f518) popup_battery_window_ParamLimits

0x99b5,	// (0x0002f518) popup_battery_window

0xc9df,	// (0x00032542) bg_popup_sub_pane_cp25_ParamLimits

0xc9df,	// (0x00032542) bg_popup_sub_pane_cp25

0x7183,	// (0x0002cce6) popup_battery_window_g1_ParamLimits

0x7183,	// (0x0002cce6) popup_battery_window_g1

0x718f,	// (0x0002ccf2) popup_battery_window_t1_ParamLimits

0x718f,	// (0x0002ccf2) popup_battery_window_t1

0x71a1,	// (0x0002cd04) popup_battery_window_t2_ParamLimits

0x71a1,	// (0x0002cd04) popup_battery_window_t2

0x0001,

0xfd77,	// (0x000358da) popup_battery_window_t_ParamLimits

0xfd77,	// (0x000358da) popup_battery_window_t

0xa55a,	// (0x000300bd) midp_canvas_pane_ParamLimits

0xa5cc,	// (0x0003012f) midp_keypad_pane_ParamLimits

0xa5cc,	// (0x0003012f) midp_keypad_pane

0x1067,	// (0x00026bca) main_midp_pane_ParamLimits

0xc034,	// (0x00031b97) signal_pane_g2_cp_ParamLimits

0xe001,	// (0x00033b64) aid_size_cell_midp_keypad_ParamLimits

0xe001,	// (0x00033b64) aid_size_cell_midp_keypad

0xe01f,	// (0x00033b82) midp_keyp_game_grid_pane_ParamLimits

0xe01f,	// (0x00033b82) midp_keyp_game_grid_pane

0xe046,	// (0x00033ba9) midp_keyp_rocker_pane_ParamLimits

0xe046,	// (0x00033ba9) midp_keyp_rocker_pane

0xe097,	// (0x00033bfa) midp_keyp_sk_left_pane_ParamLimits

0xe097,	// (0x00033bfa) midp_keyp_sk_left_pane

0xe0eb,	// (0x00033c4e) midp_keyp_sk_right_pane_ParamLimits

0xe0eb,	// (0x00033c4e) midp_keyp_sk_right_pane

0xc845,	// (0x000323a8) bg_button_pane_cp03

0xe13f,	// (0x00033ca2) midp_keyp_sk_left_pane_g1

0xc845,	// (0x000323a8) bg_button_pane_cp04

0xe13f,	// (0x00033ca2) midp_keyp_sk_right_pane_g1

0x5491,	// (0x0002aff4) midp_keyp_rocker_pane_g1

0xe148,	// (0x00033cab) keyp_game_cell_pane_ParamLimits

0xe148,	// (0x00033cab) keyp_game_cell_pane

0xc845,	// (0x000323a8) bg_button_pane_cp02

0xe16c,	// (0x00033ccf) keyp_game_cell_pane_g1

0x99d5,	// (0x0002f538) popup_fep_vkb2_window_ParamLimits

0x99d5,	// (0x0002f538) popup_fep_vkb2_window

0xc240,	// (0x00031da3) aid_size_cell_vkb2_ParamLimits

0xc240,	// (0x00031da3) aid_size_cell_vkb2

0xc27e,	// (0x00031de1) popup_fep_vkb2_window_g1_ParamLimits

0xc27e,	// (0x00031de1) popup_fep_vkb2_window_g1

0xc2ce,	// (0x00031e31) vkb2_area_bottom_pane_ParamLimits

0xc2ce,	// (0x00031e31) vkb2_area_bottom_pane

0xc322,	// (0x00031e85) vkb2_area_keypad_pane_ParamLimits

0xc322,	// (0x00031e85) vkb2_area_keypad_pane

0xc36a,	// (0x00031ecd) vkb2_area_top_pane_ParamLimits

0xc36a,	// (0x00031ecd) vkb2_area_top_pane

0xc3f0,	// (0x00031f53) vkb2_top_entry_pane_ParamLimits

0xc3f0,	// (0x00031f53) vkb2_top_entry_pane

0xc41d,	// (0x00031f80) vkb2_top_grid_left_pane_ParamLimits

0xc41d,	// (0x00031f80) vkb2_top_grid_left_pane

0xc43d,	// (0x00031fa0) vkb2_top_grid_right_pane_ParamLimits

0xc43d,	// (0x00031fa0) vkb2_top_grid_right_pane

0x246b,	// (0x00027fce) vkb2_cell_keypad_pane_ParamLimits

0x246b,	// (0x00027fce) vkb2_cell_keypad_pane

0xc483,	// (0x00031fe6) vkb2_area_bottom_grid_pane_ParamLimits

0xc483,	// (0x00031fe6) vkb2_area_bottom_grid_pane

0xc4ad,	// (0x00032010) vkb2_area_bottom_pane_g1_ParamLimits

0xc4ad,	// (0x00032010) vkb2_area_bottom_pane_g1

0xc4d3,	// (0x00032036) vkb2_area_bottom_pane_g2_ParamLimits

0xc4d3,	// (0x00032036) vkb2_area_bottom_pane_g2

0xc504,	// (0x00032067) vkb2_area_bottom_pane_g3_ParamLimits

0xc504,	// (0x00032067) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x000358df) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x000358df) vkb2_area_bottom_pane_g

0x2615,	// (0x00028178) vkb2_top_cell_left_pane_ParamLimits

0x2615,	// (0x00028178) vkb2_top_cell_left_pane

0xe175,	// (0x00033cd8) vkb2_top_entry_pane_g1_ParamLimits

0xe175,	// (0x00033cd8) vkb2_top_entry_pane_g1

0xe183,	// (0x00033ce6) vkb2_top_entry_pane_t1_ParamLimits

0xe183,	// (0x00033ce6) vkb2_top_entry_pane_t1

0x7352,	// (0x0002ceb5) vkb2_top_entry_pane_t2_ParamLimits

0x7352,	// (0x0002ceb5) vkb2_top_entry_pane_t2

0x7384,	// (0x0002cee7) vkb2_top_entry_pane_t3_ParamLimits

0x7384,	// (0x0002cee7) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x000358e6) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x000358e6) vkb2_top_entry_pane_t

0xc56e,	// (0x000320d1) vkb2_top_grid_right_pane_g1_ParamLimits

0xc56e,	// (0x000320d1) vkb2_top_grid_right_pane_g1

0x2678,	// (0x000281db) vkb2_top_grid_right_pane_g2_ParamLimits

0x2678,	// (0x000281db) vkb2_top_grid_right_pane_g2

0x2690,	// (0x000281f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x2690,	// (0x000281f3) vkb2_top_grid_right_pane_g3

0xc584,	// (0x000320e7) vkb2_top_grid_right_pane_g4_ParamLimits

0xc584,	// (0x000320e7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x000358ed) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x000358ed) vkb2_top_grid_right_pane_g

0x26be,	// (0x00028221) vkb2_top_cell_left_pane_g1

0x26d5,	// (0x00028238) vkb2_cell_keypad_pane_g1_ParamLimits

0x26d5,	// (0x00028238) vkb2_cell_keypad_pane_g1

0x73a8,	// (0x0002cf0b) vkb2_cell_keypad_pane_t1_ParamLimits

0x73a8,	// (0x0002cf0b) vkb2_cell_keypad_pane_t1

0x26e3,	// (0x00028246) vkb2_cell_bottom_grid_pane_ParamLimits

0x26e3,	// (0x00028246) vkb2_cell_bottom_grid_pane

0x271c,	// (0x0002827f) vkb2_cell_bottom_grid_pane_g1

0xde23,	// (0x00033986) aid_call2_pane_cp02

0xde2b,	// (0x0003398e) aid_call_pane_cp02

0xde33,	// (0x00033996) clock_digital_number_pane_cp10

0xde3b,	// (0x0003399e) clock_digital_number_pane_cp11

0xde43,	// (0x000339a6) clock_digital_number_pane_cp12

0xde4b,	// (0x000339ae) clock_digital_number_pane_cp13

0xde53,	// (0x000339b6) clock_digital_separator_pane_cp10

0xd09a,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g1

0xd09a,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g2

0xde5b,	// (0x000339be) popup_clock_digital_analogue_window_cp2_g3

0xd09a,	// (0x00032bfd) popup_clock_digital_analogue_window_cp2_g4

0xde5b,	// (0x000339be) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x000358a2) popup_clock_digital_analogue_window_cp2_g

0xde63,	// (0x000339c6) popup_clock_digital_analogue_window_cp2_t1

0xde71,	// (0x000339d4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x000358ad) popup_clock_digital_analogue_window_cp2_t

0x5491,	// (0x0002aff4) clock_digital_number_pane_cp10_g1

0x5491,	// (0x0002aff4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x0003569c) clock_digital_number_pane_cp10_g

0x5491,	// (0x0002aff4) clock_digital_separator_pane_cp10_g1

0x5491,	// (0x0002aff4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x0003569c) clock_digital_separator_pane_cp10_g

0xdd20,	// (0x00033883) uniindi_top_pane_g3

0x6de1,	// (0x0002c944) uniindi_top_pane_g4

0x24f6,	// (0x00028059) vkb2_row_keypad_pane_ParamLimits

0x24f6,	// (0x00028059) vkb2_row_keypad_pane

0x2738,	// (0x0002829b) vkb2_cell_t_keypad_pane_ParamLimits

0x2738,	// (0x0002829b) vkb2_cell_t_keypad_pane

0x2748,	// (0x000282ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2748,	// (0x000282ab) vkb2_cell_t_keypad_pane_cp08

0x275b,	// (0x000282be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x275b,	// (0x000282be) vkb2_cell_t_keypad_pane_cp09

0x276f,	// (0x000282d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x276f,	// (0x000282d2) vkb2_cell_t_keypad_pane_cp01

0x2780,	// (0x000282e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2780,	// (0x000282e3) vkb2_cell_t_keypad_pane_cp02

0x2791,	// (0x000282f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2791,	// (0x000282f4) vkb2_cell_t_keypad_pane_cp03

0x27a2,	// (0x00028305) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27a2,	// (0x00028305) vkb2_cell_t_keypad_pane_cp04

0x27b3,	// (0x00028316) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27b3,	// (0x00028316) vkb2_cell_t_keypad_pane_cp05

0x27c4,	// (0x00028327) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x27c4,	// (0x00028327) vkb2_cell_t_keypad_pane_cp06

0x27d5,	// (0x00028338) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27d5,	// (0x00028338) vkb2_cell_t_keypad_pane_cp07

0x27e6,	// (0x00028349) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27e6,	// (0x00028349) vkb2_cell_t_keypad_pane_cp10

0x5701,	// (0x0002b264) vkb2_cell_t_keypad_pane_g1

0x73bf,	// (0x0002cf22) vkb2_cell_t_keypad_pane_t1

0xc845,	// (0x000323a8) popup_grid_graphic2_window

0xe1bc,	// (0x00033d1f) aid_size_cell_graphic2_ParamLimits

0xe1bc,	// (0x00033d1f) aid_size_cell_graphic2

0xe1fa,	// (0x00033d5d) bg_popup_window_pane_cp21_ParamLimits

0xe1fa,	// (0x00033d5d) bg_popup_window_pane_cp21

0xe208,	// (0x00033d6b) graphic2_pages_pane_ParamLimits

0xe208,	// (0x00033d6b) graphic2_pages_pane

0xe25e,	// (0x00033dc1) grid_graphic2_control_pane_ParamLimits

0xe25e,	// (0x00033dc1) grid_graphic2_control_pane

0xe2a6,	// (0x00033e09) grid_graphic2_pane_ParamLimits

0xe2a6,	// (0x00033e09) grid_graphic2_pane

0xe32d,	// (0x00033e90) cell_graphic2_pane

0xc845,	// (0x000323a8) main_comp_mode_pane

0x6653,	// (0x0002c1b6) list_ai3_gene_pane_ParamLimits

0xdacf,	// (0x00033632) bg_popup_window_pane_cp19_ParamLimits

0x6a23,	// (0x0002c586) bg_touch_area_indi_pane_ParamLimits

0x6a23,	// (0x0002c586) bg_touch_area_indi_pane

0x6a39,	// (0x0002c59c) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a39,	// (0x0002c59c) bg_touch_area_indi_pane_cp01

0x6a4f,	// (0x0002c5b2) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a4f,	// (0x0002c5b2) bg_touch_area_indi_pane_cp02

0x6a67,	// (0x0002c5ca) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a67,	// (0x0002c5ca) bg_touch_area_indi_pane_cp03

0x6a81,	// (0x0002c5e4) popup_slider_window_g1_ParamLimits

0x6a9d,	// (0x0002c600) popup_slider_window_g2_ParamLimits

0x6ab9,	// (0x0002c61c) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x00035837) popup_slider_window_g_ParamLimits

0x6b15,	// (0x0002c678) popup_slider_window_t1_ParamLimits

0x6b89,	// (0x0002c6ec) small_volume_slider_vertical_pane_ParamLimits

0xe32d,	// (0x00033e90) cell_graphic2_pane_ParamLimits

0xe388,	// (0x00033eeb) bg_button_pane_cp10_ParamLimits

0xe388,	// (0x00033eeb) bg_button_pane_cp10

0xe39b,	// (0x00033efe) bg_button_pane_cp11_ParamLimits

0xe39b,	// (0x00033efe) bg_button_pane_cp11

0xe3ae,	// (0x00033f11) graphic2_pages_pane_g1_ParamLimits

0xe3ae,	// (0x00033f11) graphic2_pages_pane_g1

0xe3c9,	// (0x00033f2c) graphic2_pages_pane_g2_ParamLimits

0xe3c9,	// (0x00033f2c) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x000358fb) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x000358fb) graphic2_pages_pane_g

0xe3e1,	// (0x00033f44) graphic2_pages_pane_t1_ParamLimits

0xe3e1,	// (0x00033f44) graphic2_pages_pane_t1

0xe3f9,	// (0x00033f5c) cell_graphic2_control_pane_ParamLimits

0xe3f9,	// (0x00033f5c) cell_graphic2_control_pane

0xe42b,	// (0x00033f8e) cell_graphic2_pane_g1_ParamLimits

0xe42b,	// (0x00033f8e) cell_graphic2_pane_g1

0xd2c4,	// (0x00032e27) cell_graphic2_pane_g2_ParamLimits

0xd2c4,	// (0x00032e27) cell_graphic2_pane_g2

0xe438,	// (0x00033f9b) cell_graphic2_pane_g3_ParamLimits

0xe438,	// (0x00033f9b) cell_graphic2_pane_g3

0xd2d1,	// (0x00032e34) cell_graphic2_pane_g4_ParamLimits

0xd2d1,	// (0x00032e34) cell_graphic2_pane_g4

0xe445,	// (0x00033fa8) cell_graphic2_pane_g5_ParamLimits

0xe445,	// (0x00033fa8) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00035900) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00035900) cell_graphic2_pane_g

0xe465,	// (0x00033fc8) cell_graphic2_pane_t1_ParamLimits

0xe465,	// (0x00033fc8) cell_graphic2_pane_t1

0x3ba0,	// (0x00029703) grid_highlight_pane_cp11_ParamLimits

0x3ba0,	// (0x00029703) grid_highlight_pane_cp11

0xc9df,	// (0x00032542) bg_button_pane_cp05

0xe4b1,	// (0x00034014) cell_graphic2_control_pane_g1

0x5491,	// (0x0002aff4) bg_touch_area_indi_pane_g1

0x769b,	// (0x0002d1fe) aid_cmod_rocker_key_size

0x76a5,	// (0x0002d208) aid_cmode_itu_key_size

0x76af,	// (0x0002d212) main_cmode_video_pane

0x76b9,	// (0x0002d21c) main_comp_mode_itu_pane

0x76c5,	// (0x0002d228) main_comp_mode_rocker_pane

0x76d1,	// (0x0002d234) cell_cmode_rocker_pane_ParamLimits

0x76d1,	// (0x0002d234) cell_cmode_rocker_pane

0x76e3,	// (0x0002d246) cell_cmode_itu_pane_ParamLimits

0x76e3,	// (0x0002d246) cell_cmode_itu_pane

0xcc67,	// (0x000327ca) bg_button_pane_cp06_ParamLimits

0xcc67,	// (0x000327ca) bg_button_pane_cp06

0x5701,	// (0x0002b264) cell_cmode_rocker_pane_g1_ParamLimits

0x5701,	// (0x0002b264) cell_cmode_rocker_pane_g1

0x6c2d,	// (0x0002c790) cell_cmode_rocker_pane_g2_ParamLimits

0x6c2d,	// (0x0002c790) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00035910) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00035910) cell_cmode_rocker_pane_g

0xc845,	// (0x000323a8) bg_button_pane_cp07

0x76f8,	// (0x0002d25b) cell_cmode_itu_pane_g1

0x7701,	// (0x0002d264) cell_cmode_itu_pane_t1

0x770f,	// (0x0002d272) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x00035915) cell_cmode_itu_pane_t

0x6e52,	// (0x0002c9b5) aid_touch_ctrl_left

0x6e5a,	// (0x0002c9bd) aid_touch_ctrl_right

0xc845,	// (0x000323a8) compa_mode_pane

0xe4d7,	// (0x0003403a) aid_cmod_rocker_key_size_cp

0xe4e1,	// (0x00034044) aid_cmode_itu_key_size_cp

0x7731,	// (0x0002d294) compa_mode_pane_g1

0x7739,	// (0x0002d29c) compa_mode_pane_g2

0x7741,	// (0x0002d2a4) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x0003591a) compa_mode_pane_g

0xe4eb,	// (0x0003404e) main_comp_mode_itu_pane_cp

0xe4f3,	// (0x00034056) main_comp_mode_rocker_pane_cp

0xe4fb,	// (0x0003405e) cell_cmode_itu_pane_cp_ParamLimits

0xe4fb,	// (0x0003405e) cell_cmode_itu_pane_cp

0xe510,	// (0x00034073) cell_cmode_rocker_pane_cp_ParamLimits

0xe510,	// (0x00034073) cell_cmode_rocker_pane_cp

0xcc67,	// (0x000327ca) bg_button_pane_cp06_cp_ParamLimits

0xcc67,	// (0x000327ca) bg_button_pane_cp06_cp

0x5701,	// (0x0002b264) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5701,	// (0x0002b264) cell_cmode_rocker_pane_g1_cp

0x5491,	// (0x0002aff4) cell_cmode_rocker_pane_g2_cp

0xc845,	// (0x000323a8) bg_button_pane_cp07_cp

0xe522,	// (0x00034085) cell_cmode_itu_pane_g1_cp

0xe52b,	// (0x0003408e) cell_cmode_itu_pane_t1_cp

0xe52b,	// (0x0003408e) cell_cmode_itu_pane_t2_cp

0xbd7a,	// (0x000318dd) settings_code_pane_cp2

0xc8b5,	// (0x00032418) bg_popup_window_pane_cp3_ParamLimits

0xcaf8,	// (0x0003265b) heading_pane_cp3_ParamLimits

0xcb04,	// (0x00032667) listscroll_popup_graphic_pane_ParamLimits

0x1e0f,	// (0x00027972) fep_hwr_aid_pane_ParamLimits

0x21d8,	// (0x00027d3b) aid_touch_sctrl_top_ParamLimits

0x21e5,	// (0x00027d48) sctrl_sk_top_pane_g1_ParamLimits

0x5701,	// (0x0002b264) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00035850) sctrl_sk_top_pane_g_ParamLimits

0x21f2,	// (0x00027d55) sctrl_sk_top_pane_t1_ParamLimits

0x21d8,	// (0x00027d3b) aid_touch_sctrl_bottom_ParamLimits

0x21f2,	// (0x00027d55) sctrl_sk_bottom_pane_t1_ParamLimits

0xdcec,	// (0x0003384f) aid_area_touch_clock

0xc3b2,	// (0x00031f15) aid_vkb2_area_top_pane_cell_ParamLimits

0xc3b2,	// (0x00031f15) aid_vkb2_area_top_pane_cell

0xc45d,	// (0x00031fc0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc45d,	// (0x00031fc0) aid_vkb2_area_bottom_pane_cell

0x730a,	// (0x0002ce6d) popup_char_count_window

0x7797,	// (0x0002d2fa) popup_char_count_window_g1

0x77a0,	// (0x0002d303) popup_char_count_window_g2

0x77a9,	// (0x0002d30c) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00035921) popup_char_count_window_g

0x77b2,	// (0x0002d315) popup_char_count_window_t1

0x2293,	// (0x00027df6) popup_fep_char_preview_window_ParamLimits

0x2293,	// (0x00027df6) popup_fep_char_preview_window

0xc3d2,	// (0x00031f35) vkb2_top_candi_pane_ParamLimits

0xc3d2,	// (0x00031f35) vkb2_top_candi_pane

0xe539,	// (0x0003409c) cell_vkb2_top_candi_pane_ParamLimits

0xe539,	// (0x0003409c) cell_vkb2_top_candi_pane

0x3544,	// (0x000290a7) bg_popup_fep_char_preview_window_ParamLimits

0x3544,	// (0x000290a7) bg_popup_fep_char_preview_window

0x27fb,	// (0x0002835e) popup_fep_char_preview_window_t1_ParamLimits

0x27fb,	// (0x0002835e) popup_fep_char_preview_window_t1

0x780d,	// (0x0002d370) bg_popup_fep_char_preview_window_g1

0x7815,	// (0x0002d378) bg_popup_fep_char_preview_window_g2

0x781d,	// (0x0002d380) bg_popup_fep_char_preview_window_g3

0x7825,	// (0x0002d388) bg_popup_fep_char_preview_window_g4

0x782d,	// (0x0002d390) bg_popup_fep_char_preview_window_g5

0x2835,	// (0x00028398) bg_popup_fep_char_preview_window_g6

0x7835,	// (0x0002d398) bg_popup_fep_char_preview_window_g7

0x783d,	// (0x0002d3a0) bg_popup_fep_char_preview_window_g8

0x7845,	// (0x0002d3a8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x00035928) bg_popup_fep_char_preview_window_g

0x5701,	// (0x0002b264) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5701,	// (0x0002b264) cell_vkb2_top_candi_pane_g1

0x5a18,	// (0x0002b57b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5a18,	// (0x0002b57b) cell_vkb2_top_candi_pane_g2

0x5a39,	// (0x0002b59c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5a39,	// (0x0002b59c) cell_vkb2_top_candi_pane_g3

0x283d,	// (0x000283a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x283d,	// (0x000283a0) cell_vkb2_top_candi_pane_g4

0x784d,	// (0x0002d3b0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x784d,	// (0x0002d3b0) cell_vkb2_top_candi_pane_g5

0x6c2d,	// (0x0002c790) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c2d,	// (0x0002c790) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x0003593b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x0003593b) cell_vkb2_top_candi_pane_g

0x285e,	// (0x000283c1) cell_vkb2_top_candi_pane_t1

0xbb9a,	// (0x000316fd) aid_size_touch_slider_mark_ParamLimits

0xbb9a,	// (0x000316fd) aid_size_touch_slider_mark

0xe244,	// (0x00033da7) grid_graphic2_catg_pane_ParamLimits

0xe244,	// (0x00033da7) grid_graphic2_catg_pane

0xe300,	// (0x00033e63) popup_grid_graphic2_window_t1_ParamLimits

0xe300,	// (0x00033e63) popup_grid_graphic2_window_t1

0xe316,	// (0x00033e79) popup_grid_graphic2_window_t2_ParamLimits

0xe316,	// (0x00033e79) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x000358f6) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x000358f6) popup_grid_graphic2_window_t

0xc9df,	// (0x00032542) bg_button_pane_cp05_ParamLimits

0xe4b1,	// (0x00034014) cell_graphic2_control_pane_g1_ParamLimits

0xe59f,	// (0x00034102) cell_graphic2_catg_pane_ParamLimits

0xe59f,	// (0x00034102) cell_graphic2_catg_pane

0xc845,	// (0x000323a8) bg_button_pane_cp12

0xe5b1,	// (0x00034114) cell_graphic2_catg_pane_g1

0x6d67,	// (0x0002c8ca) cell_tb_ext_pane_t1_ParamLimits

0x2635,	// (0x00028198) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2635,	// (0x00028198) vkb2_top_cell_right_narrow_pane

0x264d,	// (0x000281b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x264d,	// (0x000281b0) vkb2_top_cell_right_wide_pane

0x1e01,	// (0x00027964) bg_vkb2_func_pane_ParamLimits

0x1e01,	// (0x00027964) bg_vkb2_func_pane

0x26be,	// (0x00028221) vkb2_top_cell_left_pane_g1_ParamLimits

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp03

0x271c,	// (0x0002827f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2ed2,	// (0x00028a35) bg_vkb2_func_pane_g1

0x2eda,	// (0x00028a3d) bg_vkb2_func_pane_g2

0x2eea,	// (0x00028a4d) bg_vkb2_func_pane_g3

0x2ee2,	// (0x00028a45) bg_vkb2_func_pane_g4

0x2ef2,	// (0x00028a55) bg_vkb2_func_pane_g5

0x2efa,	// (0x00028a5d) bg_vkb2_func_pane_g6

0x2f02,	// (0x00028a65) bg_vkb2_func_pane_g7

0x2f0a,	// (0x00028a6d) bg_vkb2_func_pane_g8

0x2eca,	// (0x00028a2d) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00035948) bg_vkb2_func_pane_g

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp01

0x26be,	// (0x00028221) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26be,	// (0x00028221) vkb2_top_cell_right_wide_pane_g1

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1e01,	// (0x00027964) bg_vkb2_fuc_pane_cp02

0x271c,	// (0x0002827f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x271c,	// (0x0002827f) vkb2_top_cell_right_narrow_pane_g1

0xda0d,	// (0x00033570) aid_touch_area_decrease_ParamLimits

0xda0d,	// (0x00033570) aid_touch_area_decrease

0xda43,	// (0x000335a6) aid_touch_area_increase_ParamLimits

0xda43,	// (0x000335a6) aid_touch_area_increase

0xda6b,	// (0x000335ce) aid_touch_area_mute_ParamLimits

0xda6b,	// (0x000335ce) aid_touch_area_mute

0xda9b,	// (0x000335fe) aid_touch_area_slider_ParamLimits

0xda9b,	// (0x000335fe) aid_touch_area_slider

0xdadb,	// (0x0003363e) popup_slider_window_g4_ParamLimits

0xdadb,	// (0x0003363e) popup_slider_window_g4

0xdb03,	// (0x00033666) popup_slider_window_g5_ParamLimits

0xdb03,	// (0x00033666) popup_slider_window_g5

0xdb37,	// (0x0003369a) popup_slider_window_g6_ParamLimits

0xdb37,	// (0x0003369a) popup_slider_window_g6

0x6b43,	// (0x0002c6a6) popup_slider_window_t2_ParamLimits

0x6b43,	// (0x0002c6a6) popup_slider_window_t2

0x0001,

0xfce1,	// (0x00035844) popup_slider_window_t_ParamLimits

0xfce1,	// (0x00035844) popup_slider_window_t

0xdb53,	// (0x000336b6) slider_pane_ParamLimits

0xdb53,	// (0x000336b6) slider_pane

0x7889,	// (0x0002d3ec) slider_pane_g1_ParamLimits

0x7889,	// (0x0002d3ec) slider_pane_g1

0x789d,	// (0x0002d400) slider_pane_g2_ParamLimits

0x789d,	// (0x0002d400) slider_pane_g2

0x78b3,	// (0x0002d416) slider_pane_g3_ParamLimits

0x78b3,	// (0x0002d416) slider_pane_g3

0x0003,

0xfdf8,	// (0x0003595b) slider_pane_g_ParamLimits

0xfdf8,	// (0x0003595b) slider_pane_g

0xaf35,	// (0x00030a98) popup_tb_float_extension_window_ParamLimits

0xaf35,	// (0x00030a98) popup_tb_float_extension_window

0x78df,	// (0x0002d442) aid_size_cell_tb_float_ext

0xc845,	// (0x000323a8) bg_popup_sub_window_cp28

0xe5ba,	// (0x0003411d) grid_tb_float_ext_pane

0xe5c4,	// (0x00034127) cell_tb_float_ext_pane_ParamLimits

0xe5c4,	// (0x00034127) cell_tb_float_ext_pane

0xe5de,	// (0x00034141) cell_tb_float_ext_pane_g1

0xe5e7,	// (0x0003414a) grid_highlight_pane_cp12

0xc148,	// (0x00031cab) cell_last_hwr_side_pane_ParamLimits

0xc148,	// (0x00031cab) cell_last_hwr_side_pane

0x5491,	// (0x0002aff4) cell_last_hwr_side_pane_g1

0x7921,	// (0x0002d484) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00035964) cell_last_hwr_side_pane_g

0xc539,	// (0x0003209c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc539,	// (0x0003209c) vkb2_area_bottom_space_btn_pane

0x5701,	// (0x0002b264) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x73bf,	// (0x0002cf22) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x285e,	// (0x000283c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x287d,	// (0x000283e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x287d,	// (0x000283e0) vkb2_area_bottom_space_btn_pane_g1

0x28b7,	// (0x0002841a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28b7,	// (0x0002841a) vkb2_area_bottom_space_btn_pane_g2

0x28ed,	// (0x00028450) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28ed,	// (0x00028450) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00035969) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00035969) vkb2_area_bottom_space_btn_pane_g

0x1eb6,	// (0x00027a19) cel_fep_hwr_func_pane_ParamLimits

0x1eb6,	// (0x00027a19) cel_fep_hwr_func_pane

0xc11d,	// (0x00031c80) cell_hwr_side_button_pane_ParamLimits

0xc11d,	// (0x00031c80) cell_hwr_side_button_pane

0xdcec,	// (0x0003384f) aid_area_touch_clock_ParamLimits

0xc9df,	// (0x00032542) bg_uniindi_top_pane_ParamLimits

0xdcfe,	// (0x00033861) uniindi_top_pane_g1_ParamLimits

0xdd14,	// (0x00033877) uniindi_top_pane_g2_ParamLimits

0xdd20,	// (0x00033883) uniindi_top_pane_g3_ParamLimits

0x6de1,	// (0x0002c944) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x0003587c) uniindi_top_pane_g_ParamLimits

0xdd31,	// (0x00033894) uniindi_top_pane_t1_ParamLimits

0xc9df,	// (0x00032542) bg_vkb2_func_pane_cp01_ParamLimits

0xc9df,	// (0x00032542) bg_vkb2_func_pane_cp01

0x792a,	// (0x0002d48d) cel_fep_hwr_func_pane_g1_ParamLimits

0x792a,	// (0x0002d48d) cel_fep_hwr_func_pane_g1

0xc9df,	// (0x00032542) bg_vkb2_func_pane_cp02_ParamLimits

0xc9df,	// (0x00032542) bg_vkb2_func_pane_cp02

0x792a,	// (0x0002d48d) cell_hwr_side_button_pane_g1_ParamLimits

0x792a,	// (0x0002d48d) cell_hwr_side_button_pane_g1

0x2d4e,	// (0x000288b1) status_pane_g4_ParamLimits

0x2d4e,	// (0x000288b1) status_pane_g4

0x2d68,	// (0x000288cb) status_pane_t1

0x51d2,	// (0x0002ad35) form2_midp_gauge_slider_cont_pane

0x51da,	// (0x0002ad3d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd1ab,	// (0x00032d0e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd1bd,	// (0x00032d20) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x0003564f) form2_midp_gauge_slider_pane_t_ParamLimits

0x5210,	// (0x0002ad73) form2_midp_slider_pane_ParamLimits

0x2253,	// (0x00027db6) aid_size_cell_func_vkb2_ParamLimits

0x2253,	// (0x00027db6) aid_size_cell_func_vkb2

0x78cb,	// (0x0002d42e) slider_pane_g4_ParamLimits

0x78cb,	// (0x0002d42e) slider_pane_g4

0xc59a,	// (0x000320fd) form2_midp_gauge_slider_pane_t2_cp01

0xc5a8,	// (0x0003210b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5a8,	// (0x0003210b) form2_midp_gauge_slider_pane_t3_cp01

0x2962,	// (0x000284c5) form2_midp_slider_pane_cp01

0xc845,	// (0x000323a8) navi_smil_pane

0x7963,	// (0x0002d4c6) navi_smil_pane_g1

0x796b,	// (0x0002d4ce) navi_smil_pane_t1

0x7938,	// (0x0002d49b) form2_midp_slider_pane_g1

0x7941,	// (0x0002d4a4) form2_midp_slider_pane_g2

0x7949,	// (0x0002d4ac) form2_midp_slider_pane_g3

0x7938,	// (0x0002d49b) form2_midp_slider_pane_g4

0xe5f0,	// (0x00034153) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00035972) form2_midp_slider_pane_g

0x2927,	// (0x0002848a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2927,	// (0x0002848a) vkb2_area_bottom_space_btn_pane_g4

0xb16d,	// (0x00030cd0) lc0_navi_pane_ParamLimits

0xb16d,	// (0x00030cd0) lc0_navi_pane

0xb1d7,	// (0x00030d3a) lc0_stat_indi_pane_ParamLimits

0xb1d7,	// (0x00030d3a) lc0_stat_indi_pane

0xb1ec,	// (0x00030d4f) ls0_title_pane_ParamLimits

0xb1ec,	// (0x00030d4f) ls0_title_pane

0xcc67,	// (0x000327ca) bg_popup_sub_pane_cp14_ParamLimits

0xdcd3,	// (0x00033836) list_uniindi_pane_ParamLimits

0xdcdf,	// (0x00033842) uniindi_top_pane_ParamLimits

0x6e2a,	// (0x0002c98d) list_single_uniindi_pane_g1_ParamLimits

0x6e3d,	// (0x0002c9a0) list_single_uniindi_pane_t1_ParamLimits

0xc5c5,	// (0x00032128) lc0_stat_clock_pane_ParamLimits

0xc5c5,	// (0x00032128) lc0_stat_clock_pane

0xe5fb,	// (0x0003415e) lc0_stat_indi_pane_g1_ParamLimits

0xe5fb,	// (0x0003415e) lc0_stat_indi_pane_g1

0xe608,	// (0x0003416b) lc0_stat_indi_pane_g2_ParamLimits

0xe608,	// (0x0003416b) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x0003597d) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x0003597d) lc0_stat_indi_pane_g

0xc5d5,	// (0x00032138) lc0_uni_indicator_pane_ParamLimits

0xc5d5,	// (0x00032138) lc0_uni_indicator_pane

0xe615,	// (0x00034178) ls0_title_pane_g1_ParamLimits

0xe615,	// (0x00034178) ls0_title_pane_g1

0xe629,	// (0x0003418c) ls0_title_pane_t1_ParamLimits

0xe629,	// (0x0003418c) ls0_title_pane_t1

0xc5e5,	// (0x00032148) lc0_uni_indicator_pane_g1_ParamLimits

0xc5e5,	// (0x00032148) lc0_uni_indicator_pane_g1

0x79dd,	// (0x0002d540) lc0_stat_clock_pane_t1

0xc845,	// (0x000323a8) main_ai5_pane

0x79eb,	// (0x0002d54e) ai5_sk_pane_ParamLimits

0x79eb,	// (0x0002d54e) ai5_sk_pane

0xe657,	// (0x000341ba) cell_ai5_widget_pane_ParamLimits

0xe657,	// (0x000341ba) cell_ai5_widget_pane

0x7aaa,	// (0x0002d60d) aid_size_cell_widget_grid

0x7ab8,	// (0x0002d61b) bg_ai5_widget_pane_ParamLimits

0x7ab8,	// (0x0002d61b) bg_ai5_widget_pane

0x7b2c,	// (0x0002d68f) cell_ai5_widget_pane_g2

0x7b3c,	// (0x0002d69f) cell_ai5_widget_pane_g3

0x7b53,	// (0x0002d6b6) cell_ai5_widget_pane_g4

0x7b5f,	// (0x0002d6c2) cell_ai5_widget_pane_g5

0x7b6b,	// (0x0002d6ce) cell_ai5_widget_pane_g6

0x7b77,	// (0x0002d6da) cell_ai5_widget_pane_g7

0x7bbf,	// (0x0002d722) cell_ai5_widget_pane_t1_ParamLimits

0x7bbf,	// (0x0002d722) cell_ai5_widget_pane_t1

0x7bdc,	// (0x0002d73f) cell_ai5_widget_pane_t2_ParamLimits

0x7bdc,	// (0x0002d73f) cell_ai5_widget_pane_t2

0x7bf4,	// (0x0002d757) cell_ai5_widget_pane_t3_ParamLimits

0x7bf4,	// (0x0002d757) cell_ai5_widget_pane_t3

0x7c0c,	// (0x0002d76f) cell_ai5_widget_pane_t4_ParamLimits

0x7c0c,	// (0x0002d76f) cell_ai5_widget_pane_t4

0x7c29,	// (0x0002d78c) cell_ai5_widget_pane_t5_ParamLimits

0x7c29,	// (0x0002d78c) cell_ai5_widget_pane_t5

0x7c48,	// (0x0002d7ab) cell_ai5_widget_pane_t6_ParamLimits

0x7c48,	// (0x0002d7ab) cell_ai5_widget_pane_t6

0x7c5a,	// (0x0002d7bd) cell_ai5_widget_pane_t7_ParamLimits

0x7c5a,	// (0x0002d7bd) cell_ai5_widget_pane_t7

0x7c73,	// (0x0002d7d6) cell_ai5_widget_pane_t8_ParamLimits

0x7c73,	// (0x0002d7d6) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x00035997) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00035997) cell_ai5_widget_pane_t

0x7cc7,	// (0x0002d82a) grid_ai5_widget_pane

0xcc67,	// (0x000327ca) highlight_cell_ai5_widget_pane_ParamLimits

0xcc67,	// (0x000327ca) highlight_cell_ai5_widget_pane

0xe6bd,	// (0x00034220) ai5_sk_left_pane

0xe6c7,	// (0x0003422a) ai5_sk_middle_pane

0xe6d1,	// (0x00034234) ai5_sk_right_pane

0x7cf3,	// (0x0002d856) bg_ai5_widget_pane_g1_ParamLimits

0x7cf3,	// (0x0002d856) bg_ai5_widget_pane_g1

0x7cff,	// (0x0002d862) bg_ai5_widget_pane_g2_ParamLimits

0x7cff,	// (0x0002d862) bg_ai5_widget_pane_g2

0x7d0b,	// (0x0002d86e) bg_ai5_widget_pane_g3_ParamLimits

0x7d0b,	// (0x0002d86e) bg_ai5_widget_pane_g3

0x7d17,	// (0x0002d87a) bg_ai5_widget_pane_g4_ParamLimits

0x7d17,	// (0x0002d87a) bg_ai5_widget_pane_g4

0x7d23,	// (0x0002d886) bg_ai5_widget_pane_g5_ParamLimits

0x7d23,	// (0x0002d886) bg_ai5_widget_pane_g5

0x7d2f,	// (0x0002d892) bg_ai5_widget_pane_g6_ParamLimits

0x7d2f,	// (0x0002d892) bg_ai5_widget_pane_g6

0x7d3b,	// (0x0002d89e) bg_ai5_widget_pane_g7_ParamLimits

0x7d3b,	// (0x0002d89e) bg_ai5_widget_pane_g7

0x7d47,	// (0x0002d8aa) bg_ai5_widget_pane_g8_ParamLimits

0x7d47,	// (0x0002d8aa) bg_ai5_widget_pane_g8

0x7d53,	// (0x0002d8b6) bg_ai5_widget_pane_g9_ParamLimits

0x7d53,	// (0x0002d8b6) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x000359ac) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x000359ac) bg_ai5_widget_pane_g

0x7d85,	// (0x0002d8e8) cell_shortcut_ai5_widget_pane_ParamLimits

0x7d85,	// (0x0002d8e8) cell_shortcut_ai5_widget_pane

0x0b02,	// (0x00026665) bg_cell_shortcut_ai5_widget_pane

0x7d96,	// (0x0002d8f9) cell_grid_ai5_widget_pane_g1

0x0b02,	// (0x00026665) highlight_cell_shortcut_ai5_widget_pane

0x2eda,	// (0x00028a3d) ai5_sk_left_pane_g1

0x7d9f,	// (0x0002d902) ai5_sk_left_pane_g2

0x7da7,	// (0x0002d90a) ai5_sk_left_pane_g3

0x7daf,	// (0x0002d912) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x000359bf) ai5_sk_left_pane_g

0x7db7,	// (0x0002d91a) ai5_sk_left_pane_t1

0x2ed2,	// (0x00028a35) ai5_sk_right_pane_g1

0x7dc5,	// (0x0002d928) ai5_sk_right_pane_g2

0x7dcd,	// (0x0002d930) ai5_sk_right_pane_g3

0x7dd5,	// (0x0002d938) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x000359c8) ai5_sk_right_pane_g

0x7ddd,	// (0x0002d940) ai5_sk_right_pane_t1

0x2ed2,	// (0x00028a35) ai5_sk_middle_pane_g1

0x2eda,	// (0x00028a3d) ai5_sk_middle_pane_g2

0x2ef2,	// (0x00028a55) ai5_sk_middle_pane_g3

0x7dcd,	// (0x0002d930) ai5_sk_middle_pane_g4

0x7da7,	// (0x0002d90a) ai5_sk_middle_pane_g5

0x7deb,	// (0x0002d94e) ai5_sk_middle_pane_g6

0xe6db,	// (0x0003423e) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x000359d1) ai5_sk_middle_pane_g

0xb059,	// (0x00030bbc) aid_touch_area_size_lc0_ParamLimits

0xb059,	// (0x00030bbc) aid_touch_area_size_lc0

0x2041,	// (0x00027ba4) cell_hwr_candidate_pane_t1_ParamLimits

0x1664,	// (0x000271c7) aid_touch_navi_pane

0xb2e5,	// (0x00030e48) status_dt_navi_pane_ParamLimits

0xb2e5,	// (0x00030e48) status_dt_navi_pane

0xb2fd,	// (0x00030e60) status_dt_sta_pane_ParamLimits

0xb2fd,	// (0x00030e60) status_dt_sta_pane

0xe6e3,	// (0x00034246) dt_sta_controll_pane

0xe6f0,	// (0x00034253) dt_sta_indi_pane

0xe6fd,	// (0x00034260) dt_sta_title_pane

0xc9df,	// (0x00032542) bg_dt_sta_indi_pane_ParamLimits

0xc9df,	// (0x00032542) bg_dt_sta_indi_pane

0xe70f,	// (0x00034272) dt_sta_battery_pane

0xe717,	// (0x0003427a) dt_sta_indi_pane_g1

0x7e3d,	// (0x0002d9a0) dt_sta_indi_pane_g2

0x7e46,	// (0x0002d9a9) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x000359e0) dt_sta_indi_pane_g

0x7e4f,	// (0x0002d9b2) dt_sta_signal_pane

0xcc67,	// (0x000327ca) bg_dt_sta_title_pane_ParamLimits

0xcc67,	// (0x000327ca) bg_dt_sta_title_pane

0x3d00,	// (0x00029863) dt_sta_title_pane_g1

0xe720,	// (0x00034283) dt_sta_title_pane_t1_ParamLimits

0xe720,	// (0x00034283) dt_sta_title_pane_t1

0xc845,	// (0x000323a8) bg_dt_sta_control_pane

0xe735,	// (0x00034298) dt_sta_controll_pane_g1

0xe73e,	// (0x000342a1) bg_dt_sta_title_pane_g1

0xe747,	// (0x000342aa) bg_dt_sta_title_pane_g2

0xe750,	// (0x000342b3) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x000359e7) bg_dt_sta_title_pane_g

0x5491,	// (0x0002aff4) bg_dt_sta_indi_pane_g1

0x7e91,	// (0x0002d9f4) dt_sta_signal_pane_g1

0x7e99,	// (0x0002d9fc) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x000359ee) dt_sta_signal_pane_g

0x7ea1,	// (0x0002da04) dt_sta_battery_pane_g1

0x7eaa,	// (0x0002da0d) dt_sta_battery_pane_t1

0x5491,	// (0x0002aff4) bg_dt_sta_control_pane_g1

0xd11d,	// (0x00032c80) fep_china_uni_eep_pane

0xd125,	// (0x00032c88) fep_china_uni_entry_pane_ParamLimits

0xd135,	// (0x00032c98) popup_fep_china_uni_window_g1_ParamLimits

0xd145,	// (0x00032ca8) popup_fep_china_uni_window_g2_ParamLimits

0xd145,	// (0x00032ca8) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00035271) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00035271) popup_fep_china_uni_window_g

0x7eb9,	// (0x0002da1c) fep_china_uni_eep_pane_g1

0x7ec1,	// (0x0002da24) fep_china_uni_eep_pane_t1

0x795a,	// (0x0002d4bd) aid_touch_area_size_smil_player

0x17ba,	// (0x0002731d) lc0_clock_pane

0x2d5c,	// (0x000288bf) status_pane_g5_ParamLimits

0x2d5c,	// (0x000288bf) status_pane_g5

0xaa6b,	// (0x000305ce) popup_keymap_window

0x2d1a,	// (0x0002887d) status_icon_pane

0x7b3c,	// (0x0002d69f) cell_ai5_widget_pane_g3_ParamLimits

0x7b53,	// (0x0002d6b6) cell_ai5_widget_pane_g4_ParamLimits

0x7b5f,	// (0x0002d6c2) cell_ai5_widget_pane_g5_ParamLimits

0x7b83,	// (0x0002d6e6) cell_ai5_widget_pane_g8_ParamLimits

0x7b83,	// (0x0002d6e6) cell_ai5_widget_pane_g8

0x7b97,	// (0x0002d6fa) cell_ai5_widget_pane_g9_ParamLimits

0x7b97,	// (0x0002d6fa) cell_ai5_widget_pane_g9

0x7bab,	// (0x0002d70e) cell_ai5_widget_pane_g10_ParamLimits

0x7bab,	// (0x0002d70e) cell_ai5_widget_pane_g10

0x7ed0,	// (0x0002da33) status_icon_pane_g1

0xc845,	// (0x000323a8) bg_popup_sub_pane_cp13

0x7ed8,	// (0x0002da3b) popup_keymap_window_t1

0xa737,	// (0x0003029a) control_pane_g6_ParamLimits

0xa737,	// (0x0003029a) control_pane_g6

0xa744,	// (0x000302a7) control_pane_g7_ParamLimits

0xa744,	// (0x000302a7) control_pane_g7

0xa751,	// (0x000302b4) control_pane_g8_ParamLimits

0xa751,	// (0x000302b4) control_pane_g8

0xe6e3,	// (0x00034246) dt_sta_controll_pane_ParamLimits

0xe6f0,	// (0x00034253) dt_sta_indi_pane_ParamLimits

0xe6fd,	// (0x00034260) dt_sta_title_pane_ParamLimits

0xcbb2,	// (0x00032715) aid_size_touch_scroll_bar_cale

0x99c9,	// (0x0002f52c) popup_discreet_window_ParamLimits

0x99c9,	// (0x0002f52c) popup_discreet_window

0x9a1b,	// (0x0002f57e) popup_sk_window

0x3544,	// (0x000290a7) bg_popup_sub_pane_cp28_ParamLimits

0x3544,	// (0x000290a7) bg_popup_sub_pane_cp28

0x7ee6,	// (0x0002da49) popup_discreet_window_g1_ParamLimits

0x7ee6,	// (0x0002da49) popup_discreet_window_g1

0xe759,	// (0x000342bc) popup_discreet_window_t1_ParamLimits

0xe759,	// (0x000342bc) popup_discreet_window_t1

0x7f24,	// (0x0002da87) popup_discreet_window_t2_ParamLimits

0x7f24,	// (0x0002da87) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x000359f3) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x000359f3) popup_discreet_window_t

0x2999,	// (0x000284fc) popup_sk_window_g1

0x29a3,	// (0x00028506) popup_sk_window_g2

0x0001,

0xfe97,	// (0x000359fa) popup_sk_window_g

0xc610,	// (0x00032173) popup_sk_window_t1

0xc61e,	// (0x00032181) popup_sk_window_t1_copy1

0x7b2c,	// (0x0002d68f) cell_ai5_widget_pane_g2_ParamLimits

0x7c85,	// (0x0002d7e8) cell_ai5_widget_pane_t9_ParamLimits

0x7c85,	// (0x0002d7e8) cell_ai5_widget_pane_t9

0xc845,	// (0x000323a8) main_fep_fshwr2_pane

0xc62c,	// (0x0003218f) aid_fshwr2_btn_pane

0xc63e,	// (0x000321a1) aid_fshwr2_syb_pane

0xc650,	// (0x000321b3) aid_fshwr2_txt_pane

0xc65f,	// (0x000321c2) fshwr2_func_candi_pane

0xc67e,	// (0x000321e1) fshwr2_hwr_syb_pane

0xc699,	// (0x000321fc) fshwr2_icf_pane

0xc845,	// (0x000323a8) fshwr2_icf_bg_pane

0x2a48,	// (0x000285ab) fshwr2_icf_pane_t1_ParamLimits

0x2a48,	// (0x000285ab) fshwr2_icf_pane_t1

0xd09a,	// (0x00032bfd) fshwr2_func_candi_pane_g1

0xe777,	// (0x000342da) fshwr2_func_candi_row_pane_ParamLimits

0xe777,	// (0x000342da) fshwr2_func_candi_row_pane

0xc6c5,	// (0x00032228) cell_fshwr2_syb_pane_ParamLimits

0xc6c5,	// (0x00032228) cell_fshwr2_syb_pane

0x5701,	// (0x0002b264) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5701,	// (0x0002b264) fshwr2_hwr_syb_pane_g1

0xc845,	// (0x000323a8) bg_popup_call_pane_cp01

0xc6db,	// (0x0003223e) fshwr2_func_candi_cell_pane_ParamLimits

0xc6db,	// (0x0003223e) fshwr2_func_candi_cell_pane

0xe79a,	// (0x000342fd) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe79a,	// (0x000342fd) fshwr2_func_candi_cell_bg_pane

0xc726,	// (0x00032289) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc726,	// (0x00032289) fshwr2_func_candi_cell_pane_g1

0xc75d,	// (0x000322c0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc75d,	// (0x000322c0) fshwr2_func_candi_cell_pane_t1

0xc845,	// (0x000323a8) bg_button_pane_cp08

0x7f86,	// (0x0002dae9) cell_fshwr2_syb_bg_pane

0xc778,	// (0x000322db) cell_fshwr2_syb_bg_pane_g1

0xc780,	// (0x000322e3) cell_fshwr2_syb_bg_pane_t1

0xcc67,	// (0x000327ca) main_tmo_pane

0xba70,	// (0x000315d3) uni_indicator_pane_g1_ParamLimits

0xba86,	// (0x000315e9) uni_indicator_pane_g2_ParamLimits

0xba9c,	// (0x000315ff) uni_indicator_pane_g3_ParamLimits

0x406d,	// (0x00029bd0) uni_indicator_pane_g4_ParamLimits

0x406d,	// (0x00029bd0) uni_indicator_pane_g4

0x4081,	// (0x00029be4) uni_indicator_pane_g5_ParamLimits

0x4081,	// (0x00029be4) uni_indicator_pane_g5

0x4081,	// (0x00029be4) uni_indicator_pane_g6_ParamLimits

0x4081,	// (0x00029be4) uni_indicator_pane_g6

0xf906,	// (0x00035469) uni_indicator_pane_g_ParamLimits

0xd9ef,	// (0x00033552) popup_tmo_note_window_ParamLimits

0xd9ef,	// (0x00033552) popup_tmo_note_window

0xcc67,	// (0x000327ca) fshwr2_bg_pane

0xc74e,	// (0x000322b1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc74e,	// (0x000322b1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x000359ff) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x000359ff) fshwr2_func_candi_cell_pane_g

0x5491,	// (0x0002aff4) bg_popup_window_pane_cp01

0x2b14,	// (0x00028677) bg_popup_window_pane_g1_cp01

0x7f8e,	// (0x0002daf1) bg_popup_window_pane_cp22_ParamLimits

0x7f8e,	// (0x0002daf1) bg_popup_window_pane_cp22

0xe7a6,	// (0x00034309) listscroll_tmo_link_pane_ParamLimits

0xe7a6,	// (0x00034309) listscroll_tmo_link_pane

0x7fdc,	// (0x0002db3f) popup_tmo_note_window_g1_ParamLimits

0x7fdc,	// (0x0002db3f) popup_tmo_note_window_g1

0xe7e6,	// (0x00034349) tmo_note_info_pane_ParamLimits

0xe7e6,	// (0x00034349) tmo_note_info_pane

0xe800,	// (0x00034363) list_tmo_note_info_pane_g1_ParamLimits

0xe800,	// (0x00034363) list_tmo_note_info_pane_g1

0x801a,	// (0x0002db7d) list_tmo_note_info_pane_g2_ParamLimits

0x801a,	// (0x0002db7d) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00035a04) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00035a04) list_tmo_note_info_pane_g

0x8036,	// (0x0002db99) list_tmo_note_info_text_pane_ParamLimits

0x8036,	// (0x0002db99) list_tmo_note_info_text_pane

0x80b7,	// (0x0002dc1a) list_tmo_link_pane

0x80c4,	// (0x0002dc27) scroll_pane_cp20

0x80d1,	// (0x0002dc34) list_single_tmo_link_pane_ParamLimits

0x80d1,	// (0x0002dc34) list_single_tmo_link_pane

0x80e1,	// (0x0002dc44) list_single_tmo_link_pane_t1

0x80ef,	// (0x0002dc52) list_tmo_note_info_text_pane_t1_ParamLimits

0x80ef,	// (0x0002dc52) list_tmo_note_info_text_pane_t1

0xa117,	// (0x0002fc7a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa117,	// (0x0002fc7a) aid_size_touch_scroll_bar_cp01

0x94fb,	// (0x0002f05e) aid_size_touch_slider_marker

0x9a0b,	// (0x0002f56e) popup_settings_window_ParamLimits

0x9a0b,	// (0x0002f56e) popup_settings_window

0xec9d,	// (0x00034800) popup_candi_list_indi_window

0x1664,	// (0x000271c7) aid_touch_navi_pane_ParamLimits

0x21ac,	// (0x00027d0f) rs_clock_indi_pane

0x21b5,	// (0x00027d18) sctrl_sk_bottom_pane_ParamLimits

0x21c6,	// (0x00027d29) sctrl_sk_top_pane_ParamLimits

0xc276,	// (0x00031dd9) popup_fep_tooltip_window

0x7aaa,	// (0x0002d60d) aid_size_cell_widget_grid_ParamLimits

0x7b17,	// (0x0002d67a) cell_ai5_widget_pane_g1_ParamLimits

0x7b17,	// (0x0002d67a) cell_ai5_widget_pane_g1

0x7b6b,	// (0x0002d6ce) cell_ai5_widget_pane_g6_ParamLimits

0x7b77,	// (0x0002d6da) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x00035982) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00035982) cell_ai5_widget_pane_g

0x7ca9,	// (0x0002d80c) cell_ai5_widget_pane_t10_ParamLimits

0x7ca9,	// (0x0002d80c) cell_ai5_widget_pane_t10

0x7cc7,	// (0x0002d82a) grid_ai5_widget_pane_ParamLimits

0x7d5f,	// (0x0002d8c2) cell_contacts_ai5_widget_pane_ParamLimits

0x7d5f,	// (0x0002d8c2) cell_contacts_ai5_widget_pane

0x7f39,	// (0x0002da9c) popup_discreet_window_t3_ParamLimits

0x7f39,	// (0x0002da9c) popup_discreet_window_t3

0xc6b1,	// (0x00032214) popup_fshwr2_char_preview_window_ParamLimits

0xc6b1,	// (0x00032214) popup_fshwr2_char_preview_window

0xe817,	// (0x0003437a) tmo_note_info_pane_t1

0xe82c,	// (0x0003438f) tmo_note_info_pane_t2

0xe843,	// (0x000343a6) tmo_note_info_pane_t3

0x8093,	// (0x0002dbf6) tmo_note_info_pane_t4

0x80a5,	// (0x0002dc08) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00035a09) tmo_note_info_pane_t

0x80b7,	// (0x0002dc1a) list_tmo_link_pane_ParamLimits

0x80c4,	// (0x0002dc27) scroll_pane_cp20_ParamLimits

0xc845,	// (0x000323a8) bg_popup_fep_char_preview_window_cp01

0xe858,	// (0x000343bb) popup_fshwr2_char_preview_window_t1

0x8116,	// (0x0002dc79) popup_candi_list_indi_window_g1

0x811f,	// (0x0002dc82) bg_cell_contacts_ai5_widget_pane

0x812b,	// (0x0002dc8e) cell_contacts_ai5_widget_pane_g1

0x5b84,	// (0x0002b6e7) cell_contacts_ai5_widget_pane_g2

0x8140,	// (0x0002dca3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00035a14) cell_contacts_ai5_widget_pane_g

0x814c,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_t1

0xcc67,	// (0x000327ca) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81c3,	// (0x0002dd26) settings_container_pane

0x0b02,	// (0x00026665) listscroll_set_pane_copy1

0x4b9a,	// (0x0002a6fd) scroll_pane_cp121_copy1

0x32fd,	// (0x00028e60) set_content_pane_copy1

0xe8cb,	// (0x0003442e) aid_height_set_list_copy1_ParamLimits

0xe8cb,	// (0x0003442e) aid_height_set_list_copy1

0x4279,	// (0x00029ddc) aid_size_parent_copy1_ParamLimits

0x4279,	// (0x00029ddc) aid_size_parent_copy1

0xe8d7,	// (0x0003443a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8d7,	// (0x0003443a) button_value_adjust_pane_cp6_copy1

0x1067,	// (0x00026bca) list_highlight_pane_cp2_copy1_ParamLimits

0x1067,	// (0x00026bca) list_highlight_pane_cp2_copy1

0xe8eb,	// (0x0003444e) list_set_pane_copy1_ParamLimits

0xe8eb,	// (0x0003444e) list_set_pane_copy1

0xe866,	// (0x000343c9) main_pane_set_t1_copy1_ParamLimits

0xe866,	// (0x000343c9) main_pane_set_t1_copy1

0xe8a0,	// (0x00034403) main_pane_set_t2_copy1_ParamLimits

0xe8a0,	// (0x00034403) main_pane_set_t2_copy1

0xe998,	// (0x000344fb) main_pane_set_t3_copy1

0xe9a6,	// (0x00034509) main_pane_set_t4_copy1

0xe8bf,	// (0x00034422) set_content_pane_g1_copy1_ParamLimits

0xe8bf,	// (0x00034422) set_content_pane_g1_copy1

0xe9b4,	// (0x00034517) setting_code_pane_copy1

0x82c0,	// (0x0002de23) setting_slider_graphic_pane_copy1

0x82c0,	// (0x0002de23) setting_slider_pane_copy1

0x82c0,	// (0x0002de23) setting_text_pane_copy1

0x82c0,	// (0x0002de23) setting_volume_pane_copy1

0xe9b4,	// (0x00034517) settings_code_pane_cp2_copy1

0xe9bc,	// (0x0003451f) settings_code_pane_cp_copy1_ParamLimits

0xe9bc,	// (0x0003451f) settings_code_pane_cp_copy1

0xc78f,	// (0x000322f2) volume_set_pane_copy1

0xe9d0,	// (0x00034533) volume_set_pane_g10_copy1

0xe9d8,	// (0x0003453b) volume_set_pane_g1_copy1

0xe9e0,	// (0x00034543) volume_set_pane_g2_copy1

0xe9e8,	// (0x0003454b) volume_set_pane_g3_copy1

0xe9f0,	// (0x00034553) volume_set_pane_g4_copy1

0xe9f8,	// (0x0003455b) volume_set_pane_g5_copy1

0xea00,	// (0x00034563) volume_set_pane_g6_copy1

0xea08,	// (0x0003456b) volume_set_pane_g7_copy1

0xea10,	// (0x00034573) volume_set_pane_g8_copy1

0xea18,	// (0x0003457b) volume_set_pane_g9_copy1

0xc8b5,	// (0x00032418) bg_set_opt_pane_cp_copy1_ParamLimits

0xc8b5,	// (0x00032418) bg_set_opt_pane_cp_copy1

0xc797,	// (0x000322fa) setting_slider_pane_t1_copy1_ParamLimits

0xc797,	// (0x000322fa) setting_slider_pane_t1_copy1

0xc7b5,	// (0x00032318) setting_slider_pane_t2_copy1_ParamLimits

0xc7b5,	// (0x00032318) setting_slider_pane_t2_copy1

0xc7cf,	// (0x00032332) setting_slider_pane_t3_copy1_ParamLimits

0xc7cf,	// (0x00032332) setting_slider_pane_t3_copy1

0xc7e7,	// (0x0003234a) slider_set_pane_copy1_ParamLimits

0xc7e7,	// (0x0003234a) slider_set_pane_copy1

0xccbf,	// (0x00032822) set_opt_bg_pane_g1_copy2

0xccc7,	// (0x0003282a) set_opt_bg_pane_g2_copy2

0x832c,	// (0x0002de8f) set_opt_bg_pane_g3_copy2

0xccd7,	// (0x0003283a) set_opt_bg_pane_g4_copy2

0xccdf,	// (0x00032842) set_opt_bg_pane_g5_copy2

0xcce7,	// (0x0003284a) set_opt_bg_pane_g6_copy2

0xea20,	// (0x00034583) set_opt_bg_pane_g7_copy2

0x833e,	// (0x0002dea1) set_opt_bg_pane_g8_copy2

0x8348,	// (0x0002deab) set_opt_bg_pane_g9_copy2

0xc7fd,	// (0x00032360) aid_size_touch_slider_mark_copy1_ParamLimits

0xc7fd,	// (0x00032360) aid_size_touch_slider_mark_copy1

0xea28,	// (0x0003458b) slider_set_pane_g1_copy1

0x2b9f,	// (0x00028702) slider_set_pane_g2_copy1

0xbbbb,	// (0x0003171e) slider_set_pane_g3_copy1_ParamLimits

0xbbbb,	// (0x0003171e) slider_set_pane_g3_copy1

0xbbcf,	// (0x00031732) slider_set_pane_g4_copy1_ParamLimits

0xbbcf,	// (0x00031732) slider_set_pane_g4_copy1

0xbbe7,	// (0x0003174a) slider_set_pane_g5_copy1_ParamLimits

0xbbe7,	// (0x0003174a) slider_set_pane_g5_copy1

0xbbbb,	// (0x0003171e) slider_set_pane_g6_copy1_ParamLimits

0xbbbb,	// (0x0003171e) slider_set_pane_g6_copy1

0xc811,	// (0x00032374) slider_set_pane_g7_copy1_ParamLimits

0xc811,	// (0x00032374) slider_set_pane_g7_copy1

0xc859,	// (0x000323bc) bg_set_opt_pane_cp2_copy1

0xea31,	// (0x00034594) setting_slider_graphic_pane_g1_copy1

0xea3a,	// (0x0003459d) setting_slider_graphic_pane_t1_copy1

0xea4a,	// (0x000345ad) setting_slider_graphic_pane_t2_copy1

0xea5a,	// (0x000345bd) slider_set_pane_cp_copy1

0x8394,	// (0x0002def7) input_focus_pane_cp1_copy1

0x839d,	// (0x0002df00) list_set_text_pane_copy1

0x83a5,	// (0x0002df08) setting_text_pane_g1_copy1

0xf3a3,	// (0x00034f06) set_text_pane_t1_copy1

0x8394,	// (0x0002def7) input_focus_pane_cp2_copy1

0x83a5,	// (0x0002df08) setting_code_pane_g1_copy1

0x83ae,	// (0x0002df11) setting_code_pane_t1_copy1

0x83bc,	// (0x0002df1f) list_set_graphic_pane_copy1

0xc859,	// (0x000323bc) bg_set_opt_pane_cp4_copy1

0x080d,	// (0x00026370) list_set_graphic_pane_g1_copy1_ParamLimits

0x080d,	// (0x00026370) list_set_graphic_pane_g1_copy1

0x83d0,	// (0x0002df33) list_set_graphic_pane_g2_copy1

0x0825,	// (0x00026388) list_set_graphic_pane_t1_copy1_ParamLimits

0x0825,	// (0x00026388) list_set_graphic_pane_t1_copy1

0x5491,	// (0x0002aff4) rs_clock_indi_pane_g1

0x83d8,	// (0x0002df3b) rs_clock_indi_pane_t1

0x83e6,	// (0x0002df49) rs_indi_pane

0x83ee,	// (0x0002df51) rs_indi_pane_g1

0x83f7,	// (0x0002df5a) rs_indi_pane_g2

0x8116,	// (0x0002dc79) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00035a1b) rs_indi_pane_g

0x0b02,	// (0x00026665) bg_popup_preview_window_pane_cp03

0x8400,	// (0x0002df63) popup_fep_tooltip_window_t1

0xd694,	// (0x000331f7) popup_note2_window_g2_ParamLimits

0xd694,	// (0x000331f7) popup_note2_window_g2

0x0001,

0xfc58,	// (0x000357bb) popup_note2_window_g_ParamLimits

0xfc58,	// (0x000357bb) popup_note2_window_g

0x6619,	// (0x0002c17c) bg_popup_sub_pane_cp11_ParamLimits

0x6626,	// (0x0002c189) cell_ai3_links_pane_g1_ParamLimits

0x663d,	// (0x0002c1a0) cell_ai3_links_pane_t1

0xf3a3,	// (0x00034f06) set_text_pane_t1_copy1_ParamLimits

0x0a13,	// (0x00026576) cell_graphic_popup_pane_cp2_ParamLimits

0x0a13,	// (0x00026576) cell_graphic_popup_pane_cp2

0xea6a,	// (0x000345cd) cell_graphic_popup_pane_g1_cp2

0xcb35,	// (0x00032698) cell_graphic_popup_pane_g2_cp2

0x8416,	// (0x0002df79) cell_graphic_popup_pane_g3_cp2

0xea72,	// (0x000345d5) cell_graphic_popup_pane_t2_cp2

0xcb46,	// (0x000326a9) grid_highlight_pane_cp3_cp2

0xcf17,	// (0x00032a7a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcc67,	// (0x000327ca) main_tmo_pane_ParamLimits

0xd9e3,	// (0x00033546) popup_tmo_big_image_note_window

0x7b06,	// (0x0002d669) cell_ai5_widget_list_pane

0x7b0e,	// (0x0002d671) cell_ai5_widget_lrg_icon_pane

0xe817,	// (0x0003437a) tmo_note_info_pane_t1_ParamLimits

0xe82c,	// (0x0003438f) tmo_note_info_pane_t2_ParamLimits

0xe843,	// (0x000343a6) tmo_note_info_pane_t3_ParamLimits

0x8093,	// (0x0002dbf6) tmo_note_info_pane_t4_ParamLimits

0x80a5,	// (0x0002dc08) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00035a09) tmo_note_info_pane_t_ParamLimits

0x81c3,	// (0x0002dd26) settings_container_pane_ParamLimits

0xea62,	// (0x000345c5) indicator_popup_pane_cp5

0xea62,	// (0x000345c5) indicator_popup_pane_cp6

0x83bc,	// (0x0002df1f) list_set_graphic_pane_copy1_ParamLimits

0xc845,	// (0x000323a8) bg_popup_window_pane_cp23

0x842c,	// (0x0002df8f) popup_tmo_big_image_note_window_g1

0x8435,	// (0x0002df98) popup_tmo_big_image_note_window_t1

0x8445,	// (0x0002dfa8) popup_tmo_big_image_note_window_t2

0x8455,	// (0x0002dfb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00035a22) popup_tmo_big_image_note_window_t

0x5491,	// (0x0002aff4) cell_ai5_widget_lrg_icon_pane_g1

0x8465,	// (0x0002dfc8) cell_ai5_widget_lrg_icon_pane_t1

0x8473,	// (0x0002dfd6) cell_ai5_widget_list_row_pane_ParamLimits

0x8473,	// (0x0002dfd6) cell_ai5_widget_list_row_pane

0x848a,	// (0x0002dfed) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x848a,	// (0x0002dfed) cell_ai5_widget_list_row_pane_g1

0xea80,	// (0x000345e3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea80,	// (0x000345e3) cell_ai5_widget_list_row_pane_t1

0x84c2,	// (0x0002e025) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x84c2,	// (0x0002e025) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00035a29) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00035a29) cell_ai5_widget_list_row_pane_t

0xc845,	// (0x000323a8) main_fep_vtchi_ss_pane

0x8506,	// (0x0002e069) popup_fep_char_pre_window

0x850e,	// (0x0002e071) popup_fep_ituss_window

0xeac0,	// (0x00034623) popup_fep_vkbss_window

0xeacd,	// (0x00034630) grid_vkbss_keypad_pane_ParamLimits

0xeacd,	// (0x00034630) grid_vkbss_keypad_pane

0x8565,	// (0x0002e0c8) ituss_keypad_pane

0x2bc9,	// (0x0002872c) aid_vkbss_key_offset_ParamLimits

0x2bc9,	// (0x0002872c) aid_vkbss_key_offset

0xc827,	// (0x0003238a) cell_vkbss_key_pane_ParamLimits

0xc827,	// (0x0003238a) cell_vkbss_key_pane

0x2d36,	// (0x00028899) bg_cell_vkbss_key_g1_ParamLimits

0x2d36,	// (0x00028899) bg_cell_vkbss_key_g1

0xeadd,	// (0x00034640) cell_vkbss_key_3p_pane_ParamLimits

0xeadd,	// (0x00034640) cell_vkbss_key_3p_pane

0xeaf7,	// (0x0003465a) cell_vkbss_key_g1_ParamLimits

0xeaf7,	// (0x0003465a) cell_vkbss_key_g1

0xeb11,	// (0x00034674) cell_vkbss_key_t1_ParamLimits

0xeb11,	// (0x00034674) cell_vkbss_key_t1

0x2beb,	// (0x0002874e) cell_ituss_key_pane_ParamLimits

0x2beb,	// (0x0002874e) cell_ituss_key_pane

0x85c7,	// (0x0002e12a) bg_cell_ituss_key_g1_ParamLimits

0x85c7,	// (0x0002e12a) bg_cell_ituss_key_g1

0x85d3,	// (0x0002e136) cell_ituss_key_pane_g1_ParamLimits

0x85d3,	// (0x0002e136) cell_ituss_key_pane_g1

0x2bfc,	// (0x0002875f) cell_ituss_key_pane_g2_ParamLimits

0x2bfc,	// (0x0002875f) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00035a30) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00035a30) cell_ituss_key_pane_g

0x2c28,	// (0x0002878b) cell_ituss_key_t1_ParamLimits

0x2c28,	// (0x0002878b) cell_ituss_key_t1

0x2c62,	// (0x000287c5) cell_ituss_key_t2_ParamLimits

0x2c62,	// (0x000287c5) cell_ituss_key_t2

0x2c93,	// (0x000287f6) cell_ituss_key_t3_ParamLimits

0x2c93,	// (0x000287f6) cell_ituss_key_t3

0x2c62,	// (0x000287c5) cell_ituss_key_t4_ParamLimits

0x2c62,	// (0x000287c5) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x00035a37) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x00035a37) cell_ituss_key_t

0x85f9,	// (0x0002e15c) cell_vkbss_key_3p_pane_g1

0x8601,	// (0x0002e164) cell_vkbss_key_3p_pane_g2

0x8609,	// (0x0002e16c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00035a42) cell_vkbss_key_3p_pane_g

0xc845,	// (0x000323a8) bg_popup_fep_char_preview_window_cp02

0x2cd6,	// (0x00028839) popup_fep_char_pre_window_t1

0xe6b3,	// (0x00034216) main_ai5_sk_pane

0x811f,	// (0x0002dc82) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x812b,	// (0x0002dc8e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5b84,	// (0x0002b6e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8140,	// (0x0002dca3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00035a14) cell_contacts_ai5_widget_pane_g_ParamLimits

0x814c,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcc67,	// (0x000327ca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb3c,	// (0x0003469f) main_ai5_sk_pane_g1

0xb6c1,	// (0x00031224) popup_query_code_window_g1

0x8524,	// (0x0002e087) popup_fep_vkb_icf_pane

0x8543,	// (0x0002e0a6) popup_fep_vtchi_icf_pane

0x861a,	// (0x0002e17d) bg_icf_pane

0x8626,	// (0x0002e189) list_vkb_icf_pane

0x8635,	// (0x0002e198) bg_icf_pane_cp01

0x8648,	// (0x0002e1ab) vtchi_icf_list_pane

0x8658,	// (0x0002e1bb) list_vkb_icf_pane_t1_ParamLimits

0x8658,	// (0x0002e1bb) list_vkb_icf_pane_t1

0x866f,	// (0x0002e1d2) vtchi_icf_list_pane_t1_ParamLimits

0x866f,	// (0x0002e1d2) vtchi_icf_list_pane_t1

0x850e,	// (0x0002e071) popup_fep_ituss_window_ParamLimits

0x8543,	// (0x0002e0a6) popup_fep_vtchi_icf_pane_ParamLimits

0x8565,	// (0x0002e0c8) ituss_keypad_pane_ParamLimits

0x2bbd,	// (0x00028720) ituss_sks_pane

0x861a,	// (0x0002e17d) bg_icf_pane_ParamLimits

0xeab1,	// (0x00034614) icf_edit_indi_pane_ParamLimits

0xeab1,	// (0x00034614) icf_edit_indi_pane

0x8626,	// (0x0002e189) list_vkb_icf_pane_ParamLimits

0x8635,	// (0x0002e198) bg_icf_pane_cp01_ParamLimits

0x84f9,	// (0x0002e05c) icf_edit_indi_pane_cp01_ParamLimits

0x84f9,	// (0x0002e05c) icf_edit_indi_pane_cp01

0x8650,	// (0x0002e1b3) vtchi_query_pane

0x5701,	// (0x0002b264) icf_edit_indi_pane_g1_ParamLimits

0x5701,	// (0x0002b264) icf_edit_indi_pane_g1

0x86e4,	// (0x0002e247) icf_edit_indi_pane_g2_ParamLimits

0x86e4,	// (0x0002e247) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00035a5a) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00035a5a) icf_edit_indi_pane_g

0x86f3,	// (0x0002e256) icf_edit_indi_pane_t1

0x868d,	// (0x0002e1f0) bg_input_focus_pane_cp042

0xcba9,	// (0x0003270c) vtchi_button_pane

0x8696,	// (0x0002e1f9) vtchi_query_pane_t1

0x86a4,	// (0x0002e207) vtchi_query_pane_t2

0x86b2,	// (0x0002e215) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00035a49) vtchi_query_pane_t

0xc845,	// (0x000323a8) bg_button_pane_cp13

0x86c0,	// (0x0002e223) vtchi_button_pane_g1

0x2ce5,	// (0x00028848) ituss_sks_pane_g1

0x2cf0,	// (0x00028853) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x00035a50) ituss_sks_pane_g

0x86c8,	// (0x0002e22b) ituss_sks_pane_t1

0x86d6,	// (0x0002e239) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x00035a55) ituss_sks_pane_t

0x4f14,	// (0x0002aa77) indicator_nsta_pane_cp_g1

0x4f1c,	// (0x0002aa7f) indicator_nsta_pane_cp_g2

0x4f24,	// (0x0002aa87) indicator_nsta_pane_cp_g3

0x4f14,	// (0x0002aa77) indicator_nsta_pane_cp_g4

0x4f1c,	// (0x0002aa7f) indicator_nsta_pane_cp_g5

0x4f24,	// (0x0002aa87) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00035605) indicator_nsta_pane_cp_g

0xe490,	// (0x00033ff3) cell_graphic2_pane_t2_ParamLimits

0xe490,	// (0x00033ff3) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x0003590b) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x0003590b) cell_graphic2_pane_t

0xe4c9,	// (0x0003402c) cell_graphic2_control_pane_t1

0xa3dd,	// (0x0002ff40) signal_pane_g3_ParamLimits

0xa3dd,	// (0x0002ff40) signal_pane_g3

0xa3f1,	// (0x0002ff54) signal_pane_g4_ParamLimits

0xa3f1,	// (0x0002ff54) signal_pane_g4

0x84d4,	// (0x0002e037) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x84d4,	// (0x0002e037) cell_ai5_widget_list_row_pane_t3

0x85e7,	// (0x0002e14a) cell_ituss_key_pane_t1_ParamLimits

0x85e7,	// (0x0002e14a) cell_ituss_key_pane_t1

0x2fcc,	// (0x00028b2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x2fcc,	// (0x00028b2f) form_field_data_wide_pane_vc_t2

0x2fe0,	// (0x00028b43) form_field_data_wide_pane_vc_t3_ParamLimits

0x2fe0,	// (0x00028b43) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00035351) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00035351) form_field_data_wide_pane_vc_t

0x4bdc,	// (0x0002a73f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4bdc,	// (0x0002a73f) form_field_slider_wide_pane_vc_t3

0x4cba,	// (0x0002a81d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4cba,	// (0x0002a81d) form_field_popup_wide_pane_vc_t2

0x4cd1,	// (0x0002a834) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4cd1,	// (0x0002a834) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x000355f4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x000355f4) form_field_popup_wide_pane_vc_t

0xc62c,	// (0x0003218f) aid_fshwr2_btn_pane_ParamLimits

0xc63e,	// (0x000321a1) aid_fshwr2_syb_pane_ParamLimits

0xc650,	// (0x000321b3) aid_fshwr2_txt_pane_ParamLimits

0xcc67,	// (0x000327ca) fshwr2_bg_pane_ParamLimits

0xc65f,	// (0x000321c2) fshwr2_func_candi_pane_ParamLimits

0xc67e,	// (0x000321e1) fshwr2_hwr_syb_pane_ParamLimits

0xc699,	// (0x000321fc) fshwr2_icf_pane_ParamLimits

0xf098,	// (0x00034bfb) list_double_graphic_pane_vc_g4_ParamLimits

0xf098,	// (0x00034bfb) list_double_graphic_pane_vc_g4

0x2c1c,	// (0x0002877f) cell_ituss_key_pane_g3_ParamLimits

0x2c1c,	// (0x0002877f) cell_ituss_key_pane_g3

0x2cc4,	// (0x00028827) cell_ituss_key_t5_ParamLimits

0x2cc4,	// (0x00028827) cell_ituss_key_t5

0xeac0,	// (0x00034623) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
