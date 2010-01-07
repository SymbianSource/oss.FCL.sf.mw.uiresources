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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000967c };

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
0x790e,	// (0x00010f8a) Screen

0x7922,	// (0x00010f9e) application_window_ParamLimits

0x7922,	// (0x00010f9e) application_window

0x793c,	// (0x00010fb8) screen_g1

0x5d3e,	// (0x0000f3ba) area_bottom_pane_ParamLimits

0x5d3e,	// (0x0000f3ba) area_bottom_pane

0x5dfe,	// (0x0000f47a) area_top_pane_ParamLimits

0x5dfe,	// (0x0000f47a) area_top_pane

0x5e9c,	// (0x0000f518) main_pane_ParamLimits

0x5e9c,	// (0x0000f518) main_pane

0x7946,	// (0x00010fc2) misc_graphics

0xa012,	// (0x0001368e) battery_pane_ParamLimits

0xa012,	// (0x0001368e) battery_pane

0xad96,	// (0x00014412) bg_status_flat_pane_g8

0xad9e,	// (0x0001441a) bg_status_flat_pane_g9

0xa0d4,	// (0x00013750) context_pane_ParamLimits

0xa0d4,	// (0x00013750) context_pane

0xa1ea,	// (0x00013866) navi_pane_ParamLimits

0xa1ea,	// (0x00013866) navi_pane

0xa267,	// (0x000138e3) signal_pane_ParamLimits

0xa267,	// (0x000138e3) signal_pane

0x0008,

0xf8ad,	// (0x00018f29) bg_status_flat_pane_g

0xa2d4,	// (0x00013950) status_pane_g1_ParamLimits

0xa2d4,	// (0x00013950) status_pane_g1

0xa2e8,	// (0x00013964) status_pane_g2_ParamLimits

0xa2e8,	// (0x00013964) status_pane_g2

0xa2f4,	// (0x00013970) status_pane_g3_ParamLimits

0xa2f4,	// (0x00013970) status_pane_g3

0x0004,

0xf7db,	// (0x00018e57) status_pane_g_ParamLimits

0xf7db,	// (0x00018e57) status_pane_g

0xa328,	// (0x000139a4) title_pane_ParamLimits

0xa328,	// (0x000139a4) title_pane

0xa365,	// (0x000139e1) uni_indicator_pane_ParamLimits

0xa365,	// (0x000139e1) uni_indicator_pane

0x997f,	// (0x00012ffb) bg_list_pane_ParamLimits

0x997f,	// (0x00012ffb) bg_list_pane

0x999f,	// (0x0001301b) find_pane

0x99a7,	// (0x00013023) listscroll_app_pane_ParamLimits

0x99a7,	// (0x00013023) listscroll_app_pane

0x99b3,	// (0x0001302f) listscroll_form_pane

0x99bb,	// (0x00013037) listscroll_gen_pane_ParamLimits

0x99bb,	// (0x00013037) listscroll_gen_pane

0x99b3,	// (0x0001302f) listscroll_set_pane

0x8b78,	// (0x000121f4) main_idle_act_pane

0x9657,	// (0x00012cd3) main_idle_trad_pane

0x9657,	// (0x00012cd3) main_list_empty_pane

0x99e1,	// (0x0001305d) main_midp_pane

0x99ed,	// (0x00013069) main_pane_g1_ParamLimits

0x99ed,	// (0x00013069) main_pane_g1

0x99fb,	// (0x00013077) popup_ai_message_window_ParamLimits

0x99fb,	// (0x00013077) popup_ai_message_window

0x9aa5,	// (0x00013121) popup_fep_china_uni_window_ParamLimits

0x9aa5,	// (0x00013121) popup_fep_china_uni_window

0x9b01,	// (0x0001317d) popup_fep_japan_candidate_window_ParamLimits

0x9b01,	// (0x0001317d) popup_fep_japan_candidate_window

0x9b21,	// (0x0001319d) popup_fep_japan_predictive_window_ParamLimits

0x9b21,	// (0x0001319d) popup_fep_japan_predictive_window

0x9b51,	// (0x000131cd) popup_find_window

0x9b5e,	// (0x000131da) popup_grid_graphic_window_ParamLimits

0x9b5e,	// (0x000131da) popup_grid_graphic_window

0x9b86,	// (0x00013202) popup_large_graphic_colour_window

0x9bac,	// (0x00013228) popup_menu_window_ParamLimits

0x9bac,	// (0x00013228) popup_menu_window

0x9d64,	// (0x000133e0) popup_note_image_window

0x9d50,	// (0x000133cc) popup_note_wait_window_ParamLimits

0x9d50,	// (0x000133cc) popup_note_wait_window

0x9d50,	// (0x000133cc) popup_note_window_ParamLimits

0x9d50,	// (0x000133cc) popup_note_window

0x9dba,	// (0x00013436) popup_query_code_window_ParamLimits

0x9dba,	// (0x00013436) popup_query_code_window

0x9dce,	// (0x0001344a) popup_query_data_code_window_ParamLimits

0x9dce,	// (0x0001344a) popup_query_data_code_window

0x9deb,	// (0x00013467) popup_query_data_window_ParamLimits

0x9deb,	// (0x00013467) popup_query_data_window

0x9e07,	// (0x00013483) popup_query_sat_info_window_ParamLimits

0x9e07,	// (0x00013483) popup_query_sat_info_window

0x9e40,	// (0x000134bc) popup_snote_single_graphic_window_ParamLimits

0x9e40,	// (0x000134bc) popup_snote_single_graphic_window

0x9e40,	// (0x000134bc) popup_snote_single_text_window_ParamLimits

0x9e40,	// (0x000134bc) popup_snote_single_text_window

0x9e55,	// (0x000134d1) popup_sub_window_general

0x9f85,	// (0x00013601) popup_window_general_ParamLimits

0x9f85,	// (0x00013601) popup_window_general

0x9f9a,	// (0x00013616) power_save_pane

0x65fb,	// (0x0000fc77) control_pane_g1_ParamLimits

0x65fb,	// (0x0000fc77) control_pane_g1

0x6624,	// (0x0000fca0) control_pane_g2_ParamLimits

0x6624,	// (0x0000fca0) control_pane_g2

0x9920,	// (0x00012f9c) control_pane_g3_ParamLimits

0x9920,	// (0x00012f9c) control_pane_g3

0x0007,

0xf7c3,	// (0x00018e3f) control_pane_g_ParamLimits

0xf7c3,	// (0x00018e3f) control_pane_g

0x666b,	// (0x0000fce7) control_pane_t1_ParamLimits

0x666b,	// (0x0000fce7) control_pane_t1

0x66bd,	// (0x0000fd39) control_pane_t2_ParamLimits

0x66bd,	// (0x0000fd39) control_pane_t2

0x0002,

0xf7d4,	// (0x00018e50) control_pane_t_ParamLimits

0xf7d4,	// (0x00018e50) control_pane_t

0x9841,	// (0x00012ebd) navi_navi_volume_pane_cp1

0x984a,	// (0x00012ec6) status_small_icon_pane

0x9852,	// (0x00012ece) status_small_pane_g1_ParamLimits

0x9852,	// (0x00012ece) status_small_pane_g1

0x9886,	// (0x00012f02) status_small_pane_g2_ParamLimits

0x9886,	// (0x00012f02) status_small_pane_g2

0x9892,	// (0x00012f0e) status_small_pane_g3_ParamLimits

0x9892,	// (0x00012f0e) status_small_pane_g3

0x989e,	// (0x00012f1a) status_small_pane_g4_ParamLimits

0x989e,	// (0x00012f1a) status_small_pane_g4

0x98aa,	// (0x00012f26) status_small_pane_g5_ParamLimits

0x98aa,	// (0x00012f26) status_small_pane_g5

0x98b9,	// (0x00012f35) status_small_pane_g6_ParamLimits

0x98b9,	// (0x00012f35) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00018e2e) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00018e2e) status_small_pane_g

0x98e9,	// (0x00012f65) status_small_pane_t1

0x990c,	// (0x00012f88) status_small_wait_pane_ParamLimits

0x990c,	// (0x00012f88) status_small_wait_pane

0x906b,	// (0x000126e7) aid_levels_signal_ParamLimits

0x906b,	// (0x000126e7) aid_levels_signal

0x907d,	// (0x000126f9) signal_pane_g1_ParamLimits

0x907d,	// (0x000126f9) signal_pane_g1

0x9092,	// (0x0001270e) signal_pane_g2_ParamLimits

0x9092,	// (0x0001270e) signal_pane_g2

0x0001,

0xf747,	// (0x00018dc3) signal_pane_g_ParamLimits

0xf747,	// (0x00018dc3) signal_pane_g

0x90a7,	// (0x00012723) context_pane_g1

0x7950,	// (0x00010fcc) title_pane_g1

0x7986,	// (0x00011002) title_pane_t1

0x79ee,	// (0x0001106a) title_pane_t2

0x7a14,	// (0x00011090) title_pane_t3

0x0002,

0xf59b,	// (0x00018c17) title_pane_t

0xa37d,	// (0x000139f9) aid_levels_battery_ParamLimits

0xa37d,	// (0x000139f9) aid_levels_battery

0xa391,	// (0x00013a0d) battery_pane_g1_ParamLimits

0xa391,	// (0x00013a0d) battery_pane_g1

0xa3a7,	// (0x00013a23) battery_pane_g2_ParamLimits

0xa3a7,	// (0x00013a23) battery_pane_g2

0x0001,

0xf7e6,	// (0x00018e62) battery_pane_g_ParamLimits

0xf7e6,	// (0x00018e62) battery_pane_g

0xb6d2,	// (0x00014d4e) uni_indicator_pane_g1

0xb6e7,	// (0x00014d63) uni_indicator_pane_g2

0xb6fd,	// (0x00014d79) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00018fd1) uni_indicator_pane_g

0x94c9,	// (0x00012b45) navi_icon_pane_ParamLimits

0x94c9,	// (0x00012b45) navi_icon_pane

0x9412,	// (0x00012a8e) navi_midp_pane

0x94e5,	// (0x00012b61) navi_navi_pane

0x94ef,	// (0x00012b6b) navi_text_pane_ParamLimits

0x94ef,	// (0x00012b6b) navi_text_pane

0x793c,	// (0x00010fb8) status_small_wait_pane_g1

0x7e5d,	// (0x000114d9) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x00018fcc) status_small_wait_pane_g

0xb3f7,	// (0x00014a73) navi_navi_icon_text_pane

0xb3ff,	// (0x00014a7b) navi_navi_pane_g1_ParamLimits

0xb3ff,	// (0x00014a7b) navi_navi_pane_g1

0xb411,	// (0x00014a8d) navi_navi_pane_g2_ParamLimits

0xb411,	// (0x00014a8d) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00018f9a) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00018f9a) navi_navi_pane_g

0xb423,	// (0x00014a9f) navi_navi_tabs_pane

0xb42c,	// (0x00014aa8) navi_navi_text_pane

0xb3f7,	// (0x00014a73) navi_navi_volume_pane

0xb3d0,	// (0x00014a4c) navi_text_pane_t1

0xb3c1,	// (0x00014a3d) navi_icon_pane_g1

0xb314,	// (0x00014990) navi_navi_text_pane_t1

0x6a53,	// (0x000100cf) navi_navi_volume_pane_g1

0x6a5b,	// (0x000100d7) volume_small_pane

0xb27a,	// (0x000148f6) navi_navi_icon_text_pane_g1

0xb282,	// (0x000148fe) navi_navi_icon_text_pane_t1

0x94e5,	// (0x00012b61) navi_tabs_2_long_pane

0x94e5,	// (0x00012b61) navi_tabs_2_pane

0x94e5,	// (0x00012b61) navi_tabs_3_long_pane

0x94e5,	// (0x00012b61) navi_tabs_3_pane

0x94e5,	// (0x00012b61) navi_tabs_4_pane

0x6a33,	// (0x000100af) tabs_2_active_pane_ParamLimits

0x6a33,	// (0x000100af) tabs_2_active_pane

0x6a43,	// (0x000100bf) tabs_2_passive_pane_ParamLimits

0x6a43,	// (0x000100bf) tabs_2_passive_pane

0x6a01,	// (0x0001007d) tabs_3_active_pane_ParamLimits

0x6a01,	// (0x0001007d) tabs_3_active_pane

0x6a11,	// (0x0001008d) tabs_3_passive_pane_ParamLimits

0x6a11,	// (0x0001008d) tabs_3_passive_pane

0x6a22,	// (0x0001009e) tabs_3_passive_pane_cp_ParamLimits

0x6a22,	// (0x0001009e) tabs_3_passive_pane_cp

0x69bd,	// (0x00010039) tabs_4_active_pane_ParamLimits

0x69bd,	// (0x00010039) tabs_4_active_pane

0x69ce,	// (0x0001004a) tabs_4_passive_pane_ParamLimits

0x69ce,	// (0x0001004a) tabs_4_passive_pane

0x69df,	// (0x0001005b) tabs_4_passive_pane_cp_ParamLimits

0x69df,	// (0x0001005b) tabs_4_passive_pane_cp

0x69f0,	// (0x0001006c) tabs_4_passive_pane_cp2_ParamLimits

0x69f0,	// (0x0001006c) tabs_4_passive_pane_cp2

0x6999,	// (0x00010015) tabs_2_long_active_pane_ParamLimits

0x6999,	// (0x00010015) tabs_2_long_active_pane

0x69ab,	// (0x00010027) tabs_2_long_passive_pane_ParamLimits

0x69ab,	// (0x00010027) tabs_2_long_passive_pane

0x695a,	// (0x0000ffd6) tabs_3_long_active_pane_ParamLimits

0x695a,	// (0x0000ffd6) tabs_3_long_active_pane

0x696d,	// (0x0000ffe9) tabs_3_long_passive_pane_ParamLimits

0x696d,	// (0x0000ffe9) tabs_3_long_passive_pane

0x6986,	// (0x00010002) tabs_3_long_passive_pane_cp_ParamLimits

0x6986,	// (0x00010002) tabs_3_long_passive_pane_cp

0x6900,	// (0x0000ff7c) volume_small_pane_g1

0x6909,	// (0x0000ff85) volume_small_pane_g2

0x6912,	// (0x0000ff8e) volume_small_pane_g3

0x691b,	// (0x0000ff97) volume_small_pane_g4

0x6924,	// (0x0000ffa0) volume_small_pane_g5

0x692d,	// (0x0000ffa9) volume_small_pane_g6

0x6936,	// (0x0000ffb2) volume_small_pane_g7

0x693f,	// (0x0000ffbb) volume_small_pane_g8

0x6948,	// (0x0000ffc4) volume_small_pane_g9

0x6951,	// (0x0000ffcd) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00018f66) volume_small_pane_g

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp2_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp2

0x7a34,	// (0x000110b0) tabs_3_active_pane_g1

0x7a3c,	// (0x000110b8) tabs_3_active_pane_t1

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp2_ParamLimits

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp2

0x7a34,	// (0x000110b0) tabs_3_passive_pane_g1

0x7a3c,	// (0x000110b8) tabs_3_passive_pane_t1

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp3_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp3

0x7a4e,	// (0x000110ca) tabs_4_active_pane_g1

0x7a56,	// (0x000110d2) tabs_4_active_pane_t1

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp3_ParamLimits

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp3

0x7a4e,	// (0x000110ca) tabs_4_1_passive_pane_g1

0x7a56,	// (0x000110d2) tabs_4_1_passive_pane_t1

0x99e1,	// (0x0001305d) list_highlight_pane_cp2

0xb983,	// (0x00014fff) list_set_pane_ParamLimits

0xb983,	// (0x00014fff) list_set_pane

0xba29,	// (0x000150a5) main_pane_set_t1_ParamLimits

0xba29,	// (0x000150a5) main_pane_set_t1

0xba49,	// (0x000150c5) main_pane_set_t2_ParamLimits

0xba49,	// (0x000150c5) main_pane_set_t2

0xba5d,	// (0x000150d9) main_pane_set_t3_ParamLimits

0xba5d,	// (0x000150d9) main_pane_set_t3

0xba6f,	// (0x000150eb) main_pane_set_t4_ParamLimits

0xba6f,	// (0x000150eb) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00019036) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00019036) main_pane_set_t

0xba81,	// (0x000150fd) setting_code_pane

0xba8d,	// (0x00015109) setting_slider_graphic_pane

0xba8d,	// (0x00015109) setting_slider_pane

0xba8d,	// (0x00015109) setting_text_pane

0xba8d,	// (0x00015109) setting_volume_pane

0x60e1,	// (0x0000f75d) volume_set_pane

0x7a26,	// (0x000110a2) bg_set_opt_pane_cp

0x60e9,	// (0x0000f765) setting_slider_pane_t1

0x6102,	// (0x0000f77e) setting_slider_pane_t2

0x611c,	// (0x0000f798) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00018c1e) setting_slider_pane_t

0x6134,	// (0x0000f7b0) slider_set_pane

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp2

0x7a68,	// (0x000110e4) setting_slider_graphic_pane_g1

0x614a,	// (0x0000f7c6) setting_slider_graphic_pane_t1

0x615a,	// (0x0000f7d6) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00018c25) setting_slider_graphic_pane_t

0x616a,	// (0x0000f7e6) slider_set_pane_cp

0x7946,	// (0x00010fc2) input_focus_pane_cp1

0xb942,	// (0x00014fbe) list_set_text_pane

0x793c,	// (0x00010fb8) setting_text_pane_g1

0x7946,	// (0x00010fc2) input_focus_pane_cp2

0x793c,	// (0x00010fb8) setting_code_pane_g1

0x7a71,	// (0x000110ed) setting_code_pane_t1

0x7a7f,	// (0x000110fb) set_text_pane_t1_ParamLimits

0x7a7f,	// (0x000110fb) set_text_pane_t1

0x8945,	// (0x00011fc1) set_opt_bg_pane_g1

0x894d,	// (0x00011fc9) set_opt_bg_pane_g2

0xb91c,	// (0x00014f98) set_opt_bg_pane_g3

0x895d,	// (0x00011fd9) set_opt_bg_pane_g4

0x8965,	// (0x00011fe1) set_opt_bg_pane_g5

0x896d,	// (0x00011fe9) set_opt_bg_pane_g6

0xb926,	// (0x00014fa2) set_opt_bg_pane_g7

0xb92e,	// (0x00014faa) set_opt_bg_pane_g8

0xb938,	// (0x00014fb4) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x00019023) set_opt_bg_pane_g

0xb90f,	// (0x00014f8b) slider_set_pane_g1

0x6ac8,	// (0x00010144) slider_set_pane_g2

0x0006,

0xf998,	// (0x00019014) slider_set_pane_g

0x6a64,	// (0x000100e0) volume_set_pane_g1

0x6a6c,	// (0x000100e8) volume_set_pane_g2

0x6a74,	// (0x000100f0) volume_set_pane_g3

0x6a7c,	// (0x000100f8) volume_set_pane_g4

0x6a84,	// (0x00010100) volume_set_pane_g5

0x6a8c,	// (0x00010108) volume_set_pane_g6

0x6a94,	// (0x00010110) volume_set_pane_g7

0x6a9c,	// (0x00010118) volume_set_pane_g8

0x6aa4,	// (0x00010120) volume_set_pane_g9

0x6aac,	// (0x00010128) volume_set_pane_g10

0x0009,

0xf970,	// (0x00018fec) volume_set_pane_g

0x7a99,	// (0x00011115) indicator_pane_ParamLimits

0x7a99,	// (0x00011115) indicator_pane

0x7aa5,	// (0x00011121) main_idle_pane_g2_ParamLimits

0x7aa5,	// (0x00011121) main_idle_pane_g2

0x7acd,	// (0x00011149) main_pane_idle_g1_ParamLimits

0x7acd,	// (0x00011149) main_pane_idle_g1

0x7ada,	// (0x00011156) popup_clock_digital_analogue_window_ParamLimits

0x7ada,	// (0x00011156) popup_clock_digital_analogue_window

0x7af1,	// (0x0001116d) soft_indicator_pane_ParamLimits

0x7af1,	// (0x0001116d) soft_indicator_pane

0x7afd,	// (0x00011179) wallpaper_pane_ParamLimits

0x7afd,	// (0x00011179) wallpaper_pane

0x793c,	// (0x00010fb8) wallpaper_pane_g1

0x7b11,	// (0x0001118d) indicator_pane_g1_ParamLimits

0x7b11,	// (0x0001118d) indicator_pane_g1

0xbde9,	// (0x00015465) navi_navi_icon_text_pane_srt_g1

0x7b2c,	// (0x000111a8) soft_indicator_pane_t1

0x7b46,	// (0x000111c2) aid_ps_area_pane

0x7b57,	// (0x000111d3) aid_ps_clock_pane

0x7b65,	// (0x000111e1) aid_ps_indicator_pane

0x7b71,	// (0x000111ed) indicator_ps_pane_ParamLimits

0x7b71,	// (0x000111ed) indicator_ps_pane

0x7b80,	// (0x000111fc) power_save_pane_g1_ParamLimits

0x7b80,	// (0x000111fc) power_save_pane_g1

0x7b8c,	// (0x00011208) power_save_pane_g2_ParamLimits

0x7b8c,	// (0x00011208) power_save_pane_g2

0x5cf2,	// (0x0000f36e) aid_navinavi_width_pane

0x7b46,	// (0x000111c2) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00018c2a) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00018c2a) power_save_pane_g

0x7b9a,	// (0x00011216) power_save_pane_t1_ParamLimits

0x7b9a,	// (0x00011216) power_save_pane_t1

0x7b57,	// (0x000111d3) aid_ps_clock_pane_ParamLimits

0x7b65,	// (0x000111e1) aid_ps_indicator_pane_ParamLimits

0x7bac,	// (0x00011228) power_save_pane_t4_ParamLimits

0x7bac,	// (0x00011228) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00018c2f) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00018c2f) power_save_pane_t

0x7bd6,	// (0x00011252) power_save_t3_ParamLimits

0x7bd6,	// (0x00011252) power_save_t3

0x7bc1,	// (0x0001123d) power_save_t2_ParamLimits

0x7bc1,	// (0x0001123d) power_save_t2

0x7beb,	// (0x00011267) indicator_ps_pane_g1

0x7bf4,	// (0x00011270) ai_gene_pane_ParamLimits

0x7bf4,	// (0x00011270) ai_gene_pane

0x7c00,	// (0x0001127c) ai_links_pane_ParamLimits

0x7c00,	// (0x0001127c) ai_links_pane

0x7c0c,	// (0x00011288) indicator_pane_cp1_ParamLimits

0x7c0c,	// (0x00011288) indicator_pane_cp1

0x7c18,	// (0x00011294) main_pane_idle_g1_cp_ParamLimits

0x7c18,	// (0x00011294) main_pane_idle_g1_cp

0x7c24,	// (0x000112a0) popup_ai_links_title_window

0x7c2d,	// (0x000112a9) soft_indicator_pane_cp1_ParamLimits

0x7c2d,	// (0x000112a9) soft_indicator_pane_cp1

0xb6c0,	// (0x00014d3c) ai_links_pane_g1

0xb6c9,	// (0x00014d45) grid_ai_links_pane

0xb6a3,	// (0x00014d1f) ai_gene_pane_1

0xb6ae,	// (0x00014d2a) ai_gene_pane_2

0xb6b7,	// (0x00014d33) list_highlight_pane_cp4

0xb687,	// (0x00014d03) cell_ai_link_pane_ParamLimits

0xb687,	// (0x00014d03) cell_ai_link_pane

0xb67f,	// (0x00014cfb) cell_ai_link_pane_g1

0x7e5d,	// (0x000114d9) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00018fc7) cell_ai_link_pane_g

0x7946,	// (0x00010fc2) grid_highlight_cp2

0x7946,	// (0x00010fc2) bg_popup_sub_pane_cp1

0x7c47,	// (0x000112c3) popup_ai_links_title_window_t1

0xb5cd,	// (0x00014c49) ai_gene_pane_1_g1_ParamLimits

0xb5cd,	// (0x00014c49) ai_gene_pane_1_g1

0xb5d9,	// (0x00014c55) ai_gene_pane_1_g2_ParamLimits

0xb5d9,	// (0x00014c55) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00018fbd) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00018fbd) ai_gene_pane_1_g

0xb5e6,	// (0x00014c62) ai_gene_pane_1_t1_ParamLimits

0xb5e6,	// (0x00014c62) ai_gene_pane_1_t1

0xb61a,	// (0x00014c96) grid_ai_soft_ind_pane

0xb5b8,	// (0x00014c34) ai_gene_pane_2_t1_ParamLimits

0xb5b8,	// (0x00014c34) ai_gene_pane_2_t1

0x7c56,	// (0x000112d2) main_pane_empty_t1_ParamLimits

0x7c56,	// (0x000112d2) main_pane_empty_t1

0x7c6e,	// (0x000112ea) main_pane_empty_t2_ParamLimits

0x7c6e,	// (0x000112ea) main_pane_empty_t2

0x7c83,	// (0x000112ff) main_pane_empty_t3_ParamLimits

0x7c83,	// (0x000112ff) main_pane_empty_t3

0x7c95,	// (0x00011311) main_pane_empty_t4_ParamLimits

0x7c95,	// (0x00011311) main_pane_empty_t4

0x7ca7,	// (0x00011323) main_pane_empty_t5_ParamLimits

0x7ca7,	// (0x00011323) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00018c34) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00018c34) main_pane_empty_t

0x8a42,	// (0x000120be) bg_popup_window_pane_ParamLimits

0x8a42,	// (0x000120be) bg_popup_window_pane

0xb322,	// (0x0001499e) find_popup_pane_cp2_ParamLimits

0xb322,	// (0x0001499e) find_popup_pane_cp2

0xb32e,	// (0x000149aa) heading_pane_ParamLimits

0xb32e,	// (0x000149aa) heading_pane

0x7946,	// (0x00010fc2) bg_popup_sub_pane

0xb29c,	// (0x00014918) bg_popup_window_pane_g1_ParamLimits

0xb29c,	// (0x00014918) bg_popup_window_pane_g1

0xb2a8,	// (0x00014924) bg_popup_window_pane_g2_ParamLimits

0xb2a8,	// (0x00014924) bg_popup_window_pane_g2

0xb2b4,	// (0x00014930) bg_popup_window_pane_g3_ParamLimits

0xb2b4,	// (0x00014930) bg_popup_window_pane_g3

0xb2c0,	// (0x0001493c) bg_popup_window_pane_g4_ParamLimits

0xb2c0,	// (0x0001493c) bg_popup_window_pane_g4

0xb2cc,	// (0x00014948) bg_popup_window_pane_g5_ParamLimits

0xb2cc,	// (0x00014948) bg_popup_window_pane_g5

0xb2d8,	// (0x00014954) bg_popup_window_pane_g6_ParamLimits

0xb2d8,	// (0x00014954) bg_popup_window_pane_g6

0xb2e4,	// (0x00014960) bg_popup_window_pane_g7_ParamLimits

0xb2e4,	// (0x00014960) bg_popup_window_pane_g7

0xb2f0,	// (0x0001496c) bg_popup_window_pane_g8_ParamLimits

0xb2f0,	// (0x0001496c) bg_popup_window_pane_g8

0xb2fc,	// (0x00014978) bg_popup_window_pane_g9_ParamLimits

0xb2fc,	// (0x00014978) bg_popup_window_pane_g9

0xb308,	// (0x00014984) bg_popup_window_pane_g10_ParamLimits

0xb308,	// (0x00014984) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00018f85) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00018f85) bg_popup_window_pane_g

0xb231,	// (0x000148ad) bg_popup_heading_pane_ParamLimits

0xb231,	// (0x000148ad) bg_popup_heading_pane

0x6b50,	// (0x000101cc) tabs_4_passive_pane_cp_srt_ParamLimits

0x6b50,	// (0x000101cc) tabs_4_passive_pane_cp_srt

0x6b62,	// (0x000101de) tabs_4_passive_pane_srt_ParamLimits

0xb245,	// (0x000148c1) heading_pane_g2

0x6b62,	// (0x000101de) tabs_4_passive_pane_srt

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp3_srt

0xb24d,	// (0x000148c9) heading_pane_t1_ParamLimits

0xb24d,	// (0x000148c9) heading_pane_t1

0xb264,	// (0x000148e0) heading_pane_t2_ParamLimits

0xb264,	// (0x000148e0) heading_pane_t2

0x0001,

0xf904,	// (0x00018f80) heading_pane_t_ParamLimits

0xf904,	// (0x00018f80) heading_pane_t

0xad5e,	// (0x000143da) bg_popup_heading_pane_g1

0xae0d,	// (0x00014489) bg_popup_heading_pane_g2

0xae17,	// (0x00014493) bg_popup_heading_pane_g3

0xae21,	// (0x0001449d) bg_popup_heading_pane_g4

0xae2b,	// (0x000144a7) bg_popup_heading_pane_g5

0xae35,	// (0x000144b1) bg_popup_heading_pane_g6

0xae3d,	// (0x000144b9) bg_popup_heading_pane_g7

0xae45,	// (0x000144c1) bg_popup_heading_pane_g8

0xae4f,	// (0x000144cb) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00018f3c) bg_popup_heading_pane_g

0xa4b9,	// (0x00013b35) bg_popup_sub_pane_g1

0xa4c9,	// (0x00013b45) bg_popup_sub_pane_g2

0xa4c1,	// (0x00013b3d) bg_popup_sub_pane_g3

0xa4d9,	// (0x00013b55) bg_popup_sub_pane_g4

0xa4d1,	// (0x00013b4d) bg_popup_sub_pane_g5

0xa4e1,	// (0x00013b5d) bg_popup_sub_pane_g6

0xa4e9,	// (0x00013b65) bg_popup_sub_pane_g7

0xa4f9,	// (0x00013b75) bg_popup_sub_pane_g8

0xa4f1,	// (0x00013b6d) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x00018f16) bg_popup_sub_pane_g

0x7cbb,	// (0x00011337) bg_popup_window_pane_cp5_ParamLimits

0x7cbb,	// (0x00011337) bg_popup_window_pane_cp5

0x7cd7,	// (0x00011353) popup_note_window_g1_ParamLimits

0x7cd7,	// (0x00011353) popup_note_window_g1

0x7ce3,	// (0x0001135f) popup_note_window_t1_ParamLimits

0x7ce3,	// (0x0001135f) popup_note_window_t1

0x7cf9,	// (0x00011375) popup_note_window_t2_ParamLimits

0x7cf9,	// (0x00011375) popup_note_window_t2

0x7d0f,	// (0x0001138b) popup_note_window_t3_ParamLimits

0x7d0f,	// (0x0001138b) popup_note_window_t3

0x7d25,	// (0x000113a1) popup_note_window_t4_ParamLimits

0x7d25,	// (0x000113a1) popup_note_window_t4

0x7d4d,	// (0x000113c9) popup_note_window_t5_ParamLimits

0x7d4d,	// (0x000113c9) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00018c3f) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00018c3f) popup_note_window_t

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp6_ParamLimits

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp6

0xacda,	// (0x00014356) popup_note_image_window_g1_ParamLimits

0xacda,	// (0x00014356) popup_note_image_window_g1

0xace6,	// (0x00014362) popup_note_image_window_g2_ParamLimits

0xace6,	// (0x00014362) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x00018f0a) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x00018f0a) popup_note_image_window_g

0xacff,	// (0x0001437b) popup_note_image_window_t1_ParamLimits

0xacff,	// (0x0001437b) popup_note_image_window_t1

0xad18,	// (0x00014394) popup_note_image_window_t2_ParamLimits

0xad18,	// (0x00014394) popup_note_image_window_t2

0xad31,	// (0x000143ad) popup_note_image_window_t3_ParamLimits

0xad31,	// (0x000143ad) popup_note_image_window_t3

0x0002,

0xf893,	// (0x00018f0f) popup_note_image_window_t_ParamLimits

0xf893,	// (0x00018f0f) popup_note_image_window_t

0xab9b,	// (0x00014217) bg_popup_window_pane_cp7_ParamLimits

0xab9b,	// (0x00014217) bg_popup_window_pane_cp7

0xabcb,	// (0x00014247) popup_note_wait_window_g1_ParamLimits

0xabcb,	// (0x00014247) popup_note_wait_window_g1

0xabd7,	// (0x00014253) popup_note_wait_window_g2_ParamLimits

0xabd7,	// (0x00014253) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00018ef8) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00018ef8) popup_note_wait_window_g

0xabef,	// (0x0001426b) popup_note_wait_window_t1_ParamLimits

0xabef,	// (0x0001426b) popup_note_wait_window_t1

0xac16,	// (0x00014292) popup_note_wait_window_t2_ParamLimits

0xac16,	// (0x00014292) popup_note_wait_window_t2

0xac33,	// (0x000142af) popup_note_wait_window_t3_ParamLimits

0xac33,	// (0x000142af) popup_note_wait_window_t3

0xac46,	// (0x000142c2) popup_note_wait_window_t4_ParamLimits

0xac46,	// (0x000142c2) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00018eff) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00018eff) popup_note_wait_window_t

0xac6b,	// (0x000142e7) wait_bar_pane_ParamLimits

0xac6b,	// (0x000142e7) wait_bar_pane

0x7946,	// (0x00010fc2) wait_anim_pane

0x7946,	// (0x00010fc2) wait_border_pane

0x793c,	// (0x00010fb8) wait_anim_pane_g1

0x793c,	// (0x00010fb8) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00018dbe) wait_anim_pane_g

0xab3f,	// (0x000141bb) wait_border_pane_g1

0xab4a,	// (0x000141c6) wait_border_pane_g2

0xab53,	// (0x000141cf) wait_border_pane_g3

0x0002,

0xf875,	// (0x00018ef1) wait_border_pane_g

0xaa9c,	// (0x00014118) bg_popup_window_pane_cp16_ParamLimits

0xaa9c,	// (0x00014118) bg_popup_window_pane_cp16

0xaaaa,	// (0x00014126) indicator_popup_pane_cp4_ParamLimits

0xaaaa,	// (0x00014126) indicator_popup_pane_cp4

0xaabe,	// (0x0001413a) popup_query_data_window_t1_ParamLimits

0xaabe,	// (0x0001413a) popup_query_data_window_t1

0xaad0,	// (0x0001414c) popup_query_data_window_t2_ParamLimits

0xaad0,	// (0x0001414c) popup_query_data_window_t2

0xaae9,	// (0x00014165) popup_query_data_window_t3_ParamLimits

0xaae9,	// (0x00014165) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00018eea) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00018eea) popup_query_data_window_t

0xab03,	// (0x0001417f) query_popup_data_pane_ParamLimits

0xab03,	// (0x0001417f) query_popup_data_pane

0xab17,	// (0x00014193) query_popup_data_pane_cp1_ParamLimits

0xab17,	// (0x00014193) query_popup_data_pane_cp1

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp10_ParamLimits

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp10

0xa9ff,	// (0x0001407b) indicator_popup_pane_ParamLimits

0xa9ff,	// (0x0001407b) indicator_popup_pane

0x7dc8,	// (0x00011444) popup_query_code_window_t1_ParamLimits

0x7dc8,	// (0x00011444) popup_query_code_window_t1

0xaa17,	// (0x00014093) popup_query_code_window_t2_ParamLimits

0xaa17,	// (0x00014093) popup_query_code_window_t2

0xaa55,	// (0x000140d1) popup_query_code_window_t3_ParamLimits

0xaa55,	// (0x000140d1) popup_query_code_window_t3

0x0002,

0xf867,	// (0x00018ee3) popup_query_code_window_t_ParamLimits

0xf867,	// (0x00018ee3) popup_query_code_window_t

0xaa84,	// (0x00014100) query_popup_pane_ParamLimits

0xaa84,	// (0x00014100) query_popup_pane

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp15_ParamLimits

0x7d71,	// (0x000113ed) bg_popup_window_pane_cp15

0x7d8f,	// (0x0001140b) indicator_popup_pane_cp1_ParamLimits

0x7d8f,	// (0x0001140b) indicator_popup_pane_cp1

0x7da2,	// (0x0001141e) indicator_popup_pane_cp2_ParamLimits

0x7da2,	// (0x0001141e) indicator_popup_pane_cp2

0x7db5,	// (0x00011431) popup_query_data_code_window_g1_ParamLimits

0x7db5,	// (0x00011431) popup_query_data_code_window_g1

0x7dc8,	// (0x00011444) popup_query_data_code_window_t1_ParamLimits

0x7dc8,	// (0x00011444) popup_query_data_code_window_t1

0x7dda,	// (0x00011456) popup_query_data_code_window_t2_ParamLimits

0x7dda,	// (0x00011456) popup_query_data_code_window_t2

0x7dec,	// (0x00011468) popup_query_data_code_window_t3_ParamLimits

0x7dec,	// (0x00011468) popup_query_data_code_window_t3

0x7e02,	// (0x0001147e) popup_query_data_code_window_t4_ParamLimits

0x7e02,	// (0x0001147e) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00018c4a) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00018c4a) popup_query_data_code_window_t

0x6811,	// (0x0000fe8d) list_single_midp_graphic_pane_g3

0x7e1a,	// (0x00011496) query_popup_data_pane_cp2_ParamLimits

0x7e2d,	// (0x000114a9) query_popup_pane_cp2_ParamLimits

0x7e2d,	// (0x000114a9) query_popup_pane_cp2

0x7946,	// (0x00010fc2) bg_popup_window_pane_cp11

0xa9d3,	// (0x0001404f) heading_pane_cp5

0x7f15,	// (0x00011591) listscroll_popup_info_pane

0x7946,	// (0x00010fc2) input_focus_pane_cp3

0x7e40,	// (0x000114bc) query_popup_pane_t1

0x7e4e,	// (0x000114ca) list_popup_info_pane_ParamLimits

0x7e4e,	// (0x000114ca) list_popup_info_pane

0x7e5d,	// (0x000114d9) listscroll_popup_info_pane_g1

0x7e65,	// (0x000114e1) scroll_pane_cp7

0x7e6f,	// (0x000114eb) popup_info_list_pane_t1_ParamLimits

0x7e6f,	// (0x000114eb) popup_info_list_pane_t1

0x7e89,	// (0x00011505) popup_info_list_pane_t2_ParamLimits

0x7e89,	// (0x00011505) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00018c53) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00018c53) popup_info_list_pane_t

0x7946,	// (0x00010fc2) bg_popup_window_pane_cp12

0xbe03,	// (0x0001547f) find_popup_pane

0x7a26,	// (0x000110a2) bg_popup_window_pane_cp3

0x7ea3,	// (0x0001151f) heading_pane_cp3

0x7eaf,	// (0x0001152b) listscroll_popup_graphic_pane

0x7946,	// (0x00010fc2) bg_popup_window_pane_cp4

0x7f0b,	// (0x00011587) heading_pane_cp4

0x7f15,	// (0x00011591) listscroll_popup_colour_pane

0x7f1d,	// (0x00011599) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7f1d,	// (0x00011599) cell_large_graphic_colour_none_popup_pane

0x7f31,	// (0x000115ad) grid_large_graphic_colour_popup_pane_ParamLimits

0x7f31,	// (0x000115ad) grid_large_graphic_colour_popup_pane

0x7f5d,	// (0x000115d9) listscroll_popup_colour_pane_g1_ParamLimits

0x7f5d,	// (0x000115d9) listscroll_popup_colour_pane_g1

0x7f74,	// (0x000115f0) listscroll_popup_colour_pane_g2_ParamLimits

0x7f74,	// (0x000115f0) listscroll_popup_colour_pane_g2

0x7f8b,	// (0x00011607) listscroll_popup_colour_pane_g3_ParamLimits

0x7f8b,	// (0x00011607) listscroll_popup_colour_pane_g3

0x7f9b,	// (0x00011617) listscroll_popup_colour_pane_g4_ParamLimits

0x7f9b,	// (0x00011617) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00018c58) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00018c58) listscroll_popup_colour_pane_g

0x7faf,	// (0x0001162b) scroll_pane_cp6_ParamLimits

0x7faf,	// (0x0001162b) scroll_pane_cp6

0x7fc1,	// (0x0001163d) cell_large_graphic_colour_popup_pane_ParamLimits

0x7fc1,	// (0x0001163d) cell_large_graphic_colour_popup_pane

0x7fe0,	// (0x0001165c) cell_large_graphic_colour_none_popup_pane_t1

0x7946,	// (0x00010fc2) grid_highlight_pane_cp5

0x7fef,	// (0x0001166b) cell_large_graphic_colour_popup_pane_g1

0x7ff7,	// (0x00011673) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00018c61) cell_large_graphic_colour_popup_pane_g

0x7fff,	// (0x0001167b) cell_large_graphic_colour_popup_pane_g2_copy1

0x8008,	// (0x00011684) grid_highlight_pane_cp4

0x8010,	// (0x0001168c) bg_popup_window_pane_cp8_ParamLimits

0x8010,	// (0x0001168c) bg_popup_window_pane_cp8

0x802b,	// (0x000116a7) popup_snote_single_text_window_g1_ParamLimits

0x802b,	// (0x000116a7) popup_snote_single_text_window_g1

0x803d,	// (0x000116b9) popup_snote_single_text_window_t1_ParamLimits

0x803d,	// (0x000116b9) popup_snote_single_text_window_t1

0x8050,	// (0x000116cc) popup_snote_single_text_window_t2_ParamLimits

0x8050,	// (0x000116cc) popup_snote_single_text_window_t2

0x8063,	// (0x000116df) popup_snote_single_text_window_t3_ParamLimits

0x8063,	// (0x000116df) popup_snote_single_text_window_t3

0x809c,	// (0x00011718) popup_snote_single_text_window_t4_ParamLimits

0x809c,	// (0x00011718) popup_snote_single_text_window_t4

0x80d0,	// (0x0001174c) popup_snote_single_text_window_t5_ParamLimits

0x80d0,	// (0x0001174c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00018c66) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00018c66) popup_snote_single_text_window_t

0x80ff,	// (0x0001177b) bg_popup_window_pane_cp9_ParamLimits

0x80ff,	// (0x0001177b) bg_popup_window_pane_cp9

0x802b,	// (0x000116a7) popup_snote_single_graphic_window_g1_ParamLimits

0x802b,	// (0x000116a7) popup_snote_single_graphic_window_g1

0x810d,	// (0x00011789) popup_snote_single_graphic_window_g2_ParamLimits

0x810d,	// (0x00011789) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00018c71) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00018c71) popup_snote_single_graphic_window_g

0x8119,	// (0x00011795) popup_snote_single_graphic_window_t1_ParamLimits

0x8119,	// (0x00011795) popup_snote_single_graphic_window_t1

0x812c,	// (0x000117a8) popup_snote_single_graphic_window_t2_ParamLimits

0x812c,	// (0x000117a8) popup_snote_single_graphic_window_t2

0x813f,	// (0x000117bb) popup_snote_single_graphic_window_t3_ParamLimits

0x813f,	// (0x000117bb) popup_snote_single_graphic_window_t3

0x8178,	// (0x000117f4) popup_snote_single_graphic_window_t4_ParamLimits

0x8178,	// (0x000117f4) popup_snote_single_graphic_window_t4

0x81ac,	// (0x00011828) popup_snote_single_graphic_window_t5_ParamLimits

0x81ac,	// (0x00011828) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00018c76) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00018c76) popup_snote_single_graphic_window_t

0xbd47,	// (0x000153c3) grid_graphic_popup_pane_ParamLimits

0xbd47,	// (0x000153c3) grid_graphic_popup_pane

0xbd6f,	// (0x000153eb) listscroll_popup_graphic_pane_g1_ParamLimits

0xbd6f,	// (0x000153eb) listscroll_popup_graphic_pane_g1

0xbd83,	// (0x000153ff) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd83,	// (0x000153ff) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00019060) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00019060) listscroll_popup_graphic_pane_g

0xbd97,	// (0x00015413) scroll_pane_cp5

0xbcf0,	// (0x0001536c) cell_graphic_popup_pane_ParamLimits

0xbcf0,	// (0x0001536c) cell_graphic_popup_pane

0xbcd1,	// (0x0001534d) cell_graphic_popup_pane_g1

0xbcd9,	// (0x00015355) cell_graphic_popup_pane_g2

0x7fff,	// (0x0001167b) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00019059) cell_graphic_popup_pane_g

0xbce2,	// (0x0001535e) cell_graphic_popup_pane_t2

0x8008,	// (0x00011684) grid_highlight_pane_cp3

0x81ed,	// (0x00011869) list_gen_pane_ParamLimits

0x81ed,	// (0x00011869) list_gen_pane

0x821f,	// (0x0001189b) scroll_pane

0xbc33,	// (0x000152af) bg_list_pane_g1_ParamLimits

0xbc33,	// (0x000152af) bg_list_pane_g1

0xbc4e,	// (0x000152ca) bg_list_pane_g2_ParamLimits

0xbc4e,	// (0x000152ca) bg_list_pane_g2

0xbc61,	// (0x000152dd) bg_list_pane_g3_ParamLimits

0xbc61,	// (0x000152dd) bg_list_pane_g3

0xbc73,	// (0x000152ef) bg_list_pane_g4_ParamLimits

0xbc73,	// (0x000152ef) bg_list_pane_g4

0xbc85,	// (0x00015301) bg_list_pane_g5_ParamLimits

0xbc85,	// (0x00015301) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x0001904e) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x0001904e) bg_list_pane_g

0xbb46,	// (0x000151c2) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double2_graphic_large_graphic_pane

0xbb46,	// (0x000151c2) list_double2_graphic_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double2_graphic_pane

0xbb46,	// (0x000151c2) list_double2_large_graphic_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double2_large_graphic_pane

0xbb46,	// (0x000151c2) list_double2_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double2_pane

0xbb46,	// (0x000151c2) list_double_graphic_heading_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_graphic_heading_pane

0xbb46,	// (0x000151c2) list_double_graphic_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_graphic_pane

0xbb46,	// (0x000151c2) list_double_heading_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_heading_pane

0xbb46,	// (0x000151c2) list_double_large_graphic_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_large_graphic_pane

0xbb46,	// (0x000151c2) list_double_number_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_number_pane

0xbb46,	// (0x000151c2) list_double_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_pane

0xbb46,	// (0x000151c2) list_double_time_pane_ParamLimits

0xbb46,	// (0x000151c2) list_double_time_pane

0xbb46,	// (0x000151c2) list_setting_number_pane_ParamLimits

0xbb46,	// (0x000151c2) list_setting_number_pane

0xbb46,	// (0x000151c2) list_setting_pane_ParamLimits

0xbb46,	// (0x000151c2) list_setting_pane

0xbba2,	// (0x0001521e) list_single_2graphic_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_2graphic_pane

0xbba2,	// (0x0001521e) list_single_graphic_heading_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_graphic_heading_pane

0xbba2,	// (0x0001521e) list_single_graphic_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_graphic_pane

0xbba2,	// (0x0001521e) list_single_heading_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_heading_pane

0xbc14,	// (0x00015290) list_single_large_graphic_pane_ParamLimits

0xbc14,	// (0x00015290) list_single_large_graphic_pane

0xbba2,	// (0x0001521e) list_single_number_heading_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_number_heading_pane

0xbba2,	// (0x0001521e) list_single_number_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_number_pane

0xbba2,	// (0x0001521e) list_single_pane_ParamLimits

0xbba2,	// (0x0001521e) list_single_pane

0x7946,	// (0x00010fc2) list_highlight_pane_cp1

0x825f,	// (0x000118db) list_single_pane_g1_ParamLimits

0x825f,	// (0x000118db) list_single_pane_g1

0x826b,	// (0x000118e7) list_single_pane_g2_ParamLimits

0x826b,	// (0x000118e7) list_single_pane_g2

0x0001,

0xf60c,	// (0x00018c88) list_single_pane_g_ParamLimits

0xf60c,	// (0x00018c88) list_single_pane_g

0xbaff,	// (0x0001517b) list_single_pane_t1_ParamLimits

0xbaff,	// (0x0001517b) list_single_pane_t1

0x825f,	// (0x000118db) list_single_number_pane_g1_ParamLimits

0x825f,	// (0x000118db) list_single_number_pane_g1

0x826b,	// (0x000118e7) list_single_number_pane_g2_ParamLimits

0x826b,	// (0x000118e7) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00018c88) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00018c88) list_single_number_pane_g

0xb88b,	// (0x00014f07) list_single_number_pane_t1_ParamLimits

0xb88b,	// (0x00014f07) list_single_number_pane_t1

0xb8a1,	// (0x00014f1d) list_single_number_pane_t2_ParamLimits

0xb8a1,	// (0x00014f1d) list_single_number_pane_t2

0x0001,

0xf993,	// (0x0001900f) list_single_number_pane_t_ParamLimits

0xf993,	// (0x0001900f) list_single_number_pane_t

0x8253,	// (0x000118cf) list_single_graphic_pane_g1_ParamLimits

0x8253,	// (0x000118cf) list_single_graphic_pane_g1

0x825f,	// (0x000118db) list_single_graphic_pane_g2_ParamLimits

0x825f,	// (0x000118db) list_single_graphic_pane_g2

0x826b,	// (0x000118e7) list_single_graphic_pane_g3_ParamLimits

0x826b,	// (0x000118e7) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00018c81) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00018c81) list_single_graphic_pane_g

0x8277,	// (0x000118f3) list_single_graphic_pane_t1_ParamLimits

0x8277,	// (0x000118f3) list_single_graphic_pane_t1

0x825f,	// (0x000118db) list_single_heading_pane_g1_ParamLimits

0x825f,	// (0x000118db) list_single_heading_pane_g1

0x826b,	// (0x000118e7) list_single_heading_pane_g2_ParamLimits

0x826b,	// (0x000118e7) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00018c88) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00018c88) list_single_heading_pane_g

0x828d,	// (0x00011909) list_single_heading_pane_t1_ParamLimits

0x828d,	// (0x00011909) list_single_heading_pane_t1

0x82a3,	// (0x0001191f) list_single_heading_pane_t2_ParamLimits

0x82a3,	// (0x0001191f) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00018c8d) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00018c8d) list_single_heading_pane_t

0x825f,	// (0x000118db) list_single_number_heading_pane_g1_ParamLimits

0x825f,	// (0x000118db) list_single_number_heading_pane_g1

0x826b,	// (0x000118e7) list_single_number_heading_pane_g2_ParamLimits

0x826b,	// (0x000118e7) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00018c88) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00018c88) list_single_number_heading_pane_g

0x828d,	// (0x00011909) list_single_number_heading_pane_t1_ParamLimits

0x828d,	// (0x00011909) list_single_number_heading_pane_t1

0x82b5,	// (0x00011931) list_single_number_heading_pane_t2_ParamLimits

0x82b5,	// (0x00011931) list_single_number_heading_pane_t2

0x82c7,	// (0x00011943) list_single_number_heading_pane_t3_ParamLimits

0x82c7,	// (0x00011943) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00018c92) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00018c92) list_single_number_heading_pane_t

0x82d9,	// (0x00011955) list_single_graphic_heading_pane_g1_ParamLimits

0x82d9,	// (0x00011955) list_single_graphic_heading_pane_g1

0x82e5,	// (0x00011961) list_single_graphic_heading_pane_g4_ParamLimits

0x82e5,	// (0x00011961) list_single_graphic_heading_pane_g4

0x826b,	// (0x000118e7) list_single_graphic_heading_pane_g5_ParamLimits

0x826b,	// (0x000118e7) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00018c99) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00018c99) list_single_graphic_heading_pane_g

0x828d,	// (0x00011909) list_single_graphic_heading_pane_t1_ParamLimits

0x828d,	// (0x00011909) list_single_graphic_heading_pane_t1

0x82f6,	// (0x00011972) list_single_graphic_heading_pane_t2_ParamLimits

0x82f6,	// (0x00011972) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00018ca0) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00018ca0) list_single_graphic_heading_pane_t

0x8308,	// (0x00011984) list_single_large_graphic_pane_g1_ParamLimits

0x8308,	// (0x00011984) list_single_large_graphic_pane_g1

0x8314,	// (0x00011990) list_single_large_graphic_pane_g2_ParamLimits

0x8314,	// (0x00011990) list_single_large_graphic_pane_g2

0x8320,	// (0x0001199c) list_single_large_graphic_pane_g3_ParamLimits

0x8320,	// (0x0001199c) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00018ca5) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00018ca5) list_single_large_graphic_pane_g

0xab4a,	// (0x000141c6) wait_border_pane_g2_copy1

0x832c,	// (0x000119a8) list_single_large_graphic_pane_g4_cp2

0x8334,	// (0x000119b0) list_single_large_graphic_pane_t1_ParamLimits

0x8334,	// (0x000119b0) list_single_large_graphic_pane_t1

0x834a,	// (0x000119c6) list_double_pane_g1_ParamLimits

0x834a,	// (0x000119c6) list_double_pane_g1

0x8356,	// (0x000119d2) list_double_pane_g2_ParamLimits

0x8356,	// (0x000119d2) list_double_pane_g2

0x0001,

0xf630,	// (0x00018cac) list_double_pane_g_ParamLimits

0xf630,	// (0x00018cac) list_double_pane_g

0x8362,	// (0x000119de) list_double_pane_t1_ParamLimits

0x8362,	// (0x000119de) list_double_pane_t1

0x8378,	// (0x000119f4) list_double_pane_t2_ParamLimits

0x8378,	// (0x000119f4) list_double_pane_t2

0x0001,

0xf635,	// (0x00018cb1) list_double_pane_t_ParamLimits

0xf635,	// (0x00018cb1) list_double_pane_t

0x838a,	// (0x00011a06) list_double2_pane_g1_ParamLimits

0x838a,	// (0x00011a06) list_double2_pane_g1

0x839b,	// (0x00011a17) list_double2_pane_g2_ParamLimits

0x839b,	// (0x00011a17) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00018cb6) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00018cb6) list_double2_pane_g

0x83a7,	// (0x00011a23) list_double2_pane_t1_ParamLimits

0x83a7,	// (0x00011a23) list_double2_pane_t1

0x83bd,	// (0x00011a39) list_double2_pane_t2_ParamLimits

0x83bd,	// (0x00011a39) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00018cbb) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00018cbb) list_double2_pane_t

0x834a,	// (0x000119c6) list_double_number_pane_g1_ParamLimits

0x834a,	// (0x000119c6) list_double_number_pane_g1

0x8356,	// (0x000119d2) list_double_number_pane_g2_ParamLimits

0x8356,	// (0x000119d2) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00018cac) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00018cac) list_double_number_pane_g

0x83cf,	// (0x00011a4b) list_double_number_pane_t1_ParamLimits

0x83cf,	// (0x00011a4b) list_double_number_pane_t1

0x83e1,	// (0x00011a5d) list_double_number_pane_t2_ParamLimits

0x83e1,	// (0x00011a5d) list_double_number_pane_t2

0x83f7,	// (0x00011a73) list_double_number_pane_t3_ParamLimits

0x83f7,	// (0x00011a73) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00018cc0) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00018cc0) list_double_number_pane_t

0x8409,	// (0x00011a85) list_double_graphic_pane_g1_ParamLimits

0x8409,	// (0x00011a85) list_double_graphic_pane_g1

0x8415,	// (0x00011a91) list_double_graphic_pane_g2_ParamLimits

0x8415,	// (0x00011a91) list_double_graphic_pane_g2

0x8424,	// (0x00011aa0) list_double_graphic_pane_g3_ParamLimits

0x8424,	// (0x00011aa0) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00018cc7) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00018cc7) list_double_graphic_pane_g

0x843c,	// (0x00011ab8) list_double_graphic_pane_t1_ParamLimits

0x843c,	// (0x00011ab8) list_double_graphic_pane_t1

0x8452,	// (0x00011ace) list_double_graphic_pane_t2_ParamLimits

0x8452,	// (0x00011ace) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00018cd0) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00018cd0) list_double_graphic_pane_t

0x8464,	// (0x00011ae0) list_double2_graphic_pane_g1_ParamLimits

0x8464,	// (0x00011ae0) list_double2_graphic_pane_g1

0x8470,	// (0x00011aec) list_double2_graphic_pane_g2_ParamLimits

0x8470,	// (0x00011aec) list_double2_graphic_pane_g2

0x839b,	// (0x00011a17) list_double2_graphic_pane_g3_ParamLimits

0x839b,	// (0x00011a17) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00018cd5) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00018cd5) list_double2_graphic_pane_g

0x847c,	// (0x00011af8) list_double2_graphic_pane_t1_ParamLimits

0x847c,	// (0x00011af8) list_double2_graphic_pane_t1

0x8492,	// (0x00011b0e) list_double2_graphic_pane_t2_ParamLimits

0x8492,	// (0x00011b0e) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00018cdc) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00018cdc) list_double2_graphic_pane_t

0x84a4,	// (0x00011b20) list_double_large_graphic_pane_g1_ParamLimits

0x84a4,	// (0x00011b20) list_double_large_graphic_pane_g1

0x84cd,	// (0x00011b49) list_double_large_graphic_pane_g2_ParamLimits

0x84cd,	// (0x00011b49) list_double_large_graphic_pane_g2

0x8356,	// (0x000119d2) list_double_large_graphic_pane_g3_ParamLimits

0x8356,	// (0x000119d2) list_double_large_graphic_pane_g3

0x84de,	// (0x00011b5a) list_double_large_graphic_pane_g4_ParamLimits

0x84de,	// (0x00011b5a) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00018ce1) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00018ce1) list_double_large_graphic_pane_g

0x8504,	// (0x00011b80) list_double_large_graphic_pane_t1_ParamLimits

0x8504,	// (0x00011b80) list_double_large_graphic_pane_t1

0x851d,	// (0x00011b99) list_double_large_graphic_pane_t2_ParamLimits

0x851d,	// (0x00011b99) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00018cec) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00018cec) list_double_large_graphic_pane_t

0x852f,	// (0x00011bab) list_double2_large_graphic_pane_g1_ParamLimits

0x852f,	// (0x00011bab) list_double2_large_graphic_pane_g1

0x838a,	// (0x00011a06) list_double2_large_graphic_pane_g2_ParamLimits

0x838a,	// (0x00011a06) list_double2_large_graphic_pane_g2

0x839b,	// (0x00011a17) list_double2_large_graphic_pane_g3_ParamLimits

0x839b,	// (0x00011a17) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00018cf1) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00018cf1) list_double2_large_graphic_pane_g

0x853b,	// (0x00011bb7) list_double2_large_graphic_pane_t1_ParamLimits

0x853b,	// (0x00011bb7) list_double2_large_graphic_pane_t1

0x8551,	// (0x00011bcd) list_double2_large_graphic_pane_t2_ParamLimits

0x8551,	// (0x00011bcd) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00018cf8) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00018cf8) list_double2_large_graphic_pane_t

0x8563,	// (0x00011bdf) list_double_heading_pane_g1_ParamLimits

0x8563,	// (0x00011bdf) list_double_heading_pane_g1

0x8574,	// (0x00011bf0) list_double_heading_pane_g2_ParamLimits

0x8574,	// (0x00011bf0) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00018cfd) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00018cfd) list_double_heading_pane_g

0x8580,	// (0x00011bfc) list_double_heading_pane_t1_ParamLimits

0x8580,	// (0x00011bfc) list_double_heading_pane_t1

0x83bd,	// (0x00011a39) list_double_heading_pane_t2_ParamLimits

0x83bd,	// (0x00011a39) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00018d02) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00018d02) list_double_heading_pane_t

0x8596,	// (0x00011c12) list_double_graphic_heading_pane_g1_ParamLimits

0x8596,	// (0x00011c12) list_double_graphic_heading_pane_g1

0x8563,	// (0x00011bdf) list_double_graphic_heading_pane_g2_ParamLimits

0x8563,	// (0x00011bdf) list_double_graphic_heading_pane_g2

0x8574,	// (0x00011bf0) list_double_graphic_heading_pane_g3_ParamLimits

0x8574,	// (0x00011bf0) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00018d07) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00018d07) list_double_graphic_heading_pane_g

0x85a2,	// (0x00011c1e) list_double_graphic_heading_pane_t1_ParamLimits

0x85a2,	// (0x00011c1e) list_double_graphic_heading_pane_t1

0x8492,	// (0x00011b0e) list_double_graphic_heading_pane_t2_ParamLimits

0x8492,	// (0x00011b0e) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00018d0e) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00018d0e) list_double_graphic_heading_pane_t

0x84cd,	// (0x00011b49) list_double_time_pane_g1_ParamLimits

0x84cd,	// (0x00011b49) list_double_time_pane_g1

0x8356,	// (0x000119d2) list_double_time_pane_g2_ParamLimits

0x8356,	// (0x000119d2) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00018d13) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00018d13) list_double_time_pane_g

0x85b8,	// (0x00011c34) list_double_time_pane_t1_ParamLimits

0x85b8,	// (0x00011c34) list_double_time_pane_t1

0x85ce,	// (0x00011c4a) list_double_time_pane_t2_ParamLimits

0x85ce,	// (0x00011c4a) list_double_time_pane_t2

0x85e0,	// (0x00011c5c) list_double_time_pane_t3_ParamLimits

0x85e0,	// (0x00011c5c) list_double_time_pane_t3

0x85f2,	// (0x00011c6e) list_double_time_pane_t4_ParamLimits

0x85f2,	// (0x00011c6e) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00018d18) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00018d18) list_double_time_pane_t

0x8470,	// (0x00011aec) list_setting_pane_g1_ParamLimits

0x8470,	// (0x00011aec) list_setting_pane_g1

0x839b,	// (0x00011a17) list_setting_pane_g2_ParamLimits

0x839b,	// (0x00011a17) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00018d21) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00018d21) list_setting_pane_g

0x8604,	// (0x00011c80) list_setting_pane_t1_ParamLimits

0x8604,	// (0x00011c80) list_setting_pane_t1

0x861b,	// (0x00011c97) list_setting_pane_t2_ParamLimits

0x861b,	// (0x00011c97) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00018d26) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00018d26) list_setting_pane_t

0x865a,	// (0x00011cd6) set_value_pane_cp_ParamLimits

0x865a,	// (0x00011cd6) set_value_pane_cp

0x8470,	// (0x00011aec) list_setting_number_pane_g1_ParamLimits

0x8470,	// (0x00011aec) list_setting_number_pane_g1

0x839b,	// (0x00011a17) list_setting_number_pane_g2_ParamLimits

0x839b,	// (0x00011a17) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00018d21) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00018d21) list_setting_number_pane_g

0x8666,	// (0x00011ce2) list_setting_number_pane_t1_ParamLimits

0x8666,	// (0x00011ce2) list_setting_number_pane_t1

0x867a,	// (0x00011cf6) list_setting_number_pane_t2_ParamLimits

0x867a,	// (0x00011cf6) list_setting_number_pane_t2

0x8691,	// (0x00011d0d) list_setting_number_pane_t3_ParamLimits

0x8691,	// (0x00011d0d) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00018d2d) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00018d2d) list_setting_number_pane_t

0x865a,	// (0x00011cd6) set_value_pane_ParamLimits

0x865a,	// (0x00011cd6) set_value_pane

0x86d4,	// (0x00011d50) bg_set_opt_pane_ParamLimits

0x86d4,	// (0x00011d50) bg_set_opt_pane

0x86f5,	// (0x00011d71) set_value_pane_t1

0x8703,	// (0x00011d7f) slider_set_pane_cp3

0x870c,	// (0x00011d88) volume_small_pane_cp

0x8715,	// (0x00011d91) list_form_gen_pane

0x871e,	// (0x00011d9a) scroll_pane_cp8

0x8737,	// (0x00011db3) form_field_data_pane_ParamLimits

0x8737,	// (0x00011db3) form_field_data_pane

0x8759,	// (0x00011dd5) form_field_data_wide_pane_ParamLimits

0x8759,	// (0x00011dd5) form_field_data_wide_pane

0x877c,	// (0x00011df8) form_field_popup_pane_ParamLimits

0x877c,	// (0x00011df8) form_field_popup_pane

0x879c,	// (0x00011e18) form_field_popup_wide_pane_ParamLimits

0x879c,	// (0x00011e18) form_field_popup_wide_pane

0x87b9,	// (0x00011e35) form_field_slider_pane_ParamLimits

0x87b9,	// (0x00011e35) form_field_slider_pane

0x87cc,	// (0x00011e48) form_field_slider_wide_pane_ParamLimits

0x87cc,	// (0x00011e48) form_field_slider_wide_pane

0x87df,	// (0x00011e5b) data_form_pane

0x87f5,	// (0x00011e71) form_field_data_pane_t1

0x880d,	// (0x00011e89) input_focus_pane

0x881b,	// (0x00011e97) data_form_wide_pane

0x8853,	// (0x00011ecf) form_field_data_wide_pane_t1

0x801d,	// (0x00011699) input_focus_pane_cp6

0x8875,	// (0x00011ef1) form_field_popup_pane_t1

0x880d,	// (0x00011e89) input_focus_pane_cp7

0x888d,	// (0x00011f09) list_form_pane

0x88a1,	// (0x00011f1d) form_field_popup_wide_pane_t1

0x880d,	// (0x00011e89) input_focus_pane_cp8

0x88b6,	// (0x00011f32) list_form_wide_pane

0x88cd,	// (0x00011f49) form_field_slider_pane_t1_ParamLimits

0x88cd,	// (0x00011f49) form_field_slider_pane_t1

0x88df,	// (0x00011f5b) form_field_slider_pane_t2_ParamLimits

0x88df,	// (0x00011f5b) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00018d3d) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00018d3d) form_field_slider_pane_t

0x7cbb,	// (0x00011337) input_focus_pane_cp9_ParamLimits

0x7cbb,	// (0x00011337) input_focus_pane_cp9

0x88f1,	// (0x00011f6d) slider_cont_pane_ParamLimits

0x88f1,	// (0x00011f6d) slider_cont_pane

0x8905,	// (0x00011f81) form_field_slider_wide_pane_t1_ParamLimits

0x8905,	// (0x00011f81) form_field_slider_wide_pane_t1

0x8917,	// (0x00011f93) form_field_slider_wide_pane_t2_ParamLimits

0x8917,	// (0x00011f93) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00018d42) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00018d42) form_field_slider_wide_pane_t

0x7cbb,	// (0x00011337) input_focus_pane_cp10_ParamLimits

0x7cbb,	// (0x00011337) input_focus_pane_cp10

0x8929,	// (0x00011fa5) slider_cont_pane_cp1_ParamLimits

0x8929,	// (0x00011fa5) slider_cont_pane_cp1

0x893d,	// (0x00011fb9) slider_form_pane_cp

0x8945,	// (0x00011fc1) input_focus_pane_g1

0x894d,	// (0x00011fc9) input_focus_pane_g2

0x8955,	// (0x00011fd1) input_focus_pane_g3

0x895d,	// (0x00011fd9) input_focus_pane_g4

0x8965,	// (0x00011fe1) input_focus_pane_g5

0x896d,	// (0x00011fe9) input_focus_pane_g6

0x8975,	// (0x00011ff1) input_focus_pane_g7

0x897d,	// (0x00011ff9) input_focus_pane_g8

0x8985,	// (0x00012001) input_focus_pane_g9

0x793c,	// (0x00010fb8) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00018d47) input_focus_pane_g

0xab53,	// (0x000141cf) wait_border_pane_g3_copy1

0x898d,	// (0x00012009) data_form_pane_t1

0x793c,	// (0x00010fb8) wait_anim_pane_g1_copy1

0xbae2,	// (0x0001515e) data_form_wide_pane_t1

0x89a8,	// (0x00012024) list_form_graphic_pane_cp_ParamLimits

0x89a8,	// (0x00012024) list_form_graphic_pane_cp

0xbab7,	// (0x00015133) slider_form_pane_g1

0xbac0,	// (0x0001513c) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x0001903f) slider_form_pane_g

0x89c1,	// (0x0001203d) list_form_graphic_pane_ParamLimits

0x89c1,	// (0x0001203d) list_form_graphic_pane

0x89dd,	// (0x00012059) list_form_graphic_pane_g1

0x89e5,	// (0x00012061) list_form_graphic_pane_t1_ParamLimits

0x89e5,	// (0x00012061) list_form_graphic_pane_t1

0x7a26,	// (0x000110a2) list_highlight_pane_cp5_ParamLimits

0x7a26,	// (0x000110a2) list_highlight_pane_cp5

0x89fa,	// (0x00012076) find_pane_g1

0x8a03,	// (0x0001207f) input_find_pane

0x8a0c,	// (0x00012088) input_find_pane_g1_ParamLimits

0x8a0c,	// (0x00012088) input_find_pane_g1

0x8a18,	// (0x00012094) input_find_pane_t1_ParamLimits

0x8a18,	// (0x00012094) input_find_pane_t1

0x8a2d,	// (0x000120a9) input_find_pane_t2_ParamLimits

0x8a2d,	// (0x000120a9) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00018d5c) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00018d5c) input_find_pane_t

0x8a42,	// (0x000120be) input_focus_pane_cp5_ParamLimits

0x8a42,	// (0x000120be) input_focus_pane_cp5

0x8a5c,	// (0x000120d8) bg_popup_window_pane_cp2_ParamLimits

0x8a5c,	// (0x000120d8) bg_popup_window_pane_cp2

0x8a69,	// (0x000120e5) listscroll_menu_pane_ParamLimits

0x8a69,	// (0x000120e5) listscroll_menu_pane

0x8a75,	// (0x000120f1) popup_submenu_window_ParamLimits

0x8a75,	// (0x000120f1) popup_submenu_window

0x8a9f,	// (0x0001211b) find_popup_pane_g1

0x8aa7,	// (0x00012123) input_popup_find_pane_cp

0x8a42,	// (0x000120be) input_focus_pane_cp4_ParamLimits

0x8a42,	// (0x000120be) input_focus_pane_cp4

0x8abd,	// (0x00012139) input_popup_find_pane_t1_ParamLimits

0x8abd,	// (0x00012139) input_popup_find_pane_t1

0x7946,	// (0x00010fc2) bg_popup_sub_pane_cp

0x8aeb,	// (0x00012167) listscroll_popup_sub_pane

0x8af3,	// (0x0001216f) list_submenu_pane_ParamLimits

0x8af3,	// (0x0001216f) list_submenu_pane

0x8b04,	// (0x00012180) scroll_pane_cp4

0x8b0c,	// (0x00012188) list_single_popup_submenu_pane_ParamLimits

0x8b0c,	// (0x00012188) list_single_popup_submenu_pane

0x8b20,	// (0x0001219c) list_single_popup_submenu_pane_g1

0x8b28,	// (0x000121a4) list_single_popup_submenu_pane_t1_ParamLimits

0x8b28,	// (0x000121a4) list_single_popup_submenu_pane_t1

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp1_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp1

0x8b3d,	// (0x000121b9) tabs_2_active_pane_g1

0x8b45,	// (0x000121c1) tabs_2_active_pane_t1

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp1_ParamLimits

0x7a26,	// (0x000110a2) bg_passive_tab_pane_cp1

0x8b3d,	// (0x000121b9) tabs_2_passive_pane_g1

0x8b45,	// (0x000121c1) tabs_2_passive_pane_t1

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp4

0x8b65,	// (0x000121e1) tabs_2_long_active_pane_t1

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp4

0x6819,	// (0x0000fe95) list_single_midp_graphic_pane_g4_ParamLimits

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp5

0x8b84,	// (0x00012200) tabs_3_long_active_pane_t1

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp5

0x6819,	// (0x0000fe95) list_single_midp_graphic_pane_g4

0x7a26,	// (0x000110a2) bg_popup_window_pane_cp13_ParamLimits

0x7a26,	// (0x000110a2) bg_popup_window_pane_cp13

0x8b9f,	// (0x0001221b) listscroll_popup_fast_pane_ParamLimits

0x8b9f,	// (0x0001221b) listscroll_popup_fast_pane

0x8bae,	// (0x0001222a) grid_popup_fast_pane_ParamLimits

0x8bae,	// (0x0001222a) grid_popup_fast_pane

0x8bc0,	// (0x0001223c) scroll_pane_cp9_ParamLimits

0x8bc0,	// (0x0001223c) scroll_pane_cp9

0xd869,	// (0x00016ee5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd869,	// (0x00016ee5) list_single_graphic_hl_pane_t1_cp2

0x8be4,	// (0x00012260) input_focus_pane_cp20_ParamLimits

0x8be4,	// (0x00012260) input_focus_pane_cp20

0x8bf2,	// (0x0001226e) query_popup_data_pane_t1_ParamLimits

0x8bf2,	// (0x0001226e) query_popup_data_pane_t1

0x8c05,	// (0x00012281) query_popup_data_pane_t2_ParamLimits

0x8c05,	// (0x00012281) query_popup_data_pane_t2

0x8c4b,	// (0x000122c7) query_popup_data_pane_t3_ParamLimits

0x8c4b,	// (0x000122c7) query_popup_data_pane_t3

0x8c8c,	// (0x00012308) query_popup_data_pane_t4_ParamLimits

0x8c8c,	// (0x00012308) query_popup_data_pane_t4

0x8cc8,	// (0x00012344) query_popup_data_pane_t5_ParamLimits

0x8cc8,	// (0x00012344) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00018d61) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00018d61) query_popup_data_pane_t

0x8945,	// (0x00011fc1) bg_set_opt_pane_g1

0x894d,	// (0x00011fc9) bg_set_opt_pane_g2

0x8955,	// (0x00011fd1) bg_set_opt_pane_g3

0x895d,	// (0x00011fd9) bg_set_opt_pane_g4

0x8965,	// (0x00011fe1) bg_set_opt_pane_g5

0x896d,	// (0x00011fe9) bg_set_opt_pane_g6

0x8975,	// (0x00011ff1) bg_set_opt_pane_g7

0x897d,	// (0x00011ff9) bg_set_opt_pane_g8

0x8985,	// (0x00012001) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00018d6c) bg_set_opt_pane_g

0x6411,	// (0x0000fa8d) control_top_pane_stacon_ParamLimits

0x6411,	// (0x0000fa8d) control_top_pane_stacon

0x6464,	// (0x0000fae0) signal_pane_stacon_ParamLimits

0x6464,	// (0x0000fae0) signal_pane_stacon

0x92f0,	// (0x0001296c) stacon_top_pane_g1_ParamLimits

0x92f0,	// (0x0001296c) stacon_top_pane_g1

0x6489,	// (0x0000fb05) title_pane_stacon_ParamLimits

0x6489,	// (0x0000fb05) title_pane_stacon

0x64b3,	// (0x0000fb2f) uni_indicator_pane_stacon_ParamLimits

0x64b3,	// (0x0000fb2f) uni_indicator_pane_stacon

0x64c8,	// (0x0000fb44) battery_pane_stacon_ParamLimits

0x64c8,	// (0x0000fb44) battery_pane_stacon

0x650c,	// (0x0000fb88) control_bottom_pane_stacon_ParamLimits

0x650c,	// (0x0000fb88) control_bottom_pane_stacon

0x652f,	// (0x0000fbab) navi_pane_stacon_ParamLimits

0x652f,	// (0x0000fbab) navi_pane_stacon

0x9312,	// (0x0001298e) stacon_bottom_pane_g1_ParamLimits

0x9312,	// (0x0001298e) stacon_bottom_pane_g1

0x6172,	// (0x0000f7ee) aid_levels_signal_lsc_ParamLimits

0x6172,	// (0x0000f7ee) aid_levels_signal_lsc

0x6189,	// (0x0000f805) signal_pane_stacon_g1_ParamLimits

0x6189,	// (0x0000f805) signal_pane_stacon_g1

0x619d,	// (0x0000f819) signal_pane_stacon_g2_ParamLimits

0x619d,	// (0x0000f819) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00018d7f) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00018d7f) signal_pane_stacon_g

0x61d2,	// (0x0000f84e) title_pane_stacon_t1_ParamLimits

0x61d2,	// (0x0000f84e) title_pane_stacon_t1

0x8d0c,	// (0x00012388) uni_indicator_pane_stacon_g1

0x8d16,	// (0x00012392) uni_indicator_pane_stacon_g2

0x8d20,	// (0x0001239c) uni_indicator_pane_stacon_g3

0x8d2a,	// (0x000123a6) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00018d8b) uni_indicator_pane_stacon_g

0x61f7,	// (0x0000f873) control_top_pane_stacon_g1

0x61ff,	// (0x0000f87b) control_top_pane_stacon_t1_ParamLimits

0x61ff,	// (0x0000f87b) control_top_pane_stacon_t1

0x6236,	// (0x0000f8b2) aid_levels_battery_lsc_ParamLimits

0x6236,	// (0x0000f8b2) aid_levels_battery_lsc

0x624e,	// (0x0000f8ca) battery_pane_stacon_g1_ParamLimits

0x624e,	// (0x0000f8ca) battery_pane_stacon_g1

0x6261,	// (0x0000f8dd) battery_pane_stacon_g2_ParamLimits

0x6261,	// (0x0000f8dd) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00018d94) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00018d94) battery_pane_stacon_g

0x629f,	// (0x0000f91b) navi_icon_pane_stacon

0x62b3,	// (0x0000f92f) navi_navi_pane_stacon

0x629f,	// (0x0000f91b) navi_text_pane_stacon

0x61f7,	// (0x0000f873) control_bottom_pane_stacon_g1

0x62c7,	// (0x0000f943) control_bottom_pane_stacon_t1_ParamLimits

0x62c7,	// (0x0000f943) control_bottom_pane_stacon_t1

0x8d4e,	// (0x000123ca) grid_app_pane_ParamLimits

0x8d4e,	// (0x000123ca) grid_app_pane

0x8d72,	// (0x000123ee) scroll_pane_cp15_ParamLimits

0x8d72,	// (0x000123ee) scroll_pane_cp15

0x8d87,	// (0x00012403) cell_app_pane_ParamLimits

0x8d87,	// (0x00012403) cell_app_pane

0x8dab,	// (0x00012427) cell_app_pane_g1_ParamLimits

0x8dab,	// (0x00012427) cell_app_pane_g1

0x8dcf,	// (0x0001244b) cell_app_pane_g2_ParamLimits

0x8dcf,	// (0x0001244b) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00018d99) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00018d99) cell_app_pane_g

0x8ddb,	// (0x00012457) cell_app_pane_t1_ParamLimits

0x8ddb,	// (0x00012457) cell_app_pane_t1

0x8ded,	// (0x00012469) grid_highlight_pane_ParamLimits

0x8ded,	// (0x00012469) grid_highlight_pane

0x8945,	// (0x00011fc1) cell_highlight_pane_g1

0x894d,	// (0x00011fc9) cell_highlight_pane_g2

0x8955,	// (0x00011fd1) cell_highlight_pane_g3

0x895d,	// (0x00011fd9) cell_highlight_pane_g4

0x8965,	// (0x00011fe1) cell_highlight_pane_g5

0x896d,	// (0x00011fe9) cell_highlight_pane_g6

0x8975,	// (0x00011ff1) cell_highlight_pane_g7

0x897d,	// (0x00011ff9) cell_highlight_pane_g8

0x8985,	// (0x00012001) cell_highlight_pane_g9

0x793c,	// (0x00010fb8) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00018d47) cell_highlight_pane_g

0x8dfe,	// (0x0001247a) bg_scroll_pane

0x6311,	// (0x0000f98d) scroll_handle_pane

0x8e45,	// (0x000124c1) scroll_bg_pane_g1

0x8e5a,	// (0x000124d6) scroll_bg_pane_g2

0x8e72,	// (0x000124ee) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00018d9e) scroll_bg_pane_g

0x8e87,	// (0x00012503) scroll_handle_focus_pane_ParamLimits

0x8e87,	// (0x00012503) scroll_handle_focus_pane

0x8e45,	// (0x000124c1) scroll_handle_pane_g1

0x8e94,	// (0x00012510) scroll_handle_pane_g2

0x8e72,	// (0x000124ee) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00018da5) scroll_handle_pane_g

0x8a42,	// (0x000120be) bg_popup_sub_pane_cp21_ParamLimits

0x8a42,	// (0x000120be) bg_popup_sub_pane_cp21

0x8ea8,	// (0x00012524) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ea8,	// (0x00012524) popup_fep_japan_predictive_window_t1

0x8ec2,	// (0x0001253e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8ec2,	// (0x0001253e) popup_fep_japan_predictive_window_t2

0x8ef5,	// (0x00012571) popup_fep_japan_predictive_window_t3_ParamLimits

0x8ef5,	// (0x00012571) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00018dac) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00018dac) popup_fep_japan_predictive_window_t

0x7946,	// (0x00010fc2) bg_popup_sub_pane_cp23

0x8f2c,	// (0x000125a8) listscroll_japin_cand_pane

0x8f34,	// (0x000125b0) popup_fep_japan_candidate_window_t1

0x8f42,	// (0x000125be) candidate_pane_ParamLimits

0x8f42,	// (0x000125be) candidate_pane

0x8f54,	// (0x000125d0) scroll_pane_cp30

0x8f5c,	// (0x000125d8) list_single_popup_jap_candidate_pane_ParamLimits

0x8f5c,	// (0x000125d8) list_single_popup_jap_candidate_pane

0x7946,	// (0x00010fc2) list_highlight_pane_cp30

0x8f71,	// (0x000125ed) list_single_popup_jap_candidate_pane_t1

0x8f80,	// (0x000125fc) level_1_signal

0x8f8d,	// (0x00012609) level_2_signal

0x8f9a,	// (0x00012616) level_3_signal

0x8fa7,	// (0x00012623) level_4_signal

0x8fb4,	// (0x00012630) level_5_signal

0x8fc1,	// (0x0001263d) level_6_signal

0x8fce,	// (0x0001264a) level_7_signal

0x8f80,	// (0x000125fc) level_1_battery

0x8f8d,	// (0x00012609) level_2_battery

0x8f9a,	// (0x00012616) level_3_battery

0x8fa7,	// (0x00012623) level_4_battery

0x8fb4,	// (0x00012630) level_5_battery

0x8fc1,	// (0x0001263d) level_6_battery

0x8fce,	// (0x0001264a) level_7_battery

0x8ff3,	// (0x0001266f) list_menu_pane_ParamLimits

0x8ff3,	// (0x0001266f) list_menu_pane

0x9004,	// (0x00012680) scroll_pane_cp25_ParamLimits

0x9004,	// (0x00012680) scroll_pane_cp25

0x901d,	// (0x00012699) list_double2_graphic_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double2_graphic_pane_cp2

0x901d,	// (0x00012699) list_double2_large_graphic_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double2_large_graphic_pane_cp2

0x901d,	// (0x00012699) list_double2_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double2_pane_cp2

0x901d,	// (0x00012699) list_double_graphic_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double_graphic_pane_cp2

0x901d,	// (0x00012699) list_double_large_graphic_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double_large_graphic_pane_cp2

0x901d,	// (0x00012699) list_double_number_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double_number_pane_cp2

0x901d,	// (0x00012699) list_double_pane_cp2_ParamLimits

0x901d,	// (0x00012699) list_double_pane_cp2

0x9041,	// (0x000126bd) list_single_2graphic_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_2graphic_pane_cp2

0x9041,	// (0x000126bd) list_single_graphic_heading_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_graphic_heading_pane_cp2

0x9041,	// (0x000126bd) list_single_graphic_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_graphic_pane_cp2

0x9041,	// (0x000126bd) list_single_heading_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_heading_pane_cp2

0x905a,	// (0x000126d6) list_single_large_graphic_pane_cp2_ParamLimits

0x905a,	// (0x000126d6) list_single_large_graphic_pane_cp2

0x9041,	// (0x000126bd) list_single_number_heading_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_number_heading_pane_cp2

0x9041,	// (0x000126bd) list_single_number_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_number_pane_cp2

0x9041,	// (0x000126bd) list_single_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_pane_cp2

0x90b0,	// (0x0001272c) bg_popup_sub_pane_cp22

0x63c3,	// (0x0000fa3f) popup_side_volume_key_window_g1

0x63ed,	// (0x0000fa69) popup_side_volume_key_window_t1

0x6409,	// (0x0000fa85) volume_small_pane_cp1

0x7cbb,	// (0x00011337) bg_popup_sub_pane_cp24_ParamLimits

0x7cbb,	// (0x00011337) bg_popup_sub_pane_cp24

0x90c6,	// (0x00012742) fep_china_uni_candidate_pane_ParamLimits

0x90c6,	// (0x00012742) fep_china_uni_candidate_pane

0x90da,	// (0x00012756) fep_china_uni_entry_pane

0x90ea,	// (0x00012766) popup_fep_china_uni_window_g1

0x9106,	// (0x00012782) fep_china_uni_entry_pane_g1

0x910e,	// (0x0001278a) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00018dd9) fep_china_uni_entry_pane_g

0x9116,	// (0x00012792) fep_entry_item_pane

0x9120,	// (0x0001279c) fep_candidate_item_pane

0x9128,	// (0x000127a4) fep_china_uni_candidate_pane_g1

0x9130,	// (0x000127ac) fep_china_uni_candidate_pane_g2

0x9138,	// (0x000127b4) fep_china_uni_candidate_pane_g3

0x9140,	// (0x000127bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00018dde) fep_china_uni_candidate_pane_g

0x793c,	// (0x00010fb8) fep_entry_item_pane_g1

0x9148,	// (0x000127c4) fep_entry_item_pane_t1_ParamLimits

0x9148,	// (0x000127c4) fep_entry_item_pane_t1

0x915e,	// (0x000127da) fep_candidate_item_pane_t1_ParamLimits

0x915e,	// (0x000127da) fep_candidate_item_pane_t1

0x9173,	// (0x000127ef) fep_candidate_item_pane_t2_ParamLimits

0x9173,	// (0x000127ef) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00018de7) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00018de7) fep_candidate_item_pane_t

0x7a26,	// (0x000110a2) list_highlight_pane_cp31_ParamLimits

0x7a26,	// (0x000110a2) list_highlight_pane_cp31

0x9185,	// (0x00012801) level_1_signal_lsc

0x918e,	// (0x0001280a) level_2_signal_lsc

0x9197,	// (0x00012813) level_3_signal_lsc

0x91a0,	// (0x0001281c) level_4_signal_lsc

0x91a9,	// (0x00012825) level_5_signal_lsc

0x91b2,	// (0x0001282e) level_6_signal_lsc

0x91bb,	// (0x00012837) level_7_signal_lsc

0x91bb,	// (0x00012837) level_1_battery_lsc

0x91c4,	// (0x00012840) level_2_battery_lsc

0x91cd,	// (0x00012849) level_3_battery_lsc

0x91d6,	// (0x00012852) level_4_battery_lsc

0x91df,	// (0x0001285b) level_5_battery_lsc

0x91e8,	// (0x00012864) level_6_battery_lsc

0x9185,	// (0x00012801) level_7_battery_lsc

0x91f1,	// (0x0001286d) scroll_handle_focus_pane_g1

0x91fa,	// (0x00012876) scroll_handle_focus_pane_g2

0x9203,	// (0x0001287f) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00018dec) scroll_handle_focus_pane_g

0x920c,	// (0x00012888) list_single_2graphic_pane_g1_ParamLimits

0x920c,	// (0x00012888) list_single_2graphic_pane_g1

0x82e5,	// (0x00011961) list_single_2graphic_pane_g2_ParamLimits

0x82e5,	// (0x00011961) list_single_2graphic_pane_g2

0x826b,	// (0x000118e7) list_single_2graphic_pane_g3_ParamLimits

0x826b,	// (0x000118e7) list_single_2graphic_pane_g3

0x9218,	// (0x00012894) list_single_2graphic_pane_g4_ParamLimits

0x9218,	// (0x00012894) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x00018df3) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x00018df3) list_single_2graphic_pane_g

0x9229,	// (0x000128a5) list_single_2graphic_pane_t1_ParamLimits

0x9229,	// (0x000128a5) list_single_2graphic_pane_t1

0x9257,	// (0x000128d3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9257,	// (0x000128d3) list_double2_graphic_large_graphic_pane_g1

0x838a,	// (0x00011a06) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x838a,	// (0x00011a06) list_double2_graphic_large_graphic_pane_g2

0x839b,	// (0x00011a17) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x839b,	// (0x00011a17) list_double2_graphic_large_graphic_pane_g3

0x9267,	// (0x000128e3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9267,	// (0x000128e3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00018dfc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00018dfc) list_double2_graphic_large_graphic_pane_g

0x9273,	// (0x000128ef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9273,	// (0x000128ef) list_double2_graphic_large_graphic_pane_t1

0x9289,	// (0x00012905) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9289,	// (0x00012905) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x00018e05) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x00018e05) list_double2_graphic_large_graphic_pane_t

0x93da,	// (0x00012a56) popup_fast_swap_window_ParamLimits

0x93da,	// (0x00012a56) popup_fast_swap_window

0x93f6,	// (0x00012a72) popup_side_volume_key_window

0x9412,	// (0x00012a8e) stacon_top_pane

0x941c,	// (0x00012a98) status_pane_ParamLimits

0x941c,	// (0x00012a98) status_pane

0x9412,	// (0x00012a8e) status_small_pane

0x7946,	// (0x00010fc2) control_pane

0x7946,	// (0x00010fc2) stacon_bottom_pane

0x871e,	// (0x00011d9a) scroll_pane_cp121

0x8715,	// (0x00011d91) set_content_pane

0x929b,	// (0x00012917) bg_active_tab_pane_g1_cp1

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp1

0x92ad,	// (0x00012929) bg_active_tab_pane_g3_cp1

0x929b,	// (0x00012917) bg_passive_tab_pane_g1_cp1

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp1

0x92ad,	// (0x00012929) bg_passive_tab_pane_g3_cp1

0x92b6,	// (0x00012932) bg_active_tab_pane_g1_cp2

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp2

0x92bf,	// (0x0001293b) bg_active_tab_pane_g3_cp2

0x92b6,	// (0x00012932) bg_passive_tab_pane_g1_cp2

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp2

0x92bf,	// (0x0001293b) bg_passive_tab_pane_g3_cp2

0x92c8,	// (0x00012944) bg_active_tab_pane_g1_cp3

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp3

0x92d1,	// (0x0001294d) bg_active_tab_pane_g3_cp3

0x92c8,	// (0x00012944) bg_passive_tab_pane_g1_cp3

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp3

0x92d1,	// (0x0001294d) bg_passive_tab_pane_g3_cp3

0x92da,	// (0x00012956) bg_active_tab_pane_g1_cp4

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp4

0x92e5,	// (0x00012961) bg_active_tab_pane_g3_cp4

0x92da,	// (0x00012956) bg_passive_tab_pane_g1_cp4

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp4

0x92e5,	// (0x00012961) bg_passive_tab_pane_g3_cp4

0x932e,	// (0x000129aa) bg_active_tab_pane_g1_cp5

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp5

0x9337,	// (0x000129b3) bg_active_tab_pane_g3_cp5

0x932e,	// (0x000129aa) bg_passive_tab_pane_g1_cp5

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp5

0x9337,	// (0x000129b3) bg_passive_tab_pane_g3_cp5

0x9340,	// (0x000129bc) list_set_graphic_pane_ParamLimits

0x9340,	// (0x000129bc) list_set_graphic_pane

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp4

0x935d,	// (0x000129d9) list_set_graphic_pane_g1_ParamLimits

0x935d,	// (0x000129d9) list_set_graphic_pane_g1

0x9369,	// (0x000129e5) list_set_graphic_pane_g2_ParamLimits

0x9369,	// (0x000129e5) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00018e0a) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00018e0a) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x00019167) volume_small_pane_cp_g

0x938d,	// (0x00012a09) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x938d,	// (0x00012a09) list_double2_large_graphic_pane_g1_cp2

0x9399,	// (0x00012a15) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9399,	// (0x00012a15) list_double2_large_graphic_pane_g2_cp2

0x93aa,	// (0x00012a26) list_double2_large_graphic_pane_g3_cp2

0x93b2,	// (0x00012a2e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x93b2,	// (0x00012a2e) list_double2_large_graphic_pane_t1_cp2

0x93c8,	// (0x00012a44) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x93c8,	// (0x00012a44) list_double2_large_graphic_pane_t2_cp2

0xb62c,	// (0x00014ca8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb62c,	// (0x00014ca8) list_double_large_graphic_pane_g1_cp2

0xb63d,	// (0x00014cb9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb63d,	// (0x00014cb9) list_double_large_graphic_pane_g2_cp2

0x9538,	// (0x00012bb4) list_double_large_graphic_pane_g3_cp2

0xb64e,	// (0x00014cca) list_double_large_graphic_pane_g4_cp

0xb656,	// (0x00014cd2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb656,	// (0x00014cd2) list_double_large_graphic_pane_t1_cp2

0xb66d,	// (0x00014ce9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb66d,	// (0x00014ce9) list_double_large_graphic_pane_t2_cp2

0x942a,	// (0x00012aa6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x942a,	// (0x00012aa6) list_double2_graphic_pane_g1_cp2

0x9438,	// (0x00012ab4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9438,	// (0x00012ab4) list_double2_graphic_pane_g2_cp2

0x9449,	// (0x00012ac5) list_double2_graphic_pane_g3_cp2

0x9453,	// (0x00012acf) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9453,	// (0x00012acf) list_double2_graphic_pane_t1_cp2

0x9469,	// (0x00012ae5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9469,	// (0x00012ae5) list_double2_graphic_pane_t2_cp2

0x947b,	// (0x00012af7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x947b,	// (0x00012af7) list_single_number_heading_pane_g1_cp2

0x9487,	// (0x00012b03) list_single_number_heading_pane_g2_cp2

0x948f,	// (0x00012b0b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x948f,	// (0x00012b0b) list_single_number_heading_pane_t1_cp2

0x94a5,	// (0x00012b21) list_single_number_heading_pane_t2_cp2_ParamLimits

0x94a5,	// (0x00012b21) list_single_number_heading_pane_t2_cp2

0x94b7,	// (0x00012b33) list_single_number_heading_pane_t3_cp2_ParamLimits

0x94b7,	// (0x00012b33) list_single_number_heading_pane_t3_cp2

0x947b,	// (0x00012af7) list_single_heading_pane_g1_cp2_ParamLimits

0x947b,	// (0x00012af7) list_single_heading_pane_g1_cp2

0x9487,	// (0x00012b03) list_single_heading_pane_g2_cp2

0x948f,	// (0x00012b0b) list_single_heading_pane_t1_cp2_ParamLimits

0x948f,	// (0x00012b0b) list_single_heading_pane_t1_cp2

0xb434,	// (0x00014ab0) list_single_heading_pane_t2_cp2_ParamLimits

0xb434,	// (0x00014ab0) list_single_heading_pane_t2_cp2

0xb376,	// (0x000149f2) list_double_graphic_pane_g1_cp2_ParamLimits

0xb376,	// (0x000149f2) list_double_graphic_pane_g1_cp2

0xb382,	// (0x000149fe) list_double_graphic_pane_g2_cp2_ParamLimits

0xb382,	// (0x000149fe) list_double_graphic_pane_g2_cp2

0xb391,	// (0x00014a0d) list_double_graphic_pane_g3_cp2

0xb399,	// (0x00014a15) list_double_graphic_pane_t1_cp2_ParamLimits

0xb399,	// (0x00014a15) list_double_graphic_pane_t1_cp2

0xb3af,	// (0x00014a2b) list_double_graphic_pane_t2_cp2_ParamLimits

0xb3af,	// (0x00014a2b) list_double_graphic_pane_t2_cp2

0x952c,	// (0x00012ba8) list_double_number_pane_g1_cp2_ParamLimits

0x952c,	// (0x00012ba8) list_double_number_pane_g1_cp2

0x9538,	// (0x00012bb4) list_double_number_pane_g2_cp2

0xb33a,	// (0x000149b6) list_double_number_pane_t1_cp2_ParamLimits

0xb33a,	// (0x000149b6) list_double_number_pane_t1_cp2

0xb34e,	// (0x000149ca) list_double_number_pane_t2_cp2_ParamLimits

0xb34e,	// (0x000149ca) list_double_number_pane_t2_cp2

0xb364,	// (0x000149e0) list_double_number_pane_t3_cp2_ParamLimits

0xb364,	// (0x000149e0) list_double_number_pane_t3_cp2

0xb223,	// (0x0001489f) list_single_graphic_pane_g1_cp2_ParamLimits

0xb223,	// (0x0001489f) list_single_graphic_pane_g1_cp2

0x9590,	// (0x00012c0c) list_single_graphic_pane_g2_cp2_ParamLimits

0x9590,	// (0x00012c0c) list_single_graphic_pane_g2_cp2

0x959c,	// (0x00012c18) list_single_graphic_pane_g3_cp2

0xb1f9,	// (0x00014875) list_single_graphic_pane_t1_cp2_ParamLimits

0xb1f9,	// (0x00014875) list_single_graphic_pane_t1_cp2

0x9590,	// (0x00012c0c) list_single_number_pane_g1_cp2_ParamLimits

0x9590,	// (0x00012c0c) list_single_number_pane_g1_cp2

0x959c,	// (0x00012c18) list_single_number_pane_g2_cp2

0xb1f9,	// (0x00014875) list_single_number_pane_t1_cp2_ParamLimits

0xb1f9,	// (0x00014875) list_single_number_pane_t1_cp2

0xb20f,	// (0x0001488b) list_single_number_pane_t2_cp2_ParamLimits

0xb20f,	// (0x0001488b) list_single_number_pane_t2_cp2

0x9399,	// (0x00012a15) list_double2_pane_g1_cp2_ParamLimits

0x9399,	// (0x00012a15) list_double2_pane_g1_cp2

0x93aa,	// (0x00012a26) list_double2_pane_g2_cp2

0x9504,	// (0x00012b80) list_double2_pane_t1_cp2_ParamLimits

0x9504,	// (0x00012b80) list_double2_pane_t1_cp2

0x951a,	// (0x00012b96) list_double2_pane_t2_cp2_ParamLimits

0x951a,	// (0x00012b96) list_double2_pane_t2_cp2

0x952c,	// (0x00012ba8) list_double_pane_g1_cp2_ParamLimits

0x952c,	// (0x00012ba8) list_double_pane_g1_cp2

0x9538,	// (0x00012bb4) list_double_pane_g2_cp2

0x9540,	// (0x00012bbc) list_double_pane_t1_cp2_ParamLimits

0x9540,	// (0x00012bbc) list_double_pane_t1_cp2

0x9556,	// (0x00012bd2) list_double_pane_t2_cp2_ParamLimits

0x9556,	// (0x00012bd2) list_double_pane_t2_cp2

0x9580,	// (0x00012bfc) list_single_pane_cp2_g3

0x9590,	// (0x00012c0c) list_single_pane_g1_cp2_ParamLimits

0x9590,	// (0x00012c0c) list_single_pane_g1_cp2

0x959c,	// (0x00012c18) list_single_pane_g2_cp2

0x95a4,	// (0x00012c20) list_single_pane_t1_cp2_ParamLimits

0x95a4,	// (0x00012c20) list_single_pane_t1_cp2

0x95bc,	// (0x00012c38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x95bc,	// (0x00012c38) list_single_large_graphic_pane_g1_cp2

0x95c8,	// (0x00012c44) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x95c8,	// (0x00012c44) list_single_large_graphic_pane_g2_cp2

0x95d4,	// (0x00012c50) list_single_large_graphic_pane_g3_cp2

0x95dc,	// (0x00012c58) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x95dc,	// (0x00012c58) list_single_large_graphic_pane_g4_cp1

0x95f6,	// (0x00012c72) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x95f6,	// (0x00012c72) list_single_large_graphic_pane_t1_cp2

0xb1c5,	// (0x00014841) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb1c5,	// (0x00014841) list_single_graphic_heading_pane_g1_cp2

0xb192,	// (0x0001480e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb192,	// (0x0001480e) list_single_graphic_heading_pane_g4_cp2

0x959c,	// (0x00012c18) list_single_graphic_heading_pane_g5_cp2

0xb1d1,	// (0x0001484d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb1d1,	// (0x0001484d) list_single_graphic_heading_pane_t1_cp2

0xb1e7,	// (0x00014863) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb1e7,	// (0x00014863) list_single_graphic_heading_pane_t2_cp2

0xb186,	// (0x00014802) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb186,	// (0x00014802) list_single_2graphic_pane_g1_cp2

0xb192,	// (0x0001480e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb192,	// (0x0001480e) list_single_2graphic_pane_g2_cp2

0x959c,	// (0x00012c18) list_single_2graphic_pane_g3_cp2

0xb1a3,	// (0x0001481f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb1a3,	// (0x0001481f) list_single_2graphic_pane_g4_cp2

0xb1af,	// (0x0001482b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb1af,	// (0x0001482b) list_single_2graphic_pane_t1_cp2

0x793c,	// (0x00010fb8) list_highlight_pane_g10_cp1

0xad5e,	// (0x000143da) list_highlight_pane_g1_cp1

0xad66,	// (0x000143e2) list_highlight_pane_g2_cp1

0xad6e,	// (0x000143ea) list_highlight_pane_g3_cp1

0xad76,	// (0x000143f2) list_highlight_pane_g4_cp1

0xad7e,	// (0x000143fa) list_highlight_pane_g5_cp1

0xad86,	// (0x00014402) list_highlight_pane_g6_cp1

0xad8e,	// (0x0001440a) list_highlight_pane_g7_cp1

0xad96,	// (0x00014412) list_highlight_pane_g8_cp1

0xad9e,	// (0x0001441a) list_highlight_pane_g9_cp1

0xac7e,	// (0x000142fa) form_field_slider_pane_t3

0xac8c,	// (0x00014308) form_field_slider_pane_t4

0xac9a,	// (0x00014316) slider_form_pane_ParamLimits

0xac9a,	// (0x00014316) slider_form_pane

0x7946,	// (0x00010fc2) control_abbreviations

0x7946,	// (0x00010fc2) control_conventions

0x7946,	// (0x00010fc2) control_definitions

0x7946,	// (0x00010fc2) format_table_attribute

0xb47e,	// (0x00014afa) bg_popup_preview_window_pane_g9

0x7946,	// (0x00010fc2) format_table_data2

0x7946,	// (0x00010fc2) format_table_data3

0x7946,	// (0x00010fc2) format_table_data_example

0x0008,

0x7946,	// (0x00010fc2) intro_purpose

0xf923,	// (0x00018f9f) bg_popup_preview_window_pane_g

0x7946,	// (0x00010fc2) texts_category

0x7946,	// (0x00010fc2) texts_graphics

0x960c,	// (0x00012c88) text_digital

0x961b,	// (0x00012c97) text_primary

0x962a,	// (0x00012ca6) text_primary_small

0x9639,	// (0x00012cb5) text_secondary

0x9648,	// (0x00012cc4) text_title

0xbca5,	// (0x00015321) bg_passive_tab_pane_g1_cp3_srt

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp3_srt

0xbcae,	// (0x0001532a) bg_passive_tab_pane_g3_cp3_srt

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp3_srt_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp3_srt

0xbcb7,	// (0x00015333) tabs_4_active_pane_srt_g1

0xbcbf,	// (0x0001533b) tabs_4_active_pane_srt_t1_ParamLimits

0xbcbf,	// (0x0001533b) tabs_4_active_pane_srt_t1

0xbca5,	// (0x00015321) bg_active_tab_pane_g1_cp3_copy1

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp3_copy1

0xbcae,	// (0x0001532a) bg_active_tab_pane_g3_cp3_copy1

0x7a26,	// (0x000110a2) tabs_2_long_active_pane_srt_ParamLimits

0x7a26,	// (0x000110a2) tabs_2_long_active_pane_srt

0x7a26,	// (0x000110a2) tabs_2_long_passive_pane_srt_ParamLimits

0x7a26,	// (0x000110a2) tabs_2_long_passive_pane_srt

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp4_srt

0xb8ea,	// (0x00014f66) bg_passive_tab_pane_g1_cp4_srt

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp4_srt

0xb8f3,	// (0x00014f6f) bg_passive_tab_pane_g3_cp4_srt

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp4_srt_ParamLimits

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp4_srt

0xb8fc,	// (0x00014f78) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb8fc,	// (0x00014f78) tabs_2_long_active_pane_srt_t1

0xb8ea,	// (0x00014f66) bg_active_tab_pane_g1_cp4_srt

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp4_srt

0xb8f3,	// (0x00014f6f) bg_active_tab_pane_g3_cp4_srt

0x7cbb,	// (0x00011337) tabs_3_long_active_pane_srt_ParamLimits

0x7cbb,	// (0x00011337) tabs_3_long_active_pane_srt

0x7cbb,	// (0x00011337) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7cbb,	// (0x00011337) tabs_3_long_passive_pane_cp_srt

0x7cbb,	// (0x00011337) tabs_3_long_passive_pane_srt_ParamLimits

0x7cbb,	// (0x00011337) tabs_3_long_passive_pane_srt

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp5_srt

0x932e,	// (0x000129aa) bg_passive_tab_pane_g1_cp5_srt

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp5_srt

0x9337,	// (0x000129b3) bg_passive_tab_pane_g3_cp5_srt

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp5_srt_ParamLimits

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp5_srt

0xb8d8,	// (0x00014f54) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb8d8,	// (0x00014f54) tabs_3_long_active_pane_srt_t1

0x932e,	// (0x000129aa) bg_active_tab_pane_g1_cp5_srt

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp5_srt

0x9337,	// (0x000129b3) bg_active_tab_pane_g3_cp5_srt

0xb8ca,	// (0x00014f46) navi_text_pane_srt_t1

0xb8c2,	// (0x00014f3e) navi_icon_pane_srt_g1

0x981b,	// (0x00012e97) midp_editing_number_pane_srt

0x9657,	// (0x00012cd3) midp_ticker_pane_srt

0x9823,	// (0x00012e9f) midp_ticker_pane_srt_g1

0x982b,	// (0x00012ea7) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00018e29) midp_ticker_pane_srt_g

0x9833,	// (0x00012eaf) midp_ticker_pane_srt_t1

0xb8b3,	// (0x00014f2f) midp_editing_number_pane_t1_copy1

0x965f,	// (0x00012cdb) listscroll_midp_pane

0x965f,	// (0x00012cdb) midp_form_pane

0x96cd,	// (0x00012d49) midp_info_popup_window_ParamLimits

0x96cd,	// (0x00012d49) midp_info_popup_window

0x8a42,	// (0x000120be) bg_popup_sub_pane_cp50_ParamLimits

0x8a42,	// (0x000120be) bg_popup_sub_pane_cp50

0xa9c7,	// (0x00014043) listscroll_midp_info_pane_ParamLimits

0xa9c7,	// (0x00014043) listscroll_midp_info_pane

0xa9af,	// (0x0001402b) listscroll_form_midp_pane_ParamLimits

0xa9af,	// (0x0001402b) listscroll_form_midp_pane

0xa9bb,	// (0x00014037) scroll_bar_cp050

0xa98f,	// (0x0001400b) list_midp_pane

0xc894,	// (0x00015f10) signal_pane_g2_cp

0xa8c9,	// (0x00013f45) listscroll_midp_info_pane_t1_ParamLimits

0xa8c9,	// (0x00013f45) listscroll_midp_info_pane_t1

0xa8e1,	// (0x00013f5d) listscroll_midp_info_pane_t2_ParamLimits

0xa8e1,	// (0x00013f5d) listscroll_midp_info_pane_t2

0xa91f,	// (0x00013f9b) listscroll_midp_info_pane_t3_ParamLimits

0xa91f,	// (0x00013f9b) listscroll_midp_info_pane_t3

0xa959,	// (0x00013fd5) listscroll_midp_info_pane_t4_ParamLimits

0xa959,	// (0x00013fd5) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x00018eda) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x00018eda) listscroll_midp_info_pane_t

0x8b04,	// (0x00012180) scroll_pane_cp21

0xa867,	// (0x00013ee3) form_midp_field_choice_group_pane

0xa870,	// (0x00013eec) form_midp_field_text_pane

0xa8af,	// (0x00013f2b) form_midp_field_time_pane

0xa8b7,	// (0x00013f33) form_midp_gauge_slider_pane

0xa8c0,	// (0x00013f3c) form_midp_gauge_wait_pane

0x7946,	// (0x00010fc2) form_midp_image_pane

0xa838,	// (0x00013eb4) list_single_midp_pane_ParamLimits

0xa838,	// (0x00013eb4) list_single_midp_pane

0xa7f0,	// (0x00013e6c) form_midp_field_text_pane_t1

0xa5d3,	// (0x00013c4f) input_focus_pane_cp050

0xa827,	// (0x00013ea3) list_midp_form_text_pane

0xa7bf,	// (0x00013e3b) form_midp_field_choice_group_pane_t1

0xa7cd,	// (0x00013e49) input_focus_pane_cp051

0xa7e1,	// (0x00013e5d) list_midp_choice_pane

0x7946,	// (0x00010fc2) status_idle_pane

0xa7a3,	// (0x00013e1f) form_midp_field_time_pane_t1

0x793c,	// (0x00010fb8) wait_anim_pane_g2_copy1

0xa7b1,	// (0x00013e2d) form_midp_field_time_pane_t2

0x0001,

0x977b,	// (0x00012df7) aid_navinavi_width_2_pane

0xf859,	// (0x00018ed5) form_midp_field_time_pane_t

0x7946,	// (0x00010fc2) input_focus_pane_cp052

0x7946,	// (0x00010fc2) bg_input_focus_pane_cp040

0xa763,	// (0x00013ddf) form_midp_gauge_slider_pane_t1

0xa771,	// (0x00013ded) form_midp_gauge_slider_pane_t2

0xa77f,	// (0x00013dfb) form_midp_gauge_slider_pane_t3

0xa78d,	// (0x00013e09) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x00018ecc) form_midp_gauge_slider_pane_t

0xa79b,	// (0x00013e17) form_midp_slider_pane

0x7a26,	// (0x000110a2) bg_input_focus_pane_cp041_ParamLimits

0x7a26,	// (0x000110a2) bg_input_focus_pane_cp041

0xa730,	// (0x00013dac) form_midp_gauge_wait_pane_t1_ParamLimits

0xa730,	// (0x00013dac) form_midp_gauge_wait_pane_t1

0xa742,	// (0x00013dbe) form_midp_gauge_wait_pane_t2_ParamLimits

0xa742,	// (0x00013dbe) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00018ec7) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00018ec7) form_midp_gauge_wait_pane_t

0xa754,	// (0x00013dd0) form_midp_wait_pane_ParamLimits

0xa754,	// (0x00013dd0) form_midp_wait_pane

0xa6fa,	// (0x00013d76) form_midp_image_pane_g1

0xa703,	// (0x00013d7f) form_midp_image_pane_t1

0xa712,	// (0x00013d8e) form_midp_image_pane_t2

0xa721,	// (0x00013d9d) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00018ec0) form_midp_image_pane_t

0xa6e2,	// (0x00013d5e) list_single_midp_pane_g1

0xa6eb,	// (0x00013d67) list_single_midp_pane_t1

0xa6ba,	// (0x00013d36) list_midp_form_item_pane_ParamLimits

0xa6ba,	// (0x00013d36) list_midp_form_item_pane

0x9723,	// (0x00012d9f) list_midp_form_item_pane_t1

0x9732,	// (0x00012dae) midp_ticker_pane_g1

0x973e,	// (0x00012dba) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00018e0f) midp_ticker_pane_g

0x974a,	// (0x00012dc6) midp_ticker_pane_t1

0xbb37,	// (0x000151b3) midp_editing_number_pane_t1

0xbb15,	// (0x00015191) midp_editing_number_pane

0xbb24,	// (0x000151a0) midp_ticker_pane

0xb87b,	// (0x00014ef7) ai_message_heading_pane

0x7946,	// (0x00010fc2) bg_popup_window_pane_cp14

0xb883,	// (0x00014eff) listscroll_ai_message_pane

0xb805,	// (0x00014e81) ai_message_heading_pane_g1_ParamLimits

0xb805,	// (0x00014e81) ai_message_heading_pane_g1

0xb811,	// (0x00014e8d) ai_message_heading_pane_g2_ParamLimits

0xb811,	// (0x00014e8d) ai_message_heading_pane_g2

0xb81d,	// (0x00014e99) ai_message_heading_pane_g3_ParamLimits

0xb81d,	// (0x00014e99) ai_message_heading_pane_g3

0xb829,	// (0x00014ea5) ai_message_heading_pane_g4_ParamLimits

0xb829,	// (0x00014ea5) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x00019001) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x00019001) ai_message_heading_pane_g

0xb835,	// (0x00014eb1) ai_message_heading_pane_t1_ParamLimits

0xb835,	// (0x00014eb1) ai_message_heading_pane_t1

0xb84f,	// (0x00014ecb) ai_message_heading_pane_t2_ParamLimits

0xb84f,	// (0x00014ecb) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x0001900a) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x0001900a) ai_message_heading_pane_t

0xb861,	// (0x00014edd) bg_popup_heading_pane_cp1_ParamLimits

0xb861,	// (0x00014edd) bg_popup_heading_pane_cp1

0xb7f3,	// (0x00014e6f) list_ai_message_pane_ParamLimits

0xb7f3,	// (0x00014e6f) list_ai_message_pane

0x8b04,	// (0x00012180) scroll_pane_cp10

0xb78f,	// (0x00014e0b) list_ai_message_pane_g1

0xb797,	// (0x00014e13) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x00018fde) list_ai_message_pane_g

0xb79f,	// (0x00014e1b) list_ai_message_pane_t1_ParamLimits

0xb79f,	// (0x00014e1b) list_ai_message_pane_t1

0xb7b4,	// (0x00014e30) list_ai_message_pane_t2_ParamLimits

0xb7b4,	// (0x00014e30) list_ai_message_pane_t2

0xb7c9,	// (0x00014e45) list_ai_message_pane_t3_ParamLimits

0xb7c9,	// (0x00014e45) list_ai_message_pane_t3

0xb7de,	// (0x00014e5a) list_ai_message_pane_t4_ParamLimits

0xb7de,	// (0x00014e5a) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x00018fe3) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x00018fe3) list_ai_message_pane_t

0xb77a,	// (0x00014df6) cell_ai_soft_ind_pane_ParamLimits

0xb77a,	// (0x00014df6) cell_ai_soft_ind_pane

0x975c,	// (0x00012dd8) cell_ai_soft_ind_pane_g1_ParamLimits

0x975c,	// (0x00012dd8) cell_ai_soft_ind_pane_g1

0x7946,	// (0x00010fc2) grid_highlight_cp1

0x9769,	// (0x00012de5) text_secondary_cp56_ParamLimits

0x9769,	// (0x00012de5) text_secondary_cp56

0xb74f,	// (0x00014dcb) example_general_pane_ParamLimits

0xb74f,	// (0x00014dcb) example_general_pane

0xb75b,	// (0x00014dd7) example_parent_pane_g1_ParamLimits

0xb75b,	// (0x00014dd7) example_parent_pane_g1

0xb767,	// (0x00014de3) example_parent_pane_t1_ParamLimits

0xb767,	// (0x00014de3) example_parent_pane_t1

0x9d72,	// (0x000133ee) popup_preview_text_window_ParamLimits

0x9d72,	// (0x000133ee) popup_preview_text_window

0x9588,	// (0x00012c04) list_single_pane_cp2_g4

0x7d71,	// (0x000113ed) bg_popup_preview_window_pane_ParamLimits

0x7d71,	// (0x000113ed) bg_popup_preview_window_pane

0xb486,	// (0x00014b02) popup_preview_text_window_t1_ParamLimits

0xb486,	// (0x00014b02) popup_preview_text_window_t1

0xb4a4,	// (0x00014b20) popup_preview_text_window_t2_ParamLimits

0xb4a4,	// (0x00014b20) popup_preview_text_window_t2

0xb4ed,	// (0x00014b69) popup_preview_text_window_t3_ParamLimits

0xb4ed,	// (0x00014b69) popup_preview_text_window_t3

0xb532,	// (0x00014bae) popup_preview_text_window_t4_ParamLimits

0xb532,	// (0x00014bae) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00018fb2) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00018fb2) popup_preview_text_window_t

0xb5b0,	// (0x00014c2c) scroll_pane_cp11

0xa4b9,	// (0x00013b35) bg_popup_preview_window_pane_g1

0xb446,	// (0x00014ac2) bg_popup_preview_window_pane_g2

0xb44e,	// (0x00014aca) bg_popup_preview_window_pane_g3

0xb456,	// (0x00014ad2) bg_popup_preview_window_pane_g4

0xb45e,	// (0x00014ada) bg_popup_preview_window_pane_g5

0xb466,	// (0x00014ae2) bg_popup_preview_window_pane_g6

0xb46e,	// (0x00014aea) bg_popup_preview_window_pane_g7

0xb476,	// (0x00014af2) bg_popup_preview_window_pane_g8

0x5cfe,	// (0x0000f37a) aid_popup_width_pane

0x9d50,	// (0x000133cc) popup_midp_note_alarm_window_ParamLimits

0x9d50,	// (0x000133cc) popup_midp_note_alarm_window

0x87df,	// (0x00011e5b) data_form_pane_ParamLimits

0x87eb,	// (0x00011e67) form_field_data_pane_g1

0x87f5,	// (0x00011e71) form_field_data_pane_t1_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_ParamLimits

0x881b,	// (0x00011e97) data_form_wide_pane_ParamLimits

0x8827,	// (0x00011ea3) form_field_data_wide_pane_g1

0x8853,	// (0x00011ecf) form_field_data_wide_pane_t1_ParamLimits

0x801d,	// (0x00011699) input_focus_pane_cp6_ParamLimits

0x8ab1,	// (0x0001212d) input_popup_find_pane_g1_ParamLimits

0x8ab1,	// (0x0001212d) input_popup_find_pane_g1

0x6272,	// (0x0000f8ee) aid_navi_side_left_pane

0x6287,	// (0x0000f903) aid_navi_side_right_pane

0xae59,	// (0x000144d5) bg_popup_window_pane_cp30_ParamLimits

0xae59,	// (0x000144d5) bg_popup_window_pane_cp30

0xaed3,	// (0x0001454f) popup_midp_note_alarm_window_g1_ParamLimits

0xaed3,	// (0x0001454f) popup_midp_note_alarm_window_g1

0xaf03,	// (0x0001457f) popup_midp_note_alarm_window_t1_ParamLimits

0xaf03,	// (0x0001457f) popup_midp_note_alarm_window_t1

0xafa4,	// (0x00014620) popup_midp_note_alarm_window_t2_ParamLimits

0xafa4,	// (0x00014620) popup_midp_note_alarm_window_t2

0xb052,	// (0x000146ce) popup_midp_note_alarm_window_t3_ParamLimits

0xb052,	// (0x000146ce) popup_midp_note_alarm_window_t3

0xb084,	// (0x00014700) popup_midp_note_alarm_window_t4_ParamLimits

0xb084,	// (0x00014700) popup_midp_note_alarm_window_t4

0xb0aa,	// (0x00014726) popup_midp_note_alarm_window_t5_ParamLimits

0xb0aa,	// (0x00014726) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00018f4f) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00018f4f) popup_midp_note_alarm_window_t

0xb156,	// (0x000147d2) wait_bar_pane_cp1_ParamLimits

0xb156,	// (0x000147d2) wait_bar_pane_cp1

0x7946,	// (0x00010fc2) wait_anim_pane_copy1

0x7946,	// (0x00010fc2) wait_border_pane_copy1

0xab3f,	// (0x000141bb) wait_border_pane_g1_copy1

0x886d,	// (0x00011ee9) form_field_popup_pane_g1

0x8875,	// (0x00011ef1) form_field_popup_pane_t1_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_cp7_ParamLimits

0x888d,	// (0x00011f09) list_form_pane_ParamLimits

0x8899,	// (0x00011f15) form_field_popup_wide_pane_g1

0x88a1,	// (0x00011f1d) form_field_popup_wide_pane_t1_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_cp8_ParamLimits

0x88b6,	// (0x00011f32) list_form_wide_pane_ParamLimits

0xbd31,	// (0x000153ad) aid_size_cell_graphic_pane

0x898d,	// (0x00012009) data_form_pane_t1_ParamLimits

0xbae2,	// (0x0001515e) data_form_wide_pane_t1_ParamLimits

0xa053,	// (0x000136cf) bg_status_flat_pane

0x7986,	// (0x00011002) title_pane_t1_ParamLimits

0x79ee,	// (0x0001106a) title_pane_t2_ParamLimits

0x7a14,	// (0x00011090) title_pane_t3_ParamLimits

0xf59b,	// (0x00018c17) title_pane_t_ParamLimits

0x8f80,	// (0x000125fc) level_1_signal_ParamLimits

0x8f8d,	// (0x00012609) level_2_signal_ParamLimits

0x8f9a,	// (0x00012616) level_3_signal_ParamLimits

0x8fa7,	// (0x00012623) level_4_signal_ParamLimits

0x8fb4,	// (0x00012630) level_5_signal_ParamLimits

0x8fc1,	// (0x0001263d) level_6_signal_ParamLimits

0x8fce,	// (0x0001264a) level_7_signal_ParamLimits

0x8f80,	// (0x000125fc) level_1_battery_ParamLimits

0x8f8d,	// (0x00012609) level_2_battery_ParamLimits

0x8f9a,	// (0x00012616) level_3_battery_ParamLimits

0x8fa7,	// (0x00012623) level_4_battery_ParamLimits

0x8fb4,	// (0x00012630) level_5_battery_ParamLimits

0x8fc1,	// (0x0001263d) level_6_battery_ParamLimits

0x8fce,	// (0x0001264a) level_7_battery_ParamLimits

0xad5e,	// (0x000143da) bg_status_flat_pane_g1

0xad66,	// (0x000143e2) bg_status_flat_pane_g2

0xad6e,	// (0x000143ea) bg_status_flat_pane_g3

0xad76,	// (0x000143f2) bg_status_flat_pane_g4

0xad7e,	// (0x000143fa) bg_status_flat_pane_g5

0xad86,	// (0x00014402) bg_status_flat_pane_g6

0xad8e,	// (0x0001440a) bg_status_flat_pane_g7

0x7a3c,	// (0x000110b8) tabs_3_active_pane_t1_ParamLimits

0x7a3c,	// (0x000110b8) tabs_3_passive_pane_t1_ParamLimits

0x7a56,	// (0x000110d2) tabs_4_active_pane_t1_ParamLimits

0x7a56,	// (0x000110d2) tabs_4_1_passive_pane_t1_ParamLimits

0x8b45,	// (0x000121c1) tabs_2_active_pane_t1_ParamLimits

0x8b45,	// (0x000121c1) tabs_2_passive_pane_t1_ParamLimits

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp4_ParamLimits

0x8b65,	// (0x000121e1) tabs_2_long_active_pane_t1_ParamLimits

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp4_ParamLimits

0x684d,	// (0x0000fec9) list_single_midp_graphic_pane_t1_ParamLimits

0x8b57,	// (0x000121d3) bg_active_tab_pane_cp5_ParamLimits

0x8b84,	// (0x00012200) tabs_3_long_active_pane_t1_ParamLimits

0x8b78,	// (0x000121f4) bg_passive_tab_pane_cp5_ParamLimits

0x684d,	// (0x0000fec9) list_single_midp_graphic_pane_t1

0xa053,	// (0x000136cf) bg_status_flat_pane_ParamLimits

0xa116,	// (0x00013792) indicator_pane_cp2_ParamLimits

0xa116,	// (0x00013792) indicator_pane_cp2

0xa23a,	// (0x000138b6) navi_pane_srt_ParamLimits

0xa23a,	// (0x000138b6) navi_pane_srt

0xa25e,	// (0x000138da) popup_clock_digital_analogue_window_cp1

0x7b1d,	// (0x00011199) indicator_pane_t1

0x9657,	// (0x00012cd3) copy_highlight_pane

0x9657,	// (0x00012cd3) cursor_graphics_pane

0x9657,	// (0x00012cd3) graphic_within_text_pane

0x9657,	// (0x00012cd3) link_highlight_pane

0xb573,	// (0x00014bef) popup_preview_text_window_t5_ParamLimits

0xb573,	// (0x00014bef) popup_preview_text_window_t5

0x9783,	// (0x00012dff) cursor_digital_pane

0x9783,	// (0x00012dff) cursor_primary_pane

0x9794,	// (0x00012e10) cursor_primary_small_pane

0x979c,	// (0x00012e18) cursor_secondary_pane

0x97a4,	// (0x00012e20) cursor_title_pane

0x9783,	// (0x00012dff) link_highlight_digital_pane

0x978b,	// (0x00012e07) link_highlight_primary_pane

0x9794,	// (0x00012e10) link_highlight_primary_small_pane

0x979c,	// (0x00012e18) link_highlight_secondary_pane

0x97a4,	// (0x00012e20) link_highlight_title_pane

0x9783,	// (0x00012dff) copy_highlight_digital_pane

0x9783,	// (0x00012dff) copy_highlight_primary_pane

0x9794,	// (0x00012e10) copy_highlight_primary_small_pane

0x979c,	// (0x00012e18) copy_highlight_secondary_pane

0x97a4,	// (0x00012e20) copy_highlight_title_pane

0x979c,	// (0x00012e18) graphic_text_digital_pane

0xadfc,	// (0x00014478) graphic_text_primary_pane

0xae05,	// (0x00014481) graphic_text_primary_small_pane

0x9794,	// (0x00012e10) graphic_text_secondary_pane

0x9783,	// (0x00012dff) graphic_text_title_pane

0x97ac,	// (0x00012e28) cursor_primary_pane_g1

0xadee,	// (0x0001446a) cursor_text_primary_t1

0xadd6,	// (0x00014452) cursor_primary_small_pane_g1

0xade0,	// (0x0001445c) cursor_text_primary_small_t1

0xadbe,	// (0x0001443a) cursor_primary_small_pane_g1_copy1

0xadc8,	// (0x00014444) cursor_text_primary_small_t1_copy1

0xada6,	// (0x00014422) cursor_text_title_t1

0xadb4,	// (0x00014430) cursor_title_pane_g1

0x97ac,	// (0x00012e28) cursor_digital_pane_g1

0x97b6,	// (0x00012e32) cursor_text_digital_t1

0x97db,	// (0x00012e57) link_highlight_primary_pane_g1

0xad4f,	// (0x000143cb) link_highlight_primary_pane_t1

0x97c4,	// (0x00012e40) link_highlight_primary_small_pane_g1

0x97cc,	// (0x00012e48) link_highlight_primary_small_pane_t1

0x97db,	// (0x00012e57) link_highlight_secondary_pane_g1

0x97e3,	// (0x00012e5f) link_highlight_secondary_pane_t1

0xacc3,	// (0x0001433f) link_highlight_title_pane_g1

0xaccb,	// (0x00014347) link_highlight_title_pane_t1

0xacac,	// (0x00014328) link_highlight_digital_pane_g1

0xacb4,	// (0x00014330) link_highlight_digital_pane_t1

0xab84,	// (0x00014200) copy_highlight_primary_pane_g1

0xab8c,	// (0x00014208) copy_highlight_primary_pane_t1

0xab5e,	// (0x000141da) copy_highlight_primary_small_pane_g1

0xab75,	// (0x000141f1) copy_highlight_primary_small_pane_t1

0x97f2,	// (0x00012e6e) copy_highlight_secondary_pane_g1

0x97fa,	// (0x00012e76) copy_highlight_secondary_pane_t1

0xab5e,	// (0x000141da) copy_highlight_title_pane_g1

0xab66,	// (0x000141e2) copy_highlight_title_pane_t1

0xab84,	// (0x00014200) copy_highlight_digital_pane_g1

0xbefb,	// (0x00015577) copy_highlight_digital_pane_t1

0xbe4f,	// (0x000154cb) graphic_text_primary_pane_g1

0xbedf,	// (0x0001555b) graphic_text_primary_pane_t1

0xbeed,	// (0x00015569) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0001907e) graphic_text_primary_pane_t

0xbebb,	// (0x00015537) graphic_text_primary_small_pane_g1

0xbec3,	// (0x0001553f) graphic_text_primary_small_pane_t1

0xbed1,	// (0x0001554d) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x00019079) graphic_text_primary_small_pane_t

0xbe97,	// (0x00015513) graphic_text_secondary_pane_g1

0xbe9f,	// (0x0001551b) graphic_text_secondary_pane_t1

0xbead,	// (0x00015529) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x00019074) graphic_text_secondary_pane_t

0xbe73,	// (0x000154ef) graphic_text_title_pane_g1

0xbe7b,	// (0x000154f7) graphic_text_title_pane_t1

0xbe89,	// (0x00015505) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0001906f) graphic_text_title_pane_t

0xbe4f,	// (0x000154cb) graphic_text_digital_pane_g1

0xbe57,	// (0x000154d3) graphic_text_digital_pane_t1

0xbe65,	// (0x000154e1) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0001906a) graphic_text_digital_pane_t

0x7a26,	// (0x000110a2) navi_icon_pane_srt_ParamLimits

0x7a26,	// (0x000110a2) navi_icon_pane_srt

0x7946,	// (0x00010fc2) navi_midp_pane_srt

0x7946,	// (0x00010fc2) navi_navi_pane_srt

0x7a26,	// (0x000110a2) navi_text_pane_srt_ParamLimits

0x7a26,	// (0x000110a2) navi_text_pane_srt

0xbe1a,	// (0x00015496) navi_navi_icon_text_pane_srt

0xbe22,	// (0x0001549e) navi_navi_pane_srt_g1_ParamLimits

0xbe22,	// (0x0001549e) navi_navi_pane_srt_g1

0xbe34,	// (0x000154b0) navi_navi_pane_srt_g2_ParamLimits

0xbe34,	// (0x000154b0) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00019065) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00019065) navi_navi_pane_srt_g

0xbe46,	// (0x000154c2) navi_navi_tabs_pane_srt

0xbe1a,	// (0x00015496) navi_navi_text_pane_srt

0xbe1a,	// (0x00015496) navi_navi_volume_pane_srt

0xbe0b,	// (0x00015487) navi_navi_text_pane_srt_t1

0x6bc7,	// (0x00010243) navi_navi_volume_pane_srt_g1

0x6bcf,	// (0x0001024b) volume_small_pane_srt_ParamLimits

0x6bcf,	// (0x0001024b) volume_small_pane_srt

0x6552,	// (0x0000fbce) volume_small_pane_srt_g1_ParamLimits

0x6552,	// (0x0000fbce) volume_small_pane_srt_g1

0x6562,	// (0x0000fbde) volume_small_pane_srt_g2_ParamLimits

0x6562,	// (0x0000fbde) volume_small_pane_srt_g2

0x6573,	// (0x0000fbef) volume_small_pane_srt_g3_ParamLimits

0x6573,	// (0x0000fbef) volume_small_pane_srt_g3

0x6584,	// (0x0000fc00) volume_small_pane_srt_g4_ParamLimits

0x6584,	// (0x0000fc00) volume_small_pane_srt_g4

0x6595,	// (0x0000fc11) volume_small_pane_srt_g5_ParamLimits

0x6595,	// (0x0000fc11) volume_small_pane_srt_g5

0x65a6,	// (0x0000fc22) volume_small_pane_srt_g6_ParamLimits

0x65a6,	// (0x0000fc22) volume_small_pane_srt_g6

0x65b7,	// (0x0000fc33) volume_small_pane_srt_g7_ParamLimits

0x65b7,	// (0x0000fc33) volume_small_pane_srt_g7

0x65c8,	// (0x0000fc44) volume_small_pane_srt_g8_ParamLimits

0x65c8,	// (0x0000fc44) volume_small_pane_srt_g8

0x65d9,	// (0x0000fc55) volume_small_pane_srt_g9_ParamLimits

0x65d9,	// (0x0000fc55) volume_small_pane_srt_g9

0x65ea,	// (0x0000fc66) volume_small_pane_srt_g10_ParamLimits

0x65ea,	// (0x0000fc66) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x00018e14) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x00018e14) volume_small_pane_srt_g

0x7e1a,	// (0x00011496) query_popup_data_pane_cp2

0xbdf1,	// (0x0001546d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbdf1,	// (0x0001546d) navi_navi_icon_text_pane_srt_t1

0xadfc,	// (0x00014478) navi_tabs_2_long_pane_srt

0xadfc,	// (0x00014478) navi_tabs_2_pane_srt

0xadfc,	// (0x00014478) navi_tabs_3_long_pane_srt

0xadfc,	// (0x00014478) navi_tabs_3_pane_srt

0xadfc,	// (0x00014478) navi_tabs_4_pane_srt

0x6ba7,	// (0x00010223) tabs_2_active_pane_srt_ParamLimits

0x6ba7,	// (0x00010223) tabs_2_active_pane_srt

0x6bb7,	// (0x00010233) tabs_2_passive_pane_srt_ParamLimits

0x6bb7,	// (0x00010233) tabs_2_passive_pane_srt

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp1_srt

0xbdbd,	// (0x00015439) bg_passive_tab_pane_g1_cp1_srt

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp1_srt

0xbdc6,	// (0x00015442) bg_passive_tab_pane_g3_cp1_srt

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp1_srt_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp1_srt

0xbdcf,	// (0x0001544b) tabs_2_active_pane_srt_g1

0xbdd7,	// (0x00015453) tabs_2_active_pane_srt_t1_ParamLimits

0xbdd7,	// (0x00015453) tabs_2_active_pane_srt_t1

0xbdbd,	// (0x00015439) bg_active_tab_pane_g1_cp1_srt

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp1_srt

0xbdc6,	// (0x00015442) bg_active_tab_pane_g3_cp1_srt

0x6b74,	// (0x000101f0) tabs_3_active_pane_srt_ParamLimits

0x6b74,	// (0x000101f0) tabs_3_active_pane_srt

0x6b85,	// (0x00010201) tabs_3_passive_pane_cp_srt_ParamLimits

0x6b85,	// (0x00010201) tabs_3_passive_pane_cp_srt

0x6b96,	// (0x00010212) tabs_3_passive_pane_srt_ParamLimits

0x6b96,	// (0x00010212) tabs_3_passive_pane_srt

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x99e1,	// (0x0001305d) bg_passive_tab_pane_cp2_srt

0x9809,	// (0x00012e85) bg_passive_tab_pane_g1_cp2_srt

0x92a4,	// (0x00012920) bg_passive_tab_pane_g2_cp2_srt

0x9812,	// (0x00012e8e) bg_passive_tab_pane_g3_cp2_srt

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp2_srt_ParamLimits

0x7a26,	// (0x000110a2) bg_active_tab_pane_cp2_srt

0xbda3,	// (0x0001541f) tabs_3_active_pane_srt_g1

0xbdab,	// (0x00015427) tabs_3_active_pane_srt_t1_ParamLimits

0xbdab,	// (0x00015427) tabs_3_active_pane_srt_t1

0x9809,	// (0x00012e85) bg_active_tab_pane_g1_cp2_srt

0x92a4,	// (0x00012920) bg_active_tab_pane_g2_cp2_srt

0x9812,	// (0x00012e8e) bg_active_tab_pane_g3_cp2_srt

0x6b2c,	// (0x000101a8) tabs_4_active_pane_srt_ParamLimits

0x6b2c,	// (0x000101a8) tabs_4_active_pane_srt

0x6b3e,	// (0x000101ba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6b3e,	// (0x000101ba) tabs_4_passive_pane_cp2_srt

0x9967,	// (0x00012fe3) aid_size_cell_toolbar

0x8b78,	// (0x000121f4) main_idle_act_pane_ParamLimits

0x9b86,	// (0x00013202) popup_large_graphic_colour_window_ParamLimits

0x9eed,	// (0x00013569) popup_toolbar_window_ParamLimits

0x9eed,	// (0x00013569) popup_toolbar_window

0xbb61,	// (0x000151dd) list_single_graphic_2heading_pane_ParamLimits

0xbb61,	// (0x000151dd) list_single_graphic_2heading_pane

0x8d34,	// (0x000123b0) aid_size_cell_apps_grid_lsc_pane

0x8d46,	// (0x000123c2) aid_size_cell_apps_grid_prt_pane

0x99e1,	// (0x0001305d) bg_wml_button_pane_cp1_ParamLimits

0x99e1,	// (0x0001305d) bg_wml_button_pane_cp1

0xa7f0,	// (0x00013e6c) form_midp_field_text_pane_t1_ParamLimits

0xa5d3,	// (0x00013c4f) input_focus_pane_cp050_ParamLimits

0xa827,	// (0x00013ea3) list_midp_form_text_pane_ParamLimits

0xa7cd,	// (0x00013e49) input_focus_pane_cp051_ParamLimits

0xa7e1,	// (0x00013e5d) list_midp_choice_pane_ParamLimits

0xa664,	// (0x00013ce0) list_single_2graphic_pane_cp3_ParamLimits

0xa664,	// (0x00013ce0) list_single_2graphic_pane_cp3

0xa688,	// (0x00013d04) list_single_midp_graphic_pane_ParamLimits

0xa688,	// (0x00013d04) list_single_midp_graphic_pane

0x6750,	// (0x0000fdcc) list_single_graphic_2heading_pane_g1_ParamLimits

0x6750,	// (0x0000fdcc) list_single_graphic_2heading_pane_g1

0x675c,	// (0x0000fdd8) list_single_graphic_2heading_pane_g4_ParamLimits

0x675c,	// (0x0000fdd8) list_single_graphic_2heading_pane_g4

0x6768,	// (0x0000fde4) list_single_graphic_2heading_pane_g5_ParamLimits

0x6768,	// (0x0000fde4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00018e67) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00018e67) list_single_graphic_2heading_pane_g

0x6774,	// (0x0000fdf0) list_single_graphic_2heading_pane_t1_ParamLimits

0x6774,	// (0x0000fdf0) list_single_graphic_2heading_pane_t1

0x6788,	// (0x0000fe04) list_single_graphic_2heading_pane_t2_ParamLimits

0x6788,	// (0x0000fe04) list_single_graphic_2heading_pane_t2

0x67a4,	// (0x0000fe20) list_single_graphic_2heading_pane_t3_ParamLimits

0x67a4,	// (0x0000fe20) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00018e6e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00018e6e) list_single_graphic_2heading_pane_t

0xa3bd,	// (0x00013a39) bg_popup_sub_pane_cp2

0xa3e7,	// (0x00013a63) grid_toobar_pane

0x67bc,	// (0x0000fe38) cell_toolbar_pane_ParamLimits

0x67bc,	// (0x0000fe38) cell_toolbar_pane

0xa45d,	// (0x00013ad9) cell_toolbar_pane_g1_ParamLimits

0xa45d,	// (0x00013ad9) cell_toolbar_pane_g1

0xa471,	// (0x00013aed) cell_toolbar_pane_g2_ParamLimits

0xa471,	// (0x00013aed) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x00018e7c) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x00018e7c) cell_toolbar_pane_g

0xa493,	// (0x00013b0f) grid_highlight_pane_cp2_ParamLimits

0xa493,	// (0x00013b0f) grid_highlight_pane_cp2

0xa4ad,	// (0x00013b29) toolbar_button_pane

0xa4b9,	// (0x00013b35) toolbar_button_pane_g1

0xa4c1,	// (0x00013b3d) toolbar_button_pane_g2

0xa4c9,	// (0x00013b45) toolbar_button_pane_g3

0xa4d1,	// (0x00013b4d) toolbar_button_pane_g4

0xa4d9,	// (0x00013b55) toolbar_button_pane_g5

0xa4e1,	// (0x00013b5d) toolbar_button_pane_g6

0xa4e9,	// (0x00013b65) toolbar_button_pane_g7

0xa4f1,	// (0x00013b6d) toolbar_button_pane_g8

0xa4f9,	// (0x00013b75) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x00018e81) toolbar_button_pane_g

0x67f4,	// (0x0000fe70) list_single_2graphic_pane_g1_cp3_ParamLimits

0x67f4,	// (0x0000fe70) list_single_2graphic_pane_g1_cp3

0x6800,	// (0x0000fe7c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6800,	// (0x0000fe7c) list_single_2graphic_pane_g2_cp3

0x6811,	// (0x0000fe8d) list_single_2graphic_pane_g3_cp3

0x6819,	// (0x0000fe95) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6819,	// (0x0000fe95) list_single_2graphic_pane_g4_cp3

0x6825,	// (0x0000fea1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6825,	// (0x0000fea1) list_single_2graphic_pane_t1_cp3

0x6841,	// (0x0000febd) list_single_midp_graphic_pane_g2_ParamLimits

0x6841,	// (0x0000febd) list_single_midp_graphic_pane_g2

0x996f,	// (0x00012feb) aid_zoom_text_primary

0x9977,	// (0x00012ff3) aid_zoom_text_secondary

0x98c6,	// (0x00012f42) status_small_pane_g7_ParamLimits

0x98c6,	// (0x00012f42) status_small_pane_g7

0x98e9,	// (0x00012f65) status_small_pane_t1_ParamLimits

0x795d,	// (0x00010fd9) title_pane_g2

0x0003,

0xf592,	// (0x00018c0e) title_pane_g

0x7ebb,	// (0x00011537) aid_size_cell_colour_1_pane_ParamLimits

0x7ebb,	// (0x00011537) aid_size_cell_colour_1_pane

0x7ecf,	// (0x0001154b) aid_size_cell_colour_2_pane_ParamLimits

0x7ecf,	// (0x0001154b) aid_size_cell_colour_2_pane

0x7ee3,	// (0x0001155f) aid_size_cell_colour_3_pane_ParamLimits

0x7ee3,	// (0x0001155f) aid_size_cell_colour_3_pane

0x7ef7,	// (0x00011573) aid_size_cell_colour_4_pane_ParamLimits

0x7ef7,	// (0x00011573) aid_size_cell_colour_4_pane

0x61ae,	// (0x0000f82a) title_pane_stacon_g1_ParamLimits

0x61ae,	// (0x0000f82a) title_pane_stacon_g1

0xabe3,	// (0x0001425f) popup_note_wait_window_g3_ParamLimits

0xabe3,	// (0x0001425f) popup_note_wait_window_g3

0xac59,	// (0x000142d5) popup_note_wait_window_t5_ParamLimits

0xac59,	// (0x000142d5) popup_note_wait_window_t5

0x7946,	// (0x00010fc2) main_feb_china_hwr_fs_writing_pane

0x9a6b,	// (0x000130e7) popup_feb_china_hwr_fs_window_ParamLimits

0x9a6b,	// (0x000130e7) popup_feb_china_hwr_fs_window

0x6863,	// (0x0000fedf) aid_size_cell_hwr_fs_ParamLimits

0x6863,	// (0x0000fedf) aid_size_cell_hwr_fs

0xa5d3,	// (0x00013c4f) bg_popup_sub_pane_cp3_ParamLimits

0xa5d3,	// (0x00013c4f) bg_popup_sub_pane_cp3

0x6878,	// (0x0000fef4) grid_hwr_fs_pane_ParamLimits

0x6878,	// (0x0000fef4) grid_hwr_fs_pane

0x6890,	// (0x0000ff0c) linegrid_hwr_fs_pane_ParamLimits

0x6890,	// (0x0000ff0c) linegrid_hwr_fs_pane

0x68a0,	// (0x0000ff1c) cell_hwr_fs_pane_ParamLimits

0x68a0,	// (0x0000ff1c) cell_hwr_fs_pane

0xa5df,	// (0x00013c5b) linegrid_hwr_fs_pane_g1_ParamLimits

0xa5df,	// (0x00013c5b) linegrid_hwr_fs_pane_g1

0xa5eb,	// (0x00013c67) linegrid_hwr_fs_pane_g2_ParamLimits

0xa5eb,	// (0x00013c67) linegrid_hwr_fs_pane_g2

0xa5fd,	// (0x00013c79) linegrid_hwr_fs_pane_g3_ParamLimits

0xa5fd,	// (0x00013c79) linegrid_hwr_fs_pane_g3

0x68c2,	// (0x0000ff3e) linegrid_hwr_fs_pane_g4_ParamLimits

0x68c2,	// (0x0000ff3e) linegrid_hwr_fs_pane_g4

0x68dc,	// (0x0000ff58) linegrid_hwr_fs_pane_g5_ParamLimits

0x68dc,	// (0x0000ff58) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00018eac) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00018eac) linegrid_hwr_fs_pane_g

0xa609,	// (0x00013c85) cell_hwr_fs_pane_g1_ParamLimits

0xa609,	// (0x00013c85) cell_hwr_fs_pane_g1

0xa2f4,	// (0x00013970) cell_hwr_fs_pane_g2_ParamLimits

0xa2f4,	// (0x00013970) cell_hwr_fs_pane_g2

0xa61f,	// (0x00013c9b) cell_hwr_fs_pane_g3_ParamLimits

0xa61f,	// (0x00013c9b) cell_hwr_fs_pane_g3

0xa62c,	// (0x00013ca8) cell_hwr_fs_pane_g4_ParamLimits

0xa62c,	// (0x00013ca8) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00018eb7) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00018eb7) cell_hwr_fs_pane_g

0x68f2,	// (0x0000ff6e) cell_hwr_fs_pane_t1

0x7946,	// (0x00010fc2) grid_highlight_pane_cp6

0x7946,	// (0x00010fc2) main_idle_act2_pane

0x8aeb,	// (0x00012167) aid_inside_area_popup_secondary

0xb290,	// (0x0001490c) aid_inside_area_window_primary_ParamLimits

0xb290,	// (0x0001490c) aid_inside_area_window_primary

0xbf0a,	// (0x00015586) ai2_news_ticker_pane

0xbf12,	// (0x0001558e) aid_size_cell_ai1_link_ParamLimits

0xbf12,	// (0x0001558e) aid_size_cell_ai1_link

0xbf2c,	// (0x000155a8) popup_ai2_data_window_ParamLimits

0xbf2c,	// (0x000155a8) popup_ai2_data_window

0xbf42,	// (0x000155be) popup_ai2_link_window_ParamLimits

0xbf42,	// (0x000155be) popup_ai2_link_window

0xa5d3,	// (0x00013c4f) bg_popup_sub_pane_cp4_ParamLimits

0xa5d3,	// (0x00013c4f) bg_popup_sub_pane_cp4

0xbf56,	// (0x000155d2) grid_ai2_link_pane_ParamLimits

0xbf56,	// (0x000155d2) grid_ai2_link_pane

0xbf6d,	// (0x000155e9) popup_ai2_link_window_g1_ParamLimits

0xbf6d,	// (0x000155e9) popup_ai2_link_window_g1

0xbf79,	// (0x000155f5) popup_ai2_link_window_g2_ParamLimits

0xbf79,	// (0x000155f5) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x00019083) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x00019083) popup_ai2_link_window_g

0xbf88,	// (0x00015604) ai2_mp_button_pane

0xbf90,	// (0x0001560c) ai2_mp_volume_pane

0xa7cd,	// (0x00013e49) bg_popup_sub_pane_cp5_ParamLimits

0xa7cd,	// (0x00013e49) bg_popup_sub_pane_cp5

0xbf98,	// (0x00015614) heading_ai2_gene_pane_ParamLimits

0xbf98,	// (0x00015614) heading_ai2_gene_pane

0xbfa4,	// (0x00015620) list_ai2_gene_pane_ParamLimits

0xbfa4,	// (0x00015620) list_ai2_gene_pane

0xbfec,	// (0x00015668) cell_ai2_link_pane_ParamLimits

0xbfec,	// (0x00015668) cell_ai2_link_pane

0xc002,	// (0x0001567e) cell_ai2_link_pane_g1

0x7946,	// (0x00010fc2) grid_highlight_pane_cp7

0x6be4,	// (0x00010260) ai2_mp_volume_pane_g1

0xc0d2,	// (0x0001574e) ai2_mp_volume_pane_g2

0xc047,	// (0x000156c3) list_ai2_gene_pane_t1

0xc0da,	// (0x00015756) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0001909c) ai2_mp_volume_pane_g

0x6bec,	// (0x00010268) volume_small_pane_cp3

0xc0e2,	// (0x0001575e) aid_size_cell_ai2_button

0xc0ea,	// (0x00015766) grid_ai2_button_pane

0xc0f3,	// (0x0001576f) cell_ai2_button_pane_ParamLimits

0xc0f3,	// (0x0001576f) cell_ai2_button_pane

0x793c,	// (0x00010fb8) cell_ai2_button_pane_g1

0x7946,	// (0x00010fc2) grid_highlight_pane_cp8

0xc092,	// (0x0001570e) ai2_gene_pane_t1_ParamLimits

0xc092,	// (0x0001570e) ai2_gene_pane_t1

0x995d,	// (0x00012fd9) aid_height_parent_landscape

0xb94a,	// (0x00014fc6) aid_height_set_list

0xb95b,	// (0x00014fd7) aid_size_parent

0xbd31,	// (0x000153ad) aid_size_cell_graphic_pane_ParamLimits

0xbfb4,	// (0x00015630) popup_ai2_data_window_g1_ParamLimits

0xbfb4,	// (0x00015630) popup_ai2_data_window_g1

0xbfc0,	// (0x0001563c) ai2_news_ticker_pane_g1

0xbfc8,	// (0x00015644) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x00019088) ai2_news_ticker_pane_g

0xbfd0,	// (0x0001564c) ai2_news_ticker_pane_t1

0xbfde,	// (0x0001565a) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0001908d) ai2_news_ticker_pane_t

0xc00b,	// (0x00015687) heading_ai2_gene_pane_g1

0xc013,	// (0x0001568f) heading_ai2_gene_pane_t1_ParamLimits

0xc013,	// (0x0001568f) heading_ai2_gene_pane_t1

0xc028,	// (0x000156a4) list_highlight_pane_cp6

0xc030,	// (0x000156ac) ai2_gene_pane_ParamLimits

0xc030,	// (0x000156ac) ai2_gene_pane

0xc055,	// (0x000156d1) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x00019092) list_ai2_gene_pane_t

0xc063,	// (0x000156df) list_highlight_pane_cp8_ParamLimits

0xc063,	// (0x000156df) list_highlight_pane_cp8

0xc074,	// (0x000156f0) ai2_gene_pane_g1_ParamLimits

0xc074,	// (0x000156f0) ai2_gene_pane_g1

0xc086,	// (0x00015702) ai2_gene_pane_g2_ParamLimits

0xc086,	// (0x00015702) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x00019097) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x00019097) ai2_gene_pane_g

0x8242,	// (0x000118be) scroll_pane_cp12

0x670f,	// (0x0000fd8b) control_pane_t3_ParamLimits

0x670f,	// (0x0000fd8b) control_pane_t3

0x98da,	// (0x00012f56) status_small_pane_g8_ParamLimits

0x98da,	// (0x00012f56) status_small_pane_g8

0x9b51,	// (0x000131cd) popup_find_window_ParamLimits

0x9d64,	// (0x000133e0) popup_note_image_window_ParamLimits

0xa423,	// (0x00013a9f) list_double2_graphic_pane_vc_g1_ParamLimits

0xa423,	// (0x00013a9f) list_double2_graphic_pane_vc_g1

0xa42f,	// (0x00013aab) list_double2_graphic_pane_vc_g2_ParamLimits

0xa42f,	// (0x00013aab) list_double2_graphic_pane_vc_g2

0xa43b,	// (0x00013ab7) list_double2_graphic_pane_vc_g3_ParamLimits

0xa43b,	// (0x00013ab7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x00018e75) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018e75) list_double2_graphic_pane_vc_g

0xa447,	// (0x00013ac3) list_double2_graphic_pane_vc_t1_ParamLimits

0xa447,	// (0x00013ac3) list_double2_graphic_pane_vc_t1

0xa42f,	// (0x00013aab) list_single_heading_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_single_heading_pane_vc_g1

0xa43b,	// (0x00013ab7) list_single_heading_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_single_heading_pane_vc_g

0xa501,	// (0x00013b7d) list_single_heading_pane_vc_t1_ParamLimits

0xa501,	// (0x00013b7d) list_single_heading_pane_vc_t1

0xa517,	// (0x00013b93) list_single_heading_pane_vc_t2_ParamLimits

0xa517,	// (0x00013b93) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00018e9b) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00018e9b) list_single_heading_pane_vc_t

0xa52b,	// (0x00013ba7) list_setting_number_pane_vc_g1_ParamLimits

0xa52b,	// (0x00013ba7) list_setting_number_pane_vc_g1

0xa537,	// (0x00013bb3) list_setting_number_pane_vc_g2_ParamLimits

0xa537,	// (0x00013bb3) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00018ea0) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00018ea0) list_setting_number_pane_vc_g

0xa543,	// (0x00013bbf) list_setting_number_pane_vc_t1_ParamLimits

0xa543,	// (0x00013bbf) list_setting_number_pane_vc_t1

0xa557,	// (0x00013bd3) list_setting_number_pane_vc_t2_ParamLimits

0xa557,	// (0x00013bd3) list_setting_number_pane_vc_t2

0xa573,	// (0x00013bef) list_setting_number_pane_vc_t3_ParamLimits

0xa573,	// (0x00013bef) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00018ea5) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00018ea5) list_setting_number_pane_vc_t

0xa599,	// (0x00013c15) set_value_pane_vc_ParamLimits

0xa599,	// (0x00013c15) set_value_pane_vc

0xbb61,	// (0x000151dd) list_double2_graphic_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double2_graphic_pane_vc

0xbb73,	// (0x000151ef) list_double2_large_graphic_pane_vc_ParamLimits

0xbb73,	// (0x000151ef) list_double2_large_graphic_pane_vc

0xbb61,	// (0x000151dd) list_double2_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double2_pane_vc

0xbb61,	// (0x000151dd) list_double_graphic_heading_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_graphic_heading_pane_vc

0xbb61,	// (0x000151dd) list_double_graphic_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_graphic_pane_vc

0xbb61,	// (0x000151dd) list_double_heading_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_heading_pane_vc

0xbb73,	// (0x000151ef) list_double_large_graphic_pane_vc_ParamLimits

0xbb73,	// (0x000151ef) list_double_large_graphic_pane_vc

0xbb61,	// (0x000151dd) list_double_number_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_number_pane_vc

0xbb61,	// (0x000151dd) list_double_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_pane_vc

0xbb61,	// (0x000151dd) list_double_time_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_double_time_pane_vc

0xbb61,	// (0x000151dd) list_setting_number_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_setting_number_pane_vc

0xbb61,	// (0x000151dd) list_setting_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_setting_pane_vc

0xbb61,	// (0x000151dd) list_single_graphic_heading_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_single_graphic_heading_pane_vc

0xbb61,	// (0x000151dd) list_single_heading_pane_vc_ParamLimits

0xbb61,	// (0x000151dd) list_single_heading_pane_vc

0xbb84,	// (0x00015200) list_single_number_heading_pane_vc_ParamLimits

0xbb84,	// (0x00015200) list_single_number_heading_pane_vc

0xc127,	// (0x000157a3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc127,	// (0x000157a3) list_double_graphic_heading_pane_vc_g1

0xa42f,	// (0x00013aab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa42f,	// (0x00013aab) list_double_graphic_heading_pane_vc_g2

0xa43b,	// (0x00013ab7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa43b,	// (0x00013ab7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x000190a3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x000190a3) list_double_graphic_heading_pane_vc_g

0xc133,	// (0x000157af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc133,	// (0x000157af) list_double_graphic_heading_pane_vc_t1

0xa501,	// (0x00013b7d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa501,	// (0x00013b7d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x000190aa) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x000190aa) list_double_graphic_heading_pane_vc_t

0xa52b,	// (0x00013ba7) list_setting_pane_vc_g1_ParamLimits

0xa52b,	// (0x00013ba7) list_setting_pane_vc_g1

0xa537,	// (0x00013bb3) list_setting_pane_vc_g2_ParamLimits

0xa537,	// (0x00013bb3) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00018ea0) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00018ea0) list_setting_pane_vc_g

0xc34b,	// (0x000159c7) list_setting_pane_vc_t1_ParamLimits

0xc34b,	// (0x000159c7) list_setting_pane_vc_t1

0xc35f,	// (0x000159db) list_setting_pane_vc_t2_ParamLimits

0xc35f,	// (0x000159db) list_setting_pane_vc_t2

0x0001,

0xfa5c,	// (0x000190d8) list_setting_pane_vc_t_ParamLimits

0xfa5c,	// (0x000190d8) list_setting_pane_vc_t

0xa599,	// (0x00013c15) set_value_pane_cp_vc_ParamLimits

0xa599,	// (0x00013c15) set_value_pane_cp_vc

0xa42f,	// (0x00013aab) list_single_number_heading_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_single_number_heading_pane_vc_g1

0xa43b,	// (0x00013ab7) list_single_number_heading_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_single_number_heading_pane_vc_g

0xa501,	// (0x00013b7d) list_single_number_heading_pane_vc_t1_ParamLimits

0xa501,	// (0x00013b7d) list_single_number_heading_pane_vc_t1

0xc381,	// (0x000159fd) list_single_number_heading_pane_vc_t2_ParamLimits

0xc381,	// (0x000159fd) list_single_number_heading_pane_vc_t2

0xc395,	// (0x00015a11) list_single_number_heading_pane_vc_t3_ParamLimits

0xc395,	// (0x00015a11) list_single_number_heading_pane_vc_t3

0x0002,

0xfa61,	// (0x000190dd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x000190dd) list_single_number_heading_pane_vc_t

0xa423,	// (0x00013a9f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa423,	// (0x00013a9f) list_single_graphic_heading_pane_vc_g1

0xa42f,	// (0x00013aab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa42f,	// (0x00013aab) list_single_graphic_heading_pane_vc_g4

0xa43b,	// (0x00013ab7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa43b,	// (0x00013ab7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x00018e75) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018e75) list_single_graphic_heading_pane_vc_g

0xa501,	// (0x00013b7d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa501,	// (0x00013b7d) list_single_graphic_heading_pane_vc_t1

0xc3a7,	// (0x00015a23) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc3a7,	// (0x00015a23) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x000190e4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x000190e4) list_single_graphic_heading_pane_vc_t

0xa42f,	// (0x00013aab) list_double2_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_double2_pane_vc_g1

0xa43b,	// (0x00013ab7) list_double2_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_double2_pane_vc_g

0xc3bb,	// (0x00015a37) list_double2_pane_vc_t1_ParamLimits

0xc3bb,	// (0x00015a37) list_double2_pane_vc_t1

0xc3d1,	// (0x00015a4d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc3d1,	// (0x00015a4d) list_double2_large_graphic_pane_vc_g1

0xc3dd,	// (0x00015a59) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc3dd,	// (0x00015a59) list_double2_large_graphic_pane_vc_g2

0xc3e9,	// (0x00015a65) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc3e9,	// (0x00015a65) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6d,	// (0x000190e9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x000190e9) list_double2_large_graphic_pane_vc_g

0xc3f5,	// (0x00015a71) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc3f5,	// (0x00015a71) list_double2_large_graphic_pane_vc_t1

0xc40b,	// (0x00015a87) list_double_time_pane_vc_g1_ParamLimits

0xc40b,	// (0x00015a87) list_double_time_pane_vc_g1

0xc417,	// (0x00015a93) list_double_time_pane_vc_g2_ParamLimits

0xc417,	// (0x00015a93) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x000190f0) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x000190f0) list_double_time_pane_vc_g

0xc423,	// (0x00015a9f) list_double_time_pane_vc_t1_ParamLimits

0xc423,	// (0x00015a9f) list_double_time_pane_vc_t1

0xc43c,	// (0x00015ab8) list_double_time_pane_vc_t2_ParamLimits

0xc43c,	// (0x00015ab8) list_double_time_pane_vc_t2

0xc457,	// (0x00015ad3) list_double_time_pane_vc_t3_ParamLimits

0xc457,	// (0x00015ad3) list_double_time_pane_vc_t3

0xc46f,	// (0x00015aeb) list_double_time_pane_vc_t4_ParamLimits

0xc46f,	// (0x00015aeb) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x000190f5) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x000190f5) list_double_time_pane_vc_t

0xa42f,	// (0x00013aab) list_double_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_double_pane_vc_g1

0xa43b,	// (0x00013ab7) list_double_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_double_pane_vc_g

0xc483,	// (0x00015aff) list_double_pane_vc_t1_ParamLimits

0xc483,	// (0x00015aff) list_double_pane_vc_t1

0xc495,	// (0x00015b11) list_double_pane_vc_t2_ParamLimits

0xc495,	// (0x00015b11) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x000190fe) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x000190fe) list_double_pane_vc_t

0xa42f,	// (0x00013aab) list_double_number_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_double_number_pane_vc_g1

0xa43b,	// (0x00013ab7) list_double_number_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_double_number_pane_vc_g

0xc4ad,	// (0x00015b29) list_double_number_pane_vc_t1_ParamLimits

0xc4ad,	// (0x00015b29) list_double_number_pane_vc_t1

0xc4c1,	// (0x00015b3d) list_double_number_pane_vc_t2_ParamLimits

0xc4c1,	// (0x00015b3d) list_double_number_pane_vc_t2

0xc495,	// (0x00015b11) list_double_number_pane_vc_t3_ParamLimits

0xc495,	// (0x00015b11) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x00019103) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x00019103) list_double_number_pane_vc_t

0xc4d3,	// (0x00015b4f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc4d3,	// (0x00015b4f) list_double_large_graphic_pane_vc_g1

0xc4df,	// (0x00015b5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc4df,	// (0x00015b5b) list_double_large_graphic_pane_vc_g2

0xc3e9,	// (0x00015a65) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc3e9,	// (0x00015a65) list_double_large_graphic_pane_vc_g3

0xc4ee,	// (0x00015b6a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc4ee,	// (0x00015b6a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x0001910a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x0001910a) list_double_large_graphic_pane_vc_g

0xc4fa,	// (0x00015b76) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc4fa,	// (0x00015b76) list_double_large_graphic_pane_vc_t1

0xc50c,	// (0x00015b88) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc50c,	// (0x00015b88) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x00019113) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x00019113) list_double_large_graphic_pane_vc_t

0xa42f,	// (0x00013aab) list_double_heading_pane_vc_g1_ParamLimits

0xa42f,	// (0x00013aab) list_double_heading_pane_vc_g1

0xa43b,	// (0x00013ab7) list_double_heading_pane_vc_g2_ParamLimits

0xa43b,	// (0x00013ab7) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018e96) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018e96) list_double_heading_pane_vc_g

0xc525,	// (0x00015ba1) list_double_heading_pane_vc_t1_ParamLimits

0xc525,	// (0x00015ba1) list_double_heading_pane_vc_t1

0xa501,	// (0x00013b7d) list_double_heading_pane_vc_t2_ParamLimits

0xa501,	// (0x00013b7d) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00019118) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00019118) list_double_heading_pane_vc_t

0xa423,	// (0x00013a9f) list_double_graphic_pane_vc_g1_ParamLimits

0xa423,	// (0x00013a9f) list_double_graphic_pane_vc_g1

0xc539,	// (0x00015bb5) list_double_graphic_pane_vc_g2_ParamLimits

0xc539,	// (0x00015bb5) list_double_graphic_pane_vc_g2

0xc548,	// (0x00015bc4) list_double_graphic_pane_vc_g3_ParamLimits

0xc548,	// (0x00015bc4) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x0001911d) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0001911d) list_double_graphic_pane_vc_g

0xc554,	// (0x00015bd0) list_double_graphic_pane_vc_t1_ParamLimits

0xc554,	// (0x00015bd0) list_double_graphic_pane_vc_t1

0xc495,	// (0x00015b11) list_double_graphic_pane_vc_t2_ParamLimits

0xc495,	// (0x00015b11) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00019124) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00019124) list_double_graphic_pane_vc_t

0x5d0a,	// (0x0000f386) aid_size_cell_fastswap

0x5d12,	// (0x0000f38e) aid_size_cell_touch_ParamLimits

0x5d12,	// (0x0000f38e) aid_size_cell_touch

0x5f77,	// (0x0000f5f3) popup_fast_swap_wide_window_ParamLimits

0x5f77,	// (0x0000f5f3) popup_fast_swap_wide_window

0x6081,	// (0x0000f6fd) touch_pane_ParamLimits

0x6081,	// (0x0000f6fd) touch_pane

0x8727,	// (0x00011da3) button_value_adjust_pane_cp2

0x872f,	// (0x00011dab) button_value_adjust_pane_cp4

0x8751,	// (0x00011dcd) form_field_data_pane_cp2

0x8772,	// (0x00011dee) form_field_data_wide_pane_cp2

0x8dfe,	// (0x0001247a) bg_scroll_pane_ParamLimits

0x6311,	// (0x0000f98d) scroll_handle_pane_ParamLimits

0x6325,	// (0x0000f9a1) scroll_sc2_down_pane_ParamLimits

0x6325,	// (0x0000f9a1) scroll_sc2_down_pane

0x8e2f,	// (0x000124ab) scroll_sc2_up_pane_ParamLimits

0x8e2f,	// (0x000124ab) scroll_sc2_up_pane

0xc967,	// (0x00015fe3) grid_wheel_folder_pane_g1_ParamLimits

0xc967,	// (0x00015fe3) grid_wheel_folder_pane_g1

0x64ea,	// (0x0000fb66) clock_nsta_pane_cp2_ParamLimits

0x64ea,	// (0x0000fb66) clock_nsta_pane_cp2

0x965f,	// (0x00012cdb) listscroll_midp_pane_ParamLimits

0x966b,	// (0x00012ce7) midp_canvas_pane

0x9955,	// (0x00012fd1) nsta_clock_indic_pane

0x99b3,	// (0x0001302f) listscroll_form_pane_vc

0x99cf,	// (0x0001304b) listscroll_set_pane_vc_ParamLimits

0x99cf,	// (0x0001304b) listscroll_set_pane_vc

0xa06f,	// (0x000136eb) clock_nsta_pane

0xa0e4,	// (0x00013760) indicator_nsta_pane

0xa3bd,	// (0x00013a39) bg_popup_sub_pane_cp2_ParamLimits

0xa3d1,	// (0x00013a4d) find_pane_cp2_ParamLimits

0xa3d1,	// (0x00013a4d) find_pane_cp2

0xa3e7,	// (0x00013a63) grid_toobar_pane_ParamLimits

0xa5a7,	// (0x00013c23) list_form_gen_pane_vc_ParamLimits

0xa5a7,	// (0x00013c23) list_form_gen_pane_vc

0xa5bd,	// (0x00013c39) scroll_pane_cp8_vc_ParamLimits

0xa5bd,	// (0x00013c39) scroll_pane_cp8_vc

0xa639,	// (0x00013cb5) data_form_wide_pane_vc_ParamLimits

0xa639,	// (0x00013cb5) data_form_wide_pane_vc

0xa645,	// (0x00013cc1) form_field_data_wide_pane_vc_g1

0xa64d,	// (0x00013cc9) form_field_data_wide_pane_vc_t1_ParamLimits

0xa64d,	// (0x00013cc9) form_field_data_wide_pane_vc_t1

0x880d,	// (0x00011e89) input_focus_pane_cp6_vc_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_cp6_vc

0xa98f,	// (0x0001400b) list_midp_pane_ParamLimits

0xa99b,	// (0x00014017) scroll_pane_cp16_ParamLimits

0xa99b,	// (0x00014017) scroll_pane_cp16

0xa9db,	// (0x00014057) button_value_adjust_pane_ParamLimits

0xa9db,	// (0x00014057) button_value_adjust_pane

0xb96d,	// (0x00014fe9) button_value_adjust_pane_cp6_ParamLimits

0xb96d,	// (0x00014fe9) button_value_adjust_pane_cp6

0xba97,	// (0x00015113) settings_code_pane_cp_ParamLimits

0xba97,	// (0x00015113) settings_code_pane_cp

0x793c,	// (0x00010fb8) cell_touch_pane_g1

0x793c,	// (0x00010fb8) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00018dbe) cell_touch_pane_g

0xc105,	// (0x00015781) cell_touch_pane_cp_ParamLimits

0xc105,	// (0x00015781) cell_touch_pane_cp

0xc115,	// (0x00015791) cell_touch_pane_ParamLimits

0xc115,	// (0x00015791) cell_touch_pane

0x793c,	// (0x00010fb8) scroll_sc2_down_pane_g1

0x793c,	// (0x00010fb8) scroll_sc2_up_pane_g1

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp4_vc

0xc147,	// (0x000157c3) list_set_graphic_pane_vc_g1_ParamLimits

0xc147,	// (0x000157c3) list_set_graphic_pane_vc_g1

0xc153,	// (0x000157cf) list_set_graphic_pane_vc_g2_ParamLimits

0xc153,	// (0x000157cf) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x000190af) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x000190af) list_set_graphic_pane_vc_g

0xc15f,	// (0x000157db) text_primary_small_cp13_vc_ParamLimits

0xc15f,	// (0x000157db) text_primary_small_cp13_vc

0xc177,	// (0x000157f3) list_set_graphic_pane_vc_ParamLimits

0xc177,	// (0x000157f3) list_set_graphic_pane_vc

0x7946,	// (0x00010fc2) input_focus_pane_cp2_vc

0x793c,	// (0x00010fb8) setting_code_pane_vc_g1

0xc18b,	// (0x00015807) setting_code_pane_vc_t1

0xc199,	// (0x00015815) set_text_pane_vc_t1_ParamLimits

0xc199,	// (0x00015815) set_text_pane_vc_t1

0x7946,	// (0x00010fc2) input_focus_pane_cp1_vc

0xc1b4,	// (0x00015830) list_set_text_pane_vc

0x793c,	// (0x00010fb8) setting_text_pane_vc_g1

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp2_vc

0xc1be,	// (0x0001583a) setting_slider_graphic_pane_vc_g1

0xc1c6,	// (0x00015842) setting_slider_graphic_pane_vc_t1

0xc1d4,	// (0x00015850) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x000190b4) setting_slider_graphic_pane_vc_t

0xc1e2,	// (0x0001585e) slider_set_pane_cp_vc

0xc1ea,	// (0x00015866) slider_set_pane_vc_g1

0xc1f3,	// (0x0001586f) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x000190b9) slider_set_pane_vc_g

0x8945,	// (0x00011fc1) set_opt_bg_pane_g1_copy1

0x894d,	// (0x00011fc9) set_opt_bg_pane_g2_copy1

0xc21f,	// (0x0001589b) set_opt_bg_pane_g3_copy1

0x895d,	// (0x00011fd9) set_opt_bg_pane_g4_copy1

0x8965,	// (0x00011fe1) set_opt_bg_pane_g5_copy1

0x896d,	// (0x00011fe9) set_opt_bg_pane_g6_copy1

0xc229,	// (0x000158a5) set_opt_bg_pane_g7_copy1

0xc231,	// (0x000158ad) set_opt_bg_pane_g8_copy1

0xc23b,	// (0x000158b7) set_opt_bg_pane_g9_copy1

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp_vc

0xc245,	// (0x000158c1) setting_slider_pane_vc_t1

0xc1c6,	// (0x00015842) setting_slider_pane_vc_t2

0xc1d4,	// (0x00015850) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x000190c8) setting_slider_pane_vc_t

0xc1e2,	// (0x0001585e) slider_set_pane_vc

0x6900,	// (0x0000ff7c) volume_set_pane_vc_g1

0x6909,	// (0x0000ff85) volume_set_pane_vc_g2

0x6912,	// (0x0000ff8e) volume_set_pane_vc_g3

0x691b,	// (0x0000ff97) volume_set_pane_vc_g4

0x6924,	// (0x0000ffa0) volume_set_pane_vc_g5

0x692d,	// (0x0000ffa9) volume_set_pane_vc_g6

0x6936,	// (0x0000ffb2) volume_set_pane_vc_g7

0x693f,	// (0x0000ffbb) volume_set_pane_vc_g8

0x6948,	// (0x0000ffc4) volume_set_pane_vc_g9

0x6951,	// (0x0000ffcd) volume_set_pane_vc_g10

0x0009,

0xf8ea,	// (0x00018f66) volume_set_pane_vc_g

0xc254,	// (0x000158d0) volume_set_pane_vc

0xc25c,	// (0x000158d8) button_value_adjust_pane_cp1_vc

0xc266,	// (0x000158e2) list_highlight_pane_cp2_vc

0xc26f,	// (0x000158eb) list_set_pane_vc_ParamLimits

0xc26f,	// (0x000158eb) list_set_pane_vc

0xc2d9,	// (0x00015955) main_pane_set_vc_t1_ParamLimits

0xc2d9,	// (0x00015955) main_pane_set_vc_t1

0xc2ee,	// (0x0001596a) main_pane_set_vc_t2_ParamLimits

0xc2ee,	// (0x0001596a) main_pane_set_vc_t2

0xc300,	// (0x0001597c) main_pane_set_vc_t3_ParamLimits

0xc300,	// (0x0001597c) main_pane_set_vc_t3

0xc314,	// (0x00015990) main_pane_set_vc_t4_ParamLimits

0xc314,	// (0x00015990) main_pane_set_vc_t4

0x0003,

0xfa53,	// (0x000190cf) main_pane_set_vc_t_ParamLimits

0xfa53,	// (0x000190cf) main_pane_set_vc_t

0xc328,	// (0x000159a4) setting_code_pane_vc_ParamLimits

0xc328,	// (0x000159a4) setting_code_pane_vc

0xc339,	// (0x000159b5) setting_slider_graphic_pane_vc

0xc339,	// (0x000159b5) setting_slider_pane_vc

0xc339,	// (0x000159b5) setting_text_pane_vc

0xc339,	// (0x000159b5) setting_volume_pane_vc

0xc343,	// (0x000159bf) scroll_pane_cp121_vc

0x8715,	// (0x00011d91) set_content_pane_vc

0xc566,	// (0x00015be2) button_value_adjust_pane_g1

0xc56f,	// (0x00015beb) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00019129) button_value_adjust_pane_g

0xc578,	// (0x00015bf4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc578,	// (0x00015bf4) form_field_slider_wide_pane_vc_t1

0xc58c,	// (0x00015c08) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc58c,	// (0x00015c08) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x0001912e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x0001912e) form_field_slider_wide_pane_vc_t

0x7cbb,	// (0x00011337) input_focus_pane_cp10_vc_ParamLimits

0x7cbb,	// (0x00011337) input_focus_pane_cp10_vc

0xc59e,	// (0x00015c1a) slider_cont_pane_cp1_vc_ParamLimits

0xc59e,	// (0x00015c1a) slider_cont_pane_cp1_vc

0xc1ea,	// (0x00015866) slider_form_pane_g1_cp2

0xc1f3,	// (0x0001586f) slider_form_pane_g2_cp2

0xc5b7,	// (0x00015c33) form_field_slider_pane_vc_t3

0xc5c5,	// (0x00015c41) form_field_slider_pane_vc_t4

0xc5d3,	// (0x00015c4f) slider_form_pane_vc_ParamLimits

0xc5d3,	// (0x00015c4f) slider_form_pane_vc

0xc5e0,	// (0x00015c5c) form_field_slider_pane_vc_t1_ParamLimits

0xc5e0,	// (0x00015c5c) form_field_slider_pane_vc_t1

0xc58c,	// (0x00015c08) form_field_slider_pane_vc_t2_ParamLimits

0xc58c,	// (0x00015c08) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x0001913e) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x0001913e) form_field_slider_pane_vc_t

0x7cbb,	// (0x00011337) input_focus_pane_cp9_vc_ParamLimits

0x7cbb,	// (0x00011337) input_focus_pane_cp9_vc

0xc5fc,	// (0x00015c78) slider_cont_pane_vc_ParamLimits

0xc5fc,	// (0x00015c78) slider_cont_pane_vc

0xc60e,	// (0x00015c8a) list_form_graphic_pane_cp_vc_ParamLimits

0xc60e,	// (0x00015c8a) list_form_graphic_pane_cp_vc

0xa645,	// (0x00013cc1) form_field_popup_wide_pane_vc_g1

0xc623,	// (0x00015c9f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc623,	// (0x00015c9f) form_field_popup_wide_pane_vc_t1

0x880d,	// (0x00011e89) input_focus_pane_cp8_vc_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_cp8_vc

0xc63a,	// (0x00015cb6) list_form_wide_pane_vc_ParamLimits

0xc63a,	// (0x00015cb6) list_form_wide_pane_vc

0xc646,	// (0x00015cc2) list_form_graphic_pane_vc_g1

0xc64e,	// (0x00015cca) list_form_graphic_pane_vc_t1_ParamLimits

0xc64e,	// (0x00015cca) list_form_graphic_pane_vc_t1

0x7a26,	// (0x000110a2) list_highlight_pane_cp5_vc_ParamLimits

0x7a26,	// (0x000110a2) list_highlight_pane_cp5_vc

0xc66a,	// (0x00015ce6) list_form_graphic_pane_vc_ParamLimits

0xc66a,	// (0x00015ce6) list_form_graphic_pane_vc

0xa645,	// (0x00013cc1) form_field_popup_pane_vc_g1

0xc680,	// (0x00015cfc) form_field_popup_pane_vc_t1_ParamLimits

0xc680,	// (0x00015cfc) form_field_popup_pane_vc_t1

0x880d,	// (0x00011e89) input_focus_pane_cp7_vc_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_cp7_vc

0xc697,	// (0x00015d13) list_form_pane_vc_ParamLimits

0xc697,	// (0x00015d13) list_form_pane_vc

0xc6a3,	// (0x00015d1f) data_form_pane_vc_t1_ParamLimits

0xc6a3,	// (0x00015d1f) data_form_pane_vc_t1

0x8945,	// (0x00011fc1) input_focus_pane_vc_g1

0x894d,	// (0x00011fc9) input_focus_pane_vc_g2

0x8955,	// (0x00011fd1) input_focus_pane_vc_g3

0x895d,	// (0x00011fd9) input_focus_pane_vc_g4

0x8965,	// (0x00011fe1) input_focus_pane_vc_g5

0x896d,	// (0x00011fe9) input_focus_pane_vc_g6

0x8975,	// (0x00011ff1) input_focus_pane_vc_g7

0x897d,	// (0x00011ff9) input_focus_pane_vc_g8

0x8985,	// (0x00012001) input_focus_pane_vc_g9

0x793c,	// (0x00010fb8) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00018d47) input_focus_pane_vc_g

0xa639,	// (0x00013cb5) data_form_pane_vc_ParamLimits

0xa639,	// (0x00013cb5) data_form_pane_vc

0xa645,	// (0x00013cc1) form_field_data_pane_vc_g1

0xc6be,	// (0x00015d3a) form_field_data_pane_vc_t1_ParamLimits

0xc6be,	// (0x00015d3a) form_field_data_pane_vc_t1

0x880d,	// (0x00011e89) input_focus_pane_vc_ParamLimits

0x880d,	// (0x00011e89) input_focus_pane_vc

0xc6d8,	// (0x00015d54) button_value_adjust_pane_cp3_vc

0xc6e0,	// (0x00015d5c) button_value_adjust_pane_cp5_vc

0xc6e8,	// (0x00015d64) form_field_data_pane_vc_ParamLimits

0xc6e8,	// (0x00015d64) form_field_data_pane_vc

0xc6ff,	// (0x00015d7b) form_field_data_pane_vc_cp2

0xc707,	// (0x00015d83) form_field_data_wide_pane_vc_ParamLimits

0xc707,	// (0x00015d83) form_field_data_wide_pane_vc

0xc71d,	// (0x00015d99) form_field_data_wide_pane_vc_cp2

0xc725,	// (0x00015da1) form_field_popup_pane_vc_ParamLimits

0xc725,	// (0x00015da1) form_field_popup_pane_vc

0xc73c,	// (0x00015db8) form_field_popup_wide_pane_vc_ParamLimits

0xc73c,	// (0x00015db8) form_field_popup_wide_pane_vc

0xc752,	// (0x00015dce) form_field_slider_pane_vc_ParamLimits

0xc752,	// (0x00015dce) form_field_slider_pane_vc

0xc765,	// (0x00015de1) form_field_slider_wide_pane_vc_ParamLimits

0xc765,	// (0x00015de1) form_field_slider_wide_pane_vc

0xc778,	// (0x00015df4) grid_touch_1_pane_ParamLimits

0xc778,	// (0x00015df4) grid_touch_1_pane

0xc784,	// (0x00015e00) grid_touch_2_pane_ParamLimits

0xc784,	// (0x00015e00) grid_touch_2_pane

0x9920,	// (0x00012f9c) touch_pane_g1_ParamLimits

0x9920,	// (0x00012f9c) touch_pane_g1

0xc79c,	// (0x00015e18) cell_app_pane_cp_wide_ParamLimits

0xc79c,	// (0x00015e18) cell_app_pane_cp_wide

0xc7ad,	// (0x00015e29) grid_popup_fast_wide_pane_ParamLimits

0xc7ad,	// (0x00015e29) grid_popup_fast_wide_pane

0xc7c1,	// (0x00015e3d) scroll_pane_cp19_ParamLimits

0xc7c1,	// (0x00015e3d) scroll_pane_cp19

0x7946,	// (0x00010fc2) bg_popup_window_pane_cp20

0xc7d5,	// (0x00015e51) listscroll_popup_fast_wide_pane

0x7a26,	// (0x000110a2) grid_indicator_nsta_pane

0xc7dd,	// (0x00015e59) clock_nsta_pane_g1

0xc7e6,	// (0x00015e62) clock_nsta_pane_t1

0xc802,	// (0x00015e7e) cell_indicator_nsta_pane_ParamLimits

0xc802,	// (0x00015e7e) cell_indicator_nsta_pane

0xc83a,	// (0x00015eb6) cell_indicator_nsta_pane_g1

0xc848,	// (0x00015ec4) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x00019148) cell_indicator_nsta_pane_g

0xc85e,	// (0x00015eda) clock_nsta_pane_cp

0xc866,	// (0x00015ee2) indicator_nsta_pane_cp

0xc86e,	// (0x00015eea) nsta_clock_indic_pane_g1

0x7b09,	// (0x00011185) grid_indicator_pane

0x8f24,	// (0x000125a0) scroll_pane_cp29

0x6439,	// (0x0000fab5) indicator_nsta_pane_cp2_ParamLimits

0x6439,	// (0x0000fab5) indicator_nsta_pane_cp2

0x7a26,	// (0x000110a2) main_apps_wheel_pane

0xa870,	// (0x00013eec) form_midp_field_text_pane_ParamLimits

0xa9bb,	// (0x00014037) scroll_bar_cp050_ParamLimits

0xc8a6,	// (0x00015f22) cell_indicator_pane_ParamLimits

0xc8a6,	// (0x00015f22) cell_indicator_pane

0xc8bd,	// (0x00015f39) cell_indicator_pane_g1

0xc8c7,	// (0x00015f43) grid_wheel_folder_pane_ParamLimits

0xc8c7,	// (0x00015f43) grid_wheel_folder_pane

0xc8db,	// (0x00015f57) list_wheel_apps_pane_ParamLimits

0xc8db,	// (0x00015f57) list_wheel_apps_pane

0xc8ec,	// (0x00015f68) main_apps_wheel_pane_g1_ParamLimits

0xc8ec,	// (0x00015f68) main_apps_wheel_pane_g1

0xc900,	// (0x00015f7c) main_apps_wheel_pane_g2_ParamLimits

0xc900,	// (0x00015f7c) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x00019157) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x00019157) main_apps_wheel_pane_g

0xc918,	// (0x00015f94) main_apps_wheel_pane_t1_ParamLimits

0xc918,	// (0x00015f94) main_apps_wheel_pane_t1

0xc93b,	// (0x00015fb7) list_wheel_apps_pane_g1

0xc943,	// (0x00015fbf) list_wheel_apps_pane_g2

0xc94b,	// (0x00015fc7) list_wheel_apps_pane_g3

0xc953,	// (0x00015fcf) list_wheel_apps_pane_g4

0xc95d,	// (0x00015fd9) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x0001915c) list_wheel_apps_pane_g

0x94d7,	// (0x00012b53) navi_icon_text_pane

0x9fa2,	// (0x0001361e) aid_fill_nsta

0xc980,	// (0x00015ffc) navi_icon_text_pane_g1

0xc98f,	// (0x0001600b) navi_icon_text_pane_t1

0x9375,	// (0x000129f1) list_set_graphic_pane_t1_ParamLimits

0x9375,	// (0x000129f1) list_set_graphic_pane_t1

0xb0d9,	// (0x00014755) popup_midp_note_alarm_window_t6_ParamLimits

0xb0d9,	// (0x00014755) popup_midp_note_alarm_window_t6

0xb0eb,	// (0x00014767) popup_midp_note_alarm_window_t7_ParamLimits

0xb0eb,	// (0x00014767) popup_midp_note_alarm_window_t7

0xb0fd,	// (0x00014779) popup_midp_note_alarm_window_t8_ParamLimits

0xb0fd,	// (0x00014779) popup_midp_note_alarm_window_t8

0xb10f,	// (0x0001478b) popup_midp_note_alarm_window_t9_ParamLimits

0xb10f,	// (0x0001478b) popup_midp_note_alarm_window_t9

0xb121,	// (0x0001479d) popup_midp_note_alarm_window_t10_ParamLimits

0xb121,	// (0x0001479d) popup_midp_note_alarm_window_t10

0xb133,	// (0x000147af) popup_midp_note_alarm_window_t11_ParamLimits

0xb133,	// (0x000147af) popup_midp_note_alarm_window_t11

0xb145,	// (0x000147c1) scroll_pane_cp17_ParamLimits

0xb145,	// (0x000147c1) scroll_pane_cp17

0x6900,	// (0x0000ff7c) volume_small_pane_cp_g1

0x6bf5,	// (0x00010271) volume_small_pane_cp_g2

0x6bfe,	// (0x0001027a) volume_small_pane_cp_g3

0x6c07,	// (0x00010283) volume_small_pane_cp_g4

0x6c10,	// (0x0001028c) volume_small_pane_cp_g5

0x6c19,	// (0x00010295) volume_small_pane_cp_g6

0x6c22,	// (0x0001029e) volume_small_pane_cp_g7

0x6c2b,	// (0x000102a7) volume_small_pane_cp_g8

0x6c34,	// (0x000102b0) volume_small_pane_cp_g9

0x6c3d,	// (0x000102b9) volume_small_pane_cp_g10

0x9732,	// (0x00012dae) midp_ticker_pane_g1_ParamLimits

0x973e,	// (0x00012dba) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00018e0f) midp_ticker_pane_g_ParamLimits

0x974a,	// (0x00012dc6) midp_ticker_pane_t1_ParamLimits

0x9fb8,	// (0x00013634) aid_fill_nsta_2

0xa9a7,	// (0x00014023) list_form2_midp_pane

0xbb15,	// (0x00015191) midp_editing_number_pane_ParamLimits

0xbb24,	// (0x000151a0) midp_ticker_pane_ParamLimits

0xc9a4,	// (0x00016020) form2_midp_field_pane

0xc9c8,	// (0x00016044) scroll_pane_cp51

0xc9e8,	// (0x00016064) form2_midp_button_pane_ParamLimits

0xc9e8,	// (0x00016064) form2_midp_button_pane

0xc9fa,	// (0x00016076) form2_midp_content_pane_ParamLimits

0xc9fa,	// (0x00016076) form2_midp_content_pane

0xca14,	// (0x00016090) form2_midp_field_choice_group_pane

0xca1c,	// (0x00016098) form2_midp_field_pane_g1

0xca24,	// (0x000160a0) form2_midp_field_pane_g2

0xca2c,	// (0x000160a8) form2_midp_field_pane_g3

0xca34,	// (0x000160b0) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x00019181) form2_midp_field_pane_g

0xca3c,	// (0x000160b8) form2_midp_gauge_slider_pane

0xca44,	// (0x000160c0) form2_midp_gauge_wait_pane

0xca4c,	// (0x000160c8) form2_midp_image_pane_ParamLimits

0xca4c,	// (0x000160c8) form2_midp_image_pane

0xca67,	// (0x000160e3) form2_midp_label_pane_ParamLimits

0xca67,	// (0x000160e3) form2_midp_label_pane

0xca80,	// (0x000160fc) form2_midp_label_pane_cp_ParamLimits

0xca80,	// (0x000160fc) form2_midp_label_pane_cp

0xcaa1,	// (0x0001611d) form2_midp_string_pane_ParamLimits

0xcaa1,	// (0x0001611d) form2_midp_string_pane

0xcab3,	// (0x0001612f) form2_midp_text_pane_ParamLimits

0xcab3,	// (0x0001612f) form2_midp_text_pane

0xcad0,	// (0x0001614c) form2_midp_time_pane

0xcae0,	// (0x0001615c) input_focus_pane_cp51_ParamLimits

0xcae0,	// (0x0001615c) input_focus_pane_cp51

0xcaf8,	// (0x00016174) form2_midp_label_pane_t1_ParamLimits

0xcaf8,	// (0x00016174) form2_midp_label_pane_t1

0xcb39,	// (0x000161b5) form2_mdip_text_pane_t1_ParamLimits

0xcb39,	// (0x000161b5) form2_mdip_text_pane_t1

0xcb58,	// (0x000161d4) form2_midp_time_pane_t1

0xcb73,	// (0x000161ef) form2_midp_gauge_slider_pane_t1

0xcb85,	// (0x00016201) form2_midp_gauge_slider_pane_t2

0xcb97,	// (0x00016213) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x0001918a) form2_midp_gauge_slider_pane_t

0xcba9,	// (0x00016225) form2_midp_slider_pane

0xcbb5,	// (0x00016231) form2_midp_gauge_wait_pane_t1

0xcbc3,	// (0x0001623f) form2_midp_wait_pane_ParamLimits

0xcbc3,	// (0x0001623f) form2_midp_wait_pane

0xa664,	// (0x00013ce0) list_single_2graphic_pane_cp4_ParamLimits

0xa664,	// (0x00013ce0) list_single_2graphic_pane_cp4

0xcbee,	// (0x0001626a) list_single_midp_graphic_pane_cp_ParamLimits

0xcbee,	// (0x0001626a) list_single_midp_graphic_pane_cp

0x7946,	// (0x00010fc2) list_highlight_pane_cp20

0xcc1d,	// (0x00016299) list_single_2graphic_pane_g1_cp4

0xcc25,	// (0x000162a1) list_single_2graphic_pane_g2_cp4

0xcc2d,	// (0x000162a9) list_single_2graphic_pane_t1_cp4

0x7a26,	// (0x000110a2) list_highlight_pane_cp21

0xcc3c,	// (0x000162b8) list_single_midp_graphic_pane_g4_cp

0xcc4b,	// (0x000162c7) list_single_midp_graphic_pane_t1_cp

0xcc60,	// (0x000162dc) form2_mdip_string_pane_t1_ParamLimits

0xcc60,	// (0x000162dc) form2_mdip_string_pane_t1

0x7946,	// (0x00010fc2) bg_wml_button_pane_cp2

0x793c,	// (0x00010fb8) form2_midp_image_pane_g1

0x84ef,	// (0x00011b6b) list_double_large_graphic_pane_g5_ParamLimits

0x84ef,	// (0x00011b6b) list_double_large_graphic_pane_g5

0x965f,	// (0x00012cdb) midp_form_pane_ParamLimits

0x7a26,	// (0x000110a2) main_apps_wheel_pane_ParamLimits

0x9d8a,	// (0x00013406) popup_preview_window_ParamLimits

0x9d8a,	// (0x00013406) popup_preview_window

0x9f45,	// (0x000135c1) popup_touch_info_window_ParamLimits

0x9f45,	// (0x000135c1) popup_touch_info_window

0x9f63,	// (0x000135df) popup_touch_menu_window_ParamLimits

0x9f63,	// (0x000135df) popup_touch_menu_window

0x7932,	// (0x00010fae) bg_popup_sub_pane_cp6

0xcd59,	// (0x000163d5) list_touch_menu_pane

0xcd61,	// (0x000163dd) list_single_touch_menu_pane_ParamLimits

0xcd61,	// (0x000163dd) list_single_touch_menu_pane

0xcd78,	// (0x000163f4) list_single_touch_menu_pane_t1

0x7a26,	// (0x000110a2) bg_popup_sub_pane_cp7_ParamLimits

0x7a26,	// (0x000110a2) bg_popup_sub_pane_cp7

0xcd86,	// (0x00016402) heading_sub_pane

0xcd8e,	// (0x0001640a) list_touch_info_pane_ParamLimits

0xcd8e,	// (0x0001640a) list_touch_info_pane

0xcd9d,	// (0x00016419) list_single_touch_info_pane_ParamLimits

0xcd9d,	// (0x00016419) list_single_touch_info_pane

0xcdaf,	// (0x0001642b) list_single_touch_info_pane_t1

0xcdbd,	// (0x00016439) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x00019198) list_single_touch_info_pane_t

0x9657,	// (0x00012cd3) bg_popup_heading_pane_cp

0xcdcb,	// (0x00016447) heading_sub_pane_t1

0xa5d3,	// (0x00013c4f) bg_popup_preview_window_pane_cp_ParamLimits

0xa5d3,	// (0x00013c4f) bg_popup_preview_window_pane_cp

0xcd86,	// (0x00016402) heading_preview_pane

0xcd8e,	// (0x0001640a) list_preview_pane_ParamLimits

0xcd8e,	// (0x0001640a) list_preview_pane

0xcdd9,	// (0x00016455) popup_preview_window_g1

0xcd9d,	// (0x00016419) list_single_preview_pane_ParamLimits

0xcd9d,	// (0x00016419) list_single_preview_pane

0xcde1,	// (0x0001645d) list_single_preview_pane_g1

0xcde9,	// (0x00016465) list_single_preview_pane_t1

0xcdaf,	// (0x0001642b) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x0001919d) list_single_preview_pane_t

0xcdf7,	// (0x00016473) bg_popup_heading_pane_cp2_ParamLimits

0xcdf7,	// (0x00016473) bg_popup_heading_pane_cp2

0xce0d,	// (0x00016489) heading_preview_pane_g1

0xce15,	// (0x00016491) heading_preview_pane_t1_ParamLimits

0xce15,	// (0x00016491) heading_preview_pane_t1

0x7b2c,	// (0x000111a8) soft_indicator_pane_t1_ParamLimits

0x821f,	// (0x0001189b) scroll_pane_ParamLimits

0x8e1d,	// (0x00012499) scroll_sc2_left_pane

0x8e26,	// (0x000124a2) scroll_sc2_right_pane

0x8e45,	// (0x000124c1) scroll_bg_pane_g1_ParamLimits

0x8e5a,	// (0x000124d6) scroll_bg_pane_g2_ParamLimits

0x8e72,	// (0x000124ee) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00018d9e) scroll_bg_pane_g_ParamLimits

0x8e45,	// (0x000124c1) scroll_handle_pane_g1_ParamLimits

0x8e94,	// (0x00012510) scroll_handle_pane_g2_ParamLimits

0x8e72,	// (0x000124ee) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00018da5) scroll_handle_pane_g_ParamLimits

0x9a11,	// (0x0001308d) popup_choice_list_window_ParamLimits

0x9a11,	// (0x0001308d) popup_choice_list_window

0xa3c9,	// (0x00013a45) choice_list_pane

0xa485,	// (0x00013b01) cell_toolbar_pane_t1

0xa4ad,	// (0x00013b29) toolbar_button_pane_ParamLimits

0xb605,	// (0x00014c81) ai_gene_pane_1_t2_ParamLimits

0xb605,	// (0x00014c81) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00018fc2) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00018fc2) ai_gene_pane_1_t

0xce32,	// (0x000164ae) scroll_sc2_left_pane_g1

0xce32,	// (0x000164ae) scroll_sc2_right_pane_g1

0x99e1,	// (0x0001305d) bg_popup_sub_pane_cp10

0xce3c,	// (0x000164b8) list_choice_list_pane

0xce53,	// (0x000164cf) list_single_choice_list_pane_ParamLimits

0xce53,	// (0x000164cf) list_single_choice_list_pane

0xce67,	// (0x000164e3) list_single_choice_list_pane_g1

0xce6f,	// (0x000164eb) list_single_choice_list_pane_t1_ParamLimits

0xce6f,	// (0x000164eb) list_single_choice_list_pane_t1

0xce84,	// (0x00016500) choice_list_pane_g1

0xce8c,	// (0x00016508) choice_list_pane_t1

0x7932,	// (0x00010fae) input_focus_pane_cp11

0x8cff,	// (0x0001237b) title_pane_stacon_g2_ParamLimits

0x8cff,	// (0x0001237b) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00018d84) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00018d84) title_pane_stacon_g

0x9657,	// (0x00012cd3) cursor_press_pane

0x9ab9,	// (0x00013135) popup_fep_hwr_window_ParamLimits

0x9ab9,	// (0x00013135) popup_fep_hwr_window

0x9b33,	// (0x000131af) popup_fep_vkb_window_ParamLimits

0x9b33,	// (0x000131af) popup_fep_vkb_window

0xce9a,	// (0x00016516) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x000191c6) fep_vkb_side_pane_g_ParamLimits

0x6c7f,	// (0x000102fb) fep_hwr_candidate_pane_ParamLimits

0x6c7f,	// (0x000102fb) fep_hwr_candidate_pane

0x6ca9,	// (0x00010325) fep_hwr_side_pane_ParamLimits

0x6ca9,	// (0x00010325) fep_hwr_side_pane

0x6cc9,	// (0x00010345) fep_hwr_top_pane_ParamLimits

0x6cc9,	// (0x00010345) fep_hwr_top_pane

0x6ce1,	// (0x0001035d) fep_hwr_write_pane_ParamLimits

0x6ce1,	// (0x0001035d) fep_hwr_write_pane

0xfb4a,	// (0x000191c6) fep_vkb_side_pane_g

0xcea2,	// (0x0001651e) fep_hwr_top_pane_g1

0xceb4,	// (0x00016530) fep_hwr_top_pane_g2

0x6d1b,	// (0x00010397) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x000191a2) fep_hwr_top_pane_g

0x6d30,	// (0x000103ac) fep_hwr_top_text_pane

0x8feb,	// (0x00012667) fep_hwr_top_text_pane_g1

0xceea,	// (0x00016566) fep_hwr_top_text_pane_t1

0x6e26,	// (0x000104a2) fep_hwr_candidate_pane_g1

0xd13d,	// (0x000167b9) fep_vkb_keypad_pane_g3_ParamLimits

0xd13d,	// (0x000167b9) fep_vkb_keypad_pane_g3

0xd165,	// (0x000167e1) fep_vkb_keypad_pane_g4_ParamLimits

0xd165,	// (0x000167e1) fep_vkb_keypad_pane_g4

0xd1d4,	// (0x00016850) fep_vkb_bottom_pane_g2_ParamLimits

0xd1d4,	// (0x00016850) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x000191cd) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x000191cd) fep_vkb_bottom_pane_g

0xce32,	// (0x000164ae) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x000191d7) cell_vkb_side_pane_g

0xd25f,	// (0x000168db) cell_vkb_side_pane_t1

0xd26d,	// (0x000168e9) cell_vkb_side_pane_t1_copy1

0xce32,	// (0x000164ae) bg_fep_vkb_candidate_pane_g2

0xd399,	// (0x00016a15) cell_vkb_candidate_pane_ParamLimits

0xcef8,	// (0x00016574) aid_size_cell_vkb_ParamLimits

0xcef8,	// (0x00016574) aid_size_cell_vkb

0xd399,	// (0x00016a15) cell_vkb_candidate_pane

0x6e4d,	// (0x000104c9) bg_popup_fep_shadow_pane_g1

0xcf86,	// (0x00016602) fep_vkb_bottom_pane_ParamLimits

0xcf86,	// (0x00016602) fep_vkb_bottom_pane

0xcfbc,	// (0x00016638) fep_vkb_candidate_pane_ParamLimits

0xcfbc,	// (0x00016638) fep_vkb_candidate_pane

0xcfd8,	// (0x00016654) fep_vkb_keypad_pane_ParamLimits

0xcfd8,	// (0x00016654) fep_vkb_keypad_pane

0xd01e,	// (0x0001669a) fep_vkb_side_pane_ParamLimits

0xd01e,	// (0x0001669a) fep_vkb_side_pane

0xd05a,	// (0x000166d6) fep_vkb_top_pane_ParamLimits

0xd05a,	// (0x000166d6) fep_vkb_top_pane

0xd096,	// (0x00016712) fep_vkb_top_pane_g1_ParamLimits

0xd096,	// (0x00016712) fep_vkb_top_pane_g1

0xd0a5,	// (0x00016721) fep_vkb_top_pane_g2_ParamLimits

0xd0a5,	// (0x00016721) fep_vkb_top_pane_g2

0xd0b4,	// (0x00016730) fep_vkb_top_pane_g3_ParamLimits

0xd0b4,	// (0x00016730) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x000191bd) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x000191bd) fep_vkb_top_pane_g

0xd0d2,	// (0x0001674e) fep_vkb_top_text_pane_ParamLimits

0xd0d2,	// (0x0001674e) fep_vkb_top_text_pane

0xd0e3,	// (0x0001675f) fep_vkb_side_pane_g1_ParamLimits

0xd0e3,	// (0x0001675f) fep_vkb_side_pane_g1

0xd12c,	// (0x000167a8) grid_vkb_side_pane_ParamLimits

0xd12c,	// (0x000167a8) grid_vkb_side_pane

0x6e55,	// (0x000104d1) bg_popup_fep_shadow_pane_g2

0x6e5e,	// (0x000104da) bg_popup_fep_shadow_pane_g3

0x6e66,	// (0x000104e2) bg_popup_fep_shadow_pane_g4

0x6e6f,	// (0x000104eb) bg_popup_fep_shadow_pane_g5

0x6e79,	// (0x000104f5) bg_popup_fep_shadow_pane_g6

0x6e81,	// (0x000104fd) bg_popup_fep_shadow_pane_g7

0x895d,	// (0x00011fd9) bg_popup_fep_shadow_pane_g8

0xd183,	// (0x000167ff) grid_vkb_keypad_number_pane_ParamLimits

0xd183,	// (0x000167ff) grid_vkb_keypad_number_pane

0xd193,	// (0x0001680f) grid_vkb_keypad_pane_ParamLimits

0xd193,	// (0x0001680f) grid_vkb_keypad_pane

0xd1b9,	// (0x00016835) fep_vkb_bottom_pane_g1_ParamLimits

0xd1b9,	// (0x00016835) fep_vkb_bottom_pane_g1

0xd1e2,	// (0x0001685e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd1e2,	// (0x0001685e) grid_vkb_keypad_bottom_left_pane

0xd1f7,	// (0x00016873) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd1f7,	// (0x00016873) grid_vkb_keypad_bottom_right_pane

0xd20c,	// (0x00016888) fep_vkb_top_text_pane_g1

0xd227,	// (0x000168a3) fep_vkb_top_text_pane_t1

0xd23c,	// (0x000168b8) cell_vkb_side_pane_ParamLimits

0xd23c,	// (0x000168b8) cell_vkb_side_pane

0xce32,	// (0x000164ae) cell_vkb_side_pane_g1

0xd27b,	// (0x000168f7) cell_vkb_keypad_pane_ParamLimits

0xd27b,	// (0x000168f7) cell_vkb_keypad_pane

0xd2f0,	// (0x0001696c) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x000191ea) bg_popup_fep_shadow_pane_g

0x6e93,	// (0x0001050f) cell_hwr_side_pane_g1

0x6e93,	// (0x0001050f) cell_hwr_side_pane_g2

0xd2fa,	// (0x00016976) cell_vkb_keypad_pane_t1

0xd308,	// (0x00016984) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd308,	// (0x00016984) cell_vkb_keypad_bottom_left_pane

0xd325,	// (0x000169a1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd325,	// (0x000169a1) cell_vkb_keypad_bottom_right_pane

0xce32,	// (0x000164ae) cell_vkb_keypad_bottom_left_pane_g1

0xce32,	// (0x000164ae) cell_vkb_keypad_bottom_right_pane_g1

0xd35e,	// (0x000169da) cell_vkb_keypad_number_pane_ParamLimits

0xd35e,	// (0x000169da) cell_vkb_keypad_number_pane

0xd37d,	// (0x000169f9) cell_vkb_keypad_number_pane_g1

0xd387,	// (0x00016a03) cell_vkb_keypad_number_pane_g2

0xd390,	// (0x00016a0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x000191dc) cell_vkb_keypad_number_pane_g

0xd2fa,	// (0x00016976) cell_vkb_keypad_number_pane_t1

0xd3b4,	// (0x00016a30) fep_vkb_candidate_pane_g1

0x0001,

0xfb81,	// (0x000191fd) cell_hwr_side_pane_g

0xd3cd,	// (0x00016a49) cell_hwr_side_pane_t1

0x6e9d,	// (0x00010519) cell_hwr_side_pane_t1_copy1

0x6eab,	// (0x00010527) cell_hwr_candidate_pane_g1

0x6eda,	// (0x00010556) cell_hwr_candidate_pane_t1

0xce32,	// (0x000164ae) cell_vkb_candidate_pane_g2

0xd411,	// (0x00016a8d) cell_vkb_candidate_pane_t1

0x6c46,	// (0x000102c2) bg_popup_fep_shadow_pane_ParamLimits

0x6c46,	// (0x000102c2) bg_popup_fep_shadow_pane

0x6cfb,	// (0x00010377) bg_fep_hwr_top_pane_g4

0xcec6,	// (0x00016542) bg_hwr_side_pane_g1_ParamLimits

0xcec6,	// (0x00016542) bg_hwr_side_pane_g1

0x6d6c,	// (0x000103e8) cell_hwr_side_pane_ParamLimits

0x6d6c,	// (0x000103e8) cell_hwr_side_pane

0x6da7,	// (0x00010423) fep_hwr_write_pane_g1_ParamLimits

0x6da7,	// (0x00010423) fep_hwr_write_pane_g1

0x6db4,	// (0x00010430) fep_hwr_write_pane_g2_ParamLimits

0x6db4,	// (0x00010430) fep_hwr_write_pane_g2

0x6dc1,	// (0x0001043d) fep_hwr_write_pane_g3_ParamLimits

0x6dc1,	// (0x0001043d) fep_hwr_write_pane_g3

0x6dcf,	// (0x0001044b) fep_hwr_write_pane_g4_ParamLimits

0x6dcf,	// (0x0001044b) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x000191a9) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x000191a9) fep_hwr_write_pane_g

0x6cfb,	// (0x00010377) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6cfb,	// (0x00010377) bg_fep_hwr_candidate_pane_g2

0x6de4,	// (0x00010460) cell_hwr_candidate_pane_ParamLimits

0x6de4,	// (0x00010460) cell_hwr_candidate_pane

0x6e26,	// (0x000104a2) fep_hwr_candidate_pane_g1_ParamLimits

0xcf26,	// (0x000165a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcf26,	// (0x000165a2) bg_popup_fep_shadow_pane_cp2

0xd0c4,	// (0x00016740) fep_vkb_top_pane_g4_ParamLimits

0xd0c4,	// (0x00016740) fep_vkb_top_pane_g4

0xd10a,	// (0x00016786) fep_vkb_side_pane_g2_ParamLimits

0xd10a,	// (0x00016786) fep_vkb_side_pane_g2

0x862f,	// (0x00011cab) list_setting_pane_t4_ParamLimits

0x862f,	// (0x00011cab) list_setting_pane_t4

0x86a9,	// (0x00011d25) list_setting_number_pane_t5_ParamLimits

0x86a9,	// (0x00011d25) list_setting_number_pane_t5

0x902d,	// (0x000126a9) list_double_heading_pane_cp2_ParamLimits

0x902d,	// (0x000126a9) list_double_heading_pane_cp2

0x8833,	// (0x00011eaf) list_double_heading_pane_g1_cp2_ParamLimits

0x8833,	// (0x00011eaf) list_double_heading_pane_g1_cp2

0x883f,	// (0x00011ebb) list_double_heading_pane_g2_cp2_ParamLimits

0x883f,	// (0x00011ebb) list_double_heading_pane_g2_cp2

0xd41f,	// (0x00016a9b) list_double_heading_pane_t1_cp2_ParamLimits

0xd41f,	// (0x00016a9b) list_double_heading_pane_t1_cp2

0xd435,	// (0x00016ab1) list_double_heading_pane_t2_cp2_ParamLimits

0xd435,	// (0x00016ab1) list_double_heading_pane_t2_cp2

0x791a,	// (0x00010f96) aid_value_unit2

0x5fd1,	// (0x0000f64d) popup_preview_fixed_window

0x7cc9,	// (0x00011345) bg_popup_preview_window_pane_cp02

0xd447,	// (0x00016ac3) list_preview_fixed_pane

0xd48d,	// (0x00016b09) list_empty_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_empty_pane_fp

0xd48d,	// (0x00016b09) list_single_cale_day_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_cale_day_pane_fp

0xd48d,	// (0x00016b09) list_single_graphic_heading_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_graphic_heading_pane_fp

0xd48d,	// (0x00016b09) list_single_graphic_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_graphic_pane_fp

0xd48d,	// (0x00016b09) list_single_heading_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_heading_pane_fp

0xd48d,	// (0x00016b09) list_single_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_pane_fp

0xd4a2,	// (0x00016b1e) list_single_pane_fp_g1_ParamLimits

0xd4a2,	// (0x00016b1e) list_single_pane_fp_g1

0x8470,	// (0x00011aec) list_single_pane_fp_g2_ParamLimits

0x8470,	// (0x00011aec) list_single_pane_fp_g2

0xd4ae,	// (0x00016b2a) list_single_pane_fp_g3_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_pane_fp_g3

0xd4c2,	// (0x00016b3e) list_single_pane_fp_g4_ParamLimits

0xd4c2,	// (0x00016b3e) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x00019210) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x00019210) list_single_pane_fp_g

0xd4ce,	// (0x00016b4a) list_single_pane_fp_t1_ParamLimits

0xd4ce,	// (0x00016b4a) list_single_pane_fp_t1

0xd4e5,	// (0x00016b61) list_single_graphic_pane_fp_g1_ParamLimits

0xd4e5,	// (0x00016b61) list_single_graphic_pane_fp_g1

0xd4a2,	// (0x00016b1e) list_single_graphic_pane_fp_g2_ParamLimits

0xd4a2,	// (0x00016b1e) list_single_graphic_pane_fp_g2

0x8470,	// (0x00011aec) list_single_graphic_pane_fp_g3_ParamLimits

0x8470,	// (0x00011aec) list_single_graphic_pane_fp_g3

0xd4ae,	// (0x00016b2a) list_single_graphic_pane_fp_g4_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_graphic_pane_fp_g4

0xd4c2,	// (0x00016b3e) list_single_graphic_pane_fp_g5_ParamLimits

0xd4c2,	// (0x00016b3e) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019219) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019219) list_single_graphic_pane_fp_g

0xd4f1,	// (0x00016b6d) list_single_graphic_pane_fp_t1_ParamLimits

0xd4f1,	// (0x00016b6d) list_single_graphic_pane_fp_t1

0xd4e5,	// (0x00016b61) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd4e5,	// (0x00016b61) list_single_graphic_heading_pane_fp_g1

0xd4a2,	// (0x00016b1e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd4a2,	// (0x00016b1e) list_single_graphic_heading_pane_fp_g2

0x8470,	// (0x00011aec) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8470,	// (0x00011aec) list_single_graphic_heading_pane_fp_g3

0xd4ae,	// (0x00016b2a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_graphic_heading_pane_fp_g4

0xd4c2,	// (0x00016b3e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd4c2,	// (0x00016b3e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019219) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019219) list_single_graphic_heading_pane_fp_g

0xd507,	// (0x00016b83) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd507,	// (0x00016b83) list_single_graphic_heading_pane_fp_t1

0xd51d,	// (0x00016b99) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd51d,	// (0x00016b99) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x00019224) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x00019224) list_single_graphic_heading_pane_fp_t

0xd52f,	// (0x00016bab) list_single_cale_day_pane_fp_g1_ParamLimits

0xd52f,	// (0x00016bab) list_single_cale_day_pane_fp_g1

0xd567,	// (0x00016be3) list_single_cale_day_pane_fp_g2_ParamLimits

0xd567,	// (0x00016be3) list_single_cale_day_pane_fp_g2

0xd573,	// (0x00016bef) list_single_cale_day_pane_fp_g3_ParamLimits

0xd573,	// (0x00016bef) list_single_cale_day_pane_fp_g3

0xd59b,	// (0x00016c17) list_single_cale_day_pane_fp_g4_ParamLimits

0xd59b,	// (0x00016c17) list_single_cale_day_pane_fp_g4

0xd5bf,	// (0x00016c3b) list_single_cale_day_pane_fp_g5_ParamLimits

0xd5bf,	// (0x00016c3b) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x00019229) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x00019229) list_single_cale_day_pane_fp_g

0xd5e3,	// (0x00016c5f) list_single_cale_day_pane_fp_t1_ParamLimits

0xd5e3,	// (0x00016c5f) list_single_cale_day_pane_fp_t1

0xd609,	// (0x00016c85) list_single_cale_day_pane_fp_t2_ParamLimits

0xd609,	// (0x00016c85) list_single_cale_day_pane_fp_t2

0xd622,	// (0x00016c9e) list_single_cale_day_pane_fp_t3_ParamLimits

0xd622,	// (0x00016c9e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x00019234) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x00019234) list_single_cale_day_pane_fp_t

0xd4a2,	// (0x00016b1e) list_empty_pane_fp_g1_ParamLimits

0xd4a2,	// (0x00016b1e) list_empty_pane_fp_g1

0xd63b,	// (0x00016cb7) list_empty_pane_fp_t1

0xd649,	// (0x00016cc5) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x0001923b) list_empty_pane_fp_t

0xd4a2,	// (0x00016b1e) list_single_heading_pane_fp_g1_ParamLimits

0xd4a2,	// (0x00016b1e) list_single_heading_pane_fp_g1

0x8470,	// (0x00011aec) list_single_heading_pane_fp_g2_ParamLimits

0x8470,	// (0x00011aec) list_single_heading_pane_fp_g2

0xd4ae,	// (0x00016b2a) list_single_heading_pane_fp_g3_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x00019240) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x00019240) list_single_heading_pane_fp_g

0xd6a7,	// (0x00016d23) list_single_heading_pane_fp_t1_ParamLimits

0xd6a7,	// (0x00016d23) list_single_heading_pane_fp_t1

0xd6b9,	// (0x00016d35) list_single_heading_pane_fp_t2_ParamLimits

0xd6b9,	// (0x00016d35) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x00019247) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x00019247) list_single_heading_pane_fp_t

0x8b96,	// (0x00012212) aid_size_cell_fast

0x7c39,	// (0x000112b5) soft_indicator_pane_cp1_t1

0x8bd3,	// (0x0001224f) cell_app_pane_cp2_ParamLimits

0x8bd3,	// (0x0001224f) cell_app_pane_cp2

0x6c68,	// (0x000102e4) fep_hwr_candidate_drop_down_list_pane

0x6e40,	// (0x000104bc) fep_hwr_candidate_pane_g3_ParamLimits

0x6e40,	// (0x000104bc) fep_hwr_candidate_pane_g3

0x5198,	// (0x0000e814) fep_hwr_candidate_pane_g4_ParamLimits

0x5198,	// (0x0000e814) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x000191b6) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x000191b6) fep_hwr_candidate_pane_g

0xcfab,	// (0x00016627) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcfab,	// (0x00016627) fep_vkb_candidate_drop_down_list_pane

0xd3bc,	// (0x00016a38) fep_vkb_candidate_pane_g3

0xd3c4,	// (0x00016a40) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x000191e3) fep_vkb_candidate_pane_g

0x6eab,	// (0x00010527) cell_hwr_candidate_pane_g1_ParamLimits

0x6eb9,	// (0x00010535) cell_hwr_candidate_pane_g3_ParamLimits

0x6eb9,	// (0x00010535) cell_hwr_candidate_pane_g3

0xf475,	// (0x00018af1) cell_hwr_candidate_pane_g4_ParamLimits

0xf475,	// (0x00018af1) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x00019202) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x00019202) cell_hwr_candidate_pane_g

0xd3db,	// (0x00016a57) cell_vkb_candidate_pane_g3_ParamLimits

0xd3db,	// (0x00016a57) cell_vkb_candidate_pane_g3

0xd3f6,	// (0x00016a72) cell_vkb_candidate_pane_g4_ParamLimits

0xd3f6,	// (0x00016a72) cell_vkb_candidate_pane_g4

0xd6cf,	// (0x00016d4b) cell_app_pane_cp2_g1_ParamLimits

0xd6cf,	// (0x00016d4b) cell_app_pane_cp2_g1

0xd6ed,	// (0x00016d69) cell_app_pane_cp2_g2_ParamLimits

0xd6ed,	// (0x00016d69) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x0001924c) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x0001924c) cell_app_pane_cp2_g

0xd6f9,	// (0x00016d75) cell_app_pane_cp2_t1_ParamLimits

0xd6f9,	// (0x00016d75) cell_app_pane_cp2_t1

0x880d,	// (0x00011e89) grid_highlight_pane_cp1_ParamLimits

0x880d,	// (0x00011e89) grid_highlight_pane_cp1

0x6ef8,	// (0x00010574) cell_hwr_candidate_pane_cp1_ParamLimits

0x6ef8,	// (0x00010574) cell_hwr_candidate_pane_cp1

0x6eab,	// (0x00010527) fep_hwr_candidate_drop_down_list_pane_g1

0x6f17,	// (0x00010593) fep_hwr_candidate_drop_down_list_pane_g2

0x6f24,	// (0x000105a0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x00019251) fep_hwr_candidate_drop_down_list_pane_g

0x6f31,	// (0x000105ad) fep_hwr_candidate_drop_down_list_scroll_pane

0x6f3a,	// (0x000105b6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6f3a,	// (0x000105b6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6f47,	// (0x000105c3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6f47,	// (0x000105c3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6f54,	// (0x000105d0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6f54,	// (0x000105d0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f61,	// (0x000105dd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f61,	// (0x000105dd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f7c,	// (0x000105f8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f7c,	// (0x000105f8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6f97,	// (0x00010613) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6f97,	// (0x00010613) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6fb2,	// (0x0001062e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6fb2,	// (0x0001062e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6fcd,	// (0x00010649) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6fcd,	// (0x00010649) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x00019258) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x00019258) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd70b,	// (0x00016d87) cell_vkb_candidate_pane_cp1_ParamLimits

0xd70b,	// (0x00016d87) cell_vkb_candidate_pane_cp1

0xd0c4,	// (0x00016740) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd0c4,	// (0x00016740) fep_vkb_candidate_drop_down_list_pane_g1

0xd72b,	// (0x00016da7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd72b,	// (0x00016da7) fep_vkb_candidate_drop_down_list_pane_g2

0xd738,	// (0x00016db4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd738,	// (0x00016db4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbed,	// (0x00019269) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbed,	// (0x00019269) fep_vkb_candidate_drop_down_list_pane_g

0xd745,	// (0x00016dc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd745,	// (0x00016dc1) fep_vkb_candidate_drop_down_list_scroll_pane

0xd752,	// (0x00016dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd752,	// (0x00016dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd75f,	// (0x00016ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd75f,	// (0x00016ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd76b,	// (0x00016de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd76b,	// (0x00016de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd657,	// (0x00016cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd657,	// (0x00016cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd678,	// (0x00016cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd678,	// (0x00016cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd777,	// (0x00016df3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd777,	// (0x00016df3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd798,	// (0x00016e14) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd798,	// (0x00016e14) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd7b9,	// (0x00016e35) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd7b9,	// (0x00016e35) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x00019270) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x00019270) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7950,	// (0x00010fcc) title_pane_g1_ParamLimits

0x795d,	// (0x00010fd9) title_pane_g2_ParamLimits

0xf592,	// (0x00018c0e) title_pane_g_ParamLimits

0x8fdb,	// (0x00012657) aid_call2_pane

0x8fe3,	// (0x0001265f) aid_call_pane

0x8feb,	// (0x00012667) popup_clock_analogue_window_g1

0x8feb,	// (0x00012667) popup_clock_analogue_window_g2

0x633a,	// (0x0000f9b6) popup_clock_analogue_window_g3

0x6343,	// (0x0000f9bf) popup_clock_analogue_window_g4

0x793c,	// (0x00010fb8) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00018db3) popup_clock_analogue_window_g

0x634b,	// (0x0000f9c7) popup_clock_analogue_window_t1

0x6359,	// (0x0000f9d5) clock_digital_number_pane_ParamLimits

0x6359,	// (0x0000f9d5) clock_digital_number_pane

0x6365,	// (0x0000f9e1) clock_digital_number_pane_cp02_ParamLimits

0x6365,	// (0x0000f9e1) clock_digital_number_pane_cp02

0x6371,	// (0x0000f9ed) clock_digital_number_pane_cp03_ParamLimits

0x6371,	// (0x0000f9ed) clock_digital_number_pane_cp03

0x637d,	// (0x0000f9f9) clock_digital_number_pane_cp04_ParamLimits

0x637d,	// (0x0000f9f9) clock_digital_number_pane_cp04

0x6389,	// (0x0000fa05) clock_digital_separator_pane_ParamLimits

0x6389,	// (0x0000fa05) clock_digital_separator_pane

0x6395,	// (0x0000fa11) popup_clock_digital_window_t1_ParamLimits

0x6395,	// (0x0000fa11) popup_clock_digital_window_t1

0x793c,	// (0x00010fb8) clock_digital_number_pane_g1

0x793c,	// (0x00010fb8) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00018dbe) clock_digital_number_pane_g

0x793c,	// (0x00010fb8) clock_digital_separator_pane_g1

0x793c,	// (0x00010fb8) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00018dbe) clock_digital_separator_pane_g

0x9fa2,	// (0x0001361e) aid_fill_nsta_ParamLimits

0xa0e4,	// (0x00013760) indicator_nsta_pane_ParamLimits

0xa256,	// (0x000138d2) popup_clock_analogue_window

0xa256,	// (0x000138d2) popup_clock_digital_window

0x7a26,	// (0x000110a2) grid_indicator_nsta_pane_ParamLimits

0xc7f4,	// (0x00015e70) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x00019143) clock_nsta_pane_t

0x62fe,	// (0x0000f97a) aid_size_max_handle

0x6308,	// (0x0000f984) aid_size_min_handle

0x9657,	// (0x00012cd3) editor_scroll_pane

0xd7d4,	// (0x00016e50) ex_editor_pane

0x8b04,	// (0x00012180) scroll_pane_cp13

0x824b,	// (0x000118c7) scroll_pane_cp14

0x9015,	// (0x00012691) scroll_pane_cp36

0x9041,	// (0x000126bd) list_single_graphic_hl_pane_cp2_ParamLimits

0x9041,	// (0x000126bd) list_single_graphic_hl_pane_cp2

0xbbe0,	// (0x0001525c) list_single_graphic_hl_pane_ParamLimits

0xbbe0,	// (0x0001525c) list_single_graphic_hl_pane

0xd7dc,	// (0x00016e58) aid_size_min_hl_cp1

0xd7e5,	// (0x00016e61) list_highlight_pane_cp34_ParamLimits

0xd7e5,	// (0x00016e61) list_highlight_pane_cp34

0xd7f6,	// (0x00016e72) list_single_graphic_hl_pane_g1_ParamLimits

0xd7f6,	// (0x00016e72) list_single_graphic_hl_pane_g1

0xd803,	// (0x00016e7f) list_single_graphic_hl_pane_g2_ParamLimits

0xd803,	// (0x00016e7f) list_single_graphic_hl_pane_g2

0xd803,	// (0x00016e7f) list_single_graphic_hl_pane_g3_ParamLimits

0xd803,	// (0x00016e7f) list_single_graphic_hl_pane_g3

0xa42f,	// (0x00013aab) list_single_graphic_hl_pane_g4_ParamLimits

0xa42f,	// (0x00013aab) list_single_graphic_hl_pane_g4

0xd80f,	// (0x00016e8b) list_single_graphic_hl_pane_g5_ParamLimits

0xd80f,	// (0x00016e8b) list_single_graphic_hl_pane_g5

0x0004,

0xfc05,	// (0x00019281) list_single_graphic_hl_pane_g_ParamLimits

0xfc05,	// (0x00019281) list_single_graphic_hl_pane_g

0xd823,	// (0x00016e9f) list_single_graphic_hl_pane_t1_ParamLimits

0xd823,	// (0x00016e9f) list_single_graphic_hl_pane_t1

0xd839,	// (0x00016eb5) aid_size_min_hl_cp2

0xd842,	// (0x00016ebe) list_highlight_pane_cp34_cp2_ParamLimits

0xd842,	// (0x00016ebe) list_highlight_pane_cp34_cp2

0xd7f6,	// (0x00016e72) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd7f6,	// (0x00016e72) list_single_graphic_hl_pane_g1_cp2

0xd84f,	// (0x00016ecb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd84f,	// (0x00016ecb) list_single_graphic_hl_pane_g2_cp2

0xd85b,	// (0x00016ed7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd85b,	// (0x00016ed7) list_single_graphic_hl_pane_g3_cp2

0xa42f,	// (0x00013aab) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa42f,	// (0x00013aab) list_single_graphic_hl_pane_g4_cp2

0xd80f,	// (0x00016e8b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd80f,	// (0x00016e8b) list_single_graphic_hl_pane_g5_cp2

0x6647,	// (0x0000fcc3) control_pane_g4_ParamLimits

0x6647,	// (0x0000fcc3) control_pane_g4

0x99e1,	// (0x0001305d) bg_popup_sub_pane_cp10_ParamLimits

0xce3c,	// (0x000164b8) list_choice_list_pane_ParamLimits

0xce4b,	// (0x000164c7) scroll_pane_cp23

0x7cc9,	// (0x00011345) bg_popup_preview_window_pane_cp02_ParamLimits

0xd447,	// (0x00016ac3) list_preview_fixed_pane_ParamLimits

0xd45d,	// (0x00016ad9) list_preview_fixed_pane_cp_ParamLimits

0xd45d,	// (0x00016ad9) list_preview_fixed_pane_cp

0xd469,	// (0x00016ae5) popup_preview_fixed_window_g1_ParamLimits

0xd469,	// (0x00016ae5) popup_preview_fixed_window_g1

0xd475,	// (0x00016af1) popup_preview_fixed_window_g2_ParamLimits

0xd475,	// (0x00016af1) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x00019209) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x00019209) popup_preview_fixed_window_g

0x6272,	// (0x0000f8ee) aid_navi_side_left_pane_ParamLimits

0x6287,	// (0x0000f903) aid_navi_side_right_pane_ParamLimits

0x629f,	// (0x0000f91b) navi_icon_pane_stacon_ParamLimits

0x62b3,	// (0x0000f92f) navi_navi_pane_stacon_ParamLimits

0x629f,	// (0x0000f91b) navi_text_pane_stacon_ParamLimits

0x7932,	// (0x00010fae) main_text_info_pane

0xd87f,	// (0x00016efb) listscroll_text_info_pane

0xd887,	// (0x00016f03) list_text_info_pane_ParamLimits

0xd887,	// (0x00016f03) list_text_info_pane

0xd896,	// (0x00016f12) scroll_pane_cp24_ParamLimits

0xd896,	// (0x00016f12) scroll_pane_cp24

0xd8b4,	// (0x00016f30) list_text_info_pane_t1_ParamLimits

0xd8b4,	// (0x00016f30) list_text_info_pane_t1

0x9a2b,	// (0x000130a7) popup_fast_swap2_window_ParamLimits

0x9a2b,	// (0x000130a7) popup_fast_swap2_window

0xd8e5,	// (0x00016f61) aid_size_cell_fast2

0x7932,	// (0x00010fae) bg_popup_window_pane_cp17

0xa9d3,	// (0x0001404f) heading_pane_cp2

0x7f15,	// (0x00011591) listscroll_fast2_pane

0xd8ef,	// (0x00016f6b) grid_fast2_pane

0xd8f9,	// (0x00016f75) listscroll_fast2_pane_g1

0xd901,	// (0x00016f7d) listscroll_fast2_pane_g2

0x0001,

0xfc10,	// (0x0001928c) listscroll_fast2_pane_g

0x8b04,	// (0x00012180) scroll_pane_cp26

0xd90b,	// (0x00016f87) cell_fast2_pane_ParamLimits

0xd90b,	// (0x00016f87) cell_fast2_pane

0xd920,	// (0x00016f9c) cell_fast2_pane_g1

0xd929,	// (0x00016fa5) cell_fast2_pane_g2

0xd932,	// (0x00016fae) cell_fast2_pane_g3

0x0002,

0xfc15,	// (0x00019291) cell_fast2_pane_g

0x8008,	// (0x00011684) grid_highlight_pane_cp9

0x801d,	// (0x00011699) main_eswt_pane_ParamLimits

0x801d,	// (0x00011699) main_eswt_pane

0xd8ab,	// (0x00016f27) list_single_text_info_pane

0xd93a,	// (0x00016fb6) eswt_ctrl_button_pane

0xd93a,	// (0x00016fb6) eswt_ctrl_canvas_pane

0xd942,	// (0x00016fbe) eswt_ctrl_combo_pane

0xd93a,	// (0x00016fb6) eswt_ctrl_default_pane

0xd93a,	// (0x00016fb6) eswt_ctrl_label_pane

0xd94a,	// (0x00016fc6) eswt_ctrl_wait_pane

0xd952,	// (0x00016fce) eswt_shell_pane

0x7932,	// (0x00010fae) listscroll_eswt_app_pane

0xd972,	// (0x00016fee) popup_eswt_tasktip_window_ParamLimits

0xd972,	// (0x00016fee) popup_eswt_tasktip_window

0xa5d3,	// (0x00013c4f) bg_popup_window_pane_cp18

0xd983,	// (0x00016fff) eswt_control_pane_g1_ParamLimits

0xd983,	// (0x00016fff) eswt_control_pane_g1

0xd990,	// (0x0001700c) eswt_control_pane_g2_ParamLimits

0xd990,	// (0x0001700c) eswt_control_pane_g2

0xd99d,	// (0x00017019) eswt_control_pane_g3_ParamLimits

0xd99d,	// (0x00017019) eswt_control_pane_g3

0xd9aa,	// (0x00017026) eswt_control_pane_g4_ParamLimits

0xd9aa,	// (0x00017026) eswt_control_pane_g4

0x0003,

0xfc1c,	// (0x00019298) eswt_control_pane_g_ParamLimits

0xfc1c,	// (0x00019298) eswt_control_pane_g

0x880d,	// (0x00011e89) bg_button_pane_ParamLimits

0x880d,	// (0x00011e89) bg_button_pane

0x801d,	// (0x00011699) common_borders_pane_copy2_ParamLimits

0x801d,	// (0x00011699) common_borders_pane_copy2

0xd9b7,	// (0x00017033) control_button_pane_g1_ParamLimits

0xd9b7,	// (0x00017033) control_button_pane_g1

0xd9c3,	// (0x0001703f) control_button_pane_g2_ParamLimits

0xd9c3,	// (0x0001703f) control_button_pane_g2

0xd9cf,	// (0x0001704b) control_button_pane_g3_ParamLimits

0xd9cf,	// (0x0001704b) control_button_pane_g3

0x0002,

0xfc25,	// (0x000192a1) control_button_pane_g_ParamLimits

0xfc25,	// (0x000192a1) control_button_pane_g

0xd9e3,	// (0x0001705f) control_button_pane_t1

0xd9f1,	// (0x0001706d) control_button_pane_t2

0x0001,

0xfc2c,	// (0x000192a8) control_button_pane_t

0xa4b9,	// (0x00013b35) bg_button_pane_g1

0xa4c9,	// (0x00013b45) bg_button_pane_g2

0xa4c1,	// (0x00013b3d) bg_button_pane_g3

0xa4d9,	// (0x00013b55) bg_button_pane_g4

0xa4d1,	// (0x00013b4d) bg_button_pane_g5

0xa4e1,	// (0x00013b5d) bg_button_pane_g6

0xa4e9,	// (0x00013b65) bg_button_pane_g7

0xa4f9,	// (0x00013b75) bg_button_pane_g8

0xa4f1,	// (0x00013b6d) bg_button_pane_g9

0x0008,

0xf89a,	// (0x00018f16) bg_button_pane_g

0xcdf7,	// (0x00016473) common_borders_pane_ParamLimits

0xcdf7,	// (0x00016473) common_borders_pane

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy1_ParamLimits

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy1

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy1_ParamLimits

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy1

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy1_ParamLimits

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy1

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy1_ParamLimits

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy1

0xce32,	// (0x000164ae) bg_eswt_ctrl_canvas_pane_g1

0xcdf7,	// (0x00016473) common_borders_pane_cp2_ParamLimits

0xcdf7,	// (0x00016473) common_borders_pane_cp2

0xcdf7,	// (0x00016473) common_borders_pane_cp3_ParamLimits

0xcdf7,	// (0x00016473) common_borders_pane_cp3

0xd9ff,	// (0x0001707b) separator_horizontal_pane

0xda07,	// (0x00017083) separator_vertical_pane

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy2_ParamLimits

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy2

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy2_ParamLimits

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy2

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy2_ParamLimits

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy2

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy2_ParamLimits

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy2

0x7932,	// (0x00010fae) common_borders_pane_cp4

0xda10,	// (0x0001708c) separator_horizontal_pane_g1

0xda19,	// (0x00017095) separator_horizontal_pane_g2

0xda22,	// (0x0001709e) separator_horizontal_pane_g3

0x0002,

0xfc31,	// (0x000192ad) separator_horizontal_pane_g

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy3_ParamLimits

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy3

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy3_ParamLimits

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy3

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy3_ParamLimits

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy3

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy3_ParamLimits

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy3

0x7932,	// (0x00010fae) common_borders_pane_cp5

0xda2b,	// (0x000170a7) separator_vertical_pane_g1

0xda34,	// (0x000170b0) separator_vertical_pane_g2

0xda3d,	// (0x000170b9) separator_vertical_pane_g3

0x0002,

0xfc38,	// (0x000192b4) separator_vertical_pane_g

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy4_ParamLimits

0xd983,	// (0x00016fff) eswt_control_pane_g1_copy4

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy4_ParamLimits

0xd990,	// (0x0001700c) eswt_control_pane_g2_copy4

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy4_ParamLimits

0xd99d,	// (0x00017019) eswt_control_pane_g3_copy4

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy4_ParamLimits

0xd9aa,	// (0x00017026) eswt_control_pane_g4_copy4

0xda46,	// (0x000170c2) eswt_ctrl_combo_button_pane

0xda4e,	// (0x000170ca) eswt_ctrl_input_pane

0xda56,	// (0x000170d2) popup_choice_list_window_cp70

0xda5e,	// (0x000170da) eswt_ctrl_input_pane_t1

0x7932,	// (0x00010fae) input_focus_pane_cp70

0xcdf7,	// (0x00016473) bg_button_pane_cp70_ParamLimits

0xcdf7,	// (0x00016473) bg_button_pane_cp70

0xda6c,	// (0x000170e8) eswt_ctrl_combo_button_pane_g1

0xda74,	// (0x000170f0) wait_bar_pane_cp70

0xa5d3,	// (0x00013c4f) bg_popup_window_pane_cp70_ParamLimits

0xa5d3,	// (0x00013c4f) bg_popup_window_pane_cp70

0xda7c,	// (0x000170f8) popup_eswt_tasktip_window_t1

0xda92,	// (0x0001710e) wait_bar_pane_cp71_ParamLimits

0xda92,	// (0x0001710e) wait_bar_pane_cp71

0xda9e,	// (0x0001711a) grid_eswt_app_pane

0x8e1d,	// (0x00012499) scroll_pane_cp70

0xdaa7,	// (0x00017123) cell_eswt_app_pane_ParamLimits

0xdaa7,	// (0x00017123) cell_eswt_app_pane

0xdad7,	// (0x00017153) cell_eswt_app_pane_g1_ParamLimits

0xdad7,	// (0x00017153) cell_eswt_app_pane_g1

0xdb06,	// (0x00017182) cell_eswt_app_pane_g2_ParamLimits

0xdb06,	// (0x00017182) cell_eswt_app_pane_g2

0x0001,

0xfc3f,	// (0x000192bb) cell_eswt_app_pane_g_ParamLimits

0xfc3f,	// (0x000192bb) cell_eswt_app_pane_g

0xdb2f,	// (0x000171ab) cell_eswt_app_pane_t1_ParamLimits

0xdb2f,	// (0x000171ab) cell_eswt_app_pane_t1

0xdb61,	// (0x000171dd) grid_highlight_pane_cp70_ParamLimits

0xdb61,	// (0x000171dd) grid_highlight_pane_cp70

0x952c,	// (0x00012ba8) set_content_pane_g1

0x9903,	// (0x00012f7f) status_small_volume_pane

0x6fe8,	// (0x00010664) status_small_volume_pane_g1

0x6ff0,	// (0x0001066c) volume_small2_pane

0x6ff9,	// (0x00010675) volume_small2_pane_g1

0x7002,	// (0x0001067e) volume_small2_pane_g2

0x700b,	// (0x00010687) volume_small2_pane_g3

0x7014,	// (0x00010690) volume_small2_pane_g4

0x701d,	// (0x00010699) volume_small2_pane_g5

0x7026,	// (0x000106a2) volume_small2_pane_g6

0x702f,	// (0x000106ab) volume_small2_pane_g7

0x7038,	// (0x000106b4) volume_small2_pane_g8

0x7041,	// (0x000106bd) volume_small2_pane_g9

0x704a,	// (0x000106c6) volume_small2_pane_g10

0x0009,

0xfc44,	// (0x000192c0) volume_small2_pane_g

0xd20c,	// (0x00016888) fep_vkb_top_text_pane_g1_ParamLimits

0xd227,	// (0x000168a3) fep_vkb_top_text_pane_t1_ParamLimits

0xd481,	// (0x00016afd) popup_preview_fixed_window_g3_ParamLimits

0xd481,	// (0x00016afd) popup_preview_fixed_window_g3

0x9ed8,	// (0x00013554) popup_toolbar_trans_pane

0xb94a,	// (0x00014fc6) aid_height_set_list_ParamLimits

0xb95b,	// (0x00014fd7) aid_size_parent_ParamLimits

0x99e1,	// (0x0001305d) list_highlight_pane_cp2_ParamLimits

0x952c,	// (0x00012ba8) set_content_pane_g1_ParamLimits

0xbbfc,	// (0x00015278) list_single_image_pane_ParamLimits

0xbbfc,	// (0x00015278) list_single_image_pane

0xdb6d,	// (0x000171e9) aid_size_cell_image_ParamLimits

0xdb6d,	// (0x000171e9) aid_size_cell_image

0xdb7a,	// (0x000171f6) grid_single_image_pane_ParamLimits

0xdb7a,	// (0x000171f6) grid_single_image_pane

0x8470,	// (0x00011aec) list_single_image_pane_g1_ParamLimits

0x8470,	// (0x00011aec) list_single_image_pane_g1

0xd4ae,	// (0x00016b2a) list_single_image_pane_g2_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_image_pane_g2

0x0001,

0xfc59,	// (0x000192d5) list_single_image_pane_g_ParamLimits

0xfc59,	// (0x000192d5) list_single_image_pane_g

0x83a7,	// (0x00011a23) list_single_image_pane_t1_ParamLimits

0x83a7,	// (0x00011a23) list_single_image_pane_t1

0xdb88,	// (0x00017204) cell_image_list_pane_ParamLimits

0xdb88,	// (0x00017204) cell_image_list_pane

0xdb9b,	// (0x00017217) cell_image_list_pane_g1

0xdba4,	// (0x00017220) cell_image_list_pane_g2

0x0001,

0xfc5e,	// (0x000192da) cell_image_list_pane_g

0xdbad,	// (0x00017229) aid_size_cell_tb_trans_pane

0x880d,	// (0x00011e89) bg_tb_trans_pane

0xdbbf,	// (0x0001723b) grid_tb_trans_pane

0xa4b9,	// (0x00013b35) bg_tb_trans_pane_g1

0xa4c9,	// (0x00013b45) bg_tb_trans_pane_g2

0xa4c1,	// (0x00013b3d) bg_tb_trans_pane_g3

0xa4d9,	// (0x00013b55) bg_tb_trans_pane_g4

0xa4d1,	// (0x00013b4d) bg_tb_trans_pane_g5

0xa4f9,	// (0x00013b75) bg_tb_trans_pane_g6

0xa4f1,	// (0x00013b6d) bg_tb_trans_pane_g7

0xa4e1,	// (0x00013b5d) bg_tb_trans_pane_g8

0xa4e9,	// (0x00013b65) bg_tb_trans_pane_g9

0x0008,

0xfc63,	// (0x000192df) bg_tb_trans_pane_g

0xdbd3,	// (0x0001724f) cell_toolbar_trans_pane_ParamLimits

0xdbd3,	// (0x0001724f) cell_toolbar_trans_pane

0xce32,	// (0x000164ae) cell_toolbar_trans_pane_g1

0xc9ac,	// (0x00016028) list_form2_midp_pane_t1

0xc9ba,	// (0x00016036) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x0001917c) list_form2_midp_pane_t

0xc9c8,	// (0x00016044) scroll_pane_cp51_ParamLimits

0xcbd3,	// (0x0001624f) form2_midp_wait_pane_g1

0xcbdc,	// (0x00016258) form2_midp_wait_pane_g2

0xcbe5,	// (0x00016261) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x00019191) form2_midp_wait_pane_g

0x7a26,	// (0x000110a2) list_highlight_pane_cp21_ParamLimits

0xcc3c,	// (0x000162b8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcc4b,	// (0x000162c7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbb84,	// (0x00015200) list_single_2graphic_im_pane_ParamLimits

0xbb84,	// (0x00015200) list_single_2graphic_im_pane

0xdbf9,	// (0x00017275) list_single_2graphic_im_pane_g1_ParamLimits

0xdbf9,	// (0x00017275) list_single_2graphic_im_pane_g1

0xdc0a,	// (0x00017286) list_single_2graphic_im_pane_g2_ParamLimits

0xdc0a,	// (0x00017286) list_single_2graphic_im_pane_g2

0xdc16,	// (0x00017292) list_single_2graphic_im_pane_g3_ParamLimits

0xdc16,	// (0x00017292) list_single_2graphic_im_pane_g3

0x0003,

0xfc76,	// (0x000192f2) list_single_2graphic_im_pane_g_ParamLimits

0xfc76,	// (0x000192f2) list_single_2graphic_im_pane_g

0xdc36,	// (0x000172b2) list_single_2graphic_im_pane_t1_ParamLimits

0xdc36,	// (0x000172b2) list_single_2graphic_im_pane_t1

0xd48d,	// (0x00016b09) list_single_graphic_2heading_pane_fp_ParamLimits

0xd48d,	// (0x00016b09) list_single_graphic_2heading_pane_fp

0xd4e5,	// (0x00016b61) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd4e5,	// (0x00016b61) list_single_graphic_2heading_pane_fp_g1

0xd4a2,	// (0x00016b1e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd4a2,	// (0x00016b1e) list_single_graphic_2heading_pane_fp_g2

0x8470,	// (0x00011aec) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8470,	// (0x00011aec) list_single_graphic_2heading_pane_fp_g3

0xd4ae,	// (0x00016b2a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd4ae,	// (0x00016b2a) list_single_graphic_2heading_pane_fp_g4

0xd4c2,	// (0x00016b3e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd4c2,	// (0x00016b3e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019219) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019219) list_single_graphic_2heading_pane_fp_g

0xdc67,	// (0x000172e3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdc67,	// (0x000172e3) list_single_graphic_2heading_pane_fp_t1

0xd51d,	// (0x00016b99) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd51d,	// (0x00016b99) list_single_graphic_2heading_pane_fp_t2

0xdc7d,	// (0x000172f9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdc7d,	// (0x000172f9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7f,	// (0x000192fb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7f,	// (0x000192fb) list_single_graphic_2heading_pane_fp_t

0xced2,	// (0x0001654e) fep_hwr_write_pane_g5_ParamLimits

0xced2,	// (0x0001654e) fep_hwr_write_pane_g5

0xcede,	// (0x0001655a) fep_hwr_write_pane_g6_ParamLimits

0xcede,	// (0x0001655a) fep_hwr_write_pane_g6

0xd952,	// (0x00016fce) eswt_shell_pane_ParamLimits

0xa5d3,	// (0x00013c4f) bg_popup_window_pane_cp18_ParamLimits

0xb87b,	// (0x00014ef7) heading_pane_cp70

0xda7c,	// (0x000170f8) popup_eswt_tasktip_window_t1_ParamLimits

0x9ff7,	// (0x00013673) aid_touch_tab_arrow_left

0xa003,	// (0x0001367f) aid_touch_tab_arrow_right

0x796e,	// (0x00010fea) title_pane_g3_ParamLimits

0x796e,	// (0x00010fea) title_pane_g3

0x86ec,	// (0x00011d68) set_value_pane_g1

0x9ed8,	// (0x00013554) popup_toolbar_trans_pane_ParamLimits

0xdbad,	// (0x00017229) aid_size_cell_tb_trans_pane_ParamLimits

0x880d,	// (0x00011e89) bg_tb_trans_pane_ParamLimits

0xdbbf,	// (0x0001723b) grid_tb_trans_pane_ParamLimits

0x7cc9,	// (0x00011345) cont_note_pane_ParamLimits

0x7cc9,	// (0x00011345) cont_note_pane

0x801d,	// (0x00011699) cont_snote2_single_text_pane_ParamLimits

0x801d,	// (0x00011699) cont_snote2_single_text_pane

0x801d,	// (0x00011699) cont_snote2_single_graphic_pane_ParamLimits

0x801d,	// (0x00011699) cont_snote2_single_graphic_pane

0xabbd,	// (0x00014239) cont_note_wait_pane_ParamLimits

0xabbd,	// (0x00014239) cont_note_wait_pane

0xabbd,	// (0x00014239) cont_note_image_pane_ParamLimits

0xabbd,	// (0x00014239) cont_note_image_pane

0xdc93,	// (0x0001730f) popup_note2_window_g1_ParamLimits

0xdc93,	// (0x0001730f) popup_note2_window_g1

0xdcc4,	// (0x00017340) popup_note2_window_t1_ParamLimits

0xdcc4,	// (0x00017340) popup_note2_window_t1

0xdd09,	// (0x00017385) popup_note2_window_t2_ParamLimits

0xdd09,	// (0x00017385) popup_note2_window_t2

0xdd4e,	// (0x000173ca) popup_note2_window_t3_ParamLimits

0xdd4e,	// (0x000173ca) popup_note2_window_t3

0xdd93,	// (0x0001740f) popup_note2_window_t4_ParamLimits

0xdd93,	// (0x0001740f) popup_note2_window_t4

0x7d4d,	// (0x000113c9) popup_note2_window_t5_ParamLimits

0x7d4d,	// (0x000113c9) popup_note2_window_t5

0x0004,

0xfc8b,	// (0x00019307) popup_note2_window_t_ParamLimits

0xfc8b,	// (0x00019307) popup_note2_window_t

0xddc2,	// (0x0001743e) popup_note2_image_window_g1_ParamLimits

0xddc2,	// (0x0001743e) popup_note2_image_window_g1

0xddce,	// (0x0001744a) popup_note2_image_window_g2_ParamLimits

0xddce,	// (0x0001744a) popup_note2_image_window_g2

0x0001,

0xfc96,	// (0x00019312) popup_note2_image_window_g_ParamLimits

0xfc96,	// (0x00019312) popup_note2_image_window_g

0xdde0,	// (0x0001745c) popup_note2_image_window_t1_ParamLimits

0xdde0,	// (0x0001745c) popup_note2_image_window_t1

0xddf8,	// (0x00017474) popup_note2_image_window_t2_ParamLimits

0xddf8,	// (0x00017474) popup_note2_image_window_t2

0xde10,	// (0x0001748c) popup_note2_image_window_t3_ParamLimits

0xde10,	// (0x0001748c) popup_note2_image_window_t3

0x0002,

0xfc9b,	// (0x00019317) popup_note2_image_window_t_ParamLimits

0xfc9b,	// (0x00019317) popup_note2_image_window_t

0xabcb,	// (0x00014247) popup_note2_wait_window_g1_ParamLimits

0xabcb,	// (0x00014247) popup_note2_wait_window_g1

0xde2c,	// (0x000174a8) popup_note2_wait_window_g2_ParamLimits

0xde2c,	// (0x000174a8) popup_note2_wait_window_g2

0xabe3,	// (0x0001425f) popup_note2_wait_window_g3_ParamLimits

0xabe3,	// (0x0001425f) popup_note2_wait_window_g3

0x0002,

0xfca2,	// (0x0001931e) popup_note2_wait_window_g_ParamLimits

0xfca2,	// (0x0001931e) popup_note2_wait_window_g

0xde38,	// (0x000174b4) popup_note2_wait_window_t1_ParamLimits

0xde38,	// (0x000174b4) popup_note2_wait_window_t1

0xde56,	// (0x000174d2) popup_note2_wait_window_t2_ParamLimits

0xde56,	// (0x000174d2) popup_note2_wait_window_t2

0xde74,	// (0x000174f0) popup_note2_wait_window_t3_ParamLimits

0xde74,	// (0x000174f0) popup_note2_wait_window_t3

0xde86,	// (0x00017502) popup_note2_wait_window_t4_ParamLimits

0xde86,	// (0x00017502) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x00019325) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x00019325) popup_note2_wait_window_t

0xde98,	// (0x00017514) wait_bar2_pane_ParamLimits

0xde98,	// (0x00017514) wait_bar2_pane

0xdeb0,	// (0x0001752c) popup_snote2_single_text_window_g1_ParamLimits

0xdeb0,	// (0x0001752c) popup_snote2_single_text_window_g1

0xded8,	// (0x00017554) popup_snote2_single_text_window_t1_ParamLimits

0xded8,	// (0x00017554) popup_snote2_single_text_window_t1

0xdf24,	// (0x000175a0) popup_snote2_single_text_window_t2_ParamLimits

0xdf24,	// (0x000175a0) popup_snote2_single_text_window_t2

0xdf70,	// (0x000175ec) popup_snote2_single_text_window_t3_ParamLimits

0xdf70,	// (0x000175ec) popup_snote2_single_text_window_t3

0xdfb1,	// (0x0001762d) popup_snote2_single_text_window_t4_ParamLimits

0xdfb1,	// (0x0001762d) popup_snote2_single_text_window_t4

0xdfe7,	// (0x00017663) popup_snote2_single_text_window_t5_ParamLimits

0xdfe7,	// (0x00017663) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0001932e) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0001932e) popup_snote2_single_text_window_t

0xe012,	// (0x0001768e) popup_snote2_single_graphic_window_g1_ParamLimits

0xe012,	// (0x0001768e) popup_snote2_single_graphic_window_g1

0xe03a,	// (0x000176b6) popup_snote2_single_graphic_window_g2_ParamLimits

0xe03a,	// (0x000176b6) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x00019339) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x00019339) popup_snote2_single_graphic_window_g

0xe062,	// (0x000176de) popup_snote2_single_graphic_window_t1_ParamLimits

0xe062,	// (0x000176de) popup_snote2_single_graphic_window_t1

0xe0ae,	// (0x0001772a) popup_snote2_single_graphic_window_t2_ParamLimits

0xe0ae,	// (0x0001772a) popup_snote2_single_graphic_window_t2

0xdf70,	// (0x000175ec) popup_snote2_single_graphic_window_t3_ParamLimits

0xdf70,	// (0x000175ec) popup_snote2_single_graphic_window_t3

0xdfb1,	// (0x0001762d) popup_snote2_single_graphic_window_t4_ParamLimits

0xdfb1,	// (0x0001762d) popup_snote2_single_graphic_window_t4

0xdfe7,	// (0x00017663) popup_snote2_single_graphic_window_t5_ParamLimits

0xdfe7,	// (0x00017663) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0001933e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0001933e) popup_snote2_single_graphic_window_t

0xc885,	// (0x00015f01) clock_nsta_pane_cp2_t1

0xc885,	// (0x00015f01) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x00019152) clock_nsta_pane_cp2_t

0x8827,	// (0x00011ea3) form_field_data_wide_pane_g1_ParamLimits

0x8833,	// (0x00011eaf) form_field_data_wide_pane_g2_ParamLimits

0x8833,	// (0x00011eaf) form_field_data_wide_pane_g2

0x883f,	// (0x00011ebb) form_field_data_wide_pane_g3_ParamLimits

0x883f,	// (0x00011ebb) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00018d36) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00018d36) form_field_data_wide_pane_g

0xc790,	// (0x00015e0c) grid_touch_3_pane_ParamLimits

0xc790,	// (0x00015e0c) grid_touch_3_pane

0xe0fa,	// (0x00017776) cell_touch_3_pane_ParamLimits

0xe0fa,	// (0x00017776) cell_touch_3_pane

0xce32,	// (0x000164ae) cell_touch_3_pane_g1

0xce32,	// (0x000164ae) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x000191d7) cell_touch_3_pane_g

0x7d7f,	// (0x000113fb) cont_query_data_pane

0x7d87,	// (0x00011403) cont_query_data_pane_cp1

0xe128,	// (0x000177a4) button_value_adjust_pane_cp7

0xe130,	// (0x000177ac) query_popup_pane_cp3

0x90b0,	// (0x0001272c) bg_popup_sub_pane_cp22_ParamLimits

0x63b4,	// (0x0000fa30) navi_navi_volume_pane_cp2

0x63cf,	// (0x0000fa4b) popup_side_volume_key_window_g2

0x63de,	// (0x0000fa5a) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00018dc8) popup_side_volume_key_window_g

0x63fb,	// (0x0000fa77) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00018dcf) popup_side_volume_key_window_t

0x93f6,	// (0x00012a72) popup_side_volume_key_window_ParamLimits

0x8430,	// (0x00011aac) list_double_graphic_pane_g4_ParamLimits

0x8430,	// (0x00011aac) list_double_graphic_pane_g4

0xbbc1,	// (0x0001523d) list_single_2heading_msg_pane_ParamLimits

0xbbc1,	// (0x0001523d) list_single_2heading_msg_pane

0xe15f,	// (0x000177db) list_single_2heading_msg_pane_g1_ParamLimits

0xe15f,	// (0x000177db) list_single_2heading_msg_pane_g1

0x9590,	// (0x00012c0c) list_single_2heading_msg_pane_g2_ParamLimits

0x9590,	// (0x00012c0c) list_single_2heading_msg_pane_g2

0xe16b,	// (0x000177e7) list_single_2heading_msg_pane_g3_ParamLimits

0xe16b,	// (0x000177e7) list_single_2heading_msg_pane_g3

0xe177,	// (0x000177f3) list_single_2heading_msg_pane_g4_ParamLimits

0xe177,	// (0x000177f3) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x00019349) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x00019349) list_single_2heading_msg_pane_g

0xe18f,	// (0x0001780b) list_single_2heading_msg_pane_t1_ParamLimits

0xe18f,	// (0x0001780b) list_single_2heading_msg_pane_t1

0xe1b7,	// (0x00017833) list_single_2heading_msg_pane_t2_ParamLimits

0xe1b7,	// (0x00017833) list_single_2heading_msg_pane_t2

0xe1e6,	// (0x00017862) list_single_2heading_msg_pane_t3_ParamLimits

0xe1e6,	// (0x00017862) list_single_2heading_msg_pane_t3

0xe21f,	// (0x0001789b) list_single_2heading_msg_pane_t4_ParamLimits

0xe21f,	// (0x0001789b) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x00019352) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x00019352) list_single_2heading_msg_pane_t

0x797a,	// (0x00010ff6) title_pane_g4_ParamLimits

0x797a,	// (0x00010ff6) title_pane_g4

0x61c2,	// (0x0000f83e) title_pane_stacon_g3_ParamLimits

0x61c2,	// (0x0000f83e) title_pane_stacon_g3

0xdc2a,	// (0x000172a6) list_single_2graphic_im_pane_g4_ParamLimits

0xdc2a,	// (0x000172a6) list_single_2graphic_im_pane_g4

0xb622,	// (0x00014c9e) popup_side_volume_key_window_cp

0xbf1e,	// (0x0001559a) main_idle_act2_pane_t1

0x67ec,	// (0x0000fe68) toolbar_button_pane_g10

0x8215,	// (0x00011891) popup_toolbar_window_cp1

0xc876,	// (0x00015ef2) clock_nsta_pane_cp_t1

0xc876,	// (0x00015ef2) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x0001914d) clock_nsta_pane_cp_t

0x63b4,	// (0x0000fa30) navi_navi_volume_pane_cp2_ParamLimits

0x63c3,	// (0x0000fa3f) popup_side_volume_key_window_g1_ParamLimits

0x63cf,	// (0x0000fa4b) popup_side_volume_key_window_g2_ParamLimits

0x63de,	// (0x0000fa5a) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00018dc8) popup_side_volume_key_window_g_ParamLimits

0x6c54,	// (0x000102d0) fep_hwr_aid_pane

0x6cfb,	// (0x00010377) bg_fep_hwr_top_pane_g4_ParamLimits

0xcea2,	// (0x0001651e) fep_hwr_top_pane_g1_ParamLimits

0xceb4,	// (0x00016530) fep_hwr_top_pane_g2_ParamLimits

0x6d1b,	// (0x00010397) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x000191a2) fep_hwr_top_pane_g_ParamLimits

0x6d30,	// (0x000103ac) fep_hwr_top_text_pane_ParamLimits

0xb3e5,	// (0x00014a61) aid_touch_tab_arrow_arrow_2

0xb3ee,	// (0x00014a6a) aid_touch_tab_arrow_left_2

0x6c68,	// (0x000102e4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6c9f,	// (0x0001031b) fep_hwr_prediction_pane

0xd014,	// (0x00016690) fep_vkb_prediction_pane

0xd118,	// (0x00016794) fep_vkb_side_pane_g3_ParamLimits

0xd118,	// (0x00016794) fep_vkb_side_pane_g3

0x6eab,	// (0x00010527) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6f17,	// (0x00010593) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6f24,	// (0x000105a0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x00019251) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7053,	// (0x000106cf) fep_hwr_prediction_pane_g1

0x705d,	// (0x000106d9) fep_hwr_prediction_pane_g2

0x7065,	// (0x000106e1) fep_hwr_prediction_pane_g3

0x706d,	// (0x000106e9) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0001935b) fep_hwr_prediction_pane_g

0xe244,	// (0x000178c0) fep_vkb_prediction_pane_g1

0xe24e,	// (0x000178ca) fep_vkb_prediction_pane_g2

0xe256,	// (0x000178d2) fep_vkb_prediction_pane_g3

0xe25e,	// (0x000178da) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x00019364) fep_vkb_prediction_pane_g

0x6ad4,	// (0x00010150) slider_set_pane_g3

0x6ae8,	// (0x00010164) slider_set_pane_g4

0x6b00,	// (0x0001017c) slider_set_pane_g5

0x6ad4,	// (0x00010150) slider_set_pane_g6

0x6b16,	// (0x00010192) slider_set_pane_g7

0xbac0,	// (0x0001513c) slider_form_pane_g3

0xbac9,	// (0x00015145) slider_form_pane_g4

0xbad1,	// (0x0001514d) slider_form_pane_g5

0xbac0,	// (0x0001513c) slider_form_pane_g6

0xbad9,	// (0x00015155) slider_form_pane_g7

0xc1fb,	// (0x00015877) slider_set_pane_vc_g3

0xc204,	// (0x00015880) slider_set_pane_vc_g4

0xc20d,	// (0x00015889) slider_set_pane_vc_g5

0xc1fb,	// (0x00015877) slider_set_pane_vc_g6

0xc216,	// (0x00015892) slider_set_pane_vc_g7

0xc1fb,	// (0x00015877) slider_form_pane_vc_g1

0xc204,	// (0x00015880) slider_form_pane_vc_g2

0xc20d,	// (0x00015889) slider_form_pane_vc_g3

0xc1fb,	// (0x00015877) slider_form_pane_vc_g4

0xc5ae,	// (0x00015c2a) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x00019133) slider_form_pane_vc_g

0x7932,	// (0x00010fae) main_idle_act3_pane

0xe266,	// (0x000178e2) ai3_links_pane

0xe26f,	// (0x000178eb) popup_ai3_data_window_ParamLimits

0xe26f,	// (0x000178eb) popup_ai3_data_window

0x7932,	// (0x00010fae) grid_ai3_links_pane

0xe289,	// (0x00017905) cell_ai3_links_pane_ParamLimits

0xe289,	// (0x00017905) cell_ai3_links_pane

0xe2a1,	// (0x0001791d) bg_popup_sub_pane_cp11

0xe2ae,	// (0x0001792a) cell_ai3_links_pane_g1

0x7932,	// (0x00010fae) bg_popup_sub_pane_cp12

0xe2d3,	// (0x0001794f) heading_ai3_data_pane

0xe2db,	// (0x00017957) list_ai3_gene_pane

0xe2e7,	// (0x00017963) popup_ai3_data_window_g1

0xe2ef,	// (0x0001796b) heading_ai3_data_pane_g1

0xe2f7,	// (0x00017973) heading_ai3_data_pane_t1

0xe305,	// (0x00017981) list_double_ai3_gene_pane_ParamLimits

0xe305,	// (0x00017981) list_double_ai3_gene_pane

0xe312,	// (0x0001798e) list_single_ai3_gene_pane_ParamLimits

0xe312,	// (0x0001798e) list_single_ai3_gene_pane

0xcdf7,	// (0x00016473) list_highlight_pane_cp7_ParamLimits

0xcdf7,	// (0x00016473) list_highlight_pane_cp7

0xe31f,	// (0x0001799b) list_single_a13_gene_pane_t1_ParamLimits

0xe31f,	// (0x0001799b) list_single_a13_gene_pane_t1

0xe336,	// (0x000179b2) list_single_ai3_gene_pane_g1

0xe33f,	// (0x000179bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x0001936d) list_single_ai3_gene_pane_g

0xe347,	// (0x000179c3) list_double_ai3_gene_pane_g1_ParamLimits

0xe347,	// (0x000179c3) list_double_ai3_gene_pane_g1

0xe353,	// (0x000179cf) list_double_ai3_gene_pane_t1_ParamLimits

0xe353,	// (0x000179cf) list_double_ai3_gene_pane_t1

0xe36f,	// (0x000179eb) list_double_ai3_gene_pane_t2_ParamLimits

0xe36f,	// (0x000179eb) list_double_ai3_gene_pane_t2

0xe385,	// (0x00017a01) list_double_ai3_gene_pane_t3_ParamLimits

0xe385,	// (0x00017a01) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x00019372) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x00019372) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe141,	// (0x000177bd) aid_size_min_col_2

0xe14b,	// (0x000177c7) aid_size_min_msg_ParamLimits

0xe14b,	// (0x000177c7) aid_size_min_msg

0xd218,	// (0x00016894) fep_vkb_top_text_pane_g2_ParamLimits

0xd218,	// (0x00016894) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x000191d2) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x000191d2) fep_vkb_top_text_pane_g

0x7932,	// (0x00010fae) main_hc_apps_shell_pane

0xe3a2,	// (0x00017a1e) grid_hc_apps_pane_ParamLimits

0xe3a2,	// (0x00017a1e) grid_hc_apps_pane

0xe3b1,	// (0x00017a2d) list_hc_apps_pane

0xe3b9,	// (0x00017a35) scroll_pane_cp37_ParamLimits

0xe3b9,	// (0x00017a35) scroll_pane_cp37

0xe3c5,	// (0x00017a41) cell_hc_apps_pane_ParamLimits

0xe3c5,	// (0x00017a41) cell_hc_apps_pane

0xe473,	// (0x00017aef) cell_hc_apps_pane_g1_ParamLimits

0xe473,	// (0x00017aef) cell_hc_apps_pane_g1

0xe4a4,	// (0x00017b20) cell_hc_apps_pane_g2_ParamLimits

0xe4a4,	// (0x00017b20) cell_hc_apps_pane_g2

0xe4c0,	// (0x00017b3c) cell_hc_apps_pane_g3_ParamLimits

0xe4c0,	// (0x00017b3c) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x00019379) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x00019379) cell_hc_apps_pane_g

0xe4e2,	// (0x00017b5e) cell_hc_apps_pane_t1_ParamLimits

0xe4e2,	// (0x00017b5e) cell_hc_apps_pane_t1

0x7cc9,	// (0x00011345) grid_highlight_pane_cp10_ParamLimits

0x7cc9,	// (0x00011345) grid_highlight_pane_cp10

0xe522,	// (0x00017b9e) list_single_hc_apps_pane_ParamLimits

0xe522,	// (0x00017b9e) list_single_hc_apps_pane

0xe57e,	// (0x00017bfa) list_single_hc_apps_pane_g1

0xe597,	// (0x00017c13) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x00019380) list_single_hc_apps_pane_g

0xe5b0,	// (0x00017c2c) list_single_hc_apps_pane_g2_copy1

0xe5cc,	// (0x00017c48) list_single_hc_apps_pane_t1

0x7a26,	// (0x000110a2) bg_set_opt_pane_cp_ParamLimits

0x60e9,	// (0x0000f765) setting_slider_pane_t1_ParamLimits

0x6102,	// (0x0000f77e) setting_slider_pane_t2_ParamLimits

0x611c,	// (0x0000f798) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00018c1e) setting_slider_pane_t_ParamLimits

0x6134,	// (0x0000f7b0) slider_set_pane_ParamLimits

0x665c,	// (0x0000fcd8) control_pane_g5_ParamLimits

0x665c,	// (0x0000fcd8) control_pane_g5

0xb90f,	// (0x00014f8b) slider_set_pane_g1_ParamLimits

0x6ac8,	// (0x00010144) slider_set_pane_g2_ParamLimits

0x6ad4,	// (0x00010150) slider_set_pane_g3_ParamLimits

0x6ae8,	// (0x00010164) slider_set_pane_g4_ParamLimits

0x6b00,	// (0x0001017c) slider_set_pane_g5_ParamLimits

0x6ad4,	// (0x00010150) slider_set_pane_g6_ParamLimits

0x6b16,	// (0x00010192) slider_set_pane_g7_ParamLimits

0xf998,	// (0x00019014) slider_set_pane_g_ParamLimits

0x94d7,	// (0x00012b53) navi_icon_text_pane_ParamLimits

0x9fb8,	// (0x00013634) aid_fill_nsta_2_ParamLimits

0x9ff7,	// (0x00013673) aid_touch_tab_arrow_left_ParamLimits

0xa003,	// (0x0001367f) aid_touch_tab_arrow_right_ParamLimits

0xa06f,	// (0x000136eb) clock_nsta_pane_ParamLimits

0xb3c1,	// (0x00014a3d) navi_icon_pane_g1_ParamLimits

0xb3d0,	// (0x00014a4c) navi_text_pane_t1_ParamLimits

0xc980,	// (0x00015ffc) navi_icon_text_pane_g1_ParamLimits

0xc98f,	// (0x0001600b) navi_icon_text_pane_t1_ParamLimits

0xe57e,	// (0x00017bfa) list_single_hc_apps_pane_g1_ParamLimits

0xe597,	// (0x00017c13) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x00019380) list_single_hc_apps_pane_g_ParamLimits

0xe5b0,	// (0x00017c2c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe5cc,	// (0x00017c48) list_single_hc_apps_pane_t1_ParamLimits

0x5ffd,	// (0x0000f679) popup_toolbar2_fixed_window_ParamLimits

0x5ffd,	// (0x0000f679) popup_toolbar2_fixed_window

0x9ece,	// (0x0001354a) popup_toolbar2_float_window

0x7932,	// (0x00010fae) bg_popup_sub_pane_cp27

0xe5fa,	// (0x00017c76) grid_toolbar2_float_pane

0x7932,	// (0x00010fae) bg_popup_sub_pane_cp26

0xe5fa,	// (0x00017c76) grid_toolbar2_fixed_pane

0xe602,	// (0x00017c7e) cell_toolbar2_fixed_pane_ParamLimits

0xe602,	// (0x00017c7e) cell_toolbar2_fixed_pane

0xe612,	// (0x00017c8e) cell_toolbar2_fixed_pane_g1

0xe61b,	// (0x00017c97) toolbar2_fixed_button_pane

0xa4b9,	// (0x00013b35) toolbar2_fixed_button_pane_g1

0xa4c9,	// (0x00013b45) toolbar2_fixed_button_pane_g2

0xa4c1,	// (0x00013b3d) toolbar2_fixed_button_pane_g3

0xa4d9,	// (0x00013b55) toolbar2_fixed_button_pane_g4

0xa4d1,	// (0x00013b4d) toolbar2_fixed_button_pane_g5

0xa4e1,	// (0x00013b5d) toolbar2_fixed_button_pane_g6

0xa4e9,	// (0x00013b65) toolbar2_fixed_button_pane_g7

0xa4f9,	// (0x00013b75) toolbar2_fixed_button_pane_g8

0xa4f1,	// (0x00013b6d) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x00018f16) toolbar2_fixed_button_pane_g

0xe623,	// (0x00017c9f) cell_toolbar2_float_pane_ParamLimits

0xe623,	// (0x00017c9f) cell_toolbar2_float_pane

0xe634,	// (0x00017cb0) cell_toolbar2_float_pane_g1

0xe61b,	// (0x00017c97) toolbar2_fixed_button_pane_cp

0xcf74,	// (0x000165f0) fep_vkb_accented_list_pane_ParamLimits

0xcf74,	// (0x000165f0) fep_vkb_accented_list_pane

0x6e8b,	// (0x00010507) bg_popup_fep_shadow_pane_g9

0x9657,	// (0x00012cd3) bg_popup_fep_shadow_pane_cp3

0x8aeb,	// (0x00012167) list_accented_list_pane

0xe63d,	// (0x00017cb9) list_single_accented_list_pane_ParamLimits

0xe63d,	// (0x00017cb9) list_single_accented_list_pane

0x9657,	// (0x00012cd3) list_highlight_pane_cp10

0xe64e,	// (0x00017cca) list_single_accented_list_pane_t1

0x9e1e,	// (0x0001349a) popup_slider_window_ParamLimits

0x9e1e,	// (0x0001349a) popup_slider_window

0xe138,	// (0x000177b4) aid_indentation_list_msg

0xe708,	// (0x00017d84) bg_popup_window_pane_cp19

0xe772,	// (0x00017dee) popup_slider_window_g1

0xe78e,	// (0x00017e0a) popup_slider_window_g2

0xe7aa,	// (0x00017e26) popup_slider_window_g3

0x0005,

0xfd09,	// (0x00019385) popup_slider_window_g

0xe806,	// (0x00017e82) popup_slider_window_t1

0xe87a,	// (0x00017ef6) small_volume_slider_vertical_pane

0xce32,	// (0x000164ae) small_volume_slider_vertical_pane_g1

0xce32,	// (0x000164ae) small_volume_slider_vertical_pane_g2

0xe896,	// (0x00017f12) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x00019397) small_volume_slider_vertical_pane_g

0x5db5,	// (0x0000f431) area_side_right_pane_ParamLimits

0x5db5,	// (0x0000f431) area_side_right_pane

0x7075,	// (0x000106f1) aid_size_side_button_ParamLimits

0x7075,	// (0x000106f1) aid_size_side_button

0x7089,	// (0x00010705) grid_sctrl_middle_pane_ParamLimits

0x7089,	// (0x00010705) grid_sctrl_middle_pane

0x70a9,	// (0x00010725) sctrl_sk_bottom_pane

0x70ba,	// (0x00010736) sctrl_sk_top_pane

0x70cc,	// (0x00010748) aid_touch_sctrl_top

0x70d9,	// (0x00010755) bg_sctrl_sk_pane_ParamLimits

0x70d9,	// (0x00010755) bg_sctrl_sk_pane

0x70e7,	// (0x00010763) sctrl_sk_top_pane_g1

0x70f4,	// (0x00010770) sctrl_sk_top_pane_t1

0x70cc,	// (0x00010748) aid_touch_sctrl_bottom

0x70d9,	// (0x00010755) bg_sctrl_sk_pane_cp_ParamLimits

0x70d9,	// (0x00010755) bg_sctrl_sk_pane_cp

0x710f,	// (0x0001078b) sctrl_sk_bottom_pane_g1

0x70f4,	// (0x00010770) sctrl_sk_bottom_pane_t1

0x7118,	// (0x00010794) cell_sctrl_middle_pane_ParamLimits

0x7118,	// (0x00010794) cell_sctrl_middle_pane

0x7133,	// (0x000107af) aid_touch_sctrl_middle_ParamLimits

0x7133,	// (0x000107af) aid_touch_sctrl_middle

0x7145,	// (0x000107c1) bg_sctrl_middle_pane_ParamLimits

0x7145,	// (0x000107c1) bg_sctrl_middle_pane

0x6eab,	// (0x00010527) cell_sctrl_middle_pane_g1_ParamLimits

0x6eab,	// (0x00010527) cell_sctrl_middle_pane_g1

0x7153,	// (0x000107cf) cell_sctrl_middle_pane_g2_ParamLimits

0x7153,	// (0x000107cf) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x000193a3) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x000193a3) cell_sctrl_middle_pane_g

0xa4b9,	// (0x00013b35) bg_sctrl_middle_pane_g1

0xa4c1,	// (0x00013b3d) bg_sctrl_middle_pane_g2

0xa4c9,	// (0x00013b45) bg_sctrl_middle_pane_g3

0xa4d1,	// (0x00013b4d) bg_sctrl_middle_pane_g4

0xa4d9,	// (0x00013b55) bg_sctrl_middle_pane_g5

0xa4e1,	// (0x00013b5d) bg_sctrl_middle_pane_g6

0xa4e9,	// (0x00013b65) bg_sctrl_middle_pane_g7

0xa4f1,	// (0x00013b6d) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x000193a8) bg_sctrl_middle_pane_g

0xa4f9,	// (0x00013b75) bg_sctrl_middle_pane_g8_copy1

0xa4b9,	// (0x00013b35) bg_sctrl_sk_pane_g1

0xa4c9,	// (0x00013b45) bg_sctrl_sk_pane_g2

0xa4c1,	// (0x00013b3d) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x00018f16) bg_sctrl_sk_pane_g

0x81db,	// (0x00011857) aid_size_touch_scroll_bar

0xa4d9,	// (0x00013b55) bg_sctrl_sk_pane_g4

0xa4d1,	// (0x00013b4d) bg_sctrl_sk_pane_g5

0xa4e1,	// (0x00013b5d) bg_sctrl_sk_pane_g6

0xa4e9,	// (0x00013b65) bg_sctrl_sk_pane_g7

0xa4f9,	// (0x00013b75) bg_sctrl_sk_pane_g8

0xa4f1,	// (0x00013b6d) bg_sctrl_sk_pane_g9

0x9a89,	// (0x00013105) popup_fep_china_hwr2_fs_candidate_window

0x9a93,	// (0x0001310f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9a93,	// (0x0001310f) popup_fep_china_hwr2_fs_control_window

0x6eab,	// (0x00010527) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x0001939e) sctrl_sk_top_pane_g

0xe89f,	// (0x00017f1b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe89f,	// (0x00017f1b) aid_fep_china_hwr2_fs_cell

0xe8b1,	// (0x00017f2d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe8b1,	// (0x00017f2d) bg_popup_fep_shadow_pane_cp4

0xe8c8,	// (0x00017f44) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe8c8,	// (0x00017f44) bg_popup_fep_shadow_pane_cp5

0xe8da,	// (0x00017f56) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8da,	// (0x00017f56) popup_fep_china_hwr2_fs_control_bar_grid

0xe8ea,	// (0x00017f66) popup_fep_china_hwr2_fs_control_funtion_grid

0xe8f2,	// (0x00017f6e) aid_fep_china_hwr2_fs_candi_cell

0x7932,	// (0x00010fae) bg_popup_fep_shadow_pane_cp6

0xe8fc,	// (0x00017f78) popup_fep_china_hwr2_fs_candidate_grid

0xe906,	// (0x00017f82) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe906,	// (0x00017f82) cell_fep_china_hwr2_fs_funtion_grid

0xce32,	// (0x000164ae) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe91e,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe91e,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe92c,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe92c,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x000193b9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x000193b9) cell_fep_china_hwr2_fs_funtion_grid_g

0xe942,	// (0x00017fbe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe942,	// (0x00017fbe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe957,	// (0x00017fd3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe957,	// (0x00017fd3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x000193be) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x000193be) cell_fep_china_hwr2_fs_funtion_grid_t

0xe973,	// (0x00017fef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe97b,	// (0x00017ff7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe983,	// (0x00017fff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x000193c3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe98b,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe98b,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid

0xe9a4,	// (0x00018020) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe9ac,	// (0x00018028) popup_fep_china_hwr2_fs_candidate_grid_g21

0xce32,	// (0x000164ae) cell_fep_china_hwr2_fs_candidate_grid_g1

0xce32,	// (0x000164ae) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x000191d7) cell_fep_china_hwr2_fs_candidate_grid_g

0xe9b4,	// (0x00018030) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa07c,	// (0x000136f8) clock_nsta_pane_cp_24_ParamLimits

0xa07c,	// (0x000136f8) clock_nsta_pane_cp_24

0xa0fa,	// (0x00013776) indicator_nsta_pane_cp_24_ParamLimits

0xa0fa,	// (0x00013776) indicator_nsta_pane_cp_24

0xb23d,	// (0x000148b9) heading_pane_g1

0x0001,

0xf8ff,	// (0x00018f7b) heading_pane_g

0xbd67,	// (0x000153e3) grid_sct_catagory_button_pane

0xbd97,	// (0x00015413) scroll_pane_cp5_ParamLimits

0xc9d4,	// (0x00016050) button_value_adjust_pane_cp5_ParamLimits

0xc9d4,	// (0x00016050) button_value_adjust_pane_cp5

0xcad0,	// (0x0001614c) form2_midp_time_pane_ParamLimits

0xe9c2,	// (0x0001803e) cell_sct_catagory_button_pane_ParamLimits

0xe9c2,	// (0x0001803e) cell_sct_catagory_button_pane

0xcdf7,	// (0x00016473) bg_button_pane_cp01_ParamLimits

0xcdf7,	// (0x00016473) bg_button_pane_cp01

0xce32,	// (0x000164ae) cell_sct_catagory_button_pane_g1

0x9e5d,	// (0x000134d9) popup_tb_extension_window

0xe9d4,	// (0x00018050) aid_size_cell_ext_ParamLimits

0xe9d4,	// (0x00018050) aid_size_cell_ext

0x7cc9,	// (0x00011345) bg_tb_trans_pane_cp1_ParamLimits

0x7cc9,	// (0x00011345) bg_tb_trans_pane_cp1

0xe9f4,	// (0x00018070) grid_tb_ext_pane_ParamLimits

0xe9f4,	// (0x00018070) grid_tb_ext_pane

0xea22,	// (0x0001809e) cell_tb_ext_pane_ParamLimits

0xea22,	// (0x0001809e) cell_tb_ext_pane

0xea39,	// (0x000180b5) cell_tb_ext_pane_g1_ParamLimits

0xea39,	// (0x000180b5) cell_tb_ext_pane_g1

0xea56,	// (0x000180d2) cell_tb_ext_pane_t1

0x7cc9,	// (0x00011345) list_highlight_pane_cp11_ParamLimits

0x7cc9,	// (0x00011345) list_highlight_pane_cp11

0x601c,	// (0x0000f698) popup_uni_indicator_window_ParamLimits

0x601c,	// (0x0000f698) popup_uni_indicator_window

0x880d,	// (0x00011e89) bg_popup_sub_pane_cp14

0xea71,	// (0x000180ed) list_uniindi_pane

0xea7d,	// (0x000180f9) uniindi_top_pane

0x7cc9,	// (0x00011345) bg_uniindi_top_pane

0xea9c,	// (0x00018118) uniindi_top_pane_g1

0xeab2,	// (0x0001812e) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x000193ca) uniindi_top_pane_g

0xeadc,	// (0x00018158) uniindi_top_pane_t1

0xeb06,	// (0x00018182) list_single_uniindi_pane_ParamLimits

0xeb06,	// (0x00018182) list_single_uniindi_pane

0xce32,	// (0x000164ae) bg_uniindi_top_pane_g1

0xeb19,	// (0x00018195) list_single_uniindi_pane_g1

0xeb2c,	// (0x000181a8) list_single_uniindi_pane_t1

0x5e92,	// (0x0000f50e) control_bg_pane

0xeb51,	// (0x000181cd) bg_sctrl_sk_pane_cp1

0xeb5a,	// (0x000181d6) bg_sctrl_sk_pane_cp2

0xeb63,	// (0x000181df) control_bg_pane_g1

0xeb6c,	// (0x000181e8) control_bg_pane_g2

0x0001,

0xfd57,	// (0x000193d3) control_bg_pane_g

0xc83a,	// (0x00015eb6) cell_indicator_nsta_pane_g1_ParamLimits

0xc848,	// (0x00015ec4) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x00019148) cell_indicator_nsta_pane_g_ParamLimits

0xcb58,	// (0x000161d4) form2_midp_time_pane_t1_ParamLimits

0x801d,	// (0x00011699) main_idle_act4_pane_ParamLimits

0x801d,	// (0x00011699) main_idle_act4_pane

0x9e5d,	// (0x000134d9) popup_tb_extension_window_ParamLimits

0xea12,	// (0x0001808e) tb_ext_find_pane_ParamLimits

0xea12,	// (0x0001808e) tb_ext_find_pane

0xeb75,	// (0x000181f1) ai_gene_pane_1_cp1

0x979c,	// (0x00012e18) ai_gene_pane_2_cp1

0xeb7d,	// (0x000181f9) list_single_idle_plugin_calendar_pane

0xeb86,	// (0x00018202) list_single_idle_plugin_notification_pane

0xeb8f,	// (0x0001820b) list_single_idle_plugin_player_pane

0xeb98,	// (0x00018214) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeb98,	// (0x00018214) list_single_idle_plugin_shortcut_pane

0xebba,	// (0x00018236) main_idle_act4_pane_t1

0xebcc,	// (0x00018248) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x000193d8) main_idle_act4_pane_t

0xebde,	// (0x0001825a) middle_sk_idle_act4_pane_ParamLimits

0xebde,	// (0x0001825a) middle_sk_idle_act4_pane

0xebf4,	// (0x00018270) popup_clock_digital_analogue_window_cp2

0xec0e,	// (0x0001828a) shortcut_wheel_idle_act4_pane_ParamLimits

0xec0e,	// (0x0001828a) shortcut_wheel_idle_act4_pane

0xce32,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g1

0xce32,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g2

0xce32,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g3

0xce32,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g4

0xce32,	// (0x000164ae) shortcut_wheel_idle_act4_pane_g5

0xec22,	// (0x0001829e) shortcut_wheel_idle_act4_pane_g6

0xec2a,	// (0x000182a6) shortcut_wheel_idle_act4_pane_g7

0xec32,	// (0x000182ae) shortcut_wheel_idle_act4_pane_g8

0xec3a,	// (0x000182b6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x000193dd) shortcut_wheel_idle_act4_pane_g

0xd0c4,	// (0x00016740) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0c4,	// (0x00016740) middle_sk_idle_act4_pane_g1

0xec9e,	// (0x0001831a) middle_sk_idle_act4_pane_g2_ParamLimits

0xec9e,	// (0x0001831a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x00019400) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x00019400) middle_sk_idle_act4_pane_g

0xecaa,	// (0x00018326) middle_sk_idle_act4_pane_t1_ParamLimits

0xecaa,	// (0x00018326) middle_sk_idle_act4_pane_t1

0xecc7,	// (0x00018343) grid_ai_shortcut_pane_ParamLimits

0xecc7,	// (0x00018343) grid_ai_shortcut_pane

0xece0,	// (0x0001835c) list_highlight_pane_cp16_ParamLimits

0xece0,	// (0x0001835c) list_highlight_pane_cp16

0xeced,	// (0x00018369) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeced,	// (0x00018369) list_single_idle_plugin_shortcut_pane_g1

0xecf9,	// (0x00018375) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xecf9,	// (0x00018375) list_single_idle_plugin_shortcut_pane_g2

0xed11,	// (0x0001838d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xed11,	// (0x0001838d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x00019405) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x00019405) list_single_idle_plugin_shortcut_pane_g

0xed24,	// (0x000183a0) cell_ai_shortcut_pane_ParamLimits

0xed24,	// (0x000183a0) cell_ai_shortcut_pane

0xed48,	// (0x000183c4) cell_ai_shortcut_pane_g1_ParamLimits

0xed48,	// (0x000183c4) cell_ai_shortcut_pane_g1

0xeb75,	// (0x000181f1) ai_gene_pane_1_cp2

0xed6a,	// (0x000183e6) ai_gene_pane_2_cp2

0xed72,	// (0x000183ee) list_highlight_pane_cp15

0xed7b,	// (0x000183f7) list_single_idle_plugin_calendar_pane_g1

0xed72,	// (0x000183ee) list_highlight_pane_cp17

0xed83,	// (0x000183ff) list_single_idle_plugin_calendar_pane_g1_copy1

0xed8b,	// (0x00018407) list_single_idle_plugin_player_pane_g1

0xbfc0,	// (0x0001563c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x0001940c) list_single_idle_plugin_player_pane_g

0xed93,	// (0x0001840f) list_single_idle_plugin_player_pane_t1

0xeda1,	// (0x0001841d) list_single_idle_plugin_player_pane_t2

0xedaf,	// (0x0001842b) list_single_idle_plugin_player_pane_t3

0xedbd,	// (0x00018439) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x00019411) list_single_idle_plugin_player_pane_t

0xedcb,	// (0x00018447) wait_bar_pane_cp15

0xedd3,	// (0x0001844f) grid_ai_notification_pane

0xbfc0,	// (0x0001563c) list_single_idle_plugin_notification_pane_g1

0xeddc,	// (0x00018458) cell_ai_notification_pane_ParamLimits

0xeddc,	// (0x00018458) cell_ai_notification_pane

0xede9,	// (0x00018465) cell_ai_notification_pane_g1

0xedf1,	// (0x0001846d) cell_ai_notification_pane_t1

0xedff,	// (0x0001847b) tb_ext_find_button_pane

0xee07,	// (0x00018483) tb_ext_find_pane_g1

0xee0f,	// (0x0001848b) tb_ext_find_pane_t1

0x8feb,	// (0x00012667) tb_ext_find_button_pane_g1

0xee1d,	// (0x00018499) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x0001941a) tb_ext_find_button_pane_g

0xebba,	// (0x00018236) main_idle_act4_pane_t1_ParamLimits

0xebcc,	// (0x00018248) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x000193d8) main_idle_act4_pane_t_ParamLimits

0xebf4,	// (0x00018270) popup_clock_digital_analogue_window_cp2_ParamLimits

0xec02,	// (0x0001827e) sat_plugin_idle_act4_pane_ParamLimits

0xec02,	// (0x0001827e) sat_plugin_idle_act4_pane

0xee26,	// (0x000184a2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xee26,	// (0x000184a2) sat_plugin_idle_act4_pane_t1

0xee39,	// (0x000184b5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xee39,	// (0x000184b5) sat_plugin_idle_act4_pane_t2

0xee4c,	// (0x000184c8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xee4c,	// (0x000184c8) sat_plugin_idle_act4_pane_t3

0xee5f,	// (0x000184db) sat_plugin_idle_act4_pane_t4_ParamLimits

0xee5f,	// (0x000184db) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0001941f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0001941f) sat_plugin_idle_act4_pane_t

0x5f57,	// (0x0000f5d3) popup_battery_window_ParamLimits

0x5f57,	// (0x0000f5d3) popup_battery_window

0x7cc9,	// (0x00011345) bg_popup_sub_pane_cp25_ParamLimits

0x7cc9,	// (0x00011345) bg_popup_sub_pane_cp25

0xee72,	// (0x000184ee) popup_battery_window_g1_ParamLimits

0xee72,	// (0x000184ee) popup_battery_window_g1

0xee7e,	// (0x000184fa) popup_battery_window_t1_ParamLimits

0xee7e,	// (0x000184fa) popup_battery_window_t1

0xee90,	// (0x0001850c) popup_battery_window_t2_ParamLimits

0xee90,	// (0x0001850c) popup_battery_window_t2

0x0001,

0xfdac,	// (0x00019428) popup_battery_window_t_ParamLimits

0xfdac,	// (0x00019428) popup_battery_window_t

0x966b,	// (0x00012ce7) midp_canvas_pane_ParamLimits

0x96e0,	// (0x00012d5c) midp_keypad_pane_ParamLimits

0x96e0,	// (0x00012d5c) midp_keypad_pane

0x99e1,	// (0x0001305d) main_midp_pane_ParamLimits

0xc894,	// (0x00015f10) signal_pane_g2_cp_ParamLimits

0xeead,	// (0x00018529) aid_size_cell_midp_keypad_ParamLimits

0xeead,	// (0x00018529) aid_size_cell_midp_keypad

0xeec7,	// (0x00018543) midp_keyp_game_grid_pane_ParamLimits

0xeec7,	// (0x00018543) midp_keyp_game_grid_pane

0xeee7,	// (0x00018563) midp_keyp_rocker_pane_ParamLimits

0xeee7,	// (0x00018563) midp_keyp_rocker_pane

0xef20,	// (0x0001859c) midp_keyp_sk_left_pane_ParamLimits

0xef20,	// (0x0001859c) midp_keyp_sk_left_pane

0xef7a,	// (0x000185f6) midp_keyp_sk_right_pane_ParamLimits

0xef7a,	// (0x000185f6) midp_keyp_sk_right_pane

0x7932,	// (0x00010fae) bg_button_pane_cp03

0xefd4,	// (0x00018650) midp_keyp_sk_left_pane_g1

0x7932,	// (0x00010fae) bg_button_pane_cp04

0xefd4,	// (0x00018650) midp_keyp_sk_right_pane_g1

0xce32,	// (0x000164ae) midp_keyp_rocker_pane_g1

0xefdd,	// (0x00018659) keyp_game_cell_pane_ParamLimits

0xefdd,	// (0x00018659) keyp_game_cell_pane

0x7932,	// (0x00010fae) bg_button_pane_cp02

0xeff0,	// (0x0001866c) keyp_game_cell_pane_g1

0x5f9b,	// (0x0000f617) popup_fep_vkb2_window_ParamLimits

0x5f9b,	// (0x0000f617) popup_fep_vkb2_window

0x7174,	// (0x000107f0) aid_size_cell_vkb2_ParamLimits

0x7174,	// (0x000107f0) aid_size_cell_vkb2

0x71c8,	// (0x00010844) popup_fep_vkb2_window_g1_ParamLimits

0x71c8,	// (0x00010844) popup_fep_vkb2_window_g1

0x7210,	// (0x0001088c) vkb2_area_bottom_pane_ParamLimits

0x7210,	// (0x0001088c) vkb2_area_bottom_pane

0x725c,	// (0x000108d8) vkb2_area_keypad_pane_ParamLimits

0x725c,	// (0x000108d8) vkb2_area_keypad_pane

0x729e,	// (0x0001091a) vkb2_area_top_pane_ParamLimits

0x729e,	// (0x0001091a) vkb2_area_top_pane

0x7318,	// (0x00010994) vkb2_top_entry_pane_ParamLimits

0x7318,	// (0x00010994) vkb2_top_entry_pane

0x7342,	// (0x000109be) vkb2_top_grid_left_pane_ParamLimits

0x7342,	// (0x000109be) vkb2_top_grid_left_pane

0x7360,	// (0x000109dc) vkb2_top_grid_right_pane_ParamLimits

0x7360,	// (0x000109dc) vkb2_top_grid_right_pane

0x737e,	// (0x000109fa) vkb2_cell_keypad_pane_ParamLimits

0x737e,	// (0x000109fa) vkb2_cell_keypad_pane

0x744f,	// (0x00010acb) vkb2_area_bottom_grid_pane_ParamLimits

0x744f,	// (0x00010acb) vkb2_area_bottom_grid_pane

0x7475,	// (0x00010af1) vkb2_area_bottom_pane_g1_ParamLimits

0x7475,	// (0x00010af1) vkb2_area_bottom_pane_g1

0x7499,	// (0x00010b15) vkb2_area_bottom_pane_g2_ParamLimits

0x7499,	// (0x00010b15) vkb2_area_bottom_pane_g2

0x74c7,	// (0x00010b43) vkb2_area_bottom_pane_g3_ParamLimits

0x74c7,	// (0x00010b43) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x0001942d) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x0001942d) vkb2_area_bottom_pane_g

0x7528,	// (0x00010ba4) vkb2_top_cell_left_pane_ParamLimits

0x7528,	// (0x00010ba4) vkb2_top_cell_left_pane

0xf001,	// (0x0001867d) vkb2_top_entry_pane_g1_ParamLimits

0xf001,	// (0x0001867d) vkb2_top_entry_pane_g1

0xf00f,	// (0x0001868b) vkb2_top_entry_pane_t1_ParamLimits

0xf00f,	// (0x0001868b) vkb2_top_entry_pane_t1

0xf041,	// (0x000186bd) vkb2_top_entry_pane_t2_ParamLimits

0xf041,	// (0x000186bd) vkb2_top_entry_pane_t2

0xf073,	// (0x000186ef) vkb2_top_entry_pane_t3_ParamLimits

0xf073,	// (0x000186ef) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x00019434) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x00019434) vkb2_top_entry_pane_t

0x7575,	// (0x00010bf1) vkb2_top_grid_right_pane_g1_ParamLimits

0x7575,	// (0x00010bf1) vkb2_top_grid_right_pane_g1

0x758b,	// (0x00010c07) vkb2_top_grid_right_pane_g2_ParamLimits

0x758b,	// (0x00010c07) vkb2_top_grid_right_pane_g2

0x75a3,	// (0x00010c1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x75a3,	// (0x00010c1f) vkb2_top_grid_right_pane_g3

0x75bb,	// (0x00010c37) vkb2_top_grid_right_pane_g4_ParamLimits

0x75bb,	// (0x00010c37) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x0001943b) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x0001943b) vkb2_top_grid_right_pane_g

0x75d1,	// (0x00010c4d) vkb2_top_cell_left_pane_g1

0x75e8,	// (0x00010c64) vkb2_cell_keypad_pane_g1_ParamLimits

0x75e8,	// (0x00010c64) vkb2_cell_keypad_pane_g1

0xf097,	// (0x00018713) vkb2_cell_keypad_pane_t1_ParamLimits

0xf097,	// (0x00018713) vkb2_cell_keypad_pane_t1

0x75f6,	// (0x00010c72) vkb2_cell_bottom_grid_pane_ParamLimits

0x75f6,	// (0x00010c72) vkb2_cell_bottom_grid_pane

0x762f,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1

0xec42,	// (0x000182be) aid_call2_pane_cp02

0xec4a,	// (0x000182c6) aid_call_pane_cp02

0xec52,	// (0x000182ce) clock_digital_number_pane_cp10

0xec5a,	// (0x000182d6) clock_digital_number_pane_cp11

0xec62,	// (0x000182de) clock_digital_number_pane_cp12

0xec6a,	// (0x000182e6) clock_digital_number_pane_cp13

0xec72,	// (0x000182ee) clock_digital_separator_pane_cp10

0x8feb,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g1

0x8feb,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g2

0xec7a,	// (0x000182f6) popup_clock_digital_analogue_window_cp2_g3

0x8feb,	// (0x00012667) popup_clock_digital_analogue_window_cp2_g4

0xec7a,	// (0x000182f6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x000193f0) popup_clock_digital_analogue_window_cp2_g

0xec82,	// (0x000182fe) popup_clock_digital_analogue_window_cp2_t1

0xec90,	// (0x0001830c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x000193fb) popup_clock_digital_analogue_window_cp2_t

0xce32,	// (0x000164ae) clock_digital_number_pane_cp10_g1

0xce32,	// (0x000164ae) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x000191d7) clock_digital_number_pane_cp10_g

0xce32,	// (0x000164ae) clock_digital_separator_pane_cp10_g1

0xce32,	// (0x000164ae) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x000191d7) clock_digital_separator_pane_cp10_g

0xeabe,	// (0x0001813a) uniindi_top_pane_g3

0xeacf,	// (0x0001814b) uniindi_top_pane_g4

0x7409,	// (0x00010a85) vkb2_row_keypad_pane_ParamLimits

0x7409,	// (0x00010a85) vkb2_row_keypad_pane

0x764b,	// (0x00010cc7) vkb2_cell_t_keypad_pane_ParamLimits

0x764b,	// (0x00010cc7) vkb2_cell_t_keypad_pane

0x765b,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x765b,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08

0x766e,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x766e,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09

0x7682,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7682,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01

0x7693,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7693,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02

0x76a4,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x76a4,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03

0x76b5,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x76b5,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04

0x76c6,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x76c6,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05

0x76d7,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x76d7,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06

0x76e8,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x76e8,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07

0x76f9,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x76f9,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10

0x6eab,	// (0x00010527) vkb2_cell_t_keypad_pane_g1

0xf0ae,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1

0x5e92,	// (0x0000f50e) popup_grid_graphic2_window

0xf0c0,	// (0x0001873c) aid_size_cell_graphic2_ParamLimits

0xf0c0,	// (0x0001873c) aid_size_cell_graphic2

0xd699,	// (0x00016d15) bg_popup_window_pane_cp21_ParamLimits

0xd699,	// (0x00016d15) bg_popup_window_pane_cp21

0xf0ec,	// (0x00018768) graphic2_pages_pane_ParamLimits

0xf0ec,	// (0x00018768) graphic2_pages_pane

0xf132,	// (0x000187ae) grid_graphic2_control_pane_ParamLimits

0xf132,	// (0x000187ae) grid_graphic2_control_pane

0xf160,	// (0x000187dc) grid_graphic2_pane_ParamLimits

0xf160,	// (0x000187dc) grid_graphic2_pane

0xf1c0,	// (0x0001883c) cell_graphic2_pane

0x7932,	// (0x00010fae) main_comp_mode_pane

0xe2db,	// (0x00017957) list_ai3_gene_pane_ParamLimits

0xe708,	// (0x00017d84) bg_popup_window_pane_cp19_ParamLimits

0xe714,	// (0x00017d90) bg_touch_area_indi_pane_ParamLimits

0xe714,	// (0x00017d90) bg_touch_area_indi_pane

0xe72a,	// (0x00017da6) bg_touch_area_indi_pane_cp01_ParamLimits

0xe72a,	// (0x00017da6) bg_touch_area_indi_pane_cp01

0xe740,	// (0x00017dbc) bg_touch_area_indi_pane_cp02_ParamLimits

0xe740,	// (0x00017dbc) bg_touch_area_indi_pane_cp02

0xe758,	// (0x00017dd4) bg_touch_area_indi_pane_cp03_ParamLimits

0xe758,	// (0x00017dd4) bg_touch_area_indi_pane_cp03

0xe772,	// (0x00017dee) popup_slider_window_g1_ParamLimits

0xe78e,	// (0x00017e0a) popup_slider_window_g2_ParamLimits

0xe7aa,	// (0x00017e26) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x00019385) popup_slider_window_g_ParamLimits

0xe806,	// (0x00017e82) popup_slider_window_t1_ParamLimits

0xe87a,	// (0x00017ef6) small_volume_slider_vertical_pane_ParamLimits

0xf1c0,	// (0x0001883c) cell_graphic2_pane_ParamLimits

0xf20f,	// (0x0001888b) bg_button_pane_cp10_ParamLimits

0xf20f,	// (0x0001888b) bg_button_pane_cp10

0xf222,	// (0x0001889e) bg_button_pane_cp11_ParamLimits

0xf222,	// (0x0001889e) bg_button_pane_cp11

0xf235,	// (0x000188b1) graphic2_pages_pane_g1_ParamLimits

0xf235,	// (0x000188b1) graphic2_pages_pane_g1

0xf250,	// (0x000188cc) graphic2_pages_pane_g2_ParamLimits

0xf250,	// (0x000188cc) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x00019449) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x00019449) graphic2_pages_pane_g

0xf268,	// (0x000188e4) graphic2_pages_pane_t1_ParamLimits

0xf268,	// (0x000188e4) graphic2_pages_pane_t1

0xf280,	// (0x000188fc) cell_graphic2_control_pane_ParamLimits

0xf280,	// (0x000188fc) cell_graphic2_control_pane

0xf29a,	// (0x00018916) cell_graphic2_pane_g1_ParamLimits

0xf29a,	// (0x00018916) cell_graphic2_pane_g1

0xf2a7,	// (0x00018923) cell_graphic2_pane_g2_ParamLimits

0xf2a7,	// (0x00018923) cell_graphic2_pane_g2

0xf2b4,	// (0x00018930) cell_graphic2_pane_g3_ParamLimits

0xf2b4,	// (0x00018930) cell_graphic2_pane_g3

0xf2c1,	// (0x0001893d) cell_graphic2_pane_g4_ParamLimits

0xf2c1,	// (0x0001893d) cell_graphic2_pane_g4

0xf2ce,	// (0x0001894a) cell_graphic2_pane_g5_ParamLimits

0xf2ce,	// (0x0001894a) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0001944e) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0001944e) cell_graphic2_pane_g

0xf2e9,	// (0x00018965) cell_graphic2_pane_t1_ParamLimits

0xf2e9,	// (0x00018965) cell_graphic2_pane_t1

0xa5d3,	// (0x00013c4f) grid_highlight_pane_cp11_ParamLimits

0xa5d3,	// (0x00013c4f) grid_highlight_pane_cp11

0x880d,	// (0x00011e89) bg_button_pane_cp05

0xf2ff,	// (0x0001897b) cell_graphic2_control_pane_g1

0xce32,	// (0x000164ae) bg_touch_area_indi_pane_g1

0xf30c,	// (0x00018988) aid_cmod_rocker_key_size

0xf316,	// (0x00018992) aid_cmode_itu_key_size

0xf320,	// (0x0001899c) main_cmode_video_pane

0xf32a,	// (0x000189a6) main_comp_mode_itu_pane

0xf336,	// (0x000189b2) main_comp_mode_rocker_pane

0xf342,	// (0x000189be) cell_cmode_rocker_pane_ParamLimits

0xf342,	// (0x000189be) cell_cmode_rocker_pane

0xf354,	// (0x000189d0) cell_cmode_itu_pane_ParamLimits

0xf354,	// (0x000189d0) cell_cmode_itu_pane

0x880d,	// (0x00011e89) bg_button_pane_cp06_ParamLimits

0x880d,	// (0x00011e89) bg_button_pane_cp06

0xd0c4,	// (0x00016740) cell_cmode_rocker_pane_g1_ParamLimits

0xd0c4,	// (0x00016740) cell_cmode_rocker_pane_g1

0xe91e,	// (0x00017f9a) cell_cmode_rocker_pane_g2_ParamLimits

0xe91e,	// (0x00017f9a) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x00019459) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x00019459) cell_cmode_rocker_pane_g

0x7932,	// (0x00010fae) bg_button_pane_cp07

0xf369,	// (0x000189e5) cell_cmode_itu_pane_g1

0xf372,	// (0x000189ee) cell_cmode_itu_pane_t1

0xf380,	// (0x000189fc) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0001945e) cell_cmode_itu_pane_t

0xeb41,	// (0x000181bd) aid_touch_ctrl_left

0xeb49,	// (0x000181c5) aid_touch_ctrl_right

0x7932,	// (0x00010fae) compa_mode_pane

0xf38e,	// (0x00018a0a) aid_cmod_rocker_key_size_cp

0xf398,	// (0x00018a14) aid_cmode_itu_key_size_cp

0xf3a2,	// (0x00018a1e) compa_mode_pane_g1

0xf3aa,	// (0x00018a26) compa_mode_pane_g2

0xf3b2,	// (0x00018a2e) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x00019463) compa_mode_pane_g

0xf3ba,	// (0x00018a36) main_comp_mode_itu_pane_cp

0xf3c2,	// (0x00018a3e) main_comp_mode_rocker_pane_cp

0xf3ca,	// (0x00018a46) cell_cmode_itu_pane_cp_ParamLimits

0xf3ca,	// (0x00018a46) cell_cmode_itu_pane_cp

0xf3df,	// (0x00018a5b) cell_cmode_rocker_pane_cp_ParamLimits

0xf3df,	// (0x00018a5b) cell_cmode_rocker_pane_cp

0x880d,	// (0x00011e89) bg_button_pane_cp06_cp_ParamLimits

0x880d,	// (0x00011e89) bg_button_pane_cp06_cp

0xd0c4,	// (0x00016740) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd0c4,	// (0x00016740) cell_cmode_rocker_pane_g1_cp

0xce32,	// (0x000164ae) cell_cmode_rocker_pane_g2_cp

0x7932,	// (0x00010fae) bg_button_pane_cp07_cp

0xbac0,	// (0x0001513c) cell_cmode_itu_pane_g1_cp

0xf3f1,	// (0x00018a6d) cell_cmode_itu_pane_t1_cp

0xf3f1,	// (0x00018a6d) cell_cmode_itu_pane_t2_cp

0xbaad,	// (0x00015129) settings_code_pane_cp2

0x7a26,	// (0x000110a2) bg_popup_window_pane_cp3_ParamLimits

0x7ea3,	// (0x0001151f) heading_pane_cp3_ParamLimits

0x7eaf,	// (0x0001152b) listscroll_popup_graphic_pane_ParamLimits

0x6c54,	// (0x000102d0) fep_hwr_aid_pane_ParamLimits

0x70cc,	// (0x00010748) aid_touch_sctrl_top_ParamLimits

0x70e7,	// (0x00010763) sctrl_sk_top_pane_g1_ParamLimits

0x6eab,	// (0x00010527) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x0001939e) sctrl_sk_top_pane_g_ParamLimits

0x70f4,	// (0x00010770) sctrl_sk_top_pane_t1_ParamLimits

0x70cc,	// (0x00010748) aid_touch_sctrl_bottom_ParamLimits

0x70f4,	// (0x00010770) sctrl_sk_bottom_pane_t1_ParamLimits

0xea8a,	// (0x00018106) aid_area_touch_clock

0x72e0,	// (0x0001095c) aid_vkb2_area_top_pane_cell_ParamLimits

0x72e0,	// (0x0001095c) aid_vkb2_area_top_pane_cell

0x742b,	// (0x00010aa7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x742b,	// (0x00010aa7) aid_vkb2_area_bottom_pane_cell

0xeff9,	// (0x00018675) popup_char_count_window

0xf3ff,	// (0x00018a7b) popup_char_count_window_g1

0xf408,	// (0x00018a84) popup_char_count_window_g2

0xf411,	// (0x00018a8d) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0001946a) popup_char_count_window_g

0xf41a,	// (0x00018a96) popup_char_count_window_t1

0x71a6,	// (0x00010822) popup_fep_char_preview_window_ParamLimits

0x71a6,	// (0x00010822) popup_fep_char_preview_window

0x72fe,	// (0x0001097a) vkb2_top_candi_pane_ParamLimits

0x72fe,	// (0x0001097a) vkb2_top_candi_pane

0xf428,	// (0x00018aa4) cell_vkb2_top_candi_pane_ParamLimits

0xf428,	// (0x00018aa4) cell_vkb2_top_candi_pane

0x770e,	// (0x00010d8a) bg_popup_fep_char_preview_window_ParamLimits

0x770e,	// (0x00010d8a) bg_popup_fep_char_preview_window

0x771c,	// (0x00010d98) popup_fep_char_preview_window_t1_ParamLimits

0x771c,	// (0x00010d98) popup_fep_char_preview_window_t1

0xf496,	// (0x00018b12) bg_popup_fep_char_preview_window_g1

0xf49e,	// (0x00018b1a) bg_popup_fep_char_preview_window_g2

0xf4a6,	// (0x00018b22) bg_popup_fep_char_preview_window_g3

0xf4ae,	// (0x00018b2a) bg_popup_fep_char_preview_window_g4

0xf4b6,	// (0x00018b32) bg_popup_fep_char_preview_window_g5

0x7756,	// (0x00010dd2) bg_popup_fep_char_preview_window_g6

0xf4be,	// (0x00018b3a) bg_popup_fep_char_preview_window_g7

0xf4c6,	// (0x00018b42) bg_popup_fep_char_preview_window_g8

0xf4ce,	// (0x00018b4a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x00019471) bg_popup_fep_char_preview_window_g

0x6eab,	// (0x00010527) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6eab,	// (0x00010527) cell_vkb2_top_candi_pane_g1

0x6eb9,	// (0x00010535) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6eb9,	// (0x00010535) cell_vkb2_top_candi_pane_g2

0xf475,	// (0x00018af1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf475,	// (0x00018af1) cell_vkb2_top_candi_pane_g3

0x775e,	// (0x00010dda) cell_vkb2_top_candi_pane_g4_ParamLimits

0x775e,	// (0x00010dda) cell_vkb2_top_candi_pane_g4

0xd678,	// (0x00016cf4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd678,	// (0x00016cf4) cell_vkb2_top_candi_pane_g5

0x777f,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x777f,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x00019484) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x00019484) cell_vkb2_top_candi_pane_g

0x778d,	// (0x00010e09) cell_vkb2_top_candi_pane_t1

0x6ab4,	// (0x00010130) aid_size_touch_slider_mark_ParamLimits

0x6ab4,	// (0x00010130) aid_size_touch_slider_mark

0xf122,	// (0x0001879e) grid_graphic2_catg_pane_ParamLimits

0xf122,	// (0x0001879e) grid_graphic2_catg_pane

0xf19c,	// (0x00018818) popup_grid_graphic2_window_t1_ParamLimits

0xf19c,	// (0x00018818) popup_grid_graphic2_window_t1

0xf1ae,	// (0x0001882a) popup_grid_graphic2_window_t2_ParamLimits

0xf1ae,	// (0x0001882a) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x00019444) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x00019444) popup_grid_graphic2_window_t

0x880d,	// (0x00011e89) bg_button_pane_cp05_ParamLimits

0xf2ff,	// (0x0001897b) cell_graphic2_control_pane_g1_ParamLimits

0xf4d6,	// (0x00018b52) cell_graphic2_catg_pane_ParamLimits

0xf4d6,	// (0x00018b52) cell_graphic2_catg_pane

0x7932,	// (0x00010fae) bg_button_pane_cp12

0xf4e8,	// (0x00018b64) cell_graphic2_catg_pane_g1

0xea56,	// (0x000180d2) cell_tb_ext_pane_t1_ParamLimits

0x7548,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7548,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane

0x7560,	// (0x00010bdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x7560,	// (0x00010bdc) vkb2_top_cell_right_wide_pane

0x6c46,	// (0x000102c2) bg_vkb2_func_pane_ParamLimits

0x6c46,	// (0x000102c2) bg_vkb2_func_pane

0x75d1,	// (0x00010c4d) vkb2_top_cell_left_pane_g1_ParamLimits

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp03

0x762f,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa4c1,	// (0x00013b3d) bg_vkb2_func_pane_g1

0xa4c9,	// (0x00013b45) bg_vkb2_func_pane_g2

0xa4d9,	// (0x00013b55) bg_vkb2_func_pane_g3

0xa4d1,	// (0x00013b4d) bg_vkb2_func_pane_g4

0xa4e1,	// (0x00013b5d) bg_vkb2_func_pane_g5

0xa4e9,	// (0x00013b65) bg_vkb2_func_pane_g6

0xa4f1,	// (0x00013b6d) bg_vkb2_func_pane_g7

0xa4f9,	// (0x00013b75) bg_vkb2_func_pane_g8

0xa4b9,	// (0x00013b35) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x00019491) bg_vkb2_func_pane_g

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp01

0x75d1,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x75d1,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6c46,	// (0x000102c2) bg_vkb2_fuc_pane_cp02

0x762f,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x762f,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1

0xe68c,	// (0x00017d08) aid_touch_area_decrease_ParamLimits

0xe68c,	// (0x00017d08) aid_touch_area_decrease

0xe6aa,	// (0x00017d26) aid_touch_area_increase_ParamLimits

0xe6aa,	// (0x00017d26) aid_touch_area_increase

0xe6b6,	// (0x00017d32) aid_touch_area_mute_ParamLimits

0xe6b6,	// (0x00017d32) aid_touch_area_mute

0xe6da,	// (0x00017d56) aid_touch_area_slider_ParamLimits

0xe6da,	// (0x00017d56) aid_touch_area_slider

0xe7c6,	// (0x00017e42) popup_slider_window_g4_ParamLimits

0xe7c6,	// (0x00017e42) popup_slider_window_g4

0xe7d2,	// (0x00017e4e) popup_slider_window_g5_ParamLimits

0xe7d2,	// (0x00017e4e) popup_slider_window_g5

0xe7f4,	// (0x00017e70) popup_slider_window_g6_ParamLimits

0xe7f4,	// (0x00017e70) popup_slider_window_g6

0xe834,	// (0x00017eb0) popup_slider_window_t2_ParamLimits

0xe834,	// (0x00017eb0) popup_slider_window_t2

0x0001,

0xfd16,	// (0x00019392) popup_slider_window_t_ParamLimits

0xfd16,	// (0x00019392) popup_slider_window_t

0xe84c,	// (0x00017ec8) slider_pane_ParamLimits

0xe84c,	// (0x00017ec8) slider_pane

0xf4f1,	// (0x00018b6d) slider_pane_g1_ParamLimits

0xf4f1,	// (0x00018b6d) slider_pane_g1

0xf505,	// (0x00018b81) slider_pane_g2_ParamLimits

0xf505,	// (0x00018b81) slider_pane_g2

0xf51b,	// (0x00018b97) slider_pane_g3_ParamLimits

0xf51b,	// (0x00018b97) slider_pane_g3

0x0003,

0xfe28,	// (0x000194a4) slider_pane_g_ParamLimits

0xfe28,	// (0x000194a4) slider_pane_g

0x9eb9,	// (0x00013535) popup_tb_float_extension_window_ParamLimits

0x9eb9,	// (0x00013535) popup_tb_float_extension_window

0xf547,	// (0x00018bc3) aid_size_cell_tb_float_ext

0x7932,	// (0x00010fae) bg_popup_sub_window_cp28

0xf553,	// (0x00018bcf) grid_tb_float_ext_pane

0xf55d,	// (0x00018bd9) cell_tb_float_ext_pane_ParamLimits

0xf55d,	// (0x00018bd9) cell_tb_float_ext_pane

0xf577,	// (0x00018bf3) cell_tb_float_ext_pane_g1

0xf580,	// (0x00018bfc) grid_highlight_pane_cp12

0x6d95,	// (0x00010411) cell_last_hwr_side_pane_ParamLimits

0x6d95,	// (0x00010411) cell_last_hwr_side_pane

0xce32,	// (0x000164ae) cell_last_hwr_side_pane_g1

0xf589,	// (0x00018c05) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x000194ad) cell_last_hwr_side_pane_g

0x74f7,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_ParamLimits

0x74f7,	// (0x00010b73) vkb2_area_bottom_space_btn_pane

0x6eab,	// (0x00010527) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf0ae,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x778d,	// (0x00010e09) cell_vkb2_top_candi_pane_t1_ParamLimits

0x77ac,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x77ac,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1

0x77e6,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x77e6,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2

0x781c,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x781c,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x000194b2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x000194b2) vkb2_area_bottom_space_btn_pane_g

0x6d09,	// (0x00010385) cel_fep_hwr_func_pane_ParamLimits

0x6d09,	// (0x00010385) cel_fep_hwr_func_pane

0x6d45,	// (0x000103c1) cell_hwr_side_button_pane_ParamLimits

0x6d45,	// (0x000103c1) cell_hwr_side_button_pane

0xea8a,	// (0x00018106) aid_area_touch_clock_ParamLimits

0x7cc9,	// (0x00011345) bg_uniindi_top_pane_ParamLimits

0xea9c,	// (0x00018118) uniindi_top_pane_g1_ParamLimits

0xeab2,	// (0x0001812e) uniindi_top_pane_g2_ParamLimits

0xeabe,	// (0x0001813a) uniindi_top_pane_g3_ParamLimits

0xeacf,	// (0x0001814b) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x000193ca) uniindi_top_pane_g_ParamLimits

0xeadc,	// (0x00018158) uniindi_top_pane_t1_ParamLimits

0x7cc9,	// (0x00011345) bg_vkb2_func_pane_cp01_ParamLimits

0x7cc9,	// (0x00011345) bg_vkb2_func_pane_cp01

0x006a,	// (0x000096e6) cel_fep_hwr_func_pane_g1_ParamLimits

0x006a,	// (0x000096e6) cel_fep_hwr_func_pane_g1

0x7cc9,	// (0x00011345) bg_vkb2_func_pane_cp02_ParamLimits

0x7cc9,	// (0x00011345) bg_vkb2_func_pane_cp02

0x006a,	// (0x000096e6) cell_hwr_side_button_pane_g1_ParamLimits

0x006a,	// (0x000096e6) cell_hwr_side_button_pane_g1

0xa300,	// (0x0001397c) status_pane_g4_ParamLimits

0xa300,	// (0x0001397c) status_pane_g4

0xa31a,	// (0x00013996) status_pane_t1

0xcb6b,	// (0x000161e7) form2_midp_gauge_slider_cont_pane

0xcb73,	// (0x000161ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb85,	// (0x00016201) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb97,	// (0x00016213) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x0001918a) form2_midp_gauge_slider_pane_t_ParamLimits

0xcba9,	// (0x00016225) form2_midp_slider_pane_ParamLimits

0x7166,	// (0x000107e2) aid_size_cell_func_vkb2_ParamLimits

0x7166,	// (0x000107e2) aid_size_cell_func_vkb2

0xf533,	// (0x00018baf) slider_pane_g4_ParamLimits

0xf533,	// (0x00018baf) slider_pane_g4

0x7866,	// (0x00010ee2) form2_midp_gauge_slider_pane_t2_cp01

0x7874,	// (0x00010ef0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7874,	// (0x00010ef0) form2_midp_gauge_slider_pane_t3_cp01

0x7891,	// (0x00010f0d) form2_midp_slider_pane_cp01

0x7932,	// (0x00010fae) navi_smil_pane

0x00d7,	// (0x00009753) navi_smil_pane_g1

0x00df,	// (0x0000975b) navi_smil_pane_t1

0x00ac,	// (0x00009728) form2_midp_slider_pane_g1

0x00b5,	// (0x00009731) form2_midp_slider_pane_g2

0x00bd,	// (0x00009739) form2_midp_slider_pane_g3

0x00ac,	// (0x00009728) form2_midp_slider_pane_g4

0x00c5,	// (0x00009741) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x000194bb) form2_midp_slider_pane_g

0x7856,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7856,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4

0xa136,	// (0x000137b2) lc0_navi_pane_ParamLimits

0xa136,	// (0x000137b2) lc0_navi_pane

0xa1ac,	// (0x00013828) lc0_stat_indi_pane_ParamLimits

0xa1ac,	// (0x00013828) lc0_stat_indi_pane

0xa1c3,	// (0x0001383f) ls0_title_pane_ParamLimits

0xa1c3,	// (0x0001383f) ls0_title_pane

0x880d,	// (0x00011e89) bg_popup_sub_pane_cp14_ParamLimits

0xea71,	// (0x000180ed) list_uniindi_pane_ParamLimits

0xea7d,	// (0x000180f9) uniindi_top_pane_ParamLimits

0xeb19,	// (0x00018195) list_single_uniindi_pane_g1_ParamLimits

0xeb2c,	// (0x000181a8) list_single_uniindi_pane_t1_ParamLimits

0x789a,	// (0x00010f16) lc0_stat_clock_pane_ParamLimits

0x789a,	// (0x00010f16) lc0_stat_clock_pane

0x0107,	// (0x00009783) lc0_stat_indi_pane_g1_ParamLimits

0x0107,	// (0x00009783) lc0_stat_indi_pane_g1

0x00fa,	// (0x00009776) lc0_stat_indi_pane_g2_ParamLimits

0x00fa,	// (0x00009776) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x000194c6) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x000194c6) lc0_stat_indi_pane_g

0x78a7,	// (0x00010f23) lc0_uni_indicator_pane_ParamLimits

0x78a7,	// (0x00010f23) lc0_uni_indicator_pane

0x0121,	// (0x0000979d) ls0_title_pane_g1_ParamLimits

0x0121,	// (0x0000979d) ls0_title_pane_g1

0x0135,	// (0x000097b1) ls0_title_pane_t1_ParamLimits

0x0135,	// (0x000097b1) ls0_title_pane_t1

0x78b4,	// (0x00010f30) lc0_uni_indicator_pane_g1_ParamLimits

0x78b4,	// (0x00010f30) lc0_uni_indicator_pane_g1

0x017f,	// (0x000097fb) lc0_stat_clock_pane_t1

0x7932,	// (0x00010fae) main_ai5_pane

0x018d,	// (0x00009809) ai5_sk_pane_ParamLimits

0x018d,	// (0x00009809) ai5_sk_pane

0x019a,	// (0x00009816) cell_ai5_widget_pane_ParamLimits

0x019a,	// (0x00009816) cell_ai5_widget_pane

0x021c,	// (0x00009898) aid_size_cell_widget_grid

0x0230,	// (0x000098ac) bg_ai5_widget_pane_ParamLimits

0x0230,	// (0x000098ac) bg_ai5_widget_pane

0x0258,	// (0x000098d4) cell_ai5_widget_pane_g2

0x0268,	// (0x000098e4) cell_ai5_widget_pane_g3

0x027c,	// (0x000098f8) cell_ai5_widget_pane_g4

0x0288,	// (0x00009904) cell_ai5_widget_pane_g5

0x0294,	// (0x00009910) cell_ai5_widget_pane_g6

0x02a0,	// (0x0000991c) cell_ai5_widget_pane_g7

0x02e8,	// (0x00009964) cell_ai5_widget_pane_t1_ParamLimits

0x02e8,	// (0x00009964) cell_ai5_widget_pane_t1

0x0305,	// (0x00009981) cell_ai5_widget_pane_t2_ParamLimits

0x0305,	// (0x00009981) cell_ai5_widget_pane_t2

0x031d,	// (0x00009999) cell_ai5_widget_pane_t3_ParamLimits

0x031d,	// (0x00009999) cell_ai5_widget_pane_t3

0x0335,	// (0x000099b1) cell_ai5_widget_pane_t4_ParamLimits

0x0335,	// (0x000099b1) cell_ai5_widget_pane_t4

0x034f,	// (0x000099cb) cell_ai5_widget_pane_t5_ParamLimits

0x034f,	// (0x000099cb) cell_ai5_widget_pane_t5

0x036e,	// (0x000099ea) cell_ai5_widget_pane_t6_ParamLimits

0x036e,	// (0x000099ea) cell_ai5_widget_pane_t6

0x0380,	// (0x000099fc) cell_ai5_widget_pane_t7_ParamLimits

0x0380,	// (0x000099fc) cell_ai5_widget_pane_t7

0x0399,	// (0x00009a15) cell_ai5_widget_pane_t8_ParamLimits

0x0399,	// (0x00009a15) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x000194e0) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x000194e0) cell_ai5_widget_pane_t

0x03e1,	// (0x00009a5d) grid_ai5_widget_pane

0x880d,	// (0x00011e89) highlight_cell_ai5_widget_pane_ParamLimits

0x880d,	// (0x00011e89) highlight_cell_ai5_widget_pane

0x03f9,	// (0x00009a75) ai5_sk_left_pane

0x0403,	// (0x00009a7f) ai5_sk_middle_pane

0x040d,	// (0x00009a89) ai5_sk_right_pane

0x0417,	// (0x00009a93) bg_ai5_widget_pane_g1_ParamLimits

0x0417,	// (0x00009a93) bg_ai5_widget_pane_g1

0x0423,	// (0x00009a9f) bg_ai5_widget_pane_g2_ParamLimits

0x0423,	// (0x00009a9f) bg_ai5_widget_pane_g2

0x042f,	// (0x00009aab) bg_ai5_widget_pane_g3_ParamLimits

0x042f,	// (0x00009aab) bg_ai5_widget_pane_g3

0x043b,	// (0x00009ab7) bg_ai5_widget_pane_g4_ParamLimits

0x043b,	// (0x00009ab7) bg_ai5_widget_pane_g4

0x0447,	// (0x00009ac3) bg_ai5_widget_pane_g5_ParamLimits

0x0447,	// (0x00009ac3) bg_ai5_widget_pane_g5

0x0453,	// (0x00009acf) bg_ai5_widget_pane_g6_ParamLimits

0x0453,	// (0x00009acf) bg_ai5_widget_pane_g6

0x045f,	// (0x00009adb) bg_ai5_widget_pane_g7_ParamLimits

0x045f,	// (0x00009adb) bg_ai5_widget_pane_g7

0x046b,	// (0x00009ae7) bg_ai5_widget_pane_g8_ParamLimits

0x046b,	// (0x00009ae7) bg_ai5_widget_pane_g8

0x0477,	// (0x00009af3) bg_ai5_widget_pane_g9_ParamLimits

0x0477,	// (0x00009af3) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x000194f5) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x000194f5) bg_ai5_widget_pane_g

0x04aa,	// (0x00009b26) cell_shortcut_ai5_widget_pane_ParamLimits

0x04aa,	// (0x00009b26) cell_shortcut_ai5_widget_pane

0x7b09,	// (0x00011185) bg_cell_shortcut_ai5_widget_pane

0x04bb,	// (0x00009b37) cell_grid_ai5_widget_pane_g1

0x04c4,	// (0x00009b40) highlight_cell_shortcut_ai5_widget_pane

0xa4c1,	// (0x00013b3d) ai5_sk_left_pane_g1

0x04cc,	// (0x00009b48) ai5_sk_left_pane_g2

0x04d4,	// (0x00009b50) ai5_sk_left_pane_g3

0x04dc,	// (0x00009b58) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x00019508) ai5_sk_left_pane_g

0x04e4,	// (0x00009b60) ai5_sk_left_pane_t1

0xa4c9,	// (0x00013b45) ai5_sk_right_pane_g1

0x04f2,	// (0x00009b6e) ai5_sk_right_pane_g2

0x04fa,	// (0x00009b76) ai5_sk_right_pane_g3

0x0502,	// (0x00009b7e) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x00019511) ai5_sk_right_pane_g

0x050a,	// (0x00009b86) ai5_sk_right_pane_t1

0xa4c9,	// (0x00013b45) ai5_sk_middle_pane_g1

0xa4c1,	// (0x00013b3d) ai5_sk_middle_pane_g2

0xa4e1,	// (0x00013b5d) ai5_sk_middle_pane_g3

0x04fa,	// (0x00009b76) ai5_sk_middle_pane_g4

0x04d4,	// (0x00009b50) ai5_sk_middle_pane_g5

0x0518,	// (0x00009b94) ai5_sk_middle_pane_g6

0x0520,	// (0x00009b9c) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0001951a) ai5_sk_middle_pane_g

0x9fc6,	// (0x00013642) aid_touch_area_size_lc0_ParamLimits

0x9fc6,	// (0x00013642) aid_touch_area_size_lc0

0x6eda,	// (0x00010556) cell_hwr_candidate_pane_t1_ParamLimits

0x9fe2,	// (0x0001365e) aid_touch_navi_pane

0xa2aa,	// (0x00013926) status_dt_navi_pane_ParamLimits

0xa2aa,	// (0x00013926) status_dt_navi_pane

0xa2b7,	// (0x00013933) status_dt_sta_pane_ParamLimits

0xa2b7,	// (0x00013933) status_dt_sta_pane

0x0528,	// (0x00009ba4) dt_sta_controll_pane

0x0535,	// (0x00009bb1) dt_sta_indi_pane

0x0546,	// (0x00009bc2) dt_sta_title_pane

0x7cc9,	// (0x00011345) bg_dt_sta_indi_pane_ParamLimits

0x7cc9,	// (0x00011345) bg_dt_sta_indi_pane

0x0559,	// (0x00009bd5) dt_sta_battery_pane

0x0561,	// (0x00009bdd) dt_sta_indi_pane_g1

0x056a,	// (0x00009be6) dt_sta_indi_pane_g2

0x0573,	// (0x00009bef) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x00019529) dt_sta_indi_pane_g

0x057c,	// (0x00009bf8) dt_sta_signal_pane

0x880d,	// (0x00011e89) bg_dt_sta_title_pane_ParamLimits

0x880d,	// (0x00011e89) bg_dt_sta_title_pane

0x0585,	// (0x00009c01) dt_sta_title_pane_g1

0x058d,	// (0x00009c09) dt_sta_title_pane_t1_ParamLimits

0x058d,	// (0x00009c09) dt_sta_title_pane_t1

0x7932,	// (0x00010fae) bg_dt_sta_control_pane

0x05a2,	// (0x00009c1e) dt_sta_controll_pane_g1

0x05ab,	// (0x00009c27) bg_dt_sta_title_pane_g1

0x05b4,	// (0x00009c30) bg_dt_sta_title_pane_g2

0x05bd,	// (0x00009c39) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x00019530) bg_dt_sta_title_pane_g

0xce32,	// (0x000164ae) bg_dt_sta_indi_pane_g1

0x05c6,	// (0x00009c42) dt_sta_signal_pane_g1

0x05ce,	// (0x00009c4a) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x00019537) dt_sta_signal_pane_g

0x05d6,	// (0x00009c52) dt_sta_battery_pane_g1

0x05df,	// (0x00009c5b) dt_sta_battery_pane_t1

0xce32,	// (0x000164ae) bg_dt_sta_control_pane_g1

0x90d2,	// (0x0001274e) fep_china_uni_eep_pane

0x90da,	// (0x00012756) fep_china_uni_entry_pane_ParamLimits

0x90ea,	// (0x00012766) popup_fep_china_uni_window_g1_ParamLimits

0x90fa,	// (0x00012776) popup_fep_china_uni_window_g2_ParamLimits

0x90fa,	// (0x00012776) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00018dd4) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00018dd4) popup_fep_china_uni_window_g

0x05ee,	// (0x00009c6a) fep_china_uni_eep_pane_g1

0x05f6,	// (0x00009c72) fep_china_uni_eep_pane_t1

0x00ce,	// (0x0000974a) aid_touch_area_size_smil_player

0xa12e,	// (0x000137aa) lc0_clock_pane

0xa30e,	// (0x0001398a) status_pane_g5_ParamLimits

0xa30e,	// (0x0001398a) status_pane_g5

0x9b7e,	// (0x000131fa) popup_keymap_window

0xa2cc,	// (0x00013948) status_icon_pane

0x0268,	// (0x000098e4) cell_ai5_widget_pane_g3_ParamLimits

0x027c,	// (0x000098f8) cell_ai5_widget_pane_g4_ParamLimits

0x0288,	// (0x00009904) cell_ai5_widget_pane_g5_ParamLimits

0x02ac,	// (0x00009928) cell_ai5_widget_pane_g8_ParamLimits

0x02ac,	// (0x00009928) cell_ai5_widget_pane_g8

0x02c0,	// (0x0000993c) cell_ai5_widget_pane_g9_ParamLimits

0x02c0,	// (0x0000993c) cell_ai5_widget_pane_g9

0x02d4,	// (0x00009950) cell_ai5_widget_pane_g10_ParamLimits

0x02d4,	// (0x00009950) cell_ai5_widget_pane_g10

0x0605,	// (0x00009c81) status_icon_pane_g1

0x7932,	// (0x00010fae) bg_popup_sub_pane_cp13

0x060d,	// (0x00009c89) popup_keymap_window_t1

0x992e,	// (0x00012faa) control_pane_g6_ParamLimits

0x992e,	// (0x00012faa) control_pane_g6

0x993b,	// (0x00012fb7) control_pane_g7_ParamLimits

0x993b,	// (0x00012fb7) control_pane_g7

0x9948,	// (0x00012fc4) control_pane_g8_ParamLimits

0x9948,	// (0x00012fc4) control_pane_g8

0x0528,	// (0x00009ba4) dt_sta_controll_pane_ParamLimits

0x0535,	// (0x00009bb1) dt_sta_indi_pane_ParamLimits

0x0546,	// (0x00009bc2) dt_sta_title_pane_ParamLimits

0x81e4,	// (0x00011860) aid_size_touch_scroll_bar_cale

0x5f6b,	// (0x0000f5e7) popup_discreet_window_ParamLimits

0x5f6b,	// (0x0000f5e7) popup_discreet_window

0x5ff3,	// (0x0000f66f) popup_sk_window

0xabbd,	// (0x00014239) bg_popup_sub_pane_cp28_ParamLimits

0xabbd,	// (0x00014239) bg_popup_sub_pane_cp28

0x061b,	// (0x00009c97) popup_discreet_window_g1_ParamLimits

0x061b,	// (0x00009c97) popup_discreet_window_g1

0x063b,	// (0x00009cb7) popup_discreet_window_t1_ParamLimits

0x063b,	// (0x00009cb7) popup_discreet_window_t1

0x0659,	// (0x00009cd5) popup_discreet_window_t2_ParamLimits

0x0659,	// (0x00009cd5) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0001953c) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0001953c) popup_discreet_window_t

0x78c8,	// (0x00010f44) popup_sk_window_g1

0x78d2,	// (0x00010f4e) popup_sk_window_g2

0x0001,

0xfec7,	// (0x00019543) popup_sk_window_g

0x06cd,	// (0x00009d49) popup_sk_window_t1

0x06bf,	// (0x00009d3b) popup_sk_window_t1_copy1

0x0258,	// (0x000098d4) cell_ai5_widget_pane_g2_ParamLimits

0x03ab,	// (0x00009a27) cell_ai5_widget_pane_t9_ParamLimits

0x03ab,	// (0x00009a27) cell_ai5_widget_pane_t9

0x7932,	// (0x00010fae) main_fep_fshwr2_pane

0x06db,	// (0x00009d57) aid_fshwr2_btn_pane

0x06e3,	// (0x00009d5f) aid_fshwr2_syb_pane

0x06eb,	// (0x00009d67) aid_fshwr2_txt_pane

0x06f3,	// (0x00009d6f) fshwr2_func_candi_pane

0x06ff,	// (0x00009d7b) fshwr2_hwr_syb_pane

0x070b,	// (0x00009d87) fshwr2_icf_pane

0x7932,	// (0x00010fae) fshwr2_icf_bg_pane

0x0729,	// (0x00009da5) fshwr2_icf_pane_t1_ParamLimits

0x0729,	// (0x00009da5) fshwr2_icf_pane_t1

0xce32,	// (0x000164ae) fshwr2_func_candi_pane_g1

0x0740,	// (0x00009dbc) fshwr2_func_candi_row_pane_ParamLimits

0x0740,	// (0x00009dbc) fshwr2_func_candi_row_pane

0x0751,	// (0x00009dcd) cell_fshwr2_syb_pane_ParamLimits

0x0751,	// (0x00009dcd) cell_fshwr2_syb_pane

0xd0c4,	// (0x00016740) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd0c4,	// (0x00016740) fshwr2_hwr_syb_pane_g1

0x7932,	// (0x00010fae) bg_popup_call_pane_cp01

0x076b,	// (0x00009de7) fshwr2_func_candi_cell_pane_ParamLimits

0x076b,	// (0x00009de7) fshwr2_func_candi_cell_pane

0x079c,	// (0x00009e18) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x079c,	// (0x00009e18) fshwr2_func_candi_cell_bg_pane

0x07b6,	// (0x00009e32) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x07b6,	// (0x00009e32) fshwr2_func_candi_cell_pane_g1

0x07de,	// (0x00009e5a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x07de,	// (0x00009e5a) fshwr2_func_candi_cell_pane_t1

0x7932,	// (0x00010fae) bg_button_pane_cp08

0x9657,	// (0x00012cd3) cell_fshwr2_syb_bg_pane

0x07f1,	// (0x00009e6d) cell_fshwr2_syb_bg_pane_g1

0x07f9,	// (0x00009e75) cell_fshwr2_syb_bg_pane_t1

0x880d,	// (0x00011e89) main_tmo_pane

0xb6d2,	// (0x00014d4e) uni_indicator_pane_g1_ParamLimits

0xb6e7,	// (0x00014d63) uni_indicator_pane_g2_ParamLimits

0xb6fd,	// (0x00014d79) uni_indicator_pane_g3_ParamLimits

0xb713,	// (0x00014d8f) uni_indicator_pane_g4_ParamLimits

0xb713,	// (0x00014d8f) uni_indicator_pane_g4

0xb727,	// (0x00014da3) uni_indicator_pane_g5_ParamLimits

0xb727,	// (0x00014da3) uni_indicator_pane_g5

0xb73b,	// (0x00014db7) uni_indicator_pane_g6_ParamLimits

0xb73b,	// (0x00014db7) uni_indicator_pane_g6

0xf955,	// (0x00018fd1) uni_indicator_pane_g_ParamLimits

0xe668,	// (0x00017ce4) popup_tmo_note_window_ParamLimits

0xe668,	// (0x00017ce4) popup_tmo_note_window

0x7932,	// (0x00010fae) fshwr2_bg_pane

0x07cf,	// (0x00009e4b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x07cf,	// (0x00009e4b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x00019548) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x00019548) fshwr2_func_candi_cell_pane_g

0xce32,	// (0x000164ae) bg_popup_window_pane_cp01

0x0808,	// (0x00009e84) bg_popup_window_pane_g1_cp01

0x0811,	// (0x00009e8d) bg_popup_window_pane_cp22_ParamLimits

0x0811,	// (0x00009e8d) bg_popup_window_pane_cp22

0x081f,	// (0x00009e9b) listscroll_tmo_link_pane_ParamLimits

0x081f,	// (0x00009e9b) listscroll_tmo_link_pane

0x085f,	// (0x00009edb) popup_tmo_note_window_g1_ParamLimits

0x085f,	// (0x00009edb) popup_tmo_note_window_g1

0x086c,	// (0x00009ee8) tmo_note_info_pane_ParamLimits

0x086c,	// (0x00009ee8) tmo_note_info_pane

0x0886,	// (0x00009f02) list_tmo_note_info_pane_g1_ParamLimits

0x0886,	// (0x00009f02) list_tmo_note_info_pane_g1

0x089d,	// (0x00009f19) list_tmo_note_info_pane_g2_ParamLimits

0x089d,	// (0x00009f19) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0001954d) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0001954d) list_tmo_note_info_pane_g

0x08b9,	// (0x00009f35) list_tmo_note_info_text_pane_ParamLimits

0x08b9,	// (0x00009f35) list_tmo_note_info_text_pane

0x093a,	// (0x00009fb6) list_tmo_link_pane

0x0947,	// (0x00009fc3) scroll_pane_cp20

0x0954,	// (0x00009fd0) list_single_tmo_link_pane_ParamLimits

0x0954,	// (0x00009fd0) list_single_tmo_link_pane

0x0964,	// (0x00009fe0) list_single_tmo_link_pane_t1

0x0972,	// (0x00009fee) list_tmo_note_info_text_pane_t1_ParamLimits

0x0972,	// (0x00009fee) list_tmo_note_info_text_pane_t1

0x8a50,	// (0x000120cc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8a50,	// (0x000120cc) aid_size_touch_scroll_bar_cp01

0x88c5,	// (0x00011f41) aid_size_touch_slider_marker

0x5fdb,	// (0x0000f657) popup_settings_window_ParamLimits

0x5fdb,	// (0x0000f657) popup_settings_window

0x9a09,	// (0x00013085) popup_candi_list_indi_window

0x9fe2,	// (0x0001365e) aid_touch_navi_pane_ParamLimits

0x70a0,	// (0x0001071c) rs_clock_indi_pane

0x70a9,	// (0x00010725) sctrl_sk_bottom_pane_ParamLimits

0x70ba,	// (0x00010736) sctrl_sk_top_pane_ParamLimits

0x71c0,	// (0x0001083c) popup_fep_tooltip_window

0x021c,	// (0x00009898) aid_size_cell_widget_grid_ParamLimits

0x024c,	// (0x000098c8) cell_ai5_widget_pane_g1_ParamLimits

0x024c,	// (0x000098c8) cell_ai5_widget_pane_g1

0x0294,	// (0x00009910) cell_ai5_widget_pane_g6_ParamLimits

0x02a0,	// (0x0000991c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x000194cb) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x000194cb) cell_ai5_widget_pane_g

0x03cf,	// (0x00009a4b) cell_ai5_widget_pane_t10_ParamLimits

0x03cf,	// (0x00009a4b) cell_ai5_widget_pane_t10

0x03e1,	// (0x00009a5d) grid_ai5_widget_pane_ParamLimits

0x0483,	// (0x00009aff) cell_contacts_ai5_widget_pane_ParamLimits

0x0483,	// (0x00009aff) cell_contacts_ai5_widget_pane

0x066e,	// (0x00009cea) popup_discreet_window_t3_ParamLimits

0x066e,	// (0x00009cea) popup_discreet_window_t3

0x0715,	// (0x00009d91) popup_fshwr2_char_preview_window_ParamLimits

0x0715,	// (0x00009d91) popup_fshwr2_char_preview_window

0x08d7,	// (0x00009f53) tmo_note_info_pane_t1

0x08ec,	// (0x00009f68) tmo_note_info_pane_t2

0x0901,	// (0x00009f7d) tmo_note_info_pane_t3

0x0916,	// (0x00009f92) tmo_note_info_pane_t4

0x0928,	// (0x00009fa4) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x00019552) tmo_note_info_pane_t

0x093a,	// (0x00009fb6) list_tmo_link_pane_ParamLimits

0x0947,	// (0x00009fc3) scroll_pane_cp20_ParamLimits

0x7932,	// (0x00010fae) bg_popup_fep_char_preview_window_cp01

0x098b,	// (0x0000a007) popup_fshwr2_char_preview_window_t1

0x0999,	// (0x0000a015) popup_candi_list_indi_window_g1

0x09a2,	// (0x0000a01e) bg_cell_contacts_ai5_widget_pane

0x09ae,	// (0x0000a02a) cell_contacts_ai5_widget_pane_g1

0x09c2,	// (0x0000a03e) cell_contacts_ai5_widget_pane_g2

0x09d1,	// (0x0000a04d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0001955d) cell_contacts_ai5_widget_pane_g

0x09e4,	// (0x0000a060) cell_contacts_ai5_widget_pane_t1

0x880d,	// (0x00011e89) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0a5e,	// (0x0000a0da) settings_container_pane

0x9657,	// (0x00012cd3) listscroll_set_pane_copy1

0xc343,	// (0x000159bf) scroll_pane_cp121_copy1

0x0a6a,	// (0x0000a0e6) set_content_pane_copy1

0x0a72,	// (0x0000a0ee) aid_height_set_list_copy1_ParamLimits

0x0a72,	// (0x0000a0ee) aid_height_set_list_copy1

0xb95b,	// (0x00014fd7) aid_size_parent_copy1_ParamLimits

0xb95b,	// (0x00014fd7) aid_size_parent_copy1

0x0a7e,	// (0x0000a0fa) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0a7e,	// (0x0000a0fa) button_value_adjust_pane_cp6_copy1

0x99e1,	// (0x0001305d) list_highlight_pane_cp2_copy1_ParamLimits

0x99e1,	// (0x0001305d) list_highlight_pane_cp2_copy1

0x0a92,	// (0x0000a10e) list_set_pane_copy1_ParamLimits

0x0a92,	// (0x0000a10e) list_set_pane_copy1

0x09f9,	// (0x0000a075) main_pane_set_t1_copy1_ParamLimits

0x09f9,	// (0x0000a075) main_pane_set_t1_copy1

0x0a33,	// (0x0000a0af) main_pane_set_t2_copy1_ParamLimits

0x0a33,	// (0x0000a0af) main_pane_set_t2_copy1

0x0b3f,	// (0x0000a1bb) main_pane_set_t3_copy1

0x0b4d,	// (0x0000a1c9) main_pane_set_t4_copy1

0x0a52,	// (0x0000a0ce) set_content_pane_g1_copy1_ParamLimits

0x0a52,	// (0x0000a0ce) set_content_pane_g1_copy1

0x0b5b,	// (0x0000a1d7) setting_code_pane_copy1

0x0b65,	// (0x0000a1e1) setting_slider_graphic_pane_copy1

0x0b65,	// (0x0000a1e1) setting_slider_pane_copy1

0x0b6f,	// (0x0000a1eb) setting_text_pane_copy1

0x0b79,	// (0x0000a1f5) setting_volume_pane_copy1

0x0b82,	// (0x0000a1fe) settings_code_pane_cp2_copy1

0x0b8a,	// (0x0000a206) settings_code_pane_cp_copy1_ParamLimits

0x0b8a,	// (0x0000a206) settings_code_pane_cp_copy1

0x0b9e,	// (0x0000a21a) volume_set_pane_copy1

0x0ba6,	// (0x0000a222) volume_set_pane_g10_copy1

0x0bae,	// (0x0000a22a) volume_set_pane_g1_copy1

0x0bb6,	// (0x0000a232) volume_set_pane_g2_copy1

0x0bbe,	// (0x0000a23a) volume_set_pane_g3_copy1

0x0bc6,	// (0x0000a242) volume_set_pane_g4_copy1

0x0bce,	// (0x0000a24a) volume_set_pane_g5_copy1

0x0bd6,	// (0x0000a252) volume_set_pane_g6_copy1

0x0bde,	// (0x0000a25a) volume_set_pane_g7_copy1

0x0be6,	// (0x0000a262) volume_set_pane_g8_copy1

0x0bee,	// (0x0000a26a) volume_set_pane_g9_copy1

0x7a26,	// (0x000110a2) bg_set_opt_pane_cp_copy1_ParamLimits

0x7a26,	// (0x000110a2) bg_set_opt_pane_cp_copy1

0x0bf6,	// (0x0000a272) setting_slider_pane_t1_copy1_ParamLimits

0x0bf6,	// (0x0000a272) setting_slider_pane_t1_copy1

0x0c14,	// (0x0000a290) setting_slider_pane_t2_copy1_ParamLimits

0x0c14,	// (0x0000a290) setting_slider_pane_t2_copy1

0x0c2e,	// (0x0000a2aa) setting_slider_pane_t3_copy1_ParamLimits

0x0c2e,	// (0x0000a2aa) setting_slider_pane_t3_copy1

0x0c46,	// (0x0000a2c2) slider_set_pane_copy1_ParamLimits

0x0c46,	// (0x0000a2c2) slider_set_pane_copy1

0x8945,	// (0x00011fc1) set_opt_bg_pane_g1_copy2

0x894d,	// (0x00011fc9) set_opt_bg_pane_g2_copy2

0x0c5c,	// (0x0000a2d8) set_opt_bg_pane_g3_copy2

0x895d,	// (0x00011fd9) set_opt_bg_pane_g4_copy2

0x8965,	// (0x00011fe1) set_opt_bg_pane_g5_copy2

0x896d,	// (0x00011fe9) set_opt_bg_pane_g6_copy2

0x0c66,	// (0x0000a2e2) set_opt_bg_pane_g7_copy2

0x0c6e,	// (0x0000a2ea) set_opt_bg_pane_g8_copy2

0x0c78,	// (0x0000a2f4) set_opt_bg_pane_g9_copy2

0x78dc,	// (0x00010f58) aid_size_touch_slider_mark_copy1_ParamLimits

0x78dc,	// (0x00010f58) aid_size_touch_slider_mark_copy1

0x0c96,	// (0x0000a312) slider_set_pane_g1_copy1

0x78f0,	// (0x00010f6c) slider_set_pane_g2_copy1

0x6ad4,	// (0x00010150) slider_set_pane_g3_copy1_ParamLimits

0x6ad4,	// (0x00010150) slider_set_pane_g3_copy1

0x6ae8,	// (0x00010164) slider_set_pane_g4_copy1_ParamLimits

0x6ae8,	// (0x00010164) slider_set_pane_g4_copy1

0x6b00,	// (0x0001017c) slider_set_pane_g5_copy1_ParamLimits

0x6b00,	// (0x0001017c) slider_set_pane_g5_copy1

0x6ad4,	// (0x00010150) slider_set_pane_g6_copy1_ParamLimits

0x6ad4,	// (0x00010150) slider_set_pane_g6_copy1

0x78f8,	// (0x00010f74) slider_set_pane_g7_copy1_ParamLimits

0x78f8,	// (0x00010f74) slider_set_pane_g7_copy1

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp2_copy1

0x0cbd,	// (0x0000a339) setting_slider_graphic_pane_g1_copy1

0x0cc6,	// (0x0000a342) setting_slider_graphic_pane_t1_copy1

0x0cd6,	// (0x0000a352) setting_slider_graphic_pane_t2_copy1

0x0ce6,	// (0x0000a362) slider_set_pane_cp_copy1

0x0cf6,	// (0x0000a372) input_focus_pane_cp1_copy1

0x0cff,	// (0x0000a37b) list_set_text_pane_copy1

0x0d07,	// (0x0000a383) setting_text_pane_g1_copy1

0x7a7f,	// (0x000110fb) set_text_pane_t1_copy1

0x0cf6,	// (0x0000a372) input_focus_pane_cp2_copy1

0x0d07,	// (0x0000a383) setting_code_pane_g1_copy1

0x0d10,	// (0x0000a38c) setting_code_pane_t1_copy1

0x0d1e,	// (0x0000a39a) list_set_graphic_pane_copy1

0x7946,	// (0x00010fc2) bg_set_opt_pane_cp4_copy1

0x935d,	// (0x000129d9) list_set_graphic_pane_g1_copy1_ParamLimits

0x935d,	// (0x000129d9) list_set_graphic_pane_g1_copy1

0x0d30,	// (0x0000a3ac) list_set_graphic_pane_g2_copy1

0x9375,	// (0x000129f1) list_set_graphic_pane_t1_copy1_ParamLimits

0x9375,	// (0x000129f1) list_set_graphic_pane_t1_copy1

0xce32,	// (0x000164ae) rs_clock_indi_pane_g1

0x0d38,	// (0x0000a3b4) rs_clock_indi_pane_t1

0x0559,	// (0x00009bd5) rs_indi_pane

0x0d46,	// (0x0000a3c2) rs_indi_pane_g1

0x0d4f,	// (0x0000a3cb) rs_indi_pane_g2

0x0d58,	// (0x0000a3d4) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x00019564) rs_indi_pane_g

0x9657,	// (0x00012cd3) bg_popup_preview_window_pane_cp03

0x0d61,	// (0x0000a3dd) popup_fep_tooltip_window_t1

0xdcb7,	// (0x00017333) popup_note2_window_g2_ParamLimits

0xdcb7,	// (0x00017333) popup_note2_window_g2

0x0001,

0xfc86,	// (0x00019302) popup_note2_window_g_ParamLimits

0xfc86,	// (0x00019302) popup_note2_window_g

0xe2a1,	// (0x0001791d) bg_popup_sub_pane_cp11_ParamLimits

0xe2ae,	// (0x0001792a) cell_ai3_links_pane_g1_ParamLimits

0xe2c5,	// (0x00017941) cell_ai3_links_pane_t1

0x7a7f,	// (0x000110fb) set_text_pane_t1_copy1_ParamLimits

0x9568,	// (0x00012be4) cell_graphic_popup_pane_cp2_ParamLimits

0x9568,	// (0x00012be4) cell_graphic_popup_pane_cp2

0x0d6f,	// (0x0000a3eb) cell_graphic_popup_pane_g1_cp2

0x7ff7,	// (0x00011673) cell_graphic_popup_pane_g2_cp2

0x0d77,	// (0x0000a3f3) cell_graphic_popup_pane_g3_cp2

0x0d7f,	// (0x0000a3fb) cell_graphic_popup_pane_t2_cp2

0x8008,	// (0x00011684) grid_highlight_pane_cp3_cp2

0x8d34,	// (0x000123b0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x880d,	// (0x00011e89) main_tmo_pane_ParamLimits

0xe65c,	// (0x00017cd8) popup_tmo_big_image_note_window

0x023c,	// (0x000098b8) cell_ai5_widget_list_pane

0x0244,	// (0x000098c0) cell_ai5_widget_lrg_icon_pane

0x08d7,	// (0x00009f53) tmo_note_info_pane_t1_ParamLimits

0x08ec,	// (0x00009f68) tmo_note_info_pane_t2_ParamLimits

0x0901,	// (0x00009f7d) tmo_note_info_pane_t3_ParamLimits

0x0916,	// (0x00009f92) tmo_note_info_pane_t4_ParamLimits

0x0928,	// (0x00009fa4) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x00019552) tmo_note_info_pane_t_ParamLimits

0x0a5e,	// (0x0000a0da) settings_container_pane_ParamLimits

0x0cee,	// (0x0000a36a) indicator_popup_pane_cp5

0x0cee,	// (0x0000a36a) indicator_popup_pane_cp6

0x0d1e,	// (0x0000a39a) list_set_graphic_pane_copy1_ParamLimits

0x7932,	// (0x00010fae) bg_popup_window_pane_cp23

0x0d8d,	// (0x0000a409) popup_tmo_big_image_note_window_g1

0x0d97,	// (0x0000a413) popup_tmo_big_image_note_window_t1

0x0da7,	// (0x0000a423) popup_tmo_big_image_note_window_t2

0x0db7,	// (0x0000a433) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0001956b) popup_tmo_big_image_note_window_t

0x0dc7,	// (0x0000a443) cell_ai5_widget_lrg_icon_pane_g1

0x0dcf,	// (0x0000a44b) cell_ai5_widget_lrg_icon_pane_t1

0x0ddd,	// (0x0000a459) cell_ai5_widget_list_row_pane_ParamLimits

0x0ddd,	// (0x0000a459) cell_ai5_widget_list_row_pane

0x0df6,	// (0x0000a472) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0df6,	// (0x0000a472) cell_ai5_widget_list_row_pane_g1

0x0e03,	// (0x0000a47f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0e03,	// (0x0000a47f) cell_ai5_widget_list_row_pane_t1

0x0e1b,	// (0x0000a497) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0e1b,	// (0x0000a497) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x00019572) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x00019572) cell_ai5_widget_list_row_pane_t

0x5e92,	// (0x0000f50e) main_fep_vtchi_ss_pane

0x0e2d,	// (0x0000a4a9) popup_fep_char_pre_window

0x0e35,	// (0x0000a4b1) popup_fep_ituss_window

0x0e40,	// (0x0000a4bc) popup_fep_vkbss_window

0x0e49,	// (0x0000a4c5) grid_vkbss_keypad_pane_ParamLimits

0x0e49,	// (0x0000a4c5) grid_vkbss_keypad_pane

0x0e59,	// (0x0000a4d5) ituss_keypad_pane

0x0e61,	// (0x0000a4dd) aid_vkbss_key_offset_ParamLimits

0x0e61,	// (0x0000a4dd) aid_vkbss_key_offset

0x0e70,	// (0x0000a4ec) cell_vkbss_key_pane_ParamLimits

0x0e70,	// (0x0000a4ec) cell_vkbss_key_pane

0x0e86,	// (0x0000a502) bg_cell_vkbss_key_g1_ParamLimits

0x0e86,	// (0x0000a502) bg_cell_vkbss_key_g1

0x0e92,	// (0x0000a50e) cell_vkbss_key_3p_pane_ParamLimits

0x0e92,	// (0x0000a50e) cell_vkbss_key_3p_pane

0x0eac,	// (0x0000a528) cell_vkbss_key_g1_ParamLimits

0x0eac,	// (0x0000a528) cell_vkbss_key_g1

0x0ec6,	// (0x0000a542) cell_vkbss_key_t1_ParamLimits

0x0ec6,	// (0x0000a542) cell_vkbss_key_t1

0x0ef1,	// (0x0000a56d) cell_ituss_key_pane_ParamLimits

0x0ef1,	// (0x0000a56d) cell_ituss_key_pane

0x0f00,	// (0x0000a57c) bg_cell_ituss_key_g1_ParamLimits

0x0f00,	// (0x0000a57c) bg_cell_ituss_key_g1

0x0f0c,	// (0x0000a588) cell_ituss_key_pane_g1_ParamLimits

0x0f0c,	// (0x0000a588) cell_ituss_key_pane_g1

0x0f18,	// (0x0000a594) cell_ituss_key_pane_g2_ParamLimits

0x0f18,	// (0x0000a594) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x00019577) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x00019577) cell_ituss_key_pane_g

0x0f2b,	// (0x0000a5a7) cell_ituss_key_t1_ParamLimits

0x0f2b,	// (0x0000a5a7) cell_ituss_key_t1

0x0f49,	// (0x0000a5c5) cell_ituss_key_t2_ParamLimits

0x0f49,	// (0x0000a5c5) cell_ituss_key_t2

0x0f68,	// (0x0000a5e4) cell_ituss_key_t3_ParamLimits

0x0f68,	// (0x0000a5e4) cell_ituss_key_t3

0x0f87,	// (0x0000a603) cell_ituss_key_t4_ParamLimits

0x0f87,	// (0x0000a603) cell_ituss_key_t4

0x0003,

0xff00,	// (0x0001957c) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0001957c) cell_ituss_key_t

0x0fa6,	// (0x0000a622) cell_vkbss_key_3p_pane_g1

0x0fae,	// (0x0000a62a) cell_vkbss_key_3p_pane_g2

0x0fb6,	// (0x0000a632) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x00019585) cell_vkbss_key_3p_pane_g

0x7932,	// (0x00010fae) bg_popup_fep_char_preview_window_cp02

0x0fbe,	// (0x0000a63a) popup_fep_char_pre_window_t1

0x0212,	// (0x0000988e) main_ai5_sk_pane

0x09a2,	// (0x0000a01e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x09ae,	// (0x0000a02a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x09c2,	// (0x0000a03e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x09d1,	// (0x0000a04d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0001955d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x09e4,	// (0x0000a060) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x880d,	// (0x00011e89) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0fcd,	// (0x0000a649) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
