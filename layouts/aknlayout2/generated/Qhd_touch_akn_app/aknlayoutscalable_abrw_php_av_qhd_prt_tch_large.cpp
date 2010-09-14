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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004d1b6 };

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
0x7784,	// (0x0005493a) Screen

0x7790,	// (0x00054946) application_window_ParamLimits

0x7790,	// (0x00054946) application_window

0x199d,	// (0x0004eb53) screen_g1

0x459a,	// (0x00051750) area_bottom_pane_ParamLimits

0x459a,	// (0x00051750) area_bottom_pane

0x465a,	// (0x00051810) area_top_pane_ParamLimits

0x465a,	// (0x00051810) area_top_pane

0x46f8,	// (0x000518ae) main_pane_ParamLimits

0x46f8,	// (0x000518ae) main_pane

0x77a0,	// (0x00054956) misc_graphics

0x957b,	// (0x00056731) battery_pane_ParamLimits

0x957b,	// (0x00056731) battery_pane

0xa269,	// (0x0005741f) bg_status_flat_pane_g8

0xa271,	// (0x00057427) bg_status_flat_pane_g9

0x9643,	// (0x000567f9) context_pane_ParamLimits

0x9643,	// (0x000567f9) context_pane

0x9759,	// (0x0005690f) navi_pane_ParamLimits

0x9759,	// (0x0005690f) navi_pane

0x97dd,	// (0x00056993) signal_pane_ParamLimits

0x97dd,	// (0x00056993) signal_pane

0x0008,

0xf854,	// (0x0005ca0a) bg_status_flat_pane_g

0x984a,	// (0x00056a00) status_pane_g1_ParamLimits

0x984a,	// (0x00056a00) status_pane_g1

0x985e,	// (0x00056a14) status_pane_g2_ParamLimits

0x985e,	// (0x00056a14) status_pane_g2

0x986a,	// (0x00056a20) status_pane_g3_ParamLimits

0x986a,	// (0x00056a20) status_pane_g3

0x0004,

0xf780,	// (0x0005c936) status_pane_g_ParamLimits

0xf780,	// (0x0005c936) status_pane_g

0x989e,	// (0x00056a54) title_pane_ParamLimits

0x989e,	// (0x00056a54) title_pane

0x98db,	// (0x00056a91) uni_indicator_pane_ParamLimits

0x98db,	// (0x00056a91) uni_indicator_pane

0x94ab,	// (0x00056661) bg_list_pane_ParamLimits

0x94ab,	// (0x00056661) bg_list_pane

0x81b8,	// (0x0005536e) find_pane

0x94cb,	// (0x00056681) listscroll_app_pane_ParamLimits

0x94cb,	// (0x00056681) listscroll_app_pane

0x94d7,	// (0x0005668d) listscroll_form_pane

0x564e,	// (0x00052804) listscroll_gen_pane_ParamLimits

0x564e,	// (0x00052804) listscroll_gen_pane

0x5662,	// (0x00052818) listscroll_set_pane

0x86da,	// (0x00055890) main_idle_act_pane

0x91a7,	// (0x0005635d) main_idle_trad_pane

0x91a7,	// (0x0005635d) main_list_empty_pane

0x94cb,	// (0x00056681) main_midp_pane

0x94f1,	// (0x000566a7) main_pane_g1_ParamLimits

0x94f1,	// (0x000566a7) main_pane_g1

0x5678,	// (0x0005282e) popup_ai_message_window_ParamLimits

0x5678,	// (0x0005282e) popup_ai_message_window

0x5726,	// (0x000528dc) popup_fep_china_uni_window_ParamLimits

0x5726,	// (0x000528dc) popup_fep_china_uni_window

0x5782,	// (0x00052938) popup_fep_japan_candidate_window_ParamLimits

0x5782,	// (0x00052938) popup_fep_japan_candidate_window

0x57a2,	// (0x00052958) popup_fep_japan_predictive_window_ParamLimits

0x57a2,	// (0x00052958) popup_fep_japan_predictive_window

0x57d2,	// (0x00052988) popup_find_window

0x57df,	// (0x00052995) popup_grid_graphic_window_ParamLimits

0x57df,	// (0x00052995) popup_grid_graphic_window

0x580b,	// (0x000529c1) popup_large_graphic_colour_window

0x5831,	// (0x000529e7) popup_menu_window_ParamLimits

0x5831,	// (0x000529e7) popup_menu_window

0x59e9,	// (0x00052b9f) popup_note_image_window

0x59d5,	// (0x00052b8b) popup_note_wait_window_ParamLimits

0x59d5,	// (0x00052b8b) popup_note_wait_window

0x59d5,	// (0x00052b8b) popup_note_window_ParamLimits

0x59d5,	// (0x00052b8b) popup_note_window

0x5a3f,	// (0x00052bf5) popup_query_code_window_ParamLimits

0x5a3f,	// (0x00052bf5) popup_query_code_window

0x5a53,	// (0x00052c09) popup_query_data_code_window_ParamLimits

0x5a53,	// (0x00052c09) popup_query_data_code_window

0x5a70,	// (0x00052c26) popup_query_data_window_ParamLimits

0x5a70,	// (0x00052c26) popup_query_data_window

0x5a8c,	// (0x00052c42) popup_query_sat_info_window_ParamLimits

0x5a8c,	// (0x00052c42) popup_query_sat_info_window

0x5ac5,	// (0x00052c7b) popup_snote_single_graphic_window_ParamLimits

0x5ac5,	// (0x00052c7b) popup_snote_single_graphic_window

0x5ac5,	// (0x00052c7b) popup_snote_single_text_window_ParamLimits

0x5ac5,	// (0x00052c7b) popup_snote_single_text_window

0x5ada,	// (0x00052c90) popup_sub_window_general

0x5c0a,	// (0x00052dc0) popup_window_general_ParamLimits

0x5c0a,	// (0x00052dc0) popup_window_general

0x94ff,	// (0x000566b5) power_save_pane

0x54dc,	// (0x00052692) control_pane_g1_ParamLimits

0x54dc,	// (0x00052692) control_pane_g1

0x5503,	// (0x000526b9) control_pane_g2_ParamLimits

0x5503,	// (0x000526b9) control_pane_g2

0x946e,	// (0x00056624) control_pane_g3_ParamLimits

0x946e,	// (0x00056624) control_pane_g3

0x0007,

0xf768,	// (0x0005c91e) control_pane_g_ParamLimits

0xf768,	// (0x0005c91e) control_pane_g

0x554d,	// (0x00052703) control_pane_t1_ParamLimits

0x554d,	// (0x00052703) control_pane_t1

0x55a3,	// (0x00052759) control_pane_t2_ParamLimits

0x55a3,	// (0x00052759) control_pane_t2

0x0002,

0xf779,	// (0x0005c92f) control_pane_t_ParamLimits

0xf779,	// (0x0005c92f) control_pane_t

0x9393,	// (0x00056549) navi_navi_volume_pane_cp1

0x939b,	// (0x00056551) status_small_icon_pane

0x93a3,	// (0x00056559) status_small_pane_g1_ParamLimits

0x93a3,	// (0x00056559) status_small_pane_g1

0x93d7,	// (0x0005658d) status_small_pane_g2_ParamLimits

0x93d7,	// (0x0005658d) status_small_pane_g2

0x93e3,	// (0x00056599) status_small_pane_g3_ParamLimits

0x93e3,	// (0x00056599) status_small_pane_g3

0x93ef,	// (0x000565a5) status_small_pane_g4_ParamLimits

0x93ef,	// (0x000565a5) status_small_pane_g4

0x93fb,	// (0x000565b1) status_small_pane_g5_ParamLimits

0x93fb,	// (0x000565b1) status_small_pane_g5

0x9409,	// (0x000565bf) status_small_pane_g6_ParamLimits

0x9409,	// (0x000565bf) status_small_pane_g6

0x0007,

0xf757,	// (0x0005c90d) status_small_pane_g_ParamLimits

0xf757,	// (0x0005c90d) status_small_pane_g

0x9438,	// (0x000565ee) status_small_pane_t1

0x945a,	// (0x00056610) status_small_wait_pane_ParamLimits

0x945a,	// (0x00056610) status_small_wait_pane

0x8c19,	// (0x00055dcf) aid_levels_signal_ParamLimits

0x8c19,	// (0x00055dcf) aid_levels_signal

0x8c2b,	// (0x00055de1) signal_pane_g1_ParamLimits

0x8c2b,	// (0x00055de1) signal_pane_g1

0x8c40,	// (0x00055df6) signal_pane_g2_ParamLimits

0x8c40,	// (0x00055df6) signal_pane_g2

0x0003,

0xf6e8,	// (0x0005c89e) signal_pane_g_ParamLimits

0xf6e8,	// (0x0005c89e) signal_pane_g

0x8c7b,	// (0x00055e31) context_pane_g1

0x77aa,	// (0x00054960) title_pane_g1

0x77e0,	// (0x00054996) title_pane_t1

0x7848,	// (0x000549fe) title_pane_t2

0x786e,	// (0x00054a24) title_pane_t3

0x0002,

0xf532,	// (0x0005c6e8) title_pane_t

0x98f3,	// (0x00056aa9) aid_levels_battery_ParamLimits

0x98f3,	// (0x00056aa9) aid_levels_battery

0x9907,	// (0x00056abd) battery_pane_g1_ParamLimits

0x9907,	// (0x00056abd) battery_pane_g1

0x991d,	// (0x00056ad3) battery_pane_g2_ParamLimits

0x991d,	// (0x00056ad3) battery_pane_g2

0x0001,

0xf78b,	// (0x0005c941) battery_pane_g_ParamLimits

0xf78b,	// (0x0005c941) battery_pane_g

0xab9f,	// (0x00057d55) uni_indicator_pane_g1

0xabb5,	// (0x00057d6b) uni_indicator_pane_g2

0xabcb,	// (0x00057d81) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0005cab2) uni_indicator_pane_g

0x901c,	// (0x000561d2) navi_icon_pane_ParamLimits

0x901c,	// (0x000561d2) navi_icon_pane

0x8f5a,	// (0x00056110) navi_midp_pane

0x9038,	// (0x000561ee) navi_navi_pane

0x9042,	// (0x000561f8) navi_text_pane_ParamLimits

0x9042,	// (0x000561f8) navi_text_pane

0x199d,	// (0x0004eb53) status_small_wait_pane_g1

0x7cc3,	// (0x00054e79) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0005caad) status_small_wait_pane_g

0xa8c4,	// (0x00057a7a) navi_navi_icon_text_pane

0xa8cc,	// (0x00057a82) navi_navi_pane_g1_ParamLimits

0xa8cc,	// (0x00057a82) navi_navi_pane_g1

0xa8de,	// (0x00057a94) navi_navi_pane_g2_ParamLimits

0xa8de,	// (0x00057a94) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0005ca7b) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0005ca7b) navi_navi_pane_g

0xa8f0,	// (0x00057aa6) navi_navi_tabs_pane

0xa8f9,	// (0x00057aaf) navi_navi_text_pane

0xa8c4,	// (0x00057a7a) navi_navi_volume_pane

0xa8a0,	// (0x00057a56) navi_text_pane_t1

0xa894,	// (0x00057a4a) navi_icon_pane_g1

0xa7e7,	// (0x0005799d) navi_navi_text_pane_t1

0x5fa5,	// (0x0005315b) navi_navi_volume_pane_g1

0x5fad,	// (0x00053163) volume_small_pane

0xa74d,	// (0x00057903) navi_navi_icon_text_pane_g1

0xa755,	// (0x0005790b) navi_navi_icon_text_pane_t1

0x9038,	// (0x000561ee) navi_tabs_2_long_pane

0x9038,	// (0x000561ee) navi_tabs_2_pane

0x9038,	// (0x000561ee) navi_tabs_3_long_pane

0x9038,	// (0x000561ee) navi_tabs_3_pane

0x9038,	// (0x000561ee) navi_tabs_4_pane

0x5f85,	// (0x0005313b) tabs_2_active_pane_ParamLimits

0x5f85,	// (0x0005313b) tabs_2_active_pane

0x5f95,	// (0x0005314b) tabs_2_passive_pane_ParamLimits

0x5f95,	// (0x0005314b) tabs_2_passive_pane

0x5f53,	// (0x00053109) tabs_3_active_pane_ParamLimits

0x5f53,	// (0x00053109) tabs_3_active_pane

0x5f63,	// (0x00053119) tabs_3_passive_pane_ParamLimits

0x5f63,	// (0x00053119) tabs_3_passive_pane

0x5f74,	// (0x0005312a) tabs_3_passive_pane_cp_ParamLimits

0x5f74,	// (0x0005312a) tabs_3_passive_pane_cp

0x5f0f,	// (0x000530c5) tabs_4_active_pane_ParamLimits

0x5f0f,	// (0x000530c5) tabs_4_active_pane

0x5f20,	// (0x000530d6) tabs_4_passive_pane_ParamLimits

0x5f20,	// (0x000530d6) tabs_4_passive_pane

0x5f31,	// (0x000530e7) tabs_4_passive_pane_cp_ParamLimits

0x5f31,	// (0x000530e7) tabs_4_passive_pane_cp

0x5f42,	// (0x000530f8) tabs_4_passive_pane_cp2_ParamLimits

0x5f42,	// (0x000530f8) tabs_4_passive_pane_cp2

0x5eeb,	// (0x000530a1) tabs_2_long_active_pane_ParamLimits

0x5eeb,	// (0x000530a1) tabs_2_long_active_pane

0x5efd,	// (0x000530b3) tabs_2_long_passive_pane_ParamLimits

0x5efd,	// (0x000530b3) tabs_2_long_passive_pane

0x5eac,	// (0x00053062) tabs_3_long_active_pane_ParamLimits

0x5eac,	// (0x00053062) tabs_3_long_active_pane

0x5ebf,	// (0x00053075) tabs_3_long_passive_pane_ParamLimits

0x5ebf,	// (0x00053075) tabs_3_long_passive_pane

0x5ed8,	// (0x0005308e) tabs_3_long_passive_pane_cp_ParamLimits

0x5ed8,	// (0x0005308e) tabs_3_long_passive_pane_cp

0x5e52,	// (0x00053008) volume_small_pane_g1

0x5e5b,	// (0x00053011) volume_small_pane_g2

0x5e64,	// (0x0005301a) volume_small_pane_g3

0x5e6d,	// (0x00053023) volume_small_pane_g4

0x5e76,	// (0x0005302c) volume_small_pane_g5

0x5e7f,	// (0x00053035) volume_small_pane_g6

0x5e88,	// (0x0005303e) volume_small_pane_g7

0x5e91,	// (0x00053047) volume_small_pane_g8

0x5e9a,	// (0x00053050) volume_small_pane_g9

0x5ea3,	// (0x00053059) volume_small_pane_g10

0x0009,

0xf891,	// (0x0005ca47) volume_small_pane_g

0x7880,	// (0x00054a36) bg_active_tab_pane_cp2_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp2

0x788e,	// (0x00054a44) tabs_3_active_pane_g1

0x7896,	// (0x00054a4c) tabs_3_active_pane_t1

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp2_ParamLimits

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp2

0x788e,	// (0x00054a44) tabs_3_passive_pane_g1

0x7896,	// (0x00054a4c) tabs_3_passive_pane_t1

0x7880,	// (0x00054a36) bg_active_tab_pane_cp3_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp3

0x78a8,	// (0x00054a5e) tabs_4_active_pane_g1

0x78b0,	// (0x00054a66) tabs_4_active_pane_t1

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp3_ParamLimits

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp3

0x78a8,	// (0x00054a5e) tabs_4_1_passive_pane_g1

0x78b0,	// (0x00054a66) tabs_4_1_passive_pane_t1

0x94cb,	// (0x00056681) list_highlight_pane_cp2

0xae12,	// (0x00057fc8) list_set_pane_ParamLimits

0xae12,	// (0x00057fc8) list_set_pane

0xaeb8,	// (0x0005806e) main_pane_set_t1_ParamLimits

0xaeb8,	// (0x0005806e) main_pane_set_t1

0xaed8,	// (0x0005808e) main_pane_set_t2_ParamLimits

0xaed8,	// (0x0005808e) main_pane_set_t2

0xaeec,	// (0x000580a2) main_pane_set_t3_ParamLimits

0xaeec,	// (0x000580a2) main_pane_set_t3

0xaefe,	// (0x000580b4) main_pane_set_t4_ParamLimits

0xaefe,	// (0x000580b4) main_pane_set_t4

0x0003,

0xf961,	// (0x0005cb17) main_pane_set_t_ParamLimits

0xf961,	// (0x0005cb17) main_pane_set_t

0xaf10,	// (0x000580c6) setting_code_pane

0xaf1c,	// (0x000580d2) setting_slider_graphic_pane

0xaf1c,	// (0x000580d2) setting_slider_pane

0xaf1c,	// (0x000580d2) setting_text_pane

0xaf1c,	// (0x000580d2) setting_volume_pane

0x4947,	// (0x00051afd) volume_set_pane

0x7880,	// (0x00054a36) bg_set_opt_pane_cp

0x494f,	// (0x00051b05) setting_slider_pane_t1

0x4968,	// (0x00051b1e) setting_slider_pane_t2

0x4982,	// (0x00051b38) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005c6ef) setting_slider_pane_t

0x499a,	// (0x00051b50) slider_set_pane

0x77a0,	// (0x00054956) bg_set_opt_pane_cp2

0x78c2,	// (0x00054a78) setting_slider_graphic_pane_g1

0x49b0,	// (0x00051b66) setting_slider_graphic_pane_t1

0x49c0,	// (0x00051b76) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005c6f6) setting_slider_graphic_pane_t

0x49d0,	// (0x00051b86) slider_set_pane_cp

0x77a0,	// (0x00054956) input_focus_pane_cp1

0xadd1,	// (0x00057f87) list_set_text_pane

0x199d,	// (0x0004eb53) setting_text_pane_g1

0x77a0,	// (0x00054956) input_focus_pane_cp2

0x199d,	// (0x0004eb53) setting_code_pane_g1

0x78cb,	// (0x00054a81) setting_code_pane_t1

0x38bf,	// (0x00050a75) set_text_pane_t1_ParamLimits

0x38bf,	// (0x00050a75) set_text_pane_t1

0x853e,	// (0x000556f4) set_opt_bg_pane_g1

0x8546,	// (0x000556fc) set_opt_bg_pane_g2

0xadab,	// (0x00057f61) set_opt_bg_pane_g3

0x8556,	// (0x0005570c) set_opt_bg_pane_g4

0x855e,	// (0x00055714) set_opt_bg_pane_g5

0x8566,	// (0x0005571c) set_opt_bg_pane_g6

0xadb5,	// (0x00057f6b) set_opt_bg_pane_g7

0xadbd,	// (0x00057f73) set_opt_bg_pane_g8

0xadc7,	// (0x00057f7d) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0005cb04) set_opt_bg_pane_g

0xad9e,	// (0x00057f54) slider_set_pane_g1

0x602c,	// (0x000531e2) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0005caf5) slider_set_pane_g

0x5fb6,	// (0x0005316c) volume_set_pane_g1

0x5fbe,	// (0x00053174) volume_set_pane_g2

0x5fc6,	// (0x0005317c) volume_set_pane_g3

0x5fce,	// (0x00053184) volume_set_pane_g4

0x5fd6,	// (0x0005318c) volume_set_pane_g5

0x5fde,	// (0x00053194) volume_set_pane_g6

0x5fe6,	// (0x0005319c) volume_set_pane_g7

0x5fee,	// (0x000531a4) volume_set_pane_g8

0x5ff6,	// (0x000531ac) volume_set_pane_g9

0x5ffe,	// (0x000531b4) volume_set_pane_g10

0x0009,

0xf917,	// (0x0005cacd) volume_set_pane_g

0x78d9,	// (0x00054a8f) indicator_pane_ParamLimits

0x78d9,	// (0x00054a8f) indicator_pane

0x78e5,	// (0x00054a9b) main_idle_pane_g2_ParamLimits

0x78e5,	// (0x00054a9b) main_idle_pane_g2

0x790d,	// (0x00054ac3) main_pane_idle_g1_ParamLimits

0x790d,	// (0x00054ac3) main_pane_idle_g1

0x791a,	// (0x00054ad0) popup_clock_digital_analogue_window_ParamLimits

0x791a,	// (0x00054ad0) popup_clock_digital_analogue_window

0x7931,	// (0x00054ae7) soft_indicator_pane_ParamLimits

0x7931,	// (0x00054ae7) soft_indicator_pane

0x793d,	// (0x00054af3) wallpaper_pane_ParamLimits

0x793d,	// (0x00054af3) wallpaper_pane

0x199d,	// (0x0004eb53) wallpaper_pane_g1

0x7951,	// (0x00054b07) indicator_pane_g1_ParamLimits

0x7951,	// (0x00054b07) indicator_pane_g1

0xb1ca,	// (0x00058380) navi_navi_icon_text_pane_srt_g1

0x796c,	// (0x00054b22) soft_indicator_pane_t1

0x7986,	// (0x00054b3c) aid_ps_area_pane

0x7997,	// (0x00054b4d) aid_ps_clock_pane

0x79a5,	// (0x00054b5b) aid_ps_indicator_pane

0x79b1,	// (0x00054b67) indicator_ps_pane_ParamLimits

0x79b1,	// (0x00054b67) indicator_ps_pane

0x79c0,	// (0x00054b76) power_save_pane_g1_ParamLimits

0x79c0,	// (0x00054b76) power_save_pane_g1

0x79cc,	// (0x00054b82) power_save_pane_g2_ParamLimits

0x79cc,	// (0x00054b82) power_save_pane_g2

0x454e,	// (0x00051704) aid_navinavi_width_pane

0x7986,	// (0x00054b3c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005c6fb) power_save_pane_g_ParamLimits

0xf545,	// (0x0005c6fb) power_save_pane_g

0x79da,	// (0x00054b90) power_save_pane_t1_ParamLimits

0x79da,	// (0x00054b90) power_save_pane_t1

0x7997,	// (0x00054b4d) aid_ps_clock_pane_ParamLimits

0x79a5,	// (0x00054b5b) aid_ps_indicator_pane_ParamLimits

0x79ec,	// (0x00054ba2) power_save_pane_t4_ParamLimits

0x79ec,	// (0x00054ba2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005c700) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005c700) power_save_pane_t

0x7a16,	// (0x00054bcc) power_save_t3_ParamLimits

0x7a16,	// (0x00054bcc) power_save_t3

0x7a01,	// (0x00054bb7) power_save_t2_ParamLimits

0x7a01,	// (0x00054bb7) power_save_t2

0x7a2b,	// (0x00054be1) indicator_ps_pane_g1

0x7a34,	// (0x00054bea) ai_gene_pane_ParamLimits

0x7a34,	// (0x00054bea) ai_gene_pane

0x7a40,	// (0x00054bf6) ai_links_pane_ParamLimits

0x7a40,	// (0x00054bf6) ai_links_pane

0x7a4c,	// (0x00054c02) indicator_pane_cp1_ParamLimits

0x7a4c,	// (0x00054c02) indicator_pane_cp1

0x7a58,	// (0x00054c0e) main_pane_idle_g1_cp_ParamLimits

0x7a58,	// (0x00054c0e) main_pane_idle_g1_cp

0x7a64,	// (0x00054c1a) popup_ai_links_title_window

0x7a6d,	// (0x00054c23) soft_indicator_pane_cp1_ParamLimits

0x7a6d,	// (0x00054c23) soft_indicator_pane_cp1

0xab8d,	// (0x00057d43) ai_links_pane_g1

0xab96,	// (0x00057d4c) grid_ai_links_pane

0xab70,	// (0x00057d26) ai_gene_pane_1

0xab7b,	// (0x00057d31) ai_gene_pane_2

0xab84,	// (0x00057d3a) list_highlight_pane_cp4

0xab54,	// (0x00057d0a) cell_ai_link_pane_ParamLimits

0xab54,	// (0x00057d0a) cell_ai_link_pane

0xab4c,	// (0x00057d02) cell_ai_link_pane_g1

0x7cc3,	// (0x00054e79) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0005caa8) cell_ai_link_pane_g

0x77a0,	// (0x00054956) grid_highlight_cp2

0x77a0,	// (0x00054956) bg_popup_sub_pane_cp1

0x7a87,	// (0x00054c3d) popup_ai_links_title_window_t1

0xaa9a,	// (0x00057c50) ai_gene_pane_1_g1_ParamLimits

0xaa9a,	// (0x00057c50) ai_gene_pane_1_g1

0xaaa6,	// (0x00057c5c) ai_gene_pane_1_g2_ParamLimits

0xaaa6,	// (0x00057c5c) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0005ca9e) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0005ca9e) ai_gene_pane_1_g

0xaab3,	// (0x00057c69) ai_gene_pane_1_t1_ParamLimits

0xaab3,	// (0x00057c69) ai_gene_pane_1_t1

0xaae7,	// (0x00057c9d) grid_ai_soft_ind_pane

0xaa85,	// (0x00057c3b) ai_gene_pane_2_t1_ParamLimits

0xaa85,	// (0x00057c3b) ai_gene_pane_2_t1

0x7a96,	// (0x00054c4c) main_pane_empty_t1_ParamLimits

0x7a96,	// (0x00054c4c) main_pane_empty_t1

0x7aae,	// (0x00054c64) main_pane_empty_t2_ParamLimits

0x7aae,	// (0x00054c64) main_pane_empty_t2

0x7ac3,	// (0x00054c79) main_pane_empty_t3_ParamLimits

0x7ac3,	// (0x00054c79) main_pane_empty_t3

0x7ad5,	// (0x00054c8b) main_pane_empty_t4_ParamLimits

0x7ad5,	// (0x00054c8b) main_pane_empty_t4

0x7ae7,	// (0x00054c9d) main_pane_empty_t5_ParamLimits

0x7ae7,	// (0x00054c9d) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005c705) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005c705) main_pane_empty_t

0x8605,	// (0x000557bb) bg_popup_window_pane_ParamLimits

0x8605,	// (0x000557bb) bg_popup_window_pane

0xa7f5,	// (0x000579ab) find_popup_pane_cp2_ParamLimits

0xa7f5,	// (0x000579ab) find_popup_pane_cp2

0xa801,	// (0x000579b7) heading_pane_ParamLimits

0xa801,	// (0x000579b7) heading_pane

0x77a0,	// (0x00054956) bg_popup_sub_pane

0xa76f,	// (0x00057925) bg_popup_window_pane_g1_ParamLimits

0xa76f,	// (0x00057925) bg_popup_window_pane_g1

0xa77b,	// (0x00057931) bg_popup_window_pane_g2_ParamLimits

0xa77b,	// (0x00057931) bg_popup_window_pane_g2

0xa787,	// (0x0005793d) bg_popup_window_pane_g3_ParamLimits

0xa787,	// (0x0005793d) bg_popup_window_pane_g3

0xa793,	// (0x00057949) bg_popup_window_pane_g4_ParamLimits

0xa793,	// (0x00057949) bg_popup_window_pane_g4

0xa79f,	// (0x00057955) bg_popup_window_pane_g5_ParamLimits

0xa79f,	// (0x00057955) bg_popup_window_pane_g5

0xa7ab,	// (0x00057961) bg_popup_window_pane_g6_ParamLimits

0xa7ab,	// (0x00057961) bg_popup_window_pane_g6

0xa7b7,	// (0x0005796d) bg_popup_window_pane_g7_ParamLimits

0xa7b7,	// (0x0005796d) bg_popup_window_pane_g7

0xa7c3,	// (0x00057979) bg_popup_window_pane_g8_ParamLimits

0xa7c3,	// (0x00057979) bg_popup_window_pane_g8

0xa7cf,	// (0x00057985) bg_popup_window_pane_g9_ParamLimits

0xa7cf,	// (0x00057985) bg_popup_window_pane_g9

0xa7db,	// (0x00057991) bg_popup_window_pane_g10_ParamLimits

0xa7db,	// (0x00057991) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0005ca66) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0005ca66) bg_popup_window_pane_g

0xa704,	// (0x000578ba) bg_popup_heading_pane_ParamLimits

0xa704,	// (0x000578ba) bg_popup_heading_pane

0x6131,	// (0x000532e7) tabs_4_passive_pane_cp_srt_ParamLimits

0x6131,	// (0x000532e7) tabs_4_passive_pane_cp_srt

0x6143,	// (0x000532f9) tabs_4_passive_pane_srt_ParamLimits

0xa718,	// (0x000578ce) heading_pane_g2

0x6143,	// (0x000532f9) tabs_4_passive_pane_srt

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp3_srt

0xa720,	// (0x000578d6) heading_pane_t1_ParamLimits

0xa720,	// (0x000578d6) heading_pane_t1

0xa737,	// (0x000578ed) heading_pane_t2_ParamLimits

0xa737,	// (0x000578ed) heading_pane_t2

0x0001,

0xf8ab,	// (0x0005ca61) heading_pane_t_ParamLimits

0xf8ab,	// (0x0005ca61) heading_pane_t

0xa231,	// (0x000573e7) bg_popup_heading_pane_g1

0xa2e0,	// (0x00057496) bg_popup_heading_pane_g2

0xa2ea,	// (0x000574a0) bg_popup_heading_pane_g3

0xa2f4,	// (0x000574aa) bg_popup_heading_pane_g4

0xa2fe,	// (0x000574b4) bg_popup_heading_pane_g5

0xa308,	// (0x000574be) bg_popup_heading_pane_g6

0xa310,	// (0x000574c6) bg_popup_heading_pane_g7

0xa318,	// (0x000574ce) bg_popup_heading_pane_g8

0xa322,	// (0x000574d8) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0005ca1d) bg_popup_heading_pane_g

0x99f5,	// (0x00056bab) bg_popup_sub_pane_g1

0x9a05,	// (0x00056bbb) bg_popup_sub_pane_g2

0x99fd,	// (0x00056bb3) bg_popup_sub_pane_g3

0x9a15,	// (0x00056bcb) bg_popup_sub_pane_g4

0x9a0d,	// (0x00056bc3) bg_popup_sub_pane_g5

0x9a1d,	// (0x00056bd3) bg_popup_sub_pane_g6

0x9a25,	// (0x00056bdb) bg_popup_sub_pane_g7

0x9a35,	// (0x00056beb) bg_popup_sub_pane_g8

0x9a2d,	// (0x00056be3) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005c9f7) bg_popup_sub_pane_g

0x7afb,	// (0x00054cb1) bg_popup_window_pane_cp5_ParamLimits

0x7afb,	// (0x00054cb1) bg_popup_window_pane_cp5

0x7b17,	// (0x00054ccd) popup_note_window_g1_ParamLimits

0x7b17,	// (0x00054ccd) popup_note_window_g1

0x7b23,	// (0x00054cd9) popup_note_window_t1_ParamLimits

0x7b23,	// (0x00054cd9) popup_note_window_t1

0x7b39,	// (0x00054cef) popup_note_window_t2_ParamLimits

0x7b39,	// (0x00054cef) popup_note_window_t2

0x7b4f,	// (0x00054d05) popup_note_window_t3_ParamLimits

0x7b4f,	// (0x00054d05) popup_note_window_t3

0x7b65,	// (0x00054d1b) popup_note_window_t4_ParamLimits

0x7b65,	// (0x00054d1b) popup_note_window_t4

0x7b8d,	// (0x00054d43) popup_note_window_t5_ParamLimits

0x7b8d,	// (0x00054d43) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005c710) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005c710) popup_note_window_t

0x7bd7,	// (0x00054d8d) bg_popup_window_pane_cp6_ParamLimits

0x7bd7,	// (0x00054d8d) bg_popup_window_pane_cp6

0xa1ad,	// (0x00057363) popup_note_image_window_g1_ParamLimits

0xa1ad,	// (0x00057363) popup_note_image_window_g1

0xa1b9,	// (0x0005736f) popup_note_image_window_g2_ParamLimits

0xa1b9,	// (0x0005736f) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0005c9eb) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0005c9eb) popup_note_image_window_g

0xa1d2,	// (0x00057388) popup_note_image_window_t1_ParamLimits

0xa1d2,	// (0x00057388) popup_note_image_window_t1

0xa1eb,	// (0x000573a1) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x000573a1) popup_note_image_window_t2

0xa204,	// (0x000573ba) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x000573ba) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0005c9f0) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0005c9f0) popup_note_image_window_t

0xa06e,	// (0x00057224) bg_popup_window_pane_cp7_ParamLimits

0xa06e,	// (0x00057224) bg_popup_window_pane_cp7

0xa09e,	// (0x00057254) popup_note_wait_window_g1_ParamLimits

0xa09e,	// (0x00057254) popup_note_wait_window_g1

0xa0aa,	// (0x00057260) popup_note_wait_window_g2_ParamLimits

0xa0aa,	// (0x00057260) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0005c9d9) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0005c9d9) popup_note_wait_window_g

0xa0c2,	// (0x00057278) popup_note_wait_window_t1_ParamLimits

0xa0c2,	// (0x00057278) popup_note_wait_window_t1

0xa0e9,	// (0x0005729f) popup_note_wait_window_t2_ParamLimits

0xa0e9,	// (0x0005729f) popup_note_wait_window_t2

0xa106,	// (0x000572bc) popup_note_wait_window_t3_ParamLimits

0xa106,	// (0x000572bc) popup_note_wait_window_t3

0xa119,	// (0x000572cf) popup_note_wait_window_t4_ParamLimits

0xa119,	// (0x000572cf) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0005c9e0) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0005c9e0) popup_note_wait_window_t

0xa13e,	// (0x000572f4) wait_bar_pane_ParamLimits

0xa13e,	// (0x000572f4) wait_bar_pane

0x77a0,	// (0x00054956) wait_anim_pane

0x77a0,	// (0x00054956) wait_border_pane

0x199d,	// (0x0004eb53) wait_anim_pane_g1

0x199d,	// (0x0004eb53) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0005c899) wait_anim_pane_g

0xa012,	// (0x000571c8) wait_border_pane_g1

0xa01d,	// (0x000571d3) wait_border_pane_g2

0xa026,	// (0x000571dc) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0005c9d2) wait_border_pane_g

0x9e71,	// (0x00057027) bg_popup_window_pane_cp16_ParamLimits

0x9e71,	// (0x00057027) bg_popup_window_pane_cp16

0x9f71,	// (0x00057127) indicator_popup_pane_cp4_ParamLimits

0x9f71,	// (0x00057127) indicator_popup_pane_cp4

0x9f85,	// (0x0005713b) popup_query_data_window_t1_ParamLimits

0x9f85,	// (0x0005713b) popup_query_data_window_t1

0x9f97,	// (0x0005714d) popup_query_data_window_t2_ParamLimits

0x9f97,	// (0x0005714d) popup_query_data_window_t2

0x9fb0,	// (0x00057166) popup_query_data_window_t3_ParamLimits

0x9fb0,	// (0x00057166) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0005c9cb) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0005c9cb) popup_query_data_window_t

0x9fd6,	// (0x0005718c) query_popup_data_pane_ParamLimits

0x9fd6,	// (0x0005718c) query_popup_data_pane

0x9fea,	// (0x000571a0) query_popup_data_pane_cp1_ParamLimits

0x9fea,	// (0x000571a0) query_popup_data_pane_cp1

0x9e71,	// (0x00057027) bg_popup_window_pane_cp10_ParamLimits

0x9e71,	// (0x00057027) bg_popup_window_pane_cp10

0x9ea3,	// (0x00057059) indicator_popup_pane_ParamLimits

0x9ea3,	// (0x00057059) indicator_popup_pane

0x9ec5,	// (0x0005707b) popup_query_code_window_t1_ParamLimits

0x9ec5,	// (0x0005707b) popup_query_code_window_t1

0x9edf,	// (0x00057095) popup_query_code_window_t2_ParamLimits

0x9edf,	// (0x00057095) popup_query_code_window_t2

0x9f28,	// (0x000570de) popup_query_code_window_t3_ParamLimits

0x9f28,	// (0x000570de) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0005c9c4) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0005c9c4) popup_query_code_window_t

0x9f57,	// (0x0005710d) query_popup_pane_ParamLimits

0x9f57,	// (0x0005710d) query_popup_pane

0x7bd7,	// (0x00054d8d) bg_popup_window_pane_cp15_ParamLimits

0x7bd7,	// (0x00054d8d) bg_popup_window_pane_cp15

0x7bf5,	// (0x00054dab) indicator_popup_pane_cp1_ParamLimits

0x7bf5,	// (0x00054dab) indicator_popup_pane_cp1

0x7c08,	// (0x00054dbe) indicator_popup_pane_cp2_ParamLimits

0x7c08,	// (0x00054dbe) indicator_popup_pane_cp2

0x7c1b,	// (0x00054dd1) popup_query_data_code_window_g1_ParamLimits

0x7c1b,	// (0x00054dd1) popup_query_data_code_window_g1

0x7c2e,	// (0x00054de4) popup_query_data_code_window_t1_ParamLimits

0x7c2e,	// (0x00054de4) popup_query_data_code_window_t1

0x7c40,	// (0x00054df6) popup_query_data_code_window_t2_ParamLimits

0x7c40,	// (0x00054df6) popup_query_data_code_window_t2

0x7c52,	// (0x00054e08) popup_query_data_code_window_t3_ParamLimits

0x7c52,	// (0x00054e08) popup_query_data_code_window_t3

0x7c68,	// (0x00054e1e) popup_query_data_code_window_t4_ParamLimits

0x7c68,	// (0x00054e1e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005c71b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005c71b) popup_query_data_code_window_t

0x5c96,	// (0x00052e4c) list_single_midp_graphic_pane_g3

0x7c80,	// (0x00054e36) query_popup_data_pane_cp2_ParamLimits

0x7c93,	// (0x00054e49) query_popup_pane_cp2_ParamLimits

0x7c93,	// (0x00054e49) query_popup_pane_cp2

0x77a0,	// (0x00054956) bg_popup_window_pane_cp11

0x9e55,	// (0x0005700b) heading_pane_cp5

0x9e5d,	// (0x00057013) listscroll_popup_info_pane

0x77a0,	// (0x00054956) input_focus_pane_cp3

0x7ca6,	// (0x00054e5c) query_popup_pane_t1

0x7cb4,	// (0x00054e6a) list_popup_info_pane_ParamLimits

0x7cb4,	// (0x00054e6a) list_popup_info_pane

0x7cc3,	// (0x00054e79) listscroll_popup_info_pane_g1

0x7ccb,	// (0x00054e81) scroll_pane_cp7

0x7cd5,	// (0x00054e8b) popup_info_list_pane_t1_ParamLimits

0x7cd5,	// (0x00054e8b) popup_info_list_pane_t1

0x7cef,	// (0x00054ea5) popup_info_list_pane_t2_ParamLimits

0x7cef,	// (0x00054ea5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005c724) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005c724) popup_info_list_pane_t

0x77a0,	// (0x00054956) bg_popup_window_pane_cp12

0xb1e4,	// (0x0005839a) find_popup_pane

0x7880,	// (0x00054a36) bg_popup_window_pane_cp3

0x7d09,	// (0x00054ebf) heading_pane_cp3

0x7d18,	// (0x00054ece) listscroll_popup_graphic_pane

0x77a0,	// (0x00054956) bg_popup_window_pane_cp4

0x7d78,	// (0x00054f2e) heading_pane_cp4

0x7d82,	// (0x00054f38) listscroll_popup_colour_pane

0x7d8a,	// (0x00054f40) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d8a,	// (0x00054f40) cell_large_graphic_colour_none_popup_pane

0x7d9e,	// (0x00054f54) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d9e,	// (0x00054f54) grid_large_graphic_colour_popup_pane

0x7dc2,	// (0x00054f78) listscroll_popup_colour_pane_g1_ParamLimits

0x7dc2,	// (0x00054f78) listscroll_popup_colour_pane_g1

0x7dd9,	// (0x00054f8f) listscroll_popup_colour_pane_g2_ParamLimits

0x7dd9,	// (0x00054f8f) listscroll_popup_colour_pane_g2

0x7df0,	// (0x00054fa6) listscroll_popup_colour_pane_g3_ParamLimits

0x7df0,	// (0x00054fa6) listscroll_popup_colour_pane_g3

0x7e00,	// (0x00054fb6) listscroll_popup_colour_pane_g4_ParamLimits

0x7e00,	// (0x00054fb6) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005c729) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005c729) listscroll_popup_colour_pane_g

0x7e10,	// (0x00054fc6) scroll_pane_cp6_ParamLimits

0x7e10,	// (0x00054fc6) scroll_pane_cp6

0x7e22,	// (0x00054fd8) cell_large_graphic_colour_popup_pane_ParamLimits

0x7e22,	// (0x00054fd8) cell_large_graphic_colour_popup_pane

0x7e41,	// (0x00054ff7) cell_large_graphic_colour_none_popup_pane_t1

0x77a0,	// (0x00054956) grid_highlight_pane_cp5

0x7e50,	// (0x00055006) cell_large_graphic_colour_popup_pane_g1

0x7e58,	// (0x0005500e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005c732) cell_large_graphic_colour_popup_pane_g

0x7e60,	// (0x00055016) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e69,	// (0x0005501f) grid_highlight_pane_cp4

0x7e71,	// (0x00055027) bg_popup_window_pane_cp8_ParamLimits

0x7e71,	// (0x00055027) bg_popup_window_pane_cp8

0x7e8c,	// (0x00055042) popup_snote_single_text_window_g1_ParamLimits

0x7e8c,	// (0x00055042) popup_snote_single_text_window_g1

0x7e9e,	// (0x00055054) popup_snote_single_text_window_t1_ParamLimits

0x7e9e,	// (0x00055054) popup_snote_single_text_window_t1

0x7eb1,	// (0x00055067) popup_snote_single_text_window_t2_ParamLimits

0x7eb1,	// (0x00055067) popup_snote_single_text_window_t2

0x7ec4,	// (0x0005507a) popup_snote_single_text_window_t3_ParamLimits

0x7ec4,	// (0x0005507a) popup_snote_single_text_window_t3

0x7efd,	// (0x000550b3) popup_snote_single_text_window_t4_ParamLimits

0x7efd,	// (0x000550b3) popup_snote_single_text_window_t4

0x7f31,	// (0x000550e7) popup_snote_single_text_window_t5_ParamLimits

0x7f31,	// (0x000550e7) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005c737) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005c737) popup_snote_single_text_window_t

0x7f60,	// (0x00055116) bg_popup_window_pane_cp9_ParamLimits

0x7f60,	// (0x00055116) bg_popup_window_pane_cp9

0x7e8c,	// (0x00055042) popup_snote_single_graphic_window_g1_ParamLimits

0x7e8c,	// (0x00055042) popup_snote_single_graphic_window_g1

0x7f6e,	// (0x00055124) popup_snote_single_graphic_window_g2_ParamLimits

0x7f6e,	// (0x00055124) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005c742) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005c742) popup_snote_single_graphic_window_g

0x7f7a,	// (0x00055130) popup_snote_single_graphic_window_t1_ParamLimits

0x7f7a,	// (0x00055130) popup_snote_single_graphic_window_t1

0x7f8d,	// (0x00055143) popup_snote_single_graphic_window_t2_ParamLimits

0x7f8d,	// (0x00055143) popup_snote_single_graphic_window_t2

0x7fa0,	// (0x00055156) popup_snote_single_graphic_window_t3_ParamLimits

0x7fa0,	// (0x00055156) popup_snote_single_graphic_window_t3

0x7fd9,	// (0x0005518f) popup_snote_single_graphic_window_t4_ParamLimits

0x7fd9,	// (0x0005518f) popup_snote_single_graphic_window_t4

0x800d,	// (0x000551c3) popup_snote_single_graphic_window_t5_ParamLimits

0x800d,	// (0x000551c3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005c747) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005c747) popup_snote_single_graphic_window_t

0xb126,	// (0x000582dc) grid_graphic_popup_pane_ParamLimits

0xb126,	// (0x000582dc) grid_graphic_popup_pane

0xb150,	// (0x00058306) listscroll_popup_graphic_pane_g1_ParamLimits

0xb150,	// (0x00058306) listscroll_popup_graphic_pane_g1

0xb164,	// (0x0005831a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb164,	// (0x0005831a) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0005cb41) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0005cb41) listscroll_popup_graphic_pane_g

0xb178,	// (0x0005832e) scroll_pane_cp5

0xb0b7,	// (0x0005826d) cell_graphic_popup_pane_ParamLimits

0xb0b7,	// (0x0005826d) cell_graphic_popup_pane

0xb098,	// (0x0005824e) cell_graphic_popup_pane_g1

0xb0a0,	// (0x00058256) cell_graphic_popup_pane_g2

0x7e60,	// (0x00055016) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0005cb3a) cell_graphic_popup_pane_g

0xb0a9,	// (0x0005825f) cell_graphic_popup_pane_t2

0x7e69,	// (0x0005501f) grid_highlight_pane_cp3

0x804e,	// (0x00055204) list_gen_pane_ParamLimits

0x804e,	// (0x00055204) list_gen_pane

0x8080,	// (0x00055236) scroll_pane

0xaff0,	// (0x000581a6) bg_list_pane_g1_ParamLimits

0xaff0,	// (0x000581a6) bg_list_pane_g1

0xb00d,	// (0x000581c3) bg_list_pane_g2_ParamLimits

0xb00d,	// (0x000581c3) bg_list_pane_g2

0xb022,	// (0x000581d8) bg_list_pane_g3_ParamLimits

0xb022,	// (0x000581d8) bg_list_pane_g3

0xb036,	// (0x000581ec) bg_list_pane_g4_ParamLimits

0xb036,	// (0x000581ec) bg_list_pane_g4

0xb04a,	// (0x00058200) bg_list_pane_g5_ParamLimits

0xb04a,	// (0x00058200) bg_list_pane_g5

0x0004,

0xf979,	// (0x0005cb2f) bg_list_pane_g_ParamLimits

0xf979,	// (0x0005cb2f) bg_list_pane_g

0x81d8,	// (0x0005538e) list_double2_graphic_large_graphic_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double2_graphic_large_graphic_pane

0x81d8,	// (0x0005538e) list_double2_graphic_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double2_graphic_pane

0x81d8,	// (0x0005538e) list_double2_large_graphic_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double2_large_graphic_pane

0x81d8,	// (0x0005538e) list_double2_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double2_pane

0x81d8,	// (0x0005538e) list_double_graphic_heading_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_graphic_heading_pane

0x81d8,	// (0x0005538e) list_double_graphic_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_graphic_pane

0x81d8,	// (0x0005538e) list_double_heading_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_heading_pane

0x81d8,	// (0x0005538e) list_double_large_graphic_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_large_graphic_pane

0x81d8,	// (0x0005538e) list_double_number_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_number_pane

0x81d8,	// (0x0005538e) list_double_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_pane

0x81d8,	// (0x0005538e) list_double_time_pane_ParamLimits

0x81d8,	// (0x0005538e) list_double_time_pane

0x81d8,	// (0x0005538e) list_setting_number_pane_ParamLimits

0x81d8,	// (0x0005538e) list_setting_number_pane

0x81d8,	// (0x0005538e) list_setting_pane_ParamLimits

0x81d8,	// (0x0005538e) list_setting_pane

0x8211,	// (0x000553c7) list_single_2graphic_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_2graphic_pane

0x8211,	// (0x000553c7) list_single_graphic_heading_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_graphic_heading_pane

0x8211,	// (0x000553c7) list_single_graphic_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_graphic_pane

0x8211,	// (0x000553c7) list_single_heading_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_heading_pane

0x60ee,	// (0x000532a4) list_single_large_graphic_pane_ParamLimits

0x60ee,	// (0x000532a4) list_single_large_graphic_pane

0x8211,	// (0x000553c7) list_single_number_heading_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_number_heading_pane

0x8211,	// (0x000553c7) list_single_number_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_number_pane

0x8211,	// (0x000553c7) list_single_pane_ParamLimits

0x8211,	// (0x000553c7) list_single_pane

0x77a0,	// (0x00054956) list_highlight_pane_cp1

0x84e6,	// (0x0005569c) list_single_pane_g1_ParamLimits

0x84e6,	// (0x0005569c) list_single_pane_g1

0x80b4,	// (0x0005526a) list_single_pane_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005c763) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005c763) list_single_pane_g

0x60c0,	// (0x00053276) list_single_pane_t1_ParamLimits

0x60c0,	// (0x00053276) list_single_pane_t1

0x84e6,	// (0x0005569c) list_single_number_pane_g1_ParamLimits

0x84e6,	// (0x0005569c) list_single_number_pane_g1

0x80b4,	// (0x0005526a) list_single_number_pane_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005c763) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005c763) list_single_number_pane_g

0x5c5b,	// (0x00052e11) list_single_number_pane_t1_ParamLimits

0x5c5b,	// (0x00052e11) list_single_number_pane_t1

0x6006,	// (0x000531bc) list_single_number_pane_t2_ParamLimits

0x6006,	// (0x000531bc) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0005caf0) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0005caf0) list_single_number_pane_t

0x38d8,	// (0x00050a8e) list_single_graphic_pane_g1_ParamLimits

0x38d8,	// (0x00050a8e) list_single_graphic_pane_g1

0x84e6,	// (0x0005569c) list_single_graphic_pane_g2_ParamLimits

0x84e6,	// (0x0005569c) list_single_graphic_pane_g2

0x80b4,	// (0x0005526a) list_single_graphic_pane_g3_ParamLimits

0x80b4,	// (0x0005526a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005c752) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005c752) list_single_graphic_pane_g

0x38e4,	// (0x00050a9a) list_single_graphic_pane_t1_ParamLimits

0x38e4,	// (0x00050a9a) list_single_graphic_pane_t1

0x38fa,	// (0x00050ab0) list_single_heading_pane_g1_ParamLimits

0x38fa,	// (0x00050ab0) list_single_heading_pane_g1

0x80b4,	// (0x0005526a) list_single_heading_pane_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005c759) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005c759) list_single_heading_pane_g

0x390d,	// (0x00050ac3) list_single_heading_pane_t1_ParamLimits

0x390d,	// (0x00050ac3) list_single_heading_pane_t1

0x80c0,	// (0x00055276) list_single_heading_pane_t2_ParamLimits

0x80c0,	// (0x00055276) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005c75e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005c75e) list_single_heading_pane_t

0x84e6,	// (0x0005569c) list_single_number_heading_pane_g1_ParamLimits

0x84e6,	// (0x0005569c) list_single_number_heading_pane_g1

0x80b4,	// (0x0005526a) list_single_number_heading_pane_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005c763) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005c763) list_single_number_heading_pane_g

0x3923,	// (0x00050ad9) list_single_number_heading_pane_t1_ParamLimits

0x3923,	// (0x00050ad9) list_single_number_heading_pane_t1

0x3939,	// (0x00050aef) list_single_number_heading_pane_t2_ParamLimits

0x3939,	// (0x00050aef) list_single_number_heading_pane_t2

0x394b,	// (0x00050b01) list_single_number_heading_pane_t3_ParamLimits

0x394b,	// (0x00050b01) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005c768) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005c768) list_single_number_heading_pane_t

0x395d,	// (0x00050b13) list_single_graphic_heading_pane_g1_ParamLimits

0x395d,	// (0x00050b13) list_single_graphic_heading_pane_g1

0x80d2,	// (0x00055288) list_single_graphic_heading_pane_g4_ParamLimits

0x80d2,	// (0x00055288) list_single_graphic_heading_pane_g4

0x80b4,	// (0x0005526a) list_single_graphic_heading_pane_g5_ParamLimits

0x80b4,	// (0x0005526a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005c76f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005c76f) list_single_graphic_heading_pane_g

0x3923,	// (0x00050ad9) list_single_graphic_heading_pane_t1_ParamLimits

0x3923,	// (0x00050ad9) list_single_graphic_heading_pane_t1

0x3975,	// (0x00050b2b) list_single_graphic_heading_pane_t2_ParamLimits

0x3975,	// (0x00050b2b) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005c776) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005c776) list_single_graphic_heading_pane_t

0x49d8,	// (0x00051b8e) list_single_large_graphic_pane_g1_ParamLimits

0x49d8,	// (0x00051b8e) list_single_large_graphic_pane_g1

0x49e4,	// (0x00051b9a) list_single_large_graphic_pane_g2_ParamLimits

0x49e4,	// (0x00051b9a) list_single_large_graphic_pane_g2

0x49f0,	// (0x00051ba6) list_single_large_graphic_pane_g3_ParamLimits

0x49f0,	// (0x00051ba6) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005c77b) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005c77b) list_single_large_graphic_pane_g

0xa01d,	// (0x000571d3) wait_border_pane_g2_copy1

0x49fc,	// (0x00051bb2) list_single_large_graphic_pane_g4_cp2

0x4a04,	// (0x00051bba) list_single_large_graphic_pane_t1_ParamLimits

0x4a04,	// (0x00051bba) list_single_large_graphic_pane_t1

0x80e3,	// (0x00055299) list_double_pane_g1_ParamLimits

0x80e3,	// (0x00055299) list_double_pane_g1

0x80ef,	// (0x000552a5) list_double_pane_g2_ParamLimits

0x80ef,	// (0x000552a5) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005c782) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005c782) list_double_pane_g

0x4a1a,	// (0x00051bd0) list_double_pane_t1_ParamLimits

0x4a1a,	// (0x00051bd0) list_double_pane_t1

0x4a30,	// (0x00051be6) list_double_pane_t2_ParamLimits

0x4a30,	// (0x00051be6) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005c787) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005c787) list_double_pane_t

0x4a42,	// (0x00051bf8) list_double2_pane_g1_ParamLimits

0x4a42,	// (0x00051bf8) list_double2_pane_g1

0x3afc,	// (0x00050cb2) list_double2_pane_g2_ParamLimits

0x3afc,	// (0x00050cb2) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005c78c) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005c78c) list_double2_pane_g

0x4a53,	// (0x00051c09) list_double2_pane_t1_ParamLimits

0x4a53,	// (0x00051c09) list_double2_pane_t1

0x4a69,	// (0x00051c1f) list_double2_pane_t2_ParamLimits

0x4a69,	// (0x00051c1f) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005c791) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005c791) list_double2_pane_t

0x80e3,	// (0x00055299) list_double_number_pane_g1_ParamLimits

0x80e3,	// (0x00055299) list_double_number_pane_g1

0x80ef,	// (0x000552a5) list_double_number_pane_g2_ParamLimits

0x80ef,	// (0x000552a5) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005c782) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005c782) list_double_number_pane_g

0x4a7b,	// (0x00051c31) list_double_number_pane_t1_ParamLimits

0x4a7b,	// (0x00051c31) list_double_number_pane_t1

0x4a8d,	// (0x00051c43) list_double_number_pane_t2_ParamLimits

0x4a8d,	// (0x00051c43) list_double_number_pane_t2

0x4aa3,	// (0x00051c59) list_double_number_pane_t3_ParamLimits

0x4aa3,	// (0x00051c59) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005c796) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005c796) list_double_number_pane_t

0x4ab5,	// (0x00051c6b) list_double_graphic_pane_g1_ParamLimits

0x4ab5,	// (0x00051c6b) list_double_graphic_pane_g1

0x80fb,	// (0x000552b1) list_double_graphic_pane_g2_ParamLimits

0x80fb,	// (0x000552b1) list_double_graphic_pane_g2

0x810a,	// (0x000552c0) list_double_graphic_pane_g3_ParamLimits

0x810a,	// (0x000552c0) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005c79d) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005c79d) list_double_graphic_pane_g

0x4acd,	// (0x00051c83) list_double_graphic_pane_t1_ParamLimits

0x4acd,	// (0x00051c83) list_double_graphic_pane_t1

0x4ae3,	// (0x00051c99) list_double_graphic_pane_t2_ParamLimits

0x4ae3,	// (0x00051c99) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005c7a6) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005c7a6) list_double_graphic_pane_t

0x3ae4,	// (0x00050c9a) list_double2_graphic_pane_g1_ParamLimits

0x3ae4,	// (0x00050c9a) list_double2_graphic_pane_g1

0x8116,	// (0x000552cc) list_double2_graphic_pane_g2_ParamLimits

0x8116,	// (0x000552cc) list_double2_graphic_pane_g2

0x8122,	// (0x000552d8) list_double2_graphic_pane_g3_ParamLimits

0x8122,	// (0x000552d8) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005c7ab) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005c7ab) list_double2_graphic_pane_g

0x3ace,	// (0x00050c84) list_double2_graphic_pane_t1_ParamLimits

0x3ace,	// (0x00050c84) list_double2_graphic_pane_t1

0x4af5,	// (0x00051cab) list_double2_graphic_pane_t2_ParamLimits

0x4af5,	// (0x00051cab) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005c7b2) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005c7b2) list_double2_graphic_pane_t

0x4b07,	// (0x00051cbd) list_double_large_graphic_pane_g1_ParamLimits

0x4b07,	// (0x00051cbd) list_double_large_graphic_pane_g1

0x4b1a,	// (0x00051cd0) list_double_large_graphic_pane_g2_ParamLimits

0x4b1a,	// (0x00051cd0) list_double_large_graphic_pane_g2

0x80ef,	// (0x000552a5) list_double_large_graphic_pane_g3_ParamLimits

0x80ef,	// (0x000552a5) list_double_large_graphic_pane_g3

0x4b30,	// (0x00051ce6) list_double_large_graphic_pane_g4_ParamLimits

0x4b30,	// (0x00051ce6) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005c7b7) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005c7b7) list_double_large_graphic_pane_g

0x4b41,	// (0x00051cf7) list_double_large_graphic_pane_t1_ParamLimits

0x4b41,	// (0x00051cf7) list_double_large_graphic_pane_t1

0x4b5a,	// (0x00051d10) list_double_large_graphic_pane_t2_ParamLimits

0x4b5a,	// (0x00051d10) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0005c7c2) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0005c7c2) list_double_large_graphic_pane_t

0x4b6c,	// (0x00051d22) list_double2_large_graphic_pane_g1_ParamLimits

0x4b6c,	// (0x00051d22) list_double2_large_graphic_pane_g1

0x4b78,	// (0x00051d2e) list_double2_large_graphic_pane_g2_ParamLimits

0x4b78,	// (0x00051d2e) list_double2_large_graphic_pane_g2

0x8122,	// (0x000552d8) list_double2_large_graphic_pane_g3_ParamLimits

0x8122,	// (0x000552d8) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0005c7c7) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0005c7c7) list_double2_large_graphic_pane_g

0x4b89,	// (0x00051d3f) list_double2_large_graphic_pane_t1_ParamLimits

0x4b89,	// (0x00051d3f) list_double2_large_graphic_pane_t1

0x4b9f,	// (0x00051d55) list_double2_large_graphic_pane_t2_ParamLimits

0x4b9f,	// (0x00051d55) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0005c7ce) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0005c7ce) list_double2_large_graphic_pane_t

0x4bb1,	// (0x00051d67) list_double_heading_pane_g1_ParamLimits

0x4bb1,	// (0x00051d67) list_double_heading_pane_g1

0x4bc2,	// (0x00051d78) list_double_heading_pane_g2_ParamLimits

0x4bc2,	// (0x00051d78) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0005c7d3) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0005c7d3) list_double_heading_pane_g

0x4bce,	// (0x00051d84) list_double_heading_pane_t1_ParamLimits

0x4bce,	// (0x00051d84) list_double_heading_pane_t1

0x4a69,	// (0x00051c1f) list_double_heading_pane_t2_ParamLimits

0x4a69,	// (0x00051c1f) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0005c7d8) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0005c7d8) list_double_heading_pane_t

0x3af0,	// (0x00050ca6) list_double_graphic_heading_pane_g1_ParamLimits

0x3af0,	// (0x00050ca6) list_double_graphic_heading_pane_g1

0x4bb1,	// (0x00051d67) list_double_graphic_heading_pane_g2_ParamLimits

0x4bb1,	// (0x00051d67) list_double_graphic_heading_pane_g2

0x4bc2,	// (0x00051d78) list_double_graphic_heading_pane_g3_ParamLimits

0x4bc2,	// (0x00051d78) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0005c7dd) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0005c7dd) list_double_graphic_heading_pane_g

0x4be4,	// (0x00051d9a) list_double_graphic_heading_pane_t1_ParamLimits

0x4be4,	// (0x00051d9a) list_double_graphic_heading_pane_t1

0x4af5,	// (0x00051cab) list_double_graphic_heading_pane_t2_ParamLimits

0x4af5,	// (0x00051cab) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0005c7e4) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0005c7e4) list_double_graphic_heading_pane_t

0x4bfa,	// (0x00051db0) list_double_time_pane_g1_ParamLimits

0x4bfa,	// (0x00051db0) list_double_time_pane_g1

0x4c0b,	// (0x00051dc1) list_double_time_pane_g2_ParamLimits

0x4c0b,	// (0x00051dc1) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0005c7e9) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0005c7e9) list_double_time_pane_g

0x4c17,	// (0x00051dcd) list_double_time_pane_t1_ParamLimits

0x4c17,	// (0x00051dcd) list_double_time_pane_t1

0x4c2d,	// (0x00051de3) list_double_time_pane_t2_ParamLimits

0x4c2d,	// (0x00051de3) list_double_time_pane_t2

0x4c3f,	// (0x00051df5) list_double_time_pane_t3_ParamLimits

0x4c3f,	// (0x00051df5) list_double_time_pane_t3

0x4c51,	// (0x00051e07) list_double_time_pane_t4_ParamLimits

0x4c51,	// (0x00051e07) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0005c7ee) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0005c7ee) list_double_time_pane_t

0x4c63,	// (0x00051e19) list_setting_pane_g1_ParamLimits

0x4c63,	// (0x00051e19) list_setting_pane_g1

0x4c6f,	// (0x00051e25) list_setting_pane_g2_ParamLimits

0x4c6f,	// (0x00051e25) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005c7f7) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005c7f7) list_setting_pane_g

0x4c7b,	// (0x00051e31) list_setting_pane_t1_ParamLimits

0x4c7b,	// (0x00051e31) list_setting_pane_t1

0x4c95,	// (0x00051e4b) list_setting_pane_t2_ParamLimits

0x4c95,	// (0x00051e4b) list_setting_pane_t2

0x0002,

0xf646,	// (0x0005c7fc) list_setting_pane_t_ParamLimits

0xf646,	// (0x0005c7fc) list_setting_pane_t

0x4cd4,	// (0x00051e8a) set_value_pane_cp_ParamLimits

0x4cd4,	// (0x00051e8a) set_value_pane_cp

0x4ce0,	// (0x00051e96) list_setting_number_pane_g1_ParamLimits

0x4ce0,	// (0x00051e96) list_setting_number_pane_g1

0x4cec,	// (0x00051ea2) list_setting_number_pane_g2_ParamLimits

0x4cec,	// (0x00051ea2) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005c803) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005c803) list_setting_number_pane_g

0x4cf8,	// (0x00051eae) list_setting_number_pane_t1_ParamLimits

0x4cf8,	// (0x00051eae) list_setting_number_pane_t1

0x4d11,	// (0x00051ec7) list_setting_number_pane_t2_ParamLimits

0x4d11,	// (0x00051ec7) list_setting_number_pane_t2

0x4d2b,	// (0x00051ee1) list_setting_number_pane_t3_ParamLimits

0x4d2b,	// (0x00051ee1) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0005c808) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0005c808) list_setting_number_pane_t

0x4cd4,	// (0x00051e8a) set_value_pane_ParamLimits

0x4cd4,	// (0x00051e8a) set_value_pane

0x8143,	// (0x000552f9) bg_set_opt_pane_ParamLimits

0x8143,	// (0x000552f9) bg_set_opt_pane

0x4d6e,	// (0x00051f24) set_value_pane_t1

0x8164,	// (0x0005531a) slider_set_pane_cp3

0x816d,	// (0x00055323) volume_small_pane_cp

0x8176,	// (0x0005532c) list_form_gen_pane

0x817f,	// (0x00055335) scroll_pane_cp8

0x4d84,	// (0x00051f3a) form_field_data_pane_ParamLimits

0x4d84,	// (0x00051f3a) form_field_data_pane

0x4da8,	// (0x00051f5e) form_field_data_wide_pane_ParamLimits

0x4da8,	// (0x00051f5e) form_field_data_wide_pane

0x4dcb,	// (0x00051f81) form_field_popup_pane_ParamLimits

0x4dcb,	// (0x00051f81) form_field_popup_pane

0x4deb,	// (0x00051fa1) form_field_popup_wide_pane_ParamLimits

0x4deb,	// (0x00051fa1) form_field_popup_wide_pane

0x4e0a,	// (0x00051fc0) form_field_slider_pane_ParamLimits

0x4e0a,	// (0x00051fc0) form_field_slider_pane

0x4e1d,	// (0x00051fd3) form_field_slider_wide_pane_ParamLimits

0x4e1d,	// (0x00051fd3) form_field_slider_wide_pane

0x8190,	// (0x00055346) data_form_pane

0x4e3a,	// (0x00051ff0) form_field_data_pane_t1

0x84f2,	// (0x000556a8) input_focus_pane

0x4e52,	// (0x00052008) data_form_wide_pane

0x4e6f,	// (0x00052025) form_field_data_wide_pane_t1

0x7e7e,	// (0x00055034) input_focus_pane_cp6

0x4e91,	// (0x00052047) form_field_popup_pane_t1

0x84f2,	// (0x000556a8) input_focus_pane_cp7

0x8514,	// (0x000556ca) list_form_pane

0x4eb1,	// (0x00052067) form_field_popup_wide_pane_t1

0x84f2,	// (0x000556a8) input_focus_pane_cp8

0x8520,	// (0x000556d6) list_form_wide_pane

0x4ece,	// (0x00052084) form_field_slider_pane_t1_ParamLimits

0x4ece,	// (0x00052084) form_field_slider_pane_t1

0x4ee4,	// (0x0005209a) form_field_slider_pane_t2_ParamLimits

0x4ee4,	// (0x0005209a) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0005c818) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0005c818) form_field_slider_pane_t

0x7afb,	// (0x00054cb1) input_focus_pane_cp9_ParamLimits

0x7afb,	// (0x00054cb1) input_focus_pane_cp9

0x4ef9,	// (0x000520af) slider_cont_pane_ParamLimits

0x4ef9,	// (0x000520af) slider_cont_pane

0x852c,	// (0x000556e2) form_field_slider_wide_pane_t1_ParamLimits

0x852c,	// (0x000556e2) form_field_slider_wide_pane_t1

0x4f0d,	// (0x000520c3) form_field_slider_wide_pane_t2_ParamLimits

0x4f0d,	// (0x000520c3) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0005c81d) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0005c81d) form_field_slider_wide_pane_t

0x7afb,	// (0x00054cb1) input_focus_pane_cp10_ParamLimits

0x7afb,	// (0x00054cb1) input_focus_pane_cp10

0x4f1f,	// (0x000520d5) slider_cont_pane_cp1_ParamLimits

0x4f1f,	// (0x000520d5) slider_cont_pane_cp1

0x4f33,	// (0x000520e9) slider_form_pane_cp

0x853e,	// (0x000556f4) input_focus_pane_g1

0x8546,	// (0x000556fc) input_focus_pane_g2

0x854e,	// (0x00055704) input_focus_pane_g3

0x8556,	// (0x0005570c) input_focus_pane_g4

0x855e,	// (0x00055714) input_focus_pane_g5

0x8566,	// (0x0005571c) input_focus_pane_g6

0x856e,	// (0x00055724) input_focus_pane_g7

0x8576,	// (0x0005572c) input_focus_pane_g8

0x857e,	// (0x00055734) input_focus_pane_g9

0x199d,	// (0x0004eb53) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0005c822) input_focus_pane_g

0xa026,	// (0x000571dc) wait_border_pane_g3_copy1

0x4f3b,	// (0x000520f1) data_form_pane_t1

0x199d,	// (0x0004eb53) wait_anim_pane_g1_copy1

0x6090,	// (0x00053246) data_form_wide_pane_t1

0x4f56,	// (0x0005210c) list_form_graphic_pane_cp_ParamLimits

0x4f56,	// (0x0005210c) list_form_graphic_pane_cp

0xaf46,	// (0x000580fc) slider_form_pane_g1

0xaf4f,	// (0x00058105) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0005cb20) slider_form_pane_g

0x4f6f,	// (0x00052125) list_form_graphic_pane_ParamLimits

0x4f6f,	// (0x00052125) list_form_graphic_pane

0x4f8b,	// (0x00052141) list_form_graphic_pane_g1

0x4f93,	// (0x00052149) list_form_graphic_pane_t1_ParamLimits

0x4f93,	// (0x00052149) list_form_graphic_pane_t1

0x7880,	// (0x00054a36) list_highlight_pane_cp5_ParamLimits

0x7880,	// (0x00054a36) list_highlight_pane_cp5

0x4fa8,	// (0x0005215e) find_pane_g1

0x8586,	// (0x0005573c) input_find_pane

0x4fb1,	// (0x00052167) input_find_pane_g1_ParamLimits

0x4fb1,	// (0x00052167) input_find_pane_g1

0x4fbd,	// (0x00052173) input_find_pane_t1_ParamLimits

0x4fbd,	// (0x00052173) input_find_pane_t1

0x4fd2,	// (0x00052188) input_find_pane_t2_ParamLimits

0x4fd2,	// (0x00052188) input_find_pane_t2

0x0001,

0xf681,	// (0x0005c837) input_find_pane_t_ParamLimits

0xf681,	// (0x0005c837) input_find_pane_t

0x858f,	// (0x00055745) input_focus_pane_cp5_ParamLimits

0x858f,	// (0x00055745) input_focus_pane_cp5

0x85ae,	// (0x00055764) bg_popup_window_pane_cp2_ParamLimits

0x85ae,	// (0x00055764) bg_popup_window_pane_cp2

0x85bb,	// (0x00055771) listscroll_menu_pane_ParamLimits

0x85bb,	// (0x00055771) listscroll_menu_pane

0x85c7,	// (0x0005577d) popup_submenu_window_ParamLimits

0x85c7,	// (0x0005577d) popup_submenu_window

0x85f3,	// (0x000557a9) find_popup_pane_g1

0x85fb,	// (0x000557b1) input_popup_find_pane_cp

0x8605,	// (0x000557bb) input_focus_pane_cp4_ParamLimits

0x8605,	// (0x000557bb) input_focus_pane_cp4

0x861f,	// (0x000557d5) input_popup_find_pane_t1_ParamLimits

0x861f,	// (0x000557d5) input_popup_find_pane_t1

0x77a0,	// (0x00054956) bg_popup_sub_pane_cp

0x864d,	// (0x00055803) listscroll_popup_sub_pane

0x8655,	// (0x0005580b) list_submenu_pane_ParamLimits

0x8655,	// (0x0005580b) list_submenu_pane

0x8666,	// (0x0005581c) scroll_pane_cp4

0x866e,	// (0x00055824) list_single_popup_submenu_pane_ParamLimits

0x866e,	// (0x00055824) list_single_popup_submenu_pane

0x8682,	// (0x00055838) list_single_popup_submenu_pane_g1

0x868a,	// (0x00055840) list_single_popup_submenu_pane_t1_ParamLimits

0x868a,	// (0x00055840) list_single_popup_submenu_pane_t1

0x7880,	// (0x00054a36) bg_active_tab_pane_cp1_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp1

0x869f,	// (0x00055855) tabs_2_active_pane_g1

0x86a7,	// (0x0005585d) tabs_2_active_pane_t1

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp1_ParamLimits

0x7880,	// (0x00054a36) bg_passive_tab_pane_cp1

0x869f,	// (0x00055855) tabs_2_passive_pane_g1

0x86a7,	// (0x0005585d) tabs_2_passive_pane_t1

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp4

0x86c7,	// (0x0005587d) tabs_2_long_active_pane_t1

0x86da,	// (0x00055890) bg_passive_tab_pane_cp4

0x5c9e,	// (0x00052e54) list_single_midp_graphic_pane_g4_ParamLimits

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp5

0x86e6,	// (0x0005589c) tabs_3_long_active_pane_t1

0x86da,	// (0x00055890) bg_passive_tab_pane_cp5

0x5c9e,	// (0x00052e54) list_single_midp_graphic_pane_g4

0x7880,	// (0x00054a36) bg_popup_window_pane_cp13_ParamLimits

0x7880,	// (0x00054a36) bg_popup_window_pane_cp13

0x8701,	// (0x000558b7) listscroll_popup_fast_pane_ParamLimits

0x8701,	// (0x000558b7) listscroll_popup_fast_pane

0x8710,	// (0x000558c6) grid_popup_fast_pane_ParamLimits

0x8710,	// (0x000558c6) grid_popup_fast_pane

0x8722,	// (0x000558d8) scroll_pane_cp9_ParamLimits

0x8722,	// (0x000558d8) scroll_pane_cp9

0xc863,	// (0x00059a19) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc863,	// (0x00059a19) list_single_graphic_hl_pane_t1_cp2

0x8746,	// (0x000558fc) input_focus_pane_cp20_ParamLimits

0x8746,	// (0x000558fc) input_focus_pane_cp20

0x8754,	// (0x0005590a) query_popup_data_pane_t1_ParamLimits

0x8754,	// (0x0005590a) query_popup_data_pane_t1

0x8767,	// (0x0005591d) query_popup_data_pane_t2_ParamLimits

0x8767,	// (0x0005591d) query_popup_data_pane_t2

0x87ad,	// (0x00055963) query_popup_data_pane_t3_ParamLimits

0x87ad,	// (0x00055963) query_popup_data_pane_t3

0x87ee,	// (0x000559a4) query_popup_data_pane_t4_ParamLimits

0x87ee,	// (0x000559a4) query_popup_data_pane_t4

0x882a,	// (0x000559e0) query_popup_data_pane_t5_ParamLimits

0x882a,	// (0x000559e0) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0005c83c) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0005c83c) query_popup_data_pane_t

0x853e,	// (0x000556f4) bg_set_opt_pane_g1

0x8546,	// (0x000556fc) bg_set_opt_pane_g2

0x854e,	// (0x00055704) bg_set_opt_pane_g3

0x8556,	// (0x0005570c) bg_set_opt_pane_g4

0x855e,	// (0x00055714) bg_set_opt_pane_g5

0x8566,	// (0x0005571c) bg_set_opt_pane_g6

0x856e,	// (0x00055724) bg_set_opt_pane_g7

0x8576,	// (0x0005572c) bg_set_opt_pane_g8

0x857e,	// (0x00055734) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005c847) bg_set_opt_pane_g

0x52f2,	// (0x000524a8) control_top_pane_stacon_ParamLimits

0x52f2,	// (0x000524a8) control_top_pane_stacon

0x5345,	// (0x000524fb) signal_pane_stacon_ParamLimits

0x5345,	// (0x000524fb) signal_pane_stacon

0x8e35,	// (0x00055feb) stacon_top_pane_g1_ParamLimits

0x8e35,	// (0x00055feb) stacon_top_pane_g1

0x536a,	// (0x00052520) title_pane_stacon_ParamLimits

0x536a,	// (0x00052520) title_pane_stacon

0x5394,	// (0x0005254a) uni_indicator_pane_stacon_ParamLimits

0x5394,	// (0x0005254a) uni_indicator_pane_stacon

0x53a9,	// (0x0005255f) battery_pane_stacon_ParamLimits

0x53a9,	// (0x0005255f) battery_pane_stacon

0x53ed,	// (0x000525a3) control_bottom_pane_stacon_ParamLimits

0x53ed,	// (0x000525a3) control_bottom_pane_stacon

0x5410,	// (0x000525c6) navi_pane_stacon_ParamLimits

0x5410,	// (0x000525c6) navi_pane_stacon

0x8e57,	// (0x0005600d) stacon_bottom_pane_g1_ParamLimits

0x8e57,	// (0x0005600d) stacon_bottom_pane_g1

0x4fe7,	// (0x0005219d) aid_levels_signal_lsc_ParamLimits

0x4fe7,	// (0x0005219d) aid_levels_signal_lsc

0x4ffd,	// (0x000521b3) signal_pane_stacon_g1_ParamLimits

0x4ffd,	// (0x000521b3) signal_pane_stacon_g1

0x5011,	// (0x000521c7) signal_pane_stacon_g2_ParamLimits

0x5011,	// (0x000521c7) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0005c85a) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0005c85a) signal_pane_stacon_g

0x5046,	// (0x000521fc) title_pane_stacon_t1_ParamLimits

0x5046,	// (0x000521fc) title_pane_stacon_t1

0x886e,	// (0x00055a24) uni_indicator_pane_stacon_g1

0x8878,	// (0x00055a2e) uni_indicator_pane_stacon_g2

0x8882,	// (0x00055a38) uni_indicator_pane_stacon_g3

0x888c,	// (0x00055a42) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0005c866) uni_indicator_pane_stacon_g

0x506b,	// (0x00052221) control_top_pane_stacon_g1

0x5073,	// (0x00052229) control_top_pane_stacon_t1_ParamLimits

0x5073,	// (0x00052229) control_top_pane_stacon_t1

0x50aa,	// (0x00052260) aid_levels_battery_lsc_ParamLimits

0x50aa,	// (0x00052260) aid_levels_battery_lsc

0x50c1,	// (0x00052277) battery_pane_stacon_g1_ParamLimits

0x50c1,	// (0x00052277) battery_pane_stacon_g1

0x50d4,	// (0x0005228a) battery_pane_stacon_g2_ParamLimits

0x50d4,	// (0x0005228a) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0005c86f) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0005c86f) battery_pane_stacon_g

0x5112,	// (0x000522c8) navi_icon_pane_stacon

0x5126,	// (0x000522dc) navi_navi_pane_stacon

0x5112,	// (0x000522c8) navi_text_pane_stacon

0x506b,	// (0x00052221) control_bottom_pane_stacon_g1

0x513a,	// (0x000522f0) control_bottom_pane_stacon_t1_ParamLimits

0x513a,	// (0x000522f0) control_bottom_pane_stacon_t1

0x88b0,	// (0x00055a66) grid_app_pane_ParamLimits

0x88b0,	// (0x00055a66) grid_app_pane

0x88d2,	// (0x00055a88) scroll_pane_cp15_ParamLimits

0x88d2,	// (0x00055a88) scroll_pane_cp15

0x88e5,	// (0x00055a9b) cell_app_pane_ParamLimits

0x88e5,	// (0x00055a9b) cell_app_pane

0x890d,	// (0x00055ac3) cell_app_pane_g1_ParamLimits

0x890d,	// (0x00055ac3) cell_app_pane_g1

0x8931,	// (0x00055ae7) cell_app_pane_g2_ParamLimits

0x8931,	// (0x00055ae7) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005c874) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005c874) cell_app_pane_g

0x893d,	// (0x00055af3) cell_app_pane_t1_ParamLimits

0x893d,	// (0x00055af3) cell_app_pane_t1

0x8954,	// (0x00055b0a) grid_highlight_pane_ParamLimits

0x8954,	// (0x00055b0a) grid_highlight_pane

0x853e,	// (0x000556f4) cell_highlight_pane_g1

0x8546,	// (0x000556fc) cell_highlight_pane_g2

0x854e,	// (0x00055704) cell_highlight_pane_g3

0x8556,	// (0x0005570c) cell_highlight_pane_g4

0x855e,	// (0x00055714) cell_highlight_pane_g5

0x8566,	// (0x0005571c) cell_highlight_pane_g6

0x856e,	// (0x00055724) cell_highlight_pane_g7

0x8576,	// (0x0005572c) cell_highlight_pane_g8

0x857e,	// (0x00055734) cell_highlight_pane_g9

0x199d,	// (0x0004eb53) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0005c822) cell_highlight_pane_g

0x8965,	// (0x00055b1b) bg_scroll_pane

0x5184,	// (0x0005233a) scroll_handle_pane

0x89ac,	// (0x00055b62) scroll_bg_pane_g1

0x89c1,	// (0x00055b77) scroll_bg_pane_g2

0x89d9,	// (0x00055b8f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0005c879) scroll_bg_pane_g

0x89ee,	// (0x00055ba4) scroll_handle_focus_pane_ParamLimits

0x89ee,	// (0x00055ba4) scroll_handle_focus_pane

0x89ac,	// (0x00055b62) scroll_handle_pane_g1

0x89fb,	// (0x00055bb1) scroll_handle_pane_g2

0x89d9,	// (0x00055b8f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0005c880) scroll_handle_pane_g

0x8605,	// (0x000557bb) bg_popup_sub_pane_cp21_ParamLimits

0x8605,	// (0x000557bb) bg_popup_sub_pane_cp21

0x8a0f,	// (0x00055bc5) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a0f,	// (0x00055bc5) popup_fep_japan_predictive_window_t1

0x8a29,	// (0x00055bdf) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a29,	// (0x00055bdf) popup_fep_japan_predictive_window_t2

0x8a5c,	// (0x00055c12) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a5c,	// (0x00055c12) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005c887) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005c887) popup_fep_japan_predictive_window_t

0x77a0,	// (0x00054956) bg_popup_sub_pane_cp23

0x8a93,	// (0x00055c49) listscroll_japin_cand_pane

0x8a9b,	// (0x00055c51) popup_fep_japan_candidate_window_t1

0x8aa9,	// (0x00055c5f) candidate_pane_ParamLimits

0x8aa9,	// (0x00055c5f) candidate_pane

0x8abb,	// (0x00055c71) scroll_pane_cp30

0x8ac3,	// (0x00055c79) list_single_popup_jap_candidate_pane_ParamLimits

0x8ac3,	// (0x00055c79) list_single_popup_jap_candidate_pane

0x77a0,	// (0x00054956) list_highlight_pane_cp30

0x8ad8,	// (0x00055c8e) list_single_popup_jap_candidate_pane_t1

0x8ae7,	// (0x00055c9d) level_1_signal

0x8af9,	// (0x00055caf) level_2_signal

0x8b0c,	// (0x00055cc2) level_3_signal

0x8b1f,	// (0x00055cd5) level_4_signal

0x8b32,	// (0x00055ce8) level_5_signal

0x8b45,	// (0x00055cfb) level_6_signal

0x8b58,	// (0x00055d0e) level_7_signal

0x8ae7,	// (0x00055c9d) level_1_battery

0x8af9,	// (0x00055caf) level_2_battery

0x8b0c,	// (0x00055cc2) level_3_battery

0x8b1f,	// (0x00055cd5) level_4_battery

0x8b32,	// (0x00055ce8) level_5_battery

0x8b45,	// (0x00055cfb) level_6_battery

0x8b58,	// (0x00055d0e) level_7_battery

0x8b83,	// (0x00055d39) list_menu_pane_ParamLimits

0x8b83,	// (0x00055d39) list_menu_pane

0x8b99,	// (0x00055d4f) scroll_pane_cp25_ParamLimits

0x8b99,	// (0x00055d4f) scroll_pane_cp25

0x8bb2,	// (0x00055d68) list_double2_graphic_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double2_graphic_pane_cp2

0x8bb2,	// (0x00055d68) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double2_large_graphic_pane_cp2

0x8bb2,	// (0x00055d68) list_double2_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double2_pane_cp2

0x8bb2,	// (0x00055d68) list_double_graphic_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double_graphic_pane_cp2

0x8bb2,	// (0x00055d68) list_double_large_graphic_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double_large_graphic_pane_cp2

0x8bb2,	// (0x00055d68) list_double_number_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double_number_pane_cp2

0x8bb2,	// (0x00055d68) list_double_pane_cp2_ParamLimits

0x8bb2,	// (0x00055d68) list_double_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_2graphic_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_2graphic_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_graphic_heading_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_graphic_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_graphic_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_heading_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_heading_pane_cp2

0x8bef,	// (0x00055da5) list_single_large_graphic_pane_cp2_ParamLimits

0x8bef,	// (0x00055da5) list_single_large_graphic_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_number_heading_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_number_heading_pane_cp2

0x8bd6,	// (0x00055d8c) list_single_number_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_number_pane_cp2

0x8c00,	// (0x00055db6) list_single_pane_cp2_ParamLimits

0x8c00,	// (0x00055db6) list_single_pane_cp2

0x8c84,	// (0x00055e3a) bg_popup_sub_pane_cp22

0x5236,	// (0x000523ec) popup_side_volume_key_window_g1

0x5260,	// (0x00052416) popup_side_volume_key_window_t1

0x527c,	// (0x00052432) volume_small_pane_cp1

0x7afb,	// (0x00054cb1) bg_popup_sub_pane_cp24_ParamLimits

0x7afb,	// (0x00054cb1) bg_popup_sub_pane_cp24

0x8c9a,	// (0x00055e50) fep_china_uni_candidate_pane_ParamLimits

0x8c9a,	// (0x00055e50) fep_china_uni_candidate_pane

0x8cae,	// (0x00055e64) fep_china_uni_entry_pane

0x8cbe,	// (0x00055e74) popup_fep_china_uni_window_g1

0x8cda,	// (0x00055e90) fep_china_uni_entry_pane_g1

0x8ce2,	// (0x00055e98) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0005c8b8) fep_china_uni_entry_pane_g

0x8cea,	// (0x00055ea0) fep_entry_item_pane

0x8cf4,	// (0x00055eaa) fep_candidate_item_pane

0x8cfc,	// (0x00055eb2) fep_china_uni_candidate_pane_g1

0x8d04,	// (0x00055eba) fep_china_uni_candidate_pane_g2

0x8d0c,	// (0x00055ec2) fep_china_uni_candidate_pane_g3

0x8d14,	// (0x00055eca) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0005c8bd) fep_china_uni_candidate_pane_g

0x199d,	// (0x0004eb53) fep_entry_item_pane_g1

0x8d1c,	// (0x00055ed2) fep_entry_item_pane_t1_ParamLimits

0x8d1c,	// (0x00055ed2) fep_entry_item_pane_t1

0x8d32,	// (0x00055ee8) fep_candidate_item_pane_t1_ParamLimits

0x8d32,	// (0x00055ee8) fep_candidate_item_pane_t1

0x8d47,	// (0x00055efd) fep_candidate_item_pane_t2_ParamLimits

0x8d47,	// (0x00055efd) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0005c8c6) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0005c8c6) fep_candidate_item_pane_t

0x7880,	// (0x00054a36) list_highlight_pane_cp31_ParamLimits

0x7880,	// (0x00054a36) list_highlight_pane_cp31

0x8d59,	// (0x00055f0f) level_1_signal_lsc

0x8d62,	// (0x00055f18) level_2_signal_lsc

0x8d6b,	// (0x00055f21) level_3_signal_lsc

0x8d74,	// (0x00055f2a) level_4_signal_lsc

0x8d7d,	// (0x00055f33) level_5_signal_lsc

0x8d86,	// (0x00055f3c) level_6_signal_lsc

0x8d8f,	// (0x00055f45) level_7_signal_lsc

0x8d8f,	// (0x00055f45) level_1_battery_lsc

0x8d98,	// (0x00055f4e) level_2_battery_lsc

0x8da1,	// (0x00055f57) level_3_battery_lsc

0x8daa,	// (0x00055f60) level_4_battery_lsc

0x8db3,	// (0x00055f69) level_5_battery_lsc

0x8dbc,	// (0x00055f72) level_6_battery_lsc

0x8d59,	// (0x00055f0f) level_7_battery_lsc

0x8dc5,	// (0x00055f7b) scroll_handle_focus_pane_g1

0x8dce,	// (0x00055f84) scroll_handle_focus_pane_g2

0x8dd7,	// (0x00055f8d) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0005c8cb) scroll_handle_focus_pane_g

0x5284,	// (0x0005243a) list_single_2graphic_pane_g1_ParamLimits

0x5284,	// (0x0005243a) list_single_2graphic_pane_g1

0x80d2,	// (0x00055288) list_single_2graphic_pane_g2_ParamLimits

0x80d2,	// (0x00055288) list_single_2graphic_pane_g2

0x80b4,	// (0x0005526a) list_single_2graphic_pane_g3_ParamLimits

0x80b4,	// (0x0005526a) list_single_2graphic_pane_g3

0x5290,	// (0x00052446) list_single_2graphic_pane_g4_ParamLimits

0x5290,	// (0x00052446) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0005c8d2) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0005c8d2) list_single_2graphic_pane_g

0x529c,	// (0x00052452) list_single_2graphic_pane_t1_ParamLimits

0x529c,	// (0x00052452) list_single_2graphic_pane_t1

0x819c,	// (0x00055352) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x819c,	// (0x00055352) list_double2_graphic_large_graphic_pane_g1

0x4b78,	// (0x00051d2e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b78,	// (0x00051d2e) list_double2_graphic_large_graphic_pane_g2

0x8122,	// (0x000552d8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8122,	// (0x000552d8) list_double2_graphic_large_graphic_pane_g3

0x81ac,	// (0x00055362) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x81ac,	// (0x00055362) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0005c8db) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0005c8db) list_double2_graphic_large_graphic_pane_g

0x52ca,	// (0x00052480) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52ca,	// (0x00052480) list_double2_graphic_large_graphic_pane_t1

0x52e0,	// (0x00052496) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52e0,	// (0x00052496) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0005c8e4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0005c8e4) list_double2_graphic_large_graphic_pane_t

0x8f22,	// (0x000560d8) popup_fast_swap_window_ParamLimits

0x8f22,	// (0x000560d8) popup_fast_swap_window

0x8f3e,	// (0x000560f4) popup_side_volume_key_window

0x8f5a,	// (0x00056110) stacon_top_pane

0x8f64,	// (0x0005611a) status_pane_ParamLimits

0x8f64,	// (0x0005611a) status_pane

0x8f72,	// (0x00056128) status_small_pane

0x77a0,	// (0x00054956) control_pane

0x77a0,	// (0x00054956) stacon_bottom_pane

0x817f,	// (0x00055335) scroll_pane_cp121

0x8176,	// (0x0005532c) set_content_pane

0x8de0,	// (0x00055f96) bg_active_tab_pane_g1_cp1

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp1

0x8df2,	// (0x00055fa8) bg_active_tab_pane_g3_cp1

0x8de0,	// (0x00055f96) bg_passive_tab_pane_g1_cp1

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp1

0x8df2,	// (0x00055fa8) bg_passive_tab_pane_g3_cp1

0x8dfb,	// (0x00055fb1) bg_active_tab_pane_g1_cp2

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp2

0x8e04,	// (0x00055fba) bg_active_tab_pane_g3_cp2

0x8dfb,	// (0x00055fb1) bg_passive_tab_pane_g1_cp2

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp2

0x8e04,	// (0x00055fba) bg_passive_tab_pane_g3_cp2

0x8e0d,	// (0x00055fc3) bg_active_tab_pane_g1_cp3

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp3

0x8e16,	// (0x00055fcc) bg_active_tab_pane_g3_cp3

0x8e0d,	// (0x00055fc3) bg_passive_tab_pane_g1_cp3

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp3

0x8e16,	// (0x00055fcc) bg_passive_tab_pane_g3_cp3

0x8e1f,	// (0x00055fd5) bg_active_tab_pane_g1_cp4

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp4

0x8e2a,	// (0x00055fe0) bg_active_tab_pane_g3_cp4

0x8e1f,	// (0x00055fd5) bg_passive_tab_pane_g1_cp4

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp4

0x8e2a,	// (0x00055fe0) bg_passive_tab_pane_g3_cp4

0x8e73,	// (0x00056029) bg_active_tab_pane_g1_cp5

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp5

0x8e7c,	// (0x00056032) bg_active_tab_pane_g3_cp5

0x8e73,	// (0x00056029) bg_passive_tab_pane_g1_cp5

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp5

0x8e7c,	// (0x00056032) bg_passive_tab_pane_g3_cp5

0x8e85,	// (0x0005603b) list_set_graphic_pane_ParamLimits

0x8e85,	// (0x0005603b) list_set_graphic_pane

0x77a0,	// (0x00054956) bg_set_opt_pane_cp4

0x8ea5,	// (0x0005605b) list_set_graphic_pane_g1_ParamLimits

0x8ea5,	// (0x0005605b) list_set_graphic_pane_g1

0x8eb1,	// (0x00056067) list_set_graphic_pane_g2_ParamLimits

0x8eb1,	// (0x00056067) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0005c8e9) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0005c8e9) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0005cc59) volume_small_pane_cp_g

0x8ed5,	// (0x0005608b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ed5,	// (0x0005608b) list_double2_large_graphic_pane_g1_cp2

0x8ee1,	// (0x00056097) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ee1,	// (0x00056097) list_double2_large_graphic_pane_g2_cp2

0x8ef2,	// (0x000560a8) list_double2_large_graphic_pane_g3_cp2

0x8efa,	// (0x000560b0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8efa,	// (0x000560b0) list_double2_large_graphic_pane_t1_cp2

0x8f10,	// (0x000560c6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f10,	// (0x000560c6) list_double2_large_graphic_pane_t2_cp2

0xaaf9,	// (0x00057caf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaf9,	// (0x00057caf) list_double_large_graphic_pane_g1_cp2

0xab0a,	// (0x00057cc0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab0a,	// (0x00057cc0) list_double_large_graphic_pane_g2_cp2

0x908b,	// (0x00056241) list_double_large_graphic_pane_g3_cp2

0xab1b,	// (0x00057cd1) list_double_large_graphic_pane_g4_cp

0xab23,	// (0x00057cd9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab23,	// (0x00057cd9) list_double_large_graphic_pane_t1_cp2

0xab3a,	// (0x00057cf0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab3a,	// (0x00057cf0) list_double_large_graphic_pane_t2_cp2

0x8f7d,	// (0x00056133) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f7d,	// (0x00056133) list_double2_graphic_pane_g1_cp2

0x8f8b,	// (0x00056141) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f8b,	// (0x00056141) list_double2_graphic_pane_g2_cp2

0x8f9c,	// (0x00056152) list_double2_graphic_pane_g3_cp2

0x8fa6,	// (0x0005615c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fa6,	// (0x0005615c) list_double2_graphic_pane_t1_cp2

0x8fbc,	// (0x00056172) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fbc,	// (0x00056172) list_double2_graphic_pane_t2_cp2

0x8fce,	// (0x00056184) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fce,	// (0x00056184) list_single_number_heading_pane_g1_cp2

0x8fda,	// (0x00056190) list_single_number_heading_pane_g2_cp2

0x8fe2,	// (0x00056198) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fe2,	// (0x00056198) list_single_number_heading_pane_t1_cp2

0x8ff8,	// (0x000561ae) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ff8,	// (0x000561ae) list_single_number_heading_pane_t2_cp2

0x900a,	// (0x000561c0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x900a,	// (0x000561c0) list_single_number_heading_pane_t3_cp2

0x8fce,	// (0x00056184) list_single_heading_pane_g1_cp2_ParamLimits

0x8fce,	// (0x00056184) list_single_heading_pane_g1_cp2

0x8fda,	// (0x00056190) list_single_heading_pane_g2_cp2

0x8fe2,	// (0x00056198) list_single_heading_pane_t1_cp2_ParamLimits

0x8fe2,	// (0x00056198) list_single_heading_pane_t1_cp2

0xa901,	// (0x00057ab7) list_single_heading_pane_t2_cp2_ParamLimits

0xa901,	// (0x00057ab7) list_single_heading_pane_t2_cp2

0xa849,	// (0x000579ff) list_double_graphic_pane_g1_cp2_ParamLimits

0xa849,	// (0x000579ff) list_double_graphic_pane_g1_cp2

0xa855,	// (0x00057a0b) list_double_graphic_pane_g2_cp2_ParamLimits

0xa855,	// (0x00057a0b) list_double_graphic_pane_g2_cp2

0xa864,	// (0x00057a1a) list_double_graphic_pane_g3_cp2

0xa86c,	// (0x00057a22) list_double_graphic_pane_t1_cp2_ParamLimits

0xa86c,	// (0x00057a22) list_double_graphic_pane_t1_cp2

0xa882,	// (0x00057a38) list_double_graphic_pane_t2_cp2_ParamLimits

0xa882,	// (0x00057a38) list_double_graphic_pane_t2_cp2

0x907f,	// (0x00056235) list_double_number_pane_g1_cp2_ParamLimits

0x907f,	// (0x00056235) list_double_number_pane_g1_cp2

0x908b,	// (0x00056241) list_double_number_pane_g2_cp2

0xa80d,	// (0x000579c3) list_double_number_pane_t1_cp2_ParamLimits

0xa80d,	// (0x000579c3) list_double_number_pane_t1_cp2

0xa821,	// (0x000579d7) list_double_number_pane_t2_cp2_ParamLimits

0xa821,	// (0x000579d7) list_double_number_pane_t2_cp2

0xa837,	// (0x000579ed) list_double_number_pane_t3_cp2_ParamLimits

0xa837,	// (0x000579ed) list_double_number_pane_t3_cp2

0xa6f6,	// (0x000578ac) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6f6,	// (0x000578ac) list_single_graphic_pane_g1_cp2

0x90ec,	// (0x000562a2) list_single_graphic_pane_g2_cp2_ParamLimits

0x90ec,	// (0x000562a2) list_single_graphic_pane_g2_cp2

0x90f8,	// (0x000562ae) list_single_graphic_pane_g3_cp2

0xa6cc,	// (0x00057882) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6cc,	// (0x00057882) list_single_graphic_pane_t1_cp2

0x90ec,	// (0x000562a2) list_single_number_pane_g1_cp2_ParamLimits

0x90ec,	// (0x000562a2) list_single_number_pane_g1_cp2

0x90f8,	// (0x000562ae) list_single_number_pane_g2_cp2

0xa6cc,	// (0x00057882) list_single_number_pane_t1_cp2_ParamLimits

0xa6cc,	// (0x00057882) list_single_number_pane_t1_cp2

0xa6e2,	// (0x00057898) list_single_number_pane_t2_cp2_ParamLimits

0xa6e2,	// (0x00057898) list_single_number_pane_t2_cp2

0x8ee1,	// (0x00056097) list_double2_pane_g1_cp2_ParamLimits

0x8ee1,	// (0x00056097) list_double2_pane_g1_cp2

0x8ef2,	// (0x000560a8) list_double2_pane_g2_cp2

0x9057,	// (0x0005620d) list_double2_pane_t1_cp2_ParamLimits

0x9057,	// (0x0005620d) list_double2_pane_t1_cp2

0x906d,	// (0x00056223) list_double2_pane_t2_cp2_ParamLimits

0x906d,	// (0x00056223) list_double2_pane_t2_cp2

0x907f,	// (0x00056235) list_double_pane_g1_cp2_ParamLimits

0x907f,	// (0x00056235) list_double_pane_g1_cp2

0x908b,	// (0x00056241) list_double_pane_g2_cp2

0x9093,	// (0x00056249) list_double_pane_t1_cp2_ParamLimits

0x9093,	// (0x00056249) list_double_pane_t1_cp2

0x90a9,	// (0x0005625f) list_double_pane_t2_cp2_ParamLimits

0x90a9,	// (0x0005625f) list_double_pane_t2_cp2

0x90dc,	// (0x00056292) list_single_pane_cp2_g3

0x90ec,	// (0x000562a2) list_single_pane_g1_cp2_ParamLimits

0x90ec,	// (0x000562a2) list_single_pane_g1_cp2

0x90f8,	// (0x000562ae) list_single_pane_g2_cp2

0x9100,	// (0x000562b6) list_single_pane_t1_cp2_ParamLimits

0x9100,	// (0x000562b6) list_single_pane_t1_cp2

0x9118,	// (0x000562ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9118,	// (0x000562ce) list_single_large_graphic_pane_g1_cp2

0x84e6,	// (0x0005569c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x84e6,	// (0x0005569c) list_single_large_graphic_pane_g2_cp2

0x9124,	// (0x000562da) list_single_large_graphic_pane_g3_cp2

0x912c,	// (0x000562e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x912c,	// (0x000562e2) list_single_large_graphic_pane_g4_cp1

0x9146,	// (0x000562fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9146,	// (0x000562fc) list_single_large_graphic_pane_t1_cp2

0xa698,	// (0x0005784e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa698,	// (0x0005784e) list_single_graphic_heading_pane_g1_cp2

0xa665,	// (0x0005781b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa665,	// (0x0005781b) list_single_graphic_heading_pane_g4_cp2

0x90f8,	// (0x000562ae) list_single_graphic_heading_pane_g5_cp2

0xa6a4,	// (0x0005785a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6a4,	// (0x0005785a) list_single_graphic_heading_pane_t1_cp2

0xa6ba,	// (0x00057870) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ba,	// (0x00057870) list_single_graphic_heading_pane_t2_cp2

0xa659,	// (0x0005780f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa659,	// (0x0005780f) list_single_2graphic_pane_g1_cp2

0xa665,	// (0x0005781b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa665,	// (0x0005781b) list_single_2graphic_pane_g2_cp2

0x90f8,	// (0x000562ae) list_single_2graphic_pane_g3_cp2

0xa676,	// (0x0005782c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa676,	// (0x0005782c) list_single_2graphic_pane_g4_cp2

0xa682,	// (0x00057838) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa682,	// (0x00057838) list_single_2graphic_pane_t1_cp2

0x199d,	// (0x0004eb53) list_highlight_pane_g10_cp1

0xa231,	// (0x000573e7) list_highlight_pane_g1_cp1

0xa239,	// (0x000573ef) list_highlight_pane_g2_cp1

0xa241,	// (0x000573f7) list_highlight_pane_g3_cp1

0xa249,	// (0x000573ff) list_highlight_pane_g4_cp1

0xa251,	// (0x00057407) list_highlight_pane_g5_cp1

0xa259,	// (0x0005740f) list_highlight_pane_g6_cp1

0xa261,	// (0x00057417) list_highlight_pane_g7_cp1

0xa269,	// (0x0005741f) list_highlight_pane_g8_cp1

0xa271,	// (0x00057427) list_highlight_pane_g9_cp1

0xa151,	// (0x00057307) form_field_slider_pane_t3

0xa15f,	// (0x00057315) form_field_slider_pane_t4

0xa16d,	// (0x00057323) slider_form_pane_ParamLimits

0xa16d,	// (0x00057323) slider_form_pane

0x77a0,	// (0x00054956) control_abbreviations

0x77a0,	// (0x00054956) control_conventions

0x77a0,	// (0x00054956) control_definitions

0x77a0,	// (0x00054956) format_table_attribute

0xa94b,	// (0x00057b01) bg_popup_preview_window_pane_g9

0x77a0,	// (0x00054956) format_table_data2

0x77a0,	// (0x00054956) format_table_data3

0x77a0,	// (0x00054956) format_table_data_example

0x0008,

0x77a0,	// (0x00054956) intro_purpose

0xf8ca,	// (0x0005ca80) bg_popup_preview_window_pane_g

0x77a0,	// (0x00054956) texts_category

0x77a0,	// (0x00054956) texts_graphics

0x915c,	// (0x00056312) text_digital

0x916b,	// (0x00056321) text_primary

0x917a,	// (0x00056330) text_primary_small

0x9189,	// (0x0005633f) text_secondary

0x9198,	// (0x0005634e) text_title

0xb06c,	// (0x00058222) bg_passive_tab_pane_g1_cp3_srt

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp3_srt

0xb075,	// (0x0005822b) bg_passive_tab_pane_g3_cp3_srt

0x7880,	// (0x00054a36) bg_active_tab_pane_cp3_srt_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp3_srt

0xb07e,	// (0x00058234) tabs_4_active_pane_srt_g1

0xb086,	// (0x0005823c) tabs_4_active_pane_srt_t1_ParamLimits

0xb086,	// (0x0005823c) tabs_4_active_pane_srt_t1

0xb06c,	// (0x00058222) bg_active_tab_pane_g1_cp3_copy1

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp3_copy1

0xb075,	// (0x0005822b) bg_active_tab_pane_g3_cp3_copy1

0x7880,	// (0x00054a36) tabs_2_long_active_pane_srt_ParamLimits

0x7880,	// (0x00054a36) tabs_2_long_active_pane_srt

0x7880,	// (0x00054a36) tabs_2_long_passive_pane_srt_ParamLimits

0x7880,	// (0x00054a36) tabs_2_long_passive_pane_srt

0x86da,	// (0x00055890) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86da,	// (0x00055890) bg_passive_tab_pane_cp4_srt

0xad79,	// (0x00057f2f) bg_passive_tab_pane_g1_cp4_srt

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp4_srt

0xad82,	// (0x00057f38) bg_passive_tab_pane_g3_cp4_srt

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp4_srt_ParamLimits

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp4_srt

0xad8b,	// (0x00057f41) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8b,	// (0x00057f41) tabs_2_long_active_pane_srt_t1

0xad79,	// (0x00057f2f) bg_active_tab_pane_g1_cp4_srt

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp4_srt

0xad82,	// (0x00057f38) bg_active_tab_pane_g3_cp4_srt

0x7afb,	// (0x00054cb1) tabs_3_long_active_pane_srt_ParamLimits

0x7afb,	// (0x00054cb1) tabs_3_long_active_pane_srt

0x7afb,	// (0x00054cb1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7afb,	// (0x00054cb1) tabs_3_long_passive_pane_cp_srt

0x7afb,	// (0x00054cb1) tabs_3_long_passive_pane_srt_ParamLimits

0x7afb,	// (0x00054cb1) tabs_3_long_passive_pane_srt

0x86da,	// (0x00055890) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86da,	// (0x00055890) bg_passive_tab_pane_cp5_srt

0x8e73,	// (0x00056029) bg_passive_tab_pane_g1_cp5_srt

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp5_srt

0x8e7c,	// (0x00056032) bg_passive_tab_pane_g3_cp5_srt

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp5_srt_ParamLimits

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp5_srt

0xad67,	// (0x00057f1d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad67,	// (0x00057f1d) tabs_3_long_active_pane_srt_t1

0x8e73,	// (0x00056029) bg_active_tab_pane_g1_cp5_srt

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp5_srt

0x8e7c,	// (0x00056032) bg_active_tab_pane_g3_cp5_srt

0xad59,	// (0x00057f0f) navi_text_pane_srt_t1

0xad51,	// (0x00057f07) navi_icon_pane_srt_g1

0x936d,	// (0x00056523) midp_editing_number_pane_srt

0x91a7,	// (0x0005635d) midp_ticker_pane_srt

0x9375,	// (0x0005652b) midp_ticker_pane_srt_g1

0x937d,	// (0x00056533) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0005c908) midp_ticker_pane_srt_g

0x9385,	// (0x0005653b) midp_ticker_pane_srt_t1

0xad42,	// (0x00057ef8) midp_editing_number_pane_t1_copy1

0x91af,	// (0x00056365) listscroll_midp_pane

0x91af,	// (0x00056365) midp_form_pane

0x921f,	// (0x000563d5) midp_info_popup_window_ParamLimits

0x921f,	// (0x000563d5) midp_info_popup_window

0x8605,	// (0x000557bb) bg_popup_sub_pane_cp50_ParamLimits

0x8605,	// (0x000557bb) bg_popup_sub_pane_cp50

0x9e49,	// (0x00056fff) listscroll_midp_info_pane_ParamLimits

0x9e49,	// (0x00056fff) listscroll_midp_info_pane

0x9e29,	// (0x00056fdf) listscroll_form_midp_pane_ParamLimits

0x9e29,	// (0x00056fdf) listscroll_form_midp_pane

0x9e35,	// (0x00056feb) scroll_bar_cp050

0x9e09,	// (0x00056fbf) list_midp_pane

0xbae7,	// (0x00058c9d) signal_pane_g2_cp

0x9d43,	// (0x00056ef9) listscroll_midp_info_pane_t1_ParamLimits

0x9d43,	// (0x00056ef9) listscroll_midp_info_pane_t1

0x9d5b,	// (0x00056f11) listscroll_midp_info_pane_t2_ParamLimits

0x9d5b,	// (0x00056f11) listscroll_midp_info_pane_t2

0x9d99,	// (0x00056f4f) listscroll_midp_info_pane_t3_ParamLimits

0x9d99,	// (0x00056f4f) listscroll_midp_info_pane_t3

0x9dd3,	// (0x00056f89) listscroll_midp_info_pane_t4_ParamLimits

0x9dd3,	// (0x00056f89) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0005c9bb) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0005c9bb) listscroll_midp_info_pane_t

0x8666,	// (0x0005581c) scroll_pane_cp21

0x9ce1,	// (0x00056e97) form_midp_field_choice_group_pane

0x9cea,	// (0x00056ea0) form_midp_field_text_pane

0x9d29,	// (0x00056edf) form_midp_field_time_pane

0x9d31,	// (0x00056ee7) form_midp_gauge_slider_pane

0x9d3a,	// (0x00056ef0) form_midp_gauge_wait_pane

0x77a0,	// (0x00054956) form_midp_image_pane

0x5e28,	// (0x00052fde) list_single_midp_pane_ParamLimits

0x5e28,	// (0x00052fde) list_single_midp_pane

0x9c99,	// (0x00056e4f) form_midp_field_text_pane_t1

0x9a69,	// (0x00056c1f) input_focus_pane_cp050

0x9cd0,	// (0x00056e86) list_midp_form_text_pane

0x9c68,	// (0x00056e1e) form_midp_field_choice_group_pane_t1

0x9c76,	// (0x00056e2c) input_focus_pane_cp051

0x9c8a,	// (0x00056e40) list_midp_choice_pane

0x77a0,	// (0x00054956) status_idle_pane

0x9c4c,	// (0x00056e02) form_midp_field_time_pane_t1

0x199d,	// (0x0004eb53) wait_anim_pane_g2_copy1

0x9c5a,	// (0x00056e10) form_midp_field_time_pane_t2

0x0001,

0x92cd,	// (0x00056483) aid_navinavi_width_2_pane

0xf800,	// (0x0005c9b6) form_midp_field_time_pane_t

0x77a0,	// (0x00054956) input_focus_pane_cp052

0x77a0,	// (0x00054956) bg_input_focus_pane_cp040

0x9c0c,	// (0x00056dc2) form_midp_gauge_slider_pane_t1

0x9c1a,	// (0x00056dd0) form_midp_gauge_slider_pane_t2

0x9c28,	// (0x00056dde) form_midp_gauge_slider_pane_t3

0x9c36,	// (0x00056dec) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0005c9ad) form_midp_gauge_slider_pane_t

0x9c44,	// (0x00056dfa) form_midp_slider_pane

0x7880,	// (0x00054a36) bg_input_focus_pane_cp041_ParamLimits

0x7880,	// (0x00054a36) bg_input_focus_pane_cp041

0x9bd9,	// (0x00056d8f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bd9,	// (0x00056d8f) form_midp_gauge_wait_pane_t1

0x9beb,	// (0x00056da1) form_midp_gauge_wait_pane_t2_ParamLimits

0x9beb,	// (0x00056da1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0005c9a8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0005c9a8) form_midp_gauge_wait_pane_t

0x9bfd,	// (0x00056db3) form_midp_wait_pane_ParamLimits

0x9bfd,	// (0x00056db3) form_midp_wait_pane

0x9ba3,	// (0x00056d59) form_midp_image_pane_g1

0x9bac,	// (0x00056d62) form_midp_image_pane_t1

0x9bbb,	// (0x00056d71) form_midp_image_pane_t2

0x9bca,	// (0x00056d80) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0005c9a1) form_midp_image_pane_t

0x9b9a,	// (0x00056d50) list_single_midp_pane_g1

0x5e19,	// (0x00052fcf) list_single_midp_pane_t1

0x9b72,	// (0x00056d28) list_midp_form_item_pane_ParamLimits

0x9b72,	// (0x00056d28) list_midp_form_item_pane

0x9275,	// (0x0005642b) list_midp_form_item_pane_t1

0x9284,	// (0x0005643a) midp_ticker_pane_g1

0x9290,	// (0x00056446) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0005c8ee) midp_ticker_pane_g

0x929c,	// (0x00056452) midp_ticker_pane_t1

0xaf93,	// (0x00058149) midp_editing_number_pane_t1

0xaf71,	// (0x00058127) midp_editing_number_pane

0xaf80,	// (0x00058136) midp_ticker_pane

0xad32,	// (0x00057ee8) ai_message_heading_pane

0x77a0,	// (0x00054956) bg_popup_window_pane_cp14

0xad3a,	// (0x00057ef0) listscroll_ai_message_pane

0xacbc,	// (0x00057e72) ai_message_heading_pane_g1_ParamLimits

0xacbc,	// (0x00057e72) ai_message_heading_pane_g1

0xacc8,	// (0x00057e7e) ai_message_heading_pane_g2_ParamLimits

0xacc8,	// (0x00057e7e) ai_message_heading_pane_g2

0xacd4,	// (0x00057e8a) ai_message_heading_pane_g3_ParamLimits

0xacd4,	// (0x00057e8a) ai_message_heading_pane_g3

0xace0,	// (0x00057e96) ai_message_heading_pane_g4_ParamLimits

0xace0,	// (0x00057e96) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0005cae2) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0005cae2) ai_message_heading_pane_g

0xacec,	// (0x00057ea2) ai_message_heading_pane_t1_ParamLimits

0xacec,	// (0x00057ea2) ai_message_heading_pane_t1

0xad06,	// (0x00057ebc) ai_message_heading_pane_t2_ParamLimits

0xad06,	// (0x00057ebc) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0005caeb) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0005caeb) ai_message_heading_pane_t

0xad18,	// (0x00057ece) bg_popup_heading_pane_cp1_ParamLimits

0xad18,	// (0x00057ece) bg_popup_heading_pane_cp1

0xacaa,	// (0x00057e60) list_ai_message_pane_ParamLimits

0xacaa,	// (0x00057e60) list_ai_message_pane

0x8666,	// (0x0005581c) scroll_pane_cp10

0xac46,	// (0x00057dfc) list_ai_message_pane_g1

0xac4e,	// (0x00057e04) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0005cabf) list_ai_message_pane_g

0xac56,	// (0x00057e0c) list_ai_message_pane_t1_ParamLimits

0xac56,	// (0x00057e0c) list_ai_message_pane_t1

0xac6b,	// (0x00057e21) list_ai_message_pane_t2_ParamLimits

0xac6b,	// (0x00057e21) list_ai_message_pane_t2

0xac80,	// (0x00057e36) list_ai_message_pane_t3_ParamLimits

0xac80,	// (0x00057e36) list_ai_message_pane_t3

0xac95,	// (0x00057e4b) list_ai_message_pane_t4_ParamLimits

0xac95,	// (0x00057e4b) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0005cac4) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0005cac4) list_ai_message_pane_t

0xac31,	// (0x00057de7) cell_ai_soft_ind_pane_ParamLimits

0xac31,	// (0x00057de7) cell_ai_soft_ind_pane

0x92ae,	// (0x00056464) cell_ai_soft_ind_pane_g1_ParamLimits

0x92ae,	// (0x00056464) cell_ai_soft_ind_pane_g1

0x77a0,	// (0x00054956) grid_highlight_cp1

0x92bb,	// (0x00056471) text_secondary_cp56_ParamLimits

0x92bb,	// (0x00056471) text_secondary_cp56

0xac06,	// (0x00057dbc) example_general_pane_ParamLimits

0xac06,	// (0x00057dbc) example_general_pane

0xac12,	// (0x00057dc8) example_parent_pane_g1_ParamLimits

0xac12,	// (0x00057dc8) example_parent_pane_g1

0xac1e,	// (0x00057dd4) example_parent_pane_t1_ParamLimits

0xac1e,	// (0x00057dd4) example_parent_pane_t1

0x59f7,	// (0x00052bad) popup_preview_text_window_ParamLimits

0x59f7,	// (0x00052bad) popup_preview_text_window

0x90e4,	// (0x0005629a) list_single_pane_cp2_g4

0x7bd7,	// (0x00054d8d) bg_popup_preview_window_pane_ParamLimits

0x7bd7,	// (0x00054d8d) bg_popup_preview_window_pane

0xa953,	// (0x00057b09) popup_preview_text_window_t1_ParamLimits

0xa953,	// (0x00057b09) popup_preview_text_window_t1

0xa971,	// (0x00057b27) popup_preview_text_window_t2_ParamLimits

0xa971,	// (0x00057b27) popup_preview_text_window_t2

0xa9ba,	// (0x00057b70) popup_preview_text_window_t3_ParamLimits

0xa9ba,	// (0x00057b70) popup_preview_text_window_t3

0xa9ff,	// (0x00057bb5) popup_preview_text_window_t4_ParamLimits

0xa9ff,	// (0x00057bb5) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0005ca93) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0005ca93) popup_preview_text_window_t

0xaa7d,	// (0x00057c33) scroll_pane_cp11

0x99f5,	// (0x00056bab) bg_popup_preview_window_pane_g1

0xa913,	// (0x00057ac9) bg_popup_preview_window_pane_g2

0xa91b,	// (0x00057ad1) bg_popup_preview_window_pane_g3

0xa923,	// (0x00057ad9) bg_popup_preview_window_pane_g4

0xa92b,	// (0x00057ae1) bg_popup_preview_window_pane_g5

0xa933,	// (0x00057ae9) bg_popup_preview_window_pane_g6

0xa93b,	// (0x00057af1) bg_popup_preview_window_pane_g7

0xa943,	// (0x00057af9) bg_popup_preview_window_pane_g8

0x455a,	// (0x00051710) aid_popup_width_pane

0x59d5,	// (0x00052b8b) popup_midp_note_alarm_window_ParamLimits

0x59d5,	// (0x00052b8b) popup_midp_note_alarm_window

0x8190,	// (0x00055346) data_form_pane_ParamLimits

0x4e30,	// (0x00051fe6) form_field_data_pane_g1

0x4e3a,	// (0x00051ff0) form_field_data_pane_t1_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_ParamLimits

0x4e52,	// (0x00052008) data_form_wide_pane_ParamLimits

0x4e63,	// (0x00052019) form_field_data_wide_pane_g1

0x4e6f,	// (0x00052025) form_field_data_wide_pane_t1_ParamLimits

0x7e7e,	// (0x00055034) input_focus_pane_cp6_ParamLimits

0x8613,	// (0x000557c9) input_popup_find_pane_g1_ParamLimits

0x8613,	// (0x000557c9) input_popup_find_pane_g1

0x50e5,	// (0x0005229b) aid_navi_side_left_pane

0x50fa,	// (0x000522b0) aid_navi_side_right_pane

0xa32c,	// (0x000574e2) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x000574e2) bg_popup_window_pane_cp30

0xa3a6,	// (0x0005755c) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x0005755c) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x0005758c) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x0005758c) popup_midp_note_alarm_window_t1

0xa477,	// (0x0005762d) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x0005762d) popup_midp_note_alarm_window_t2

0xa525,	// (0x000576db) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x000576db) popup_midp_note_alarm_window_t3

0xa557,	// (0x0005770d) popup_midp_note_alarm_window_t4_ParamLimits

0xa557,	// (0x0005770d) popup_midp_note_alarm_window_t4

0xa57d,	// (0x00057733) popup_midp_note_alarm_window_t5_ParamLimits

0xa57d,	// (0x00057733) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0005ca30) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0005ca30) popup_midp_note_alarm_window_t

0xa629,	// (0x000577df) wait_bar_pane_cp1_ParamLimits

0xa629,	// (0x000577df) wait_bar_pane_cp1

0x77a0,	// (0x00054956) wait_anim_pane_copy1

0x77a0,	// (0x00054956) wait_border_pane_copy1

0xa012,	// (0x000571c8) wait_border_pane_g1_copy1

0x4e89,	// (0x0005203f) form_field_popup_pane_g1

0x4e91,	// (0x00052047) form_field_popup_pane_t1_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_cp7_ParamLimits

0x8514,	// (0x000556ca) list_form_pane_ParamLimits

0x4ea9,	// (0x0005205f) form_field_popup_wide_pane_g1

0x4eb1,	// (0x00052067) form_field_popup_wide_pane_t1_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_cp8_ParamLimits

0x8520,	// (0x000556d6) list_form_wide_pane_ParamLimits

0xb10e,	// (0x000582c4) aid_size_cell_graphic_pane

0x4f3b,	// (0x000520f1) data_form_pane_t1_ParamLimits

0x6090,	// (0x00053246) data_form_wide_pane_t1_ParamLimits

0x95bc,	// (0x00056772) bg_status_flat_pane

0x77e0,	// (0x00054996) title_pane_t1_ParamLimits

0x7848,	// (0x000549fe) title_pane_t2_ParamLimits

0x786e,	// (0x00054a24) title_pane_t3_ParamLimits

0xf532,	// (0x0005c6e8) title_pane_t_ParamLimits

0x8ae7,	// (0x00055c9d) level_1_signal_ParamLimits

0x8af9,	// (0x00055caf) level_2_signal_ParamLimits

0x8b0c,	// (0x00055cc2) level_3_signal_ParamLimits

0x8b1f,	// (0x00055cd5) level_4_signal_ParamLimits

0x8b32,	// (0x00055ce8) level_5_signal_ParamLimits

0x8b45,	// (0x00055cfb) level_6_signal_ParamLimits

0x8b58,	// (0x00055d0e) level_7_signal_ParamLimits

0x8ae7,	// (0x00055c9d) level_1_battery_ParamLimits

0x8af9,	// (0x00055caf) level_2_battery_ParamLimits

0x8b0c,	// (0x00055cc2) level_3_battery_ParamLimits

0x8b1f,	// (0x00055cd5) level_4_battery_ParamLimits

0x8b32,	// (0x00055ce8) level_5_battery_ParamLimits

0x8b45,	// (0x00055cfb) level_6_battery_ParamLimits

0x8b58,	// (0x00055d0e) level_7_battery_ParamLimits

0xa231,	// (0x000573e7) bg_status_flat_pane_g1

0xa239,	// (0x000573ef) bg_status_flat_pane_g2

0xa241,	// (0x000573f7) bg_status_flat_pane_g3

0xa249,	// (0x000573ff) bg_status_flat_pane_g4

0xa251,	// (0x00057407) bg_status_flat_pane_g5

0xa259,	// (0x0005740f) bg_status_flat_pane_g6

0xa261,	// (0x00057417) bg_status_flat_pane_g7

0x7896,	// (0x00054a4c) tabs_3_active_pane_t1_ParamLimits

0x7896,	// (0x00054a4c) tabs_3_passive_pane_t1_ParamLimits

0x78b0,	// (0x00054a66) tabs_4_active_pane_t1_ParamLimits

0x78b0,	// (0x00054a66) tabs_4_1_passive_pane_t1_ParamLimits

0x86a7,	// (0x0005585d) tabs_2_active_pane_t1_ParamLimits

0x86a7,	// (0x0005585d) tabs_2_passive_pane_t1_ParamLimits

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp4_ParamLimits

0x86c7,	// (0x0005587d) tabs_2_long_active_pane_t1_ParamLimits

0x86da,	// (0x00055890) bg_passive_tab_pane_cp4_ParamLimits

0x5cfa,	// (0x00052eb0) list_single_midp_graphic_pane_t1_ParamLimits

0x86b9,	// (0x0005586f) bg_active_tab_pane_cp5_ParamLimits

0x86e6,	// (0x0005589c) tabs_3_long_active_pane_t1_ParamLimits

0x86da,	// (0x00055890) bg_passive_tab_pane_cp5_ParamLimits

0x5cfa,	// (0x00052eb0) list_single_midp_graphic_pane_t1

0x95bc,	// (0x00056772) bg_status_flat_pane_ParamLimits

0x9685,	// (0x0005683b) indicator_pane_cp2_ParamLimits

0x9685,	// (0x0005683b) indicator_pane_cp2

0x97b0,	// (0x00056966) navi_pane_srt_ParamLimits

0x97b0,	// (0x00056966) navi_pane_srt

0x97d4,	// (0x0005698a) popup_clock_digital_analogue_window_cp1

0x795d,	// (0x00054b13) indicator_pane_t1

0x91a7,	// (0x0005635d) copy_highlight_pane

0x91a7,	// (0x0005635d) cursor_graphics_pane

0x91a7,	// (0x0005635d) graphic_within_text_pane

0x91a7,	// (0x0005635d) link_highlight_pane

0xaa40,	// (0x00057bf6) popup_preview_text_window_t5_ParamLimits

0xaa40,	// (0x00057bf6) popup_preview_text_window_t5

0x92d5,	// (0x0005648b) cursor_digital_pane

0x92d5,	// (0x0005648b) cursor_primary_pane

0x92e6,	// (0x0005649c) cursor_primary_small_pane

0x92ee,	// (0x000564a4) cursor_secondary_pane

0x92f6,	// (0x000564ac) cursor_title_pane

0x92d5,	// (0x0005648b) link_highlight_digital_pane

0x92dd,	// (0x00056493) link_highlight_primary_pane

0x92e6,	// (0x0005649c) link_highlight_primary_small_pane

0x92ee,	// (0x000564a4) link_highlight_secondary_pane

0x92f6,	// (0x000564ac) link_highlight_title_pane

0x92d5,	// (0x0005648b) copy_highlight_digital_pane

0x92d5,	// (0x0005648b) copy_highlight_primary_pane

0x92e6,	// (0x0005649c) copy_highlight_primary_small_pane

0x92ee,	// (0x000564a4) copy_highlight_secondary_pane

0x92f6,	// (0x000564ac) copy_highlight_title_pane

0x92ee,	// (0x000564a4) graphic_text_digital_pane

0xa2cf,	// (0x00057485) graphic_text_primary_pane

0xa2d8,	// (0x0005748e) graphic_text_primary_small_pane

0x92e6,	// (0x0005649c) graphic_text_secondary_pane

0x92d5,	// (0x0005648b) graphic_text_title_pane

0x92fe,	// (0x000564b4) cursor_primary_pane_g1

0xa2c1,	// (0x00057477) cursor_text_primary_t1

0xa2a9,	// (0x0005745f) cursor_primary_small_pane_g1

0xa2b3,	// (0x00057469) cursor_text_primary_small_t1

0xa291,	// (0x00057447) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x00057451) cursor_text_primary_small_t1_copy1

0xa279,	// (0x0005742f) cursor_text_title_t1

0xa287,	// (0x0005743d) cursor_title_pane_g1

0x92fe,	// (0x000564b4) cursor_digital_pane_g1

0x9308,	// (0x000564be) cursor_text_digital_t1

0x932d,	// (0x000564e3) link_highlight_primary_pane_g1

0xa222,	// (0x000573d8) link_highlight_primary_pane_t1

0x9316,	// (0x000564cc) link_highlight_primary_small_pane_g1

0x931e,	// (0x000564d4) link_highlight_primary_small_pane_t1

0x932d,	// (0x000564e3) link_highlight_secondary_pane_g1

0x9335,	// (0x000564eb) link_highlight_secondary_pane_t1

0xa196,	// (0x0005734c) link_highlight_title_pane_g1

0xa19e,	// (0x00057354) link_highlight_title_pane_t1

0xa17f,	// (0x00057335) link_highlight_digital_pane_g1

0xa187,	// (0x0005733d) link_highlight_digital_pane_t1

0xa057,	// (0x0005720d) copy_highlight_primary_pane_g1

0xa05f,	// (0x00057215) copy_highlight_primary_pane_t1

0xa031,	// (0x000571e7) copy_highlight_primary_small_pane_g1

0xa048,	// (0x000571fe) copy_highlight_primary_small_pane_t1

0x9344,	// (0x000564fa) copy_highlight_secondary_pane_g1

0x934c,	// (0x00056502) copy_highlight_secondary_pane_t1

0xa031,	// (0x000571e7) copy_highlight_title_pane_g1

0xa039,	// (0x000571ef) copy_highlight_title_pane_t1

0xa057,	// (0x0005720d) copy_highlight_digital_pane_g1

0xb2dc,	// (0x00058492) copy_highlight_digital_pane_t1

0xb230,	// (0x000583e6) graphic_text_primary_pane_g1

0xb2c0,	// (0x00058476) graphic_text_primary_pane_t1

0xb2ce,	// (0x00058484) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0005cb5f) graphic_text_primary_pane_t

0xb29c,	// (0x00058452) graphic_text_primary_small_pane_g1

0xb2a4,	// (0x0005845a) graphic_text_primary_small_pane_t1

0xb2b2,	// (0x00058468) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0005cb5a) graphic_text_primary_small_pane_t

0xb278,	// (0x0005842e) graphic_text_secondary_pane_g1

0xb280,	// (0x00058436) graphic_text_secondary_pane_t1

0xb28e,	// (0x00058444) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0005cb55) graphic_text_secondary_pane_t

0xb254,	// (0x0005840a) graphic_text_title_pane_g1

0xb25c,	// (0x00058412) graphic_text_title_pane_t1

0xb26a,	// (0x00058420) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0005cb50) graphic_text_title_pane_t

0xb230,	// (0x000583e6) graphic_text_digital_pane_g1

0xb238,	// (0x000583ee) graphic_text_digital_pane_t1

0xb246,	// (0x000583fc) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0005cb4b) graphic_text_digital_pane_t

0x7880,	// (0x00054a36) navi_icon_pane_srt_ParamLimits

0x7880,	// (0x00054a36) navi_icon_pane_srt

0x77a0,	// (0x00054956) navi_midp_pane_srt

0x77a0,	// (0x00054956) navi_navi_pane_srt

0x7880,	// (0x00054a36) navi_text_pane_srt_ParamLimits

0x7880,	// (0x00054a36) navi_text_pane_srt

0xb1fb,	// (0x000583b1) navi_navi_icon_text_pane_srt

0xb203,	// (0x000583b9) navi_navi_pane_srt_g1_ParamLimits

0xb203,	// (0x000583b9) navi_navi_pane_srt_g1

0xb215,	// (0x000583cb) navi_navi_pane_srt_g2_ParamLimits

0xb215,	// (0x000583cb) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0005cb46) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0005cb46) navi_navi_pane_srt_g

0xb227,	// (0x000583dd) navi_navi_tabs_pane_srt

0xb1fb,	// (0x000583b1) navi_navi_text_pane_srt

0xb1fb,	// (0x000583b1) navi_navi_volume_pane_srt

0xb1ec,	// (0x000583a2) navi_navi_text_pane_srt_t1

0x61a8,	// (0x0005335e) navi_navi_volume_pane_srt_g1

0x61b0,	// (0x00053366) volume_small_pane_srt_ParamLimits

0x61b0,	// (0x00053366) volume_small_pane_srt

0x5433,	// (0x000525e9) volume_small_pane_srt_g1_ParamLimits

0x5433,	// (0x000525e9) volume_small_pane_srt_g1

0x5443,	// (0x000525f9) volume_small_pane_srt_g2_ParamLimits

0x5443,	// (0x000525f9) volume_small_pane_srt_g2

0x5454,	// (0x0005260a) volume_small_pane_srt_g3_ParamLimits

0x5454,	// (0x0005260a) volume_small_pane_srt_g3

0x5465,	// (0x0005261b) volume_small_pane_srt_g4_ParamLimits

0x5465,	// (0x0005261b) volume_small_pane_srt_g4

0x5476,	// (0x0005262c) volume_small_pane_srt_g5_ParamLimits

0x5476,	// (0x0005262c) volume_small_pane_srt_g5

0x5487,	// (0x0005263d) volume_small_pane_srt_g6_ParamLimits

0x5487,	// (0x0005263d) volume_small_pane_srt_g6

0x5498,	// (0x0005264e) volume_small_pane_srt_g7_ParamLimits

0x5498,	// (0x0005264e) volume_small_pane_srt_g7

0x54a9,	// (0x0005265f) volume_small_pane_srt_g8_ParamLimits

0x54a9,	// (0x0005265f) volume_small_pane_srt_g8

0x54ba,	// (0x00052670) volume_small_pane_srt_g9_ParamLimits

0x54ba,	// (0x00052670) volume_small_pane_srt_g9

0x54cb,	// (0x00052681) volume_small_pane_srt_g10_ParamLimits

0x54cb,	// (0x00052681) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0005c8f3) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0005c8f3) volume_small_pane_srt_g

0x7c80,	// (0x00054e36) query_popup_data_pane_cp2

0xb1d2,	// (0x00058388) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d2,	// (0x00058388) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x00057485) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x00057485) navi_tabs_2_pane_srt

0xa2cf,	// (0x00057485) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x00057485) navi_tabs_3_pane_srt

0xa2cf,	// (0x00057485) navi_tabs_4_pane_srt

0x6188,	// (0x0005333e) tabs_2_active_pane_srt_ParamLimits

0x6188,	// (0x0005333e) tabs_2_active_pane_srt

0x6198,	// (0x0005334e) tabs_2_passive_pane_srt_ParamLimits

0x6198,	// (0x0005334e) tabs_2_passive_pane_srt

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp1_srt

0xb19e,	// (0x00058354) bg_passive_tab_pane_g1_cp1_srt

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp1_srt

0xb1a7,	// (0x0005835d) bg_passive_tab_pane_g3_cp1_srt

0x7880,	// (0x00054a36) bg_active_tab_pane_cp1_srt_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp1_srt

0xb1b0,	// (0x00058366) tabs_2_active_pane_srt_g1

0xb1b8,	// (0x0005836e) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b8,	// (0x0005836e) tabs_2_active_pane_srt_t1

0xb19e,	// (0x00058354) bg_active_tab_pane_g1_cp1_srt

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp1_srt

0xb1a7,	// (0x0005835d) bg_active_tab_pane_g3_cp1_srt

0x6155,	// (0x0005330b) tabs_3_active_pane_srt_ParamLimits

0x6155,	// (0x0005330b) tabs_3_active_pane_srt

0x6166,	// (0x0005331c) tabs_3_passive_pane_cp_srt_ParamLimits

0x6166,	// (0x0005331c) tabs_3_passive_pane_cp_srt

0x6177,	// (0x0005332d) tabs_3_passive_pane_srt_ParamLimits

0x6177,	// (0x0005332d) tabs_3_passive_pane_srt

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94cb,	// (0x00056681) bg_passive_tab_pane_cp2_srt

0x935b,	// (0x00056511) bg_passive_tab_pane_g1_cp2_srt

0x8de9,	// (0x00055f9f) bg_passive_tab_pane_g2_cp2_srt

0x9364,	// (0x0005651a) bg_passive_tab_pane_g3_cp2_srt

0x7880,	// (0x00054a36) bg_active_tab_pane_cp2_srt_ParamLimits

0x7880,	// (0x00054a36) bg_active_tab_pane_cp2_srt

0xb184,	// (0x0005833a) tabs_3_active_pane_srt_g1

0xb18c,	// (0x00058342) tabs_3_active_pane_srt_t1_ParamLimits

0xb18c,	// (0x00058342) tabs_3_active_pane_srt_t1

0x935b,	// (0x00056511) bg_active_tab_pane_g1_cp2_srt

0x8de9,	// (0x00055f9f) bg_active_tab_pane_g2_cp2_srt

0x9364,	// (0x0005651a) bg_active_tab_pane_g3_cp2_srt

0x610d,	// (0x000532c3) tabs_4_active_pane_srt_ParamLimits

0x610d,	// (0x000532c3) tabs_4_active_pane_srt

0x611f,	// (0x000532d5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x611f,	// (0x000532d5) tabs_4_passive_pane_cp2_srt

0x563e,	// (0x000527f4) aid_size_cell_toolbar

0x86da,	// (0x00055890) main_idle_act_pane_ParamLimits

0x580b,	// (0x000529c1) popup_large_graphic_colour_window_ParamLimits

0x5b72,	// (0x00052d28) popup_toolbar_window_ParamLimits

0x5b72,	// (0x00052d28) popup_toolbar_window

0xafa2,	// (0x00058158) list_single_graphic_2heading_pane_ParamLimits

0xafa2,	// (0x00058158) list_single_graphic_2heading_pane

0x8896,	// (0x00055a4c) aid_size_cell_apps_grid_lsc_pane

0x88a8,	// (0x00055a5e) aid_size_cell_apps_grid_prt_pane

0x94cb,	// (0x00056681) bg_wml_button_pane_cp1_ParamLimits

0x94cb,	// (0x00056681) bg_wml_button_pane_cp1

0x9c99,	// (0x00056e4f) form_midp_field_text_pane_t1_ParamLimits

0x9a69,	// (0x00056c1f) input_focus_pane_cp050_ParamLimits

0x9cd0,	// (0x00056e86) list_midp_form_text_pane_ParamLimits

0x9c76,	// (0x00056e2c) input_focus_pane_cp051_ParamLimits

0x9c8a,	// (0x00056e40) list_midp_choice_pane_ParamLimits

0x9b22,	// (0x00056cd8) list_single_2graphic_pane_cp3_ParamLimits

0x9b22,	// (0x00056cd8) list_single_2graphic_pane_cp3

0x9b43,	// (0x00056cf9) list_single_midp_graphic_pane_ParamLimits

0x9b43,	// (0x00056cf9) list_single_midp_graphic_pane

0x44e2,	// (0x00051698) list_single_graphic_2heading_pane_g1_ParamLimits

0x44e2,	// (0x00051698) list_single_graphic_2heading_pane_g1

0x44ee,	// (0x000516a4) list_single_graphic_2heading_pane_g4_ParamLimits

0x44ee,	// (0x000516a4) list_single_graphic_2heading_pane_g4

0x44fa,	// (0x000516b0) list_single_graphic_2heading_pane_g5_ParamLimits

0x44fa,	// (0x000516b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0005c946) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0005c946) list_single_graphic_2heading_pane_g

0x4506,	// (0x000516bc) list_single_graphic_2heading_pane_t1_ParamLimits

0x4506,	// (0x000516bc) list_single_graphic_2heading_pane_t1

0x451a,	// (0x000516d0) list_single_graphic_2heading_pane_t2_ParamLimits

0x451a,	// (0x000516d0) list_single_graphic_2heading_pane_t2

0x4536,	// (0x000516ec) list_single_graphic_2heading_pane_t3_ParamLimits

0x4536,	// (0x000516ec) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0005c94d) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0005c94d) list_single_graphic_2heading_pane_t

0x9933,	// (0x00056ae9) bg_popup_sub_pane_cp2

0x995d,	// (0x00056b13) grid_toobar_pane

0x5c1f,	// (0x00052dd5) cell_toolbar_pane_ParamLimits

0x5c1f,	// (0x00052dd5) cell_toolbar_pane

0x9999,	// (0x00056b4f) cell_toolbar_pane_g1_ParamLimits

0x9999,	// (0x00056b4f) cell_toolbar_pane_g1

0x99ad,	// (0x00056b63) cell_toolbar_pane_g2_ParamLimits

0x99ad,	// (0x00056b63) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0005c95b) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0005c95b) cell_toolbar_pane_g

0x99cf,	// (0x00056b85) grid_highlight_pane_cp2_ParamLimits

0x99cf,	// (0x00056b85) grid_highlight_pane_cp2

0x99e9,	// (0x00056b9f) toolbar_button_pane

0x99f5,	// (0x00056bab) toolbar_button_pane_g1

0x99fd,	// (0x00056bb3) toolbar_button_pane_g2

0x9a05,	// (0x00056bbb) toolbar_button_pane_g3

0x9a0d,	// (0x00056bc3) toolbar_button_pane_g4

0x9a15,	// (0x00056bcb) toolbar_button_pane_g5

0x9a1d,	// (0x00056bd3) toolbar_button_pane_g6

0x9a25,	// (0x00056bdb) toolbar_button_pane_g7

0x9a2d,	// (0x00056be3) toolbar_button_pane_g8

0x9a35,	// (0x00056beb) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0005c960) toolbar_button_pane_g

0x5c79,	// (0x00052e2f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c79,	// (0x00052e2f) list_single_2graphic_pane_g1_cp3

0x5c85,	// (0x00052e3b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c85,	// (0x00052e3b) list_single_2graphic_pane_g2_cp3

0x5c96,	// (0x00052e4c) list_single_2graphic_pane_g3_cp3

0x5c9e,	// (0x00052e54) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c9e,	// (0x00052e54) list_single_2graphic_pane_g4_cp3

0x5caa,	// (0x00052e60) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5caa,	// (0x00052e60) list_single_2graphic_pane_t1_cp3

0x5cee,	// (0x00052ea4) list_single_midp_graphic_pane_g2_ParamLimits

0x5cee,	// (0x00052ea4) list_single_midp_graphic_pane_g2

0x44da,	// (0x00051690) aid_zoom_text_primary

0x5646,	// (0x000527fc) aid_zoom_text_secondary

0x9415,	// (0x000565cb) status_small_pane_g7_ParamLimits

0x9415,	// (0x000565cb) status_small_pane_g7

0x9438,	// (0x000565ee) status_small_pane_t1_ParamLimits

0x77b7,	// (0x0005496d) title_pane_g2

0x0003,

0xf529,	// (0x0005c6df) title_pane_g

0x7d28,	// (0x00054ede) aid_size_cell_colour_1_pane_ParamLimits

0x7d28,	// (0x00054ede) aid_size_cell_colour_1_pane

0x7d3c,	// (0x00054ef2) aid_size_cell_colour_2_pane_ParamLimits

0x7d3c,	// (0x00054ef2) aid_size_cell_colour_2_pane

0x7d50,	// (0x00054f06) aid_size_cell_colour_3_pane_ParamLimits

0x7d50,	// (0x00054f06) aid_size_cell_colour_3_pane

0x7d64,	// (0x00054f1a) aid_size_cell_colour_4_pane_ParamLimits

0x7d64,	// (0x00054f1a) aid_size_cell_colour_4_pane

0x5022,	// (0x000521d8) title_pane_stacon_g1_ParamLimits

0x5022,	// (0x000521d8) title_pane_stacon_g1

0xa0b6,	// (0x0005726c) popup_note_wait_window_g3_ParamLimits

0xa0b6,	// (0x0005726c) popup_note_wait_window_g3

0xa12c,	// (0x000572e2) popup_note_wait_window_t5_ParamLimits

0xa12c,	// (0x000572e2) popup_note_wait_window_t5

0x77a0,	// (0x00054956) main_feb_china_hwr_fs_writing_pane

0x56ec,	// (0x000528a2) popup_feb_china_hwr_fs_window_ParamLimits

0x56ec,	// (0x000528a2) popup_feb_china_hwr_fs_window

0x5d7c,	// (0x00052f32) aid_size_cell_hwr_fs_ParamLimits

0x5d7c,	// (0x00052f32) aid_size_cell_hwr_fs

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp3_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp3

0x5d91,	// (0x00052f47) grid_hwr_fs_pane_ParamLimits

0x5d91,	// (0x00052f47) grid_hwr_fs_pane

0x5da9,	// (0x00052f5f) linegrid_hwr_fs_pane_ParamLimits

0x5da9,	// (0x00052f5f) linegrid_hwr_fs_pane

0x5db9,	// (0x00052f6f) cell_hwr_fs_pane_ParamLimits

0x5db9,	// (0x00052f6f) cell_hwr_fs_pane

0x9a75,	// (0x00056c2b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a75,	// (0x00056c2b) linegrid_hwr_fs_pane_g1

0x9a81,	// (0x00056c37) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a81,	// (0x00056c37) linegrid_hwr_fs_pane_g2

0x9a93,	// (0x00056c49) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a93,	// (0x00056c49) linegrid_hwr_fs_pane_g3

0x5ddb,	// (0x00052f91) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ddb,	// (0x00052f91) linegrid_hwr_fs_pane_g4

0x5df5,	// (0x00052fab) linegrid_hwr_fs_pane_g5_ParamLimits

0x5df5,	// (0x00052fab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0005c986) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0005c986) linegrid_hwr_fs_pane_g

0x9a9f,	// (0x00056c55) cell_hwr_fs_pane_g1_ParamLimits

0x9a9f,	// (0x00056c55) cell_hwr_fs_pane_g1

0x986a,	// (0x00056a20) cell_hwr_fs_pane_g2_ParamLimits

0x986a,	// (0x00056a20) cell_hwr_fs_pane_g2

0x9ab5,	// (0x00056c6b) cell_hwr_fs_pane_g3_ParamLimits

0x9ab5,	// (0x00056c6b) cell_hwr_fs_pane_g3

0x9ac2,	// (0x00056c78) cell_hwr_fs_pane_g4_ParamLimits

0x9ac2,	// (0x00056c78) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0005c991) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0005c991) cell_hwr_fs_pane_g

0x5e0b,	// (0x00052fc1) cell_hwr_fs_pane_t1

0x77a0,	// (0x00054956) grid_highlight_pane_cp6

0x77a0,	// (0x00054956) main_idle_act2_pane

0x864d,	// (0x00055803) aid_inside_area_popup_secondary

0xa763,	// (0x00057919) aid_inside_area_window_primary_ParamLimits

0xa763,	// (0x00057919) aid_inside_area_window_primary

0xb2eb,	// (0x000584a1) ai2_news_ticker_pane

0xb2f3,	// (0x000584a9) aid_size_cell_ai1_link_ParamLimits

0xb2f3,	// (0x000584a9) aid_size_cell_ai1_link

0xb30d,	// (0x000584c3) popup_ai2_data_window_ParamLimits

0xb30d,	// (0x000584c3) popup_ai2_data_window

0xb323,	// (0x000584d9) popup_ai2_link_window_ParamLimits

0xb323,	// (0x000584d9) popup_ai2_link_window

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp4_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp4

0xb337,	// (0x000584ed) grid_ai2_link_pane_ParamLimits

0xb337,	// (0x000584ed) grid_ai2_link_pane

0xb34e,	// (0x00058504) popup_ai2_link_window_g1_ParamLimits

0xb34e,	// (0x00058504) popup_ai2_link_window_g1

0xb35a,	// (0x00058510) popup_ai2_link_window_g2_ParamLimits

0xb35a,	// (0x00058510) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0005cb64) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0005cb64) popup_ai2_link_window_g

0xb369,	// (0x0005851f) ai2_mp_button_pane

0xb371,	// (0x00058527) ai2_mp_volume_pane

0x9c76,	// (0x00056e2c) bg_popup_sub_pane_cp5_ParamLimits

0x9c76,	// (0x00056e2c) bg_popup_sub_pane_cp5

0xb379,	// (0x0005852f) heading_ai2_gene_pane_ParamLimits

0xb379,	// (0x0005852f) heading_ai2_gene_pane

0xb385,	// (0x0005853b) list_ai2_gene_pane_ParamLimits

0xb385,	// (0x0005853b) list_ai2_gene_pane

0xb3cd,	// (0x00058583) cell_ai2_link_pane_ParamLimits

0xb3cd,	// (0x00058583) cell_ai2_link_pane

0xb3e3,	// (0x00058599) cell_ai2_link_pane_g1

0x77a0,	// (0x00054956) grid_highlight_pane_cp7

0x61c5,	// (0x0005337b) ai2_mp_volume_pane_g1

0xb4b3,	// (0x00058669) ai2_mp_volume_pane_g2

0xb428,	// (0x000585de) list_ai2_gene_pane_t1

0xb4bb,	// (0x00058671) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0005cb7d) ai2_mp_volume_pane_g

0x61cd,	// (0x00053383) volume_small_pane_cp3

0xb4c3,	// (0x00058679) aid_size_cell_ai2_button

0xb4cb,	// (0x00058681) grid_ai2_button_pane

0xb4d4,	// (0x0005868a) cell_ai2_button_pane_ParamLimits

0xb4d4,	// (0x0005868a) cell_ai2_button_pane

0x199d,	// (0x0004eb53) cell_ai2_button_pane_g1

0x77a0,	// (0x00054956) grid_highlight_pane_cp8

0xb473,	// (0x00058629) ai2_gene_pane_t1_ParamLimits

0xb473,	// (0x00058629) ai2_gene_pane_t1

0x5634,	// (0x000527ea) aid_height_parent_landscape

0xadd9,	// (0x00057f8f) aid_height_set_list

0xadea,	// (0x00057fa0) aid_size_parent

0xb10e,	// (0x000582c4) aid_size_cell_graphic_pane_ParamLimits

0xb395,	// (0x0005854b) popup_ai2_data_window_g1_ParamLimits

0xb395,	// (0x0005854b) popup_ai2_data_window_g1

0xb3a1,	// (0x00058557) ai2_news_ticker_pane_g1

0xb3a9,	// (0x0005855f) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0005cb69) ai2_news_ticker_pane_g

0xb3b1,	// (0x00058567) ai2_news_ticker_pane_t1

0xb3bf,	// (0x00058575) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0005cb6e) ai2_news_ticker_pane_t

0xb3ec,	// (0x000585a2) heading_ai2_gene_pane_g1

0xb3f4,	// (0x000585aa) heading_ai2_gene_pane_t1_ParamLimits

0xb3f4,	// (0x000585aa) heading_ai2_gene_pane_t1

0xb409,	// (0x000585bf) list_highlight_pane_cp6

0xb411,	// (0x000585c7) ai2_gene_pane_ParamLimits

0xb411,	// (0x000585c7) ai2_gene_pane

0xb436,	// (0x000585ec) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0005cb73) list_ai2_gene_pane_t

0xb444,	// (0x000585fa) list_highlight_pane_cp8_ParamLimits

0xb444,	// (0x000585fa) list_highlight_pane_cp8

0xb455,	// (0x0005860b) ai2_gene_pane_g1_ParamLimits

0xb455,	// (0x0005860b) ai2_gene_pane_g1

0xb467,	// (0x0005861d) ai2_gene_pane_g2_ParamLimits

0xb467,	// (0x0005861d) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0005cb78) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0005cb78) ai2_gene_pane_g

0x80a3,	// (0x00055259) scroll_pane_cp12

0x55f1,	// (0x000527a7) control_pane_t3_ParamLimits

0x55f1,	// (0x000527a7) control_pane_t3

0x9429,	// (0x000565df) status_small_pane_g8_ParamLimits

0x9429,	// (0x000565df) status_small_pane_g8

0x57d2,	// (0x00052988) popup_find_window_ParamLimits

0x59e9,	// (0x00052b9f) popup_note_image_window_ParamLimits

0x5c4f,	// (0x00052e05) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c4f,	// (0x00052e05) list_double2_graphic_pane_vc_g1

0x84e6,	// (0x0005569c) list_double2_graphic_pane_vc_g2_ParamLimits

0x84e6,	// (0x0005569c) list_double2_graphic_pane_vc_g2

0x80b4,	// (0x0005526a) list_double2_graphic_pane_vc_g3_ParamLimits

0x80b4,	// (0x0005526a) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c954) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c954) list_double2_graphic_pane_vc_g

0x5c5b,	// (0x00052e11) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c5b,	// (0x00052e11) list_double2_graphic_pane_vc_t1

0x84e6,	// (0x0005569c) list_single_heading_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_single_heading_pane_vc_g1

0x80b4,	// (0x0005526a) list_single_heading_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_single_heading_pane_vc_g

0x5cc6,	// (0x00052e7c) list_single_heading_pane_vc_t1_ParamLimits

0x5cc6,	// (0x00052e7c) list_single_heading_pane_vc_t1

0x5cdc,	// (0x00052e92) list_single_heading_pane_vc_t2_ParamLimits

0x5cdc,	// (0x00052e92) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0005c975) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0005c975) list_single_heading_pane_vc_t

0x81c0,	// (0x00055376) list_setting_number_pane_vc_g1_ParamLimits

0x81c0,	// (0x00055376) list_setting_number_pane_vc_g1

0x81cc,	// (0x00055382) list_setting_number_pane_vc_g2_ParamLimits

0x81cc,	// (0x00055382) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c97a) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c97a) list_setting_number_pane_vc_g

0x5d10,	// (0x00052ec6) list_setting_number_pane_vc_t1_ParamLimits

0x5d10,	// (0x00052ec6) list_setting_number_pane_vc_t1

0x5d24,	// (0x00052eda) list_setting_number_pane_vc_t2_ParamLimits

0x5d24,	// (0x00052eda) list_setting_number_pane_vc_t2

0x5d40,	// (0x00052ef6) list_setting_number_pane_vc_t3_ParamLimits

0x5d40,	// (0x00052ef6) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0005c97f) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0005c97f) list_setting_number_pane_vc_t

0x5d6c,	// (0x00052f22) set_value_pane_vc_ParamLimits

0x5d6c,	// (0x00052f22) set_value_pane_vc

0xafa2,	// (0x00058158) list_double2_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double2_graphic_pane_vc

0xafa2,	// (0x00058158) list_double2_large_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double2_large_graphic_pane_vc

0xafa2,	// (0x00058158) list_double2_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double2_pane_vc

0xafa2,	// (0x00058158) list_double_graphic_heading_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_graphic_heading_pane_vc

0xafa2,	// (0x00058158) list_double_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_graphic_pane_vc

0xafa2,	// (0x00058158) list_double_heading_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_heading_pane_vc

0xafb4,	// (0x0005816a) list_double_large_graphic_pane_vc_ParamLimits

0xafb4,	// (0x0005816a) list_double_large_graphic_pane_vc

0xafa2,	// (0x00058158) list_double_number_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_number_pane_vc

0xafa2,	// (0x00058158) list_double_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_pane_vc

0xafa2,	// (0x00058158) list_double_time_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_double_time_pane_vc

0xafa2,	// (0x00058158) list_setting_number_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_setting_number_pane_vc

0xafa2,	// (0x00058158) list_setting_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_setting_pane_vc

0xafa2,	// (0x00058158) list_single_graphic_heading_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_single_graphic_heading_pane_vc

0xafa2,	// (0x00058158) list_single_heading_pane_vc_ParamLimits

0xafa2,	// (0x00058158) list_single_heading_pane_vc

0x81f3,	// (0x000553a9) list_single_number_heading_pane_vc_ParamLimits

0x81f3,	// (0x000553a9) list_single_number_heading_pane_vc

0x5c4f,	// (0x00052e05) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c4f,	// (0x00052e05) list_double_graphic_heading_pane_vc_g1

0x84e6,	// (0x0005569c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x84e6,	// (0x0005569c) list_double_graphic_heading_pane_vc_g2

0x80b4,	// (0x0005526a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x80b4,	// (0x0005526a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c954) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c954) list_double_graphic_heading_pane_vc_g

0x61d6,	// (0x0005338c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x61d6,	// (0x0005338c) list_double_graphic_heading_pane_vc_t1

0x61f2,	// (0x000533a8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x61f2,	// (0x000533a8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0005cb84) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0005cb84) list_double_graphic_heading_pane_vc_t

0x81c0,	// (0x00055376) list_setting_pane_vc_g1_ParamLimits

0x81c0,	// (0x00055376) list_setting_pane_vc_g1

0x81cc,	// (0x00055382) list_setting_pane_vc_g2_ParamLimits

0x81cc,	// (0x00055382) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c97a) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c97a) list_setting_pane_vc_g

0x6210,	// (0x000533c6) list_setting_pane_vc_t1_ParamLimits

0x6210,	// (0x000533c6) list_setting_pane_vc_t1

0x622c,	// (0x000533e2) list_setting_pane_vc_t2_ParamLimits

0x622c,	// (0x000533e2) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0005cbb2) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0005cbb2) list_setting_pane_vc_t

0x5d6c,	// (0x00052f22) set_value_pane_cp_vc_ParamLimits

0x5d6c,	// (0x00052f22) set_value_pane_cp_vc

0x84e6,	// (0x0005569c) list_single_number_heading_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_single_number_heading_pane_vc_g1

0x80b4,	// (0x0005526a) list_single_number_heading_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_single_number_heading_pane_vc_g

0x6248,	// (0x000533fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x6248,	// (0x000533fe) list_single_number_heading_pane_vc_t1

0x3939,	// (0x00050aef) list_single_number_heading_pane_vc_t2_ParamLimits

0x3939,	// (0x00050aef) list_single_number_heading_pane_vc_t2

0x394b,	// (0x00050b01) list_single_number_heading_pane_vc_t3_ParamLimits

0x394b,	// (0x00050b01) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0005cbb7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0005cbb7) list_single_number_heading_pane_vc_t

0x5c4f,	// (0x00052e05) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c4f,	// (0x00052e05) list_single_graphic_heading_pane_vc_g1

0x84e6,	// (0x0005569c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x84e6,	// (0x0005569c) list_single_graphic_heading_pane_vc_g4

0x80b4,	// (0x0005526a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x80b4,	// (0x0005526a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005c954) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c954) list_single_graphic_heading_pane_vc_g

0x6248,	// (0x000533fe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6248,	// (0x000533fe) list_single_graphic_heading_pane_vc_t1

0x625e,	// (0x00053414) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x625e,	// (0x00053414) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0005cbbe) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0005cbbe) list_single_graphic_heading_pane_vc_t

0x84e6,	// (0x0005569c) list_double2_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_double2_pane_vc_g1

0x80b4,	// (0x0005526a) list_double2_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_double2_pane_vc_g

0x60c0,	// (0x00053276) list_double2_pane_vc_t1_ParamLimits

0x60c0,	// (0x00053276) list_double2_pane_vc_t1

0x824f,	// (0x00055405) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x824f,	// (0x00055405) list_double2_large_graphic_pane_vc_g1

0x84e6,	// (0x0005569c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x84e6,	// (0x0005569c) list_double2_large_graphic_pane_vc_g2

0x80b4,	// (0x0005526a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x80b4,	// (0x0005526a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0005cbc3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0005cbc3) list_double2_large_graphic_pane_vc_g

0x6270,	// (0x00053426) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6270,	// (0x00053426) list_double2_large_graphic_pane_vc_t1

0x825b,	// (0x00055411) list_double_time_pane_vc_g1_ParamLimits

0x825b,	// (0x00055411) list_double_time_pane_vc_g1

0x8267,	// (0x0005541d) list_double_time_pane_vc_g2_ParamLimits

0x8267,	// (0x0005541d) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0005cbca) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0005cbca) list_double_time_pane_vc_g

0x6286,	// (0x0005343c) list_double_time_pane_vc_t1_ParamLimits

0x6286,	// (0x0005343c) list_double_time_pane_vc_t1

0x62aa,	// (0x00053460) list_double_time_pane_vc_t2_ParamLimits

0x62aa,	// (0x00053460) list_double_time_pane_vc_t2

0x62f9,	// (0x000534af) list_double_time_pane_vc_t3_ParamLimits

0x62f9,	// (0x000534af) list_double_time_pane_vc_t3

0x630b,	// (0x000534c1) list_double_time_pane_vc_t4_ParamLimits

0x630b,	// (0x000534c1) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0005cbcf) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0005cbcf) list_double_time_pane_vc_t

0x84e6,	// (0x0005569c) list_double_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_double_pane_vc_g1

0x80b4,	// (0x0005526a) list_double_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_double_pane_vc_g

0x631f,	// (0x000534d5) list_double_pane_vc_t1_ParamLimits

0x631f,	// (0x000534d5) list_double_pane_vc_t1

0x6333,	// (0x000534e9) list_double_pane_vc_t2_ParamLimits

0x6333,	// (0x000534e9) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0005cbd8) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0005cbd8) list_double_pane_vc_t

0x84e6,	// (0x0005569c) list_double_number_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_double_number_pane_vc_g1

0x80b4,	// (0x0005526a) list_double_number_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_double_number_pane_vc_g

0x634b,	// (0x00053501) list_double_number_pane_vc_t1_ParamLimits

0x634b,	// (0x00053501) list_double_number_pane_vc_t1

0x635d,	// (0x00053513) list_double_number_pane_vc_t2_ParamLimits

0x635d,	// (0x00053513) list_double_number_pane_vc_t2

0x6371,	// (0x00053527) list_double_number_pane_vc_t3_ParamLimits

0x6371,	// (0x00053527) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0005cbdd) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0005cbdd) list_double_number_pane_vc_t

0x8273,	// (0x00055429) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8273,	// (0x00055429) list_double_large_graphic_pane_vc_g1

0x828f,	// (0x00055445) list_double_large_graphic_pane_vc_g2_ParamLimits

0x828f,	// (0x00055445) list_double_large_graphic_pane_vc_g2

0x82a3,	// (0x00055459) list_double_large_graphic_pane_vc_g3_ParamLimits

0x82a3,	// (0x00055459) list_double_large_graphic_pane_vc_g3

0x6389,	// (0x0005353f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6389,	// (0x0005353f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0005cbe4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0005cbe4) list_double_large_graphic_pane_vc_g

0x6398,	// (0x0005354e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6398,	// (0x0005354e) list_double_large_graphic_pane_vc_t1

0x63b4,	// (0x0005356a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x63b4,	// (0x0005356a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0005cbed) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0005cbed) list_double_large_graphic_pane_vc_t

0x84e6,	// (0x0005569c) list_double_heading_pane_vc_g1_ParamLimits

0x84e6,	// (0x0005569c) list_double_heading_pane_vc_g1

0x80b4,	// (0x0005526a) list_double_heading_pane_vc_g2_ParamLimits

0x80b4,	// (0x0005526a) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c763) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c763) list_double_heading_pane_vc_g

0x63d6,	// (0x0005358c) list_double_heading_pane_vc_t1_ParamLimits

0x63d6,	// (0x0005358c) list_double_heading_pane_vc_t1

0x63ea,	// (0x000535a0) list_double_heading_pane_vc_t2_ParamLimits

0x63ea,	// (0x000535a0) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005cbf2) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005cbf2) list_double_heading_pane_vc_t

0x6402,	// (0x000535b8) list_double_graphic_pane_vc_g1_ParamLimits

0x6402,	// (0x000535b8) list_double_graphic_pane_vc_g1

0x82b2,	// (0x00055468) list_double_graphic_pane_vc_g2_ParamLimits

0x82b2,	// (0x00055468) list_double_graphic_pane_vc_g2

0x84e6,	// (0x0005569c) list_double_graphic_pane_vc_g3_ParamLimits

0x84e6,	// (0x0005569c) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0005cbf7) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0005cbf7) list_double_graphic_pane_vc_g

0x640e,	// (0x000535c4) list_double_graphic_pane_vc_t1_ParamLimits

0x640e,	// (0x000535c4) list_double_graphic_pane_vc_t1

0x6438,	// (0x000535ee) list_double_graphic_pane_vc_t2_ParamLimits

0x6438,	// (0x000535ee) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005cc00) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005cc00) list_double_graphic_pane_vc_t

0x4566,	// (0x0005171c) aid_size_cell_fastswap

0x456e,	// (0x00051724) aid_size_cell_touch_ParamLimits

0x456e,	// (0x00051724) aid_size_cell_touch

0x47d3,	// (0x00051989) popup_fast_swap_wide_window_ParamLimits

0x47d3,	// (0x00051989) popup_fast_swap_wide_window

0x48e7,	// (0x00051a9d) touch_pane_ParamLimits

0x48e7,	// (0x00051a9d) touch_pane

0x8188,	// (0x0005533e) button_value_adjust_pane_cp2

0x4d7c,	// (0x00051f32) button_value_adjust_pane_cp4

0x4da0,	// (0x00051f56) form_field_data_pane_cp2

0x4dc1,	// (0x00051f77) form_field_data_wide_pane_cp2

0x8965,	// (0x00055b1b) bg_scroll_pane_ParamLimits

0x5184,	// (0x0005233a) scroll_handle_pane_ParamLimits

0x5198,	// (0x0005234e) scroll_sc2_down_pane_ParamLimits

0x5198,	// (0x0005234e) scroll_sc2_down_pane

0x8996,	// (0x00055b4c) scroll_sc2_up_pane_ParamLimits

0x8996,	// (0x00055b4c) scroll_sc2_up_pane

0xbbbc,	// (0x00058d72) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x00058d72) grid_wheel_folder_pane_g1

0x53cb,	// (0x00052581) clock_nsta_pane_cp2_ParamLimits

0x53cb,	// (0x00052581) clock_nsta_pane_cp2

0x91af,	// (0x00056365) listscroll_midp_pane_ParamLimits

0x91bb,	// (0x00056371) midp_canvas_pane

0x94a3,	// (0x00056659) nsta_clock_indic_pane

0x94d7,	// (0x0005668d) listscroll_form_pane_vc

0x94df,	// (0x00056695) listscroll_set_pane_vc_ParamLimits

0x94df,	// (0x00056695) listscroll_set_pane_vc

0x95d8,	// (0x0005678e) clock_nsta_pane

0x9653,	// (0x00056809) indicator_nsta_pane

0x9933,	// (0x00056ae9) bg_popup_sub_pane_cp2_ParamLimits

0x9947,	// (0x00056afd) find_pane_cp2_ParamLimits

0x9947,	// (0x00056afd) find_pane_cp2

0x995d,	// (0x00056b13) grid_toobar_pane_ParamLimits

0x9a3d,	// (0x00056bf3) list_form_gen_pane_vc_ParamLimits

0x9a3d,	// (0x00056bf3) list_form_gen_pane_vc

0x9a53,	// (0x00056c09) scroll_pane_cp8_vc_ParamLimits

0x9a53,	// (0x00056c09) scroll_pane_cp8_vc

0x9acf,	// (0x00056c85) data_form_wide_pane_vc_ParamLimits

0x9acf,	// (0x00056c85) data_form_wide_pane_vc

0x9adb,	// (0x00056c91) form_field_data_wide_pane_vc_g1

0x9ae3,	// (0x00056c99) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ae3,	// (0x00056c99) form_field_data_wide_pane_vc_t1

0x84f2,	// (0x000556a8) input_focus_pane_cp6_vc_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_cp6_vc

0x9e09,	// (0x00056fbf) list_midp_pane_ParamLimits

0x9e15,	// (0x00056fcb) scroll_pane_cp16_ParamLimits

0x9e15,	// (0x00056fcb) scroll_pane_cp16

0x9e7f,	// (0x00057035) button_value_adjust_pane_ParamLimits

0x9e7f,	// (0x00057035) button_value_adjust_pane

0xadfc,	// (0x00057fb2) button_value_adjust_pane_cp6_ParamLimits

0xadfc,	// (0x00057fb2) button_value_adjust_pane_cp6

0xaf26,	// (0x000580dc) settings_code_pane_cp_ParamLimits

0xaf26,	// (0x000580dc) settings_code_pane_cp

0x199d,	// (0x0004eb53) cell_touch_pane_g1

0x199d,	// (0x0004eb53) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0005c899) cell_touch_pane_g

0xb4e6,	// (0x0005869c) cell_touch_pane_cp_ParamLimits

0xb4e6,	// (0x0005869c) cell_touch_pane_cp

0xb4f6,	// (0x000586ac) cell_touch_pane_ParamLimits

0xb4f6,	// (0x000586ac) cell_touch_pane

0x199d,	// (0x0004eb53) scroll_sc2_down_pane_g1

0x199d,	// (0x0004eb53) scroll_sc2_up_pane_g1

0x77a0,	// (0x00054956) bg_set_opt_pane_cp4_vc

0xb508,	// (0x000586be) list_set_graphic_pane_vc_g1_ParamLimits

0xb508,	// (0x000586be) list_set_graphic_pane_vc_g1

0xb514,	// (0x000586ca) list_set_graphic_pane_vc_g2_ParamLimits

0xb514,	// (0x000586ca) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0005cb89) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0005cb89) list_set_graphic_pane_vc_g

0xb520,	// (0x000586d6) text_primary_small_cp13_vc_ParamLimits

0xb520,	// (0x000586d6) text_primary_small_cp13_vc

0xb538,	// (0x000586ee) list_set_graphic_pane_vc_ParamLimits

0xb538,	// (0x000586ee) list_set_graphic_pane_vc

0x77a0,	// (0x00054956) input_focus_pane_cp2_vc

0x199d,	// (0x0004eb53) setting_code_pane_vc_g1

0x78cb,	// (0x00054a81) setting_code_pane_vc_t1

0xb54b,	// (0x00058701) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x00058701) set_text_pane_vc_t1

0x77a0,	// (0x00054956) input_focus_pane_cp1_vc

0xb567,	// (0x0005871d) list_set_text_pane_vc

0x199d,	// (0x0004eb53) setting_text_pane_vc_g1

0x77a0,	// (0x00054956) bg_set_opt_pane_cp2_vc

0x78c2,	// (0x00054a78) setting_slider_graphic_pane_vc_g1

0xb571,	// (0x00058727) setting_slider_graphic_pane_vc_t1

0xb581,	// (0x00058737) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0005cb8e) setting_slider_graphic_pane_vc_t

0xb591,	// (0x00058747) slider_set_pane_cp_vc

0xb599,	// (0x0005874f) slider_set_pane_vc_g1

0xb5a2,	// (0x00058758) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0005cb93) slider_set_pane_vc_g

0x853e,	// (0x000556f4) set_opt_bg_pane_g1_copy1

0x8546,	// (0x000556fc) set_opt_bg_pane_g2_copy1

0xb5ce,	// (0x00058784) set_opt_bg_pane_g3_copy1

0x8556,	// (0x0005570c) set_opt_bg_pane_g4_copy1

0x855e,	// (0x00055714) set_opt_bg_pane_g5_copy1

0x8566,	// (0x0005571c) set_opt_bg_pane_g6_copy1

0xb5d8,	// (0x0005878e) set_opt_bg_pane_g7_copy1

0xb5e2,	// (0x00058798) set_opt_bg_pane_g8_copy1

0xb5ec,	// (0x000587a2) set_opt_bg_pane_g9_copy1

0x77a0,	// (0x00054956) bg_set_opt_pane_cp_vc

0xb5f6,	// (0x000587ac) setting_slider_pane_vc_t1

0xb605,	// (0x000587bb) setting_slider_pane_vc_t2

0xb615,	// (0x000587cb) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0005cba2) setting_slider_pane_vc_t

0xb625,	// (0x000587db) slider_set_pane_vc

0x5e52,	// (0x00053008) volume_set_pane_vc_g1

0x5e5b,	// (0x00053011) volume_set_pane_vc_g2

0x5e64,	// (0x0005301a) volume_set_pane_vc_g3

0x5e6d,	// (0x00053023) volume_set_pane_vc_g4

0x5e76,	// (0x0005302c) volume_set_pane_vc_g5

0x5e7f,	// (0x00053035) volume_set_pane_vc_g6

0x5e88,	// (0x0005303e) volume_set_pane_vc_g7

0x5e91,	// (0x00053047) volume_set_pane_vc_g8

0x5e9a,	// (0x00053050) volume_set_pane_vc_g9

0x5ea3,	// (0x00053059) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0005ca47) volume_set_pane_vc_g

0xb62d,	// (0x000587e3) volume_set_pane_vc

0xb635,	// (0x000587eb) button_value_adjust_pane_cp1_vc

0xb63f,	// (0x000587f5) list_highlight_pane_cp2_vc

0xb648,	// (0x000587fe) list_set_pane_vc_ParamLimits

0xb648,	// (0x000587fe) list_set_pane_vc

0xb6a6,	// (0x0005885c) main_pane_set_vc_t1_ParamLimits

0xb6a6,	// (0x0005885c) main_pane_set_vc_t1

0xb6bb,	// (0x00058871) main_pane_set_vc_t2_ParamLimits

0xb6bb,	// (0x00058871) main_pane_set_vc_t2

0xb6cd,	// (0x00058883) main_pane_set_vc_t3_ParamLimits

0xb6cd,	// (0x00058883) main_pane_set_vc_t3

0xb6e1,	// (0x00058897) main_pane_set_vc_t4_ParamLimits

0xb6e1,	// (0x00058897) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0005cba9) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0005cba9) main_pane_set_vc_t

0xb6f5,	// (0x000588ab) setting_code_pane_vc_ParamLimits

0xb6f5,	// (0x000588ab) setting_code_pane_vc

0xb706,	// (0x000588bc) setting_slider_graphic_pane_vc

0xb706,	// (0x000588bc) setting_slider_pane_vc

0xb706,	// (0x000588bc) setting_text_pane_vc

0xb706,	// (0x000588bc) setting_volume_pane_vc

0xb710,	// (0x000588c6) scroll_pane_cp121_vc

0x8176,	// (0x0005532c) set_content_pane_vc

0xb718,	// (0x000588ce) button_value_adjust_pane_g1

0xb721,	// (0x000588d7) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0005cc05) button_value_adjust_pane_g

0xb72a,	// (0x000588e0) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb72a,	// (0x000588e0) form_field_slider_wide_pane_vc_t1

0xb73e,	// (0x000588f4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73e,	// (0x000588f4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0005cc0a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0005cc0a) form_field_slider_wide_pane_vc_t

0x7afb,	// (0x00054cb1) input_focus_pane_cp10_vc_ParamLimits

0x7afb,	// (0x00054cb1) input_focus_pane_cp10_vc

0xb76c,	// (0x00058922) slider_cont_pane_cp1_vc_ParamLimits

0xb76c,	// (0x00058922) slider_cont_pane_cp1_vc

0xb77e,	// (0x00058934) slider_form_pane_g1_cp2

0xb5a2,	// (0x00058758) slider_form_pane_g2_cp2

0xb7ab,	// (0x00058961) form_field_slider_pane_vc_t3

0xb7b9,	// (0x0005896f) form_field_slider_pane_vc_t4

0xb7c7,	// (0x0005897d) slider_form_pane_vc_ParamLimits

0xb7c7,	// (0x0005897d) slider_form_pane_vc

0xb7d4,	// (0x0005898a) form_field_slider_pane_vc_t1_ParamLimits

0xb7d4,	// (0x0005898a) form_field_slider_pane_vc_t1

0xb73e,	// (0x000588f4) form_field_slider_pane_vc_t2_ParamLimits

0xb73e,	// (0x000588f4) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0005cc1c) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0005cc1c) form_field_slider_pane_vc_t

0x7afb,	// (0x00054cb1) input_focus_pane_cp9_vc_ParamLimits

0x7afb,	// (0x00054cb1) input_focus_pane_cp9_vc

0xb7f0,	// (0x000589a6) slider_cont_pane_vc_ParamLimits

0xb7f0,	// (0x000589a6) slider_cont_pane_vc

0xb804,	// (0x000589ba) list_form_graphic_pane_cp_vc_ParamLimits

0xb804,	// (0x000589ba) list_form_graphic_pane_cp_vc

0x9adb,	// (0x00056c91) form_field_popup_wide_pane_vc_g1

0xb819,	// (0x000589cf) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb819,	// (0x000589cf) form_field_popup_wide_pane_vc_t1

0x84f2,	// (0x000556a8) input_focus_pane_cp8_vc_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_cp8_vc

0xb85e,	// (0x00058a14) list_form_wide_pane_vc_ParamLimits

0xb85e,	// (0x00058a14) list_form_wide_pane_vc

0xb86a,	// (0x00058a20) list_form_graphic_pane_vc_g1

0xb872,	// (0x00058a28) list_form_graphic_pane_vc_t1_ParamLimits

0xb872,	// (0x00058a28) list_form_graphic_pane_vc_t1

0x7880,	// (0x00054a36) list_highlight_pane_cp5_vc_ParamLimits

0x7880,	// (0x00054a36) list_highlight_pane_cp5_vc

0xb88e,	// (0x00058a44) list_form_graphic_pane_vc_ParamLimits

0xb88e,	// (0x00058a44) list_form_graphic_pane_vc

0x9adb,	// (0x00056c91) form_field_popup_pane_vc_g1

0xb8a4,	// (0x00058a5a) form_field_popup_pane_vc_t1_ParamLimits

0xb8a4,	// (0x00058a5a) form_field_popup_pane_vc_t1

0x84f2,	// (0x000556a8) input_focus_pane_cp7_vc_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_cp7_vc

0xb8bb,	// (0x00058a71) list_form_pane_vc_ParamLimits

0xb8bb,	// (0x00058a71) list_form_pane_vc

0xb8c7,	// (0x00058a7d) data_form_pane_vc_t1_ParamLimits

0xb8c7,	// (0x00058a7d) data_form_pane_vc_t1

0x853e,	// (0x000556f4) input_focus_pane_vc_g1

0x8546,	// (0x000556fc) input_focus_pane_vc_g2

0x854e,	// (0x00055704) input_focus_pane_vc_g3

0x8556,	// (0x0005570c) input_focus_pane_vc_g4

0x855e,	// (0x00055714) input_focus_pane_vc_g5

0x8566,	// (0x0005571c) input_focus_pane_vc_g6

0x856e,	// (0x00055724) input_focus_pane_vc_g7

0x8576,	// (0x0005572c) input_focus_pane_vc_g8

0x857e,	// (0x00055734) input_focus_pane_vc_g9

0x199d,	// (0x0004eb53) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0005c822) input_focus_pane_vc_g

0x9acf,	// (0x00056c85) data_form_pane_vc_ParamLimits

0x9acf,	// (0x00056c85) data_form_pane_vc

0x9adb,	// (0x00056c91) form_field_data_pane_vc_g1

0xb8e2,	// (0x00058a98) form_field_data_pane_vc_t1_ParamLimits

0xb8e2,	// (0x00058a98) form_field_data_pane_vc_t1

0x84f2,	// (0x000556a8) input_focus_pane_vc_ParamLimits

0x84f2,	// (0x000556a8) input_focus_pane_vc

0xb8fc,	// (0x00058ab2) button_value_adjust_pane_cp3_vc

0xb904,	// (0x00058aba) button_value_adjust_pane_cp5_vc

0xb90c,	// (0x00058ac2) form_field_data_pane_vc_ParamLimits

0xb90c,	// (0x00058ac2) form_field_data_pane_vc

0xb923,	// (0x00058ad9) form_field_data_pane_vc_cp2

0xb92b,	// (0x00058ae1) form_field_data_wide_pane_vc_ParamLimits

0xb92b,	// (0x00058ae1) form_field_data_wide_pane_vc

0xb941,	// (0x00058af7) form_field_data_wide_pane_vc_cp2

0xb949,	// (0x00058aff) form_field_popup_pane_vc_ParamLimits

0xb949,	// (0x00058aff) form_field_popup_pane_vc

0xb960,	// (0x00058b16) form_field_popup_wide_pane_vc_ParamLimits

0xb960,	// (0x00058b16) form_field_popup_wide_pane_vc

0xb976,	// (0x00058b2c) form_field_slider_pane_vc_ParamLimits

0xb976,	// (0x00058b2c) form_field_slider_pane_vc

0xb989,	// (0x00058b3f) form_field_slider_wide_pane_vc_ParamLimits

0xb989,	// (0x00058b3f) form_field_slider_wide_pane_vc

0xb99c,	// (0x00058b52) grid_touch_1_pane_ParamLimits

0xb99c,	// (0x00058b52) grid_touch_1_pane

0xb9a8,	// (0x00058b5e) grid_touch_2_pane_ParamLimits

0xb9a8,	// (0x00058b5e) grid_touch_2_pane

0x946e,	// (0x00056624) touch_pane_g1_ParamLimits

0x946e,	// (0x00056624) touch_pane_g1

0xb9c0,	// (0x00058b76) cell_app_pane_cp_wide_ParamLimits

0xb9c0,	// (0x00058b76) cell_app_pane_cp_wide

0xb9d1,	// (0x00058b87) grid_popup_fast_wide_pane_ParamLimits

0xb9d1,	// (0x00058b87) grid_popup_fast_wide_pane

0xb9e5,	// (0x00058b9b) scroll_pane_cp19_ParamLimits

0xb9e5,	// (0x00058b9b) scroll_pane_cp19

0x77a0,	// (0x00054956) bg_popup_window_pane_cp20

0xb9f9,	// (0x00058baf) listscroll_popup_fast_wide_pane

0xba01,	// (0x00058bb7) grid_indicator_nsta_pane

0xba13,	// (0x00058bc9) clock_nsta_pane_g1

0xba1c,	// (0x00058bd2) clock_nsta_pane_t1

0xba38,	// (0x00058bee) cell_indicator_nsta_pane_ParamLimits

0xba38,	// (0x00058bee) cell_indicator_nsta_pane

0xba6d,	// (0x00058c23) cell_indicator_nsta_pane_g1

0xba7b,	// (0x00058c31) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0005cc2d) cell_indicator_nsta_pane_g

0xba8d,	// (0x00058c43) clock_nsta_pane_cp

0xba96,	// (0x00058c4c) indicator_nsta_pane_cp

0xbaa0,	// (0x00058c56) nsta_clock_indic_pane_g1

0x7949,	// (0x00054aff) grid_indicator_pane

0x8a8b,	// (0x00055c41) scroll_pane_cp29

0x531a,	// (0x000524d0) indicator_nsta_pane_cp2_ParamLimits

0x531a,	// (0x000524d0) indicator_nsta_pane_cp2

0x7880,	// (0x00054a36) main_apps_wheel_pane

0x9cea,	// (0x00056ea0) form_midp_field_text_pane_ParamLimits

0x9e35,	// (0x00056feb) scroll_bar_cp050_ParamLimits

0xbaf9,	// (0x00058caf) cell_indicator_pane_ParamLimits

0xbaf9,	// (0x00058caf) cell_indicator_pane

0xbb10,	// (0x00058cc6) cell_indicator_pane_g1

0xbb1a,	// (0x00058cd0) grid_wheel_folder_pane_ParamLimits

0xbb1a,	// (0x00058cd0) grid_wheel_folder_pane

0xbb30,	// (0x00058ce6) list_wheel_apps_pane_ParamLimits

0xbb30,	// (0x00058ce6) list_wheel_apps_pane

0xbb41,	// (0x00058cf7) main_apps_wheel_pane_g1_ParamLimits

0xbb41,	// (0x00058cf7) main_apps_wheel_pane_g1

0xbb55,	// (0x00058d0b) main_apps_wheel_pane_g2_ParamLimits

0xbb55,	// (0x00058d0b) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0005cc49) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0005cc49) main_apps_wheel_pane_g

0xbb6d,	// (0x00058d23) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x00058d23) main_apps_wheel_pane_t1

0xbb90,	// (0x00058d46) list_wheel_apps_pane_g1

0xbb98,	// (0x00058d4e) list_wheel_apps_pane_g2

0xbba0,	// (0x00058d56) list_wheel_apps_pane_g3

0xbba8,	// (0x00058d5e) list_wheel_apps_pane_g4

0xbbb2,	// (0x00058d68) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0005cc4e) list_wheel_apps_pane_g

0x902a,	// (0x000561e0) navi_icon_text_pane

0x9507,	// (0x000566bd) aid_fill_nsta

0xbbd5,	// (0x00058d8b) navi_icon_text_pane_g1

0xbbe1,	// (0x00058d97) navi_icon_text_pane_t1

0x8ebd,	// (0x00056073) list_set_graphic_pane_t1_ParamLimits

0x8ebd,	// (0x00056073) list_set_graphic_pane_t1

0xa5ac,	// (0x00057762) popup_midp_note_alarm_window_t6_ParamLimits

0xa5ac,	// (0x00057762) popup_midp_note_alarm_window_t6

0xa5be,	// (0x00057774) popup_midp_note_alarm_window_t7_ParamLimits

0xa5be,	// (0x00057774) popup_midp_note_alarm_window_t7

0xa5d0,	// (0x00057786) popup_midp_note_alarm_window_t8_ParamLimits

0xa5d0,	// (0x00057786) popup_midp_note_alarm_window_t8

0xa5e2,	// (0x00057798) popup_midp_note_alarm_window_t9_ParamLimits

0xa5e2,	// (0x00057798) popup_midp_note_alarm_window_t9

0xa5f4,	// (0x000577aa) popup_midp_note_alarm_window_t10_ParamLimits

0xa5f4,	// (0x000577aa) popup_midp_note_alarm_window_t10

0xa606,	// (0x000577bc) popup_midp_note_alarm_window_t11_ParamLimits

0xa606,	// (0x000577bc) popup_midp_note_alarm_window_t11

0xa618,	// (0x000577ce) scroll_pane_cp17_ParamLimits

0xa618,	// (0x000577ce) scroll_pane_cp17

0x5e52,	// (0x00053008) volume_small_pane_cp_g1

0x6462,	// (0x00053618) volume_small_pane_cp_g2

0x646b,	// (0x00053621) volume_small_pane_cp_g3

0x6474,	// (0x0005362a) volume_small_pane_cp_g4

0x647d,	// (0x00053633) volume_small_pane_cp_g5

0x6486,	// (0x0005363c) volume_small_pane_cp_g6

0x648f,	// (0x00053645) volume_small_pane_cp_g7

0x6498,	// (0x0005364e) volume_small_pane_cp_g8

0x64a1,	// (0x00053657) volume_small_pane_cp_g9

0x64aa,	// (0x00053660) volume_small_pane_cp_g10

0x9284,	// (0x0005643a) midp_ticker_pane_g1_ParamLimits

0x9290,	// (0x00056446) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0005c8ee) midp_ticker_pane_g_ParamLimits

0x929c,	// (0x00056452) midp_ticker_pane_t1_ParamLimits

0x951d,	// (0x000566d3) aid_fill_nsta_2

0x9e21,	// (0x00056fd7) list_form2_midp_pane

0xaf71,	// (0x00058127) midp_editing_number_pane_ParamLimits

0xaf80,	// (0x00058136) midp_ticker_pane_ParamLimits

0xbbf3,	// (0x00058da9) form2_midp_field_pane

0xbc17,	// (0x00058dcd) scroll_pane_cp51

0xbc37,	// (0x00058ded) form2_midp_button_pane_ParamLimits

0xbc37,	// (0x00058ded) form2_midp_button_pane

0xbc49,	// (0x00058dff) form2_midp_content_pane_ParamLimits

0xbc49,	// (0x00058dff) form2_midp_content_pane

0xbc63,	// (0x00058e19) form2_midp_field_choice_group_pane

0xbc6b,	// (0x00058e21) form2_midp_field_pane_g1

0xbc73,	// (0x00058e29) form2_midp_field_pane_g2

0xbc7b,	// (0x00058e31) form2_midp_field_pane_g3

0xbc83,	// (0x00058e39) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0005cc73) form2_midp_field_pane_g

0xbc8b,	// (0x00058e41) form2_midp_gauge_slider_pane

0xbc93,	// (0x00058e49) form2_midp_gauge_wait_pane

0xbc9b,	// (0x00058e51) form2_midp_image_pane_ParamLimits

0xbc9b,	// (0x00058e51) form2_midp_image_pane

0xbcb6,	// (0x00058e6c) form2_midp_label_pane_ParamLimits

0xbcb6,	// (0x00058e6c) form2_midp_label_pane

0xbccf,	// (0x00058e85) form2_midp_label_pane_cp_ParamLimits

0xbccf,	// (0x00058e85) form2_midp_label_pane_cp

0xbcf0,	// (0x00058ea6) form2_midp_string_pane_ParamLimits

0xbcf0,	// (0x00058ea6) form2_midp_string_pane

0x64b3,	// (0x00053669) form2_midp_text_pane_ParamLimits

0x64b3,	// (0x00053669) form2_midp_text_pane

0xbd02,	// (0x00058eb8) form2_midp_time_pane

0xbd12,	// (0x00058ec8) input_focus_pane_cp51_ParamLimits

0xbd12,	// (0x00058ec8) input_focus_pane_cp51

0xbd2a,	// (0x00058ee0) form2_midp_label_pane_t1_ParamLimits

0xbd2a,	// (0x00058ee0) form2_midp_label_pane_t1

0x64d2,	// (0x00053688) form2_mdip_text_pane_t1_ParamLimits

0x64d2,	// (0x00053688) form2_mdip_text_pane_t1

0x64f0,	// (0x000536a6) form2_midp_time_pane_t1

0xbd73,	// (0x00058f29) form2_midp_gauge_slider_pane_t1

0xbd85,	// (0x00058f3b) form2_midp_gauge_slider_pane_t2

0xbd97,	// (0x00058f4d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0005cc7c) form2_midp_gauge_slider_pane_t

0xbda9,	// (0x00058f5f) form2_midp_slider_pane

0xbdb5,	// (0x00058f6b) form2_midp_gauge_wait_pane_t1

0xbdc3,	// (0x00058f79) form2_midp_wait_pane_ParamLimits

0xbdc3,	// (0x00058f79) form2_midp_wait_pane

0xbdee,	// (0x00058fa4) list_single_2graphic_pane_cp4_ParamLimits

0xbdee,	// (0x00058fa4) list_single_2graphic_pane_cp4

0x9b43,	// (0x00056cf9) list_single_midp_graphic_pane_cp_ParamLimits

0x9b43,	// (0x00056cf9) list_single_midp_graphic_pane_cp

0x77a0,	// (0x00054956) list_highlight_pane_cp20

0xbe12,	// (0x00058fc8) list_single_2graphic_pane_g1_cp4

0xbe1a,	// (0x00058fd0) list_single_2graphic_pane_g2_cp4

0xbe22,	// (0x00058fd8) list_single_2graphic_pane_t1_cp4

0x7880,	// (0x00054a36) list_highlight_pane_cp21

0xbe31,	// (0x00058fe7) list_single_midp_graphic_pane_g4_cp

0xbe40,	// (0x00058ff6) list_single_midp_graphic_pane_t1_cp

0xbe55,	// (0x0005900b) form2_mdip_string_pane_t1_ParamLimits

0xbe55,	// (0x0005900b) form2_mdip_string_pane_t1

0x77a0,	// (0x00054956) bg_wml_button_pane_cp2

0x199d,	// (0x0004eb53) form2_midp_image_pane_g1

0x812e,	// (0x000552e4) list_double_large_graphic_pane_g5_ParamLimits

0x812e,	// (0x000552e4) list_double_large_graphic_pane_g5

0x91af,	// (0x00056365) midp_form_pane_ParamLimits

0x7880,	// (0x00054a36) main_apps_wheel_pane_ParamLimits

0x5a0f,	// (0x00052bc5) popup_preview_window_ParamLimits

0x5a0f,	// (0x00052bc5) popup_preview_window

0x5bca,	// (0x00052d80) popup_touch_info_window_ParamLimits

0x5bca,	// (0x00052d80) popup_touch_info_window

0x5be8,	// (0x00052d9e) popup_touch_menu_window_ParamLimits

0x5be8,	// (0x00052d9e) popup_touch_menu_window

0x1993,	// (0x0004eb49) bg_popup_sub_pane_cp6

0xbf4e,	// (0x00059104) list_touch_menu_pane

0xbf56,	// (0x0005910c) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0005910c) list_single_touch_menu_pane

0xbf6c,	// (0x00059122) list_single_touch_menu_pane_t1

0x7880,	// (0x00054a36) bg_popup_sub_pane_cp7_ParamLimits

0x7880,	// (0x00054a36) bg_popup_sub_pane_cp7

0xbf7a,	// (0x00059130) heading_sub_pane

0xbf82,	// (0x00059138) list_touch_info_pane_ParamLimits

0xbf82,	// (0x00059138) list_touch_info_pane

0xbf91,	// (0x00059147) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x00059147) list_single_touch_info_pane

0xbfa3,	// (0x00059159) list_single_touch_info_pane_t1

0xbfb1,	// (0x00059167) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0005cc8a) list_single_touch_info_pane_t

0x91a7,	// (0x0005635d) bg_popup_heading_pane_cp

0xbfbf,	// (0x00059175) heading_sub_pane_t1

0x9a69,	// (0x00056c1f) bg_popup_preview_window_pane_cp_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x00059130) heading_preview_pane

0xbf82,	// (0x00059138) list_preview_pane_ParamLimits

0xbf82,	// (0x00059138) list_preview_pane

0xbfcd,	// (0x00059183) popup_preview_window_g1

0xbf91,	// (0x00059147) list_single_preview_pane_ParamLimits

0xbf91,	// (0x00059147) list_single_preview_pane

0xbfd5,	// (0x0005918b) list_single_preview_pane_g1

0xbfdd,	// (0x00059193) list_single_preview_pane_t1

0xbfa3,	// (0x00059159) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0005cc8f) list_single_preview_pane_t

0xbfeb,	// (0x000591a1) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x000591a1) bg_popup_heading_pane_cp2

0xc001,	// (0x000591b7) heading_preview_pane_g1

0xc009,	// (0x000591bf) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x000591bf) heading_preview_pane_t1

0x796c,	// (0x00054b22) soft_indicator_pane_t1_ParamLimits

0x8080,	// (0x00055236) scroll_pane_ParamLimits

0x8984,	// (0x00055b3a) scroll_sc2_left_pane

0x898d,	// (0x00055b43) scroll_sc2_right_pane

0x89ac,	// (0x00055b62) scroll_bg_pane_g1_ParamLimits

0x89c1,	// (0x00055b77) scroll_bg_pane_g2_ParamLimits

0x89d9,	// (0x00055b8f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0005c879) scroll_bg_pane_g_ParamLimits

0x89ac,	// (0x00055b62) scroll_handle_pane_g1_ParamLimits

0x89fb,	// (0x00055bb1) scroll_handle_pane_g2_ParamLimits

0x89d9,	// (0x00055b8f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0005c880) scroll_handle_pane_g_ParamLimits

0x568e,	// (0x00052844) popup_choice_list_window_ParamLimits

0x568e,	// (0x00052844) popup_choice_list_window

0x993f,	// (0x00056af5) choice_list_pane

0x99c1,	// (0x00056b77) cell_toolbar_pane_t1

0x99e9,	// (0x00056b9f) toolbar_button_pane_ParamLimits

0xaad2,	// (0x00057c88) ai_gene_pane_1_t2_ParamLimits

0xaad2,	// (0x00057c88) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0005caa3) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0005caa3) ai_gene_pane_1_t

0xc026,	// (0x000591dc) scroll_sc2_left_pane_g1

0xc026,	// (0x000591dc) scroll_sc2_right_pane_g1

0x94cb,	// (0x00056681) bg_popup_sub_pane_cp10

0xc030,	// (0x000591e6) list_choice_list_pane

0xc049,	// (0x000591ff) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x000591ff) list_single_choice_list_pane

0xc05c,	// (0x00059212) list_single_choice_list_pane_g1

0x868a,	// (0x00055840) list_single_choice_list_pane_t1_ParamLimits

0x868a,	// (0x00055840) list_single_choice_list_pane_t1

0xc064,	// (0x0005921a) choice_list_pane_g1

0xc06c,	// (0x00059222) choice_list_pane_t1

0x1993,	// (0x0004eb49) input_focus_pane_cp11

0x8861,	// (0x00055a17) title_pane_stacon_g2_ParamLimits

0x8861,	// (0x00055a17) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0005c85f) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0005c85f) title_pane_stacon_g

0x91a7,	// (0x0005635d) cursor_press_pane

0x573a,	// (0x000528f0) popup_fep_hwr_window_ParamLimits

0x573a,	// (0x000528f0) popup_fep_hwr_window

0x57b4,	// (0x0005296a) popup_fep_vkb_window_ParamLimits

0x57b4,	// (0x0005296a) popup_fep_vkb_window

0xc07a,	// (0x00059230) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0005ccb8) fep_vkb_side_pane_g_ParamLimits

0x653c,	// (0x000536f2) fep_hwr_candidate_pane_ParamLimits

0x653c,	// (0x000536f2) fep_hwr_candidate_pane

0x6566,	// (0x0005371c) fep_hwr_side_pane_ParamLimits

0x6566,	// (0x0005371c) fep_hwr_side_pane

0x6586,	// (0x0005373c) fep_hwr_top_pane_ParamLimits

0x6586,	// (0x0005373c) fep_hwr_top_pane

0x659e,	// (0x00053754) fep_hwr_write_pane_ParamLimits

0x659e,	// (0x00053754) fep_hwr_write_pane

0xfb02,	// (0x0005ccb8) fep_vkb_side_pane_g

0xc082,	// (0x00059238) fep_hwr_top_pane_g1

0xc094,	// (0x0005924a) fep_hwr_top_pane_g2

0x65d8,	// (0x0005378e) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0005cc94) fep_hwr_top_pane_g

0x65ed,	// (0x000537a3) fep_hwr_top_text_pane

0x8b7b,	// (0x00055d31) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x00059280) fep_hwr_top_text_pane_t1

0x66e3,	// (0x00053899) fep_hwr_candidate_pane_g1

0xc31d,	// (0x000594d3) fep_vkb_keypad_pane_g3_ParamLimits

0xc31d,	// (0x000594d3) fep_vkb_keypad_pane_g3

0xc345,	// (0x000594fb) fep_vkb_keypad_pane_g4_ParamLimits

0xc345,	// (0x000594fb) fep_vkb_keypad_pane_g4

0xc3b4,	// (0x0005956a) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b4,	// (0x0005956a) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0005ccbf) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0005ccbf) fep_vkb_bottom_pane_g

0xc026,	// (0x000591dc) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0005ccc9) cell_vkb_side_pane_g

0xc43f,	// (0x000595f5) cell_vkb_side_pane_t1

0xc44d,	// (0x00059603) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x000591dc) bg_fep_vkb_candidate_pane_g2

0xc579,	// (0x0005972f) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0005928e) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0005928e) aid_size_cell_vkb

0xc579,	// (0x0005972f) cell_vkb_candidate_pane

0x670a,	// (0x000538c0) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0005931c) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0005931c) fep_vkb_bottom_pane

0xc19c,	// (0x00059352) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x00059352) fep_vkb_candidate_pane

0xc1b8,	// (0x0005936e) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x0005936e) fep_vkb_keypad_pane

0xc1fe,	// (0x000593b4) fep_vkb_side_pane_ParamLimits

0xc1fe,	// (0x000593b4) fep_vkb_side_pane

0xc23a,	// (0x000593f0) fep_vkb_top_pane_ParamLimits

0xc23a,	// (0x000593f0) fep_vkb_top_pane

0xc276,	// (0x0005942c) fep_vkb_top_pane_g1_ParamLimits

0xc276,	// (0x0005942c) fep_vkb_top_pane_g1

0xc285,	// (0x0005943b) fep_vkb_top_pane_g2_ParamLimits

0xc285,	// (0x0005943b) fep_vkb_top_pane_g2

0xc294,	// (0x0005944a) fep_vkb_top_pane_g3_ParamLimits

0xc294,	// (0x0005944a) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0005ccaf) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0005ccaf) fep_vkb_top_pane_g

0xc2b2,	// (0x00059468) fep_vkb_top_text_pane_ParamLimits

0xc2b2,	// (0x00059468) fep_vkb_top_text_pane

0xc2c3,	// (0x00059479) fep_vkb_side_pane_g1_ParamLimits

0xc2c3,	// (0x00059479) fep_vkb_side_pane_g1

0xc30c,	// (0x000594c2) grid_vkb_side_pane_ParamLimits

0xc30c,	// (0x000594c2) grid_vkb_side_pane

0x6712,	// (0x000538c8) bg_popup_fep_shadow_pane_g2

0x671b,	// (0x000538d1) bg_popup_fep_shadow_pane_g3

0x6723,	// (0x000538d9) bg_popup_fep_shadow_pane_g4

0x672c,	// (0x000538e2) bg_popup_fep_shadow_pane_g5

0x6736,	// (0x000538ec) bg_popup_fep_shadow_pane_g6

0x673e,	// (0x000538f4) bg_popup_fep_shadow_pane_g7

0x8556,	// (0x0005570c) bg_popup_fep_shadow_pane_g8

0xc363,	// (0x00059519) grid_vkb_keypad_number_pane_ParamLimits

0xc363,	// (0x00059519) grid_vkb_keypad_number_pane

0xc373,	// (0x00059529) grid_vkb_keypad_pane_ParamLimits

0xc373,	// (0x00059529) grid_vkb_keypad_pane

0xc399,	// (0x0005954f) fep_vkb_bottom_pane_g1_ParamLimits

0xc399,	// (0x0005954f) fep_vkb_bottom_pane_g1

0xc3c2,	// (0x00059578) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c2,	// (0x00059578) grid_vkb_keypad_bottom_left_pane

0xc3d7,	// (0x0005958d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d7,	// (0x0005958d) grid_vkb_keypad_bottom_right_pane

0xc3ec,	// (0x000595a2) fep_vkb_top_text_pane_g1

0xc407,	// (0x000595bd) fep_vkb_top_text_pane_t1

0xc41c,	// (0x000595d2) cell_vkb_side_pane_ParamLimits

0xc41c,	// (0x000595d2) cell_vkb_side_pane

0xc026,	// (0x000591dc) cell_vkb_side_pane_g1

0xc45b,	// (0x00059611) cell_vkb_keypad_pane_ParamLimits

0xc45b,	// (0x00059611) cell_vkb_keypad_pane

0xc4d0,	// (0x00059686) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0005ccdc) bg_popup_fep_shadow_pane_g

0x6750,	// (0x00053906) cell_hwr_side_pane_g1

0x6750,	// (0x00053906) cell_hwr_side_pane_g2

0xc4da,	// (0x00059690) cell_vkb_keypad_pane_t1

0xc4e8,	// (0x0005969e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e8,	// (0x0005969e) cell_vkb_keypad_bottom_left_pane

0xc505,	// (0x000596bb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc505,	// (0x000596bb) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x000591dc) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x000591dc) cell_vkb_keypad_bottom_right_pane_g1

0xc53e,	// (0x000596f4) cell_vkb_keypad_number_pane_ParamLimits

0xc53e,	// (0x000596f4) cell_vkb_keypad_number_pane

0xc55d,	// (0x00059713) cell_vkb_keypad_number_pane_g1

0xc567,	// (0x0005971d) cell_vkb_keypad_number_pane_g2

0xc570,	// (0x00059726) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0005ccce) cell_vkb_keypad_number_pane_g

0xc4da,	// (0x00059690) cell_vkb_keypad_number_pane_t1

0xc594,	// (0x0005974a) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x0005ccef) cell_hwr_side_pane_g

0xc5ad,	// (0x00059763) cell_hwr_side_pane_t1

0x675a,	// (0x00053910) cell_hwr_side_pane_t1_copy1

0x6768,	// (0x0005391e) cell_hwr_candidate_pane_g1

0x6797,	// (0x0005394d) cell_hwr_candidate_pane_t1

0xc026,	// (0x000591dc) cell_vkb_candidate_pane_g2

0xc5f1,	// (0x000597a7) cell_vkb_candidate_pane_t1

0x6503,	// (0x000536b9) bg_popup_fep_shadow_pane_ParamLimits

0x6503,	// (0x000536b9) bg_popup_fep_shadow_pane

0x65b8,	// (0x0005376e) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0005925c) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0005925c) bg_hwr_side_pane_g1

0x6629,	// (0x000537df) cell_hwr_side_pane_ParamLimits

0x6629,	// (0x000537df) cell_hwr_side_pane

0x6664,	// (0x0005381a) fep_hwr_write_pane_g1_ParamLimits

0x6664,	// (0x0005381a) fep_hwr_write_pane_g1

0x6671,	// (0x00053827) fep_hwr_write_pane_g2_ParamLimits

0x6671,	// (0x00053827) fep_hwr_write_pane_g2

0x667e,	// (0x00053834) fep_hwr_write_pane_g3_ParamLimits

0x667e,	// (0x00053834) fep_hwr_write_pane_g3

0x668c,	// (0x00053842) fep_hwr_write_pane_g4_ParamLimits

0x668c,	// (0x00053842) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0005cc9b) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0005cc9b) fep_hwr_write_pane_g

0x65b8,	// (0x0005376e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65b8,	// (0x0005376e) bg_fep_hwr_candidate_pane_g2

0x66a1,	// (0x00053857) cell_hwr_candidate_pane_ParamLimits

0x66a1,	// (0x00053857) cell_hwr_candidate_pane

0x66e3,	// (0x00053899) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x000592bc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x000592bc) bg_popup_fep_shadow_pane_cp2

0xc2a4,	// (0x0005945a) fep_vkb_top_pane_g4_ParamLimits

0xc2a4,	// (0x0005945a) fep_vkb_top_pane_g4

0xc2ea,	// (0x000594a0) fep_vkb_side_pane_g2_ParamLimits

0xc2ea,	// (0x000594a0) fep_vkb_side_pane_g2

0x4ca9,	// (0x00051e5f) list_setting_pane_t4_ParamLimits

0x4ca9,	// (0x00051e5f) list_setting_pane_t4

0x4d43,	// (0x00051ef9) list_setting_number_pane_t5_ParamLimits

0x4d43,	// (0x00051ef9) list_setting_number_pane_t5

0x8bc2,	// (0x00055d78) list_double_heading_pane_cp2_ParamLimits

0x8bc2,	// (0x00055d78) list_double_heading_pane_cp2

0x8116,	// (0x000552cc) list_double_heading_pane_g1_cp2_ParamLimits

0x8116,	// (0x000552cc) list_double_heading_pane_g1_cp2

0x8500,	// (0x000556b6) list_double_heading_pane_g2_cp2_ParamLimits

0x8500,	// (0x000556b6) list_double_heading_pane_g2_cp2

0xc5ff,	// (0x000597b5) list_double_heading_pane_t1_cp2_ParamLimits

0xc5ff,	// (0x000597b5) list_double_heading_pane_t1_cp2

0xc615,	// (0x000597cb) list_double_heading_pane_t2_cp2_ParamLimits

0xc615,	// (0x000597cb) list_double_heading_pane_t2_cp2

0x198b,	// (0x0004eb41) aid_value_unit2

0x482d,	// (0x000519e3) popup_preview_fixed_window

0x7b09,	// (0x00054cbf) bg_popup_preview_window_pane_cp02

0xc627,	// (0x000597dd) list_preview_fixed_pane

0xc66d,	// (0x00059823) list_empty_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_empty_pane_fp

0xc66d,	// (0x00059823) list_single_cale_day_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_cale_day_pane_fp

0xc66d,	// (0x00059823) list_single_graphic_heading_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_graphic_heading_pane_fp

0xc66d,	// (0x00059823) list_single_graphic_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_graphic_pane_fp

0xc66d,	// (0x00059823) list_single_heading_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_heading_pane_fp

0xc66d,	// (0x00059823) list_single_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_pane_fp

0xc682,	// (0x00059838) list_single_pane_fp_g1_ParamLimits

0xc682,	// (0x00059838) list_single_pane_fp_g1

0x8116,	// (0x000552cc) list_single_pane_fp_g2_ParamLimits

0x8116,	// (0x000552cc) list_single_pane_fp_g2

0x8500,	// (0x000556b6) list_single_pane_fp_g3_ParamLimits

0x8500,	// (0x000556b6) list_single_pane_fp_g3

0xc68e,	// (0x00059844) list_single_pane_fp_g4_ParamLimits

0xc68e,	// (0x00059844) list_single_pane_fp_g4

0x0003,

0xfb4c,	// (0x0005cd02) list_single_pane_fp_g_ParamLimits

0xfb4c,	// (0x0005cd02) list_single_pane_fp_g

0x67b5,	// (0x0005396b) list_single_pane_fp_t1_ParamLimits

0x67b5,	// (0x0005396b) list_single_pane_fp_t1

0x67cc,	// (0x00053982) list_single_graphic_pane_fp_g1_ParamLimits

0x67cc,	// (0x00053982) list_single_graphic_pane_fp_g1

0xc682,	// (0x00059838) list_single_graphic_pane_fp_g2_ParamLimits

0xc682,	// (0x00059838) list_single_graphic_pane_fp_g2

0x8116,	// (0x000552cc) list_single_graphic_pane_fp_g3_ParamLimits

0x8116,	// (0x000552cc) list_single_graphic_pane_fp_g3

0x8500,	// (0x000556b6) list_single_graphic_pane_fp_g4_ParamLimits

0x8500,	// (0x000556b6) list_single_graphic_pane_fp_g4

0xc68e,	// (0x00059844) list_single_graphic_pane_fp_g5_ParamLimits

0xc68e,	// (0x00059844) list_single_graphic_pane_fp_g5

0x0004,

0xfb55,	// (0x0005cd0b) list_single_graphic_pane_fp_g_ParamLimits

0xfb55,	// (0x0005cd0b) list_single_graphic_pane_fp_g

0x67d8,	// (0x0005398e) list_single_graphic_pane_fp_t1_ParamLimits

0x67d8,	// (0x0005398e) list_single_graphic_pane_fp_t1

0x67cc,	// (0x00053982) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67cc,	// (0x00053982) list_single_graphic_heading_pane_fp_g1

0xc682,	// (0x00059838) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc682,	// (0x00059838) list_single_graphic_heading_pane_fp_g2

0x8116,	// (0x000552cc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8116,	// (0x000552cc) list_single_graphic_heading_pane_fp_g3

0x8500,	// (0x000556b6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8500,	// (0x000556b6) list_single_graphic_heading_pane_fp_g4

0xc68e,	// (0x00059844) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc68e,	// (0x00059844) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005cd0b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005cd0b) list_single_graphic_heading_pane_fp_g

0x67ee,	// (0x000539a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x67ee,	// (0x000539a4) list_single_graphic_heading_pane_fp_t1

0x6804,	// (0x000539ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6804,	// (0x000539ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb60,	// (0x0005cd16) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb60,	// (0x0005cd16) list_single_graphic_heading_pane_fp_t

0x6816,	// (0x000539cc) list_single_cale_day_pane_fp_g1_ParamLimits

0x6816,	// (0x000539cc) list_single_cale_day_pane_fp_g1

0xc69a,	// (0x00059850) list_single_cale_day_pane_fp_g2_ParamLimits

0xc69a,	// (0x00059850) list_single_cale_day_pane_fp_g2

0x82cf,	// (0x00055485) list_single_cale_day_pane_fp_g3_ParamLimits

0x82cf,	// (0x00055485) list_single_cale_day_pane_fp_g3

0x82f7,	// (0x000554ad) list_single_cale_day_pane_fp_g4_ParamLimits

0x82f7,	// (0x000554ad) list_single_cale_day_pane_fp_g4

0x831b,	// (0x000554d1) list_single_cale_day_pane_fp_g5_ParamLimits

0x831b,	// (0x000554d1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb65,	// (0x0005cd1b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb65,	// (0x0005cd1b) list_single_cale_day_pane_fp_g

0x684e,	// (0x00053a04) list_single_cale_day_pane_fp_t1_ParamLimits

0x684e,	// (0x00053a04) list_single_cale_day_pane_fp_t1

0x6874,	// (0x00053a2a) list_single_cale_day_pane_fp_t2_ParamLimits

0x6874,	// (0x00053a2a) list_single_cale_day_pane_fp_t2

0x688d,	// (0x00053a43) list_single_cale_day_pane_fp_t3_ParamLimits

0x688d,	// (0x00053a43) list_single_cale_day_pane_fp_t3

0x0002,

0xfb70,	// (0x0005cd26) list_single_cale_day_pane_fp_t_ParamLimits

0xfb70,	// (0x0005cd26) list_single_cale_day_pane_fp_t

0xc682,	// (0x00059838) list_empty_pane_fp_g1_ParamLimits

0xc682,	// (0x00059838) list_empty_pane_fp_g1

0x68a6,	// (0x00053a5c) list_empty_pane_fp_t1

0x68b4,	// (0x00053a6a) list_empty_pane_fp_t2

0x0001,

0xfb77,	// (0x0005cd2d) list_empty_pane_fp_t

0xc682,	// (0x00059838) list_single_heading_pane_fp_g1_ParamLimits

0xc682,	// (0x00059838) list_single_heading_pane_fp_g1

0x8116,	// (0x000552cc) list_single_heading_pane_fp_g2_ParamLimits

0x8116,	// (0x000552cc) list_single_heading_pane_fp_g2

0x8500,	// (0x000556b6) list_single_heading_pane_fp_g3_ParamLimits

0x8500,	// (0x000556b6) list_single_heading_pane_fp_g3

0x0002,

0xfb7c,	// (0x0005cd32) list_single_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0005cd32) list_single_heading_pane_fp_g

0x68c2,	// (0x00053a78) list_single_heading_pane_fp_t1_ParamLimits

0x68c2,	// (0x00053a78) list_single_heading_pane_fp_t1

0x68d4,	// (0x00053a8a) list_single_heading_pane_fp_t2_ParamLimits

0x68d4,	// (0x00053a8a) list_single_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0005cd39) list_single_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0005cd39) list_single_heading_pane_fp_t

0x86f8,	// (0x000558ae) aid_size_cell_fast

0x7a79,	// (0x00054c2f) soft_indicator_pane_cp1_t1

0x8735,	// (0x000558eb) cell_app_pane_cp2_ParamLimits

0x8735,	// (0x000558eb) cell_app_pane_cp2

0x6525,	// (0x000536db) fep_hwr_candidate_drop_down_list_pane

0x66fd,	// (0x000538b3) fep_hwr_candidate_pane_g3_ParamLimits

0x66fd,	// (0x000538b3) fep_hwr_candidate_pane_g3

0x2937,	// (0x0004faed) fep_hwr_candidate_pane_g4_ParamLimits

0x2937,	// (0x0004faed) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0005cca8) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0005cca8) fep_hwr_candidate_pane_g

0xc18b,	// (0x00059341) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x00059341) fep_vkb_candidate_drop_down_list_pane

0xc59c,	// (0x00059752) fep_vkb_candidate_pane_g3

0xc5a4,	// (0x0005975a) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0005ccd5) fep_vkb_candidate_pane_g

0x6768,	// (0x0005391e) cell_hwr_candidate_pane_g1_ParamLimits

0x6776,	// (0x0005392c) cell_hwr_candidate_pane_g3_ParamLimits

0x6776,	// (0x0005392c) cell_hwr_candidate_pane_g3

0xe2d6,	// (0x0005b48c) cell_hwr_candidate_pane_g4_ParamLimits

0xe2d6,	// (0x0005b48c) cell_hwr_candidate_pane_g4

0x0002,

0xfb3e,	// (0x0005ccf4) cell_hwr_candidate_pane_g_ParamLimits

0xfb3e,	// (0x0005ccf4) cell_hwr_candidate_pane_g

0xc5bb,	// (0x00059771) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bb,	// (0x00059771) cell_vkb_candidate_pane_g3

0xc5d6,	// (0x0005978c) cell_vkb_candidate_pane_g4_ParamLimits

0xc5d6,	// (0x0005978c) cell_vkb_candidate_pane_g4

0xc6a6,	// (0x0005985c) cell_app_pane_cp2_g1_ParamLimits

0xc6a6,	// (0x0005985c) cell_app_pane_cp2_g1

0xc6c4,	// (0x0005987a) cell_app_pane_cp2_g2_ParamLimits

0xc6c4,	// (0x0005987a) cell_app_pane_cp2_g2

0x0001,

0xfb88,	// (0x0005cd3e) cell_app_pane_cp2_g_ParamLimits

0xfb88,	// (0x0005cd3e) cell_app_pane_cp2_g

0xc6d0,	// (0x00059886) cell_app_pane_cp2_t1_ParamLimits

0xc6d0,	// (0x00059886) cell_app_pane_cp2_t1

0x84f2,	// (0x000556a8) grid_highlight_pane_cp1_ParamLimits

0x84f2,	// (0x000556a8) grid_highlight_pane_cp1

0x68ea,	// (0x00053aa0) cell_hwr_candidate_pane_cp1_ParamLimits

0x68ea,	// (0x00053aa0) cell_hwr_candidate_pane_cp1

0x6768,	// (0x0005391e) fep_hwr_candidate_drop_down_list_pane_g1

0x6909,	// (0x00053abf) fep_hwr_candidate_drop_down_list_pane_g2

0x6916,	// (0x00053acc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8d,	// (0x0005cd43) fep_hwr_candidate_drop_down_list_pane_g

0x6923,	// (0x00053ad9) fep_hwr_candidate_drop_down_list_scroll_pane

0x692c,	// (0x00053ae2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x692c,	// (0x00053ae2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6939,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6939,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6946,	// (0x00053afc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6946,	// (0x00053afc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6953,	// (0x00053b09) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6953,	// (0x00053b09) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x696e,	// (0x00053b24) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x696e,	// (0x00053b24) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6989,	// (0x00053b3f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6989,	// (0x00053b3f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x69a4,	// (0x00053b5a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x69a4,	// (0x00053b5a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x69bf,	// (0x00053b75) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x69bf,	// (0x00053b75) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0005cd4a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0005cd4a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6e2,	// (0x00059898) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6e2,	// (0x00059898) cell_vkb_candidate_pane_cp1

0xc2a4,	// (0x0005945a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a4,	// (0x0005945a) fep_vkb_candidate_drop_down_list_pane_g1

0xc702,	// (0x000598b8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc702,	// (0x000598b8) fep_vkb_candidate_drop_down_list_pane_g2

0xc70f,	// (0x000598c5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc70f,	// (0x000598c5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba5,	// (0x0005cd5b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba5,	// (0x0005cd5b) fep_vkb_candidate_drop_down_list_pane_g

0xc71c,	// (0x000598d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc71c,	// (0x000598d2) fep_vkb_candidate_drop_down_list_scroll_pane

0xc729,	// (0x000598df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc729,	// (0x000598df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc736,	// (0x000598ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc736,	// (0x000598ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc742,	// (0x000598f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc742,	// (0x000598f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc74e,	// (0x00059904) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc74e,	// (0x00059904) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc76f,	// (0x00059925) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc76f,	// (0x00059925) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc790,	// (0x00059946) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc790,	// (0x00059946) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b1,	// (0x00059967) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b1,	// (0x00059967) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d2,	// (0x00059988) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d2,	// (0x00059988) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x0005cd62) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x0005cd62) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x77aa,	// (0x00054960) title_pane_g1_ParamLimits

0x77b7,	// (0x0005496d) title_pane_g2_ParamLimits

0xf529,	// (0x0005c6df) title_pane_g_ParamLimits

0x8b6b,	// (0x00055d21) aid_call2_pane

0x8b73,	// (0x00055d29) aid_call_pane

0x8b7b,	// (0x00055d31) popup_clock_analogue_window_g1

0x8b7b,	// (0x00055d31) popup_clock_analogue_window_g2

0x51ad,	// (0x00052363) popup_clock_analogue_window_g3

0x51b6,	// (0x0005236c) popup_clock_analogue_window_g4

0x199d,	// (0x0004eb53) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0005c88e) popup_clock_analogue_window_g

0x51be,	// (0x00052374) popup_clock_analogue_window_t1

0x51cc,	// (0x00052382) clock_digital_number_pane_ParamLimits

0x51cc,	// (0x00052382) clock_digital_number_pane

0x51d8,	// (0x0005238e) clock_digital_number_pane_cp02_ParamLimits

0x51d8,	// (0x0005238e) clock_digital_number_pane_cp02

0x51e4,	// (0x0005239a) clock_digital_number_pane_cp03_ParamLimits

0x51e4,	// (0x0005239a) clock_digital_number_pane_cp03

0x51f0,	// (0x000523a6) clock_digital_number_pane_cp04_ParamLimits

0x51f0,	// (0x000523a6) clock_digital_number_pane_cp04

0x51fc,	// (0x000523b2) clock_digital_separator_pane_ParamLimits

0x51fc,	// (0x000523b2) clock_digital_separator_pane

0x5208,	// (0x000523be) popup_clock_digital_window_t1_ParamLimits

0x5208,	// (0x000523be) popup_clock_digital_window_t1

0x199d,	// (0x0004eb53) clock_digital_number_pane_g1

0x199d,	// (0x0004eb53) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0005c899) clock_digital_number_pane_g

0x199d,	// (0x0004eb53) clock_digital_separator_pane_g1

0x199d,	// (0x0004eb53) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0005c899) clock_digital_separator_pane_g

0x9507,	// (0x000566bd) aid_fill_nsta_ParamLimits

0x9653,	// (0x00056809) indicator_nsta_pane_ParamLimits

0x97cc,	// (0x00056982) popup_clock_analogue_window

0x97cc,	// (0x00056982) popup_clock_digital_window

0xba01,	// (0x00058bb7) grid_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x00058be0) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0005cc28) clock_nsta_pane_t

0x5171,	// (0x00052327) aid_size_max_handle

0x517b,	// (0x00052331) aid_size_min_handle

0x91a7,	// (0x0005635d) editor_scroll_pane

0xc7ed,	// (0x000599a3) ex_editor_pane

0x8666,	// (0x0005581c) scroll_pane_cp13

0x80ac,	// (0x00055262) scroll_pane_cp14

0x8baa,	// (0x00055d60) scroll_pane_cp36

0x8bd6,	// (0x00055d8c) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bd6,	// (0x00055d8c) list_single_graphic_hl_pane_cp2

0xafd2,	// (0x00058188) list_single_graphic_hl_pane_ParamLimits

0xafd2,	// (0x00058188) list_single_graphic_hl_pane

0x69da,	// (0x00053b90) aid_size_min_hl_cp1

0xc7f5,	// (0x000599ab) list_highlight_pane_cp34_ParamLimits

0xc7f5,	// (0x000599ab) list_highlight_pane_cp34

0xc806,	// (0x000599bc) list_single_graphic_hl_pane_g1_ParamLimits

0xc806,	// (0x000599bc) list_single_graphic_hl_pane_g1

0x69e3,	// (0x00053b99) list_single_graphic_hl_pane_g2_ParamLimits

0x69e3,	// (0x00053b99) list_single_graphic_hl_pane_g2

0x69e3,	// (0x00053b99) list_single_graphic_hl_pane_g3_ParamLimits

0x69e3,	// (0x00053b99) list_single_graphic_hl_pane_g3

0x90ec,	// (0x000562a2) list_single_graphic_hl_pane_g4_ParamLimits

0x90ec,	// (0x000562a2) list_single_graphic_hl_pane_g4

0x833f,	// (0x000554f5) list_single_graphic_hl_pane_g5_ParamLimits

0x833f,	// (0x000554f5) list_single_graphic_hl_pane_g5

0x0004,

0xfbbd,	// (0x0005cd73) list_single_graphic_hl_pane_g_ParamLimits

0xfbbd,	// (0x0005cd73) list_single_graphic_hl_pane_g

0x69ef,	// (0x00053ba5) list_single_graphic_hl_pane_t1_ParamLimits

0x69ef,	// (0x00053ba5) list_single_graphic_hl_pane_t1

0xc813,	// (0x000599c9) aid_size_min_hl_cp2

0xc81c,	// (0x000599d2) list_highlight_pane_cp34_cp2_ParamLimits

0xc81c,	// (0x000599d2) list_highlight_pane_cp34_cp2

0xc806,	// (0x000599bc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc806,	// (0x000599bc) list_single_graphic_hl_pane_g1_cp2

0xc829,	// (0x000599df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc829,	// (0x000599df) list_single_graphic_hl_pane_g2_cp2

0xc835,	// (0x000599eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc835,	// (0x000599eb) list_single_graphic_hl_pane_g3_cp2

0xc843,	// (0x000599f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc843,	// (0x000599f9) list_single_graphic_hl_pane_g4_cp2

0xc84f,	// (0x00059a05) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84f,	// (0x00059a05) list_single_graphic_hl_pane_g5_cp2

0x552a,	// (0x000526e0) control_pane_g4_ParamLimits

0x552a,	// (0x000526e0) control_pane_g4

0x94cb,	// (0x00056681) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x000591e6) list_choice_list_pane_ParamLimits

0xc03f,	// (0x000591f5) scroll_pane_cp23

0x7b09,	// (0x00054cbf) bg_popup_preview_window_pane_cp02_ParamLimits

0xc627,	// (0x000597dd) list_preview_fixed_pane_ParamLimits

0xc63d,	// (0x000597f3) list_preview_fixed_pane_cp_ParamLimits

0xc63d,	// (0x000597f3) list_preview_fixed_pane_cp

0xc649,	// (0x000597ff) popup_preview_fixed_window_g1_ParamLimits

0xc649,	// (0x000597ff) popup_preview_fixed_window_g1

0xc655,	// (0x0005980b) popup_preview_fixed_window_g2_ParamLimits

0xc655,	// (0x0005980b) popup_preview_fixed_window_g2

0x0002,

0xfb45,	// (0x0005ccfb) popup_preview_fixed_window_g_ParamLimits

0xfb45,	// (0x0005ccfb) popup_preview_fixed_window_g

0x50e5,	// (0x0005229b) aid_navi_side_left_pane_ParamLimits

0x50fa,	// (0x000522b0) aid_navi_side_right_pane_ParamLimits

0x5112,	// (0x000522c8) navi_icon_pane_stacon_ParamLimits

0x5126,	// (0x000522dc) navi_navi_pane_stacon_ParamLimits

0x5112,	// (0x000522c8) navi_text_pane_stacon_ParamLimits

0x46ee,	// (0x000518a4) main_text_info_pane

0xc879,	// (0x00059a2f) listscroll_text_info_pane

0xc881,	// (0x00059a37) list_text_info_pane_ParamLimits

0xc881,	// (0x00059a37) list_text_info_pane

0xc890,	// (0x00059a46) scroll_pane_cp24_ParamLimits

0xc890,	// (0x00059a46) scroll_pane_cp24

0xc8ae,	// (0x00059a64) list_text_info_pane_t1_ParamLimits

0xc8ae,	// (0x00059a64) list_text_info_pane_t1

0x56ac,	// (0x00052862) popup_fast_swap2_window_ParamLimits

0x56ac,	// (0x00052862) popup_fast_swap2_window

0xc8df,	// (0x00059a95) aid_size_cell_fast2

0x1993,	// (0x0004eb49) bg_popup_window_pane_cp17

0x9e55,	// (0x0005700b) heading_pane_cp2

0x9e5d,	// (0x00057013) listscroll_fast2_pane

0xc8e9,	// (0x00059a9f) grid_fast2_pane

0xc8f3,	// (0x00059aa9) listscroll_fast2_pane_g1

0xc8fb,	// (0x00059ab1) listscroll_fast2_pane_g2

0x0001,

0xfbc8,	// (0x0005cd7e) listscroll_fast2_pane_g

0x8666,	// (0x0005581c) scroll_pane_cp26

0xc905,	// (0x00059abb) cell_fast2_pane_ParamLimits

0xc905,	// (0x00059abb) cell_fast2_pane

0xc91a,	// (0x00059ad0) cell_fast2_pane_g1

0xc923,	// (0x00059ad9) cell_fast2_pane_g2

0xc92c,	// (0x00059ae2) cell_fast2_pane_g3

0x0002,

0xfbcd,	// (0x0005cd83) cell_fast2_pane_g

0x7e69,	// (0x0005501f) grid_highlight_pane_cp9

0x566a,	// (0x00052820) main_eswt_pane_ParamLimits

0x566a,	// (0x00052820) main_eswt_pane

0xc8a5,	// (0x00059a5b) list_single_text_info_pane

0xc934,	// (0x00059aea) eswt_ctrl_button_pane

0xc934,	// (0x00059aea) eswt_ctrl_canvas_pane

0xc93c,	// (0x00059af2) eswt_ctrl_combo_pane

0xc934,	// (0x00059aea) eswt_ctrl_default_pane

0xc934,	// (0x00059aea) eswt_ctrl_label_pane

0xc944,	// (0x00059afa) eswt_ctrl_wait_pane

0xc94c,	// (0x00059b02) eswt_shell_pane

0x1993,	// (0x0004eb49) listscroll_eswt_app_pane

0xc96c,	// (0x00059b22) popup_eswt_tasktip_window_ParamLimits

0xc96c,	// (0x00059b22) popup_eswt_tasktip_window

0x9a69,	// (0x00056c1f) bg_popup_window_pane_cp18

0xc97d,	// (0x00059b33) eswt_control_pane_g1_ParamLimits

0xc97d,	// (0x00059b33) eswt_control_pane_g1

0xc98a,	// (0x00059b40) eswt_control_pane_g2_ParamLimits

0xc98a,	// (0x00059b40) eswt_control_pane_g2

0xc997,	// (0x00059b4d) eswt_control_pane_g3_ParamLimits

0xc997,	// (0x00059b4d) eswt_control_pane_g3

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_ParamLimits

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4

0x0003,

0xfbd4,	// (0x0005cd8a) eswt_control_pane_g_ParamLimits

0xfbd4,	// (0x0005cd8a) eswt_control_pane_g

0x84f2,	// (0x000556a8) bg_button_pane_ParamLimits

0x84f2,	// (0x000556a8) bg_button_pane

0x7e7e,	// (0x00055034) common_borders_pane_copy2_ParamLimits

0x7e7e,	// (0x00055034) common_borders_pane_copy2

0xc9b1,	// (0x00059b67) control_button_pane_g1_ParamLimits

0xc9b1,	// (0x00059b67) control_button_pane_g1

0xc9bd,	// (0x00059b73) control_button_pane_g2_ParamLimits

0xc9bd,	// (0x00059b73) control_button_pane_g2

0xc9c9,	// (0x00059b7f) control_button_pane_g3_ParamLimits

0xc9c9,	// (0x00059b7f) control_button_pane_g3

0x0002,

0xfbdd,	// (0x0005cd93) control_button_pane_g_ParamLimits

0xfbdd,	// (0x0005cd93) control_button_pane_g

0xc9dd,	// (0x00059b93) control_button_pane_t1

0xc9eb,	// (0x00059ba1) control_button_pane_t2

0x0001,

0xfbe4,	// (0x0005cd9a) control_button_pane_t

0x99f5,	// (0x00056bab) bg_button_pane_g1

0x9a05,	// (0x00056bbb) bg_button_pane_g2

0x99fd,	// (0x00056bb3) bg_button_pane_g3

0x9a15,	// (0x00056bcb) bg_button_pane_g4

0x9a0d,	// (0x00056bc3) bg_button_pane_g5

0x9a1d,	// (0x00056bd3) bg_button_pane_g6

0x9a25,	// (0x00056bdb) bg_button_pane_g7

0x9a35,	// (0x00056beb) bg_button_pane_g8

0x9a2d,	// (0x00056be3) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005c9f7) bg_button_pane_g

0xbfeb,	// (0x000591a1) common_borders_pane_ParamLimits

0xbfeb,	// (0x000591a1) common_borders_pane

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy1_ParamLimits

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy1

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy1_ParamLimits

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy1

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy1_ParamLimits

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy1

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy1_ParamLimits

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy1

0xc026,	// (0x000591dc) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x000591a1) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x000591a1) common_borders_pane_cp2

0xbfeb,	// (0x000591a1) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x000591a1) common_borders_pane_cp3

0xc9f9,	// (0x00059baf) separator_horizontal_pane

0xca01,	// (0x00059bb7) separator_vertical_pane

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy2_ParamLimits

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy2

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy2_ParamLimits

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy2

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy2_ParamLimits

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy2

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy2_ParamLimits

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy2

0x1993,	// (0x0004eb49) common_borders_pane_cp4

0xca0a,	// (0x00059bc0) separator_horizontal_pane_g1

0xca13,	// (0x00059bc9) separator_horizontal_pane_g2

0xca1c,	// (0x00059bd2) separator_horizontal_pane_g3

0x0002,

0xfbe9,	// (0x0005cd9f) separator_horizontal_pane_g

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy3_ParamLimits

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy3

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy3_ParamLimits

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy3

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy3_ParamLimits

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy3

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy3_ParamLimits

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy3

0x1993,	// (0x0004eb49) common_borders_pane_cp5

0xca25,	// (0x00059bdb) separator_vertical_pane_g1

0xca2e,	// (0x00059be4) separator_vertical_pane_g2

0xca37,	// (0x00059bed) separator_vertical_pane_g3

0x0002,

0xfbf0,	// (0x0005cda6) separator_vertical_pane_g

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy4_ParamLimits

0xc97d,	// (0x00059b33) eswt_control_pane_g1_copy4

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy4_ParamLimits

0xc98a,	// (0x00059b40) eswt_control_pane_g2_copy4

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy4_ParamLimits

0xc997,	// (0x00059b4d) eswt_control_pane_g3_copy4

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy4_ParamLimits

0xc9a4,	// (0x00059b5a) eswt_control_pane_g4_copy4

0xca40,	// (0x00059bf6) eswt_ctrl_combo_button_pane

0xca48,	// (0x00059bfe) eswt_ctrl_input_pane

0xca50,	// (0x00059c06) popup_choice_list_window_cp70

0xca58,	// (0x00059c0e) eswt_ctrl_input_pane_t1

0x1993,	// (0x0004eb49) input_focus_pane_cp70

0xbfeb,	// (0x000591a1) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x000591a1) bg_button_pane_cp70

0xca66,	// (0x00059c1c) eswt_ctrl_combo_button_pane_g1

0xca6e,	// (0x00059c24) wait_bar_pane_cp70

0x9a69,	// (0x00056c1f) bg_popup_window_pane_cp70_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_window_pane_cp70

0xca76,	// (0x00059c2c) popup_eswt_tasktip_window_t1

0xca8c,	// (0x00059c42) wait_bar_pane_cp71_ParamLimits

0xca8c,	// (0x00059c42) wait_bar_pane_cp71

0xca98,	// (0x00059c4e) grid_eswt_app_pane

0x8984,	// (0x00055b3a) scroll_pane_cp70

0xcaa1,	// (0x00059c57) cell_eswt_app_pane_ParamLimits

0xcaa1,	// (0x00059c57) cell_eswt_app_pane

0xcad1,	// (0x00059c87) cell_eswt_app_pane_g1_ParamLimits

0xcad1,	// (0x00059c87) cell_eswt_app_pane_g1

0xcb00,	// (0x00059cb6) cell_eswt_app_pane_g2_ParamLimits

0xcb00,	// (0x00059cb6) cell_eswt_app_pane_g2

0x0001,

0xfbf7,	// (0x0005cdad) cell_eswt_app_pane_g_ParamLimits

0xfbf7,	// (0x0005cdad) cell_eswt_app_pane_g

0xcb29,	// (0x00059cdf) cell_eswt_app_pane_t1_ParamLimits

0xcb29,	// (0x00059cdf) cell_eswt_app_pane_t1

0xcb5b,	// (0x00059d11) grid_highlight_pane_cp70_ParamLimits

0xcb5b,	// (0x00059d11) grid_highlight_pane_cp70

0x907f,	// (0x00056235) set_content_pane_g1

0x9452,	// (0x00056608) status_small_volume_pane

0x6a05,	// (0x00053bbb) status_small_volume_pane_g1

0x6a0d,	// (0x00053bc3) volume_small2_pane

0x6a16,	// (0x00053bcc) volume_small2_pane_g1

0x6a1f,	// (0x00053bd5) volume_small2_pane_g2

0x6a28,	// (0x00053bde) volume_small2_pane_g3

0x6a31,	// (0x00053be7) volume_small2_pane_g4

0x6a3a,	// (0x00053bf0) volume_small2_pane_g5

0x6a43,	// (0x00053bf9) volume_small2_pane_g6

0x6a4c,	// (0x00053c02) volume_small2_pane_g7

0x6a55,	// (0x00053c0b) volume_small2_pane_g8

0x6a5e,	// (0x00053c14) volume_small2_pane_g9

0x6a67,	// (0x00053c1d) volume_small2_pane_g10

0x0009,

0xfbfc,	// (0x0005cdb2) volume_small2_pane_g

0xc3ec,	// (0x000595a2) fep_vkb_top_text_pane_g1_ParamLimits

0xc407,	// (0x000595bd) fep_vkb_top_text_pane_t1_ParamLimits

0xc661,	// (0x00059817) popup_preview_fixed_window_g3_ParamLimits

0xc661,	// (0x00059817) popup_preview_fixed_window_g3

0x5b5d,	// (0x00052d13) popup_toolbar_trans_pane

0xadd9,	// (0x00057f8f) aid_height_set_list_ParamLimits

0xadea,	// (0x00057fa0) aid_size_parent_ParamLimits

0x94cb,	// (0x00056681) list_highlight_pane_cp2_ParamLimits

0x907f,	// (0x00056235) set_content_pane_g1_ParamLimits

0x60d6,	// (0x0005328c) list_single_image_pane_ParamLimits

0x60d6,	// (0x0005328c) list_single_image_pane

0xcb67,	// (0x00059d1d) aid_size_cell_image_ParamLimits

0xcb67,	// (0x00059d1d) aid_size_cell_image

0xcb74,	// (0x00059d2a) grid_single_image_pane_ParamLimits

0xcb74,	// (0x00059d2a) grid_single_image_pane

0x9fca,	// (0x00057180) list_single_image_pane_g1_ParamLimits

0x9fca,	// (0x00057180) list_single_image_pane_g1

0xcb80,	// (0x00059d36) list_single_image_pane_g2_ParamLimits

0xcb80,	// (0x00059d36) list_single_image_pane_g2

0x0001,

0xfc11,	// (0x0005cdc7) list_single_image_pane_g_ParamLimits

0xfc11,	// (0x0005cdc7) list_single_image_pane_g

0xcb94,	// (0x00059d4a) list_single_image_pane_t1_ParamLimits

0xcb94,	// (0x00059d4a) list_single_image_pane_t1

0xcbaa,	// (0x00059d60) cell_image_list_pane_ParamLimits

0xcbaa,	// (0x00059d60) cell_image_list_pane

0xcbbe,	// (0x00059d74) cell_image_list_pane_g1

0xcbc7,	// (0x00059d7d) cell_image_list_pane_g2

0x0001,

0xfc16,	// (0x0005cdcc) cell_image_list_pane_g

0xcbd0,	// (0x00059d86) aid_size_cell_tb_trans_pane

0x84f2,	// (0x000556a8) bg_tb_trans_pane

0xcbe2,	// (0x00059d98) grid_tb_trans_pane

0x99f5,	// (0x00056bab) bg_tb_trans_pane_g1

0x9a05,	// (0x00056bbb) bg_tb_trans_pane_g2

0x99fd,	// (0x00056bb3) bg_tb_trans_pane_g3

0x9a15,	// (0x00056bcb) bg_tb_trans_pane_g4

0x9a0d,	// (0x00056bc3) bg_tb_trans_pane_g5

0x9a35,	// (0x00056beb) bg_tb_trans_pane_g6

0x9a2d,	// (0x00056be3) bg_tb_trans_pane_g7

0x9a1d,	// (0x00056bd3) bg_tb_trans_pane_g8

0x9a25,	// (0x00056bdb) bg_tb_trans_pane_g9

0x0008,

0xfc1b,	// (0x0005cdd1) bg_tb_trans_pane_g

0xcbf6,	// (0x00059dac) cell_toolbar_trans_pane_ParamLimits

0xcbf6,	// (0x00059dac) cell_toolbar_trans_pane

0xc026,	// (0x000591dc) cell_toolbar_trans_pane_g1

0xbbfb,	// (0x00058db1) list_form2_midp_pane_t1

0xbc09,	// (0x00058dbf) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0005cc6e) list_form2_midp_pane_t

0xbc17,	// (0x00058dcd) scroll_pane_cp51_ParamLimits

0xbdd3,	// (0x00058f89) form2_midp_wait_pane_g1

0xbddc,	// (0x00058f92) form2_midp_wait_pane_g2

0xbde5,	// (0x00058f9b) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0005cc83) form2_midp_wait_pane_g

0x7880,	// (0x00054a36) list_highlight_pane_cp21_ParamLimits

0xbe31,	// (0x00058fe7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe40,	// (0x00058ff6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x81f3,	// (0x000553a9) list_single_2graphic_im_pane_ParamLimits

0x81f3,	// (0x000553a9) list_single_2graphic_im_pane

0xcc1c,	// (0x00059dd2) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1c,	// (0x00059dd2) list_single_2graphic_im_pane_g1

0xcc2d,	// (0x00059de3) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2d,	// (0x00059de3) list_single_2graphic_im_pane_g2

0xcc39,	// (0x00059def) list_single_2graphic_im_pane_g3_ParamLimits

0xcc39,	// (0x00059def) list_single_2graphic_im_pane_g3

0x0003,

0xfc2e,	// (0x0005cde4) list_single_2graphic_im_pane_g_ParamLimits

0xfc2e,	// (0x0005cde4) list_single_2graphic_im_pane_g

0xcc59,	// (0x00059e0f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc59,	// (0x00059e0f) list_single_2graphic_im_pane_t1

0xc66d,	// (0x00059823) list_single_graphic_2heading_pane_fp_ParamLimits

0xc66d,	// (0x00059823) list_single_graphic_2heading_pane_fp

0x67cc,	// (0x00053982) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67cc,	// (0x00053982) list_single_graphic_2heading_pane_fp_g1

0xc682,	// (0x00059838) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc682,	// (0x00059838) list_single_graphic_2heading_pane_fp_g2

0x8116,	// (0x000552cc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8116,	// (0x000552cc) list_single_graphic_2heading_pane_fp_g3

0x8500,	// (0x000556b6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8500,	// (0x000556b6) list_single_graphic_2heading_pane_fp_g4

0xc68e,	// (0x00059844) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc68e,	// (0x00059844) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005cd0b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005cd0b) list_single_graphic_2heading_pane_fp_g

0x6a70,	// (0x00053c26) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6a70,	// (0x00053c26) list_single_graphic_2heading_pane_fp_t1

0x6804,	// (0x000539ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6804,	// (0x000539ba) list_single_graphic_2heading_pane_fp_t2

0x8353,	// (0x00055509) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8353,	// (0x00055509) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc37,	// (0x0005cded) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc37,	// (0x0005cded) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x00059268) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x00059268) fep_hwr_write_pane_g5

0xc0be,	// (0x00059274) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x00059274) fep_hwr_write_pane_g6

0xc94c,	// (0x00059b02) eswt_shell_pane_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_window_pane_cp18_ParamLimits

0xad32,	// (0x00057ee8) heading_pane_cp70

0xca76,	// (0x00059c2c) popup_eswt_tasktip_window_t1_ParamLimits

0x955c,	// (0x00056712) aid_touch_tab_arrow_left

0x956b,	// (0x00056721) aid_touch_tab_arrow_right

0x77c8,	// (0x0005497e) title_pane_g3_ParamLimits

0x77c8,	// (0x0005497e) title_pane_g3

0x815b,	// (0x00055311) set_value_pane_g1

0x5b5d,	// (0x00052d13) popup_toolbar_trans_pane_ParamLimits

0xcbd0,	// (0x00059d86) aid_size_cell_tb_trans_pane_ParamLimits

0x84f2,	// (0x000556a8) bg_tb_trans_pane_ParamLimits

0xcbe2,	// (0x00059d98) grid_tb_trans_pane_ParamLimits

0x7b09,	// (0x00054cbf) cont_note_pane_ParamLimits

0x7b09,	// (0x00054cbf) cont_note_pane

0x7e7e,	// (0x00055034) cont_snote2_single_text_pane_ParamLimits

0x7e7e,	// (0x00055034) cont_snote2_single_text_pane

0x7e7e,	// (0x00055034) cont_snote2_single_graphic_pane_ParamLimits

0x7e7e,	// (0x00055034) cont_snote2_single_graphic_pane

0xa090,	// (0x00057246) cont_note_wait_pane_ParamLimits

0xa090,	// (0x00057246) cont_note_wait_pane

0xa090,	// (0x00057246) cont_note_image_pane_ParamLimits

0xa090,	// (0x00057246) cont_note_image_pane

0xcc8a,	// (0x00059e40) popup_note2_window_g1_ParamLimits

0xcc8a,	// (0x00059e40) popup_note2_window_g1

0xccbb,	// (0x00059e71) popup_note2_window_t1_ParamLimits

0xccbb,	// (0x00059e71) popup_note2_window_t1

0xcd00,	// (0x00059eb6) popup_note2_window_t2_ParamLimits

0xcd00,	// (0x00059eb6) popup_note2_window_t2

0xcd45,	// (0x00059efb) popup_note2_window_t3_ParamLimits

0xcd45,	// (0x00059efb) popup_note2_window_t3

0xcd8a,	// (0x00059f40) popup_note2_window_t4_ParamLimits

0xcd8a,	// (0x00059f40) popup_note2_window_t4

0x7b8d,	// (0x00054d43) popup_note2_window_t5_ParamLimits

0x7b8d,	// (0x00054d43) popup_note2_window_t5

0x0004,

0xfc43,	// (0x0005cdf9) popup_note2_window_t_ParamLimits

0xfc43,	// (0x0005cdf9) popup_note2_window_t

0xcdb9,	// (0x00059f6f) popup_note2_image_window_g1_ParamLimits

0xcdb9,	// (0x00059f6f) popup_note2_image_window_g1

0xcdc5,	// (0x00059f7b) popup_note2_image_window_g2_ParamLimits

0xcdc5,	// (0x00059f7b) popup_note2_image_window_g2

0x0001,

0xfc4e,	// (0x0005ce04) popup_note2_image_window_g_ParamLimits

0xfc4e,	// (0x0005ce04) popup_note2_image_window_g

0xcdd7,	// (0x00059f8d) popup_note2_image_window_t1_ParamLimits

0xcdd7,	// (0x00059f8d) popup_note2_image_window_t1

0xcdef,	// (0x00059fa5) popup_note2_image_window_t2_ParamLimits

0xcdef,	// (0x00059fa5) popup_note2_image_window_t2

0xce07,	// (0x00059fbd) popup_note2_image_window_t3_ParamLimits

0xce07,	// (0x00059fbd) popup_note2_image_window_t3

0x0002,

0xfc53,	// (0x0005ce09) popup_note2_image_window_t_ParamLimits

0xfc53,	// (0x0005ce09) popup_note2_image_window_t

0xa09e,	// (0x00057254) popup_note2_wait_window_g1_ParamLimits

0xa09e,	// (0x00057254) popup_note2_wait_window_g1

0xce23,	// (0x00059fd9) popup_note2_wait_window_g2_ParamLimits

0xce23,	// (0x00059fd9) popup_note2_wait_window_g2

0xa0b6,	// (0x0005726c) popup_note2_wait_window_g3_ParamLimits

0xa0b6,	// (0x0005726c) popup_note2_wait_window_g3

0x0002,

0xfc5a,	// (0x0005ce10) popup_note2_wait_window_g_ParamLimits

0xfc5a,	// (0x0005ce10) popup_note2_wait_window_g

0xce2f,	// (0x00059fe5) popup_note2_wait_window_t1_ParamLimits

0xce2f,	// (0x00059fe5) popup_note2_wait_window_t1

0xce4d,	// (0x0005a003) popup_note2_wait_window_t2_ParamLimits

0xce4d,	// (0x0005a003) popup_note2_wait_window_t2

0xce6b,	// (0x0005a021) popup_note2_wait_window_t3_ParamLimits

0xce6b,	// (0x0005a021) popup_note2_wait_window_t3

0xce7d,	// (0x0005a033) popup_note2_wait_window_t4_ParamLimits

0xce7d,	// (0x0005a033) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x0005ce17) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x0005ce17) popup_note2_wait_window_t

0xce8f,	// (0x0005a045) wait_bar2_pane_ParamLimits

0xce8f,	// (0x0005a045) wait_bar2_pane

0xcea7,	// (0x0005a05d) popup_snote2_single_text_window_g1_ParamLimits

0xcea7,	// (0x0005a05d) popup_snote2_single_text_window_g1

0xcecf,	// (0x0005a085) popup_snote2_single_text_window_t1_ParamLimits

0xcecf,	// (0x0005a085) popup_snote2_single_text_window_t1

0xcf1b,	// (0x0005a0d1) popup_snote2_single_text_window_t2_ParamLimits

0xcf1b,	// (0x0005a0d1) popup_snote2_single_text_window_t2

0xcf67,	// (0x0005a11d) popup_snote2_single_text_window_t3_ParamLimits

0xcf67,	// (0x0005a11d) popup_snote2_single_text_window_t3

0xcfa8,	// (0x0005a15e) popup_snote2_single_text_window_t4_ParamLimits

0xcfa8,	// (0x0005a15e) popup_snote2_single_text_window_t4

0xcfde,	// (0x0005a194) popup_snote2_single_text_window_t5_ParamLimits

0xcfde,	// (0x0005a194) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x0005ce20) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x0005ce20) popup_snote2_single_text_window_t

0xd009,	// (0x0005a1bf) popup_snote2_single_graphic_window_g1_ParamLimits

0xd009,	// (0x0005a1bf) popup_snote2_single_graphic_window_g1

0xd031,	// (0x0005a1e7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd031,	// (0x0005a1e7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0005ce2b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0005ce2b) popup_snote2_single_graphic_window_g

0xd059,	// (0x0005a20f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd059,	// (0x0005a20f) popup_snote2_single_graphic_window_t1

0xd0a5,	// (0x0005a25b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a5,	// (0x0005a25b) popup_snote2_single_graphic_window_t2

0xcf67,	// (0x0005a11d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf67,	// (0x0005a11d) popup_snote2_single_graphic_window_t3

0xcfa8,	// (0x0005a15e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa8,	// (0x0005a15e) popup_snote2_single_graphic_window_t4

0xcfde,	// (0x0005a194) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfde,	// (0x0005a194) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x0005ce30) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x0005ce30) popup_snote2_single_graphic_window_t

0xbad8,	// (0x00058c8e) clock_nsta_pane_cp2_t1

0xbad8,	// (0x00058c8e) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0005cc44) clock_nsta_pane_cp2_t

0x4e63,	// (0x00052019) form_field_data_wide_pane_g1_ParamLimits

0x8116,	// (0x000552cc) form_field_data_wide_pane_g2_ParamLimits

0x8116,	// (0x000552cc) form_field_data_wide_pane_g2

0x8500,	// (0x000556b6) form_field_data_wide_pane_g3_ParamLimits

0x8500,	// (0x000556b6) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0005c811) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0005c811) form_field_data_wide_pane_g

0xb9b4,	// (0x00058b6a) grid_touch_3_pane_ParamLimits

0xb9b4,	// (0x00058b6a) grid_touch_3_pane

0xd0f1,	// (0x0005a2a7) cell_touch_3_pane_ParamLimits

0xd0f1,	// (0x0005a2a7) cell_touch_3_pane

0xc026,	// (0x000591dc) cell_touch_3_pane_g1

0xc026,	// (0x000591dc) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0005ccc9) cell_touch_3_pane_g

0x7be5,	// (0x00054d9b) cont_query_data_pane

0x7bed,	// (0x00054da3) cont_query_data_pane_cp1

0xd11f,	// (0x0005a2d5) button_value_adjust_pane_cp7

0xd127,	// (0x0005a2dd) query_popup_pane_cp3

0x8c84,	// (0x00055e3a) bg_popup_sub_pane_cp22_ParamLimits

0x5227,	// (0x000523dd) navi_navi_volume_pane_cp2

0x5242,	// (0x000523f8) popup_side_volume_key_window_g2

0x5251,	// (0x00052407) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005c8a7) popup_side_volume_key_window_g

0x526e,	// (0x00052424) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0005c8ae) popup_side_volume_key_window_t

0x8f3e,	// (0x000560f4) popup_side_volume_key_window_ParamLimits

0x4ac1,	// (0x00051c77) list_double_graphic_pane_g4_ParamLimits

0x4ac1,	// (0x00051c77) list_double_graphic_pane_g4

0x8230,	// (0x000553e6) list_single_2heading_msg_pane_ParamLimits

0x8230,	// (0x000553e6) list_single_2heading_msg_pane

0x8373,	// (0x00055529) list_single_2heading_msg_pane_g1_ParamLimits

0x8373,	// (0x00055529) list_single_2heading_msg_pane_g1

0x837f,	// (0x00055535) list_single_2heading_msg_pane_g2_ParamLimits

0x837f,	// (0x00055535) list_single_2heading_msg_pane_g2

0x838b,	// (0x00055541) list_single_2heading_msg_pane_g3_ParamLimits

0x838b,	// (0x00055541) list_single_2heading_msg_pane_g3

0x8397,	// (0x0005554d) list_single_2heading_msg_pane_g4_ParamLimits

0x8397,	// (0x0005554d) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0005ce3b) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0005ce3b) list_single_2heading_msg_pane_g

0x83af,	// (0x00055565) list_single_2heading_msg_pane_t1_ParamLimits

0x83af,	// (0x00055565) list_single_2heading_msg_pane_t1

0x83d7,	// (0x0005558d) list_single_2heading_msg_pane_t2_ParamLimits

0x83d7,	// (0x0005558d) list_single_2heading_msg_pane_t2

0x840b,	// (0x000555c1) list_single_2heading_msg_pane_t3_ParamLimits

0x840b,	// (0x000555c1) list_single_2heading_msg_pane_t3

0x8444,	// (0x000555fa) list_single_2heading_msg_pane_t4_ParamLimits

0x8444,	// (0x000555fa) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x0005ce44) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x0005ce44) list_single_2heading_msg_pane_t

0x77d4,	// (0x0005498a) title_pane_g4_ParamLimits

0x77d4,	// (0x0005498a) title_pane_g4

0x5036,	// (0x000521ec) title_pane_stacon_g3_ParamLimits

0x5036,	// (0x000521ec) title_pane_stacon_g3

0xcc4d,	// (0x00059e03) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4d,	// (0x00059e03) list_single_2graphic_im_pane_g4

0xaaef,	// (0x00057ca5) popup_side_volume_key_window_cp

0xb2ff,	// (0x000584b5) main_idle_act2_pane_t1

0x5c71,	// (0x00052e27) toolbar_button_pane_g10

0x8076,	// (0x0005522c) popup_toolbar_window_cp1

0xbac9,	// (0x00058c7f) clock_nsta_pane_cp_t1

0xbac9,	// (0x00058c7f) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0005cc3f) clock_nsta_pane_cp_t

0x5227,	// (0x000523dd) navi_navi_volume_pane_cp2_ParamLimits

0x5236,	// (0x000523ec) popup_side_volume_key_window_g1_ParamLimits

0x5242,	// (0x000523f8) popup_side_volume_key_window_g2_ParamLimits

0x5251,	// (0x00052407) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005c8a7) popup_side_volume_key_window_g_ParamLimits

0x6511,	// (0x000536c7) fep_hwr_aid_pane

0x65b8,	// (0x0005376e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x00059238) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0005924a) fep_hwr_top_pane_g2_ParamLimits

0x65d8,	// (0x0005378e) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0005cc94) fep_hwr_top_pane_g_ParamLimits

0x65ed,	// (0x000537a3) fep_hwr_top_text_pane_ParamLimits

0xa8b2,	// (0x00057a68) aid_touch_tab_arrow_arrow_2

0xa8bb,	// (0x00057a71) aid_touch_tab_arrow_left_2

0x6525,	// (0x000536db) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x655c,	// (0x00053712) fep_hwr_prediction_pane

0xc1f4,	// (0x000593aa) fep_vkb_prediction_pane

0xc2f8,	// (0x000594ae) fep_vkb_side_pane_g3_ParamLimits

0xc2f8,	// (0x000594ae) fep_vkb_side_pane_g3

0x6768,	// (0x0005391e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6909,	// (0x00053abf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6916,	// (0x00053acc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8d,	// (0x0005cd43) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a86,	// (0x00053c3c) fep_hwr_prediction_pane_g1

0x6a90,	// (0x00053c46) fep_hwr_prediction_pane_g2

0x6a98,	// (0x00053c4e) fep_hwr_prediction_pane_g3

0x6aa0,	// (0x00053c56) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0005ce4d) fep_hwr_prediction_pane_g

0xd14c,	// (0x0005a302) fep_vkb_prediction_pane_g1

0xd156,	// (0x0005a30c) fep_vkb_prediction_pane_g2

0xd15e,	// (0x0005a314) fep_vkb_prediction_pane_g3

0xd166,	// (0x0005a31c) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x0005ce56) fep_vkb_prediction_pane_g

0x6038,	// (0x000531ee) slider_set_pane_g3

0x604c,	// (0x00053202) slider_set_pane_g4

0x6064,	// (0x0005321a) slider_set_pane_g5

0x6038,	// (0x000531ee) slider_set_pane_g6

0x607a,	// (0x00053230) slider_set_pane_g7

0xaf4f,	// (0x00058105) slider_form_pane_g3

0xaf58,	// (0x0005810e) slider_form_pane_g4

0xaf60,	// (0x00058116) slider_form_pane_g5

0xaf4f,	// (0x00058105) slider_form_pane_g6

0xaf68,	// (0x0005811e) slider_form_pane_g7

0xb5aa,	// (0x00058760) slider_set_pane_vc_g3

0xb5b3,	// (0x00058769) slider_set_pane_vc_g4

0xb5bc,	// (0x00058772) slider_set_pane_vc_g5

0xb5aa,	// (0x00058760) slider_set_pane_vc_g6

0xb5c5,	// (0x0005877b) slider_set_pane_vc_g7

0xb787,	// (0x0005893d) slider_form_pane_vc_g1

0xb790,	// (0x00058946) slider_form_pane_vc_g2

0xb799,	// (0x0005894f) slider_form_pane_vc_g3

0xb787,	// (0x0005893d) slider_form_pane_vc_g4

0xb7a2,	// (0x00058958) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0005cc11) slider_form_pane_vc_g

0x46ee,	// (0x000518a4) main_idle_act3_pane

0xd16e,	// (0x0005a324) ai3_links_pane

0xd177,	// (0x0005a32d) popup_ai3_data_window_ParamLimits

0xd177,	// (0x0005a32d) popup_ai3_data_window

0x1993,	// (0x0004eb49) grid_ai3_links_pane

0xd191,	// (0x0005a347) cell_ai3_links_pane_ParamLimits

0xd191,	// (0x0005a347) cell_ai3_links_pane

0xd1a9,	// (0x0005a35f) bg_popup_sub_pane_cp11

0xd1b6,	// (0x0005a36c) cell_ai3_links_pane_g1

0x1993,	// (0x0004eb49) bg_popup_sub_pane_cp12

0xd1db,	// (0x0005a391) heading_ai3_data_pane

0xd1e3,	// (0x0005a399) list_ai3_gene_pane

0xd1ef,	// (0x0005a3a5) popup_ai3_data_window_g1

0xd1f7,	// (0x0005a3ad) heading_ai3_data_pane_g1

0xd1ff,	// (0x0005a3b5) heading_ai3_data_pane_t1

0xd20d,	// (0x0005a3c3) list_double_ai3_gene_pane_ParamLimits

0xd20d,	// (0x0005a3c3) list_double_ai3_gene_pane

0xd21a,	// (0x0005a3d0) list_single_ai3_gene_pane_ParamLimits

0xd21a,	// (0x0005a3d0) list_single_ai3_gene_pane

0xbfeb,	// (0x000591a1) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x000591a1) list_highlight_pane_cp7

0xd227,	// (0x0005a3dd) list_single_a13_gene_pane_t1_ParamLimits

0xd227,	// (0x0005a3dd) list_single_a13_gene_pane_t1

0xd23e,	// (0x0005a3f4) list_single_ai3_gene_pane_g1

0xd247,	// (0x0005a3fd) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x0005ce5f) list_single_ai3_gene_pane_g

0xd24f,	// (0x0005a405) list_double_ai3_gene_pane_g1_ParamLimits

0xd24f,	// (0x0005a405) list_double_ai3_gene_pane_g1

0xd25b,	// (0x0005a411) list_double_ai3_gene_pane_t1_ParamLimits

0xd25b,	// (0x0005a411) list_double_ai3_gene_pane_t1

0xd277,	// (0x0005a42d) list_double_ai3_gene_pane_t2_ParamLimits

0xd277,	// (0x0005a42d) list_double_ai3_gene_pane_t2

0xd28d,	// (0x0005a443) list_double_ai3_gene_pane_t3_ParamLimits

0xd28d,	// (0x0005a443) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x0005ce64) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x0005ce64) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8369,	// (0x0005551f) aid_size_min_col_2

0xd138,	// (0x0005a2ee) aid_size_min_msg_ParamLimits

0xd138,	// (0x0005a2ee) aid_size_min_msg

0xc3f8,	// (0x000595ae) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f8,	// (0x000595ae) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0005ccc4) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0005ccc4) fep_vkb_top_text_pane_g

0x46ee,	// (0x000518a4) main_hc_apps_shell_pane

0xd2aa,	// (0x0005a460) grid_hc_apps_pane_ParamLimits

0xd2aa,	// (0x0005a460) grid_hc_apps_pane

0xd2bc,	// (0x0005a472) list_hc_apps_pane

0xd2c4,	// (0x0005a47a) scroll_pane_cp37_ParamLimits

0xd2c4,	// (0x0005a47a) scroll_pane_cp37

0xd2d0,	// (0x0005a486) cell_hc_apps_pane_ParamLimits

0xd2d0,	// (0x0005a486) cell_hc_apps_pane

0xd37e,	// (0x0005a534) cell_hc_apps_pane_g1_ParamLimits

0xd37e,	// (0x0005a534) cell_hc_apps_pane_g1

0xd3ae,	// (0x0005a564) cell_hc_apps_pane_g2_ParamLimits

0xd3ae,	// (0x0005a564) cell_hc_apps_pane_g2

0xd3ca,	// (0x0005a580) cell_hc_apps_pane_g3_ParamLimits

0xd3ca,	// (0x0005a580) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0005ce6b) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0005ce6b) cell_hc_apps_pane_g

0xd3ec,	// (0x0005a5a2) cell_hc_apps_pane_t1_ParamLimits

0xd3ec,	// (0x0005a5a2) cell_hc_apps_pane_t1

0x7b09,	// (0x00054cbf) grid_highlight_pane_cp10_ParamLimits

0x7b09,	// (0x00054cbf) grid_highlight_pane_cp10

0xd42c,	// (0x0005a5e2) list_single_hc_apps_pane_ParamLimits

0xd42c,	// (0x0005a5e2) list_single_hc_apps_pane

0xd488,	// (0x0005a63e) list_single_hc_apps_pane_g1

0x8469,	// (0x0005561f) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x0005ce72) list_single_hc_apps_pane_g

0x8482,	// (0x00055638) list_single_hc_apps_pane_g2_copy1

0x849e,	// (0x00055654) list_single_hc_apps_pane_t1

0x7880,	// (0x00054a36) bg_set_opt_pane_cp_ParamLimits

0x494f,	// (0x00051b05) setting_slider_pane_t1_ParamLimits

0x4968,	// (0x00051b1e) setting_slider_pane_t2_ParamLimits

0x4982,	// (0x00051b38) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005c6ef) setting_slider_pane_t_ParamLimits

0x499a,	// (0x00051b50) slider_set_pane_ParamLimits

0x553e,	// (0x000526f4) control_pane_g5_ParamLimits

0x553e,	// (0x000526f4) control_pane_g5

0xad9e,	// (0x00057f54) slider_set_pane_g1_ParamLimits

0x602c,	// (0x000531e2) slider_set_pane_g2_ParamLimits

0x6038,	// (0x000531ee) slider_set_pane_g3_ParamLimits

0x604c,	// (0x00053202) slider_set_pane_g4_ParamLimits

0x6064,	// (0x0005321a) slider_set_pane_g5_ParamLimits

0x6038,	// (0x000531ee) slider_set_pane_g6_ParamLimits

0x607a,	// (0x00053230) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0005caf5) slider_set_pane_g_ParamLimits

0x902a,	// (0x000561e0) navi_icon_text_pane_ParamLimits

0x951d,	// (0x000566d3) aid_fill_nsta_2_ParamLimits

0x955c,	// (0x00056712) aid_touch_tab_arrow_left_ParamLimits

0x956b,	// (0x00056721) aid_touch_tab_arrow_right_ParamLimits

0x95d8,	// (0x0005678e) clock_nsta_pane_ParamLimits

0xa894,	// (0x00057a4a) navi_icon_pane_g1_ParamLimits

0xa8a0,	// (0x00057a56) navi_text_pane_t1_ParamLimits

0xbbd5,	// (0x00058d8b) navi_icon_text_pane_g1_ParamLimits

0xbbe1,	// (0x00058d97) navi_icon_text_pane_t1_ParamLimits

0xd488,	// (0x0005a63e) list_single_hc_apps_pane_g1_ParamLimits

0x8469,	// (0x0005561f) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x0005ce72) list_single_hc_apps_pane_g_ParamLimits

0x8482,	// (0x00055638) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x849e,	// (0x00055654) list_single_hc_apps_pane_t1_ParamLimits

0x4859,	// (0x00051a0f) popup_toolbar2_fixed_window_ParamLimits

0x4859,	// (0x00051a0f) popup_toolbar2_fixed_window

0x5b53,	// (0x00052d09) popup_toolbar2_float_window

0x1993,	// (0x0004eb49) bg_popup_sub_pane_cp27

0xd4a1,	// (0x0005a657) grid_toolbar2_float_pane

0x1993,	// (0x0004eb49) bg_popup_sub_pane_cp26

0xd4a1,	// (0x0005a657) grid_toolbar2_fixed_pane

0xd4a9,	// (0x0005a65f) cell_toolbar2_fixed_pane_ParamLimits

0xd4a9,	// (0x0005a65f) cell_toolbar2_fixed_pane

0xd4b9,	// (0x0005a66f) cell_toolbar2_fixed_pane_g1

0xd4c2,	// (0x0005a678) toolbar2_fixed_button_pane

0x99f5,	// (0x00056bab) toolbar2_fixed_button_pane_g1

0x9a05,	// (0x00056bbb) toolbar2_fixed_button_pane_g2

0x99fd,	// (0x00056bb3) toolbar2_fixed_button_pane_g3

0x9a15,	// (0x00056bcb) toolbar2_fixed_button_pane_g4

0x9a0d,	// (0x00056bc3) toolbar2_fixed_button_pane_g5

0x9a1d,	// (0x00056bd3) toolbar2_fixed_button_pane_g6

0x9a25,	// (0x00056bdb) toolbar2_fixed_button_pane_g7

0x9a35,	// (0x00056beb) toolbar2_fixed_button_pane_g8

0x9a2d,	// (0x00056be3) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005c9f7) toolbar2_fixed_button_pane_g

0xd4ca,	// (0x0005a680) cell_toolbar2_float_pane_ParamLimits

0xd4ca,	// (0x0005a680) cell_toolbar2_float_pane

0xd4db,	// (0x0005a691) cell_toolbar2_float_pane_g1

0xd4c2,	// (0x0005a678) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0005930a) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0005930a) fep_vkb_accented_list_pane

0x6748,	// (0x000538fe) bg_popup_fep_shadow_pane_g9

0x91a7,	// (0x0005635d) bg_popup_fep_shadow_pane_cp3

0x864d,	// (0x00055803) list_accented_list_pane

0xd4e4,	// (0x0005a69a) list_single_accented_list_pane_ParamLimits

0xd4e4,	// (0x0005a69a) list_single_accented_list_pane

0x91a7,	// (0x0005635d) list_highlight_pane_cp10

0xd4f5,	// (0x0005a6ab) list_single_accented_list_pane_t1

0x5aa3,	// (0x00052c59) popup_slider_window_ParamLimits

0x5aa3,	// (0x00052c59) popup_slider_window

0xd12f,	// (0x0005a2e5) aid_indentation_list_msg

0xd5b9,	// (0x0005a76f) bg_popup_window_pane_cp19

0xd621,	// (0x0005a7d7) popup_slider_window_g1

0xd63d,	// (0x0005a7f3) popup_slider_window_g2

0xd659,	// (0x0005a80f) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x0005ce77) popup_slider_window_g

0xd6bf,	// (0x0005a875) popup_slider_window_t1

0xd733,	// (0x0005a8e9) small_volume_slider_vertical_pane

0xc026,	// (0x000591dc) small_volume_slider_vertical_pane_g1

0xc026,	// (0x000591dc) small_volume_slider_vertical_pane_g2

0xd74f,	// (0x0005a905) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0005ce89) small_volume_slider_vertical_pane_g

0x4611,	// (0x000517c7) area_side_right_pane_ParamLimits

0x4611,	// (0x000517c7) area_side_right_pane

0x6aa8,	// (0x00053c5e) aid_size_side_button_ParamLimits

0x6aa8,	// (0x00053c5e) aid_size_side_button

0x6abc,	// (0x00053c72) grid_sctrl_middle_pane_ParamLimits

0x6abc,	// (0x00053c72) grid_sctrl_middle_pane

0x6adb,	// (0x00053c91) sctrl_sk_bottom_pane

0x6aec,	// (0x00053ca2) sctrl_sk_top_pane

0x6afe,	// (0x00053cb4) aid_touch_sctrl_top

0x6b0b,	// (0x00053cc1) bg_sctrl_sk_pane_ParamLimits

0x6b0b,	// (0x00053cc1) bg_sctrl_sk_pane

0x6b19,	// (0x00053ccf) sctrl_sk_top_pane_g1

0x6b26,	// (0x00053cdc) sctrl_sk_top_pane_t1

0x6afe,	// (0x00053cb4) aid_touch_sctrl_bottom

0x6b0b,	// (0x00053cc1) bg_sctrl_sk_pane_cp_ParamLimits

0x6b0b,	// (0x00053cc1) bg_sctrl_sk_pane_cp

0x6b41,	// (0x00053cf7) sctrl_sk_bottom_pane_g1

0x6b26,	// (0x00053cdc) sctrl_sk_bottom_pane_t1

0x6b4a,	// (0x00053d00) cell_sctrl_middle_pane_ParamLimits

0x6b4a,	// (0x00053d00) cell_sctrl_middle_pane

0x6b65,	// (0x00053d1b) aid_touch_sctrl_middle_ParamLimits

0x6b65,	// (0x00053d1b) aid_touch_sctrl_middle

0x6b77,	// (0x00053d2d) bg_sctrl_middle_pane_ParamLimits

0x6b77,	// (0x00053d2d) bg_sctrl_middle_pane

0x6768,	// (0x0005391e) cell_sctrl_middle_pane_g1_ParamLimits

0x6768,	// (0x0005391e) cell_sctrl_middle_pane_g1

0x6b85,	// (0x00053d3b) cell_sctrl_middle_pane_g2_ParamLimits

0x6b85,	// (0x00053d3b) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0005ce95) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0005ce95) cell_sctrl_middle_pane_g

0x99f5,	// (0x00056bab) bg_sctrl_middle_pane_g1

0x99fd,	// (0x00056bb3) bg_sctrl_middle_pane_g2

0x9a05,	// (0x00056bbb) bg_sctrl_middle_pane_g3

0x9a0d,	// (0x00056bc3) bg_sctrl_middle_pane_g4

0x9a15,	// (0x00056bcb) bg_sctrl_middle_pane_g5

0x9a1d,	// (0x00056bd3) bg_sctrl_middle_pane_g6

0x9a25,	// (0x00056bdb) bg_sctrl_middle_pane_g7

0x9a2d,	// (0x00056be3) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0005ce9a) bg_sctrl_middle_pane_g

0x9a35,	// (0x00056beb) bg_sctrl_middle_pane_g8_copy1

0x99f5,	// (0x00056bab) bg_sctrl_sk_pane_g1

0x9a05,	// (0x00056bbb) bg_sctrl_sk_pane_g2

0x99fd,	// (0x00056bb3) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005c9f7) bg_sctrl_sk_pane_g

0x803c,	// (0x000551f2) aid_size_touch_scroll_bar

0x9a15,	// (0x00056bcb) bg_sctrl_sk_pane_g4

0x9a0d,	// (0x00056bc3) bg_sctrl_sk_pane_g5

0x9a1d,	// (0x00056bd3) bg_sctrl_sk_pane_g6

0x9a25,	// (0x00056bdb) bg_sctrl_sk_pane_g7

0x9a35,	// (0x00056beb) bg_sctrl_sk_pane_g8

0x9a2d,	// (0x00056be3) bg_sctrl_sk_pane_g9

0x570a,	// (0x000528c0) popup_fep_china_hwr2_fs_candidate_window

0x5714,	// (0x000528ca) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5714,	// (0x000528ca) popup_fep_china_hwr2_fs_control_window

0x6768,	// (0x0005391e) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0005ce90) sctrl_sk_top_pane_g

0xd758,	// (0x0005a90e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd758,	// (0x0005a90e) aid_fep_china_hwr2_fs_cell

0xd76a,	// (0x0005a920) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76a,	// (0x0005a920) bg_popup_fep_shadow_pane_cp4

0xd781,	// (0x0005a937) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd781,	// (0x0005a937) bg_popup_fep_shadow_pane_cp5

0xd793,	// (0x0005a949) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd793,	// (0x0005a949) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a3,	// (0x0005a959) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ab,	// (0x0005a961) aid_fep_china_hwr2_fs_candi_cell

0x1993,	// (0x0004eb49) bg_popup_fep_shadow_pane_cp6

0xd7b5,	// (0x0005a96b) popup_fep_china_hwr2_fs_candidate_grid

0xd7bf,	// (0x0005a975) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bf,	// (0x0005a975) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x000591dc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d7,	// (0x0005a98d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d7,	// (0x0005a98d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e5,	// (0x0005a99b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e5,	// (0x0005a99b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x0005ceab) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x0005ceab) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7fb,	// (0x0005a9b1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7fb,	// (0x0005a9b1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd810,	// (0x0005a9c6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd810,	// (0x0005a9c6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x0005ceb0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x0005ceb0) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82c,	// (0x0005a9e2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd834,	// (0x0005a9ea) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83c,	// (0x0005a9f2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x0005ceb5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd844,	// (0x0005a9fa) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd844,	// (0x0005a9fa) cell_fep_china_hwr2_fs_candidate_grid

0xd85d,	// (0x0005aa13) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd865,	// (0x0005aa1b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x000591dc) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x000591dc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0005ccc9) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86d,	// (0x0005aa23) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95eb,	// (0x000567a1) clock_nsta_pane_cp_24_ParamLimits

0x95eb,	// (0x000567a1) clock_nsta_pane_cp_24

0x9669,	// (0x0005681f) indicator_nsta_pane_cp_24_ParamLimits

0x9669,	// (0x0005681f) indicator_nsta_pane_cp_24

0xa710,	// (0x000578c6) heading_pane_g1

0x0001,

0xf8a6,	// (0x0005ca5c) heading_pane_g

0xb148,	// (0x000582fe) grid_sct_catagory_button_pane

0xb178,	// (0x0005832e) scroll_pane_cp5_ParamLimits

0xbc23,	// (0x00058dd9) button_value_adjust_pane_cp5_ParamLimits

0xbc23,	// (0x00058dd9) button_value_adjust_pane_cp5

0xbd02,	// (0x00058eb8) form2_midp_time_pane_ParamLimits

0xd87b,	// (0x0005aa31) cell_sct_catagory_button_pane_ParamLimits

0xd87b,	// (0x0005aa31) cell_sct_catagory_button_pane

0xbfeb,	// (0x000591a1) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x000591a1) bg_button_pane_cp01

0xc026,	// (0x000591dc) cell_sct_catagory_button_pane_g1

0x5ae2,	// (0x00052c98) popup_tb_extension_window

0xd88d,	// (0x0005aa43) aid_size_cell_ext_ParamLimits

0xd88d,	// (0x0005aa43) aid_size_cell_ext

0x7b09,	// (0x00054cbf) bg_tb_trans_pane_cp1_ParamLimits

0x7b09,	// (0x00054cbf) bg_tb_trans_pane_cp1

0xd8ad,	// (0x0005aa63) grid_tb_ext_pane_ParamLimits

0xd8ad,	// (0x0005aa63) grid_tb_ext_pane

0xd8db,	// (0x0005aa91) cell_tb_ext_pane_ParamLimits

0xd8db,	// (0x0005aa91) cell_tb_ext_pane

0xd8f2,	// (0x0005aaa8) cell_tb_ext_pane_g1_ParamLimits

0xd8f2,	// (0x0005aaa8) cell_tb_ext_pane_g1

0xd90f,	// (0x0005aac5) cell_tb_ext_pane_t1

0x7b09,	// (0x00054cbf) list_highlight_pane_cp11_ParamLimits

0x7b09,	// (0x00054cbf) list_highlight_pane_cp11

0x4878,	// (0x00051a2e) popup_uni_indicator_window_ParamLimits

0x4878,	// (0x00051a2e) popup_uni_indicator_window

0x84f2,	// (0x000556a8) bg_popup_sub_pane_cp14

0xd92a,	// (0x0005aae0) list_uniindi_pane

0xd936,	// (0x0005aaec) uniindi_top_pane

0x7b09,	// (0x00054cbf) bg_uniindi_top_pane

0xd955,	// (0x0005ab0b) uniindi_top_pane_g1

0xd96b,	// (0x0005ab21) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x0005cebc) uniindi_top_pane_g

0xd995,	// (0x0005ab4b) uniindi_top_pane_t1

0xd9bf,	// (0x0005ab75) list_single_uniindi_pane_ParamLimits

0xd9bf,	// (0x0005ab75) list_single_uniindi_pane

0xc026,	// (0x000591dc) bg_uniindi_top_pane_g1

0xd9d2,	// (0x0005ab88) list_single_uniindi_pane_g1

0xd9e5,	// (0x0005ab9b) list_single_uniindi_pane_t1

0x46ee,	// (0x000518a4) control_bg_pane

0xda0a,	// (0x0005abc0) bg_sctrl_sk_pane_cp1

0xda13,	// (0x0005abc9) bg_sctrl_sk_pane_cp2

0xda1c,	// (0x0005abd2) control_bg_pane_g1

0xda25,	// (0x0005abdb) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x0005cec5) control_bg_pane_g

0xba6d,	// (0x00058c23) cell_indicator_nsta_pane_g1_ParamLimits

0xba7b,	// (0x00058c31) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0005cc2d) cell_indicator_nsta_pane_g_ParamLimits

0x64f0,	// (0x000536a6) form2_midp_time_pane_t1_ParamLimits

0x566a,	// (0x00052820) main_idle_act4_pane_ParamLimits

0x566a,	// (0x00052820) main_idle_act4_pane

0x5ae2,	// (0x00052c98) popup_tb_extension_window_ParamLimits

0xd8cb,	// (0x0005aa81) tb_ext_find_pane_ParamLimits

0xd8cb,	// (0x0005aa81) tb_ext_find_pane

0xda2e,	// (0x0005abe4) ai_gene_pane_1_cp1

0x92ee,	// (0x000564a4) ai_gene_pane_2_cp1

0xda36,	// (0x0005abec) list_single_idle_plugin_calendar_pane

0xda3f,	// (0x0005abf5) list_single_idle_plugin_notification_pane

0xda48,	// (0x0005abfe) list_single_idle_plugin_player_pane

0xda51,	// (0x0005ac07) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda51,	// (0x0005ac07) list_single_idle_plugin_shortcut_pane

0xda73,	// (0x0005ac29) main_idle_act4_pane_t1

0xda85,	// (0x0005ac3b) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x0005ceca) main_idle_act4_pane_t

0xda97,	// (0x0005ac4d) middle_sk_idle_act4_pane_ParamLimits

0xda97,	// (0x0005ac4d) middle_sk_idle_act4_pane

0xdaad,	// (0x0005ac63) popup_clock_digital_analogue_window_cp2

0xdac7,	// (0x0005ac7d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac7,	// (0x0005ac7d) shortcut_wheel_idle_act4_pane

0xc026,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g5

0xdadb,	// (0x0005ac91) shortcut_wheel_idle_act4_pane_g6

0xdae3,	// (0x0005ac99) shortcut_wheel_idle_act4_pane_g7

0xdaeb,	// (0x0005aca1) shortcut_wheel_idle_act4_pane_g8

0xdaf3,	// (0x0005aca9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0005cecf) shortcut_wheel_idle_act4_pane_g

0xc2a4,	// (0x0005945a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a4,	// (0x0005945a) middle_sk_idle_act4_pane_g1

0xdb57,	// (0x0005ad0d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb57,	// (0x0005ad0d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x0005cef2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x0005cef2) middle_sk_idle_act4_pane_g

0xdb63,	// (0x0005ad19) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb63,	// (0x0005ad19) middle_sk_idle_act4_pane_t1

0xdb80,	// (0x0005ad36) grid_ai_shortcut_pane_ParamLimits

0xdb80,	// (0x0005ad36) grid_ai_shortcut_pane

0xdb99,	// (0x0005ad4f) list_highlight_pane_cp16_ParamLimits

0xdb99,	// (0x0005ad4f) list_highlight_pane_cp16

0xdba6,	// (0x0005ad5c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba6,	// (0x0005ad5c) list_single_idle_plugin_shortcut_pane_g1

0xdbb2,	// (0x0005ad68) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb2,	// (0x0005ad68) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0005ad80) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0005ad80) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x0005cef7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x0005cef7) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0005ad93) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0005ad93) cell_ai_shortcut_pane

0xdc01,	// (0x0005adb7) cell_ai_shortcut_pane_g1_ParamLimits

0xdc01,	// (0x0005adb7) cell_ai_shortcut_pane_g1

0xda2e,	// (0x0005abe4) ai_gene_pane_1_cp2

0xdc23,	// (0x0005add9) ai_gene_pane_2_cp2

0xdc2b,	// (0x0005ade1) list_highlight_pane_cp15

0xdc34,	// (0x0005adea) list_single_idle_plugin_calendar_pane_g1

0xdc2b,	// (0x0005ade1) list_highlight_pane_cp17

0xdc3c,	// (0x0005adf2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc44,	// (0x0005adfa) list_single_idle_plugin_player_pane_g1

0xb3a1,	// (0x00058557) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0005cefe) list_single_idle_plugin_player_pane_g

0xdc4c,	// (0x0005ae02) list_single_idle_plugin_player_pane_t1

0xdc5a,	// (0x0005ae10) list_single_idle_plugin_player_pane_t2

0xdc68,	// (0x0005ae1e) list_single_idle_plugin_player_pane_t3

0xdc76,	// (0x0005ae2c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x0005cf03) list_single_idle_plugin_player_pane_t

0xdc84,	// (0x0005ae3a) wait_bar_pane_cp15

0xdc8c,	// (0x0005ae42) grid_ai_notification_pane

0xb3a1,	// (0x00058557) list_single_idle_plugin_notification_pane_g1

0xdc95,	// (0x0005ae4b) cell_ai_notification_pane_ParamLimits

0xdc95,	// (0x0005ae4b) cell_ai_notification_pane

0xdca2,	// (0x0005ae58) cell_ai_notification_pane_g1

0xdcaa,	// (0x0005ae60) cell_ai_notification_pane_t1

0xdcb8,	// (0x0005ae6e) tb_ext_find_button_pane

0xdcc0,	// (0x0005ae76) tb_ext_find_pane_g1

0xdcc8,	// (0x0005ae7e) tb_ext_find_pane_t1

0x8b7b,	// (0x00055d31) tb_ext_find_button_pane_g1

0xdcd6,	// (0x0005ae8c) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0005cf0c) tb_ext_find_button_pane_g

0xda73,	// (0x0005ac29) main_idle_act4_pane_t1_ParamLimits

0xda85,	// (0x0005ac3b) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x0005ceca) main_idle_act4_pane_t_ParamLimits

0xdaad,	// (0x0005ac63) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdabb,	// (0x0005ac71) sat_plugin_idle_act4_pane_ParamLimits

0xdabb,	// (0x0005ac71) sat_plugin_idle_act4_pane

0xdcdf,	// (0x0005ae95) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcdf,	// (0x0005ae95) sat_plugin_idle_act4_pane_t1

0xdcf2,	// (0x0005aea8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf2,	// (0x0005aea8) sat_plugin_idle_act4_pane_t2

0xdd05,	// (0x0005aebb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd05,	// (0x0005aebb) sat_plugin_idle_act4_pane_t3

0xdd18,	// (0x0005aece) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd18,	// (0x0005aece) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x0005cf11) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x0005cf11) sat_plugin_idle_act4_pane_t

0x47b3,	// (0x00051969) popup_battery_window_ParamLimits

0x47b3,	// (0x00051969) popup_battery_window

0x7b09,	// (0x00054cbf) bg_popup_sub_pane_cp25_ParamLimits

0x7b09,	// (0x00054cbf) bg_popup_sub_pane_cp25

0xdd2b,	// (0x0005aee1) popup_battery_window_g1_ParamLimits

0xdd2b,	// (0x0005aee1) popup_battery_window_g1

0xdd37,	// (0x0005aeed) popup_battery_window_t1_ParamLimits

0xdd37,	// (0x0005aeed) popup_battery_window_t1

0xdd49,	// (0x0005aeff) popup_battery_window_t2_ParamLimits

0xdd49,	// (0x0005aeff) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0005cf1a) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0005cf1a) popup_battery_window_t

0x91bb,	// (0x00056371) midp_canvas_pane_ParamLimits

0x9232,	// (0x000563e8) midp_keypad_pane_ParamLimits

0x9232,	// (0x000563e8) midp_keypad_pane

0x94cb,	// (0x00056681) main_midp_pane_ParamLimits

0xbae7,	// (0x00058c9d) signal_pane_g2_cp_ParamLimits

0xdd66,	// (0x0005af1c) aid_size_cell_midp_keypad_ParamLimits

0xdd66,	// (0x0005af1c) aid_size_cell_midp_keypad

0xdd80,	// (0x0005af36) midp_keyp_game_grid_pane_ParamLimits

0xdd80,	// (0x0005af36) midp_keyp_game_grid_pane

0xdda0,	// (0x0005af56) midp_keyp_rocker_pane_ParamLimits

0xdda0,	// (0x0005af56) midp_keyp_rocker_pane

0xddd9,	// (0x0005af8f) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x0005af8f) midp_keyp_sk_left_pane

0xde33,	// (0x0005afe9) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x0005afe9) midp_keyp_sk_right_pane

0x1993,	// (0x0004eb49) bg_button_pane_cp03

0xde8d,	// (0x0005b043) midp_keyp_sk_left_pane_g1

0x1993,	// (0x0004eb49) bg_button_pane_cp04

0xde8d,	// (0x0005b043) midp_keyp_sk_right_pane_g1

0xc026,	// (0x000591dc) midp_keyp_rocker_pane_g1

0xde96,	// (0x0005b04c) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x0005b04c) keyp_game_cell_pane

0x1993,	// (0x0004eb49) bg_button_pane_cp02

0xdea9,	// (0x0005b05f) keyp_game_cell_pane_g1

0x47f7,	// (0x000519ad) popup_fep_vkb2_window_ParamLimits

0x47f7,	// (0x000519ad) popup_fep_vkb2_window

0x6ba3,	// (0x00053d59) aid_size_cell_vkb2_ParamLimits

0x6ba3,	// (0x00053d59) aid_size_cell_vkb2

0x6bef,	// (0x00053da5) popup_fep_vkb2_window_g1_ParamLimits

0x6bef,	// (0x00053da5) popup_fep_vkb2_window_g1

0x6c37,	// (0x00053ded) vkb2_area_bottom_pane_ParamLimits

0x6c37,	// (0x00053ded) vkb2_area_bottom_pane

0x6c83,	// (0x00053e39) vkb2_area_keypad_pane_ParamLimits

0x6c83,	// (0x00053e39) vkb2_area_keypad_pane

0x6cc5,	// (0x00053e7b) vkb2_area_top_pane_ParamLimits

0x6cc5,	// (0x00053e7b) vkb2_area_top_pane

0x6d44,	// (0x00053efa) vkb2_top_entry_pane_ParamLimits

0x6d44,	// (0x00053efa) vkb2_top_entry_pane

0x6d6e,	// (0x00053f24) vkb2_top_grid_left_pane_ParamLimits

0x6d6e,	// (0x00053f24) vkb2_top_grid_left_pane

0x6d8d,	// (0x00053f43) vkb2_top_grid_right_pane_ParamLimits

0x6d8d,	// (0x00053f43) vkb2_top_grid_right_pane

0x6dac,	// (0x00053f62) vkb2_cell_keypad_pane_ParamLimits

0x6dac,	// (0x00053f62) vkb2_cell_keypad_pane

0x6e7d,	// (0x00054033) vkb2_area_bottom_grid_pane_ParamLimits

0x6e7d,	// (0x00054033) vkb2_area_bottom_grid_pane

0x6ea3,	// (0x00054059) vkb2_area_bottom_pane_g1_ParamLimits

0x6ea3,	// (0x00054059) vkb2_area_bottom_pane_g1

0x6ec7,	// (0x0005407d) vkb2_area_bottom_pane_g2_ParamLimits

0x6ec7,	// (0x0005407d) vkb2_area_bottom_pane_g2

0x6ef5,	// (0x000540ab) vkb2_area_bottom_pane_g3_ParamLimits

0x6ef5,	// (0x000540ab) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x0005cf1f) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x0005cf1f) vkb2_area_bottom_pane_g

0x6f56,	// (0x0005410c) vkb2_top_cell_left_pane_ParamLimits

0x6f56,	// (0x0005410c) vkb2_top_cell_left_pane

0xdeba,	// (0x0005b070) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x0005b070) vkb2_top_entry_pane_g1

0xdec8,	// (0x0005b07e) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x0005b07e) vkb2_top_entry_pane_t1

0xdefa,	// (0x0005b0b0) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x0005b0b0) vkb2_top_entry_pane_t2

0xdf2c,	// (0x0005b0e2) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x0005b0e2) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x0005cf26) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x0005cf26) vkb2_top_entry_pane_t

0x6fa3,	// (0x00054159) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fa3,	// (0x00054159) vkb2_top_grid_right_pane_g1

0x6fb9,	// (0x0005416f) vkb2_top_grid_right_pane_g2_ParamLimits

0x6fb9,	// (0x0005416f) vkb2_top_grid_right_pane_g2

0x6fd1,	// (0x00054187) vkb2_top_grid_right_pane_g3_ParamLimits

0x6fd1,	// (0x00054187) vkb2_top_grid_right_pane_g3

0x6fe9,	// (0x0005419f) vkb2_top_grid_right_pane_g4_ParamLimits

0x6fe9,	// (0x0005419f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0005cf2d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0005cf2d) vkb2_top_grid_right_pane_g

0x6fff,	// (0x000541b5) vkb2_top_cell_left_pane_g1

0x7016,	// (0x000541cc) vkb2_cell_keypad_pane_g1_ParamLimits

0x7016,	// (0x000541cc) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x0005b106) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x0005b106) vkb2_cell_keypad_pane_t1

0x7024,	// (0x000541da) vkb2_cell_bottom_grid_pane_ParamLimits

0x7024,	// (0x000541da) vkb2_cell_bottom_grid_pane

0x705d,	// (0x00054213) vkb2_cell_bottom_grid_pane_g1

0xdafb,	// (0x0005acb1) aid_call2_pane_cp02

0xdb03,	// (0x0005acb9) aid_call_pane_cp02

0xdb0b,	// (0x0005acc1) clock_digital_number_pane_cp10

0xdb13,	// (0x0005acc9) clock_digital_number_pane_cp11

0xdb1b,	// (0x0005acd1) clock_digital_number_pane_cp12

0xdb23,	// (0x0005acd9) clock_digital_number_pane_cp13

0xdb2b,	// (0x0005ace1) clock_digital_separator_pane_cp10

0x8b7b,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g1

0x8b7b,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g2

0xdb33,	// (0x0005ace9) popup_clock_digital_analogue_window_cp2_g3

0x8b7b,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g4

0xdb33,	// (0x0005ace9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0005cee2) popup_clock_digital_analogue_window_cp2_g

0xdb3b,	// (0x0005acf1) popup_clock_digital_analogue_window_cp2_t1

0xdb49,	// (0x0005acff) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0005ceed) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x000591dc) clock_digital_number_pane_cp10_g1

0xc026,	// (0x000591dc) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005ccc9) clock_digital_number_pane_cp10_g

0xc026,	// (0x000591dc) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x000591dc) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005ccc9) clock_digital_separator_pane_cp10_g

0xd977,	// (0x0005ab2d) uniindi_top_pane_g3

0xd988,	// (0x0005ab3e) uniindi_top_pane_g4

0x6e37,	// (0x00053fed) vkb2_row_keypad_pane_ParamLimits

0x6e37,	// (0x00053fed) vkb2_row_keypad_pane

0x707d,	// (0x00054233) vkb2_cell_t_keypad_pane_ParamLimits

0x707d,	// (0x00054233) vkb2_cell_t_keypad_pane

0x708d,	// (0x00054243) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x708d,	// (0x00054243) vkb2_cell_t_keypad_pane_cp08

0x70a0,	// (0x00054256) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70a0,	// (0x00054256) vkb2_cell_t_keypad_pane_cp09

0x70b4,	// (0x0005426a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70b4,	// (0x0005426a) vkb2_cell_t_keypad_pane_cp01

0x70c5,	// (0x0005427b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70c5,	// (0x0005427b) vkb2_cell_t_keypad_pane_cp02

0x70d6,	// (0x0005428c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70d6,	// (0x0005428c) vkb2_cell_t_keypad_pane_cp03

0x70e7,	// (0x0005429d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70e7,	// (0x0005429d) vkb2_cell_t_keypad_pane_cp04

0x70f8,	// (0x000542ae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70f8,	// (0x000542ae) vkb2_cell_t_keypad_pane_cp05

0x7109,	// (0x000542bf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7109,	// (0x000542bf) vkb2_cell_t_keypad_pane_cp06

0x711a,	// (0x000542d0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x711a,	// (0x000542d0) vkb2_cell_t_keypad_pane_cp07

0x712b,	// (0x000542e1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x712b,	// (0x000542e1) vkb2_cell_t_keypad_pane_cp10

0x6768,	// (0x0005391e) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x0005b11d) vkb2_cell_t_keypad_pane_t1

0x46ee,	// (0x000518a4) popup_grid_graphic2_window

0xdf79,	// (0x0005b12f) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x0005b12f) aid_size_cell_graphic2

0xdfb1,	// (0x0005b167) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x0005b167) bg_popup_window_pane_cp21

0xdfbf,	// (0x0005b175) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x0005b175) graphic2_pages_pane

0xe005,	// (0x0005b1bb) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x0005b1bb) grid_graphic2_control_pane

0xe043,	// (0x0005b1f9) grid_graphic2_pane_ParamLimits

0xe043,	// (0x0005b1f9) grid_graphic2_pane

0xe0b7,	// (0x0005b26d) cell_graphic2_pane

0x46ee,	// (0x000518a4) main_comp_mode_pane

0xd1e3,	// (0x0005a399) list_ai3_gene_pane_ParamLimits

0xd5b9,	// (0x0005a76f) bg_popup_window_pane_cp19_ParamLimits

0xd5c5,	// (0x0005a77b) bg_touch_area_indi_pane_ParamLimits

0xd5c5,	// (0x0005a77b) bg_touch_area_indi_pane

0xd5db,	// (0x0005a791) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5db,	// (0x0005a791) bg_touch_area_indi_pane_cp01

0xd5f1,	// (0x0005a7a7) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f1,	// (0x0005a7a7) bg_touch_area_indi_pane_cp02

0xd607,	// (0x0005a7bd) bg_touch_area_indi_pane_cp03_ParamLimits

0xd607,	// (0x0005a7bd) bg_touch_area_indi_pane_cp03

0xd621,	// (0x0005a7d7) popup_slider_window_g1_ParamLimits

0xd63d,	// (0x0005a7f3) popup_slider_window_g2_ParamLimits

0xd659,	// (0x0005a80f) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x0005ce77) popup_slider_window_g_ParamLimits

0xd6bf,	// (0x0005a875) popup_slider_window_t1_ParamLimits

0xd733,	// (0x0005a8e9) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x0005b26d) cell_graphic2_pane_ParamLimits

0xe106,	// (0x0005b2bc) bg_button_pane_cp10_ParamLimits

0xe106,	// (0x0005b2bc) bg_button_pane_cp10

0xe119,	// (0x0005b2cf) bg_button_pane_cp11_ParamLimits

0xe119,	// (0x0005b2cf) bg_button_pane_cp11

0xe12c,	// (0x0005b2e2) graphic2_pages_pane_g1_ParamLimits

0xe12c,	// (0x0005b2e2) graphic2_pages_pane_g1

0xe147,	// (0x0005b2fd) graphic2_pages_pane_g2_ParamLimits

0xe147,	// (0x0005b2fd) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0005cf3b) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0005cf3b) graphic2_pages_pane_g

0xe15f,	// (0x0005b315) graphic2_pages_pane_t1_ParamLimits

0xe15f,	// (0x0005b315) graphic2_pages_pane_t1

0xe177,	// (0x0005b32d) cell_graphic2_control_pane_ParamLimits

0xe177,	// (0x0005b32d) cell_graphic2_control_pane

0xe195,	// (0x0005b34b) cell_graphic2_pane_g1_ParamLimits

0xe195,	// (0x0005b34b) cell_graphic2_pane_g1

0xe1a2,	// (0x0005b358) cell_graphic2_pane_g2_ParamLimits

0xe1a2,	// (0x0005b358) cell_graphic2_pane_g2

0xe1af,	// (0x0005b365) cell_graphic2_pane_g3_ParamLimits

0xe1af,	// (0x0005b365) cell_graphic2_pane_g3

0xe1bc,	// (0x0005b372) cell_graphic2_pane_g4_ParamLimits

0xe1bc,	// (0x0005b372) cell_graphic2_pane_g4

0xe1c9,	// (0x0005b37f) cell_graphic2_pane_g5_ParamLimits

0xe1c9,	// (0x0005b37f) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x0005cf40) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x0005cf40) cell_graphic2_pane_g

0xe1e2,	// (0x0005b398) cell_graphic2_pane_t1_ParamLimits

0xe1e2,	// (0x0005b398) cell_graphic2_pane_t1

0x9a69,	// (0x00056c1f) grid_highlight_pane_cp11_ParamLimits

0x9a69,	// (0x00056c1f) grid_highlight_pane_cp11

0x7b09,	// (0x00054cbf) bg_button_pane_cp05

0xe218,	// (0x0005b3ce) cell_graphic2_control_pane_g1

0xc026,	// (0x000591dc) bg_touch_area_indi_pane_g1

0xe240,	// (0x0005b3f6) aid_cmod_rocker_key_size

0xe24a,	// (0x0005b400) aid_cmode_itu_key_size

0xe254,	// (0x0005b40a) main_cmode_video_pane

0xe25e,	// (0x0005b414) main_comp_mode_itu_pane

0xe26a,	// (0x0005b420) main_comp_mode_rocker_pane

0xe276,	// (0x0005b42c) cell_cmode_rocker_pane_ParamLimits

0xe276,	// (0x0005b42c) cell_cmode_rocker_pane

0xe288,	// (0x0005b43e) cell_cmode_itu_pane_ParamLimits

0xe288,	// (0x0005b43e) cell_cmode_itu_pane

0x84f2,	// (0x000556a8) bg_button_pane_cp06_ParamLimits

0x84f2,	// (0x000556a8) bg_button_pane_cp06

0xc2a4,	// (0x0005945a) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a4,	// (0x0005945a) cell_cmode_rocker_pane_g1

0xd7d7,	// (0x0005a98d) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d7,	// (0x0005a98d) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x0005cf50) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x0005cf50) cell_cmode_rocker_pane_g

0x1993,	// (0x0004eb49) bg_button_pane_cp07

0xe29d,	// (0x0005b453) cell_cmode_itu_pane_g1

0xe2a6,	// (0x0005b45c) cell_cmode_itu_pane_t1

0xe2b4,	// (0x0005b46a) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x0005cf55) cell_cmode_itu_pane_t

0xd9fa,	// (0x0005abb0) aid_touch_ctrl_left

0xda02,	// (0x0005abb8) aid_touch_ctrl_right

0x1993,	// (0x0004eb49) compa_mode_pane

0xe2c2,	// (0x0005b478) aid_cmod_rocker_key_size_cp

0xe2cc,	// (0x0005b482) aid_cmode_itu_key_size_cp

0xe2f7,	// (0x0005b4ad) compa_mode_pane_g1

0xe2ff,	// (0x0005b4b5) compa_mode_pane_g2

0xe307,	// (0x0005b4bd) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0005cf5a) compa_mode_pane_g

0xe30f,	// (0x0005b4c5) main_comp_mode_itu_pane_cp

0xe317,	// (0x0005b4cd) main_comp_mode_rocker_pane_cp

0xe31f,	// (0x0005b4d5) cell_cmode_itu_pane_cp_ParamLimits

0xe31f,	// (0x0005b4d5) cell_cmode_itu_pane_cp

0xe334,	// (0x0005b4ea) cell_cmode_rocker_pane_cp_ParamLimits

0xe334,	// (0x0005b4ea) cell_cmode_rocker_pane_cp

0x84f2,	// (0x000556a8) bg_button_pane_cp06_cp_ParamLimits

0x84f2,	// (0x000556a8) bg_button_pane_cp06_cp

0xc2a4,	// (0x0005945a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a4,	// (0x0005945a) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x000591dc) cell_cmode_rocker_pane_g2_cp

0x1993,	// (0x0004eb49) bg_button_pane_cp07_cp

0xaf4f,	// (0x00058105) cell_cmode_itu_pane_g1_cp

0xe346,	// (0x0005b4fc) cell_cmode_itu_pane_t1_cp

0xe346,	// (0x0005b4fc) cell_cmode_itu_pane_t2_cp

0xaf3c,	// (0x000580f2) settings_code_pane_cp2

0x7880,	// (0x00054a36) bg_popup_window_pane_cp3_ParamLimits

0x7d09,	// (0x00054ebf) heading_pane_cp3_ParamLimits

0x7d18,	// (0x00054ece) listscroll_popup_graphic_pane_ParamLimits

0x6511,	// (0x000536c7) fep_hwr_aid_pane_ParamLimits

0x6afe,	// (0x00053cb4) aid_touch_sctrl_top_ParamLimits

0x6b19,	// (0x00053ccf) sctrl_sk_top_pane_g1_ParamLimits

0x6768,	// (0x0005391e) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0005ce90) sctrl_sk_top_pane_g_ParamLimits

0x6b26,	// (0x00053cdc) sctrl_sk_top_pane_t1_ParamLimits

0x6afe,	// (0x00053cb4) aid_touch_sctrl_bottom_ParamLimits

0x6b26,	// (0x00053cdc) sctrl_sk_bottom_pane_t1_ParamLimits

0xd943,	// (0x0005aaf9) aid_area_touch_clock

0x6d0b,	// (0x00053ec1) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d0b,	// (0x00053ec1) aid_vkb2_area_top_pane_cell

0x6e59,	// (0x0005400f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e59,	// (0x0005400f) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x0005b068) popup_char_count_window

0xe354,	// (0x0005b50a) popup_char_count_window_g1

0xe35d,	// (0x0005b513) popup_char_count_window_g2

0xe366,	// (0x0005b51c) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x0005cf61) popup_char_count_window_g

0xe36f,	// (0x0005b525) popup_char_count_window_t1

0x6bcd,	// (0x00053d83) popup_fep_char_preview_window_ParamLimits

0x6bcd,	// (0x00053d83) popup_fep_char_preview_window

0x6d29,	// (0x00053edf) vkb2_top_candi_pane_ParamLimits

0x6d29,	// (0x00053edf) vkb2_top_candi_pane

0xe37d,	// (0x0005b533) cell_vkb2_top_candi_pane_ParamLimits

0xe37d,	// (0x0005b533) cell_vkb2_top_candi_pane

0x7140,	// (0x000542f6) bg_popup_fep_char_preview_window_ParamLimits

0x7140,	// (0x000542f6) bg_popup_fep_char_preview_window

0x714e,	// (0x00054304) popup_fep_char_preview_window_t1_ParamLimits

0x714e,	// (0x00054304) popup_fep_char_preview_window_t1

0xe3c7,	// (0x0005b57d) bg_popup_fep_char_preview_window_g1

0xe3cf,	// (0x0005b585) bg_popup_fep_char_preview_window_g2

0xe3d7,	// (0x0005b58d) bg_popup_fep_char_preview_window_g3

0xe3df,	// (0x0005b595) bg_popup_fep_char_preview_window_g4

0xe3e7,	// (0x0005b59d) bg_popup_fep_char_preview_window_g5

0xe3ef,	// (0x0005b5a5) bg_popup_fep_char_preview_window_g6

0xe3f7,	// (0x0005b5ad) bg_popup_fep_char_preview_window_g7

0xe3ff,	// (0x0005b5b5) bg_popup_fep_char_preview_window_g8

0xe407,	// (0x0005b5bd) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x0005cf68) bg_popup_fep_char_preview_window_g

0x6768,	// (0x0005391e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6768,	// (0x0005391e) cell_vkb2_top_candi_pane_g1

0x6776,	// (0x0005392c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6776,	// (0x0005392c) cell_vkb2_top_candi_pane_g2

0xe2d6,	// (0x0005b48c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe2d6,	// (0x0005b48c) cell_vkb2_top_candi_pane_g3

0x7190,	// (0x00054346) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7190,	// (0x00054346) cell_vkb2_top_candi_pane_g4

0xc76f,	// (0x00059925) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc76f,	// (0x00059925) cell_vkb2_top_candi_pane_g5

0x71b1,	// (0x00054367) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71b1,	// (0x00054367) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x0005cf7d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x0005cf7d) cell_vkb2_top_candi_pane_g

0x71bf,	// (0x00054375) cell_vkb2_top_candi_pane_t1

0x6018,	// (0x000531ce) aid_size_touch_slider_mark_ParamLimits

0x6018,	// (0x000531ce) aid_size_touch_slider_mark

0xdff5,	// (0x0005b1ab) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x0005b1ab) grid_graphic2_catg_pane

0xe093,	// (0x0005b249) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x0005b249) popup_grid_graphic2_window_t1

0xe0a5,	// (0x0005b25b) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x0005b25b) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x0005cf36) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x0005cf36) popup_grid_graphic2_window_t

0x7b09,	// (0x00054cbf) bg_button_pane_cp05_ParamLimits

0xe218,	// (0x0005b3ce) cell_graphic2_control_pane_g1_ParamLimits

0xe40f,	// (0x0005b5c5) cell_graphic2_catg_pane_ParamLimits

0xe40f,	// (0x0005b5c5) cell_graphic2_catg_pane

0x1993,	// (0x0004eb49) bg_button_pane_cp12

0xe421,	// (0x0005b5d7) cell_graphic2_catg_pane_g1

0xd90f,	// (0x0005aac5) cell_tb_ext_pane_t1_ParamLimits

0x6f76,	// (0x0005412c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f76,	// (0x0005412c) vkb2_top_cell_right_narrow_pane

0x6f8e,	// (0x00054144) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f8e,	// (0x00054144) vkb2_top_cell_right_wide_pane

0x6503,	// (0x000536b9) bg_vkb2_func_pane_ParamLimits

0x6503,	// (0x000536b9) bg_vkb2_func_pane

0x6fff,	// (0x000541b5) vkb2_top_cell_left_pane_g1_ParamLimits

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp03

0x705d,	// (0x00054213) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99fd,	// (0x00056bb3) bg_vkb2_func_pane_g1

0x9a05,	// (0x00056bbb) bg_vkb2_func_pane_g2

0x9a15,	// (0x00056bcb) bg_vkb2_func_pane_g3

0x9a0d,	// (0x00056bc3) bg_vkb2_func_pane_g4

0x9a1d,	// (0x00056bd3) bg_vkb2_func_pane_g5

0x9a25,	// (0x00056bdb) bg_vkb2_func_pane_g6

0x9a2d,	// (0x00056be3) bg_vkb2_func_pane_g7

0x9a35,	// (0x00056beb) bg_vkb2_func_pane_g8

0x99f5,	// (0x00056bab) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x0005cf8a) bg_vkb2_func_pane_g

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp01

0x6fff,	// (0x000541b5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6fff,	// (0x000541b5) vkb2_top_cell_right_wide_pane_g1

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6503,	// (0x000536b9) bg_vkb2_fuc_pane_cp02

0x71de,	// (0x00054394) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71de,	// (0x00054394) vkb2_top_cell_right_narrow_pane_g1

0xd533,	// (0x0005a6e9) aid_touch_area_decrease_ParamLimits

0xd533,	// (0x0005a6e9) aid_touch_area_decrease

0xd557,	// (0x0005a70d) aid_touch_area_increase_ParamLimits

0xd557,	// (0x0005a70d) aid_touch_area_increase

0xd56f,	// (0x0005a725) aid_touch_area_mute_ParamLimits

0xd56f,	// (0x0005a725) aid_touch_area_mute

0xd58b,	// (0x0005a741) aid_touch_area_slider_ParamLimits

0xd58b,	// (0x0005a741) aid_touch_area_slider

0xd675,	// (0x0005a82b) popup_slider_window_g4_ParamLimits

0xd675,	// (0x0005a82b) popup_slider_window_g4

0xd68d,	// (0x0005a843) popup_slider_window_g5_ParamLimits

0xd68d,	// (0x0005a843) popup_slider_window_g5

0xd6af,	// (0x0005a865) popup_slider_window_g6_ParamLimits

0xd6af,	// (0x0005a865) popup_slider_window_g6

0xd6ed,	// (0x0005a8a3) popup_slider_window_t2_ParamLimits

0xd6ed,	// (0x0005a8a3) popup_slider_window_t2

0x0001,

0xfcce,	// (0x0005ce84) popup_slider_window_t_ParamLimits

0xfcce,	// (0x0005ce84) popup_slider_window_t

0xd705,	// (0x0005a8bb) slider_pane_ParamLimits

0xd705,	// (0x0005a8bb) slider_pane

0xe42a,	// (0x0005b5e0) slider_pane_g1_ParamLimits

0xe42a,	// (0x0005b5e0) slider_pane_g1

0xe43e,	// (0x0005b5f4) slider_pane_g2_ParamLimits

0xe43e,	// (0x0005b5f4) slider_pane_g2

0xe454,	// (0x0005b60a) slider_pane_g3_ParamLimits

0xe454,	// (0x0005b60a) slider_pane_g3

0x0003,

0xfde7,	// (0x0005cf9d) slider_pane_g_ParamLimits

0xfde7,	// (0x0005cf9d) slider_pane_g

0x5b3e,	// (0x00052cf4) popup_tb_float_extension_window_ParamLimits

0x5b3e,	// (0x00052cf4) popup_tb_float_extension_window

0xe480,	// (0x0005b636) aid_size_cell_tb_float_ext

0x1993,	// (0x0004eb49) bg_popup_sub_window_cp28

0xe48c,	// (0x0005b642) grid_tb_float_ext_pane

0xe496,	// (0x0005b64c) cell_tb_float_ext_pane_ParamLimits

0xe496,	// (0x0005b64c) cell_tb_float_ext_pane

0xe4b0,	// (0x0005b666) cell_tb_float_ext_pane_g1

0xe4b9,	// (0x0005b66f) grid_highlight_pane_cp12

0x6652,	// (0x00053808) cell_last_hwr_side_pane_ParamLimits

0x6652,	// (0x00053808) cell_last_hwr_side_pane

0xc026,	// (0x000591dc) cell_last_hwr_side_pane_g1

0xe4c2,	// (0x0005b678) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x0005cfa6) cell_last_hwr_side_pane_g

0x6f25,	// (0x000540db) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f25,	// (0x000540db) vkb2_area_bottom_space_btn_pane

0x6768,	// (0x0005391e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x0005b11d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71bf,	// (0x00054375) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71fe,	// (0x000543b4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71fe,	// (0x000543b4) vkb2_area_bottom_space_btn_pane_g1

0x7238,	// (0x000543ee) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7238,	// (0x000543ee) vkb2_area_bottom_space_btn_pane_g2

0x726e,	// (0x00054424) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x726e,	// (0x00054424) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0005cfab) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0005cfab) vkb2_area_bottom_space_btn_pane_g

0x65c6,	// (0x0005377c) cel_fep_hwr_func_pane_ParamLimits

0x65c6,	// (0x0005377c) cel_fep_hwr_func_pane

0x6602,	// (0x000537b8) cell_hwr_side_button_pane_ParamLimits

0x6602,	// (0x000537b8) cell_hwr_side_button_pane

0xd943,	// (0x0005aaf9) aid_area_touch_clock_ParamLimits

0x7b09,	// (0x00054cbf) bg_uniindi_top_pane_ParamLimits

0xd955,	// (0x0005ab0b) uniindi_top_pane_g1_ParamLimits

0xd96b,	// (0x0005ab21) uniindi_top_pane_g2_ParamLimits

0xd977,	// (0x0005ab2d) uniindi_top_pane_g3_ParamLimits

0xd988,	// (0x0005ab3e) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x0005cebc) uniindi_top_pane_g_ParamLimits

0xd995,	// (0x0005ab4b) uniindi_top_pane_t1_ParamLimits

0x7b09,	// (0x00054cbf) bg_vkb2_func_pane_cp01_ParamLimits

0x7b09,	// (0x00054cbf) bg_vkb2_func_pane_cp01

0xe4cb,	// (0x0005b681) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4cb,	// (0x0005b681) cel_fep_hwr_func_pane_g1

0x7b09,	// (0x00054cbf) bg_vkb2_func_pane_cp02_ParamLimits

0x7b09,	// (0x00054cbf) bg_vkb2_func_pane_cp02

0xe4cb,	// (0x0005b681) cell_hwr_side_button_pane_g1_ParamLimits

0xe4cb,	// (0x0005b681) cell_hwr_side_button_pane_g1

0x9876,	// (0x00056a2c) status_pane_g4_ParamLimits

0x9876,	// (0x00056a2c) status_pane_g4

0x9890,	// (0x00056a46) status_pane_t1

0xbd6b,	// (0x00058f21) form2_midp_gauge_slider_cont_pane

0xbd73,	// (0x00058f29) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd85,	// (0x00058f3b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd97,	// (0x00058f4d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0005cc7c) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda9,	// (0x00058f5f) form2_midp_slider_pane_ParamLimits

0x6b95,	// (0x00053d4b) aid_size_cell_func_vkb2_ParamLimits

0x6b95,	// (0x00053d4b) aid_size_cell_func_vkb2

0xe46c,	// (0x0005b622) slider_pane_g4_ParamLimits

0xe46c,	// (0x0005b622) slider_pane_g4

0x72b8,	// (0x0005446e) form2_midp_gauge_slider_pane_t2_cp01

0x72c6,	// (0x0005447c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72c6,	// (0x0005447c) form2_midp_gauge_slider_pane_t3_cp01

0x72e3,	// (0x00054499) form2_midp_slider_pane_cp01

0x1993,	// (0x0004eb49) navi_smil_pane

0xe504,	// (0x0005b6ba) navi_smil_pane_g1

0xe50c,	// (0x0005b6c2) navi_smil_pane_t1

0xe4d9,	// (0x0005b68f) form2_midp_slider_pane_g1

0xe4e2,	// (0x0005b698) form2_midp_slider_pane_g2

0xe4ea,	// (0x0005b6a0) form2_midp_slider_pane_g3

0xe4d9,	// (0x0005b68f) form2_midp_slider_pane_g4

0xe4f2,	// (0x0005b6a8) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x0005cfb4) form2_midp_slider_pane_g

0x72a8,	// (0x0005445e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72a8,	// (0x0005445e) vkb2_area_bottom_space_btn_pane_g4

0x96a5,	// (0x0005685b) lc0_navi_pane_ParamLimits

0x96a5,	// (0x0005685b) lc0_navi_pane

0x971b,	// (0x000568d1) lc0_stat_indi_pane_ParamLimits

0x971b,	// (0x000568d1) lc0_stat_indi_pane

0x9732,	// (0x000568e8) ls0_title_pane_ParamLimits

0x9732,	// (0x000568e8) ls0_title_pane

0x84f2,	// (0x000556a8) bg_popup_sub_pane_cp14_ParamLimits

0xd92a,	// (0x0005aae0) list_uniindi_pane_ParamLimits

0xd936,	// (0x0005aaec) uniindi_top_pane_ParamLimits

0xd9d2,	// (0x0005ab88) list_single_uniindi_pane_g1_ParamLimits

0xd9e5,	// (0x0005ab9b) list_single_uniindi_pane_t1_ParamLimits

0x72ec,	// (0x000544a2) lc0_stat_clock_pane_ParamLimits

0x72ec,	// (0x000544a2) lc0_stat_clock_pane

0xe51a,	// (0x0005b6d0) lc0_stat_indi_pane_g1_ParamLimits

0xe51a,	// (0x0005b6d0) lc0_stat_indi_pane_g1

0xe527,	// (0x0005b6dd) lc0_stat_indi_pane_g2_ParamLimits

0xe527,	// (0x0005b6dd) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x0005cfbf) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x0005cfbf) lc0_stat_indi_pane_g

0x72f9,	// (0x000544af) lc0_uni_indicator_pane_ParamLimits

0x72f9,	// (0x000544af) lc0_uni_indicator_pane

0xe534,	// (0x0005b6ea) ls0_title_pane_g1_ParamLimits

0xe534,	// (0x0005b6ea) ls0_title_pane_g1

0xe548,	// (0x0005b6fe) ls0_title_pane_t1_ParamLimits

0xe548,	// (0x0005b6fe) ls0_title_pane_t1

0x7306,	// (0x000544bc) lc0_uni_indicator_pane_g1_ParamLimits

0x7306,	// (0x000544bc) lc0_uni_indicator_pane_g1

0xe57e,	// (0x0005b734) lc0_stat_clock_pane_t1

0x46ee,	// (0x000518a4) main_ai5_pane

0xe58c,	// (0x0005b742) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0005b742) ai5_sk_pane

0xe599,	// (0x0005b74f) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0005b74f) cell_ai5_widget_pane

0xe662,	// (0x0005b818) aid_size_cell_widget_grid

0xe678,	// (0x0005b82e) bg_ai5_widget_pane_ParamLimits

0xe678,	// (0x0005b82e) bg_ai5_widget_pane

0xe6f4,	// (0x0005b8aa) cell_ai5_widget_pane_g2

0xe708,	// (0x0005b8be) cell_ai5_widget_pane_g3

0xe722,	// (0x0005b8d8) cell_ai5_widget_pane_g4

0xe732,	// (0x0005b8e8) cell_ai5_widget_pane_g5

0xe742,	// (0x0005b8f8) cell_ai5_widget_pane_g6

0xe74e,	// (0x0005b904) cell_ai5_widget_pane_g7

0xe7ba,	// (0x0005b970) cell_ai5_widget_pane_t1_ParamLimits

0xe7ba,	// (0x0005b970) cell_ai5_widget_pane_t1

0xe7d7,	// (0x0005b98d) cell_ai5_widget_pane_t2_ParamLimits

0xe7d7,	// (0x0005b98d) cell_ai5_widget_pane_t2

0xe7ef,	// (0x0005b9a5) cell_ai5_widget_pane_t3_ParamLimits

0xe7ef,	// (0x0005b9a5) cell_ai5_widget_pane_t3

0xe807,	// (0x0005b9bd) cell_ai5_widget_pane_t4_ParamLimits

0xe807,	// (0x0005b9bd) cell_ai5_widget_pane_t4

0xe82d,	// (0x0005b9e3) cell_ai5_widget_pane_t5_ParamLimits

0xe82d,	// (0x0005b9e3) cell_ai5_widget_pane_t5

0xe84c,	// (0x0005ba02) cell_ai5_widget_pane_t6_ParamLimits

0xe84c,	// (0x0005ba02) cell_ai5_widget_pane_t6

0xe85e,	// (0x0005ba14) cell_ai5_widget_pane_t7_ParamLimits

0xe85e,	// (0x0005ba14) cell_ai5_widget_pane_t7

0xe87d,	// (0x0005ba33) cell_ai5_widget_pane_t8_ParamLimits

0xe87d,	// (0x0005ba33) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x0005cfdf) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x0005cfdf) cell_ai5_widget_pane_t

0xe901,	// (0x0005bab7) grid_ai5_widget_pane

0x84f2,	// (0x000556a8) highlight_cell_ai5_widget_pane_ParamLimits

0x84f2,	// (0x000556a8) highlight_cell_ai5_widget_pane

0xe918,	// (0x0005bace) ai5_sk_left_pane

0xe922,	// (0x0005bad8) ai5_sk_middle_pane

0xe92c,	// (0x0005bae2) ai5_sk_right_pane

0xe936,	// (0x0005baec) bg_ai5_widget_pane_g1_ParamLimits

0xe936,	// (0x0005baec) bg_ai5_widget_pane_g1

0xe942,	// (0x0005baf8) bg_ai5_widget_pane_g2_ParamLimits

0xe942,	// (0x0005baf8) bg_ai5_widget_pane_g2

0xe94e,	// (0x0005bb04) bg_ai5_widget_pane_g3_ParamLimits

0xe94e,	// (0x0005bb04) bg_ai5_widget_pane_g3

0xe95a,	// (0x0005bb10) bg_ai5_widget_pane_g4_ParamLimits

0xe95a,	// (0x0005bb10) bg_ai5_widget_pane_g4

0xe966,	// (0x0005bb1c) bg_ai5_widget_pane_g5_ParamLimits

0xe966,	// (0x0005bb1c) bg_ai5_widget_pane_g5

0xe972,	// (0x0005bb28) bg_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0005bb28) bg_ai5_widget_pane_g6

0xe97e,	// (0x0005bb34) bg_ai5_widget_pane_g7_ParamLimits

0xe97e,	// (0x0005bb34) bg_ai5_widget_pane_g7

0xe98a,	// (0x0005bb40) bg_ai5_widget_pane_g8_ParamLimits

0xe98a,	// (0x0005bb40) bg_ai5_widget_pane_g8

0xe996,	// (0x0005bb4c) bg_ai5_widget_pane_g9_ParamLimits

0xe996,	// (0x0005bb4c) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x0005cff8) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0005cff8) bg_ai5_widget_pane_g

0xe9c8,	// (0x0005bb7e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c8,	// (0x0005bb7e) cell_shortcut_ai5_widget_pane

0x91a7,	// (0x0005635d) bg_cell_shortcut_ai5_widget_pane

0xe9d9,	// (0x0005bb8f) cell_grid_ai5_widget_pane_g1

0x91a7,	// (0x0005635d) highlight_cell_shortcut_ai5_widget_pane

0x99fd,	// (0x00056bb3) ai5_sk_left_pane_g1

0xe9e2,	// (0x0005bb98) ai5_sk_left_pane_g2

0xe9ea,	// (0x0005bba0) ai5_sk_left_pane_g3

0xe9f2,	// (0x0005bba8) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x0005d00b) ai5_sk_left_pane_g

0xe9fa,	// (0x0005bbb0) ai5_sk_left_pane_t1

0x9a05,	// (0x00056bbb) ai5_sk_right_pane_g1

0xea08,	// (0x0005bbbe) ai5_sk_right_pane_g2

0xea10,	// (0x0005bbc6) ai5_sk_right_pane_g3

0xea18,	// (0x0005bbce) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x0005d014) ai5_sk_right_pane_g

0xea20,	// (0x0005bbd6) ai5_sk_right_pane_t1

0x9a05,	// (0x00056bbb) ai5_sk_middle_pane_g1

0x99fd,	// (0x00056bb3) ai5_sk_middle_pane_g2

0x9a1d,	// (0x00056bd3) ai5_sk_middle_pane_g3

0xea10,	// (0x0005bbc6) ai5_sk_middle_pane_g4

0xe9ea,	// (0x0005bba0) ai5_sk_middle_pane_g5

0xea2e,	// (0x0005bbe4) ai5_sk_middle_pane_g6

0xea36,	// (0x0005bbec) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x0005d01d) ai5_sk_middle_pane_g

0x952b,	// (0x000566e1) aid_touch_area_size_lc0_ParamLimits

0x952b,	// (0x000566e1) aid_touch_area_size_lc0

0x6797,	// (0x0005394d) cell_hwr_candidate_pane_t1_ParamLimits

0x9547,	// (0x000566fd) aid_touch_navi_pane

0x9820,	// (0x000569d6) status_dt_navi_pane_ParamLimits

0x9820,	// (0x000569d6) status_dt_navi_pane

0x982d,	// (0x000569e3) status_dt_sta_pane_ParamLimits

0x982d,	// (0x000569e3) status_dt_sta_pane

0xea3e,	// (0x0005bbf4) dt_sta_controll_pane

0xea4b,	// (0x0005bc01) dt_sta_indi_pane

0xea5c,	// (0x0005bc12) dt_sta_title_pane

0x7b09,	// (0x00054cbf) bg_dt_sta_indi_pane_ParamLimits

0x7b09,	// (0x00054cbf) bg_dt_sta_indi_pane

0xea6f,	// (0x0005bc25) dt_sta_battery_pane

0xea77,	// (0x0005bc2d) dt_sta_indi_pane_g1

0xea80,	// (0x0005bc36) dt_sta_indi_pane_g2

0xea89,	// (0x0005bc3f) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x0005d02c) dt_sta_indi_pane_g

0xea92,	// (0x0005bc48) dt_sta_signal_pane

0x84f2,	// (0x000556a8) bg_dt_sta_title_pane_ParamLimits

0x84f2,	// (0x000556a8) bg_dt_sta_title_pane

0xea9b,	// (0x0005bc51) dt_sta_title_pane_g1

0xeaa3,	// (0x0005bc59) dt_sta_title_pane_t1_ParamLimits

0xeaa3,	// (0x0005bc59) dt_sta_title_pane_t1

0x1993,	// (0x0004eb49) bg_dt_sta_control_pane

0xeab8,	// (0x0005bc6e) dt_sta_controll_pane_g1

0xeac1,	// (0x0005bc77) bg_dt_sta_title_pane_g1

0xeaca,	// (0x0005bc80) bg_dt_sta_title_pane_g2

0xead3,	// (0x0005bc89) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x0005d033) bg_dt_sta_title_pane_g

0xc026,	// (0x000591dc) bg_dt_sta_indi_pane_g1

0xeadc,	// (0x0005bc92) dt_sta_signal_pane_g1

0xeae4,	// (0x0005bc9a) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x0005d03a) dt_sta_signal_pane_g

0xeaec,	// (0x0005bca2) dt_sta_battery_pane_g1

0xeaf5,	// (0x0005bcab) dt_sta_battery_pane_t1

0xc026,	// (0x000591dc) bg_dt_sta_control_pane_g1

0x8ca6,	// (0x00055e5c) fep_china_uni_eep_pane

0x8cae,	// (0x00055e64) fep_china_uni_entry_pane_ParamLimits

0x8cbe,	// (0x00055e74) popup_fep_china_uni_window_g1_ParamLimits

0x8cce,	// (0x00055e84) popup_fep_china_uni_window_g2_ParamLimits

0x8cce,	// (0x00055e84) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0005c8b3) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0005c8b3) popup_fep_china_uni_window_g

0xeb04,	// (0x0005bcba) fep_china_uni_eep_pane_g1

0xeb0c,	// (0x0005bcc2) fep_china_uni_eep_pane_t1

0xe4fb,	// (0x0005b6b1) aid_touch_area_size_smil_player

0x969d,	// (0x00056853) lc0_clock_pane

0x9884,	// (0x00056a3a) status_pane_g5_ParamLimits

0x9884,	// (0x00056a3a) status_pane_g5

0x5803,	// (0x000529b9) popup_keymap_window

0x9842,	// (0x000569f8) status_icon_pane

0xe708,	// (0x0005b8be) cell_ai5_widget_pane_g3_ParamLimits

0xe722,	// (0x0005b8d8) cell_ai5_widget_pane_g4_ParamLimits

0xe732,	// (0x0005b8e8) cell_ai5_widget_pane_g5_ParamLimits

0xe75a,	// (0x0005b910) cell_ai5_widget_pane_g8_ParamLimits

0xe75a,	// (0x0005b910) cell_ai5_widget_pane_g8

0xe76e,	// (0x0005b924) cell_ai5_widget_pane_g9_ParamLimits

0xe76e,	// (0x0005b924) cell_ai5_widget_pane_g9

0xe782,	// (0x0005b938) cell_ai5_widget_pane_g10_ParamLimits

0xe782,	// (0x0005b938) cell_ai5_widget_pane_g10

0xeb1b,	// (0x0005bcd1) status_icon_pane_g1

0x1993,	// (0x0004eb49) bg_popup_sub_pane_cp13

0xeb23,	// (0x0005bcd9) popup_keymap_window_t1

0x947c,	// (0x00056632) control_pane_g6_ParamLimits

0x947c,	// (0x00056632) control_pane_g6

0x9489,	// (0x0005663f) control_pane_g7_ParamLimits

0x9489,	// (0x0005663f) control_pane_g7

0x9496,	// (0x0005664c) control_pane_g8_ParamLimits

0x9496,	// (0x0005664c) control_pane_g8

0xea3e,	// (0x0005bbf4) dt_sta_controll_pane_ParamLimits

0xea4b,	// (0x0005bc01) dt_sta_indi_pane_ParamLimits

0xea5c,	// (0x0005bc12) dt_sta_title_pane_ParamLimits

0x8045,	// (0x000551fb) aid_size_touch_scroll_bar_cale

0x47c7,	// (0x0005197d) popup_discreet_window_ParamLimits

0x47c7,	// (0x0005197d) popup_discreet_window

0x484f,	// (0x00051a05) popup_sk_window

0xa090,	// (0x00057246) bg_popup_sub_pane_cp28_ParamLimits

0xa090,	// (0x00057246) bg_popup_sub_pane_cp28

0xeb31,	// (0x0005bce7) popup_discreet_window_g1_ParamLimits

0xeb31,	// (0x0005bce7) popup_discreet_window_g1

0xeb51,	// (0x0005bd07) popup_discreet_window_t1_ParamLimits

0xeb51,	// (0x0005bd07) popup_discreet_window_t1

0xeb6f,	// (0x0005bd25) popup_discreet_window_t2_ParamLimits

0xeb6f,	// (0x0005bd25) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x0005d03f) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x0005d03f) popup_discreet_window_t

0x731a,	// (0x000544d0) popup_sk_window_g1

0x7324,	// (0x000544da) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0005d046) popup_sk_window_g

0x732c,	// (0x000544e2) popup_sk_window_t1

0x733a,	// (0x000544f0) popup_sk_window_t1_copy1

0xe6f4,	// (0x0005b8aa) cell_ai5_widget_pane_g2_ParamLimits

0xe88f,	// (0x0005ba45) cell_ai5_widget_pane_t9_ParamLimits

0xe88f,	// (0x0005ba45) cell_ai5_widget_pane_t9

0x1993,	// (0x0004eb49) main_fep_fshwr2_pane

0x7348,	// (0x000544fe) aid_fshwr2_btn_pane

0x7358,	// (0x0005450e) aid_fshwr2_syb_pane

0x736c,	// (0x00054522) aid_fshwr2_txt_pane

0x737c,	// (0x00054532) fshwr2_func_candi_pane

0x73a0,	// (0x00054556) fshwr2_hwr_syb_pane

0x73ba,	// (0x00054570) fshwr2_icf_pane

0x46ee,	// (0x000518a4) fshwr2_icf_bg_pane

0x73e8,	// (0x0005459e) fshwr2_icf_pane_t1_ParamLimits

0x73e8,	// (0x0005459e) fshwr2_icf_pane_t1

0x8b7b,	// (0x00055d31) fshwr2_func_candi_pane_g1

0xebc1,	// (0x0005bd77) fshwr2_func_candi_row_pane_ParamLimits

0xebc1,	// (0x0005bd77) fshwr2_func_candi_row_pane

0x7400,	// (0x000545b6) cell_fshwr2_syb_pane_ParamLimits

0x7400,	// (0x000545b6) cell_fshwr2_syb_pane

0x7423,	// (0x000545d9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7423,	// (0x000545d9) fshwr2_hwr_syb_pane_g1

0x46ee,	// (0x000518a4) bg_popup_call_pane_cp01

0x7431,	// (0x000545e7) fshwr2_func_candi_cell_pane_ParamLimits

0x7431,	// (0x000545e7) fshwr2_func_candi_cell_pane

0xa704,	// (0x000578ba) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa704,	// (0x000578ba) fshwr2_func_candi_cell_bg_pane

0x747c,	// (0x00054632) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x747c,	// (0x00054632) fshwr2_func_candi_cell_pane_g1

0x74a7,	// (0x0005465d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x74a7,	// (0x0005465d) fshwr2_func_candi_cell_pane_t1

0x46ee,	// (0x000518a4) bg_button_pane_cp08

0x94cb,	// (0x00056681) cell_fshwr2_syb_bg_pane

0x74ba,	// (0x00054670) cell_fshwr2_syb_bg_pane_g1

0x74ce,	// (0x00054684) cell_fshwr2_syb_bg_pane_t1

0x84f2,	// (0x000556a8) main_tmo_pane

0xab9f,	// (0x00057d55) uni_indicator_pane_g1_ParamLimits

0xabb5,	// (0x00057d6b) uni_indicator_pane_g2_ParamLimits

0xabcb,	// (0x00057d81) uni_indicator_pane_g3_ParamLimits

0xabde,	// (0x00057d94) uni_indicator_pane_g4_ParamLimits

0xabde,	// (0x00057d94) uni_indicator_pane_g4

0xabf2,	// (0x00057da8) uni_indicator_pane_g5_ParamLimits

0xabf2,	// (0x00057da8) uni_indicator_pane_g5

0xabf2,	// (0x00057da8) uni_indicator_pane_g6_ParamLimits

0xabf2,	// (0x00057da8) uni_indicator_pane_g6

0xf8fc,	// (0x0005cab2) uni_indicator_pane_g_ParamLimits

0xd50f,	// (0x0005a6c5) popup_tmo_note_window_ParamLimits

0xd50f,	// (0x0005a6c5) popup_tmo_note_window

0x6b77,	// (0x00053d2d) fshwr2_bg_pane

0x7498,	// (0x0005464e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7498,	// (0x0005464e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x0005d04b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x0005d04b) fshwr2_func_candi_cell_pane_g

0x6750,	// (0x00053906) bg_popup_window_pane_cp01

0x74e4,	// (0x0005469a) bg_popup_window_pane_g1_cp01

0xebe8,	// (0x0005bd9e) bg_popup_window_pane_cp22_ParamLimits

0xebe8,	// (0x0005bd9e) bg_popup_window_pane_cp22

0xebf6,	// (0x0005bdac) listscroll_tmo_link_pane_ParamLimits

0xebf6,	// (0x0005bdac) listscroll_tmo_link_pane

0xec36,	// (0x0005bdec) popup_tmo_note_window_g1_ParamLimits

0xec36,	// (0x0005bdec) popup_tmo_note_window_g1

0xec43,	// (0x0005bdf9) tmo_note_info_pane_ParamLimits

0xec43,	// (0x0005bdf9) tmo_note_info_pane

0xec5d,	// (0x0005be13) list_tmo_note_info_pane_g1_ParamLimits

0xec5d,	// (0x0005be13) list_tmo_note_info_pane_g1

0xec74,	// (0x0005be2a) list_tmo_note_info_pane_g2_ParamLimits

0xec74,	// (0x0005be2a) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x0005d050) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x0005d050) list_tmo_note_info_pane_g

0xec90,	// (0x0005be46) list_tmo_note_info_text_pane_ParamLimits

0xec90,	// (0x0005be46) list_tmo_note_info_text_pane

0xed11,	// (0x0005bec7) list_tmo_link_pane

0xed1e,	// (0x0005bed4) scroll_pane_cp20

0xed2b,	// (0x0005bee1) list_single_tmo_link_pane_ParamLimits

0xed2b,	// (0x0005bee1) list_single_tmo_link_pane

0xed3b,	// (0x0005bef1) list_single_tmo_link_pane_t1

0xed49,	// (0x0005beff) list_tmo_note_info_text_pane_t1_ParamLimits

0xed49,	// (0x0005beff) list_tmo_note_info_text_pane_t1

0x85a2,	// (0x00055758) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85a2,	// (0x00055758) aid_size_touch_scroll_bar_cp01

0x4ec6,	// (0x0005207c) aid_size_touch_slider_marker

0x4837,	// (0x000519ed) popup_settings_window_ParamLimits

0x4837,	// (0x000519ed) popup_settings_window

0x5686,	// (0x0005283c) popup_candi_list_indi_window

0x9547,	// (0x000566fd) aid_touch_navi_pane_ParamLimits

0x6ad2,	// (0x00053c88) rs_clock_indi_pane

0x6adb,	// (0x00053c91) sctrl_sk_bottom_pane_ParamLimits

0x6aec,	// (0x00053ca2) sctrl_sk_top_pane_ParamLimits

0x6be7,	// (0x00053d9d) popup_fep_tooltip_window

0xe662,	// (0x0005b818) aid_size_cell_widget_grid_ParamLimits

0xe6df,	// (0x0005b895) cell_ai5_widget_pane_g1_ParamLimits

0xe6df,	// (0x0005b895) cell_ai5_widget_pane_g1

0xe742,	// (0x0005b8f8) cell_ai5_widget_pane_g6_ParamLimits

0xe74e,	// (0x0005b904) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x0005cfc4) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x0005cfc4) cell_ai5_widget_pane_g

0xe8be,	// (0x0005ba74) cell_ai5_widget_pane_t10_ParamLimits

0xe8be,	// (0x0005ba74) cell_ai5_widget_pane_t10

0xe901,	// (0x0005bab7) grid_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0005bb58) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0005bb58) cell_contacts_ai5_widget_pane

0xeb84,	// (0x0005bd3a) popup_discreet_window_t3_ParamLimits

0xeb84,	// (0x0005bd3a) popup_discreet_window_t3

0x73d2,	// (0x00054588) popup_fshwr2_char_preview_window_ParamLimits

0x73d2,	// (0x00054588) popup_fshwr2_char_preview_window

0xecae,	// (0x0005be64) tmo_note_info_pane_t1

0xecc3,	// (0x0005be79) tmo_note_info_pane_t2

0xecd8,	// (0x0005be8e) tmo_note_info_pane_t3

0xeced,	// (0x0005bea3) tmo_note_info_pane_t4

0xecff,	// (0x0005beb5) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x0005d055) tmo_note_info_pane_t

0xed11,	// (0x0005bec7) list_tmo_link_pane_ParamLimits

0xed1e,	// (0x0005bed4) scroll_pane_cp20_ParamLimits

0x46ee,	// (0x000518a4) bg_popup_fep_char_preview_window_cp01

0xed62,	// (0x0005bf18) popup_fshwr2_char_preview_window_t1

0xed70,	// (0x0005bf26) popup_candi_list_indi_window_g1

0xed79,	// (0x0005bf2f) bg_cell_contacts_ai5_widget_pane

0xed85,	// (0x0005bf3b) cell_contacts_ai5_widget_pane_g1

0xc6c4,	// (0x0005987a) cell_contacts_ai5_widget_pane_g2

0xed9a,	// (0x0005bf50) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x0005d060) cell_contacts_ai5_widget_pane_g

0xeda6,	// (0x0005bf5c) cell_contacts_ai5_widget_pane_t1

0x84f2,	// (0x000556a8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1d,	// (0x0005bfd3) settings_container_pane

0x91a7,	// (0x0005635d) listscroll_set_pane_copy1

0xb710,	// (0x000588c6) scroll_pane_cp121_copy1

0x9e21,	// (0x00056fd7) set_content_pane_copy1

0xee29,	// (0x0005bfdf) aid_height_set_list_copy1_ParamLimits

0xee29,	// (0x0005bfdf) aid_height_set_list_copy1

0xadea,	// (0x00057fa0) aid_size_parent_copy1_ParamLimits

0xadea,	// (0x00057fa0) aid_size_parent_copy1

0xee35,	// (0x0005bfeb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee35,	// (0x0005bfeb) button_value_adjust_pane_cp6_copy1

0x94cb,	// (0x00056681) list_highlight_pane_cp2_copy1_ParamLimits

0x94cb,	// (0x00056681) list_highlight_pane_cp2_copy1

0xee49,	// (0x0005bfff) list_set_pane_copy1_ParamLimits

0xee49,	// (0x0005bfff) list_set_pane_copy1

0xedb8,	// (0x0005bf6e) main_pane_set_t1_copy1_ParamLimits

0xedb8,	// (0x0005bf6e) main_pane_set_t1_copy1

0xedf2,	// (0x0005bfa8) main_pane_set_t2_copy1_ParamLimits

0xedf2,	// (0x0005bfa8) main_pane_set_t2_copy1

0xeef6,	// (0x0005c0ac) main_pane_set_t3_copy1

0xef04,	// (0x0005c0ba) main_pane_set_t4_copy1

0xee11,	// (0x0005bfc7) set_content_pane_g1_copy1_ParamLimits

0xee11,	// (0x0005bfc7) set_content_pane_g1_copy1

0xef12,	// (0x0005c0c8) setting_code_pane_copy1

0xef1a,	// (0x0005c0d0) setting_slider_graphic_pane_copy1

0xef1a,	// (0x0005c0d0) setting_slider_pane_copy1

0xef22,	// (0x0005c0d8) setting_text_pane_copy1

0xef22,	// (0x0005c0d8) setting_volume_pane_copy1

0xef12,	// (0x0005c0c8) settings_code_pane_cp2_copy1

0xef2a,	// (0x0005c0e0) settings_code_pane_cp_copy1_ParamLimits

0xef2a,	// (0x0005c0e0) settings_code_pane_cp_copy1

0x74ed,	// (0x000546a3) volume_set_pane_copy1

0xef3e,	// (0x0005c0f4) volume_set_pane_g10_copy1

0xef46,	// (0x0005c0fc) volume_set_pane_g1_copy1

0xef4e,	// (0x0005c104) volume_set_pane_g2_copy1

0xef56,	// (0x0005c10c) volume_set_pane_g3_copy1

0xef5e,	// (0x0005c114) volume_set_pane_g4_copy1

0xef66,	// (0x0005c11c) volume_set_pane_g5_copy1

0xef6e,	// (0x0005c124) volume_set_pane_g6_copy1

0xef76,	// (0x0005c12c) volume_set_pane_g7_copy1

0xef7e,	// (0x0005c134) volume_set_pane_g8_copy1

0xef86,	// (0x0005c13c) volume_set_pane_g9_copy1

0x7880,	// (0x00054a36) bg_set_opt_pane_cp_copy1_ParamLimits

0x7880,	// (0x00054a36) bg_set_opt_pane_cp_copy1

0x74f5,	// (0x000546ab) setting_slider_pane_t1_copy1_ParamLimits

0x74f5,	// (0x000546ab) setting_slider_pane_t1_copy1

0x7514,	// (0x000546ca) setting_slider_pane_t2_copy1_ParamLimits

0x7514,	// (0x000546ca) setting_slider_pane_t2_copy1

0x752e,	// (0x000546e4) setting_slider_pane_t3_copy1_ParamLimits

0x752e,	// (0x000546e4) setting_slider_pane_t3_copy1

0x7546,	// (0x000546fc) slider_set_pane_copy1_ParamLimits

0x7546,	// (0x000546fc) slider_set_pane_copy1

0x853e,	// (0x000556f4) set_opt_bg_pane_g1_copy2

0x8546,	// (0x000556fc) set_opt_bg_pane_g2_copy2

0xef8e,	// (0x0005c144) set_opt_bg_pane_g3_copy2

0x8556,	// (0x0005570c) set_opt_bg_pane_g4_copy2

0x855e,	// (0x00055714) set_opt_bg_pane_g5_copy2

0x8566,	// (0x0005571c) set_opt_bg_pane_g6_copy2

0xef98,	// (0x0005c14e) set_opt_bg_pane_g7_copy2

0xefa0,	// (0x0005c156) set_opt_bg_pane_g8_copy2

0xefaa,	// (0x0005c160) set_opt_bg_pane_g9_copy2

0x755c,	// (0x00054712) aid_size_touch_slider_mark_copy1_ParamLimits

0x755c,	// (0x00054712) aid_size_touch_slider_mark_copy1

0xefb4,	// (0x0005c16a) slider_set_pane_g1_copy1

0x7570,	// (0x00054726) slider_set_pane_g2_copy1

0x6038,	// (0x000531ee) slider_set_pane_g3_copy1_ParamLimits

0x6038,	// (0x000531ee) slider_set_pane_g3_copy1

0x604c,	// (0x00053202) slider_set_pane_g4_copy1_ParamLimits

0x604c,	// (0x00053202) slider_set_pane_g4_copy1

0x6064,	// (0x0005321a) slider_set_pane_g5_copy1_ParamLimits

0x6064,	// (0x0005321a) slider_set_pane_g5_copy1

0x6038,	// (0x000531ee) slider_set_pane_g6_copy1_ParamLimits

0x6038,	// (0x000531ee) slider_set_pane_g6_copy1

0x7578,	// (0x0005472e) slider_set_pane_g7_copy1_ParamLimits

0x7578,	// (0x0005472e) slider_set_pane_g7_copy1

0x77a0,	// (0x00054956) bg_set_opt_pane_cp2_copy1

0xefbd,	// (0x0005c173) setting_slider_graphic_pane_g1_copy1

0xefc6,	// (0x0005c17c) setting_slider_graphic_pane_t1_copy1

0xefd6,	// (0x0005c18c) setting_slider_graphic_pane_t2_copy1

0xefe6,	// (0x0005c19c) slider_set_pane_cp_copy1

0xeff6,	// (0x0005c1ac) input_focus_pane_cp1_copy1

0xefff,	// (0x0005c1b5) list_set_text_pane_copy1

0xf007,	// (0x0005c1bd) setting_text_pane_g1_copy1

0x84cc,	// (0x00055682) set_text_pane_t1_copy1

0xeff6,	// (0x0005c1ac) input_focus_pane_cp2_copy1

0xf007,	// (0x0005c1bd) setting_code_pane_g1_copy1

0xf010,	// (0x0005c1c6) setting_code_pane_t1_copy1

0xb538,	// (0x000586ee) list_set_graphic_pane_copy1

0x77a0,	// (0x00054956) bg_set_opt_pane_cp4_copy1

0x8ea5,	// (0x0005605b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8ea5,	// (0x0005605b) list_set_graphic_pane_g1_copy1

0xf01e,	// (0x0005c1d4) list_set_graphic_pane_g2_copy1

0x8ebd,	// (0x00056073) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ebd,	// (0x00056073) list_set_graphic_pane_t1_copy1

0xc026,	// (0x000591dc) rs_clock_indi_pane_g1

0xf026,	// (0x0005c1dc) rs_clock_indi_pane_t1

0xf034,	// (0x0005c1ea) rs_indi_pane

0xf03c,	// (0x0005c1f2) rs_indi_pane_g1

0xf045,	// (0x0005c1fb) rs_indi_pane_g2

0xf04e,	// (0x0005c204) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x0005d067) rs_indi_pane_g

0x91a7,	// (0x0005635d) bg_popup_preview_window_pane_cp03

0xf057,	// (0x0005c20d) popup_fep_tooltip_window_t1

0xccae,	// (0x00059e64) popup_note2_window_g2_ParamLimits

0xccae,	// (0x00059e64) popup_note2_window_g2

0x0001,

0xfc3e,	// (0x0005cdf4) popup_note2_window_g_ParamLimits

0xfc3e,	// (0x0005cdf4) popup_note2_window_g

0xd1a9,	// (0x0005a35f) bg_popup_sub_pane_cp11_ParamLimits

0xd1b6,	// (0x0005a36c) cell_ai3_links_pane_g1_ParamLimits

0xd1cd,	// (0x0005a383) cell_ai3_links_pane_t1

0x84cc,	// (0x00055682) set_text_pane_t1_copy1_ParamLimits

0x90bb,	// (0x00056271) cell_graphic_popup_pane_cp2_ParamLimits

0x90bb,	// (0x00056271) cell_graphic_popup_pane_cp2

0xf065,	// (0x0005c21b) cell_graphic_popup_pane_g1_cp2

0x7e58,	// (0x0005500e) cell_graphic_popup_pane_g2_cp2

0xf06d,	// (0x0005c223) cell_graphic_popup_pane_g3_cp2

0xf075,	// (0x0005c22b) cell_graphic_popup_pane_t2_cp2

0x7e69,	// (0x0005501f) grid_highlight_pane_cp3_cp2

0x8896,	// (0x00055a4c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84f2,	// (0x000556a8) main_tmo_pane_ParamLimits

0xd503,	// (0x0005a6b9) popup_tmo_big_image_note_window

0xe6ce,	// (0x0005b884) cell_ai5_widget_list_pane

0xe6d6,	// (0x0005b88c) cell_ai5_widget_lrg_icon_pane

0xecae,	// (0x0005be64) tmo_note_info_pane_t1_ParamLimits

0xecc3,	// (0x0005be79) tmo_note_info_pane_t2_ParamLimits

0xecd8,	// (0x0005be8e) tmo_note_info_pane_t3_ParamLimits

0xeced,	// (0x0005bea3) tmo_note_info_pane_t4_ParamLimits

0xecff,	// (0x0005beb5) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x0005d055) tmo_note_info_pane_t_ParamLimits

0xee1d,	// (0x0005bfd3) settings_container_pane_ParamLimits

0xefee,	// (0x0005c1a4) indicator_popup_pane_cp5

0xefee,	// (0x0005c1a4) indicator_popup_pane_cp6

0xb538,	// (0x000586ee) list_set_graphic_pane_copy1_ParamLimits

0x1993,	// (0x0004eb49) bg_popup_window_pane_cp23

0xf083,	// (0x0005c239) popup_tmo_big_image_note_window_g1

0xf08d,	// (0x0005c243) popup_tmo_big_image_note_window_t1

0xf09d,	// (0x0005c253) popup_tmo_big_image_note_window_t2

0xf0ad,	// (0x0005c263) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0005d06e) popup_tmo_big_image_note_window_t

0xc026,	// (0x000591dc) cell_ai5_widget_lrg_icon_pane_g1

0xf0bd,	// (0x0005c273) cell_ai5_widget_lrg_icon_pane_t1

0xf0cb,	// (0x0005c281) cell_ai5_widget_list_row_pane_ParamLimits

0xf0cb,	// (0x0005c281) cell_ai5_widget_list_row_pane

0xf0e2,	// (0x0005c298) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e2,	// (0x0005c298) cell_ai5_widget_list_row_pane_g1

0xf0ef,	// (0x0005c2a5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ef,	// (0x0005c2a5) cell_ai5_widget_list_row_pane_t1

0xf120,	// (0x0005c2d6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf120,	// (0x0005c2d6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x0005d075) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x0005d075) cell_ai5_widget_list_row_pane_t

0x46ee,	// (0x000518a4) main_fep_vtchi_ss_pane

0xf170,	// (0x0005c326) popup_fep_char_pre_window

0xf178,	// (0x0005c32e) popup_fep_ituss_window

0xf1a4,	// (0x0005c35a) popup_fep_vkbss_window

0x94cb,	// (0x00056681) grid_vkbss_keypad_pane_ParamLimits

0x94cb,	// (0x00056681) grid_vkbss_keypad_pane

0xf1e4,	// (0x0005c39a) ituss_keypad_pane

0x7598,	// (0x0005474e) aid_vkbss_key_offset_ParamLimits

0x7598,	// (0x0005474e) aid_vkbss_key_offset

0x75a4,	// (0x0005475a) cell_vkbss_key_pane_ParamLimits

0x75a4,	// (0x0005475a) cell_vkbss_key_pane

0xf1f0,	// (0x0005c3a6) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0005c3a6) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0005c3b2) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0005c3b2) cell_vkbss_key_3p_pane

0xf232,	// (0x0005c3e8) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0005c3e8) cell_vkbss_key_g1

0xf268,	// (0x0005c41e) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0005c41e) cell_vkbss_key_t1

0x75fc,	// (0x000547b2) cell_ituss_key_pane_ParamLimits

0x75fc,	// (0x000547b2) cell_ituss_key_pane

0xf2c4,	// (0x0005c47a) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0005c47a) bg_cell_ituss_key_g1

0xf2d0,	// (0x0005c486) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0005c486) cell_ituss_key_pane_g1

0x760d,	// (0x000547c3) cell_ituss_key_pane_g2_ParamLimits

0x760d,	// (0x000547c3) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x0005d07c) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x0005d07c) cell_ituss_key_pane_g

0x7691,	// (0x00054847) cell_ituss_key_t1_ParamLimits

0x7691,	// (0x00054847) cell_ituss_key_t1

0x76cb,	// (0x00054881) cell_ituss_key_t2_ParamLimits

0x76cb,	// (0x00054881) cell_ituss_key_t2

0x76fd,	// (0x000548b3) cell_ituss_key_t3_ParamLimits

0x76fd,	// (0x000548b3) cell_ituss_key_t3

0x772e,	// (0x000548e4) cell_ituss_key_t4_ParamLimits

0x772e,	// (0x000548e4) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0005d089) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0005d089) cell_ituss_key_t

0xf2f6,	// (0x0005c4ac) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0005c4b4) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0005c4bc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0005d094) cell_vkbss_key_3p_pane_g

0x91a7,	// (0x0005635d) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0005c4c4) popup_fep_char_pre_window_t1

0xe64f,	// (0x0005b805) main_ai5_sk_pane

0xed79,	// (0x0005bf2f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed85,	// (0x0005bf3b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6c4,	// (0x0005987a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9a,	// (0x0005bf50) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x0005d060) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda6,	// (0x0005bf5c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84f2,	// (0x000556a8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0005c4d2) main_ai5_sk_pane_g1

0x9ebd,	// (0x00057073) popup_query_code_window_g1

0xf18e,	// (0x0005c344) popup_fep_vkb_icf_pane

0xf1bb,	// (0x0005c371) popup_fep_vtchi_icf_pane

0xf325,	// (0x0005c4db) bg_icf_pane

0xf325,	// (0x0005c4db) list_vkb_icf_pane

0xf331,	// (0x0005c4e7) bg_icf_pane_cp01

0xf344,	// (0x0005c4fa) vtchi_icf_list_pane

0xf3a4,	// (0x0005c55a) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0005c55a) list_vkb_icf_pane_t1

0xf3c5,	// (0x0005c57b) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0005c57b) vtchi_icf_list_pane_t1

0xf178,	// (0x0005c32e) popup_fep_ituss_window_ParamLimits

0xf1bb,	// (0x0005c371) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e4,	// (0x0005c39a) ituss_keypad_pane_ParamLimits

0x758e,	// (0x00054744) ituss_sks_pane

0xf325,	// (0x0005c4db) bg_icf_pane_ParamLimits

0xf148,	// (0x0005c2fe) icf_edit_indi_pane_ParamLimits

0xf148,	// (0x0005c2fe) icf_edit_indi_pane

0xf325,	// (0x0005c4db) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0005c4e7) bg_icf_pane_cp01_ParamLimits

0xf163,	// (0x0005c319) icf_edit_indi_pane_cp01_ParamLimits

0xf163,	// (0x0005c319) icf_edit_indi_pane_cp01

0xf344,	// (0x0005c4fa) vtchi_query_pane

0xe4cb,	// (0x0005b681) icf_edit_indi_pane_g1_ParamLimits

0xe4cb,	// (0x0005b681) icf_edit_indi_pane_g1

0xf43a,	// (0x0005c5f0) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0005c5f0) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005d0bf) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005d0bf) icf_edit_indi_pane_g

0xf44e,	// (0x0005c604) icf_edit_indi_pane_t1

0xf3e3,	// (0x0005c599) bg_input_focus_pane_cp042

0x803c,	// (0x000551f2) vtchi_button_pane

0xf3ec,	// (0x0005c5a2) vtchi_query_pane_t1

0xf3fa,	// (0x0005c5b0) vtchi_query_pane_t2

0xf408,	// (0x0005c5be) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0005d0ae) vtchi_query_pane_t

0x46ee,	// (0x000518a4) bg_button_pane_cp13

0xf416,	// (0x0005c5cc) vtchi_button_pane_g1

0x7771,	// (0x00054927) ituss_sks_pane_g1

0x777c,	// (0x00054932) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0005d0b5) ituss_sks_pane_g

0xf41e,	// (0x0005c5d4) ituss_sks_pane_t1

0xf42c,	// (0x0005c5e2) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0005d0ba) ituss_sks_pane_t

0xbaa8,	// (0x00058c5e) indicator_nsta_pane_cp_g1

0xbab1,	// (0x00058c67) indicator_nsta_pane_cp_g2

0xbab9,	// (0x00058c6f) indicator_nsta_pane_cp_g3

0xbac1,	// (0x00058c77) indicator_nsta_pane_cp_g4

0xbab1,	// (0x00058c67) indicator_nsta_pane_cp_g5

0xbab9,	// (0x00058c6f) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0005cc32) indicator_nsta_pane_cp_g

0xe206,	// (0x0005b3bc) cell_graphic2_pane_t2_ParamLimits

0xe206,	// (0x0005b3bc) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0005cf4b) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0005cf4b) cell_graphic2_pane_t

0xe232,	// (0x0005b3e8) cell_graphic2_control_pane_t1

0x8c55,	// (0x00055e0b) signal_pane_g3_ParamLimits

0x8c55,	// (0x00055e0b) signal_pane_g3

0x8c67,	// (0x00055e1d) signal_pane_g4_ParamLimits

0x8c67,	// (0x00055e1d) signal_pane_g4

0xf132,	// (0x0005c2e8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf132,	// (0x0005c2e8) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0005c49a) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0005c49a) cell_ituss_key_pane_t1

0x9afa,	// (0x00056cb0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9afa,	// (0x00056cb0) form_field_data_wide_pane_vc_t2

0x9b0e,	// (0x00056cc4) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b0e,	// (0x00056cc4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0005c99a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005c99a) form_field_data_wide_pane_vc_t

0xb752,	// (0x00058908) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb752,	// (0x00058908) form_field_slider_wide_pane_vc_t3

0xb830,	// (0x000589e6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb830,	// (0x000589e6) form_field_popup_wide_pane_vc_t2

0xb847,	// (0x000589fd) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb847,	// (0x000589fd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0005cc21) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0005cc21) form_field_popup_wide_pane_vc_t

0x7348,	// (0x000544fe) aid_fshwr2_btn_pane_ParamLimits

0x7358,	// (0x0005450e) aid_fshwr2_syb_pane_ParamLimits

0x736c,	// (0x00054522) aid_fshwr2_txt_pane_ParamLimits

0x6b77,	// (0x00053d2d) fshwr2_bg_pane_ParamLimits

0x737c,	// (0x00054532) fshwr2_func_candi_pane_ParamLimits

0x73a0,	// (0x00054556) fshwr2_hwr_syb_pane_ParamLimits

0x73ba,	// (0x00054570) fshwr2_icf_pane_ParamLimits

0x82c3,	// (0x00055479) list_double_graphic_pane_vc_g4_ParamLimits

0x82c3,	// (0x00055479) list_double_graphic_pane_vc_g4

0x762d,	// (0x000547e3) cell_ituss_key_pane_g3_ParamLimits

0x762d,	// (0x000547e3) cell_ituss_key_pane_g3

0x775f,	// (0x00054915) cell_ituss_key_t5_ParamLimits

0x775f,	// (0x00054915) cell_ituss_key_t5

0xf1a4,	// (0x0005c35a) popup_fep_vkbss_window_ParamLimits

0xe659,	// (0x0005b80f) aid_cell_ai5_quarter

0xf44e,	// (0x0005c604) icf_edit_indi_pane_t1_ParamLimits

0x7bb1,	// (0x00054d67) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7bb1,	// (0x00054d67) aid_tch_indicator_popup_pane_cp2

0x7bc4,	// (0x00054d7a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7bc4,	// (0x00054d7a) aid_tch_query_popup_data_pane_cp2

0x9e65,	// (0x0005701b) aid_tch_query_popup_pane_ParamLimits

0x9e65,	// (0x0005701b) aid_tch_query_popup_pane

0x9e65,	// (0x0005701b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e65,	// (0x0005701b) aid_tch_query_popup_data_pane_cp1

0x94cb,	// (0x00056681) cell_fshwr2_syb_bg_pane_ParamLimits

0x74ba,	// (0x00054670) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x74ce,	// (0x00054684) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18e,	// (0x0005c344) popup_fep_vkb_icf_pane_ParamLimits

0x7188,	// (0x0005433e) bg_popup_fep_char_preview_window_g10

0xe796,	// (0x0005b94c) cell_ai5_widget_pane_g11_ParamLimits

0xe796,	// (0x0005b94c) cell_ai5_widget_pane_g11

0xe7a2,	// (0x0005b958) cell_ai5_widget_pane_g12_ParamLimits

0xe7a2,	// (0x0005b958) cell_ai5_widget_pane_g12

0xe7ae,	// (0x0005b964) cell_ai5_widget_pane_g13_ParamLimits

0xe7ae,	// (0x0005b964) cell_ai5_widget_pane_g13

0xe8dd,	// (0x0005ba93) cell_ai5_widget_pane_t11_ParamLimits

0xe8dd,	// (0x0005ba93) cell_ai5_widget_pane_t11

0xe8ef,	// (0x0005baa5) cell_ai5_widget_pane_t12_ParamLimits

0xe8ef,	// (0x0005baa5) cell_ai5_widget_pane_t12

0x7639,	// (0x000547ef) cell_ituss_key_pane_g4_ParamLimits

0x7639,	// (0x000547ef) cell_ituss_key_pane_g4

0x7655,	// (0x0005480b) cell_ituss_key_pane_g5_ParamLimits

0x7655,	// (0x0005480b) cell_ituss_key_pane_g5

0x7671,	// (0x00054827) cell_ituss_key_pane_g6_ParamLimits

0x7671,	// (0x00054827) cell_ituss_key_pane_g6

0x99f5,	// (0x00056bab) bg_icf_pane_g1

0xf34c,	// (0x0005c502) bg_icf_pane_g2

0xf358,	// (0x0005c50e) bg_icf_pane_g3

0xf362,	// (0x0005c518) bg_icf_pane_g4

0xf36e,	// (0x0005c524) bg_icf_pane_g5

0xf378,	// (0x0005c52e) bg_icf_pane_g6

0xf384,	// (0x0005c53a) bg_icf_pane_g7

0xf38e,	// (0x0005c544) bg_icf_pane_g8

0xf39a,	// (0x0005c550) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0005d09b) bg_icf_pane_g

0xf1d1,	// (0x0005c387) popup_hyb_candi_window_ParamLimits

0xf1d1,	// (0x0005c387) popup_hyb_candi_window

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp01_ParamLimits

0x9a69,	// (0x00056c1f) bg_popup_sub_pane_cp01

0xf467,	// (0x0005c61d) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0005c61d) entry_hyb_candi_pane

0xf476,	// (0x0005c62c) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0005c62c) grid_hyb_candi_pane

0xf48b,	// (0x0005c641) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0005c641) grid_hyb_phrase_pane

0xf49a,	// (0x0005c650) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0005c650) cell_hyb_candi_pane

0xf4bd,	// (0x0005c673) cell_hyb_candi_scroll_pane

0x8b7b,	// (0x00055d31) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005c67c) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0005c68a) cell_hyb_phrase_pane

0x8b7b,	// (0x00055d31) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0005c693) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0005c6a1) entry_hyb_candi_pane_t1

0x91a7,	// (0x0005635d) input_focus_pane_cp06

0xf4f9,	// (0x0005c6af) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0005c6b7) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0005c6bf) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0005c6c7) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0005c6cf) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0005c6d7) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
