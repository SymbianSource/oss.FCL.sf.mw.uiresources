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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001e7c7 };

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
0x5d5e,	// (0x00024525) Screen

0x5d6a,	// (0x00024531) application_window_ParamLimits

0x5d6a,	// (0x00024531) application_window

0x1400,	// (0x0001fbc7) screen_g1

0x5dc6,	// (0x0002458d) area_bottom_pane_ParamLimits

0x5dc6,	// (0x0002458d) area_bottom_pane

0x5e86,	// (0x0002464d) area_top_pane_ParamLimits

0x5e86,	// (0x0002464d) area_top_pane

0x5f1a,	// (0x000246e1) main_pane_ParamLimits

0x5f1a,	// (0x000246e1) main_pane

0x140a,	// (0x0001fbd1) misc_graphics

0x952a,	// (0x00027cf1) battery_pane_ParamLimits

0x952a,	// (0x00027cf1) battery_pane

0xa1f2,	// (0x000289b9) bg_status_flat_pane_g8

0xa1fa,	// (0x000289c1) bg_status_flat_pane_g9

0x95f2,	// (0x00027db9) context_pane_ParamLimits

0x95f2,	// (0x00027db9) context_pane

0x9716,	// (0x00027edd) navi_pane_ParamLimits

0x9716,	// (0x00027edd) navi_pane

0x97a6,	// (0x00027f6d) signal_pane_ParamLimits

0x97a6,	// (0x00027f6d) signal_pane

0x0008,

0xf854,	// (0x0002e01b) bg_status_flat_pane_g

0x9813,	// (0x00027fda) status_pane_g1_ParamLimits

0x9813,	// (0x00027fda) status_pane_g1

0x981f,	// (0x00027fe6) status_pane_g2_ParamLimits

0x981f,	// (0x00027fe6) status_pane_g2

0x982b,	// (0x00027ff2) status_pane_g3_ParamLimits

0x982b,	// (0x00027ff2) status_pane_g3

0x0004,

0xf77b,	// (0x0002df42) status_pane_g_ParamLimits

0xf77b,	// (0x0002df42) status_pane_g

0x985f,	// (0x00028026) title_pane_ParamLimits

0x985f,	// (0x00028026) title_pane

0x989e,	// (0x00028065) uni_indicator_pane_ParamLimits

0x989e,	// (0x00028065) uni_indicator_pane

0x945c,	// (0x00027c23) bg_list_pane_ParamLimits

0x945c,	// (0x00027c23) bg_list_pane

0x53bb,	// (0x00023b82) find_pane

0x947c,	// (0x00027c43) listscroll_app_pane_ParamLimits

0x947c,	// (0x00027c43) listscroll_app_pane

0x9488,	// (0x00027c4f) listscroll_form_pane

0x53c3,	// (0x00023b8a) listscroll_gen_pane_ParamLimits

0x53c3,	// (0x00023b8a) listscroll_gen_pane

0x73f3,	// (0x00025bba) listscroll_set_pane

0x658b,	// (0x00024d52) main_idle_act_pane

0x9155,	// (0x0002791c) main_idle_trad_pane

0x9155,	// (0x0002791c) main_list_empty_pane

0x947c,	// (0x00027c43) main_midp_pane

0x94a2,	// (0x00027c69) main_pane_g1_ParamLimits

0x94a2,	// (0x00027c69) main_pane_g1

0x73fb,	// (0x00025bc2) popup_ai_message_window_ParamLimits

0x73fb,	// (0x00025bc2) popup_ai_message_window

0x74af,	// (0x00025c76) popup_fep_china_uni_window_ParamLimits

0x74af,	// (0x00025c76) popup_fep_china_uni_window

0x750f,	// (0x00025cd6) popup_fep_japan_candidate_window_ParamLimits

0x750f,	// (0x00025cd6) popup_fep_japan_candidate_window

0x7539,	// (0x00025d00) popup_fep_japan_predictive_window_ParamLimits

0x7539,	// (0x00025d00) popup_fep_japan_predictive_window

0x756f,	// (0x00025d36) popup_find_window

0x757c,	// (0x00025d43) popup_grid_graphic_window_ParamLimits

0x757c,	// (0x00025d43) popup_grid_graphic_window

0x75ac,	// (0x00025d73) popup_large_graphic_colour_window

0x75d2,	// (0x00025d99) popup_menu_window_ParamLimits

0x75d2,	// (0x00025d99) popup_menu_window

0x779c,	// (0x00025f63) popup_note_image_window

0x7786,	// (0x00025f4d) popup_note_wait_window_ParamLimits

0x7786,	// (0x00025f4d) popup_note_wait_window

0x7786,	// (0x00025f4d) popup_note_window_ParamLimits

0x7786,	// (0x00025f4d) popup_note_window

0x7802,	// (0x00025fc9) popup_query_code_window_ParamLimits

0x7802,	// (0x00025fc9) popup_query_code_window

0x7818,	// (0x00025fdf) popup_query_data_code_window_ParamLimits

0x7818,	// (0x00025fdf) popup_query_data_code_window

0x783b,	// (0x00026002) popup_query_data_window_ParamLimits

0x783b,	// (0x00026002) popup_query_data_window

0x785d,	// (0x00026024) popup_query_sat_info_window_ParamLimits

0x785d,	// (0x00026024) popup_query_sat_info_window

0x789c,	// (0x00026063) popup_snote_single_graphic_window_ParamLimits

0x789c,	// (0x00026063) popup_snote_single_graphic_window

0x789c,	// (0x00026063) popup_snote_single_text_window_ParamLimits

0x789c,	// (0x00026063) popup_snote_single_text_window

0x78b3,	// (0x0002607a) popup_sub_window_general

0x79f9,	// (0x000261c0) popup_window_general_ParamLimits

0x79f9,	// (0x000261c0) popup_window_general

0x94b0,	// (0x00027c77) power_save_pane

0x7271,	// (0x00025a38) control_pane_g1_ParamLimits

0x7271,	// (0x00025a38) control_pane_g1

0x729a,	// (0x00025a61) control_pane_g2_ParamLimits

0x729a,	// (0x00025a61) control_pane_g2

0x941f,	// (0x00027be6) control_pane_g3_ParamLimits

0x941f,	// (0x00027be6) control_pane_g3

0x0007,

0xf763,	// (0x0002df2a) control_pane_g_ParamLimits

0xf763,	// (0x0002df2a) control_pane_g

0x72e6,	// (0x00025aad) control_pane_t1_ParamLimits

0x72e6,	// (0x00025aad) control_pane_t1

0x7342,	// (0x00025b09) control_pane_t2_ParamLimits

0x7342,	// (0x00025b09) control_pane_t2

0x0002,

0xf774,	// (0x0002df3b) control_pane_t_ParamLimits

0xf774,	// (0x0002df3b) control_pane_t

0x9344,	// (0x00027b0b) navi_navi_volume_pane_cp1

0x934c,	// (0x00027b13) status_small_icon_pane

0x9354,	// (0x00027b1b) status_small_pane_g1_ParamLimits

0x9354,	// (0x00027b1b) status_small_pane_g1

0x9388,	// (0x00027b4f) status_small_pane_g2_ParamLimits

0x9388,	// (0x00027b4f) status_small_pane_g2

0x9394,	// (0x00027b5b) status_small_pane_g3_ParamLimits

0x9394,	// (0x00027b5b) status_small_pane_g3

0x93a0,	// (0x00027b67) status_small_pane_g4_ParamLimits

0x93a0,	// (0x00027b67) status_small_pane_g4

0x93ac,	// (0x00027b73) status_small_pane_g5_ParamLimits

0x93ac,	// (0x00027b73) status_small_pane_g5

0x93ba,	// (0x00027b81) status_small_pane_g6_ParamLimits

0x93ba,	// (0x00027b81) status_small_pane_g6

0x0007,

0xf752,	// (0x0002df19) status_small_pane_g_ParamLimits

0xf752,	// (0x0002df19) status_small_pane_g

0x93e9,	// (0x00027bb0) status_small_pane_t1

0x940b,	// (0x00027bd2) status_small_wait_pane_ParamLimits

0x940b,	// (0x00027bd2) status_small_wait_pane

0x6cf0,	// (0x000254b7) aid_levels_signal_ParamLimits

0x6cf0,	// (0x000254b7) aid_levels_signal

0x6cff,	// (0x000254c6) signal_pane_g1_ParamLimits

0x6cff,	// (0x000254c6) signal_pane_g1

0x6d14,	// (0x000254db) signal_pane_g2_ParamLimits

0x6d14,	// (0x000254db) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002deaa) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002deaa) signal_pane_g

0x6d45,	// (0x0002550c) context_pane_g1

0x6179,	// (0x00024940) title_pane_g1

0x61ab,	// (0x00024972) title_pane_t1

0x1420,	// (0x0001fbe7) title_pane_t2

0x1446,	// (0x0001fc0d) title_pane_t3

0x0002,

0xf532,	// (0x0002dcf9) title_pane_t

0x98b6,	// (0x0002807d) aid_levels_battery_ParamLimits

0x98b6,	// (0x0002807d) aid_levels_battery

0x98c7,	// (0x0002808e) battery_pane_g1_ParamLimits

0x98c7,	// (0x0002808e) battery_pane_g1

0x98dd,	// (0x000280a4) battery_pane_g2_ParamLimits

0x98dd,	// (0x000280a4) battery_pane_g2

0x0001,

0xf786,	// (0x0002df4d) battery_pane_g_ParamLimits

0xf786,	// (0x0002df4d) battery_pane_g

0xab3c,	// (0x00029303) uni_indicator_pane_g1

0xab52,	// (0x00029319) uni_indicator_pane_g2

0xab68,	// (0x0002932f) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002e0c3) uni_indicator_pane_g

0x8fb8,	// (0x0002777f) navi_icon_pane_ParamLimits

0x8fb8,	// (0x0002777f) navi_icon_pane

0x8ef4,	// (0x000276bb) navi_midp_pane

0x8fd4,	// (0x0002779b) navi_navi_pane

0x8fde,	// (0x000277a5) navi_text_pane_ParamLimits

0x8fde,	// (0x000277a5) navi_text_pane

0x1400,	// (0x0001fbc7) status_small_wait_pane_g1

0x2d55,	// (0x0002151c) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002e0be) status_small_wait_pane_g

0xa84f,	// (0x00029016) navi_navi_icon_text_pane

0xa857,	// (0x0002901e) navi_navi_pane_g1_ParamLimits

0xa857,	// (0x0002901e) navi_navi_pane_g1

0xa869,	// (0x00029030) navi_navi_pane_g2_ParamLimits

0xa869,	// (0x00029030) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002e08c) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002e08c) navi_navi_pane_g

0xa87b,	// (0x00029042) navi_navi_tabs_pane

0xa884,	// (0x0002904b) navi_navi_text_pane

0xa84f,	// (0x00029016) navi_navi_volume_pane

0xa82b,	// (0x00028ff2) navi_text_pane_t1

0xa81f,	// (0x00028fe6) navi_icon_pane_g1

0xa772,	// (0x00028f39) navi_navi_text_pane_t1

0x7ca2,	// (0x00026469) navi_navi_volume_pane_g1

0x7caa,	// (0x00026471) volume_small_pane

0xa6d8,	// (0x00028e9f) navi_navi_icon_text_pane_g1

0xa6e0,	// (0x00028ea7) navi_navi_icon_text_pane_t1

0x8fd4,	// (0x0002779b) navi_tabs_2_long_pane

0x8fd4,	// (0x0002779b) navi_tabs_2_pane

0x8fd4,	// (0x0002779b) navi_tabs_3_long_pane

0x8fd4,	// (0x0002779b) navi_tabs_3_pane

0x8fd4,	// (0x0002779b) navi_tabs_4_pane

0x7c82,	// (0x00026449) tabs_2_active_pane_ParamLimits

0x7c82,	// (0x00026449) tabs_2_active_pane

0x7c92,	// (0x00026459) tabs_2_passive_pane_ParamLimits

0x7c92,	// (0x00026459) tabs_2_passive_pane

0x7c50,	// (0x00026417) tabs_3_active_pane_ParamLimits

0x7c50,	// (0x00026417) tabs_3_active_pane

0x7c60,	// (0x00026427) tabs_3_passive_pane_ParamLimits

0x7c60,	// (0x00026427) tabs_3_passive_pane

0x7c71,	// (0x00026438) tabs_3_passive_pane_cp_ParamLimits

0x7c71,	// (0x00026438) tabs_3_passive_pane_cp

0x7c04,	// (0x000263cb) tabs_4_active_pane_ParamLimits

0x7c04,	// (0x000263cb) tabs_4_active_pane

0x7c17,	// (0x000263de) tabs_4_passive_pane_ParamLimits

0x7c17,	// (0x000263de) tabs_4_passive_pane

0x7c28,	// (0x000263ef) tabs_4_passive_pane_cp_ParamLimits

0x7c28,	// (0x000263ef) tabs_4_passive_pane_cp

0x7c39,	// (0x00026400) tabs_4_passive_pane_cp2_ParamLimits

0x7c39,	// (0x00026400) tabs_4_passive_pane_cp2

0x7be0,	// (0x000263a7) tabs_2_long_active_pane_ParamLimits

0x7be0,	// (0x000263a7) tabs_2_long_active_pane

0x7bf2,	// (0x000263b9) tabs_2_long_passive_pane_ParamLimits

0x7bf2,	// (0x000263b9) tabs_2_long_passive_pane

0x7ba1,	// (0x00026368) tabs_3_long_active_pane_ParamLimits

0x7ba1,	// (0x00026368) tabs_3_long_active_pane

0x7bb4,	// (0x0002637b) tabs_3_long_passive_pane_ParamLimits

0x7bb4,	// (0x0002637b) tabs_3_long_passive_pane

0x7bcd,	// (0x00026394) tabs_3_long_passive_pane_cp_ParamLimits

0x7bcd,	// (0x00026394) tabs_3_long_passive_pane_cp

0x7b47,	// (0x0002630e) volume_small_pane_g1

0x7b50,	// (0x00026317) volume_small_pane_g2

0x7b59,	// (0x00026320) volume_small_pane_g3

0x7b62,	// (0x00026329) volume_small_pane_g4

0x7b6b,	// (0x00026332) volume_small_pane_g5

0x7b74,	// (0x0002633b) volume_small_pane_g6

0x7b7d,	// (0x00026344) volume_small_pane_g7

0x7b86,	// (0x0002634d) volume_small_pane_g8

0x7b8f,	// (0x00026356) volume_small_pane_g9

0x7b98,	// (0x0002635f) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002e058) volume_small_pane_g

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp2_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp2

0x6213,	// (0x000249da) tabs_3_active_pane_g1

0x621b,	// (0x000249e2) tabs_3_active_pane_t1

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp2_ParamLimits

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp2

0x6213,	// (0x000249da) tabs_3_passive_pane_g1

0x621b,	// (0x000249e2) tabs_3_passive_pane_t1

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp3_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp3

0x622d,	// (0x000249f4) tabs_4_active_pane_g1

0x6235,	// (0x000249fc) tabs_4_active_pane_t1

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp3_ParamLimits

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp3

0x622d,	// (0x000249f4) tabs_4_1_passive_pane_g1

0x6235,	// (0x000249fc) tabs_4_1_passive_pane_t1

0x947c,	// (0x00027c43) list_highlight_pane_cp2

0xadb5,	// (0x0002957c) list_set_pane_ParamLimits

0xadb5,	// (0x0002957c) list_set_pane

0xae77,	// (0x0002963e) main_pane_set_t1_ParamLimits

0xae77,	// (0x0002963e) main_pane_set_t1

0xae97,	// (0x0002965e) main_pane_set_t2_ParamLimits

0xae97,	// (0x0002965e) main_pane_set_t2

0xaeab,	// (0x00029672) main_pane_set_t3_ParamLimits

0xaeab,	// (0x00029672) main_pane_set_t3

0xaebf,	// (0x00029686) main_pane_set_t4_ParamLimits

0xaebf,	// (0x00029686) main_pane_set_t4

0x0003,

0xf961,	// (0x0002e128) main_pane_set_t_ParamLimits

0xf961,	// (0x0002e128) main_pane_set_t

0xaed3,	// (0x0002969a) setting_code_pane

0xaedd,	// (0x000296a4) setting_slider_graphic_pane

0xaedd,	// (0x000296a4) setting_slider_pane

0xaedd,	// (0x000296a4) setting_text_pane

0xaedd,	// (0x000296a4) setting_volume_pane

0x6247,	// (0x00024a0e) volume_set_pane

0x1466,	// (0x0001fc2d) bg_set_opt_pane_cp

0x6251,	// (0x00024a18) setting_slider_pane_t1

0x626a,	// (0x00024a31) setting_slider_pane_t2

0x6284,	// (0x00024a4b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002dd00) setting_slider_pane_t

0x629c,	// (0x00024a63) slider_set_pane

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp2

0x1474,	// (0x0001fc3b) setting_slider_graphic_pane_g1

0x62b2,	// (0x00024a79) setting_slider_graphic_pane_t1

0x62c2,	// (0x00024a89) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002dd07) setting_slider_graphic_pane_t

0x62d2,	// (0x00024a99) slider_set_pane_cp

0x140a,	// (0x0001fbd1) input_focus_pane_cp1

0xad76,	// (0x0002953d) list_set_text_pane

0x1400,	// (0x0001fbc7) setting_text_pane_g1

0x140a,	// (0x0001fbd1) input_focus_pane_cp2

0x1400,	// (0x0001fbc7) setting_code_pane_g1

0x147d,	// (0x0001fc44) setting_code_pane_t1

0x4bf2,	// (0x000233b9) set_text_pane_t1_ParamLimits

0x4bf2,	// (0x000233b9) set_text_pane_t1

0x31d8,	// (0x0002199f) set_opt_bg_pane_g1

0x31e0,	// (0x000219a7) set_opt_bg_pane_g2

0xad4e,	// (0x00029515) set_opt_bg_pane_g3

0x31f0,	// (0x000219b7) set_opt_bg_pane_g4

0x31f8,	// (0x000219bf) set_opt_bg_pane_g5

0x3200,	// (0x000219c7) set_opt_bg_pane_g6

0xad58,	// (0x0002951f) set_opt_bg_pane_g7

0xad62,	// (0x00029529) set_opt_bg_pane_g8

0xad6c,	// (0x00029533) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002e115) set_opt_bg_pane_g

0xad41,	// (0x00029508) slider_set_pane_g1

0x7d2b,	// (0x000264f2) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002e106) slider_set_pane_g

0x7cb3,	// (0x0002647a) volume_set_pane_g1

0x7cbd,	// (0x00026484) volume_set_pane_g2

0x7cc7,	// (0x0002648e) volume_set_pane_g3

0x7cd1,	// (0x00026498) volume_set_pane_g4

0x7cdb,	// (0x000264a2) volume_set_pane_g5

0x7ce5,	// (0x000264ac) volume_set_pane_g6

0x7cef,	// (0x000264b6) volume_set_pane_g7

0x7cf9,	// (0x000264c0) volume_set_pane_g8

0x7d03,	// (0x000264ca) volume_set_pane_g9

0x7d0d,	// (0x000264d4) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002e0de) volume_set_pane_g

0x62da,	// (0x00024aa1) indicator_pane_ParamLimits

0x62da,	// (0x00024aa1) indicator_pane

0x62e6,	// (0x00024aad) main_idle_pane_g2_ParamLimits

0x62e6,	// (0x00024aad) main_idle_pane_g2

0x630e,	// (0x00024ad5) main_pane_idle_g1_ParamLimits

0x630e,	// (0x00024ad5) main_pane_idle_g1

0x14a5,	// (0x0001fc6c) popup_clock_digital_analogue_window_ParamLimits

0x14a5,	// (0x0001fc6c) popup_clock_digital_analogue_window

0x631c,	// (0x00024ae3) soft_indicator_pane_ParamLimits

0x631c,	// (0x00024ae3) soft_indicator_pane

0x632a,	// (0x00024af1) wallpaper_pane_ParamLimits

0x632a,	// (0x00024af1) wallpaper_pane

0x1400,	// (0x0001fbc7) wallpaper_pane_g1

0x6336,	// (0x00024afd) indicator_pane_g1_ParamLimits

0x6336,	// (0x00024afd) indicator_pane_g1

0xb181,	// (0x00029948) navi_navi_icon_text_pane_srt_g1

0x14d3,	// (0x0001fc9a) soft_indicator_pane_t1

0x14ed,	// (0x0001fcb4) aid_ps_area_pane

0x6342,	// (0x00024b09) aid_ps_clock_pane

0x14fe,	// (0x0001fcc5) aid_ps_indicator_pane

0x150a,	// (0x0001fcd1) indicator_ps_pane_ParamLimits

0x150a,	// (0x0001fcd1) indicator_ps_pane

0x1519,	// (0x0001fce0) power_save_pane_g1_ParamLimits

0x1519,	// (0x0001fce0) power_save_pane_g1

0x1525,	// (0x0001fcec) power_save_pane_g2_ParamLimits

0x1525,	// (0x0001fcec) power_save_pane_g2

0x5d7a,	// (0x00024541) aid_navinavi_width_pane

0x14ed,	// (0x0001fcb4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002dd0c) power_save_pane_g_ParamLimits

0xf545,	// (0x0002dd0c) power_save_pane_g

0x1533,	// (0x0001fcfa) power_save_pane_t1_ParamLimits

0x1533,	// (0x0001fcfa) power_save_pane_t1

0x6342,	// (0x00024b09) aid_ps_clock_pane_ParamLimits

0x14fe,	// (0x0001fcc5) aid_ps_indicator_pane_ParamLimits

0x1545,	// (0x0001fd0c) power_save_pane_t4_ParamLimits

0x1545,	// (0x0001fd0c) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002dd11) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002dd11) power_save_pane_t

0x156f,	// (0x0001fd36) power_save_t3_ParamLimits

0x156f,	// (0x0001fd36) power_save_t3

0x155a,	// (0x0001fd21) power_save_t2_ParamLimits

0x155a,	// (0x0001fd21) power_save_t2

0x1584,	// (0x0001fd4b) indicator_ps_pane_g1

0x6350,	// (0x00024b17) ai_gene_pane_ParamLimits

0x6350,	// (0x00024b17) ai_gene_pane

0x635c,	// (0x00024b23) ai_links_pane_ParamLimits

0x635c,	// (0x00024b23) ai_links_pane

0x6368,	// (0x00024b2f) indicator_pane_cp1_ParamLimits

0x6368,	// (0x00024b2f) indicator_pane_cp1

0x6374,	// (0x00024b3b) main_pane_idle_g1_cp_ParamLimits

0x6374,	// (0x00024b3b) main_pane_idle_g1_cp

0x158d,	// (0x0001fd54) popup_ai_links_title_window

0x6380,	// (0x00024b47) soft_indicator_pane_cp1_ParamLimits

0x6380,	// (0x00024b47) soft_indicator_pane_cp1

0xab2a,	// (0x000292f1) ai_links_pane_g1

0xab33,	// (0x000292fa) grid_ai_links_pane

0xab0f,	// (0x000292d6) ai_gene_pane_1

0xab18,	// (0x000292df) ai_gene_pane_2

0xab21,	// (0x000292e8) list_highlight_pane_cp4

0xaaef,	// (0x000292b6) cell_ai_link_pane_ParamLimits

0xaaef,	// (0x000292b6) cell_ai_link_pane

0xaae7,	// (0x000292ae) cell_ai_link_pane_g1

0x2d55,	// (0x0002151c) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002e0b9) cell_ai_link_pane_g

0x140a,	// (0x0001fbd1) grid_highlight_cp2

0x140a,	// (0x0001fbd1) bg_popup_sub_pane_cp1

0x15a4,	// (0x0001fd6b) popup_ai_links_title_window_t1

0xaa33,	// (0x000291fa) ai_gene_pane_1_g1_ParamLimits

0xaa33,	// (0x000291fa) ai_gene_pane_1_g1

0xaa3f,	// (0x00029206) ai_gene_pane_1_g2_ParamLimits

0xaa3f,	// (0x00029206) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002e0af) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002e0af) ai_gene_pane_1_g

0xaa4c,	// (0x00029213) ai_gene_pane_1_t1_ParamLimits

0xaa4c,	// (0x00029213) ai_gene_pane_1_t1

0xaa80,	// (0x00029247) grid_ai_soft_ind_pane

0xaa1e,	// (0x000291e5) ai_gene_pane_2_t1_ParamLimits

0xaa1e,	// (0x000291e5) ai_gene_pane_2_t1

0x638c,	// (0x00024b53) main_pane_empty_t1_ParamLimits

0x638c,	// (0x00024b53) main_pane_empty_t1

0x63a4,	// (0x00024b6b) main_pane_empty_t2_ParamLimits

0x63a4,	// (0x00024b6b) main_pane_empty_t2

0x63b9,	// (0x00024b80) main_pane_empty_t3_ParamLimits

0x63b9,	// (0x00024b80) main_pane_empty_t3

0x63cb,	// (0x00024b92) main_pane_empty_t4_ParamLimits

0x63cb,	// (0x00024b92) main_pane_empty_t4

0x63dd,	// (0x00024ba4) main_pane_empty_t5_ParamLimits

0x63dd,	// (0x00024ba4) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002dd16) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002dd16) main_pane_empty_t

0x3296,	// (0x00021a5d) bg_popup_window_pane_ParamLimits

0x3296,	// (0x00021a5d) bg_popup_window_pane

0xa780,	// (0x00028f47) find_popup_pane_cp2_ParamLimits

0xa780,	// (0x00028f47) find_popup_pane_cp2

0xa78c,	// (0x00028f53) heading_pane_ParamLimits

0xa78c,	// (0x00028f53) heading_pane

0x140a,	// (0x0001fbd1) bg_popup_sub_pane

0xa6fa,	// (0x00028ec1) bg_popup_window_pane_g1_ParamLimits

0xa6fa,	// (0x00028ec1) bg_popup_window_pane_g1

0xa706,	// (0x00028ecd) bg_popup_window_pane_g2_ParamLimits

0xa706,	// (0x00028ecd) bg_popup_window_pane_g2

0xa712,	// (0x00028ed9) bg_popup_window_pane_g3_ParamLimits

0xa712,	// (0x00028ed9) bg_popup_window_pane_g3

0xa71e,	// (0x00028ee5) bg_popup_window_pane_g4_ParamLimits

0xa71e,	// (0x00028ee5) bg_popup_window_pane_g4

0xa72a,	// (0x00028ef1) bg_popup_window_pane_g5_ParamLimits

0xa72a,	// (0x00028ef1) bg_popup_window_pane_g5

0xa736,	// (0x00028efd) bg_popup_window_pane_g6_ParamLimits

0xa736,	// (0x00028efd) bg_popup_window_pane_g6

0xa742,	// (0x00028f09) bg_popup_window_pane_g7_ParamLimits

0xa742,	// (0x00028f09) bg_popup_window_pane_g7

0xa74e,	// (0x00028f15) bg_popup_window_pane_g8_ParamLimits

0xa74e,	// (0x00028f15) bg_popup_window_pane_g8

0xa75a,	// (0x00028f21) bg_popup_window_pane_g9_ParamLimits

0xa75a,	// (0x00028f21) bg_popup_window_pane_g9

0xa766,	// (0x00028f2d) bg_popup_window_pane_g10_ParamLimits

0xa766,	// (0x00028f2d) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002e077) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002e077) bg_popup_window_pane_g

0xa68f,	// (0x00028e56) bg_popup_heading_pane_ParamLimits

0xa68f,	// (0x00028e56) bg_popup_heading_pane

0x7db3,	// (0x0002657a) tabs_4_passive_pane_cp_srt_ParamLimits

0x7db3,	// (0x0002657a) tabs_4_passive_pane_cp_srt

0x7dc5,	// (0x0002658c) tabs_4_passive_pane_srt_ParamLimits

0xa6a3,	// (0x00028e6a) heading_pane_g2

0x7dc5,	// (0x0002658c) tabs_4_passive_pane_srt

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp3_srt_ParamLimits

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp3_srt

0xa6ab,	// (0x00028e72) heading_pane_t1_ParamLimits

0xa6ab,	// (0x00028e72) heading_pane_t1

0xa6c2,	// (0x00028e89) heading_pane_t2_ParamLimits

0xa6c2,	// (0x00028e89) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002e072) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002e072) heading_pane_t

0xa1ba,	// (0x00028981) bg_popup_heading_pane_g1

0xa269,	// (0x00028a30) bg_popup_heading_pane_g2

0xa273,	// (0x00028a3a) bg_popup_heading_pane_g3

0xa27d,	// (0x00028a44) bg_popup_heading_pane_g4

0xa287,	// (0x00028a4e) bg_popup_heading_pane_g5

0xa291,	// (0x00028a58) bg_popup_heading_pane_g6

0xa299,	// (0x00028a60) bg_popup_heading_pane_g7

0xa2a1,	// (0x00028a68) bg_popup_heading_pane_g8

0xa2ab,	// (0x00028a72) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002e02e) bg_popup_heading_pane_g

0x99b2,	// (0x00028179) bg_popup_sub_pane_g1

0x99ba,	// (0x00028181) bg_popup_sub_pane_g2

0x99c2,	// (0x00028189) bg_popup_sub_pane_g3

0x99ca,	// (0x00028191) bg_popup_sub_pane_g4

0x99d2,	// (0x00028199) bg_popup_sub_pane_g5

0x99da,	// (0x000281a1) bg_popup_sub_pane_g6

0x99e2,	// (0x000281a9) bg_popup_sub_pane_g7

0x99ea,	// (0x000281b1) bg_popup_sub_pane_g8

0x99f2,	// (0x000281b9) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002e008) bg_popup_sub_pane_g

0x1458,	// (0x0001fc1f) bg_popup_window_pane_cp5_ParamLimits

0x1458,	// (0x0001fc1f) bg_popup_window_pane_cp5

0x15c1,	// (0x0001fd88) popup_note_window_g1_ParamLimits

0x15c1,	// (0x0001fd88) popup_note_window_g1

0x15cd,	// (0x0001fd94) popup_note_window_t1_ParamLimits

0x15cd,	// (0x0001fd94) popup_note_window_t1

0x15e3,	// (0x0001fdaa) popup_note_window_t2_ParamLimits

0x15e3,	// (0x0001fdaa) popup_note_window_t2

0x15f9,	// (0x0001fdc0) popup_note_window_t3_ParamLimits

0x15f9,	// (0x0001fdc0) popup_note_window_t3

0x160f,	// (0x0001fdd6) popup_note_window_t4_ParamLimits

0x160f,	// (0x0001fdd6) popup_note_window_t4

0x1637,	// (0x0001fdfe) popup_note_window_t5_ParamLimits

0x1637,	// (0x0001fdfe) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002dd21) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002dd21) popup_note_window_t

0x1681,	// (0x0001fe48) bg_popup_window_pane_cp6_ParamLimits

0x1681,	// (0x0001fe48) bg_popup_window_pane_cp6

0xa136,	// (0x000288fd) popup_note_image_window_g1_ParamLimits

0xa136,	// (0x000288fd) popup_note_image_window_g1

0xa142,	// (0x00028909) popup_note_image_window_g2_ParamLimits

0xa142,	// (0x00028909) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002dffc) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002dffc) popup_note_image_window_g

0xa15b,	// (0x00028922) popup_note_image_window_t1_ParamLimits

0xa15b,	// (0x00028922) popup_note_image_window_t1

0xa174,	// (0x0002893b) popup_note_image_window_t2_ParamLimits

0xa174,	// (0x0002893b) popup_note_image_window_t2

0xa18d,	// (0x00028954) popup_note_image_window_t3_ParamLimits

0xa18d,	// (0x00028954) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002e001) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002e001) popup_note_image_window_t

0x9ff6,	// (0x000287bd) bg_popup_window_pane_cp7_ParamLimits

0x9ff6,	// (0x000287bd) bg_popup_window_pane_cp7

0xa026,	// (0x000287ed) popup_note_wait_window_g1_ParamLimits

0xa026,	// (0x000287ed) popup_note_wait_window_g1

0xa032,	// (0x000287f9) popup_note_wait_window_g2_ParamLimits

0xa032,	// (0x000287f9) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002dfea) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002dfea) popup_note_wait_window_g

0xa04a,	// (0x00028811) popup_note_wait_window_t1_ParamLimits

0xa04a,	// (0x00028811) popup_note_wait_window_t1

0xa071,	// (0x00028838) popup_note_wait_window_t2_ParamLimits

0xa071,	// (0x00028838) popup_note_wait_window_t2

0xa08f,	// (0x00028856) popup_note_wait_window_t3_ParamLimits

0xa08f,	// (0x00028856) popup_note_wait_window_t3

0xa0a2,	// (0x00028869) popup_note_wait_window_t4_ParamLimits

0xa0a2,	// (0x00028869) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002dff1) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002dff1) popup_note_wait_window_t

0xa0c7,	// (0x0002888e) wait_bar_pane_ParamLimits

0xa0c7,	// (0x0002888e) wait_bar_pane

0x140a,	// (0x0001fbd1) wait_anim_pane

0x140a,	// (0x0001fbd1) wait_border_pane

0x1400,	// (0x0001fbc7) wait_anim_pane_g1

0x1400,	// (0x0001fbc7) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002dea5) wait_anim_pane_g

0x9f9a,	// (0x00028761) wait_border_pane_g1

0x9fa5,	// (0x0002876c) wait_border_pane_g2

0x9fae,	// (0x00028775) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002dfe3) wait_border_pane_g

0x9e04,	// (0x000285cb) bg_popup_window_pane_cp16_ParamLimits

0x9e04,	// (0x000285cb) bg_popup_window_pane_cp16

0x9f04,	// (0x000286cb) indicator_popup_pane_cp4_ParamLimits

0x9f04,	// (0x000286cb) indicator_popup_pane_cp4

0x9f18,	// (0x000286df) popup_query_data_window_t1_ParamLimits

0x9f18,	// (0x000286df) popup_query_data_window_t1

0x9f2a,	// (0x000286f1) popup_query_data_window_t2_ParamLimits

0x9f2a,	// (0x000286f1) popup_query_data_window_t2

0x9f43,	// (0x0002870a) popup_query_data_window_t3_ParamLimits

0x9f43,	// (0x0002870a) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002dfdc) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002dfdc) popup_query_data_window_t

0x9f5d,	// (0x00028724) query_popup_data_pane_ParamLimits

0x9f5d,	// (0x00028724) query_popup_data_pane

0x9f71,	// (0x00028738) query_popup_data_pane_cp1_ParamLimits

0x9f71,	// (0x00028738) query_popup_data_pane_cp1

0x9e04,	// (0x000285cb) bg_popup_window_pane_cp10_ParamLimits

0x9e04,	// (0x000285cb) bg_popup_window_pane_cp10

0x9e36,	// (0x000285fd) indicator_popup_pane_ParamLimits

0x9e36,	// (0x000285fd) indicator_popup_pane

0x9e58,	// (0x0002861f) popup_query_code_window_t1_ParamLimits

0x9e58,	// (0x0002861f) popup_query_code_window_t1

0x9e72,	// (0x00028639) popup_query_code_window_t2_ParamLimits

0x9e72,	// (0x00028639) popup_query_code_window_t2

0x9ebb,	// (0x00028682) popup_query_code_window_t3_ParamLimits

0x9ebb,	// (0x00028682) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002dfd5) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002dfd5) popup_query_code_window_t

0x9eea,	// (0x000286b1) query_popup_pane_ParamLimits

0x9eea,	// (0x000286b1) query_popup_pane

0x1681,	// (0x0001fe48) bg_popup_window_pane_cp15_ParamLimits

0x1681,	// (0x0001fe48) bg_popup_window_pane_cp15

0x16a1,	// (0x0001fe68) indicator_popup_pane_cp1_ParamLimits

0x16a1,	// (0x0001fe68) indicator_popup_pane_cp1

0x16b4,	// (0x0001fe7b) indicator_popup_pane_cp2_ParamLimits

0x16b4,	// (0x0001fe7b) indicator_popup_pane_cp2

0x16cf,	// (0x0001fe96) popup_query_data_code_window_g1_ParamLimits

0x16cf,	// (0x0001fe96) popup_query_data_code_window_g1

0x16e2,	// (0x0001fea9) popup_query_data_code_window_t1_ParamLimits

0x16e2,	// (0x0001fea9) popup_query_data_code_window_t1

0x16f4,	// (0x0001febb) popup_query_data_code_window_t2_ParamLimits

0x16f4,	// (0x0001febb) popup_query_data_code_window_t2

0x1706,	// (0x0001fecd) popup_query_data_code_window_t3_ParamLimits

0x1706,	// (0x0001fecd) popup_query_data_code_window_t3

0x171c,	// (0x0001fee3) popup_query_data_code_window_t4_ParamLimits

0x171c,	// (0x0001fee3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002dd2c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002dd2c) popup_query_data_code_window_t

0x8f74,	// (0x0002773b) list_single_midp_graphic_pane_g3

0x1736,	// (0x0001fefd) query_popup_data_pane_cp2_ParamLimits

0x1749,	// (0x0001ff10) query_popup_pane_cp2_ParamLimits

0x1749,	// (0x0001ff10) query_popup_pane_cp2

0x140a,	// (0x0001fbd1) bg_popup_window_pane_cp11

0x9de8,	// (0x000285af) heading_pane_cp5

0x9df0,	// (0x000285b7) listscroll_popup_info_pane

0x140a,	// (0x0001fbd1) input_focus_pane_cp3

0x2d38,	// (0x000214ff) query_popup_pane_t1

0x2d46,	// (0x0002150d) list_popup_info_pane_ParamLimits

0x2d46,	// (0x0002150d) list_popup_info_pane

0x2d55,	// (0x0002151c) listscroll_popup_info_pane_g1

0x2d5d,	// (0x00021524) scroll_pane_cp7

0x2d67,	// (0x0002152e) popup_info_list_pane_t1_ParamLimits

0x2d67,	// (0x0002152e) popup_info_list_pane_t1

0x2d81,	// (0x00021548) popup_info_list_pane_t2_ParamLimits

0x2d81,	// (0x00021548) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002dd35) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002dd35) popup_info_list_pane_t

0x140a,	// (0x0001fbd1) bg_popup_window_pane_cp12

0xb19b,	// (0x00029962) find_popup_pane

0x1466,	// (0x0001fc2d) bg_popup_window_pane_cp3

0x2d9b,	// (0x00021562) heading_pane_cp3

0x2daa,	// (0x00021571) listscroll_popup_graphic_pane

0x140a,	// (0x0001fbd1) bg_popup_window_pane_cp4

0x643f,	// (0x00024c06) heading_pane_cp4

0x2dba,	// (0x00021581) listscroll_popup_colour_pane

0x6449,	// (0x00024c10) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6449,	// (0x00024c10) cell_large_graphic_colour_none_popup_pane

0x645d,	// (0x00024c24) grid_large_graphic_colour_popup_pane_ParamLimits

0x645d,	// (0x00024c24) grid_large_graphic_colour_popup_pane

0x6489,	// (0x00024c50) listscroll_popup_colour_pane_g1_ParamLimits

0x6489,	// (0x00024c50) listscroll_popup_colour_pane_g1

0x64a0,	// (0x00024c67) listscroll_popup_colour_pane_g2_ParamLimits

0x64a0,	// (0x00024c67) listscroll_popup_colour_pane_g2

0x64b7,	// (0x00024c7e) listscroll_popup_colour_pane_g3_ParamLimits

0x64b7,	// (0x00024c7e) listscroll_popup_colour_pane_g3

0x64c7,	// (0x00024c8e) listscroll_popup_colour_pane_g4_ParamLimits

0x64c7,	// (0x00024c8e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002dd3a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002dd3a) listscroll_popup_colour_pane_g

0x2dc2,	// (0x00021589) scroll_pane_cp6_ParamLimits

0x2dc2,	// (0x00021589) scroll_pane_cp6

0x64db,	// (0x00024ca2) cell_large_graphic_colour_popup_pane_ParamLimits

0x64db,	// (0x00024ca2) cell_large_graphic_colour_popup_pane

0x2dd4,	// (0x0002159b) cell_large_graphic_colour_none_popup_pane_t1

0x140a,	// (0x0001fbd1) grid_highlight_pane_cp5

0x2de3,	// (0x000215aa) cell_large_graphic_colour_popup_pane_g1

0x2deb,	// (0x000215b2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002dd43) cell_large_graphic_colour_popup_pane_g

0x2df3,	// (0x000215ba) cell_large_graphic_colour_popup_pane_g2_copy1

0x2dfc,	// (0x000215c3) grid_highlight_pane_cp4

0x2e04,	// (0x000215cb) bg_popup_window_pane_cp8_ParamLimits

0x2e04,	// (0x000215cb) bg_popup_window_pane_cp8

0x2e1f,	// (0x000215e6) popup_snote_single_text_window_g1_ParamLimits

0x2e1f,	// (0x000215e6) popup_snote_single_text_window_g1

0x2e31,	// (0x000215f8) popup_snote_single_text_window_t1_ParamLimits

0x2e31,	// (0x000215f8) popup_snote_single_text_window_t1

0x2e44,	// (0x0002160b) popup_snote_single_text_window_t2_ParamLimits

0x2e44,	// (0x0002160b) popup_snote_single_text_window_t2

0x2e57,	// (0x0002161e) popup_snote_single_text_window_t3_ParamLimits

0x2e57,	// (0x0002161e) popup_snote_single_text_window_t3

0x2e90,	// (0x00021657) popup_snote_single_text_window_t4_ParamLimits

0x2e90,	// (0x00021657) popup_snote_single_text_window_t4

0x2ec4,	// (0x0002168b) popup_snote_single_text_window_t5_ParamLimits

0x2ec4,	// (0x0002168b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002dd48) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002dd48) popup_snote_single_text_window_t

0x2ef3,	// (0x000216ba) bg_popup_window_pane_cp9_ParamLimits

0x2ef3,	// (0x000216ba) bg_popup_window_pane_cp9

0x2e1f,	// (0x000215e6) popup_snote_single_graphic_window_g1_ParamLimits

0x2e1f,	// (0x000215e6) popup_snote_single_graphic_window_g1

0x2f01,	// (0x000216c8) popup_snote_single_graphic_window_g2_ParamLimits

0x2f01,	// (0x000216c8) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002dd53) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002dd53) popup_snote_single_graphic_window_g

0x2f0d,	// (0x000216d4) popup_snote_single_graphic_window_t1_ParamLimits

0x2f0d,	// (0x000216d4) popup_snote_single_graphic_window_t1

0x2f20,	// (0x000216e7) popup_snote_single_graphic_window_t2_ParamLimits

0x2f20,	// (0x000216e7) popup_snote_single_graphic_window_t2

0x2f33,	// (0x000216fa) popup_snote_single_graphic_window_t3_ParamLimits

0x2f33,	// (0x000216fa) popup_snote_single_graphic_window_t3

0x2f6c,	// (0x00021733) popup_snote_single_graphic_window_t4_ParamLimits

0x2f6c,	// (0x00021733) popup_snote_single_graphic_window_t4

0x2fa0,	// (0x00021767) popup_snote_single_graphic_window_t5_ParamLimits

0x2fa0,	// (0x00021767) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002dd58) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002dd58) popup_snote_single_graphic_window_t

0xb0d9,	// (0x000298a0) grid_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x000298a0) grid_graphic_popup_pane

0xb107,	// (0x000298ce) listscroll_popup_graphic_pane_g1_ParamLimits

0xb107,	// (0x000298ce) listscroll_popup_graphic_pane_g1

0xb11b,	// (0x000298e2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11b,	// (0x000298e2) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002e152) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002e152) listscroll_popup_graphic_pane_g

0xb12f,	// (0x000298f6) scroll_pane_cp5

0xb071,	// (0x00029838) cell_graphic_popup_pane_ParamLimits

0xb071,	// (0x00029838) cell_graphic_popup_pane

0xb052,	// (0x00029819) cell_graphic_popup_pane_g1

0xb05a,	// (0x00029821) cell_graphic_popup_pane_g2

0x2df3,	// (0x000215ba) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002e14b) cell_graphic_popup_pane_g

0xb063,	// (0x0002982a) cell_graphic_popup_pane_t2

0x2dfc,	// (0x000215c3) grid_highlight_pane_cp3

0x2fe1,	// (0x000217a8) list_gen_pane_ParamLimits

0x2fe1,	// (0x000217a8) list_gen_pane

0x3009,	// (0x000217d0) scroll_pane

0xafaa,	// (0x00029771) bg_list_pane_g1_ParamLimits

0xafaa,	// (0x00029771) bg_list_pane_g1

0xafc7,	// (0x0002978e) bg_list_pane_g2_ParamLimits

0xafc7,	// (0x0002978e) bg_list_pane_g2

0xafdc,	// (0x000297a3) bg_list_pane_g3_ParamLimits

0xafdc,	// (0x000297a3) bg_list_pane_g3

0xaff0,	// (0x000297b7) bg_list_pane_g4_ParamLimits

0xaff0,	// (0x000297b7) bg_list_pane_g4

0xb004,	// (0x000297cb) bg_list_pane_g5_ParamLimits

0xb004,	// (0x000297cb) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002e140) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002e140) bg_list_pane_g

0xaf61,	// (0x00029728) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf61,	// (0x00029728) list_double2_graphic_large_graphic_pane

0xaf61,	// (0x00029728) list_double2_graphic_pane_ParamLimits

0xaf61,	// (0x00029728) list_double2_graphic_pane

0xaf61,	// (0x00029728) list_double2_large_graphic_pane_ParamLimits

0xaf61,	// (0x00029728) list_double2_large_graphic_pane

0xaf61,	// (0x00029728) list_double2_pane_ParamLimits

0xaf61,	// (0x00029728) list_double2_pane

0xaf61,	// (0x00029728) list_double_graphic_heading_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_graphic_heading_pane

0xaf61,	// (0x00029728) list_double_graphic_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_graphic_pane

0xaf61,	// (0x00029728) list_double_heading_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_heading_pane

0xaf61,	// (0x00029728) list_double_large_graphic_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_large_graphic_pane

0xaf61,	// (0x00029728) list_double_number_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_number_pane

0xaf61,	// (0x00029728) list_double_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_pane

0xaf61,	// (0x00029728) list_double_time_pane_ParamLimits

0xaf61,	// (0x00029728) list_double_time_pane

0xaf61,	// (0x00029728) list_setting_number_pane_ParamLimits

0xaf61,	// (0x00029728) list_setting_number_pane

0xaf61,	// (0x00029728) list_setting_pane_ParamLimits

0xaf61,	// (0x00029728) list_setting_pane

0x560d,	// (0x00023dd4) list_single_2graphic_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_2graphic_pane

0x560d,	// (0x00023dd4) list_single_graphic_heading_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_graphic_heading_pane

0x560d,	// (0x00023dd4) list_single_graphic_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_graphic_pane

0x560d,	// (0x00023dd4) list_single_heading_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_heading_pane

0xaf8f,	// (0x00029756) list_single_large_graphic_pane_ParamLimits

0xaf8f,	// (0x00029756) list_single_large_graphic_pane

0x560d,	// (0x00023dd4) list_single_number_heading_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_number_heading_pane

0x560d,	// (0x00023dd4) list_single_number_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_number_pane

0x560d,	// (0x00023dd4) list_single_pane_ParamLimits

0x560d,	// (0x00023dd4) list_single_pane

0x140a,	// (0x0001fbd1) list_highlight_pane_cp1

0x4c19,	// (0x000233e0) list_single_pane_g1_ParamLimits

0x4c19,	// (0x000233e0) list_single_pane_g1

0x4c25,	// (0x000233ec) list_single_pane_g2_ParamLimits

0x4c25,	// (0x000233ec) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002dd6a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002dd6a) list_single_pane_g

0x55ba,	// (0x00023d81) list_single_pane_t1_ParamLimits

0x55ba,	// (0x00023d81) list_single_pane_t1

0x4c19,	// (0x000233e0) list_single_number_pane_g1_ParamLimits

0x4c19,	// (0x000233e0) list_single_number_pane_g1

0x4c25,	// (0x000233ec) list_single_number_pane_g2_ParamLimits

0x4c25,	// (0x000233ec) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002dd6a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002dd6a) list_single_number_pane_g

0x5564,	// (0x00023d2b) list_single_number_pane_t1_ParamLimits

0x5564,	// (0x00023d2b) list_single_number_pane_t1

0x557a,	// (0x00023d41) list_single_number_pane_t2_ParamLimits

0x557a,	// (0x00023d41) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002e101) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002e101) list_single_number_pane_t

0x4c0d,	// (0x000233d4) list_single_graphic_pane_g1_ParamLimits

0x4c0d,	// (0x000233d4) list_single_graphic_pane_g1

0x4c19,	// (0x000233e0) list_single_graphic_pane_g2_ParamLimits

0x4c19,	// (0x000233e0) list_single_graphic_pane_g2

0x4c25,	// (0x000233ec) list_single_graphic_pane_g3_ParamLimits

0x4c25,	// (0x000233ec) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002dd63) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002dd63) list_single_graphic_pane_g

0x4c31,	// (0x000233f8) list_single_graphic_pane_t1_ParamLimits

0x4c31,	// (0x000233f8) list_single_graphic_pane_t1

0x4c19,	// (0x000233e0) list_single_heading_pane_g1_ParamLimits

0x4c19,	// (0x000233e0) list_single_heading_pane_g1

0x4c25,	// (0x000233ec) list_single_heading_pane_g2_ParamLimits

0x4c25,	// (0x000233ec) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002dd6a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002dd6a) list_single_heading_pane_g

0x4c47,	// (0x0002340e) list_single_heading_pane_t1_ParamLimits

0x4c47,	// (0x0002340e) list_single_heading_pane_t1

0x4c5d,	// (0x00023424) list_single_heading_pane_t2_ParamLimits

0x4c5d,	// (0x00023424) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002dd6f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002dd6f) list_single_heading_pane_t

0x4c19,	// (0x000233e0) list_single_number_heading_pane_g1_ParamLimits

0x4c19,	// (0x000233e0) list_single_number_heading_pane_g1

0x4c25,	// (0x000233ec) list_single_number_heading_pane_g2_ParamLimits

0x4c25,	// (0x000233ec) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002dd6a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002dd6a) list_single_number_heading_pane_g

0x4c47,	// (0x0002340e) list_single_number_heading_pane_t1_ParamLimits

0x4c47,	// (0x0002340e) list_single_number_heading_pane_t1

0x4c6f,	// (0x00023436) list_single_number_heading_pane_t2_ParamLimits

0x4c6f,	// (0x00023436) list_single_number_heading_pane_t2

0x4c81,	// (0x00023448) list_single_number_heading_pane_t3_ParamLimits

0x4c81,	// (0x00023448) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002dd74) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002dd74) list_single_number_heading_pane_t

0x4c93,	// (0x0002345a) list_single_graphic_heading_pane_g1_ParamLimits

0x4c93,	// (0x0002345a) list_single_graphic_heading_pane_g1

0x4c9f,	// (0x00023466) list_single_graphic_heading_pane_g4_ParamLimits

0x4c9f,	// (0x00023466) list_single_graphic_heading_pane_g4

0x4c25,	// (0x000233ec) list_single_graphic_heading_pane_g5_ParamLimits

0x4c25,	// (0x000233ec) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002dd7b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002dd7b) list_single_graphic_heading_pane_g

0x4c47,	// (0x0002340e) list_single_graphic_heading_pane_t1_ParamLimits

0x4c47,	// (0x0002340e) list_single_graphic_heading_pane_t1

0x4cb0,	// (0x00023477) list_single_graphic_heading_pane_t2_ParamLimits

0x4cb0,	// (0x00023477) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002dd82) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002dd82) list_single_graphic_heading_pane_t

0x4cc2,	// (0x00023489) list_single_large_graphic_pane_g1_ParamLimits

0x4cc2,	// (0x00023489) list_single_large_graphic_pane_g1

0x4cce,	// (0x00023495) list_single_large_graphic_pane_g2_ParamLimits

0x4cce,	// (0x00023495) list_single_large_graphic_pane_g2

0x4cda,	// (0x000234a1) list_single_large_graphic_pane_g3_ParamLimits

0x4cda,	// (0x000234a1) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002dd87) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002dd87) list_single_large_graphic_pane_g

0x9fa5,	// (0x0002876c) wait_border_pane_g2_copy1

0x4ce6,	// (0x000234ad) list_single_large_graphic_pane_g4_cp2

0x4cee,	// (0x000234b5) list_single_large_graphic_pane_t1_ParamLimits

0x4cee,	// (0x000234b5) list_single_large_graphic_pane_t1

0x4d04,	// (0x000234cb) list_double_pane_g1_ParamLimits

0x4d04,	// (0x000234cb) list_double_pane_g1

0x4d10,	// (0x000234d7) list_double_pane_g2_ParamLimits

0x4d10,	// (0x000234d7) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002dd8e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002dd8e) list_double_pane_g

0x4d1c,	// (0x000234e3) list_double_pane_t1_ParamLimits

0x4d1c,	// (0x000234e3) list_double_pane_t1

0x4d32,	// (0x000234f9) list_double_pane_t2_ParamLimits

0x4d32,	// (0x000234f9) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002dd93) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002dd93) list_double_pane_t

0x4d44,	// (0x0002350b) list_double2_pane_g1_ParamLimits

0x4d44,	// (0x0002350b) list_double2_pane_g1

0x4d55,	// (0x0002351c) list_double2_pane_g2_ParamLimits

0x4d55,	// (0x0002351c) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002dd98) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002dd98) list_double2_pane_g

0x4d61,	// (0x00023528) list_double2_pane_t1_ParamLimits

0x4d61,	// (0x00023528) list_double2_pane_t1

0x4d77,	// (0x0002353e) list_double2_pane_t2_ParamLimits

0x4d77,	// (0x0002353e) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002dd9d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002dd9d) list_double2_pane_t

0x4d04,	// (0x000234cb) list_double_number_pane_g1_ParamLimits

0x4d04,	// (0x000234cb) list_double_number_pane_g1

0x4d10,	// (0x000234d7) list_double_number_pane_g2_ParamLimits

0x4d10,	// (0x000234d7) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002dd8e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002dd8e) list_double_number_pane_g

0x4d89,	// (0x00023550) list_double_number_pane_t1_ParamLimits

0x4d89,	// (0x00023550) list_double_number_pane_t1

0x4d9b,	// (0x00023562) list_double_number_pane_t2_ParamLimits

0x4d9b,	// (0x00023562) list_double_number_pane_t2

0x4db1,	// (0x00023578) list_double_number_pane_t3_ParamLimits

0x4db1,	// (0x00023578) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002dda2) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002dda2) list_double_number_pane_t

0x4dc3,	// (0x0002358a) list_double_graphic_pane_g1_ParamLimits

0x4dc3,	// (0x0002358a) list_double_graphic_pane_g1

0x4dcf,	// (0x00023596) list_double_graphic_pane_g2_ParamLimits

0x4dcf,	// (0x00023596) list_double_graphic_pane_g2

0x4dde,	// (0x000235a5) list_double_graphic_pane_g3_ParamLimits

0x4dde,	// (0x000235a5) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002dda9) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002dda9) list_double_graphic_pane_g

0x4df6,	// (0x000235bd) list_double_graphic_pane_t1_ParamLimits

0x4df6,	// (0x000235bd) list_double_graphic_pane_t1

0x4e0c,	// (0x000235d3) list_double_graphic_pane_t2_ParamLimits

0x4e0c,	// (0x000235d3) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002ddb2) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002ddb2) list_double_graphic_pane_t

0x4e1e,	// (0x000235e5) list_double2_graphic_pane_g1_ParamLimits

0x4e1e,	// (0x000235e5) list_double2_graphic_pane_g1

0x4e2a,	// (0x000235f1) list_double2_graphic_pane_g2_ParamLimits

0x4e2a,	// (0x000235f1) list_double2_graphic_pane_g2

0x4e36,	// (0x000235fd) list_double2_graphic_pane_g3_ParamLimits

0x4e36,	// (0x000235fd) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002ddb7) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002ddb7) list_double2_graphic_pane_g

0x4e42,	// (0x00023609) list_double2_graphic_pane_t1_ParamLimits

0x4e42,	// (0x00023609) list_double2_graphic_pane_t1

0x4e58,	// (0x0002361f) list_double2_graphic_pane_t2_ParamLimits

0x4e58,	// (0x0002361f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002ddbe) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002ddbe) list_double2_graphic_pane_t

0x4e6a,	// (0x00023631) list_double_large_graphic_pane_g1_ParamLimits

0x4e6a,	// (0x00023631) list_double_large_graphic_pane_g1

0x4e89,	// (0x00023650) list_double_large_graphic_pane_g2_ParamLimits

0x4e89,	// (0x00023650) list_double_large_graphic_pane_g2

0x4d10,	// (0x000234d7) list_double_large_graphic_pane_g3_ParamLimits

0x4d10,	// (0x000234d7) list_double_large_graphic_pane_g3

0x4e9a,	// (0x00023661) list_double_large_graphic_pane_g4_ParamLimits

0x4e9a,	// (0x00023661) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002ddc3) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002ddc3) list_double_large_graphic_pane_g

0x4ec2,	// (0x00023689) list_double_large_graphic_pane_t1_ParamLimits

0x4ec2,	// (0x00023689) list_double_large_graphic_pane_t1

0x4edb,	// (0x000236a2) list_double_large_graphic_pane_t2_ParamLimits

0x4edb,	// (0x000236a2) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002ddce) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002ddce) list_double_large_graphic_pane_t

0x4eed,	// (0x000236b4) list_double2_large_graphic_pane_g1_ParamLimits

0x4eed,	// (0x000236b4) list_double2_large_graphic_pane_g1

0x4d44,	// (0x0002350b) list_double2_large_graphic_pane_g2_ParamLimits

0x4d44,	// (0x0002350b) list_double2_large_graphic_pane_g2

0x4d55,	// (0x0002351c) list_double2_large_graphic_pane_g3_ParamLimits

0x4d55,	// (0x0002351c) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002ddd3) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002ddd3) list_double2_large_graphic_pane_g

0x4ef9,	// (0x000236c0) list_double2_large_graphic_pane_t1_ParamLimits

0x4ef9,	// (0x000236c0) list_double2_large_graphic_pane_t1

0x4f0f,	// (0x000236d6) list_double2_large_graphic_pane_t2_ParamLimits

0x4f0f,	// (0x000236d6) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002ddda) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002ddda) list_double2_large_graphic_pane_t

0x4f21,	// (0x000236e8) list_double_heading_pane_g1_ParamLimits

0x4f21,	// (0x000236e8) list_double_heading_pane_g1

0x4f32,	// (0x000236f9) list_double_heading_pane_g2_ParamLimits

0x4f32,	// (0x000236f9) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002dddf) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002dddf) list_double_heading_pane_g

0x4f3e,	// (0x00023705) list_double_heading_pane_t1_ParamLimits

0x4f3e,	// (0x00023705) list_double_heading_pane_t1

0x4d77,	// (0x0002353e) list_double_heading_pane_t2_ParamLimits

0x4d77,	// (0x0002353e) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002dde4) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002dde4) list_double_heading_pane_t

0x4e1e,	// (0x000235e5) list_double_graphic_heading_pane_g1_ParamLimits

0x4e1e,	// (0x000235e5) list_double_graphic_heading_pane_g1

0x4f21,	// (0x000236e8) list_double_graphic_heading_pane_g2_ParamLimits

0x4f21,	// (0x000236e8) list_double_graphic_heading_pane_g2

0x4f32,	// (0x000236f9) list_double_graphic_heading_pane_g3_ParamLimits

0x4f32,	// (0x000236f9) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002dde9) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002dde9) list_double_graphic_heading_pane_g

0x4f54,	// (0x0002371b) list_double_graphic_heading_pane_t1_ParamLimits

0x4f54,	// (0x0002371b) list_double_graphic_heading_pane_t1

0x4e58,	// (0x0002361f) list_double_graphic_heading_pane_t2_ParamLimits

0x4e58,	// (0x0002361f) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002ddf0) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002ddf0) list_double_graphic_heading_pane_t

0x4e89,	// (0x00023650) list_double_time_pane_g1_ParamLimits

0x4e89,	// (0x00023650) list_double_time_pane_g1

0x4d10,	// (0x000234d7) list_double_time_pane_g2_ParamLimits

0x4d10,	// (0x000234d7) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002ddf5) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002ddf5) list_double_time_pane_g

0x4f6a,	// (0x00023731) list_double_time_pane_t1_ParamLimits

0x4f6a,	// (0x00023731) list_double_time_pane_t1

0x4f80,	// (0x00023747) list_double_time_pane_t2_ParamLimits

0x4f80,	// (0x00023747) list_double_time_pane_t2

0x4f92,	// (0x00023759) list_double_time_pane_t3_ParamLimits

0x4f92,	// (0x00023759) list_double_time_pane_t3

0x4fa4,	// (0x0002376b) list_double_time_pane_t4_ParamLimits

0x4fa4,	// (0x0002376b) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002ddfa) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002ddfa) list_double_time_pane_t

0x4fb6,	// (0x0002377d) list_setting_pane_g1_ParamLimits

0x4fb6,	// (0x0002377d) list_setting_pane_g1

0x4f32,	// (0x000236f9) list_setting_pane_g2_ParamLimits

0x4f32,	// (0x000236f9) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002de03) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002de03) list_setting_pane_g

0x4fc2,	// (0x00023789) list_setting_pane_t1_ParamLimits

0x4fc2,	// (0x00023789) list_setting_pane_t1

0x4fd9,	// (0x000237a0) list_setting_pane_t2_ParamLimits

0x4fd9,	// (0x000237a0) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002de08) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002de08) list_setting_pane_t

0x5018,	// (0x000237df) set_value_pane_cp_ParamLimits

0x5018,	// (0x000237df) set_value_pane_cp

0x5026,	// (0x000237ed) list_setting_number_pane_g1_ParamLimits

0x5026,	// (0x000237ed) list_setting_number_pane_g1

0x5032,	// (0x000237f9) list_setting_number_pane_g2_ParamLimits

0x5032,	// (0x000237f9) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002de0f) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002de0f) list_setting_number_pane_g

0x503e,	// (0x00023805) list_setting_number_pane_t1_ParamLimits

0x503e,	// (0x00023805) list_setting_number_pane_t1

0x5052,	// (0x00023819) list_setting_number_pane_t2_ParamLimits

0x5052,	// (0x00023819) list_setting_number_pane_t2

0x5069,	// (0x00023830) list_setting_number_pane_t3_ParamLimits

0x5069,	// (0x00023830) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002de14) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002de14) list_setting_number_pane_t

0x5018,	// (0x000237df) set_value_pane_ParamLimits

0x5018,	// (0x000237df) set_value_pane

0x305e,	// (0x00021825) bg_set_opt_pane_ParamLimits

0x305e,	// (0x00021825) bg_set_opt_pane

0x50ac,	// (0x00023873) set_value_pane_t1

0x308d,	// (0x00021854) slider_set_pane_cp3

0x3096,	// (0x0002185d) volume_small_pane_cp

0x309f,	// (0x00021866) list_form_gen_pane

0x30a8,	// (0x0002186f) scroll_pane_cp8

0x50c2,	// (0x00023889) form_field_data_pane_ParamLimits

0x50c2,	// (0x00023889) form_field_data_pane

0x50e8,	// (0x000238af) form_field_data_wide_pane_ParamLimits

0x50e8,	// (0x000238af) form_field_data_wide_pane

0x510d,	// (0x000238d4) form_field_popup_pane_ParamLimits

0x510d,	// (0x000238d4) form_field_popup_pane

0x512f,	// (0x000238f6) form_field_popup_wide_pane_ParamLimits

0x512f,	// (0x000238f6) form_field_popup_wide_pane

0x5150,	// (0x00023917) form_field_slider_pane_ParamLimits

0x5150,	// (0x00023917) form_field_slider_pane

0x5163,	// (0x0002392a) form_field_slider_wide_pane_ParamLimits

0x5163,	// (0x0002392a) form_field_slider_wide_pane

0x3111,	// (0x000218d8) data_form_pane

0x5180,	// (0x00023947) form_field_data_pane_t1

0x311d,	// (0x000218e4) input_focus_pane

0x519a,	// (0x00023961) data_form_wide_pane

0x51b7,	// (0x0002397e) form_field_data_wide_pane_t1

0x2e11,	// (0x000215d8) input_focus_pane_cp6

0x51d9,	// (0x000239a0) form_field_popup_pane_t1

0x311d,	// (0x000218e4) input_focus_pane_cp7

0x3182,	// (0x00021949) list_form_pane

0x51fb,	// (0x000239c2) form_field_popup_wide_pane_t1

0x311d,	// (0x000218e4) input_focus_pane_cp8

0x31a8,	// (0x0002196f) list_form_wide_pane

0x5218,	// (0x000239df) form_field_slider_pane_t1_ParamLimits

0x5218,	// (0x000239df) form_field_slider_pane_t1

0x5230,	// (0x000239f7) form_field_slider_pane_t2_ParamLimits

0x5230,	// (0x000239f7) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002de24) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002de24) form_field_slider_pane_t

0x1458,	// (0x0001fc1f) input_focus_pane_cp9_ParamLimits

0x1458,	// (0x0001fc1f) input_focus_pane_cp9

0x5245,	// (0x00023a0c) slider_cont_pane_ParamLimits

0x5245,	// (0x00023a0c) slider_cont_pane

0x31b4,	// (0x0002197b) form_field_slider_wide_pane_t1_ParamLimits

0x31b4,	// (0x0002197b) form_field_slider_wide_pane_t1

0x5259,	// (0x00023a20) form_field_slider_wide_pane_t2_ParamLimits

0x5259,	// (0x00023a20) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002de29) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002de29) form_field_slider_wide_pane_t

0x1458,	// (0x0001fc1f) input_focus_pane_cp10_ParamLimits

0x1458,	// (0x0001fc1f) input_focus_pane_cp10

0x526b,	// (0x00023a32) slider_cont_pane_cp1_ParamLimits

0x526b,	// (0x00023a32) slider_cont_pane_cp1

0x527f,	// (0x00023a46) slider_form_pane_cp

0x31d8,	// (0x0002199f) input_focus_pane_g1

0x31e0,	// (0x000219a7) input_focus_pane_g2

0x31e8,	// (0x000219af) input_focus_pane_g3

0x31f0,	// (0x000219b7) input_focus_pane_g4

0x31f8,	// (0x000219bf) input_focus_pane_g5

0x3200,	// (0x000219c7) input_focus_pane_g6

0x3208,	// (0x000219cf) input_focus_pane_g7

0x3210,	// (0x000219d7) input_focus_pane_g8

0x3218,	// (0x000219df) input_focus_pane_g9

0x1400,	// (0x0001fbc7) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002de2e) input_focus_pane_g

0x9fae,	// (0x00028775) wait_border_pane_g3_copy1

0x5287,	// (0x00023a4e) data_form_pane_t1

0x1400,	// (0x0001fbc7) wait_anim_pane_g1_copy1

0x558c,	// (0x00023d53) data_form_wide_pane_t1

0x52a4,	// (0x00023a6b) list_form_graphic_pane_cp_ParamLimits

0x52a4,	// (0x00023a6b) list_form_graphic_pane_cp

0xaf05,	// (0x000296cc) slider_form_pane_g1

0xaf0e,	// (0x000296d5) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002e131) slider_form_pane_g

0x52b9,	// (0x00023a80) list_form_graphic_pane_ParamLimits

0x52b9,	// (0x00023a80) list_form_graphic_pane

0x52cb,	// (0x00023a92) list_form_graphic_pane_g1

0x52d3,	// (0x00023a9a) list_form_graphic_pane_t1_ParamLimits

0x52d3,	// (0x00023a9a) list_form_graphic_pane_t1

0x1466,	// (0x0001fc2d) list_highlight_pane_cp5_ParamLimits

0x1466,	// (0x0001fc2d) list_highlight_pane_cp5

0x52e8,	// (0x00023aaf) find_pane_g1

0x324f,	// (0x00021a16) input_find_pane

0x52f1,	// (0x00023ab8) input_find_pane_g1_ParamLimits

0x52f1,	// (0x00023ab8) input_find_pane_g1

0x52fd,	// (0x00023ac4) input_find_pane_t1_ParamLimits

0x52fd,	// (0x00023ac4) input_find_pane_t1

0x5312,	// (0x00023ad9) input_find_pane_t2_ParamLimits

0x5312,	// (0x00023ad9) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002de43) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002de43) input_find_pane_t

0x3258,	// (0x00021a1f) input_focus_pane_cp5_ParamLimits

0x3258,	// (0x00021a1f) input_focus_pane_cp5

0x326b,	// (0x00021a32) bg_popup_window_pane_cp2_ParamLimits

0x326b,	// (0x00021a32) bg_popup_window_pane_cp2

0x3278,	// (0x00021a3f) listscroll_menu_pane_ParamLimits

0x3278,	// (0x00021a3f) listscroll_menu_pane

0x6512,	// (0x00024cd9) popup_submenu_window_ParamLimits

0x6512,	// (0x00024cd9) popup_submenu_window

0x3284,	// (0x00021a4b) find_popup_pane_g1

0x328c,	// (0x00021a53) input_popup_find_pane_cp

0x3296,	// (0x00021a5d) input_focus_pane_cp4_ParamLimits

0x3296,	// (0x00021a5d) input_focus_pane_cp4

0x32a4,	// (0x00021a6b) input_popup_find_pane_t1_ParamLimits

0x32a4,	// (0x00021a6b) input_popup_find_pane_t1

0x140a,	// (0x0001fbd1) bg_popup_sub_pane_cp

0x32d2,	// (0x00021a99) listscroll_popup_sub_pane

0x32da,	// (0x00021aa1) list_submenu_pane_ParamLimits

0x32da,	// (0x00021aa1) list_submenu_pane

0x32eb,	// (0x00021ab2) scroll_pane_cp4

0x32f3,	// (0x00021aba) list_single_popup_submenu_pane_ParamLimits

0x32f3,	// (0x00021aba) list_single_popup_submenu_pane

0x3308,	// (0x00021acf) list_single_popup_submenu_pane_g1

0x3310,	// (0x00021ad7) list_single_popup_submenu_pane_t1_ParamLimits

0x3310,	// (0x00021ad7) list_single_popup_submenu_pane_t1

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp1_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp1

0x6550,	// (0x00024d17) tabs_2_active_pane_g1

0x6558,	// (0x00024d1f) tabs_2_active_pane_t1

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp1_ParamLimits

0x1466,	// (0x0001fc2d) bg_passive_tab_pane_cp1

0x6550,	// (0x00024d17) tabs_2_passive_pane_g1

0x6558,	// (0x00024d1f) tabs_2_passive_pane_t1

0x656a,	// (0x00024d31) bg_active_tab_pane_cp4

0x6578,	// (0x00024d3f) tabs_2_long_active_pane_t1

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp4

0x7a67,	// (0x0002622e) list_single_midp_graphic_pane_g4_ParamLimits

0x656a,	// (0x00024d31) bg_active_tab_pane_cp5

0x6597,	// (0x00024d5e) tabs_3_long_active_pane_t1

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp5

0x7a67,	// (0x0002622e) list_single_midp_graphic_pane_g4

0x1466,	// (0x0001fc2d) bg_popup_window_pane_cp13_ParamLimits

0x1466,	// (0x0001fc2d) bg_popup_window_pane_cp13

0x65b2,	// (0x00024d79) listscroll_popup_fast_pane_ParamLimits

0x65b2,	// (0x00024d79) listscroll_popup_fast_pane

0x65c1,	// (0x00024d88) grid_popup_fast_pane_ParamLimits

0x65c1,	// (0x00024d88) grid_popup_fast_pane

0x65d3,	// (0x00024d9a) scroll_pane_cp9_ParamLimits

0x65d3,	// (0x00024d9a) scroll_pane_cp9

0xc855,	// (0x0002b01c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc855,	// (0x0002b01c) list_single_graphic_hl_pane_t1_cp2

0x65f7,	// (0x00024dbe) input_focus_pane_cp20_ParamLimits

0x65f7,	// (0x00024dbe) input_focus_pane_cp20

0x6605,	// (0x00024dcc) query_popup_data_pane_t1_ParamLimits

0x6605,	// (0x00024dcc) query_popup_data_pane_t1

0x6618,	// (0x00024ddf) query_popup_data_pane_t2_ParamLimits

0x6618,	// (0x00024ddf) query_popup_data_pane_t2

0x665e,	// (0x00024e25) query_popup_data_pane_t3_ParamLimits

0x665e,	// (0x00024e25) query_popup_data_pane_t3

0x669f,	// (0x00024e66) query_popup_data_pane_t4_ParamLimits

0x669f,	// (0x00024e66) query_popup_data_pane_t4

0x66db,	// (0x00024ea2) query_popup_data_pane_t5_ParamLimits

0x66db,	// (0x00024ea2) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002de48) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002de48) query_popup_data_pane_t

0x31d8,	// (0x0002199f) bg_set_opt_pane_g1

0x31e0,	// (0x000219a7) bg_set_opt_pane_g2

0x31e8,	// (0x000219af) bg_set_opt_pane_g3

0x31f0,	// (0x000219b7) bg_set_opt_pane_g4

0x31f8,	// (0x000219bf) bg_set_opt_pane_g5

0x3200,	// (0x000219c7) bg_set_opt_pane_g6

0x3208,	// (0x000219cf) bg_set_opt_pane_g7

0x3210,	// (0x000219d7) bg_set_opt_pane_g8

0x3218,	// (0x000219df) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002de53) bg_set_opt_pane_g

0x6f66,	// (0x0002572d) control_top_pane_stacon_ParamLimits

0x6f66,	// (0x0002572d) control_top_pane_stacon

0x6fb9,	// (0x00025780) signal_pane_stacon_ParamLimits

0x6fb9,	// (0x00025780) signal_pane_stacon

0x6fde,	// (0x000257a5) stacon_top_pane_g1_ParamLimits

0x6fde,	// (0x000257a5) stacon_top_pane_g1

0x7000,	// (0x000257c7) title_pane_stacon_ParamLimits

0x7000,	// (0x000257c7) title_pane_stacon

0x702a,	// (0x000257f1) uni_indicator_pane_stacon_ParamLimits

0x702a,	// (0x000257f1) uni_indicator_pane_stacon

0x703f,	// (0x00025806) battery_pane_stacon_ParamLimits

0x703f,	// (0x00025806) battery_pane_stacon

0x7083,	// (0x0002584a) control_bottom_pane_stacon_ParamLimits

0x7083,	// (0x0002584a) control_bottom_pane_stacon

0x70a6,	// (0x0002586d) navi_pane_stacon_ParamLimits

0x70a6,	// (0x0002586d) navi_pane_stacon

0x70c9,	// (0x00025890) stacon_bottom_pane_g1_ParamLimits

0x70c9,	// (0x00025890) stacon_bottom_pane_g1

0x6712,	// (0x00024ed9) aid_levels_signal_lsc_ParamLimits

0x6712,	// (0x00024ed9) aid_levels_signal_lsc

0x6729,	// (0x00024ef0) signal_pane_stacon_g1_ParamLimits

0x6729,	// (0x00024ef0) signal_pane_stacon_g1

0x673d,	// (0x00024f04) signal_pane_stacon_g2_ParamLimits

0x673d,	// (0x00024f04) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002de66) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002de66) signal_pane_stacon_g

0x677f,	// (0x00024f46) title_pane_stacon_t1_ParamLimits

0x677f,	// (0x00024f46) title_pane_stacon_t1

0x67a4,	// (0x00024f6b) uni_indicator_pane_stacon_g1

0x67ae,	// (0x00024f75) uni_indicator_pane_stacon_g2

0x67b8,	// (0x00024f7f) uni_indicator_pane_stacon_g3

0x67c2,	// (0x00024f89) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002de72) uni_indicator_pane_stacon_g

0x67cc,	// (0x00024f93) control_top_pane_stacon_g1

0x67d4,	// (0x00024f9b) control_top_pane_stacon_t1_ParamLimits

0x67d4,	// (0x00024f9b) control_top_pane_stacon_t1

0x680b,	// (0x00024fd2) aid_levels_battery_lsc_ParamLimits

0x680b,	// (0x00024fd2) aid_levels_battery_lsc

0x6823,	// (0x00024fea) battery_pane_stacon_g1_ParamLimits

0x6823,	// (0x00024fea) battery_pane_stacon_g1

0x6836,	// (0x00024ffd) battery_pane_stacon_g2_ParamLimits

0x6836,	// (0x00024ffd) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002de7b) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002de7b) battery_pane_stacon_g

0x6874,	// (0x0002503b) navi_icon_pane_stacon

0x6888,	// (0x0002504f) navi_navi_pane_stacon

0x6874,	// (0x0002503b) navi_text_pane_stacon

0x67cc,	// (0x00024f93) control_bottom_pane_stacon_g1

0x689e,	// (0x00025065) control_bottom_pane_stacon_t1_ParamLimits

0x689e,	// (0x00025065) control_bottom_pane_stacon_t1

0x68ef,	// (0x000250b6) grid_app_pane_ParamLimits

0x68ef,	// (0x000250b6) grid_app_pane

0x6911,	// (0x000250d8) scroll_pane_cp15_ParamLimits

0x6911,	// (0x000250d8) scroll_pane_cp15

0x6924,	// (0x000250eb) cell_app_pane_ParamLimits

0x6924,	// (0x000250eb) cell_app_pane

0x6950,	// (0x00025117) cell_app_pane_g1_ParamLimits

0x6950,	// (0x00025117) cell_app_pane_g1

0x6974,	// (0x0002513b) cell_app_pane_g2_ParamLimits

0x6974,	// (0x0002513b) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002de80) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002de80) cell_app_pane_g

0x6980,	// (0x00025147) cell_app_pane_t1_ParamLimits

0x6980,	// (0x00025147) cell_app_pane_t1

0x6997,	// (0x0002515e) grid_highlight_pane_ParamLimits

0x6997,	// (0x0002515e) grid_highlight_pane

0x31d8,	// (0x0002199f) cell_highlight_pane_g1

0x31e0,	// (0x000219a7) cell_highlight_pane_g2

0x31e8,	// (0x000219af) cell_highlight_pane_g3

0x31f0,	// (0x000219b7) cell_highlight_pane_g4

0x31f8,	// (0x000219bf) cell_highlight_pane_g5

0x3200,	// (0x000219c7) cell_highlight_pane_g6

0x3208,	// (0x000219cf) cell_highlight_pane_g7

0x3210,	// (0x000219d7) cell_highlight_pane_g8

0x3218,	// (0x000219df) cell_highlight_pane_g9

0x1400,	// (0x0001fbc7) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002de2e) cell_highlight_pane_g

0x69bb,	// (0x00025182) bg_scroll_pane

0x69da,	// (0x000251a1) scroll_handle_pane

0x6a2b,	// (0x000251f2) scroll_bg_pane_g1

0x6a40,	// (0x00025207) scroll_bg_pane_g2

0x6a58,	// (0x0002521f) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002de85) scroll_bg_pane_g

0x6a6d,	// (0x00025234) scroll_handle_focus_pane_ParamLimits

0x6a6d,	// (0x00025234) scroll_handle_focus_pane

0x6a2b,	// (0x000251f2) scroll_handle_pane_g1

0x6a7a,	// (0x00025241) scroll_handle_pane_g2

0x6a58,	// (0x0002521f) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002de8c) scroll_handle_pane_g

0x3296,	// (0x00021a5d) bg_popup_sub_pane_cp21_ParamLimits

0x3296,	// (0x00021a5d) bg_popup_sub_pane_cp21

0x6a8e,	// (0x00025255) popup_fep_japan_predictive_window_t1_ParamLimits

0x6a8e,	// (0x00025255) popup_fep_japan_predictive_window_t1

0x6aa5,	// (0x0002526c) popup_fep_japan_predictive_window_t2_ParamLimits

0x6aa5,	// (0x0002526c) popup_fep_japan_predictive_window_t2

0x6ad8,	// (0x0002529f) popup_fep_japan_predictive_window_t3_ParamLimits

0x6ad8,	// (0x0002529f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002de93) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002de93) popup_fep_japan_predictive_window_t

0x140a,	// (0x0001fbd1) bg_popup_sub_pane_cp23

0x6b0f,	// (0x000252d6) listscroll_japin_cand_pane

0x6b17,	// (0x000252de) popup_fep_japan_candidate_window_t1

0x6b25,	// (0x000252ec) candidate_pane_ParamLimits

0x6b25,	// (0x000252ec) candidate_pane

0x6b37,	// (0x000252fe) scroll_pane_cp30

0x6b41,	// (0x00025308) list_single_popup_jap_candidate_pane_ParamLimits

0x6b41,	// (0x00025308) list_single_popup_jap_candidate_pane

0x140a,	// (0x0001fbd1) list_highlight_pane_cp30

0x6b55,	// (0x0002531c) list_single_popup_jap_candidate_pane_t1

0x6b64,	// (0x0002532b) level_1_signal

0x6b71,	// (0x00025338) level_2_signal

0x6b7e,	// (0x00025345) level_3_signal

0x6b8b,	// (0x00025352) level_4_signal

0x6b98,	// (0x0002535f) level_5_signal

0x6ba5,	// (0x0002536c) level_6_signal

0x6bb2,	// (0x00025379) level_7_signal

0x6b64,	// (0x0002532b) level_1_battery

0x6b71,	// (0x00025338) level_2_battery

0x6b7e,	// (0x00025345) level_3_battery

0x6b8b,	// (0x00025352) level_4_battery

0x6b98,	// (0x0002535f) level_5_battery

0x6ba5,	// (0x0002536c) level_6_battery

0x6bb2,	// (0x00025379) level_7_battery

0x6bf6,	// (0x000253bd) list_menu_pane_ParamLimits

0x6bf6,	// (0x000253bd) list_menu_pane

0x6c0c,	// (0x000253d3) scroll_pane_cp25_ParamLimits

0x6c0c,	// (0x000253d3) scroll_pane_cp25

0x6c25,	// (0x000253ec) list_double2_graphic_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double2_graphic_pane_cp2

0x6c25,	// (0x000253ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double2_large_graphic_pane_cp2

0x6c25,	// (0x000253ec) list_double2_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double2_pane_cp2

0x6c25,	// (0x000253ec) list_double_graphic_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double_graphic_pane_cp2

0x6c25,	// (0x000253ec) list_double_large_graphic_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double_large_graphic_pane_cp2

0x6c25,	// (0x000253ec) list_double_number_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double_number_pane_cp2

0x6c25,	// (0x000253ec) list_double_pane_cp2_ParamLimits

0x6c25,	// (0x000253ec) list_double_pane_cp2

0x6c4b,	// (0x00025412) list_single_2graphic_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_2graphic_pane_cp2

0x6c4b,	// (0x00025412) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_graphic_heading_pane_cp2

0x6c4b,	// (0x00025412) list_single_graphic_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_graphic_pane_cp2

0x6c4b,	// (0x00025412) list_single_heading_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_heading_pane_cp2

0x6c68,	// (0x0002542f) list_single_large_graphic_pane_cp2_ParamLimits

0x6c68,	// (0x0002542f) list_single_large_graphic_pane_cp2

0x6c4b,	// (0x00025412) list_single_number_heading_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_number_heading_pane_cp2

0x6c4b,	// (0x00025412) list_single_number_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_number_pane_cp2

0x6c78,	// (0x0002543f) list_single_pane_cp2_ParamLimits

0x6c78,	// (0x0002543f) list_single_pane_cp2

0x6d4e,	// (0x00025515) bg_popup_sub_pane_cp22

0x6d73,	// (0x0002553a) popup_side_volume_key_window_g1

0x6d9d,	// (0x00025564) popup_side_volume_key_window_t1

0x6dbb,	// (0x00025582) volume_small_pane_cp1

0x1458,	// (0x0001fc1f) bg_popup_sub_pane_cp24_ParamLimits

0x1458,	// (0x0001fc1f) bg_popup_sub_pane_cp24

0x6dc3,	// (0x0002558a) fep_china_uni_candidate_pane_ParamLimits

0x6dc3,	// (0x0002558a) fep_china_uni_candidate_pane

0x6dd7,	// (0x0002559e) fep_china_uni_entry_pane

0x6de7,	// (0x000255ae) popup_fep_china_uni_window_g1

0x6e03,	// (0x000255ca) fep_china_uni_entry_pane_g1

0x6e0d,	// (0x000255d4) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002dec4) fep_china_uni_entry_pane_g

0x6e17,	// (0x000255de) fep_entry_item_pane

0x6e21,	// (0x000255e8) fep_candidate_item_pane

0x6e29,	// (0x000255f0) fep_china_uni_candidate_pane_g1

0x6e33,	// (0x000255fa) fep_china_uni_candidate_pane_g2

0x6e3b,	// (0x00025602) fep_china_uni_candidate_pane_g3

0x6e43,	// (0x0002560a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002dec9) fep_china_uni_candidate_pane_g

0x1400,	// (0x0001fbc7) fep_entry_item_pane_g1

0x6e4d,	// (0x00025614) fep_entry_item_pane_t1_ParamLimits

0x6e4d,	// (0x00025614) fep_entry_item_pane_t1

0x6e63,	// (0x0002562a) fep_candidate_item_pane_t1_ParamLimits

0x6e63,	// (0x0002562a) fep_candidate_item_pane_t1

0x6e78,	// (0x0002563f) fep_candidate_item_pane_t2_ParamLimits

0x6e78,	// (0x0002563f) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002ded2) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002ded2) fep_candidate_item_pane_t

0x1466,	// (0x0001fc2d) list_highlight_pane_cp31_ParamLimits

0x1466,	// (0x0001fc2d) list_highlight_pane_cp31

0x6e8a,	// (0x00025651) level_1_signal_lsc

0x6e93,	// (0x0002565a) level_2_signal_lsc

0x6e9c,	// (0x00025663) level_3_signal_lsc

0x6ea5,	// (0x0002566c) level_4_signal_lsc

0x6eae,	// (0x00025675) level_5_signal_lsc

0x6eb7,	// (0x0002567e) level_6_signal_lsc

0x6ec0,	// (0x00025687) level_7_signal_lsc

0x6ec0,	// (0x00025687) level_1_battery_lsc

0x6ec9,	// (0x00025690) level_2_battery_lsc

0x6ed2,	// (0x00025699) level_3_battery_lsc

0x6edb,	// (0x000256a2) level_4_battery_lsc

0x6ee4,	// (0x000256ab) level_5_battery_lsc

0x6eed,	// (0x000256b4) level_6_battery_lsc

0x6e8a,	// (0x00025651) level_7_battery_lsc

0x6ef6,	// (0x000256bd) scroll_handle_focus_pane_g1

0x6eff,	// (0x000256c6) scroll_handle_focus_pane_g2

0x6f08,	// (0x000256cf) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002ded7) scroll_handle_focus_pane_g

0x5327,	// (0x00023aee) list_single_2graphic_pane_g1_ParamLimits

0x5327,	// (0x00023aee) list_single_2graphic_pane_g1

0x4c9f,	// (0x00023466) list_single_2graphic_pane_g2_ParamLimits

0x4c9f,	// (0x00023466) list_single_2graphic_pane_g2

0x4c25,	// (0x000233ec) list_single_2graphic_pane_g3_ParamLimits

0x4c25,	// (0x000233ec) list_single_2graphic_pane_g3

0x5333,	// (0x00023afa) list_single_2graphic_pane_g4_ParamLimits

0x5333,	// (0x00023afa) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002dede) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002dede) list_single_2graphic_pane_g

0x533f,	// (0x00023b06) list_single_2graphic_pane_t1_ParamLimits

0x533f,	// (0x00023b06) list_single_2graphic_pane_t1

0x536d,	// (0x00023b34) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x536d,	// (0x00023b34) list_double2_graphic_large_graphic_pane_g1

0x4d44,	// (0x0002350b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d44,	// (0x0002350b) list_double2_graphic_large_graphic_pane_g2

0x4d55,	// (0x0002351c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4d55,	// (0x0002351c) list_double2_graphic_large_graphic_pane_g3

0x537f,	// (0x00023b46) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x537f,	// (0x00023b46) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002dee7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002dee7) list_double2_graphic_large_graphic_pane_g

0x538b,	// (0x00023b52) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x538b,	// (0x00023b52) list_double2_graphic_large_graphic_pane_t1

0x53a1,	// (0x00023b68) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x53a1,	// (0x00023b68) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002def0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002def0) list_double2_graphic_large_graphic_pane_t

0x718c,	// (0x00025953) popup_fast_swap_window_ParamLimits

0x718c,	// (0x00025953) popup_fast_swap_window

0x71aa,	// (0x00025971) popup_side_volume_key_window

0x8ef4,	// (0x000276bb) stacon_top_pane

0x8efe,	// (0x000276c5) status_pane_ParamLimits

0x8efe,	// (0x000276c5) status_pane

0x8f0c,	// (0x000276d3) status_small_pane

0x140a,	// (0x0001fbd1) control_pane

0x140a,	// (0x0001fbd1) stacon_bottom_pane

0x30a8,	// (0x0002186f) scroll_pane_cp121

0x309f,	// (0x00021866) set_content_pane

0x6f11,	// (0x000256d8) bg_active_tab_pane_g1_cp1

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp1

0x6f23,	// (0x000256ea) bg_active_tab_pane_g3_cp1

0x6f11,	// (0x000256d8) bg_passive_tab_pane_g1_cp1

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp1

0x6f23,	// (0x000256ea) bg_passive_tab_pane_g3_cp1

0x6f2c,	// (0x000256f3) bg_active_tab_pane_g1_cp2

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp2

0x6f35,	// (0x000256fc) bg_active_tab_pane_g3_cp2

0x6f2c,	// (0x000256f3) bg_passive_tab_pane_g1_cp2

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp2

0x6f35,	// (0x000256fc) bg_passive_tab_pane_g3_cp2

0x6f3e,	// (0x00025705) bg_active_tab_pane_g1_cp3

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp3

0x6f47,	// (0x0002570e) bg_active_tab_pane_g3_cp3

0x6f3e,	// (0x00025705) bg_passive_tab_pane_g1_cp3

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp3

0x6f47,	// (0x0002570e) bg_passive_tab_pane_g3_cp3

0x6f50,	// (0x00025717) bg_active_tab_pane_g1_cp4

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp4

0x6f5b,	// (0x00025722) bg_active_tab_pane_g3_cp4

0x6f50,	// (0x00025717) bg_passive_tab_pane_g1_cp4

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp4

0x6f5b,	// (0x00025722) bg_passive_tab_pane_g3_cp4

0x70e5,	// (0x000258ac) bg_active_tab_pane_g1_cp5

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp5

0x70ee,	// (0x000258b5) bg_active_tab_pane_g3_cp5

0x70e5,	// (0x000258ac) bg_passive_tab_pane_g1_cp5

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp5

0x70ee,	// (0x000258b5) bg_passive_tab_pane_g3_cp5

0x70f7,	// (0x000258be) list_set_graphic_pane_ParamLimits

0x70f7,	// (0x000258be) list_set_graphic_pane

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp4

0x710d,	// (0x000258d4) list_set_graphic_pane_g1_ParamLimits

0x710d,	// (0x000258d4) list_set_graphic_pane_g1

0x7119,	// (0x000258e0) list_set_graphic_pane_g2_ParamLimits

0x7119,	// (0x000258e0) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002def5) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002def5) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002e271) volume_small_pane_cp_g

0x713d,	// (0x00025904) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x713d,	// (0x00025904) list_double2_large_graphic_pane_g1_cp2

0x714b,	// (0x00025912) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x714b,	// (0x00025912) list_double2_large_graphic_pane_g2_cp2

0x715c,	// (0x00025923) list_double2_large_graphic_pane_g3_cp2

0x7164,	// (0x0002592b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7164,	// (0x0002592b) list_double2_large_graphic_pane_t1_cp2

0x717a,	// (0x00025941) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x717a,	// (0x00025941) list_double2_large_graphic_pane_t2_cp2

0xaa92,	// (0x00029259) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa92,	// (0x00029259) list_double_large_graphic_pane_g1_cp2

0xaaa5,	// (0x0002926c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaa5,	// (0x0002926c) list_double_large_graphic_pane_g2_cp2

0x9027,	// (0x000277ee) list_double_large_graphic_pane_g3_cp2

0xaab6,	// (0x0002927d) list_double_large_graphic_pane_g4_cp

0xaabe,	// (0x00029285) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaabe,	// (0x00029285) list_double_large_graphic_pane_t1_cp2

0xaad5,	// (0x0002929c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaad5,	// (0x0002929c) list_double_large_graphic_pane_t2_cp2

0x8f17,	// (0x000276de) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f17,	// (0x000276de) list_double2_graphic_pane_g1_cp2

0x8f25,	// (0x000276ec) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f25,	// (0x000276ec) list_double2_graphic_pane_g2_cp2

0x8f36,	// (0x000276fd) list_double2_graphic_pane_g3_cp2

0x8f40,	// (0x00027707) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f40,	// (0x00027707) list_double2_graphic_pane_t1_cp2

0x8f56,	// (0x0002771d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f56,	// (0x0002771d) list_double2_graphic_pane_t2_cp2

0x8f68,	// (0x0002772f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f68,	// (0x0002772f) list_single_number_heading_pane_g1_cp2

0x8f74,	// (0x0002773b) list_single_number_heading_pane_g2_cp2

0x8f7c,	// (0x00027743) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f7c,	// (0x00027743) list_single_number_heading_pane_t1_cp2

0x8f92,	// (0x00027759) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f92,	// (0x00027759) list_single_number_heading_pane_t2_cp2

0x8fa6,	// (0x0002776d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fa6,	// (0x0002776d) list_single_number_heading_pane_t3_cp2

0x8f68,	// (0x0002772f) list_single_heading_pane_g1_cp2_ParamLimits

0x8f68,	// (0x0002772f) list_single_heading_pane_g1_cp2

0x8f74,	// (0x0002773b) list_single_heading_pane_g2_cp2

0x8f7c,	// (0x00027743) list_single_heading_pane_t1_cp2_ParamLimits

0x8f7c,	// (0x00027743) list_single_heading_pane_t1_cp2

0xa88c,	// (0x00029053) list_single_heading_pane_t2_cp2_ParamLimits

0xa88c,	// (0x00029053) list_single_heading_pane_t2_cp2

0xa7d4,	// (0x00028f9b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7d4,	// (0x00028f9b) list_double_graphic_pane_g1_cp2

0xa7e0,	// (0x00028fa7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7e0,	// (0x00028fa7) list_double_graphic_pane_g2_cp2

0xa7ef,	// (0x00028fb6) list_double_graphic_pane_g3_cp2

0xa7f7,	// (0x00028fbe) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7f7,	// (0x00028fbe) list_double_graphic_pane_t1_cp2

0xa80d,	// (0x00028fd4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa80d,	// (0x00028fd4) list_double_graphic_pane_t2_cp2

0x901b,	// (0x000277e2) list_double_number_pane_g1_cp2_ParamLimits

0x901b,	// (0x000277e2) list_double_number_pane_g1_cp2

0x9027,	// (0x000277ee) list_double_number_pane_g2_cp2

0xa798,	// (0x00028f5f) list_double_number_pane_t1_cp2_ParamLimits

0xa798,	// (0x00028f5f) list_double_number_pane_t1_cp2

0xa7ac,	// (0x00028f73) list_double_number_pane_t2_cp2_ParamLimits

0xa7ac,	// (0x00028f73) list_double_number_pane_t2_cp2

0xa7c2,	// (0x00028f89) list_double_number_pane_t3_cp2_ParamLimits

0xa7c2,	// (0x00028f89) list_double_number_pane_t3_cp2

0xa681,	// (0x00028e48) list_single_graphic_pane_g1_cp2_ParamLimits

0xa681,	// (0x00028e48) list_single_graphic_pane_g1_cp2

0x908c,	// (0x00027853) list_single_graphic_pane_g2_cp2_ParamLimits

0x908c,	// (0x00027853) list_single_graphic_pane_g2_cp2

0x9098,	// (0x0002785f) list_single_graphic_pane_g3_cp2

0xa657,	// (0x00028e1e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa657,	// (0x00028e1e) list_single_graphic_pane_t1_cp2

0x908c,	// (0x00027853) list_single_number_pane_g1_cp2_ParamLimits

0x908c,	// (0x00027853) list_single_number_pane_g1_cp2

0x9098,	// (0x0002785f) list_single_number_pane_g2_cp2

0xa657,	// (0x00028e1e) list_single_number_pane_t1_cp2_ParamLimits

0xa657,	// (0x00028e1e) list_single_number_pane_t1_cp2

0xa66d,	// (0x00028e34) list_single_number_pane_t2_cp2_ParamLimits

0xa66d,	// (0x00028e34) list_single_number_pane_t2_cp2

0x714b,	// (0x00025912) list_double2_pane_g1_cp2_ParamLimits

0x714b,	// (0x00025912) list_double2_pane_g1_cp2

0x715c,	// (0x00025923) list_double2_pane_g2_cp2

0x8ff3,	// (0x000277ba) list_double2_pane_t1_cp2_ParamLimits

0x8ff3,	// (0x000277ba) list_double2_pane_t1_cp2

0x9009,	// (0x000277d0) list_double2_pane_t2_cp2_ParamLimits

0x9009,	// (0x000277d0) list_double2_pane_t2_cp2

0x901b,	// (0x000277e2) list_double_pane_g1_cp2_ParamLimits

0x901b,	// (0x000277e2) list_double_pane_g1_cp2

0x9027,	// (0x000277ee) list_double_pane_g2_cp2

0x902f,	// (0x000277f6) list_double_pane_t1_cp2_ParamLimits

0x902f,	// (0x000277f6) list_double_pane_t1_cp2

0x9045,	// (0x0002780c) list_double_pane_t2_cp2_ParamLimits

0x9045,	// (0x0002780c) list_double_pane_t2_cp2

0x907c,	// (0x00027843) list_single_pane_cp2_g3

0x908c,	// (0x00027853) list_single_pane_g1_cp2_ParamLimits

0x908c,	// (0x00027853) list_single_pane_g1_cp2

0x9098,	// (0x0002785f) list_single_pane_g2_cp2

0x90a0,	// (0x00027867) list_single_pane_t1_cp2_ParamLimits

0x90a0,	// (0x00027867) list_single_pane_t1_cp2

0x90b8,	// (0x0002787f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90b8,	// (0x0002787f) list_single_large_graphic_pane_g1_cp2

0x90c6,	// (0x0002788d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90c6,	// (0x0002788d) list_single_large_graphic_pane_g2_cp2

0x90d2,	// (0x00027899) list_single_large_graphic_pane_g3_cp2

0x90da,	// (0x000278a1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90da,	// (0x000278a1) list_single_large_graphic_pane_g4_cp1

0x90f4,	// (0x000278bb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90f4,	// (0x000278bb) list_single_large_graphic_pane_t1_cp2

0xa621,	// (0x00028de8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa621,	// (0x00028de8) list_single_graphic_heading_pane_g1_cp2

0xa5ee,	// (0x00028db5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5ee,	// (0x00028db5) list_single_graphic_heading_pane_g4_cp2

0x9098,	// (0x0002785f) list_single_graphic_heading_pane_g5_cp2

0xa62d,	// (0x00028df4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa62d,	// (0x00028df4) list_single_graphic_heading_pane_t1_cp2

0xa643,	// (0x00028e0a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa643,	// (0x00028e0a) list_single_graphic_heading_pane_t2_cp2

0xa5e2,	// (0x00028da9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5e2,	// (0x00028da9) list_single_2graphic_pane_g1_cp2

0xa5ee,	// (0x00028db5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5ee,	// (0x00028db5) list_single_2graphic_pane_g2_cp2

0x9098,	// (0x0002785f) list_single_2graphic_pane_g3_cp2

0xa5ff,	// (0x00028dc6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5ff,	// (0x00028dc6) list_single_2graphic_pane_g4_cp2

0xa60b,	// (0x00028dd2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa60b,	// (0x00028dd2) list_single_2graphic_pane_t1_cp2

0x1400,	// (0x0001fbc7) list_highlight_pane_g10_cp1

0xa1ba,	// (0x00028981) list_highlight_pane_g1_cp1

0xa1c2,	// (0x00028989) list_highlight_pane_g2_cp1

0xa1ca,	// (0x00028991) list_highlight_pane_g3_cp1

0xa1d2,	// (0x00028999) list_highlight_pane_g4_cp1

0xa1da,	// (0x000289a1) list_highlight_pane_g5_cp1

0xa1e2,	// (0x000289a9) list_highlight_pane_g6_cp1

0xa1ea,	// (0x000289b1) list_highlight_pane_g7_cp1

0xa1f2,	// (0x000289b9) list_highlight_pane_g8_cp1

0xa1fa,	// (0x000289c1) list_highlight_pane_g9_cp1

0xa0da,	// (0x000288a1) form_field_slider_pane_t3

0xa0e8,	// (0x000288af) form_field_slider_pane_t4

0xa0f6,	// (0x000288bd) slider_form_pane_ParamLimits

0xa0f6,	// (0x000288bd) slider_form_pane

0x140a,	// (0x0001fbd1) control_abbreviations

0x140a,	// (0x0001fbd1) control_conventions

0x140a,	// (0x0001fbd1) control_definitions

0x140a,	// (0x0001fbd1) format_table_attribute

0xa8e2,	// (0x000290a9) bg_popup_preview_window_pane_g9

0x140a,	// (0x0001fbd1) format_table_data2

0x140a,	// (0x0001fbd1) format_table_data3

0x140a,	// (0x0001fbd1) format_table_data_example

0x0008,

0x140a,	// (0x0001fbd1) intro_purpose

0xf8ca,	// (0x0002e091) bg_popup_preview_window_pane_g

0x140a,	// (0x0001fbd1) texts_category

0x140a,	// (0x0001fbd1) texts_graphics

0x910a,	// (0x000278d1) text_digital

0x9119,	// (0x000278e0) text_primary

0x9128,	// (0x000278ef) text_primary_small

0x9137,	// (0x000278fe) text_secondary

0x9146,	// (0x0002790d) text_title

0xb026,	// (0x000297ed) bg_passive_tab_pane_g1_cp3_srt

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp3_srt

0xb02f,	// (0x000297f6) bg_passive_tab_pane_g3_cp3_srt

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp3_srt_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp3_srt

0xb038,	// (0x000297ff) tabs_4_active_pane_srt_g1

0xb040,	// (0x00029807) tabs_4_active_pane_srt_t1_ParamLimits

0xb040,	// (0x00029807) tabs_4_active_pane_srt_t1

0xb026,	// (0x000297ed) bg_active_tab_pane_g1_cp3_copy1

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp3_copy1

0xb02f,	// (0x000297f6) bg_active_tab_pane_g3_cp3_copy1

0x1466,	// (0x0001fc2d) tabs_2_long_active_pane_srt_ParamLimits

0x1466,	// (0x0001fc2d) tabs_2_long_active_pane_srt

0x1466,	// (0x0001fc2d) tabs_2_long_passive_pane_srt_ParamLimits

0x1466,	// (0x0001fc2d) tabs_2_long_passive_pane_srt

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp4_srt_ParamLimits

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp4_srt

0xad1c,	// (0x000294e3) bg_passive_tab_pane_g1_cp4_srt

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp4_srt

0xad25,	// (0x000294ec) bg_passive_tab_pane_g3_cp4_srt

0x656a,	// (0x00024d31) bg_active_tab_pane_cp4_srt_ParamLimits

0x656a,	// (0x00024d31) bg_active_tab_pane_cp4_srt

0xad2e,	// (0x000294f5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad2e,	// (0x000294f5) tabs_2_long_active_pane_srt_t1

0xad1c,	// (0x000294e3) bg_active_tab_pane_g1_cp4_srt

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp4_srt

0xad25,	// (0x000294ec) bg_active_tab_pane_g3_cp4_srt

0x1458,	// (0x0001fc1f) tabs_3_long_active_pane_srt_ParamLimits

0x1458,	// (0x0001fc1f) tabs_3_long_active_pane_srt

0x1458,	// (0x0001fc1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1458,	// (0x0001fc1f) tabs_3_long_passive_pane_cp_srt

0x1458,	// (0x0001fc1f) tabs_3_long_passive_pane_srt_ParamLimits

0x1458,	// (0x0001fc1f) tabs_3_long_passive_pane_srt

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp5_srt_ParamLimits

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp5_srt

0x70e5,	// (0x000258ac) bg_passive_tab_pane_g1_cp5_srt

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp5_srt

0x70ee,	// (0x000258b5) bg_passive_tab_pane_g3_cp5_srt

0x656a,	// (0x00024d31) bg_active_tab_pane_cp5_srt_ParamLimits

0x656a,	// (0x00024d31) bg_active_tab_pane_cp5_srt

0xad0a,	// (0x000294d1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad0a,	// (0x000294d1) tabs_3_long_active_pane_srt_t1

0x70e5,	// (0x000258ac) bg_active_tab_pane_g1_cp5_srt

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp5_srt

0x70ee,	// (0x000258b5) bg_active_tab_pane_g3_cp5_srt

0xacfc,	// (0x000294c3) navi_text_pane_srt_t1

0xacf4,	// (0x000294bb) navi_icon_pane_srt_g1

0x931e,	// (0x00027ae5) midp_editing_number_pane_srt

0x9155,	// (0x0002791c) midp_ticker_pane_srt

0x9326,	// (0x00027aed) midp_ticker_pane_srt_g1

0x932e,	// (0x00027af5) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002df14) midp_ticker_pane_srt_g

0x9336,	// (0x00027afd) midp_ticker_pane_srt_t1

0xace5,	// (0x000294ac) midp_editing_number_pane_t1_copy1

0x915d,	// (0x00027924) listscroll_midp_pane

0x915d,	// (0x00027924) midp_form_pane

0x91cc,	// (0x00027993) midp_info_popup_window_ParamLimits

0x91cc,	// (0x00027993) midp_info_popup_window

0x3296,	// (0x00021a5d) bg_popup_sub_pane_cp50_ParamLimits

0x3296,	// (0x00021a5d) bg_popup_sub_pane_cp50

0x9ddc,	// (0x000285a3) listscroll_midp_info_pane_ParamLimits

0x9ddc,	// (0x000285a3) listscroll_midp_info_pane

0x9dbc,	// (0x00028583) listscroll_form_midp_pane_ParamLimits

0x9dbc,	// (0x00028583) listscroll_form_midp_pane

0x9dc8,	// (0x0002858f) scroll_bar_cp050

0x9d9c,	// (0x00028563) list_midp_pane

0xbada,	// (0x0002a2a1) signal_pane_g2_cp

0x9cd6,	// (0x0002849d) listscroll_midp_info_pane_t1_ParamLimits

0x9cd6,	// (0x0002849d) listscroll_midp_info_pane_t1

0x9cee,	// (0x000284b5) listscroll_midp_info_pane_t2_ParamLimits

0x9cee,	// (0x000284b5) listscroll_midp_info_pane_t2

0x9d2c,	// (0x000284f3) listscroll_midp_info_pane_t3_ParamLimits

0x9d2c,	// (0x000284f3) listscroll_midp_info_pane_t3

0x9d66,	// (0x0002852d) listscroll_midp_info_pane_t4_ParamLimits

0x9d66,	// (0x0002852d) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002dfcc) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002dfcc) listscroll_midp_info_pane_t

0x32eb,	// (0x00021ab2) scroll_pane_cp21

0x9c70,	// (0x00028437) form_midp_field_choice_group_pane

0x9c79,	// (0x00028440) form_midp_field_text_pane

0x9cbc,	// (0x00028483) form_midp_field_time_pane

0x9cc4,	// (0x0002848b) form_midp_gauge_slider_pane

0x9ccd,	// (0x00028494) form_midp_gauge_wait_pane

0x140a,	// (0x0001fbd1) form_midp_image_pane

0x5544,	// (0x00023d0b) list_single_midp_pane_ParamLimits

0x5544,	// (0x00023d0b) list_single_midp_pane

0x9c34,	// (0x000283fb) form_midp_field_text_pane_t1

0x9a26,	// (0x000281ed) input_focus_pane_cp050

0x9c5f,	// (0x00028426) list_midp_form_text_pane

0x9c03,	// (0x000283ca) form_midp_field_choice_group_pane_t1

0x9c11,	// (0x000283d8) input_focus_pane_cp051

0x9c25,	// (0x000283ec) list_midp_choice_pane

0x140a,	// (0x0001fbd1) status_idle_pane

0x9be7,	// (0x000283ae) form_midp_field_time_pane_t1

0x1400,	// (0x0001fbc7) wait_anim_pane_g2_copy1

0x9bf5,	// (0x000283bc) form_midp_field_time_pane_t2

0x0001,

0x927c,	// (0x00027a43) aid_navinavi_width_2_pane

0xf800,	// (0x0002dfc7) form_midp_field_time_pane_t

0x140a,	// (0x0001fbd1) input_focus_pane_cp052

0x140a,	// (0x0001fbd1) bg_input_focus_pane_cp040

0x9ba7,	// (0x0002836e) form_midp_gauge_slider_pane_t1

0x9bb5,	// (0x0002837c) form_midp_gauge_slider_pane_t2

0x9bc3,	// (0x0002838a) form_midp_gauge_slider_pane_t3

0x9bd1,	// (0x00028398) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002dfbe) form_midp_gauge_slider_pane_t

0x9bdf,	// (0x000283a6) form_midp_slider_pane

0x1466,	// (0x0001fc2d) bg_input_focus_pane_cp041_ParamLimits

0x1466,	// (0x0001fc2d) bg_input_focus_pane_cp041

0x9b74,	// (0x0002833b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b74,	// (0x0002833b) form_midp_gauge_wait_pane_t1

0x9b86,	// (0x0002834d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b86,	// (0x0002834d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002dfb9) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002dfb9) form_midp_gauge_wait_pane_t

0x9b98,	// (0x0002835f) form_midp_wait_pane_ParamLimits

0x9b98,	// (0x0002835f) form_midp_wait_pane

0x9b3c,	// (0x00028303) form_midp_image_pane_g1

0x9b45,	// (0x0002830c) form_midp_image_pane_t1

0x9b54,	// (0x0002831b) form_midp_image_pane_t2

0x9b63,	// (0x0002832a) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002dfb2) form_midp_image_pane_t

0x9b33,	// (0x000282fa) list_single_midp_pane_g1

0x5535,	// (0x00023cfc) list_single_midp_pane_t1

0x9b19,	// (0x000282e0) list_midp_form_item_pane_ParamLimits

0x9b19,	// (0x000282e0) list_midp_form_item_pane

0x9224,	// (0x000279eb) list_midp_form_item_pane_t1

0x9233,	// (0x000279fa) midp_ticker_pane_g1

0x923f,	// (0x00027a06) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002defa) midp_ticker_pane_g

0x924b,	// (0x00027a12) midp_ticker_pane_t1

0xaf52,	// (0x00029719) midp_editing_number_pane_t1

0xaf30,	// (0x000296f7) midp_editing_number_pane

0xaf3f,	// (0x00029706) midp_ticker_pane

0xacd5,	// (0x0002949c) ai_message_heading_pane

0x140a,	// (0x0001fbd1) bg_popup_window_pane_cp14

0xacdd,	// (0x000294a4) listscroll_ai_message_pane

0xac5b,	// (0x00029422) ai_message_heading_pane_g1_ParamLimits

0xac5b,	// (0x00029422) ai_message_heading_pane_g1

0xac67,	// (0x0002942e) ai_message_heading_pane_g2_ParamLimits

0xac67,	// (0x0002942e) ai_message_heading_pane_g2

0xac75,	// (0x0002943c) ai_message_heading_pane_g3_ParamLimits

0xac75,	// (0x0002943c) ai_message_heading_pane_g3

0xac81,	// (0x00029448) ai_message_heading_pane_g4_ParamLimits

0xac81,	// (0x00029448) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002e0f3) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002e0f3) ai_message_heading_pane_g

0xac8d,	// (0x00029454) ai_message_heading_pane_t1_ParamLimits

0xac8d,	// (0x00029454) ai_message_heading_pane_t1

0xaca7,	// (0x0002946e) ai_message_heading_pane_t2_ParamLimits

0xaca7,	// (0x0002946e) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002e0fc) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002e0fc) ai_message_heading_pane_t

0xacbb,	// (0x00029482) bg_popup_heading_pane_cp1_ParamLimits

0xacbb,	// (0x00029482) bg_popup_heading_pane_cp1

0xac49,	// (0x00029410) list_ai_message_pane_ParamLimits

0xac49,	// (0x00029410) list_ai_message_pane

0x32eb,	// (0x00021ab2) scroll_pane_cp10

0xabe5,	// (0x000293ac) list_ai_message_pane_g1

0xabed,	// (0x000293b4) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002e0d0) list_ai_message_pane_g

0xabf5,	// (0x000293bc) list_ai_message_pane_t1_ParamLimits

0xabf5,	// (0x000293bc) list_ai_message_pane_t1

0xac0a,	// (0x000293d1) list_ai_message_pane_t2_ParamLimits

0xac0a,	// (0x000293d1) list_ai_message_pane_t2

0xac1f,	// (0x000293e6) list_ai_message_pane_t3_ParamLimits

0xac1f,	// (0x000293e6) list_ai_message_pane_t3

0xac34,	// (0x000293fb) list_ai_message_pane_t4_ParamLimits

0xac34,	// (0x000293fb) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002e0d5) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002e0d5) list_ai_message_pane_t

0xabce,	// (0x00029395) cell_ai_soft_ind_pane_ParamLimits

0xabce,	// (0x00029395) cell_ai_soft_ind_pane

0x925d,	// (0x00027a24) cell_ai_soft_ind_pane_g1_ParamLimits

0x925d,	// (0x00027a24) cell_ai_soft_ind_pane_g1

0x140a,	// (0x0001fbd1) grid_highlight_cp1

0x926a,	// (0x00027a31) text_secondary_cp56_ParamLimits

0x926a,	// (0x00027a31) text_secondary_cp56

0xaba3,	// (0x0002936a) example_general_pane_ParamLimits

0xaba3,	// (0x0002936a) example_general_pane

0xabaf,	// (0x00029376) example_parent_pane_g1_ParamLimits

0xabaf,	// (0x00029376) example_parent_pane_g1

0xabbb,	// (0x00029382) example_parent_pane_t1_ParamLimits

0xabbb,	// (0x00029382) example_parent_pane_t1

0x77aa,	// (0x00025f71) popup_preview_text_window_ParamLimits

0x77aa,	// (0x00025f71) popup_preview_text_window

0x9084,	// (0x0002784b) list_single_pane_cp2_g4

0x1681,	// (0x0001fe48) bg_popup_preview_window_pane_ParamLimits

0x1681,	// (0x0001fe48) bg_popup_preview_window_pane

0xa8ec,	// (0x000290b3) popup_preview_text_window_t1_ParamLimits

0xa8ec,	// (0x000290b3) popup_preview_text_window_t1

0xa90a,	// (0x000290d1) popup_preview_text_window_t2_ParamLimits

0xa90a,	// (0x000290d1) popup_preview_text_window_t2

0xa953,	// (0x0002911a) popup_preview_text_window_t3_ParamLimits

0xa953,	// (0x0002911a) popup_preview_text_window_t3

0xa998,	// (0x0002915f) popup_preview_text_window_t4_ParamLimits

0xa998,	// (0x0002915f) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002e0a4) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002e0a4) popup_preview_text_window_t

0xaa16,	// (0x000291dd) scroll_pane_cp11

0x99b2,	// (0x00028179) bg_popup_preview_window_pane_g1

0xa8a0,	// (0x00029067) bg_popup_preview_window_pane_g2

0xa8aa,	// (0x00029071) bg_popup_preview_window_pane_g3

0xa8b4,	// (0x0002907b) bg_popup_preview_window_pane_g4

0xa8be,	// (0x00029085) bg_popup_preview_window_pane_g5

0xa8c8,	// (0x0002908f) bg_popup_preview_window_pane_g6

0xa8d0,	// (0x00029097) bg_popup_preview_window_pane_g7

0xa8d8,	// (0x0002909f) bg_popup_preview_window_pane_g8

0x5d86,	// (0x0002454d) aid_popup_width_pane

0x7786,	// (0x00025f4d) popup_midp_note_alarm_window_ParamLimits

0x7786,	// (0x00025f4d) popup_midp_note_alarm_window

0x3111,	// (0x000218d8) data_form_pane_ParamLimits

0x5176,	// (0x0002393d) form_field_data_pane_g1

0x5180,	// (0x00023947) form_field_data_pane_t1_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_ParamLimits

0x519a,	// (0x00023961) data_form_wide_pane_ParamLimits

0x51ab,	// (0x00023972) form_field_data_wide_pane_g1

0x51b7,	// (0x0002397e) form_field_data_wide_pane_t1_ParamLimits

0x2e11,	// (0x000215d8) input_focus_pane_cp6_ParamLimits

0x6542,	// (0x00024d09) input_popup_find_pane_g1_ParamLimits

0x6542,	// (0x00024d09) input_popup_find_pane_g1

0x6847,	// (0x0002500e) aid_navi_side_left_pane

0x685c,	// (0x00025023) aid_navi_side_right_pane

0xa2b5,	// (0x00028a7c) bg_popup_window_pane_cp30_ParamLimits

0xa2b5,	// (0x00028a7c) bg_popup_window_pane_cp30

0xa32f,	// (0x00028af6) popup_midp_note_alarm_window_g1_ParamLimits

0xa32f,	// (0x00028af6) popup_midp_note_alarm_window_g1

0xa35f,	// (0x00028b26) popup_midp_note_alarm_window_t1_ParamLimits

0xa35f,	// (0x00028b26) popup_midp_note_alarm_window_t1

0xa400,	// (0x00028bc7) popup_midp_note_alarm_window_t2_ParamLimits

0xa400,	// (0x00028bc7) popup_midp_note_alarm_window_t2

0xa4ae,	// (0x00028c75) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ae,	// (0x00028c75) popup_midp_note_alarm_window_t3

0xa4e0,	// (0x00028ca7) popup_midp_note_alarm_window_t4_ParamLimits

0xa4e0,	// (0x00028ca7) popup_midp_note_alarm_window_t4

0xa506,	// (0x00028ccd) popup_midp_note_alarm_window_t5_ParamLimits

0xa506,	// (0x00028ccd) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002e041) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002e041) popup_midp_note_alarm_window_t

0xa5b2,	// (0x00028d79) wait_bar_pane_cp1_ParamLimits

0xa5b2,	// (0x00028d79) wait_bar_pane_cp1

0x140a,	// (0x0001fbd1) wait_anim_pane_copy1

0x140a,	// (0x0001fbd1) wait_border_pane_copy1

0x9f9a,	// (0x00028761) wait_border_pane_g1_copy1

0x51d1,	// (0x00023998) form_field_popup_pane_g1

0x51d9,	// (0x000239a0) form_field_popup_pane_t1_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_cp7_ParamLimits

0x3182,	// (0x00021949) list_form_pane_ParamLimits

0x51f3,	// (0x000239ba) form_field_popup_wide_pane_g1

0x51fb,	// (0x000239c2) form_field_popup_wide_pane_t1_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_cp8_ParamLimits

0x31a8,	// (0x0002196f) list_form_wide_pane_ParamLimits

0xb0c1,	// (0x00029888) aid_size_cell_graphic_pane

0x5287,	// (0x00023a4e) data_form_pane_t1_ParamLimits

0x558c,	// (0x00023d53) data_form_wide_pane_t1_ParamLimits

0x956b,	// (0x00027d32) bg_status_flat_pane

0x61ab,	// (0x00024972) title_pane_t1_ParamLimits

0x1420,	// (0x0001fbe7) title_pane_t2_ParamLimits

0x1446,	// (0x0001fc0d) title_pane_t3_ParamLimits

0xf532,	// (0x0002dcf9) title_pane_t_ParamLimits

0x6b64,	// (0x0002532b) level_1_signal_ParamLimits

0x6b71,	// (0x00025338) level_2_signal_ParamLimits

0x6b7e,	// (0x00025345) level_3_signal_ParamLimits

0x6b8b,	// (0x00025352) level_4_signal_ParamLimits

0x6b98,	// (0x0002535f) level_5_signal_ParamLimits

0x6ba5,	// (0x0002536c) level_6_signal_ParamLimits

0x6bb2,	// (0x00025379) level_7_signal_ParamLimits

0x6b64,	// (0x0002532b) level_1_battery_ParamLimits

0x6b71,	// (0x00025338) level_2_battery_ParamLimits

0x6b7e,	// (0x00025345) level_3_battery_ParamLimits

0x6b8b,	// (0x00025352) level_4_battery_ParamLimits

0x6b98,	// (0x0002535f) level_5_battery_ParamLimits

0x6ba5,	// (0x0002536c) level_6_battery_ParamLimits

0x6bb2,	// (0x00025379) level_7_battery_ParamLimits

0xa1ba,	// (0x00028981) bg_status_flat_pane_g1

0xa1c2,	// (0x00028989) bg_status_flat_pane_g2

0xa1ca,	// (0x00028991) bg_status_flat_pane_g3

0xa1d2,	// (0x00028999) bg_status_flat_pane_g4

0xa1da,	// (0x000289a1) bg_status_flat_pane_g5

0xa1e2,	// (0x000289a9) bg_status_flat_pane_g6

0xa1ea,	// (0x000289b1) bg_status_flat_pane_g7

0x621b,	// (0x000249e2) tabs_3_active_pane_t1_ParamLimits

0x621b,	// (0x000249e2) tabs_3_passive_pane_t1_ParamLimits

0x6235,	// (0x000249fc) tabs_4_active_pane_t1_ParamLimits

0x6235,	// (0x000249fc) tabs_4_1_passive_pane_t1_ParamLimits

0x6558,	// (0x00024d1f) tabs_2_active_pane_t1_ParamLimits

0x6558,	// (0x00024d1f) tabs_2_passive_pane_t1_ParamLimits

0x656a,	// (0x00024d31) bg_active_tab_pane_cp4_ParamLimits

0x6578,	// (0x00024d3f) tabs_2_long_active_pane_t1_ParamLimits

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp4_ParamLimits

0x7a8e,	// (0x00026255) list_single_midp_graphic_pane_t1_ParamLimits

0x656a,	// (0x00024d31) bg_active_tab_pane_cp5_ParamLimits

0x6597,	// (0x00024d5e) tabs_3_long_active_pane_t1_ParamLimits

0x658b,	// (0x00024d52) bg_passive_tab_pane_cp5_ParamLimits

0x7a8e,	// (0x00026255) list_single_midp_graphic_pane_t1

0x956b,	// (0x00027d32) bg_status_flat_pane_ParamLimits

0x9636,	// (0x00027dfd) indicator_pane_cp2_ParamLimits

0x9636,	// (0x00027dfd) indicator_pane_cp2

0x9779,	// (0x00027f40) navi_pane_srt_ParamLimits

0x9779,	// (0x00027f40) navi_pane_srt

0x979d,	// (0x00027f64) popup_clock_digital_analogue_window_cp1

0x14c4,	// (0x0001fc8b) indicator_pane_t1

0x9155,	// (0x0002791c) copy_highlight_pane

0x9155,	// (0x0002791c) cursor_graphics_pane

0x9155,	// (0x0002791c) graphic_within_text_pane

0x9155,	// (0x0002791c) link_highlight_pane

0xa9d9,	// (0x000291a0) popup_preview_text_window_t5_ParamLimits

0xa9d9,	// (0x000291a0) popup_preview_text_window_t5

0x9286,	// (0x00027a4d) cursor_digital_pane

0x9286,	// (0x00027a4d) cursor_primary_pane

0x9297,	// (0x00027a5e) cursor_primary_small_pane

0x929f,	// (0x00027a66) cursor_secondary_pane

0x92a7,	// (0x00027a6e) cursor_title_pane

0x9286,	// (0x00027a4d) link_highlight_digital_pane

0x928e,	// (0x00027a55) link_highlight_primary_pane

0x9297,	// (0x00027a5e) link_highlight_primary_small_pane

0x929f,	// (0x00027a66) link_highlight_secondary_pane

0x92a7,	// (0x00027a6e) link_highlight_title_pane

0x9286,	// (0x00027a4d) copy_highlight_digital_pane

0x9286,	// (0x00027a4d) copy_highlight_primary_pane

0x9297,	// (0x00027a5e) copy_highlight_primary_small_pane

0x929f,	// (0x00027a66) copy_highlight_secondary_pane

0x92a7,	// (0x00027a6e) copy_highlight_title_pane

0x929f,	// (0x00027a66) graphic_text_digital_pane

0xa258,	// (0x00028a1f) graphic_text_primary_pane

0xa261,	// (0x00028a28) graphic_text_primary_small_pane

0x9297,	// (0x00027a5e) graphic_text_secondary_pane

0x9286,	// (0x00027a4d) graphic_text_title_pane

0x92af,	// (0x00027a76) cursor_primary_pane_g1

0xa24a,	// (0x00028a11) cursor_text_primary_t1

0xa232,	// (0x000289f9) cursor_primary_small_pane_g1

0xa23c,	// (0x00028a03) cursor_text_primary_small_t1

0xa21a,	// (0x000289e1) cursor_primary_small_pane_g1_copy1

0xa224,	// (0x000289eb) cursor_text_primary_small_t1_copy1

0xa202,	// (0x000289c9) cursor_text_title_t1

0xa210,	// (0x000289d7) cursor_title_pane_g1

0x92af,	// (0x00027a76) cursor_digital_pane_g1

0x92b9,	// (0x00027a80) cursor_text_digital_t1

0x92c7,	// (0x00027a8e) link_highlight_primary_pane_g1

0xa1ab,	// (0x00028972) link_highlight_primary_pane_t1

0x92c7,	// (0x00027a8e) link_highlight_primary_small_pane_g1

0x92cf,	// (0x00027a96) link_highlight_primary_small_pane_t1

0x92de,	// (0x00027aa5) link_highlight_secondary_pane_g1

0x92e6,	// (0x00027aad) link_highlight_secondary_pane_t1

0xa11f,	// (0x000288e6) link_highlight_title_pane_g1

0xa127,	// (0x000288ee) link_highlight_title_pane_t1

0xa108,	// (0x000288cf) link_highlight_digital_pane_g1

0xa110,	// (0x000288d7) link_highlight_digital_pane_t1

0x9fd0,	// (0x00028797) copy_highlight_primary_pane_g1

0x9fe7,	// (0x000287ae) copy_highlight_primary_pane_t1

0x9fd0,	// (0x00028797) copy_highlight_primary_small_pane_g1

0x9fd8,	// (0x0002879f) copy_highlight_primary_small_pane_t1

0x92f5,	// (0x00027abc) copy_highlight_secondary_pane_g1

0x92fd,	// (0x00027ac4) copy_highlight_secondary_pane_t1

0x9fb9,	// (0x00028780) copy_highlight_title_pane_g1

0x9fc1,	// (0x00028788) copy_highlight_title_pane_t1

0x9fd0,	// (0x00028797) copy_highlight_digital_pane_g1

0xb293,	// (0x00029a5a) copy_highlight_digital_pane_t1

0xb1e7,	// (0x000299ae) graphic_text_primary_pane_g1

0xb277,	// (0x00029a3e) graphic_text_primary_pane_t1

0xb285,	// (0x00029a4c) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002e170) graphic_text_primary_pane_t

0xb253,	// (0x00029a1a) graphic_text_primary_small_pane_g1

0xb25b,	// (0x00029a22) graphic_text_primary_small_pane_t1

0xb269,	// (0x00029a30) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002e16b) graphic_text_primary_small_pane_t

0xb22f,	// (0x000299f6) graphic_text_secondary_pane_g1

0xb237,	// (0x000299fe) graphic_text_secondary_pane_t1

0xb245,	// (0x00029a0c) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002e166) graphic_text_secondary_pane_t

0xb20b,	// (0x000299d2) graphic_text_title_pane_g1

0xb213,	// (0x000299da) graphic_text_title_pane_t1

0xb221,	// (0x000299e8) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002e161) graphic_text_title_pane_t

0xb1e7,	// (0x000299ae) graphic_text_digital_pane_g1

0xb1ef,	// (0x000299b6) graphic_text_digital_pane_t1

0xb1fd,	// (0x000299c4) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002e15c) graphic_text_digital_pane_t

0x1466,	// (0x0001fc2d) navi_icon_pane_srt_ParamLimits

0x1466,	// (0x0001fc2d) navi_icon_pane_srt

0x140a,	// (0x0001fbd1) navi_midp_pane_srt

0x140a,	// (0x0001fbd1) navi_navi_pane_srt

0x1466,	// (0x0001fc2d) navi_text_pane_srt_ParamLimits

0x1466,	// (0x0001fc2d) navi_text_pane_srt

0xb1b2,	// (0x00029979) navi_navi_icon_text_pane_srt

0xb1ba,	// (0x00029981) navi_navi_pane_srt_g1_ParamLimits

0xb1ba,	// (0x00029981) navi_navi_pane_srt_g1

0xb1cc,	// (0x00029993) navi_navi_pane_srt_g2_ParamLimits

0xb1cc,	// (0x00029993) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002e157) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002e157) navi_navi_pane_srt_g

0xb1de,	// (0x000299a5) navi_navi_tabs_pane_srt

0xb1b2,	// (0x00029979) navi_navi_text_pane_srt

0xb1b2,	// (0x00029979) navi_navi_volume_pane_srt

0xb1a3,	// (0x0002996a) navi_navi_text_pane_srt_t1

0x7e2a,	// (0x000265f1) navi_navi_volume_pane_srt_g1

0x7e32,	// (0x000265f9) volume_small_pane_srt_ParamLimits

0x7e32,	// (0x000265f9) volume_small_pane_srt

0x71c8,	// (0x0002598f) volume_small_pane_srt_g1_ParamLimits

0x71c8,	// (0x0002598f) volume_small_pane_srt_g1

0x71d8,	// (0x0002599f) volume_small_pane_srt_g2_ParamLimits

0x71d8,	// (0x0002599f) volume_small_pane_srt_g2

0x71e9,	// (0x000259b0) volume_small_pane_srt_g3_ParamLimits

0x71e9,	// (0x000259b0) volume_small_pane_srt_g3

0x71fa,	// (0x000259c1) volume_small_pane_srt_g4_ParamLimits

0x71fa,	// (0x000259c1) volume_small_pane_srt_g4

0x720b,	// (0x000259d2) volume_small_pane_srt_g5_ParamLimits

0x720b,	// (0x000259d2) volume_small_pane_srt_g5

0x721c,	// (0x000259e3) volume_small_pane_srt_g6_ParamLimits

0x721c,	// (0x000259e3) volume_small_pane_srt_g6

0x722d,	// (0x000259f4) volume_small_pane_srt_g7_ParamLimits

0x722d,	// (0x000259f4) volume_small_pane_srt_g7

0x723e,	// (0x00025a05) volume_small_pane_srt_g8_ParamLimits

0x723e,	// (0x00025a05) volume_small_pane_srt_g8

0x724f,	// (0x00025a16) volume_small_pane_srt_g9_ParamLimits

0x724f,	// (0x00025a16) volume_small_pane_srt_g9

0x7260,	// (0x00025a27) volume_small_pane_srt_g10_ParamLimits

0x7260,	// (0x00025a27) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002deff) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002deff) volume_small_pane_srt_g

0x1736,	// (0x0001fefd) query_popup_data_pane_cp2

0xb189,	// (0x00029950) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb189,	// (0x00029950) navi_navi_icon_text_pane_srt_t1

0xa258,	// (0x00028a1f) navi_tabs_2_long_pane_srt

0xa258,	// (0x00028a1f) navi_tabs_2_pane_srt

0xa258,	// (0x00028a1f) navi_tabs_3_long_pane_srt

0xa258,	// (0x00028a1f) navi_tabs_3_pane_srt

0xa258,	// (0x00028a1f) navi_tabs_4_pane_srt

0x7e0a,	// (0x000265d1) tabs_2_active_pane_srt_ParamLimits

0x7e0a,	// (0x000265d1) tabs_2_active_pane_srt

0x7e1a,	// (0x000265e1) tabs_2_passive_pane_srt_ParamLimits

0x7e1a,	// (0x000265e1) tabs_2_passive_pane_srt

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp1_srt_ParamLimits

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp1_srt

0xb155,	// (0x0002991c) bg_passive_tab_pane_g1_cp1_srt

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp1_srt

0xb15e,	// (0x00029925) bg_passive_tab_pane_g3_cp1_srt

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp1_srt_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp1_srt

0xb167,	// (0x0002992e) tabs_2_active_pane_srt_g1

0xb16f,	// (0x00029936) tabs_2_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x00029936) tabs_2_active_pane_srt_t1

0xb155,	// (0x0002991c) bg_active_tab_pane_g1_cp1_srt

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp1_srt

0xb15e,	// (0x00029925) bg_active_tab_pane_g3_cp1_srt

0x7dd7,	// (0x0002659e) tabs_3_active_pane_srt_ParamLimits

0x7dd7,	// (0x0002659e) tabs_3_active_pane_srt

0x7de8,	// (0x000265af) tabs_3_passive_pane_cp_srt_ParamLimits

0x7de8,	// (0x000265af) tabs_3_passive_pane_cp_srt

0x7df9,	// (0x000265c0) tabs_3_passive_pane_srt_ParamLimits

0x7df9,	// (0x000265c0) tabs_3_passive_pane_srt

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp2_srt_ParamLimits

0x947c,	// (0x00027c43) bg_passive_tab_pane_cp2_srt

0x930c,	// (0x00027ad3) bg_passive_tab_pane_g1_cp2_srt

0x6f1a,	// (0x000256e1) bg_passive_tab_pane_g2_cp2_srt

0x9315,	// (0x00027adc) bg_passive_tab_pane_g3_cp2_srt

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp2_srt_ParamLimits

0x1466,	// (0x0001fc2d) bg_active_tab_pane_cp2_srt

0xb13b,	// (0x00029902) tabs_3_active_pane_srt_g1

0xb143,	// (0x0002990a) tabs_3_active_pane_srt_t1_ParamLimits

0xb143,	// (0x0002990a) tabs_3_active_pane_srt_t1

0x930c,	// (0x00027ad3) bg_active_tab_pane_g1_cp2_srt

0x6f1a,	// (0x000256e1) bg_active_tab_pane_g2_cp2_srt

0x9315,	// (0x00027adc) bg_active_tab_pane_g3_cp2_srt

0x7d8f,	// (0x00026556) tabs_4_active_pane_srt_ParamLimits

0x7d8f,	// (0x00026556) tabs_4_active_pane_srt

0x7da1,	// (0x00026568) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7da1,	// (0x00026568) tabs_4_passive_pane_cp2_srt

0x73e3,	// (0x00025baa) aid_size_cell_toolbar

0x658b,	// (0x00024d52) main_idle_act_pane_ParamLimits

0x75ac,	// (0x00025d73) popup_large_graphic_colour_window_ParamLimits

0x7953,	// (0x0002611a) popup_toolbar_window_ParamLimits

0x7953,	// (0x0002611a) popup_toolbar_window

0xaf78,	// (0x0002973f) list_single_graphic_2heading_pane_ParamLimits

0xaf78,	// (0x0002973f) list_single_graphic_2heading_pane

0x68d5,	// (0x0002509c) aid_size_cell_apps_grid_lsc_pane

0x68e7,	// (0x000250ae) aid_size_cell_apps_grid_prt_pane

0x947c,	// (0x00027c43) bg_wml_button_pane_cp1_ParamLimits

0x947c,	// (0x00027c43) bg_wml_button_pane_cp1

0x9c34,	// (0x000283fb) form_midp_field_text_pane_t1_ParamLimits

0x9a26,	// (0x000281ed) input_focus_pane_cp050_ParamLimits

0x9c5f,	// (0x00028426) list_midp_form_text_pane_ParamLimits

0x9c11,	// (0x000283d8) input_focus_pane_cp051_ParamLimits

0x9c25,	// (0x000283ec) list_midp_choice_pane_ParamLimits

0x9adf,	// (0x000282a6) list_single_2graphic_pane_cp3_ParamLimits

0x9adf,	// (0x000282a6) list_single_2graphic_pane_cp3

0x9af5,	// (0x000282bc) list_single_midp_graphic_pane_ParamLimits

0x9af5,	// (0x000282bc) list_single_midp_graphic_pane

0x53df,	// (0x00023ba6) list_single_graphic_2heading_pane_g1_ParamLimits

0x53df,	// (0x00023ba6) list_single_graphic_2heading_pane_g1

0x53eb,	// (0x00023bb2) list_single_graphic_2heading_pane_g4_ParamLimits

0x53eb,	// (0x00023bb2) list_single_graphic_2heading_pane_g4

0x53f7,	// (0x00023bbe) list_single_graphic_2heading_pane_g5_ParamLimits

0x53f7,	// (0x00023bbe) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002df52) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002df52) list_single_graphic_2heading_pane_g

0x5403,	// (0x00023bca) list_single_graphic_2heading_pane_t1_ParamLimits

0x5403,	// (0x00023bca) list_single_graphic_2heading_pane_t1

0x5417,	// (0x00023bde) list_single_graphic_2heading_pane_t2_ParamLimits

0x5417,	// (0x00023bde) list_single_graphic_2heading_pane_t2

0x5433,	// (0x00023bfa) list_single_graphic_2heading_pane_t3_ParamLimits

0x5433,	// (0x00023bfa) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002df59) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002df59) list_single_graphic_2heading_pane_t

0x98f0,	// (0x000280b7) bg_popup_sub_pane_cp2

0x991a,	// (0x000280e1) grid_toobar_pane

0x7a12,	// (0x000261d9) cell_toolbar_pane_ParamLimits

0x7a12,	// (0x000261d9) cell_toolbar_pane

0x9956,	// (0x0002811d) cell_toolbar_pane_g1_ParamLimits

0x9956,	// (0x0002811d) cell_toolbar_pane_g1

0x996a,	// (0x00028131) cell_toolbar_pane_g2_ParamLimits

0x996a,	// (0x00028131) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002df67) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002df67) cell_toolbar_pane_g

0x998c,	// (0x00028153) grid_highlight_pane_cp2_ParamLimits

0x998c,	// (0x00028153) grid_highlight_pane_cp2

0x99a6,	// (0x0002816d) toolbar_button_pane

0x99b2,	// (0x00028179) toolbar_button_pane_g1

0x99ba,	// (0x00028181) toolbar_button_pane_g2

0x99c2,	// (0x00028189) toolbar_button_pane_g3

0x99ca,	// (0x00028191) toolbar_button_pane_g4

0x99d2,	// (0x00028199) toolbar_button_pane_g5

0x99da,	// (0x000281a1) toolbar_button_pane_g6

0x99e2,	// (0x000281a9) toolbar_button_pane_g7

0x99ea,	// (0x000281b1) toolbar_button_pane_g8

0x99f2,	// (0x000281b9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002df6c) toolbar_button_pane_g

0x7a4a,	// (0x00026211) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7a4a,	// (0x00026211) list_single_2graphic_pane_g1_cp3

0x7a56,	// (0x0002621d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7a56,	// (0x0002621d) list_single_2graphic_pane_g2_cp3

0x8f74,	// (0x0002773b) list_single_2graphic_pane_g3_cp3

0x7a67,	// (0x0002622e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7a67,	// (0x0002622e) list_single_2graphic_pane_g4_cp3

0x7a73,	// (0x0002623a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7a73,	// (0x0002623a) list_single_2graphic_pane_t1_cp3

0x8f68,	// (0x0002772f) list_single_midp_graphic_pane_g2_ParamLimits

0x8f68,	// (0x0002772f) list_single_midp_graphic_pane_g2

0x73eb,	// (0x00025bb2) aid_zoom_text_primary

0x53b3,	// (0x00023b7a) aid_zoom_text_secondary

0x93c6,	// (0x00027b8d) status_small_pane_g7_ParamLimits

0x93c6,	// (0x00027b8d) status_small_pane_g7

0x93e9,	// (0x00027bb0) status_small_pane_t1_ParamLimits

0x6186,	// (0x0002494d) title_pane_g2

0x0003,

0xf529,	// (0x0002dcf0) title_pane_g

0x63ef,	// (0x00024bb6) aid_size_cell_colour_1_pane_ParamLimits

0x63ef,	// (0x00024bb6) aid_size_cell_colour_1_pane

0x6403,	// (0x00024bca) aid_size_cell_colour_2_pane_ParamLimits

0x6403,	// (0x00024bca) aid_size_cell_colour_2_pane

0x6417,	// (0x00024bde) aid_size_cell_colour_3_pane_ParamLimits

0x6417,	// (0x00024bde) aid_size_cell_colour_3_pane

0x642b,	// (0x00024bf2) aid_size_cell_colour_4_pane_ParamLimits

0x642b,	// (0x00024bf2) aid_size_cell_colour_4_pane

0x674e,	// (0x00024f15) title_pane_stacon_g1_ParamLimits

0x674e,	// (0x00024f15) title_pane_stacon_g1

0xa03e,	// (0x00028805) popup_note_wait_window_g3_ParamLimits

0xa03e,	// (0x00028805) popup_note_wait_window_g3

0xa0b5,	// (0x0002887c) popup_note_wait_window_t5_ParamLimits

0xa0b5,	// (0x0002887c) popup_note_wait_window_t5

0x140a,	// (0x0001fbd1) main_feb_china_hwr_fs_writing_pane

0x7471,	// (0x00025c38) popup_feb_china_hwr_fs_window_ParamLimits

0x7471,	// (0x00025c38) popup_feb_china_hwr_fs_window

0x7aa4,	// (0x0002626b) aid_size_cell_hwr_fs_ParamLimits

0x7aa4,	// (0x0002626b) aid_size_cell_hwr_fs

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp3_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp3

0x7ab9,	// (0x00026280) grid_hwr_fs_pane_ParamLimits

0x7ab9,	// (0x00026280) grid_hwr_fs_pane

0x7ad1,	// (0x00026298) linegrid_hwr_fs_pane_ParamLimits

0x7ad1,	// (0x00026298) linegrid_hwr_fs_pane

0x7ae1,	// (0x000262a8) cell_hwr_fs_pane_ParamLimits

0x7ae1,	// (0x000262a8) cell_hwr_fs_pane

0x9a32,	// (0x000281f9) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a32,	// (0x000281f9) linegrid_hwr_fs_pane_g1

0x9a3e,	// (0x00028205) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a3e,	// (0x00028205) linegrid_hwr_fs_pane_g2

0x9a50,	// (0x00028217) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a50,	// (0x00028217) linegrid_hwr_fs_pane_g3

0x7b05,	// (0x000262cc) linegrid_hwr_fs_pane_g4_ParamLimits

0x7b05,	// (0x000262cc) linegrid_hwr_fs_pane_g4

0x7b23,	// (0x000262ea) linegrid_hwr_fs_pane_g5_ParamLimits

0x7b23,	// (0x000262ea) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002df97) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002df97) linegrid_hwr_fs_pane_g

0x9a5c,	// (0x00028223) cell_hwr_fs_pane_g1_ParamLimits

0x9a5c,	// (0x00028223) cell_hwr_fs_pane_g1

0x982b,	// (0x00027ff2) cell_hwr_fs_pane_g2_ParamLimits

0x982b,	// (0x00027ff2) cell_hwr_fs_pane_g2

0x9a72,	// (0x00028239) cell_hwr_fs_pane_g3_ParamLimits

0x9a72,	// (0x00028239) cell_hwr_fs_pane_g3

0x9a7f,	// (0x00028246) cell_hwr_fs_pane_g4_ParamLimits

0x9a7f,	// (0x00028246) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002dfa2) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002dfa2) cell_hwr_fs_pane_g

0x7b39,	// (0x00026300) cell_hwr_fs_pane_t1

0x140a,	// (0x0001fbd1) grid_highlight_pane_cp6

0x140a,	// (0x0001fbd1) main_idle_act2_pane

0x32d2,	// (0x00021a99) aid_inside_area_popup_secondary

0xa6ee,	// (0x00028eb5) aid_inside_area_window_primary_ParamLimits

0xa6ee,	// (0x00028eb5) aid_inside_area_window_primary

0xb2a2,	// (0x00029a69) ai2_news_ticker_pane

0xb2aa,	// (0x00029a71) aid_size_cell_ai1_link_ParamLimits

0xb2aa,	// (0x00029a71) aid_size_cell_ai1_link

0xb2c4,	// (0x00029a8b) popup_ai2_data_window_ParamLimits

0xb2c4,	// (0x00029a8b) popup_ai2_data_window

0xb2e2,	// (0x00029aa9) popup_ai2_link_window_ParamLimits

0xb2e2,	// (0x00029aa9) popup_ai2_link_window

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp4_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp4

0xb2f8,	// (0x00029abf) grid_ai2_link_pane_ParamLimits

0xb2f8,	// (0x00029abf) grid_ai2_link_pane

0xb30f,	// (0x00029ad6) popup_ai2_link_window_g1_ParamLimits

0xb30f,	// (0x00029ad6) popup_ai2_link_window_g1

0xb31b,	// (0x00029ae2) popup_ai2_link_window_g2_ParamLimits

0xb31b,	// (0x00029ae2) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002e175) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002e175) popup_ai2_link_window_g

0xb32c,	// (0x00029af3) ai2_mp_button_pane

0xb334,	// (0x00029afb) ai2_mp_volume_pane

0x9c11,	// (0x000283d8) bg_popup_sub_pane_cp5_ParamLimits

0x9c11,	// (0x000283d8) bg_popup_sub_pane_cp5

0xb33c,	// (0x00029b03) heading_ai2_gene_pane_ParamLimits

0xb33c,	// (0x00029b03) heading_ai2_gene_pane

0xb348,	// (0x00029b0f) list_ai2_gene_pane_ParamLimits

0xb348,	// (0x00029b0f) list_ai2_gene_pane

0xb390,	// (0x00029b57) cell_ai2_link_pane_ParamLimits

0xb390,	// (0x00029b57) cell_ai2_link_pane

0xb3a6,	// (0x00029b6d) cell_ai2_link_pane_g1

0x140a,	// (0x0001fbd1) grid_highlight_pane_cp7

0x7e47,	// (0x0002660e) ai2_mp_volume_pane_g1

0xb479,	// (0x00029c40) ai2_mp_volume_pane_g2

0xb3ee,	// (0x00029bb5) list_ai2_gene_pane_t1

0xb481,	// (0x00029c48) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002e18e) ai2_mp_volume_pane_g

0x7e4f,	// (0x00026616) volume_small_pane_cp3

0xb489,	// (0x00029c50) aid_size_cell_ai2_button

0xb491,	// (0x00029c58) grid_ai2_button_pane

0xb49a,	// (0x00029c61) cell_ai2_button_pane_ParamLimits

0xb49a,	// (0x00029c61) cell_ai2_button_pane

0x1400,	// (0x0001fbc7) cell_ai2_button_pane_g1

0x140a,	// (0x0001fbd1) grid_highlight_pane_cp8

0xb439,	// (0x00029c00) ai2_gene_pane_t1_ParamLimits

0xb439,	// (0x00029c00) ai2_gene_pane_t1

0x73d9,	// (0x00025ba0) aid_height_parent_landscape

0xad7e,	// (0x00029545) aid_height_set_list

0xad8f,	// (0x00029556) aid_size_parent

0xb0c1,	// (0x00029888) aid_size_cell_graphic_pane_ParamLimits

0xb358,	// (0x00029b1f) popup_ai2_data_window_g1_ParamLimits

0xb358,	// (0x00029b1f) popup_ai2_data_window_g1

0xb364,	// (0x00029b2b) ai2_news_ticker_pane_g1

0xb36c,	// (0x00029b33) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002e17a) ai2_news_ticker_pane_g

0xb374,	// (0x00029b3b) ai2_news_ticker_pane_t1

0xb382,	// (0x00029b49) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002e17f) ai2_news_ticker_pane_t

0xb3af,	// (0x00029b76) heading_ai2_gene_pane_g1

0xb3b7,	// (0x00029b7e) heading_ai2_gene_pane_t1_ParamLimits

0xb3b7,	// (0x00029b7e) heading_ai2_gene_pane_t1

0xb3cc,	// (0x00029b93) list_highlight_pane_cp6

0xb3d4,	// (0x00029b9b) ai2_gene_pane_ParamLimits

0xb3d4,	// (0x00029b9b) ai2_gene_pane

0xb3fc,	// (0x00029bc3) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002e184) list_ai2_gene_pane_t

0xb40a,	// (0x00029bd1) list_highlight_pane_cp8_ParamLimits

0xb40a,	// (0x00029bd1) list_highlight_pane_cp8

0xb41b,	// (0x00029be2) ai2_gene_pane_g1_ParamLimits

0xb41b,	// (0x00029be2) ai2_gene_pane_g1

0xb42d,	// (0x00029bf4) ai2_gene_pane_g2_ParamLimits

0xb42d,	// (0x00029bf4) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002e189) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002e189) ai2_gene_pane_g

0x302c,	// (0x000217f3) scroll_pane_cp12

0x7396,	// (0x00025b5d) control_pane_t3_ParamLimits

0x7396,	// (0x00025b5d) control_pane_t3

0x93da,	// (0x00027ba1) status_small_pane_g8_ParamLimits

0x93da,	// (0x00027ba1) status_small_pane_g8

0x756f,	// (0x00025d36) popup_find_window_ParamLimits

0x779c,	// (0x00025f63) popup_note_image_window_ParamLimits

0x544b,	// (0x00023c12) list_double2_graphic_pane_vc_g1_ParamLimits

0x544b,	// (0x00023c12) list_double2_graphic_pane_vc_g1

0x5457,	// (0x00023c1e) list_double2_graphic_pane_vc_g2_ParamLimits

0x5457,	// (0x00023c1e) list_double2_graphic_pane_vc_g2

0x5463,	// (0x00023c2a) list_double2_graphic_pane_vc_g3_ParamLimits

0x5463,	// (0x00023c2a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002df60) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002df60) list_double2_graphic_pane_vc_g

0x546f,	// (0x00023c36) list_double2_graphic_pane_vc_t1_ParamLimits

0x546f,	// (0x00023c36) list_double2_graphic_pane_vc_t1

0x53eb,	// (0x00023bb2) list_single_heading_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_single_heading_pane_vc_g1

0x53f7,	// (0x00023bbe) list_single_heading_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_single_heading_pane_vc_g

0x5485,	// (0x00023c4c) list_single_heading_pane_vc_t1_ParamLimits

0x5485,	// (0x00023c4c) list_single_heading_pane_vc_t1

0x549b,	// (0x00023c62) list_single_heading_pane_vc_t2_ParamLimits

0x549b,	// (0x00023c62) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002df86) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002df86) list_single_heading_pane_vc_t

0x54ad,	// (0x00023c74) list_setting_number_pane_vc_g1_ParamLimits

0x54ad,	// (0x00023c74) list_setting_number_pane_vc_g1

0x54b9,	// (0x00023c80) list_setting_number_pane_vc_g2_ParamLimits

0x54b9,	// (0x00023c80) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002df8b) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002df8b) list_setting_number_pane_vc_g

0x54c5,	// (0x00023c8c) list_setting_number_pane_vc_t1_ParamLimits

0x54c5,	// (0x00023c8c) list_setting_number_pane_vc_t1

0x54d9,	// (0x00023ca0) list_setting_number_pane_vc_t2_ParamLimits

0x54d9,	// (0x00023ca0) list_setting_number_pane_vc_t2

0x54f5,	// (0x00023cbc) list_setting_number_pane_vc_t3_ParamLimits

0x54f5,	// (0x00023cbc) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002df90) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002df90) list_setting_number_pane_vc_t

0x5523,	// (0x00023cea) set_value_pane_vc_ParamLimits

0x5523,	// (0x00023cea) set_value_pane_vc

0xaf78,	// (0x0002973f) list_double2_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double2_graphic_pane_vc

0xaf78,	// (0x0002973f) list_double2_large_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double2_large_graphic_pane_vc

0xaf78,	// (0x0002973f) list_double2_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double2_pane_vc

0xaf78,	// (0x0002973f) list_double_graphic_heading_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_graphic_heading_pane_vc

0xaf78,	// (0x0002973f) list_double_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_graphic_pane_vc

0xaf78,	// (0x0002973f) list_double_heading_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_heading_pane_vc

0x55d0,	// (0x00023d97) list_double_large_graphic_pane_vc_ParamLimits

0x55d0,	// (0x00023d97) list_double_large_graphic_pane_vc

0xaf78,	// (0x0002973f) list_double_number_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_number_pane_vc

0xaf78,	// (0x0002973f) list_double_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_pane_vc

0xaf78,	// (0x0002973f) list_double_time_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_double_time_pane_vc

0xaf78,	// (0x0002973f) list_setting_number_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_setting_number_pane_vc

0xaf78,	// (0x0002973f) list_setting_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_setting_pane_vc

0xaf78,	// (0x0002973f) list_single_graphic_heading_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_single_graphic_heading_pane_vc

0xaf78,	// (0x0002973f) list_single_heading_pane_vc_ParamLimits

0xaf78,	// (0x0002973f) list_single_heading_pane_vc

0x55f5,	// (0x00023dbc) list_single_number_heading_pane_vc_ParamLimits

0x55f5,	// (0x00023dbc) list_single_number_heading_pane_vc

0x544b,	// (0x00023c12) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x544b,	// (0x00023c12) list_double_graphic_heading_pane_vc_g1

0x53eb,	// (0x00023bb2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x53eb,	// (0x00023bb2) list_double_graphic_heading_pane_vc_g2

0x53f7,	// (0x00023bbe) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x53f7,	// (0x00023bbe) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002e195) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e195) list_double_graphic_heading_pane_vc_g

0x5654,	// (0x00023e1b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5654,	// (0x00023e1b) list_double_graphic_heading_pane_vc_t1

0x566a,	// (0x00023e31) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x566a,	// (0x00023e31) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002e19c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002e19c) list_double_graphic_heading_pane_vc_t

0x54ad,	// (0x00023c74) list_setting_pane_vc_g1_ParamLimits

0x54ad,	// (0x00023c74) list_setting_pane_vc_g1

0x54b9,	// (0x00023c80) list_setting_pane_vc_g2_ParamLimits

0x54b9,	// (0x00023c80) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002df8b) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002df8b) list_setting_pane_vc_g

0x5688,	// (0x00023e4f) list_setting_pane_vc_t1_ParamLimits

0x5688,	// (0x00023e4f) list_setting_pane_vc_t1

0x56a4,	// (0x00023e6b) list_setting_pane_vc_t2_ParamLimits

0x56a4,	// (0x00023e6b) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002e1ca) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002e1ca) list_setting_pane_vc_t

0x5523,	// (0x00023cea) set_value_pane_cp_vc_ParamLimits

0x5523,	// (0x00023cea) set_value_pane_cp_vc

0x53eb,	// (0x00023bb2) list_single_number_heading_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_single_number_heading_pane_vc_g1

0x53f7,	// (0x00023bbe) list_single_number_heading_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_single_number_heading_pane_vc_g

0x56c0,	// (0x00023e87) list_single_number_heading_pane_vc_t1_ParamLimits

0x56c0,	// (0x00023e87) list_single_number_heading_pane_vc_t1

0x56d6,	// (0x00023e9d) list_single_number_heading_pane_vc_t2_ParamLimits

0x56d6,	// (0x00023e9d) list_single_number_heading_pane_vc_t2

0x56e8,	// (0x00023eaf) list_single_number_heading_pane_vc_t3_ParamLimits

0x56e8,	// (0x00023eaf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002e1cf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002e1cf) list_single_number_heading_pane_vc_t

0x544b,	// (0x00023c12) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x544b,	// (0x00023c12) list_single_graphic_heading_pane_vc_g1

0x53eb,	// (0x00023bb2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x53eb,	// (0x00023bb2) list_single_graphic_heading_pane_vc_g4

0x53f7,	// (0x00023bbe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x53f7,	// (0x00023bbe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0002e195) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e195) list_single_graphic_heading_pane_vc_g

0x56c0,	// (0x00023e87) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x56c0,	// (0x00023e87) list_single_graphic_heading_pane_vc_t1

0x56fa,	// (0x00023ec1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x56fa,	// (0x00023ec1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002e1d6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002e1d6) list_single_graphic_heading_pane_vc_t

0x53eb,	// (0x00023bb2) list_double2_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_double2_pane_vc_g1

0x53f7,	// (0x00023bbe) list_double2_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_double2_pane_vc_g

0x570c,	// (0x00023ed3) list_double2_pane_vc_t1_ParamLimits

0x570c,	// (0x00023ed3) list_double2_pane_vc_t1

0x5722,	// (0x00023ee9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5722,	// (0x00023ee9) list_double2_large_graphic_pane_vc_g1

0x53eb,	// (0x00023bb2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x53eb,	// (0x00023bb2) list_double2_large_graphic_pane_vc_g2

0x53f7,	// (0x00023bbe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x53f7,	// (0x00023bbe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002e1db) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002e1db) list_double2_large_graphic_pane_vc_g

0x572e,	// (0x00023ef5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x572e,	// (0x00023ef5) list_double2_large_graphic_pane_vc_t1

0x5744,	// (0x00023f0b) list_double_time_pane_vc_g1_ParamLimits

0x5744,	// (0x00023f0b) list_double_time_pane_vc_g1

0x5750,	// (0x00023f17) list_double_time_pane_vc_g2_ParamLimits

0x5750,	// (0x00023f17) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002e1e2) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002e1e2) list_double_time_pane_vc_g

0x575c,	// (0x00023f23) list_double_time_pane_vc_t1_ParamLimits

0x575c,	// (0x00023f23) list_double_time_pane_vc_t1

0x5786,	// (0x00023f4d) list_double_time_pane_vc_t2_ParamLimits

0x5786,	// (0x00023f4d) list_double_time_pane_vc_t2

0x57cf,	// (0x00023f96) list_double_time_pane_vc_t3_ParamLimits

0x57cf,	// (0x00023f96) list_double_time_pane_vc_t3

0x57e1,	// (0x00023fa8) list_double_time_pane_vc_t4_ParamLimits

0x57e1,	// (0x00023fa8) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002e1e7) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002e1e7) list_double_time_pane_vc_t

0x53eb,	// (0x00023bb2) list_double_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_double_pane_vc_g1

0x53f7,	// (0x00023bbe) list_double_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_double_pane_vc_g

0x57f5,	// (0x00023fbc) list_double_pane_vc_t1_ParamLimits

0x57f5,	// (0x00023fbc) list_double_pane_vc_t1

0x5809,	// (0x00023fd0) list_double_pane_vc_t2_ParamLimits

0x5809,	// (0x00023fd0) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002e1f0) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002e1f0) list_double_pane_vc_t

0x53eb,	// (0x00023bb2) list_double_number_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_double_number_pane_vc_g1

0x53f7,	// (0x00023bbe) list_double_number_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_double_number_pane_vc_g

0x581f,	// (0x00023fe6) list_double_number_pane_vc_t1_ParamLimits

0x581f,	// (0x00023fe6) list_double_number_pane_vc_t1

0x5831,	// (0x00023ff8) list_double_number_pane_vc_t2_ParamLimits

0x5831,	// (0x00023ff8) list_double_number_pane_vc_t2

0x5809,	// (0x00023fd0) list_double_number_pane_vc_t3_ParamLimits

0x5809,	// (0x00023fd0) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002e1f5) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e1f5) list_double_number_pane_vc_t

0x5845,	// (0x0002400c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5845,	// (0x0002400c) list_double_large_graphic_pane_vc_g1

0x5861,	// (0x00024028) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5861,	// (0x00024028) list_double_large_graphic_pane_vc_g2

0x5875,	// (0x0002403c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5875,	// (0x0002403c) list_double_large_graphic_pane_vc_g3

0x5884,	// (0x0002404b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5884,	// (0x0002404b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002e1fc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002e1fc) list_double_large_graphic_pane_vc_g

0x5893,	// (0x0002405a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5893,	// (0x0002405a) list_double_large_graphic_pane_vc_t1

0x58af,	// (0x00024076) list_double_large_graphic_pane_vc_t2_ParamLimits

0x58af,	// (0x00024076) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002e205) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002e205) list_double_large_graphic_pane_vc_t

0x53eb,	// (0x00023bb2) list_double_heading_pane_vc_g1_ParamLimits

0x53eb,	// (0x00023bb2) list_double_heading_pane_vc_g1

0x53f7,	// (0x00023bbe) list_double_heading_pane_vc_g2_ParamLimits

0x53f7,	// (0x00023bbe) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002df81) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002df81) list_double_heading_pane_vc_g

0x58cf,	// (0x00024096) list_double_heading_pane_vc_t1_ParamLimits

0x58cf,	// (0x00024096) list_double_heading_pane_vc_t1

0x58e1,	// (0x000240a8) list_double_heading_pane_vc_t2_ParamLimits

0x58e1,	// (0x000240a8) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002e20a) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002e20a) list_double_heading_pane_vc_t

0x58f9,	// (0x000240c0) list_double_graphic_pane_vc_g1_ParamLimits

0x58f9,	// (0x000240c0) list_double_graphic_pane_vc_g1

0x590c,	// (0x000240d3) list_double_graphic_pane_vc_g2_ParamLimits

0x590c,	// (0x000240d3) list_double_graphic_pane_vc_g2

0x53eb,	// (0x00023bb2) list_double_graphic_pane_vc_g3_ParamLimits

0x53eb,	// (0x00023bb2) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002e20f) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002e20f) list_double_graphic_pane_vc_g

0x5929,	// (0x000240f0) list_double_graphic_pane_vc_t1_ParamLimits

0x5929,	// (0x000240f0) list_double_graphic_pane_vc_t1

0x5953,	// (0x0002411a) list_double_graphic_pane_vc_t2_ParamLimits

0x5953,	// (0x0002411a) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002e218) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002e218) list_double_graphic_pane_vc_t

0x5d92,	// (0x00024559) aid_size_cell_fastswap

0x5d9a,	// (0x00024561) aid_size_cell_touch_ParamLimits

0x5d9a,	// (0x00024561) aid_size_cell_touch

0x5ffb,	// (0x000247c2) popup_fast_swap_wide_window_ParamLimits

0x5ffb,	// (0x000247c2) popup_fast_swap_wide_window

0x6119,	// (0x000248e0) touch_pane_ParamLimits

0x6119,	// (0x000248e0) touch_pane

0x30b1,	// (0x00021878) button_value_adjust_pane_cp2

0x50ba,	// (0x00023881) button_value_adjust_pane_cp4

0x50e0,	// (0x000238a7) form_field_data_pane_cp2

0x5103,	// (0x000238ca) form_field_data_wide_pane_cp2

0x69bb,	// (0x00025182) bg_scroll_pane_ParamLimits

0x69da,	// (0x000251a1) scroll_handle_pane_ParamLimits

0x69ee,	// (0x000251b5) scroll_sc2_down_pane_ParamLimits

0x69ee,	// (0x000251b5) scroll_sc2_down_pane

0x6a15,	// (0x000251dc) scroll_sc2_up_pane_ParamLimits

0x6a15,	// (0x000251dc) scroll_sc2_up_pane

0xbbce,	// (0x0002a395) grid_wheel_folder_pane_g1_ParamLimits

0xbbce,	// (0x0002a395) grid_wheel_folder_pane_g1

0x7061,	// (0x00025828) clock_nsta_pane_cp2_ParamLimits

0x7061,	// (0x00025828) clock_nsta_pane_cp2

0x915d,	// (0x00027924) listscroll_midp_pane_ParamLimits

0x9169,	// (0x00027930) midp_canvas_pane

0x9454,	// (0x00027c1b) nsta_clock_indic_pane

0x9488,	// (0x00027c4f) listscroll_form_pane_vc

0x9490,	// (0x00027c57) listscroll_set_pane_vc_ParamLimits

0x9490,	// (0x00027c57) listscroll_set_pane_vc

0x9587,	// (0x00027d4e) clock_nsta_pane

0x9604,	// (0x00027dcb) indicator_nsta_pane

0x98f0,	// (0x000280b7) bg_popup_sub_pane_cp2_ParamLimits

0x9904,	// (0x000280cb) find_pane_cp2_ParamLimits

0x9904,	// (0x000280cb) find_pane_cp2

0x991a,	// (0x000280e1) grid_toobar_pane_ParamLimits

0x99fa,	// (0x000281c1) list_form_gen_pane_vc_ParamLimits

0x99fa,	// (0x000281c1) list_form_gen_pane_vc

0x9a10,	// (0x000281d7) scroll_pane_cp8_vc_ParamLimits

0x9a10,	// (0x000281d7) scroll_pane_cp8_vc

0x9a8c,	// (0x00028253) data_form_wide_pane_vc_ParamLimits

0x9a8c,	// (0x00028253) data_form_wide_pane_vc

0x9a98,	// (0x0002825f) form_field_data_wide_pane_vc_g1

0x9aa0,	// (0x00028267) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aa0,	// (0x00028267) form_field_data_wide_pane_vc_t1

0x311d,	// (0x000218e4) input_focus_pane_cp6_vc_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_cp6_vc

0x9d9c,	// (0x00028563) list_midp_pane_ParamLimits

0x9da8,	// (0x0002856f) scroll_pane_cp16_ParamLimits

0x9da8,	// (0x0002856f) scroll_pane_cp16

0x9e12,	// (0x000285d9) button_value_adjust_pane_ParamLimits

0x9e12,	// (0x000285d9) button_value_adjust_pane

0xada1,	// (0x00029568) button_value_adjust_pane_cp6_ParamLimits

0xada1,	// (0x00029568) button_value_adjust_pane_cp6

0xaee9,	// (0x000296b0) settings_code_pane_cp_ParamLimits

0xaee9,	// (0x000296b0) settings_code_pane_cp

0x1400,	// (0x0001fbc7) cell_touch_pane_g1

0x1400,	// (0x0001fbc7) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002dea5) cell_touch_pane_g

0xb4ac,	// (0x00029c73) cell_touch_pane_cp_ParamLimits

0xb4ac,	// (0x00029c73) cell_touch_pane_cp

0xb4bc,	// (0x00029c83) cell_touch_pane_ParamLimits

0xb4bc,	// (0x00029c83) cell_touch_pane

0x1400,	// (0x0001fbc7) scroll_sc2_down_pane_g1

0x1400,	// (0x0001fbc7) scroll_sc2_up_pane_g1

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp4_vc

0xb4cd,	// (0x00029c94) list_set_graphic_pane_vc_g1_ParamLimits

0xb4cd,	// (0x00029c94) list_set_graphic_pane_vc_g1

0xb4d9,	// (0x00029ca0) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d9,	// (0x00029ca0) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002e1a1) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002e1a1) list_set_graphic_pane_vc_g

0xb4e5,	// (0x00029cac) text_primary_small_cp13_vc_ParamLimits

0xb4e5,	// (0x00029cac) text_primary_small_cp13_vc

0xb4fd,	// (0x00029cc4) list_set_graphic_pane_vc_ParamLimits

0xb4fd,	// (0x00029cc4) list_set_graphic_pane_vc

0x140a,	// (0x0001fbd1) input_focus_pane_cp2_vc

0x1400,	// (0x0001fbc7) setting_code_pane_vc_g1

0x147d,	// (0x0001fc44) setting_code_pane_vc_t1

0xb510,	// (0x00029cd7) set_text_pane_vc_t1_ParamLimits

0xb510,	// (0x00029cd7) set_text_pane_vc_t1

0x140a,	// (0x0001fbd1) input_focus_pane_cp1_vc

0xb531,	// (0x00029cf8) list_set_text_pane_vc

0x1400,	// (0x0001fbc7) setting_text_pane_vc_g1

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp2_vc

0x1474,	// (0x0001fc3b) setting_slider_graphic_pane_vc_g1

0xb53b,	// (0x00029d02) setting_slider_graphic_pane_vc_t1

0xb54d,	// (0x00029d14) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002e1a6) setting_slider_graphic_pane_vc_t

0xb55f,	// (0x00029d26) slider_set_pane_cp_vc

0xb569,	// (0x00029d30) slider_set_pane_vc_g1

0xb572,	// (0x00029d39) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002e1ab) slider_set_pane_vc_g

0x31d8,	// (0x0002199f) set_opt_bg_pane_g1_copy1

0x31e0,	// (0x000219a7) set_opt_bg_pane_g2_copy1

0xb59e,	// (0x00029d65) set_opt_bg_pane_g3_copy1

0x31f0,	// (0x000219b7) set_opt_bg_pane_g4_copy1

0x31f8,	// (0x000219bf) set_opt_bg_pane_g5_copy1

0x3200,	// (0x000219c7) set_opt_bg_pane_g6_copy1

0xb5a8,	// (0x00029d6f) set_opt_bg_pane_g7_copy1

0xb5b2,	// (0x00029d79) set_opt_bg_pane_g8_copy1

0xb5bc,	// (0x00029d83) set_opt_bg_pane_g9_copy1

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp_vc

0xb5c6,	// (0x00029d8d) setting_slider_pane_vc_t1

0xb5d5,	// (0x00029d9c) setting_slider_pane_vc_t2

0xb5e7,	// (0x00029dae) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002e1ba) setting_slider_pane_vc_t

0xb5f9,	// (0x00029dc0) slider_set_pane_vc

0x7b47,	// (0x0002630e) volume_set_pane_vc_g1

0x7b50,	// (0x00026317) volume_set_pane_vc_g2

0x7b59,	// (0x00026320) volume_set_pane_vc_g3

0x7b62,	// (0x00026329) volume_set_pane_vc_g4

0x7b6b,	// (0x00026332) volume_set_pane_vc_g5

0x7b74,	// (0x0002633b) volume_set_pane_vc_g6

0x7b7d,	// (0x00026344) volume_set_pane_vc_g7

0x7b86,	// (0x0002634d) volume_set_pane_vc_g8

0x7b8f,	// (0x00026356) volume_set_pane_vc_g9

0x7b98,	// (0x0002635f) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002e058) volume_set_pane_vc_g

0xb603,	// (0x00029dca) volume_set_pane_vc

0xb60d,	// (0x00029dd4) button_value_adjust_pane_cp1_vc

0xb617,	// (0x00029dde) list_highlight_pane_cp2_vc

0xb620,	// (0x00029de7) list_set_pane_vc_ParamLimits

0xb620,	// (0x00029de7) list_set_pane_vc

0xb68e,	// (0x00029e55) main_pane_set_vc_t1_ParamLimits

0xb68e,	// (0x00029e55) main_pane_set_vc_t1

0xb6a3,	// (0x00029e6a) main_pane_set_vc_t2_ParamLimits

0xb6a3,	// (0x00029e6a) main_pane_set_vc_t2

0xb6b5,	// (0x00029e7c) main_pane_set_vc_t3_ParamLimits

0xb6b5,	// (0x00029e7c) main_pane_set_vc_t3

0xb6c9,	// (0x00029e90) main_pane_set_vc_t4_ParamLimits

0xb6c9,	// (0x00029e90) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002e1c1) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002e1c1) main_pane_set_vc_t

0xb6dd,	// (0x00029ea4) setting_code_pane_vc_ParamLimits

0xb6dd,	// (0x00029ea4) setting_code_pane_vc

0xb6ee,	// (0x00029eb5) setting_slider_graphic_pane_vc

0xb6ee,	// (0x00029eb5) setting_slider_pane_vc

0xb6ee,	// (0x00029eb5) setting_text_pane_vc

0xb6ee,	// (0x00029eb5) setting_volume_pane_vc

0xb6f8,	// (0x00029ebf) scroll_pane_cp121_vc

0x309f,	// (0x00021866) set_content_pane_vc

0xb700,	// (0x00029ec7) button_value_adjust_pane_g1

0xb709,	// (0x00029ed0) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002e21d) button_value_adjust_pane_g

0xb712,	// (0x00029ed9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb712,	// (0x00029ed9) form_field_slider_wide_pane_vc_t1

0xb724,	// (0x00029eeb) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb724,	// (0x00029eeb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002e222) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e222) form_field_slider_wide_pane_vc_t

0x1458,	// (0x0001fc1f) input_focus_pane_cp10_vc_ParamLimits

0x1458,	// (0x0001fc1f) input_focus_pane_cp10_vc

0xb750,	// (0x00029f17) slider_cont_pane_cp1_vc_ParamLimits

0xb750,	// (0x00029f17) slider_cont_pane_cp1_vc

0xb762,	// (0x00029f29) slider_form_pane_g1_cp2

0xb572,	// (0x00029d39) slider_form_pane_g2_cp2

0xb78f,	// (0x00029f56) form_field_slider_pane_vc_t3

0xb79d,	// (0x00029f64) form_field_slider_pane_vc_t4

0xb7ab,	// (0x00029f72) slider_form_pane_vc_ParamLimits

0xb7ab,	// (0x00029f72) slider_form_pane_vc

0xb7b8,	// (0x00029f7f) form_field_slider_pane_vc_t1_ParamLimits

0xb7b8,	// (0x00029f7f) form_field_slider_pane_vc_t1

0xb724,	// (0x00029eeb) form_field_slider_pane_vc_t2_ParamLimits

0xb724,	// (0x00029eeb) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002e234) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002e234) form_field_slider_pane_vc_t

0x1458,	// (0x0001fc1f) input_focus_pane_cp9_vc_ParamLimits

0x1458,	// (0x0001fc1f) input_focus_pane_cp9_vc

0xb7ce,	// (0x00029f95) slider_cont_pane_vc_ParamLimits

0xb7ce,	// (0x00029f95) slider_cont_pane_vc

0xb7e2,	// (0x00029fa9) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e2,	// (0x00029fa9) list_form_graphic_pane_cp_vc

0x9a98,	// (0x0002825f) form_field_popup_wide_pane_vc_g1

0xb7f7,	// (0x00029fbe) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f7,	// (0x00029fbe) form_field_popup_wide_pane_vc_t1

0x311d,	// (0x000218e4) input_focus_pane_cp8_vc_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_cp8_vc

0xb83c,	// (0x0002a003) list_form_wide_pane_vc_ParamLimits

0xb83c,	// (0x0002a003) list_form_wide_pane_vc

0xb848,	// (0x0002a00f) list_form_graphic_pane_vc_g1

0xb850,	// (0x0002a017) list_form_graphic_pane_vc_t1_ParamLimits

0xb850,	// (0x0002a017) list_form_graphic_pane_vc_t1

0x1466,	// (0x0001fc2d) list_highlight_pane_cp5_vc_ParamLimits

0x1466,	// (0x0001fc2d) list_highlight_pane_cp5_vc

0xb86c,	// (0x0002a033) list_form_graphic_pane_vc_ParamLimits

0xb86c,	// (0x0002a033) list_form_graphic_pane_vc

0x9a98,	// (0x0002825f) form_field_popup_pane_vc_g1

0xb882,	// (0x0002a049) form_field_popup_pane_vc_t1_ParamLimits

0xb882,	// (0x0002a049) form_field_popup_pane_vc_t1

0x311d,	// (0x000218e4) input_focus_pane_cp7_vc_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_cp7_vc

0xb899,	// (0x0002a060) list_form_pane_vc_ParamLimits

0xb899,	// (0x0002a060) list_form_pane_vc

0xb8a5,	// (0x0002a06c) data_form_pane_vc_t1_ParamLimits

0xb8a5,	// (0x0002a06c) data_form_pane_vc_t1

0x31d8,	// (0x0002199f) input_focus_pane_vc_g1

0x31e0,	// (0x000219a7) input_focus_pane_vc_g2

0x31e8,	// (0x000219af) input_focus_pane_vc_g3

0x31f0,	// (0x000219b7) input_focus_pane_vc_g4

0x31f8,	// (0x000219bf) input_focus_pane_vc_g5

0x3200,	// (0x000219c7) input_focus_pane_vc_g6

0x3208,	// (0x000219cf) input_focus_pane_vc_g7

0x3210,	// (0x000219d7) input_focus_pane_vc_g8

0x3218,	// (0x000219df) input_focus_pane_vc_g9

0x1400,	// (0x0001fbc7) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002de2e) input_focus_pane_vc_g

0x9a8c,	// (0x00028253) data_form_pane_vc_ParamLimits

0x9a8c,	// (0x00028253) data_form_pane_vc

0x9a98,	// (0x0002825f) form_field_data_pane_vc_g1

0xb8c2,	// (0x0002a089) form_field_data_pane_vc_t1_ParamLimits

0xb8c2,	// (0x0002a089) form_field_data_pane_vc_t1

0x311d,	// (0x000218e4) input_focus_pane_vc_ParamLimits

0x311d,	// (0x000218e4) input_focus_pane_vc

0xb8dc,	// (0x0002a0a3) button_value_adjust_pane_cp3_vc

0xb8e4,	// (0x0002a0ab) button_value_adjust_pane_cp5_vc

0xb8ec,	// (0x0002a0b3) form_field_data_pane_vc_ParamLimits

0xb8ec,	// (0x0002a0b3) form_field_data_pane_vc

0xb907,	// (0x0002a0ce) form_field_data_pane_vc_cp2

0xb90f,	// (0x0002a0d6) form_field_data_wide_pane_vc_ParamLimits

0xb90f,	// (0x0002a0d6) form_field_data_wide_pane_vc

0xb929,	// (0x0002a0f0) form_field_data_wide_pane_vc_cp2

0xb931,	// (0x0002a0f8) form_field_popup_pane_vc_ParamLimits

0xb931,	// (0x0002a0f8) form_field_popup_pane_vc

0xb94c,	// (0x0002a113) form_field_popup_wide_pane_vc_ParamLimits

0xb94c,	// (0x0002a113) form_field_popup_wide_pane_vc

0xb966,	// (0x0002a12d) form_field_slider_pane_vc_ParamLimits

0xb966,	// (0x0002a12d) form_field_slider_pane_vc

0xb979,	// (0x0002a140) form_field_slider_wide_pane_vc_ParamLimits

0xb979,	// (0x0002a140) form_field_slider_wide_pane_vc

0xb98c,	// (0x0002a153) grid_touch_1_pane_ParamLimits

0xb98c,	// (0x0002a153) grid_touch_1_pane

0xb998,	// (0x0002a15f) grid_touch_2_pane_ParamLimits

0xb998,	// (0x0002a15f) grid_touch_2_pane

0x941f,	// (0x00027be6) touch_pane_g1_ParamLimits

0x941f,	// (0x00027be6) touch_pane_g1

0xb9b2,	// (0x0002a179) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0002a179) cell_app_pane_cp_wide

0xb9c3,	// (0x0002a18a) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0002a18a) grid_popup_fast_wide_pane

0xb9d7,	// (0x0002a19e) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0002a19e) scroll_pane_cp19

0x140a,	// (0x0001fbd1) bg_popup_window_pane_cp20

0xb9eb,	// (0x0002a1b2) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0002a1ba) grid_indicator_nsta_pane

0xba05,	// (0x0002a1cc) clock_nsta_pane_g1

0xba0e,	// (0x0002a1d5) clock_nsta_pane_t1

0xba2a,	// (0x0002a1f1) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0002a1f1) cell_indicator_nsta_pane

0xba5f,	// (0x0002a226) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0002a234) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002e245) cell_indicator_nsta_pane_g

0xba80,	// (0x0002a247) clock_nsta_pane_cp

0xba89,	// (0x0002a250) indicator_nsta_pane_cp

0xba93,	// (0x0002a25a) nsta_clock_indic_pane_g1

0x14bc,	// (0x0001fc83) grid_indicator_pane

0x6b07,	// (0x000252ce) scroll_pane_cp29

0x6f8e,	// (0x00025755) indicator_nsta_pane_cp2_ParamLimits

0x6f8e,	// (0x00025755) indicator_nsta_pane_cp2

0x1466,	// (0x0001fc2d) main_apps_wheel_pane

0x9c79,	// (0x00028440) form_midp_field_text_pane_ParamLimits

0x9dc8,	// (0x0002858f) scroll_bar_cp050_ParamLimits

0xbaec,	// (0x0002a2b3) cell_indicator_pane_ParamLimits

0xbaec,	// (0x0002a2b3) cell_indicator_pane

0xbb04,	// (0x0002a2cb) cell_indicator_pane_g1

0xbb0e,	// (0x0002a2d5) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0002a2d5) grid_wheel_folder_pane

0xbb22,	// (0x0002a2e9) list_wheel_apps_pane_ParamLimits

0xbb22,	// (0x0002a2e9) list_wheel_apps_pane

0xbb35,	// (0x0002a2fc) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0002a2fc) main_apps_wheel_pane_g1

0xbb5d,	// (0x0002a324) main_apps_wheel_pane_g2_ParamLimits

0xbb5d,	// (0x0002a324) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002e261) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002e261) main_apps_wheel_pane_g

0xbb79,	// (0x0002a340) main_apps_wheel_pane_t1_ParamLimits

0xbb79,	// (0x0002a340) main_apps_wheel_pane_t1

0xbba2,	// (0x0002a369) list_wheel_apps_pane_g1

0xbbaa,	// (0x0002a371) list_wheel_apps_pane_g2

0xbbb2,	// (0x0002a379) list_wheel_apps_pane_g3

0xbbba,	// (0x0002a381) list_wheel_apps_pane_g4

0xbbc4,	// (0x0002a38b) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002e266) list_wheel_apps_pane_g

0x8fc6,	// (0x0002778d) navi_icon_text_pane

0x94b8,	// (0x00027c7f) aid_fill_nsta

0xbbe5,	// (0x0002a3ac) navi_icon_text_pane_g1

0xbbf1,	// (0x0002a3b8) navi_icon_text_pane_t1

0x7125,	// (0x000258ec) list_set_graphic_pane_t1_ParamLimits

0x7125,	// (0x000258ec) list_set_graphic_pane_t1

0xa535,	// (0x00028cfc) popup_midp_note_alarm_window_t6_ParamLimits

0xa535,	// (0x00028cfc) popup_midp_note_alarm_window_t6

0xa547,	// (0x00028d0e) popup_midp_note_alarm_window_t7_ParamLimits

0xa547,	// (0x00028d0e) popup_midp_note_alarm_window_t7

0xa559,	// (0x00028d20) popup_midp_note_alarm_window_t8_ParamLimits

0xa559,	// (0x00028d20) popup_midp_note_alarm_window_t8

0xa56b,	// (0x00028d32) popup_midp_note_alarm_window_t9_ParamLimits

0xa56b,	// (0x00028d32) popup_midp_note_alarm_window_t9

0xa57d,	// (0x00028d44) popup_midp_note_alarm_window_t10_ParamLimits

0xa57d,	// (0x00028d44) popup_midp_note_alarm_window_t10

0xa58f,	// (0x00028d56) popup_midp_note_alarm_window_t11_ParamLimits

0xa58f,	// (0x00028d56) popup_midp_note_alarm_window_t11

0xa5a1,	// (0x00028d68) scroll_pane_cp17_ParamLimits

0xa5a1,	// (0x00028d68) scroll_pane_cp17

0x7b47,	// (0x0002630e) volume_small_pane_cp_g1

0x7e58,	// (0x0002661f) volume_small_pane_cp_g2

0x7e61,	// (0x00026628) volume_small_pane_cp_g3

0x7e6a,	// (0x00026631) volume_small_pane_cp_g4

0x7e73,	// (0x0002663a) volume_small_pane_cp_g5

0x7e7c,	// (0x00026643) volume_small_pane_cp_g6

0x7e85,	// (0x0002664c) volume_small_pane_cp_g7

0x7e8e,	// (0x00026655) volume_small_pane_cp_g8

0x7e97,	// (0x0002665e) volume_small_pane_cp_g9

0x7ea0,	// (0x00026667) volume_small_pane_cp_g10

0x9233,	// (0x000279fa) midp_ticker_pane_g1_ParamLimits

0x923f,	// (0x00027a06) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002defa) midp_ticker_pane_g_ParamLimits

0x924b,	// (0x00027a12) midp_ticker_pane_t1_ParamLimits

0x94ce,	// (0x00027c95) aid_fill_nsta_2

0x9db4,	// (0x0002857b) list_form2_midp_pane

0xaf30,	// (0x000296f7) midp_editing_number_pane_ParamLimits

0xaf3f,	// (0x00029706) midp_ticker_pane_ParamLimits

0xbc03,	// (0x0002a3ca) form2_midp_field_pane

0xbc27,	// (0x0002a3ee) scroll_pane_cp51

0xbc47,	// (0x0002a40e) form2_midp_button_pane_ParamLimits

0xbc47,	// (0x0002a40e) form2_midp_button_pane

0xbc59,	// (0x0002a420) form2_midp_content_pane_ParamLimits

0xbc59,	// (0x0002a420) form2_midp_content_pane

0xbc73,	// (0x0002a43a) form2_midp_field_choice_group_pane

0xbc7b,	// (0x0002a442) form2_midp_field_pane_g1

0xbc83,	// (0x0002a44a) form2_midp_field_pane_g2

0xbc8b,	// (0x0002a452) form2_midp_field_pane_g3

0xbc93,	// (0x0002a45a) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002e28b) form2_midp_field_pane_g

0xbc9b,	// (0x0002a462) form2_midp_gauge_slider_pane

0xbca3,	// (0x0002a46a) form2_midp_gauge_wait_pane

0xbcab,	// (0x0002a472) form2_midp_image_pane_ParamLimits

0xbcab,	// (0x0002a472) form2_midp_image_pane

0xbcc6,	// (0x0002a48d) form2_midp_label_pane_ParamLimits

0xbcc6,	// (0x0002a48d) form2_midp_label_pane

0xbce5,	// (0x0002a4ac) form2_midp_label_pane_cp_ParamLimits

0xbce5,	// (0x0002a4ac) form2_midp_label_pane_cp

0xbd06,	// (0x0002a4cd) form2_midp_string_pane_ParamLimits

0xbd06,	// (0x0002a4cd) form2_midp_string_pane

0x5971,	// (0x00024138) form2_midp_text_pane_ParamLimits

0x5971,	// (0x00024138) form2_midp_text_pane

0xbd18,	// (0x0002a4df) form2_midp_time_pane

0xbd28,	// (0x0002a4ef) input_focus_pane_cp51_ParamLimits

0xbd28,	// (0x0002a4ef) input_focus_pane_cp51

0xbd40,	// (0x0002a507) form2_midp_label_pane_t1_ParamLimits

0xbd40,	// (0x0002a507) form2_midp_label_pane_t1

0x5992,	// (0x00024159) form2_mdip_text_pane_t1_ParamLimits

0x5992,	// (0x00024159) form2_mdip_text_pane_t1

0x59b6,	// (0x0002417d) form2_midp_time_pane_t1

0xbd8e,	// (0x0002a555) form2_midp_gauge_slider_pane_t1

0xbda0,	// (0x0002a567) form2_midp_gauge_slider_pane_t2

0xbdb2,	// (0x0002a579) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002e294) form2_midp_gauge_slider_pane_t

0xbdc4,	// (0x0002a58b) form2_midp_slider_pane

0xbdd0,	// (0x0002a597) form2_midp_gauge_wait_pane_t1

0xbdde,	// (0x0002a5a5) form2_midp_wait_pane_ParamLimits

0xbdde,	// (0x0002a5a5) form2_midp_wait_pane

0xbe09,	// (0x0002a5d0) list_single_2graphic_pane_cp4_ParamLimits

0xbe09,	// (0x0002a5d0) list_single_2graphic_pane_cp4

0x9af5,	// (0x000282bc) list_single_midp_graphic_pane_cp_ParamLimits

0x9af5,	// (0x000282bc) list_single_midp_graphic_pane_cp

0x140a,	// (0x0001fbd1) list_highlight_pane_cp20

0xbe22,	// (0x0002a5e9) list_single_2graphic_pane_g1_cp4

0xb3af,	// (0x00029b76) list_single_2graphic_pane_g2_cp4

0xbe2a,	// (0x0002a5f1) list_single_2graphic_pane_t1_cp4

0x1466,	// (0x0001fc2d) list_highlight_pane_cp21

0xbe39,	// (0x0002a600) list_single_midp_graphic_pane_g4_cp

0xbe48,	// (0x0002a60f) list_single_midp_graphic_pane_t1_cp

0xbe5d,	// (0x0002a624) form2_mdip_string_pane_t1_ParamLimits

0xbe5d,	// (0x0002a624) form2_mdip_string_pane_t1

0x140a,	// (0x0001fbd1) bg_wml_button_pane_cp2

0x1400,	// (0x0001fbc7) form2_midp_image_pane_g1

0x4ead,	// (0x00023674) list_double_large_graphic_pane_g5_ParamLimits

0x4ead,	// (0x00023674) list_double_large_graphic_pane_g5

0x915d,	// (0x00027924) midp_form_pane_ParamLimits

0x1466,	// (0x0001fc2d) main_apps_wheel_pane_ParamLimits

0x77c4,	// (0x00025f8b) popup_preview_window_ParamLimits

0x77c4,	// (0x00025f8b) popup_preview_window

0x79ab,	// (0x00026172) popup_touch_info_window_ParamLimits

0x79ab,	// (0x00026172) popup_touch_info_window

0x79cd,	// (0x00026194) popup_touch_menu_window_ParamLimits

0x79cd,	// (0x00026194) popup_touch_menu_window

0x13f6,	// (0x0001fbbd) bg_popup_sub_pane_cp6

0xbef9,	// (0x0002a6c0) list_touch_menu_pane

0xbf01,	// (0x0002a6c8) list_single_touch_menu_pane_ParamLimits

0xbf01,	// (0x0002a6c8) list_single_touch_menu_pane

0xbf19,	// (0x0002a6e0) list_single_touch_menu_pane_t1

0x1466,	// (0x0001fc2d) bg_popup_sub_pane_cp7_ParamLimits

0x1466,	// (0x0001fc2d) bg_popup_sub_pane_cp7

0xbf27,	// (0x0002a6ee) heading_sub_pane

0xbf2f,	// (0x0002a6f6) list_touch_info_pane_ParamLimits

0xbf2f,	// (0x0002a6f6) list_touch_info_pane

0xbf3e,	// (0x0002a705) list_single_touch_info_pane_ParamLimits

0xbf3e,	// (0x0002a705) list_single_touch_info_pane

0xbf50,	// (0x0002a717) list_single_touch_info_pane_t1

0xbf5e,	// (0x0002a725) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002e2a2) list_single_touch_info_pane_t

0x9155,	// (0x0002791c) bg_popup_heading_pane_cp

0xbf6c,	// (0x0002a733) heading_sub_pane_t1

0x9a26,	// (0x000281ed) bg_popup_preview_window_pane_cp_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_preview_window_pane_cp

0xbf27,	// (0x0002a6ee) heading_preview_pane

0xbf2f,	// (0x0002a6f6) list_preview_pane_ParamLimits

0xbf2f,	// (0x0002a6f6) list_preview_pane

0xbf7a,	// (0x0002a741) popup_preview_window_g1

0xbf3e,	// (0x0002a705) list_single_preview_pane_ParamLimits

0xbf3e,	// (0x0002a705) list_single_preview_pane

0xbf82,	// (0x0002a749) list_single_preview_pane_g1

0xbf8a,	// (0x0002a751) list_single_preview_pane_t1

0xbf50,	// (0x0002a717) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002e2a7) list_single_preview_pane_t

0xbf98,	// (0x0002a75f) bg_popup_heading_pane_cp2_ParamLimits

0xbf98,	// (0x0002a75f) bg_popup_heading_pane_cp2

0xbfae,	// (0x0002a775) heading_preview_pane_g1

0xbfb6,	// (0x0002a77d) heading_preview_pane_t1_ParamLimits

0xbfb6,	// (0x0002a77d) heading_preview_pane_t1

0x14d3,	// (0x0001fc9a) soft_indicator_pane_t1_ParamLimits

0x3009,	// (0x000217d0) scroll_pane_ParamLimits

0x6a03,	// (0x000251ca) scroll_sc2_left_pane

0x6a0c,	// (0x000251d3) scroll_sc2_right_pane

0x6a2b,	// (0x000251f2) scroll_bg_pane_g1_ParamLimits

0x6a40,	// (0x00025207) scroll_bg_pane_g2_ParamLimits

0x6a58,	// (0x0002521f) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002de85) scroll_bg_pane_g_ParamLimits

0x6a2b,	// (0x000251f2) scroll_handle_pane_g1_ParamLimits

0x6a7a,	// (0x00025241) scroll_handle_pane_g2_ParamLimits

0x6a58,	// (0x0002521f) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002de8c) scroll_handle_pane_g_ParamLimits

0x7409,	// (0x00025bd0) popup_choice_list_window_ParamLimits

0x7409,	// (0x00025bd0) popup_choice_list_window

0x98fc,	// (0x000280c3) choice_list_pane

0x997e,	// (0x00028145) cell_toolbar_pane_t1

0x99a6,	// (0x0002816d) toolbar_button_pane_ParamLimits

0xaa6b,	// (0x00029232) ai_gene_pane_1_t2_ParamLimits

0xaa6b,	// (0x00029232) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002e0b4) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002e0b4) ai_gene_pane_1_t

0xbfd3,	// (0x0002a79a) scroll_sc2_left_pane_g1

0xbfd3,	// (0x0002a79a) scroll_sc2_right_pane_g1

0x947c,	// (0x00027c43) bg_popup_sub_pane_cp10

0xbfdd,	// (0x0002a7a4) list_choice_list_pane

0xbff6,	// (0x0002a7bd) list_single_choice_list_pane_ParamLimits

0xbff6,	// (0x0002a7bd) list_single_choice_list_pane

0xc00e,	// (0x0002a7d5) list_single_choice_list_pane_g1

0x3310,	// (0x00021ad7) list_single_choice_list_pane_t1_ParamLimits

0x3310,	// (0x00021ad7) list_single_choice_list_pane_t1

0xc016,	// (0x0002a7dd) choice_list_pane_g1

0xc01e,	// (0x0002a7e5) choice_list_pane_t1

0x13f6,	// (0x0001fbbd) input_focus_pane_cp11

0x6762,	// (0x00024f29) title_pane_stacon_g2_ParamLimits

0x6762,	// (0x00024f29) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002de6b) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002de6b) title_pane_stacon_g

0x9155,	// (0x0002791c) cursor_press_pane

0x74c3,	// (0x00025c8a) popup_fep_hwr_window_ParamLimits

0x74c3,	// (0x00025c8a) popup_fep_hwr_window

0x754d,	// (0x00025d14) popup_fep_vkb_window_ParamLimits

0x754d,	// (0x00025d14) popup_fep_vkb_window

0xc02c,	// (0x0002a7f3) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002e2d0) fep_vkb_side_pane_g_ParamLimits

0x7ee2,	// (0x000266a9) fep_hwr_candidate_pane_ParamLimits

0x7ee2,	// (0x000266a9) fep_hwr_candidate_pane

0x7f0c,	// (0x000266d3) fep_hwr_side_pane_ParamLimits

0x7f0c,	// (0x000266d3) fep_hwr_side_pane

0x7f2e,	// (0x000266f5) fep_hwr_top_pane_ParamLimits

0x7f2e,	// (0x000266f5) fep_hwr_top_pane

0x7f46,	// (0x0002670d) fep_hwr_write_pane_ParamLimits

0x7f46,	// (0x0002670d) fep_hwr_write_pane

0xfb09,	// (0x0002e2d0) fep_vkb_side_pane_g

0xc034,	// (0x0002a7fb) fep_hwr_top_pane_g1

0xc046,	// (0x0002a80d) fep_hwr_top_pane_g2

0x7f72,	// (0x00026739) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002e2ac) fep_hwr_top_pane_g

0x7f87,	// (0x0002674e) fep_hwr_top_text_pane

0x6bcf,	// (0x00025396) fep_hwr_top_text_pane_g1

0xc07c,	// (0x0002a843) fep_hwr_top_text_pane_t1

0x8091,	// (0x00026858) fep_hwr_candidate_pane_g1

0xc2c7,	// (0x0002aa8e) fep_vkb_keypad_pane_g3_ParamLimits

0xc2c7,	// (0x0002aa8e) fep_vkb_keypad_pane_g3

0xc2f3,	// (0x0002aaba) fep_vkb_keypad_pane_g4_ParamLimits

0xc2f3,	// (0x0002aaba) fep_vkb_keypad_pane_g4

0xc36a,	// (0x0002ab31) fep_vkb_bottom_pane_g2_ParamLimits

0xc36a,	// (0x0002ab31) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002e2d7) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002e2d7) fep_vkb_bottom_pane_g

0xbfd3,	// (0x0002a79a) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002e2e1) cell_vkb_side_pane_g

0xc3f5,	// (0x0002abbc) cell_vkb_side_pane_t1

0xc403,	// (0x0002abca) cell_vkb_side_pane_t1_copy1

0xbfd3,	// (0x0002a79a) bg_fep_vkb_candidate_pane_g2

0xc547,	// (0x0002ad0e) cell_vkb_candidate_pane_ParamLimits

0xc08a,	// (0x0002a851) aid_size_cell_vkb_ParamLimits

0xc08a,	// (0x0002a851) aid_size_cell_vkb

0xc547,	// (0x0002ad0e) cell_vkb_candidate_pane

0x80ab,	// (0x00026872) bg_popup_fep_shadow_pane_g1

0xc11c,	// (0x0002a8e3) fep_vkb_bottom_pane_ParamLimits

0xc11c,	// (0x0002a8e3) fep_vkb_bottom_pane

0xc159,	// (0x0002a920) fep_vkb_candidate_pane_ParamLimits

0xc159,	// (0x0002a920) fep_vkb_candidate_pane

0xc175,	// (0x0002a93c) fep_vkb_keypad_pane_ParamLimits

0xc175,	// (0x0002a93c) fep_vkb_keypad_pane

0xc1a8,	// (0x0002a96f) fep_vkb_side_pane_ParamLimits

0xc1a8,	// (0x0002a96f) fep_vkb_side_pane

0xc1e4,	// (0x0002a9ab) fep_vkb_top_pane_ParamLimits

0xc1e4,	// (0x0002a9ab) fep_vkb_top_pane

0xc220,	// (0x0002a9e7) fep_vkb_top_pane_g1_ParamLimits

0xc220,	// (0x0002a9e7) fep_vkb_top_pane_g1

0xc22f,	// (0x0002a9f6) fep_vkb_top_pane_g2_ParamLimits

0xc22f,	// (0x0002a9f6) fep_vkb_top_pane_g2

0xc23e,	// (0x0002aa05) fep_vkb_top_pane_g3_ParamLimits

0xc23e,	// (0x0002aa05) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002e2c7) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002e2c7) fep_vkb_top_pane_g

0xc25c,	// (0x0002aa23) fep_vkb_top_text_pane_ParamLimits

0xc25c,	// (0x0002aa23) fep_vkb_top_text_pane

0xc26d,	// (0x0002aa34) fep_vkb_side_pane_g1_ParamLimits

0xc26d,	// (0x0002aa34) fep_vkb_side_pane_g1

0xc2b6,	// (0x0002aa7d) grid_vkb_side_pane_ParamLimits

0xc2b6,	// (0x0002aa7d) grid_vkb_side_pane

0x80b3,	// (0x0002687a) bg_popup_fep_shadow_pane_g2

0x80bc,	// (0x00026883) bg_popup_fep_shadow_pane_g3

0x80c4,	// (0x0002688b) bg_popup_fep_shadow_pane_g4

0x80cd,	// (0x00026894) bg_popup_fep_shadow_pane_g5

0x80d7,	// (0x0002689e) bg_popup_fep_shadow_pane_g6

0x80df,	// (0x000268a6) bg_popup_fep_shadow_pane_g7

0x31f8,	// (0x000219bf) bg_popup_fep_shadow_pane_g8

0xc315,	// (0x0002aadc) grid_vkb_keypad_number_pane_ParamLimits

0xc315,	// (0x0002aadc) grid_vkb_keypad_number_pane

0xc329,	// (0x0002aaf0) grid_vkb_keypad_pane_ParamLimits

0xc329,	// (0x0002aaf0) grid_vkb_keypad_pane

0xc34f,	// (0x0002ab16) fep_vkb_bottom_pane_g1_ParamLimits

0xc34f,	// (0x0002ab16) fep_vkb_bottom_pane_g1

0xc378,	// (0x0002ab3f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc378,	// (0x0002ab3f) grid_vkb_keypad_bottom_left_pane

0xc38d,	// (0x0002ab54) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc38d,	// (0x0002ab54) grid_vkb_keypad_bottom_right_pane

0xc3a2,	// (0x0002ab69) fep_vkb_top_text_pane_g1

0xc3bd,	// (0x0002ab84) fep_vkb_top_text_pane_t1

0xc3d2,	// (0x0002ab99) cell_vkb_side_pane_ParamLimits

0xc3d2,	// (0x0002ab99) cell_vkb_side_pane

0xbfd3,	// (0x0002a79a) cell_vkb_side_pane_g1

0xc411,	// (0x0002abd8) cell_vkb_keypad_pane_ParamLimits

0xc411,	// (0x0002abd8) cell_vkb_keypad_pane

0xc49e,	// (0x0002ac65) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002e2f4) bg_popup_fep_shadow_pane_g

0xbfd3,	// (0x0002a79a) cell_hwr_side_pane_g1

0xbfd3,	// (0x0002a79a) cell_hwr_side_pane_g2

0xc4a8,	// (0x0002ac6f) cell_vkb_keypad_pane_t1

0xc4b6,	// (0x0002ac7d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4b6,	// (0x0002ac7d) cell_vkb_keypad_bottom_left_pane

0xc4d3,	// (0x0002ac9a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d3,	// (0x0002ac9a) cell_vkb_keypad_bottom_right_pane

0xbfd3,	// (0x0002a79a) cell_vkb_keypad_bottom_left_pane_g1

0xbfd3,	// (0x0002a79a) cell_vkb_keypad_bottom_right_pane_g1

0xc50c,	// (0x0002acd3) cell_vkb_keypad_number_pane_ParamLimits

0xc50c,	// (0x0002acd3) cell_vkb_keypad_number_pane

0xc52b,	// (0x0002acf2) cell_vkb_keypad_number_pane_g1

0xc535,	// (0x0002acfc) cell_vkb_keypad_number_pane_g2

0xc53e,	// (0x0002ad05) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002e2e6) cell_vkb_keypad_number_pane_g

0xc4a8,	// (0x0002ac6f) cell_vkb_keypad_number_pane_t1

0xc568,	// (0x0002ad2f) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002e2e1) cell_hwr_side_pane_g

0xc581,	// (0x0002ad48) cell_hwr_side_pane_t1

0x80f1,	// (0x000268b8) cell_hwr_side_pane_t1_copy1

0xc24e,	// (0x0002aa15) cell_hwr_candidate_pane_g1

0x80ff,	// (0x000268c6) cell_hwr_candidate_pane_t1

0xbfd3,	// (0x0002a79a) cell_vkb_candidate_pane_g2

0xc607,	// (0x0002adce) cell_vkb_candidate_pane_t1

0x7ea9,	// (0x00026670) bg_popup_fep_shadow_pane_ParamLimits

0x7ea9,	// (0x00026670) bg_popup_fep_shadow_pane

0x13c6,	// (0x0001fb8d) bg_fep_hwr_top_pane_g4

0xc058,	// (0x0002a81f) bg_hwr_side_pane_g1_ParamLimits

0xc058,	// (0x0002a81f) bg_hwr_side_pane_g1

0x7fc5,	// (0x0002678c) cell_hwr_side_pane_ParamLimits

0x7fc5,	// (0x0002678c) cell_hwr_side_pane

0x8002,	// (0x000267c9) fep_hwr_write_pane_g1_ParamLimits

0x8002,	// (0x000267c9) fep_hwr_write_pane_g1

0x800f,	// (0x000267d6) fep_hwr_write_pane_g2_ParamLimits

0x800f,	// (0x000267d6) fep_hwr_write_pane_g2

0x801c,	// (0x000267e3) fep_hwr_write_pane_g3_ParamLimits

0x801c,	// (0x000267e3) fep_hwr_write_pane_g3

0x802a,	// (0x000267f1) fep_hwr_write_pane_g4_ParamLimits

0x802a,	// (0x000267f1) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002e2b3) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002e2b3) fep_hwr_write_pane_g

0x13c6,	// (0x0001fb8d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x13c6,	// (0x0001fb8d) bg_fep_hwr_candidate_pane_g2

0x803f,	// (0x00026806) cell_hwr_candidate_pane_ParamLimits

0x803f,	// (0x00026806) cell_hwr_candidate_pane

0x8091,	// (0x00026858) fep_hwr_candidate_pane_g1_ParamLimits

0xc0b8,	// (0x0002a87f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0b8,	// (0x0002a87f) bg_popup_fep_shadow_pane_cp2

0xc24e,	// (0x0002aa15) fep_vkb_top_pane_g4_ParamLimits

0xc24e,	// (0x0002aa15) fep_vkb_top_pane_g4

0xc294,	// (0x0002aa5b) fep_vkb_side_pane_g2_ParamLimits

0xc294,	// (0x0002aa5b) fep_vkb_side_pane_g2

0x4fed,	// (0x000237b4) list_setting_pane_t4_ParamLimits

0x4fed,	// (0x000237b4) list_setting_pane_t4

0x5081,	// (0x00023848) list_setting_number_pane_t5_ParamLimits

0x5081,	// (0x00023848) list_setting_number_pane_t5

0x6c35,	// (0x000253fc) list_double_heading_pane_cp2_ParamLimits

0x6c35,	// (0x000253fc) list_double_heading_pane_cp2

0xc615,	// (0x0002addc) list_double_heading_pane_g1_cp2_ParamLimits

0xc615,	// (0x0002addc) list_double_heading_pane_g1_cp2

0xc621,	// (0x0002ade8) list_double_heading_pane_g2_cp2_ParamLimits

0xc621,	// (0x0002ade8) list_double_heading_pane_g2_cp2

0xc635,	// (0x0002adfc) list_double_heading_pane_t1_cp2_ParamLimits

0xc635,	// (0x0002adfc) list_double_heading_pane_t1_cp2

0xc64b,	// (0x0002ae12) list_double_heading_pane_t2_cp2_ParamLimits

0xc64b,	// (0x0002ae12) list_double_heading_pane_t2_cp2

0x13ee,	// (0x0001fbb5) aid_value_unit2

0x6059,	// (0x00024820) popup_preview_fixed_window

0x15b3,	// (0x0001fd7a) bg_popup_preview_window_pane_cp02

0xc65d,	// (0x0002ae24) list_preview_fixed_pane

0xc6a3,	// (0x0002ae6a) list_empty_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_empty_pane_fp

0xc6a3,	// (0x0002ae6a) list_single_cale_day_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_cale_day_pane_fp

0xc6a3,	// (0x0002ae6a) list_single_graphic_heading_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_graphic_heading_pane_fp

0xc6a3,	// (0x0002ae6a) list_single_graphic_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_graphic_pane_fp

0xc6a3,	// (0x0002ae6a) list_single_heading_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_heading_pane_fp

0xc6a3,	// (0x0002ae6a) list_single_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_pane_fp

0xc6bc,	// (0x0002ae83) list_single_pane_fp_g1_ParamLimits

0xc6bc,	// (0x0002ae83) list_single_pane_fp_g1

0x4e2a,	// (0x000235f1) list_single_pane_fp_g2_ParamLimits

0x4e2a,	// (0x000235f1) list_single_pane_fp_g2

0x59c9,	// (0x00024190) list_single_pane_fp_g3_ParamLimits

0x59c9,	// (0x00024190) list_single_pane_fp_g3

0xc6c8,	// (0x0002ae8f) list_single_pane_fp_g4_ParamLimits

0xc6c8,	// (0x0002ae8f) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002e315) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002e315) list_single_pane_fp_g

0x59dd,	// (0x000241a4) list_single_pane_fp_t1_ParamLimits

0x59dd,	// (0x000241a4) list_single_pane_fp_t1

0x59f4,	// (0x000241bb) list_single_graphic_pane_fp_g1_ParamLimits

0x59f4,	// (0x000241bb) list_single_graphic_pane_fp_g1

0xc6bc,	// (0x0002ae83) list_single_graphic_pane_fp_g2_ParamLimits

0xc6bc,	// (0x0002ae83) list_single_graphic_pane_fp_g2

0x4e2a,	// (0x000235f1) list_single_graphic_pane_fp_g3_ParamLimits

0x4e2a,	// (0x000235f1) list_single_graphic_pane_fp_g3

0x59c9,	// (0x00024190) list_single_graphic_pane_fp_g4_ParamLimits

0x59c9,	// (0x00024190) list_single_graphic_pane_fp_g4

0xc6c8,	// (0x0002ae8f) list_single_graphic_pane_fp_g5_ParamLimits

0xc6c8,	// (0x0002ae8f) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e31e) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e31e) list_single_graphic_pane_fp_g

0x5a00,	// (0x000241c7) list_single_graphic_pane_fp_t1_ParamLimits

0x5a00,	// (0x000241c7) list_single_graphic_pane_fp_t1

0x59f4,	// (0x000241bb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x59f4,	// (0x000241bb) list_single_graphic_heading_pane_fp_g1

0xc6bc,	// (0x0002ae83) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6bc,	// (0x0002ae83) list_single_graphic_heading_pane_fp_g2

0x4e2a,	// (0x000235f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e2a,	// (0x000235f1) list_single_graphic_heading_pane_fp_g3

0x59c9,	// (0x00024190) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x59c9,	// (0x00024190) list_single_graphic_heading_pane_fp_g4

0xc6c8,	// (0x0002ae8f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6c8,	// (0x0002ae8f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e31e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e31e) list_single_graphic_heading_pane_fp_g

0x5a16,	// (0x000241dd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a16,	// (0x000241dd) list_single_graphic_heading_pane_fp_t1

0x5a2c,	// (0x000241f3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a2c,	// (0x000241f3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002e329) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002e329) list_single_graphic_heading_pane_fp_t

0x5a3e,	// (0x00024205) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a3e,	// (0x00024205) list_single_cale_day_pane_fp_g1

0xc6d4,	// (0x0002ae9b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d4,	// (0x0002ae9b) list_single_cale_day_pane_fp_g2

0x5a76,	// (0x0002423d) list_single_cale_day_pane_fp_g3_ParamLimits

0x5a76,	// (0x0002423d) list_single_cale_day_pane_fp_g3

0x5a9e,	// (0x00024265) list_single_cale_day_pane_fp_g4_ParamLimits

0x5a9e,	// (0x00024265) list_single_cale_day_pane_fp_g4

0x5ac2,	// (0x00024289) list_single_cale_day_pane_fp_g5_ParamLimits

0x5ac2,	// (0x00024289) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002e32e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002e32e) list_single_cale_day_pane_fp_g

0x5ae6,	// (0x000242ad) list_single_cale_day_pane_fp_t1_ParamLimits

0x5ae6,	// (0x000242ad) list_single_cale_day_pane_fp_t1

0x5b0c,	// (0x000242d3) list_single_cale_day_pane_fp_t2_ParamLimits

0x5b0c,	// (0x000242d3) list_single_cale_day_pane_fp_t2

0x5b25,	// (0x000242ec) list_single_cale_day_pane_fp_t3_ParamLimits

0x5b25,	// (0x000242ec) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002e339) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002e339) list_single_cale_day_pane_fp_t

0xc6bc,	// (0x0002ae83) list_empty_pane_fp_g1_ParamLimits

0xc6bc,	// (0x0002ae83) list_empty_pane_fp_g1

0x5b3e,	// (0x00024305) list_empty_pane_fp_t1

0x5b4c,	// (0x00024313) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002e340) list_empty_pane_fp_t

0xc6bc,	// (0x0002ae83) list_single_heading_pane_fp_g1_ParamLimits

0xc6bc,	// (0x0002ae83) list_single_heading_pane_fp_g1

0x4e2a,	// (0x000235f1) list_single_heading_pane_fp_g2_ParamLimits

0x4e2a,	// (0x000235f1) list_single_heading_pane_fp_g2

0x59c9,	// (0x00024190) list_single_heading_pane_fp_g3_ParamLimits

0x59c9,	// (0x00024190) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002e345) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002e345) list_single_heading_pane_fp_g

0x5b5a,	// (0x00024321) list_single_heading_pane_fp_t1_ParamLimits

0x5b5a,	// (0x00024321) list_single_heading_pane_fp_t1

0x5b6c,	// (0x00024333) list_single_heading_pane_fp_t2_ParamLimits

0x5b6c,	// (0x00024333) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002e34c) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002e34c) list_single_heading_pane_fp_t

0x65a9,	// (0x00024d70) aid_size_cell_fast

0x1596,	// (0x0001fd5d) soft_indicator_pane_cp1_t1

0x65e6,	// (0x00024dad) cell_app_pane_cp2_ParamLimits

0x65e6,	// (0x00024dad) cell_app_pane_cp2

0x7ecb,	// (0x00026692) fep_hwr_candidate_drop_down_list_pane

0x13d4,	// (0x0001fb9b) fep_hwr_candidate_pane_g3_ParamLimits

0x13d4,	// (0x0001fb9b) fep_hwr_candidate_pane_g3

0x13e1,	// (0x0001fba8) fep_hwr_candidate_pane_g4_ParamLimits

0x13e1,	// (0x0001fba8) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002e2c0) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002e2c0) fep_hwr_candidate_pane_g

0xc148,	// (0x0002a90f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc148,	// (0x0002a90f) fep_vkb_candidate_drop_down_list_pane

0xc570,	// (0x0002ad37) fep_vkb_candidate_pane_g3

0xc578,	// (0x0002ad3f) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002e2ed) fep_vkb_candidate_pane_g

0xc24e,	// (0x0002aa15) cell_hwr_candidate_pane_g1_ParamLimits

0xc58f,	// (0x0002ad56) cell_hwr_candidate_pane_g3_ParamLimits

0xc58f,	// (0x0002ad56) cell_hwr_candidate_pane_g3

0xc5b0,	// (0x0002ad77) cell_hwr_candidate_pane_g4_ParamLimits

0xc5b0,	// (0x0002ad77) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002e307) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002e307) cell_hwr_candidate_pane_g

0xc5d1,	// (0x0002ad98) cell_vkb_candidate_pane_g3_ParamLimits

0xc5d1,	// (0x0002ad98) cell_vkb_candidate_pane_g3

0xc5ec,	// (0x0002adb3) cell_vkb_candidate_pane_g4_ParamLimits

0xc5ec,	// (0x0002adb3) cell_vkb_candidate_pane_g4

0xc6e0,	// (0x0002aea7) cell_app_pane_cp2_g1_ParamLimits

0xc6e0,	// (0x0002aea7) cell_app_pane_cp2_g1

0xc6fe,	// (0x0002aec5) cell_app_pane_cp2_g2_ParamLimits

0xc6fe,	// (0x0002aec5) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002e351) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002e351) cell_app_pane_cp2_g

0xc70a,	// (0x0002aed1) cell_app_pane_cp2_t1_ParamLimits

0xc70a,	// (0x0002aed1) cell_app_pane_cp2_t1

0x311d,	// (0x000218e4) grid_highlight_pane_cp1_ParamLimits

0x311d,	// (0x000218e4) grid_highlight_pane_cp1

0x811d,	// (0x000268e4) cell_hwr_candidate_pane_cp1_ParamLimits

0x811d,	// (0x000268e4) cell_hwr_candidate_pane_cp1

0xc24e,	// (0x0002aa15) fep_hwr_candidate_drop_down_list_pane_g1

0xc71c,	// (0x0002aee3) fep_hwr_candidate_drop_down_list_pane_g2

0xc729,	// (0x0002aef0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e356) fep_hwr_candidate_drop_down_list_pane_g

0x8141,	// (0x00026908) fep_hwr_candidate_drop_down_list_scroll_pane

0x814a,	// (0x00026911) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x814a,	// (0x00026911) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8157,	// (0x0002691e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8157,	// (0x0002691e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8164,	// (0x0002692b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8164,	// (0x0002692b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5d1,	// (0x0002ad98) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5d1,	// (0x0002ad98) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5ec,	// (0x0002adb3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ec,	// (0x0002adb3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8171,	// (0x00026938) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8171,	// (0x00026938) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x818c,	// (0x00026953) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x818c,	// (0x00026953) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x81a7,	// (0x0002696e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81a7,	// (0x0002696e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002e35d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002e35d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc736,	// (0x0002aefd) cell_vkb_candidate_pane_cp1_ParamLimits

0xc736,	// (0x0002aefd) cell_vkb_candidate_pane_cp1

0xc24e,	// (0x0002aa15) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) fep_vkb_candidate_drop_down_list_pane_g1

0xc71c,	// (0x0002aee3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71c,	// (0x0002aee3) fep_vkb_candidate_drop_down_list_pane_g2

0xc729,	// (0x0002aef0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc729,	// (0x0002aef0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e356) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002e356) fep_vkb_candidate_drop_down_list_pane_g

0xc75c,	// (0x0002af23) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75c,	// (0x0002af23) fep_vkb_candidate_drop_down_list_scroll_pane

0xc769,	// (0x0002af30) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc769,	// (0x0002af30) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc776,	// (0x0002af3d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc776,	// (0x0002af3d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc782,	// (0x0002af49) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc782,	// (0x0002af49) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc58f,	// (0x0002ad56) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc58f,	// (0x0002ad56) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5b0,	// (0x0002ad77) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5b0,	// (0x0002ad77) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78e,	// (0x0002af55) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78e,	// (0x0002af55) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7af,	// (0x0002af76) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7af,	// (0x0002af76) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d0,	// (0x0002af97) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d0,	// (0x0002af97) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002e36e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002e36e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6179,	// (0x00024940) title_pane_g1_ParamLimits

0x6186,	// (0x0002494d) title_pane_g2_ParamLimits

0xf529,	// (0x0002dcf0) title_pane_g_ParamLimits

0x6bbf,	// (0x00025386) aid_call2_pane

0x6bc7,	// (0x0002538e) aid_call_pane

0x6bcf,	// (0x00025396) popup_clock_analogue_window_g1

0x6bcf,	// (0x00025396) popup_clock_analogue_window_g2

0x6bd7,	// (0x0002539e) popup_clock_analogue_window_g3

0x6be0,	// (0x000253a7) popup_clock_analogue_window_g4

0x1400,	// (0x0001fbc7) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002de9a) popup_clock_analogue_window_g

0x6be8,	// (0x000253af) popup_clock_analogue_window_t1

0x6c95,	// (0x0002545c) clock_digital_number_pane_ParamLimits

0x6c95,	// (0x0002545c) clock_digital_number_pane

0x6ca1,	// (0x00025468) clock_digital_number_pane_cp02_ParamLimits

0x6ca1,	// (0x00025468) clock_digital_number_pane_cp02

0x6cad,	// (0x00025474) clock_digital_number_pane_cp03_ParamLimits

0x6cad,	// (0x00025474) clock_digital_number_pane_cp03

0x6cb9,	// (0x00025480) clock_digital_number_pane_cp04_ParamLimits

0x6cb9,	// (0x00025480) clock_digital_number_pane_cp04

0x6cc5,	// (0x0002548c) clock_digital_separator_pane_ParamLimits

0x6cc5,	// (0x0002548c) clock_digital_separator_pane

0x6cd1,	// (0x00025498) popup_clock_digital_window_t1_ParamLimits

0x6cd1,	// (0x00025498) popup_clock_digital_window_t1

0x1400,	// (0x0001fbc7) clock_digital_number_pane_g1

0x1400,	// (0x0001fbc7) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002dea5) clock_digital_number_pane_g

0x1400,	// (0x0001fbc7) clock_digital_separator_pane_g1

0x1400,	// (0x0001fbc7) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002dea5) clock_digital_separator_pane_g

0x94b8,	// (0x00027c7f) aid_fill_nsta_ParamLimits

0x9604,	// (0x00027dcb) indicator_nsta_pane_ParamLimits

0x9795,	// (0x00027f5c) popup_clock_analogue_window

0x9795,	// (0x00027f5c) popup_clock_digital_window

0xb9f3,	// (0x0002a1ba) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0002a1e3) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002e240) clock_nsta_pane_t

0x69a8,	// (0x0002516f) aid_size_max_handle

0x69b2,	// (0x00025179) aid_size_min_handle

0x9155,	// (0x0002791c) editor_scroll_pane

0xc7eb,	// (0x0002afb2) ex_editor_pane

0x32eb,	// (0x00021ab2) scroll_pane_cp13

0x3035,	// (0x000217fc) scroll_pane_cp14

0x6c1d,	// (0x000253e4) scroll_pane_cp36

0x6c4b,	// (0x00025412) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c4b,	// (0x00025412) list_single_graphic_hl_pane_cp2

0xaf78,	// (0x0002973f) list_single_graphic_hl_pane_ParamLimits

0xaf78,	// (0x0002973f) list_single_graphic_hl_pane

0x5b82,	// (0x00024349) aid_size_min_hl_cp1

0xc7f3,	// (0x0002afba) list_highlight_pane_cp34_ParamLimits

0xc7f3,	// (0x0002afba) list_highlight_pane_cp34

0xc804,	// (0x0002afcb) list_single_graphic_hl_pane_g1_ParamLimits

0xc804,	// (0x0002afcb) list_single_graphic_hl_pane_g1

0x5b8b,	// (0x00024352) list_single_graphic_hl_pane_g2_ParamLimits

0x5b8b,	// (0x00024352) list_single_graphic_hl_pane_g2

0x5b8b,	// (0x00024352) list_single_graphic_hl_pane_g3_ParamLimits

0x5b8b,	// (0x00024352) list_single_graphic_hl_pane_g3

0x53eb,	// (0x00023bb2) list_single_graphic_hl_pane_g4_ParamLimits

0x53eb,	// (0x00023bb2) list_single_graphic_hl_pane_g4

0x5b97,	// (0x0002435e) list_single_graphic_hl_pane_g5_ParamLimits

0x5b97,	// (0x0002435e) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002e37f) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002e37f) list_single_graphic_hl_pane_g

0x5bab,	// (0x00024372) list_single_graphic_hl_pane_t1_ParamLimits

0x5bab,	// (0x00024372) list_single_graphic_hl_pane_t1

0xc811,	// (0x0002afd8) aid_size_min_hl_cp2

0xc81a,	// (0x0002afe1) list_highlight_pane_cp34_cp2_ParamLimits

0xc81a,	// (0x0002afe1) list_highlight_pane_cp34_cp2

0xc804,	// (0x0002afcb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc804,	// (0x0002afcb) list_single_graphic_hl_pane_g1_cp2

0xc827,	// (0x0002afee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc827,	// (0x0002afee) list_single_graphic_hl_pane_g2_cp2

0xc833,	// (0x0002affa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc833,	// (0x0002affa) list_single_graphic_hl_pane_g3_cp2

0xbb51,	// (0x0002a318) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbb51,	// (0x0002a318) list_single_graphic_hl_pane_g4_cp2

0xc841,	// (0x0002b008) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc841,	// (0x0002b008) list_single_graphic_hl_pane_g5_cp2

0x72c3,	// (0x00025a8a) control_pane_g4_ParamLimits

0x72c3,	// (0x00025a8a) control_pane_g4

0x947c,	// (0x00027c43) bg_popup_sub_pane_cp10_ParamLimits

0xbfdd,	// (0x0002a7a4) list_choice_list_pane_ParamLimits

0xbfec,	// (0x0002a7b3) scroll_pane_cp23

0x15b3,	// (0x0001fd7a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc65d,	// (0x0002ae24) list_preview_fixed_pane_ParamLimits

0xc673,	// (0x0002ae3a) list_preview_fixed_pane_cp_ParamLimits

0xc673,	// (0x0002ae3a) list_preview_fixed_pane_cp

0xc67f,	// (0x0002ae46) popup_preview_fixed_window_g1_ParamLimits

0xc67f,	// (0x0002ae46) popup_preview_fixed_window_g1

0xc68b,	// (0x0002ae52) popup_preview_fixed_window_g2_ParamLimits

0xc68b,	// (0x0002ae52) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002e30e) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002e30e) popup_preview_fixed_window_g

0x6847,	// (0x0002500e) aid_navi_side_left_pane_ParamLimits

0x685c,	// (0x00025023) aid_navi_side_right_pane_ParamLimits

0x6874,	// (0x0002503b) navi_icon_pane_stacon_ParamLimits

0x6888,	// (0x0002504f) navi_navi_pane_stacon_ParamLimits

0x6874,	// (0x0002503b) navi_text_pane_stacon_ParamLimits

0x13f6,	// (0x0001fbbd) main_text_info_pane

0xc86b,	// (0x0002b032) listscroll_text_info_pane

0xc873,	// (0x0002b03a) list_text_info_pane_ParamLimits

0xc873,	// (0x0002b03a) list_text_info_pane

0xc882,	// (0x0002b049) scroll_pane_cp24_ParamLimits

0xc882,	// (0x0002b049) scroll_pane_cp24

0xc8a0,	// (0x0002b067) list_text_info_pane_t1_ParamLimits

0xc8a0,	// (0x0002b067) list_text_info_pane_t1

0x742b,	// (0x00025bf2) popup_fast_swap2_window_ParamLimits

0x742b,	// (0x00025bf2) popup_fast_swap2_window

0xc8c5,	// (0x0002b08c) aid_size_cell_fast2

0x13f6,	// (0x0001fbbd) bg_popup_window_pane_cp17

0x9de8,	// (0x000285af) heading_pane_cp2

0x9df0,	// (0x000285b7) listscroll_fast2_pane

0xc8cf,	// (0x0002b096) grid_fast2_pane

0xc8d9,	// (0x0002b0a0) listscroll_fast2_pane_g1

0xc8e3,	// (0x0002b0aa) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002e38a) listscroll_fast2_pane_g

0x32eb,	// (0x00021ab2) scroll_pane_cp26

0xc8ed,	// (0x0002b0b4) cell_fast2_pane_ParamLimits

0xc8ed,	// (0x0002b0b4) cell_fast2_pane

0xc904,	// (0x0002b0cb) cell_fast2_pane_g1

0xc90d,	// (0x0002b0d4) cell_fast2_pane_g2

0xc916,	// (0x0002b0dd) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002e38f) cell_fast2_pane_g

0x2dfc,	// (0x000215c3) grid_highlight_pane_cp9

0x2e11,	// (0x000215d8) main_eswt_pane_ParamLimits

0x2e11,	// (0x000215d8) main_eswt_pane

0xc897,	// (0x0002b05e) list_single_text_info_pane

0xc91e,	// (0x0002b0e5) eswt_ctrl_button_pane

0xc91e,	// (0x0002b0e5) eswt_ctrl_canvas_pane

0xc926,	// (0x0002b0ed) eswt_ctrl_combo_pane

0xc91e,	// (0x0002b0e5) eswt_ctrl_default_pane

0xc91e,	// (0x0002b0e5) eswt_ctrl_label_pane

0xc92e,	// (0x0002b0f5) eswt_ctrl_wait_pane

0xc936,	// (0x0002b0fd) eswt_shell_pane

0x13f6,	// (0x0001fbbd) listscroll_eswt_app_pane

0xc956,	// (0x0002b11d) popup_eswt_tasktip_window_ParamLimits

0xc956,	// (0x0002b11d) popup_eswt_tasktip_window

0x9a26,	// (0x000281ed) bg_popup_window_pane_cp18

0xc967,	// (0x0002b12e) eswt_control_pane_g1_ParamLimits

0xc967,	// (0x0002b12e) eswt_control_pane_g1

0xc974,	// (0x0002b13b) eswt_control_pane_g2_ParamLimits

0xc974,	// (0x0002b13b) eswt_control_pane_g2

0xc981,	// (0x0002b148) eswt_control_pane_g3_ParamLimits

0xc981,	// (0x0002b148) eswt_control_pane_g3

0xc98e,	// (0x0002b155) eswt_control_pane_g4_ParamLimits

0xc98e,	// (0x0002b155) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002e396) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002e396) eswt_control_pane_g

0x311d,	// (0x000218e4) bg_button_pane_ParamLimits

0x311d,	// (0x000218e4) bg_button_pane

0x2e11,	// (0x000215d8) common_borders_pane_copy2_ParamLimits

0x2e11,	// (0x000215d8) common_borders_pane_copy2

0xc99b,	// (0x0002b162) control_button_pane_g1_ParamLimits

0xc99b,	// (0x0002b162) control_button_pane_g1

0xc9a7,	// (0x0002b16e) control_button_pane_g2_ParamLimits

0xc9a7,	// (0x0002b16e) control_button_pane_g2

0xc9b3,	// (0x0002b17a) control_button_pane_g3_ParamLimits

0xc9b3,	// (0x0002b17a) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002e39f) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002e39f) control_button_pane_g

0xc9c7,	// (0x0002b18e) control_button_pane_t1

0xc9d5,	// (0x0002b19c) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002e3a6) control_button_pane_t

0x99b2,	// (0x00028179) bg_button_pane_g1

0x99ba,	// (0x00028181) bg_button_pane_g2

0x99c2,	// (0x00028189) bg_button_pane_g3

0x99ca,	// (0x00028191) bg_button_pane_g4

0x99d2,	// (0x00028199) bg_button_pane_g5

0x99da,	// (0x000281a1) bg_button_pane_g6

0x99e2,	// (0x000281a9) bg_button_pane_g7

0x99ea,	// (0x000281b1) bg_button_pane_g8

0x99f2,	// (0x000281b9) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002e008) bg_button_pane_g

0xbf98,	// (0x0002a75f) common_borders_pane_ParamLimits

0xbf98,	// (0x0002a75f) common_borders_pane

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy1_ParamLimits

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy1

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy1_ParamLimits

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy1

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy1_ParamLimits

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy1

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy1_ParamLimits

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy1

0xbfd3,	// (0x0002a79a) bg_eswt_ctrl_canvas_pane_g1

0xbf98,	// (0x0002a75f) common_borders_pane_cp2_ParamLimits

0xbf98,	// (0x0002a75f) common_borders_pane_cp2

0xbf98,	// (0x0002a75f) common_borders_pane_cp3_ParamLimits

0xbf98,	// (0x0002a75f) common_borders_pane_cp3

0xc9e3,	// (0x0002b1aa) separator_horizontal_pane

0xc9eb,	// (0x0002b1b2) separator_vertical_pane

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy2_ParamLimits

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy2

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy2_ParamLimits

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy2

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy2_ParamLimits

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy2

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy2_ParamLimits

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy2

0x13f6,	// (0x0001fbbd) common_borders_pane_cp4

0xc9f4,	// (0x0002b1bb) separator_horizontal_pane_g1

0xc9fd,	// (0x0002b1c4) separator_horizontal_pane_g2

0xca06,	// (0x0002b1cd) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002e3ab) separator_horizontal_pane_g

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy3_ParamLimits

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy3

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy3_ParamLimits

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy3

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy3_ParamLimits

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy3

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy3_ParamLimits

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy3

0x13f6,	// (0x0001fbbd) common_borders_pane_cp5

0xca0f,	// (0x0002b1d6) separator_vertical_pane_g1

0xca18,	// (0x0002b1df) separator_vertical_pane_g2

0xca21,	// (0x0002b1e8) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002e3b2) separator_vertical_pane_g

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy4_ParamLimits

0xc967,	// (0x0002b12e) eswt_control_pane_g1_copy4

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy4_ParamLimits

0xc974,	// (0x0002b13b) eswt_control_pane_g2_copy4

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy4_ParamLimits

0xc981,	// (0x0002b148) eswt_control_pane_g3_copy4

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy4_ParamLimits

0xc98e,	// (0x0002b155) eswt_control_pane_g4_copy4

0xca2a,	// (0x0002b1f1) eswt_ctrl_combo_button_pane

0xca32,	// (0x0002b1f9) eswt_ctrl_input_pane

0xca3a,	// (0x0002b201) popup_choice_list_window_cp70

0xca42,	// (0x0002b209) eswt_ctrl_input_pane_t1

0x13f6,	// (0x0001fbbd) input_focus_pane_cp70

0xbf98,	// (0x0002a75f) bg_button_pane_cp70_ParamLimits

0xbf98,	// (0x0002a75f) bg_button_pane_cp70

0xca50,	// (0x0002b217) eswt_ctrl_combo_button_pane_g1

0xca58,	// (0x0002b21f) wait_bar_pane_cp70

0x9a26,	// (0x000281ed) bg_popup_window_pane_cp70_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_window_pane_cp70

0xca60,	// (0x0002b227) popup_eswt_tasktip_window_t1

0xca76,	// (0x0002b23d) wait_bar_pane_cp71_ParamLimits

0xca76,	// (0x0002b23d) wait_bar_pane_cp71

0xca82,	// (0x0002b249) grid_eswt_app_pane

0x6a0c,	// (0x000251d3) scroll_pane_cp70

0xca8b,	// (0x0002b252) cell_eswt_app_pane_ParamLimits

0xca8b,	// (0x0002b252) cell_eswt_app_pane

0xcabd,	// (0x0002b284) cell_eswt_app_pane_g1_ParamLimits

0xcabd,	// (0x0002b284) cell_eswt_app_pane_g1

0xcaec,	// (0x0002b2b3) cell_eswt_app_pane_g2_ParamLimits

0xcaec,	// (0x0002b2b3) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002e3b9) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002e3b9) cell_eswt_app_pane_g

0xcb15,	// (0x0002b2dc) cell_eswt_app_pane_t1_ParamLimits

0xcb15,	// (0x0002b2dc) cell_eswt_app_pane_t1

0xcb47,	// (0x0002b30e) grid_highlight_pane_cp70_ParamLimits

0xcb47,	// (0x0002b30e) grid_highlight_pane_cp70

0x901b,	// (0x000277e2) set_content_pane_g1

0x9403,	// (0x00027bca) status_small_volume_pane

0x81c2,	// (0x00026989) status_small_volume_pane_g1

0x81ca,	// (0x00026991) volume_small2_pane

0x81d3,	// (0x0002699a) volume_small2_pane_g1

0x81dc,	// (0x000269a3) volume_small2_pane_g2

0x81e5,	// (0x000269ac) volume_small2_pane_g3

0x81ee,	// (0x000269b5) volume_small2_pane_g4

0x81f7,	// (0x000269be) volume_small2_pane_g5

0x8200,	// (0x000269c7) volume_small2_pane_g6

0x8209,	// (0x000269d0) volume_small2_pane_g7

0x8212,	// (0x000269d9) volume_small2_pane_g8

0x821b,	// (0x000269e2) volume_small2_pane_g9

0x8224,	// (0x000269eb) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002e3be) volume_small2_pane_g

0xc3a2,	// (0x0002ab69) fep_vkb_top_text_pane_g1_ParamLimits

0xc3bd,	// (0x0002ab84) fep_vkb_top_text_pane_t1_ParamLimits

0xc697,	// (0x0002ae5e) popup_preview_fixed_window_g3_ParamLimits

0xc697,	// (0x0002ae5e) popup_preview_fixed_window_g3

0x793e,	// (0x00026105) popup_toolbar_trans_pane

0xad7e,	// (0x00029545) aid_height_set_list_ParamLimits

0xad8f,	// (0x00029556) aid_size_parent_ParamLimits

0x947c,	// (0x00027c43) list_highlight_pane_cp2_ParamLimits

0x901b,	// (0x000277e2) set_content_pane_g1_ParamLimits

0x563f,	// (0x00023e06) list_single_image_pane_ParamLimits

0x563f,	// (0x00023e06) list_single_image_pane

0xcb53,	// (0x0002b31a) aid_size_cell_image_ParamLimits

0xcb53,	// (0x0002b31a) aid_size_cell_image

0xcb60,	// (0x0002b327) grid_single_image_pane_ParamLimits

0xcb60,	// (0x0002b327) grid_single_image_pane

0x3143,	// (0x0002190a) list_single_image_pane_g1_ParamLimits

0x3143,	// (0x0002190a) list_single_image_pane_g1

0x314f,	// (0x00021916) list_single_image_pane_g2_ParamLimits

0x314f,	// (0x00021916) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002e3d3) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002e3d3) list_single_image_pane_g

0xcb6e,	// (0x0002b335) list_single_image_pane_t1_ParamLimits

0xcb6e,	// (0x0002b335) list_single_image_pane_t1

0xcb84,	// (0x0002b34b) cell_image_list_pane_ParamLimits

0xcb84,	// (0x0002b34b) cell_image_list_pane

0xcb9c,	// (0x0002b363) cell_image_list_pane_g1

0xcba5,	// (0x0002b36c) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002e3d8) cell_image_list_pane_g

0xcbae,	// (0x0002b375) aid_size_cell_tb_trans_pane

0x311d,	// (0x000218e4) bg_tb_trans_pane

0xcbc0,	// (0x0002b387) grid_tb_trans_pane

0x99b2,	// (0x00028179) bg_tb_trans_pane_g1

0x99ba,	// (0x00028181) bg_tb_trans_pane_g2

0x99c2,	// (0x00028189) bg_tb_trans_pane_g3

0x99ca,	// (0x00028191) bg_tb_trans_pane_g4

0x99d2,	// (0x00028199) bg_tb_trans_pane_g5

0x99ea,	// (0x000281b1) bg_tb_trans_pane_g6

0x99f2,	// (0x000281b9) bg_tb_trans_pane_g7

0x99da,	// (0x000281a1) bg_tb_trans_pane_g8

0x99e2,	// (0x000281a9) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002e3dd) bg_tb_trans_pane_g

0xcbd4,	// (0x0002b39b) cell_toolbar_trans_pane_ParamLimits

0xcbd4,	// (0x0002b39b) cell_toolbar_trans_pane

0xbfd3,	// (0x0002a79a) cell_toolbar_trans_pane_g1

0xbc0b,	// (0x0002a3d2) list_form2_midp_pane_t1

0xbc19,	// (0x0002a3e0) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002e286) list_form2_midp_pane_t

0xbc27,	// (0x0002a3ee) scroll_pane_cp51_ParamLimits

0xbdee,	// (0x0002a5b5) form2_midp_wait_pane_g1

0xbdf7,	// (0x0002a5be) form2_midp_wait_pane_g2

0xbe00,	// (0x0002a5c7) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002e29b) form2_midp_wait_pane_g

0x1466,	// (0x0001fc2d) list_highlight_pane_cp21_ParamLimits

0xbe39,	// (0x0002a600) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe48,	// (0x0002a60f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x55f5,	// (0x00023dbc) list_single_2graphic_im_pane_ParamLimits

0x55f5,	// (0x00023dbc) list_single_2graphic_im_pane

0xcbfa,	// (0x0002b3c1) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfa,	// (0x0002b3c1) list_single_2graphic_im_pane_g1

0xcc0b,	// (0x0002b3d2) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0b,	// (0x0002b3d2) list_single_2graphic_im_pane_g2

0xcc17,	// (0x0002b3de) list_single_2graphic_im_pane_g3_ParamLimits

0xcc17,	// (0x0002b3de) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002e3f0) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002e3f0) list_single_2graphic_im_pane_g

0xcc37,	// (0x0002b3fe) list_single_2graphic_im_pane_t1_ParamLimits

0xcc37,	// (0x0002b3fe) list_single_2graphic_im_pane_t1

0xc6a3,	// (0x0002ae6a) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6a3,	// (0x0002ae6a) list_single_graphic_2heading_pane_fp

0x59f4,	// (0x000241bb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x59f4,	// (0x000241bb) list_single_graphic_2heading_pane_fp_g1

0xc6bc,	// (0x0002ae83) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6bc,	// (0x0002ae83) list_single_graphic_2heading_pane_fp_g2

0x4e2a,	// (0x000235f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e2a,	// (0x000235f1) list_single_graphic_2heading_pane_fp_g3

0x59c9,	// (0x00024190) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x59c9,	// (0x00024190) list_single_graphic_2heading_pane_fp_g4

0xc6c8,	// (0x0002ae8f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6c8,	// (0x0002ae8f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e31e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e31e) list_single_graphic_2heading_pane_fp_g

0x5bc1,	// (0x00024388) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5bc1,	// (0x00024388) list_single_graphic_2heading_pane_fp_t1

0x5a2c,	// (0x000241f3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a2c,	// (0x000241f3) list_single_graphic_2heading_pane_fp_t2

0x5bd7,	// (0x0002439e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5bd7,	// (0x0002439e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002e3f9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002e3f9) list_single_graphic_2heading_pane_fp_t

0xc064,	// (0x0002a82b) fep_hwr_write_pane_g5_ParamLimits

0xc064,	// (0x0002a82b) fep_hwr_write_pane_g5

0xc070,	// (0x0002a837) fep_hwr_write_pane_g6_ParamLimits

0xc070,	// (0x0002a837) fep_hwr_write_pane_g6

0xc936,	// (0x0002b0fd) eswt_shell_pane_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_window_pane_cp18_ParamLimits

0xacd5,	// (0x0002949c) heading_pane_cp70

0xca60,	// (0x0002b227) popup_eswt_tasktip_window_t1_ParamLimits

0x950f,	// (0x00027cd6) aid_touch_tab_arrow_left

0x951b,	// (0x00027ce2) aid_touch_tab_arrow_right

0x619f,	// (0x00024966) title_pane_g3_ParamLimits

0x619f,	// (0x00024966) title_pane_g3

0x3076,	// (0x0002183d) set_value_pane_g1

0x793e,	// (0x00026105) popup_toolbar_trans_pane_ParamLimits

0xcbae,	// (0x0002b375) aid_size_cell_tb_trans_pane_ParamLimits

0x311d,	// (0x000218e4) bg_tb_trans_pane_ParamLimits

0xcbc0,	// (0x0002b387) grid_tb_trans_pane_ParamLimits

0x15b3,	// (0x0001fd7a) cont_note_pane_ParamLimits

0x15b3,	// (0x0001fd7a) cont_note_pane

0x2e11,	// (0x000215d8) cont_snote2_single_text_pane_ParamLimits

0x2e11,	// (0x000215d8) cont_snote2_single_text_pane

0x2e11,	// (0x000215d8) cont_snote2_single_graphic_pane_ParamLimits

0x2e11,	// (0x000215d8) cont_snote2_single_graphic_pane

0xa018,	// (0x000287df) cont_note_wait_pane_ParamLimits

0xa018,	// (0x000287df) cont_note_wait_pane

0xa018,	// (0x000287df) cont_note_image_pane_ParamLimits

0xa018,	// (0x000287df) cont_note_image_pane

0xcc68,	// (0x0002b42f) popup_note2_window_g1_ParamLimits

0xcc68,	// (0x0002b42f) popup_note2_window_g1

0xcc99,	// (0x0002b460) popup_note2_window_t1_ParamLimits

0xcc99,	// (0x0002b460) popup_note2_window_t1

0xccde,	// (0x0002b4a5) popup_note2_window_t2_ParamLimits

0xccde,	// (0x0002b4a5) popup_note2_window_t2

0xcd23,	// (0x0002b4ea) popup_note2_window_t3_ParamLimits

0xcd23,	// (0x0002b4ea) popup_note2_window_t3

0xcd68,	// (0x0002b52f) popup_note2_window_t4_ParamLimits

0xcd68,	// (0x0002b52f) popup_note2_window_t4

0x1637,	// (0x0001fdfe) popup_note2_window_t5_ParamLimits

0x1637,	// (0x0001fdfe) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002e405) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002e405) popup_note2_window_t

0xcd97,	// (0x0002b55e) popup_note2_image_window_g1_ParamLimits

0xcd97,	// (0x0002b55e) popup_note2_image_window_g1

0xcda3,	// (0x0002b56a) popup_note2_image_window_g2_ParamLimits

0xcda3,	// (0x0002b56a) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002e410) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002e410) popup_note2_image_window_g

0xcdb5,	// (0x0002b57c) popup_note2_image_window_t1_ParamLimits

0xcdb5,	// (0x0002b57c) popup_note2_image_window_t1

0xcdcd,	// (0x0002b594) popup_note2_image_window_t2_ParamLimits

0xcdcd,	// (0x0002b594) popup_note2_image_window_t2

0xcde5,	// (0x0002b5ac) popup_note2_image_window_t3_ParamLimits

0xcde5,	// (0x0002b5ac) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002e415) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002e415) popup_note2_image_window_t

0xa026,	// (0x000287ed) popup_note2_wait_window_g1_ParamLimits

0xa026,	// (0x000287ed) popup_note2_wait_window_g1

0xce01,	// (0x0002b5c8) popup_note2_wait_window_g2_ParamLimits

0xce01,	// (0x0002b5c8) popup_note2_wait_window_g2

0xa03e,	// (0x00028805) popup_note2_wait_window_g3_ParamLimits

0xa03e,	// (0x00028805) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002e41c) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002e41c) popup_note2_wait_window_g

0xce0d,	// (0x0002b5d4) popup_note2_wait_window_t1_ParamLimits

0xce0d,	// (0x0002b5d4) popup_note2_wait_window_t1

0xce2b,	// (0x0002b5f2) popup_note2_wait_window_t2_ParamLimits

0xce2b,	// (0x0002b5f2) popup_note2_wait_window_t2

0xce49,	// (0x0002b610) popup_note2_wait_window_t3_ParamLimits

0xce49,	// (0x0002b610) popup_note2_wait_window_t3

0xce5b,	// (0x0002b622) popup_note2_wait_window_t4_ParamLimits

0xce5b,	// (0x0002b622) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002e423) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002e423) popup_note2_wait_window_t

0xce6d,	// (0x0002b634) wait_bar2_pane_ParamLimits

0xce6d,	// (0x0002b634) wait_bar2_pane

0xce85,	// (0x0002b64c) popup_snote2_single_text_window_g1_ParamLimits

0xce85,	// (0x0002b64c) popup_snote2_single_text_window_g1

0xcead,	// (0x0002b674) popup_snote2_single_text_window_t1_ParamLimits

0xcead,	// (0x0002b674) popup_snote2_single_text_window_t1

0xcef9,	// (0x0002b6c0) popup_snote2_single_text_window_t2_ParamLimits

0xcef9,	// (0x0002b6c0) popup_snote2_single_text_window_t2

0xcf45,	// (0x0002b70c) popup_snote2_single_text_window_t3_ParamLimits

0xcf45,	// (0x0002b70c) popup_snote2_single_text_window_t3

0xcf86,	// (0x0002b74d) popup_snote2_single_text_window_t4_ParamLimits

0xcf86,	// (0x0002b74d) popup_snote2_single_text_window_t4

0xcfbc,	// (0x0002b783) popup_snote2_single_text_window_t5_ParamLimits

0xcfbc,	// (0x0002b783) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002e42c) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002e42c) popup_snote2_single_text_window_t

0xcfe7,	// (0x0002b7ae) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe7,	// (0x0002b7ae) popup_snote2_single_graphic_window_g1

0xd00f,	// (0x0002b7d6) popup_snote2_single_graphic_window_g2_ParamLimits

0xd00f,	// (0x0002b7d6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002e437) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002e437) popup_snote2_single_graphic_window_g

0xd037,	// (0x0002b7fe) popup_snote2_single_graphic_window_t1_ParamLimits

0xd037,	// (0x0002b7fe) popup_snote2_single_graphic_window_t1

0xd083,	// (0x0002b84a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd083,	// (0x0002b84a) popup_snote2_single_graphic_window_t2

0xcf45,	// (0x0002b70c) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf45,	// (0x0002b70c) popup_snote2_single_graphic_window_t3

0xcf86,	// (0x0002b74d) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf86,	// (0x0002b74d) popup_snote2_single_graphic_window_t4

0xcfbc,	// (0x0002b783) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbc,	// (0x0002b783) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002e43c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002e43c) popup_snote2_single_graphic_window_t

0xbacb,	// (0x0002a292) clock_nsta_pane_cp2_t1

0xbacb,	// (0x0002a292) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002e25c) clock_nsta_pane_cp2_t

0x51ab,	// (0x00023972) form_field_data_wide_pane_g1_ParamLimits

0x3143,	// (0x0002190a) form_field_data_wide_pane_g2_ParamLimits

0x3143,	// (0x0002190a) form_field_data_wide_pane_g2

0x314f,	// (0x00021916) form_field_data_wide_pane_g3_ParamLimits

0x314f,	// (0x00021916) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002de1d) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002de1d) form_field_data_wide_pane_g

0xb9a6,	// (0x0002a16d) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0002a16d) grid_touch_3_pane

0xd0cf,	// (0x0002b896) cell_touch_3_pane_ParamLimits

0xd0cf,	// (0x0002b896) cell_touch_3_pane

0xbfd3,	// (0x0002a79a) cell_touch_3_pane_g1

0xbfd3,	// (0x0002a79a) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002e2e1) cell_touch_3_pane_g

0x168f,	// (0x0001fe56) cont_query_data_pane

0x1697,	// (0x0001fe5e) cont_query_data_pane_cp1

0xd102,	// (0x0002b8c9) button_value_adjust_pane_cp7

0xd10a,	// (0x0002b8d1) query_popup_pane_cp3

0x6d4e,	// (0x00025515) bg_popup_sub_pane_cp22_ParamLimits

0x6d64,	// (0x0002552b) navi_navi_volume_pane_cp2

0x6d7f,	// (0x00025546) popup_side_volume_key_window_g2

0x6d8e,	// (0x00025555) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002deb3) popup_side_volume_key_window_g

0x6dab,	// (0x00025572) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002deba) popup_side_volume_key_window_t

0x71aa,	// (0x00025971) popup_side_volume_key_window_ParamLimits

0x4dea,	// (0x000235b1) list_double_graphic_pane_g4_ParamLimits

0x4dea,	// (0x000235b1) list_double_graphic_pane_g4

0x5626,	// (0x00023ded) list_single_2heading_msg_pane_ParamLimits

0x5626,	// (0x00023ded) list_single_2heading_msg_pane

0x5bf7,	// (0x000243be) list_single_2heading_msg_pane_g1_ParamLimits

0x5bf7,	// (0x000243be) list_single_2heading_msg_pane_g1

0x4c19,	// (0x000233e0) list_single_2heading_msg_pane_g2_ParamLimits

0x4c19,	// (0x000233e0) list_single_2heading_msg_pane_g2

0x5c03,	// (0x000243ca) list_single_2heading_msg_pane_g3_ParamLimits

0x5c03,	// (0x000243ca) list_single_2heading_msg_pane_g3

0x5c0f,	// (0x000243d6) list_single_2heading_msg_pane_g4_ParamLimits

0x5c0f,	// (0x000243d6) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002e447) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002e447) list_single_2heading_msg_pane_g

0x5c27,	// (0x000243ee) list_single_2heading_msg_pane_t1_ParamLimits

0x5c27,	// (0x000243ee) list_single_2heading_msg_pane_t1

0x5c4f,	// (0x00024416) list_single_2heading_msg_pane_t2_ParamLimits

0x5c4f,	// (0x00024416) list_single_2heading_msg_pane_t2

0x5c83,	// (0x0002444a) list_single_2heading_msg_pane_t3_ParamLimits

0x5c83,	// (0x0002444a) list_single_2heading_msg_pane_t3

0x5cbc,	// (0x00024483) list_single_2heading_msg_pane_t4_ParamLimits

0x5cbc,	// (0x00024483) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002e450) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002e450) list_single_2heading_msg_pane_t

0x1414,	// (0x0001fbdb) title_pane_g4_ParamLimits

0x1414,	// (0x0001fbdb) title_pane_g4

0x676f,	// (0x00024f36) title_pane_stacon_g3_ParamLimits

0x676f,	// (0x00024f36) title_pane_stacon_g3

0xcc2b,	// (0x0002b3f2) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2b,	// (0x0002b3f2) list_single_2graphic_im_pane_g4

0xaa88,	// (0x0002924f) popup_side_volume_key_window_cp

0xb2b6,	// (0x00029a7d) main_idle_act2_pane_t1

0x7a42,	// (0x00026209) toolbar_button_pane_g10

0x64fc,	// (0x00024cc3) popup_toolbar_window_cp1

0xbabc,	// (0x0002a283) clock_nsta_pane_cp_t1

0xbabc,	// (0x0002a283) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002e257) clock_nsta_pane_cp_t

0x6d64,	// (0x0002552b) navi_navi_volume_pane_cp2_ParamLimits

0x6d73,	// (0x0002553a) popup_side_volume_key_window_g1_ParamLimits

0x6d7f,	// (0x00025546) popup_side_volume_key_window_g2_ParamLimits

0x6d8e,	// (0x00025555) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002deb3) popup_side_volume_key_window_g_ParamLimits

0x7eb7,	// (0x0002667e) fep_hwr_aid_pane

0x13c6,	// (0x0001fb8d) bg_fep_hwr_top_pane_g4_ParamLimits

0xc034,	// (0x0002a7fb) fep_hwr_top_pane_g1_ParamLimits

0xc046,	// (0x0002a80d) fep_hwr_top_pane_g2_ParamLimits

0x7f72,	// (0x00026739) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002e2ac) fep_hwr_top_pane_g_ParamLimits

0x7f87,	// (0x0002674e) fep_hwr_top_text_pane_ParamLimits

0xa83d,	// (0x00029004) aid_touch_tab_arrow_arrow_2

0xa846,	// (0x0002900d) aid_touch_tab_arrow_left_2

0x7ecb,	// (0x00026692) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7f02,	// (0x000266c9) fep_hwr_prediction_pane

0xc19c,	// (0x0002a963) fep_vkb_prediction_pane

0xc2a2,	// (0x0002aa69) fep_vkb_side_pane_g3_ParamLimits

0xc2a2,	// (0x0002aa69) fep_vkb_side_pane_g3

0xc24e,	// (0x0002aa15) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71c,	// (0x0002aee3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc729,	// (0x0002aef0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002e356) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd131,	// (0x0002b8f8) fep_hwr_prediction_pane_g1

0x822d,	// (0x000269f4) fep_hwr_prediction_pane_g2

0x8235,	// (0x000269fc) fep_hwr_prediction_pane_g3

0x823d,	// (0x00026a04) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002e459) fep_hwr_prediction_pane_g

0xd131,	// (0x0002b8f8) fep_vkb_prediction_pane_g1

0xd13b,	// (0x0002b902) fep_vkb_prediction_pane_g2

0xd143,	// (0x0002b90a) fep_vkb_prediction_pane_g3

0xd14b,	// (0x0002b912) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002e462) fep_vkb_prediction_pane_g

0x7d37,	// (0x000264fe) slider_set_pane_g3

0x7d4b,	// (0x00026512) slider_set_pane_g4

0x7d63,	// (0x0002652a) slider_set_pane_g5

0x7d37,	// (0x000264fe) slider_set_pane_g6

0x7d79,	// (0x00026540) slider_set_pane_g7

0xaf0e,	// (0x000296d5) slider_form_pane_g3

0xaf17,	// (0x000296de) slider_form_pane_g4

0xaf1f,	// (0x000296e6) slider_form_pane_g5

0xaf0e,	// (0x000296d5) slider_form_pane_g6

0xaf27,	// (0x000296ee) slider_form_pane_g7

0xb57a,	// (0x00029d41) slider_set_pane_vc_g3

0xb583,	// (0x00029d4a) slider_set_pane_vc_g4

0xb58c,	// (0x00029d53) slider_set_pane_vc_g5

0xb57a,	// (0x00029d41) slider_set_pane_vc_g6

0xb595,	// (0x00029d5c) slider_set_pane_vc_g7

0xb76b,	// (0x00029f32) slider_form_pane_vc_g1

0xb774,	// (0x00029f3b) slider_form_pane_vc_g2

0xb77d,	// (0x00029f44) slider_form_pane_vc_g3

0xb76b,	// (0x00029f32) slider_form_pane_vc_g4

0xb786,	// (0x00029f4d) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002e229) slider_form_pane_vc_g

0x13f6,	// (0x0001fbbd) main_idle_act3_pane

0xd153,	// (0x0002b91a) ai3_links_pane

0xd15c,	// (0x0002b923) popup_ai3_data_window_ParamLimits

0xd15c,	// (0x0002b923) popup_ai3_data_window

0x13f6,	// (0x0001fbbd) grid_ai3_links_pane

0xd17a,	// (0x0002b941) cell_ai3_links_pane_ParamLimits

0xd17a,	// (0x0002b941) cell_ai3_links_pane

0xd194,	// (0x0002b95b) bg_popup_sub_pane_cp11

0xd1a1,	// (0x0002b968) cell_ai3_links_pane_g1

0x13f6,	// (0x0001fbbd) bg_popup_sub_pane_cp12

0xd1c6,	// (0x0002b98d) heading_ai3_data_pane

0xd1ce,	// (0x0002b995) list_ai3_gene_pane

0xd1da,	// (0x0002b9a1) popup_ai3_data_window_g1

0xd1e2,	// (0x0002b9a9) heading_ai3_data_pane_g1

0xd1ea,	// (0x0002b9b1) heading_ai3_data_pane_t1

0xd1f8,	// (0x0002b9bf) list_double_ai3_gene_pane_ParamLimits

0xd1f8,	// (0x0002b9bf) list_double_ai3_gene_pane

0xd205,	// (0x0002b9cc) list_single_ai3_gene_pane_ParamLimits

0xd205,	// (0x0002b9cc) list_single_ai3_gene_pane

0xbf98,	// (0x0002a75f) list_highlight_pane_cp7_ParamLimits

0xbf98,	// (0x0002a75f) list_highlight_pane_cp7

0xd212,	// (0x0002b9d9) list_single_a13_gene_pane_t1_ParamLimits

0xd212,	// (0x0002b9d9) list_single_a13_gene_pane_t1

0xd229,	// (0x0002b9f0) list_single_ai3_gene_pane_g1

0xd232,	// (0x0002b9f9) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002e46b) list_single_ai3_gene_pane_g

0xd23a,	// (0x0002ba01) list_double_ai3_gene_pane_g1_ParamLimits

0xd23a,	// (0x0002ba01) list_double_ai3_gene_pane_g1

0xd246,	// (0x0002ba0d) list_double_ai3_gene_pane_t1_ParamLimits

0xd246,	// (0x0002ba0d) list_double_ai3_gene_pane_t1

0xd262,	// (0x0002ba29) list_double_ai3_gene_pane_t2_ParamLimits

0xd262,	// (0x0002ba29) list_double_ai3_gene_pane_t2

0xd277,	// (0x0002ba3e) list_double_ai3_gene_pane_t3_ParamLimits

0xd277,	// (0x0002ba3e) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002e470) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002e470) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5bed,	// (0x000243b4) aid_size_min_col_2

0xd11b,	// (0x0002b8e2) aid_size_min_msg_ParamLimits

0xd11b,	// (0x0002b8e2) aid_size_min_msg

0xc3ae,	// (0x0002ab75) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ae,	// (0x0002ab75) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002e2dc) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002e2dc) fep_vkb_top_text_pane_g

0x13f6,	// (0x0001fbbd) main_hc_apps_shell_pane

0xd294,	// (0x0002ba5b) grid_hc_apps_pane_ParamLimits

0xd294,	// (0x0002ba5b) grid_hc_apps_pane

0xd2a6,	// (0x0002ba6d) list_hc_apps_pane

0xd2ae,	// (0x0002ba75) scroll_pane_cp37_ParamLimits

0xd2ae,	// (0x0002ba75) scroll_pane_cp37

0xd2ba,	// (0x0002ba81) cell_hc_apps_pane_ParamLimits

0xd2ba,	// (0x0002ba81) cell_hc_apps_pane

0xd370,	// (0x0002bb37) cell_hc_apps_pane_g1_ParamLimits

0xd370,	// (0x0002bb37) cell_hc_apps_pane_g1

0xd39c,	// (0x0002bb63) cell_hc_apps_pane_g2_ParamLimits

0xd39c,	// (0x0002bb63) cell_hc_apps_pane_g2

0xd3b8,	// (0x0002bb7f) cell_hc_apps_pane_g3_ParamLimits

0xd3b8,	// (0x0002bb7f) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002e477) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002e477) cell_hc_apps_pane_g

0xd3da,	// (0x0002bba1) cell_hc_apps_pane_t1_ParamLimits

0xd3da,	// (0x0002bba1) cell_hc_apps_pane_t1

0x15b3,	// (0x0001fd7a) grid_highlight_pane_cp10_ParamLimits

0x15b3,	// (0x0001fd7a) grid_highlight_pane_cp10

0xd41a,	// (0x0002bbe1) list_single_hc_apps_pane_ParamLimits

0xd41a,	// (0x0002bbe1) list_single_hc_apps_pane

0xd459,	// (0x0002bc20) list_single_hc_apps_pane_g1

0x5ce1,	// (0x000244a8) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002e47e) list_single_hc_apps_pane_g

0x5cfa,	// (0x000244c1) list_single_hc_apps_pane_g2_copy1

0x5d16,	// (0x000244dd) list_single_hc_apps_pane_t1

0x1466,	// (0x0001fc2d) bg_set_opt_pane_cp_ParamLimits

0x6251,	// (0x00024a18) setting_slider_pane_t1_ParamLimits

0x626a,	// (0x00024a31) setting_slider_pane_t2_ParamLimits

0x6284,	// (0x00024a4b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002dd00) setting_slider_pane_t_ParamLimits

0x629c,	// (0x00024a63) slider_set_pane_ParamLimits

0x72d7,	// (0x00025a9e) control_pane_g5_ParamLimits

0x72d7,	// (0x00025a9e) control_pane_g5

0xad41,	// (0x00029508) slider_set_pane_g1_ParamLimits

0x7d2b,	// (0x000264f2) slider_set_pane_g2_ParamLimits

0x7d37,	// (0x000264fe) slider_set_pane_g3_ParamLimits

0x7d4b,	// (0x00026512) slider_set_pane_g4_ParamLimits

0x7d63,	// (0x0002652a) slider_set_pane_g5_ParamLimits

0x7d37,	// (0x000264fe) slider_set_pane_g6_ParamLimits

0x7d79,	// (0x00026540) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002e106) slider_set_pane_g_ParamLimits

0x8fc6,	// (0x0002778d) navi_icon_text_pane_ParamLimits

0x94ce,	// (0x00027c95) aid_fill_nsta_2_ParamLimits

0x950f,	// (0x00027cd6) aid_touch_tab_arrow_left_ParamLimits

0x951b,	// (0x00027ce2) aid_touch_tab_arrow_right_ParamLimits

0x9587,	// (0x00027d4e) clock_nsta_pane_ParamLimits

0xa81f,	// (0x00028fe6) navi_icon_pane_g1_ParamLimits

0xa82b,	// (0x00028ff2) navi_text_pane_t1_ParamLimits

0xbbe5,	// (0x0002a3ac) navi_icon_text_pane_g1_ParamLimits

0xbbf1,	// (0x0002a3b8) navi_icon_text_pane_t1_ParamLimits

0xd459,	// (0x0002bc20) list_single_hc_apps_pane_g1_ParamLimits

0x5ce1,	// (0x000244a8) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002e47e) list_single_hc_apps_pane_g_ParamLimits

0x5cfa,	// (0x000244c1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5d16,	// (0x000244dd) list_single_hc_apps_pane_t1_ParamLimits

0x6085,	// (0x0002484c) popup_toolbar2_fixed_window_ParamLimits

0x6085,	// (0x0002484c) popup_toolbar2_fixed_window

0x7934,	// (0x000260fb) popup_toolbar2_float_window

0x13f6,	// (0x0001fbbd) bg_popup_sub_pane_cp27

0xd472,	// (0x0002bc39) grid_toolbar2_float_pane

0x13f6,	// (0x0001fbbd) bg_popup_sub_pane_cp26

0xd472,	// (0x0002bc39) grid_toolbar2_fixed_pane

0xd47a,	// (0x0002bc41) cell_toolbar2_fixed_pane_ParamLimits

0xd47a,	// (0x0002bc41) cell_toolbar2_fixed_pane

0xd48a,	// (0x0002bc51) cell_toolbar2_fixed_pane_g1

0xd493,	// (0x0002bc5a) toolbar2_fixed_button_pane

0x99b2,	// (0x00028179) toolbar2_fixed_button_pane_g1

0x99ba,	// (0x00028181) toolbar2_fixed_button_pane_g2

0x99c2,	// (0x00028189) toolbar2_fixed_button_pane_g3

0x99ca,	// (0x00028191) toolbar2_fixed_button_pane_g4

0x99d2,	// (0x00028199) toolbar2_fixed_button_pane_g5

0x99da,	// (0x000281a1) toolbar2_fixed_button_pane_g6

0x99e2,	// (0x000281a9) toolbar2_fixed_button_pane_g7

0x99ea,	// (0x000281b1) toolbar2_fixed_button_pane_g8

0x99f2,	// (0x000281b9) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002e008) toolbar2_fixed_button_pane_g

0xd49b,	// (0x0002bc62) cell_toolbar2_float_pane_ParamLimits

0xd49b,	// (0x0002bc62) cell_toolbar2_float_pane

0xd4ac,	// (0x0002bc73) cell_toolbar2_float_pane_g1

0xd493,	// (0x0002bc5a) toolbar2_fixed_button_pane_cp

0xc10a,	// (0x0002a8d1) fep_vkb_accented_list_pane_ParamLimits

0xc10a,	// (0x0002a8d1) fep_vkb_accented_list_pane

0x80e9,	// (0x000268b0) bg_popup_fep_shadow_pane_g9

0x9155,	// (0x0002791c) bg_popup_fep_shadow_pane_cp3

0x32d2,	// (0x00021a99) list_accented_list_pane

0xd4b5,	// (0x0002bc7c) list_single_accented_list_pane_ParamLimits

0xd4b5,	// (0x0002bc7c) list_single_accented_list_pane

0x9155,	// (0x0002791c) list_highlight_pane_cp10

0xd4c6,	// (0x0002bc8d) list_single_accented_list_pane_t1

0x787a,	// (0x00026041) popup_slider_window_ParamLimits

0x787a,	// (0x00026041) popup_slider_window

0xd112,	// (0x0002b8d9) aid_indentation_list_msg

0xd596,	// (0x0002bd5d) bg_popup_window_pane_cp19

0xd602,	// (0x0002bdc9) popup_slider_window_g1

0xd61e,	// (0x0002bde5) popup_slider_window_g2

0xd63a,	// (0x0002be01) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002e483) popup_slider_window_g

0xd6a0,	// (0x0002be67) popup_slider_window_t1

0xd714,	// (0x0002bedb) small_volume_slider_vertical_pane

0xbfd3,	// (0x0002a79a) small_volume_slider_vertical_pane_g1

0xbfd3,	// (0x0002a79a) small_volume_slider_vertical_pane_g2

0xd730,	// (0x0002bef7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002e495) small_volume_slider_vertical_pane_g

0x5e3d,	// (0x00024604) area_side_right_pane_ParamLimits

0x5e3d,	// (0x00024604) area_side_right_pane

0x8245,	// (0x00026a0c) aid_size_side_button_ParamLimits

0x8245,	// (0x00026a0c) aid_size_side_button

0x8259,	// (0x00026a20) grid_sctrl_middle_pane_ParamLimits

0x8259,	// (0x00026a20) grid_sctrl_middle_pane

0x8278,	// (0x00026a3f) sctrl_sk_bottom_pane

0x8289,	// (0x00026a50) sctrl_sk_top_pane

0x829b,	// (0x00026a62) aid_touch_sctrl_top

0x15b3,	// (0x0001fd7a) bg_sctrl_sk_pane_ParamLimits

0x15b3,	// (0x0001fd7a) bg_sctrl_sk_pane

0x82a8,	// (0x00026a6f) sctrl_sk_top_pane_g1

0x82b5,	// (0x00026a7c) sctrl_sk_top_pane_t1

0x829b,	// (0x00026a62) aid_touch_sctrl_bottom

0x15b3,	// (0x0001fd7a) bg_sctrl_sk_pane_cp_ParamLimits

0x15b3,	// (0x0001fd7a) bg_sctrl_sk_pane_cp

0x82d0,	// (0x00026a97) sctrl_sk_bottom_pane_g1

0x82b5,	// (0x00026a7c) sctrl_sk_bottom_pane_t1

0x82d9,	// (0x00026aa0) cell_sctrl_middle_pane_ParamLimits

0x82d9,	// (0x00026aa0) cell_sctrl_middle_pane

0x82f6,	// (0x00026abd) aid_touch_sctrl_middle_ParamLimits

0x82f6,	// (0x00026abd) aid_touch_sctrl_middle

0x311d,	// (0x000218e4) bg_sctrl_middle_pane_ParamLimits

0x311d,	// (0x000218e4) bg_sctrl_middle_pane

0xc24e,	// (0x0002aa15) cell_sctrl_middle_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) cell_sctrl_middle_pane_g1

0x8308,	// (0x00026acf) cell_sctrl_middle_pane_g2_ParamLimits

0x8308,	// (0x00026acf) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002e4a1) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002e4a1) cell_sctrl_middle_pane_g

0x99b2,	// (0x00028179) bg_sctrl_middle_pane_g1

0x99ba,	// (0x00028181) bg_sctrl_middle_pane_g2

0x99c2,	// (0x00028189) bg_sctrl_middle_pane_g3

0x99ca,	// (0x00028191) bg_sctrl_middle_pane_g4

0x99d2,	// (0x00028199) bg_sctrl_middle_pane_g5

0x99da,	// (0x000281a1) bg_sctrl_middle_pane_g6

0x99e2,	// (0x000281a9) bg_sctrl_middle_pane_g7

0x99ea,	// (0x000281b1) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002e4a6) bg_sctrl_middle_pane_g

0x99f2,	// (0x000281b9) bg_sctrl_middle_pane_g8_copy1

0x99b2,	// (0x00028179) bg_sctrl_sk_pane_g1

0x99ba,	// (0x00028181) bg_sctrl_sk_pane_g2

0x99c2,	// (0x00028189) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002e008) bg_sctrl_sk_pane_g

0x2fcf,	// (0x00021796) aid_size_touch_scroll_bar

0x99ca,	// (0x00028191) bg_sctrl_sk_pane_g4

0x99d2,	// (0x00028199) bg_sctrl_sk_pane_g5

0x99da,	// (0x000281a1) bg_sctrl_sk_pane_g6

0x99e2,	// (0x000281a9) bg_sctrl_sk_pane_g7

0x99ea,	// (0x000281b1) bg_sctrl_sk_pane_g8

0x99f2,	// (0x000281b9) bg_sctrl_sk_pane_g9

0x748f,	// (0x00025c56) popup_fep_china_hwr2_fs_candidate_window

0x7499,	// (0x00025c60) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7499,	// (0x00025c60) popup_fep_china_hwr2_fs_control_window

0xc24e,	// (0x0002aa15) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002e49c) sctrl_sk_top_pane_g

0xd739,	// (0x0002bf00) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd739,	// (0x0002bf00) aid_fep_china_hwr2_fs_cell

0xd74c,	// (0x0002bf13) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74c,	// (0x0002bf13) bg_popup_fep_shadow_pane_cp4

0xd765,	// (0x0002bf2c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd765,	// (0x0002bf2c) bg_popup_fep_shadow_pane_cp5

0xd777,	// (0x0002bf3e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd777,	// (0x0002bf3e) popup_fep_china_hwr2_fs_control_bar_grid

0xd787,	// (0x0002bf4e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd78f,	// (0x0002bf56) aid_fep_china_hwr2_fs_candi_cell

0x13f6,	// (0x0001fbbd) bg_popup_fep_shadow_pane_cp6

0xd799,	// (0x0002bf60) popup_fep_china_hwr2_fs_candidate_grid

0xd7a3,	// (0x0002bf6a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a3,	// (0x0002bf6a) cell_fep_china_hwr2_fs_funtion_grid

0xbfd3,	// (0x0002a79a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bb,	// (0x0002bf82) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bb,	// (0x0002bf82) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7c9,	// (0x0002bf90) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7c9,	// (0x0002bf90) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002e4b7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002e4b7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7df,	// (0x0002bfa6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7df,	// (0x0002bfa6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f4,	// (0x0002bfbb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f4,	// (0x0002bfbb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002e4bc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002e4bc) cell_fep_china_hwr2_fs_funtion_grid_t

0xd810,	// (0x0002bfd7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd818,	// (0x0002bfdf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd820,	// (0x0002bfe7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002e4c1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd828,	// (0x0002bfef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd828,	// (0x0002bfef) cell_fep_china_hwr2_fs_candidate_grid

0xd847,	// (0x0002c00e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84f,	// (0x0002c016) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfd3,	// (0x0002a79a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfd3,	// (0x0002a79a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002e2e1) cell_fep_china_hwr2_fs_candidate_grid_g

0xd857,	// (0x0002c01e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x959a,	// (0x00027d61) clock_nsta_pane_cp_24_ParamLimits

0x959a,	// (0x00027d61) clock_nsta_pane_cp_24

0x961a,	// (0x00027de1) indicator_nsta_pane_cp_24_ParamLimits

0x961a,	// (0x00027de1) indicator_nsta_pane_cp_24

0xa69b,	// (0x00028e62) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002e06d) heading_pane_g

0xb0fd,	// (0x000298c4) grid_sct_catagory_button_pane

0xb12f,	// (0x000298f6) scroll_pane_cp5_ParamLimits

0xbc33,	// (0x0002a3fa) button_value_adjust_pane_cp5_ParamLimits

0xbc33,	// (0x0002a3fa) button_value_adjust_pane_cp5

0xbd18,	// (0x0002a4df) form2_midp_time_pane_ParamLimits

0xd865,	// (0x0002c02c) cell_sct_catagory_button_pane_ParamLimits

0xd865,	// (0x0002c02c) cell_sct_catagory_button_pane

0xbf98,	// (0x0002a75f) bg_button_pane_cp01_ParamLimits

0xbf98,	// (0x0002a75f) bg_button_pane_cp01

0xbfd3,	// (0x0002a79a) cell_sct_catagory_button_pane_g1

0x78bb,	// (0x00026082) popup_tb_extension_window

0xd877,	// (0x0002c03e) aid_size_cell_ext_ParamLimits

0xd877,	// (0x0002c03e) aid_size_cell_ext

0x15b3,	// (0x0001fd7a) bg_tb_trans_pane_cp1_ParamLimits

0x15b3,	// (0x0001fd7a) bg_tb_trans_pane_cp1

0xd897,	// (0x0002c05e) grid_tb_ext_pane_ParamLimits

0xd897,	// (0x0002c05e) grid_tb_ext_pane

0xd8c5,	// (0x0002c08c) cell_tb_ext_pane_ParamLimits

0xd8c5,	// (0x0002c08c) cell_tb_ext_pane

0xd8dc,	// (0x0002c0a3) cell_tb_ext_pane_g1_ParamLimits

0xd8dc,	// (0x0002c0a3) cell_tb_ext_pane_g1

0xd8f9,	// (0x0002c0c0) cell_tb_ext_pane_t1

0x15b3,	// (0x0001fd7a) list_highlight_pane_cp11_ParamLimits

0x15b3,	// (0x0001fd7a) list_highlight_pane_cp11

0x60a4,	// (0x0002486b) popup_uni_indicator_window_ParamLimits

0x60a4,	// (0x0002486b) popup_uni_indicator_window

0x311d,	// (0x000218e4) bg_popup_sub_pane_cp14

0xd914,	// (0x0002c0db) list_uniindi_pane

0xd920,	// (0x0002c0e7) uniindi_top_pane

0x15b3,	// (0x0001fd7a) bg_uniindi_top_pane

0xd941,	// (0x0002c108) uniindi_top_pane_g1

0xd957,	// (0x0002c11e) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002e4c8) uniindi_top_pane_g

0xd981,	// (0x0002c148) uniindi_top_pane_t1

0xd9ad,	// (0x0002c174) list_single_uniindi_pane_ParamLimits

0xd9ad,	// (0x0002c174) list_single_uniindi_pane

0xbfd3,	// (0x0002a79a) bg_uniindi_top_pane_g1

0xd9c0,	// (0x0002c187) list_single_uniindi_pane_g1

0xd9d3,	// (0x0002c19a) list_single_uniindi_pane_t1

0x13f6,	// (0x0001fbbd) control_bg_pane

0xd9f8,	// (0x0002c1bf) bg_sctrl_sk_pane_cp1

0xda01,	// (0x0002c1c8) bg_sctrl_sk_pane_cp2

0xda0a,	// (0x0002c1d1) control_bg_pane_g1

0xda13,	// (0x0002c1da) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002e4d1) control_bg_pane_g

0xba5f,	// (0x0002a226) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0002a234) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002e245) cell_indicator_nsta_pane_g_ParamLimits

0x59b6,	// (0x0002417d) form2_midp_time_pane_t1_ParamLimits

0x2e11,	// (0x000215d8) main_idle_act4_pane_ParamLimits

0x2e11,	// (0x000215d8) main_idle_act4_pane

0x78bb,	// (0x00026082) popup_tb_extension_window_ParamLimits

0xd8b7,	// (0x0002c07e) tb_ext_find_pane_ParamLimits

0xd8b7,	// (0x0002c07e) tb_ext_find_pane

0xda1c,	// (0x0002c1e3) ai_gene_pane_1_cp1

0x929f,	// (0x00027a66) ai_gene_pane_2_cp1

0xda24,	// (0x0002c1eb) list_single_idle_plugin_calendar_pane

0xda2d,	// (0x0002c1f4) list_single_idle_plugin_notification_pane

0xda36,	// (0x0002c1fd) list_single_idle_plugin_player_pane

0xda3f,	// (0x0002c206) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3f,	// (0x0002c206) list_single_idle_plugin_shortcut_pane

0xda61,	// (0x0002c228) main_idle_act4_pane_t1

0xda73,	// (0x0002c23a) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002e4d6) main_idle_act4_pane_t

0xda85,	// (0x0002c24c) middle_sk_idle_act4_pane_ParamLimits

0xda85,	// (0x0002c24c) middle_sk_idle_act4_pane

0xda9b,	// (0x0002c262) popup_clock_digital_analogue_window_cp2

0xdab5,	// (0x0002c27c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab5,	// (0x0002c27c) shortcut_wheel_idle_act4_pane

0xbfd3,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g1

0xbfd3,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g2

0xbfd3,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g3

0xbfd3,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g4

0xbfd3,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g5

0xdac9,	// (0x0002c290) shortcut_wheel_idle_act4_pane_g6

0xdad1,	// (0x0002c298) shortcut_wheel_idle_act4_pane_g7

0xdad9,	// (0x0002c2a0) shortcut_wheel_idle_act4_pane_g8

0xdae1,	// (0x0002c2a8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002e4db) shortcut_wheel_idle_act4_pane_g

0xc24e,	// (0x0002aa15) middle_sk_idle_act4_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) middle_sk_idle_act4_pane_g1

0xdb45,	// (0x0002c30c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb45,	// (0x0002c30c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002e4fe) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002e4fe) middle_sk_idle_act4_pane_g

0xdb51,	// (0x0002c318) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb51,	// (0x0002c318) middle_sk_idle_act4_pane_t1

0xdb6e,	// (0x0002c335) grid_ai_shortcut_pane_ParamLimits

0xdb6e,	// (0x0002c335) grid_ai_shortcut_pane

0xdb87,	// (0x0002c34e) list_highlight_pane_cp16_ParamLimits

0xdb87,	// (0x0002c34e) list_highlight_pane_cp16

0xdb94,	// (0x0002c35b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb94,	// (0x0002c35b) list_single_idle_plugin_shortcut_pane_g1

0xdba0,	// (0x0002c367) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba0,	// (0x0002c367) list_single_idle_plugin_shortcut_pane_g2

0xdbba,	// (0x0002c381) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbba,	// (0x0002c381) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002e503) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002e503) list_single_idle_plugin_shortcut_pane_g

0xdbcd,	// (0x0002c394) cell_ai_shortcut_pane_ParamLimits

0xdbcd,	// (0x0002c394) cell_ai_shortcut_pane

0xdbf0,	// (0x0002c3b7) cell_ai_shortcut_pane_g1_ParamLimits

0xdbf0,	// (0x0002c3b7) cell_ai_shortcut_pane_g1

0xda1c,	// (0x0002c1e3) ai_gene_pane_1_cp2

0xdc12,	// (0x0002c3d9) ai_gene_pane_2_cp2

0xdc1a,	// (0x0002c3e1) list_highlight_pane_cp15

0xdc23,	// (0x0002c3ea) list_single_idle_plugin_calendar_pane_g1

0xdc1a,	// (0x0002c3e1) list_highlight_pane_cp17

0xdc2b,	// (0x0002c3f2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc33,	// (0x0002c3fa) list_single_idle_plugin_player_pane_g1

0xb364,	// (0x00029b2b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002e50a) list_single_idle_plugin_player_pane_g

0xdc3b,	// (0x0002c402) list_single_idle_plugin_player_pane_t1

0xdc49,	// (0x0002c410) list_single_idle_plugin_player_pane_t2

0xdc57,	// (0x0002c41e) list_single_idle_plugin_player_pane_t3

0xdc65,	// (0x0002c42c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002e50f) list_single_idle_plugin_player_pane_t

0xdc73,	// (0x0002c43a) wait_bar_pane_cp15

0xdc7b,	// (0x0002c442) grid_ai_notification_pane

0xb364,	// (0x00029b2b) list_single_idle_plugin_notification_pane_g1

0xdc84,	// (0x0002c44b) cell_ai_notification_pane_ParamLimits

0xdc84,	// (0x0002c44b) cell_ai_notification_pane

0xdc91,	// (0x0002c458) cell_ai_notification_pane_g1

0xdc99,	// (0x0002c460) cell_ai_notification_pane_t1

0xdca7,	// (0x0002c46e) tb_ext_find_button_pane

0xdcaf,	// (0x0002c476) tb_ext_find_pane_g1

0xdcb7,	// (0x0002c47e) tb_ext_find_pane_t1

0x6bcf,	// (0x00025396) tb_ext_find_button_pane_g1

0xdcc5,	// (0x0002c48c) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002e518) tb_ext_find_button_pane_g

0xda61,	// (0x0002c228) main_idle_act4_pane_t1_ParamLimits

0xda73,	// (0x0002c23a) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002e4d6) main_idle_act4_pane_t_ParamLimits

0xda9b,	// (0x0002c262) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaa9,	// (0x0002c270) sat_plugin_idle_act4_pane_ParamLimits

0xdaa9,	// (0x0002c270) sat_plugin_idle_act4_pane

0xdcce,	// (0x0002c495) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcce,	// (0x0002c495) sat_plugin_idle_act4_pane_t1

0xdce1,	// (0x0002c4a8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdce1,	// (0x0002c4a8) sat_plugin_idle_act4_pane_t2

0xdcf4,	// (0x0002c4bb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf4,	// (0x0002c4bb) sat_plugin_idle_act4_pane_t3

0xdd07,	// (0x0002c4ce) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd07,	// (0x0002c4ce) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002e51d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002e51d) sat_plugin_idle_act4_pane_t

0x5fd5,	// (0x0002479c) popup_battery_window_ParamLimits

0x5fd5,	// (0x0002479c) popup_battery_window

0x15b3,	// (0x0001fd7a) bg_popup_sub_pane_cp25_ParamLimits

0x15b3,	// (0x0001fd7a) bg_popup_sub_pane_cp25

0xdd1a,	// (0x0002c4e1) popup_battery_window_g1_ParamLimits

0xdd1a,	// (0x0002c4e1) popup_battery_window_g1

0xdd26,	// (0x0002c4ed) popup_battery_window_t1_ParamLimits

0xdd26,	// (0x0002c4ed) popup_battery_window_t1

0xdd38,	// (0x0002c4ff) popup_battery_window_t2_ParamLimits

0xdd38,	// (0x0002c4ff) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002e526) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002e526) popup_battery_window_t

0x9169,	// (0x00027930) midp_canvas_pane_ParamLimits

0x91e1,	// (0x000279a8) midp_keypad_pane_ParamLimits

0x91e1,	// (0x000279a8) midp_keypad_pane

0x947c,	// (0x00027c43) main_midp_pane_ParamLimits

0xbada,	// (0x0002a2a1) signal_pane_g2_cp_ParamLimits

0xdd55,	// (0x0002c51c) aid_size_cell_midp_keypad_ParamLimits

0xdd55,	// (0x0002c51c) aid_size_cell_midp_keypad

0xdd6f,	// (0x0002c536) midp_keyp_game_grid_pane_ParamLimits

0xdd6f,	// (0x0002c536) midp_keyp_game_grid_pane

0xdd8f,	// (0x0002c556) midp_keyp_rocker_pane_ParamLimits

0xdd8f,	// (0x0002c556) midp_keyp_rocker_pane

0xddbe,	// (0x0002c585) midp_keyp_sk_left_pane_ParamLimits

0xddbe,	// (0x0002c585) midp_keyp_sk_left_pane

0xde1a,	// (0x0002c5e1) midp_keyp_sk_right_pane_ParamLimits

0xde1a,	// (0x0002c5e1) midp_keyp_sk_right_pane

0x13f6,	// (0x0001fbbd) bg_button_pane_cp03

0xde76,	// (0x0002c63d) midp_keyp_sk_left_pane_g1

0x13f6,	// (0x0001fbbd) bg_button_pane_cp04

0xde76,	// (0x0002c63d) midp_keyp_sk_right_pane_g1

0xbfd3,	// (0x0002a79a) midp_keyp_rocker_pane_g1

0xde7e,	// (0x0002c645) keyp_game_cell_pane_ParamLimits

0xde7e,	// (0x0002c645) keyp_game_cell_pane

0x13f6,	// (0x0001fbbd) bg_button_pane_cp02

0xde91,	// (0x0002c658) keyp_game_cell_pane_g1

0x601f,	// (0x000247e6) popup_fep_vkb2_window_ParamLimits

0x601f,	// (0x000247e6) popup_fep_vkb2_window

0x8326,	// (0x00026aed) aid_size_cell_vkb2_ParamLimits

0x8326,	// (0x00026aed) aid_size_cell_vkb2

0x8372,	// (0x00026b39) popup_fep_vkb2_window_g1_ParamLimits

0x8372,	// (0x00026b39) popup_fep_vkb2_window_g1

0x83ba,	// (0x00026b81) vkb2_area_bottom_pane_ParamLimits

0x83ba,	// (0x00026b81) vkb2_area_bottom_pane

0x840e,	// (0x00026bd5) vkb2_area_keypad_pane_ParamLimits

0x840e,	// (0x00026bd5) vkb2_area_keypad_pane

0x8454,	// (0x00026c1b) vkb2_area_top_pane_ParamLimits

0x8454,	// (0x00026c1b) vkb2_area_top_pane

0x84d4,	// (0x00026c9b) vkb2_top_entry_pane_ParamLimits

0x84d4,	// (0x00026c9b) vkb2_top_entry_pane

0x84fe,	// (0x00026cc5) vkb2_top_grid_left_pane_ParamLimits

0x84fe,	// (0x00026cc5) vkb2_top_grid_left_pane

0x851d,	// (0x00026ce4) vkb2_top_grid_right_pane_ParamLimits

0x851d,	// (0x00026ce4) vkb2_top_grid_right_pane

0x853c,	// (0x00026d03) vkb2_cell_keypad_pane_ParamLimits

0x853c,	// (0x00026d03) vkb2_cell_keypad_pane

0x860d,	// (0x00026dd4) vkb2_area_bottom_grid_pane_ParamLimits

0x860d,	// (0x00026dd4) vkb2_area_bottom_grid_pane

0x8633,	// (0x00026dfa) vkb2_area_bottom_pane_g1_ParamLimits

0x8633,	// (0x00026dfa) vkb2_area_bottom_pane_g1

0x8657,	// (0x00026e1e) vkb2_area_bottom_pane_g2_ParamLimits

0x8657,	// (0x00026e1e) vkb2_area_bottom_pane_g2

0x8685,	// (0x00026e4c) vkb2_area_bottom_pane_g3_ParamLimits

0x8685,	// (0x00026e4c) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002e52b) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002e52b) vkb2_area_bottom_pane_g

0x86e6,	// (0x00026ead) vkb2_top_cell_left_pane_ParamLimits

0x86e6,	// (0x00026ead) vkb2_top_cell_left_pane

0xdea2,	// (0x0002c669) vkb2_top_entry_pane_g1_ParamLimits

0xdea2,	// (0x0002c669) vkb2_top_entry_pane_g1

0xdeb0,	// (0x0002c677) vkb2_top_entry_pane_t1_ParamLimits

0xdeb0,	// (0x0002c677) vkb2_top_entry_pane_t1

0xdee2,	// (0x0002c6a9) vkb2_top_entry_pane_t2_ParamLimits

0xdee2,	// (0x0002c6a9) vkb2_top_entry_pane_t2

0xdf14,	// (0x0002c6db) vkb2_top_entry_pane_t3_ParamLimits

0xdf14,	// (0x0002c6db) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002e532) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002e532) vkb2_top_entry_pane_t

0x8733,	// (0x00026efa) vkb2_top_grid_right_pane_g1_ParamLimits

0x8733,	// (0x00026efa) vkb2_top_grid_right_pane_g1

0x8749,	// (0x00026f10) vkb2_top_grid_right_pane_g2_ParamLimits

0x8749,	// (0x00026f10) vkb2_top_grid_right_pane_g2

0x8761,	// (0x00026f28) vkb2_top_grid_right_pane_g3_ParamLimits

0x8761,	// (0x00026f28) vkb2_top_grid_right_pane_g3

0x8779,	// (0x00026f40) vkb2_top_grid_right_pane_g4_ParamLimits

0x8779,	// (0x00026f40) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002e539) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002e539) vkb2_top_grid_right_pane_g

0x878f,	// (0x00026f56) vkb2_top_cell_left_pane_g1

0x87a6,	// (0x00026f6d) vkb2_cell_keypad_pane_g1_ParamLimits

0x87a6,	// (0x00026f6d) vkb2_cell_keypad_pane_g1

0xdf38,	// (0x0002c6ff) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf38,	// (0x0002c6ff) vkb2_cell_keypad_pane_t1

0x87b4,	// (0x00026f7b) vkb2_cell_bottom_grid_pane_ParamLimits

0x87b4,	// (0x00026f7b) vkb2_cell_bottom_grid_pane

0x87ed,	// (0x00026fb4) vkb2_cell_bottom_grid_pane_g1

0xdae9,	// (0x0002c2b0) aid_call2_pane_cp02

0xdaf1,	// (0x0002c2b8) aid_call_pane_cp02

0xdaf9,	// (0x0002c2c0) clock_digital_number_pane_cp10

0xdb01,	// (0x0002c2c8) clock_digital_number_pane_cp11

0xdb09,	// (0x0002c2d0) clock_digital_number_pane_cp12

0xdb11,	// (0x0002c2d8) clock_digital_number_pane_cp13

0xdb19,	// (0x0002c2e0) clock_digital_separator_pane_cp10

0x6bcf,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g1

0x6bcf,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g2

0xdb21,	// (0x0002c2e8) popup_clock_digital_analogue_window_cp2_g3

0x6bcf,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g4

0xdb21,	// (0x0002c2e8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002e4ee) popup_clock_digital_analogue_window_cp2_g

0xdb29,	// (0x0002c2f0) popup_clock_digital_analogue_window_cp2_t1

0xdb37,	// (0x0002c2fe) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002e4f9) popup_clock_digital_analogue_window_cp2_t

0xbfd3,	// (0x0002a79a) clock_digital_number_pane_cp10_g1

0xbfd3,	// (0x0002a79a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e2e1) clock_digital_number_pane_cp10_g

0xbfd3,	// (0x0002a79a) clock_digital_separator_pane_cp10_g1

0xbfd3,	// (0x0002a79a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e2e1) clock_digital_separator_pane_cp10_g

0xd963,	// (0x0002c12a) uniindi_top_pane_g3

0xd974,	// (0x0002c13b) uniindi_top_pane_g4

0x85c7,	// (0x00026d8e) vkb2_row_keypad_pane_ParamLimits

0x85c7,	// (0x00026d8e) vkb2_row_keypad_pane

0x8809,	// (0x00026fd0) vkb2_cell_t_keypad_pane_ParamLimits

0x8809,	// (0x00026fd0) vkb2_cell_t_keypad_pane

0x8819,	// (0x00026fe0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8819,	// (0x00026fe0) vkb2_cell_t_keypad_pane_cp08

0x882e,	// (0x00026ff5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x882e,	// (0x00026ff5) vkb2_cell_t_keypad_pane_cp09

0x8842,	// (0x00027009) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8842,	// (0x00027009) vkb2_cell_t_keypad_pane_cp01

0x8853,	// (0x0002701a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8853,	// (0x0002701a) vkb2_cell_t_keypad_pane_cp02

0x8864,	// (0x0002702b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8864,	// (0x0002702b) vkb2_cell_t_keypad_pane_cp03

0x8875,	// (0x0002703c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8875,	// (0x0002703c) vkb2_cell_t_keypad_pane_cp04

0x8886,	// (0x0002704d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8886,	// (0x0002704d) vkb2_cell_t_keypad_pane_cp05

0x8897,	// (0x0002705e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8897,	// (0x0002705e) vkb2_cell_t_keypad_pane_cp06

0x88aa,	// (0x00027071) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x88aa,	// (0x00027071) vkb2_cell_t_keypad_pane_cp07

0x88bf,	// (0x00027086) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x88bf,	// (0x00027086) vkb2_cell_t_keypad_pane_cp10

0xc24e,	// (0x0002aa15) vkb2_cell_t_keypad_pane_g1

0xdf4f,	// (0x0002c716) vkb2_cell_t_keypad_pane_t1

0x13f6,	// (0x0001fbbd) popup_grid_graphic2_window

0xdf61,	// (0x0002c728) aid_size_cell_graphic2_ParamLimits

0xdf61,	// (0x0002c728) aid_size_cell_graphic2

0xdf99,	// (0x0002c760) bg_popup_window_pane_cp21_ParamLimits

0xdf99,	// (0x0002c760) bg_popup_window_pane_cp21

0xdfa7,	// (0x0002c76e) graphic2_pages_pane_ParamLimits

0xdfa7,	// (0x0002c76e) graphic2_pages_pane

0xdfed,	// (0x0002c7b4) grid_graphic2_control_pane_ParamLimits

0xdfed,	// (0x0002c7b4) grid_graphic2_control_pane

0xe02b,	// (0x0002c7f2) grid_graphic2_pane_ParamLimits

0xe02b,	// (0x0002c7f2) grid_graphic2_pane

0xe0a1,	// (0x0002c868) cell_graphic2_pane

0x13f6,	// (0x0001fbbd) main_comp_mode_pane

0xd1ce,	// (0x0002b995) list_ai3_gene_pane_ParamLimits

0xd596,	// (0x0002bd5d) bg_popup_window_pane_cp19_ParamLimits

0xd5a2,	// (0x0002bd69) bg_touch_area_indi_pane_ParamLimits

0xd5a2,	// (0x0002bd69) bg_touch_area_indi_pane

0xd5b8,	// (0x0002bd7f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b8,	// (0x0002bd7f) bg_touch_area_indi_pane_cp01

0xd5ce,	// (0x0002bd95) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ce,	// (0x0002bd95) bg_touch_area_indi_pane_cp02

0xd5e8,	// (0x0002bdaf) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e8,	// (0x0002bdaf) bg_touch_area_indi_pane_cp03

0xd602,	// (0x0002bdc9) popup_slider_window_g1_ParamLimits

0xd61e,	// (0x0002bde5) popup_slider_window_g2_ParamLimits

0xd63a,	// (0x0002be01) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002e483) popup_slider_window_g_ParamLimits

0xd6a0,	// (0x0002be67) popup_slider_window_t1_ParamLimits

0xd714,	// (0x0002bedb) small_volume_slider_vertical_pane_ParamLimits

0xe0a1,	// (0x0002c868) cell_graphic2_pane_ParamLimits

0xe0f5,	// (0x0002c8bc) bg_button_pane_cp10_ParamLimits

0xe0f5,	// (0x0002c8bc) bg_button_pane_cp10

0xe10a,	// (0x0002c8d1) bg_button_pane_cp11_ParamLimits

0xe10a,	// (0x0002c8d1) bg_button_pane_cp11

0xe11f,	// (0x0002c8e6) graphic2_pages_pane_g1_ParamLimits

0xe11f,	// (0x0002c8e6) graphic2_pages_pane_g1

0xe13a,	// (0x0002c901) graphic2_pages_pane_g2_ParamLimits

0xe13a,	// (0x0002c901) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002e547) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002e547) graphic2_pages_pane_g

0xe152,	// (0x0002c919) graphic2_pages_pane_t1_ParamLimits

0xe152,	// (0x0002c919) graphic2_pages_pane_t1

0xe168,	// (0x0002c92f) cell_graphic2_control_pane_ParamLimits

0xe168,	// (0x0002c92f) cell_graphic2_control_pane

0xe188,	// (0x0002c94f) cell_graphic2_pane_g1_ParamLimits

0xe188,	// (0x0002c94f) cell_graphic2_pane_g1

0xe195,	// (0x0002c95c) cell_graphic2_pane_g2_ParamLimits

0xe195,	// (0x0002c95c) cell_graphic2_pane_g2

0xe1a2,	// (0x0002c969) cell_graphic2_pane_g3_ParamLimits

0xe1a2,	// (0x0002c969) cell_graphic2_pane_g3

0xe1af,	// (0x0002c976) cell_graphic2_pane_g4_ParamLimits

0xe1af,	// (0x0002c976) cell_graphic2_pane_g4

0xe1bc,	// (0x0002c983) cell_graphic2_pane_g5_ParamLimits

0xe1bc,	// (0x0002c983) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002e54c) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002e54c) cell_graphic2_pane_g

0xe1d4,	// (0x0002c99b) cell_graphic2_pane_t1_ParamLimits

0xe1d4,	// (0x0002c99b) cell_graphic2_pane_t1

0x9a26,	// (0x000281ed) grid_highlight_pane_cp11_ParamLimits

0x9a26,	// (0x000281ed) grid_highlight_pane_cp11

0x15b3,	// (0x0001fd7a) bg_button_pane_cp05

0xe20a,	// (0x0002c9d1) cell_graphic2_control_pane_g1

0xbfd3,	// (0x0002a79a) bg_touch_area_indi_pane_g1

0xe232,	// (0x0002c9f9) aid_cmod_rocker_key_size

0xe23c,	// (0x0002ca03) aid_cmode_itu_key_size

0xe246,	// (0x0002ca0d) main_cmode_video_pane

0xe250,	// (0x0002ca17) main_comp_mode_itu_pane

0xe25c,	// (0x0002ca23) main_comp_mode_rocker_pane

0xe268,	// (0x0002ca2f) cell_cmode_rocker_pane_ParamLimits

0xe268,	// (0x0002ca2f) cell_cmode_rocker_pane

0xe27c,	// (0x0002ca43) cell_cmode_itu_pane_ParamLimits

0xe27c,	// (0x0002ca43) cell_cmode_itu_pane

0x311d,	// (0x000218e4) bg_button_pane_cp06_ParamLimits

0x311d,	// (0x000218e4) bg_button_pane_cp06

0xc24e,	// (0x0002aa15) cell_cmode_rocker_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) cell_cmode_rocker_pane_g1

0xd7bb,	// (0x0002bf82) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bb,	// (0x0002bf82) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002e55c) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002e55c) cell_cmode_rocker_pane_g

0x13f6,	// (0x0001fbbd) bg_button_pane_cp07

0xe293,	// (0x0002ca5a) cell_cmode_itu_pane_g1

0xe29c,	// (0x0002ca63) cell_cmode_itu_pane_t1

0xe2aa,	// (0x0002ca71) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002e561) cell_cmode_itu_pane_t

0xd9e8,	// (0x0002c1af) aid_touch_ctrl_left

0xd9f0,	// (0x0002c1b7) aid_touch_ctrl_right

0x13f6,	// (0x0001fbbd) compa_mode_pane

0xe2b8,	// (0x0002ca7f) aid_cmod_rocker_key_size_cp

0xe2c2,	// (0x0002ca89) aid_cmode_itu_key_size_cp

0xe2cc,	// (0x0002ca93) compa_mode_pane_g1

0xe2d4,	// (0x0002ca9b) compa_mode_pane_g2

0xe2dc,	// (0x0002caa3) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002e566) compa_mode_pane_g

0xe2e4,	// (0x0002caab) main_comp_mode_itu_pane_cp

0xe2ec,	// (0x0002cab3) main_comp_mode_rocker_pane_cp

0xe2f4,	// (0x0002cabb) cell_cmode_itu_pane_cp_ParamLimits

0xe2f4,	// (0x0002cabb) cell_cmode_itu_pane_cp

0xe309,	// (0x0002cad0) cell_cmode_rocker_pane_cp_ParamLimits

0xe309,	// (0x0002cad0) cell_cmode_rocker_pane_cp

0x311d,	// (0x000218e4) bg_button_pane_cp06_cp_ParamLimits

0x311d,	// (0x000218e4) bg_button_pane_cp06_cp

0xc24e,	// (0x0002aa15) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc24e,	// (0x0002aa15) cell_cmode_rocker_pane_g1_cp

0xbfd3,	// (0x0002a79a) cell_cmode_rocker_pane_g2_cp

0x13f6,	// (0x0001fbbd) bg_button_pane_cp07_cp

0xe31b,	// (0x0002cae2) cell_cmode_itu_pane_g1_cp

0xe324,	// (0x0002caeb) cell_cmode_itu_pane_t1_cp

0xe324,	// (0x0002caeb) cell_cmode_itu_pane_t2_cp

0xaefd,	// (0x000296c4) settings_code_pane_cp2

0x1466,	// (0x0001fc2d) bg_popup_window_pane_cp3_ParamLimits

0x2d9b,	// (0x00021562) heading_pane_cp3_ParamLimits

0x2daa,	// (0x00021571) listscroll_popup_graphic_pane_ParamLimits

0x7eb7,	// (0x0002667e) fep_hwr_aid_pane_ParamLimits

0x829b,	// (0x00026a62) aid_touch_sctrl_top_ParamLimits

0x82a8,	// (0x00026a6f) sctrl_sk_top_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002e49c) sctrl_sk_top_pane_g_ParamLimits

0x82b5,	// (0x00026a7c) sctrl_sk_top_pane_t1_ParamLimits

0x829b,	// (0x00026a62) aid_touch_sctrl_bottom_ParamLimits

0x82b5,	// (0x00026a7c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92d,	// (0x0002c0f4) aid_area_touch_clock

0x849a,	// (0x00026c61) aid_vkb2_area_top_pane_cell_ParamLimits

0x849a,	// (0x00026c61) aid_vkb2_area_top_pane_cell

0x85e9,	// (0x00026db0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x85e9,	// (0x00026db0) aid_vkb2_area_bottom_pane_cell

0xde9a,	// (0x0002c661) popup_char_count_window

0xe332,	// (0x0002caf9) popup_char_count_window_g1

0xe33b,	// (0x0002cb02) popup_char_count_window_g2

0xe344,	// (0x0002cb0b) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002e56d) popup_char_count_window_g

0xe34d,	// (0x0002cb14) popup_char_count_window_t1

0x8350,	// (0x00026b17) popup_fep_char_preview_window_ParamLimits

0x8350,	// (0x00026b17) popup_fep_char_preview_window

0x84b8,	// (0x00026c7f) vkb2_top_candi_pane_ParamLimits

0x84b8,	// (0x00026c7f) vkb2_top_candi_pane

0xe35b,	// (0x0002cb22) cell_vkb2_top_candi_pane_ParamLimits

0xe35b,	// (0x0002cb22) cell_vkb2_top_candi_pane

0xa018,	// (0x000287df) bg_popup_fep_char_preview_window_ParamLimits

0xa018,	// (0x000287df) bg_popup_fep_char_preview_window

0x88d4,	// (0x0002709b) popup_fep_char_preview_window_t1_ParamLimits

0x88d4,	// (0x0002709b) popup_fep_char_preview_window_t1

0xe3a9,	// (0x0002cb70) bg_popup_fep_char_preview_window_g1

0xe3b1,	// (0x0002cb78) bg_popup_fep_char_preview_window_g2

0xe3b9,	// (0x0002cb80) bg_popup_fep_char_preview_window_g3

0xe3f2,	// (0x0002cbb9) bg_popup_fep_char_preview_window_g4

0xe3fa,	// (0x0002cbc1) bg_popup_fep_char_preview_window_g5

0xe402,	// (0x0002cbc9) bg_popup_fep_char_preview_window_g6

0xe3c1,	// (0x0002cb88) bg_popup_fep_char_preview_window_g7

0xe3c9,	// (0x0002cb90) bg_popup_fep_char_preview_window_g8

0xe40a,	// (0x0002cbd1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002e574) bg_popup_fep_char_preview_window_g

0xc24e,	// (0x0002aa15) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc24e,	// (0x0002aa15) cell_vkb2_top_candi_pane_g1

0xc58f,	// (0x0002ad56) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc58f,	// (0x0002ad56) cell_vkb2_top_candi_pane_g2

0xc5b0,	// (0x0002ad77) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5b0,	// (0x0002ad77) cell_vkb2_top_candi_pane_g3

0x8916,	// (0x000270dd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8916,	// (0x000270dd) cell_vkb2_top_candi_pane_g4

0xe3d1,	// (0x0002cb98) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3d1,	// (0x0002cb98) cell_vkb2_top_candi_pane_g5

0xd7bb,	// (0x0002bf82) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7bb,	// (0x0002bf82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002e589) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002e589) cell_vkb2_top_candi_pane_g

0x8937,	// (0x000270fe) cell_vkb2_top_candi_pane_t1

0x7d17,	// (0x000264de) aid_size_touch_slider_mark_ParamLimits

0x7d17,	// (0x000264de) aid_size_touch_slider_mark

0xdfdd,	// (0x0002c7a4) grid_graphic2_catg_pane_ParamLimits

0xdfdd,	// (0x0002c7a4) grid_graphic2_catg_pane

0xe07b,	// (0x0002c842) popup_grid_graphic2_window_t1_ParamLimits

0xe07b,	// (0x0002c842) popup_grid_graphic2_window_t1

0xe08d,	// (0x0002c854) popup_grid_graphic2_window_t2_ParamLimits

0xe08d,	// (0x0002c854) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002e542) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002e542) popup_grid_graphic2_window_t

0x15b3,	// (0x0001fd7a) bg_button_pane_cp05_ParamLimits

0xe20a,	// (0x0002c9d1) cell_graphic2_control_pane_g1_ParamLimits

0xe412,	// (0x0002cbd9) cell_graphic2_catg_pane_ParamLimits

0xe412,	// (0x0002cbd9) cell_graphic2_catg_pane

0x13f6,	// (0x0001fbbd) bg_button_pane_cp12

0xe424,	// (0x0002cbeb) cell_graphic2_catg_pane_g1

0xd8f9,	// (0x0002c0c0) cell_tb_ext_pane_t1_ParamLimits

0x8706,	// (0x00026ecd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8706,	// (0x00026ecd) vkb2_top_cell_right_narrow_pane

0x871e,	// (0x00026ee5) vkb2_top_cell_right_wide_pane_ParamLimits

0x871e,	// (0x00026ee5) vkb2_top_cell_right_wide_pane

0x7ea9,	// (0x00026670) bg_vkb2_func_pane_ParamLimits

0x7ea9,	// (0x00026670) bg_vkb2_func_pane

0x878f,	// (0x00026f56) vkb2_top_cell_left_pane_g1_ParamLimits

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp03

0x87ed,	// (0x00026fb4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99ba,	// (0x00028181) bg_vkb2_func_pane_g1

0x99c2,	// (0x00028189) bg_vkb2_func_pane_g2

0x99d2,	// (0x00028199) bg_vkb2_func_pane_g3

0x99ca,	// (0x00028191) bg_vkb2_func_pane_g4

0x99da,	// (0x000281a1) bg_vkb2_func_pane_g5

0x99e2,	// (0x000281a9) bg_vkb2_func_pane_g6

0x99ea,	// (0x000281b1) bg_vkb2_func_pane_g7

0x99f2,	// (0x000281b9) bg_vkb2_func_pane_g8

0x99b2,	// (0x00028179) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002e596) bg_vkb2_func_pane_g

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp01

0x878f,	// (0x00026f56) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x878f,	// (0x00026f56) vkb2_top_cell_right_wide_pane_g1

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7ea9,	// (0x00026670) bg_vkb2_fuc_pane_cp02

0x8955,	// (0x0002711c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8955,	// (0x0002711c) vkb2_top_cell_right_narrow_pane_g1

0xd510,	// (0x0002bcd7) aid_touch_area_decrease_ParamLimits

0xd510,	// (0x0002bcd7) aid_touch_area_decrease

0xd534,	// (0x0002bcfb) aid_touch_area_increase_ParamLimits

0xd534,	// (0x0002bcfb) aid_touch_area_increase

0xd54c,	// (0x0002bd13) aid_touch_area_mute_ParamLimits

0xd54c,	// (0x0002bd13) aid_touch_area_mute

0xd568,	// (0x0002bd2f) aid_touch_area_slider_ParamLimits

0xd568,	// (0x0002bd2f) aid_touch_area_slider

0xd656,	// (0x0002be1d) popup_slider_window_g4_ParamLimits

0xd656,	// (0x0002be1d) popup_slider_window_g4

0xd66e,	// (0x0002be35) popup_slider_window_g5_ParamLimits

0xd66e,	// (0x0002be35) popup_slider_window_g5

0xd690,	// (0x0002be57) popup_slider_window_g6_ParamLimits

0xd690,	// (0x0002be57) popup_slider_window_g6

0xd6ce,	// (0x0002be95) popup_slider_window_t2_ParamLimits

0xd6ce,	// (0x0002be95) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002e490) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002e490) popup_slider_window_t

0xd6e6,	// (0x0002bead) slider_pane_ParamLimits

0xd6e6,	// (0x0002bead) slider_pane

0xe42d,	// (0x0002cbf4) slider_pane_g1_ParamLimits

0xe42d,	// (0x0002cbf4) slider_pane_g1

0xe441,	// (0x0002cc08) slider_pane_g2_ParamLimits

0xe441,	// (0x0002cc08) slider_pane_g2

0xe457,	// (0x0002cc1e) slider_pane_g3_ParamLimits

0xe457,	// (0x0002cc1e) slider_pane_g3

0x0003,

0xfde2,	// (0x0002e5a9) slider_pane_g_ParamLimits

0xfde2,	// (0x0002e5a9) slider_pane_g

0x791d,	// (0x000260e4) popup_tb_float_extension_window_ParamLimits

0x791d,	// (0x000260e4) popup_tb_float_extension_window

0xe483,	// (0x0002cc4a) aid_size_cell_tb_float_ext

0x13f6,	// (0x0001fbbd) bg_popup_sub_window_cp28

0xe48f,	// (0x0002cc56) grid_tb_float_ext_pane

0xe49b,	// (0x0002cc62) cell_tb_float_ext_pane_ParamLimits

0xe49b,	// (0x0002cc62) cell_tb_float_ext_pane

0xe4b7,	// (0x0002cc7e) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x0002cc87) grid_highlight_pane_cp12

0x7ff0,	// (0x000267b7) cell_last_hwr_side_pane_ParamLimits

0x7ff0,	// (0x000267b7) cell_last_hwr_side_pane

0xbfd3,	// (0x0002a79a) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x0002cc90) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002e5b2) cell_last_hwr_side_pane_g

0x86b5,	// (0x00026e7c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x86b5,	// (0x00026e7c) vkb2_area_bottom_space_btn_pane

0xc24e,	// (0x0002aa15) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf4f,	// (0x0002c716) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8937,	// (0x000270fe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8971,	// (0x00027138) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8971,	// (0x00027138) vkb2_area_bottom_space_btn_pane_g1

0x89ab,	// (0x00027172) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x89ab,	// (0x00027172) vkb2_area_bottom_space_btn_pane_g2

0x89e1,	// (0x000271a8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x89e1,	// (0x000271a8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002e5b7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002e5b7) vkb2_area_bottom_space_btn_pane_g

0x7f60,	// (0x00026727) cel_fep_hwr_func_pane_ParamLimits

0x7f60,	// (0x00026727) cel_fep_hwr_func_pane

0x7f9c,	// (0x00026763) cell_hwr_side_button_pane_ParamLimits

0x7f9c,	// (0x00026763) cell_hwr_side_button_pane

0xd92d,	// (0x0002c0f4) aid_area_touch_clock_ParamLimits

0x15b3,	// (0x0001fd7a) bg_uniindi_top_pane_ParamLimits

0xd941,	// (0x0002c108) uniindi_top_pane_g1_ParamLimits

0xd957,	// (0x0002c11e) uniindi_top_pane_g2_ParamLimits

0xd963,	// (0x0002c12a) uniindi_top_pane_g3_ParamLimits

0xd974,	// (0x0002c13b) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002e4c8) uniindi_top_pane_g_ParamLimits

0xd981,	// (0x0002c148) uniindi_top_pane_t1_ParamLimits

0x15b3,	// (0x0001fd7a) bg_vkb2_func_pane_cp01_ParamLimits

0x15b3,	// (0x0001fd7a) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x0002cc99) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x0002cc99) cel_fep_hwr_func_pane_g1

0x15b3,	// (0x0001fd7a) bg_vkb2_func_pane_cp02_ParamLimits

0x15b3,	// (0x0001fd7a) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x0002cc99) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x0002cc99) cell_hwr_side_button_pane_g1

0x9837,	// (0x00027ffe) status_pane_g4_ParamLimits

0x9837,	// (0x00027ffe) status_pane_g4

0x9851,	// (0x00028018) status_pane_t1

0xbd86,	// (0x0002a54d) form2_midp_gauge_slider_cont_pane

0xbd8e,	// (0x0002a555) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbda0,	// (0x0002a567) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdb2,	// (0x0002a579) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002e294) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdc4,	// (0x0002a58b) form2_midp_slider_pane_ParamLimits

0x8318,	// (0x00026adf) aid_size_cell_func_vkb2_ParamLimits

0x8318,	// (0x00026adf) aid_size_cell_func_vkb2

0xe46f,	// (0x0002cc36) slider_pane_g4_ParamLimits

0xe46f,	// (0x0002cc36) slider_pane_g4

0x8a2b,	// (0x000271f2) form2_midp_gauge_slider_pane_t2_cp01

0x8a39,	// (0x00027200) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8a39,	// (0x00027200) form2_midp_gauge_slider_pane_t3_cp01

0x8a56,	// (0x0002721d) form2_midp_slider_pane_cp01

0x13f6,	// (0x0001fbbd) navi_smil_pane

0xe50b,	// (0x0002ccd2) navi_smil_pane_g1

0xe513,	// (0x0002ccda) navi_smil_pane_t1

0xe4e0,	// (0x0002cca7) form2_midp_slider_pane_g1

0xe4e9,	// (0x0002ccb0) form2_midp_slider_pane_g2

0xe4f1,	// (0x0002ccb8) form2_midp_slider_pane_g3

0xe4e0,	// (0x0002cca7) form2_midp_slider_pane_g4

0xe4f9,	// (0x0002ccc0) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002e5c0) form2_midp_slider_pane_g

0x8a1b,	// (0x000271e2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8a1b,	// (0x000271e2) vkb2_area_bottom_space_btn_pane_g4

0x9656,	// (0x00027e1d) lc0_navi_pane_ParamLimits

0x9656,	// (0x00027e1d) lc0_navi_pane

0x96d2,	// (0x00027e99) lc0_stat_indi_pane_ParamLimits

0x96d2,	// (0x00027e99) lc0_stat_indi_pane

0x96e9,	// (0x00027eb0) ls0_title_pane_ParamLimits

0x96e9,	// (0x00027eb0) ls0_title_pane

0x311d,	// (0x000218e4) bg_popup_sub_pane_cp14_ParamLimits

0xd914,	// (0x0002c0db) list_uniindi_pane_ParamLimits

0xd920,	// (0x0002c0e7) uniindi_top_pane_ParamLimits

0xd9c0,	// (0x0002c187) list_single_uniindi_pane_g1_ParamLimits

0xd9d3,	// (0x0002c19a) list_single_uniindi_pane_t1_ParamLimits

0x8a5f,	// (0x00027226) lc0_stat_clock_pane_ParamLimits

0x8a5f,	// (0x00027226) lc0_stat_clock_pane

0xe521,	// (0x0002cce8) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x0002cce8) lc0_stat_indi_pane_g1

0xe52e,	// (0x0002ccf5) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x0002ccf5) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002e5cb) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002e5cb) lc0_stat_indi_pane_g

0x8a6c,	// (0x00027233) lc0_uni_indicator_pane_ParamLimits

0x8a6c,	// (0x00027233) lc0_uni_indicator_pane

0xe53b,	// (0x0002cd02) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x0002cd02) ls0_title_pane_g1

0xe54f,	// (0x0002cd16) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x0002cd16) ls0_title_pane_t1

0x8a79,	// (0x00027240) lc0_uni_indicator_pane_g1_ParamLimits

0x8a79,	// (0x00027240) lc0_uni_indicator_pane_g1

0xe585,	// (0x0002cd4c) lc0_stat_clock_pane_t1

0x13f6,	// (0x0001fbbd) main_ai5_pane

0xe593,	// (0x0002cd5a) ai5_sk_pane_ParamLimits

0xe593,	// (0x0002cd5a) ai5_sk_pane

0xe5a0,	// (0x0002cd67) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x0002cd67) cell_ai5_widget_pane

0xe643,	// (0x0002ce0a) aid_size_cell_widget_grid

0xe651,	// (0x0002ce18) bg_ai5_widget_pane_ParamLimits

0xe651,	// (0x0002ce18) bg_ai5_widget_pane

0xe6cd,	// (0x0002ce94) cell_ai5_widget_pane_g2

0xe6e1,	// (0x0002cea8) cell_ai5_widget_pane_g3

0xe6fb,	// (0x0002cec2) cell_ai5_widget_pane_g4

0xe70b,	// (0x0002ced2) cell_ai5_widget_pane_g5

0xe71b,	// (0x0002cee2) cell_ai5_widget_pane_g6

0xe727,	// (0x0002ceee) cell_ai5_widget_pane_g7

0xe793,	// (0x0002cf5a) cell_ai5_widget_pane_t1_ParamLimits

0xe793,	// (0x0002cf5a) cell_ai5_widget_pane_t1

0xe7b0,	// (0x0002cf77) cell_ai5_widget_pane_t2_ParamLimits

0xe7b0,	// (0x0002cf77) cell_ai5_widget_pane_t2

0xe7c8,	// (0x0002cf8f) cell_ai5_widget_pane_t3_ParamLimits

0xe7c8,	// (0x0002cf8f) cell_ai5_widget_pane_t3

0xe7e0,	// (0x0002cfa7) cell_ai5_widget_pane_t4_ParamLimits

0xe7e0,	// (0x0002cfa7) cell_ai5_widget_pane_t4

0xe806,	// (0x0002cfcd) cell_ai5_widget_pane_t5_ParamLimits

0xe806,	// (0x0002cfcd) cell_ai5_widget_pane_t5

0xe826,	// (0x0002cfed) cell_ai5_widget_pane_t6_ParamLimits

0xe826,	// (0x0002cfed) cell_ai5_widget_pane_t6

0xe838,	// (0x0002cfff) cell_ai5_widget_pane_t7_ParamLimits

0xe838,	// (0x0002cfff) cell_ai5_widget_pane_t7

0xe857,	// (0x0002d01e) cell_ai5_widget_pane_t8_ParamLimits

0xe857,	// (0x0002d01e) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002e5eb) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002e5eb) cell_ai5_widget_pane_t

0xe8db,	// (0x0002d0a2) grid_ai5_widget_pane

0x311d,	// (0x000218e4) highlight_cell_ai5_widget_pane_ParamLimits

0x311d,	// (0x000218e4) highlight_cell_ai5_widget_pane

0xe8e9,	// (0x0002d0b0) ai5_sk_left_pane

0xe8f3,	// (0x0002d0ba) ai5_sk_middle_pane

0xe8fd,	// (0x0002d0c4) ai5_sk_right_pane

0xe907,	// (0x0002d0ce) bg_ai5_widget_pane_g1_ParamLimits

0xe907,	// (0x0002d0ce) bg_ai5_widget_pane_g1

0xe913,	// (0x0002d0da) bg_ai5_widget_pane_g2_ParamLimits

0xe913,	// (0x0002d0da) bg_ai5_widget_pane_g2

0xe91f,	// (0x0002d0e6) bg_ai5_widget_pane_g3_ParamLimits

0xe91f,	// (0x0002d0e6) bg_ai5_widget_pane_g3

0xe92b,	// (0x0002d0f2) bg_ai5_widget_pane_g4_ParamLimits

0xe92b,	// (0x0002d0f2) bg_ai5_widget_pane_g4

0xe937,	// (0x0002d0fe) bg_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0002d0fe) bg_ai5_widget_pane_g5

0xe943,	// (0x0002d10a) bg_ai5_widget_pane_g6_ParamLimits

0xe943,	// (0x0002d10a) bg_ai5_widget_pane_g6

0xe94f,	// (0x0002d116) bg_ai5_widget_pane_g7_ParamLimits

0xe94f,	// (0x0002d116) bg_ai5_widget_pane_g7

0xe95b,	// (0x0002d122) bg_ai5_widget_pane_g8_ParamLimits

0xe95b,	// (0x0002d122) bg_ai5_widget_pane_g8

0xe967,	// (0x0002d12e) bg_ai5_widget_pane_g9_ParamLimits

0xe967,	// (0x0002d12e) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002e604) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002e604) bg_ai5_widget_pane_g

0xe99f,	// (0x0002d166) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99f,	// (0x0002d166) cell_shortcut_ai5_widget_pane

0x9155,	// (0x0002791c) bg_cell_shortcut_ai5_widget_pane

0xe9b2,	// (0x0002d179) cell_grid_ai5_widget_pane_g1

0x9155,	// (0x0002791c) highlight_cell_shortcut_ai5_widget_pane

0x99c2,	// (0x00028189) ai5_sk_left_pane_g1

0xe9bb,	// (0x0002d182) ai5_sk_left_pane_g2

0xe9c3,	// (0x0002d18a) ai5_sk_left_pane_g3

0xe9cb,	// (0x0002d192) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002e617) ai5_sk_left_pane_g

0xe9d3,	// (0x0002d19a) ai5_sk_left_pane_t1

0x99ba,	// (0x00028181) ai5_sk_right_pane_g1

0xe9e1,	// (0x0002d1a8) ai5_sk_right_pane_g2

0xe9e9,	// (0x0002d1b0) ai5_sk_right_pane_g3

0xe9f1,	// (0x0002d1b8) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002e620) ai5_sk_right_pane_g

0xe9f9,	// (0x0002d1c0) ai5_sk_right_pane_t1

0x99ba,	// (0x00028181) ai5_sk_middle_pane_g1

0x99c2,	// (0x00028189) ai5_sk_middle_pane_g2

0x99da,	// (0x000281a1) ai5_sk_middle_pane_g3

0xe9e9,	// (0x0002d1b0) ai5_sk_middle_pane_g4

0xe9c3,	// (0x0002d18a) ai5_sk_middle_pane_g5

0xea07,	// (0x0002d1ce) ai5_sk_middle_pane_g6

0xea0f,	// (0x0002d1d6) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002e629) ai5_sk_middle_pane_g

0x94dc,	// (0x00027ca3) aid_touch_area_size_lc0_ParamLimits

0x94dc,	// (0x00027ca3) aid_touch_area_size_lc0

0x80ff,	// (0x000268c6) cell_hwr_candidate_pane_t1_ParamLimits

0x94fa,	// (0x00027cc1) aid_touch_navi_pane

0x97e9,	// (0x00027fb0) status_dt_navi_pane_ParamLimits

0x97e9,	// (0x00027fb0) status_dt_navi_pane

0x97f6,	// (0x00027fbd) status_dt_sta_pane_ParamLimits

0x97f6,	// (0x00027fbd) status_dt_sta_pane

0xea17,	// (0x0002d1de) dt_sta_controll_pane

0xea24,	// (0x0002d1eb) dt_sta_indi_pane

0xea35,	// (0x0002d1fc) dt_sta_title_pane

0x15b3,	// (0x0001fd7a) bg_dt_sta_indi_pane_ParamLimits

0x15b3,	// (0x0001fd7a) bg_dt_sta_indi_pane

0xea48,	// (0x0002d20f) dt_sta_battery_pane

0xea50,	// (0x0002d217) dt_sta_indi_pane_g1

0xea59,	// (0x0002d220) dt_sta_indi_pane_g2

0xea62,	// (0x0002d229) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002e638) dt_sta_indi_pane_g

0xea6b,	// (0x0002d232) dt_sta_signal_pane

0x311d,	// (0x000218e4) bg_dt_sta_title_pane_ParamLimits

0x311d,	// (0x000218e4) bg_dt_sta_title_pane

0xea74,	// (0x0002d23b) dt_sta_title_pane_g1

0xea7c,	// (0x0002d243) dt_sta_title_pane_t1_ParamLimits

0xea7c,	// (0x0002d243) dt_sta_title_pane_t1

0x13f6,	// (0x0001fbbd) bg_dt_sta_control_pane

0xea91,	// (0x0002d258) dt_sta_controll_pane_g1

0xea9a,	// (0x0002d261) bg_dt_sta_title_pane_g1

0xeaa3,	// (0x0002d26a) bg_dt_sta_title_pane_g2

0xeaac,	// (0x0002d273) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002e63f) bg_dt_sta_title_pane_g

0xbfd3,	// (0x0002a79a) bg_dt_sta_indi_pane_g1

0xeab5,	// (0x0002d27c) dt_sta_signal_pane_g1

0xeabd,	// (0x0002d284) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002e646) dt_sta_signal_pane_g

0xeac5,	// (0x0002d28c) dt_sta_battery_pane_g1

0xeace,	// (0x0002d295) dt_sta_battery_pane_t1

0xbfd3,	// (0x0002a79a) bg_dt_sta_control_pane_g1

0x6dcf,	// (0x00025596) fep_china_uni_eep_pane

0x6dd7,	// (0x0002559e) fep_china_uni_entry_pane_ParamLimits

0x6de7,	// (0x000255ae) popup_fep_china_uni_window_g1_ParamLimits

0x6df7,	// (0x000255be) popup_fep_china_uni_window_g2_ParamLimits

0x6df7,	// (0x000255be) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002debf) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002debf) popup_fep_china_uni_window_g

0xeadd,	// (0x0002d2a4) fep_china_uni_eep_pane_g1

0xeae5,	// (0x0002d2ac) fep_china_uni_eep_pane_t1

0xe502,	// (0x0002ccc9) aid_touch_area_size_smil_player

0x964e,	// (0x00027e15) lc0_clock_pane

0x9845,	// (0x0002800c) status_pane_g5_ParamLimits

0x9845,	// (0x0002800c) status_pane_g5

0x75a2,	// (0x00025d69) popup_keymap_window

0x980b,	// (0x00027fd2) status_icon_pane

0xe6e1,	// (0x0002cea8) cell_ai5_widget_pane_g3_ParamLimits

0xe6fb,	// (0x0002cec2) cell_ai5_widget_pane_g4_ParamLimits

0xe70b,	// (0x0002ced2) cell_ai5_widget_pane_g5_ParamLimits

0xe733,	// (0x0002cefa) cell_ai5_widget_pane_g8_ParamLimits

0xe733,	// (0x0002cefa) cell_ai5_widget_pane_g8

0xe747,	// (0x0002cf0e) cell_ai5_widget_pane_g9_ParamLimits

0xe747,	// (0x0002cf0e) cell_ai5_widget_pane_g9

0xe75b,	// (0x0002cf22) cell_ai5_widget_pane_g10_ParamLimits

0xe75b,	// (0x0002cf22) cell_ai5_widget_pane_g10

0xeaf4,	// (0x0002d2bb) status_icon_pane_g1

0x13f6,	// (0x0001fbbd) bg_popup_sub_pane_cp13

0xeafc,	// (0x0002d2c3) popup_keymap_window_t1

0x942d,	// (0x00027bf4) control_pane_g6_ParamLimits

0x942d,	// (0x00027bf4) control_pane_g6

0x943a,	// (0x00027c01) control_pane_g7_ParamLimits

0x943a,	// (0x00027c01) control_pane_g7

0x9447,	// (0x00027c0e) control_pane_g8_ParamLimits

0x9447,	// (0x00027c0e) control_pane_g8

0xea17,	// (0x0002d1de) dt_sta_controll_pane_ParamLimits

0xea24,	// (0x0002d1eb) dt_sta_indi_pane_ParamLimits

0xea35,	// (0x0002d1fc) dt_sta_title_pane_ParamLimits

0x2fd8,	// (0x0002179f) aid_size_touch_scroll_bar_cale

0x5fed,	// (0x000247b4) popup_discreet_window_ParamLimits

0x5fed,	// (0x000247b4) popup_discreet_window

0x607b,	// (0x00024842) popup_sk_window

0xa018,	// (0x000287df) bg_popup_sub_pane_cp28_ParamLimits

0xa018,	// (0x000287df) bg_popup_sub_pane_cp28

0xeb0a,	// (0x0002d2d1) popup_discreet_window_g1_ParamLimits

0xeb0a,	// (0x0002d2d1) popup_discreet_window_g1

0xeb2a,	// (0x0002d2f1) popup_discreet_window_t1_ParamLimits

0xeb2a,	// (0x0002d2f1) popup_discreet_window_t1

0xeb48,	// (0x0002d30f) popup_discreet_window_t2_ParamLimits

0xeb48,	// (0x0002d30f) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002e64b) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002e64b) popup_discreet_window_t

0x8a8c,	// (0x00027253) popup_sk_window_g1

0x8a96,	// (0x0002725d) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002e652) popup_sk_window_g

0x8a9e,	// (0x00027265) popup_sk_window_t1

0x8aac,	// (0x00027273) popup_sk_window_t1_copy1

0xe6cd,	// (0x0002ce94) cell_ai5_widget_pane_g2_ParamLimits

0xe869,	// (0x0002d030) cell_ai5_widget_pane_t9_ParamLimits

0xe869,	// (0x0002d030) cell_ai5_widget_pane_t9

0x13f6,	// (0x0001fbbd) main_fep_fshwr2_pane

0x8aba,	// (0x00027281) aid_fshwr2_btn_pane

0x8aca,	// (0x00027291) aid_fshwr2_syb_pane

0x8ade,	// (0x000272a5) aid_fshwr2_txt_pane

0x8aee,	// (0x000272b5) fshwr2_func_candi_pane

0x8b0e,	// (0x000272d5) fshwr2_hwr_syb_pane

0x8b24,	// (0x000272eb) fshwr2_icf_pane

0x13f6,	// (0x0001fbbd) fshwr2_icf_bg_pane

0x8b58,	// (0x0002731f) fshwr2_icf_pane_t1_ParamLimits

0x8b58,	// (0x0002731f) fshwr2_icf_pane_t1

0x6bcf,	// (0x00025396) fshwr2_func_candi_pane_g1

0xeb9a,	// (0x0002d361) fshwr2_func_candi_row_pane_ParamLimits

0xeb9a,	// (0x0002d361) fshwr2_func_candi_row_pane

0x8b70,	// (0x00027337) cell_fshwr2_syb_pane_ParamLimits

0x8b70,	// (0x00027337) cell_fshwr2_syb_pane

0xe4d2,	// (0x0002cc99) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d2,	// (0x0002cc99) fshwr2_hwr_syb_pane_g1

0x13f6,	// (0x0001fbbd) bg_popup_call_pane_cp01

0x8b91,	// (0x00027358) fshwr2_func_candi_cell_pane_ParamLimits

0x8b91,	// (0x00027358) fshwr2_func_candi_cell_pane

0xa68f,	// (0x00028e56) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa68f,	// (0x00028e56) fshwr2_func_candi_cell_bg_pane

0x8be2,	// (0x000273a9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8be2,	// (0x000273a9) fshwr2_func_candi_cell_pane_g1

0x8c0d,	// (0x000273d4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8c0d,	// (0x000273d4) fshwr2_func_candi_cell_pane_t1

0x13f6,	// (0x0001fbbd) bg_button_pane_cp08

0x947c,	// (0x00027c43) cell_fshwr2_syb_bg_pane

0x8c20,	// (0x000273e7) cell_fshwr2_syb_bg_pane_g1

0x8c34,	// (0x000273fb) cell_fshwr2_syb_bg_pane_t1

0x311d,	// (0x000218e4) main_tmo_pane

0xab3c,	// (0x00029303) uni_indicator_pane_g1_ParamLimits

0xab52,	// (0x00029319) uni_indicator_pane_g2_ParamLimits

0xab68,	// (0x0002932f) uni_indicator_pane_g3_ParamLimits

0xab7b,	// (0x00029342) uni_indicator_pane_g4_ParamLimits

0xab7b,	// (0x00029342) uni_indicator_pane_g4

0xab8f,	// (0x00029356) uni_indicator_pane_g5_ParamLimits

0xab8f,	// (0x00029356) uni_indicator_pane_g5

0xab8f,	// (0x00029356) uni_indicator_pane_g6_ParamLimits

0xab8f,	// (0x00029356) uni_indicator_pane_g6

0xf8fc,	// (0x0002e0c3) uni_indicator_pane_g_ParamLimits

0xd4e0,	// (0x0002bca7) popup_tmo_note_window_ParamLimits

0xd4e0,	// (0x0002bca7) popup_tmo_note_window

0x311d,	// (0x000218e4) fshwr2_bg_pane

0x8bfe,	// (0x000273c5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8bfe,	// (0x000273c5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002e657) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002e657) fshwr2_func_candi_cell_pane_g

0xbfd3,	// (0x0002a79a) bg_popup_window_pane_cp01

0x8c4a,	// (0x00027411) bg_popup_window_pane_g1_cp01

0xebbd,	// (0x0002d384) bg_popup_window_pane_cp22_ParamLimits

0xebbd,	// (0x0002d384) bg_popup_window_pane_cp22

0xebcb,	// (0x0002d392) listscroll_tmo_link_pane_ParamLimits

0xebcb,	// (0x0002d392) listscroll_tmo_link_pane

0xec0b,	// (0x0002d3d2) popup_tmo_note_window_g1_ParamLimits

0xec0b,	// (0x0002d3d2) popup_tmo_note_window_g1

0xec18,	// (0x0002d3df) tmo_note_info_pane_ParamLimits

0xec18,	// (0x0002d3df) tmo_note_info_pane

0xec32,	// (0x0002d3f9) list_tmo_note_info_pane_g1_ParamLimits

0xec32,	// (0x0002d3f9) list_tmo_note_info_pane_g1

0xec49,	// (0x0002d410) list_tmo_note_info_pane_g2_ParamLimits

0xec49,	// (0x0002d410) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002e65c) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002e65c) list_tmo_note_info_pane_g

0xec65,	// (0x0002d42c) list_tmo_note_info_text_pane_ParamLimits

0xec65,	// (0x0002d42c) list_tmo_note_info_text_pane

0xecea,	// (0x0002d4b1) list_tmo_link_pane

0xecf7,	// (0x0002d4be) scroll_pane_cp20

0xed04,	// (0x0002d4cb) list_single_tmo_link_pane_ParamLimits

0xed04,	// (0x0002d4cb) list_single_tmo_link_pane

0xed14,	// (0x0002d4db) list_single_tmo_link_pane_t1

0xed22,	// (0x0002d4e9) list_tmo_note_info_text_pane_t1_ParamLimits

0xed22,	// (0x0002d4e9) list_tmo_note_info_text_pane_t1

0x6506,	// (0x00024ccd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6506,	// (0x00024ccd) aid_size_touch_scroll_bar_cp01

0x5210,	// (0x000239d7) aid_size_touch_slider_marker

0x6063,	// (0x0002482a) popup_settings_window_ParamLimits

0x6063,	// (0x0002482a) popup_settings_window

0x53d7,	// (0x00023b9e) popup_candi_list_indi_window

0x94fa,	// (0x00027cc1) aid_touch_navi_pane_ParamLimits

0x826f,	// (0x00026a36) rs_clock_indi_pane

0x8278,	// (0x00026a3f) sctrl_sk_bottom_pane_ParamLimits

0x8289,	// (0x00026a50) sctrl_sk_top_pane_ParamLimits

0x836a,	// (0x00026b31) popup_fep_tooltip_window

0xe643,	// (0x0002ce0a) aid_size_cell_widget_grid_ParamLimits

0xe6b8,	// (0x0002ce7f) cell_ai5_widget_pane_g1_ParamLimits

0xe6b8,	// (0x0002ce7f) cell_ai5_widget_pane_g1

0xe71b,	// (0x0002cee2) cell_ai5_widget_pane_g6_ParamLimits

0xe727,	// (0x0002ceee) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002e5d0) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002e5d0) cell_ai5_widget_pane_g

0xe898,	// (0x0002d05f) cell_ai5_widget_pane_t10_ParamLimits

0xe898,	// (0x0002d05f) cell_ai5_widget_pane_t10

0xe8db,	// (0x0002d0a2) grid_ai5_widget_pane_ParamLimits

0xe973,	// (0x0002d13a) cell_contacts_ai5_widget_pane_ParamLimits

0xe973,	// (0x0002d13a) cell_contacts_ai5_widget_pane

0xeb5d,	// (0x0002d324) popup_discreet_window_t3_ParamLimits

0xeb5d,	// (0x0002d324) popup_discreet_window_t3

0x8b40,	// (0x00027307) popup_fshwr2_char_preview_window_ParamLimits

0x8b40,	// (0x00027307) popup_fshwr2_char_preview_window

0xec83,	// (0x0002d44a) tmo_note_info_pane_t1

0xec98,	// (0x0002d45f) tmo_note_info_pane_t2

0xecb1,	// (0x0002d478) tmo_note_info_pane_t3

0xecc6,	// (0x0002d48d) tmo_note_info_pane_t4

0xecd8,	// (0x0002d49f) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002e661) tmo_note_info_pane_t

0xecea,	// (0x0002d4b1) list_tmo_link_pane_ParamLimits

0xecf7,	// (0x0002d4be) scroll_pane_cp20_ParamLimits

0x13f6,	// (0x0001fbbd) bg_popup_fep_char_preview_window_cp01

0xed3b,	// (0x0002d502) popup_fshwr2_char_preview_window_t1

0xed49,	// (0x0002d510) popup_candi_list_indi_window_g1

0xed52,	// (0x0002d519) bg_cell_contacts_ai5_widget_pane

0xed5e,	// (0x0002d525) cell_contacts_ai5_widget_pane_g1

0xed73,	// (0x0002d53a) cell_contacts_ai5_widget_pane_g2

0xed7f,	// (0x0002d546) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002e66c) cell_contacts_ai5_widget_pane_g

0xed8b,	// (0x0002d552) cell_contacts_ai5_widget_pane_t1

0x311d,	// (0x000218e4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee02,	// (0x0002d5c9) settings_container_pane

0x9155,	// (0x0002791c) listscroll_set_pane_copy1

0xb6f8,	// (0x00029ebf) scroll_pane_cp121_copy1

0xee0e,	// (0x0002d5d5) set_content_pane_copy1

0xee16,	// (0x0002d5dd) aid_height_set_list_copy1_ParamLimits

0xee16,	// (0x0002d5dd) aid_height_set_list_copy1

0xad8f,	// (0x00029556) aid_size_parent_copy1_ParamLimits

0xad8f,	// (0x00029556) aid_size_parent_copy1

0xee22,	// (0x0002d5e9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee22,	// (0x0002d5e9) button_value_adjust_pane_cp6_copy1

0x947c,	// (0x00027c43) list_highlight_pane_cp2_copy1_ParamLimits

0x947c,	// (0x00027c43) list_highlight_pane_cp2_copy1

0xee36,	// (0x0002d5fd) list_set_pane_copy1_ParamLimits

0xee36,	// (0x0002d5fd) list_set_pane_copy1

0xed9d,	// (0x0002d564) main_pane_set_t1_copy1_ParamLimits

0xed9d,	// (0x0002d564) main_pane_set_t1_copy1

0xedd7,	// (0x0002d59e) main_pane_set_t2_copy1_ParamLimits

0xedd7,	// (0x0002d59e) main_pane_set_t2_copy1

0xeef7,	// (0x0002d6be) main_pane_set_t3_copy1

0xef05,	// (0x0002d6cc) main_pane_set_t4_copy1

0xedf6,	// (0x0002d5bd) set_content_pane_g1_copy1_ParamLimits

0xedf6,	// (0x0002d5bd) set_content_pane_g1_copy1

0xef13,	// (0x0002d6da) setting_code_pane_copy1

0xef1b,	// (0x0002d6e2) setting_slider_graphic_pane_copy1

0xef1b,	// (0x0002d6e2) setting_slider_pane_copy1

0xef23,	// (0x0002d6ea) setting_text_pane_copy1

0xef23,	// (0x0002d6ea) setting_volume_pane_copy1

0xef13,	// (0x0002d6da) settings_code_pane_cp2_copy1

0xef2b,	// (0x0002d6f2) settings_code_pane_cp_copy1_ParamLimits

0xef2b,	// (0x0002d6f2) settings_code_pane_cp_copy1

0x8c53,	// (0x0002741a) volume_set_pane_copy1

0xef3f,	// (0x0002d706) volume_set_pane_g10_copy1

0xef4b,	// (0x0002d712) volume_set_pane_g1_copy1

0xef55,	// (0x0002d71c) volume_set_pane_g2_copy1

0xef5f,	// (0x0002d726) volume_set_pane_g3_copy1

0xef69,	// (0x0002d730) volume_set_pane_g4_copy1

0xef73,	// (0x0002d73a) volume_set_pane_g5_copy1

0xef7d,	// (0x0002d744) volume_set_pane_g6_copy1

0xef87,	// (0x0002d74e) volume_set_pane_g7_copy1

0xef91,	// (0x0002d758) volume_set_pane_g8_copy1

0xef9b,	// (0x0002d762) volume_set_pane_g9_copy1

0x1466,	// (0x0001fc2d) bg_set_opt_pane_cp_copy1_ParamLimits

0x1466,	// (0x0001fc2d) bg_set_opt_pane_cp_copy1

0x8c5f,	// (0x00027426) setting_slider_pane_t1_copy1_ParamLimits

0x8c5f,	// (0x00027426) setting_slider_pane_t1_copy1

0x8c7e,	// (0x00027445) setting_slider_pane_t2_copy1_ParamLimits

0x8c7e,	// (0x00027445) setting_slider_pane_t2_copy1

0x8c98,	// (0x0002745f) setting_slider_pane_t3_copy1_ParamLimits

0x8c98,	// (0x0002745f) setting_slider_pane_t3_copy1

0x8cb0,	// (0x00027477) slider_set_pane_copy1_ParamLimits

0x8cb0,	// (0x00027477) slider_set_pane_copy1

0x31d8,	// (0x0002199f) set_opt_bg_pane_g1_copy2

0x31e0,	// (0x000219a7) set_opt_bg_pane_g2_copy2

0xefa7,	// (0x0002d76e) set_opt_bg_pane_g3_copy2

0x31f0,	// (0x000219b7) set_opt_bg_pane_g4_copy2

0x31f8,	// (0x000219bf) set_opt_bg_pane_g5_copy2

0x3200,	// (0x000219c7) set_opt_bg_pane_g6_copy2

0xefb1,	// (0x0002d778) set_opt_bg_pane_g7_copy2

0xefbb,	// (0x0002d782) set_opt_bg_pane_g8_copy2

0xefc5,	// (0x0002d78c) set_opt_bg_pane_g9_copy2

0x8cc6,	// (0x0002748d) aid_size_touch_slider_mark_copy1_ParamLimits

0x8cc6,	// (0x0002748d) aid_size_touch_slider_mark_copy1

0xefcf,	// (0x0002d796) slider_set_pane_g1_copy1

0x8cda,	// (0x000274a1) slider_set_pane_g2_copy1

0x7d37,	// (0x000264fe) slider_set_pane_g3_copy1_ParamLimits

0x7d37,	// (0x000264fe) slider_set_pane_g3_copy1

0x7d4b,	// (0x00026512) slider_set_pane_g4_copy1_ParamLimits

0x7d4b,	// (0x00026512) slider_set_pane_g4_copy1

0x7d63,	// (0x0002652a) slider_set_pane_g5_copy1_ParamLimits

0x7d63,	// (0x0002652a) slider_set_pane_g5_copy1

0x7d37,	// (0x000264fe) slider_set_pane_g6_copy1_ParamLimits

0x7d37,	// (0x000264fe) slider_set_pane_g6_copy1

0x8ce2,	// (0x000274a9) slider_set_pane_g7_copy1_ParamLimits

0x8ce2,	// (0x000274a9) slider_set_pane_g7_copy1

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp2_copy1

0xefd8,	// (0x0002d79f) setting_slider_graphic_pane_g1_copy1

0xefe1,	// (0x0002d7a8) setting_slider_graphic_pane_t1_copy1

0xeff1,	// (0x0002d7b8) setting_slider_graphic_pane_t2_copy1

0xf001,	// (0x0002d7c8) slider_set_pane_cp_copy1

0xf011,	// (0x0002d7d8) input_focus_pane_cp1_copy1

0xf01a,	// (0x0002d7e1) list_set_text_pane_copy1

0xf022,	// (0x0002d7e9) setting_text_pane_g1_copy1

0x5d44,	// (0x0002450b) set_text_pane_t1_copy1

0xf011,	// (0x0002d7d8) input_focus_pane_cp2_copy1

0xf022,	// (0x0002d7e9) setting_code_pane_g1_copy1

0xf02b,	// (0x0002d7f2) setting_code_pane_t1_copy1

0xb4fd,	// (0x00029cc4) list_set_graphic_pane_copy1

0x140a,	// (0x0001fbd1) bg_set_opt_pane_cp4_copy1

0x710d,	// (0x000258d4) list_set_graphic_pane_g1_copy1_ParamLimits

0x710d,	// (0x000258d4) list_set_graphic_pane_g1_copy1

0xf039,	// (0x0002d800) list_set_graphic_pane_g2_copy1

0x7125,	// (0x000258ec) list_set_graphic_pane_t1_copy1_ParamLimits

0x7125,	// (0x000258ec) list_set_graphic_pane_t1_copy1

0xbfd3,	// (0x0002a79a) rs_clock_indi_pane_g1

0xf041,	// (0x0002d808) rs_clock_indi_pane_t1

0xf04f,	// (0x0002d816) rs_indi_pane

0xf057,	// (0x0002d81e) rs_indi_pane_g1

0xf060,	// (0x0002d827) rs_indi_pane_g2

0xf069,	// (0x0002d830) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002e673) rs_indi_pane_g

0x9155,	// (0x0002791c) bg_popup_preview_window_pane_cp03

0xf072,	// (0x0002d839) popup_fep_tooltip_window_t1

0xcc8c,	// (0x0002b453) popup_note2_window_g2_ParamLimits

0xcc8c,	// (0x0002b453) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002e400) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002e400) popup_note2_window_g

0xd194,	// (0x0002b95b) bg_popup_sub_pane_cp11_ParamLimits

0xd1a1,	// (0x0002b968) cell_ai3_links_pane_g1_ParamLimits

0xd1b8,	// (0x0002b97f) cell_ai3_links_pane_t1

0x5d44,	// (0x0002450b) set_text_pane_t1_copy1_ParamLimits

0x9057,	// (0x0002781e) cell_graphic_popup_pane_cp2_ParamLimits

0x9057,	// (0x0002781e) cell_graphic_popup_pane_cp2

0xf080,	// (0x0002d847) cell_graphic_popup_pane_g1_cp2

0x2deb,	// (0x000215b2) cell_graphic_popup_pane_g2_cp2

0xf088,	// (0x0002d84f) cell_graphic_popup_pane_g3_cp2

0xf090,	// (0x0002d857) cell_graphic_popup_pane_t2_cp2

0x2dfc,	// (0x000215c3) grid_highlight_pane_cp3_cp2

0x68d5,	// (0x0002509c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x311d,	// (0x000218e4) main_tmo_pane_ParamLimits

0xd4d4,	// (0x0002bc9b) popup_tmo_big_image_note_window

0xe6a7,	// (0x0002ce6e) cell_ai5_widget_list_pane

0xe6af,	// (0x0002ce76) cell_ai5_widget_lrg_icon_pane

0xec83,	// (0x0002d44a) tmo_note_info_pane_t1_ParamLimits

0xec98,	// (0x0002d45f) tmo_note_info_pane_t2_ParamLimits

0xecb1,	// (0x0002d478) tmo_note_info_pane_t3_ParamLimits

0xecc6,	// (0x0002d48d) tmo_note_info_pane_t4_ParamLimits

0xecd8,	// (0x0002d49f) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002e661) tmo_note_info_pane_t_ParamLimits

0xee02,	// (0x0002d5c9) settings_container_pane_ParamLimits

0xf009,	// (0x0002d7d0) indicator_popup_pane_cp5

0xf009,	// (0x0002d7d0) indicator_popup_pane_cp6

0xb4fd,	// (0x00029cc4) list_set_graphic_pane_copy1_ParamLimits

0x13f6,	// (0x0001fbbd) bg_popup_window_pane_cp23

0xf09e,	// (0x0002d865) popup_tmo_big_image_note_window_g1

0xf0aa,	// (0x0002d871) popup_tmo_big_image_note_window_t1

0xf0ba,	// (0x0002d881) popup_tmo_big_image_note_window_t2

0xf0ca,	// (0x0002d891) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002e67a) popup_tmo_big_image_note_window_t

0xbfd3,	// (0x0002a79a) cell_ai5_widget_lrg_icon_pane_g1

0xf0da,	// (0x0002d8a1) cell_ai5_widget_lrg_icon_pane_t1

0xf0e8,	// (0x0002d8af) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e8,	// (0x0002d8af) cell_ai5_widget_list_row_pane

0xf100,	// (0x0002d8c7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf100,	// (0x0002d8c7) cell_ai5_widget_list_row_pane_g1

0xf10d,	// (0x0002d8d4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf10d,	// (0x0002d8d4) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0002d8ff) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0002d8ff) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002e681) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002e681) cell_ai5_widget_list_row_pane_t

0x13f6,	// (0x0001fbbd) main_fep_vtchi_ss_pane

0xf188,	// (0x0002d94f) popup_fep_char_pre_window

0xf190,	// (0x0002d957) popup_fep_ituss_window

0xf1bc,	// (0x0002d983) popup_fep_vkbss_window

0x947c,	// (0x00027c43) grid_vkbss_keypad_pane_ParamLimits

0x947c,	// (0x00027c43) grid_vkbss_keypad_pane

0xf1fe,	// (0x0002d9c5) ituss_keypad_pane

0x8d02,	// (0x000274c9) aid_vkbss_key_offset_ParamLimits

0x8d02,	// (0x000274c9) aid_vkbss_key_offset

0x8d0e,	// (0x000274d5) cell_vkbss_key_pane_ParamLimits

0x8d0e,	// (0x000274d5) cell_vkbss_key_pane

0xf20a,	// (0x0002d9d1) bg_cell_vkbss_key_g1_ParamLimits

0xf20a,	// (0x0002d9d1) bg_cell_vkbss_key_g1

0xf216,	// (0x0002d9dd) cell_vkbss_key_3p_pane_ParamLimits

0xf216,	// (0x0002d9dd) cell_vkbss_key_3p_pane

0xf24c,	// (0x0002da13) cell_vkbss_key_g1_ParamLimits

0xf24c,	// (0x0002da13) cell_vkbss_key_g1

0xf282,	// (0x0002da49) cell_vkbss_key_t1_ParamLimits

0xf282,	// (0x0002da49) cell_vkbss_key_t1

0x8d6c,	// (0x00027533) cell_ituss_key_pane_ParamLimits

0x8d6c,	// (0x00027533) cell_ituss_key_pane

0xf2de,	// (0x0002daa5) bg_cell_ituss_key_g1_ParamLimits

0xf2de,	// (0x0002daa5) bg_cell_ituss_key_g1

0xf2ea,	// (0x0002dab1) cell_ituss_key_pane_g1_ParamLimits

0xf2ea,	// (0x0002dab1) cell_ituss_key_pane_g1

0x8d7d,	// (0x00027544) cell_ituss_key_pane_g2_ParamLimits

0x8d7d,	// (0x00027544) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002e688) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002e688) cell_ituss_key_pane_g

0x8e01,	// (0x000275c8) cell_ituss_key_t1_ParamLimits

0x8e01,	// (0x000275c8) cell_ituss_key_t1

0x8e3b,	// (0x00027602) cell_ituss_key_t2_ParamLimits

0x8e3b,	// (0x00027602) cell_ituss_key_t2

0x8e6d,	// (0x00027634) cell_ituss_key_t3_ParamLimits

0x8e6d,	// (0x00027634) cell_ituss_key_t3

0x8e9e,	// (0x00027665) cell_ituss_key_t4_ParamLimits

0x8e9e,	// (0x00027665) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002e695) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002e695) cell_ituss_key_t

0xf310,	// (0x0002dad7) cell_vkbss_key_3p_pane_g1

0xf318,	// (0x0002dadf) cell_vkbss_key_3p_pane_g2

0xf320,	// (0x0002dae7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002e6a0) cell_vkbss_key_3p_pane_g

0x9155,	// (0x0002791c) bg_popup_fep_char_preview_window_cp02

0xf328,	// (0x0002daef) popup_fep_char_pre_window_t1

0xe630,	// (0x0002cdf7) main_ai5_sk_pane

0xed52,	// (0x0002d519) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5e,	// (0x0002d525) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed73,	// (0x0002d53a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7f,	// (0x0002d546) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002e66c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8b,	// (0x0002d552) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x311d,	// (0x000218e4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf336,	// (0x0002dafd) main_ai5_sk_pane_g1

0x9e50,	// (0x00028617) popup_query_code_window_g1

0xf1a6,	// (0x0002d96d) popup_fep_vkb_icf_pane

0xf1d5,	// (0x0002d99c) popup_fep_vtchi_icf_pane

0xf33f,	// (0x0002db06) bg_icf_pane

0xf33f,	// (0x0002db06) list_vkb_icf_pane

0xf34b,	// (0x0002db12) bg_icf_pane_cp01

0xf35e,	// (0x0002db25) vtchi_icf_list_pane

0xf3be,	// (0x0002db85) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0002db85) list_vkb_icf_pane_t1

0xf3da,	// (0x0002dba1) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0002dba1) vtchi_icf_list_pane_t1

0xf190,	// (0x0002d957) popup_fep_ituss_window_ParamLimits

0xf1d5,	// (0x0002d99c) popup_fep_vtchi_icf_pane_ParamLimits

0xf1fe,	// (0x0002d9c5) ituss_keypad_pane_ParamLimits

0x8cf8,	// (0x000274bf) ituss_sks_pane

0xf33f,	// (0x0002db06) bg_icf_pane_ParamLimits

0xf160,	// (0x0002d927) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0002d927) icf_edit_indi_pane

0xf33f,	// (0x0002db06) list_vkb_icf_pane_ParamLimits

0xf34b,	// (0x0002db12) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0002d942) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0002d942) icf_edit_indi_pane_cp01

0xf35e,	// (0x0002db25) vtchi_query_pane

0xe4d2,	// (0x0002cc99) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x0002cc99) icf_edit_indi_pane_g1

0xf44a,	// (0x0002dc11) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0002dc11) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002e6cb) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002e6cb) icf_edit_indi_pane_g

0xf45e,	// (0x0002dc25) icf_edit_indi_pane_t1

0xf3f3,	// (0x0002dbba) bg_input_focus_pane_cp042

0x2fcf,	// (0x00021796) vtchi_button_pane

0xf3fc,	// (0x0002dbc3) vtchi_query_pane_t1

0xf40a,	// (0x0002dbd1) vtchi_query_pane_t2

0xf418,	// (0x0002dbdf) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002e6ba) vtchi_query_pane_t

0x13f6,	// (0x0001fbbd) bg_button_pane_cp13

0xf426,	// (0x0002dbed) vtchi_button_pane_g1

0x8ee1,	// (0x000276a8) ituss_sks_pane_g1

0x8eec,	// (0x000276b3) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002e6c1) ituss_sks_pane_g

0xf42e,	// (0x0002dbf5) ituss_sks_pane_t1

0xf43c,	// (0x0002dc03) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002e6c6) ituss_sks_pane_t

0xba9b,	// (0x0002a262) indicator_nsta_pane_cp_g1

0xbaa4,	// (0x0002a26b) indicator_nsta_pane_cp_g2

0xbaac,	// (0x0002a273) indicator_nsta_pane_cp_g3

0xbab4,	// (0x0002a27b) indicator_nsta_pane_cp_g4

0xbaa4,	// (0x0002a26b) indicator_nsta_pane_cp_g5

0xbaac,	// (0x0002a273) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002e24a) indicator_nsta_pane_cp_g

0xe1f8,	// (0x0002c9bf) cell_graphic2_pane_t2_ParamLimits

0xe1f8,	// (0x0002c9bf) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002e557) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002e557) cell_graphic2_pane_t

0xe224,	// (0x0002c9eb) cell_graphic2_control_pane_t1

0x6d26,	// (0x000254ed) signal_pane_g3_ParamLimits

0x6d26,	// (0x000254ed) signal_pane_g3

0x6d35,	// (0x000254fc) signal_pane_g4_ParamLimits

0x6d35,	// (0x000254fc) signal_pane_g4

0xf14a,	// (0x0002d911) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0002d911) cell_ai5_widget_list_row_pane_t3

0xf2fe,	// (0x0002dac5) cell_ituss_key_pane_t1_ParamLimits

0xf2fe,	// (0x0002dac5) cell_ituss_key_pane_t1

0x9ab7,	// (0x0002827e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ab7,	// (0x0002827e) form_field_data_wide_pane_vc_t2

0x9acb,	// (0x00028292) form_field_data_wide_pane_vc_t3_ParamLimits

0x9acb,	// (0x00028292) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002dfab) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002dfab) form_field_data_wide_pane_vc_t

0xb738,	// (0x00029eff) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb738,	// (0x00029eff) form_field_slider_wide_pane_vc_t3

0xb80e,	// (0x00029fd5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80e,	// (0x00029fd5) form_field_popup_wide_pane_vc_t2

0xb825,	// (0x00029fec) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb825,	// (0x00029fec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002e239) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002e239) form_field_popup_wide_pane_vc_t

0x8aba,	// (0x00027281) aid_fshwr2_btn_pane_ParamLimits

0x8aca,	// (0x00027291) aid_fshwr2_syb_pane_ParamLimits

0x8ade,	// (0x000272a5) aid_fshwr2_txt_pane_ParamLimits

0x311d,	// (0x000218e4) fshwr2_bg_pane_ParamLimits

0x8aee,	// (0x000272b5) fshwr2_func_candi_pane_ParamLimits

0x8b0e,	// (0x000272d5) fshwr2_hwr_syb_pane_ParamLimits

0x8b24,	// (0x000272eb) fshwr2_icf_pane_ParamLimits

0x591d,	// (0x000240e4) list_double_graphic_pane_vc_g4_ParamLimits

0x591d,	// (0x000240e4) list_double_graphic_pane_vc_g4

0x8d9d,	// (0x00027564) cell_ituss_key_pane_g3_ParamLimits

0x8d9d,	// (0x00027564) cell_ituss_key_pane_g3

0x8ecf,	// (0x00027696) cell_ituss_key_t5_ParamLimits

0x8ecf,	// (0x00027696) cell_ituss_key_t5

0xf1bc,	// (0x0002d983) popup_fep_vkbss_window_ParamLimits

0xe63a,	// (0x0002ce01) aid_cell_ai5_quarter

0xf45e,	// (0x0002dc25) icf_edit_indi_pane_t1_ParamLimits

0x165b,	// (0x0001fe22) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x165b,	// (0x0001fe22) aid_tch_indicator_popup_pane_cp2

0x166e,	// (0x0001fe35) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x166e,	// (0x0001fe35) aid_tch_query_popup_data_pane_cp2

0x9df8,	// (0x000285bf) aid_tch_query_popup_pane_ParamLimits

0x9df8,	// (0x000285bf) aid_tch_query_popup_pane

0x9df8,	// (0x000285bf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9df8,	// (0x000285bf) aid_tch_query_popup_data_pane_cp1

0x947c,	// (0x00027c43) cell_fshwr2_syb_bg_pane_ParamLimits

0x8c20,	// (0x000273e7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8c34,	// (0x000273fb) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0002d96d) popup_fep_vkb_icf_pane_ParamLimits

0x890e,	// (0x000270d5) bg_popup_fep_char_preview_window_g10

0xe76f,	// (0x0002cf36) cell_ai5_widget_pane_g11_ParamLimits

0xe76f,	// (0x0002cf36) cell_ai5_widget_pane_g11

0xe77b,	// (0x0002cf42) cell_ai5_widget_pane_g12_ParamLimits

0xe77b,	// (0x0002cf42) cell_ai5_widget_pane_g12

0xe787,	// (0x0002cf4e) cell_ai5_widget_pane_g13_ParamLimits

0xe787,	// (0x0002cf4e) cell_ai5_widget_pane_g13

0xe8b7,	// (0x0002d07e) cell_ai5_widget_pane_t11_ParamLimits

0xe8b7,	// (0x0002d07e) cell_ai5_widget_pane_t11

0xe8c9,	// (0x0002d090) cell_ai5_widget_pane_t12_ParamLimits

0xe8c9,	// (0x0002d090) cell_ai5_widget_pane_t12

0x8da9,	// (0x00027570) cell_ituss_key_pane_g4_ParamLimits

0x8da9,	// (0x00027570) cell_ituss_key_pane_g4

0x8dc5,	// (0x0002758c) cell_ituss_key_pane_g5_ParamLimits

0x8dc5,	// (0x0002758c) cell_ituss_key_pane_g5

0x8de1,	// (0x000275a8) cell_ituss_key_pane_g6_ParamLimits

0x8de1,	// (0x000275a8) cell_ituss_key_pane_g6

0x99b2,	// (0x00028179) bg_icf_pane_g1

0xf366,	// (0x0002db2d) bg_icf_pane_g2

0xf372,	// (0x0002db39) bg_icf_pane_g3

0xf37c,	// (0x0002db43) bg_icf_pane_g4

0xf388,	// (0x0002db4f) bg_icf_pane_g5

0xf392,	// (0x0002db59) bg_icf_pane_g6

0xf39e,	// (0x0002db65) bg_icf_pane_g7

0xf3a8,	// (0x0002db6f) bg_icf_pane_g8

0xf3b4,	// (0x0002db7b) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002e6a7) bg_icf_pane_g

0xf1eb,	// (0x0002d9b2) popup_hyb_candi_window_ParamLimits

0xf1eb,	// (0x0002d9b2) popup_hyb_candi_window

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp01_ParamLimits

0x9a26,	// (0x000281ed) bg_popup_sub_pane_cp01

0xf477,	// (0x0002dc3e) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0002dc3e) entry_hyb_candi_pane

0xf486,	// (0x0002dc4d) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0002dc4d) grid_hyb_candi_pane

0xf49b,	// (0x0002dc62) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0002dc62) grid_hyb_phrase_pane

0xf4aa,	// (0x0002dc71) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0002dc71) cell_hyb_candi_pane

0x2fd8,	// (0x0002179f) cell_hyb_candi_scroll_pane

0x6bcf,	// (0x00025396) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002dc8d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002dc9b) cell_hyb_phrase_pane

0x6bcf,	// (0x00025396) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002dca4) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002dcb2) entry_hyb_candi_pane_t1

0x9155,	// (0x0002791c) input_focus_pane_cp06

0xf4f9,	// (0x0002dcc0) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002dcc8) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002dcd0) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002dcd8) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002dce0) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002dce8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
