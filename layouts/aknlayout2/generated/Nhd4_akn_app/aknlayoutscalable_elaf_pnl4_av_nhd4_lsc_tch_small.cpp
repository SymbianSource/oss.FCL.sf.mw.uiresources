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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00025b85 };

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
0x98b7,	// (0x0002f43c) Screen

0x98c3,	// (0x0002f448) application_window_ParamLimits

0x98c3,	// (0x0002f448) application_window

0xc857,	// (0x000323dc) screen_g1

0x98fb,	// (0x0002f480) area_bottom_pane_ParamLimits

0x98fb,	// (0x0002f480) area_bottom_pane

0xf3df,	// (0x00034f64) area_top_pane_ParamLimits

0xf3df,	// (0x00034f64) area_top_pane

0xf473,	// (0x00034ff8) main_pane_ParamLimits

0xf473,	// (0x00034ff8) main_pane

0xc861,	// (0x000323e6) misc_graphics

0xb0a3,	// (0x00030c28) battery_pane_ParamLimits

0xb0a3,	// (0x00030c28) battery_pane

0x370e,	// (0x00029293) bg_status_flat_pane_g8

0x3716,	// (0x0002929b) bg_status_flat_pane_g9

0x1759,	// (0x000272de) context_pane_ParamLimits

0x1759,	// (0x000272de) context_pane

0xb20e,	// (0x00030d93) navi_pane_ParamLimits

0xb20e,	// (0x00030d93) navi_pane

0xb28c,	// (0x00030e11) signal_pane_ParamLimits

0xb28c,	// (0x00030e11) signal_pane

0x0008,

0xf85e,	// (0x000353e3) bg_status_flat_pane_g

0xb31c,	// (0x00030ea1) status_pane_g1_ParamLimits

0xb31c,	// (0x00030ea1) status_pane_g1

0xb332,	// (0x00030eb7) status_pane_g2_ParamLimits

0xb332,	// (0x00030eb7) status_pane_g2

0x2d3b,	// (0x000288c0) status_pane_g3_ParamLimits

0x2d3b,	// (0x000288c0) status_pane_g3

0x0004,

0xf791,	// (0x00035316) status_pane_g_ParamLimits

0xf791,	// (0x00035316) status_pane_g

0xb33e,	// (0x00030ec3) title_pane_ParamLimits

0xb33e,	// (0x00030ec3) title_pane

0xb3a1,	// (0x00030f26) uni_indicator_pane_ParamLimits

0xb3a1,	// (0x00030f26) uni_indicator_pane

0x100d,	// (0x00026b92) bg_list_pane_ParamLimits

0x100d,	// (0x00026b92) bg_list_pane

0xec81,	// (0x00034806) find_pane

0xa873,	// (0x000303f8) listscroll_app_pane_ParamLimits

0xa873,	// (0x000303f8) listscroll_app_pane

0x103e,	// (0x00026bc3) listscroll_form_pane

0xec89,	// (0x0003480e) listscroll_gen_pane_ParamLimits

0xec89,	// (0x0003480e) listscroll_gen_pane

0x1046,	// (0x00026bcb) listscroll_set_pane

0x4272,	// (0x00029df7) main_idle_act_pane

0x0af6,	// (0x0002667b) main_idle_trad_pane

0x0af6,	// (0x0002667b) main_list_empty_pane

0x1060,	// (0x00026be5) main_midp_pane

0x106c,	// (0x00026bf1) main_pane_g1_ParamLimits

0x106c,	// (0x00026bf1) main_pane_g1

0xa887,	// (0x0003040c) popup_ai_message_window_ParamLimits

0xa887,	// (0x0003040c) popup_ai_message_window

0xa938,	// (0x000304bd) popup_fep_china_uni_window_ParamLimits

0xa938,	// (0x000304bd) popup_fep_china_uni_window

0xa992,	// (0x00030517) popup_fep_japan_candidate_window_ParamLimits

0xa992,	// (0x00030517) popup_fep_japan_candidate_window

0xa9b0,	// (0x00030535) popup_fep_japan_predictive_window_ParamLimits

0xa9b0,	// (0x00030535) popup_fep_japan_predictive_window

0xa9c2,	// (0x00030547) popup_find_window

0xa9df,	// (0x00030564) popup_grid_graphic_window_ParamLimits

0xa9df,	// (0x00030564) popup_grid_graphic_window

0xaa7d,	// (0x00030602) popup_large_graphic_colour_window

0xaaa3,	// (0x00030628) popup_menu_window_ParamLimits

0xaaa3,	// (0x00030628) popup_menu_window

0xac75,	// (0x000307fa) popup_note_image_window

0xac3b,	// (0x000307c0) popup_note_wait_window_ParamLimits

0xac3b,	// (0x000307c0) popup_note_wait_window

0xac8d,	// (0x00030812) popup_note_window_ParamLimits

0xac8d,	// (0x00030812) popup_note_window

0xad3c,	// (0x000308c1) popup_query_code_window_ParamLimits

0xad3c,	// (0x000308c1) popup_query_code_window

0xad76,	// (0x000308fb) popup_query_data_code_window_ParamLimits

0xad76,	// (0x000308fb) popup_query_data_code_window

0xad93,	// (0x00030918) popup_query_data_window_ParamLimits

0xad93,	// (0x00030918) popup_query_data_window

0xae15,	// (0x0003099a) popup_query_sat_info_window_ParamLimits

0xae15,	// (0x0003099a) popup_query_sat_info_window

0xaeac,	// (0x00030a31) popup_snote_single_graphic_window_ParamLimits

0xaeac,	// (0x00030a31) popup_snote_single_graphic_window

0xaeac,	// (0x00030a31) popup_snote_single_text_window_ParamLimits

0xaeac,	// (0x00030a31) popup_snote_single_text_window

0x14d0,	// (0x00027055) popup_sub_window_general

0xb009,	// (0x00030b8e) popup_window_general_ParamLimits

0xb009,	// (0x00030b8e) popup_window_general

0x1615,	// (0x0002719a) power_save_pane

0xa6d1,	// (0x00030256) control_pane_g1_ParamLimits

0xa6d1,	// (0x00030256) control_pane_g1

0xa6fa,	// (0x0003027f) control_pane_g2_ParamLimits

0xa6fa,	// (0x0003027f) control_pane_g2

0x0eb0,	// (0x00026a35) control_pane_g3_ParamLimits

0x0eb0,	// (0x00026a35) control_pane_g3

0x0007,

0xf779,	// (0x000352fe) control_pane_g_ParamLimits

0xf779,	// (0x000352fe) control_pane_g

0xa762,	// (0x000302e7) control_pane_t1_ParamLimits

0xa762,	// (0x000302e7) control_pane_t1

0xa7c8,	// (0x0003034d) control_pane_t2_ParamLimits

0xa7c8,	// (0x0003034d) control_pane_t2

0x0002,

0xf78a,	// (0x0003530f) control_pane_t_ParamLimits

0xf78a,	// (0x0003530f) control_pane_t

0xa62a,	// (0x000301af) navi_navi_volume_pane_cp1

0xa632,	// (0x000301b7) status_small_icon_pane

0x0d97,	// (0x0002691c) status_small_pane_g1_ParamLimits

0x0d97,	// (0x0002691c) status_small_pane_g1

0xa63a,	// (0x000301bf) status_small_pane_g2_ParamLimits

0xa63a,	// (0x000301bf) status_small_pane_g2

0xa646,	// (0x000301cb) status_small_pane_g3_ParamLimits

0xa646,	// (0x000301cb) status_small_pane_g3

0xa652,	// (0x000301d7) status_small_pane_g4_ParamLimits

0xa652,	// (0x000301d7) status_small_pane_g4

0xa65e,	// (0x000301e3) status_small_pane_g5_ParamLimits

0xa65e,	// (0x000301e3) status_small_pane_g5

0xa66c,	// (0x000301f1) status_small_pane_g6_ParamLimits

0xa66c,	// (0x000301f1) status_small_pane_g6

0x0007,

0xf768,	// (0x000352ed) status_small_pane_g_ParamLimits

0xf768,	// (0x000352ed) status_small_pane_g

0xa69b,	// (0x00030220) status_small_pane_t1

0xa6bd,	// (0x00030242) status_small_wait_pane_ParamLimits

0xa6bd,	// (0x00030242) status_small_wait_pane

0xa392,	// (0x0002ff17) aid_levels_signal_ParamLimits

0xa392,	// (0x0002ff17) aid_levels_signal

0xa3aa,	// (0x0002ff2f) signal_pane_g1_ParamLimits

0xa3aa,	// (0x0002ff2f) signal_pane_g1

0xa3c5,	// (0x0002ff4a) signal_pane_g2_ParamLimits

0xa3c5,	// (0x0002ff4a) signal_pane_g2

0x0003,

0xf6f9,	// (0x0003527e) signal_pane_g_ParamLimits

0xf6f9,	// (0x0003527e) signal_pane_g

0xd0fa,	// (0x00032c7f) context_pane_g1

0x9af9,	// (0x0002f67e) title_pane_g1

0x9b30,	// (0x0002f6b5) title_pane_t1

0xc877,	// (0x000323fc) title_pane_t2

0xc89d,	// (0x00032422) title_pane_t3

0x0002,

0xf557,	// (0x000350dc) title_pane_t

0xb3c9,	// (0x00030f4e) aid_levels_battery_ParamLimits

0xb3c9,	// (0x00030f4e) aid_levels_battery

0xb3e5,	// (0x00030f6a) battery_pane_g1_ParamLimits

0xb3e5,	// (0x00030f6a) battery_pane_g1

0xb402,	// (0x00030f87) battery_pane_g2_ParamLimits

0xb402,	// (0x00030f87) battery_pane_g2

0x0001,

0xf79c,	// (0x00035321) battery_pane_g_ParamLimits

0xf79c,	// (0x00035321) battery_pane_g

0xba78,	// (0x000315fd) uni_indicator_pane_g1

0xba8e,	// (0x00031613) uni_indicator_pane_g2

0xbaa4,	// (0x00031629) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x0003548b) uni_indicator_pane_g

0x0968,	// (0x000264ed) navi_icon_pane_ParamLimits

0x0968,	// (0x000264ed) navi_icon_pane

0x08b2,	// (0x00026437) navi_midp_pane

0x0984,	// (0x00026509) navi_navi_pane

0x098e,	// (0x00026513) navi_text_pane_ParamLimits

0x098e,	// (0x00026513) navi_text_pane

0xc857,	// (0x000323dc) status_small_wait_pane_g1

0xcaee,	// (0x00032673) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00035486) status_small_wait_pane_g

0xb9d1,	// (0x00031556) navi_navi_icon_text_pane

0x3d61,	// (0x000298e6) navi_navi_pane_g1_ParamLimits

0x3d61,	// (0x000298e6) navi_navi_pane_g1

0x3d73,	// (0x000298f8) navi_navi_pane_g2_ParamLimits

0x3d73,	// (0x000298f8) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00035454) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00035454) navi_navi_pane_g

0x3d85,	// (0x0002990a) navi_navi_tabs_pane

0x3d8e,	// (0x00029913) navi_navi_text_pane

0xb9d1,	// (0x00031556) navi_navi_volume_pane

0x3d35,	// (0x000298ba) navi_text_pane_t1

0x3d29,	// (0x000298ae) navi_icon_pane_g1

0x3c7c,	// (0x00029801) navi_navi_text_pane_t1

0xb9bd,	// (0x00031542) navi_navi_volume_pane_g1

0x1bc7,	// (0x0002774c) volume_small_pane

0x3be2,	// (0x00029767) navi_navi_icon_text_pane_g1

0xb921,	// (0x000314a6) navi_navi_icon_text_pane_t1

0x0984,	// (0x00026509) navi_tabs_2_long_pane

0x0984,	// (0x00026509) navi_tabs_2_pane

0x0984,	// (0x00026509) navi_tabs_3_long_pane

0x0984,	// (0x00026509) navi_tabs_3_pane

0x0984,	// (0x00026509) navi_tabs_4_pane

0x1b9f,	// (0x00027724) tabs_2_active_pane_ParamLimits

0x1b9f,	// (0x00027724) tabs_2_active_pane

0x1baf,	// (0x00027734) tabs_2_passive_pane_ParamLimits

0x1baf,	// (0x00027734) tabs_2_passive_pane

0x1b6d,	// (0x000276f2) tabs_3_active_pane_ParamLimits

0x1b6d,	// (0x000276f2) tabs_3_active_pane

0x1b7d,	// (0x00027702) tabs_3_passive_pane_ParamLimits

0x1b7d,	// (0x00027702) tabs_3_passive_pane

0x1b8e,	// (0x00027713) tabs_3_passive_pane_cp_ParamLimits

0x1b8e,	// (0x00027713) tabs_3_passive_pane_cp

0x1b29,	// (0x000276ae) tabs_4_active_pane_ParamLimits

0x1b29,	// (0x000276ae) tabs_4_active_pane

0x1b3a,	// (0x000276bf) tabs_4_passive_pane_ParamLimits

0x1b3a,	// (0x000276bf) tabs_4_passive_pane

0x1b4b,	// (0x000276d0) tabs_4_passive_pane_cp_ParamLimits

0x1b4b,	// (0x000276d0) tabs_4_passive_pane_cp

0x1b5c,	// (0x000276e1) tabs_4_passive_pane_cp2_ParamLimits

0x1b5c,	// (0x000276e1) tabs_4_passive_pane_cp2

0x1b05,	// (0x0002768a) tabs_2_long_active_pane_ParamLimits

0x1b05,	// (0x0002768a) tabs_2_long_active_pane

0x1b17,	// (0x0002769c) tabs_2_long_passive_pane_ParamLimits

0x1b17,	// (0x0002769c) tabs_2_long_passive_pane

0x1ac0,	// (0x00027645) tabs_3_long_active_pane_ParamLimits

0x1ac0,	// (0x00027645) tabs_3_long_active_pane

0x1ad9,	// (0x0002765e) tabs_3_long_passive_pane_ParamLimits

0x1ad9,	// (0x0002765e) tabs_3_long_passive_pane

0x1aec,	// (0x00027671) tabs_3_long_passive_pane_cp_ParamLimits

0x1aec,	// (0x00027671) tabs_3_long_passive_pane_cp

0x1a66,	// (0x000275eb) volume_small_pane_g1

0x1a6f,	// (0x000275f4) volume_small_pane_g2

0x1a78,	// (0x000275fd) volume_small_pane_g3

0x1a81,	// (0x00027606) volume_small_pane_g4

0x1a8a,	// (0x0002760f) volume_small_pane_g5

0x1a93,	// (0x00027618) volume_small_pane_g6

0x1a9c,	// (0x00027621) volume_small_pane_g7

0x1aa5,	// (0x0002762a) volume_small_pane_g8

0x1aae,	// (0x00027633) volume_small_pane_g9

0x1ab7,	// (0x0002763c) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00035420) volume_small_pane_g

0xc8af,	// (0x00032434) bg_active_tab_pane_cp2_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp2

0x9bbc,	// (0x0002f741) tabs_3_active_pane_g1

0x9bc4,	// (0x0002f749) tabs_3_active_pane_t1

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp2_ParamLimits

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp2

0x9bbc,	// (0x0002f741) tabs_3_passive_pane_g1

0x9bc4,	// (0x0002f749) tabs_3_passive_pane_t1

0xc8af,	// (0x00032434) bg_active_tab_pane_cp3_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp3

0x9bd6,	// (0x0002f75b) tabs_4_active_pane_g1

0x9bde,	// (0x0002f763) tabs_4_active_pane_t1

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp3_ParamLimits

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp3

0x9bd6,	// (0x0002f75b) tabs_4_1_passive_pane_g1

0x9bde,	// (0x0002f763) tabs_4_1_passive_pane_t1

0x1060,	// (0x00026be5) list_highlight_pane_cp2

0xbc66,	// (0x000317eb) list_set_pane_ParamLimits

0xbc66,	// (0x000317eb) list_set_pane

0xbd00,	// (0x00031885) main_pane_set_t1_ParamLimits

0xbd00,	// (0x00031885) main_pane_set_t1

0xbd20,	// (0x000318a5) main_pane_set_t2_ParamLimits

0xbd20,	// (0x000318a5) main_pane_set_t2

0xbd34,	// (0x000318b9) main_pane_set_t3_ParamLimits

0xbd34,	// (0x000318b9) main_pane_set_t3

0xbd46,	// (0x000318cb) main_pane_set_t4_ParamLimits

0xbd46,	// (0x000318cb) main_pane_set_t4

0x0003,

0xf96b,	// (0x000354f0) main_pane_set_t_ParamLimits

0xf96b,	// (0x000354f0) main_pane_set_t

0xbd58,	// (0x000318dd) setting_code_pane

0xbd62,	// (0x000318e7) setting_slider_graphic_pane

0xbd62,	// (0x000318e7) setting_slider_pane

0xbd62,	// (0x000318e7) setting_text_pane

0xbd62,	// (0x000318e7) setting_volume_pane

0x9bf0,	// (0x0002f775) volume_set_pane

0xc8bd,	// (0x00032442) bg_set_opt_pane_cp

0x9bf8,	// (0x0002f77d) setting_slider_pane_t1

0x9c11,	// (0x0002f796) setting_slider_pane_t2

0x9c2b,	// (0x0002f7b0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000350e3) setting_slider_pane_t

0x9c43,	// (0x0002f7c8) slider_set_pane

0xc861,	// (0x000323e6) bg_set_opt_pane_cp2

0xc8cb,	// (0x00032450) setting_slider_graphic_pane_g1

0x9c59,	// (0x0002f7de) setting_slider_graphic_pane_t1

0x9c69,	// (0x0002f7ee) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000350ea) setting_slider_graphic_pane_t

0x9c79,	// (0x0002f7fe) slider_set_pane_cp

0xc861,	// (0x000323e6) input_focus_pane_cp1

0x4259,	// (0x00029dde) list_set_text_pane

0xc857,	// (0x000323dc) setting_text_pane_g1

0xc861,	// (0x000323e6) input_focus_pane_cp2

0xc857,	// (0x000323dc) setting_code_pane_g1

0xc8d4,	// (0x00032459) setting_code_pane_t1

0xeb45,	// (0x000346ca) set_text_pane_t1_ParamLimits

0xeb45,	// (0x000346ca) set_text_pane_t1

0xccc7,	// (0x0003284c) set_opt_bg_pane_g1

0xcccf,	// (0x00032854) set_opt_bg_pane_g2

0xbc1b,	// (0x000317a0) set_opt_bg_pane_g3

0xccdf,	// (0x00032864) set_opt_bg_pane_g4

0xcce7,	// (0x0003286c) set_opt_bg_pane_g5

0xccef,	// (0x00032874) set_opt_bg_pane_g6

0xbc25,	// (0x000317aa) set_opt_bg_pane_g7

0xbc2d,	// (0x000317b2) set_opt_bg_pane_g8

0xbc37,	// (0x000317bc) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x000354dd) set_opt_bg_pane_g

0xbbb6,	// (0x0003173b) slider_set_pane_g1

0x1c34,	// (0x000277b9) slider_set_pane_g2

0x0006,

0xf949,	// (0x000354ce) slider_set_pane_g

0xbadb,	// (0x00031660) volume_set_pane_g1

0xbae3,	// (0x00031668) volume_set_pane_g2

0xbaeb,	// (0x00031670) volume_set_pane_g3

0xbaf3,	// (0x00031678) volume_set_pane_g4

0xbafb,	// (0x00031680) volume_set_pane_g5

0xbb03,	// (0x00031688) volume_set_pane_g6

0xbb0b,	// (0x00031690) volume_set_pane_g7

0xbb13,	// (0x00031698) volume_set_pane_g8

0xbb1b,	// (0x000316a0) volume_set_pane_g9

0xbb23,	// (0x000316a8) volume_set_pane_g10

0x0009,

0xf921,	// (0x000354a6) volume_set_pane_g

0x9c81,	// (0x0002f806) indicator_pane_ParamLimits

0x9c81,	// (0x0002f806) indicator_pane

0x9ca9,	// (0x0002f82e) main_idle_pane_g2_ParamLimits

0x9ca9,	// (0x0002f82e) main_idle_pane_g2

0x9ce1,	// (0x0002f866) main_pane_idle_g1_ParamLimits

0x9ce1,	// (0x0002f866) main_pane_idle_g1

0xc8e2,	// (0x00032467) popup_clock_digital_analogue_window_ParamLimits

0xc8e2,	// (0x00032467) popup_clock_digital_analogue_window

0x9d08,	// (0x0002f88d) soft_indicator_pane_ParamLimits

0x9d08,	// (0x0002f88d) soft_indicator_pane

0x9d2c,	// (0x0002f8b1) wallpaper_pane_ParamLimits

0x9d2c,	// (0x0002f8b1) wallpaper_pane

0xc857,	// (0x000323dc) wallpaper_pane_g1

0x9d3e,	// (0x0002f8c3) indicator_pane_g1_ParamLimits

0x9d3e,	// (0x0002f8c3) indicator_pane_g1

0x465d,	// (0x0002a1e2) navi_navi_icon_text_pane_srt_g1

0xc910,	// (0x00032495) soft_indicator_pane_t1

0xc92a,	// (0x000324af) aid_ps_area_pane

0x9d54,	// (0x0002f8d9) aid_ps_clock_pane

0xc93b,	// (0x000324c0) aid_ps_indicator_pane

0xc947,	// (0x000324cc) indicator_ps_pane_ParamLimits

0xc947,	// (0x000324cc) indicator_ps_pane

0xc956,	// (0x000324db) power_save_pane_g1_ParamLimits

0xc956,	// (0x000324db) power_save_pane_g1

0xc962,	// (0x000324e7) power_save_pane_g2_ParamLimits

0xc962,	// (0x000324e7) power_save_pane_g2

0xf3bf,	// (0x00034f44) aid_navinavi_width_pane

0xc92a,	// (0x000324af) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000350ef) power_save_pane_g_ParamLimits

0xf56a,	// (0x000350ef) power_save_pane_g

0xc970,	// (0x000324f5) power_save_pane_t1_ParamLimits

0xc970,	// (0x000324f5) power_save_pane_t1

0x9d54,	// (0x0002f8d9) aid_ps_clock_pane_ParamLimits

0xc93b,	// (0x000324c0) aid_ps_indicator_pane_ParamLimits

0xc982,	// (0x00032507) power_save_pane_t4_ParamLimits

0xc982,	// (0x00032507) power_save_pane_t4

0x0001,

0xf56f,	// (0x000350f4) power_save_pane_t_ParamLimits

0xf56f,	// (0x000350f4) power_save_pane_t

0xc9ac,	// (0x00032531) power_save_t3_ParamLimits

0xc9ac,	// (0x00032531) power_save_t3

0xc997,	// (0x0003251c) power_save_t2_ParamLimits

0xc997,	// (0x0003251c) power_save_t2

0xc9c1,	// (0x00032546) indicator_ps_pane_g1

0x9d62,	// (0x0002f8e7) ai_gene_pane_ParamLimits

0x9d62,	// (0x0002f8e7) ai_gene_pane

0x9d79,	// (0x0002f8fe) ai_links_pane_ParamLimits

0x9d79,	// (0x0002f8fe) ai_links_pane

0x9d91,	// (0x0002f916) indicator_pane_cp1_ParamLimits

0x9d91,	// (0x0002f916) indicator_pane_cp1

0x9da0,	// (0x0002f925) main_pane_idle_g1_cp_ParamLimits

0x9da0,	// (0x0002f925) main_pane_idle_g1_cp

0x9db8,	// (0x0002f93d) popup_ai_links_title_window

0x9dc1,	// (0x0002f946) soft_indicator_pane_cp1_ParamLimits

0x9dc1,	// (0x0002f946) soft_indicator_pane_cp1

0x4020,	// (0x00029ba5) ai_links_pane_g1

0x4029,	// (0x00029bae) grid_ai_links_pane

0xba6f,	// (0x000315f4) ai_gene_pane_1

0x400e,	// (0x00029b93) ai_gene_pane_2

0x4017,	// (0x00029b9c) list_highlight_pane_cp4

0xba4b,	// (0x000315d0) cell_ai_link_pane_ParamLimits

0xba4b,	// (0x000315d0) cell_ai_link_pane

0x3fdf,	// (0x00029b64) cell_ai_link_pane_g1

0xcaee,	// (0x00032673) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00035481) cell_ai_link_pane_g

0xc861,	// (0x000323e6) grid_highlight_cp2

0xc861,	// (0x000323e6) bg_popup_sub_pane_cp1

0xc9d8,	// (0x0003255d) popup_ai_links_title_window_t1

0x3f2f,	// (0x00029ab4) ai_gene_pane_1_g1_ParamLimits

0x3f2f,	// (0x00029ab4) ai_gene_pane_1_g1

0x3f3b,	// (0x00029ac0) ai_gene_pane_1_g2_ParamLimits

0x3f3b,	// (0x00029ac0) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00035477) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00035477) ai_gene_pane_1_g

0x3f48,	// (0x00029acd) ai_gene_pane_1_t1_ParamLimits

0x3f48,	// (0x00029acd) ai_gene_pane_1_t1

0x3f7c,	// (0x00029b01) grid_ai_soft_ind_pane

0x3f1a,	// (0x00029a9f) ai_gene_pane_2_t1_ParamLimits

0x3f1a,	// (0x00029a9f) ai_gene_pane_2_t1

0x9dd5,	// (0x0002f95a) main_pane_empty_t1_ParamLimits

0x9dd5,	// (0x0002f95a) main_pane_empty_t1

0x9ded,	// (0x0002f972) main_pane_empty_t2_ParamLimits

0x9ded,	// (0x0002f972) main_pane_empty_t2

0x9e02,	// (0x0002f987) main_pane_empty_t3_ParamLimits

0x9e02,	// (0x0002f987) main_pane_empty_t3

0x9e14,	// (0x0002f999) main_pane_empty_t4_ParamLimits

0x9e14,	// (0x0002f999) main_pane_empty_t4

0x9e26,	// (0x0002f9ab) main_pane_empty_t5_ParamLimits

0x9e26,	// (0x0002f9ab) main_pane_empty_t5

0x0004,

0xf574,	// (0x000350f9) main_pane_empty_t_ParamLimits

0xf574,	// (0x000350f9) main_pane_empty_t

0xcd18,	// (0x0003289d) bg_popup_window_pane_ParamLimits

0xcd18,	// (0x0003289d) bg_popup_window_pane

0xb9c5,	// (0x0003154a) find_popup_pane_cp2_ParamLimits

0xb9c5,	// (0x0003154a) find_popup_pane_cp2

0x3c96,	// (0x0002981b) heading_pane_ParamLimits

0x3c96,	// (0x0002981b) heading_pane

0xc861,	// (0x000323e6) bg_popup_sub_pane

0xb93e,	// (0x000314c3) bg_popup_window_pane_g1_ParamLimits

0xb93e,	// (0x000314c3) bg_popup_window_pane_g1

0xb94d,	// (0x000314d2) bg_popup_window_pane_g2_ParamLimits

0xb94d,	// (0x000314d2) bg_popup_window_pane_g2

0xb959,	// (0x000314de) bg_popup_window_pane_g3_ParamLimits

0xb959,	// (0x000314de) bg_popup_window_pane_g3

0xb965,	// (0x000314ea) bg_popup_window_pane_g4_ParamLimits

0xb965,	// (0x000314ea) bg_popup_window_pane_g4

0xb974,	// (0x000314f9) bg_popup_window_pane_g5_ParamLimits

0xb974,	// (0x000314f9) bg_popup_window_pane_g5

0xb984,	// (0x00031509) bg_popup_window_pane_g6_ParamLimits

0xb984,	// (0x00031509) bg_popup_window_pane_g6

0xb990,	// (0x00031515) bg_popup_window_pane_g7_ParamLimits

0xb990,	// (0x00031515) bg_popup_window_pane_g7

0xb99f,	// (0x00031524) bg_popup_window_pane_g8_ParamLimits

0xb99f,	// (0x00031524) bg_popup_window_pane_g8

0xb9ae,	// (0x00031533) bg_popup_window_pane_g9_ParamLimits

0xb9ae,	// (0x00031533) bg_popup_window_pane_g9

0x3c70,	// (0x000297f5) bg_popup_window_pane_g10_ParamLimits

0x3c70,	// (0x000297f5) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x0003543f) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x0003543f) bg_popup_window_pane_g

0x3b99,	// (0x0002971e) bg_popup_heading_pane_ParamLimits

0x3b99,	// (0x0002971e) bg_popup_heading_pane

0x1cbc,	// (0x00027841) tabs_4_passive_pane_cp_srt_ParamLimits

0x1cbc,	// (0x00027841) tabs_4_passive_pane_cp_srt

0x1cce,	// (0x00027853) tabs_4_passive_pane_srt_ParamLimits

0x3bad,	// (0x00029732) heading_pane_g2

0x1cce,	// (0x00027853) tabs_4_passive_pane_srt

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp3_srt

0x3bb5,	// (0x0002973a) heading_pane_t1_ParamLimits

0x3bb5,	// (0x0002973a) heading_pane_t1

0x3bcc,	// (0x00029751) heading_pane_t2_ParamLimits

0x3bcc,	// (0x00029751) heading_pane_t2

0x0001,

0xf8b5,	// (0x0003543a) heading_pane_t_ParamLimits

0xf8b5,	// (0x0003543a) heading_pane_t

0x36d6,	// (0x0002925b) bg_popup_heading_pane_g1

0x3785,	// (0x0002930a) bg_popup_heading_pane_g2

0x378f,	// (0x00029314) bg_popup_heading_pane_g3

0x3799,	// (0x0002931e) bg_popup_heading_pane_g4

0x37a3,	// (0x00029328) bg_popup_heading_pane_g5

0x37ad,	// (0x00029332) bg_popup_heading_pane_g6

0x37b5,	// (0x0002933a) bg_popup_heading_pane_g7

0x37bd,	// (0x00029342) bg_popup_heading_pane_g8

0x37c7,	// (0x0002934c) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x000353f6) bg_popup_heading_pane_g

0x2ec3,	// (0x00028a48) bg_popup_sub_pane_g1

0x2ecb,	// (0x00028a50) bg_popup_sub_pane_g2

0x2ed3,	// (0x00028a58) bg_popup_sub_pane_g3

0x2edb,	// (0x00028a60) bg_popup_sub_pane_g4

0x2ee3,	// (0x00028a68) bg_popup_sub_pane_g5

0x2eeb,	// (0x00028a70) bg_popup_sub_pane_g6

0x2ef3,	// (0x00028a78) bg_popup_sub_pane_g7

0x2efb,	// (0x00028a80) bg_popup_sub_pane_g8

0x2f03,	// (0x00028a88) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x000353d0) bg_popup_sub_pane_g

0xc8af,	// (0x00032434) bg_popup_window_pane_cp5_ParamLimits

0xc8af,	// (0x00032434) bg_popup_window_pane_cp5

0xc9f5,	// (0x0003257a) popup_note_window_g1_ParamLimits

0xc9f5,	// (0x0003257a) popup_note_window_g1

0xca01,	// (0x00032586) popup_note_window_t1_ParamLimits

0xca01,	// (0x00032586) popup_note_window_t1

0xca17,	// (0x0003259c) popup_note_window_t2_ParamLimits

0xca17,	// (0x0003259c) popup_note_window_t2

0xca2d,	// (0x000325b2) popup_note_window_t3_ParamLimits

0xca2d,	// (0x000325b2) popup_note_window_t3

0xca43,	// (0x000325c8) popup_note_window_t4_ParamLimits

0xca43,	// (0x000325c8) popup_note_window_t4

0xca6b,	// (0x000325f0) popup_note_window_t5_ParamLimits

0xca6b,	// (0x000325f0) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035104) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035104) popup_note_window_t

0xca8f,	// (0x00032614) bg_popup_window_pane_cp6_ParamLimits

0xca8f,	// (0x00032614) bg_popup_window_pane_cp6

0x3652,	// (0x000291d7) popup_note_image_window_g1_ParamLimits

0x3652,	// (0x000291d7) popup_note_image_window_g1

0xb7e3,	// (0x00031368) popup_note_image_window_g2_ParamLimits

0xb7e3,	// (0x00031368) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x000353c4) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x000353c4) popup_note_image_window_g

0x3677,	// (0x000291fc) popup_note_image_window_t1_ParamLimits

0x3677,	// (0x000291fc) popup_note_image_window_t1

0x3690,	// (0x00029215) popup_note_image_window_t2_ParamLimits

0x3690,	// (0x00029215) popup_note_image_window_t2

0x36a9,	// (0x0002922e) popup_note_image_window_t3_ParamLimits

0x36a9,	// (0x0002922e) popup_note_image_window_t3

0x0002,

0xf844,	// (0x000353c9) popup_note_image_window_t_ParamLimits

0xf844,	// (0x000353c9) popup_note_image_window_t

0x351b,	// (0x000290a0) bg_popup_window_pane_cp7_ParamLimits

0x351b,	// (0x000290a0) bg_popup_window_pane_cp7

0x354b,	// (0x000290d0) popup_note_wait_window_g1_ParamLimits

0x354b,	// (0x000290d0) popup_note_wait_window_g1

0x3557,	// (0x000290dc) popup_note_wait_window_g2_ParamLimits

0x3557,	// (0x000290dc) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x000353b2) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x000353b2) popup_note_wait_window_g

0x356f,	// (0x000290f4) popup_note_wait_window_t1_ParamLimits

0x356f,	// (0x000290f4) popup_note_wait_window_t1

0xb784,	// (0x00031309) popup_note_wait_window_t2_ParamLimits

0xb784,	// (0x00031309) popup_note_wait_window_t2

0xb7a1,	// (0x00031326) popup_note_wait_window_t3_ParamLimits

0xb7a1,	// (0x00031326) popup_note_wait_window_t3

0xb7b4,	// (0x00031339) popup_note_wait_window_t4_ParamLimits

0xb7b4,	// (0x00031339) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x000353b9) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x000353b9) popup_note_wait_window_t

0x35eb,	// (0x00029170) wait_bar_pane_ParamLimits

0x35eb,	// (0x00029170) wait_bar_pane

0xc861,	// (0x000323e6) wait_anim_pane

0xc861,	// (0x000323e6) wait_border_pane

0xc857,	// (0x000323dc) wait_anim_pane_g1

0xc857,	// (0x000323dc) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00035279) wait_anim_pane_g

0x34c7,	// (0x0002904c) wait_border_pane_g1

0x34d2,	// (0x00029057) wait_border_pane_g2

0x34db,	// (0x00029060) wait_border_pane_g3

0x0002,

0xf826,	// (0x000353ab) wait_border_pane_g

0x3332,	// (0x00028eb7) bg_popup_window_pane_cp16_ParamLimits

0x3332,	// (0x00028eb7) bg_popup_window_pane_cp16

0xb734,	// (0x000312b9) indicator_popup_pane_cp4_ParamLimits

0xb734,	// (0x000312b9) indicator_popup_pane_cp4

0x3446,	// (0x00028fcb) popup_query_data_window_t1_ParamLimits

0x3446,	// (0x00028fcb) popup_query_data_window_t1

0x3458,	// (0x00028fdd) popup_query_data_window_t2_ParamLimits

0x3458,	// (0x00028fdd) popup_query_data_window_t2

0x3471,	// (0x00028ff6) popup_query_data_window_t3_ParamLimits

0x3471,	// (0x00028ff6) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x000353a4) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x000353a4) popup_query_data_window_t

0xb748,	// (0x000312cd) query_popup_data_pane_ParamLimits

0xb748,	// (0x000312cd) query_popup_data_pane

0xb75c,	// (0x000312e1) query_popup_data_pane_cp1_ParamLimits

0xb75c,	// (0x000312e1) query_popup_data_pane_cp1

0x3332,	// (0x00028eb7) bg_popup_window_pane_cp10_ParamLimits

0x3332,	// (0x00028eb7) bg_popup_window_pane_cp10

0xb6af,	// (0x00031234) indicator_popup_pane_ParamLimits

0xb6af,	// (0x00031234) indicator_popup_pane

0xb6d1,	// (0x00031256) popup_query_code_window_t1_ParamLimits

0xb6d1,	// (0x00031256) popup_query_code_window_t1

0xb6eb,	// (0x00031270) popup_query_code_window_t2_ParamLimits

0xb6eb,	// (0x00031270) popup_query_code_window_t2

0x33e9,	// (0x00028f6e) popup_query_code_window_t3_ParamLimits

0x33e9,	// (0x00028f6e) popup_query_code_window_t3

0x0002,

0xf818,	// (0x0003539d) popup_query_code_window_t_ParamLimits

0xf818,	// (0x0003539d) popup_query_code_window_t

0x3418,	// (0x00028f9d) query_popup_pane_ParamLimits

0x3418,	// (0x00028f9d) query_popup_pane

0xca8f,	// (0x00032614) bg_popup_window_pane_cp15_ParamLimits

0xca8f,	// (0x00032614) bg_popup_window_pane_cp15

0x9e38,	// (0x0002f9bd) indicator_popup_pane_cp1_ParamLimits

0x9e38,	// (0x0002f9bd) indicator_popup_pane_cp1

0x9e4b,	// (0x0002f9d0) indicator_popup_pane_cp2_ParamLimits

0x9e4b,	// (0x0002f9d0) indicator_popup_pane_cp2

0x9e5e,	// (0x0002f9e3) popup_query_data_code_window_g1_ParamLimits

0x9e5e,	// (0x0002f9e3) popup_query_data_code_window_g1

0xcaad,	// (0x00032632) popup_query_data_code_window_t1_ParamLimits

0xcaad,	// (0x00032632) popup_query_data_code_window_t1

0xcabf,	// (0x00032644) popup_query_data_code_window_t2_ParamLimits

0xcabf,	// (0x00032644) popup_query_data_code_window_t2

0x9e71,	// (0x0002f9f6) popup_query_data_code_window_t3_ParamLimits

0x9e71,	// (0x0002f9f6) popup_query_data_code_window_t3

0x9e87,	// (0x0002fa0c) popup_query_data_code_window_t4_ParamLimits

0x9e87,	// (0x0002fa0c) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003510f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003510f) popup_query_data_code_window_t

0x0926,	// (0x000264ab) list_single_midp_graphic_pane_g3

0x9e9f,	// (0x0002fa24) query_popup_data_pane_cp2_ParamLimits

0x9eb2,	// (0x0002fa37) query_popup_pane_cp2_ParamLimits

0x9eb2,	// (0x0002fa37) query_popup_pane_cp2

0xc861,	// (0x000323e6) bg_popup_window_pane_cp11

0x332a,	// (0x00028eaf) heading_pane_cp5

0xcb1b,	// (0x000326a0) listscroll_popup_info_pane

0xc861,	// (0x000323e6) input_focus_pane_cp3

0xcad1,	// (0x00032656) query_popup_pane_t1

0xcadf,	// (0x00032664) list_popup_info_pane_ParamLimits

0xcadf,	// (0x00032664) list_popup_info_pane

0xcaee,	// (0x00032673) listscroll_popup_info_pane_g1

0xcaf6,	// (0x0003267b) scroll_pane_cp7

0x9ec5,	// (0x0002fa4a) popup_info_list_pane_t1_ParamLimits

0x9ec5,	// (0x0002fa4a) popup_info_list_pane_t1

0x9edf,	// (0x0002fa64) popup_info_list_pane_t2_ParamLimits

0x9edf,	// (0x0002fa64) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00035118) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00035118) popup_info_list_pane_t

0xc861,	// (0x000323e6) bg_popup_window_pane_cp12

0xbf72,	// (0x00031af7) find_popup_pane

0xc8bd,	// (0x00032442) bg_popup_window_pane_cp3

0xcb00,	// (0x00032685) heading_pane_cp3

0xcb0c,	// (0x00032691) listscroll_popup_graphic_pane

0xc861,	// (0x000323e6) bg_popup_window_pane_cp4

0x9f49,	// (0x0002face) heading_pane_cp4

0xcb1b,	// (0x000326a0) listscroll_popup_colour_pane

0x9f51,	// (0x0002fad6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9f51,	// (0x0002fad6) cell_large_graphic_colour_none_popup_pane

0x9f65,	// (0x0002faea) grid_large_graphic_colour_popup_pane_ParamLimits

0x9f65,	// (0x0002faea) grid_large_graphic_colour_popup_pane

0x9f89,	// (0x0002fb0e) listscroll_popup_colour_pane_g1_ParamLimits

0x9f89,	// (0x0002fb0e) listscroll_popup_colour_pane_g1

0x9fa0,	// (0x0002fb25) listscroll_popup_colour_pane_g2_ParamLimits

0x9fa0,	// (0x0002fb25) listscroll_popup_colour_pane_g2

0x9fb7,	// (0x0002fb3c) listscroll_popup_colour_pane_g3_ParamLimits

0x9fb7,	// (0x0002fb3c) listscroll_popup_colour_pane_g3

0x9fc7,	// (0x0002fb4c) listscroll_popup_colour_pane_g4_ParamLimits

0x9fc7,	// (0x0002fb4c) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003511d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003511d) listscroll_popup_colour_pane_g

0xcb23,	// (0x000326a8) scroll_pane_cp6_ParamLimits

0xcb23,	// (0x000326a8) scroll_pane_cp6

0x9fd7,	// (0x0002fb5c) cell_large_graphic_colour_popup_pane_ParamLimits

0x9fd7,	// (0x0002fb5c) cell_large_graphic_colour_popup_pane

0x9ff6,	// (0x0002fb7b) cell_large_graphic_colour_none_popup_pane_t1

0xc861,	// (0x000323e6) grid_highlight_pane_cp5

0xcb35,	// (0x000326ba) cell_large_graphic_colour_popup_pane_g1

0xcb3d,	// (0x000326c2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035126) cell_large_graphic_colour_popup_pane_g

0xcb45,	// (0x000326ca) cell_large_graphic_colour_popup_pane_g2_copy1

0xcb4e,	// (0x000326d3) grid_highlight_pane_cp4

0xcb56,	// (0x000326db) bg_popup_window_pane_cp8_ParamLimits

0xcb56,	// (0x000326db) bg_popup_window_pane_cp8

0xa005,	// (0x0002fb8a) popup_snote_single_text_window_g1_ParamLimits

0xa005,	// (0x0002fb8a) popup_snote_single_text_window_g1

0xa017,	// (0x0002fb9c) popup_snote_single_text_window_t1_ParamLimits

0xa017,	// (0x0002fb9c) popup_snote_single_text_window_t1

0xa02a,	// (0x0002fbaf) popup_snote_single_text_window_t2_ParamLimits

0xa02a,	// (0x0002fbaf) popup_snote_single_text_window_t2

0xa03d,	// (0x0002fbc2) popup_snote_single_text_window_t3_ParamLimits

0xa03d,	// (0x0002fbc2) popup_snote_single_text_window_t3

0xa076,	// (0x0002fbfb) popup_snote_single_text_window_t4_ParamLimits

0xa076,	// (0x0002fbfb) popup_snote_single_text_window_t4

0xa0aa,	// (0x0002fc2f) popup_snote_single_text_window_t5_ParamLimits

0xa0aa,	// (0x0002fc2f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003512b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003512b) popup_snote_single_text_window_t

0xcb71,	// (0x000326f6) bg_popup_window_pane_cp9_ParamLimits

0xcb71,	// (0x000326f6) bg_popup_window_pane_cp9

0xa005,	// (0x0002fb8a) popup_snote_single_graphic_window_g1_ParamLimits

0xa005,	// (0x0002fb8a) popup_snote_single_graphic_window_g1

0xcb7f,	// (0x00032704) popup_snote_single_graphic_window_g2_ParamLimits

0xcb7f,	// (0x00032704) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035136) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035136) popup_snote_single_graphic_window_g

0xcb8b,	// (0x00032710) popup_snote_single_graphic_window_t1_ParamLimits

0xcb8b,	// (0x00032710) popup_snote_single_graphic_window_t1

0xcb9e,	// (0x00032723) popup_snote_single_graphic_window_t2_ParamLimits

0xcb9e,	// (0x00032723) popup_snote_single_graphic_window_t2

0xa03d,	// (0x0002fbc2) popup_snote_single_graphic_window_t3_ParamLimits

0xa03d,	// (0x0002fbc2) popup_snote_single_graphic_window_t3

0xa076,	// (0x0002fbfb) popup_snote_single_graphic_window_t4_ParamLimits

0xa076,	// (0x0002fbfb) popup_snote_single_graphic_window_t4

0xa0d9,	// (0x0002fc5e) popup_snote_single_graphic_window_t5_ParamLimits

0xa0d9,	// (0x0002fc5e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003513b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003513b) popup_snote_single_graphic_window_t

0x45b9,	// (0x0002a13e) grid_graphic_popup_pane_ParamLimits

0x45b9,	// (0x0002a13e) grid_graphic_popup_pane

0x45e3,	// (0x0002a168) listscroll_popup_graphic_pane_g1_ParamLimits

0x45e3,	// (0x0002a168) listscroll_popup_graphic_pane_g1

0xbebd,	// (0x00031a42) listscroll_popup_graphic_pane_g2_ParamLimits

0xbebd,	// (0x00031a42) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x0003551a) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x0003551a) listscroll_popup_graphic_pane_g

0x460b,	// (0x0002a190) scroll_pane_cp5

0xbe62,	// (0x000319e7) cell_graphic_popup_pane_ParamLimits

0xbe62,	// (0x000319e7) cell_graphic_popup_pane

0x4539,	// (0x0002a0be) cell_graphic_popup_pane_g1

0x4541,	// (0x0002a0c6) cell_graphic_popup_pane_g2

0xcb45,	// (0x000326ca) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00035513) cell_graphic_popup_pane_g

0x454a,	// (0x0002a0cf) cell_graphic_popup_pane_t2

0xcb4e,	// (0x000326d3) grid_highlight_pane_cp3

0xcbc3,	// (0x00032748) list_gen_pane_ParamLimits

0xcbc3,	// (0x00032748) list_gen_pane

0xcbeb,	// (0x00032770) scroll_pane

0xbdcc,	// (0x00031951) bg_list_pane_g1_ParamLimits

0xbdcc,	// (0x00031951) bg_list_pane_g1

0xbde7,	// (0x0003196c) bg_list_pane_g2_ParamLimits

0xbde7,	// (0x0003196c) bg_list_pane_g2

0xbdfa,	// (0x0003197f) bg_list_pane_g3_ParamLimits

0xbdfa,	// (0x0003197f) bg_list_pane_g3

0xbe0c,	// (0x00031991) bg_list_pane_g4_ParamLimits

0xbe0c,	// (0x00031991) bg_list_pane_g4

0xbe1e,	// (0x000319a3) bg_list_pane_g5_ParamLimits

0xbe1e,	// (0x000319a3) bg_list_pane_g5

0x0004,

0xf983,	// (0x00035508) bg_list_pane_g_ParamLimits

0xf983,	// (0x00035508) bg_list_pane_g

0xbd95,	// (0x0003191a) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double2_graphic_large_graphic_pane

0xbd95,	// (0x0003191a) list_double2_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double2_graphic_pane

0xbd95,	// (0x0003191a) list_double2_large_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double2_large_graphic_pane

0xbd95,	// (0x0003191a) list_double2_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double2_pane

0xbd95,	// (0x0003191a) list_double_graphic_heading_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_graphic_heading_pane

0xbd95,	// (0x0003191a) list_double_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_graphic_pane

0xbd95,	// (0x0003191a) list_double_heading_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_heading_pane

0xbd95,	// (0x0003191a) list_double_large_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_large_graphic_pane

0xbd95,	// (0x0003191a) list_double_number_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_number_pane

0xbd95,	// (0x0003191a) list_double_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_pane

0xbd95,	// (0x0003191a) list_double_time_pane_ParamLimits

0xbd95,	// (0x0003191a) list_double_time_pane

0xbd95,	// (0x0003191a) list_setting_number_pane_ParamLimits

0xbd95,	// (0x0003191a) list_setting_number_pane

0xbd95,	// (0x0003191a) list_setting_pane_ParamLimits

0xbd95,	// (0x0003191a) list_setting_pane

0x96e9,	// (0x0002f26e) list_single_2graphic_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_2graphic_pane

0x96e9,	// (0x0002f26e) list_single_graphic_heading_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_graphic_heading_pane

0x96e9,	// (0x0002f26e) list_single_graphic_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_graphic_pane

0x96e9,	// (0x0002f26e) list_single_heading_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_heading_pane

0xbd95,	// (0x0003191a) list_single_large_graphic_pane_ParamLimits

0xbd95,	// (0x0003191a) list_single_large_graphic_pane

0x96e9,	// (0x0002f26e) list_single_number_heading_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_number_heading_pane

0x96e9,	// (0x0002f26e) list_single_number_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_number_pane

0x96e9,	// (0x0002f26e) list_single_pane_ParamLimits

0x96e9,	// (0x0002f26e) list_single_pane

0xc861,	// (0x000323e6) list_highlight_pane_cp1

0xeb6c,	// (0x000346f1) list_single_pane_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_pane_g1

0xeb78,	// (0x000346fd) list_single_pane_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_pane_g

0x96d3,	// (0x0002f258) list_single_pane_t1_ParamLimits

0x96d3,	// (0x0002f258) list_single_pane_t1

0xeb6c,	// (0x000346f1) list_single_number_pane_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_number_pane_g1

0xeb78,	// (0x000346fd) list_single_number_pane_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_number_pane_g

0xeb84,	// (0x00034709) list_single_number_pane_t1_ParamLimits

0xeb84,	// (0x00034709) list_single_number_pane_t1

0x9695,	// (0x0002f21a) list_single_number_pane_t2_ParamLimits

0x9695,	// (0x0002f21a) list_single_number_pane_t2

0x0001,

0xf944,	// (0x000354c9) list_single_number_pane_t_ParamLimits

0xf944,	// (0x000354c9) list_single_number_pane_t

0xeb60,	// (0x000346e5) list_single_graphic_pane_g1_ParamLimits

0xeb60,	// (0x000346e5) list_single_graphic_pane_g1

0xeb6c,	// (0x000346f1) list_single_graphic_pane_g2_ParamLimits

0xeb6c,	// (0x000346f1) list_single_graphic_pane_g2

0xeb78,	// (0x000346fd) list_single_graphic_pane_g3_ParamLimits

0xeb78,	// (0x000346fd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035146) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035146) list_single_graphic_pane_g

0xeb84,	// (0x00034709) list_single_graphic_pane_t1_ParamLimits

0xeb84,	// (0x00034709) list_single_graphic_pane_t1

0xeb6c,	// (0x000346f1) list_single_heading_pane_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_heading_pane_g1

0xeb78,	// (0x000346fd) list_single_heading_pane_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_heading_pane_g

0xeb9a,	// (0x0003471f) list_single_heading_pane_t1_ParamLimits

0xeb9a,	// (0x0003471f) list_single_heading_pane_t1

0xebb0,	// (0x00034735) list_single_heading_pane_t2_ParamLimits

0xebb0,	// (0x00034735) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035152) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035152) list_single_heading_pane_t

0xeb6c,	// (0x000346f1) list_single_number_heading_pane_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_number_heading_pane_g1

0xeb78,	// (0x000346fd) list_single_number_heading_pane_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_number_heading_pane_g

0xeb9a,	// (0x0003471f) list_single_number_heading_pane_t1_ParamLimits

0xeb9a,	// (0x0003471f) list_single_number_heading_pane_t1

0xebc2,	// (0x00034747) list_single_number_heading_pane_t2_ParamLimits

0xebc2,	// (0x00034747) list_single_number_heading_pane_t2

0xebd4,	// (0x00034759) list_single_number_heading_pane_t3_ParamLimits

0xebd4,	// (0x00034759) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035157) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035157) list_single_number_heading_pane_t

0xebe6,	// (0x0003476b) list_single_graphic_heading_pane_g1_ParamLimits

0xebe6,	// (0x0003476b) list_single_graphic_heading_pane_g1

0x90c5,	// (0x0002ec4a) list_single_graphic_heading_pane_g4_ParamLimits

0x90c5,	// (0x0002ec4a) list_single_graphic_heading_pane_g4

0xeb78,	// (0x000346fd) list_single_graphic_heading_pane_g5_ParamLimits

0xeb78,	// (0x000346fd) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003515e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003515e) list_single_graphic_heading_pane_g

0xeb9a,	// (0x0003471f) list_single_graphic_heading_pane_t1_ParamLimits

0xeb9a,	// (0x0003471f) list_single_graphic_heading_pane_t1

0x90d6,	// (0x0002ec5b) list_single_graphic_heading_pane_t2_ParamLimits

0x90d6,	// (0x0002ec5b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035165) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035165) list_single_graphic_heading_pane_t

0xebf2,	// (0x00034777) list_single_large_graphic_pane_g1_ParamLimits

0xebf2,	// (0x00034777) list_single_large_graphic_pane_g1

0xebfe,	// (0x00034783) list_single_large_graphic_pane_g2_ParamLimits

0xebfe,	// (0x00034783) list_single_large_graphic_pane_g2

0xec0a,	// (0x0003478f) list_single_large_graphic_pane_g3_ParamLimits

0xec0a,	// (0x0003478f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003516a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003516a) list_single_large_graphic_pane_g

0x34d2,	// (0x00029057) wait_border_pane_g2_copy1

0x90e8,	// (0x0002ec6d) list_single_large_graphic_pane_g4_cp2

0xec16,	// (0x0003479b) list_single_large_graphic_pane_t1_ParamLimits

0xec16,	// (0x0003479b) list_single_large_graphic_pane_t1

0x90f0,	// (0x0002ec75) list_double_pane_g1_ParamLimits

0x90f0,	// (0x0002ec75) list_double_pane_g1

0xec2c,	// (0x000347b1) list_double_pane_g2_ParamLimits

0xec2c,	// (0x000347b1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035171) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035171) list_double_pane_g

0x90fc,	// (0x0002ec81) list_double_pane_t1_ParamLimits

0x90fc,	// (0x0002ec81) list_double_pane_t1

0x9112,	// (0x0002ec97) list_double_pane_t2_ParamLimits

0x9112,	// (0x0002ec97) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035176) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035176) list_double_pane_t

0x9124,	// (0x0002eca9) list_double2_pane_g1_ParamLimits

0x9124,	// (0x0002eca9) list_double2_pane_g1

0xec2c,	// (0x000347b1) list_double2_pane_g2_ParamLimits

0xec2c,	// (0x000347b1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003517b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003517b) list_double2_pane_g

0x90fc,	// (0x0002ec81) list_double2_pane_t1_ParamLimits

0x90fc,	// (0x0002ec81) list_double2_pane_t1

0x9135,	// (0x0002ecba) list_double2_pane_t2_ParamLimits

0x9135,	// (0x0002ecba) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035180) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035180) list_double2_pane_t

0x90f0,	// (0x0002ec75) list_double_number_pane_g1_ParamLimits

0x90f0,	// (0x0002ec75) list_double_number_pane_g1

0xec2c,	// (0x000347b1) list_double_number_pane_g2_ParamLimits

0xec2c,	// (0x000347b1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035171) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035171) list_double_number_pane_g

0x9147,	// (0x0002eccc) list_double_number_pane_t1_ParamLimits

0x9147,	// (0x0002eccc) list_double_number_pane_t1

0x9159,	// (0x0002ecde) list_double_number_pane_t2_ParamLimits

0x9159,	// (0x0002ecde) list_double_number_pane_t2

0x916f,	// (0x0002ecf4) list_double_number_pane_t3_ParamLimits

0x916f,	// (0x0002ecf4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035185) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035185) list_double_number_pane_t

0x9181,	// (0x0002ed06) list_double_graphic_pane_g1_ParamLimits

0x9181,	// (0x0002ed06) list_double_graphic_pane_g1

0x918d,	// (0x0002ed12) list_double_graphic_pane_g2_ParamLimits

0x918d,	// (0x0002ed12) list_double_graphic_pane_g2

0x919c,	// (0x0002ed21) list_double_graphic_pane_g3_ParamLimits

0x919c,	// (0x0002ed21) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003518c) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003518c) list_double_graphic_pane_g

0x9159,	// (0x0002ecde) list_double_graphic_pane_t1_ParamLimits

0x9159,	// (0x0002ecde) list_double_graphic_pane_t1

0x916f,	// (0x0002ecf4) list_double_graphic_pane_t2_ParamLimits

0x916f,	// (0x0002ecf4) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035195) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035195) list_double_graphic_pane_t

0x9181,	// (0x0002ed06) list_double2_graphic_pane_g1_ParamLimits

0x9181,	// (0x0002ed06) list_double2_graphic_pane_g1

0x91b4,	// (0x0002ed39) list_double2_graphic_pane_g2_ParamLimits

0x91b4,	// (0x0002ed39) list_double2_graphic_pane_g2

0x91c0,	// (0x0002ed45) list_double2_graphic_pane_g3_ParamLimits

0x91c0,	// (0x0002ed45) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003519a) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003519a) list_double2_graphic_pane_g

0x9159,	// (0x0002ecde) list_double2_graphic_pane_t1_ParamLimits

0x9159,	// (0x0002ecde) list_double2_graphic_pane_t1

0x91cc,	// (0x0002ed51) list_double2_graphic_pane_t2_ParamLimits

0x91cc,	// (0x0002ed51) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000351a1) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000351a1) list_double2_graphic_pane_t

0x91de,	// (0x0002ed63) list_double_large_graphic_pane_g1_ParamLimits

0x91de,	// (0x0002ed63) list_double_large_graphic_pane_g1

0x9124,	// (0x0002eca9) list_double_large_graphic_pane_g2_ParamLimits

0x9124,	// (0x0002eca9) list_double_large_graphic_pane_g2

0xec2c,	// (0x000347b1) list_double_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x000347b1) list_double_large_graphic_pane_g3

0x91fd,	// (0x0002ed82) list_double_large_graphic_pane_g4_ParamLimits

0x91fd,	// (0x0002ed82) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000351a6) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000351a6) list_double_large_graphic_pane_g

0x9210,	// (0x0002ed95) list_double_large_graphic_pane_t1_ParamLimits

0x9210,	// (0x0002ed95) list_double_large_graphic_pane_t1

0x9229,	// (0x0002edae) list_double_large_graphic_pane_t2_ParamLimits

0x9229,	// (0x0002edae) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000351b1) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000351b1) list_double_large_graphic_pane_t

0x923b,	// (0x0002edc0) list_double2_large_graphic_pane_g1_ParamLimits

0x923b,	// (0x0002edc0) list_double2_large_graphic_pane_g1

0x9124,	// (0x0002eca9) list_double2_large_graphic_pane_g2_ParamLimits

0x9124,	// (0x0002eca9) list_double2_large_graphic_pane_g2

0xec2c,	// (0x000347b1) list_double2_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x000347b1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000351b6) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000351b6) list_double2_large_graphic_pane_g

0x9159,	// (0x0002ecde) list_double2_large_graphic_pane_t1_ParamLimits

0x9159,	// (0x0002ecde) list_double2_large_graphic_pane_t1

0x91cc,	// (0x0002ed51) list_double2_large_graphic_pane_t2_ParamLimits

0x91cc,	// (0x0002ed51) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x000351a1) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x000351a1) list_double2_large_graphic_pane_t

0x9247,	// (0x0002edcc) list_double_heading_pane_g1_ParamLimits

0x9247,	// (0x0002edcc) list_double_heading_pane_g1

0x9258,	// (0x0002eddd) list_double_heading_pane_g2_ParamLimits

0x9258,	// (0x0002eddd) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x000351bd) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x000351bd) list_double_heading_pane_g

0x9264,	// (0x0002ede9) list_double_heading_pane_t1_ParamLimits

0x9264,	// (0x0002ede9) list_double_heading_pane_t1

0x91cc,	// (0x0002ed51) list_double_heading_pane_t2_ParamLimits

0x91cc,	// (0x0002ed51) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000351c2) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000351c2) list_double_heading_pane_t

0x927a,	// (0x0002edff) list_double_graphic_heading_pane_g1_ParamLimits

0x927a,	// (0x0002edff) list_double_graphic_heading_pane_g1

0x9247,	// (0x0002edcc) list_double_graphic_heading_pane_g2_ParamLimits

0x9247,	// (0x0002edcc) list_double_graphic_heading_pane_g2

0x9258,	// (0x0002eddd) list_double_graphic_heading_pane_g3_ParamLimits

0x9258,	// (0x0002eddd) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x000351c7) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x000351c7) list_double_graphic_heading_pane_g

0x9264,	// (0x0002ede9) list_double_graphic_heading_pane_t1_ParamLimits

0x9264,	// (0x0002ede9) list_double_graphic_heading_pane_t1

0x91cc,	// (0x0002ed51) list_double_graphic_heading_pane_t2_ParamLimits

0x91cc,	// (0x0002ed51) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000351c2) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000351c2) list_double_graphic_heading_pane_t

0x9124,	// (0x0002eca9) list_double_time_pane_g1_ParamLimits

0x9124,	// (0x0002eca9) list_double_time_pane_g1

0xec2c,	// (0x000347b1) list_double_time_pane_g2_ParamLimits

0xec2c,	// (0x000347b1) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0003517b) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0003517b) list_double_time_pane_g

0x9286,	// (0x0002ee0b) list_double_time_pane_t1_ParamLimits

0x9286,	// (0x0002ee0b) list_double_time_pane_t1

0x929c,	// (0x0002ee21) list_double_time_pane_t2_ParamLimits

0x929c,	// (0x0002ee21) list_double_time_pane_t2

0x92ae,	// (0x0002ee33) list_double_time_pane_t3_ParamLimits

0x92ae,	// (0x0002ee33) list_double_time_pane_t3

0x92c0,	// (0x0002ee45) list_double_time_pane_t4_ParamLimits

0x92c0,	// (0x0002ee45) list_double_time_pane_t4

0x0003,

0xf649,	// (0x000351ce) list_double_time_pane_t_ParamLimits

0xf649,	// (0x000351ce) list_double_time_pane_t

0x92d2,	// (0x0002ee57) list_setting_pane_g1_ParamLimits

0x92d2,	// (0x0002ee57) list_setting_pane_g1

0x92de,	// (0x0002ee63) list_setting_pane_g2_ParamLimits

0x92de,	// (0x0002ee63) list_setting_pane_g2

0x0001,

0xf652,	// (0x000351d7) list_setting_pane_g_ParamLimits

0xf652,	// (0x000351d7) list_setting_pane_g

0x92ea,	// (0x0002ee6f) list_setting_pane_t1_ParamLimits

0x92ea,	// (0x0002ee6f) list_setting_pane_t1

0x9304,	// (0x0002ee89) list_setting_pane_t2_ParamLimits

0x9304,	// (0x0002ee89) list_setting_pane_t2

0x0002,

0xf657,	// (0x000351dc) list_setting_pane_t_ParamLimits

0xf657,	// (0x000351dc) list_setting_pane_t

0x9343,	// (0x0002eec8) set_value_pane_cp_ParamLimits

0x9343,	// (0x0002eec8) set_value_pane_cp

0x934f,	// (0x0002eed4) list_setting_number_pane_g1_ParamLimits

0x934f,	// (0x0002eed4) list_setting_number_pane_g1

0x935b,	// (0x0002eee0) list_setting_number_pane_g2_ParamLimits

0x935b,	// (0x0002eee0) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x000351e3) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x000351e3) list_setting_number_pane_g

0x9367,	// (0x0002eeec) list_setting_number_pane_t1_ParamLimits

0x9367,	// (0x0002eeec) list_setting_number_pane_t1

0x9380,	// (0x0002ef05) list_setting_number_pane_t2_ParamLimits

0x9380,	// (0x0002ef05) list_setting_number_pane_t2

0x939a,	// (0x0002ef1f) list_setting_number_pane_t3_ParamLimits

0x939a,	// (0x0002ef1f) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x000351e8) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x000351e8) list_setting_number_pane_t

0x9343,	// (0x0002eec8) set_value_pane_ParamLimits

0x9343,	// (0x0002eec8) set_value_pane

0xcc1f,	// (0x000327a4) bg_set_opt_pane_ParamLimits

0xcc1f,	// (0x000327a4) bg_set_opt_pane

0x93dd,	// (0x0002ef62) set_value_pane_t1

0xcc40,	// (0x000327c5) slider_set_pane_cp3

0xa112,	// (0x0002fc97) volume_small_pane_cp

0xcc49,	// (0x000327ce) list_form_gen_pane

0xcc52,	// (0x000327d7) scroll_pane_cp8

0x93eb,	// (0x0002ef70) form_field_data_pane_ParamLimits

0x93eb,	// (0x0002ef70) form_field_data_pane

0x9402,	// (0x0002ef87) form_field_data_wide_pane_ParamLimits

0x9402,	// (0x0002ef87) form_field_data_wide_pane

0x9422,	// (0x0002efa7) form_field_popup_pane_ParamLimits

0x9422,	// (0x0002efa7) form_field_popup_pane

0x943a,	// (0x0002efbf) form_field_popup_wide_pane_ParamLimits

0x943a,	// (0x0002efbf) form_field_popup_wide_pane

0xec5d,	// (0x000347e2) form_field_slider_pane_ParamLimits

0xec5d,	// (0x000347e2) form_field_slider_pane

0x9451,	// (0x0002efd6) form_field_slider_wide_pane_ParamLimits

0x9451,	// (0x0002efd6) form_field_slider_wide_pane

0xcc63,	// (0x000327e8) data_form_pane

0x946e,	// (0x0002eff3) form_field_data_pane_t1

0xcc6f,	// (0x000327f4) input_focus_pane

0x9488,	// (0x0002f00d) data_form_wide_pane

0x94a5,	// (0x0002f02a) form_field_data_wide_pane_t1

0xcb63,	// (0x000326e8) input_focus_pane_cp6

0x94c7,	// (0x0002f04c) form_field_popup_pane_t1

0xcc6f,	// (0x000327f4) input_focus_pane_cp7

0xcc9d,	// (0x00032822) list_form_pane

0x94e9,	// (0x0002f06e) form_field_popup_wide_pane_t1

0xcc6f,	// (0x000327f4) input_focus_pane_cp8

0xcca9,	// (0x0003282e) list_form_wide_pane

0x9506,	// (0x0002f08b) form_field_slider_pane_t1_ParamLimits

0x9506,	// (0x0002f08b) form_field_slider_pane_t1

0x951e,	// (0x0002f0a3) form_field_slider_pane_t2_ParamLimits

0x951e,	// (0x0002f0a3) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x000351f8) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x000351f8) form_field_slider_pane_t

0xc8af,	// (0x00032434) input_focus_pane_cp9_ParamLimits

0xc8af,	// (0x00032434) input_focus_pane_cp9

0x9533,	// (0x0002f0b8) slider_cont_pane_ParamLimits

0x9533,	// (0x0002f0b8) slider_cont_pane

0xccb5,	// (0x0003283a) form_field_slider_wide_pane_t1_ParamLimits

0xccb5,	// (0x0003283a) form_field_slider_wide_pane_t1

0x9547,	// (0x0002f0cc) form_field_slider_wide_pane_t2_ParamLimits

0x9547,	// (0x0002f0cc) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x000351fd) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x000351fd) form_field_slider_wide_pane_t

0xc8af,	// (0x00032434) input_focus_pane_cp10_ParamLimits

0xc8af,	// (0x00032434) input_focus_pane_cp10

0x9559,	// (0x0002f0de) slider_cont_pane_cp1_ParamLimits

0x9559,	// (0x0002f0de) slider_cont_pane_cp1

0x956d,	// (0x0002f0f2) slider_form_pane_cp

0xccc7,	// (0x0003284c) input_focus_pane_g1

0xcccf,	// (0x00032854) input_focus_pane_g2

0xccd7,	// (0x0003285c) input_focus_pane_g3

0xccdf,	// (0x00032864) input_focus_pane_g4

0xcce7,	// (0x0003286c) input_focus_pane_g5

0xccef,	// (0x00032874) input_focus_pane_g6

0xccf7,	// (0x0003287c) input_focus_pane_g7

0xccff,	// (0x00032884) input_focus_pane_g8

0xcd07,	// (0x0003288c) input_focus_pane_g9

0xc857,	// (0x000323dc) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00035202) input_focus_pane_g

0x34db,	// (0x00029060) wait_border_pane_g3_copy1

0x9575,	// (0x0002f0fa) data_form_pane_t1

0xc857,	// (0x000323dc) wait_anim_pane_g1_copy1

0x96a7,	// (0x0002f22c) data_form_wide_pane_t1

0x958f,	// (0x0002f114) list_form_graphic_pane_cp_ParamLimits

0x958f,	// (0x0002f114) list_form_graphic_pane_cp

0x43ca,	// (0x00029f4f) slider_form_pane_g1

0x43d3,	// (0x00029f58) slider_form_pane_g2

0x0006,

0xf974,	// (0x000354f9) slider_form_pane_g

0x95a1,	// (0x0002f126) list_form_graphic_pane_ParamLimits

0x95a1,	// (0x0002f126) list_form_graphic_pane

0x95b4,	// (0x0002f139) list_form_graphic_pane_g1

0x95bc,	// (0x0002f141) list_form_graphic_pane_t1_ParamLimits

0x95bc,	// (0x0002f141) list_form_graphic_pane_t1

0xc8bd,	// (0x00032442) list_highlight_pane_cp5_ParamLimits

0xc8bd,	// (0x00032442) list_highlight_pane_cp5

0xec70,	// (0x000347f5) find_pane_g1

0xcd0f,	// (0x00032894) input_find_pane

0x95d1,	// (0x0002f156) input_find_pane_g1_ParamLimits

0x95d1,	// (0x0002f156) input_find_pane_g1

0x95dd,	// (0x0002f162) input_find_pane_t1_ParamLimits

0x95dd,	// (0x0002f162) input_find_pane_t1

0x95f2,	// (0x0002f177) input_find_pane_t2_ParamLimits

0x95f2,	// (0x0002f177) input_find_pane_t2

0x0001,

0xf692,	// (0x00035217) input_find_pane_t_ParamLimits

0xf692,	// (0x00035217) input_find_pane_t

0xcd18,	// (0x0003289d) input_focus_pane_cp5_ParamLimits

0xcd18,	// (0x0003289d) input_focus_pane_cp5

0xcd26,	// (0x000328ab) bg_popup_window_pane_cp2_ParamLimits

0xcd26,	// (0x000328ab) bg_popup_window_pane_cp2

0xcd33,	// (0x000328b8) listscroll_menu_pane_ParamLimits

0xcd33,	// (0x000328b8) listscroll_menu_pane

0xa127,	// (0x0002fcac) popup_submenu_window_ParamLimits

0xa127,	// (0x0002fcac) popup_submenu_window

0xcd3f,	// (0x000328c4) find_popup_pane_g1

0xa14f,	// (0x0002fcd4) input_popup_find_pane_cp

0xcd18,	// (0x0003289d) input_focus_pane_cp4_ParamLimits

0xcd18,	// (0x0003289d) input_focus_pane_cp4

0xcd47,	// (0x000328cc) input_popup_find_pane_t1_ParamLimits

0xcd47,	// (0x000328cc) input_popup_find_pane_t1

0xc861,	// (0x000323e6) bg_popup_sub_pane_cp

0xcd75,	// (0x000328fa) listscroll_popup_sub_pane

0xcd7d,	// (0x00032902) list_submenu_pane_ParamLimits

0xcd7d,	// (0x00032902) list_submenu_pane

0xcd8e,	// (0x00032913) scroll_pane_cp4

0xa167,	// (0x0002fcec) list_single_popup_submenu_pane_ParamLimits

0xa167,	// (0x0002fcec) list_single_popup_submenu_pane

0xa17b,	// (0x0002fd00) list_single_popup_submenu_pane_g1

0xa183,	// (0x0002fd08) list_single_popup_submenu_pane_t1_ParamLimits

0xa183,	// (0x0002fd08) list_single_popup_submenu_pane_t1

0xc8af,	// (0x00032434) bg_active_tab_pane_cp1_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp1

0xcd96,	// (0x0003291b) tabs_2_active_pane_g1

0xa198,	// (0x0002fd1d) tabs_2_active_pane_t1

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp1_ParamLimits

0xc8af,	// (0x00032434) bg_passive_tab_pane_cp1

0xcd96,	// (0x0003291b) tabs_2_passive_pane_g1

0xa198,	// (0x0002fd1d) tabs_2_passive_pane_t1

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp4

0xa1aa,	// (0x0002fd2f) tabs_2_long_active_pane_t1

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp4

0x198b,	// (0x00027510) list_single_midp_graphic_pane_g4_ParamLimits

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp5

0xa1bd,	// (0x0002fd42) tabs_3_long_active_pane_t1

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp5

0x198b,	// (0x00027510) list_single_midp_graphic_pane_g4

0xc8bd,	// (0x00032442) bg_popup_window_pane_cp13_ParamLimits

0xc8bd,	// (0x00032442) bg_popup_window_pane_cp13

0xcd9e,	// (0x00032923) listscroll_popup_fast_pane_ParamLimits

0xcd9e,	// (0x00032923) listscroll_popup_fast_pane

0xcdaa,	// (0x0003292f) grid_popup_fast_pane_ParamLimits

0xcdaa,	// (0x0003292f) grid_popup_fast_pane

0xcdbc,	// (0x00032941) scroll_pane_cp9_ParamLimits

0xcdbc,	// (0x00032941) scroll_pane_cp9

0x5cf4,	// (0x0002b879) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5cf4,	// (0x0002b879) list_single_graphic_hl_pane_t1_cp2

0xcdcf,	// (0x00032954) input_focus_pane_cp20_ParamLimits

0xcdcf,	// (0x00032954) input_focus_pane_cp20

0xcddd,	// (0x00032962) query_popup_data_pane_t1_ParamLimits

0xcddd,	// (0x00032962) query_popup_data_pane_t1

0xcdf0,	// (0x00032975) query_popup_data_pane_t2_ParamLimits

0xcdf0,	// (0x00032975) query_popup_data_pane_t2

0xce36,	// (0x000329bb) query_popup_data_pane_t3_ParamLimits

0xce36,	// (0x000329bb) query_popup_data_pane_t3

0xce77,	// (0x000329fc) query_popup_data_pane_t4_ParamLimits

0xce77,	// (0x000329fc) query_popup_data_pane_t4

0xceb3,	// (0x00032a38) query_popup_data_pane_t5_ParamLimits

0xceb3,	// (0x00032a38) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0003521c) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0003521c) query_popup_data_pane_t

0xccc7,	// (0x0003284c) bg_set_opt_pane_g1

0xcccf,	// (0x00032854) bg_set_opt_pane_g2

0xccd7,	// (0x0003285c) bg_set_opt_pane_g3

0xccdf,	// (0x00032864) bg_set_opt_pane_g4

0xcce7,	// (0x0003286c) bg_set_opt_pane_g5

0xccef,	// (0x00032874) bg_set_opt_pane_g6

0xccf7,	// (0x0003287c) bg_set_opt_pane_g7

0xccff,	// (0x00032884) bg_set_opt_pane_g8

0xcd07,	// (0x0003288c) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00035227) bg_set_opt_pane_g

0x0652,	// (0x000261d7) control_top_pane_stacon_ParamLimits

0x0652,	// (0x000261d7) control_top_pane_stacon

0x06a5,	// (0x0002622a) signal_pane_stacon_ParamLimits

0x06a5,	// (0x0002622a) signal_pane_stacon

0x06ca,	// (0x0002624f) stacon_top_pane_g1_ParamLimits

0x06ca,	// (0x0002624f) stacon_top_pane_g1

0x06ec,	// (0x00026271) title_pane_stacon_ParamLimits

0x06ec,	// (0x00026271) title_pane_stacon

0x0716,	// (0x0002629b) uni_indicator_pane_stacon_ParamLimits

0x0716,	// (0x0002629b) uni_indicator_pane_stacon

0x072b,	// (0x000262b0) battery_pane_stacon_ParamLimits

0x072b,	// (0x000262b0) battery_pane_stacon

0x076f,	// (0x000262f4) control_bottom_pane_stacon_ParamLimits

0x076f,	// (0x000262f4) control_bottom_pane_stacon

0x0792,	// (0x00026317) navi_pane_stacon_ParamLimits

0x0792,	// (0x00026317) navi_pane_stacon

0x07b5,	// (0x0002633a) stacon_bottom_pane_g1_ParamLimits

0x07b5,	// (0x0002633a) stacon_bottom_pane_g1

0x00ab,	// (0x00025c30) aid_levels_signal_lsc_ParamLimits

0x00ab,	// (0x00025c30) aid_levels_signal_lsc

0x00c1,	// (0x00025c46) signal_pane_stacon_g1_ParamLimits

0x00c1,	// (0x00025c46) signal_pane_stacon_g1

0x00d5,	// (0x00025c5a) signal_pane_stacon_g2_ParamLimits

0x00d5,	// (0x00025c5a) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0003523a) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0003523a) signal_pane_stacon_g

0x010a,	// (0x00025c8f) title_pane_stacon_t1_ParamLimits

0x010a,	// (0x00025c8f) title_pane_stacon_t1

0xcef7,	// (0x00032a7c) uni_indicator_pane_stacon_g1

0xcf01,	// (0x00032a86) uni_indicator_pane_stacon_g2

0xcf0b,	// (0x00032a90) uni_indicator_pane_stacon_g3

0xcf15,	// (0x00032a9a) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00035246) uni_indicator_pane_stacon_g

0x012f,	// (0x00025cb4) control_top_pane_stacon_g1

0x0137,	// (0x00025cbc) control_top_pane_stacon_t1_ParamLimits

0x0137,	// (0x00025cbc) control_top_pane_stacon_t1

0x016e,	// (0x00025cf3) aid_levels_battery_lsc_ParamLimits

0x016e,	// (0x00025cf3) aid_levels_battery_lsc

0x0185,	// (0x00025d0a) battery_pane_stacon_g1_ParamLimits

0x0185,	// (0x00025d0a) battery_pane_stacon_g1

0x0198,	// (0x00025d1d) battery_pane_stacon_g2_ParamLimits

0x0198,	// (0x00025d1d) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003524f) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003524f) battery_pane_stacon_g

0x01d6,	// (0x00025d5b) navi_icon_pane_stacon

0x01ea,	// (0x00025d6f) navi_navi_pane_stacon

0x01d6,	// (0x00025d5b) navi_text_pane_stacon

0x012f,	// (0x00025cb4) control_bottom_pane_stacon_g1

0x01fe,	// (0x00025d83) control_bottom_pane_stacon_t1_ParamLimits

0x01fe,	// (0x00025d83) control_bottom_pane_stacon_t1

0xa1e9,	// (0x0002fd6e) grid_app_pane_ParamLimits

0xa1e9,	// (0x0002fd6e) grid_app_pane

0xa221,	// (0x0002fda6) scroll_pane_cp15_ParamLimits

0xa221,	// (0x0002fda6) scroll_pane_cp15

0xa236,	// (0x0002fdbb) cell_app_pane_ParamLimits

0xa236,	// (0x0002fdbb) cell_app_pane

0xa27b,	// (0x0002fe00) cell_app_pane_g1_ParamLimits

0xa27b,	// (0x0002fe00) cell_app_pane_g1

0xcf39,	// (0x00032abe) cell_app_pane_g2_ParamLimits

0xcf39,	// (0x00032abe) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00035254) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00035254) cell_app_pane_g

0xa29f,	// (0x0002fe24) cell_app_pane_t1_ParamLimits

0xa29f,	// (0x0002fe24) cell_app_pane_t1

0xcf45,	// (0x00032aca) grid_highlight_pane_ParamLimits

0xcf45,	// (0x00032aca) grid_highlight_pane

0xccc7,	// (0x0003284c) cell_highlight_pane_g1

0xcccf,	// (0x00032854) cell_highlight_pane_g2

0xccd7,	// (0x0003285c) cell_highlight_pane_g3

0xccdf,	// (0x00032864) cell_highlight_pane_g4

0xcce7,	// (0x0003286c) cell_highlight_pane_g5

0xccef,	// (0x00032874) cell_highlight_pane_g6

0xccf7,	// (0x0003287c) cell_highlight_pane_g7

0xccff,	// (0x00032884) cell_highlight_pane_g8

0xcd07,	// (0x0003288c) cell_highlight_pane_g9

0xc857,	// (0x000323dc) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00035202) cell_highlight_pane_g

0xcf56,	// (0x00032adb) bg_scroll_pane

0xa2bf,	// (0x0002fe44) scroll_handle_pane

0xcf9d,	// (0x00032b22) scroll_bg_pane_g1

0xcfb2,	// (0x00032b37) scroll_bg_pane_g2

0xcfca,	// (0x00032b4f) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00035259) scroll_bg_pane_g

0xa2d3,	// (0x0002fe58) scroll_handle_focus_pane_ParamLimits

0xa2d3,	// (0x0002fe58) scroll_handle_focus_pane

0xcf9d,	// (0x00032b22) scroll_handle_pane_g1

0xcfdf,	// (0x00032b64) scroll_handle_pane_g2

0xcfca,	// (0x00032b4f) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00035260) scroll_handle_pane_g

0xcd18,	// (0x0003289d) bg_popup_sub_pane_cp21_ParamLimits

0xcd18,	// (0x0003289d) bg_popup_sub_pane_cp21

0xa2e0,	// (0x0002fe65) popup_fep_japan_predictive_window_t1_ParamLimits

0xa2e0,	// (0x0002fe65) popup_fep_japan_predictive_window_t1

0xa2f7,	// (0x0002fe7c) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2f7,	// (0x0002fe7c) popup_fep_japan_predictive_window_t2

0xa32a,	// (0x0002feaf) popup_fep_japan_predictive_window_t3_ParamLimits

0xa32a,	// (0x0002feaf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00035267) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00035267) popup_fep_japan_predictive_window_t

0xc861,	// (0x000323e6) bg_popup_sub_pane_cp23

0xa361,	// (0x0002fee6) listscroll_japin_cand_pane

0xcff3,	// (0x00032b78) popup_fep_japan_candidate_window_t1

0xd001,	// (0x00032b86) candidate_pane_ParamLimits

0xd001,	// (0x00032b86) candidate_pane

0xa369,	// (0x0002feee) scroll_pane_cp30

0xd013,	// (0x00032b98) list_single_popup_jap_candidate_pane_ParamLimits

0xd013,	// (0x00032b98) list_single_popup_jap_candidate_pane

0xc861,	// (0x000323e6) list_highlight_pane_cp30

0xd028,	// (0x00032bad) list_single_popup_jap_candidate_pane_t1

0xd037,	// (0x00032bbc) level_1_signal

0xd044,	// (0x00032bc9) level_2_signal

0xd051,	// (0x00032bd6) level_3_signal

0xd05e,	// (0x00032be3) level_4_signal

0xd06b,	// (0x00032bf0) level_5_signal

0xd078,	// (0x00032bfd) level_6_signal

0xd085,	// (0x00032c0a) level_7_signal

0xd037,	// (0x00032bbc) level_1_battery

0xd044,	// (0x00032bc9) level_2_battery

0xd051,	// (0x00032bd6) level_3_battery

0xd05e,	// (0x00032be3) level_4_battery

0xd06b,	// (0x00032bf0) level_5_battery

0xd078,	// (0x00032bfd) level_6_battery

0xd085,	// (0x00032c0a) level_7_battery

0xd0aa,	// (0x00032c2f) list_menu_pane_ParamLimits

0xd0aa,	// (0x00032c2f) list_menu_pane

0xd0c0,	// (0x00032c45) scroll_pane_cp25_ParamLimits

0xd0c0,	// (0x00032c45) scroll_pane_cp25

0xa371,	// (0x0002fef6) list_double2_graphic_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double2_graphic_pane_cp2

0xa371,	// (0x0002fef6) list_double2_large_graphic_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double2_large_graphic_pane_cp2

0xa371,	// (0x0002fef6) list_double2_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double2_pane_cp2

0xa371,	// (0x0002fef6) list_double_graphic_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double_graphic_pane_cp2

0xa371,	// (0x0002fef6) list_double_large_graphic_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double_large_graphic_pane_cp2

0xa371,	// (0x0002fef6) list_double_number_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double_number_pane_cp2

0xa371,	// (0x0002fef6) list_double_pane_cp2_ParamLimits

0xa371,	// (0x0002fef6) list_double_pane_cp2

0xa380,	// (0x0002ff05) list_single_2graphic_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_2graphic_pane_cp2

0xa380,	// (0x0002ff05) list_single_graphic_heading_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_graphic_heading_pane_cp2

0xa380,	// (0x0002ff05) list_single_graphic_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_graphic_pane_cp2

0xa380,	// (0x0002ff05) list_single_heading_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_heading_pane_cp2

0xd0e9,	// (0x00032c6e) list_single_large_graphic_pane_cp2_ParamLimits

0xd0e9,	// (0x00032c6e) list_single_large_graphic_pane_cp2

0xa380,	// (0x0002ff05) list_single_number_heading_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_number_heading_pane_cp2

0xa380,	// (0x0002ff05) list_single_number_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_number_pane_cp2

0xa380,	// (0x0002ff05) list_single_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_pane_cp2

0xd103,	// (0x00032c88) bg_popup_sub_pane_cp22

0x04af,	// (0x00026034) popup_side_volume_key_window_g1

0x04d3,	// (0x00026058) popup_side_volume_key_window_t1

0xa448,	// (0x0002ffcd) volume_small_pane_cp1

0xc8af,	// (0x00032434) bg_popup_sub_pane_cp24_ParamLimits

0xc8af,	// (0x00032434) bg_popup_sub_pane_cp24

0xd119,	// (0x00032c9e) fep_china_uni_candidate_pane_ParamLimits

0xd119,	// (0x00032c9e) fep_china_uni_candidate_pane

0xd12d,	// (0x00032cb2) fep_china_uni_entry_pane

0xd13d,	// (0x00032cc2) popup_fep_china_uni_window_g1

0xa450,	// (0x0002ffd5) fep_china_uni_entry_pane_g1

0xa458,	// (0x0002ffdd) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00035298) fep_china_uni_entry_pane_g

0x0507,	// (0x0002608c) fep_entry_item_pane

0x0511,	// (0x00026096) fep_candidate_item_pane

0xa460,	// (0x0002ffe5) fep_china_uni_candidate_pane_g1

0x0521,	// (0x000260a6) fep_china_uni_candidate_pane_g2

0x0529,	// (0x000260ae) fep_china_uni_candidate_pane_g3

0xa468,	// (0x0002ffed) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0003529d) fep_china_uni_candidate_pane_g

0xc857,	// (0x000323dc) fep_entry_item_pane_g1

0x0539,	// (0x000260be) fep_entry_item_pane_t1_ParamLimits

0x0539,	// (0x000260be) fep_entry_item_pane_t1

0x054f,	// (0x000260d4) fep_candidate_item_pane_t1_ParamLimits

0x054f,	// (0x000260d4) fep_candidate_item_pane_t1

0x0564,	// (0x000260e9) fep_candidate_item_pane_t2_ParamLimits

0x0564,	// (0x000260e9) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x000352a6) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x000352a6) fep_candidate_item_pane_t

0xc8bd,	// (0x00032442) list_highlight_pane_cp31_ParamLimits

0xc8bd,	// (0x00032442) list_highlight_pane_cp31

0x0576,	// (0x000260fb) level_1_signal_lsc

0x057f,	// (0x00026104) level_2_signal_lsc

0x0588,	// (0x0002610d) level_3_signal_lsc

0x0591,	// (0x00026116) level_4_signal_lsc

0x059a,	// (0x0002611f) level_5_signal_lsc

0x05a3,	// (0x00026128) level_6_signal_lsc

0x05ac,	// (0x00026131) level_7_signal_lsc

0x05ac,	// (0x00026131) level_1_battery_lsc

0x05b5,	// (0x0002613a) level_2_battery_lsc

0x05be,	// (0x00026143) level_3_battery_lsc

0x05c7,	// (0x0002614c) level_4_battery_lsc

0x05d0,	// (0x00026155) level_5_battery_lsc

0x05d9,	// (0x0002615e) level_6_battery_lsc

0x0576,	// (0x000260fb) level_7_battery_lsc

0x05e2,	// (0x00026167) scroll_handle_focus_pane_g1

0x05eb,	// (0x00026170) scroll_handle_focus_pane_g2

0x05f4,	// (0x00026179) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x000352ab) scroll_handle_focus_pane_g

0x9607,	// (0x0002f18c) list_single_2graphic_pane_g1_ParamLimits

0x9607,	// (0x0002f18c) list_single_2graphic_pane_g1

0x90c5,	// (0x0002ec4a) list_single_2graphic_pane_g2_ParamLimits

0x90c5,	// (0x0002ec4a) list_single_2graphic_pane_g2

0xeb78,	// (0x000346fd) list_single_2graphic_pane_g3_ParamLimits

0xeb78,	// (0x000346fd) list_single_2graphic_pane_g3

0x9613,	// (0x0002f198) list_single_2graphic_pane_g4_ParamLimits

0x9613,	// (0x0002f198) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x000352b2) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x000352b2) list_single_2graphic_pane_g

0x961f,	// (0x0002f1a4) list_single_2graphic_pane_t1_ParamLimits

0x961f,	// (0x0002f1a4) list_single_2graphic_pane_t1

0x964d,	// (0x0002f1d2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x964d,	// (0x0002f1d2) list_double2_graphic_large_graphic_pane_g1

0x9124,	// (0x0002eca9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9124,	// (0x0002eca9) list_double2_graphic_large_graphic_pane_g2

0xec2c,	// (0x000347b1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xec2c,	// (0x000347b1) list_double2_graphic_large_graphic_pane_g3

0x965f,	// (0x0002f1e4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x965f,	// (0x0002f1e4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x000352bb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x000352bb) list_double2_graphic_large_graphic_pane_g

0x9286,	// (0x0002ee0b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9286,	// (0x0002ee0b) list_double2_graphic_large_graphic_pane_t1

0x966b,	// (0x0002f1f0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x966b,	// (0x0002f1f0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x000352c4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x000352c4) list_double2_graphic_large_graphic_pane_t

0xa4e3,	// (0x00030068) popup_fast_swap_window_ParamLimits

0xa4e3,	// (0x00030068) popup_fast_swap_window

0xa4ff,	// (0x00030084) popup_side_volume_key_window

0x08b2,	// (0x00026437) stacon_top_pane

0x08bc,	// (0x00026441) status_pane_ParamLimits

0x08bc,	// (0x00026441) status_pane

0xa519,	// (0x0003009e) status_small_pane

0xc861,	// (0x000323e6) control_pane

0xc861,	// (0x000323e6) stacon_bottom_pane

0xcc52,	// (0x000327d7) scroll_pane_cp121

0xcc49,	// (0x000327ce) set_content_pane

0xa470,	// (0x0002fff5) bg_active_tab_pane_g1_cp1

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp1

0xa482,	// (0x00030007) bg_active_tab_pane_g3_cp1

0xa470,	// (0x0002fff5) bg_passive_tab_pane_g1_cp1

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp1

0xa482,	// (0x00030007) bg_passive_tab_pane_g3_cp1

0xa48b,	// (0x00030010) bg_active_tab_pane_g1_cp2

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp2

0xa494,	// (0x00030019) bg_active_tab_pane_g3_cp2

0xa48b,	// (0x00030010) bg_passive_tab_pane_g1_cp2

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp2

0xa494,	// (0x00030019) bg_passive_tab_pane_g3_cp2

0xa49d,	// (0x00030022) bg_active_tab_pane_g1_cp3

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp3

0xa4a6,	// (0x0003002b) bg_active_tab_pane_g3_cp3

0xa49d,	// (0x00030022) bg_passive_tab_pane_g1_cp3

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp3

0xa4a6,	// (0x0003002b) bg_passive_tab_pane_g3_cp3

0xa4af,	// (0x00030034) bg_active_tab_pane_g1_cp4

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp4

0xa4ba,	// (0x0003003f) bg_active_tab_pane_g3_cp4

0xa4af,	// (0x00030034) bg_passive_tab_pane_g1_cp4

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp4

0xa4ba,	// (0x0003003f) bg_passive_tab_pane_g3_cp4

0xa4c5,	// (0x0003004a) bg_active_tab_pane_g1_cp5

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp5

0xa4ce,	// (0x00030053) bg_active_tab_pane_g3_cp5

0xa4c5,	// (0x0003004a) bg_passive_tab_pane_g1_cp5

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp5

0xa4ce,	// (0x00030053) bg_passive_tab_pane_g3_cp5

0x49cb,	// (0x0002a550) list_set_graphic_pane_ParamLimits

0x49cb,	// (0x0002a550) list_set_graphic_pane

0xc861,	// (0x000323e6) bg_set_opt_pane_cp4

0x0801,	// (0x00026386) list_set_graphic_pane_g1_ParamLimits

0x0801,	// (0x00026386) list_set_graphic_pane_g1

0x080d,	// (0x00026392) list_set_graphic_pane_g2_ParamLimits

0x080d,	// (0x00026392) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x000352c9) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x000352c9) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x0003564e) volume_small_pane_cp_g

0xa4d7,	// (0x0003005c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4d7,	// (0x0003005c) list_double2_large_graphic_pane_g1_cp2

0x083b,	// (0x000263c0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x083b,	// (0x000263c0) list_double2_large_graphic_pane_g2_cp2

0x084c,	// (0x000263d1) list_double2_large_graphic_pane_g3_cp2

0x0854,	// (0x000263d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0854,	// (0x000263d9) list_double2_large_graphic_pane_t1_cp2

0x086a,	// (0x000263ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x086a,	// (0x000263ef) list_double2_large_graphic_pane_t2_cp2

0xba3a,	// (0x000315bf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xba3a,	// (0x000315bf) list_double_large_graphic_pane_g1_cp2

0x3f9d,	// (0x00029b22) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3f9d,	// (0x00029b22) list_double_large_graphic_pane_g2_cp2

0x09d7,	// (0x0002655c) list_double_large_graphic_pane_g3_cp2

0x3fae,	// (0x00029b33) list_double_large_graphic_pane_g4_cp

0x3fb6,	// (0x00029b3b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3fb6,	// (0x00029b3b) list_double_large_graphic_pane_t1_cp2

0x3fcd,	// (0x00029b52) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3fcd,	// (0x00029b52) list_double_large_graphic_pane_t2_cp2

0x08d5,	// (0x0002645a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x08d5,	// (0x0002645a) list_double2_graphic_pane_g1_cp2

0x08e3,	// (0x00026468) list_double2_graphic_pane_g2_cp2_ParamLimits

0x08e3,	// (0x00026468) list_double2_graphic_pane_g2_cp2

0x08f4,	// (0x00026479) list_double2_graphic_pane_g3_cp2

0x08fe,	// (0x00026483) list_double2_graphic_pane_t1_cp2_ParamLimits

0x08fe,	// (0x00026483) list_double2_graphic_pane_t1_cp2

0x0914,	// (0x00026499) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0914,	// (0x00026499) list_double2_graphic_pane_t2_cp2

0xd159,	// (0x00032cde) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd159,	// (0x00032cde) list_single_number_heading_pane_g1_cp2

0x0926,	// (0x000264ab) list_single_number_heading_pane_g2_cp2

0x092e,	// (0x000264b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x092e,	// (0x000264b3) list_single_number_heading_pane_t1_cp2

0x0944,	// (0x000264c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0944,	// (0x000264c9) list_single_number_heading_pane_t2_cp2

0x0956,	// (0x000264db) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0956,	// (0x000264db) list_single_number_heading_pane_t3_cp2

0xd159,	// (0x00032cde) list_single_heading_pane_g1_cp2_ParamLimits

0xd159,	// (0x00032cde) list_single_heading_pane_g1_cp2

0x0926,	// (0x000264ab) list_single_heading_pane_g2_cp2

0x092e,	// (0x000264b3) list_single_heading_pane_t1_cp2_ParamLimits

0x092e,	// (0x000264b3) list_single_heading_pane_t1_cp2

0x3d96,	// (0x0002991b) list_single_heading_pane_t2_cp2_ParamLimits

0x3d96,	// (0x0002991b) list_single_heading_pane_t2_cp2

0x3cde,	// (0x00029863) list_double_graphic_pane_g1_cp2_ParamLimits

0x3cde,	// (0x00029863) list_double_graphic_pane_g1_cp2

0x3cea,	// (0x0002986f) list_double_graphic_pane_g2_cp2_ParamLimits

0x3cea,	// (0x0002986f) list_double_graphic_pane_g2_cp2

0x3cf9,	// (0x0002987e) list_double_graphic_pane_g3_cp2

0x3d01,	// (0x00029886) list_double_graphic_pane_t1_cp2_ParamLimits

0x3d01,	// (0x00029886) list_double_graphic_pane_t1_cp2

0x3d17,	// (0x0002989c) list_double_graphic_pane_t2_cp2_ParamLimits

0x3d17,	// (0x0002989c) list_double_graphic_pane_t2_cp2

0x09cb,	// (0x00026550) list_double_number_pane_g1_cp2_ParamLimits

0x09cb,	// (0x00026550) list_double_number_pane_g1_cp2

0x09d7,	// (0x0002655c) list_double_number_pane_g2_cp2

0x3ca2,	// (0x00029827) list_double_number_pane_t1_cp2_ParamLimits

0x3ca2,	// (0x00029827) list_double_number_pane_t1_cp2

0x3cb6,	// (0x0002983b) list_double_number_pane_t2_cp2_ParamLimits

0x3cb6,	// (0x0002983b) list_double_number_pane_t2_cp2

0x3ccc,	// (0x00029851) list_double_number_pane_t3_cp2_ParamLimits

0x3ccc,	// (0x00029851) list_double_number_pane_t3_cp2

0x3b8b,	// (0x00029710) list_single_graphic_pane_g1_cp2_ParamLimits

0x3b8b,	// (0x00029710) list_single_graphic_pane_g1_cp2

0x0a2f,	// (0x000265b4) list_single_graphic_pane_g2_cp2_ParamLimits

0x0a2f,	// (0x000265b4) list_single_graphic_pane_g2_cp2

0x0a3b,	// (0x000265c0) list_single_graphic_pane_g3_cp2

0x3b61,	// (0x000296e6) list_single_graphic_pane_t1_cp2_ParamLimits

0x3b61,	// (0x000296e6) list_single_graphic_pane_t1_cp2

0x0a2f,	// (0x000265b4) list_single_number_pane_g1_cp2_ParamLimits

0x0a2f,	// (0x000265b4) list_single_number_pane_g1_cp2

0x0a3b,	// (0x000265c0) list_single_number_pane_g2_cp2

0x3b61,	// (0x000296e6) list_single_number_pane_t1_cp2_ParamLimits

0x3b61,	// (0x000296e6) list_single_number_pane_t1_cp2

0x3b77,	// (0x000296fc) list_single_number_pane_t2_cp2_ParamLimits

0x3b77,	// (0x000296fc) list_single_number_pane_t2_cp2

0x083b,	// (0x000263c0) list_double2_pane_g1_cp2_ParamLimits

0x083b,	// (0x000263c0) list_double2_pane_g1_cp2

0x084c,	// (0x000263d1) list_double2_pane_g2_cp2

0x09a3,	// (0x00026528) list_double2_pane_t1_cp2_ParamLimits

0x09a3,	// (0x00026528) list_double2_pane_t1_cp2

0x09b9,	// (0x0002653e) list_double2_pane_t2_cp2_ParamLimits

0x09b9,	// (0x0002653e) list_double2_pane_t2_cp2

0x09cb,	// (0x00026550) list_double_pane_g1_cp2_ParamLimits

0x09cb,	// (0x00026550) list_double_pane_g1_cp2

0x09d7,	// (0x0002655c) list_double_pane_g2_cp2

0x09df,	// (0x00026564) list_double_pane_t1_cp2_ParamLimits

0x09df,	// (0x00026564) list_double_pane_t1_cp2

0x09f5,	// (0x0002657a) list_double_pane_t2_cp2_ParamLimits

0x09f5,	// (0x0002657a) list_double_pane_t2_cp2

0xa524,	// (0x000300a9) list_single_pane_cp2_g3

0x0a2f,	// (0x000265b4) list_single_pane_g1_cp2_ParamLimits

0x0a2f,	// (0x000265b4) list_single_pane_g1_cp2

0x0a3b,	// (0x000265c0) list_single_pane_g2_cp2

0x0a43,	// (0x000265c8) list_single_pane_t1_cp2_ParamLimits

0x0a43,	// (0x000265c8) list_single_pane_t1_cp2

0xa52c,	// (0x000300b1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa52c,	// (0x000300b1) list_single_large_graphic_pane_g1_cp2

0x0a67,	// (0x000265ec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0a67,	// (0x000265ec) list_single_large_graphic_pane_g2_cp2

0x0a73,	// (0x000265f8) list_single_large_graphic_pane_g3_cp2

0xa538,	// (0x000300bd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa538,	// (0x000300bd) list_single_large_graphic_pane_g4_cp1

0x0a95,	// (0x0002661a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0a95,	// (0x0002661a) list_single_large_graphic_pane_t1_cp2

0x3b2d,	// (0x000296b2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3b2d,	// (0x000296b2) list_single_graphic_heading_pane_g1_cp2

0x3afa,	// (0x0002967f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3afa,	// (0x0002967f) list_single_graphic_heading_pane_g4_cp2

0x0a3b,	// (0x000265c0) list_single_graphic_heading_pane_g5_cp2

0x3b39,	// (0x000296be) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3b39,	// (0x000296be) list_single_graphic_heading_pane_t1_cp2

0x3b4f,	// (0x000296d4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3b4f,	// (0x000296d4) list_single_graphic_heading_pane_t2_cp2

0x3aee,	// (0x00029673) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3aee,	// (0x00029673) list_single_2graphic_pane_g1_cp2

0x3afa,	// (0x0002967f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3afa,	// (0x0002967f) list_single_2graphic_pane_g2_cp2

0x0a3b,	// (0x000265c0) list_single_2graphic_pane_g3_cp2

0x3b0b,	// (0x00029690) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3b0b,	// (0x00029690) list_single_2graphic_pane_g4_cp2

0x3b17,	// (0x0002969c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3b17,	// (0x0002969c) list_single_2graphic_pane_t1_cp2

0xc857,	// (0x000323dc) list_highlight_pane_g10_cp1

0x36d6,	// (0x0002925b) list_highlight_pane_g1_cp1

0x36de,	// (0x00029263) list_highlight_pane_g2_cp1

0x36e6,	// (0x0002926b) list_highlight_pane_g3_cp1

0x36ee,	// (0x00029273) list_highlight_pane_g4_cp1

0x36f6,	// (0x0002927b) list_highlight_pane_g5_cp1

0x36fe,	// (0x00029283) list_highlight_pane_g6_cp1

0x3706,	// (0x0002928b) list_highlight_pane_g7_cp1

0x370e,	// (0x00029293) list_highlight_pane_g8_cp1

0x3716,	// (0x0002929b) list_highlight_pane_g9_cp1

0xb7c7,	// (0x0003134c) form_field_slider_pane_t3

0xb7d5,	// (0x0003135a) form_field_slider_pane_t4

0x361a,	// (0x0002919f) slider_form_pane_ParamLimits

0x361a,	// (0x0002919f) slider_form_pane

0xc861,	// (0x000323e6) control_abbreviations

0xc861,	// (0x000323e6) control_conventions

0xc861,	// (0x000323e6) control_definitions

0xc861,	// (0x000323e6) format_table_attribute

0xba11,	// (0x00031596) bg_popup_preview_window_pane_g9

0xc861,	// (0x000323e6) format_table_data2

0xc861,	// (0x000323e6) format_table_data3

0xc861,	// (0x000323e6) format_table_data_example

0x0008,

0xc861,	// (0x000323e6) intro_purpose

0xf8d4,	// (0x00035459) bg_popup_preview_window_pane_g

0xc861,	// (0x000323e6) texts_category

0xc861,	// (0x000323e6) texts_graphics

0x0aab,	// (0x00026630) text_digital

0x0aba,	// (0x0002663f) text_primary

0x0ac9,	// (0x0002664e) text_primary_small

0x0ad8,	// (0x0002665d) text_secondary

0x0ae7,	// (0x0002666c) text_title

0xbe32,	// (0x000319b7) bg_passive_tab_pane_g1_cp3_srt

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp3_srt

0xbe3b,	// (0x000319c0) bg_passive_tab_pane_g3_cp3_srt

0xc8af,	// (0x00032434) bg_active_tab_pane_cp3_srt_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp3_srt

0xbe44,	// (0x000319c9) tabs_4_active_pane_srt_g1

0xbe4c,	// (0x000319d1) tabs_4_active_pane_srt_t1_ParamLimits

0xbe4c,	// (0x000319d1) tabs_4_active_pane_srt_t1

0xbe32,	// (0x000319b7) bg_active_tab_pane_g1_cp3_copy1

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp3_copy1

0xbe3b,	// (0x000319c0) bg_active_tab_pane_g3_cp3_copy1

0xc8bd,	// (0x00032442) tabs_2_long_active_pane_srt_ParamLimits

0xc8bd,	// (0x00032442) tabs_2_long_active_pane_srt

0xc8bd,	// (0x00032442) tabs_2_long_passive_pane_srt_ParamLimits

0xc8bd,	// (0x00032442) tabs_2_long_passive_pane_srt

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp4_srt

0xbb79,	// (0x000316fe) bg_passive_tab_pane_g1_cp4_srt

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp4_srt

0xbb82,	// (0x00031707) bg_passive_tab_pane_g3_cp4_srt

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp4_srt_ParamLimits

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp4_srt

0xbb8b,	// (0x00031710) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbb8b,	// (0x00031710) tabs_2_long_active_pane_srt_t1

0xbb79,	// (0x000316fe) bg_active_tab_pane_g1_cp4_srt

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp4_srt

0xbb82,	// (0x00031707) bg_active_tab_pane_g3_cp4_srt

0xc8af,	// (0x00032434) tabs_3_long_active_pane_srt_ParamLimits

0xc8af,	// (0x00032434) tabs_3_long_active_pane_srt

0xc8af,	// (0x00032434) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc8af,	// (0x00032434) tabs_3_long_passive_pane_cp_srt

0xc8af,	// (0x00032434) tabs_3_long_passive_pane_srt_ParamLimits

0xc8af,	// (0x00032434) tabs_3_long_passive_pane_srt

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp5_srt

0xa4c5,	// (0x0003004a) bg_passive_tab_pane_g1_cp5_srt

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp5_srt

0xa4ce,	// (0x00030053) bg_passive_tab_pane_g3_cp5_srt

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp5_srt_ParamLimits

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp5_srt

0xbb63,	// (0x000316e8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbb63,	// (0x000316e8) tabs_3_long_active_pane_srt_t1

0xa4c5,	// (0x0003004a) bg_active_tab_pane_g1_cp5_srt

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp5_srt

0xa4ce,	// (0x00030053) bg_active_tab_pane_g3_cp5_srt

0x41e1,	// (0x00029d66) navi_text_pane_srt_t1

0x41d9,	// (0x00029d5e) navi_icon_pane_srt_g1

0x0d61,	// (0x000268e6) midp_editing_number_pane_srt

0x0af6,	// (0x0002667b) midp_ticker_pane_srt

0x0d69,	// (0x000268ee) midp_ticker_pane_srt_g1

0x0d71,	// (0x000268f6) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x000352e8) midp_ticker_pane_srt_g

0x0d79,	// (0x000268fe) midp_ticker_pane_srt_t1

0x41ca,	// (0x00029d4f) midp_editing_number_pane_t1_copy1

0xa552,	// (0x000300d7) listscroll_midp_pane

0xa552,	// (0x000300d7) midp_form_pane

0xa5bd,	// (0x00030142) midp_info_popup_window_ParamLimits

0xa5bd,	// (0x00030142) midp_info_popup_window

0xcd18,	// (0x0003289d) bg_popup_sub_pane_cp50_ParamLimits

0xcd18,	// (0x0003289d) bg_popup_sub_pane_cp50

0x331e,	// (0x00028ea3) listscroll_midp_info_pane_ParamLimits

0x331e,	// (0x00028ea3) listscroll_midp_info_pane

0x32fe,	// (0x00028e83) listscroll_form_midp_pane_ParamLimits

0x32fe,	// (0x00028e83) listscroll_form_midp_pane

0x330a,	// (0x00028e8f) scroll_bar_cp050

0x32fe,	// (0x00028e83) list_midp_pane

0xc03c,	// (0x00031bc1) signal_pane_g2_cp

0x3218,	// (0x00028d9d) listscroll_midp_info_pane_t1_ParamLimits

0x3218,	// (0x00028d9d) listscroll_midp_info_pane_t1

0xb601,	// (0x00031186) listscroll_midp_info_pane_t2_ParamLimits

0xb601,	// (0x00031186) listscroll_midp_info_pane_t2

0xb63f,	// (0x000311c4) listscroll_midp_info_pane_t3_ParamLimits

0xb63f,	// (0x000311c4) listscroll_midp_info_pane_t3

0xb679,	// (0x000311fe) listscroll_midp_info_pane_t4_ParamLimits

0xb679,	// (0x000311fe) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00035394) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00035394) listscroll_midp_info_pane_t

0xcd8e,	// (0x00032913) scroll_pane_cp21

0x31b8,	// (0x00028d3d) form_midp_field_choice_group_pane

0xb5c4,	// (0x00031149) form_midp_field_text_pane

0x31fe,	// (0x00028d83) form_midp_field_time_pane

0x3206,	// (0x00028d8b) form_midp_gauge_slider_pane

0x320f,	// (0x00028d94) form_midp_gauge_wait_pane

0xc861,	// (0x000323e6) form_midp_image_pane

0x967d,	// (0x0002f202) list_single_midp_pane_ParamLimits

0x967d,	// (0x0002f202) list_single_midp_pane

0xb5a2,	// (0x00031127) form_midp_field_text_pane_t1

0x2f37,	// (0x00028abc) input_focus_pane_cp050

0x31a7,	// (0x00028d2c) list_midp_form_text_pane

0x313c,	// (0x00028cc1) form_midp_field_choice_group_pane_t1

0x314a,	// (0x00028ccf) input_focus_pane_cp051

0x315e,	// (0x00028ce3) list_midp_choice_pane

0xc861,	// (0x000323e6) status_idle_pane

0x3120,	// (0x00028ca5) form_midp_field_time_pane_t1

0xc857,	// (0x000323dc) wait_anim_pane_g2_copy1

0x312e,	// (0x00028cb3) form_midp_field_time_pane_t2

0x0001,

0x0c20,	// (0x000267a5) aid_navinavi_width_2_pane

0xf80a,	// (0x0003538f) form_midp_field_time_pane_t

0xc861,	// (0x000323e6) input_focus_pane_cp052

0xc861,	// (0x000323e6) bg_input_focus_pane_cp040

0x30e0,	// (0x00028c65) form_midp_gauge_slider_pane_t1

0x30ee,	// (0x00028c73) form_midp_gauge_slider_pane_t2

0xb586,	// (0x0003110b) form_midp_gauge_slider_pane_t3

0xb594,	// (0x00031119) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00035386) form_midp_gauge_slider_pane_t

0x3118,	// (0x00028c9d) form_midp_slider_pane

0xc8bd,	// (0x00032442) bg_input_focus_pane_cp041_ParamLimits

0xc8bd,	// (0x00032442) bg_input_focus_pane_cp041

0x30ad,	// (0x00028c32) form_midp_gauge_wait_pane_t1_ParamLimits

0x30ad,	// (0x00028c32) form_midp_gauge_wait_pane_t1

0x30bf,	// (0x00028c44) form_midp_gauge_wait_pane_t2_ParamLimits

0x30bf,	// (0x00028c44) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00035381) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00035381) form_midp_gauge_wait_pane_t

0x30d1,	// (0x00028c56) form_midp_wait_pane_ParamLimits

0x30d1,	// (0x00028c56) form_midp_wait_pane

0xb550,	// (0x000310d5) form_midp_image_pane_g1

0xb559,	// (0x000310de) form_midp_image_pane_t1

0xb568,	// (0x000310ed) form_midp_image_pane_t2

0xb577,	// (0x000310fc) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x0003537a) form_midp_image_pane_t

0x306e,	// (0x00028bf3) list_single_midp_pane_g1

0xeda3,	// (0x00034928) list_single_midp_pane_t1

0xb53b,	// (0x000310c0) list_midp_form_item_pane_ParamLimits

0xb53b,	// (0x000310c0) list_midp_form_item_pane

0x0bc8,	// (0x0002674d) list_midp_form_item_pane_t1

0x0bd7,	// (0x0002675c) midp_ticker_pane_g1

0x0be3,	// (0x00026768) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x000352ce) midp_ticker_pane_g

0x0bef,	// (0x00026774) midp_ticker_pane_t1

0x4417,	// (0x00029f9c) midp_editing_number_pane_t1

0x43f5,	// (0x00029f7a) midp_editing_number_pane

0x4404,	// (0x00029f89) midp_ticker_pane

0x41ba,	// (0x00029d3f) ai_message_heading_pane

0xc861,	// (0x000323e6) bg_popup_window_pane_cp14

0x41c2,	// (0x00029d47) listscroll_ai_message_pane

0x4144,	// (0x00029cc9) ai_message_heading_pane_g1_ParamLimits

0x4144,	// (0x00029cc9) ai_message_heading_pane_g1

0xbb2b,	// (0x000316b0) ai_message_heading_pane_g2_ParamLimits

0xbb2b,	// (0x000316b0) ai_message_heading_pane_g2

0x415c,	// (0x00029ce1) ai_message_heading_pane_g3_ParamLimits

0x415c,	// (0x00029ce1) ai_message_heading_pane_g3

0x4168,	// (0x00029ced) ai_message_heading_pane_g4_ParamLimits

0x4168,	// (0x00029ced) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x000354bb) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x000354bb) ai_message_heading_pane_g

0xbb37,	// (0x000316bc) ai_message_heading_pane_t1_ParamLimits

0xbb37,	// (0x000316bc) ai_message_heading_pane_t1

0xbb51,	// (0x000316d6) ai_message_heading_pane_t2_ParamLimits

0xbb51,	// (0x000316d6) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x000354c4) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x000354c4) ai_message_heading_pane_t

0x41a0,	// (0x00029d25) bg_popup_heading_pane_cp1_ParamLimits

0x41a0,	// (0x00029d25) bg_popup_heading_pane_cp1

0x4132,	// (0x00029cb7) list_ai_message_pane_ParamLimits

0x4132,	// (0x00029cb7) list_ai_message_pane

0xcd8e,	// (0x00032913) scroll_pane_cp10

0x40ce,	// (0x00029c53) list_ai_message_pane_g1

0x40d6,	// (0x00029c5b) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00035498) list_ai_message_pane_g

0x40de,	// (0x00029c63) list_ai_message_pane_t1_ParamLimits

0x40de,	// (0x00029c63) list_ai_message_pane_t1

0x40f3,	// (0x00029c78) list_ai_message_pane_t2_ParamLimits

0x40f3,	// (0x00029c78) list_ai_message_pane_t2

0x4108,	// (0x00029c8d) list_ai_message_pane_t3_ParamLimits

0x4108,	// (0x00029c8d) list_ai_message_pane_t3

0x411d,	// (0x00029ca2) list_ai_message_pane_t4_ParamLimits

0x411d,	// (0x00029ca2) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x0003549d) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x0003549d) list_ai_message_pane_t

0xbab7,	// (0x0003163c) cell_ai_soft_ind_pane_ParamLimits

0xbab7,	// (0x0003163c) cell_ai_soft_ind_pane

0x0c01,	// (0x00026786) cell_ai_soft_ind_pane_g1_ParamLimits

0x0c01,	// (0x00026786) cell_ai_soft_ind_pane_g1

0xc861,	// (0x000323e6) grid_highlight_cp1

0x0c0e,	// (0x00026793) text_secondary_cp56_ParamLimits

0x0c0e,	// (0x00026793) text_secondary_cp56

0x408e,	// (0x00029c13) example_general_pane_ParamLimits

0x408e,	// (0x00029c13) example_general_pane

0x409a,	// (0x00029c1f) example_parent_pane_g1_ParamLimits

0x409a,	// (0x00029c1f) example_parent_pane_g1

0x40a6,	// (0x00029c2b) example_parent_pane_t1_ParamLimits

0x40a6,	// (0x00029c2b) example_parent_pane_t1

0xacbf,	// (0x00030844) popup_preview_text_window_ParamLimits

0xacbf,	// (0x00030844) popup_preview_text_window

0x0a27,	// (0x000265ac) list_single_pane_cp2_g4

0xca8f,	// (0x00032614) bg_popup_preview_window_pane_ParamLimits

0xca8f,	// (0x00032614) bg_popup_preview_window_pane

0xba19,	// (0x0003159e) popup_preview_text_window_t1_ParamLimits

0xba19,	// (0x0003159e) popup_preview_text_window_t1

0x3e06,	// (0x0002998b) popup_preview_text_window_t2_ParamLimits

0x3e06,	// (0x0002998b) popup_preview_text_window_t2

0x3e4f,	// (0x000299d4) popup_preview_text_window_t3_ParamLimits

0x3e4f,	// (0x000299d4) popup_preview_text_window_t3

0x3e94,	// (0x00029a19) popup_preview_text_window_t4_ParamLimits

0x3e94,	// (0x00029a19) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x0003546c) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x0003546c) popup_preview_text_window_t

0x3f12,	// (0x00029a97) scroll_pane_cp11

0x2ec3,	// (0x00028a48) bg_popup_preview_window_pane_g1

0xb9d9,	// (0x0003155e) bg_popup_preview_window_pane_g2

0xb9e1,	// (0x00031566) bg_popup_preview_window_pane_g3

0xb9e9,	// (0x0003156e) bg_popup_preview_window_pane_g4

0xb9f1,	// (0x00031576) bg_popup_preview_window_pane_g5

0xb9f9,	// (0x0003157e) bg_popup_preview_window_pane_g6

0xba01,	// (0x00031586) bg_popup_preview_window_pane_g7

0xba09,	// (0x0003158e) bg_popup_preview_window_pane_g8

0xf3cb,	// (0x00034f50) aid_popup_width_pane

0xac3b,	// (0x000307c0) popup_midp_note_alarm_window_ParamLimits

0xac3b,	// (0x000307c0) popup_midp_note_alarm_window

0xcc63,	// (0x000327e8) data_form_pane_ParamLimits

0x9464,	// (0x0002efe9) form_field_data_pane_g1

0x946e,	// (0x0002eff3) form_field_data_pane_t1_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_ParamLimits

0x9488,	// (0x0002f00d) data_form_wide_pane_ParamLimits

0x9499,	// (0x0002f01e) form_field_data_wide_pane_g1

0x94a5,	// (0x0002f02a) form_field_data_wide_pane_t1_ParamLimits

0xcb63,	// (0x000326e8) input_focus_pane_cp6_ParamLimits

0xa159,	// (0x0002fcde) input_popup_find_pane_g1_ParamLimits

0xa159,	// (0x0002fcde) input_popup_find_pane_g1

0x01a9,	// (0x00025d2e) aid_navi_side_left_pane

0x01be,	// (0x00025d43) aid_navi_side_right_pane

0x37d1,	// (0x00029356) bg_popup_window_pane_cp30_ParamLimits

0x37d1,	// (0x00029356) bg_popup_window_pane_cp30

0x384b,	// (0x000293d0) popup_midp_note_alarm_window_g1_ParamLimits

0x384b,	// (0x000293d0) popup_midp_note_alarm_window_g1

0x387b,	// (0x00029400) popup_midp_note_alarm_window_t1_ParamLimits

0x387b,	// (0x00029400) popup_midp_note_alarm_window_t1

0xb81a,	// (0x0003139f) popup_midp_note_alarm_window_t2_ParamLimits

0xb81a,	// (0x0003139f) popup_midp_note_alarm_window_t2

0xb8c8,	// (0x0003144d) popup_midp_note_alarm_window_t3_ParamLimits

0xb8c8,	// (0x0003144d) popup_midp_note_alarm_window_t3

0xb8f0,	// (0x00031475) popup_midp_note_alarm_window_t4_ParamLimits

0xb8f0,	// (0x00031475) popup_midp_note_alarm_window_t4

0x3a12,	// (0x00029597) popup_midp_note_alarm_window_t5_ParamLimits

0x3a12,	// (0x00029597) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00035409) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00035409) popup_midp_note_alarm_window_t

0x3abe,	// (0x00029643) wait_bar_pane_cp1_ParamLimits

0x3abe,	// (0x00029643) wait_bar_pane_cp1

0xc861,	// (0x000323e6) wait_anim_pane_copy1

0xc861,	// (0x000323e6) wait_border_pane_copy1

0x34c7,	// (0x0002904c) wait_border_pane_g1_copy1

0x94bf,	// (0x0002f044) form_field_popup_pane_g1

0x94c7,	// (0x0002f04c) form_field_popup_pane_t1_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_cp7_ParamLimits

0xcc9d,	// (0x00032822) list_form_pane_ParamLimits

0x94e1,	// (0x0002f066) form_field_popup_wide_pane_g1

0x94e9,	// (0x0002f06e) form_field_popup_wide_pane_t1_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_cp8_ParamLimits

0xcca9,	// (0x0003282e) list_form_wide_pane_ParamLimits

0xbea5,	// (0x00031a2a) aid_size_cell_graphic_pane

0x9575,	// (0x0002f0fa) data_form_pane_t1_ParamLimits

0x96a7,	// (0x0002f22c) data_form_wide_pane_t1_ParamLimits

0xb102,	// (0x00030c87) bg_status_flat_pane

0x9b30,	// (0x0002f6b5) title_pane_t1_ParamLimits

0xc877,	// (0x000323fc) title_pane_t2_ParamLimits

0xc89d,	// (0x00032422) title_pane_t3_ParamLimits

0xf557,	// (0x000350dc) title_pane_t_ParamLimits

0xd037,	// (0x00032bbc) level_1_signal_ParamLimits

0xd044,	// (0x00032bc9) level_2_signal_ParamLimits

0xd051,	// (0x00032bd6) level_3_signal_ParamLimits

0xd05e,	// (0x00032be3) level_4_signal_ParamLimits

0xd06b,	// (0x00032bf0) level_5_signal_ParamLimits

0xd078,	// (0x00032bfd) level_6_signal_ParamLimits

0xd085,	// (0x00032c0a) level_7_signal_ParamLimits

0xd037,	// (0x00032bbc) level_1_battery_ParamLimits

0xd044,	// (0x00032bc9) level_2_battery_ParamLimits

0xd051,	// (0x00032bd6) level_3_battery_ParamLimits

0xd05e,	// (0x00032be3) level_4_battery_ParamLimits

0xd06b,	// (0x00032bf0) level_5_battery_ParamLimits

0xd078,	// (0x00032bfd) level_6_battery_ParamLimits

0xd085,	// (0x00032c0a) level_7_battery_ParamLimits

0x36d6,	// (0x0002925b) bg_status_flat_pane_g1

0x36de,	// (0x00029263) bg_status_flat_pane_g2

0x36e6,	// (0x0002926b) bg_status_flat_pane_g3

0x36ee,	// (0x00029273) bg_status_flat_pane_g4

0x36f6,	// (0x0002927b) bg_status_flat_pane_g5

0x36fe,	// (0x00029283) bg_status_flat_pane_g6

0x3706,	// (0x0002928b) bg_status_flat_pane_g7

0x9bc4,	// (0x0002f749) tabs_3_active_pane_t1_ParamLimits

0x9bc4,	// (0x0002f749) tabs_3_passive_pane_t1_ParamLimits

0x9bde,	// (0x0002f763) tabs_4_active_pane_t1_ParamLimits

0x9bde,	// (0x0002f763) tabs_4_1_passive_pane_t1_ParamLimits

0xa198,	// (0x0002fd1d) tabs_2_active_pane_t1_ParamLimits

0xa198,	// (0x0002fd1d) tabs_2_passive_pane_t1_ParamLimits

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp4_ParamLimits

0xa1aa,	// (0x0002fd2f) tabs_2_long_active_pane_t1_ParamLimits

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp4_ParamLimits

0x19b3,	// (0x00027538) list_single_midp_graphic_pane_t1_ParamLimits

0xc8bd,	// (0x00032442) bg_active_tab_pane_cp5_ParamLimits

0xa1bd,	// (0x0002fd42) tabs_3_long_active_pane_t1_ParamLimits

0x1060,	// (0x00026be5) bg_passive_tab_pane_cp5_ParamLimits

0x19b3,	// (0x00027538) list_single_midp_graphic_pane_t1

0xb102,	// (0x00030c87) bg_status_flat_pane_ParamLimits

0x179b,	// (0x00027320) indicator_pane_cp2_ParamLimits

0x179b,	// (0x00027320) indicator_pane_cp2

0xb280,	// (0x00030e05) navi_pane_srt_ParamLimits

0xb280,	// (0x00030e05) navi_pane_srt

0x18ea,	// (0x0002746f) popup_clock_digital_analogue_window_cp1

0xc901,	// (0x00032486) indicator_pane_t1

0x0af6,	// (0x0002667b) copy_highlight_pane

0x0af6,	// (0x0002667b) cursor_graphics_pane

0x0af6,	// (0x0002667b) graphic_within_text_pane

0x0af6,	// (0x0002667b) link_highlight_pane

0x3ed5,	// (0x00029a5a) popup_preview_text_window_t5_ParamLimits

0x3ed5,	// (0x00029a5a) popup_preview_text_window_t5

0x0c28,	// (0x000267ad) cursor_digital_pane

0x0c28,	// (0x000267ad) cursor_primary_pane

0x0c39,	// (0x000267be) cursor_primary_small_pane

0x0c41,	// (0x000267c6) cursor_secondary_pane

0x0c49,	// (0x000267ce) cursor_title_pane

0x0c28,	// (0x000267ad) link_highlight_digital_pane

0x0c30,	// (0x000267b5) link_highlight_primary_pane

0x0c39,	// (0x000267be) link_highlight_primary_small_pane

0x0c41,	// (0x000267c6) link_highlight_secondary_pane

0x0c49,	// (0x000267ce) link_highlight_title_pane

0x0c28,	// (0x000267ad) copy_highlight_digital_pane

0x0c28,	// (0x000267ad) copy_highlight_primary_pane

0x0c39,	// (0x000267be) copy_highlight_primary_small_pane

0x0c41,	// (0x000267c6) copy_highlight_secondary_pane

0x0c49,	// (0x000267ce) copy_highlight_title_pane

0x0c41,	// (0x000267c6) graphic_text_digital_pane

0x3774,	// (0x000292f9) graphic_text_primary_pane

0x377d,	// (0x00029302) graphic_text_primary_small_pane

0x0c39,	// (0x000267be) graphic_text_secondary_pane

0x0c28,	// (0x000267ad) graphic_text_title_pane

0xa60e,	// (0x00030193) cursor_primary_pane_g1

0x3766,	// (0x000292eb) cursor_text_primary_t1

0xb810,	// (0x00031395) cursor_primary_small_pane_g1

0x3758,	// (0x000292dd) cursor_text_primary_small_t1

0xb806,	// (0x0003138b) cursor_primary_small_pane_g1_copy1

0x3740,	// (0x000292c5) cursor_text_primary_small_t1_copy1

0x371e,	// (0x000292a3) cursor_text_title_t1

0xb7fc,	// (0x00031381) cursor_title_pane_g1

0xa60e,	// (0x00030193) cursor_digital_pane_g1

0x0c5b,	// (0x000267e0) cursor_text_digital_t1

0x0c69,	// (0x000267ee) link_highlight_primary_pane_g1

0x36c7,	// (0x0002924c) link_highlight_primary_pane_t1

0x0c69,	// (0x000267ee) link_highlight_primary_small_pane_g1

0x0c71,	// (0x000267f6) link_highlight_primary_small_pane_t1

0x0c69,	// (0x000267ee) link_highlight_secondary_pane_g1

0x0c80,	// (0x00026805) link_highlight_secondary_pane_t1

0x362c,	// (0x000291b1) link_highlight_title_pane_g1

0x3643,	// (0x000291c8) link_highlight_title_pane_t1

0x362c,	// (0x000291b1) link_highlight_digital_pane_g1

0x3634,	// (0x000291b9) link_highlight_digital_pane_t1

0x34e6,	// (0x0002906b) copy_highlight_primary_pane_g1

0x350c,	// (0x00029091) copy_highlight_primary_pane_t1

0x34e6,	// (0x0002906b) copy_highlight_primary_small_pane_g1

0x34fd,	// (0x00029082) copy_highlight_primary_small_pane_t1

0x0c8f,	// (0x00026814) copy_highlight_secondary_pane_g1

0x0c97,	// (0x0002681c) copy_highlight_secondary_pane_t1

0x34e6,	// (0x0002906b) copy_highlight_title_pane_g1

0x34ee,	// (0x00029073) copy_highlight_title_pane_t1

0x34e6,	// (0x0002906b) copy_highlight_digital_pane_g1

0x476f,	// (0x0002a2f4) copy_highlight_digital_pane_t1

0x46c3,	// (0x0002a248) graphic_text_primary_pane_g1

0x4753,	// (0x0002a2d8) graphic_text_primary_pane_t1

0x4761,	// (0x0002a2e6) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00035538) graphic_text_primary_pane_t

0x472f,	// (0x0002a2b4) graphic_text_primary_small_pane_g1

0x4737,	// (0x0002a2bc) graphic_text_primary_small_pane_t1

0x4745,	// (0x0002a2ca) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00035533) graphic_text_primary_small_pane_t

0x470b,	// (0x0002a290) graphic_text_secondary_pane_g1

0x4713,	// (0x0002a298) graphic_text_secondary_pane_t1

0x4721,	// (0x0002a2a6) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x0003552e) graphic_text_secondary_pane_t

0x46e7,	// (0x0002a26c) graphic_text_title_pane_g1

0x46ef,	// (0x0002a274) graphic_text_title_pane_t1

0x46fd,	// (0x0002a282) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00035529) graphic_text_title_pane_t

0x46c3,	// (0x0002a248) graphic_text_digital_pane_g1

0x46cb,	// (0x0002a250) graphic_text_digital_pane_t1

0x46d9,	// (0x0002a25e) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00035524) graphic_text_digital_pane_t

0xc8bd,	// (0x00032442) navi_icon_pane_srt_ParamLimits

0xc8bd,	// (0x00032442) navi_icon_pane_srt

0xc861,	// (0x000323e6) navi_midp_pane_srt

0xc861,	// (0x000323e6) navi_navi_pane_srt

0xc8bd,	// (0x00032442) navi_text_pane_srt_ParamLimits

0xc8bd,	// (0x00032442) navi_text_pane_srt

0x468e,	// (0x0002a213) navi_navi_icon_text_pane_srt

0x4696,	// (0x0002a21b) navi_navi_pane_srt_g1_ParamLimits

0x4696,	// (0x0002a21b) navi_navi_pane_srt_g1

0x46a8,	// (0x0002a22d) navi_navi_pane_srt_g2_ParamLimits

0x46a8,	// (0x0002a22d) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x0003551f) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x0003551f) navi_navi_pane_srt_g

0x46ba,	// (0x0002a23f) navi_navi_tabs_pane_srt

0x468e,	// (0x0002a213) navi_navi_text_pane_srt

0x468e,	// (0x0002a213) navi_navi_volume_pane_srt

0x467f,	// (0x0002a204) navi_navi_text_pane_srt_t1

0x1d33,	// (0x000278b8) navi_navi_volume_pane_srt_g1

0x1d3b,	// (0x000278c0) volume_small_pane_srt_ParamLimits

0x1d3b,	// (0x000278c0) volume_small_pane_srt

0x0ca6,	// (0x0002682b) volume_small_pane_srt_g1_ParamLimits

0x0ca6,	// (0x0002682b) volume_small_pane_srt_g1

0x0cb6,	// (0x0002683b) volume_small_pane_srt_g2_ParamLimits

0x0cb6,	// (0x0002683b) volume_small_pane_srt_g2

0x0cc7,	// (0x0002684c) volume_small_pane_srt_g3_ParamLimits

0x0cc7,	// (0x0002684c) volume_small_pane_srt_g3

0x0cd8,	// (0x0002685d) volume_small_pane_srt_g4_ParamLimits

0x0cd8,	// (0x0002685d) volume_small_pane_srt_g4

0x0ce9,	// (0x0002686e) volume_small_pane_srt_g5_ParamLimits

0x0ce9,	// (0x0002686e) volume_small_pane_srt_g5

0x0cfa,	// (0x0002687f) volume_small_pane_srt_g6_ParamLimits

0x0cfa,	// (0x0002687f) volume_small_pane_srt_g6

0x0d0b,	// (0x00026890) volume_small_pane_srt_g7_ParamLimits

0x0d0b,	// (0x00026890) volume_small_pane_srt_g7

0x0d1c,	// (0x000268a1) volume_small_pane_srt_g8_ParamLimits

0x0d1c,	// (0x000268a1) volume_small_pane_srt_g8

0x0d2d,	// (0x000268b2) volume_small_pane_srt_g9_ParamLimits

0x0d2d,	// (0x000268b2) volume_small_pane_srt_g9

0x0d3e,	// (0x000268c3) volume_small_pane_srt_g10_ParamLimits

0x0d3e,	// (0x000268c3) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x000352d3) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x000352d3) volume_small_pane_srt_g

0x9e9f,	// (0x0002fa24) query_popup_data_pane_cp2

0x4665,	// (0x0002a1ea) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4665,	// (0x0002a1ea) navi_navi_icon_text_pane_srt_t1

0x3774,	// (0x000292f9) navi_tabs_2_long_pane_srt

0x3774,	// (0x000292f9) navi_tabs_2_pane_srt

0x3774,	// (0x000292f9) navi_tabs_3_long_pane_srt

0x3774,	// (0x000292f9) navi_tabs_3_pane_srt

0x3774,	// (0x000292f9) navi_tabs_4_pane_srt

0xbf52,	// (0x00031ad7) tabs_2_active_pane_srt_ParamLimits

0xbf52,	// (0x00031ad7) tabs_2_active_pane_srt

0xbf62,	// (0x00031ae7) tabs_2_passive_pane_srt_ParamLimits

0xbf62,	// (0x00031ae7) tabs_2_passive_pane_srt

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp1_srt

0xbf22,	// (0x00031aa7) bg_passive_tab_pane_g1_cp1_srt

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp1_srt

0xbf2b,	// (0x00031ab0) bg_passive_tab_pane_g3_cp1_srt

0xc8af,	// (0x00032434) bg_active_tab_pane_cp1_srt_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp1_srt

0xbf34,	// (0x00031ab9) tabs_2_active_pane_srt_g1

0xbf3c,	// (0x00031ac1) tabs_2_active_pane_srt_t1_ParamLimits

0xbf3c,	// (0x00031ac1) tabs_2_active_pane_srt_t1

0xbf22,	// (0x00031aa7) bg_active_tab_pane_g1_cp1_srt

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp1_srt

0xbf2b,	// (0x00031ab0) bg_active_tab_pane_g3_cp1_srt

0xbeef,	// (0x00031a74) tabs_3_active_pane_srt_ParamLimits

0xbeef,	// (0x00031a74) tabs_3_active_pane_srt

0xbf00,	// (0x00031a85) tabs_3_passive_pane_cp_srt_ParamLimits

0xbf00,	// (0x00031a85) tabs_3_passive_pane_cp_srt

0xbf11,	// (0x00031a96) tabs_3_passive_pane_srt_ParamLimits

0xbf11,	// (0x00031a96) tabs_3_passive_pane_srt

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2f37,	// (0x00028abc) bg_passive_tab_pane_cp2_srt

0xa618,	// (0x0003019d) bg_passive_tab_pane_g1_cp2_srt

0xa479,	// (0x0002fffe) bg_passive_tab_pane_g2_cp2_srt

0xa621,	// (0x000301a6) bg_passive_tab_pane_g3_cp2_srt

0xc8af,	// (0x00032434) bg_active_tab_pane_cp2_srt_ParamLimits

0xc8af,	// (0x00032434) bg_active_tab_pane_cp2_srt

0xbed1,	// (0x00031a56) tabs_3_active_pane_srt_g1

0xbed9,	// (0x00031a5e) tabs_3_active_pane_srt_t1_ParamLimits

0xbed9,	// (0x00031a5e) tabs_3_active_pane_srt_t1

0xa618,	// (0x0003019d) bg_active_tab_pane_g1_cp2_srt

0xa479,	// (0x0002fffe) bg_active_tab_pane_g2_cp2_srt

0xa621,	// (0x000301a6) bg_active_tab_pane_g3_cp2_srt

0x1c98,	// (0x0002781d) tabs_4_active_pane_srt_ParamLimits

0x1c98,	// (0x0002781d) tabs_4_active_pane_srt

0x1caa,	// (0x0002782f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1caa,	// (0x0002782f) tabs_4_passive_pane_cp2_srt

0x0ffd,	// (0x00026b82) aid_size_cell_toolbar

0x4272,	// (0x00029df7) main_idle_act_pane_ParamLimits

0xaa7d,	// (0x00030602) popup_large_graphic_colour_window_ParamLimits

0xaf71,	// (0x00030af6) popup_toolbar_window_ParamLimits

0xaf71,	// (0x00030af6) popup_toolbar_window

0xedb2,	// (0x00034937) list_single_graphic_2heading_pane_ParamLimits

0xedb2,	// (0x00034937) list_single_graphic_2heading_pane

0xcf1f,	// (0x00032aa4) aid_size_cell_apps_grid_lsc_pane

0xcf31,	// (0x00032ab6) aid_size_cell_apps_grid_prt_pane

0x1060,	// (0x00026be5) bg_wml_button_pane_cp1_ParamLimits

0x1060,	// (0x00026be5) bg_wml_button_pane_cp1

0xb5a2,	// (0x00031127) form_midp_field_text_pane_t1_ParamLimits

0x2f37,	// (0x00028abc) input_focus_pane_cp050_ParamLimits

0x31a7,	// (0x00028d2c) list_midp_form_text_pane_ParamLimits

0x314a,	// (0x00028ccf) input_focus_pane_cp051_ParamLimits

0x315e,	// (0x00028ce3) list_midp_choice_pane_ParamLimits

0xb507,	// (0x0003108c) list_single_2graphic_pane_cp3_ParamLimits

0xb507,	// (0x0003108c) list_single_2graphic_pane_cp3

0xb51b,	// (0x000310a0) list_single_midp_graphic_pane_ParamLimits

0xb51b,	// (0x000310a0) list_single_midp_graphic_pane

0xeca5,	// (0x0003482a) list_single_graphic_2heading_pane_g1_ParamLimits

0xeca5,	// (0x0003482a) list_single_graphic_2heading_pane_g1

0xeb6c,	// (0x000346f1) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb6c,	// (0x000346f1) list_single_graphic_2heading_pane_g4

0xeb78,	// (0x000346fd) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb78,	// (0x000346fd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00035326) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00035326) list_single_graphic_2heading_pane_g

0xecb1,	// (0x00034836) list_single_graphic_2heading_pane_t1_ParamLimits

0xecb1,	// (0x00034836) list_single_graphic_2heading_pane_t1

0xecc5,	// (0x0003484a) list_single_graphic_2heading_pane_t2_ParamLimits

0xecc5,	// (0x0003484a) list_single_graphic_2heading_pane_t2

0xecdf,	// (0x00034864) list_single_graphic_2heading_pane_t3_ParamLimits

0xecdf,	// (0x00034864) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0003532d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0003532d) list_single_graphic_2heading_pane_t

0x2e01,	// (0x00028986) bg_popup_sub_pane_cp2

0x2e2b,	// (0x000289b0) grid_toobar_pane

0x1936,	// (0x000274bb) cell_toolbar_pane_ParamLimits

0x1936,	// (0x000274bb) cell_toolbar_pane

0x2e67,	// (0x000289ec) cell_toolbar_pane_g1_ParamLimits

0x2e67,	// (0x000289ec) cell_toolbar_pane_g1

0xb41f,	// (0x00030fa4) cell_toolbar_pane_g2_ParamLimits

0xb41f,	// (0x00030fa4) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00035334) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00035334) cell_toolbar_pane_g

0x2e9d,	// (0x00028a22) grid_highlight_pane_cp2_ParamLimits

0x2e9d,	// (0x00028a22) grid_highlight_pane_cp2

0x2eb7,	// (0x00028a3c) toolbar_button_pane

0x2ec3,	// (0x00028a48) toolbar_button_pane_g1

0x2ecb,	// (0x00028a50) toolbar_button_pane_g2

0x2ed3,	// (0x00028a58) toolbar_button_pane_g3

0x2edb,	// (0x00028a60) toolbar_button_pane_g4

0x2ee3,	// (0x00028a68) toolbar_button_pane_g5

0x2eeb,	// (0x00028a70) toolbar_button_pane_g6

0x2ef3,	// (0x00028a78) toolbar_button_pane_g7

0x2efb,	// (0x00028a80) toolbar_button_pane_g8

0x2f03,	// (0x00028a88) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00035339) toolbar_button_pane_g

0x196e,	// (0x000274f3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x196e,	// (0x000274f3) list_single_2graphic_pane_g1_cp3

0xb433,	// (0x00030fb8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb433,	// (0x00030fb8) list_single_2graphic_pane_g2_cp3

0x0926,	// (0x000264ab) list_single_2graphic_pane_g3_cp3

0x198b,	// (0x00027510) list_single_2graphic_pane_g4_cp3_ParamLimits

0x198b,	// (0x00027510) list_single_2graphic_pane_g4_cp3

0xb444,	// (0x00030fc9) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb444,	// (0x00030fc9) list_single_2graphic_pane_t1_cp3

0xd159,	// (0x00032cde) list_single_midp_graphic_pane_g2_ParamLimits

0xd159,	// (0x00032cde) list_single_midp_graphic_pane_g2

0x1005,	// (0x00026b8a) aid_zoom_text_primary

0xec79,	// (0x000347fe) aid_zoom_text_secondary

0xa678,	// (0x000301fd) status_small_pane_g7_ParamLimits

0xa678,	// (0x000301fd) status_small_pane_g7

0xa69b,	// (0x00030220) status_small_pane_t1_ParamLimits

0x9b0c,	// (0x0002f691) title_pane_g2

0x0003,

0xf54e,	// (0x000350d3) title_pane_g

0x9ef9,	// (0x0002fa7e) aid_size_cell_colour_1_pane_ParamLimits

0x9ef9,	// (0x0002fa7e) aid_size_cell_colour_1_pane

0x9f0d,	// (0x0002fa92) aid_size_cell_colour_2_pane_ParamLimits

0x9f0d,	// (0x0002fa92) aid_size_cell_colour_2_pane

0x9f21,	// (0x0002faa6) aid_size_cell_colour_3_pane_ParamLimits

0x9f21,	// (0x0002faa6) aid_size_cell_colour_3_pane

0x9f35,	// (0x0002faba) aid_size_cell_colour_4_pane_ParamLimits

0x9f35,	// (0x0002faba) aid_size_cell_colour_4_pane

0x00e6,	// (0x00025c6b) title_pane_stacon_g1_ParamLimits

0x00e6,	// (0x00025c6b) title_pane_stacon_g1

0x3563,	// (0x000290e8) popup_note_wait_window_g3_ParamLimits

0x3563,	// (0x000290e8) popup_note_wait_window_g3

0x35d9,	// (0x0002915e) popup_note_wait_window_t5_ParamLimits

0x35d9,	// (0x0002915e) popup_note_wait_window_t5

0xc861,	// (0x000323e6) main_feb_china_hwr_fs_writing_pane

0xa8ff,	// (0x00030484) popup_feb_china_hwr_fs_window_ParamLimits

0xa8ff,	// (0x00030484) popup_feb_china_hwr_fs_window

0xb460,	// (0x00030fe5) aid_size_cell_hwr_fs_ParamLimits

0xb460,	// (0x00030fe5) aid_size_cell_hwr_fs

0x2f37,	// (0x00028abc) bg_popup_sub_pane_cp3_ParamLimits

0x2f37,	// (0x00028abc) bg_popup_sub_pane_cp3

0xb475,	// (0x00030ffa) grid_hwr_fs_pane_ParamLimits

0xb475,	// (0x00030ffa) grid_hwr_fs_pane

0x19f6,	// (0x0002757b) linegrid_hwr_fs_pane_ParamLimits

0x19f6,	// (0x0002757b) linegrid_hwr_fs_pane

0xb48d,	// (0x00031012) cell_hwr_fs_pane_ParamLimits

0xb48d,	// (0x00031012) cell_hwr_fs_pane

0x2f43,	// (0x00028ac8) linegrid_hwr_fs_pane_g1_ParamLimits

0x2f43,	// (0x00028ac8) linegrid_hwr_fs_pane_g1

0xb4b3,	// (0x00031038) linegrid_hwr_fs_pane_g2_ParamLimits

0xb4b3,	// (0x00031038) linegrid_hwr_fs_pane_g2

0x2f61,	// (0x00028ae6) linegrid_hwr_fs_pane_g3_ParamLimits

0x2f61,	// (0x00028ae6) linegrid_hwr_fs_pane_g3

0xb4c5,	// (0x0003104a) linegrid_hwr_fs_pane_g4_ParamLimits

0xb4c5,	// (0x0003104a) linegrid_hwr_fs_pane_g4

0x1a42,	// (0x000275c7) linegrid_hwr_fs_pane_g5_ParamLimits

0x1a42,	// (0x000275c7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x0003535f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x0003535f) linegrid_hwr_fs_pane_g

0x2f6d,	// (0x00028af2) cell_hwr_fs_pane_g1_ParamLimits

0x2f6d,	// (0x00028af2) cell_hwr_fs_pane_g1

0x2d3b,	// (0x000288c0) cell_hwr_fs_pane_g2_ParamLimits

0x2d3b,	// (0x000288c0) cell_hwr_fs_pane_g2

0xb4df,	// (0x00031064) cell_hwr_fs_pane_g3_ParamLimits

0xb4df,	// (0x00031064) cell_hwr_fs_pane_g3

0xb4ec,	// (0x00031071) cell_hwr_fs_pane_g4_ParamLimits

0xb4ec,	// (0x00031071) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x0003536a) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x0003536a) cell_hwr_fs_pane_g

0xb4f9,	// (0x0003107e) cell_hwr_fs_pane_t1

0xc861,	// (0x000323e6) grid_highlight_pane_cp6

0xc861,	// (0x000323e6) main_idle_act2_pane

0xcd75,	// (0x000328fa) aid_inside_area_popup_secondary

0xb92f,	// (0x000314b4) aid_inside_area_window_primary_ParamLimits

0xb92f,	// (0x000314b4) aid_inside_area_window_primary

0xbf7a,	// (0x00031aff) ai2_news_ticker_pane

0x4786,	// (0x0002a30b) aid_size_cell_ai1_link_ParamLimits

0x4786,	// (0x0002a30b) aid_size_cell_ai1_link

0xbf82,	// (0x00031b07) popup_ai2_data_window_ParamLimits

0xbf82,	// (0x00031b07) popup_ai2_data_window

0x47b6,	// (0x0002a33b) popup_ai2_link_window_ParamLimits

0x47b6,	// (0x0002a33b) popup_ai2_link_window

0x2f37,	// (0x00028abc) bg_popup_sub_pane_cp4_ParamLimits

0x2f37,	// (0x00028abc) bg_popup_sub_pane_cp4

0x47ca,	// (0x0002a34f) grid_ai2_link_pane_ParamLimits

0x47ca,	// (0x0002a34f) grid_ai2_link_pane

0x47e1,	// (0x0002a366) popup_ai2_link_window_g1_ParamLimits

0x47e1,	// (0x0002a366) popup_ai2_link_window_g1

0x47ed,	// (0x0002a372) popup_ai2_link_window_g2_ParamLimits

0x47ed,	// (0x0002a372) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x0003553d) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x0003553d) popup_ai2_link_window_g

0x47fc,	// (0x0002a381) ai2_mp_button_pane

0x4804,	// (0x0002a389) ai2_mp_volume_pane

0x314a,	// (0x00028ccf) bg_popup_sub_pane_cp5_ParamLimits

0x314a,	// (0x00028ccf) bg_popup_sub_pane_cp5

0x480c,	// (0x0002a391) heading_ai2_gene_pane_ParamLimits

0x480c,	// (0x0002a391) heading_ai2_gene_pane

0x4818,	// (0x0002a39d) list_ai2_gene_pane_ParamLimits

0x4818,	// (0x0002a39d) list_ai2_gene_pane

0x4860,	// (0x0002a3e5) cell_ai2_link_pane_ParamLimits

0x4860,	// (0x0002a3e5) cell_ai2_link_pane

0x4876,	// (0x0002a3fb) cell_ai2_link_pane_g1

0xc861,	// (0x000323e6) grid_highlight_pane_cp7

0x1d50,	// (0x000278d5) ai2_mp_volume_pane_g1

0x4946,	// (0x0002a4cb) ai2_mp_volume_pane_g2

0x48bb,	// (0x0002a440) list_ai2_gene_pane_t1

0x494e,	// (0x0002a4d3) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00035556) ai2_mp_volume_pane_g

0xbf98,	// (0x00031b1d) volume_small_pane_cp3

0x4956,	// (0x0002a4db) aid_size_cell_ai2_button

0x495e,	// (0x0002a4e3) grid_ai2_button_pane

0x4967,	// (0x0002a4ec) cell_ai2_button_pane_ParamLimits

0x4967,	// (0x0002a4ec) cell_ai2_button_pane

0xc857,	// (0x000323dc) cell_ai2_button_pane_g1

0xc861,	// (0x000323e6) grid_highlight_pane_cp8

0x4906,	// (0x0002a48b) ai2_gene_pane_t1_ParamLimits

0x4906,	// (0x0002a48b) ai2_gene_pane_t1

0xa869,	// (0x000303ee) aid_height_parent_landscape

0xbc41,	// (0x000317c6) aid_height_set_list

0x4272,	// (0x00029df7) aid_size_parent

0xbea5,	// (0x00031a2a) aid_size_cell_graphic_pane_ParamLimits

0x4828,	// (0x0002a3ad) popup_ai2_data_window_g1_ParamLimits

0x4828,	// (0x0002a3ad) popup_ai2_data_window_g1

0x4834,	// (0x0002a3b9) ai2_news_ticker_pane_g1

0x483c,	// (0x0002a3c1) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00035542) ai2_news_ticker_pane_g

0x4844,	// (0x0002a3c9) ai2_news_ticker_pane_t1

0x4852,	// (0x0002a3d7) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00035547) ai2_news_ticker_pane_t

0x487f,	// (0x0002a404) heading_ai2_gene_pane_g1

0x4887,	// (0x0002a40c) heading_ai2_gene_pane_t1_ParamLimits

0x4887,	// (0x0002a40c) heading_ai2_gene_pane_t1

0x489c,	// (0x0002a421) list_highlight_pane_cp6

0x48a4,	// (0x0002a429) ai2_gene_pane_ParamLimits

0x48a4,	// (0x0002a429) ai2_gene_pane

0x48c9,	// (0x0002a44e) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x0003554c) list_ai2_gene_pane_t

0x48d7,	// (0x0002a45c) list_highlight_pane_cp8_ParamLimits

0x48d7,	// (0x0002a45c) list_highlight_pane_cp8

0x48e8,	// (0x0002a46d) ai2_gene_pane_g1_ParamLimits

0x48e8,	// (0x0002a46d) ai2_gene_pane_g1

0x48fa,	// (0x0002a47f) ai2_gene_pane_g2_ParamLimits

0x48fa,	// (0x0002a47f) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00035551) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00035551) ai2_gene_pane_g

0xcc0e,	// (0x00032793) scroll_pane_cp12

0xa826,	// (0x000303ab) control_pane_t3_ParamLimits

0xa826,	// (0x000303ab) control_pane_t3

0xa68c,	// (0x00030211) status_small_pane_g8_ParamLimits

0xa68c,	// (0x00030211) status_small_pane_g8

0xa9c2,	// (0x00030547) popup_find_window_ParamLimits

0xac75,	// (0x000307fa) popup_note_image_window_ParamLimits

0xeb60,	// (0x000346e5) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb60,	// (0x000346e5) list_double2_graphic_pane_vc_g1

0xeb6c,	// (0x000346f1) list_double2_graphic_pane_vc_g2_ParamLimits

0xeb6c,	// (0x000346f1) list_double2_graphic_pane_vc_g2

0xeb78,	// (0x000346fd) list_double2_graphic_pane_vc_g3_ParamLimits

0xeb78,	// (0x000346fd) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00035146) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00035146) list_double2_graphic_pane_vc_g

0xeb84,	// (0x00034709) list_double2_graphic_pane_vc_t1_ParamLimits

0xeb84,	// (0x00034709) list_double2_graphic_pane_vc_t1

0xeb6c,	// (0x000346f1) list_single_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_heading_pane_vc_g1

0xeb78,	// (0x000346fd) list_single_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_heading_pane_vc_g

0xecf7,	// (0x0003487c) list_single_heading_pane_vc_t1_ParamLimits

0xecf7,	// (0x0003487c) list_single_heading_pane_vc_t1

0xed0d,	// (0x00034892) list_single_heading_pane_vc_t2_ParamLimits

0xed0d,	// (0x00034892) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x0003534e) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003534e) list_single_heading_pane_vc_t

0xed1f,	// (0x000348a4) list_setting_number_pane_vc_g1_ParamLimits

0xed1f,	// (0x000348a4) list_setting_number_pane_vc_g1

0xed2b,	// (0x000348b0) list_setting_number_pane_vc_g2_ParamLimits

0xed2b,	// (0x000348b0) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035353) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035353) list_setting_number_pane_vc_g

0xed37,	// (0x000348bc) list_setting_number_pane_vc_t1_ParamLimits

0xed37,	// (0x000348bc) list_setting_number_pane_vc_t1

0xed4b,	// (0x000348d0) list_setting_number_pane_vc_t2_ParamLimits

0xed4b,	// (0x000348d0) list_setting_number_pane_vc_t2

0xed67,	// (0x000348ec) list_setting_number_pane_vc_t3_ParamLimits

0xed67,	// (0x000348ec) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00035358) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00035358) list_setting_number_pane_vc_t

0xed93,	// (0x00034918) set_value_pane_vc_ParamLimits

0xed93,	// (0x00034918) set_value_pane_vc

0xedb2,	// (0x00034937) list_double2_graphic_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double2_graphic_pane_vc

0x4442,	// (0x00029fc7) list_double2_large_graphic_pane_vc_ParamLimits

0x4442,	// (0x00029fc7) list_double2_large_graphic_pane_vc

0xedb2,	// (0x00034937) list_double2_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double2_pane_vc

0xedb2,	// (0x00034937) list_double_graphic_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_graphic_heading_pane_vc

0xedb2,	// (0x00034937) list_double_graphic_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_graphic_pane_vc

0xedb2,	// (0x00034937) list_double_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_heading_pane_vc

0x4454,	// (0x00029fd9) list_double_large_graphic_pane_vc_ParamLimits

0x4454,	// (0x00029fd9) list_double_large_graphic_pane_vc

0xedb2,	// (0x00034937) list_double_number_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_number_pane_vc

0xedb2,	// (0x00034937) list_double_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_pane_vc

0xedb2,	// (0x00034937) list_double_time_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_double_time_pane_vc

0xedb2,	// (0x00034937) list_setting_number_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_setting_number_pane_vc

0xedb2,	// (0x00034937) list_setting_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_setting_pane_vc

0xedb2,	// (0x00034937) list_single_graphic_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_single_graphic_heading_pane_vc

0xedb2,	// (0x00034937) list_single_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_single_heading_pane_vc

0xedb2,	// (0x00034937) list_single_number_heading_pane_vc_ParamLimits

0xedb2,	// (0x00034937) list_single_number_heading_pane_vc

0xebe6,	// (0x0003476b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebe6,	// (0x0003476b) list_double_graphic_heading_pane_vc_g1

0xeb6c,	// (0x000346f1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeb6c,	// (0x000346f1) list_double_graphic_heading_pane_vc_g2

0xeb78,	// (0x000346fd) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeb78,	// (0x000346fd) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x0003555d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x0003555d) list_double_graphic_heading_pane_vc_g

0xedc5,	// (0x0003494a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedc5,	// (0x0003494a) list_double_graphic_heading_pane_vc_t1

0xedd9,	// (0x0003495e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xedd9,	// (0x0003495e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00035564) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00035564) list_double_graphic_heading_pane_vc_t

0xed1f,	// (0x000348a4) list_setting_pane_vc_g1_ParamLimits

0xed1f,	// (0x000348a4) list_setting_pane_vc_g1

0xed2b,	// (0x000348b0) list_setting_pane_vc_g2_ParamLimits

0xed2b,	// (0x000348b0) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035353) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035353) list_setting_pane_vc_g

0xedf1,	// (0x00034976) list_setting_pane_vc_t1_ParamLimits

0xedf1,	// (0x00034976) list_setting_pane_vc_t1

0xee0d,	// (0x00034992) list_setting_pane_vc_t2_ParamLimits

0xee0d,	// (0x00034992) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x000355a7) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x000355a7) list_setting_pane_vc_t

0xed93,	// (0x00034918) set_value_pane_cp_vc_ParamLimits

0xed93,	// (0x00034918) set_value_pane_cp_vc

0xeb6c,	// (0x000346f1) list_single_number_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_single_number_heading_pane_vc_g1

0xeb78,	// (0x000346fd) list_single_number_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_single_number_heading_pane_vc_g

0xee27,	// (0x000349ac) list_single_number_heading_pane_vc_t1_ParamLimits

0xee27,	// (0x000349ac) list_single_number_heading_pane_vc_t1

0xee3d,	// (0x000349c2) list_single_number_heading_pane_vc_t2_ParamLimits

0xee3d,	// (0x000349c2) list_single_number_heading_pane_vc_t2

0xee4f,	// (0x000349d4) list_single_number_heading_pane_vc_t3_ParamLimits

0xee4f,	// (0x000349d4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x000355ac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x000355ac) list_single_number_heading_pane_vc_t

0xee61,	// (0x000349e6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xee61,	// (0x000349e6) list_single_graphic_heading_pane_vc_g1

0xeb6c,	// (0x000346f1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeb6c,	// (0x000346f1) list_single_graphic_heading_pane_vc_g4

0xeb78,	// (0x000346fd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeb78,	// (0x000346fd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x000355b3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x000355b3) list_single_graphic_heading_pane_vc_g

0xee6d,	// (0x000349f2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xee6d,	// (0x000349f2) list_single_graphic_heading_pane_vc_t1

0xee83,	// (0x00034a08) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee83,	// (0x00034a08) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x000355ba) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x000355ba) list_single_graphic_heading_pane_vc_t

0xeb6c,	// (0x000346f1) list_double2_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_double2_pane_vc_g1

0xeb78,	// (0x000346fd) list_double2_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_double2_pane_vc_g

0xee95,	// (0x00034a1a) list_double2_pane_vc_t1_ParamLimits

0xee95,	// (0x00034a1a) list_double2_pane_vc_t1

0xebf2,	// (0x00034777) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xebf2,	// (0x00034777) list_double2_large_graphic_pane_vc_g1

0xebfe,	// (0x00034783) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xebfe,	// (0x00034783) list_double2_large_graphic_pane_vc_g2

0xec0a,	// (0x0003478f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xec0a,	// (0x0003478f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003516a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003516a) list_double2_large_graphic_pane_vc_g

0xec16,	// (0x0003479b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec16,	// (0x0003479b) list_double2_large_graphic_pane_vc_t1

0xeead,	// (0x00034a32) list_double_time_pane_vc_g1_ParamLimits

0xeead,	// (0x00034a32) list_double_time_pane_vc_g1

0xeeb9,	// (0x00034a3e) list_double_time_pane_vc_g2_ParamLimits

0xeeb9,	// (0x00034a3e) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x000355bf) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x000355bf) list_double_time_pane_vc_g

0xeec5,	// (0x00034a4a) list_double_time_pane_vc_t1_ParamLimits

0xeec5,	// (0x00034a4a) list_double_time_pane_vc_t1

0xeee9,	// (0x00034a6e) list_double_time_pane_vc_t2_ParamLimits

0xeee9,	// (0x00034a6e) list_double_time_pane_vc_t2

0xef38,	// (0x00034abd) list_double_time_pane_vc_t3_ParamLimits

0xef38,	// (0x00034abd) list_double_time_pane_vc_t3

0xef4a,	// (0x00034acf) list_double_time_pane_vc_t4_ParamLimits

0xef4a,	// (0x00034acf) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x000355c4) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x000355c4) list_double_time_pane_vc_t

0xeb6c,	// (0x000346f1) list_double_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_double_pane_vc_g1

0xeb78,	// (0x000346fd) list_double_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_double_pane_vc_g

0xef5e,	// (0x00034ae3) list_double_pane_vc_t1_ParamLimits

0xef5e,	// (0x00034ae3) list_double_pane_vc_t1

0xef72,	// (0x00034af7) list_double_pane_vc_t2_ParamLimits

0xef72,	// (0x00034af7) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x000355cd) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x000355cd) list_double_pane_vc_t

0xeb6c,	// (0x000346f1) list_double_number_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_double_number_pane_vc_g1

0xeb78,	// (0x000346fd) list_double_number_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_double_number_pane_vc_g

0xef8a,	// (0x00034b0f) list_double_number_pane_vc_t1_ParamLimits

0xef8a,	// (0x00034b0f) list_double_number_pane_vc_t1

0xef5e,	// (0x00034ae3) list_double_number_pane_vc_t2_ParamLimits

0xef5e,	// (0x00034ae3) list_double_number_pane_vc_t2

0xef9c,	// (0x00034b21) list_double_number_pane_vc_t3_ParamLimits

0xef9c,	// (0x00034b21) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x000355d2) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x000355d2) list_double_number_pane_vc_t

0xefb4,	// (0x00034b39) list_double_large_graphic_pane_vc_g1_ParamLimits

0xefb4,	// (0x00034b39) list_double_large_graphic_pane_vc_g1

0xefd6,	// (0x00034b5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefd6,	// (0x00034b5b) list_double_large_graphic_pane_vc_g2

0xefea,	// (0x00034b6f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xefea,	// (0x00034b6f) list_double_large_graphic_pane_vc_g3

0xeff9,	// (0x00034b7e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeff9,	// (0x00034b7e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x000355d9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x000355d9) list_double_large_graphic_pane_vc_g

0xf005,	// (0x00034b8a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf005,	// (0x00034b8a) list_double_large_graphic_pane_vc_t1

0xf021,	// (0x00034ba6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf021,	// (0x00034ba6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x000355e2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x000355e2) list_double_large_graphic_pane_vc_t

0xeb6c,	// (0x000346f1) list_double_heading_pane_vc_g1_ParamLimits

0xeb6c,	// (0x000346f1) list_double_heading_pane_vc_g1

0xeb78,	// (0x000346fd) list_double_heading_pane_vc_g2_ParamLimits

0xeb78,	// (0x000346fd) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003514d) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003514d) list_double_heading_pane_vc_g

0xf043,	// (0x00034bc8) list_double_heading_pane_vc_t1_ParamLimits

0xf043,	// (0x00034bc8) list_double_heading_pane_vc_t1

0xf057,	// (0x00034bdc) list_double_heading_pane_vc_t2_ParamLimits

0xf057,	// (0x00034bdc) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x000355e7) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x000355e7) list_double_heading_pane_vc_t

0xf06f,	// (0x00034bf4) list_double_graphic_pane_vc_g1_ParamLimits

0xf06f,	// (0x00034bf4) list_double_graphic_pane_vc_g1

0xf087,	// (0x00034c0c) list_double_graphic_pane_vc_g2_ParamLimits

0xf087,	// (0x00034c0c) list_double_graphic_pane_vc_g2

0xeb6c,	// (0x000346f1) list_double_graphic_pane_vc_g3_ParamLimits

0xeb6c,	// (0x000346f1) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x000355ec) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x000355ec) list_double_graphic_pane_vc_g

0xf0a4,	// (0x00034c29) list_double_graphic_pane_vc_t1_ParamLimits

0xf0a4,	// (0x00034c29) list_double_graphic_pane_vc_t1

0xf0c3,	// (0x00034c48) list_double_graphic_pane_vc_t2_ParamLimits

0xf0c3,	// (0x00034c48) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x000355f5) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x000355f5) list_double_graphic_pane_vc_t

0xf3d7,	// (0x00034f5c) aid_size_cell_fastswap

0x98d3,	// (0x0002f458) aid_size_cell_touch_ParamLimits

0x98d3,	// (0x0002f458) aid_size_cell_touch

0xf52e,	// (0x000350b3) popup_fast_swap_wide_window_ParamLimits

0xf52e,	// (0x000350b3) popup_fast_swap_wide_window

0x9aa3,	// (0x0002f628) touch_pane_ParamLimits

0x9aa3,	// (0x0002f628) touch_pane

0xcc5b,	// (0x000327e0) button_value_adjust_pane_cp2

0xec4d,	// (0x000347d2) button_value_adjust_pane_cp4

0xec55,	// (0x000347da) form_field_data_pane_cp2

0x9418,	// (0x0002ef9d) form_field_data_wide_pane_cp2

0xcf56,	// (0x00032adb) bg_scroll_pane_ParamLimits

0xa2bf,	// (0x0002fe44) scroll_handle_pane_ParamLimits

0x02f6,	// (0x00025e7b) scroll_sc2_down_pane_ParamLimits

0x02f6,	// (0x00025e7b) scroll_sc2_down_pane

0xcf87,	// (0x00032b0c) scroll_sc2_up_pane_ParamLimits

0xcf87,	// (0x00032b0c) scroll_sc2_up_pane

0xc0c4,	// (0x00031c49) grid_wheel_folder_pane_g1_ParamLimits

0xc0c4,	// (0x00031c49) grid_wheel_folder_pane_g1

0x074d,	// (0x000262d2) clock_nsta_pane_cp2_ParamLimits

0x074d,	// (0x000262d2) clock_nsta_pane_cp2

0xa552,	// (0x000300d7) listscroll_midp_pane_ParamLimits

0xa55e,	// (0x000300e3) midp_canvas_pane

0x0feb,	// (0x00026b70) nsta_clock_indic_pane

0x103e,	// (0x00026bc3) listscroll_form_pane_vc

0x104e,	// (0x00026bd3) listscroll_set_pane_vc_ParamLimits

0x104e,	// (0x00026bd3) listscroll_set_pane_vc

0xb12a,	// (0x00030caf) clock_nsta_pane

0xb154,	// (0x00030cd9) indicator_nsta_pane

0x2e01,	// (0x00028986) bg_popup_sub_pane_cp2_ParamLimits

0x2e15,	// (0x0002899a) find_pane_cp2_ParamLimits

0x2e15,	// (0x0002899a) find_pane_cp2

0x2e2b,	// (0x000289b0) grid_toobar_pane_ParamLimits

0x2f0b,	// (0x00028a90) list_form_gen_pane_vc_ParamLimits

0x2f0b,	// (0x00028a90) list_form_gen_pane_vc

0x2f21,	// (0x00028aa6) scroll_pane_cp8_vc_ParamLimits

0x2f21,	// (0x00028aa6) scroll_pane_cp8_vc

0x2f9d,	// (0x00028b22) data_form_wide_pane_vc_ParamLimits

0x2f9d,	// (0x00028b22) data_form_wide_pane_vc

0x2fa9,	// (0x00028b2e) form_field_data_wide_pane_vc_g1

0x2fb1,	// (0x00028b36) form_field_data_wide_pane_vc_t1_ParamLimits

0x2fb1,	// (0x00028b36) form_field_data_wide_pane_vc_t1

0xcc6f,	// (0x000327f4) input_focus_pane_cp6_vc_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_cp6_vc

0x32fe,	// (0x00028e83) list_midp_pane_ParamLimits

0x460b,	// (0x0002a190) scroll_pane_cp16_ParamLimits

0x460b,	// (0x0002a190) scroll_pane_cp16

0x3340,	// (0x00028ec5) button_value_adjust_pane_ParamLimits

0x3340,	// (0x00028ec5) button_value_adjust_pane

0xbc52,	// (0x000317d7) button_value_adjust_pane_cp6_ParamLimits

0xbc52,	// (0x000317d7) button_value_adjust_pane_cp6

0xbd6c,	// (0x000318f1) settings_code_pane_cp_ParamLimits

0xbd6c,	// (0x000318f1) settings_code_pane_cp

0xc857,	// (0x000323dc) cell_touch_pane_g1

0xc857,	// (0x000323dc) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00035279) cell_touch_pane_g

0xbfa1,	// (0x00031b26) cell_touch_pane_cp_ParamLimits

0xbfa1,	// (0x00031b26) cell_touch_pane_cp

0xbfbd,	// (0x00031b42) cell_touch_pane_ParamLimits

0xbfbd,	// (0x00031b42) cell_touch_pane

0xc857,	// (0x000323dc) scroll_sc2_down_pane_g1

0xc857,	// (0x000323dc) scroll_sc2_up_pane_g1

0xc861,	// (0x000323e6) bg_set_opt_pane_cp4_vc

0x499b,	// (0x0002a520) list_set_graphic_pane_vc_g1_ParamLimits

0x499b,	// (0x0002a520) list_set_graphic_pane_vc_g1

0x49a7,	// (0x0002a52c) list_set_graphic_pane_vc_g2_ParamLimits

0x49a7,	// (0x0002a52c) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00035569) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00035569) list_set_graphic_pane_vc_g

0x49b3,	// (0x0002a538) text_primary_small_cp13_vc_ParamLimits

0x49b3,	// (0x0002a538) text_primary_small_cp13_vc

0x49cb,	// (0x0002a550) list_set_graphic_pane_vc_ParamLimits

0x49cb,	// (0x0002a550) list_set_graphic_pane_vc

0xc861,	// (0x000323e6) input_focus_pane_cp2_vc

0xc857,	// (0x000323dc) setting_code_pane_vc_g1

0xc8d4,	// (0x00032459) setting_code_pane_vc_t1

0x49de,	// (0x0002a563) set_text_pane_vc_t1_ParamLimits

0x49de,	// (0x0002a563) set_text_pane_vc_t1

0xc861,	// (0x000323e6) input_focus_pane_cp1_vc

0x49fa,	// (0x0002a57f) list_set_text_pane_vc

0xc857,	// (0x000323dc) setting_text_pane_vc_g1

0xc861,	// (0x000323e6) bg_set_opt_pane_cp2_vc

0xc8cb,	// (0x00032450) setting_slider_graphic_pane_vc_g1

0x4a04,	// (0x0002a589) setting_slider_graphic_pane_vc_t1

0x4a14,	// (0x0002a599) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x0003556e) setting_slider_graphic_pane_vc_t

0x4a24,	// (0x0002a5a9) slider_set_pane_cp_vc

0x4a2c,	// (0x0002a5b1) slider_set_pane_vc_g1

0x4a35,	// (0x0002a5ba) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00035573) slider_set_pane_vc_g

0xccc7,	// (0x0003284c) set_opt_bg_pane_g1_copy1

0xcccf,	// (0x00032854) set_opt_bg_pane_g2_copy1

0x4a61,	// (0x0002a5e6) set_opt_bg_pane_g3_copy1

0xccdf,	// (0x00032864) set_opt_bg_pane_g4_copy1

0xcce7,	// (0x0003286c) set_opt_bg_pane_g5_copy1

0xccef,	// (0x00032874) set_opt_bg_pane_g6_copy1

0x4a69,	// (0x0002a5ee) set_opt_bg_pane_g7_copy1

0x4a71,	// (0x0002a5f6) set_opt_bg_pane_g8_copy1

0x4a79,	// (0x0002a5fe) set_opt_bg_pane_g9_copy1

0xc861,	// (0x000323e6) bg_set_opt_pane_cp_vc

0x4a81,	// (0x0002a606) setting_slider_pane_vc_t1

0x4a90,	// (0x0002a615) setting_slider_pane_vc_t2

0x4aa0,	// (0x0002a625) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00035582) setting_slider_pane_vc_t

0x4ab0,	// (0x0002a635) slider_set_pane_vc

0x1a66,	// (0x000275eb) volume_set_pane_vc_g1

0x1d61,	// (0x000278e6) volume_set_pane_vc_g2

0x1d6a,	// (0x000278ef) volume_set_pane_vc_g3

0x1d73,	// (0x000278f8) volume_set_pane_vc_g4

0x1d7c,	// (0x00027901) volume_set_pane_vc_g5

0x1d85,	// (0x0002790a) volume_set_pane_vc_g6

0x1d8e,	// (0x00027913) volume_set_pane_vc_g7

0x1d97,	// (0x0002791c) volume_set_pane_vc_g8

0x1da0,	// (0x00027925) volume_set_pane_vc_g9

0x1da9,	// (0x0002792e) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00035589) volume_set_pane_vc_g

0x4ab8,	// (0x0002a63d) volume_set_pane_vc

0x4ac0,	// (0x0002a645) button_value_adjust_pane_cp1_vc

0x4aca,	// (0x0002a64f) list_highlight_pane_cp2_vc

0x4ad3,	// (0x0002a658) list_set_pane_vc_ParamLimits

0x4ad3,	// (0x0002a658) list_set_pane_vc

0x4b31,	// (0x0002a6b6) main_pane_set_vc_t1_ParamLimits

0x4b31,	// (0x0002a6b6) main_pane_set_vc_t1

0x4b46,	// (0x0002a6cb) main_pane_set_vc_t2_ParamLimits

0x4b46,	// (0x0002a6cb) main_pane_set_vc_t2

0x4b58,	// (0x0002a6dd) main_pane_set_vc_t3_ParamLimits

0x4b58,	// (0x0002a6dd) main_pane_set_vc_t3

0x4b6a,	// (0x0002a6ef) main_pane_set_vc_t4_ParamLimits

0x4b6a,	// (0x0002a6ef) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x0003559e) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x0003559e) main_pane_set_vc_t

0x4b7c,	// (0x0002a701) setting_code_pane_vc_ParamLimits

0x4b7c,	// (0x0002a701) setting_code_pane_vc

0x4b8b,	// (0x0002a710) setting_slider_graphic_pane_vc

0x4b8b,	// (0x0002a710) setting_slider_pane_vc

0x4b8b,	// (0x0002a710) setting_text_pane_vc

0x4b8b,	// (0x0002a710) setting_volume_pane_vc

0x4b93,	// (0x0002a718) scroll_pane_cp121_vc

0xcc49,	// (0x000327ce) set_content_pane_vc

0x4b9b,	// (0x0002a720) button_value_adjust_pane_g1

0x4ba4,	// (0x0002a729) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x000355fa) button_value_adjust_pane_g

0x4bad,	// (0x0002a732) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4bad,	// (0x0002a732) form_field_slider_wide_pane_vc_t1

0x4bc1,	// (0x0002a746) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4bc1,	// (0x0002a746) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x000355ff) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x000355ff) form_field_slider_wide_pane_vc_t

0xc8af,	// (0x00032434) input_focus_pane_cp10_vc_ParamLimits

0xc8af,	// (0x00032434) input_focus_pane_cp10_vc

0x4bef,	// (0x0002a774) slider_cont_pane_cp1_vc_ParamLimits

0x4bef,	// (0x0002a774) slider_cont_pane_cp1_vc

0x4c01,	// (0x0002a786) slider_form_pane_g1_cp2

0x4a35,	// (0x0002a5ba) slider_form_pane_g2_cp2

0x4c2e,	// (0x0002a7b3) form_field_slider_pane_vc_t3

0x4c3c,	// (0x0002a7c1) form_field_slider_pane_vc_t4

0x4c4a,	// (0x0002a7cf) slider_form_pane_vc_ParamLimits

0x4c4a,	// (0x0002a7cf) slider_form_pane_vc

0x4c57,	// (0x0002a7dc) form_field_slider_pane_vc_t1_ParamLimits

0x4c57,	// (0x0002a7dc) form_field_slider_pane_vc_t1

0x4bc1,	// (0x0002a746) form_field_slider_pane_vc_t2_ParamLimits

0x4bc1,	// (0x0002a746) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00035611) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00035611) form_field_slider_pane_vc_t

0xc8af,	// (0x00032434) input_focus_pane_cp9_vc_ParamLimits

0xc8af,	// (0x00032434) input_focus_pane_cp9_vc

0x4c73,	// (0x0002a7f8) slider_cont_pane_vc_ParamLimits

0x4c73,	// (0x0002a7f8) slider_cont_pane_vc

0x4c87,	// (0x0002a80c) list_form_graphic_pane_cp_vc_ParamLimits

0x4c87,	// (0x0002a80c) list_form_graphic_pane_cp_vc

0x2fa9,	// (0x00028b2e) form_field_popup_wide_pane_vc_g1

0x4c9c,	// (0x0002a821) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4c9c,	// (0x0002a821) form_field_popup_wide_pane_vc_t1

0xcc6f,	// (0x000327f4) input_focus_pane_cp8_vc_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_cp8_vc

0x4ce1,	// (0x0002a866) list_form_wide_pane_vc_ParamLimits

0x4ce1,	// (0x0002a866) list_form_wide_pane_vc

0x4ced,	// (0x0002a872) list_form_graphic_pane_vc_g1

0x4cf5,	// (0x0002a87a) list_form_graphic_pane_vc_t1_ParamLimits

0x4cf5,	// (0x0002a87a) list_form_graphic_pane_vc_t1

0xc8bd,	// (0x00032442) list_highlight_pane_cp5_vc_ParamLimits

0xc8bd,	// (0x00032442) list_highlight_pane_cp5_vc

0x4d11,	// (0x0002a896) list_form_graphic_pane_vc_ParamLimits

0x4d11,	// (0x0002a896) list_form_graphic_pane_vc

0x2fa9,	// (0x00028b2e) form_field_popup_pane_vc_g1

0x4d27,	// (0x0002a8ac) form_field_popup_pane_vc_t1_ParamLimits

0x4d27,	// (0x0002a8ac) form_field_popup_pane_vc_t1

0xcc6f,	// (0x000327f4) input_focus_pane_cp7_vc_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_cp7_vc

0x4d3e,	// (0x0002a8c3) list_form_pane_vc_ParamLimits

0x4d3e,	// (0x0002a8c3) list_form_pane_vc

0x4d4a,	// (0x0002a8cf) data_form_pane_vc_t1_ParamLimits

0x4d4a,	// (0x0002a8cf) data_form_pane_vc_t1

0xccc7,	// (0x0003284c) input_focus_pane_vc_g1

0xcccf,	// (0x00032854) input_focus_pane_vc_g2

0xccd7,	// (0x0003285c) input_focus_pane_vc_g3

0xccdf,	// (0x00032864) input_focus_pane_vc_g4

0xcce7,	// (0x0003286c) input_focus_pane_vc_g5

0xccef,	// (0x00032874) input_focus_pane_vc_g6

0xccf7,	// (0x0003287c) input_focus_pane_vc_g7

0xccff,	// (0x00032884) input_focus_pane_vc_g8

0xcd07,	// (0x0003288c) input_focus_pane_vc_g9

0xc857,	// (0x000323dc) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00035202) input_focus_pane_vc_g

0x2f9d,	// (0x00028b22) data_form_pane_vc_ParamLimits

0x2f9d,	// (0x00028b22) data_form_pane_vc

0x2fa9,	// (0x00028b2e) form_field_data_pane_vc_g1

0x4d65,	// (0x0002a8ea) form_field_data_pane_vc_t1_ParamLimits

0x4d65,	// (0x0002a8ea) form_field_data_pane_vc_t1

0xcc6f,	// (0x000327f4) input_focus_pane_vc_ParamLimits

0xcc6f,	// (0x000327f4) input_focus_pane_vc

0x4d7f,	// (0x0002a904) button_value_adjust_pane_cp3_vc

0x4d87,	// (0x0002a90c) button_value_adjust_pane_cp5_vc

0x4d8f,	// (0x0002a914) form_field_data_pane_vc_ParamLimits

0x4d8f,	// (0x0002a914) form_field_data_pane_vc

0x4da6,	// (0x0002a92b) form_field_data_pane_vc_cp2

0x4dae,	// (0x0002a933) form_field_data_wide_pane_vc_ParamLimits

0x4dae,	// (0x0002a933) form_field_data_wide_pane_vc

0x4dc4,	// (0x0002a949) form_field_data_wide_pane_vc_cp2

0x4dcc,	// (0x0002a951) form_field_popup_pane_vc_ParamLimits

0x4dcc,	// (0x0002a951) form_field_popup_pane_vc

0x4de3,	// (0x0002a968) form_field_popup_wide_pane_vc_ParamLimits

0x4de3,	// (0x0002a968) form_field_popup_wide_pane_vc

0x4df9,	// (0x0002a97e) form_field_slider_pane_vc_ParamLimits

0x4df9,	// (0x0002a97e) form_field_slider_pane_vc

0x4e0c,	// (0x0002a991) form_field_slider_wide_pane_vc_ParamLimits

0x4e0c,	// (0x0002a991) form_field_slider_wide_pane_vc

0xbfda,	// (0x00031b5f) grid_touch_1_pane_ParamLimits

0xbfda,	// (0x00031b5f) grid_touch_1_pane

0xbfee,	// (0x00031b73) grid_touch_2_pane_ParamLimits

0xbfee,	// (0x00031b73) grid_touch_2_pane

0x4eda,	// (0x0002aa5f) touch_pane_g1_ParamLimits

0x4eda,	// (0x0002aa5f) touch_pane_g1

0x4e43,	// (0x0002a9c8) cell_app_pane_cp_wide_ParamLimits

0x4e43,	// (0x0002a9c8) cell_app_pane_cp_wide

0x4e54,	// (0x0002a9d9) grid_popup_fast_wide_pane_ParamLimits

0x4e54,	// (0x0002a9d9) grid_popup_fast_wide_pane

0x4e68,	// (0x0002a9ed) scroll_pane_cp19_ParamLimits

0x4e68,	// (0x0002a9ed) scroll_pane_cp19

0xc861,	// (0x000323e6) bg_popup_window_pane_cp20

0x4e7c,	// (0x0002aa01) listscroll_popup_fast_wide_pane

0xd165,	// (0x00032cea) grid_indicator_nsta_pane

0x4e84,	// (0x0002aa09) clock_nsta_pane_g1

0x4e8d,	// (0x0002aa12) clock_nsta_pane_t1

0xc018,	// (0x00031b9d) cell_indicator_nsta_pane_ParamLimits

0xc018,	// (0x00031b9d) cell_indicator_nsta_pane

0x4eda,	// (0x0002aa5f) cell_indicator_nsta_pane_g1

0xc02f,	// (0x00031bb4) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00035622) cell_indicator_nsta_pane_g

0x4ef5,	// (0x0002aa7a) clock_nsta_pane_cp

0x4efd,	// (0x0002aa82) indicator_nsta_pane_cp

0x4f05,	// (0x0002aa8a) nsta_clock_indic_pane_g1

0xc8f9,	// (0x0003247e) grid_indicator_pane

0xa359,	// (0x0002fede) scroll_pane_cp29

0x067a,	// (0x000261ff) indicator_nsta_pane_cp2_ParamLimits

0x067a,	// (0x000261ff) indicator_nsta_pane_cp2

0xc8bd,	// (0x00032442) main_apps_wheel_pane

0xb5c4,	// (0x00031149) form_midp_field_text_pane_ParamLimits

0x330a,	// (0x00028e8f) scroll_bar_cp050_ParamLimits

0x4f55,	// (0x0002aada) cell_indicator_pane_ParamLimits

0x4f55,	// (0x0002aada) cell_indicator_pane

0x4f6e,	// (0x0002aaf3) cell_indicator_pane_g1

0xc04e,	// (0x00031bd3) grid_wheel_folder_pane_ParamLimits

0xc04e,	// (0x00031bd3) grid_wheel_folder_pane

0xc05c,	// (0x00031be1) list_wheel_apps_pane_ParamLimits

0xc05c,	// (0x00031be1) list_wheel_apps_pane

0xc06a,	// (0x00031bef) main_apps_wheel_pane_g1_ParamLimits

0xc06a,	// (0x00031bef) main_apps_wheel_pane_g1

0xc076,	// (0x00031bfb) main_apps_wheel_pane_g2_ParamLimits

0xc076,	// (0x00031bfb) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x0003563e) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x0003563e) main_apps_wheel_pane_g

0xc084,	// (0x00031c09) main_apps_wheel_pane_t1_ParamLimits

0xc084,	// (0x00031c09) main_apps_wheel_pane_t1

0xc098,	// (0x00031c1d) list_wheel_apps_pane_g1

0xc0a0,	// (0x00031c25) list_wheel_apps_pane_g2

0xc0a8,	// (0x00031c2d) list_wheel_apps_pane_g3

0xc0b0,	// (0x00031c35) list_wheel_apps_pane_g4

0xc0ba,	// (0x00031c3f) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00035643) list_wheel_apps_pane_g

0x0976,	// (0x000264fb) navi_icon_text_pane

0xb01e,	// (0x00030ba3) aid_fill_nsta

0x5035,	// (0x0002abba) navi_icon_text_pane_g1

0x5041,	// (0x0002abc6) navi_icon_text_pane_t1

0x0819,	// (0x0002639e) list_set_graphic_pane_t1_ParamLimits

0x0819,	// (0x0002639e) list_set_graphic_pane_t1

0x3a41,	// (0x000295c6) popup_midp_note_alarm_window_t6_ParamLimits

0x3a41,	// (0x000295c6) popup_midp_note_alarm_window_t6

0x3a53,	// (0x000295d8) popup_midp_note_alarm_window_t7_ParamLimits

0x3a53,	// (0x000295d8) popup_midp_note_alarm_window_t7

0x3a65,	// (0x000295ea) popup_midp_note_alarm_window_t8_ParamLimits

0x3a65,	// (0x000295ea) popup_midp_note_alarm_window_t8

0x3a77,	// (0x000295fc) popup_midp_note_alarm_window_t9_ParamLimits

0x3a77,	// (0x000295fc) popup_midp_note_alarm_window_t9

0x3a89,	// (0x0002960e) popup_midp_note_alarm_window_t10_ParamLimits

0x3a89,	// (0x0002960e) popup_midp_note_alarm_window_t10

0x3a9b,	// (0x00029620) popup_midp_note_alarm_window_t11_ParamLimits

0x3a9b,	// (0x00029620) popup_midp_note_alarm_window_t11

0xb910,	// (0x00031495) scroll_pane_cp17_ParamLimits

0xb910,	// (0x00031495) scroll_pane_cp17

0x1a66,	// (0x000275eb) volume_small_pane_cp_g1

0x1db2,	// (0x00027937) volume_small_pane_cp_g2

0x1dbb,	// (0x00027940) volume_small_pane_cp_g3

0x1dc4,	// (0x00027949) volume_small_pane_cp_g4

0x1dcd,	// (0x00027952) volume_small_pane_cp_g5

0x1d7c,	// (0x00027901) volume_small_pane_cp_g6

0x1dd6,	// (0x0002795b) volume_small_pane_cp_g7

0x1ddf,	// (0x00027964) volume_small_pane_cp_g8

0x1de8,	// (0x0002796d) volume_small_pane_cp_g9

0x1df1,	// (0x00027976) volume_small_pane_cp_g10

0x0bd7,	// (0x0002675c) midp_ticker_pane_g1_ParamLimits

0x0be3,	// (0x00026768) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x000352ce) midp_ticker_pane_g_ParamLimits

0x0bef,	// (0x00026774) midp_ticker_pane_t1_ParamLimits

0xb042,	// (0x00030bc7) aid_fill_nsta_2

0x32f6,	// (0x00028e7b) list_form2_midp_pane

0x43f5,	// (0x00029f7a) midp_editing_number_pane_ParamLimits

0x4404,	// (0x00029f89) midp_ticker_pane_ParamLimits

0x5053,	// (0x0002abd8) form2_midp_field_pane

0x5077,	// (0x0002abfc) scroll_pane_cp51

0x5097,	// (0x0002ac1c) form2_midp_button_pane_ParamLimits

0x5097,	// (0x0002ac1c) form2_midp_button_pane

0x50a9,	// (0x0002ac2e) form2_midp_content_pane_ParamLimits

0x50a9,	// (0x0002ac2e) form2_midp_content_pane

0x50c3,	// (0x0002ac48) form2_midp_field_choice_group_pane

0x50cb,	// (0x0002ac50) form2_midp_field_pane_g1

0x50d3,	// (0x0002ac58) form2_midp_field_pane_g2

0x50db,	// (0x0002ac60) form2_midp_field_pane_g3

0x50e3,	// (0x0002ac68) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00035668) form2_midp_field_pane_g

0x50eb,	// (0x0002ac70) form2_midp_gauge_slider_pane

0x50f3,	// (0x0002ac78) form2_midp_gauge_wait_pane

0x50fb,	// (0x0002ac80) form2_midp_image_pane_ParamLimits

0x50fb,	// (0x0002ac80) form2_midp_image_pane

0xc0ed,	// (0x00031c72) form2_midp_label_pane_ParamLimits

0xc0ed,	// (0x00031c72) form2_midp_label_pane

0xc106,	// (0x00031c8b) form2_midp_label_pane_cp_ParamLimits

0xc106,	// (0x00031c8b) form2_midp_label_pane_cp

0x5150,	// (0x0002acd5) form2_midp_string_pane_ParamLimits

0x5150,	// (0x0002acd5) form2_midp_string_pane

0xf0ed,	// (0x00034c72) form2_midp_text_pane_ParamLimits

0xf0ed,	// (0x00034c72) form2_midp_text_pane

0x5162,	// (0x0002ace7) form2_midp_time_pane

0x5172,	// (0x0002acf7) input_focus_pane_cp51_ParamLimits

0x5172,	// (0x0002acf7) input_focus_pane_cp51

0xd173,	// (0x00032cf8) form2_midp_label_pane_t1_ParamLimits

0xd173,	// (0x00032cf8) form2_midp_label_pane_t1

0xf106,	// (0x00034c8b) form2_mdip_text_pane_t1_ParamLimits

0xf106,	// (0x00034c8b) form2_mdip_text_pane_t1

0xf124,	// (0x00034ca9) form2_midp_time_pane_t1

0x51d3,	// (0x0002ad58) form2_midp_gauge_slider_pane_t1

0xd1b3,	// (0x00032d38) form2_midp_gauge_slider_pane_t2

0xd1c5,	// (0x00032d4a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00035671) form2_midp_gauge_slider_pane_t

0x5209,	// (0x0002ad8e) form2_midp_slider_pane

0x5215,	// (0x0002ad9a) form2_midp_gauge_wait_pane_t1

0x5223,	// (0x0002ada8) form2_midp_wait_pane_ParamLimits

0x5223,	// (0x0002ada8) form2_midp_wait_pane

0xd1d7,	// (0x00032d5c) list_single_2graphic_pane_cp4_ParamLimits

0xd1d7,	// (0x00032d5c) list_single_2graphic_pane_cp4

0xb51b,	// (0x000310a0) list_single_midp_graphic_pane_cp_ParamLimits

0xb51b,	// (0x000310a0) list_single_midp_graphic_pane_cp

0xc861,	// (0x000323e6) list_highlight_pane_cp20

0x5276,	// (0x0002adfb) list_single_2graphic_pane_g1_cp4

0x487f,	// (0x0002a404) list_single_2graphic_pane_g2_cp4

0x527e,	// (0x0002ae03) list_single_2graphic_pane_t1_cp4

0xc8bd,	// (0x00032442) list_highlight_pane_cp21

0x528d,	// (0x0002ae12) list_single_midp_graphic_pane_g4_cp

0x529c,	// (0x0002ae21) list_single_midp_graphic_pane_t1_cp

0xd1ec,	// (0x00032d71) form2_mdip_string_pane_t1_ParamLimits

0xd1ec,	// (0x00032d71) form2_mdip_string_pane_t1

0xc861,	// (0x000323e6) bg_wml_button_pane_cp2

0xc857,	// (0x000323dc) form2_midp_image_pane_g1

0xec38,	// (0x000347bd) list_double_large_graphic_pane_g5_ParamLimits

0xec38,	// (0x000347bd) list_double_large_graphic_pane_g5

0xa552,	// (0x000300d7) midp_form_pane_ParamLimits

0xc8bd,	// (0x00032442) main_apps_wheel_pane_ParamLimits

0xacfc,	// (0x00030881) popup_preview_window_ParamLimits

0xacfc,	// (0x00030881) popup_preview_window

0xafc9,	// (0x00030b4e) popup_touch_info_window_ParamLimits

0xafc9,	// (0x00030b4e) popup_touch_info_window

0xafe7,	// (0x00030b6c) popup_touch_menu_window_ParamLimits

0xafe7,	// (0x00030b6c) popup_touch_menu_window

0xc84d,	// (0x000323d2) bg_popup_sub_pane_cp6

0x53b8,	// (0x0002af3d) list_touch_menu_pane

0xd262,	// (0x00032de7) list_single_touch_menu_pane_ParamLimits

0xd262,	// (0x00032de7) list_single_touch_menu_pane

0xd276,	// (0x00032dfb) list_single_touch_menu_pane_t1

0xc8bd,	// (0x00032442) bg_popup_sub_pane_cp7_ParamLimits

0xc8bd,	// (0x00032442) bg_popup_sub_pane_cp7

0x53e4,	// (0x0002af69) heading_sub_pane

0x53ec,	// (0x0002af71) list_touch_info_pane_ParamLimits

0x53ec,	// (0x0002af71) list_touch_info_pane

0x53fb,	// (0x0002af80) list_single_touch_info_pane_ParamLimits

0x53fb,	// (0x0002af80) list_single_touch_info_pane

0x540d,	// (0x0002af92) list_single_touch_info_pane_t1

0x541b,	// (0x0002afa0) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x0003567f) list_single_touch_info_pane_t

0x0af6,	// (0x0002667b) bg_popup_heading_pane_cp

0x5429,	// (0x0002afae) heading_sub_pane_t1

0x2f37,	// (0x00028abc) bg_popup_preview_window_pane_cp_ParamLimits

0x2f37,	// (0x00028abc) bg_popup_preview_window_pane_cp

0x53e4,	// (0x0002af69) heading_preview_pane

0x53ec,	// (0x0002af71) list_preview_pane_ParamLimits

0x53ec,	// (0x0002af71) list_preview_pane

0x5437,	// (0x0002afbc) popup_preview_window_g1

0x53fb,	// (0x0002af80) list_single_preview_pane_ParamLimits

0x53fb,	// (0x0002af80) list_single_preview_pane

0x543f,	// (0x0002afc4) list_single_preview_pane_g1

0x5447,	// (0x0002afcc) list_single_preview_pane_t1

0x540d,	// (0x0002af92) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00035684) list_single_preview_pane_t

0x5455,	// (0x0002afda) bg_popup_heading_pane_cp2_ParamLimits

0x5455,	// (0x0002afda) bg_popup_heading_pane_cp2

0x546b,	// (0x0002aff0) heading_preview_pane_g1

0x5473,	// (0x0002aff8) heading_preview_pane_t1_ParamLimits

0x5473,	// (0x0002aff8) heading_preview_pane_t1

0xc910,	// (0x00032495) soft_indicator_pane_t1_ParamLimits

0xcbeb,	// (0x00032770) scroll_pane_ParamLimits

0xcf75,	// (0x00032afa) scroll_sc2_left_pane

0xcf7e,	// (0x00032b03) scroll_sc2_right_pane

0xcf9d,	// (0x00032b22) scroll_bg_pane_g1_ParamLimits

0xcfb2,	// (0x00032b37) scroll_bg_pane_g2_ParamLimits

0xcfca,	// (0x00032b4f) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00035259) scroll_bg_pane_g_ParamLimits

0xcf9d,	// (0x00032b22) scroll_handle_pane_g1_ParamLimits

0xcfdf,	// (0x00032b64) scroll_handle_pane_g2_ParamLimits

0xcfca,	// (0x00032b4f) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00035260) scroll_handle_pane_g_ParamLimits

0xa8a3,	// (0x00030428) popup_choice_list_window_ParamLimits

0xa8a3,	// (0x00030428) popup_choice_list_window

0x2e0d,	// (0x00028992) choice_list_pane

0x2e8f,	// (0x00028a14) cell_toolbar_pane_t1

0x2eb7,	// (0x00028a3c) toolbar_button_pane_ParamLimits

0x3f67,	// (0x00029aec) ai_gene_pane_1_t2_ParamLimits

0x3f67,	// (0x00029aec) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x0003547c) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x0003547c) ai_gene_pane_1_t

0x5490,	// (0x0002b015) scroll_sc2_left_pane_g1

0x5490,	// (0x0002b015) scroll_sc2_right_pane_g1

0x1060,	// (0x00026be5) bg_popup_sub_pane_cp10

0x549a,	// (0x0002b01f) list_choice_list_pane

0xd284,	// (0x00032e09) list_single_choice_list_pane_ParamLimits

0xd284,	// (0x00032e09) list_single_choice_list_pane

0xd298,	// (0x00032e1d) list_single_choice_list_pane_g1

0xa183,	// (0x0002fd08) list_single_choice_list_pane_t1_ParamLimits

0xa183,	// (0x0002fd08) list_single_choice_list_pane_t1

0x54ce,	// (0x0002b053) choice_list_pane_g1

0xd2a0,	// (0x00032e25) choice_list_pane_t1

0xc84d,	// (0x000323d2) input_focus_pane_cp11

0xceea,	// (0x00032a6f) title_pane_stacon_g2_ParamLimits

0xceea,	// (0x00032a6f) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0003523f) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003523f) title_pane_stacon_g

0x0af6,	// (0x0002667b) cursor_press_pane

0xa94a,	// (0x000304cf) popup_fep_hwr_window_ParamLimits

0xa94a,	// (0x000304cf) popup_fep_hwr_window

0x11a8,	// (0x00026d2d) popup_fep_vkb_window_ParamLimits

0x11a8,	// (0x00026d2d) popup_fep_vkb_window

0xd2ae,	// (0x00032e33) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x000356ad) fep_vkb_side_pane_g_ParamLimits

0x1e33,	// (0x000279b8) fep_hwr_candidate_pane_ParamLimits

0x1e33,	// (0x000279b8) fep_hwr_candidate_pane

0x1e5d,	// (0x000279e2) fep_hwr_side_pane_ParamLimits

0x1e5d,	// (0x000279e2) fep_hwr_side_pane

0x1e7d,	// (0x00027a02) fep_hwr_top_pane_ParamLimits

0x1e7d,	// (0x00027a02) fep_hwr_top_pane

0x1e95,	// (0x00027a1a) fep_hwr_write_pane_ParamLimits

0x1e95,	// (0x00027a1a) fep_hwr_write_pane

0xfb28,	// (0x000356ad) fep_vkb_side_pane_g

0x54ec,	// (0x0002b071) fep_hwr_top_pane_g1

0x54fe,	// (0x0002b083) fep_hwr_top_pane_g2

0x1ec1,	// (0x00027a46) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00035689) fep_hwr_top_pane_g

0x1ed6,	// (0x00027a5b) fep_hwr_top_text_pane

0xd0a2,	// (0x00032c27) fep_hwr_top_text_pane_g1

0x5534,	// (0x0002b0b9) fep_hwr_top_text_pane_t1

0x1fcc,	// (0x00027b51) fep_hwr_candidate_pane_g1

0x5779,	// (0x0002b2fe) fep_vkb_keypad_pane_g3_ParamLimits

0x5779,	// (0x0002b2fe) fep_vkb_keypad_pane_g3

0x57a1,	// (0x0002b326) fep_vkb_keypad_pane_g4_ParamLimits

0x57a1,	// (0x0002b326) fep_vkb_keypad_pane_g4

0x5810,	// (0x0002b395) fep_vkb_bottom_pane_g2_ParamLimits

0x5810,	// (0x0002b395) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x000356b4) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x000356b4) fep_vkb_bottom_pane_g

0x5490,	// (0x0002b015) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x000356be) cell_vkb_side_pane_g

0x589b,	// (0x0002b420) cell_vkb_side_pane_t1

0x58a9,	// (0x0002b42e) cell_vkb_side_pane_t1_copy1

0x5490,	// (0x0002b015) bg_fep_vkb_candidate_pane_g2

0x59d5,	// (0x0002b55a) cell_vkb_candidate_pane_ParamLimits

0x5542,	// (0x0002b0c7) aid_size_cell_vkb_ParamLimits

0x5542,	// (0x0002b0c7) aid_size_cell_vkb

0x59d5,	// (0x0002b55a) cell_vkb_candidate_pane

0x1fe6,	// (0x00027b6b) bg_popup_fep_shadow_pane_g1

0xd2f0,	// (0x00032e75) fep_vkb_bottom_pane_ParamLimits

0xd2f0,	// (0x00032e75) fep_vkb_bottom_pane

0x5606,	// (0x0002b18b) fep_vkb_candidate_pane_ParamLimits

0x5606,	// (0x0002b18b) fep_vkb_candidate_pane

0xd315,	// (0x00032e9a) fep_vkb_keypad_pane_ParamLimits

0xd315,	// (0x00032e9a) fep_vkb_keypad_pane

0xd34a,	// (0x00032ecf) fep_vkb_side_pane_ParamLimits

0xd34a,	// (0x00032ecf) fep_vkb_side_pane

0xd386,	// (0x00032f0b) fep_vkb_top_pane_ParamLimits

0xd386,	// (0x00032f0b) fep_vkb_top_pane

0x56d2,	// (0x0002b257) fep_vkb_top_pane_g1_ParamLimits

0x56d2,	// (0x0002b257) fep_vkb_top_pane_g1

0x56e1,	// (0x0002b266) fep_vkb_top_pane_g2_ParamLimits

0x56e1,	// (0x0002b266) fep_vkb_top_pane_g2

0x56f0,	// (0x0002b275) fep_vkb_top_pane_g3_ParamLimits

0x56f0,	// (0x0002b275) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x000356a4) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x000356a4) fep_vkb_top_pane_g

0x570e,	// (0x0002b293) fep_vkb_top_text_pane_ParamLimits

0x570e,	// (0x0002b293) fep_vkb_top_text_pane

0xd3bb,	// (0x00032f40) fep_vkb_side_pane_g1_ParamLimits

0xd3bb,	// (0x00032f40) fep_vkb_side_pane_g1

0x5768,	// (0x0002b2ed) grid_vkb_side_pane_ParamLimits

0x5768,	// (0x0002b2ed) grid_vkb_side_pane

0x1fee,	// (0x00027b73) bg_popup_fep_shadow_pane_g2

0x1ff7,	// (0x00027b7c) bg_popup_fep_shadow_pane_g3

0x1fff,	// (0x00027b84) bg_popup_fep_shadow_pane_g4

0x2008,	// (0x00027b8d) bg_popup_fep_shadow_pane_g5

0x2012,	// (0x00027b97) bg_popup_fep_shadow_pane_g6

0x201a,	// (0x00027b9f) bg_popup_fep_shadow_pane_g7

0xcce7,	// (0x0003286c) bg_popup_fep_shadow_pane_g8

0x57bf,	// (0x0002b344) grid_vkb_keypad_number_pane_ParamLimits

0x57bf,	// (0x0002b344) grid_vkb_keypad_number_pane

0x57cf,	// (0x0002b354) grid_vkb_keypad_pane_ParamLimits

0x57cf,	// (0x0002b354) grid_vkb_keypad_pane

0x57f5,	// (0x0002b37a) fep_vkb_bottom_pane_g1_ParamLimits

0x57f5,	// (0x0002b37a) fep_vkb_bottom_pane_g1

0x581e,	// (0x0002b3a3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x581e,	// (0x0002b3a3) grid_vkb_keypad_bottom_left_pane

0x5833,	// (0x0002b3b8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5833,	// (0x0002b3b8) grid_vkb_keypad_bottom_right_pane

0x5848,	// (0x0002b3cd) fep_vkb_top_text_pane_g1

0xd402,	// (0x00032f87) fep_vkb_top_text_pane_t1

0xd414,	// (0x00032f99) cell_vkb_side_pane_ParamLimits

0xd414,	// (0x00032f99) cell_vkb_side_pane

0x5490,	// (0x0002b015) cell_vkb_side_pane_g1

0x58b7,	// (0x0002b43c) cell_vkb_keypad_pane_ParamLimits

0x58b7,	// (0x0002b43c) cell_vkb_keypad_pane

0x592c,	// (0x0002b4b1) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x000356d1) bg_popup_fep_shadow_pane_g

0x5490,	// (0x0002b015) cell_hwr_side_pane_g1

0x5490,	// (0x0002b015) cell_hwr_side_pane_g2

0x5936,	// (0x0002b4bb) cell_vkb_keypad_pane_t1

0xd42a,	// (0x00032faf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd42a,	// (0x00032faf) cell_vkb_keypad_bottom_left_pane

0xd43f,	// (0x00032fc4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd43f,	// (0x00032fc4) cell_vkb_keypad_bottom_right_pane

0x5490,	// (0x0002b015) cell_vkb_keypad_bottom_left_pane_g1

0x5490,	// (0x0002b015) cell_vkb_keypad_bottom_right_pane_g1

0x599a,	// (0x0002b51f) cell_vkb_keypad_number_pane_ParamLimits

0x599a,	// (0x0002b51f) cell_vkb_keypad_number_pane

0x59b9,	// (0x0002b53e) cell_vkb_keypad_number_pane_g1

0x59c3,	// (0x0002b548) cell_vkb_keypad_number_pane_g2

0x59cc,	// (0x0002b551) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000356c3) cell_vkb_keypad_number_pane_g

0x5936,	// (0x0002b4bb) cell_vkb_keypad_number_pane_t1

0x59f0,	// (0x0002b575) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x000356be) cell_hwr_side_pane_g

0x5a09,	// (0x0002b58e) cell_hwr_side_pane_t1

0x202c,	// (0x00027bb1) cell_hwr_side_pane_t1_copy1

0x5700,	// (0x0002b285) cell_hwr_candidate_pane_g1

0x203a,	// (0x00027bbf) cell_hwr_candidate_pane_t1

0x5490,	// (0x0002b015) cell_vkb_candidate_pane_g2

0x5a8f,	// (0x0002b614) cell_vkb_candidate_pane_t1

0x1dfa,	// (0x0002797f) bg_popup_fep_shadow_pane_ParamLimits

0x1dfa,	// (0x0002797f) bg_popup_fep_shadow_pane

0xd2b6,	// (0x00032e3b) bg_fep_hwr_top_pane_g4

0x5510,	// (0x0002b095) bg_hwr_side_pane_g1_ParamLimits

0x5510,	// (0x0002b095) bg_hwr_side_pane_g1

0xc13d,	// (0x00031cc2) cell_hwr_side_pane_ParamLimits

0xc13d,	// (0x00031cc2) cell_hwr_side_pane

0x1f4d,	// (0x00027ad2) fep_hwr_write_pane_g1_ParamLimits

0x1f4d,	// (0x00027ad2) fep_hwr_write_pane_g1

0x1f5a,	// (0x00027adf) fep_hwr_write_pane_g2_ParamLimits

0x1f5a,	// (0x00027adf) fep_hwr_write_pane_g2

0x1f67,	// (0x00027aec) fep_hwr_write_pane_g3_ParamLimits

0x1f67,	// (0x00027aec) fep_hwr_write_pane_g3

0xc15d,	// (0x00031ce2) fep_hwr_write_pane_g4_ParamLimits

0xc15d,	// (0x00031ce2) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00035690) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00035690) fep_hwr_write_pane_g

0xd2b6,	// (0x00032e3b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd2b6,	// (0x00032e3b) bg_fep_hwr_candidate_pane_g2

0x1f8a,	// (0x00027b0f) cell_hwr_candidate_pane_ParamLimits

0x1f8a,	// (0x00027b0f) cell_hwr_candidate_pane

0x1fcc,	// (0x00027b51) fep_hwr_candidate_pane_g1_ParamLimits

0x5570,	// (0x0002b0f5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5570,	// (0x0002b0f5) bg_popup_fep_shadow_pane_cp2

0x5700,	// (0x0002b285) fep_vkb_top_pane_g4_ParamLimits

0x5700,	// (0x0002b285) fep_vkb_top_pane_g4

0x5746,	// (0x0002b2cb) fep_vkb_side_pane_g2_ParamLimits

0x5746,	// (0x0002b2cb) fep_vkb_side_pane_g2

0x9318,	// (0x0002ee9d) list_setting_pane_t4_ParamLimits

0x9318,	// (0x0002ee9d) list_setting_pane_t4

0x93b2,	// (0x0002ef37) list_setting_number_pane_t5_ParamLimits

0x93b2,	// (0x0002ef37) list_setting_number_pane_t5

0xd0d9,	// (0x00032c5e) list_double_heading_pane_cp2_ParamLimits

0xd0d9,	// (0x00032c5e) list_double_heading_pane_cp2

0x5a9d,	// (0x0002b622) list_double_heading_pane_g1_cp2_ParamLimits

0x5a9d,	// (0x0002b622) list_double_heading_pane_g1_cp2

0x5aa9,	// (0x0002b62e) list_double_heading_pane_g2_cp2_ParamLimits

0x5aa9,	// (0x0002b62e) list_double_heading_pane_g2_cp2

0x5abd,	// (0x0002b642) list_double_heading_pane_t1_cp2_ParamLimits

0x5abd,	// (0x0002b642) list_double_heading_pane_t1_cp2

0x5ad3,	// (0x0002b658) list_double_heading_pane_t2_cp2_ParamLimits

0x5ad3,	// (0x0002b658) list_double_heading_pane_t2_cp2

0xc845,	// (0x000323ca) aid_value_unit2

0xf544,	// (0x000350c9) popup_preview_fixed_window

0xc9e7,	// (0x0003256c) bg_popup_preview_window_pane_cp02

0x5ae5,	// (0x0002b66a) list_preview_fixed_pane

0x5b2b,	// (0x0002b6b0) list_empty_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_empty_pane_fp

0x5b2b,	// (0x0002b6b0) list_single_cale_day_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_cale_day_pane_fp

0x5b2b,	// (0x0002b6b0) list_single_graphic_heading_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_graphic_heading_pane_fp

0x5b2b,	// (0x0002b6b0) list_single_graphic_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_graphic_pane_fp

0x5b2b,	// (0x0002b6b0) list_single_heading_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_heading_pane_fp

0x5b2b,	// (0x0002b6b0) list_single_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_pane_fp

0x5b41,	// (0x0002b6c6) list_single_pane_fp_g1_ParamLimits

0x5b41,	// (0x0002b6c6) list_single_pane_fp_g1

0xf137,	// (0x00034cbc) list_single_pane_fp_g2_ParamLimits

0xf137,	// (0x00034cbc) list_single_pane_fp_g2

0xf143,	// (0x00034cc8) list_single_pane_fp_g3_ParamLimits

0xf143,	// (0x00034cc8) list_single_pane_fp_g3

0x5b4d,	// (0x0002b6d2) list_single_pane_fp_g4_ParamLimits

0x5b4d,	// (0x0002b6d2) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x000356f2) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x000356f2) list_single_pane_fp_g

0xf157,	// (0x00034cdc) list_single_pane_fp_t1_ParamLimits

0xf157,	// (0x00034cdc) list_single_pane_fp_t1

0xf16e,	// (0x00034cf3) list_single_graphic_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cf3) list_single_graphic_pane_fp_g1

0x5b41,	// (0x0002b6c6) list_single_graphic_pane_fp_g2_ParamLimits

0x5b41,	// (0x0002b6c6) list_single_graphic_pane_fp_g2

0xf137,	// (0x00034cbc) list_single_graphic_pane_fp_g3_ParamLimits

0xf137,	// (0x00034cbc) list_single_graphic_pane_fp_g3

0xf143,	// (0x00034cc8) list_single_graphic_pane_fp_g4_ParamLimits

0xf143,	// (0x00034cc8) list_single_graphic_pane_fp_g4

0x5b4d,	// (0x0002b6d2) list_single_graphic_pane_fp_g5_ParamLimits

0x5b4d,	// (0x0002b6d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x000356fb) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x000356fb) list_single_graphic_pane_fp_g

0xf17a,	// (0x00034cff) list_single_graphic_pane_fp_t1_ParamLimits

0xf17a,	// (0x00034cff) list_single_graphic_pane_fp_t1

0xf16e,	// (0x00034cf3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cf3) list_single_graphic_heading_pane_fp_g1

0x5b41,	// (0x0002b6c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b41,	// (0x0002b6c6) list_single_graphic_heading_pane_fp_g2

0xf137,	// (0x00034cbc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf137,	// (0x00034cbc) list_single_graphic_heading_pane_fp_g3

0xf143,	// (0x00034cc8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf143,	// (0x00034cc8) list_single_graphic_heading_pane_fp_g4

0x5b4d,	// (0x0002b6d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b4d,	// (0x0002b6d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000356fb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000356fb) list_single_graphic_heading_pane_fp_g

0xf190,	// (0x00034d15) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf190,	// (0x00034d15) list_single_graphic_heading_pane_fp_t1

0xf1a6,	// (0x00034d2b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x00034d2b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00035706) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00035706) list_single_graphic_heading_pane_fp_t

0xf1b8,	// (0x00034d3d) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1b8,	// (0x00034d3d) list_single_cale_day_pane_fp_g1

0x5b59,	// (0x0002b6de) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b59,	// (0x0002b6de) list_single_cale_day_pane_fp_g2

0xf1f0,	// (0x00034d75) list_single_cale_day_pane_fp_g3_ParamLimits

0xf1f0,	// (0x00034d75) list_single_cale_day_pane_fp_g3

0xf218,	// (0x00034d9d) list_single_cale_day_pane_fp_g4_ParamLimits

0xf218,	// (0x00034d9d) list_single_cale_day_pane_fp_g4

0xf23c,	// (0x00034dc1) list_single_cale_day_pane_fp_g5_ParamLimits

0xf23c,	// (0x00034dc1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x0003570b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x0003570b) list_single_cale_day_pane_fp_g

0xf260,	// (0x00034de5) list_single_cale_day_pane_fp_t1_ParamLimits

0xf260,	// (0x00034de5) list_single_cale_day_pane_fp_t1

0xf286,	// (0x00034e0b) list_single_cale_day_pane_fp_t2_ParamLimits

0xf286,	// (0x00034e0b) list_single_cale_day_pane_fp_t2

0xf29f,	// (0x00034e24) list_single_cale_day_pane_fp_t3_ParamLimits

0xf29f,	// (0x00034e24) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x00035716) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x00035716) list_single_cale_day_pane_fp_t

0x5b41,	// (0x0002b6c6) list_empty_pane_fp_g1_ParamLimits

0x5b41,	// (0x0002b6c6) list_empty_pane_fp_g1

0xf2b8,	// (0x00034e3d) list_empty_pane_fp_t1

0xf2c6,	// (0x00034e4b) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x0003571d) list_empty_pane_fp_t

0x5b41,	// (0x0002b6c6) list_single_heading_pane_fp_g1_ParamLimits

0x5b41,	// (0x0002b6c6) list_single_heading_pane_fp_g1

0xf137,	// (0x00034cbc) list_single_heading_pane_fp_g2_ParamLimits

0xf137,	// (0x00034cbc) list_single_heading_pane_fp_g2

0xf143,	// (0x00034cc8) list_single_heading_pane_fp_g3_ParamLimits

0xf143,	// (0x00034cc8) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00035722) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00035722) list_single_heading_pane_fp_g

0xf2d4,	// (0x00034e59) list_single_heading_pane_fp_t1_ParamLimits

0xf2d4,	// (0x00034e59) list_single_heading_pane_fp_t1

0xf2e6,	// (0x00034e6b) list_single_heading_pane_fp_t2_ParamLimits

0xf2e6,	// (0x00034e6b) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00035729) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00035729) list_single_heading_pane_fp_t

0xa1cf,	// (0x0002fd54) aid_size_cell_fast

0xc9ca,	// (0x0003254f) soft_indicator_pane_cp1_t1

0xa1d8,	// (0x0002fd5d) cell_app_pane_cp2_ParamLimits

0xa1d8,	// (0x0002fd5d) cell_app_pane_cp2

0x1e1c,	// (0x000279a1) fep_hwr_candidate_drop_down_list_pane

0xd2c4,	// (0x00032e49) fep_hwr_candidate_pane_g3_ParamLimits

0xd2c4,	// (0x00032e49) fep_hwr_candidate_pane_g3

0xd2d1,	// (0x00032e56) fep_hwr_candidate_pane_g4_ParamLimits

0xd2d1,	// (0x00032e56) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x0003569d) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x0003569d) fep_hwr_candidate_pane_g

0x55f5,	// (0x0002b17a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55f5,	// (0x0002b17a) fep_vkb_candidate_drop_down_list_pane

0x59f8,	// (0x0002b57d) fep_vkb_candidate_pane_g3

0x5a00,	// (0x0002b585) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x000356ca) fep_vkb_candidate_pane_g

0x5700,	// (0x0002b285) cell_hwr_candidate_pane_g1_ParamLimits

0x5a17,	// (0x0002b59c) cell_hwr_candidate_pane_g3_ParamLimits

0x5a17,	// (0x0002b59c) cell_hwr_candidate_pane_g3

0x5a38,	// (0x0002b5bd) cell_hwr_candidate_pane_g4_ParamLimits

0x5a38,	// (0x0002b5bd) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x000356e4) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x000356e4) cell_hwr_candidate_pane_g

0x5a59,	// (0x0002b5de) cell_vkb_candidate_pane_g3_ParamLimits

0x5a59,	// (0x0002b5de) cell_vkb_candidate_pane_g3

0x5a74,	// (0x0002b5f9) cell_vkb_candidate_pane_g4_ParamLimits

0x5a74,	// (0x0002b5f9) cell_vkb_candidate_pane_g4

0xd45a,	// (0x00032fdf) cell_app_pane_cp2_g1_ParamLimits

0xd45a,	// (0x00032fdf) cell_app_pane_cp2_g1

0x5b83,	// (0x0002b708) cell_app_pane_cp2_g2_ParamLimits

0x5b83,	// (0x0002b708) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x0003572e) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x0003572e) cell_app_pane_cp2_g

0x5b8f,	// (0x0002b714) cell_app_pane_cp2_t1_ParamLimits

0x5b8f,	// (0x0002b714) cell_app_pane_cp2_t1

0xcc6f,	// (0x000327f4) grid_highlight_pane_cp1_ParamLimits

0xcc6f,	// (0x000327f4) grid_highlight_pane_cp1

0x2058,	// (0x00027bdd) cell_hwr_candidate_pane_cp1_ParamLimits

0x2058,	// (0x00027bdd) cell_hwr_candidate_pane_cp1

0x5700,	// (0x0002b285) fep_hwr_candidate_drop_down_list_pane_g1

0x5ba1,	// (0x0002b726) fep_hwr_candidate_drop_down_list_pane_g2

0x5bae,	// (0x0002b733) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035733) fep_hwr_candidate_drop_down_list_pane_g

0x2077,	// (0x00027bfc) fep_hwr_candidate_drop_down_list_scroll_pane

0x2080,	// (0x00027c05) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2080,	// (0x00027c05) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x208d,	// (0x00027c12) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x208d,	// (0x00027c12) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x209a,	// (0x00027c1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x209a,	// (0x00027c1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5a59,	// (0x0002b5de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a59,	// (0x0002b5de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5a74,	// (0x0002b5f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a74,	// (0x0002b5f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x20a7,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x20a7,	// (0x00027c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x20c2,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x20c2,	// (0x00027c47) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20dd,	// (0x00027c62) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20dd,	// (0x00027c62) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x0003573a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x0003573a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5bbb,	// (0x0002b740) cell_vkb_candidate_pane_cp1_ParamLimits

0x5bbb,	// (0x0002b740) cell_vkb_candidate_pane_cp1

0x5700,	// (0x0002b285) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5700,	// (0x0002b285) fep_vkb_candidate_drop_down_list_pane_g1

0x5ba1,	// (0x0002b726) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5ba1,	// (0x0002b726) fep_vkb_candidate_drop_down_list_pane_g2

0x5bae,	// (0x0002b733) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5bae,	// (0x0002b733) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035733) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00035733) fep_vkb_candidate_drop_down_list_pane_g

0x5bdb,	// (0x0002b760) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5bdb,	// (0x0002b760) fep_vkb_candidate_drop_down_list_scroll_pane

0x5be8,	// (0x0002b76d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5be8,	// (0x0002b76d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5bf5,	// (0x0002b77a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5bf5,	// (0x0002b77a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5c01,	// (0x0002b786) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c01,	// (0x0002b786) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5a17,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a17,	// (0x0002b59c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5a38,	// (0x0002b5bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a38,	// (0x0002b5bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c0d,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c0d,	// (0x0002b792) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c2e,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c2e,	// (0x0002b7b3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5c4f,	// (0x0002b7d4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c4f,	// (0x0002b7d4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003574b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003574b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9af9,	// (0x0002f67e) title_pane_g1_ParamLimits

0x9b0c,	// (0x0002f691) title_pane_g2_ParamLimits

0xf54e,	// (0x000350d3) title_pane_g_ParamLimits

0xd092,	// (0x00032c17) aid_call2_pane

0xd09a,	// (0x00032c1f) aid_call_pane

0xd0a2,	// (0x00032c27) popup_clock_analogue_window_g1

0xd0a2,	// (0x00032c27) popup_clock_analogue_window_g2

0x03a4,	// (0x00025f29) popup_clock_analogue_window_g3

0x03ad,	// (0x00025f32) popup_clock_analogue_window_g4

0xc857,	// (0x000323dc) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0003526e) popup_clock_analogue_window_g

0x03b5,	// (0x00025f3a) popup_clock_analogue_window_t1

0x03ed,	// (0x00025f72) clock_digital_number_pane_ParamLimits

0x03ed,	// (0x00025f72) clock_digital_number_pane

0x03f9,	// (0x00025f7e) clock_digital_number_pane_cp02_ParamLimits

0x03f9,	// (0x00025f7e) clock_digital_number_pane_cp02

0x0405,	// (0x00025f8a) clock_digital_number_pane_cp03_ParamLimits

0x0405,	// (0x00025f8a) clock_digital_number_pane_cp03

0x0411,	// (0x00025f96) clock_digital_number_pane_cp04_ParamLimits

0x0411,	// (0x00025f96) clock_digital_number_pane_cp04

0x041d,	// (0x00025fa2) clock_digital_separator_pane_ParamLimits

0x041d,	// (0x00025fa2) clock_digital_separator_pane

0x0429,	// (0x00025fae) popup_clock_digital_window_t1_ParamLimits

0x0429,	// (0x00025fae) popup_clock_digital_window_t1

0xc857,	// (0x000323dc) clock_digital_number_pane_g1

0xc857,	// (0x000323dc) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00035279) clock_digital_number_pane_g

0xc857,	// (0x000323dc) clock_digital_separator_pane_g1

0xc857,	// (0x000323dc) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00035279) clock_digital_separator_pane_g

0xb01e,	// (0x00030ba3) aid_fill_nsta_ParamLimits

0xb154,	// (0x00030cd9) indicator_nsta_pane_ParamLimits

0x18e2,	// (0x00027467) popup_clock_analogue_window

0x18e2,	// (0x00027467) popup_clock_digital_window

0xd165,	// (0x00032cea) grid_indicator_nsta_pane_ParamLimits

0x4e9b,	// (0x0002aa20) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x0003561d) clock_nsta_pane_t

0x02cf,	// (0x00025e54) aid_size_max_handle

0xa2b6,	// (0x0002fe3b) aid_size_min_handle

0x0af6,	// (0x0002667b) editor_scroll_pane

0x5c6a,	// (0x0002b7ef) ex_editor_pane

0xcd8e,	// (0x00032913) scroll_pane_cp13

0xcc17,	// (0x0003279c) scroll_pane_cp14

0xd0d1,	// (0x00032c56) scroll_pane_cp36

0xa380,	// (0x0002ff05) list_single_graphic_hl_pane_cp2_ParamLimits

0xa380,	// (0x0002ff05) list_single_graphic_hl_pane_cp2

0xbda8,	// (0x0003192d) list_single_graphic_hl_pane_ParamLimits

0xbda8,	// (0x0003192d) list_single_graphic_hl_pane

0x9711,	// (0x0002f296) aid_size_min_hl_cp1

0x5c72,	// (0x0002b7f7) list_highlight_pane_cp34_ParamLimits

0x5c72,	// (0x0002b7f7) list_highlight_pane_cp34

0x5c83,	// (0x0002b808) list_single_graphic_hl_pane_g1_ParamLimits

0x5c83,	// (0x0002b808) list_single_graphic_hl_pane_g1

0x971a,	// (0x0002f29f) list_single_graphic_hl_pane_g2_ParamLimits

0x971a,	// (0x0002f29f) list_single_graphic_hl_pane_g2

0x971a,	// (0x0002f29f) list_single_graphic_hl_pane_g3_ParamLimits

0x971a,	// (0x0002f29f) list_single_graphic_hl_pane_g3

0xf2fc,	// (0x00034e81) list_single_graphic_hl_pane_g4_ParamLimits

0xf2fc,	// (0x00034e81) list_single_graphic_hl_pane_g4

0x9726,	// (0x0002f2ab) list_single_graphic_hl_pane_g5_ParamLimits

0x9726,	// (0x0002f2ab) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x0003575c) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x0003575c) list_single_graphic_hl_pane_g

0x973a,	// (0x0002f2bf) list_single_graphic_hl_pane_t1_ParamLimits

0x973a,	// (0x0002f2bf) list_single_graphic_hl_pane_t1

0x5cb0,	// (0x0002b835) aid_size_min_hl_cp2

0x5cb9,	// (0x0002b83e) list_highlight_pane_cp34_cp2_ParamLimits

0x5cb9,	// (0x0002b83e) list_highlight_pane_cp34_cp2

0x5c83,	// (0x0002b808) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5c83,	// (0x0002b808) list_single_graphic_hl_pane_g1_cp2

0x5cc6,	// (0x0002b84b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5cc6,	// (0x0002b84b) list_single_graphic_hl_pane_g2_cp2

0xd478,	// (0x00032ffd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd478,	// (0x00032ffd) list_single_graphic_hl_pane_g3_cp2

0x0a2f,	// (0x000265b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0a2f,	// (0x000265b4) list_single_graphic_hl_pane_g4_cp2

0x5ce0,	// (0x0002b865) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5ce0,	// (0x0002b865) list_single_graphic_hl_pane_g5_cp2

0xa723,	// (0x000302a8) control_pane_g4_ParamLimits

0xa723,	// (0x000302a8) control_pane_g4

0x1060,	// (0x00026be5) bg_popup_sub_pane_cp10_ParamLimits

0x549a,	// (0x0002b01f) list_choice_list_pane_ParamLimits

0x54a9,	// (0x0002b02e) scroll_pane_cp23

0xc9e7,	// (0x0003256c) bg_popup_preview_window_pane_cp02_ParamLimits

0x5ae5,	// (0x0002b66a) list_preview_fixed_pane_ParamLimits

0x5afb,	// (0x0002b680) list_preview_fixed_pane_cp_ParamLimits

0x5afb,	// (0x0002b680) list_preview_fixed_pane_cp

0x5b07,	// (0x0002b68c) popup_preview_fixed_window_g1_ParamLimits

0x5b07,	// (0x0002b68c) popup_preview_fixed_window_g1

0x5b13,	// (0x0002b698) popup_preview_fixed_window_g2_ParamLimits

0x5b13,	// (0x0002b698) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x000356eb) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x000356eb) popup_preview_fixed_window_g

0x01a9,	// (0x00025d2e) aid_navi_side_left_pane_ParamLimits

0x01be,	// (0x00025d43) aid_navi_side_right_pane_ParamLimits

0x01d6,	// (0x00025d5b) navi_icon_pane_stacon_ParamLimits

0x01ea,	// (0x00025d6f) navi_navi_pane_stacon_ParamLimits

0x01d6,	// (0x00025d5b) navi_text_pane_stacon_ParamLimits

0xc84d,	// (0x000323d2) main_text_info_pane

0x5d0a,	// (0x0002b88f) listscroll_text_info_pane

0x5d12,	// (0x0002b897) list_text_info_pane_ParamLimits

0x5d12,	// (0x0002b897) list_text_info_pane

0x5d21,	// (0x0002b8a6) scroll_pane_cp24_ParamLimits

0x5d21,	// (0x0002b8a6) scroll_pane_cp24

0xd486,	// (0x0003300b) list_text_info_pane_t1_ParamLimits

0xd486,	// (0x0003300b) list_text_info_pane_t1

0xa8bf,	// (0x00030444) popup_fast_swap2_window_ParamLimits

0xa8bf,	// (0x00030444) popup_fast_swap2_window

0x5d73,	// (0x0002b8f8) aid_size_cell_fast2

0xc84d,	// (0x000323d2) bg_popup_window_pane_cp17

0x332a,	// (0x00028eaf) heading_pane_cp2

0xcb1b,	// (0x000326a0) listscroll_fast2_pane

0x5d7d,	// (0x0002b902) grid_fast2_pane

0x5d87,	// (0x0002b90c) listscroll_fast2_pane_g1

0x5d8f,	// (0x0002b914) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00035767) listscroll_fast2_pane_g

0xcd8e,	// (0x00032913) scroll_pane_cp26

0x5d99,	// (0x0002b91e) cell_fast2_pane_ParamLimits

0x5d99,	// (0x0002b91e) cell_fast2_pane

0x5dae,	// (0x0002b933) cell_fast2_pane_g1

0x5db7,	// (0x0002b93c) cell_fast2_pane_g2

0x5dc0,	// (0x0002b945) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x0003576c) cell_fast2_pane_g

0xcb4e,	// (0x000326d3) grid_highlight_pane_cp9

0xcb63,	// (0x000326e8) main_eswt_pane_ParamLimits

0xcb63,	// (0x000326e8) main_eswt_pane

0x5d36,	// (0x0002b8bb) list_single_text_info_pane

0x5dc8,	// (0x0002b94d) eswt_ctrl_button_pane

0x5dc8,	// (0x0002b94d) eswt_ctrl_canvas_pane

0xd4a2,	// (0x00033027) eswt_ctrl_combo_pane

0x5dc8,	// (0x0002b94d) eswt_ctrl_default_pane

0x5dc8,	// (0x0002b94d) eswt_ctrl_label_pane

0x5dd8,	// (0x0002b95d) eswt_ctrl_wait_pane

0xd4aa,	// (0x0003302f) eswt_shell_pane

0xc84d,	// (0x000323d2) listscroll_eswt_app_pane

0x5e00,	// (0x0002b985) popup_eswt_tasktip_window_ParamLimits

0x5e00,	// (0x0002b985) popup_eswt_tasktip_window

0x2f37,	// (0x00028abc) bg_popup_window_pane_cp18

0x5e11,	// (0x0002b996) eswt_control_pane_g1_ParamLimits

0x5e11,	// (0x0002b996) eswt_control_pane_g1

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_ParamLimits

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_ParamLimits

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_ParamLimits

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00035773) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00035773) eswt_control_pane_g

0xcc6f,	// (0x000327f4) bg_button_pane_ParamLimits

0xcc6f,	// (0x000327f4) bg_button_pane

0xcb63,	// (0x000326e8) common_borders_pane_copy2_ParamLimits

0xcb63,	// (0x000326e8) common_borders_pane_copy2

0x5e45,	// (0x0002b9ca) control_button_pane_g1_ParamLimits

0x5e45,	// (0x0002b9ca) control_button_pane_g1

0x5e51,	// (0x0002b9d6) control_button_pane_g2_ParamLimits

0x5e51,	// (0x0002b9d6) control_button_pane_g2

0x5e5d,	// (0x0002b9e2) control_button_pane_g3_ParamLimits

0x5e5d,	// (0x0002b9e2) control_button_pane_g3

0x0002,

0xfbf7,	// (0x0003577c) control_button_pane_g_ParamLimits

0xfbf7,	// (0x0003577c) control_button_pane_g

0x5e71,	// (0x0002b9f6) control_button_pane_t1

0x5e7f,	// (0x0002ba04) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00035783) control_button_pane_t

0x2ec3,	// (0x00028a48) bg_button_pane_g1

0x2ecb,	// (0x00028a50) bg_button_pane_g2

0x2ed3,	// (0x00028a58) bg_button_pane_g3

0x2edb,	// (0x00028a60) bg_button_pane_g4

0x2ee3,	// (0x00028a68) bg_button_pane_g5

0x2eeb,	// (0x00028a70) bg_button_pane_g6

0x2ef3,	// (0x00028a78) bg_button_pane_g7

0x2efb,	// (0x00028a80) bg_button_pane_g8

0x2f03,	// (0x00028a88) bg_button_pane_g9

0x0008,

0xf84b,	// (0x000353d0) bg_button_pane_g

0x5455,	// (0x0002afda) common_borders_pane_ParamLimits

0x5455,	// (0x0002afda) common_borders_pane

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy1_ParamLimits

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy1

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy1_ParamLimits

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy1

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy1_ParamLimits

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy1

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy1_ParamLimits

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy1

0x5490,	// (0x0002b015) bg_eswt_ctrl_canvas_pane_g1

0x5455,	// (0x0002afda) common_borders_pane_cp2_ParamLimits

0x5455,	// (0x0002afda) common_borders_pane_cp2

0x5455,	// (0x0002afda) common_borders_pane_cp3_ParamLimits

0x5455,	// (0x0002afda) common_borders_pane_cp3

0x5e8d,	// (0x0002ba12) separator_horizontal_pane

0x5e95,	// (0x0002ba1a) separator_vertical_pane

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy2_ParamLimits

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy2

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy2_ParamLimits

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy2

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy2_ParamLimits

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy2

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy2_ParamLimits

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy2

0xc84d,	// (0x000323d2) common_borders_pane_cp4

0x5e9e,	// (0x0002ba23) separator_horizontal_pane_g1

0x5ea7,	// (0x0002ba2c) separator_horizontal_pane_g2

0x5eb0,	// (0x0002ba35) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00035788) separator_horizontal_pane_g

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy3_ParamLimits

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy3

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy3_ParamLimits

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy3

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy3_ParamLimits

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy3

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy3_ParamLimits

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy3

0xc84d,	// (0x000323d2) common_borders_pane_cp5

0x5eb9,	// (0x0002ba3e) separator_vertical_pane_g1

0x5ec2,	// (0x0002ba47) separator_vertical_pane_g2

0x5ecb,	// (0x0002ba50) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x0003578f) separator_vertical_pane_g

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy4_ParamLimits

0x5e11,	// (0x0002b996) eswt_control_pane_g1_copy4

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy4_ParamLimits

0x5e1e,	// (0x0002b9a3) eswt_control_pane_g2_copy4

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy4_ParamLimits

0x5e2b,	// (0x0002b9b0) eswt_control_pane_g3_copy4

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy4_ParamLimits

0x5e38,	// (0x0002b9bd) eswt_control_pane_g4_copy4

0xd4ca,	// (0x0003304f) eswt_ctrl_combo_button_pane

0xd4d2,	// (0x00033057) eswt_ctrl_input_pane

0xd4da,	// (0x0003305f) popup_choice_list_window_cp70

0xd4e2,	// (0x00033067) eswt_ctrl_input_pane_t1

0xc84d,	// (0x000323d2) input_focus_pane_cp70

0x5455,	// (0x0002afda) bg_button_pane_cp70_ParamLimits

0x5455,	// (0x0002afda) bg_button_pane_cp70

0xd4f0,	// (0x00033075) eswt_ctrl_combo_button_pane_g1

0x5f02,	// (0x0002ba87) wait_bar_pane_cp70

0x2f37,	// (0x00028abc) bg_popup_window_pane_cp70_ParamLimits

0x2f37,	// (0x00028abc) bg_popup_window_pane_cp70

0x5f0a,	// (0x0002ba8f) popup_eswt_tasktip_window_t1

0x5f20,	// (0x0002baa5) wait_bar_pane_cp71_ParamLimits

0x5f20,	// (0x0002baa5) wait_bar_pane_cp71

0x5f2c,	// (0x0002bab1) grid_eswt_app_pane

0xcf7e,	// (0x00032b03) scroll_pane_cp70

0xd4f8,	// (0x0003307d) cell_eswt_app_pane_ParamLimits

0xd4f8,	// (0x0003307d) cell_eswt_app_pane

0xd522,	// (0x000330a7) cell_eswt_app_pane_g1_ParamLimits

0xd522,	// (0x000330a7) cell_eswt_app_pane_g1

0xd551,	// (0x000330d6) cell_eswt_app_pane_g2_ParamLimits

0xd551,	// (0x000330d6) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00035796) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00035796) cell_eswt_app_pane_g

0xd575,	// (0x000330fa) cell_eswt_app_pane_t1_ParamLimits

0xd575,	// (0x000330fa) cell_eswt_app_pane_t1

0x5fea,	// (0x0002bb6f) grid_highlight_pane_cp70_ParamLimits

0x5fea,	// (0x0002bb6f) grid_highlight_pane_cp70

0x09cb,	// (0x00026550) set_content_pane_g1

0xa6b5,	// (0x0003023a) status_small_volume_pane

0xc172,	// (0x00031cf7) status_small_volume_pane_g1

0xc17a,	// (0x00031cff) volume_small2_pane

0xc183,	// (0x00031d08) volume_small2_pane_g1

0xc18c,	// (0x00031d11) volume_small2_pane_g2

0xc195,	// (0x00031d1a) volume_small2_pane_g3

0xc19e,	// (0x00031d23) volume_small2_pane_g4

0xc1a7,	// (0x00031d2c) volume_small2_pane_g5

0xc1b0,	// (0x00031d35) volume_small2_pane_g6

0xc1b9,	// (0x00031d3e) volume_small2_pane_g7

0xc1c2,	// (0x00031d47) volume_small2_pane_g8

0xc1cb,	// (0x00031d50) volume_small2_pane_g9

0xc1d4,	// (0x00031d59) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x0003579b) volume_small2_pane_g

0x5848,	// (0x0002b3cd) fep_vkb_top_text_pane_g1_ParamLimits

0xd402,	// (0x00032f87) fep_vkb_top_text_pane_t1_ParamLimits

0x5b1f,	// (0x0002b6a4) popup_preview_fixed_window_g3_ParamLimits

0x5b1f,	// (0x0002b6a4) popup_preview_fixed_window_g3

0xaf5c,	// (0x00030ae1) popup_toolbar_trans_pane

0xbc41,	// (0x000317c6) aid_height_set_list_ParamLimits

0x4272,	// (0x00029df7) aid_size_parent_ParamLimits

0x1060,	// (0x00026be5) list_highlight_pane_cp2_ParamLimits

0x09cb,	// (0x00026550) set_content_pane_g1_ParamLimits

0xbdba,	// (0x0003193f) list_single_image_pane_ParamLimits

0xbdba,	// (0x0003193f) list_single_image_pane

0xd5a7,	// (0x0003312c) aid_size_cell_image_ParamLimits

0xd5a7,	// (0x0003312c) aid_size_cell_image

0xd5b4,	// (0x00033139) grid_single_image_pane_ParamLimits

0xd5b4,	// (0x00033139) grid_single_image_pane

0x5c90,	// (0x0002b815) list_single_image_pane_g1_ParamLimits

0x5c90,	// (0x0002b815) list_single_image_pane_g1

0x5c9c,	// (0x0002b821) list_single_image_pane_g2_ParamLimits

0x5c9c,	// (0x0002b821) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x000357b0) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x000357b0) list_single_image_pane_g

0x6011,	// (0x0002bb96) list_single_image_pane_t1_ParamLimits

0x6011,	// (0x0002bb96) list_single_image_pane_t1

0xd5c0,	// (0x00033145) cell_image_list_pane_ParamLimits

0xd5c0,	// (0x00033145) cell_image_list_pane

0xd5d4,	// (0x00033159) cell_image_list_pane_g1

0xd5dd,	// (0x00033162) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x000357b5) cell_image_list_pane_g

0xd5e6,	// (0x0003316b) aid_size_cell_tb_trans_pane

0xcc6f,	// (0x000327f4) bg_tb_trans_pane

0xd5f8,	// (0x0003317d) grid_tb_trans_pane

0x2ec3,	// (0x00028a48) bg_tb_trans_pane_g1

0x2ecb,	// (0x00028a50) bg_tb_trans_pane_g2

0x2ed3,	// (0x00028a58) bg_tb_trans_pane_g3

0x2edb,	// (0x00028a60) bg_tb_trans_pane_g4

0x2ee3,	// (0x00028a68) bg_tb_trans_pane_g5

0x2efb,	// (0x00028a80) bg_tb_trans_pane_g6

0x2f03,	// (0x00028a88) bg_tb_trans_pane_g7

0x2eeb,	// (0x00028a70) bg_tb_trans_pane_g8

0x2ef3,	// (0x00028a78) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x000357ba) bg_tb_trans_pane_g

0xd60c,	// (0x00033191) cell_toolbar_trans_pane_ParamLimits

0xd60c,	// (0x00033191) cell_toolbar_trans_pane

0x5490,	// (0x0002b015) cell_toolbar_trans_pane_g1

0xc0d1,	// (0x00031c56) list_form2_midp_pane_t1

0xc0df,	// (0x00031c64) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00035663) list_form2_midp_pane_t

0x5077,	// (0x0002abfc) scroll_pane_cp51_ParamLimits

0x5233,	// (0x0002adb8) form2_midp_wait_pane_g1

0x523c,	// (0x0002adc1) form2_midp_wait_pane_g2

0x5245,	// (0x0002adca) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00035678) form2_midp_wait_pane_g

0xc8bd,	// (0x00032442) list_highlight_pane_cp21_ParamLimits

0x528d,	// (0x0002ae12) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x529c,	// (0x0002ae21) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xedb2,	// (0x00034937) list_single_2graphic_im_pane_ParamLimits

0xedb2,	// (0x00034937) list_single_2graphic_im_pane

0xd632,	// (0x000331b7) list_single_2graphic_im_pane_g1_ParamLimits

0xd632,	// (0x000331b7) list_single_2graphic_im_pane_g1

0xd643,	// (0x000331c8) list_single_2graphic_im_pane_g2_ParamLimits

0xd643,	// (0x000331c8) list_single_2graphic_im_pane_g2

0xd64f,	// (0x000331d4) list_single_2graphic_im_pane_g3_ParamLimits

0xd64f,	// (0x000331d4) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x000357cd) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x000357cd) list_single_2graphic_im_pane_g

0xd663,	// (0x000331e8) list_single_2graphic_im_pane_t1_ParamLimits

0xd663,	// (0x000331e8) list_single_2graphic_im_pane_t1

0x5b2b,	// (0x0002b6b0) list_single_graphic_2heading_pane_fp_ParamLimits

0x5b2b,	// (0x0002b6b0) list_single_graphic_2heading_pane_fp

0xf16e,	// (0x00034cf3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x00034cf3) list_single_graphic_2heading_pane_fp_g1

0x5b41,	// (0x0002b6c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b41,	// (0x0002b6c6) list_single_graphic_2heading_pane_fp_g2

0xf137,	// (0x00034cbc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf137,	// (0x00034cbc) list_single_graphic_2heading_pane_fp_g3

0xf143,	// (0x00034cc8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf143,	// (0x00034cc8) list_single_graphic_2heading_pane_fp_g4

0x5b4d,	// (0x0002b6d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b4d,	// (0x0002b6d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000356fb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000356fb) list_single_graphic_2heading_pane_fp_g

0xf308,	// (0x00034e8d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf308,	// (0x00034e8d) list_single_graphic_2heading_pane_fp_t1

0xf1a6,	// (0x00034d2b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x00034d2b) list_single_graphic_2heading_pane_fp_t2

0xf31e,	// (0x00034ea3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf31e,	// (0x00034ea3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x000357d6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x000357d6) list_single_graphic_2heading_pane_fp_t

0x551c,	// (0x0002b0a1) fep_hwr_write_pane_g5_ParamLimits

0x551c,	// (0x0002b0a1) fep_hwr_write_pane_g5

0x5528,	// (0x0002b0ad) fep_hwr_write_pane_g6_ParamLimits

0x5528,	// (0x0002b0ad) fep_hwr_write_pane_g6

0xd4aa,	// (0x0003302f) eswt_shell_pane_ParamLimits

0x2f37,	// (0x00028abc) bg_popup_window_pane_cp18_ParamLimits

0x41ba,	// (0x00029d3f) heading_pane_cp70

0x5f0a,	// (0x0002ba8f) popup_eswt_tasktip_window_t1_ParamLimits

0xb079,	// (0x00030bfe) aid_touch_tab_arrow_left

0xb08f,	// (0x00030c14) aid_touch_tab_arrow_right

0x9b24,	// (0x0002f6a9) title_pane_g3_ParamLimits

0x9b24,	// (0x0002f6a9) title_pane_g3

0xcc37,	// (0x000327bc) set_value_pane_g1

0xaf5c,	// (0x00030ae1) popup_toolbar_trans_pane_ParamLimits

0xd5e6,	// (0x0003316b) aid_size_cell_tb_trans_pane_ParamLimits

0xcc6f,	// (0x000327f4) bg_tb_trans_pane_ParamLimits

0xd5f8,	// (0x0003317d) grid_tb_trans_pane_ParamLimits

0xc9e7,	// (0x0003256c) cont_note_pane_ParamLimits

0xc9e7,	// (0x0003256c) cont_note_pane

0xcb63,	// (0x000326e8) cont_snote2_single_text_pane_ParamLimits

0xcb63,	// (0x000326e8) cont_snote2_single_text_pane

0xcb63,	// (0x000326e8) cont_snote2_single_graphic_pane_ParamLimits

0xcb63,	// (0x000326e8) cont_snote2_single_graphic_pane

0x353d,	// (0x000290c2) cont_note_wait_pane_ParamLimits

0x353d,	// (0x000290c2) cont_note_wait_pane

0x353d,	// (0x000290c2) cont_note_image_pane_ParamLimits

0x353d,	// (0x000290c2) cont_note_image_pane

0x6107,	// (0x0002bc8c) popup_note2_window_g1_ParamLimits

0x6107,	// (0x0002bc8c) popup_note2_window_g1

0xd6a1,	// (0x00033226) popup_note2_window_t1_ParamLimits

0xd6a1,	// (0x00033226) popup_note2_window_t1

0xd6e6,	// (0x0003326b) popup_note2_window_t2_ParamLimits

0xd6e6,	// (0x0003326b) popup_note2_window_t2

0xd72b,	// (0x000332b0) popup_note2_window_t3_ParamLimits

0xd72b,	// (0x000332b0) popup_note2_window_t3

0x6207,	// (0x0002bd8c) popup_note2_window_t4_ParamLimits

0x6207,	// (0x0002bd8c) popup_note2_window_t4

0xca6b,	// (0x000325f0) popup_note2_window_t5_ParamLimits

0xca6b,	// (0x000325f0) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x000357e2) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x000357e2) popup_note2_window_t

0x6236,	// (0x0002bdbb) popup_note2_image_window_g1_ParamLimits

0x6236,	// (0x0002bdbb) popup_note2_image_window_g1

0xd770,	// (0x000332f5) popup_note2_image_window_g2_ParamLimits

0xd770,	// (0x000332f5) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x000357ed) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x000357ed) popup_note2_image_window_g

0x6254,	// (0x0002bdd9) popup_note2_image_window_t1_ParamLimits

0x6254,	// (0x0002bdd9) popup_note2_image_window_t1

0x626c,	// (0x0002bdf1) popup_note2_image_window_t2_ParamLimits

0x626c,	// (0x0002bdf1) popup_note2_image_window_t2

0x6284,	// (0x0002be09) popup_note2_image_window_t3_ParamLimits

0x6284,	// (0x0002be09) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x000357f2) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x000357f2) popup_note2_image_window_t

0x354b,	// (0x000290d0) popup_note2_wait_window_g1_ParamLimits

0x354b,	// (0x000290d0) popup_note2_wait_window_g1

0x3557,	// (0x000290dc) popup_note2_wait_window_g2_ParamLimits

0x3557,	// (0x000290dc) popup_note2_wait_window_g2

0x3563,	// (0x000290e8) popup_note2_wait_window_g3_ParamLimits

0x3563,	// (0x000290e8) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x000353b2) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x000353b2) popup_note2_wait_window_g

0x62a0,	// (0x0002be25) popup_note2_wait_window_t1_ParamLimits

0x62a0,	// (0x0002be25) popup_note2_wait_window_t1

0x62be,	// (0x0002be43) popup_note2_wait_window_t2_ParamLimits

0x62be,	// (0x0002be43) popup_note2_wait_window_t2

0x62dc,	// (0x0002be61) popup_note2_wait_window_t3_ParamLimits

0x62dc,	// (0x0002be61) popup_note2_wait_window_t3

0x62ee,	// (0x0002be73) popup_note2_wait_window_t4_ParamLimits

0x62ee,	// (0x0002be73) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x000357f9) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x000357f9) popup_note2_wait_window_t

0x6300,	// (0x0002be85) wait_bar2_pane_ParamLimits

0x6300,	// (0x0002be85) wait_bar2_pane

0x6318,	// (0x0002be9d) popup_snote2_single_text_window_g1_ParamLimits

0x6318,	// (0x0002be9d) popup_snote2_single_text_window_g1

0x6340,	// (0x0002bec5) popup_snote2_single_text_window_t1_ParamLimits

0x6340,	// (0x0002bec5) popup_snote2_single_text_window_t1

0x638c,	// (0x0002bf11) popup_snote2_single_text_window_t2_ParamLimits

0x638c,	// (0x0002bf11) popup_snote2_single_text_window_t2

0x63d8,	// (0x0002bf5d) popup_snote2_single_text_window_t3_ParamLimits

0x63d8,	// (0x0002bf5d) popup_snote2_single_text_window_t3

0x6419,	// (0x0002bf9e) popup_snote2_single_text_window_t4_ParamLimits

0x6419,	// (0x0002bf9e) popup_snote2_single_text_window_t4

0x644f,	// (0x0002bfd4) popup_snote2_single_text_window_t5_ParamLimits

0x644f,	// (0x0002bfd4) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x00035802) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x00035802) popup_snote2_single_text_window_t

0xd782,	// (0x00033307) popup_snote2_single_graphic_window_g1_ParamLimits

0xd782,	// (0x00033307) popup_snote2_single_graphic_window_g1

0x64a2,	// (0x0002c027) popup_snote2_single_graphic_window_g2_ParamLimits

0x64a2,	// (0x0002c027) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x0003580d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x0003580d) popup_snote2_single_graphic_window_g

0x64ca,	// (0x0002c04f) popup_snote2_single_graphic_window_t1_ParamLimits

0x64ca,	// (0x0002c04f) popup_snote2_single_graphic_window_t1

0x6516,	// (0x0002c09b) popup_snote2_single_graphic_window_t2_ParamLimits

0x6516,	// (0x0002c09b) popup_snote2_single_graphic_window_t2

0x63d8,	// (0x0002bf5d) popup_snote2_single_graphic_window_t3_ParamLimits

0x63d8,	// (0x0002bf5d) popup_snote2_single_graphic_window_t3

0x6419,	// (0x0002bf9e) popup_snote2_single_graphic_window_t4_ParamLimits

0x6419,	// (0x0002bf9e) popup_snote2_single_graphic_window_t4

0x644f,	// (0x0002bfd4) popup_snote2_single_graphic_window_t5_ParamLimits

0x644f,	// (0x0002bfd4) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x00035812) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x00035812) popup_snote2_single_graphic_window_t

0x4f34,	// (0x0002aab9) clock_nsta_pane_cp2_t1

0x4f34,	// (0x0002aab9) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00035639) clock_nsta_pane_cp2_t

0x9499,	// (0x0002f01e) form_field_data_wide_pane_g1_ParamLimits

0xcc7d,	// (0x00032802) form_field_data_wide_pane_g2_ParamLimits

0xcc7d,	// (0x00032802) form_field_data_wide_pane_g2

0xcc89,	// (0x0003280e) form_field_data_wide_pane_g3_ParamLimits

0xcc89,	// (0x0003280e) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x000351f1) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x000351f1) form_field_data_wide_pane_g

0xc002,	// (0x00031b87) grid_touch_3_pane_ParamLimits

0xc002,	// (0x00031b87) grid_touch_3_pane

0xd7aa,	// (0x0003332f) cell_touch_3_pane_ParamLimits

0xd7aa,	// (0x0003332f) cell_touch_3_pane

0x5490,	// (0x0002b015) cell_touch_3_pane_g1

0x5490,	// (0x0002b015) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x000356be) cell_touch_3_pane_g

0xca9d,	// (0x00032622) cont_query_data_pane

0xcaa5,	// (0x0003262a) cont_query_data_pane_cp1

0x6590,	// (0x0002c115) button_value_adjust_pane_cp7

0x6598,	// (0x0002c11d) query_popup_pane_cp3

0xd103,	// (0x00032c88) bg_popup_sub_pane_cp22_ParamLimits

0xa40d,	// (0x0002ff92) navi_navi_volume_pane_cp2

0xa41c,	// (0x0002ffa1) popup_side_volume_key_window_g2

0xa42b,	// (0x0002ffb0) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00035287) popup_side_volume_key_window_g

0xa43a,	// (0x0002ffbf) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0003528e) popup_side_volume_key_window_t

0xa4ff,	// (0x00030084) popup_side_volume_key_window_ParamLimits

0x91a8,	// (0x0002ed2d) list_double_graphic_pane_g4_ParamLimits

0x91a8,	// (0x0002ed2d) list_double_graphic_pane_g4

0x96fd,	// (0x0002f282) list_single_2heading_msg_pane_ParamLimits

0x96fd,	// (0x0002f282) list_single_2heading_msg_pane

0x9750,	// (0x0002f2d5) list_single_2heading_msg_pane_g1_ParamLimits

0x9750,	// (0x0002f2d5) list_single_2heading_msg_pane_g1

0x975c,	// (0x0002f2e1) list_single_2heading_msg_pane_g2_ParamLimits

0x975c,	// (0x0002f2e1) list_single_2heading_msg_pane_g2

0x976f,	// (0x0002f2f4) list_single_2heading_msg_pane_g3_ParamLimits

0x976f,	// (0x0002f2f4) list_single_2heading_msg_pane_g3

0xf33e,	// (0x00034ec3) list_single_2heading_msg_pane_g4_ParamLimits

0xf33e,	// (0x00034ec3) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x0003581d) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x0003581d) list_single_2heading_msg_pane_g

0xf356,	// (0x00034edb) list_single_2heading_msg_pane_t1_ParamLimits

0xf356,	// (0x00034edb) list_single_2heading_msg_pane_t1

0x977b,	// (0x0002f300) list_single_2heading_msg_pane_t2_ParamLimits

0x977b,	// (0x0002f300) list_single_2heading_msg_pane_t2

0x97e6,	// (0x0002f36b) list_single_2heading_msg_pane_t3_ParamLimits

0x97e6,	// (0x0002f36b) list_single_2heading_msg_pane_t3

0xf37e,	// (0x00034f03) list_single_2heading_msg_pane_t4_ParamLimits

0xf37e,	// (0x00034f03) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x00035826) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x00035826) list_single_2heading_msg_pane_t

0xc86b,	// (0x000323f0) title_pane_g4_ParamLimits

0xc86b,	// (0x000323f0) title_pane_g4

0x00fa,	// (0x00025c7f) title_pane_stacon_g3_ParamLimits

0x00fa,	// (0x00025c7f) title_pane_stacon_g3

0x60ca,	// (0x0002bc4f) list_single_2graphic_im_pane_g4_ParamLimits

0x60ca,	// (0x0002bc4f) list_single_2graphic_im_pane_g4

0xba32,	// (0x000315b7) popup_side_volume_key_window_cp

0x4792,	// (0x0002a317) main_idle_act2_pane_t1

0x1966,	// (0x000274eb) toolbar_button_pane_g10

0xa108,	// (0x0002fc8d) popup_toolbar_window_cp1

0x4f25,	// (0x0002aaaa) clock_nsta_pane_cp_t1

0x4f25,	// (0x0002aaaa) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00035634) clock_nsta_pane_cp_t

0xa40d,	// (0x0002ff92) navi_navi_volume_pane_cp2_ParamLimits

0x04af,	// (0x00026034) popup_side_volume_key_window_g1_ParamLimits

0xa41c,	// (0x0002ffa1) popup_side_volume_key_window_g2_ParamLimits

0xa42b,	// (0x0002ffb0) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00035287) popup_side_volume_key_window_g_ParamLimits

0x1e08,	// (0x0002798d) fep_hwr_aid_pane

0xd2b6,	// (0x00032e3b) bg_fep_hwr_top_pane_g4_ParamLimits

0x54ec,	// (0x0002b071) fep_hwr_top_pane_g1_ParamLimits

0x54fe,	// (0x0002b083) fep_hwr_top_pane_g2_ParamLimits

0x1ec1,	// (0x00027a46) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00035689) fep_hwr_top_pane_g_ParamLimits

0x1ed6,	// (0x00027a5b) fep_hwr_top_text_pane_ParamLimits

0x3d47,	// (0x000298cc) aid_touch_tab_arrow_arrow_2

0x3d50,	// (0x000298d5) aid_touch_tab_arrow_left_2

0x1e1c,	// (0x000279a1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e53,	// (0x000279d8) fep_hwr_prediction_pane

0x5657,	// (0x0002b1dc) fep_vkb_prediction_pane

0xd3e2,	// (0x00032f67) fep_vkb_side_pane_g3_ParamLimits

0xd3e2,	// (0x00032f67) fep_vkb_side_pane_g3

0x5700,	// (0x0002b285) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ba1,	// (0x0002b726) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5bae,	// (0x0002b733) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00035733) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x65bd,	// (0x0002c142) fep_hwr_prediction_pane_g1

0x2163,	// (0x00027ce8) fep_hwr_prediction_pane_g2

0x216b,	// (0x00027cf0) fep_hwr_prediction_pane_g3

0x2173,	// (0x00027cf8) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x0003582f) fep_hwr_prediction_pane_g

0x65bd,	// (0x0002c142) fep_vkb_prediction_pane_g1

0x65c7,	// (0x0002c14c) fep_vkb_prediction_pane_g2

0x65cf,	// (0x0002c154) fep_vkb_prediction_pane_g3

0x65d7,	// (0x0002c15c) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00035838) fep_vkb_prediction_pane_g

0xbbc3,	// (0x00031748) slider_set_pane_g3

0xbbd7,	// (0x0003175c) slider_set_pane_g4

0xbbef,	// (0x00031774) slider_set_pane_g5

0xbbc3,	// (0x00031748) slider_set_pane_g6

0xbc05,	// (0x0003178a) slider_set_pane_g7

0x43d3,	// (0x00029f58) slider_form_pane_g3

0x43dc,	// (0x00029f61) slider_form_pane_g4

0x43e4,	// (0x00029f69) slider_form_pane_g5

0x43d3,	// (0x00029f58) slider_form_pane_g6

0xbd8c,	// (0x00031911) slider_form_pane_g7

0x4a3d,	// (0x0002a5c2) slider_set_pane_vc_g3

0x4a46,	// (0x0002a5cb) slider_set_pane_vc_g4

0x4a4f,	// (0x0002a5d4) slider_set_pane_vc_g5

0x4a3d,	// (0x0002a5c2) slider_set_pane_vc_g6

0x4a58,	// (0x0002a5dd) slider_set_pane_vc_g7

0x4c0a,	// (0x0002a78f) slider_form_pane_vc_g1

0x4c13,	// (0x0002a798) slider_form_pane_vc_g2

0x4c1c,	// (0x0002a7a1) slider_form_pane_vc_g3

0x4c0a,	// (0x0002a78f) slider_form_pane_vc_g4

0x4c25,	// (0x0002a7aa) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00035606) slider_form_pane_vc_g

0xc84d,	// (0x000323d2) main_idle_act3_pane

0x65df,	// (0x0002c164) ai3_links_pane

0xd7f3,	// (0x00033378) popup_ai3_data_window_ParamLimits

0xd7f3,	// (0x00033378) popup_ai3_data_window

0xc84d,	// (0x000323d2) grid_ai3_links_pane

0xd80b,	// (0x00033390) cell_ai3_links_pane_ParamLimits

0xd80b,	// (0x00033390) cell_ai3_links_pane

0x6618,	// (0x0002c19d) bg_popup_sub_pane_cp11

0x6625,	// (0x0002c1aa) cell_ai3_links_pane_g1

0xc84d,	// (0x000323d2) bg_popup_sub_pane_cp12

0x664a,	// (0x0002c1cf) heading_ai3_data_pane

0x6652,	// (0x0002c1d7) list_ai3_gene_pane

0x665e,	// (0x0002c1e3) popup_ai3_data_window_g1

0x6666,	// (0x0002c1eb) heading_ai3_data_pane_g1

0x666e,	// (0x0002c1f3) heading_ai3_data_pane_t1

0xd825,	// (0x000333aa) list_double_ai3_gene_pane_ParamLimits

0xd825,	// (0x000333aa) list_double_ai3_gene_pane

0x6689,	// (0x0002c20e) list_single_ai3_gene_pane_ParamLimits

0x6689,	// (0x0002c20e) list_single_ai3_gene_pane

0x5455,	// (0x0002afda) list_highlight_pane_cp7_ParamLimits

0x5455,	// (0x0002afda) list_highlight_pane_cp7

0x6696,	// (0x0002c21b) list_single_a13_gene_pane_t1_ParamLimits

0x6696,	// (0x0002c21b) list_single_a13_gene_pane_t1

0x66ad,	// (0x0002c232) list_single_ai3_gene_pane_g1

0x66b6,	// (0x0002c23b) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x00035841) list_single_ai3_gene_pane_g

0x66be,	// (0x0002c243) list_double_ai3_gene_pane_g1_ParamLimits

0x66be,	// (0x0002c243) list_double_ai3_gene_pane_g1

0xd832,	// (0x000333b7) list_double_ai3_gene_pane_t1_ParamLimits

0xd832,	// (0x000333b7) list_double_ai3_gene_pane_t1

0x66e6,	// (0x0002c26b) list_double_ai3_gene_pane_t2_ParamLimits

0x66e6,	// (0x0002c26b) list_double_ai3_gene_pane_t2

0x66fb,	// (0x0002c280) list_double_ai3_gene_pane_t3_ParamLimits

0x66fb,	// (0x0002c280) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x00035846) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x00035846) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf334,	// (0x00034eb9) aid_size_min_col_2

0xd7dd,	// (0x00033362) aid_size_min_msg_ParamLimits

0xd7dd,	// (0x00033362) aid_size_min_msg

0xd3f6,	// (0x00032f7b) fep_vkb_top_text_pane_g2_ParamLimits

0xd3f6,	// (0x00032f7b) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x000356b9) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x000356b9) fep_vkb_top_text_pane_g

0xc84d,	// (0x000323d2) main_hc_apps_shell_pane

0x6718,	// (0x0002c29d) grid_hc_apps_pane_ParamLimits

0x6718,	// (0x0002c29d) grid_hc_apps_pane

0x6727,	// (0x0002c2ac) list_hc_apps_pane

0x672f,	// (0x0002c2b4) scroll_pane_cp37_ParamLimits

0x672f,	// (0x0002c2b4) scroll_pane_cp37

0xd84e,	// (0x000333d3) cell_hc_apps_pane_ParamLimits

0xd84e,	// (0x000333d3) cell_hc_apps_pane

0xd90c,	// (0x00033491) cell_hc_apps_pane_g1_ParamLimits

0xd90c,	// (0x00033491) cell_hc_apps_pane_g1

0x681a,	// (0x0002c39f) cell_hc_apps_pane_g2_ParamLimits

0x681a,	// (0x0002c39f) cell_hc_apps_pane_g2

0x6836,	// (0x0002c3bb) cell_hc_apps_pane_g3_ParamLimits

0x6836,	// (0x0002c3bb) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x0003584d) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x0003584d) cell_hc_apps_pane_g

0xd939,	// (0x000334be) cell_hc_apps_pane_t1_ParamLimits

0xd939,	// (0x000334be) cell_hc_apps_pane_t1

0xc9e7,	// (0x0003256c) grid_highlight_pane_cp10_ParamLimits

0xc9e7,	// (0x0003256c) grid_highlight_pane_cp10

0xd977,	// (0x000334fc) list_single_hc_apps_pane_ParamLimits

0xd977,	// (0x000334fc) list_single_hc_apps_pane

0xd9a7,	// (0x0003352c) list_single_hc_apps_pane_g1

0x9854,	// (0x0002f3d9) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x00035854) list_single_hc_apps_pane_g

0x986d,	// (0x0002f3f2) list_single_hc_apps_pane_g2_copy1

0x9889,	// (0x0002f40e) list_single_hc_apps_pane_t1

0xc8bd,	// (0x00032442) bg_set_opt_pane_cp_ParamLimits

0x9bf8,	// (0x0002f77d) setting_slider_pane_t1_ParamLimits

0x9c11,	// (0x0002f796) setting_slider_pane_t2_ParamLimits

0x9c2b,	// (0x0002f7b0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000350e3) setting_slider_pane_t_ParamLimits

0x9c43,	// (0x0002f7c8) slider_set_pane_ParamLimits

0x0ed2,	// (0x00026a57) control_pane_g5_ParamLimits

0x0ed2,	// (0x00026a57) control_pane_g5

0xbbb6,	// (0x0003173b) slider_set_pane_g1_ParamLimits

0x1c34,	// (0x000277b9) slider_set_pane_g2_ParamLimits

0xbbc3,	// (0x00031748) slider_set_pane_g3_ParamLimits

0xbbd7,	// (0x0003175c) slider_set_pane_g4_ParamLimits

0xbbef,	// (0x00031774) slider_set_pane_g5_ParamLimits

0xbbc3,	// (0x00031748) slider_set_pane_g6_ParamLimits

0xbc05,	// (0x0003178a) slider_set_pane_g7_ParamLimits

0xf949,	// (0x000354ce) slider_set_pane_g_ParamLimits

0x0976,	// (0x000264fb) navi_icon_text_pane_ParamLimits

0xb042,	// (0x00030bc7) aid_fill_nsta_2_ParamLimits

0xb079,	// (0x00030bfe) aid_touch_tab_arrow_left_ParamLimits

0xb08f,	// (0x00030c14) aid_touch_tab_arrow_right_ParamLimits

0xb12a,	// (0x00030caf) clock_nsta_pane_ParamLimits

0x3d29,	// (0x000298ae) navi_icon_pane_g1_ParamLimits

0x3d35,	// (0x000298ba) navi_text_pane_t1_ParamLimits

0x5035,	// (0x0002abba) navi_icon_text_pane_g1_ParamLimits

0x5041,	// (0x0002abc6) navi_icon_text_pane_t1_ParamLimits

0xd9a7,	// (0x0003352c) list_single_hc_apps_pane_g1_ParamLimits

0x9854,	// (0x0002f3d9) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x00035854) list_single_hc_apps_pane_g_ParamLimits

0x986d,	// (0x0002f3f2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9889,	// (0x0002f40e) list_single_hc_apps_pane_t1_ParamLimits

0x9a29,	// (0x0002f5ae) popup_toolbar2_fixed_window_ParamLimits

0x9a29,	// (0x0002f5ae) popup_toolbar2_fixed_window

0xaf52,	// (0x00030ad7) popup_toolbar2_float_window

0xc84d,	// (0x000323d2) bg_popup_sub_pane_cp27

0x6914,	// (0x0002c499) grid_toolbar2_float_pane

0xc84d,	// (0x000323d2) bg_popup_sub_pane_cp26

0x6914,	// (0x0002c499) grid_toolbar2_fixed_pane

0xd9c0,	// (0x00033545) cell_toolbar2_fixed_pane_ParamLimits

0xd9c0,	// (0x00033545) cell_toolbar2_fixed_pane

0xd9da,	// (0x0003355f) cell_toolbar2_fixed_pane_g1

0x2e43,	// (0x000289c8) toolbar2_fixed_button_pane

0x2ec3,	// (0x00028a48) toolbar2_fixed_button_pane_g1

0x2ecb,	// (0x00028a50) toolbar2_fixed_button_pane_g2

0x2ed3,	// (0x00028a58) toolbar2_fixed_button_pane_g3

0x2edb,	// (0x00028a60) toolbar2_fixed_button_pane_g4

0x2ee3,	// (0x00028a68) toolbar2_fixed_button_pane_g5

0x2eeb,	// (0x00028a70) toolbar2_fixed_button_pane_g6

0x2ef3,	// (0x00028a78) toolbar2_fixed_button_pane_g7

0x2efb,	// (0x00028a80) toolbar2_fixed_button_pane_g8

0x2f03,	// (0x00028a88) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x000353d0) toolbar2_fixed_button_pane_g

0x6935,	// (0x0002c4ba) cell_toolbar2_float_pane_ParamLimits

0x6935,	// (0x0002c4ba) cell_toolbar2_float_pane

0x6946,	// (0x0002c4cb) cell_toolbar2_float_pane_g1

0x2e43,	// (0x000289c8) toolbar2_fixed_button_pane_cp

0xd2de,	// (0x00032e63) fep_vkb_accented_list_pane_ParamLimits

0xd2de,	// (0x00032e63) fep_vkb_accented_list_pane

0x2024,	// (0x00027ba9) bg_popup_fep_shadow_pane_g9

0x0af6,	// (0x0002667b) bg_popup_fep_shadow_pane_cp3

0xcd75,	// (0x000328fa) list_accented_list_pane

0x694f,	// (0x0002c4d4) list_single_accented_list_pane_ParamLimits

0x694f,	// (0x0002c4d4) list_single_accented_list_pane

0x0af6,	// (0x0002667b) list_highlight_pane_cp10

0x6960,	// (0x0002c4e5) list_single_accented_list_pane_t1

0xae7c,	// (0x00030a01) popup_slider_window_ParamLimits

0xae7c,	// (0x00030a01) popup_slider_window

0x65a0,	// (0x0002c125) aid_indentation_list_msg

0xdacf,	// (0x00033654) bg_popup_window_pane_cp19

0x6a80,	// (0x0002c605) popup_slider_window_g1

0x6a9c,	// (0x0002c621) popup_slider_window_g2

0x6ab8,	// (0x0002c63d) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x00035859) popup_slider_window_g

0x6b14,	// (0x0002c699) popup_slider_window_t1

0x6b88,	// (0x0002c70d) small_volume_slider_vertical_pane

0x5490,	// (0x0002b015) small_volume_slider_vertical_pane_g1

0x5490,	// (0x0002b015) small_volume_slider_vertical_pane_g2

0x6ba4,	// (0x0002c729) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x0003586b) small_volume_slider_vertical_pane_g

0x9977,	// (0x0002f4fc) area_side_right_pane_ParamLimits

0x9977,	// (0x0002f4fc) area_side_right_pane

0xc1dd,	// (0x00031d62) aid_size_side_button_ParamLimits

0xc1dd,	// (0x00031d62) aid_size_side_button

0xc1f6,	// (0x00031d7b) grid_sctrl_middle_pane_ParamLimits

0xc1f6,	// (0x00031d7b) grid_sctrl_middle_pane

0x21ae,	// (0x00027d33) sctrl_sk_bottom_pane

0x21bf,	// (0x00027d44) sctrl_sk_top_pane

0x21d1,	// (0x00027d56) aid_touch_sctrl_top

0xc9e7,	// (0x0003256c) bg_sctrl_sk_pane_ParamLimits

0xc9e7,	// (0x0003256c) bg_sctrl_sk_pane

0x21de,	// (0x00027d63) sctrl_sk_top_pane_g1

0x21eb,	// (0x00027d70) sctrl_sk_top_pane_t1

0x21d1,	// (0x00027d56) aid_touch_sctrl_bottom

0xc9e7,	// (0x0003256c) bg_sctrl_sk_pane_cp_ParamLimits

0xc9e7,	// (0x0003256c) bg_sctrl_sk_pane_cp

0x2206,	// (0x00027d8b) sctrl_sk_bottom_pane_g1

0x21eb,	// (0x00027d70) sctrl_sk_bottom_pane_t1

0xc210,	// (0x00031d95) cell_sctrl_middle_pane_ParamLimits

0xc210,	// (0x00031d95) cell_sctrl_middle_pane

0xc221,	// (0x00031da6) aid_touch_sctrl_middle_ParamLimits

0xc221,	// (0x00031da6) aid_touch_sctrl_middle

0xc22e,	// (0x00031db3) bg_sctrl_middle_pane_ParamLimits

0xc22e,	// (0x00031db3) bg_sctrl_middle_pane

0x6c2c,	// (0x0002c7b1) cell_sctrl_middle_pane_g1_ParamLimits

0x6c2c,	// (0x0002c7b1) cell_sctrl_middle_pane_g1

0xc23c,	// (0x00031dc1) cell_sctrl_middle_pane_g2_ParamLimits

0xc23c,	// (0x00031dc1) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x00035877) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x00035877) cell_sctrl_middle_pane_g

0x2ec3,	// (0x00028a48) bg_sctrl_middle_pane_g1

0x2ecb,	// (0x00028a50) bg_sctrl_middle_pane_g2

0x2ed3,	// (0x00028a58) bg_sctrl_middle_pane_g3

0x2edb,	// (0x00028a60) bg_sctrl_middle_pane_g4

0x2ee3,	// (0x00028a68) bg_sctrl_middle_pane_g5

0x2eeb,	// (0x00028a70) bg_sctrl_middle_pane_g6

0x2ef3,	// (0x00028a78) bg_sctrl_middle_pane_g7

0x2efb,	// (0x00028a80) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x0003587c) bg_sctrl_middle_pane_g

0x2f03,	// (0x00028a88) bg_sctrl_middle_pane_g8_copy1

0x2ec3,	// (0x00028a48) bg_sctrl_sk_pane_g1

0x2ecb,	// (0x00028a50) bg_sctrl_sk_pane_g2

0x2ed3,	// (0x00028a58) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x000353d0) bg_sctrl_sk_pane_g

0xcbb1,	// (0x00032736) aid_size_touch_scroll_bar

0x2edb,	// (0x00028a60) bg_sctrl_sk_pane_g4

0x2ee3,	// (0x00028a68) bg_sctrl_sk_pane_g5

0x2eeb,	// (0x00028a70) bg_sctrl_sk_pane_g6

0x2ef3,	// (0x00028a78) bg_sctrl_sk_pane_g7

0x2efb,	// (0x00028a80) bg_sctrl_sk_pane_g8

0x2f03,	// (0x00028a88) bg_sctrl_sk_pane_g9

0x1102,	// (0x00026c87) popup_fep_china_hwr2_fs_candidate_window

0xa91c,	// (0x000304a1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa91c,	// (0x000304a1) popup_fep_china_hwr2_fs_control_window

0x5700,	// (0x0002b285) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00035872) sctrl_sk_top_pane_g

0xdb87,	// (0x0003370c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb87,	// (0x0003370c) aid_fep_china_hwr2_fs_cell

0xdb9b,	// (0x00033720) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb9b,	// (0x00033720) bg_popup_fep_shadow_pane_cp4

0xdbb2,	// (0x00033737) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbb2,	// (0x00033737) bg_popup_fep_shadow_pane_cp5

0xdbc4,	// (0x00033749) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdbc4,	// (0x00033749) popup_fep_china_hwr2_fs_control_bar_grid

0xdbd8,	// (0x0003375d) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c00,	// (0x0002c785) aid_fep_china_hwr2_fs_candi_cell

0xc84d,	// (0x000323d2) bg_popup_fep_shadow_pane_cp6

0x6c0a,	// (0x0002c78f) popup_fep_china_hwr2_fs_candidate_grid

0xdbe0,	// (0x00033765) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdbe0,	// (0x00033765) cell_fep_china_hwr2_fs_funtion_grid

0x5490,	// (0x0002b015) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c2c,	// (0x0002c7b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c2c,	// (0x0002c7b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c3a,	// (0x0002c7bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c3a,	// (0x0002c7bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x0003588d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x0003588d) cell_fep_china_hwr2_fs_funtion_grid_g

0xdbf8,	// (0x0003377d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdbf8,	// (0x0003377d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc0d,	// (0x00033792) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc0d,	// (0x00033792) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00035892) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00035892) cell_fep_china_hwr2_fs_funtion_grid_t

0x6c81,	// (0x0002c806) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6c89,	// (0x0002c80e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6c91,	// (0x0002c816) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00035897) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6c99,	// (0x0002c81e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6c99,	// (0x0002c81e) cell_fep_china_hwr2_fs_candidate_grid

0x6cb2,	// (0x0002c837) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6cba,	// (0x0002c83f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5490,	// (0x0002b015) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5490,	// (0x0002b015) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x000356be) cell_fep_china_hwr2_fs_candidate_grid_g

0x6cc2,	// (0x0002c847) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1701,	// (0x00027286) clock_nsta_pane_cp_24_ParamLimits

0x1701,	// (0x00027286) clock_nsta_pane_cp_24

0x177f,	// (0x00027304) indicator_nsta_pane_cp_24_ParamLimits

0x177f,	// (0x00027304) indicator_nsta_pane_cp_24

0x3ba5,	// (0x0002972a) heading_pane_g1

0x0001,

0xf8b0,	// (0x00035435) heading_pane_g

0x45db,	// (0x0002a160) grid_sct_catagory_button_pane

0x460b,	// (0x0002a190) scroll_pane_cp5_ParamLimits

0x5083,	// (0x0002ac08) button_value_adjust_pane_cp5_ParamLimits

0x5083,	// (0x0002ac08) button_value_adjust_pane_cp5

0x5162,	// (0x0002ace7) form2_midp_time_pane_ParamLimits

0x6cd0,	// (0x0002c855) cell_sct_catagory_button_pane_ParamLimits

0x6cd0,	// (0x0002c855) cell_sct_catagory_button_pane

0x5455,	// (0x0002afda) bg_button_pane_cp01_ParamLimits

0x5455,	// (0x0002afda) bg_button_pane_cp01

0x5490,	// (0x0002b015) cell_sct_catagory_button_pane_g1

0xaef5,	// (0x00030a7a) popup_tb_extension_window

0xdc29,	// (0x000337ae) aid_size_cell_ext_ParamLimits

0xdc29,	// (0x000337ae) aid_size_cell_ext

0xcb63,	// (0x000326e8) bg_tb_trans_pane_cp1_ParamLimits

0xcb63,	// (0x000326e8) bg_tb_trans_pane_cp1

0xdc4f,	// (0x000337d4) grid_tb_ext_pane_ParamLimits

0xdc4f,	// (0x000337d4) grid_tb_ext_pane

0xdc8e,	// (0x00033813) cell_tb_ext_pane_ParamLimits

0xdc8e,	// (0x00033813) cell_tb_ext_pane

0xdcb6,	// (0x0003383b) cell_tb_ext_pane_g1_ParamLimits

0xdcb6,	// (0x0003383b) cell_tb_ext_pane_g1

0x6d66,	// (0x0002c8eb) cell_tb_ext_pane_t1

0xc9e7,	// (0x0003256c) list_highlight_pane_cp11_ParamLimits

0xc9e7,	// (0x0003256c) list_highlight_pane_cp11

0x9a3e,	// (0x0002f5c3) popup_uni_indicator_window_ParamLimits

0x9a3e,	// (0x0002f5c3) popup_uni_indicator_window

0xcc6f,	// (0x000327f4) bg_popup_sub_pane_cp14

0xdcd3,	// (0x00033858) list_uniindi_pane

0xdcdf,	// (0x00033864) uniindi_top_pane

0xc9e7,	// (0x0003256c) bg_uniindi_top_pane

0xdcfe,	// (0x00033883) uniindi_top_pane_g1

0xdd14,	// (0x00033899) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x0003589e) uniindi_top_pane_g

0xdd31,	// (0x000338b6) uniindi_top_pane_t1

0x6e17,	// (0x0002c99c) list_single_uniindi_pane_ParamLimits

0x6e17,	// (0x0002c99c) list_single_uniindi_pane

0x5490,	// (0x0002b015) bg_uniindi_top_pane_g1

0x6e29,	// (0x0002c9ae) list_single_uniindi_pane_g1

0x6e3c,	// (0x0002c9c1) list_single_uniindi_pane_t1

0xc84d,	// (0x000323d2) control_bg_pane

0x6e61,	// (0x0002c9e6) bg_sctrl_sk_pane_cp1

0x6e6a,	// (0x0002c9ef) bg_sctrl_sk_pane_cp2

0x6e73,	// (0x0002c9f8) control_bg_pane_g1

0x6e7c,	// (0x0002ca01) control_bg_pane_g2

0x0001,

0xfd22,	// (0x000358a7) control_bg_pane_g

0x4eda,	// (0x0002aa5f) cell_indicator_nsta_pane_g1_ParamLimits

0xc02f,	// (0x00031bb4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00035622) cell_indicator_nsta_pane_g_ParamLimits

0xf124,	// (0x00034ca9) form2_midp_time_pane_t1_ParamLimits

0x1dfa,	// (0x0002797f) main_idle_act4_pane_ParamLimits

0x1dfa,	// (0x0002797f) main_idle_act4_pane

0xaef5,	// (0x00030a7a) popup_tb_extension_window_ParamLimits

0xdc74,	// (0x000337f9) tb_ext_find_pane_ParamLimits

0xdc74,	// (0x000337f9) tb_ext_find_pane

0x6e85,	// (0x0002ca0a) ai_gene_pane_1_cp1

0x0c41,	// (0x000267c6) ai_gene_pane_2_cp1

0xdd5b,	// (0x000338e0) list_single_idle_plugin_calendar_pane

0x6e96,	// (0x0002ca1b) list_single_idle_plugin_notification_pane

0x6e9f,	// (0x0002ca24) list_single_idle_plugin_player_pane

0xdd64,	// (0x000338e9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd64,	// (0x000338e9) list_single_idle_plugin_shortcut_pane

0xdd8c,	// (0x00033911) main_idle_act4_pane_t1

0xdda3,	// (0x00033928) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x000358ac) main_idle_act4_pane_t

0xddba,	// (0x0003393f) middle_sk_idle_act4_pane_ParamLimits

0xddba,	// (0x0003393f) middle_sk_idle_act4_pane

0xddd6,	// (0x0003395b) popup_clock_digital_analogue_window_cp2

0xde02,	// (0x00033987) shortcut_wheel_idle_act4_pane_ParamLimits

0xde02,	// (0x00033987) shortcut_wheel_idle_act4_pane

0x5490,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g1

0x5490,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g2

0x5490,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g3

0x5490,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g4

0x5490,	// (0x0002b015) shortcut_wheel_idle_act4_pane_g5

0x6f32,	// (0x0002cab7) shortcut_wheel_idle_act4_pane_g6

0x6f3a,	// (0x0002cabf) shortcut_wheel_idle_act4_pane_g7

0x6f42,	// (0x0002cac7) shortcut_wheel_idle_act4_pane_g8

0x6f4a,	// (0x0002cacf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x000358b1) shortcut_wheel_idle_act4_pane_g

0xd2b6,	// (0x00032e3b) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2b6,	// (0x00032e3b) middle_sk_idle_act4_pane_g1

0xde7f,	// (0x00033a04) middle_sk_idle_act4_pane_g2_ParamLimits

0xde7f,	// (0x00033a04) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x000358d4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x000358d4) middle_sk_idle_act4_pane_g

0xde97,	// (0x00033a1c) middle_sk_idle_act4_pane_t1_ParamLimits

0xde97,	// (0x00033a1c) middle_sk_idle_act4_pane_t1

0xdec6,	// (0x00033a4b) grid_ai_shortcut_pane_ParamLimits

0xdec6,	// (0x00033a4b) grid_ai_shortcut_pane

0xdee3,	// (0x00033a68) list_highlight_pane_cp16_ParamLimits

0xdee3,	// (0x00033a68) list_highlight_pane_cp16

0xdef0,	// (0x00033a75) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdef0,	// (0x00033a75) list_single_idle_plugin_shortcut_pane_g1

0xdefc,	// (0x00033a81) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdefc,	// (0x00033a81) list_single_idle_plugin_shortcut_pane_g2

0xdf18,	// (0x00033a9d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdf18,	// (0x00033a9d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x000358d9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x000358d9) list_single_idle_plugin_shortcut_pane_g

0xdf2d,	// (0x00033ab2) cell_ai_shortcut_pane_ParamLimits

0xdf2d,	// (0x00033ab2) cell_ai_shortcut_pane

0xdf43,	// (0x00033ac8) cell_ai_shortcut_pane_g1_ParamLimits

0xdf43,	// (0x00033ac8) cell_ai_shortcut_pane_g1

0x6e85,	// (0x0002ca0a) ai_gene_pane_1_cp2

0x707a,	// (0x0002cbff) ai_gene_pane_2_cp2

0x7082,	// (0x0002cc07) list_highlight_pane_cp15

0xdf65,	// (0x00033aea) list_single_idle_plugin_calendar_pane_g1

0x7082,	// (0x0002cc07) list_highlight_pane_cp17

0x7093,	// (0x0002cc18) list_single_idle_plugin_calendar_pane_g1_copy1

0x709b,	// (0x0002cc20) list_single_idle_plugin_player_pane_g1

0x4834,	// (0x0002a3b9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x000358e0) list_single_idle_plugin_player_pane_g

0x70a3,	// (0x0002cc28) list_single_idle_plugin_player_pane_t1

0x70b1,	// (0x0002cc36) list_single_idle_plugin_player_pane_t2

0x70bf,	// (0x0002cc44) list_single_idle_plugin_player_pane_t3

0x70cd,	// (0x0002cc52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x000358e5) list_single_idle_plugin_player_pane_t

0x70db,	// (0x0002cc60) wait_bar_pane_cp15

0x70e3,	// (0x0002cc68) grid_ai_notification_pane

0x4834,	// (0x0002a3b9) list_single_idle_plugin_notification_pane_g1

0xdf6d,	// (0x00033af2) cell_ai_notification_pane_ParamLimits

0xdf6d,	// (0x00033af2) cell_ai_notification_pane

0x70f9,	// (0x0002cc7e) cell_ai_notification_pane_g1

0x7101,	// (0x0002cc86) cell_ai_notification_pane_t1

0xdf7a,	// (0x00033aff) tb_ext_find_button_pane

0xdf82,	// (0x00033b07) tb_ext_find_pane_g1

0xdf8a,	// (0x00033b0f) tb_ext_find_pane_t1

0xd0a2,	// (0x00032c27) tb_ext_find_button_pane_g1

0xdf98,	// (0x00033b1d) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x000358ee) tb_ext_find_button_pane_g

0xdd8c,	// (0x00033911) main_idle_act4_pane_t1_ParamLimits

0xdda3,	// (0x00033928) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x000358ac) main_idle_act4_pane_t_ParamLimits

0xddd6,	// (0x0003395b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddee,	// (0x00033973) sat_plugin_idle_act4_pane_ParamLimits

0xddee,	// (0x00033973) sat_plugin_idle_act4_pane

0xdfa1,	// (0x00033b26) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfa1,	// (0x00033b26) sat_plugin_idle_act4_pane_t1

0xdfb9,	// (0x00033b3e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfb9,	// (0x00033b3e) sat_plugin_idle_act4_pane_t2

0xdfd1,	// (0x00033b56) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfd1,	// (0x00033b56) sat_plugin_idle_act4_pane_t3

0xdfe9,	// (0x00033b6e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfe9,	// (0x00033b6e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x000358f3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x000358f3) sat_plugin_idle_act4_pane_t

0x99b9,	// (0x0002f53e) popup_battery_window_ParamLimits

0x99b9,	// (0x0002f53e) popup_battery_window

0xc9e7,	// (0x0003256c) bg_popup_sub_pane_cp25_ParamLimits

0xc9e7,	// (0x0003256c) bg_popup_sub_pane_cp25

0x7182,	// (0x0002cd07) popup_battery_window_g1_ParamLimits

0x7182,	// (0x0002cd07) popup_battery_window_g1

0x718e,	// (0x0002cd13) popup_battery_window_t1_ParamLimits

0x718e,	// (0x0002cd13) popup_battery_window_t1

0x71a0,	// (0x0002cd25) popup_battery_window_t2_ParamLimits

0x71a0,	// (0x0002cd25) popup_battery_window_t2

0x0001,

0xfd77,	// (0x000358fc) popup_battery_window_t_ParamLimits

0xfd77,	// (0x000358fc) popup_battery_window_t

0xa55e,	// (0x000300e3) midp_canvas_pane_ParamLimits

0xa5d0,	// (0x00030155) midp_keypad_pane_ParamLimits

0xa5d0,	// (0x00030155) midp_keypad_pane

0x1060,	// (0x00026be5) main_midp_pane_ParamLimits

0xc03c,	// (0x00031bc1) signal_pane_g2_cp_ParamLimits

0xe001,	// (0x00033b86) aid_size_cell_midp_keypad_ParamLimits

0xe001,	// (0x00033b86) aid_size_cell_midp_keypad

0xe01f,	// (0x00033ba4) midp_keyp_game_grid_pane_ParamLimits

0xe01f,	// (0x00033ba4) midp_keyp_game_grid_pane

0xe046,	// (0x00033bcb) midp_keyp_rocker_pane_ParamLimits

0xe046,	// (0x00033bcb) midp_keyp_rocker_pane

0xe097,	// (0x00033c1c) midp_keyp_sk_left_pane_ParamLimits

0xe097,	// (0x00033c1c) midp_keyp_sk_left_pane

0xe0eb,	// (0x00033c70) midp_keyp_sk_right_pane_ParamLimits

0xe0eb,	// (0x00033c70) midp_keyp_sk_right_pane

0xc84d,	// (0x000323d2) bg_button_pane_cp03

0xe13f,	// (0x00033cc4) midp_keyp_sk_left_pane_g1

0xc84d,	// (0x000323d2) bg_button_pane_cp04

0xe13f,	// (0x00033cc4) midp_keyp_sk_right_pane_g1

0x5490,	// (0x0002b015) midp_keyp_rocker_pane_g1

0xe148,	// (0x00033ccd) keyp_game_cell_pane_ParamLimits

0xe148,	// (0x00033ccd) keyp_game_cell_pane

0xc84d,	// (0x000323d2) bg_button_pane_cp02

0xe16c,	// (0x00033cf1) keyp_game_cell_pane_g1

0x99d9,	// (0x0002f55e) popup_fep_vkb2_window_ParamLimits

0x99d9,	// (0x0002f55e) popup_fep_vkb2_window

0xc248,	// (0x00031dcd) aid_size_cell_vkb2_ParamLimits

0xc248,	// (0x00031dcd) aid_size_cell_vkb2

0xc286,	// (0x00031e0b) popup_fep_vkb2_window_g1_ParamLimits

0xc286,	// (0x00031e0b) popup_fep_vkb2_window_g1

0xc2d6,	// (0x00031e5b) vkb2_area_bottom_pane_ParamLimits

0xc2d6,	// (0x00031e5b) vkb2_area_bottom_pane

0xc32a,	// (0x00031eaf) vkb2_area_keypad_pane_ParamLimits

0xc32a,	// (0x00031eaf) vkb2_area_keypad_pane

0xc372,	// (0x00031ef7) vkb2_area_top_pane_ParamLimits

0xc372,	// (0x00031ef7) vkb2_area_top_pane

0xc3f8,	// (0x00031f7d) vkb2_top_entry_pane_ParamLimits

0xc3f8,	// (0x00031f7d) vkb2_top_entry_pane

0xc425,	// (0x00031faa) vkb2_top_grid_left_pane_ParamLimits

0xc425,	// (0x00031faa) vkb2_top_grid_left_pane

0xc445,	// (0x00031fca) vkb2_top_grid_right_pane_ParamLimits

0xc445,	// (0x00031fca) vkb2_top_grid_right_pane

0x2464,	// (0x00027fe9) vkb2_cell_keypad_pane_ParamLimits

0x2464,	// (0x00027fe9) vkb2_cell_keypad_pane

0xc48b,	// (0x00032010) vkb2_area_bottom_grid_pane_ParamLimits

0xc48b,	// (0x00032010) vkb2_area_bottom_grid_pane

0xc4b5,	// (0x0003203a) vkb2_area_bottom_pane_g1_ParamLimits

0xc4b5,	// (0x0003203a) vkb2_area_bottom_pane_g1

0xc4db,	// (0x00032060) vkb2_area_bottom_pane_g2_ParamLimits

0xc4db,	// (0x00032060) vkb2_area_bottom_pane_g2

0xc50c,	// (0x00032091) vkb2_area_bottom_pane_g3_ParamLimits

0xc50c,	// (0x00032091) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x00035901) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x00035901) vkb2_area_bottom_pane_g

0x260e,	// (0x00028193) vkb2_top_cell_left_pane_ParamLimits

0x260e,	// (0x00028193) vkb2_top_cell_left_pane

0xe175,	// (0x00033cfa) vkb2_top_entry_pane_g1_ParamLimits

0xe175,	// (0x00033cfa) vkb2_top_entry_pane_g1

0xe183,	// (0x00033d08) vkb2_top_entry_pane_t1_ParamLimits

0xe183,	// (0x00033d08) vkb2_top_entry_pane_t1

0x7351,	// (0x0002ced6) vkb2_top_entry_pane_t2_ParamLimits

0x7351,	// (0x0002ced6) vkb2_top_entry_pane_t2

0x7383,	// (0x0002cf08) vkb2_top_entry_pane_t3_ParamLimits

0x7383,	// (0x0002cf08) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x00035908) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x00035908) vkb2_top_entry_pane_t

0xc576,	// (0x000320fb) vkb2_top_grid_right_pane_g1_ParamLimits

0xc576,	// (0x000320fb) vkb2_top_grid_right_pane_g1

0x2671,	// (0x000281f6) vkb2_top_grid_right_pane_g2_ParamLimits

0x2671,	// (0x000281f6) vkb2_top_grid_right_pane_g2

0x2689,	// (0x0002820e) vkb2_top_grid_right_pane_g3_ParamLimits

0x2689,	// (0x0002820e) vkb2_top_grid_right_pane_g3

0xc58c,	// (0x00032111) vkb2_top_grid_right_pane_g4_ParamLimits

0xc58c,	// (0x00032111) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x0003590f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x0003590f) vkb2_top_grid_right_pane_g

0x26b7,	// (0x0002823c) vkb2_top_cell_left_pane_g1

0x26ce,	// (0x00028253) vkb2_cell_keypad_pane_g1_ParamLimits

0x26ce,	// (0x00028253) vkb2_cell_keypad_pane_g1

0x73a7,	// (0x0002cf2c) vkb2_cell_keypad_pane_t1_ParamLimits

0x73a7,	// (0x0002cf2c) vkb2_cell_keypad_pane_t1

0x26dc,	// (0x00028261) vkb2_cell_bottom_grid_pane_ParamLimits

0x26dc,	// (0x00028261) vkb2_cell_bottom_grid_pane

0x2715,	// (0x0002829a) vkb2_cell_bottom_grid_pane_g1

0xde23,	// (0x000339a8) aid_call2_pane_cp02

0xde2b,	// (0x000339b0) aid_call_pane_cp02

0xde33,	// (0x000339b8) clock_digital_number_pane_cp10

0xde3b,	// (0x000339c0) clock_digital_number_pane_cp11

0xde43,	// (0x000339c8) clock_digital_number_pane_cp12

0xde4b,	// (0x000339d0) clock_digital_number_pane_cp13

0xde53,	// (0x000339d8) clock_digital_separator_pane_cp10

0xd0a2,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g1

0xd0a2,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g2

0xde5b,	// (0x000339e0) popup_clock_digital_analogue_window_cp2_g3

0xd0a2,	// (0x00032c27) popup_clock_digital_analogue_window_cp2_g4

0xde5b,	// (0x000339e0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x000358c4) popup_clock_digital_analogue_window_cp2_g

0xde63,	// (0x000339e8) popup_clock_digital_analogue_window_cp2_t1

0xde71,	// (0x000339f6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x000358cf) popup_clock_digital_analogue_window_cp2_t

0x5490,	// (0x0002b015) clock_digital_number_pane_cp10_g1

0x5490,	// (0x0002b015) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x000356be) clock_digital_number_pane_cp10_g

0x5490,	// (0x0002b015) clock_digital_separator_pane_cp10_g1

0x5490,	// (0x0002b015) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x000356be) clock_digital_separator_pane_cp10_g

0xdd20,	// (0x000338a5) uniindi_top_pane_g3

0x6de0,	// (0x0002c965) uniindi_top_pane_g4

0x24ef,	// (0x00028074) vkb2_row_keypad_pane_ParamLimits

0x24ef,	// (0x00028074) vkb2_row_keypad_pane

0x2731,	// (0x000282b6) vkb2_cell_t_keypad_pane_ParamLimits

0x2731,	// (0x000282b6) vkb2_cell_t_keypad_pane

0x2741,	// (0x000282c6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2741,	// (0x000282c6) vkb2_cell_t_keypad_pane_cp08

0x2754,	// (0x000282d9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2754,	// (0x000282d9) vkb2_cell_t_keypad_pane_cp09

0x2768,	// (0x000282ed) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2768,	// (0x000282ed) vkb2_cell_t_keypad_pane_cp01

0x2779,	// (0x000282fe) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2779,	// (0x000282fe) vkb2_cell_t_keypad_pane_cp02

0x278a,	// (0x0002830f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x278a,	// (0x0002830f) vkb2_cell_t_keypad_pane_cp03

0x279b,	// (0x00028320) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x279b,	// (0x00028320) vkb2_cell_t_keypad_pane_cp04

0x27ac,	// (0x00028331) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27ac,	// (0x00028331) vkb2_cell_t_keypad_pane_cp05

0x27bd,	// (0x00028342) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x27bd,	// (0x00028342) vkb2_cell_t_keypad_pane_cp06

0x27ce,	// (0x00028353) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27ce,	// (0x00028353) vkb2_cell_t_keypad_pane_cp07

0x27df,	// (0x00028364) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27df,	// (0x00028364) vkb2_cell_t_keypad_pane_cp10

0x5700,	// (0x0002b285) vkb2_cell_t_keypad_pane_g1

0x73be,	// (0x0002cf43) vkb2_cell_t_keypad_pane_t1

0xc84d,	// (0x000323d2) popup_grid_graphic2_window

0xe1bc,	// (0x00033d41) aid_size_cell_graphic2_ParamLimits

0xe1bc,	// (0x00033d41) aid_size_cell_graphic2

0xe1fa,	// (0x00033d7f) bg_popup_window_pane_cp21_ParamLimits

0xe1fa,	// (0x00033d7f) bg_popup_window_pane_cp21

0xe208,	// (0x00033d8d) graphic2_pages_pane_ParamLimits

0xe208,	// (0x00033d8d) graphic2_pages_pane

0xe25e,	// (0x00033de3) grid_graphic2_control_pane_ParamLimits

0xe25e,	// (0x00033de3) grid_graphic2_control_pane

0xe2a6,	// (0x00033e2b) grid_graphic2_pane_ParamLimits

0xe2a6,	// (0x00033e2b) grid_graphic2_pane

0xe32d,	// (0x00033eb2) cell_graphic2_pane

0xc84d,	// (0x000323d2) main_comp_mode_pane

0x6652,	// (0x0002c1d7) list_ai3_gene_pane_ParamLimits

0xdacf,	// (0x00033654) bg_popup_window_pane_cp19_ParamLimits

0x6a22,	// (0x0002c5a7) bg_touch_area_indi_pane_ParamLimits

0x6a22,	// (0x0002c5a7) bg_touch_area_indi_pane

0x6a38,	// (0x0002c5bd) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a38,	// (0x0002c5bd) bg_touch_area_indi_pane_cp01

0x6a4e,	// (0x0002c5d3) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a4e,	// (0x0002c5d3) bg_touch_area_indi_pane_cp02

0x6a66,	// (0x0002c5eb) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a66,	// (0x0002c5eb) bg_touch_area_indi_pane_cp03

0x6a80,	// (0x0002c605) popup_slider_window_g1_ParamLimits

0x6a9c,	// (0x0002c621) popup_slider_window_g2_ParamLimits

0x6ab8,	// (0x0002c63d) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x00035859) popup_slider_window_g_ParamLimits

0x6b14,	// (0x0002c699) popup_slider_window_t1_ParamLimits

0x6b88,	// (0x0002c70d) small_volume_slider_vertical_pane_ParamLimits

0xe32d,	// (0x00033eb2) cell_graphic2_pane_ParamLimits

0xe388,	// (0x00033f0d) bg_button_pane_cp10_ParamLimits

0xe388,	// (0x00033f0d) bg_button_pane_cp10

0xe39b,	// (0x00033f20) bg_button_pane_cp11_ParamLimits

0xe39b,	// (0x00033f20) bg_button_pane_cp11

0xe3ae,	// (0x00033f33) graphic2_pages_pane_g1_ParamLimits

0xe3ae,	// (0x00033f33) graphic2_pages_pane_g1

0xe3c9,	// (0x00033f4e) graphic2_pages_pane_g2_ParamLimits

0xe3c9,	// (0x00033f4e) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x0003591d) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x0003591d) graphic2_pages_pane_g

0xe3e1,	// (0x00033f66) graphic2_pages_pane_t1_ParamLimits

0xe3e1,	// (0x00033f66) graphic2_pages_pane_t1

0xe3f9,	// (0x00033f7e) cell_graphic2_control_pane_ParamLimits

0xe3f9,	// (0x00033f7e) cell_graphic2_control_pane

0xe42b,	// (0x00033fb0) cell_graphic2_pane_g1_ParamLimits

0xe42b,	// (0x00033fb0) cell_graphic2_pane_g1

0xd2c4,	// (0x00032e49) cell_graphic2_pane_g2_ParamLimits

0xd2c4,	// (0x00032e49) cell_graphic2_pane_g2

0xe438,	// (0x00033fbd) cell_graphic2_pane_g3_ParamLimits

0xe438,	// (0x00033fbd) cell_graphic2_pane_g3

0xd2d1,	// (0x00032e56) cell_graphic2_pane_g4_ParamLimits

0xd2d1,	// (0x00032e56) cell_graphic2_pane_g4

0xe445,	// (0x00033fca) cell_graphic2_pane_g5_ParamLimits

0xe445,	// (0x00033fca) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00035922) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00035922) cell_graphic2_pane_g

0xe465,	// (0x00033fea) cell_graphic2_pane_t1_ParamLimits

0xe465,	// (0x00033fea) cell_graphic2_pane_t1

0x3b99,	// (0x0002971e) grid_highlight_pane_cp11_ParamLimits

0x3b99,	// (0x0002971e) grid_highlight_pane_cp11

0xc9e7,	// (0x0003256c) bg_button_pane_cp05

0xe4b1,	// (0x00034036) cell_graphic2_control_pane_g1

0x5490,	// (0x0002b015) bg_touch_area_indi_pane_g1

0x769a,	// (0x0002d21f) aid_cmod_rocker_key_size

0x76a4,	// (0x0002d229) aid_cmode_itu_key_size

0x76ae,	// (0x0002d233) main_cmode_video_pane

0x76b8,	// (0x0002d23d) main_comp_mode_itu_pane

0x76c4,	// (0x0002d249) main_comp_mode_rocker_pane

0x76d0,	// (0x0002d255) cell_cmode_rocker_pane_ParamLimits

0x76d0,	// (0x0002d255) cell_cmode_rocker_pane

0x76e2,	// (0x0002d267) cell_cmode_itu_pane_ParamLimits

0x76e2,	// (0x0002d267) cell_cmode_itu_pane

0xcc6f,	// (0x000327f4) bg_button_pane_cp06_ParamLimits

0xcc6f,	// (0x000327f4) bg_button_pane_cp06

0x5700,	// (0x0002b285) cell_cmode_rocker_pane_g1_ParamLimits

0x5700,	// (0x0002b285) cell_cmode_rocker_pane_g1

0x6c2c,	// (0x0002c7b1) cell_cmode_rocker_pane_g2_ParamLimits

0x6c2c,	// (0x0002c7b1) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00035932) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00035932) cell_cmode_rocker_pane_g

0xc84d,	// (0x000323d2) bg_button_pane_cp07

0x76f7,	// (0x0002d27c) cell_cmode_itu_pane_g1

0x7700,	// (0x0002d285) cell_cmode_itu_pane_t1

0x770e,	// (0x0002d293) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x00035937) cell_cmode_itu_pane_t

0x6e51,	// (0x0002c9d6) aid_touch_ctrl_left

0x6e59,	// (0x0002c9de) aid_touch_ctrl_right

0xc84d,	// (0x000323d2) compa_mode_pane

0xe4d7,	// (0x0003405c) aid_cmod_rocker_key_size_cp

0xe4e1,	// (0x00034066) aid_cmode_itu_key_size_cp

0x7730,	// (0x0002d2b5) compa_mode_pane_g1

0x7738,	// (0x0002d2bd) compa_mode_pane_g2

0x7740,	// (0x0002d2c5) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x0003593c) compa_mode_pane_g

0xe4eb,	// (0x00034070) main_comp_mode_itu_pane_cp

0xe4f3,	// (0x00034078) main_comp_mode_rocker_pane_cp

0xe4fb,	// (0x00034080) cell_cmode_itu_pane_cp_ParamLimits

0xe4fb,	// (0x00034080) cell_cmode_itu_pane_cp

0xe510,	// (0x00034095) cell_cmode_rocker_pane_cp_ParamLimits

0xe510,	// (0x00034095) cell_cmode_rocker_pane_cp

0xcc6f,	// (0x000327f4) bg_button_pane_cp06_cp_ParamLimits

0xcc6f,	// (0x000327f4) bg_button_pane_cp06_cp

0x5700,	// (0x0002b285) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5700,	// (0x0002b285) cell_cmode_rocker_pane_g1_cp

0x5490,	// (0x0002b015) cell_cmode_rocker_pane_g2_cp

0xc84d,	// (0x000323d2) bg_button_pane_cp07_cp

0xe522,	// (0x000340a7) cell_cmode_itu_pane_g1_cp

0xe52b,	// (0x000340b0) cell_cmode_itu_pane_t1_cp

0xe52b,	// (0x000340b0) cell_cmode_itu_pane_t2_cp

0xbd82,	// (0x00031907) settings_code_pane_cp2

0xc8bd,	// (0x00032442) bg_popup_window_pane_cp3_ParamLimits

0xcb00,	// (0x00032685) heading_pane_cp3_ParamLimits

0xcb0c,	// (0x00032691) listscroll_popup_graphic_pane_ParamLimits

0x1e08,	// (0x0002798d) fep_hwr_aid_pane_ParamLimits

0x21d1,	// (0x00027d56) aid_touch_sctrl_top_ParamLimits

0x21de,	// (0x00027d63) sctrl_sk_top_pane_g1_ParamLimits

0x5700,	// (0x0002b285) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00035872) sctrl_sk_top_pane_g_ParamLimits

0x21eb,	// (0x00027d70) sctrl_sk_top_pane_t1_ParamLimits

0x21d1,	// (0x00027d56) aid_touch_sctrl_bottom_ParamLimits

0x21eb,	// (0x00027d70) sctrl_sk_bottom_pane_t1_ParamLimits

0xdcec,	// (0x00033871) aid_area_touch_clock

0xc3ba,	// (0x00031f3f) aid_vkb2_area_top_pane_cell_ParamLimits

0xc3ba,	// (0x00031f3f) aid_vkb2_area_top_pane_cell

0xc465,	// (0x00031fea) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc465,	// (0x00031fea) aid_vkb2_area_bottom_pane_cell

0x7309,	// (0x0002ce8e) popup_char_count_window

0x7796,	// (0x0002d31b) popup_char_count_window_g1

0x779f,	// (0x0002d324) popup_char_count_window_g2

0x77a8,	// (0x0002d32d) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00035943) popup_char_count_window_g

0x77b1,	// (0x0002d336) popup_char_count_window_t1

0x228c,	// (0x00027e11) popup_fep_char_preview_window_ParamLimits

0x228c,	// (0x00027e11) popup_fep_char_preview_window

0xc3da,	// (0x00031f5f) vkb2_top_candi_pane_ParamLimits

0xc3da,	// (0x00031f5f) vkb2_top_candi_pane

0xe539,	// (0x000340be) cell_vkb2_top_candi_pane_ParamLimits

0xe539,	// (0x000340be) cell_vkb2_top_candi_pane

0x353d,	// (0x000290c2) bg_popup_fep_char_preview_window_ParamLimits

0x353d,	// (0x000290c2) bg_popup_fep_char_preview_window

0x27f4,	// (0x00028379) popup_fep_char_preview_window_t1_ParamLimits

0x27f4,	// (0x00028379) popup_fep_char_preview_window_t1

0x780c,	// (0x0002d391) bg_popup_fep_char_preview_window_g1

0x7814,	// (0x0002d399) bg_popup_fep_char_preview_window_g2

0x781c,	// (0x0002d3a1) bg_popup_fep_char_preview_window_g3

0x7824,	// (0x0002d3a9) bg_popup_fep_char_preview_window_g4

0x782c,	// (0x0002d3b1) bg_popup_fep_char_preview_window_g5

0x282e,	// (0x000283b3) bg_popup_fep_char_preview_window_g6

0x7834,	// (0x0002d3b9) bg_popup_fep_char_preview_window_g7

0x783c,	// (0x0002d3c1) bg_popup_fep_char_preview_window_g8

0x7844,	// (0x0002d3c9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x0003594a) bg_popup_fep_char_preview_window_g

0x5700,	// (0x0002b285) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5700,	// (0x0002b285) cell_vkb2_top_candi_pane_g1

0x5a17,	// (0x0002b59c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5a17,	// (0x0002b59c) cell_vkb2_top_candi_pane_g2

0x5a38,	// (0x0002b5bd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5a38,	// (0x0002b5bd) cell_vkb2_top_candi_pane_g3

0x2836,	// (0x000283bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2836,	// (0x000283bb) cell_vkb2_top_candi_pane_g4

0x784c,	// (0x0002d3d1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x784c,	// (0x0002d3d1) cell_vkb2_top_candi_pane_g5

0x6c2c,	// (0x0002c7b1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c2c,	// (0x0002c7b1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x0003595d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x0003595d) cell_vkb2_top_candi_pane_g

0x2857,	// (0x000283dc) cell_vkb2_top_candi_pane_t1

0xbba2,	// (0x00031727) aid_size_touch_slider_mark_ParamLimits

0xbba2,	// (0x00031727) aid_size_touch_slider_mark

0xe244,	// (0x00033dc9) grid_graphic2_catg_pane_ParamLimits

0xe244,	// (0x00033dc9) grid_graphic2_catg_pane

0xe300,	// (0x00033e85) popup_grid_graphic2_window_t1_ParamLimits

0xe300,	// (0x00033e85) popup_grid_graphic2_window_t1

0xe316,	// (0x00033e9b) popup_grid_graphic2_window_t2_ParamLimits

0xe316,	// (0x00033e9b) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x00035918) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x00035918) popup_grid_graphic2_window_t

0xc9e7,	// (0x0003256c) bg_button_pane_cp05_ParamLimits

0xe4b1,	// (0x00034036) cell_graphic2_control_pane_g1_ParamLimits

0xe59f,	// (0x00034124) cell_graphic2_catg_pane_ParamLimits

0xe59f,	// (0x00034124) cell_graphic2_catg_pane

0xc84d,	// (0x000323d2) bg_button_pane_cp12

0xe5b1,	// (0x00034136) cell_graphic2_catg_pane_g1

0x6d66,	// (0x0002c8eb) cell_tb_ext_pane_t1_ParamLimits

0x262e,	// (0x000281b3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x262e,	// (0x000281b3) vkb2_top_cell_right_narrow_pane

0x2646,	// (0x000281cb) vkb2_top_cell_right_wide_pane_ParamLimits

0x2646,	// (0x000281cb) vkb2_top_cell_right_wide_pane

0x1dfa,	// (0x0002797f) bg_vkb2_func_pane_ParamLimits

0x1dfa,	// (0x0002797f) bg_vkb2_func_pane

0x26b7,	// (0x0002823c) vkb2_top_cell_left_pane_g1_ParamLimits

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp03

0x2715,	// (0x0002829a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2ecb,	// (0x00028a50) bg_vkb2_func_pane_g1

0x2ed3,	// (0x00028a58) bg_vkb2_func_pane_g2

0x2ee3,	// (0x00028a68) bg_vkb2_func_pane_g3

0x2edb,	// (0x00028a60) bg_vkb2_func_pane_g4

0x2eeb,	// (0x00028a70) bg_vkb2_func_pane_g5

0x2ef3,	// (0x00028a78) bg_vkb2_func_pane_g6

0x2efb,	// (0x00028a80) bg_vkb2_func_pane_g7

0x2f03,	// (0x00028a88) bg_vkb2_func_pane_g8

0x2ec3,	// (0x00028a48) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x0003596a) bg_vkb2_func_pane_g

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp01

0x26b7,	// (0x0002823c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26b7,	// (0x0002823c) vkb2_top_cell_right_wide_pane_g1

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1dfa,	// (0x0002797f) bg_vkb2_fuc_pane_cp02

0x2715,	// (0x0002829a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2715,	// (0x0002829a) vkb2_top_cell_right_narrow_pane_g1

0xda0d,	// (0x00033592) aid_touch_area_decrease_ParamLimits

0xda0d,	// (0x00033592) aid_touch_area_decrease

0xda43,	// (0x000335c8) aid_touch_area_increase_ParamLimits

0xda43,	// (0x000335c8) aid_touch_area_increase

0xda6b,	// (0x000335f0) aid_touch_area_mute_ParamLimits

0xda6b,	// (0x000335f0) aid_touch_area_mute

0xda9b,	// (0x00033620) aid_touch_area_slider_ParamLimits

0xda9b,	// (0x00033620) aid_touch_area_slider

0xdadb,	// (0x00033660) popup_slider_window_g4_ParamLimits

0xdadb,	// (0x00033660) popup_slider_window_g4

0xdb03,	// (0x00033688) popup_slider_window_g5_ParamLimits

0xdb03,	// (0x00033688) popup_slider_window_g5

0xdb37,	// (0x000336bc) popup_slider_window_g6_ParamLimits

0xdb37,	// (0x000336bc) popup_slider_window_g6

0x6b42,	// (0x0002c6c7) popup_slider_window_t2_ParamLimits

0x6b42,	// (0x0002c6c7) popup_slider_window_t2

0x0001,

0xfce1,	// (0x00035866) popup_slider_window_t_ParamLimits

0xfce1,	// (0x00035866) popup_slider_window_t

0xdb53,	// (0x000336d8) slider_pane_ParamLimits

0xdb53,	// (0x000336d8) slider_pane

0x7888,	// (0x0002d40d) slider_pane_g1_ParamLimits

0x7888,	// (0x0002d40d) slider_pane_g1

0x789c,	// (0x0002d421) slider_pane_g2_ParamLimits

0x789c,	// (0x0002d421) slider_pane_g2

0x78b2,	// (0x0002d437) slider_pane_g3_ParamLimits

0x78b2,	// (0x0002d437) slider_pane_g3

0x0003,

0xfdf8,	// (0x0003597d) slider_pane_g_ParamLimits

0xfdf8,	// (0x0003597d) slider_pane_g

0xaf3d,	// (0x00030ac2) popup_tb_float_extension_window_ParamLimits

0xaf3d,	// (0x00030ac2) popup_tb_float_extension_window

0x78de,	// (0x0002d463) aid_size_cell_tb_float_ext

0xc84d,	// (0x000323d2) bg_popup_sub_window_cp28

0xe5ba,	// (0x0003413f) grid_tb_float_ext_pane

0xe5c4,	// (0x00034149) cell_tb_float_ext_pane_ParamLimits

0xe5c4,	// (0x00034149) cell_tb_float_ext_pane

0xe5de,	// (0x00034163) cell_tb_float_ext_pane_g1

0xe5e7,	// (0x0003416c) grid_highlight_pane_cp12

0xc150,	// (0x00031cd5) cell_last_hwr_side_pane_ParamLimits

0xc150,	// (0x00031cd5) cell_last_hwr_side_pane

0x5490,	// (0x0002b015) cell_last_hwr_side_pane_g1

0x7920,	// (0x0002d4a5) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00035986) cell_last_hwr_side_pane_g

0xc541,	// (0x000320c6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc541,	// (0x000320c6) vkb2_area_bottom_space_btn_pane

0x5700,	// (0x0002b285) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x73be,	// (0x0002cf43) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2857,	// (0x000283dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2876,	// (0x000283fb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2876,	// (0x000283fb) vkb2_area_bottom_space_btn_pane_g1

0x28b0,	// (0x00028435) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28b0,	// (0x00028435) vkb2_area_bottom_space_btn_pane_g2

0x28e6,	// (0x0002846b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28e6,	// (0x0002846b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x0003598b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x0003598b) vkb2_area_bottom_space_btn_pane_g

0x1eaf,	// (0x00027a34) cel_fep_hwr_func_pane_ParamLimits

0x1eaf,	// (0x00027a34) cel_fep_hwr_func_pane

0xc125,	// (0x00031caa) cell_hwr_side_button_pane_ParamLimits

0xc125,	// (0x00031caa) cell_hwr_side_button_pane

0xdcec,	// (0x00033871) aid_area_touch_clock_ParamLimits

0xc9e7,	// (0x0003256c) bg_uniindi_top_pane_ParamLimits

0xdcfe,	// (0x00033883) uniindi_top_pane_g1_ParamLimits

0xdd14,	// (0x00033899) uniindi_top_pane_g2_ParamLimits

0xdd20,	// (0x000338a5) uniindi_top_pane_g3_ParamLimits

0x6de0,	// (0x0002c965) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x0003589e) uniindi_top_pane_g_ParamLimits

0xdd31,	// (0x000338b6) uniindi_top_pane_t1_ParamLimits

0xc9e7,	// (0x0003256c) bg_vkb2_func_pane_cp01_ParamLimits

0xc9e7,	// (0x0003256c) bg_vkb2_func_pane_cp01

0x7929,	// (0x0002d4ae) cel_fep_hwr_func_pane_g1_ParamLimits

0x7929,	// (0x0002d4ae) cel_fep_hwr_func_pane_g1

0xc9e7,	// (0x0003256c) bg_vkb2_func_pane_cp02_ParamLimits

0xc9e7,	// (0x0003256c) bg_vkb2_func_pane_cp02

0x7929,	// (0x0002d4ae) cell_hwr_side_button_pane_g1_ParamLimits

0x7929,	// (0x0002d4ae) cell_hwr_side_button_pane_g1

0x2d47,	// (0x000288cc) status_pane_g4_ParamLimits

0x2d47,	// (0x000288cc) status_pane_g4

0x2d61,	// (0x000288e6) status_pane_t1

0x51cb,	// (0x0002ad50) form2_midp_gauge_slider_cont_pane

0x51d3,	// (0x0002ad58) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd1b3,	// (0x00032d38) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd1c5,	// (0x00032d4a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00035671) form2_midp_gauge_slider_pane_t_ParamLimits

0x5209,	// (0x0002ad8e) form2_midp_slider_pane_ParamLimits

0x224c,	// (0x00027dd1) aid_size_cell_func_vkb2_ParamLimits

0x224c,	// (0x00027dd1) aid_size_cell_func_vkb2

0x78ca,	// (0x0002d44f) slider_pane_g4_ParamLimits

0x78ca,	// (0x0002d44f) slider_pane_g4

0xc5a2,	// (0x00032127) form2_midp_gauge_slider_pane_t2_cp01

0xc5b0,	// (0x00032135) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5b0,	// (0x00032135) form2_midp_gauge_slider_pane_t3_cp01

0x295b,	// (0x000284e0) form2_midp_slider_pane_cp01

0xc84d,	// (0x000323d2) navi_smil_pane

0x7962,	// (0x0002d4e7) navi_smil_pane_g1

0x796a,	// (0x0002d4ef) navi_smil_pane_t1

0x7937,	// (0x0002d4bc) form2_midp_slider_pane_g1

0x7940,	// (0x0002d4c5) form2_midp_slider_pane_g2

0x7948,	// (0x0002d4cd) form2_midp_slider_pane_g3

0x7937,	// (0x0002d4bc) form2_midp_slider_pane_g4

0xe5f0,	// (0x00034175) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00035994) form2_midp_slider_pane_g

0x2920,	// (0x000284a5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2920,	// (0x000284a5) vkb2_area_bottom_space_btn_pane_g4

0xb175,	// (0x00030cfa) lc0_navi_pane_ParamLimits

0xb175,	// (0x00030cfa) lc0_navi_pane

0xb1df,	// (0x00030d64) lc0_stat_indi_pane_ParamLimits

0xb1df,	// (0x00030d64) lc0_stat_indi_pane

0xb1f4,	// (0x00030d79) ls0_title_pane_ParamLimits

0xb1f4,	// (0x00030d79) ls0_title_pane

0xcc6f,	// (0x000327f4) bg_popup_sub_pane_cp14_ParamLimits

0xdcd3,	// (0x00033858) list_uniindi_pane_ParamLimits

0xdcdf,	// (0x00033864) uniindi_top_pane_ParamLimits

0x6e29,	// (0x0002c9ae) list_single_uniindi_pane_g1_ParamLimits

0x6e3c,	// (0x0002c9c1) list_single_uniindi_pane_t1_ParamLimits

0xc5cd,	// (0x00032152) lc0_stat_clock_pane_ParamLimits

0xc5cd,	// (0x00032152) lc0_stat_clock_pane

0xe5fb,	// (0x00034180) lc0_stat_indi_pane_g1_ParamLimits

0xe5fb,	// (0x00034180) lc0_stat_indi_pane_g1

0xe608,	// (0x0003418d) lc0_stat_indi_pane_g2_ParamLimits

0xe608,	// (0x0003418d) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x0003599f) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x0003599f) lc0_stat_indi_pane_g

0xc5dd,	// (0x00032162) lc0_uni_indicator_pane_ParamLimits

0xc5dd,	// (0x00032162) lc0_uni_indicator_pane

0xe615,	// (0x0003419a) ls0_title_pane_g1_ParamLimits

0xe615,	// (0x0003419a) ls0_title_pane_g1

0xe629,	// (0x000341ae) ls0_title_pane_t1_ParamLimits

0xe629,	// (0x000341ae) ls0_title_pane_t1

0xc5ed,	// (0x00032172) lc0_uni_indicator_pane_g1_ParamLimits

0xc5ed,	// (0x00032172) lc0_uni_indicator_pane_g1

0x79dc,	// (0x0002d561) lc0_stat_clock_pane_t1

0xc84d,	// (0x000323d2) main_ai5_pane

0x79ea,	// (0x0002d56f) ai5_sk_pane_ParamLimits

0x79ea,	// (0x0002d56f) ai5_sk_pane

0xe657,	// (0x000341dc) cell_ai5_widget_pane_ParamLimits

0xe657,	// (0x000341dc) cell_ai5_widget_pane

0x7aa9,	// (0x0002d62e) aid_size_cell_widget_grid

0x7ab7,	// (0x0002d63c) bg_ai5_widget_pane_ParamLimits

0x7ab7,	// (0x0002d63c) bg_ai5_widget_pane

0x7b2b,	// (0x0002d6b0) cell_ai5_widget_pane_g2

0x7b3b,	// (0x0002d6c0) cell_ai5_widget_pane_g3

0x7b52,	// (0x0002d6d7) cell_ai5_widget_pane_g4

0x7b5e,	// (0x0002d6e3) cell_ai5_widget_pane_g5

0x7b6a,	// (0x0002d6ef) cell_ai5_widget_pane_g6

0x7b76,	// (0x0002d6fb) cell_ai5_widget_pane_g7

0x7bbe,	// (0x0002d743) cell_ai5_widget_pane_t1_ParamLimits

0x7bbe,	// (0x0002d743) cell_ai5_widget_pane_t1

0x7bdb,	// (0x0002d760) cell_ai5_widget_pane_t2_ParamLimits

0x7bdb,	// (0x0002d760) cell_ai5_widget_pane_t2

0x7bf3,	// (0x0002d778) cell_ai5_widget_pane_t3_ParamLimits

0x7bf3,	// (0x0002d778) cell_ai5_widget_pane_t3

0x7c0b,	// (0x0002d790) cell_ai5_widget_pane_t4_ParamLimits

0x7c0b,	// (0x0002d790) cell_ai5_widget_pane_t4

0x7c28,	// (0x0002d7ad) cell_ai5_widget_pane_t5_ParamLimits

0x7c28,	// (0x0002d7ad) cell_ai5_widget_pane_t5

0x7c47,	// (0x0002d7cc) cell_ai5_widget_pane_t6_ParamLimits

0x7c47,	// (0x0002d7cc) cell_ai5_widget_pane_t6

0x7c59,	// (0x0002d7de) cell_ai5_widget_pane_t7_ParamLimits

0x7c59,	// (0x0002d7de) cell_ai5_widget_pane_t7

0x7c72,	// (0x0002d7f7) cell_ai5_widget_pane_t8_ParamLimits

0x7c72,	// (0x0002d7f7) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x000359b9) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x000359b9) cell_ai5_widget_pane_t

0x7cc6,	// (0x0002d84b) grid_ai5_widget_pane

0xcc6f,	// (0x000327f4) highlight_cell_ai5_widget_pane_ParamLimits

0xcc6f,	// (0x000327f4) highlight_cell_ai5_widget_pane

0xe6bd,	// (0x00034242) ai5_sk_left_pane

0xe6c7,	// (0x0003424c) ai5_sk_middle_pane

0xe6d1,	// (0x00034256) ai5_sk_right_pane

0x7cf2,	// (0x0002d877) bg_ai5_widget_pane_g1_ParamLimits

0x7cf2,	// (0x0002d877) bg_ai5_widget_pane_g1

0x7cfe,	// (0x0002d883) bg_ai5_widget_pane_g2_ParamLimits

0x7cfe,	// (0x0002d883) bg_ai5_widget_pane_g2

0x7d0a,	// (0x0002d88f) bg_ai5_widget_pane_g3_ParamLimits

0x7d0a,	// (0x0002d88f) bg_ai5_widget_pane_g3

0x7d16,	// (0x0002d89b) bg_ai5_widget_pane_g4_ParamLimits

0x7d16,	// (0x0002d89b) bg_ai5_widget_pane_g4

0x7d22,	// (0x0002d8a7) bg_ai5_widget_pane_g5_ParamLimits

0x7d22,	// (0x0002d8a7) bg_ai5_widget_pane_g5

0x7d2e,	// (0x0002d8b3) bg_ai5_widget_pane_g6_ParamLimits

0x7d2e,	// (0x0002d8b3) bg_ai5_widget_pane_g6

0x7d3a,	// (0x0002d8bf) bg_ai5_widget_pane_g7_ParamLimits

0x7d3a,	// (0x0002d8bf) bg_ai5_widget_pane_g7

0x7d46,	// (0x0002d8cb) bg_ai5_widget_pane_g8_ParamLimits

0x7d46,	// (0x0002d8cb) bg_ai5_widget_pane_g8

0x7d52,	// (0x0002d8d7) bg_ai5_widget_pane_g9_ParamLimits

0x7d52,	// (0x0002d8d7) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x000359ce) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x000359ce) bg_ai5_widget_pane_g

0x7d84,	// (0x0002d909) cell_shortcut_ai5_widget_pane_ParamLimits

0x7d84,	// (0x0002d909) cell_shortcut_ai5_widget_pane

0x0af6,	// (0x0002667b) bg_cell_shortcut_ai5_widget_pane

0x7d95,	// (0x0002d91a) cell_grid_ai5_widget_pane_g1

0x0af6,	// (0x0002667b) highlight_cell_shortcut_ai5_widget_pane

0x2ed3,	// (0x00028a58) ai5_sk_left_pane_g1

0x7d9e,	// (0x0002d923) ai5_sk_left_pane_g2

0x7da6,	// (0x0002d92b) ai5_sk_left_pane_g3

0x7dae,	// (0x0002d933) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x000359e1) ai5_sk_left_pane_g

0x7db6,	// (0x0002d93b) ai5_sk_left_pane_t1

0x2ecb,	// (0x00028a50) ai5_sk_right_pane_g1

0x7dc4,	// (0x0002d949) ai5_sk_right_pane_g2

0x7dcc,	// (0x0002d951) ai5_sk_right_pane_g3

0x7dd4,	// (0x0002d959) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x000359ea) ai5_sk_right_pane_g

0x7ddc,	// (0x0002d961) ai5_sk_right_pane_t1

0x2ecb,	// (0x00028a50) ai5_sk_middle_pane_g1

0x2ed3,	// (0x00028a58) ai5_sk_middle_pane_g2

0x2eeb,	// (0x00028a70) ai5_sk_middle_pane_g3

0x7dcc,	// (0x0002d951) ai5_sk_middle_pane_g4

0x7da6,	// (0x0002d92b) ai5_sk_middle_pane_g5

0x7dea,	// (0x0002d96f) ai5_sk_middle_pane_g6

0xe6db,	// (0x00034260) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x000359f3) ai5_sk_middle_pane_g

0xb061,	// (0x00030be6) aid_touch_area_size_lc0_ParamLimits

0xb061,	// (0x00030be6) aid_touch_area_size_lc0

0x203a,	// (0x00027bbf) cell_hwr_candidate_pane_t1_ParamLimits

0x165d,	// (0x000271e2) aid_touch_navi_pane

0xb2ed,	// (0x00030e72) status_dt_navi_pane_ParamLimits

0xb2ed,	// (0x00030e72) status_dt_navi_pane

0xb305,	// (0x00030e8a) status_dt_sta_pane_ParamLimits

0xb305,	// (0x00030e8a) status_dt_sta_pane

0xe6e3,	// (0x00034268) dt_sta_controll_pane

0xe6f0,	// (0x00034275) dt_sta_indi_pane

0xe6fd,	// (0x00034282) dt_sta_title_pane

0xc9e7,	// (0x0003256c) bg_dt_sta_indi_pane_ParamLimits

0xc9e7,	// (0x0003256c) bg_dt_sta_indi_pane

0xe70f,	// (0x00034294) dt_sta_battery_pane

0xe717,	// (0x0003429c) dt_sta_indi_pane_g1

0x7e3c,	// (0x0002d9c1) dt_sta_indi_pane_g2

0x7e45,	// (0x0002d9ca) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x00035a02) dt_sta_indi_pane_g

0x7e4e,	// (0x0002d9d3) dt_sta_signal_pane

0xcc6f,	// (0x000327f4) bg_dt_sta_title_pane_ParamLimits

0xcc6f,	// (0x000327f4) bg_dt_sta_title_pane

0x3cf9,	// (0x0002987e) dt_sta_title_pane_g1

0xe720,	// (0x000342a5) dt_sta_title_pane_t1_ParamLimits

0xe720,	// (0x000342a5) dt_sta_title_pane_t1

0xc84d,	// (0x000323d2) bg_dt_sta_control_pane

0xe735,	// (0x000342ba) dt_sta_controll_pane_g1

0xe73e,	// (0x000342c3) bg_dt_sta_title_pane_g1

0xe747,	// (0x000342cc) bg_dt_sta_title_pane_g2

0xe750,	// (0x000342d5) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x00035a09) bg_dt_sta_title_pane_g

0x5490,	// (0x0002b015) bg_dt_sta_indi_pane_g1

0x7e90,	// (0x0002da15) dt_sta_signal_pane_g1

0x7e98,	// (0x0002da1d) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x00035a10) dt_sta_signal_pane_g

0x7ea0,	// (0x0002da25) dt_sta_battery_pane_g1

0x7ea9,	// (0x0002da2e) dt_sta_battery_pane_t1

0x5490,	// (0x0002b015) bg_dt_sta_control_pane_g1

0xd125,	// (0x00032caa) fep_china_uni_eep_pane

0xd12d,	// (0x00032cb2) fep_china_uni_entry_pane_ParamLimits

0xd13d,	// (0x00032cc2) popup_fep_china_uni_window_g1_ParamLimits

0xd14d,	// (0x00032cd2) popup_fep_china_uni_window_g2_ParamLimits

0xd14d,	// (0x00032cd2) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00035293) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00035293) popup_fep_china_uni_window_g

0x7eb8,	// (0x0002da3d) fep_china_uni_eep_pane_g1

0x7ec0,	// (0x0002da45) fep_china_uni_eep_pane_t1

0x7959,	// (0x0002d4de) aid_touch_area_size_smil_player

0x17b3,	// (0x00027338) lc0_clock_pane

0x2d55,	// (0x000288da) status_pane_g5_ParamLimits

0x2d55,	// (0x000288da) status_pane_g5

0xaa73,	// (0x000305f8) popup_keymap_window

0x2d13,	// (0x00028898) status_icon_pane

0x7b3b,	// (0x0002d6c0) cell_ai5_widget_pane_g3_ParamLimits

0x7b52,	// (0x0002d6d7) cell_ai5_widget_pane_g4_ParamLimits

0x7b5e,	// (0x0002d6e3) cell_ai5_widget_pane_g5_ParamLimits

0x7b82,	// (0x0002d707) cell_ai5_widget_pane_g8_ParamLimits

0x7b82,	// (0x0002d707) cell_ai5_widget_pane_g8

0x7b96,	// (0x0002d71b) cell_ai5_widget_pane_g9_ParamLimits

0x7b96,	// (0x0002d71b) cell_ai5_widget_pane_g9

0x7baa,	// (0x0002d72f) cell_ai5_widget_pane_g10_ParamLimits

0x7baa,	// (0x0002d72f) cell_ai5_widget_pane_g10

0x7ecf,	// (0x0002da54) status_icon_pane_g1

0xc84d,	// (0x000323d2) bg_popup_sub_pane_cp13

0x7ed7,	// (0x0002da5c) popup_keymap_window_t1

0xa73b,	// (0x000302c0) control_pane_g6_ParamLimits

0xa73b,	// (0x000302c0) control_pane_g6

0xa748,	// (0x000302cd) control_pane_g7_ParamLimits

0xa748,	// (0x000302cd) control_pane_g7

0xa755,	// (0x000302da) control_pane_g8_ParamLimits

0xa755,	// (0x000302da) control_pane_g8

0xe6e3,	// (0x00034268) dt_sta_controll_pane_ParamLimits

0xe6f0,	// (0x00034275) dt_sta_indi_pane_ParamLimits

0xe6fd,	// (0x00034282) dt_sta_title_pane_ParamLimits

0xcbba,	// (0x0003273f) aid_size_touch_scroll_bar_cale

0x99cd,	// (0x0002f552) popup_discreet_window_ParamLimits

0x99cd,	// (0x0002f552) popup_discreet_window

0x9a1f,	// (0x0002f5a4) popup_sk_window

0x353d,	// (0x000290c2) bg_popup_sub_pane_cp28_ParamLimits

0x353d,	// (0x000290c2) bg_popup_sub_pane_cp28

0x7ee5,	// (0x0002da6a) popup_discreet_window_g1_ParamLimits

0x7ee5,	// (0x0002da6a) popup_discreet_window_g1

0xe759,	// (0x000342de) popup_discreet_window_t1_ParamLimits

0xe759,	// (0x000342de) popup_discreet_window_t1

0x7f23,	// (0x0002daa8) popup_discreet_window_t2_ParamLimits

0x7f23,	// (0x0002daa8) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x00035a15) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x00035a15) popup_discreet_window_t

0x2992,	// (0x00028517) popup_sk_window_g1

0x299c,	// (0x00028521) popup_sk_window_g2

0x0001,

0xfe97,	// (0x00035a1c) popup_sk_window_g

0xc618,	// (0x0003219d) popup_sk_window_t1

0xc626,	// (0x000321ab) popup_sk_window_t1_copy1

0x7b2b,	// (0x0002d6b0) cell_ai5_widget_pane_g2_ParamLimits

0x7c84,	// (0x0002d809) cell_ai5_widget_pane_t9_ParamLimits

0x7c84,	// (0x0002d809) cell_ai5_widget_pane_t9

0xc84d,	// (0x000323d2) main_fep_fshwr2_pane

0xc634,	// (0x000321b9) aid_fshwr2_btn_pane

0xc646,	// (0x000321cb) aid_fshwr2_syb_pane

0xc658,	// (0x000321dd) aid_fshwr2_txt_pane

0xc667,	// (0x000321ec) fshwr2_func_candi_pane

0xc686,	// (0x0003220b) fshwr2_hwr_syb_pane

0xc6a1,	// (0x00032226) fshwr2_icf_pane

0xc84d,	// (0x000323d2) fshwr2_icf_bg_pane

0x2a41,	// (0x000285c6) fshwr2_icf_pane_t1_ParamLimits

0x2a41,	// (0x000285c6) fshwr2_icf_pane_t1

0xd0a2,	// (0x00032c27) fshwr2_func_candi_pane_g1

0xe777,	// (0x000342fc) fshwr2_func_candi_row_pane_ParamLimits

0xe777,	// (0x000342fc) fshwr2_func_candi_row_pane

0xc6cd,	// (0x00032252) cell_fshwr2_syb_pane_ParamLimits

0xc6cd,	// (0x00032252) cell_fshwr2_syb_pane

0x5700,	// (0x0002b285) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5700,	// (0x0002b285) fshwr2_hwr_syb_pane_g1

0xc84d,	// (0x000323d2) bg_popup_call_pane_cp01

0xc6e3,	// (0x00032268) fshwr2_func_candi_cell_pane_ParamLimits

0xc6e3,	// (0x00032268) fshwr2_func_candi_cell_pane

0xe79a,	// (0x0003431f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe79a,	// (0x0003431f) fshwr2_func_candi_cell_bg_pane

0xc72e,	// (0x000322b3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc72e,	// (0x000322b3) fshwr2_func_candi_cell_pane_g1

0xc765,	// (0x000322ea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc765,	// (0x000322ea) fshwr2_func_candi_cell_pane_t1

0xc84d,	// (0x000323d2) bg_button_pane_cp08

0x7f85,	// (0x0002db0a) cell_fshwr2_syb_bg_pane

0xc780,	// (0x00032305) cell_fshwr2_syb_bg_pane_g1

0xc788,	// (0x0003230d) cell_fshwr2_syb_bg_pane_t1

0xcc6f,	// (0x000327f4) main_tmo_pane

0xba78,	// (0x000315fd) uni_indicator_pane_g1_ParamLimits

0xba8e,	// (0x00031613) uni_indicator_pane_g2_ParamLimits

0xbaa4,	// (0x00031629) uni_indicator_pane_g3_ParamLimits

0x4066,	// (0x00029beb) uni_indicator_pane_g4_ParamLimits

0x4066,	// (0x00029beb) uni_indicator_pane_g4

0x407a,	// (0x00029bff) uni_indicator_pane_g5_ParamLimits

0x407a,	// (0x00029bff) uni_indicator_pane_g5

0x407a,	// (0x00029bff) uni_indicator_pane_g6_ParamLimits

0x407a,	// (0x00029bff) uni_indicator_pane_g6

0xf906,	// (0x0003548b) uni_indicator_pane_g_ParamLimits

0xd9ef,	// (0x00033574) popup_tmo_note_window_ParamLimits

0xd9ef,	// (0x00033574) popup_tmo_note_window

0xcc6f,	// (0x000327f4) fshwr2_bg_pane

0xc756,	// (0x000322db) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc756,	// (0x000322db) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00035a21) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00035a21) fshwr2_func_candi_cell_pane_g

0x5490,	// (0x0002b015) bg_popup_window_pane_cp01

0x2b0d,	// (0x00028692) bg_popup_window_pane_g1_cp01

0x7f8d,	// (0x0002db12) bg_popup_window_pane_cp22_ParamLimits

0x7f8d,	// (0x0002db12) bg_popup_window_pane_cp22

0xe7a6,	// (0x0003432b) listscroll_tmo_link_pane_ParamLimits

0xe7a6,	// (0x0003432b) listscroll_tmo_link_pane

0x7fdb,	// (0x0002db60) popup_tmo_note_window_g1_ParamLimits

0x7fdb,	// (0x0002db60) popup_tmo_note_window_g1

0xe7e6,	// (0x0003436b) tmo_note_info_pane_ParamLimits

0xe7e6,	// (0x0003436b) tmo_note_info_pane

0xe800,	// (0x00034385) list_tmo_note_info_pane_g1_ParamLimits

0xe800,	// (0x00034385) list_tmo_note_info_pane_g1

0x8019,	// (0x0002db9e) list_tmo_note_info_pane_g2_ParamLimits

0x8019,	// (0x0002db9e) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00035a26) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00035a26) list_tmo_note_info_pane_g

0x8035,	// (0x0002dbba) list_tmo_note_info_text_pane_ParamLimits

0x8035,	// (0x0002dbba) list_tmo_note_info_text_pane

0x80b6,	// (0x0002dc3b) list_tmo_link_pane

0x80c3,	// (0x0002dc48) scroll_pane_cp20

0x80d0,	// (0x0002dc55) list_single_tmo_link_pane_ParamLimits

0x80d0,	// (0x0002dc55) list_single_tmo_link_pane

0x80e0,	// (0x0002dc65) list_single_tmo_link_pane_t1

0x80ee,	// (0x0002dc73) list_tmo_note_info_text_pane_t1_ParamLimits

0x80ee,	// (0x0002dc73) list_tmo_note_info_text_pane_t1

0xa11b,	// (0x0002fca0) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa11b,	// (0x0002fca0) aid_size_touch_scroll_bar_cp01

0x94fe,	// (0x0002f083) aid_size_touch_slider_marker

0x9a0f,	// (0x0002f594) popup_settings_window_ParamLimits

0x9a0f,	// (0x0002f594) popup_settings_window

0xec9d,	// (0x00034822) popup_candi_list_indi_window

0x165d,	// (0x000271e2) aid_touch_navi_pane_ParamLimits

0x21a5,	// (0x00027d2a) rs_clock_indi_pane

0x21ae,	// (0x00027d33) sctrl_sk_bottom_pane_ParamLimits

0x21bf,	// (0x00027d44) sctrl_sk_top_pane_ParamLimits

0xc27e,	// (0x00031e03) popup_fep_tooltip_window

0x7aa9,	// (0x0002d62e) aid_size_cell_widget_grid_ParamLimits

0x7b16,	// (0x0002d69b) cell_ai5_widget_pane_g1_ParamLimits

0x7b16,	// (0x0002d69b) cell_ai5_widget_pane_g1

0x7b6a,	// (0x0002d6ef) cell_ai5_widget_pane_g6_ParamLimits

0x7b76,	// (0x0002d6fb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x000359a4) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x000359a4) cell_ai5_widget_pane_g

0x7ca8,	// (0x0002d82d) cell_ai5_widget_pane_t10_ParamLimits

0x7ca8,	// (0x0002d82d) cell_ai5_widget_pane_t10

0x7cc6,	// (0x0002d84b) grid_ai5_widget_pane_ParamLimits

0x7d5e,	// (0x0002d8e3) cell_contacts_ai5_widget_pane_ParamLimits

0x7d5e,	// (0x0002d8e3) cell_contacts_ai5_widget_pane

0x7f38,	// (0x0002dabd) popup_discreet_window_t3_ParamLimits

0x7f38,	// (0x0002dabd) popup_discreet_window_t3

0xc6b9,	// (0x0003223e) popup_fshwr2_char_preview_window_ParamLimits

0xc6b9,	// (0x0003223e) popup_fshwr2_char_preview_window

0xe817,	// (0x0003439c) tmo_note_info_pane_t1

0xe82c,	// (0x000343b1) tmo_note_info_pane_t2

0xe843,	// (0x000343c8) tmo_note_info_pane_t3

0x8092,	// (0x0002dc17) tmo_note_info_pane_t4

0x80a4,	// (0x0002dc29) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00035a2b) tmo_note_info_pane_t

0x80b6,	// (0x0002dc3b) list_tmo_link_pane_ParamLimits

0x80c3,	// (0x0002dc48) scroll_pane_cp20_ParamLimits

0xc84d,	// (0x000323d2) bg_popup_fep_char_preview_window_cp01

0xe858,	// (0x000343dd) popup_fshwr2_char_preview_window_t1

0x8115,	// (0x0002dc9a) popup_candi_list_indi_window_g1

0x811e,	// (0x0002dca3) bg_cell_contacts_ai5_widget_pane

0x812a,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_g1

0x5b83,	// (0x0002b708) cell_contacts_ai5_widget_pane_g2

0x813f,	// (0x0002dcc4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00035a36) cell_contacts_ai5_widget_pane_g

0x814b,	// (0x0002dcd0) cell_contacts_ai5_widget_pane_t1

0xcc6f,	// (0x000327f4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81c2,	// (0x0002dd47) settings_container_pane

0x0af6,	// (0x0002667b) listscroll_set_pane_copy1

0x4b93,	// (0x0002a718) scroll_pane_cp121_copy1

0x32f6,	// (0x00028e7b) set_content_pane_copy1

0xe8cb,	// (0x00034450) aid_height_set_list_copy1_ParamLimits

0xe8cb,	// (0x00034450) aid_height_set_list_copy1

0x4272,	// (0x00029df7) aid_size_parent_copy1_ParamLimits

0x4272,	// (0x00029df7) aid_size_parent_copy1

0xe8d7,	// (0x0003445c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8d7,	// (0x0003445c) button_value_adjust_pane_cp6_copy1

0x1060,	// (0x00026be5) list_highlight_pane_cp2_copy1_ParamLimits

0x1060,	// (0x00026be5) list_highlight_pane_cp2_copy1

0xe8eb,	// (0x00034470) list_set_pane_copy1_ParamLimits

0xe8eb,	// (0x00034470) list_set_pane_copy1

0xe866,	// (0x000343eb) main_pane_set_t1_copy1_ParamLimits

0xe866,	// (0x000343eb) main_pane_set_t1_copy1

0xe8a0,	// (0x00034425) main_pane_set_t2_copy1_ParamLimits

0xe8a0,	// (0x00034425) main_pane_set_t2_copy1

0xe998,	// (0x0003451d) main_pane_set_t3_copy1

0xe9a6,	// (0x0003452b) main_pane_set_t4_copy1

0xe8bf,	// (0x00034444) set_content_pane_g1_copy1_ParamLimits

0xe8bf,	// (0x00034444) set_content_pane_g1_copy1

0xe9b4,	// (0x00034539) setting_code_pane_copy1

0x82bf,	// (0x0002de44) setting_slider_graphic_pane_copy1

0x82bf,	// (0x0002de44) setting_slider_pane_copy1

0x82bf,	// (0x0002de44) setting_text_pane_copy1

0x82bf,	// (0x0002de44) setting_volume_pane_copy1

0xe9b4,	// (0x00034539) settings_code_pane_cp2_copy1

0xe9bc,	// (0x00034541) settings_code_pane_cp_copy1_ParamLimits

0xe9bc,	// (0x00034541) settings_code_pane_cp_copy1

0xc797,	// (0x0003231c) volume_set_pane_copy1

0xe9d0,	// (0x00034555) volume_set_pane_g10_copy1

0xe9d8,	// (0x0003455d) volume_set_pane_g1_copy1

0xe9e0,	// (0x00034565) volume_set_pane_g2_copy1

0xe9e8,	// (0x0003456d) volume_set_pane_g3_copy1

0xe9f0,	// (0x00034575) volume_set_pane_g4_copy1

0xe9f8,	// (0x0003457d) volume_set_pane_g5_copy1

0xea00,	// (0x00034585) volume_set_pane_g6_copy1

0xea08,	// (0x0003458d) volume_set_pane_g7_copy1

0xea10,	// (0x00034595) volume_set_pane_g8_copy1

0xea18,	// (0x0003459d) volume_set_pane_g9_copy1

0xc8bd,	// (0x00032442) bg_set_opt_pane_cp_copy1_ParamLimits

0xc8bd,	// (0x00032442) bg_set_opt_pane_cp_copy1

0xc79f,	// (0x00032324) setting_slider_pane_t1_copy1_ParamLimits

0xc79f,	// (0x00032324) setting_slider_pane_t1_copy1

0xc7bd,	// (0x00032342) setting_slider_pane_t2_copy1_ParamLimits

0xc7bd,	// (0x00032342) setting_slider_pane_t2_copy1

0xc7d7,	// (0x0003235c) setting_slider_pane_t3_copy1_ParamLimits

0xc7d7,	// (0x0003235c) setting_slider_pane_t3_copy1

0xc7ef,	// (0x00032374) slider_set_pane_copy1_ParamLimits

0xc7ef,	// (0x00032374) slider_set_pane_copy1

0xccc7,	// (0x0003284c) set_opt_bg_pane_g1_copy2

0xcccf,	// (0x00032854) set_opt_bg_pane_g2_copy2

0x832b,	// (0x0002deb0) set_opt_bg_pane_g3_copy2

0xccdf,	// (0x00032864) set_opt_bg_pane_g4_copy2

0xcce7,	// (0x0003286c) set_opt_bg_pane_g5_copy2

0xccef,	// (0x00032874) set_opt_bg_pane_g6_copy2

0xea20,	// (0x000345a5) set_opt_bg_pane_g7_copy2

0x833d,	// (0x0002dec2) set_opt_bg_pane_g8_copy2

0x8347,	// (0x0002decc) set_opt_bg_pane_g9_copy2

0xc805,	// (0x0003238a) aid_size_touch_slider_mark_copy1_ParamLimits

0xc805,	// (0x0003238a) aid_size_touch_slider_mark_copy1

0xea28,	// (0x000345ad) slider_set_pane_g1_copy1

0x2b98,	// (0x0002871d) slider_set_pane_g2_copy1

0xbbc3,	// (0x00031748) slider_set_pane_g3_copy1_ParamLimits

0xbbc3,	// (0x00031748) slider_set_pane_g3_copy1

0xbbd7,	// (0x0003175c) slider_set_pane_g4_copy1_ParamLimits

0xbbd7,	// (0x0003175c) slider_set_pane_g4_copy1

0xbbef,	// (0x00031774) slider_set_pane_g5_copy1_ParamLimits

0xbbef,	// (0x00031774) slider_set_pane_g5_copy1

0xbbc3,	// (0x00031748) slider_set_pane_g6_copy1_ParamLimits

0xbbc3,	// (0x00031748) slider_set_pane_g6_copy1

0xc819,	// (0x0003239e) slider_set_pane_g7_copy1_ParamLimits

0xc819,	// (0x0003239e) slider_set_pane_g7_copy1

0xc861,	// (0x000323e6) bg_set_opt_pane_cp2_copy1

0xea31,	// (0x000345b6) setting_slider_graphic_pane_g1_copy1

0xea3a,	// (0x000345bf) setting_slider_graphic_pane_t1_copy1

0xea4a,	// (0x000345cf) setting_slider_graphic_pane_t2_copy1

0xea5a,	// (0x000345df) slider_set_pane_cp_copy1

0x8393,	// (0x0002df18) input_focus_pane_cp1_copy1

0x839c,	// (0x0002df21) list_set_text_pane_copy1

0x83a4,	// (0x0002df29) setting_text_pane_g1_copy1

0xf3a3,	// (0x00034f28) set_text_pane_t1_copy1

0x8393,	// (0x0002df18) input_focus_pane_cp2_copy1

0x83a4,	// (0x0002df29) setting_code_pane_g1_copy1

0x83ad,	// (0x0002df32) setting_code_pane_t1_copy1

0x83bb,	// (0x0002df40) list_set_graphic_pane_copy1

0xc861,	// (0x000323e6) bg_set_opt_pane_cp4_copy1

0x0801,	// (0x00026386) list_set_graphic_pane_g1_copy1_ParamLimits

0x0801,	// (0x00026386) list_set_graphic_pane_g1_copy1

0x83cf,	// (0x0002df54) list_set_graphic_pane_g2_copy1

0x0819,	// (0x0002639e) list_set_graphic_pane_t1_copy1_ParamLimits

0x0819,	// (0x0002639e) list_set_graphic_pane_t1_copy1

0x5490,	// (0x0002b015) rs_clock_indi_pane_g1

0x83d7,	// (0x0002df5c) rs_clock_indi_pane_t1

0x83e5,	// (0x0002df6a) rs_indi_pane

0x83ed,	// (0x0002df72) rs_indi_pane_g1

0x83f6,	// (0x0002df7b) rs_indi_pane_g2

0x8115,	// (0x0002dc9a) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00035a3d) rs_indi_pane_g

0x0af6,	// (0x0002667b) bg_popup_preview_window_pane_cp03

0x83ff,	// (0x0002df84) popup_fep_tooltip_window_t1

0xd694,	// (0x00033219) popup_note2_window_g2_ParamLimits

0xd694,	// (0x00033219) popup_note2_window_g2

0x0001,

0xfc58,	// (0x000357dd) popup_note2_window_g_ParamLimits

0xfc58,	// (0x000357dd) popup_note2_window_g

0x6618,	// (0x0002c19d) bg_popup_sub_pane_cp11_ParamLimits

0x6625,	// (0x0002c1aa) cell_ai3_links_pane_g1_ParamLimits

0x663c,	// (0x0002c1c1) cell_ai3_links_pane_t1

0xf3a3,	// (0x00034f28) set_text_pane_t1_copy1_ParamLimits

0x0a07,	// (0x0002658c) cell_graphic_popup_pane_cp2_ParamLimits

0x0a07,	// (0x0002658c) cell_graphic_popup_pane_cp2

0xea6a,	// (0x000345ef) cell_graphic_popup_pane_g1_cp2

0xcb3d,	// (0x000326c2) cell_graphic_popup_pane_g2_cp2

0x8415,	// (0x0002df9a) cell_graphic_popup_pane_g3_cp2

0xea72,	// (0x000345f7) cell_graphic_popup_pane_t2_cp2

0xcb4e,	// (0x000326d3) grid_highlight_pane_cp3_cp2

0xcf1f,	// (0x00032aa4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcc6f,	// (0x000327f4) main_tmo_pane_ParamLimits

0xd9e3,	// (0x00033568) popup_tmo_big_image_note_window

0x7b05,	// (0x0002d68a) cell_ai5_widget_list_pane

0x7b0d,	// (0x0002d692) cell_ai5_widget_lrg_icon_pane

0xe817,	// (0x0003439c) tmo_note_info_pane_t1_ParamLimits

0xe82c,	// (0x000343b1) tmo_note_info_pane_t2_ParamLimits

0xe843,	// (0x000343c8) tmo_note_info_pane_t3_ParamLimits

0x8092,	// (0x0002dc17) tmo_note_info_pane_t4_ParamLimits

0x80a4,	// (0x0002dc29) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00035a2b) tmo_note_info_pane_t_ParamLimits

0x81c2,	// (0x0002dd47) settings_container_pane_ParamLimits

0xea62,	// (0x000345e7) indicator_popup_pane_cp5

0xea62,	// (0x000345e7) indicator_popup_pane_cp6

0x83bb,	// (0x0002df40) list_set_graphic_pane_copy1_ParamLimits

0xc84d,	// (0x000323d2) bg_popup_window_pane_cp23

0x842b,	// (0x0002dfb0) popup_tmo_big_image_note_window_g1

0x8434,	// (0x0002dfb9) popup_tmo_big_image_note_window_t1

0x8444,	// (0x0002dfc9) popup_tmo_big_image_note_window_t2

0x8454,	// (0x0002dfd9) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00035a44) popup_tmo_big_image_note_window_t

0x5490,	// (0x0002b015) cell_ai5_widget_lrg_icon_pane_g1

0x8464,	// (0x0002dfe9) cell_ai5_widget_lrg_icon_pane_t1

0x8472,	// (0x0002dff7) cell_ai5_widget_list_row_pane_ParamLimits

0x8472,	// (0x0002dff7) cell_ai5_widget_list_row_pane

0x8489,	// (0x0002e00e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8489,	// (0x0002e00e) cell_ai5_widget_list_row_pane_g1

0xea80,	// (0x00034605) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea80,	// (0x00034605) cell_ai5_widget_list_row_pane_t1

0x84c1,	// (0x0002e046) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x84c1,	// (0x0002e046) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00035a4b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00035a4b) cell_ai5_widget_list_row_pane_t

0xc84d,	// (0x000323d2) main_fep_vtchi_ss_pane

0x8505,	// (0x0002e08a) popup_fep_char_pre_window

0x850d,	// (0x0002e092) popup_fep_ituss_window

0xeac0,	// (0x00034645) popup_fep_vkbss_window

0xeacd,	// (0x00034652) grid_vkbss_keypad_pane_ParamLimits

0xeacd,	// (0x00034652) grid_vkbss_keypad_pane

0x8568,	// (0x0002e0ed) ituss_keypad_pane

0x2bc2,	// (0x00028747) aid_vkbss_key_offset_ParamLimits

0x2bc2,	// (0x00028747) aid_vkbss_key_offset

0xc82f,	// (0x000323b4) cell_vkbss_key_pane_ParamLimits

0xc82f,	// (0x000323b4) cell_vkbss_key_pane

0x2d2f,	// (0x000288b4) bg_cell_vkbss_key_g1_ParamLimits

0x2d2f,	// (0x000288b4) bg_cell_vkbss_key_g1

0xeadd,	// (0x00034662) cell_vkbss_key_3p_pane_ParamLimits

0xeadd,	// (0x00034662) cell_vkbss_key_3p_pane

0xeaf7,	// (0x0003467c) cell_vkbss_key_g1_ParamLimits

0xeaf7,	// (0x0003467c) cell_vkbss_key_g1

0xeb11,	// (0x00034696) cell_vkbss_key_t1_ParamLimits

0xeb11,	// (0x00034696) cell_vkbss_key_t1

0x2be4,	// (0x00028769) cell_ituss_key_pane_ParamLimits

0x2be4,	// (0x00028769) cell_ituss_key_pane

0x85ca,	// (0x0002e14f) bg_cell_ituss_key_g1_ParamLimits

0x85ca,	// (0x0002e14f) bg_cell_ituss_key_g1

0x85d6,	// (0x0002e15b) cell_ituss_key_pane_g1_ParamLimits

0x85d6,	// (0x0002e15b) cell_ituss_key_pane_g1

0x2bf5,	// (0x0002877a) cell_ituss_key_pane_g2_ParamLimits

0x2bf5,	// (0x0002877a) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00035a52) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00035a52) cell_ituss_key_pane_g

0x2c21,	// (0x000287a6) cell_ituss_key_t1_ParamLimits

0x2c21,	// (0x000287a6) cell_ituss_key_t1

0x2c5b,	// (0x000287e0) cell_ituss_key_t2_ParamLimits

0x2c5b,	// (0x000287e0) cell_ituss_key_t2

0x2c8c,	// (0x00028811) cell_ituss_key_t3_ParamLimits

0x2c8c,	// (0x00028811) cell_ituss_key_t3

0x2c5b,	// (0x000287e0) cell_ituss_key_t4_ParamLimits

0x2c5b,	// (0x000287e0) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x00035a59) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x00035a59) cell_ituss_key_t

0x85fc,	// (0x0002e181) cell_vkbss_key_3p_pane_g1

0x8604,	// (0x0002e189) cell_vkbss_key_3p_pane_g2

0x860c,	// (0x0002e191) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00035a64) cell_vkbss_key_3p_pane_g

0xc84d,	// (0x000323d2) bg_popup_fep_char_preview_window_cp02

0x2ccf,	// (0x00028854) popup_fep_char_pre_window_t1

0xe6b3,	// (0x00034238) main_ai5_sk_pane

0x811e,	// (0x0002dca3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x812a,	// (0x0002dcaf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5b83,	// (0x0002b708) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x813f,	// (0x0002dcc4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00035a36) cell_contacts_ai5_widget_pane_g_ParamLimits

0x814b,	// (0x0002dcd0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcc6f,	// (0x000327f4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb3c,	// (0x000346c1) main_ai5_sk_pane_g1

0xb6c9,	// (0x0003124e) popup_query_code_window_g1

0x8523,	// (0x0002e0a8) popup_fep_vkb_icf_pane

0x8542,	// (0x0002e0c7) popup_fep_vtchi_icf_pane

0x861d,	// (0x0002e1a2) bg_icf_pane

0x8629,	// (0x0002e1ae) list_vkb_icf_pane

0x8638,	// (0x0002e1bd) bg_icf_pane_cp01

0x864b,	// (0x0002e1d0) vtchi_icf_list_pane

0x865b,	// (0x0002e1e0) list_vkb_icf_pane_t1_ParamLimits

0x865b,	// (0x0002e1e0) list_vkb_icf_pane_t1

0x8672,	// (0x0002e1f7) vtchi_icf_list_pane_t1_ParamLimits

0x8672,	// (0x0002e1f7) vtchi_icf_list_pane_t1

0x850d,	// (0x0002e092) popup_fep_ituss_window_ParamLimits

0x8542,	// (0x0002e0c7) popup_fep_vtchi_icf_pane_ParamLimits

0x8568,	// (0x0002e0ed) ituss_keypad_pane_ParamLimits

0x2bb6,	// (0x0002873b) ituss_sks_pane

0x861d,	// (0x0002e1a2) bg_icf_pane_ParamLimits

0xeab1,	// (0x00034636) icf_edit_indi_pane_ParamLimits

0xeab1,	// (0x00034636) icf_edit_indi_pane

0x8629,	// (0x0002e1ae) list_vkb_icf_pane_ParamLimits

0x8638,	// (0x0002e1bd) bg_icf_pane_cp01_ParamLimits

0x84f8,	// (0x0002e07d) icf_edit_indi_pane_cp01_ParamLimits

0x84f8,	// (0x0002e07d) icf_edit_indi_pane_cp01

0x8653,	// (0x0002e1d8) vtchi_query_pane

0x5700,	// (0x0002b285) icf_edit_indi_pane_g1_ParamLimits

0x5700,	// (0x0002b285) icf_edit_indi_pane_g1

0x86e7,	// (0x0002e26c) icf_edit_indi_pane_g2_ParamLimits

0x86e7,	// (0x0002e26c) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00035a7c) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00035a7c) icf_edit_indi_pane_g

0x86f6,	// (0x0002e27b) icf_edit_indi_pane_t1

0x8690,	// (0x0002e215) bg_input_focus_pane_cp042

0xcbb1,	// (0x00032736) vtchi_button_pane

0x8699,	// (0x0002e21e) vtchi_query_pane_t1

0x86a7,	// (0x0002e22c) vtchi_query_pane_t2

0x86b5,	// (0x0002e23a) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00035a6b) vtchi_query_pane_t

0xc84d,	// (0x000323d2) bg_button_pane_cp13

0x86c3,	// (0x0002e248) vtchi_button_pane_g1

0x2cde,	// (0x00028863) ituss_sks_pane_g1

0x2ce9,	// (0x0002886e) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x00035a72) ituss_sks_pane_g

0x86cb,	// (0x0002e250) ituss_sks_pane_t1

0x86d9,	// (0x0002e25e) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x00035a77) ituss_sks_pane_t

0x4f0d,	// (0x0002aa92) indicator_nsta_pane_cp_g1

0x4f15,	// (0x0002aa9a) indicator_nsta_pane_cp_g2

0x4f1d,	// (0x0002aaa2) indicator_nsta_pane_cp_g3

0x4f0d,	// (0x0002aa92) indicator_nsta_pane_cp_g4

0x4f15,	// (0x0002aa9a) indicator_nsta_pane_cp_g5

0x4f1d,	// (0x0002aaa2) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00035627) indicator_nsta_pane_cp_g

0xe490,	// (0x00034015) cell_graphic2_pane_t2_ParamLimits

0xe490,	// (0x00034015) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x0003592d) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x0003592d) cell_graphic2_pane_t

0xe4c9,	// (0x0003404e) cell_graphic2_control_pane_t1

0xa3e1,	// (0x0002ff66) signal_pane_g3_ParamLimits

0xa3e1,	// (0x0002ff66) signal_pane_g3

0xa3f5,	// (0x0002ff7a) signal_pane_g4_ParamLimits

0xa3f5,	// (0x0002ff7a) signal_pane_g4

0x84d3,	// (0x0002e058) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x84d3,	// (0x0002e058) cell_ai5_widget_list_row_pane_t3

0x85ea,	// (0x0002e16f) cell_ituss_key_pane_t1_ParamLimits

0x85ea,	// (0x0002e16f) cell_ituss_key_pane_t1

0x2fc5,	// (0x00028b4a) form_field_data_wide_pane_vc_t2_ParamLimits

0x2fc5,	// (0x00028b4a) form_field_data_wide_pane_vc_t2

0x2fd9,	// (0x00028b5e) form_field_data_wide_pane_vc_t3_ParamLimits

0x2fd9,	// (0x00028b5e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00035373) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00035373) form_field_data_wide_pane_vc_t

0x4bd5,	// (0x0002a75a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4bd5,	// (0x0002a75a) form_field_slider_wide_pane_vc_t3

0x4cb3,	// (0x0002a838) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4cb3,	// (0x0002a838) form_field_popup_wide_pane_vc_t2

0x4cca,	// (0x0002a84f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4cca,	// (0x0002a84f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00035616) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00035616) form_field_popup_wide_pane_vc_t

0xc634,	// (0x000321b9) aid_fshwr2_btn_pane_ParamLimits

0xc646,	// (0x000321cb) aid_fshwr2_syb_pane_ParamLimits

0xc658,	// (0x000321dd) aid_fshwr2_txt_pane_ParamLimits

0xcc6f,	// (0x000327f4) fshwr2_bg_pane_ParamLimits

0xc667,	// (0x000321ec) fshwr2_func_candi_pane_ParamLimits

0xc686,	// (0x0003220b) fshwr2_hwr_syb_pane_ParamLimits

0xc6a1,	// (0x00032226) fshwr2_icf_pane_ParamLimits

0xf098,	// (0x00034c1d) list_double_graphic_pane_vc_g4_ParamLimits

0xf098,	// (0x00034c1d) list_double_graphic_pane_vc_g4

0x2c15,	// (0x0002879a) cell_ituss_key_pane_g3_ParamLimits

0x2c15,	// (0x0002879a) cell_ituss_key_pane_g3

0x2cbd,	// (0x00028842) cell_ituss_key_t5_ParamLimits

0x2cbd,	// (0x00028842) cell_ituss_key_t5

0xeac0,	// (0x00034645) popup_fep_vkbss_window_ParamLimits
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
