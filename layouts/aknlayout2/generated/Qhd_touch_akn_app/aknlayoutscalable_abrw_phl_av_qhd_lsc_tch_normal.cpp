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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000b14b };

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
0xf576,	// (0x0001a6c1) Screen

0xf582,	// (0x0001a6cd) application_window_ParamLimits

0xf582,	// (0x0001a6cd) application_window

0x5e6d,	// (0x00010fb8) screen_g1

0xe469,	// (0x000195b4) area_bottom_pane_ParamLimits

0xe469,	// (0x000195b4) area_bottom_pane

0x432f,	// (0x0000f47a) area_top_pane_ParamLimits

0x432f,	// (0x0000f47a) area_top_pane

0x43cd,	// (0x0000f518) main_pane_ParamLimits

0x43cd,	// (0x0000f518) main_pane

0x5e77,	// (0x00010fc2) misc_graphics

0x1574,	// (0x0000c6bf) battery_pane_ParamLimits

0x1574,	// (0x0000c6bf) battery_pane

0x92c7,	// (0x00014412) bg_status_flat_pane_g8

0x92cf,	// (0x0001441a) bg_status_flat_pane_g9

0x8605,	// (0x00013750) context_pane_ParamLimits

0x8605,	// (0x00013750) context_pane

0x16df,	// (0x0000c82a) navi_pane_ParamLimits

0x16df,	// (0x0000c82a) navi_pane

0x1756,	// (0x0000c8a1) signal_pane_ParamLimits

0x1756,	// (0x0000c8a1) signal_pane

0x0008,

0xf8a8,	// (0x0001a9f3) bg_status_flat_pane_g

0x17e6,	// (0x0000c931) status_pane_g1_ParamLimits

0x17e6,	// (0x0000c931) status_pane_g1

0x17fc,	// (0x0000c947) status_pane_g2_ParamLimits

0x17fc,	// (0x0000c947) status_pane_g2

0x8825,	// (0x00013970) status_pane_g3_ParamLimits

0x8825,	// (0x00013970) status_pane_g3

0x0004,

0xf7db,	// (0x0001a926) status_pane_g_ParamLimits

0xf7db,	// (0x0001a926) status_pane_g

0x1808,	// (0x0000c953) title_pane_ParamLimits

0x1808,	// (0x0000c953) title_pane

0x1869,	// (0x0000c9b4) uni_indicator_pane_ParamLimits

0x1869,	// (0x0000c9b4) uni_indicator_pane

0x7eb0,	// (0x00012ffb) bg_list_pane_ParamLimits

0x7eb0,	// (0x00012ffb) bg_list_pane

0x0e50,	// (0x0000bf9b) find_pane

0x0e58,	// (0x0000bfa3) listscroll_app_pane_ParamLimits

0x0e58,	// (0x0000bfa3) listscroll_app_pane

0x7ee4,	// (0x0001302f) listscroll_form_pane

0x0e64,	// (0x0000bfaf) listscroll_gen_pane_ParamLimits

0x0e64,	// (0x0000bfaf) listscroll_gen_pane

0x7ee4,	// (0x0001302f) listscroll_set_pane

0x9e8c,	// (0x00014fd7) main_idle_act_pane

0x7b88,	// (0x00012cd3) main_idle_trad_pane

0x7b88,	// (0x00012cd3) main_list_empty_pane

0x7f12,	// (0x0001305d) main_midp_pane

0x7f1e,	// (0x00013069) main_pane_g1_ParamLimits

0x7f1e,	// (0x00013069) main_pane_g1

0x0e78,	// (0x0000bfc3) popup_ai_message_window_ParamLimits

0x0e78,	// (0x0000bfc3) popup_ai_message_window

0x0f09,	// (0x0000c054) popup_fep_china_uni_window_ParamLimits

0x0f09,	// (0x0000c054) popup_fep_china_uni_window

0x8032,	// (0x0001317d) popup_fep_japan_candidate_window_ParamLimits

0x8032,	// (0x0001317d) popup_fep_japan_candidate_window

0x8052,	// (0x0001319d) popup_fep_japan_predictive_window_ParamLimits

0x8052,	// (0x0001319d) popup_fep_japan_predictive_window

0x0f65,	// (0x0000c0b0) popup_find_window

0x0f82,	// (0x0000c0cd) popup_grid_graphic_window_ParamLimits

0x0f82,	// (0x0000c0cd) popup_grid_graphic_window

0x80b7,	// (0x00013202) popup_large_graphic_colour_window

0x101a,	// (0x0000c165) popup_menu_window_ParamLimits

0x101a,	// (0x0000c165) popup_menu_window

0x11d4,	// (0x0000c31f) popup_note_image_window

0x119a,	// (0x0000c2e5) popup_note_wait_window_ParamLimits

0x119a,	// (0x0000c2e5) popup_note_wait_window

0x11ec,	// (0x0000c337) popup_note_window_ParamLimits

0x11ec,	// (0x0000c337) popup_note_window

0x1292,	// (0x0000c3dd) popup_query_code_window_ParamLimits

0x1292,	// (0x0000c3dd) popup_query_code_window

0x82ff,	// (0x0001344a) popup_query_data_code_window_ParamLimits

0x82ff,	// (0x0001344a) popup_query_data_code_window

0x12cc,	// (0x0000c417) popup_query_data_window_ParamLimits

0x12cc,	// (0x0000c417) popup_query_data_window

0x1342,	// (0x0000c48d) popup_query_sat_info_window_ParamLimits

0x1342,	// (0x0000c48d) popup_query_sat_info_window

0x13d9,	// (0x0000c524) popup_snote_single_graphic_window_ParamLimits

0x13d9,	// (0x0000c524) popup_snote_single_graphic_window

0x13d9,	// (0x0000c524) popup_snote_single_text_window_ParamLimits

0x13d9,	// (0x0000c524) popup_snote_single_text_window

0x8386,	// (0x000134d1) popup_sub_window_general

0x84b6,	// (0x00013601) popup_window_general_ParamLimits

0x84b6,	// (0x00013601) popup_window_general

0x84cb,	// (0x00013616) power_save_pane

0xe5eb,	// (0x00019736) control_pane_g1_ParamLimits

0xe5eb,	// (0x00019736) control_pane_g1

0x4b55,	// (0x0000fca0) control_pane_g2_ParamLimits

0x4b55,	// (0x0000fca0) control_pane_g2

0x7e51,	// (0x00012f9c) control_pane_g3_ParamLimits

0x7e51,	// (0x00012f9c) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a90e) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a90e) control_pane_g

0xe62a,	// (0x00019775) control_pane_t1_ParamLimits

0xe62a,	// (0x00019775) control_pane_t1

0xe688,	// (0x000197d3) control_pane_t2_ParamLimits

0xe688,	// (0x000197d3) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a91f) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a91f) control_pane_t

0x7d72,	// (0x00012ebd) navi_navi_volume_pane_cp1

0x7d7b,	// (0x00012ec6) status_small_icon_pane

0x7d83,	// (0x00012ece) status_small_pane_g1_ParamLimits

0x7d83,	// (0x00012ece) status_small_pane_g1

0x7db7,	// (0x00012f02) status_small_pane_g2_ParamLimits

0x7db7,	// (0x00012f02) status_small_pane_g2

0x7dc3,	// (0x00012f0e) status_small_pane_g3_ParamLimits

0x7dc3,	// (0x00012f0e) status_small_pane_g3

0x7dcf,	// (0x00012f1a) status_small_pane_g4_ParamLimits

0x7dcf,	// (0x00012f1a) status_small_pane_g4

0x7ddb,	// (0x00012f26) status_small_pane_g5_ParamLimits

0x7ddb,	// (0x00012f26) status_small_pane_g5

0x7dea,	// (0x00012f35) status_small_pane_g6_ParamLimits

0x7dea,	// (0x00012f35) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a8fd) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a8fd) status_small_pane_g

0x7e1a,	// (0x00012f65) status_small_pane_t1

0x7e3d,	// (0x00012f88) status_small_wait_pane_ParamLimits

0x7e3d,	// (0x00012f88) status_small_wait_pane

0x0aca,	// (0x0000bc15) aid_levels_signal_ParamLimits

0x0aca,	// (0x0000bc15) aid_levels_signal

0x0ae2,	// (0x0000bc2d) signal_pane_g1_ParamLimits

0x0ae2,	// (0x0000bc2d) signal_pane_g1

0x0afd,	// (0x0000bc48) signal_pane_g2_ParamLimits

0x0afd,	// (0x0000bc48) signal_pane_g2

0x0001,

0xf747,	// (0x0001a892) signal_pane_g_ParamLimits

0xf747,	// (0x0001a892) signal_pane_g

0x75d8,	// (0x00012723) context_pane_g1

0x002f,	// (0x0000b17a) title_pane_g1

0x0064,	// (0x0000b1af) title_pane_t1

0x5f1f,	// (0x0001106a) title_pane_t2

0x5f45,	// (0x00011090) title_pane_t3

0x0002,

0xf59b,	// (0x0001a6e6) title_pane_t

0x1891,	// (0x0000c9dc) aid_levels_battery_ParamLimits

0x1891,	// (0x0000c9dc) aid_levels_battery

0x18ad,	// (0x0000c9f8) battery_pane_g1_ParamLimits

0x18ad,	// (0x0000c9f8) battery_pane_g1

0x18ca,	// (0x0000ca15) battery_pane_g2_ParamLimits

0x18ca,	// (0x0000ca15) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a931) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a931) battery_pane_g

0x1ca5,	// (0x0000cdf0) uni_indicator_pane_g1

0x1cba,	// (0x0000ce05) uni_indicator_pane_g2

0x1ccf,	// (0x0000ce1a) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001aa9b) uni_indicator_pane_g

0x79fa,	// (0x00012b45) navi_icon_pane_ParamLimits

0x79fa,	// (0x00012b45) navi_icon_pane

0x7943,	// (0x00012a8e) navi_midp_pane

0x7a16,	// (0x00012b61) navi_navi_pane

0x7a20,	// (0x00012b6b) navi_text_pane_ParamLimits

0x7a20,	// (0x00012b6b) navi_text_pane

0x5e6d,	// (0x00010fb8) status_small_wait_pane_g1

0x638e,	// (0x000114d9) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001aa96) status_small_wait_pane_g

0x9928,	// (0x00014a73) navi_navi_icon_text_pane

0x9930,	// (0x00014a7b) navi_navi_pane_g1_ParamLimits

0x9930,	// (0x00014a7b) navi_navi_pane_g1

0x9942,	// (0x00014a8d) navi_navi_pane_g2_ParamLimits

0x9942,	// (0x00014a8d) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001aa64) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001aa64) navi_navi_pane_g

0x9954,	// (0x00014a9f) navi_navi_tabs_pane

0x995d,	// (0x00014aa8) navi_navi_text_pane

0x9928,	// (0x00014a73) navi_navi_volume_pane

0x1c66,	// (0x0000cdb1) navi_text_pane_t1

0x1c5a,	// (0x0000cda5) navi_icon_pane_g1

0x9845,	// (0x00014990) navi_navi_text_pane_t1

0xe8d5,	// (0x00019a20) navi_navi_volume_pane_g1

0xe8dd,	// (0x00019a28) volume_small_pane

0x1ba5,	// (0x0000ccf0) navi_navi_icon_text_pane_g1

0x1bad,	// (0x0000ccf8) navi_navi_icon_text_pane_t1

0x7a16,	// (0x00012b61) navi_tabs_2_long_pane

0x7a16,	// (0x00012b61) navi_tabs_2_pane

0x7a16,	// (0x00012b61) navi_tabs_3_long_pane

0x7a16,	// (0x00012b61) navi_tabs_3_pane

0x7a16,	// (0x00012b61) navi_tabs_4_pane

0xe8b5,	// (0x00019a00) tabs_2_active_pane_ParamLimits

0xe8b5,	// (0x00019a00) tabs_2_active_pane

0xe8c5,	// (0x00019a10) tabs_2_passive_pane_ParamLimits

0xe8c5,	// (0x00019a10) tabs_2_passive_pane

0xe883,	// (0x000199ce) tabs_3_active_pane_ParamLimits

0xe883,	// (0x000199ce) tabs_3_active_pane

0xe893,	// (0x000199de) tabs_3_passive_pane_ParamLimits

0xe893,	// (0x000199de) tabs_3_passive_pane

0xe8a4,	// (0x000199ef) tabs_3_passive_pane_cp_ParamLimits

0xe8a4,	// (0x000199ef) tabs_3_passive_pane_cp

0xe83f,	// (0x0001998a) tabs_4_active_pane_ParamLimits

0xe83f,	// (0x0001998a) tabs_4_active_pane

0xe850,	// (0x0001999b) tabs_4_passive_pane_ParamLimits

0xe850,	// (0x0001999b) tabs_4_passive_pane

0xe861,	// (0x000199ac) tabs_4_passive_pane_cp_ParamLimits

0xe861,	// (0x000199ac) tabs_4_passive_pane_cp

0xe872,	// (0x000199bd) tabs_4_passive_pane_cp2_ParamLimits

0xe872,	// (0x000199bd) tabs_4_passive_pane_cp2

0xe81f,	// (0x0001996a) tabs_2_long_active_pane_ParamLimits

0xe81f,	// (0x0001996a) tabs_2_long_active_pane

0xe82f,	// (0x0001997a) tabs_2_long_passive_pane_ParamLimits

0xe82f,	// (0x0001997a) tabs_2_long_passive_pane

0xe7ec,	// (0x00019937) tabs_3_long_active_pane_ParamLimits

0xe7ec,	// (0x00019937) tabs_3_long_active_pane

0xe7fd,	// (0x00019948) tabs_3_long_passive_pane_ParamLimits

0xe7fd,	// (0x00019948) tabs_3_long_passive_pane

0xe80e,	// (0x00019959) tabs_3_long_passive_pane_cp_ParamLimits

0xe80e,	// (0x00019959) tabs_3_long_passive_pane_cp

0x4e31,	// (0x0000ff7c) volume_small_pane_g1

0xe79b,	// (0x000198e6) volume_small_pane_g2

0xe7a4,	// (0x000198ef) volume_small_pane_g3

0xe7ad,	// (0x000198f8) volume_small_pane_g4

0xe7b6,	// (0x00019901) volume_small_pane_g5

0xe7bf,	// (0x0001990a) volume_small_pane_g6

0xe7c8,	// (0x00019913) volume_small_pane_g7

0xe7d1,	// (0x0001991c) volume_small_pane_g8

0xe7da,	// (0x00019925) volume_small_pane_g9

0xe7e3,	// (0x0001992e) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001aa30) volume_small_pane_g

0x61ec,	// (0x00011337) bg_active_tab_pane_cp2_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp2

0x00f0,	// (0x0000b23b) tabs_3_active_pane_g1

0x00f8,	// (0x0000b243) tabs_3_active_pane_t1

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp2_ParamLimits

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp2

0x00f0,	// (0x0000b23b) tabs_3_passive_pane_g1

0x00f8,	// (0x0000b243) tabs_3_passive_pane_t1

0x61ec,	// (0x00011337) bg_active_tab_pane_cp3_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp3

0x010a,	// (0x0000b255) tabs_4_active_pane_g1

0x0112,	// (0x0000b25d) tabs_4_active_pane_t1

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp3_ParamLimits

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp3

0x010a,	// (0x0000b255) tabs_4_1_passive_pane_g1

0x0112,	// (0x0000b25d) tabs_4_1_passive_pane_t1

0x7f12,	// (0x0001305d) list_highlight_pane_cp2

0x1d6a,	// (0x0000ceb5) list_set_pane_ParamLimits

0x1d6a,	// (0x0000ceb5) list_set_pane

0x1e04,	// (0x0000cf4f) main_pane_set_t1_ParamLimits

0x1e04,	// (0x0000cf4f) main_pane_set_t1

0x1e24,	// (0x0000cf6f) main_pane_set_t2_ParamLimits

0x1e24,	// (0x0000cf6f) main_pane_set_t2

0x1e38,	// (0x0000cf83) main_pane_set_t3_ParamLimits

0x1e38,	// (0x0000cf83) main_pane_set_t3

0x1e4a,	// (0x0000cf95) main_pane_set_t4_ParamLimits

0x1e4a,	// (0x0000cf95) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001ab00) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001ab00) main_pane_set_t

0x1e5c,	// (0x0000cfa7) setting_code_pane

0x1e66,	// (0x0000cfb1) setting_slider_graphic_pane

0x1e66,	// (0x0000cfb1) setting_slider_pane

0x1e66,	// (0x0000cfb1) setting_text_pane

0x1e66,	// (0x0000cfb1) setting_volume_pane

0x4612,	// (0x0000f75d) volume_set_pane

0x5f57,	// (0x000110a2) bg_set_opt_pane_cp

0x461a,	// (0x0000f765) setting_slider_pane_t1

0x4633,	// (0x0000f77e) setting_slider_pane_t2

0x464d,	// (0x0000f798) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a6ed) setting_slider_pane_t

0x4665,	// (0x0000f7b0) slider_set_pane

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp2

0x5f99,	// (0x000110e4) setting_slider_graphic_pane_g1

0x467b,	// (0x0000f7c6) setting_slider_graphic_pane_t1

0x468b,	// (0x0000f7d6) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a6f4) setting_slider_graphic_pane_t

0x469b,	// (0x0000f7e6) slider_set_pane_cp

0x5e77,	// (0x00010fc2) input_focus_pane_cp1

0x9e73,	// (0x00014fbe) list_set_text_pane

0x5e6d,	// (0x00010fb8) setting_text_pane_g1

0x5e77,	// (0x00010fc2) input_focus_pane_cp2

0x5e6d,	// (0x00010fb8) setting_code_pane_g1

0x5fa2,	// (0x000110ed) setting_code_pane_t1

0x5fb0,	// (0x000110fb) set_text_pane_t1_ParamLimits

0x5fb0,	// (0x000110fb) set_text_pane_t1

0x6e76,	// (0x00011fc1) set_opt_bg_pane_g1

0x6e7e,	// (0x00011fc9) set_opt_bg_pane_g2

0x9e4d,	// (0x00014f98) set_opt_bg_pane_g3

0x6e8e,	// (0x00011fd9) set_opt_bg_pane_g4

0x6e96,	// (0x00011fe1) set_opt_bg_pane_g5

0x6e9e,	// (0x00011fe9) set_opt_bg_pane_g6

0x9e57,	// (0x00014fa2) set_opt_bg_pane_g7

0x9e5f,	// (0x00014faa) set_opt_bg_pane_g8

0x9e69,	// (0x00014fb4) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001aaed) set_opt_bg_pane_g

0x9e40,	// (0x00014f8b) slider_set_pane_g1

0x4ff9,	// (0x00010144) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001aade) slider_set_pane_g

0x4f95,	// (0x000100e0) volume_set_pane_g1

0x4f9d,	// (0x000100e8) volume_set_pane_g2

0x4fa5,	// (0x000100f0) volume_set_pane_g3

0x4fad,	// (0x000100f8) volume_set_pane_g4

0x4fb5,	// (0x00010100) volume_set_pane_g5

0x4fbd,	// (0x00010108) volume_set_pane_g6

0x4fc5,	// (0x00010110) volume_set_pane_g7

0x4fcd,	// (0x00010118) volume_set_pane_g8

0x4fd5,	// (0x00010120) volume_set_pane_g9

0x4fdd,	// (0x00010128) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001aab6) volume_set_pane_g

0x0124,	// (0x0000b26f) indicator_pane_ParamLimits

0x0124,	// (0x0000b26f) indicator_pane

0x014c,	// (0x0000b297) main_idle_pane_g2_ParamLimits

0x014c,	// (0x0000b297) main_idle_pane_g2

0x0184,	// (0x0000b2cf) main_pane_idle_g1_ParamLimits

0x0184,	// (0x0000b2cf) main_pane_idle_g1

0x600b,	// (0x00011156) popup_clock_digital_analogue_window_ParamLimits

0x600b,	// (0x00011156) popup_clock_digital_analogue_window

0x01ab,	// (0x0000b2f6) soft_indicator_pane_ParamLimits

0x01ab,	// (0x0000b2f6) soft_indicator_pane

0x01c5,	// (0x0000b310) wallpaper_pane_ParamLimits

0x01c5,	// (0x0000b310) wallpaper_pane

0x5e6d,	// (0x00010fb8) wallpaper_pane_g1

0x01d7,	// (0x0000b322) indicator_pane_g1_ParamLimits

0x01d7,	// (0x0000b322) indicator_pane_g1

0xa31a,	// (0x00015465) navi_navi_icon_text_pane_srt_g1

0x605d,	// (0x000111a8) soft_indicator_pane_t1

0x6077,	// (0x000111c2) aid_ps_area_pane

0x01ed,	// (0x0000b338) aid_ps_clock_pane

0x6096,	// (0x000111e1) aid_ps_indicator_pane

0x60a2,	// (0x000111ed) indicator_ps_pane_ParamLimits

0x60a2,	// (0x000111ed) indicator_ps_pane

0x60b1,	// (0x000111fc) power_save_pane_g1_ParamLimits

0x60b1,	// (0x000111fc) power_save_pane_g1

0x60bd,	// (0x00011208) power_save_pane_g2_ParamLimits

0x60bd,	// (0x00011208) power_save_pane_g2

0x4223,	// (0x0000f36e) aid_navinavi_width_pane

0x6077,	// (0x000111c2) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a6f9) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a6f9) power_save_pane_g

0x60cb,	// (0x00011216) power_save_pane_t1_ParamLimits

0x60cb,	// (0x00011216) power_save_pane_t1

0x01ed,	// (0x0000b338) aid_ps_clock_pane_ParamLimits

0x6096,	// (0x000111e1) aid_ps_indicator_pane_ParamLimits

0x60dd,	// (0x00011228) power_save_pane_t4_ParamLimits

0x60dd,	// (0x00011228) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a6fe) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a6fe) power_save_pane_t

0x6107,	// (0x00011252) power_save_t3_ParamLimits

0x6107,	// (0x00011252) power_save_t3

0x60f2,	// (0x0001123d) power_save_t2_ParamLimits

0x60f2,	// (0x0001123d) power_save_t2

0x611c,	// (0x00011267) indicator_ps_pane_g1

0x01fb,	// (0x0000b346) ai_gene_pane_ParamLimits

0x01fb,	// (0x0000b346) ai_gene_pane

0x0212,	// (0x0000b35d) ai_links_pane_ParamLimits

0x0212,	// (0x0000b35d) ai_links_pane

0x022a,	// (0x0000b375) indicator_pane_cp1_ParamLimits

0x022a,	// (0x0000b375) indicator_pane_cp1

0x0239,	// (0x0000b384) main_pane_idle_g1_cp_ParamLimits

0x0239,	// (0x0000b384) main_pane_idle_g1_cp

0x6155,	// (0x000112a0) popup_ai_links_title_window

0x0251,	// (0x0000b39c) soft_indicator_pane_cp1_ParamLimits

0x0251,	// (0x0000b39c) soft_indicator_pane_cp1

0x9bf1,	// (0x00014d3c) ai_links_pane_g1

0x9bfa,	// (0x00014d45) grid_ai_links_pane

0x1c9c,	// (0x0000cde7) ai_gene_pane_1

0x9bdf,	// (0x00014d2a) ai_gene_pane_2

0x9be8,	// (0x00014d33) list_highlight_pane_cp4

0x1c78,	// (0x0000cdc3) cell_ai_link_pane_ParamLimits

0x1c78,	// (0x0000cdc3) cell_ai_link_pane

0x9bb0,	// (0x00014cfb) cell_ai_link_pane_g1

0x638e,	// (0x000114d9) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001aa91) cell_ai_link_pane_g

0x5e77,	// (0x00010fc2) grid_highlight_cp2

0x5e77,	// (0x00010fc2) bg_popup_sub_pane_cp1

0x6178,	// (0x000112c3) popup_ai_links_title_window_t1

0x9afe,	// (0x00014c49) ai_gene_pane_1_g1_ParamLimits

0x9afe,	// (0x00014c49) ai_gene_pane_1_g1

0x9b0a,	// (0x00014c55) ai_gene_pane_1_g2_ParamLimits

0x9b0a,	// (0x00014c55) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001aa87) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001aa87) ai_gene_pane_1_g

0x9b17,	// (0x00014c62) ai_gene_pane_1_t1_ParamLimits

0x9b17,	// (0x00014c62) ai_gene_pane_1_t1

0x9b4b,	// (0x00014c96) grid_ai_soft_ind_pane

0x9ae9,	// (0x00014c34) ai_gene_pane_2_t1_ParamLimits

0x9ae9,	// (0x00014c34) ai_gene_pane_2_t1

0x0265,	// (0x0000b3b0) main_pane_empty_t1_ParamLimits

0x0265,	// (0x0000b3b0) main_pane_empty_t1

0x027d,	// (0x0000b3c8) main_pane_empty_t2_ParamLimits

0x027d,	// (0x0000b3c8) main_pane_empty_t2

0x0292,	// (0x0000b3dd) main_pane_empty_t3_ParamLimits

0x0292,	// (0x0000b3dd) main_pane_empty_t3

0x02a4,	// (0x0000b3ef) main_pane_empty_t4_ParamLimits

0x02a4,	// (0x0000b3ef) main_pane_empty_t4

0x02b6,	// (0x0000b401) main_pane_empty_t5_ParamLimits

0x02b6,	// (0x0000b401) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a703) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a703) main_pane_empty_t

0x6f73,	// (0x000120be) bg_popup_window_pane_ParamLimits

0x6f73,	// (0x000120be) bg_popup_window_pane

0x9853,	// (0x0001499e) find_popup_pane_cp2_ParamLimits

0x9853,	// (0x0001499e) find_popup_pane_cp2

0x985f,	// (0x000149aa) heading_pane_ParamLimits

0x985f,	// (0x000149aa) heading_pane

0x5e77,	// (0x00010fc2) bg_popup_sub_pane

0x1bca,	// (0x0000cd15) bg_popup_window_pane_g1_ParamLimits

0x1bca,	// (0x0000cd15) bg_popup_window_pane_g1

0x1bd9,	// (0x0000cd24) bg_popup_window_pane_g2_ParamLimits

0x1bd9,	// (0x0000cd24) bg_popup_window_pane_g2

0x1be5,	// (0x0000cd30) bg_popup_window_pane_g3_ParamLimits

0x1be5,	// (0x0000cd30) bg_popup_window_pane_g3

0x1bf1,	// (0x0000cd3c) bg_popup_window_pane_g4_ParamLimits

0x1bf1,	// (0x0000cd3c) bg_popup_window_pane_g4

0x1c00,	// (0x0000cd4b) bg_popup_window_pane_g5_ParamLimits

0x1c00,	// (0x0000cd4b) bg_popup_window_pane_g5

0x1c10,	// (0x0000cd5b) bg_popup_window_pane_g6_ParamLimits

0x1c10,	// (0x0000cd5b) bg_popup_window_pane_g6

0x1c1c,	// (0x0000cd67) bg_popup_window_pane_g7_ParamLimits

0x1c1c,	// (0x0000cd67) bg_popup_window_pane_g7

0x1c2b,	// (0x0000cd76) bg_popup_window_pane_g8_ParamLimits

0x1c2b,	// (0x0000cd76) bg_popup_window_pane_g8

0x1c3a,	// (0x0000cd85) bg_popup_window_pane_g9_ParamLimits

0x1c3a,	// (0x0000cd85) bg_popup_window_pane_g9

0x9839,	// (0x00014984) bg_popup_window_pane_g10_ParamLimits

0x9839,	// (0x00014984) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001aa4f) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001aa4f) bg_popup_window_pane_g

0x9762,	// (0x000148ad) bg_popup_heading_pane_ParamLimits

0x9762,	// (0x000148ad) bg_popup_heading_pane

0x5081,	// (0x000101cc) tabs_4_passive_pane_cp_srt_ParamLimits

0x5081,	// (0x000101cc) tabs_4_passive_pane_cp_srt

0x5093,	// (0x000101de) tabs_4_passive_pane_srt_ParamLimits

0x9776,	// (0x000148c1) heading_pane_g2

0x5093,	// (0x000101de) tabs_4_passive_pane_srt

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp3_srt

0x977e,	// (0x000148c9) heading_pane_t1_ParamLimits

0x977e,	// (0x000148c9) heading_pane_t1

0x9795,	// (0x000148e0) heading_pane_t2_ParamLimits

0x9795,	// (0x000148e0) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001aa4a) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001aa4a) heading_pane_t

0x928f,	// (0x000143da) bg_popup_heading_pane_g1

0x933e,	// (0x00014489) bg_popup_heading_pane_g2

0x9348,	// (0x00014493) bg_popup_heading_pane_g3

0x9352,	// (0x0001449d) bg_popup_heading_pane_g4

0x935c,	// (0x000144a7) bg_popup_heading_pane_g5

0x9366,	// (0x000144b1) bg_popup_heading_pane_g6

0x936e,	// (0x000144b9) bg_popup_heading_pane_g7

0x9376,	// (0x000144c1) bg_popup_heading_pane_g8

0x9380,	// (0x000144cb) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001aa06) bg_popup_heading_pane_g

0x89ea,	// (0x00013b35) bg_popup_sub_pane_g1

0x89fa,	// (0x00013b45) bg_popup_sub_pane_g2

0x89f2,	// (0x00013b3d) bg_popup_sub_pane_g3

0x8a0a,	// (0x00013b55) bg_popup_sub_pane_g4

0x8a02,	// (0x00013b4d) bg_popup_sub_pane_g5

0x8a12,	// (0x00013b5d) bg_popup_sub_pane_g6

0x8a1a,	// (0x00013b65) bg_popup_sub_pane_g7

0x8a2a,	// (0x00013b75) bg_popup_sub_pane_g8

0x8a22,	// (0x00013b6d) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001a9e0) bg_popup_sub_pane_g

0x61ec,	// (0x00011337) bg_popup_window_pane_cp5_ParamLimits

0x61ec,	// (0x00011337) bg_popup_window_pane_cp5

0x6208,	// (0x00011353) popup_note_window_g1_ParamLimits

0x6208,	// (0x00011353) popup_note_window_g1

0x6214,	// (0x0001135f) popup_note_window_t1_ParamLimits

0x6214,	// (0x0001135f) popup_note_window_t1

0x622a,	// (0x00011375) popup_note_window_t2_ParamLimits

0x622a,	// (0x00011375) popup_note_window_t2

0x6240,	// (0x0001138b) popup_note_window_t3_ParamLimits

0x6240,	// (0x0001138b) popup_note_window_t3

0x6256,	// (0x000113a1) popup_note_window_t4_ParamLimits

0x6256,	// (0x000113a1) popup_note_window_t4

0x627e,	// (0x000113c9) popup_note_window_t5_ParamLimits

0x627e,	// (0x000113c9) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a70e) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a70e) popup_note_window_t

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp6_ParamLimits

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp6

0x920b,	// (0x00014356) popup_note_image_window_g1_ParamLimits

0x920b,	// (0x00014356) popup_note_image_window_g1

0x9217,	// (0x00014362) popup_note_image_window_g2_ParamLimits

0x9217,	// (0x00014362) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001a9d4) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001a9d4) popup_note_image_window_g

0x9230,	// (0x0001437b) popup_note_image_window_t1_ParamLimits

0x9230,	// (0x0001437b) popup_note_image_window_t1

0x9249,	// (0x00014394) popup_note_image_window_t2_ParamLimits

0x9249,	// (0x00014394) popup_note_image_window_t2

0x9262,	// (0x000143ad) popup_note_image_window_t3_ParamLimits

0x9262,	// (0x000143ad) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001a9d9) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001a9d9) popup_note_image_window_t

0x90cc,	// (0x00014217) bg_popup_window_pane_cp7_ParamLimits

0x90cc,	// (0x00014217) bg_popup_window_pane_cp7

0x90fc,	// (0x00014247) popup_note_wait_window_g1_ParamLimits

0x90fc,	// (0x00014247) popup_note_wait_window_g1

0x9108,	// (0x00014253) popup_note_wait_window_g2_ParamLimits

0x9108,	// (0x00014253) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001a9c2) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001a9c2) popup_note_wait_window_g

0x9120,	// (0x0001426b) popup_note_wait_window_t1_ParamLimits

0x9120,	// (0x0001426b) popup_note_wait_window_t1

0x9147,	// (0x00014292) popup_note_wait_window_t2_ParamLimits

0x9147,	// (0x00014292) popup_note_wait_window_t2

0x9164,	// (0x000142af) popup_note_wait_window_t3_ParamLimits

0x9164,	// (0x000142af) popup_note_wait_window_t3

0x9177,	// (0x000142c2) popup_note_wait_window_t4_ParamLimits

0x9177,	// (0x000142c2) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001a9c9) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001a9c9) popup_note_wait_window_t

0x919c,	// (0x000142e7) wait_bar_pane_ParamLimits

0x919c,	// (0x000142e7) wait_bar_pane

0x5e77,	// (0x00010fc2) wait_anim_pane

0x5e77,	// (0x00010fc2) wait_border_pane

0x5e6d,	// (0x00010fb8) wait_anim_pane_g1

0x5e6d,	// (0x00010fb8) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a88d) wait_anim_pane_g

0x9070,	// (0x000141bb) wait_border_pane_g1

0x907b,	// (0x000141c6) wait_border_pane_g2

0x9084,	// (0x000141cf) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001a9bb) wait_border_pane_g

0x8fcd,	// (0x00014118) bg_popup_window_pane_cp16_ParamLimits

0x8fcd,	// (0x00014118) bg_popup_window_pane_cp16

0x8fdb,	// (0x00014126) indicator_popup_pane_cp4_ParamLimits

0x8fdb,	// (0x00014126) indicator_popup_pane_cp4

0x8fef,	// (0x0001413a) popup_query_data_window_t1_ParamLimits

0x8fef,	// (0x0001413a) popup_query_data_window_t1

0x9001,	// (0x0001414c) popup_query_data_window_t2_ParamLimits

0x9001,	// (0x0001414c) popup_query_data_window_t2

0x901a,	// (0x00014165) popup_query_data_window_t3_ParamLimits

0x901a,	// (0x00014165) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001a9b4) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001a9b4) popup_query_data_window_t

0x9034,	// (0x0001417f) query_popup_data_pane_ParamLimits

0x9034,	// (0x0001417f) query_popup_data_pane

0x9048,	// (0x00014193) query_popup_data_pane_cp1_ParamLimits

0x9048,	// (0x00014193) query_popup_data_pane_cp1

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp10_ParamLimits

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp10

0x8f30,	// (0x0001407b) indicator_popup_pane_ParamLimits

0x8f30,	// (0x0001407b) indicator_popup_pane

0x62f9,	// (0x00011444) popup_query_code_window_t1_ParamLimits

0x62f9,	// (0x00011444) popup_query_code_window_t1

0x8f48,	// (0x00014093) popup_query_code_window_t2_ParamLimits

0x8f48,	// (0x00014093) popup_query_code_window_t2

0x8f86,	// (0x000140d1) popup_query_code_window_t3_ParamLimits

0x8f86,	// (0x000140d1) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001a9ad) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001a9ad) popup_query_code_window_t

0x8fb5,	// (0x00014100) query_popup_pane_ParamLimits

0x8fb5,	// (0x00014100) query_popup_pane

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp15_ParamLimits

0x62a2,	// (0x000113ed) bg_popup_window_pane_cp15

0x62c0,	// (0x0001140b) indicator_popup_pane_cp1_ParamLimits

0x62c0,	// (0x0001140b) indicator_popup_pane_cp1

0x62d3,	// (0x0001141e) indicator_popup_pane_cp2_ParamLimits

0x62d3,	// (0x0001141e) indicator_popup_pane_cp2

0x62e6,	// (0x00011431) popup_query_data_code_window_g1_ParamLimits

0x62e6,	// (0x00011431) popup_query_data_code_window_g1

0x62f9,	// (0x00011444) popup_query_data_code_window_t1_ParamLimits

0x62f9,	// (0x00011444) popup_query_data_code_window_t1

0x630b,	// (0x00011456) popup_query_data_code_window_t2_ParamLimits

0x630b,	// (0x00011456) popup_query_data_code_window_t2

0x631d,	// (0x00011468) popup_query_data_code_window_t3_ParamLimits

0x631d,	// (0x00011468) popup_query_data_code_window_t3

0x6333,	// (0x0001147e) popup_query_data_code_window_t4_ParamLimits

0x6333,	// (0x0001147e) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a719) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a719) popup_query_data_code_window_t

0x4d42,	// (0x0000fe8d) list_single_midp_graphic_pane_g3

0x634b,	// (0x00011496) query_popup_data_pane_cp2_ParamLimits

0x635e,	// (0x000114a9) query_popup_pane_cp2_ParamLimits

0x635e,	// (0x000114a9) query_popup_pane_cp2

0x5e77,	// (0x00010fc2) bg_popup_window_pane_cp11

0x8f04,	// (0x0001404f) heading_pane_cp5

0x6446,	// (0x00011591) listscroll_popup_info_pane

0x5e77,	// (0x00010fc2) input_focus_pane_cp3

0x6371,	// (0x000114bc) query_popup_pane_t1

0x637f,	// (0x000114ca) list_popup_info_pane_ParamLimits

0x637f,	// (0x000114ca) list_popup_info_pane

0x638e,	// (0x000114d9) listscroll_popup_info_pane_g1

0x6396,	// (0x000114e1) scroll_pane_cp7

0x63a0,	// (0x000114eb) popup_info_list_pane_t1_ParamLimits

0x63a0,	// (0x000114eb) popup_info_list_pane_t1

0x63ba,	// (0x00011505) popup_info_list_pane_t2_ParamLimits

0x63ba,	// (0x00011505) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a722) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a722) popup_info_list_pane_t

0x5e77,	// (0x00010fc2) bg_popup_window_pane_cp12

0xa334,	// (0x0001547f) find_popup_pane

0x5f57,	// (0x000110a2) bg_popup_window_pane_cp3

0x63d4,	// (0x0001151f) heading_pane_cp3

0x63e0,	// (0x0001152b) listscroll_popup_graphic_pane

0x5e77,	// (0x00010fc2) bg_popup_window_pane_cp4

0x0318,	// (0x0000b463) heading_pane_cp4

0x6446,	// (0x00011591) listscroll_popup_colour_pane

0x0320,	// (0x0000b46b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0320,	// (0x0000b46b) cell_large_graphic_colour_none_popup_pane

0x0334,	// (0x0000b47f) grid_large_graphic_colour_popup_pane_ParamLimits

0x0334,	// (0x0000b47f) grid_large_graphic_colour_popup_pane

0x0358,	// (0x0000b4a3) listscroll_popup_colour_pane_g1_ParamLimits

0x0358,	// (0x0000b4a3) listscroll_popup_colour_pane_g1

0x036f,	// (0x0000b4ba) listscroll_popup_colour_pane_g2_ParamLimits

0x036f,	// (0x0000b4ba) listscroll_popup_colour_pane_g2

0x0386,	// (0x0000b4d1) listscroll_popup_colour_pane_g3_ParamLimits

0x0386,	// (0x0000b4d1) listscroll_popup_colour_pane_g3

0x0396,	// (0x0000b4e1) listscroll_popup_colour_pane_g4_ParamLimits

0x0396,	// (0x0000b4e1) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a727) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a727) listscroll_popup_colour_pane_g

0x64e0,	// (0x0001162b) scroll_pane_cp6_ParamLimits

0x64e0,	// (0x0001162b) scroll_pane_cp6

0x03a6,	// (0x0000b4f1) cell_large_graphic_colour_popup_pane_ParamLimits

0x03a6,	// (0x0000b4f1) cell_large_graphic_colour_popup_pane

0x6511,	// (0x0001165c) cell_large_graphic_colour_none_popup_pane_t1

0x5e77,	// (0x00010fc2) grid_highlight_pane_cp5

0x6520,	// (0x0001166b) cell_large_graphic_colour_popup_pane_g1

0x6528,	// (0x00011673) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a730) cell_large_graphic_colour_popup_pane_g

0x6530,	// (0x0001167b) cell_large_graphic_colour_popup_pane_g2_copy1

0x6539,	// (0x00011684) grid_highlight_pane_cp4

0x6541,	// (0x0001168c) bg_popup_window_pane_cp8_ParamLimits

0x6541,	// (0x0001168c) bg_popup_window_pane_cp8

0x655c,	// (0x000116a7) popup_snote_single_text_window_g1_ParamLimits

0x655c,	// (0x000116a7) popup_snote_single_text_window_g1

0x656e,	// (0x000116b9) popup_snote_single_text_window_t1_ParamLimits

0x656e,	// (0x000116b9) popup_snote_single_text_window_t1

0x6581,	// (0x000116cc) popup_snote_single_text_window_t2_ParamLimits

0x6581,	// (0x000116cc) popup_snote_single_text_window_t2

0x6594,	// (0x000116df) popup_snote_single_text_window_t3_ParamLimits

0x6594,	// (0x000116df) popup_snote_single_text_window_t3

0x65cd,	// (0x00011718) popup_snote_single_text_window_t4_ParamLimits

0x65cd,	// (0x00011718) popup_snote_single_text_window_t4

0x6601,	// (0x0001174c) popup_snote_single_text_window_t5_ParamLimits

0x6601,	// (0x0001174c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a735) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a735) popup_snote_single_text_window_t

0x6630,	// (0x0001177b) bg_popup_window_pane_cp9_ParamLimits

0x6630,	// (0x0001177b) bg_popup_window_pane_cp9

0x655c,	// (0x000116a7) popup_snote_single_graphic_window_g1_ParamLimits

0x655c,	// (0x000116a7) popup_snote_single_graphic_window_g1

0x663e,	// (0x00011789) popup_snote_single_graphic_window_g2_ParamLimits

0x663e,	// (0x00011789) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a740) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a740) popup_snote_single_graphic_window_g

0x664a,	// (0x00011795) popup_snote_single_graphic_window_t1_ParamLimits

0x664a,	// (0x00011795) popup_snote_single_graphic_window_t1

0x665d,	// (0x000117a8) popup_snote_single_graphic_window_t2_ParamLimits

0x665d,	// (0x000117a8) popup_snote_single_graphic_window_t2

0x6670,	// (0x000117bb) popup_snote_single_graphic_window_t3_ParamLimits

0x6670,	// (0x000117bb) popup_snote_single_graphic_window_t3

0x66a9,	// (0x000117f4) popup_snote_single_graphic_window_t4_ParamLimits

0x66a9,	// (0x000117f4) popup_snote_single_graphic_window_t4

0x66dd,	// (0x00011828) popup_snote_single_graphic_window_t5_ParamLimits

0x66dd,	// (0x00011828) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a745) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a745) popup_snote_single_graphic_window_t

0xa278,	// (0x000153c3) grid_graphic_popup_pane_ParamLimits

0xa278,	// (0x000153c3) grid_graphic_popup_pane

0xa2a0,	// (0x000153eb) listscroll_popup_graphic_pane_g1_ParamLimits

0xa2a0,	// (0x000153eb) listscroll_popup_graphic_pane_g1

0x1f9f,	// (0x0000d0ea) listscroll_popup_graphic_pane_g2_ParamLimits

0x1f9f,	// (0x0000d0ea) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001ab2a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001ab2a) listscroll_popup_graphic_pane_g

0xa2c8,	// (0x00015413) scroll_pane_cp5

0x1f63,	// (0x0000d0ae) cell_graphic_popup_pane_ParamLimits

0x1f63,	// (0x0000d0ae) cell_graphic_popup_pane

0xa202,	// (0x0001534d) cell_graphic_popup_pane_g1

0xa20a,	// (0x00015355) cell_graphic_popup_pane_g2

0x6530,	// (0x0001167b) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001ab23) cell_graphic_popup_pane_g

0xa213,	// (0x0001535e) cell_graphic_popup_pane_t2

0x6539,	// (0x00011684) grid_highlight_pane_cp3

0x671e,	// (0x00011869) list_gen_pane_ParamLimits

0x671e,	// (0x00011869) list_gen_pane

0x6750,	// (0x0001189b) scroll_pane

0x1f1e,	// (0x0000d069) bg_list_pane_g1_ParamLimits

0x1f1e,	// (0x0000d069) bg_list_pane_g1

0xa17f,	// (0x000152ca) bg_list_pane_g2_ParamLimits

0xa17f,	// (0x000152ca) bg_list_pane_g2

0xa192,	// (0x000152dd) bg_list_pane_g3_ParamLimits

0xa192,	// (0x000152dd) bg_list_pane_g3

0xa1a4,	// (0x000152ef) bg_list_pane_g4_ParamLimits

0xa1a4,	// (0x000152ef) bg_list_pane_g4

0x1f39,	// (0x0000d084) bg_list_pane_g5_ParamLimits

0x1f39,	// (0x0000d084) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001ab18) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001ab18) bg_list_pane_g

0x1ec4,	// (0x0000d00f) list_double2_graphic_large_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double2_graphic_large_graphic_pane

0x1ec4,	// (0x0000d00f) list_double2_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double2_graphic_pane

0x1ec4,	// (0x0000d00f) list_double2_large_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double2_large_graphic_pane

0x1ec4,	// (0x0000d00f) list_double2_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double2_pane

0x1ec4,	// (0x0000d00f) list_double_graphic_heading_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_graphic_heading_pane

0x1ec4,	// (0x0000d00f) list_double_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_graphic_pane

0x1ec4,	// (0x0000d00f) list_double_heading_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_heading_pane

0x1ec4,	// (0x0000d00f) list_double_large_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_large_graphic_pane

0x1ec4,	// (0x0000d00f) list_double_number_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_number_pane

0x1ec4,	// (0x0000d00f) list_double_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_pane

0x1ec4,	// (0x0000d00f) list_double_time_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_double_time_pane

0x1ec4,	// (0x0000d00f) list_setting_number_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_setting_number_pane

0x1ec4,	// (0x0000d00f) list_setting_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_setting_pane

0x1ed6,	// (0x0000d021) list_single_2graphic_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_2graphic_pane

0x1ed6,	// (0x0000d021) list_single_graphic_heading_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_graphic_heading_pane

0x1ed6,	// (0x0000d021) list_single_graphic_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_graphic_pane

0x1ed6,	// (0x0000d021) list_single_heading_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_heading_pane

0x1ec4,	// (0x0000d00f) list_single_large_graphic_pane_ParamLimits

0x1ec4,	// (0x0000d00f) list_single_large_graphic_pane

0x1ed6,	// (0x0000d021) list_single_number_heading_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_number_heading_pane

0x1ed6,	// (0x0000d021) list_single_number_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_number_pane

0x1ed6,	// (0x0000d021) list_single_pane_ParamLimits

0x1ed6,	// (0x0000d021) list_single_pane

0x5e77,	// (0x00010fc2) list_highlight_pane_cp1

0x8960,	// (0x00013aab) list_single_pane_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_pane_g1

0x896c,	// (0x00013ab7) list_single_pane_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_pane_g

0xa8ec,	// (0x00015a37) list_single_pane_t1_ParamLimits

0xa8ec,	// (0x00015a37) list_single_pane_t1

0x8960,	// (0x00013aab) list_single_number_pane_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_number_pane_g1

0x896c,	// (0x00013ab7) list_single_number_pane_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_number_pane_g

0x8978,	// (0x00013ac3) list_single_number_pane_t1_ParamLimits

0x8978,	// (0x00013ac3) list_single_number_pane_t1

0x1d06,	// (0x0000ce51) list_single_number_pane_t2_ParamLimits

0x1d06,	// (0x0000ce51) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001aad9) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001aad9) list_single_number_pane_t

0xbd34,	// (0x00016e7f) list_single_graphic_pane_g1_ParamLimits

0xbd34,	// (0x00016e7f) list_single_graphic_pane_g1

0x8960,	// (0x00013aab) list_single_graphic_pane_g2_ParamLimits

0x8960,	// (0x00013aab) list_single_graphic_pane_g2

0x896c,	// (0x00013ab7) list_single_graphic_pane_g3_ParamLimits

0x896c,	// (0x00013ab7) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a750) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a750) list_single_graphic_pane_g

0x03cf,	// (0x0000b51a) list_single_graphic_pane_t1_ParamLimits

0x03cf,	// (0x0000b51a) list_single_graphic_pane_t1

0x8960,	// (0x00013aab) list_single_heading_pane_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_heading_pane_g1

0x896c,	// (0x00013ab7) list_single_heading_pane_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_heading_pane_g

0x03e5,	// (0x0000b530) list_single_heading_pane_t1_ParamLimits

0x03e5,	// (0x0000b530) list_single_heading_pane_t1

0x03fb,	// (0x0000b546) list_single_heading_pane_t2_ParamLimits

0x03fb,	// (0x0000b546) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a75c) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a75c) list_single_heading_pane_t

0x8960,	// (0x00013aab) list_single_number_heading_pane_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_number_heading_pane_g1

0x896c,	// (0x00013ab7) list_single_number_heading_pane_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_number_heading_pane_g

0x03e5,	// (0x0000b530) list_single_number_heading_pane_t1_ParamLimits

0x03e5,	// (0x0000b530) list_single_number_heading_pane_t1

0x040d,	// (0x0000b558) list_single_number_heading_pane_t2_ParamLimits

0x040d,	// (0x0000b558) list_single_number_heading_pane_t2

0xa8c6,	// (0x00015a11) list_single_number_heading_pane_t3_ParamLimits

0xa8c6,	// (0x00015a11) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a761) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a761) list_single_number_heading_pane_t

0x8954,	// (0x00013a9f) list_single_graphic_heading_pane_g1_ParamLimits

0x8954,	// (0x00013a9f) list_single_graphic_heading_pane_g1

0x041f,	// (0x0000b56a) list_single_graphic_heading_pane_g4_ParamLimits

0x041f,	// (0x0000b56a) list_single_graphic_heading_pane_g4

0x896c,	// (0x00013ab7) list_single_graphic_heading_pane_g5_ParamLimits

0x896c,	// (0x00013ab7) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a768) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a768) list_single_graphic_heading_pane_g

0x03e5,	// (0x0000b530) list_single_graphic_heading_pane_t1_ParamLimits

0x03e5,	// (0x0000b530) list_single_graphic_heading_pane_t1

0x0430,	// (0x0000b57b) list_single_graphic_heading_pane_t2_ParamLimits

0x0430,	// (0x0000b57b) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a76f) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a76f) list_single_graphic_heading_pane_t

0xa902,	// (0x00015a4d) list_single_large_graphic_pane_g1_ParamLimits

0xa902,	// (0x00015a4d) list_single_large_graphic_pane_g1

0xa90e,	// (0x00015a59) list_single_large_graphic_pane_g2_ParamLimits

0xa90e,	// (0x00015a59) list_single_large_graphic_pane_g2

0xa91a,	// (0x00015a65) list_single_large_graphic_pane_g3_ParamLimits

0xa91a,	// (0x00015a65) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a774) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a774) list_single_large_graphic_pane_g

0x907b,	// (0x000141c6) wait_border_pane_g2_copy1

0x0442,	// (0x0000b58d) list_single_large_graphic_pane_g4_cp2

0xa926,	// (0x00015a71) list_single_large_graphic_pane_t1_ParamLimits

0xa926,	// (0x00015a71) list_single_large_graphic_pane_t1

0x79ac,	// (0x00012af7) list_double_pane_g1_ParamLimits

0x79ac,	// (0x00012af7) list_double_pane_g1

0x044a,	// (0x0000b595) list_double_pane_g2_ParamLimits

0x044a,	// (0x0000b595) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a77b) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a77b) list_double_pane_g

0x0456,	// (0x0000b5a1) list_double_pane_t1_ParamLimits

0x0456,	// (0x0000b5a1) list_double_pane_t1

0x046c,	// (0x0000b5b7) list_double_pane_t2_ParamLimits

0x046c,	// (0x0000b5b7) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a780) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a780) list_double_pane_t

0x047e,	// (0x0000b5c9) list_double2_pane_g1_ParamLimits

0x047e,	// (0x0000b5c9) list_double2_pane_g1

0x6aa5,	// (0x00011bf0) list_double2_pane_g2_ParamLimits

0x6aa5,	// (0x00011bf0) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a785) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a785) list_double2_pane_g

0x048f,	// (0x0000b5da) list_double2_pane_t1_ParamLimits

0x048f,	// (0x0000b5da) list_double2_pane_t1

0x04a5,	// (0x0000b5f0) list_double2_pane_t2_ParamLimits

0x04a5,	// (0x0000b5f0) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a78a) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a78a) list_double2_pane_t

0x79ac,	// (0x00012af7) list_double_number_pane_g1_ParamLimits

0x79ac,	// (0x00012af7) list_double_number_pane_g1

0x044a,	// (0x0000b595) list_double_number_pane_g2_ParamLimits

0x044a,	// (0x0000b595) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a77b) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a77b) list_double_number_pane_g

0x04b7,	// (0x0000b602) list_double_number_pane_t1_ParamLimits

0x04b7,	// (0x0000b602) list_double_number_pane_t1

0x04c9,	// (0x0000b614) list_double_number_pane_t2_ParamLimits

0x04c9,	// (0x0000b614) list_double_number_pane_t2

0x04df,	// (0x0000b62a) list_double_number_pane_t3_ParamLimits

0x04df,	// (0x0000b62a) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a78f) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a78f) list_double_number_pane_t

0x04f1,	// (0x0000b63c) list_double_graphic_pane_g1_ParamLimits

0x04f1,	// (0x0000b63c) list_double_graphic_pane_g1

0x04fd,	// (0x0000b648) list_double_graphic_pane_g2_ParamLimits

0x04fd,	// (0x0000b648) list_double_graphic_pane_g2

0x050c,	// (0x0000b657) list_double_graphic_pane_g3_ParamLimits

0x050c,	// (0x0000b657) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a796) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a796) list_double_graphic_pane_g

0x0524,	// (0x0000b66f) list_double_graphic_pane_t1_ParamLimits

0x0524,	// (0x0000b66f) list_double_graphic_pane_t1

0x053a,	// (0x0000b685) list_double_graphic_pane_t2_ParamLimits

0x053a,	// (0x0000b685) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a79f) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a79f) list_double_graphic_pane_t

0x054c,	// (0x0000b697) list_double2_graphic_pane_g1_ParamLimits

0x054c,	// (0x0000b697) list_double2_graphic_pane_g1

0x0558,	// (0x0000b6a3) list_double2_graphic_pane_g2_ParamLimits

0x0558,	// (0x0000b6a3) list_double2_graphic_pane_g2

0x6aa5,	// (0x00011bf0) list_double2_graphic_pane_g3_ParamLimits

0x6aa5,	// (0x00011bf0) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a7a4) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a7a4) list_double2_graphic_pane_g

0x0564,	// (0x0000b6af) list_double2_graphic_pane_t1_ParamLimits

0x0564,	// (0x0000b6af) list_double2_graphic_pane_t1

0x057a,	// (0x0000b6c5) list_double2_graphic_pane_t2_ParamLimits

0x057a,	// (0x0000b6c5) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a7ab) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a7ab) list_double2_graphic_pane_t

0x058c,	// (0x0000b6d7) list_double_large_graphic_pane_g1_ParamLimits

0x058c,	// (0x0000b6d7) list_double_large_graphic_pane_g1

0x05b7,	// (0x0000b702) list_double_large_graphic_pane_g2_ParamLimits

0x05b7,	// (0x0000b702) list_double_large_graphic_pane_g2

0x044a,	// (0x0000b595) list_double_large_graphic_pane_g3_ParamLimits

0x044a,	// (0x0000b595) list_double_large_graphic_pane_g3

0x05c8,	// (0x0000b713) list_double_large_graphic_pane_g4_ParamLimits

0x05c8,	// (0x0000b713) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a7b0) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a7b0) list_double_large_graphic_pane_g

0x05da,	// (0x0000b725) list_double_large_graphic_pane_t1_ParamLimits

0x05da,	// (0x0000b725) list_double_large_graphic_pane_t1

0x05f3,	// (0x0000b73e) list_double_large_graphic_pane_t2_ParamLimits

0x05f3,	// (0x0000b73e) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a7bb) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a7bb) list_double_large_graphic_pane_t

0x0605,	// (0x0000b750) list_double2_large_graphic_pane_g1_ParamLimits

0x0605,	// (0x0000b750) list_double2_large_graphic_pane_g1

0x047e,	// (0x0000b5c9) list_double2_large_graphic_pane_g2_ParamLimits

0x047e,	// (0x0000b5c9) list_double2_large_graphic_pane_g2

0x6aa5,	// (0x00011bf0) list_double2_large_graphic_pane_g3_ParamLimits

0x6aa5,	// (0x00011bf0) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a7c0) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a7c0) list_double2_large_graphic_pane_g

0x0611,	// (0x0000b75c) list_double2_large_graphic_pane_t1_ParamLimits

0x0611,	// (0x0000b75c) list_double2_large_graphic_pane_t1

0x0627,	// (0x0000b772) list_double2_large_graphic_pane_t2_ParamLimits

0x0627,	// (0x0000b772) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a7c7) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a7c7) list_double2_large_graphic_pane_t

0x0639,	// (0x0000b784) list_double_heading_pane_g1_ParamLimits

0x0639,	// (0x0000b784) list_double_heading_pane_g1

0x064a,	// (0x0000b795) list_double_heading_pane_g2_ParamLimits

0x064a,	// (0x0000b795) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a7cc) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a7cc) list_double_heading_pane_g

0x0656,	// (0x0000b7a1) list_double_heading_pane_t1_ParamLimits

0x0656,	// (0x0000b7a1) list_double_heading_pane_t1

0x066c,	// (0x0000b7b7) list_double_heading_pane_t2_ParamLimits

0x066c,	// (0x0000b7b7) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a7d1) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a7d1) list_double_heading_pane_t

0x693a,	// (0x00011a85) list_double_graphic_heading_pane_g1_ParamLimits

0x693a,	// (0x00011a85) list_double_graphic_heading_pane_g1

0x0639,	// (0x0000b784) list_double_graphic_heading_pane_g2_ParamLimits

0x0639,	// (0x0000b784) list_double_graphic_heading_pane_g2

0x064a,	// (0x0000b795) list_double_graphic_heading_pane_g3_ParamLimits

0x064a,	// (0x0000b795) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a7d6) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a7d6) list_double_graphic_heading_pane_g

0x067e,	// (0x0000b7c9) list_double_graphic_heading_pane_t1_ParamLimits

0x067e,	// (0x0000b7c9) list_double_graphic_heading_pane_t1

0x0694,	// (0x0000b7df) list_double_graphic_heading_pane_t2_ParamLimits

0x0694,	// (0x0000b7df) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a7dd) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a7dd) list_double_graphic_heading_pane_t

0x05b7,	// (0x0000b702) list_double_time_pane_g1_ParamLimits

0x05b7,	// (0x0000b702) list_double_time_pane_g1

0x044a,	// (0x0000b595) list_double_time_pane_g2_ParamLimits

0x044a,	// (0x0000b595) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a7e2) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a7e2) list_double_time_pane_g

0x06a6,	// (0x0000b7f1) list_double_time_pane_t1_ParamLimits

0x06a6,	// (0x0000b7f1) list_double_time_pane_t1

0x06bc,	// (0x0000b807) list_double_time_pane_t2_ParamLimits

0x06bc,	// (0x0000b807) list_double_time_pane_t2

0x06ce,	// (0x0000b819) list_double_time_pane_t3_ParamLimits

0x06ce,	// (0x0000b819) list_double_time_pane_t3

0x06e0,	// (0x0000b82b) list_double_time_pane_t4_ParamLimits

0x06e0,	// (0x0000b82b) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a7e7) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a7e7) list_double_time_pane_t

0x0558,	// (0x0000b6a3) list_setting_pane_g1_ParamLimits

0x0558,	// (0x0000b6a3) list_setting_pane_g1

0x6aa5,	// (0x00011bf0) list_setting_pane_g2_ParamLimits

0x6aa5,	// (0x00011bf0) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a7f0) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a7f0) list_setting_pane_g

0x06f2,	// (0x0000b83d) list_setting_pane_t1_ParamLimits

0x06f2,	// (0x0000b83d) list_setting_pane_t1

0x0709,	// (0x0000b854) list_setting_pane_t2_ParamLimits

0x0709,	// (0x0000b854) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a7f5) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a7f5) list_setting_pane_t

0x0748,	// (0x0000b893) set_value_pane_cp_ParamLimits

0x0748,	// (0x0000b893) set_value_pane_cp

0x0558,	// (0x0000b6a3) list_setting_number_pane_g1_ParamLimits

0x0558,	// (0x0000b6a3) list_setting_number_pane_g1

0x6aa5,	// (0x00011bf0) list_setting_number_pane_g2_ParamLimits

0x6aa5,	// (0x00011bf0) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a7f0) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a7f0) list_setting_number_pane_g

0x0754,	// (0x0000b89f) list_setting_number_pane_t1_ParamLimits

0x0754,	// (0x0000b89f) list_setting_number_pane_t1

0x0768,	// (0x0000b8b3) list_setting_number_pane_t2_ParamLimits

0x0768,	// (0x0000b8b3) list_setting_number_pane_t2

0x077f,	// (0x0000b8ca) list_setting_number_pane_t3_ParamLimits

0x077f,	// (0x0000b8ca) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a7fc) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a7fc) list_setting_number_pane_t

0x0748,	// (0x0000b893) set_value_pane_ParamLimits

0x0748,	// (0x0000b893) set_value_pane

0x6c05,	// (0x00011d50) bg_set_opt_pane_ParamLimits

0x6c05,	// (0x00011d50) bg_set_opt_pane

0x6c26,	// (0x00011d71) set_value_pane_t1

0x6c34,	// (0x00011d7f) slider_set_pane_cp3

0x6c3d,	// (0x00011d88) volume_small_pane_cp

0x6c46,	// (0x00011d91) list_form_gen_pane

0x6c4f,	// (0x00011d9a) scroll_pane_cp8

0x07c2,	// (0x0000b90d) form_field_data_pane_ParamLimits

0x07c2,	// (0x0000b90d) form_field_data_pane

0x07d9,	// (0x0000b924) form_field_data_wide_pane_ParamLimits

0x07d9,	// (0x0000b924) form_field_data_wide_pane

0x07f9,	// (0x0000b944) form_field_popup_pane_ParamLimits

0x07f9,	// (0x0000b944) form_field_popup_pane

0x0811,	// (0x0000b95c) form_field_popup_wide_pane_ParamLimits

0x0811,	// (0x0000b95c) form_field_popup_wide_pane

0x6cea,	// (0x00011e35) form_field_slider_pane_ParamLimits

0x6cea,	// (0x00011e35) form_field_slider_pane

0x6cfd,	// (0x00011e48) form_field_slider_wide_pane_ParamLimits

0x6cfd,	// (0x00011e48) form_field_slider_wide_pane

0x6d10,	// (0x00011e5b) data_form_pane

0x0832,	// (0x0000b97d) form_field_data_pane_t1

0x6d3e,	// (0x00011e89) input_focus_pane

0x6d4c,	// (0x00011e97) data_form_wide_pane

0x6d84,	// (0x00011ecf) form_field_data_wide_pane_t1

0x654e,	// (0x00011699) input_focus_pane_cp6

0x084c,	// (0x0000b997) form_field_popup_pane_t1

0x6d3e,	// (0x00011e89) input_focus_pane_cp7

0x6dbe,	// (0x00011f09) list_form_pane

0x6dd2,	// (0x00011f1d) form_field_popup_wide_pane_t1

0x6d3e,	// (0x00011e89) input_focus_pane_cp8

0x6de7,	// (0x00011f32) list_form_wide_pane

0x086e,	// (0x0000b9b9) form_field_slider_pane_t1_ParamLimits

0x086e,	// (0x0000b9b9) form_field_slider_pane_t1

0x0886,	// (0x0000b9d1) form_field_slider_pane_t2_ParamLimits

0x0886,	// (0x0000b9d1) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a80c) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a80c) form_field_slider_pane_t

0x61ec,	// (0x00011337) input_focus_pane_cp9_ParamLimits

0x61ec,	// (0x00011337) input_focus_pane_cp9

0x089b,	// (0x0000b9e6) slider_cont_pane_ParamLimits

0x089b,	// (0x0000b9e6) slider_cont_pane

0x6e36,	// (0x00011f81) form_field_slider_wide_pane_t1_ParamLimits

0x6e36,	// (0x00011f81) form_field_slider_wide_pane_t1

0x6e48,	// (0x00011f93) form_field_slider_wide_pane_t2_ParamLimits

0x6e48,	// (0x00011f93) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a811) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a811) form_field_slider_wide_pane_t

0x61ec,	// (0x00011337) input_focus_pane_cp10_ParamLimits

0x61ec,	// (0x00011337) input_focus_pane_cp10

0x08af,	// (0x0000b9fa) slider_cont_pane_cp1_ParamLimits

0x08af,	// (0x0000b9fa) slider_cont_pane_cp1

0x08c3,	// (0x0000ba0e) slider_form_pane_cp

0x6e76,	// (0x00011fc1) input_focus_pane_g1

0x6e7e,	// (0x00011fc9) input_focus_pane_g2

0x6e86,	// (0x00011fd1) input_focus_pane_g3

0x6e8e,	// (0x00011fd9) input_focus_pane_g4

0x6e96,	// (0x00011fe1) input_focus_pane_g5

0x6e9e,	// (0x00011fe9) input_focus_pane_g6

0x6ea6,	// (0x00011ff1) input_focus_pane_g7

0x6eae,	// (0x00011ff9) input_focus_pane_g8

0x6eb6,	// (0x00012001) input_focus_pane_g9

0x5e6d,	// (0x00010fb8) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a816) input_focus_pane_g

0x9084,	// (0x000141cf) wait_border_pane_g3_copy1

0x08cb,	// (0x0000ba16) data_form_pane_t1

0x5e6d,	// (0x00010fb8) wait_anim_pane_g1_copy1

0x1e99,	// (0x0000cfe4) data_form_wide_pane_t1

0x08e5,	// (0x0000ba30) list_form_graphic_pane_cp_ParamLimits

0x08e5,	// (0x0000ba30) list_form_graphic_pane_cp

0x9fe8,	// (0x00015133) slider_form_pane_g1

0x9ff1,	// (0x0001513c) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001ab09) slider_form_pane_g

0x08f6,	// (0x0000ba41) list_form_graphic_pane_ParamLimits

0x08f6,	// (0x0000ba41) list_form_graphic_pane

0x6f0e,	// (0x00012059) list_form_graphic_pane_g1

0x6f16,	// (0x00012061) list_form_graphic_pane_t1_ParamLimits

0x6f16,	// (0x00012061) list_form_graphic_pane_t1

0x5f57,	// (0x000110a2) list_highlight_pane_cp5_ParamLimits

0x5f57,	// (0x000110a2) list_highlight_pane_cp5

0x0908,	// (0x0000ba53) find_pane_g1

0x6f34,	// (0x0001207f) input_find_pane

0x0911,	// (0x0000ba5c) input_find_pane_g1_ParamLimits

0x0911,	// (0x0000ba5c) input_find_pane_g1

0x091d,	// (0x0000ba68) input_find_pane_t1_ParamLimits

0x091d,	// (0x0000ba68) input_find_pane_t1

0x0932,	// (0x0000ba7d) input_find_pane_t2_ParamLimits

0x0932,	// (0x0000ba7d) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a82b) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a82b) input_find_pane_t

0x6f73,	// (0x000120be) input_focus_pane_cp5_ParamLimits

0x6f73,	// (0x000120be) input_focus_pane_cp5

0x0953,	// (0x0000ba9e) bg_popup_window_pane_cp2_ParamLimits

0x0953,	// (0x0000ba9e) bg_popup_window_pane_cp2

0x0960,	// (0x0000baab) listscroll_menu_pane_ParamLimits

0x0960,	// (0x0000baab) listscroll_menu_pane

0x096c,	// (0x0000bab7) popup_submenu_window_ParamLimits

0x096c,	// (0x0000bab7) popup_submenu_window

0x6fd0,	// (0x0001211b) find_popup_pane_g1

0x6fd8,	// (0x00012123) input_popup_find_pane_cp

0x6f73,	// (0x000120be) input_focus_pane_cp4_ParamLimits

0x6f73,	// (0x000120be) input_focus_pane_cp4

0x6fee,	// (0x00012139) input_popup_find_pane_t1_ParamLimits

0x6fee,	// (0x00012139) input_popup_find_pane_t1

0x5e77,	// (0x00010fc2) bg_popup_sub_pane_cp

0x701c,	// (0x00012167) listscroll_popup_sub_pane

0x7024,	// (0x0001216f) list_submenu_pane_ParamLimits

0x7024,	// (0x0001216f) list_submenu_pane

0x7035,	// (0x00012180) scroll_pane_cp4

0x703d,	// (0x00012188) list_single_popup_submenu_pane_ParamLimits

0x703d,	// (0x00012188) list_single_popup_submenu_pane

0x7051,	// (0x0001219c) list_single_popup_submenu_pane_g1

0x7059,	// (0x000121a4) list_single_popup_submenu_pane_t1_ParamLimits

0x7059,	// (0x000121a4) list_single_popup_submenu_pane_t1

0x61ec,	// (0x00011337) bg_active_tab_pane_cp1_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp1

0x09a4,	// (0x0000baef) tabs_2_active_pane_g1

0x09ac,	// (0x0000baf7) tabs_2_active_pane_t1

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp1_ParamLimits

0x61ec,	// (0x00011337) bg_passive_tab_pane_cp1

0x09a4,	// (0x0000baef) tabs_2_passive_pane_g1

0x09ac,	// (0x0000baf7) tabs_2_passive_pane_t1

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp4

0x09be,	// (0x0000bb09) tabs_2_long_active_pane_t1

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp4

0x4d4a,	// (0x0000fe95) list_single_midp_graphic_pane_g4_ParamLimits

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp5

0x09d1,	// (0x0000bb1c) tabs_3_long_active_pane_t1

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp5

0x4d4a,	// (0x0000fe95) list_single_midp_graphic_pane_g4

0x5f57,	// (0x000110a2) bg_popup_window_pane_cp13_ParamLimits

0x5f57,	// (0x000110a2) bg_popup_window_pane_cp13

0x70d0,	// (0x0001221b) listscroll_popup_fast_pane_ParamLimits

0x70d0,	// (0x0001221b) listscroll_popup_fast_pane

0x70df,	// (0x0001222a) grid_popup_fast_pane_ParamLimits

0x70df,	// (0x0001222a) grid_popup_fast_pane

0x70f1,	// (0x0001223c) scroll_pane_cp9_ParamLimits

0x70f1,	// (0x0001223c) scroll_pane_cp9

0xbd9a,	// (0x00016ee5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbd9a,	// (0x00016ee5) list_single_graphic_hl_pane_t1_cp2

0x7115,	// (0x00012260) input_focus_pane_cp20_ParamLimits

0x7115,	// (0x00012260) input_focus_pane_cp20

0x7123,	// (0x0001226e) query_popup_data_pane_t1_ParamLimits

0x7123,	// (0x0001226e) query_popup_data_pane_t1

0x7136,	// (0x00012281) query_popup_data_pane_t2_ParamLimits

0x7136,	// (0x00012281) query_popup_data_pane_t2

0x717c,	// (0x000122c7) query_popup_data_pane_t3_ParamLimits

0x717c,	// (0x000122c7) query_popup_data_pane_t3

0x71bd,	// (0x00012308) query_popup_data_pane_t4_ParamLimits

0x71bd,	// (0x00012308) query_popup_data_pane_t4

0x71f9,	// (0x00012344) query_popup_data_pane_t5_ParamLimits

0x71f9,	// (0x00012344) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a830) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a830) query_popup_data_pane_t

0x6e76,	// (0x00011fc1) bg_set_opt_pane_g1

0x6e7e,	// (0x00011fc9) bg_set_opt_pane_g2

0x6e86,	// (0x00011fd1) bg_set_opt_pane_g3

0x6e8e,	// (0x00011fd9) bg_set_opt_pane_g4

0x6e96,	// (0x00011fe1) bg_set_opt_pane_g5

0x6e9e,	// (0x00011fe9) bg_set_opt_pane_g6

0x6ea6,	// (0x00011ff1) bg_set_opt_pane_g7

0x6eae,	// (0x00011ff9) bg_set_opt_pane_g8

0x6eb6,	// (0x00012001) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a83b) bg_set_opt_pane_g

0x4942,	// (0x0000fa8d) control_top_pane_stacon_ParamLimits

0x4942,	// (0x0000fa8d) control_top_pane_stacon

0x4995,	// (0x0000fae0) signal_pane_stacon_ParamLimits

0x4995,	// (0x0000fae0) signal_pane_stacon

0x7821,	// (0x0001296c) stacon_top_pane_g1_ParamLimits

0x7821,	// (0x0001296c) stacon_top_pane_g1

0x49ba,	// (0x0000fb05) title_pane_stacon_ParamLimits

0x49ba,	// (0x0000fb05) title_pane_stacon

0x49e4,	// (0x0000fb2f) uni_indicator_pane_stacon_ParamLimits

0x49e4,	// (0x0000fb2f) uni_indicator_pane_stacon

0x49f9,	// (0x0000fb44) battery_pane_stacon_ParamLimits

0x49f9,	// (0x0000fb44) battery_pane_stacon

0x4a3d,	// (0x0000fb88) control_bottom_pane_stacon_ParamLimits

0x4a3d,	// (0x0000fb88) control_bottom_pane_stacon

0x4a60,	// (0x0000fbab) navi_pane_stacon_ParamLimits

0x4a60,	// (0x0000fbab) navi_pane_stacon

0x7843,	// (0x0001298e) stacon_bottom_pane_g1_ParamLimits

0x7843,	// (0x0001298e) stacon_bottom_pane_g1

0x46a3,	// (0x0000f7ee) aid_levels_signal_lsc_ParamLimits

0x46a3,	// (0x0000f7ee) aid_levels_signal_lsc

0x46ba,	// (0x0000f805) signal_pane_stacon_g1_ParamLimits

0x46ba,	// (0x0000f805) signal_pane_stacon_g1

0x46ce,	// (0x0000f819) signal_pane_stacon_g2_ParamLimits

0x46ce,	// (0x0000f819) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a84e) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a84e) signal_pane_stacon_g

0x4703,	// (0x0000f84e) title_pane_stacon_t1_ParamLimits

0x4703,	// (0x0000f84e) title_pane_stacon_t1

0x723d,	// (0x00012388) uni_indicator_pane_stacon_g1

0x7247,	// (0x00012392) uni_indicator_pane_stacon_g2

0x7251,	// (0x0001239c) uni_indicator_pane_stacon_g3

0x725b,	// (0x000123a6) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a85a) uni_indicator_pane_stacon_g

0x4728,	// (0x0000f873) control_top_pane_stacon_g1

0x4730,	// (0x0000f87b) control_top_pane_stacon_t1_ParamLimits

0x4730,	// (0x0000f87b) control_top_pane_stacon_t1

0x4767,	// (0x0000f8b2) aid_levels_battery_lsc_ParamLimits

0x4767,	// (0x0000f8b2) aid_levels_battery_lsc

0x477f,	// (0x0000f8ca) battery_pane_stacon_g1_ParamLimits

0x477f,	// (0x0000f8ca) battery_pane_stacon_g1

0x4792,	// (0x0000f8dd) battery_pane_stacon_g2_ParamLimits

0x4792,	// (0x0000f8dd) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a863) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a863) battery_pane_stacon_g

0x47d0,	// (0x0000f91b) navi_icon_pane_stacon

0x47e4,	// (0x0000f92f) navi_navi_pane_stacon

0x47d0,	// (0x0000f91b) navi_text_pane_stacon

0x4728,	// (0x0000f873) control_bottom_pane_stacon_g1

0x47f8,	// (0x0000f943) control_bottom_pane_stacon_t1_ParamLimits

0x47f8,	// (0x0000f943) control_bottom_pane_stacon_t1

0x09e3,	// (0x0000bb2e) grid_app_pane_ParamLimits

0x09e3,	// (0x0000bb2e) grid_app_pane

0x0a1b,	// (0x0000bb66) scroll_pane_cp15_ParamLimits

0x0a1b,	// (0x0000bb66) scroll_pane_cp15

0x0a38,	// (0x0000bb83) cell_app_pane_ParamLimits

0x0a38,	// (0x0000bb83) cell_app_pane

0x0a7d,	// (0x0000bbc8) cell_app_pane_g1_ParamLimits

0x0a7d,	// (0x0000bbc8) cell_app_pane_g1

0x7300,	// (0x0001244b) cell_app_pane_g2_ParamLimits

0x7300,	// (0x0001244b) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a868) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a868) cell_app_pane_g

0x730c,	// (0x00012457) cell_app_pane_t1_ParamLimits

0x730c,	// (0x00012457) cell_app_pane_t1

0x731e,	// (0x00012469) grid_highlight_pane_ParamLimits

0x731e,	// (0x00012469) grid_highlight_pane

0x6e76,	// (0x00011fc1) cell_highlight_pane_g1

0x6e7e,	// (0x00011fc9) cell_highlight_pane_g2

0x6e86,	// (0x00011fd1) cell_highlight_pane_g3

0x6e8e,	// (0x00011fd9) cell_highlight_pane_g4

0x6e96,	// (0x00011fe1) cell_highlight_pane_g5

0x6e9e,	// (0x00011fe9) cell_highlight_pane_g6

0x6ea6,	// (0x00011ff1) cell_highlight_pane_g7

0x6eae,	// (0x00011ff9) cell_highlight_pane_g8

0x6eb6,	// (0x00012001) cell_highlight_pane_g9

0x5e6d,	// (0x00010fb8) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a816) cell_highlight_pane_g

0x732f,	// (0x0001247a) bg_scroll_pane

0x4842,	// (0x0000f98d) scroll_handle_pane

0x7376,	// (0x000124c1) scroll_bg_pane_g1

0x738b,	// (0x000124d6) scroll_bg_pane_g2

0x73a3,	// (0x000124ee) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a86d) scroll_bg_pane_g

0x73b8,	// (0x00012503) scroll_handle_focus_pane_ParamLimits

0x73b8,	// (0x00012503) scroll_handle_focus_pane

0x7376,	// (0x000124c1) scroll_handle_pane_g1

0x73c5,	// (0x00012510) scroll_handle_pane_g2

0x73a3,	// (0x000124ee) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a874) scroll_handle_pane_g

0x6f73,	// (0x000120be) bg_popup_sub_pane_cp21_ParamLimits

0x6f73,	// (0x000120be) bg_popup_sub_pane_cp21

0x73d9,	// (0x00012524) popup_fep_japan_predictive_window_t1_ParamLimits

0x73d9,	// (0x00012524) popup_fep_japan_predictive_window_t1

0x73f3,	// (0x0001253e) popup_fep_japan_predictive_window_t2_ParamLimits

0x73f3,	// (0x0001253e) popup_fep_japan_predictive_window_t2

0x7426,	// (0x00012571) popup_fep_japan_predictive_window_t3_ParamLimits

0x7426,	// (0x00012571) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a87b) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a87b) popup_fep_japan_predictive_window_t

0x5e77,	// (0x00010fc2) bg_popup_sub_pane_cp23

0x745d,	// (0x000125a8) listscroll_japin_cand_pane

0x7465,	// (0x000125b0) popup_fep_japan_candidate_window_t1

0x7473,	// (0x000125be) candidate_pane_ParamLimits

0x7473,	// (0x000125be) candidate_pane

0x7485,	// (0x000125d0) scroll_pane_cp30

0x748d,	// (0x000125d8) list_single_popup_jap_candidate_pane_ParamLimits

0x748d,	// (0x000125d8) list_single_popup_jap_candidate_pane

0x5e77,	// (0x00010fc2) list_highlight_pane_cp30

0x74a2,	// (0x000125ed) list_single_popup_jap_candidate_pane_t1

0x74b1,	// (0x000125fc) level_1_signal

0x74be,	// (0x00012609) level_2_signal

0x74cb,	// (0x00012616) level_3_signal

0x74d8,	// (0x00012623) level_4_signal

0x74e5,	// (0x00012630) level_5_signal

0x74f2,	// (0x0001263d) level_6_signal

0x74ff,	// (0x0001264a) level_7_signal

0x74b1,	// (0x000125fc) level_1_battery

0x74be,	// (0x00012609) level_2_battery

0x74cb,	// (0x00012616) level_3_battery

0x74d8,	// (0x00012623) level_4_battery

0x74e5,	// (0x00012630) level_5_battery

0x74f2,	// (0x0001263d) level_6_battery

0x74ff,	// (0x0001264a) level_7_battery

0x7524,	// (0x0001266f) list_menu_pane_ParamLimits

0x7524,	// (0x0001266f) list_menu_pane

0x7535,	// (0x00012680) scroll_pane_cp25_ParamLimits

0x7535,	// (0x00012680) scroll_pane_cp25

0x754e,	// (0x00012699) list_double2_graphic_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double2_graphic_pane_cp2

0x754e,	// (0x00012699) list_double2_large_graphic_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double2_large_graphic_pane_cp2

0x754e,	// (0x00012699) list_double2_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double2_pane_cp2

0x754e,	// (0x00012699) list_double_graphic_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double_graphic_pane_cp2

0x754e,	// (0x00012699) list_double_large_graphic_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double_large_graphic_pane_cp2

0x754e,	// (0x00012699) list_double_number_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double_number_pane_cp2

0x754e,	// (0x00012699) list_double_pane_cp2_ParamLimits

0x754e,	// (0x00012699) list_double_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_2graphic_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_2graphic_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_graphic_heading_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_graphic_heading_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_graphic_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_graphic_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_heading_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_heading_pane_cp2

0x758b,	// (0x000126d6) list_single_large_graphic_pane_cp2_ParamLimits

0x758b,	// (0x000126d6) list_single_large_graphic_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_number_heading_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_number_heading_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_number_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_number_pane_cp2

0x0ab9,	// (0x0000bc04) list_single_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_pane_cp2

0x75e1,	// (0x0001272c) bg_popup_sub_pane_cp22

0x48f4,	// (0x0000fa3f) popup_side_volume_key_window_g1

0x491e,	// (0x0000fa69) popup_side_volume_key_window_t1

0x493a,	// (0x0000fa85) volume_small_pane_cp1

0x61ec,	// (0x00011337) bg_popup_sub_pane_cp24_ParamLimits

0x61ec,	// (0x00011337) bg_popup_sub_pane_cp24

0x75f7,	// (0x00012742) fep_china_uni_candidate_pane_ParamLimits

0x75f7,	// (0x00012742) fep_china_uni_candidate_pane

0x760b,	// (0x00012756) fep_china_uni_entry_pane

0x761b,	// (0x00012766) popup_fep_china_uni_window_g1

0x7637,	// (0x00012782) fep_china_uni_entry_pane_g1

0x763f,	// (0x0001278a) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a8a8) fep_china_uni_entry_pane_g

0x7647,	// (0x00012792) fep_entry_item_pane

0x7651,	// (0x0001279c) fep_candidate_item_pane

0x7659,	// (0x000127a4) fep_china_uni_candidate_pane_g1

0x7661,	// (0x000127ac) fep_china_uni_candidate_pane_g2

0x7669,	// (0x000127b4) fep_china_uni_candidate_pane_g3

0x7671,	// (0x000127bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a8ad) fep_china_uni_candidate_pane_g

0x5e6d,	// (0x00010fb8) fep_entry_item_pane_g1

0x7679,	// (0x000127c4) fep_entry_item_pane_t1_ParamLimits

0x7679,	// (0x000127c4) fep_entry_item_pane_t1

0x768f,	// (0x000127da) fep_candidate_item_pane_t1_ParamLimits

0x768f,	// (0x000127da) fep_candidate_item_pane_t1

0x76a4,	// (0x000127ef) fep_candidate_item_pane_t2_ParamLimits

0x76a4,	// (0x000127ef) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a8b6) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a8b6) fep_candidate_item_pane_t

0x5f57,	// (0x000110a2) list_highlight_pane_cp31_ParamLimits

0x5f57,	// (0x000110a2) list_highlight_pane_cp31

0x76b6,	// (0x00012801) level_1_signal_lsc

0x76bf,	// (0x0001280a) level_2_signal_lsc

0x76c8,	// (0x00012813) level_3_signal_lsc

0x76d1,	// (0x0001281c) level_4_signal_lsc

0x76da,	// (0x00012825) level_5_signal_lsc

0x76e3,	// (0x0001282e) level_6_signal_lsc

0x76ec,	// (0x00012837) level_7_signal_lsc

0x76ec,	// (0x00012837) level_1_battery_lsc

0x76f5,	// (0x00012840) level_2_battery_lsc

0x76fe,	// (0x00012849) level_3_battery_lsc

0x7707,	// (0x00012852) level_4_battery_lsc

0x7710,	// (0x0001285b) level_5_battery_lsc

0x7719,	// (0x00012864) level_6_battery_lsc

0x76b6,	// (0x00012801) level_7_battery_lsc

0x7722,	// (0x0001286d) scroll_handle_focus_pane_g1

0x772b,	// (0x00012876) scroll_handle_focus_pane_g2

0x7734,	// (0x0001287f) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a8bb) scroll_handle_focus_pane_g

0x0b19,	// (0x0000bc64) list_single_2graphic_pane_g1_ParamLimits

0x0b19,	// (0x0000bc64) list_single_2graphic_pane_g1

0x041f,	// (0x0000b56a) list_single_2graphic_pane_g2_ParamLimits

0x041f,	// (0x0000b56a) list_single_2graphic_pane_g2

0x896c,	// (0x00013ab7) list_single_2graphic_pane_g3_ParamLimits

0x896c,	// (0x00013ab7) list_single_2graphic_pane_g3

0x0b25,	// (0x0000bc70) list_single_2graphic_pane_g4_ParamLimits

0x0b25,	// (0x0000bc70) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a8c2) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a8c2) list_single_2graphic_pane_g

0x0b31,	// (0x0000bc7c) list_single_2graphic_pane_t1_ParamLimits

0x0b31,	// (0x0000bc7c) list_single_2graphic_pane_t1

0x0b5f,	// (0x0000bcaa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0b5f,	// (0x0000bcaa) list_double2_graphic_large_graphic_pane_g1

0x047e,	// (0x0000b5c9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x047e,	// (0x0000b5c9) list_double2_graphic_large_graphic_pane_g2

0x6aa5,	// (0x00011bf0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6aa5,	// (0x00011bf0) list_double2_graphic_large_graphic_pane_g3

0x0b71,	// (0x0000bcbc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0b71,	// (0x0000bcbc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a8cb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a8cb) list_double2_graphic_large_graphic_pane_g

0x0b7d,	// (0x0000bcc8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0b7d,	// (0x0000bcc8) list_double2_graphic_large_graphic_pane_t1

0x0b93,	// (0x0000bcde) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0b93,	// (0x0000bcde) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a8d4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a8d4) list_double2_graphic_large_graphic_pane_t

0x790b,	// (0x00012a56) popup_fast_swap_window_ParamLimits

0x790b,	// (0x00012a56) popup_fast_swap_window

0x7927,	// (0x00012a72) popup_side_volume_key_window

0x7943,	// (0x00012a8e) stacon_top_pane

0x794d,	// (0x00012a98) status_pane_ParamLimits

0x794d,	// (0x00012a98) status_pane

0x7943,	// (0x00012a8e) status_small_pane

0x5e77,	// (0x00010fc2) control_pane

0x5e77,	// (0x00010fc2) stacon_bottom_pane

0x6c4f,	// (0x00011d9a) scroll_pane_cp121

0x6c46,	// (0x00011d91) set_content_pane

0x77e7,	// (0x00012932) bg_active_tab_pane_g1_cp1

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp1

0x77f0,	// (0x0001293b) bg_active_tab_pane_g3_cp1

0x77e7,	// (0x00012932) bg_passive_tab_pane_g1_cp1

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp1

0x77f0,	// (0x0001293b) bg_passive_tab_pane_g3_cp1

0x0bae,	// (0x0000bcf9) bg_active_tab_pane_g1_cp2

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp2

0x0ba5,	// (0x0000bcf0) bg_active_tab_pane_g3_cp2

0x0bae,	// (0x0000bcf9) bg_passive_tab_pane_g1_cp2

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp2

0x0ba5,	// (0x0000bcf0) bg_passive_tab_pane_g3_cp2

0x0bc0,	// (0x0000bd0b) bg_active_tab_pane_g1_cp3

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp3

0x0bb7,	// (0x0000bd02) bg_active_tab_pane_g3_cp3

0x0bc0,	// (0x0000bd0b) bg_passive_tab_pane_g1_cp3

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp3

0x0bb7,	// (0x0000bd02) bg_passive_tab_pane_g3_cp3

0x0bd2,	// (0x0000bd1d) bg_active_tab_pane_g1_cp4

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp4

0x0bc9,	// (0x0000bd14) bg_active_tab_pane_g3_cp4

0x0bd2,	// (0x0000bd1d) bg_passive_tab_pane_g1_cp4

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp4

0x0bc9,	// (0x0000bd14) bg_passive_tab_pane_g3_cp4

0x785f,	// (0x000129aa) bg_active_tab_pane_g1_cp5

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp5

0x7868,	// (0x000129b3) bg_active_tab_pane_g3_cp5

0x785f,	// (0x000129aa) bg_passive_tab_pane_g1_cp5

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp5

0x7868,	// (0x000129b3) bg_passive_tab_pane_g3_cp5

0x0bdb,	// (0x0000bd26) list_set_graphic_pane_ParamLimits

0x0bdb,	// (0x0000bd26) list_set_graphic_pane

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp4

0x0bed,	// (0x0000bd38) list_set_graphic_pane_g1_ParamLimits

0x0bed,	// (0x0000bd38) list_set_graphic_pane_g1

0x0bf9,	// (0x0000bd44) list_set_graphic_pane_g2_ParamLimits

0x0bf9,	// (0x0000bd44) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a8d9) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a8d9) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0001ac3f) volume_small_pane_cp_g

0x78be,	// (0x00012a09) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x78be,	// (0x00012a09) list_double2_large_graphic_pane_g1_cp2

0x78ca,	// (0x00012a15) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x78ca,	// (0x00012a15) list_double2_large_graphic_pane_g2_cp2

0x78db,	// (0x00012a26) list_double2_large_graphic_pane_g3_cp2

0x78e3,	// (0x00012a2e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x78e3,	// (0x00012a2e) list_double2_large_graphic_pane_t1_cp2

0x78f9,	// (0x00012a44) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x78f9,	// (0x00012a44) list_double2_large_graphic_pane_t2_cp2

0x9b5d,	// (0x00014ca8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9b5d,	// (0x00014ca8) list_double_large_graphic_pane_g1_cp2

0x9b6e,	// (0x00014cb9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9b6e,	// (0x00014cb9) list_double_large_graphic_pane_g2_cp2

0x7a69,	// (0x00012bb4) list_double_large_graphic_pane_g3_cp2

0x9b7f,	// (0x00014cca) list_double_large_graphic_pane_g4_cp

0x9b87,	// (0x00014cd2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9b87,	// (0x00014cd2) list_double_large_graphic_pane_t1_cp2

0x9b9e,	// (0x00014ce9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9b9e,	// (0x00014ce9) list_double_large_graphic_pane_t2_cp2

0x795b,	// (0x00012aa6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x795b,	// (0x00012aa6) list_double2_graphic_pane_g1_cp2

0x7969,	// (0x00012ab4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7969,	// (0x00012ab4) list_double2_graphic_pane_g2_cp2

0x797a,	// (0x00012ac5) list_double2_graphic_pane_g3_cp2

0x7984,	// (0x00012acf) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7984,	// (0x00012acf) list_double2_graphic_pane_t1_cp2

0x799a,	// (0x00012ae5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x799a,	// (0x00012ae5) list_double2_graphic_pane_t2_cp2

0x79ac,	// (0x00012af7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x79ac,	// (0x00012af7) list_single_number_heading_pane_g1_cp2

0x79b8,	// (0x00012b03) list_single_number_heading_pane_g2_cp2

0x79c0,	// (0x00012b0b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x79c0,	// (0x00012b0b) list_single_number_heading_pane_t1_cp2

0x79d6,	// (0x00012b21) list_single_number_heading_pane_t2_cp2_ParamLimits

0x79d6,	// (0x00012b21) list_single_number_heading_pane_t2_cp2

0x79e8,	// (0x00012b33) list_single_number_heading_pane_t3_cp2_ParamLimits

0x79e8,	// (0x00012b33) list_single_number_heading_pane_t3_cp2

0x79ac,	// (0x00012af7) list_single_heading_pane_g1_cp2_ParamLimits

0x79ac,	// (0x00012af7) list_single_heading_pane_g1_cp2

0x79b8,	// (0x00012b03) list_single_heading_pane_g2_cp2

0x79c0,	// (0x00012b0b) list_single_heading_pane_t1_cp2_ParamLimits

0x79c0,	// (0x00012b0b) list_single_heading_pane_t1_cp2

0x9965,	// (0x00014ab0) list_single_heading_pane_t2_cp2_ParamLimits

0x9965,	// (0x00014ab0) list_single_heading_pane_t2_cp2

0x98a7,	// (0x000149f2) list_double_graphic_pane_g1_cp2_ParamLimits

0x98a7,	// (0x000149f2) list_double_graphic_pane_g1_cp2

0x98b3,	// (0x000149fe) list_double_graphic_pane_g2_cp2_ParamLimits

0x98b3,	// (0x000149fe) list_double_graphic_pane_g2_cp2

0x98c2,	// (0x00014a0d) list_double_graphic_pane_g3_cp2

0x98ca,	// (0x00014a15) list_double_graphic_pane_t1_cp2_ParamLimits

0x98ca,	// (0x00014a15) list_double_graphic_pane_t1_cp2

0x98e0,	// (0x00014a2b) list_double_graphic_pane_t2_cp2_ParamLimits

0x98e0,	// (0x00014a2b) list_double_graphic_pane_t2_cp2

0x7a5d,	// (0x00012ba8) list_double_number_pane_g1_cp2_ParamLimits

0x7a5d,	// (0x00012ba8) list_double_number_pane_g1_cp2

0x7a69,	// (0x00012bb4) list_double_number_pane_g2_cp2

0x986b,	// (0x000149b6) list_double_number_pane_t1_cp2_ParamLimits

0x986b,	// (0x000149b6) list_double_number_pane_t1_cp2

0x987f,	// (0x000149ca) list_double_number_pane_t2_cp2_ParamLimits

0x987f,	// (0x000149ca) list_double_number_pane_t2_cp2

0x9895,	// (0x000149e0) list_double_number_pane_t3_cp2_ParamLimits

0x9895,	// (0x000149e0) list_double_number_pane_t3_cp2

0x9754,	// (0x0001489f) list_single_graphic_pane_g1_cp2_ParamLimits

0x9754,	// (0x0001489f) list_single_graphic_pane_g1_cp2

0x7ac1,	// (0x00012c0c) list_single_graphic_pane_g2_cp2_ParamLimits

0x7ac1,	// (0x00012c0c) list_single_graphic_pane_g2_cp2

0x7acd,	// (0x00012c18) list_single_graphic_pane_g3_cp2

0x972a,	// (0x00014875) list_single_graphic_pane_t1_cp2_ParamLimits

0x972a,	// (0x00014875) list_single_graphic_pane_t1_cp2

0x7ac1,	// (0x00012c0c) list_single_number_pane_g1_cp2_ParamLimits

0x7ac1,	// (0x00012c0c) list_single_number_pane_g1_cp2

0x7acd,	// (0x00012c18) list_single_number_pane_g2_cp2

0x972a,	// (0x00014875) list_single_number_pane_t1_cp2_ParamLimits

0x972a,	// (0x00014875) list_single_number_pane_t1_cp2

0x9740,	// (0x0001488b) list_single_number_pane_t2_cp2_ParamLimits

0x9740,	// (0x0001488b) list_single_number_pane_t2_cp2

0x78ca,	// (0x00012a15) list_double2_pane_g1_cp2_ParamLimits

0x78ca,	// (0x00012a15) list_double2_pane_g1_cp2

0x78db,	// (0x00012a26) list_double2_pane_g2_cp2

0x7a35,	// (0x00012b80) list_double2_pane_t1_cp2_ParamLimits

0x7a35,	// (0x00012b80) list_double2_pane_t1_cp2

0x7a4b,	// (0x00012b96) list_double2_pane_t2_cp2_ParamLimits

0x7a4b,	// (0x00012b96) list_double2_pane_t2_cp2

0x7a5d,	// (0x00012ba8) list_double_pane_g1_cp2_ParamLimits

0x7a5d,	// (0x00012ba8) list_double_pane_g1_cp2

0x7a69,	// (0x00012bb4) list_double_pane_g2_cp2

0x7a71,	// (0x00012bbc) list_double_pane_t1_cp2_ParamLimits

0x7a71,	// (0x00012bbc) list_double_pane_t1_cp2

0x7a87,	// (0x00012bd2) list_double_pane_t2_cp2_ParamLimits

0x7a87,	// (0x00012bd2) list_double_pane_t2_cp2

0x7ab1,	// (0x00012bfc) list_single_pane_cp2_g3

0x7ac1,	// (0x00012c0c) list_single_pane_g1_cp2_ParamLimits

0x7ac1,	// (0x00012c0c) list_single_pane_g1_cp2

0x7acd,	// (0x00012c18) list_single_pane_g2_cp2

0x7ad5,	// (0x00012c20) list_single_pane_t1_cp2_ParamLimits

0x7ad5,	// (0x00012c20) list_single_pane_t1_cp2

0x7aed,	// (0x00012c38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7aed,	// (0x00012c38) list_single_large_graphic_pane_g1_cp2

0x7af9,	// (0x00012c44) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7af9,	// (0x00012c44) list_single_large_graphic_pane_g2_cp2

0x7b05,	// (0x00012c50) list_single_large_graphic_pane_g3_cp2

0x7b0d,	// (0x00012c58) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7b0d,	// (0x00012c58) list_single_large_graphic_pane_g4_cp1

0x7b27,	// (0x00012c72) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7b27,	// (0x00012c72) list_single_large_graphic_pane_t1_cp2

0x96f6,	// (0x00014841) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x96f6,	// (0x00014841) list_single_graphic_heading_pane_g1_cp2

0x96c3,	// (0x0001480e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x96c3,	// (0x0001480e) list_single_graphic_heading_pane_g4_cp2

0x7acd,	// (0x00012c18) list_single_graphic_heading_pane_g5_cp2

0x9702,	// (0x0001484d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9702,	// (0x0001484d) list_single_graphic_heading_pane_t1_cp2

0x9718,	// (0x00014863) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9718,	// (0x00014863) list_single_graphic_heading_pane_t2_cp2

0x96b7,	// (0x00014802) list_single_2graphic_pane_g1_cp2_ParamLimits

0x96b7,	// (0x00014802) list_single_2graphic_pane_g1_cp2

0x96c3,	// (0x0001480e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x96c3,	// (0x0001480e) list_single_2graphic_pane_g2_cp2

0x7acd,	// (0x00012c18) list_single_2graphic_pane_g3_cp2

0x96d4,	// (0x0001481f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x96d4,	// (0x0001481f) list_single_2graphic_pane_g4_cp2

0x96e0,	// (0x0001482b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x96e0,	// (0x0001482b) list_single_2graphic_pane_t1_cp2

0x5e6d,	// (0x00010fb8) list_highlight_pane_g10_cp1

0x928f,	// (0x000143da) list_highlight_pane_g1_cp1

0x9297,	// (0x000143e2) list_highlight_pane_g2_cp1

0x929f,	// (0x000143ea) list_highlight_pane_g3_cp1

0x92a7,	// (0x000143f2) list_highlight_pane_g4_cp1

0x92af,	// (0x000143fa) list_highlight_pane_g5_cp1

0x92b7,	// (0x00014402) list_highlight_pane_g6_cp1

0x92bf,	// (0x0001440a) list_highlight_pane_g7_cp1

0x92c7,	// (0x00014412) list_highlight_pane_g8_cp1

0x92cf,	// (0x0001441a) list_highlight_pane_g9_cp1

0x1a31,	// (0x0000cb7c) form_field_slider_pane_t3

0x1a3f,	// (0x0000cb8a) form_field_slider_pane_t4

0x91cb,	// (0x00014316) slider_form_pane_ParamLimits

0x91cb,	// (0x00014316) slider_form_pane

0x5e77,	// (0x00010fc2) control_abbreviations

0x5e77,	// (0x00010fc2) control_conventions

0x5e77,	// (0x00010fc2) control_definitions

0x5e77,	// (0x00010fc2) format_table_attribute

0x99af,	// (0x00014afa) bg_popup_preview_window_pane_g9

0x5e77,	// (0x00010fc2) format_table_data2

0x5e77,	// (0x00010fc2) format_table_data3

0x5e77,	// (0x00010fc2) format_table_data_example

0x0008,

0x5e77,	// (0x00010fc2) intro_purpose

0xf91e,	// (0x0001aa69) bg_popup_preview_window_pane_g

0x5e77,	// (0x00010fc2) texts_category

0x5e77,	// (0x00010fc2) texts_graphics

0x7b3d,	// (0x00012c88) text_digital

0x7b4c,	// (0x00012c97) text_primary

0x7b5b,	// (0x00012ca6) text_primary_small

0x7b6a,	// (0x00012cb5) text_secondary

0x7b79,	// (0x00012cc4) text_title

0xa1d6,	// (0x00015321) bg_passive_tab_pane_g1_cp3_srt

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp3_srt

0xa1df,	// (0x0001532a) bg_passive_tab_pane_g3_cp3_srt

0x61ec,	// (0x00011337) bg_active_tab_pane_cp3_srt_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp3_srt

0xa1e8,	// (0x00015333) tabs_4_active_pane_srt_g1

0x1f4d,	// (0x0000d098) tabs_4_active_pane_srt_t1_ParamLimits

0x1f4d,	// (0x0000d098) tabs_4_active_pane_srt_t1

0xa1d6,	// (0x00015321) bg_active_tab_pane_g1_cp3_copy1

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp3_copy1

0xa1df,	// (0x0001532a) bg_active_tab_pane_g3_cp3_copy1

0x5f57,	// (0x000110a2) tabs_2_long_active_pane_srt_ParamLimits

0x5f57,	// (0x000110a2) tabs_2_long_active_pane_srt

0x5f57,	// (0x000110a2) tabs_2_long_passive_pane_srt_ParamLimits

0x5f57,	// (0x000110a2) tabs_2_long_passive_pane_srt

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp4_srt

0x9e1b,	// (0x00014f66) bg_passive_tab_pane_g1_cp4_srt

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp4_srt

0x9e24,	// (0x00014f6f) bg_passive_tab_pane_g3_cp4_srt

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp4_srt_ParamLimits

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp4_srt

0x1d2e,	// (0x0000ce79) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1d2e,	// (0x0000ce79) tabs_2_long_active_pane_srt_t1

0x9e1b,	// (0x00014f66) bg_active_tab_pane_g1_cp4_srt

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp4_srt

0x9e24,	// (0x00014f6f) bg_active_tab_pane_g3_cp4_srt

0x61ec,	// (0x00011337) tabs_3_long_active_pane_srt_ParamLimits

0x61ec,	// (0x00011337) tabs_3_long_active_pane_srt

0x61ec,	// (0x00011337) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x61ec,	// (0x00011337) tabs_3_long_passive_pane_cp_srt

0x61ec,	// (0x00011337) tabs_3_long_passive_pane_srt_ParamLimits

0x61ec,	// (0x00011337) tabs_3_long_passive_pane_srt

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp5_srt

0x785f,	// (0x000129aa) bg_passive_tab_pane_g1_cp5_srt

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp5_srt

0x7868,	// (0x000129b3) bg_passive_tab_pane_g3_cp5_srt

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp5_srt_ParamLimits

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp5_srt

0x1d18,	// (0x0000ce63) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1d18,	// (0x0000ce63) tabs_3_long_active_pane_srt_t1

0x785f,	// (0x000129aa) bg_active_tab_pane_g1_cp5_srt

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp5_srt

0x7868,	// (0x000129b3) bg_active_tab_pane_g3_cp5_srt

0x9dfb,	// (0x00014f46) navi_text_pane_srt_t1

0x9df3,	// (0x00014f3e) navi_icon_pane_srt_g1

0x7d4c,	// (0x00012e97) midp_editing_number_pane_srt

0x7b88,	// (0x00012cd3) midp_ticker_pane_srt

0x7d54,	// (0x00012e9f) midp_ticker_pane_srt_g1

0x7d5c,	// (0x00012ea7) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a8f8) midp_ticker_pane_srt_g

0x7d64,	// (0x00012eaf) midp_ticker_pane_srt_t1

0x9de4,	// (0x00014f2f) midp_editing_number_pane_t1_copy1

0x0c1d,	// (0x0000bd68) listscroll_midp_pane

0x0c1d,	// (0x0000bd68) midp_form_pane

0x7bfe,	// (0x00012d49) midp_info_popup_window_ParamLimits

0x7bfe,	// (0x00012d49) midp_info_popup_window

0x6f73,	// (0x000120be) bg_popup_sub_pane_cp50_ParamLimits

0x6f73,	// (0x000120be) bg_popup_sub_pane_cp50

0x8ef8,	// (0x00014043) listscroll_midp_info_pane_ParamLimits

0x8ef8,	// (0x00014043) listscroll_midp_info_pane

0x8ee0,	// (0x0001402b) listscroll_form_midp_pane_ParamLimits

0x8ee0,	// (0x0001402b) listscroll_form_midp_pane

0x8eec,	// (0x00014037) scroll_bar_cp050

0x1a25,	// (0x0000cb70) list_midp_pane

0xadc5,	// (0x00015f10) signal_pane_g2_cp

0x8dfa,	// (0x00013f45) listscroll_midp_info_pane_t1_ParamLimits

0x8dfa,	// (0x00013f45) listscroll_midp_info_pane_t1

0x8e12,	// (0x00013f5d) listscroll_midp_info_pane_t2_ParamLimits

0x8e12,	// (0x00013f5d) listscroll_midp_info_pane_t2

0x8e50,	// (0x00013f9b) listscroll_midp_info_pane_t3_ParamLimits

0x8e50,	// (0x00013f9b) listscroll_midp_info_pane_t3

0x8e8a,	// (0x00013fd5) listscroll_midp_info_pane_t4_ParamLimits

0x8e8a,	// (0x00013fd5) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001a9a4) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001a9a4) listscroll_midp_info_pane_t

0x7035,	// (0x00012180) scroll_pane_cp21

0x8d98,	// (0x00013ee3) form_midp_field_choice_group_pane

0x8da1,	// (0x00013eec) form_midp_field_text_pane

0x8de0,	// (0x00013f2b) form_midp_field_time_pane

0x8de8,	// (0x00013f33) form_midp_gauge_slider_pane

0x8df1,	// (0x00013f3c) form_midp_gauge_wait_pane

0x5e77,	// (0x00010fc2) form_midp_image_pane

0x1a0c,	// (0x0000cb57) list_single_midp_pane_ParamLimits

0x1a0c,	// (0x0000cb57) list_single_midp_pane

0x19ea,	// (0x0000cb35) form_midp_field_text_pane_t1

0x8b04,	// (0x00013c4f) input_focus_pane_cp050

0x8d58,	// (0x00013ea3) list_midp_form_text_pane

0x8cf0,	// (0x00013e3b) form_midp_field_choice_group_pane_t1

0x8cfe,	// (0x00013e49) input_focus_pane_cp051

0x8d12,	// (0x00013e5d) list_midp_choice_pane

0x5e77,	// (0x00010fc2) status_idle_pane

0x8cd4,	// (0x00013e1f) form_midp_field_time_pane_t1

0x5e6d,	// (0x00010fb8) wait_anim_pane_g2_copy1

0x8ce2,	// (0x00013e2d) form_midp_field_time_pane_t2

0x0001,

0x7cac,	// (0x00012df7) aid_navinavi_width_2_pane

0xf854,	// (0x0001a99f) form_midp_field_time_pane_t

0x5e77,	// (0x00010fc2) input_focus_pane_cp052

0x5e77,	// (0x00010fc2) bg_input_focus_pane_cp040

0x8c94,	// (0x00013ddf) form_midp_gauge_slider_pane_t1

0x8ca2,	// (0x00013ded) form_midp_gauge_slider_pane_t2

0x19ce,	// (0x0000cb19) form_midp_gauge_slider_pane_t3

0x19dc,	// (0x0000cb27) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001a996) form_midp_gauge_slider_pane_t

0x8ccc,	// (0x00013e17) form_midp_slider_pane

0x5f57,	// (0x000110a2) bg_input_focus_pane_cp041_ParamLimits

0x5f57,	// (0x000110a2) bg_input_focus_pane_cp041

0x8c61,	// (0x00013dac) form_midp_gauge_wait_pane_t1_ParamLimits

0x8c61,	// (0x00013dac) form_midp_gauge_wait_pane_t1

0x8c73,	// (0x00013dbe) form_midp_gauge_wait_pane_t2_ParamLimits

0x8c73,	// (0x00013dbe) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001a991) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001a991) form_midp_gauge_wait_pane_t

0x8c85,	// (0x00013dd0) form_midp_wait_pane_ParamLimits

0x8c85,	// (0x00013dd0) form_midp_wait_pane

0x8c2b,	// (0x00013d76) form_midp_image_pane_g1

0x8c34,	// (0x00013d7f) form_midp_image_pane_t1

0x8c43,	// (0x00013d8e) form_midp_image_pane_t2

0x8c52,	// (0x00013d9d) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001a98a) form_midp_image_pane_t

0x8c13,	// (0x00013d5e) list_single_midp_pane_g1

0x8c1c,	// (0x00013d67) list_single_midp_pane_t1

0x19b9,	// (0x0000cb04) list_midp_form_item_pane_ParamLimits

0x19b9,	// (0x0000cb04) list_midp_form_item_pane

0x7c54,	// (0x00012d9f) list_midp_form_item_pane_t1

0x7c63,	// (0x00012dae) midp_ticker_pane_g1

0x7c6f,	// (0x00012dba) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a8de) midp_ticker_pane_g

0x0cc5,	// (0x0000be10) midp_ticker_pane_t1

0x1eb5,	// (0x0000d000) midp_editing_number_pane_t1

0xa046,	// (0x00015191) midp_editing_number_pane

0xa055,	// (0x000151a0) midp_ticker_pane

0x9dac,	// (0x00014ef7) ai_message_heading_pane

0x5e77,	// (0x00010fc2) bg_popup_window_pane_cp14

0x9db4,	// (0x00014eff) listscroll_ai_message_pane

0x9d36,	// (0x00014e81) ai_message_heading_pane_g1_ParamLimits

0x9d36,	// (0x00014e81) ai_message_heading_pane_g1

0x9d42,	// (0x00014e8d) ai_message_heading_pane_g2_ParamLimits

0x9d42,	// (0x00014e8d) ai_message_heading_pane_g2

0x9d4e,	// (0x00014e99) ai_message_heading_pane_g3_ParamLimits

0x9d4e,	// (0x00014e99) ai_message_heading_pane_g3

0x9d5a,	// (0x00014ea5) ai_message_heading_pane_g4_ParamLimits

0x9d5a,	// (0x00014ea5) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001aacb) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001aacb) ai_message_heading_pane_g

0x9d66,	// (0x00014eb1) ai_message_heading_pane_t1_ParamLimits

0x9d66,	// (0x00014eb1) ai_message_heading_pane_t1

0x9d80,	// (0x00014ecb) ai_message_heading_pane_t2_ParamLimits

0x9d80,	// (0x00014ecb) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001aad4) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001aad4) ai_message_heading_pane_t

0x9d92,	// (0x00014edd) bg_popup_heading_pane_cp1_ParamLimits

0x9d92,	// (0x00014edd) bg_popup_heading_pane_cp1

0x9d24,	// (0x00014e6f) list_ai_message_pane_ParamLimits

0x9d24,	// (0x00014e6f) list_ai_message_pane

0x7035,	// (0x00012180) scroll_pane_cp10

0x9cc0,	// (0x00014e0b) list_ai_message_pane_g1

0x9cc8,	// (0x00014e13) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001aaa8) list_ai_message_pane_g

0x9cd0,	// (0x00014e1b) list_ai_message_pane_t1_ParamLimits

0x9cd0,	// (0x00014e1b) list_ai_message_pane_t1

0x9ce5,	// (0x00014e30) list_ai_message_pane_t2_ParamLimits

0x9ce5,	// (0x00014e30) list_ai_message_pane_t2

0x9cfa,	// (0x00014e45) list_ai_message_pane_t3_ParamLimits

0x9cfa,	// (0x00014e45) list_ai_message_pane_t3

0x9d0f,	// (0x00014e5a) list_ai_message_pane_t4_ParamLimits

0x9d0f,	// (0x00014e5a) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001aaad) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001aaad) list_ai_message_pane_t

0x1ce5,	// (0x0000ce30) cell_ai_soft_ind_pane_ParamLimits

0x1ce5,	// (0x0000ce30) cell_ai_soft_ind_pane

0x7c8d,	// (0x00012dd8) cell_ai_soft_ind_pane_g1_ParamLimits

0x7c8d,	// (0x00012dd8) cell_ai_soft_ind_pane_g1

0x5e77,	// (0x00010fc2) grid_highlight_cp1

0x7c9a,	// (0x00012de5) text_secondary_cp56_ParamLimits

0x7c9a,	// (0x00012de5) text_secondary_cp56

0x9c80,	// (0x00014dcb) example_general_pane_ParamLimits

0x9c80,	// (0x00014dcb) example_general_pane

0x9c8c,	// (0x00014dd7) example_parent_pane_g1_ParamLimits

0x9c8c,	// (0x00014dd7) example_parent_pane_g1

0x9c98,	// (0x00014de3) example_parent_pane_t1_ParamLimits

0x9c98,	// (0x00014de3) example_parent_pane_t1

0x121e,	// (0x0000c369) popup_preview_text_window_ParamLimits

0x121e,	// (0x0000c369) popup_preview_text_window

0x7ab9,	// (0x00012c04) list_single_pane_cp2_g4

0x62a2,	// (0x000113ed) bg_popup_preview_window_pane_ParamLimits

0x62a2,	// (0x000113ed) bg_popup_preview_window_pane

0x99b7,	// (0x00014b02) popup_preview_text_window_t1_ParamLimits

0x99b7,	// (0x00014b02) popup_preview_text_window_t1

0x99d5,	// (0x00014b20) popup_preview_text_window_t2_ParamLimits

0x99d5,	// (0x00014b20) popup_preview_text_window_t2

0x9a1e,	// (0x00014b69) popup_preview_text_window_t3_ParamLimits

0x9a1e,	// (0x00014b69) popup_preview_text_window_t3

0x9a63,	// (0x00014bae) popup_preview_text_window_t4_ParamLimits

0x9a63,	// (0x00014bae) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001aa7c) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001aa7c) popup_preview_text_window_t

0x9ae1,	// (0x00014c2c) scroll_pane_cp11

0x89ea,	// (0x00013b35) bg_popup_preview_window_pane_g1

0x9977,	// (0x00014ac2) bg_popup_preview_window_pane_g2

0x997f,	// (0x00014aca) bg_popup_preview_window_pane_g3

0x9987,	// (0x00014ad2) bg_popup_preview_window_pane_g4

0x998f,	// (0x00014ada) bg_popup_preview_window_pane_g5

0x9997,	// (0x00014ae2) bg_popup_preview_window_pane_g6

0x999f,	// (0x00014aea) bg_popup_preview_window_pane_g7

0x99a7,	// (0x00014af2) bg_popup_preview_window_pane_g8

0x422f,	// (0x0000f37a) aid_popup_width_pane

0x119a,	// (0x0000c2e5) popup_midp_note_alarm_window_ParamLimits

0x119a,	// (0x0000c2e5) popup_midp_note_alarm_window

0x6d10,	// (0x00011e5b) data_form_pane_ParamLimits

0x0828,	// (0x0000b973) form_field_data_pane_g1

0x0832,	// (0x0000b97d) form_field_data_pane_t1_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_ParamLimits

0x6d4c,	// (0x00011e97) data_form_wide_pane_ParamLimits

0x6d58,	// (0x00011ea3) form_field_data_wide_pane_g1

0x6d84,	// (0x00011ecf) form_field_data_wide_pane_t1_ParamLimits

0x654e,	// (0x00011699) input_focus_pane_cp6_ParamLimits

0x0996,	// (0x0000bae1) input_popup_find_pane_g1_ParamLimits

0x0996,	// (0x0000bae1) input_popup_find_pane_g1

0x47a3,	// (0x0000f8ee) aid_navi_side_left_pane

0x47b8,	// (0x0000f903) aid_navi_side_right_pane

0x938a,	// (0x000144d5) bg_popup_window_pane_cp30_ParamLimits

0x938a,	// (0x000144d5) bg_popup_window_pane_cp30

0x9404,	// (0x0001454f) popup_midp_note_alarm_window_g1_ParamLimits

0x9404,	// (0x0001454f) popup_midp_note_alarm_window_g1

0x9434,	// (0x0001457f) popup_midp_note_alarm_window_t1_ParamLimits

0x9434,	// (0x0001457f) popup_midp_note_alarm_window_t1

0x94d5,	// (0x00014620) popup_midp_note_alarm_window_t2_ParamLimits

0x94d5,	// (0x00014620) popup_midp_note_alarm_window_t2

0x9583,	// (0x000146ce) popup_midp_note_alarm_window_t3_ParamLimits

0x9583,	// (0x000146ce) popup_midp_note_alarm_window_t3

0x95b5,	// (0x00014700) popup_midp_note_alarm_window_t4_ParamLimits

0x95b5,	// (0x00014700) popup_midp_note_alarm_window_t4

0x95db,	// (0x00014726) popup_midp_note_alarm_window_t5_ParamLimits

0x95db,	// (0x00014726) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001aa19) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001aa19) popup_midp_note_alarm_window_t

0x9687,	// (0x000147d2) wait_bar_pane_cp1_ParamLimits

0x9687,	// (0x000147d2) wait_bar_pane_cp1

0x5e77,	// (0x00010fc2) wait_anim_pane_copy1

0x5e77,	// (0x00010fc2) wait_border_pane_copy1

0x9070,	// (0x000141bb) wait_border_pane_g1_copy1

0x6d9e,	// (0x00011ee9) form_field_popup_pane_g1

0x084c,	// (0x0000b997) form_field_popup_pane_t1_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_cp7_ParamLimits

0x6dbe,	// (0x00011f09) list_form_pane_ParamLimits

0x6dca,	// (0x00011f15) form_field_popup_wide_pane_g1

0x6dd2,	// (0x00011f1d) form_field_popup_wide_pane_t1_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_cp8_ParamLimits

0x6de7,	// (0x00011f32) list_form_wide_pane_ParamLimits

0xa262,	// (0x000153ad) aid_size_cell_graphic_pane

0x08cb,	// (0x0000ba16) data_form_pane_t1_ParamLimits

0x1e99,	// (0x0000cfe4) data_form_wide_pane_t1_ParamLimits

0x15d3,	// (0x0000c71e) bg_status_flat_pane

0x0064,	// (0x0000b1af) title_pane_t1_ParamLimits

0x5f1f,	// (0x0001106a) title_pane_t2_ParamLimits

0x5f45,	// (0x00011090) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a6e6) title_pane_t_ParamLimits

0x74b1,	// (0x000125fc) level_1_signal_ParamLimits

0x74be,	// (0x00012609) level_2_signal_ParamLimits

0x74cb,	// (0x00012616) level_3_signal_ParamLimits

0x74d8,	// (0x00012623) level_4_signal_ParamLimits

0x74e5,	// (0x00012630) level_5_signal_ParamLimits

0x74f2,	// (0x0001263d) level_6_signal_ParamLimits

0x74ff,	// (0x0001264a) level_7_signal_ParamLimits

0x74b1,	// (0x000125fc) level_1_battery_ParamLimits

0x74be,	// (0x00012609) level_2_battery_ParamLimits

0x74cb,	// (0x00012616) level_3_battery_ParamLimits

0x74d8,	// (0x00012623) level_4_battery_ParamLimits

0x74e5,	// (0x00012630) level_5_battery_ParamLimits

0x74f2,	// (0x0001263d) level_6_battery_ParamLimits

0x74ff,	// (0x0001264a) level_7_battery_ParamLimits

0x928f,	// (0x000143da) bg_status_flat_pane_g1

0x9297,	// (0x000143e2) bg_status_flat_pane_g2

0x929f,	// (0x000143ea) bg_status_flat_pane_g3

0x92a7,	// (0x000143f2) bg_status_flat_pane_g4

0x92af,	// (0x000143fa) bg_status_flat_pane_g5

0x92b7,	// (0x00014402) bg_status_flat_pane_g6

0x92bf,	// (0x0001440a) bg_status_flat_pane_g7

0x00f8,	// (0x0000b243) tabs_3_active_pane_t1_ParamLimits

0x00f8,	// (0x0000b243) tabs_3_passive_pane_t1_ParamLimits

0x0112,	// (0x0000b25d) tabs_4_active_pane_t1_ParamLimits

0x0112,	// (0x0000b25d) tabs_4_1_passive_pane_t1_ParamLimits

0x09ac,	// (0x0000baf7) tabs_2_active_pane_t1_ParamLimits

0x09ac,	// (0x0000baf7) tabs_2_passive_pane_t1_ParamLimits

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp4_ParamLimits

0x09be,	// (0x0000bb09) tabs_2_long_active_pane_t1_ParamLimits

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp4_ParamLimits

0x4d7e,	// (0x0000fec9) list_single_midp_graphic_pane_t1_ParamLimits

0x5f57,	// (0x000110a2) bg_active_tab_pane_cp5_ParamLimits

0x09d1,	// (0x0000bb1c) tabs_3_long_active_pane_t1_ParamLimits

0x7f12,	// (0x0001305d) bg_passive_tab_pane_cp5_ParamLimits

0x4d7e,	// (0x0000fec9) list_single_midp_graphic_pane_t1

0x15d3,	// (0x0000c71e) bg_status_flat_pane_ParamLimits

0x8647,	// (0x00013792) indicator_pane_cp2_ParamLimits

0x8647,	// (0x00013792) indicator_pane_cp2

0x174a,	// (0x0000c895) navi_pane_srt_ParamLimits

0x174a,	// (0x0000c895) navi_pane_srt

0x878f,	// (0x000138da) popup_clock_digital_analogue_window_cp1

0x604e,	// (0x00011199) indicator_pane_t1

0x7b88,	// (0x00012cd3) copy_highlight_pane

0x7b88,	// (0x00012cd3) cursor_graphics_pane

0x7b88,	// (0x00012cd3) graphic_within_text_pane

0x7b88,	// (0x00012cd3) link_highlight_pane

0x9aa4,	// (0x00014bef) popup_preview_text_window_t5_ParamLimits

0x9aa4,	// (0x00014bef) popup_preview_text_window_t5

0x7cb4,	// (0x00012dff) cursor_digital_pane

0x7cb4,	// (0x00012dff) cursor_primary_pane

0x7cc5,	// (0x00012e10) cursor_primary_small_pane

0x7ccd,	// (0x00012e18) cursor_secondary_pane

0x7cd5,	// (0x00012e20) cursor_title_pane

0x7cb4,	// (0x00012dff) link_highlight_digital_pane

0x7cbc,	// (0x00012e07) link_highlight_primary_pane

0x7cc5,	// (0x00012e10) link_highlight_primary_small_pane

0x7ccd,	// (0x00012e18) link_highlight_secondary_pane

0x7cd5,	// (0x00012e20) link_highlight_title_pane

0x7cb4,	// (0x00012dff) copy_highlight_digital_pane

0x7cb4,	// (0x00012dff) copy_highlight_primary_pane

0x7cc5,	// (0x00012e10) copy_highlight_primary_small_pane

0x7ccd,	// (0x00012e18) copy_highlight_secondary_pane

0x7cd5,	// (0x00012e20) copy_highlight_title_pane

0x7ccd,	// (0x00012e18) graphic_text_digital_pane

0x932d,	// (0x00014478) graphic_text_primary_pane

0x9336,	// (0x00014481) graphic_text_primary_small_pane

0x7cc5,	// (0x00012e10) graphic_text_secondary_pane

0x7cb4,	// (0x00012dff) graphic_text_title_pane

0x0cd7,	// (0x0000be22) cursor_primary_pane_g1

0x931f,	// (0x0001446a) cursor_text_primary_t1

0x1a61,	// (0x0000cbac) cursor_primary_small_pane_g1

0x9311,	// (0x0001445c) cursor_text_primary_small_t1

0x1a57,	// (0x0000cba2) cursor_primary_small_pane_g1_copy1

0x92f9,	// (0x00014444) cursor_text_primary_small_t1_copy1

0x92d7,	// (0x00014422) cursor_text_title_t1

0x1a4d,	// (0x0000cb98) cursor_title_pane_g1

0x0cd7,	// (0x0000be22) cursor_digital_pane_g1

0x7ce7,	// (0x00012e32) cursor_text_digital_t1

0x7d0c,	// (0x00012e57) link_highlight_primary_pane_g1

0x9280,	// (0x000143cb) link_highlight_primary_pane_t1

0x7cf5,	// (0x00012e40) link_highlight_primary_small_pane_g1

0x7cfd,	// (0x00012e48) link_highlight_primary_small_pane_t1

0x7d0c,	// (0x00012e57) link_highlight_secondary_pane_g1

0x7d14,	// (0x00012e5f) link_highlight_secondary_pane_t1

0x91f4,	// (0x0001433f) link_highlight_title_pane_g1

0x91fc,	// (0x00014347) link_highlight_title_pane_t1

0x91dd,	// (0x00014328) link_highlight_digital_pane_g1

0x91e5,	// (0x00014330) link_highlight_digital_pane_t1

0x90b5,	// (0x00014200) copy_highlight_primary_pane_g1

0x90bd,	// (0x00014208) copy_highlight_primary_pane_t1

0x908f,	// (0x000141da) copy_highlight_primary_small_pane_g1

0x90a6,	// (0x000141f1) copy_highlight_primary_small_pane_t1

0x7d23,	// (0x00012e6e) copy_highlight_secondary_pane_g1

0x7d2b,	// (0x00012e76) copy_highlight_secondary_pane_t1

0x908f,	// (0x000141da) copy_highlight_title_pane_g1

0x9097,	// (0x000141e2) copy_highlight_title_pane_t1

0x90b5,	// (0x00014200) copy_highlight_digital_pane_g1

0xa42c,	// (0x00015577) copy_highlight_digital_pane_t1

0xa380,	// (0x000154cb) graphic_text_primary_pane_g1

0xa410,	// (0x0001555b) graphic_text_primary_pane_t1

0xa41e,	// (0x00015569) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001ab48) graphic_text_primary_pane_t

0xa3ec,	// (0x00015537) graphic_text_primary_small_pane_g1

0xa3f4,	// (0x0001553f) graphic_text_primary_small_pane_t1

0xa402,	// (0x0001554d) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001ab43) graphic_text_primary_small_pane_t

0xa3c8,	// (0x00015513) graphic_text_secondary_pane_g1

0xa3d0,	// (0x0001551b) graphic_text_secondary_pane_t1

0xa3de,	// (0x00015529) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001ab3e) graphic_text_secondary_pane_t

0xa3a4,	// (0x000154ef) graphic_text_title_pane_g1

0xa3ac,	// (0x000154f7) graphic_text_title_pane_t1

0xa3ba,	// (0x00015505) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001ab39) graphic_text_title_pane_t

0xa380,	// (0x000154cb) graphic_text_digital_pane_g1

0xa388,	// (0x000154d3) graphic_text_digital_pane_t1

0xa396,	// (0x000154e1) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001ab34) graphic_text_digital_pane_t

0x5f57,	// (0x000110a2) navi_icon_pane_srt_ParamLimits

0x5f57,	// (0x000110a2) navi_icon_pane_srt

0x5e77,	// (0x00010fc2) navi_midp_pane_srt

0x5e77,	// (0x00010fc2) navi_navi_pane_srt

0x5f57,	// (0x000110a2) navi_text_pane_srt_ParamLimits

0x5f57,	// (0x000110a2) navi_text_pane_srt

0xa34b,	// (0x00015496) navi_navi_icon_text_pane_srt

0xa353,	// (0x0001549e) navi_navi_pane_srt_g1_ParamLimits

0xa353,	// (0x0001549e) navi_navi_pane_srt_g1

0xa365,	// (0x000154b0) navi_navi_pane_srt_g2_ParamLimits

0xa365,	// (0x000154b0) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001ab2f) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001ab2f) navi_navi_pane_srt_g

0xa377,	// (0x000154c2) navi_navi_tabs_pane_srt

0xa34b,	// (0x00015496) navi_navi_text_pane_srt

0xa34b,	// (0x00015496) navi_navi_volume_pane_srt

0xa33c,	// (0x00015487) navi_navi_text_pane_srt_t1

0x50f8,	// (0x00010243) navi_navi_volume_pane_srt_g1

0x5100,	// (0x0001024b) volume_small_pane_srt_ParamLimits

0x5100,	// (0x0001024b) volume_small_pane_srt

0x4a83,	// (0x0000fbce) volume_small_pane_srt_g1_ParamLimits

0x4a83,	// (0x0000fbce) volume_small_pane_srt_g1

0x4a93,	// (0x0000fbde) volume_small_pane_srt_g2_ParamLimits

0x4a93,	// (0x0000fbde) volume_small_pane_srt_g2

0x4aa4,	// (0x0000fbef) volume_small_pane_srt_g3_ParamLimits

0x4aa4,	// (0x0000fbef) volume_small_pane_srt_g3

0x4ab5,	// (0x0000fc00) volume_small_pane_srt_g4_ParamLimits

0x4ab5,	// (0x0000fc00) volume_small_pane_srt_g4

0x4ac6,	// (0x0000fc11) volume_small_pane_srt_g5_ParamLimits

0x4ac6,	// (0x0000fc11) volume_small_pane_srt_g5

0x4ad7,	// (0x0000fc22) volume_small_pane_srt_g6_ParamLimits

0x4ad7,	// (0x0000fc22) volume_small_pane_srt_g6

0x4ae8,	// (0x0000fc33) volume_small_pane_srt_g7_ParamLimits

0x4ae8,	// (0x0000fc33) volume_small_pane_srt_g7

0x4af9,	// (0x0000fc44) volume_small_pane_srt_g8_ParamLimits

0x4af9,	// (0x0000fc44) volume_small_pane_srt_g8

0x4b0a,	// (0x0000fc55) volume_small_pane_srt_g9_ParamLimits

0x4b0a,	// (0x0000fc55) volume_small_pane_srt_g9

0x4b1b,	// (0x0000fc66) volume_small_pane_srt_g10_ParamLimits

0x4b1b,	// (0x0000fc66) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a8e3) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a8e3) volume_small_pane_srt_g

0x634b,	// (0x00011496) query_popup_data_pane_cp2

0xa322,	// (0x0001546d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa322,	// (0x0001546d) navi_navi_icon_text_pane_srt_t1

0x932d,	// (0x00014478) navi_tabs_2_long_pane_srt

0x932d,	// (0x00014478) navi_tabs_2_pane_srt

0x932d,	// (0x00014478) navi_tabs_3_long_pane_srt

0x932d,	// (0x00014478) navi_tabs_3_pane_srt

0x932d,	// (0x00014478) navi_tabs_4_pane_srt

0x50d8,	// (0x00010223) tabs_2_active_pane_srt_ParamLimits

0x50d8,	// (0x00010223) tabs_2_active_pane_srt

0x50e8,	// (0x00010233) tabs_2_passive_pane_srt_ParamLimits

0x50e8,	// (0x00010233) tabs_2_passive_pane_srt

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp1_srt

0xa2ee,	// (0x00015439) bg_passive_tab_pane_g1_cp1_srt

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp1_srt

0xa2f7,	// (0x00015442) bg_passive_tab_pane_g3_cp1_srt

0x61ec,	// (0x00011337) bg_active_tab_pane_cp1_srt_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp1_srt

0xa300,	// (0x0001544b) tabs_2_active_pane_srt_g1

0x1fc9,	// (0x0000d114) tabs_2_active_pane_srt_t1_ParamLimits

0x1fc9,	// (0x0000d114) tabs_2_active_pane_srt_t1

0xa2ee,	// (0x00015439) bg_active_tab_pane_g1_cp1_srt

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp1_srt

0xa2f7,	// (0x00015442) bg_active_tab_pane_g3_cp1_srt

0x50a5,	// (0x000101f0) tabs_3_active_pane_srt_ParamLimits

0x50a5,	// (0x000101f0) tabs_3_active_pane_srt

0x50b6,	// (0x00010201) tabs_3_passive_pane_cp_srt_ParamLimits

0x50b6,	// (0x00010201) tabs_3_passive_pane_cp_srt

0x50c7,	// (0x00010212) tabs_3_passive_pane_srt_ParamLimits

0x50c7,	// (0x00010212) tabs_3_passive_pane_srt

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b04,	// (0x00013c4f) bg_passive_tab_pane_cp2_srt

0x7d3a,	// (0x00012e85) bg_passive_tab_pane_g1_cp2_srt

0x77d5,	// (0x00012920) bg_passive_tab_pane_g2_cp2_srt

0x7d43,	// (0x00012e8e) bg_passive_tab_pane_g3_cp2_srt

0x61ec,	// (0x00011337) bg_active_tab_pane_cp2_srt_ParamLimits

0x61ec,	// (0x00011337) bg_active_tab_pane_cp2_srt

0xa2d4,	// (0x0001541f) tabs_3_active_pane_srt_g1

0x1fb3,	// (0x0000d0fe) tabs_3_active_pane_srt_t1_ParamLimits

0x1fb3,	// (0x0000d0fe) tabs_3_active_pane_srt_t1

0x7d3a,	// (0x00012e85) bg_active_tab_pane_g1_cp2_srt

0x77d5,	// (0x00012920) bg_active_tab_pane_g2_cp2_srt

0x7d43,	// (0x00012e8e) bg_active_tab_pane_g3_cp2_srt

0x505d,	// (0x000101a8) tabs_4_active_pane_srt_ParamLimits

0x505d,	// (0x000101a8) tabs_4_active_pane_srt

0x506f,	// (0x000101ba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x506f,	// (0x000101ba) tabs_4_passive_pane_cp2_srt

0x7e98,	// (0x00012fe3) aid_size_cell_toolbar

0x9e8c,	// (0x00014fd7) main_idle_act_pane_ParamLimits

0x80b7,	// (0x00013202) popup_large_graphic_colour_window_ParamLimits

0x149e,	// (0x0000c5e9) popup_toolbar_window_ParamLimits

0x149e,	// (0x0000c5e9) popup_toolbar_window

0xa092,	// (0x000151dd) list_single_graphic_2heading_pane_ParamLimits

0xa092,	// (0x000151dd) list_single_graphic_2heading_pane

0x7265,	// (0x000123b0) aid_size_cell_apps_grid_lsc_pane

0x7277,	// (0x000123c2) aid_size_cell_apps_grid_prt_pane

0x7f12,	// (0x0001305d) bg_wml_button_pane_cp1_ParamLimits

0x7f12,	// (0x0001305d) bg_wml_button_pane_cp1

0x19ea,	// (0x0000cb35) form_midp_field_text_pane_t1_ParamLimits

0x8b04,	// (0x00013c4f) input_focus_pane_cp050_ParamLimits

0x8d58,	// (0x00013ea3) list_midp_form_text_pane_ParamLimits

0x8cfe,	// (0x00013e49) input_focus_pane_cp051_ParamLimits

0x8d12,	// (0x00013e5d) list_midp_choice_pane_ParamLimits

0x1985,	// (0x0000cad0) list_single_2graphic_pane_cp3_ParamLimits

0x1985,	// (0x0000cad0) list_single_2graphic_pane_cp3

0x1999,	// (0x0000cae4) list_single_midp_graphic_pane_ParamLimits

0x1999,	// (0x0000cae4) list_single_midp_graphic_pane

0x4c81,	// (0x0000fdcc) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c81,	// (0x0000fdcc) list_single_graphic_2heading_pane_g1

0x4c8d,	// (0x0000fdd8) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c8d,	// (0x0000fdd8) list_single_graphic_2heading_pane_g4

0x4c99,	// (0x0000fde4) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c99,	// (0x0000fde4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a936) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a936) list_single_graphic_2heading_pane_g

0x4ca5,	// (0x0000fdf0) list_single_graphic_2heading_pane_t1_ParamLimits

0x4ca5,	// (0x0000fdf0) list_single_graphic_2heading_pane_t1

0x4cb9,	// (0x0000fe04) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cb9,	// (0x0000fe04) list_single_graphic_2heading_pane_t2

0x4cd5,	// (0x0000fe20) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cd5,	// (0x0000fe20) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a93d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a93d) list_single_graphic_2heading_pane_t

0x88ee,	// (0x00013a39) bg_popup_sub_pane_cp2

0x8918,	// (0x00013a63) grid_toobar_pane

0x4ced,	// (0x0000fe38) cell_toolbar_pane_ParamLimits

0x4ced,	// (0x0000fe38) cell_toolbar_pane

0x898e,	// (0x00013ad9) cell_toolbar_pane_g1_ParamLimits

0x898e,	// (0x00013ad9) cell_toolbar_pane_g1

0x89a2,	// (0x00013aed) cell_toolbar_pane_g2_ParamLimits

0x89a2,	// (0x00013aed) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a94b) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a94b) cell_toolbar_pane_g

0x89c4,	// (0x00013b0f) grid_highlight_pane_cp2_ParamLimits

0x89c4,	// (0x00013b0f) grid_highlight_pane_cp2

0x89de,	// (0x00013b29) toolbar_button_pane

0x89ea,	// (0x00013b35) toolbar_button_pane_g1

0x89f2,	// (0x00013b3d) toolbar_button_pane_g2

0x89fa,	// (0x00013b45) toolbar_button_pane_g3

0x8a02,	// (0x00013b4d) toolbar_button_pane_g4

0x8a0a,	// (0x00013b55) toolbar_button_pane_g5

0x8a12,	// (0x00013b5d) toolbar_button_pane_g6

0x8a1a,	// (0x00013b65) toolbar_button_pane_g7

0x8a22,	// (0x00013b6d) toolbar_button_pane_g8

0x8a2a,	// (0x00013b75) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a950) toolbar_button_pane_g

0x4d25,	// (0x0000fe70) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4d25,	// (0x0000fe70) list_single_2graphic_pane_g1_cp3

0xe729,	// (0x00019874) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe729,	// (0x00019874) list_single_2graphic_pane_g2_cp3

0x4d42,	// (0x0000fe8d) list_single_2graphic_pane_g3_cp3

0x4d4a,	// (0x0000fe95) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4d4a,	// (0x0000fe95) list_single_2graphic_pane_g4_cp3

0x4d56,	// (0x0000fea1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4d56,	// (0x0000fea1) list_single_2graphic_pane_t1_cp3

0x4d72,	// (0x0000febd) list_single_midp_graphic_pane_g2_ParamLimits

0x4d72,	// (0x0000febd) list_single_midp_graphic_pane_g2

0x7ea0,	// (0x00012feb) aid_zoom_text_primary

0x7ea8,	// (0x00012ff3) aid_zoom_text_secondary

0x7df7,	// (0x00012f42) status_small_pane_g7_ParamLimits

0x7df7,	// (0x00012f42) status_small_pane_g7

0x7e1a,	// (0x00012f65) status_small_pane_t1_ParamLimits

0x0040,	// (0x0000b18b) title_pane_g2

0x0003,

0xf592,	// (0x0001a6dd) title_pane_g

0x02c8,	// (0x0000b413) aid_size_cell_colour_1_pane_ParamLimits

0x02c8,	// (0x0000b413) aid_size_cell_colour_1_pane

0x02dc,	// (0x0000b427) aid_size_cell_colour_2_pane_ParamLimits

0x02dc,	// (0x0000b427) aid_size_cell_colour_2_pane

0x02f0,	// (0x0000b43b) aid_size_cell_colour_3_pane_ParamLimits

0x02f0,	// (0x0000b43b) aid_size_cell_colour_3_pane

0x0304,	// (0x0000b44f) aid_size_cell_colour_4_pane_ParamLimits

0x0304,	// (0x0000b44f) aid_size_cell_colour_4_pane

0x46df,	// (0x0000f82a) title_pane_stacon_g1_ParamLimits

0x46df,	// (0x0000f82a) title_pane_stacon_g1

0x9114,	// (0x0001425f) popup_note_wait_window_g3_ParamLimits

0x9114,	// (0x0001425f) popup_note_wait_window_g3

0x918a,	// (0x000142d5) popup_note_wait_window_t5_ParamLimits

0x918a,	// (0x000142d5) popup_note_wait_window_t5

0x5e77,	// (0x00010fc2) main_feb_china_hwr_fs_writing_pane

0x0ed0,	// (0x0000c01b) popup_feb_china_hwr_fs_window_ParamLimits

0x0ed0,	// (0x0000c01b) popup_feb_china_hwr_fs_window

0xe73a,	// (0x00019885) aid_size_cell_hwr_fs_ParamLimits

0xe73a,	// (0x00019885) aid_size_cell_hwr_fs

0x8b04,	// (0x00013c4f) bg_popup_sub_pane_cp3_ParamLimits

0x8b04,	// (0x00013c4f) bg_popup_sub_pane_cp3

0xe74f,	// (0x0001989a) grid_hwr_fs_pane_ParamLimits

0xe74f,	// (0x0001989a) grid_hwr_fs_pane

0x4dc1,	// (0x0000ff0c) linegrid_hwr_fs_pane_ParamLimits

0x4dc1,	// (0x0000ff0c) linegrid_hwr_fs_pane

0xe767,	// (0x000198b2) cell_hwr_fs_pane_ParamLimits

0xe767,	// (0x000198b2) cell_hwr_fs_pane

0x8b10,	// (0x00013c5b) linegrid_hwr_fs_pane_g1_ParamLimits

0x8b10,	// (0x00013c5b) linegrid_hwr_fs_pane_g1

0x194b,	// (0x0000ca96) linegrid_hwr_fs_pane_g2_ParamLimits

0x194b,	// (0x0000ca96) linegrid_hwr_fs_pane_g2

0x8b2e,	// (0x00013c79) linegrid_hwr_fs_pane_g3_ParamLimits

0x8b2e,	// (0x00013c79) linegrid_hwr_fs_pane_g3

0x4df3,	// (0x0000ff3e) linegrid_hwr_fs_pane_g4_ParamLimits

0x4df3,	// (0x0000ff3e) linegrid_hwr_fs_pane_g4

0x4e0d,	// (0x0000ff58) linegrid_hwr_fs_pane_g5_ParamLimits

0x4e0d,	// (0x0000ff58) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001a976) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001a976) linegrid_hwr_fs_pane_g

0x8b3a,	// (0x00013c85) cell_hwr_fs_pane_g1_ParamLimits

0x8b3a,	// (0x00013c85) cell_hwr_fs_pane_g1

0x8825,	// (0x00013970) cell_hwr_fs_pane_g2_ParamLimits

0x8825,	// (0x00013970) cell_hwr_fs_pane_g2

0x195d,	// (0x0000caa8) cell_hwr_fs_pane_g3_ParamLimits

0x195d,	// (0x0000caa8) cell_hwr_fs_pane_g3

0x196a,	// (0x0000cab5) cell_hwr_fs_pane_g4_ParamLimits

0x196a,	// (0x0000cab5) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001a981) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001a981) cell_hwr_fs_pane_g

0xe78d,	// (0x000198d8) cell_hwr_fs_pane_t1

0x5e77,	// (0x00010fc2) grid_highlight_pane_cp6

0x5e77,	// (0x00010fc2) main_idle_act2_pane

0x701c,	// (0x00012167) aid_inside_area_popup_secondary

0x1bbb,	// (0x0000cd06) aid_inside_area_window_primary_ParamLimits

0x1bbb,	// (0x0000cd06) aid_inside_area_window_primary

0xa43b,	// (0x00015586) ai2_news_ticker_pane

0xa443,	// (0x0001558e) aid_size_cell_ai1_link_ParamLimits

0xa443,	// (0x0001558e) aid_size_cell_ai1_link

0x1fdf,	// (0x0000d12a) popup_ai2_data_window_ParamLimits

0x1fdf,	// (0x0000d12a) popup_ai2_data_window

0xa473,	// (0x000155be) popup_ai2_link_window_ParamLimits

0xa473,	// (0x000155be) popup_ai2_link_window

0x8b04,	// (0x00013c4f) bg_popup_sub_pane_cp4_ParamLimits

0x8b04,	// (0x00013c4f) bg_popup_sub_pane_cp4

0xa487,	// (0x000155d2) grid_ai2_link_pane_ParamLimits

0xa487,	// (0x000155d2) grid_ai2_link_pane

0xa49e,	// (0x000155e9) popup_ai2_link_window_g1_ParamLimits

0xa49e,	// (0x000155e9) popup_ai2_link_window_g1

0xa4aa,	// (0x000155f5) popup_ai2_link_window_g2_ParamLimits

0xa4aa,	// (0x000155f5) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001ab4d) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001ab4d) popup_ai2_link_window_g

0xa4b9,	// (0x00015604) ai2_mp_button_pane

0xa4c1,	// (0x0001560c) ai2_mp_volume_pane

0x8cfe,	// (0x00013e49) bg_popup_sub_pane_cp5_ParamLimits

0x8cfe,	// (0x00013e49) bg_popup_sub_pane_cp5

0xa4c9,	// (0x00015614) heading_ai2_gene_pane_ParamLimits

0xa4c9,	// (0x00015614) heading_ai2_gene_pane

0xa4d5,	// (0x00015620) list_ai2_gene_pane_ParamLimits

0xa4d5,	// (0x00015620) list_ai2_gene_pane

0xa51d,	// (0x00015668) cell_ai2_link_pane_ParamLimits

0xa51d,	// (0x00015668) cell_ai2_link_pane

0xa533,	// (0x0001567e) cell_ai2_link_pane_g1

0x5e77,	// (0x00010fc2) grid_highlight_pane_cp7

0x5115,	// (0x00010260) ai2_mp_volume_pane_g1

0xa603,	// (0x0001574e) ai2_mp_volume_pane_g2

0x2009,	// (0x0000d154) list_ai2_gene_pane_t1

0xa60b,	// (0x00015756) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001ab66) ai2_mp_volume_pane_g

0x511d,	// (0x00010268) volume_small_pane_cp3

0xa613,	// (0x0001575e) aid_size_cell_ai2_button

0xa61b,	// (0x00015766) grid_ai2_button_pane

0xa624,	// (0x0001576f) cell_ai2_button_pane_ParamLimits

0xa624,	// (0x0001576f) cell_ai2_button_pane

0x5e6d,	// (0x00010fb8) cell_ai2_button_pane_g1

0x5e77,	// (0x00010fc2) grid_highlight_pane_cp8

0xa5c3,	// (0x0001570e) ai2_gene_pane_t1_ParamLimits

0xa5c3,	// (0x0001570e) ai2_gene_pane_t1

0x0e46,	// (0x0000bf91) aid_height_parent_landscape

0x1d45,	// (0x0000ce90) aid_height_set_list

0x9e8c,	// (0x00014fd7) aid_size_parent

0xa262,	// (0x000153ad) aid_size_cell_graphic_pane_ParamLimits

0xa4e5,	// (0x00015630) popup_ai2_data_window_g1_ParamLimits

0xa4e5,	// (0x00015630) popup_ai2_data_window_g1

0xa4f1,	// (0x0001563c) ai2_news_ticker_pane_g1

0xa4f9,	// (0x00015644) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001ab52) ai2_news_ticker_pane_g

0xa501,	// (0x0001564c) ai2_news_ticker_pane_t1

0xa50f,	// (0x0001565a) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001ab57) ai2_news_ticker_pane_t

0xa53c,	// (0x00015687) heading_ai2_gene_pane_g1

0xa544,	// (0x0001568f) heading_ai2_gene_pane_t1_ParamLimits

0xa544,	// (0x0001568f) heading_ai2_gene_pane_t1

0xa559,	// (0x000156a4) list_highlight_pane_cp6

0x1ff3,	// (0x0000d13e) ai2_gene_pane_ParamLimits

0x1ff3,	// (0x0000d13e) ai2_gene_pane

0x2017,	// (0x0000d162) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001ab5c) list_ai2_gene_pane_t

0xa594,	// (0x000156df) list_highlight_pane_cp8_ParamLimits

0xa594,	// (0x000156df) list_highlight_pane_cp8

0xa5a5,	// (0x000156f0) ai2_gene_pane_g1_ParamLimits

0xa5a5,	// (0x000156f0) ai2_gene_pane_g1

0xa5b7,	// (0x00015702) ai2_gene_pane_g2_ParamLimits

0xa5b7,	// (0x00015702) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001ab61) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001ab61) ai2_gene_pane_g

0x6773,	// (0x000118be) scroll_pane_cp12

0xe6e6,	// (0x00019831) control_pane_t3_ParamLimits

0xe6e6,	// (0x00019831) control_pane_t3

0x7e0b,	// (0x00012f56) status_small_pane_g8_ParamLimits

0x7e0b,	// (0x00012f56) status_small_pane_g8

0x0f65,	// (0x0000c0b0) popup_find_window_ParamLimits

0x11d4,	// (0x0000c31f) popup_note_image_window_ParamLimits

0x8954,	// (0x00013a9f) list_double2_graphic_pane_vc_g1_ParamLimits

0x8954,	// (0x00013a9f) list_double2_graphic_pane_vc_g1

0x8960,	// (0x00013aab) list_double2_graphic_pane_vc_g2_ParamLimits

0x8960,	// (0x00013aab) list_double2_graphic_pane_vc_g2

0x896c,	// (0x00013ab7) list_double2_graphic_pane_vc_g3_ParamLimits

0x896c,	// (0x00013ab7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a944) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a944) list_double2_graphic_pane_vc_g

0x8978,	// (0x00013ac3) list_double2_graphic_pane_vc_t1_ParamLimits

0x8978,	// (0x00013ac3) list_double2_graphic_pane_vc_t1

0x8960,	// (0x00013aab) list_single_heading_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_heading_pane_vc_g1

0x896c,	// (0x00013ab7) list_single_heading_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_heading_pane_vc_g

0x8a32,	// (0x00013b7d) list_single_heading_pane_vc_t1_ParamLimits

0x8a32,	// (0x00013b7d) list_single_heading_pane_vc_t1

0x8a48,	// (0x00013b93) list_single_heading_pane_vc_t2_ParamLimits

0x8a48,	// (0x00013b93) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001a965) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001a965) list_single_heading_pane_vc_t

0x8a5c,	// (0x00013ba7) list_setting_number_pane_vc_g1_ParamLimits

0x8a5c,	// (0x00013ba7) list_setting_number_pane_vc_g1

0x8a68,	// (0x00013bb3) list_setting_number_pane_vc_g2_ParamLimits

0x8a68,	// (0x00013bb3) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a96a) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a96a) list_setting_number_pane_vc_g

0x8a74,	// (0x00013bbf) list_setting_number_pane_vc_t1_ParamLimits

0x8a74,	// (0x00013bbf) list_setting_number_pane_vc_t1

0x8a88,	// (0x00013bd3) list_setting_number_pane_vc_t2_ParamLimits

0x8a88,	// (0x00013bd3) list_setting_number_pane_vc_t2

0x8aa4,	// (0x00013bef) list_setting_number_pane_vc_t3_ParamLimits

0x8aa4,	// (0x00013bef) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001a96f) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001a96f) list_setting_number_pane_vc_t

0x8aca,	// (0x00013c15) set_value_pane_vc_ParamLimits

0x8aca,	// (0x00013c15) set_value_pane_vc

0xa092,	// (0x000151dd) list_double2_graphic_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double2_graphic_pane_vc

0xa0a4,	// (0x000151ef) list_double2_large_graphic_pane_vc_ParamLimits

0xa0a4,	// (0x000151ef) list_double2_large_graphic_pane_vc

0xa092,	// (0x000151dd) list_double2_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double2_pane_vc

0xa092,	// (0x000151dd) list_double_graphic_heading_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_graphic_heading_pane_vc

0xa092,	// (0x000151dd) list_double_graphic_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_graphic_pane_vc

0xa092,	// (0x000151dd) list_double_heading_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_heading_pane_vc

0xa0a4,	// (0x000151ef) list_double_large_graphic_pane_vc_ParamLimits

0xa0a4,	// (0x000151ef) list_double_large_graphic_pane_vc

0xa092,	// (0x000151dd) list_double_number_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_number_pane_vc

0xa092,	// (0x000151dd) list_double_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_pane_vc

0xa092,	// (0x000151dd) list_double_time_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_double_time_pane_vc

0xa092,	// (0x000151dd) list_setting_number_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_setting_number_pane_vc

0xa092,	// (0x000151dd) list_setting_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_setting_pane_vc

0xa092,	// (0x000151dd) list_single_graphic_heading_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_single_graphic_heading_pane_vc

0xa092,	// (0x000151dd) list_single_heading_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_single_heading_pane_vc

0xa092,	// (0x000151dd) list_single_number_heading_pane_vc_ParamLimits

0xa092,	// (0x000151dd) list_single_number_heading_pane_vc

0xa658,	// (0x000157a3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa658,	// (0x000157a3) list_double_graphic_heading_pane_vc_g1

0x8960,	// (0x00013aab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8960,	// (0x00013aab) list_double_graphic_heading_pane_vc_g2

0x896c,	// (0x00013ab7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x896c,	// (0x00013ab7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0001ab6d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0001ab6d) list_double_graphic_heading_pane_vc_g

0xa664,	// (0x000157af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa664,	// (0x000157af) list_double_graphic_heading_pane_vc_t1

0x8a32,	// (0x00013b7d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8a32,	// (0x00013b7d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0001ab74) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0001ab74) list_double_graphic_heading_pane_vc_t

0x8a5c,	// (0x00013ba7) list_setting_pane_vc_g1_ParamLimits

0x8a5c,	// (0x00013ba7) list_setting_pane_vc_g1

0x8a68,	// (0x00013bb3) list_setting_pane_vc_g2_ParamLimits

0x8a68,	// (0x00013bb3) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a96a) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a96a) list_setting_pane_vc_g

0xa87c,	// (0x000159c7) list_setting_pane_vc_t1_ParamLimits

0xa87c,	// (0x000159c7) list_setting_pane_vc_t1

0xa890,	// (0x000159db) list_setting_pane_vc_t2_ParamLimits

0xa890,	// (0x000159db) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001abb7) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001abb7) list_setting_pane_vc_t

0x8aca,	// (0x00013c15) set_value_pane_cp_vc_ParamLimits

0x8aca,	// (0x00013c15) set_value_pane_cp_vc

0x8960,	// (0x00013aab) list_single_number_heading_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_single_number_heading_pane_vc_g1

0x896c,	// (0x00013ab7) list_single_number_heading_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_single_number_heading_pane_vc_g

0x8a32,	// (0x00013b7d) list_single_number_heading_pane_vc_t1_ParamLimits

0x8a32,	// (0x00013b7d) list_single_number_heading_pane_vc_t1

0xa8b2,	// (0x000159fd) list_single_number_heading_pane_vc_t2_ParamLimits

0xa8b2,	// (0x000159fd) list_single_number_heading_pane_vc_t2

0xa8c6,	// (0x00015a11) list_single_number_heading_pane_vc_t3_ParamLimits

0xa8c6,	// (0x00015a11) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0001abbc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001abbc) list_single_number_heading_pane_vc_t

0x8954,	// (0x00013a9f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8954,	// (0x00013a9f) list_single_graphic_heading_pane_vc_g1

0x8960,	// (0x00013aab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8960,	// (0x00013aab) list_single_graphic_heading_pane_vc_g4

0x896c,	// (0x00013ab7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x896c,	// (0x00013ab7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a944) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a944) list_single_graphic_heading_pane_vc_g

0x8a32,	// (0x00013b7d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8a32,	// (0x00013b7d) list_single_graphic_heading_pane_vc_t1

0xa8d8,	// (0x00015a23) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa8d8,	// (0x00015a23) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001abc3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001abc3) list_single_graphic_heading_pane_vc_t

0x8960,	// (0x00013aab) list_double2_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_double2_pane_vc_g1

0x896c,	// (0x00013ab7) list_double2_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_double2_pane_vc_g

0xa8ec,	// (0x00015a37) list_double2_pane_vc_t1_ParamLimits

0xa8ec,	// (0x00015a37) list_double2_pane_vc_t1

0xa902,	// (0x00015a4d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa902,	// (0x00015a4d) list_double2_large_graphic_pane_vc_g1

0xa90e,	// (0x00015a59) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa90e,	// (0x00015a59) list_double2_large_graphic_pane_vc_g2

0xa91a,	// (0x00015a65) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa91a,	// (0x00015a65) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001a774) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001a774) list_double2_large_graphic_pane_vc_g

0xa926,	// (0x00015a71) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa926,	// (0x00015a71) list_double2_large_graphic_pane_vc_t1

0xa93c,	// (0x00015a87) list_double_time_pane_vc_g1_ParamLimits

0xa93c,	// (0x00015a87) list_double_time_pane_vc_g1

0xa948,	// (0x00015a93) list_double_time_pane_vc_g2_ParamLimits

0xa948,	// (0x00015a93) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001abc8) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001abc8) list_double_time_pane_vc_g

0xa954,	// (0x00015a9f) list_double_time_pane_vc_t1_ParamLimits

0xa954,	// (0x00015a9f) list_double_time_pane_vc_t1

0xa96d,	// (0x00015ab8) list_double_time_pane_vc_t2_ParamLimits

0xa96d,	// (0x00015ab8) list_double_time_pane_vc_t2

0xa988,	// (0x00015ad3) list_double_time_pane_vc_t3_ParamLimits

0xa988,	// (0x00015ad3) list_double_time_pane_vc_t3

0xa9a0,	// (0x00015aeb) list_double_time_pane_vc_t4_ParamLimits

0xa9a0,	// (0x00015aeb) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001abcd) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001abcd) list_double_time_pane_vc_t

0x8960,	// (0x00013aab) list_double_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_double_pane_vc_g1

0x896c,	// (0x00013ab7) list_double_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_double_pane_vc_g

0xa9b4,	// (0x00015aff) list_double_pane_vc_t1_ParamLimits

0xa9b4,	// (0x00015aff) list_double_pane_vc_t1

0xa9c6,	// (0x00015b11) list_double_pane_vc_t2_ParamLimits

0xa9c6,	// (0x00015b11) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001abd6) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001abd6) list_double_pane_vc_t

0x8960,	// (0x00013aab) list_double_number_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_double_number_pane_vc_g1

0x896c,	// (0x00013ab7) list_double_number_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_double_number_pane_vc_g

0xa9de,	// (0x00015b29) list_double_number_pane_vc_t1_ParamLimits

0xa9de,	// (0x00015b29) list_double_number_pane_vc_t1

0xa9f2,	// (0x00015b3d) list_double_number_pane_vc_t2_ParamLimits

0xa9f2,	// (0x00015b3d) list_double_number_pane_vc_t2

0xa9c6,	// (0x00015b11) list_double_number_pane_vc_t3_ParamLimits

0xa9c6,	// (0x00015b11) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001abdb) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001abdb) list_double_number_pane_vc_t

0xaa04,	// (0x00015b4f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa04,	// (0x00015b4f) list_double_large_graphic_pane_vc_g1

0xaa10,	// (0x00015b5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa10,	// (0x00015b5b) list_double_large_graphic_pane_vc_g2

0xa91a,	// (0x00015a65) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa91a,	// (0x00015a65) list_double_large_graphic_pane_vc_g3

0xaa1f,	// (0x00015b6a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xaa1f,	// (0x00015b6a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001abe2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001abe2) list_double_large_graphic_pane_vc_g

0xaa2b,	// (0x00015b76) list_double_large_graphic_pane_vc_t1_ParamLimits

0xaa2b,	// (0x00015b76) list_double_large_graphic_pane_vc_t1

0xaa3d,	// (0x00015b88) list_double_large_graphic_pane_vc_t2_ParamLimits

0xaa3d,	// (0x00015b88) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001abeb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001abeb) list_double_large_graphic_pane_vc_t

0x8960,	// (0x00013aab) list_double_heading_pane_vc_g1_ParamLimits

0x8960,	// (0x00013aab) list_double_heading_pane_vc_g1

0x896c,	// (0x00013ab7) list_double_heading_pane_vc_g2_ParamLimits

0x896c,	// (0x00013ab7) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a757) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a757) list_double_heading_pane_vc_g

0xaa56,	// (0x00015ba1) list_double_heading_pane_vc_t1_ParamLimits

0xaa56,	// (0x00015ba1) list_double_heading_pane_vc_t1

0x8a32,	// (0x00013b7d) list_double_heading_pane_vc_t2_ParamLimits

0x8a32,	// (0x00013b7d) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0001abf0) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0001abf0) list_double_heading_pane_vc_t

0x8954,	// (0x00013a9f) list_double_graphic_pane_vc_g1_ParamLimits

0x8954,	// (0x00013a9f) list_double_graphic_pane_vc_g1

0xaa6a,	// (0x00015bb5) list_double_graphic_pane_vc_g2_ParamLimits

0xaa6a,	// (0x00015bb5) list_double_graphic_pane_vc_g2

0xaa79,	// (0x00015bc4) list_double_graphic_pane_vc_g3_ParamLimits

0xaa79,	// (0x00015bc4) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0001abf5) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0001abf5) list_double_graphic_pane_vc_g

0xaa85,	// (0x00015bd0) list_double_graphic_pane_vc_t1_ParamLimits

0xaa85,	// (0x00015bd0) list_double_graphic_pane_vc_t1

0xa9c6,	// (0x00015b11) list_double_graphic_pane_vc_t2_ParamLimits

0xa9c6,	// (0x00015b11) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0001abfc) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0001abfc) list_double_graphic_pane_vc_t

0x423b,	// (0x0000f386) aid_size_cell_fastswap

0xe441,	// (0x0001958c) aid_size_cell_touch_ParamLimits

0xe441,	// (0x0001958c) aid_size_cell_touch

0x44a8,	// (0x0000f5f3) popup_fast_swap_wide_window_ParamLimits

0x44a8,	// (0x0000f5f3) popup_fast_swap_wide_window

0xe58c,	// (0x000196d7) touch_pane_ParamLimits

0xe58c,	// (0x000196d7) touch_pane

0x6c58,	// (0x00011da3) button_value_adjust_pane_cp2

0x6c60,	// (0x00011dab) button_value_adjust_pane_cp4

0x6c82,	// (0x00011dcd) form_field_data_pane_cp2

0x07ef,	// (0x0000b93a) form_field_data_wide_pane_cp2

0x732f,	// (0x0001247a) bg_scroll_pane_ParamLimits

0x4842,	// (0x0000f98d) scroll_handle_pane_ParamLimits

0x4856,	// (0x0000f9a1) scroll_sc2_down_pane_ParamLimits

0x4856,	// (0x0000f9a1) scroll_sc2_down_pane

0x7360,	// (0x000124ab) scroll_sc2_up_pane_ParamLimits

0x7360,	// (0x000124ab) scroll_sc2_up_pane

0x2142,	// (0x0000d28d) grid_wheel_folder_pane_g1_ParamLimits

0x2142,	// (0x0000d28d) grid_wheel_folder_pane_g1

0x4a1b,	// (0x0000fb66) clock_nsta_pane_cp2_ParamLimits

0x4a1b,	// (0x0000fb66) clock_nsta_pane_cp2

0x0c1d,	// (0x0000bd68) listscroll_midp_pane_ParamLimits

0x0c2e,	// (0x0000bd79) midp_canvas_pane

0x7e86,	// (0x00012fd1) nsta_clock_indic_pane

0x7ee4,	// (0x0001302f) listscroll_form_pane_vc

0x7f00,	// (0x0001304b) listscroll_set_pane_vc_ParamLimits

0x7f00,	// (0x0001304b) listscroll_set_pane_vc

0x15fb,	// (0x0000c746) clock_nsta_pane

0x1625,	// (0x0000c770) indicator_nsta_pane

0x88ee,	// (0x00013a39) bg_popup_sub_pane_cp2_ParamLimits

0x8902,	// (0x00013a4d) find_pane_cp2_ParamLimits

0x8902,	// (0x00013a4d) find_pane_cp2

0x8918,	// (0x00013a63) grid_toobar_pane_ParamLimits

0x8ad8,	// (0x00013c23) list_form_gen_pane_vc_ParamLimits

0x8ad8,	// (0x00013c23) list_form_gen_pane_vc

0x8aee,	// (0x00013c39) scroll_pane_cp8_vc_ParamLimits

0x8aee,	// (0x00013c39) scroll_pane_cp8_vc

0x8b6a,	// (0x00013cb5) data_form_wide_pane_vc_ParamLimits

0x8b6a,	// (0x00013cb5) data_form_wide_pane_vc

0x8b76,	// (0x00013cc1) form_field_data_wide_pane_vc_g1

0x8b7e,	// (0x00013cc9) form_field_data_wide_pane_vc_t1_ParamLimits

0x8b7e,	// (0x00013cc9) form_field_data_wide_pane_vc_t1

0x6d3e,	// (0x00011e89) input_focus_pane_cp6_vc_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_cp6_vc

0x1a25,	// (0x0000cb70) list_midp_pane_ParamLimits

0xa2c8,	// (0x00015413) scroll_pane_cp16_ParamLimits

0xa2c8,	// (0x00015413) scroll_pane_cp16

0x8f0c,	// (0x00014057) button_value_adjust_pane_ParamLimits

0x8f0c,	// (0x00014057) button_value_adjust_pane

0x1d56,	// (0x0000cea1) button_value_adjust_pane_cp6_ParamLimits

0x1d56,	// (0x0000cea1) button_value_adjust_pane_cp6

0x1e70,	// (0x0000cfbb) settings_code_pane_cp_ParamLimits

0x1e70,	// (0x0000cfbb) settings_code_pane_cp

0x5e6d,	// (0x00010fb8) cell_touch_pane_g1

0x5e6d,	// (0x00010fb8) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a88d) cell_touch_pane_g

0x2025,	// (0x0000d170) cell_touch_pane_cp_ParamLimits

0x2025,	// (0x0000d170) cell_touch_pane_cp

0x2041,	// (0x0000d18c) cell_touch_pane_ParamLimits

0x2041,	// (0x0000d18c) cell_touch_pane

0x5e6d,	// (0x00010fb8) scroll_sc2_down_pane_g1

0x5e6d,	// (0x00010fb8) scroll_sc2_up_pane_g1

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp4_vc

0xa678,	// (0x000157c3) list_set_graphic_pane_vc_g1_ParamLimits

0xa678,	// (0x000157c3) list_set_graphic_pane_vc_g1

0xa684,	// (0x000157cf) list_set_graphic_pane_vc_g2_ParamLimits

0xa684,	// (0x000157cf) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0001ab79) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0001ab79) list_set_graphic_pane_vc_g

0xa690,	// (0x000157db) text_primary_small_cp13_vc_ParamLimits

0xa690,	// (0x000157db) text_primary_small_cp13_vc

0xa6a8,	// (0x000157f3) list_set_graphic_pane_vc_ParamLimits

0xa6a8,	// (0x000157f3) list_set_graphic_pane_vc

0x5e77,	// (0x00010fc2) input_focus_pane_cp2_vc

0x5e6d,	// (0x00010fb8) setting_code_pane_vc_g1

0xa6bc,	// (0x00015807) setting_code_pane_vc_t1

0xa6ca,	// (0x00015815) set_text_pane_vc_t1_ParamLimits

0xa6ca,	// (0x00015815) set_text_pane_vc_t1

0x5e77,	// (0x00010fc2) input_focus_pane_cp1_vc

0xa6e5,	// (0x00015830) list_set_text_pane_vc

0x5e6d,	// (0x00010fb8) setting_text_pane_vc_g1

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp2_vc

0xa6ef,	// (0x0001583a) setting_slider_graphic_pane_vc_g1

0xa6f7,	// (0x00015842) setting_slider_graphic_pane_vc_t1

0xa705,	// (0x00015850) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0001ab7e) setting_slider_graphic_pane_vc_t

0xa713,	// (0x0001585e) slider_set_pane_cp_vc

0xa71b,	// (0x00015866) slider_set_pane_vc_g1

0xa724,	// (0x0001586f) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0001ab83) slider_set_pane_vc_g

0x6e76,	// (0x00011fc1) set_opt_bg_pane_g1_copy1

0x6e7e,	// (0x00011fc9) set_opt_bg_pane_g2_copy1

0xa750,	// (0x0001589b) set_opt_bg_pane_g3_copy1

0x6e8e,	// (0x00011fd9) set_opt_bg_pane_g4_copy1

0x6e96,	// (0x00011fe1) set_opt_bg_pane_g5_copy1

0x6e9e,	// (0x00011fe9) set_opt_bg_pane_g6_copy1

0xa75a,	// (0x000158a5) set_opt_bg_pane_g7_copy1

0xa762,	// (0x000158ad) set_opt_bg_pane_g8_copy1

0xa76c,	// (0x000158b7) set_opt_bg_pane_g9_copy1

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp_vc

0xa776,	// (0x000158c1) setting_slider_pane_vc_t1

0xa6f7,	// (0x00015842) setting_slider_pane_vc_t2

0xa705,	// (0x00015850) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0001ab92) setting_slider_pane_vc_t

0xa713,	// (0x0001585e) slider_set_pane_vc

0x4e31,	// (0x0000ff7c) volume_set_pane_vc_g1

0x4e3a,	// (0x0000ff85) volume_set_pane_vc_g2

0x4e43,	// (0x0000ff8e) volume_set_pane_vc_g3

0x4e4c,	// (0x0000ff97) volume_set_pane_vc_g4

0x4e55,	// (0x0000ffa0) volume_set_pane_vc_g5

0x4e5e,	// (0x0000ffa9) volume_set_pane_vc_g6

0x4e67,	// (0x0000ffb2) volume_set_pane_vc_g7

0x4e70,	// (0x0000ffbb) volume_set_pane_vc_g8

0x4e79,	// (0x0000ffc4) volume_set_pane_vc_g9

0x4e82,	// (0x0000ffcd) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0001ab99) volume_set_pane_vc_g

0xa785,	// (0x000158d0) volume_set_pane_vc

0xa78d,	// (0x000158d8) button_value_adjust_pane_cp1_vc

0xa797,	// (0x000158e2) list_highlight_pane_cp2_vc

0xa7a0,	// (0x000158eb) list_set_pane_vc_ParamLimits

0xa7a0,	// (0x000158eb) list_set_pane_vc

0xa80a,	// (0x00015955) main_pane_set_vc_t1_ParamLimits

0xa80a,	// (0x00015955) main_pane_set_vc_t1

0xa81f,	// (0x0001596a) main_pane_set_vc_t2_ParamLimits

0xa81f,	// (0x0001596a) main_pane_set_vc_t2

0xa831,	// (0x0001597c) main_pane_set_vc_t3_ParamLimits

0xa831,	// (0x0001597c) main_pane_set_vc_t3

0xa845,	// (0x00015990) main_pane_set_vc_t4_ParamLimits

0xa845,	// (0x00015990) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0001abae) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0001abae) main_pane_set_vc_t

0xa859,	// (0x000159a4) setting_code_pane_vc_ParamLimits

0xa859,	// (0x000159a4) setting_code_pane_vc

0xa86a,	// (0x000159b5) setting_slider_graphic_pane_vc

0xa86a,	// (0x000159b5) setting_slider_pane_vc

0xa86a,	// (0x000159b5) setting_text_pane_vc

0xa86a,	// (0x000159b5) setting_volume_pane_vc

0xa874,	// (0x000159bf) scroll_pane_cp121_vc

0x6c46,	// (0x00011d91) set_content_pane_vc

0xaa97,	// (0x00015be2) button_value_adjust_pane_g1

0xaaa0,	// (0x00015beb) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0001ac01) button_value_adjust_pane_g

0xaaa9,	// (0x00015bf4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaaa9,	// (0x00015bf4) form_field_slider_wide_pane_vc_t1

0xaabd,	// (0x00015c08) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaabd,	// (0x00015c08) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0001ac06) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0001ac06) form_field_slider_wide_pane_vc_t

0x61ec,	// (0x00011337) input_focus_pane_cp10_vc_ParamLimits

0x61ec,	// (0x00011337) input_focus_pane_cp10_vc

0xaacf,	// (0x00015c1a) slider_cont_pane_cp1_vc_ParamLimits

0xaacf,	// (0x00015c1a) slider_cont_pane_cp1_vc

0xa71b,	// (0x00015866) slider_form_pane_g1_cp2

0xa724,	// (0x0001586f) slider_form_pane_g2_cp2

0xaae8,	// (0x00015c33) form_field_slider_pane_vc_t3

0xaaf6,	// (0x00015c41) form_field_slider_pane_vc_t4

0xab04,	// (0x00015c4f) slider_form_pane_vc_ParamLimits

0xab04,	// (0x00015c4f) slider_form_pane_vc

0xab11,	// (0x00015c5c) form_field_slider_pane_vc_t1_ParamLimits

0xab11,	// (0x00015c5c) form_field_slider_pane_vc_t1

0xaabd,	// (0x00015c08) form_field_slider_pane_vc_t2_ParamLimits

0xaabd,	// (0x00015c08) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0001ac16) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0001ac16) form_field_slider_pane_vc_t

0x61ec,	// (0x00011337) input_focus_pane_cp9_vc_ParamLimits

0x61ec,	// (0x00011337) input_focus_pane_cp9_vc

0xab2d,	// (0x00015c78) slider_cont_pane_vc_ParamLimits

0xab2d,	// (0x00015c78) slider_cont_pane_vc

0xab3f,	// (0x00015c8a) list_form_graphic_pane_cp_vc_ParamLimits

0xab3f,	// (0x00015c8a) list_form_graphic_pane_cp_vc

0x8b76,	// (0x00013cc1) form_field_popup_wide_pane_vc_g1

0xab54,	// (0x00015c9f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xab54,	// (0x00015c9f) form_field_popup_wide_pane_vc_t1

0x6d3e,	// (0x00011e89) input_focus_pane_cp8_vc_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_cp8_vc

0xab6b,	// (0x00015cb6) list_form_wide_pane_vc_ParamLimits

0xab6b,	// (0x00015cb6) list_form_wide_pane_vc

0xab77,	// (0x00015cc2) list_form_graphic_pane_vc_g1

0xab7f,	// (0x00015cca) list_form_graphic_pane_vc_t1_ParamLimits

0xab7f,	// (0x00015cca) list_form_graphic_pane_vc_t1

0x5f57,	// (0x000110a2) list_highlight_pane_cp5_vc_ParamLimits

0x5f57,	// (0x000110a2) list_highlight_pane_cp5_vc

0xab9b,	// (0x00015ce6) list_form_graphic_pane_vc_ParamLimits

0xab9b,	// (0x00015ce6) list_form_graphic_pane_vc

0x8b76,	// (0x00013cc1) form_field_popup_pane_vc_g1

0xabb1,	// (0x00015cfc) form_field_popup_pane_vc_t1_ParamLimits

0xabb1,	// (0x00015cfc) form_field_popup_pane_vc_t1

0x6d3e,	// (0x00011e89) input_focus_pane_cp7_vc_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_cp7_vc

0xabc8,	// (0x00015d13) list_form_pane_vc_ParamLimits

0xabc8,	// (0x00015d13) list_form_pane_vc

0xabd4,	// (0x00015d1f) data_form_pane_vc_t1_ParamLimits

0xabd4,	// (0x00015d1f) data_form_pane_vc_t1

0x6e76,	// (0x00011fc1) input_focus_pane_vc_g1

0x6e7e,	// (0x00011fc9) input_focus_pane_vc_g2

0x6e86,	// (0x00011fd1) input_focus_pane_vc_g3

0x6e8e,	// (0x00011fd9) input_focus_pane_vc_g4

0x6e96,	// (0x00011fe1) input_focus_pane_vc_g5

0x6e9e,	// (0x00011fe9) input_focus_pane_vc_g6

0x6ea6,	// (0x00011ff1) input_focus_pane_vc_g7

0x6eae,	// (0x00011ff9) input_focus_pane_vc_g8

0x6eb6,	// (0x00012001) input_focus_pane_vc_g9

0x5e6d,	// (0x00010fb8) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a816) input_focus_pane_vc_g

0x8b6a,	// (0x00013cb5) data_form_pane_vc_ParamLimits

0x8b6a,	// (0x00013cb5) data_form_pane_vc

0x8b76,	// (0x00013cc1) form_field_data_pane_vc_g1

0xabef,	// (0x00015d3a) form_field_data_pane_vc_t1_ParamLimits

0xabef,	// (0x00015d3a) form_field_data_pane_vc_t1

0x6d3e,	// (0x00011e89) input_focus_pane_vc_ParamLimits

0x6d3e,	// (0x00011e89) input_focus_pane_vc

0xac09,	// (0x00015d54) button_value_adjust_pane_cp3_vc

0xac11,	// (0x00015d5c) button_value_adjust_pane_cp5_vc

0xac19,	// (0x00015d64) form_field_data_pane_vc_ParamLimits

0xac19,	// (0x00015d64) form_field_data_pane_vc

0xac30,	// (0x00015d7b) form_field_data_pane_vc_cp2

0xac38,	// (0x00015d83) form_field_data_wide_pane_vc_ParamLimits

0xac38,	// (0x00015d83) form_field_data_wide_pane_vc

0xac4e,	// (0x00015d99) form_field_data_wide_pane_vc_cp2

0xac56,	// (0x00015da1) form_field_popup_pane_vc_ParamLimits

0xac56,	// (0x00015da1) form_field_popup_pane_vc

0xac6d,	// (0x00015db8) form_field_popup_wide_pane_vc_ParamLimits

0xac6d,	// (0x00015db8) form_field_popup_wide_pane_vc

0xac83,	// (0x00015dce) form_field_slider_pane_vc_ParamLimits

0xac83,	// (0x00015dce) form_field_slider_pane_vc

0xac96,	// (0x00015de1) form_field_slider_wide_pane_vc_ParamLimits

0xac96,	// (0x00015de1) form_field_slider_wide_pane_vc

0x205f,	// (0x0000d1aa) grid_touch_1_pane_ParamLimits

0x205f,	// (0x0000d1aa) grid_touch_1_pane

0x2073,	// (0x0000d1be) grid_touch_2_pane_ParamLimits

0x2073,	// (0x0000d1be) grid_touch_2_pane

0xad6b,	// (0x00015eb6) touch_pane_g1_ParamLimits

0xad6b,	// (0x00015eb6) touch_pane_g1

0xaccd,	// (0x00015e18) cell_app_pane_cp_wide_ParamLimits

0xaccd,	// (0x00015e18) cell_app_pane_cp_wide

0xacde,	// (0x00015e29) grid_popup_fast_wide_pane_ParamLimits

0xacde,	// (0x00015e29) grid_popup_fast_wide_pane

0xacf2,	// (0x00015e3d) scroll_pane_cp19_ParamLimits

0xacf2,	// (0x00015e3d) scroll_pane_cp19

0x5e77,	// (0x00010fc2) bg_popup_window_pane_cp20

0xad06,	// (0x00015e51) listscroll_popup_fast_wide_pane

0x7088,	// (0x000121d3) grid_indicator_nsta_pane

0xad0e,	// (0x00015e59) clock_nsta_pane_g1

0xad17,	// (0x00015e62) clock_nsta_pane_t1

0x209d,	// (0x0000d1e8) cell_indicator_nsta_pane_ParamLimits

0x209d,	// (0x0000d1e8) cell_indicator_nsta_pane

0xad6b,	// (0x00015eb6) cell_indicator_nsta_pane_g1

0x20b6,	// (0x0000d201) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0001ac20) cell_indicator_nsta_pane_g

0xad8f,	// (0x00015eda) clock_nsta_pane_cp

0xad97,	// (0x00015ee2) indicator_nsta_pane_cp

0xad9f,	// (0x00015eea) nsta_clock_indic_pane_g1

0x603a,	// (0x00011185) grid_indicator_pane

0x7455,	// (0x000125a0) scroll_pane_cp29

0x496a,	// (0x0000fab5) indicator_nsta_pane_cp2_ParamLimits

0x496a,	// (0x0000fab5) indicator_nsta_pane_cp2

0x5f57,	// (0x000110a2) main_apps_wheel_pane

0x8da1,	// (0x00013eec) form_midp_field_text_pane_ParamLimits

0x8eec,	// (0x00014037) scroll_bar_cp050_ParamLimits

0xadd7,	// (0x00015f22) cell_indicator_pane_ParamLimits

0xadd7,	// (0x00015f22) cell_indicator_pane

0xadee,	// (0x00015f39) cell_indicator_pane_g1

0x20cc,	// (0x0000d217) grid_wheel_folder_pane_ParamLimits

0x20cc,	// (0x0000d217) grid_wheel_folder_pane

0x20da,	// (0x0000d225) list_wheel_apps_pane_ParamLimits

0x20da,	// (0x0000d225) list_wheel_apps_pane

0x20e8,	// (0x0000d233) main_apps_wheel_pane_g1_ParamLimits

0x20e8,	// (0x0000d233) main_apps_wheel_pane_g1

0x20f4,	// (0x0000d23f) main_apps_wheel_pane_g2_ParamLimits

0x20f4,	// (0x0000d23f) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0001ac2f) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0001ac2f) main_apps_wheel_pane_g

0x2102,	// (0x0000d24d) main_apps_wheel_pane_t1_ParamLimits

0x2102,	// (0x0000d24d) main_apps_wheel_pane_t1

0x2116,	// (0x0000d261) list_wheel_apps_pane_g1

0x211e,	// (0x0000d269) list_wheel_apps_pane_g2

0x2126,	// (0x0000d271) list_wheel_apps_pane_g3

0x212e,	// (0x0000d279) list_wheel_apps_pane_g4

0x2138,	// (0x0000d283) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0001ac34) list_wheel_apps_pane_g

0x7a08,	// (0x00012b53) navi_icon_text_pane

0x14f6,	// (0x0000c641) aid_fill_nsta

0x214f,	// (0x0000d29a) navi_icon_text_pane_g1

0x215b,	// (0x0000d2a6) navi_icon_text_pane_t1

0x0c05,	// (0x0000bd50) list_set_graphic_pane_t1_ParamLimits

0x0c05,	// (0x0000bd50) list_set_graphic_pane_t1

0x960a,	// (0x00014755) popup_midp_note_alarm_window_t6_ParamLimits

0x960a,	// (0x00014755) popup_midp_note_alarm_window_t6

0x961c,	// (0x00014767) popup_midp_note_alarm_window_t7_ParamLimits

0x961c,	// (0x00014767) popup_midp_note_alarm_window_t7

0x962e,	// (0x00014779) popup_midp_note_alarm_window_t8_ParamLimits

0x962e,	// (0x00014779) popup_midp_note_alarm_window_t8

0x9640,	// (0x0001478b) popup_midp_note_alarm_window_t9_ParamLimits

0x9640,	// (0x0001478b) popup_midp_note_alarm_window_t9

0x9652,	// (0x0001479d) popup_midp_note_alarm_window_t10_ParamLimits

0x9652,	// (0x0001479d) popup_midp_note_alarm_window_t10

0x9664,	// (0x000147af) popup_midp_note_alarm_window_t11_ParamLimits

0x9664,	// (0x000147af) popup_midp_note_alarm_window_t11

0x9676,	// (0x000147c1) scroll_pane_cp17_ParamLimits

0x9676,	// (0x000147c1) scroll_pane_cp17

0x4e31,	// (0x0000ff7c) volume_small_pane_cp_g1

0x5126,	// (0x00010271) volume_small_pane_cp_g2

0x512f,	// (0x0001027a) volume_small_pane_cp_g3

0x5138,	// (0x00010283) volume_small_pane_cp_g4

0x5141,	// (0x0001028c) volume_small_pane_cp_g5

0x514a,	// (0x00010295) volume_small_pane_cp_g6

0x5153,	// (0x0001029e) volume_small_pane_cp_g7

0x515c,	// (0x000102a7) volume_small_pane_cp_g8

0x5165,	// (0x000102b0) volume_small_pane_cp_g9

0x516e,	// (0x000102b9) volume_small_pane_cp_g10

0x7c63,	// (0x00012dae) midp_ticker_pane_g1_ParamLimits

0x7c6f,	// (0x00012dba) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a8de) midp_ticker_pane_g_ParamLimits

0x0cc5,	// (0x0000be10) midp_ticker_pane_t1_ParamLimits

0x1516,	// (0x0000c661) aid_fill_nsta_2

0x8ed8,	// (0x00014023) list_form2_midp_pane

0xa046,	// (0x00015191) midp_editing_number_pane_ParamLimits

0xa055,	// (0x000151a0) midp_ticker_pane_ParamLimits

0xaed5,	// (0x00016020) form2_midp_field_pane

0xaef9,	// (0x00016044) scroll_pane_cp51

0xaf19,	// (0x00016064) form2_midp_button_pane_ParamLimits

0xaf19,	// (0x00016064) form2_midp_button_pane

0xaf2b,	// (0x00016076) form2_midp_content_pane_ParamLimits

0xaf2b,	// (0x00016076) form2_midp_content_pane

0xaf45,	// (0x00016090) form2_midp_field_choice_group_pane

0xaf4d,	// (0x00016098) form2_midp_field_pane_g1

0xaf55,	// (0x000160a0) form2_midp_field_pane_g2

0xaf5d,	// (0x000160a8) form2_midp_field_pane_g3

0xaf65,	// (0x000160b0) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0001ac59) form2_midp_field_pane_g

0xaf6d,	// (0x000160b8) form2_midp_gauge_slider_pane

0xaf75,	// (0x000160c0) form2_midp_gauge_wait_pane

0xaf7d,	// (0x000160c8) form2_midp_image_pane_ParamLimits

0xaf7d,	// (0x000160c8) form2_midp_image_pane

0xaf98,	// (0x000160e3) form2_midp_label_pane_ParamLimits

0xaf98,	// (0x000160e3) form2_midp_label_pane

0x2189,	// (0x0000d2d4) form2_midp_label_pane_cp_ParamLimits

0x2189,	// (0x0000d2d4) form2_midp_label_pane_cp

0xafd2,	// (0x0001611d) form2_midp_string_pane_ParamLimits

0xafd2,	// (0x0001611d) form2_midp_string_pane

0x21aa,	// (0x0000d2f5) form2_midp_text_pane_ParamLimits

0x21aa,	// (0x0000d2f5) form2_midp_text_pane

0xb001,	// (0x0001614c) form2_midp_time_pane

0xb011,	// (0x0001615c) input_focus_pane_cp51_ParamLimits

0xb011,	// (0x0001615c) input_focus_pane_cp51

0xb029,	// (0x00016174) form2_midp_label_pane_t1_ParamLimits

0xb029,	// (0x00016174) form2_midp_label_pane_t1

0x21c7,	// (0x0000d312) form2_mdip_text_pane_t1_ParamLimits

0x21c7,	// (0x0000d312) form2_mdip_text_pane_t1

0xb089,	// (0x000161d4) form2_midp_time_pane_t1

0xb0a4,	// (0x000161ef) form2_midp_gauge_slider_pane_t1

0x21e3,	// (0x0000d32e) form2_midp_gauge_slider_pane_t2

0x21f5,	// (0x0000d340) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0001ac62) form2_midp_gauge_slider_pane_t

0xb0da,	// (0x00016225) form2_midp_slider_pane

0xb0e6,	// (0x00016231) form2_midp_gauge_wait_pane_t1

0xb0f4,	// (0x0001623f) form2_midp_wait_pane_ParamLimits

0xb0f4,	// (0x0001623f) form2_midp_wait_pane

0x2207,	// (0x0000d352) list_single_2graphic_pane_cp4_ParamLimits

0x2207,	// (0x0000d352) list_single_2graphic_pane_cp4

0x1999,	// (0x0000cae4) list_single_midp_graphic_pane_cp_ParamLimits

0x1999,	// (0x0000cae4) list_single_midp_graphic_pane_cp

0x5e77,	// (0x00010fc2) list_highlight_pane_cp20

0xb14e,	// (0x00016299) list_single_2graphic_pane_g1_cp4

0xb156,	// (0x000162a1) list_single_2graphic_pane_g2_cp4

0xb15e,	// (0x000162a9) list_single_2graphic_pane_t1_cp4

0x5f57,	// (0x000110a2) list_highlight_pane_cp21

0xb16d,	// (0x000162b8) list_single_midp_graphic_pane_g4_cp

0xb17c,	// (0x000162c7) list_single_midp_graphic_pane_t1_cp

0x221c,	// (0x0000d367) form2_mdip_string_pane_t1_ParamLimits

0x221c,	// (0x0000d367) form2_mdip_string_pane_t1

0x5e77,	// (0x00010fc2) bg_wml_button_pane_cp2

0x5e6d,	// (0x00010fb8) form2_midp_image_pane_g1

0x6a20,	// (0x00011b6b) list_double_large_graphic_pane_g5_ParamLimits

0x6a20,	// (0x00011b6b) list_double_large_graphic_pane_g5

0x0c1d,	// (0x0000bd68) midp_form_pane_ParamLimits

0x5f57,	// (0x000110a2) main_apps_wheel_pane_ParamLimits

0x1252,	// (0x0000c39d) popup_preview_window_ParamLimits

0x1252,	// (0x0000c39d) popup_preview_window

0x8476,	// (0x000135c1) popup_touch_info_window_ParamLimits

0x8476,	// (0x000135c1) popup_touch_info_window

0x8494,	// (0x000135df) popup_touch_menu_window_ParamLimits

0x8494,	// (0x000135df) popup_touch_menu_window

0x5e63,	// (0x00010fae) bg_popup_sub_pane_cp6

0xb28a,	// (0x000163d5) list_touch_menu_pane

0xb292,	// (0x000163dd) list_single_touch_menu_pane_ParamLimits

0xb292,	// (0x000163dd) list_single_touch_menu_pane

0xb2a9,	// (0x000163f4) list_single_touch_menu_pane_t1

0x5f57,	// (0x000110a2) bg_popup_sub_pane_cp7_ParamLimits

0x5f57,	// (0x000110a2) bg_popup_sub_pane_cp7

0xb2b7,	// (0x00016402) heading_sub_pane

0xb2bf,	// (0x0001640a) list_touch_info_pane_ParamLimits

0xb2bf,	// (0x0001640a) list_touch_info_pane

0xb2ce,	// (0x00016419) list_single_touch_info_pane_ParamLimits

0xb2ce,	// (0x00016419) list_single_touch_info_pane

0xb2e0,	// (0x0001642b) list_single_touch_info_pane_t1

0xb2ee,	// (0x00016439) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0001ac70) list_single_touch_info_pane_t

0x7b88,	// (0x00012cd3) bg_popup_heading_pane_cp

0xb2fc,	// (0x00016447) heading_sub_pane_t1

0x8b04,	// (0x00013c4f) bg_popup_preview_window_pane_cp_ParamLimits

0x8b04,	// (0x00013c4f) bg_popup_preview_window_pane_cp

0xb2b7,	// (0x00016402) heading_preview_pane

0xb2bf,	// (0x0001640a) list_preview_pane_ParamLimits

0xb2bf,	// (0x0001640a) list_preview_pane

0xb30a,	// (0x00016455) popup_preview_window_g1

0xb2ce,	// (0x00016419) list_single_preview_pane_ParamLimits

0xb2ce,	// (0x00016419) list_single_preview_pane

0xb312,	// (0x0001645d) list_single_preview_pane_g1

0xb31a,	// (0x00016465) list_single_preview_pane_t1

0xb2e0,	// (0x0001642b) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0001ac75) list_single_preview_pane_t

0xb328,	// (0x00016473) bg_popup_heading_pane_cp2_ParamLimits

0xb328,	// (0x00016473) bg_popup_heading_pane_cp2

0xb33e,	// (0x00016489) heading_preview_pane_g1

0xb346,	// (0x00016491) heading_preview_pane_t1_ParamLimits

0xb346,	// (0x00016491) heading_preview_pane_t1

0x605d,	// (0x000111a8) soft_indicator_pane_t1_ParamLimits

0x6750,	// (0x0001189b) scroll_pane_ParamLimits

0x734e,	// (0x00012499) scroll_sc2_left_pane

0x7357,	// (0x000124a2) scroll_sc2_right_pane

0x7376,	// (0x000124c1) scroll_bg_pane_g1_ParamLimits

0x738b,	// (0x000124d6) scroll_bg_pane_g2_ParamLimits

0x73a3,	// (0x000124ee) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a86d) scroll_bg_pane_g_ParamLimits

0x7376,	// (0x000124c1) scroll_handle_pane_g1_ParamLimits

0x73c5,	// (0x00012510) scroll_handle_pane_g2_ParamLimits

0x73a3,	// (0x000124ee) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a874) scroll_handle_pane_g_ParamLimits

0x7f42,	// (0x0001308d) popup_choice_list_window_ParamLimits

0x7f42,	// (0x0001308d) popup_choice_list_window

0x88fa,	// (0x00013a45) choice_list_pane

0x89b6,	// (0x00013b01) cell_toolbar_pane_t1

0x89de,	// (0x00013b29) toolbar_button_pane_ParamLimits

0x9b36,	// (0x00014c81) ai_gene_pane_1_t2_ParamLimits

0x9b36,	// (0x00014c81) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001aa8c) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001aa8c) ai_gene_pane_1_t

0xb363,	// (0x000164ae) scroll_sc2_left_pane_g1

0xb363,	// (0x000164ae) scroll_sc2_right_pane_g1

0x7f12,	// (0x0001305d) bg_popup_sub_pane_cp10

0xb36d,	// (0x000164b8) list_choice_list_pane

0xb384,	// (0x000164cf) list_single_choice_list_pane_ParamLimits

0xb384,	// (0x000164cf) list_single_choice_list_pane

0xb398,	// (0x000164e3) list_single_choice_list_pane_g1

0xb3a0,	// (0x000164eb) list_single_choice_list_pane_t1_ParamLimits

0xb3a0,	// (0x000164eb) list_single_choice_list_pane_t1

0xb3b5,	// (0x00016500) choice_list_pane_g1

0xb3bd,	// (0x00016508) choice_list_pane_t1

0x5e63,	// (0x00010fae) input_focus_pane_cp11

0x7230,	// (0x0001237b) title_pane_stacon_g2_ParamLimits

0x7230,	// (0x0001237b) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a853) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a853) title_pane_stacon_g

0x7b88,	// (0x00012cd3) cursor_press_pane

0x0f1d,	// (0x0000c068) popup_fep_hwr_window_ParamLimits

0x0f1d,	// (0x0000c068) popup_fep_hwr_window

0x8064,	// (0x000131af) popup_fep_vkb_window_ParamLimits

0x8064,	// (0x000131af) popup_fep_vkb_window

0xb3cb,	// (0x00016516) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0001ac9e) fep_vkb_side_pane_g_ParamLimits

0x51b0,	// (0x000102fb) fep_hwr_candidate_pane_ParamLimits

0x51b0,	// (0x000102fb) fep_hwr_candidate_pane

0x51da,	// (0x00010325) fep_hwr_side_pane_ParamLimits

0x51da,	// (0x00010325) fep_hwr_side_pane

0x51fa,	// (0x00010345) fep_hwr_top_pane_ParamLimits

0x51fa,	// (0x00010345) fep_hwr_top_pane

0x5212,	// (0x0001035d) fep_hwr_write_pane_ParamLimits

0x5212,	// (0x0001035d) fep_hwr_write_pane

0xfb53,	// (0x0001ac9e) fep_vkb_side_pane_g

0xb3d3,	// (0x0001651e) fep_hwr_top_pane_g1

0xb3e5,	// (0x00016530) fep_hwr_top_pane_g2

0x524c,	// (0x00010397) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0001ac7a) fep_hwr_top_pane_g

0x5261,	// (0x000103ac) fep_hwr_top_text_pane

0x751c,	// (0x00012667) fep_hwr_top_text_pane_g1

0xb41b,	// (0x00016566) fep_hwr_top_text_pane_t1

0x5357,	// (0x000104a2) fep_hwr_candidate_pane_g1

0xb66e,	// (0x000167b9) fep_vkb_keypad_pane_g3_ParamLimits

0xb66e,	// (0x000167b9) fep_vkb_keypad_pane_g3

0xb696,	// (0x000167e1) fep_vkb_keypad_pane_g4_ParamLimits

0xb696,	// (0x000167e1) fep_vkb_keypad_pane_g4

0xb705,	// (0x00016850) fep_vkb_bottom_pane_g2_ParamLimits

0xb705,	// (0x00016850) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0001aca5) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0001aca5) fep_vkb_bottom_pane_g

0xb363,	// (0x000164ae) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0001acaf) cell_vkb_side_pane_g

0xb790,	// (0x000168db) cell_vkb_side_pane_t1

0xb79e,	// (0x000168e9) cell_vkb_side_pane_t1_copy1

0xb363,	// (0x000164ae) bg_fep_vkb_candidate_pane_g2

0xb8ca,	// (0x00016a15) cell_vkb_candidate_pane_ParamLimits

0xb429,	// (0x00016574) aid_size_cell_vkb_ParamLimits

0xb429,	// (0x00016574) aid_size_cell_vkb

0xb8ca,	// (0x00016a15) cell_vkb_candidate_pane

0x537e,	// (0x000104c9) bg_popup_fep_shadow_pane_g1

0x22f7,	// (0x0000d442) fep_vkb_bottom_pane_ParamLimits

0x22f7,	// (0x0000d442) fep_vkb_bottom_pane

0xb4ed,	// (0x00016638) fep_vkb_candidate_pane_ParamLimits

0xb4ed,	// (0x00016638) fep_vkb_candidate_pane

0x231c,	// (0x0000d467) fep_vkb_keypad_pane_ParamLimits

0x231c,	// (0x0000d467) fep_vkb_keypad_pane

0x2358,	// (0x0000d4a3) fep_vkb_side_pane_ParamLimits

0x2358,	// (0x0000d4a3) fep_vkb_side_pane

0x2394,	// (0x0000d4df) fep_vkb_top_pane_ParamLimits

0x2394,	// (0x0000d4df) fep_vkb_top_pane

0xb5c7,	// (0x00016712) fep_vkb_top_pane_g1_ParamLimits

0xb5c7,	// (0x00016712) fep_vkb_top_pane_g1

0xb5d6,	// (0x00016721) fep_vkb_top_pane_g2_ParamLimits

0xb5d6,	// (0x00016721) fep_vkb_top_pane_g2

0xb5e5,	// (0x00016730) fep_vkb_top_pane_g3_ParamLimits

0xb5e5,	// (0x00016730) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0001ac95) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0001ac95) fep_vkb_top_pane_g

0xb603,	// (0x0001674e) fep_vkb_top_text_pane_ParamLimits

0xb603,	// (0x0001674e) fep_vkb_top_text_pane

0x23d0,	// (0x0000d51b) fep_vkb_side_pane_g1_ParamLimits

0x23d0,	// (0x0000d51b) fep_vkb_side_pane_g1

0xb65d,	// (0x000167a8) grid_vkb_side_pane_ParamLimits

0xb65d,	// (0x000167a8) grid_vkb_side_pane

0x5386,	// (0x000104d1) bg_popup_fep_shadow_pane_g2

0x538f,	// (0x000104da) bg_popup_fep_shadow_pane_g3

0x5397,	// (0x000104e2) bg_popup_fep_shadow_pane_g4

0x53a0,	// (0x000104eb) bg_popup_fep_shadow_pane_g5

0x53aa,	// (0x000104f5) bg_popup_fep_shadow_pane_g6

0x53b2,	// (0x000104fd) bg_popup_fep_shadow_pane_g7

0x6e8e,	// (0x00011fd9) bg_popup_fep_shadow_pane_g8

0xb6b4,	// (0x000167ff) grid_vkb_keypad_number_pane_ParamLimits

0xb6b4,	// (0x000167ff) grid_vkb_keypad_number_pane

0xb6c4,	// (0x0001680f) grid_vkb_keypad_pane_ParamLimits

0xb6c4,	// (0x0001680f) grid_vkb_keypad_pane

0xb6ea,	// (0x00016835) fep_vkb_bottom_pane_g1_ParamLimits

0xb6ea,	// (0x00016835) fep_vkb_bottom_pane_g1

0xb713,	// (0x0001685e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb713,	// (0x0001685e) grid_vkb_keypad_bottom_left_pane

0xb728,	// (0x00016873) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb728,	// (0x00016873) grid_vkb_keypad_bottom_right_pane

0xb73d,	// (0x00016888) fep_vkb_top_text_pane_g1

0x2417,	// (0x0000d562) fep_vkb_top_text_pane_t1

0x2429,	// (0x0000d574) cell_vkb_side_pane_ParamLimits

0x2429,	// (0x0000d574) cell_vkb_side_pane

0xb363,	// (0x000164ae) cell_vkb_side_pane_g1

0xb7ac,	// (0x000168f7) cell_vkb_keypad_pane_ParamLimits

0xb7ac,	// (0x000168f7) cell_vkb_keypad_pane

0xb821,	// (0x0001696c) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0001acc2) bg_popup_fep_shadow_pane_g

0x53c4,	// (0x0001050f) cell_hwr_side_pane_g1

0x53c4,	// (0x0001050f) cell_hwr_side_pane_g2

0xb82b,	// (0x00016976) cell_vkb_keypad_pane_t1

0x243f,	// (0x0000d58a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x243f,	// (0x0000d58a) cell_vkb_keypad_bottom_left_pane

0x2454,	// (0x0000d59f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2454,	// (0x0000d59f) cell_vkb_keypad_bottom_right_pane

0xb363,	// (0x000164ae) cell_vkb_keypad_bottom_left_pane_g1

0xb363,	// (0x000164ae) cell_vkb_keypad_bottom_right_pane_g1

0xb88f,	// (0x000169da) cell_vkb_keypad_number_pane_ParamLimits

0xb88f,	// (0x000169da) cell_vkb_keypad_number_pane

0xb8ae,	// (0x000169f9) cell_vkb_keypad_number_pane_g1

0xb8b8,	// (0x00016a03) cell_vkb_keypad_number_pane_g2

0xb8c1,	// (0x00016a0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0001acb4) cell_vkb_keypad_number_pane_g

0xb82b,	// (0x00016976) cell_vkb_keypad_number_pane_t1

0xb8e5,	// (0x00016a30) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0001acd5) cell_hwr_side_pane_g

0xb8fe,	// (0x00016a49) cell_hwr_side_pane_t1

0x53ce,	// (0x00010519) cell_hwr_side_pane_t1_copy1

0x53dc,	// (0x00010527) cell_hwr_candidate_pane_g1

0x540b,	// (0x00010556) cell_hwr_candidate_pane_t1

0xb363,	// (0x000164ae) cell_vkb_candidate_pane_g2

0xb942,	// (0x00016a8d) cell_vkb_candidate_pane_t1

0x5177,	// (0x000102c2) bg_popup_fep_shadow_pane_ParamLimits

0x5177,	// (0x000102c2) bg_popup_fep_shadow_pane

0x522c,	// (0x00010377) bg_fep_hwr_top_pane_g4

0xb3f7,	// (0x00016542) bg_hwr_side_pane_g1_ParamLimits

0xb3f7,	// (0x00016542) bg_hwr_side_pane_g1

0xe8fe,	// (0x00019a49) cell_hwr_side_pane_ParamLimits

0xe8fe,	// (0x00019a49) cell_hwr_side_pane

0x52d8,	// (0x00010423) fep_hwr_write_pane_g1_ParamLimits

0x52d8,	// (0x00010423) fep_hwr_write_pane_g1

0x52e5,	// (0x00010430) fep_hwr_write_pane_g2_ParamLimits

0x52e5,	// (0x00010430) fep_hwr_write_pane_g2

0x52f2,	// (0x0001043d) fep_hwr_write_pane_g3_ParamLimits

0x52f2,	// (0x0001043d) fep_hwr_write_pane_g3

0xe91e,	// (0x00019a69) fep_hwr_write_pane_g4_ParamLimits

0xe91e,	// (0x00019a69) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0001ac81) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0001ac81) fep_hwr_write_pane_g

0x522c,	// (0x00010377) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x522c,	// (0x00010377) bg_fep_hwr_candidate_pane_g2

0x5315,	// (0x00010460) cell_hwr_candidate_pane_ParamLimits

0x5315,	// (0x00010460) cell_hwr_candidate_pane

0x5357,	// (0x000104a2) fep_hwr_candidate_pane_g1_ParamLimits

0xb457,	// (0x000165a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb457,	// (0x000165a2) bg_popup_fep_shadow_pane_cp2

0xb5f5,	// (0x00016740) fep_vkb_top_pane_g4_ParamLimits

0xb5f5,	// (0x00016740) fep_vkb_top_pane_g4

0xb63b,	// (0x00016786) fep_vkb_side_pane_g2_ParamLimits

0xb63b,	// (0x00016786) fep_vkb_side_pane_g2

0x071d,	// (0x0000b868) list_setting_pane_t4_ParamLimits

0x071d,	// (0x0000b868) list_setting_pane_t4

0x0797,	// (0x0000b8e2) list_setting_number_pane_t5_ParamLimits

0x0797,	// (0x0000b8e2) list_setting_number_pane_t5

0x0aaa,	// (0x0000bbf5) list_double_heading_pane_cp2_ParamLimits

0x0aaa,	// (0x0000bbf5) list_double_heading_pane_cp2

0x6d64,	// (0x00011eaf) list_double_heading_pane_g1_cp2_ParamLimits

0x6d64,	// (0x00011eaf) list_double_heading_pane_g1_cp2

0x6d70,	// (0x00011ebb) list_double_heading_pane_g2_cp2_ParamLimits

0x6d70,	// (0x00011ebb) list_double_heading_pane_g2_cp2

0xb950,	// (0x00016a9b) list_double_heading_pane_t1_cp2_ParamLimits

0xb950,	// (0x00016a9b) list_double_heading_pane_t1_cp2

0xb966,	// (0x00016ab1) list_double_heading_pane_t2_cp2_ParamLimits

0xb966,	// (0x00016ab1) list_double_heading_pane_t2_cp2

0x5e4b,	// (0x00010f96) aid_value_unit2

0x4502,	// (0x0000f64d) popup_preview_fixed_window

0x61fa,	// (0x00011345) bg_popup_preview_window_pane_cp02

0xb978,	// (0x00016ac3) list_preview_fixed_pane

0xb9be,	// (0x00016b09) list_empty_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_empty_pane_fp

0xb9be,	// (0x00016b09) list_single_cale_day_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_cale_day_pane_fp

0xb9be,	// (0x00016b09) list_single_graphic_heading_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_graphic_heading_pane_fp

0xb9be,	// (0x00016b09) list_single_graphic_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_graphic_pane_fp

0xb9be,	// (0x00016b09) list_single_heading_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_heading_pane_fp

0xb9be,	// (0x00016b09) list_single_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_pane_fp

0xb9d3,	// (0x00016b1e) list_single_pane_fp_g1_ParamLimits

0xb9d3,	// (0x00016b1e) list_single_pane_fp_g1

0x69a1,	// (0x00011aec) list_single_pane_fp_g2_ParamLimits

0x69a1,	// (0x00011aec) list_single_pane_fp_g2

0xb9df,	// (0x00016b2a) list_single_pane_fp_g3_ParamLimits

0xb9df,	// (0x00016b2a) list_single_pane_fp_g3

0xb9f3,	// (0x00016b3e) list_single_pane_fp_g4_ParamLimits

0xb9f3,	// (0x00016b3e) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0001ace8) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0001ace8) list_single_pane_fp_g

0xb9ff,	// (0x00016b4a) list_single_pane_fp_t1_ParamLimits

0xb9ff,	// (0x00016b4a) list_single_pane_fp_t1

0xba16,	// (0x00016b61) list_single_graphic_pane_fp_g1_ParamLimits

0xba16,	// (0x00016b61) list_single_graphic_pane_fp_g1

0xb9d3,	// (0x00016b1e) list_single_graphic_pane_fp_g2_ParamLimits

0xb9d3,	// (0x00016b1e) list_single_graphic_pane_fp_g2

0x69a1,	// (0x00011aec) list_single_graphic_pane_fp_g3_ParamLimits

0x69a1,	// (0x00011aec) list_single_graphic_pane_fp_g3

0xb9df,	// (0x00016b2a) list_single_graphic_pane_fp_g4_ParamLimits

0xb9df,	// (0x00016b2a) list_single_graphic_pane_fp_g4

0xb9f3,	// (0x00016b3e) list_single_graphic_pane_fp_g5_ParamLimits

0xb9f3,	// (0x00016b3e) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0001acf1) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0001acf1) list_single_graphic_pane_fp_g

0xba22,	// (0x00016b6d) list_single_graphic_pane_fp_t1_ParamLimits

0xba22,	// (0x00016b6d) list_single_graphic_pane_fp_t1

0xba16,	// (0x00016b61) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xba16,	// (0x00016b61) list_single_graphic_heading_pane_fp_g1

0xb9d3,	// (0x00016b1e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb9d3,	// (0x00016b1e) list_single_graphic_heading_pane_fp_g2

0x69a1,	// (0x00011aec) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x69a1,	// (0x00011aec) list_single_graphic_heading_pane_fp_g3

0xb9df,	// (0x00016b2a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb9df,	// (0x00016b2a) list_single_graphic_heading_pane_fp_g4

0xb9f3,	// (0x00016b3e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb9f3,	// (0x00016b3e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0001acf1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001acf1) list_single_graphic_heading_pane_fp_g

0xba38,	// (0x00016b83) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xba38,	// (0x00016b83) list_single_graphic_heading_pane_fp_t1

0xba4e,	// (0x00016b99) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xba4e,	// (0x00016b99) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0001acfc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0001acfc) list_single_graphic_heading_pane_fp_t

0xba60,	// (0x00016bab) list_single_cale_day_pane_fp_g1_ParamLimits

0xba60,	// (0x00016bab) list_single_cale_day_pane_fp_g1

0xba98,	// (0x00016be3) list_single_cale_day_pane_fp_g2_ParamLimits

0xba98,	// (0x00016be3) list_single_cale_day_pane_fp_g2

0xbaa4,	// (0x00016bef) list_single_cale_day_pane_fp_g3_ParamLimits

0xbaa4,	// (0x00016bef) list_single_cale_day_pane_fp_g3

0xbacc,	// (0x00016c17) list_single_cale_day_pane_fp_g4_ParamLimits

0xbacc,	// (0x00016c17) list_single_cale_day_pane_fp_g4

0xbaf0,	// (0x00016c3b) list_single_cale_day_pane_fp_g5_ParamLimits

0xbaf0,	// (0x00016c3b) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0001ad01) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0001ad01) list_single_cale_day_pane_fp_g

0xbb14,	// (0x00016c5f) list_single_cale_day_pane_fp_t1_ParamLimits

0xbb14,	// (0x00016c5f) list_single_cale_day_pane_fp_t1

0xbb3a,	// (0x00016c85) list_single_cale_day_pane_fp_t2_ParamLimits

0xbb3a,	// (0x00016c85) list_single_cale_day_pane_fp_t2

0xbb53,	// (0x00016c9e) list_single_cale_day_pane_fp_t3_ParamLimits

0xbb53,	// (0x00016c9e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0001ad0c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0001ad0c) list_single_cale_day_pane_fp_t

0xb9d3,	// (0x00016b1e) list_empty_pane_fp_g1_ParamLimits

0xb9d3,	// (0x00016b1e) list_empty_pane_fp_g1

0xbb6c,	// (0x00016cb7) list_empty_pane_fp_t1

0xbb7a,	// (0x00016cc5) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0001ad13) list_empty_pane_fp_t

0xb9d3,	// (0x00016b1e) list_single_heading_pane_fp_g1_ParamLimits

0xb9d3,	// (0x00016b1e) list_single_heading_pane_fp_g1

0x69a1,	// (0x00011aec) list_single_heading_pane_fp_g2_ParamLimits

0x69a1,	// (0x00011aec) list_single_heading_pane_fp_g2

0xb9df,	// (0x00016b2a) list_single_heading_pane_fp_g3_ParamLimits

0xb9df,	// (0x00016b2a) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0001ad18) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0001ad18) list_single_heading_pane_fp_g

0xbbd8,	// (0x00016d23) list_single_heading_pane_fp_t1_ParamLimits

0xbbd8,	// (0x00016d23) list_single_heading_pane_fp_t1

0xbbea,	// (0x00016d35) list_single_heading_pane_fp_t2_ParamLimits

0xbbea,	// (0x00016d35) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0001ad1f) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0001ad1f) list_single_heading_pane_fp_t

0x70c7,	// (0x00012212) aid_size_cell_fast

0x616a,	// (0x000112b5) soft_indicator_pane_cp1_t1

0x7104,	// (0x0001224f) cell_app_pane_cp2_ParamLimits

0x7104,	// (0x0001224f) cell_app_pane_cp2

0x5199,	// (0x000102e4) fep_hwr_candidate_drop_down_list_pane

0x5371,	// (0x000104bc) fep_hwr_candidate_pane_g3_ParamLimits

0x5371,	// (0x000104bc) fep_hwr_candidate_pane_g3

0x36c9,	// (0x0000e814) fep_hwr_candidate_pane_g4_ParamLimits

0x36c9,	// (0x0000e814) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001ac8e) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0001ac8e) fep_hwr_candidate_pane_g

0xb4dc,	// (0x00016627) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb4dc,	// (0x00016627) fep_vkb_candidate_drop_down_list_pane

0xb8ed,	// (0x00016a38) fep_vkb_candidate_pane_g3

0xb8f5,	// (0x00016a40) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001acbb) fep_vkb_candidate_pane_g

0x53dc,	// (0x00010527) cell_hwr_candidate_pane_g1_ParamLimits

0x53ea,	// (0x00010535) cell_hwr_candidate_pane_g3_ParamLimits

0x53ea,	// (0x00010535) cell_hwr_candidate_pane_g3

0xd9a6,	// (0x00018af1) cell_hwr_candidate_pane_g4_ParamLimits

0xd9a6,	// (0x00018af1) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0001acda) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0001acda) cell_hwr_candidate_pane_g

0xb90c,	// (0x00016a57) cell_vkb_candidate_pane_g3_ParamLimits

0xb90c,	// (0x00016a57) cell_vkb_candidate_pane_g3

0xb927,	// (0x00016a72) cell_vkb_candidate_pane_g4_ParamLimits

0xb927,	// (0x00016a72) cell_vkb_candidate_pane_g4

0xbc00,	// (0x00016d4b) cell_app_pane_cp2_g1_ParamLimits

0xbc00,	// (0x00016d4b) cell_app_pane_cp2_g1

0xbc1e,	// (0x00016d69) cell_app_pane_cp2_g2_ParamLimits

0xbc1e,	// (0x00016d69) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0001ad24) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0001ad24) cell_app_pane_cp2_g

0xbc2a,	// (0x00016d75) cell_app_pane_cp2_t1_ParamLimits

0xbc2a,	// (0x00016d75) cell_app_pane_cp2_t1

0x6d3e,	// (0x00011e89) grid_highlight_pane_cp1_ParamLimits

0x6d3e,	// (0x00011e89) grid_highlight_pane_cp1

0x5429,	// (0x00010574) cell_hwr_candidate_pane_cp1_ParamLimits

0x5429,	// (0x00010574) cell_hwr_candidate_pane_cp1

0x53dc,	// (0x00010527) fep_hwr_candidate_drop_down_list_pane_g1

0x5448,	// (0x00010593) fep_hwr_candidate_drop_down_list_pane_g2

0x5455,	// (0x000105a0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001ad29) fep_hwr_candidate_drop_down_list_pane_g

0x5462,	// (0x000105ad) fep_hwr_candidate_drop_down_list_scroll_pane

0x546b,	// (0x000105b6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x546b,	// (0x000105b6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5478,	// (0x000105c3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5478,	// (0x000105c3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5485,	// (0x000105d0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5485,	// (0x000105d0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5492,	// (0x000105dd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5492,	// (0x000105dd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x54ad,	// (0x000105f8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54ad,	// (0x000105f8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x54c8,	// (0x00010613) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54c8,	// (0x00010613) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x54e3,	// (0x0001062e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x54e3,	// (0x0001062e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x54fe,	// (0x00010649) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x54fe,	// (0x00010649) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001ad30) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001ad30) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbc3c,	// (0x00016d87) cell_vkb_candidate_pane_cp1_ParamLimits

0xbc3c,	// (0x00016d87) cell_vkb_candidate_pane_cp1

0xb5f5,	// (0x00016740) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb5f5,	// (0x00016740) fep_vkb_candidate_drop_down_list_pane_g1

0xbc5c,	// (0x00016da7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbc5c,	// (0x00016da7) fep_vkb_candidate_drop_down_list_pane_g2

0xbc69,	// (0x00016db4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbc69,	// (0x00016db4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0001ad41) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0001ad41) fep_vkb_candidate_drop_down_list_pane_g

0xbc76,	// (0x00016dc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbc76,	// (0x00016dc1) fep_vkb_candidate_drop_down_list_scroll_pane

0xbc83,	// (0x00016dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbc83,	// (0x00016dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbc90,	// (0x00016ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbc90,	// (0x00016ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbc9c,	// (0x00016de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbc9c,	// (0x00016de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbb88,	// (0x00016cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbb88,	// (0x00016cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbba9,	// (0x00016cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbba9,	// (0x00016cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbca8,	// (0x00016df3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbca8,	// (0x00016df3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbcc9,	// (0x00016e14) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbcc9,	// (0x00016e14) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbcea,	// (0x00016e35) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbcea,	// (0x00016e35) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0001ad48) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0001ad48) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x002f,	// (0x0000b17a) title_pane_g1_ParamLimits

0x0040,	// (0x0000b18b) title_pane_g2_ParamLimits

0xf592,	// (0x0001a6dd) title_pane_g_ParamLimits

0x750c,	// (0x00012657) aid_call2_pane

0x7514,	// (0x0001265f) aid_call_pane

0x751c,	// (0x00012667) popup_clock_analogue_window_g1

0x751c,	// (0x00012667) popup_clock_analogue_window_g2

0x486b,	// (0x0000f9b6) popup_clock_analogue_window_g3

0x4874,	// (0x0000f9bf) popup_clock_analogue_window_g4

0x5e6d,	// (0x00010fb8) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a882) popup_clock_analogue_window_g

0x487c,	// (0x0000f9c7) popup_clock_analogue_window_t1

0x488a,	// (0x0000f9d5) clock_digital_number_pane_ParamLimits

0x488a,	// (0x0000f9d5) clock_digital_number_pane

0x4896,	// (0x0000f9e1) clock_digital_number_pane_cp02_ParamLimits

0x4896,	// (0x0000f9e1) clock_digital_number_pane_cp02

0x48a2,	// (0x0000f9ed) clock_digital_number_pane_cp03_ParamLimits

0x48a2,	// (0x0000f9ed) clock_digital_number_pane_cp03

0x48ae,	// (0x0000f9f9) clock_digital_number_pane_cp04_ParamLimits

0x48ae,	// (0x0000f9f9) clock_digital_number_pane_cp04

0x48ba,	// (0x0000fa05) clock_digital_separator_pane_ParamLimits

0x48ba,	// (0x0000fa05) clock_digital_separator_pane

0x48c6,	// (0x0000fa11) popup_clock_digital_window_t1_ParamLimits

0x48c6,	// (0x0000fa11) popup_clock_digital_window_t1

0x5e6d,	// (0x00010fb8) clock_digital_number_pane_g1

0x5e6d,	// (0x00010fb8) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a88d) clock_digital_number_pane_g

0x5e6d,	// (0x00010fb8) clock_digital_separator_pane_g1

0x5e6d,	// (0x00010fb8) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a88d) clock_digital_separator_pane_g

0x14f6,	// (0x0000c641) aid_fill_nsta_ParamLimits

0x1625,	// (0x0000c770) indicator_nsta_pane_ParamLimits

0x8787,	// (0x000138d2) popup_clock_analogue_window

0x8787,	// (0x000138d2) popup_clock_digital_window

0x7088,	// (0x000121d3) grid_indicator_nsta_pane_ParamLimits

0xad25,	// (0x00015e70) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0001ac1b) clock_nsta_pane_t

0x482f,	// (0x0000f97a) aid_size_max_handle

0xe5e2,	// (0x0001972d) aid_size_min_handle

0x7b88,	// (0x00012cd3) editor_scroll_pane

0xbd05,	// (0x00016e50) ex_editor_pane

0x7035,	// (0x00012180) scroll_pane_cp13

0x677c,	// (0x000118c7) scroll_pane_cp14

0x7546,	// (0x00012691) scroll_pane_cp36

0x0ab9,	// (0x0000bc04) list_single_graphic_hl_pane_cp2_ParamLimits

0x0ab9,	// (0x0000bc04) list_single_graphic_hl_pane_cp2

0x1efc,	// (0x0000d047) list_single_graphic_hl_pane_ParamLimits

0x1efc,	// (0x0000d047) list_single_graphic_hl_pane

0xbd0d,	// (0x00016e58) aid_size_min_hl_cp1

0xbd16,	// (0x00016e61) list_highlight_pane_cp34_ParamLimits

0xbd16,	// (0x00016e61) list_highlight_pane_cp34

0xbd27,	// (0x00016e72) list_single_graphic_hl_pane_g1_ParamLimits

0xbd27,	// (0x00016e72) list_single_graphic_hl_pane_g1

0x246f,	// (0x0000d5ba) list_single_graphic_hl_pane_g2_ParamLimits

0x246f,	// (0x0000d5ba) list_single_graphic_hl_pane_g2

0x246f,	// (0x0000d5ba) list_single_graphic_hl_pane_g3_ParamLimits

0x246f,	// (0x0000d5ba) list_single_graphic_hl_pane_g3

0x7af9,	// (0x00012c44) list_single_graphic_hl_pane_g4_ParamLimits

0x7af9,	// (0x00012c44) list_single_graphic_hl_pane_g4

0x247b,	// (0x0000d5c6) list_single_graphic_hl_pane_g5_ParamLimits

0x247b,	// (0x0000d5c6) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0001ad59) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0001ad59) list_single_graphic_hl_pane_g

0x248f,	// (0x0000d5da) list_single_graphic_hl_pane_t1_ParamLimits

0x248f,	// (0x0000d5da) list_single_graphic_hl_pane_t1

0xbd6a,	// (0x00016eb5) aid_size_min_hl_cp2

0xbd73,	// (0x00016ebe) list_highlight_pane_cp34_cp2_ParamLimits

0xbd73,	// (0x00016ebe) list_highlight_pane_cp34_cp2

0xbd27,	// (0x00016e72) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbd27,	// (0x00016e72) list_single_graphic_hl_pane_g1_cp2

0xbd80,	// (0x00016ecb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbd80,	// (0x00016ecb) list_single_graphic_hl_pane_g2_cp2

0xbd8c,	// (0x00016ed7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbd8c,	// (0x00016ed7) list_single_graphic_hl_pane_g3_cp2

0x8960,	// (0x00013aab) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8960,	// (0x00013aab) list_single_graphic_hl_pane_g4_cp2

0xbd40,	// (0x00016e8b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbd40,	// (0x00016e8b) list_single_graphic_hl_pane_g5_cp2

0xe614,	// (0x0001975f) control_pane_g4_ParamLimits

0xe614,	// (0x0001975f) control_pane_g4

0x7f12,	// (0x0001305d) bg_popup_sub_pane_cp10_ParamLimits

0xb36d,	// (0x000164b8) list_choice_list_pane_ParamLimits

0xb37c,	// (0x000164c7) scroll_pane_cp23

0x61fa,	// (0x00011345) bg_popup_preview_window_pane_cp02_ParamLimits

0xb978,	// (0x00016ac3) list_preview_fixed_pane_ParamLimits

0xb98e,	// (0x00016ad9) list_preview_fixed_pane_cp_ParamLimits

0xb98e,	// (0x00016ad9) list_preview_fixed_pane_cp

0xb99a,	// (0x00016ae5) popup_preview_fixed_window_g1_ParamLimits

0xb99a,	// (0x00016ae5) popup_preview_fixed_window_g1

0xb9a6,	// (0x00016af1) popup_preview_fixed_window_g2_ParamLimits

0xb9a6,	// (0x00016af1) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0001ace1) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0001ace1) popup_preview_fixed_window_g

0x47a3,	// (0x0000f8ee) aid_navi_side_left_pane_ParamLimits

0x47b8,	// (0x0000f903) aid_navi_side_right_pane_ParamLimits

0x47d0,	// (0x0000f91b) navi_icon_pane_stacon_ParamLimits

0x47e4,	// (0x0000f92f) navi_navi_pane_stacon_ParamLimits

0x47d0,	// (0x0000f91b) navi_text_pane_stacon_ParamLimits

0x5e63,	// (0x00010fae) main_text_info_pane

0xbdb0,	// (0x00016efb) listscroll_text_info_pane

0xbdb8,	// (0x00016f03) list_text_info_pane_ParamLimits

0xbdb8,	// (0x00016f03) list_text_info_pane

0xbdc7,	// (0x00016f12) scroll_pane_cp24_ParamLimits

0xbdc7,	// (0x00016f12) scroll_pane_cp24

0x24a5,	// (0x0000d5f0) list_text_info_pane_t1_ParamLimits

0x24a5,	// (0x0000d5f0) list_text_info_pane_t1

0x0e90,	// (0x0000bfdb) popup_fast_swap2_window_ParamLimits

0x0e90,	// (0x0000bfdb) popup_fast_swap2_window

0xbe16,	// (0x00016f61) aid_size_cell_fast2

0x5e63,	// (0x00010fae) bg_popup_window_pane_cp17

0x8f04,	// (0x0001404f) heading_pane_cp2

0x6446,	// (0x00011591) listscroll_fast2_pane

0xbe20,	// (0x00016f6b) grid_fast2_pane

0xbe2a,	// (0x00016f75) listscroll_fast2_pane_g1

0xbe32,	// (0x00016f7d) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0001ad64) listscroll_fast2_pane_g

0x7035,	// (0x00012180) scroll_pane_cp26

0xbe3c,	// (0x00016f87) cell_fast2_pane_ParamLimits

0xbe3c,	// (0x00016f87) cell_fast2_pane

0xbe51,	// (0x00016f9c) cell_fast2_pane_g1

0xbe5a,	// (0x00016fa5) cell_fast2_pane_g2

0xbe63,	// (0x00016fae) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0001ad69) cell_fast2_pane_g

0x6539,	// (0x00011684) grid_highlight_pane_cp9

0x654e,	// (0x00011699) main_eswt_pane_ParamLimits

0x654e,	// (0x00011699) main_eswt_pane

0xbddc,	// (0x00016f27) list_single_text_info_pane

0xbe6b,	// (0x00016fb6) eswt_ctrl_button_pane

0xbe6b,	// (0x00016fb6) eswt_ctrl_canvas_pane

0xbe73,	// (0x00016fbe) eswt_ctrl_combo_pane

0xbe6b,	// (0x00016fb6) eswt_ctrl_default_pane

0xbe6b,	// (0x00016fb6) eswt_ctrl_label_pane

0xbe7b,	// (0x00016fc6) eswt_ctrl_wait_pane

0xbe83,	// (0x00016fce) eswt_shell_pane

0x5e63,	// (0x00010fae) listscroll_eswt_app_pane

0xbea3,	// (0x00016fee) popup_eswt_tasktip_window_ParamLimits

0xbea3,	// (0x00016fee) popup_eswt_tasktip_window

0x8b04,	// (0x00013c4f) bg_popup_window_pane_cp18

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_ParamLimits

0xbeb4,	// (0x00016fff) eswt_control_pane_g1

0xbec1,	// (0x0001700c) eswt_control_pane_g2_ParamLimits

0xbec1,	// (0x0001700c) eswt_control_pane_g2

0xbece,	// (0x00017019) eswt_control_pane_g3_ParamLimits

0xbece,	// (0x00017019) eswt_control_pane_g3

0xbedb,	// (0x00017026) eswt_control_pane_g4_ParamLimits

0xbedb,	// (0x00017026) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0001ad70) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0001ad70) eswt_control_pane_g

0x6d3e,	// (0x00011e89) bg_button_pane_ParamLimits

0x6d3e,	// (0x00011e89) bg_button_pane

0x654e,	// (0x00011699) common_borders_pane_copy2_ParamLimits

0x654e,	// (0x00011699) common_borders_pane_copy2

0xbee8,	// (0x00017033) control_button_pane_g1_ParamLimits

0xbee8,	// (0x00017033) control_button_pane_g1

0xbef4,	// (0x0001703f) control_button_pane_g2_ParamLimits

0xbef4,	// (0x0001703f) control_button_pane_g2

0xbf00,	// (0x0001704b) control_button_pane_g3_ParamLimits

0xbf00,	// (0x0001704b) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0001ad79) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0001ad79) control_button_pane_g

0xbf14,	// (0x0001705f) control_button_pane_t1

0xbf22,	// (0x0001706d) control_button_pane_t2

0x0001,

0xfc35,	// (0x0001ad80) control_button_pane_t

0x89ea,	// (0x00013b35) bg_button_pane_g1

0x89fa,	// (0x00013b45) bg_button_pane_g2

0x89f2,	// (0x00013b3d) bg_button_pane_g3

0x8a0a,	// (0x00013b55) bg_button_pane_g4

0x8a02,	// (0x00013b4d) bg_button_pane_g5

0x8a12,	// (0x00013b5d) bg_button_pane_g6

0x8a1a,	// (0x00013b65) bg_button_pane_g7

0x8a2a,	// (0x00013b75) bg_button_pane_g8

0x8a22,	// (0x00013b6d) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001a9e0) bg_button_pane_g

0xb328,	// (0x00016473) common_borders_pane_ParamLimits

0xb328,	// (0x00016473) common_borders_pane

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy1_ParamLimits

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy1

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy1_ParamLimits

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy1

0xbece,	// (0x00017019) eswt_control_pane_g3_copy1_ParamLimits

0xbece,	// (0x00017019) eswt_control_pane_g3_copy1

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy1_ParamLimits

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy1

0xb363,	// (0x000164ae) bg_eswt_ctrl_canvas_pane_g1

0xb328,	// (0x00016473) common_borders_pane_cp2_ParamLimits

0xb328,	// (0x00016473) common_borders_pane_cp2

0xb328,	// (0x00016473) common_borders_pane_cp3_ParamLimits

0xb328,	// (0x00016473) common_borders_pane_cp3

0xbf30,	// (0x0001707b) separator_horizontal_pane

0xbf38,	// (0x00017083) separator_vertical_pane

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy2_ParamLimits

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy2

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy2_ParamLimits

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy2

0xbece,	// (0x00017019) eswt_control_pane_g3_copy2_ParamLimits

0xbece,	// (0x00017019) eswt_control_pane_g3_copy2

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy2_ParamLimits

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy2

0x5e63,	// (0x00010fae) common_borders_pane_cp4

0xbf41,	// (0x0001708c) separator_horizontal_pane_g1

0xbf4a,	// (0x00017095) separator_horizontal_pane_g2

0xbf53,	// (0x0001709e) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0001ad85) separator_horizontal_pane_g

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy3_ParamLimits

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy3

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy3_ParamLimits

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy3

0xbece,	// (0x00017019) eswt_control_pane_g3_copy3_ParamLimits

0xbece,	// (0x00017019) eswt_control_pane_g3_copy3

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy3_ParamLimits

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy3

0x5e63,	// (0x00010fae) common_borders_pane_cp5

0xbf5c,	// (0x000170a7) separator_vertical_pane_g1

0xbf65,	// (0x000170b0) separator_vertical_pane_g2

0xbf6e,	// (0x000170b9) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0001ad8c) separator_vertical_pane_g

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy4_ParamLimits

0xbeb4,	// (0x00016fff) eswt_control_pane_g1_copy4

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy4_ParamLimits

0xbec1,	// (0x0001700c) eswt_control_pane_g2_copy4

0xbece,	// (0x00017019) eswt_control_pane_g3_copy4_ParamLimits

0xbece,	// (0x00017019) eswt_control_pane_g3_copy4

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy4_ParamLimits

0xbedb,	// (0x00017026) eswt_control_pane_g4_copy4

0x24c0,	// (0x0000d60b) eswt_ctrl_combo_button_pane

0x24c8,	// (0x0000d613) eswt_ctrl_input_pane

0x24d0,	// (0x0000d61b) popup_choice_list_window_cp70

0x24d8,	// (0x0000d623) eswt_ctrl_input_pane_t1

0x5e63,	// (0x00010fae) input_focus_pane_cp70

0xb328,	// (0x00016473) bg_button_pane_cp70_ParamLimits

0xb328,	// (0x00016473) bg_button_pane_cp70

0x24e6,	// (0x0000d631) eswt_ctrl_combo_button_pane_g1

0xbfa5,	// (0x000170f0) wait_bar_pane_cp70

0x8b04,	// (0x00013c4f) bg_popup_window_pane_cp70_ParamLimits

0x8b04,	// (0x00013c4f) bg_popup_window_pane_cp70

0xbfad,	// (0x000170f8) popup_eswt_tasktip_window_t1

0xbfc3,	// (0x0001710e) wait_bar_pane_cp71_ParamLimits

0xbfc3,	// (0x0001710e) wait_bar_pane_cp71

0xbfcf,	// (0x0001711a) grid_eswt_app_pane

0x734e,	// (0x00012499) scroll_pane_cp70

0x24ee,	// (0x0000d639) cell_eswt_app_pane_ParamLimits

0x24ee,	// (0x0000d639) cell_eswt_app_pane

0x2518,	// (0x0000d663) cell_eswt_app_pane_g1_ParamLimits

0x2518,	// (0x0000d663) cell_eswt_app_pane_g1

0x2547,	// (0x0000d692) cell_eswt_app_pane_g2_ParamLimits

0x2547,	// (0x0000d692) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0001ad93) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0001ad93) cell_eswt_app_pane_g

0x2570,	// (0x0000d6bb) cell_eswt_app_pane_t1_ParamLimits

0x2570,	// (0x0000d6bb) cell_eswt_app_pane_t1

0xc092,	// (0x000171dd) grid_highlight_pane_cp70_ParamLimits

0xc092,	// (0x000171dd) grid_highlight_pane_cp70

0x7a5d,	// (0x00012ba8) set_content_pane_g1

0x7e34,	// (0x00012f7f) status_small_volume_pane

0x5519,	// (0x00010664) status_small_volume_pane_g1

0x5521,	// (0x0001066c) volume_small2_pane

0x552a,	// (0x00010675) volume_small2_pane_g1

0x5533,	// (0x0001067e) volume_small2_pane_g2

0x553c,	// (0x00010687) volume_small2_pane_g3

0x5545,	// (0x00010690) volume_small2_pane_g4

0x554e,	// (0x00010699) volume_small2_pane_g5

0x5557,	// (0x000106a2) volume_small2_pane_g6

0x5560,	// (0x000106ab) volume_small2_pane_g7

0x5569,	// (0x000106b4) volume_small2_pane_g8

0x5572,	// (0x000106bd) volume_small2_pane_g9

0x557b,	// (0x000106c6) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0001ad98) volume_small2_pane_g

0xb73d,	// (0x00016888) fep_vkb_top_text_pane_g1_ParamLimits

0x2417,	// (0x0000d562) fep_vkb_top_text_pane_t1_ParamLimits

0xb9b2,	// (0x00016afd) popup_preview_fixed_window_g3_ParamLimits

0xb9b2,	// (0x00016afd) popup_preview_fixed_window_g3

0x1489,	// (0x0000c5d4) popup_toolbar_trans_pane

0x1d45,	// (0x0000ce90) aid_height_set_list_ParamLimits

0x9e8c,	// (0x00014fd7) aid_size_parent_ParamLimits

0x7f12,	// (0x0001305d) list_highlight_pane_cp2_ParamLimits

0x7a5d,	// (0x00012ba8) set_content_pane_g1_ParamLimits

0x1f0d,	// (0x0000d058) list_single_image_pane_ParamLimits

0x1f0d,	// (0x0000d058) list_single_image_pane

0xc09e,	// (0x000171e9) aid_size_cell_image_ParamLimits

0xc09e,	// (0x000171e9) aid_size_cell_image

0x25a2,	// (0x0000d6ed) grid_single_image_pane_ParamLimits

0x25a2,	// (0x0000d6ed) grid_single_image_pane

0x69a1,	// (0x00011aec) list_single_image_pane_g1_ParamLimits

0x69a1,	// (0x00011aec) list_single_image_pane_g1

0xb9df,	// (0x00016b2a) list_single_image_pane_g2_ParamLimits

0xb9df,	// (0x00016b2a) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0001adad) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0001adad) list_single_image_pane_g

0x68d8,	// (0x00011a23) list_single_image_pane_t1_ParamLimits

0x68d8,	// (0x00011a23) list_single_image_pane_t1

0x25b0,	// (0x0000d6fb) cell_image_list_pane_ParamLimits

0x25b0,	// (0x0000d6fb) cell_image_list_pane

0xc0cc,	// (0x00017217) cell_image_list_pane_g1

0xc0d5,	// (0x00017220) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0001adb2) cell_image_list_pane_g

0xc0de,	// (0x00017229) aid_size_cell_tb_trans_pane

0x6d3e,	// (0x00011e89) bg_tb_trans_pane

0xc0f0,	// (0x0001723b) grid_tb_trans_pane

0x89ea,	// (0x00013b35) bg_tb_trans_pane_g1

0x89fa,	// (0x00013b45) bg_tb_trans_pane_g2

0x89f2,	// (0x00013b3d) bg_tb_trans_pane_g3

0x8a0a,	// (0x00013b55) bg_tb_trans_pane_g4

0x8a02,	// (0x00013b4d) bg_tb_trans_pane_g5

0x8a2a,	// (0x00013b75) bg_tb_trans_pane_g6

0x8a22,	// (0x00013b6d) bg_tb_trans_pane_g7

0x8a12,	// (0x00013b5d) bg_tb_trans_pane_g8

0x8a1a,	// (0x00013b65) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0001adb7) bg_tb_trans_pane_g

0xc104,	// (0x0001724f) cell_toolbar_trans_pane_ParamLimits

0xc104,	// (0x0001724f) cell_toolbar_trans_pane

0xb363,	// (0x000164ae) cell_toolbar_trans_pane_g1

0x216d,	// (0x0000d2b8) list_form2_midp_pane_t1

0x217b,	// (0x0000d2c6) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0001ac54) list_form2_midp_pane_t

0xaef9,	// (0x00016044) scroll_pane_cp51_ParamLimits

0xb104,	// (0x0001624f) form2_midp_wait_pane_g1

0xb10d,	// (0x00016258) form2_midp_wait_pane_g2

0xb116,	// (0x00016261) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0001ac69) form2_midp_wait_pane_g

0x5f57,	// (0x000110a2) list_highlight_pane_cp21_ParamLimits

0xb16d,	// (0x000162b8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb17c,	// (0x000162c7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa092,	// (0x000151dd) list_single_2graphic_im_pane_ParamLimits

0xa092,	// (0x000151dd) list_single_2graphic_im_pane

0x25c6,	// (0x0000d711) list_single_2graphic_im_pane_g1_ParamLimits

0x25c6,	// (0x0000d711) list_single_2graphic_im_pane_g1

0x25d7,	// (0x0000d722) list_single_2graphic_im_pane_g2_ParamLimits

0x25d7,	// (0x0000d722) list_single_2graphic_im_pane_g2

0x25e3,	// (0x0000d72e) list_single_2graphic_im_pane_g3_ParamLimits

0x25e3,	// (0x0000d72e) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0001adca) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0001adca) list_single_2graphic_im_pane_g

0x25f7,	// (0x0000d742) list_single_2graphic_im_pane_t1_ParamLimits

0x25f7,	// (0x0000d742) list_single_2graphic_im_pane_t1

0xb9be,	// (0x00016b09) list_single_graphic_2heading_pane_fp_ParamLimits

0xb9be,	// (0x00016b09) list_single_graphic_2heading_pane_fp

0xba16,	// (0x00016b61) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xba16,	// (0x00016b61) list_single_graphic_2heading_pane_fp_g1

0xb9d3,	// (0x00016b1e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb9d3,	// (0x00016b1e) list_single_graphic_2heading_pane_fp_g2

0x69a1,	// (0x00011aec) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x69a1,	// (0x00011aec) list_single_graphic_2heading_pane_fp_g3

0xb9df,	// (0x00016b2a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb9df,	// (0x00016b2a) list_single_graphic_2heading_pane_fp_g4

0xb9f3,	// (0x00016b3e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb9f3,	// (0x00016b3e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0001acf1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001acf1) list_single_graphic_2heading_pane_fp_g

0xc198,	// (0x000172e3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc198,	// (0x000172e3) list_single_graphic_2heading_pane_fp_t1

0xba4e,	// (0x00016b99) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xba4e,	// (0x00016b99) list_single_graphic_2heading_pane_fp_t2

0xc1ae,	// (0x000172f9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc1ae,	// (0x000172f9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0001add3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0001add3) list_single_graphic_2heading_pane_fp_t

0xb403,	// (0x0001654e) fep_hwr_write_pane_g5_ParamLimits

0xb403,	// (0x0001654e) fep_hwr_write_pane_g5

0xb40f,	// (0x0001655a) fep_hwr_write_pane_g6_ParamLimits

0xb40f,	// (0x0001655a) fep_hwr_write_pane_g6

0xbe83,	// (0x00016fce) eswt_shell_pane_ParamLimits

0x8b04,	// (0x00013c4f) bg_popup_window_pane_cp18_ParamLimits

0x9dac,	// (0x00014ef7) heading_pane_cp70

0xbfad,	// (0x000170f8) popup_eswt_tasktip_window_t1_ParamLimits

0x154a,	// (0x0000c695) aid_touch_tab_arrow_left

0x1560,	// (0x0000c6ab) aid_touch_tab_arrow_right

0x0058,	// (0x0000b1a3) title_pane_g3_ParamLimits

0x0058,	// (0x0000b1a3) title_pane_g3

0x6c1d,	// (0x00011d68) set_value_pane_g1

0x1489,	// (0x0000c5d4) popup_toolbar_trans_pane_ParamLimits

0xc0de,	// (0x00017229) aid_size_cell_tb_trans_pane_ParamLimits

0x6d3e,	// (0x00011e89) bg_tb_trans_pane_ParamLimits

0xc0f0,	// (0x0001723b) grid_tb_trans_pane_ParamLimits

0x61fa,	// (0x00011345) cont_note_pane_ParamLimits

0x61fa,	// (0x00011345) cont_note_pane

0x654e,	// (0x00011699) cont_snote2_single_text_pane_ParamLimits

0x654e,	// (0x00011699) cont_snote2_single_text_pane

0x654e,	// (0x00011699) cont_snote2_single_graphic_pane_ParamLimits

0x654e,	// (0x00011699) cont_snote2_single_graphic_pane

0x90ee,	// (0x00014239) cont_note_wait_pane_ParamLimits

0x90ee,	// (0x00014239) cont_note_wait_pane

0x90ee,	// (0x00014239) cont_note_image_pane_ParamLimits

0x90ee,	// (0x00014239) cont_note_image_pane

0xc1c4,	// (0x0001730f) popup_note2_window_g1_ParamLimits

0xc1c4,	// (0x0001730f) popup_note2_window_g1

0xc1f5,	// (0x00017340) popup_note2_window_t1_ParamLimits

0xc1f5,	// (0x00017340) popup_note2_window_t1

0xc23a,	// (0x00017385) popup_note2_window_t2_ParamLimits

0xc23a,	// (0x00017385) popup_note2_window_t2

0xc27f,	// (0x000173ca) popup_note2_window_t3_ParamLimits

0xc27f,	// (0x000173ca) popup_note2_window_t3

0xc2c4,	// (0x0001740f) popup_note2_window_t4_ParamLimits

0xc2c4,	// (0x0001740f) popup_note2_window_t4

0x627e,	// (0x000113c9) popup_note2_window_t5_ParamLimits

0x627e,	// (0x000113c9) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0001addf) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0001addf) popup_note2_window_t

0xc2f3,	// (0x0001743e) popup_note2_image_window_g1_ParamLimits

0xc2f3,	// (0x0001743e) popup_note2_image_window_g1

0xc2ff,	// (0x0001744a) popup_note2_image_window_g2_ParamLimits

0xc2ff,	// (0x0001744a) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0001adea) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0001adea) popup_note2_image_window_g

0xc311,	// (0x0001745c) popup_note2_image_window_t1_ParamLimits

0xc311,	// (0x0001745c) popup_note2_image_window_t1

0xc329,	// (0x00017474) popup_note2_image_window_t2_ParamLimits

0xc329,	// (0x00017474) popup_note2_image_window_t2

0xc341,	// (0x0001748c) popup_note2_image_window_t3_ParamLimits

0xc341,	// (0x0001748c) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0001adef) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0001adef) popup_note2_image_window_t

0x90fc,	// (0x00014247) popup_note2_wait_window_g1_ParamLimits

0x90fc,	// (0x00014247) popup_note2_wait_window_g1

0xc35d,	// (0x000174a8) popup_note2_wait_window_g2_ParamLimits

0xc35d,	// (0x000174a8) popup_note2_wait_window_g2

0x9114,	// (0x0001425f) popup_note2_wait_window_g3_ParamLimits

0x9114,	// (0x0001425f) popup_note2_wait_window_g3

0x0002,

0xfcab,	// (0x0001adf6) popup_note2_wait_window_g_ParamLimits

0xfcab,	// (0x0001adf6) popup_note2_wait_window_g

0xc369,	// (0x000174b4) popup_note2_wait_window_t1_ParamLimits

0xc369,	// (0x000174b4) popup_note2_wait_window_t1

0xc387,	// (0x000174d2) popup_note2_wait_window_t2_ParamLimits

0xc387,	// (0x000174d2) popup_note2_wait_window_t2

0xc3a5,	// (0x000174f0) popup_note2_wait_window_t3_ParamLimits

0xc3a5,	// (0x000174f0) popup_note2_wait_window_t3

0xc3b7,	// (0x00017502) popup_note2_wait_window_t4_ParamLimits

0xc3b7,	// (0x00017502) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x0001adfd) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x0001adfd) popup_note2_wait_window_t

0xc3c9,	// (0x00017514) wait_bar2_pane_ParamLimits

0xc3c9,	// (0x00017514) wait_bar2_pane

0xc3e1,	// (0x0001752c) popup_snote2_single_text_window_g1_ParamLimits

0xc3e1,	// (0x0001752c) popup_snote2_single_text_window_g1

0xc409,	// (0x00017554) popup_snote2_single_text_window_t1_ParamLimits

0xc409,	// (0x00017554) popup_snote2_single_text_window_t1

0xc455,	// (0x000175a0) popup_snote2_single_text_window_t2_ParamLimits

0xc455,	// (0x000175a0) popup_snote2_single_text_window_t2

0xc4a1,	// (0x000175ec) popup_snote2_single_text_window_t3_ParamLimits

0xc4a1,	// (0x000175ec) popup_snote2_single_text_window_t3

0xc4e2,	// (0x0001762d) popup_snote2_single_text_window_t4_ParamLimits

0xc4e2,	// (0x0001762d) popup_snote2_single_text_window_t4

0xc518,	// (0x00017663) popup_snote2_single_text_window_t5_ParamLimits

0xc518,	// (0x00017663) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x0001ae06) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x0001ae06) popup_snote2_single_text_window_t

0xc543,	// (0x0001768e) popup_snote2_single_graphic_window_g1_ParamLimits

0xc543,	// (0x0001768e) popup_snote2_single_graphic_window_g1

0xc56b,	// (0x000176b6) popup_snote2_single_graphic_window_g2_ParamLimits

0xc56b,	// (0x000176b6) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x0001ae11) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x0001ae11) popup_snote2_single_graphic_window_g

0xc593,	// (0x000176de) popup_snote2_single_graphic_window_t1_ParamLimits

0xc593,	// (0x000176de) popup_snote2_single_graphic_window_t1

0xc5df,	// (0x0001772a) popup_snote2_single_graphic_window_t2_ParamLimits

0xc5df,	// (0x0001772a) popup_snote2_single_graphic_window_t2

0xc4a1,	// (0x000175ec) popup_snote2_single_graphic_window_t3_ParamLimits

0xc4a1,	// (0x000175ec) popup_snote2_single_graphic_window_t3

0xc4e2,	// (0x0001762d) popup_snote2_single_graphic_window_t4_ParamLimits

0xc4e2,	// (0x0001762d) popup_snote2_single_graphic_window_t4

0xc518,	// (0x00017663) popup_snote2_single_graphic_window_t5_ParamLimits

0xc518,	// (0x00017663) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x0001ae16) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x0001ae16) popup_snote2_single_graphic_window_t

0xadb6,	// (0x00015f01) clock_nsta_pane_cp2_t1

0xadb6,	// (0x00015f01) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0001ac2a) clock_nsta_pane_cp2_t

0x6d58,	// (0x00011ea3) form_field_data_wide_pane_g1_ParamLimits

0x6d64,	// (0x00011eaf) form_field_data_wide_pane_g2_ParamLimits

0x6d64,	// (0x00011eaf) form_field_data_wide_pane_g2

0x6d70,	// (0x00011ebb) form_field_data_wide_pane_g3_ParamLimits

0x6d70,	// (0x00011ebb) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a805) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a805) form_field_data_wide_pane_g

0x2087,	// (0x0000d1d2) grid_touch_3_pane_ParamLimits

0x2087,	// (0x0000d1d2) grid_touch_3_pane

0x2628,	// (0x0000d773) cell_touch_3_pane_ParamLimits

0x2628,	// (0x0000d773) cell_touch_3_pane

0xb363,	// (0x000164ae) cell_touch_3_pane_g1

0xb363,	// (0x000164ae) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0001acaf) cell_touch_3_pane_g

0x62b0,	// (0x000113fb) cont_query_data_pane

0x62b8,	// (0x00011403) cont_query_data_pane_cp1

0xc659,	// (0x000177a4) button_value_adjust_pane_cp7

0xc661,	// (0x000177ac) query_popup_pane_cp3

0x75e1,	// (0x0001272c) bg_popup_sub_pane_cp22_ParamLimits

0x48e5,	// (0x0000fa30) navi_navi_volume_pane_cp2

0x4900,	// (0x0000fa4b) popup_side_volume_key_window_g2

0x490f,	// (0x0000fa5a) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a897) popup_side_volume_key_window_g

0x492c,	// (0x0000fa77) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a89e) popup_side_volume_key_window_t

0x7927,	// (0x00012a72) popup_side_volume_key_window_ParamLimits

0x0518,	// (0x0000b663) list_double_graphic_pane_g4_ParamLimits

0x0518,	// (0x0000b663) list_double_graphic_pane_g4

0x1ee9,	// (0x0000d034) list_single_2heading_msg_pane_ParamLimits

0x1ee9,	// (0x0000d034) list_single_2heading_msg_pane

0x2671,	// (0x0000d7bc) list_single_2heading_msg_pane_g1_ParamLimits

0x2671,	// (0x0000d7bc) list_single_2heading_msg_pane_g1

0x267d,	// (0x0000d7c8) list_single_2heading_msg_pane_g2_ParamLimits

0x267d,	// (0x0000d7c8) list_single_2heading_msg_pane_g2

0x2690,	// (0x0000d7db) list_single_2heading_msg_pane_g3_ParamLimits

0x2690,	// (0x0000d7db) list_single_2heading_msg_pane_g3

0x269c,	// (0x0000d7e7) list_single_2heading_msg_pane_g4_ParamLimits

0x269c,	// (0x0000d7e7) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x0001ae21) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x0001ae21) list_single_2heading_msg_pane_g

0x26b4,	// (0x0000d7ff) list_single_2heading_msg_pane_t1_ParamLimits

0x26b4,	// (0x0000d7ff) list_single_2heading_msg_pane_t1

0x26dc,	// (0x0000d827) list_single_2heading_msg_pane_t2_ParamLimits

0x26dc,	// (0x0000d827) list_single_2heading_msg_pane_t2

0x2747,	// (0x0000d892) list_single_2heading_msg_pane_t3_ParamLimits

0x2747,	// (0x0000d892) list_single_2heading_msg_pane_t3

0xc750,	// (0x0001789b) list_single_2heading_msg_pane_t4_ParamLimits

0xc750,	// (0x0001789b) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x0001ae2a) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x0001ae2a) list_single_2heading_msg_pane_t

0x5eab,	// (0x00010ff6) title_pane_g4_ParamLimits

0x5eab,	// (0x00010ff6) title_pane_g4

0x46f3,	// (0x0000f83e) title_pane_stacon_g3_ParamLimits

0x46f3,	// (0x0000f83e) title_pane_stacon_g3

0xc15b,	// (0x000172a6) list_single_2graphic_im_pane_g4_ParamLimits

0xc15b,	// (0x000172a6) list_single_2graphic_im_pane_g4

0x9b53,	// (0x00014c9e) popup_side_volume_key_window_cp

0xa44f,	// (0x0001559a) main_idle_act2_pane_t1

0x4d1d,	// (0x0000fe68) toolbar_button_pane_g10

0x03c5,	// (0x0000b510) popup_toolbar_window_cp1

0xada7,	// (0x00015ef2) clock_nsta_pane_cp_t1

0xada7,	// (0x00015ef2) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0001ac25) clock_nsta_pane_cp_t

0x48e5,	// (0x0000fa30) navi_navi_volume_pane_cp2_ParamLimits

0x48f4,	// (0x0000fa3f) popup_side_volume_key_window_g1_ParamLimits

0x4900,	// (0x0000fa4b) popup_side_volume_key_window_g2_ParamLimits

0x490f,	// (0x0000fa5a) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a897) popup_side_volume_key_window_g_ParamLimits

0x5185,	// (0x000102d0) fep_hwr_aid_pane

0x522c,	// (0x00010377) bg_fep_hwr_top_pane_g4_ParamLimits

0xb3d3,	// (0x0001651e) fep_hwr_top_pane_g1_ParamLimits

0xb3e5,	// (0x00016530) fep_hwr_top_pane_g2_ParamLimits

0x524c,	// (0x00010397) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0001ac7a) fep_hwr_top_pane_g_ParamLimits

0x5261,	// (0x000103ac) fep_hwr_top_text_pane_ParamLimits

0x9916,	// (0x00014a61) aid_touch_tab_arrow_arrow_2

0x991f,	// (0x00014a6a) aid_touch_tab_arrow_left_2

0x5199,	// (0x000102e4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x51d0,	// (0x0001031b) fep_hwr_prediction_pane

0xb545,	// (0x00016690) fep_vkb_prediction_pane

0x23f7,	// (0x0000d542) fep_vkb_side_pane_g3_ParamLimits

0x23f7,	// (0x0000d542) fep_vkb_side_pane_g3

0x53dc,	// (0x00010527) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5448,	// (0x00010593) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5455,	// (0x000105a0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0001ad29) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5584,	// (0x000106cf) fep_hwr_prediction_pane_g1

0x558e,	// (0x000106d9) fep_hwr_prediction_pane_g2

0x5596,	// (0x000106e1) fep_hwr_prediction_pane_g3

0x559e,	// (0x000106e9) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x0001ae33) fep_hwr_prediction_pane_g

0xc775,	// (0x000178c0) fep_vkb_prediction_pane_g1

0xc77f,	// (0x000178ca) fep_vkb_prediction_pane_g2

0xc787,	// (0x000178d2) fep_vkb_prediction_pane_g3

0xc78f,	// (0x000178da) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x0001ae3c) fep_vkb_prediction_pane_g

0x5005,	// (0x00010150) slider_set_pane_g3

0x5019,	// (0x00010164) slider_set_pane_g4

0x5031,	// (0x0001017c) slider_set_pane_g5

0x5005,	// (0x00010150) slider_set_pane_g6

0x5047,	// (0x00010192) slider_set_pane_g7

0x9ff1,	// (0x0001513c) slider_form_pane_g3

0x9ffa,	// (0x00015145) slider_form_pane_g4

0xa002,	// (0x0001514d) slider_form_pane_g5

0x9ff1,	// (0x0001513c) slider_form_pane_g6

0x1e90,	// (0x0000cfdb) slider_form_pane_g7

0xa72c,	// (0x00015877) slider_set_pane_vc_g3

0xa735,	// (0x00015880) slider_set_pane_vc_g4

0xa73e,	// (0x00015889) slider_set_pane_vc_g5

0xa72c,	// (0x00015877) slider_set_pane_vc_g6

0xa747,	// (0x00015892) slider_set_pane_vc_g7

0xa72c,	// (0x00015877) slider_form_pane_vc_g1

0xa735,	// (0x00015880) slider_form_pane_vc_g2

0xa73e,	// (0x00015889) slider_form_pane_vc_g3

0xa72c,	// (0x00015877) slider_form_pane_vc_g4

0xaadf,	// (0x00015c2a) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0001ac0b) slider_form_pane_vc_g

0x5e63,	// (0x00010fae) main_idle_act3_pane

0xc797,	// (0x000178e2) ai3_links_pane

0x27b5,	// (0x0000d900) popup_ai3_data_window_ParamLimits

0x27b5,	// (0x0000d900) popup_ai3_data_window

0x5e63,	// (0x00010fae) grid_ai3_links_pane

0x27cf,	// (0x0000d91a) cell_ai3_links_pane_ParamLimits

0x27cf,	// (0x0000d91a) cell_ai3_links_pane

0xc7d2,	// (0x0001791d) bg_popup_sub_pane_cp11

0xc7df,	// (0x0001792a) cell_ai3_links_pane_g1

0x5e63,	// (0x00010fae) bg_popup_sub_pane_cp12

0xc804,	// (0x0001794f) heading_ai3_data_pane

0xc80c,	// (0x00017957) list_ai3_gene_pane

0xc818,	// (0x00017963) popup_ai3_data_window_g1

0xc820,	// (0x0001796b) heading_ai3_data_pane_g1

0xc828,	// (0x00017973) heading_ai3_data_pane_t1

0xc836,	// (0x00017981) list_double_ai3_gene_pane_ParamLimits

0xc836,	// (0x00017981) list_double_ai3_gene_pane

0xc843,	// (0x0001798e) list_single_ai3_gene_pane_ParamLimits

0xc843,	// (0x0001798e) list_single_ai3_gene_pane

0xb328,	// (0x00016473) list_highlight_pane_cp7_ParamLimits

0xb328,	// (0x00016473) list_highlight_pane_cp7

0xc850,	// (0x0001799b) list_single_a13_gene_pane_t1_ParamLimits

0xc850,	// (0x0001799b) list_single_a13_gene_pane_t1

0xc867,	// (0x000179b2) list_single_ai3_gene_pane_g1

0xc870,	// (0x000179bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x0001ae45) list_single_ai3_gene_pane_g

0xc878,	// (0x000179c3) list_double_ai3_gene_pane_g1_ParamLimits

0xc878,	// (0x000179c3) list_double_ai3_gene_pane_g1

0xc884,	// (0x000179cf) list_double_ai3_gene_pane_t1_ParamLimits

0xc884,	// (0x000179cf) list_double_ai3_gene_pane_t1

0xc8a0,	// (0x000179eb) list_double_ai3_gene_pane_t2_ParamLimits

0xc8a0,	// (0x000179eb) list_double_ai3_gene_pane_t2

0xc8b6,	// (0x00017a01) list_double_ai3_gene_pane_t3_ParamLimits

0xc8b6,	// (0x00017a01) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x0001ae4a) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x0001ae4a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc672,	// (0x000177bd) aid_size_min_col_2

0x265b,	// (0x0000d7a6) aid_size_min_msg_ParamLimits

0x265b,	// (0x0000d7a6) aid_size_min_msg

0x240b,	// (0x0000d556) fep_vkb_top_text_pane_g2_ParamLimits

0x240b,	// (0x0000d556) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0001acaa) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0001acaa) fep_vkb_top_text_pane_g

0x5e63,	// (0x00010fae) main_hc_apps_shell_pane

0xc8d3,	// (0x00017a1e) grid_hc_apps_pane_ParamLimits

0xc8d3,	// (0x00017a1e) grid_hc_apps_pane

0xc8e2,	// (0x00017a2d) list_hc_apps_pane

0xc8ea,	// (0x00017a35) scroll_pane_cp37_ParamLimits

0xc8ea,	// (0x00017a35) scroll_pane_cp37

0x27e9,	// (0x0000d934) cell_hc_apps_pane_ParamLimits

0x27e9,	// (0x0000d934) cell_hc_apps_pane

0x28a7,	// (0x0000d9f2) cell_hc_apps_pane_g1_ParamLimits

0x28a7,	// (0x0000d9f2) cell_hc_apps_pane_g1

0xc9d5,	// (0x00017b20) cell_hc_apps_pane_g2_ParamLimits

0xc9d5,	// (0x00017b20) cell_hc_apps_pane_g2

0xc9f1,	// (0x00017b3c) cell_hc_apps_pane_g3_ParamLimits

0xc9f1,	// (0x00017b3c) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x0001ae51) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x0001ae51) cell_hc_apps_pane_g

0x28d4,	// (0x0000da1f) cell_hc_apps_pane_t1_ParamLimits

0x28d4,	// (0x0000da1f) cell_hc_apps_pane_t1

0x61fa,	// (0x00011345) grid_highlight_pane_cp10_ParamLimits

0x61fa,	// (0x00011345) grid_highlight_pane_cp10

0x2912,	// (0x0000da5d) list_single_hc_apps_pane_ParamLimits

0x2912,	// (0x0000da5d) list_single_hc_apps_pane

0x293f,	// (0x0000da8a) list_single_hc_apps_pane_g1

0x2958,	// (0x0000daa3) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x0001ae58) list_single_hc_apps_pane_g

0x2971,	// (0x0000dabc) list_single_hc_apps_pane_g2_copy1

0xcafd,	// (0x00017c48) list_single_hc_apps_pane_t1

0x5f57,	// (0x000110a2) bg_set_opt_pane_cp_ParamLimits

0x461a,	// (0x0000f765) setting_slider_pane_t1_ParamLimits

0x4633,	// (0x0000f77e) setting_slider_pane_t2_ParamLimits

0x464d,	// (0x0000f798) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a6ed) setting_slider_pane_t_ParamLimits

0x4665,	// (0x0000f7b0) slider_set_pane_ParamLimits

0x4b8d,	// (0x0000fcd8) control_pane_g5_ParamLimits

0x4b8d,	// (0x0000fcd8) control_pane_g5

0x9e40,	// (0x00014f8b) slider_set_pane_g1_ParamLimits

0x4ff9,	// (0x00010144) slider_set_pane_g2_ParamLimits

0x5005,	// (0x00010150) slider_set_pane_g3_ParamLimits

0x5019,	// (0x00010164) slider_set_pane_g4_ParamLimits

0x5031,	// (0x0001017c) slider_set_pane_g5_ParamLimits

0x5005,	// (0x00010150) slider_set_pane_g6_ParamLimits

0x5047,	// (0x00010192) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001aade) slider_set_pane_g_ParamLimits

0x7a08,	// (0x00012b53) navi_icon_text_pane_ParamLimits

0x1516,	// (0x0000c661) aid_fill_nsta_2_ParamLimits

0x154a,	// (0x0000c695) aid_touch_tab_arrow_left_ParamLimits

0x1560,	// (0x0000c6ab) aid_touch_tab_arrow_right_ParamLimits

0x15fb,	// (0x0000c746) clock_nsta_pane_ParamLimits

0x1c5a,	// (0x0000cda5) navi_icon_pane_g1_ParamLimits

0x1c66,	// (0x0000cdb1) navi_text_pane_t1_ParamLimits

0x214f,	// (0x0000d29a) navi_icon_text_pane_g1_ParamLimits

0x215b,	// (0x0000d2a6) navi_icon_text_pane_t1_ParamLimits

0x293f,	// (0x0000da8a) list_single_hc_apps_pane_g1_ParamLimits

0x2958,	// (0x0000daa3) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x0001ae58) list_single_hc_apps_pane_g_ParamLimits

0x2971,	// (0x0000dabc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcafd,	// (0x00017c48) list_single_hc_apps_pane_t1_ParamLimits

0xe577,	// (0x000196c2) popup_toolbar2_fixed_window_ParamLimits

0xe577,	// (0x000196c2) popup_toolbar2_fixed_window

0x147f,	// (0x0000c5ca) popup_toolbar2_float_window

0x5e63,	// (0x00010fae) bg_popup_sub_pane_cp27

0xcb2b,	// (0x00017c76) grid_toolbar2_float_pane

0x5e63,	// (0x00010fae) bg_popup_sub_pane_cp26

0xcb2b,	// (0x00017c76) grid_toolbar2_fixed_pane

0x298d,	// (0x0000dad8) cell_toolbar2_fixed_pane_ParamLimits

0x298d,	// (0x0000dad8) cell_toolbar2_fixed_pane

0x29a8,	// (0x0000daf3) cell_toolbar2_fixed_pane_g1

0xcb4c,	// (0x00017c97) toolbar2_fixed_button_pane

0x89ea,	// (0x00013b35) toolbar2_fixed_button_pane_g1

0x89fa,	// (0x00013b45) toolbar2_fixed_button_pane_g2

0x89f2,	// (0x00013b3d) toolbar2_fixed_button_pane_g3

0x8a0a,	// (0x00013b55) toolbar2_fixed_button_pane_g4

0x8a02,	// (0x00013b4d) toolbar2_fixed_button_pane_g5

0x8a12,	// (0x00013b5d) toolbar2_fixed_button_pane_g6

0x8a1a,	// (0x00013b65) toolbar2_fixed_button_pane_g7

0x8a2a,	// (0x00013b75) toolbar2_fixed_button_pane_g8

0x8a22,	// (0x00013b6d) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001a9e0) toolbar2_fixed_button_pane_g

0xcb54,	// (0x00017c9f) cell_toolbar2_float_pane_ParamLimits

0xcb54,	// (0x00017c9f) cell_toolbar2_float_pane

0xcb65,	// (0x00017cb0) cell_toolbar2_float_pane_g1

0xcb4c,	// (0x00017c97) toolbar2_fixed_button_pane_cp

0x22e5,	// (0x0000d430) fep_vkb_accented_list_pane_ParamLimits

0x22e5,	// (0x0000d430) fep_vkb_accented_list_pane

0x53bc,	// (0x00010507) bg_popup_fep_shadow_pane_g9

0x7b88,	// (0x00012cd3) bg_popup_fep_shadow_pane_cp3

0x701c,	// (0x00012167) list_accented_list_pane

0xcb6e,	// (0x00017cb9) list_single_accented_list_pane_ParamLimits

0xcb6e,	// (0x00017cb9) list_single_accented_list_pane

0x7b88,	// (0x00012cd3) list_highlight_pane_cp10

0xcb7f,	// (0x00017cca) list_single_accented_list_pane_t1

0x13a9,	// (0x0000c4f4) popup_slider_window_ParamLimits

0x13a9,	// (0x0000c4f4) popup_slider_window

0xc669,	// (0x000177b4) aid_indentation_list_msg

0x2aa1,	// (0x0000dbec) bg_popup_window_pane_cp19

0xcca3,	// (0x00017dee) popup_slider_window_g1

0xccbf,	// (0x00017e0a) popup_slider_window_g2

0xccdb,	// (0x00017e26) popup_slider_window_g3

0x0005,

0xfd12,	// (0x0001ae5d) popup_slider_window_g

0xcd37,	// (0x00017e82) popup_slider_window_t1

0xcdab,	// (0x00017ef6) small_volume_slider_vertical_pane

0xb363,	// (0x000164ae) small_volume_slider_vertical_pane_g1

0xb363,	// (0x000164ae) small_volume_slider_vertical_pane_g2

0xcdc7,	// (0x00017f12) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x0001ae6f) small_volume_slider_vertical_pane_g

0xe4e5,	// (0x00019630) area_side_right_pane_ParamLimits

0xe4e5,	// (0x00019630) area_side_right_pane

0xe933,	// (0x00019a7e) aid_size_side_button_ParamLimits

0xe933,	// (0x00019a7e) aid_size_side_button

0xe94c,	// (0x00019a97) grid_sctrl_middle_pane_ParamLimits

0xe94c,	// (0x00019a97) grid_sctrl_middle_pane

0x55da,	// (0x00010725) sctrl_sk_bottom_pane

0x55eb,	// (0x00010736) sctrl_sk_top_pane

0x55fd,	// (0x00010748) aid_touch_sctrl_top

0x560a,	// (0x00010755) bg_sctrl_sk_pane_ParamLimits

0x560a,	// (0x00010755) bg_sctrl_sk_pane

0x5618,	// (0x00010763) sctrl_sk_top_pane_g1

0x5625,	// (0x00010770) sctrl_sk_top_pane_t1

0x55fd,	// (0x00010748) aid_touch_sctrl_bottom

0x560a,	// (0x00010755) bg_sctrl_sk_pane_cp_ParamLimits

0x560a,	// (0x00010755) bg_sctrl_sk_pane_cp

0x5640,	// (0x0001078b) sctrl_sk_bottom_pane_g1

0x5625,	// (0x00010770) sctrl_sk_bottom_pane_t1

0xe966,	// (0x00019ab1) cell_sctrl_middle_pane_ParamLimits

0xe966,	// (0x00019ab1) cell_sctrl_middle_pane

0xe977,	// (0x00019ac2) aid_touch_sctrl_middle_ParamLimits

0xe977,	// (0x00019ac2) aid_touch_sctrl_middle

0xe984,	// (0x00019acf) bg_sctrl_middle_pane_ParamLimits

0xe984,	// (0x00019acf) bg_sctrl_middle_pane

0x5cb0,	// (0x00010dfb) cell_sctrl_middle_pane_g1_ParamLimits

0x5cb0,	// (0x00010dfb) cell_sctrl_middle_pane_g1

0xe992,	// (0x00019add) cell_sctrl_middle_pane_g2_ParamLimits

0xe992,	// (0x00019add) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x0001ae7b) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x0001ae7b) cell_sctrl_middle_pane_g

0x89ea,	// (0x00013b35) bg_sctrl_middle_pane_g1

0x89f2,	// (0x00013b3d) bg_sctrl_middle_pane_g2

0x89fa,	// (0x00013b45) bg_sctrl_middle_pane_g3

0x8a02,	// (0x00013b4d) bg_sctrl_middle_pane_g4

0x8a0a,	// (0x00013b55) bg_sctrl_middle_pane_g5

0x8a12,	// (0x00013b5d) bg_sctrl_middle_pane_g6

0x8a1a,	// (0x00013b65) bg_sctrl_middle_pane_g7

0x8a22,	// (0x00013b6d) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x0001ae80) bg_sctrl_middle_pane_g

0x8a2a,	// (0x00013b75) bg_sctrl_middle_pane_g8_copy1

0x89ea,	// (0x00013b35) bg_sctrl_sk_pane_g1

0x89fa,	// (0x00013b45) bg_sctrl_sk_pane_g2

0x89f2,	// (0x00013b3d) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001a9e0) bg_sctrl_sk_pane_g

0x670c,	// (0x00011857) aid_size_touch_scroll_bar

0x8a0a,	// (0x00013b55) bg_sctrl_sk_pane_g4

0x8a02,	// (0x00013b4d) bg_sctrl_sk_pane_g5

0x8a12,	// (0x00013b5d) bg_sctrl_sk_pane_g6

0x8a1a,	// (0x00013b65) bg_sctrl_sk_pane_g7

0x8a2a,	// (0x00013b75) bg_sctrl_sk_pane_g8

0x8a22,	// (0x00013b6d) bg_sctrl_sk_pane_g9

0x7fba,	// (0x00013105) popup_fep_china_hwr2_fs_candidate_window

0x0eed,	// (0x0000c038) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x0eed,	// (0x0000c038) popup_fep_china_hwr2_fs_control_window

0x53dc,	// (0x00010527) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x0001ae76) sctrl_sk_top_pane_g

0x2bc4,	// (0x0000dd0f) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2bc4,	// (0x0000dd0f) aid_fep_china_hwr2_fs_cell

0x2bd8,	// (0x0000dd23) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2bd8,	// (0x0000dd23) bg_popup_fep_shadow_pane_cp4

0x2bef,	// (0x0000dd3a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2bef,	// (0x0000dd3a) bg_popup_fep_shadow_pane_cp5

0x2c01,	// (0x0000dd4c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c01,	// (0x0000dd4c) popup_fep_china_hwr2_fs_control_bar_grid

0x2c15,	// (0x0000dd60) popup_fep_china_hwr2_fs_control_funtion_grid

0xce23,	// (0x00017f6e) aid_fep_china_hwr2_fs_candi_cell

0x5e63,	// (0x00010fae) bg_popup_fep_shadow_pane_cp6

0xce2d,	// (0x00017f78) popup_fep_china_hwr2_fs_candidate_grid

0x2c1d,	// (0x0000dd68) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2c1d,	// (0x0000dd68) cell_fep_china_hwr2_fs_funtion_grid

0xb363,	// (0x000164ae) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xce4f,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xce4f,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xce5d,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xce5d,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x0001ae91) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x0001ae91) cell_fep_china_hwr2_fs_funtion_grid_g

0x2c35,	// (0x0000dd80) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2c35,	// (0x0000dd80) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2c4a,	// (0x0000dd95) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2c4a,	// (0x0000dd95) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x0001ae96) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x0001ae96) cell_fep_china_hwr2_fs_funtion_grid_t

0xcea4,	// (0x00017fef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xceac,	// (0x00017ff7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xceb4,	// (0x00017fff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x0001ae9b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcebc,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcebc,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid

0xced5,	// (0x00018020) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcedd,	// (0x00018028) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb363,	// (0x000164ae) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb363,	// (0x000164ae) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0001acaf) cell_fep_china_hwr2_fs_candidate_grid_g

0xcee5,	// (0x00018030) cell_fep_china_hwr2_fs_candidate_grid_t1

0x85ad,	// (0x000136f8) clock_nsta_pane_cp_24_ParamLimits

0x85ad,	// (0x000136f8) clock_nsta_pane_cp_24

0x862b,	// (0x00013776) indicator_nsta_pane_cp_24_ParamLimits

0x862b,	// (0x00013776) indicator_nsta_pane_cp_24

0x976e,	// (0x000148b9) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001aa45) heading_pane_g

0xa298,	// (0x000153e3) grid_sct_catagory_button_pane

0xa2c8,	// (0x00015413) scroll_pane_cp5_ParamLimits

0xaf05,	// (0x00016050) button_value_adjust_pane_cp5_ParamLimits

0xaf05,	// (0x00016050) button_value_adjust_pane_cp5

0xb001,	// (0x0001614c) form2_midp_time_pane_ParamLimits

0xcef3,	// (0x0001803e) cell_sct_catagory_button_pane_ParamLimits

0xcef3,	// (0x0001803e) cell_sct_catagory_button_pane

0xb328,	// (0x00016473) bg_button_pane_cp01_ParamLimits

0xb328,	// (0x00016473) bg_button_pane_cp01

0xb363,	// (0x000164ae) cell_sct_catagory_button_pane_g1

0x1422,	// (0x0000c56d) popup_tb_extension_window

0x2c66,	// (0x0000ddb1) aid_size_cell_ext_ParamLimits

0x2c66,	// (0x0000ddb1) aid_size_cell_ext

0x654e,	// (0x00011699) bg_tb_trans_pane_cp1_ParamLimits

0x654e,	// (0x00011699) bg_tb_trans_pane_cp1

0x2c8c,	// (0x0000ddd7) grid_tb_ext_pane_ParamLimits

0x2c8c,	// (0x0000ddd7) grid_tb_ext_pane

0x2cc7,	// (0x0000de12) cell_tb_ext_pane_ParamLimits

0x2cc7,	// (0x0000de12) cell_tb_ext_pane

0x2cef,	// (0x0000de3a) cell_tb_ext_pane_g1_ParamLimits

0x2cef,	// (0x0000de3a) cell_tb_ext_pane_g1

0xcf87,	// (0x000180d2) cell_tb_ext_pane_t1

0x61fa,	// (0x00011345) list_highlight_pane_cp11_ParamLimits

0x61fa,	// (0x00011345) list_highlight_pane_cp11

0x454d,	// (0x0000f698) popup_uni_indicator_window_ParamLimits

0x454d,	// (0x0000f698) popup_uni_indicator_window

0x6d3e,	// (0x00011e89) bg_popup_sub_pane_cp14

0xcfa2,	// (0x000180ed) list_uniindi_pane

0xcfae,	// (0x000180f9) uniindi_top_pane

0x61fa,	// (0x00011345) bg_uniindi_top_pane

0xcfcd,	// (0x00018118) uniindi_top_pane_g1

0xcfe3,	// (0x0001812e) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x0001aea2) uniindi_top_pane_g

0xd00d,	// (0x00018158) uniindi_top_pane_t1

0xd037,	// (0x00018182) list_single_uniindi_pane_ParamLimits

0xd037,	// (0x00018182) list_single_uniindi_pane

0xb363,	// (0x000164ae) bg_uniindi_top_pane_g1

0xd04a,	// (0x00018195) list_single_uniindi_pane_g1

0xd05d,	// (0x000181a8) list_single_uniindi_pane_t1

0x43c3,	// (0x0000f50e) control_bg_pane

0xd082,	// (0x000181cd) bg_sctrl_sk_pane_cp1

0xd08b,	// (0x000181d6) bg_sctrl_sk_pane_cp2

0xd094,	// (0x000181df) control_bg_pane_g1

0xd09d,	// (0x000181e8) control_bg_pane_g2

0x0001,

0xfd60,	// (0x0001aeab) control_bg_pane_g

0xad6b,	// (0x00015eb6) cell_indicator_nsta_pane_g1_ParamLimits

0x20b6,	// (0x0000d201) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0001ac20) cell_indicator_nsta_pane_g_ParamLimits

0xb089,	// (0x000161d4) form2_midp_time_pane_t1_ParamLimits

0xbbca,	// (0x00016d15) main_idle_act4_pane_ParamLimits

0xbbca,	// (0x00016d15) main_idle_act4_pane

0x1422,	// (0x0000c56d) popup_tb_extension_window_ParamLimits

0x2cae,	// (0x0000ddf9) tb_ext_find_pane_ParamLimits

0x2cae,	// (0x0000ddf9) tb_ext_find_pane

0xd0a6,	// (0x000181f1) ai_gene_pane_1_cp1

0x7ccd,	// (0x00012e18) ai_gene_pane_2_cp1

0xd0ae,	// (0x000181f9) list_single_idle_plugin_calendar_pane

0xd0b7,	// (0x00018202) list_single_idle_plugin_notification_pane

0xd0c0,	// (0x0001820b) list_single_idle_plugin_player_pane

0x2d0c,	// (0x0000de57) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2d0c,	// (0x0000de57) list_single_idle_plugin_shortcut_pane

0x2d34,	// (0x0000de7f) main_idle_act4_pane_t1

0x2d4a,	// (0x0000de95) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x0001aeb0) main_idle_act4_pane_t

0x2d60,	// (0x0000deab) middle_sk_idle_act4_pane_ParamLimits

0x2d60,	// (0x0000deab) middle_sk_idle_act4_pane

0x2d7c,	// (0x0000dec7) popup_clock_digital_analogue_window_cp2

0x2da4,	// (0x0000deef) shortcut_wheel_idle_act4_pane_ParamLimits

0x2da4,	// (0x0000deef) shortcut_wheel_idle_act4_pane

0xb363,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g1

0xb363,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g2

0xb363,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g3

0xb363,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g4

0xb363,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g5

0xd153,	// (0x0001829e) shortcut_wheel_idle_act4_pane_g6

0xd15b,	// (0x000182a6) shortcut_wheel_idle_act4_pane_g7

0xd163,	// (0x000182ae) shortcut_wheel_idle_act4_pane_g8

0xd16b,	// (0x000182b6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x0001aeb5) shortcut_wheel_idle_act4_pane_g

0xed72,	// (0x00019ebd) middle_sk_idle_act4_pane_g1_ParamLimits

0xed72,	// (0x00019ebd) middle_sk_idle_act4_pane_g1

0x2e21,	// (0x0000df6c) middle_sk_idle_act4_pane_g2_ParamLimits

0x2e21,	// (0x0000df6c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x0001aed8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x0001aed8) middle_sk_idle_act4_pane_g

0x2e39,	// (0x0000df84) middle_sk_idle_act4_pane_t1_ParamLimits

0x2e39,	// (0x0000df84) middle_sk_idle_act4_pane_t1

0x2e68,	// (0x0000dfb3) grid_ai_shortcut_pane_ParamLimits

0x2e68,	// (0x0000dfb3) grid_ai_shortcut_pane

0x2e85,	// (0x0000dfd0) list_highlight_pane_cp16_ParamLimits

0x2e85,	// (0x0000dfd0) list_highlight_pane_cp16

0x2e92,	// (0x0000dfdd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2e92,	// (0x0000dfdd) list_single_idle_plugin_shortcut_pane_g1

0x2e9e,	// (0x0000dfe9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2e9e,	// (0x0000dfe9) list_single_idle_plugin_shortcut_pane_g2

0x2eba,	// (0x0000e005) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2eba,	// (0x0000e005) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x0001aedd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x0001aedd) list_single_idle_plugin_shortcut_pane_g

0x2ecf,	// (0x0000e01a) cell_ai_shortcut_pane_ParamLimits

0x2ecf,	// (0x0000e01a) cell_ai_shortcut_pane

0x2ee5,	// (0x0000e030) cell_ai_shortcut_pane_g1_ParamLimits

0x2ee5,	// (0x0000e030) cell_ai_shortcut_pane_g1

0xd0a6,	// (0x000181f1) ai_gene_pane_1_cp2

0xd29b,	// (0x000183e6) ai_gene_pane_2_cp2

0xd2a3,	// (0x000183ee) list_highlight_pane_cp15

0xd2ac,	// (0x000183f7) list_single_idle_plugin_calendar_pane_g1

0xd2a3,	// (0x000183ee) list_highlight_pane_cp17

0xd2b4,	// (0x000183ff) list_single_idle_plugin_calendar_pane_g1_copy1

0xd2bc,	// (0x00018407) list_single_idle_plugin_player_pane_g1

0xa4f1,	// (0x0001563c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x0001aee4) list_single_idle_plugin_player_pane_g

0xd2c4,	// (0x0001840f) list_single_idle_plugin_player_pane_t1

0xd2d2,	// (0x0001841d) list_single_idle_plugin_player_pane_t2

0xd2e0,	// (0x0001842b) list_single_idle_plugin_player_pane_t3

0xd2ee,	// (0x00018439) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x0001aee9) list_single_idle_plugin_player_pane_t

0xd2fc,	// (0x00018447) wait_bar_pane_cp15

0xd304,	// (0x0001844f) grid_ai_notification_pane

0xa4f1,	// (0x0001563c) list_single_idle_plugin_notification_pane_g1

0x2f07,	// (0x0000e052) cell_ai_notification_pane_ParamLimits

0x2f07,	// (0x0000e052) cell_ai_notification_pane

0xd31a,	// (0x00018465) cell_ai_notification_pane_g1

0xd322,	// (0x0001846d) cell_ai_notification_pane_t1

0x2f14,	// (0x0000e05f) tb_ext_find_button_pane

0x2f1c,	// (0x0000e067) tb_ext_find_pane_g1

0x2f24,	// (0x0000e06f) tb_ext_find_pane_t1

0x751c,	// (0x00012667) tb_ext_find_button_pane_g1

0xd34e,	// (0x00018499) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x0001aef2) tb_ext_find_button_pane_g

0x2d34,	// (0x0000de7f) main_idle_act4_pane_t1_ParamLimits

0x2d4a,	// (0x0000de95) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x0001aeb0) main_idle_act4_pane_t_ParamLimits

0x2d7c,	// (0x0000dec7) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2d94,	// (0x0000dedf) sat_plugin_idle_act4_pane_ParamLimits

0x2d94,	// (0x0000dedf) sat_plugin_idle_act4_pane

0x2f32,	// (0x0000e07d) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2f32,	// (0x0000e07d) sat_plugin_idle_act4_pane_t1

0x2f4a,	// (0x0000e095) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2f4a,	// (0x0000e095) sat_plugin_idle_act4_pane_t2

0x2f62,	// (0x0000e0ad) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2f62,	// (0x0000e0ad) sat_plugin_idle_act4_pane_t3

0x2f7a,	// (0x0000e0c5) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2f7a,	// (0x0000e0c5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x0001aef7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x0001aef7) sat_plugin_idle_act4_pane_t

0x4488,	// (0x0000f5d3) popup_battery_window_ParamLimits

0x4488,	// (0x0000f5d3) popup_battery_window

0x61fa,	// (0x00011345) bg_popup_sub_pane_cp25_ParamLimits

0x61fa,	// (0x00011345) bg_popup_sub_pane_cp25

0xd3a3,	// (0x000184ee) popup_battery_window_g1_ParamLimits

0xd3a3,	// (0x000184ee) popup_battery_window_g1

0xd3af,	// (0x000184fa) popup_battery_window_t1_ParamLimits

0xd3af,	// (0x000184fa) popup_battery_window_t1

0xd3c1,	// (0x0001850c) popup_battery_window_t2_ParamLimits

0xd3c1,	// (0x0001850c) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x0001af00) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x0001af00) popup_battery_window_t

0x0c2e,	// (0x0000bd79) midp_canvas_pane_ParamLimits

0x0c89,	// (0x0000bdd4) midp_keypad_pane_ParamLimits

0x0c89,	// (0x0000bdd4) midp_keypad_pane

0x7f12,	// (0x0001305d) main_midp_pane_ParamLimits

0xadc5,	// (0x00015f10) signal_pane_g2_cp_ParamLimits

0x2f92,	// (0x0000e0dd) aid_size_cell_midp_keypad_ParamLimits

0x2f92,	// (0x0000e0dd) aid_size_cell_midp_keypad

0x2fb0,	// (0x0000e0fb) midp_keyp_game_grid_pane_ParamLimits

0x2fb0,	// (0x0000e0fb) midp_keyp_game_grid_pane

0x2fd7,	// (0x0000e122) midp_keyp_rocker_pane_ParamLimits

0x2fd7,	// (0x0000e122) midp_keyp_rocker_pane

0x3030,	// (0x0000e17b) midp_keyp_sk_left_pane_ParamLimits

0x3030,	// (0x0000e17b) midp_keyp_sk_left_pane

0x3084,	// (0x0000e1cf) midp_keyp_sk_right_pane_ParamLimits

0x3084,	// (0x0000e1cf) midp_keyp_sk_right_pane

0x5e63,	// (0x00010fae) bg_button_pane_cp03

0x30d8,	// (0x0000e223) midp_keyp_sk_left_pane_g1

0x5e63,	// (0x00010fae) bg_button_pane_cp04

0x30d8,	// (0x0000e223) midp_keyp_sk_right_pane_g1

0xb363,	// (0x000164ae) midp_keyp_rocker_pane_g1

0x30e1,	// (0x0000e22c) keyp_game_cell_pane_ParamLimits

0x30e1,	// (0x0000e22c) keyp_game_cell_pane

0x5e63,	// (0x00010fae) bg_button_pane_cp02

0x3105,	// (0x0000e250) keyp_game_cell_pane_g1

0xe527,	// (0x00019672) popup_fep_vkb2_window_ParamLimits

0xe527,	// (0x00019672) popup_fep_vkb2_window

0xe99e,	// (0x00019ae9) aid_size_cell_vkb2_ParamLimits

0xe99e,	// (0x00019ae9) aid_size_cell_vkb2

0xe9d4,	// (0x00019b1f) popup_fep_vkb2_window_g1_ParamLimits

0xe9d4,	// (0x00019b1f) popup_fep_vkb2_window_g1

0xea24,	// (0x00019b6f) vkb2_area_bottom_pane_ParamLimits

0xea24,	// (0x00019b6f) vkb2_area_bottom_pane

0xea78,	// (0x00019bc3) vkb2_area_keypad_pane_ParamLimits

0xea78,	// (0x00019bc3) vkb2_area_keypad_pane

0xeac0,	// (0x00019c0b) vkb2_area_top_pane_ParamLimits

0xeac0,	// (0x00019c0b) vkb2_area_top_pane

0xeb46,	// (0x00019c91) vkb2_top_entry_pane_ParamLimits

0xeb46,	// (0x00019c91) vkb2_top_entry_pane

0xeb73,	// (0x00019cbe) vkb2_top_grid_left_pane_ParamLimits

0xeb73,	// (0x00019cbe) vkb2_top_grid_left_pane

0xeb93,	// (0x00019cde) vkb2_top_grid_right_pane_ParamLimits

0xeb93,	// (0x00019cde) vkb2_top_grid_right_pane

0x58af,	// (0x000109fa) vkb2_cell_keypad_pane_ParamLimits

0x58af,	// (0x000109fa) vkb2_cell_keypad_pane

0xebd9,	// (0x00019d24) vkb2_area_bottom_grid_pane_ParamLimits

0xebd9,	// (0x00019d24) vkb2_area_bottom_grid_pane

0xec03,	// (0x00019d4e) vkb2_area_bottom_pane_g1_ParamLimits

0xec03,	// (0x00019d4e) vkb2_area_bottom_pane_g1

0xec29,	// (0x00019d74) vkb2_area_bottom_pane_g2_ParamLimits

0xec29,	// (0x00019d74) vkb2_area_bottom_pane_g2

0xec5a,	// (0x00019da5) vkb2_area_bottom_pane_g3_ParamLimits

0xec5a,	// (0x00019da5) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x0001af05) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x0001af05) vkb2_area_bottom_pane_g

0x5a59,	// (0x00010ba4) vkb2_top_cell_left_pane_ParamLimits

0x5a59,	// (0x00010ba4) vkb2_top_cell_left_pane

0x3434,	// (0x0000e57f) vkb2_top_entry_pane_g1_ParamLimits

0x3434,	// (0x0000e57f) vkb2_top_entry_pane_g1

0x3442,	// (0x0000e58d) vkb2_top_entry_pane_t1_ParamLimits

0x3442,	// (0x0000e58d) vkb2_top_entry_pane_t1

0xd572,	// (0x000186bd) vkb2_top_entry_pane_t2_ParamLimits

0xd572,	// (0x000186bd) vkb2_top_entry_pane_t2

0xd5a4,	// (0x000186ef) vkb2_top_entry_pane_t3_ParamLimits

0xd5a4,	// (0x000186ef) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x0001af0c) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x0001af0c) vkb2_top_entry_pane_t

0xecc4,	// (0x00019e0f) vkb2_top_grid_right_pane_g1_ParamLimits

0xecc4,	// (0x00019e0f) vkb2_top_grid_right_pane_g1

0x5abc,	// (0x00010c07) vkb2_top_grid_right_pane_g2_ParamLimits

0x5abc,	// (0x00010c07) vkb2_top_grid_right_pane_g2

0x5ad4,	// (0x00010c1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x5ad4,	// (0x00010c1f) vkb2_top_grid_right_pane_g3

0xecda,	// (0x00019e25) vkb2_top_grid_right_pane_g4_ParamLimits

0xecda,	// (0x00019e25) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x0001af13) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x0001af13) vkb2_top_grid_right_pane_g

0x5b02,	// (0x00010c4d) vkb2_top_cell_left_pane_g1

0x5b19,	// (0x00010c64) vkb2_cell_keypad_pane_g1_ParamLimits

0x5b19,	// (0x00010c64) vkb2_cell_keypad_pane_g1

0xd5c8,	// (0x00018713) vkb2_cell_keypad_pane_t1_ParamLimits

0xd5c8,	// (0x00018713) vkb2_cell_keypad_pane_t1

0x5b27,	// (0x00010c72) vkb2_cell_bottom_grid_pane_ParamLimits

0x5b27,	// (0x00010c72) vkb2_cell_bottom_grid_pane

0x5b60,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1

0x2dc5,	// (0x0000df10) aid_call2_pane_cp02

0x2dcd,	// (0x0000df18) aid_call_pane_cp02

0x2dd5,	// (0x0000df20) clock_digital_number_pane_cp10

0x2ddd,	// (0x0000df28) clock_digital_number_pane_cp11

0x2de5,	// (0x0000df30) clock_digital_number_pane_cp12

0x2ded,	// (0x0000df38) clock_digital_number_pane_cp13

0x2df5,	// (0x0000df40) clock_digital_separator_pane_cp10

0x751c,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g1

0x751c,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g2

0x2dfd,	// (0x0000df48) popup_clock_digital_analogue_window_cp2_g3

0x751c,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g4

0x2dfd,	// (0x0000df48) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x0001aec8) popup_clock_digital_analogue_window_cp2_g

0x2e05,	// (0x0000df50) popup_clock_digital_analogue_window_cp2_t1

0x2e13,	// (0x0000df5e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x0001aed3) popup_clock_digital_analogue_window_cp2_t

0xb363,	// (0x000164ae) clock_digital_number_pane_cp10_g1

0xb363,	// (0x000164ae) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001acaf) clock_digital_number_pane_cp10_g

0xb363,	// (0x000164ae) clock_digital_separator_pane_cp10_g1

0xb363,	// (0x000164ae) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001acaf) clock_digital_separator_pane_cp10_g

0xcfef,	// (0x0001813a) uniindi_top_pane_g3

0xd000,	// (0x0001814b) uniindi_top_pane_g4

0x593a,	// (0x00010a85) vkb2_row_keypad_pane_ParamLimits

0x593a,	// (0x00010a85) vkb2_row_keypad_pane

0x5b7c,	// (0x00010cc7) vkb2_cell_t_keypad_pane_ParamLimits

0x5b7c,	// (0x00010cc7) vkb2_cell_t_keypad_pane

0x5b8c,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5b8c,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08

0x5b9f,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5b9f,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09

0x5bb3,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5bb3,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01

0x5bc4,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5bc4,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02

0x5bd5,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5bd5,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03

0x5be6,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5be6,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04

0x5bf7,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5bf7,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05

0x5c08,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5c08,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06

0x5c19,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5c19,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07

0x5c2a,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5c2a,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10

0x53dc,	// (0x00010527) vkb2_cell_t_keypad_pane_g1

0xd5df,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1

0x43c3,	// (0x0000f50e) popup_grid_graphic2_window

0x34a7,	// (0x0000e5f2) aid_size_cell_graphic2_ParamLimits

0x34a7,	// (0x0000e5f2) aid_size_cell_graphic2

0x90ee,	// (0x00014239) bg_popup_window_pane_cp21_ParamLimits

0x90ee,	// (0x00014239) bg_popup_window_pane_cp21

0x34d9,	// (0x0000e624) graphic2_pages_pane_ParamLimits

0x34d9,	// (0x0000e624) graphic2_pages_pane

0x352f,	// (0x0000e67a) grid_graphic2_control_pane_ParamLimits

0x352f,	// (0x0000e67a) grid_graphic2_control_pane

0x3563,	// (0x0000e6ae) grid_graphic2_pane_ParamLimits

0x3563,	// (0x0000e6ae) grid_graphic2_pane

0x35d6,	// (0x0000e721) cell_graphic2_pane

0x5e63,	// (0x00010fae) main_comp_mode_pane

0xc80c,	// (0x00017957) list_ai3_gene_pane_ParamLimits

0x2aa1,	// (0x0000dbec) bg_popup_window_pane_cp19_ParamLimits

0xcc45,	// (0x00017d90) bg_touch_area_indi_pane_ParamLimits

0xcc45,	// (0x00017d90) bg_touch_area_indi_pane

0xcc5b,	// (0x00017da6) bg_touch_area_indi_pane_cp01_ParamLimits

0xcc5b,	// (0x00017da6) bg_touch_area_indi_pane_cp01

0xcc71,	// (0x00017dbc) bg_touch_area_indi_pane_cp02_ParamLimits

0xcc71,	// (0x00017dbc) bg_touch_area_indi_pane_cp02

0xcc89,	// (0x00017dd4) bg_touch_area_indi_pane_cp03_ParamLimits

0xcc89,	// (0x00017dd4) bg_touch_area_indi_pane_cp03

0xcca3,	// (0x00017dee) popup_slider_window_g1_ParamLimits

0xccbf,	// (0x00017e0a) popup_slider_window_g2_ParamLimits

0xccdb,	// (0x00017e26) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x0001ae5d) popup_slider_window_g_ParamLimits

0xcd37,	// (0x00017e82) popup_slider_window_t1_ParamLimits

0xcdab,	// (0x00017ef6) small_volume_slider_vertical_pane_ParamLimits

0x35d6,	// (0x0000e721) cell_graphic2_pane_ParamLimits

0x3631,	// (0x0000e77c) bg_button_pane_cp10_ParamLimits

0x3631,	// (0x0000e77c) bg_button_pane_cp10

0x3644,	// (0x0000e78f) bg_button_pane_cp11_ParamLimits

0x3644,	// (0x0000e78f) bg_button_pane_cp11

0x3657,	// (0x0000e7a2) graphic2_pages_pane_g1_ParamLimits

0x3657,	// (0x0000e7a2) graphic2_pages_pane_g1

0x3672,	// (0x0000e7bd) graphic2_pages_pane_g2_ParamLimits

0x3672,	// (0x0000e7bd) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x0001af21) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x0001af21) graphic2_pages_pane_g

0x368a,	// (0x0000e7d5) graphic2_pages_pane_t1_ParamLimits

0x368a,	// (0x0000e7d5) graphic2_pages_pane_t1

0x36a2,	// (0x0000e7ed) cell_graphic2_control_pane_ParamLimits

0x36a2,	// (0x0000e7ed) cell_graphic2_control_pane

0x36bc,	// (0x0000e807) cell_graphic2_pane_g1_ParamLimits

0x36bc,	// (0x0000e807) cell_graphic2_pane_g1

0xed80,	// (0x00019ecb) cell_graphic2_pane_g2_ParamLimits

0xed80,	// (0x00019ecb) cell_graphic2_pane_g2

0x36c9,	// (0x0000e814) cell_graphic2_pane_g3_ParamLimits

0x36c9,	// (0x0000e814) cell_graphic2_pane_g3

0xed8d,	// (0x00019ed8) cell_graphic2_pane_g4_ParamLimits

0xed8d,	// (0x00019ed8) cell_graphic2_pane_g4

0x36d6,	// (0x0000e821) cell_graphic2_pane_g5_ParamLimits

0x36d6,	// (0x0000e821) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x0001af26) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x0001af26) cell_graphic2_pane_g

0x36f6,	// (0x0000e841) cell_graphic2_pane_t1_ParamLimits

0x36f6,	// (0x0000e841) cell_graphic2_pane_t1

0x9762,	// (0x000148ad) grid_highlight_pane_cp11_ParamLimits

0x9762,	// (0x000148ad) grid_highlight_pane_cp11

0x6d3e,	// (0x00011e89) bg_button_pane_cp05

0x370d,	// (0x0000e858) cell_graphic2_control_pane_g1

0xb363,	// (0x000164ae) bg_touch_area_indi_pane_g1

0xd83d,	// (0x00018988) aid_cmod_rocker_key_size

0xd847,	// (0x00018992) aid_cmode_itu_key_size

0xd851,	// (0x0001899c) main_cmode_video_pane

0xd85b,	// (0x000189a6) main_comp_mode_itu_pane

0xd867,	// (0x000189b2) main_comp_mode_rocker_pane

0xd873,	// (0x000189be) cell_cmode_rocker_pane_ParamLimits

0xd873,	// (0x000189be) cell_cmode_rocker_pane

0xd885,	// (0x000189d0) cell_cmode_itu_pane_ParamLimits

0xd885,	// (0x000189d0) cell_cmode_itu_pane

0x6d3e,	// (0x00011e89) bg_button_pane_cp06_ParamLimits

0x6d3e,	// (0x00011e89) bg_button_pane_cp06

0xb5f5,	// (0x00016740) cell_cmode_rocker_pane_g1_ParamLimits

0xb5f5,	// (0x00016740) cell_cmode_rocker_pane_g1

0xce4f,	// (0x00017f9a) cell_cmode_rocker_pane_g2_ParamLimits

0xce4f,	// (0x00017f9a) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x0001af31) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x0001af31) cell_cmode_rocker_pane_g

0x5e63,	// (0x00010fae) bg_button_pane_cp07

0xd89a,	// (0x000189e5) cell_cmode_itu_pane_g1

0xd8a3,	// (0x000189ee) cell_cmode_itu_pane_t1

0xd8b1,	// (0x000189fc) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x0001af36) cell_cmode_itu_pane_t

0xd072,	// (0x000181bd) aid_touch_ctrl_left

0xd07a,	// (0x000181c5) aid_touch_ctrl_right

0x5e63,	// (0x00010fae) compa_mode_pane

0x371a,	// (0x0000e865) aid_cmod_rocker_key_size_cp

0x3724,	// (0x0000e86f) aid_cmode_itu_key_size_cp

0xd8d3,	// (0x00018a1e) compa_mode_pane_g1

0xd8db,	// (0x00018a26) compa_mode_pane_g2

0xd8e3,	// (0x00018a2e) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x0001af3b) compa_mode_pane_g

0x372e,	// (0x0000e879) main_comp_mode_itu_pane_cp

0x3736,	// (0x0000e881) main_comp_mode_rocker_pane_cp

0x373e,	// (0x0000e889) cell_cmode_itu_pane_cp_ParamLimits

0x373e,	// (0x0000e889) cell_cmode_itu_pane_cp

0x3753,	// (0x0000e89e) cell_cmode_rocker_pane_cp_ParamLimits

0x3753,	// (0x0000e89e) cell_cmode_rocker_pane_cp

0x6d3e,	// (0x00011e89) bg_button_pane_cp06_cp_ParamLimits

0x6d3e,	// (0x00011e89) bg_button_pane_cp06_cp

0xb5f5,	// (0x00016740) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb5f5,	// (0x00016740) cell_cmode_rocker_pane_g1_cp

0xb363,	// (0x000164ae) cell_cmode_rocker_pane_g2_cp

0x5e63,	// (0x00010fae) bg_button_pane_cp07_cp

0x3765,	// (0x0000e8b0) cell_cmode_itu_pane_g1_cp

0x376e,	// (0x0000e8b9) cell_cmode_itu_pane_t1_cp

0x376e,	// (0x0000e8b9) cell_cmode_itu_pane_t2_cp

0x1e86,	// (0x0000cfd1) settings_code_pane_cp2

0x5f57,	// (0x000110a2) bg_popup_window_pane_cp3_ParamLimits

0x63d4,	// (0x0001151f) heading_pane_cp3_ParamLimits

0x63e0,	// (0x0001152b) listscroll_popup_graphic_pane_ParamLimits

0x5185,	// (0x000102d0) fep_hwr_aid_pane_ParamLimits

0x55fd,	// (0x00010748) aid_touch_sctrl_top_ParamLimits

0x5618,	// (0x00010763) sctrl_sk_top_pane_g1_ParamLimits

0x53dc,	// (0x00010527) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x0001ae76) sctrl_sk_top_pane_g_ParamLimits

0x5625,	// (0x00010770) sctrl_sk_top_pane_t1_ParamLimits

0x55fd,	// (0x00010748) aid_touch_sctrl_bottom_ParamLimits

0x5625,	// (0x00010770) sctrl_sk_bottom_pane_t1_ParamLimits

0xcfbb,	// (0x00018106) aid_area_touch_clock

0xeb08,	// (0x00019c53) aid_vkb2_area_top_pane_cell_ParamLimits

0xeb08,	// (0x00019c53) aid_vkb2_area_top_pane_cell

0xebb3,	// (0x00019cfe) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xebb3,	// (0x00019cfe) aid_vkb2_area_bottom_pane_cell

0xd52a,	// (0x00018675) popup_char_count_window

0xd930,	// (0x00018a7b) popup_char_count_window_g1

0xd939,	// (0x00018a84) popup_char_count_window_g2

0xd942,	// (0x00018a8d) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x0001af42) popup_char_count_window_g

0xd94b,	// (0x00018a96) popup_char_count_window_t1

0x56d7,	// (0x00010822) popup_fep_char_preview_window_ParamLimits

0x56d7,	// (0x00010822) popup_fep_char_preview_window

0xeb28,	// (0x00019c73) vkb2_top_candi_pane_ParamLimits

0xeb28,	// (0x00019c73) vkb2_top_candi_pane

0x377c,	// (0x0000e8c7) cell_vkb2_top_candi_pane_ParamLimits

0x377c,	// (0x0000e8c7) cell_vkb2_top_candi_pane

0x5c3f,	// (0x00010d8a) bg_popup_fep_char_preview_window_ParamLimits

0x5c3f,	// (0x00010d8a) bg_popup_fep_char_preview_window

0x5c4d,	// (0x00010d98) popup_fep_char_preview_window_t1_ParamLimits

0x5c4d,	// (0x00010d98) popup_fep_char_preview_window_t1

0xd9c7,	// (0x00018b12) bg_popup_fep_char_preview_window_g1

0xd9cf,	// (0x00018b1a) bg_popup_fep_char_preview_window_g2

0xd9d7,	// (0x00018b22) bg_popup_fep_char_preview_window_g3

0xd9df,	// (0x00018b2a) bg_popup_fep_char_preview_window_g4

0xd9e7,	// (0x00018b32) bg_popup_fep_char_preview_window_g5

0x5c87,	// (0x00010dd2) bg_popup_fep_char_preview_window_g6

0xd9ef,	// (0x00018b3a) bg_popup_fep_char_preview_window_g7

0xd9f7,	// (0x00018b42) bg_popup_fep_char_preview_window_g8

0xd9ff,	// (0x00018b4a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x0001af49) bg_popup_fep_char_preview_window_g

0x53dc,	// (0x00010527) cell_vkb2_top_candi_pane_g1_ParamLimits

0x53dc,	// (0x00010527) cell_vkb2_top_candi_pane_g1

0x53ea,	// (0x00010535) cell_vkb2_top_candi_pane_g2_ParamLimits

0x53ea,	// (0x00010535) cell_vkb2_top_candi_pane_g2

0xd9a6,	// (0x00018af1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd9a6,	// (0x00018af1) cell_vkb2_top_candi_pane_g3

0x5c8f,	// (0x00010dda) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5c8f,	// (0x00010dda) cell_vkb2_top_candi_pane_g4

0xbba9,	// (0x00016cf4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbba9,	// (0x00016cf4) cell_vkb2_top_candi_pane_g5

0x5cb0,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5cb0,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x0001af5c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x0001af5c) cell_vkb2_top_candi_pane_g

0x5cbe,	// (0x00010e09) cell_vkb2_top_candi_pane_t1

0x4fe5,	// (0x00010130) aid_size_touch_slider_mark_ParamLimits

0x4fe5,	// (0x00010130) aid_size_touch_slider_mark

0x3515,	// (0x0000e660) grid_graphic2_catg_pane_ParamLimits

0x3515,	// (0x0000e660) grid_graphic2_catg_pane

0x35a9,	// (0x0000e6f4) popup_grid_graphic2_window_t1_ParamLimits

0x35a9,	// (0x0000e6f4) popup_grid_graphic2_window_t1

0x35bf,	// (0x0000e70a) popup_grid_graphic2_window_t2_ParamLimits

0x35bf,	// (0x0000e70a) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x0001af1c) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x0001af1c) popup_grid_graphic2_window_t

0x6d3e,	// (0x00011e89) bg_button_pane_cp05_ParamLimits

0x370d,	// (0x0000e858) cell_graphic2_control_pane_g1_ParamLimits

0x37e2,	// (0x0000e92d) cell_graphic2_catg_pane_ParamLimits

0x37e2,	// (0x0000e92d) cell_graphic2_catg_pane

0x5e63,	// (0x00010fae) bg_button_pane_cp12

0x37f4,	// (0x0000e93f) cell_graphic2_catg_pane_g1

0xcf87,	// (0x000180d2) cell_tb_ext_pane_t1_ParamLimits

0x5a79,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5a79,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane

0x5a91,	// (0x00010bdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x5a91,	// (0x00010bdc) vkb2_top_cell_right_wide_pane

0x5177,	// (0x000102c2) bg_vkb2_func_pane_ParamLimits

0x5177,	// (0x000102c2) bg_vkb2_func_pane

0x5b02,	// (0x00010c4d) vkb2_top_cell_left_pane_g1_ParamLimits

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp03

0x5b60,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x89f2,	// (0x00013b3d) bg_vkb2_func_pane_g1

0x89fa,	// (0x00013b45) bg_vkb2_func_pane_g2

0x8a0a,	// (0x00013b55) bg_vkb2_func_pane_g3

0x8a02,	// (0x00013b4d) bg_vkb2_func_pane_g4

0x8a12,	// (0x00013b5d) bg_vkb2_func_pane_g5

0x8a1a,	// (0x00013b65) bg_vkb2_func_pane_g6

0x8a22,	// (0x00013b6d) bg_vkb2_func_pane_g7

0x8a2a,	// (0x00013b75) bg_vkb2_func_pane_g8

0x89ea,	// (0x00013b35) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x0001af69) bg_vkb2_func_pane_g

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp01

0x5b02,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5b02,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5177,	// (0x000102c2) bg_vkb2_fuc_pane_cp02

0x5b60,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5b60,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1

0x29e1,	// (0x0000db2c) aid_touch_area_decrease_ParamLimits

0x29e1,	// (0x0000db2c) aid_touch_area_decrease

0x2a15,	// (0x0000db60) aid_touch_area_increase_ParamLimits

0x2a15,	// (0x0000db60) aid_touch_area_increase

0x2a3d,	// (0x0000db88) aid_touch_area_mute_ParamLimits

0x2a3d,	// (0x0000db88) aid_touch_area_mute

0x2a6d,	// (0x0000dbb8) aid_touch_area_slider_ParamLimits

0x2a6d,	// (0x0000dbb8) aid_touch_area_slider

0x2aad,	// (0x0000dbf8) popup_slider_window_g4_ParamLimits

0x2aad,	// (0x0000dbf8) popup_slider_window_g4

0x2ad5,	// (0x0000dc20) popup_slider_window_g5_ParamLimits

0x2ad5,	// (0x0000dc20) popup_slider_window_g5

0x2b09,	// (0x0000dc54) popup_slider_window_g6_ParamLimits

0x2b09,	// (0x0000dc54) popup_slider_window_g6

0xcd65,	// (0x00017eb0) popup_slider_window_t2_ParamLimits

0xcd65,	// (0x00017eb0) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x0001ae6a) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x0001ae6a) popup_slider_window_t

0x2b25,	// (0x0000dc70) slider_pane_ParamLimits

0x2b25,	// (0x0000dc70) slider_pane

0xda22,	// (0x00018b6d) slider_pane_g1_ParamLimits

0xda22,	// (0x00018b6d) slider_pane_g1

0xda36,	// (0x00018b81) slider_pane_g2_ParamLimits

0xda36,	// (0x00018b81) slider_pane_g2

0xda4c,	// (0x00018b97) slider_pane_g3_ParamLimits

0xda4c,	// (0x00018b97) slider_pane_g3

0x0003,

0xfe31,	// (0x0001af7c) slider_pane_g_ParamLimits

0xfe31,	// (0x0001af7c) slider_pane_g

0x146a,	// (0x0000c5b5) popup_tb_float_extension_window_ParamLimits

0x146a,	// (0x0000c5b5) popup_tb_float_extension_window

0xda78,	// (0x00018bc3) aid_size_cell_tb_float_ext

0x5e63,	// (0x00010fae) bg_popup_sub_window_cp28

0xda84,	// (0x00018bcf) grid_tb_float_ext_pane

0xda8e,	// (0x00018bd9) cell_tb_float_ext_pane_ParamLimits

0xda8e,	// (0x00018bd9) cell_tb_float_ext_pane

0xdaa8,	// (0x00018bf3) cell_tb_float_ext_pane_g1

0xdab1,	// (0x00018bfc) grid_highlight_pane_cp12

0xe911,	// (0x00019a5c) cell_last_hwr_side_pane_ParamLimits

0xe911,	// (0x00019a5c) cell_last_hwr_side_pane

0xb363,	// (0x000164ae) cell_last_hwr_side_pane_g1

0xdaba,	// (0x00018c05) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x0001af85) cell_last_hwr_side_pane_g

0xec8f,	// (0x00019dda) vkb2_area_bottom_space_btn_pane_ParamLimits

0xec8f,	// (0x00019dda) vkb2_area_bottom_space_btn_pane

0x53dc,	// (0x00010527) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd5df,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5cbe,	// (0x00010e09) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5cdd,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5cdd,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1

0x5d17,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5d17,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2

0x5d4d,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5d4d,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x0001af8a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x0001af8a) vkb2_area_bottom_space_btn_pane_g

0x523a,	// (0x00010385) cel_fep_hwr_func_pane_ParamLimits

0x523a,	// (0x00010385) cel_fep_hwr_func_pane

0xe8e6,	// (0x00019a31) cell_hwr_side_button_pane_ParamLimits

0xe8e6,	// (0x00019a31) cell_hwr_side_button_pane

0xcfbb,	// (0x00018106) aid_area_touch_clock_ParamLimits

0x61fa,	// (0x00011345) bg_uniindi_top_pane_ParamLimits

0xcfcd,	// (0x00018118) uniindi_top_pane_g1_ParamLimits

0xcfe3,	// (0x0001812e) uniindi_top_pane_g2_ParamLimits

0xcfef,	// (0x0001813a) uniindi_top_pane_g3_ParamLimits

0xd000,	// (0x0001814b) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x0001aea2) uniindi_top_pane_g_ParamLimits

0xd00d,	// (0x00018158) uniindi_top_pane_t1_ParamLimits

0x61fa,	// (0x00011345) bg_vkb2_func_pane_cp01_ParamLimits

0x61fa,	// (0x00011345) bg_vkb2_func_pane_cp01

0xed9a,	// (0x00019ee5) cel_fep_hwr_func_pane_g1_ParamLimits

0xed9a,	// (0x00019ee5) cel_fep_hwr_func_pane_g1

0x61fa,	// (0x00011345) bg_vkb2_func_pane_cp02_ParamLimits

0x61fa,	// (0x00011345) bg_vkb2_func_pane_cp02

0xed9a,	// (0x00019ee5) cell_hwr_side_button_pane_g1_ParamLimits

0xed9a,	// (0x00019ee5) cell_hwr_side_button_pane_g1

0x8831,	// (0x0001397c) status_pane_g4_ParamLimits

0x8831,	// (0x0001397c) status_pane_g4

0x884b,	// (0x00013996) status_pane_t1

0xb09c,	// (0x000161e7) form2_midp_gauge_slider_cont_pane

0xb0a4,	// (0x000161ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0x21e3,	// (0x0000d32e) form2_midp_gauge_slider_pane_t2_ParamLimits

0x21f5,	// (0x0000d340) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0001ac62) form2_midp_gauge_slider_pane_t_ParamLimits

0xb0da,	// (0x00016225) form2_midp_slider_pane_ParamLimits

0x5697,	// (0x000107e2) aid_size_cell_func_vkb2_ParamLimits

0x5697,	// (0x000107e2) aid_size_cell_func_vkb2

0xda64,	// (0x00018baf) slider_pane_g4_ParamLimits

0xda64,	// (0x00018baf) slider_pane_g4

0xecf0,	// (0x00019e3b) form2_midp_gauge_slider_pane_t2_cp01

0xecfe,	// (0x00019e49) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xecfe,	// (0x00019e49) form2_midp_gauge_slider_pane_t3_cp01

0x5dc2,	// (0x00010f0d) form2_midp_slider_pane_cp01

0x5e63,	// (0x00010fae) navi_smil_pane

0xedca,	// (0x00019f15) navi_smil_pane_g1

0xedd2,	// (0x00019f1d) navi_smil_pane_t1

0xeda8,	// (0x00019ef3) form2_midp_slider_pane_g1

0xedb1,	// (0x00019efc) form2_midp_slider_pane_g2

0xedb9,	// (0x00019f04) form2_midp_slider_pane_g3

0xeda8,	// (0x00019ef3) form2_midp_slider_pane_g4

0x3828,	// (0x0000e973) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x0001af93) form2_midp_slider_pane_g

0x5d87,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5d87,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4

0x1646,	// (0x0000c791) lc0_navi_pane_ParamLimits

0x1646,	// (0x0000c791) lc0_navi_pane

0x16b0,	// (0x0000c7fb) lc0_stat_indi_pane_ParamLimits

0x16b0,	// (0x0000c7fb) lc0_stat_indi_pane

0x16c5,	// (0x0000c810) ls0_title_pane_ParamLimits

0x16c5,	// (0x0000c810) ls0_title_pane

0x6d3e,	// (0x00011e89) bg_popup_sub_pane_cp14_ParamLimits

0xcfa2,	// (0x000180ed) list_uniindi_pane_ParamLimits

0xcfae,	// (0x000180f9) uniindi_top_pane_ParamLimits

0xd04a,	// (0x00018195) list_single_uniindi_pane_g1_ParamLimits

0xd05d,	// (0x000181a8) list_single_uniindi_pane_t1_ParamLimits

0xed1b,	// (0x00019e66) lc0_stat_clock_pane_ParamLimits

0xed1b,	// (0x00019e66) lc0_stat_clock_pane

0x384b,	// (0x0000e996) lc0_stat_indi_pane_g1_ParamLimits

0x384b,	// (0x0000e996) lc0_stat_indi_pane_g1

0x383e,	// (0x0000e989) lc0_stat_indi_pane_g2_ParamLimits

0x383e,	// (0x0000e989) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x0001af9e) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x0001af9e) lc0_stat_indi_pane_g

0xed28,	// (0x00019e73) lc0_uni_indicator_pane_ParamLimits

0xed28,	// (0x00019e73) lc0_uni_indicator_pane

0xede0,	// (0x00019f2b) ls0_title_pane_g1_ParamLimits

0xede0,	// (0x00019f2b) ls0_title_pane_g1

0x3865,	// (0x0000e9b0) ls0_title_pane_t1_ParamLimits

0x3865,	// (0x0000e9b0) ls0_title_pane_t1

0xed35,	// (0x00019e80) lc0_uni_indicator_pane_g1_ParamLimits

0xed35,	// (0x00019e80) lc0_uni_indicator_pane_g1

0xedf4,	// (0x00019f3f) lc0_stat_clock_pane_t1

0x5e63,	// (0x00010fae) main_ai5_pane

0xee02,	// (0x00019f4d) ai5_sk_pane_ParamLimits

0xee02,	// (0x00019f4d) ai5_sk_pane

0x38ba,	// (0x0000ea05) cell_ai5_widget_pane_ParamLimits

0x38ba,	// (0x0000ea05) cell_ai5_widget_pane

0xee0f,	// (0x00019f5a) aid_size_cell_widget_grid

0xee23,	// (0x00019f6e) bg_ai5_widget_pane_ParamLimits

0xee23,	// (0x00019f6e) bg_ai5_widget_pane

0x3943,	// (0x0000ea8e) cell_ai5_widget_pane_g2

0x3953,	// (0x0000ea9e) cell_ai5_widget_pane_g3

0x3967,	// (0x0000eab2) cell_ai5_widget_pane_g4

0x3973,	// (0x0000eabe) cell_ai5_widget_pane_g5

0x397f,	// (0x0000eaca) cell_ai5_widget_pane_g6

0x398b,	// (0x0000ead6) cell_ai5_widget_pane_g7

0x39d3,	// (0x0000eb1e) cell_ai5_widget_pane_t1_ParamLimits

0x39d3,	// (0x0000eb1e) cell_ai5_widget_pane_t1

0x39f0,	// (0x0000eb3b) cell_ai5_widget_pane_t2_ParamLimits

0x39f0,	// (0x0000eb3b) cell_ai5_widget_pane_t2

0x3a08,	// (0x0000eb53) cell_ai5_widget_pane_t3_ParamLimits

0x3a08,	// (0x0000eb53) cell_ai5_widget_pane_t3

0x3a20,	// (0x0000eb6b) cell_ai5_widget_pane_t4_ParamLimits

0x3a20,	// (0x0000eb6b) cell_ai5_widget_pane_t4

0x3a3a,	// (0x0000eb85) cell_ai5_widget_pane_t5_ParamLimits

0x3a3a,	// (0x0000eb85) cell_ai5_widget_pane_t5

0xee2f,	// (0x00019f7a) cell_ai5_widget_pane_t6_ParamLimits

0xee2f,	// (0x00019f7a) cell_ai5_widget_pane_t6

0xee41,	// (0x00019f8c) cell_ai5_widget_pane_t7_ParamLimits

0xee41,	// (0x00019f8c) cell_ai5_widget_pane_t7

0x3a59,	// (0x0000eba4) cell_ai5_widget_pane_t8_ParamLimits

0x3a59,	// (0x0000eba4) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x0001afb8) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x0001afb8) cell_ai5_widget_pane_t

0x3aa1,	// (0x0000ebec) grid_ai5_widget_pane

0x6d3e,	// (0x00011e89) highlight_cell_ai5_widget_pane_ParamLimits

0x6d3e,	// (0x00011e89) highlight_cell_ai5_widget_pane

0x3ab9,	// (0x0000ec04) ai5_sk_left_pane

0x3ac3,	// (0x0000ec0e) ai5_sk_middle_pane

0x3acd,	// (0x0000ec18) ai5_sk_right_pane

0xee5a,	// (0x00019fa5) bg_ai5_widget_pane_g1_ParamLimits

0xee5a,	// (0x00019fa5) bg_ai5_widget_pane_g1

0xee66,	// (0x00019fb1) bg_ai5_widget_pane_g2_ParamLimits

0xee66,	// (0x00019fb1) bg_ai5_widget_pane_g2

0xee72,	// (0x00019fbd) bg_ai5_widget_pane_g3_ParamLimits

0xee72,	// (0x00019fbd) bg_ai5_widget_pane_g3

0xee7e,	// (0x00019fc9) bg_ai5_widget_pane_g4_ParamLimits

0xee7e,	// (0x00019fc9) bg_ai5_widget_pane_g4

0xee8a,	// (0x00019fd5) bg_ai5_widget_pane_g5_ParamLimits

0xee8a,	// (0x00019fd5) bg_ai5_widget_pane_g5

0xee96,	// (0x00019fe1) bg_ai5_widget_pane_g6_ParamLimits

0xee96,	// (0x00019fe1) bg_ai5_widget_pane_g6

0xeea2,	// (0x00019fed) bg_ai5_widget_pane_g7_ParamLimits

0xeea2,	// (0x00019fed) bg_ai5_widget_pane_g7

0xeeae,	// (0x00019ff9) bg_ai5_widget_pane_g8_ParamLimits

0xeeae,	// (0x00019ff9) bg_ai5_widget_pane_g8

0xeeba,	// (0x0001a005) bg_ai5_widget_pane_g9_ParamLimits

0xeeba,	// (0x0001a005) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x0001afcd) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x0001afcd) bg_ai5_widget_pane_g

0xeeed,	// (0x0001a038) cell_shortcut_ai5_widget_pane_ParamLimits

0xeeed,	// (0x0001a038) cell_shortcut_ai5_widget_pane

0x603a,	// (0x00011185) bg_cell_shortcut_ai5_widget_pane

0xeefe,	// (0x0001a049) cell_grid_ai5_widget_pane_g1

0xef07,	// (0x0001a052) highlight_cell_shortcut_ai5_widget_pane

0x89f2,	// (0x00013b3d) ai5_sk_left_pane_g1

0xef0f,	// (0x0001a05a) ai5_sk_left_pane_g2

0xef17,	// (0x0001a062) ai5_sk_left_pane_g3

0xef1f,	// (0x0001a06a) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x0001afe0) ai5_sk_left_pane_g

0xef27,	// (0x0001a072) ai5_sk_left_pane_t1

0x89fa,	// (0x00013b45) ai5_sk_right_pane_g1

0xef35,	// (0x0001a080) ai5_sk_right_pane_g2

0xef3d,	// (0x0001a088) ai5_sk_right_pane_g3

0xef45,	// (0x0001a090) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x0001afe9) ai5_sk_right_pane_g

0xef4d,	// (0x0001a098) ai5_sk_right_pane_t1

0x89fa,	// (0x00013b45) ai5_sk_middle_pane_g1

0x89f2,	// (0x00013b3d) ai5_sk_middle_pane_g2

0x8a12,	// (0x00013b5d) ai5_sk_middle_pane_g3

0xef3d,	// (0x0001a088) ai5_sk_middle_pane_g4

0xef17,	// (0x0001a062) ai5_sk_middle_pane_g5

0xef5b,	// (0x0001a0a6) ai5_sk_middle_pane_g6

0x3ad7,	// (0x0000ec22) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x0001aff2) ai5_sk_middle_pane_g

0x1532,	// (0x0000c67d) aid_touch_area_size_lc0_ParamLimits

0x1532,	// (0x0000c67d) aid_touch_area_size_lc0

0x540b,	// (0x00010556) cell_hwr_candidate_pane_t1_ParamLimits

0x8513,	// (0x0001365e) aid_touch_navi_pane

0x17b7,	// (0x0000c902) status_dt_navi_pane_ParamLimits

0x17b7,	// (0x0000c902) status_dt_navi_pane

0x17cf,	// (0x0000c91a) status_dt_sta_pane_ParamLimits

0x17cf,	// (0x0000c91a) status_dt_sta_pane

0x3adf,	// (0x0000ec2a) dt_sta_controll_pane

0x3aec,	// (0x0000ec37) dt_sta_indi_pane

0x3af9,	// (0x0000ec44) dt_sta_title_pane

0x61fa,	// (0x00011345) bg_dt_sta_indi_pane_ParamLimits

0x61fa,	// (0x00011345) bg_dt_sta_indi_pane

0xef63,	// (0x0001a0ae) dt_sta_battery_pane

0x3b0b,	// (0x0000ec56) dt_sta_indi_pane_g1

0x3b14,	// (0x0000ec5f) dt_sta_indi_pane_g2

0x3b1d,	// (0x0000ec68) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x0001b001) dt_sta_indi_pane_g

0x3b26,	// (0x0000ec71) dt_sta_signal_pane

0x6d3e,	// (0x00011e89) bg_dt_sta_title_pane_ParamLimits

0x6d3e,	// (0x00011e89) bg_dt_sta_title_pane

0x98c2,	// (0x00014a0d) dt_sta_title_pane_g1

0x3b2f,	// (0x0000ec7a) dt_sta_title_pane_t1_ParamLimits

0x3b2f,	// (0x0000ec7a) dt_sta_title_pane_t1

0x5e63,	// (0x00010fae) bg_dt_sta_control_pane

0x3b44,	// (0x0000ec8f) dt_sta_controll_pane_g1

0x3b4d,	// (0x0000ec98) bg_dt_sta_title_pane_g1

0x3b56,	// (0x0000eca1) bg_dt_sta_title_pane_g2

0x3b5f,	// (0x0000ecaa) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x0001b008) bg_dt_sta_title_pane_g

0xb363,	// (0x000164ae) bg_dt_sta_indi_pane_g1

0xef6b,	// (0x0001a0b6) dt_sta_signal_pane_g1

0xef73,	// (0x0001a0be) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x0001b00f) dt_sta_signal_pane_g

0xef7b,	// (0x0001a0c6) dt_sta_battery_pane_g1

0xef84,	// (0x0001a0cf) dt_sta_battery_pane_t1

0xb363,	// (0x000164ae) bg_dt_sta_control_pane_g1

0x7603,	// (0x0001274e) fep_china_uni_eep_pane

0x760b,	// (0x00012756) fep_china_uni_entry_pane_ParamLimits

0x761b,	// (0x00012766) popup_fep_china_uni_window_g1_ParamLimits

0x762b,	// (0x00012776) popup_fep_china_uni_window_g2_ParamLimits

0x762b,	// (0x00012776) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a8a3) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a8a3) popup_fep_china_uni_window_g

0xef93,	// (0x0001a0de) fep_china_uni_eep_pane_g1

0xef9b,	// (0x0001a0e6) fep_china_uni_eep_pane_t1

0xedc1,	// (0x00019f0c) aid_touch_area_size_smil_player

0x865f,	// (0x000137aa) lc0_clock_pane

0x883f,	// (0x0001398a) status_pane_g5_ParamLimits

0x883f,	// (0x0001398a) status_pane_g5

0x1010,	// (0x0000c15b) popup_keymap_window

0x87fd,	// (0x00013948) status_icon_pane

0x3953,	// (0x0000ea9e) cell_ai5_widget_pane_g3_ParamLimits

0x3967,	// (0x0000eab2) cell_ai5_widget_pane_g4_ParamLimits

0x3973,	// (0x0000eabe) cell_ai5_widget_pane_g5_ParamLimits

0x3997,	// (0x0000eae2) cell_ai5_widget_pane_g8_ParamLimits

0x3997,	// (0x0000eae2) cell_ai5_widget_pane_g8

0x39ab,	// (0x0000eaf6) cell_ai5_widget_pane_g9_ParamLimits

0x39ab,	// (0x0000eaf6) cell_ai5_widget_pane_g9

0x39bf,	// (0x0000eb0a) cell_ai5_widget_pane_g10_ParamLimits

0x39bf,	// (0x0000eb0a) cell_ai5_widget_pane_g10

0xefaa,	// (0x0001a0f5) status_icon_pane_g1

0x5e63,	// (0x00010fae) bg_popup_sub_pane_cp13

0xefb2,	// (0x0001a0fd) popup_keymap_window_t1

0x0d3a,	// (0x0000be85) control_pane_g6_ParamLimits

0x0d3a,	// (0x0000be85) control_pane_g6

0x0d2d,	// (0x0000be78) control_pane_g7_ParamLimits

0x0d2d,	// (0x0000be78) control_pane_g7

0x0d20,	// (0x0000be6b) control_pane_g8_ParamLimits

0x0d20,	// (0x0000be6b) control_pane_g8

0x3adf,	// (0x0000ec2a) dt_sta_controll_pane_ParamLimits

0x3aec,	// (0x0000ec37) dt_sta_indi_pane_ParamLimits

0x3af9,	// (0x0000ec44) dt_sta_title_pane_ParamLimits

0x6715,	// (0x00011860) aid_size_touch_scroll_bar_cale

0x449c,	// (0x0000f5e7) popup_discreet_window_ParamLimits

0x449c,	// (0x0000f5e7) popup_discreet_window

0xe56d,	// (0x000196b8) popup_sk_window

0x90ee,	// (0x00014239) bg_popup_sub_pane_cp28_ParamLimits

0x90ee,	// (0x00014239) bg_popup_sub_pane_cp28

0xefc0,	// (0x0001a10b) popup_discreet_window_g1_ParamLimits

0xefc0,	// (0x0001a10b) popup_discreet_window_g1

0xefe0,	// (0x0001a12b) popup_discreet_window_t1_ParamLimits

0xefe0,	// (0x0001a12b) popup_discreet_window_t1

0xeffe,	// (0x0001a149) popup_discreet_window_t2_ParamLimits

0xeffe,	// (0x0001a149) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x0001b014) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x0001b014) popup_discreet_window_t

0x5df9,	// (0x00010f44) popup_sk_window_g1

0x5e03,	// (0x00010f4e) popup_sk_window_g2

0x0001,

0xfed0,	// (0x0001b01b) popup_sk_window_g

0xf050,	// (0x0001a19b) popup_sk_window_t1

0xf05e,	// (0x0001a1a9) popup_sk_window_t1_copy1

0x3943,	// (0x0000ea8e) cell_ai5_widget_pane_g2_ParamLimits

0x3a6b,	// (0x0000ebb6) cell_ai5_widget_pane_t9_ParamLimits

0x3a6b,	// (0x0000ebb6) cell_ai5_widget_pane_t9

0x5e63,	// (0x00010fae) main_fep_fshwr2_pane

0x3b68,	// (0x0000ecb3) aid_fshwr2_btn_pane

0x3b70,	// (0x0000ecbb) aid_fshwr2_syb_pane

0x3b78,	// (0x0000ecc3) aid_fshwr2_txt_pane

0x3b80,	// (0x0000eccb) fshwr2_func_candi_pane

0x3b8a,	// (0x0000ecd5) fshwr2_hwr_syb_pane

0x3b98,	// (0x0000ece3) fshwr2_icf_pane

0x5e63,	// (0x00010fae) fshwr2_icf_bg_pane

0x3ba2,	// (0x0000eced) fshwr2_icf_pane_t1_ParamLimits

0x3ba2,	// (0x0000eced) fshwr2_icf_pane_t1

0xb363,	// (0x000164ae) fshwr2_func_candi_pane_g1

0xf080,	// (0x0001a1cb) fshwr2_func_candi_row_pane_ParamLimits

0xf080,	// (0x0001a1cb) fshwr2_func_candi_row_pane

0x3bba,	// (0x0000ed05) cell_fshwr2_syb_pane_ParamLimits

0x3bba,	// (0x0000ed05) cell_fshwr2_syb_pane

0xb5f5,	// (0x00016740) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb5f5,	// (0x00016740) fshwr2_hwr_syb_pane_g1

0x5e63,	// (0x00010fae) bg_popup_call_pane_cp01

0xf091,	// (0x0001a1dc) fshwr2_func_candi_cell_pane_ParamLimits

0xf091,	// (0x0001a1dc) fshwr2_func_candi_cell_pane

0xf0c2,	// (0x0001a20d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf0c2,	// (0x0001a20d) fshwr2_func_candi_cell_bg_pane

0xf0dc,	// (0x0001a227) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0dc,	// (0x0001a227) fshwr2_func_candi_cell_pane_g1

0xf104,	// (0x0001a24f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf104,	// (0x0001a24f) fshwr2_func_candi_cell_pane_t1

0x5e63,	// (0x00010fae) bg_button_pane_cp08

0x7b88,	// (0x00012cd3) cell_fshwr2_syb_bg_pane

0x3bd4,	// (0x0000ed1f) cell_fshwr2_syb_bg_pane_g1

0x3bdc,	// (0x0000ed27) cell_fshwr2_syb_bg_pane_t1

0x6d3e,	// (0x00011e89) main_tmo_pane

0x1ca5,	// (0x0000cdf0) uni_indicator_pane_g1_ParamLimits

0x1cba,	// (0x0000ce05) uni_indicator_pane_g2_ParamLimits

0x1ccf,	// (0x0000ce1a) uni_indicator_pane_g3_ParamLimits

0x9c44,	// (0x00014d8f) uni_indicator_pane_g4_ParamLimits

0x9c44,	// (0x00014d8f) uni_indicator_pane_g4

0x9c58,	// (0x00014da3) uni_indicator_pane_g5_ParamLimits

0x9c58,	// (0x00014da3) uni_indicator_pane_g5

0x9c6c,	// (0x00014db7) uni_indicator_pane_g6_ParamLimits

0x9c6c,	// (0x00014db7) uni_indicator_pane_g6

0xf950,	// (0x0001aa9b) uni_indicator_pane_g_ParamLimits

0x29bd,	// (0x0000db08) popup_tmo_note_window_ParamLimits

0x29bd,	// (0x0000db08) popup_tmo_note_window

0x5e63,	// (0x00010fae) fshwr2_bg_pane

0xf0f5,	// (0x0001a240) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf0f5,	// (0x0001a240) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x0001b020) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x0001b020) fshwr2_func_candi_cell_pane_g

0xb363,	// (0x000164ae) bg_popup_window_pane_cp01

0xf117,	// (0x0001a262) bg_popup_window_pane_g1_cp01

0xf120,	// (0x0001a26b) bg_popup_window_pane_cp22_ParamLimits

0xf120,	// (0x0001a26b) bg_popup_window_pane_cp22

0xf12e,	// (0x0001a279) listscroll_tmo_link_pane_ParamLimits

0xf12e,	// (0x0001a279) listscroll_tmo_link_pane

0xf16e,	// (0x0001a2b9) popup_tmo_note_window_g1_ParamLimits

0xf16e,	// (0x0001a2b9) popup_tmo_note_window_g1

0xf17b,	// (0x0001a2c6) tmo_note_info_pane_ParamLimits

0xf17b,	// (0x0001a2c6) tmo_note_info_pane

0x3beb,	// (0x0000ed36) list_tmo_note_info_pane_g1_ParamLimits

0x3beb,	// (0x0000ed36) list_tmo_note_info_pane_g1

0xf195,	// (0x0001a2e0) list_tmo_note_info_pane_g2_ParamLimits

0xf195,	// (0x0001a2e0) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x0001b025) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x0001b025) list_tmo_note_info_pane_g

0xf1b1,	// (0x0001a2fc) list_tmo_note_info_text_pane_ParamLimits

0xf1b1,	// (0x0001a2fc) list_tmo_note_info_text_pane

0xf1f3,	// (0x0001a33e) list_tmo_link_pane

0xf200,	// (0x0001a34b) scroll_pane_cp20

0xf20d,	// (0x0001a358) list_single_tmo_link_pane_ParamLimits

0xf20d,	// (0x0001a358) list_single_tmo_link_pane

0xf21d,	// (0x0001a368) list_single_tmo_link_pane_t1

0xf22b,	// (0x0001a376) list_tmo_note_info_text_pane_t1_ParamLimits

0xf22b,	// (0x0001a376) list_tmo_note_info_text_pane_t1

0x0947,	// (0x0000ba92) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0947,	// (0x0000ba92) aid_size_touch_scroll_bar_cp01

0x0866,	// (0x0000b9b1) aid_size_touch_slider_marker

0xe55d,	// (0x000196a8) popup_settings_window_ParamLimits

0xe55d,	// (0x000196a8) popup_settings_window

0x7f3a,	// (0x00013085) popup_candi_list_indi_window

0x8513,	// (0x0001365e) aid_touch_navi_pane_ParamLimits

0x55d1,	// (0x0001071c) rs_clock_indi_pane

0x55da,	// (0x00010725) sctrl_sk_bottom_pane_ParamLimits

0x55eb,	// (0x00010736) sctrl_sk_top_pane_ParamLimits

0x56f1,	// (0x0001083c) popup_fep_tooltip_window

0xee0f,	// (0x00019f5a) aid_size_cell_widget_grid_ParamLimits

0x3937,	// (0x0000ea82) cell_ai5_widget_pane_g1_ParamLimits

0x3937,	// (0x0000ea82) cell_ai5_widget_pane_g1

0x397f,	// (0x0000eaca) cell_ai5_widget_pane_g6_ParamLimits

0x398b,	// (0x0000ead6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x0001afa3) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0001afa3) cell_ai5_widget_pane_g

0x3a8f,	// (0x0000ebda) cell_ai5_widget_pane_t10_ParamLimits

0x3a8f,	// (0x0000ebda) cell_ai5_widget_pane_t10

0x3aa1,	// (0x0000ebec) grid_ai5_widget_pane_ParamLimits

0xeec6,	// (0x0001a011) cell_contacts_ai5_widget_pane_ParamLimits

0xeec6,	// (0x0001a011) cell_contacts_ai5_widget_pane

0xf013,	// (0x0001a15e) popup_discreet_window_t3_ParamLimits

0xf013,	// (0x0001a15e) popup_discreet_window_t3

0xf06c,	// (0x0001a1b7) popup_fshwr2_char_preview_window_ParamLimits

0xf06c,	// (0x0001a1b7) popup_fshwr2_char_preview_window

0x3c02,	// (0x0000ed4d) tmo_note_info_pane_t1

0x3c17,	// (0x0000ed62) tmo_note_info_pane_t2

0x3c2e,	// (0x0000ed79) tmo_note_info_pane_t3

0xf1cf,	// (0x0001a31a) tmo_note_info_pane_t4

0xf1e1,	// (0x0001a32c) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x0001b02a) tmo_note_info_pane_t

0xf1f3,	// (0x0001a33e) list_tmo_link_pane_ParamLimits

0xf200,	// (0x0001a34b) scroll_pane_cp20_ParamLimits

0x5e63,	// (0x00010fae) bg_popup_fep_char_preview_window_cp01

0xf244,	// (0x0001a38f) popup_fshwr2_char_preview_window_t1

0xf252,	// (0x0001a39d) popup_candi_list_indi_window_g1

0xf25b,	// (0x0001a3a6) bg_cell_contacts_ai5_widget_pane

0xf267,	// (0x0001a3b2) cell_contacts_ai5_widget_pane_g1

0xf27b,	// (0x0001a3c6) cell_contacts_ai5_widget_pane_g2

0xf28a,	// (0x0001a3d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x0001b035) cell_contacts_ai5_widget_pane_g

0xf29d,	// (0x0001a3e8) cell_contacts_ai5_widget_pane_t1

0x6d3e,	// (0x00011e89) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3ca8,	// (0x0000edf3) settings_container_pane

0x7b88,	// (0x00012cd3) listscroll_set_pane_copy1

0xa874,	// (0x000159bf) scroll_pane_cp121_copy1

0xf2b2,	// (0x0001a3fd) set_content_pane_copy1

0x3cb4,	// (0x0000edff) aid_height_set_list_copy1_ParamLimits

0x3cb4,	// (0x0000edff) aid_height_set_list_copy1

0x9e8c,	// (0x00014fd7) aid_size_parent_copy1_ParamLimits

0x9e8c,	// (0x00014fd7) aid_size_parent_copy1

0x3cc0,	// (0x0000ee0b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3cc0,	// (0x0000ee0b) button_value_adjust_pane_cp6_copy1

0x7f12,	// (0x0001305d) list_highlight_pane_cp2_copy1_ParamLimits

0x7f12,	// (0x0001305d) list_highlight_pane_cp2_copy1

0x3cd4,	// (0x0000ee1f) list_set_pane_copy1_ParamLimits

0x3cd4,	// (0x0000ee1f) list_set_pane_copy1

0x3c43,	// (0x0000ed8e) main_pane_set_t1_copy1_ParamLimits

0x3c43,	// (0x0000ed8e) main_pane_set_t1_copy1

0x3c7d,	// (0x0000edc8) main_pane_set_t2_copy1_ParamLimits

0x3c7d,	// (0x0000edc8) main_pane_set_t2_copy1

0x3d81,	// (0x0000eecc) main_pane_set_t3_copy1

0x3d8f,	// (0x0000eeda) main_pane_set_t4_copy1

0x3c9c,	// (0x0000ede7) set_content_pane_g1_copy1_ParamLimits

0x3c9c,	// (0x0000ede7) set_content_pane_g1_copy1

0x3d9d,	// (0x0000eee8) setting_code_pane_copy1

0xf2ba,	// (0x0001a405) setting_slider_graphic_pane_copy1

0xf2ba,	// (0x0001a405) setting_slider_pane_copy1

0xf2c4,	// (0x0001a40f) setting_text_pane_copy1

0xf2ce,	// (0x0001a419) setting_volume_pane_copy1

0x3da7,	// (0x0000eef2) settings_code_pane_cp2_copy1

0x3daf,	// (0x0000eefa) settings_code_pane_cp_copy1_ParamLimits

0x3daf,	// (0x0000eefa) settings_code_pane_cp_copy1

0x3dc3,	// (0x0000ef0e) volume_set_pane_copy1

0x3dcb,	// (0x0000ef16) volume_set_pane_g10_copy1

0x3dd3,	// (0x0000ef1e) volume_set_pane_g1_copy1

0x3ddb,	// (0x0000ef26) volume_set_pane_g2_copy1

0x3de3,	// (0x0000ef2e) volume_set_pane_g3_copy1

0x3deb,	// (0x0000ef36) volume_set_pane_g4_copy1

0x3df3,	// (0x0000ef3e) volume_set_pane_g5_copy1

0x3dfb,	// (0x0000ef46) volume_set_pane_g6_copy1

0x3e03,	// (0x0000ef4e) volume_set_pane_g7_copy1

0x3e0b,	// (0x0000ef56) volume_set_pane_g8_copy1

0x3e13,	// (0x0000ef5e) volume_set_pane_g9_copy1

0x5f57,	// (0x000110a2) bg_set_opt_pane_cp_copy1_ParamLimits

0x5f57,	// (0x000110a2) bg_set_opt_pane_cp_copy1

0xf2d7,	// (0x0001a422) setting_slider_pane_t1_copy1_ParamLimits

0xf2d7,	// (0x0001a422) setting_slider_pane_t1_copy1

0x3e1b,	// (0x0000ef66) setting_slider_pane_t2_copy1_ParamLimits

0x3e1b,	// (0x0000ef66) setting_slider_pane_t2_copy1

0x3e35,	// (0x0000ef80) setting_slider_pane_t3_copy1_ParamLimits

0x3e35,	// (0x0000ef80) setting_slider_pane_t3_copy1

0x3e4d,	// (0x0000ef98) slider_set_pane_copy1_ParamLimits

0x3e4d,	// (0x0000ef98) slider_set_pane_copy1

0x6e76,	// (0x00011fc1) set_opt_bg_pane_g1_copy2

0x6e7e,	// (0x00011fc9) set_opt_bg_pane_g2_copy2

0xf2f5,	// (0x0001a440) set_opt_bg_pane_g3_copy2

0x6e8e,	// (0x00011fd9) set_opt_bg_pane_g4_copy2

0x6e96,	// (0x00011fe1) set_opt_bg_pane_g5_copy2

0x6e9e,	// (0x00011fe9) set_opt_bg_pane_g6_copy2

0x3e63,	// (0x0000efae) set_opt_bg_pane_g7_copy2

0xf2ff,	// (0x0001a44a) set_opt_bg_pane_g8_copy2

0xf309,	// (0x0001a454) set_opt_bg_pane_g9_copy2

0x5e0d,	// (0x00010f58) aid_size_touch_slider_mark_copy1_ParamLimits

0x5e0d,	// (0x00010f58) aid_size_touch_slider_mark_copy1

0xf313,	// (0x0001a45e) slider_set_pane_g1_copy1

0x5e21,	// (0x00010f6c) slider_set_pane_g2_copy1

0x5005,	// (0x00010150) slider_set_pane_g3_copy1_ParamLimits

0x5005,	// (0x00010150) slider_set_pane_g3_copy1

0x5019,	// (0x00010164) slider_set_pane_g4_copy1_ParamLimits

0x5019,	// (0x00010164) slider_set_pane_g4_copy1

0x5031,	// (0x0001017c) slider_set_pane_g5_copy1_ParamLimits

0x5031,	// (0x0001017c) slider_set_pane_g5_copy1

0x5005,	// (0x00010150) slider_set_pane_g6_copy1_ParamLimits

0x5005,	// (0x00010150) slider_set_pane_g6_copy1

0xed5c,	// (0x00019ea7) slider_set_pane_g7_copy1_ParamLimits

0xed5c,	// (0x00019ea7) slider_set_pane_g7_copy1

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp2_copy1

0xf31c,	// (0x0001a467) setting_slider_graphic_pane_g1_copy1

0x3e81,	// (0x0000efcc) setting_slider_graphic_pane_t1_copy1

0x3e91,	// (0x0000efdc) setting_slider_graphic_pane_t2_copy1

0x3ea1,	// (0x0000efec) slider_set_pane_cp_copy1

0xf32d,	// (0x0001a478) input_focus_pane_cp1_copy1

0xf336,	// (0x0001a481) list_set_text_pane_copy1

0xf33e,	// (0x0001a489) setting_text_pane_g1_copy1

0x5fb0,	// (0x000110fb) set_text_pane_t1_copy1

0xf32d,	// (0x0001a478) input_focus_pane_cp2_copy1

0xf33e,	// (0x0001a489) setting_code_pane_g1_copy1

0x3ea9,	// (0x0000eff4) setting_code_pane_t1_copy1

0x0bdb,	// (0x0000bd26) list_set_graphic_pane_copy1

0x5e77,	// (0x00010fc2) bg_set_opt_pane_cp4_copy1

0x0bed,	// (0x0000bd38) list_set_graphic_pane_g1_copy1_ParamLimits

0x0bed,	// (0x0000bd38) list_set_graphic_pane_g1_copy1

0x3eb7,	// (0x0000f002) list_set_graphic_pane_g2_copy1

0x0c05,	// (0x0000bd50) list_set_graphic_pane_t1_copy1_ParamLimits

0x0c05,	// (0x0000bd50) list_set_graphic_pane_t1_copy1

0xb363,	// (0x000164ae) rs_clock_indi_pane_g1

0xf347,	// (0x0001a492) rs_clock_indi_pane_t1

0xef63,	// (0x0001a0ae) rs_indi_pane

0xf355,	// (0x0001a4a0) rs_indi_pane_g1

0xf35e,	// (0x0001a4a9) rs_indi_pane_g2

0xf367,	// (0x0001a4b2) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x0001b03c) rs_indi_pane_g

0x7b88,	// (0x00012cd3) bg_popup_preview_window_pane_cp03

0xf370,	// (0x0001a4bb) popup_fep_tooltip_window_t1

0xc1e8,	// (0x00017333) popup_note2_window_g2_ParamLimits

0xc1e8,	// (0x00017333) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0001adda) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0001adda) popup_note2_window_g

0xc7d2,	// (0x0001791d) bg_popup_sub_pane_cp11_ParamLimits

0xc7df,	// (0x0001792a) cell_ai3_links_pane_g1_ParamLimits

0xc7f6,	// (0x00017941) cell_ai3_links_pane_t1

0x5fb0,	// (0x000110fb) set_text_pane_t1_copy1_ParamLimits

0x7a99,	// (0x00012be4) cell_graphic_popup_pane_cp2_ParamLimits

0x7a99,	// (0x00012be4) cell_graphic_popup_pane_cp2

0xf37e,	// (0x0001a4c9) cell_graphic_popup_pane_g1_cp2

0x6528,	// (0x00011673) cell_graphic_popup_pane_g2_cp2

0xf386,	// (0x0001a4d1) cell_graphic_popup_pane_g3_cp2

0xf38e,	// (0x0001a4d9) cell_graphic_popup_pane_t2_cp2

0x6539,	// (0x00011684) grid_highlight_pane_cp3_cp2

0x7265,	// (0x000123b0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6d3e,	// (0x00011e89) main_tmo_pane_ParamLimits

0x29b1,	// (0x0000dafc) popup_tmo_big_image_note_window

0x3927,	// (0x0000ea72) cell_ai5_widget_list_pane

0x392f,	// (0x0000ea7a) cell_ai5_widget_lrg_icon_pane

0x3c02,	// (0x0000ed4d) tmo_note_info_pane_t1_ParamLimits

0x3c17,	// (0x0000ed62) tmo_note_info_pane_t2_ParamLimits

0x3c2e,	// (0x0000ed79) tmo_note_info_pane_t3_ParamLimits

0xf1cf,	// (0x0001a31a) tmo_note_info_pane_t4_ParamLimits

0xf1e1,	// (0x0001a32c) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x0001b02a) tmo_note_info_pane_t_ParamLimits

0x3ca8,	// (0x0000edf3) settings_container_pane_ParamLimits

0xf325,	// (0x0001a470) indicator_popup_pane_cp5

0xf325,	// (0x0001a470) indicator_popup_pane_cp6

0x0bdb,	// (0x0000bd26) list_set_graphic_pane_copy1_ParamLimits

0x5e63,	// (0x00010fae) bg_popup_window_pane_cp23

0xf39c,	// (0x0001a4e7) popup_tmo_big_image_note_window_g1

0xf3a6,	// (0x0001a4f1) popup_tmo_big_image_note_window_t1

0xf3b6,	// (0x0001a501) popup_tmo_big_image_note_window_t2

0xf3c6,	// (0x0001a511) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x0001b043) popup_tmo_big_image_note_window_t

0x3ebf,	// (0x0000f00a) cell_ai5_widget_lrg_icon_pane_g1

0x3ec7,	// (0x0000f012) cell_ai5_widget_lrg_icon_pane_t1

0x3ed5,	// (0x0000f020) cell_ai5_widget_list_row_pane_ParamLimits

0x3ed5,	// (0x0000f020) cell_ai5_widget_list_row_pane

0x3eee,	// (0x0000f039) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3eee,	// (0x0000f039) cell_ai5_widget_list_row_pane_g1

0x3efb,	// (0x0000f046) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3efb,	// (0x0000f046) cell_ai5_widget_list_row_pane_t1

0x3f13,	// (0x0000f05e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3f13,	// (0x0000f05e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x0001b04a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x0001b04a) cell_ai5_widget_list_row_pane_t

0x43c3,	// (0x0000f50e) main_fep_vtchi_ss_pane

0xf3d6,	// (0x0001a521) popup_fep_char_pre_window

0xf3de,	// (0x0001a529) popup_fep_ituss_window

0xf3e9,	// (0x0001a534) popup_fep_vkbss_window

0xf3f2,	// (0x0001a53d) grid_vkbss_keypad_pane_ParamLimits

0xf3f2,	// (0x0001a53d) grid_vkbss_keypad_pane

0xf402,	// (0x0001a54d) ituss_keypad_pane

0xf40a,	// (0x0001a555) aid_vkbss_key_offset_ParamLimits

0xf40a,	// (0x0001a555) aid_vkbss_key_offset

0xf419,	// (0x0001a564) cell_vkbss_key_pane_ParamLimits

0xf419,	// (0x0001a564) cell_vkbss_key_pane

0xf42f,	// (0x0001a57a) bg_cell_vkbss_key_g1_ParamLimits

0xf42f,	// (0x0001a57a) bg_cell_vkbss_key_g1

0xf43b,	// (0x0001a586) cell_vkbss_key_3p_pane_ParamLimits

0xf43b,	// (0x0001a586) cell_vkbss_key_3p_pane

0xf455,	// (0x0001a5a0) cell_vkbss_key_g1_ParamLimits

0xf455,	// (0x0001a5a0) cell_vkbss_key_g1

0xf46f,	// (0x0001a5ba) cell_vkbss_key_t1_ParamLimits

0xf46f,	// (0x0001a5ba) cell_vkbss_key_t1

0xf49a,	// (0x0001a5e5) cell_ituss_key_pane_ParamLimits

0xf49a,	// (0x0001a5e5) cell_ituss_key_pane

0xf4a9,	// (0x0001a5f4) bg_cell_ituss_key_g1_ParamLimits

0xf4a9,	// (0x0001a5f4) bg_cell_ituss_key_g1

0xf4b5,	// (0x0001a600) cell_ituss_key_pane_g1_ParamLimits

0xf4b5,	// (0x0001a600) cell_ituss_key_pane_g1

0xf4c1,	// (0x0001a60c) cell_ituss_key_pane_g2_ParamLimits

0xf4c1,	// (0x0001a60c) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x0001b04f) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x0001b04f) cell_ituss_key_pane_g

0xf4d4,	// (0x0001a61f) cell_ituss_key_t1_ParamLimits

0xf4d4,	// (0x0001a61f) cell_ituss_key_t1

0xf4f2,	// (0x0001a63d) cell_ituss_key_t2_ParamLimits

0xf4f2,	// (0x0001a63d) cell_ituss_key_t2

0xf511,	// (0x0001a65c) cell_ituss_key_t3_ParamLimits

0xf511,	// (0x0001a65c) cell_ituss_key_t3

0xf530,	// (0x0001a67b) cell_ituss_key_t4_ParamLimits

0xf530,	// (0x0001a67b) cell_ituss_key_t4

0x0003,

0xff09,	// (0x0001b054) cell_ituss_key_t_ParamLimits

0xff09,	// (0x0001b054) cell_ituss_key_t

0xf54f,	// (0x0001a69a) cell_vkbss_key_3p_pane_g1

0xf557,	// (0x0001a6a2) cell_vkbss_key_3p_pane_g2

0xf55f,	// (0x0001a6aa) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x0001b05d) cell_vkbss_key_3p_pane_g

0x5e63,	// (0x00010fae) bg_popup_fep_char_preview_window_cp02

0xf567,	// (0x0001a6b2) popup_fep_char_pre_window_t1

0x391d,	// (0x0000ea68) main_ai5_sk_pane

0xf25b,	// (0x0001a3a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf267,	// (0x0001a3b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf27b,	// (0x0001a3c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf28a,	// (0x0001a3d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x0001b035) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf29d,	// (0x0001a3e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6d3e,	// (0x00011e89) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3f25,	// (0x0000f070) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
