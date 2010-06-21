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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00059fa6 };

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
0x9b5c,	// (0x00063b02) Screen

0x9b68,	// (0x00063b0e) application_window_ParamLimits

0x9b68,	// (0x00063b0e) application_window

0x5963,	// (0x0005f909) screen_g1

0x9ba0,	// (0x00063b46) area_bottom_pane_ParamLimits

0x9ba0,	// (0x00063b46) area_bottom_pane

0xdfac,	// (0x00067f52) area_top_pane_ParamLimits

0xdfac,	// (0x00067f52) area_top_pane

0xef19,	// (0x00068ebf) main_pane_ParamLimits

0xef19,	// (0x00068ebf) main_pane

0x596d,	// (0x0005f913) misc_graphics

0xb59e,	// (0x00065544) battery_pane_ParamLimits

0xb59e,	// (0x00065544) battery_pane

0x2ebb,	// (0x0005ce61) bg_status_flat_pane_g8

0x2ec3,	// (0x0005ce69) bg_status_flat_pane_g9

0x229f,	// (0x0005c245) context_pane_ParamLimits

0x229f,	// (0x0005c245) context_pane

0xb715,	// (0x000656bb) navi_pane_ParamLimits

0xb715,	// (0x000656bb) navi_pane

0xc1e0,	// (0x00066186) signal_pane_ParamLimits

0xc1e0,	// (0x00066186) signal_pane

0x0008,

0xf879,	// (0x0006981f) bg_status_flat_pane_g

0xc270,	// (0x00066216) status_pane_g1_ParamLimits

0xc270,	// (0x00066216) status_pane_g1

0xc286,	// (0x0006622c) status_pane_g2_ParamLimits

0xc286,	// (0x0006622c) status_pane_g2

0x24d8,	// (0x0005c47e) status_pane_g3_ParamLimits

0x24d8,	// (0x0005c47e) status_pane_g3

0x0004,

0xf7a5,	// (0x0006974b) status_pane_g_ParamLimits

0xf7a5,	// (0x0006974b) status_pane_g

0xc292,	// (0x00066238) title_pane_ParamLimits

0xc292,	// (0x00066238) title_pane

0xc2f9,	// (0x0006629f) uni_indicator_pane_ParamLimits

0xc2f9,	// (0x0006629f) uni_indicator_pane

0x2107,	// (0x0005c0ad) bg_list_pane_ParamLimits

0x2107,	// (0x0005c0ad) bg_list_pane

0xadde,	// (0x00064d84) find_pane

0x26f7,	// (0x0005c69d) listscroll_app_pane_ParamLimits

0x26f7,	// (0x0005c69d) listscroll_app_pane

0x213b,	// (0x0005c0e1) listscroll_form_pane

0xade6,	// (0x00064d8c) listscroll_gen_pane_ParamLimits

0xade6,	// (0x00064d8c) listscroll_gen_pane

0x0045,	// (0x00059feb) listscroll_set_pane

0x3c14,	// (0x0005dbba) main_idle_act_pane

0x1e00,	// (0x0005bda6) main_idle_trad_pane

0x1e00,	// (0x0005bda6) main_list_empty_pane

0x212f,	// (0x0005c0d5) main_midp_pane

0x2155,	// (0x0005c0fb) main_pane_g1_ParamLimits

0x2155,	// (0x0005c0fb) main_pane_g1

0xadfa,	// (0x00064da0) popup_ai_message_window_ParamLimits

0xadfa,	// (0x00064da0) popup_ai_message_window

0xae9a,	// (0x00064e40) popup_fep_china_uni_window_ParamLimits

0xae9a,	// (0x00064e40) popup_fep_china_uni_window

0x016f,	// (0x0005a115) popup_fep_japan_candidate_window_ParamLimits

0x016f,	// (0x0005a115) popup_fep_japan_candidate_window

0x0199,	// (0x0005a13f) popup_fep_japan_predictive_window_ParamLimits

0x0199,	// (0x0005a13f) popup_fep_japan_predictive_window

0xaefa,	// (0x00064ea0) popup_find_window

0xaf17,	// (0x00064ebd) popup_grid_graphic_window_ParamLimits

0xaf17,	// (0x00064ebd) popup_grid_graphic_window

0x020a,	// (0x0005a1b0) popup_large_graphic_colour_window

0xafbb,	// (0x00064f61) popup_menu_window_ParamLimits

0xafbb,	// (0x00064f61) popup_menu_window

0xb1ab,	// (0x00065151) popup_note_image_window

0xb16b,	// (0x00065111) popup_note_wait_window_ParamLimits

0xb16b,	// (0x00065111) popup_note_wait_window

0xb1c3,	// (0x00065169) popup_note_window_ParamLimits

0xb1c3,	// (0x00065169) popup_note_window

0xb271,	// (0x00065217) popup_query_code_window_ParamLimits

0xb271,	// (0x00065217) popup_query_code_window

0x0476,	// (0x0005a41c) popup_query_data_code_window_ParamLimits

0x0476,	// (0x0005a41c) popup_query_data_code_window

0xb2b1,	// (0x00065257) popup_query_data_window_ParamLimits

0xb2b1,	// (0x00065257) popup_query_data_window

0xb345,	// (0x000652eb) popup_query_sat_info_window_ParamLimits

0xb345,	// (0x000652eb) popup_query_sat_info_window

0xb3ee,	// (0x00065394) popup_snote_single_graphic_window_ParamLimits

0xb3ee,	// (0x00065394) popup_snote_single_graphic_window

0xb3ee,	// (0x00065394) popup_snote_single_text_window_ParamLimits

0xb3ee,	// (0x00065394) popup_snote_single_text_window

0x0511,	// (0x0005a4b7) popup_sub_window_general

0x0657,	// (0x0005a5fd) popup_window_general_ParamLimits

0x0657,	// (0x0005a5fd) popup_window_general

0x2163,	// (0x0005c109) power_save_pane

0xac3e,	// (0x00064be4) control_pane_g1_ParamLimits

0xac3e,	// (0x00064be4) control_pane_g1

0xac67,	// (0x00064c0d) control_pane_g2_ParamLimits

0xac67,	// (0x00064c0d) control_pane_g2

0x20ca,	// (0x0005c070) control_pane_g3_ParamLimits

0x20ca,	// (0x0005c070) control_pane_g3

0x0007,

0xf78d,	// (0x00069733) control_pane_g_ParamLimits

0xf78d,	// (0x00069733) control_pane_g

0xaccd,	// (0x00064c73) control_pane_t1_ParamLimits

0xaccd,	// (0x00064c73) control_pane_t1

0xad33,	// (0x00064cd9) control_pane_t2_ParamLimits

0xad33,	// (0x00064cd9) control_pane_t2

0x0002,

0xf79e,	// (0x00069744) control_pane_t_ParamLimits

0xf79e,	// (0x00069744) control_pane_t

0xab97,	// (0x00064b3d) navi_navi_volume_pane_cp1

0xab9f,	// (0x00064b45) status_small_icon_pane

0x1fff,	// (0x0005bfa5) status_small_pane_g1_ParamLimits

0x1fff,	// (0x0005bfa5) status_small_pane_g1

0xaba7,	// (0x00064b4d) status_small_pane_g2_ParamLimits

0xaba7,	// (0x00064b4d) status_small_pane_g2

0xabb3,	// (0x00064b59) status_small_pane_g3_ParamLimits

0xabb3,	// (0x00064b59) status_small_pane_g3

0xabbf,	// (0x00064b65) status_small_pane_g4_ParamLimits

0xabbf,	// (0x00064b65) status_small_pane_g4

0xabcb,	// (0x00064b71) status_small_pane_g5_ParamLimits

0xabcb,	// (0x00064b71) status_small_pane_g5

0xabd9,	// (0x00064b7f) status_small_pane_g6_ParamLimits

0xabd9,	// (0x00064b7f) status_small_pane_g6

0x0007,

0xf77c,	// (0x00069722) status_small_pane_g_ParamLimits

0xf77c,	// (0x00069722) status_small_pane_g

0xac08,	// (0x00064bae) status_small_pane_t1

0xac2a,	// (0x00064bd0) status_small_wait_pane_ParamLimits

0xac2a,	// (0x00064bd0) status_small_wait_pane

0xa978,	// (0x0006491e) aid_levels_signal_ParamLimits

0xa978,	// (0x0006491e) aid_levels_signal

0xa990,	// (0x00064936) signal_pane_g1_ParamLimits

0xa990,	// (0x00064936) signal_pane_g1

0xa9ab,	// (0x00064951) signal_pane_g2_ParamLimits

0xa9ab,	// (0x00064951) signal_pane_g2

0x0003,

0xf70d,	// (0x000696b3) signal_pane_g_ParamLimits

0xf70d,	// (0x000696b3) signal_pane_g

0xe211,	// (0x000681b7) context_pane_g1

0x9d8c,	// (0x00063d32) title_pane_g1

0x9dcf,	// (0x00063d75) title_pane_t1

0x5983,	// (0x0005f929) title_pane_t2

0x59a9,	// (0x0005f94f) title_pane_t3

0x0002,

0xf557,	// (0x000694fd) title_pane_t

0xc321,	// (0x000662c7) aid_levels_battery_ParamLimits

0xc321,	// (0x000662c7) aid_levels_battery

0xc33d,	// (0x000662e3) battery_pane_g1_ParamLimits

0xc33d,	// (0x000662e3) battery_pane_g1

0xc35a,	// (0x00066300) battery_pane_g2_ParamLimits

0xc35a,	// (0x00066300) battery_pane_g2

0x0001,

0xf7b0,	// (0x00069756) battery_pane_g_ParamLimits

0xf7b0,	// (0x00069756) battery_pane_g

0xc55b,	// (0x00066501) uni_indicator_pane_g1

0xc571,	// (0x00066517) uni_indicator_pane_g2

0xc587,	// (0x0006652d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x000698c7) uni_indicator_pane_g

0xe55e,	// (0x00068504) navi_icon_pane_ParamLimits

0xe55e,	// (0x00068504) navi_icon_pane

0xe4a5,	// (0x0006844b) navi_midp_pane

0xe57a,	// (0x00068520) navi_navi_pane

0xe584,	// (0x0006852a) navi_text_pane_ParamLimits

0xe584,	// (0x0006852a) navi_text_pane

0x5963,	// (0x0005f909) status_small_wait_pane_g1

0x8a22,	// (0x000629c8) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x000698c2) status_small_wait_pane_g

0xc4fa,	// (0x000664a0) navi_navi_icon_text_pane

0xc502,	// (0x000664a8) navi_navi_pane_g1_ParamLimits

0xc502,	// (0x000664a8) navi_navi_pane_g1

0xc514,	// (0x000664ba) navi_navi_pane_g2_ParamLimits

0xc514,	// (0x000664ba) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00069890) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00069890) navi_navi_pane_g

0x3544,	// (0x0005d4ea) navi_navi_tabs_pane

0xc526,	// (0x000664cc) navi_navi_text_pane

0xc4fa,	// (0x000664a0) navi_navi_volume_pane

0xc4e8,	// (0x0006648e) navi_text_pane_t1

0xc4dc,	// (0x00066482) navi_icon_pane_g1

0x343b,	// (0x0005d3e1) navi_navi_text_pane_t1

0xb977,	// (0x0006591d) navi_navi_volume_pane_g1

0xb97f,	// (0x00065925) volume_small_pane

0xc438,	// (0x000663de) navi_navi_icon_text_pane_g1

0xc440,	// (0x000663e6) navi_navi_icon_text_pane_t1

0xe57a,	// (0x00068520) navi_tabs_2_long_pane

0xe57a,	// (0x00068520) navi_tabs_2_pane

0xe57a,	// (0x00068520) navi_tabs_3_long_pane

0xe57a,	// (0x00068520) navi_tabs_3_pane

0xe57a,	// (0x00068520) navi_tabs_4_pane

0xb957,	// (0x000658fd) tabs_2_active_pane_ParamLimits

0xb957,	// (0x000658fd) tabs_2_active_pane

0xb967,	// (0x0006590d) tabs_2_passive_pane_ParamLimits

0xb967,	// (0x0006590d) tabs_2_passive_pane

0xb925,	// (0x000658cb) tabs_3_active_pane_ParamLimits

0xb925,	// (0x000658cb) tabs_3_active_pane

0xb935,	// (0x000658db) tabs_3_passive_pane_ParamLimits

0xb935,	// (0x000658db) tabs_3_passive_pane

0xb946,	// (0x000658ec) tabs_3_passive_pane_cp_ParamLimits

0xb946,	// (0x000658ec) tabs_3_passive_pane_cp

0xb8e1,	// (0x00065887) tabs_4_active_pane_ParamLimits

0xb8e1,	// (0x00065887) tabs_4_active_pane

0xb8f2,	// (0x00065898) tabs_4_passive_pane_ParamLimits

0xb8f2,	// (0x00065898) tabs_4_passive_pane

0xb903,	// (0x000658a9) tabs_4_passive_pane_cp_ParamLimits

0xb903,	// (0x000658a9) tabs_4_passive_pane_cp

0xb914,	// (0x000658ba) tabs_4_passive_pane_cp2_ParamLimits

0xb914,	// (0x000658ba) tabs_4_passive_pane_cp2

0xb8bd,	// (0x00065863) tabs_2_long_active_pane_ParamLimits

0xb8bd,	// (0x00065863) tabs_2_long_active_pane

0xb8cf,	// (0x00065875) tabs_2_long_passive_pane_ParamLimits

0xb8cf,	// (0x00065875) tabs_2_long_passive_pane

0xb872,	// (0x00065818) tabs_3_long_active_pane_ParamLimits

0xb872,	// (0x00065818) tabs_3_long_active_pane

0xb88b,	// (0x00065831) tabs_3_long_passive_pane_ParamLimits

0xb88b,	// (0x00065831) tabs_3_long_passive_pane

0xb8a4,	// (0x0006584a) tabs_3_long_passive_pane_cp_ParamLimits

0xb8a4,	// (0x0006584a) tabs_3_long_passive_pane_cp

0x07d8,	// (0x0005a77e) volume_small_pane_g1

0xb821,	// (0x000657c7) volume_small_pane_g2

0xb82a,	// (0x000657d0) volume_small_pane_g3

0xb833,	// (0x000657d9) volume_small_pane_g4

0xb83c,	// (0x000657e2) volume_small_pane_g5

0xb845,	// (0x000657eb) volume_small_pane_g6

0xb84e,	// (0x000657f4) volume_small_pane_g7

0xb857,	// (0x000657fd) volume_small_pane_g8

0xb860,	// (0x00065806) volume_small_pane_g9

0xb869,	// (0x0006580f) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006985c) volume_small_pane_g

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp2_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp2

0x9e5b,	// (0x00063e01) tabs_3_active_pane_g1

0x9e63,	// (0x00063e09) tabs_3_active_pane_t1

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp2_ParamLimits

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp2

0x9e5b,	// (0x00063e01) tabs_3_passive_pane_g1

0x9e63,	// (0x00063e09) tabs_3_passive_pane_t1

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp3_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp3

0x9e75,	// (0x00063e1b) tabs_4_active_pane_g1

0x9e7d,	// (0x00063e23) tabs_4_active_pane_t1

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp3_ParamLimits

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp3

0x9e75,	// (0x00063e1b) tabs_4_1_passive_pane_g1

0x9e7d,	// (0x00063e23) tabs_4_1_passive_pane_t1

0x212f,	// (0x0005c0d5) list_highlight_pane_cp2

0x3c3a,	// (0x0005dbe0) list_set_pane_ParamLimits

0x3c3a,	// (0x0005dbe0) list_set_pane

0xc61a,	// (0x000665c0) main_pane_set_t1_ParamLimits

0xc61a,	// (0x000665c0) main_pane_set_t1

0xc63a,	// (0x000665e0) main_pane_set_t2_ParamLimits

0xc63a,	// (0x000665e0) main_pane_set_t2

0xc64e,	// (0x000665f4) main_pane_set_t3_ParamLimits

0xc64e,	// (0x000665f4) main_pane_set_t3

0xc662,	// (0x00066608) main_pane_set_t4_ParamLimits

0xc662,	// (0x00066608) main_pane_set_t4

0x0003,

0xf986,	// (0x0006992c) main_pane_set_t_ParamLimits

0xf986,	// (0x0006992c) main_pane_set_t

0xc676,	// (0x0006661c) setting_code_pane

0x3d62,	// (0x0005dd08) setting_slider_graphic_pane

0x3d62,	// (0x0005dd08) setting_slider_pane

0x3d62,	// (0x0005dd08) setting_text_pane

0x3d62,	// (0x0005dd08) setting_volume_pane

0xf028,	// (0x00068fce) volume_set_pane

0x59bb,	// (0x0005f961) bg_set_opt_pane_cp

0xf032,	// (0x00068fd8) setting_slider_pane_t1

0xf04b,	// (0x00068ff1) setting_slider_pane_t2

0xf065,	// (0x0006900b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00069504) setting_slider_pane_t

0xf07d,	// (0x00069023) slider_set_pane

0x596d,	// (0x0005f913) bg_set_opt_pane_cp2

0x59c9,	// (0x0005f96f) setting_slider_graphic_pane_g1

0xf093,	// (0x00069039) setting_slider_graphic_pane_t1

0xf0a3,	// (0x00069049) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006950b) setting_slider_graphic_pane_t

0xf0b3,	// (0x00069059) slider_set_pane_cp

0x596d,	// (0x0005f913) input_focus_pane_cp1

0x3bfb,	// (0x0005dba1) list_set_text_pane

0x5963,	// (0x0005f909) setting_text_pane_g1

0x596d,	// (0x0005f913) input_focus_pane_cp2

0x5963,	// (0x0005f909) setting_code_pane_g1

0x59d2,	// (0x0005f978) setting_code_pane_t1

0xe040,	// (0x00067fe6) set_text_pane_t1_ParamLimits

0xe040,	// (0x00067fe6) set_text_pane_t1

0x8db7,	// (0x00062d5d) set_opt_bg_pane_g1

0x8dbf,	// (0x00062d65) set_opt_bg_pane_g2

0x3bd3,	// (0x0005db79) set_opt_bg_pane_g3

0x8dcf,	// (0x00062d75) set_opt_bg_pane_g4

0x8dd7,	// (0x00062d7d) set_opt_bg_pane_g5

0x8ddf,	// (0x00062d85) set_opt_bg_pane_g6

0x3bdd,	// (0x0005db83) set_opt_bg_pane_g7

0x3be7,	// (0x0005db8d) set_opt_bg_pane_g8

0x3bf1,	// (0x0005db97) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00069919) set_opt_bg_pane_g

0x3bc6,	// (0x0005db6c) slider_set_pane_g1

0x09e4,	// (0x0005a98a) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006990a) slider_set_pane_g

0x0944,	// (0x0005a8ea) volume_set_pane_g1

0x094e,	// (0x0005a8f4) volume_set_pane_g2

0x0958,	// (0x0005a8fe) volume_set_pane_g3

0x0962,	// (0x0005a908) volume_set_pane_g4

0x096c,	// (0x0005a912) volume_set_pane_g5

0x0976,	// (0x0005a91c) volume_set_pane_g6

0x0980,	// (0x0005a926) volume_set_pane_g7

0x098a,	// (0x0005a930) volume_set_pane_g8

0x0994,	// (0x0005a93a) volume_set_pane_g9

0x099e,	// (0x0005a944) volume_set_pane_g10

0x0009,

0xf93c,	// (0x000698e2) volume_set_pane_g

0x9e8f,	// (0x00063e35) indicator_pane_ParamLimits

0x9e8f,	// (0x00063e35) indicator_pane

0x9ebb,	// (0x00063e61) main_idle_pane_g2_ParamLimits

0x9ebb,	// (0x00063e61) main_idle_pane_g2

0x9ef3,	// (0x00063e99) main_pane_idle_g1_ParamLimits

0x9ef3,	// (0x00063e99) main_pane_idle_g1

0x59e0,	// (0x0005f986) popup_clock_digital_analogue_window_ParamLimits

0x59e0,	// (0x0005f986) popup_clock_digital_analogue_window

0x9f1d,	// (0x00063ec3) soft_indicator_pane_ParamLimits

0x9f1d,	// (0x00063ec3) soft_indicator_pane

0x9f39,	// (0x00063edf) wallpaper_pane_ParamLimits

0x9f39,	// (0x00063edf) wallpaper_pane

0x5963,	// (0x0005f909) wallpaper_pane_g1

0x9f4b,	// (0x00063ef1) indicator_pane_g1_ParamLimits

0x9f4b,	// (0x00063ef1) indicator_pane_g1

0x403d,	// (0x0005dfe3) navi_navi_icon_text_pane_srt_g1

0x8774,	// (0x0006271a) soft_indicator_pane_t1

0x878e,	// (0x00062734) aid_ps_area_pane

0x9f64,	// (0x00063f0a) aid_ps_clock_pane

0x879f,	// (0x00062745) aid_ps_indicator_pane

0x87ab,	// (0x00062751) indicator_ps_pane_ParamLimits

0x87ab,	// (0x00062751) indicator_ps_pane

0x87ba,	// (0x00062760) power_save_pane_g1_ParamLimits

0x87ba,	// (0x00062760) power_save_pane_g1

0x87c6,	// (0x0006276c) power_save_pane_g2_ParamLimits

0x87c6,	// (0x0006276c) power_save_pane_g2

0xdf8c,	// (0x00067f32) aid_navinavi_width_pane

0x878e,	// (0x00062734) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00069510) power_save_pane_g_ParamLimits

0xf56a,	// (0x00069510) power_save_pane_g

0x87d4,	// (0x0006277a) power_save_pane_t1_ParamLimits

0x87d4,	// (0x0006277a) power_save_pane_t1

0x9f64,	// (0x00063f0a) aid_ps_clock_pane_ParamLimits

0x879f,	// (0x00062745) aid_ps_indicator_pane_ParamLimits

0x87e6,	// (0x0006278c) power_save_pane_t4_ParamLimits

0x87e6,	// (0x0006278c) power_save_pane_t4

0x0001,

0xf56f,	// (0x00069515) power_save_pane_t_ParamLimits

0xf56f,	// (0x00069515) power_save_pane_t

0x8810,	// (0x000627b6) power_save_t3_ParamLimits

0x8810,	// (0x000627b6) power_save_t3

0x87fb,	// (0x000627a1) power_save_t2_ParamLimits

0x87fb,	// (0x000627a1) power_save_t2

0x8825,	// (0x000627cb) indicator_ps_pane_g1

0x9f72,	// (0x00063f18) ai_gene_pane_ParamLimits

0x9f72,	// (0x00063f18) ai_gene_pane

0x9f89,	// (0x00063f2f) ai_links_pane_ParamLimits

0x9f89,	// (0x00063f2f) ai_links_pane

0x9fa1,	// (0x00063f47) indicator_pane_cp1_ParamLimits

0x9fa1,	// (0x00063f47) indicator_pane_cp1

0x9fb0,	// (0x00063f56) main_pane_idle_g1_cp_ParamLimits

0x9fb0,	// (0x00063f56) main_pane_idle_g1_cp

0x882e,	// (0x000627d4) popup_ai_links_title_window

0x9fc8,	// (0x00063f6e) soft_indicator_pane_cp1_ParamLimits

0x9fc8,	// (0x00063f6e) soft_indicator_pane_cp1

0x37f3,	// (0x0005d799) ai_links_pane_g1

0x37fc,	// (0x0005d7a2) grid_ai_links_pane

0xc552,	// (0x000664f8) ai_gene_pane_1

0x37e1,	// (0x0005d787) ai_gene_pane_2

0x37ea,	// (0x0005d790) list_highlight_pane_cp4

0xc52e,	// (0x000664d4) cell_ai_link_pane_ParamLimits

0xc52e,	// (0x000664d4) cell_ai_link_pane

0x37b0,	// (0x0005d756) cell_ai_link_pane_g1

0x8a22,	// (0x000629c8) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x000698bd) cell_ai_link_pane_g

0x596d,	// (0x0005f913) grid_highlight_cp2

0x596d,	// (0x0005f913) bg_popup_sub_pane_cp1

0x8845,	// (0x000627eb) popup_ai_links_title_window_t1

0x36fc,	// (0x0005d6a2) ai_gene_pane_1_g1_ParamLimits

0x36fc,	// (0x0005d6a2) ai_gene_pane_1_g1

0x3708,	// (0x0005d6ae) ai_gene_pane_1_g2_ParamLimits

0x3708,	// (0x0005d6ae) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000698b3) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000698b3) ai_gene_pane_1_g

0x3715,	// (0x0005d6bb) ai_gene_pane_1_t1_ParamLimits

0x3715,	// (0x0005d6bb) ai_gene_pane_1_t1

0x3749,	// (0x0005d6ef) grid_ai_soft_ind_pane

0x36e7,	// (0x0005d68d) ai_gene_pane_2_t1_ParamLimits

0x36e7,	// (0x0005d68d) ai_gene_pane_2_t1

0x9fdc,	// (0x00063f82) main_pane_empty_t1_ParamLimits

0x9fdc,	// (0x00063f82) main_pane_empty_t1

0x9ff4,	// (0x00063f9a) main_pane_empty_t2_ParamLimits

0x9ff4,	// (0x00063f9a) main_pane_empty_t2

0xa009,	// (0x00063faf) main_pane_empty_t3_ParamLimits

0xa009,	// (0x00063faf) main_pane_empty_t3

0xa01b,	// (0x00063fc1) main_pane_empty_t4_ParamLimits

0xa01b,	// (0x00063fc1) main_pane_empty_t4

0xa02d,	// (0x00063fd3) main_pane_empty_t5_ParamLimits

0xa02d,	// (0x00063fd3) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006951a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006951a) main_pane_empty_t

0x8e08,	// (0x00062dae) bg_popup_window_pane_ParamLimits

0x8e08,	// (0x00062dae) bg_popup_window_pane

0x3449,	// (0x0005d3ef) find_popup_pane_cp2_ParamLimits

0x3449,	// (0x0005d3ef) find_popup_pane_cp2

0x3455,	// (0x0005d3fb) heading_pane_ParamLimits

0x3455,	// (0x0005d3fb) heading_pane

0x596d,	// (0x0005f913) bg_popup_sub_pane

0xc45d,	// (0x00066403) bg_popup_window_pane_g1_ParamLimits

0xc45d,	// (0x00066403) bg_popup_window_pane_g1

0xc46c,	// (0x00066412) bg_popup_window_pane_g2_ParamLimits

0xc46c,	// (0x00066412) bg_popup_window_pane_g2

0xc478,	// (0x0006641e) bg_popup_window_pane_g3_ParamLimits

0xc478,	// (0x0006641e) bg_popup_window_pane_g3

0xc484,	// (0x0006642a) bg_popup_window_pane_g4_ParamLimits

0xc484,	// (0x0006642a) bg_popup_window_pane_g4

0xc493,	// (0x00066439) bg_popup_window_pane_g5_ParamLimits

0xc493,	// (0x00066439) bg_popup_window_pane_g5

0xc4a3,	// (0x00066449) bg_popup_window_pane_g6_ParamLimits

0xc4a3,	// (0x00066449) bg_popup_window_pane_g6

0xc4af,	// (0x00066455) bg_popup_window_pane_g7_ParamLimits

0xc4af,	// (0x00066455) bg_popup_window_pane_g7

0xc4be,	// (0x00066464) bg_popup_window_pane_g8_ParamLimits

0xc4be,	// (0x00066464) bg_popup_window_pane_g8

0xc4cd,	// (0x00066473) bg_popup_window_pane_g9_ParamLimits

0xc4cd,	// (0x00066473) bg_popup_window_pane_g9

0x342f,	// (0x0005d3d5) bg_popup_window_pane_g10_ParamLimits

0x342f,	// (0x0005d3d5) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006987b) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006987b) bg_popup_window_pane_g

0x3358,	// (0x0005d2fe) bg_popup_heading_pane_ParamLimits

0x3358,	// (0x0005d2fe) bg_popup_heading_pane

0x0ab8,	// (0x0005aa5e) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ab8,	// (0x0005aa5e) tabs_4_passive_pane_cp_srt

0x0aca,	// (0x0005aa70) tabs_4_passive_pane_srt_ParamLimits

0x336c,	// (0x0005d312) heading_pane_g2

0x0aca,	// (0x0005aa70) tabs_4_passive_pane_srt

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp3_srt

0x3374,	// (0x0005d31a) heading_pane_t1_ParamLimits

0x3374,	// (0x0005d31a) heading_pane_t1

0x338b,	// (0x0005d331) heading_pane_t2_ParamLimits

0x338b,	// (0x0005d331) heading_pane_t2

0x0001,

0xf8d0,	// (0x00069876) heading_pane_t_ParamLimits

0xf8d0,	// (0x00069876) heading_pane_t

0x2e83,	// (0x0005ce29) bg_popup_heading_pane_g1

0x2f32,	// (0x0005ced8) bg_popup_heading_pane_g2

0x2f3c,	// (0x0005cee2) bg_popup_heading_pane_g3

0x2f46,	// (0x0005ceec) bg_popup_heading_pane_g4

0x2f50,	// (0x0005cef6) bg_popup_heading_pane_g5

0x2f5a,	// (0x0005cf00) bg_popup_heading_pane_g6

0x2f62,	// (0x0005cf08) bg_popup_heading_pane_g7

0x2f6a,	// (0x0005cf10) bg_popup_heading_pane_g8

0x2f74,	// (0x0005cf1a) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00069832) bg_popup_heading_pane_g

0x266b,	// (0x0005c611) bg_popup_sub_pane_g1

0x267b,	// (0x0005c621) bg_popup_sub_pane_g2

0x2673,	// (0x0005c619) bg_popup_sub_pane_g3

0x268b,	// (0x0005c631) bg_popup_sub_pane_g4

0x2683,	// (0x0005c629) bg_popup_sub_pane_g5

0x2693,	// (0x0005c639) bg_popup_sub_pane_g6

0x269b,	// (0x0005c641) bg_popup_sub_pane_g7

0x26ab,	// (0x0005c651) bg_popup_sub_pane_g8

0x26a3,	// (0x0005c649) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006980c) bg_popup_sub_pane_g

0x59f7,	// (0x0005f99d) bg_popup_window_pane_cp5_ParamLimits

0x59f7,	// (0x0005f99d) bg_popup_window_pane_cp5

0x8862,	// (0x00062808) popup_note_window_g1_ParamLimits

0x8862,	// (0x00062808) popup_note_window_g1

0x886e,	// (0x00062814) popup_note_window_t1_ParamLimits

0x886e,	// (0x00062814) popup_note_window_t1

0x8884,	// (0x0006282a) popup_note_window_t2_ParamLimits

0x8884,	// (0x0006282a) popup_note_window_t2

0x889a,	// (0x00062840) popup_note_window_t3_ParamLimits

0x889a,	// (0x00062840) popup_note_window_t3

0x88b0,	// (0x00062856) popup_note_window_t4_ParamLimits

0x88b0,	// (0x00062856) popup_note_window_t4

0x88d8,	// (0x0006287e) popup_note_window_t5_ParamLimits

0x88d8,	// (0x0006287e) popup_note_window_t5

0x0004,

0xf57f,	// (0x00069525) popup_note_window_t_ParamLimits

0xf57f,	// (0x00069525) popup_note_window_t

0x8922,	// (0x000628c8) bg_popup_window_pane_cp6_ParamLimits

0x8922,	// (0x000628c8) bg_popup_window_pane_cp6

0x2dff,	// (0x0005cda5) popup_note_image_window_g1_ParamLimits

0x2dff,	// (0x0005cda5) popup_note_image_window_g1

0x2e0b,	// (0x0005cdb1) popup_note_image_window_g2_ParamLimits

0x2e0b,	// (0x0005cdb1) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00069800) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00069800) popup_note_image_window_g

0x2e24,	// (0x0005cdca) popup_note_image_window_t1_ParamLimits

0x2e24,	// (0x0005cdca) popup_note_image_window_t1

0x2e3d,	// (0x0005cde3) popup_note_image_window_t2_ParamLimits

0x2e3d,	// (0x0005cde3) popup_note_image_window_t2

0x2e56,	// (0x0005cdfc) popup_note_image_window_t3_ParamLimits

0x2e56,	// (0x0005cdfc) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00069805) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00069805) popup_note_image_window_t

0x2cbf,	// (0x0005cc65) bg_popup_window_pane_cp7_ParamLimits

0x2cbf,	// (0x0005cc65) bg_popup_window_pane_cp7

0x2cef,	// (0x0005cc95) popup_note_wait_window_g1_ParamLimits

0x2cef,	// (0x0005cc95) popup_note_wait_window_g1

0x2cfb,	// (0x0005cca1) popup_note_wait_window_g2_ParamLimits

0x2cfb,	// (0x0005cca1) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x000697ee) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x000697ee) popup_note_wait_window_g

0x2d13,	// (0x0005ccb9) popup_note_wait_window_t1_ParamLimits

0x2d13,	// (0x0005ccb9) popup_note_wait_window_t1

0x2d3a,	// (0x0005cce0) popup_note_wait_window_t2_ParamLimits

0x2d3a,	// (0x0005cce0) popup_note_wait_window_t2

0x2d58,	// (0x0005ccfe) popup_note_wait_window_t3_ParamLimits

0x2d58,	// (0x0005ccfe) popup_note_wait_window_t3

0x2d6b,	// (0x0005cd11) popup_note_wait_window_t4_ParamLimits

0x2d6b,	// (0x0005cd11) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x000697f5) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x000697f5) popup_note_wait_window_t

0x2d90,	// (0x0005cd36) wait_bar_pane_ParamLimits

0x2d90,	// (0x0005cd36) wait_bar_pane

0x596d,	// (0x0005f913) wait_anim_pane

0x596d,	// (0x0005f913) wait_border_pane

0x5963,	// (0x0005f909) wait_anim_pane_g1

0x5963,	// (0x0005f909) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000696ae) wait_anim_pane_g

0x2c63,	// (0x0005cc09) wait_border_pane_g1

0x2c6e,	// (0x0005cc14) wait_border_pane_g2

0x2c77,	// (0x0005cc1d) wait_border_pane_g3

0x0002,

0xf841,	// (0x000697e7) wait_border_pane_g

0x2acd,	// (0x0005ca73) bg_popup_window_pane_cp16_ParamLimits

0x2acd,	// (0x0005ca73) bg_popup_window_pane_cp16

0x2bcd,	// (0x0005cb73) indicator_popup_pane_cp4_ParamLimits

0x2bcd,	// (0x0005cb73) indicator_popup_pane_cp4

0x2be1,	// (0x0005cb87) popup_query_data_window_t1_ParamLimits

0x2be1,	// (0x0005cb87) popup_query_data_window_t1

0x2bf3,	// (0x0005cb99) popup_query_data_window_t2_ParamLimits

0x2bf3,	// (0x0005cb99) popup_query_data_window_t2

0x2c0c,	// (0x0005cbb2) popup_query_data_window_t3_ParamLimits

0x2c0c,	// (0x0005cbb2) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x000697e0) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x000697e0) popup_query_data_window_t

0x2c26,	// (0x0005cbcc) query_popup_data_pane_ParamLimits

0x2c26,	// (0x0005cbcc) query_popup_data_pane

0x2c3a,	// (0x0005cbe0) query_popup_data_pane_cp1_ParamLimits

0x2c3a,	// (0x0005cbe0) query_popup_data_pane_cp1

0x2acd,	// (0x0005ca73) bg_popup_window_pane_cp10_ParamLimits

0x2acd,	// (0x0005ca73) bg_popup_window_pane_cp10

0x2aff,	// (0x0005caa5) indicator_popup_pane_ParamLimits

0x2aff,	// (0x0005caa5) indicator_popup_pane

0x2b21,	// (0x0005cac7) popup_query_code_window_t1_ParamLimits

0x2b21,	// (0x0005cac7) popup_query_code_window_t1

0x2b3b,	// (0x0005cae1) popup_query_code_window_t2_ParamLimits

0x2b3b,	// (0x0005cae1) popup_query_code_window_t2

0x2b84,	// (0x0005cb2a) popup_query_code_window_t3_ParamLimits

0x2b84,	// (0x0005cb2a) popup_query_code_window_t3

0x0002,

0xf833,	// (0x000697d9) popup_query_code_window_t_ParamLimits

0xf833,	// (0x000697d9) popup_query_code_window_t

0x2bb3,	// (0x0005cb59) query_popup_pane_ParamLimits

0x2bb3,	// (0x0005cb59) query_popup_pane

0x8922,	// (0x000628c8) bg_popup_window_pane_cp15_ParamLimits

0x8922,	// (0x000628c8) bg_popup_window_pane_cp15

0x8942,	// (0x000628e8) indicator_popup_pane_cp1_ParamLimits

0x8942,	// (0x000628e8) indicator_popup_pane_cp1

0x8955,	// (0x000628fb) indicator_popup_pane_cp2_ParamLimits

0x8955,	// (0x000628fb) indicator_popup_pane_cp2

0x8970,	// (0x00062916) popup_query_data_code_window_g1_ParamLimits

0x8970,	// (0x00062916) popup_query_data_code_window_g1

0x8983,	// (0x00062929) popup_query_data_code_window_t1_ParamLimits

0x8983,	// (0x00062929) popup_query_data_code_window_t1

0x8995,	// (0x0006293b) popup_query_data_code_window_t2_ParamLimits

0x8995,	// (0x0006293b) popup_query_data_code_window_t2

0x89a7,	// (0x0006294d) popup_query_data_code_window_t3_ParamLimits

0x89a7,	// (0x0006294d) popup_query_data_code_window_t3

0x89bd,	// (0x00062963) popup_query_data_code_window_t4_ParamLimits

0x89bd,	// (0x00062963) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00069530) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00069530) popup_query_data_code_window_t

0x06c5,	// (0x0005a66b) list_single_midp_graphic_pane_g3

0x89d7,	// (0x0006297d) query_popup_data_pane_cp2_ParamLimits

0x89ea,	// (0x00062990) query_popup_pane_cp2_ParamLimits

0x89ea,	// (0x00062990) query_popup_pane_cp2

0x596d,	// (0x0005f913) bg_popup_window_pane_cp11

0x2ab9,	// (0x0005ca5f) heading_pane_cp5

0x8a83,	// (0x00062a29) listscroll_popup_info_pane

0x596d,	// (0x0005f913) input_focus_pane_cp3

0x8a05,	// (0x000629ab) query_popup_pane_t1

0x8a13,	// (0x000629b9) list_popup_info_pane_ParamLimits

0x8a13,	// (0x000629b9) list_popup_info_pane

0x8a22,	// (0x000629c8) listscroll_popup_info_pane_g1

0x8a2a,	// (0x000629d0) scroll_pane_cp7

0x8a34,	// (0x000629da) popup_info_list_pane_t1_ParamLimits

0x8a34,	// (0x000629da) popup_info_list_pane_t1

0x8a4e,	// (0x000629f4) popup_info_list_pane_t2_ParamLimits

0x8a4e,	// (0x000629f4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00069539) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00069539) popup_info_list_pane_t

0x596d,	// (0x0005f913) bg_popup_window_pane_cp12

0x4057,	// (0x0005dffd) find_popup_pane

0x59bb,	// (0x0005f961) bg_popup_window_pane_cp3

0x8a68,	// (0x00062a0e) heading_pane_cp3

0x8a74,	// (0x00062a1a) listscroll_popup_graphic_pane

0x596d,	// (0x0005f913) bg_popup_window_pane_cp4

0xa08f,	// (0x00064035) heading_pane_cp4

0x8a83,	// (0x00062a29) listscroll_popup_colour_pane

0xa099,	// (0x0006403f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa099,	// (0x0006403f) cell_large_graphic_colour_none_popup_pane

0xa0ad,	// (0x00064053) grid_large_graphic_colour_popup_pane_ParamLimits

0xa0ad,	// (0x00064053) grid_large_graphic_colour_popup_pane

0xa0d1,	// (0x00064077) listscroll_popup_colour_pane_g1_ParamLimits

0xa0d1,	// (0x00064077) listscroll_popup_colour_pane_g1

0xa0e8,	// (0x0006408e) listscroll_popup_colour_pane_g2_ParamLimits

0xa0e8,	// (0x0006408e) listscroll_popup_colour_pane_g2

0xa0ff,	// (0x000640a5) listscroll_popup_colour_pane_g3_ParamLimits

0xa0ff,	// (0x000640a5) listscroll_popup_colour_pane_g3

0xa10f,	// (0x000640b5) listscroll_popup_colour_pane_g4_ParamLimits

0xa10f,	// (0x000640b5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006953e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006953e) listscroll_popup_colour_pane_g

0x8a8b,	// (0x00062a31) scroll_pane_cp6_ParamLimits

0x8a8b,	// (0x00062a31) scroll_pane_cp6

0xa11f,	// (0x000640c5) cell_large_graphic_colour_popup_pane_ParamLimits

0xa11f,	// (0x000640c5) cell_large_graphic_colour_popup_pane

0x8a9d,	// (0x00062a43) cell_large_graphic_colour_none_popup_pane_t1

0x596d,	// (0x0005f913) grid_highlight_pane_cp5

0x8aac,	// (0x00062a52) cell_large_graphic_colour_popup_pane_g1

0x8ab4,	// (0x00062a5a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00069547) cell_large_graphic_colour_popup_pane_g

0x8abc,	// (0x00062a62) cell_large_graphic_colour_popup_pane_g2_copy1

0x8ac5,	// (0x00062a6b) grid_highlight_pane_cp4

0x8acd,	// (0x00062a73) bg_popup_window_pane_cp8_ParamLimits

0x8acd,	// (0x00062a73) bg_popup_window_pane_cp8

0x8ae8,	// (0x00062a8e) popup_snote_single_text_window_g1_ParamLimits

0x8ae8,	// (0x00062a8e) popup_snote_single_text_window_g1

0x8afa,	// (0x00062aa0) popup_snote_single_text_window_t1_ParamLimits

0x8afa,	// (0x00062aa0) popup_snote_single_text_window_t1

0x8b0d,	// (0x00062ab3) popup_snote_single_text_window_t2_ParamLimits

0x8b0d,	// (0x00062ab3) popup_snote_single_text_window_t2

0x8b20,	// (0x00062ac6) popup_snote_single_text_window_t3_ParamLimits

0x8b20,	// (0x00062ac6) popup_snote_single_text_window_t3

0x8b59,	// (0x00062aff) popup_snote_single_text_window_t4_ParamLimits

0x8b59,	// (0x00062aff) popup_snote_single_text_window_t4

0x8b8d,	// (0x00062b33) popup_snote_single_text_window_t5_ParamLimits

0x8b8d,	// (0x00062b33) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006954c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006954c) popup_snote_single_text_window_t

0x8bbc,	// (0x00062b62) bg_popup_window_pane_cp9_ParamLimits

0x8bbc,	// (0x00062b62) bg_popup_window_pane_cp9

0x8ae8,	// (0x00062a8e) popup_snote_single_graphic_window_g1_ParamLimits

0x8ae8,	// (0x00062a8e) popup_snote_single_graphic_window_g1

0x8bca,	// (0x00062b70) popup_snote_single_graphic_window_g2_ParamLimits

0x8bca,	// (0x00062b70) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00069557) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00069557) popup_snote_single_graphic_window_g

0x8bd6,	// (0x00062b7c) popup_snote_single_graphic_window_t1_ParamLimits

0x8bd6,	// (0x00062b7c) popup_snote_single_graphic_window_t1

0x8be9,	// (0x00062b8f) popup_snote_single_graphic_window_t2_ParamLimits

0x8be9,	// (0x00062b8f) popup_snote_single_graphic_window_t2

0x8bfc,	// (0x00062ba2) popup_snote_single_graphic_window_t3_ParamLimits

0x8bfc,	// (0x00062ba2) popup_snote_single_graphic_window_t3

0x8c35,	// (0x00062bdb) popup_snote_single_graphic_window_t4_ParamLimits

0x8c35,	// (0x00062bdb) popup_snote_single_graphic_window_t4

0x8c69,	// (0x00062c0f) popup_snote_single_graphic_window_t5_ParamLimits

0x8c69,	// (0x00062c0f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006955c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006955c) popup_snote_single_graphic_window_t

0x3f95,	// (0x0005df3b) grid_graphic_popup_pane_ParamLimits

0x3f95,	// (0x0005df3b) grid_graphic_popup_pane

0x3fc3,	// (0x0005df69) listscroll_popup_graphic_pane_g1_ParamLimits

0x3fc3,	// (0x0005df69) listscroll_popup_graphic_pane_g1

0xc7c4,	// (0x0006676a) listscroll_popup_graphic_pane_g2_ParamLimits

0xc7c4,	// (0x0006676a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00069956) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00069956) listscroll_popup_graphic_pane_g

0x3feb,	// (0x0005df91) scroll_pane_cp5

0xc763,	// (0x00066709) cell_graphic_popup_pane_ParamLimits

0xc763,	// (0x00066709) cell_graphic_popup_pane

0x3f0b,	// (0x0005deb1) cell_graphic_popup_pane_g1

0x3f13,	// (0x0005deb9) cell_graphic_popup_pane_g2

0x8abc,	// (0x00062a62) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006994f) cell_graphic_popup_pane_g

0x3f1c,	// (0x0005dec2) cell_graphic_popup_pane_t2

0x8ac5,	// (0x00062a6b) grid_highlight_pane_cp3

0x8caa,	// (0x00062c50) list_gen_pane_ParamLimits

0x8caa,	// (0x00062c50) list_gen_pane

0x8cd2,	// (0x00062c78) scroll_pane

0xc71a,	// (0x000666c0) bg_list_pane_g1_ParamLimits

0xc71a,	// (0x000666c0) bg_list_pane_g1

0x3e80,	// (0x0005de26) bg_list_pane_g2_ParamLimits

0x3e80,	// (0x0005de26) bg_list_pane_g2

0x3e95,	// (0x0005de3b) bg_list_pane_g3_ParamLimits

0x3e95,	// (0x0005de3b) bg_list_pane_g3

0x3ea9,	// (0x0005de4f) bg_list_pane_g4_ParamLimits

0x3ea9,	// (0x0005de4f) bg_list_pane_g4

0xc737,	// (0x000666dd) bg_list_pane_g5_ParamLimits

0xc737,	// (0x000666dd) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00069944) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00069944) bg_list_pane_g

0xc6b4,	// (0x0006665a) list_double2_graphic_large_graphic_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double2_graphic_large_graphic_pane

0xc6b4,	// (0x0006665a) list_double2_graphic_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double2_graphic_pane

0xc6b4,	// (0x0006665a) list_double2_large_graphic_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double2_large_graphic_pane

0xc6b4,	// (0x0006665a) list_double2_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double2_pane

0xc6b4,	// (0x0006665a) list_double_graphic_heading_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_graphic_heading_pane

0xc6b4,	// (0x0006665a) list_double_graphic_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_graphic_pane

0xc6b4,	// (0x0006665a) list_double_heading_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_heading_pane

0xc6b4,	// (0x0006665a) list_double_large_graphic_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_large_graphic_pane

0xc6b4,	// (0x0006665a) list_double_number_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_number_pane

0xc6b4,	// (0x0006665a) list_double_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_pane

0xc6b4,	// (0x0006665a) list_double_time_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_double_time_pane

0xc6b4,	// (0x0006665a) list_setting_number_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_setting_number_pane

0xc6b4,	// (0x0006665a) list_setting_pane_ParamLimits

0xc6b4,	// (0x0006665a) list_setting_pane

0xc6c8,	// (0x0006666e) list_single_2graphic_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_2graphic_pane

0xc6c8,	// (0x0006666e) list_single_graphic_heading_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_graphic_heading_pane

0xc6c8,	// (0x0006666e) list_single_graphic_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_graphic_pane

0xc6c8,	// (0x0006666e) list_single_heading_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_heading_pane

0xc6c8,	// (0x0006666e) list_single_large_graphic_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_large_graphic_pane

0xc6c8,	// (0x0006666e) list_single_number_heading_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_number_heading_pane

0xc6c8,	// (0x0006666e) list_single_number_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_number_pane

0xc6c8,	// (0x0006666e) list_single_pane_ParamLimits

0xc6c8,	// (0x0006666e) list_single_pane

0x596d,	// (0x0005f913) list_highlight_pane_cp1

0x1d71,	// (0x0005bd17) list_single_pane_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_single_pane_g1

0x2603,	// (0x0005c5a9) list_single_pane_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00069578) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00069578) list_single_pane_g

0xe6f8,	// (0x0006869e) list_single_pane_t1_ParamLimits

0xe6f8,	// (0x0006869e) list_single_pane_t1

0x1d71,	// (0x0005bd17) list_single_number_pane_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_single_number_pane_g1

0x2603,	// (0x0005c5a9) list_single_number_pane_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00069578) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00069578) list_single_number_pane_g

0xe629,	// (0x000685cf) list_single_number_pane_t1_ParamLimits

0xe629,	// (0x000685cf) list_single_number_pane_t1

0xe6e6,	// (0x0006868c) list_single_number_pane_t2_ParamLimits

0xe6e6,	// (0x0006868c) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00069905) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00069905) list_single_number_pane_t

0xa14a,	// (0x000640f0) list_single_graphic_pane_g1_ParamLimits

0xa14a,	// (0x000640f0) list_single_graphic_pane_g1

0x1d71,	// (0x0005bd17) list_single_graphic_pane_g2_ParamLimits

0x1d71,	// (0x0005bd17) list_single_graphic_pane_g2

0x2603,	// (0x0005c5a9) list_single_graphic_pane_g3_ParamLimits

0x2603,	// (0x0005c5a9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00069567) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00069567) list_single_graphic_pane_g

0xa156,	// (0x000640fc) list_single_graphic_pane_t1_ParamLimits

0xa156,	// (0x000640fc) list_single_graphic_pane_t1

0xa16c,	// (0x00064112) list_single_heading_pane_g1_ParamLimits

0xa16c,	// (0x00064112) list_single_heading_pane_g1

0x2603,	// (0x0005c5a9) list_single_heading_pane_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006956e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006956e) list_single_heading_pane_g

0xa17f,	// (0x00064125) list_single_heading_pane_t1_ParamLimits

0xa17f,	// (0x00064125) list_single_heading_pane_t1

0xa195,	// (0x0006413b) list_single_heading_pane_t2_ParamLimits

0xa195,	// (0x0006413b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00069573) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00069573) list_single_heading_pane_t

0x1d71,	// (0x0005bd17) list_single_number_heading_pane_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_single_number_heading_pane_g1

0x2603,	// (0x0005c5a9) list_single_number_heading_pane_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00069578) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00069578) list_single_number_heading_pane_g

0xa1a7,	// (0x0006414d) list_single_number_heading_pane_t1_ParamLimits

0xa1a7,	// (0x0006414d) list_single_number_heading_pane_t1

0xe059,	// (0x00067fff) list_single_number_heading_pane_t2_ParamLimits

0xe059,	// (0x00067fff) list_single_number_heading_pane_t2

0xe06b,	// (0x00068011) list_single_number_heading_pane_t3_ParamLimits

0xe06b,	// (0x00068011) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006957d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006957d) list_single_number_heading_pane_t

0xa1bd,	// (0x00064163) list_single_graphic_heading_pane_g1_ParamLimits

0xa1bd,	// (0x00064163) list_single_graphic_heading_pane_g1

0xa1d5,	// (0x0006417b) list_single_graphic_heading_pane_g4_ParamLimits

0xa1d5,	// (0x0006417b) list_single_graphic_heading_pane_g4

0x2603,	// (0x0005c5a9) list_single_graphic_heading_pane_g5_ParamLimits

0x2603,	// (0x0005c5a9) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00069584) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00069584) list_single_graphic_heading_pane_g

0xa1a7,	// (0x0006414d) list_single_graphic_heading_pane_t1_ParamLimits

0xa1a7,	// (0x0006414d) list_single_graphic_heading_pane_t1

0xa1e6,	// (0x0006418c) list_single_graphic_heading_pane_t2_ParamLimits

0xa1e6,	// (0x0006418c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006958b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006958b) list_single_graphic_heading_pane_t

0x398b,	// (0x0005d931) list_single_large_graphic_pane_g1_ParamLimits

0x398b,	// (0x0005d931) list_single_large_graphic_pane_g1

0x1d71,	// (0x0005bd17) list_single_large_graphic_pane_g2_ParamLimits

0x1d71,	// (0x0005bd17) list_single_large_graphic_pane_g2

0x2603,	// (0x0005c5a9) list_single_large_graphic_pane_g3_ParamLimits

0x2603,	// (0x0005c5a9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00069590) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00069590) list_single_large_graphic_pane_g

0x2c6e,	// (0x0005cc14) wait_border_pane_g2_copy1

0xa1fe,	// (0x000641a4) list_single_large_graphic_pane_g4_cp2

0xe07d,	// (0x00068023) list_single_large_graphic_pane_t1_ParamLimits

0xe07d,	// (0x00068023) list_single_large_graphic_pane_t1

0x542c,	// (0x0005f3d2) list_double_pane_g1_ParamLimits

0x542c,	// (0x0005f3d2) list_double_pane_g1

0xa206,	// (0x000641ac) list_double_pane_g2_ParamLimits

0xa206,	// (0x000641ac) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00069597) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00069597) list_double_pane_g

0xa212,	// (0x000641b8) list_double_pane_t1_ParamLimits

0xa212,	// (0x000641b8) list_double_pane_t1

0xa228,	// (0x000641ce) list_double_pane_t2_ParamLimits

0xa228,	// (0x000641ce) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006959c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006959c) list_double_pane_t

0xa23a,	// (0x000641e0) list_double2_pane_g1_ParamLimits

0xa23a,	// (0x000641e0) list_double2_pane_g1

0xa24b,	// (0x000641f1) list_double2_pane_g2_ParamLimits

0xa24b,	// (0x000641f1) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000695a1) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000695a1) list_double2_pane_g

0xa257,	// (0x000641fd) list_double2_pane_t1_ParamLimits

0xa257,	// (0x000641fd) list_double2_pane_t1

0xa26d,	// (0x00064213) list_double2_pane_t2_ParamLimits

0xa26d,	// (0x00064213) list_double2_pane_t2

0x0001,

0xf600,	// (0x000695a6) list_double2_pane_t_ParamLimits

0xf600,	// (0x000695a6) list_double2_pane_t

0x542c,	// (0x0005f3d2) list_double_number_pane_g1_ParamLimits

0x542c,	// (0x0005f3d2) list_double_number_pane_g1

0xa206,	// (0x000641ac) list_double_number_pane_g2_ParamLimits

0xa206,	// (0x000641ac) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00069597) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00069597) list_double_number_pane_g

0xa27f,	// (0x00064225) list_double_number_pane_t1_ParamLimits

0xa27f,	// (0x00064225) list_double_number_pane_t1

0xa291,	// (0x00064237) list_double_number_pane_t2_ParamLimits

0xa291,	// (0x00064237) list_double_number_pane_t2

0xa2a7,	// (0x0006424d) list_double_number_pane_t3_ParamLimits

0xa2a7,	// (0x0006424d) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000695ab) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000695ab) list_double_number_pane_t

0xa2b9,	// (0x0006425f) list_double_graphic_pane_g1_ParamLimits

0xa2b9,	// (0x0006425f) list_double_graphic_pane_g1

0xa2c5,	// (0x0006426b) list_double_graphic_pane_g2_ParamLimits

0xa2c5,	// (0x0006426b) list_double_graphic_pane_g2

0xa2d4,	// (0x0006427a) list_double_graphic_pane_g3_ParamLimits

0xa2d4,	// (0x0006427a) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000695b2) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000695b2) list_double_graphic_pane_g

0xa2ec,	// (0x00064292) list_double_graphic_pane_t1_ParamLimits

0xa2ec,	// (0x00064292) list_double_graphic_pane_t1

0xa302,	// (0x000642a8) list_double_graphic_pane_t2_ParamLimits

0xa302,	// (0x000642a8) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000695bb) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000695bb) list_double_graphic_pane_t

0xa314,	// (0x000642ba) list_double2_graphic_pane_g1_ParamLimits

0xa314,	// (0x000642ba) list_double2_graphic_pane_g1

0xa320,	// (0x000642c6) list_double2_graphic_pane_g2_ParamLimits

0xa320,	// (0x000642c6) list_double2_graphic_pane_g2

0xa32c,	// (0x000642d2) list_double2_graphic_pane_g3_ParamLimits

0xa32c,	// (0x000642d2) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000695c0) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000695c0) list_double2_graphic_pane_g

0xa338,	// (0x000642de) list_double2_graphic_pane_t1_ParamLimits

0xa338,	// (0x000642de) list_double2_graphic_pane_t1

0xa34e,	// (0x000642f4) list_double2_graphic_pane_t2_ParamLimits

0xa34e,	// (0x000642f4) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000695c7) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000695c7) list_double2_graphic_pane_t

0xa360,	// (0x00064306) list_double_large_graphic_pane_g1_ParamLimits

0xa360,	// (0x00064306) list_double_large_graphic_pane_g1

0xa37f,	// (0x00064325) list_double_large_graphic_pane_g2_ParamLimits

0xa37f,	// (0x00064325) list_double_large_graphic_pane_g2

0xa206,	// (0x000641ac) list_double_large_graphic_pane_g3_ParamLimits

0xa206,	// (0x000641ac) list_double_large_graphic_pane_g3

0xa395,	// (0x0006433b) list_double_large_graphic_pane_g4_ParamLimits

0xa395,	// (0x0006433b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000695cc) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000695cc) list_double_large_graphic_pane_g

0xa3a8,	// (0x0006434e) list_double_large_graphic_pane_t1_ParamLimits

0xa3a8,	// (0x0006434e) list_double_large_graphic_pane_t1

0xa3c1,	// (0x00064367) list_double_large_graphic_pane_t2_ParamLimits

0xa3c1,	// (0x00064367) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000695d7) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000695d7) list_double_large_graphic_pane_t

0xa3d3,	// (0x00064379) list_double2_large_graphic_pane_g1_ParamLimits

0xa3d3,	// (0x00064379) list_double2_large_graphic_pane_g1

0xa3df,	// (0x00064385) list_double2_large_graphic_pane_g2_ParamLimits

0xa3df,	// (0x00064385) list_double2_large_graphic_pane_g2

0xa32c,	// (0x000642d2) list_double2_large_graphic_pane_g3_ParamLimits

0xa32c,	// (0x000642d2) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000695dc) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000695dc) list_double2_large_graphic_pane_g

0xa3f0,	// (0x00064396) list_double2_large_graphic_pane_t1_ParamLimits

0xa3f0,	// (0x00064396) list_double2_large_graphic_pane_t1

0xa406,	// (0x000643ac) list_double2_large_graphic_pane_t2_ParamLimits

0xa406,	// (0x000643ac) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000695e3) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000695e3) list_double2_large_graphic_pane_t

0xa418,	// (0x000643be) list_double_heading_pane_g1_ParamLimits

0xa418,	// (0x000643be) list_double_heading_pane_g1

0xa429,	// (0x000643cf) list_double_heading_pane_g2_ParamLimits

0xa429,	// (0x000643cf) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000695e8) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000695e8) list_double_heading_pane_g

0xa435,	// (0x000643db) list_double_heading_pane_t1_ParamLimits

0xa435,	// (0x000643db) list_double_heading_pane_t1

0xa44b,	// (0x000643f1) list_double_heading_pane_t2_ParamLimits

0xa44b,	// (0x000643f1) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000695ed) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000695ed) list_double_heading_pane_t

0xa45d,	// (0x00064403) list_double_graphic_heading_pane_g1_ParamLimits

0xa45d,	// (0x00064403) list_double_graphic_heading_pane_g1

0xa418,	// (0x000643be) list_double_graphic_heading_pane_g2_ParamLimits

0xa418,	// (0x000643be) list_double_graphic_heading_pane_g2

0xa429,	// (0x000643cf) list_double_graphic_heading_pane_g3_ParamLimits

0xa429,	// (0x000643cf) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000695f2) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000695f2) list_double_graphic_heading_pane_g

0xa469,	// (0x0006440f) list_double_graphic_heading_pane_t1_ParamLimits

0xa469,	// (0x0006440f) list_double_graphic_heading_pane_t1

0xa47f,	// (0x00064425) list_double_graphic_heading_pane_t2_ParamLimits

0xa47f,	// (0x00064425) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000695f9) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000695f9) list_double_graphic_heading_pane_t

0xa491,	// (0x00064437) list_double_time_pane_g1_ParamLimits

0xa491,	// (0x00064437) list_double_time_pane_g1

0xa4a2,	// (0x00064448) list_double_time_pane_g2_ParamLimits

0xa4a2,	// (0x00064448) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000695fe) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000695fe) list_double_time_pane_g

0xa4ae,	// (0x00064454) list_double_time_pane_t1_ParamLimits

0xa4ae,	// (0x00064454) list_double_time_pane_t1

0xa4c4,	// (0x0006446a) list_double_time_pane_t2_ParamLimits

0xa4c4,	// (0x0006446a) list_double_time_pane_t2

0xa4d6,	// (0x0006447c) list_double_time_pane_t3_ParamLimits

0xa4d6,	// (0x0006447c) list_double_time_pane_t3

0xa4e8,	// (0x0006448e) list_double_time_pane_t4_ParamLimits

0xa4e8,	// (0x0006448e) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00069603) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00069603) list_double_time_pane_t

0xa4fa,	// (0x000644a0) list_setting_pane_g1_ParamLimits

0xa4fa,	// (0x000644a0) list_setting_pane_g1

0xa506,	// (0x000644ac) list_setting_pane_g2_ParamLimits

0xa506,	// (0x000644ac) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006960c) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006960c) list_setting_pane_g

0xa512,	// (0x000644b8) list_setting_pane_t1_ParamLimits

0xa512,	// (0x000644b8) list_setting_pane_t1

0xa52c,	// (0x000644d2) list_setting_pane_t2_ParamLimits

0xa52c,	// (0x000644d2) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00069611) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00069611) list_setting_pane_t

0xa56b,	// (0x00064511) set_value_pane_cp_ParamLimits

0xa56b,	// (0x00064511) set_value_pane_cp

0xa579,	// (0x0006451f) list_setting_number_pane_g1_ParamLimits

0xa579,	// (0x0006451f) list_setting_number_pane_g1

0xa585,	// (0x0006452b) list_setting_number_pane_g2_ParamLimits

0xa585,	// (0x0006452b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00069618) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00069618) list_setting_number_pane_g

0xa591,	// (0x00064537) list_setting_number_pane_t1_ParamLimits

0xa591,	// (0x00064537) list_setting_number_pane_t1

0xa5aa,	// (0x00064550) list_setting_number_pane_t2_ParamLimits

0xa5aa,	// (0x00064550) list_setting_number_pane_t2

0xa5c4,	// (0x0006456a) list_setting_number_pane_t3_ParamLimits

0xa5c4,	// (0x0006456a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006961d) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006961d) list_setting_number_pane_t

0xa56b,	// (0x00064511) set_value_pane_ParamLimits

0xa56b,	// (0x00064511) set_value_pane

0x8d06,	// (0x00062cac) bg_set_opt_pane_ParamLimits

0x8d06,	// (0x00062cac) bg_set_opt_pane

0xe0a8,	// (0x0006804e) set_value_pane_t1

0x8d27,	// (0x00062ccd) slider_set_pane_cp3

0x8d30,	// (0x00062cd6) volume_small_pane_cp

0x8d39,	// (0x00062cdf) list_form_gen_pane

0x8d42,	// (0x00062ce8) scroll_pane_cp8

0xa607,	// (0x000645ad) form_field_data_pane_ParamLimits

0xa607,	// (0x000645ad) form_field_data_pane

0xa624,	// (0x000645ca) form_field_data_wide_pane_ParamLimits

0xa624,	// (0x000645ca) form_field_data_wide_pane

0xa648,	// (0x000645ee) form_field_popup_pane_ParamLimits

0xa648,	// (0x000645ee) form_field_popup_pane

0xe0c6,	// (0x0006806c) form_field_popup_wide_pane_ParamLimits

0xe0c6,	// (0x0006806c) form_field_popup_wide_pane

0xe0e7,	// (0x0006808d) form_field_slider_pane_ParamLimits

0xe0e7,	// (0x0006808d) form_field_slider_pane

0xe0fa,	// (0x000680a0) form_field_slider_wide_pane_ParamLimits

0xe0fa,	// (0x000680a0) form_field_slider_wide_pane

0x8d53,	// (0x00062cf9) data_form_pane

0xa674,	// (0x0006461a) form_field_data_pane_t1

0x8d5f,	// (0x00062d05) input_focus_pane

0xe10d,	// (0x000680b3) data_form_wide_pane

0xe12a,	// (0x000680d0) form_field_data_wide_pane_t1

0x8ada,	// (0x00062a80) input_focus_pane_cp6

0xa68e,	// (0x00064634) form_field_popup_pane_t1

0x8d5f,	// (0x00062d05) input_focus_pane_cp7

0x8d8d,	// (0x00062d33) list_form_pane

0xe154,	// (0x000680fa) form_field_popup_wide_pane_t1

0x8d5f,	// (0x00062d05) input_focus_pane_cp8

0x8d99,	// (0x00062d3f) list_form_wide_pane

0xa6b0,	// (0x00064656) form_field_slider_pane_t1_ParamLimits

0xa6b0,	// (0x00064656) form_field_slider_pane_t1

0xa6c8,	// (0x0006466e) form_field_slider_pane_t2_ParamLimits

0xa6c8,	// (0x0006466e) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006962d) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006962d) form_field_slider_pane_t

0x59f7,	// (0x0005f99d) input_focus_pane_cp9_ParamLimits

0x59f7,	// (0x0005f99d) input_focus_pane_cp9

0xa6dd,	// (0x00064683) slider_cont_pane_ParamLimits

0xa6dd,	// (0x00064683) slider_cont_pane

0x8da5,	// (0x00062d4b) form_field_slider_wide_pane_t1_ParamLimits

0x8da5,	// (0x00062d4b) form_field_slider_wide_pane_t1

0xe169,	// (0x0006810f) form_field_slider_wide_pane_t2_ParamLimits

0xe169,	// (0x0006810f) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00069632) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00069632) form_field_slider_wide_pane_t

0x59f7,	// (0x0005f99d) input_focus_pane_cp10_ParamLimits

0x59f7,	// (0x0005f99d) input_focus_pane_cp10

0xa6f1,	// (0x00064697) slider_cont_pane_cp1_ParamLimits

0xa6f1,	// (0x00064697) slider_cont_pane_cp1

0xa705,	// (0x000646ab) slider_form_pane_cp

0x8db7,	// (0x00062d5d) input_focus_pane_g1

0x8dbf,	// (0x00062d65) input_focus_pane_g2

0x8dc7,	// (0x00062d6d) input_focus_pane_g3

0x8dcf,	// (0x00062d75) input_focus_pane_g4

0x8dd7,	// (0x00062d7d) input_focus_pane_g5

0x8ddf,	// (0x00062d85) input_focus_pane_g6

0x8de7,	// (0x00062d8d) input_focus_pane_g7

0x8def,	// (0x00062d95) input_focus_pane_g8

0x8df7,	// (0x00062d9d) input_focus_pane_g9

0x5963,	// (0x0005f909) input_focus_pane_g10

0x0009,

0xf691,	// (0x00069637) input_focus_pane_g

0x2c77,	// (0x0005cc1d) wait_border_pane_g3_copy1

0xa70d,	// (0x000646b3) data_form_pane_t1

0x5963,	// (0x0005f909) wait_anim_pane_g1_copy1

0xb988,	// (0x0006592e) data_form_wide_pane_t1

0xe17b,	// (0x00068121) list_form_graphic_pane_cp_ParamLimits

0xe17b,	// (0x00068121) list_form_graphic_pane_cp

0x3d8a,	// (0x0005dd30) slider_form_pane_g1

0x3d93,	// (0x0005dd39) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00069935) slider_form_pane_g

0xa729,	// (0x000646cf) list_form_graphic_pane_ParamLimits

0xa729,	// (0x000646cf) list_form_graphic_pane

0xe18d,	// (0x00068133) list_form_graphic_pane_g1

0xe195,	// (0x0006813b) list_form_graphic_pane_t1_ParamLimits

0xe195,	// (0x0006813b) list_form_graphic_pane_t1

0x59bb,	// (0x0005f961) list_highlight_pane_cp5_ParamLimits

0x59bb,	// (0x0005f961) list_highlight_pane_cp5

0xa73a,	// (0x000646e0) find_pane_g1

0x8dff,	// (0x00062da5) input_find_pane

0xa743,	// (0x000646e9) input_find_pane_g1_ParamLimits

0xa743,	// (0x000646e9) input_find_pane_g1

0xa74f,	// (0x000646f5) input_find_pane_t1_ParamLimits

0xa74f,	// (0x000646f5) input_find_pane_t1

0xa764,	// (0x0006470a) input_find_pane_t2_ParamLimits

0xa764,	// (0x0006470a) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006964c) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006964c) input_find_pane_t

0x8e08,	// (0x00062dae) input_focus_pane_cp5_ParamLimits

0x8e08,	// (0x00062dae) input_focus_pane_cp5

0x8e16,	// (0x00062dbc) bg_popup_window_pane_cp2_ParamLimits

0x8e16,	// (0x00062dbc) bg_popup_window_pane_cp2

0x8e23,	// (0x00062dc9) listscroll_menu_pane_ParamLimits

0x8e23,	// (0x00062dc9) listscroll_menu_pane

0xa785,	// (0x0006472b) popup_submenu_window_ParamLimits

0xa785,	// (0x0006472b) popup_submenu_window

0x8e2f,	// (0x00062dd5) find_popup_pane_g1

0x8e37,	// (0x00062ddd) input_popup_find_pane_cp

0x8e08,	// (0x00062dae) input_focus_pane_cp4_ParamLimits

0x8e08,	// (0x00062dae) input_focus_pane_cp4

0x8e41,	// (0x00062de7) input_popup_find_pane_t1_ParamLimits

0x8e41,	// (0x00062de7) input_popup_find_pane_t1

0x596d,	// (0x0005f913) bg_popup_sub_pane_cp

0x8e6f,	// (0x00062e15) listscroll_popup_sub_pane

0x8e77,	// (0x00062e1d) list_submenu_pane_ParamLimits

0x8e77,	// (0x00062e1d) list_submenu_pane

0x8e88,	// (0x00062e2e) scroll_pane_cp4

0x8e90,	// (0x00062e36) list_single_popup_submenu_pane_ParamLimits

0x8e90,	// (0x00062e36) list_single_popup_submenu_pane

0x8ea5,	// (0x00062e4b) list_single_popup_submenu_pane_g1

0x8ead,	// (0x00062e53) list_single_popup_submenu_pane_t1_ParamLimits

0x8ead,	// (0x00062e53) list_single_popup_submenu_pane_t1

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp1_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp1

0xa7c3,	// (0x00064769) tabs_2_active_pane_g1

0xa7cb,	// (0x00064771) tabs_2_active_pane_t1

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp1_ParamLimits

0x59f7,	// (0x0005f99d) bg_passive_tab_pane_cp1

0xa7c3,	// (0x00064769) tabs_2_passive_pane_g1

0xa7cb,	// (0x00064771) tabs_2_passive_pane_t1

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp4

0xa7dd,	// (0x00064783) tabs_2_long_active_pane_t1

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp4

0x06cd,	// (0x0005a673) list_single_midp_graphic_pane_g4_ParamLimits

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp5

0xa7f0,	// (0x00064796) tabs_3_long_active_pane_t1

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp5

0x06cd,	// (0x0005a673) list_single_midp_graphic_pane_g4

0x59bb,	// (0x0005f961) bg_popup_window_pane_cp13_ParamLimits

0x59bb,	// (0x0005f961) bg_popup_window_pane_cp13

0x8ecb,	// (0x00062e71) listscroll_popup_fast_pane_ParamLimits

0x8ecb,	// (0x00062e71) listscroll_popup_fast_pane

0x8eda,	// (0x00062e80) grid_popup_fast_pane_ParamLimits

0x8eda,	// (0x00062e80) grid_popup_fast_pane

0x8eec,	// (0x00062e92) scroll_pane_cp9_ParamLimits

0x8eec,	// (0x00062e92) scroll_pane_cp9

0x56ba,	// (0x0005f660) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x56ba,	// (0x0005f660) list_single_graphic_hl_pane_t1_cp2

0x8f10,	// (0x00062eb6) input_focus_pane_cp20_ParamLimits

0x8f10,	// (0x00062eb6) input_focus_pane_cp20

0x8f1e,	// (0x00062ec4) query_popup_data_pane_t1_ParamLimits

0x8f1e,	// (0x00062ec4) query_popup_data_pane_t1

0x8f31,	// (0x00062ed7) query_popup_data_pane_t2_ParamLimits

0x8f31,	// (0x00062ed7) query_popup_data_pane_t2

0x8f77,	// (0x00062f1d) query_popup_data_pane_t3_ParamLimits

0x8f77,	// (0x00062f1d) query_popup_data_pane_t3

0x8fb8,	// (0x00062f5e) query_popup_data_pane_t4_ParamLimits

0x8fb8,	// (0x00062f5e) query_popup_data_pane_t4

0x8ff4,	// (0x00062f9a) query_popup_data_pane_t5_ParamLimits

0x8ff4,	// (0x00062f9a) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00069651) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00069651) query_popup_data_pane_t

0x8db7,	// (0x00062d5d) bg_set_opt_pane_g1

0x8dbf,	// (0x00062d65) bg_set_opt_pane_g2

0x8dc7,	// (0x00062d6d) bg_set_opt_pane_g3

0x8dcf,	// (0x00062d75) bg_set_opt_pane_g4

0x8dd7,	// (0x00062d7d) bg_set_opt_pane_g5

0x8ddf,	// (0x00062d85) bg_set_opt_pane_g6

0x8de7,	// (0x00062d8d) bg_set_opt_pane_g7

0x8def,	// (0x00062d95) bg_set_opt_pane_g8

0x8df7,	// (0x00062d9d) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006965c) bg_set_opt_pane_g

0xf355,	// (0x000692fb) control_top_pane_stacon_ParamLimits

0xf355,	// (0x000692fb) control_top_pane_stacon

0xf3a8,	// (0x0006934e) signal_pane_stacon_ParamLimits

0xf3a8,	// (0x0006934e) signal_pane_stacon

0xe387,	// (0x0006832d) stacon_top_pane_g1_ParamLimits

0xe387,	// (0x0006832d) stacon_top_pane_g1

0xf3cd,	// (0x00069373) title_pane_stacon_ParamLimits

0xf3cd,	// (0x00069373) title_pane_stacon

0xf3f7,	// (0x0006939d) uni_indicator_pane_stacon_ParamLimits

0xf3f7,	// (0x0006939d) uni_indicator_pane_stacon

0xf40c,	// (0x000693b2) battery_pane_stacon_ParamLimits

0xf40c,	// (0x000693b2) battery_pane_stacon

0xf450,	// (0x000693f6) control_bottom_pane_stacon_ParamLimits

0xf450,	// (0x000693f6) control_bottom_pane_stacon

0xf473,	// (0x00069419) navi_pane_stacon_ParamLimits

0xf473,	// (0x00069419) navi_pane_stacon

0xe3a9,	// (0x0006834f) stacon_bottom_pane_g1_ParamLimits

0xe3a9,	// (0x0006834f) stacon_bottom_pane_g1

0xf0bb,	// (0x00069061) aid_levels_signal_lsc_ParamLimits

0xf0bb,	// (0x00069061) aid_levels_signal_lsc

0xf0d2,	// (0x00069078) signal_pane_stacon_g1_ParamLimits

0xf0d2,	// (0x00069078) signal_pane_stacon_g1

0xf0e6,	// (0x0006908c) signal_pane_stacon_g2_ParamLimits

0xf0e6,	// (0x0006908c) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006966f) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006966f) signal_pane_stacon_g

0xf11b,	// (0x000690c1) title_pane_stacon_t1_ParamLimits

0xf11b,	// (0x000690c1) title_pane_stacon_t1

0x9038,	// (0x00062fde) uni_indicator_pane_stacon_g1

0x9042,	// (0x00062fe8) uni_indicator_pane_stacon_g2

0x904c,	// (0x00062ff2) uni_indicator_pane_stacon_g3

0x9056,	// (0x00062ffc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006967b) uni_indicator_pane_stacon_g

0xf140,	// (0x000690e6) control_top_pane_stacon_g1

0xf148,	// (0x000690ee) control_top_pane_stacon_t1_ParamLimits

0xf148,	// (0x000690ee) control_top_pane_stacon_t1

0xf17f,	// (0x00069125) aid_levels_battery_lsc_ParamLimits

0xf17f,	// (0x00069125) aid_levels_battery_lsc

0xf197,	// (0x0006913d) battery_pane_stacon_g1_ParamLimits

0xf197,	// (0x0006913d) battery_pane_stacon_g1

0xf1aa,	// (0x00069150) battery_pane_stacon_g2_ParamLimits

0xf1aa,	// (0x00069150) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00069684) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00069684) battery_pane_stacon_g

0xf1e8,	// (0x0006918e) navi_icon_pane_stacon

0xf1fc,	// (0x000691a2) navi_navi_pane_stacon

0xf1e8,	// (0x0006918e) navi_text_pane_stacon

0xf140,	// (0x000690e6) control_bottom_pane_stacon_g1

0xf212,	// (0x000691b8) control_bottom_pane_stacon_t1_ParamLimits

0xf212,	// (0x000691b8) control_bottom_pane_stacon_t1

0xa802,	// (0x000647a8) grid_app_pane_ParamLimits

0xa802,	// (0x000647a8) grid_app_pane

0xa83a,	// (0x000647e0) scroll_pane_cp15_ParamLimits

0xa83a,	// (0x000647e0) scroll_pane_cp15

0xa84f,	// (0x000647f5) cell_app_pane_ParamLimits

0xa84f,	// (0x000647f5) cell_app_pane

0xa89c,	// (0x00064842) cell_app_pane_g1_ParamLimits

0xa89c,	// (0x00064842) cell_app_pane_g1

0x907a,	// (0x00063020) cell_app_pane_g2_ParamLimits

0x907a,	// (0x00063020) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00069689) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00069689) cell_app_pane_g

0xa8c0,	// (0x00064866) cell_app_pane_t1_ParamLimits

0xa8c0,	// (0x00064866) cell_app_pane_t1

0x9086,	// (0x0006302c) grid_highlight_pane_ParamLimits

0x9086,	// (0x0006302c) grid_highlight_pane

0x8db7,	// (0x00062d5d) cell_highlight_pane_g1

0x8dbf,	// (0x00062d65) cell_highlight_pane_g2

0x8dc7,	// (0x00062d6d) cell_highlight_pane_g3

0x8dcf,	// (0x00062d75) cell_highlight_pane_g4

0x8dd7,	// (0x00062d7d) cell_highlight_pane_g5

0x8ddf,	// (0x00062d85) cell_highlight_pane_g6

0x8de7,	// (0x00062d8d) cell_highlight_pane_g7

0x8def,	// (0x00062d95) cell_highlight_pane_g8

0x8df7,	// (0x00062d9d) cell_highlight_pane_g9

0x5963,	// (0x0005f909) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00069637) cell_highlight_pane_g

0x9097,	// (0x0006303d) bg_scroll_pane

0xf253,	// (0x000691f9) scroll_handle_pane

0x90de,	// (0x00063084) scroll_bg_pane_g1

0x90f3,	// (0x00063099) scroll_bg_pane_g2

0x910b,	// (0x000630b1) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006968e) scroll_bg_pane_g

0x9120,	// (0x000630c6) scroll_handle_focus_pane_ParamLimits

0x9120,	// (0x000630c6) scroll_handle_focus_pane

0x90de,	// (0x00063084) scroll_handle_pane_g1

0x912d,	// (0x000630d3) scroll_handle_pane_g2

0x910b,	// (0x000630b1) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00069695) scroll_handle_pane_g

0x8e08,	// (0x00062dae) bg_popup_sub_pane_cp21_ParamLimits

0x8e08,	// (0x00062dae) bg_popup_sub_pane_cp21

0x9141,	// (0x000630e7) popup_fep_japan_predictive_window_t1_ParamLimits

0x9141,	// (0x000630e7) popup_fep_japan_predictive_window_t1

0x9158,	// (0x000630fe) popup_fep_japan_predictive_window_t2_ParamLimits

0x9158,	// (0x000630fe) popup_fep_japan_predictive_window_t2

0xc13c,	// (0x000660e2) popup_fep_japan_predictive_window_t3_ParamLimits

0xc13c,	// (0x000660e2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006969c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006969c) popup_fep_japan_predictive_window_t

0x596d,	// (0x0005f913) bg_popup_sub_pane_cp23

0xc173,	// (0x00066119) listscroll_japin_cand_pane

0xc17b,	// (0x00066121) popup_fep_japan_candidate_window_t1

0xc189,	// (0x0006612f) candidate_pane_ParamLimits

0xc189,	// (0x0006612f) candidate_pane

0xc19b,	// (0x00066141) scroll_pane_cp30

0xc1a5,	// (0x0006614b) list_single_popup_jap_candidate_pane_ParamLimits

0xc1a5,	// (0x0006614b) list_single_popup_jap_candidate_pane

0x596d,	// (0x0005f913) list_highlight_pane_cp30

0xc1b9,	// (0x0006615f) list_single_popup_jap_candidate_pane_t1

0xa8e0,	// (0x00064886) level_1_signal

0xa8f2,	// (0x00064898) level_2_signal

0xa905,	// (0x000648ab) level_3_signal

0xa918,	// (0x000648be) level_4_signal

0xa92b,	// (0x000648d1) level_5_signal

0xa93e,	// (0x000648e4) level_6_signal

0xa951,	// (0x000648f7) level_7_signal

0xa8e0,	// (0x00064886) level_1_battery

0xa8f2,	// (0x00064898) level_2_battery

0xa905,	// (0x000648ab) level_3_battery

0xa918,	// (0x000648be) level_4_battery

0xa92b,	// (0x000648d1) level_5_battery

0xa93e,	// (0x000648e4) level_6_battery

0xa951,	// (0x000648f7) level_7_battery

0xe1c2,	// (0x00068168) list_menu_pane_ParamLimits

0xe1c2,	// (0x00068168) list_menu_pane

0xe1d8,	// (0x0006817e) scroll_pane_cp25_ParamLimits

0xe1d8,	// (0x0006817e) scroll_pane_cp25

0xe1f1,	// (0x00068197) list_double2_graphic_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double2_graphic_pane_cp2

0xe1f1,	// (0x00068197) list_double2_large_graphic_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double2_large_graphic_pane_cp2

0xe1f1,	// (0x00068197) list_double2_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double2_pane_cp2

0xe1f1,	// (0x00068197) list_double_graphic_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double_graphic_pane_cp2

0xe1f1,	// (0x00068197) list_double_large_graphic_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double_large_graphic_pane_cp2

0xe1f1,	// (0x00068197) list_double_number_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double_number_pane_cp2

0xe1f1,	// (0x00068197) list_double_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double_pane_cp2

0xa964,	// (0x0006490a) list_single_2graphic_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_2graphic_pane_cp2

0xa964,	// (0x0006490a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_graphic_heading_pane_cp2

0xa964,	// (0x0006490a) list_single_graphic_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_graphic_pane_cp2

0xa964,	// (0x0006490a) list_single_heading_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_heading_pane_cp2

0xe201,	// (0x000681a7) list_single_large_graphic_pane_cp2_ParamLimits

0xe201,	// (0x000681a7) list_single_large_graphic_pane_cp2

0xa964,	// (0x0006490a) list_single_number_heading_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_number_heading_pane_cp2

0xa964,	// (0x0006490a) list_single_number_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_number_pane_cp2

0xa964,	// (0x0006490a) list_single_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_pane_cp2

0xe21a,	// (0x000681c0) bg_popup_sub_pane_cp22

0xf305,	// (0x000692ab) popup_side_volume_key_window_g1

0xf32f,	// (0x000692d5) popup_side_volume_key_window_t1

0xf34d,	// (0x000692f3) volume_small_pane_cp1

0x59f7,	// (0x0005f99d) bg_popup_sub_pane_cp24_ParamLimits

0x59f7,	// (0x0005f99d) bg_popup_sub_pane_cp24

0xe230,	// (0x000681d6) fep_china_uni_candidate_pane_ParamLimits

0xe230,	// (0x000681d6) fep_china_uni_candidate_pane

0xe244,	// (0x000681ea) fep_china_uni_entry_pane

0xe254,	// (0x000681fa) popup_fep_china_uni_window_g1

0xe270,	// (0x00068216) fep_china_uni_entry_pane_g1

0xe27a,	// (0x00068220) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x000696cd) fep_china_uni_entry_pane_g

0xe284,	// (0x0006822a) fep_entry_item_pane

0xe28e,	// (0x00068234) fep_candidate_item_pane

0xe296,	// (0x0006823c) fep_china_uni_candidate_pane_g1

0xe2a0,	// (0x00068246) fep_china_uni_candidate_pane_g2

0xe2a8,	// (0x0006824e) fep_china_uni_candidate_pane_g3

0xe2b0,	// (0x00068256) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x000696d2) fep_china_uni_candidate_pane_g

0x5963,	// (0x0005f909) fep_entry_item_pane_g1

0xe2ba,	// (0x00068260) fep_entry_item_pane_t1_ParamLimits

0xe2ba,	// (0x00068260) fep_entry_item_pane_t1

0xe2d0,	// (0x00068276) fep_candidate_item_pane_t1_ParamLimits

0xe2d0,	// (0x00068276) fep_candidate_item_pane_t1

0xe2e5,	// (0x0006828b) fep_candidate_item_pane_t2_ParamLimits

0xe2e5,	// (0x0006828b) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x000696db) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x000696db) fep_candidate_item_pane_t

0x59bb,	// (0x0005f961) list_highlight_pane_cp31_ParamLimits

0x59bb,	// (0x0005f961) list_highlight_pane_cp31

0xe2f7,	// (0x0006829d) level_1_signal_lsc

0xe300,	// (0x000682a6) level_2_signal_lsc

0xe309,	// (0x000682af) level_3_signal_lsc

0xe312,	// (0x000682b8) level_4_signal_lsc

0xe31b,	// (0x000682c1) level_5_signal_lsc

0xe324,	// (0x000682ca) level_6_signal_lsc

0xe32d,	// (0x000682d3) level_7_signal_lsc

0xe32d,	// (0x000682d3) level_1_battery_lsc

0xe336,	// (0x000682dc) level_2_battery_lsc

0xe33f,	// (0x000682e5) level_3_battery_lsc

0xe348,	// (0x000682ee) level_4_battery_lsc

0xe351,	// (0x000682f7) level_5_battery_lsc

0xe35a,	// (0x00068300) level_6_battery_lsc

0xe2f7,	// (0x0006829d) level_7_battery_lsc

0xe363,	// (0x00068309) scroll_handle_focus_pane_g1

0xe36c,	// (0x00068312) scroll_handle_focus_pane_g2

0xe375,	// (0x0006831b) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000696e0) scroll_handle_focus_pane_g

0xa9f3,	// (0x00064999) list_single_2graphic_pane_g1_ParamLimits

0xa9f3,	// (0x00064999) list_single_2graphic_pane_g1

0xa1d5,	// (0x0006417b) list_single_2graphic_pane_g2_ParamLimits

0xa1d5,	// (0x0006417b) list_single_2graphic_pane_g2

0x2603,	// (0x0005c5a9) list_single_2graphic_pane_g3_ParamLimits

0x2603,	// (0x0005c5a9) list_single_2graphic_pane_g3

0xa9ff,	// (0x000649a5) list_single_2graphic_pane_g4_ParamLimits

0xa9ff,	// (0x000649a5) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000696e7) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000696e7) list_single_2graphic_pane_g

0xaa10,	// (0x000649b6) list_single_2graphic_pane_t1_ParamLimits

0xaa10,	// (0x000649b6) list_single_2graphic_pane_t1

0xaa3e,	// (0x000649e4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa3e,	// (0x000649e4) list_double2_graphic_large_graphic_pane_g1

0xa3df,	// (0x00064385) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa3df,	// (0x00064385) list_double2_graphic_large_graphic_pane_g2

0xa32c,	// (0x000642d2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa32c,	// (0x000642d2) list_double2_graphic_large_graphic_pane_g3

0xaa50,	// (0x000649f6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaa50,	// (0x000649f6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000696f0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000696f0) list_double2_graphic_large_graphic_pane_g

0xaa5c,	// (0x00064a02) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaa5c,	// (0x00064a02) list_double2_graphic_large_graphic_pane_t1

0xaa72,	// (0x00064a18) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaa72,	// (0x00064a18) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000696f9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000696f9) list_double2_graphic_large_graphic_pane_t

0xe469,	// (0x0006840f) popup_fast_swap_window_ParamLimits

0xe469,	// (0x0006840f) popup_fast_swap_window

0xe487,	// (0x0006842d) popup_side_volume_key_window

0xe4a5,	// (0x0006844b) stacon_top_pane

0xe4af,	// (0x00068455) status_pane_ParamLimits

0xe4af,	// (0x00068455) status_pane

0xaacc,	// (0x00064a72) status_small_pane

0x596d,	// (0x0005f913) control_pane

0x596d,	// (0x0005f913) stacon_bottom_pane

0x8d42,	// (0x00062ce8) scroll_pane_cp121

0x8d39,	// (0x00062cdf) set_content_pane

0xaa84,	// (0x00064a2a) bg_active_tab_pane_g1_cp1

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp1

0xaa8d,	// (0x00064a33) bg_active_tab_pane_g3_cp1

0xaa84,	// (0x00064a2a) bg_passive_tab_pane_g1_cp1

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp1

0xaa8d,	// (0x00064a33) bg_passive_tab_pane_g3_cp1

0xaa96,	// (0x00064a3c) bg_active_tab_pane_g1_cp2

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp2

0xaa9f,	// (0x00064a45) bg_active_tab_pane_g3_cp2

0xaa96,	// (0x00064a3c) bg_passive_tab_pane_g1_cp2

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp2

0xaa9f,	// (0x00064a45) bg_passive_tab_pane_g3_cp2

0xaaa8,	// (0x00064a4e) bg_active_tab_pane_g1_cp3

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp3

0xaab1,	// (0x00064a57) bg_active_tab_pane_g3_cp3

0xaaa8,	// (0x00064a4e) bg_passive_tab_pane_g1_cp3

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp3

0xaab1,	// (0x00064a57) bg_passive_tab_pane_g3_cp3

0xaaba,	// (0x00064a60) bg_active_tab_pane_g1_cp4

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp4

0xaac3,	// (0x00064a69) bg_active_tab_pane_g3_cp4

0xaaba,	// (0x00064a60) bg_passive_tab_pane_g1_cp4

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp4

0xaac3,	// (0x00064a69) bg_passive_tab_pane_g3_cp4

0xe3c5,	// (0x0006836b) bg_active_tab_pane_g1_cp5

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp5

0xe3ce,	// (0x00068374) bg_active_tab_pane_g3_cp5

0xe3c5,	// (0x0006836b) bg_passive_tab_pane_g1_cp5

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp5

0xe3ce,	// (0x00068374) bg_passive_tab_pane_g3_cp5

0xe3d7,	// (0x0006837d) list_set_graphic_pane_ParamLimits

0xe3d7,	// (0x0006837d) list_set_graphic_pane

0x596d,	// (0x0005f913) bg_set_opt_pane_cp4

0xe3ea,	// (0x00068390) list_set_graphic_pane_g1_ParamLimits

0xe3ea,	// (0x00068390) list_set_graphic_pane_g1

0xe3f6,	// (0x0006839c) list_set_graphic_pane_g2_ParamLimits

0xe3f6,	// (0x0006839c) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000696fe) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000696fe) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x00069a88) volume_small_pane_cp_g

0xe41a,	// (0x000683c0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xe41a,	// (0x000683c0) list_double2_large_graphic_pane_g1_cp2

0xe428,	// (0x000683ce) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe428,	// (0x000683ce) list_double2_large_graphic_pane_g2_cp2

0xe439,	// (0x000683df) list_double2_large_graphic_pane_g3_cp2

0xe441,	// (0x000683e7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe441,	// (0x000683e7) list_double2_large_graphic_pane_t1_cp2

0xe457,	// (0x000683fd) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe457,	// (0x000683fd) list_double2_large_graphic_pane_t2_cp2

0x375b,	// (0x0005d701) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x375b,	// (0x0005d701) list_double_large_graphic_pane_g1_cp2

0x376e,	// (0x0005d714) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x376e,	// (0x0005d714) list_double_large_graphic_pane_g2_cp2

0x1ce9,	// (0x0005bc8f) list_double_large_graphic_pane_g3_cp2

0x377f,	// (0x0005d725) list_double_large_graphic_pane_g4_cp

0x3787,	// (0x0005d72d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3787,	// (0x0005d72d) list_double_large_graphic_pane_t1_cp2

0x379e,	// (0x0005d744) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x379e,	// (0x0005d744) list_double_large_graphic_pane_t2_cp2

0xe4bd,	// (0x00068463) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe4bd,	// (0x00068463) list_double2_graphic_pane_g1_cp2

0xe4cb,	// (0x00068471) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe4cb,	// (0x00068471) list_double2_graphic_pane_g2_cp2

0xe4dc,	// (0x00068482) list_double2_graphic_pane_g3_cp2

0xe4e6,	// (0x0006848c) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe4e6,	// (0x0006848c) list_double2_graphic_pane_t1_cp2

0xe4fc,	// (0x000684a2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe4fc,	// (0x000684a2) list_double2_graphic_pane_t2_cp2

0xe50e,	// (0x000684b4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe50e,	// (0x000684b4) list_single_number_heading_pane_g1_cp2

0xe51a,	// (0x000684c0) list_single_number_heading_pane_g2_cp2

0xe522,	// (0x000684c8) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe522,	// (0x000684c8) list_single_number_heading_pane_t1_cp2

0xe538,	// (0x000684de) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe538,	// (0x000684de) list_single_number_heading_pane_t2_cp2

0xe54c,	// (0x000684f2) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe54c,	// (0x000684f2) list_single_number_heading_pane_t3_cp2

0xe50e,	// (0x000684b4) list_single_heading_pane_g1_cp2_ParamLimits

0xe50e,	// (0x000684b4) list_single_heading_pane_g1_cp2

0xe51a,	// (0x000684c0) list_single_heading_pane_g2_cp2

0xe522,	// (0x000684c8) list_single_heading_pane_t1_cp2_ParamLimits

0xe522,	// (0x000684c8) list_single_heading_pane_t1_cp2

0x3555,	// (0x0005d4fb) list_single_heading_pane_t2_cp2_ParamLimits

0x3555,	// (0x0005d4fb) list_single_heading_pane_t2_cp2

0x349d,	// (0x0005d443) list_double_graphic_pane_g1_cp2_ParamLimits

0x349d,	// (0x0005d443) list_double_graphic_pane_g1_cp2

0x34a9,	// (0x0005d44f) list_double_graphic_pane_g2_cp2_ParamLimits

0x34a9,	// (0x0005d44f) list_double_graphic_pane_g2_cp2

0x34b8,	// (0x0005d45e) list_double_graphic_pane_g3_cp2

0x34c0,	// (0x0005d466) list_double_graphic_pane_t1_cp2_ParamLimits

0x34c0,	// (0x0005d466) list_double_graphic_pane_t1_cp2

0x34d6,	// (0x0005d47c) list_double_graphic_pane_t2_cp2_ParamLimits

0x34d6,	// (0x0005d47c) list_double_graphic_pane_t2_cp2

0x1cdd,	// (0x0005bc83) list_double_number_pane_g1_cp2_ParamLimits

0x1cdd,	// (0x0005bc83) list_double_number_pane_g1_cp2

0x1ce9,	// (0x0005bc8f) list_double_number_pane_g2_cp2

0x3461,	// (0x0005d407) list_double_number_pane_t1_cp2_ParamLimits

0x3461,	// (0x0005d407) list_double_number_pane_t1_cp2

0x3475,	// (0x0005d41b) list_double_number_pane_t2_cp2_ParamLimits

0x3475,	// (0x0005d41b) list_double_number_pane_t2_cp2

0x348b,	// (0x0005d431) list_double_number_pane_t3_cp2_ParamLimits

0x348b,	// (0x0005d431) list_double_number_pane_t3_cp2

0x334a,	// (0x0005d2f0) list_single_graphic_pane_g1_cp2_ParamLimits

0x334a,	// (0x0005d2f0) list_single_graphic_pane_g1_cp2

0xc1c8,	// (0x0006616e) list_single_graphic_pane_g2_cp2_ParamLimits

0xc1c8,	// (0x0006616e) list_single_graphic_pane_g2_cp2

0x1d43,	// (0x0005bce9) list_single_graphic_pane_g3_cp2

0x3320,	// (0x0005d2c6) list_single_graphic_pane_t1_cp2_ParamLimits

0x3320,	// (0x0005d2c6) list_single_graphic_pane_t1_cp2

0xc1c8,	// (0x0006616e) list_single_number_pane_g1_cp2_ParamLimits

0xc1c8,	// (0x0006616e) list_single_number_pane_g1_cp2

0x1d43,	// (0x0005bce9) list_single_number_pane_g2_cp2

0x3320,	// (0x0005d2c6) list_single_number_pane_t1_cp2_ParamLimits

0x3320,	// (0x0005d2c6) list_single_number_pane_t1_cp2

0x3336,	// (0x0005d2dc) list_single_number_pane_t2_cp2_ParamLimits

0x3336,	// (0x0005d2dc) list_single_number_pane_t2_cp2

0xe428,	// (0x000683ce) list_double2_pane_g1_cp2_ParamLimits

0xe428,	// (0x000683ce) list_double2_pane_g1_cp2

0xe439,	// (0x000683df) list_double2_pane_g2_cp2

0x1cb5,	// (0x0005bc5b) list_double2_pane_t1_cp2_ParamLimits

0x1cb5,	// (0x0005bc5b) list_double2_pane_t1_cp2

0x1ccb,	// (0x0005bc71) list_double2_pane_t2_cp2_ParamLimits

0x1ccb,	// (0x0005bc71) list_double2_pane_t2_cp2

0x1cdd,	// (0x0005bc83) list_double_pane_g1_cp2_ParamLimits

0x1cdd,	// (0x0005bc83) list_double_pane_g1_cp2

0x1ce9,	// (0x0005bc8f) list_double_pane_g2_cp2

0x1cf1,	// (0x0005bc97) list_double_pane_t1_cp2_ParamLimits

0x1cf1,	// (0x0005bc97) list_double_pane_t1_cp2

0x1d07,	// (0x0005bcad) list_double_pane_t2_cp2_ParamLimits

0x1d07,	// (0x0005bcad) list_double_pane_t2_cp2

0x1d33,	// (0x0005bcd9) list_single_pane_cp2_g3

0xc1c8,	// (0x0006616e) list_single_pane_g1_cp2_ParamLimits

0xc1c8,	// (0x0006616e) list_single_pane_g1_cp2

0x1d43,	// (0x0005bce9) list_single_pane_g2_cp2

0x1d4b,	// (0x0005bcf1) list_single_pane_t1_cp2_ParamLimits

0x1d4b,	// (0x0005bcf1) list_single_pane_t1_cp2

0x1d63,	// (0x0005bd09) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1d63,	// (0x0005bd09) list_single_large_graphic_pane_g1_cp2

0x1d71,	// (0x0005bd17) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1d71,	// (0x0005bd17) list_single_large_graphic_pane_g2_cp2

0x1d7d,	// (0x0005bd23) list_single_large_graphic_pane_g3_cp2

0x1d85,	// (0x0005bd2b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1d85,	// (0x0005bd2b) list_single_large_graphic_pane_g4_cp1

0x1d9f,	// (0x0005bd45) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1d9f,	// (0x0005bd45) list_single_large_graphic_pane_t1_cp2

0x32ea,	// (0x0005d290) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x32ea,	// (0x0005d290) list_single_graphic_heading_pane_g1_cp2

0x32b7,	// (0x0005d25d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x32b7,	// (0x0005d25d) list_single_graphic_heading_pane_g4_cp2

0x1d43,	// (0x0005bce9) list_single_graphic_heading_pane_g5_cp2

0x32f6,	// (0x0005d29c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x32f6,	// (0x0005d29c) list_single_graphic_heading_pane_t1_cp2

0x330c,	// (0x0005d2b2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x330c,	// (0x0005d2b2) list_single_graphic_heading_pane_t2_cp2

0x32ab,	// (0x0005d251) list_single_2graphic_pane_g1_cp2_ParamLimits

0x32ab,	// (0x0005d251) list_single_2graphic_pane_g1_cp2

0x32b7,	// (0x0005d25d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x32b7,	// (0x0005d25d) list_single_2graphic_pane_g2_cp2

0x1d43,	// (0x0005bce9) list_single_2graphic_pane_g3_cp2

0x32c8,	// (0x0005d26e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32c8,	// (0x0005d26e) list_single_2graphic_pane_g4_cp2

0x32d4,	// (0x0005d27a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x32d4,	// (0x0005d27a) list_single_2graphic_pane_t1_cp2

0x5963,	// (0x0005f909) list_highlight_pane_g10_cp1

0x2e83,	// (0x0005ce29) list_highlight_pane_g1_cp1

0x2e8b,	// (0x0005ce31) list_highlight_pane_g2_cp1

0x2e93,	// (0x0005ce39) list_highlight_pane_g3_cp1

0x2e9b,	// (0x0005ce41) list_highlight_pane_g4_cp1

0x2ea3,	// (0x0005ce49) list_highlight_pane_g5_cp1

0x2eab,	// (0x0005ce51) list_highlight_pane_g6_cp1

0x2eb3,	// (0x0005ce59) list_highlight_pane_g7_cp1

0x2ebb,	// (0x0005ce61) list_highlight_pane_g8_cp1

0x2ec3,	// (0x0005ce69) list_highlight_pane_g9_cp1

0xc3fe,	// (0x000663a4) form_field_slider_pane_t3

0xc40c,	// (0x000663b2) form_field_slider_pane_t4

0x2dbf,	// (0x0005cd65) slider_form_pane_ParamLimits

0x2dbf,	// (0x0005cd65) slider_form_pane

0x596d,	// (0x0005f913) control_abbreviations

0x596d,	// (0x0005f913) control_conventions

0x596d,	// (0x0005f913) control_definitions

0x596d,	// (0x0005f913) format_table_attribute

0x35ab,	// (0x0005d551) bg_popup_preview_window_pane_g9

0x596d,	// (0x0005f913) format_table_data2

0x596d,	// (0x0005f913) format_table_data3

0x596d,	// (0x0005f913) format_table_data_example

0x0008,

0x596d,	// (0x0005f913) intro_purpose

0xf8ef,	// (0x00069895) bg_popup_preview_window_pane_g

0x596d,	// (0x0005f913) texts_category

0x596d,	// (0x0005f913) texts_graphics

0x1db5,	// (0x0005bd5b) text_digital

0x1dc4,	// (0x0005bd6a) text_primary

0x1dd3,	// (0x0005bd79) text_primary_small

0x1de2,	// (0x0005bd88) text_secondary

0x1df1,	// (0x0005bd97) text_title

0x3edf,	// (0x0005de85) bg_passive_tab_pane_g1_cp3_srt

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp3_srt

0x3ee8,	// (0x0005de8e) bg_passive_tab_pane_g3_cp3_srt

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp3_srt_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp3_srt

0x3ef1,	// (0x0005de97) tabs_4_active_pane_srt_g1

0xc74d,	// (0x000666f3) tabs_4_active_pane_srt_t1_ParamLimits

0xc74d,	// (0x000666f3) tabs_4_active_pane_srt_t1

0x3edf,	// (0x0005de85) bg_active_tab_pane_g1_cp3_copy1

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp3_copy1

0x3ee8,	// (0x0005de8e) bg_active_tab_pane_g3_cp3_copy1

0x59bb,	// (0x0005f961) tabs_2_long_active_pane_srt_ParamLimits

0x59bb,	// (0x0005f961) tabs_2_long_active_pane_srt

0x59bb,	// (0x0005f961) tabs_2_long_passive_pane_srt_ParamLimits

0x59bb,	// (0x0005f961) tabs_2_long_passive_pane_srt

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp4_srt

0x3ba1,	// (0x0005db47) bg_passive_tab_pane_g1_cp4_srt

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp4_srt

0x3baa,	// (0x0005db50) bg_passive_tab_pane_g3_cp4_srt

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp4_srt_ParamLimits

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp4_srt

0xc5de,	// (0x00066584) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc5de,	// (0x00066584) tabs_2_long_active_pane_srt_t1

0x3ba1,	// (0x0005db47) bg_active_tab_pane_g1_cp4_srt

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp4_srt

0x3baa,	// (0x0005db50) bg_active_tab_pane_g3_cp4_srt

0x59f7,	// (0x0005f99d) tabs_3_long_active_pane_srt_ParamLimits

0x59f7,	// (0x0005f99d) tabs_3_long_active_pane_srt

0x59f7,	// (0x0005f99d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x59f7,	// (0x0005f99d) tabs_3_long_passive_pane_cp_srt

0x59f7,	// (0x0005f99d) tabs_3_long_passive_pane_srt_ParamLimits

0x59f7,	// (0x0005f99d) tabs_3_long_passive_pane_srt

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp5_srt

0xe3c5,	// (0x0006836b) bg_passive_tab_pane_g1_cp5_srt

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp5_srt

0xe3ce,	// (0x00068374) bg_passive_tab_pane_g3_cp5_srt

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp5_srt_ParamLimits

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp5_srt

0xc5c8,	// (0x0006656e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5c8,	// (0x0006656e) tabs_3_long_active_pane_srt_t1

0xe3c5,	// (0x0006836b) bg_active_tab_pane_g1_cp5_srt

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp5_srt

0xe3ce,	// (0x00068374) bg_active_tab_pane_g3_cp5_srt

0x3b81,	// (0x0005db27) navi_text_pane_srt_t1

0x3b79,	// (0x0005db1f) navi_icon_pane_srt_g1

0x1fc9,	// (0x0005bf6f) midp_editing_number_pane_srt

0x1e00,	// (0x0005bda6) midp_ticker_pane_srt

0x1fd1,	// (0x0005bf77) midp_ticker_pane_srt_g1

0x1fd9,	// (0x0005bf7f) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006971d) midp_ticker_pane_srt_g

0x1fe1,	// (0x0005bf87) midp_ticker_pane_srt_t1

0x3b6a,	// (0x0005db10) midp_editing_number_pane_t1_copy1

0xaad7,	// (0x00064a7d) listscroll_midp_pane

0xaad7,	// (0x00064a7d) midp_form_pane

0x1e77,	// (0x0005be1d) midp_info_popup_window_ParamLimits

0x1e77,	// (0x0005be1d) midp_info_popup_window

0x8e08,	// (0x00062dae) bg_popup_sub_pane_cp50_ParamLimits

0x8e08,	// (0x00062dae) bg_popup_sub_pane_cp50

0x2aad,	// (0x0005ca53) listscroll_midp_info_pane_ParamLimits

0x2aad,	// (0x0005ca53) listscroll_midp_info_pane

0x2a8d,	// (0x0005ca33) listscroll_form_midp_pane_ParamLimits

0x2a8d,	// (0x0005ca33) listscroll_form_midp_pane

0x2a99,	// (0x0005ca3f) scroll_bar_cp050

0x2a8d,	// (0x0005ca33) list_midp_pane

0x4957,	// (0x0005e8fd) signal_pane_g2_cp

0x29a7,	// (0x0005c94d) listscroll_midp_info_pane_t1_ParamLimits

0x29a7,	// (0x0005c94d) listscroll_midp_info_pane_t1

0x29bf,	// (0x0005c965) listscroll_midp_info_pane_t2_ParamLimits

0x29bf,	// (0x0005c965) listscroll_midp_info_pane_t2

0x29fd,	// (0x0005c9a3) listscroll_midp_info_pane_t3_ParamLimits

0x29fd,	// (0x0005c9a3) listscroll_midp_info_pane_t3

0x2a37,	// (0x0005c9dd) listscroll_midp_info_pane_t4_ParamLimits

0x2a37,	// (0x0005c9dd) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x000697d0) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x000697d0) listscroll_midp_info_pane_t

0x8e88,	// (0x00062e2e) scroll_pane_cp21

0x2941,	// (0x0005c8e7) form_midp_field_choice_group_pane

0x294a,	// (0x0005c8f0) form_midp_field_text_pane

0x298d,	// (0x0005c933) form_midp_field_time_pane

0x2995,	// (0x0005c93b) form_midp_gauge_slider_pane

0x299e,	// (0x0005c944) form_midp_gauge_wait_pane

0x596d,	// (0x0005f913) form_midp_image_pane

0xb805,	// (0x000657ab) list_single_midp_pane_ParamLimits

0xb805,	// (0x000657ab) list_single_midp_pane

0xc3d6,	// (0x0006637c) form_midp_field_text_pane_t1

0x26f7,	// (0x0005c69d) input_focus_pane_cp050

0x2930,	// (0x0005c8d6) list_midp_form_text_pane

0x28d4,	// (0x0005c87a) form_midp_field_choice_group_pane_t1

0x28e2,	// (0x0005c888) input_focus_pane_cp051

0x28f6,	// (0x0005c89c) list_midp_choice_pane

0x596d,	// (0x0005f913) status_idle_pane

0x28b8,	// (0x0005c85e) form_midp_field_time_pane_t1

0x5963,	// (0x0005f909) wait_anim_pane_g2_copy1

0x28c6,	// (0x0005c86c) form_midp_field_time_pane_t2

0x0001,

0x1f27,	// (0x0005becd) aid_navinavi_width_2_pane

0xf825,	// (0x000697cb) form_midp_field_time_pane_t

0x596d,	// (0x0005f913) input_focus_pane_cp052

0x596d,	// (0x0005f913) bg_input_focus_pane_cp040

0x2878,	// (0x0005c81e) form_midp_gauge_slider_pane_t1

0x2886,	// (0x0005c82c) form_midp_gauge_slider_pane_t2

0xc3ba,	// (0x00066360) form_midp_gauge_slider_pane_t3

0xc3c8,	// (0x0006636e) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x000697c2) form_midp_gauge_slider_pane_t

0x28b0,	// (0x0005c856) form_midp_slider_pane

0x59bb,	// (0x0005f961) bg_input_focus_pane_cp041_ParamLimits

0x59bb,	// (0x0005f961) bg_input_focus_pane_cp041

0x2845,	// (0x0005c7eb) form_midp_gauge_wait_pane_t1_ParamLimits

0x2845,	// (0x0005c7eb) form_midp_gauge_wait_pane_t1

0x2857,	// (0x0005c7fd) form_midp_gauge_wait_pane_t2_ParamLimits

0x2857,	// (0x0005c7fd) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x000697bd) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x000697bd) form_midp_gauge_wait_pane_t

0x2869,	// (0x0005c80f) form_midp_wait_pane_ParamLimits

0x2869,	// (0x0005c80f) form_midp_wait_pane

0x280d,	// (0x0005c7b3) form_midp_image_pane_g1

0x2816,	// (0x0005c7bc) form_midp_image_pane_t1

0x2825,	// (0x0005c7cb) form_midp_image_pane_t2

0x2834,	// (0x0005c7da) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000697b6) form_midp_image_pane_t

0x2804,	// (0x0005c7aa) list_single_midp_pane_g1

0xe6d7,	// (0x0006867d) list_single_midp_pane_t1

0xc3a3,	// (0x00066349) list_midp_form_item_pane_ParamLimits

0xc3a3,	// (0x00066349) list_midp_form_item_pane

0x1ecf,	// (0x0005be75) list_midp_form_item_pane_t1

0x1ede,	// (0x0005be84) midp_ticker_pane_g1

0x1eea,	// (0x0005be90) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00069703) midp_ticker_pane_g

0xab7b,	// (0x00064b21) midp_ticker_pane_t1

0xc6a5,	// (0x0006664b) midp_editing_number_pane_t1

0x3db5,	// (0x0005dd5b) midp_editing_number_pane

0x3dc4,	// (0x0005dd6a) midp_ticker_pane

0x3b5a,	// (0x0005db00) ai_message_heading_pane

0x596d,	// (0x0005f913) bg_popup_window_pane_cp14

0x3b62,	// (0x0005db08) listscroll_ai_message_pane

0x3919,	// (0x0005d8bf) ai_message_heading_pane_g1_ParamLimits

0x3919,	// (0x0005d8bf) ai_message_heading_pane_g1

0x3925,	// (0x0005d8cb) ai_message_heading_pane_g2_ParamLimits

0x3925,	// (0x0005d8cb) ai_message_heading_pane_g2

0x3afa,	// (0x0005daa0) ai_message_heading_pane_g3_ParamLimits

0x3afa,	// (0x0005daa0) ai_message_heading_pane_g3

0x3b06,	// (0x0005daac) ai_message_heading_pane_g4_ParamLimits

0x3b06,	// (0x0005daac) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x000698f7) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x000698f7) ai_message_heading_pane_g

0x3b12,	// (0x0005dab8) ai_message_heading_pane_t1_ParamLimits

0x3b12,	// (0x0005dab8) ai_message_heading_pane_t1

0x3b2c,	// (0x0005dad2) ai_message_heading_pane_t2_ParamLimits

0x3b2c,	// (0x0005dad2) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00069900) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00069900) ai_message_heading_pane_t

0x3b40,	// (0x0005dae6) bg_popup_heading_pane_cp1_ParamLimits

0x3b40,	// (0x0005dae6) bg_popup_heading_pane_cp1

0x3907,	// (0x0005d8ad) list_ai_message_pane_ParamLimits

0x3907,	// (0x0005d8ad) list_ai_message_pane

0x8e88,	// (0x00062e2e) scroll_pane_cp10

0x38a3,	// (0x0005d849) list_ai_message_pane_g1

0x38ab,	// (0x0005d851) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x000698d4) list_ai_message_pane_g

0x38b3,	// (0x0005d859) list_ai_message_pane_t1_ParamLimits

0x38b3,	// (0x0005d859) list_ai_message_pane_t1

0x38c8,	// (0x0005d86e) list_ai_message_pane_t2_ParamLimits

0x38c8,	// (0x0005d86e) list_ai_message_pane_t2

0x38dd,	// (0x0005d883) list_ai_message_pane_t3_ParamLimits

0x38dd,	// (0x0005d883) list_ai_message_pane_t3

0x38f2,	// (0x0005d898) list_ai_message_pane_t4_ParamLimits

0x38f2,	// (0x0005d898) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x000698d9) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x000698d9) list_ai_message_pane_t

0xc5ae,	// (0x00066554) cell_ai_soft_ind_pane_ParamLimits

0xc5ae,	// (0x00066554) cell_ai_soft_ind_pane

0x1f08,	// (0x0005beae) cell_ai_soft_ind_pane_g1_ParamLimits

0x1f08,	// (0x0005beae) cell_ai_soft_ind_pane_g1

0x596d,	// (0x0005f913) grid_highlight_cp1

0x1f15,	// (0x0005bebb) text_secondary_cp56_ParamLimits

0x1f15,	// (0x0005bebb) text_secondary_cp56

0x3861,	// (0x0005d807) example_general_pane_ParamLimits

0x3861,	// (0x0005d807) example_general_pane

0x386d,	// (0x0005d813) example_parent_pane_g1_ParamLimits

0x386d,	// (0x0005d813) example_parent_pane_g1

0x3879,	// (0x0005d81f) example_parent_pane_t1_ParamLimits

0x3879,	// (0x0005d81f) example_parent_pane_t1

0xb1fb,	// (0x000651a1) popup_preview_text_window_ParamLimits

0xb1fb,	// (0x000651a1) popup_preview_text_window

0x1d3b,	// (0x0005bce1) list_single_pane_cp2_g4

0x8922,	// (0x000628c8) bg_popup_preview_window_pane_ParamLimits

0x8922,	// (0x000628c8) bg_popup_preview_window_pane

0x35b5,	// (0x0005d55b) popup_preview_text_window_t1_ParamLimits

0x35b5,	// (0x0005d55b) popup_preview_text_window_t1

0x35d3,	// (0x0005d579) popup_preview_text_window_t2_ParamLimits

0x35d3,	// (0x0005d579) popup_preview_text_window_t2

0x361c,	// (0x0005d5c2) popup_preview_text_window_t3_ParamLimits

0x361c,	// (0x0005d5c2) popup_preview_text_window_t3

0x3661,	// (0x0005d607) popup_preview_text_window_t4_ParamLimits

0x3661,	// (0x0005d607) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000698a8) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000698a8) popup_preview_text_window_t

0x36df,	// (0x0005d685) scroll_pane_cp11

0x266b,	// (0x0005c611) bg_popup_preview_window_pane_g1

0x3569,	// (0x0005d50f) bg_popup_preview_window_pane_g2

0x3573,	// (0x0005d519) bg_popup_preview_window_pane_g3

0x357d,	// (0x0005d523) bg_popup_preview_window_pane_g4

0x3587,	// (0x0005d52d) bg_popup_preview_window_pane_g5

0x3591,	// (0x0005d537) bg_popup_preview_window_pane_g6

0x3599,	// (0x0005d53f) bg_popup_preview_window_pane_g7

0x35a1,	// (0x0005d547) bg_popup_preview_window_pane_g8

0xdf98,	// (0x00067f3e) aid_popup_width_pane

0xb16b,	// (0x00065111) popup_midp_note_alarm_window_ParamLimits

0xb16b,	// (0x00065111) popup_midp_note_alarm_window

0x8d53,	// (0x00062cf9) data_form_pane_ParamLimits

0xa66a,	// (0x00064610) form_field_data_pane_g1

0xa674,	// (0x0006461a) form_field_data_pane_t1_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_ParamLimits

0xe10d,	// (0x000680b3) data_form_wide_pane_ParamLimits

0xe11e,	// (0x000680c4) form_field_data_wide_pane_g1

0xe12a,	// (0x000680d0) form_field_data_wide_pane_t1_ParamLimits

0x8ada,	// (0x00062a80) input_focus_pane_cp6_ParamLimits

0xa7b5,	// (0x0006475b) input_popup_find_pane_g1_ParamLimits

0xa7b5,	// (0x0006475b) input_popup_find_pane_g1

0xf1bb,	// (0x00069161) aid_navi_side_left_pane

0xf1d0,	// (0x00069176) aid_navi_side_right_pane

0x2f7e,	// (0x0005cf24) bg_popup_window_pane_cp30_ParamLimits

0x2f7e,	// (0x0005cf24) bg_popup_window_pane_cp30

0x2ff8,	// (0x0005cf9e) popup_midp_note_alarm_window_g1_ParamLimits

0x2ff8,	// (0x0005cf9e) popup_midp_note_alarm_window_g1

0x3028,	// (0x0005cfce) popup_midp_note_alarm_window_t1_ParamLimits

0x3028,	// (0x0005cfce) popup_midp_note_alarm_window_t1

0x30c9,	// (0x0005d06f) popup_midp_note_alarm_window_t2_ParamLimits

0x30c9,	// (0x0005d06f) popup_midp_note_alarm_window_t2

0x3177,	// (0x0005d11d) popup_midp_note_alarm_window_t3_ParamLimits

0x3177,	// (0x0005d11d) popup_midp_note_alarm_window_t3

0x31a9,	// (0x0005d14f) popup_midp_note_alarm_window_t4_ParamLimits

0x31a9,	// (0x0005d14f) popup_midp_note_alarm_window_t4

0x31cf,	// (0x0005d175) popup_midp_note_alarm_window_t5_ParamLimits

0x31cf,	// (0x0005d175) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00069845) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00069845) popup_midp_note_alarm_window_t

0x327b,	// (0x0005d221) wait_bar_pane_cp1_ParamLimits

0x327b,	// (0x0005d221) wait_bar_pane_cp1

0x596d,	// (0x0005f913) wait_anim_pane_copy1

0x596d,	// (0x0005f913) wait_border_pane_copy1

0x2c63,	// (0x0005cc09) wait_border_pane_g1_copy1

0xe144,	// (0x000680ea) form_field_popup_pane_g1

0xa68e,	// (0x00064634) form_field_popup_pane_t1_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_cp7_ParamLimits

0x8d8d,	// (0x00062d33) list_form_pane_ParamLimits

0xe14c,	// (0x000680f2) form_field_popup_wide_pane_g1

0xe154,	// (0x000680fa) form_field_popup_wide_pane_t1_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_cp8_ParamLimits

0x8d99,	// (0x00062d3f) list_form_wide_pane_ParamLimits

0xc7ac,	// (0x00066752) aid_size_cell_graphic_pane

0xa70d,	// (0x000646b3) data_form_pane_t1_ParamLimits

0xb988,	// (0x0006592e) data_form_wide_pane_t1_ParamLimits

0xb5fd,	// (0x000655a3) bg_status_flat_pane

0x9dcf,	// (0x00063d75) title_pane_t1_ParamLimits

0x5983,	// (0x0005f929) title_pane_t2_ParamLimits

0x59a9,	// (0x0005f94f) title_pane_t3_ParamLimits

0xf557,	// (0x000694fd) title_pane_t_ParamLimits

0xa8e0,	// (0x00064886) level_1_signal_ParamLimits

0xa8f2,	// (0x00064898) level_2_signal_ParamLimits

0xa905,	// (0x000648ab) level_3_signal_ParamLimits

0xa918,	// (0x000648be) level_4_signal_ParamLimits

0xa92b,	// (0x000648d1) level_5_signal_ParamLimits

0xa93e,	// (0x000648e4) level_6_signal_ParamLimits

0xa951,	// (0x000648f7) level_7_signal_ParamLimits

0xa8e0,	// (0x00064886) level_1_battery_ParamLimits

0xa8f2,	// (0x00064898) level_2_battery_ParamLimits

0xa905,	// (0x000648ab) level_3_battery_ParamLimits

0xa918,	// (0x000648be) level_4_battery_ParamLimits

0xa92b,	// (0x000648d1) level_5_battery_ParamLimits

0xa93e,	// (0x000648e4) level_6_battery_ParamLimits

0xa951,	// (0x000648f7) level_7_battery_ParamLimits

0x2e83,	// (0x0005ce29) bg_status_flat_pane_g1

0x2e8b,	// (0x0005ce31) bg_status_flat_pane_g2

0x2e93,	// (0x0005ce39) bg_status_flat_pane_g3

0x2e9b,	// (0x0005ce41) bg_status_flat_pane_g4

0x2ea3,	// (0x0005ce49) bg_status_flat_pane_g5

0x2eab,	// (0x0005ce51) bg_status_flat_pane_g6

0x2eb3,	// (0x0005ce59) bg_status_flat_pane_g7

0x9e63,	// (0x00063e09) tabs_3_active_pane_t1_ParamLimits

0x9e63,	// (0x00063e09) tabs_3_passive_pane_t1_ParamLimits

0x9e7d,	// (0x00063e23) tabs_4_active_pane_t1_ParamLimits

0x9e7d,	// (0x00063e23) tabs_4_1_passive_pane_t1_ParamLimits

0xa7cb,	// (0x00064771) tabs_2_active_pane_t1_ParamLimits

0xa7cb,	// (0x00064771) tabs_2_passive_pane_t1_ParamLimits

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp4_ParamLimits

0xa7dd,	// (0x00064783) tabs_2_long_active_pane_t1_ParamLimits

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp4_ParamLimits

0x0700,	// (0x0005a6a6) list_single_midp_graphic_pane_t1_ParamLimits

0x59bb,	// (0x0005f961) bg_active_tab_pane_cp5_ParamLimits

0xa7f0,	// (0x00064796) tabs_3_long_active_pane_t1_ParamLimits

0x212f,	// (0x0005c0d5) bg_passive_tab_pane_cp5_ParamLimits

0x0700,	// (0x0005a6a6) list_single_midp_graphic_pane_t1

0xb5fd,	// (0x000655a3) bg_status_flat_pane_ParamLimits

0x22e3,	// (0x0005c289) indicator_pane_cp2_ParamLimits

0x22e3,	// (0x0005c289) indicator_pane_cp2

0xc1d4,	// (0x0006617a) navi_pane_srt_ParamLimits

0xc1d4,	// (0x0006617a) navi_pane_srt

0x244a,	// (0x0005c3f0) popup_clock_digital_analogue_window_cp1

0x8765,	// (0x0006270b) indicator_pane_t1

0x1e00,	// (0x0005bda6) copy_highlight_pane

0x1e00,	// (0x0005bda6) cursor_graphics_pane

0x1e00,	// (0x0005bda6) graphic_within_text_pane

0x1e00,	// (0x0005bda6) link_highlight_pane

0x36a2,	// (0x0005d648) popup_preview_text_window_t5_ParamLimits

0x36a2,	// (0x0005d648) popup_preview_text_window_t5

0x1f31,	// (0x0005bed7) cursor_digital_pane

0x1f31,	// (0x0005bed7) cursor_primary_pane

0x1f42,	// (0x0005bee8) cursor_primary_small_pane

0x1f4a,	// (0x0005bef0) cursor_secondary_pane

0x1f52,	// (0x0005bef8) cursor_title_pane

0x1f31,	// (0x0005bed7) link_highlight_digital_pane

0x1f39,	// (0x0005bedf) link_highlight_primary_pane

0x1f42,	// (0x0005bee8) link_highlight_primary_small_pane

0x1f4a,	// (0x0005bef0) link_highlight_secondary_pane

0x1f52,	// (0x0005bef8) link_highlight_title_pane

0x1f31,	// (0x0005bed7) copy_highlight_digital_pane

0x1f31,	// (0x0005bed7) copy_highlight_primary_pane

0x1f42,	// (0x0005bee8) copy_highlight_primary_small_pane

0x1f4a,	// (0x0005bef0) copy_highlight_secondary_pane

0x1f52,	// (0x0005bef8) copy_highlight_title_pane

0x1f4a,	// (0x0005bef0) graphic_text_digital_pane

0x2f21,	// (0x0005cec7) graphic_text_primary_pane

0x2f2a,	// (0x0005ced0) graphic_text_primary_small_pane

0x1f42,	// (0x0005bee8) graphic_text_secondary_pane

0x1f31,	// (0x0005bed7) graphic_text_title_pane

0xab8d,	// (0x00064b33) cursor_primary_pane_g1

0x2f13,	// (0x0005ceb9) cursor_text_primary_t1

0xc42e,	// (0x000663d4) cursor_primary_small_pane_g1

0x2f05,	// (0x0005ceab) cursor_text_primary_small_t1

0xc424,	// (0x000663ca) cursor_primary_small_pane_g1_copy1

0x2eed,	// (0x0005ce93) cursor_text_primary_small_t1_copy1

0x2ecb,	// (0x0005ce71) cursor_text_title_t1

0xc41a,	// (0x000663c0) cursor_title_pane_g1

0xab8d,	// (0x00064b33) cursor_digital_pane_g1

0x1f64,	// (0x0005bf0a) cursor_text_digital_t1

0x1f72,	// (0x0005bf18) link_highlight_primary_pane_g1

0x2e74,	// (0x0005ce1a) link_highlight_primary_pane_t1

0x1f72,	// (0x0005bf18) link_highlight_primary_small_pane_g1

0x1f7a,	// (0x0005bf20) link_highlight_primary_small_pane_t1

0x1f89,	// (0x0005bf2f) link_highlight_secondary_pane_g1

0x1f91,	// (0x0005bf37) link_highlight_secondary_pane_t1

0x2de8,	// (0x0005cd8e) link_highlight_title_pane_g1

0x2df0,	// (0x0005cd96) link_highlight_title_pane_t1

0x2dd1,	// (0x0005cd77) link_highlight_digital_pane_g1

0x2dd9,	// (0x0005cd7f) link_highlight_digital_pane_t1

0x2c99,	// (0x0005cc3f) copy_highlight_primary_pane_g1

0x2cb0,	// (0x0005cc56) copy_highlight_primary_pane_t1

0x2c99,	// (0x0005cc3f) copy_highlight_primary_small_pane_g1

0x2ca1,	// (0x0005cc47) copy_highlight_primary_small_pane_t1

0x1fa0,	// (0x0005bf46) copy_highlight_secondary_pane_g1

0x1fa8,	// (0x0005bf4e) copy_highlight_secondary_pane_t1

0x2c82,	// (0x0005cc28) copy_highlight_title_pane_g1

0x2c8a,	// (0x0005cc30) copy_highlight_title_pane_t1

0x2c99,	// (0x0005cc3f) copy_highlight_digital_pane_g1

0x414f,	// (0x0005e0f5) copy_highlight_digital_pane_t1

0x40a3,	// (0x0005e049) graphic_text_primary_pane_g1

0x4133,	// (0x0005e0d9) graphic_text_primary_pane_t1

0x4141,	// (0x0005e0e7) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00069974) graphic_text_primary_pane_t

0x410f,	// (0x0005e0b5) graphic_text_primary_small_pane_g1

0x4117,	// (0x0005e0bd) graphic_text_primary_small_pane_t1

0x4125,	// (0x0005e0cb) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006996f) graphic_text_primary_small_pane_t

0x40eb,	// (0x0005e091) graphic_text_secondary_pane_g1

0x40f3,	// (0x0005e099) graphic_text_secondary_pane_t1

0x4101,	// (0x0005e0a7) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006996a) graphic_text_secondary_pane_t

0x40c7,	// (0x0005e06d) graphic_text_title_pane_g1

0x40cf,	// (0x0005e075) graphic_text_title_pane_t1

0x40dd,	// (0x0005e083) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00069965) graphic_text_title_pane_t

0x40a3,	// (0x0005e049) graphic_text_digital_pane_g1

0x40ab,	// (0x0005e051) graphic_text_digital_pane_t1

0x40b9,	// (0x0005e05f) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00069960) graphic_text_digital_pane_t

0x59bb,	// (0x0005f961) navi_icon_pane_srt_ParamLimits

0x59bb,	// (0x0005f961) navi_icon_pane_srt

0x596d,	// (0x0005f913) navi_midp_pane_srt

0x596d,	// (0x0005f913) navi_navi_pane_srt

0x59bb,	// (0x0005f961) navi_text_pane_srt_ParamLimits

0x59bb,	// (0x0005f961) navi_text_pane_srt

0x406e,	// (0x0005e014) navi_navi_icon_text_pane_srt

0x4076,	// (0x0005e01c) navi_navi_pane_srt_g1_ParamLimits

0x4076,	// (0x0005e01c) navi_navi_pane_srt_g1

0x4088,	// (0x0005e02e) navi_navi_pane_srt_g2_ParamLimits

0x4088,	// (0x0005e02e) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006995b) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006995b) navi_navi_pane_srt_g

0x409a,	// (0x0005e040) navi_navi_tabs_pane_srt

0x406e,	// (0x0005e014) navi_navi_text_pane_srt

0x406e,	// (0x0005e014) navi_navi_volume_pane_srt

0x405f,	// (0x0005e005) navi_navi_text_pane_srt_t1

0x0b2f,	// (0x0005aad5) navi_navi_volume_pane_srt_g1

0x0b37,	// (0x0005aadd) volume_small_pane_srt_ParamLimits

0x0b37,	// (0x0005aadd) volume_small_pane_srt

0xf496,	// (0x0006943c) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x0006943c) volume_small_pane_srt_g1

0xf4a6,	// (0x0006944c) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x0006944c) volume_small_pane_srt_g2

0xf4b7,	// (0x0006945d) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x0006945d) volume_small_pane_srt_g3

0xf4c8,	// (0x0006946e) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x0006946e) volume_small_pane_srt_g4

0xf4d9,	// (0x0006947f) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x0006947f) volume_small_pane_srt_g5

0xf4ea,	// (0x00069490) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x00069490) volume_small_pane_srt_g6

0xf4fb,	// (0x000694a1) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x000694a1) volume_small_pane_srt_g7

0xf50c,	// (0x000694b2) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x000694b2) volume_small_pane_srt_g8

0xf51d,	// (0x000694c3) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x000694c3) volume_small_pane_srt_g9

0xf52e,	// (0x000694d4) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x000694d4) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00069708) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00069708) volume_small_pane_srt_g

0x89d7,	// (0x0006297d) query_popup_data_pane_cp2

0x4045,	// (0x0005dfeb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4045,	// (0x0005dfeb) navi_navi_icon_text_pane_srt_t1

0x2f21,	// (0x0005cec7) navi_tabs_2_long_pane_srt

0x2f21,	// (0x0005cec7) navi_tabs_2_pane_srt

0x2f21,	// (0x0005cec7) navi_tabs_3_long_pane_srt

0x2f21,	// (0x0005cec7) navi_tabs_3_pane_srt

0x2f21,	// (0x0005cec7) navi_tabs_4_pane_srt

0x0b0f,	// (0x0005aab5) tabs_2_active_pane_srt_ParamLimits

0x0b0f,	// (0x0005aab5) tabs_2_active_pane_srt

0x0b1f,	// (0x0005aac5) tabs_2_passive_pane_srt_ParamLimits

0x0b1f,	// (0x0005aac5) tabs_2_passive_pane_srt

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp1_srt

0x4011,	// (0x0005dfb7) bg_passive_tab_pane_g1_cp1_srt

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp1_srt

0x401a,	// (0x0005dfc0) bg_passive_tab_pane_g3_cp1_srt

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp1_srt_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp1_srt

0x4023,	// (0x0005dfc9) tabs_2_active_pane_srt_g1

0xc7ee,	// (0x00066794) tabs_2_active_pane_srt_t1_ParamLimits

0xc7ee,	// (0x00066794) tabs_2_active_pane_srt_t1

0x4011,	// (0x0005dfb7) bg_active_tab_pane_g1_cp1_srt

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp1_srt

0x401a,	// (0x0005dfc0) bg_active_tab_pane_g3_cp1_srt

0x0adc,	// (0x0005aa82) tabs_3_active_pane_srt_ParamLimits

0x0adc,	// (0x0005aa82) tabs_3_active_pane_srt

0x0aed,	// (0x0005aa93) tabs_3_passive_pane_cp_srt_ParamLimits

0x0aed,	// (0x0005aa93) tabs_3_passive_pane_cp_srt

0x0afe,	// (0x0005aaa4) tabs_3_passive_pane_srt_ParamLimits

0x0afe,	// (0x0005aaa4) tabs_3_passive_pane_srt

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x26f7,	// (0x0005c69d) bg_passive_tab_pane_cp2_srt

0x1fb7,	// (0x0005bf5d) bg_passive_tab_pane_g1_cp2_srt

0xe37e,	// (0x00068324) bg_passive_tab_pane_g2_cp2_srt

0x1fc0,	// (0x0005bf66) bg_passive_tab_pane_g3_cp2_srt

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp2_srt_ParamLimits

0x59f7,	// (0x0005f99d) bg_active_tab_pane_cp2_srt

0x3ff7,	// (0x0005df9d) tabs_3_active_pane_srt_g1

0xc7d8,	// (0x0006677e) tabs_3_active_pane_srt_t1_ParamLimits

0xc7d8,	// (0x0006677e) tabs_3_active_pane_srt_t1

0x1fb7,	// (0x0005bf5d) bg_active_tab_pane_g1_cp2_srt

0xe37e,	// (0x00068324) bg_active_tab_pane_g2_cp2_srt

0x1fc0,	// (0x0005bf66) bg_active_tab_pane_g3_cp2_srt

0x0a94,	// (0x0005aa3a) tabs_4_active_pane_srt_ParamLimits

0x0a94,	// (0x0005aa3a) tabs_4_active_pane_srt

0x0aa6,	// (0x0005aa4c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0aa6,	// (0x0005aa4c) tabs_4_passive_pane_cp2_srt

0x0029,	// (0x00059fcf) aid_size_cell_toolbar

0x3c14,	// (0x0005dbba) main_idle_act_pane_ParamLimits

0x020a,	// (0x0005a1b0) popup_large_graphic_colour_window_ParamLimits

0xb4bf,	// (0x00065465) popup_toolbar_window_ParamLimits

0xb4bf,	// (0x00065465) popup_toolbar_window

0x3de6,	// (0x0005dd8c) list_single_graphic_2heading_pane_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_graphic_2heading_pane

0x9060,	// (0x00063006) aid_size_cell_apps_grid_lsc_pane

0x9072,	// (0x00063018) aid_size_cell_apps_grid_prt_pane

0x212f,	// (0x0005c0d5) bg_wml_button_pane_cp1_ParamLimits

0x212f,	// (0x0005c0d5) bg_wml_button_pane_cp1

0xc3d6,	// (0x0006637c) form_midp_field_text_pane_t1_ParamLimits

0x26f7,	// (0x0005c69d) input_focus_pane_cp050_ParamLimits

0x2930,	// (0x0005c8d6) list_midp_form_text_pane_ParamLimits

0x28e2,	// (0x0005c888) input_focus_pane_cp051_ParamLimits

0x28f6,	// (0x0005c89c) list_midp_choice_pane_ParamLimits

0x27b0,	// (0x0005c756) list_single_2graphic_pane_cp3_ParamLimits

0x27b0,	// (0x0005c756) list_single_2graphic_pane_cp3

0x27c6,	// (0x0005c76c) list_single_midp_graphic_pane_ParamLimits

0x27c6,	// (0x0005c76c) list_single_midp_graphic_pane

0xe5b1,	// (0x00068557) list_single_graphic_2heading_pane_g1_ParamLimits

0xe5b1,	// (0x00068557) list_single_graphic_2heading_pane_g1

0xe5bd,	// (0x00068563) list_single_graphic_2heading_pane_g4_ParamLimits

0xe5bd,	// (0x00068563) list_single_graphic_2heading_pane_g4

0xe5c9,	// (0x0006856f) list_single_graphic_2heading_pane_g5_ParamLimits

0xe5c9,	// (0x0006856f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006975b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006975b) list_single_graphic_2heading_pane_g

0xe5d5,	// (0x0006857b) list_single_graphic_2heading_pane_t1_ParamLimits

0xe5d5,	// (0x0006857b) list_single_graphic_2heading_pane_t1

0xe5e9,	// (0x0006858f) list_single_graphic_2heading_pane_t2_ParamLimits

0xe5e9,	// (0x0006858f) list_single_graphic_2heading_pane_t2

0xe605,	// (0x000685ab) list_single_graphic_2heading_pane_t3_ParamLimits

0xe605,	// (0x000685ab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00069762) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00069762) list_single_graphic_2heading_pane_t

0x259d,	// (0x0005c543) bg_popup_sub_pane_cp2

0x25c7,	// (0x0005c56d) grid_toobar_pane

0x0670,	// (0x0005a616) cell_toolbar_pane_ParamLimits

0x0670,	// (0x0005a616) cell_toolbar_pane

0x260f,	// (0x0005c5b5) cell_toolbar_pane_g1_ParamLimits

0x260f,	// (0x0005c5b5) cell_toolbar_pane_g1

0x2623,	// (0x0005c5c9) cell_toolbar_pane_g2_ParamLimits

0x2623,	// (0x0005c5c9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00069770) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00069770) cell_toolbar_pane_g

0x2645,	// (0x0005c5eb) grid_highlight_pane_cp2_ParamLimits

0x2645,	// (0x0005c5eb) grid_highlight_pane_cp2

0x265f,	// (0x0005c605) toolbar_button_pane

0x266b,	// (0x0005c611) toolbar_button_pane_g1

0x2673,	// (0x0005c619) toolbar_button_pane_g2

0x267b,	// (0x0005c621) toolbar_button_pane_g3

0x2683,	// (0x0005c629) toolbar_button_pane_g4

0x268b,	// (0x0005c631) toolbar_button_pane_g5

0x2693,	// (0x0005c639) toolbar_button_pane_g6

0x269b,	// (0x0005c641) toolbar_button_pane_g7

0x26a3,	// (0x0005c649) toolbar_button_pane_g8

0x26ab,	// (0x0005c651) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00069775) toolbar_button_pane_g

0x06a8,	// (0x0005a64e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06a8,	// (0x0005a64e) list_single_2graphic_pane_g1_cp3

0xb793,	// (0x00065739) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb793,	// (0x00065739) list_single_2graphic_pane_g2_cp3

0x06c5,	// (0x0005a66b) list_single_2graphic_pane_g3_cp3

0x06cd,	// (0x0005a673) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06cd,	// (0x0005a673) list_single_2graphic_pane_g4_cp3

0x06d9,	// (0x0005a67f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x06d9,	// (0x0005a67f) list_single_2graphic_pane_t1_cp3

0x06f4,	// (0x0005a69a) list_single_midp_graphic_pane_g2_ParamLimits

0x06f4,	// (0x0005a69a) list_single_midp_graphic_pane_g2

0xe599,	// (0x0006853f) aid_zoom_text_primary

0xe5a1,	// (0x00068547) aid_zoom_text_secondary

0xabe5,	// (0x00064b8b) status_small_pane_g7_ParamLimits

0xabe5,	// (0x00064b8b) status_small_pane_g7

0xac08,	// (0x00064bae) status_small_pane_t1_ParamLimits

0x9d9f,	// (0x00063d45) title_pane_g2

0x0003,

0xf54e,	// (0x000694f4) title_pane_g

0xa03f,	// (0x00063fe5) aid_size_cell_colour_1_pane_ParamLimits

0xa03f,	// (0x00063fe5) aid_size_cell_colour_1_pane

0xa053,	// (0x00063ff9) aid_size_cell_colour_2_pane_ParamLimits

0xa053,	// (0x00063ff9) aid_size_cell_colour_2_pane

0xa067,	// (0x0006400d) aid_size_cell_colour_3_pane_ParamLimits

0xa067,	// (0x0006400d) aid_size_cell_colour_3_pane

0xa07b,	// (0x00064021) aid_size_cell_colour_4_pane_ParamLimits

0xa07b,	// (0x00064021) aid_size_cell_colour_4_pane

0xf0f7,	// (0x0006909d) title_pane_stacon_g1_ParamLimits

0xf0f7,	// (0x0006909d) title_pane_stacon_g1

0x2d07,	// (0x0005ccad) popup_note_wait_window_g3_ParamLimits

0x2d07,	// (0x0005ccad) popup_note_wait_window_g3

0x2d7e,	// (0x0005cd24) popup_note_wait_window_t5_ParamLimits

0x2d7e,	// (0x0005cd24) popup_note_wait_window_t5

0x596d,	// (0x0005f913) main_feb_china_hwr_fs_writing_pane

0xae58,	// (0x00064dfe) popup_feb_china_hwr_fs_window_ParamLimits

0xae58,	// (0x00064dfe) popup_feb_china_hwr_fs_window

0xb7a4,	// (0x0006574a) aid_size_cell_hwr_fs_ParamLimits

0xb7a4,	// (0x0006574a) aid_size_cell_hwr_fs

0x26f7,	// (0x0005c69d) bg_popup_sub_pane_cp3_ParamLimits

0x26f7,	// (0x0005c69d) bg_popup_sub_pane_cp3

0xb7b9,	// (0x0006575f) grid_hwr_fs_pane_ParamLimits

0xb7b9,	// (0x0006575f) grid_hwr_fs_pane

0x0743,	// (0x0005a6e9) linegrid_hwr_fs_pane_ParamLimits

0x0743,	// (0x0005a6e9) linegrid_hwr_fs_pane

0xb7d1,	// (0x00065777) cell_hwr_fs_pane_ParamLimits

0xb7d1,	// (0x00065777) cell_hwr_fs_pane

0x2703,	// (0x0005c6a9) linegrid_hwr_fs_pane_g1_ParamLimits

0x2703,	// (0x0005c6a9) linegrid_hwr_fs_pane_g1

0xc377,	// (0x0006631d) linegrid_hwr_fs_pane_g2_ParamLimits

0xc377,	// (0x0006631d) linegrid_hwr_fs_pane_g2

0x2721,	// (0x0005c6c7) linegrid_hwr_fs_pane_g3_ParamLimits

0x2721,	// (0x0005c6c7) linegrid_hwr_fs_pane_g3

0x0777,	// (0x0005a71d) linegrid_hwr_fs_pane_g4_ParamLimits

0x0777,	// (0x0005a71d) linegrid_hwr_fs_pane_g4

0x0795,	// (0x0005a73b) linegrid_hwr_fs_pane_g5_ParamLimits

0x0795,	// (0x0005a73b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006979b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006979b) linegrid_hwr_fs_pane_g

0x272d,	// (0x0005c6d3) cell_hwr_fs_pane_g1_ParamLimits

0x272d,	// (0x0005c6d3) cell_hwr_fs_pane_g1

0x24d8,	// (0x0005c47e) cell_hwr_fs_pane_g2_ParamLimits

0x24d8,	// (0x0005c47e) cell_hwr_fs_pane_g2

0xc389,	// (0x0006632f) cell_hwr_fs_pane_g3_ParamLimits

0xc389,	// (0x0006632f) cell_hwr_fs_pane_g3

0xc396,	// (0x0006633c) cell_hwr_fs_pane_g4_ParamLimits

0xc396,	// (0x0006633c) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x000697a6) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000697a6) cell_hwr_fs_pane_g

0xb7f7,	// (0x0006579d) cell_hwr_fs_pane_t1

0x596d,	// (0x0005f913) grid_highlight_pane_cp6

0x596d,	// (0x0005f913) main_idle_act2_pane

0x8e6f,	// (0x00062e15) aid_inside_area_popup_secondary

0xc44e,	// (0x000663f4) aid_inside_area_window_primary_ParamLimits

0xc44e,	// (0x000663f4) aid_inside_area_window_primary

0x415e,	// (0x0005e104) ai2_news_ticker_pane

0x4166,	// (0x0005e10c) aid_size_cell_ai1_link_ParamLimits

0x4166,	// (0x0005e10c) aid_size_cell_ai1_link

0x4180,	// (0x0005e126) popup_ai2_data_window_ParamLimits

0x4180,	// (0x0005e126) popup_ai2_data_window

0x419e,	// (0x0005e144) popup_ai2_link_window_ParamLimits

0x419e,	// (0x0005e144) popup_ai2_link_window

0x26f7,	// (0x0005c69d) bg_popup_sub_pane_cp4_ParamLimits

0x26f7,	// (0x0005c69d) bg_popup_sub_pane_cp4

0x41b4,	// (0x0005e15a) grid_ai2_link_pane_ParamLimits

0x41b4,	// (0x0005e15a) grid_ai2_link_pane

0x41cb,	// (0x0005e171) popup_ai2_link_window_g1_ParamLimits

0x41cb,	// (0x0005e171) popup_ai2_link_window_g1

0x41d7,	// (0x0005e17d) popup_ai2_link_window_g2_ParamLimits

0x41d7,	// (0x0005e17d) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00069979) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00069979) popup_ai2_link_window_g

0x41e8,	// (0x0005e18e) ai2_mp_button_pane

0x41f0,	// (0x0005e196) ai2_mp_volume_pane

0x28e2,	// (0x0005c888) bg_popup_sub_pane_cp5_ParamLimits

0x28e2,	// (0x0005c888) bg_popup_sub_pane_cp5

0x41f8,	// (0x0005e19e) heading_ai2_gene_pane_ParamLimits

0x41f8,	// (0x0005e19e) heading_ai2_gene_pane

0x4204,	// (0x0005e1aa) list_ai2_gene_pane_ParamLimits

0x4204,	// (0x0005e1aa) list_ai2_gene_pane

0x424c,	// (0x0005e1f2) cell_ai2_link_pane_ParamLimits

0x424c,	// (0x0005e1f2) cell_ai2_link_pane

0x4262,	// (0x0005e208) cell_ai2_link_pane_g1

0x596d,	// (0x0005f913) grid_highlight_pane_cp7

0x0b4c,	// (0x0005aaf2) ai2_mp_volume_pane_g1

0x4335,	// (0x0005e2db) ai2_mp_volume_pane_g2

0x42aa,	// (0x0005e250) list_ai2_gene_pane_t1

0x433d,	// (0x0005e2e3) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00069992) ai2_mp_volume_pane_g

0x0b54,	// (0x0005aafa) volume_small_pane_cp3

0x4345,	// (0x0005e2eb) aid_size_cell_ai2_button

0x434d,	// (0x0005e2f3) grid_ai2_button_pane

0x4356,	// (0x0005e2fc) cell_ai2_button_pane_ParamLimits

0x4356,	// (0x0005e2fc) cell_ai2_button_pane

0x5963,	// (0x0005f909) cell_ai2_button_pane_g1

0x596d,	// (0x0005f913) grid_highlight_pane_cp8

0x42f5,	// (0x0005e29b) ai2_gene_pane_t1_ParamLimits

0x42f5,	// (0x0005e29b) ai2_gene_pane_t1

0xadd4,	// (0x00064d7a) aid_height_parent_landscape

0xc5f5,	// (0x0006659b) aid_height_set_list

0x3c14,	// (0x0005dbba) aid_size_parent

0xc7ac,	// (0x00066752) aid_size_cell_graphic_pane_ParamLimits

0x4214,	// (0x0005e1ba) popup_ai2_data_window_g1_ParamLimits

0x4214,	// (0x0005e1ba) popup_ai2_data_window_g1

0x4220,	// (0x0005e1c6) ai2_news_ticker_pane_g1

0x4228,	// (0x0005e1ce) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006997e) ai2_news_ticker_pane_g

0x4230,	// (0x0005e1d6) ai2_news_ticker_pane_t1

0x423e,	// (0x0005e1e4) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00069983) ai2_news_ticker_pane_t

0x426b,	// (0x0005e211) heading_ai2_gene_pane_g1

0x4273,	// (0x0005e219) heading_ai2_gene_pane_t1_ParamLimits

0x4273,	// (0x0005e219) heading_ai2_gene_pane_t1

0x4288,	// (0x0005e22e) list_highlight_pane_cp6

0x4290,	// (0x0005e236) ai2_gene_pane_ParamLimits

0x4290,	// (0x0005e236) ai2_gene_pane

0x42b8,	// (0x0005e25e) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00069988) list_ai2_gene_pane_t

0x42c6,	// (0x0005e26c) list_highlight_pane_cp8_ParamLimits

0x42c6,	// (0x0005e26c) list_highlight_pane_cp8

0x42d7,	// (0x0005e27d) ai2_gene_pane_g1_ParamLimits

0x42d7,	// (0x0005e27d) ai2_gene_pane_g1

0x42e9,	// (0x0005e28f) ai2_gene_pane_g2_ParamLimits

0x42e9,	// (0x0005e28f) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006998d) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006998d) ai2_gene_pane_g

0x8cf5,	// (0x00062c9b) scroll_pane_cp12

0xad91,	// (0x00064d37) control_pane_t3_ParamLimits

0xad91,	// (0x00064d37) control_pane_t3

0xabf9,	// (0x00064b9f) status_small_pane_g8_ParamLimits

0xabf9,	// (0x00064b9f) status_small_pane_g8

0xaefa,	// (0x00064ea0) popup_find_window_ParamLimits

0xb1ab,	// (0x00065151) popup_note_image_window_ParamLimits

0xe61d,	// (0x000685c3) list_double2_graphic_pane_vc_g1_ParamLimits

0xe61d,	// (0x000685c3) list_double2_graphic_pane_vc_g1

0x1d71,	// (0x0005bd17) list_double2_graphic_pane_vc_g2_ParamLimits

0x1d71,	// (0x0005bd17) list_double2_graphic_pane_vc_g2

0x2603,	// (0x0005c5a9) list_double2_graphic_pane_vc_g3_ParamLimits

0x2603,	// (0x0005c5a9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00069769) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00069769) list_double2_graphic_pane_vc_g

0xe629,	// (0x000685cf) list_double2_graphic_pane_vc_t1_ParamLimits

0xe629,	// (0x000685cf) list_double2_graphic_pane_vc_t1

0x1d71,	// (0x0005bd17) list_single_heading_pane_vc_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_single_heading_pane_vc_g1

0x2603,	// (0x0005c5a9) list_single_heading_pane_vc_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069578) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069578) list_single_heading_pane_vc_g

0xe63f,	// (0x000685e5) list_single_heading_pane_vc_t1_ParamLimits

0xe63f,	// (0x000685e5) list_single_heading_pane_vc_t1

0xe655,	// (0x000685fb) list_single_heading_pane_vc_t2_ParamLimits

0xe655,	// (0x000685fb) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006978a) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006978a) list_single_heading_pane_vc_t

0x26b3,	// (0x0005c659) list_setting_number_pane_vc_g1_ParamLimits

0x26b3,	// (0x0005c659) list_setting_number_pane_vc_g1

0x26bf,	// (0x0005c665) list_setting_number_pane_vc_g2_ParamLimits

0x26bf,	// (0x0005c665) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006978f) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006978f) list_setting_number_pane_vc_g

0xe667,	// (0x0006860d) list_setting_number_pane_vc_t1_ParamLimits

0xe667,	// (0x0006860d) list_setting_number_pane_vc_t1

0xe67b,	// (0x00068621) list_setting_number_pane_vc_t2_ParamLimits

0xe67b,	// (0x00068621) list_setting_number_pane_vc_t2

0xe697,	// (0x0006863d) list_setting_number_pane_vc_t3_ParamLimits

0xe697,	// (0x0006863d) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00069794) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00069794) list_setting_number_pane_vc_t

0xe6c5,	// (0x0006866b) set_value_pane_vc_ParamLimits

0xe6c5,	// (0x0006866b) set_value_pane_vc

0x3de6,	// (0x0005dd8c) list_double2_graphic_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double2_graphic_pane_vc

0x3de6,	// (0x0005dd8c) list_double2_large_graphic_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double2_large_graphic_pane_vc

0x3de6,	// (0x0005dd8c) list_double2_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double2_pane_vc

0x3de6,	// (0x0005dd8c) list_double_graphic_heading_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_graphic_heading_pane_vc

0x3de6,	// (0x0005dd8c) list_double_graphic_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_graphic_pane_vc

0x3de6,	// (0x0005dd8c) list_double_heading_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_heading_pane_vc

0x3dfa,	// (0x0005dda0) list_double_large_graphic_pane_vc_ParamLimits

0x3dfa,	// (0x0005dda0) list_double_large_graphic_pane_vc

0x3de6,	// (0x0005dd8c) list_double_number_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_number_pane_vc

0x3de6,	// (0x0005dd8c) list_double_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_pane_vc

0x3de6,	// (0x0005dd8c) list_double_time_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_double_time_pane_vc

0x3de6,	// (0x0005dd8c) list_setting_number_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_setting_number_pane_vc

0x3de6,	// (0x0005dd8c) list_setting_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_setting_pane_vc

0x3de6,	// (0x0005dd8c) list_single_graphic_heading_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_graphic_heading_pane_vc

0x3de6,	// (0x0005dd8c) list_single_heading_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_heading_pane_vc

0x3de6,	// (0x0005dd8c) list_single_number_heading_pane_vc_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_number_heading_pane_vc

0xe61d,	// (0x000685c3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe61d,	// (0x000685c3) list_double_graphic_heading_pane_vc_g1

0x3973,	// (0x0005d919) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3973,	// (0x0005d919) list_double_graphic_heading_pane_vc_g2

0x397f,	// (0x0005d925) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x397f,	// (0x0005d925) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x00069999) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x00069999) list_double_graphic_heading_pane_vc_g

0xe70e,	// (0x000686b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe70e,	// (0x000686b4) list_double_graphic_heading_pane_vc_t1

0xe724,	// (0x000686ca) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe724,	// (0x000686ca) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x000699a0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x000699a0) list_double_graphic_heading_pane_vc_t

0x26b3,	// (0x0005c659) list_setting_pane_vc_g1_ParamLimits

0x26b3,	// (0x0005c659) list_setting_pane_vc_g1

0x26bf,	// (0x0005c665) list_setting_pane_vc_g2_ParamLimits

0x26bf,	// (0x0005c665) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006978f) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006978f) list_setting_pane_vc_g

0xe742,	// (0x000686e8) list_setting_pane_vc_t1_ParamLimits

0xe742,	// (0x000686e8) list_setting_pane_vc_t1

0xe75e,	// (0x00068704) list_setting_pane_vc_t2_ParamLimits

0xe75e,	// (0x00068704) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x000699e3) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x000699e3) list_setting_pane_vc_t

0xe6c5,	// (0x0006866b) set_value_pane_cp_vc_ParamLimits

0xe6c5,	// (0x0006866b) set_value_pane_cp_vc

0x1d71,	// (0x0005bd17) list_single_number_heading_pane_vc_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_single_number_heading_pane_vc_g1

0x2603,	// (0x0005c5a9) list_single_number_heading_pane_vc_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069578) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069578) list_single_number_heading_pane_vc_g

0xe77a,	// (0x00068720) list_single_number_heading_pane_vc_t1_ParamLimits

0xe77a,	// (0x00068720) list_single_number_heading_pane_vc_t1

0xe059,	// (0x00067fff) list_single_number_heading_pane_vc_t2_ParamLimits

0xe059,	// (0x00067fff) list_single_number_heading_pane_vc_t2

0xe06b,	// (0x00068011) list_single_number_heading_pane_vc_t3_ParamLimits

0xe06b,	// (0x00068011) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x000699e8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x000699e8) list_single_number_heading_pane_vc_t

0xe61d,	// (0x000685c3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe61d,	// (0x000685c3) list_single_graphic_heading_pane_vc_g1

0x1d71,	// (0x0005bd17) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1d71,	// (0x0005bd17) list_single_graphic_heading_pane_vc_g4

0x2603,	// (0x0005c5a9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2603,	// (0x0005c5a9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00069769) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00069769) list_single_graphic_heading_pane_vc_g

0xe790,	// (0x00068736) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe790,	// (0x00068736) list_single_graphic_heading_pane_vc_t1

0xe7a6,	// (0x0006874c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe7a6,	// (0x0006874c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x000699ef) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x000699ef) list_single_graphic_heading_pane_vc_t

0x1d71,	// (0x0005bd17) list_double2_pane_vc_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_double2_pane_vc_g1

0x2603,	// (0x0005c5a9) list_double2_pane_vc_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069578) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069578) list_double2_pane_vc_g

0xe6f8,	// (0x0006869e) list_double2_pane_vc_t1_ParamLimits

0xe6f8,	// (0x0006869e) list_double2_pane_vc_t1

0x398b,	// (0x0005d931) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x398b,	// (0x0005d931) list_double2_large_graphic_pane_vc_g1

0x1d71,	// (0x0005bd17) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1d71,	// (0x0005bd17) list_double2_large_graphic_pane_vc_g2

0x2603,	// (0x0005c5a9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2603,	// (0x0005c5a9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00069590) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00069590) list_double2_large_graphic_pane_vc_g

0xe07d,	// (0x00068023) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe07d,	// (0x00068023) list_double2_large_graphic_pane_vc_t1

0x3997,	// (0x0005d93d) list_double_time_pane_vc_g1_ParamLimits

0x3997,	// (0x0005d93d) list_double_time_pane_vc_g1

0x39a3,	// (0x0005d949) list_double_time_pane_vc_g2_ParamLimits

0x39a3,	// (0x0005d949) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x000699f4) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x000699f4) list_double_time_pane_vc_g

0xe7b8,	// (0x0006875e) list_double_time_pane_vc_t1_ParamLimits

0xe7b8,	// (0x0006875e) list_double_time_pane_vc_t1

0xe7e2,	// (0x00068788) list_double_time_pane_vc_t2_ParamLimits

0xe7e2,	// (0x00068788) list_double_time_pane_vc_t2

0xe82b,	// (0x000687d1) list_double_time_pane_vc_t3_ParamLimits

0xe82b,	// (0x000687d1) list_double_time_pane_vc_t3

0xe83d,	// (0x000687e3) list_double_time_pane_vc_t4_ParamLimits

0xe83d,	// (0x000687e3) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x000699f9) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x000699f9) list_double_time_pane_vc_t

0x1d71,	// (0x0005bd17) list_double_pane_vc_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_double_pane_vc_g1

0x2603,	// (0x0005c5a9) list_double_pane_vc_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069578) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069578) list_double_pane_vc_g

0xe851,	// (0x000687f7) list_double_pane_vc_t1_ParamLimits

0xe851,	// (0x000687f7) list_double_pane_vc_t1

0xe865,	// (0x0006880b) list_double_pane_vc_t2_ParamLimits

0xe865,	// (0x0006880b) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00069a02) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00069a02) list_double_pane_vc_t

0x1d71,	// (0x0005bd17) list_double_number_pane_vc_g1_ParamLimits

0x1d71,	// (0x0005bd17) list_double_number_pane_vc_g1

0x2603,	// (0x0005c5a9) list_double_number_pane_vc_g2_ParamLimits

0x2603,	// (0x0005c5a9) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069578) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069578) list_double_number_pane_vc_g

0xe6e6,	// (0x0006868c) list_double_number_pane_vc_t1_ParamLimits

0xe6e6,	// (0x0006868c) list_double_number_pane_vc_t1

0xe87b,	// (0x00068821) list_double_number_pane_vc_t2_ParamLimits

0xe87b,	// (0x00068821) list_double_number_pane_vc_t2

0xe865,	// (0x0006880b) list_double_number_pane_vc_t3_ParamLimits

0xe865,	// (0x0006880b) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00069a07) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00069a07) list_double_number_pane_vc_t

0x39af,	// (0x0005d955) list_double_large_graphic_pane_vc_g1_ParamLimits

0x39af,	// (0x0005d955) list_double_large_graphic_pane_vc_g1

0x39d1,	// (0x0005d977) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39d1,	// (0x0005d977) list_double_large_graphic_pane_vc_g2

0x39e5,	// (0x0005d98b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39e5,	// (0x0005d98b) list_double_large_graphic_pane_vc_g3

0xe88f,	// (0x00068835) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe88f,	// (0x00068835) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00069a0e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00069a0e) list_double_large_graphic_pane_vc_g

0xe89e,	// (0x00068844) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe89e,	// (0x00068844) list_double_large_graphic_pane_vc_t1

0xe8ba,	// (0x00068860) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe8ba,	// (0x00068860) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00069a17) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00069a17) list_double_large_graphic_pane_vc_t

0x3973,	// (0x0005d919) list_double_heading_pane_vc_g1_ParamLimits

0x3973,	// (0x0005d919) list_double_heading_pane_vc_g1

0x397f,	// (0x0005d925) list_double_heading_pane_vc_g2_ParamLimits

0x397f,	// (0x0005d925) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x00069a1c) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x00069a1c) list_double_heading_pane_vc_g

0xe8da,	// (0x00068880) list_double_heading_pane_vc_t1_ParamLimits

0xe8da,	// (0x00068880) list_double_heading_pane_vc_t1

0xe8ec,	// (0x00068892) list_double_heading_pane_vc_t2_ParamLimits

0xe8ec,	// (0x00068892) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00069a21) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00069a21) list_double_heading_pane_vc_t

0xe904,	// (0x000688aa) list_double_graphic_pane_vc_g1_ParamLimits

0xe904,	// (0x000688aa) list_double_graphic_pane_vc_g1

0x39f4,	// (0x0005d99a) list_double_graphic_pane_vc_g2_ParamLimits

0x39f4,	// (0x0005d99a) list_double_graphic_pane_vc_g2

0x1d71,	// (0x0005bd17) list_double_graphic_pane_vc_g3_ParamLimits

0x1d71,	// (0x0005bd17) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00069a26) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00069a26) list_double_graphic_pane_vc_g

0xe910,	// (0x000688b6) list_double_graphic_pane_vc_t1_ParamLimits

0xe910,	// (0x000688b6) list_double_graphic_pane_vc_t1

0xe93a,	// (0x000688e0) list_double_graphic_pane_vc_t2_ParamLimits

0xe93a,	// (0x000688e0) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00069a2f) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00069a2f) list_double_graphic_pane_vc_t

0xdfa4,	// (0x00067f4a) aid_size_cell_fastswap

0x9b78,	// (0x00063b1e) aid_size_cell_touch_ParamLimits

0x9b78,	// (0x00063b1e) aid_size_cell_touch

0xeffa,	// (0x00068fa0) popup_fast_swap_wide_window_ParamLimits

0xeffa,	// (0x00068fa0) popup_fast_swap_wide_window

0x9d36,	// (0x00063cdc) touch_pane_ParamLimits

0x9d36,	// (0x00063cdc) touch_pane

0x8d4b,	// (0x00062cf1) button_value_adjust_pane_cp2

0xe0b6,	// (0x0006805c) button_value_adjust_pane_cp4

0xe0be,	// (0x00068064) form_field_data_pane_cp2

0xa63e,	// (0x000645e4) form_field_data_wide_pane_cp2

0x9097,	// (0x0006303d) bg_scroll_pane_ParamLimits

0xf253,	// (0x000691f9) scroll_handle_pane_ParamLimits

0xf267,	// (0x0006920d) scroll_sc2_down_pane_ParamLimits

0xf267,	// (0x0006920d) scroll_sc2_down_pane

0x90c8,	// (0x0006306e) scroll_sc2_up_pane_ParamLimits

0x90c8,	// (0x0006306e) scroll_sc2_up_pane

0xc92e,	// (0x000668d4) grid_wheel_folder_pane_g1_ParamLimits

0xc92e,	// (0x000668d4) grid_wheel_folder_pane_g1

0xf42e,	// (0x000693d4) clock_nsta_pane_cp2_ParamLimits

0xf42e,	// (0x000693d4) clock_nsta_pane_cp2

0xaad7,	// (0x00064a7d) listscroll_midp_pane_ParamLimits

0xaae3,	// (0x00064a89) midp_canvas_pane

0x20ff,	// (0x0005c0a5) nsta_clock_indic_pane

0x213b,	// (0x0005c0e1) listscroll_form_pane_vc

0x2143,	// (0x0005c0e9) listscroll_set_pane_vc_ParamLimits

0x2143,	// (0x0005c0e9) listscroll_set_pane_vc

0xb625,	// (0x000655cb) clock_nsta_pane

0xb64f,	// (0x000655f5) indicator_nsta_pane

0x259d,	// (0x0005c543) bg_popup_sub_pane_cp2_ParamLimits

0x25b1,	// (0x0005c557) find_pane_cp2_ParamLimits

0x25b1,	// (0x0005c557) find_pane_cp2

0x25c7,	// (0x0005c56d) grid_toobar_pane_ParamLimits

0x26cb,	// (0x0005c671) list_form_gen_pane_vc_ParamLimits

0x26cb,	// (0x0005c671) list_form_gen_pane_vc

0x26e1,	// (0x0005c687) scroll_pane_cp8_vc_ParamLimits

0x26e1,	// (0x0005c687) scroll_pane_cp8_vc

0x275d,	// (0x0005c703) data_form_wide_pane_vc_ParamLimits

0x275d,	// (0x0005c703) data_form_wide_pane_vc

0x2769,	// (0x0005c70f) form_field_data_wide_pane_vc_g1

0x2771,	// (0x0005c717) form_field_data_wide_pane_vc_t1_ParamLimits

0x2771,	// (0x0005c717) form_field_data_wide_pane_vc_t1

0x8d5f,	// (0x00062d05) input_focus_pane_cp6_vc_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_cp6_vc

0x2a8d,	// (0x0005ca33) list_midp_pane_ParamLimits

0x3feb,	// (0x0005df91) scroll_pane_cp16_ParamLimits

0x3feb,	// (0x0005df91) scroll_pane_cp16

0x2adb,	// (0x0005ca81) button_value_adjust_pane_ParamLimits

0x2adb,	// (0x0005ca81) button_value_adjust_pane

0xc606,	// (0x000665ac) button_value_adjust_pane_cp6_ParamLimits

0xc606,	// (0x000665ac) button_value_adjust_pane_cp6

0xc680,	// (0x00066626) settings_code_pane_cp_ParamLimits

0xc680,	// (0x00066626) settings_code_pane_cp

0x5963,	// (0x0005f909) cell_touch_pane_g1

0x5963,	// (0x0005f909) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000696ae) cell_touch_pane_g

0xc804,	// (0x000667aa) cell_touch_pane_cp_ParamLimits

0xc804,	// (0x000667aa) cell_touch_pane_cp

0xc820,	// (0x000667c6) cell_touch_pane_ParamLimits

0xc820,	// (0x000667c6) cell_touch_pane

0x5963,	// (0x0005f909) scroll_sc2_down_pane_g1

0x5963,	// (0x0005f909) scroll_sc2_up_pane_g1

0x596d,	// (0x0005f913) bg_set_opt_pane_cp4_vc

0x4389,	// (0x0005e32f) list_set_graphic_pane_vc_g1_ParamLimits

0x4389,	// (0x0005e32f) list_set_graphic_pane_vc_g1

0x4395,	// (0x0005e33b) list_set_graphic_pane_vc_g2_ParamLimits

0x4395,	// (0x0005e33b) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x000699a5) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x000699a5) list_set_graphic_pane_vc_g

0x43a1,	// (0x0005e347) text_primary_small_cp13_vc_ParamLimits

0x43a1,	// (0x0005e347) text_primary_small_cp13_vc

0xe3d7,	// (0x0006837d) list_set_graphic_pane_vc_ParamLimits

0xe3d7,	// (0x0006837d) list_set_graphic_pane_vc

0x596d,	// (0x0005f913) input_focus_pane_cp2_vc

0x5963,	// (0x0005f909) setting_code_pane_vc_g1

0x59d2,	// (0x0005f978) setting_code_pane_vc_t1

0x43b9,	// (0x0005e35f) set_text_pane_vc_t1_ParamLimits

0x43b9,	// (0x0005e35f) set_text_pane_vc_t1

0x596d,	// (0x0005f913) input_focus_pane_cp1_vc

0x43d7,	// (0x0005e37d) list_set_text_pane_vc

0x5963,	// (0x0005f909) setting_text_pane_vc_g1

0x596d,	// (0x0005f913) bg_set_opt_pane_cp2_vc

0x59c9,	// (0x0005f96f) setting_slider_graphic_pane_vc_g1

0x43e1,	// (0x0005e387) setting_slider_graphic_pane_vc_t1

0x43f3,	// (0x0005e399) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x000699aa) setting_slider_graphic_pane_vc_t

0x4405,	// (0x0005e3ab) slider_set_pane_cp_vc

0x440f,	// (0x0005e3b5) slider_set_pane_vc_g1

0x4418,	// (0x0005e3be) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x000699af) slider_set_pane_vc_g

0x8db7,	// (0x00062d5d) set_opt_bg_pane_g1_copy1

0x8dbf,	// (0x00062d65) set_opt_bg_pane_g2_copy1

0x4444,	// (0x0005e3ea) set_opt_bg_pane_g3_copy1

0x8dcf,	// (0x00062d75) set_opt_bg_pane_g4_copy1

0x8dd7,	// (0x00062d7d) set_opt_bg_pane_g5_copy1

0x8ddf,	// (0x00062d85) set_opt_bg_pane_g6_copy1

0x444e,	// (0x0005e3f4) set_opt_bg_pane_g7_copy1

0x4458,	// (0x0005e3fe) set_opt_bg_pane_g8_copy1

0x4462,	// (0x0005e408) set_opt_bg_pane_g9_copy1

0x596d,	// (0x0005f913) bg_set_opt_pane_cp_vc

0x446c,	// (0x0005e412) setting_slider_pane_vc_t1

0x447b,	// (0x0005e421) setting_slider_pane_vc_t2

0x448d,	// (0x0005e433) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x000699be) setting_slider_pane_vc_t

0x449f,	// (0x0005e445) slider_set_pane_vc

0x07d8,	// (0x0005a77e) volume_set_pane_vc_g1

0x07e1,	// (0x0005a787) volume_set_pane_vc_g2

0x07ea,	// (0x0005a790) volume_set_pane_vc_g3

0x07f3,	// (0x0005a799) volume_set_pane_vc_g4

0x07fc,	// (0x0005a7a2) volume_set_pane_vc_g5

0x0805,	// (0x0005a7ab) volume_set_pane_vc_g6

0x080e,	// (0x0005a7b4) volume_set_pane_vc_g7

0x0817,	// (0x0005a7bd) volume_set_pane_vc_g8

0x0820,	// (0x0005a7c6) volume_set_pane_vc_g9

0x0829,	// (0x0005a7cf) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x000699c5) volume_set_pane_vc_g

0x44a7,	// (0x0005e44d) volume_set_pane_vc

0x44b1,	// (0x0005e457) button_value_adjust_pane_cp1_vc

0x44bb,	// (0x0005e461) list_highlight_pane_cp2_vc

0x44c4,	// (0x0005e46a) list_set_pane_vc_ParamLimits

0x44c4,	// (0x0005e46a) list_set_pane_vc

0x4532,	// (0x0005e4d8) main_pane_set_vc_t1_ParamLimits

0x4532,	// (0x0005e4d8) main_pane_set_vc_t1

0x4547,	// (0x0005e4ed) main_pane_set_vc_t2_ParamLimits

0x4547,	// (0x0005e4ed) main_pane_set_vc_t2

0x4559,	// (0x0005e4ff) main_pane_set_vc_t3_ParamLimits

0x4559,	// (0x0005e4ff) main_pane_set_vc_t3

0x456d,	// (0x0005e513) main_pane_set_vc_t4_ParamLimits

0x456d,	// (0x0005e513) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x000699da) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x000699da) main_pane_set_vc_t

0x4581,	// (0x0005e527) setting_code_pane_vc_ParamLimits

0x4581,	// (0x0005e527) setting_code_pane_vc

0x4592,	// (0x0005e538) setting_slider_graphic_pane_vc

0x4592,	// (0x0005e538) setting_slider_pane_vc

0x4592,	// (0x0005e538) setting_text_pane_vc

0x4592,	// (0x0005e538) setting_volume_pane_vc

0x459c,	// (0x0005e542) scroll_pane_cp121_vc

0x8d39,	// (0x00062cdf) set_content_pane_vc

0x45a4,	// (0x0005e54a) button_value_adjust_pane_g1

0x45ad,	// (0x0005e553) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00069a34) button_value_adjust_pane_g

0x45b6,	// (0x0005e55c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x45b6,	// (0x0005e55c) form_field_slider_wide_pane_vc_t1

0x45c8,	// (0x0005e56e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x45c8,	// (0x0005e56e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00069a39) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00069a39) form_field_slider_wide_pane_vc_t

0x59f7,	// (0x0005f99d) input_focus_pane_cp10_vc_ParamLimits

0x59f7,	// (0x0005f99d) input_focus_pane_cp10_vc

0x45f4,	// (0x0005e59a) slider_cont_pane_cp1_vc_ParamLimits

0x45f4,	// (0x0005e59a) slider_cont_pane_cp1_vc

0x4606,	// (0x0005e5ac) slider_form_pane_g1_cp2

0x4418,	// (0x0005e3be) slider_form_pane_g2_cp2

0x4633,	// (0x0005e5d9) form_field_slider_pane_vc_t3

0x4641,	// (0x0005e5e7) form_field_slider_pane_vc_t4

0x464f,	// (0x0005e5f5) slider_form_pane_vc_ParamLimits

0x464f,	// (0x0005e5f5) slider_form_pane_vc

0x465c,	// (0x0005e602) form_field_slider_pane_vc_t1_ParamLimits

0x465c,	// (0x0005e602) form_field_slider_pane_vc_t1

0x45c8,	// (0x0005e56e) form_field_slider_pane_vc_t2_ParamLimits

0x45c8,	// (0x0005e56e) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x00069a4b) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x00069a4b) form_field_slider_pane_vc_t

0x59f7,	// (0x0005f99d) input_focus_pane_cp9_vc_ParamLimits

0x59f7,	// (0x0005f99d) input_focus_pane_cp9_vc

0x4672,	// (0x0005e618) slider_cont_pane_vc_ParamLimits

0x4672,	// (0x0005e618) slider_cont_pane_vc

0x4686,	// (0x0005e62c) list_form_graphic_pane_cp_vc_ParamLimits

0x4686,	// (0x0005e62c) list_form_graphic_pane_cp_vc

0x2769,	// (0x0005c70f) form_field_popup_wide_pane_vc_g1

0x469b,	// (0x0005e641) form_field_popup_wide_pane_vc_t1_ParamLimits

0x469b,	// (0x0005e641) form_field_popup_wide_pane_vc_t1

0x8d5f,	// (0x00062d05) input_focus_pane_cp8_vc_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_cp8_vc

0x46e0,	// (0x0005e686) list_form_wide_pane_vc_ParamLimits

0x46e0,	// (0x0005e686) list_form_wide_pane_vc

0x46ec,	// (0x0005e692) list_form_graphic_pane_vc_g1

0x46f4,	// (0x0005e69a) list_form_graphic_pane_vc_t1_ParamLimits

0x46f4,	// (0x0005e69a) list_form_graphic_pane_vc_t1

0x59bb,	// (0x0005f961) list_highlight_pane_cp5_vc_ParamLimits

0x59bb,	// (0x0005f961) list_highlight_pane_cp5_vc

0x4710,	// (0x0005e6b6) list_form_graphic_pane_vc_ParamLimits

0x4710,	// (0x0005e6b6) list_form_graphic_pane_vc

0x2769,	// (0x0005c70f) form_field_popup_pane_vc_g1

0x4726,	// (0x0005e6cc) form_field_popup_pane_vc_t1_ParamLimits

0x4726,	// (0x0005e6cc) form_field_popup_pane_vc_t1

0x8d5f,	// (0x00062d05) input_focus_pane_cp7_vc_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_cp7_vc

0x473d,	// (0x0005e6e3) list_form_pane_vc_ParamLimits

0x473d,	// (0x0005e6e3) list_form_pane_vc

0x4749,	// (0x0005e6ef) data_form_pane_vc_t1_ParamLimits

0x4749,	// (0x0005e6ef) data_form_pane_vc_t1

0x8db7,	// (0x00062d5d) input_focus_pane_vc_g1

0x8dbf,	// (0x00062d65) input_focus_pane_vc_g2

0x8dc7,	// (0x00062d6d) input_focus_pane_vc_g3

0x8dcf,	// (0x00062d75) input_focus_pane_vc_g4

0x8dd7,	// (0x00062d7d) input_focus_pane_vc_g5

0x8ddf,	// (0x00062d85) input_focus_pane_vc_g6

0x8de7,	// (0x00062d8d) input_focus_pane_vc_g7

0x8def,	// (0x00062d95) input_focus_pane_vc_g8

0x8df7,	// (0x00062d9d) input_focus_pane_vc_g9

0x5963,	// (0x0005f909) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00069637) input_focus_pane_vc_g

0x275d,	// (0x0005c703) data_form_pane_vc_ParamLimits

0x275d,	// (0x0005c703) data_form_pane_vc

0x2769,	// (0x0005c70f) form_field_data_pane_vc_g1

0x4766,	// (0x0005e70c) form_field_data_pane_vc_t1_ParamLimits

0x4766,	// (0x0005e70c) form_field_data_pane_vc_t1

0x8d5f,	// (0x00062d05) input_focus_pane_vc_ParamLimits

0x8d5f,	// (0x00062d05) input_focus_pane_vc

0x4780,	// (0x0005e726) button_value_adjust_pane_cp3_vc

0x4788,	// (0x0005e72e) button_value_adjust_pane_cp5_vc

0x4790,	// (0x0005e736) form_field_data_pane_vc_ParamLimits

0x4790,	// (0x0005e736) form_field_data_pane_vc

0x47ab,	// (0x0005e751) form_field_data_pane_vc_cp2

0x47b3,	// (0x0005e759) form_field_data_wide_pane_vc_ParamLimits

0x47b3,	// (0x0005e759) form_field_data_wide_pane_vc

0x47cd,	// (0x0005e773) form_field_data_wide_pane_vc_cp2

0x47d5,	// (0x0005e77b) form_field_popup_pane_vc_ParamLimits

0x47d5,	// (0x0005e77b) form_field_popup_pane_vc

0x47f0,	// (0x0005e796) form_field_popup_wide_pane_vc_ParamLimits

0x47f0,	// (0x0005e796) form_field_popup_wide_pane_vc

0x480a,	// (0x0005e7b0) form_field_slider_pane_vc_ParamLimits

0x480a,	// (0x0005e7b0) form_field_slider_pane_vc

0x481d,	// (0x0005e7c3) form_field_slider_wide_pane_vc_ParamLimits

0x481d,	// (0x0005e7c3) form_field_slider_wide_pane_vc

0xc83e,	// (0x000667e4) grid_touch_1_pane_ParamLimits

0xc83e,	// (0x000667e4) grid_touch_1_pane

0xc852,	// (0x000667f8) grid_touch_2_pane_ParamLimits

0xc852,	// (0x000667f8) grid_touch_2_pane

0x48ed,	// (0x0005e893) touch_pane_g1_ParamLimits

0x48ed,	// (0x0005e893) touch_pane_g1

0x4856,	// (0x0005e7fc) cell_app_pane_cp_wide_ParamLimits

0x4856,	// (0x0005e7fc) cell_app_pane_cp_wide

0x4867,	// (0x0005e80d) grid_popup_fast_wide_pane_ParamLimits

0x4867,	// (0x0005e80d) grid_popup_fast_wide_pane

0x487b,	// (0x0005e821) scroll_pane_cp19_ParamLimits

0x487b,	// (0x0005e821) scroll_pane_cp19

0x596d,	// (0x0005f913) bg_popup_window_pane_cp20

0x488f,	// (0x0005e835) listscroll_popup_fast_wide_pane

0xc87e,	// (0x00066824) grid_indicator_nsta_pane

0x4897,	// (0x0005e83d) clock_nsta_pane_g1

0x48a0,	// (0x0005e846) clock_nsta_pane_t1

0xc88c,	// (0x00066832) cell_indicator_nsta_pane_ParamLimits

0xc88c,	// (0x00066832) cell_indicator_nsta_pane

0x48ed,	// (0x0005e893) cell_indicator_nsta_pane_g1

0xc8a3,	// (0x00066849) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x00069a5c) cell_indicator_nsta_pane_g

0x4908,	// (0x0005e8ae) clock_nsta_pane_cp

0x4911,	// (0x0005e8b7) indicator_nsta_pane_cp

0x4919,	// (0x0005e8bf) nsta_clock_indic_pane_g1

0x875d,	// (0x00062703) grid_indicator_pane

0xc16b,	// (0x00066111) scroll_pane_cp29

0xf37d,	// (0x00069323) indicator_nsta_pane_cp2_ParamLimits

0xf37d,	// (0x00069323) indicator_nsta_pane_cp2

0x59bb,	// (0x0005f961) main_apps_wheel_pane

0x294a,	// (0x0005c8f0) form_midp_field_text_pane_ParamLimits

0x2a99,	// (0x0005ca3f) scroll_bar_cp050_ParamLimits

0x4969,	// (0x0005e90f) cell_indicator_pane_ParamLimits

0x4969,	// (0x0005e90f) cell_indicator_pane

0x4981,	// (0x0005e927) cell_indicator_pane_g1

0xc8b0,	// (0x00066856) grid_wheel_folder_pane_ParamLimits

0xc8b0,	// (0x00066856) grid_wheel_folder_pane

0xc8be,	// (0x00066864) list_wheel_apps_pane_ParamLimits

0xc8be,	// (0x00066864) list_wheel_apps_pane

0xc8cc,	// (0x00066872) main_apps_wheel_pane_g1_ParamLimits

0xc8cc,	// (0x00066872) main_apps_wheel_pane_g1

0xc8dc,	// (0x00066882) main_apps_wheel_pane_g2_ParamLimits

0xc8dc,	// (0x00066882) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x00069a78) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x00069a78) main_apps_wheel_pane_g

0xc8ec,	// (0x00066892) main_apps_wheel_pane_t1_ParamLimits

0xc8ec,	// (0x00066892) main_apps_wheel_pane_t1

0xc904,	// (0x000668aa) list_wheel_apps_pane_g1

0xc90c,	// (0x000668b2) list_wheel_apps_pane_g2

0xc914,	// (0x000668ba) list_wheel_apps_pane_g3

0xc91c,	// (0x000668c2) list_wheel_apps_pane_g4

0xc924,	// (0x000668ca) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x00069a7d) list_wheel_apps_pane_g

0xe56c,	// (0x00068512) navi_icon_text_pane

0xb517,	// (0x000654bd) aid_fill_nsta

0xc941,	// (0x000668e7) navi_icon_text_pane_g1

0xc94d,	// (0x000668f3) navi_icon_text_pane_t1

0xe402,	// (0x000683a8) list_set_graphic_pane_t1_ParamLimits

0xe402,	// (0x000683a8) list_set_graphic_pane_t1

0x31fe,	// (0x0005d1a4) popup_midp_note_alarm_window_t6_ParamLimits

0x31fe,	// (0x0005d1a4) popup_midp_note_alarm_window_t6

0x3210,	// (0x0005d1b6) popup_midp_note_alarm_window_t7_ParamLimits

0x3210,	// (0x0005d1b6) popup_midp_note_alarm_window_t7

0x3222,	// (0x0005d1c8) popup_midp_note_alarm_window_t8_ParamLimits

0x3222,	// (0x0005d1c8) popup_midp_note_alarm_window_t8

0x3234,	// (0x0005d1da) popup_midp_note_alarm_window_t9_ParamLimits

0x3234,	// (0x0005d1da) popup_midp_note_alarm_window_t9

0x3246,	// (0x0005d1ec) popup_midp_note_alarm_window_t10_ParamLimits

0x3246,	// (0x0005d1ec) popup_midp_note_alarm_window_t10

0x3258,	// (0x0005d1fe) popup_midp_note_alarm_window_t11_ParamLimits

0x3258,	// (0x0005d1fe) popup_midp_note_alarm_window_t11

0x326a,	// (0x0005d210) scroll_pane_cp17_ParamLimits

0x326a,	// (0x0005d210) scroll_pane_cp17

0x07d8,	// (0x0005a77e) volume_small_pane_cp_g1

0x0b5d,	// (0x0005ab03) volume_small_pane_cp_g2

0x0b66,	// (0x0005ab0c) volume_small_pane_cp_g3

0x0b6f,	// (0x0005ab15) volume_small_pane_cp_g4

0x0b78,	// (0x0005ab1e) volume_small_pane_cp_g5

0x0b81,	// (0x0005ab27) volume_small_pane_cp_g6

0x0b8a,	// (0x0005ab30) volume_small_pane_cp_g7

0x0b93,	// (0x0005ab39) volume_small_pane_cp_g8

0x0b9c,	// (0x0005ab42) volume_small_pane_cp_g9

0x0ba5,	// (0x0005ab4b) volume_small_pane_cp_g10

0x1ede,	// (0x0005be84) midp_ticker_pane_g1_ParamLimits

0x1eea,	// (0x0005be90) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00069703) midp_ticker_pane_g_ParamLimits

0xab7b,	// (0x00064b21) midp_ticker_pane_t1_ParamLimits

0xb53b,	// (0x000654e1) aid_fill_nsta_2

0x2a85,	// (0x0005ca2b) list_form2_midp_pane

0x3db5,	// (0x0005dd5b) midp_editing_number_pane_ParamLimits

0x3dc4,	// (0x0005dd6a) midp_ticker_pane_ParamLimits

0x4a74,	// (0x0005ea1a) form2_midp_field_pane

0x4a98,	// (0x0005ea3e) scroll_pane_cp51

0x4ab8,	// (0x0005ea5e) form2_midp_button_pane_ParamLimits

0x4ab8,	// (0x0005ea5e) form2_midp_button_pane

0x4aca,	// (0x0005ea70) form2_midp_content_pane_ParamLimits

0x4aca,	// (0x0005ea70) form2_midp_content_pane

0x4ae4,	// (0x0005ea8a) form2_midp_field_choice_group_pane

0x4aec,	// (0x0005ea92) form2_midp_field_pane_g1

0x4af4,	// (0x0005ea9a) form2_midp_field_pane_g2

0x4afc,	// (0x0005eaa2) form2_midp_field_pane_g3

0x4b04,	// (0x0005eaaa) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00069aa2) form2_midp_field_pane_g

0x4b0c,	// (0x0005eab2) form2_midp_gauge_slider_pane

0x4b14,	// (0x0005eaba) form2_midp_gauge_wait_pane

0x4b1c,	// (0x0005eac2) form2_midp_image_pane_ParamLimits

0x4b1c,	// (0x0005eac2) form2_midp_image_pane

0x4b37,	// (0x0005eadd) form2_midp_label_pane_ParamLimits

0x4b37,	// (0x0005eadd) form2_midp_label_pane

0xc97b,	// (0x00066921) form2_midp_label_pane_cp_ParamLimits

0xc97b,	// (0x00066921) form2_midp_label_pane_cp

0x4b77,	// (0x0005eb1d) form2_midp_string_pane_ParamLimits

0x4b77,	// (0x0005eb1d) form2_midp_string_pane

0xb9b8,	// (0x0006595e) form2_midp_text_pane_ParamLimits

0xb9b8,	// (0x0006595e) form2_midp_text_pane

0x4b89,	// (0x0005eb2f) form2_midp_time_pane

0x4b99,	// (0x0005eb3f) input_focus_pane_cp51_ParamLimits

0x4b99,	// (0x0005eb3f) input_focus_pane_cp51

0x4bb1,	// (0x0005eb57) form2_midp_label_pane_t1_ParamLimits

0x4bb1,	// (0x0005eb57) form2_midp_label_pane_t1

0xb9db,	// (0x00065981) form2_mdip_text_pane_t1_ParamLimits

0xb9db,	// (0x00065981) form2_mdip_text_pane_t1

0xe958,	// (0x000688fe) form2_midp_time_pane_t1

0x4bff,	// (0x0005eba5) form2_midp_gauge_slider_pane_t1

0xc99c,	// (0x00066942) form2_midp_gauge_slider_pane_t2

0xc9ae,	// (0x00066954) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x00069aab) form2_midp_gauge_slider_pane_t

0x4c35,	// (0x0005ebdb) form2_midp_slider_pane

0x4c41,	// (0x0005ebe7) form2_midp_gauge_wait_pane_t1

0x4c4f,	// (0x0005ebf5) form2_midp_wait_pane_ParamLimits

0x4c4f,	// (0x0005ebf5) form2_midp_wait_pane

0x27b0,	// (0x0005c756) list_single_2graphic_pane_cp4_ParamLimits

0x27b0,	// (0x0005c756) list_single_2graphic_pane_cp4

0xc9c0,	// (0x00066966) list_single_midp_graphic_pane_cp_ParamLimits

0xc9c0,	// (0x00066966) list_single_midp_graphic_pane_cp

0x596d,	// (0x0005f913) list_highlight_pane_cp20

0x4c93,	// (0x0005ec39) list_single_2graphic_pane_g1_cp4

0x426b,	// (0x0005e211) list_single_2graphic_pane_g2_cp4

0x4c9b,	// (0x0005ec41) list_single_2graphic_pane_t1_cp4

0x59bb,	// (0x0005f961) list_highlight_pane_cp21

0x4caa,	// (0x0005ec50) list_single_midp_graphic_pane_g4_cp

0x4cb9,	// (0x0005ec5f) list_single_midp_graphic_pane_t1_cp

0xc9e1,	// (0x00066987) form2_mdip_string_pane_t1_ParamLimits

0xc9e1,	// (0x00066987) form2_mdip_string_pane_t1

0x596d,	// (0x0005f913) bg_wml_button_pane_cp2

0x5963,	// (0x0005f909) form2_midp_image_pane_g1

0xe093,	// (0x00068039) list_double_large_graphic_pane_g5_ParamLimits

0xe093,	// (0x00068039) list_double_large_graphic_pane_g5

0xaad7,	// (0x00064a7d) midp_form_pane_ParamLimits

0x59bb,	// (0x0005f961) main_apps_wheel_pane_ParamLimits

0xb231,	// (0x000651d7) popup_preview_window_ParamLimits

0xb231,	// (0x000651d7) popup_preview_window

0x0609,	// (0x0005a5af) popup_touch_info_window_ParamLimits

0x0609,	// (0x0005a5af) popup_touch_info_window

0x062b,	// (0x0005a5d1) popup_touch_menu_window_ParamLimits

0x062b,	// (0x0005a5d1) popup_touch_menu_window

0x5959,	// (0x0005f8ff) bg_popup_sub_pane_cp6

0x4d6a,	// (0x0005ed10) list_touch_menu_pane

0x4d72,	// (0x0005ed18) list_single_touch_menu_pane_ParamLimits

0x4d72,	// (0x0005ed18) list_single_touch_menu_pane

0x4d8a,	// (0x0005ed30) list_single_touch_menu_pane_t1

0x59bb,	// (0x0005f961) bg_popup_sub_pane_cp7_ParamLimits

0x59bb,	// (0x0005f961) bg_popup_sub_pane_cp7

0x4d98,	// (0x0005ed3e) heading_sub_pane

0x4da0,	// (0x0005ed46) list_touch_info_pane_ParamLimits

0x4da0,	// (0x0005ed46) list_touch_info_pane

0x4daf,	// (0x0005ed55) list_single_touch_info_pane_ParamLimits

0x4daf,	// (0x0005ed55) list_single_touch_info_pane

0x4dc1,	// (0x0005ed67) list_single_touch_info_pane_t1

0x4dcf,	// (0x0005ed75) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x00069ab9) list_single_touch_info_pane_t

0x1e00,	// (0x0005bda6) bg_popup_heading_pane_cp

0x4ddd,	// (0x0005ed83) heading_sub_pane_t1

0x26f7,	// (0x0005c69d) bg_popup_preview_window_pane_cp_ParamLimits

0x26f7,	// (0x0005c69d) bg_popup_preview_window_pane_cp

0x4d98,	// (0x0005ed3e) heading_preview_pane

0x4da0,	// (0x0005ed46) list_preview_pane_ParamLimits

0x4da0,	// (0x0005ed46) list_preview_pane

0x4deb,	// (0x0005ed91) popup_preview_window_g1

0x4daf,	// (0x0005ed55) list_single_preview_pane_ParamLimits

0x4daf,	// (0x0005ed55) list_single_preview_pane

0x4df3,	// (0x0005ed99) list_single_preview_pane_g1

0x4dfb,	// (0x0005eda1) list_single_preview_pane_t1

0x4dc1,	// (0x0005ed67) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00069abe) list_single_preview_pane_t

0x4e09,	// (0x0005edaf) bg_popup_heading_pane_cp2_ParamLimits

0x4e09,	// (0x0005edaf) bg_popup_heading_pane_cp2

0x4e1f,	// (0x0005edc5) heading_preview_pane_g1

0x4e27,	// (0x0005edcd) heading_preview_pane_t1_ParamLimits

0x4e27,	// (0x0005edcd) heading_preview_pane_t1

0x8774,	// (0x0006271a) soft_indicator_pane_t1_ParamLimits

0x8cd2,	// (0x00062c78) scroll_pane_ParamLimits

0x90b6,	// (0x0006305c) scroll_sc2_left_pane

0x90bf,	// (0x00063065) scroll_sc2_right_pane

0x90de,	// (0x00063084) scroll_bg_pane_g1_ParamLimits

0x90f3,	// (0x00063099) scroll_bg_pane_g2_ParamLimits

0x910b,	// (0x000630b1) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006968e) scroll_bg_pane_g_ParamLimits

0x90de,	// (0x00063084) scroll_handle_pane_g1_ParamLimits

0x912d,	// (0x000630d3) scroll_handle_pane_g2_ParamLimits

0x910b,	// (0x000630b1) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00069695) scroll_handle_pane_g_ParamLimits

0x0069,	// (0x0005a00f) popup_choice_list_window_ParamLimits

0x0069,	// (0x0005a00f) popup_choice_list_window

0x25a9,	// (0x0005c54f) choice_list_pane

0x2637,	// (0x0005c5dd) cell_toolbar_pane_t1

0x265f,	// (0x0005c605) toolbar_button_pane_ParamLimits

0x3734,	// (0x0005d6da) ai_gene_pane_1_t2_ParamLimits

0x3734,	// (0x0005d6da) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000698b8) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000698b8) ai_gene_pane_1_t

0x4e44,	// (0x0005edea) scroll_sc2_left_pane_g1

0x4e44,	// (0x0005edea) scroll_sc2_right_pane_g1

0x212f,	// (0x0005c0d5) bg_popup_sub_pane_cp10

0x4e4e,	// (0x0005edf4) list_choice_list_pane

0x3e4b,	// (0x0005ddf1) list_single_choice_list_pane_ParamLimits

0x3e4b,	// (0x0005ddf1) list_single_choice_list_pane

0x4e67,	// (0x0005ee0d) list_single_choice_list_pane_g1

0x8ead,	// (0x00062e53) list_single_choice_list_pane_t1_ParamLimits

0x8ead,	// (0x00062e53) list_single_choice_list_pane_t1

0x4e6f,	// (0x0005ee15) choice_list_pane_g1

0x4e77,	// (0x0005ee1d) choice_list_pane_t1

0x5959,	// (0x0005f8ff) input_focus_pane_cp11

0x902b,	// (0x00062fd1) title_pane_stacon_g2_ParamLimits

0x902b,	// (0x00062fd1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00069674) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00069674) title_pane_stacon_g

0x1e00,	// (0x0005bda6) cursor_press_pane

0xaeae,	// (0x00064e54) popup_fep_hwr_window_ParamLimits

0xaeae,	// (0x00064e54) popup_fep_hwr_window

0x01ad,	// (0x0005a153) popup_fep_vkb_window_ParamLimits

0x01ad,	// (0x0005a153) popup_fep_vkb_window

0x4e85,	// (0x0005ee2b) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x00069ae7) fep_vkb_side_pane_g_ParamLimits

0x0c29,	// (0x0005abcf) fep_hwr_candidate_pane_ParamLimits

0x0c29,	// (0x0005abcf) fep_hwr_candidate_pane

0x0c53,	// (0x0005abf9) fep_hwr_side_pane_ParamLimits

0x0c53,	// (0x0005abf9) fep_hwr_side_pane

0x0c75,	// (0x0005ac1b) fep_hwr_top_pane_ParamLimits

0x0c75,	// (0x0005ac1b) fep_hwr_top_pane

0x0c8d,	// (0x0005ac33) fep_hwr_write_pane_ParamLimits

0x0c8d,	// (0x0005ac33) fep_hwr_write_pane

0xfb41,	// (0x00069ae7) fep_vkb_side_pane_g

0x4e8d,	// (0x0005ee33) fep_hwr_top_pane_g1

0x4e9f,	// (0x0005ee45) fep_hwr_top_pane_g2

0x0cc7,	// (0x0005ac6d) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00069ac3) fep_hwr_top_pane_g

0x0cdc,	// (0x0005ac82) fep_hwr_top_text_pane

0xe1ba,	// (0x00068160) fep_hwr_top_text_pane_g1

0x4ed5,	// (0x0005ee7b) fep_hwr_top_text_pane_t1

0x0de6,	// (0x0005ad8c) fep_hwr_candidate_pane_g1

0x5120,	// (0x0005f0c6) fep_vkb_keypad_pane_g3_ParamLimits

0x5120,	// (0x0005f0c6) fep_vkb_keypad_pane_g3

0x514c,	// (0x0005f0f2) fep_vkb_keypad_pane_g4_ParamLimits

0x514c,	// (0x0005f0f2) fep_vkb_keypad_pane_g4

0x51c3,	// (0x0005f169) fep_vkb_bottom_pane_g2_ParamLimits

0x51c3,	// (0x0005f169) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00069aee) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00069aee) fep_vkb_bottom_pane_g

0x4e44,	// (0x0005edea) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x00069af8) cell_vkb_side_pane_g

0x524e,	// (0x0005f1f4) cell_vkb_side_pane_t1

0x525c,	// (0x0005f202) cell_vkb_side_pane_t1_copy1

0x4e44,	// (0x0005edea) bg_fep_vkb_candidate_pane_g2

0x53a0,	// (0x0005f346) cell_vkb_candidate_pane_ParamLimits

0x4ee3,	// (0x0005ee89) aid_size_cell_vkb_ParamLimits

0x4ee3,	// (0x0005ee89) aid_size_cell_vkb

0x53a0,	// (0x0005f346) cell_vkb_candidate_pane

0x0e0d,	// (0x0005adb3) bg_popup_fep_shadow_pane_g1

0xca8a,	// (0x00066a30) fep_vkb_bottom_pane_ParamLimits

0xca8a,	// (0x00066a30) fep_vkb_bottom_pane

0x4fb2,	// (0x0005ef58) fep_vkb_candidate_pane_ParamLimits

0x4fb2,	// (0x0005ef58) fep_vkb_candidate_pane

0xcab6,	// (0x00066a5c) fep_vkb_keypad_pane_ParamLimits

0xcab6,	// (0x00066a5c) fep_vkb_keypad_pane

0xcadd,	// (0x00066a83) fep_vkb_side_pane_ParamLimits

0xcadd,	// (0x00066a83) fep_vkb_side_pane

0xcb19,	// (0x00066abf) fep_vkb_top_pane_ParamLimits

0xcb19,	// (0x00066abf) fep_vkb_top_pane

0x5079,	// (0x0005f01f) fep_vkb_top_pane_g1_ParamLimits

0x5079,	// (0x0005f01f) fep_vkb_top_pane_g1

0x5088,	// (0x0005f02e) fep_vkb_top_pane_g2_ParamLimits

0x5088,	// (0x0005f02e) fep_vkb_top_pane_g2

0x5097,	// (0x0005f03d) fep_vkb_top_pane_g3_ParamLimits

0x5097,	// (0x0005f03d) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00069ade) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00069ade) fep_vkb_top_pane_g

0x50b5,	// (0x0005f05b) fep_vkb_top_text_pane_ParamLimits

0x50b5,	// (0x0005f05b) fep_vkb_top_text_pane

0xcb55,	// (0x00066afb) fep_vkb_side_pane_g1_ParamLimits

0xcb55,	// (0x00066afb) fep_vkb_side_pane_g1

0x510f,	// (0x0005f0b5) grid_vkb_side_pane_ParamLimits

0x510f,	// (0x0005f0b5) grid_vkb_side_pane

0x0e15,	// (0x0005adbb) bg_popup_fep_shadow_pane_g2

0x0e1e,	// (0x0005adc4) bg_popup_fep_shadow_pane_g3

0x0e26,	// (0x0005adcc) bg_popup_fep_shadow_pane_g4

0x0e2f,	// (0x0005add5) bg_popup_fep_shadow_pane_g5

0x0e39,	// (0x0005addf) bg_popup_fep_shadow_pane_g6

0x0e41,	// (0x0005ade7) bg_popup_fep_shadow_pane_g7

0x8dcf,	// (0x00062d75) bg_popup_fep_shadow_pane_g8

0x516e,	// (0x0005f114) grid_vkb_keypad_number_pane_ParamLimits

0x516e,	// (0x0005f114) grid_vkb_keypad_number_pane

0x5182,	// (0x0005f128) grid_vkb_keypad_pane_ParamLimits

0x5182,	// (0x0005f128) grid_vkb_keypad_pane

0x51a8,	// (0x0005f14e) fep_vkb_bottom_pane_g1_ParamLimits

0x51a8,	// (0x0005f14e) fep_vkb_bottom_pane_g1

0x51d1,	// (0x0005f177) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51d1,	// (0x0005f177) grid_vkb_keypad_bottom_left_pane

0x51e6,	// (0x0005f18c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x51e6,	// (0x0005f18c) grid_vkb_keypad_bottom_right_pane

0x51fb,	// (0x0005f1a1) fep_vkb_top_text_pane_g1

0xcb9c,	// (0x00066b42) fep_vkb_top_text_pane_t1

0xcbae,	// (0x00066b54) cell_vkb_side_pane_ParamLimits

0xcbae,	// (0x00066b54) cell_vkb_side_pane

0x4e44,	// (0x0005edea) cell_vkb_side_pane_g1

0x526a,	// (0x0005f210) cell_vkb_keypad_pane_ParamLimits

0x526a,	// (0x0005f210) cell_vkb_keypad_pane

0x52f7,	// (0x0005f29d) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00069b0b) bg_popup_fep_shadow_pane_g

0x0e53,	// (0x0005adf9) cell_hwr_side_pane_g1

0x0e53,	// (0x0005adf9) cell_hwr_side_pane_g2

0x5301,	// (0x0005f2a7) cell_vkb_keypad_pane_t1

0xcbc4,	// (0x00066b6a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcbc4,	// (0x00066b6a) cell_vkb_keypad_bottom_left_pane

0xcbd9,	// (0x00066b7f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcbd9,	// (0x00066b7f) cell_vkb_keypad_bottom_right_pane

0x4e44,	// (0x0005edea) cell_vkb_keypad_bottom_left_pane_g1

0x4e44,	// (0x0005edea) cell_vkb_keypad_bottom_right_pane_g1

0x5365,	// (0x0005f30b) cell_vkb_keypad_number_pane_ParamLimits

0x5365,	// (0x0005f30b) cell_vkb_keypad_number_pane

0x5384,	// (0x0005f32a) cell_vkb_keypad_number_pane_g1

0x538e,	// (0x0005f334) cell_vkb_keypad_number_pane_g2

0x5397,	// (0x0005f33d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00069afd) cell_vkb_keypad_number_pane_g

0x5301,	// (0x0005f2a7) cell_vkb_keypad_number_pane_t1

0x53c1,	// (0x0005f367) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x00069b1e) cell_hwr_side_pane_g

0x53da,	// (0x0005f380) cell_hwr_side_pane_t1

0x0e5d,	// (0x0005ae03) cell_hwr_side_pane_t1_copy1

0x0e6b,	// (0x0005ae11) cell_hwr_candidate_pane_g1

0x0e9a,	// (0x0005ae40) cell_hwr_candidate_pane_t1

0x4e44,	// (0x0005edea) cell_vkb_candidate_pane_g2

0x541e,	// (0x0005f3c4) cell_vkb_candidate_pane_t1

0x0bf0,	// (0x0005ab96) bg_popup_fep_shadow_pane_ParamLimits

0x0bf0,	// (0x0005ab96) bg_popup_fep_shadow_pane

0x0ca7,	// (0x0005ac4d) bg_fep_hwr_top_pane_g4

0x4eb1,	// (0x0005ee57) bg_hwr_side_pane_g1_ParamLimits

0x4eb1,	// (0x0005ee57) bg_hwr_side_pane_g1

0xba0f,	// (0x000659b5) cell_hwr_side_pane_ParamLimits

0xba0f,	// (0x000659b5) cell_hwr_side_pane

0x0d57,	// (0x0005acfd) fep_hwr_write_pane_g1_ParamLimits

0x0d57,	// (0x0005acfd) fep_hwr_write_pane_g1

0x0d64,	// (0x0005ad0a) fep_hwr_write_pane_g2_ParamLimits

0x0d64,	// (0x0005ad0a) fep_hwr_write_pane_g2

0x0d71,	// (0x0005ad17) fep_hwr_write_pane_g3_ParamLimits

0x0d71,	// (0x0005ad17) fep_hwr_write_pane_g3

0xba2f,	// (0x000659d5) fep_hwr_write_pane_g4_ParamLimits

0xba2f,	// (0x000659d5) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00069aca) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00069aca) fep_hwr_write_pane_g

0x0ca7,	// (0x0005ac4d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0ca7,	// (0x0005ac4d) bg_fep_hwr_candidate_pane_g2

0x0d94,	// (0x0005ad3a) cell_hwr_candidate_pane_ParamLimits

0x0d94,	// (0x0005ad3a) cell_hwr_candidate_pane

0x0de6,	// (0x0005ad8c) fep_hwr_candidate_pane_g1_ParamLimits

0x4f11,	// (0x0005eeb7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4f11,	// (0x0005eeb7) bg_popup_fep_shadow_pane_cp2

0x50a7,	// (0x0005f04d) fep_vkb_top_pane_g4_ParamLimits

0x50a7,	// (0x0005f04d) fep_vkb_top_pane_g4

0x50ed,	// (0x0005f093) fep_vkb_side_pane_g2_ParamLimits

0x50ed,	// (0x0005f093) fep_vkb_side_pane_g2

0xa540,	// (0x000644e6) list_setting_pane_t4_ParamLimits

0xa540,	// (0x000644e6) list_setting_pane_t4

0xa5dc,	// (0x00064582) list_setting_number_pane_t5_ParamLimits

0xa5dc,	// (0x00064582) list_setting_number_pane_t5

0xe1f1,	// (0x00068197) list_double_heading_pane_cp2_ParamLimits

0xe1f1,	// (0x00068197) list_double_heading_pane_cp2

0x542c,	// (0x0005f3d2) list_double_heading_pane_g1_cp2_ParamLimits

0x542c,	// (0x0005f3d2) list_double_heading_pane_g1_cp2

0x5438,	// (0x0005f3de) list_double_heading_pane_g2_cp2_ParamLimits

0x5438,	// (0x0005f3de) list_double_heading_pane_g2_cp2

0x544c,	// (0x0005f3f2) list_double_heading_pane_t1_cp2_ParamLimits

0x544c,	// (0x0005f3f2) list_double_heading_pane_t1_cp2

0x5462,	// (0x0005f408) list_double_heading_pane_t2_cp2_ParamLimits

0x5462,	// (0x0005f408) list_double_heading_pane_t2_cp2

0x5951,	// (0x0005f8f7) aid_value_unit2

0xf01e,	// (0x00068fc4) popup_preview_fixed_window

0x8854,	// (0x000627fa) bg_popup_preview_window_pane_cp02

0x5474,	// (0x0005f41a) list_preview_fixed_pane

0x54ba,	// (0x0005f460) list_empty_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_empty_pane_fp

0x54ba,	// (0x0005f460) list_single_cale_day_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_cale_day_pane_fp

0x54ba,	// (0x0005f460) list_single_graphic_heading_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_graphic_heading_pane_fp

0x54ba,	// (0x0005f460) list_single_graphic_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_graphic_pane_fp

0x54ba,	// (0x0005f460) list_single_heading_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_heading_pane_fp

0x54ba,	// (0x0005f460) list_single_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_pane_fp

0x54d3,	// (0x0005f479) list_single_pane_fp_g1_ParamLimits

0x54d3,	// (0x0005f479) list_single_pane_fp_g1

0x542c,	// (0x0005f3d2) list_single_pane_fp_g2_ParamLimits

0x542c,	// (0x0005f3d2) list_single_pane_fp_g2

0x5438,	// (0x0005f3de) list_single_pane_fp_g3_ParamLimits

0x5438,	// (0x0005f3de) list_single_pane_fp_g3

0x54df,	// (0x0005f485) list_single_pane_fp_g4_ParamLimits

0x54df,	// (0x0005f485) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x00069b31) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x00069b31) list_single_pane_fp_g

0xe96b,	// (0x00068911) list_single_pane_fp_t1_ParamLimits

0xe96b,	// (0x00068911) list_single_pane_fp_t1

0xe982,	// (0x00068928) list_single_graphic_pane_fp_g1_ParamLimits

0xe982,	// (0x00068928) list_single_graphic_pane_fp_g1

0x54d3,	// (0x0005f479) list_single_graphic_pane_fp_g2_ParamLimits

0x54d3,	// (0x0005f479) list_single_graphic_pane_fp_g2

0x542c,	// (0x0005f3d2) list_single_graphic_pane_fp_g3_ParamLimits

0x542c,	// (0x0005f3d2) list_single_graphic_pane_fp_g3

0x5438,	// (0x0005f3de) list_single_graphic_pane_fp_g4_ParamLimits

0x5438,	// (0x0005f3de) list_single_graphic_pane_fp_g4

0x54df,	// (0x0005f485) list_single_graphic_pane_fp_g5_ParamLimits

0x54df,	// (0x0005f485) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x00069b3a) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x00069b3a) list_single_graphic_pane_fp_g

0xe98e,	// (0x00068934) list_single_graphic_pane_fp_t1_ParamLimits

0xe98e,	// (0x00068934) list_single_graphic_pane_fp_t1

0xe982,	// (0x00068928) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe982,	// (0x00068928) list_single_graphic_heading_pane_fp_g1

0x54d3,	// (0x0005f479) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x54d3,	// (0x0005f479) list_single_graphic_heading_pane_fp_g2

0x542c,	// (0x0005f3d2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x542c,	// (0x0005f3d2) list_single_graphic_heading_pane_fp_g3

0x5438,	// (0x0005f3de) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5438,	// (0x0005f3de) list_single_graphic_heading_pane_fp_g4

0x54df,	// (0x0005f485) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x54df,	// (0x0005f485) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x00069b3a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x00069b3a) list_single_graphic_heading_pane_fp_g

0xe9a4,	// (0x0006894a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe9a4,	// (0x0006894a) list_single_graphic_heading_pane_fp_t1

0xe9ba,	// (0x00068960) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe9ba,	// (0x00068960) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x00069b45) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x00069b45) list_single_graphic_heading_pane_fp_t

0xe9cc,	// (0x00068972) list_single_cale_day_pane_fp_g1_ParamLimits

0xe9cc,	// (0x00068972) list_single_cale_day_pane_fp_g1

0x54eb,	// (0x0005f491) list_single_cale_day_pane_fp_g2_ParamLimits

0x54eb,	// (0x0005f491) list_single_cale_day_pane_fp_g2

0x3a11,	// (0x0005d9b7) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a11,	// (0x0005d9b7) list_single_cale_day_pane_fp_g3

0x3a39,	// (0x0005d9df) list_single_cale_day_pane_fp_g4_ParamLimits

0x3a39,	// (0x0005d9df) list_single_cale_day_pane_fp_g4

0x3a5d,	// (0x0005da03) list_single_cale_day_pane_fp_g5_ParamLimits

0x3a5d,	// (0x0005da03) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x00069b4a) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x00069b4a) list_single_cale_day_pane_fp_g

0xea04,	// (0x000689aa) list_single_cale_day_pane_fp_t1_ParamLimits

0xea04,	// (0x000689aa) list_single_cale_day_pane_fp_t1

0xea2a,	// (0x000689d0) list_single_cale_day_pane_fp_t2_ParamLimits

0xea2a,	// (0x000689d0) list_single_cale_day_pane_fp_t2

0xea43,	// (0x000689e9) list_single_cale_day_pane_fp_t3_ParamLimits

0xea43,	// (0x000689e9) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x00069b55) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x00069b55) list_single_cale_day_pane_fp_t

0x54d3,	// (0x0005f479) list_empty_pane_fp_g1_ParamLimits

0x54d3,	// (0x0005f479) list_empty_pane_fp_g1

0xea5c,	// (0x00068a02) list_empty_pane_fp_t1

0xea6a,	// (0x00068a10) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x00069b5c) list_empty_pane_fp_t

0x54d3,	// (0x0005f479) list_single_heading_pane_fp_g1_ParamLimits

0x54d3,	// (0x0005f479) list_single_heading_pane_fp_g1

0x542c,	// (0x0005f3d2) list_single_heading_pane_fp_g2_ParamLimits

0x542c,	// (0x0005f3d2) list_single_heading_pane_fp_g2

0x5438,	// (0x0005f3de) list_single_heading_pane_fp_g3_ParamLimits

0x5438,	// (0x0005f3de) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x00069b61) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x00069b61) list_single_heading_pane_fp_g

0xea78,	// (0x00068a1e) list_single_heading_pane_fp_t1_ParamLimits

0xea78,	// (0x00068a1e) list_single_heading_pane_fp_t1

0xea8a,	// (0x00068a30) list_single_heading_pane_fp_t2_ParamLimits

0xea8a,	// (0x00068a30) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x00069b68) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x00069b68) list_single_heading_pane_fp_t

0x8ec2,	// (0x00062e68) aid_size_cell_fast

0x8837,	// (0x000627dd) soft_indicator_pane_cp1_t1

0x8eff,	// (0x00062ea5) cell_app_pane_cp2_ParamLimits

0x8eff,	// (0x00062ea5) cell_app_pane_cp2

0x0c12,	// (0x0005abb8) fep_hwr_candidate_drop_down_list_pane

0x0e00,	// (0x0005ada6) fep_hwr_candidate_pane_g3_ParamLimits

0x0e00,	// (0x0005ada6) fep_hwr_candidate_pane_g3

0xca6b,	// (0x00066a11) fep_hwr_candidate_pane_g4_ParamLimits

0xca6b,	// (0x00066a11) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x00069ad7) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x00069ad7) fep_hwr_candidate_pane_g

0x4fa1,	// (0x0005ef47) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4fa1,	// (0x0005ef47) fep_vkb_candidate_drop_down_list_pane

0x53c9,	// (0x0005f36f) fep_vkb_candidate_pane_g3

0x53d1,	// (0x0005f377) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00069b04) fep_vkb_candidate_pane_g

0x0e6b,	// (0x0005ae11) cell_hwr_candidate_pane_g1_ParamLimits

0x0e79,	// (0x0005ae1f) cell_hwr_candidate_pane_g3_ParamLimits

0x0e79,	// (0x0005ae1f) cell_hwr_candidate_pane_g3

0x5a05,	// (0x0005f9ab) cell_hwr_candidate_pane_g4_ParamLimits

0x5a05,	// (0x0005f9ab) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x00069b23) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x00069b23) cell_hwr_candidate_pane_g

0x53e8,	// (0x0005f38e) cell_vkb_candidate_pane_g3_ParamLimits

0x53e8,	// (0x0005f38e) cell_vkb_candidate_pane_g3

0x5403,	// (0x0005f3a9) cell_vkb_candidate_pane_g4_ParamLimits

0x5403,	// (0x0005f3a9) cell_vkb_candidate_pane_g4

0x54f7,	// (0x0005f49d) cell_app_pane_cp2_g1_ParamLimits

0x54f7,	// (0x0005f49d) cell_app_pane_cp2_g1

0x5515,	// (0x0005f4bb) cell_app_pane_cp2_g2_ParamLimits

0x5515,	// (0x0005f4bb) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x00069b6d) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x00069b6d) cell_app_pane_cp2_g

0x5521,	// (0x0005f4c7) cell_app_pane_cp2_t1_ParamLimits

0x5521,	// (0x0005f4c7) cell_app_pane_cp2_t1

0x8d5f,	// (0x00062d05) grid_highlight_pane_cp1_ParamLimits

0x8d5f,	// (0x00062d05) grid_highlight_pane_cp1

0x0eb8,	// (0x0005ae5e) cell_hwr_candidate_pane_cp1_ParamLimits

0x0eb8,	// (0x0005ae5e) cell_hwr_candidate_pane_cp1

0x0e6b,	// (0x0005ae11) fep_hwr_candidate_drop_down_list_pane_g1

0x0edc,	// (0x0005ae82) fep_hwr_candidate_drop_down_list_pane_g2

0x0ee9,	// (0x0005ae8f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x00069b72) fep_hwr_candidate_drop_down_list_pane_g

0x0ef6,	// (0x0005ae9c) fep_hwr_candidate_drop_down_list_scroll_pane

0x0eff,	// (0x0005aea5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0eff,	// (0x0005aea5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f0c,	// (0x0005aeb2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f0c,	// (0x0005aeb2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f19,	// (0x0005aebf) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f19,	// (0x0005aebf) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f26,	// (0x0005aecc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f26,	// (0x0005aecc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f41,	// (0x0005aee7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f41,	// (0x0005aee7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0f5c,	// (0x0005af02) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0f5c,	// (0x0005af02) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0f77,	// (0x0005af1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0f77,	// (0x0005af1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0f92,	// (0x0005af38) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0f92,	// (0x0005af38) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x00069b79) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x00069b79) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5533,	// (0x0005f4d9) cell_vkb_candidate_pane_cp1_ParamLimits

0x5533,	// (0x0005f4d9) cell_vkb_candidate_pane_cp1

0x50a7,	// (0x0005f04d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x50a7,	// (0x0005f04d) fep_vkb_candidate_drop_down_list_pane_g1

0x5559,	// (0x0005f4ff) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5559,	// (0x0005f4ff) fep_vkb_candidate_drop_down_list_pane_g2

0x5566,	// (0x0005f50c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5566,	// (0x0005f50c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x00069b8a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x00069b8a) fep_vkb_candidate_drop_down_list_pane_g

0x5573,	// (0x0005f519) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5573,	// (0x0005f519) fep_vkb_candidate_drop_down_list_scroll_pane

0x5580,	// (0x0005f526) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5580,	// (0x0005f526) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x558d,	// (0x0005f533) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x558d,	// (0x0005f533) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5599,	// (0x0005f53f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5599,	// (0x0005f53f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x55a5,	// (0x0005f54b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x55a5,	// (0x0005f54b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x55c6,	// (0x0005f56c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55c6,	// (0x0005f56c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x55e7,	// (0x0005f58d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55e7,	// (0x0005f58d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5608,	// (0x0005f5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5608,	// (0x0005f5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5629,	// (0x0005f5cf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5629,	// (0x0005f5cf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x00069b91) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x00069b91) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d8c,	// (0x00063d32) title_pane_g1_ParamLimits

0x9d9f,	// (0x00063d45) title_pane_g2_ParamLimits

0xf54e,	// (0x000694f4) title_pane_g_ParamLimits

0xe1aa,	// (0x00068150) aid_call2_pane

0xe1b2,	// (0x00068158) aid_call_pane

0xe1ba,	// (0x00068160) popup_clock_analogue_window_g1

0xe1ba,	// (0x00068160) popup_clock_analogue_window_g2

0xf27c,	// (0x00069222) popup_clock_analogue_window_g3

0xf285,	// (0x0006922b) popup_clock_analogue_window_g4

0x5963,	// (0x0005f909) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000696a3) popup_clock_analogue_window_g

0xf28d,	// (0x00069233) popup_clock_analogue_window_t1

0xf29b,	// (0x00069241) clock_digital_number_pane_ParamLimits

0xf29b,	// (0x00069241) clock_digital_number_pane

0xf2a7,	// (0x0006924d) clock_digital_number_pane_cp02_ParamLimits

0xf2a7,	// (0x0006924d) clock_digital_number_pane_cp02

0xf2b3,	// (0x00069259) clock_digital_number_pane_cp03_ParamLimits

0xf2b3,	// (0x00069259) clock_digital_number_pane_cp03

0xf2bf,	// (0x00069265) clock_digital_number_pane_cp04_ParamLimits

0xf2bf,	// (0x00069265) clock_digital_number_pane_cp04

0xf2cb,	// (0x00069271) clock_digital_separator_pane_ParamLimits

0xf2cb,	// (0x00069271) clock_digital_separator_pane

0xf2d7,	// (0x0006927d) popup_clock_digital_window_t1_ParamLimits

0xf2d7,	// (0x0006927d) popup_clock_digital_window_t1

0x5963,	// (0x0005f909) clock_digital_number_pane_g1

0x5963,	// (0x0005f909) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000696ae) clock_digital_number_pane_g

0x5963,	// (0x0005f909) clock_digital_separator_pane_g1

0x5963,	// (0x0005f909) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000696ae) clock_digital_separator_pane_g

0xb517,	// (0x000654bd) aid_fill_nsta_ParamLimits

0xb64f,	// (0x000655f5) indicator_nsta_pane_ParamLimits

0x2442,	// (0x0005c3e8) popup_clock_analogue_window

0x2442,	// (0x0005c3e8) popup_clock_digital_window

0xc87e,	// (0x00066824) grid_indicator_nsta_pane_ParamLimits

0x48ae,	// (0x0005e854) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00069a57) clock_nsta_pane_t

0xf249,	// (0x000691ef) aid_size_max_handle

0xa8d7,	// (0x0006487d) aid_size_min_handle

0x1e00,	// (0x0005bda6) editor_scroll_pane

0x5644,	// (0x0005f5ea) ex_editor_pane

0x8e88,	// (0x00062e2e) scroll_pane_cp13

0x8cfe,	// (0x00062ca4) scroll_pane_cp14

0xe1e9,	// (0x0006818f) scroll_pane_cp36

0xa964,	// (0x0006490a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa964,	// (0x0006490a) list_single_graphic_hl_pane_cp2

0xc6f2,	// (0x00066698) list_single_graphic_hl_pane_ParamLimits

0xc6f2,	// (0x00066698) list_single_graphic_hl_pane

0xeaa0,	// (0x00068a46) aid_size_min_hl_cp1

0x564c,	// (0x0005f5f2) list_highlight_pane_cp34_ParamLimits

0x564c,	// (0x0005f5f2) list_highlight_pane_cp34

0x565d,	// (0x0005f603) list_single_graphic_hl_pane_g1_ParamLimits

0x565d,	// (0x0005f603) list_single_graphic_hl_pane_g1

0xba44,	// (0x000659ea) list_single_graphic_hl_pane_g2_ParamLimits

0xba44,	// (0x000659ea) list_single_graphic_hl_pane_g2

0xba44,	// (0x000659ea) list_single_graphic_hl_pane_g3_ParamLimits

0xba44,	// (0x000659ea) list_single_graphic_hl_pane_g3

0x569a,	// (0x0005f640) list_single_graphic_hl_pane_g4_ParamLimits

0x569a,	// (0x0005f640) list_single_graphic_hl_pane_g4

0x56a6,	// (0x0005f64c) list_single_graphic_hl_pane_g5_ParamLimits

0x56a6,	// (0x0005f64c) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x00069ba2) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x00069ba2) list_single_graphic_hl_pane_g

0xba50,	// (0x000659f6) list_single_graphic_hl_pane_t1_ParamLimits

0xba50,	// (0x000659f6) list_single_graphic_hl_pane_t1

0x566a,	// (0x0005f610) aid_size_min_hl_cp2

0x5673,	// (0x0005f619) list_highlight_pane_cp34_cp2_ParamLimits

0x5673,	// (0x0005f619) list_highlight_pane_cp34_cp2

0x565d,	// (0x0005f603) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x565d,	// (0x0005f603) list_single_graphic_hl_pane_g1_cp2

0x5680,	// (0x0005f626) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5680,	// (0x0005f626) list_single_graphic_hl_pane_g2_cp2

0x568c,	// (0x0005f632) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x568c,	// (0x0005f632) list_single_graphic_hl_pane_g3_cp2

0x569a,	// (0x0005f640) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x569a,	// (0x0005f640) list_single_graphic_hl_pane_g4_cp2

0x56a6,	// (0x0005f64c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x56a6,	// (0x0005f64c) list_single_graphic_hl_pane_g5_cp2

0xac90,	// (0x00064c36) control_pane_g4_ParamLimits

0xac90,	// (0x00064c36) control_pane_g4

0x212f,	// (0x0005c0d5) bg_popup_sub_pane_cp10_ParamLimits

0x4e4e,	// (0x0005edf4) list_choice_list_pane_ParamLimits

0x4e5d,	// (0x0005ee03) scroll_pane_cp23

0x8854,	// (0x000627fa) bg_popup_preview_window_pane_cp02_ParamLimits

0x5474,	// (0x0005f41a) list_preview_fixed_pane_ParamLimits

0x548a,	// (0x0005f430) list_preview_fixed_pane_cp_ParamLimits

0x548a,	// (0x0005f430) list_preview_fixed_pane_cp

0x5496,	// (0x0005f43c) popup_preview_fixed_window_g1_ParamLimits

0x5496,	// (0x0005f43c) popup_preview_fixed_window_g1

0x54a2,	// (0x0005f448) popup_preview_fixed_window_g2_ParamLimits

0x54a2,	// (0x0005f448) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x00069b2a) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x00069b2a) popup_preview_fixed_window_g

0xf1bb,	// (0x00069161) aid_navi_side_left_pane_ParamLimits

0xf1d0,	// (0x00069176) aid_navi_side_right_pane_ParamLimits

0xf1e8,	// (0x0006918e) navi_icon_pane_stacon_ParamLimits

0xf1fc,	// (0x000691a2) navi_navi_pane_stacon_ParamLimits

0xf1e8,	// (0x0006918e) navi_text_pane_stacon_ParamLimits

0xef0f,	// (0x00068eb5) main_text_info_pane

0x56d0,	// (0x0005f676) listscroll_text_info_pane

0x56d8,	// (0x0005f67e) list_text_info_pane_ParamLimits

0x56d8,	// (0x0005f67e) list_text_info_pane

0x56e7,	// (0x0005f68d) scroll_pane_cp24_ParamLimits

0x56e7,	// (0x0005f68d) scroll_pane_cp24

0xcbf4,	// (0x00066b9a) list_text_info_pane_t1_ParamLimits

0xcbf4,	// (0x00066b9a) list_text_info_pane_t1

0xae12,	// (0x00064db8) popup_fast_swap2_window_ParamLimits

0xae12,	// (0x00064db8) popup_fast_swap2_window

0x572a,	// (0x0005f6d0) aid_size_cell_fast2

0x5959,	// (0x0005f8ff) bg_popup_window_pane_cp17

0x2ab9,	// (0x0005ca5f) heading_pane_cp2

0x8a83,	// (0x00062a29) listscroll_fast2_pane

0x5734,	// (0x0005f6da) grid_fast2_pane

0x573e,	// (0x0005f6e4) listscroll_fast2_pane_g1

0x5748,	// (0x0005f6ee) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x00069bad) listscroll_fast2_pane_g

0x8e88,	// (0x00062e2e) scroll_pane_cp26

0x5752,	// (0x0005f6f8) cell_fast2_pane_ParamLimits

0x5752,	// (0x0005f6f8) cell_fast2_pane

0x5769,	// (0x0005f70f) cell_fast2_pane_g1

0x5772,	// (0x0005f718) cell_fast2_pane_g2

0x577b,	// (0x0005f721) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x00069bb2) cell_fast2_pane_g

0x8ac5,	// (0x00062a6b) grid_highlight_pane_cp9

0x004d,	// (0x00059ff3) main_eswt_pane_ParamLimits

0x004d,	// (0x00059ff3) main_eswt_pane

0x56fc,	// (0x0005f6a2) list_single_text_info_pane

0x5783,	// (0x0005f729) eswt_ctrl_button_pane

0x5783,	// (0x0005f729) eswt_ctrl_canvas_pane

0x578b,	// (0x0005f731) eswt_ctrl_combo_pane

0x5783,	// (0x0005f729) eswt_ctrl_default_pane

0x5783,	// (0x0005f729) eswt_ctrl_label_pane

0x5793,	// (0x0005f739) eswt_ctrl_wait_pane

0x579b,	// (0x0005f741) eswt_shell_pane

0x5959,	// (0x0005f8ff) listscroll_eswt_app_pane

0x57bb,	// (0x0005f761) popup_eswt_tasktip_window_ParamLimits

0x57bb,	// (0x0005f761) popup_eswt_tasktip_window

0x26f7,	// (0x0005c69d) bg_popup_window_pane_cp18

0x57cc,	// (0x0005f772) eswt_control_pane_g1_ParamLimits

0x57cc,	// (0x0005f772) eswt_control_pane_g1

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_ParamLimits

0x57d9,	// (0x0005f77f) eswt_control_pane_g2

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_ParamLimits

0x57e6,	// (0x0005f78c) eswt_control_pane_g3

0x57f3,	// (0x0005f799) eswt_control_pane_g4_ParamLimits

0x57f3,	// (0x0005f799) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x00069bb9) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x00069bb9) eswt_control_pane_g

0x8d5f,	// (0x00062d05) bg_button_pane_ParamLimits

0x8d5f,	// (0x00062d05) bg_button_pane

0x8ada,	// (0x00062a80) common_borders_pane_copy2_ParamLimits

0x8ada,	// (0x00062a80) common_borders_pane_copy2

0x5800,	// (0x0005f7a6) control_button_pane_g1_ParamLimits

0x5800,	// (0x0005f7a6) control_button_pane_g1

0x580c,	// (0x0005f7b2) control_button_pane_g2_ParamLimits

0x580c,	// (0x0005f7b2) control_button_pane_g2

0x5818,	// (0x0005f7be) control_button_pane_g3_ParamLimits

0x5818,	// (0x0005f7be) control_button_pane_g3

0x0002,

0xfc1c,	// (0x00069bc2) control_button_pane_g_ParamLimits

0xfc1c,	// (0x00069bc2) control_button_pane_g

0x582c,	// (0x0005f7d2) control_button_pane_t1

0x583a,	// (0x0005f7e0) control_button_pane_t2

0x0001,

0xfc23,	// (0x00069bc9) control_button_pane_t

0x266b,	// (0x0005c611) bg_button_pane_g1

0x267b,	// (0x0005c621) bg_button_pane_g2

0x2673,	// (0x0005c619) bg_button_pane_g3

0x268b,	// (0x0005c631) bg_button_pane_g4

0x2683,	// (0x0005c629) bg_button_pane_g5

0x2693,	// (0x0005c639) bg_button_pane_g6

0x269b,	// (0x0005c641) bg_button_pane_g7

0x26ab,	// (0x0005c651) bg_button_pane_g8

0x26a3,	// (0x0005c649) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006980c) bg_button_pane_g

0x4e09,	// (0x0005edaf) common_borders_pane_ParamLimits

0x4e09,	// (0x0005edaf) common_borders_pane

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy1_ParamLimits

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy1

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy1_ParamLimits

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy1

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy1_ParamLimits

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy1

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy1_ParamLimits

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy1

0x4e44,	// (0x0005edea) bg_eswt_ctrl_canvas_pane_g1

0x4e09,	// (0x0005edaf) common_borders_pane_cp2_ParamLimits

0x4e09,	// (0x0005edaf) common_borders_pane_cp2

0x4e09,	// (0x0005edaf) common_borders_pane_cp3_ParamLimits

0x4e09,	// (0x0005edaf) common_borders_pane_cp3

0x5848,	// (0x0005f7ee) separator_horizontal_pane

0x5850,	// (0x0005f7f6) separator_vertical_pane

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy2_ParamLimits

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy2

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy2_ParamLimits

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy2

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy2_ParamLimits

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy2

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy2_ParamLimits

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy2

0x5959,	// (0x0005f8ff) common_borders_pane_cp4

0x5859,	// (0x0005f7ff) separator_horizontal_pane_g1

0x5862,	// (0x0005f808) separator_horizontal_pane_g2

0x586b,	// (0x0005f811) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x00069bce) separator_horizontal_pane_g

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy3_ParamLimits

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy3

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy3_ParamLimits

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy3

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy3_ParamLimits

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy3

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy3_ParamLimits

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy3

0x5959,	// (0x0005f8ff) common_borders_pane_cp5

0x5874,	// (0x0005f81a) separator_vertical_pane_g1

0x587d,	// (0x0005f823) separator_vertical_pane_g2

0x5886,	// (0x0005f82c) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x00069bd5) separator_vertical_pane_g

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy4_ParamLimits

0x57cc,	// (0x0005f772) eswt_control_pane_g1_copy4

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy4_ParamLimits

0x57d9,	// (0x0005f77f) eswt_control_pane_g2_copy4

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy4_ParamLimits

0x57e6,	// (0x0005f78c) eswt_control_pane_g3_copy4

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy4_ParamLimits

0x57f3,	// (0x0005f799) eswt_control_pane_g4_copy4

0xcc16,	// (0x00066bbc) eswt_ctrl_combo_button_pane

0xcc1e,	// (0x00066bc4) eswt_ctrl_input_pane

0xcc26,	// (0x00066bcc) popup_choice_list_window_cp70

0xcc2e,	// (0x00066bd4) eswt_ctrl_input_pane_t1

0x5959,	// (0x0005f8ff) input_focus_pane_cp70

0x4e09,	// (0x0005edaf) bg_button_pane_cp70_ParamLimits

0x4e09,	// (0x0005edaf) bg_button_pane_cp70

0xcc3c,	// (0x00066be2) eswt_ctrl_combo_button_pane_g1

0x58bd,	// (0x0005f863) wait_bar_pane_cp70

0x26f7,	// (0x0005c69d) bg_popup_window_pane_cp70_ParamLimits

0x26f7,	// (0x0005c69d) bg_popup_window_pane_cp70

0x58c5,	// (0x0005f86b) popup_eswt_tasktip_window_t1

0x58db,	// (0x0005f881) wait_bar_pane_cp71_ParamLimits

0x58db,	// (0x0005f881) wait_bar_pane_cp71

0x58e7,	// (0x0005f88d) grid_eswt_app_pane

0x90b6,	// (0x0006305c) scroll_pane_cp70

0xcc44,	// (0x00066bea) cell_eswt_app_pane_ParamLimits

0xcc44,	// (0x00066bea) cell_eswt_app_pane

0xcc76,	// (0x00066c1c) cell_eswt_app_pane_g1_ParamLimits

0xcc76,	// (0x00066c1c) cell_eswt_app_pane_g1

0xcca5,	// (0x00066c4b) cell_eswt_app_pane_g2_ParamLimits

0xcca5,	// (0x00066c4b) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x00069bdc) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x00069bdc) cell_eswt_app_pane_g

0xccce,	// (0x00066c74) cell_eswt_app_pane_t1_ParamLimits

0xccce,	// (0x00066c74) cell_eswt_app_pane_t1

0x5a81,	// (0x0005fa27) grid_highlight_pane_cp70_ParamLimits

0x5a81,	// (0x0005fa27) grid_highlight_pane_cp70

0x1cdd,	// (0x0005bc83) set_content_pane_g1

0xac22,	// (0x00064bc8) status_small_volume_pane

0x0fcf,	// (0x0005af75) status_small_volume_pane_g1

0x0fd7,	// (0x0005af7d) volume_small2_pane

0x0fe0,	// (0x0005af86) volume_small2_pane_g1

0x0fe9,	// (0x0005af8f) volume_small2_pane_g2

0x0ff2,	// (0x0005af98) volume_small2_pane_g3

0x0ffb,	// (0x0005afa1) volume_small2_pane_g4

0x1004,	// (0x0005afaa) volume_small2_pane_g5

0x100d,	// (0x0005afb3) volume_small2_pane_g6

0x1016,	// (0x0005afbc) volume_small2_pane_g7

0x101f,	// (0x0005afc5) volume_small2_pane_g8

0x1028,	// (0x0005afce) volume_small2_pane_g9

0x1031,	// (0x0005afd7) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x00069be1) volume_small2_pane_g

0x51fb,	// (0x0005f1a1) fep_vkb_top_text_pane_g1_ParamLimits

0xcb9c,	// (0x00066b42) fep_vkb_top_text_pane_t1_ParamLimits

0x54ae,	// (0x0005f454) popup_preview_fixed_window_g3_ParamLimits

0x54ae,	// (0x0005f454) popup_preview_fixed_window_g3

0xb4aa,	// (0x00065450) popup_toolbar_trans_pane

0xc5f5,	// (0x0006659b) aid_height_set_list_ParamLimits

0x3c14,	// (0x0005dbba) aid_size_parent_ParamLimits

0x212f,	// (0x0005c0d5) list_highlight_pane_cp2_ParamLimits

0x1cdd,	// (0x0005bc83) set_content_pane_g1_ParamLimits

0xc706,	// (0x000666ac) list_single_image_pane_ParamLimits

0xc706,	// (0x000666ac) list_single_image_pane

0xcd00,	// (0x00066ca6) aid_size_cell_image_ParamLimits

0xcd00,	// (0x00066ca6) aid_size_cell_image

0xcd0d,	// (0x00066cb3) grid_single_image_pane_ParamLimits

0xcd0d,	// (0x00066cb3) grid_single_image_pane

0x8d6d,	// (0x00062d13) list_single_image_pane_g1_ParamLimits

0x8d6d,	// (0x00062d13) list_single_image_pane_g1

0x8d79,	// (0x00062d1f) list_single_image_pane_g2_ParamLimits

0x8d79,	// (0x00062d1f) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x00069bf6) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x00069bf6) list_single_image_pane_g

0x5aa8,	// (0x0005fa4e) list_single_image_pane_t1_ParamLimits

0x5aa8,	// (0x0005fa4e) list_single_image_pane_t1

0xcd1b,	// (0x00066cc1) cell_image_list_pane_ParamLimits

0xcd1b,	// (0x00066cc1) cell_image_list_pane

0xcd2f,	// (0x00066cd5) cell_image_list_pane_g1

0xcd38,	// (0x00066cde) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x00069bfb) cell_image_list_pane_g

0x5ae6,	// (0x0005fa8c) aid_size_cell_tb_trans_pane

0x8d5f,	// (0x00062d05) bg_tb_trans_pane

0x5af8,	// (0x0005fa9e) grid_tb_trans_pane

0x266b,	// (0x0005c611) bg_tb_trans_pane_g1

0x267b,	// (0x0005c621) bg_tb_trans_pane_g2

0x2673,	// (0x0005c619) bg_tb_trans_pane_g3

0x268b,	// (0x0005c631) bg_tb_trans_pane_g4

0x2683,	// (0x0005c629) bg_tb_trans_pane_g5

0x26ab,	// (0x0005c651) bg_tb_trans_pane_g6

0x26a3,	// (0x0005c649) bg_tb_trans_pane_g7

0x2693,	// (0x0005c639) bg_tb_trans_pane_g8

0x269b,	// (0x0005c641) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x00069c00) bg_tb_trans_pane_g

0x5b0c,	// (0x0005fab2) cell_toolbar_trans_pane_ParamLimits

0x5b0c,	// (0x0005fab2) cell_toolbar_trans_pane

0x4e44,	// (0x0005edea) cell_toolbar_trans_pane_g1

0xc95f,	// (0x00066905) list_form2_midp_pane_t1

0xc96d,	// (0x00066913) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x00069a9d) list_form2_midp_pane_t

0x4a98,	// (0x0005ea3e) scroll_pane_cp51_ParamLimits

0x4c5f,	// (0x0005ec05) form2_midp_wait_pane_g1

0x4c68,	// (0x0005ec0e) form2_midp_wait_pane_g2

0x4c71,	// (0x0005ec17) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00069ab2) form2_midp_wait_pane_g

0x59bb,	// (0x0005f961) list_highlight_pane_cp21_ParamLimits

0x4caa,	// (0x0005ec50) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4cb9,	// (0x0005ec5f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_2graphic_im_pane_ParamLimits

0x3de6,	// (0x0005dd8c) list_single_2graphic_im_pane

0xcd41,	// (0x00066ce7) list_single_2graphic_im_pane_g1_ParamLimits

0xcd41,	// (0x00066ce7) list_single_2graphic_im_pane_g1

0xcd52,	// (0x00066cf8) list_single_2graphic_im_pane_g2_ParamLimits

0xcd52,	// (0x00066cf8) list_single_2graphic_im_pane_g2

0xcd5e,	// (0x00066d04) list_single_2graphic_im_pane_g3_ParamLimits

0xcd5e,	// (0x00066d04) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x00069c13) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x00069c13) list_single_2graphic_im_pane_g

0xcd72,	// (0x00066d18) list_single_2graphic_im_pane_t1_ParamLimits

0xcd72,	// (0x00066d18) list_single_2graphic_im_pane_t1

0x54ba,	// (0x0005f460) list_single_graphic_2heading_pane_fp_ParamLimits

0x54ba,	// (0x0005f460) list_single_graphic_2heading_pane_fp

0xe982,	// (0x00068928) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe982,	// (0x00068928) list_single_graphic_2heading_pane_fp_g1

0x54d3,	// (0x0005f479) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x54d3,	// (0x0005f479) list_single_graphic_2heading_pane_fp_g2

0x542c,	// (0x0005f3d2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x542c,	// (0x0005f3d2) list_single_graphic_2heading_pane_fp_g3

0x5438,	// (0x0005f3de) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5438,	// (0x0005f3de) list_single_graphic_2heading_pane_fp_g4

0x54df,	// (0x0005f485) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x54df,	// (0x0005f485) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x00069b3a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x00069b3a) list_single_graphic_2heading_pane_fp_g

0xeaa9,	// (0x00068a4f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeaa9,	// (0x00068a4f) list_single_graphic_2heading_pane_fp_t1

0xe9ba,	// (0x00068960) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe9ba,	// (0x00068960) list_single_graphic_2heading_pane_fp_t2

0xeabf,	// (0x00068a65) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeabf,	// (0x00068a65) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x00069c1c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x00069c1c) list_single_graphic_2heading_pane_fp_t

0x4ebd,	// (0x0005ee63) fep_hwr_write_pane_g5_ParamLimits

0x4ebd,	// (0x0005ee63) fep_hwr_write_pane_g5

0x4ec9,	// (0x0005ee6f) fep_hwr_write_pane_g6_ParamLimits

0x4ec9,	// (0x0005ee6f) fep_hwr_write_pane_g6

0x579b,	// (0x0005f741) eswt_shell_pane_ParamLimits

0x26f7,	// (0x0005c69d) bg_popup_window_pane_cp18_ParamLimits

0x3b5a,	// (0x0005db00) heading_pane_cp70

0x58c5,	// (0x0005f86b) popup_eswt_tasktip_window_t1_ParamLimits

0xb574,	// (0x0006551a) aid_touch_tab_arrow_left

0xb58a,	// (0x00065530) aid_touch_tab_arrow_right

0x9dc3,	// (0x00063d69) title_pane_g3_ParamLimits

0x9dc3,	// (0x00063d69) title_pane_g3

0x8d1e,	// (0x00062cc4) set_value_pane_g1

0xb4aa,	// (0x00065450) popup_toolbar_trans_pane_ParamLimits

0x5ae6,	// (0x0005fa8c) aid_size_cell_tb_trans_pane_ParamLimits

0x8d5f,	// (0x00062d05) bg_tb_trans_pane_ParamLimits

0x5af8,	// (0x0005fa9e) grid_tb_trans_pane_ParamLimits

0x8854,	// (0x000627fa) cont_note_pane_ParamLimits

0x8854,	// (0x000627fa) cont_note_pane

0x8ada,	// (0x00062a80) cont_snote2_single_text_pane_ParamLimits

0x8ada,	// (0x00062a80) cont_snote2_single_text_pane

0x8ada,	// (0x00062a80) cont_snote2_single_graphic_pane_ParamLimits

0x8ada,	// (0x00062a80) cont_snote2_single_graphic_pane

0x2ce1,	// (0x0005cc87) cont_note_wait_pane_ParamLimits

0x2ce1,	// (0x0005cc87) cont_note_wait_pane

0x2ce1,	// (0x0005cc87) cont_note_image_pane_ParamLimits

0x2ce1,	// (0x0005cc87) cont_note_image_pane

0x5ba0,	// (0x0005fb46) popup_note2_window_g1_ParamLimits

0x5ba0,	// (0x0005fb46) popup_note2_window_g1

0x5bd1,	// (0x0005fb77) popup_note2_window_t1_ParamLimits

0x5bd1,	// (0x0005fb77) popup_note2_window_t1

0x5c16,	// (0x0005fbbc) popup_note2_window_t2_ParamLimits

0x5c16,	// (0x0005fbbc) popup_note2_window_t2

0x5c5b,	// (0x0005fc01) popup_note2_window_t3_ParamLimits

0x5c5b,	// (0x0005fc01) popup_note2_window_t3

0x5ca0,	// (0x0005fc46) popup_note2_window_t4_ParamLimits

0x5ca0,	// (0x0005fc46) popup_note2_window_t4

0x88d8,	// (0x0006287e) popup_note2_window_t5_ParamLimits

0x88d8,	// (0x0006287e) popup_note2_window_t5

0x0004,

0xfc82,	// (0x00069c28) popup_note2_window_t_ParamLimits

0xfc82,	// (0x00069c28) popup_note2_window_t

0x5ccf,	// (0x0005fc75) popup_note2_image_window_g1_ParamLimits

0x5ccf,	// (0x0005fc75) popup_note2_image_window_g1

0x5cdb,	// (0x0005fc81) popup_note2_image_window_g2_ParamLimits

0x5cdb,	// (0x0005fc81) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x00069c33) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x00069c33) popup_note2_image_window_g

0x5ced,	// (0x0005fc93) popup_note2_image_window_t1_ParamLimits

0x5ced,	// (0x0005fc93) popup_note2_image_window_t1

0x5d05,	// (0x0005fcab) popup_note2_image_window_t2_ParamLimits

0x5d05,	// (0x0005fcab) popup_note2_image_window_t2

0x5d1d,	// (0x0005fcc3) popup_note2_image_window_t3_ParamLimits

0x5d1d,	// (0x0005fcc3) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x00069c38) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x00069c38) popup_note2_image_window_t

0x2cef,	// (0x0005cc95) popup_note2_wait_window_g1_ParamLimits

0x2cef,	// (0x0005cc95) popup_note2_wait_window_g1

0x5d39,	// (0x0005fcdf) popup_note2_wait_window_g2_ParamLimits

0x5d39,	// (0x0005fcdf) popup_note2_wait_window_g2

0x2d07,	// (0x0005ccad) popup_note2_wait_window_g3_ParamLimits

0x2d07,	// (0x0005ccad) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x00069c3f) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x00069c3f) popup_note2_wait_window_g

0x5d45,	// (0x0005fceb) popup_note2_wait_window_t1_ParamLimits

0x5d45,	// (0x0005fceb) popup_note2_wait_window_t1

0x5d63,	// (0x0005fd09) popup_note2_wait_window_t2_ParamLimits

0x5d63,	// (0x0005fd09) popup_note2_wait_window_t2

0x5d81,	// (0x0005fd27) popup_note2_wait_window_t3_ParamLimits

0x5d81,	// (0x0005fd27) popup_note2_wait_window_t3

0x5d93,	// (0x0005fd39) popup_note2_wait_window_t4_ParamLimits

0x5d93,	// (0x0005fd39) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x00069c46) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x00069c46) popup_note2_wait_window_t

0x5da5,	// (0x0005fd4b) wait_bar2_pane_ParamLimits

0x5da5,	// (0x0005fd4b) wait_bar2_pane

0x5dbd,	// (0x0005fd63) popup_snote2_single_text_window_g1_ParamLimits

0x5dbd,	// (0x0005fd63) popup_snote2_single_text_window_g1

0x5de5,	// (0x0005fd8b) popup_snote2_single_text_window_t1_ParamLimits

0x5de5,	// (0x0005fd8b) popup_snote2_single_text_window_t1

0x5e31,	// (0x0005fdd7) popup_snote2_single_text_window_t2_ParamLimits

0x5e31,	// (0x0005fdd7) popup_snote2_single_text_window_t2

0x5e7d,	// (0x0005fe23) popup_snote2_single_text_window_t3_ParamLimits

0x5e7d,	// (0x0005fe23) popup_snote2_single_text_window_t3

0x5ebe,	// (0x0005fe64) popup_snote2_single_text_window_t4_ParamLimits

0x5ebe,	// (0x0005fe64) popup_snote2_single_text_window_t4

0x5ef4,	// (0x0005fe9a) popup_snote2_single_text_window_t5_ParamLimits

0x5ef4,	// (0x0005fe9a) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x00069c4f) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x00069c4f) popup_snote2_single_text_window_t

0x5f1f,	// (0x0005fec5) popup_snote2_single_graphic_window_g1_ParamLimits

0x5f1f,	// (0x0005fec5) popup_snote2_single_graphic_window_g1

0x5f47,	// (0x0005feed) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f47,	// (0x0005feed) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x00069c5a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x00069c5a) popup_snote2_single_graphic_window_g

0x5f6f,	// (0x0005ff15) popup_snote2_single_graphic_window_t1_ParamLimits

0x5f6f,	// (0x0005ff15) popup_snote2_single_graphic_window_t1

0x5fbb,	// (0x0005ff61) popup_snote2_single_graphic_window_t2_ParamLimits

0x5fbb,	// (0x0005ff61) popup_snote2_single_graphic_window_t2

0x5e7d,	// (0x0005fe23) popup_snote2_single_graphic_window_t3_ParamLimits

0x5e7d,	// (0x0005fe23) popup_snote2_single_graphic_window_t3

0x5ebe,	// (0x0005fe64) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ebe,	// (0x0005fe64) popup_snote2_single_graphic_window_t4

0x5ef4,	// (0x0005fe9a) popup_snote2_single_graphic_window_t5_ParamLimits

0x5ef4,	// (0x0005fe9a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x00069c5f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x00069c5f) popup_snote2_single_graphic_window_t

0x4948,	// (0x0005e8ee) clock_nsta_pane_cp2_t1

0x4948,	// (0x0005e8ee) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x00069a73) clock_nsta_pane_cp2_t

0xe11e,	// (0x000680c4) form_field_data_wide_pane_g1_ParamLimits

0x8d6d,	// (0x00062d13) form_field_data_wide_pane_g2_ParamLimits

0x8d6d,	// (0x00062d13) form_field_data_wide_pane_g2

0x8d79,	// (0x00062d1f) form_field_data_wide_pane_g3_ParamLimits

0x8d79,	// (0x00062d1f) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00069626) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00069626) form_field_data_wide_pane_g

0xc868,	// (0x0006680e) grid_touch_3_pane_ParamLimits

0xc868,	// (0x0006680e) grid_touch_3_pane

0xcda3,	// (0x00066d49) cell_touch_3_pane_ParamLimits

0xcda3,	// (0x00066d49) cell_touch_3_pane

0x4e44,	// (0x0005edea) cell_touch_3_pane_g1

0x4e44,	// (0x0005edea) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x00069af8) cell_touch_3_pane_g

0x8930,	// (0x000628d6) cont_query_data_pane

0x8938,	// (0x000628de) cont_query_data_pane_cp1

0x603a,	// (0x0005ffe0) button_value_adjust_pane_cp7

0x6042,	// (0x0005ffe8) query_popup_pane_cp3

0xe21a,	// (0x000681c0) bg_popup_sub_pane_cp22_ParamLimits

0xf2f6,	// (0x0006929c) navi_navi_volume_pane_cp2

0xf311,	// (0x000692b7) popup_side_volume_key_window_g2

0xf320,	// (0x000692c6) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000696bc) popup_side_volume_key_window_g

0xf33d,	// (0x000692e3) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x000696c3) popup_side_volume_key_window_t

0xe487,	// (0x0006842d) popup_side_volume_key_window_ParamLimits

0xa2e0,	// (0x00064286) list_double_graphic_pane_g4_ParamLimits

0xa2e0,	// (0x00064286) list_double_graphic_pane_g4

0xc6dd,	// (0x00066683) list_single_2heading_msg_pane_ParamLimits

0xc6dd,	// (0x00066683) list_single_2heading_msg_pane

0xcdef,	// (0x00066d95) list_single_2heading_msg_pane_g1_ParamLimits

0xcdef,	// (0x00066d95) list_single_2heading_msg_pane_g1

0xcdfb,	// (0x00066da1) list_single_2heading_msg_pane_g2_ParamLimits

0xcdfb,	// (0x00066da1) list_single_2heading_msg_pane_g2

0xce0e,	// (0x00066db4) list_single_2heading_msg_pane_g3_ParamLimits

0xce0e,	// (0x00066db4) list_single_2heading_msg_pane_g3

0xce1a,	// (0x00066dc0) list_single_2heading_msg_pane_g4_ParamLimits

0xce1a,	// (0x00066dc0) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x00069c6a) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x00069c6a) list_single_2heading_msg_pane_g

0xba66,	// (0x00065a0c) list_single_2heading_msg_pane_t1_ParamLimits

0xba66,	// (0x00065a0c) list_single_2heading_msg_pane_t1

0xba8e,	// (0x00065a34) list_single_2heading_msg_pane_t2_ParamLimits

0xba8e,	// (0x00065a34) list_single_2heading_msg_pane_t2

0xbaf9,	// (0x00065a9f) list_single_2heading_msg_pane_t3_ParamLimits

0xbaf9,	// (0x00065a9f) list_single_2heading_msg_pane_t3

0xeadf,	// (0x00068a85) list_single_2heading_msg_pane_t4_ParamLimits

0xeadf,	// (0x00068a85) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x00069c73) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x00069c73) list_single_2heading_msg_pane_t

0x5977,	// (0x0005f91d) title_pane_g4_ParamLimits

0x5977,	// (0x0005f91d) title_pane_g4

0xf10b,	// (0x000690b1) title_pane_stacon_g3_ParamLimits

0xf10b,	// (0x000690b1) title_pane_stacon_g3

0x5b63,	// (0x0005fb09) list_single_2graphic_im_pane_g4_ParamLimits

0x5b63,	// (0x0005fb09) list_single_2graphic_im_pane_g4

0x3751,	// (0x0005d6f7) popup_side_volume_key_window_cp

0x4172,	// (0x0005e118) main_idle_act2_pane_t1

0x06a0,	// (0x0005a646) toolbar_button_pane_g10

0xa140,	// (0x000640e6) popup_toolbar_window_cp1

0x4939,	// (0x0005e8df) clock_nsta_pane_cp_t1

0x4939,	// (0x0005e8df) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x00069a6e) clock_nsta_pane_cp_t

0xf2f6,	// (0x0006929c) navi_navi_volume_pane_cp2_ParamLimits

0xf305,	// (0x000692ab) popup_side_volume_key_window_g1_ParamLimits

0xf311,	// (0x000692b7) popup_side_volume_key_window_g2_ParamLimits

0xf320,	// (0x000692c6) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000696bc) popup_side_volume_key_window_g_ParamLimits

0x0bfe,	// (0x0005aba4) fep_hwr_aid_pane

0x0ca7,	// (0x0005ac4d) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e8d,	// (0x0005ee33) fep_hwr_top_pane_g1_ParamLimits

0x4e9f,	// (0x0005ee45) fep_hwr_top_pane_g2_ParamLimits

0x0cc7,	// (0x0005ac6d) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00069ac3) fep_hwr_top_pane_g_ParamLimits

0x0cdc,	// (0x0005ac82) fep_hwr_top_text_pane_ParamLimits

0x3506,	// (0x0005d4ac) aid_touch_tab_arrow_arrow_2

0x350f,	// (0x0005d4b5) aid_touch_tab_arrow_left_2

0x0c12,	// (0x0005abb8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0c49,	// (0x0005abef) fep_hwr_prediction_pane

0x4ff5,	// (0x0005ef9b) fep_vkb_prediction_pane

0xcb7c,	// (0x00066b22) fep_vkb_side_pane_g3_ParamLimits

0xcb7c,	// (0x00066b22) fep_vkb_side_pane_g3

0x0e6b,	// (0x0005ae11) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0edc,	// (0x0005ae82) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0ee9,	// (0x0005ae8f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x00069b72) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x10ca,	// (0x0005b070) fep_hwr_prediction_pane_g1

0x10d4,	// (0x0005b07a) fep_hwr_prediction_pane_g2

0x10dc,	// (0x0005b082) fep_hwr_prediction_pane_g3

0x10e4,	// (0x0005b08a) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00069c7c) fep_hwr_prediction_pane_g

0x6069,	// (0x0006000f) fep_vkb_prediction_pane_g1

0x6073,	// (0x00060019) fep_vkb_prediction_pane_g2

0x607b,	// (0x00060021) fep_vkb_prediction_pane_g3

0x6083,	// (0x00060029) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x00069c85) fep_vkb_prediction_pane_g

0x09f0,	// (0x0005a996) slider_set_pane_g3

0x0a04,	// (0x0005a9aa) slider_set_pane_g4

0x0a1c,	// (0x0005a9c2) slider_set_pane_g5

0x09f0,	// (0x0005a996) slider_set_pane_g6

0x0a32,	// (0x0005a9d8) slider_set_pane_g7

0x3d93,	// (0x0005dd39) slider_form_pane_g3

0x3d9c,	// (0x0005dd42) slider_form_pane_g4

0x3da4,	// (0x0005dd4a) slider_form_pane_g5

0x3d93,	// (0x0005dd39) slider_form_pane_g6

0xc69c,	// (0x00066642) slider_form_pane_g7

0x4420,	// (0x0005e3c6) slider_set_pane_vc_g3

0x4429,	// (0x0005e3cf) slider_set_pane_vc_g4

0x4432,	// (0x0005e3d8) slider_set_pane_vc_g5

0x4420,	// (0x0005e3c6) slider_set_pane_vc_g6

0x443b,	// (0x0005e3e1) slider_set_pane_vc_g7

0x460f,	// (0x0005e5b5) slider_form_pane_vc_g1

0x4618,	// (0x0005e5be) slider_form_pane_vc_g2

0x4621,	// (0x0005e5c7) slider_form_pane_vc_g3

0x460f,	// (0x0005e5b5) slider_form_pane_vc_g4

0x462a,	// (0x0005e5d0) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00069a40) slider_form_pane_vc_g

0xef0f,	// (0x00068eb5) main_idle_act3_pane

0x608b,	// (0x00060031) ai3_links_pane

0xce32,	// (0x00066dd8) popup_ai3_data_window_ParamLimits

0xce32,	// (0x00066dd8) popup_ai3_data_window

0x5959,	// (0x0005f8ff) grid_ai3_links_pane

0xce50,	// (0x00066df6) cell_ai3_links_pane_ParamLimits

0xce50,	// (0x00066df6) cell_ai3_links_pane

0x60cc,	// (0x00060072) bg_popup_sub_pane_cp11

0x60d9,	// (0x0006007f) cell_ai3_links_pane_g1

0x5959,	// (0x0005f8ff) bg_popup_sub_pane_cp12

0x60fe,	// (0x000600a4) heading_ai3_data_pane

0x6106,	// (0x000600ac) list_ai3_gene_pane

0x6112,	// (0x000600b8) popup_ai3_data_window_g1

0x611a,	// (0x000600c0) heading_ai3_data_pane_g1

0x6122,	// (0x000600c8) heading_ai3_data_pane_t1

0x6130,	// (0x000600d6) list_double_ai3_gene_pane_ParamLimits

0x6130,	// (0x000600d6) list_double_ai3_gene_pane

0x613d,	// (0x000600e3) list_single_ai3_gene_pane_ParamLimits

0x613d,	// (0x000600e3) list_single_ai3_gene_pane

0x4e09,	// (0x0005edaf) list_highlight_pane_cp7_ParamLimits

0x4e09,	// (0x0005edaf) list_highlight_pane_cp7

0x614a,	// (0x000600f0) list_single_a13_gene_pane_t1_ParamLimits

0x614a,	// (0x000600f0) list_single_a13_gene_pane_t1

0x6161,	// (0x00060107) list_single_ai3_gene_pane_g1

0x616a,	// (0x00060110) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x00069c8e) list_single_ai3_gene_pane_g

0x6172,	// (0x00060118) list_double_ai3_gene_pane_g1_ParamLimits

0x6172,	// (0x00060118) list_double_ai3_gene_pane_g1

0x617e,	// (0x00060124) list_double_ai3_gene_pane_t1_ParamLimits

0x617e,	// (0x00060124) list_double_ai3_gene_pane_t1

0x619a,	// (0x00060140) list_double_ai3_gene_pane_t2_ParamLimits

0x619a,	// (0x00060140) list_double_ai3_gene_pane_t2

0x61af,	// (0x00060155) list_double_ai3_gene_pane_t3_ParamLimits

0x61af,	// (0x00060155) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x00069c93) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x00069c93) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xead5,	// (0x00068a7b) aid_size_min_col_2

0xcdd9,	// (0x00066d7f) aid_size_min_msg_ParamLimits

0xcdd9,	// (0x00066d7f) aid_size_min_msg

0xcb90,	// (0x00066b36) fep_vkb_top_text_pane_g2_ParamLimits

0xcb90,	// (0x00066b36) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00069af3) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00069af3) fep_vkb_top_text_pane_g

0xef0f,	// (0x00068eb5) main_hc_apps_shell_pane

0x61cc,	// (0x00060172) grid_hc_apps_pane_ParamLimits

0x61cc,	// (0x00060172) grid_hc_apps_pane

0x61db,	// (0x00060181) list_hc_apps_pane

0x61e3,	// (0x00060189) scroll_pane_cp37_ParamLimits

0x61e3,	// (0x00060189) scroll_pane_cp37

0xce6a,	// (0x00066e10) cell_hc_apps_pane_ParamLimits

0xce6a,	// (0x00066e10) cell_hc_apps_pane

0xcf34,	// (0x00066eda) cell_hc_apps_pane_g1_ParamLimits

0xcf34,	// (0x00066eda) cell_hc_apps_pane_g1

0x62d8,	// (0x0006027e) cell_hc_apps_pane_g2_ParamLimits

0x62d8,	// (0x0006027e) cell_hc_apps_pane_g2

0x62f4,	// (0x0006029a) cell_hc_apps_pane_g3_ParamLimits

0x62f4,	// (0x0006029a) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x00069c9a) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x00069c9a) cell_hc_apps_pane_g

0xcf61,	// (0x00066f07) cell_hc_apps_pane_t1_ParamLimits

0xcf61,	// (0x00066f07) cell_hc_apps_pane_t1

0x8854,	// (0x000627fa) grid_highlight_pane_cp10_ParamLimits

0x8854,	// (0x000627fa) grid_highlight_pane_cp10

0xcfa1,	// (0x00066f47) list_single_hc_apps_pane_ParamLimits

0xcfa1,	// (0x00066f47) list_single_hc_apps_pane

0xcfdb,	// (0x00066f81) list_single_hc_apps_pane_g1

0xcff4,	// (0x00066f9a) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x00069ca1) list_single_hc_apps_pane_g

0xd00d,	// (0x00066fb3) list_single_hc_apps_pane_g2_copy1

0xbb67,	// (0x00065b0d) list_single_hc_apps_pane_t1

0x59bb,	// (0x0005f961) bg_set_opt_pane_cp_ParamLimits

0xf032,	// (0x00068fd8) setting_slider_pane_t1_ParamLimits

0xf04b,	// (0x00068ff1) setting_slider_pane_t2_ParamLimits

0xf065,	// (0x0006900b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00069504) setting_slider_pane_t_ParamLimits

0xf07d,	// (0x00069023) slider_set_pane_ParamLimits

0xf53f,	// (0x000694e5) control_pane_g5_ParamLimits

0xf53f,	// (0x000694e5) control_pane_g5

0x3bc6,	// (0x0005db6c) slider_set_pane_g1_ParamLimits

0x09e4,	// (0x0005a98a) slider_set_pane_g2_ParamLimits

0x09f0,	// (0x0005a996) slider_set_pane_g3_ParamLimits

0x0a04,	// (0x0005a9aa) slider_set_pane_g4_ParamLimits

0x0a1c,	// (0x0005a9c2) slider_set_pane_g5_ParamLimits

0x09f0,	// (0x0005a996) slider_set_pane_g6_ParamLimits

0x0a32,	// (0x0005a9d8) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006990a) slider_set_pane_g_ParamLimits

0xe56c,	// (0x00068512) navi_icon_text_pane_ParamLimits

0xb53b,	// (0x000654e1) aid_fill_nsta_2_ParamLimits

0xb574,	// (0x0006551a) aid_touch_tab_arrow_left_ParamLimits

0xb58a,	// (0x00065530) aid_touch_tab_arrow_right_ParamLimits

0xb625,	// (0x000655cb) clock_nsta_pane_ParamLimits

0xc4dc,	// (0x00066482) navi_icon_pane_g1_ParamLimits

0xc4e8,	// (0x0006648e) navi_text_pane_t1_ParamLimits

0xc941,	// (0x000668e7) navi_icon_text_pane_g1_ParamLimits

0xc94d,	// (0x000668f3) navi_icon_text_pane_t1_ParamLimits

0xcfdb,	// (0x00066f81) list_single_hc_apps_pane_g1_ParamLimits

0xcff4,	// (0x00066f9a) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x00069ca1) list_single_hc_apps_pane_g_ParamLimits

0xd00d,	// (0x00066fb3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbb67,	// (0x00065b0d) list_single_hc_apps_pane_t1_ParamLimits

0x9cb2,	// (0x00063c58) popup_toolbar2_fixed_window_ParamLimits

0x9cb2,	// (0x00063c58) popup_toolbar2_fixed_window

0xb4a0,	// (0x00065446) popup_toolbar2_float_window

0x5959,	// (0x0005f8ff) bg_popup_sub_pane_cp27

0x63ae,	// (0x00060354) grid_toolbar2_float_pane

0x5959,	// (0x0005f8ff) bg_popup_sub_pane_cp26

0x63ae,	// (0x00060354) grid_toolbar2_fixed_pane

0xd029,	// (0x00066fcf) cell_toolbar2_fixed_pane_ParamLimits

0xd029,	// (0x00066fcf) cell_toolbar2_fixed_pane

0xd043,	// (0x00066fe9) cell_toolbar2_fixed_pane_g1

0x63cf,	// (0x00060375) toolbar2_fixed_button_pane

0x266b,	// (0x0005c611) toolbar2_fixed_button_pane_g1

0x267b,	// (0x0005c621) toolbar2_fixed_button_pane_g2

0x2673,	// (0x0005c619) toolbar2_fixed_button_pane_g3

0x268b,	// (0x0005c631) toolbar2_fixed_button_pane_g4

0x2683,	// (0x0005c629) toolbar2_fixed_button_pane_g5

0x2693,	// (0x0005c639) toolbar2_fixed_button_pane_g6

0x269b,	// (0x0005c641) toolbar2_fixed_button_pane_g7

0x26ab,	// (0x0005c651) toolbar2_fixed_button_pane_g8

0x26a3,	// (0x0005c649) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006980c) toolbar2_fixed_button_pane_g

0x63d7,	// (0x0006037d) cell_toolbar2_float_pane_ParamLimits

0x63d7,	// (0x0006037d) cell_toolbar2_float_pane

0x63e8,	// (0x0006038e) cell_toolbar2_float_pane_g1

0x63cf,	// (0x00060375) toolbar2_fixed_button_pane_cp

0xca78,	// (0x00066a1e) fep_vkb_accented_list_pane_ParamLimits

0xca78,	// (0x00066a1e) fep_vkb_accented_list_pane

0x0e4b,	// (0x0005adf1) bg_popup_fep_shadow_pane_g9

0x1e00,	// (0x0005bda6) bg_popup_fep_shadow_pane_cp3

0x8e6f,	// (0x00062e15) list_accented_list_pane

0x63f1,	// (0x00060397) list_single_accented_list_pane_ParamLimits

0x63f1,	// (0x00060397) list_single_accented_list_pane

0x1e00,	// (0x0005bda6) list_highlight_pane_cp10

0x6402,	// (0x000603a8) list_single_accented_list_pane_t1

0xb3be,	// (0x00065364) popup_slider_window_ParamLimits

0xb3be,	// (0x00065364) popup_slider_window

0x604a,	// (0x0005fff0) aid_indentation_list_msg

0xd146,	// (0x000670ec) bg_popup_window_pane_cp19

0x653e,	// (0x000604e4) popup_slider_window_g1

0x655a,	// (0x00060500) popup_slider_window_g2

0x6576,	// (0x0006051c) popup_slider_window_g3

0x0005,

0xfd00,	// (0x00069ca6) popup_slider_window_g

0x65dc,	// (0x00060582) popup_slider_window_t1

0x6650,	// (0x000605f6) small_volume_slider_vertical_pane

0x4e44,	// (0x0005edea) small_volume_slider_vertical_pane_g1

0x4e44,	// (0x0005edea) small_volume_slider_vertical_pane_g2

0x666c,	// (0x00060612) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x00069cb8) small_volume_slider_vertical_pane_g

0x9c1c,	// (0x00063bc2) area_side_right_pane_ParamLimits

0x9c1c,	// (0x00063bc2) area_side_right_pane

0xbb95,	// (0x00065b3b) aid_size_side_button_ParamLimits

0xbb95,	// (0x00065b3b) aid_size_side_button

0xbbae,	// (0x00065b54) grid_sctrl_middle_pane_ParamLimits

0xbbae,	// (0x00065b54) grid_sctrl_middle_pane

0x114d,	// (0x0005b0f3) sctrl_sk_bottom_pane

0x115e,	// (0x0005b104) sctrl_sk_top_pane

0x1170,	// (0x0005b116) aid_touch_sctrl_top

0x117d,	// (0x0005b123) bg_sctrl_sk_pane_ParamLimits

0x117d,	// (0x0005b123) bg_sctrl_sk_pane

0x118b,	// (0x0005b131) sctrl_sk_top_pane_g1

0x1198,	// (0x0005b13e) sctrl_sk_top_pane_t1

0x1170,	// (0x0005b116) aid_touch_sctrl_bottom

0x117d,	// (0x0005b123) bg_sctrl_sk_pane_cp_ParamLimits

0x117d,	// (0x0005b123) bg_sctrl_sk_pane_cp

0x11b3,	// (0x0005b159) sctrl_sk_bottom_pane_g1

0x1198,	// (0x0005b13e) sctrl_sk_bottom_pane_t1

0xbbc8,	// (0x00065b6e) cell_sctrl_middle_pane_ParamLimits

0xbbc8,	// (0x00065b6e) cell_sctrl_middle_pane

0xbbdb,	// (0x00065b81) aid_touch_sctrl_middle_ParamLimits

0xbbdb,	// (0x00065b81) aid_touch_sctrl_middle

0xbbe8,	// (0x00065b8e) bg_sctrl_middle_pane_ParamLimits

0xbbe8,	// (0x00065b8e) bg_sctrl_middle_pane

0x1836,	// (0x0005b7dc) cell_sctrl_middle_pane_g1_ParamLimits

0x1836,	// (0x0005b7dc) cell_sctrl_middle_pane_g1

0xbbf6,	// (0x00065b9c) cell_sctrl_middle_pane_g2_ParamLimits

0xbbf6,	// (0x00065b9c) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x00069cc4) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x00069cc4) cell_sctrl_middle_pane_g

0x266b,	// (0x0005c611) bg_sctrl_middle_pane_g1

0x2673,	// (0x0005c619) bg_sctrl_middle_pane_g2

0x267b,	// (0x0005c621) bg_sctrl_middle_pane_g3

0x2683,	// (0x0005c629) bg_sctrl_middle_pane_g4

0x268b,	// (0x0005c631) bg_sctrl_middle_pane_g5

0x2693,	// (0x0005c639) bg_sctrl_middle_pane_g6

0x269b,	// (0x0005c641) bg_sctrl_middle_pane_g7

0x26a3,	// (0x0005c649) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x00069cc9) bg_sctrl_middle_pane_g

0x26ab,	// (0x0005c651) bg_sctrl_middle_pane_g8_copy1

0x266b,	// (0x0005c611) bg_sctrl_sk_pane_g1

0x267b,	// (0x0005c621) bg_sctrl_sk_pane_g2

0x2673,	// (0x0005c619) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006980c) bg_sctrl_sk_pane_g

0x8c98,	// (0x00062c3e) aid_size_touch_scroll_bar

0x268b,	// (0x0005c631) bg_sctrl_sk_pane_g4

0x2683,	// (0x0005c629) bg_sctrl_sk_pane_g5

0x2693,	// (0x0005c639) bg_sctrl_sk_pane_g6

0x269b,	// (0x0005c641) bg_sctrl_sk_pane_g7

0x26ab,	// (0x0005c651) bg_sctrl_sk_pane_g8

0x26a3,	// (0x0005c649) bg_sctrl_sk_pane_g9

0x00ef,	// (0x0005a095) popup_fep_china_hwr2_fs_candidate_window

0xae76,	// (0x00064e1c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae76,	// (0x00064e1c) popup_fep_china_hwr2_fs_control_window

0x0e6b,	// (0x0005ae11) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x00069cbf) sctrl_sk_top_pane_g

0xd1fe,	// (0x000671a4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1fe,	// (0x000671a4) aid_fep_china_hwr2_fs_cell

0xd214,	// (0x000671ba) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd214,	// (0x000671ba) bg_popup_fep_shadow_pane_cp4

0xd22b,	// (0x000671d1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd22b,	// (0x000671d1) bg_popup_fep_shadow_pane_cp5

0xd23d,	// (0x000671e3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd23d,	// (0x000671e3) popup_fep_china_hwr2_fs_control_bar_grid

0xd251,	// (0x000671f7) popup_fep_china_hwr2_fs_control_funtion_grid

0x66cb,	// (0x00060671) aid_fep_china_hwr2_fs_candi_cell

0x5959,	// (0x0005f8ff) bg_popup_fep_shadow_pane_cp6

0x66d5,	// (0x0006067b) popup_fep_china_hwr2_fs_candidate_grid

0xd259,	// (0x000671ff) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd259,	// (0x000671ff) cell_fep_china_hwr2_fs_funtion_grid

0x4e44,	// (0x0005edea) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x66f7,	// (0x0006069d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x66f7,	// (0x0006069d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6705,	// (0x000606ab) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6705,	// (0x000606ab) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x00069cda) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x00069cda) cell_fep_china_hwr2_fs_funtion_grid_g

0xd271,	// (0x00067217) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd271,	// (0x00067217) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd286,	// (0x0006722c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd286,	// (0x0006722c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x00069cdf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x00069cdf) cell_fep_china_hwr2_fs_funtion_grid_t

0x674c,	// (0x000606f2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6754,	// (0x000606fa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x675c,	// (0x00060702) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x00069ce4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6764,	// (0x0006070a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6764,	// (0x0006070a) cell_fep_china_hwr2_fs_candidate_grid

0x6783,	// (0x00060729) popup_fep_china_hwr2_fs_candidate_grid_g20

0x678b,	// (0x00060731) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e44,	// (0x0005edea) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e44,	// (0x0005edea) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x00069af8) cell_fep_china_hwr2_fs_candidate_grid_g

0x6793,	// (0x00060739) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2247,	// (0x0005c1ed) clock_nsta_pane_cp_24_ParamLimits

0x2247,	// (0x0005c1ed) clock_nsta_pane_cp_24

0x22c7,	// (0x0005c26d) indicator_nsta_pane_cp_24_ParamLimits

0x22c7,	// (0x0005c26d) indicator_nsta_pane_cp_24

0x3364,	// (0x0005d30a) heading_pane_g1

0x0001,

0xf8cb,	// (0x00069871) heading_pane_g

0x3fb9,	// (0x0005df5f) grid_sct_catagory_button_pane

0x3feb,	// (0x0005df91) scroll_pane_cp5_ParamLimits

0x4aa4,	// (0x0005ea4a) button_value_adjust_pane_cp5_ParamLimits

0x4aa4,	// (0x0005ea4a) button_value_adjust_pane_cp5

0x4b89,	// (0x0005eb2f) form2_midp_time_pane_ParamLimits

0x67a1,	// (0x00060747) cell_sct_catagory_button_pane_ParamLimits

0x67a1,	// (0x00060747) cell_sct_catagory_button_pane

0x4e09,	// (0x0005edaf) bg_button_pane_cp01_ParamLimits

0x4e09,	// (0x0005edaf) bg_button_pane_cp01

0x4e44,	// (0x0005edea) cell_sct_catagory_button_pane_g1

0xb43d,	// (0x000653e3) popup_tb_extension_window

0xd2a2,	// (0x00067248) aid_size_cell_ext_ParamLimits

0xd2a2,	// (0x00067248) aid_size_cell_ext

0x8ada,	// (0x00062a80) bg_tb_trans_pane_cp1_ParamLimits

0x8ada,	// (0x00062a80) bg_tb_trans_pane_cp1

0xd2c8,	// (0x0006726e) grid_tb_ext_pane_ParamLimits

0xd2c8,	// (0x0006726e) grid_tb_ext_pane

0xd305,	// (0x000672ab) cell_tb_ext_pane_ParamLimits

0xd305,	// (0x000672ab) cell_tb_ext_pane

0xd32d,	// (0x000672d3) cell_tb_ext_pane_g1_ParamLimits

0xd32d,	// (0x000672d3) cell_tb_ext_pane_g1

0x6835,	// (0x000607db) cell_tb_ext_pane_t1

0x8854,	// (0x000627fa) list_highlight_pane_cp11_ParamLimits

0x8854,	// (0x000627fa) list_highlight_pane_cp11

0x9cc7,	// (0x00063c6d) popup_uni_indicator_window_ParamLimits

0x9cc7,	// (0x00063c6d) popup_uni_indicator_window

0x8d5f,	// (0x00062d05) bg_popup_sub_pane_cp14

0x6850,	// (0x000607f6) list_uniindi_pane

0x685c,	// (0x00060802) uniindi_top_pane

0x8854,	// (0x000627fa) bg_uniindi_top_pane

0x687d,	// (0x00060823) uniindi_top_pane_g1

0x6893,	// (0x00060839) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x00069ceb) uniindi_top_pane_g

0x68bd,	// (0x00060863) uniindi_top_pane_t1

0x68e9,	// (0x0006088f) list_single_uniindi_pane_ParamLimits

0x68e9,	// (0x0006088f) list_single_uniindi_pane

0x4e44,	// (0x0005edea) bg_uniindi_top_pane_g1

0x68fb,	// (0x000608a1) list_single_uniindi_pane_g1

0x690e,	// (0x000608b4) list_single_uniindi_pane_t1

0xef0f,	// (0x00068eb5) control_bg_pane

0x6933,	// (0x000608d9) bg_sctrl_sk_pane_cp1

0x693c,	// (0x000608e2) bg_sctrl_sk_pane_cp2

0x6945,	// (0x000608eb) control_bg_pane_g1

0x694e,	// (0x000608f4) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x00069cf4) control_bg_pane_g

0x48ed,	// (0x0005e893) cell_indicator_nsta_pane_g1_ParamLimits

0xc8a3,	// (0x00066849) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x00069a5c) cell_indicator_nsta_pane_g_ParamLimits

0xe958,	// (0x000688fe) form2_midp_time_pane_t1_ParamLimits

0x0bf0,	// (0x0005ab96) main_idle_act4_pane_ParamLimits

0x0bf0,	// (0x0005ab96) main_idle_act4_pane

0xb43d,	// (0x000653e3) popup_tb_extension_window_ParamLimits

0xd2ed,	// (0x00067293) tb_ext_find_pane_ParamLimits

0xd2ed,	// (0x00067293) tb_ext_find_pane

0x6957,	// (0x000608fd) ai_gene_pane_1_cp1

0x1f4a,	// (0x0005bef0) ai_gene_pane_2_cp1

0x695f,	// (0x00060905) list_single_idle_plugin_calendar_pane

0x6968,	// (0x0006090e) list_single_idle_plugin_notification_pane

0x6971,	// (0x00060917) list_single_idle_plugin_player_pane

0xd34a,	// (0x000672f0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd34a,	// (0x000672f0) list_single_idle_plugin_shortcut_pane

0xd372,	// (0x00067318) main_idle_act4_pane_t1

0xd38a,	// (0x00067330) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x00069cf9) main_idle_act4_pane_t

0xd3a2,	// (0x00067348) middle_sk_idle_act4_pane_ParamLimits

0xd3a2,	// (0x00067348) middle_sk_idle_act4_pane

0xd3be,	// (0x00067364) popup_clock_digital_analogue_window_cp2

0xd3e5,	// (0x0006738b) shortcut_wheel_idle_act4_pane_ParamLimits

0xd3e5,	// (0x0006738b) shortcut_wheel_idle_act4_pane

0x4e44,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g1

0x4e44,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g2

0x4e44,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g3

0x4e44,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g4

0x4e44,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g5

0x6a04,	// (0x000609aa) shortcut_wheel_idle_act4_pane_g6

0x6a0c,	// (0x000609b2) shortcut_wheel_idle_act4_pane_g7

0x6a14,	// (0x000609ba) shortcut_wheel_idle_act4_pane_g8

0x6a1c,	// (0x000609c2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x00069cfe) shortcut_wheel_idle_act4_pane_g

0xd462,	// (0x00067408) middle_sk_idle_act4_pane_g1_ParamLimits

0xd462,	// (0x00067408) middle_sk_idle_act4_pane_g1

0xd470,	// (0x00067416) middle_sk_idle_act4_pane_g2_ParamLimits

0xd470,	// (0x00067416) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x00069d21) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x00069d21) middle_sk_idle_act4_pane_g

0xd488,	// (0x0006742e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd488,	// (0x0006742e) middle_sk_idle_act4_pane_t1

0xd4b7,	// (0x0006745d) grid_ai_shortcut_pane_ParamLimits

0xd4b7,	// (0x0006745d) grid_ai_shortcut_pane

0xd4d4,	// (0x0006747a) list_highlight_pane_cp16_ParamLimits

0xd4d4,	// (0x0006747a) list_highlight_pane_cp16

0xd4e1,	// (0x00067487) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd4e1,	// (0x00067487) list_single_idle_plugin_shortcut_pane_g1

0xd4ed,	// (0x00067493) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd4ed,	// (0x00067493) list_single_idle_plugin_shortcut_pane_g2

0xd50b,	// (0x000674b1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd50b,	// (0x000674b1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x00069d26) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x00069d26) list_single_idle_plugin_shortcut_pane_g

0xd520,	// (0x000674c6) cell_ai_shortcut_pane_ParamLimits

0xd520,	// (0x000674c6) cell_ai_shortcut_pane

0xd536,	// (0x000674dc) cell_ai_shortcut_pane_g1_ParamLimits

0xd536,	// (0x000674dc) cell_ai_shortcut_pane_g1

0x6957,	// (0x000608fd) ai_gene_pane_1_cp2

0x6b4d,	// (0x00060af3) ai_gene_pane_2_cp2

0x6b55,	// (0x00060afb) list_highlight_pane_cp15

0x6b5e,	// (0x00060b04) list_single_idle_plugin_calendar_pane_g1

0x6b55,	// (0x00060afb) list_highlight_pane_cp17

0x6b66,	// (0x00060b0c) list_single_idle_plugin_calendar_pane_g1_copy1

0x6b6e,	// (0x00060b14) list_single_idle_plugin_player_pane_g1

0x4220,	// (0x0005e1c6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x00069d2d) list_single_idle_plugin_player_pane_g

0x6b76,	// (0x00060b1c) list_single_idle_plugin_player_pane_t1

0x6b84,	// (0x00060b2a) list_single_idle_plugin_player_pane_t2

0x6b92,	// (0x00060b38) list_single_idle_plugin_player_pane_t3

0x6ba0,	// (0x00060b46) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x00069d32) list_single_idle_plugin_player_pane_t

0x6bae,	// (0x00060b54) wait_bar_pane_cp15

0x6bb6,	// (0x00060b5c) grid_ai_notification_pane

0x4220,	// (0x0005e1c6) list_single_idle_plugin_notification_pane_g1

0xd558,	// (0x000674fe) cell_ai_notification_pane_ParamLimits

0xd558,	// (0x000674fe) cell_ai_notification_pane

0x6bcc,	// (0x00060b72) cell_ai_notification_pane_g1

0x6bd4,	// (0x00060b7a) cell_ai_notification_pane_t1

0xd565,	// (0x0006750b) tb_ext_find_button_pane

0xd56d,	// (0x00067513) tb_ext_find_pane_g1

0xd575,	// (0x0006751b) tb_ext_find_pane_t1

0xe1ba,	// (0x00068160) tb_ext_find_button_pane_g1

0x6c00,	// (0x00060ba6) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x00069d3b) tb_ext_find_button_pane_g

0xd372,	// (0x00067318) main_idle_act4_pane_t1_ParamLimits

0xd38a,	// (0x00067330) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x00069cf9) main_idle_act4_pane_t_ParamLimits

0xd3be,	// (0x00067364) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd3d5,	// (0x0006737b) sat_plugin_idle_act4_pane_ParamLimits

0xd3d5,	// (0x0006737b) sat_plugin_idle_act4_pane

0xd583,	// (0x00067529) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd583,	// (0x00067529) sat_plugin_idle_act4_pane_t1

0xd59b,	// (0x00067541) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd59b,	// (0x00067541) sat_plugin_idle_act4_pane_t2

0xd5b3,	// (0x00067559) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd5b3,	// (0x00067559) sat_plugin_idle_act4_pane_t3

0xd5cb,	// (0x00067571) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd5cb,	// (0x00067571) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x00069d40) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x00069d40) sat_plugin_idle_act4_pane_t

0xefd4,	// (0x00068f7a) popup_battery_window_ParamLimits

0xefd4,	// (0x00068f7a) popup_battery_window

0x8854,	// (0x000627fa) bg_popup_sub_pane_cp25_ParamLimits

0x8854,	// (0x000627fa) bg_popup_sub_pane_cp25

0x6c55,	// (0x00060bfb) popup_battery_window_g1_ParamLimits

0x6c55,	// (0x00060bfb) popup_battery_window_g1

0x6c61,	// (0x00060c07) popup_battery_window_t1_ParamLimits

0x6c61,	// (0x00060c07) popup_battery_window_t1

0x6c73,	// (0x00060c19) popup_battery_window_t2_ParamLimits

0x6c73,	// (0x00060c19) popup_battery_window_t2

0x0001,

0xfda3,	// (0x00069d49) popup_battery_window_t_ParamLimits

0xfda3,	// (0x00069d49) popup_battery_window_t

0xaae3,	// (0x00064a89) midp_canvas_pane_ParamLimits

0xab3f,	// (0x00064ae5) midp_keypad_pane_ParamLimits

0xab3f,	// (0x00064ae5) midp_keypad_pane

0x212f,	// (0x0005c0d5) main_midp_pane_ParamLimits

0x4957,	// (0x0005e8fd) signal_pane_g2_cp_ParamLimits

0xd5e3,	// (0x00067589) aid_size_cell_midp_keypad_ParamLimits

0xd5e3,	// (0x00067589) aid_size_cell_midp_keypad

0xd601,	// (0x000675a7) midp_keyp_game_grid_pane_ParamLimits

0xd601,	// (0x000675a7) midp_keyp_game_grid_pane

0xd628,	// (0x000675ce) midp_keyp_rocker_pane_ParamLimits

0xd628,	// (0x000675ce) midp_keyp_rocker_pane

0xd677,	// (0x0006761d) midp_keyp_sk_left_pane_ParamLimits

0xd677,	// (0x0006761d) midp_keyp_sk_left_pane

0xd6cd,	// (0x00067673) midp_keyp_sk_right_pane_ParamLimits

0xd6cd,	// (0x00067673) midp_keyp_sk_right_pane

0x5959,	// (0x0005f8ff) bg_button_pane_cp03

0xd723,	// (0x000676c9) midp_keyp_sk_left_pane_g1

0x5959,	// (0x0005f8ff) bg_button_pane_cp04

0xd723,	// (0x000676c9) midp_keyp_sk_right_pane_g1

0x4e44,	// (0x0005edea) midp_keyp_rocker_pane_g1

0xd72b,	// (0x000676d1) keyp_game_cell_pane_ParamLimits

0xd72b,	// (0x000676d1) keyp_game_cell_pane

0x5959,	// (0x0005f8ff) bg_button_pane_cp02

0xd751,	// (0x000676f7) keyp_game_cell_pane_g1

0x9c5e,	// (0x00063c04) popup_fep_vkb2_window_ParamLimits

0x9c5e,	// (0x00063c04) popup_fep_vkb2_window

0xbc02,	// (0x00065ba8) aid_size_cell_vkb2_ParamLimits

0xbc02,	// (0x00065ba8) aid_size_cell_vkb2

0xbc38,	// (0x00065bde) popup_fep_vkb2_window_g1_ParamLimits

0xbc38,	// (0x00065bde) popup_fep_vkb2_window_g1

0xbc88,	// (0x00065c2e) vkb2_area_bottom_pane_ParamLimits

0xbc88,	// (0x00065c2e) vkb2_area_bottom_pane

0xbce4,	// (0x00065c8a) vkb2_area_keypad_pane_ParamLimits

0xbce4,	// (0x00065c8a) vkb2_area_keypad_pane

0xbd32,	// (0x00065cd8) vkb2_area_top_pane_ParamLimits

0xbd32,	// (0x00065cd8) vkb2_area_top_pane

0xbdb8,	// (0x00065d5e) vkb2_top_entry_pane_ParamLimits

0xbdb8,	// (0x00065d5e) vkb2_top_entry_pane

0xbde5,	// (0x00065d8b) vkb2_top_grid_left_pane_ParamLimits

0xbde5,	// (0x00065d8b) vkb2_top_grid_left_pane

0xbe05,	// (0x00065dab) vkb2_top_grid_right_pane_ParamLimits

0xbe05,	// (0x00065dab) vkb2_top_grid_right_pane

0x142d,	// (0x0005b3d3) vkb2_cell_keypad_pane_ParamLimits

0x142d,	// (0x0005b3d3) vkb2_cell_keypad_pane

0xbe4b,	// (0x00065df1) vkb2_area_bottom_grid_pane_ParamLimits

0xbe4b,	// (0x00065df1) vkb2_area_bottom_grid_pane

0xbe75,	// (0x00065e1b) vkb2_area_bottom_pane_g1_ParamLimits

0xbe75,	// (0x00065e1b) vkb2_area_bottom_pane_g1

0xbe9b,	// (0x00065e41) vkb2_area_bottom_pane_g2_ParamLimits

0xbe9b,	// (0x00065e41) vkb2_area_bottom_pane_g2

0xbecc,	// (0x00065e72) vkb2_area_bottom_pane_g3_ParamLimits

0xbecc,	// (0x00065e72) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x00069d4e) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x00069d4e) vkb2_area_bottom_pane_g

0x15d7,	// (0x0005b57d) vkb2_top_cell_left_pane_ParamLimits

0x15d7,	// (0x0005b57d) vkb2_top_cell_left_pane

0xd75a,	// (0x00067700) vkb2_top_entry_pane_g1_ParamLimits

0xd75a,	// (0x00067700) vkb2_top_entry_pane_g1

0xd768,	// (0x0006770e) vkb2_top_entry_pane_t1_ParamLimits

0xd768,	// (0x0006770e) vkb2_top_entry_pane_t1

0x6e1d,	// (0x00060dc3) vkb2_top_entry_pane_t2_ParamLimits

0x6e1d,	// (0x00060dc3) vkb2_top_entry_pane_t2

0x6e4f,	// (0x00060df5) vkb2_top_entry_pane_t3_ParamLimits

0x6e4f,	// (0x00060df5) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x00069d55) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x00069d55) vkb2_top_entry_pane_t

0xbf36,	// (0x00065edc) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf36,	// (0x00065edc) vkb2_top_grid_right_pane_g1

0x163a,	// (0x0005b5e0) vkb2_top_grid_right_pane_g2_ParamLimits

0x163a,	// (0x0005b5e0) vkb2_top_grid_right_pane_g2

0x1652,	// (0x0005b5f8) vkb2_top_grid_right_pane_g3_ParamLimits

0x1652,	// (0x0005b5f8) vkb2_top_grid_right_pane_g3

0xbf4c,	// (0x00065ef2) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf4c,	// (0x00065ef2) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x00069d5c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x00069d5c) vkb2_top_grid_right_pane_g

0x1680,	// (0x0005b626) vkb2_top_cell_left_pane_g1

0x1697,	// (0x0005b63d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1697,	// (0x0005b63d) vkb2_cell_keypad_pane_g1

0x6e73,	// (0x00060e19) vkb2_cell_keypad_pane_t1_ParamLimits

0x6e73,	// (0x00060e19) vkb2_cell_keypad_pane_t1

0x16a5,	// (0x0005b64b) vkb2_cell_bottom_grid_pane_ParamLimits

0x16a5,	// (0x0005b64b) vkb2_cell_bottom_grid_pane

0x16de,	// (0x0005b684) vkb2_cell_bottom_grid_pane_g1

0xd406,	// (0x000673ac) aid_call2_pane_cp02

0xd40e,	// (0x000673b4) aid_call_pane_cp02

0xd416,	// (0x000673bc) clock_digital_number_pane_cp10

0xd41e,	// (0x000673c4) clock_digital_number_pane_cp11

0xd426,	// (0x000673cc) clock_digital_number_pane_cp12

0xd42e,	// (0x000673d4) clock_digital_number_pane_cp13

0xd436,	// (0x000673dc) clock_digital_separator_pane_cp10

0xe1ba,	// (0x00068160) popup_clock_digital_analogue_window_cp2_g1

0xe1ba,	// (0x00068160) popup_clock_digital_analogue_window_cp2_g2

0xd43e,	// (0x000673e4) popup_clock_digital_analogue_window_cp2_g3

0xe1ba,	// (0x00068160) popup_clock_digital_analogue_window_cp2_g4

0xd43e,	// (0x000673e4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x00069d11) popup_clock_digital_analogue_window_cp2_g

0xd446,	// (0x000673ec) popup_clock_digital_analogue_window_cp2_t1

0xd454,	// (0x000673fa) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x00069d1c) popup_clock_digital_analogue_window_cp2_t

0x4e44,	// (0x0005edea) clock_digital_number_pane_cp10_g1

0x4e44,	// (0x0005edea) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x00069af8) clock_digital_number_pane_cp10_g

0x4e44,	// (0x0005edea) clock_digital_separator_pane_cp10_g1

0x4e44,	// (0x0005edea) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x00069af8) clock_digital_separator_pane_cp10_g

0x689f,	// (0x00060845) uniindi_top_pane_g3

0x68b0,	// (0x00060856) uniindi_top_pane_g4

0x14b8,	// (0x0005b45e) vkb2_row_keypad_pane_ParamLimits

0x14b8,	// (0x0005b45e) vkb2_row_keypad_pane

0x16fa,	// (0x0005b6a0) vkb2_cell_t_keypad_pane_ParamLimits

0x16fa,	// (0x0005b6a0) vkb2_cell_t_keypad_pane

0x170a,	// (0x0005b6b0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x170a,	// (0x0005b6b0) vkb2_cell_t_keypad_pane_cp08

0x171f,	// (0x0005b6c5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x171f,	// (0x0005b6c5) vkb2_cell_t_keypad_pane_cp09

0x1733,	// (0x0005b6d9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1733,	// (0x0005b6d9) vkb2_cell_t_keypad_pane_cp01

0x1744,	// (0x0005b6ea) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1744,	// (0x0005b6ea) vkb2_cell_t_keypad_pane_cp02

0x1755,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1755,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp03

0x1766,	// (0x0005b70c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1766,	// (0x0005b70c) vkb2_cell_t_keypad_pane_cp04

0x1777,	// (0x0005b71d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1777,	// (0x0005b71d) vkb2_cell_t_keypad_pane_cp05

0x1788,	// (0x0005b72e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1788,	// (0x0005b72e) vkb2_cell_t_keypad_pane_cp06

0x179b,	// (0x0005b741) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x179b,	// (0x0005b741) vkb2_cell_t_keypad_pane_cp07

0x17b0,	// (0x0005b756) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x17b0,	// (0x0005b756) vkb2_cell_t_keypad_pane_cp10

0x0e6b,	// (0x0005ae11) vkb2_cell_t_keypad_pane_g1

0x6e8a,	// (0x00060e30) vkb2_cell_t_keypad_pane_t1

0xef0f,	// (0x00068eb5) popup_grid_graphic2_window

0xd7a1,	// (0x00067747) aid_size_cell_graphic2_ParamLimits

0xd7a1,	// (0x00067747) aid_size_cell_graphic2

0xd7df,	// (0x00067785) bg_popup_window_pane_cp21_ParamLimits

0xd7df,	// (0x00067785) bg_popup_window_pane_cp21

0xd7ed,	// (0x00067793) graphic2_pages_pane_ParamLimits

0xd7ed,	// (0x00067793) graphic2_pages_pane

0xd845,	// (0x000677eb) grid_graphic2_control_pane_ParamLimits

0xd845,	// (0x000677eb) grid_graphic2_control_pane

0xd88d,	// (0x00067833) grid_graphic2_pane_ParamLimits

0xd88d,	// (0x00067833) grid_graphic2_pane

0xd918,	// (0x000678be) cell_graphic2_pane

0xef0f,	// (0x00068eb5) main_comp_mode_pane

0x6106,	// (0x000600ac) list_ai3_gene_pane_ParamLimits

0xd146,	// (0x000670ec) bg_popup_window_pane_cp19_ParamLimits

0x64de,	// (0x00060484) bg_touch_area_indi_pane_ParamLimits

0x64de,	// (0x00060484) bg_touch_area_indi_pane

0x64f4,	// (0x0006049a) bg_touch_area_indi_pane_cp01_ParamLimits

0x64f4,	// (0x0006049a) bg_touch_area_indi_pane_cp01

0x650a,	// (0x000604b0) bg_touch_area_indi_pane_cp02_ParamLimits

0x650a,	// (0x000604b0) bg_touch_area_indi_pane_cp02

0x6524,	// (0x000604ca) bg_touch_area_indi_pane_cp03_ParamLimits

0x6524,	// (0x000604ca) bg_touch_area_indi_pane_cp03

0x653e,	// (0x000604e4) popup_slider_window_g1_ParamLimits

0x655a,	// (0x00060500) popup_slider_window_g2_ParamLimits

0x6576,	// (0x0006051c) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x00069ca6) popup_slider_window_g_ParamLimits

0x65dc,	// (0x00060582) popup_slider_window_t1_ParamLimits

0x6650,	// (0x000605f6) small_volume_slider_vertical_pane_ParamLimits

0xd918,	// (0x000678be) cell_graphic2_pane_ParamLimits

0xd97b,	// (0x00067921) bg_button_pane_cp10_ParamLimits

0xd97b,	// (0x00067921) bg_button_pane_cp10

0xd98e,	// (0x00067934) bg_button_pane_cp11_ParamLimits

0xd98e,	// (0x00067934) bg_button_pane_cp11

0xd9a1,	// (0x00067947) graphic2_pages_pane_g1_ParamLimits

0xd9a1,	// (0x00067947) graphic2_pages_pane_g1

0xd9bc,	// (0x00067962) graphic2_pages_pane_g2_ParamLimits

0xd9bc,	// (0x00067962) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x00069d6a) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x00069d6a) graphic2_pages_pane_g

0xd9d4,	// (0x0006797a) graphic2_pages_pane_t1_ParamLimits

0xd9d4,	// (0x0006797a) graphic2_pages_pane_t1

0xd9ec,	// (0x00067992) cell_graphic2_control_pane_ParamLimits

0xd9ec,	// (0x00067992) cell_graphic2_control_pane

0xda20,	// (0x000679c6) cell_graphic2_pane_g1_ParamLimits

0xda20,	// (0x000679c6) cell_graphic2_pane_g1

0xda2d,	// (0x000679d3) cell_graphic2_pane_g2_ParamLimits

0xda2d,	// (0x000679d3) cell_graphic2_pane_g2

0xca6b,	// (0x00066a11) cell_graphic2_pane_g3_ParamLimits

0xca6b,	// (0x00066a11) cell_graphic2_pane_g3

0xda3a,	// (0x000679e0) cell_graphic2_pane_g4_ParamLimits

0xda3a,	// (0x000679e0) cell_graphic2_pane_g4

0xda47,	// (0x000679ed) cell_graphic2_pane_g5_ParamLimits

0xda47,	// (0x000679ed) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x00069d6f) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x00069d6f) cell_graphic2_pane_g

0xda67,	// (0x00067a0d) cell_graphic2_pane_t1_ParamLimits

0xda67,	// (0x00067a0d) cell_graphic2_pane_t1

0x3358,	// (0x0005d2fe) grid_highlight_pane_cp11_ParamLimits

0x3358,	// (0x0005d2fe) grid_highlight_pane_cp11

0x8854,	// (0x000627fa) bg_button_pane_cp05

0xdab0,	// (0x00067a56) cell_graphic2_control_pane_g1

0x4e44,	// (0x0005edea) bg_touch_area_indi_pane_g1

0x7172,	// (0x00061118) aid_cmod_rocker_key_size

0x717c,	// (0x00061122) aid_cmode_itu_key_size

0x7186,	// (0x0006112c) main_cmode_video_pane

0x7190,	// (0x00061136) main_comp_mode_itu_pane

0x719c,	// (0x00061142) main_comp_mode_rocker_pane

0x71a8,	// (0x0006114e) cell_cmode_rocker_pane_ParamLimits

0x71a8,	// (0x0006114e) cell_cmode_rocker_pane

0x71bc,	// (0x00061162) cell_cmode_itu_pane_ParamLimits

0x71bc,	// (0x00061162) cell_cmode_itu_pane

0x8d5f,	// (0x00062d05) bg_button_pane_cp06_ParamLimits

0x8d5f,	// (0x00062d05) bg_button_pane_cp06

0x50a7,	// (0x0005f04d) cell_cmode_rocker_pane_g1_ParamLimits

0x50a7,	// (0x0005f04d) cell_cmode_rocker_pane_g1

0x66f7,	// (0x0006069d) cell_cmode_rocker_pane_g2_ParamLimits

0x66f7,	// (0x0006069d) cell_cmode_rocker_pane_g2

0x0001,

0xfdd9,	// (0x00069d7f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd9,	// (0x00069d7f) cell_cmode_rocker_pane_g

0x5959,	// (0x0005f8ff) bg_button_pane_cp07

0x71d3,	// (0x00061179) cell_cmode_itu_pane_g1

0x71dc,	// (0x00061182) cell_cmode_itu_pane_t1

0x71ea,	// (0x00061190) cell_cmode_itu_pane_t2

0x0001,

0xfdde,	// (0x00069d84) cell_cmode_itu_pane_t

0x6923,	// (0x000608c9) aid_touch_ctrl_left

0x692b,	// (0x000608d1) aid_touch_ctrl_right

0x5959,	// (0x0005f8ff) compa_mode_pane

0xdad8,	// (0x00067a7e) aid_cmod_rocker_key_size_cp

0xdae2,	// (0x00067a88) aid_cmode_itu_key_size_cp

0x720c,	// (0x000611b2) compa_mode_pane_g1

0x7214,	// (0x000611ba) compa_mode_pane_g2

0x721c,	// (0x000611c2) compa_mode_pane_g3

0x0002,

0xfde3,	// (0x00069d89) compa_mode_pane_g

0xdaec,	// (0x00067a92) main_comp_mode_itu_pane_cp

0xdaf4,	// (0x00067a9a) main_comp_mode_rocker_pane_cp

0xdafc,	// (0x00067aa2) cell_cmode_itu_pane_cp_ParamLimits

0xdafc,	// (0x00067aa2) cell_cmode_itu_pane_cp

0xdb11,	// (0x00067ab7) cell_cmode_rocker_pane_cp_ParamLimits

0xdb11,	// (0x00067ab7) cell_cmode_rocker_pane_cp

0x8d5f,	// (0x00062d05) bg_button_pane_cp06_cp_ParamLimits

0x8d5f,	// (0x00062d05) bg_button_pane_cp06_cp

0x50a7,	// (0x0005f04d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x50a7,	// (0x0005f04d) cell_cmode_rocker_pane_g1_cp

0x4e44,	// (0x0005edea) cell_cmode_rocker_pane_g2_cp

0x5959,	// (0x0005f8ff) bg_button_pane_cp07_cp

0xdb23,	// (0x00067ac9) cell_cmode_itu_pane_g1_cp

0xdb2c,	// (0x00067ad2) cell_cmode_itu_pane_t1_cp

0xdb2c,	// (0x00067ad2) cell_cmode_itu_pane_t2_cp

0xc694,	// (0x0006663a) settings_code_pane_cp2

0x59bb,	// (0x0005f961) bg_popup_window_pane_cp3_ParamLimits

0x8a68,	// (0x00062a0e) heading_pane_cp3_ParamLimits

0x8a74,	// (0x00062a1a) listscroll_popup_graphic_pane_ParamLimits

0x0bfe,	// (0x0005aba4) fep_hwr_aid_pane_ParamLimits

0x1170,	// (0x0005b116) aid_touch_sctrl_top_ParamLimits

0x118b,	// (0x0005b131) sctrl_sk_top_pane_g1_ParamLimits

0x0e6b,	// (0x0005ae11) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x00069cbf) sctrl_sk_top_pane_g_ParamLimits

0x1198,	// (0x0005b13e) sctrl_sk_top_pane_t1_ParamLimits

0x1170,	// (0x0005b116) aid_touch_sctrl_bottom_ParamLimits

0x1198,	// (0x0005b13e) sctrl_sk_bottom_pane_t1_ParamLimits

0x6869,	// (0x0006080f) aid_area_touch_clock

0xbd7a,	// (0x00065d20) aid_vkb2_area_top_pane_cell_ParamLimits

0xbd7a,	// (0x00065d20) aid_vkb2_area_top_pane_cell

0xbe25,	// (0x00065dcb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe25,	// (0x00065dcb) aid_vkb2_area_bottom_pane_cell

0x6dd5,	// (0x00060d7b) popup_char_count_window

0x7272,	// (0x00061218) popup_char_count_window_g1

0x727b,	// (0x00061221) popup_char_count_window_g2

0x7284,	// (0x0006122a) popup_char_count_window_g3

0x0002,

0xfdea,	// (0x00069d90) popup_char_count_window_g

0x728d,	// (0x00061233) popup_char_count_window_t1

0x1249,	// (0x0005b1ef) popup_fep_char_preview_window_ParamLimits

0x1249,	// (0x0005b1ef) popup_fep_char_preview_window

0xbd9a,	// (0x00065d40) vkb2_top_candi_pane_ParamLimits

0xbd9a,	// (0x00065d40) vkb2_top_candi_pane

0xdb3a,	// (0x00067ae0) cell_vkb2_top_candi_pane_ParamLimits

0xdb3a,	// (0x00067ae0) cell_vkb2_top_candi_pane

0x17c5,	// (0x0005b76b) bg_popup_fep_char_preview_window_ParamLimits

0x17c5,	// (0x0005b76b) bg_popup_fep_char_preview_window

0x17d3,	// (0x0005b779) popup_fep_char_preview_window_t1_ParamLimits

0x17d3,	// (0x0005b779) popup_fep_char_preview_window_t1

0x72ec,	// (0x00061292) bg_popup_fep_char_preview_window_g1

0x72f4,	// (0x0006129a) bg_popup_fep_char_preview_window_g2

0x72fc,	// (0x000612a2) bg_popup_fep_char_preview_window_g3

0x7304,	// (0x000612aa) bg_popup_fep_char_preview_window_g4

0x730c,	// (0x000612b2) bg_popup_fep_char_preview_window_g5

0x180d,	// (0x0005b7b3) bg_popup_fep_char_preview_window_g6

0x7314,	// (0x000612ba) bg_popup_fep_char_preview_window_g7

0x731c,	// (0x000612c2) bg_popup_fep_char_preview_window_g8

0x7324,	// (0x000612ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf1,	// (0x00069d97) bg_popup_fep_char_preview_window_g

0x0e6b,	// (0x0005ae11) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0e6b,	// (0x0005ae11) cell_vkb2_top_candi_pane_g1

0x0e79,	// (0x0005ae1f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0e79,	// (0x0005ae1f) cell_vkb2_top_candi_pane_g2

0x5a05,	// (0x0005f9ab) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5a05,	// (0x0005f9ab) cell_vkb2_top_candi_pane_g3

0x1815,	// (0x0005b7bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1815,	// (0x0005b7bb) cell_vkb2_top_candi_pane_g4

0x55c6,	// (0x0005f56c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x55c6,	// (0x0005f56c) cell_vkb2_top_candi_pane_g5

0x1836,	// (0x0005b7dc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1836,	// (0x0005b7dc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe04,	// (0x00069daa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe04,	// (0x00069daa) cell_vkb2_top_candi_pane_g

0x1844,	// (0x0005b7ea) cell_vkb2_top_candi_pane_t1

0x09d0,	// (0x0005a976) aid_size_touch_slider_mark_ParamLimits

0x09d0,	// (0x0005a976) aid_size_touch_slider_mark

0xd829,	// (0x000677cf) grid_graphic2_catg_pane_ParamLimits

0xd829,	// (0x000677cf) grid_graphic2_catg_pane

0xd8e7,	// (0x0006788d) popup_grid_graphic2_window_t1_ParamLimits

0xd8e7,	// (0x0006788d) popup_grid_graphic2_window_t1

0xd8fd,	// (0x000678a3) popup_grid_graphic2_window_t2_ParamLimits

0xd8fd,	// (0x000678a3) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x00069d65) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x00069d65) popup_grid_graphic2_window_t

0x8854,	// (0x000627fa) bg_button_pane_cp05_ParamLimits

0xdab0,	// (0x00067a56) cell_graphic2_control_pane_g1_ParamLimits

0xdba4,	// (0x00067b4a) cell_graphic2_catg_pane_ParamLimits

0xdba4,	// (0x00067b4a) cell_graphic2_catg_pane

0x5959,	// (0x0005f8ff) bg_button_pane_cp12

0xdbb6,	// (0x00067b5c) cell_graphic2_catg_pane_g1

0x6835,	// (0x000607db) cell_tb_ext_pane_t1_ParamLimits

0x15f7,	// (0x0005b59d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x15f7,	// (0x0005b59d) vkb2_top_cell_right_narrow_pane

0x160f,	// (0x0005b5b5) vkb2_top_cell_right_wide_pane_ParamLimits

0x160f,	// (0x0005b5b5) vkb2_top_cell_right_wide_pane

0x0bf0,	// (0x0005ab96) bg_vkb2_func_pane_ParamLimits

0x0bf0,	// (0x0005ab96) bg_vkb2_func_pane

0x1680,	// (0x0005b626) vkb2_top_cell_left_pane_g1_ParamLimits

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp03

0x16de,	// (0x0005b684) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2673,	// (0x0005c619) bg_vkb2_func_pane_g1

0x267b,	// (0x0005c621) bg_vkb2_func_pane_g2

0x268b,	// (0x0005c631) bg_vkb2_func_pane_g3

0x2683,	// (0x0005c629) bg_vkb2_func_pane_g4

0x2693,	// (0x0005c639) bg_vkb2_func_pane_g5

0x269b,	// (0x0005c641) bg_vkb2_func_pane_g6

0x26a3,	// (0x0005c649) bg_vkb2_func_pane_g7

0x26ab,	// (0x0005c651) bg_vkb2_func_pane_g8

0x266b,	// (0x0005c611) bg_vkb2_func_pane_g9

0x0008,

0xfe11,	// (0x00069db7) bg_vkb2_func_pane_g

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp01

0x1680,	// (0x0005b626) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1680,	// (0x0005b626) vkb2_top_cell_right_wide_pane_g1

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0bf0,	// (0x0005ab96) bg_vkb2_fuc_pane_cp02

0x16de,	// (0x0005b684) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x16de,	// (0x0005b684) vkb2_top_cell_right_narrow_pane_g1

0xd088,	// (0x0006702e) aid_touch_area_decrease_ParamLimits

0xd088,	// (0x0006702e) aid_touch_area_decrease

0xd0c2,	// (0x00067068) aid_touch_area_increase_ParamLimits

0xd0c2,	// (0x00067068) aid_touch_area_increase

0xd0ea,	// (0x00067090) aid_touch_area_mute_ParamLimits

0xd0ea,	// (0x00067090) aid_touch_area_mute

0xd112,	// (0x000670b8) aid_touch_area_slider_ParamLimits

0xd112,	// (0x000670b8) aid_touch_area_slider

0xd152,	// (0x000670f8) popup_slider_window_g4_ParamLimits

0xd152,	// (0x000670f8) popup_slider_window_g4

0xd17a,	// (0x00067120) popup_slider_window_g5_ParamLimits

0xd17a,	// (0x00067120) popup_slider_window_g5

0xd1ae,	// (0x00067154) popup_slider_window_g6_ParamLimits

0xd1ae,	// (0x00067154) popup_slider_window_g6

0x660a,	// (0x000605b0) popup_slider_window_t2_ParamLimits

0x660a,	// (0x000605b0) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x00069cb3) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x00069cb3) popup_slider_window_t

0xd1ca,	// (0x00067170) slider_pane_ParamLimits

0xd1ca,	// (0x00067170) slider_pane

0x7347,	// (0x000612ed) slider_pane_g1_ParamLimits

0x7347,	// (0x000612ed) slider_pane_g1

0x735b,	// (0x00061301) slider_pane_g2_ParamLimits

0x735b,	// (0x00061301) slider_pane_g2

0x7371,	// (0x00061317) slider_pane_g3_ParamLimits

0x7371,	// (0x00061317) slider_pane_g3

0x0003,

0xfe24,	// (0x00069dca) slider_pane_g_ParamLimits

0xfe24,	// (0x00069dca) slider_pane_g

0xb489,	// (0x0006542f) popup_tb_float_extension_window_ParamLimits

0xb489,	// (0x0006542f) popup_tb_float_extension_window

0x739d,	// (0x00061343) aid_size_cell_tb_float_ext

0x5959,	// (0x0005f8ff) bg_popup_sub_window_cp28

0x73a9,	// (0x0006134f) grid_tb_float_ext_pane

0x73b5,	// (0x0006135b) cell_tb_float_ext_pane_ParamLimits

0x73b5,	// (0x0006135b) cell_tb_float_ext_pane

0x73d1,	// (0x00061377) cell_tb_float_ext_pane_g1

0x73da,	// (0x00061380) grid_highlight_pane_cp12

0xba22,	// (0x000659c8) cell_last_hwr_side_pane_ParamLimits

0xba22,	// (0x000659c8) cell_last_hwr_side_pane

0x4e44,	// (0x0005edea) cell_last_hwr_side_pane_g1

0x73e3,	// (0x00061389) cell_last_hwr_side_pane_g2

0x0001,

0xfe2d,	// (0x00069dd3) cell_last_hwr_side_pane_g

0xbf01,	// (0x00065ea7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf01,	// (0x00065ea7) vkb2_area_bottom_space_btn_pane

0x0e6b,	// (0x0005ae11) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6e8a,	// (0x00060e30) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1844,	// (0x0005b7ea) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1862,	// (0x0005b808) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1862,	// (0x0005b808) vkb2_area_bottom_space_btn_pane_g1

0x189c,	// (0x0005b842) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x189c,	// (0x0005b842) vkb2_area_bottom_space_btn_pane_g2

0x18d2,	// (0x0005b878) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x18d2,	// (0x0005b878) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe32,	// (0x00069dd8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe32,	// (0x00069dd8) vkb2_area_bottom_space_btn_pane_g

0x0cb5,	// (0x0005ac5b) cel_fep_hwr_func_pane_ParamLimits

0x0cb5,	// (0x0005ac5b) cel_fep_hwr_func_pane

0xb9f7,	// (0x0006599d) cell_hwr_side_button_pane_ParamLimits

0xb9f7,	// (0x0006599d) cell_hwr_side_button_pane

0x6869,	// (0x0006080f) aid_area_touch_clock_ParamLimits

0x8854,	// (0x000627fa) bg_uniindi_top_pane_ParamLimits

0x687d,	// (0x00060823) uniindi_top_pane_g1_ParamLimits

0x6893,	// (0x00060839) uniindi_top_pane_g2_ParamLimits

0x689f,	// (0x00060845) uniindi_top_pane_g3_ParamLimits

0x68b0,	// (0x00060856) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x00069ceb) uniindi_top_pane_g_ParamLimits

0x68bd,	// (0x00060863) uniindi_top_pane_t1_ParamLimits

0x8854,	// (0x000627fa) bg_vkb2_func_pane_cp01_ParamLimits

0x8854,	// (0x000627fa) bg_vkb2_func_pane_cp01

0x73ec,	// (0x00061392) cel_fep_hwr_func_pane_g1_ParamLimits

0x73ec,	// (0x00061392) cel_fep_hwr_func_pane_g1

0x8854,	// (0x000627fa) bg_vkb2_func_pane_cp02_ParamLimits

0x8854,	// (0x000627fa) bg_vkb2_func_pane_cp02

0x73ec,	// (0x00061392) cell_hwr_side_button_pane_g1_ParamLimits

0x73ec,	// (0x00061392) cell_hwr_side_button_pane_g1

0x24e4,	// (0x0005c48a) status_pane_g4_ParamLimits

0x24e4,	// (0x0005c48a) status_pane_g4

0x24fe,	// (0x0005c4a4) status_pane_t1

0x4bf7,	// (0x0005eb9d) form2_midp_gauge_slider_cont_pane

0x4bff,	// (0x0005eba5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc99c,	// (0x00066942) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9ae,	// (0x00066954) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x00069aab) form2_midp_gauge_slider_pane_t_ParamLimits

0x4c35,	// (0x0005ebdb) form2_midp_slider_pane_ParamLimits

0x1209,	// (0x0005b1af) aid_size_cell_func_vkb2_ParamLimits

0x1209,	// (0x0005b1af) aid_size_cell_func_vkb2

0x7389,	// (0x0006132f) slider_pane_g4_ParamLimits

0x7389,	// (0x0006132f) slider_pane_g4

0xbf62,	// (0x00065f08) form2_midp_gauge_slider_pane_t2_cp01

0xbf70,	// (0x00065f16) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf70,	// (0x00065f16) form2_midp_gauge_slider_pane_t3_cp01

0x1947,	// (0x0005b8ed) form2_midp_slider_pane_cp01

0x5959,	// (0x0005f8ff) navi_smil_pane

0x7425,	// (0x000613cb) navi_smil_pane_g1

0x742d,	// (0x000613d3) navi_smil_pane_t1

0x73fa,	// (0x000613a0) form2_midp_slider_pane_g1

0x7403,	// (0x000613a9) form2_midp_slider_pane_g2

0x740b,	// (0x000613b1) form2_midp_slider_pane_g3

0x73fa,	// (0x000613a0) form2_midp_slider_pane_g4

0xdbbf,	// (0x00067b65) form2_midp_slider_pane_g5

0x0004,

0xfe3b,	// (0x00069de1) form2_midp_slider_pane_g

0x190c,	// (0x0005b8b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x190c,	// (0x0005b8b2) vkb2_area_bottom_space_btn_pane_g4

0xb670,	// (0x00065616) lc0_navi_pane_ParamLimits

0xb670,	// (0x00065616) lc0_navi_pane

0xb6e0,	// (0x00065686) lc0_stat_indi_pane_ParamLimits

0xb6e0,	// (0x00065686) lc0_stat_indi_pane

0xb6f5,	// (0x0006569b) ls0_title_pane_ParamLimits

0xb6f5,	// (0x0006569b) ls0_title_pane

0x8d5f,	// (0x00062d05) bg_popup_sub_pane_cp14_ParamLimits

0x6850,	// (0x000607f6) list_uniindi_pane_ParamLimits

0x685c,	// (0x00060802) uniindi_top_pane_ParamLimits

0x68fb,	// (0x000608a1) list_single_uniindi_pane_g1_ParamLimits

0x690e,	// (0x000608b4) list_single_uniindi_pane_t1_ParamLimits

0xbf8d,	// (0x00065f33) lc0_stat_clock_pane_ParamLimits

0xbf8d,	// (0x00065f33) lc0_stat_clock_pane

0xdbc8,	// (0x00067b6e) lc0_stat_indi_pane_g1_ParamLimits

0xdbc8,	// (0x00067b6e) lc0_stat_indi_pane_g1

0xdbd5,	// (0x00067b7b) lc0_stat_indi_pane_g2_ParamLimits

0xdbd5,	// (0x00067b7b) lc0_stat_indi_pane_g2

0x0001,

0xfe46,	// (0x00069dec) lc0_stat_indi_pane_g_ParamLimits

0xfe46,	// (0x00069dec) lc0_stat_indi_pane_g

0xbf9a,	// (0x00065f40) lc0_uni_indicator_pane_ParamLimits

0xbf9a,	// (0x00065f40) lc0_uni_indicator_pane

0xdbe2,	// (0x00067b88) ls0_title_pane_g1_ParamLimits

0xdbe2,	// (0x00067b88) ls0_title_pane_g1

0xdbf6,	// (0x00067b9c) ls0_title_pane_t1_ParamLimits

0xdbf6,	// (0x00067b9c) ls0_title_pane_t1

0xbfa7,	// (0x00065f4d) lc0_uni_indicator_pane_g1_ParamLimits

0xbfa7,	// (0x00065f4d) lc0_uni_indicator_pane_g1

0x749f,	// (0x00061445) lc0_stat_clock_pane_t1

0xef0f,	// (0x00068eb5) main_ai5_pane

0x74ad,	// (0x00061453) ai5_sk_pane_ParamLimits

0x74ad,	// (0x00061453) ai5_sk_pane

0xdc24,	// (0x00067bca) cell_ai5_widget_pane_ParamLimits

0xdc24,	// (0x00067bca) cell_ai5_widget_pane

0xdf7e,	// (0x00067f24) aid_size_cell_widget_grid

0x7a6a,	// (0x00061a10) bg_ai5_widget_pane_ParamLimits

0x7a6a,	// (0x00061a10) bg_ai5_widget_pane

0xeb2a,	// (0x00068ad0) cell_ai5_widget_pane_g2

0xeb3e,	// (0x00068ae4) cell_ai5_widget_pane_g3

0xeb58,	// (0x00068afe) cell_ai5_widget_pane_g4

0xeb68,	// (0x00068b0e) cell_ai5_widget_pane_g5

0xeb78,	// (0x00068b1e) cell_ai5_widget_pane_g6

0xeb84,	// (0x00068b2a) cell_ai5_widget_pane_g7

0xeb90,	// (0x00068b36) cell_ai5_widget_pane_t1_ParamLimits

0xeb90,	// (0x00068b36) cell_ai5_widget_pane_t1

0x7ba1,	// (0x00061b47) cell_ai5_widget_pane_t2_ParamLimits

0x7ba1,	// (0x00061b47) cell_ai5_widget_pane_t2

0x7bb9,	// (0x00061b5f) cell_ai5_widget_pane_t3_ParamLimits

0x7bb9,	// (0x00061b5f) cell_ai5_widget_pane_t3

0xebad,	// (0x00068b53) cell_ai5_widget_pane_t4_ParamLimits

0xebad,	// (0x00068b53) cell_ai5_widget_pane_t4

0xebd3,	// (0x00068b79) cell_ai5_widget_pane_t5_ParamLimits

0xebd3,	// (0x00068b79) cell_ai5_widget_pane_t5

0x7c17,	// (0x00061bbd) cell_ai5_widget_pane_t6_ParamLimits

0x7c17,	// (0x00061bbd) cell_ai5_widget_pane_t6

0x7c29,	// (0x00061bcf) cell_ai5_widget_pane_t7_ParamLimits

0x7c29,	// (0x00061bcf) cell_ai5_widget_pane_t7

0x7c42,	// (0x00061be8) cell_ai5_widget_pane_t8_ParamLimits

0x7c42,	// (0x00061be8) cell_ai5_widget_pane_t8

0x0009,

0xfe60,	// (0x00069e06) cell_ai5_widget_pane_t_ParamLimits

0xfe60,	// (0x00069e06) cell_ai5_widget_pane_t

0xec40,	// (0x00068be6) grid_ai5_widget_pane

0x8d5f,	// (0x00062d05) highlight_cell_ai5_widget_pane_ParamLimits

0x8d5f,	// (0x00062d05) highlight_cell_ai5_widget_pane

0xec4e,	// (0x00068bf4) ai5_sk_left_pane

0xec58,	// (0x00068bfe) ai5_sk_middle_pane

0xec62,	// (0x00068c08) ai5_sk_right_pane

0x7ccd,	// (0x00061c73) bg_ai5_widget_pane_g1_ParamLimits

0x7ccd,	// (0x00061c73) bg_ai5_widget_pane_g1

0x7cd9,	// (0x00061c7f) bg_ai5_widget_pane_g2_ParamLimits

0x7cd9,	// (0x00061c7f) bg_ai5_widget_pane_g2

0x7ce5,	// (0x00061c8b) bg_ai5_widget_pane_g3_ParamLimits

0x7ce5,	// (0x00061c8b) bg_ai5_widget_pane_g3

0x7cf1,	// (0x00061c97) bg_ai5_widget_pane_g4_ParamLimits

0x7cf1,	// (0x00061c97) bg_ai5_widget_pane_g4

0x7cfd,	// (0x00061ca3) bg_ai5_widget_pane_g5_ParamLimits

0x7cfd,	// (0x00061ca3) bg_ai5_widget_pane_g5

0x7d09,	// (0x00061caf) bg_ai5_widget_pane_g6_ParamLimits

0x7d09,	// (0x00061caf) bg_ai5_widget_pane_g6

0x7d15,	// (0x00061cbb) bg_ai5_widget_pane_g7_ParamLimits

0x7d15,	// (0x00061cbb) bg_ai5_widget_pane_g7

0x7d21,	// (0x00061cc7) bg_ai5_widget_pane_g8_ParamLimits

0x7d21,	// (0x00061cc7) bg_ai5_widget_pane_g8

0x7d2d,	// (0x00061cd3) bg_ai5_widget_pane_g9_ParamLimits

0x7d2d,	// (0x00061cd3) bg_ai5_widget_pane_g9

0x0008,

0xfe75,	// (0x00069e1b) bg_ai5_widget_pane_g_ParamLimits

0xfe75,	// (0x00069e1b) bg_ai5_widget_pane_g

0xec98,	// (0x00068c3e) cell_shortcut_ai5_widget_pane_ParamLimits

0xec98,	// (0x00068c3e) cell_shortcut_ai5_widget_pane

0x1e00,	// (0x0005bda6) bg_cell_shortcut_ai5_widget_pane

0x7d78,	// (0x00061d1e) cell_grid_ai5_widget_pane_g1

0x1e00,	// (0x0005bda6) highlight_cell_shortcut_ai5_widget_pane

0x2673,	// (0x0005c619) ai5_sk_left_pane_g1

0x7d81,	// (0x00061d27) ai5_sk_left_pane_g2

0x7d89,	// (0x00061d2f) ai5_sk_left_pane_g3

0x7d91,	// (0x00061d37) ai5_sk_left_pane_g4

0x0003,

0xfe88,	// (0x00069e2e) ai5_sk_left_pane_g

0x7d99,	// (0x00061d3f) ai5_sk_left_pane_t1

0x267b,	// (0x0005c621) ai5_sk_right_pane_g1

0x7da7,	// (0x00061d4d) ai5_sk_right_pane_g2

0x7daf,	// (0x00061d55) ai5_sk_right_pane_g3

0x7db7,	// (0x00061d5d) ai5_sk_right_pane_g4

0x0003,

0xfe91,	// (0x00069e37) ai5_sk_right_pane_g

0x7dbf,	// (0x00061d65) ai5_sk_right_pane_t1

0x267b,	// (0x0005c621) ai5_sk_middle_pane_g1

0x2673,	// (0x0005c619) ai5_sk_middle_pane_g2

0x2693,	// (0x0005c639) ai5_sk_middle_pane_g3

0x7daf,	// (0x00061d55) ai5_sk_middle_pane_g4

0x7d89,	// (0x00061d2f) ai5_sk_middle_pane_g5

0x7dcd,	// (0x00061d73) ai5_sk_middle_pane_g6

0xecab,	// (0x00068c51) ai5_sk_middle_pane_g7

0x0006,

0xfe9a,	// (0x00069e40) ai5_sk_middle_pane_g

0xb55a,	// (0x00065500) aid_touch_area_size_lc0_ParamLimits

0xb55a,	// (0x00065500) aid_touch_area_size_lc0

0x0e9a,	// (0x0005ae40) cell_hwr_candidate_pane_t1_ParamLimits

0x21ad,	// (0x0005c153) aid_touch_navi_pane

0xc241,	// (0x000661e7) status_dt_navi_pane_ParamLimits

0xc241,	// (0x000661e7) status_dt_navi_pane

0xc259,	// (0x000661ff) status_dt_sta_pane_ParamLimits

0xc259,	// (0x000661ff) status_dt_sta_pane

0xecb3,	// (0x00068c59) dt_sta_controll_pane

0xecc0,	// (0x00068c66) dt_sta_indi_pane

0xeccd,	// (0x00068c73) dt_sta_title_pane

0x8854,	// (0x000627fa) bg_dt_sta_indi_pane_ParamLimits

0x8854,	// (0x000627fa) bg_dt_sta_indi_pane

0xecdf,	// (0x00068c85) dt_sta_battery_pane

0xece7,	// (0x00068c8d) dt_sta_indi_pane_g1

0xecf0,	// (0x00068c96) dt_sta_indi_pane_g2

0xecf9,	// (0x00068c9f) dt_sta_indi_pane_g3

0x0002,

0xfea9,	// (0x00069e4f) dt_sta_indi_pane_g

0xed02,	// (0x00068ca8) dt_sta_signal_pane

0x8d5f,	// (0x00062d05) bg_dt_sta_title_pane_ParamLimits

0x8d5f,	// (0x00062d05) bg_dt_sta_title_pane

0xed0b,	// (0x00068cb1) dt_sta_title_pane_g1

0xed13,	// (0x00068cb9) dt_sta_title_pane_t1_ParamLimits

0xed13,	// (0x00068cb9) dt_sta_title_pane_t1

0x5959,	// (0x0005f8ff) bg_dt_sta_control_pane

0xed28,	// (0x00068cce) dt_sta_controll_pane_g1

0xed31,	// (0x00068cd7) bg_dt_sta_title_pane_g1

0xed3a,	// (0x00068ce0) bg_dt_sta_title_pane_g2

0xed43,	// (0x00068ce9) bg_dt_sta_title_pane_g3

0x0002,

0xfeb0,	// (0x00069e56) bg_dt_sta_title_pane_g

0x4e44,	// (0x0005edea) bg_dt_sta_indi_pane_g1

0x7e7b,	// (0x00061e21) dt_sta_signal_pane_g1

0x7e83,	// (0x00061e29) dt_sta_signal_pane_g2

0x0001,

0xfeb7,	// (0x00069e5d) dt_sta_signal_pane_g

0x7e8b,	// (0x00061e31) dt_sta_battery_pane_g1

0x7e94,	// (0x00061e3a) dt_sta_battery_pane_t1

0x4e44,	// (0x0005edea) bg_dt_sta_control_pane_g1

0xe23c,	// (0x000681e2) fep_china_uni_eep_pane

0xe244,	// (0x000681ea) fep_china_uni_entry_pane_ParamLimits

0xe254,	// (0x000681fa) popup_fep_china_uni_window_g1_ParamLimits

0xe264,	// (0x0006820a) popup_fep_china_uni_window_g2_ParamLimits

0xe264,	// (0x0006820a) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x000696c8) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x000696c8) popup_fep_china_uni_window_g

0x7ea3,	// (0x00061e49) fep_china_uni_eep_pane_g1

0x7eab,	// (0x00061e51) fep_china_uni_eep_pane_t1

0x741c,	// (0x000613c2) aid_touch_area_size_smil_player

0x22fb,	// (0x0005c2a1) lc0_clock_pane

0x24f2,	// (0x0005c498) status_pane_g5_ParamLimits

0x24f2,	// (0x0005c498) status_pane_g5

0xafb1,	// (0x00064f57) popup_keymap_window

0x24b8,	// (0x0005c45e) status_icon_pane

0xeb3e,	// (0x00068ae4) cell_ai5_widget_pane_g3_ParamLimits

0xeb58,	// (0x00068afe) cell_ai5_widget_pane_g4_ParamLimits

0xeb68,	// (0x00068b0e) cell_ai5_widget_pane_g5_ParamLimits

0x7b48,	// (0x00061aee) cell_ai5_widget_pane_g8_ParamLimits

0x7b48,	// (0x00061aee) cell_ai5_widget_pane_g8

0x7b5c,	// (0x00061b02) cell_ai5_widget_pane_g9_ParamLimits

0x7b5c,	// (0x00061b02) cell_ai5_widget_pane_g9

0x7b70,	// (0x00061b16) cell_ai5_widget_pane_g10_ParamLimits

0x7b70,	// (0x00061b16) cell_ai5_widget_pane_g10

0x7eba,	// (0x00061e60) status_icon_pane_g1

0x5959,	// (0x0005f8ff) bg_popup_sub_pane_cp13

0x7ec2,	// (0x00061e68) popup_keymap_window_t1

0xaca6,	// (0x00064c4c) control_pane_g6_ParamLimits

0xaca6,	// (0x00064c4c) control_pane_g6

0xacb3,	// (0x00064c59) control_pane_g7_ParamLimits

0xacb3,	// (0x00064c59) control_pane_g7

0xacc0,	// (0x00064c66) control_pane_g8_ParamLimits

0xacc0,	// (0x00064c66) control_pane_g8

0xecb3,	// (0x00068c59) dt_sta_controll_pane_ParamLimits

0xecc0,	// (0x00068c66) dt_sta_indi_pane_ParamLimits

0xeccd,	// (0x00068c73) dt_sta_title_pane_ParamLimits

0x8ca1,	// (0x00062c47) aid_size_touch_scroll_bar_cale

0xefec,	// (0x00068f92) popup_discreet_window_ParamLimits

0xefec,	// (0x00068f92) popup_discreet_window

0x9ca8,	// (0x00063c4e) popup_sk_window

0x2ce1,	// (0x0005cc87) bg_popup_sub_pane_cp28_ParamLimits

0x2ce1,	// (0x0005cc87) bg_popup_sub_pane_cp28

0x7ed0,	// (0x00061e76) popup_discreet_window_g1_ParamLimits

0x7ed0,	// (0x00061e76) popup_discreet_window_g1

0x7ef0,	// (0x00061e96) popup_discreet_window_t1_ParamLimits

0x7ef0,	// (0x00061e96) popup_discreet_window_t1

0x7f0e,	// (0x00061eb4) popup_discreet_window_t2_ParamLimits

0x7f0e,	// (0x00061eb4) popup_discreet_window_t2

0x0002,

0xfebc,	// (0x00069e62) popup_discreet_window_t_ParamLimits

0xfebc,	// (0x00069e62) popup_discreet_window_t

0x197d,	// (0x0005b923) popup_sk_window_g1

0x1987,	// (0x0005b92d) popup_sk_window_g2

0x0001,

0xfec3,	// (0x00069e69) popup_sk_window_g

0x198f,	// (0x0005b935) popup_sk_window_t1

0x199d,	// (0x0005b943) popup_sk_window_t1_copy1

0xeb2a,	// (0x00068ad0) cell_ai5_widget_pane_g2_ParamLimits

0xebf3,	// (0x00068b99) cell_ai5_widget_pane_t9_ParamLimits

0xebf3,	// (0x00068b99) cell_ai5_widget_pane_t9

0x5959,	// (0x0005f8ff) main_fep_fshwr2_pane

0xbfc6,	// (0x00065f6c) aid_fshwr2_btn_pane

0xbfd7,	// (0x00065f7d) aid_fshwr2_syb_pane

0xbfe8,	// (0x00065f8e) aid_fshwr2_txt_pane

0xbff4,	// (0x00065f9a) fshwr2_func_candi_pane

0xc015,	// (0x00065fbb) fshwr2_hwr_syb_pane

0xc032,	// (0x00065fd8) fshwr2_icf_pane

0xef0f,	// (0x00068eb5) fshwr2_icf_bg_pane

0x1a13,	// (0x0005b9b9) fshwr2_icf_pane_t1_ParamLimits

0x1a13,	// (0x0005b9b9) fshwr2_icf_pane_t1

0xe1ba,	// (0x00068160) fshwr2_func_candi_pane_g1

0xed4c,	// (0x00068cf2) fshwr2_func_candi_row_pane_ParamLimits

0xed4c,	// (0x00068cf2) fshwr2_func_candi_row_pane

0xc05e,	// (0x00066004) cell_fshwr2_syb_pane_ParamLimits

0xc05e,	// (0x00066004) cell_fshwr2_syb_pane

0x0e6b,	// (0x0005ae11) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0e6b,	// (0x0005ae11) fshwr2_hwr_syb_pane_g1

0xef0f,	// (0x00068eb5) bg_popup_call_pane_cp01

0xc074,	// (0x0006601a) fshwr2_func_candi_cell_pane_ParamLimits

0xc074,	// (0x0006601a) fshwr2_func_candi_cell_pane

0xed73,	// (0x00068d19) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed73,	// (0x00068d19) fshwr2_func_candi_cell_bg_pane

0xc0bd,	// (0x00066063) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc0bd,	// (0x00066063) fshwr2_func_candi_cell_pane_g1

0xc0f4,	// (0x0006609a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc0f4,	// (0x0006609a) fshwr2_func_candi_cell_pane_t1

0xef0f,	// (0x00068eb5) bg_button_pane_cp08

0x7f7c,	// (0x00061f22) cell_fshwr2_syb_bg_pane

0xc10f,	// (0x000660b5) cell_fshwr2_syb_bg_pane_g1

0xc117,	// (0x000660bd) cell_fshwr2_syb_bg_pane_t1

0x8d5f,	// (0x00062d05) main_tmo_pane

0xc55b,	// (0x00066501) uni_indicator_pane_g1_ParamLimits

0xc571,	// (0x00066517) uni_indicator_pane_g2_ParamLimits

0xc587,	// (0x0006652d) uni_indicator_pane_g3_ParamLimits

0xc59a,	// (0x00066540) uni_indicator_pane_g4_ParamLimits

0xc59a,	// (0x00066540) uni_indicator_pane_g4

0x384d,	// (0x0005d7f3) uni_indicator_pane_g5_ParamLimits

0x384d,	// (0x0005d7f3) uni_indicator_pane_g5

0x384d,	// (0x0005d7f3) uni_indicator_pane_g6_ParamLimits

0x384d,	// (0x0005d7f3) uni_indicator_pane_g6

0xf921,	// (0x000698c7) uni_indicator_pane_g_ParamLimits

0xd058,	// (0x00066ffe) popup_tmo_note_window_ParamLimits

0xd058,	// (0x00066ffe) popup_tmo_note_window

0x11eb,	// (0x0005b191) fshwr2_bg_pane

0xc0e5,	// (0x0006608b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc0e5,	// (0x0006608b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec8,	// (0x00069e6e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec8,	// (0x00069e6e) fshwr2_func_candi_cell_pane_g

0x0e53,	// (0x0005adf9) bg_popup_window_pane_cp01

0x1adc,	// (0x0005ba82) bg_popup_window_pane_g1_cp01

0x7f84,	// (0x00061f2a) bg_popup_window_pane_cp22_ParamLimits

0x7f84,	// (0x00061f2a) bg_popup_window_pane_cp22

0x7f92,	// (0x00061f38) listscroll_tmo_link_pane_ParamLimits

0x7f92,	// (0x00061f38) listscroll_tmo_link_pane

0x7fd2,	// (0x00061f78) popup_tmo_note_window_g1_ParamLimits

0x7fd2,	// (0x00061f78) popup_tmo_note_window_g1

0x7fdf,	// (0x00061f85) tmo_note_info_pane_ParamLimits

0x7fdf,	// (0x00061f85) tmo_note_info_pane

0xed7f,	// (0x00068d25) list_tmo_note_info_pane_g1_ParamLimits

0xed7f,	// (0x00068d25) list_tmo_note_info_pane_g1

0x8010,	// (0x00061fb6) list_tmo_note_info_pane_g2_ParamLimits

0x8010,	// (0x00061fb6) list_tmo_note_info_pane_g2

0x0001,

0xfecd,	// (0x00069e73) list_tmo_note_info_pane_g_ParamLimits

0xfecd,	// (0x00069e73) list_tmo_note_info_pane_g

0x802c,	// (0x00061fd2) list_tmo_note_info_text_pane_ParamLimits

0x802c,	// (0x00061fd2) list_tmo_note_info_text_pane

0x80b1,	// (0x00062057) list_tmo_link_pane

0x80be,	// (0x00062064) scroll_pane_cp20

0x80cb,	// (0x00062071) list_single_tmo_link_pane_ParamLimits

0x80cb,	// (0x00062071) list_single_tmo_link_pane

0x80db,	// (0x00062081) list_single_tmo_link_pane_t1

0x80e9,	// (0x0006208f) list_tmo_note_info_text_pane_t1_ParamLimits

0x80e9,	// (0x0006208f) list_tmo_note_info_text_pane_t1

0xa779,	// (0x0006471f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa779,	// (0x0006471f) aid_size_touch_scroll_bar_cp01

0xa6a8,	// (0x0006464e) aid_size_touch_slider_marker

0x9c98,	// (0x00063c3e) popup_settings_window_ParamLimits

0x9c98,	// (0x00063c3e) popup_settings_window

0xe5a9,	// (0x0006854f) popup_candi_list_indi_window

0x21ad,	// (0x0005c153) aid_touch_navi_pane_ParamLimits

0x1144,	// (0x0005b0ea) rs_clock_indi_pane

0x114d,	// (0x0005b0f3) sctrl_sk_bottom_pane_ParamLimits

0x115e,	// (0x0005b104) sctrl_sk_top_pane_ParamLimits

0x1263,	// (0x0005b209) popup_fep_tooltip_window

0xdf7e,	// (0x00067f24) aid_size_cell_widget_grid_ParamLimits

0xeb15,	// (0x00068abb) cell_ai5_widget_pane_g1_ParamLimits

0xeb15,	// (0x00068abb) cell_ai5_widget_pane_g1

0xeb78,	// (0x00068b1e) cell_ai5_widget_pane_g6_ParamLimits

0xeb84,	// (0x00068b2a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4b,	// (0x00069df1) cell_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x00069df1) cell_ai5_widget_pane_g

0xec22,	// (0x00068bc8) cell_ai5_widget_pane_t10_ParamLimits

0xec22,	// (0x00068bc8) cell_ai5_widget_pane_t10

0xec40,	// (0x00068be6) grid_ai5_widget_pane_ParamLimits

0xec6c,	// (0x00068c12) cell_contacts_ai5_widget_pane_ParamLimits

0xec6c,	// (0x00068c12) cell_contacts_ai5_widget_pane

0x7f23,	// (0x00061ec9) popup_discreet_window_t3_ParamLimits

0x7f23,	// (0x00061ec9) popup_discreet_window_t3

0xc04a,	// (0x00065ff0) popup_fshwr2_char_preview_window_ParamLimits

0xc04a,	// (0x00065ff0) popup_fshwr2_char_preview_window

0xed96,	// (0x00068d3c) tmo_note_info_pane_t1

0xedab,	// (0x00068d51) tmo_note_info_pane_t2

0xedc4,	// (0x00068d6a) tmo_note_info_pane_t3

0x808d,	// (0x00062033) tmo_note_info_pane_t4

0x809f,	// (0x00062045) tmo_note_info_pane_t5

0x0004,

0xfed2,	// (0x00069e78) tmo_note_info_pane_t

0x80b1,	// (0x00062057) list_tmo_link_pane_ParamLimits

0x80be,	// (0x00062064) scroll_pane_cp20_ParamLimits

0xef0f,	// (0x00068eb5) bg_popup_fep_char_preview_window_cp01

0x8102,	// (0x000620a8) popup_fshwr2_char_preview_window_t1

0x8110,	// (0x000620b6) popup_candi_list_indi_window_g1

0x8119,	// (0x000620bf) bg_cell_contacts_ai5_widget_pane

0x8125,	// (0x000620cb) cell_contacts_ai5_widget_pane_g1

0x813a,	// (0x000620e0) cell_contacts_ai5_widget_pane_g2

0x8146,	// (0x000620ec) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedd,	// (0x00069e83) cell_contacts_ai5_widget_pane_g

0x8152,	// (0x000620f8) cell_contacts_ai5_widget_pane_t1

0x8d5f,	// (0x00062d05) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81c9,	// (0x0006216f) settings_container_pane

0x1e00,	// (0x0005bda6) listscroll_set_pane_copy1

0x459c,	// (0x0005e542) scroll_pane_cp121_copy1

0x81d5,	// (0x0006217b) set_content_pane_copy1

0x81dd,	// (0x00062183) aid_height_set_list_copy1_ParamLimits

0x81dd,	// (0x00062183) aid_height_set_list_copy1

0x3c14,	// (0x0005dbba) aid_size_parent_copy1_ParamLimits

0x3c14,	// (0x0005dbba) aid_size_parent_copy1

0x81e9,	// (0x0006218f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x81e9,	// (0x0006218f) button_value_adjust_pane_cp6_copy1

0x212f,	// (0x0005c0d5) list_highlight_pane_cp2_copy1_ParamLimits

0x212f,	// (0x0005c0d5) list_highlight_pane_cp2_copy1

0x81fd,	// (0x000621a3) list_set_pane_copy1_ParamLimits

0x81fd,	// (0x000621a3) list_set_pane_copy1

0x8164,	// (0x0006210a) main_pane_set_t1_copy1_ParamLimits

0x8164,	// (0x0006210a) main_pane_set_t1_copy1

0x819e,	// (0x00062144) main_pane_set_t2_copy1_ParamLimits

0x819e,	// (0x00062144) main_pane_set_t2_copy1

0x82be,	// (0x00062264) main_pane_set_t3_copy1

0x82cc,	// (0x00062272) main_pane_set_t4_copy1

0x81bd,	// (0x00062163) set_content_pane_g1_copy1_ParamLimits

0x81bd,	// (0x00062163) set_content_pane_g1_copy1

0x82da,	// (0x00062280) setting_code_pane_copy1

0x82e2,	// (0x00062288) setting_slider_graphic_pane_copy1

0x82e2,	// (0x00062288) setting_slider_pane_copy1

0x82e2,	// (0x00062288) setting_text_pane_copy1

0x82e2,	// (0x00062288) setting_volume_pane_copy1

0x82da,	// (0x00062280) settings_code_pane_cp2_copy1

0x82ea,	// (0x00062290) settings_code_pane_cp_copy1_ParamLimits

0x82ea,	// (0x00062290) settings_code_pane_cp_copy1

0x1ae5,	// (0x0005ba8b) volume_set_pane_copy1

0x82fe,	// (0x000622a4) volume_set_pane_g10_copy1

0x830a,	// (0x000622b0) volume_set_pane_g1_copy1

0x8314,	// (0x000622ba) volume_set_pane_g2_copy1

0x831e,	// (0x000622c4) volume_set_pane_g3_copy1

0x8328,	// (0x000622ce) volume_set_pane_g4_copy1

0x8332,	// (0x000622d8) volume_set_pane_g5_copy1

0x833c,	// (0x000622e2) volume_set_pane_g6_copy1

0x8346,	// (0x000622ec) volume_set_pane_g7_copy1

0x8350,	// (0x000622f6) volume_set_pane_g8_copy1

0x835a,	// (0x00062300) volume_set_pane_g9_copy1

0x59bb,	// (0x0005f961) bg_set_opt_pane_cp_copy1_ParamLimits

0x59bb,	// (0x0005f961) bg_set_opt_pane_cp_copy1

0x1af1,	// (0x0005ba97) setting_slider_pane_t1_copy1_ParamLimits

0x1af1,	// (0x0005ba97) setting_slider_pane_t1_copy1

0x1b0f,	// (0x0005bab5) setting_slider_pane_t2_copy1_ParamLimits

0x1b0f,	// (0x0005bab5) setting_slider_pane_t2_copy1

0x1b29,	// (0x0005bacf) setting_slider_pane_t3_copy1_ParamLimits

0x1b29,	// (0x0005bacf) setting_slider_pane_t3_copy1

0x1b41,	// (0x0005bae7) slider_set_pane_copy1_ParamLimits

0x1b41,	// (0x0005bae7) slider_set_pane_copy1

0x8db7,	// (0x00062d5d) set_opt_bg_pane_g1_copy2

0x8dbf,	// (0x00062d65) set_opt_bg_pane_g2_copy2

0x8364,	// (0x0006230a) set_opt_bg_pane_g3_copy2

0x8dcf,	// (0x00062d75) set_opt_bg_pane_g4_copy2

0x8dd7,	// (0x00062d7d) set_opt_bg_pane_g5_copy2

0x8ddf,	// (0x00062d85) set_opt_bg_pane_g6_copy2

0x836e,	// (0x00062314) set_opt_bg_pane_g7_copy2

0x8378,	// (0x0006231e) set_opt_bg_pane_g8_copy2

0x8382,	// (0x00062328) set_opt_bg_pane_g9_copy2

0x1b57,	// (0x0005bafd) aid_size_touch_slider_mark_copy1_ParamLimits

0x1b57,	// (0x0005bafd) aid_size_touch_slider_mark_copy1

0x838c,	// (0x00062332) slider_set_pane_g1_copy1

0x1b6b,	// (0x0005bb11) slider_set_pane_g2_copy1

0x09f0,	// (0x0005a996) slider_set_pane_g3_copy1_ParamLimits

0x09f0,	// (0x0005a996) slider_set_pane_g3_copy1

0x0a04,	// (0x0005a9aa) slider_set_pane_g4_copy1_ParamLimits

0x0a04,	// (0x0005a9aa) slider_set_pane_g4_copy1

0x0a1c,	// (0x0005a9c2) slider_set_pane_g5_copy1_ParamLimits

0x0a1c,	// (0x0005a9c2) slider_set_pane_g5_copy1

0x09f0,	// (0x0005a996) slider_set_pane_g6_copy1_ParamLimits

0x09f0,	// (0x0005a996) slider_set_pane_g6_copy1

0x1b73,	// (0x0005bb19) slider_set_pane_g7_copy1_ParamLimits

0x1b73,	// (0x0005bb19) slider_set_pane_g7_copy1

0x596d,	// (0x0005f913) bg_set_opt_pane_cp2_copy1

0x8395,	// (0x0006233b) setting_slider_graphic_pane_g1_copy1

0x839e,	// (0x00062344) setting_slider_graphic_pane_t1_copy1

0x83ae,	// (0x00062354) setting_slider_graphic_pane_t2_copy1

0x83be,	// (0x00062364) slider_set_pane_cp_copy1

0x83ce,	// (0x00062374) input_focus_pane_cp1_copy1

0x83d7,	// (0x0006237d) list_set_text_pane_copy1

0x83df,	// (0x00062385) setting_text_pane_g1_copy1

0xe040,	// (0x00067fe6) set_text_pane_t1_copy1

0x83ce,	// (0x00062374) input_focus_pane_cp2_copy1

0x83df,	// (0x00062385) setting_code_pane_g1_copy1

0x83e8,	// (0x0006238e) setting_code_pane_t1_copy1

0xe3d7,	// (0x0006837d) list_set_graphic_pane_copy1

0x596d,	// (0x0005f913) bg_set_opt_pane_cp4_copy1

0xe3ea,	// (0x00068390) list_set_graphic_pane_g1_copy1_ParamLimits

0xe3ea,	// (0x00068390) list_set_graphic_pane_g1_copy1

0x83f6,	// (0x0006239c) list_set_graphic_pane_g2_copy1

0xe402,	// (0x000683a8) list_set_graphic_pane_t1_copy1_ParamLimits

0xe402,	// (0x000683a8) list_set_graphic_pane_t1_copy1

0x4e44,	// (0x0005edea) rs_clock_indi_pane_g1

0x83fe,	// (0x000623a4) rs_clock_indi_pane_t1

0x840c,	// (0x000623b2) rs_indi_pane

0x8414,	// (0x000623ba) rs_indi_pane_g1

0x841d,	// (0x000623c3) rs_indi_pane_g2

0x8426,	// (0x000623cc) rs_indi_pane_g3

0x0002,

0xfee4,	// (0x00069e8a) rs_indi_pane_g

0x1e00,	// (0x0005bda6) bg_popup_preview_window_pane_cp03

0x842f,	// (0x000623d5) popup_fep_tooltip_window_t1

0x5bc4,	// (0x0005fb6a) popup_note2_window_g2_ParamLimits

0x5bc4,	// (0x0005fb6a) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x00069c23) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x00069c23) popup_note2_window_g

0x60cc,	// (0x00060072) bg_popup_sub_pane_cp11_ParamLimits

0x60d9,	// (0x0006007f) cell_ai3_links_pane_g1_ParamLimits

0x60f0,	// (0x00060096) cell_ai3_links_pane_t1

0xe040,	// (0x00067fe6) set_text_pane_t1_copy1_ParamLimits

0x1d19,	// (0x0005bcbf) cell_graphic_popup_pane_cp2_ParamLimits

0x1d19,	// (0x0005bcbf) cell_graphic_popup_pane_cp2

0x843d,	// (0x000623e3) cell_graphic_popup_pane_g1_cp2

0x8ab4,	// (0x00062a5a) cell_graphic_popup_pane_g2_cp2

0x8445,	// (0x000623eb) cell_graphic_popup_pane_g3_cp2

0x844d,	// (0x000623f3) cell_graphic_popup_pane_t2_cp2

0x8ac5,	// (0x00062a6b) grid_highlight_pane_cp3_cp2

0x9060,	// (0x00063006) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8d5f,	// (0x00062d05) main_tmo_pane_ParamLimits

0xd04c,	// (0x00066ff2) popup_tmo_big_image_note_window

0xeb04,	// (0x00068aaa) cell_ai5_widget_list_pane

0xeb0c,	// (0x00068ab2) cell_ai5_widget_lrg_icon_pane

0xed96,	// (0x00068d3c) tmo_note_info_pane_t1_ParamLimits

0xedab,	// (0x00068d51) tmo_note_info_pane_t2_ParamLimits

0xedc4,	// (0x00068d6a) tmo_note_info_pane_t3_ParamLimits

0x808d,	// (0x00062033) tmo_note_info_pane_t4_ParamLimits

0x809f,	// (0x00062045) tmo_note_info_pane_t5_ParamLimits

0xfed2,	// (0x00069e78) tmo_note_info_pane_t_ParamLimits

0x81c9,	// (0x0006216f) settings_container_pane_ParamLimits

0x83c6,	// (0x0006236c) indicator_popup_pane_cp5

0x83c6,	// (0x0006236c) indicator_popup_pane_cp6

0xe3d7,	// (0x0006837d) list_set_graphic_pane_copy1_ParamLimits

0x5959,	// (0x0005f8ff) bg_popup_window_pane_cp23

0x845b,	// (0x00062401) popup_tmo_big_image_note_window_g1

0x8467,	// (0x0006240d) popup_tmo_big_image_note_window_t1

0x8477,	// (0x0006241d) popup_tmo_big_image_note_window_t2

0x8487,	// (0x0006242d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeeb,	// (0x00069e91) popup_tmo_big_image_note_window_t

0x4e44,	// (0x0005edea) cell_ai5_widget_lrg_icon_pane_g1

0xedd9,	// (0x00068d7f) cell_ai5_widget_lrg_icon_pane_t1

0xede7,	// (0x00068d8d) cell_ai5_widget_list_row_pane_ParamLimits

0xede7,	// (0x00068d8d) cell_ai5_widget_list_row_pane

0xedff,	// (0x00068da5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xedff,	// (0x00068da5) cell_ai5_widget_list_row_pane_g1

0xee0c,	// (0x00068db2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee0c,	// (0x00068db2) cell_ai5_widget_list_row_pane_t1

0xee37,	// (0x00068ddd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xee37,	// (0x00068ddd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef2,	// (0x00069e98) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef2,	// (0x00069e98) cell_ai5_widget_list_row_pane_t

0xef0f,	// (0x00068eb5) main_fep_vtchi_ss_pane

0x853d,	// (0x000624e3) popup_fep_char_pre_window

0x8545,	// (0x000624eb) popup_fep_ituss_window

0xee5f,	// (0x00068e05) popup_fep_vkbss_window

0xee6e,	// (0x00068e14) grid_vkbss_keypad_pane_ParamLimits

0xee6e,	// (0x00068e14) grid_vkbss_keypad_pane

0x85a2,	// (0x00062548) ituss_keypad_pane

0x1b95,	// (0x0005bb3b) aid_vkbss_key_offset_ParamLimits

0x1b95,	// (0x0005bb3b) aid_vkbss_key_offset

0xc126,	// (0x000660cc) cell_vkbss_key_pane_ParamLimits

0xc126,	// (0x000660cc) cell_vkbss_key_pane

0x85b1,	// (0x00062557) bg_cell_vkbss_key_g1_ParamLimits

0x85b1,	// (0x00062557) bg_cell_vkbss_key_g1

0xee7e,	// (0x00068e24) cell_vkbss_key_3p_pane_ParamLimits

0xee7e,	// (0x00068e24) cell_vkbss_key_3p_pane

0xee98,	// (0x00068e3e) cell_vkbss_key_g1_ParamLimits

0xee98,	// (0x00068e3e) cell_vkbss_key_g1

0xeeb2,	// (0x00068e58) cell_vkbss_key_t1_ParamLimits

0xeeb2,	// (0x00068e58) cell_vkbss_key_t1

0x1bb7,	// (0x0005bb5d) cell_ituss_key_pane_ParamLimits

0x1bb7,	// (0x0005bb5d) cell_ituss_key_pane

0x8610,	// (0x000625b6) bg_cell_ituss_key_g1_ParamLimits

0x8610,	// (0x000625b6) bg_cell_ituss_key_g1

0x861c,	// (0x000625c2) cell_ituss_key_pane_g1_ParamLimits

0x861c,	// (0x000625c2) cell_ituss_key_pane_g1

0x1bc8,	// (0x0005bb6e) cell_ituss_key_pane_g2_ParamLimits

0x1bc8,	// (0x0005bb6e) cell_ituss_key_pane_g2

0x0002,

0xfef9,	// (0x00069e9f) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x00069e9f) cell_ituss_key_pane_g

0x1bf4,	// (0x0005bb9a) cell_ituss_key_t1_ParamLimits

0x1bf4,	// (0x0005bb9a) cell_ituss_key_t1

0x1c2e,	// (0x0005bbd4) cell_ituss_key_t2_ParamLimits

0x1c2e,	// (0x0005bbd4) cell_ituss_key_t2

0x1c5f,	// (0x0005bc05) cell_ituss_key_t3_ParamLimits

0x1c5f,	// (0x0005bc05) cell_ituss_key_t3

0x1c2e,	// (0x0005bbd4) cell_ituss_key_t4_ParamLimits

0x1c2e,	// (0x0005bbd4) cell_ituss_key_t4

0x0004,

0xff00,	// (0x00069ea6) cell_ituss_key_t_ParamLimits

0xff00,	// (0x00069ea6) cell_ituss_key_t

0x8642,	// (0x000625e8) cell_vkbss_key_3p_pane_g1

0x864a,	// (0x000625f0) cell_vkbss_key_3p_pane_g2

0x8652,	// (0x000625f8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x00069eb1) cell_vkbss_key_3p_pane_g

0x1e00,	// (0x0005bda6) bg_popup_fep_char_preview_window_cp02

0x865a,	// (0x00062600) popup_fep_char_pre_window_t1

0xdf6b,	// (0x00067f11) main_ai5_sk_pane

0x8119,	// (0x000620bf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8125,	// (0x000620cb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x813a,	// (0x000620e0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8146,	// (0x000620ec) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedd,	// (0x00069e83) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8152,	// (0x000620f8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8d5f,	// (0x00062d05) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeedd,	// (0x00068e83) main_ai5_sk_pane_g1

0x2b19,	// (0x0005cabf) popup_query_code_window_g1

0x855b,	// (0x00062501) popup_fep_vkb_icf_pane

0x857c,	// (0x00062522) popup_fep_vtchi_icf_pane

0x8671,	// (0x00062617) bg_icf_pane

0x867d,	// (0x00062623) list_vkb_icf_pane

0x868c,	// (0x00062632) bg_icf_pane_cp01

0x869f,	// (0x00062645) vtchi_icf_list_pane

0x86af,	// (0x00062655) list_vkb_icf_pane_t1_ParamLimits

0x86af,	// (0x00062655) list_vkb_icf_pane_t1

0x86c5,	// (0x0006266b) vtchi_icf_list_pane_t1_ParamLimits

0x86c5,	// (0x0006266b) vtchi_icf_list_pane_t1

0x8545,	// (0x000624eb) popup_fep_ituss_window_ParamLimits

0x857c,	// (0x00062522) popup_fep_vtchi_icf_pane_ParamLimits

0x85a2,	// (0x00062548) ituss_keypad_pane_ParamLimits

0x1b89,	// (0x0005bb2f) ituss_sks_pane

0x8671,	// (0x00062617) bg_icf_pane_ParamLimits

0x851d,	// (0x000624c3) icf_edit_indi_pane_ParamLimits

0x851d,	// (0x000624c3) icf_edit_indi_pane

0x867d,	// (0x00062623) list_vkb_icf_pane_ParamLimits

0x868c,	// (0x00062632) bg_icf_pane_cp01_ParamLimits

0x8530,	// (0x000624d6) icf_edit_indi_pane_cp01_ParamLimits

0x8530,	// (0x000624d6) icf_edit_indi_pane_cp01

0x86a7,	// (0x0006264d) vtchi_query_pane

0x73ec,	// (0x00061392) icf_edit_indi_pane_g1_ParamLimits

0x73ec,	// (0x00061392) icf_edit_indi_pane_g1

0xeee6,	// (0x00068e8c) icf_edit_indi_pane_g2_ParamLimits

0xeee6,	// (0x00068e8c) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x00069ec9) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x00069ec9) icf_edit_indi_pane_g

0xeef8,	// (0x00068e9e) icf_edit_indi_pane_t1

0x86dd,	// (0x00062683) bg_input_focus_pane_cp042

0x8c98,	// (0x00062c3e) vtchi_button_pane

0x86e6,	// (0x0006268c) vtchi_query_pane_t1

0x86f4,	// (0x0006269a) vtchi_query_pane_t2

0x8702,	// (0x000626a8) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x00069eb8) vtchi_query_pane_t

0xef0f,	// (0x00068eb5) bg_button_pane_cp13

0x8710,	// (0x000626b6) vtchi_button_pane_g1

0x1ca2,	// (0x0005bc48) ituss_sks_pane_g1

0x1cad,	// (0x0005bc53) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x00069ebf) ituss_sks_pane_g

0x8718,	// (0x000626be) ituss_sks_pane_t1

0x8726,	// (0x000626cc) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x00069ec4) ituss_sks_pane_t

0x4921,	// (0x0005e8c7) indicator_nsta_pane_cp_g1

0x4929,	// (0x0005e8cf) indicator_nsta_pane_cp_g2

0x4931,	// (0x0005e8d7) indicator_nsta_pane_cp_g3

0x4921,	// (0x0005e8c7) indicator_nsta_pane_cp_g4

0x4929,	// (0x0005e8cf) indicator_nsta_pane_cp_g5

0x4931,	// (0x0005e8d7) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x00069a61) indicator_nsta_pane_cp_g

0xda92,	// (0x00067a38) cell_graphic2_pane_t2_ParamLimits

0xda92,	// (0x00067a38) cell_graphic2_pane_t2

0x0001,

0xfdd4,	// (0x00069d7a) cell_graphic2_pane_t_ParamLimits

0xfdd4,	// (0x00069d7a) cell_graphic2_pane_t

0xdaca,	// (0x00067a70) cell_graphic2_control_pane_t1

0xa9c7,	// (0x0006496d) signal_pane_g3_ParamLimits

0xa9c7,	// (0x0006496d) signal_pane_g3

0xa9db,	// (0x00064981) signal_pane_g4_ParamLimits

0xa9db,	// (0x00064981) signal_pane_g4

0xee49,	// (0x00068def) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xee49,	// (0x00068def) cell_ai5_widget_list_row_pane_t3

0x8630,	// (0x000625d6) cell_ituss_key_pane_t1_ParamLimits

0x8630,	// (0x000625d6) cell_ituss_key_pane_t1

0x2788,	// (0x0005c72e) form_field_data_wide_pane_vc_t2_ParamLimits

0x2788,	// (0x0005c72e) form_field_data_wide_pane_vc_t2

0x279c,	// (0x0005c742) form_field_data_wide_pane_vc_t3_ParamLimits

0x279c,	// (0x0005c742) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x000697af) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x000697af) form_field_data_wide_pane_vc_t

0x45dc,	// (0x0005e582) form_field_slider_wide_pane_vc_t3_ParamLimits

0x45dc,	// (0x0005e582) form_field_slider_wide_pane_vc_t3

0x46b2,	// (0x0005e658) form_field_popup_wide_pane_vc_t2_ParamLimits

0x46b2,	// (0x0005e658) form_field_popup_wide_pane_vc_t2

0x46c9,	// (0x0005e66f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x46c9,	// (0x0005e66f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x00069a50) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x00069a50) form_field_popup_wide_pane_vc_t

0xbfc6,	// (0x00065f6c) aid_fshwr2_btn_pane_ParamLimits

0xbfd7,	// (0x00065f7d) aid_fshwr2_syb_pane_ParamLimits

0xbfe8,	// (0x00065f8e) aid_fshwr2_txt_pane_ParamLimits

0x11eb,	// (0x0005b191) fshwr2_bg_pane_ParamLimits

0xbff4,	// (0x00065f9a) fshwr2_func_candi_pane_ParamLimits

0xc015,	// (0x00065fbb) fshwr2_hwr_syb_pane_ParamLimits

0xc032,	// (0x00065fd8) fshwr2_icf_pane_ParamLimits

0x3a05,	// (0x0005d9ab) list_double_graphic_pane_vc_g4_ParamLimits

0x3a05,	// (0x0005d9ab) list_double_graphic_pane_vc_g4

0x1be8,	// (0x0005bb8e) cell_ituss_key_pane_g3_ParamLimits

0x1be8,	// (0x0005bb8e) cell_ituss_key_pane_g3

0x1c90,	// (0x0005bc36) cell_ituss_key_t5_ParamLimits

0x1c90,	// (0x0005bc36) cell_ituss_key_t5

0xee5f,	// (0x00068e05) popup_fep_vkbss_window_ParamLimits

0xdf75,	// (0x00067f1b) aid_cell_ai5_quarter

0xeef8,	// (0x00068e9e) icf_edit_indi_pane_t1_ParamLimits

0x88fc,	// (0x000628a2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x88fc,	// (0x000628a2) aid_tch_indicator_popup_pane_cp2

0x890f,	// (0x000628b5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x890f,	// (0x000628b5) aid_tch_query_popup_data_pane_cp2

0x2ac1,	// (0x0005ca67) aid_tch_query_popup_pane_ParamLimits

0x2ac1,	// (0x0005ca67) aid_tch_query_popup_pane

0x2ac1,	// (0x0005ca67) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2ac1,	// (0x0005ca67) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
