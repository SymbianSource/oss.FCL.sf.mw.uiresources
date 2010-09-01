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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005632e };

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
0x51be,	// (0x0005b4ec) Screen

0x51ca,	// (0x0005b4f8) application_window_ParamLimits

0x51ca,	// (0x0005b4f8) application_window

0xdfe6,	// (0x00064314) screen_g1

0x5226,	// (0x0005b554) area_bottom_pane_ParamLimits

0x5226,	// (0x0005b554) area_bottom_pane

0x52e6,	// (0x0005b614) area_top_pane_ParamLimits

0x52e6,	// (0x0005b614) area_top_pane

0x5384,	// (0x0005b6b2) main_pane_ParamLimits

0x5384,	// (0x0005b6b2) main_pane

0xdff0,	// (0x0006431e) misc_graphics

0x73f4,	// (0x0005d722) battery_pane_ParamLimits

0x73f4,	// (0x0005d722) battery_pane

0x9884,	// (0x0005fbb2) bg_status_flat_pane_g8

0x988c,	// (0x0005fbba) bg_status_flat_pane_g9

0x74bc,	// (0x0005d7ea) context_pane_ParamLimits

0x74bc,	// (0x0005d7ea) context_pane

0x75d2,	// (0x0005d900) navi_pane_ParamLimits

0x75d2,	// (0x0005d900) navi_pane

0x8df8,	// (0x0005f126) signal_pane_ParamLimits

0x8df8,	// (0x0005f126) signal_pane

0x0008,

0xf84f,	// (0x00065b7d) bg_status_flat_pane_g

0x8e65,	// (0x0005f193) status_pane_g1_ParamLimits

0x8e65,	// (0x0005f193) status_pane_g1

0x8e79,	// (0x0005f1a7) status_pane_g2_ParamLimits

0x8e79,	// (0x0005f1a7) status_pane_g2

0x8e85,	// (0x0005f1b3) status_pane_g3_ParamLimits

0x8e85,	// (0x0005f1b3) status_pane_g3

0x0004,

0xf776,	// (0x00065aa4) status_pane_g_ParamLimits

0xf776,	// (0x00065aa4) status_pane_g

0x8eb9,	// (0x0005f1e7) title_pane_ParamLimits

0x8eb9,	// (0x0005f1e7) title_pane

0x8ef6,	// (0x0005f224) uni_indicator_pane_ParamLimits

0x8ef6,	// (0x0005f224) uni_indicator_pane

0x1793,	// (0x00057ac1) bg_list_pane_ParamLimits

0x1793,	// (0x00057ac1) bg_list_pane

0x6dab,	// (0x0005d0d9) find_pane

0xf51d,	// (0x0006584b) listscroll_app_pane_ParamLimits

0xf51d,	// (0x0006584b) listscroll_app_pane

0x17b3,	// (0x00057ae1) listscroll_form_pane

0x6db3,	// (0x0005d0e1) listscroll_gen_pane_ParamLimits

0x6db3,	// (0x0005d0e1) listscroll_gen_pane

0x6dc7,	// (0x0005d0f5) listscroll_set_pane

0x625b,	// (0x0005c589) main_idle_act_pane

0x1647,	// (0x00057975) main_idle_trad_pane

0x1647,	// (0x00057975) main_list_empty_pane

0xf51d,	// (0x0006584b) main_midp_pane

0x17cd,	// (0x00057afb) main_pane_g1_ParamLimits

0x17cd,	// (0x00057afb) main_pane_g1

0x6ddd,	// (0x0005d10b) popup_ai_message_window_ParamLimits

0x6ddd,	// (0x0005d10b) popup_ai_message_window

0x6e81,	// (0x0005d1af) popup_fep_china_uni_window_ParamLimits

0x6e81,	// (0x0005d1af) popup_fep_china_uni_window

0x6edb,	// (0x0005d209) popup_fep_japan_candidate_window_ParamLimits

0x6edb,	// (0x0005d209) popup_fep_japan_candidate_window

0x6ef9,	// (0x0005d227) popup_fep_japan_predictive_window_ParamLimits

0x6ef9,	// (0x0005d227) popup_fep_japan_predictive_window

0x6f29,	// (0x0005d257) popup_find_window

0x6f36,	// (0x0005d264) popup_grid_graphic_window_ParamLimits

0x6f36,	// (0x0005d264) popup_grid_graphic_window

0x6f60,	// (0x0005d28e) popup_large_graphic_colour_window

0x6f86,	// (0x0005d2b4) popup_menu_window_ParamLimits

0x6f86,	// (0x0005d2b4) popup_menu_window

0x7142,	// (0x0005d470) popup_note_image_window

0x712e,	// (0x0005d45c) popup_note_wait_window_ParamLimits

0x712e,	// (0x0005d45c) popup_note_wait_window

0x712e,	// (0x0005d45c) popup_note_window_ParamLimits

0x712e,	// (0x0005d45c) popup_note_window

0x7198,	// (0x0005d4c6) popup_query_code_window_ParamLimits

0x7198,	// (0x0005d4c6) popup_query_code_window

0x71ac,	// (0x0005d4da) popup_query_data_code_window_ParamLimits

0x71ac,	// (0x0005d4da) popup_query_data_code_window

0x71c9,	// (0x0005d4f7) popup_query_data_window_ParamLimits

0x71c9,	// (0x0005d4f7) popup_query_data_window

0x71e5,	// (0x0005d513) popup_query_sat_info_window_ParamLimits

0x71e5,	// (0x0005d513) popup_query_sat_info_window

0x721e,	// (0x0005d54c) popup_snote_single_graphic_window_ParamLimits

0x721e,	// (0x0005d54c) popup_snote_single_graphic_window

0x721e,	// (0x0005d54c) popup_snote_single_text_window_ParamLimits

0x721e,	// (0x0005d54c) popup_snote_single_text_window

0x7233,	// (0x0005d561) popup_sub_window_general

0x7363,	// (0x0005d691) popup_window_general_ParamLimits

0x7363,	// (0x0005d691) popup_window_general

0x7378,	// (0x0005d6a6) power_save_pane

0x6c16,	// (0x0005cf44) control_pane_g1_ParamLimits

0x6c16,	// (0x0005cf44) control_pane_g1

0x6c3d,	// (0x0005cf6b) control_pane_g2_ParamLimits

0x6c3d,	// (0x0005cf6b) control_pane_g2

0x177d,	// (0x00057aab) control_pane_g3_ParamLimits

0x177d,	// (0x00057aab) control_pane_g3

0x0007,

0xf75e,	// (0x00065a8c) control_pane_g_ParamLimits

0xf75e,	// (0x00065a8c) control_pane_g

0x6cae,	// (0x0005cfdc) control_pane_t1_ParamLimits

0x6cae,	// (0x0005cfdc) control_pane_t1

0x6d02,	// (0x0005d030) control_pane_t2_ParamLimits

0x6d02,	// (0x0005d030) control_pane_t2

0x0002,

0xf76f,	// (0x00065a9d) control_pane_t_ParamLimits

0xf76f,	// (0x00065a9d) control_pane_t

0x6b6f,	// (0x0005ce9d) navi_navi_volume_pane_cp1

0x6b77,	// (0x0005cea5) status_small_icon_pane

0x1749,	// (0x00057a77) status_small_pane_g1_ParamLimits

0x1749,	// (0x00057a77) status_small_pane_g1

0x6b7f,	// (0x0005cead) status_small_pane_g2_ParamLimits

0x6b7f,	// (0x0005cead) status_small_pane_g2

0x6b8b,	// (0x0005ceb9) status_small_pane_g3_ParamLimits

0x6b8b,	// (0x0005ceb9) status_small_pane_g3

0x6b97,	// (0x0005cec5) status_small_pane_g4_ParamLimits

0x6b97,	// (0x0005cec5) status_small_pane_g4

0x6ba3,	// (0x0005ced1) status_small_pane_g5_ParamLimits

0x6ba3,	// (0x0005ced1) status_small_pane_g5

0x6bb1,	// (0x0005cedf) status_small_pane_g6_ParamLimits

0x6bb1,	// (0x0005cedf) status_small_pane_g6

0x0007,

0xf74d,	// (0x00065a7b) status_small_pane_g_ParamLimits

0xf74d,	// (0x00065a7b) status_small_pane_g

0x6be0,	// (0x0005cf0e) status_small_pane_t1

0x6c02,	// (0x0005cf30) status_small_wait_pane_ParamLimits

0x6c02,	// (0x0005cf30) status_small_wait_pane

0x662e,	// (0x0005c95c) aid_levels_signal_ParamLimits

0x662e,	// (0x0005c95c) aid_levels_signal

0x6640,	// (0x0005c96e) signal_pane_g1_ParamLimits

0x6640,	// (0x0005c96e) signal_pane_g1

0x6655,	// (0x0005c983) signal_pane_g2_ParamLimits

0x6655,	// (0x0005c983) signal_pane_g2

0x0003,

0xf6de,	// (0x00065a0c) signal_pane_g_ParamLimits

0xf6de,	// (0x00065a0c) signal_pane_g

0x1262,	// (0x00057590) context_pane_g1

0x55c5,	// (0x0005b8f3) title_pane_g1

0x55ef,	// (0x0005b91d) title_pane_t1

0xe006,	// (0x00064334) title_pane_t2

0xe02c,	// (0x0006435a) title_pane_t3

0x0002,

0xf532,	// (0x00065860) title_pane_t

0x8f0e,	// (0x0005f23c) aid_levels_battery_ParamLimits

0x8f0e,	// (0x0005f23c) aid_levels_battery

0x8f22,	// (0x0005f250) battery_pane_g1_ParamLimits

0x8f22,	// (0x0005f250) battery_pane_g1

0x8f38,	// (0x0005f266) battery_pane_g2_ParamLimits

0x8f38,	// (0x0005f266) battery_pane_g2

0x0001,

0xf781,	// (0x00065aaf) battery_pane_g_ParamLimits

0xf781,	// (0x00065aaf) battery_pane_g

0xa1a8,	// (0x000604d6) uni_indicator_pane_g1

0xa1bb,	// (0x000604e9) uni_indicator_pane_g2

0xa1cd,	// (0x000604fb) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00065c25) uni_indicator_pane_g

0x150b,	// (0x00057839) navi_icon_pane_ParamLimits

0x150b,	// (0x00057839) navi_icon_pane

0x1454,	// (0x00057782) navi_midp_pane

0x1527,	// (0x00057855) navi_navi_pane

0x1531,	// (0x0005785f) navi_text_pane_ParamLimits

0x1531,	// (0x0005785f) navi_text_pane

0xdfe6,	// (0x00064314) status_small_wait_pane_g1

0xe27d,	// (0x000645ab) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00065c20) status_small_wait_pane_g

0x9ecf,	// (0x000601fd) navi_navi_icon_text_pane

0x9ed7,	// (0x00060205) navi_navi_pane_g1_ParamLimits

0x9ed7,	// (0x00060205) navi_navi_pane_g1

0x9ee9,	// (0x00060217) navi_navi_pane_g2_ParamLimits

0x9ee9,	// (0x00060217) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00065bee) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00065bee) navi_navi_pane_g

0x9efb,	// (0x00060229) navi_navi_tabs_pane

0x9f04,	// (0x00060232) navi_navi_text_pane

0x9ecf,	// (0x000601fd) navi_navi_volume_pane

0x9eab,	// (0x000601d9) navi_text_pane_t1

0x9e9f,	// (0x000601cd) navi_icon_pane_g1

0x9df2,	// (0x00060120) navi_navi_text_pane_t1

0x7900,	// (0x0005dc2e) navi_navi_volume_pane_g1

0x7908,	// (0x0005dc36) volume_small_pane

0x9d58,	// (0x00060086) navi_navi_icon_text_pane_g1

0x9d60,	// (0x0006008e) navi_navi_icon_text_pane_t1

0x1527,	// (0x00057855) navi_tabs_2_long_pane

0x1527,	// (0x00057855) navi_tabs_2_pane

0x1527,	// (0x00057855) navi_tabs_3_long_pane

0x1527,	// (0x00057855) navi_tabs_3_pane

0x1527,	// (0x00057855) navi_tabs_4_pane

0x78e0,	// (0x0005dc0e) tabs_2_active_pane_ParamLimits

0x78e0,	// (0x0005dc0e) tabs_2_active_pane

0x78f0,	// (0x0005dc1e) tabs_2_passive_pane_ParamLimits

0x78f0,	// (0x0005dc1e) tabs_2_passive_pane

0x78ae,	// (0x0005dbdc) tabs_3_active_pane_ParamLimits

0x78ae,	// (0x0005dbdc) tabs_3_active_pane

0x78be,	// (0x0005dbec) tabs_3_passive_pane_ParamLimits

0x78be,	// (0x0005dbec) tabs_3_passive_pane

0x78cf,	// (0x0005dbfd) tabs_3_passive_pane_cp_ParamLimits

0x78cf,	// (0x0005dbfd) tabs_3_passive_pane_cp

0x786a,	// (0x0005db98) tabs_4_active_pane_ParamLimits

0x786a,	// (0x0005db98) tabs_4_active_pane

0x787b,	// (0x0005dba9) tabs_4_passive_pane_ParamLimits

0x787b,	// (0x0005dba9) tabs_4_passive_pane

0x788c,	// (0x0005dbba) tabs_4_passive_pane_cp_ParamLimits

0x788c,	// (0x0005dbba) tabs_4_passive_pane_cp

0x789d,	// (0x0005dbcb) tabs_4_passive_pane_cp2_ParamLimits

0x789d,	// (0x0005dbcb) tabs_4_passive_pane_cp2

0x7846,	// (0x0005db74) tabs_2_long_active_pane_ParamLimits

0x7846,	// (0x0005db74) tabs_2_long_active_pane

0x7858,	// (0x0005db86) tabs_2_long_passive_pane_ParamLimits

0x7858,	// (0x0005db86) tabs_2_long_passive_pane

0x7801,	// (0x0005db2f) tabs_3_long_active_pane_ParamLimits

0x7801,	// (0x0005db2f) tabs_3_long_active_pane

0x781a,	// (0x0005db48) tabs_3_long_passive_pane_ParamLimits

0x781a,	// (0x0005db48) tabs_3_long_passive_pane

0x782d,	// (0x0005db5b) tabs_3_long_passive_pane_cp_ParamLimits

0x782d,	// (0x0005db5b) tabs_3_long_passive_pane_cp

0x77a7,	// (0x0005dad5) volume_small_pane_g1

0x77b0,	// (0x0005dade) volume_small_pane_g2

0x77b9,	// (0x0005dae7) volume_small_pane_g3

0x77c2,	// (0x0005daf0) volume_small_pane_g4

0x77cb,	// (0x0005daf9) volume_small_pane_g5

0x77d4,	// (0x0005db02) volume_small_pane_g6

0x77dd,	// (0x0005db0b) volume_small_pane_g7

0x77e6,	// (0x0005db14) volume_small_pane_g8

0x77ef,	// (0x0005db1d) volume_small_pane_g9

0x77f8,	// (0x0005db26) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00065bba) volume_small_pane_g

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp2_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp2

0x5657,	// (0x0005b985) tabs_3_active_pane_g1

0x565f,	// (0x0005b98d) tabs_3_active_pane_t1

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp2_ParamLimits

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp2

0x5657,	// (0x0005b985) tabs_3_passive_pane_g1

0x565f,	// (0x0005b98d) tabs_3_passive_pane_t1

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp3_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp3

0x5671,	// (0x0005b99f) tabs_4_active_pane_g1

0x5679,	// (0x0005b9a7) tabs_4_active_pane_t1

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp3_ParamLimits

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp3

0x5671,	// (0x0005b99f) tabs_4_1_passive_pane_g1

0x5679,	// (0x0005b9a7) tabs_4_1_passive_pane_t1

0xf51d,	// (0x0006584b) list_highlight_pane_cp2

0xa410,	// (0x0006073e) list_set_pane_ParamLimits

0xa410,	// (0x0006073e) list_set_pane

0xa4b2,	// (0x000607e0) main_pane_set_t1_ParamLimits

0xa4b2,	// (0x000607e0) main_pane_set_t1

0xa4d2,	// (0x00060800) main_pane_set_t2_ParamLimits

0xa4d2,	// (0x00060800) main_pane_set_t2

0xa4e6,	// (0x00060814) main_pane_set_t3_ParamLimits

0xa4e6,	// (0x00060814) main_pane_set_t3

0xa4f8,	// (0x00060826) main_pane_set_t4_ParamLimits

0xa4f8,	// (0x00060826) main_pane_set_t4

0x0003,

0xf95c,	// (0x00065c8a) main_pane_set_t_ParamLimits

0xf95c,	// (0x00065c8a) main_pane_set_t

0xa50a,	// (0x00060838) setting_code_pane

0xa516,	// (0x00060844) setting_slider_graphic_pane

0xa516,	// (0x00060844) setting_slider_pane

0xa516,	// (0x00060844) setting_text_pane

0xa516,	// (0x00060844) setting_volume_pane

0x568b,	// (0x0005b9b9) volume_set_pane

0xe03e,	// (0x0006436c) bg_set_opt_pane_cp

0x5693,	// (0x0005b9c1) setting_slider_pane_t1

0x56ac,	// (0x0005b9da) setting_slider_pane_t2

0x56c6,	// (0x0005b9f4) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00065867) setting_slider_pane_t

0x56de,	// (0x0005ba0c) slider_set_pane

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp2

0xe04c,	// (0x0006437a) setting_slider_graphic_pane_g1

0x56f4,	// (0x0005ba22) setting_slider_graphic_pane_t1

0x5704,	// (0x0005ba32) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006586e) setting_slider_graphic_pane_t

0x5714,	// (0x0005ba42) slider_set_pane_cp

0xdff0,	// (0x0006431e) input_focus_pane_cp1

0xa3cf,	// (0x000606fd) list_set_text_pane

0xdfe6,	// (0x00064314) setting_text_pane_g1

0xdff0,	// (0x0006431e) input_focus_pane_cp2

0xdfe6,	// (0x00064314) setting_code_pane_g1

0xe055,	// (0x00064383) setting_code_pane_t1

0x3a97,	// (0x00059dc5) set_text_pane_t1_ParamLimits

0x3a97,	// (0x00059dc5) set_text_pane_t1

0xf14c,	// (0x0006547a) set_opt_bg_pane_g1

0xf154,	// (0x00065482) set_opt_bg_pane_g2

0xa3a9,	// (0x000606d7) set_opt_bg_pane_g3

0xf164,	// (0x00065492) set_opt_bg_pane_g4

0xf16c,	// (0x0006549a) set_opt_bg_pane_g5

0xf174,	// (0x000654a2) set_opt_bg_pane_g6

0xa3b3,	// (0x000606e1) set_opt_bg_pane_g7

0xa3bb,	// (0x000606e9) set_opt_bg_pane_g8

0xa3c5,	// (0x000606f3) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00065c77) set_opt_bg_pane_g

0xa39c,	// (0x000606ca) slider_set_pane_g1

0x7987,	// (0x0005dcb5) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00065c68) slider_set_pane_g

0x7911,	// (0x0005dc3f) volume_set_pane_g1

0x7919,	// (0x0005dc47) volume_set_pane_g2

0x7921,	// (0x0005dc4f) volume_set_pane_g3

0x7929,	// (0x0005dc57) volume_set_pane_g4

0x7931,	// (0x0005dc5f) volume_set_pane_g5

0x7939,	// (0x0005dc67) volume_set_pane_g6

0x7941,	// (0x0005dc6f) volume_set_pane_g7

0x7949,	// (0x0005dc77) volume_set_pane_g8

0x7951,	// (0x0005dc7f) volume_set_pane_g9

0x7959,	// (0x0005dc87) volume_set_pane_g10

0x0009,

0xf912,	// (0x00065c40) volume_set_pane_g

0x571c,	// (0x0005ba4a) indicator_pane_ParamLimits

0x571c,	// (0x0005ba4a) indicator_pane

0x5728,	// (0x0005ba56) main_idle_pane_g2_ParamLimits

0x5728,	// (0x0005ba56) main_idle_pane_g2

0x5750,	// (0x0005ba7e) main_pane_idle_g1_ParamLimits

0x5750,	// (0x0005ba7e) main_pane_idle_g1

0xe063,	// (0x00064391) popup_clock_digital_analogue_window_ParamLimits

0xe063,	// (0x00064391) popup_clock_digital_analogue_window

0x575d,	// (0x0005ba8b) soft_indicator_pane_ParamLimits

0x575d,	// (0x0005ba8b) soft_indicator_pane

0x5769,	// (0x0005ba97) wallpaper_pane_ParamLimits

0x5769,	// (0x0005ba97) wallpaper_pane

0xdfe6,	// (0x00064314) wallpaper_pane_g1

0x5775,	// (0x0005baa3) indicator_pane_g1_ParamLimits

0x5775,	// (0x0005baa3) indicator_pane_g1

0xa82f,	// (0x00060b5d) navi_navi_icon_text_pane_srt_g1

0xe091,	// (0x000643bf) soft_indicator_pane_t1

0xe0ab,	// (0x000643d9) aid_ps_area_pane

0x5781,	// (0x0005baaf) aid_ps_clock_pane

0xe0bc,	// (0x000643ea) aid_ps_indicator_pane

0xe0c8,	// (0x000643f6) indicator_ps_pane_ParamLimits

0xe0c8,	// (0x000643f6) indicator_ps_pane

0xe0d7,	// (0x00064405) power_save_pane_g1_ParamLimits

0xe0d7,	// (0x00064405) power_save_pane_g1

0xe0e3,	// (0x00064411) power_save_pane_g2_ParamLimits

0xe0e3,	// (0x00064411) power_save_pane_g2

0x51da,	// (0x0005b508) aid_navinavi_width_pane

0xe0ab,	// (0x000643d9) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00065873) power_save_pane_g_ParamLimits

0xf545,	// (0x00065873) power_save_pane_g

0xe0f1,	// (0x0006441f) power_save_pane_t1_ParamLimits

0xe0f1,	// (0x0006441f) power_save_pane_t1

0x5781,	// (0x0005baaf) aid_ps_clock_pane_ParamLimits

0xe0bc,	// (0x000643ea) aid_ps_indicator_pane_ParamLimits

0xe103,	// (0x00064431) power_save_pane_t4_ParamLimits

0xe103,	// (0x00064431) power_save_pane_t4

0x0001,

0xf54a,	// (0x00065878) power_save_pane_t_ParamLimits

0xf54a,	// (0x00065878) power_save_pane_t

0xe12d,	// (0x0006445b) power_save_t3_ParamLimits

0xe12d,	// (0x0006445b) power_save_t3

0xe118,	// (0x00064446) power_save_t2_ParamLimits

0xe118,	// (0x00064446) power_save_t2

0xe142,	// (0x00064470) indicator_ps_pane_g1

0x578f,	// (0x0005babd) ai_gene_pane_ParamLimits

0x578f,	// (0x0005babd) ai_gene_pane

0x579b,	// (0x0005bac9) ai_links_pane_ParamLimits

0x579b,	// (0x0005bac9) ai_links_pane

0x57a7,	// (0x0005bad5) indicator_pane_cp1_ParamLimits

0x57a7,	// (0x0005bad5) indicator_pane_cp1

0x57b3,	// (0x0005bae1) main_pane_idle_g1_cp_ParamLimits

0x57b3,	// (0x0005bae1) main_pane_idle_g1_cp

0x57bf,	// (0x0005baed) popup_ai_links_title_window

0x57c8,	// (0x0005baf6) soft_indicator_pane_cp1_ParamLimits

0x57c8,	// (0x0005baf6) soft_indicator_pane_cp1

0xa196,	// (0x000604c4) ai_links_pane_g1

0xa19f,	// (0x000604cd) grid_ai_links_pane

0xa179,	// (0x000604a7) ai_gene_pane_1

0xa184,	// (0x000604b2) ai_gene_pane_2

0xa18d,	// (0x000604bb) list_highlight_pane_cp4

0xa15d,	// (0x0006048b) cell_ai_link_pane_ParamLimits

0xa15d,	// (0x0006048b) cell_ai_link_pane

0xa155,	// (0x00060483) cell_ai_link_pane_g1

0xe27d,	// (0x000645ab) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00065c1b) cell_ai_link_pane_g

0xdff0,	// (0x0006431e) grid_highlight_cp2

0xdff0,	// (0x0006431e) bg_popup_sub_pane_cp1

0xe159,	// (0x00064487) popup_ai_links_title_window_t1

0xa0a5,	// (0x000603d3) ai_gene_pane_1_g1_ParamLimits

0xa0a5,	// (0x000603d3) ai_gene_pane_1_g1

0xa0b1,	// (0x000603df) ai_gene_pane_1_g2_ParamLimits

0xa0b1,	// (0x000603df) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00065c11) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00065c11) ai_gene_pane_1_g

0xa0be,	// (0x000603ec) ai_gene_pane_1_t1_ParamLimits

0xa0be,	// (0x000603ec) ai_gene_pane_1_t1

0xa0f2,	// (0x00060420) grid_ai_soft_ind_pane

0xa090,	// (0x000603be) ai_gene_pane_2_t1_ParamLimits

0xa090,	// (0x000603be) ai_gene_pane_2_t1

0x57d4,	// (0x0005bb02) main_pane_empty_t1_ParamLimits

0x57d4,	// (0x0005bb02) main_pane_empty_t1

0x57ec,	// (0x0005bb1a) main_pane_empty_t2_ParamLimits

0x57ec,	// (0x0005bb1a) main_pane_empty_t2

0x5801,	// (0x0005bb2f) main_pane_empty_t3_ParamLimits

0x5801,	// (0x0005bb2f) main_pane_empty_t3

0x5813,	// (0x0005bb41) main_pane_empty_t4_ParamLimits

0x5813,	// (0x0005bb41) main_pane_empty_t4

0x5825,	// (0x0005bb53) main_pane_empty_t5_ParamLimits

0x5825,	// (0x0005bb53) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006587d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006587d) main_pane_empty_t

0xf1d1,	// (0x000654ff) bg_popup_window_pane_ParamLimits

0xf1d1,	// (0x000654ff) bg_popup_window_pane

0x9e00,	// (0x0006012e) find_popup_pane_cp2_ParamLimits

0x9e00,	// (0x0006012e) find_popup_pane_cp2

0x9e0c,	// (0x0006013a) heading_pane_ParamLimits

0x9e0c,	// (0x0006013a) heading_pane

0xdff0,	// (0x0006431e) bg_popup_sub_pane

0x9d7a,	// (0x000600a8) bg_popup_window_pane_g1_ParamLimits

0x9d7a,	// (0x000600a8) bg_popup_window_pane_g1

0x9d86,	// (0x000600b4) bg_popup_window_pane_g2_ParamLimits

0x9d86,	// (0x000600b4) bg_popup_window_pane_g2

0x9d92,	// (0x000600c0) bg_popup_window_pane_g3_ParamLimits

0x9d92,	// (0x000600c0) bg_popup_window_pane_g3

0x9d9e,	// (0x000600cc) bg_popup_window_pane_g4_ParamLimits

0x9d9e,	// (0x000600cc) bg_popup_window_pane_g4

0x9daa,	// (0x000600d8) bg_popup_window_pane_g5_ParamLimits

0x9daa,	// (0x000600d8) bg_popup_window_pane_g5

0x9db6,	// (0x000600e4) bg_popup_window_pane_g6_ParamLimits

0x9db6,	// (0x000600e4) bg_popup_window_pane_g6

0x9dc2,	// (0x000600f0) bg_popup_window_pane_g7_ParamLimits

0x9dc2,	// (0x000600f0) bg_popup_window_pane_g7

0x9dce,	// (0x000600fc) bg_popup_window_pane_g8_ParamLimits

0x9dce,	// (0x000600fc) bg_popup_window_pane_g8

0x9dda,	// (0x00060108) bg_popup_window_pane_g9_ParamLimits

0x9dda,	// (0x00060108) bg_popup_window_pane_g9

0x9de6,	// (0x00060114) bg_popup_window_pane_g10_ParamLimits

0x9de6,	// (0x00060114) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00065bd9) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00065bd9) bg_popup_window_pane_g

0x9d0f,	// (0x0006003d) bg_popup_heading_pane_ParamLimits

0x9d0f,	// (0x0006003d) bg_popup_heading_pane

0x7acb,	// (0x0005ddf9) tabs_4_passive_pane_cp_srt_ParamLimits

0x7acb,	// (0x0005ddf9) tabs_4_passive_pane_cp_srt

0x7add,	// (0x0005de0b) tabs_4_passive_pane_srt_ParamLimits

0x9d23,	// (0x00060051) heading_pane_g2

0x7add,	// (0x0005de0b) tabs_4_passive_pane_srt

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp3_srt_ParamLimits

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp3_srt

0x9d2b,	// (0x00060059) heading_pane_t1_ParamLimits

0x9d2b,	// (0x00060059) heading_pane_t1

0x9d42,	// (0x00060070) heading_pane_t2_ParamLimits

0x9d42,	// (0x00060070) heading_pane_t2

0x0001,

0xf8a6,	// (0x00065bd4) heading_pane_t_ParamLimits

0xf8a6,	// (0x00065bd4) heading_pane_t

0x984c,	// (0x0005fb7a) bg_popup_heading_pane_g1

0x98fb,	// (0x0005fc29) bg_popup_heading_pane_g2

0x9905,	// (0x0005fc33) bg_popup_heading_pane_g3

0x990f,	// (0x0005fc3d) bg_popup_heading_pane_g4

0x9919,	// (0x0005fc47) bg_popup_heading_pane_g5

0x9923,	// (0x0005fc51) bg_popup_heading_pane_g6

0x992b,	// (0x0005fc59) bg_popup_heading_pane_g7

0x9933,	// (0x0005fc61) bg_popup_heading_pane_g8

0x993d,	// (0x0005fc6b) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00065b90) bg_popup_heading_pane_g

0x900d,	// (0x0005f33b) bg_popup_sub_pane_g1

0x901d,	// (0x0005f34b) bg_popup_sub_pane_g2

0x9015,	// (0x0005f343) bg_popup_sub_pane_g3

0x902d,	// (0x0005f35b) bg_popup_sub_pane_g4

0x9025,	// (0x0005f353) bg_popup_sub_pane_g5

0x9035,	// (0x0005f363) bg_popup_sub_pane_g6

0x903d,	// (0x0005f36b) bg_popup_sub_pane_g7

0x904d,	// (0x0005f37b) bg_popup_sub_pane_g8

0x9045,	// (0x0005f373) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00065b6a) bg_popup_sub_pane_g

0xe168,	// (0x00064496) bg_popup_window_pane_cp5_ParamLimits

0xe168,	// (0x00064496) bg_popup_window_pane_cp5

0xe184,	// (0x000644b2) popup_note_window_g1_ParamLimits

0xe184,	// (0x000644b2) popup_note_window_g1

0xe190,	// (0x000644be) popup_note_window_t1_ParamLimits

0xe190,	// (0x000644be) popup_note_window_t1

0xe1a6,	// (0x000644d4) popup_note_window_t2_ParamLimits

0xe1a6,	// (0x000644d4) popup_note_window_t2

0xe1bc,	// (0x000644ea) popup_note_window_t3_ParamLimits

0xe1bc,	// (0x000644ea) popup_note_window_t3

0xe1d2,	// (0x00064500) popup_note_window_t4_ParamLimits

0xe1d2,	// (0x00064500) popup_note_window_t4

0xe1fa,	// (0x00064528) popup_note_window_t5_ParamLimits

0xe1fa,	// (0x00064528) popup_note_window_t5

0x0004,

0xf55a,	// (0x00065888) popup_note_window_t_ParamLimits

0xf55a,	// (0x00065888) popup_note_window_t

0xe21e,	// (0x0006454c) bg_popup_window_pane_cp6_ParamLimits

0xe21e,	// (0x0006454c) bg_popup_window_pane_cp6

0x97c8,	// (0x0005faf6) popup_note_image_window_g1_ParamLimits

0x97c8,	// (0x0005faf6) popup_note_image_window_g1

0x97d4,	// (0x0005fb02) popup_note_image_window_g2_ParamLimits

0x97d4,	// (0x0005fb02) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00065b5e) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00065b5e) popup_note_image_window_g

0x97ed,	// (0x0005fb1b) popup_note_image_window_t1_ParamLimits

0x97ed,	// (0x0005fb1b) popup_note_image_window_t1

0x9806,	// (0x0005fb34) popup_note_image_window_t2_ParamLimits

0x9806,	// (0x0005fb34) popup_note_image_window_t2

0x981f,	// (0x0005fb4d) popup_note_image_window_t3_ParamLimits

0x981f,	// (0x0005fb4d) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00065b63) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00065b63) popup_note_image_window_t

0x9691,	// (0x0005f9bf) bg_popup_window_pane_cp7_ParamLimits

0x9691,	// (0x0005f9bf) bg_popup_window_pane_cp7

0x96c1,	// (0x0005f9ef) popup_note_wait_window_g1_ParamLimits

0x96c1,	// (0x0005f9ef) popup_note_wait_window_g1

0x96cd,	// (0x0005f9fb) popup_note_wait_window_g2_ParamLimits

0x96cd,	// (0x0005f9fb) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00065b4c) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00065b4c) popup_note_wait_window_g

0x96e5,	// (0x0005fa13) popup_note_wait_window_t1_ParamLimits

0x96e5,	// (0x0005fa13) popup_note_wait_window_t1

0x970c,	// (0x0005fa3a) popup_note_wait_window_t2_ParamLimits

0x970c,	// (0x0005fa3a) popup_note_wait_window_t2

0x9729,	// (0x0005fa57) popup_note_wait_window_t3_ParamLimits

0x9729,	// (0x0005fa57) popup_note_wait_window_t3

0x973c,	// (0x0005fa6a) popup_note_wait_window_t4_ParamLimits

0x973c,	// (0x0005fa6a) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00065b53) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00065b53) popup_note_wait_window_t

0x9761,	// (0x0005fa8f) wait_bar_pane_ParamLimits

0x9761,	// (0x0005fa8f) wait_bar_pane

0xdff0,	// (0x0006431e) wait_anim_pane

0xdff0,	// (0x0006431e) wait_border_pane

0xdfe6,	// (0x00064314) wait_anim_pane_g1

0xdfe6,	// (0x00064314) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00065a07) wait_anim_pane_g

0x963d,	// (0x0005f96b) wait_border_pane_g1

0x9648,	// (0x0005f976) wait_border_pane_g2

0x9651,	// (0x0005f97f) wait_border_pane_g3

0x0002,

0xf817,	// (0x00065b45) wait_border_pane_g

0x94a8,	// (0x0005f7d6) bg_popup_window_pane_cp16_ParamLimits

0x94a8,	// (0x0005f7d6) bg_popup_window_pane_cp16

0x95a8,	// (0x0005f8d6) indicator_popup_pane_cp4_ParamLimits

0x95a8,	// (0x0005f8d6) indicator_popup_pane_cp4

0x95bc,	// (0x0005f8ea) popup_query_data_window_t1_ParamLimits

0x95bc,	// (0x0005f8ea) popup_query_data_window_t1

0x95ce,	// (0x0005f8fc) popup_query_data_window_t2_ParamLimits

0x95ce,	// (0x0005f8fc) popup_query_data_window_t2

0x95e7,	// (0x0005f915) popup_query_data_window_t3_ParamLimits

0x95e7,	// (0x0005f915) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00065b3e) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00065b3e) popup_query_data_window_t

0x9601,	// (0x0005f92f) query_popup_data_pane_ParamLimits

0x9601,	// (0x0005f92f) query_popup_data_pane

0x9615,	// (0x0005f943) query_popup_data_pane_cp1_ParamLimits

0x9615,	// (0x0005f943) query_popup_data_pane_cp1

0x94a8,	// (0x0005f7d6) bg_popup_window_pane_cp10_ParamLimits

0x94a8,	// (0x0005f7d6) bg_popup_window_pane_cp10

0x94da,	// (0x0005f808) indicator_popup_pane_ParamLimits

0x94da,	// (0x0005f808) indicator_popup_pane

0x94fc,	// (0x0005f82a) popup_query_code_window_t1_ParamLimits

0x94fc,	// (0x0005f82a) popup_query_code_window_t1

0x9516,	// (0x0005f844) popup_query_code_window_t2_ParamLimits

0x9516,	// (0x0005f844) popup_query_code_window_t2

0x955f,	// (0x0005f88d) popup_query_code_window_t3_ParamLimits

0x955f,	// (0x0005f88d) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00065b37) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00065b37) popup_query_code_window_t

0x958e,	// (0x0005f8bc) query_popup_pane_ParamLimits

0x958e,	// (0x0005f8bc) query_popup_pane

0xe21e,	// (0x0006454c) bg_popup_window_pane_cp15_ParamLimits

0xe21e,	// (0x0006454c) bg_popup_window_pane_cp15

0x585f,	// (0x0005bb8d) indicator_popup_pane_cp1_ParamLimits

0x585f,	// (0x0005bb8d) indicator_popup_pane_cp1

0x5872,	// (0x0005bba0) indicator_popup_pane_cp2_ParamLimits

0x5872,	// (0x0005bba0) indicator_popup_pane_cp2

0x5885,	// (0x0005bbb3) popup_query_data_code_window_g1_ParamLimits

0x5885,	// (0x0005bbb3) popup_query_data_code_window_g1

0xe23c,	// (0x0006456a) popup_query_data_code_window_t1_ParamLimits

0xe23c,	// (0x0006456a) popup_query_data_code_window_t1

0xe24e,	// (0x0006457c) popup_query_data_code_window_t2_ParamLimits

0xe24e,	// (0x0006457c) popup_query_data_code_window_t2

0x5898,	// (0x0005bbc6) popup_query_data_code_window_t3_ParamLimits

0x5898,	// (0x0005bbc6) popup_query_data_code_window_t3

0x58ae,	// (0x0005bbdc) popup_query_data_code_window_t4_ParamLimits

0x58ae,	// (0x0005bbdc) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00065893) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00065893) popup_query_data_code_window_t

0x768a,	// (0x0005d9b8) list_single_midp_graphic_pane_g3

0x58c6,	// (0x0005bbf4) query_popup_data_pane_cp2_ParamLimits

0x58d9,	// (0x0005bc07) query_popup_pane_cp2_ParamLimits

0x58d9,	// (0x0005bc07) query_popup_pane_cp2

0xdff0,	// (0x0006431e) bg_popup_window_pane_cp11

0x948c,	// (0x0005f7ba) heading_pane_cp5

0x9494,	// (0x0005f7c2) listscroll_popup_info_pane

0xdff0,	// (0x0006431e) input_focus_pane_cp3

0xe260,	// (0x0006458e) query_popup_pane_t1

0xe26e,	// (0x0006459c) list_popup_info_pane_ParamLimits

0xe26e,	// (0x0006459c) list_popup_info_pane

0xe27d,	// (0x000645ab) listscroll_popup_info_pane_g1

0xe285,	// (0x000645b3) scroll_pane_cp7

0x58ec,	// (0x0005bc1a) popup_info_list_pane_t1_ParamLimits

0x58ec,	// (0x0005bc1a) popup_info_list_pane_t1

0x5906,	// (0x0005bc34) popup_info_list_pane_t2_ParamLimits

0x5906,	// (0x0005bc34) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006589c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006589c) popup_info_list_pane_t

0xdff0,	// (0x0006431e) bg_popup_window_pane_cp12

0xa849,	// (0x00060b77) find_popup_pane

0xe03e,	// (0x0006436c) bg_popup_window_pane_cp3

0xe28f,	// (0x000645bd) heading_pane_cp3

0xe29e,	// (0x000645cc) listscroll_popup_graphic_pane

0xdff0,	// (0x0006431e) bg_popup_window_pane_cp4

0x5970,	// (0x0005bc9e) heading_pane_cp4

0xe2ae,	// (0x000645dc) listscroll_popup_colour_pane

0x597a,	// (0x0005bca8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x597a,	// (0x0005bca8) cell_large_graphic_colour_none_popup_pane

0x598e,	// (0x0005bcbc) grid_large_graphic_colour_popup_pane_ParamLimits

0x598e,	// (0x0005bcbc) grid_large_graphic_colour_popup_pane

0x59b2,	// (0x0005bce0) listscroll_popup_colour_pane_g1_ParamLimits

0x59b2,	// (0x0005bce0) listscroll_popup_colour_pane_g1

0x59c9,	// (0x0005bcf7) listscroll_popup_colour_pane_g2_ParamLimits

0x59c9,	// (0x0005bcf7) listscroll_popup_colour_pane_g2

0x59e0,	// (0x0005bd0e) listscroll_popup_colour_pane_g3_ParamLimits

0x59e0,	// (0x0005bd0e) listscroll_popup_colour_pane_g3

0x59f0,	// (0x0005bd1e) listscroll_popup_colour_pane_g4_ParamLimits

0x59f0,	// (0x0005bd1e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000658a1) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000658a1) listscroll_popup_colour_pane_g

0xefa8,	// (0x000652d6) scroll_pane_cp6_ParamLimits

0xefa8,	// (0x000652d6) scroll_pane_cp6

0x5a00,	// (0x0005bd2e) cell_large_graphic_colour_popup_pane_ParamLimits

0x5a00,	// (0x0005bd2e) cell_large_graphic_colour_popup_pane

0x5a1f,	// (0x0005bd4d) cell_large_graphic_colour_none_popup_pane_t1

0xdff0,	// (0x0006431e) grid_highlight_pane_cp5

0xefba,	// (0x000652e8) cell_large_graphic_colour_popup_pane_g1

0xefc2,	// (0x000652f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000658aa) cell_large_graphic_colour_popup_pane_g

0xefca,	// (0x000652f8) cell_large_graphic_colour_popup_pane_g2_copy1

0xefd3,	// (0x00065301) grid_highlight_pane_cp4

0xefdb,	// (0x00065309) bg_popup_window_pane_cp8_ParamLimits

0xefdb,	// (0x00065309) bg_popup_window_pane_cp8

0x5a2e,	// (0x0005bd5c) popup_snote_single_text_window_g1_ParamLimits

0x5a2e,	// (0x0005bd5c) popup_snote_single_text_window_g1

0x5a40,	// (0x0005bd6e) popup_snote_single_text_window_t1_ParamLimits

0x5a40,	// (0x0005bd6e) popup_snote_single_text_window_t1

0x5a53,	// (0x0005bd81) popup_snote_single_text_window_t2_ParamLimits

0x5a53,	// (0x0005bd81) popup_snote_single_text_window_t2

0x5a66,	// (0x0005bd94) popup_snote_single_text_window_t3_ParamLimits

0x5a66,	// (0x0005bd94) popup_snote_single_text_window_t3

0x5a9f,	// (0x0005bdcd) popup_snote_single_text_window_t4_ParamLimits

0x5a9f,	// (0x0005bdcd) popup_snote_single_text_window_t4

0x5ad3,	// (0x0005be01) popup_snote_single_text_window_t5_ParamLimits

0x5ad3,	// (0x0005be01) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000658af) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000658af) popup_snote_single_text_window_t

0xeff6,	// (0x00065324) bg_popup_window_pane_cp9_ParamLimits

0xeff6,	// (0x00065324) bg_popup_window_pane_cp9

0x5a2e,	// (0x0005bd5c) popup_snote_single_graphic_window_g1_ParamLimits

0x5a2e,	// (0x0005bd5c) popup_snote_single_graphic_window_g1

0xf004,	// (0x00065332) popup_snote_single_graphic_window_g2_ParamLimits

0xf004,	// (0x00065332) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000658ba) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000658ba) popup_snote_single_graphic_window_g

0xf010,	// (0x0006533e) popup_snote_single_graphic_window_t1_ParamLimits

0xf010,	// (0x0006533e) popup_snote_single_graphic_window_t1

0xf023,	// (0x00065351) popup_snote_single_graphic_window_t2_ParamLimits

0xf023,	// (0x00065351) popup_snote_single_graphic_window_t2

0x5b02,	// (0x0005be30) popup_snote_single_graphic_window_t3_ParamLimits

0x5b02,	// (0x0005be30) popup_snote_single_graphic_window_t3

0x5b3b,	// (0x0005be69) popup_snote_single_graphic_window_t4_ParamLimits

0x5b3b,	// (0x0005be69) popup_snote_single_graphic_window_t4

0x5b6f,	// (0x0005be9d) popup_snote_single_graphic_window_t5_ParamLimits

0x5b6f,	// (0x0005be9d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000658bf) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000658bf) popup_snote_single_graphic_window_t

0xa78b,	// (0x00060ab9) grid_graphic_popup_pane_ParamLimits

0xa78b,	// (0x00060ab9) grid_graphic_popup_pane

0xa7b5,	// (0x00060ae3) listscroll_popup_graphic_pane_g1_ParamLimits

0xa7b5,	// (0x00060ae3) listscroll_popup_graphic_pane_g1

0xa7c9,	// (0x00060af7) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7c9,	// (0x00060af7) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00065cb4) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00065cb4) listscroll_popup_graphic_pane_g

0xa7dd,	// (0x00060b0b) scroll_pane_cp5

0xa721,	// (0x00060a4f) cell_graphic_popup_pane_ParamLimits

0xa721,	// (0x00060a4f) cell_graphic_popup_pane

0xa702,	// (0x00060a30) cell_graphic_popup_pane_g1

0xa70a,	// (0x00060a38) cell_graphic_popup_pane_g2

0xefca,	// (0x000652f8) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00065cad) cell_graphic_popup_pane_g

0xa713,	// (0x00060a41) cell_graphic_popup_pane_t2

0xefd3,	// (0x00065301) grid_highlight_pane_cp3

0xf048,	// (0x00065376) list_gen_pane_ParamLimits

0xf048,	// (0x00065376) list_gen_pane

0xf070,	// (0x0006539e) scroll_pane

0xa65a,	// (0x00060988) bg_list_pane_g1_ParamLimits

0xa65a,	// (0x00060988) bg_list_pane_g1

0xa677,	// (0x000609a5) bg_list_pane_g2_ParamLimits

0xa677,	// (0x000609a5) bg_list_pane_g2

0xa68c,	// (0x000609ba) bg_list_pane_g3_ParamLimits

0xa68c,	// (0x000609ba) bg_list_pane_g3

0xa6a0,	// (0x000609ce) bg_list_pane_g4_ParamLimits

0xa6a0,	// (0x000609ce) bg_list_pane_g4

0xa6b4,	// (0x000609e2) bg_list_pane_g5_ParamLimits

0xa6b4,	// (0x000609e2) bg_list_pane_g5

0x0004,

0xf974,	// (0x00065ca2) bg_list_pane_g_ParamLimits

0xf974,	// (0x00065ca2) bg_list_pane_g

0xa59c,	// (0x000608ca) list_double2_graphic_large_graphic_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double2_graphic_large_graphic_pane

0xa59c,	// (0x000608ca) list_double2_graphic_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double2_graphic_pane

0xa59c,	// (0x000608ca) list_double2_large_graphic_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double2_large_graphic_pane

0x7a31,	// (0x0005dd5f) list_double2_pane_ParamLimits

0x7a31,	// (0x0005dd5f) list_double2_pane

0xa59c,	// (0x000608ca) list_double_graphic_heading_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_graphic_heading_pane

0xa59c,	// (0x000608ca) list_double_graphic_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_graphic_pane

0xa59c,	// (0x000608ca) list_double_heading_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_heading_pane

0xa59c,	// (0x000608ca) list_double_large_graphic_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_large_graphic_pane

0xa59c,	// (0x000608ca) list_double_number_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_number_pane

0xa59c,	// (0x000608ca) list_double_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_pane

0xa59c,	// (0x000608ca) list_double_time_pane_ParamLimits

0xa59c,	// (0x000608ca) list_double_time_pane

0xa59c,	// (0x000608ca) list_setting_number_pane_ParamLimits

0xa59c,	// (0x000608ca) list_setting_number_pane

0xa59c,	// (0x000608ca) list_setting_pane_ParamLimits

0xa59c,	// (0x000608ca) list_setting_pane

0xa61a,	// (0x00060948) list_single_2graphic_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_2graphic_pane

0xa61a,	// (0x00060948) list_single_graphic_heading_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_graphic_heading_pane

0xa61a,	// (0x00060948) list_single_graphic_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_graphic_pane

0xa61a,	// (0x00060948) list_single_heading_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_heading_pane

0x7a85,	// (0x0005ddb3) list_single_large_graphic_pane_ParamLimits

0x7a85,	// (0x0005ddb3) list_single_large_graphic_pane

0xa61a,	// (0x00060948) list_single_number_heading_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_number_heading_pane

0xa61a,	// (0x00060948) list_single_number_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_number_pane

0xa61a,	// (0x00060948) list_single_pane_ParamLimits

0xa61a,	// (0x00060948) list_single_pane

0xdff0,	// (0x0006431e) list_highlight_pane_cp1

0x5bb4,	// (0x0005bee2) list_single_pane_g1_ParamLimits

0x5bb4,	// (0x0005bee2) list_single_pane_g1

0x5bc0,	// (0x0005beee) list_single_pane_g2_ParamLimits

0x5bc0,	// (0x0005beee) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000658db) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000658db) list_single_pane_g

0x7a1b,	// (0x0005dd49) list_single_pane_t1_ParamLimits

0x7a1b,	// (0x0005dd49) list_single_pane_t1

0x5bb4,	// (0x0005bee2) list_single_number_pane_g1_ParamLimits

0x5bb4,	// (0x0005bee2) list_single_number_pane_g1

0x5bc0,	// (0x0005beee) list_single_number_pane_g2_ParamLimits

0x5bc0,	// (0x0005beee) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000658db) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000658db) list_single_number_pane_g

0x5bcc,	// (0x0005befa) list_single_number_pane_t1_ParamLimits

0x5bcc,	// (0x0005befa) list_single_number_pane_t1

0x7961,	// (0x0005dc8f) list_single_number_pane_t2_ParamLimits

0x7961,	// (0x0005dc8f) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00065c63) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00065c63) list_single_number_pane_t

0x5ba8,	// (0x0005bed6) list_single_graphic_pane_g1_ParamLimits

0x5ba8,	// (0x0005bed6) list_single_graphic_pane_g1

0x5bb4,	// (0x0005bee2) list_single_graphic_pane_g2_ParamLimits

0x5bb4,	// (0x0005bee2) list_single_graphic_pane_g2

0x5bc0,	// (0x0005beee) list_single_graphic_pane_g3_ParamLimits

0x5bc0,	// (0x0005beee) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000658ca) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000658ca) list_single_graphic_pane_g

0x5bcc,	// (0x0005befa) list_single_graphic_pane_t1_ParamLimits

0x5bcc,	// (0x0005befa) list_single_graphic_pane_t1

0x5be2,	// (0x0005bf10) list_single_heading_pane_g1_ParamLimits

0x5be2,	// (0x0005bf10) list_single_heading_pane_g1

0x5bc0,	// (0x0005beee) list_single_heading_pane_g2_ParamLimits

0x5bc0,	// (0x0005beee) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000658d1) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000658d1) list_single_heading_pane_g

0x5bf5,	// (0x0005bf23) list_single_heading_pane_t1_ParamLimits

0x5bf5,	// (0x0005bf23) list_single_heading_pane_t1

0x5c0b,	// (0x0005bf39) list_single_heading_pane_t2_ParamLimits

0x5c0b,	// (0x0005bf39) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000658d6) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000658d6) list_single_heading_pane_t

0x5bb4,	// (0x0005bee2) list_single_number_heading_pane_g1_ParamLimits

0x5bb4,	// (0x0005bee2) list_single_number_heading_pane_g1

0x5bc0,	// (0x0005beee) list_single_number_heading_pane_g2_ParamLimits

0x5bc0,	// (0x0005beee) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000658db) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000658db) list_single_number_heading_pane_g

0x5c1d,	// (0x0005bf4b) list_single_number_heading_pane_t1_ParamLimits

0x5c1d,	// (0x0005bf4b) list_single_number_heading_pane_t1

0x5c33,	// (0x0005bf61) list_single_number_heading_pane_t2_ParamLimits

0x5c33,	// (0x0005bf61) list_single_number_heading_pane_t2

0x5c45,	// (0x0005bf73) list_single_number_heading_pane_t3_ParamLimits

0x5c45,	// (0x0005bf73) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000658e0) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000658e0) list_single_number_heading_pane_t

0x5c57,	// (0x0005bf85) list_single_graphic_heading_pane_g1_ParamLimits

0x5c57,	// (0x0005bf85) list_single_graphic_heading_pane_g1

0x5c6b,	// (0x0005bf99) list_single_graphic_heading_pane_g4_ParamLimits

0x5c6b,	// (0x0005bf99) list_single_graphic_heading_pane_g4

0x5bc0,	// (0x0005beee) list_single_graphic_heading_pane_g5_ParamLimits

0x5bc0,	// (0x0005beee) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000658e7) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000658e7) list_single_graphic_heading_pane_g

0x5c1d,	// (0x0005bf4b) list_single_graphic_heading_pane_t1_ParamLimits

0x5c1d,	// (0x0005bf4b) list_single_graphic_heading_pane_t1

0x5c7c,	// (0x0005bfaa) list_single_graphic_heading_pane_t2_ParamLimits

0x5c7c,	// (0x0005bfaa) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000658ee) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000658ee) list_single_graphic_heading_pane_t

0x5c94,	// (0x0005bfc2) list_single_large_graphic_pane_g1_ParamLimits

0x5c94,	// (0x0005bfc2) list_single_large_graphic_pane_g1

0x4305,	// (0x0005a633) list_single_large_graphic_pane_g2_ParamLimits

0x4305,	// (0x0005a633) list_single_large_graphic_pane_g2

0x4311,	// (0x0005a63f) list_single_large_graphic_pane_g3_ParamLimits

0x4311,	// (0x0005a63f) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000658f3) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000658f3) list_single_large_graphic_pane_g

0x9648,	// (0x0005f976) wait_border_pane_g2_copy1

0x5ca0,	// (0x0005bfce) list_single_large_graphic_pane_g4_cp2

0x5ca8,	// (0x0005bfd6) list_single_large_graphic_pane_t1_ParamLimits

0x5ca8,	// (0x0005bfd6) list_single_large_graphic_pane_t1

0x2341,	// (0x0005866f) list_double_pane_g1_ParamLimits

0x2341,	// (0x0005866f) list_double_pane_g1

0x4332,	// (0x0005a660) list_double_pane_g2_ParamLimits

0x4332,	// (0x0005a660) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000658fa) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000658fa) list_double_pane_g

0x5cbe,	// (0x0005bfec) list_double_pane_t1_ParamLimits

0x5cbe,	// (0x0005bfec) list_double_pane_t1

0x5cd4,	// (0x0005c002) list_double_pane_t2_ParamLimits

0x5cd4,	// (0x0005c002) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000658ff) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000658ff) list_double_pane_t

0x5ce6,	// (0x0005c014) list_double2_pane_g1_ParamLimits

0x5ce6,	// (0x0005c014) list_double2_pane_g1

0x3ae8,	// (0x00059e16) list_double2_pane_g2_ParamLimits

0x3ae8,	// (0x00059e16) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00065904) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00065904) list_double2_pane_g

0x5cf7,	// (0x0005c025) list_double2_pane_t1_ParamLimits

0x5cf7,	// (0x0005c025) list_double2_pane_t1

0x5d0d,	// (0x0005c03b) list_double2_pane_t2_ParamLimits

0x5d0d,	// (0x0005c03b) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00065909) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00065909) list_double2_pane_t

0x2341,	// (0x0005866f) list_double_number_pane_g1_ParamLimits

0x2341,	// (0x0005866f) list_double_number_pane_g1

0x4332,	// (0x0005a660) list_double_number_pane_g2_ParamLimits

0x4332,	// (0x0005a660) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000658fa) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000658fa) list_double_number_pane_g

0x5d1f,	// (0x0005c04d) list_double_number_pane_t1_ParamLimits

0x5d1f,	// (0x0005c04d) list_double_number_pane_t1

0x5d31,	// (0x0005c05f) list_double_number_pane_t2_ParamLimits

0x5d31,	// (0x0005c05f) list_double_number_pane_t2

0x5d47,	// (0x0005c075) list_double_number_pane_t3_ParamLimits

0x5d47,	// (0x0005c075) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0006590e) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0006590e) list_double_number_pane_t

0x5d59,	// (0x0005c087) list_double_graphic_pane_g1_ParamLimits

0x5d59,	// (0x0005c087) list_double_graphic_pane_g1

0x5d65,	// (0x0005c093) list_double_graphic_pane_g2_ParamLimits

0x5d65,	// (0x0005c093) list_double_graphic_pane_g2

0x5d74,	// (0x0005c0a2) list_double_graphic_pane_g3_ParamLimits

0x5d74,	// (0x0005c0a2) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00065915) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00065915) list_double_graphic_pane_g

0x5d31,	// (0x0005c05f) list_double_graphic_pane_t1_ParamLimits

0x5d31,	// (0x0005c05f) list_double_graphic_pane_t1

0x5d47,	// (0x0005c075) list_double_graphic_pane_t2_ParamLimits

0x5d47,	// (0x0005c075) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0006591e) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0006591e) list_double_graphic_pane_t

0x5d59,	// (0x0005c087) list_double2_graphic_pane_g1_ParamLimits

0x5d59,	// (0x0005c087) list_double2_graphic_pane_g1

0x2341,	// (0x0005866f) list_double2_graphic_pane_g2_ParamLimits

0x2341,	// (0x0005866f) list_double2_graphic_pane_g2

0x4332,	// (0x0005a660) list_double2_graphic_pane_g3_ParamLimits

0x4332,	// (0x0005a660) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00065923) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00065923) list_double2_graphic_pane_g

0x5d31,	// (0x0005c05f) list_double2_graphic_pane_t1_ParamLimits

0x5d31,	// (0x0005c05f) list_double2_graphic_pane_t1

0x5d8c,	// (0x0005c0ba) list_double2_graphic_pane_t2_ParamLimits

0x5d8c,	// (0x0005c0ba) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006592a) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006592a) list_double2_graphic_pane_t

0x5d9e,	// (0x0005c0cc) list_double_large_graphic_pane_g1_ParamLimits

0x5d9e,	// (0x0005c0cc) list_double_large_graphic_pane_g1

0x5dbd,	// (0x0005c0eb) list_double_large_graphic_pane_g2_ParamLimits

0x5dbd,	// (0x0005c0eb) list_double_large_graphic_pane_g2

0x4332,	// (0x0005a660) list_double_large_graphic_pane_g3_ParamLimits

0x4332,	// (0x0005a660) list_double_large_graphic_pane_g3

0x5dd3,	// (0x0005c101) list_double_large_graphic_pane_g4_ParamLimits

0x5dd3,	// (0x0005c101) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0006592f) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0006592f) list_double_large_graphic_pane_g

0x5de5,	// (0x0005c113) list_double_large_graphic_pane_t1_ParamLimits

0x5de5,	// (0x0005c113) list_double_large_graphic_pane_t1

0x5dfe,	// (0x0005c12c) list_double_large_graphic_pane_t2_ParamLimits

0x5dfe,	// (0x0005c12c) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006593a) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006593a) list_double_large_graphic_pane_t

0x5e10,	// (0x0005c13e) list_double2_large_graphic_pane_g1_ParamLimits

0x5e10,	// (0x0005c13e) list_double2_large_graphic_pane_g1

0x5e1c,	// (0x0005c14a) list_double2_large_graphic_pane_g2_ParamLimits

0x5e1c,	// (0x0005c14a) list_double2_large_graphic_pane_g2

0x4332,	// (0x0005a660) list_double2_large_graphic_pane_g3_ParamLimits

0x4332,	// (0x0005a660) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0006593f) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0006593f) list_double2_large_graphic_pane_g

0x5d31,	// (0x0005c05f) list_double2_large_graphic_pane_t1_ParamLimits

0x5d31,	// (0x0005c05f) list_double2_large_graphic_pane_t1

0x5d8c,	// (0x0005c0ba) list_double2_large_graphic_pane_t2_ParamLimits

0x5d8c,	// (0x0005c0ba) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006592a) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006592a) list_double2_large_graphic_pane_t

0x5e2d,	// (0x0005c15b) list_double_heading_pane_g1_ParamLimits

0x5e2d,	// (0x0005c15b) list_double_heading_pane_g1

0x5e3e,	// (0x0005c16c) list_double_heading_pane_g2_ParamLimits

0x5e3e,	// (0x0005c16c) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00065946) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00065946) list_double_heading_pane_g

0x5e4a,	// (0x0005c178) list_double_heading_pane_t1_ParamLimits

0x5e4a,	// (0x0005c178) list_double_heading_pane_t1

0x5e60,	// (0x0005c18e) list_double_heading_pane_t2_ParamLimits

0x5e60,	// (0x0005c18e) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0006594b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0006594b) list_double_heading_pane_t

0x5e72,	// (0x0005c1a0) list_double_graphic_heading_pane_g1_ParamLimits

0x5e72,	// (0x0005c1a0) list_double_graphic_heading_pane_g1

0x5e2d,	// (0x0005c15b) list_double_graphic_heading_pane_g2_ParamLimits

0x5e2d,	// (0x0005c15b) list_double_graphic_heading_pane_g2

0x5e3e,	// (0x0005c16c) list_double_graphic_heading_pane_g3_ParamLimits

0x5e3e,	// (0x0005c16c) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00065950) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00065950) list_double_graphic_heading_pane_g

0x5e4a,	// (0x0005c178) list_double_graphic_heading_pane_t1_ParamLimits

0x5e4a,	// (0x0005c178) list_double_graphic_heading_pane_t1

0x5e60,	// (0x0005c18e) list_double_graphic_heading_pane_t2_ParamLimits

0x5e60,	// (0x0005c18e) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x0006594b) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x0006594b) list_double_graphic_heading_pane_t

0x5e7e,	// (0x0005c1ac) list_double_time_pane_g1_ParamLimits

0x5e7e,	// (0x0005c1ac) list_double_time_pane_g1

0x5e8f,	// (0x0005c1bd) list_double_time_pane_g2_ParamLimits

0x5e8f,	// (0x0005c1bd) list_double_time_pane_g2

0x0001,

0xf629,	// (0x00065957) list_double_time_pane_g_ParamLimits

0xf629,	// (0x00065957) list_double_time_pane_g

0x5e9b,	// (0x0005c1c9) list_double_time_pane_t1_ParamLimits

0x5e9b,	// (0x0005c1c9) list_double_time_pane_t1

0x5eb1,	// (0x0005c1df) list_double_time_pane_t2_ParamLimits

0x5eb1,	// (0x0005c1df) list_double_time_pane_t2

0x5ec3,	// (0x0005c1f1) list_double_time_pane_t3_ParamLimits

0x5ec3,	// (0x0005c1f1) list_double_time_pane_t3

0x5ed5,	// (0x0005c203) list_double_time_pane_t4_ParamLimits

0x5ed5,	// (0x0005c203) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x0006595c) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x0006595c) list_double_time_pane_t

0x5ee7,	// (0x0005c215) list_setting_pane_g1_ParamLimits

0x5ee7,	// (0x0005c215) list_setting_pane_g1

0x5ef3,	// (0x0005c221) list_setting_pane_g2_ParamLimits

0x5ef3,	// (0x0005c221) list_setting_pane_g2

0x0001,

0xf637,	// (0x00065965) list_setting_pane_g_ParamLimits

0xf637,	// (0x00065965) list_setting_pane_g

0x5eff,	// (0x0005c22d) list_setting_pane_t1_ParamLimits

0x5eff,	// (0x0005c22d) list_setting_pane_t1

0x5f19,	// (0x0005c247) list_setting_pane_t2_ParamLimits

0x5f19,	// (0x0005c247) list_setting_pane_t2

0x0002,

0xf63c,	// (0x0006596a) list_setting_pane_t_ParamLimits

0xf63c,	// (0x0006596a) list_setting_pane_t

0x5f56,	// (0x0005c284) set_value_pane_cp_ParamLimits

0x5f56,	// (0x0005c284) set_value_pane_cp

0x5f62,	// (0x0005c290) list_setting_number_pane_g1_ParamLimits

0x5f62,	// (0x0005c290) list_setting_number_pane_g1

0x5f6e,	// (0x0005c29c) list_setting_number_pane_g2_ParamLimits

0x5f6e,	// (0x0005c29c) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00065971) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00065971) list_setting_number_pane_g

0x5f7a,	// (0x0005c2a8) list_setting_number_pane_t1_ParamLimits

0x5f7a,	// (0x0005c2a8) list_setting_number_pane_t1

0x5f93,	// (0x0005c2c1) list_setting_number_pane_t2_ParamLimits

0x5f93,	// (0x0005c2c1) list_setting_number_pane_t2

0x5fad,	// (0x0005c2db) list_setting_number_pane_t3_ParamLimits

0x5fad,	// (0x0005c2db) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00065976) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00065976) list_setting_number_pane_t

0x5f56,	// (0x0005c284) set_value_pane_ParamLimits

0x5f56,	// (0x0005c284) set_value_pane

0xf0a4,	// (0x000653d2) bg_set_opt_pane_ParamLimits

0xf0a4,	// (0x000653d2) bg_set_opt_pane

0x3af4,	// (0x00059e22) set_value_pane_t1

0xf0c5,	// (0x000653f3) slider_set_pane_cp3

0x5ff0,	// (0x0005c31e) volume_small_pane_cp

0xf0ce,	// (0x000653fc) list_form_gen_pane

0xf0d7,	// (0x00065405) scroll_pane_cp8

0x5ff9,	// (0x0005c327) form_field_data_pane_ParamLimits

0x5ff9,	// (0x0005c327) form_field_data_pane

0x6013,	// (0x0005c341) form_field_data_wide_pane_ParamLimits

0x6013,	// (0x0005c341) form_field_data_wide_pane

0x6036,	// (0x0005c364) form_field_popup_pane_ParamLimits

0x6036,	// (0x0005c364) form_field_popup_pane

0x6056,	// (0x0005c384) form_field_popup_wide_pane_ParamLimits

0x6056,	// (0x0005c384) form_field_popup_wide_pane

0x3b12,	// (0x00059e40) form_field_slider_pane_ParamLimits

0x3b12,	// (0x00059e40) form_field_slider_pane

0x6073,	// (0x0005c3a1) form_field_slider_wide_pane_ParamLimits

0x6073,	// (0x0005c3a1) form_field_slider_wide_pane

0xf0e8,	// (0x00065416) data_form_pane

0x6090,	// (0x0005c3be) form_field_data_pane_t1

0xf0f4,	// (0x00065422) input_focus_pane

0x3b25,	// (0x00059e53) data_form_wide_pane

0x3b42,	// (0x00059e70) form_field_data_wide_pane_t1

0xefe8,	// (0x00065316) input_focus_pane_cp6

0x60a8,	// (0x0005c3d6) form_field_popup_pane_t1

0xf0f4,	// (0x00065422) input_focus_pane_cp7

0xf122,	// (0x00065450) list_form_pane

0x3b6c,	// (0x00059e9a) form_field_popup_wide_pane_t1

0xf0f4,	// (0x00065422) input_focus_pane_cp8

0xf12e,	// (0x0006545c) list_form_wide_pane

0x60c8,	// (0x0005c3f6) form_field_slider_pane_t1_ParamLimits

0x60c8,	// (0x0005c3f6) form_field_slider_pane_t1

0x60de,	// (0x0005c40c) form_field_slider_pane_t2_ParamLimits

0x60de,	// (0x0005c40c) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00065986) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00065986) form_field_slider_pane_t

0xe168,	// (0x00064496) input_focus_pane_cp9_ParamLimits

0xe168,	// (0x00064496) input_focus_pane_cp9

0x60f3,	// (0x0005c421) slider_cont_pane_ParamLimits

0x60f3,	// (0x0005c421) slider_cont_pane

0xf13a,	// (0x00065468) form_field_slider_wide_pane_t1_ParamLimits

0xf13a,	// (0x00065468) form_field_slider_wide_pane_t1

0x3b81,	// (0x00059eaf) form_field_slider_wide_pane_t2_ParamLimits

0x3b81,	// (0x00059eaf) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0006598b) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0006598b) form_field_slider_wide_pane_t

0xe168,	// (0x00064496) input_focus_pane_cp10_ParamLimits

0xe168,	// (0x00064496) input_focus_pane_cp10

0x6107,	// (0x0005c435) slider_cont_pane_cp1_ParamLimits

0x6107,	// (0x0005c435) slider_cont_pane_cp1

0x611b,	// (0x0005c449) slider_form_pane_cp

0xf14c,	// (0x0006547a) input_focus_pane_g1

0xf154,	// (0x00065482) input_focus_pane_g2

0xf15c,	// (0x0006548a) input_focus_pane_g3

0xf164,	// (0x00065492) input_focus_pane_g4

0xf16c,	// (0x0006549a) input_focus_pane_g5

0xf174,	// (0x000654a2) input_focus_pane_g6

0xf17c,	// (0x000654aa) input_focus_pane_g7

0xf184,	// (0x000654b2) input_focus_pane_g8

0xf18c,	// (0x000654ba) input_focus_pane_g9

0xdfe6,	// (0x00064314) input_focus_pane_g10

0x0009,

0xf662,	// (0x00065990) input_focus_pane_g

0x9651,	// (0x0005f97f) wait_border_pane_g3_copy1

0x6123,	// (0x0005c451) data_form_pane_t1

0xdfe6,	// (0x00064314) wait_anim_pane_g1_copy1

0x79eb,	// (0x0005dd19) data_form_wide_pane_t1

0x613e,	// (0x0005c46c) list_form_graphic_pane_cp_ParamLimits

0x613e,	// (0x0005c46c) list_form_graphic_pane_cp

0xa540,	// (0x0006086e) slider_form_pane_g1

0xa549,	// (0x00060877) slider_form_pane_g2

0x0006,

0xf965,	// (0x00065c93) slider_form_pane_g

0x613e,	// (0x0005c46c) list_form_graphic_pane_ParamLimits

0x613e,	// (0x0005c46c) list_form_graphic_pane

0x6157,	// (0x0005c485) list_form_graphic_pane_g1

0x615f,	// (0x0005c48d) list_form_graphic_pane_t1_ParamLimits

0x615f,	// (0x0005c48d) list_form_graphic_pane_t1

0xe03e,	// (0x0006436c) list_highlight_pane_cp5_ParamLimits

0xe03e,	// (0x0006436c) list_highlight_pane_cp5

0x6174,	// (0x0005c4a2) find_pane_g1

0xf194,	// (0x000654c2) input_find_pane

0x617d,	// (0x0005c4ab) input_find_pane_g1_ParamLimits

0x617d,	// (0x0005c4ab) input_find_pane_g1

0x6189,	// (0x0005c4b7) input_find_pane_t1_ParamLimits

0x6189,	// (0x0005c4b7) input_find_pane_t1

0x619e,	// (0x0005c4cc) input_find_pane_t2_ParamLimits

0x619e,	// (0x0005c4cc) input_find_pane_t2

0x0001,

0xf677,	// (0x000659a5) input_find_pane_t_ParamLimits

0xf677,	// (0x000659a5) input_find_pane_t

0xf19d,	// (0x000654cb) input_focus_pane_cp5_ParamLimits

0xf19d,	// (0x000654cb) input_focus_pane_cp5

0xf1b0,	// (0x000654de) bg_popup_window_pane_cp2_ParamLimits

0xf1b0,	// (0x000654de) bg_popup_window_pane_cp2

0xf1bd,	// (0x000654eb) listscroll_menu_pane_ParamLimits

0xf1bd,	// (0x000654eb) listscroll_menu_pane

0x61bf,	// (0x0005c4ed) popup_submenu_window_ParamLimits

0x61bf,	// (0x0005c4ed) popup_submenu_window

0xf1c9,	// (0x000654f7) find_popup_pane_g1

0x61e7,	// (0x0005c515) input_popup_find_pane_cp

0xf1d1,	// (0x000654ff) input_focus_pane_cp4_ParamLimits

0xf1d1,	// (0x000654ff) input_focus_pane_cp4

0xf1df,	// (0x0006550d) input_popup_find_pane_t1_ParamLimits

0xf1df,	// (0x0006550d) input_popup_find_pane_t1

0xdff0,	// (0x0006431e) bg_popup_sub_pane_cp

0xf20d,	// (0x0006553b) listscroll_popup_sub_pane

0xf215,	// (0x00065543) list_submenu_pane_ParamLimits

0xf215,	// (0x00065543) list_submenu_pane

0xf226,	// (0x00065554) scroll_pane_cp4

0x61ff,	// (0x0005c52d) list_single_popup_submenu_pane_ParamLimits

0x61ff,	// (0x0005c52d) list_single_popup_submenu_pane

0x2173,	// (0x000584a1) list_single_popup_submenu_pane_g1

0x6213,	// (0x0005c541) list_single_popup_submenu_pane_t1_ParamLimits

0x6213,	// (0x0005c541) list_single_popup_submenu_pane_t1

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp1_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp1

0xf22e,	// (0x0006555c) tabs_2_active_pane_g1

0x6228,	// (0x0005c556) tabs_2_active_pane_t1

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp1_ParamLimits

0xe03e,	// (0x0006436c) bg_passive_tab_pane_cp1

0xf22e,	// (0x0006555c) tabs_2_passive_pane_g1

0x6228,	// (0x0005c556) tabs_2_passive_pane_t1

0x623a,	// (0x0005c568) bg_active_tab_pane_cp4

0x6248,	// (0x0005c576) tabs_2_long_active_pane_t1

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp4

0x7692,	// (0x0005d9c0) list_single_midp_graphic_pane_g4_ParamLimits

0x623a,	// (0x0005c568) bg_active_tab_pane_cp5

0x6267,	// (0x0005c595) tabs_3_long_active_pane_t1

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp5

0x7692,	// (0x0005d9c0) list_single_midp_graphic_pane_g4

0xe03e,	// (0x0006436c) bg_popup_window_pane_cp13_ParamLimits

0xe03e,	// (0x0006436c) bg_popup_window_pane_cp13

0xf236,	// (0x00065564) listscroll_popup_fast_pane_ParamLimits

0xf236,	// (0x00065564) listscroll_popup_fast_pane

0xf242,	// (0x00065570) grid_popup_fast_pane_ParamLimits

0xf242,	// (0x00065570) grid_popup_fast_pane

0xf254,	// (0x00065582) scroll_pane_cp9_ParamLimits

0xf254,	// (0x00065582) scroll_pane_cp9

0xc050,	// (0x0006237e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc050,	// (0x0006237e) list_single_graphic_hl_pane_t1_cp2

0xf267,	// (0x00065595) input_focus_pane_cp20_ParamLimits

0xf267,	// (0x00065595) input_focus_pane_cp20

0xf275,	// (0x000655a3) query_popup_data_pane_t1_ParamLimits

0xf275,	// (0x000655a3) query_popup_data_pane_t1

0xf288,	// (0x000655b6) query_popup_data_pane_t2_ParamLimits

0xf288,	// (0x000655b6) query_popup_data_pane_t2

0xf2ce,	// (0x000655fc) query_popup_data_pane_t3_ParamLimits

0xf2ce,	// (0x000655fc) query_popup_data_pane_t3

0xf30f,	// (0x0006563d) query_popup_data_pane_t4_ParamLimits

0xf30f,	// (0x0006563d) query_popup_data_pane_t4

0xf34b,	// (0x00065679) query_popup_data_pane_t5_ParamLimits

0xf34b,	// (0x00065679) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x000659aa) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x000659aa) query_popup_data_pane_t

0xf14c,	// (0x0006547a) bg_set_opt_pane_g1

0xf154,	// (0x00065482) bg_set_opt_pane_g2

0xf15c,	// (0x0006548a) bg_set_opt_pane_g3

0xf164,	// (0x00065492) bg_set_opt_pane_g4

0xf16c,	// (0x0006549a) bg_set_opt_pane_g5

0xf174,	// (0x000654a2) bg_set_opt_pane_g6

0xf17c,	// (0x000654aa) bg_set_opt_pane_g7

0xf184,	// (0x000654b2) bg_set_opt_pane_g8

0xf18c,	// (0x000654ba) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x000659b5) bg_set_opt_pane_g

0x67dc,	// (0x0005cb0a) control_top_pane_stacon_ParamLimits

0x67dc,	// (0x0005cb0a) control_top_pane_stacon

0x682f,	// (0x0005cb5d) signal_pane_stacon_ParamLimits

0x682f,	// (0x0005cb5d) signal_pane_stacon

0x13a7,	// (0x000576d5) stacon_top_pane_g1_ParamLimits

0x13a7,	// (0x000576d5) stacon_top_pane_g1

0x6854,	// (0x0005cb82) title_pane_stacon_ParamLimits

0x6854,	// (0x0005cb82) title_pane_stacon

0x687e,	// (0x0005cbac) uni_indicator_pane_stacon_ParamLimits

0x687e,	// (0x0005cbac) uni_indicator_pane_stacon

0x6893,	// (0x0005cbc1) battery_pane_stacon_ParamLimits

0x6893,	// (0x0005cbc1) battery_pane_stacon

0x68d7,	// (0x0005cc05) control_bottom_pane_stacon_ParamLimits

0x68d7,	// (0x0005cc05) control_bottom_pane_stacon

0x68fa,	// (0x0005cc28) navi_pane_stacon_ParamLimits

0x68fa,	// (0x0005cc28) navi_pane_stacon

0x13c9,	// (0x000576f7) stacon_bottom_pane_g1_ParamLimits

0x13c9,	// (0x000576f7) stacon_bottom_pane_g1

0x6293,	// (0x0005c5c1) aid_levels_signal_lsc_ParamLimits

0x6293,	// (0x0005c5c1) aid_levels_signal_lsc

0x62a9,	// (0x0005c5d7) signal_pane_stacon_g1_ParamLimits

0x62a9,	// (0x0005c5d7) signal_pane_stacon_g1

0x62bd,	// (0x0005c5eb) signal_pane_stacon_g2_ParamLimits

0x62bd,	// (0x0005c5eb) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x000659c8) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x000659c8) signal_pane_stacon_g

0x62f2,	// (0x0005c620) title_pane_stacon_t1_ParamLimits

0x62f2,	// (0x0005c620) title_pane_stacon_t1

0xf38f,	// (0x000656bd) uni_indicator_pane_stacon_g1

0xf399,	// (0x000656c7) uni_indicator_pane_stacon_g2

0xf3a3,	// (0x000656d1) uni_indicator_pane_stacon_g3

0xf3ad,	// (0x000656db) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x000659d4) uni_indicator_pane_stacon_g

0x6317,	// (0x0005c645) control_top_pane_stacon_g1

0x631f,	// (0x0005c64d) control_top_pane_stacon_t1_ParamLimits

0x631f,	// (0x0005c64d) control_top_pane_stacon_t1

0x6356,	// (0x0005c684) aid_levels_battery_lsc_ParamLimits

0x6356,	// (0x0005c684) aid_levels_battery_lsc

0x636d,	// (0x0005c69b) battery_pane_stacon_g1_ParamLimits

0x636d,	// (0x0005c69b) battery_pane_stacon_g1

0x6380,	// (0x0005c6ae) battery_pane_stacon_g2_ParamLimits

0x6380,	// (0x0005c6ae) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x000659dd) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x000659dd) battery_pane_stacon_g

0x63be,	// (0x0005c6ec) navi_icon_pane_stacon

0x63d2,	// (0x0005c700) navi_navi_pane_stacon

0x63be,	// (0x0005c6ec) navi_text_pane_stacon

0x6317,	// (0x0005c645) control_bottom_pane_stacon_g1

0x63e6,	// (0x0005c714) control_bottom_pane_stacon_t1_ParamLimits

0x63e6,	// (0x0005c714) control_bottom_pane_stacon_t1

0x641d,	// (0x0005c74b) grid_app_pane_ParamLimits

0x641d,	// (0x0005c74b) grid_app_pane

0x643f,	// (0x0005c76d) scroll_pane_cp15_ParamLimits

0x643f,	// (0x0005c76d) scroll_pane_cp15

0x6452,	// (0x0005c780) cell_app_pane_ParamLimits

0x6452,	// (0x0005c780) cell_app_pane

0x647a,	// (0x0005c7a8) cell_app_pane_g1_ParamLimits

0x647a,	// (0x0005c7a8) cell_app_pane_g1

0xf3d1,	// (0x000656ff) cell_app_pane_g2_ParamLimits

0xf3d1,	// (0x000656ff) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x000659e2) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x000659e2) cell_app_pane_g

0x649e,	// (0x0005c7cc) cell_app_pane_t1_ParamLimits

0x649e,	// (0x0005c7cc) cell_app_pane_t1

0xf3dd,	// (0x0006570b) grid_highlight_pane_ParamLimits

0xf3dd,	// (0x0006570b) grid_highlight_pane

0xf14c,	// (0x0006547a) cell_highlight_pane_g1

0xf154,	// (0x00065482) cell_highlight_pane_g2

0xf15c,	// (0x0006548a) cell_highlight_pane_g3

0xf164,	// (0x00065492) cell_highlight_pane_g4

0xf16c,	// (0x0006549a) cell_highlight_pane_g5

0xf174,	// (0x000654a2) cell_highlight_pane_g6

0xf17c,	// (0x000654aa) cell_highlight_pane_g7

0xf184,	// (0x000654b2) cell_highlight_pane_g8

0xf18c,	// (0x000654ba) cell_highlight_pane_g9

0xdfe6,	// (0x00064314) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00065990) cell_highlight_pane_g

0xf3ee,	// (0x0006571c) bg_scroll_pane

0x64c8,	// (0x0005c7f6) scroll_handle_pane

0xf435,	// (0x00065763) scroll_bg_pane_g1

0xf44a,	// (0x00065778) scroll_bg_pane_g2

0xf462,	// (0x00065790) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x000659e7) scroll_bg_pane_g

0x64f1,	// (0x0005c81f) scroll_handle_focus_pane_ParamLimits

0x64f1,	// (0x0005c81f) scroll_handle_focus_pane

0xf435,	// (0x00065763) scroll_handle_pane_g1

0xf477,	// (0x000657a5) scroll_handle_pane_g2

0xf462,	// (0x00065790) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x000659ee) scroll_handle_pane_g

0xf1d1,	// (0x000654ff) bg_popup_sub_pane_cp21_ParamLimits

0xf1d1,	// (0x000654ff) bg_popup_sub_pane_cp21

0x64fe,	// (0x0005c82c) popup_fep_japan_predictive_window_t1_ParamLimits

0x64fe,	// (0x0005c82c) popup_fep_japan_predictive_window_t1

0x6518,	// (0x0005c846) popup_fep_japan_predictive_window_t2_ParamLimits

0x6518,	// (0x0005c846) popup_fep_japan_predictive_window_t2

0x654b,	// (0x0005c879) popup_fep_japan_predictive_window_t3_ParamLimits

0x654b,	// (0x0005c879) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x000659f5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x000659f5) popup_fep_japan_predictive_window_t

0xdff0,	// (0x0006431e) bg_popup_sub_pane_cp23

0x2ac6,	// (0x00058df4) listscroll_japin_cand_pane

0xf48b,	// (0x000657b9) popup_fep_japan_candidate_window_t1

0xf499,	// (0x000657c7) candidate_pane_ParamLimits

0xf499,	// (0x000657c7) candidate_pane

0x6582,	// (0x0005c8b0) scroll_pane_cp30

0xf4ab,	// (0x000657d9) list_single_popup_jap_candidate_pane_ParamLimits

0xf4ab,	// (0x000657d9) list_single_popup_jap_candidate_pane

0xdff0,	// (0x0006431e) list_highlight_pane_cp30

0xf4c0,	// (0x000657ee) list_single_popup_jap_candidate_pane_t1

0xf4cf,	// (0x000657fd) level_1_signal

0xf4dc,	// (0x0006580a) level_2_signal

0xf4e9,	// (0x00065817) level_3_signal

0xf4f6,	// (0x00065824) level_4_signal

0xf503,	// (0x00065831) level_5_signal

0xf510,	// (0x0006583e) level_6_signal

0x11ed,	// (0x0005751b) level_7_signal

0xf4cf,	// (0x000657fd) level_1_battery

0xf4dc,	// (0x0006580a) level_2_battery

0xf4e9,	// (0x00065817) level_3_battery

0xf4f6,	// (0x00065824) level_4_battery

0xf503,	// (0x00065831) level_5_battery

0xf510,	// (0x0006583e) level_6_battery

0x11ed,	// (0x0005751b) level_7_battery

0x1212,	// (0x00057540) list_menu_pane_ParamLimits

0x1212,	// (0x00057540) list_menu_pane

0x1228,	// (0x00057556) scroll_pane_cp25_ParamLimits

0x1228,	// (0x00057556) scroll_pane_cp25

0x1241,	// (0x0005756f) list_double2_graphic_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double2_graphic_pane_cp2

0x1241,	// (0x0005756f) list_double2_large_graphic_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double2_large_graphic_pane_cp2

0x1241,	// (0x0005756f) list_double2_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double2_pane_cp2

0x1241,	// (0x0005756f) list_double_graphic_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double_graphic_pane_cp2

0x1241,	// (0x0005756f) list_double_large_graphic_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double_large_graphic_pane_cp2

0x1241,	// (0x0005756f) list_double_number_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double_number_pane_cp2

0x1241,	// (0x0005756f) list_double_pane_cp2_ParamLimits

0x1241,	// (0x0005756f) list_double_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_2graphic_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_2graphic_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_graphic_heading_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_graphic_heading_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_graphic_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_graphic_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_heading_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_heading_pane_cp2

0x1251,	// (0x0005757f) list_single_large_graphic_pane_cp2_ParamLimits

0x1251,	// (0x0005757f) list_single_large_graphic_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_number_heading_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_number_heading_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_number_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_number_pane_cp2

0x65bd,	// (0x0005c8eb) list_single_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_pane_cp2

0x126b,	// (0x00057599) bg_popup_sub_pane_cp22

0x6695,	// (0x0005c9c3) popup_side_volume_key_window_g1

0x66b9,	// (0x0005c9e7) popup_side_volume_key_window_t1

0x66d5,	// (0x0005ca03) volume_small_pane_cp1

0xe168,	// (0x00064496) bg_popup_sub_pane_cp24_ParamLimits

0xe168,	// (0x00064496) bg_popup_sub_pane_cp24

0x1281,	// (0x000575af) fep_china_uni_candidate_pane_ParamLimits

0x1281,	// (0x000575af) fep_china_uni_candidate_pane

0x1295,	// (0x000575c3) fep_china_uni_entry_pane

0x12a5,	// (0x000575d3) popup_fep_china_uni_window_g1

0x66dd,	// (0x0005ca0b) fep_china_uni_entry_pane_g1

0x66e5,	// (0x0005ca13) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00065a26) fep_china_uni_entry_pane_g

0x12c1,	// (0x000575ef) fep_entry_item_pane

0x12cb,	// (0x000575f9) fep_candidate_item_pane

0x66ed,	// (0x0005ca1b) fep_china_uni_candidate_pane_g1

0x12d3,	// (0x00057601) fep_china_uni_candidate_pane_g2

0x12db,	// (0x00057609) fep_china_uni_candidate_pane_g3

0x66f5,	// (0x0005ca23) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00065a2b) fep_china_uni_candidate_pane_g

0xdfe6,	// (0x00064314) fep_entry_item_pane_g1

0x12e3,	// (0x00057611) fep_entry_item_pane_t1_ParamLimits

0x12e3,	// (0x00057611) fep_entry_item_pane_t1

0x12f9,	// (0x00057627) fep_candidate_item_pane_t1_ParamLimits

0x12f9,	// (0x00057627) fep_candidate_item_pane_t1

0x130e,	// (0x0005763c) fep_candidate_item_pane_t2_ParamLimits

0x130e,	// (0x0005763c) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00065a34) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00065a34) fep_candidate_item_pane_t

0xe03e,	// (0x0006436c) list_highlight_pane_cp31_ParamLimits

0xe03e,	// (0x0006436c) list_highlight_pane_cp31

0x1320,	// (0x0005764e) level_1_signal_lsc

0x1329,	// (0x00057657) level_2_signal_lsc

0x1332,	// (0x00057660) level_3_signal_lsc

0x133b,	// (0x00057669) level_4_signal_lsc

0x1344,	// (0x00057672) level_5_signal_lsc

0x134d,	// (0x0005767b) level_6_signal_lsc

0x1356,	// (0x00057684) level_7_signal_lsc

0x1356,	// (0x00057684) level_1_battery_lsc

0x135f,	// (0x0005768d) level_2_battery_lsc

0x1368,	// (0x00057696) level_3_battery_lsc

0x1371,	// (0x0005769f) level_4_battery_lsc

0x137a,	// (0x000576a8) level_5_battery_lsc

0x1383,	// (0x000576b1) level_6_battery_lsc

0x1320,	// (0x0005764e) level_7_battery_lsc

0x138c,	// (0x000576ba) scroll_handle_focus_pane_g1

0x1395,	// (0x000576c3) scroll_handle_focus_pane_g2

0x139e,	// (0x000576cc) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00065a39) scroll_handle_focus_pane_g

0x66fd,	// (0x0005ca2b) list_single_2graphic_pane_g1_ParamLimits

0x66fd,	// (0x0005ca2b) list_single_2graphic_pane_g1

0x5c6b,	// (0x0005bf99) list_single_2graphic_pane_g2_ParamLimits

0x5c6b,	// (0x0005bf99) list_single_2graphic_pane_g2

0x5bc0,	// (0x0005beee) list_single_2graphic_pane_g3_ParamLimits

0x5bc0,	// (0x0005beee) list_single_2graphic_pane_g3

0x6709,	// (0x0005ca37) list_single_2graphic_pane_g4_ParamLimits

0x6709,	// (0x0005ca37) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00065a40) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00065a40) list_single_2graphic_pane_g

0x6715,	// (0x0005ca43) list_single_2graphic_pane_t1_ParamLimits

0x6715,	// (0x0005ca43) list_single_2graphic_pane_t1

0x6743,	// (0x0005ca71) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6743,	// (0x0005ca71) list_double2_graphic_large_graphic_pane_g1

0x5e1c,	// (0x0005c14a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5e1c,	// (0x0005c14a) list_double2_graphic_large_graphic_pane_g2

0x4332,	// (0x0005a660) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4332,	// (0x0005a660) list_double2_graphic_large_graphic_pane_g3

0x6753,	// (0x0005ca81) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6753,	// (0x0005ca81) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00065a49) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00065a49) list_double2_graphic_large_graphic_pane_g

0x675f,	// (0x0005ca8d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x675f,	// (0x0005ca8d) list_double2_graphic_large_graphic_pane_t1

0x6775,	// (0x0005caa3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6775,	// (0x0005caa3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00065a52) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00065a52) list_double2_graphic_large_graphic_pane_t

0x6959,	// (0x0005cc87) popup_fast_swap_window_ParamLimits

0x6959,	// (0x0005cc87) popup_fast_swap_window

0x6975,	// (0x0005cca3) popup_side_volume_key_window

0x1454,	// (0x00057782) stacon_top_pane

0x145e,	// (0x0005778c) status_pane_ParamLimits

0x145e,	// (0x0005778c) status_pane

0x698f,	// (0x0005ccbd) status_small_pane

0xdff0,	// (0x0006431e) control_pane

0xdff0,	// (0x0006431e) stacon_bottom_pane

0xf0d7,	// (0x00065405) scroll_pane_cp121

0xf0ce,	// (0x000653fc) set_content_pane

0x6787,	// (0x0005cab5) bg_active_tab_pane_g1_cp1

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp1

0x6799,	// (0x0005cac7) bg_active_tab_pane_g3_cp1

0x6787,	// (0x0005cab5) bg_passive_tab_pane_g1_cp1

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp1

0x6799,	// (0x0005cac7) bg_passive_tab_pane_g3_cp1

0x67a2,	// (0x0005cad0) bg_active_tab_pane_g1_cp2

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp2

0x67ab,	// (0x0005cad9) bg_active_tab_pane_g3_cp2

0x67a2,	// (0x0005cad0) bg_passive_tab_pane_g1_cp2

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp2

0x67ab,	// (0x0005cad9) bg_passive_tab_pane_g3_cp2

0x67b4,	// (0x0005cae2) bg_active_tab_pane_g1_cp3

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp3

0x67bd,	// (0x0005caeb) bg_active_tab_pane_g3_cp3

0x67b4,	// (0x0005cae2) bg_passive_tab_pane_g1_cp3

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp3

0x67bd,	// (0x0005caeb) bg_passive_tab_pane_g3_cp3

0x67c6,	// (0x0005caf4) bg_active_tab_pane_g1_cp4

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp4

0x67d1,	// (0x0005caff) bg_active_tab_pane_g3_cp4

0x67c6,	// (0x0005caf4) bg_passive_tab_pane_g1_cp4

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp4

0x67d1,	// (0x0005caff) bg_passive_tab_pane_g3_cp4

0x691d,	// (0x0005cc4b) bg_active_tab_pane_g1_cp5

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp5

0x6926,	// (0x0005cc54) bg_active_tab_pane_g3_cp5

0x691d,	// (0x0005cc4b) bg_passive_tab_pane_g1_cp5

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp5

0x6926,	// (0x0005cc54) bg_passive_tab_pane_g3_cp5

0x692f,	// (0x0005cc5d) list_set_graphic_pane_ParamLimits

0x692f,	// (0x0005cc5d) list_set_graphic_pane

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp4

0x13e5,	// (0x00057713) list_set_graphic_pane_g1_ParamLimits

0x13e5,	// (0x00057713) list_set_graphic_pane_g1

0x13f1,	// (0x0005771f) list_set_graphic_pane_g2_ParamLimits

0x13f1,	// (0x0005771f) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00065a57) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00065a57) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x00065def) volume_small_pane_cp_g

0x694d,	// (0x0005cc7b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x694d,	// (0x0005cc7b) list_double2_large_graphic_pane_g1_cp2

0x1413,	// (0x00057741) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1413,	// (0x00057741) list_double2_large_graphic_pane_g2_cp2

0x1424,	// (0x00057752) list_double2_large_graphic_pane_g3_cp2

0x142c,	// (0x0005775a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x142c,	// (0x0005775a) list_double2_large_graphic_pane_t1_cp2

0x1442,	// (0x00057770) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1442,	// (0x00057770) list_double2_large_graphic_pane_t2_cp2

0xa102,	// (0x00060430) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa102,	// (0x00060430) list_double_large_graphic_pane_g1_cp2

0xa113,	// (0x00060441) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa113,	// (0x00060441) list_double_large_graphic_pane_g2_cp2

0x157a,	// (0x000578a8) list_double_large_graphic_pane_g3_cp2

0xa124,	// (0x00060452) list_double_large_graphic_pane_g4_cp

0xa12c,	// (0x0006045a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa12c,	// (0x0006045a) list_double_large_graphic_pane_t1_cp2

0xa143,	// (0x00060471) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa143,	// (0x00060471) list_double_large_graphic_pane_t2_cp2

0x146c,	// (0x0005779a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x146c,	// (0x0005779a) list_double2_graphic_pane_g1_cp2

0x147a,	// (0x000577a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x147a,	// (0x000577a8) list_double2_graphic_pane_g2_cp2

0x148b,	// (0x000577b9) list_double2_graphic_pane_g3_cp2

0x1495,	// (0x000577c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1495,	// (0x000577c3) list_double2_graphic_pane_t1_cp2

0x14ab,	// (0x000577d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14ab,	// (0x000577d9) list_double2_graphic_pane_t2_cp2

0x14bd,	// (0x000577eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x14bd,	// (0x000577eb) list_single_number_heading_pane_g1_cp2

0x14c9,	// (0x000577f7) list_single_number_heading_pane_g2_cp2

0x14d1,	// (0x000577ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0x14d1,	// (0x000577ff) list_single_number_heading_pane_t1_cp2

0x14e7,	// (0x00057815) list_single_number_heading_pane_t2_cp2_ParamLimits

0x14e7,	// (0x00057815) list_single_number_heading_pane_t2_cp2

0x14f9,	// (0x00057827) list_single_number_heading_pane_t3_cp2_ParamLimits

0x14f9,	// (0x00057827) list_single_number_heading_pane_t3_cp2

0x14bd,	// (0x000577eb) list_single_heading_pane_g1_cp2_ParamLimits

0x14bd,	// (0x000577eb) list_single_heading_pane_g1_cp2

0x14c9,	// (0x000577f7) list_single_heading_pane_g2_cp2

0x14d1,	// (0x000577ff) list_single_heading_pane_t1_cp2_ParamLimits

0x14d1,	// (0x000577ff) list_single_heading_pane_t1_cp2

0x9f0c,	// (0x0006023a) list_single_heading_pane_t2_cp2_ParamLimits

0x9f0c,	// (0x0006023a) list_single_heading_pane_t2_cp2

0x9e54,	// (0x00060182) list_double_graphic_pane_g1_cp2_ParamLimits

0x9e54,	// (0x00060182) list_double_graphic_pane_g1_cp2

0x9e60,	// (0x0006018e) list_double_graphic_pane_g2_cp2_ParamLimits

0x9e60,	// (0x0006018e) list_double_graphic_pane_g2_cp2

0x9e6f,	// (0x0006019d) list_double_graphic_pane_g3_cp2

0x9e77,	// (0x000601a5) list_double_graphic_pane_t1_cp2_ParamLimits

0x9e77,	// (0x000601a5) list_double_graphic_pane_t1_cp2

0x9e8d,	// (0x000601bb) list_double_graphic_pane_t2_cp2_ParamLimits

0x9e8d,	// (0x000601bb) list_double_graphic_pane_t2_cp2

0x156e,	// (0x0005789c) list_double_number_pane_g1_cp2_ParamLimits

0x156e,	// (0x0005789c) list_double_number_pane_g1_cp2

0x157a,	// (0x000578a8) list_double_number_pane_g2_cp2

0x9e18,	// (0x00060146) list_double_number_pane_t1_cp2_ParamLimits

0x9e18,	// (0x00060146) list_double_number_pane_t1_cp2

0x9e2c,	// (0x0006015a) list_double_number_pane_t2_cp2_ParamLimits

0x9e2c,	// (0x0006015a) list_double_number_pane_t2_cp2

0x9e42,	// (0x00060170) list_double_number_pane_t3_cp2_ParamLimits

0x9e42,	// (0x00060170) list_double_number_pane_t3_cp2

0x9d01,	// (0x0006002f) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d01,	// (0x0006002f) list_single_graphic_pane_g1_cp2

0x11e1,	// (0x0005750f) list_single_graphic_pane_g2_cp2_ParamLimits

0x11e1,	// (0x0005750f) list_single_graphic_pane_g2_cp2

0x15b2,	// (0x000578e0) list_single_graphic_pane_g3_cp2

0x9cd7,	// (0x00060005) list_single_graphic_pane_t1_cp2_ParamLimits

0x9cd7,	// (0x00060005) list_single_graphic_pane_t1_cp2

0x11e1,	// (0x0005750f) list_single_number_pane_g1_cp2_ParamLimits

0x11e1,	// (0x0005750f) list_single_number_pane_g1_cp2

0x15b2,	// (0x000578e0) list_single_number_pane_g2_cp2

0x9cd7,	// (0x00060005) list_single_number_pane_t1_cp2_ParamLimits

0x9cd7,	// (0x00060005) list_single_number_pane_t1_cp2

0x9ced,	// (0x0006001b) list_single_number_pane_t2_cp2_ParamLimits

0x9ced,	// (0x0006001b) list_single_number_pane_t2_cp2

0x1413,	// (0x00057741) list_double2_pane_g1_cp2_ParamLimits

0x1413,	// (0x00057741) list_double2_pane_g1_cp2

0x1424,	// (0x00057752) list_double2_pane_g2_cp2

0x1546,	// (0x00057874) list_double2_pane_t1_cp2_ParamLimits

0x1546,	// (0x00057874) list_double2_pane_t1_cp2

0x155c,	// (0x0005788a) list_double2_pane_t2_cp2_ParamLimits

0x155c,	// (0x0005788a) list_double2_pane_t2_cp2

0x156e,	// (0x0005789c) list_double_pane_g1_cp2_ParamLimits

0x156e,	// (0x0005789c) list_double_pane_g1_cp2

0x157a,	// (0x000578a8) list_double_pane_g2_cp2

0x1582,	// (0x000578b0) list_double_pane_t1_cp2_ParamLimits

0x1582,	// (0x000578b0) list_double_pane_t1_cp2

0x1598,	// (0x000578c6) list_double_pane_t2_cp2_ParamLimits

0x1598,	// (0x000578c6) list_double_pane_t2_cp2

0x69b2,	// (0x0005cce0) list_single_pane_cp2_g3

0x11e1,	// (0x0005750f) list_single_pane_g1_cp2_ParamLimits

0x11e1,	// (0x0005750f) list_single_pane_g1_cp2

0x15b2,	// (0x000578e0) list_single_pane_g2_cp2

0x15ba,	// (0x000578e8) list_single_pane_t1_cp2_ParamLimits

0x15ba,	// (0x000578e8) list_single_pane_t1_cp2

0x69ba,	// (0x0005cce8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x69ba,	// (0x0005cce8) list_single_large_graphic_pane_g1_cp2

0x15d2,	// (0x00057900) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x15d2,	// (0x00057900) list_single_large_graphic_pane_g2_cp2

0x15de,	// (0x0005790c) list_single_large_graphic_pane_g3_cp2

0x69c6,	// (0x0005ccf4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x69c6,	// (0x0005ccf4) list_single_large_graphic_pane_g4_cp1

0x15e6,	// (0x00057914) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x15e6,	// (0x00057914) list_single_large_graphic_pane_t1_cp2

0x9ca3,	// (0x0005ffd1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ca3,	// (0x0005ffd1) list_single_graphic_heading_pane_g1_cp2

0x9c70,	// (0x0005ff9e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9c70,	// (0x0005ff9e) list_single_graphic_heading_pane_g4_cp2

0x15b2,	// (0x000578e0) list_single_graphic_heading_pane_g5_cp2

0x9caf,	// (0x0005ffdd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9caf,	// (0x0005ffdd) list_single_graphic_heading_pane_t1_cp2

0x9cc5,	// (0x0005fff3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9cc5,	// (0x0005fff3) list_single_graphic_heading_pane_t2_cp2

0x9c64,	// (0x0005ff92) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9c64,	// (0x0005ff92) list_single_2graphic_pane_g1_cp2

0x9c70,	// (0x0005ff9e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9c70,	// (0x0005ff9e) list_single_2graphic_pane_g2_cp2

0x15b2,	// (0x000578e0) list_single_2graphic_pane_g3_cp2

0x9c81,	// (0x0005ffaf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9c81,	// (0x0005ffaf) list_single_2graphic_pane_g4_cp2

0x9c8d,	// (0x0005ffbb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9c8d,	// (0x0005ffbb) list_single_2graphic_pane_t1_cp2

0xdfe6,	// (0x00064314) list_highlight_pane_g10_cp1

0x984c,	// (0x0005fb7a) list_highlight_pane_g1_cp1

0x9854,	// (0x0005fb82) list_highlight_pane_g2_cp1

0x985c,	// (0x0005fb8a) list_highlight_pane_g3_cp1

0x9864,	// (0x0005fb92) list_highlight_pane_g4_cp1

0x986c,	// (0x0005fb9a) list_highlight_pane_g5_cp1

0x9874,	// (0x0005fba2) list_highlight_pane_g6_cp1

0x987c,	// (0x0005fbaa) list_highlight_pane_g7_cp1

0x9884,	// (0x0005fbb2) list_highlight_pane_g8_cp1

0x988c,	// (0x0005fbba) list_highlight_pane_g9_cp1

0x9774,	// (0x0005faa2) form_field_slider_pane_t3

0x9782,	// (0x0005fab0) form_field_slider_pane_t4

0x9790,	// (0x0005fabe) slider_form_pane_ParamLimits

0x9790,	// (0x0005fabe) slider_form_pane

0xdff0,	// (0x0006431e) control_abbreviations

0xdff0,	// (0x0006431e) control_conventions

0xdff0,	// (0x0006431e) control_definitions

0xdff0,	// (0x0006431e) format_table_attribute

0x9f56,	// (0x00060284) bg_popup_preview_window_pane_g9

0xdff0,	// (0x0006431e) format_table_data2

0xdff0,	// (0x0006431e) format_table_data3

0xdff0,	// (0x0006431e) format_table_data_example

0x0008,

0xdff0,	// (0x0006431e) intro_purpose

0xf8c5,	// (0x00065bf3) bg_popup_preview_window_pane_g

0xdff0,	// (0x0006431e) texts_category

0xdff0,	// (0x0006431e) texts_graphics

0x15fc,	// (0x0005792a) text_digital

0x160b,	// (0x00057939) text_primary

0x161a,	// (0x00057948) text_primary_small

0x1629,	// (0x00057957) text_secondary

0x1638,	// (0x00057966) text_title

0xa6d6,	// (0x00060a04) bg_passive_tab_pane_g1_cp3_srt

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp3_srt

0xa6df,	// (0x00060a0d) bg_passive_tab_pane_g3_cp3_srt

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp3_srt_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp3_srt

0xa6e8,	// (0x00060a16) tabs_4_active_pane_srt_g1

0xa6f0,	// (0x00060a1e) tabs_4_active_pane_srt_t1_ParamLimits

0xa6f0,	// (0x00060a1e) tabs_4_active_pane_srt_t1

0xa6d6,	// (0x00060a04) bg_active_tab_pane_g1_cp3_copy1

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp3_copy1

0xa6df,	// (0x00060a0d) bg_active_tab_pane_g3_cp3_copy1

0xe03e,	// (0x0006436c) tabs_2_long_active_pane_srt_ParamLimits

0xe03e,	// (0x0006436c) tabs_2_long_active_pane_srt

0xe03e,	// (0x0006436c) tabs_2_long_passive_pane_srt_ParamLimits

0xe03e,	// (0x0006436c) tabs_2_long_passive_pane_srt

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp4_srt_ParamLimits

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp4_srt

0xa377,	// (0x000606a5) bg_passive_tab_pane_g1_cp4_srt

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp4_srt

0xa380,	// (0x000606ae) bg_passive_tab_pane_g3_cp4_srt

0x623a,	// (0x0005c568) bg_active_tab_pane_cp4_srt_ParamLimits

0x623a,	// (0x0005c568) bg_active_tab_pane_cp4_srt

0xa389,	// (0x000606b7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa389,	// (0x000606b7) tabs_2_long_active_pane_srt_t1

0xa377,	// (0x000606a5) bg_active_tab_pane_g1_cp4_srt

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp4_srt

0xa380,	// (0x000606ae) bg_active_tab_pane_g3_cp4_srt

0xe168,	// (0x00064496) tabs_3_long_active_pane_srt_ParamLimits

0xe168,	// (0x00064496) tabs_3_long_active_pane_srt

0xe168,	// (0x00064496) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe168,	// (0x00064496) tabs_3_long_passive_pane_cp_srt

0xe168,	// (0x00064496) tabs_3_long_passive_pane_srt_ParamLimits

0xe168,	// (0x00064496) tabs_3_long_passive_pane_srt

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp5_srt_ParamLimits

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp5_srt

0x691d,	// (0x0005cc4b) bg_passive_tab_pane_g1_cp5_srt

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp5_srt

0x6926,	// (0x0005cc54) bg_passive_tab_pane_g3_cp5_srt

0x623a,	// (0x0005c568) bg_active_tab_pane_cp5_srt_ParamLimits

0x623a,	// (0x0005c568) bg_active_tab_pane_cp5_srt

0xa365,	// (0x00060693) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa365,	// (0x00060693) tabs_3_long_active_pane_srt_t1

0x691d,	// (0x0005cc4b) bg_active_tab_pane_g1_cp5_srt

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp5_srt

0x6926,	// (0x0005cc54) bg_active_tab_pane_g3_cp5_srt

0xa357,	// (0x00060685) navi_text_pane_srt_t1

0xa34f,	// (0x0006067d) navi_icon_pane_srt_g1

0x1723,	// (0x00057a51) midp_editing_number_pane_srt

0x1647,	// (0x00057975) midp_ticker_pane_srt

0x172b,	// (0x00057a59) midp_ticker_pane_srt_g1

0x1733,	// (0x00057a61) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00065a76) midp_ticker_pane_srt_g

0x173b,	// (0x00057a69) midp_ticker_pane_srt_t1

0xa340,	// (0x0006066e) midp_editing_number_pane_t1_copy1

0x69e0,	// (0x0005cd0e) listscroll_midp_pane

0x69e0,	// (0x0005cd0e) midp_form_pane

0x6a52,	// (0x0005cd80) midp_info_popup_window_ParamLimits

0x6a52,	// (0x0005cd80) midp_info_popup_window

0xf1d1,	// (0x000654ff) bg_popup_sub_pane_cp50_ParamLimits

0xf1d1,	// (0x000654ff) bg_popup_sub_pane_cp50

0x9480,	// (0x0005f7ae) listscroll_midp_info_pane_ParamLimits

0x9480,	// (0x0005f7ae) listscroll_midp_info_pane

0x9460,	// (0x0005f78e) listscroll_form_midp_pane_ParamLimits

0x9460,	// (0x0005f78e) listscroll_form_midp_pane

0x946c,	// (0x0005f79a) scroll_bar_cp050

0x9440,	// (0x0005f76e) list_midp_pane

0xb1c1,	// (0x000614ef) signal_pane_g2_cp

0x937a,	// (0x0005f6a8) listscroll_midp_info_pane_t1_ParamLimits

0x937a,	// (0x0005f6a8) listscroll_midp_info_pane_t1

0x9392,	// (0x0005f6c0) listscroll_midp_info_pane_t2_ParamLimits

0x9392,	// (0x0005f6c0) listscroll_midp_info_pane_t2

0x93d0,	// (0x0005f6fe) listscroll_midp_info_pane_t3_ParamLimits

0x93d0,	// (0x0005f6fe) listscroll_midp_info_pane_t3

0x940a,	// (0x0005f738) listscroll_midp_info_pane_t4_ParamLimits

0x940a,	// (0x0005f738) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00065b2e) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00065b2e) listscroll_midp_info_pane_t

0xf226,	// (0x00065554) scroll_pane_cp21

0x931a,	// (0x0005f648) form_midp_field_choice_group_pane

0x9323,	// (0x0005f651) form_midp_field_text_pane

0x9360,	// (0x0005f68e) form_midp_field_time_pane

0x9368,	// (0x0005f696) form_midp_gauge_slider_pane

0x9371,	// (0x0005f69f) form_midp_gauge_wait_pane

0xdff0,	// (0x0006431e) form_midp_image_pane

0x7779,	// (0x0005daa7) list_single_midp_pane_ParamLimits

0x7779,	// (0x0005daa7) list_single_midp_pane

0x92cf,	// (0x0005f5fd) form_midp_field_text_pane_t1

0x9099,	// (0x0005f3c7) input_focus_pane_cp050

0x9309,	// (0x0005f637) list_midp_form_text_pane

0x929e,	// (0x0005f5cc) form_midp_field_choice_group_pane_t1

0x92ac,	// (0x0005f5da) input_focus_pane_cp051

0x92c0,	// (0x0005f5ee) list_midp_choice_pane

0xdff0,	// (0x0006431e) status_idle_pane

0x9282,	// (0x0005f5b0) form_midp_field_time_pane_t1

0xdfe6,	// (0x00064314) wait_anim_pane_g2_copy1

0x9290,	// (0x0005f5be) form_midp_field_time_pane_t2

0x0001,

0x16a7,	// (0x000579d5) aid_navinavi_width_2_pane

0xf7fb,	// (0x00065b29) form_midp_field_time_pane_t

0xdff0,	// (0x0006431e) input_focus_pane_cp052

0xdff0,	// (0x0006431e) bg_input_focus_pane_cp040

0x9242,	// (0x0005f570) form_midp_gauge_slider_pane_t1

0x9250,	// (0x0005f57e) form_midp_gauge_slider_pane_t2

0x925e,	// (0x0005f58c) form_midp_gauge_slider_pane_t3

0x926c,	// (0x0005f59a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00065b20) form_midp_gauge_slider_pane_t

0x927a,	// (0x0005f5a8) form_midp_slider_pane

0xe03e,	// (0x0006436c) bg_input_focus_pane_cp041_ParamLimits

0xe03e,	// (0x0006436c) bg_input_focus_pane_cp041

0x920f,	// (0x0005f53d) form_midp_gauge_wait_pane_t1_ParamLimits

0x920f,	// (0x0005f53d) form_midp_gauge_wait_pane_t1

0x9221,	// (0x0005f54f) form_midp_gauge_wait_pane_t2_ParamLimits

0x9221,	// (0x0005f54f) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00065b1b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00065b1b) form_midp_gauge_wait_pane_t

0x9233,	// (0x0005f561) form_midp_wait_pane_ParamLimits

0x9233,	// (0x0005f561) form_midp_wait_pane

0x91d9,	// (0x0005f507) form_midp_image_pane_g1

0x91e2,	// (0x0005f510) form_midp_image_pane_t1

0x91f1,	// (0x0005f51f) form_midp_image_pane_t2

0x9200,	// (0x0005f52e) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00065b14) form_midp_image_pane_t

0x91d0,	// (0x0005f4fe) list_single_midp_pane_g1

0x3c9f,	// (0x00059fcd) list_single_midp_pane_t1

0x91a7,	// (0x0005f4d5) list_midp_form_item_pane_ParamLimits

0x91a7,	// (0x0005f4d5) list_midp_form_item_pane

0x164f,	// (0x0005797d) list_midp_form_item_pane_t1

0x165e,	// (0x0005798c) midp_ticker_pane_g1

0x166a,	// (0x00057998) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00065a5c) midp_ticker_pane_g

0x1676,	// (0x000579a4) midp_ticker_pane_t1

0xa58d,	// (0x000608bb) midp_editing_number_pane_t1

0xa56b,	// (0x00060899) midp_editing_number_pane

0xa57a,	// (0x000608a8) midp_ticker_pane

0xa330,	// (0x0006065e) ai_message_heading_pane

0xdff0,	// (0x0006431e) bg_popup_window_pane_cp14

0xa338,	// (0x00060666) listscroll_ai_message_pane

0xa2ba,	// (0x000605e8) ai_message_heading_pane_g1_ParamLimits

0xa2ba,	// (0x000605e8) ai_message_heading_pane_g1

0xa2c6,	// (0x000605f4) ai_message_heading_pane_g2_ParamLimits

0xa2c6,	// (0x000605f4) ai_message_heading_pane_g2

0xa2d2,	// (0x00060600) ai_message_heading_pane_g3_ParamLimits

0xa2d2,	// (0x00060600) ai_message_heading_pane_g3

0xa2de,	// (0x0006060c) ai_message_heading_pane_g4_ParamLimits

0xa2de,	// (0x0006060c) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00065c55) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00065c55) ai_message_heading_pane_g

0xa2ea,	// (0x00060618) ai_message_heading_pane_t1_ParamLimits

0xa2ea,	// (0x00060618) ai_message_heading_pane_t1

0xa304,	// (0x00060632) ai_message_heading_pane_t2_ParamLimits

0xa304,	// (0x00060632) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00065c5e) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00065c5e) ai_message_heading_pane_t

0xa316,	// (0x00060644) bg_popup_heading_pane_cp1_ParamLimits

0xa316,	// (0x00060644) bg_popup_heading_pane_cp1

0xa2a8,	// (0x000605d6) list_ai_message_pane_ParamLimits

0xa2a8,	// (0x000605d6) list_ai_message_pane

0xf226,	// (0x00065554) scroll_pane_cp10

0xa244,	// (0x00060572) list_ai_message_pane_g1

0xa24c,	// (0x0006057a) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00065c32) list_ai_message_pane_g

0xa254,	// (0x00060582) list_ai_message_pane_t1_ParamLimits

0xa254,	// (0x00060582) list_ai_message_pane_t1

0xa269,	// (0x00060597) list_ai_message_pane_t2_ParamLimits

0xa269,	// (0x00060597) list_ai_message_pane_t2

0xa27e,	// (0x000605ac) list_ai_message_pane_t3_ParamLimits

0xa27e,	// (0x000605ac) list_ai_message_pane_t3

0xa293,	// (0x000605c1) list_ai_message_pane_t4_ParamLimits

0xa293,	// (0x000605c1) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00065c37) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00065c37) list_ai_message_pane_t

0xa22f,	// (0x0006055d) cell_ai_soft_ind_pane_ParamLimits

0xa22f,	// (0x0006055d) cell_ai_soft_ind_pane

0x1688,	// (0x000579b6) cell_ai_soft_ind_pane_g1_ParamLimits

0x1688,	// (0x000579b6) cell_ai_soft_ind_pane_g1

0xdff0,	// (0x0006431e) grid_highlight_cp1

0x1695,	// (0x000579c3) text_secondary_cp56_ParamLimits

0x1695,	// (0x000579c3) text_secondary_cp56

0xa204,	// (0x00060532) example_general_pane_ParamLimits

0xa204,	// (0x00060532) example_general_pane

0xa210,	// (0x0006053e) example_parent_pane_g1_ParamLimits

0xa210,	// (0x0006053e) example_parent_pane_g1

0xa21c,	// (0x0006054a) example_parent_pane_t1_ParamLimits

0xa21c,	// (0x0006054a) example_parent_pane_t1

0x7150,	// (0x0005d47e) popup_preview_text_window_ParamLimits

0x7150,	// (0x0005d47e) popup_preview_text_window

0x15aa,	// (0x000578d8) list_single_pane_cp2_g4

0xe21e,	// (0x0006454c) bg_popup_preview_window_pane_ParamLimits

0xe21e,	// (0x0006454c) bg_popup_preview_window_pane

0x9f5e,	// (0x0006028c) popup_preview_text_window_t1_ParamLimits

0x9f5e,	// (0x0006028c) popup_preview_text_window_t1

0x9f7c,	// (0x000602aa) popup_preview_text_window_t2_ParamLimits

0x9f7c,	// (0x000602aa) popup_preview_text_window_t2

0x9fc5,	// (0x000602f3) popup_preview_text_window_t3_ParamLimits

0x9fc5,	// (0x000602f3) popup_preview_text_window_t3

0xa00a,	// (0x00060338) popup_preview_text_window_t4_ParamLimits

0xa00a,	// (0x00060338) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00065c06) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00065c06) popup_preview_text_window_t

0xa088,	// (0x000603b6) scroll_pane_cp11

0x900d,	// (0x0005f33b) bg_popup_preview_window_pane_g1

0x9f1e,	// (0x0006024c) bg_popup_preview_window_pane_g2

0x9f26,	// (0x00060254) bg_popup_preview_window_pane_g3

0x9f2e,	// (0x0006025c) bg_popup_preview_window_pane_g4

0x9f36,	// (0x00060264) bg_popup_preview_window_pane_g5

0x9f3e,	// (0x0006026c) bg_popup_preview_window_pane_g6

0x9f46,	// (0x00060274) bg_popup_preview_window_pane_g7

0x9f4e,	// (0x0006027c) bg_popup_preview_window_pane_g8

0x51e6,	// (0x0005b514) aid_popup_width_pane

0x712e,	// (0x0005d45c) popup_midp_note_alarm_window_ParamLimits

0x712e,	// (0x0005d45c) popup_midp_note_alarm_window

0xf0e8,	// (0x00065416) data_form_pane_ParamLimits

0x6086,	// (0x0005c3b4) form_field_data_pane_g1

0x6090,	// (0x0005c3be) form_field_data_pane_t1_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_ParamLimits

0x3b25,	// (0x00059e53) data_form_wide_pane_ParamLimits

0x3b36,	// (0x00059e64) form_field_data_wide_pane_g1

0x3b42,	// (0x00059e70) form_field_data_wide_pane_t1_ParamLimits

0xefe8,	// (0x00065316) input_focus_pane_cp6_ParamLimits

0x61f1,	// (0x0005c51f) input_popup_find_pane_g1_ParamLimits

0x61f1,	// (0x0005c51f) input_popup_find_pane_g1

0x6391,	// (0x0005c6bf) aid_navi_side_left_pane

0x63a6,	// (0x0005c6d4) aid_navi_side_right_pane

0x9947,	// (0x0005fc75) bg_popup_window_pane_cp30_ParamLimits

0x9947,	// (0x0005fc75) bg_popup_window_pane_cp30

0x99c1,	// (0x0005fcef) popup_midp_note_alarm_window_g1_ParamLimits

0x99c1,	// (0x0005fcef) popup_midp_note_alarm_window_g1

0x99f1,	// (0x0005fd1f) popup_midp_note_alarm_window_t1_ParamLimits

0x99f1,	// (0x0005fd1f) popup_midp_note_alarm_window_t1

0x9a92,	// (0x0005fdc0) popup_midp_note_alarm_window_t2_ParamLimits

0x9a92,	// (0x0005fdc0) popup_midp_note_alarm_window_t2

0x9b40,	// (0x0005fe6e) popup_midp_note_alarm_window_t3_ParamLimits

0x9b40,	// (0x0005fe6e) popup_midp_note_alarm_window_t3

0x9b68,	// (0x0005fe96) popup_midp_note_alarm_window_t4_ParamLimits

0x9b68,	// (0x0005fe96) popup_midp_note_alarm_window_t4

0x9b88,	// (0x0005feb6) popup_midp_note_alarm_window_t5_ParamLimits

0x9b88,	// (0x0005feb6) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00065ba3) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00065ba3) popup_midp_note_alarm_window_t

0x9c34,	// (0x0005ff62) wait_bar_pane_cp1_ParamLimits

0x9c34,	// (0x0005ff62) wait_bar_pane_cp1

0xdff0,	// (0x0006431e) wait_anim_pane_copy1

0xdff0,	// (0x0006431e) wait_border_pane_copy1

0x963d,	// (0x0005f96b) wait_border_pane_g1_copy1

0x3b5c,	// (0x00059e8a) form_field_popup_pane_g1

0x60a8,	// (0x0005c3d6) form_field_popup_pane_t1_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_cp7_ParamLimits

0xf122,	// (0x00065450) list_form_pane_ParamLimits

0x3b64,	// (0x00059e92) form_field_popup_wide_pane_g1

0x3b6c,	// (0x00059e9a) form_field_popup_wide_pane_t1_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_cp8_ParamLimits

0xf12e,	// (0x0006545c) list_form_wide_pane_ParamLimits

0xa773,	// (0x00060aa1) aid_size_cell_graphic_pane

0x6123,	// (0x0005c451) data_form_pane_t1_ParamLimits

0x79eb,	// (0x0005dd19) data_form_wide_pane_t1_ParamLimits

0x7435,	// (0x0005d763) bg_status_flat_pane

0x55ef,	// (0x0005b91d) title_pane_t1_ParamLimits

0xe006,	// (0x00064334) title_pane_t2_ParamLimits

0xe02c,	// (0x0006435a) title_pane_t3_ParamLimits

0xf532,	// (0x00065860) title_pane_t_ParamLimits

0xf4cf,	// (0x000657fd) level_1_signal_ParamLimits

0xf4dc,	// (0x0006580a) level_2_signal_ParamLimits

0xf4e9,	// (0x00065817) level_3_signal_ParamLimits

0xf4f6,	// (0x00065824) level_4_signal_ParamLimits

0xf503,	// (0x00065831) level_5_signal_ParamLimits

0xf510,	// (0x0006583e) level_6_signal_ParamLimits

0x11ed,	// (0x0005751b) level_7_signal_ParamLimits

0xf4cf,	// (0x000657fd) level_1_battery_ParamLimits

0xf4dc,	// (0x0006580a) level_2_battery_ParamLimits

0xf4e9,	// (0x00065817) level_3_battery_ParamLimits

0xf4f6,	// (0x00065824) level_4_battery_ParamLimits

0xf503,	// (0x00065831) level_5_battery_ParamLimits

0xf510,	// (0x0006583e) level_6_battery_ParamLimits

0x11ed,	// (0x0005751b) level_7_battery_ParamLimits

0x984c,	// (0x0005fb7a) bg_status_flat_pane_g1

0x9854,	// (0x0005fb82) bg_status_flat_pane_g2

0x985c,	// (0x0005fb8a) bg_status_flat_pane_g3

0x9864,	// (0x0005fb92) bg_status_flat_pane_g4

0x986c,	// (0x0005fb9a) bg_status_flat_pane_g5

0x9874,	// (0x0005fba2) bg_status_flat_pane_g6

0x987c,	// (0x0005fbaa) bg_status_flat_pane_g7

0x565f,	// (0x0005b98d) tabs_3_active_pane_t1_ParamLimits

0x565f,	// (0x0005b98d) tabs_3_passive_pane_t1_ParamLimits

0x5679,	// (0x0005b9a7) tabs_4_active_pane_t1_ParamLimits

0x5679,	// (0x0005b9a7) tabs_4_1_passive_pane_t1_ParamLimits

0x6228,	// (0x0005c556) tabs_2_active_pane_t1_ParamLimits

0x6228,	// (0x0005c556) tabs_2_passive_pane_t1_ParamLimits

0x623a,	// (0x0005c568) bg_active_tab_pane_cp4_ParamLimits

0x6248,	// (0x0005c576) tabs_2_long_active_pane_t1_ParamLimits

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp4_ParamLimits

0x76c6,	// (0x0005d9f4) list_single_midp_graphic_pane_t1_ParamLimits

0x623a,	// (0x0005c568) bg_active_tab_pane_cp5_ParamLimits

0x6267,	// (0x0005c595) tabs_3_long_active_pane_t1_ParamLimits

0x625b,	// (0x0005c589) bg_passive_tab_pane_cp5_ParamLimits

0x76c6,	// (0x0005d9f4) list_single_midp_graphic_pane_t1

0x7435,	// (0x0005d763) bg_status_flat_pane_ParamLimits

0x74fe,	// (0x0005d82c) indicator_pane_cp2_ParamLimits

0x74fe,	// (0x0005d82c) indicator_pane_cp2

0x8dcb,	// (0x0005f0f9) navi_pane_srt_ParamLimits

0x8dcb,	// (0x0005f0f9) navi_pane_srt

0x8def,	// (0x0005f11d) popup_clock_digital_analogue_window_cp1

0xe082,	// (0x000643b0) indicator_pane_t1

0x1647,	// (0x00057975) copy_highlight_pane

0x1647,	// (0x00057975) cursor_graphics_pane

0x1647,	// (0x00057975) graphic_within_text_pane

0x1647,	// (0x00057975) link_highlight_pane

0xa04b,	// (0x00060379) popup_preview_text_window_t5_ParamLimits

0xa04b,	// (0x00060379) popup_preview_text_window_t5

0x16af,	// (0x000579dd) cursor_digital_pane

0x16af,	// (0x000579dd) cursor_primary_pane

0x16c0,	// (0x000579ee) cursor_primary_small_pane

0x16c8,	// (0x000579f6) cursor_secondary_pane

0x16d0,	// (0x000579fe) cursor_title_pane

0x16af,	// (0x000579dd) link_highlight_digital_pane

0x16b7,	// (0x000579e5) link_highlight_primary_pane

0x16c0,	// (0x000579ee) link_highlight_primary_small_pane

0x16c8,	// (0x000579f6) link_highlight_secondary_pane

0x16d0,	// (0x000579fe) link_highlight_title_pane

0x16af,	// (0x000579dd) copy_highlight_digital_pane

0x16af,	// (0x000579dd) copy_highlight_primary_pane

0x16c0,	// (0x000579ee) copy_highlight_primary_small_pane

0x16c8,	// (0x000579f6) copy_highlight_secondary_pane

0x16d0,	// (0x000579fe) copy_highlight_title_pane

0x16c8,	// (0x000579f6) graphic_text_digital_pane

0x98ea,	// (0x0005fc18) graphic_text_primary_pane

0x98f3,	// (0x0005fc21) graphic_text_primary_small_pane

0x16c0,	// (0x000579ee) graphic_text_secondary_pane

0x16af,	// (0x000579dd) graphic_text_title_pane

0x6aaa,	// (0x0005cdd8) cursor_primary_pane_g1

0x98dc,	// (0x0005fc0a) cursor_text_primary_t1

0x98c4,	// (0x0005fbf2) cursor_primary_small_pane_g1

0x98ce,	// (0x0005fbfc) cursor_text_primary_small_t1

0x98ac,	// (0x0005fbda) cursor_primary_small_pane_g1_copy1

0x98b6,	// (0x0005fbe4) cursor_text_primary_small_t1_copy1

0x9894,	// (0x0005fbc2) cursor_text_title_t1

0x98a2,	// (0x0005fbd0) cursor_title_pane_g1

0x6aaa,	// (0x0005cdd8) cursor_digital_pane_g1

0x16d8,	// (0x00057a06) cursor_text_digital_t1

0x16e6,	// (0x00057a14) link_highlight_primary_pane_g1

0x983d,	// (0x0005fb6b) link_highlight_primary_pane_t1

0x16e6,	// (0x00057a14) link_highlight_primary_small_pane_g1

0x16ee,	// (0x00057a1c) link_highlight_primary_small_pane_t1

0x16e6,	// (0x00057a14) link_highlight_secondary_pane_g1

0x16fd,	// (0x00057a2b) link_highlight_secondary_pane_t1

0x97a2,	// (0x0005fad0) link_highlight_title_pane_g1

0x97b9,	// (0x0005fae7) link_highlight_title_pane_t1

0x97a2,	// (0x0005fad0) link_highlight_digital_pane_g1

0x97aa,	// (0x0005fad8) link_highlight_digital_pane_t1

0x965c,	// (0x0005f98a) copy_highlight_primary_pane_g1

0x9682,	// (0x0005f9b0) copy_highlight_primary_pane_t1

0x965c,	// (0x0005f98a) copy_highlight_primary_small_pane_g1

0x9673,	// (0x0005f9a1) copy_highlight_primary_small_pane_t1

0x170c,	// (0x00057a3a) copy_highlight_secondary_pane_g1

0x1714,	// (0x00057a42) copy_highlight_secondary_pane_t1

0x965c,	// (0x0005f98a) copy_highlight_title_pane_g1

0x9664,	// (0x0005f992) copy_highlight_title_pane_t1

0x965c,	// (0x0005f98a) copy_highlight_digital_pane_g1

0xa941,	// (0x00060c6f) copy_highlight_digital_pane_t1

0xa895,	// (0x00060bc3) graphic_text_primary_pane_g1

0xa925,	// (0x00060c53) graphic_text_primary_pane_t1

0xa933,	// (0x00060c61) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00065cd2) graphic_text_primary_pane_t

0xa901,	// (0x00060c2f) graphic_text_primary_small_pane_g1

0xa909,	// (0x00060c37) graphic_text_primary_small_pane_t1

0xa917,	// (0x00060c45) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00065ccd) graphic_text_primary_small_pane_t

0xa8dd,	// (0x00060c0b) graphic_text_secondary_pane_g1

0xa8e5,	// (0x00060c13) graphic_text_secondary_pane_t1

0xa8f3,	// (0x00060c21) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00065cc8) graphic_text_secondary_pane_t

0xa8b9,	// (0x00060be7) graphic_text_title_pane_g1

0xa8c1,	// (0x00060bef) graphic_text_title_pane_t1

0xa8cf,	// (0x00060bfd) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00065cc3) graphic_text_title_pane_t

0xa895,	// (0x00060bc3) graphic_text_digital_pane_g1

0xa89d,	// (0x00060bcb) graphic_text_digital_pane_t1

0xa8ab,	// (0x00060bd9) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00065cbe) graphic_text_digital_pane_t

0xe03e,	// (0x0006436c) navi_icon_pane_srt_ParamLimits

0xe03e,	// (0x0006436c) navi_icon_pane_srt

0xdff0,	// (0x0006431e) navi_midp_pane_srt

0xdff0,	// (0x0006431e) navi_navi_pane_srt

0xe03e,	// (0x0006436c) navi_text_pane_srt_ParamLimits

0xe03e,	// (0x0006436c) navi_text_pane_srt

0xa860,	// (0x00060b8e) navi_navi_icon_text_pane_srt

0xa868,	// (0x00060b96) navi_navi_pane_srt_g1_ParamLimits

0xa868,	// (0x00060b96) navi_navi_pane_srt_g1

0xa87a,	// (0x00060ba8) navi_navi_pane_srt_g2_ParamLimits

0xa87a,	// (0x00060ba8) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00065cb9) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00065cb9) navi_navi_pane_srt_g

0xa88c,	// (0x00060bba) navi_navi_tabs_pane_srt

0xa860,	// (0x00060b8e) navi_navi_text_pane_srt

0xa860,	// (0x00060b8e) navi_navi_volume_pane_srt

0xa851,	// (0x00060b7f) navi_navi_text_pane_srt_t1

0x7b42,	// (0x0005de70) navi_navi_volume_pane_srt_g1

0x7b4a,	// (0x0005de78) volume_small_pane_srt_ParamLimits

0x7b4a,	// (0x0005de78) volume_small_pane_srt

0x6ab4,	// (0x0005cde2) volume_small_pane_srt_g1_ParamLimits

0x6ab4,	// (0x0005cde2) volume_small_pane_srt_g1

0x6ac4,	// (0x0005cdf2) volume_small_pane_srt_g2_ParamLimits

0x6ac4,	// (0x0005cdf2) volume_small_pane_srt_g2

0x6ad5,	// (0x0005ce03) volume_small_pane_srt_g3_ParamLimits

0x6ad5,	// (0x0005ce03) volume_small_pane_srt_g3

0x6ae6,	// (0x0005ce14) volume_small_pane_srt_g4_ParamLimits

0x6ae6,	// (0x0005ce14) volume_small_pane_srt_g4

0x6af7,	// (0x0005ce25) volume_small_pane_srt_g5_ParamLimits

0x6af7,	// (0x0005ce25) volume_small_pane_srt_g5

0x6b08,	// (0x0005ce36) volume_small_pane_srt_g6_ParamLimits

0x6b08,	// (0x0005ce36) volume_small_pane_srt_g6

0x6b19,	// (0x0005ce47) volume_small_pane_srt_g7_ParamLimits

0x6b19,	// (0x0005ce47) volume_small_pane_srt_g7

0x6b2a,	// (0x0005ce58) volume_small_pane_srt_g8_ParamLimits

0x6b2a,	// (0x0005ce58) volume_small_pane_srt_g8

0x6b3b,	// (0x0005ce69) volume_small_pane_srt_g9_ParamLimits

0x6b3b,	// (0x0005ce69) volume_small_pane_srt_g9

0x6b4c,	// (0x0005ce7a) volume_small_pane_srt_g10_ParamLimits

0x6b4c,	// (0x0005ce7a) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00065a61) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00065a61) volume_small_pane_srt_g

0x58c6,	// (0x0005bbf4) query_popup_data_pane_cp2

0xa837,	// (0x00060b65) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa837,	// (0x00060b65) navi_navi_icon_text_pane_srt_t1

0x98ea,	// (0x0005fc18) navi_tabs_2_long_pane_srt

0x98ea,	// (0x0005fc18) navi_tabs_2_pane_srt

0x98ea,	// (0x0005fc18) navi_tabs_3_long_pane_srt

0x98ea,	// (0x0005fc18) navi_tabs_3_pane_srt

0x98ea,	// (0x0005fc18) navi_tabs_4_pane_srt

0x7b22,	// (0x0005de50) tabs_2_active_pane_srt_ParamLimits

0x7b22,	// (0x0005de50) tabs_2_active_pane_srt

0x7b32,	// (0x0005de60) tabs_2_passive_pane_srt_ParamLimits

0x7b32,	// (0x0005de60) tabs_2_passive_pane_srt

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp1_srt_ParamLimits

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp1_srt

0xa803,	// (0x00060b31) bg_passive_tab_pane_g1_cp1_srt

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp1_srt

0xa80c,	// (0x00060b3a) bg_passive_tab_pane_g3_cp1_srt

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp1_srt_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp1_srt

0xa815,	// (0x00060b43) tabs_2_active_pane_srt_g1

0xa81d,	// (0x00060b4b) tabs_2_active_pane_srt_t1_ParamLimits

0xa81d,	// (0x00060b4b) tabs_2_active_pane_srt_t1

0xa803,	// (0x00060b31) bg_active_tab_pane_g1_cp1_srt

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp1_srt

0xa80c,	// (0x00060b3a) bg_active_tab_pane_g3_cp1_srt

0x7aef,	// (0x0005de1d) tabs_3_active_pane_srt_ParamLimits

0x7aef,	// (0x0005de1d) tabs_3_active_pane_srt

0x7b00,	// (0x0005de2e) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b00,	// (0x0005de2e) tabs_3_passive_pane_cp_srt

0x7b11,	// (0x0005de3f) tabs_3_passive_pane_srt_ParamLimits

0x7b11,	// (0x0005de3f) tabs_3_passive_pane_srt

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp2_srt_ParamLimits

0xf51d,	// (0x0006584b) bg_passive_tab_pane_cp2_srt

0x6b5d,	// (0x0005ce8b) bg_passive_tab_pane_g1_cp2_srt

0x6790,	// (0x0005cabe) bg_passive_tab_pane_g2_cp2_srt

0x6b66,	// (0x0005ce94) bg_passive_tab_pane_g3_cp2_srt

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp2_srt_ParamLimits

0xe03e,	// (0x0006436c) bg_active_tab_pane_cp2_srt

0xa7e9,	// (0x00060b17) tabs_3_active_pane_srt_g1

0xa7f1,	// (0x00060b1f) tabs_3_active_pane_srt_t1_ParamLimits

0xa7f1,	// (0x00060b1f) tabs_3_active_pane_srt_t1

0x6b5d,	// (0x0005ce8b) bg_active_tab_pane_g1_cp2_srt

0x6790,	// (0x0005cabe) bg_active_tab_pane_g2_cp2_srt

0x6b66,	// (0x0005ce94) bg_active_tab_pane_g3_cp2_srt

0x7aa7,	// (0x0005ddd5) tabs_4_active_pane_srt_ParamLimits

0x7aa7,	// (0x0005ddd5) tabs_4_active_pane_srt

0x7ab9,	// (0x0005dde7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7ab9,	// (0x0005dde7) tabs_4_passive_pane_cp2_srt

0x6d9b,	// (0x0005d0c9) aid_size_cell_toolbar

0x625b,	// (0x0005c589) main_idle_act_pane_ParamLimits

0x6f60,	// (0x0005d28e) popup_large_graphic_colour_window_ParamLimits

0x72cb,	// (0x0005d5f9) popup_toolbar_window_ParamLimits

0x72cb,	// (0x0005d5f9) popup_toolbar_window

0xa5b8,	// (0x000608e6) list_single_graphic_2heading_pane_ParamLimits

0xa5b8,	// (0x000608e6) list_single_graphic_2heading_pane

0xf3b7,	// (0x000656e5) aid_size_cell_apps_grid_lsc_pane

0xf3c9,	// (0x000656f7) aid_size_cell_apps_grid_prt_pane

0xf51d,	// (0x0006584b) bg_wml_button_pane_cp1_ParamLimits

0xf51d,	// (0x0006584b) bg_wml_button_pane_cp1

0x92cf,	// (0x0005f5fd) form_midp_field_text_pane_t1_ParamLimits

0x9099,	// (0x0005f3c7) input_focus_pane_cp050_ParamLimits

0x9309,	// (0x0005f637) list_midp_form_text_pane_ParamLimits

0x92ac,	// (0x0005f5da) input_focus_pane_cp051_ParamLimits

0x92c0,	// (0x0005f5ee) list_midp_choice_pane_ParamLimits

0x914f,	// (0x0005f47d) list_single_2graphic_pane_cp3_ParamLimits

0x914f,	// (0x0005f47d) list_single_2graphic_pane_cp3

0x9174,	// (0x0005f4a2) list_single_midp_graphic_pane_ParamLimits

0x9174,	// (0x0005f4a2) list_single_midp_graphic_pane

0x5154,	// (0x0005b482) list_single_graphic_2heading_pane_g1_ParamLimits

0x5154,	// (0x0005b482) list_single_graphic_2heading_pane_g1

0x5160,	// (0x0005b48e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5160,	// (0x0005b48e) list_single_graphic_2heading_pane_g4

0x516c,	// (0x0005b49a) list_single_graphic_2heading_pane_g5_ParamLimits

0x516c,	// (0x0005b49a) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00065ab4) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00065ab4) list_single_graphic_2heading_pane_g

0x5178,	// (0x0005b4a6) list_single_graphic_2heading_pane_t1_ParamLimits

0x5178,	// (0x0005b4a6) list_single_graphic_2heading_pane_t1

0x518c,	// (0x0005b4ba) list_single_graphic_2heading_pane_t2_ParamLimits

0x518c,	// (0x0005b4ba) list_single_graphic_2heading_pane_t2

0x51a6,	// (0x0005b4d4) list_single_graphic_2heading_pane_t3_ParamLimits

0x51a6,	// (0x0005b4d4) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00065abb) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00065abb) list_single_graphic_2heading_pane_t

0x8f4b,	// (0x0005f279) bg_popup_sub_pane_cp2

0x8f75,	// (0x0005f2a3) grid_toobar_pane

0x7629,	// (0x0005d957) cell_toolbar_pane_ParamLimits

0x7629,	// (0x0005d957) cell_toolbar_pane

0x8fb1,	// (0x0005f2df) cell_toolbar_pane_g1_ParamLimits

0x8fb1,	// (0x0005f2df) cell_toolbar_pane_g1

0x8fc5,	// (0x0005f2f3) cell_toolbar_pane_g2_ParamLimits

0x8fc5,	// (0x0005f2f3) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00065ac9) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00065ac9) cell_toolbar_pane_g

0x8fe7,	// (0x0005f315) grid_highlight_pane_cp2_ParamLimits

0x8fe7,	// (0x0005f315) grid_highlight_pane_cp2

0x9001,	// (0x0005f32f) toolbar_button_pane

0x900d,	// (0x0005f33b) toolbar_button_pane_g1

0x9015,	// (0x0005f343) toolbar_button_pane_g2

0x901d,	// (0x0005f34b) toolbar_button_pane_g3

0x9025,	// (0x0005f353) toolbar_button_pane_g4

0x902d,	// (0x0005f35b) toolbar_button_pane_g5

0x9035,	// (0x0005f363) toolbar_button_pane_g6

0x903d,	// (0x0005f36b) toolbar_button_pane_g7

0x9045,	// (0x0005f373) toolbar_button_pane_g8

0x904d,	// (0x0005f37b) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00065ace) toolbar_button_pane_g

0x766d,	// (0x0005d99b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x766d,	// (0x0005d99b) list_single_2graphic_pane_g1_cp3

0x7679,	// (0x0005d9a7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7679,	// (0x0005d9a7) list_single_2graphic_pane_g2_cp3

0x768a,	// (0x0005d9b8) list_single_2graphic_pane_g3_cp3

0x7692,	// (0x0005d9c0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7692,	// (0x0005d9c0) list_single_2graphic_pane_g4_cp3

0x769e,	// (0x0005d9cc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x769e,	// (0x0005d9cc) list_single_2graphic_pane_t1_cp3

0x76ba,	// (0x0005d9e8) list_single_midp_graphic_pane_g2_ParamLimits

0x76ba,	// (0x0005d9e8) list_single_midp_graphic_pane_g2

0x514c,	// (0x0005b47a) aid_zoom_text_primary

0x6da3,	// (0x0005d0d1) aid_zoom_text_secondary

0x6bbd,	// (0x0005ceeb) status_small_pane_g7_ParamLimits

0x6bbd,	// (0x0005ceeb) status_small_pane_g7

0x6be0,	// (0x0005cf0e) status_small_pane_t1_ParamLimits

0x55d2,	// (0x0005b900) title_pane_g2

0x0003,

0xf529,	// (0x00065857) title_pane_g

0x5920,	// (0x0005bc4e) aid_size_cell_colour_1_pane_ParamLimits

0x5920,	// (0x0005bc4e) aid_size_cell_colour_1_pane

0x5934,	// (0x0005bc62) aid_size_cell_colour_2_pane_ParamLimits

0x5934,	// (0x0005bc62) aid_size_cell_colour_2_pane

0x5948,	// (0x0005bc76) aid_size_cell_colour_3_pane_ParamLimits

0x5948,	// (0x0005bc76) aid_size_cell_colour_3_pane

0x595c,	// (0x0005bc8a) aid_size_cell_colour_4_pane_ParamLimits

0x595c,	// (0x0005bc8a) aid_size_cell_colour_4_pane

0x62ce,	// (0x0005c5fc) title_pane_stacon_g1_ParamLimits

0x62ce,	// (0x0005c5fc) title_pane_stacon_g1

0x96d9,	// (0x0005fa07) popup_note_wait_window_g3_ParamLimits

0x96d9,	// (0x0005fa07) popup_note_wait_window_g3

0x974f,	// (0x0005fa7d) popup_note_wait_window_t5_ParamLimits

0x974f,	// (0x0005fa7d) popup_note_wait_window_t5

0xdff0,	// (0x0006431e) main_feb_china_hwr_fs_writing_pane

0x6e47,	// (0x0005d175) popup_feb_china_hwr_fs_window_ParamLimits

0x6e47,	// (0x0005d175) popup_feb_china_hwr_fs_window

0x76dc,	// (0x0005da0a) aid_size_cell_hwr_fs_ParamLimits

0x76dc,	// (0x0005da0a) aid_size_cell_hwr_fs

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp3_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp3

0x76f1,	// (0x0005da1f) grid_hwr_fs_pane_ParamLimits

0x76f1,	// (0x0005da1f) grid_hwr_fs_pane

0x7709,	// (0x0005da37) linegrid_hwr_fs_pane_ParamLimits

0x7709,	// (0x0005da37) linegrid_hwr_fs_pane

0x7719,	// (0x0005da47) cell_hwr_fs_pane_ParamLimits

0x7719,	// (0x0005da47) cell_hwr_fs_pane

0x90a5,	// (0x0005f3d3) linegrid_hwr_fs_pane_g1_ParamLimits

0x90a5,	// (0x0005f3d3) linegrid_hwr_fs_pane_g1

0x90b1,	// (0x0005f3df) linegrid_hwr_fs_pane_g2_ParamLimits

0x90b1,	// (0x0005f3df) linegrid_hwr_fs_pane_g2

0x90c3,	// (0x0005f3f1) linegrid_hwr_fs_pane_g3_ParamLimits

0x90c3,	// (0x0005f3f1) linegrid_hwr_fs_pane_g3

0x773b,	// (0x0005da69) linegrid_hwr_fs_pane_g4_ParamLimits

0x773b,	// (0x0005da69) linegrid_hwr_fs_pane_g4

0x7755,	// (0x0005da83) linegrid_hwr_fs_pane_g5_ParamLimits

0x7755,	// (0x0005da83) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00065af9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00065af9) linegrid_hwr_fs_pane_g

0x90cf,	// (0x0005f3fd) cell_hwr_fs_pane_g1_ParamLimits

0x90cf,	// (0x0005f3fd) cell_hwr_fs_pane_g1

0x8e85,	// (0x0005f1b3) cell_hwr_fs_pane_g2_ParamLimits

0x8e85,	// (0x0005f1b3) cell_hwr_fs_pane_g2

0x90e5,	// (0x0005f413) cell_hwr_fs_pane_g3_ParamLimits

0x90e5,	// (0x0005f413) cell_hwr_fs_pane_g3

0x90f2,	// (0x0005f420) cell_hwr_fs_pane_g4_ParamLimits

0x90f2,	// (0x0005f420) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00065b04) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00065b04) cell_hwr_fs_pane_g

0x776b,	// (0x0005da99) cell_hwr_fs_pane_t1

0xdff0,	// (0x0006431e) grid_highlight_pane_cp6

0xdff0,	// (0x0006431e) main_idle_act2_pane

0xf20d,	// (0x0006553b) aid_inside_area_popup_secondary

0x9d6e,	// (0x0006009c) aid_inside_area_window_primary_ParamLimits

0x9d6e,	// (0x0006009c) aid_inside_area_window_primary

0xa950,	// (0x00060c7e) ai2_news_ticker_pane

0xa958,	// (0x00060c86) aid_size_cell_ai1_link_ParamLimits

0xa958,	// (0x00060c86) aid_size_cell_ai1_link

0xa972,	// (0x00060ca0) popup_ai2_data_window_ParamLimits

0xa972,	// (0x00060ca0) popup_ai2_data_window

0xa988,	// (0x00060cb6) popup_ai2_link_window_ParamLimits

0xa988,	// (0x00060cb6) popup_ai2_link_window

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp4_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp4

0xa99c,	// (0x00060cca) grid_ai2_link_pane_ParamLimits

0xa99c,	// (0x00060cca) grid_ai2_link_pane

0xa9b3,	// (0x00060ce1) popup_ai2_link_window_g1_ParamLimits

0xa9b3,	// (0x00060ce1) popup_ai2_link_window_g1

0xa9bf,	// (0x00060ced) popup_ai2_link_window_g2_ParamLimits

0xa9bf,	// (0x00060ced) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00065cd7) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00065cd7) popup_ai2_link_window_g

0xa9ce,	// (0x00060cfc) ai2_mp_button_pane

0xa9d6,	// (0x00060d04) ai2_mp_volume_pane

0x92ac,	// (0x0005f5da) bg_popup_sub_pane_cp5_ParamLimits

0x92ac,	// (0x0005f5da) bg_popup_sub_pane_cp5

0xa9de,	// (0x00060d0c) heading_ai2_gene_pane_ParamLimits

0xa9de,	// (0x00060d0c) heading_ai2_gene_pane

0xa9ea,	// (0x00060d18) list_ai2_gene_pane_ParamLimits

0xa9ea,	// (0x00060d18) list_ai2_gene_pane

0xaa32,	// (0x00060d60) cell_ai2_link_pane_ParamLimits

0xaa32,	// (0x00060d60) cell_ai2_link_pane

0xaa48,	// (0x00060d76) cell_ai2_link_pane_g1

0xdff0,	// (0x0006431e) grid_highlight_pane_cp7

0x7b5f,	// (0x0005de8d) ai2_mp_volume_pane_g1

0xab18,	// (0x00060e46) ai2_mp_volume_pane_g2

0xaa8d,	// (0x00060dbb) list_ai2_gene_pane_t1

0xab20,	// (0x00060e4e) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00065cf0) ai2_mp_volume_pane_g

0x7b67,	// (0x0005de95) volume_small_pane_cp3

0xab28,	// (0x00060e56) aid_size_cell_ai2_button

0xab30,	// (0x00060e5e) grid_ai2_button_pane

0xab39,	// (0x00060e67) cell_ai2_button_pane_ParamLimits

0xab39,	// (0x00060e67) cell_ai2_button_pane

0xdfe6,	// (0x00064314) cell_ai2_button_pane_g1

0xdff0,	// (0x0006431e) grid_highlight_pane_cp8

0xaad8,	// (0x00060e06) ai2_gene_pane_t1_ParamLimits

0xaad8,	// (0x00060e06) ai2_gene_pane_t1

0x6d91,	// (0x0005d0bf) aid_height_parent_landscape

0xa3d7,	// (0x00060705) aid_height_set_list

0xa3e8,	// (0x00060716) aid_size_parent

0xa773,	// (0x00060aa1) aid_size_cell_graphic_pane_ParamLimits

0xa9fa,	// (0x00060d28) popup_ai2_data_window_g1_ParamLimits

0xa9fa,	// (0x00060d28) popup_ai2_data_window_g1

0xaa06,	// (0x00060d34) ai2_news_ticker_pane_g1

0xaa0e,	// (0x00060d3c) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00065cdc) ai2_news_ticker_pane_g

0xaa16,	// (0x00060d44) ai2_news_ticker_pane_t1

0xaa24,	// (0x00060d52) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00065ce1) ai2_news_ticker_pane_t

0xaa51,	// (0x00060d7f) heading_ai2_gene_pane_g1

0xaa59,	// (0x00060d87) heading_ai2_gene_pane_t1_ParamLimits

0xaa59,	// (0x00060d87) heading_ai2_gene_pane_t1

0xaa6e,	// (0x00060d9c) list_highlight_pane_cp6

0xaa76,	// (0x00060da4) ai2_gene_pane_ParamLimits

0xaa76,	// (0x00060da4) ai2_gene_pane

0xaa9b,	// (0x00060dc9) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00065ce6) list_ai2_gene_pane_t

0xaaa9,	// (0x00060dd7) list_highlight_pane_cp8_ParamLimits

0xaaa9,	// (0x00060dd7) list_highlight_pane_cp8

0xaaba,	// (0x00060de8) ai2_gene_pane_g1_ParamLimits

0xaaba,	// (0x00060de8) ai2_gene_pane_g1

0xaacc,	// (0x00060dfa) ai2_gene_pane_g2_ParamLimits

0xaacc,	// (0x00060dfa) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00065ceb) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00065ceb) ai2_gene_pane_g

0xf093,	// (0x000653c1) scroll_pane_cp12

0x6d4e,	// (0x0005d07c) control_pane_t3_ParamLimits

0x6d4e,	// (0x0005d07c) control_pane_t3

0x6bd1,	// (0x0005ceff) status_small_pane_g8_ParamLimits

0x6bd1,	// (0x0005ceff) status_small_pane_g8

0x6f29,	// (0x0005d257) popup_find_window_ParamLimits

0x7142,	// (0x0005d470) popup_note_image_window_ParamLimits

0x3ab0,	// (0x00059dde) list_double2_graphic_pane_vc_g1_ParamLimits

0x3ab0,	// (0x00059dde) list_double2_graphic_pane_vc_g1

0x11e1,	// (0x0005750f) list_double2_graphic_pane_vc_g2_ParamLimits

0x11e1,	// (0x0005750f) list_double2_graphic_pane_vc_g2

0x7659,	// (0x0005d987) list_double2_graphic_pane_vc_g3_ParamLimits

0x7659,	// (0x0005d987) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00065ac2) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00065ac2) list_double2_graphic_pane_vc_g

0x3abc,	// (0x00059dea) list_double2_graphic_pane_vc_t1_ParamLimits

0x3abc,	// (0x00059dea) list_double2_graphic_pane_vc_t1

0x11e1,	// (0x0005750f) list_single_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_single_heading_pane_vc_g1

0x7659,	// (0x0005d987) list_single_heading_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_single_heading_pane_vc_g

0x3c0d,	// (0x00059f3b) list_single_heading_pane_vc_t1_ParamLimits

0x3c0d,	// (0x00059f3b) list_single_heading_pane_vc_t1

0x3c23,	// (0x00059f51) list_single_heading_pane_vc_t2_ParamLimits

0x3c23,	// (0x00059f51) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00065ae8) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00065ae8) list_single_heading_pane_vc_t

0x9055,	// (0x0005f383) list_setting_number_pane_vc_g1_ParamLimits

0x9055,	// (0x0005f383) list_setting_number_pane_vc_g1

0x9061,	// (0x0005f38f) list_setting_number_pane_vc_g2_ParamLimits

0x9061,	// (0x0005f38f) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065aed) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065aed) list_setting_number_pane_vc_g

0x3c35,	// (0x00059f63) list_setting_number_pane_vc_t1_ParamLimits

0x3c35,	// (0x00059f63) list_setting_number_pane_vc_t1

0x3c49,	// (0x00059f77) list_setting_number_pane_vc_t2_ParamLimits

0x3c49,	// (0x00059f77) list_setting_number_pane_vc_t2

0x3c65,	// (0x00059f93) list_setting_number_pane_vc_t3_ParamLimits

0x3c65,	// (0x00059f93) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00065af2) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00065af2) list_setting_number_pane_vc_t

0x3c8f,	// (0x00059fbd) set_value_pane_vc_ParamLimits

0x3c8f,	// (0x00059fbd) set_value_pane_vc

0xa5b8,	// (0x000608e6) list_double2_graphic_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double2_graphic_pane_vc

0xa5cb,	// (0x000608f9) list_double2_large_graphic_pane_vc_ParamLimits

0xa5cb,	// (0x000608f9) list_double2_large_graphic_pane_vc

0xa5b8,	// (0x000608e6) list_double2_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double2_pane_vc

0xa5b8,	// (0x000608e6) list_double_graphic_heading_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_graphic_heading_pane_vc

0xa5b8,	// (0x000608e6) list_double_graphic_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_graphic_pane_vc

0xa5b8,	// (0x000608e6) list_double_heading_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_heading_pane_vc

0xa5dd,	// (0x0006090b) list_double_large_graphic_pane_vc_ParamLimits

0xa5dd,	// (0x0006090b) list_double_large_graphic_pane_vc

0xa5b8,	// (0x000608e6) list_double_number_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_number_pane_vc

0xa5b8,	// (0x000608e6) list_double_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_pane_vc

0xa5b8,	// (0x000608e6) list_double_time_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_double_time_pane_vc

0xa5b8,	// (0x000608e6) list_setting_number_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_setting_number_pane_vc

0xa5b8,	// (0x000608e6) list_setting_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_setting_pane_vc

0xa5b8,	// (0x000608e6) list_single_graphic_heading_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_single_graphic_heading_pane_vc

0xa5b8,	// (0x000608e6) list_single_heading_pane_vc_ParamLimits

0xa5b8,	// (0x000608e6) list_single_heading_pane_vc

0xa5fb,	// (0x00060929) list_single_number_heading_pane_vc_ParamLimits

0xa5fb,	// (0x00060929) list_single_number_heading_pane_vc

0x3cae,	// (0x00059fdc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3cae,	// (0x00059fdc) list_double_graphic_heading_pane_vc_g1

0x11e1,	// (0x0005750f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x11e1,	// (0x0005750f) list_double_graphic_heading_pane_vc_g2

0x7659,	// (0x0005d987) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7659,	// (0x0005d987) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00065cf7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00065cf7) list_double_graphic_heading_pane_vc_g

0x3cba,	// (0x00059fe8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3cba,	// (0x00059fe8) list_double_graphic_heading_pane_vc_t1

0x3cce,	// (0x00059ffc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3cce,	// (0x00059ffc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00065cfe) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00065cfe) list_double_graphic_heading_pane_vc_t

0x9055,	// (0x0005f383) list_setting_pane_vc_g1_ParamLimits

0x9055,	// (0x0005f383) list_setting_pane_vc_g1

0x9061,	// (0x0005f38f) list_setting_pane_vc_g2_ParamLimits

0x9061,	// (0x0005f38f) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065aed) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065aed) list_setting_pane_vc_g

0x3ce6,	// (0x0005a014) list_setting_pane_vc_t1_ParamLimits

0x3ce6,	// (0x0005a014) list_setting_pane_vc_t1

0x3d02,	// (0x0005a030) list_setting_pane_vc_t2_ParamLimits

0x3d02,	// (0x0005a030) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00065d41) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00065d41) list_setting_pane_vc_t

0x3c8f,	// (0x00059fbd) set_value_pane_cp_vc_ParamLimits

0x3c8f,	// (0x00059fbd) set_value_pane_cp_vc

0x11e1,	// (0x0005750f) list_single_number_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_single_number_heading_pane_vc_g1

0x7659,	// (0x0005d987) list_single_number_heading_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_single_number_heading_pane_vc_g

0x3d1c,	// (0x0005a04a) list_single_number_heading_pane_vc_t1_ParamLimits

0x3d1c,	// (0x0005a04a) list_single_number_heading_pane_vc_t1

0x3d32,	// (0x0005a060) list_single_number_heading_pane_vc_t2_ParamLimits

0x3d32,	// (0x0005a060) list_single_number_heading_pane_vc_t2

0x3d44,	// (0x0005a072) list_single_number_heading_pane_vc_t3_ParamLimits

0x3d44,	// (0x0005a072) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00065d46) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00065d46) list_single_number_heading_pane_vc_t

0x3d56,	// (0x0005a084) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3d56,	// (0x0005a084) list_single_graphic_heading_pane_vc_g1

0x11e1,	// (0x0005750f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x11e1,	// (0x0005750f) list_single_graphic_heading_pane_vc_g4

0x7659,	// (0x0005d987) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7659,	// (0x0005d987) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00065d4d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00065d4d) list_single_graphic_heading_pane_vc_g

0x3c0d,	// (0x00059f3b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c0d,	// (0x00059f3b) list_single_graphic_heading_pane_vc_t1

0x3d62,	// (0x0005a090) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3d62,	// (0x0005a090) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x00065d54) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x00065d54) list_single_graphic_heading_pane_vc_t

0x11e1,	// (0x0005750f) list_double2_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_double2_pane_vc_g1

0x7659,	// (0x0005d987) list_double2_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_double2_pane_vc_g

0x3d74,	// (0x0005a0a2) list_double2_pane_vc_t1_ParamLimits

0x3d74,	// (0x0005a0a2) list_double2_pane_vc_t1

0xad72,	// (0x000610a0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xad72,	// (0x000610a0) list_double2_large_graphic_pane_vc_g1

0x4305,	// (0x0005a633) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4305,	// (0x0005a633) list_double2_large_graphic_pane_vc_g2

0x4311,	// (0x0005a63f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4311,	// (0x0005a63f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00065d59) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00065d59) list_double2_large_graphic_pane_vc_g

0x3ad2,	// (0x00059e00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3ad2,	// (0x00059e00) list_double2_large_graphic_pane_vc_t1

0xad7e,	// (0x000610ac) list_double_time_pane_vc_g1_ParamLimits

0xad7e,	// (0x000610ac) list_double_time_pane_vc_g1

0xad8a,	// (0x000610b8) list_double_time_pane_vc_g2_ParamLimits

0xad8a,	// (0x000610b8) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00065d60) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00065d60) list_double_time_pane_vc_g

0x3d8c,	// (0x0005a0ba) list_double_time_pane_vc_t1_ParamLimits

0x3d8c,	// (0x0005a0ba) list_double_time_pane_vc_t1

0x3db0,	// (0x0005a0de) list_double_time_pane_vc_t2_ParamLimits

0x3db0,	// (0x0005a0de) list_double_time_pane_vc_t2

0x3dff,	// (0x0005a12d) list_double_time_pane_vc_t3_ParamLimits

0x3dff,	// (0x0005a12d) list_double_time_pane_vc_t3

0x3e11,	// (0x0005a13f) list_double_time_pane_vc_t4_ParamLimits

0x3e11,	// (0x0005a13f) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x00065d65) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x00065d65) list_double_time_pane_vc_t

0x11e1,	// (0x0005750f) list_double_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_double_pane_vc_g1

0x7659,	// (0x0005d987) list_double_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_double_pane_vc_g

0x3e25,	// (0x0005a153) list_double_pane_vc_t1_ParamLimits

0x3e25,	// (0x0005a153) list_double_pane_vc_t1

0x3e39,	// (0x0005a167) list_double_pane_vc_t2_ParamLimits

0x3e39,	// (0x0005a167) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00065d6e) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00065d6e) list_double_pane_vc_t

0x11e1,	// (0x0005750f) list_double_number_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_double_number_pane_vc_g1

0x7659,	// (0x0005d987) list_double_number_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_double_number_pane_vc_g

0x3e51,	// (0x0005a17f) list_double_number_pane_vc_t1_ParamLimits

0x3e51,	// (0x0005a17f) list_double_number_pane_vc_t1

0x3e25,	// (0x0005a153) list_double_number_pane_vc_t2_ParamLimits

0x3e25,	// (0x0005a153) list_double_number_pane_vc_t2

0x3e63,	// (0x0005a191) list_double_number_pane_vc_t3_ParamLimits

0x3e63,	// (0x0005a191) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00065d73) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00065d73) list_double_number_pane_vc_t

0xad96,	// (0x000610c4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xad96,	// (0x000610c4) list_double_large_graphic_pane_vc_g1

0xadb2,	// (0x000610e0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xadb2,	// (0x000610e0) list_double_large_graphic_pane_vc_g2

0xadc6,	// (0x000610f4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xadc6,	// (0x000610f4) list_double_large_graphic_pane_vc_g3

0x3e7b,	// (0x0005a1a9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e7b,	// (0x0005a1a9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00065d7a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00065d7a) list_double_large_graphic_pane_vc_g

0x3e8a,	// (0x0005a1b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e8a,	// (0x0005a1b8) list_double_large_graphic_pane_vc_t1

0x3ea6,	// (0x0005a1d4) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3ea6,	// (0x0005a1d4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00065d83) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00065d83) list_double_large_graphic_pane_vc_t

0x11e1,	// (0x0005750f) list_double_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x0005750f) list_double_heading_pane_vc_g1

0x7659,	// (0x0005d987) list_double_heading_pane_vc_g2_ParamLimits

0x7659,	// (0x0005d987) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ae3) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ae3) list_double_heading_pane_vc_g

0x3ec8,	// (0x0005a1f6) list_double_heading_pane_vc_t1_ParamLimits

0x3ec8,	// (0x0005a1f6) list_double_heading_pane_vc_t1

0x3edc,	// (0x0005a20a) list_double_heading_pane_vc_t2_ParamLimits

0x3edc,	// (0x0005a20a) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00065d88) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00065d88) list_double_heading_pane_vc_t

0x3ef4,	// (0x0005a222) list_double_graphic_pane_vc_g1_ParamLimits

0x3ef4,	// (0x0005a222) list_double_graphic_pane_vc_g1

0xadd5,	// (0x00061103) list_double_graphic_pane_vc_g2_ParamLimits

0xadd5,	// (0x00061103) list_double_graphic_pane_vc_g2

0x11e1,	// (0x0005750f) list_double_graphic_pane_vc_g3_ParamLimits

0x11e1,	// (0x0005750f) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x00065d8d) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00065d8d) list_double_graphic_pane_vc_g

0x3f07,	// (0x0005a235) list_double_graphic_pane_vc_t1_ParamLimits

0x3f07,	// (0x0005a235) list_double_graphic_pane_vc_t1

0x3f26,	// (0x0005a254) list_double_graphic_pane_vc_t2_ParamLimits

0x3f26,	// (0x0005a254) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00065d96) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00065d96) list_double_graphic_pane_vc_t

0x51f2,	// (0x0005b520) aid_size_cell_fastswap

0x51fa,	// (0x0005b528) aid_size_cell_touch_ParamLimits

0x51fa,	// (0x0005b528) aid_size_cell_touch

0x545f,	// (0x0005b78d) popup_fast_swap_wide_window_ParamLimits

0x545f,	// (0x0005b78d) popup_fast_swap_wide_window

0x5565,	// (0x0005b893) touch_pane_ParamLimits

0x5565,	// (0x0005b893) touch_pane

0xf0e0,	// (0x0006540e) button_value_adjust_pane_cp2

0x3b02,	// (0x00059e30) button_value_adjust_pane_cp4

0x3b0a,	// (0x00059e38) form_field_data_pane_cp2

0x602c,	// (0x0005c35a) form_field_data_wide_pane_cp2

0xf3ee,	// (0x0006571c) bg_scroll_pane_ParamLimits

0x64c8,	// (0x0005c7f6) scroll_handle_pane_ParamLimits

0x64dc,	// (0x0005c80a) scroll_sc2_down_pane_ParamLimits

0x64dc,	// (0x0005c80a) scroll_sc2_down_pane

0xf41f,	// (0x0006574d) scroll_sc2_up_pane_ParamLimits

0xf41f,	// (0x0006574d) scroll_sc2_up_pane

0xb29a,	// (0x000615c8) grid_wheel_folder_pane_g1_ParamLimits

0xb29a,	// (0x000615c8) grid_wheel_folder_pane_g1

0x68b5,	// (0x0005cbe3) clock_nsta_pane_cp2_ParamLimits

0x68b5,	// (0x0005cbe3) clock_nsta_pane_cp2

0x69e0,	// (0x0005cd0e) listscroll_midp_pane_ParamLimits

0x69ec,	// (0x0005cd1a) midp_canvas_pane

0x178b,	// (0x00057ab9) nsta_clock_indic_pane

0x17b3,	// (0x00057ae1) listscroll_form_pane_vc

0x17bb,	// (0x00057ae9) listscroll_set_pane_vc_ParamLimits

0x17bb,	// (0x00057ae9) listscroll_set_pane_vc

0x7451,	// (0x0005d77f) clock_nsta_pane

0x74cc,	// (0x0005d7fa) indicator_nsta_pane

0x8f4b,	// (0x0005f279) bg_popup_sub_pane_cp2_ParamLimits

0x8f5f,	// (0x0005f28d) find_pane_cp2_ParamLimits

0x8f5f,	// (0x0005f28d) find_pane_cp2

0x8f75,	// (0x0005f2a3) grid_toobar_pane_ParamLimits

0x906d,	// (0x0005f39b) list_form_gen_pane_vc_ParamLimits

0x906d,	// (0x0005f39b) list_form_gen_pane_vc

0x9083,	// (0x0005f3b1) scroll_pane_cp8_vc_ParamLimits

0x9083,	// (0x0005f3b1) scroll_pane_cp8_vc

0x90ff,	// (0x0005f42d) data_form_wide_pane_vc_ParamLimits

0x90ff,	// (0x0005f42d) data_form_wide_pane_vc

0x910b,	// (0x0005f439) form_field_data_wide_pane_vc_g1

0x9113,	// (0x0005f441) form_field_data_wide_pane_vc_t1_ParamLimits

0x9113,	// (0x0005f441) form_field_data_wide_pane_vc_t1

0xf0f4,	// (0x00065422) input_focus_pane_cp6_vc_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_cp6_vc

0x9440,	// (0x0005f76e) list_midp_pane_ParamLimits

0x944c,	// (0x0005f77a) scroll_pane_cp16_ParamLimits

0x944c,	// (0x0005f77a) scroll_pane_cp16

0x94b6,	// (0x0005f7e4) button_value_adjust_pane_ParamLimits

0x94b6,	// (0x0005f7e4) button_value_adjust_pane

0xa3fa,	// (0x00060728) button_value_adjust_pane_cp6_ParamLimits

0xa3fa,	// (0x00060728) button_value_adjust_pane_cp6

0xa520,	// (0x0006084e) settings_code_pane_cp_ParamLimits

0xa520,	// (0x0006084e) settings_code_pane_cp

0xdfe6,	// (0x00064314) cell_touch_pane_g1

0xdfe6,	// (0x00064314) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00065a07) cell_touch_pane_g

0xab4b,	// (0x00060e79) cell_touch_pane_cp_ParamLimits

0xab4b,	// (0x00060e79) cell_touch_pane_cp

0xab5b,	// (0x00060e89) cell_touch_pane_ParamLimits

0xab5b,	// (0x00060e89) cell_touch_pane

0xdfe6,	// (0x00064314) scroll_sc2_down_pane_g1

0xdfe6,	// (0x00064314) scroll_sc2_up_pane_g1

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp4_vc

0xab6d,	// (0x00060e9b) list_set_graphic_pane_vc_g1_ParamLimits

0xab6d,	// (0x00060e9b) list_set_graphic_pane_vc_g1

0xab79,	// (0x00060ea7) list_set_graphic_pane_vc_g2_ParamLimits

0xab79,	// (0x00060ea7) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00065d03) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00065d03) list_set_graphic_pane_vc_g

0xab85,	// (0x00060eb3) text_primary_small_cp13_vc_ParamLimits

0xab85,	// (0x00060eb3) text_primary_small_cp13_vc

0xab9d,	// (0x00060ecb) list_set_graphic_pane_vc_ParamLimits

0xab9d,	// (0x00060ecb) list_set_graphic_pane_vc

0xdff0,	// (0x0006431e) input_focus_pane_cp2_vc

0xdfe6,	// (0x00064314) setting_code_pane_vc_g1

0xe055,	// (0x00064383) setting_code_pane_vc_t1

0xabb0,	// (0x00060ede) set_text_pane_vc_t1_ParamLimits

0xabb0,	// (0x00060ede) set_text_pane_vc_t1

0xdff0,	// (0x0006431e) input_focus_pane_cp1_vc

0xabcd,	// (0x00060efb) list_set_text_pane_vc

0xdfe6,	// (0x00064314) setting_text_pane_vc_g1

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp2_vc

0xe04c,	// (0x0006437a) setting_slider_graphic_pane_vc_g1

0xabd7,	// (0x00060f05) setting_slider_graphic_pane_vc_t1

0xabe7,	// (0x00060f15) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00065d08) setting_slider_graphic_pane_vc_t

0xabf7,	// (0x00060f25) slider_set_pane_cp_vc

0xabff,	// (0x00060f2d) slider_set_pane_vc_g1

0xac08,	// (0x00060f36) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00065d0d) slider_set_pane_vc_g

0xf14c,	// (0x0006547a) set_opt_bg_pane_g1_copy1

0xf154,	// (0x00065482) set_opt_bg_pane_g2_copy1

0xac34,	// (0x00060f62) set_opt_bg_pane_g3_copy1

0xf164,	// (0x00065492) set_opt_bg_pane_g4_copy1

0xf16c,	// (0x0006549a) set_opt_bg_pane_g5_copy1

0xf174,	// (0x000654a2) set_opt_bg_pane_g6_copy1

0xac3c,	// (0x00060f6a) set_opt_bg_pane_g7_copy1

0xac46,	// (0x00060f74) set_opt_bg_pane_g8_copy1

0xac4e,	// (0x00060f7c) set_opt_bg_pane_g9_copy1

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp_vc

0xac56,	// (0x00060f84) setting_slider_pane_vc_t1

0xac65,	// (0x00060f93) setting_slider_pane_vc_t2

0xac75,	// (0x00060fa3) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00065d1c) setting_slider_pane_vc_t

0xac85,	// (0x00060fb3) slider_set_pane_vc

0x77a7,	// (0x0005dad5) volume_set_pane_vc_g1

0x7b70,	// (0x0005de9e) volume_set_pane_vc_g2

0x7b79,	// (0x0005dea7) volume_set_pane_vc_g3

0x7b82,	// (0x0005deb0) volume_set_pane_vc_g4

0x7b8b,	// (0x0005deb9) volume_set_pane_vc_g5

0x7b94,	// (0x0005dec2) volume_set_pane_vc_g6

0x7b9d,	// (0x0005decb) volume_set_pane_vc_g7

0x7ba6,	// (0x0005ded4) volume_set_pane_vc_g8

0x7baf,	// (0x0005dedd) volume_set_pane_vc_g9

0x7bb8,	// (0x0005dee6) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00065d23) volume_set_pane_vc_g

0xac8d,	// (0x00060fbb) volume_set_pane_vc

0xac97,	// (0x00060fc5) button_value_adjust_pane_cp1_vc

0xaca1,	// (0x00060fcf) list_highlight_pane_cp2_vc

0xacaa,	// (0x00060fd8) list_set_pane_vc_ParamLimits

0xacaa,	// (0x00060fd8) list_set_pane_vc

0xad08,	// (0x00061036) main_pane_set_vc_t1_ParamLimits

0xad08,	// (0x00061036) main_pane_set_vc_t1

0xad1d,	// (0x0006104b) main_pane_set_vc_t2_ParamLimits

0xad1d,	// (0x0006104b) main_pane_set_vc_t2

0xad2f,	// (0x0006105d) main_pane_set_vc_t3_ParamLimits

0xad2f,	// (0x0006105d) main_pane_set_vc_t3

0xad41,	// (0x0006106f) main_pane_set_vc_t4_ParamLimits

0xad41,	// (0x0006106f) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00065d38) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00065d38) main_pane_set_vc_t

0xad53,	// (0x00061081) setting_code_pane_vc_ParamLimits

0xad53,	// (0x00061081) setting_code_pane_vc

0xad62,	// (0x00061090) setting_slider_graphic_pane_vc

0xad62,	// (0x00061090) setting_slider_pane_vc

0xad62,	// (0x00061090) setting_text_pane_vc

0xad62,	// (0x00061090) setting_volume_pane_vc

0xad6a,	// (0x00061098) scroll_pane_cp121_vc

0xf0ce,	// (0x000653fc) set_content_pane_vc

0xadf2,	// (0x00061120) button_value_adjust_pane_g1

0xadfb,	// (0x00061129) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x00065d9b) button_value_adjust_pane_g

0xae04,	// (0x00061132) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae04,	// (0x00061132) form_field_slider_wide_pane_vc_t1

0xae18,	// (0x00061146) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae18,	// (0x00061146) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00065da0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00065da0) form_field_slider_wide_pane_vc_t

0xe168,	// (0x00064496) input_focus_pane_cp10_vc_ParamLimits

0xe168,	// (0x00064496) input_focus_pane_cp10_vc

0xae46,	// (0x00061174) slider_cont_pane_cp1_vc_ParamLimits

0xae46,	// (0x00061174) slider_cont_pane_cp1_vc

0xae58,	// (0x00061186) slider_form_pane_g1_cp2

0xac08,	// (0x00060f36) slider_form_pane_g2_cp2

0xae85,	// (0x000611b3) form_field_slider_pane_vc_t3

0xae93,	// (0x000611c1) form_field_slider_pane_vc_t4

0xaea1,	// (0x000611cf) slider_form_pane_vc_ParamLimits

0xaea1,	// (0x000611cf) slider_form_pane_vc

0xaeae,	// (0x000611dc) form_field_slider_pane_vc_t1_ParamLimits

0xaeae,	// (0x000611dc) form_field_slider_pane_vc_t1

0xae18,	// (0x00061146) form_field_slider_pane_vc_t2_ParamLimits

0xae18,	// (0x00061146) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00065db2) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00065db2) form_field_slider_pane_vc_t

0xe168,	// (0x00064496) input_focus_pane_cp9_vc_ParamLimits

0xe168,	// (0x00064496) input_focus_pane_cp9_vc

0xaeca,	// (0x000611f8) slider_cont_pane_vc_ParamLimits

0xaeca,	// (0x000611f8) slider_cont_pane_vc

0xaede,	// (0x0006120c) list_form_graphic_pane_cp_vc_ParamLimits

0xaede,	// (0x0006120c) list_form_graphic_pane_cp_vc

0x910b,	// (0x0005f439) form_field_popup_wide_pane_vc_g1

0xaef3,	// (0x00061221) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaef3,	// (0x00061221) form_field_popup_wide_pane_vc_t1

0xf0f4,	// (0x00065422) input_focus_pane_cp8_vc_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_cp8_vc

0xaf38,	// (0x00061266) list_form_wide_pane_vc_ParamLimits

0xaf38,	// (0x00061266) list_form_wide_pane_vc

0xaf44,	// (0x00061272) list_form_graphic_pane_vc_g1

0xaf4c,	// (0x0006127a) list_form_graphic_pane_vc_t1_ParamLimits

0xaf4c,	// (0x0006127a) list_form_graphic_pane_vc_t1

0xe03e,	// (0x0006436c) list_highlight_pane_cp5_vc_ParamLimits

0xe03e,	// (0x0006436c) list_highlight_pane_cp5_vc

0xaf68,	// (0x00061296) list_form_graphic_pane_vc_ParamLimits

0xaf68,	// (0x00061296) list_form_graphic_pane_vc

0x910b,	// (0x0005f439) form_field_popup_pane_vc_g1

0xaf7e,	// (0x000612ac) form_field_popup_pane_vc_t1_ParamLimits

0xaf7e,	// (0x000612ac) form_field_popup_pane_vc_t1

0xf0f4,	// (0x00065422) input_focus_pane_cp7_vc_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_cp7_vc

0xaf95,	// (0x000612c3) list_form_pane_vc_ParamLimits

0xaf95,	// (0x000612c3) list_form_pane_vc

0xafa1,	// (0x000612cf) data_form_pane_vc_t1_ParamLimits

0xafa1,	// (0x000612cf) data_form_pane_vc_t1

0xf14c,	// (0x0006547a) input_focus_pane_vc_g1

0xf154,	// (0x00065482) input_focus_pane_vc_g2

0xf15c,	// (0x0006548a) input_focus_pane_vc_g3

0xf164,	// (0x00065492) input_focus_pane_vc_g4

0xf16c,	// (0x0006549a) input_focus_pane_vc_g5

0xf174,	// (0x000654a2) input_focus_pane_vc_g6

0xf17c,	// (0x000654aa) input_focus_pane_vc_g7

0xf184,	// (0x000654b2) input_focus_pane_vc_g8

0xf18c,	// (0x000654ba) input_focus_pane_vc_g9

0xdfe6,	// (0x00064314) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00065990) input_focus_pane_vc_g

0x90ff,	// (0x0005f42d) data_form_pane_vc_ParamLimits

0x90ff,	// (0x0005f42d) data_form_pane_vc

0x910b,	// (0x0005f439) form_field_data_pane_vc_g1

0xafbc,	// (0x000612ea) form_field_data_pane_vc_t1_ParamLimits

0xafbc,	// (0x000612ea) form_field_data_pane_vc_t1

0xf0f4,	// (0x00065422) input_focus_pane_vc_ParamLimits

0xf0f4,	// (0x00065422) input_focus_pane_vc

0xafd6,	// (0x00061304) button_value_adjust_pane_cp3_vc

0xafde,	// (0x0006130c) button_value_adjust_pane_cp5_vc

0xafe6,	// (0x00061314) form_field_data_pane_vc_ParamLimits

0xafe6,	// (0x00061314) form_field_data_pane_vc

0xaffd,	// (0x0006132b) form_field_data_pane_vc_cp2

0xb005,	// (0x00061333) form_field_data_wide_pane_vc_ParamLimits

0xb005,	// (0x00061333) form_field_data_wide_pane_vc

0xb01b,	// (0x00061349) form_field_data_wide_pane_vc_cp2

0xb023,	// (0x00061351) form_field_popup_pane_vc_ParamLimits

0xb023,	// (0x00061351) form_field_popup_pane_vc

0xb03a,	// (0x00061368) form_field_popup_wide_pane_vc_ParamLimits

0xb03a,	// (0x00061368) form_field_popup_wide_pane_vc

0xb050,	// (0x0006137e) form_field_slider_pane_vc_ParamLimits

0xb050,	// (0x0006137e) form_field_slider_pane_vc

0xb063,	// (0x00061391) form_field_slider_wide_pane_vc_ParamLimits

0xb063,	// (0x00061391) form_field_slider_wide_pane_vc

0xb076,	// (0x000613a4) grid_touch_1_pane_ParamLimits

0xb076,	// (0x000613a4) grid_touch_1_pane

0xb082,	// (0x000613b0) grid_touch_2_pane_ParamLimits

0xb082,	// (0x000613b0) grid_touch_2_pane

0x177d,	// (0x00057aab) touch_pane_g1_ParamLimits

0x177d,	// (0x00057aab) touch_pane_g1

0xb09a,	// (0x000613c8) cell_app_pane_cp_wide_ParamLimits

0xb09a,	// (0x000613c8) cell_app_pane_cp_wide

0xb0ab,	// (0x000613d9) grid_popup_fast_wide_pane_ParamLimits

0xb0ab,	// (0x000613d9) grid_popup_fast_wide_pane

0xb0bf,	// (0x000613ed) scroll_pane_cp19_ParamLimits

0xb0bf,	// (0x000613ed) scroll_pane_cp19

0xdff0,	// (0x0006431e) bg_popup_window_pane_cp20

0xb0d3,	// (0x00061401) listscroll_popup_fast_wide_pane

0xb0db,	// (0x00061409) grid_indicator_nsta_pane

0xb0ed,	// (0x0006141b) clock_nsta_pane_g1

0xb0f6,	// (0x00061424) clock_nsta_pane_t1

0xb112,	// (0x00061440) cell_indicator_nsta_pane_ParamLimits

0xb112,	// (0x00061440) cell_indicator_nsta_pane

0xb147,	// (0x00061475) cell_indicator_nsta_pane_g1

0xb155,	// (0x00061483) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00065dc3) cell_indicator_nsta_pane_g

0xb167,	// (0x00061495) clock_nsta_pane_cp

0xb170,	// (0x0006149e) indicator_nsta_pane_cp

0xb17a,	// (0x000614a8) nsta_clock_indic_pane_g1

0xe07a,	// (0x000643a8) grid_indicator_pane

0x657a,	// (0x0005c8a8) scroll_pane_cp29

0x6804,	// (0x0005cb32) indicator_nsta_pane_cp2_ParamLimits

0x6804,	// (0x0005cb32) indicator_nsta_pane_cp2

0xe03e,	// (0x0006436c) main_apps_wheel_pane

0x9323,	// (0x0005f651) form_midp_field_text_pane_ParamLimits

0x946c,	// (0x0005f79a) scroll_bar_cp050_ParamLimits

0xb1d3,	// (0x00061501) cell_indicator_pane_ParamLimits

0xb1d3,	// (0x00061501) cell_indicator_pane

0xb1ec,	// (0x0006151a) cell_indicator_pane_g1

0xb1f6,	// (0x00061524) grid_wheel_folder_pane_ParamLimits

0xb1f6,	// (0x00061524) grid_wheel_folder_pane

0xb20c,	// (0x0006153a) list_wheel_apps_pane_ParamLimits

0xb20c,	// (0x0006153a) list_wheel_apps_pane

0xb21d,	// (0x0006154b) main_apps_wheel_pane_g1_ParamLimits

0xb21d,	// (0x0006154b) main_apps_wheel_pane_g1

0xb231,	// (0x0006155f) main_apps_wheel_pane_g2_ParamLimits

0xb231,	// (0x0006155f) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x00065ddf) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x00065ddf) main_apps_wheel_pane_g

0xb249,	// (0x00061577) main_apps_wheel_pane_t1_ParamLimits

0xb249,	// (0x00061577) main_apps_wheel_pane_t1

0xb26c,	// (0x0006159a) list_wheel_apps_pane_g1

0xb274,	// (0x000615a2) list_wheel_apps_pane_g2

0xb27c,	// (0x000615aa) list_wheel_apps_pane_g3

0xb286,	// (0x000615b4) list_wheel_apps_pane_g4

0xb290,	// (0x000615be) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x00065de4) list_wheel_apps_pane_g

0x1519,	// (0x00057847) navi_icon_text_pane

0x7380,	// (0x0005d6ae) aid_fill_nsta

0xb2b3,	// (0x000615e1) navi_icon_text_pane_g1

0xb2bf,	// (0x000615ed) navi_icon_text_pane_t1

0x13fd,	// (0x0005772b) list_set_graphic_pane_t1_ParamLimits

0x13fd,	// (0x0005772b) list_set_graphic_pane_t1

0x9bb7,	// (0x0005fee5) popup_midp_note_alarm_window_t6_ParamLimits

0x9bb7,	// (0x0005fee5) popup_midp_note_alarm_window_t6

0x9bc9,	// (0x0005fef7) popup_midp_note_alarm_window_t7_ParamLimits

0x9bc9,	// (0x0005fef7) popup_midp_note_alarm_window_t7

0x9bdb,	// (0x0005ff09) popup_midp_note_alarm_window_t8_ParamLimits

0x9bdb,	// (0x0005ff09) popup_midp_note_alarm_window_t8

0x9bed,	// (0x0005ff1b) popup_midp_note_alarm_window_t9_ParamLimits

0x9bed,	// (0x0005ff1b) popup_midp_note_alarm_window_t9

0x9bff,	// (0x0005ff2d) popup_midp_note_alarm_window_t10_ParamLimits

0x9bff,	// (0x0005ff2d) popup_midp_note_alarm_window_t10

0x9c11,	// (0x0005ff3f) popup_midp_note_alarm_window_t11_ParamLimits

0x9c11,	// (0x0005ff3f) popup_midp_note_alarm_window_t11

0x9c23,	// (0x0005ff51) scroll_pane_cp17_ParamLimits

0x9c23,	// (0x0005ff51) scroll_pane_cp17

0x77a7,	// (0x0005dad5) volume_small_pane_cp_g1

0x7bc1,	// (0x0005deef) volume_small_pane_cp_g2

0x7bca,	// (0x0005def8) volume_small_pane_cp_g3

0x7bd3,	// (0x0005df01) volume_small_pane_cp_g4

0x7bdc,	// (0x0005df0a) volume_small_pane_cp_g5

0x7b8b,	// (0x0005deb9) volume_small_pane_cp_g6

0x7be5,	// (0x0005df13) volume_small_pane_cp_g7

0x7bee,	// (0x0005df1c) volume_small_pane_cp_g8

0x7bf7,	// (0x0005df25) volume_small_pane_cp_g9

0x7c00,	// (0x0005df2e) volume_small_pane_cp_g10

0x165e,	// (0x0005798c) midp_ticker_pane_g1_ParamLimits

0x166a,	// (0x00057998) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00065a5c) midp_ticker_pane_g_ParamLimits

0x1676,	// (0x000579a4) midp_ticker_pane_t1_ParamLimits

0x7396,	// (0x0005d6c4) aid_fill_nsta_2

0x9458,	// (0x0005f786) list_form2_midp_pane

0xa56b,	// (0x00060899) midp_editing_number_pane_ParamLimits

0xa57a,	// (0x000608a8) midp_ticker_pane_ParamLimits

0xb2d1,	// (0x000615ff) form2_midp_field_pane

0xb2f5,	// (0x00061623) scroll_pane_cp51

0xb315,	// (0x00061643) form2_midp_button_pane_ParamLimits

0xb315,	// (0x00061643) form2_midp_button_pane

0xb327,	// (0x00061655) form2_midp_content_pane_ParamLimits

0xb327,	// (0x00061655) form2_midp_content_pane

0xb341,	// (0x0006166f) form2_midp_field_choice_group_pane

0xb349,	// (0x00061677) form2_midp_field_pane_g1

0xb351,	// (0x0006167f) form2_midp_field_pane_g2

0xb359,	// (0x00061687) form2_midp_field_pane_g3

0xb361,	// (0x0006168f) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x00065e09) form2_midp_field_pane_g

0xb369,	// (0x00061697) form2_midp_gauge_slider_pane

0xb371,	// (0x0006169f) form2_midp_gauge_wait_pane

0xb379,	// (0x000616a7) form2_midp_image_pane_ParamLimits

0xb379,	// (0x000616a7) form2_midp_image_pane

0xb394,	// (0x000616c2) form2_midp_label_pane_ParamLimits

0xb394,	// (0x000616c2) form2_midp_label_pane

0xb3ad,	// (0x000616db) form2_midp_label_pane_cp_ParamLimits

0xb3ad,	// (0x000616db) form2_midp_label_pane_cp

0xb3ce,	// (0x000616fc) form2_midp_string_pane_ParamLimits

0xb3ce,	// (0x000616fc) form2_midp_string_pane

0x7c09,	// (0x0005df37) form2_midp_text_pane_ParamLimits

0x7c09,	// (0x0005df37) form2_midp_text_pane

0xb3e0,	// (0x0006170e) form2_midp_time_pane

0xb3f0,	// (0x0006171e) input_focus_pane_cp51_ParamLimits

0xb3f0,	// (0x0006171e) input_focus_pane_cp51

0xb408,	// (0x00061736) form2_midp_label_pane_t1_ParamLimits

0xb408,	// (0x00061736) form2_midp_label_pane_t1

0x7c26,	// (0x0005df54) form2_mdip_text_pane_t1_ParamLimits

0x7c26,	// (0x0005df54) form2_mdip_text_pane_t1

0x3f50,	// (0x0005a27e) form2_midp_time_pane_t1

0xb451,	// (0x0006177f) form2_midp_gauge_slider_pane_t1

0xb463,	// (0x00061791) form2_midp_gauge_slider_pane_t2

0xb475,	// (0x000617a3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x00065e12) form2_midp_gauge_slider_pane_t

0xb487,	// (0x000617b5) form2_midp_slider_pane

0xb493,	// (0x000617c1) form2_midp_gauge_wait_pane_t1

0xb4a1,	// (0x000617cf) form2_midp_wait_pane_ParamLimits

0xb4a1,	// (0x000617cf) form2_midp_wait_pane

0xb4cc,	// (0x000617fa) list_single_2graphic_pane_cp4_ParamLimits

0xb4cc,	// (0x000617fa) list_single_2graphic_pane_cp4

0x9174,	// (0x0005f4a2) list_single_midp_graphic_pane_cp_ParamLimits

0x9174,	// (0x0005f4a2) list_single_midp_graphic_pane_cp

0xdff0,	// (0x0006431e) list_highlight_pane_cp20

0xb4f4,	// (0x00061822) list_single_2graphic_pane_g1_cp4

0xaa51,	// (0x00060d7f) list_single_2graphic_pane_g2_cp4

0xb4fc,	// (0x0006182a) list_single_2graphic_pane_t1_cp4

0xe03e,	// (0x0006436c) list_highlight_pane_cp21

0xb50b,	// (0x00061839) list_single_midp_graphic_pane_g4_cp

0xb51a,	// (0x00061848) list_single_midp_graphic_pane_t1_cp

0xb52f,	// (0x0006185d) form2_mdip_string_pane_t1_ParamLimits

0xb52f,	// (0x0006185d) form2_mdip_string_pane_t1

0xdff0,	// (0x0006431e) bg_wml_button_pane_cp2

0xdfe6,	// (0x00064314) form2_midp_image_pane_g1

0x431d,	// (0x0005a64b) list_double_large_graphic_pane_g5_ParamLimits

0x431d,	// (0x0005a64b) list_double_large_graphic_pane_g5

0x69e0,	// (0x0005cd0e) midp_form_pane_ParamLimits

0xe03e,	// (0x0006436c) main_apps_wheel_pane_ParamLimits

0x7168,	// (0x0005d496) popup_preview_window_ParamLimits

0x7168,	// (0x0005d496) popup_preview_window

0x7323,	// (0x0005d651) popup_touch_info_window_ParamLimits

0x7323,	// (0x0005d651) popup_touch_info_window

0x7341,	// (0x0005d66f) popup_touch_menu_window_ParamLimits

0x7341,	// (0x0005d66f) popup_touch_menu_window

0xdfdc,	// (0x0006430a) bg_popup_sub_pane_cp6

0xb70b,	// (0x00061a39) list_touch_menu_pane

0xb713,	// (0x00061a41) list_single_touch_menu_pane_ParamLimits

0xb713,	// (0x00061a41) list_single_touch_menu_pane

0xb729,	// (0x00061a57) list_single_touch_menu_pane_t1

0xe03e,	// (0x0006436c) bg_popup_sub_pane_cp7_ParamLimits

0xe03e,	// (0x0006436c) bg_popup_sub_pane_cp7

0xb737,	// (0x00061a65) heading_sub_pane

0xb73f,	// (0x00061a6d) list_touch_info_pane_ParamLimits

0xb73f,	// (0x00061a6d) list_touch_info_pane

0xb74e,	// (0x00061a7c) list_single_touch_info_pane_ParamLimits

0xb74e,	// (0x00061a7c) list_single_touch_info_pane

0xb760,	// (0x00061a8e) list_single_touch_info_pane_t1

0xb76e,	// (0x00061a9c) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x00065e20) list_single_touch_info_pane_t

0x1647,	// (0x00057975) bg_popup_heading_pane_cp

0xb77c,	// (0x00061aaa) heading_sub_pane_t1

0x9099,	// (0x0005f3c7) bg_popup_preview_window_pane_cp_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_preview_window_pane_cp

0xb737,	// (0x00061a65) heading_preview_pane

0xb73f,	// (0x00061a6d) list_preview_pane_ParamLimits

0xb73f,	// (0x00061a6d) list_preview_pane

0xb78a,	// (0x00061ab8) popup_preview_window_g1

0xb74e,	// (0x00061a7c) list_single_preview_pane_ParamLimits

0xb74e,	// (0x00061a7c) list_single_preview_pane

0xb792,	// (0x00061ac0) list_single_preview_pane_g1

0xb79a,	// (0x00061ac8) list_single_preview_pane_t1

0xb760,	// (0x00061a8e) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x00065e25) list_single_preview_pane_t

0xb7a8,	// (0x00061ad6) bg_popup_heading_pane_cp2_ParamLimits

0xb7a8,	// (0x00061ad6) bg_popup_heading_pane_cp2

0xb7be,	// (0x00061aec) heading_preview_pane_g1

0xb7c6,	// (0x00061af4) heading_preview_pane_t1_ParamLimits

0xb7c6,	// (0x00061af4) heading_preview_pane_t1

0xe091,	// (0x000643bf) soft_indicator_pane_t1_ParamLimits

0xf070,	// (0x0006539e) scroll_pane_ParamLimits

0xf40d,	// (0x0006573b) scroll_sc2_left_pane

0xf416,	// (0x00065744) scroll_sc2_right_pane

0xf435,	// (0x00065763) scroll_bg_pane_g1_ParamLimits

0xf44a,	// (0x00065778) scroll_bg_pane_g2_ParamLimits

0xf462,	// (0x00065790) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x000659e7) scroll_bg_pane_g_ParamLimits

0xf435,	// (0x00065763) scroll_handle_pane_g1_ParamLimits

0xf477,	// (0x000657a5) scroll_handle_pane_g2_ParamLimits

0xf462,	// (0x00065790) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x000659ee) scroll_handle_pane_g_ParamLimits

0x6deb,	// (0x0005d119) popup_choice_list_window_ParamLimits

0x6deb,	// (0x0005d119) popup_choice_list_window

0x8f57,	// (0x0005f285) choice_list_pane

0x8fd9,	// (0x0005f307) cell_toolbar_pane_t1

0x9001,	// (0x0005f32f) toolbar_button_pane_ParamLimits

0xa0dd,	// (0x0006040b) ai_gene_pane_1_t2_ParamLimits

0xa0dd,	// (0x0006040b) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00065c16) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00065c16) ai_gene_pane_1_t

0xb7e3,	// (0x00061b11) scroll_sc2_left_pane_g1

0xb7e3,	// (0x00061b11) scroll_sc2_right_pane_g1

0xf51d,	// (0x0006584b) bg_popup_sub_pane_cp10

0xb7ed,	// (0x00061b1b) list_choice_list_pane

0xb806,	// (0x00061b34) list_single_choice_list_pane_ParamLimits

0xb806,	// (0x00061b34) list_single_choice_list_pane

0xb819,	// (0x00061b47) list_single_choice_list_pane_g1

0x6213,	// (0x0005c541) list_single_choice_list_pane_t1_ParamLimits

0x6213,	// (0x0005c541) list_single_choice_list_pane_t1

0xb821,	// (0x00061b4f) choice_list_pane_g1

0xb829,	// (0x00061b57) choice_list_pane_t1

0xdfdc,	// (0x0006430a) input_focus_pane_cp11

0xf382,	// (0x000656b0) title_pane_stacon_g2_ParamLimits

0xf382,	// (0x000656b0) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x000659cd) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x000659cd) title_pane_stacon_g

0x1647,	// (0x00057975) cursor_press_pane

0x6e93,	// (0x0005d1c1) popup_fep_hwr_window_ParamLimits

0x6e93,	// (0x0005d1c1) popup_fep_hwr_window

0x6f0b,	// (0x0005d239) popup_fep_vkb_window_ParamLimits

0x6f0b,	// (0x0005d239) popup_fep_vkb_window

0xb837,	// (0x00061b65) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00065e4e) fep_vkb_side_pane_g_ParamLimits

0x7c7d,	// (0x0005dfab) fep_hwr_candidate_pane_ParamLimits

0x7c7d,	// (0x0005dfab) fep_hwr_candidate_pane

0x7ca7,	// (0x0005dfd5) fep_hwr_side_pane_ParamLimits

0x7ca7,	// (0x0005dfd5) fep_hwr_side_pane

0x7cc7,	// (0x0005dff5) fep_hwr_top_pane_ParamLimits

0x7cc7,	// (0x0005dff5) fep_hwr_top_pane

0x7cdf,	// (0x0005e00d) fep_hwr_write_pane_ParamLimits

0x7cdf,	// (0x0005e00d) fep_hwr_write_pane

0xfb20,	// (0x00065e4e) fep_vkb_side_pane_g

0xb83f,	// (0x00061b6d) fep_hwr_top_pane_g1

0xb851,	// (0x00061b7f) fep_hwr_top_pane_g2

0x7d19,	// (0x0005e047) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x00065e2a) fep_hwr_top_pane_g

0x7d2e,	// (0x0005e05c) fep_hwr_top_text_pane

0x120a,	// (0x00057538) fep_hwr_top_text_pane_g1

0xb887,	// (0x00061bb5) fep_hwr_top_text_pane_t1

0x7e24,	// (0x0005e152) fep_hwr_candidate_pane_g1

0xbacc,	// (0x00061dfa) fep_vkb_keypad_pane_g3_ParamLimits

0xbacc,	// (0x00061dfa) fep_vkb_keypad_pane_g3

0xbaf4,	// (0x00061e22) fep_vkb_keypad_pane_g4_ParamLimits

0xbaf4,	// (0x00061e22) fep_vkb_keypad_pane_g4

0xbb63,	// (0x00061e91) fep_vkb_bottom_pane_g2_ParamLimits

0xbb63,	// (0x00061e91) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00065e55) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00065e55) fep_vkb_bottom_pane_g

0xb7e3,	// (0x00061b11) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00065e5f) cell_vkb_side_pane_g

0xbbee,	// (0x00061f1c) cell_vkb_side_pane_t1

0xbbfc,	// (0x00061f2a) cell_vkb_side_pane_t1_copy1

0xb7e3,	// (0x00061b11) bg_fep_vkb_candidate_pane_g2

0xbd28,	// (0x00062056) cell_vkb_candidate_pane_ParamLimits

0xb895,	// (0x00061bc3) aid_size_cell_vkb_ParamLimits

0xb895,	// (0x00061bc3) aid_size_cell_vkb

0xbd28,	// (0x00062056) cell_vkb_candidate_pane

0x7e4b,	// (0x0005e179) bg_popup_fep_shadow_pane_g1

0xb923,	// (0x00061c51) fep_vkb_bottom_pane_ParamLimits

0xb923,	// (0x00061c51) fep_vkb_bottom_pane

0xb959,	// (0x00061c87) fep_vkb_candidate_pane_ParamLimits

0xb959,	// (0x00061c87) fep_vkb_candidate_pane

0xb975,	// (0x00061ca3) fep_vkb_keypad_pane_ParamLimits

0xb975,	// (0x00061ca3) fep_vkb_keypad_pane

0xb9b4,	// (0x00061ce2) fep_vkb_side_pane_ParamLimits

0xb9b4,	// (0x00061ce2) fep_vkb_side_pane

0xb9f0,	// (0x00061d1e) fep_vkb_top_pane_ParamLimits

0xb9f0,	// (0x00061d1e) fep_vkb_top_pane

0xba25,	// (0x00061d53) fep_vkb_top_pane_g1_ParamLimits

0xba25,	// (0x00061d53) fep_vkb_top_pane_g1

0xba34,	// (0x00061d62) fep_vkb_top_pane_g2_ParamLimits

0xba34,	// (0x00061d62) fep_vkb_top_pane_g2

0xba43,	// (0x00061d71) fep_vkb_top_pane_g3_ParamLimits

0xba43,	// (0x00061d71) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x00065e45) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x00065e45) fep_vkb_top_pane_g

0xba61,	// (0x00061d8f) fep_vkb_top_text_pane_ParamLimits

0xba61,	// (0x00061d8f) fep_vkb_top_text_pane

0xba72,	// (0x00061da0) fep_vkb_side_pane_g1_ParamLimits

0xba72,	// (0x00061da0) fep_vkb_side_pane_g1

0xbabb,	// (0x00061de9) grid_vkb_side_pane_ParamLimits

0xbabb,	// (0x00061de9) grid_vkb_side_pane

0x7e53,	// (0x0005e181) bg_popup_fep_shadow_pane_g2

0x7e5c,	// (0x0005e18a) bg_popup_fep_shadow_pane_g3

0x7e64,	// (0x0005e192) bg_popup_fep_shadow_pane_g4

0x7e6d,	// (0x0005e19b) bg_popup_fep_shadow_pane_g5

0x7e77,	// (0x0005e1a5) bg_popup_fep_shadow_pane_g6

0x7e7f,	// (0x0005e1ad) bg_popup_fep_shadow_pane_g7

0xf164,	// (0x00065492) bg_popup_fep_shadow_pane_g8

0xbb12,	// (0x00061e40) grid_vkb_keypad_number_pane_ParamLimits

0xbb12,	// (0x00061e40) grid_vkb_keypad_number_pane

0xbb22,	// (0x00061e50) grid_vkb_keypad_pane_ParamLimits

0xbb22,	// (0x00061e50) grid_vkb_keypad_pane

0xbb48,	// (0x00061e76) fep_vkb_bottom_pane_g1_ParamLimits

0xbb48,	// (0x00061e76) fep_vkb_bottom_pane_g1

0xbb71,	// (0x00061e9f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb71,	// (0x00061e9f) grid_vkb_keypad_bottom_left_pane

0xbb86,	// (0x00061eb4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb86,	// (0x00061eb4) grid_vkb_keypad_bottom_right_pane

0xbb9b,	// (0x00061ec9) fep_vkb_top_text_pane_g1

0xbbb6,	// (0x00061ee4) fep_vkb_top_text_pane_t1

0xbbcb,	// (0x00061ef9) cell_vkb_side_pane_ParamLimits

0xbbcb,	// (0x00061ef9) cell_vkb_side_pane

0xb7e3,	// (0x00061b11) cell_vkb_side_pane_g1

0xbc0a,	// (0x00061f38) cell_vkb_keypad_pane_ParamLimits

0xbc0a,	// (0x00061f38) cell_vkb_keypad_pane

0xbc7f,	// (0x00061fad) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00065e72) bg_popup_fep_shadow_pane_g

0x7e91,	// (0x0005e1bf) cell_hwr_side_pane_g1

0x7e91,	// (0x0005e1bf) cell_hwr_side_pane_g2

0xbc89,	// (0x00061fb7) cell_vkb_keypad_pane_t1

0xbc97,	// (0x00061fc5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc97,	// (0x00061fc5) cell_vkb_keypad_bottom_left_pane

0xbcb4,	// (0x00061fe2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcb4,	// (0x00061fe2) cell_vkb_keypad_bottom_right_pane

0xb7e3,	// (0x00061b11) cell_vkb_keypad_bottom_left_pane_g1

0xb7e3,	// (0x00061b11) cell_vkb_keypad_bottom_right_pane_g1

0xbced,	// (0x0006201b) cell_vkb_keypad_number_pane_ParamLimits

0xbced,	// (0x0006201b) cell_vkb_keypad_number_pane

0xbd0c,	// (0x0006203a) cell_vkb_keypad_number_pane_g1

0xbd16,	// (0x00062044) cell_vkb_keypad_number_pane_g2

0xbd1f,	// (0x0006204d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00065e64) cell_vkb_keypad_number_pane_g

0xbc89,	// (0x00061fb7) cell_vkb_keypad_number_pane_t1

0xbd43,	// (0x00062071) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x00065e85) cell_hwr_side_pane_g

0xbd5c,	// (0x0006208a) cell_hwr_side_pane_t1

0x7e9b,	// (0x0005e1c9) cell_hwr_side_pane_t1_copy1

0x7ea9,	// (0x0005e1d7) cell_hwr_candidate_pane_g1

0x7ed8,	// (0x0005e206) cell_hwr_candidate_pane_t1

0xb7e3,	// (0x00061b11) cell_vkb_candidate_pane_g2

0xbdc1,	// (0x000620ef) cell_vkb_candidate_pane_t1

0x7c44,	// (0x0005df72) bg_popup_fep_shadow_pane_ParamLimits

0x7c44,	// (0x0005df72) bg_popup_fep_shadow_pane

0x7cf9,	// (0x0005e027) bg_fep_hwr_top_pane_g4

0xb863,	// (0x00061b91) bg_hwr_side_pane_g1_ParamLimits

0xb863,	// (0x00061b91) bg_hwr_side_pane_g1

0x7d6a,	// (0x0005e098) cell_hwr_side_pane_ParamLimits

0x7d6a,	// (0x0005e098) cell_hwr_side_pane

0x7da5,	// (0x0005e0d3) fep_hwr_write_pane_g1_ParamLimits

0x7da5,	// (0x0005e0d3) fep_hwr_write_pane_g1

0x7db2,	// (0x0005e0e0) fep_hwr_write_pane_g2_ParamLimits

0x7db2,	// (0x0005e0e0) fep_hwr_write_pane_g2

0x7dbf,	// (0x0005e0ed) fep_hwr_write_pane_g3_ParamLimits

0x7dbf,	// (0x0005e0ed) fep_hwr_write_pane_g3

0x7dcd,	// (0x0005e0fb) fep_hwr_write_pane_g4_ParamLimits

0x7dcd,	// (0x0005e0fb) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x00065e31) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x00065e31) fep_hwr_write_pane_g

0x7cf9,	// (0x0005e027) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7cf9,	// (0x0005e027) bg_fep_hwr_candidate_pane_g2

0x7de2,	// (0x0005e110) cell_hwr_candidate_pane_ParamLimits

0x7de2,	// (0x0005e110) cell_hwr_candidate_pane

0x7e24,	// (0x0005e152) fep_hwr_candidate_pane_g1_ParamLimits

0xb8c3,	// (0x00061bf1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8c3,	// (0x00061bf1) bg_popup_fep_shadow_pane_cp2

0xba53,	// (0x00061d81) fep_vkb_top_pane_g4_ParamLimits

0xba53,	// (0x00061d81) fep_vkb_top_pane_g4

0xba99,	// (0x00061dc7) fep_vkb_side_pane_g2_ParamLimits

0xba99,	// (0x00061dc7) fep_vkb_side_pane_g2

0x5f2b,	// (0x0005c259) list_setting_pane_t4_ParamLimits

0x5f2b,	// (0x0005c259) list_setting_pane_t4

0x5fc5,	// (0x0005c2f3) list_setting_number_pane_t5_ParamLimits

0x5fc5,	// (0x0005c2f3) list_setting_number_pane_t5

0x65a9,	// (0x0005c8d7) list_double_heading_pane_cp2_ParamLimits

0x65a9,	// (0x0005c8d7) list_double_heading_pane_cp2

0x2335,	// (0x00058663) list_double_heading_pane_g1_cp2_ParamLimits

0x2335,	// (0x00058663) list_double_heading_pane_g1_cp2

0xbdcf,	// (0x000620fd) list_double_heading_pane_g2_cp2_ParamLimits

0xbdcf,	// (0x000620fd) list_double_heading_pane_g2_cp2

0xbde3,	// (0x00062111) list_double_heading_pane_t1_cp2_ParamLimits

0xbde3,	// (0x00062111) list_double_heading_pane_t1_cp2

0xbdf9,	// (0x00062127) list_double_heading_pane_t2_cp2_ParamLimits

0xbdf9,	// (0x00062127) list_double_heading_pane_t2_cp2

0xdfd4,	// (0x00064302) aid_value_unit2

0x54ab,	// (0x0005b7d9) popup_preview_fixed_window

0xe176,	// (0x000644a4) bg_popup_preview_window_pane_cp02

0xbe0b,	// (0x00062139) list_preview_fixed_pane

0xbe51,	// (0x0006217f) list_empty_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_empty_pane_fp

0xbe51,	// (0x0006217f) list_single_cale_day_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_cale_day_pane_fp

0xbe51,	// (0x0006217f) list_single_graphic_heading_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_graphic_heading_pane_fp

0xbe51,	// (0x0006217f) list_single_graphic_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_graphic_pane_fp

0xbe51,	// (0x0006217f) list_single_heading_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_heading_pane_fp

0xbe51,	// (0x0006217f) list_single_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_pane_fp

0xbe67,	// (0x00062195) list_single_pane_fp_g1_ParamLimits

0xbe67,	// (0x00062195) list_single_pane_fp_g1

0x2341,	// (0x0005866f) list_single_pane_fp_g2_ParamLimits

0x2341,	// (0x0005866f) list_single_pane_fp_g2

0xbe73,	// (0x000621a1) list_single_pane_fp_g3_ParamLimits

0xbe73,	// (0x000621a1) list_single_pane_fp_g3

0xbe87,	// (0x000621b5) list_single_pane_fp_g4_ParamLimits

0xbe87,	// (0x000621b5) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x00065e98) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x00065e98) list_single_pane_fp_g

0x3f63,	// (0x0005a291) list_single_pane_fp_t1_ParamLimits

0x3f63,	// (0x0005a291) list_single_pane_fp_t1

0x3f7a,	// (0x0005a2a8) list_single_graphic_pane_fp_g1_ParamLimits

0x3f7a,	// (0x0005a2a8) list_single_graphic_pane_fp_g1

0xbe67,	// (0x00062195) list_single_graphic_pane_fp_g2_ParamLimits

0xbe67,	// (0x00062195) list_single_graphic_pane_fp_g2

0x2341,	// (0x0005866f) list_single_graphic_pane_fp_g3_ParamLimits

0x2341,	// (0x0005866f) list_single_graphic_pane_fp_g3

0xbe73,	// (0x000621a1) list_single_graphic_pane_fp_g4_ParamLimits

0xbe73,	// (0x000621a1) list_single_graphic_pane_fp_g4

0xbe87,	// (0x000621b5) list_single_graphic_pane_fp_g5_ParamLimits

0xbe87,	// (0x000621b5) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x00065ea1) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x00065ea1) list_single_graphic_pane_fp_g

0x3f86,	// (0x0005a2b4) list_single_graphic_pane_fp_t1_ParamLimits

0x3f86,	// (0x0005a2b4) list_single_graphic_pane_fp_t1

0x3f7a,	// (0x0005a2a8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3f7a,	// (0x0005a2a8) list_single_graphic_heading_pane_fp_g1

0xbe67,	// (0x00062195) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe67,	// (0x00062195) list_single_graphic_heading_pane_fp_g2

0x2341,	// (0x0005866f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2341,	// (0x0005866f) list_single_graphic_heading_pane_fp_g3

0xbe73,	// (0x000621a1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbe73,	// (0x000621a1) list_single_graphic_heading_pane_fp_g4

0xbe87,	// (0x000621b5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe87,	// (0x000621b5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00065ea1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00065ea1) list_single_graphic_heading_pane_fp_g

0x3f9c,	// (0x0005a2ca) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f9c,	// (0x0005a2ca) list_single_graphic_heading_pane_fp_t1

0x3fb2,	// (0x0005a2e0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3fb2,	// (0x0005a2e0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x00065eac) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x00065eac) list_single_graphic_heading_pane_fp_t

0x3fc4,	// (0x0005a2f2) list_single_cale_day_pane_fp_g1_ParamLimits

0x3fc4,	// (0x0005a2f2) list_single_cale_day_pane_fp_g1

0xbe93,	// (0x000621c1) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe93,	// (0x000621c1) list_single_cale_day_pane_fp_g2

0xb636,	// (0x00061964) list_single_cale_day_pane_fp_g3_ParamLimits

0xb636,	// (0x00061964) list_single_cale_day_pane_fp_g3

0xb65e,	// (0x0006198c) list_single_cale_day_pane_fp_g4_ParamLimits

0xb65e,	// (0x0006198c) list_single_cale_day_pane_fp_g4

0xb682,	// (0x000619b0) list_single_cale_day_pane_fp_g5_ParamLimits

0xb682,	// (0x000619b0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x00065eb1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x00065eb1) list_single_cale_day_pane_fp_g

0x3ffc,	// (0x0005a32a) list_single_cale_day_pane_fp_t1_ParamLimits

0x3ffc,	// (0x0005a32a) list_single_cale_day_pane_fp_t1

0x4022,	// (0x0005a350) list_single_cale_day_pane_fp_t2_ParamLimits

0x4022,	// (0x0005a350) list_single_cale_day_pane_fp_t2

0x403b,	// (0x0005a369) list_single_cale_day_pane_fp_t3_ParamLimits

0x403b,	// (0x0005a369) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x00065ebc) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x00065ebc) list_single_cale_day_pane_fp_t

0xbe67,	// (0x00062195) list_empty_pane_fp_g1_ParamLimits

0xbe67,	// (0x00062195) list_empty_pane_fp_g1

0x4054,	// (0x0005a382) list_empty_pane_fp_t1

0x4062,	// (0x0005a390) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x00065ec3) list_empty_pane_fp_t

0xbe67,	// (0x00062195) list_single_heading_pane_fp_g1_ParamLimits

0xbe67,	// (0x00062195) list_single_heading_pane_fp_g1

0x2341,	// (0x0005866f) list_single_heading_pane_fp_g2_ParamLimits

0x2341,	// (0x0005866f) list_single_heading_pane_fp_g2

0xbe73,	// (0x000621a1) list_single_heading_pane_fp_g3_ParamLimits

0xbe73,	// (0x000621a1) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x00065ec8) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00065ec8) list_single_heading_pane_fp_g

0x4070,	// (0x0005a39e) list_single_heading_pane_fp_t1_ParamLimits

0x4070,	// (0x0005a39e) list_single_heading_pane_fp_t1

0x4082,	// (0x0005a3b0) list_single_heading_pane_fp_t2_ParamLimits

0x4082,	// (0x0005a3b0) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x00065ecf) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x00065ecf) list_single_heading_pane_fp_t

0x6279,	// (0x0005c5a7) aid_size_cell_fast

0xe14b,	// (0x00064479) soft_indicator_pane_cp1_t1

0x6282,	// (0x0005c5b0) cell_app_pane_cp2_ParamLimits

0x6282,	// (0x0005c5b0) cell_app_pane_cp2

0x7c66,	// (0x0005df94) fep_hwr_candidate_drop_down_list_pane

0x7e3e,	// (0x0005e16c) fep_hwr_candidate_pane_g3_ParamLimits

0x7e3e,	// (0x0005e16c) fep_hwr_candidate_pane_g3

0x3326,	// (0x00059654) fep_hwr_candidate_pane_g4_ParamLimits

0x3326,	// (0x00059654) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x00065e3e) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x00065e3e) fep_hwr_candidate_pane_g

0xb948,	// (0x00061c76) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb948,	// (0x00061c76) fep_vkb_candidate_drop_down_list_pane

0xbd4b,	// (0x00062079) fep_vkb_candidate_pane_g3

0xbd53,	// (0x00062081) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00065e6b) fep_vkb_candidate_pane_g

0x7ea9,	// (0x0005e1d7) cell_hwr_candidate_pane_g1_ParamLimits

0x7eb7,	// (0x0005e1e5) cell_hwr_candidate_pane_g3_ParamLimits

0x7eb7,	// (0x0005e1e5) cell_hwr_candidate_pane_g3

0xbd6a,	// (0x00062098) cell_hwr_candidate_pane_g4_ParamLimits

0xbd6a,	// (0x00062098) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x00065e8a) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x00065e8a) cell_hwr_candidate_pane_g

0xbd8b,	// (0x000620b9) cell_vkb_candidate_pane_g3_ParamLimits

0xbd8b,	// (0x000620b9) cell_vkb_candidate_pane_g3

0xbda6,	// (0x000620d4) cell_vkb_candidate_pane_g4_ParamLimits

0xbda6,	// (0x000620d4) cell_vkb_candidate_pane_g4

0xbe9f,	// (0x000621cd) cell_app_pane_cp2_g1_ParamLimits

0xbe9f,	// (0x000621cd) cell_app_pane_cp2_g1

0xbebd,	// (0x000621eb) cell_app_pane_cp2_g2_ParamLimits

0xbebd,	// (0x000621eb) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x00065ed4) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x00065ed4) cell_app_pane_cp2_g

0xbec9,	// (0x000621f7) cell_app_pane_cp2_t1_ParamLimits

0xbec9,	// (0x000621f7) cell_app_pane_cp2_t1

0xf0f4,	// (0x00065422) grid_highlight_pane_cp1_ParamLimits

0xf0f4,	// (0x00065422) grid_highlight_pane_cp1

0x7ef6,	// (0x0005e224) cell_hwr_candidate_pane_cp1_ParamLimits

0x7ef6,	// (0x0005e224) cell_hwr_candidate_pane_cp1

0x7ea9,	// (0x0005e1d7) fep_hwr_candidate_drop_down_list_pane_g1

0x7f15,	// (0x0005e243) fep_hwr_candidate_drop_down_list_pane_g2

0x7f22,	// (0x0005e250) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x00065ed9) fep_hwr_candidate_drop_down_list_pane_g

0x7f2f,	// (0x0005e25d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f38,	// (0x0005e266) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f38,	// (0x0005e266) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f45,	// (0x0005e273) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f45,	// (0x0005e273) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f52,	// (0x0005e280) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f52,	// (0x0005e280) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f5f,	// (0x0005e28d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f5f,	// (0x0005e28d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f7a,	// (0x0005e2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f7a,	// (0x0005e2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f95,	// (0x0005e2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f95,	// (0x0005e2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fb0,	// (0x0005e2de) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fb0,	// (0x0005e2de) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fcb,	// (0x0005e2f9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fcb,	// (0x0005e2f9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x00065ee0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x00065ee0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbedb,	// (0x00062209) cell_vkb_candidate_pane_cp1_ParamLimits

0xbedb,	// (0x00062209) cell_vkb_candidate_pane_cp1

0xba53,	// (0x00061d81) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba53,	// (0x00061d81) fep_vkb_candidate_drop_down_list_pane_g1

0xbefb,	// (0x00062229) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbefb,	// (0x00062229) fep_vkb_candidate_drop_down_list_pane_g2

0xbf08,	// (0x00062236) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbf08,	// (0x00062236) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00065ef1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x00065ef1) fep_vkb_candidate_drop_down_list_pane_g

0xbf15,	// (0x00062243) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbf15,	// (0x00062243) fep_vkb_candidate_drop_down_list_scroll_pane

0xbf22,	// (0x00062250) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf22,	// (0x00062250) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf2f,	// (0x0006225d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf2f,	// (0x0006225d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf3b,	// (0x00062269) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf3b,	// (0x00062269) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf47,	// (0x00062275) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf47,	// (0x00062275) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf68,	// (0x00062296) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf68,	// (0x00062296) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf89,	// (0x000622b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf89,	// (0x000622b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbfaa,	// (0x000622d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbfaa,	// (0x000622d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbfcb,	// (0x000622f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbfcb,	// (0x000622f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00065ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00065ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x55c5,	// (0x0005b8f3) title_pane_g1_ParamLimits

0x55d2,	// (0x0005b900) title_pane_g2_ParamLimits

0xf529,	// (0x00065857) title_pane_g_ParamLimits

0x1202,	// (0x00057530) aid_call2_pane

0x11fa,	// (0x00057528) aid_call_pane

0x120a,	// (0x00057538) popup_clock_analogue_window_g1

0x120a,	// (0x00057538) popup_clock_analogue_window_g2

0x658a,	// (0x0005c8b8) popup_clock_analogue_window_g3

0x6593,	// (0x0005c8c1) popup_clock_analogue_window_g4

0xdfe6,	// (0x00064314) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x000659fc) popup_clock_analogue_window_g

0x659b,	// (0x0005c8c9) popup_clock_analogue_window_t1

0x65d3,	// (0x0005c901) clock_digital_number_pane_ParamLimits

0x65d3,	// (0x0005c901) clock_digital_number_pane

0x65df,	// (0x0005c90d) clock_digital_number_pane_cp02_ParamLimits

0x65df,	// (0x0005c90d) clock_digital_number_pane_cp02

0x65eb,	// (0x0005c919) clock_digital_number_pane_cp03_ParamLimits

0x65eb,	// (0x0005c919) clock_digital_number_pane_cp03

0x65f7,	// (0x0005c925) clock_digital_number_pane_cp04_ParamLimits

0x65f7,	// (0x0005c925) clock_digital_number_pane_cp04

0x6603,	// (0x0005c931) clock_digital_separator_pane_ParamLimits

0x6603,	// (0x0005c931) clock_digital_separator_pane

0x660f,	// (0x0005c93d) popup_clock_digital_window_t1_ParamLimits

0x660f,	// (0x0005c93d) popup_clock_digital_window_t1

0xdfe6,	// (0x00064314) clock_digital_number_pane_g1

0xdfe6,	// (0x00064314) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00065a07) clock_digital_number_pane_g

0xdfe6,	// (0x00064314) clock_digital_separator_pane_g1

0xdfe6,	// (0x00064314) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00065a07) clock_digital_separator_pane_g

0x7380,	// (0x0005d6ae) aid_fill_nsta_ParamLimits

0x74cc,	// (0x0005d7fa) indicator_nsta_pane_ParamLimits

0x8de7,	// (0x0005f115) popup_clock_analogue_window

0x8de7,	// (0x0005f115) popup_clock_digital_window

0xb0db,	// (0x00061409) grid_indicator_nsta_pane_ParamLimits

0xb104,	// (0x00061432) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x00065dbe) clock_nsta_pane_t

0x64b5,	// (0x0005c7e3) aid_size_max_handle

0x64bf,	// (0x0005c7ed) aid_size_min_handle

0x1647,	// (0x00057975) editor_scroll_pane

0xbfe6,	// (0x00062314) ex_editor_pane

0xf226,	// (0x00065554) scroll_pane_cp13

0xf09c,	// (0x000653ca) scroll_pane_cp14

0x1239,	// (0x00057567) scroll_pane_cp36

0x65bd,	// (0x0005c8eb) list_single_graphic_hl_pane_cp2_ParamLimits

0x65bd,	// (0x0005c8eb) list_single_graphic_hl_pane_cp2

0x7a4c,	// (0x0005dd7a) list_single_graphic_hl_pane_ParamLimits

0x7a4c,	// (0x0005dd7a) list_single_graphic_hl_pane

0x7fe6,	// (0x0005e314) aid_size_min_hl_cp1

0xbfee,	// (0x0006231c) list_highlight_pane_cp34_ParamLimits

0xbfee,	// (0x0006231c) list_highlight_pane_cp34

0xbfff,	// (0x0006232d) list_single_graphic_hl_pane_g1_ParamLimits

0xbfff,	// (0x0006232d) list_single_graphic_hl_pane_g1

0x7fef,	// (0x0005e31d) list_single_graphic_hl_pane_g2_ParamLimits

0x7fef,	// (0x0005e31d) list_single_graphic_hl_pane_g2

0x7fef,	// (0x0005e31d) list_single_graphic_hl_pane_g3_ParamLimits

0x7fef,	// (0x0005e31d) list_single_graphic_hl_pane_g3

0x7ffb,	// (0x0005e329) list_single_graphic_hl_pane_g4_ParamLimits

0x7ffb,	// (0x0005e329) list_single_graphic_hl_pane_g4

0x8007,	// (0x0005e335) list_single_graphic_hl_pane_g5_ParamLimits

0x8007,	// (0x0005e335) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x00065f09) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x00065f09) list_single_graphic_hl_pane_g

0x801b,	// (0x0005e349) list_single_graphic_hl_pane_t1_ParamLimits

0x801b,	// (0x0005e349) list_single_graphic_hl_pane_t1

0xc00c,	// (0x0006233a) aid_size_min_hl_cp2

0xc015,	// (0x00062343) list_highlight_pane_cp34_cp2_ParamLimits

0xc015,	// (0x00062343) list_highlight_pane_cp34_cp2

0xbfff,	// (0x0006232d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbfff,	// (0x0006232d) list_single_graphic_hl_pane_g1_cp2

0xc022,	// (0x00062350) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc022,	// (0x00062350) list_single_graphic_hl_pane_g2_cp2

0xc02e,	// (0x0006235c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc02e,	// (0x0006235c) list_single_graphic_hl_pane_g3_cp2

0x11e1,	// (0x0005750f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x11e1,	// (0x0005750f) list_single_graphic_hl_pane_g4_cp2

0xc03c,	// (0x0006236a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc03c,	// (0x0006236a) list_single_graphic_hl_pane_g5_cp2

0x6c64,	// (0x0005cf92) control_pane_g4_ParamLimits

0x6c64,	// (0x0005cf92) control_pane_g4

0xf51d,	// (0x0006584b) bg_popup_sub_pane_cp10_ParamLimits

0xb7ed,	// (0x00061b1b) list_choice_list_pane_ParamLimits

0xb7fc,	// (0x00061b2a) scroll_pane_cp23

0xe176,	// (0x000644a4) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe0b,	// (0x00062139) list_preview_fixed_pane_ParamLimits

0xbe21,	// (0x0006214f) list_preview_fixed_pane_cp_ParamLimits

0xbe21,	// (0x0006214f) list_preview_fixed_pane_cp

0xbe2d,	// (0x0006215b) popup_preview_fixed_window_g1_ParamLimits

0xbe2d,	// (0x0006215b) popup_preview_fixed_window_g1

0xbe39,	// (0x00062167) popup_preview_fixed_window_g2_ParamLimits

0xbe39,	// (0x00062167) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x00065e91) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x00065e91) popup_preview_fixed_window_g

0x6391,	// (0x0005c6bf) aid_navi_side_left_pane_ParamLimits

0x63a6,	// (0x0005c6d4) aid_navi_side_right_pane_ParamLimits

0x63be,	// (0x0005c6ec) navi_icon_pane_stacon_ParamLimits

0x63d2,	// (0x0005c700) navi_navi_pane_stacon_ParamLimits

0x63be,	// (0x0005c6ec) navi_text_pane_stacon_ParamLimits

0x537a,	// (0x0005b6a8) main_text_info_pane

0xc066,	// (0x00062394) listscroll_text_info_pane

0xc06e,	// (0x0006239c) list_text_info_pane_ParamLimits

0xc06e,	// (0x0006239c) list_text_info_pane

0xc07d,	// (0x000623ab) scroll_pane_cp24_ParamLimits

0xc07d,	// (0x000623ab) scroll_pane_cp24

0xc09b,	// (0x000623c9) list_text_info_pane_t1_ParamLimits

0xc09b,	// (0x000623c9) list_text_info_pane_t1

0x6e07,	// (0x0005d135) popup_fast_swap2_window_ParamLimits

0x6e07,	// (0x0005d135) popup_fast_swap2_window

0xc0cf,	// (0x000623fd) aid_size_cell_fast2

0xdfdc,	// (0x0006430a) bg_popup_window_pane_cp17

0x948c,	// (0x0005f7ba) heading_pane_cp2

0x9494,	// (0x0005f7c2) listscroll_fast2_pane

0xc0d9,	// (0x00062407) grid_fast2_pane

0xc0e3,	// (0x00062411) listscroll_fast2_pane_g1

0xc0eb,	// (0x00062419) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x00065f14) listscroll_fast2_pane_g

0xf226,	// (0x00065554) scroll_pane_cp26

0xc0f5,	// (0x00062423) cell_fast2_pane_ParamLimits

0xc0f5,	// (0x00062423) cell_fast2_pane

0xc10a,	// (0x00062438) cell_fast2_pane_g1

0xc113,	// (0x00062441) cell_fast2_pane_g2

0xc11c,	// (0x0006244a) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x00065f19) cell_fast2_pane_g

0xefd3,	// (0x00065301) grid_highlight_pane_cp9

0x6dcf,	// (0x0005d0fd) main_eswt_pane_ParamLimits

0x6dcf,	// (0x0005d0fd) main_eswt_pane

0xc092,	// (0x000623c0) list_single_text_info_pane

0xc124,	// (0x00062452) eswt_ctrl_button_pane

0xc124,	// (0x00062452) eswt_ctrl_canvas_pane

0xc12c,	// (0x0006245a) eswt_ctrl_combo_pane

0xc124,	// (0x00062452) eswt_ctrl_default_pane

0xc124,	// (0x00062452) eswt_ctrl_label_pane

0xc134,	// (0x00062462) eswt_ctrl_wait_pane

0xc13c,	// (0x0006246a) eswt_shell_pane

0xdfdc,	// (0x0006430a) listscroll_eswt_app_pane

0xc15c,	// (0x0006248a) popup_eswt_tasktip_window_ParamLimits

0xc15c,	// (0x0006248a) popup_eswt_tasktip_window

0x9099,	// (0x0005f3c7) bg_popup_window_pane_cp18

0xc16d,	// (0x0006249b) eswt_control_pane_g1_ParamLimits

0xc16d,	// (0x0006249b) eswt_control_pane_g1

0xc17a,	// (0x000624a8) eswt_control_pane_g2_ParamLimits

0xc17a,	// (0x000624a8) eswt_control_pane_g2

0xc187,	// (0x000624b5) eswt_control_pane_g3_ParamLimits

0xc187,	// (0x000624b5) eswt_control_pane_g3

0xc194,	// (0x000624c2) eswt_control_pane_g4_ParamLimits

0xc194,	// (0x000624c2) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x00065f20) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x00065f20) eswt_control_pane_g

0xf0f4,	// (0x00065422) bg_button_pane_ParamLimits

0xf0f4,	// (0x00065422) bg_button_pane

0xefe8,	// (0x00065316) common_borders_pane_copy2_ParamLimits

0xefe8,	// (0x00065316) common_borders_pane_copy2

0xc1a1,	// (0x000624cf) control_button_pane_g1_ParamLimits

0xc1a1,	// (0x000624cf) control_button_pane_g1

0xc1ad,	// (0x000624db) control_button_pane_g2_ParamLimits

0xc1ad,	// (0x000624db) control_button_pane_g2

0xc1b9,	// (0x000624e7) control_button_pane_g3_ParamLimits

0xc1b9,	// (0x000624e7) control_button_pane_g3

0x0002,

0xfbfb,	// (0x00065f29) control_button_pane_g_ParamLimits

0xfbfb,	// (0x00065f29) control_button_pane_g

0xc1cd,	// (0x000624fb) control_button_pane_t1

0xc1db,	// (0x00062509) control_button_pane_t2

0x0001,

0xfc02,	// (0x00065f30) control_button_pane_t

0x900d,	// (0x0005f33b) bg_button_pane_g1

0x901d,	// (0x0005f34b) bg_button_pane_g2

0x9015,	// (0x0005f343) bg_button_pane_g3

0x902d,	// (0x0005f35b) bg_button_pane_g4

0x9025,	// (0x0005f353) bg_button_pane_g5

0x9035,	// (0x0005f363) bg_button_pane_g6

0x903d,	// (0x0005f36b) bg_button_pane_g7

0x904d,	// (0x0005f37b) bg_button_pane_g8

0x9045,	// (0x0005f373) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00065b6a) bg_button_pane_g

0xb7a8,	// (0x00061ad6) common_borders_pane_ParamLimits

0xb7a8,	// (0x00061ad6) common_borders_pane

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy1_ParamLimits

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy1

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy1_ParamLimits

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy1

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy1_ParamLimits

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy1

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy1_ParamLimits

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy1

0xb7e3,	// (0x00061b11) bg_eswt_ctrl_canvas_pane_g1

0xb7a8,	// (0x00061ad6) common_borders_pane_cp2_ParamLimits

0xb7a8,	// (0x00061ad6) common_borders_pane_cp2

0xb7a8,	// (0x00061ad6) common_borders_pane_cp3_ParamLimits

0xb7a8,	// (0x00061ad6) common_borders_pane_cp3

0xc1e9,	// (0x00062517) separator_horizontal_pane

0xc1f1,	// (0x0006251f) separator_vertical_pane

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy2_ParamLimits

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy2

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy2_ParamLimits

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy2

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy2_ParamLimits

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy2

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy2_ParamLimits

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy2

0xdfdc,	// (0x0006430a) common_borders_pane_cp4

0xc1fa,	// (0x00062528) separator_horizontal_pane_g1

0xc203,	// (0x00062531) separator_horizontal_pane_g2

0xc20c,	// (0x0006253a) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x00065f35) separator_horizontal_pane_g

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy3_ParamLimits

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy3

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy3_ParamLimits

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy3

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy3_ParamLimits

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy3

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy3_ParamLimits

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy3

0xdfdc,	// (0x0006430a) common_borders_pane_cp5

0xc215,	// (0x00062543) separator_vertical_pane_g1

0xc21e,	// (0x0006254c) separator_vertical_pane_g2

0xc227,	// (0x00062555) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x00065f3c) separator_vertical_pane_g

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy4_ParamLimits

0xc16d,	// (0x0006249b) eswt_control_pane_g1_copy4

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy4_ParamLimits

0xc17a,	// (0x000624a8) eswt_control_pane_g2_copy4

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy4_ParamLimits

0xc187,	// (0x000624b5) eswt_control_pane_g3_copy4

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy4_ParamLimits

0xc194,	// (0x000624c2) eswt_control_pane_g4_copy4

0xc230,	// (0x0006255e) eswt_ctrl_combo_button_pane

0xc238,	// (0x00062566) eswt_ctrl_input_pane

0xc240,	// (0x0006256e) popup_choice_list_window_cp70

0xc248,	// (0x00062576) eswt_ctrl_input_pane_t1

0xdfdc,	// (0x0006430a) input_focus_pane_cp70

0xb7a8,	// (0x00061ad6) bg_button_pane_cp70_ParamLimits

0xb7a8,	// (0x00061ad6) bg_button_pane_cp70

0xc256,	// (0x00062584) eswt_ctrl_combo_button_pane_g1

0xc25e,	// (0x0006258c) wait_bar_pane_cp70

0x9099,	// (0x0005f3c7) bg_popup_window_pane_cp70_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_window_pane_cp70

0xc266,	// (0x00062594) popup_eswt_tasktip_window_t1

0xc27c,	// (0x000625aa) wait_bar_pane_cp71_ParamLimits

0xc27c,	// (0x000625aa) wait_bar_pane_cp71

0xc288,	// (0x000625b6) grid_eswt_app_pane

0xf40d,	// (0x0006573b) scroll_pane_cp70

0xc291,	// (0x000625bf) cell_eswt_app_pane_ParamLimits

0xc291,	// (0x000625bf) cell_eswt_app_pane

0xc2c1,	// (0x000625ef) cell_eswt_app_pane_g1_ParamLimits

0xc2c1,	// (0x000625ef) cell_eswt_app_pane_g1

0xc2f0,	// (0x0006261e) cell_eswt_app_pane_g2_ParamLimits

0xc2f0,	// (0x0006261e) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x00065f43) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x00065f43) cell_eswt_app_pane_g

0xc314,	// (0x00062642) cell_eswt_app_pane_t1_ParamLimits

0xc314,	// (0x00062642) cell_eswt_app_pane_t1

0xc346,	// (0x00062674) grid_highlight_pane_cp70_ParamLimits

0xc346,	// (0x00062674) grid_highlight_pane_cp70

0x156e,	// (0x0005789c) set_content_pane_g1

0x6bfa,	// (0x0005cf28) status_small_volume_pane

0x8031,	// (0x0005e35f) status_small_volume_pane_g1

0x8039,	// (0x0005e367) volume_small2_pane

0x8042,	// (0x0005e370) volume_small2_pane_g1

0x804b,	// (0x0005e379) volume_small2_pane_g2

0x8054,	// (0x0005e382) volume_small2_pane_g3

0x805d,	// (0x0005e38b) volume_small2_pane_g4

0x8066,	// (0x0005e394) volume_small2_pane_g5

0x806f,	// (0x0005e39d) volume_small2_pane_g6

0x8078,	// (0x0005e3a6) volume_small2_pane_g7

0x8081,	// (0x0005e3af) volume_small2_pane_g8

0x808a,	// (0x0005e3b8) volume_small2_pane_g9

0x8093,	// (0x0005e3c1) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x00065f48) volume_small2_pane_g

0xbb9b,	// (0x00061ec9) fep_vkb_top_text_pane_g1_ParamLimits

0xbbb6,	// (0x00061ee4) fep_vkb_top_text_pane_t1_ParamLimits

0xbe45,	// (0x00062173) popup_preview_fixed_window_g3_ParamLimits

0xbe45,	// (0x00062173) popup_preview_fixed_window_g3

0x72b6,	// (0x0005d5e4) popup_toolbar_trans_pane

0xa3d7,	// (0x00060705) aid_height_set_list_ParamLimits

0xa3e8,	// (0x00060716) aid_size_parent_ParamLimits

0xf51d,	// (0x0006584b) list_highlight_pane_cp2_ParamLimits

0x156e,	// (0x0005789c) set_content_pane_g1_ParamLimits

0x7a6a,	// (0x0005dd98) list_single_image_pane_ParamLimits

0x7a6a,	// (0x0005dd98) list_single_image_pane

0xc352,	// (0x00062680) aid_size_cell_image_ParamLimits

0xc352,	// (0x00062680) aid_size_cell_image

0xc35f,	// (0x0006268d) grid_single_image_pane_ParamLimits

0xc35f,	// (0x0006268d) grid_single_image_pane

0x2341,	// (0x0005866f) list_single_image_pane_g1_ParamLimits

0x2341,	// (0x0005866f) list_single_image_pane_g1

0xbe73,	// (0x000621a1) list_single_image_pane_g2_ParamLimits

0xbe73,	// (0x000621a1) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x00065f5d) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x00065f5d) list_single_image_pane_g

0xc36b,	// (0x00062699) list_single_image_pane_t1_ParamLimits

0xc36b,	// (0x00062699) list_single_image_pane_t1

0xc381,	// (0x000626af) cell_image_list_pane_ParamLimits

0xc381,	// (0x000626af) cell_image_list_pane

0xc395,	// (0x000626c3) cell_image_list_pane_g1

0xc39e,	// (0x000626cc) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00065f62) cell_image_list_pane_g

0xc3a7,	// (0x000626d5) aid_size_cell_tb_trans_pane

0xf0f4,	// (0x00065422) bg_tb_trans_pane

0xc3b9,	// (0x000626e7) grid_tb_trans_pane

0x900d,	// (0x0005f33b) bg_tb_trans_pane_g1

0x901d,	// (0x0005f34b) bg_tb_trans_pane_g2

0x9015,	// (0x0005f343) bg_tb_trans_pane_g3

0x902d,	// (0x0005f35b) bg_tb_trans_pane_g4

0x9025,	// (0x0005f353) bg_tb_trans_pane_g5

0x904d,	// (0x0005f37b) bg_tb_trans_pane_g6

0x9045,	// (0x0005f373) bg_tb_trans_pane_g7

0x9035,	// (0x0005f363) bg_tb_trans_pane_g8

0x903d,	// (0x0005f36b) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x00065f67) bg_tb_trans_pane_g

0xc3cd,	// (0x000626fb) cell_toolbar_trans_pane_ParamLimits

0xc3cd,	// (0x000626fb) cell_toolbar_trans_pane

0xb7e3,	// (0x00061b11) cell_toolbar_trans_pane_g1

0xb2d9,	// (0x00061607) list_form2_midp_pane_t1

0xb2e7,	// (0x00061615) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x00065e04) list_form2_midp_pane_t

0xb2f5,	// (0x00061623) scroll_pane_cp51_ParamLimits

0xb4b1,	// (0x000617df) form2_midp_wait_pane_g1

0xb4ba,	// (0x000617e8) form2_midp_wait_pane_g2

0xb4c3,	// (0x000617f1) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x00065e19) form2_midp_wait_pane_g

0xe03e,	// (0x0006436c) list_highlight_pane_cp21_ParamLimits

0xb50b,	// (0x00061839) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb51a,	// (0x00061848) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa5fb,	// (0x00060929) list_single_2graphic_im_pane_ParamLimits

0xa5fb,	// (0x00060929) list_single_2graphic_im_pane

0xc3f3,	// (0x00062721) list_single_2graphic_im_pane_g1_ParamLimits

0xc3f3,	// (0x00062721) list_single_2graphic_im_pane_g1

0xc404,	// (0x00062732) list_single_2graphic_im_pane_g2_ParamLimits

0xc404,	// (0x00062732) list_single_2graphic_im_pane_g2

0xc410,	// (0x0006273e) list_single_2graphic_im_pane_g3_ParamLimits

0xc410,	// (0x0006273e) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x00065f7a) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x00065f7a) list_single_2graphic_im_pane_g

0xc430,	// (0x0006275e) list_single_2graphic_im_pane_t1_ParamLimits

0xc430,	// (0x0006275e) list_single_2graphic_im_pane_t1

0xbe51,	// (0x0006217f) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe51,	// (0x0006217f) list_single_graphic_2heading_pane_fp

0x3f7a,	// (0x0005a2a8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3f7a,	// (0x0005a2a8) list_single_graphic_2heading_pane_fp_g1

0xbe67,	// (0x00062195) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe67,	// (0x00062195) list_single_graphic_2heading_pane_fp_g2

0x2341,	// (0x0005866f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2341,	// (0x0005866f) list_single_graphic_2heading_pane_fp_g3

0xbe73,	// (0x000621a1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbe73,	// (0x000621a1) list_single_graphic_2heading_pane_fp_g4

0xbe87,	// (0x000621b5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe87,	// (0x000621b5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00065ea1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00065ea1) list_single_graphic_2heading_pane_fp_g

0x4098,	// (0x0005a3c6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4098,	// (0x0005a3c6) list_single_graphic_2heading_pane_fp_t1

0x3fb2,	// (0x0005a2e0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3fb2,	// (0x0005a2e0) list_single_graphic_2heading_pane_fp_t2

0x40ae,	// (0x0005a3dc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x40ae,	// (0x0005a3dc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00065f83) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00065f83) list_single_graphic_2heading_pane_fp_t

0xb86f,	// (0x00061b9d) fep_hwr_write_pane_g5_ParamLimits

0xb86f,	// (0x00061b9d) fep_hwr_write_pane_g5

0xb87b,	// (0x00061ba9) fep_hwr_write_pane_g6_ParamLimits

0xb87b,	// (0x00061ba9) fep_hwr_write_pane_g6

0xc13c,	// (0x0006246a) eswt_shell_pane_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_window_pane_cp18_ParamLimits

0xa330,	// (0x0006065e) heading_pane_cp70

0xc266,	// (0x00062594) popup_eswt_tasktip_window_t1_ParamLimits

0x73d5,	// (0x0005d703) aid_touch_tab_arrow_left

0x73e4,	// (0x0005d712) aid_touch_tab_arrow_right

0x55e3,	// (0x0005b911) title_pane_g3_ParamLimits

0x55e3,	// (0x0005b911) title_pane_g3

0xf0bc,	// (0x000653ea) set_value_pane_g1

0x72b6,	// (0x0005d5e4) popup_toolbar_trans_pane_ParamLimits

0xc3a7,	// (0x000626d5) aid_size_cell_tb_trans_pane_ParamLimits

0xf0f4,	// (0x00065422) bg_tb_trans_pane_ParamLimits

0xc3b9,	// (0x000626e7) grid_tb_trans_pane_ParamLimits

0xe176,	// (0x000644a4) cont_note_pane_ParamLimits

0xe176,	// (0x000644a4) cont_note_pane

0xefe8,	// (0x00065316) cont_snote2_single_text_pane_ParamLimits

0xefe8,	// (0x00065316) cont_snote2_single_text_pane

0xefe8,	// (0x00065316) cont_snote2_single_graphic_pane_ParamLimits

0xefe8,	// (0x00065316) cont_snote2_single_graphic_pane

0x96b3,	// (0x0005f9e1) cont_note_wait_pane_ParamLimits

0x96b3,	// (0x0005f9e1) cont_note_wait_pane

0x96b3,	// (0x0005f9e1) cont_note_image_pane_ParamLimits

0x96b3,	// (0x0005f9e1) cont_note_image_pane

0xc461,	// (0x0006278f) popup_note2_window_g1_ParamLimits

0xc461,	// (0x0006278f) popup_note2_window_g1

0xc492,	// (0x000627c0) popup_note2_window_t1_ParamLimits

0xc492,	// (0x000627c0) popup_note2_window_t1

0xc4d7,	// (0x00062805) popup_note2_window_t2_ParamLimits

0xc4d7,	// (0x00062805) popup_note2_window_t2

0xc51c,	// (0x0006284a) popup_note2_window_t3_ParamLimits

0xc51c,	// (0x0006284a) popup_note2_window_t3

0xc561,	// (0x0006288f) popup_note2_window_t4_ParamLimits

0xc561,	// (0x0006288f) popup_note2_window_t4

0xe1fa,	// (0x00064528) popup_note2_window_t5_ParamLimits

0xe1fa,	// (0x00064528) popup_note2_window_t5

0x0004,

0xfc61,	// (0x00065f8f) popup_note2_window_t_ParamLimits

0xfc61,	// (0x00065f8f) popup_note2_window_t

0xc590,	// (0x000628be) popup_note2_image_window_g1_ParamLimits

0xc590,	// (0x000628be) popup_note2_image_window_g1

0xc59c,	// (0x000628ca) popup_note2_image_window_g2_ParamLimits

0xc59c,	// (0x000628ca) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x00065f9a) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x00065f9a) popup_note2_image_window_g

0xc5ae,	// (0x000628dc) popup_note2_image_window_t1_ParamLimits

0xc5ae,	// (0x000628dc) popup_note2_image_window_t1

0xc5c6,	// (0x000628f4) popup_note2_image_window_t2_ParamLimits

0xc5c6,	// (0x000628f4) popup_note2_image_window_t2

0xc5de,	// (0x0006290c) popup_note2_image_window_t3_ParamLimits

0xc5de,	// (0x0006290c) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x00065f9f) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x00065f9f) popup_note2_image_window_t

0x96c1,	// (0x0005f9ef) popup_note2_wait_window_g1_ParamLimits

0x96c1,	// (0x0005f9ef) popup_note2_wait_window_g1

0x96cd,	// (0x0005f9fb) popup_note2_wait_window_g2_ParamLimits

0x96cd,	// (0x0005f9fb) popup_note2_wait_window_g2

0x96d9,	// (0x0005fa07) popup_note2_wait_window_g3_ParamLimits

0x96d9,	// (0x0005fa07) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00065b4c) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00065b4c) popup_note2_wait_window_g

0xc5fa,	// (0x00062928) popup_note2_wait_window_t1_ParamLimits

0xc5fa,	// (0x00062928) popup_note2_wait_window_t1

0xc618,	// (0x00062946) popup_note2_wait_window_t2_ParamLimits

0xc618,	// (0x00062946) popup_note2_wait_window_t2

0xc636,	// (0x00062964) popup_note2_wait_window_t3_ParamLimits

0xc636,	// (0x00062964) popup_note2_wait_window_t3

0xc648,	// (0x00062976) popup_note2_wait_window_t4_ParamLimits

0xc648,	// (0x00062976) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x00065fa6) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x00065fa6) popup_note2_wait_window_t

0xc65a,	// (0x00062988) wait_bar2_pane_ParamLimits

0xc65a,	// (0x00062988) wait_bar2_pane

0xc672,	// (0x000629a0) popup_snote2_single_text_window_g1_ParamLimits

0xc672,	// (0x000629a0) popup_snote2_single_text_window_g1

0xc69a,	// (0x000629c8) popup_snote2_single_text_window_t1_ParamLimits

0xc69a,	// (0x000629c8) popup_snote2_single_text_window_t1

0xc6e6,	// (0x00062a14) popup_snote2_single_text_window_t2_ParamLimits

0xc6e6,	// (0x00062a14) popup_snote2_single_text_window_t2

0xc732,	// (0x00062a60) popup_snote2_single_text_window_t3_ParamLimits

0xc732,	// (0x00062a60) popup_snote2_single_text_window_t3

0xc773,	// (0x00062aa1) popup_snote2_single_text_window_t4_ParamLimits

0xc773,	// (0x00062aa1) popup_snote2_single_text_window_t4

0xc7a9,	// (0x00062ad7) popup_snote2_single_text_window_t5_ParamLimits

0xc7a9,	// (0x00062ad7) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x00065faf) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x00065faf) popup_snote2_single_text_window_t

0xc7d4,	// (0x00062b02) popup_snote2_single_graphic_window_g1_ParamLimits

0xc7d4,	// (0x00062b02) popup_snote2_single_graphic_window_g1

0xc7fc,	// (0x00062b2a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7fc,	// (0x00062b2a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x00065fba) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x00065fba) popup_snote2_single_graphic_window_g

0xc824,	// (0x00062b52) popup_snote2_single_graphic_window_t1_ParamLimits

0xc824,	// (0x00062b52) popup_snote2_single_graphic_window_t1

0xc870,	// (0x00062b9e) popup_snote2_single_graphic_window_t2_ParamLimits

0xc870,	// (0x00062b9e) popup_snote2_single_graphic_window_t2

0xc732,	// (0x00062a60) popup_snote2_single_graphic_window_t3_ParamLimits

0xc732,	// (0x00062a60) popup_snote2_single_graphic_window_t3

0xc773,	// (0x00062aa1) popup_snote2_single_graphic_window_t4_ParamLimits

0xc773,	// (0x00062aa1) popup_snote2_single_graphic_window_t4

0xc7a9,	// (0x00062ad7) popup_snote2_single_graphic_window_t5_ParamLimits

0xc7a9,	// (0x00062ad7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x00065fbf) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x00065fbf) popup_snote2_single_graphic_window_t

0xb1b2,	// (0x000614e0) clock_nsta_pane_cp2_t1

0xb1b2,	// (0x000614e0) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x00065dda) clock_nsta_pane_cp2_t

0x3b36,	// (0x00059e64) form_field_data_wide_pane_g1_ParamLimits

0xf102,	// (0x00065430) form_field_data_wide_pane_g2_ParamLimits

0xf102,	// (0x00065430) form_field_data_wide_pane_g2

0xf10e,	// (0x0006543c) form_field_data_wide_pane_g3_ParamLimits

0xf10e,	// (0x0006543c) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0006597f) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0006597f) form_field_data_wide_pane_g

0xb08e,	// (0x000613bc) grid_touch_3_pane_ParamLimits

0xb08e,	// (0x000613bc) grid_touch_3_pane

0xc8bc,	// (0x00062bea) cell_touch_3_pane_ParamLimits

0xc8bc,	// (0x00062bea) cell_touch_3_pane

0xb7e3,	// (0x00061b11) cell_touch_3_pane_g1

0xb7e3,	// (0x00061b11) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00065e5f) cell_touch_3_pane_g

0xe22c,	// (0x0006455a) cont_query_data_pane

0xe234,	// (0x00064562) cont_query_data_pane_cp1

0xc8ea,	// (0x00062c18) button_value_adjust_pane_cp7

0xc8f2,	// (0x00062c20) query_popup_pane_cp3

0x126b,	// (0x00057599) bg_popup_sub_pane_cp22_ParamLimits

0x6689,	// (0x0005c9b7) navi_navi_volume_pane_cp2

0x66a1,	// (0x0005c9cf) popup_side_volume_key_window_g2

0x66ad,	// (0x0005c9db) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00065a15) popup_side_volume_key_window_g

0x66c7,	// (0x0005c9f5) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00065a1c) popup_side_volume_key_window_t

0x6975,	// (0x0005cca3) popup_side_volume_key_window_ParamLimits

0x5d80,	// (0x0005c0ae) list_double_graphic_pane_g4_ParamLimits

0x5d80,	// (0x0005c0ae) list_double_graphic_pane_g4

0xa63a,	// (0x00060968) list_single_2heading_msg_pane_ParamLimits

0xa63a,	// (0x00060968) list_single_2heading_msg_pane

0xb6a6,	// (0x000619d4) list_single_2heading_msg_pane_g1_ParamLimits

0xb6a6,	// (0x000619d4) list_single_2heading_msg_pane_g1

0x5bb4,	// (0x0005bee2) list_single_2heading_msg_pane_g2_ParamLimits

0x5bb4,	// (0x0005bee2) list_single_2heading_msg_pane_g2

0xb6b2,	// (0x000619e0) list_single_2heading_msg_pane_g3_ParamLimits

0xb6b2,	// (0x000619e0) list_single_2heading_msg_pane_g3

0xb6be,	// (0x000619ec) list_single_2heading_msg_pane_g4_ParamLimits

0xb6be,	// (0x000619ec) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x00065fca) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x00065fca) list_single_2heading_msg_pane_g

0x809c,	// (0x0005e3ca) list_single_2heading_msg_pane_t1_ParamLimits

0x809c,	// (0x0005e3ca) list_single_2heading_msg_pane_t1

0x80c4,	// (0x0005e3f2) list_single_2heading_msg_pane_t2_ParamLimits

0x80c4,	// (0x0005e3f2) list_single_2heading_msg_pane_t2

0x80f3,	// (0x0005e421) list_single_2heading_msg_pane_t3_ParamLimits

0x80f3,	// (0x0005e421) list_single_2heading_msg_pane_t3

0x40ce,	// (0x0005a3fc) list_single_2heading_msg_pane_t4_ParamLimits

0x40ce,	// (0x0005a3fc) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x00065fd3) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x00065fd3) list_single_2heading_msg_pane_t

0xdffa,	// (0x00064328) title_pane_g4_ParamLimits

0xdffa,	// (0x00064328) title_pane_g4

0x62e2,	// (0x0005c610) title_pane_stacon_g3_ParamLimits

0x62e2,	// (0x0005c610) title_pane_stacon_g3

0xc424,	// (0x00062752) list_single_2graphic_im_pane_g4_ParamLimits

0xc424,	// (0x00062752) list_single_2graphic_im_pane_g4

0xa0fa,	// (0x00060428) popup_side_volume_key_window_cp

0xa964,	// (0x00060c92) main_idle_act2_pane_t1

0x7665,	// (0x0005d993) toolbar_button_pane_g10

0x5b9e,	// (0x0005becc) popup_toolbar_window_cp1

0xb1a3,	// (0x000614d1) clock_nsta_pane_cp_t1

0xb1a3,	// (0x000614d1) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00065dd5) clock_nsta_pane_cp_t

0x6689,	// (0x0005c9b7) navi_navi_volume_pane_cp2_ParamLimits

0x6695,	// (0x0005c9c3) popup_side_volume_key_window_g1_ParamLimits

0x66a1,	// (0x0005c9cf) popup_side_volume_key_window_g2_ParamLimits

0x66ad,	// (0x0005c9db) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00065a15) popup_side_volume_key_window_g_ParamLimits

0x7c52,	// (0x0005df80) fep_hwr_aid_pane

0x7cf9,	// (0x0005e027) bg_fep_hwr_top_pane_g4_ParamLimits

0xb83f,	// (0x00061b6d) fep_hwr_top_pane_g1_ParamLimits

0xb851,	// (0x00061b7f) fep_hwr_top_pane_g2_ParamLimits

0x7d19,	// (0x0005e047) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x00065e2a) fep_hwr_top_pane_g_ParamLimits

0x7d2e,	// (0x0005e05c) fep_hwr_top_text_pane_ParamLimits

0x9ebd,	// (0x000601eb) aid_touch_tab_arrow_arrow_2

0x9ec6,	// (0x000601f4) aid_touch_tab_arrow_left_2

0x7c66,	// (0x0005df94) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c9d,	// (0x0005dfcb) fep_hwr_prediction_pane

0xb9aa,	// (0x00061cd8) fep_vkb_prediction_pane

0xbaa7,	// (0x00061dd5) fep_vkb_side_pane_g3_ParamLimits

0xbaa7,	// (0x00061dd5) fep_vkb_side_pane_g3

0x7ea9,	// (0x0005e1d7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7f15,	// (0x0005e243) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7f22,	// (0x0005e250) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x00065ed9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x812c,	// (0x0005e45a) fep_hwr_prediction_pane_g1

0x8136,	// (0x0005e464) fep_hwr_prediction_pane_g2

0x813e,	// (0x0005e46c) fep_hwr_prediction_pane_g3

0x8146,	// (0x0005e474) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x00065fdc) fep_hwr_prediction_pane_g

0xc917,	// (0x00062c45) fep_vkb_prediction_pane_g1

0xc921,	// (0x00062c4f) fep_vkb_prediction_pane_g2

0xc929,	// (0x00062c57) fep_vkb_prediction_pane_g3

0xc931,	// (0x00062c5f) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x00065fe5) fep_vkb_prediction_pane_g

0x7993,	// (0x0005dcc1) slider_set_pane_g3

0x79a7,	// (0x0005dcd5) slider_set_pane_g4

0x79bf,	// (0x0005dced) slider_set_pane_g5

0x7993,	// (0x0005dcc1) slider_set_pane_g6

0x79d5,	// (0x0005dd03) slider_set_pane_g7

0xa549,	// (0x00060877) slider_form_pane_g3

0xa552,	// (0x00060880) slider_form_pane_g4

0xa55a,	// (0x00060888) slider_form_pane_g5

0xa549,	// (0x00060877) slider_form_pane_g6

0xa562,	// (0x00060890) slider_form_pane_g7

0xac10,	// (0x00060f3e) slider_set_pane_vc_g3

0xac19,	// (0x00060f47) slider_set_pane_vc_g4

0xac22,	// (0x00060f50) slider_set_pane_vc_g5

0xac10,	// (0x00060f3e) slider_set_pane_vc_g6

0xac2b,	// (0x00060f59) slider_set_pane_vc_g7

0xae61,	// (0x0006118f) slider_form_pane_vc_g1

0xae6a,	// (0x00061198) slider_form_pane_vc_g2

0xae73,	// (0x000611a1) slider_form_pane_vc_g3

0xae61,	// (0x0006118f) slider_form_pane_vc_g4

0xae7c,	// (0x000611aa) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x00065da7) slider_form_pane_vc_g

0x537a,	// (0x0005b6a8) main_idle_act3_pane

0xc939,	// (0x00062c67) ai3_links_pane

0xc942,	// (0x00062c70) popup_ai3_data_window_ParamLimits

0xc942,	// (0x00062c70) popup_ai3_data_window

0xdfdc,	// (0x0006430a) grid_ai3_links_pane

0xc95a,	// (0x00062c88) cell_ai3_links_pane_ParamLimits

0xc95a,	// (0x00062c88) cell_ai3_links_pane

0xc972,	// (0x00062ca0) bg_popup_sub_pane_cp11

0xc97f,	// (0x00062cad) cell_ai3_links_pane_g1

0xdfdc,	// (0x0006430a) bg_popup_sub_pane_cp12

0xc9a4,	// (0x00062cd2) heading_ai3_data_pane

0xc9ac,	// (0x00062cda) list_ai3_gene_pane

0xc9b8,	// (0x00062ce6) popup_ai3_data_window_g1

0xc9c0,	// (0x00062cee) heading_ai3_data_pane_g1

0xc9c8,	// (0x00062cf6) heading_ai3_data_pane_t1

0xc9d6,	// (0x00062d04) list_double_ai3_gene_pane_ParamLimits

0xc9d6,	// (0x00062d04) list_double_ai3_gene_pane

0xc9e3,	// (0x00062d11) list_single_ai3_gene_pane_ParamLimits

0xc9e3,	// (0x00062d11) list_single_ai3_gene_pane

0xb7a8,	// (0x00061ad6) list_highlight_pane_cp7_ParamLimits

0xb7a8,	// (0x00061ad6) list_highlight_pane_cp7

0xc9f0,	// (0x00062d1e) list_single_a13_gene_pane_t1_ParamLimits

0xc9f0,	// (0x00062d1e) list_single_a13_gene_pane_t1

0xca07,	// (0x00062d35) list_single_ai3_gene_pane_g1

0xca10,	// (0x00062d3e) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x00065fee) list_single_ai3_gene_pane_g

0xca18,	// (0x00062d46) list_double_ai3_gene_pane_g1_ParamLimits

0xca18,	// (0x00062d46) list_double_ai3_gene_pane_g1

0xca24,	// (0x00062d52) list_double_ai3_gene_pane_t1_ParamLimits

0xca24,	// (0x00062d52) list_double_ai3_gene_pane_t1

0xca40,	// (0x00062d6e) list_double_ai3_gene_pane_t2_ParamLimits

0xca40,	// (0x00062d6e) list_double_ai3_gene_pane_t2

0xca55,	// (0x00062d83) list_double_ai3_gene_pane_t3_ParamLimits

0xca55,	// (0x00062d83) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x00065ff3) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x00065ff3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x40c4,	// (0x0005a3f2) aid_size_min_col_2

0xc903,	// (0x00062c31) aid_size_min_msg_ParamLimits

0xc903,	// (0x00062c31) aid_size_min_msg

0xbba7,	// (0x00061ed5) fep_vkb_top_text_pane_g2_ParamLimits

0xbba7,	// (0x00061ed5) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00065e5a) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00065e5a) fep_vkb_top_text_pane_g

0x537a,	// (0x0005b6a8) main_hc_apps_shell_pane

0xca72,	// (0x00062da0) grid_hc_apps_pane_ParamLimits

0xca72,	// (0x00062da0) grid_hc_apps_pane

0xca84,	// (0x00062db2) list_hc_apps_pane

0xca8c,	// (0x00062dba) scroll_pane_cp37_ParamLimits

0xca8c,	// (0x00062dba) scroll_pane_cp37

0xca98,	// (0x00062dc6) cell_hc_apps_pane_ParamLimits

0xca98,	// (0x00062dc6) cell_hc_apps_pane

0xcb46,	// (0x00062e74) cell_hc_apps_pane_g1_ParamLimits

0xcb46,	// (0x00062e74) cell_hc_apps_pane_g1

0xcb76,	// (0x00062ea4) cell_hc_apps_pane_g2_ParamLimits

0xcb76,	// (0x00062ea4) cell_hc_apps_pane_g2

0xcb92,	// (0x00062ec0) cell_hc_apps_pane_g3_ParamLimits

0xcb92,	// (0x00062ec0) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x00065ffa) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x00065ffa) cell_hc_apps_pane_g

0xcbb4,	// (0x00062ee2) cell_hc_apps_pane_t1_ParamLimits

0xcbb4,	// (0x00062ee2) cell_hc_apps_pane_t1

0xe176,	// (0x000644a4) grid_highlight_pane_cp10_ParamLimits

0xe176,	// (0x000644a4) grid_highlight_pane_cp10

0xcbf4,	// (0x00062f22) list_single_hc_apps_pane_ParamLimits

0xcbf4,	// (0x00062f22) list_single_hc_apps_pane

0xcc57,	// (0x00062f85) list_single_hc_apps_pane_g1

0xb6d6,	// (0x00061a04) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x00066001) list_single_hc_apps_pane_g

0xb6ef,	// (0x00061a1d) list_single_hc_apps_pane_g2_copy1

0x814e,	// (0x0005e47c) list_single_hc_apps_pane_t1

0xe03e,	// (0x0006436c) bg_set_opt_pane_cp_ParamLimits

0x5693,	// (0x0005b9c1) setting_slider_pane_t1_ParamLimits

0x56ac,	// (0x0005b9da) setting_slider_pane_t2_ParamLimits

0x56c6,	// (0x0005b9f4) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00065867) setting_slider_pane_t_ParamLimits

0x56de,	// (0x0005ba0c) slider_set_pane_ParamLimits

0x6c78,	// (0x0005cfa6) control_pane_g5_ParamLimits

0x6c78,	// (0x0005cfa6) control_pane_g5

0xa39c,	// (0x000606ca) slider_set_pane_g1_ParamLimits

0x7987,	// (0x0005dcb5) slider_set_pane_g2_ParamLimits

0x7993,	// (0x0005dcc1) slider_set_pane_g3_ParamLimits

0x79a7,	// (0x0005dcd5) slider_set_pane_g4_ParamLimits

0x79bf,	// (0x0005dced) slider_set_pane_g5_ParamLimits

0x7993,	// (0x0005dcc1) slider_set_pane_g6_ParamLimits

0x79d5,	// (0x0005dd03) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00065c68) slider_set_pane_g_ParamLimits

0x1519,	// (0x00057847) navi_icon_text_pane_ParamLimits

0x7396,	// (0x0005d6c4) aid_fill_nsta_2_ParamLimits

0x73d5,	// (0x0005d703) aid_touch_tab_arrow_left_ParamLimits

0x73e4,	// (0x0005d712) aid_touch_tab_arrow_right_ParamLimits

0x7451,	// (0x0005d77f) clock_nsta_pane_ParamLimits

0x9e9f,	// (0x000601cd) navi_icon_pane_g1_ParamLimits

0x9eab,	// (0x000601d9) navi_text_pane_t1_ParamLimits

0xb2b3,	// (0x000615e1) navi_icon_text_pane_g1_ParamLimits

0xb2bf,	// (0x000615ed) navi_icon_text_pane_t1_ParamLimits

0xcc57,	// (0x00062f85) list_single_hc_apps_pane_g1_ParamLimits

0xb6d6,	// (0x00061a04) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x00066001) list_single_hc_apps_pane_g_ParamLimits

0xb6ef,	// (0x00061a1d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x814e,	// (0x0005e47c) list_single_hc_apps_pane_t1_ParamLimits

0x54d7,	// (0x0005b805) popup_toolbar2_fixed_window_ParamLimits

0x54d7,	// (0x0005b805) popup_toolbar2_fixed_window

0x72ac,	// (0x0005d5da) popup_toolbar2_float_window

0xdfdc,	// (0x0006430a) bg_popup_sub_pane_cp27

0xcc70,	// (0x00062f9e) grid_toolbar2_float_pane

0xdfdc,	// (0x0006430a) bg_popup_sub_pane_cp26

0xcc70,	// (0x00062f9e) grid_toolbar2_fixed_pane

0xcc78,	// (0x00062fa6) cell_toolbar2_fixed_pane_ParamLimits

0xcc78,	// (0x00062fa6) cell_toolbar2_fixed_pane

0xcc88,	// (0x00062fb6) cell_toolbar2_fixed_pane_g1

0x717e,	// (0x0005d4ac) toolbar2_fixed_button_pane

0x900d,	// (0x0005f33b) toolbar2_fixed_button_pane_g1

0x901d,	// (0x0005f34b) toolbar2_fixed_button_pane_g2

0x9015,	// (0x0005f343) toolbar2_fixed_button_pane_g3

0x902d,	// (0x0005f35b) toolbar2_fixed_button_pane_g4

0x9025,	// (0x0005f353) toolbar2_fixed_button_pane_g5

0x9035,	// (0x0005f363) toolbar2_fixed_button_pane_g6

0x903d,	// (0x0005f36b) toolbar2_fixed_button_pane_g7

0x904d,	// (0x0005f37b) toolbar2_fixed_button_pane_g8

0x9045,	// (0x0005f373) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00065b6a) toolbar2_fixed_button_pane_g

0xcc91,	// (0x00062fbf) cell_toolbar2_float_pane_ParamLimits

0xcc91,	// (0x00062fbf) cell_toolbar2_float_pane

0xcca2,	// (0x00062fd0) cell_toolbar2_float_pane_g1

0x717e,	// (0x0005d4ac) toolbar2_fixed_button_pane_cp

0xb911,	// (0x00061c3f) fep_vkb_accented_list_pane_ParamLimits

0xb911,	// (0x00061c3f) fep_vkb_accented_list_pane

0x7e89,	// (0x0005e1b7) bg_popup_fep_shadow_pane_g9

0x1647,	// (0x00057975) bg_popup_fep_shadow_pane_cp3

0xf20d,	// (0x0006553b) list_accented_list_pane

0xccab,	// (0x00062fd9) list_single_accented_list_pane_ParamLimits

0xccab,	// (0x00062fd9) list_single_accented_list_pane

0x1647,	// (0x00057975) list_highlight_pane_cp10

0xccbc,	// (0x00062fea) list_single_accented_list_pane_t1

0x71fc,	// (0x0005d52a) popup_slider_window_ParamLimits

0x71fc,	// (0x0005d52a) popup_slider_window

0xc8fa,	// (0x00062c28) aid_indentation_list_msg

0xcd7a,	// (0x000630a8) bg_popup_window_pane_cp19

0xcde2,	// (0x00063110) popup_slider_window_g1

0xcdfe,	// (0x0006312c) popup_slider_window_g2

0xce1a,	// (0x00063148) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x00066006) popup_slider_window_g

0xce80,	// (0x000631ae) popup_slider_window_t1

0xcef4,	// (0x00063222) small_volume_slider_vertical_pane

0xb7e3,	// (0x00061b11) small_volume_slider_vertical_pane_g1

0xb7e3,	// (0x00061b11) small_volume_slider_vertical_pane_g2

0xcf10,	// (0x0006323e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x00066018) small_volume_slider_vertical_pane_g

0x529d,	// (0x0005b5cb) area_side_right_pane_ParamLimits

0x529d,	// (0x0005b5cb) area_side_right_pane

0x817c,	// (0x0005e4aa) aid_size_side_button_ParamLimits

0x817c,	// (0x0005e4aa) aid_size_side_button

0x8190,	// (0x0005e4be) grid_sctrl_middle_pane_ParamLimits

0x8190,	// (0x0005e4be) grid_sctrl_middle_pane

0x81af,	// (0x0005e4dd) sctrl_sk_bottom_pane

0x81c0,	// (0x0005e4ee) sctrl_sk_top_pane

0x81d2,	// (0x0005e500) aid_touch_sctrl_top

0x81df,	// (0x0005e50d) bg_sctrl_sk_pane_ParamLimits

0x81df,	// (0x0005e50d) bg_sctrl_sk_pane

0x81ed,	// (0x0005e51b) sctrl_sk_top_pane_g1

0x81fa,	// (0x0005e528) sctrl_sk_top_pane_t1

0x81d2,	// (0x0005e500) aid_touch_sctrl_bottom

0x81df,	// (0x0005e50d) bg_sctrl_sk_pane_cp_ParamLimits

0x81df,	// (0x0005e50d) bg_sctrl_sk_pane_cp

0x8215,	// (0x0005e543) sctrl_sk_bottom_pane_g1

0x81fa,	// (0x0005e528) sctrl_sk_bottom_pane_t1

0x821e,	// (0x0005e54c) cell_sctrl_middle_pane_ParamLimits

0x821e,	// (0x0005e54c) cell_sctrl_middle_pane

0x8239,	// (0x0005e567) aid_touch_sctrl_middle_ParamLimits

0x8239,	// (0x0005e567) aid_touch_sctrl_middle

0x824b,	// (0x0005e579) bg_sctrl_middle_pane_ParamLimits

0x824b,	// (0x0005e579) bg_sctrl_middle_pane

0x7ea9,	// (0x0005e1d7) cell_sctrl_middle_pane_g1_ParamLimits

0x7ea9,	// (0x0005e1d7) cell_sctrl_middle_pane_g1

0x8259,	// (0x0005e587) cell_sctrl_middle_pane_g2_ParamLimits

0x8259,	// (0x0005e587) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x00066024) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x00066024) cell_sctrl_middle_pane_g

0x900d,	// (0x0005f33b) bg_sctrl_middle_pane_g1

0x9015,	// (0x0005f343) bg_sctrl_middle_pane_g2

0x901d,	// (0x0005f34b) bg_sctrl_middle_pane_g3

0x9025,	// (0x0005f353) bg_sctrl_middle_pane_g4

0x902d,	// (0x0005f35b) bg_sctrl_middle_pane_g5

0x9035,	// (0x0005f363) bg_sctrl_middle_pane_g6

0x903d,	// (0x0005f36b) bg_sctrl_middle_pane_g7

0x9045,	// (0x0005f373) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x00066029) bg_sctrl_middle_pane_g

0x904d,	// (0x0005f37b) bg_sctrl_middle_pane_g8_copy1

0x900d,	// (0x0005f33b) bg_sctrl_sk_pane_g1

0x901d,	// (0x0005f34b) bg_sctrl_sk_pane_g2

0x9015,	// (0x0005f343) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00065b6a) bg_sctrl_sk_pane_g

0xf036,	// (0x00065364) aid_size_touch_scroll_bar

0x902d,	// (0x0005f35b) bg_sctrl_sk_pane_g4

0x9025,	// (0x0005f353) bg_sctrl_sk_pane_g5

0x9035,	// (0x0005f363) bg_sctrl_sk_pane_g6

0x903d,	// (0x0005f36b) bg_sctrl_sk_pane_g7

0x904d,	// (0x0005f37b) bg_sctrl_sk_pane_g8

0x9045,	// (0x0005f373) bg_sctrl_sk_pane_g9

0x6e65,	// (0x0005d193) popup_fep_china_hwr2_fs_candidate_window

0x6e6f,	// (0x0005d19d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e6f,	// (0x0005d19d) popup_fep_china_hwr2_fs_control_window

0x7ea9,	// (0x0005e1d7) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x0006601f) sctrl_sk_top_pane_g

0xcf19,	// (0x00063247) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf19,	// (0x00063247) aid_fep_china_hwr2_fs_cell

0xcf2b,	// (0x00063259) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf2b,	// (0x00063259) bg_popup_fep_shadow_pane_cp4

0xcf42,	// (0x00063270) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf42,	// (0x00063270) bg_popup_fep_shadow_pane_cp5

0xcf54,	// (0x00063282) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf54,	// (0x00063282) popup_fep_china_hwr2_fs_control_bar_grid

0xcf64,	// (0x00063292) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf6c,	// (0x0006329a) aid_fep_china_hwr2_fs_candi_cell

0xdfdc,	// (0x0006430a) bg_popup_fep_shadow_pane_cp6

0xcf76,	// (0x000632a4) popup_fep_china_hwr2_fs_candidate_grid

0xcf80,	// (0x000632ae) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf80,	// (0x000632ae) cell_fep_china_hwr2_fs_funtion_grid

0xb7e3,	// (0x00061b11) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf98,	// (0x000632c6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf98,	// (0x000632c6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcfa6,	// (0x000632d4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcfa6,	// (0x000632d4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x0006603a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x0006603a) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfbc,	// (0x000632ea) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfbc,	// (0x000632ea) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfd1,	// (0x000632ff) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfd1,	// (0x000632ff) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x0006603f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x0006603f) cell_fep_china_hwr2_fs_funtion_grid_t

0xcfed,	// (0x0006331b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcff5,	// (0x00063323) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcffd,	// (0x0006332b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x00066044) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd005,	// (0x00063333) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd005,	// (0x00063333) cell_fep_china_hwr2_fs_candidate_grid

0xd01e,	// (0x0006334c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd026,	// (0x00063354) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb7e3,	// (0x00061b11) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb7e3,	// (0x00061b11) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00065e5f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd02e,	// (0x0006335c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7464,	// (0x0005d792) clock_nsta_pane_cp_24_ParamLimits

0x7464,	// (0x0005d792) clock_nsta_pane_cp_24

0x74e2,	// (0x0005d810) indicator_nsta_pane_cp_24_ParamLimits

0x74e2,	// (0x0005d810) indicator_nsta_pane_cp_24

0x9d1b,	// (0x00060049) heading_pane_g1

0x0001,

0xf8a1,	// (0x00065bcf) heading_pane_g

0xa7ad,	// (0x00060adb) grid_sct_catagory_button_pane

0xa7dd,	// (0x00060b0b) scroll_pane_cp5_ParamLimits

0xb301,	// (0x0006162f) button_value_adjust_pane_cp5_ParamLimits

0xb301,	// (0x0006162f) button_value_adjust_pane_cp5

0xb3e0,	// (0x0006170e) form2_midp_time_pane_ParamLimits

0xd03c,	// (0x0006336a) cell_sct_catagory_button_pane_ParamLimits

0xd03c,	// (0x0006336a) cell_sct_catagory_button_pane

0xb7a8,	// (0x00061ad6) bg_button_pane_cp01_ParamLimits

0xb7a8,	// (0x00061ad6) bg_button_pane_cp01

0xb7e3,	// (0x00061b11) cell_sct_catagory_button_pane_g1

0x723b,	// (0x0005d569) popup_tb_extension_window

0xd04e,	// (0x0006337c) aid_size_cell_ext_ParamLimits

0xd04e,	// (0x0006337c) aid_size_cell_ext

0xe176,	// (0x000644a4) bg_tb_trans_pane_cp1_ParamLimits

0xe176,	// (0x000644a4) bg_tb_trans_pane_cp1

0xd06e,	// (0x0006339c) grid_tb_ext_pane_ParamLimits

0xd06e,	// (0x0006339c) grid_tb_ext_pane

0xd09e,	// (0x000633cc) cell_tb_ext_pane_ParamLimits

0xd09e,	// (0x000633cc) cell_tb_ext_pane

0xd0b5,	// (0x000633e3) cell_tb_ext_pane_g1_ParamLimits

0xd0b5,	// (0x000633e3) cell_tb_ext_pane_g1

0xd0d2,	// (0x00063400) cell_tb_ext_pane_t1

0xe176,	// (0x000644a4) list_highlight_pane_cp11_ParamLimits

0xe176,	// (0x000644a4) list_highlight_pane_cp11

0x54f6,	// (0x0005b824) popup_uni_indicator_window_ParamLimits

0x54f6,	// (0x0005b824) popup_uni_indicator_window

0xf0f4,	// (0x00065422) bg_popup_sub_pane_cp14

0xd0ee,	// (0x0006341c) list_uniindi_pane

0xd0fa,	// (0x00063428) uniindi_top_pane

0xe176,	// (0x000644a4) bg_uniindi_top_pane

0xd119,	// (0x00063447) uniindi_top_pane_g1

0xd12f,	// (0x0006345d) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x0006604b) uniindi_top_pane_g

0xd159,	// (0x00063487) uniindi_top_pane_t1

0xd183,	// (0x000634b1) list_single_uniindi_pane_ParamLimits

0xd183,	// (0x000634b1) list_single_uniindi_pane

0xb7e3,	// (0x00061b11) bg_uniindi_top_pane_g1

0xd196,	// (0x000634c4) list_single_uniindi_pane_g1

0xd1a9,	// (0x000634d7) list_single_uniindi_pane_t1

0x537a,	// (0x0005b6a8) control_bg_pane

0xd1ce,	// (0x000634fc) bg_sctrl_sk_pane_cp1

0xd1d7,	// (0x00063505) bg_sctrl_sk_pane_cp2

0xd1e0,	// (0x0006350e) control_bg_pane_g1

0xd1e9,	// (0x00063517) control_bg_pane_g2

0x0001,

0xfd26,	// (0x00066054) control_bg_pane_g

0xb147,	// (0x00061475) cell_indicator_nsta_pane_g1_ParamLimits

0xb155,	// (0x00061483) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00065dc3) cell_indicator_nsta_pane_g_ParamLimits

0x3f50,	// (0x0005a27e) form2_midp_time_pane_t1_ParamLimits

0x6dcf,	// (0x0005d0fd) main_idle_act4_pane_ParamLimits

0x6dcf,	// (0x0005d0fd) main_idle_act4_pane

0x723b,	// (0x0005d569) popup_tb_extension_window_ParamLimits

0xd08e,	// (0x000633bc) tb_ext_find_pane_ParamLimits

0xd08e,	// (0x000633bc) tb_ext_find_pane

0xd1f2,	// (0x00063520) ai_gene_pane_1_cp1

0x16c8,	// (0x000579f6) ai_gene_pane_2_cp1

0xd1fa,	// (0x00063528) list_single_idle_plugin_calendar_pane

0xd203,	// (0x00063531) list_single_idle_plugin_notification_pane

0xd20c,	// (0x0006353a) list_single_idle_plugin_player_pane

0xd215,	// (0x00063543) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd215,	// (0x00063543) list_single_idle_plugin_shortcut_pane

0xd237,	// (0x00063565) main_idle_act4_pane_t1

0xd249,	// (0x00063577) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x00066059) main_idle_act4_pane_t

0xd25b,	// (0x00063589) middle_sk_idle_act4_pane_ParamLimits

0xd25b,	// (0x00063589) middle_sk_idle_act4_pane

0xd271,	// (0x0006359f) popup_clock_digital_analogue_window_cp2

0xd28b,	// (0x000635b9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd28b,	// (0x000635b9) shortcut_wheel_idle_act4_pane

0xb7e3,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g1

0xb7e3,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g2

0xb7e3,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g3

0xb7e3,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g4

0xb7e3,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g5

0xd29f,	// (0x000635cd) shortcut_wheel_idle_act4_pane_g6

0xd2a7,	// (0x000635d5) shortcut_wheel_idle_act4_pane_g7

0xd2af,	// (0x000635dd) shortcut_wheel_idle_act4_pane_g8

0xd2b7,	// (0x000635e5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x0006605e) shortcut_wheel_idle_act4_pane_g

0xba53,	// (0x00061d81) middle_sk_idle_act4_pane_g1_ParamLimits

0xba53,	// (0x00061d81) middle_sk_idle_act4_pane_g1

0xd31b,	// (0x00063649) middle_sk_idle_act4_pane_g2_ParamLimits

0xd31b,	// (0x00063649) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x00066081) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x00066081) middle_sk_idle_act4_pane_g

0xd327,	// (0x00063655) middle_sk_idle_act4_pane_t1_ParamLimits

0xd327,	// (0x00063655) middle_sk_idle_act4_pane_t1

0xd344,	// (0x00063672) grid_ai_shortcut_pane_ParamLimits

0xd344,	// (0x00063672) grid_ai_shortcut_pane

0xd35d,	// (0x0006368b) list_highlight_pane_cp16_ParamLimits

0xd35d,	// (0x0006368b) list_highlight_pane_cp16

0xd36a,	// (0x00063698) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd36a,	// (0x00063698) list_single_idle_plugin_shortcut_pane_g1

0xd376,	// (0x000636a4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd376,	// (0x000636a4) list_single_idle_plugin_shortcut_pane_g2

0xd38e,	// (0x000636bc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd38e,	// (0x000636bc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x00066086) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x00066086) list_single_idle_plugin_shortcut_pane_g

0xd3a1,	// (0x000636cf) cell_ai_shortcut_pane_ParamLimits

0xd3a1,	// (0x000636cf) cell_ai_shortcut_pane

0xd3c5,	// (0x000636f3) cell_ai_shortcut_pane_g1_ParamLimits

0xd3c5,	// (0x000636f3) cell_ai_shortcut_pane_g1

0xd1f2,	// (0x00063520) ai_gene_pane_1_cp2

0xd3e7,	// (0x00063715) ai_gene_pane_2_cp2

0xd3ef,	// (0x0006371d) list_highlight_pane_cp15

0xd3f8,	// (0x00063726) list_single_idle_plugin_calendar_pane_g1

0xd3ef,	// (0x0006371d) list_highlight_pane_cp17

0xd400,	// (0x0006372e) list_single_idle_plugin_calendar_pane_g1_copy1

0xd408,	// (0x00063736) list_single_idle_plugin_player_pane_g1

0xaa06,	// (0x00060d34) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x0006608d) list_single_idle_plugin_player_pane_g

0xd410,	// (0x0006373e) list_single_idle_plugin_player_pane_t1

0xd41e,	// (0x0006374c) list_single_idle_plugin_player_pane_t2

0xd42c,	// (0x0006375a) list_single_idle_plugin_player_pane_t3

0xd43a,	// (0x00063768) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x00066092) list_single_idle_plugin_player_pane_t

0xd448,	// (0x00063776) wait_bar_pane_cp15

0xd450,	// (0x0006377e) grid_ai_notification_pane

0xaa06,	// (0x00060d34) list_single_idle_plugin_notification_pane_g1

0xd459,	// (0x00063787) cell_ai_notification_pane_ParamLimits

0xd459,	// (0x00063787) cell_ai_notification_pane

0xd466,	// (0x00063794) cell_ai_notification_pane_g1

0xd46e,	// (0x0006379c) cell_ai_notification_pane_t1

0xd47c,	// (0x000637aa) tb_ext_find_button_pane

0xd484,	// (0x000637b2) tb_ext_find_pane_g1

0xd48c,	// (0x000637ba) tb_ext_find_pane_t1

0x120a,	// (0x00057538) tb_ext_find_button_pane_g1

0xd49a,	// (0x000637c8) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x0006609b) tb_ext_find_button_pane_g

0xd237,	// (0x00063565) main_idle_act4_pane_t1_ParamLimits

0xd249,	// (0x00063577) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x00066059) main_idle_act4_pane_t_ParamLimits

0xd271,	// (0x0006359f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd27f,	// (0x000635ad) sat_plugin_idle_act4_pane_ParamLimits

0xd27f,	// (0x000635ad) sat_plugin_idle_act4_pane

0xd4a3,	// (0x000637d1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4a3,	// (0x000637d1) sat_plugin_idle_act4_pane_t1

0xd4b6,	// (0x000637e4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4b6,	// (0x000637e4) sat_plugin_idle_act4_pane_t2

0xd4c9,	// (0x000637f7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4c9,	// (0x000637f7) sat_plugin_idle_act4_pane_t3

0xd4dc,	// (0x0006380a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4dc,	// (0x0006380a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x000660a0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x000660a0) sat_plugin_idle_act4_pane_t

0x543f,	// (0x0005b76d) popup_battery_window_ParamLimits

0x543f,	// (0x0005b76d) popup_battery_window

0xe176,	// (0x000644a4) bg_popup_sub_pane_cp25_ParamLimits

0xe176,	// (0x000644a4) bg_popup_sub_pane_cp25

0xd4ef,	// (0x0006381d) popup_battery_window_g1_ParamLimits

0xd4ef,	// (0x0006381d) popup_battery_window_g1

0xd4fb,	// (0x00063829) popup_battery_window_t1_ParamLimits

0xd4fb,	// (0x00063829) popup_battery_window_t1

0xd50d,	// (0x0006383b) popup_battery_window_t2_ParamLimits

0xd50d,	// (0x0006383b) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x000660a9) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x000660a9) popup_battery_window_t

0x69ec,	// (0x0005cd1a) midp_canvas_pane_ParamLimits

0x6a65,	// (0x0005cd93) midp_keypad_pane_ParamLimits

0x6a65,	// (0x0005cd93) midp_keypad_pane

0xf51d,	// (0x0006584b) main_midp_pane_ParamLimits

0xb1c1,	// (0x000614ef) signal_pane_g2_cp_ParamLimits

0xd52a,	// (0x00063858) aid_size_cell_midp_keypad_ParamLimits

0xd52a,	// (0x00063858) aid_size_cell_midp_keypad

0xd544,	// (0x00063872) midp_keyp_game_grid_pane_ParamLimits

0xd544,	// (0x00063872) midp_keyp_game_grid_pane

0xd564,	// (0x00063892) midp_keyp_rocker_pane_ParamLimits

0xd564,	// (0x00063892) midp_keyp_rocker_pane

0xd59d,	// (0x000638cb) midp_keyp_sk_left_pane_ParamLimits

0xd59d,	// (0x000638cb) midp_keyp_sk_left_pane

0xd5f7,	// (0x00063925) midp_keyp_sk_right_pane_ParamLimits

0xd5f7,	// (0x00063925) midp_keyp_sk_right_pane

0xdfdc,	// (0x0006430a) bg_button_pane_cp03

0xd651,	// (0x0006397f) midp_keyp_sk_left_pane_g1

0xdfdc,	// (0x0006430a) bg_button_pane_cp04

0xd651,	// (0x0006397f) midp_keyp_sk_right_pane_g1

0xb7e3,	// (0x00061b11) midp_keyp_rocker_pane_g1

0xd65a,	// (0x00063988) keyp_game_cell_pane_ParamLimits

0xd65a,	// (0x00063988) keyp_game_cell_pane

0xdfdc,	// (0x0006430a) bg_button_pane_cp02

0xd66d,	// (0x0006399b) keyp_game_cell_pane_g1

0x5475,	// (0x0005b7a3) popup_fep_vkb2_window_ParamLimits

0x5475,	// (0x0005b7a3) popup_fep_vkb2_window

0x8277,	// (0x0005e5a5) aid_size_cell_vkb2_ParamLimits

0x8277,	// (0x0005e5a5) aid_size_cell_vkb2

0x82cb,	// (0x0005e5f9) popup_fep_vkb2_window_g1_ParamLimits

0x82cb,	// (0x0005e5f9) popup_fep_vkb2_window_g1

0x8313,	// (0x0005e641) vkb2_area_bottom_pane_ParamLimits

0x8313,	// (0x0005e641) vkb2_area_bottom_pane

0x835f,	// (0x0005e68d) vkb2_area_keypad_pane_ParamLimits

0x835f,	// (0x0005e68d) vkb2_area_keypad_pane

0x83a1,	// (0x0005e6cf) vkb2_area_top_pane_ParamLimits

0x83a1,	// (0x0005e6cf) vkb2_area_top_pane

0x841b,	// (0x0005e749) vkb2_top_entry_pane_ParamLimits

0x841b,	// (0x0005e749) vkb2_top_entry_pane

0x8445,	// (0x0005e773) vkb2_top_grid_left_pane_ParamLimits

0x8445,	// (0x0005e773) vkb2_top_grid_left_pane

0x8463,	// (0x0005e791) vkb2_top_grid_right_pane_ParamLimits

0x8463,	// (0x0005e791) vkb2_top_grid_right_pane

0x8481,	// (0x0005e7af) vkb2_cell_keypad_pane_ParamLimits

0x8481,	// (0x0005e7af) vkb2_cell_keypad_pane

0x8552,	// (0x0005e880) vkb2_area_bottom_grid_pane_ParamLimits

0x8552,	// (0x0005e880) vkb2_area_bottom_grid_pane

0x8578,	// (0x0005e8a6) vkb2_area_bottom_pane_g1_ParamLimits

0x8578,	// (0x0005e8a6) vkb2_area_bottom_pane_g1

0x859c,	// (0x0005e8ca) vkb2_area_bottom_pane_g2_ParamLimits

0x859c,	// (0x0005e8ca) vkb2_area_bottom_pane_g2

0x85ca,	// (0x0005e8f8) vkb2_area_bottom_pane_g3_ParamLimits

0x85ca,	// (0x0005e8f8) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x000660ae) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x000660ae) vkb2_area_bottom_pane_g

0x862b,	// (0x0005e959) vkb2_top_cell_left_pane_ParamLimits

0x862b,	// (0x0005e959) vkb2_top_cell_left_pane

0xd67e,	// (0x000639ac) vkb2_top_entry_pane_g1_ParamLimits

0xd67e,	// (0x000639ac) vkb2_top_entry_pane_g1

0xd68c,	// (0x000639ba) vkb2_top_entry_pane_t1_ParamLimits

0xd68c,	// (0x000639ba) vkb2_top_entry_pane_t1

0xd6be,	// (0x000639ec) vkb2_top_entry_pane_t2_ParamLimits

0xd6be,	// (0x000639ec) vkb2_top_entry_pane_t2

0xd6f0,	// (0x00063a1e) vkb2_top_entry_pane_t3_ParamLimits

0xd6f0,	// (0x00063a1e) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x000660b5) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x000660b5) vkb2_top_entry_pane_t

0x8678,	// (0x0005e9a6) vkb2_top_grid_right_pane_g1_ParamLimits

0x8678,	// (0x0005e9a6) vkb2_top_grid_right_pane_g1

0x868e,	// (0x0005e9bc) vkb2_top_grid_right_pane_g2_ParamLimits

0x868e,	// (0x0005e9bc) vkb2_top_grid_right_pane_g2

0x86a6,	// (0x0005e9d4) vkb2_top_grid_right_pane_g3_ParamLimits

0x86a6,	// (0x0005e9d4) vkb2_top_grid_right_pane_g3

0x86be,	// (0x0005e9ec) vkb2_top_grid_right_pane_g4_ParamLimits

0x86be,	// (0x0005e9ec) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x000660bc) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x000660bc) vkb2_top_grid_right_pane_g

0x86d4,	// (0x0005ea02) vkb2_top_cell_left_pane_g1

0x86eb,	// (0x0005ea19) vkb2_cell_keypad_pane_g1_ParamLimits

0x86eb,	// (0x0005ea19) vkb2_cell_keypad_pane_g1

0xd714,	// (0x00063a42) vkb2_cell_keypad_pane_t1_ParamLimits

0xd714,	// (0x00063a42) vkb2_cell_keypad_pane_t1

0x86f9,	// (0x0005ea27) vkb2_cell_bottom_grid_pane_ParamLimits

0x86f9,	// (0x0005ea27) vkb2_cell_bottom_grid_pane

0x8732,	// (0x0005ea60) vkb2_cell_bottom_grid_pane_g1

0xd2bf,	// (0x000635ed) aid_call2_pane_cp02

0xd2c7,	// (0x000635f5) aid_call_pane_cp02

0xd2cf,	// (0x000635fd) clock_digital_number_pane_cp10

0xd2d7,	// (0x00063605) clock_digital_number_pane_cp11

0xd2df,	// (0x0006360d) clock_digital_number_pane_cp12

0xd2e7,	// (0x00063615) clock_digital_number_pane_cp13

0xd2ef,	// (0x0006361d) clock_digital_separator_pane_cp10

0x120a,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g1

0x120a,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g2

0xd2f7,	// (0x00063625) popup_clock_digital_analogue_window_cp2_g3

0x120a,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g4

0xd2f7,	// (0x00063625) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x00066071) popup_clock_digital_analogue_window_cp2_g

0xd2ff,	// (0x0006362d) popup_clock_digital_analogue_window_cp2_t1

0xd30d,	// (0x0006363b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x0006607c) popup_clock_digital_analogue_window_cp2_t

0xb7e3,	// (0x00061b11) clock_digital_number_pane_cp10_g1

0xb7e3,	// (0x00061b11) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00065e5f) clock_digital_number_pane_cp10_g

0xb7e3,	// (0x00061b11) clock_digital_separator_pane_cp10_g1

0xb7e3,	// (0x00061b11) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00065e5f) clock_digital_separator_pane_cp10_g

0xd13b,	// (0x00063469) uniindi_top_pane_g3

0xd14c,	// (0x0006347a) uniindi_top_pane_g4

0x850c,	// (0x0005e83a) vkb2_row_keypad_pane_ParamLimits

0x850c,	// (0x0005e83a) vkb2_row_keypad_pane

0x874e,	// (0x0005ea7c) vkb2_cell_t_keypad_pane_ParamLimits

0x874e,	// (0x0005ea7c) vkb2_cell_t_keypad_pane

0x875e,	// (0x0005ea8c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x875e,	// (0x0005ea8c) vkb2_cell_t_keypad_pane_cp08

0x8771,	// (0x0005ea9f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8771,	// (0x0005ea9f) vkb2_cell_t_keypad_pane_cp09

0x8785,	// (0x0005eab3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8785,	// (0x0005eab3) vkb2_cell_t_keypad_pane_cp01

0x8796,	// (0x0005eac4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8796,	// (0x0005eac4) vkb2_cell_t_keypad_pane_cp02

0x87a7,	// (0x0005ead5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x87a7,	// (0x0005ead5) vkb2_cell_t_keypad_pane_cp03

0x87b8,	// (0x0005eae6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x87b8,	// (0x0005eae6) vkb2_cell_t_keypad_pane_cp04

0x87c9,	// (0x0005eaf7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x87c9,	// (0x0005eaf7) vkb2_cell_t_keypad_pane_cp05

0x87da,	// (0x0005eb08) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x87da,	// (0x0005eb08) vkb2_cell_t_keypad_pane_cp06

0x87eb,	// (0x0005eb19) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x87eb,	// (0x0005eb19) vkb2_cell_t_keypad_pane_cp07

0x87fc,	// (0x0005eb2a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x87fc,	// (0x0005eb2a) vkb2_cell_t_keypad_pane_cp10

0x7ea9,	// (0x0005e1d7) vkb2_cell_t_keypad_pane_g1

0xd72b,	// (0x00063a59) vkb2_cell_t_keypad_pane_t1

0x537a,	// (0x0005b6a8) popup_grid_graphic2_window

0xd73d,	// (0x00063a6b) aid_size_cell_graphic2_ParamLimits

0xd73d,	// (0x00063a6b) aid_size_cell_graphic2

0xd775,	// (0x00063aa3) bg_popup_window_pane_cp21_ParamLimits

0xd775,	// (0x00063aa3) bg_popup_window_pane_cp21

0xd783,	// (0x00063ab1) graphic2_pages_pane_ParamLimits

0xd783,	// (0x00063ab1) graphic2_pages_pane

0xd7c9,	// (0x00063af7) grid_graphic2_control_pane_ParamLimits

0xd7c9,	// (0x00063af7) grid_graphic2_control_pane

0xd807,	// (0x00063b35) grid_graphic2_pane_ParamLimits

0xd807,	// (0x00063b35) grid_graphic2_pane

0xd87b,	// (0x00063ba9) cell_graphic2_pane

0x537a,	// (0x0005b6a8) main_comp_mode_pane

0xc9ac,	// (0x00062cda) list_ai3_gene_pane_ParamLimits

0xcd7a,	// (0x000630a8) bg_popup_window_pane_cp19_ParamLimits

0xcd86,	// (0x000630b4) bg_touch_area_indi_pane_ParamLimits

0xcd86,	// (0x000630b4) bg_touch_area_indi_pane

0xcd9c,	// (0x000630ca) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd9c,	// (0x000630ca) bg_touch_area_indi_pane_cp01

0xcdb2,	// (0x000630e0) bg_touch_area_indi_pane_cp02_ParamLimits

0xcdb2,	// (0x000630e0) bg_touch_area_indi_pane_cp02

0xcdc8,	// (0x000630f6) bg_touch_area_indi_pane_cp03_ParamLimits

0xcdc8,	// (0x000630f6) bg_touch_area_indi_pane_cp03

0xcde2,	// (0x00063110) popup_slider_window_g1_ParamLimits

0xcdfe,	// (0x0006312c) popup_slider_window_g2_ParamLimits

0xce1a,	// (0x00063148) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x00066006) popup_slider_window_g_ParamLimits

0xce80,	// (0x000631ae) popup_slider_window_t1_ParamLimits

0xcef4,	// (0x00063222) small_volume_slider_vertical_pane_ParamLimits

0xd87b,	// (0x00063ba9) cell_graphic2_pane_ParamLimits

0xd8ca,	// (0x00063bf8) bg_button_pane_cp10_ParamLimits

0xd8ca,	// (0x00063bf8) bg_button_pane_cp10

0xd8dd,	// (0x00063c0b) bg_button_pane_cp11_ParamLimits

0xd8dd,	// (0x00063c0b) bg_button_pane_cp11

0xd8f0,	// (0x00063c1e) graphic2_pages_pane_g1_ParamLimits

0xd8f0,	// (0x00063c1e) graphic2_pages_pane_g1

0xd90b,	// (0x00063c39) graphic2_pages_pane_g2_ParamLimits

0xd90b,	// (0x00063c39) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x000660ca) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x000660ca) graphic2_pages_pane_g

0xd923,	// (0x00063c51) graphic2_pages_pane_t1_ParamLimits

0xd923,	// (0x00063c51) graphic2_pages_pane_t1

0xd93b,	// (0x00063c69) cell_graphic2_control_pane_ParamLimits

0xd93b,	// (0x00063c69) cell_graphic2_control_pane

0xd959,	// (0x00063c87) cell_graphic2_pane_g1_ParamLimits

0xd959,	// (0x00063c87) cell_graphic2_pane_g1

0xd966,	// (0x00063c94) cell_graphic2_pane_g2_ParamLimits

0xd966,	// (0x00063c94) cell_graphic2_pane_g2

0xd973,	// (0x00063ca1) cell_graphic2_pane_g3_ParamLimits

0xd973,	// (0x00063ca1) cell_graphic2_pane_g3

0xd980,	// (0x00063cae) cell_graphic2_pane_g4_ParamLimits

0xd980,	// (0x00063cae) cell_graphic2_pane_g4

0xd98d,	// (0x00063cbb) cell_graphic2_pane_g5_ParamLimits

0xd98d,	// (0x00063cbb) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x000660cf) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x000660cf) cell_graphic2_pane_g

0xd9a6,	// (0x00063cd4) cell_graphic2_pane_t1_ParamLimits

0xd9a6,	// (0x00063cd4) cell_graphic2_pane_t1

0x9099,	// (0x0005f3c7) grid_highlight_pane_cp11_ParamLimits

0x9099,	// (0x0005f3c7) grid_highlight_pane_cp11

0xe176,	// (0x000644a4) bg_button_pane_cp05

0xd9dc,	// (0x00063d0a) cell_graphic2_control_pane_g1

0xb7e3,	// (0x00061b11) bg_touch_area_indi_pane_g1

0xda04,	// (0x00063d32) aid_cmod_rocker_key_size

0xda0e,	// (0x00063d3c) aid_cmode_itu_key_size

0xda18,	// (0x00063d46) main_cmode_video_pane

0xda22,	// (0x00063d50) main_comp_mode_itu_pane

0xda2e,	// (0x00063d5c) main_comp_mode_rocker_pane

0xda3a,	// (0x00063d68) cell_cmode_rocker_pane_ParamLimits

0xda3a,	// (0x00063d68) cell_cmode_rocker_pane

0xda4c,	// (0x00063d7a) cell_cmode_itu_pane_ParamLimits

0xda4c,	// (0x00063d7a) cell_cmode_itu_pane

0xf0f4,	// (0x00065422) bg_button_pane_cp06_ParamLimits

0xf0f4,	// (0x00065422) bg_button_pane_cp06

0xba53,	// (0x00061d81) cell_cmode_rocker_pane_g1_ParamLimits

0xba53,	// (0x00061d81) cell_cmode_rocker_pane_g1

0xcf98,	// (0x000632c6) cell_cmode_rocker_pane_g2_ParamLimits

0xcf98,	// (0x000632c6) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x000660df) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x000660df) cell_cmode_rocker_pane_g

0xdfdc,	// (0x0006430a) bg_button_pane_cp07

0xda61,	// (0x00063d8f) cell_cmode_itu_pane_g1

0xda6a,	// (0x00063d98) cell_cmode_itu_pane_t1

0xda78,	// (0x00063da6) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x000660e4) cell_cmode_itu_pane_t

0xd1be,	// (0x000634ec) aid_touch_ctrl_left

0xd1c6,	// (0x000634f4) aid_touch_ctrl_right

0xdfdc,	// (0x0006430a) compa_mode_pane

0xda86,	// (0x00063db4) aid_cmod_rocker_key_size_cp

0xda90,	// (0x00063dbe) aid_cmode_itu_key_size_cp

0xda9a,	// (0x00063dc8) compa_mode_pane_g1

0xdaa2,	// (0x00063dd0) compa_mode_pane_g2

0xdaaa,	// (0x00063dd8) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x000660e9) compa_mode_pane_g

0xdab2,	// (0x00063de0) main_comp_mode_itu_pane_cp

0xdaba,	// (0x00063de8) main_comp_mode_rocker_pane_cp

0xdac2,	// (0x00063df0) cell_cmode_itu_pane_cp_ParamLimits

0xdac2,	// (0x00063df0) cell_cmode_itu_pane_cp

0xdad7,	// (0x00063e05) cell_cmode_rocker_pane_cp_ParamLimits

0xdad7,	// (0x00063e05) cell_cmode_rocker_pane_cp

0xf0f4,	// (0x00065422) bg_button_pane_cp06_cp_ParamLimits

0xf0f4,	// (0x00065422) bg_button_pane_cp06_cp

0xba53,	// (0x00061d81) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba53,	// (0x00061d81) cell_cmode_rocker_pane_g1_cp

0xb7e3,	// (0x00061b11) cell_cmode_rocker_pane_g2_cp

0xdfdc,	// (0x0006430a) bg_button_pane_cp07_cp

0xdae9,	// (0x00063e17) cell_cmode_itu_pane_g1_cp

0xdaf2,	// (0x00063e20) cell_cmode_itu_pane_t1_cp

0xdaf2,	// (0x00063e20) cell_cmode_itu_pane_t2_cp

0xa536,	// (0x00060864) settings_code_pane_cp2

0xe03e,	// (0x0006436c) bg_popup_window_pane_cp3_ParamLimits

0xe28f,	// (0x000645bd) heading_pane_cp3_ParamLimits

0xe29e,	// (0x000645cc) listscroll_popup_graphic_pane_ParamLimits

0x7c52,	// (0x0005df80) fep_hwr_aid_pane_ParamLimits

0x81d2,	// (0x0005e500) aid_touch_sctrl_top_ParamLimits

0x81ed,	// (0x0005e51b) sctrl_sk_top_pane_g1_ParamLimits

0x7ea9,	// (0x0005e1d7) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x0006601f) sctrl_sk_top_pane_g_ParamLimits

0x81fa,	// (0x0005e528) sctrl_sk_top_pane_t1_ParamLimits

0x81d2,	// (0x0005e500) aid_touch_sctrl_bottom_ParamLimits

0x81fa,	// (0x0005e528) sctrl_sk_bottom_pane_t1_ParamLimits

0xd107,	// (0x00063435) aid_area_touch_clock

0x83e3,	// (0x0005e711) aid_vkb2_area_top_pane_cell_ParamLimits

0x83e3,	// (0x0005e711) aid_vkb2_area_top_pane_cell

0x852e,	// (0x0005e85c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x852e,	// (0x0005e85c) aid_vkb2_area_bottom_pane_cell

0xd676,	// (0x000639a4) popup_char_count_window

0xdb00,	// (0x00063e2e) popup_char_count_window_g1

0xdb09,	// (0x00063e37) popup_char_count_window_g2

0xdb12,	// (0x00063e40) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x000660f0) popup_char_count_window_g

0xdb1b,	// (0x00063e49) popup_char_count_window_t1

0x82a9,	// (0x0005e5d7) popup_fep_char_preview_window_ParamLimits

0x82a9,	// (0x0005e5d7) popup_fep_char_preview_window

0x8401,	// (0x0005e72f) vkb2_top_candi_pane_ParamLimits

0x8401,	// (0x0005e72f) vkb2_top_candi_pane

0xdb29,	// (0x00063e57) cell_vkb2_top_candi_pane_ParamLimits

0xdb29,	// (0x00063e57) cell_vkb2_top_candi_pane

0x8811,	// (0x0005eb3f) bg_popup_fep_char_preview_window_ParamLimits

0x8811,	// (0x0005eb3f) bg_popup_fep_char_preview_window

0x881f,	// (0x0005eb4d) popup_fep_char_preview_window_t1_ParamLimits

0x881f,	// (0x0005eb4d) popup_fep_char_preview_window_t1

0xdb76,	// (0x00063ea4) bg_popup_fep_char_preview_window_g1

0xdb7e,	// (0x00063eac) bg_popup_fep_char_preview_window_g2

0xdb86,	// (0x00063eb4) bg_popup_fep_char_preview_window_g3

0xdb8e,	// (0x00063ebc) bg_popup_fep_char_preview_window_g4

0xdb96,	// (0x00063ec4) bg_popup_fep_char_preview_window_g5

0xdb9e,	// (0x00063ecc) bg_popup_fep_char_preview_window_g6

0xdba6,	// (0x00063ed4) bg_popup_fep_char_preview_window_g7

0xdbae,	// (0x00063edc) bg_popup_fep_char_preview_window_g8

0xdbb6,	// (0x00063ee4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc9,	// (0x000660f7) bg_popup_fep_char_preview_window_g

0x7ea9,	// (0x0005e1d7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ea9,	// (0x0005e1d7) cell_vkb2_top_candi_pane_g1

0x7eb7,	// (0x0005e1e5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7eb7,	// (0x0005e1e5) cell_vkb2_top_candi_pane_g2

0xbd6a,	// (0x00062098) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbd6a,	// (0x00062098) cell_vkb2_top_candi_pane_g3

0x8861,	// (0x0005eb8f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8861,	// (0x0005eb8f) cell_vkb2_top_candi_pane_g4

0xbf68,	// (0x00062296) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf68,	// (0x00062296) cell_vkb2_top_candi_pane_g5

0x8882,	// (0x0005ebb0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8882,	// (0x0005ebb0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0006610c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0006610c) cell_vkb2_top_candi_pane_g

0x8890,	// (0x0005ebbe) cell_vkb2_top_candi_pane_t1

0x7973,	// (0x0005dca1) aid_size_touch_slider_mark_ParamLimits

0x7973,	// (0x0005dca1) aid_size_touch_slider_mark

0xd7b9,	// (0x00063ae7) grid_graphic2_catg_pane_ParamLimits

0xd7b9,	// (0x00063ae7) grid_graphic2_catg_pane

0xd857,	// (0x00063b85) popup_grid_graphic2_window_t1_ParamLimits

0xd857,	// (0x00063b85) popup_grid_graphic2_window_t1

0xd869,	// (0x00063b97) popup_grid_graphic2_window_t2_ParamLimits

0xd869,	// (0x00063b97) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x000660c5) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x000660c5) popup_grid_graphic2_window_t

0xe176,	// (0x000644a4) bg_button_pane_cp05_ParamLimits

0xd9dc,	// (0x00063d0a) cell_graphic2_control_pane_g1_ParamLimits

0xdbbe,	// (0x00063eec) cell_graphic2_catg_pane_ParamLimits

0xdbbe,	// (0x00063eec) cell_graphic2_catg_pane

0xdfdc,	// (0x0006430a) bg_button_pane_cp12

0xdbd0,	// (0x00063efe) cell_graphic2_catg_pane_g1

0xd0d2,	// (0x00063400) cell_tb_ext_pane_t1_ParamLimits

0x864b,	// (0x0005e979) vkb2_top_cell_right_narrow_pane_ParamLimits

0x864b,	// (0x0005e979) vkb2_top_cell_right_narrow_pane

0x8663,	// (0x0005e991) vkb2_top_cell_right_wide_pane_ParamLimits

0x8663,	// (0x0005e991) vkb2_top_cell_right_wide_pane

0x7c44,	// (0x0005df72) bg_vkb2_func_pane_ParamLimits

0x7c44,	// (0x0005df72) bg_vkb2_func_pane

0x86d4,	// (0x0005ea02) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp03

0x8732,	// (0x0005ea60) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9015,	// (0x0005f343) bg_vkb2_func_pane_g1

0x901d,	// (0x0005f34b) bg_vkb2_func_pane_g2

0x902d,	// (0x0005f35b) bg_vkb2_func_pane_g3

0x9025,	// (0x0005f353) bg_vkb2_func_pane_g4

0x9035,	// (0x0005f363) bg_vkb2_func_pane_g5

0x903d,	// (0x0005f36b) bg_vkb2_func_pane_g6

0x9045,	// (0x0005f373) bg_vkb2_func_pane_g7

0x904d,	// (0x0005f37b) bg_vkb2_func_pane_g8

0x900d,	// (0x0005f33b) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x00066119) bg_vkb2_func_pane_g

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp01

0x86d4,	// (0x0005ea02) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x86d4,	// (0x0005ea02) vkb2_top_cell_right_wide_pane_g1

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c44,	// (0x0005df72) bg_vkb2_fuc_pane_cp02

0x8732,	// (0x0005ea60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8732,	// (0x0005ea60) vkb2_top_cell_right_narrow_pane_g1

0xccf4,	// (0x00063022) aid_touch_area_decrease_ParamLimits

0xccf4,	// (0x00063022) aid_touch_area_decrease

0xcd18,	// (0x00063046) aid_touch_area_increase_ParamLimits

0xcd18,	// (0x00063046) aid_touch_area_increase

0xcd30,	// (0x0006305e) aid_touch_area_mute_ParamLimits

0xcd30,	// (0x0006305e) aid_touch_area_mute

0xcd4c,	// (0x0006307a) aid_touch_area_slider_ParamLimits

0xcd4c,	// (0x0006307a) aid_touch_area_slider

0xce36,	// (0x00063164) popup_slider_window_g4_ParamLimits

0xce36,	// (0x00063164) popup_slider_window_g4

0xce4e,	// (0x0006317c) popup_slider_window_g5_ParamLimits

0xce4e,	// (0x0006317c) popup_slider_window_g5

0xce70,	// (0x0006319e) popup_slider_window_g6_ParamLimits

0xce70,	// (0x0006319e) popup_slider_window_g6

0xceae,	// (0x000631dc) popup_slider_window_t2_ParamLimits

0xceae,	// (0x000631dc) popup_slider_window_t2

0x0001,

0xfce5,	// (0x00066013) popup_slider_window_t_ParamLimits

0xfce5,	// (0x00066013) popup_slider_window_t

0xcec6,	// (0x000631f4) slider_pane_ParamLimits

0xcec6,	// (0x000631f4) slider_pane

0xdbd9,	// (0x00063f07) slider_pane_g1_ParamLimits

0xdbd9,	// (0x00063f07) slider_pane_g1

0xdbed,	// (0x00063f1b) slider_pane_g2_ParamLimits

0xdbed,	// (0x00063f1b) slider_pane_g2

0xdc03,	// (0x00063f31) slider_pane_g3_ParamLimits

0xdc03,	// (0x00063f31) slider_pane_g3

0x0003,

0xfdfe,	// (0x0006612c) slider_pane_g_ParamLimits

0xfdfe,	// (0x0006612c) slider_pane_g

0x7297,	// (0x0005d5c5) popup_tb_float_extension_window_ParamLimits

0x7297,	// (0x0005d5c5) popup_tb_float_extension_window

0xdc2f,	// (0x00063f5d) aid_size_cell_tb_float_ext

0xdfdc,	// (0x0006430a) bg_popup_sub_window_cp28

0xdc3b,	// (0x00063f69) grid_tb_float_ext_pane

0xdc45,	// (0x00063f73) cell_tb_float_ext_pane_ParamLimits

0xdc45,	// (0x00063f73) cell_tb_float_ext_pane

0xdc5f,	// (0x00063f8d) cell_tb_float_ext_pane_g1

0xdc68,	// (0x00063f96) grid_highlight_pane_cp12

0x7d93,	// (0x0005e0c1) cell_last_hwr_side_pane_ParamLimits

0x7d93,	// (0x0005e0c1) cell_last_hwr_side_pane

0xb7e3,	// (0x00061b11) cell_last_hwr_side_pane_g1

0xdc71,	// (0x00063f9f) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x00066135) cell_last_hwr_side_pane_g

0x85fa,	// (0x0005e928) vkb2_area_bottom_space_btn_pane_ParamLimits

0x85fa,	// (0x0005e928) vkb2_area_bottom_space_btn_pane

0x7ea9,	// (0x0005e1d7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd72b,	// (0x00063a59) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8890,	// (0x0005ebbe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x88af,	// (0x0005ebdd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x88af,	// (0x0005ebdd) vkb2_area_bottom_space_btn_pane_g1

0x88e9,	// (0x0005ec17) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x88e9,	// (0x0005ec17) vkb2_area_bottom_space_btn_pane_g2

0x891f,	// (0x0005ec4d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x891f,	// (0x0005ec4d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0006613a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0006613a) vkb2_area_bottom_space_btn_pane_g

0x7d07,	// (0x0005e035) cel_fep_hwr_func_pane_ParamLimits

0x7d07,	// (0x0005e035) cel_fep_hwr_func_pane

0x7d43,	// (0x0005e071) cell_hwr_side_button_pane_ParamLimits

0x7d43,	// (0x0005e071) cell_hwr_side_button_pane

0xd107,	// (0x00063435) aid_area_touch_clock_ParamLimits

0xe176,	// (0x000644a4) bg_uniindi_top_pane_ParamLimits

0xd119,	// (0x00063447) uniindi_top_pane_g1_ParamLimits

0xd12f,	// (0x0006345d) uniindi_top_pane_g2_ParamLimits

0xd13b,	// (0x00063469) uniindi_top_pane_g3_ParamLimits

0xd14c,	// (0x0006347a) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x0006604b) uniindi_top_pane_g_ParamLimits

0xd159,	// (0x00063487) uniindi_top_pane_t1_ParamLimits

0xe176,	// (0x000644a4) bg_vkb2_func_pane_cp01_ParamLimits

0xe176,	// (0x000644a4) bg_vkb2_func_pane_cp01

0xdc7a,	// (0x00063fa8) cel_fep_hwr_func_pane_g1_ParamLimits

0xdc7a,	// (0x00063fa8) cel_fep_hwr_func_pane_g1

0xe176,	// (0x000644a4) bg_vkb2_func_pane_cp02_ParamLimits

0xe176,	// (0x000644a4) bg_vkb2_func_pane_cp02

0xdc7a,	// (0x00063fa8) cell_hwr_side_button_pane_g1_ParamLimits

0xdc7a,	// (0x00063fa8) cell_hwr_side_button_pane_g1

0x8e91,	// (0x0005f1bf) status_pane_g4_ParamLimits

0x8e91,	// (0x0005f1bf) status_pane_g4

0x8eab,	// (0x0005f1d9) status_pane_t1

0xb449,	// (0x00061777) form2_midp_gauge_slider_cont_pane

0xb451,	// (0x0006177f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb463,	// (0x00061791) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb475,	// (0x000617a3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x00065e12) form2_midp_gauge_slider_pane_t_ParamLimits

0xb487,	// (0x000617b5) form2_midp_slider_pane_ParamLimits

0x8269,	// (0x0005e597) aid_size_cell_func_vkb2_ParamLimits

0x8269,	// (0x0005e597) aid_size_cell_func_vkb2

0xdc1b,	// (0x00063f49) slider_pane_g4_ParamLimits

0xdc1b,	// (0x00063f49) slider_pane_g4

0x8969,	// (0x0005ec97) form2_midp_gauge_slider_pane_t2_cp01

0x8977,	// (0x0005eca5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8977,	// (0x0005eca5) form2_midp_gauge_slider_pane_t3_cp01

0x8994,	// (0x0005ecc2) form2_midp_slider_pane_cp01

0xdfdc,	// (0x0006430a) navi_smil_pane

0xdcb3,	// (0x00063fe1) navi_smil_pane_g1

0xdcbb,	// (0x00063fe9) navi_smil_pane_t1

0xdc88,	// (0x00063fb6) form2_midp_slider_pane_g1

0xdc91,	// (0x00063fbf) form2_midp_slider_pane_g2

0xdc99,	// (0x00063fc7) form2_midp_slider_pane_g3

0xdc88,	// (0x00063fb6) form2_midp_slider_pane_g4

0xdca1,	// (0x00063fcf) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x00066143) form2_midp_slider_pane_g

0x8959,	// (0x0005ec87) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8959,	// (0x0005ec87) vkb2_area_bottom_space_btn_pane_g4

0x751e,	// (0x0005d84c) lc0_navi_pane_ParamLimits

0x751e,	// (0x0005d84c) lc0_navi_pane

0x7594,	// (0x0005d8c2) lc0_stat_indi_pane_ParamLimits

0x7594,	// (0x0005d8c2) lc0_stat_indi_pane

0x75ab,	// (0x0005d8d9) ls0_title_pane_ParamLimits

0x75ab,	// (0x0005d8d9) ls0_title_pane

0xf0f4,	// (0x00065422) bg_popup_sub_pane_cp14_ParamLimits

0xd0ee,	// (0x0006341c) list_uniindi_pane_ParamLimits

0xd0fa,	// (0x00063428) uniindi_top_pane_ParamLimits

0xd196,	// (0x000634c4) list_single_uniindi_pane_g1_ParamLimits

0xd1a9,	// (0x000634d7) list_single_uniindi_pane_t1_ParamLimits

0x899d,	// (0x0005eccb) lc0_stat_clock_pane_ParamLimits

0x899d,	// (0x0005eccb) lc0_stat_clock_pane

0xdcc9,	// (0x00063ff7) lc0_stat_indi_pane_g1_ParamLimits

0xdcc9,	// (0x00063ff7) lc0_stat_indi_pane_g1

0xdcd6,	// (0x00064004) lc0_stat_indi_pane_g2_ParamLimits

0xdcd6,	// (0x00064004) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0006614e) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0006614e) lc0_stat_indi_pane_g

0x89aa,	// (0x0005ecd8) lc0_uni_indicator_pane_ParamLimits

0x89aa,	// (0x0005ecd8) lc0_uni_indicator_pane

0xdce3,	// (0x00064011) ls0_title_pane_g1_ParamLimits

0xdce3,	// (0x00064011) ls0_title_pane_g1

0xdcf7,	// (0x00064025) ls0_title_pane_t1_ParamLimits

0xdcf7,	// (0x00064025) ls0_title_pane_t1

0x89b7,	// (0x0005ece5) lc0_uni_indicator_pane_g1_ParamLimits

0x89b7,	// (0x0005ece5) lc0_uni_indicator_pane_g1

0xdd2d,	// (0x0006405b) lc0_stat_clock_pane_t1

0x537a,	// (0x0005b6a8) main_ai5_pane

0xdd3b,	// (0x00064069) ai5_sk_pane_ParamLimits

0xdd3b,	// (0x00064069) ai5_sk_pane

0xdd48,	// (0x00064076) cell_ai5_widget_pane_ParamLimits

0xdd48,	// (0x00064076) cell_ai5_widget_pane

0xde11,	// (0x0006413f) aid_size_cell_widget_grid

0xde1f,	// (0x0006414d) bg_ai5_widget_pane_ParamLimits

0xde1f,	// (0x0006414d) bg_ai5_widget_pane

0xde9b,	// (0x000641c9) cell_ai5_widget_pane_g2

0xdeaf,	// (0x000641dd) cell_ai5_widget_pane_g3

0xdec9,	// (0x000641f7) cell_ai5_widget_pane_g4

0xded9,	// (0x00064207) cell_ai5_widget_pane_g5

0xdee9,	// (0x00064217) cell_ai5_widget_pane_g6

0xdef5,	// (0x00064223) cell_ai5_widget_pane_g7

0xdf61,	// (0x0006428f) cell_ai5_widget_pane_t1_ParamLimits

0xdf61,	// (0x0006428f) cell_ai5_widget_pane_t1

0xdf7e,	// (0x000642ac) cell_ai5_widget_pane_t2_ParamLimits

0xdf7e,	// (0x000642ac) cell_ai5_widget_pane_t2

0xdf96,	// (0x000642c4) cell_ai5_widget_pane_t3_ParamLimits

0xdf96,	// (0x000642c4) cell_ai5_widget_pane_t3

0xdfae,	// (0x000642dc) cell_ai5_widget_pane_t4_ParamLimits

0xdfae,	// (0x000642dc) cell_ai5_widget_pane_t4

0xe2b6,	// (0x000645e4) cell_ai5_widget_pane_t5_ParamLimits

0xe2b6,	// (0x000645e4) cell_ai5_widget_pane_t5

0xe2d5,	// (0x00064603) cell_ai5_widget_pane_t6_ParamLimits

0xe2d5,	// (0x00064603) cell_ai5_widget_pane_t6

0xe2e7,	// (0x00064615) cell_ai5_widget_pane_t7_ParamLimits

0xe2e7,	// (0x00064615) cell_ai5_widget_pane_t7

0xe306,	// (0x00064634) cell_ai5_widget_pane_t8_ParamLimits

0xe306,	// (0x00064634) cell_ai5_widget_pane_t8

0x000b,

0xfe40,	// (0x0006616e) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0006616e) cell_ai5_widget_pane_t

0xe38a,	// (0x000646b8) grid_ai5_widget_pane

0xf0f4,	// (0x00065422) highlight_cell_ai5_widget_pane_ParamLimits

0xf0f4,	// (0x00065422) highlight_cell_ai5_widget_pane

0xe398,	// (0x000646c6) ai5_sk_left_pane

0xe3a2,	// (0x000646d0) ai5_sk_middle_pane

0xe3ac,	// (0x000646da) ai5_sk_right_pane

0xe3b6,	// (0x000646e4) bg_ai5_widget_pane_g1_ParamLimits

0xe3b6,	// (0x000646e4) bg_ai5_widget_pane_g1

0xe3c2,	// (0x000646f0) bg_ai5_widget_pane_g2_ParamLimits

0xe3c2,	// (0x000646f0) bg_ai5_widget_pane_g2

0xe3ce,	// (0x000646fc) bg_ai5_widget_pane_g3_ParamLimits

0xe3ce,	// (0x000646fc) bg_ai5_widget_pane_g3

0xe3da,	// (0x00064708) bg_ai5_widget_pane_g4_ParamLimits

0xe3da,	// (0x00064708) bg_ai5_widget_pane_g4

0xe3e6,	// (0x00064714) bg_ai5_widget_pane_g5_ParamLimits

0xe3e6,	// (0x00064714) bg_ai5_widget_pane_g5

0xe3f2,	// (0x00064720) bg_ai5_widget_pane_g6_ParamLimits

0xe3f2,	// (0x00064720) bg_ai5_widget_pane_g6

0xe3fe,	// (0x0006472c) bg_ai5_widget_pane_g7_ParamLimits

0xe3fe,	// (0x0006472c) bg_ai5_widget_pane_g7

0xe40a,	// (0x00064738) bg_ai5_widget_pane_g8_ParamLimits

0xe40a,	// (0x00064738) bg_ai5_widget_pane_g8

0xe416,	// (0x00064744) bg_ai5_widget_pane_g9_ParamLimits

0xe416,	// (0x00064744) bg_ai5_widget_pane_g9

0x0008,

0xfe59,	// (0x00066187) bg_ai5_widget_pane_g_ParamLimits

0xfe59,	// (0x00066187) bg_ai5_widget_pane_g

0xe448,	// (0x00064776) cell_shortcut_ai5_widget_pane_ParamLimits

0xe448,	// (0x00064776) cell_shortcut_ai5_widget_pane

0x1647,	// (0x00057975) bg_cell_shortcut_ai5_widget_pane

0xe459,	// (0x00064787) cell_grid_ai5_widget_pane_g1

0x1647,	// (0x00057975) highlight_cell_shortcut_ai5_widget_pane

0x9015,	// (0x0005f343) ai5_sk_left_pane_g1

0xe462,	// (0x00064790) ai5_sk_left_pane_g2

0xe46a,	// (0x00064798) ai5_sk_left_pane_g3

0xe472,	// (0x000647a0) ai5_sk_left_pane_g4

0x0003,

0xfe6c,	// (0x0006619a) ai5_sk_left_pane_g

0xe47a,	// (0x000647a8) ai5_sk_left_pane_t1

0x901d,	// (0x0005f34b) ai5_sk_right_pane_g1

0xe488,	// (0x000647b6) ai5_sk_right_pane_g2

0xe490,	// (0x000647be) ai5_sk_right_pane_g3

0xe498,	// (0x000647c6) ai5_sk_right_pane_g4

0x0003,

0xfe75,	// (0x000661a3) ai5_sk_right_pane_g

0xe4a0,	// (0x000647ce) ai5_sk_right_pane_t1

0x901d,	// (0x0005f34b) ai5_sk_middle_pane_g1

0x9015,	// (0x0005f343) ai5_sk_middle_pane_g2

0x9035,	// (0x0005f363) ai5_sk_middle_pane_g3

0xe490,	// (0x000647be) ai5_sk_middle_pane_g4

0xe46a,	// (0x00064798) ai5_sk_middle_pane_g5

0xe4ae,	// (0x000647dc) ai5_sk_middle_pane_g6

0xe4b6,	// (0x000647e4) ai5_sk_middle_pane_g7

0x0006,

0xfe7e,	// (0x000661ac) ai5_sk_middle_pane_g

0x73a4,	// (0x0005d6d2) aid_touch_area_size_lc0_ParamLimits

0x73a4,	// (0x0005d6d2) aid_touch_area_size_lc0

0x7ed8,	// (0x0005e206) cell_hwr_candidate_pane_t1_ParamLimits

0x73c0,	// (0x0005d6ee) aid_touch_navi_pane

0x8e3b,	// (0x0005f169) status_dt_navi_pane_ParamLimits

0x8e3b,	// (0x0005f169) status_dt_navi_pane

0x8e48,	// (0x0005f176) status_dt_sta_pane_ParamLimits

0x8e48,	// (0x0005f176) status_dt_sta_pane

0xe4be,	// (0x000647ec) dt_sta_controll_pane

0xe4cb,	// (0x000647f9) dt_sta_indi_pane

0xe4dc,	// (0x0006480a) dt_sta_title_pane

0xe176,	// (0x000644a4) bg_dt_sta_indi_pane_ParamLimits

0xe176,	// (0x000644a4) bg_dt_sta_indi_pane

0xe4ef,	// (0x0006481d) dt_sta_battery_pane

0xe4f7,	// (0x00064825) dt_sta_indi_pane_g1

0xe500,	// (0x0006482e) dt_sta_indi_pane_g2

0xe509,	// (0x00064837) dt_sta_indi_pane_g3

0x0002,

0xfe8d,	// (0x000661bb) dt_sta_indi_pane_g

0xe512,	// (0x00064840) dt_sta_signal_pane

0xf0f4,	// (0x00065422) bg_dt_sta_title_pane_ParamLimits

0xf0f4,	// (0x00065422) bg_dt_sta_title_pane

0x9e6f,	// (0x0006019d) dt_sta_title_pane_g1

0xe51b,	// (0x00064849) dt_sta_title_pane_t1_ParamLimits

0xe51b,	// (0x00064849) dt_sta_title_pane_t1

0xdfdc,	// (0x0006430a) bg_dt_sta_control_pane

0xe530,	// (0x0006485e) dt_sta_controll_pane_g1

0xe539,	// (0x00064867) bg_dt_sta_title_pane_g1

0xe542,	// (0x00064870) bg_dt_sta_title_pane_g2

0xe54b,	// (0x00064879) bg_dt_sta_title_pane_g3

0x0002,

0xfe94,	// (0x000661c2) bg_dt_sta_title_pane_g

0xb7e3,	// (0x00061b11) bg_dt_sta_indi_pane_g1

0xe554,	// (0x00064882) dt_sta_signal_pane_g1

0xe55c,	// (0x0006488a) dt_sta_signal_pane_g2

0x0001,

0xfe9b,	// (0x000661c9) dt_sta_signal_pane_g

0xe564,	// (0x00064892) dt_sta_battery_pane_g1

0xe56d,	// (0x0006489b) dt_sta_battery_pane_t1

0xb7e3,	// (0x00061b11) bg_dt_sta_control_pane_g1

0x128d,	// (0x000575bb) fep_china_uni_eep_pane

0x1295,	// (0x000575c3) fep_china_uni_entry_pane_ParamLimits

0x12a5,	// (0x000575d3) popup_fep_china_uni_window_g1_ParamLimits

0x12b5,	// (0x000575e3) popup_fep_china_uni_window_g2_ParamLimits

0x12b5,	// (0x000575e3) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00065a21) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00065a21) popup_fep_china_uni_window_g

0xe57c,	// (0x000648aa) fep_china_uni_eep_pane_g1

0xe584,	// (0x000648b2) fep_china_uni_eep_pane_t1

0xdcaa,	// (0x00063fd8) aid_touch_area_size_smil_player

0x7516,	// (0x0005d844) lc0_clock_pane

0x8e9f,	// (0x0005f1cd) status_pane_g5_ParamLimits

0x8e9f,	// (0x0005f1cd) status_pane_g5

0x6f58,	// (0x0005d286) popup_keymap_window

0x8e5d,	// (0x0005f18b) status_icon_pane

0xdeaf,	// (0x000641dd) cell_ai5_widget_pane_g3_ParamLimits

0xdec9,	// (0x000641f7) cell_ai5_widget_pane_g4_ParamLimits

0xded9,	// (0x00064207) cell_ai5_widget_pane_g5_ParamLimits

0xdf01,	// (0x0006422f) cell_ai5_widget_pane_g8_ParamLimits

0xdf01,	// (0x0006422f) cell_ai5_widget_pane_g8

0xdf15,	// (0x00064243) cell_ai5_widget_pane_g9_ParamLimits

0xdf15,	// (0x00064243) cell_ai5_widget_pane_g9

0xdf29,	// (0x00064257) cell_ai5_widget_pane_g10_ParamLimits

0xdf29,	// (0x00064257) cell_ai5_widget_pane_g10

0xe593,	// (0x000648c1) status_icon_pane_g1

0xdfdc,	// (0x0006430a) bg_popup_sub_pane_cp13

0xe59b,	// (0x000648c9) popup_keymap_window_t1

0x6c87,	// (0x0005cfb5) control_pane_g6_ParamLimits

0x6c87,	// (0x0005cfb5) control_pane_g6

0x6c94,	// (0x0005cfc2) control_pane_g7_ParamLimits

0x6c94,	// (0x0005cfc2) control_pane_g7

0x6ca1,	// (0x0005cfcf) control_pane_g8_ParamLimits

0x6ca1,	// (0x0005cfcf) control_pane_g8

0xe4be,	// (0x000647ec) dt_sta_controll_pane_ParamLimits

0xe4cb,	// (0x000647f9) dt_sta_indi_pane_ParamLimits

0xe4dc,	// (0x0006480a) dt_sta_title_pane_ParamLimits

0xf03f,	// (0x0006536d) aid_size_touch_scroll_bar_cale

0x5453,	// (0x0005b781) popup_discreet_window_ParamLimits

0x5453,	// (0x0005b781) popup_discreet_window

0x54cd,	// (0x0005b7fb) popup_sk_window

0x96b3,	// (0x0005f9e1) bg_popup_sub_pane_cp28_ParamLimits

0x96b3,	// (0x0005f9e1) bg_popup_sub_pane_cp28

0xe5a9,	// (0x000648d7) popup_discreet_window_g1_ParamLimits

0xe5a9,	// (0x000648d7) popup_discreet_window_g1

0xe5c9,	// (0x000648f7) popup_discreet_window_t1_ParamLimits

0xe5c9,	// (0x000648f7) popup_discreet_window_t1

0xe5e7,	// (0x00064915) popup_discreet_window_t2_ParamLimits

0xe5e7,	// (0x00064915) popup_discreet_window_t2

0x0002,

0xfea0,	// (0x000661ce) popup_discreet_window_t_ParamLimits

0xfea0,	// (0x000661ce) popup_discreet_window_t

0x89cb,	// (0x0005ecf9) popup_sk_window_g1

0x89d5,	// (0x0005ed03) popup_sk_window_g2

0x0001,

0xfea7,	// (0x000661d5) popup_sk_window_g

0x89dd,	// (0x0005ed0b) popup_sk_window_t1

0x89eb,	// (0x0005ed19) popup_sk_window_t1_copy1

0xde9b,	// (0x000641c9) cell_ai5_widget_pane_g2_ParamLimits

0xe318,	// (0x00064646) cell_ai5_widget_pane_t9_ParamLimits

0xe318,	// (0x00064646) cell_ai5_widget_pane_t9

0xdfdc,	// (0x0006430a) main_fep_fshwr2_pane

0x89f9,	// (0x0005ed27) aid_fshwr2_btn_pane

0x8a0b,	// (0x0005ed39) aid_fshwr2_syb_pane

0x8a1d,	// (0x0005ed4b) aid_fshwr2_txt_pane

0x8a29,	// (0x0005ed57) fshwr2_func_candi_pane

0x8a45,	// (0x0005ed73) fshwr2_hwr_syb_pane

0x8a5f,	// (0x0005ed8d) fshwr2_icf_pane

0x537a,	// (0x0005b6a8) fshwr2_icf_bg_pane

0x8a8d,	// (0x0005edbb) fshwr2_icf_pane_t1_ParamLimits

0x8a8d,	// (0x0005edbb) fshwr2_icf_pane_t1

0x120a,	// (0x00057538) fshwr2_func_candi_pane_g1

0xe639,	// (0x00064967) fshwr2_func_candi_row_pane_ParamLimits

0xe639,	// (0x00064967) fshwr2_func_candi_row_pane

0x8aa6,	// (0x0005edd4) cell_fshwr2_syb_pane_ParamLimits

0x8aa6,	// (0x0005edd4) cell_fshwr2_syb_pane

0x8ac9,	// (0x0005edf7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8ac9,	// (0x0005edf7) fshwr2_hwr_syb_pane_g1

0x537a,	// (0x0005b6a8) bg_popup_call_pane_cp01

0x8ad7,	// (0x0005ee05) fshwr2_func_candi_cell_pane_ParamLimits

0x8ad7,	// (0x0005ee05) fshwr2_func_candi_cell_pane

0x9d0f,	// (0x0006003d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d0f,	// (0x0006003d) fshwr2_func_candi_cell_bg_pane

0x8b22,	// (0x0005ee50) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8b22,	// (0x0005ee50) fshwr2_func_candi_cell_pane_g1

0x8b42,	// (0x0005ee70) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8b42,	// (0x0005ee70) fshwr2_func_candi_cell_pane_t1

0x537a,	// (0x0005b6a8) bg_button_pane_cp08

0xf51d,	// (0x0006584b) cell_fshwr2_syb_bg_pane

0x8b55,	// (0x0005ee83) cell_fshwr2_syb_bg_pane_g1

0x8b69,	// (0x0005ee97) cell_fshwr2_syb_bg_pane_t1

0xf0f4,	// (0x00065422) main_tmo_pane

0xa1a8,	// (0x000604d6) uni_indicator_pane_g1_ParamLimits

0xa1bb,	// (0x000604e9) uni_indicator_pane_g2_ParamLimits

0xa1cd,	// (0x000604fb) uni_indicator_pane_g3_ParamLimits

0xa1dc,	// (0x0006050a) uni_indicator_pane_g4_ParamLimits

0xa1dc,	// (0x0006050a) uni_indicator_pane_g4

0xa1f0,	// (0x0006051e) uni_indicator_pane_g5_ParamLimits

0xa1f0,	// (0x0006051e) uni_indicator_pane_g5

0xa1f0,	// (0x0006051e) uni_indicator_pane_g6_ParamLimits

0xa1f0,	// (0x0006051e) uni_indicator_pane_g6

0xf8f7,	// (0x00065c25) uni_indicator_pane_g_ParamLimits

0xccd6,	// (0x00063004) popup_tmo_note_window_ParamLimits

0xccd6,	// (0x00063004) popup_tmo_note_window

0x824b,	// (0x0005e579) fshwr2_bg_pane

0x8b33,	// (0x0005ee61) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8b33,	// (0x0005ee61) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeac,	// (0x000661da) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeac,	// (0x000661da) fshwr2_func_candi_cell_pane_g

0x7e91,	// (0x0005e1bf) bg_popup_window_pane_cp01

0x8b7f,	// (0x0005eead) bg_popup_window_pane_g1_cp01

0xe660,	// (0x0006498e) bg_popup_window_pane_cp22_ParamLimits

0xe660,	// (0x0006498e) bg_popup_window_pane_cp22

0xe66e,	// (0x0006499c) listscroll_tmo_link_pane_ParamLimits

0xe66e,	// (0x0006499c) listscroll_tmo_link_pane

0xe6ae,	// (0x000649dc) popup_tmo_note_window_g1_ParamLimits

0xe6ae,	// (0x000649dc) popup_tmo_note_window_g1

0xe6bb,	// (0x000649e9) tmo_note_info_pane_ParamLimits

0xe6bb,	// (0x000649e9) tmo_note_info_pane

0xe6d5,	// (0x00064a03) list_tmo_note_info_pane_g1_ParamLimits

0xe6d5,	// (0x00064a03) list_tmo_note_info_pane_g1

0xe6ec,	// (0x00064a1a) list_tmo_note_info_pane_g2_ParamLimits

0xe6ec,	// (0x00064a1a) list_tmo_note_info_pane_g2

0x0001,

0xfeb1,	// (0x000661df) list_tmo_note_info_pane_g_ParamLimits

0xfeb1,	// (0x000661df) list_tmo_note_info_pane_g

0xe708,	// (0x00064a36) list_tmo_note_info_text_pane_ParamLimits

0xe708,	// (0x00064a36) list_tmo_note_info_text_pane

0xe789,	// (0x00064ab7) list_tmo_link_pane

0xe796,	// (0x00064ac4) scroll_pane_cp20

0xe7a3,	// (0x00064ad1) list_single_tmo_link_pane_ParamLimits

0xe7a3,	// (0x00064ad1) list_single_tmo_link_pane

0xe7b3,	// (0x00064ae1) list_single_tmo_link_pane_t1

0xe7c1,	// (0x00064aef) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7c1,	// (0x00064aef) list_tmo_note_info_text_pane_t1

0x61b3,	// (0x0005c4e1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x61b3,	// (0x0005c4e1) aid_size_touch_scroll_bar_cp01

0x60c0,	// (0x0005c3ee) aid_size_touch_slider_marker

0x54b5,	// (0x0005b7e3) popup_settings_window_ParamLimits

0x54b5,	// (0x0005b7e3) popup_settings_window

0x3b9b,	// (0x00059ec9) popup_candi_list_indi_window

0x73c0,	// (0x0005d6ee) aid_touch_navi_pane_ParamLimits

0x81a6,	// (0x0005e4d4) rs_clock_indi_pane

0x81af,	// (0x0005e4dd) sctrl_sk_bottom_pane_ParamLimits

0x81c0,	// (0x0005e4ee) sctrl_sk_top_pane_ParamLimits

0x82c3,	// (0x0005e5f1) popup_fep_tooltip_window

0xde11,	// (0x0006413f) aid_size_cell_widget_grid_ParamLimits

0xde86,	// (0x000641b4) cell_ai5_widget_pane_g1_ParamLimits

0xde86,	// (0x000641b4) cell_ai5_widget_pane_g1

0xdee9,	// (0x00064217) cell_ai5_widget_pane_g6_ParamLimits

0xdef5,	// (0x00064223) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe25,	// (0x00066153) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x00066153) cell_ai5_widget_pane_g

0xe347,	// (0x00064675) cell_ai5_widget_pane_t10_ParamLimits

0xe347,	// (0x00064675) cell_ai5_widget_pane_t10

0xe38a,	// (0x000646b8) grid_ai5_widget_pane_ParamLimits

0xe422,	// (0x00064750) cell_contacts_ai5_widget_pane_ParamLimits

0xe422,	// (0x00064750) cell_contacts_ai5_widget_pane

0xe5fc,	// (0x0006492a) popup_discreet_window_t3_ParamLimits

0xe5fc,	// (0x0006492a) popup_discreet_window_t3

0x8a77,	// (0x0005eda5) popup_fshwr2_char_preview_window_ParamLimits

0x8a77,	// (0x0005eda5) popup_fshwr2_char_preview_window

0xe726,	// (0x00064a54) tmo_note_info_pane_t1

0xe73b,	// (0x00064a69) tmo_note_info_pane_t2

0xe750,	// (0x00064a7e) tmo_note_info_pane_t3

0xe765,	// (0x00064a93) tmo_note_info_pane_t4

0xe777,	// (0x00064aa5) tmo_note_info_pane_t5

0x0004,

0xfeb6,	// (0x000661e4) tmo_note_info_pane_t

0xe789,	// (0x00064ab7) list_tmo_link_pane_ParamLimits

0xe796,	// (0x00064ac4) scroll_pane_cp20_ParamLimits

0x537a,	// (0x0005b6a8) bg_popup_fep_char_preview_window_cp01

0xe7da,	// (0x00064b08) popup_fshwr2_char_preview_window_t1

0xe7e8,	// (0x00064b16) popup_candi_list_indi_window_g1

0xe7f1,	// (0x00064b1f) bg_cell_contacts_ai5_widget_pane

0xe7fd,	// (0x00064b2b) cell_contacts_ai5_widget_pane_g1

0xbebd,	// (0x000621eb) cell_contacts_ai5_widget_pane_g2

0xe812,	// (0x00064b40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec1,	// (0x000661ef) cell_contacts_ai5_widget_pane_g

0xe81e,	// (0x00064b4c) cell_contacts_ai5_widget_pane_t1

0xf0f4,	// (0x00065422) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe895,	// (0x00064bc3) settings_container_pane

0x1647,	// (0x00057975) listscroll_set_pane_copy1

0xad6a,	// (0x00061098) scroll_pane_cp121_copy1

0x9458,	// (0x0005f786) set_content_pane_copy1

0xe8a1,	// (0x00064bcf) aid_height_set_list_copy1_ParamLimits

0xe8a1,	// (0x00064bcf) aid_height_set_list_copy1

0xa3e8,	// (0x00060716) aid_size_parent_copy1_ParamLimits

0xa3e8,	// (0x00060716) aid_size_parent_copy1

0xe8ad,	// (0x00064bdb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8ad,	// (0x00064bdb) button_value_adjust_pane_cp6_copy1

0xf51d,	// (0x0006584b) list_highlight_pane_cp2_copy1_ParamLimits

0xf51d,	// (0x0006584b) list_highlight_pane_cp2_copy1

0xe8c1,	// (0x00064bef) list_set_pane_copy1_ParamLimits

0xe8c1,	// (0x00064bef) list_set_pane_copy1

0xe830,	// (0x00064b5e) main_pane_set_t1_copy1_ParamLimits

0xe830,	// (0x00064b5e) main_pane_set_t1_copy1

0xe86a,	// (0x00064b98) main_pane_set_t2_copy1_ParamLimits

0xe86a,	// (0x00064b98) main_pane_set_t2_copy1

0xe96e,	// (0x00064c9c) main_pane_set_t3_copy1

0xe97c,	// (0x00064caa) main_pane_set_t4_copy1

0xe889,	// (0x00064bb7) set_content_pane_g1_copy1_ParamLimits

0xe889,	// (0x00064bb7) set_content_pane_g1_copy1

0xe98a,	// (0x00064cb8) setting_code_pane_copy1

0xe992,	// (0x00064cc0) setting_slider_graphic_pane_copy1

0xe992,	// (0x00064cc0) setting_slider_pane_copy1

0xe99a,	// (0x00064cc8) setting_text_pane_copy1

0xe99a,	// (0x00064cc8) setting_volume_pane_copy1

0xe98a,	// (0x00064cb8) settings_code_pane_cp2_copy1

0xe9a2,	// (0x00064cd0) settings_code_pane_cp_copy1_ParamLimits

0xe9a2,	// (0x00064cd0) settings_code_pane_cp_copy1

0x8b88,	// (0x0005eeb6) volume_set_pane_copy1

0xe9b6,	// (0x00064ce4) volume_set_pane_g10_copy1

0xe9be,	// (0x00064cec) volume_set_pane_g1_copy1

0xe9c6,	// (0x00064cf4) volume_set_pane_g2_copy1

0xe9ce,	// (0x00064cfc) volume_set_pane_g3_copy1

0xe9d6,	// (0x00064d04) volume_set_pane_g4_copy1

0xe9de,	// (0x00064d0c) volume_set_pane_g5_copy1

0xe9e6,	// (0x00064d14) volume_set_pane_g6_copy1

0xe9ee,	// (0x00064d1c) volume_set_pane_g7_copy1

0xe9f6,	// (0x00064d24) volume_set_pane_g8_copy1

0xe9fe,	// (0x00064d2c) volume_set_pane_g9_copy1

0xe03e,	// (0x0006436c) bg_set_opt_pane_cp_copy1_ParamLimits

0xe03e,	// (0x0006436c) bg_set_opt_pane_cp_copy1

0x8b90,	// (0x0005eebe) setting_slider_pane_t1_copy1_ParamLimits

0x8b90,	// (0x0005eebe) setting_slider_pane_t1_copy1

0x8baf,	// (0x0005eedd) setting_slider_pane_t2_copy1_ParamLimits

0x8baf,	// (0x0005eedd) setting_slider_pane_t2_copy1

0x8bc9,	// (0x0005eef7) setting_slider_pane_t3_copy1_ParamLimits

0x8bc9,	// (0x0005eef7) setting_slider_pane_t3_copy1

0x8be1,	// (0x0005ef0f) slider_set_pane_copy1_ParamLimits

0x8be1,	// (0x0005ef0f) slider_set_pane_copy1

0xf14c,	// (0x0006547a) set_opt_bg_pane_g1_copy2

0xf154,	// (0x00065482) set_opt_bg_pane_g2_copy2

0xea06,	// (0x00064d34) set_opt_bg_pane_g3_copy2

0xf164,	// (0x00065492) set_opt_bg_pane_g4_copy2

0xf16c,	// (0x0006549a) set_opt_bg_pane_g5_copy2

0xf174,	// (0x000654a2) set_opt_bg_pane_g6_copy2

0xea10,	// (0x00064d3e) set_opt_bg_pane_g7_copy2

0xea18,	// (0x00064d46) set_opt_bg_pane_g8_copy2

0xea22,	// (0x00064d50) set_opt_bg_pane_g9_copy2

0x8bf7,	// (0x0005ef25) aid_size_touch_slider_mark_copy1_ParamLimits

0x8bf7,	// (0x0005ef25) aid_size_touch_slider_mark_copy1

0xea2c,	// (0x00064d5a) slider_set_pane_g1_copy1

0x8c0b,	// (0x0005ef39) slider_set_pane_g2_copy1

0x7993,	// (0x0005dcc1) slider_set_pane_g3_copy1_ParamLimits

0x7993,	// (0x0005dcc1) slider_set_pane_g3_copy1

0x79a7,	// (0x0005dcd5) slider_set_pane_g4_copy1_ParamLimits

0x79a7,	// (0x0005dcd5) slider_set_pane_g4_copy1

0x79bf,	// (0x0005dced) slider_set_pane_g5_copy1_ParamLimits

0x79bf,	// (0x0005dced) slider_set_pane_g5_copy1

0x7993,	// (0x0005dcc1) slider_set_pane_g6_copy1_ParamLimits

0x7993,	// (0x0005dcc1) slider_set_pane_g6_copy1

0x8c13,	// (0x0005ef41) slider_set_pane_g7_copy1_ParamLimits

0x8c13,	// (0x0005ef41) slider_set_pane_g7_copy1

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp2_copy1

0xea35,	// (0x00064d63) setting_slider_graphic_pane_g1_copy1

0xea3e,	// (0x00064d6c) setting_slider_graphic_pane_t1_copy1

0xea4e,	// (0x00064d7c) setting_slider_graphic_pane_t2_copy1

0xea5e,	// (0x00064d8c) slider_set_pane_cp_copy1

0xea6e,	// (0x00064d9c) input_focus_pane_cp1_copy1

0xea77,	// (0x00064da5) list_set_text_pane_copy1

0xea7f,	// (0x00064dad) setting_text_pane_g1_copy1

0x40f3,	// (0x0005a421) set_text_pane_t1_copy1

0xea6e,	// (0x00064d9c) input_focus_pane_cp2_copy1

0xea7f,	// (0x00064dad) setting_code_pane_g1_copy1

0xea88,	// (0x00064db6) setting_code_pane_t1_copy1

0xea96,	// (0x00064dc4) list_set_graphic_pane_copy1

0xdff0,	// (0x0006431e) bg_set_opt_pane_cp4_copy1

0x13e5,	// (0x00057713) list_set_graphic_pane_g1_copy1_ParamLimits

0x13e5,	// (0x00057713) list_set_graphic_pane_g1_copy1

0xeaaa,	// (0x00064dd8) list_set_graphic_pane_g2_copy1

0x13fd,	// (0x0005772b) list_set_graphic_pane_t1_copy1_ParamLimits

0x13fd,	// (0x0005772b) list_set_graphic_pane_t1_copy1

0xb7e3,	// (0x00061b11) rs_clock_indi_pane_g1

0xeab2,	// (0x00064de0) rs_clock_indi_pane_t1

0xeac0,	// (0x00064dee) rs_indi_pane

0xeac8,	// (0x00064df6) rs_indi_pane_g1

0xead1,	// (0x00064dff) rs_indi_pane_g2

0xe7e8,	// (0x00064b16) rs_indi_pane_g3

0x0002,

0xfec8,	// (0x000661f6) rs_indi_pane_g

0x1647,	// (0x00057975) bg_popup_preview_window_pane_cp03

0xeada,	// (0x00064e08) popup_fep_tooltip_window_t1

0xc485,	// (0x000627b3) popup_note2_window_g2_ParamLimits

0xc485,	// (0x000627b3) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x00065f8a) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x00065f8a) popup_note2_window_g

0xc972,	// (0x00062ca0) bg_popup_sub_pane_cp11_ParamLimits

0xc97f,	// (0x00062cad) cell_ai3_links_pane_g1_ParamLimits

0xc996,	// (0x00062cc4) cell_ai3_links_pane_t1

0x40f3,	// (0x0005a421) set_text_pane_t1_copy1_ParamLimits

0x699a,	// (0x0005ccc8) cell_graphic_popup_pane_cp2_ParamLimits

0x699a,	// (0x0005ccc8) cell_graphic_popup_pane_cp2

0xeae8,	// (0x00064e16) cell_graphic_popup_pane_g1_cp2

0xefc2,	// (0x000652f0) cell_graphic_popup_pane_g2_cp2

0xeaf0,	// (0x00064e1e) cell_graphic_popup_pane_g3_cp2

0xeaf8,	// (0x00064e26) cell_graphic_popup_pane_t2_cp2

0xefd3,	// (0x00065301) grid_highlight_pane_cp3_cp2

0xf3b7,	// (0x000656e5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf0f4,	// (0x00065422) main_tmo_pane_ParamLimits

0xccca,	// (0x00062ff8) popup_tmo_big_image_note_window

0xde75,	// (0x000641a3) cell_ai5_widget_list_pane

0xde7d,	// (0x000641ab) cell_ai5_widget_lrg_icon_pane

0xe726,	// (0x00064a54) tmo_note_info_pane_t1_ParamLimits

0xe73b,	// (0x00064a69) tmo_note_info_pane_t2_ParamLimits

0xe750,	// (0x00064a7e) tmo_note_info_pane_t3_ParamLimits

0xe765,	// (0x00064a93) tmo_note_info_pane_t4_ParamLimits

0xe777,	// (0x00064aa5) tmo_note_info_pane_t5_ParamLimits

0xfeb6,	// (0x000661e4) tmo_note_info_pane_t_ParamLimits

0xe895,	// (0x00064bc3) settings_container_pane_ParamLimits

0xea66,	// (0x00064d94) indicator_popup_pane_cp5

0xea66,	// (0x00064d94) indicator_popup_pane_cp6

0xea96,	// (0x00064dc4) list_set_graphic_pane_copy1_ParamLimits

0xdfdc,	// (0x0006430a) bg_popup_window_pane_cp23

0xeb06,	// (0x00064e34) popup_tmo_big_image_note_window_g1

0xeb0f,	// (0x00064e3d) popup_tmo_big_image_note_window_t1

0xeb1f,	// (0x00064e4d) popup_tmo_big_image_note_window_t2

0xeb2f,	// (0x00064e5d) popup_tmo_big_image_note_window_t3

0x0002,

0xfecf,	// (0x000661fd) popup_tmo_big_image_note_window_t

0xb7e3,	// (0x00061b11) cell_ai5_widget_lrg_icon_pane_g1

0xeb3f,	// (0x00064e6d) cell_ai5_widget_lrg_icon_pane_t1

0xeb4d,	// (0x00064e7b) cell_ai5_widget_list_row_pane_ParamLimits

0xeb4d,	// (0x00064e7b) cell_ai5_widget_list_row_pane

0xeb64,	// (0x00064e92) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb64,	// (0x00064e92) cell_ai5_widget_list_row_pane_g1

0xeb71,	// (0x00064e9f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb71,	// (0x00064e9f) cell_ai5_widget_list_row_pane_t1

0xeb9c,	// (0x00064eca) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb9c,	// (0x00064eca) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed6,	// (0x00066204) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed6,	// (0x00066204) cell_ai5_widget_list_row_pane_t

0x537a,	// (0x0005b6a8) main_fep_vtchi_ss_pane

0xebec,	// (0x00064f1a) popup_fep_char_pre_window

0xebf4,	// (0x00064f22) popup_fep_ituss_window

0xec20,	// (0x00064f4e) popup_fep_vkbss_window

0xf51d,	// (0x0006584b) grid_vkbss_keypad_pane_ParamLimits

0xf51d,	// (0x0006584b) grid_vkbss_keypad_pane

0xec60,	// (0x00064f8e) ituss_keypad_pane

0x8c35,	// (0x0005ef63) aid_vkbss_key_offset_ParamLimits

0x8c35,	// (0x0005ef63) aid_vkbss_key_offset

0x8c41,	// (0x0005ef6f) cell_vkbss_key_pane_ParamLimits

0x8c41,	// (0x0005ef6f) cell_vkbss_key_pane

0xec6f,	// (0x00064f9d) bg_cell_vkbss_key_g1_ParamLimits

0xec6f,	// (0x00064f9d) bg_cell_vkbss_key_g1

0xec7b,	// (0x00064fa9) cell_vkbss_key_3p_pane_ParamLimits

0xec7b,	// (0x00064fa9) cell_vkbss_key_3p_pane

0xecb1,	// (0x00064fdf) cell_vkbss_key_g1_ParamLimits

0xecb1,	// (0x00064fdf) cell_vkbss_key_g1

0xece7,	// (0x00065015) cell_vkbss_key_t1_ParamLimits

0xece7,	// (0x00065015) cell_vkbss_key_t1

0x8c75,	// (0x0005efa3) cell_ituss_key_pane_ParamLimits

0x8c75,	// (0x0005efa3) cell_ituss_key_pane

0xed43,	// (0x00065071) bg_cell_ituss_key_g1_ParamLimits

0xed43,	// (0x00065071) bg_cell_ituss_key_g1

0xed4f,	// (0x0006507d) cell_ituss_key_pane_g1_ParamLimits

0xed4f,	// (0x0006507d) cell_ituss_key_pane_g1

0x8c86,	// (0x0005efb4) cell_ituss_key_pane_g2_ParamLimits

0x8c86,	// (0x0005efb4) cell_ituss_key_pane_g2

0x0005,

0xfedd,	// (0x0006620b) cell_ituss_key_pane_g_ParamLimits

0xfedd,	// (0x0006620b) cell_ituss_key_pane_g

0x8d0a,	// (0x0005f038) cell_ituss_key_t1_ParamLimits

0x8d0a,	// (0x0005f038) cell_ituss_key_t1

0x8d44,	// (0x0005f072) cell_ituss_key_t2_ParamLimits

0x8d44,	// (0x0005f072) cell_ituss_key_t2

0x8d75,	// (0x0005f0a3) cell_ituss_key_t3_ParamLimits

0x8d75,	// (0x0005f0a3) cell_ituss_key_t3

0x8d44,	// (0x0005f072) cell_ituss_key_t4_ParamLimits

0x8d44,	// (0x0005f072) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x00066218) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00066218) cell_ituss_key_t

0xed75,	// (0x000650a3) cell_vkbss_key_3p_pane_g1

0xed7d,	// (0x000650ab) cell_vkbss_key_3p_pane_g2

0xed85,	// (0x000650b3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00066223) cell_vkbss_key_3p_pane_g

0x1647,	// (0x00057975) bg_popup_fep_char_preview_window_cp02

0xed8d,	// (0x000650bb) popup_fep_char_pre_window_t1

0xddfe,	// (0x0006412c) main_ai5_sk_pane

0xe7f1,	// (0x00064b1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe7fd,	// (0x00064b2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbebd,	// (0x000621eb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe812,	// (0x00064b40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec1,	// (0x000661ef) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe81e,	// (0x00064b4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf0f4,	// (0x00065422) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed9b,	// (0x000650c9) main_ai5_sk_pane_g1

0x94f4,	// (0x0005f822) popup_query_code_window_g1

0xec0a,	// (0x00064f38) popup_fep_vkb_icf_pane

0xec37,	// (0x00064f65) popup_fep_vtchi_icf_pane

0xf51d,	// (0x0006584b) bg_icf_pane

0xf51d,	// (0x0006584b) list_vkb_icf_pane

0xeda4,	// (0x000650d2) bg_icf_pane_cp01

0xedb7,	// (0x000650e5) vtchi_icf_list_pane

0xee1f,	// (0x0006514d) list_vkb_icf_pane_t1_ParamLimits

0xee1f,	// (0x0006514d) list_vkb_icf_pane_t1

0xee41,	// (0x0006516f) vtchi_icf_list_pane_t1_ParamLimits

0xee41,	// (0x0006516f) vtchi_icf_list_pane_t1

0xebf4,	// (0x00064f22) popup_fep_ituss_window_ParamLimits

0xec37,	// (0x00064f65) popup_fep_vtchi_icf_pane_ParamLimits

0xec60,	// (0x00064f8e) ituss_keypad_pane_ParamLimits

0x8c29,	// (0x0005ef57) ituss_sks_pane

0xf51d,	// (0x0006584b) bg_icf_pane_ParamLimits

0xebc4,	// (0x00064ef2) icf_edit_indi_pane_ParamLimits

0xebc4,	// (0x00064ef2) icf_edit_indi_pane

0xf51d,	// (0x0006584b) list_vkb_icf_pane_ParamLimits

0xeda4,	// (0x000650d2) bg_icf_pane_cp01_ParamLimits

0xebdf,	// (0x00064f0d) icf_edit_indi_pane_cp01_ParamLimits

0xebdf,	// (0x00064f0d) icf_edit_indi_pane_cp01

0xedbf,	// (0x000650ed) vtchi_query_pane

0xdc7a,	// (0x00063fa8) icf_edit_indi_pane_g1_ParamLimits

0xdc7a,	// (0x00063fa8) icf_edit_indi_pane_g1

0xeeb9,	// (0x000651e7) icf_edit_indi_pane_g2_ParamLimits

0xeeb9,	// (0x000651e7) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0006624e) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0006624e) icf_edit_indi_pane_g

0xeecd,	// (0x000651fb) icf_edit_indi_pane_t1

0xee62,	// (0x00065190) bg_input_focus_pane_cp042

0xf036,	// (0x00065364) vtchi_button_pane

0xee6b,	// (0x00065199) vtchi_query_pane_t1

0xee79,	// (0x000651a7) vtchi_query_pane_t2

0xee87,	// (0x000651b5) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0006623d) vtchi_query_pane_t

0x537a,	// (0x0005b6a8) bg_button_pane_cp13

0xee95,	// (0x000651c3) vtchi_button_pane_g1

0x8db8,	// (0x0005f0e6) ituss_sks_pane_g1

0x8dc3,	// (0x0005f0f1) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00066244) ituss_sks_pane_g

0xee9d,	// (0x000651cb) ituss_sks_pane_t1

0xeeab,	// (0x000651d9) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00066249) ituss_sks_pane_t

0xb182,	// (0x000614b0) indicator_nsta_pane_cp_g1

0xb18b,	// (0x000614b9) indicator_nsta_pane_cp_g2

0xb193,	// (0x000614c1) indicator_nsta_pane_cp_g3

0xb19b,	// (0x000614c9) indicator_nsta_pane_cp_g4

0xb18b,	// (0x000614b9) indicator_nsta_pane_cp_g5

0xb193,	// (0x000614c1) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00065dc8) indicator_nsta_pane_cp_g

0xd9ca,	// (0x00063cf8) cell_graphic2_pane_t2_ParamLimits

0xd9ca,	// (0x00063cf8) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x000660da) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x000660da) cell_graphic2_pane_t

0xd9f6,	// (0x00063d24) cell_graphic2_control_pane_t1

0x6667,	// (0x0005c995) signal_pane_g3_ParamLimits

0x6667,	// (0x0005c995) signal_pane_g3

0x6679,	// (0x0005c9a7) signal_pane_g4_ParamLimits

0x6679,	// (0x0005c9a7) signal_pane_g4

0xebae,	// (0x00064edc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebae,	// (0x00064edc) cell_ai5_widget_list_row_pane_t3

0xed63,	// (0x00065091) cell_ituss_key_pane_t1_ParamLimits

0xed63,	// (0x00065091) cell_ituss_key_pane_t1

0x9127,	// (0x0005f455) form_field_data_wide_pane_vc_t2_ParamLimits

0x9127,	// (0x0005f455) form_field_data_wide_pane_vc_t2

0x913b,	// (0x0005f469) form_field_data_wide_pane_vc_t3_ParamLimits

0x913b,	// (0x0005f469) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00065b0d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00065b0d) form_field_data_wide_pane_vc_t

0xae2c,	// (0x0006115a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae2c,	// (0x0006115a) form_field_slider_wide_pane_vc_t3

0xaf0a,	// (0x00061238) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf0a,	// (0x00061238) form_field_popup_wide_pane_vc_t2

0xaf21,	// (0x0006124f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf21,	// (0x0006124f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x00065db7) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00065db7) form_field_popup_wide_pane_vc_t

0x89f9,	// (0x0005ed27) aid_fshwr2_btn_pane_ParamLimits

0x8a0b,	// (0x0005ed39) aid_fshwr2_syb_pane_ParamLimits

0x8a1d,	// (0x0005ed4b) aid_fshwr2_txt_pane_ParamLimits

0x824b,	// (0x0005e579) fshwr2_bg_pane_ParamLimits

0x8a29,	// (0x0005ed57) fshwr2_func_candi_pane_ParamLimits

0x8a45,	// (0x0005ed73) fshwr2_hwr_syb_pane_ParamLimits

0x8a5f,	// (0x0005ed8d) fshwr2_icf_pane_ParamLimits

0xade6,	// (0x00061114) list_double_graphic_pane_vc_g4_ParamLimits

0xade6,	// (0x00061114) list_double_graphic_pane_vc_g4

0x8ca6,	// (0x0005efd4) cell_ituss_key_pane_g3_ParamLimits

0x8ca6,	// (0x0005efd4) cell_ituss_key_pane_g3

0x8da6,	// (0x0005f0d4) cell_ituss_key_t5_ParamLimits

0x8da6,	// (0x0005f0d4) cell_ituss_key_t5

0xec20,	// (0x00064f4e) popup_fep_vkbss_window_ParamLimits

0xde08,	// (0x00064136) aid_cell_ai5_quarter

0xeecd,	// (0x000651fb) icf_edit_indi_pane_t1_ParamLimits

0x5839,	// (0x0005bb67) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5839,	// (0x0005bb67) aid_tch_indicator_popup_pane_cp2

0x584c,	// (0x0005bb7a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x584c,	// (0x0005bb7a) aid_tch_query_popup_data_pane_cp2

0x949c,	// (0x0005f7ca) aid_tch_query_popup_pane_ParamLimits

0x949c,	// (0x0005f7ca) aid_tch_query_popup_pane

0x949c,	// (0x0005f7ca) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x949c,	// (0x0005f7ca) aid_tch_query_popup_data_pane_cp1

0xf51d,	// (0x0006584b) cell_fshwr2_syb_bg_pane_ParamLimits

0x8b55,	// (0x0005ee83) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8b69,	// (0x0005ee97) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec0a,	// (0x00064f38) popup_fep_vkb_icf_pane_ParamLimits

0x8859,	// (0x0005eb87) bg_popup_fep_char_preview_window_g10

0xdf3d,	// (0x0006426b) cell_ai5_widget_pane_g11_ParamLimits

0xdf3d,	// (0x0006426b) cell_ai5_widget_pane_g11

0xdf49,	// (0x00064277) cell_ai5_widget_pane_g12_ParamLimits

0xdf49,	// (0x00064277) cell_ai5_widget_pane_g12

0xdf55,	// (0x00064283) cell_ai5_widget_pane_g13_ParamLimits

0xdf55,	// (0x00064283) cell_ai5_widget_pane_g13

0xe366,	// (0x00064694) cell_ai5_widget_pane_t11_ParamLimits

0xe366,	// (0x00064694) cell_ai5_widget_pane_t11

0xe378,	// (0x000646a6) cell_ai5_widget_pane_t12_ParamLimits

0xe378,	// (0x000646a6) cell_ai5_widget_pane_t12

0x8cb2,	// (0x0005efe0) cell_ituss_key_pane_g4_ParamLimits

0x8cb2,	// (0x0005efe0) cell_ituss_key_pane_g4

0x8cce,	// (0x0005effc) cell_ituss_key_pane_g5_ParamLimits

0x8cce,	// (0x0005effc) cell_ituss_key_pane_g5

0x8cea,	// (0x0005f018) cell_ituss_key_pane_g6_ParamLimits

0x8cea,	// (0x0005f018) cell_ituss_key_pane_g6

0x900d,	// (0x0005f33b) bg_icf_pane_g1

0xedc7,	// (0x000650f5) bg_icf_pane_g2

0xedd3,	// (0x00065101) bg_icf_pane_g3

0xeddd,	// (0x0006510b) bg_icf_pane_g4

0xede9,	// (0x00065117) bg_icf_pane_g5

0xedf3,	// (0x00065121) bg_icf_pane_g6

0xedff,	// (0x0006512d) bg_icf_pane_g7

0xee09,	// (0x00065137) bg_icf_pane_g8

0xee15,	// (0x00065143) bg_icf_pane_g9

0x0008,

0xfefc,	// (0x0006622a) bg_icf_pane_g

0xec4d,	// (0x00064f7b) popup_hyb_candi_window_ParamLimits

0xec4d,	// (0x00064f7b) popup_hyb_candi_window

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp01_ParamLimits

0x9099,	// (0x0005f3c7) bg_popup_sub_pane_cp01

0xeee6,	// (0x00065214) entry_hyb_candi_pane_ParamLimits

0xeee6,	// (0x00065214) entry_hyb_candi_pane

0xeef5,	// (0x00065223) grid_hyb_candi_pane_ParamLimits

0xeef5,	// (0x00065223) grid_hyb_candi_pane

0xef0a,	// (0x00065238) grid_hyb_phrase_pane_ParamLimits

0xef0a,	// (0x00065238) grid_hyb_phrase_pane

0xef19,	// (0x00065247) cell_hyb_candi_pane_ParamLimits

0xef19,	// (0x00065247) cell_hyb_candi_pane

0xef3c,	// (0x0006526a) cell_hyb_candi_scroll_pane

0x120a,	// (0x00057538) cell_hyb_candi_pane_g1

0xef45,	// (0x00065273) cell_hyb_candi_pane_t1

0xef53,	// (0x00065281) cell_hyb_phrase_pane

0x120a,	// (0x00057538) cell_hyb_phrase_pane_g1

0xef5c,	// (0x0006528a) cell_hyb_phrase_pane_t1

0xef6a,	// (0x00065298) entry_hyb_candi_pane_t1

0x1647,	// (0x00057975) input_focus_pane_cp06

0xef78,	// (0x000652a6) cell_hyb_candi_scroll_pane_g1

0xef80,	// (0x000652ae) cell_hyb_candi_scroll_pane_g1_aid

0xef88,	// (0x000652b6) cell_hyb_candi_scroll_pane_g2

0xef90,	// (0x000652be) cell_hyb_candi_scroll_pane_g2_aid

0xef98,	// (0x000652c6) cell_hyb_candi_scroll_pane_g3

0xefa0,	// (0x000652ce) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
