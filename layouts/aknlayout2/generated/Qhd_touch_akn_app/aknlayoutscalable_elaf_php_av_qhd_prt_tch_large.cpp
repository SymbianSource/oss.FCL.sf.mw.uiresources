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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a42f };

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
0x7e83,	// (0x000422b2) Screen

0x7e97,	// (0x000422c6) application_window_ParamLimits

0x7e97,	// (0x000422c6) application_window

0x7eb1,	// (0x000422e0) screen_g1

0x58ac,	// (0x0003fcdb) area_bottom_pane_ParamLimits

0x58ac,	// (0x0003fcdb) area_bottom_pane

0x596c,	// (0x0003fd9b) area_top_pane_ParamLimits

0x596c,	// (0x0003fd9b) area_top_pane

0x5a00,	// (0x0003fe2f) main_pane_ParamLimits

0x5a00,	// (0x0003fe2f) main_pane

0x7ebb,	// (0x000422ea) misc_graphics

0x9886,	// (0x00043cb5) battery_pane_ParamLimits

0x9886,	// (0x00043cb5) battery_pane

0xa55a,	// (0x00044989) bg_status_flat_pane_g8

0xa562,	// (0x00044991) bg_status_flat_pane_g9

0x9948,	// (0x00043d77) context_pane_ParamLimits

0x9948,	// (0x00043d77) context_pane

0x9a5e,	// (0x00043e8d) navi_pane_ParamLimits

0x9a5e,	// (0x00043e8d) navi_pane

0x9ae2,	// (0x00043f11) signal_pane_ParamLimits

0x9ae2,	// (0x00043f11) signal_pane

0x0008,

0xf87e,	// (0x00049cad) bg_status_flat_pane_g

0x9b4f,	// (0x00043f7e) status_pane_g1_ParamLimits

0x9b4f,	// (0x00043f7e) status_pane_g1

0x9b63,	// (0x00043f92) status_pane_g2_ParamLimits

0x9b63,	// (0x00043f92) status_pane_g2

0x9b6f,	// (0x00043f9e) status_pane_g3_ParamLimits

0x9b6f,	// (0x00043f9e) status_pane_g3

0x0004,

0xf7a5,	// (0x00049bd4) status_pane_g_ParamLimits

0xf7a5,	// (0x00049bd4) status_pane_g

0x9ba3,	// (0x00043fd2) title_pane_ParamLimits

0x9ba3,	// (0x00043fd2) title_pane

0x9be0,	// (0x0004400f) uni_indicator_pane_ParamLimits

0x9be0,	// (0x0004400f) uni_indicator_pane

0x97a5,	// (0x00043bd4) bg_list_pane_ParamLimits

0x97a5,	// (0x00043bd4) bg_list_pane

0x639d,	// (0x000407cc) find_pane

0x97c5,	// (0x00043bf4) listscroll_app_pane_ParamLimits

0x97c5,	// (0x00043bf4) listscroll_app_pane

0x97d6,	// (0x00043c05) listscroll_form_pane

0x63a5,	// (0x000407d4) listscroll_gen_pane_ParamLimits

0x63a5,	// (0x000407d4) listscroll_gen_pane

0x63b9,	// (0x000407e8) listscroll_set_pane

0x89eb,	// (0x00042e1a) main_idle_act_pane

0x94a1,	// (0x000438d0) main_idle_trad_pane

0x94a1,	// (0x000438d0) main_list_empty_pane

0x97f0,	// (0x00043c1f) main_midp_pane

0x97fc,	// (0x00043c2b) main_pane_g1_ParamLimits

0x97fc,	// (0x00043c2b) main_pane_g1

0x63c1,	// (0x000407f0) popup_ai_message_window_ParamLimits

0x63c1,	// (0x000407f0) popup_ai_message_window

0x6467,	// (0x00040896) popup_fep_china_uni_window_ParamLimits

0x6467,	// (0x00040896) popup_fep_china_uni_window

0x64c3,	// (0x000408f2) popup_fep_japan_candidate_window_ParamLimits

0x64c3,	// (0x000408f2) popup_fep_japan_candidate_window

0x64e3,	// (0x00040912) popup_fep_japan_predictive_window_ParamLimits

0x64e3,	// (0x00040912) popup_fep_japan_predictive_window

0x6513,	// (0x00040942) popup_find_window

0x6520,	// (0x0004094f) popup_grid_graphic_window_ParamLimits

0x6520,	// (0x0004094f) popup_grid_graphic_window

0x654a,	// (0x00040979) popup_large_graphic_colour_window

0x6570,	// (0x0004099f) popup_menu_window_ParamLimits

0x6570,	// (0x0004099f) popup_menu_window

0x6728,	// (0x00040b57) popup_note_image_window

0x6714,	// (0x00040b43) popup_note_wait_window_ParamLimits

0x6714,	// (0x00040b43) popup_note_wait_window

0x6714,	// (0x00040b43) popup_note_window_ParamLimits

0x6714,	// (0x00040b43) popup_note_window

0x677e,	// (0x00040bad) popup_query_code_window_ParamLimits

0x677e,	// (0x00040bad) popup_query_code_window

0x6792,	// (0x00040bc1) popup_query_data_code_window_ParamLimits

0x6792,	// (0x00040bc1) popup_query_data_code_window

0x67af,	// (0x00040bde) popup_query_data_window_ParamLimits

0x67af,	// (0x00040bde) popup_query_data_window

0x67cb,	// (0x00040bfa) popup_query_sat_info_window_ParamLimits

0x67cb,	// (0x00040bfa) popup_query_sat_info_window

0x6804,	// (0x00040c33) popup_snote_single_graphic_window_ParamLimits

0x6804,	// (0x00040c33) popup_snote_single_graphic_window

0x6804,	// (0x00040c33) popup_snote_single_text_window_ParamLimits

0x6804,	// (0x00040c33) popup_snote_single_text_window

0x6819,	// (0x00040c48) popup_sub_window_general

0x6949,	// (0x00040d78) popup_window_general_ParamLimits

0x6949,	// (0x00040d78) popup_window_general

0x980a,	// (0x00043c39) power_save_pane

0x622f,	// (0x0004065e) control_pane_g1_ParamLimits

0x622f,	// (0x0004065e) control_pane_g1

0x6256,	// (0x00040685) control_pane_g2_ParamLimits

0x6256,	// (0x00040685) control_pane_g2

0x9768,	// (0x00043b97) control_pane_g3_ParamLimits

0x9768,	// (0x00043b97) control_pane_g3

0x0007,

0xf78d,	// (0x00049bbc) control_pane_g_ParamLimits

0xf78d,	// (0x00049bbc) control_pane_g

0x62a0,	// (0x000406cf) control_pane_t1_ParamLimits

0x62a0,	// (0x000406cf) control_pane_t1

0x62f4,	// (0x00040723) control_pane_t2_ParamLimits

0x62f4,	// (0x00040723) control_pane_t2

0x0002,

0xf79e,	// (0x00049bcd) control_pane_t_ParamLimits

0xf79e,	// (0x00049bcd) control_pane_t

0x968d,	// (0x00043abc) navi_navi_volume_pane_cp1

0x9695,	// (0x00043ac4) status_small_icon_pane

0x969d,	// (0x00043acc) status_small_pane_g1_ParamLimits

0x969d,	// (0x00043acc) status_small_pane_g1

0x96d1,	// (0x00043b00) status_small_pane_g2_ParamLimits

0x96d1,	// (0x00043b00) status_small_pane_g2

0x96dd,	// (0x00043b0c) status_small_pane_g3_ParamLimits

0x96dd,	// (0x00043b0c) status_small_pane_g3

0x96e9,	// (0x00043b18) status_small_pane_g4_ParamLimits

0x96e9,	// (0x00043b18) status_small_pane_g4

0x96f5,	// (0x00043b24) status_small_pane_g5_ParamLimits

0x96f5,	// (0x00043b24) status_small_pane_g5

0x9703,	// (0x00043b32) status_small_pane_g6_ParamLimits

0x9703,	// (0x00043b32) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049bab) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049bab) status_small_pane_g

0x9732,	// (0x00043b61) status_small_pane_t1

0x9754,	// (0x00043b83) status_small_wait_pane_ParamLimits

0x9754,	// (0x00043b83) status_small_wait_pane

0x8f13,	// (0x00043342) aid_levels_signal_ParamLimits

0x8f13,	// (0x00043342) aid_levels_signal

0x8f25,	// (0x00043354) signal_pane_g1_ParamLimits

0x8f25,	// (0x00043354) signal_pane_g1

0x8f3a,	// (0x00043369) signal_pane_g2_ParamLimits

0x8f3a,	// (0x00043369) signal_pane_g2

0x0003,

0xf70d,	// (0x00049b3c) signal_pane_g_ParamLimits

0xf70d,	// (0x00049b3c) signal_pane_g

0x8f75,	// (0x000433a4) context_pane_g1

0x7ec5,	// (0x000422f4) title_pane_g1

0x7efb,	// (0x0004232a) title_pane_t1

0x7f63,	// (0x00042392) title_pane_t2

0x7f89,	// (0x000423b8) title_pane_t3

0x0002,

0xf557,	// (0x00049986) title_pane_t

0x9bf8,	// (0x00044027) aid_levels_battery_ParamLimits

0x9bf8,	// (0x00044027) aid_levels_battery

0x9c0c,	// (0x0004403b) battery_pane_g1_ParamLimits

0x9c0c,	// (0x0004403b) battery_pane_g1

0x9c22,	// (0x00044051) battery_pane_g2_ParamLimits

0x9c22,	// (0x00044051) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049bdf) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049bdf) battery_pane_g

0xae90,	// (0x000452bf) uni_indicator_pane_g1

0xaea6,	// (0x000452d5) uni_indicator_pane_g2

0xaebc,	// (0x000452eb) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00049d55) uni_indicator_pane_g

0x9313,	// (0x00043742) navi_icon_pane_ParamLimits

0x9313,	// (0x00043742) navi_icon_pane

0x9251,	// (0x00043680) navi_midp_pane

0x932f,	// (0x0004375e) navi_navi_pane

0x9339,	// (0x00043768) navi_text_pane_ParamLimits

0x9339,	// (0x00043768) navi_text_pane

0x7eb1,	// (0x000422e0) status_small_wait_pane_g1

0x83b8,	// (0x000427e7) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00049d50) status_small_wait_pane_g

0xabb5,	// (0x00044fe4) navi_navi_icon_text_pane

0xabbd,	// (0x00044fec) navi_navi_pane_g1_ParamLimits

0xabbd,	// (0x00044fec) navi_navi_pane_g1

0xabcf,	// (0x00044ffe) navi_navi_pane_g2_ParamLimits

0xabcf,	// (0x00044ffe) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00049d1e) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00049d1e) navi_navi_pane_g

0xabe1,	// (0x00045010) navi_navi_tabs_pane

0xabea,	// (0x00045019) navi_navi_text_pane

0xabb5,	// (0x00044fe4) navi_navi_volume_pane

0xab91,	// (0x00044fc0) navi_text_pane_t1

0xab85,	// (0x00044fb4) navi_icon_pane_g1

0xaad8,	// (0x00044f07) navi_navi_text_pane_t1

0x6c01,	// (0x00041030) navi_navi_volume_pane_g1

0x6c09,	// (0x00041038) volume_small_pane

0xaa3e,	// (0x00044e6d) navi_navi_icon_text_pane_g1

0xaa46,	// (0x00044e75) navi_navi_icon_text_pane_t1

0x932f,	// (0x0004375e) navi_tabs_2_long_pane

0x932f,	// (0x0004375e) navi_tabs_2_pane

0x932f,	// (0x0004375e) navi_tabs_3_long_pane

0x932f,	// (0x0004375e) navi_tabs_3_pane

0x932f,	// (0x0004375e) navi_tabs_4_pane

0x6be1,	// (0x00041010) tabs_2_active_pane_ParamLimits

0x6be1,	// (0x00041010) tabs_2_active_pane

0x6bf1,	// (0x00041020) tabs_2_passive_pane_ParamLimits

0x6bf1,	// (0x00041020) tabs_2_passive_pane

0x6baf,	// (0x00040fde) tabs_3_active_pane_ParamLimits

0x6baf,	// (0x00040fde) tabs_3_active_pane

0x6bbf,	// (0x00040fee) tabs_3_passive_pane_ParamLimits

0x6bbf,	// (0x00040fee) tabs_3_passive_pane

0x6bd0,	// (0x00040fff) tabs_3_passive_pane_cp_ParamLimits

0x6bd0,	// (0x00040fff) tabs_3_passive_pane_cp

0x6b6b,	// (0x00040f9a) tabs_4_active_pane_ParamLimits

0x6b6b,	// (0x00040f9a) tabs_4_active_pane

0x6b7c,	// (0x00040fab) tabs_4_passive_pane_ParamLimits

0x6b7c,	// (0x00040fab) tabs_4_passive_pane

0x6b8d,	// (0x00040fbc) tabs_4_passive_pane_cp_ParamLimits

0x6b8d,	// (0x00040fbc) tabs_4_passive_pane_cp

0x6b9e,	// (0x00040fcd) tabs_4_passive_pane_cp2_ParamLimits

0x6b9e,	// (0x00040fcd) tabs_4_passive_pane_cp2

0x6b47,	// (0x00040f76) tabs_2_long_active_pane_ParamLimits

0x6b47,	// (0x00040f76) tabs_2_long_active_pane

0x6b59,	// (0x00040f88) tabs_2_long_passive_pane_ParamLimits

0x6b59,	// (0x00040f88) tabs_2_long_passive_pane

0x6b08,	// (0x00040f37) tabs_3_long_active_pane_ParamLimits

0x6b08,	// (0x00040f37) tabs_3_long_active_pane

0x6b1b,	// (0x00040f4a) tabs_3_long_passive_pane_ParamLimits

0x6b1b,	// (0x00040f4a) tabs_3_long_passive_pane

0x6b34,	// (0x00040f63) tabs_3_long_passive_pane_cp_ParamLimits

0x6b34,	// (0x00040f63) tabs_3_long_passive_pane_cp

0x6aae,	// (0x00040edd) volume_small_pane_g1

0x6ab7,	// (0x00040ee6) volume_small_pane_g2

0x6ac0,	// (0x00040eef) volume_small_pane_g3

0x6ac9,	// (0x00040ef8) volume_small_pane_g4

0x6ad2,	// (0x00040f01) volume_small_pane_g5

0x6adb,	// (0x00040f0a) volume_small_pane_g6

0x6ae4,	// (0x00040f13) volume_small_pane_g7

0x6aed,	// (0x00040f1c) volume_small_pane_g8

0x6af6,	// (0x00040f25) volume_small_pane_g9

0x6aff,	// (0x00040f2e) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00049cea) volume_small_pane_g

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp2_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp2

0x7fa9,	// (0x000423d8) tabs_3_active_pane_g1

0x7fb1,	// (0x000423e0) tabs_3_active_pane_t1

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp2_ParamLimits

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp2

0x7fa9,	// (0x000423d8) tabs_3_passive_pane_g1

0x7fb1,	// (0x000423e0) tabs_3_passive_pane_t1

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp3_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp3

0x7fc3,	// (0x000423f2) tabs_4_active_pane_g1

0x7fcb,	// (0x000423fa) tabs_4_active_pane_t1

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp3_ParamLimits

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp3

0x7fc3,	// (0x000423f2) tabs_4_1_passive_pane_g1

0x7fcb,	// (0x000423fa) tabs_4_1_passive_pane_t1

0x97f0,	// (0x00043c1f) list_highlight_pane_cp2

0xb103,	// (0x00045532) list_set_pane_ParamLimits

0xb103,	// (0x00045532) list_set_pane

0xb1a9,	// (0x000455d8) main_pane_set_t1_ParamLimits

0xb1a9,	// (0x000455d8) main_pane_set_t1

0xb1c9,	// (0x000455f8) main_pane_set_t2_ParamLimits

0xb1c9,	// (0x000455f8) main_pane_set_t2

0xb1dd,	// (0x0004560c) main_pane_set_t3_ParamLimits

0xb1dd,	// (0x0004560c) main_pane_set_t3

0xb1ef,	// (0x0004561e) main_pane_set_t4_ParamLimits

0xb1ef,	// (0x0004561e) main_pane_set_t4

0x0003,

0xf98b,	// (0x00049dba) main_pane_set_t_ParamLimits

0xf98b,	// (0x00049dba) main_pane_set_t

0xb201,	// (0x00045630) setting_code_pane

0xb20d,	// (0x0004563c) setting_slider_graphic_pane

0xb20d,	// (0x0004563c) setting_slider_pane

0xb20d,	// (0x0004563c) setting_text_pane

0xb20d,	// (0x0004563c) setting_volume_pane

0x5c4f,	// (0x0004007e) volume_set_pane

0x7f9b,	// (0x000423ca) bg_set_opt_pane_cp

0x5c57,	// (0x00040086) setting_slider_pane_t1

0x5c70,	// (0x0004009f) setting_slider_pane_t2

0x5c8a,	// (0x000400b9) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004998d) setting_slider_pane_t

0x5ca2,	// (0x000400d1) slider_set_pane

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp2

0x7fdd,	// (0x0004240c) setting_slider_graphic_pane_g1

0x5cb8,	// (0x000400e7) setting_slider_graphic_pane_t1

0x5cc8,	// (0x000400f7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00049994) setting_slider_graphic_pane_t

0x5cd8,	// (0x00040107) slider_set_pane_cp

0x7ebb,	// (0x000422ea) input_focus_pane_cp1

0xb0c2,	// (0x000454f1) list_set_text_pane

0x7eb1,	// (0x000422e0) setting_text_pane_g1

0x7ebb,	// (0x000422ea) input_focus_pane_cp2

0x7eb1,	// (0x000422e0) setting_code_pane_g1

0x7fe6,	// (0x00042415) setting_code_pane_t1

0x48b9,	// (0x0003ece8) set_text_pane_t1_ParamLimits

0x48b9,	// (0x0003ece8) set_text_pane_t1

0x8862,	// (0x00042c91) set_opt_bg_pane_g1

0x886a,	// (0x00042c99) set_opt_bg_pane_g2

0xb09c,	// (0x000454cb) set_opt_bg_pane_g3

0x887a,	// (0x00042ca9) set_opt_bg_pane_g4

0x8882,	// (0x00042cb1) set_opt_bg_pane_g5

0x888a,	// (0x00042cb9) set_opt_bg_pane_g6

0xb0a6,	// (0x000454d5) set_opt_bg_pane_g7

0xb0ae,	// (0x000454dd) set_opt_bg_pane_g8

0xb0b8,	// (0x000454e7) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00049da7) set_opt_bg_pane_g

0xb08f,	// (0x000454be) slider_set_pane_g1

0x6c76,	// (0x000410a5) slider_set_pane_g2

0x0006,

0xf969,	// (0x00049d98) slider_set_pane_g

0x6c12,	// (0x00041041) volume_set_pane_g1

0x6c1a,	// (0x00041049) volume_set_pane_g2

0x6c22,	// (0x00041051) volume_set_pane_g3

0x6c2a,	// (0x00041059) volume_set_pane_g4

0x6c32,	// (0x00041061) volume_set_pane_g5

0x6c3a,	// (0x00041069) volume_set_pane_g6

0x6c42,	// (0x00041071) volume_set_pane_g7

0x6c4a,	// (0x00041079) volume_set_pane_g8

0x6c52,	// (0x00041081) volume_set_pane_g9

0x6c5a,	// (0x00041089) volume_set_pane_g10

0x0009,

0xf941,	// (0x00049d70) volume_set_pane_g

0x7ff4,	// (0x00042423) indicator_pane_ParamLimits

0x7ff4,	// (0x00042423) indicator_pane

0x8000,	// (0x0004242f) main_idle_pane_g2_ParamLimits

0x8000,	// (0x0004242f) main_idle_pane_g2

0x8028,	// (0x00042457) main_pane_idle_g1_ParamLimits

0x8028,	// (0x00042457) main_pane_idle_g1

0x8035,	// (0x00042464) popup_clock_digital_analogue_window_ParamLimits

0x8035,	// (0x00042464) popup_clock_digital_analogue_window

0x804c,	// (0x0004247b) soft_indicator_pane_ParamLimits

0x804c,	// (0x0004247b) soft_indicator_pane

0x8058,	// (0x00042487) wallpaper_pane_ParamLimits

0x8058,	// (0x00042487) wallpaper_pane

0x7eb1,	// (0x000422e0) wallpaper_pane_g1

0x806c,	// (0x0004249b) indicator_pane_g1_ParamLimits

0x806c,	// (0x0004249b) indicator_pane_g1

0xb471,	// (0x000458a0) navi_navi_icon_text_pane_srt_g1

0x8087,	// (0x000424b6) soft_indicator_pane_t1

0x80a1,	// (0x000424d0) aid_ps_area_pane

0x80b2,	// (0x000424e1) aid_ps_clock_pane

0x80c0,	// (0x000424ef) aid_ps_indicator_pane

0x80cc,	// (0x000424fb) indicator_ps_pane_ParamLimits

0x80cc,	// (0x000424fb) indicator_ps_pane

0x80db,	// (0x0004250a) power_save_pane_g1_ParamLimits

0x80db,	// (0x0004250a) power_save_pane_g1

0x80e7,	// (0x00042516) power_save_pane_g2_ParamLimits

0x80e7,	// (0x00042516) power_save_pane_g2

0x5860,	// (0x0003fc8f) aid_navinavi_width_pane

0x80a1,	// (0x000424d0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049999) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049999) power_save_pane_g

0x80f5,	// (0x00042524) power_save_pane_t1_ParamLimits

0x80f5,	// (0x00042524) power_save_pane_t1

0x80b2,	// (0x000424e1) aid_ps_clock_pane_ParamLimits

0x80c0,	// (0x000424ef) aid_ps_indicator_pane_ParamLimits

0x8107,	// (0x00042536) power_save_pane_t4_ParamLimits

0x8107,	// (0x00042536) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004999e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004999e) power_save_pane_t

0x8131,	// (0x00042560) power_save_t3_ParamLimits

0x8131,	// (0x00042560) power_save_t3

0x811c,	// (0x0004254b) power_save_t2_ParamLimits

0x811c,	// (0x0004254b) power_save_t2

0x8146,	// (0x00042575) indicator_ps_pane_g1

0x814f,	// (0x0004257e) ai_gene_pane_ParamLimits

0x814f,	// (0x0004257e) ai_gene_pane

0x815b,	// (0x0004258a) ai_links_pane_ParamLimits

0x815b,	// (0x0004258a) ai_links_pane

0x8167,	// (0x00042596) indicator_pane_cp1_ParamLimits

0x8167,	// (0x00042596) indicator_pane_cp1

0x8173,	// (0x000425a2) main_pane_idle_g1_cp_ParamLimits

0x8173,	// (0x000425a2) main_pane_idle_g1_cp

0x817f,	// (0x000425ae) popup_ai_links_title_window

0x8188,	// (0x000425b7) soft_indicator_pane_cp1_ParamLimits

0x8188,	// (0x000425b7) soft_indicator_pane_cp1

0xae7e,	// (0x000452ad) ai_links_pane_g1

0xae87,	// (0x000452b6) grid_ai_links_pane

0xae61,	// (0x00045290) ai_gene_pane_1

0xae6c,	// (0x0004529b) ai_gene_pane_2

0xae75,	// (0x000452a4) list_highlight_pane_cp4

0xae45,	// (0x00045274) cell_ai_link_pane_ParamLimits

0xae45,	// (0x00045274) cell_ai_link_pane

0xae3d,	// (0x0004526c) cell_ai_link_pane_g1

0x83b8,	// (0x000427e7) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00049d4b) cell_ai_link_pane_g

0x7ebb,	// (0x000422ea) grid_highlight_cp2

0x7ebb,	// (0x000422ea) bg_popup_sub_pane_cp1

0x81a2,	// (0x000425d1) popup_ai_links_title_window_t1

0xad8b,	// (0x000451ba) ai_gene_pane_1_g1_ParamLimits

0xad8b,	// (0x000451ba) ai_gene_pane_1_g1

0xad97,	// (0x000451c6) ai_gene_pane_1_g2_ParamLimits

0xad97,	// (0x000451c6) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00049d41) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00049d41) ai_gene_pane_1_g

0xada4,	// (0x000451d3) ai_gene_pane_1_t1_ParamLimits

0xada4,	// (0x000451d3) ai_gene_pane_1_t1

0xadd8,	// (0x00045207) grid_ai_soft_ind_pane

0xad76,	// (0x000451a5) ai_gene_pane_2_t1_ParamLimits

0xad76,	// (0x000451a5) ai_gene_pane_2_t1

0x81b1,	// (0x000425e0) main_pane_empty_t1_ParamLimits

0x81b1,	// (0x000425e0) main_pane_empty_t1

0x81c9,	// (0x000425f8) main_pane_empty_t2_ParamLimits

0x81c9,	// (0x000425f8) main_pane_empty_t2

0x81de,	// (0x0004260d) main_pane_empty_t3_ParamLimits

0x81de,	// (0x0004260d) main_pane_empty_t3

0x81f0,	// (0x0004261f) main_pane_empty_t4_ParamLimits

0x81f0,	// (0x0004261f) main_pane_empty_t4

0x8202,	// (0x00042631) main_pane_empty_t5_ParamLimits

0x8202,	// (0x00042631) main_pane_empty_t5

0x0004,

0xf574,	// (0x000499a3) main_pane_empty_t_ParamLimits

0xf574,	// (0x000499a3) main_pane_empty_t

0x88b3,	// (0x00042ce2) bg_popup_window_pane_ParamLimits

0x88b3,	// (0x00042ce2) bg_popup_window_pane

0xaae6,	// (0x00044f15) find_popup_pane_cp2_ParamLimits

0xaae6,	// (0x00044f15) find_popup_pane_cp2

0xaaf2,	// (0x00044f21) heading_pane_ParamLimits

0xaaf2,	// (0x00044f21) heading_pane

0x7ebb,	// (0x000422ea) bg_popup_sub_pane

0xaa60,	// (0x00044e8f) bg_popup_window_pane_g1_ParamLimits

0xaa60,	// (0x00044e8f) bg_popup_window_pane_g1

0xaa6c,	// (0x00044e9b) bg_popup_window_pane_g2_ParamLimits

0xaa6c,	// (0x00044e9b) bg_popup_window_pane_g2

0xaa78,	// (0x00044ea7) bg_popup_window_pane_g3_ParamLimits

0xaa78,	// (0x00044ea7) bg_popup_window_pane_g3

0xaa84,	// (0x00044eb3) bg_popup_window_pane_g4_ParamLimits

0xaa84,	// (0x00044eb3) bg_popup_window_pane_g4

0xaa90,	// (0x00044ebf) bg_popup_window_pane_g5_ParamLimits

0xaa90,	// (0x00044ebf) bg_popup_window_pane_g5

0xaa9c,	// (0x00044ecb) bg_popup_window_pane_g6_ParamLimits

0xaa9c,	// (0x00044ecb) bg_popup_window_pane_g6

0xaaa8,	// (0x00044ed7) bg_popup_window_pane_g7_ParamLimits

0xaaa8,	// (0x00044ed7) bg_popup_window_pane_g7

0xaab4,	// (0x00044ee3) bg_popup_window_pane_g8_ParamLimits

0xaab4,	// (0x00044ee3) bg_popup_window_pane_g8

0xaac0,	// (0x00044eef) bg_popup_window_pane_g9_ParamLimits

0xaac0,	// (0x00044eef) bg_popup_window_pane_g9

0xaacc,	// (0x00044efb) bg_popup_window_pane_g10_ParamLimits

0xaacc,	// (0x00044efb) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00049d09) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00049d09) bg_popup_window_pane_g

0xa9f5,	// (0x00044e24) bg_popup_heading_pane_ParamLimits

0xa9f5,	// (0x00044e24) bg_popup_heading_pane

0x6d94,	// (0x000411c3) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d94,	// (0x000411c3) tabs_4_passive_pane_cp_srt

0x6da6,	// (0x000411d5) tabs_4_passive_pane_srt_ParamLimits

0xaa09,	// (0x00044e38) heading_pane_g2

0x6da6,	// (0x000411d5) tabs_4_passive_pane_srt

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp3_srt

0xaa11,	// (0x00044e40) heading_pane_t1_ParamLimits

0xaa11,	// (0x00044e40) heading_pane_t1

0xaa28,	// (0x00044e57) heading_pane_t2_ParamLimits

0xaa28,	// (0x00044e57) heading_pane_t2

0x0001,

0xf8d5,	// (0x00049d04) heading_pane_t_ParamLimits

0xf8d5,	// (0x00049d04) heading_pane_t

0xa522,	// (0x00044951) bg_popup_heading_pane_g1

0xa5d1,	// (0x00044a00) bg_popup_heading_pane_g2

0xa5db,	// (0x00044a0a) bg_popup_heading_pane_g3

0xa5e5,	// (0x00044a14) bg_popup_heading_pane_g4

0xa5ef,	// (0x00044a1e) bg_popup_heading_pane_g5

0xa5f9,	// (0x00044a28) bg_popup_heading_pane_g6

0xa601,	// (0x00044a30) bg_popup_heading_pane_g7

0xa609,	// (0x00044a38) bg_popup_heading_pane_g8

0xa613,	// (0x00044a42) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00049cc0) bg_popup_heading_pane_g

0x9cfa,	// (0x00044129) bg_popup_sub_pane_g1

0x9d02,	// (0x00044131) bg_popup_sub_pane_g2

0x9d0a,	// (0x00044139) bg_popup_sub_pane_g3

0x9d12,	// (0x00044141) bg_popup_sub_pane_g4

0x9d1a,	// (0x00044149) bg_popup_sub_pane_g5

0x9d22,	// (0x00044151) bg_popup_sub_pane_g6

0x9d2a,	// (0x00044159) bg_popup_sub_pane_g7

0x9d32,	// (0x00044161) bg_popup_sub_pane_g8

0x9d3a,	// (0x00044169) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00049c9a) bg_popup_sub_pane_g

0x8216,	// (0x00042645) bg_popup_window_pane_cp5_ParamLimits

0x8216,	// (0x00042645) bg_popup_window_pane_cp5

0x8232,	// (0x00042661) popup_note_window_g1_ParamLimits

0x8232,	// (0x00042661) popup_note_window_g1

0x823e,	// (0x0004266d) popup_note_window_t1_ParamLimits

0x823e,	// (0x0004266d) popup_note_window_t1

0x8254,	// (0x00042683) popup_note_window_t2_ParamLimits

0x8254,	// (0x00042683) popup_note_window_t2

0x826a,	// (0x00042699) popup_note_window_t3_ParamLimits

0x826a,	// (0x00042699) popup_note_window_t3

0x8280,	// (0x000426af) popup_note_window_t4_ParamLimits

0x8280,	// (0x000426af) popup_note_window_t4

0x82a8,	// (0x000426d7) popup_note_window_t5_ParamLimits

0x82a8,	// (0x000426d7) popup_note_window_t5

0x0004,

0xf57f,	// (0x000499ae) popup_note_window_t_ParamLimits

0xf57f,	// (0x000499ae) popup_note_window_t

0x82cc,	// (0x000426fb) bg_popup_window_pane_cp6_ParamLimits

0x82cc,	// (0x000426fb) bg_popup_window_pane_cp6

0xa49e,	// (0x000448cd) popup_note_image_window_g1_ParamLimits

0xa49e,	// (0x000448cd) popup_note_image_window_g1

0xa4aa,	// (0x000448d9) popup_note_image_window_g2_ParamLimits

0xa4aa,	// (0x000448d9) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00049c8e) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00049c8e) popup_note_image_window_g

0xa4c3,	// (0x000448f2) popup_note_image_window_t1_ParamLimits

0xa4c3,	// (0x000448f2) popup_note_image_window_t1

0xa4dc,	// (0x0004490b) popup_note_image_window_t2_ParamLimits

0xa4dc,	// (0x0004490b) popup_note_image_window_t2

0xa4f5,	// (0x00044924) popup_note_image_window_t3_ParamLimits

0xa4f5,	// (0x00044924) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00049c93) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00049c93) popup_note_image_window_t

0xa35f,	// (0x0004478e) bg_popup_window_pane_cp7_ParamLimits

0xa35f,	// (0x0004478e) bg_popup_window_pane_cp7

0xa38f,	// (0x000447be) popup_note_wait_window_g1_ParamLimits

0xa38f,	// (0x000447be) popup_note_wait_window_g1

0xa39b,	// (0x000447ca) popup_note_wait_window_g2_ParamLimits

0xa39b,	// (0x000447ca) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00049c7c) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00049c7c) popup_note_wait_window_g

0xa3b3,	// (0x000447e2) popup_note_wait_window_t1_ParamLimits

0xa3b3,	// (0x000447e2) popup_note_wait_window_t1

0xa3da,	// (0x00044809) popup_note_wait_window_t2_ParamLimits

0xa3da,	// (0x00044809) popup_note_wait_window_t2

0xa3f7,	// (0x00044826) popup_note_wait_window_t3_ParamLimits

0xa3f7,	// (0x00044826) popup_note_wait_window_t3

0xa40a,	// (0x00044839) popup_note_wait_window_t4_ParamLimits

0xa40a,	// (0x00044839) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00049c83) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00049c83) popup_note_wait_window_t

0xa42f,	// (0x0004485e) wait_bar_pane_ParamLimits

0xa42f,	// (0x0004485e) wait_bar_pane

0x7ebb,	// (0x000422ea) wait_anim_pane

0x7ebb,	// (0x000422ea) wait_border_pane

0x7eb1,	// (0x000422e0) wait_anim_pane_g1

0x7eb1,	// (0x000422e0) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049b37) wait_anim_pane_g

0xa303,	// (0x00044732) wait_border_pane_g1

0xa30e,	// (0x0004473d) wait_border_pane_g2

0xa317,	// (0x00044746) wait_border_pane_g3

0x0002,

0xf846,	// (0x00049c75) wait_border_pane_g

0xa16e,	// (0x0004459d) bg_popup_window_pane_cp16_ParamLimits

0xa16e,	// (0x0004459d) bg_popup_window_pane_cp16

0xa26e,	// (0x0004469d) indicator_popup_pane_cp4_ParamLimits

0xa26e,	// (0x0004469d) indicator_popup_pane_cp4

0xa282,	// (0x000446b1) popup_query_data_window_t1_ParamLimits

0xa282,	// (0x000446b1) popup_query_data_window_t1

0xa294,	// (0x000446c3) popup_query_data_window_t2_ParamLimits

0xa294,	// (0x000446c3) popup_query_data_window_t2

0xa2ad,	// (0x000446dc) popup_query_data_window_t3_ParamLimits

0xa2ad,	// (0x000446dc) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00049c6e) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00049c6e) popup_query_data_window_t

0xa2c7,	// (0x000446f6) query_popup_data_pane_ParamLimits

0xa2c7,	// (0x000446f6) query_popup_data_pane

0xa2db,	// (0x0004470a) query_popup_data_pane_cp1_ParamLimits

0xa2db,	// (0x0004470a) query_popup_data_pane_cp1

0xa16e,	// (0x0004459d) bg_popup_window_pane_cp10_ParamLimits

0xa16e,	// (0x0004459d) bg_popup_window_pane_cp10

0xa1a0,	// (0x000445cf) indicator_popup_pane_ParamLimits

0xa1a0,	// (0x000445cf) indicator_popup_pane

0xa1c2,	// (0x000445f1) popup_query_code_window_t1_ParamLimits

0xa1c2,	// (0x000445f1) popup_query_code_window_t1

0xa1dc,	// (0x0004460b) popup_query_code_window_t2_ParamLimits

0xa1dc,	// (0x0004460b) popup_query_code_window_t2

0xa225,	// (0x00044654) popup_query_code_window_t3_ParamLimits

0xa225,	// (0x00044654) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00049c67) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00049c67) popup_query_code_window_t

0xa254,	// (0x00044683) query_popup_pane_ParamLimits

0xa254,	// (0x00044683) query_popup_pane

0x82cc,	// (0x000426fb) bg_popup_window_pane_cp15_ParamLimits

0x82cc,	// (0x000426fb) bg_popup_window_pane_cp15

0x82ea,	// (0x00042719) indicator_popup_pane_cp1_ParamLimits

0x82ea,	// (0x00042719) indicator_popup_pane_cp1

0x82fd,	// (0x0004272c) indicator_popup_pane_cp2_ParamLimits

0x82fd,	// (0x0004272c) indicator_popup_pane_cp2

0x8310,	// (0x0004273f) popup_query_data_code_window_g1_ParamLimits

0x8310,	// (0x0004273f) popup_query_data_code_window_g1

0x8323,	// (0x00042752) popup_query_data_code_window_t1_ParamLimits

0x8323,	// (0x00042752) popup_query_data_code_window_t1

0x8335,	// (0x00042764) popup_query_data_code_window_t2_ParamLimits

0x8335,	// (0x00042764) popup_query_data_code_window_t2

0x8347,	// (0x00042776) popup_query_data_code_window_t3_ParamLimits

0x8347,	// (0x00042776) popup_query_data_code_window_t3

0x835d,	// (0x0004278c) popup_query_data_code_window_t4_ParamLimits

0x835d,	// (0x0004278c) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000499b9) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000499b9) popup_query_data_code_window_t

0x69bf,	// (0x00040dee) list_single_midp_graphic_pane_g3

0x8375,	// (0x000427a4) query_popup_data_pane_cp2_ParamLimits

0x8388,	// (0x000427b7) query_popup_pane_cp2_ParamLimits

0x8388,	// (0x000427b7) query_popup_pane_cp2

0x7ebb,	// (0x000422ea) bg_popup_window_pane_cp11

0xa166,	// (0x00044595) heading_pane_cp5

0x8473,	// (0x000428a2) listscroll_popup_info_pane

0x7ebb,	// (0x000422ea) input_focus_pane_cp3

0x839b,	// (0x000427ca) query_popup_pane_t1

0x83a9,	// (0x000427d8) list_popup_info_pane_ParamLimits

0x83a9,	// (0x000427d8) list_popup_info_pane

0x83b8,	// (0x000427e7) listscroll_popup_info_pane_g1

0x83c0,	// (0x000427ef) scroll_pane_cp7

0x83ca,	// (0x000427f9) popup_info_list_pane_t1_ParamLimits

0x83ca,	// (0x000427f9) popup_info_list_pane_t1

0x83e4,	// (0x00042813) popup_info_list_pane_t2_ParamLimits

0x83e4,	// (0x00042813) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000499c2) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000499c2) popup_info_list_pane_t

0x7ebb,	// (0x000422ea) bg_popup_window_pane_cp12

0xb48b,	// (0x000458ba) find_popup_pane

0x7f9b,	// (0x000423ca) bg_popup_window_pane_cp3

0x83fe,	// (0x0004282d) heading_pane_cp3

0x840a,	// (0x00042839) listscroll_popup_graphic_pane

0x7ebb,	// (0x000422ea) bg_popup_window_pane_cp4

0x8469,	// (0x00042898) heading_pane_cp4

0x8473,	// (0x000428a2) listscroll_popup_colour_pane

0x847b,	// (0x000428aa) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x847b,	// (0x000428aa) cell_large_graphic_colour_none_popup_pane

0x848f,	// (0x000428be) grid_large_graphic_colour_popup_pane_ParamLimits

0x848f,	// (0x000428be) grid_large_graphic_colour_popup_pane

0x84bb,	// (0x000428ea) listscroll_popup_colour_pane_g1_ParamLimits

0x84bb,	// (0x000428ea) listscroll_popup_colour_pane_g1

0x84d2,	// (0x00042901) listscroll_popup_colour_pane_g2_ParamLimits

0x84d2,	// (0x00042901) listscroll_popup_colour_pane_g2

0x84e9,	// (0x00042918) listscroll_popup_colour_pane_g3_ParamLimits

0x84e9,	// (0x00042918) listscroll_popup_colour_pane_g3

0x84f9,	// (0x00042928) listscroll_popup_colour_pane_g4_ParamLimits

0x84f9,	// (0x00042928) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000499c7) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000499c7) listscroll_popup_colour_pane_g

0x850d,	// (0x0004293c) scroll_pane_cp6_ParamLimits

0x850d,	// (0x0004293c) scroll_pane_cp6

0x851f,	// (0x0004294e) cell_large_graphic_colour_popup_pane_ParamLimits

0x851f,	// (0x0004294e) cell_large_graphic_colour_popup_pane

0x853e,	// (0x0004296d) cell_large_graphic_colour_none_popup_pane_t1

0x7ebb,	// (0x000422ea) grid_highlight_pane_cp5

0x854d,	// (0x0004297c) cell_large_graphic_colour_popup_pane_g1

0x8555,	// (0x00042984) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000499d0) cell_large_graphic_colour_popup_pane_g

0x855d,	// (0x0004298c) cell_large_graphic_colour_popup_pane_g2_copy1

0x8566,	// (0x00042995) grid_highlight_pane_cp4

0x856e,	// (0x0004299d) bg_popup_window_pane_cp8_ParamLimits

0x856e,	// (0x0004299d) bg_popup_window_pane_cp8

0x8589,	// (0x000429b8) popup_snote_single_text_window_g1_ParamLimits

0x8589,	// (0x000429b8) popup_snote_single_text_window_g1

0x859b,	// (0x000429ca) popup_snote_single_text_window_t1_ParamLimits

0x859b,	// (0x000429ca) popup_snote_single_text_window_t1

0x85ae,	// (0x000429dd) popup_snote_single_text_window_t2_ParamLimits

0x85ae,	// (0x000429dd) popup_snote_single_text_window_t2

0x85c1,	// (0x000429f0) popup_snote_single_text_window_t3_ParamLimits

0x85c1,	// (0x000429f0) popup_snote_single_text_window_t3

0x85fa,	// (0x00042a29) popup_snote_single_text_window_t4_ParamLimits

0x85fa,	// (0x00042a29) popup_snote_single_text_window_t4

0x862e,	// (0x00042a5d) popup_snote_single_text_window_t5_ParamLimits

0x862e,	// (0x00042a5d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000499d5) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000499d5) popup_snote_single_text_window_t

0x865d,	// (0x00042a8c) bg_popup_window_pane_cp9_ParamLimits

0x865d,	// (0x00042a8c) bg_popup_window_pane_cp9

0x8589,	// (0x000429b8) popup_snote_single_graphic_window_g1_ParamLimits

0x8589,	// (0x000429b8) popup_snote_single_graphic_window_g1

0x866b,	// (0x00042a9a) popup_snote_single_graphic_window_g2_ParamLimits

0x866b,	// (0x00042a9a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000499e0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000499e0) popup_snote_single_graphic_window_g

0x8677,	// (0x00042aa6) popup_snote_single_graphic_window_t1_ParamLimits

0x8677,	// (0x00042aa6) popup_snote_single_graphic_window_t1

0x868a,	// (0x00042ab9) popup_snote_single_graphic_window_t2_ParamLimits

0x868a,	// (0x00042ab9) popup_snote_single_graphic_window_t2

0x869d,	// (0x00042acc) popup_snote_single_graphic_window_t3_ParamLimits

0x869d,	// (0x00042acc) popup_snote_single_graphic_window_t3

0x86d6,	// (0x00042b05) popup_snote_single_graphic_window_t4_ParamLimits

0x86d6,	// (0x00042b05) popup_snote_single_graphic_window_t4

0x870a,	// (0x00042b39) popup_snote_single_graphic_window_t5_ParamLimits

0x870a,	// (0x00042b39) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000499e5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000499e5) popup_snote_single_graphic_window_t

0xb3cd,	// (0x000457fc) grid_graphic_popup_pane_ParamLimits

0xb3cd,	// (0x000457fc) grid_graphic_popup_pane

0xb3f7,	// (0x00045826) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3f7,	// (0x00045826) listscroll_popup_graphic_pane_g1

0xb40b,	// (0x0004583a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb40b,	// (0x0004583a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00049de4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00049de4) listscroll_popup_graphic_pane_g

0xb41f,	// (0x0004584e) scroll_pane_cp5

0xb36c,	// (0x0004579b) cell_graphic_popup_pane_ParamLimits

0xb36c,	// (0x0004579b) cell_graphic_popup_pane

0xb34d,	// (0x0004577c) cell_graphic_popup_pane_g1

0xb355,	// (0x00045784) cell_graphic_popup_pane_g2

0x855d,	// (0x0004298c) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00049ddd) cell_graphic_popup_pane_g

0xb35e,	// (0x0004578d) cell_graphic_popup_pane_t2

0x8566,	// (0x00042995) grid_highlight_pane_cp3

0x874b,	// (0x00042b7a) list_gen_pane_ParamLimits

0x874b,	// (0x00042b7a) list_gen_pane

0x877d,	// (0x00042bac) scroll_pane

0xb2a5,	// (0x000456d4) bg_list_pane_g1_ParamLimits

0xb2a5,	// (0x000456d4) bg_list_pane_g1

0xb2c2,	// (0x000456f1) bg_list_pane_g2_ParamLimits

0xb2c2,	// (0x000456f1) bg_list_pane_g2

0xb2d7,	// (0x00045706) bg_list_pane_g3_ParamLimits

0xb2d7,	// (0x00045706) bg_list_pane_g3

0xb2eb,	// (0x0004571a) bg_list_pane_g4_ParamLimits

0xb2eb,	// (0x0004571a) bg_list_pane_g4

0xb2ff,	// (0x0004572e) bg_list_pane_g5_ParamLimits

0xb2ff,	// (0x0004572e) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00049dd2) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00049dd2) bg_list_pane_g

0x6cda,	// (0x00041109) list_double2_graphic_large_graphic_pane_ParamLimits

0x6cda,	// (0x00041109) list_double2_graphic_large_graphic_pane

0x6cda,	// (0x00041109) list_double2_graphic_pane_ParamLimits

0x6cda,	// (0x00041109) list_double2_graphic_pane

0x6cda,	// (0x00041109) list_double2_large_graphic_pane_ParamLimits

0x6cda,	// (0x00041109) list_double2_large_graphic_pane

0x6cda,	// (0x00041109) list_double2_pane_ParamLimits

0x6cda,	// (0x00041109) list_double2_pane

0x6cda,	// (0x00041109) list_double_graphic_heading_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_graphic_heading_pane

0x6cda,	// (0x00041109) list_double_graphic_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_graphic_pane

0x6cda,	// (0x00041109) list_double_heading_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_heading_pane

0x6cda,	// (0x00041109) list_double_large_graphic_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_large_graphic_pane

0x6cda,	// (0x00041109) list_double_number_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_number_pane

0x6cda,	// (0x00041109) list_double_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_pane

0x6cda,	// (0x00041109) list_double_time_pane_ParamLimits

0x6cda,	// (0x00041109) list_double_time_pane

0x6cda,	// (0x00041109) list_setting_number_pane_ParamLimits

0x6cda,	// (0x00041109) list_setting_number_pane

0x6cda,	// (0x00041109) list_setting_pane_ParamLimits

0x6cda,	// (0x00041109) list_setting_pane

0x6d13,	// (0x00041142) list_single_2graphic_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_2graphic_pane

0x6d13,	// (0x00041142) list_single_graphic_heading_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_graphic_heading_pane

0x6d13,	// (0x00041142) list_single_graphic_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_graphic_pane

0x6d13,	// (0x00041142) list_single_heading_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_heading_pane

0x6d51,	// (0x00041180) list_single_large_graphic_pane_ParamLimits

0x6d51,	// (0x00041180) list_single_large_graphic_pane

0x6d13,	// (0x00041142) list_single_number_heading_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_number_heading_pane

0x6d13,	// (0x00041142) list_single_number_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_number_pane

0x6d13,	// (0x00041142) list_single_pane_ParamLimits

0x6d13,	// (0x00041142) list_single_pane

0x7ebb,	// (0x000422ea) list_highlight_pane_cp1

0x5ce0,	// (0x0004010f) list_single_pane_g1_ParamLimits

0x5ce0,	// (0x0004010f) list_single_pane_g1

0x5cec,	// (0x0004011b) list_single_pane_g2_ParamLimits

0x5cec,	// (0x0004011b) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00049a01) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00049a01) list_single_pane_g

0x51d6,	// (0x0003f605) list_single_pane_t1_ParamLimits

0x51d6,	// (0x0003f605) list_single_pane_t1

0x5ce0,	// (0x0004010f) list_single_number_pane_g1_ParamLimits

0x5ce0,	// (0x0004010f) list_single_number_pane_g1

0x5cec,	// (0x0004011b) list_single_number_pane_g2_ParamLimits

0x5cec,	// (0x0004011b) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00049a01) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00049a01) list_single_number_pane_g

0x517e,	// (0x0003f5ad) list_single_number_pane_t1_ParamLimits

0x517e,	// (0x0003f5ad) list_single_number_pane_t1

0x5194,	// (0x0003f5c3) list_single_number_pane_t2_ParamLimits

0x5194,	// (0x0003f5c3) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00049d93) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00049d93) list_single_number_pane_t

0x48d2,	// (0x0003ed01) list_single_graphic_pane_g1_ParamLimits

0x48d2,	// (0x0003ed01) list_single_graphic_pane_g1

0x5ce0,	// (0x0004010f) list_single_graphic_pane_g2_ParamLimits

0x5ce0,	// (0x0004010f) list_single_graphic_pane_g2

0x5cec,	// (0x0004011b) list_single_graphic_pane_g3_ParamLimits

0x5cec,	// (0x0004011b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000499f0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000499f0) list_single_graphic_pane_g

0x48de,	// (0x0003ed0d) list_single_graphic_pane_t1_ParamLimits

0x48de,	// (0x0003ed0d) list_single_graphic_pane_t1

0x48f4,	// (0x0003ed23) list_single_heading_pane_g1_ParamLimits

0x48f4,	// (0x0003ed23) list_single_heading_pane_g1

0x5cec,	// (0x0004011b) list_single_heading_pane_g2_ParamLimits

0x5cec,	// (0x0004011b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000499f7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000499f7) list_single_heading_pane_g

0x4907,	// (0x0003ed36) list_single_heading_pane_t1_ParamLimits

0x4907,	// (0x0003ed36) list_single_heading_pane_t1

0x5cf8,	// (0x00040127) list_single_heading_pane_t2_ParamLimits

0x5cf8,	// (0x00040127) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000499fc) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000499fc) list_single_heading_pane_t

0x5ce0,	// (0x0004010f) list_single_number_heading_pane_g1_ParamLimits

0x5ce0,	// (0x0004010f) list_single_number_heading_pane_g1

0x5cec,	// (0x0004011b) list_single_number_heading_pane_g2_ParamLimits

0x5cec,	// (0x0004011b) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00049a01) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00049a01) list_single_number_heading_pane_g

0x491d,	// (0x0003ed4c) list_single_number_heading_pane_t1_ParamLimits

0x491d,	// (0x0003ed4c) list_single_number_heading_pane_t1

0x4933,	// (0x0003ed62) list_single_number_heading_pane_t2_ParamLimits

0x4933,	// (0x0003ed62) list_single_number_heading_pane_t2

0x4945,	// (0x0003ed74) list_single_number_heading_pane_t3_ParamLimits

0x4945,	// (0x0003ed74) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00049a06) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00049a06) list_single_number_heading_pane_t

0x4957,	// (0x0003ed86) list_single_graphic_heading_pane_g1_ParamLimits

0x4957,	// (0x0003ed86) list_single_graphic_heading_pane_g1

0x5d0a,	// (0x00040139) list_single_graphic_heading_pane_g4_ParamLimits

0x5d0a,	// (0x00040139) list_single_graphic_heading_pane_g4

0x5cec,	// (0x0004011b) list_single_graphic_heading_pane_g5_ParamLimits

0x5cec,	// (0x0004011b) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049a0d) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049a0d) list_single_graphic_heading_pane_g

0x491d,	// (0x0003ed4c) list_single_graphic_heading_pane_t1_ParamLimits

0x491d,	// (0x0003ed4c) list_single_graphic_heading_pane_t1

0x496f,	// (0x0003ed9e) list_single_graphic_heading_pane_t2_ParamLimits

0x496f,	// (0x0003ed9e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00049a14) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00049a14) list_single_graphic_heading_pane_t

0x5d1b,	// (0x0004014a) list_single_large_graphic_pane_g1_ParamLimits

0x5d1b,	// (0x0004014a) list_single_large_graphic_pane_g1

0x5d27,	// (0x00040156) list_single_large_graphic_pane_g2_ParamLimits

0x5d27,	// (0x00040156) list_single_large_graphic_pane_g2

0x5d33,	// (0x00040162) list_single_large_graphic_pane_g3_ParamLimits

0x5d33,	// (0x00040162) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049a19) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049a19) list_single_large_graphic_pane_g

0xa30e,	// (0x0004473d) wait_border_pane_g2_copy1

0x5d3f,	// (0x0004016e) list_single_large_graphic_pane_g4_cp2

0x4985,	// (0x0003edb4) list_single_large_graphic_pane_t1_ParamLimits

0x4985,	// (0x0003edb4) list_single_large_graphic_pane_t1

0x87b1,	// (0x00042be0) list_double_pane_g1_ParamLimits

0x87b1,	// (0x00042be0) list_double_pane_g1

0x5d47,	// (0x00040176) list_double_pane_g2_ParamLimits

0x5d47,	// (0x00040176) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00049a20) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00049a20) list_double_pane_g

0x499b,	// (0x0003edca) list_double_pane_t1_ParamLimits

0x499b,	// (0x0003edca) list_double_pane_t1

0x49b1,	// (0x0003ede0) list_double_pane_t2_ParamLimits

0x49b1,	// (0x0003ede0) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00049a25) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00049a25) list_double_pane_t

0x49c3,	// (0x0003edf2) list_double2_pane_g1_ParamLimits

0x49c3,	// (0x0003edf2) list_double2_pane_g1

0x49d4,	// (0x0003ee03) list_double2_pane_g2_ParamLimits

0x49d4,	// (0x0003ee03) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00049a2a) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00049a2a) list_double2_pane_g

0x49e0,	// (0x0003ee0f) list_double2_pane_t1_ParamLimits

0x49e0,	// (0x0003ee0f) list_double2_pane_t1

0x49f6,	// (0x0003ee25) list_double2_pane_t2_ParamLimits

0x49f6,	// (0x0003ee25) list_double2_pane_t2

0x0001,

0xf600,	// (0x00049a2f) list_double2_pane_t_ParamLimits

0xf600,	// (0x00049a2f) list_double2_pane_t

0x87b1,	// (0x00042be0) list_double_number_pane_g1_ParamLimits

0x87b1,	// (0x00042be0) list_double_number_pane_g1

0x5d47,	// (0x00040176) list_double_number_pane_g2_ParamLimits

0x5d47,	// (0x00040176) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00049a20) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00049a20) list_double_number_pane_g

0x4a08,	// (0x0003ee37) list_double_number_pane_t1_ParamLimits

0x4a08,	// (0x0003ee37) list_double_number_pane_t1

0x4a1a,	// (0x0003ee49) list_double_number_pane_t2_ParamLimits

0x4a1a,	// (0x0003ee49) list_double_number_pane_t2

0x4a30,	// (0x0003ee5f) list_double_number_pane_t3_ParamLimits

0x4a30,	// (0x0003ee5f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00049a34) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00049a34) list_double_number_pane_t

0x4a42,	// (0x0003ee71) list_double_graphic_pane_g1_ParamLimits

0x4a42,	// (0x0003ee71) list_double_graphic_pane_g1

0x4a4e,	// (0x0003ee7d) list_double_graphic_pane_g2_ParamLimits

0x4a4e,	// (0x0003ee7d) list_double_graphic_pane_g2

0x4a5d,	// (0x0003ee8c) list_double_graphic_pane_g3_ParamLimits

0x4a5d,	// (0x0003ee8c) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00049a3b) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00049a3b) list_double_graphic_pane_g

0x4a75,	// (0x0003eea4) list_double_graphic_pane_t1_ParamLimits

0x4a75,	// (0x0003eea4) list_double_graphic_pane_t1

0x4a8b,	// (0x0003eeba) list_double_graphic_pane_t2_ParamLimits

0x4a8b,	// (0x0003eeba) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00049a44) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00049a44) list_double_graphic_pane_t

0x4a9d,	// (0x0003eecc) list_double2_graphic_pane_g1_ParamLimits

0x4a9d,	// (0x0003eecc) list_double2_graphic_pane_g1

0xa10e,	// (0x0004453d) list_double2_graphic_pane_g2_ParamLimits

0xa10e,	// (0x0004453d) list_double2_graphic_pane_g2

0x5d53,	// (0x00040182) list_double2_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040182) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00049a49) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00049a49) list_double2_graphic_pane_g

0x4aa9,	// (0x0003eed8) list_double2_graphic_pane_t1_ParamLimits

0x4aa9,	// (0x0003eed8) list_double2_graphic_pane_t1

0x4abf,	// (0x0003eeee) list_double2_graphic_pane_t2_ParamLimits

0x4abf,	// (0x0003eeee) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00049a50) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00049a50) list_double2_graphic_pane_t

0x4ad1,	// (0x0003ef00) list_double_large_graphic_pane_g1_ParamLimits

0x4ad1,	// (0x0003ef00) list_double_large_graphic_pane_g1

0x4af0,	// (0x0003ef1f) list_double_large_graphic_pane_g2_ParamLimits

0x4af0,	// (0x0003ef1f) list_double_large_graphic_pane_g2

0x5d47,	// (0x00040176) list_double_large_graphic_pane_g3_ParamLimits

0x5d47,	// (0x00040176) list_double_large_graphic_pane_g3

0x4b06,	// (0x0003ef35) list_double_large_graphic_pane_g4_ParamLimits

0x4b06,	// (0x0003ef35) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00049a55) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00049a55) list_double_large_graphic_pane_g

0x4b17,	// (0x0003ef46) list_double_large_graphic_pane_t1_ParamLimits

0x4b17,	// (0x0003ef46) list_double_large_graphic_pane_t1

0x4b30,	// (0x0003ef5f) list_double_large_graphic_pane_t2_ParamLimits

0x4b30,	// (0x0003ef5f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00049a60) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00049a60) list_double_large_graphic_pane_t

0x5d74,	// (0x000401a3) list_double2_large_graphic_pane_g1_ParamLimits

0x5d74,	// (0x000401a3) list_double2_large_graphic_pane_g1

0x4b42,	// (0x0003ef71) list_double2_large_graphic_pane_g2_ParamLimits

0x4b42,	// (0x0003ef71) list_double2_large_graphic_pane_g2

0x5d53,	// (0x00040182) list_double2_large_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040182) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00049a65) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00049a65) list_double2_large_graphic_pane_g

0x4b53,	// (0x0003ef82) list_double2_large_graphic_pane_t1_ParamLimits

0x4b53,	// (0x0003ef82) list_double2_large_graphic_pane_t1

0x4b69,	// (0x0003ef98) list_double2_large_graphic_pane_t2_ParamLimits

0x4b69,	// (0x0003ef98) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049a6c) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049a6c) list_double2_large_graphic_pane_t

0x4b7b,	// (0x0003efaa) list_double_heading_pane_g1_ParamLimits

0x4b7b,	// (0x0003efaa) list_double_heading_pane_g1

0x5d80,	// (0x000401af) list_double_heading_pane_g2_ParamLimits

0x5d80,	// (0x000401af) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049a71) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049a71) list_double_heading_pane_g

0x4b8c,	// (0x0003efbb) list_double_heading_pane_t1_ParamLimits

0x4b8c,	// (0x0003efbb) list_double_heading_pane_t1

0x49f6,	// (0x0003ee25) list_double_heading_pane_t2_ParamLimits

0x49f6,	// (0x0003ee25) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00049a76) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00049a76) list_double_heading_pane_t

0x4ba2,	// (0x0003efd1) list_double_graphic_heading_pane_g1_ParamLimits

0x4ba2,	// (0x0003efd1) list_double_graphic_heading_pane_g1

0x4b7b,	// (0x0003efaa) list_double_graphic_heading_pane_g2_ParamLimits

0x4b7b,	// (0x0003efaa) list_double_graphic_heading_pane_g2

0x5d80,	// (0x000401af) list_double_graphic_heading_pane_g3_ParamLimits

0x5d80,	// (0x000401af) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049a7b) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049a7b) list_double_graphic_heading_pane_g

0x4bae,	// (0x0003efdd) list_double_graphic_heading_pane_t1_ParamLimits

0x4bae,	// (0x0003efdd) list_double_graphic_heading_pane_t1

0x4abf,	// (0x0003eeee) list_double_graphic_heading_pane_t2_ParamLimits

0x4abf,	// (0x0003eeee) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049a82) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049a82) list_double_graphic_heading_pane_t

0x4bc4,	// (0x0003eff3) list_double_time_pane_g1_ParamLimits

0x4bc4,	// (0x0003eff3) list_double_time_pane_g1

0x4bd5,	// (0x0003f004) list_double_time_pane_g2_ParamLimits

0x4bd5,	// (0x0003f004) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049a87) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049a87) list_double_time_pane_g

0x4be1,	// (0x0003f010) list_double_time_pane_t1_ParamLimits

0x4be1,	// (0x0003f010) list_double_time_pane_t1

0x4bf7,	// (0x0003f026) list_double_time_pane_t2_ParamLimits

0x4bf7,	// (0x0003f026) list_double_time_pane_t2

0x4c09,	// (0x0003f038) list_double_time_pane_t3_ParamLimits

0x4c09,	// (0x0003f038) list_double_time_pane_t3

0x4c1b,	// (0x0003f04a) list_double_time_pane_t4_ParamLimits

0x4c1b,	// (0x0003f04a) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049a8c) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049a8c) list_double_time_pane_t

0x4c2d,	// (0x0003f05c) list_setting_pane_g1_ParamLimits

0x4c2d,	// (0x0003f05c) list_setting_pane_g1

0x49d4,	// (0x0003ee03) list_setting_pane_g2_ParamLimits

0x49d4,	// (0x0003ee03) list_setting_pane_g2

0x0001,

0xf666,	// (0x00049a95) list_setting_pane_g_ParamLimits

0xf666,	// (0x00049a95) list_setting_pane_g

0x4c39,	// (0x0003f068) list_setting_pane_t1_ParamLimits

0x4c39,	// (0x0003f068) list_setting_pane_t1

0x4c53,	// (0x0003f082) list_setting_pane_t2_ParamLimits

0x4c53,	// (0x0003f082) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049a9a) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049a9a) list_setting_pane_t

0x4c92,	// (0x0003f0c1) set_value_pane_cp_ParamLimits

0x4c92,	// (0x0003f0c1) set_value_pane_cp

0x4c9e,	// (0x0003f0cd) list_setting_number_pane_g1_ParamLimits

0x4c9e,	// (0x0003f0cd) list_setting_number_pane_g1

0x4caa,	// (0x0003f0d9) list_setting_number_pane_g2_ParamLimits

0x4caa,	// (0x0003f0d9) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00049aa1) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00049aa1) list_setting_number_pane_g

0x4cb6,	// (0x0003f0e5) list_setting_number_pane_t1_ParamLimits

0x4cb6,	// (0x0003f0e5) list_setting_number_pane_t1

0x4ccf,	// (0x0003f0fe) list_setting_number_pane_t2_ParamLimits

0x4ccf,	// (0x0003f0fe) list_setting_number_pane_t2

0x4ce9,	// (0x0003f118) list_setting_number_pane_t3_ParamLimits

0x4ce9,	// (0x0003f118) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049aa6) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049aa6) list_setting_number_pane_t

0x4c92,	// (0x0003f0c1) set_value_pane_ParamLimits

0x4c92,	// (0x0003f0c1) set_value_pane

0x87bd,	// (0x00042bec) bg_set_opt_pane_ParamLimits

0x87bd,	// (0x00042bec) bg_set_opt_pane

0x4d2c,	// (0x0003f15b) set_value_pane_t1

0x87de,	// (0x00042c0d) slider_set_pane_cp3

0x87e7,	// (0x00042c16) volume_small_pane_cp

0x87f0,	// (0x00042c1f) list_form_gen_pane

0x87f9,	// (0x00042c28) scroll_pane_cp8

0x4d42,	// (0x0003f171) form_field_data_pane_ParamLimits

0x4d42,	// (0x0003f171) form_field_data_pane

0x4d66,	// (0x0003f195) form_field_data_wide_pane_ParamLimits

0x4d66,	// (0x0003f195) form_field_data_wide_pane

0x4d89,	// (0x0003f1b8) form_field_popup_pane_ParamLimits

0x4d89,	// (0x0003f1b8) form_field_popup_pane

0x4da9,	// (0x0003f1d8) form_field_popup_wide_pane_ParamLimits

0x4da9,	// (0x0003f1d8) form_field_popup_wide_pane

0x4dc8,	// (0x0003f1f7) form_field_slider_pane_ParamLimits

0x4dc8,	// (0x0003f1f7) form_field_slider_pane

0x4ddb,	// (0x0003f20a) form_field_slider_wide_pane_ParamLimits

0x4ddb,	// (0x0003f20a) form_field_slider_wide_pane

0x880a,	// (0x00042c39) data_form_pane

0x4df8,	// (0x0003f227) form_field_data_pane_t1

0x8816,	// (0x00042c45) input_focus_pane

0x4e10,	// (0x0003f23f) data_form_wide_pane

0x4e2d,	// (0x0003f25c) form_field_data_wide_pane_t1

0x857b,	// (0x000429aa) input_focus_pane_cp6

0x4e4f,	// (0x0003f27e) form_field_popup_pane_t1

0x8816,	// (0x00042c45) input_focus_pane_cp7

0x8838,	// (0x00042c67) list_form_pane

0x4e6f,	// (0x0003f29e) form_field_popup_wide_pane_t1

0x8816,	// (0x00042c45) input_focus_pane_cp8

0x8844,	// (0x00042c73) list_form_wide_pane

0x4e8c,	// (0x0003f2bb) form_field_slider_pane_t1_ParamLimits

0x4e8c,	// (0x0003f2bb) form_field_slider_pane_t1

0x4ea2,	// (0x0003f2d1) form_field_slider_pane_t2_ParamLimits

0x4ea2,	// (0x0003f2d1) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049ab6) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049ab6) form_field_slider_pane_t

0x8216,	// (0x00042645) input_focus_pane_cp9_ParamLimits

0x8216,	// (0x00042645) input_focus_pane_cp9

0x4eb7,	// (0x0003f2e6) slider_cont_pane_ParamLimits

0x4eb7,	// (0x0003f2e6) slider_cont_pane

0x8850,	// (0x00042c7f) form_field_slider_wide_pane_t1_ParamLimits

0x8850,	// (0x00042c7f) form_field_slider_wide_pane_t1

0x4ecb,	// (0x0003f2fa) form_field_slider_wide_pane_t2_ParamLimits

0x4ecb,	// (0x0003f2fa) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049abb) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049abb) form_field_slider_wide_pane_t

0x8216,	// (0x00042645) input_focus_pane_cp10_ParamLimits

0x8216,	// (0x00042645) input_focus_pane_cp10

0x4edd,	// (0x0003f30c) slider_cont_pane_cp1_ParamLimits

0x4edd,	// (0x0003f30c) slider_cont_pane_cp1

0x4ef1,	// (0x0003f320) slider_form_pane_cp

0x8862,	// (0x00042c91) input_focus_pane_g1

0x886a,	// (0x00042c99) input_focus_pane_g2

0x8872,	// (0x00042ca1) input_focus_pane_g3

0x887a,	// (0x00042ca9) input_focus_pane_g4

0x8882,	// (0x00042cb1) input_focus_pane_g5

0x888a,	// (0x00042cb9) input_focus_pane_g6

0x8892,	// (0x00042cc1) input_focus_pane_g7

0x889a,	// (0x00042cc9) input_focus_pane_g8

0x88a2,	// (0x00042cd1) input_focus_pane_g9

0x7eb1,	// (0x000422e0) input_focus_pane_g10

0x0009,

0xf691,	// (0x00049ac0) input_focus_pane_g

0xa317,	// (0x00044746) wait_border_pane_g3_copy1

0x4ef9,	// (0x0003f328) data_form_pane_t1

0x7eb1,	// (0x000422e0) wait_anim_pane_g1_copy1

0x51a6,	// (0x0003f5d5) data_form_wide_pane_t1

0x4f14,	// (0x0003f343) list_form_graphic_pane_cp_ParamLimits

0x4f14,	// (0x0003f343) list_form_graphic_pane_cp

0xb237,	// (0x00045666) slider_form_pane_g1

0xb240,	// (0x0004566f) slider_form_pane_g2

0x0006,

0xf994,	// (0x00049dc3) slider_form_pane_g

0x4f2d,	// (0x0003f35c) list_form_graphic_pane_ParamLimits

0x4f2d,	// (0x0003f35c) list_form_graphic_pane

0x4f49,	// (0x0003f378) list_form_graphic_pane_g1

0x4f51,	// (0x0003f380) list_form_graphic_pane_t1_ParamLimits

0x4f51,	// (0x0003f380) list_form_graphic_pane_t1

0x7f9b,	// (0x000423ca) list_highlight_pane_cp5_ParamLimits

0x7f9b,	// (0x000423ca) list_highlight_pane_cp5

0x4f66,	// (0x0003f395) find_pane_g1

0x88aa,	// (0x00042cd9) input_find_pane

0x4f6f,	// (0x0003f39e) input_find_pane_g1_ParamLimits

0x4f6f,	// (0x0003f39e) input_find_pane_g1

0x4f7b,	// (0x0003f3aa) input_find_pane_t1_ParamLimits

0x4f7b,	// (0x0003f3aa) input_find_pane_t1

0x4f90,	// (0x0003f3bf) input_find_pane_t2_ParamLimits

0x4f90,	// (0x0003f3bf) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00049ad5) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00049ad5) input_find_pane_t

0x88b3,	// (0x00042ce2) input_focus_pane_cp5_ParamLimits

0x88b3,	// (0x00042ce2) input_focus_pane_cp5

0x88cd,	// (0x00042cfc) bg_popup_window_pane_cp2_ParamLimits

0x88cd,	// (0x00042cfc) bg_popup_window_pane_cp2

0x88da,	// (0x00042d09) listscroll_menu_pane_ParamLimits

0x88da,	// (0x00042d09) listscroll_menu_pane

0x88e6,	// (0x00042d15) popup_submenu_window_ParamLimits

0x88e6,	// (0x00042d15) popup_submenu_window

0x8912,	// (0x00042d41) find_popup_pane_g1

0x891a,	// (0x00042d49) input_popup_find_pane_cp

0x88b3,	// (0x00042ce2) input_focus_pane_cp4_ParamLimits

0x88b3,	// (0x00042ce2) input_focus_pane_cp4

0x8930,	// (0x00042d5f) input_popup_find_pane_t1_ParamLimits

0x8930,	// (0x00042d5f) input_popup_find_pane_t1

0x7ebb,	// (0x000422ea) bg_popup_sub_pane_cp

0x895e,	// (0x00042d8d) listscroll_popup_sub_pane

0x8966,	// (0x00042d95) list_submenu_pane_ParamLimits

0x8966,	// (0x00042d95) list_submenu_pane

0x8977,	// (0x00042da6) scroll_pane_cp4

0x897f,	// (0x00042dae) list_single_popup_submenu_pane_ParamLimits

0x897f,	// (0x00042dae) list_single_popup_submenu_pane

0x8993,	// (0x00042dc2) list_single_popup_submenu_pane_g1

0x899b,	// (0x00042dca) list_single_popup_submenu_pane_t1_ParamLimits

0x899b,	// (0x00042dca) list_single_popup_submenu_pane_t1

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp1_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp1

0x89b0,	// (0x00042ddf) tabs_2_active_pane_g1

0x89b8,	// (0x00042de7) tabs_2_active_pane_t1

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp1_ParamLimits

0x7f9b,	// (0x000423ca) bg_passive_tab_pane_cp1

0x89b0,	// (0x00042ddf) tabs_2_passive_pane_g1

0x89b8,	// (0x00042de7) tabs_2_passive_pane_t1

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp4

0x89d8,	// (0x00042e07) tabs_2_long_active_pane_t1

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp4

0x6039,	// (0x00040468) list_single_midp_graphic_pane_g4_ParamLimits

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp5

0x89f7,	// (0x00042e26) tabs_3_long_active_pane_t1

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp5

0x6039,	// (0x00040468) list_single_midp_graphic_pane_g4

0x7f9b,	// (0x000423ca) bg_popup_window_pane_cp13_ParamLimits

0x7f9b,	// (0x000423ca) bg_popup_window_pane_cp13

0x8a12,	// (0x00042e41) listscroll_popup_fast_pane_ParamLimits

0x8a12,	// (0x00042e41) listscroll_popup_fast_pane

0x8a21,	// (0x00042e50) grid_popup_fast_pane_ParamLimits

0x8a21,	// (0x00042e50) grid_popup_fast_pane

0x8a33,	// (0x00042e62) scroll_pane_cp9_ParamLimits

0x8a33,	// (0x00042e62) scroll_pane_cp9

0xcae0,	// (0x00046f0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x00046f0f) list_single_graphic_hl_pane_t1_cp2

0x8a57,	// (0x00042e86) input_focus_pane_cp20_ParamLimits

0x8a57,	// (0x00042e86) input_focus_pane_cp20

0x8a65,	// (0x00042e94) query_popup_data_pane_t1_ParamLimits

0x8a65,	// (0x00042e94) query_popup_data_pane_t1

0x8a78,	// (0x00042ea7) query_popup_data_pane_t2_ParamLimits

0x8a78,	// (0x00042ea7) query_popup_data_pane_t2

0x8abe,	// (0x00042eed) query_popup_data_pane_t3_ParamLimits

0x8abe,	// (0x00042eed) query_popup_data_pane_t3

0x8aff,	// (0x00042f2e) query_popup_data_pane_t4_ParamLimits

0x8aff,	// (0x00042f2e) query_popup_data_pane_t4

0x8b3b,	// (0x00042f6a) query_popup_data_pane_t5_ParamLimits

0x8b3b,	// (0x00042f6a) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049ada) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049ada) query_popup_data_pane_t

0x8862,	// (0x00042c91) bg_set_opt_pane_g1

0x886a,	// (0x00042c99) bg_set_opt_pane_g2

0x8872,	// (0x00042ca1) bg_set_opt_pane_g3

0x887a,	// (0x00042ca9) bg_set_opt_pane_g4

0x8882,	// (0x00042cb1) bg_set_opt_pane_g5

0x888a,	// (0x00042cb9) bg_set_opt_pane_g6

0x8892,	// (0x00042cc1) bg_set_opt_pane_g7

0x889a,	// (0x00042cc9) bg_set_opt_pane_g8

0x88a2,	// (0x00042cd1) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00049ae5) bg_set_opt_pane_g

0x6045,	// (0x00040474) control_top_pane_stacon_ParamLimits

0x6045,	// (0x00040474) control_top_pane_stacon

0x6098,	// (0x000404c7) signal_pane_stacon_ParamLimits

0x6098,	// (0x000404c7) signal_pane_stacon

0x912f,	// (0x0004355e) stacon_top_pane_g1_ParamLimits

0x912f,	// (0x0004355e) stacon_top_pane_g1

0x60bd,	// (0x000404ec) title_pane_stacon_ParamLimits

0x60bd,	// (0x000404ec) title_pane_stacon

0x60e7,	// (0x00040516) uni_indicator_pane_stacon_ParamLimits

0x60e7,	// (0x00040516) uni_indicator_pane_stacon

0x60fc,	// (0x0004052b) battery_pane_stacon_ParamLimits

0x60fc,	// (0x0004052b) battery_pane_stacon

0x6140,	// (0x0004056f) control_bottom_pane_stacon_ParamLimits

0x6140,	// (0x0004056f) control_bottom_pane_stacon

0x6163,	// (0x00040592) navi_pane_stacon_ParamLimits

0x6163,	// (0x00040592) navi_pane_stacon

0x9151,	// (0x00043580) stacon_bottom_pane_g1_ParamLimits

0x9151,	// (0x00043580) stacon_bottom_pane_g1

0x5d8c,	// (0x000401bb) aid_levels_signal_lsc_ParamLimits

0x5d8c,	// (0x000401bb) aid_levels_signal_lsc

0x5da2,	// (0x000401d1) signal_pane_stacon_g1_ParamLimits

0x5da2,	// (0x000401d1) signal_pane_stacon_g1

0x5db6,	// (0x000401e5) signal_pane_stacon_g2_ParamLimits

0x5db6,	// (0x000401e5) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049af8) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049af8) signal_pane_stacon_g

0x5deb,	// (0x0004021a) title_pane_stacon_t1_ParamLimits

0x5deb,	// (0x0004021a) title_pane_stacon_t1

0x8b7f,	// (0x00042fae) uni_indicator_pane_stacon_g1

0x8b89,	// (0x00042fb8) uni_indicator_pane_stacon_g2

0x8b93,	// (0x00042fc2) uni_indicator_pane_stacon_g3

0x8b9d,	// (0x00042fcc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049b04) uni_indicator_pane_stacon_g

0x5e10,	// (0x0004023f) control_top_pane_stacon_g1

0x5e18,	// (0x00040247) control_top_pane_stacon_t1_ParamLimits

0x5e18,	// (0x00040247) control_top_pane_stacon_t1

0x5e4f,	// (0x0004027e) aid_levels_battery_lsc_ParamLimits

0x5e4f,	// (0x0004027e) aid_levels_battery_lsc

0x5e66,	// (0x00040295) battery_pane_stacon_g1_ParamLimits

0x5e66,	// (0x00040295) battery_pane_stacon_g1

0x5e79,	// (0x000402a8) battery_pane_stacon_g2_ParamLimits

0x5e79,	// (0x000402a8) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049b0d) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049b0d) battery_pane_stacon_g

0x5eb7,	// (0x000402e6) navi_icon_pane_stacon

0x5ecb,	// (0x000402fa) navi_navi_pane_stacon

0x5eb7,	// (0x000402e6) navi_text_pane_stacon

0x5e10,	// (0x0004023f) control_bottom_pane_stacon_g1

0x5edf,	// (0x0004030e) control_bottom_pane_stacon_t1_ParamLimits

0x5edf,	// (0x0004030e) control_bottom_pane_stacon_t1

0x8bc1,	// (0x00042ff0) grid_app_pane_ParamLimits

0x8bc1,	// (0x00042ff0) grid_app_pane

0x8be5,	// (0x00043014) scroll_pane_cp15_ParamLimits

0x8be5,	// (0x00043014) scroll_pane_cp15

0x8bf8,	// (0x00043027) cell_app_pane_ParamLimits

0x8bf8,	// (0x00043027) cell_app_pane

0x8c20,	// (0x0004304f) cell_app_pane_g1_ParamLimits

0x8c20,	// (0x0004304f) cell_app_pane_g1

0x8c44,	// (0x00043073) cell_app_pane_g2_ParamLimits

0x8c44,	// (0x00043073) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049b12) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049b12) cell_app_pane_g

0x8c50,	// (0x0004307f) cell_app_pane_t1_ParamLimits

0x8c50,	// (0x0004307f) cell_app_pane_t1

0x8c67,	// (0x00043096) grid_highlight_pane_ParamLimits

0x8c67,	// (0x00043096) grid_highlight_pane

0x8862,	// (0x00042c91) cell_highlight_pane_g1

0x886a,	// (0x00042c99) cell_highlight_pane_g2

0x8872,	// (0x00042ca1) cell_highlight_pane_g3

0x887a,	// (0x00042ca9) cell_highlight_pane_g4

0x8882,	// (0x00042cb1) cell_highlight_pane_g5

0x888a,	// (0x00042cb9) cell_highlight_pane_g6

0x8892,	// (0x00042cc1) cell_highlight_pane_g7

0x889a,	// (0x00042cc9) cell_highlight_pane_g8

0x88a2,	// (0x00042cd1) cell_highlight_pane_g9

0x7eb1,	// (0x000422e0) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00049ac0) cell_highlight_pane_g

0x8c78,	// (0x000430a7) bg_scroll_pane

0x5f29,	// (0x00040358) scroll_handle_pane

0x8cbf,	// (0x000430ee) scroll_bg_pane_g1

0x8cd4,	// (0x00043103) scroll_bg_pane_g2

0x8cec,	// (0x0004311b) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049b17) scroll_bg_pane_g

0x8d01,	// (0x00043130) scroll_handle_focus_pane_ParamLimits

0x8d01,	// (0x00043130) scroll_handle_focus_pane

0x8cbf,	// (0x000430ee) scroll_handle_pane_g1

0x8d0e,	// (0x0004313d) scroll_handle_pane_g2

0x8cec,	// (0x0004311b) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049b1e) scroll_handle_pane_g

0x88b3,	// (0x00042ce2) bg_popup_sub_pane_cp21_ParamLimits

0x88b3,	// (0x00042ce2) bg_popup_sub_pane_cp21

0x8d22,	// (0x00043151) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d22,	// (0x00043151) popup_fep_japan_predictive_window_t1

0x8d3c,	// (0x0004316b) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d3c,	// (0x0004316b) popup_fep_japan_predictive_window_t2

0x8d6f,	// (0x0004319e) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d6f,	// (0x0004319e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049b25) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049b25) popup_fep_japan_predictive_window_t

0x7ebb,	// (0x000422ea) bg_popup_sub_pane_cp23

0x8da6,	// (0x000431d5) listscroll_japin_cand_pane

0x8dae,	// (0x000431dd) popup_fep_japan_candidate_window_t1

0x8dbc,	// (0x000431eb) candidate_pane_ParamLimits

0x8dbc,	// (0x000431eb) candidate_pane

0x8dce,	// (0x000431fd) scroll_pane_cp30

0x8dd6,	// (0x00043205) list_single_popup_jap_candidate_pane_ParamLimits

0x8dd6,	// (0x00043205) list_single_popup_jap_candidate_pane

0x7ebb,	// (0x000422ea) list_highlight_pane_cp30

0x8deb,	// (0x0004321a) list_single_popup_jap_candidate_pane_t1

0x8dfa,	// (0x00043229) level_1_signal

0x8e0c,	// (0x0004323b) level_2_signal

0x8e1f,	// (0x0004324e) level_3_signal

0x8e32,	// (0x00043261) level_4_signal

0x8e45,	// (0x00043274) level_5_signal

0x8e58,	// (0x00043287) level_6_signal

0x8e6b,	// (0x0004329a) level_7_signal

0x8dfa,	// (0x00043229) level_1_battery

0x8e0c,	// (0x0004323b) level_2_battery

0x8e1f,	// (0x0004324e) level_3_battery

0x8e32,	// (0x00043261) level_4_battery

0x8e45,	// (0x00043274) level_5_battery

0x8e58,	// (0x00043287) level_6_battery

0x8e6b,	// (0x0004329a) level_7_battery

0x8e96,	// (0x000432c5) list_menu_pane_ParamLimits

0x8e96,	// (0x000432c5) list_menu_pane

0x8eac,	// (0x000432db) scroll_pane_cp25_ParamLimits

0x8eac,	// (0x000432db) scroll_pane_cp25

0x8ec5,	// (0x000432f4) list_double2_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double2_graphic_pane_cp2

0x8ec5,	// (0x000432f4) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double2_large_graphic_pane_cp2

0x8ec5,	// (0x000432f4) list_double2_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double2_pane_cp2

0x8ec5,	// (0x000432f4) list_double_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double_graphic_pane_cp2

0x8ec5,	// (0x000432f4) list_double_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double_large_graphic_pane_cp2

0x8ec5,	// (0x000432f4) list_double_number_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double_number_pane_cp2

0x8ec5,	// (0x000432f4) list_double_pane_cp2_ParamLimits

0x8ec5,	// (0x000432f4) list_double_pane_cp2

0x8ee9,	// (0x00043318) list_single_2graphic_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_2graphic_pane_cp2

0x8ee9,	// (0x00043318) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_graphic_heading_pane_cp2

0x8ee9,	// (0x00043318) list_single_graphic_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_graphic_pane_cp2

0x8ee9,	// (0x00043318) list_single_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_heading_pane_cp2

0x8f02,	// (0x00043331) list_single_large_graphic_pane_cp2_ParamLimits

0x8f02,	// (0x00043331) list_single_large_graphic_pane_cp2

0x8ee9,	// (0x00043318) list_single_number_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_number_heading_pane_cp2

0x8ee9,	// (0x00043318) list_single_number_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_number_pane_cp2

0x8ee9,	// (0x00043318) list_single_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_pane_cp2

0x8f7e,	// (0x000433ad) bg_popup_sub_pane_cp22

0x5fdb,	// (0x0004040a) popup_side_volume_key_window_g1

0x6005,	// (0x00040434) popup_side_volume_key_window_t1

0x6021,	// (0x00040450) volume_small_pane_cp1

0x8216,	// (0x00042645) bg_popup_sub_pane_cp24_ParamLimits

0x8216,	// (0x00042645) bg_popup_sub_pane_cp24

0x8f94,	// (0x000433c3) fep_china_uni_candidate_pane_ParamLimits

0x8f94,	// (0x000433c3) fep_china_uni_candidate_pane

0x8fa8,	// (0x000433d7) fep_china_uni_entry_pane

0x8fb8,	// (0x000433e7) popup_fep_china_uni_window_g1

0x8fd4,	// (0x00043403) fep_china_uni_entry_pane_g1

0x8fdc,	// (0x0004340b) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049b56) fep_china_uni_entry_pane_g

0x8fe4,	// (0x00043413) fep_entry_item_pane

0x8fee,	// (0x0004341d) fep_candidate_item_pane

0x8ff6,	// (0x00043425) fep_china_uni_candidate_pane_g1

0x8ffe,	// (0x0004342d) fep_china_uni_candidate_pane_g2

0x9006,	// (0x00043435) fep_china_uni_candidate_pane_g3

0x900e,	// (0x0004343d) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049b5b) fep_china_uni_candidate_pane_g

0x7eb1,	// (0x000422e0) fep_entry_item_pane_g1

0x9016,	// (0x00043445) fep_entry_item_pane_t1_ParamLimits

0x9016,	// (0x00043445) fep_entry_item_pane_t1

0x902c,	// (0x0004345b) fep_candidate_item_pane_t1_ParamLimits

0x902c,	// (0x0004345b) fep_candidate_item_pane_t1

0x9041,	// (0x00043470) fep_candidate_item_pane_t2_ParamLimits

0x9041,	// (0x00043470) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049b64) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049b64) fep_candidate_item_pane_t

0x7f9b,	// (0x000423ca) list_highlight_pane_cp31_ParamLimits

0x7f9b,	// (0x000423ca) list_highlight_pane_cp31

0x9053,	// (0x00043482) level_1_signal_lsc

0x905c,	// (0x0004348b) level_2_signal_lsc

0x9065,	// (0x00043494) level_3_signal_lsc

0x906e,	// (0x0004349d) level_4_signal_lsc

0x9077,	// (0x000434a6) level_5_signal_lsc

0x9080,	// (0x000434af) level_6_signal_lsc

0x9089,	// (0x000434b8) level_7_signal_lsc

0x9089,	// (0x000434b8) level_1_battery_lsc

0x9092,	// (0x000434c1) level_2_battery_lsc

0x909b,	// (0x000434ca) level_3_battery_lsc

0x90a4,	// (0x000434d3) level_4_battery_lsc

0x90ad,	// (0x000434dc) level_5_battery_lsc

0x90b6,	// (0x000434e5) level_6_battery_lsc

0x9053,	// (0x00043482) level_7_battery_lsc

0x90bf,	// (0x000434ee) scroll_handle_focus_pane_g1

0x90c8,	// (0x000434f7) scroll_handle_focus_pane_g2

0x90d1,	// (0x00043500) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049b69) scroll_handle_focus_pane_g

0x4fa5,	// (0x0003f3d4) list_single_2graphic_pane_g1_ParamLimits

0x4fa5,	// (0x0003f3d4) list_single_2graphic_pane_g1

0x5d0a,	// (0x00040139) list_single_2graphic_pane_g2_ParamLimits

0x5d0a,	// (0x00040139) list_single_2graphic_pane_g2

0x5cec,	// (0x0004011b) list_single_2graphic_pane_g3_ParamLimits

0x5cec,	// (0x0004011b) list_single_2graphic_pane_g3

0x4fb1,	// (0x0003f3e0) list_single_2graphic_pane_g4_ParamLimits

0x4fb1,	// (0x0003f3e0) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049b70) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049b70) list_single_2graphic_pane_g

0x4fbd,	// (0x0003f3ec) list_single_2graphic_pane_t1_ParamLimits

0x4fbd,	// (0x0003f3ec) list_single_2graphic_pane_t1

0x6029,	// (0x00040458) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6029,	// (0x00040458) list_double2_graphic_large_graphic_pane_g1

0x4b42,	// (0x0003ef71) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b42,	// (0x0003ef71) list_double2_graphic_large_graphic_pane_g2

0x5d53,	// (0x00040182) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040182) list_double2_graphic_large_graphic_pane_g3

0x6039,	// (0x00040468) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6039,	// (0x00040468) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049b79) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049b79) list_double2_graphic_large_graphic_pane_g

0x4feb,	// (0x0003f41a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4feb,	// (0x0003f41a) list_double2_graphic_large_graphic_pane_t1

0x5001,	// (0x0003f430) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5001,	// (0x0003f430) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049b82) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049b82) list_double2_graphic_large_graphic_pane_t

0x9219,	// (0x00043648) popup_fast_swap_window_ParamLimits

0x9219,	// (0x00043648) popup_fast_swap_window

0x9235,	// (0x00043664) popup_side_volume_key_window

0x9251,	// (0x00043680) stacon_top_pane

0x925b,	// (0x0004368a) status_pane_ParamLimits

0x925b,	// (0x0004368a) status_pane

0x9269,	// (0x00043698) status_small_pane

0x7ebb,	// (0x000422ea) control_pane

0x7ebb,	// (0x000422ea) stacon_bottom_pane

0x87f9,	// (0x00042c28) scroll_pane_cp121

0x87f0,	// (0x00042c1f) set_content_pane

0x90da,	// (0x00043509) bg_active_tab_pane_g1_cp1

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp1

0x90ec,	// (0x0004351b) bg_active_tab_pane_g3_cp1

0x90da,	// (0x00043509) bg_passive_tab_pane_g1_cp1

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp1

0x90ec,	// (0x0004351b) bg_passive_tab_pane_g3_cp1

0x90f5,	// (0x00043524) bg_active_tab_pane_g1_cp2

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp2

0x90fe,	// (0x0004352d) bg_active_tab_pane_g3_cp2

0x90f5,	// (0x00043524) bg_passive_tab_pane_g1_cp2

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp2

0x90fe,	// (0x0004352d) bg_passive_tab_pane_g3_cp2

0x9107,	// (0x00043536) bg_active_tab_pane_g1_cp3

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp3

0x9110,	// (0x0004353f) bg_active_tab_pane_g3_cp3

0x9107,	// (0x00043536) bg_passive_tab_pane_g1_cp3

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp3

0x9110,	// (0x0004353f) bg_passive_tab_pane_g3_cp3

0x9119,	// (0x00043548) bg_active_tab_pane_g1_cp4

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp4

0x9124,	// (0x00043553) bg_active_tab_pane_g3_cp4

0x9119,	// (0x00043548) bg_passive_tab_pane_g1_cp4

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp4

0x9124,	// (0x00043553) bg_passive_tab_pane_g3_cp4

0x916d,	// (0x0004359c) bg_active_tab_pane_g1_cp5

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp5

0x9176,	// (0x000435a5) bg_active_tab_pane_g3_cp5

0x916d,	// (0x0004359c) bg_passive_tab_pane_g1_cp5

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp5

0x9176,	// (0x000435a5) bg_passive_tab_pane_g3_cp5

0x917f,	// (0x000435ae) list_set_graphic_pane_ParamLimits

0x917f,	// (0x000435ae) list_set_graphic_pane

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp4

0x919c,	// (0x000435cb) list_set_graphic_pane_g1_ParamLimits

0x919c,	// (0x000435cb) list_set_graphic_pane_g1

0x91a8,	// (0x000435d7) list_set_graphic_pane_g2_ParamLimits

0x91a8,	// (0x000435d7) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049b87) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049b87) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x00049efc) volume_small_pane_cp_g

0x91cc,	// (0x000435fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91cc,	// (0x000435fb) list_double2_large_graphic_pane_g1_cp2

0x91d8,	// (0x00043607) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d8,	// (0x00043607) list_double2_large_graphic_pane_g2_cp2

0x91e9,	// (0x00043618) list_double2_large_graphic_pane_g3_cp2

0x91f1,	// (0x00043620) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91f1,	// (0x00043620) list_double2_large_graphic_pane_t1_cp2

0x9207,	// (0x00043636) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9207,	// (0x00043636) list_double2_large_graphic_pane_t2_cp2

0xadea,	// (0x00045219) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadea,	// (0x00045219) list_double_large_graphic_pane_g1_cp2

0xadfb,	// (0x0004522a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadfb,	// (0x0004522a) list_double_large_graphic_pane_g2_cp2

0x9382,	// (0x000437b1) list_double_large_graphic_pane_g3_cp2

0xae0c,	// (0x0004523b) list_double_large_graphic_pane_g4_cp

0xae14,	// (0x00045243) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae14,	// (0x00045243) list_double_large_graphic_pane_t1_cp2

0xae2b,	// (0x0004525a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae2b,	// (0x0004525a) list_double_large_graphic_pane_t2_cp2

0x9274,	// (0x000436a3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9274,	// (0x000436a3) list_double2_graphic_pane_g1_cp2

0x9282,	// (0x000436b1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9282,	// (0x000436b1) list_double2_graphic_pane_g2_cp2

0x9293,	// (0x000436c2) list_double2_graphic_pane_g3_cp2

0x929d,	// (0x000436cc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x929d,	// (0x000436cc) list_double2_graphic_pane_t1_cp2

0x92b3,	// (0x000436e2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92b3,	// (0x000436e2) list_double2_graphic_pane_t2_cp2

0x92c5,	// (0x000436f4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92c5,	// (0x000436f4) list_single_number_heading_pane_g1_cp2

0x92d1,	// (0x00043700) list_single_number_heading_pane_g2_cp2

0x92d9,	// (0x00043708) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d9,	// (0x00043708) list_single_number_heading_pane_t1_cp2

0x92ef,	// (0x0004371e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92ef,	// (0x0004371e) list_single_number_heading_pane_t2_cp2

0x9301,	// (0x00043730) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9301,	// (0x00043730) list_single_number_heading_pane_t3_cp2

0x92c5,	// (0x000436f4) list_single_heading_pane_g1_cp2_ParamLimits

0x92c5,	// (0x000436f4) list_single_heading_pane_g1_cp2

0x92d1,	// (0x00043700) list_single_heading_pane_g2_cp2

0x92d9,	// (0x00043708) list_single_heading_pane_t1_cp2_ParamLimits

0x92d9,	// (0x00043708) list_single_heading_pane_t1_cp2

0xabf2,	// (0x00045021) list_single_heading_pane_t2_cp2_ParamLimits

0xabf2,	// (0x00045021) list_single_heading_pane_t2_cp2

0xab3a,	// (0x00044f69) list_double_graphic_pane_g1_cp2_ParamLimits

0xab3a,	// (0x00044f69) list_double_graphic_pane_g1_cp2

0xab46,	// (0x00044f75) list_double_graphic_pane_g2_cp2_ParamLimits

0xab46,	// (0x00044f75) list_double_graphic_pane_g2_cp2

0xab55,	// (0x00044f84) list_double_graphic_pane_g3_cp2

0xab5d,	// (0x00044f8c) list_double_graphic_pane_t1_cp2_ParamLimits

0xab5d,	// (0x00044f8c) list_double_graphic_pane_t1_cp2

0xab73,	// (0x00044fa2) list_double_graphic_pane_t2_cp2_ParamLimits

0xab73,	// (0x00044fa2) list_double_graphic_pane_t2_cp2

0x9376,	// (0x000437a5) list_double_number_pane_g1_cp2_ParamLimits

0x9376,	// (0x000437a5) list_double_number_pane_g1_cp2

0x9382,	// (0x000437b1) list_double_number_pane_g2_cp2

0xaafe,	// (0x00044f2d) list_double_number_pane_t1_cp2_ParamLimits

0xaafe,	// (0x00044f2d) list_double_number_pane_t1_cp2

0xab12,	// (0x00044f41) list_double_number_pane_t2_cp2_ParamLimits

0xab12,	// (0x00044f41) list_double_number_pane_t2_cp2

0xab28,	// (0x00044f57) list_double_number_pane_t3_cp2_ParamLimits

0xab28,	// (0x00044f57) list_double_number_pane_t3_cp2

0xa9e7,	// (0x00044e16) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9e7,	// (0x00044e16) list_single_graphic_pane_g1_cp2

0x93da,	// (0x00043809) list_single_graphic_pane_g2_cp2_ParamLimits

0x93da,	// (0x00043809) list_single_graphic_pane_g2_cp2

0x93e6,	// (0x00043815) list_single_graphic_pane_g3_cp2

0xa9bd,	// (0x00044dec) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x00044dec) list_single_graphic_pane_t1_cp2

0x93da,	// (0x00043809) list_single_number_pane_g1_cp2_ParamLimits

0x93da,	// (0x00043809) list_single_number_pane_g1_cp2

0x93e6,	// (0x00043815) list_single_number_pane_g2_cp2

0xa9bd,	// (0x00044dec) list_single_number_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x00044dec) list_single_number_pane_t1_cp2

0xa9d3,	// (0x00044e02) list_single_number_pane_t2_cp2_ParamLimits

0xa9d3,	// (0x00044e02) list_single_number_pane_t2_cp2

0x91d8,	// (0x00043607) list_double2_pane_g1_cp2_ParamLimits

0x91d8,	// (0x00043607) list_double2_pane_g1_cp2

0x91e9,	// (0x00043618) list_double2_pane_g2_cp2

0x934e,	// (0x0004377d) list_double2_pane_t1_cp2_ParamLimits

0x934e,	// (0x0004377d) list_double2_pane_t1_cp2

0x9364,	// (0x00043793) list_double2_pane_t2_cp2_ParamLimits

0x9364,	// (0x00043793) list_double2_pane_t2_cp2

0x9376,	// (0x000437a5) list_double_pane_g1_cp2_ParamLimits

0x9376,	// (0x000437a5) list_double_pane_g1_cp2

0x9382,	// (0x000437b1) list_double_pane_g2_cp2

0x938a,	// (0x000437b9) list_double_pane_t1_cp2_ParamLimits

0x938a,	// (0x000437b9) list_double_pane_t1_cp2

0x93a0,	// (0x000437cf) list_double_pane_t2_cp2_ParamLimits

0x93a0,	// (0x000437cf) list_double_pane_t2_cp2

0x93ca,	// (0x000437f9) list_single_pane_cp2_g3

0x93da,	// (0x00043809) list_single_pane_g1_cp2_ParamLimits

0x93da,	// (0x00043809) list_single_pane_g1_cp2

0x93e6,	// (0x00043815) list_single_pane_g2_cp2

0x93ee,	// (0x0004381d) list_single_pane_t1_cp2_ParamLimits

0x93ee,	// (0x0004381d) list_single_pane_t1_cp2

0x9406,	// (0x00043835) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9406,	// (0x00043835) list_single_large_graphic_pane_g1_cp2

0x9412,	// (0x00043841) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9412,	// (0x00043841) list_single_large_graphic_pane_g2_cp2

0x941e,	// (0x0004384d) list_single_large_graphic_pane_g3_cp2

0x9426,	// (0x00043855) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9426,	// (0x00043855) list_single_large_graphic_pane_g4_cp1

0x9440,	// (0x0004386f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9440,	// (0x0004386f) list_single_large_graphic_pane_t1_cp2

0xa989,	// (0x00044db8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa989,	// (0x00044db8) list_single_graphic_heading_pane_g1_cp2

0xa956,	// (0x00044d85) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa956,	// (0x00044d85) list_single_graphic_heading_pane_g4_cp2

0x93e6,	// (0x00043815) list_single_graphic_heading_pane_g5_cp2

0xa995,	// (0x00044dc4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa995,	// (0x00044dc4) list_single_graphic_heading_pane_t1_cp2

0xa9ab,	// (0x00044dda) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9ab,	// (0x00044dda) list_single_graphic_heading_pane_t2_cp2

0xa94a,	// (0x00044d79) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa94a,	// (0x00044d79) list_single_2graphic_pane_g1_cp2

0xa956,	// (0x00044d85) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa956,	// (0x00044d85) list_single_2graphic_pane_g2_cp2

0x93e6,	// (0x00043815) list_single_2graphic_pane_g3_cp2

0xa967,	// (0x00044d96) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa967,	// (0x00044d96) list_single_2graphic_pane_g4_cp2

0xa973,	// (0x00044da2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa973,	// (0x00044da2) list_single_2graphic_pane_t1_cp2

0x7eb1,	// (0x000422e0) list_highlight_pane_g10_cp1

0xa522,	// (0x00044951) list_highlight_pane_g1_cp1

0xa52a,	// (0x00044959) list_highlight_pane_g2_cp1

0xa532,	// (0x00044961) list_highlight_pane_g3_cp1

0xa53a,	// (0x00044969) list_highlight_pane_g4_cp1

0xa542,	// (0x00044971) list_highlight_pane_g5_cp1

0xa54a,	// (0x00044979) list_highlight_pane_g6_cp1

0xa552,	// (0x00044981) list_highlight_pane_g7_cp1

0xa55a,	// (0x00044989) list_highlight_pane_g8_cp1

0xa562,	// (0x00044991) list_highlight_pane_g9_cp1

0xa442,	// (0x00044871) form_field_slider_pane_t3

0xa450,	// (0x0004487f) form_field_slider_pane_t4

0xa45e,	// (0x0004488d) slider_form_pane_ParamLimits

0xa45e,	// (0x0004488d) slider_form_pane

0x7ebb,	// (0x000422ea) control_abbreviations

0x7ebb,	// (0x000422ea) control_conventions

0x7ebb,	// (0x000422ea) control_definitions

0x7ebb,	// (0x000422ea) format_table_attribute

0xac3c,	// (0x0004506b) bg_popup_preview_window_pane_g9

0x7ebb,	// (0x000422ea) format_table_data2

0x7ebb,	// (0x000422ea) format_table_data3

0x7ebb,	// (0x000422ea) format_table_data_example

0x0008,

0x7ebb,	// (0x000422ea) intro_purpose

0xf8f4,	// (0x00049d23) bg_popup_preview_window_pane_g

0x7ebb,	// (0x000422ea) texts_category

0x7ebb,	// (0x000422ea) texts_graphics

0x9456,	// (0x00043885) text_digital

0x9465,	// (0x00043894) text_primary

0x9474,	// (0x000438a3) text_primary_small

0x9483,	// (0x000438b2) text_secondary

0x9492,	// (0x000438c1) text_title

0xb321,	// (0x00045750) bg_passive_tab_pane_g1_cp3_srt

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp3_srt

0xb32a,	// (0x00045759) bg_passive_tab_pane_g3_cp3_srt

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp3_srt

0xb333,	// (0x00045762) tabs_4_active_pane_srt_g1

0xb33b,	// (0x0004576a) tabs_4_active_pane_srt_t1_ParamLimits

0xb33b,	// (0x0004576a) tabs_4_active_pane_srt_t1

0xb321,	// (0x00045750) bg_active_tab_pane_g1_cp3_copy1

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp3_copy1

0xb32a,	// (0x00045759) bg_active_tab_pane_g3_cp3_copy1

0x7f9b,	// (0x000423ca) tabs_2_long_active_pane_srt_ParamLimits

0x7f9b,	// (0x000423ca) tabs_2_long_active_pane_srt

0x7f9b,	// (0x000423ca) tabs_2_long_passive_pane_srt_ParamLimits

0x7f9b,	// (0x000423ca) tabs_2_long_passive_pane_srt

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp4_srt

0xb06a,	// (0x00045499) bg_passive_tab_pane_g1_cp4_srt

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp4_srt

0xb073,	// (0x000454a2) bg_passive_tab_pane_g3_cp4_srt

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp4_srt

0xb07c,	// (0x000454ab) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb07c,	// (0x000454ab) tabs_2_long_active_pane_srt_t1

0xb06a,	// (0x00045499) bg_active_tab_pane_g1_cp4_srt

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp4_srt

0xb073,	// (0x000454a2) bg_active_tab_pane_g3_cp4_srt

0x8216,	// (0x00042645) tabs_3_long_active_pane_srt_ParamLimits

0x8216,	// (0x00042645) tabs_3_long_active_pane_srt

0x8216,	// (0x00042645) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8216,	// (0x00042645) tabs_3_long_passive_pane_cp_srt

0x8216,	// (0x00042645) tabs_3_long_passive_pane_srt_ParamLimits

0x8216,	// (0x00042645) tabs_3_long_passive_pane_srt

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp5_srt

0x916d,	// (0x0004359c) bg_passive_tab_pane_g1_cp5_srt

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp5_srt

0x9176,	// (0x000435a5) bg_passive_tab_pane_g3_cp5_srt

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp5_srt

0xb058,	// (0x00045487) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb058,	// (0x00045487) tabs_3_long_active_pane_srt_t1

0x916d,	// (0x0004359c) bg_active_tab_pane_g1_cp5_srt

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp5_srt

0x9176,	// (0x000435a5) bg_active_tab_pane_g3_cp5_srt

0xb04a,	// (0x00045479) navi_text_pane_srt_t1

0xb042,	// (0x00045471) navi_icon_pane_srt_g1

0x9667,	// (0x00043a96) midp_editing_number_pane_srt

0x94a1,	// (0x000438d0) midp_ticker_pane_srt

0x966f,	// (0x00043a9e) midp_ticker_pane_srt_g1

0x9677,	// (0x00043aa6) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049ba6) midp_ticker_pane_srt_g

0x967f,	// (0x00043aae) midp_ticker_pane_srt_t1

0xb033,	// (0x00045462) midp_editing_number_pane_t1_copy1

0x94a9,	// (0x000438d8) listscroll_midp_pane

0x94a9,	// (0x000438d8) midp_form_pane

0x9519,	// (0x00043948) midp_info_popup_window_ParamLimits

0x9519,	// (0x00043948) midp_info_popup_window

0x88b3,	// (0x00042ce2) bg_popup_sub_pane_cp50_ParamLimits

0x88b3,	// (0x00042ce2) bg_popup_sub_pane_cp50

0xa15a,	// (0x00044589) listscroll_midp_info_pane_ParamLimits

0xa15a,	// (0x00044589) listscroll_midp_info_pane

0xa13a,	// (0x00044569) listscroll_form_midp_pane_ParamLimits

0xa13a,	// (0x00044569) listscroll_form_midp_pane

0xa146,	// (0x00044575) scroll_bar_cp050

0xa11a,	// (0x00044549) list_midp_pane

0xbd64,	// (0x00046193) signal_pane_g2_cp

0xa048,	// (0x00044477) listscroll_midp_info_pane_t1_ParamLimits

0xa048,	// (0x00044477) listscroll_midp_info_pane_t1

0xa060,	// (0x0004448f) listscroll_midp_info_pane_t2_ParamLimits

0xa060,	// (0x0004448f) listscroll_midp_info_pane_t2

0xa09e,	// (0x000444cd) listscroll_midp_info_pane_t3_ParamLimits

0xa09e,	// (0x000444cd) listscroll_midp_info_pane_t3

0xa0d8,	// (0x00044507) listscroll_midp_info_pane_t4_ParamLimits

0xa0d8,	// (0x00044507) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00049c5e) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00049c5e) listscroll_midp_info_pane_t

0x8977,	// (0x00042da6) scroll_pane_cp21

0x9fe6,	// (0x00044415) form_midp_field_choice_group_pane

0x9fef,	// (0x0004441e) form_midp_field_text_pane

0xa02e,	// (0x0004445d) form_midp_field_time_pane

0xa036,	// (0x00044465) form_midp_gauge_slider_pane

0xa03f,	// (0x0004446e) form_midp_gauge_wait_pane

0x7ebb,	// (0x000422ea) form_midp_image_pane

0x5154,	// (0x0003f583) list_single_midp_pane_ParamLimits

0x5154,	// (0x0003f583) list_single_midp_pane

0x9f9e,	// (0x000443cd) form_midp_field_text_pane_t1

0x9d6e,	// (0x0004419d) input_focus_pane_cp050

0x9fd5,	// (0x00044404) list_midp_form_text_pane

0x9f6d,	// (0x0004439c) form_midp_field_choice_group_pane_t1

0x9f7b,	// (0x000443aa) input_focus_pane_cp051

0x9f8f,	// (0x000443be) list_midp_choice_pane

0x7ebb,	// (0x000422ea) status_idle_pane

0x9f51,	// (0x00044380) form_midp_field_time_pane_t1

0x7eb1,	// (0x000422e0) wait_anim_pane_g2_copy1

0x9f5f,	// (0x0004438e) form_midp_field_time_pane_t2

0x0001,

0x95c7,	// (0x000439f6) aid_navinavi_width_2_pane

0xf82a,	// (0x00049c59) form_midp_field_time_pane_t

0x7ebb,	// (0x000422ea) input_focus_pane_cp052

0x7ebb,	// (0x000422ea) bg_input_focus_pane_cp040

0x9f11,	// (0x00044340) form_midp_gauge_slider_pane_t1

0x9f1f,	// (0x0004434e) form_midp_gauge_slider_pane_t2

0x9f2d,	// (0x0004435c) form_midp_gauge_slider_pane_t3

0x9f3b,	// (0x0004436a) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00049c50) form_midp_gauge_slider_pane_t

0x9f49,	// (0x00044378) form_midp_slider_pane

0x7f9b,	// (0x000423ca) bg_input_focus_pane_cp041_ParamLimits

0x7f9b,	// (0x000423ca) bg_input_focus_pane_cp041

0x9ede,	// (0x0004430d) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ede,	// (0x0004430d) form_midp_gauge_wait_pane_t1

0x9ef0,	// (0x0004431f) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef0,	// (0x0004431f) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00049c4b) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00049c4b) form_midp_gauge_wait_pane_t

0x9f02,	// (0x00044331) form_midp_wait_pane_ParamLimits

0x9f02,	// (0x00044331) form_midp_wait_pane

0x9ea8,	// (0x000442d7) form_midp_image_pane_g1

0x9eb1,	// (0x000442e0) form_midp_image_pane_t1

0x9ec0,	// (0x000442ef) form_midp_image_pane_t2

0x9ecf,	// (0x000442fe) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00049c44) form_midp_image_pane_t

0x9e9f,	// (0x000442ce) list_single_midp_pane_g1

0x5145,	// (0x0003f574) list_single_midp_pane_t1

0x9e77,	// (0x000442a6) list_midp_form_item_pane_ParamLimits

0x9e77,	// (0x000442a6) list_midp_form_item_pane

0x956f,	// (0x0004399e) list_midp_form_item_pane_t1

0x957e,	// (0x000439ad) midp_ticker_pane_g1

0x958a,	// (0x000439b9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049b8c) midp_ticker_pane_g

0x9596,	// (0x000439c5) midp_ticker_pane_t1

0xb284,	// (0x000456b3) midp_editing_number_pane_t1

0xb262,	// (0x00045691) midp_editing_number_pane

0xb271,	// (0x000456a0) midp_ticker_pane

0xb023,	// (0x00045452) ai_message_heading_pane

0x7ebb,	// (0x000422ea) bg_popup_window_pane_cp14

0xb02b,	// (0x0004545a) listscroll_ai_message_pane

0xafad,	// (0x000453dc) ai_message_heading_pane_g1_ParamLimits

0xafad,	// (0x000453dc) ai_message_heading_pane_g1

0xafb9,	// (0x000453e8) ai_message_heading_pane_g2_ParamLimits

0xafb9,	// (0x000453e8) ai_message_heading_pane_g2

0xafc5,	// (0x000453f4) ai_message_heading_pane_g3_ParamLimits

0xafc5,	// (0x000453f4) ai_message_heading_pane_g3

0xafd1,	// (0x00045400) ai_message_heading_pane_g4_ParamLimits

0xafd1,	// (0x00045400) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00049d85) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00049d85) ai_message_heading_pane_g

0xafdd,	// (0x0004540c) ai_message_heading_pane_t1_ParamLimits

0xafdd,	// (0x0004540c) ai_message_heading_pane_t1

0xaff7,	// (0x00045426) ai_message_heading_pane_t2_ParamLimits

0xaff7,	// (0x00045426) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00049d8e) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00049d8e) ai_message_heading_pane_t

0xb009,	// (0x00045438) bg_popup_heading_pane_cp1_ParamLimits

0xb009,	// (0x00045438) bg_popup_heading_pane_cp1

0xaf9b,	// (0x000453ca) list_ai_message_pane_ParamLimits

0xaf9b,	// (0x000453ca) list_ai_message_pane

0x8977,	// (0x00042da6) scroll_pane_cp10

0xaf37,	// (0x00045366) list_ai_message_pane_g1

0xaf3f,	// (0x0004536e) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00049d62) list_ai_message_pane_g

0xaf47,	// (0x00045376) list_ai_message_pane_t1_ParamLimits

0xaf47,	// (0x00045376) list_ai_message_pane_t1

0xaf5c,	// (0x0004538b) list_ai_message_pane_t2_ParamLimits

0xaf5c,	// (0x0004538b) list_ai_message_pane_t2

0xaf71,	// (0x000453a0) list_ai_message_pane_t3_ParamLimits

0xaf71,	// (0x000453a0) list_ai_message_pane_t3

0xaf86,	// (0x000453b5) list_ai_message_pane_t4_ParamLimits

0xaf86,	// (0x000453b5) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00049d67) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00049d67) list_ai_message_pane_t

0xaf22,	// (0x00045351) cell_ai_soft_ind_pane_ParamLimits

0xaf22,	// (0x00045351) cell_ai_soft_ind_pane

0x95a8,	// (0x000439d7) cell_ai_soft_ind_pane_g1_ParamLimits

0x95a8,	// (0x000439d7) cell_ai_soft_ind_pane_g1

0x7ebb,	// (0x000422ea) grid_highlight_cp1

0x95b5,	// (0x000439e4) text_secondary_cp56_ParamLimits

0x95b5,	// (0x000439e4) text_secondary_cp56

0xaef7,	// (0x00045326) example_general_pane_ParamLimits

0xaef7,	// (0x00045326) example_general_pane

0xaf03,	// (0x00045332) example_parent_pane_g1_ParamLimits

0xaf03,	// (0x00045332) example_parent_pane_g1

0xaf0f,	// (0x0004533e) example_parent_pane_t1_ParamLimits

0xaf0f,	// (0x0004533e) example_parent_pane_t1

0x6736,	// (0x00040b65) popup_preview_text_window_ParamLimits

0x6736,	// (0x00040b65) popup_preview_text_window

0x93d2,	// (0x00043801) list_single_pane_cp2_g4

0x82cc,	// (0x000426fb) bg_popup_preview_window_pane_ParamLimits

0x82cc,	// (0x000426fb) bg_popup_preview_window_pane

0xac44,	// (0x00045073) popup_preview_text_window_t1_ParamLimits

0xac44,	// (0x00045073) popup_preview_text_window_t1

0xac62,	// (0x00045091) popup_preview_text_window_t2_ParamLimits

0xac62,	// (0x00045091) popup_preview_text_window_t2

0xacab,	// (0x000450da) popup_preview_text_window_t3_ParamLimits

0xacab,	// (0x000450da) popup_preview_text_window_t3

0xacf0,	// (0x0004511f) popup_preview_text_window_t4_ParamLimits

0xacf0,	// (0x0004511f) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00049d36) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00049d36) popup_preview_text_window_t

0xad6e,	// (0x0004519d) scroll_pane_cp11

0x9cfa,	// (0x00044129) bg_popup_preview_window_pane_g1

0xac04,	// (0x00045033) bg_popup_preview_window_pane_g2

0xac0c,	// (0x0004503b) bg_popup_preview_window_pane_g3

0xac14,	// (0x00045043) bg_popup_preview_window_pane_g4

0xac1c,	// (0x0004504b) bg_popup_preview_window_pane_g5

0xac24,	// (0x00045053) bg_popup_preview_window_pane_g6

0xac2c,	// (0x0004505b) bg_popup_preview_window_pane_g7

0xac34,	// (0x00045063) bg_popup_preview_window_pane_g8

0x586c,	// (0x0003fc9b) aid_popup_width_pane

0x6714,	// (0x00040b43) popup_midp_note_alarm_window_ParamLimits

0x6714,	// (0x00040b43) popup_midp_note_alarm_window

0x880a,	// (0x00042c39) data_form_pane_ParamLimits

0x4dee,	// (0x0003f21d) form_field_data_pane_g1

0x4df8,	// (0x0003f227) form_field_data_pane_t1_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_ParamLimits

0x4e10,	// (0x0003f23f) data_form_wide_pane_ParamLimits

0x4e21,	// (0x0003f250) form_field_data_wide_pane_g1

0x4e2d,	// (0x0003f25c) form_field_data_wide_pane_t1_ParamLimits

0x857b,	// (0x000429aa) input_focus_pane_cp6_ParamLimits

0x8924,	// (0x00042d53) input_popup_find_pane_g1_ParamLimits

0x8924,	// (0x00042d53) input_popup_find_pane_g1

0x5e8a,	// (0x000402b9) aid_navi_side_left_pane

0x5e9f,	// (0x000402ce) aid_navi_side_right_pane

0xa61d,	// (0x00044a4c) bg_popup_window_pane_cp30_ParamLimits

0xa61d,	// (0x00044a4c) bg_popup_window_pane_cp30

0xa697,	// (0x00044ac6) popup_midp_note_alarm_window_g1_ParamLimits

0xa697,	// (0x00044ac6) popup_midp_note_alarm_window_g1

0xa6c7,	// (0x00044af6) popup_midp_note_alarm_window_t1_ParamLimits

0xa6c7,	// (0x00044af6) popup_midp_note_alarm_window_t1

0xa768,	// (0x00044b97) popup_midp_note_alarm_window_t2_ParamLimits

0xa768,	// (0x00044b97) popup_midp_note_alarm_window_t2

0xa816,	// (0x00044c45) popup_midp_note_alarm_window_t3_ParamLimits

0xa816,	// (0x00044c45) popup_midp_note_alarm_window_t3

0xa848,	// (0x00044c77) popup_midp_note_alarm_window_t4_ParamLimits

0xa848,	// (0x00044c77) popup_midp_note_alarm_window_t4

0xa86e,	// (0x00044c9d) popup_midp_note_alarm_window_t5_ParamLimits

0xa86e,	// (0x00044c9d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00049cd3) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00049cd3) popup_midp_note_alarm_window_t

0xa91a,	// (0x00044d49) wait_bar_pane_cp1_ParamLimits

0xa91a,	// (0x00044d49) wait_bar_pane_cp1

0x7ebb,	// (0x000422ea) wait_anim_pane_copy1

0x7ebb,	// (0x000422ea) wait_border_pane_copy1

0xa303,	// (0x00044732) wait_border_pane_g1_copy1

0x4e47,	// (0x0003f276) form_field_popup_pane_g1

0x4e4f,	// (0x0003f27e) form_field_popup_pane_t1_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_cp7_ParamLimits

0x8838,	// (0x00042c67) list_form_pane_ParamLimits

0x4e67,	// (0x0003f296) form_field_popup_wide_pane_g1

0x4e6f,	// (0x0003f29e) form_field_popup_wide_pane_t1_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_cp8_ParamLimits

0x8844,	// (0x00042c73) list_form_wide_pane_ParamLimits

0xb3b5,	// (0x000457e4) aid_size_cell_graphic_pane

0x4ef9,	// (0x0003f328) data_form_pane_t1_ParamLimits

0x51a6,	// (0x0003f5d5) data_form_wide_pane_t1_ParamLimits

0x98c7,	// (0x00043cf6) bg_status_flat_pane

0x7efb,	// (0x0004232a) title_pane_t1_ParamLimits

0x7f63,	// (0x00042392) title_pane_t2_ParamLimits

0x7f89,	// (0x000423b8) title_pane_t3_ParamLimits

0xf557,	// (0x00049986) title_pane_t_ParamLimits

0x8dfa,	// (0x00043229) level_1_signal_ParamLimits

0x8e0c,	// (0x0004323b) level_2_signal_ParamLimits

0x8e1f,	// (0x0004324e) level_3_signal_ParamLimits

0x8e32,	// (0x00043261) level_4_signal_ParamLimits

0x8e45,	// (0x00043274) level_5_signal_ParamLimits

0x8e58,	// (0x00043287) level_6_signal_ParamLimits

0x8e6b,	// (0x0004329a) level_7_signal_ParamLimits

0x8dfa,	// (0x00043229) level_1_battery_ParamLimits

0x8e0c,	// (0x0004323b) level_2_battery_ParamLimits

0x8e1f,	// (0x0004324e) level_3_battery_ParamLimits

0x8e32,	// (0x00043261) level_4_battery_ParamLimits

0x8e45,	// (0x00043274) level_5_battery_ParamLimits

0x8e58,	// (0x00043287) level_6_battery_ParamLimits

0x8e6b,	// (0x0004329a) level_7_battery_ParamLimits

0xa522,	// (0x00044951) bg_status_flat_pane_g1

0xa52a,	// (0x00044959) bg_status_flat_pane_g2

0xa532,	// (0x00044961) bg_status_flat_pane_g3

0xa53a,	// (0x00044969) bg_status_flat_pane_g4

0xa542,	// (0x00044971) bg_status_flat_pane_g5

0xa54a,	// (0x00044979) bg_status_flat_pane_g6

0xa552,	// (0x00044981) bg_status_flat_pane_g7

0x7fb1,	// (0x000423e0) tabs_3_active_pane_t1_ParamLimits

0x7fb1,	// (0x000423e0) tabs_3_passive_pane_t1_ParamLimits

0x7fcb,	// (0x000423fa) tabs_4_active_pane_t1_ParamLimits

0x7fcb,	// (0x000423fa) tabs_4_1_passive_pane_t1_ParamLimits

0x89b8,	// (0x00042de7) tabs_2_active_pane_t1_ParamLimits

0x89b8,	// (0x00042de7) tabs_2_passive_pane_t1_ParamLimits

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp4_ParamLimits

0x89d8,	// (0x00042e07) tabs_2_long_active_pane_t1_ParamLimits

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp4_ParamLimits

0x69e3,	// (0x00040e12) list_single_midp_graphic_pane_t1_ParamLimits

0x89ca,	// (0x00042df9) bg_active_tab_pane_cp5_ParamLimits

0x89f7,	// (0x00042e26) tabs_3_long_active_pane_t1_ParamLimits

0x89eb,	// (0x00042e1a) bg_passive_tab_pane_cp5_ParamLimits

0x69e3,	// (0x00040e12) list_single_midp_graphic_pane_t1

0x98c7,	// (0x00043cf6) bg_status_flat_pane_ParamLimits

0x998a,	// (0x00043db9) indicator_pane_cp2_ParamLimits

0x998a,	// (0x00043db9) indicator_pane_cp2

0x9ab5,	// (0x00043ee4) navi_pane_srt_ParamLimits

0x9ab5,	// (0x00043ee4) navi_pane_srt

0x9ad9,	// (0x00043f08) popup_clock_digital_analogue_window_cp1

0x8078,	// (0x000424a7) indicator_pane_t1

0x94a1,	// (0x000438d0) copy_highlight_pane

0x94a1,	// (0x000438d0) cursor_graphics_pane

0x94a1,	// (0x000438d0) graphic_within_text_pane

0x94a1,	// (0x000438d0) link_highlight_pane

0xad31,	// (0x00045160) popup_preview_text_window_t5_ParamLimits

0xad31,	// (0x00045160) popup_preview_text_window_t5

0x95cf,	// (0x000439fe) cursor_digital_pane

0x95cf,	// (0x000439fe) cursor_primary_pane

0x95e0,	// (0x00043a0f) cursor_primary_small_pane

0x95e8,	// (0x00043a17) cursor_secondary_pane

0x95f0,	// (0x00043a1f) cursor_title_pane

0x95cf,	// (0x000439fe) link_highlight_digital_pane

0x95d7,	// (0x00043a06) link_highlight_primary_pane

0x95e0,	// (0x00043a0f) link_highlight_primary_small_pane

0x95e8,	// (0x00043a17) link_highlight_secondary_pane

0x95f0,	// (0x00043a1f) link_highlight_title_pane

0x95cf,	// (0x000439fe) copy_highlight_digital_pane

0x95cf,	// (0x000439fe) copy_highlight_primary_pane

0x95e0,	// (0x00043a0f) copy_highlight_primary_small_pane

0x95e8,	// (0x00043a17) copy_highlight_secondary_pane

0x95f0,	// (0x00043a1f) copy_highlight_title_pane

0x95e8,	// (0x00043a17) graphic_text_digital_pane

0xa5c0,	// (0x000449ef) graphic_text_primary_pane

0xa5c9,	// (0x000449f8) graphic_text_primary_small_pane

0x95e0,	// (0x00043a0f) graphic_text_secondary_pane

0x95cf,	// (0x000439fe) graphic_text_title_pane

0x95f8,	// (0x00043a27) cursor_primary_pane_g1

0xa5b2,	// (0x000449e1) cursor_text_primary_t1

0xa59a,	// (0x000449c9) cursor_primary_small_pane_g1

0xa5a4,	// (0x000449d3) cursor_text_primary_small_t1

0xa582,	// (0x000449b1) cursor_primary_small_pane_g1_copy1

0xa58c,	// (0x000449bb) cursor_text_primary_small_t1_copy1

0xa56a,	// (0x00044999) cursor_text_title_t1

0xa578,	// (0x000449a7) cursor_title_pane_g1

0x95f8,	// (0x00043a27) cursor_digital_pane_g1

0x9602,	// (0x00043a31) cursor_text_digital_t1

0x9627,	// (0x00043a56) link_highlight_primary_pane_g1

0xa513,	// (0x00044942) link_highlight_primary_pane_t1

0x9610,	// (0x00043a3f) link_highlight_primary_small_pane_g1

0x9618,	// (0x00043a47) link_highlight_primary_small_pane_t1

0x9627,	// (0x00043a56) link_highlight_secondary_pane_g1

0x962f,	// (0x00043a5e) link_highlight_secondary_pane_t1

0xa487,	// (0x000448b6) link_highlight_title_pane_g1

0xa48f,	// (0x000448be) link_highlight_title_pane_t1

0xa470,	// (0x0004489f) link_highlight_digital_pane_g1

0xa478,	// (0x000448a7) link_highlight_digital_pane_t1

0xa348,	// (0x00044777) copy_highlight_primary_pane_g1

0xa350,	// (0x0004477f) copy_highlight_primary_pane_t1

0xa322,	// (0x00044751) copy_highlight_primary_small_pane_g1

0xa339,	// (0x00044768) copy_highlight_primary_small_pane_t1

0x963e,	// (0x00043a6d) copy_highlight_secondary_pane_g1

0x9646,	// (0x00043a75) copy_highlight_secondary_pane_t1

0xa322,	// (0x00044751) copy_highlight_title_pane_g1

0xa32a,	// (0x00044759) copy_highlight_title_pane_t1

0xa348,	// (0x00044777) copy_highlight_digital_pane_g1

0xb583,	// (0x000459b2) copy_highlight_digital_pane_t1

0xb4d7,	// (0x00045906) graphic_text_primary_pane_g1

0xb567,	// (0x00045996) graphic_text_primary_pane_t1

0xb575,	// (0x000459a4) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00049e02) graphic_text_primary_pane_t

0xb543,	// (0x00045972) graphic_text_primary_small_pane_g1

0xb54b,	// (0x0004597a) graphic_text_primary_small_pane_t1

0xb559,	// (0x00045988) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00049dfd) graphic_text_primary_small_pane_t

0xb51f,	// (0x0004594e) graphic_text_secondary_pane_g1

0xb527,	// (0x00045956) graphic_text_secondary_pane_t1

0xb535,	// (0x00045964) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00049df8) graphic_text_secondary_pane_t

0xb4fb,	// (0x0004592a) graphic_text_title_pane_g1

0xb503,	// (0x00045932) graphic_text_title_pane_t1

0xb511,	// (0x00045940) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00049df3) graphic_text_title_pane_t

0xb4d7,	// (0x00045906) graphic_text_digital_pane_g1

0xb4df,	// (0x0004590e) graphic_text_digital_pane_t1

0xb4ed,	// (0x0004591c) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00049dee) graphic_text_digital_pane_t

0x7f9b,	// (0x000423ca) navi_icon_pane_srt_ParamLimits

0x7f9b,	// (0x000423ca) navi_icon_pane_srt

0x7ebb,	// (0x000422ea) navi_midp_pane_srt

0x7ebb,	// (0x000422ea) navi_navi_pane_srt

0x7f9b,	// (0x000423ca) navi_text_pane_srt_ParamLimits

0x7f9b,	// (0x000423ca) navi_text_pane_srt

0xb4a2,	// (0x000458d1) navi_navi_icon_text_pane_srt

0xb4aa,	// (0x000458d9) navi_navi_pane_srt_g1_ParamLimits

0xb4aa,	// (0x000458d9) navi_navi_pane_srt_g1

0xb4bc,	// (0x000458eb) navi_navi_pane_srt_g2_ParamLimits

0xb4bc,	// (0x000458eb) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00049de9) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00049de9) navi_navi_pane_srt_g

0xb4ce,	// (0x000458fd) navi_navi_tabs_pane_srt

0xb4a2,	// (0x000458d1) navi_navi_text_pane_srt

0xb4a2,	// (0x000458d1) navi_navi_volume_pane_srt

0xb493,	// (0x000458c2) navi_navi_text_pane_srt_t1

0x6e0b,	// (0x0004123a) navi_navi_volume_pane_srt_g1

0x6e13,	// (0x00041242) volume_small_pane_srt_ParamLimits

0x6e13,	// (0x00041242) volume_small_pane_srt

0x6186,	// (0x000405b5) volume_small_pane_srt_g1_ParamLimits

0x6186,	// (0x000405b5) volume_small_pane_srt_g1

0x6196,	// (0x000405c5) volume_small_pane_srt_g2_ParamLimits

0x6196,	// (0x000405c5) volume_small_pane_srt_g2

0x61a7,	// (0x000405d6) volume_small_pane_srt_g3_ParamLimits

0x61a7,	// (0x000405d6) volume_small_pane_srt_g3

0x61b8,	// (0x000405e7) volume_small_pane_srt_g4_ParamLimits

0x61b8,	// (0x000405e7) volume_small_pane_srt_g4

0x61c9,	// (0x000405f8) volume_small_pane_srt_g5_ParamLimits

0x61c9,	// (0x000405f8) volume_small_pane_srt_g5

0x61da,	// (0x00040609) volume_small_pane_srt_g6_ParamLimits

0x61da,	// (0x00040609) volume_small_pane_srt_g6

0x61eb,	// (0x0004061a) volume_small_pane_srt_g7_ParamLimits

0x61eb,	// (0x0004061a) volume_small_pane_srt_g7

0x61fc,	// (0x0004062b) volume_small_pane_srt_g8_ParamLimits

0x61fc,	// (0x0004062b) volume_small_pane_srt_g8

0x620d,	// (0x0004063c) volume_small_pane_srt_g9_ParamLimits

0x620d,	// (0x0004063c) volume_small_pane_srt_g9

0x621e,	// (0x0004064d) volume_small_pane_srt_g10_ParamLimits

0x621e,	// (0x0004064d) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049b91) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049b91) volume_small_pane_srt_g

0x8375,	// (0x000427a4) query_popup_data_pane_cp2

0xb479,	// (0x000458a8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb479,	// (0x000458a8) navi_navi_icon_text_pane_srt_t1

0xa5c0,	// (0x000449ef) navi_tabs_2_long_pane_srt

0xa5c0,	// (0x000449ef) navi_tabs_2_pane_srt

0xa5c0,	// (0x000449ef) navi_tabs_3_long_pane_srt

0xa5c0,	// (0x000449ef) navi_tabs_3_pane_srt

0xa5c0,	// (0x000449ef) navi_tabs_4_pane_srt

0x6deb,	// (0x0004121a) tabs_2_active_pane_srt_ParamLimits

0x6deb,	// (0x0004121a) tabs_2_active_pane_srt

0x6dfb,	// (0x0004122a) tabs_2_passive_pane_srt_ParamLimits

0x6dfb,	// (0x0004122a) tabs_2_passive_pane_srt

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp1_srt

0xb445,	// (0x00045874) bg_passive_tab_pane_g1_cp1_srt

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp1_srt

0xb44e,	// (0x0004587d) bg_passive_tab_pane_g3_cp1_srt

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp1_srt

0xb457,	// (0x00045886) tabs_2_active_pane_srt_g1

0xb45f,	// (0x0004588e) tabs_2_active_pane_srt_t1_ParamLimits

0xb45f,	// (0x0004588e) tabs_2_active_pane_srt_t1

0xb445,	// (0x00045874) bg_active_tab_pane_g1_cp1_srt

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp1_srt

0xb44e,	// (0x0004587d) bg_active_tab_pane_g3_cp1_srt

0x6db8,	// (0x000411e7) tabs_3_active_pane_srt_ParamLimits

0x6db8,	// (0x000411e7) tabs_3_active_pane_srt

0x6dc9,	// (0x000411f8) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dc9,	// (0x000411f8) tabs_3_passive_pane_cp_srt

0x6dda,	// (0x00041209) tabs_3_passive_pane_srt_ParamLimits

0x6dda,	// (0x00041209) tabs_3_passive_pane_srt

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97f0,	// (0x00043c1f) bg_passive_tab_pane_cp2_srt

0x9655,	// (0x00043a84) bg_passive_tab_pane_g1_cp2_srt

0x90e3,	// (0x00043512) bg_passive_tab_pane_g2_cp2_srt

0x965e,	// (0x00043a8d) bg_passive_tab_pane_g3_cp2_srt

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f9b,	// (0x000423ca) bg_active_tab_pane_cp2_srt

0xb42b,	// (0x0004585a) tabs_3_active_pane_srt_g1

0xb433,	// (0x00045862) tabs_3_active_pane_srt_t1_ParamLimits

0xb433,	// (0x00045862) tabs_3_active_pane_srt_t1

0x9655,	// (0x00043a84) bg_active_tab_pane_g1_cp2_srt

0x90e3,	// (0x00043512) bg_active_tab_pane_g2_cp2_srt

0x965e,	// (0x00043a8d) bg_active_tab_pane_g3_cp2_srt

0x6d70,	// (0x0004119f) tabs_4_active_pane_srt_ParamLimits

0x6d70,	// (0x0004119f) tabs_4_active_pane_srt

0x6d82,	// (0x000411b1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d82,	// (0x000411b1) tabs_4_passive_pane_cp2_srt

0x638d,	// (0x000407bc) aid_size_cell_toolbar

0x89eb,	// (0x00042e1a) main_idle_act_pane_ParamLimits

0x654a,	// (0x00040979) popup_large_graphic_colour_window_ParamLimits

0x68b1,	// (0x00040ce0) popup_toolbar_window_ParamLimits

0x68b1,	// (0x00040ce0) popup_toolbar_window

0xb293,	// (0x000456c2) list_single_graphic_2heading_pane_ParamLimits

0xb293,	// (0x000456c2) list_single_graphic_2heading_pane

0x8ba7,	// (0x00042fd6) aid_size_cell_apps_grid_lsc_pane

0x8bb9,	// (0x00042fe8) aid_size_cell_apps_grid_prt_pane

0x97f0,	// (0x00043c1f) bg_wml_button_pane_cp1_ParamLimits

0x97f0,	// (0x00043c1f) bg_wml_button_pane_cp1

0x9f9e,	// (0x000443cd) form_midp_field_text_pane_t1_ParamLimits

0x9d6e,	// (0x0004419d) input_focus_pane_cp050_ParamLimits

0x9fd5,	// (0x00044404) list_midp_form_text_pane_ParamLimits

0x9f7b,	// (0x000443aa) input_focus_pane_cp051_ParamLimits

0x9f8f,	// (0x000443be) list_midp_choice_pane_ParamLimits

0x9e27,	// (0x00044256) list_single_2graphic_pane_cp3_ParamLimits

0x9e27,	// (0x00044256) list_single_2graphic_pane_cp3

0x9e48,	// (0x00044277) list_single_midp_graphic_pane_ParamLimits

0x9e48,	// (0x00044277) list_single_midp_graphic_pane

0x5023,	// (0x0003f452) list_single_graphic_2heading_pane_g1_ParamLimits

0x5023,	// (0x0003f452) list_single_graphic_2heading_pane_g1

0x502f,	// (0x0003f45e) list_single_graphic_2heading_pane_g4_ParamLimits

0x502f,	// (0x0003f45e) list_single_graphic_2heading_pane_g4

0x503b,	// (0x0003f46a) list_single_graphic_2heading_pane_g5_ParamLimits

0x503b,	// (0x0003f46a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049be4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049be4) list_single_graphic_2heading_pane_g

0x5047,	// (0x0003f476) list_single_graphic_2heading_pane_t1_ParamLimits

0x5047,	// (0x0003f476) list_single_graphic_2heading_pane_t1

0x505b,	// (0x0003f48a) list_single_graphic_2heading_pane_t2_ParamLimits

0x505b,	// (0x0003f48a) list_single_graphic_2heading_pane_t2

0x5077,	// (0x0003f4a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x5077,	// (0x0003f4a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049beb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049beb) list_single_graphic_2heading_pane_t

0x9c38,	// (0x00044067) bg_popup_sub_pane_cp2

0x9c62,	// (0x00044091) grid_toobar_pane

0x695e,	// (0x00040d8d) cell_toolbar_pane_ParamLimits

0x695e,	// (0x00040d8d) cell_toolbar_pane

0x9c9e,	// (0x000440cd) cell_toolbar_pane_g1_ParamLimits

0x9c9e,	// (0x000440cd) cell_toolbar_pane_g1

0x9cb2,	// (0x000440e1) cell_toolbar_pane_g2_ParamLimits

0x9cb2,	// (0x000440e1) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00049bf9) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00049bf9) cell_toolbar_pane_g

0x9cd4,	// (0x00044103) grid_highlight_pane_cp2_ParamLimits

0x9cd4,	// (0x00044103) grid_highlight_pane_cp2

0x9cee,	// (0x0004411d) toolbar_button_pane

0x9cfa,	// (0x00044129) toolbar_button_pane_g1

0x9d02,	// (0x00044131) toolbar_button_pane_g2

0x9d0a,	// (0x00044139) toolbar_button_pane_g3

0x9d12,	// (0x00044141) toolbar_button_pane_g4

0x9d1a,	// (0x00044149) toolbar_button_pane_g5

0x9d22,	// (0x00044151) toolbar_button_pane_g6

0x9d2a,	// (0x00044159) toolbar_button_pane_g7

0x9d32,	// (0x00044161) toolbar_button_pane_g8

0x9d3a,	// (0x00044169) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00049bfe) toolbar_button_pane_g

0x69a2,	// (0x00040dd1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69a2,	// (0x00040dd1) list_single_2graphic_pane_g1_cp3

0x69ae,	// (0x00040ddd) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69ae,	// (0x00040ddd) list_single_2graphic_pane_g2_cp3

0x69bf,	// (0x00040dee) list_single_2graphic_pane_g3_cp3

0x6039,	// (0x00040468) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6039,	// (0x00040468) list_single_2graphic_pane_g4_cp3

0x69c7,	// (0x00040df6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69c7,	// (0x00040df6) list_single_2graphic_pane_t1_cp3

0xa10e,	// (0x0004453d) list_single_midp_graphic_pane_g2_ParamLimits

0xa10e,	// (0x0004453d) list_single_midp_graphic_pane_g2

0x5013,	// (0x0003f442) aid_zoom_text_primary

0x6395,	// (0x000407c4) aid_zoom_text_secondary

0x970f,	// (0x00043b3e) status_small_pane_g7_ParamLimits

0x970f,	// (0x00043b3e) status_small_pane_g7

0x9732,	// (0x00043b61) status_small_pane_t1_ParamLimits

0x7ed2,	// (0x00042301) title_pane_g2

0x0003,

0xf54e,	// (0x0004997d) title_pane_g

0x8419,	// (0x00042848) aid_size_cell_colour_1_pane_ParamLimits

0x8419,	// (0x00042848) aid_size_cell_colour_1_pane

0x842d,	// (0x0004285c) aid_size_cell_colour_2_pane_ParamLimits

0x842d,	// (0x0004285c) aid_size_cell_colour_2_pane

0x8441,	// (0x00042870) aid_size_cell_colour_3_pane_ParamLimits

0x8441,	// (0x00042870) aid_size_cell_colour_3_pane

0x8455,	// (0x00042884) aid_size_cell_colour_4_pane_ParamLimits

0x8455,	// (0x00042884) aid_size_cell_colour_4_pane

0x5dc7,	// (0x000401f6) title_pane_stacon_g1_ParamLimits

0x5dc7,	// (0x000401f6) title_pane_stacon_g1

0xa3a7,	// (0x000447d6) popup_note_wait_window_g3_ParamLimits

0xa3a7,	// (0x000447d6) popup_note_wait_window_g3

0xa41d,	// (0x0004484c) popup_note_wait_window_t5_ParamLimits

0xa41d,	// (0x0004484c) popup_note_wait_window_t5

0x7ebb,	// (0x000422ea) main_feb_china_hwr_fs_writing_pane

0x642d,	// (0x0004085c) popup_feb_china_hwr_fs_window_ParamLimits

0x642d,	// (0x0004085c) popup_feb_china_hwr_fs_window

0x6a11,	// (0x00040e40) aid_size_cell_hwr_fs_ParamLimits

0x6a11,	// (0x00040e40) aid_size_cell_hwr_fs

0x9d6e,	// (0x0004419d) bg_popup_sub_pane_cp3_ParamLimits

0x9d6e,	// (0x0004419d) bg_popup_sub_pane_cp3

0x6a26,	// (0x00040e55) grid_hwr_fs_pane_ParamLimits

0x6a26,	// (0x00040e55) grid_hwr_fs_pane

0x6a3e,	// (0x00040e6d) linegrid_hwr_fs_pane_ParamLimits

0x6a3e,	// (0x00040e6d) linegrid_hwr_fs_pane

0x6a4e,	// (0x00040e7d) cell_hwr_fs_pane_ParamLimits

0x6a4e,	// (0x00040e7d) cell_hwr_fs_pane

0x9d7a,	// (0x000441a9) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d7a,	// (0x000441a9) linegrid_hwr_fs_pane_g1

0x9d86,	// (0x000441b5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d86,	// (0x000441b5) linegrid_hwr_fs_pane_g2

0x9d98,	// (0x000441c7) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d98,	// (0x000441c7) linegrid_hwr_fs_pane_g3

0x6a70,	// (0x00040e9f) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a70,	// (0x00040e9f) linegrid_hwr_fs_pane_g4

0x6a8a,	// (0x00040eb9) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a8a,	// (0x00040eb9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00049c29) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00049c29) linegrid_hwr_fs_pane_g

0x9da4,	// (0x000441d3) cell_hwr_fs_pane_g1_ParamLimits

0x9da4,	// (0x000441d3) cell_hwr_fs_pane_g1

0x9b6f,	// (0x00043f9e) cell_hwr_fs_pane_g2_ParamLimits

0x9b6f,	// (0x00043f9e) cell_hwr_fs_pane_g2

0x9dba,	// (0x000441e9) cell_hwr_fs_pane_g3_ParamLimits

0x9dba,	// (0x000441e9) cell_hwr_fs_pane_g3

0x9dc7,	// (0x000441f6) cell_hwr_fs_pane_g4_ParamLimits

0x9dc7,	// (0x000441f6) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00049c34) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00049c34) cell_hwr_fs_pane_g

0x6aa0,	// (0x00040ecf) cell_hwr_fs_pane_t1

0x7ebb,	// (0x000422ea) grid_highlight_pane_cp6

0x7ebb,	// (0x000422ea) main_idle_act2_pane

0x895e,	// (0x00042d8d) aid_inside_area_popup_secondary

0xaa54,	// (0x00044e83) aid_inside_area_window_primary_ParamLimits

0xaa54,	// (0x00044e83) aid_inside_area_window_primary

0xb592,	// (0x000459c1) ai2_news_ticker_pane

0xb59a,	// (0x000459c9) aid_size_cell_ai1_link_ParamLimits

0xb59a,	// (0x000459c9) aid_size_cell_ai1_link

0xb5b4,	// (0x000459e3) popup_ai2_data_window_ParamLimits

0xb5b4,	// (0x000459e3) popup_ai2_data_window

0xb5ca,	// (0x000459f9) popup_ai2_link_window_ParamLimits

0xb5ca,	// (0x000459f9) popup_ai2_link_window

0x9d6e,	// (0x0004419d) bg_popup_sub_pane_cp4_ParamLimits

0x9d6e,	// (0x0004419d) bg_popup_sub_pane_cp4

0xb5de,	// (0x00045a0d) grid_ai2_link_pane_ParamLimits

0xb5de,	// (0x00045a0d) grid_ai2_link_pane

0xb5f5,	// (0x00045a24) popup_ai2_link_window_g1_ParamLimits

0xb5f5,	// (0x00045a24) popup_ai2_link_window_g1

0xb601,	// (0x00045a30) popup_ai2_link_window_g2_ParamLimits

0xb601,	// (0x00045a30) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00049e07) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00049e07) popup_ai2_link_window_g

0xb610,	// (0x00045a3f) ai2_mp_button_pane

0xb618,	// (0x00045a47) ai2_mp_volume_pane

0x9f7b,	// (0x000443aa) bg_popup_sub_pane_cp5_ParamLimits

0x9f7b,	// (0x000443aa) bg_popup_sub_pane_cp5

0xb620,	// (0x00045a4f) heading_ai2_gene_pane_ParamLimits

0xb620,	// (0x00045a4f) heading_ai2_gene_pane

0xb62c,	// (0x00045a5b) list_ai2_gene_pane_ParamLimits

0xb62c,	// (0x00045a5b) list_ai2_gene_pane

0xb674,	// (0x00045aa3) cell_ai2_link_pane_ParamLimits

0xb674,	// (0x00045aa3) cell_ai2_link_pane

0xb68a,	// (0x00045ab9) cell_ai2_link_pane_g1

0x7ebb,	// (0x000422ea) grid_highlight_pane_cp7

0x6e28,	// (0x00041257) ai2_mp_volume_pane_g1

0xb75a,	// (0x00045b89) ai2_mp_volume_pane_g2

0xb6cf,	// (0x00045afe) list_ai2_gene_pane_t1

0xb762,	// (0x00045b91) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00049e20) ai2_mp_volume_pane_g

0x6e30,	// (0x0004125f) volume_small_pane_cp3

0xb76a,	// (0x00045b99) aid_size_cell_ai2_button

0xb772,	// (0x00045ba1) grid_ai2_button_pane

0xb77b,	// (0x00045baa) cell_ai2_button_pane_ParamLimits

0xb77b,	// (0x00045baa) cell_ai2_button_pane

0x7eb1,	// (0x000422e0) cell_ai2_button_pane_g1

0x7ebb,	// (0x000422ea) grid_highlight_pane_cp8

0xb71a,	// (0x00045b49) ai2_gene_pane_t1_ParamLimits

0xb71a,	// (0x00045b49) ai2_gene_pane_t1

0x6383,	// (0x000407b2) aid_height_parent_landscape

0xb0ca,	// (0x000454f9) aid_height_set_list

0xb0db,	// (0x0004550a) aid_size_parent

0xb3b5,	// (0x000457e4) aid_size_cell_graphic_pane_ParamLimits

0xb63c,	// (0x00045a6b) popup_ai2_data_window_g1_ParamLimits

0xb63c,	// (0x00045a6b) popup_ai2_data_window_g1

0xb648,	// (0x00045a77) ai2_news_ticker_pane_g1

0xb650,	// (0x00045a7f) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00049e0c) ai2_news_ticker_pane_g

0xb658,	// (0x00045a87) ai2_news_ticker_pane_t1

0xb666,	// (0x00045a95) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00049e11) ai2_news_ticker_pane_t

0xb693,	// (0x00045ac2) heading_ai2_gene_pane_g1

0xb69b,	// (0x00045aca) heading_ai2_gene_pane_t1_ParamLimits

0xb69b,	// (0x00045aca) heading_ai2_gene_pane_t1

0xb6b0,	// (0x00045adf) list_highlight_pane_cp6

0xb6b8,	// (0x00045ae7) ai2_gene_pane_ParamLimits

0xb6b8,	// (0x00045ae7) ai2_gene_pane

0xb6dd,	// (0x00045b0c) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00049e16) list_ai2_gene_pane_t

0xb6eb,	// (0x00045b1a) list_highlight_pane_cp8_ParamLimits

0xb6eb,	// (0x00045b1a) list_highlight_pane_cp8

0xb6fc,	// (0x00045b2b) ai2_gene_pane_g1_ParamLimits

0xb6fc,	// (0x00045b2b) ai2_gene_pane_g1

0xb70e,	// (0x00045b3d) ai2_gene_pane_g2_ParamLimits

0xb70e,	// (0x00045b3d) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00049e1b) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00049e1b) ai2_gene_pane_g

0x87a0,	// (0x00042bcf) scroll_pane_cp12

0x6340,	// (0x0004076f) control_pane_t3_ParamLimits

0x6340,	// (0x0004076f) control_pane_t3

0x9723,	// (0x00043b52) status_small_pane_g8_ParamLimits

0x9723,	// (0x00043b52) status_small_pane_g8

0x6513,	// (0x00040942) popup_find_window_ParamLimits

0x6728,	// (0x00040b57) popup_note_image_window_ParamLimits

0x508f,	// (0x0003f4be) list_double2_graphic_pane_vc_g1_ParamLimits

0x508f,	// (0x0003f4be) list_double2_graphic_pane_vc_g1

0x93da,	// (0x00043809) list_double2_graphic_pane_vc_g2_ParamLimits

0x93da,	// (0x00043809) list_double2_graphic_pane_vc_g2

0x698e,	// (0x00040dbd) list_double2_graphic_pane_vc_g3_ParamLimits

0x698e,	// (0x00040dbd) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049bf2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049bf2) list_double2_graphic_pane_vc_g

0x509b,	// (0x0003f4ca) list_double2_graphic_pane_vc_t1_ParamLimits

0x509b,	// (0x0003f4ca) list_double2_graphic_pane_vc_t1

0x93da,	// (0x00043809) list_single_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_single_heading_pane_vc_g1

0x698e,	// (0x00040dbd) list_single_heading_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_single_heading_pane_vc_g

0x50b1,	// (0x0003f4e0) list_single_heading_pane_vc_t1_ParamLimits

0x50b1,	// (0x0003f4e0) list_single_heading_pane_vc_t1

0x50c7,	// (0x0003f4f6) list_single_heading_pane_vc_t2_ParamLimits

0x50c7,	// (0x0003f4f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00049c18) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00049c18) list_single_heading_pane_vc_t

0x69f9,	// (0x00040e28) list_setting_number_pane_vc_g1_ParamLimits

0x69f9,	// (0x00040e28) list_setting_number_pane_vc_g1

0x6a05,	// (0x00040e34) list_setting_number_pane_vc_g2_ParamLimits

0x6a05,	// (0x00040e34) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049c1d) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049c1d) list_setting_number_pane_vc_g

0x50d9,	// (0x0003f508) list_setting_number_pane_vc_t1_ParamLimits

0x50d9,	// (0x0003f508) list_setting_number_pane_vc_t1

0x50ed,	// (0x0003f51c) list_setting_number_pane_vc_t2_ParamLimits

0x50ed,	// (0x0003f51c) list_setting_number_pane_vc_t2

0x5109,	// (0x0003f538) list_setting_number_pane_vc_t3_ParamLimits

0x5109,	// (0x0003f538) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00049c22) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00049c22) list_setting_number_pane_vc_t

0x5135,	// (0x0003f564) set_value_pane_vc_ParamLimits

0x5135,	// (0x0003f564) set_value_pane_vc

0xb293,	// (0x000456c2) list_double2_graphic_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double2_graphic_pane_vc

0x51ec,	// (0x0003f61b) list_double2_large_graphic_pane_vc_ParamLimits

0x51ec,	// (0x0003f61b) list_double2_large_graphic_pane_vc

0xb293,	// (0x000456c2) list_double2_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double2_pane_vc

0xb293,	// (0x000456c2) list_double_graphic_heading_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_graphic_heading_pane_vc

0xb293,	// (0x000456c2) list_double_graphic_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_graphic_pane_vc

0xb293,	// (0x000456c2) list_double_heading_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_heading_pane_vc

0x51fd,	// (0x0003f62c) list_double_large_graphic_pane_vc_ParamLimits

0x51fd,	// (0x0003f62c) list_double_large_graphic_pane_vc

0xb293,	// (0x000456c2) list_double_number_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_number_pane_vc

0xb293,	// (0x000456c2) list_double_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_pane_vc

0xb293,	// (0x000456c2) list_double_time_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_double_time_pane_vc

0xb293,	// (0x000456c2) list_setting_number_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_setting_number_pane_vc

0xb293,	// (0x000456c2) list_setting_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_setting_pane_vc

0xb293,	// (0x000456c2) list_single_graphic_heading_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_single_graphic_heading_pane_vc

0xb293,	// (0x000456c2) list_single_heading_pane_vc_ParamLimits

0xb293,	// (0x000456c2) list_single_heading_pane_vc

0x6cf5,	// (0x00041124) list_single_number_heading_pane_vc_ParamLimits

0x6cf5,	// (0x00041124) list_single_number_heading_pane_vc

0x508f,	// (0x0003f4be) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x508f,	// (0x0003f4be) list_double_graphic_heading_pane_vc_g1

0x93da,	// (0x00043809) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93da,	// (0x00043809) list_double_graphic_heading_pane_vc_g2

0x698e,	// (0x00040dbd) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x698e,	// (0x00040dbd) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049bf2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049bf2) list_double_graphic_heading_pane_vc_g

0x524c,	// (0x0003f67b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x524c,	// (0x0003f67b) list_double_graphic_heading_pane_vc_t1

0x5268,	// (0x0003f697) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5268,	// (0x0003f697) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00049e27) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00049e27) list_double_graphic_heading_pane_vc_t

0x69f9,	// (0x00040e28) list_setting_pane_vc_g1_ParamLimits

0x69f9,	// (0x00040e28) list_setting_pane_vc_g1

0x6a05,	// (0x00040e34) list_setting_pane_vc_g2_ParamLimits

0x6a05,	// (0x00040e34) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049c1d) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049c1d) list_setting_pane_vc_g

0x5286,	// (0x0003f6b5) list_setting_pane_vc_t1_ParamLimits

0x5286,	// (0x0003f6b5) list_setting_pane_vc_t1

0x52a2,	// (0x0003f6d1) list_setting_pane_vc_t2_ParamLimits

0x52a2,	// (0x0003f6d1) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x00049e55) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x00049e55) list_setting_pane_vc_t

0x5135,	// (0x0003f564) set_value_pane_cp_vc_ParamLimits

0x5135,	// (0x0003f564) set_value_pane_cp_vc

0x93da,	// (0x00043809) list_single_number_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_single_number_heading_pane_vc_g1

0x698e,	// (0x00040dbd) list_single_number_heading_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_single_number_heading_pane_vc_g

0x52be,	// (0x0003f6ed) list_single_number_heading_pane_vc_t1_ParamLimits

0x52be,	// (0x0003f6ed) list_single_number_heading_pane_vc_t1

0x52d4,	// (0x0003f703) list_single_number_heading_pane_vc_t2_ParamLimits

0x52d4,	// (0x0003f703) list_single_number_heading_pane_vc_t2

0x52e6,	// (0x0003f715) list_single_number_heading_pane_vc_t3_ParamLimits

0x52e6,	// (0x0003f715) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x00049e5a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x00049e5a) list_single_number_heading_pane_vc_t

0x508f,	// (0x0003f4be) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x508f,	// (0x0003f4be) list_single_graphic_heading_pane_vc_g1

0x93da,	// (0x00043809) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93da,	// (0x00043809) list_single_graphic_heading_pane_vc_g4

0x698e,	// (0x00040dbd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x698e,	// (0x00040dbd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00049bf2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049bf2) list_single_graphic_heading_pane_vc_g

0x52be,	// (0x0003f6ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x52be,	// (0x0003f6ed) list_single_graphic_heading_pane_vc_t1

0x52f8,	// (0x0003f727) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52f8,	// (0x0003f727) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x00049e61) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00049e61) list_single_graphic_heading_pane_vc_t

0x93da,	// (0x00043809) list_double2_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_double2_pane_vc_g1

0x698e,	// (0x00040dbd) list_double2_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_double2_pane_vc_g

0x530a,	// (0x0003f739) list_double2_pane_vc_t1_ParamLimits

0x530a,	// (0x0003f739) list_double2_pane_vc_t1

0x5320,	// (0x0003f74f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5320,	// (0x0003f74f) list_double2_large_graphic_pane_vc_g1

0x532c,	// (0x0003f75b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x532c,	// (0x0003f75b) list_double2_large_graphic_pane_vc_g2

0x5338,	// (0x0003f767) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5338,	// (0x0003f767) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x00049e66) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x00049e66) list_double2_large_graphic_pane_vc_g

0x5344,	// (0x0003f773) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5344,	// (0x0003f773) list_double2_large_graphic_pane_vc_t1

0x6e39,	// (0x00041268) list_double_time_pane_vc_g1_ParamLimits

0x6e39,	// (0x00041268) list_double_time_pane_vc_g1

0x6e45,	// (0x00041274) list_double_time_pane_vc_g2_ParamLimits

0x6e45,	// (0x00041274) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x00049e6d) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x00049e6d) list_double_time_pane_vc_g

0x535a,	// (0x0003f789) list_double_time_pane_vc_t1_ParamLimits

0x535a,	// (0x0003f789) list_double_time_pane_vc_t1

0x537e,	// (0x0003f7ad) list_double_time_pane_vc_t2_ParamLimits

0x537e,	// (0x0003f7ad) list_double_time_pane_vc_t2

0x53cd,	// (0x0003f7fc) list_double_time_pane_vc_t3_ParamLimits

0x53cd,	// (0x0003f7fc) list_double_time_pane_vc_t3

0x53df,	// (0x0003f80e) list_double_time_pane_vc_t4_ParamLimits

0x53df,	// (0x0003f80e) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x00049e72) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x00049e72) list_double_time_pane_vc_t

0x93da,	// (0x00043809) list_double_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_double_pane_vc_g1

0x698e,	// (0x00040dbd) list_double_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_double_pane_vc_g

0x53f3,	// (0x0003f822) list_double_pane_vc_t1_ParamLimits

0x53f3,	// (0x0003f822) list_double_pane_vc_t1

0x5407,	// (0x0003f836) list_double_pane_vc_t2_ParamLimits

0x5407,	// (0x0003f836) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x00049e7b) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x00049e7b) list_double_pane_vc_t

0x93da,	// (0x00043809) list_double_number_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_double_number_pane_vc_g1

0x698e,	// (0x00040dbd) list_double_number_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_double_number_pane_vc_g

0x541f,	// (0x0003f84e) list_double_number_pane_vc_t1_ParamLimits

0x541f,	// (0x0003f84e) list_double_number_pane_vc_t1

0x5431,	// (0x0003f860) list_double_number_pane_vc_t2_ParamLimits

0x5431,	// (0x0003f860) list_double_number_pane_vc_t2

0x5445,	// (0x0003f874) list_double_number_pane_vc_t3_ParamLimits

0x5445,	// (0x0003f874) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x00049e80) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x00049e80) list_double_number_pane_vc_t

0x545d,	// (0x0003f88c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x545d,	// (0x0003f88c) list_double_large_graphic_pane_vc_g1

0x547f,	// (0x0003f8ae) list_double_large_graphic_pane_vc_g2_ParamLimits

0x547f,	// (0x0003f8ae) list_double_large_graphic_pane_vc_g2

0x5493,	// (0x0003f8c2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5493,	// (0x0003f8c2) list_double_large_graphic_pane_vc_g3

0x54a2,	// (0x0003f8d1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54a2,	// (0x0003f8d1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x00049e87) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x00049e87) list_double_large_graphic_pane_vc_g

0x54ae,	// (0x0003f8dd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54ae,	// (0x0003f8dd) list_double_large_graphic_pane_vc_t1

0x54ca,	// (0x0003f8f9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54ca,	// (0x0003f8f9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x00049e90) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x00049e90) list_double_large_graphic_pane_vc_t

0x93da,	// (0x00043809) list_double_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x00043809) list_double_heading_pane_vc_g1

0x698e,	// (0x00040dbd) list_double_heading_pane_vc_g2_ParamLimits

0x698e,	// (0x00040dbd) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049c13) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049c13) list_double_heading_pane_vc_g

0x54ec,	// (0x0003f91b) list_double_heading_pane_vc_t1_ParamLimits

0x54ec,	// (0x0003f91b) list_double_heading_pane_vc_t1

0x5500,	// (0x0003f92f) list_double_heading_pane_vc_t2_ParamLimits

0x5500,	// (0x0003f92f) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x00049e95) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x00049e95) list_double_heading_pane_vc_t

0x5518,	// (0x0003f947) list_double_graphic_pane_vc_g1_ParamLimits

0x5518,	// (0x0003f947) list_double_graphic_pane_vc_g1

0x6e51,	// (0x00041280) list_double_graphic_pane_vc_g2_ParamLimits

0x6e51,	// (0x00041280) list_double_graphic_pane_vc_g2

0x93da,	// (0x00043809) list_double_graphic_pane_vc_g3_ParamLimits

0x93da,	// (0x00043809) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x00049e9a) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00049e9a) list_double_graphic_pane_vc_g

0x5524,	// (0x0003f953) list_double_graphic_pane_vc_t1_ParamLimits

0x5524,	// (0x0003f953) list_double_graphic_pane_vc_t1

0x554e,	// (0x0003f97d) list_double_graphic_pane_vc_t2_ParamLimits

0x554e,	// (0x0003f97d) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00049ea3) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00049ea3) list_double_graphic_pane_vc_t

0x5878,	// (0x0003fca7) aid_size_cell_fastswap

0x5880,	// (0x0003fcaf) aid_size_cell_touch_ParamLimits

0x5880,	// (0x0003fcaf) aid_size_cell_touch

0x5adb,	// (0x0003ff0a) popup_fast_swap_wide_window_ParamLimits

0x5adb,	// (0x0003ff0a) popup_fast_swap_wide_window

0x5bef,	// (0x0004001e) touch_pane_ParamLimits

0x5bef,	// (0x0004001e) touch_pane

0x8802,	// (0x00042c31) button_value_adjust_pane_cp2

0x4d3a,	// (0x0003f169) button_value_adjust_pane_cp4

0x4d5e,	// (0x0003f18d) form_field_data_pane_cp2

0x4d7f,	// (0x0003f1ae) form_field_data_wide_pane_cp2

0x8c78,	// (0x000430a7) bg_scroll_pane_ParamLimits

0x5f29,	// (0x00040358) scroll_handle_pane_ParamLimits

0x5f3d,	// (0x0004036c) scroll_sc2_down_pane_ParamLimits

0x5f3d,	// (0x0004036c) scroll_sc2_down_pane

0x8ca9,	// (0x000430d8) scroll_sc2_up_pane_ParamLimits

0x8ca9,	// (0x000430d8) scroll_sc2_up_pane

0xbe39,	// (0x00046268) grid_wheel_folder_pane_g1_ParamLimits

0xbe39,	// (0x00046268) grid_wheel_folder_pane_g1

0x611e,	// (0x0004054d) clock_nsta_pane_cp2_ParamLimits

0x611e,	// (0x0004054d) clock_nsta_pane_cp2

0x94a9,	// (0x000438d8) listscroll_midp_pane_ParamLimits

0x94b5,	// (0x000438e4) midp_canvas_pane

0x979d,	// (0x00043bcc) nsta_clock_indic_pane

0x97d6,	// (0x00043c05) listscroll_form_pane_vc

0x97de,	// (0x00043c0d) listscroll_set_pane_vc_ParamLimits

0x97de,	// (0x00043c0d) listscroll_set_pane_vc

0x98e3,	// (0x00043d12) clock_nsta_pane

0x9958,	// (0x00043d87) indicator_nsta_pane

0x9c38,	// (0x00044067) bg_popup_sub_pane_cp2_ParamLimits

0x9c4c,	// (0x0004407b) find_pane_cp2_ParamLimits

0x9c4c,	// (0x0004407b) find_pane_cp2

0x9c62,	// (0x00044091) grid_toobar_pane_ParamLimits

0x9d42,	// (0x00044171) list_form_gen_pane_vc_ParamLimits

0x9d42,	// (0x00044171) list_form_gen_pane_vc

0x9d58,	// (0x00044187) scroll_pane_cp8_vc_ParamLimits

0x9d58,	// (0x00044187) scroll_pane_cp8_vc

0x9dd4,	// (0x00044203) data_form_wide_pane_vc_ParamLimits

0x9dd4,	// (0x00044203) data_form_wide_pane_vc

0x9de0,	// (0x0004420f) form_field_data_wide_pane_vc_g1

0x9de8,	// (0x00044217) form_field_data_wide_pane_vc_t1_ParamLimits

0x9de8,	// (0x00044217) form_field_data_wide_pane_vc_t1

0x8816,	// (0x00042c45) input_focus_pane_cp6_vc_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_cp6_vc

0xa11a,	// (0x00044549) list_midp_pane_ParamLimits

0xa126,	// (0x00044555) scroll_pane_cp16_ParamLimits

0xa126,	// (0x00044555) scroll_pane_cp16

0xa17c,	// (0x000445ab) button_value_adjust_pane_ParamLimits

0xa17c,	// (0x000445ab) button_value_adjust_pane

0xb0ed,	// (0x0004551c) button_value_adjust_pane_cp6_ParamLimits

0xb0ed,	// (0x0004551c) button_value_adjust_pane_cp6

0xb217,	// (0x00045646) settings_code_pane_cp_ParamLimits

0xb217,	// (0x00045646) settings_code_pane_cp

0x7eb1,	// (0x000422e0) cell_touch_pane_g1

0x7eb1,	// (0x000422e0) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049b37) cell_touch_pane_g

0xb78d,	// (0x00045bbc) cell_touch_pane_cp_ParamLimits

0xb78d,	// (0x00045bbc) cell_touch_pane_cp

0xb79d,	// (0x00045bcc) cell_touch_pane_ParamLimits

0xb79d,	// (0x00045bcc) cell_touch_pane

0x7eb1,	// (0x000422e0) scroll_sc2_down_pane_g1

0x7eb1,	// (0x000422e0) scroll_sc2_up_pane_g1

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp4_vc

0xb7af,	// (0x00045bde) list_set_graphic_pane_vc_g1_ParamLimits

0xb7af,	// (0x00045bde) list_set_graphic_pane_vc_g1

0xb7bb,	// (0x00045bea) list_set_graphic_pane_vc_g2_ParamLimits

0xb7bb,	// (0x00045bea) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00049e2c) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00049e2c) list_set_graphic_pane_vc_g

0xb7c7,	// (0x00045bf6) text_primary_small_cp13_vc_ParamLimits

0xb7c7,	// (0x00045bf6) text_primary_small_cp13_vc

0xb7df,	// (0x00045c0e) list_set_graphic_pane_vc_ParamLimits

0xb7df,	// (0x00045c0e) list_set_graphic_pane_vc

0x7ebb,	// (0x000422ea) input_focus_pane_cp2_vc

0x7eb1,	// (0x000422e0) setting_code_pane_vc_g1

0x7fe6,	// (0x00042415) setting_code_pane_vc_t1

0xb7f1,	// (0x00045c20) set_text_pane_vc_t1_ParamLimits

0xb7f1,	// (0x00045c20) set_text_pane_vc_t1

0x7ebb,	// (0x000422ea) input_focus_pane_cp1_vc

0xb80d,	// (0x00045c3c) list_set_text_pane_vc

0x7eb1,	// (0x000422e0) setting_text_pane_vc_g1

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp2_vc

0x7fdd,	// (0x0004240c) setting_slider_graphic_pane_vc_g1

0xb817,	// (0x00045c46) setting_slider_graphic_pane_vc_t1

0xb827,	// (0x00045c56) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00049e31) setting_slider_graphic_pane_vc_t

0xb837,	// (0x00045c66) slider_set_pane_cp_vc

0xb83f,	// (0x00045c6e) slider_set_pane_vc_g1

0xb848,	// (0x00045c77) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00049e36) slider_set_pane_vc_g

0x8862,	// (0x00042c91) set_opt_bg_pane_g1_copy1

0x886a,	// (0x00042c99) set_opt_bg_pane_g2_copy1

0xb874,	// (0x00045ca3) set_opt_bg_pane_g3_copy1

0x887a,	// (0x00042ca9) set_opt_bg_pane_g4_copy1

0x8882,	// (0x00042cb1) set_opt_bg_pane_g5_copy1

0x888a,	// (0x00042cb9) set_opt_bg_pane_g6_copy1

0xb87e,	// (0x00045cad) set_opt_bg_pane_g7_copy1

0xb886,	// (0x00045cb5) set_opt_bg_pane_g8_copy1

0xb890,	// (0x00045cbf) set_opt_bg_pane_g9_copy1

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp_vc

0xb89a,	// (0x00045cc9) setting_slider_pane_vc_t1

0xb8a9,	// (0x00045cd8) setting_slider_pane_vc_t2

0xb8b9,	// (0x00045ce8) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00049e45) setting_slider_pane_vc_t

0xb8c9,	// (0x00045cf8) slider_set_pane_vc

0x6aae,	// (0x00040edd) volume_set_pane_vc_g1

0x6ab7,	// (0x00040ee6) volume_set_pane_vc_g2

0x6ac0,	// (0x00040eef) volume_set_pane_vc_g3

0x6ac9,	// (0x00040ef8) volume_set_pane_vc_g4

0x6ad2,	// (0x00040f01) volume_set_pane_vc_g5

0x6adb,	// (0x00040f0a) volume_set_pane_vc_g6

0x6ae4,	// (0x00040f13) volume_set_pane_vc_g7

0x6aed,	// (0x00040f1c) volume_set_pane_vc_g8

0x6af6,	// (0x00040f25) volume_set_pane_vc_g9

0x6aff,	// (0x00040f2e) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00049cea) volume_set_pane_vc_g

0xb8d1,	// (0x00045d00) volume_set_pane_vc

0xb8d9,	// (0x00045d08) button_value_adjust_pane_cp1_vc

0xb8e3,	// (0x00045d12) list_highlight_pane_cp2_vc

0xb8ec,	// (0x00045d1b) list_set_pane_vc_ParamLimits

0xb8ec,	// (0x00045d1b) list_set_pane_vc

0xb94a,	// (0x00045d79) main_pane_set_vc_t1_ParamLimits

0xb94a,	// (0x00045d79) main_pane_set_vc_t1

0xb95f,	// (0x00045d8e) main_pane_set_vc_t2_ParamLimits

0xb95f,	// (0x00045d8e) main_pane_set_vc_t2

0xb971,	// (0x00045da0) main_pane_set_vc_t3_ParamLimits

0xb971,	// (0x00045da0) main_pane_set_vc_t3

0xb985,	// (0x00045db4) main_pane_set_vc_t4_ParamLimits

0xb985,	// (0x00045db4) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x00049e4c) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x00049e4c) main_pane_set_vc_t

0xb999,	// (0x00045dc8) setting_code_pane_vc_ParamLimits

0xb999,	// (0x00045dc8) setting_code_pane_vc

0xb9aa,	// (0x00045dd9) setting_slider_graphic_pane_vc

0xb9aa,	// (0x00045dd9) setting_slider_pane_vc

0xb9aa,	// (0x00045dd9) setting_text_pane_vc

0xb9aa,	// (0x00045dd9) setting_volume_pane_vc

0xb9b4,	// (0x00045de3) scroll_pane_cp121_vc

0x87f0,	// (0x00042c1f) set_content_pane_vc

0xb9bc,	// (0x00045deb) button_value_adjust_pane_g1

0xb9c5,	// (0x00045df4) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x00049ea8) button_value_adjust_pane_g

0xb9ce,	// (0x00045dfd) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ce,	// (0x00045dfd) form_field_slider_wide_pane_vc_t1

0xb9e2,	// (0x00045e11) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00045e11) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x00049ead) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00049ead) form_field_slider_wide_pane_vc_t

0x8216,	// (0x00042645) input_focus_pane_cp10_vc_ParamLimits

0x8216,	// (0x00042645) input_focus_pane_cp10_vc

0xba10,	// (0x00045e3f) slider_cont_pane_cp1_vc_ParamLimits

0xba10,	// (0x00045e3f) slider_cont_pane_cp1_vc

0xba22,	// (0x00045e51) slider_form_pane_g1_cp2

0xb848,	// (0x00045c77) slider_form_pane_g2_cp2

0xba4f,	// (0x00045e7e) form_field_slider_pane_vc_t3

0xba5d,	// (0x00045e8c) form_field_slider_pane_vc_t4

0xba6b,	// (0x00045e9a) slider_form_pane_vc_ParamLimits

0xba6b,	// (0x00045e9a) slider_form_pane_vc

0xba78,	// (0x00045ea7) form_field_slider_pane_vc_t1_ParamLimits

0xba78,	// (0x00045ea7) form_field_slider_pane_vc_t1

0xb9e2,	// (0x00045e11) form_field_slider_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00045e11) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x00049ebf) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x00049ebf) form_field_slider_pane_vc_t

0x8216,	// (0x00042645) input_focus_pane_cp9_vc_ParamLimits

0x8216,	// (0x00042645) input_focus_pane_cp9_vc

0xba94,	// (0x00045ec3) slider_cont_pane_vc_ParamLimits

0xba94,	// (0x00045ec3) slider_cont_pane_vc

0xbaa8,	// (0x00045ed7) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa8,	// (0x00045ed7) list_form_graphic_pane_cp_vc

0x9de0,	// (0x0004420f) form_field_popup_wide_pane_vc_g1

0xbabd,	// (0x00045eec) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbabd,	// (0x00045eec) form_field_popup_wide_pane_vc_t1

0x8816,	// (0x00042c45) input_focus_pane_cp8_vc_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_cp8_vc

0xbb02,	// (0x00045f31) list_form_wide_pane_vc_ParamLimits

0xbb02,	// (0x00045f31) list_form_wide_pane_vc

0xbb0e,	// (0x00045f3d) list_form_graphic_pane_vc_g1

0xbb16,	// (0x00045f45) list_form_graphic_pane_vc_t1_ParamLimits

0xbb16,	// (0x00045f45) list_form_graphic_pane_vc_t1

0x7f9b,	// (0x000423ca) list_highlight_pane_cp5_vc_ParamLimits

0x7f9b,	// (0x000423ca) list_highlight_pane_cp5_vc

0xbb32,	// (0x00045f61) list_form_graphic_pane_vc_ParamLimits

0xbb32,	// (0x00045f61) list_form_graphic_pane_vc

0x9de0,	// (0x0004420f) form_field_popup_pane_vc_g1

0xbb48,	// (0x00045f77) form_field_popup_pane_vc_t1_ParamLimits

0xbb48,	// (0x00045f77) form_field_popup_pane_vc_t1

0x8816,	// (0x00042c45) input_focus_pane_cp7_vc_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_cp7_vc

0xbb5f,	// (0x00045f8e) list_form_pane_vc_ParamLimits

0xbb5f,	// (0x00045f8e) list_form_pane_vc

0xbb6b,	// (0x00045f9a) data_form_pane_vc_t1_ParamLimits

0xbb6b,	// (0x00045f9a) data_form_pane_vc_t1

0x8862,	// (0x00042c91) input_focus_pane_vc_g1

0x886a,	// (0x00042c99) input_focus_pane_vc_g2

0x8872,	// (0x00042ca1) input_focus_pane_vc_g3

0x887a,	// (0x00042ca9) input_focus_pane_vc_g4

0x8882,	// (0x00042cb1) input_focus_pane_vc_g5

0x888a,	// (0x00042cb9) input_focus_pane_vc_g6

0x8892,	// (0x00042cc1) input_focus_pane_vc_g7

0x889a,	// (0x00042cc9) input_focus_pane_vc_g8

0x88a2,	// (0x00042cd1) input_focus_pane_vc_g9

0x7eb1,	// (0x000422e0) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00049ac0) input_focus_pane_vc_g

0x9dd4,	// (0x00044203) data_form_pane_vc_ParamLimits

0x9dd4,	// (0x00044203) data_form_pane_vc

0x9de0,	// (0x0004420f) form_field_data_pane_vc_g1

0xbb86,	// (0x00045fb5) form_field_data_pane_vc_t1_ParamLimits

0xbb86,	// (0x00045fb5) form_field_data_pane_vc_t1

0x8816,	// (0x00042c45) input_focus_pane_vc_ParamLimits

0x8816,	// (0x00042c45) input_focus_pane_vc

0xbba0,	// (0x00045fcf) button_value_adjust_pane_cp3_vc

0xbba8,	// (0x00045fd7) button_value_adjust_pane_cp5_vc

0xbbb0,	// (0x00045fdf) form_field_data_pane_vc_ParamLimits

0xbbb0,	// (0x00045fdf) form_field_data_pane_vc

0xbbc7,	// (0x00045ff6) form_field_data_pane_vc_cp2

0xbbcf,	// (0x00045ffe) form_field_data_wide_pane_vc_ParamLimits

0xbbcf,	// (0x00045ffe) form_field_data_wide_pane_vc

0xbbe5,	// (0x00046014) form_field_data_wide_pane_vc_cp2

0xbbed,	// (0x0004601c) form_field_popup_pane_vc_ParamLimits

0xbbed,	// (0x0004601c) form_field_popup_pane_vc

0xbc04,	// (0x00046033) form_field_popup_wide_pane_vc_ParamLimits

0xbc04,	// (0x00046033) form_field_popup_wide_pane_vc

0xbc1a,	// (0x00046049) form_field_slider_pane_vc_ParamLimits

0xbc1a,	// (0x00046049) form_field_slider_pane_vc

0xbc2d,	// (0x0004605c) form_field_slider_wide_pane_vc_ParamLimits

0xbc2d,	// (0x0004605c) form_field_slider_wide_pane_vc

0xbc40,	// (0x0004606f) grid_touch_1_pane_ParamLimits

0xbc40,	// (0x0004606f) grid_touch_1_pane

0xbc4c,	// (0x0004607b) grid_touch_2_pane_ParamLimits

0xbc4c,	// (0x0004607b) grid_touch_2_pane

0x9768,	// (0x00043b97) touch_pane_g1_ParamLimits

0x9768,	// (0x00043b97) touch_pane_g1

0xbc64,	// (0x00046093) cell_app_pane_cp_wide_ParamLimits

0xbc64,	// (0x00046093) cell_app_pane_cp_wide

0xbc75,	// (0x000460a4) grid_popup_fast_wide_pane_ParamLimits

0xbc75,	// (0x000460a4) grid_popup_fast_wide_pane

0xbc89,	// (0x000460b8) scroll_pane_cp19_ParamLimits

0xbc89,	// (0x000460b8) scroll_pane_cp19

0x7ebb,	// (0x000422ea) bg_popup_window_pane_cp20

0xbc9d,	// (0x000460cc) listscroll_popup_fast_wide_pane

0x7f9b,	// (0x000423ca) grid_indicator_nsta_pane

0xbca5,	// (0x000460d4) clock_nsta_pane_g1

0xbcae,	// (0x000460dd) clock_nsta_pane_t1

0xbcca,	// (0x000460f9) cell_indicator_nsta_pane_ParamLimits

0xbcca,	// (0x000460f9) cell_indicator_nsta_pane

0xbcfb,	// (0x0004612a) cell_indicator_nsta_pane_g1

0xbd09,	// (0x00046138) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x00049ed0) cell_indicator_nsta_pane_g

0xbd16,	// (0x00046145) clock_nsta_pane_cp

0xbd1e,	// (0x0004614d) indicator_nsta_pane_cp

0xbd26,	// (0x00046155) nsta_clock_indic_pane_g1

0x8064,	// (0x00042493) grid_indicator_pane

0x8d9e,	// (0x000431cd) scroll_pane_cp29

0x606d,	// (0x0004049c) indicator_nsta_pane_cp2_ParamLimits

0x606d,	// (0x0004049c) indicator_nsta_pane_cp2

0x7f9b,	// (0x000423ca) main_apps_wheel_pane

0x9fef,	// (0x0004441e) form_midp_field_text_pane_ParamLimits

0xa146,	// (0x00044575) scroll_bar_cp050_ParamLimits

0xbd76,	// (0x000461a5) cell_indicator_pane_ParamLimits

0xbd76,	// (0x000461a5) cell_indicator_pane

0xbd8d,	// (0x000461bc) cell_indicator_pane_g1

0xbd97,	// (0x000461c6) grid_wheel_folder_pane_ParamLimits

0xbd97,	// (0x000461c6) grid_wheel_folder_pane

0xbdad,	// (0x000461dc) list_wheel_apps_pane_ParamLimits

0xbdad,	// (0x000461dc) list_wheel_apps_pane

0xbdbe,	// (0x000461ed) main_apps_wheel_pane_g1_ParamLimits

0xbdbe,	// (0x000461ed) main_apps_wheel_pane_g1

0xbdd2,	// (0x00046201) main_apps_wheel_pane_g2_ParamLimits

0xbdd2,	// (0x00046201) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x00049eec) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x00049eec) main_apps_wheel_pane_g

0xbdea,	// (0x00046219) main_apps_wheel_pane_t1_ParamLimits

0xbdea,	// (0x00046219) main_apps_wheel_pane_t1

0xbe0d,	// (0x0004623c) list_wheel_apps_pane_g1

0xbe15,	// (0x00046244) list_wheel_apps_pane_g2

0xbe1d,	// (0x0004624c) list_wheel_apps_pane_g3

0xbe25,	// (0x00046254) list_wheel_apps_pane_g4

0xbe2f,	// (0x0004625e) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x00049ef1) list_wheel_apps_pane_g

0x9321,	// (0x00043750) navi_icon_text_pane

0x9812,	// (0x00043c41) aid_fill_nsta

0xbe52,	// (0x00046281) navi_icon_text_pane_g1

0xbe5e,	// (0x0004628d) navi_icon_text_pane_t1

0x91b4,	// (0x000435e3) list_set_graphic_pane_t1_ParamLimits

0x91b4,	// (0x000435e3) list_set_graphic_pane_t1

0xa89d,	// (0x00044ccc) popup_midp_note_alarm_window_t6_ParamLimits

0xa89d,	// (0x00044ccc) popup_midp_note_alarm_window_t6

0xa8af,	// (0x00044cde) popup_midp_note_alarm_window_t7_ParamLimits

0xa8af,	// (0x00044cde) popup_midp_note_alarm_window_t7

0xa8c1,	// (0x00044cf0) popup_midp_note_alarm_window_t8_ParamLimits

0xa8c1,	// (0x00044cf0) popup_midp_note_alarm_window_t8

0xa8d3,	// (0x00044d02) popup_midp_note_alarm_window_t9_ParamLimits

0xa8d3,	// (0x00044d02) popup_midp_note_alarm_window_t9

0xa8e5,	// (0x00044d14) popup_midp_note_alarm_window_t10_ParamLimits

0xa8e5,	// (0x00044d14) popup_midp_note_alarm_window_t10

0xa8f7,	// (0x00044d26) popup_midp_note_alarm_window_t11_ParamLimits

0xa8f7,	// (0x00044d26) popup_midp_note_alarm_window_t11

0xa909,	// (0x00044d38) scroll_pane_cp17_ParamLimits

0xa909,	// (0x00044d38) scroll_pane_cp17

0x6aae,	// (0x00040edd) volume_small_pane_cp_g1

0x6e6e,	// (0x0004129d) volume_small_pane_cp_g2

0x6e77,	// (0x000412a6) volume_small_pane_cp_g3

0x6e80,	// (0x000412af) volume_small_pane_cp_g4

0x6e89,	// (0x000412b8) volume_small_pane_cp_g5

0x6e92,	// (0x000412c1) volume_small_pane_cp_g6

0x6e9b,	// (0x000412ca) volume_small_pane_cp_g7

0x6ea4,	// (0x000412d3) volume_small_pane_cp_g8

0x6ead,	// (0x000412dc) volume_small_pane_cp_g9

0x6eb6,	// (0x000412e5) volume_small_pane_cp_g10

0x957e,	// (0x000439ad) midp_ticker_pane_g1_ParamLimits

0x958a,	// (0x000439b9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049b8c) midp_ticker_pane_g_ParamLimits

0x9596,	// (0x000439c5) midp_ticker_pane_t1_ParamLimits

0x9828,	// (0x00043c57) aid_fill_nsta_2

0xa132,	// (0x00044561) list_form2_midp_pane

0xb262,	// (0x00045691) midp_editing_number_pane_ParamLimits

0xb271,	// (0x000456a0) midp_ticker_pane_ParamLimits

0xbe70,	// (0x0004629f) form2_midp_field_pane

0xbe94,	// (0x000462c3) scroll_pane_cp51

0xbeb4,	// (0x000462e3) form2_midp_button_pane_ParamLimits

0xbeb4,	// (0x000462e3) form2_midp_button_pane

0xbec6,	// (0x000462f5) form2_midp_content_pane_ParamLimits

0xbec6,	// (0x000462f5) form2_midp_content_pane

0xbee0,	// (0x0004630f) form2_midp_field_choice_group_pane

0xbee8,	// (0x00046317) form2_midp_field_pane_g1

0xbef0,	// (0x0004631f) form2_midp_field_pane_g2

0xbef8,	// (0x00046327) form2_midp_field_pane_g3

0xbf00,	// (0x0004632f) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x00049f16) form2_midp_field_pane_g

0xbf08,	// (0x00046337) form2_midp_gauge_slider_pane

0xbf10,	// (0x0004633f) form2_midp_gauge_wait_pane

0xbf18,	// (0x00046347) form2_midp_image_pane_ParamLimits

0xbf18,	// (0x00046347) form2_midp_image_pane

0xbf33,	// (0x00046362) form2_midp_label_pane_ParamLimits

0xbf33,	// (0x00046362) form2_midp_label_pane

0xbf4c,	// (0x0004637b) form2_midp_label_pane_cp_ParamLimits

0xbf4c,	// (0x0004637b) form2_midp_label_pane_cp

0xbf6d,	// (0x0004639c) form2_midp_string_pane_ParamLimits

0xbf6d,	// (0x0004639c) form2_midp_string_pane

0x5578,	// (0x0003f9a7) form2_midp_text_pane_ParamLimits

0x5578,	// (0x0003f9a7) form2_midp_text_pane

0xbf7f,	// (0x000463ae) form2_midp_time_pane

0xbf8f,	// (0x000463be) input_focus_pane_cp51_ParamLimits

0xbf8f,	// (0x000463be) input_focus_pane_cp51

0xbfa7,	// (0x000463d6) form2_midp_label_pane_t1_ParamLimits

0xbfa7,	// (0x000463d6) form2_midp_label_pane_t1

0x5597,	// (0x0003f9c6) form2_mdip_text_pane_t1_ParamLimits

0x5597,	// (0x0003f9c6) form2_mdip_text_pane_t1

0x55b5,	// (0x0003f9e4) form2_midp_time_pane_t1

0xbff0,	// (0x0004641f) form2_midp_gauge_slider_pane_t1

0xc002,	// (0x00046431) form2_midp_gauge_slider_pane_t2

0xc014,	// (0x00046443) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x00049f1f) form2_midp_gauge_slider_pane_t

0xc026,	// (0x00046455) form2_midp_slider_pane

0xc032,	// (0x00046461) form2_midp_gauge_wait_pane_t1

0xc040,	// (0x0004646f) form2_midp_wait_pane_ParamLimits

0xc040,	// (0x0004646f) form2_midp_wait_pane

0xc06b,	// (0x0004649a) list_single_2graphic_pane_cp4_ParamLimits

0xc06b,	// (0x0004649a) list_single_2graphic_pane_cp4

0x9e48,	// (0x00044277) list_single_midp_graphic_pane_cp_ParamLimits

0x9e48,	// (0x00044277) list_single_midp_graphic_pane_cp

0x7ebb,	// (0x000422ea) list_highlight_pane_cp20

0xc08f,	// (0x000464be) list_single_2graphic_pane_g1_cp4

0xc097,	// (0x000464c6) list_single_2graphic_pane_g2_cp4

0xc09f,	// (0x000464ce) list_single_2graphic_pane_t1_cp4

0x7f9b,	// (0x000423ca) list_highlight_pane_cp21

0xc0ae,	// (0x000464dd) list_single_midp_graphic_pane_g4_cp

0xc0bd,	// (0x000464ec) list_single_midp_graphic_pane_t1_cp

0xc0d2,	// (0x00046501) form2_mdip_string_pane_t1_ParamLimits

0xc0d2,	// (0x00046501) form2_mdip_string_pane_t1

0x7ebb,	// (0x000422ea) bg_wml_button_pane_cp2

0x7eb1,	// (0x000422e0) form2_midp_image_pane_g1

0x5d5f,	// (0x0004018e) list_double_large_graphic_pane_g5_ParamLimits

0x5d5f,	// (0x0004018e) list_double_large_graphic_pane_g5

0x94a9,	// (0x000438d8) midp_form_pane_ParamLimits

0x7f9b,	// (0x000423ca) main_apps_wheel_pane_ParamLimits

0x674e,	// (0x00040b7d) popup_preview_window_ParamLimits

0x674e,	// (0x00040b7d) popup_preview_window

0x6909,	// (0x00040d38) popup_touch_info_window_ParamLimits

0x6909,	// (0x00040d38) popup_touch_info_window

0x6927,	// (0x00040d56) popup_touch_menu_window_ParamLimits

0x6927,	// (0x00040d56) popup_touch_menu_window

0x7ea7,	// (0x000422d6) bg_popup_sub_pane_cp6

0xc1cb,	// (0x000465fa) list_touch_menu_pane

0xc1d3,	// (0x00046602) list_single_touch_menu_pane_ParamLimits

0xc1d3,	// (0x00046602) list_single_touch_menu_pane

0xc1e9,	// (0x00046618) list_single_touch_menu_pane_t1

0x7f9b,	// (0x000423ca) bg_popup_sub_pane_cp7_ParamLimits

0x7f9b,	// (0x000423ca) bg_popup_sub_pane_cp7

0xc1f7,	// (0x00046626) heading_sub_pane

0xc1ff,	// (0x0004662e) list_touch_info_pane_ParamLimits

0xc1ff,	// (0x0004662e) list_touch_info_pane

0xc20e,	// (0x0004663d) list_single_touch_info_pane_ParamLimits

0xc20e,	// (0x0004663d) list_single_touch_info_pane

0xc220,	// (0x0004664f) list_single_touch_info_pane_t1

0xc22e,	// (0x0004665d) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x00049f2d) list_single_touch_info_pane_t

0x94a1,	// (0x000438d0) bg_popup_heading_pane_cp

0xc23c,	// (0x0004666b) heading_sub_pane_t1

0x9d6e,	// (0x0004419d) bg_popup_preview_window_pane_cp_ParamLimits

0x9d6e,	// (0x0004419d) bg_popup_preview_window_pane_cp

0xc1f7,	// (0x00046626) heading_preview_pane

0xc1ff,	// (0x0004662e) list_preview_pane_ParamLimits

0xc1ff,	// (0x0004662e) list_preview_pane

0xc24a,	// (0x00046679) popup_preview_window_g1

0xc20e,	// (0x0004663d) list_single_preview_pane_ParamLimits

0xc20e,	// (0x0004663d) list_single_preview_pane

0xc252,	// (0x00046681) list_single_preview_pane_g1

0xc25a,	// (0x00046689) list_single_preview_pane_t1

0xc220,	// (0x0004664f) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x00049f32) list_single_preview_pane_t

0xc268,	// (0x00046697) bg_popup_heading_pane_cp2_ParamLimits

0xc268,	// (0x00046697) bg_popup_heading_pane_cp2

0xc27e,	// (0x000466ad) heading_preview_pane_g1

0xc286,	// (0x000466b5) heading_preview_pane_t1_ParamLimits

0xc286,	// (0x000466b5) heading_preview_pane_t1

0x8087,	// (0x000424b6) soft_indicator_pane_t1_ParamLimits

0x877d,	// (0x00042bac) scroll_pane_ParamLimits

0x8c97,	// (0x000430c6) scroll_sc2_left_pane

0x8ca0,	// (0x000430cf) scroll_sc2_right_pane

0x8cbf,	// (0x000430ee) scroll_bg_pane_g1_ParamLimits

0x8cd4,	// (0x00043103) scroll_bg_pane_g2_ParamLimits

0x8cec,	// (0x0004311b) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049b17) scroll_bg_pane_g_ParamLimits

0x8cbf,	// (0x000430ee) scroll_handle_pane_g1_ParamLimits

0x8d0e,	// (0x0004313d) scroll_handle_pane_g2_ParamLimits

0x8cec,	// (0x0004311b) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049b1e) scroll_handle_pane_g_ParamLimits

0x63cf,	// (0x000407fe) popup_choice_list_window_ParamLimits

0x63cf,	// (0x000407fe) popup_choice_list_window

0x9c44,	// (0x00044073) choice_list_pane

0x9cc6,	// (0x000440f5) cell_toolbar_pane_t1

0x9cee,	// (0x0004411d) toolbar_button_pane_ParamLimits

0xadc3,	// (0x000451f2) ai_gene_pane_1_t2_ParamLimits

0xadc3,	// (0x000451f2) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00049d46) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00049d46) ai_gene_pane_1_t

0xc2a3,	// (0x000466d2) scroll_sc2_left_pane_g1

0xc2a3,	// (0x000466d2) scroll_sc2_right_pane_g1

0x97f0,	// (0x00043c1f) bg_popup_sub_pane_cp10

0xc2ad,	// (0x000466dc) list_choice_list_pane

0xc2d2,	// (0x00046701) list_single_choice_list_pane_ParamLimits

0xc2d2,	// (0x00046701) list_single_choice_list_pane

0xc2e5,	// (0x00046714) list_single_choice_list_pane_g1

0x899b,	// (0x00042dca) list_single_choice_list_pane_t1_ParamLimits

0x899b,	// (0x00042dca) list_single_choice_list_pane_t1

0xc2ed,	// (0x0004671c) choice_list_pane_g1

0xc2f5,	// (0x00046724) choice_list_pane_t1

0x7ea7,	// (0x000422d6) input_focus_pane_cp11

0x8b72,	// (0x00042fa1) title_pane_stacon_g2_ParamLimits

0x8b72,	// (0x00042fa1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049afd) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049afd) title_pane_stacon_g

0x94a1,	// (0x000438d0) cursor_press_pane

0x647b,	// (0x000408aa) popup_fep_hwr_window_ParamLimits

0x647b,	// (0x000408aa) popup_fep_hwr_window

0x64f5,	// (0x00040924) popup_fep_vkb_window_ParamLimits

0x64f5,	// (0x00040924) popup_fep_vkb_window

0xc303,	// (0x00046732) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x00049f5b) fep_vkb_side_pane_g_ParamLimits

0x6ef8,	// (0x00041327) fep_hwr_candidate_pane_ParamLimits

0x6ef8,	// (0x00041327) fep_hwr_candidate_pane

0x6f22,	// (0x00041351) fep_hwr_side_pane_ParamLimits

0x6f22,	// (0x00041351) fep_hwr_side_pane

0x6f42,	// (0x00041371) fep_hwr_top_pane_ParamLimits

0x6f42,	// (0x00041371) fep_hwr_top_pane

0x6f5a,	// (0x00041389) fep_hwr_write_pane_ParamLimits

0x6f5a,	// (0x00041389) fep_hwr_write_pane

0xfb2c,	// (0x00049f5b) fep_vkb_side_pane_g

0xc30b,	// (0x0004673a) fep_hwr_top_pane_g1

0xc31d,	// (0x0004674c) fep_hwr_top_pane_g2

0x6f86,	// (0x000413b5) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x00049f37) fep_hwr_top_pane_g

0x6f9b,	// (0x000413ca) fep_hwr_top_text_pane

0x8e8e,	// (0x000432bd) fep_hwr_top_text_pane_g1

0xc353,	// (0x00046782) fep_hwr_top_text_pane_t1

0x7091,	// (0x000414c0) fep_hwr_candidate_pane_g1

0xc5a6,	// (0x000469d5) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a6,	// (0x000469d5) fep_vkb_keypad_pane_g3

0xc5ce,	// (0x000469fd) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ce,	// (0x000469fd) fep_vkb_keypad_pane_g4

0xc63d,	// (0x00046a6c) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x00046a6c) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x00049f62) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x00049f62) fep_vkb_bottom_pane_g

0xc2a3,	// (0x000466d2) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x00049f6c) cell_vkb_side_pane_g

0xc6c8,	// (0x00046af7) cell_vkb_side_pane_t1

0xc6d6,	// (0x00046b05) cell_vkb_side_pane_t1_copy1

0xc2a3,	// (0x000466d2) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x00046c31) cell_vkb_candidate_pane_ParamLimits

0xc361,	// (0x00046790) aid_size_cell_vkb_ParamLimits

0xc361,	// (0x00046790) aid_size_cell_vkb

0xc802,	// (0x00046c31) cell_vkb_candidate_pane

0x70ab,	// (0x000414da) bg_popup_fep_shadow_pane_g1

0xc3ef,	// (0x0004681e) fep_vkb_bottom_pane_ParamLimits

0xc3ef,	// (0x0004681e) fep_vkb_bottom_pane

0xc425,	// (0x00046854) fep_vkb_candidate_pane_ParamLimits

0xc425,	// (0x00046854) fep_vkb_candidate_pane

0xc441,	// (0x00046870) fep_vkb_keypad_pane_ParamLimits

0xc441,	// (0x00046870) fep_vkb_keypad_pane

0xc487,	// (0x000468b6) fep_vkb_side_pane_ParamLimits

0xc487,	// (0x000468b6) fep_vkb_side_pane

0xc4c3,	// (0x000468f2) fep_vkb_top_pane_ParamLimits

0xc4c3,	// (0x000468f2) fep_vkb_top_pane

0xc4ff,	// (0x0004692e) fep_vkb_top_pane_g1_ParamLimits

0xc4ff,	// (0x0004692e) fep_vkb_top_pane_g1

0xc50e,	// (0x0004693d) fep_vkb_top_pane_g2_ParamLimits

0xc50e,	// (0x0004693d) fep_vkb_top_pane_g2

0xc51d,	// (0x0004694c) fep_vkb_top_pane_g3_ParamLimits

0xc51d,	// (0x0004694c) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x00049f52) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x00049f52) fep_vkb_top_pane_g

0xc53b,	// (0x0004696a) fep_vkb_top_text_pane_ParamLimits

0xc53b,	// (0x0004696a) fep_vkb_top_text_pane

0xc54c,	// (0x0004697b) fep_vkb_side_pane_g1_ParamLimits

0xc54c,	// (0x0004697b) fep_vkb_side_pane_g1

0xc595,	// (0x000469c4) grid_vkb_side_pane_ParamLimits

0xc595,	// (0x000469c4) grid_vkb_side_pane

0x70b3,	// (0x000414e2) bg_popup_fep_shadow_pane_g2

0x70bc,	// (0x000414eb) bg_popup_fep_shadow_pane_g3

0x70c4,	// (0x000414f3) bg_popup_fep_shadow_pane_g4

0x70cd,	// (0x000414fc) bg_popup_fep_shadow_pane_g5

0x70d7,	// (0x00041506) bg_popup_fep_shadow_pane_g6

0x70df,	// (0x0004150e) bg_popup_fep_shadow_pane_g7

0x8882,	// (0x00042cb1) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x00046a1b) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00046a1b) grid_vkb_keypad_number_pane

0xc5fc,	// (0x00046a2b) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x00046a2b) grid_vkb_keypad_pane

0xc622,	// (0x00046a51) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x00046a51) fep_vkb_bottom_pane_g1

0xc64b,	// (0x00046a7a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x00046a7a) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x00046a8f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x00046a8f) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x00046aa4) fep_vkb_top_text_pane_g1

0xc690,	// (0x00046abf) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x00046ad4) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x00046ad4) cell_vkb_side_pane

0xc2a3,	// (0x000466d2) cell_vkb_side_pane_g1

0xc6e4,	// (0x00046b13) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x00046b13) cell_vkb_keypad_pane

0xc759,	// (0x00046b88) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x00049f7f) bg_popup_fep_shadow_pane_g

0xc2a3,	// (0x000466d2) cell_hwr_side_pane_g1

0xc2a3,	// (0x000466d2) cell_hwr_side_pane_g2

0xc763,	// (0x00046b92) cell_vkb_keypad_pane_t1

0xc771,	// (0x00046ba0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x00046ba0) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x00046bbd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x00046bbd) cell_vkb_keypad_bottom_right_pane

0xc2a3,	// (0x000466d2) cell_vkb_keypad_bottom_left_pane_g1

0xc2a3,	// (0x000466d2) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x00046bf6) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x00046bf6) cell_vkb_keypad_number_pane

0xc7e6,	// (0x00046c15) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x00046c1f) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x00046c28) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x00049f71) cell_vkb_keypad_number_pane_g

0xc763,	// (0x00046b92) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x00046c4c) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x00049f6c) cell_hwr_side_pane_g

0xc836,	// (0x00046c65) cell_hwr_side_pane_t1

0x70f1,	// (0x00041520) cell_hwr_side_pane_t1_copy1

0xc52d,	// (0x0004695c) cell_hwr_candidate_pane_g1

0x70ff,	// (0x0004152e) cell_hwr_candidate_pane_t1

0xc2a3,	// (0x000466d2) cell_vkb_candidate_pane_g2

0xc8bc,	// (0x00046ceb) cell_vkb_candidate_pane_t1

0x6ebf,	// (0x000412ee) bg_popup_fep_shadow_pane_ParamLimits

0x6ebf,	// (0x000412ee) bg_popup_fep_shadow_pane

0x2c34,	// (0x0003d063) bg_fep_hwr_top_pane_g4

0xc32f,	// (0x0004675e) bg_hwr_side_pane_g1_ParamLimits

0xc32f,	// (0x0004675e) bg_hwr_side_pane_g1

0x6fd7,	// (0x00041406) cell_hwr_side_pane_ParamLimits

0x6fd7,	// (0x00041406) cell_hwr_side_pane

0x7012,	// (0x00041441) fep_hwr_write_pane_g1_ParamLimits

0x7012,	// (0x00041441) fep_hwr_write_pane_g1

0x701f,	// (0x0004144e) fep_hwr_write_pane_g2_ParamLimits

0x701f,	// (0x0004144e) fep_hwr_write_pane_g2

0x702c,	// (0x0004145b) fep_hwr_write_pane_g3_ParamLimits

0x702c,	// (0x0004145b) fep_hwr_write_pane_g3

0x703a,	// (0x00041469) fep_hwr_write_pane_g4_ParamLimits

0x703a,	// (0x00041469) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x00049f3e) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x00049f3e) fep_hwr_write_pane_g

0x2c34,	// (0x0003d063) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2c34,	// (0x0003d063) bg_fep_hwr_candidate_pane_g2

0x704f,	// (0x0004147e) cell_hwr_candidate_pane_ParamLimits

0x704f,	// (0x0004147e) cell_hwr_candidate_pane

0x7091,	// (0x000414c0) fep_hwr_candidate_pane_g1_ParamLimits

0xc38f,	// (0x000467be) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc38f,	// (0x000467be) bg_popup_fep_shadow_pane_cp2

0xc52d,	// (0x0004695c) fep_vkb_top_pane_g4_ParamLimits

0xc52d,	// (0x0004695c) fep_vkb_top_pane_g4

0xc573,	// (0x000469a2) fep_vkb_side_pane_g2_ParamLimits

0xc573,	// (0x000469a2) fep_vkb_side_pane_g2

0x4c67,	// (0x0003f096) list_setting_pane_t4_ParamLimits

0x4c67,	// (0x0003f096) list_setting_pane_t4

0x4d01,	// (0x0003f130) list_setting_number_pane_t5_ParamLimits

0x4d01,	// (0x0003f130) list_setting_number_pane_t5

0x8ed5,	// (0x00043304) list_double_heading_pane_cp2_ParamLimits

0x8ed5,	// (0x00043304) list_double_heading_pane_cp2

0x87b1,	// (0x00042be0) list_double_heading_pane_g1_cp2_ParamLimits

0x87b1,	// (0x00042be0) list_double_heading_pane_g1_cp2

0x8824,	// (0x00042c53) list_double_heading_pane_g2_cp2_ParamLimits

0x8824,	// (0x00042c53) list_double_heading_pane_g2_cp2

0xc8ca,	// (0x00046cf9) list_double_heading_pane_t1_cp2_ParamLimits

0xc8ca,	// (0x00046cf9) list_double_heading_pane_t1_cp2

0xc8e0,	// (0x00046d0f) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e0,	// (0x00046d0f) list_double_heading_pane_t2_cp2

0x7e8f,	// (0x000422be) aid_value_unit2

0x5b35,	// (0x0003ff64) popup_preview_fixed_window

0x8224,	// (0x00042653) bg_popup_preview_window_pane_cp02

0xc8f2,	// (0x00046d21) list_preview_fixed_pane

0xc938,	// (0x00046d67) list_empty_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_empty_pane_fp

0xc938,	// (0x00046d67) list_single_cale_day_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_cale_day_pane_fp

0xc938,	// (0x00046d67) list_single_graphic_heading_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_graphic_heading_pane_fp

0xc938,	// (0x00046d67) list_single_graphic_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_graphic_pane_fp

0xc938,	// (0x00046d67) list_single_heading_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_heading_pane_fp

0xc938,	// (0x00046d67) list_single_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_pane_fp

0xc94d,	// (0x00046d7c) list_single_pane_fp_g1_ParamLimits

0xc94d,	// (0x00046d7c) list_single_pane_fp_g1

0x87b1,	// (0x00042be0) list_single_pane_fp_g2_ParamLimits

0x87b1,	// (0x00042be0) list_single_pane_fp_g2

0x8824,	// (0x00042c53) list_single_pane_fp_g3_ParamLimits

0x8824,	// (0x00042c53) list_single_pane_fp_g3

0xc959,	// (0x00046d88) list_single_pane_fp_g4_ParamLimits

0xc959,	// (0x00046d88) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x00049fa0) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x00049fa0) list_single_pane_fp_g

0x55c8,	// (0x0003f9f7) list_single_pane_fp_t1_ParamLimits

0x55c8,	// (0x0003f9f7) list_single_pane_fp_t1

0x55df,	// (0x0003fa0e) list_single_graphic_pane_fp_g1_ParamLimits

0x55df,	// (0x0003fa0e) list_single_graphic_pane_fp_g1

0xc94d,	// (0x00046d7c) list_single_graphic_pane_fp_g2_ParamLimits

0xc94d,	// (0x00046d7c) list_single_graphic_pane_fp_g2

0x87b1,	// (0x00042be0) list_single_graphic_pane_fp_g3_ParamLimits

0x87b1,	// (0x00042be0) list_single_graphic_pane_fp_g3

0x8824,	// (0x00042c53) list_single_graphic_pane_fp_g4_ParamLimits

0x8824,	// (0x00042c53) list_single_graphic_pane_fp_g4

0xc959,	// (0x00046d88) list_single_graphic_pane_fp_g5_ParamLimits

0xc959,	// (0x00046d88) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049fa9) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049fa9) list_single_graphic_pane_fp_g

0x55eb,	// (0x0003fa1a) list_single_graphic_pane_fp_t1_ParamLimits

0x55eb,	// (0x0003fa1a) list_single_graphic_pane_fp_t1

0x55df,	// (0x0003fa0e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x55df,	// (0x0003fa0e) list_single_graphic_heading_pane_fp_g1

0xc94d,	// (0x00046d7c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x00046d7c) list_single_graphic_heading_pane_fp_g2

0x87b1,	// (0x00042be0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87b1,	// (0x00042be0) list_single_graphic_heading_pane_fp_g3

0x8824,	// (0x00042c53) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8824,	// (0x00042c53) list_single_graphic_heading_pane_fp_g4

0xc959,	// (0x00046d88) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc959,	// (0x00046d88) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049fa9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049fa9) list_single_graphic_heading_pane_fp_g

0x5601,	// (0x0003fa30) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5601,	// (0x0003fa30) list_single_graphic_heading_pane_fp_t1

0x5617,	// (0x0003fa46) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5617,	// (0x0003fa46) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00049fb4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00049fb4) list_single_graphic_heading_pane_fp_t

0x5629,	// (0x0003fa58) list_single_cale_day_pane_fp_g1_ParamLimits

0x5629,	// (0x0003fa58) list_single_cale_day_pane_fp_g1

0xc965,	// (0x00046d94) list_single_cale_day_pane_fp_g2_ParamLimits

0xc965,	// (0x00046d94) list_single_cale_day_pane_fp_g2

0x711d,	// (0x0004154c) list_single_cale_day_pane_fp_g3_ParamLimits

0x711d,	// (0x0004154c) list_single_cale_day_pane_fp_g3

0x7145,	// (0x00041574) list_single_cale_day_pane_fp_g4_ParamLimits

0x7145,	// (0x00041574) list_single_cale_day_pane_fp_g4

0x7169,	// (0x00041598) list_single_cale_day_pane_fp_g5_ParamLimits

0x7169,	// (0x00041598) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x00049fb9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x00049fb9) list_single_cale_day_pane_fp_g

0x5661,	// (0x0003fa90) list_single_cale_day_pane_fp_t1_ParamLimits

0x5661,	// (0x0003fa90) list_single_cale_day_pane_fp_t1

0x5687,	// (0x0003fab6) list_single_cale_day_pane_fp_t2_ParamLimits

0x5687,	// (0x0003fab6) list_single_cale_day_pane_fp_t2

0x56a0,	// (0x0003facf) list_single_cale_day_pane_fp_t3_ParamLimits

0x56a0,	// (0x0003facf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x00049fc4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x00049fc4) list_single_cale_day_pane_fp_t

0xc94d,	// (0x00046d7c) list_empty_pane_fp_g1_ParamLimits

0xc94d,	// (0x00046d7c) list_empty_pane_fp_g1

0x56b9,	// (0x0003fae8) list_empty_pane_fp_t1

0x56c7,	// (0x0003faf6) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x00049fcb) list_empty_pane_fp_t

0xc94d,	// (0x00046d7c) list_single_heading_pane_fp_g1_ParamLimits

0xc94d,	// (0x00046d7c) list_single_heading_pane_fp_g1

0x87b1,	// (0x00042be0) list_single_heading_pane_fp_g2_ParamLimits

0x87b1,	// (0x00042be0) list_single_heading_pane_fp_g2

0x8824,	// (0x00042c53) list_single_heading_pane_fp_g3_ParamLimits

0x8824,	// (0x00042c53) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x00049fd0) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x00049fd0) list_single_heading_pane_fp_g

0x56d5,	// (0x0003fb04) list_single_heading_pane_fp_t1_ParamLimits

0x56d5,	// (0x0003fb04) list_single_heading_pane_fp_t1

0x56e7,	// (0x0003fb16) list_single_heading_pane_fp_t2_ParamLimits

0x56e7,	// (0x0003fb16) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x00049fd7) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x00049fd7) list_single_heading_pane_fp_t

0x8a09,	// (0x00042e38) aid_size_cell_fast

0x8194,	// (0x000425c3) soft_indicator_pane_cp1_t1

0x8a46,	// (0x00042e75) cell_app_pane_cp2_ParamLimits

0x8a46,	// (0x00042e75) cell_app_pane_cp2

0x6ee1,	// (0x00041310) fep_hwr_candidate_drop_down_list_pane

0x2c42,	// (0x0003d071) fep_hwr_candidate_pane_g3_ParamLimits

0x2c42,	// (0x0003d071) fep_hwr_candidate_pane_g3

0x2c4f,	// (0x0003d07e) fep_hwr_candidate_pane_g4_ParamLimits

0x2c4f,	// (0x0003d07e) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x00049f4b) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x00049f4b) fep_hwr_candidate_pane_g

0xc414,	// (0x00046843) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc414,	// (0x00046843) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x00046c54) fep_vkb_candidate_pane_g3

0xc82d,	// (0x00046c5c) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x00049f78) fep_vkb_candidate_pane_g

0xc52d,	// (0x0004695c) cell_hwr_candidate_pane_g1_ParamLimits

0xc844,	// (0x00046c73) cell_hwr_candidate_pane_g3_ParamLimits

0xc844,	// (0x00046c73) cell_hwr_candidate_pane_g3

0xc865,	// (0x00046c94) cell_hwr_candidate_pane_g4_ParamLimits

0xc865,	// (0x00046c94) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x00049f92) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x00049f92) cell_hwr_candidate_pane_g

0xc886,	// (0x00046cb5) cell_vkb_candidate_pane_g3_ParamLimits

0xc886,	// (0x00046cb5) cell_vkb_candidate_pane_g3

0xc8a1,	// (0x00046cd0) cell_vkb_candidate_pane_g4_ParamLimits

0xc8a1,	// (0x00046cd0) cell_vkb_candidate_pane_g4

0xc971,	// (0x00046da0) cell_app_pane_cp2_g1_ParamLimits

0xc971,	// (0x00046da0) cell_app_pane_cp2_g1

0xc98f,	// (0x00046dbe) cell_app_pane_cp2_g2_ParamLimits

0xc98f,	// (0x00046dbe) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x00049fdc) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x00049fdc) cell_app_pane_cp2_g

0xc99b,	// (0x00046dca) cell_app_pane_cp2_t1_ParamLimits

0xc99b,	// (0x00046dca) cell_app_pane_cp2_t1

0x8816,	// (0x00042c45) grid_highlight_pane_cp1_ParamLimits

0x8816,	// (0x00042c45) grid_highlight_pane_cp1

0x718d,	// (0x000415bc) cell_hwr_candidate_pane_cp1_ParamLimits

0x718d,	// (0x000415bc) cell_hwr_candidate_pane_cp1

0xc52d,	// (0x0004695c) fep_hwr_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x00046ddc) fep_hwr_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x00046de9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049fe1) fep_hwr_candidate_drop_down_list_pane_g

0x71ac,	// (0x000415db) fep_hwr_candidate_drop_down_list_scroll_pane

0x71b5,	// (0x000415e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71b5,	// (0x000415e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71c2,	// (0x000415f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71c2,	// (0x000415f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71cf,	// (0x000415fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71cf,	// (0x000415fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc886,	// (0x00046cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc886,	// (0x00046cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8a1,	// (0x00046cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8a1,	// (0x00046cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71dc,	// (0x0004160b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71dc,	// (0x0004160b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71f7,	// (0x00041626) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71f7,	// (0x00041626) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7212,	// (0x00041641) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7212,	// (0x00041641) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00049fe8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00049fe8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9c7,	// (0x00046df6) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9c7,	// (0x00046df6) cell_vkb_candidate_pane_cp1

0xc52d,	// (0x0004695c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) fep_vkb_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x00046ddc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ad,	// (0x00046ddc) fep_vkb_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x00046de9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9ba,	// (0x00046de9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049fe1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00049fe1) fep_vkb_candidate_drop_down_list_pane_g

0xc9e7,	// (0x00046e16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e7,	// (0x00046e16) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f4,	// (0x00046e23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f4,	// (0x00046e23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca01,	// (0x00046e30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca01,	// (0x00046e30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca0d,	// (0x00046e3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca0d,	// (0x00046e3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc844,	// (0x00046c73) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc844,	// (0x00046c73) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc865,	// (0x00046c94) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc865,	// (0x00046c94) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x00046e48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x00046e48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x00046e69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x00046e69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x00046e8a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x00046e8a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00049ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00049ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ec5,	// (0x000422f4) title_pane_g1_ParamLimits

0x7ed2,	// (0x00042301) title_pane_g2_ParamLimits

0xf54e,	// (0x0004997d) title_pane_g_ParamLimits

0x8e7e,	// (0x000432ad) aid_call2_pane

0x8e86,	// (0x000432b5) aid_call_pane

0x8e8e,	// (0x000432bd) popup_clock_analogue_window_g1

0x8e8e,	// (0x000432bd) popup_clock_analogue_window_g2

0x5f52,	// (0x00040381) popup_clock_analogue_window_g3

0x5f5b,	// (0x0004038a) popup_clock_analogue_window_g4

0x7eb1,	// (0x000422e0) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049b2c) popup_clock_analogue_window_g

0x5f63,	// (0x00040392) popup_clock_analogue_window_t1

0x5f71,	// (0x000403a0) clock_digital_number_pane_ParamLimits

0x5f71,	// (0x000403a0) clock_digital_number_pane

0x5f7d,	// (0x000403ac) clock_digital_number_pane_cp02_ParamLimits

0x5f7d,	// (0x000403ac) clock_digital_number_pane_cp02

0x5f89,	// (0x000403b8) clock_digital_number_pane_cp03_ParamLimits

0x5f89,	// (0x000403b8) clock_digital_number_pane_cp03

0x5f95,	// (0x000403c4) clock_digital_number_pane_cp04_ParamLimits

0x5f95,	// (0x000403c4) clock_digital_number_pane_cp04

0x5fa1,	// (0x000403d0) clock_digital_separator_pane_ParamLimits

0x5fa1,	// (0x000403d0) clock_digital_separator_pane

0x5fad,	// (0x000403dc) popup_clock_digital_window_t1_ParamLimits

0x5fad,	// (0x000403dc) popup_clock_digital_window_t1

0x7eb1,	// (0x000422e0) clock_digital_number_pane_g1

0x7eb1,	// (0x000422e0) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049b37) clock_digital_number_pane_g

0x7eb1,	// (0x000422e0) clock_digital_separator_pane_g1

0x7eb1,	// (0x000422e0) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049b37) clock_digital_separator_pane_g

0x9812,	// (0x00043c41) aid_fill_nsta_ParamLimits

0x9958,	// (0x00043d87) indicator_nsta_pane_ParamLimits

0x9ad1,	// (0x00043f00) popup_clock_analogue_window

0x9ad1,	// (0x00043f00) popup_clock_digital_window

0x7f9b,	// (0x000423ca) grid_indicator_nsta_pane_ParamLimits

0xbcbc,	// (0x000460eb) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x00049ecb) clock_nsta_pane_t

0x5f16,	// (0x00040345) aid_size_max_handle

0x5f20,	// (0x0004034f) aid_size_min_handle

0x94a1,	// (0x000438d0) editor_scroll_pane

0xca76,	// (0x00046ea5) ex_editor_pane

0x8977,	// (0x00042da6) scroll_pane_cp13

0x87a9,	// (0x00042bd8) scroll_pane_cp14

0x8ebd,	// (0x000432ec) scroll_pane_cp36

0x8ee9,	// (0x00043318) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ee9,	// (0x00043318) list_single_graphic_hl_pane_cp2

0x5219,	// (0x0003f648) list_single_graphic_hl_pane_ParamLimits

0x5219,	// (0x0003f648) list_single_graphic_hl_pane

0x56fd,	// (0x0003fb2c) aid_size_min_hl_cp1

0xca7e,	// (0x00046ead) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00046ead) list_highlight_pane_cp34

0xca8f,	// (0x00046ebe) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x00046ebe) list_single_graphic_hl_pane_g1

0x5706,	// (0x0003fb35) list_single_graphic_hl_pane_g2_ParamLimits

0x5706,	// (0x0003fb35) list_single_graphic_hl_pane_g2

0x5706,	// (0x0003fb35) list_single_graphic_hl_pane_g3_ParamLimits

0x5706,	// (0x0003fb35) list_single_graphic_hl_pane_g3

0x9412,	// (0x00043841) list_single_graphic_hl_pane_g4_ParamLimits

0x9412,	// (0x00043841) list_single_graphic_hl_pane_g4

0x722d,	// (0x0004165c) list_single_graphic_hl_pane_g5_ParamLimits

0x722d,	// (0x0004165c) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004a00a) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004a00a) list_single_graphic_hl_pane_g

0x5712,	// (0x0003fb41) list_single_graphic_hl_pane_t1_ParamLimits

0x5712,	// (0x0003fb41) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00046ecb) aid_size_min_hl_cp2

0xcaa5,	// (0x00046ed4) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x00046ed4) list_highlight_pane_cp34_cp2

0xca8f,	// (0x00046ebe) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x00046ebe) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x00046ee1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x00046ee1) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x00046eed) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x00046eed) list_single_graphic_hl_pane_g3_cp2

0xc2c6,	// (0x000466f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc2c6,	// (0x000466f5) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00046efb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00046efb) list_single_graphic_hl_pane_g5_cp2

0x627d,	// (0x000406ac) control_pane_g4_ParamLimits

0x627d,	// (0x000406ac) control_pane_g4

0x97f0,	// (0x00043c1f) bg_popup_sub_pane_cp10_ParamLimits

0xc2ad,	// (0x000466dc) list_choice_list_pane_ParamLimits

0xc2bc,	// (0x000466eb) scroll_pane_cp23

0x8224,	// (0x00042653) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f2,	// (0x00046d21) list_preview_fixed_pane_ParamLimits

0xc908,	// (0x00046d37) list_preview_fixed_pane_cp_ParamLimits

0xc908,	// (0x00046d37) list_preview_fixed_pane_cp

0xc914,	// (0x00046d43) popup_preview_fixed_window_g1_ParamLimits

0xc914,	// (0x00046d43) popup_preview_fixed_window_g1

0xc920,	// (0x00046d4f) popup_preview_fixed_window_g2_ParamLimits

0xc920,	// (0x00046d4f) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x00049f99) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x00049f99) popup_preview_fixed_window_g

0x5e8a,	// (0x000402b9) aid_navi_side_left_pane_ParamLimits

0x5e9f,	// (0x000402ce) aid_navi_side_right_pane_ParamLimits

0x5eb7,	// (0x000402e6) navi_icon_pane_stacon_ParamLimits

0x5ecb,	// (0x000402fa) navi_navi_pane_stacon_ParamLimits

0x5eb7,	// (0x000402e6) navi_text_pane_stacon_ParamLimits

0x7ea7,	// (0x000422d6) main_text_info_pane

0xcaf6,	// (0x00046f25) listscroll_text_info_pane

0xcafe,	// (0x00046f2d) list_text_info_pane_ParamLimits

0xcafe,	// (0x00046f2d) list_text_info_pane

0xcb0d,	// (0x00046f3c) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00046f3c) scroll_pane_cp24

0xcb2b,	// (0x00046f5a) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x00046f5a) list_text_info_pane_t1

0x63ed,	// (0x0004081c) popup_fast_swap2_window_ParamLimits

0x63ed,	// (0x0004081c) popup_fast_swap2_window

0xcb5c,	// (0x00046f8b) aid_size_cell_fast2

0x7ea7,	// (0x000422d6) bg_popup_window_pane_cp17

0xa166,	// (0x00044595) heading_pane_cp2

0x8473,	// (0x000428a2) listscroll_fast2_pane

0xcb66,	// (0x00046f95) grid_fast2_pane

0xcb70,	// (0x00046f9f) listscroll_fast2_pane_g1

0xcb78,	// (0x00046fa7) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004a015) listscroll_fast2_pane_g

0x8977,	// (0x00042da6) scroll_pane_cp26

0xcb82,	// (0x00046fb1) cell_fast2_pane_ParamLimits

0xcb82,	// (0x00046fb1) cell_fast2_pane

0xcb97,	// (0x00046fc6) cell_fast2_pane_g1

0xcba0,	// (0x00046fcf) cell_fast2_pane_g2

0xcba9,	// (0x00046fd8) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004a01a) cell_fast2_pane_g

0x8566,	// (0x00042995) grid_highlight_pane_cp9

0x857b,	// (0x000429aa) main_eswt_pane_ParamLimits

0x857b,	// (0x000429aa) main_eswt_pane

0xcb22,	// (0x00046f51) list_single_text_info_pane

0xcbb1,	// (0x00046fe0) eswt_ctrl_button_pane

0xcbb1,	// (0x00046fe0) eswt_ctrl_canvas_pane

0xcbb9,	// (0x00046fe8) eswt_ctrl_combo_pane

0xcbb1,	// (0x00046fe0) eswt_ctrl_default_pane

0xcbb1,	// (0x00046fe0) eswt_ctrl_label_pane

0xcbc1,	// (0x00046ff0) eswt_ctrl_wait_pane

0xcbc9,	// (0x00046ff8) eswt_shell_pane

0x7ea7,	// (0x000422d6) listscroll_eswt_app_pane

0xcbe9,	// (0x00047018) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x00047018) popup_eswt_tasktip_window

0x9d6e,	// (0x0004419d) bg_popup_window_pane_cp18

0xcbfa,	// (0x00047029) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00047029) eswt_control_pane_g1

0xcc07,	// (0x00047036) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00047036) eswt_control_pane_g2

0xcc14,	// (0x00047043) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x00047043) eswt_control_pane_g3

0xcc21,	// (0x00047050) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x00047050) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004a021) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004a021) eswt_control_pane_g

0x8816,	// (0x00042c45) bg_button_pane_ParamLimits

0x8816,	// (0x00042c45) bg_button_pane

0x857b,	// (0x000429aa) common_borders_pane_copy2_ParamLimits

0x857b,	// (0x000429aa) common_borders_pane_copy2

0xcc2e,	// (0x0004705d) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x0004705d) control_button_pane_g1

0xcc3a,	// (0x00047069) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00047069) control_button_pane_g2

0xcc46,	// (0x00047075) control_button_pane_g3_ParamLimits

0xcc46,	// (0x00047075) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004a02a) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004a02a) control_button_pane_g

0xcc5a,	// (0x00047089) control_button_pane_t1

0xcc68,	// (0x00047097) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004a031) control_button_pane_t

0x9cfa,	// (0x00044129) bg_button_pane_g1

0x9d02,	// (0x00044131) bg_button_pane_g2

0x9d0a,	// (0x00044139) bg_button_pane_g3

0x9d12,	// (0x00044141) bg_button_pane_g4

0x9d1a,	// (0x00044149) bg_button_pane_g5

0x9d22,	// (0x00044151) bg_button_pane_g6

0x9d2a,	// (0x00044159) bg_button_pane_g7

0x9d32,	// (0x00044161) bg_button_pane_g8

0x9d3a,	// (0x00044169) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00049c9a) bg_button_pane_g

0xc268,	// (0x00046697) common_borders_pane_ParamLimits

0xc268,	// (0x00046697) common_borders_pane

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy1

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy1

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy1

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy1

0xc2a3,	// (0x000466d2) bg_eswt_ctrl_canvas_pane_g1

0xc268,	// (0x00046697) common_borders_pane_cp2_ParamLimits

0xc268,	// (0x00046697) common_borders_pane_cp2

0xc268,	// (0x00046697) common_borders_pane_cp3_ParamLimits

0xc268,	// (0x00046697) common_borders_pane_cp3

0xcc76,	// (0x000470a5) separator_horizontal_pane

0xcc7e,	// (0x000470ad) separator_vertical_pane

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy2

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy2

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy2

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy2

0x7ea7,	// (0x000422d6) common_borders_pane_cp4

0xcc87,	// (0x000470b6) separator_horizontal_pane_g1

0xcc90,	// (0x000470bf) separator_horizontal_pane_g2

0xcc99,	// (0x000470c8) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004a036) separator_horizontal_pane_g

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy3

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy3

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy3

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy3

0x7ea7,	// (0x000422d6) common_borders_pane_cp5

0xcca2,	// (0x000470d1) separator_vertical_pane_g1

0xccab,	// (0x000470da) separator_vertical_pane_g2

0xccb4,	// (0x000470e3) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004a03d) separator_vertical_pane_g

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00047029) eswt_control_pane_g1_copy4

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00047036) eswt_control_pane_g2_copy4

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x00047043) eswt_control_pane_g3_copy4

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x00047050) eswt_control_pane_g4_copy4

0xccbd,	// (0x000470ec) eswt_ctrl_combo_button_pane

0xccc5,	// (0x000470f4) eswt_ctrl_input_pane

0xcccd,	// (0x000470fc) popup_choice_list_window_cp70

0xccd5,	// (0x00047104) eswt_ctrl_input_pane_t1

0x7ea7,	// (0x000422d6) input_focus_pane_cp70

0xc268,	// (0x00046697) bg_button_pane_cp70_ParamLimits

0xc268,	// (0x00046697) bg_button_pane_cp70

0xcce3,	// (0x00047112) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x0004711a) wait_bar_pane_cp70

0x9d6e,	// (0x0004419d) bg_popup_window_pane_cp70_ParamLimits

0x9d6e,	// (0x0004419d) bg_popup_window_pane_cp70

0xccf3,	// (0x00047122) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00047138) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00047138) wait_bar_pane_cp71

0xcd15,	// (0x00047144) grid_eswt_app_pane

0x8ca0,	// (0x000430cf) scroll_pane_cp70

0xcd1e,	// (0x0004714d) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x0004714d) cell_eswt_app_pane

0xcd4e,	// (0x0004717d) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x0004717d) cell_eswt_app_pane_g1

0xcd7d,	// (0x000471ac) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x000471ac) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004a044) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004a044) cell_eswt_app_pane_g

0xcda6,	// (0x000471d5) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x000471d5) cell_eswt_app_pane_t1

0xcdd8,	// (0x00047207) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00047207) grid_highlight_pane_cp70

0x9376,	// (0x000437a5) set_content_pane_g1

0x974c,	// (0x00043b7b) status_small_volume_pane

0x7241,	// (0x00041670) status_small_volume_pane_g1

0x7249,	// (0x00041678) volume_small2_pane

0x7252,	// (0x00041681) volume_small2_pane_g1

0x725b,	// (0x0004168a) volume_small2_pane_g2

0x7264,	// (0x00041693) volume_small2_pane_g3

0x726d,	// (0x0004169c) volume_small2_pane_g4

0x7276,	// (0x000416a5) volume_small2_pane_g5

0x727f,	// (0x000416ae) volume_small2_pane_g6

0x7288,	// (0x000416b7) volume_small2_pane_g7

0x7291,	// (0x000416c0) volume_small2_pane_g8

0x729a,	// (0x000416c9) volume_small2_pane_g9

0x72a3,	// (0x000416d2) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004a049) volume_small2_pane_g

0xc675,	// (0x00046aa4) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x00046abf) fep_vkb_top_text_pane_t1_ParamLimits

0xc92c,	// (0x00046d5b) popup_preview_fixed_window_g3_ParamLimits

0xc92c,	// (0x00046d5b) popup_preview_fixed_window_g3

0x689c,	// (0x00040ccb) popup_toolbar_trans_pane

0xb0ca,	// (0x000454f9) aid_height_set_list_ParamLimits

0xb0db,	// (0x0004550a) aid_size_parent_ParamLimits

0x97f0,	// (0x00043c1f) list_highlight_pane_cp2_ParamLimits

0x9376,	// (0x000437a5) set_content_pane_g1_ParamLimits

0x5234,	// (0x0003f663) list_single_image_pane_ParamLimits

0x5234,	// (0x0003f663) list_single_image_pane

0xcde4,	// (0x00047213) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00047213) aid_size_cell_image

0xcdf1,	// (0x00047220) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00047220) grid_single_image_pane

0xa10e,	// (0x0004453d) list_single_image_pane_g1_ParamLimits

0xa10e,	// (0x0004453d) list_single_image_pane_g1

0xcdfd,	// (0x0004722c) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x0004722c) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004a05e) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004a05e) list_single_image_pane_g

0xce11,	// (0x00047240) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00047240) list_single_image_pane_t1

0xce27,	// (0x00047256) cell_image_list_pane_ParamLimits

0xce27,	// (0x00047256) cell_image_list_pane

0xce3b,	// (0x0004726a) cell_image_list_pane_g1

0xce44,	// (0x00047273) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004a063) cell_image_list_pane_g

0xce4d,	// (0x0004727c) aid_size_cell_tb_trans_pane

0x8816,	// (0x00042c45) bg_tb_trans_pane

0xce5f,	// (0x0004728e) grid_tb_trans_pane

0x9cfa,	// (0x00044129) bg_tb_trans_pane_g1

0x9d02,	// (0x00044131) bg_tb_trans_pane_g2

0x9d0a,	// (0x00044139) bg_tb_trans_pane_g3

0x9d12,	// (0x00044141) bg_tb_trans_pane_g4

0x9d1a,	// (0x00044149) bg_tb_trans_pane_g5

0x9d32,	// (0x00044161) bg_tb_trans_pane_g6

0x9d3a,	// (0x00044169) bg_tb_trans_pane_g7

0x9d22,	// (0x00044151) bg_tb_trans_pane_g8

0x9d2a,	// (0x00044159) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004a068) bg_tb_trans_pane_g

0xce73,	// (0x000472a2) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x000472a2) cell_toolbar_trans_pane

0xc2a3,	// (0x000466d2) cell_toolbar_trans_pane_g1

0xbe78,	// (0x000462a7) list_form2_midp_pane_t1

0xbe86,	// (0x000462b5) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x00049f11) list_form2_midp_pane_t

0xbe94,	// (0x000462c3) scroll_pane_cp51_ParamLimits

0xc050,	// (0x0004647f) form2_midp_wait_pane_g1

0xc059,	// (0x00046488) form2_midp_wait_pane_g2

0xc062,	// (0x00046491) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x00049f26) form2_midp_wait_pane_g

0x7f9b,	// (0x000423ca) list_highlight_pane_cp21_ParamLimits

0xc0ae,	// (0x000464dd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0bd,	// (0x000464ec) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6cf5,	// (0x00041124) list_single_2graphic_im_pane_ParamLimits

0x6cf5,	// (0x00041124) list_single_2graphic_im_pane

0xce99,	// (0x000472c8) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x000472c8) list_single_2graphic_im_pane_g1

0xceaa,	// (0x000472d9) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x000472d9) list_single_2graphic_im_pane_g2

0xceb6,	// (0x000472e5) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x000472e5) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004a07b) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004a07b) list_single_2graphic_im_pane_g

0xced6,	// (0x00047305) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00047305) list_single_2graphic_im_pane_t1

0xc938,	// (0x00046d67) list_single_graphic_2heading_pane_fp_ParamLimits

0xc938,	// (0x00046d67) list_single_graphic_2heading_pane_fp

0x55df,	// (0x0003fa0e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x55df,	// (0x0003fa0e) list_single_graphic_2heading_pane_fp_g1

0xc94d,	// (0x00046d7c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x00046d7c) list_single_graphic_2heading_pane_fp_g2

0x87b1,	// (0x00042be0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87b1,	// (0x00042be0) list_single_graphic_2heading_pane_fp_g3

0x8824,	// (0x00042c53) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8824,	// (0x00042c53) list_single_graphic_2heading_pane_fp_g4

0xc959,	// (0x00046d88) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc959,	// (0x00046d88) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049fa9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049fa9) list_single_graphic_2heading_pane_fp_g

0x5728,	// (0x0003fb57) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5728,	// (0x0003fb57) list_single_graphic_2heading_pane_fp_t1

0x5617,	// (0x0003fa46) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5617,	// (0x0003fa46) list_single_graphic_2heading_pane_fp_t2

0x573e,	// (0x0003fb6d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x573e,	// (0x0003fb6d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004a084) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004a084) list_single_graphic_2heading_pane_fp_t

0xc33b,	// (0x0004676a) fep_hwr_write_pane_g5_ParamLimits

0xc33b,	// (0x0004676a) fep_hwr_write_pane_g5

0xc347,	// (0x00046776) fep_hwr_write_pane_g6_ParamLimits

0xc347,	// (0x00046776) fep_hwr_write_pane_g6

0xcbc9,	// (0x00046ff8) eswt_shell_pane_ParamLimits

0x9d6e,	// (0x0004419d) bg_popup_window_pane_cp18_ParamLimits

0xb023,	// (0x00045452) heading_pane_cp70

0xccf3,	// (0x00047122) popup_eswt_tasktip_window_t1_ParamLimits

0x9867,	// (0x00043c96) aid_touch_tab_arrow_left

0x9876,	// (0x00043ca5) aid_touch_tab_arrow_right

0x7ee3,	// (0x00042312) title_pane_g3_ParamLimits

0x7ee3,	// (0x00042312) title_pane_g3

0x87d5,	// (0x00042c04) set_value_pane_g1

0x689c,	// (0x00040ccb) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x0004727c) aid_size_cell_tb_trans_pane_ParamLimits

0x8816,	// (0x00042c45) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x0004728e) grid_tb_trans_pane_ParamLimits

0x8224,	// (0x00042653) cont_note_pane_ParamLimits

0x8224,	// (0x00042653) cont_note_pane

0x857b,	// (0x000429aa) cont_snote2_single_text_pane_ParamLimits

0x857b,	// (0x000429aa) cont_snote2_single_text_pane

0x857b,	// (0x000429aa) cont_snote2_single_graphic_pane_ParamLimits

0x857b,	// (0x000429aa) cont_snote2_single_graphic_pane

0xa381,	// (0x000447b0) cont_note_wait_pane_ParamLimits

0xa381,	// (0x000447b0) cont_note_wait_pane

0xa381,	// (0x000447b0) cont_note_image_pane_ParamLimits

0xa381,	// (0x000447b0) cont_note_image_pane

0xcf07,	// (0x00047336) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00047336) popup_note2_window_g1

0xcf38,	// (0x00047367) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00047367) popup_note2_window_t1

0xcf7d,	// (0x000473ac) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x000473ac) popup_note2_window_t2

0xcfc2,	// (0x000473f1) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x000473f1) popup_note2_window_t3

0xd007,	// (0x00047436) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00047436) popup_note2_window_t4

0x82a8,	// (0x000426d7) popup_note2_window_t5_ParamLimits

0x82a8,	// (0x000426d7) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004a090) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004a090) popup_note2_window_t

0xd036,	// (0x00047465) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00047465) popup_note2_image_window_g1

0xd042,	// (0x00047471) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x00047471) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004a09b) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004a09b) popup_note2_image_window_g

0xd054,	// (0x00047483) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x00047483) popup_note2_image_window_t1

0xd06c,	// (0x0004749b) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x0004749b) popup_note2_image_window_t2

0xd084,	// (0x000474b3) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x000474b3) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004a0a0) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004a0a0) popup_note2_image_window_t

0xa38f,	// (0x000447be) popup_note2_wait_window_g1_ParamLimits

0xa38f,	// (0x000447be) popup_note2_wait_window_g1

0xd0a0,	// (0x000474cf) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x000474cf) popup_note2_wait_window_g2

0xa3a7,	// (0x000447d6) popup_note2_wait_window_g3_ParamLimits

0xa3a7,	// (0x000447d6) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004a0a7) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004a0a7) popup_note2_wait_window_g

0xd0ac,	// (0x000474db) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x000474db) popup_note2_wait_window_t1

0xd0ca,	// (0x000474f9) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x000474f9) popup_note2_wait_window_t2

0xd0e8,	// (0x00047517) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00047517) popup_note2_wait_window_t3

0xd0fa,	// (0x00047529) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x00047529) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004a0ae) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004a0ae) popup_note2_wait_window_t

0xd10c,	// (0x0004753b) wait_bar2_pane_ParamLimits

0xd10c,	// (0x0004753b) wait_bar2_pane

0xd124,	// (0x00047553) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00047553) popup_snote2_single_text_window_g1

0xd14c,	// (0x0004757b) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x0004757b) popup_snote2_single_text_window_t1

0xd198,	// (0x000475c7) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x000475c7) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00047613) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00047613) popup_snote2_single_text_window_t3

0xd225,	// (0x00047654) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x00047654) popup_snote2_single_text_window_t4

0xd25b,	// (0x0004768a) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x0004768a) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004a0b7) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004a0b7) popup_snote2_single_text_window_t

0xd286,	// (0x000476b5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x000476b5) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x000476dd) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x000476dd) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004a0c2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004a0c2) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00047705) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00047705) popup_snote2_single_graphic_window_t1

0xd322,	// (0x00047751) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x00047751) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00047613) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00047613) popup_snote2_single_graphic_window_t3

0xd225,	// (0x00047654) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x00047654) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x0004768a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x0004768a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004a0c7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004a0c7) popup_snote2_single_graphic_window_t

0xbd55,	// (0x00046184) clock_nsta_pane_cp2_t1

0xbd55,	// (0x00046184) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x00049ee7) clock_nsta_pane_cp2_t

0x4e21,	// (0x0003f250) form_field_data_wide_pane_g1_ParamLimits

0x87b1,	// (0x00042be0) form_field_data_wide_pane_g2_ParamLimits

0x87b1,	// (0x00042be0) form_field_data_wide_pane_g2

0x8824,	// (0x00042c53) form_field_data_wide_pane_g3_ParamLimits

0x8824,	// (0x00042c53) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049aaf) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049aaf) form_field_data_wide_pane_g

0xbc58,	// (0x00046087) grid_touch_3_pane_ParamLimits

0xbc58,	// (0x00046087) grid_touch_3_pane

0xd36e,	// (0x0004779d) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x0004779d) cell_touch_3_pane

0xc2a3,	// (0x000466d2) cell_touch_3_pane_g1

0xc2a3,	// (0x000466d2) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x00049f6c) cell_touch_3_pane_g

0x82da,	// (0x00042709) cont_query_data_pane

0x82e2,	// (0x00042711) cont_query_data_pane_cp1

0xd39c,	// (0x000477cb) button_value_adjust_pane_cp7

0xd3a4,	// (0x000477d3) query_popup_pane_cp3

0x8f7e,	// (0x000433ad) bg_popup_sub_pane_cp22_ParamLimits

0x5fcc,	// (0x000403fb) navi_navi_volume_pane_cp2

0x5fe7,	// (0x00040416) popup_side_volume_key_window_g2

0x5ff6,	// (0x00040425) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049b45) popup_side_volume_key_window_g

0x6013,	// (0x00040442) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049b4c) popup_side_volume_key_window_t

0x9235,	// (0x00043664) popup_side_volume_key_window_ParamLimits

0x4a69,	// (0x0003ee98) list_double_graphic_pane_g4_ParamLimits

0x4a69,	// (0x0003ee98) list_double_graphic_pane_g4

0x6d32,	// (0x00041161) list_single_2heading_msg_pane_ParamLimits

0x6d32,	// (0x00041161) list_single_2heading_msg_pane

0x72ac,	// (0x000416db) list_single_2heading_msg_pane_g1_ParamLimits

0x72ac,	// (0x000416db) list_single_2heading_msg_pane_g1

0x93da,	// (0x00043809) list_single_2heading_msg_pane_g2_ParamLimits

0x93da,	// (0x00043809) list_single_2heading_msg_pane_g2

0x6e39,	// (0x00041268) list_single_2heading_msg_pane_g3_ParamLimits

0x6e39,	// (0x00041268) list_single_2heading_msg_pane_g3

0x72b8,	// (0x000416e7) list_single_2heading_msg_pane_g4_ParamLimits

0x72b8,	// (0x000416e7) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004a0d2) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004a0d2) list_single_2heading_msg_pane_g

0x575e,	// (0x0003fb8d) list_single_2heading_msg_pane_t1_ParamLimits

0x575e,	// (0x0003fb8d) list_single_2heading_msg_pane_t1

0x5786,	// (0x0003fbb5) list_single_2heading_msg_pane_t2_ParamLimits

0x5786,	// (0x0003fbb5) list_single_2heading_msg_pane_t2

0x57ba,	// (0x0003fbe9) list_single_2heading_msg_pane_t3_ParamLimits

0x57ba,	// (0x0003fbe9) list_single_2heading_msg_pane_t3

0x57f3,	// (0x0003fc22) list_single_2heading_msg_pane_t4_ParamLimits

0x57f3,	// (0x0003fc22) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004a0db) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004a0db) list_single_2heading_msg_pane_t

0x7eef,	// (0x0004231e) title_pane_g4_ParamLimits

0x7eef,	// (0x0004231e) title_pane_g4

0x5ddb,	// (0x0004020a) title_pane_stacon_g3_ParamLimits

0x5ddb,	// (0x0004020a) title_pane_stacon_g3

0xceca,	// (0x000472f9) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x000472f9) list_single_2graphic_im_pane_g4

0xade0,	// (0x0004520f) popup_side_volume_key_window_cp

0xb5a6,	// (0x000459d5) main_idle_act2_pane_t1

0x699a,	// (0x00040dc9) toolbar_button_pane_g10

0x8773,	// (0x00042ba2) popup_toolbar_window_cp1

0xbd46,	// (0x00046175) clock_nsta_pane_cp_t1

0xbd46,	// (0x00046175) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x00049ee2) clock_nsta_pane_cp_t

0x5fcc,	// (0x000403fb) navi_navi_volume_pane_cp2_ParamLimits

0x5fdb,	// (0x0004040a) popup_side_volume_key_window_g1_ParamLimits

0x5fe7,	// (0x00040416) popup_side_volume_key_window_g2_ParamLimits

0x5ff6,	// (0x00040425) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049b45) popup_side_volume_key_window_g_ParamLimits

0x6ecd,	// (0x000412fc) fep_hwr_aid_pane

0x2c34,	// (0x0003d063) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30b,	// (0x0004673a) fep_hwr_top_pane_g1_ParamLimits

0xc31d,	// (0x0004674c) fep_hwr_top_pane_g2_ParamLimits

0x6f86,	// (0x000413b5) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x00049f37) fep_hwr_top_pane_g_ParamLimits

0x6f9b,	// (0x000413ca) fep_hwr_top_text_pane_ParamLimits

0xaba3,	// (0x00044fd2) aid_touch_tab_arrow_arrow_2

0xabac,	// (0x00044fdb) aid_touch_tab_arrow_left_2

0x6ee1,	// (0x00041310) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f18,	// (0x00041347) fep_hwr_prediction_pane

0xc47d,	// (0x000468ac) fep_vkb_prediction_pane

0xc581,	// (0x000469b0) fep_vkb_side_pane_g3_ParamLimits

0xc581,	// (0x000469b0) fep_vkb_side_pane_g3

0xc52d,	// (0x0004695c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9ad,	// (0x00046ddc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ba,	// (0x00046de9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x00049fe1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3c9,	// (0x000477f8) fep_hwr_prediction_pane_g1

0x72d0,	// (0x000416ff) fep_hwr_prediction_pane_g2

0x72d8,	// (0x00041707) fep_hwr_prediction_pane_g3

0x72e0,	// (0x0004170f) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004a0e4) fep_hwr_prediction_pane_g

0xd3c9,	// (0x000477f8) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x00047802) fep_vkb_prediction_pane_g2

0xd3db,	// (0x0004780a) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x00047812) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004a0ed) fep_vkb_prediction_pane_g

0x6c82,	// (0x000410b1) slider_set_pane_g3

0x6c96,	// (0x000410c5) slider_set_pane_g4

0x6cae,	// (0x000410dd) slider_set_pane_g5

0x6c82,	// (0x000410b1) slider_set_pane_g6

0x6cc4,	// (0x000410f3) slider_set_pane_g7

0xb240,	// (0x0004566f) slider_form_pane_g3

0xb249,	// (0x00045678) slider_form_pane_g4

0xb251,	// (0x00045680) slider_form_pane_g5

0xb240,	// (0x0004566f) slider_form_pane_g6

0xb259,	// (0x00045688) slider_form_pane_g7

0xb850,	// (0x00045c7f) slider_set_pane_vc_g3

0xb859,	// (0x00045c88) slider_set_pane_vc_g4

0xb862,	// (0x00045c91) slider_set_pane_vc_g5

0xb850,	// (0x00045c7f) slider_set_pane_vc_g6

0xb86b,	// (0x00045c9a) slider_set_pane_vc_g7

0xba2b,	// (0x00045e5a) slider_form_pane_vc_g1

0xba34,	// (0x00045e63) slider_form_pane_vc_g2

0xba3d,	// (0x00045e6c) slider_form_pane_vc_g3

0xba2b,	// (0x00045e5a) slider_form_pane_vc_g4

0xba46,	// (0x00045e75) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x00049eb4) slider_form_pane_vc_g

0x7ea7,	// (0x000422d6) main_idle_act3_pane

0xd3eb,	// (0x0004781a) ai3_links_pane

0xd3f4,	// (0x00047823) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00047823) popup_ai3_data_window

0x7ea7,	// (0x000422d6) grid_ai3_links_pane

0xd40e,	// (0x0004783d) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x0004783d) cell_ai3_links_pane

0xd426,	// (0x00047855) bg_popup_sub_pane_cp11

0xd433,	// (0x00047862) cell_ai3_links_pane_g1

0x7ea7,	// (0x000422d6) bg_popup_sub_pane_cp12

0xd458,	// (0x00047887) heading_ai3_data_pane

0xd460,	// (0x0004788f) list_ai3_gene_pane

0xd46c,	// (0x0004789b) popup_ai3_data_window_g1

0xd474,	// (0x000478a3) heading_ai3_data_pane_g1

0xd47c,	// (0x000478ab) heading_ai3_data_pane_t1

0xd48a,	// (0x000478b9) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x000478b9) list_double_ai3_gene_pane

0xd497,	// (0x000478c6) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x000478c6) list_single_ai3_gene_pane

0xc268,	// (0x00046697) list_highlight_pane_cp7_ParamLimits

0xc268,	// (0x00046697) list_highlight_pane_cp7

0xd4a4,	// (0x000478d3) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x000478d3) list_single_a13_gene_pane_t1

0xd4bb,	// (0x000478ea) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x000478f3) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004a0f6) list_single_ai3_gene_pane_g

0xd4cc,	// (0x000478fb) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x000478fb) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x00047907) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x00047907) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00047923) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00047923) list_double_ai3_gene_pane_t2

0xd50a,	// (0x00047939) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x00047939) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a0fb) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a0fb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5754,	// (0x0003fb83) aid_size_min_col_2

0xd3b5,	// (0x000477e4) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x000477e4) aid_size_min_msg

0xc681,	// (0x00046ab0) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x00046ab0) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x00049f67) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x00049f67) fep_vkb_top_text_pane_g

0x7ea7,	// (0x000422d6) main_hc_apps_shell_pane

0xd527,	// (0x00047956) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x00047956) grid_hc_apps_pane

0xd536,	// (0x00047965) list_hc_apps_pane

0xd53e,	// (0x0004796d) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x0004796d) scroll_pane_cp37

0xd54a,	// (0x00047979) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x00047979) cell_hc_apps_pane

0xd5f8,	// (0x00047a27) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x00047a27) cell_hc_apps_pane_g1

0xd629,	// (0x00047a58) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00047a58) cell_hc_apps_pane_g2

0xd645,	// (0x00047a74) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x00047a74) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a102) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a102) cell_hc_apps_pane_g

0xd667,	// (0x00047a96) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00047a96) cell_hc_apps_pane_t1

0x8224,	// (0x00042653) grid_highlight_pane_cp10_ParamLimits

0x8224,	// (0x00042653) grid_highlight_pane_cp10

0xd6a7,	// (0x00047ad6) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00047ad6) list_single_hc_apps_pane

0xd703,	// (0x00047b32) list_single_hc_apps_pane_g1

0x72e8,	// (0x00041717) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a109) list_single_hc_apps_pane_g

0x7301,	// (0x00041730) list_single_hc_apps_pane_g2_copy1

0x5818,	// (0x0003fc47) list_single_hc_apps_pane_t1

0x7f9b,	// (0x000423ca) bg_set_opt_pane_cp_ParamLimits

0x5c57,	// (0x00040086) setting_slider_pane_t1_ParamLimits

0x5c70,	// (0x0004009f) setting_slider_pane_t2_ParamLimits

0x5c8a,	// (0x000400b9) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004998d) setting_slider_pane_t_ParamLimits

0x5ca2,	// (0x000400d1) slider_set_pane_ParamLimits

0x6291,	// (0x000406c0) control_pane_g5_ParamLimits

0x6291,	// (0x000406c0) control_pane_g5

0xb08f,	// (0x000454be) slider_set_pane_g1_ParamLimits

0x6c76,	// (0x000410a5) slider_set_pane_g2_ParamLimits

0x6c82,	// (0x000410b1) slider_set_pane_g3_ParamLimits

0x6c96,	// (0x000410c5) slider_set_pane_g4_ParamLimits

0x6cae,	// (0x000410dd) slider_set_pane_g5_ParamLimits

0x6c82,	// (0x000410b1) slider_set_pane_g6_ParamLimits

0x6cc4,	// (0x000410f3) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00049d98) slider_set_pane_g_ParamLimits

0x9321,	// (0x00043750) navi_icon_text_pane_ParamLimits

0x9828,	// (0x00043c57) aid_fill_nsta_2_ParamLimits

0x9867,	// (0x00043c96) aid_touch_tab_arrow_left_ParamLimits

0x9876,	// (0x00043ca5) aid_touch_tab_arrow_right_ParamLimits

0x98e3,	// (0x00043d12) clock_nsta_pane_ParamLimits

0xab85,	// (0x00044fb4) navi_icon_pane_g1_ParamLimits

0xab91,	// (0x00044fc0) navi_text_pane_t1_ParamLimits

0xbe52,	// (0x00046281) navi_icon_text_pane_g1_ParamLimits

0xbe5e,	// (0x0004628d) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x00047b32) list_single_hc_apps_pane_g1_ParamLimits

0x72e8,	// (0x00041717) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a109) list_single_hc_apps_pane_g_ParamLimits

0x7301,	// (0x00041730) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5818,	// (0x0003fc47) list_single_hc_apps_pane_t1_ParamLimits

0x5b61,	// (0x0003ff90) popup_toolbar2_fixed_window_ParamLimits

0x5b61,	// (0x0003ff90) popup_toolbar2_fixed_window

0x6892,	// (0x00040cc1) popup_toolbar2_float_window

0x7ea7,	// (0x000422d6) bg_popup_sub_pane_cp27

0xd71c,	// (0x00047b4b) grid_toolbar2_float_pane

0x7ea7,	// (0x000422d6) bg_popup_sub_pane_cp26

0xd71c,	// (0x00047b4b) grid_toolbar2_fixed_pane

0xd724,	// (0x00047b53) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x00047b53) cell_toolbar2_fixed_pane

0xd734,	// (0x00047b63) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x00047b6c) toolbar2_fixed_button_pane

0x9cfa,	// (0x00044129) toolbar2_fixed_button_pane_g1

0x9d02,	// (0x00044131) toolbar2_fixed_button_pane_g2

0x9d0a,	// (0x00044139) toolbar2_fixed_button_pane_g3

0x9d12,	// (0x00044141) toolbar2_fixed_button_pane_g4

0x9d1a,	// (0x00044149) toolbar2_fixed_button_pane_g5

0x9d22,	// (0x00044151) toolbar2_fixed_button_pane_g6

0x9d2a,	// (0x00044159) toolbar2_fixed_button_pane_g7

0x9d32,	// (0x00044161) toolbar2_fixed_button_pane_g8

0x9d3a,	// (0x00044169) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00049c9a) toolbar2_fixed_button_pane_g

0xd745,	// (0x00047b74) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x00047b74) cell_toolbar2_float_pane

0xd756,	// (0x00047b85) cell_toolbar2_float_pane_g1

0xd73d,	// (0x00047b6c) toolbar2_fixed_button_pane_cp

0xc3dd,	// (0x0004680c) fep_vkb_accented_list_pane_ParamLimits

0xc3dd,	// (0x0004680c) fep_vkb_accented_list_pane

0x70e9,	// (0x00041518) bg_popup_fep_shadow_pane_g9

0x94a1,	// (0x000438d0) bg_popup_fep_shadow_pane_cp3

0x895e,	// (0x00042d8d) list_accented_list_pane

0xd75f,	// (0x00047b8e) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x00047b8e) list_single_accented_list_pane

0x94a1,	// (0x000438d0) list_highlight_pane_cp10

0xd770,	// (0x00047b9f) list_single_accented_list_pane_t1

0x67e2,	// (0x00040c11) popup_slider_window_ParamLimits

0x67e2,	// (0x00040c11) popup_slider_window

0xd3ac,	// (0x000477db) aid_indentation_list_msg

0xd82a,	// (0x00047c59) bg_popup_window_pane_cp19

0xd894,	// (0x00047cc3) popup_slider_window_g1

0xd8b0,	// (0x00047cdf) popup_slider_window_g2

0xd8cc,	// (0x00047cfb) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a10e) popup_slider_window_g

0xd928,	// (0x00047d57) popup_slider_window_t1

0xd99c,	// (0x00047dcb) small_volume_slider_vertical_pane

0xc2a3,	// (0x000466d2) small_volume_slider_vertical_pane_g1

0xc2a3,	// (0x000466d2) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00047de7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a120) small_volume_slider_vertical_pane_g

0x5923,	// (0x0003fd52) area_side_right_pane_ParamLimits

0x5923,	// (0x0003fd52) area_side_right_pane

0x731d,	// (0x0004174c) aid_size_side_button_ParamLimits

0x731d,	// (0x0004174c) aid_size_side_button

0x7331,	// (0x00041760) grid_sctrl_middle_pane_ParamLimits

0x7331,	// (0x00041760) grid_sctrl_middle_pane

0x7350,	// (0x0004177f) sctrl_sk_bottom_pane

0x7361,	// (0x00041790) sctrl_sk_top_pane

0x7373,	// (0x000417a2) aid_touch_sctrl_top

0x8224,	// (0x00042653) bg_sctrl_sk_pane_ParamLimits

0x8224,	// (0x00042653) bg_sctrl_sk_pane

0x7380,	// (0x000417af) sctrl_sk_top_pane_g1

0x738d,	// (0x000417bc) sctrl_sk_top_pane_t1

0x7373,	// (0x000417a2) aid_touch_sctrl_bottom

0x8224,	// (0x00042653) bg_sctrl_sk_pane_cp_ParamLimits

0x8224,	// (0x00042653) bg_sctrl_sk_pane_cp

0x73a8,	// (0x000417d7) sctrl_sk_bottom_pane_g1

0x738d,	// (0x000417bc) sctrl_sk_bottom_pane_t1

0x73b1,	// (0x000417e0) cell_sctrl_middle_pane_ParamLimits

0x73b1,	// (0x000417e0) cell_sctrl_middle_pane

0x73cc,	// (0x000417fb) aid_touch_sctrl_middle_ParamLimits

0x73cc,	// (0x000417fb) aid_touch_sctrl_middle

0x8816,	// (0x00042c45) bg_sctrl_middle_pane_ParamLimits

0x8816,	// (0x00042c45) bg_sctrl_middle_pane

0xc52d,	// (0x0004695c) cell_sctrl_middle_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) cell_sctrl_middle_pane_g1

0x73de,	// (0x0004180d) cell_sctrl_middle_pane_g2_ParamLimits

0x73de,	// (0x0004180d) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a12c) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a12c) cell_sctrl_middle_pane_g

0x9cfa,	// (0x00044129) bg_sctrl_middle_pane_g1

0x9d02,	// (0x00044131) bg_sctrl_middle_pane_g2

0x9d0a,	// (0x00044139) bg_sctrl_middle_pane_g3

0x9d12,	// (0x00044141) bg_sctrl_middle_pane_g4

0x9d1a,	// (0x00044149) bg_sctrl_middle_pane_g5

0x9d22,	// (0x00044151) bg_sctrl_middle_pane_g6

0x9d2a,	// (0x00044159) bg_sctrl_middle_pane_g7

0x9d32,	// (0x00044161) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a131) bg_sctrl_middle_pane_g

0x9d3a,	// (0x00044169) bg_sctrl_middle_pane_g8_copy1

0x9cfa,	// (0x00044129) bg_sctrl_sk_pane_g1

0x9d02,	// (0x00044131) bg_sctrl_sk_pane_g2

0x9d0a,	// (0x00044139) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00049c9a) bg_sctrl_sk_pane_g

0x8739,	// (0x00042b68) aid_size_touch_scroll_bar

0x9d12,	// (0x00044141) bg_sctrl_sk_pane_g4

0x9d1a,	// (0x00044149) bg_sctrl_sk_pane_g5

0x9d22,	// (0x00044151) bg_sctrl_sk_pane_g6

0x9d2a,	// (0x00044159) bg_sctrl_sk_pane_g7

0x9d32,	// (0x00044161) bg_sctrl_sk_pane_g8

0x9d3a,	// (0x00044169) bg_sctrl_sk_pane_g9

0x644b,	// (0x0004087a) popup_fep_china_hwr2_fs_candidate_window

0x6455,	// (0x00040884) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6455,	// (0x00040884) popup_fep_china_hwr2_fs_control_window

0xc52d,	// (0x0004695c) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a127) sctrl_sk_top_pane_g

0xd9c1,	// (0x00047df0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x00047df0) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x00047e02) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x00047e02) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x00047e19) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x00047e19) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x00047e2b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x00047e2b) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00047e3b) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x00047e43) aid_fep_china_hwr2_fs_candi_cell

0x7ea7,	// (0x000422d6) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x00047e4d) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x00047e57) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x00047e57) cell_fep_china_hwr2_fs_funtion_grid

0xc2a3,	// (0x000466d2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x00047e6f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x00047e6f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x00047e7d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x00047e7d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a142) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a142) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00047e93) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00047e93) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00047ea8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00047ea8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a147) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a147) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x00047ec4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00047ecc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x00047ed4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a14c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00047edc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00047edc) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x00047ef5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00047efd) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a3,	// (0x000466d2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a3,	// (0x000466d2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x00049f6c) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x00047f05) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98f0,	// (0x00043d1f) clock_nsta_pane_cp_24_ParamLimits

0x98f0,	// (0x00043d1f) clock_nsta_pane_cp_24

0x996e,	// (0x00043d9d) indicator_nsta_pane_cp_24_ParamLimits

0x996e,	// (0x00043d9d) indicator_nsta_pane_cp_24

0xaa01,	// (0x00044e30) heading_pane_g1

0x0001,

0xf8d0,	// (0x00049cff) heading_pane_g

0xb3ef,	// (0x0004581e) grid_sct_catagory_button_pane

0xb41f,	// (0x0004584e) scroll_pane_cp5_ParamLimits

0xbea0,	// (0x000462cf) button_value_adjust_pane_cp5_ParamLimits

0xbea0,	// (0x000462cf) button_value_adjust_pane_cp5

0xbf7f,	// (0x000463ae) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x00047f13) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x00047f13) cell_sct_catagory_button_pane

0xc268,	// (0x00046697) bg_button_pane_cp01_ParamLimits

0xc268,	// (0x00046697) bg_button_pane_cp01

0xc2a3,	// (0x000466d2) cell_sct_catagory_button_pane_g1

0x6821,	// (0x00040c50) popup_tb_extension_window

0xdaf6,	// (0x00047f25) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x00047f25) aid_size_cell_ext

0x8224,	// (0x00042653) bg_tb_trans_pane_cp1_ParamLimits

0x8224,	// (0x00042653) bg_tb_trans_pane_cp1

0xdb16,	// (0x00047f45) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x00047f45) grid_tb_ext_pane

0xdb44,	// (0x00047f73) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x00047f73) cell_tb_ext_pane

0xdb5b,	// (0x00047f8a) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00047f8a) cell_tb_ext_pane_g1

0xdb78,	// (0x00047fa7) cell_tb_ext_pane_t1

0x8224,	// (0x00042653) list_highlight_pane_cp11_ParamLimits

0x8224,	// (0x00042653) list_highlight_pane_cp11

0x5b80,	// (0x0003ffaf) popup_uni_indicator_window_ParamLimits

0x5b80,	// (0x0003ffaf) popup_uni_indicator_window

0x8816,	// (0x00042c45) bg_popup_sub_pane_cp14

0xdb93,	// (0x00047fc2) list_uniindi_pane

0xdb9f,	// (0x00047fce) uniindi_top_pane

0x8224,	// (0x00042653) bg_uniindi_top_pane

0xdbbe,	// (0x00047fed) uniindi_top_pane_g1

0xdbd4,	// (0x00048003) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a153) uniindi_top_pane_g

0xdbfe,	// (0x0004802d) uniindi_top_pane_t1

0xdc28,	// (0x00048057) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00048057) list_single_uniindi_pane

0xc2a3,	// (0x000466d2) bg_uniindi_top_pane_g1

0xdc3b,	// (0x0004806a) list_single_uniindi_pane_g1

0xdc4e,	// (0x0004807d) list_single_uniindi_pane_t1

0x7ea7,	// (0x000422d6) control_bg_pane

0xdc73,	// (0x000480a2) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x000480ab) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x000480b4) control_bg_pane_g1

0xdc8e,	// (0x000480bd) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a15c) control_bg_pane_g

0xbcfb,	// (0x0004612a) cell_indicator_nsta_pane_g1_ParamLimits

0xbd09,	// (0x00046138) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x00049ed0) cell_indicator_nsta_pane_g_ParamLimits

0x55b5,	// (0x0003f9e4) form2_midp_time_pane_t1_ParamLimits

0x857b,	// (0x000429aa) main_idle_act4_pane_ParamLimits

0x857b,	// (0x000429aa) main_idle_act4_pane

0x6821,	// (0x00040c50) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x00047f63) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x00047f63) tb_ext_find_pane

0xdc97,	// (0x000480c6) ai_gene_pane_1_cp1

0x95e8,	// (0x00043a17) ai_gene_pane_2_cp1

0xdc9f,	// (0x000480ce) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x000480d7) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x000480e0) list_single_idle_plugin_player_pane

0xdcba,	// (0x000480e9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x000480e9) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x0004810b) main_idle_act4_pane_t1

0xdcee,	// (0x0004811d) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a161) main_idle_act4_pane_t

0xdd00,	// (0x0004812f) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x0004812f) middle_sk_idle_act4_pane

0xdd16,	// (0x00048145) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x0004815f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x0004815f) shortcut_wheel_idle_act4_pane

0xc2a3,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g1

0xc2a3,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g2

0xc2a3,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g3

0xc2a3,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g4

0xc2a3,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00048173) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x0004817b) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00048183) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x0004818b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a166) shortcut_wheel_idle_act4_pane_g

0xc52d,	// (0x0004695c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x000481ef) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x000481ef) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004a189) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004a189) middle_sk_idle_act4_pane_g

0xddcc,	// (0x000481fb) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x000481fb) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00048218) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00048218) grid_ai_shortcut_pane

0xde02,	// (0x00048231) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00048231) list_highlight_pane_cp16

0xde0f,	// (0x0004823e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x0004823e) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x0004824a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x0004824a) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00048262) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00048262) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004a18e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004a18e) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00048275) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00048275) cell_ai_shortcut_pane

0xde6a,	// (0x00048299) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00048299) cell_ai_shortcut_pane_g1

0xdc97,	// (0x000480c6) ai_gene_pane_1_cp2

0xde8c,	// (0x000482bb) ai_gene_pane_2_cp2

0xde94,	// (0x000482c3) list_highlight_pane_cp15

0xde9d,	// (0x000482cc) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x000482c3) list_highlight_pane_cp17

0xdea5,	// (0x000482d4) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x000482dc) list_single_idle_plugin_player_pane_g1

0xb648,	// (0x00045a77) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004a195) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x000482e4) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x000482f2) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00048300) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x0004830e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004a19a) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x0004831c) wait_bar_pane_cp15

0xdef5,	// (0x00048324) grid_ai_notification_pane

0xb648,	// (0x00045a77) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x0004832d) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x0004832d) cell_ai_notification_pane

0xdf0b,	// (0x0004833a) cell_ai_notification_pane_g1

0xdf13,	// (0x00048342) cell_ai_notification_pane_t1

0xdf21,	// (0x00048350) tb_ext_find_button_pane

0xdf29,	// (0x00048358) tb_ext_find_pane_g1

0xdf31,	// (0x00048360) tb_ext_find_pane_t1

0x8e8e,	// (0x000432bd) tb_ext_find_button_pane_g1

0xdf3f,	// (0x0004836e) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004a1a3) tb_ext_find_button_pane_g

0xdcdc,	// (0x0004810b) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x0004811d) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a161) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00048145) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00048153) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00048153) sat_plugin_idle_act4_pane

0xdf48,	// (0x00048377) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00048377) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x0004838a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x0004838a) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x0004839d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x0004839d) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x000483b0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x000483b0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004a1a8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004a1a8) sat_plugin_idle_act4_pane_t

0x5abb,	// (0x0003feea) popup_battery_window_ParamLimits

0x5abb,	// (0x0003feea) popup_battery_window

0x8224,	// (0x00042653) bg_popup_sub_pane_cp25_ParamLimits

0x8224,	// (0x00042653) bg_popup_sub_pane_cp25

0xdf94,	// (0x000483c3) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x000483c3) popup_battery_window_g1

0xdfa0,	// (0x000483cf) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x000483cf) popup_battery_window_t1

0xdfb2,	// (0x000483e1) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x000483e1) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004a1b1) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004a1b1) popup_battery_window_t

0x94b5,	// (0x000438e4) midp_canvas_pane_ParamLimits

0x952c,	// (0x0004395b) midp_keypad_pane_ParamLimits

0x952c,	// (0x0004395b) midp_keypad_pane

0x97f0,	// (0x00043c1f) main_midp_pane_ParamLimits

0xbd64,	// (0x00046193) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x000483fe) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x000483fe) aid_size_cell_midp_keypad

0xdfe9,	// (0x00048418) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00048418) midp_keyp_game_grid_pane

0xe009,	// (0x00048438) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00048438) midp_keyp_rocker_pane

0xe042,	// (0x00048471) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00048471) midp_keyp_sk_left_pane

0xe09c,	// (0x000484cb) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x000484cb) midp_keyp_sk_right_pane

0x7ea7,	// (0x000422d6) bg_button_pane_cp03

0xe0f6,	// (0x00048525) midp_keyp_sk_left_pane_g1

0x7ea7,	// (0x000422d6) bg_button_pane_cp04

0xe0f6,	// (0x00048525) midp_keyp_sk_right_pane_g1

0xc2a3,	// (0x000466d2) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x0004852e) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x0004852e) keyp_game_cell_pane

0x7ea7,	// (0x000422d6) bg_button_pane_cp02

0xe112,	// (0x00048541) keyp_game_cell_pane_g1

0x5aff,	// (0x0003ff2e) popup_fep_vkb2_window_ParamLimits

0x5aff,	// (0x0003ff2e) popup_fep_vkb2_window

0x73fc,	// (0x0004182b) aid_size_cell_vkb2_ParamLimits

0x73fc,	// (0x0004182b) aid_size_cell_vkb2

0x7450,	// (0x0004187f) popup_fep_vkb2_window_g1_ParamLimits

0x7450,	// (0x0004187f) popup_fep_vkb2_window_g1

0x7498,	// (0x000418c7) vkb2_area_bottom_pane_ParamLimits

0x7498,	// (0x000418c7) vkb2_area_bottom_pane

0x74e4,	// (0x00041913) vkb2_area_keypad_pane_ParamLimits

0x74e4,	// (0x00041913) vkb2_area_keypad_pane

0x7526,	// (0x00041955) vkb2_area_top_pane_ParamLimits

0x7526,	// (0x00041955) vkb2_area_top_pane

0x75a0,	// (0x000419cf) vkb2_top_entry_pane_ParamLimits

0x75a0,	// (0x000419cf) vkb2_top_entry_pane

0x75ca,	// (0x000419f9) vkb2_top_grid_left_pane_ParamLimits

0x75ca,	// (0x000419f9) vkb2_top_grid_left_pane

0x75e8,	// (0x00041a17) vkb2_top_grid_right_pane_ParamLimits

0x75e8,	// (0x00041a17) vkb2_top_grid_right_pane

0x7606,	// (0x00041a35) vkb2_cell_keypad_pane_ParamLimits

0x7606,	// (0x00041a35) vkb2_cell_keypad_pane

0x76d7,	// (0x00041b06) vkb2_area_bottom_grid_pane_ParamLimits

0x76d7,	// (0x00041b06) vkb2_area_bottom_grid_pane

0x76fd,	// (0x00041b2c) vkb2_area_bottom_pane_g1_ParamLimits

0x76fd,	// (0x00041b2c) vkb2_area_bottom_pane_g1

0x7721,	// (0x00041b50) vkb2_area_bottom_pane_g2_ParamLimits

0x7721,	// (0x00041b50) vkb2_area_bottom_pane_g2

0x774f,	// (0x00041b7e) vkb2_area_bottom_pane_g3_ParamLimits

0x774f,	// (0x00041b7e) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004a1b6) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004a1b6) vkb2_area_bottom_pane_g

0x77b0,	// (0x00041bdf) vkb2_top_cell_left_pane_ParamLimits

0x77b0,	// (0x00041bdf) vkb2_top_cell_left_pane

0xe123,	// (0x00048552) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x00048552) vkb2_top_entry_pane_g1

0xe131,	// (0x00048560) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x00048560) vkb2_top_entry_pane_t1

0xe163,	// (0x00048592) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x00048592) vkb2_top_entry_pane_t2

0xe195,	// (0x000485c4) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x000485c4) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004a1bd) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004a1bd) vkb2_top_entry_pane_t

0x77fd,	// (0x00041c2c) vkb2_top_grid_right_pane_g1_ParamLimits

0x77fd,	// (0x00041c2c) vkb2_top_grid_right_pane_g1

0x7813,	// (0x00041c42) vkb2_top_grid_right_pane_g2_ParamLimits

0x7813,	// (0x00041c42) vkb2_top_grid_right_pane_g2

0x782b,	// (0x00041c5a) vkb2_top_grid_right_pane_g3_ParamLimits

0x782b,	// (0x00041c5a) vkb2_top_grid_right_pane_g3

0x7843,	// (0x00041c72) vkb2_top_grid_right_pane_g4_ParamLimits

0x7843,	// (0x00041c72) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004a1c4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004a1c4) vkb2_top_grid_right_pane_g

0x7859,	// (0x00041c88) vkb2_top_cell_left_pane_g1

0x7870,	// (0x00041c9f) vkb2_cell_keypad_pane_g1_ParamLimits

0x7870,	// (0x00041c9f) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x000485e8) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x000485e8) vkb2_cell_keypad_pane_t1

0x787e,	// (0x00041cad) vkb2_cell_bottom_grid_pane_ParamLimits

0x787e,	// (0x00041cad) vkb2_cell_bottom_grid_pane

0x78b7,	// (0x00041ce6) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00048193) aid_call2_pane_cp02

0xdd6c,	// (0x0004819b) aid_call_pane_cp02

0xdd74,	// (0x000481a3) clock_digital_number_pane_cp10

0xdd7c,	// (0x000481ab) clock_digital_number_pane_cp11

0xdd84,	// (0x000481b3) clock_digital_number_pane_cp12

0xdd8c,	// (0x000481bb) clock_digital_number_pane_cp13

0xdd94,	// (0x000481c3) clock_digital_separator_pane_cp10

0x8e8e,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g1

0x8e8e,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x000481cb) popup_clock_digital_analogue_window_cp2_g3

0x8e8e,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x000481cb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a179) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x000481d3) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x000481e1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004a184) popup_clock_digital_analogue_window_cp2_t

0xc2a3,	// (0x000466d2) clock_digital_number_pane_cp10_g1

0xc2a3,	// (0x000466d2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00049f6c) clock_digital_number_pane_cp10_g

0xc2a3,	// (0x000466d2) clock_digital_separator_pane_cp10_g1

0xc2a3,	// (0x000466d2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00049f6c) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x0004800f) uniindi_top_pane_g3

0xdbf1,	// (0x00048020) uniindi_top_pane_g4

0x7691,	// (0x00041ac0) vkb2_row_keypad_pane_ParamLimits

0x7691,	// (0x00041ac0) vkb2_row_keypad_pane

0x78d3,	// (0x00041d02) vkb2_cell_t_keypad_pane_ParamLimits

0x78d3,	// (0x00041d02) vkb2_cell_t_keypad_pane

0x78e3,	// (0x00041d12) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78e3,	// (0x00041d12) vkb2_cell_t_keypad_pane_cp08

0x78f6,	// (0x00041d25) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78f6,	// (0x00041d25) vkb2_cell_t_keypad_pane_cp09

0x790a,	// (0x00041d39) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x790a,	// (0x00041d39) vkb2_cell_t_keypad_pane_cp01

0x791b,	// (0x00041d4a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x791b,	// (0x00041d4a) vkb2_cell_t_keypad_pane_cp02

0x792c,	// (0x00041d5b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x792c,	// (0x00041d5b) vkb2_cell_t_keypad_pane_cp03

0x793d,	// (0x00041d6c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x793d,	// (0x00041d6c) vkb2_cell_t_keypad_pane_cp04

0x794e,	// (0x00041d7d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x794e,	// (0x00041d7d) vkb2_cell_t_keypad_pane_cp05

0x795f,	// (0x00041d8e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x795f,	// (0x00041d8e) vkb2_cell_t_keypad_pane_cp06

0x7970,	// (0x00041d9f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7970,	// (0x00041d9f) vkb2_cell_t_keypad_pane_cp07

0x7981,	// (0x00041db0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7981,	// (0x00041db0) vkb2_cell_t_keypad_pane_cp10

0xc52d,	// (0x0004695c) vkb2_cell_t_keypad_pane_g1

0xe1d0,	// (0x000485ff) vkb2_cell_t_keypad_pane_t1

0x7ea7,	// (0x000422d6) popup_grid_graphic2_window

0xe1e2,	// (0x00048611) aid_size_cell_graphic2_ParamLimits

0xe1e2,	// (0x00048611) aid_size_cell_graphic2

0xe21a,	// (0x00048649) bg_popup_window_pane_cp21_ParamLimits

0xe21a,	// (0x00048649) bg_popup_window_pane_cp21

0xe228,	// (0x00048657) graphic2_pages_pane_ParamLimits

0xe228,	// (0x00048657) graphic2_pages_pane

0xe26e,	// (0x0004869d) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x0004869d) grid_graphic2_control_pane

0xe2ac,	// (0x000486db) grid_graphic2_pane_ParamLimits

0xe2ac,	// (0x000486db) grid_graphic2_pane

0xe320,	// (0x0004874f) cell_graphic2_pane

0x7ea7,	// (0x000422d6) main_comp_mode_pane

0xd460,	// (0x0004788f) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00047c59) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x00047c65) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x00047c65) bg_touch_area_indi_pane

0xd84c,	// (0x00047c7b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00047c7b) bg_touch_area_indi_pane_cp01

0xd862,	// (0x00047c91) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x00047c91) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00047ca9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00047ca9) bg_touch_area_indi_pane_cp03

0xd894,	// (0x00047cc3) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00047cdf) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00047cfb) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a10e) popup_slider_window_g_ParamLimits

0xd928,	// (0x00047d57) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00047dcb) small_volume_slider_vertical_pane_ParamLimits

0xe320,	// (0x0004874f) cell_graphic2_pane_ParamLimits

0xe36f,	// (0x0004879e) bg_button_pane_cp10_ParamLimits

0xe36f,	// (0x0004879e) bg_button_pane_cp10

0xe382,	// (0x000487b1) bg_button_pane_cp11_ParamLimits

0xe382,	// (0x000487b1) bg_button_pane_cp11

0xe395,	// (0x000487c4) graphic2_pages_pane_g1_ParamLimits

0xe395,	// (0x000487c4) graphic2_pages_pane_g1

0xe3b0,	// (0x000487df) graphic2_pages_pane_g2_ParamLimits

0xe3b0,	// (0x000487df) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004a1d2) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004a1d2) graphic2_pages_pane_g

0xe3c8,	// (0x000487f7) graphic2_pages_pane_t1_ParamLimits

0xe3c8,	// (0x000487f7) graphic2_pages_pane_t1

0xe401,	// (0x00048830) cell_graphic2_control_pane_ParamLimits

0xe401,	// (0x00048830) cell_graphic2_control_pane

0xe41f,	// (0x0004884e) cell_graphic2_pane_g1_ParamLimits

0xe41f,	// (0x0004884e) cell_graphic2_pane_g1

0xe42c,	// (0x0004885b) cell_graphic2_pane_g2_ParamLimits

0xe42c,	// (0x0004885b) cell_graphic2_pane_g2

0xe439,	// (0x00048868) cell_graphic2_pane_g3_ParamLimits

0xe439,	// (0x00048868) cell_graphic2_pane_g3

0xe446,	// (0x00048875) cell_graphic2_pane_g4_ParamLimits

0xe446,	// (0x00048875) cell_graphic2_pane_g4

0xe453,	// (0x00048882) cell_graphic2_pane_g5_ParamLimits

0xe453,	// (0x00048882) cell_graphic2_pane_g5

0x0004,

0x000f,	// (0x0003a43e) cell_graphic2_pane_g_ParamLimits

0x000f,	// (0x0003a43e) cell_graphic2_pane_g

0xe46e,	// (0x0004889d) cell_graphic2_pane_t1_ParamLimits

0xe46e,	// (0x0004889d) cell_graphic2_pane_t1

0x9d6e,	// (0x0004419d) grid_highlight_pane_cp11_ParamLimits

0x9d6e,	// (0x0004419d) grid_highlight_pane_cp11

0x8224,	// (0x00042653) bg_button_pane_cp05

0xe4a5,	// (0x000488d4) cell_graphic2_control_pane_g1

0xc2a3,	// (0x000466d2) bg_touch_area_indi_pane_g1

0xe4cd,	// (0x000488fc) aid_cmod_rocker_key_size

0xe4d7,	// (0x00048906) aid_cmode_itu_key_size

0xe4e1,	// (0x00048910) main_cmode_video_pane

0xe4eb,	// (0x0004891a) main_comp_mode_itu_pane

0xe4f7,	// (0x00048926) main_comp_mode_rocker_pane

0xe503,	// (0x00048932) cell_cmode_rocker_pane_ParamLimits

0xe503,	// (0x00048932) cell_cmode_rocker_pane

0xe515,	// (0x00048944) cell_cmode_itu_pane_ParamLimits

0xe515,	// (0x00048944) cell_cmode_itu_pane

0x8816,	// (0x00042c45) bg_button_pane_cp06_ParamLimits

0x8816,	// (0x00042c45) bg_button_pane_cp06

0xc52d,	// (0x0004695c) cell_cmode_rocker_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) cell_cmode_rocker_pane_g1

0xda40,	// (0x00047e6f) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x00047e6f) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x0004a1d7) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x0004a1d7) cell_cmode_rocker_pane_g

0x7ea7,	// (0x000422d6) bg_button_pane_cp07

0xe52a,	// (0x00048959) cell_cmode_itu_pane_g1

0xe533,	// (0x00048962) cell_cmode_itu_pane_t1

0xe541,	// (0x00048970) cell_cmode_itu_pane_t2

0x0001,

0x001f,	// (0x0003a44e) cell_cmode_itu_pane_t

0xdc63,	// (0x00048092) aid_touch_ctrl_left

0xdc6b,	// (0x0004809a) aid_touch_ctrl_right

0x7ea7,	// (0x000422d6) compa_mode_pane

0xe54f,	// (0x0004897e) aid_cmod_rocker_key_size_cp

0xe559,	// (0x00048988) aid_cmode_itu_key_size_cp

0xe563,	// (0x00048992) compa_mode_pane_g1

0xe56b,	// (0x0004899a) compa_mode_pane_g2

0xe573,	// (0x000489a2) compa_mode_pane_g3

0x0002,

0x0024,	// (0x0003a453) compa_mode_pane_g

0xe57b,	// (0x000489aa) main_comp_mode_itu_pane_cp

0xe583,	// (0x000489b2) main_comp_mode_rocker_pane_cp

0xe58b,	// (0x000489ba) cell_cmode_itu_pane_cp_ParamLimits

0xe58b,	// (0x000489ba) cell_cmode_itu_pane_cp

0xe5a0,	// (0x000489cf) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a0,	// (0x000489cf) cell_cmode_rocker_pane_cp

0x8816,	// (0x00042c45) bg_button_pane_cp06_cp_ParamLimits

0x8816,	// (0x00042c45) bg_button_pane_cp06_cp

0xc52d,	// (0x0004695c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc52d,	// (0x0004695c) cell_cmode_rocker_pane_g1_cp

0xc2a3,	// (0x000466d2) cell_cmode_rocker_pane_g2_cp

0x7ea7,	// (0x000422d6) bg_button_pane_cp07_cp

0xb240,	// (0x0004566f) cell_cmode_itu_pane_g1_cp

0xe5b2,	// (0x000489e1) cell_cmode_itu_pane_t1_cp

0xe5b2,	// (0x000489e1) cell_cmode_itu_pane_t2_cp

0xb22d,	// (0x0004565c) settings_code_pane_cp2

0x7f9b,	// (0x000423ca) bg_popup_window_pane_cp3_ParamLimits

0x83fe,	// (0x0004282d) heading_pane_cp3_ParamLimits

0x840a,	// (0x00042839) listscroll_popup_graphic_pane_ParamLimits

0x6ecd,	// (0x000412fc) fep_hwr_aid_pane_ParamLimits

0x7373,	// (0x000417a2) aid_touch_sctrl_top_ParamLimits

0x7380,	// (0x000417af) sctrl_sk_top_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a127) sctrl_sk_top_pane_g_ParamLimits

0x738d,	// (0x000417bc) sctrl_sk_top_pane_t1_ParamLimits

0x7373,	// (0x000417a2) aid_touch_sctrl_bottom_ParamLimits

0x738d,	// (0x000417bc) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00047fdb) aid_area_touch_clock

0x7568,	// (0x00041997) aid_vkb2_area_top_pane_cell_ParamLimits

0x7568,	// (0x00041997) aid_vkb2_area_top_pane_cell

0x76b3,	// (0x00041ae2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76b3,	// (0x00041ae2) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x0004854a) popup_char_count_window

0xe5c0,	// (0x000489ef) popup_char_count_window_g1

0xe5c9,	// (0x000489f8) popup_char_count_window_g2

0xe5d2,	// (0x00048a01) popup_char_count_window_g3

0x0002,

0x002b,	// (0x0003a45a) popup_char_count_window_g

0xe5db,	// (0x00048a0a) popup_char_count_window_t1

0x742e,	// (0x0004185d) popup_fep_char_preview_window_ParamLimits

0x742e,	// (0x0004185d) popup_fep_char_preview_window

0x7586,	// (0x000419b5) vkb2_top_candi_pane_ParamLimits

0x7586,	// (0x000419b5) vkb2_top_candi_pane

0xe5e9,	// (0x00048a18) cell_vkb2_top_candi_pane_ParamLimits

0xe5e9,	// (0x00048a18) cell_vkb2_top_candi_pane

0xa381,	// (0x000447b0) bg_popup_fep_char_preview_window_ParamLimits

0xa381,	// (0x000447b0) bg_popup_fep_char_preview_window

0x7996,	// (0x00041dc5) popup_fep_char_preview_window_t1_ParamLimits

0x7996,	// (0x00041dc5) popup_fep_char_preview_window_t1

0xe636,	// (0x00048a65) bg_popup_fep_char_preview_window_g1

0xe63e,	// (0x00048a6d) bg_popup_fep_char_preview_window_g2

0xe646,	// (0x00048a75) bg_popup_fep_char_preview_window_g3

0xe64e,	// (0x00048a7d) bg_popup_fep_char_preview_window_g4

0xe656,	// (0x00048a85) bg_popup_fep_char_preview_window_g5

0x79d0,	// (0x00041dff) bg_popup_fep_char_preview_window_g6

0xe65e,	// (0x00048a8d) bg_popup_fep_char_preview_window_g7

0xe666,	// (0x00048a95) bg_popup_fep_char_preview_window_g8

0xe66e,	// (0x00048a9d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdad,	// (0x0004a1dc) bg_popup_fep_char_preview_window_g

0xc52d,	// (0x0004695c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) cell_vkb2_top_candi_pane_g1

0xc844,	// (0x00046c73) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc844,	// (0x00046c73) cell_vkb2_top_candi_pane_g2

0xc865,	// (0x00046c94) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc865,	// (0x00046c94) cell_vkb2_top_candi_pane_g3

0x79d8,	// (0x00041e07) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79d8,	// (0x00041e07) cell_vkb2_top_candi_pane_g4

0xe3e0,	// (0x0004880f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e0,	// (0x0004880f) cell_vkb2_top_candi_pane_g5

0xda40,	// (0x00047e6f) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda40,	// (0x00047e6f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc0,	// (0x0004a1ef) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc0,	// (0x0004a1ef) cell_vkb2_top_candi_pane_g

0x79f9,	// (0x00041e28) cell_vkb2_top_candi_pane_t1

0x6c62,	// (0x00041091) aid_size_touch_slider_mark_ParamLimits

0x6c62,	// (0x00041091) aid_size_touch_slider_mark

0xe25e,	// (0x0004868d) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x0004868d) grid_graphic2_catg_pane

0xe2fc,	// (0x0004872b) popup_grid_graphic2_window_t1_ParamLimits

0xe2fc,	// (0x0004872b) popup_grid_graphic2_window_t1

0xe30e,	// (0x0004873d) popup_grid_graphic2_window_t2_ParamLimits

0xe30e,	// (0x0004873d) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004a1cd) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004a1cd) popup_grid_graphic2_window_t

0x8224,	// (0x00042653) bg_button_pane_cp05_ParamLimits

0xe4a5,	// (0x000488d4) cell_graphic2_control_pane_g1_ParamLimits

0xe676,	// (0x00048aa5) cell_graphic2_catg_pane_ParamLimits

0xe676,	// (0x00048aa5) cell_graphic2_catg_pane

0x7ea7,	// (0x000422d6) bg_button_pane_cp12

0xe688,	// (0x00048ab7) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00047fa7) cell_tb_ext_pane_t1_ParamLimits

0x77d0,	// (0x00041bff) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77d0,	// (0x00041bff) vkb2_top_cell_right_narrow_pane

0x77e8,	// (0x00041c17) vkb2_top_cell_right_wide_pane_ParamLimits

0x77e8,	// (0x00041c17) vkb2_top_cell_right_wide_pane

0x6ebf,	// (0x000412ee) bg_vkb2_func_pane_ParamLimits

0x6ebf,	// (0x000412ee) bg_vkb2_func_pane

0x7859,	// (0x00041c88) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp03

0x78b7,	// (0x00041ce6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d02,	// (0x00044131) bg_vkb2_func_pane_g1

0x9d0a,	// (0x00044139) bg_vkb2_func_pane_g2

0x9d1a,	// (0x00044149) bg_vkb2_func_pane_g3

0x9d12,	// (0x00044141) bg_vkb2_func_pane_g4

0x9d22,	// (0x00044151) bg_vkb2_func_pane_g5

0x9d2a,	// (0x00044159) bg_vkb2_func_pane_g6

0x9d32,	// (0x00044161) bg_vkb2_func_pane_g7

0x9d3a,	// (0x00044169) bg_vkb2_func_pane_g8

0x9cfa,	// (0x00044129) bg_vkb2_func_pane_g9

0x0008,

0xfdcd,	// (0x0004a1fc) bg_vkb2_func_pane_g

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp01

0x7859,	// (0x00041c88) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7859,	// (0x00041c88) vkb2_top_cell_right_wide_pane_g1

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ebf,	// (0x000412ee) bg_vkb2_fuc_pane_cp02

0x78b7,	// (0x00041ce6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78b7,	// (0x00041ce6) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00047bdd) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00047bdd) aid_touch_area_decrease

0xd7cc,	// (0x00047bfb) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00047bfb) aid_touch_area_increase

0xd7d8,	// (0x00047c07) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00047c07) aid_touch_area_mute

0xd7fc,	// (0x00047c2b) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00047c2b) aid_touch_area_slider

0xd8e8,	// (0x00047d17) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00047d17) popup_slider_window_g4

0xd8f4,	// (0x00047d23) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x00047d23) popup_slider_window_g5

0xd916,	// (0x00047d45) popup_slider_window_g6_ParamLimits

0xd916,	// (0x00047d45) popup_slider_window_g6

0xd956,	// (0x00047d85) popup_slider_window_t2_ParamLimits

0xd956,	// (0x00047d85) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a11b) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a11b) popup_slider_window_t

0xd96e,	// (0x00047d9d) slider_pane_ParamLimits

0xd96e,	// (0x00047d9d) slider_pane

0xe691,	// (0x00048ac0) slider_pane_g1_ParamLimits

0xe691,	// (0x00048ac0) slider_pane_g1

0xe6a5,	// (0x00048ad4) slider_pane_g2_ParamLimits

0xe6a5,	// (0x00048ad4) slider_pane_g2

0xe6bb,	// (0x00048aea) slider_pane_g3_ParamLimits

0xe6bb,	// (0x00048aea) slider_pane_g3

0x0003,

0x0052,	// (0x0003a481) slider_pane_g_ParamLimits

0x0052,	// (0x0003a481) slider_pane_g

0x687d,	// (0x00040cac) popup_tb_float_extension_window_ParamLimits

0x687d,	// (0x00040cac) popup_tb_float_extension_window

0xe6e7,	// (0x00048b16) aid_size_cell_tb_float_ext

0x7ea7,	// (0x000422d6) bg_popup_sub_window_cp28

0xe6f3,	// (0x00048b22) grid_tb_float_ext_pane

0xe6fd,	// (0x00048b2c) cell_tb_float_ext_pane_ParamLimits

0xe6fd,	// (0x00048b2c) cell_tb_float_ext_pane

0xe717,	// (0x00048b46) cell_tb_float_ext_pane_g1

0xe720,	// (0x00048b4f) grid_highlight_pane_cp12

0x7000,	// (0x0004142f) cell_last_hwr_side_pane_ParamLimits

0x7000,	// (0x0004142f) cell_last_hwr_side_pane

0xc2a3,	// (0x000466d2) cell_last_hwr_side_pane_g1

0xe729,	// (0x00048b58) cell_last_hwr_side_pane_g2

0x0001,

0xfde0,	// (0x0004a20f) cell_last_hwr_side_pane_g

0x777f,	// (0x00041bae) vkb2_area_bottom_space_btn_pane_ParamLimits

0x777f,	// (0x00041bae) vkb2_area_bottom_space_btn_pane

0xc52d,	// (0x0004695c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d0,	// (0x000485ff) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79f9,	// (0x00041e28) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a18,	// (0x00041e47) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a18,	// (0x00041e47) vkb2_area_bottom_space_btn_pane_g1

0x7a52,	// (0x00041e81) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a52,	// (0x00041e81) vkb2_area_bottom_space_btn_pane_g2

0x7a88,	// (0x00041eb7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a88,	// (0x00041eb7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde5,	// (0x0004a214) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde5,	// (0x0004a214) vkb2_area_bottom_space_btn_pane_g

0x6f74,	// (0x000413a3) cel_fep_hwr_func_pane_ParamLimits

0x6f74,	// (0x000413a3) cel_fep_hwr_func_pane

0x6fb0,	// (0x000413df) cell_hwr_side_button_pane_ParamLimits

0x6fb0,	// (0x000413df) cell_hwr_side_button_pane

0xdbac,	// (0x00047fdb) aid_area_touch_clock_ParamLimits

0x8224,	// (0x00042653) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00047fed) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00048003) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x0004800f) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00048020) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a153) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x0004802d) uniindi_top_pane_t1_ParamLimits

0x8224,	// (0x00042653) bg_vkb2_func_pane_cp01_ParamLimits

0x8224,	// (0x00042653) bg_vkb2_func_pane_cp01

0xe732,	// (0x00048b61) cel_fep_hwr_func_pane_g1_ParamLimits

0xe732,	// (0x00048b61) cel_fep_hwr_func_pane_g1

0x8224,	// (0x00042653) bg_vkb2_func_pane_cp02_ParamLimits

0x8224,	// (0x00042653) bg_vkb2_func_pane_cp02

0xe732,	// (0x00048b61) cell_hwr_side_button_pane_g1_ParamLimits

0xe732,	// (0x00048b61) cell_hwr_side_button_pane_g1

0x9b7b,	// (0x00043faa) status_pane_g4_ParamLimits

0x9b7b,	// (0x00043faa) status_pane_g4

0x9b95,	// (0x00043fc4) status_pane_t1

0xbfe8,	// (0x00046417) form2_midp_gauge_slider_cont_pane

0xbff0,	// (0x0004641f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc002,	// (0x00046431) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc014,	// (0x00046443) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x00049f1f) form2_midp_gauge_slider_pane_t_ParamLimits

0xc026,	// (0x00046455) form2_midp_slider_pane_ParamLimits

0x73ee,	// (0x0004181d) aid_size_cell_func_vkb2_ParamLimits

0x73ee,	// (0x0004181d) aid_size_cell_func_vkb2

0xe6d3,	// (0x00048b02) slider_pane_g4_ParamLimits

0xe6d3,	// (0x00048b02) slider_pane_g4

0x7ad2,	// (0x00041f01) form2_midp_gauge_slider_pane_t2_cp01

0x7ae0,	// (0x00041f0f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ae0,	// (0x00041f0f) form2_midp_gauge_slider_pane_t3_cp01

0x7afd,	// (0x00041f2c) form2_midp_slider_pane_cp01

0x7ea7,	// (0x000422d6) navi_smil_pane

0xe76b,	// (0x00048b9a) navi_smil_pane_g1

0xe773,	// (0x00048ba2) navi_smil_pane_t1

0xe740,	// (0x00048b6f) form2_midp_slider_pane_g1

0xe749,	// (0x00048b78) form2_midp_slider_pane_g2

0xe751,	// (0x00048b80) form2_midp_slider_pane_g3

0xe740,	// (0x00048b6f) form2_midp_slider_pane_g4

0xe759,	// (0x00048b88) form2_midp_slider_pane_g5

0x0004,

0x0064,	// (0x0003a493) form2_midp_slider_pane_g

0x7ac2,	// (0x00041ef1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ac2,	// (0x00041ef1) vkb2_area_bottom_space_btn_pane_g4

0x99aa,	// (0x00043dd9) lc0_navi_pane_ParamLimits

0x99aa,	// (0x00043dd9) lc0_navi_pane

0x9a20,	// (0x00043e4f) lc0_stat_indi_pane_ParamLimits

0x9a20,	// (0x00043e4f) lc0_stat_indi_pane

0x9a37,	// (0x00043e66) ls0_title_pane_ParamLimits

0x9a37,	// (0x00043e66) ls0_title_pane

0x8816,	// (0x00042c45) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x00047fc2) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00047fce) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x0004806a) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x0004807d) list_single_uniindi_pane_t1_ParamLimits

0x7b06,	// (0x00041f35) lc0_stat_clock_pane_ParamLimits

0x7b06,	// (0x00041f35) lc0_stat_clock_pane

0xe781,	// (0x00048bb0) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x00048bb0) lc0_stat_indi_pane_g1

0xe78e,	// (0x00048bbd) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x00048bbd) lc0_stat_indi_pane_g2

0x0001,

0x006f,	// (0x0003a49e) lc0_stat_indi_pane_g_ParamLimits

0x006f,	// (0x0003a49e) lc0_stat_indi_pane_g

0x7b13,	// (0x00041f42) lc0_uni_indicator_pane_ParamLimits

0x7b13,	// (0x00041f42) lc0_uni_indicator_pane

0xe79b,	// (0x00048bca) ls0_title_pane_g1_ParamLimits

0xe79b,	// (0x00048bca) ls0_title_pane_g1

0xe7af,	// (0x00048bde) ls0_title_pane_t1_ParamLimits

0xe7af,	// (0x00048bde) ls0_title_pane_t1

0x7b20,	// (0x00041f4f) lc0_uni_indicator_pane_g1_ParamLimits

0x7b20,	// (0x00041f4f) lc0_uni_indicator_pane_g1

0xe7e5,	// (0x00048c14) lc0_stat_clock_pane_t1

0x7ea7,	// (0x000422d6) main_ai5_pane

0xe7f3,	// (0x00048c22) ai5_sk_pane_ParamLimits

0xe7f3,	// (0x00048c22) ai5_sk_pane

0xe800,	// (0x00048c2f) cell_ai5_widget_pane_ParamLimits

0xe800,	// (0x00048c2f) cell_ai5_widget_pane

0xe8b2,	// (0x00048ce1) aid_size_cell_widget_grid

0xe8c8,	// (0x00048cf7) bg_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x00048cf7) bg_ai5_widget_pane

0xe93c,	// (0x00048d6b) cell_ai5_widget_pane_g2

0xe94c,	// (0x00048d7b) cell_ai5_widget_pane_g3

0xe963,	// (0x00048d92) cell_ai5_widget_pane_g4

0xe96f,	// (0x00048d9e) cell_ai5_widget_pane_g5

0xe97b,	// (0x00048daa) cell_ai5_widget_pane_g6

0xe987,	// (0x00048db6) cell_ai5_widget_pane_g7

0xe9cf,	// (0x00048dfe) cell_ai5_widget_pane_t1_ParamLimits

0xe9cf,	// (0x00048dfe) cell_ai5_widget_pane_t1

0xe9ec,	// (0x00048e1b) cell_ai5_widget_pane_t2_ParamLimits

0xe9ec,	// (0x00048e1b) cell_ai5_widget_pane_t2

0xea04,	// (0x00048e33) cell_ai5_widget_pane_t3_ParamLimits

0xea04,	// (0x00048e33) cell_ai5_widget_pane_t3

0xea1c,	// (0x00048e4b) cell_ai5_widget_pane_t4_ParamLimits

0xea1c,	// (0x00048e4b) cell_ai5_widget_pane_t4

0xea39,	// (0x00048e68) cell_ai5_widget_pane_t5_ParamLimits

0xea39,	// (0x00048e68) cell_ai5_widget_pane_t5

0xea58,	// (0x00048e87) cell_ai5_widget_pane_t6_ParamLimits

0xea58,	// (0x00048e87) cell_ai5_widget_pane_t6

0xea6a,	// (0x00048e99) cell_ai5_widget_pane_t7_ParamLimits

0xea6a,	// (0x00048e99) cell_ai5_widget_pane_t7

0xea83,	// (0x00048eb2) cell_ai5_widget_pane_t8_ParamLimits

0xea83,	// (0x00048eb2) cell_ai5_widget_pane_t8

0x0009,

0x0089,	// (0x0003a4b8) cell_ai5_widget_pane_t_ParamLimits

0x0089,	// (0x0003a4b8) cell_ai5_widget_pane_t

0xead7,	// (0x00048f06) grid_ai5_widget_pane

0x8816,	// (0x00042c45) highlight_cell_ai5_widget_pane_ParamLimits

0x8816,	// (0x00042c45) highlight_cell_ai5_widget_pane

0xeaee,	// (0x00048f1d) ai5_sk_left_pane

0xeaf8,	// (0x00048f27) ai5_sk_middle_pane

0xeb02,	// (0x00048f31) ai5_sk_right_pane

0xeb0c,	// (0x00048f3b) bg_ai5_widget_pane_g1_ParamLimits

0xeb0c,	// (0x00048f3b) bg_ai5_widget_pane_g1

0xeb18,	// (0x00048f47) bg_ai5_widget_pane_g2_ParamLimits

0xeb18,	// (0x00048f47) bg_ai5_widget_pane_g2

0xeb24,	// (0x00048f53) bg_ai5_widget_pane_g3_ParamLimits

0xeb24,	// (0x00048f53) bg_ai5_widget_pane_g3

0xeb30,	// (0x00048f5f) bg_ai5_widget_pane_g4_ParamLimits

0xeb30,	// (0x00048f5f) bg_ai5_widget_pane_g4

0xeb3c,	// (0x00048f6b) bg_ai5_widget_pane_g5_ParamLimits

0xeb3c,	// (0x00048f6b) bg_ai5_widget_pane_g5

0xeb48,	// (0x00048f77) bg_ai5_widget_pane_g6_ParamLimits

0xeb48,	// (0x00048f77) bg_ai5_widget_pane_g6

0xeb54,	// (0x00048f83) bg_ai5_widget_pane_g7_ParamLimits

0xeb54,	// (0x00048f83) bg_ai5_widget_pane_g7

0xeb60,	// (0x00048f8f) bg_ai5_widget_pane_g8_ParamLimits

0xeb60,	// (0x00048f8f) bg_ai5_widget_pane_g8

0xeb6c,	// (0x00048f9b) bg_ai5_widget_pane_g9_ParamLimits

0xeb6c,	// (0x00048f9b) bg_ai5_widget_pane_g9

0x0008,

0x009e,	// (0x0003a4cd) bg_ai5_widget_pane_g_ParamLimits

0x009e,	// (0x0003a4cd) bg_ai5_widget_pane_g

0xeb9e,	// (0x00048fcd) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb9e,	// (0x00048fcd) cell_shortcut_ai5_widget_pane

0x94a1,	// (0x000438d0) bg_cell_shortcut_ai5_widget_pane

0xebaf,	// (0x00048fde) cell_grid_ai5_widget_pane_g1

0x94a1,	// (0x000438d0) highlight_cell_shortcut_ai5_widget_pane

0x9d0a,	// (0x00044139) ai5_sk_left_pane_g1

0xebb8,	// (0x00048fe7) ai5_sk_left_pane_g2

0xebc0,	// (0x00048fef) ai5_sk_left_pane_g3

0xebc8,	// (0x00048ff7) ai5_sk_left_pane_g4

0x0003,

0xfdee,	// (0x0004a21d) ai5_sk_left_pane_g

0xebd0,	// (0x00048fff) ai5_sk_left_pane_t1

0x9d02,	// (0x00044131) ai5_sk_right_pane_g1

0xebde,	// (0x0004900d) ai5_sk_right_pane_g2

0xebe6,	// (0x00049015) ai5_sk_right_pane_g3

0xebee,	// (0x0004901d) ai5_sk_right_pane_g4

0x0003,

0xfdf7,	// (0x0004a226) ai5_sk_right_pane_g

0xebf6,	// (0x00049025) ai5_sk_right_pane_t1

0x9d02,	// (0x00044131) ai5_sk_middle_pane_g1

0x9d0a,	// (0x00044139) ai5_sk_middle_pane_g2

0x9d22,	// (0x00044151) ai5_sk_middle_pane_g3

0xebe6,	// (0x00049015) ai5_sk_middle_pane_g4

0xebc0,	// (0x00048fef) ai5_sk_middle_pane_g5

0xec04,	// (0x00049033) ai5_sk_middle_pane_g6

0xec0c,	// (0x0004903b) ai5_sk_middle_pane_g7

0x0006,

0xfe00,	// (0x0004a22f) ai5_sk_middle_pane_g

0x9836,	// (0x00043c65) aid_touch_area_size_lc0_ParamLimits

0x9836,	// (0x00043c65) aid_touch_area_size_lc0

0x70ff,	// (0x0004152e) cell_hwr_candidate_pane_t1_ParamLimits

0x9852,	// (0x00043c81) aid_touch_navi_pane

0x9b25,	// (0x00043f54) status_dt_navi_pane_ParamLimits

0x9b25,	// (0x00043f54) status_dt_navi_pane

0x9b32,	// (0x00043f61) status_dt_sta_pane_ParamLimits

0x9b32,	// (0x00043f61) status_dt_sta_pane

0xec14,	// (0x00049043) dt_sta_controll_pane

0xec21,	// (0x00049050) dt_sta_indi_pane

0xec32,	// (0x00049061) dt_sta_title_pane

0x8224,	// (0x00042653) bg_dt_sta_indi_pane_ParamLimits

0x8224,	// (0x00042653) bg_dt_sta_indi_pane

0xec45,	// (0x00049074) dt_sta_battery_pane

0xec4d,	// (0x0004907c) dt_sta_indi_pane_g1

0xec56,	// (0x00049085) dt_sta_indi_pane_g2

0xec5f,	// (0x0004908e) dt_sta_indi_pane_g3

0x0002,

0x00d2,	// (0x0003a501) dt_sta_indi_pane_g

0xec68,	// (0x00049097) dt_sta_signal_pane

0x8816,	// (0x00042c45) bg_dt_sta_title_pane_ParamLimits

0x8816,	// (0x00042c45) bg_dt_sta_title_pane

0xec71,	// (0x000490a0) dt_sta_title_pane_g1

0xec79,	// (0x000490a8) dt_sta_title_pane_t1_ParamLimits

0xec79,	// (0x000490a8) dt_sta_title_pane_t1

0x7ea7,	// (0x000422d6) bg_dt_sta_control_pane

0xec8e,	// (0x000490bd) dt_sta_controll_pane_g1

0xec97,	// (0x000490c6) bg_dt_sta_title_pane_g1

0xeca0,	// (0x000490cf) bg_dt_sta_title_pane_g2

0xeca9,	// (0x000490d8) bg_dt_sta_title_pane_g3

0x0002,

0x00d9,	// (0x0003a508) bg_dt_sta_title_pane_g

0xc2a3,	// (0x000466d2) bg_dt_sta_indi_pane_g1

0xecb2,	// (0x000490e1) dt_sta_signal_pane_g1

0xecba,	// (0x000490e9) dt_sta_signal_pane_g2

0x0001,

0x00e0,	// (0x0003a50f) dt_sta_signal_pane_g

0xecc2,	// (0x000490f1) dt_sta_battery_pane_g1

0xeccb,	// (0x000490fa) dt_sta_battery_pane_t1

0xc2a3,	// (0x000466d2) bg_dt_sta_control_pane_g1

0x8fa0,	// (0x000433cf) fep_china_uni_eep_pane

0x8fa8,	// (0x000433d7) fep_china_uni_entry_pane_ParamLimits

0x8fb8,	// (0x000433e7) popup_fep_china_uni_window_g1_ParamLimits

0x8fc8,	// (0x000433f7) popup_fep_china_uni_window_g2_ParamLimits

0x8fc8,	// (0x000433f7) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049b51) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049b51) popup_fep_china_uni_window_g

0xecda,	// (0x00049109) fep_china_uni_eep_pane_g1

0xece2,	// (0x00049111) fep_china_uni_eep_pane_t1

0xe762,	// (0x00048b91) aid_touch_area_size_smil_player

0x99a2,	// (0x00043dd1) lc0_clock_pane

0x9b89,	// (0x00043fb8) status_pane_g5_ParamLimits

0x9b89,	// (0x00043fb8) status_pane_g5

0x6542,	// (0x00040971) popup_keymap_window

0x9b47,	// (0x00043f76) status_icon_pane

0xe94c,	// (0x00048d7b) cell_ai5_widget_pane_g3_ParamLimits

0xe963,	// (0x00048d92) cell_ai5_widget_pane_g4_ParamLimits

0xe96f,	// (0x00048d9e) cell_ai5_widget_pane_g5_ParamLimits

0xe993,	// (0x00048dc2) cell_ai5_widget_pane_g8_ParamLimits

0xe993,	// (0x00048dc2) cell_ai5_widget_pane_g8

0xe9a7,	// (0x00048dd6) cell_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x00048dd6) cell_ai5_widget_pane_g9

0xe9bb,	// (0x00048dea) cell_ai5_widget_pane_g10_ParamLimits

0xe9bb,	// (0x00048dea) cell_ai5_widget_pane_g10

0xecf1,	// (0x00049120) status_icon_pane_g1

0x7ea7,	// (0x000422d6) bg_popup_sub_pane_cp13

0xecf9,	// (0x00049128) popup_keymap_window_t1

0x9776,	// (0x00043ba5) control_pane_g6_ParamLimits

0x9776,	// (0x00043ba5) control_pane_g6

0x9783,	// (0x00043bb2) control_pane_g7_ParamLimits

0x9783,	// (0x00043bb2) control_pane_g7

0x9790,	// (0x00043bbf) control_pane_g8_ParamLimits

0x9790,	// (0x00043bbf) control_pane_g8

0xec14,	// (0x00049043) dt_sta_controll_pane_ParamLimits

0xec21,	// (0x00049050) dt_sta_indi_pane_ParamLimits

0xec32,	// (0x00049061) dt_sta_title_pane_ParamLimits

0x8742,	// (0x00042b71) aid_size_touch_scroll_bar_cale

0x5acf,	// (0x0003fefe) popup_discreet_window_ParamLimits

0x5acf,	// (0x0003fefe) popup_discreet_window

0x5b57,	// (0x0003ff86) popup_sk_window

0xa381,	// (0x000447b0) bg_popup_sub_pane_cp28_ParamLimits

0xa381,	// (0x000447b0) bg_popup_sub_pane_cp28

0xed07,	// (0x00049136) popup_discreet_window_g1_ParamLimits

0xed07,	// (0x00049136) popup_discreet_window_g1

0xed27,	// (0x00049156) popup_discreet_window_t1_ParamLimits

0xed27,	// (0x00049156) popup_discreet_window_t1

0xed45,	// (0x00049174) popup_discreet_window_t2_ParamLimits

0xed45,	// (0x00049174) popup_discreet_window_t2

0x0002,

0x00e5,	// (0x0003a514) popup_discreet_window_t_ParamLimits

0x00e5,	// (0x0003a514) popup_discreet_window_t

0x7b34,	// (0x00041f63) popup_sk_window_g1

0x7b3e,	// (0x00041f6d) popup_sk_window_g2

0x0001,

0xfe0f,	// (0x0004a23e) popup_sk_window_g

0x7b46,	// (0x00041f75) popup_sk_window_t1

0x7b54,	// (0x00041f83) popup_sk_window_t1_copy1

0xe93c,	// (0x00048d6b) cell_ai5_widget_pane_g2_ParamLimits

0xea95,	// (0x00048ec4) cell_ai5_widget_pane_t9_ParamLimits

0xea95,	// (0x00048ec4) cell_ai5_widget_pane_t9

0x7ea7,	// (0x000422d6) main_fep_fshwr2_pane

0x7b62,	// (0x00041f91) aid_fshwr2_btn_pane

0x7b6e,	// (0x00041f9d) aid_fshwr2_syb_pane

0x7b7a,	// (0x00041fa9) aid_fshwr2_txt_pane

0x7b86,	// (0x00041fb5) fshwr2_func_candi_pane

0x7b9b,	// (0x00041fca) fshwr2_hwr_syb_pane

0x7bab,	// (0x00041fda) fshwr2_icf_pane

0x7ea7,	// (0x000422d6) fshwr2_icf_bg_pane

0x7bd4,	// (0x00042003) fshwr2_icf_pane_t1_ParamLimits

0x7bd4,	// (0x00042003) fshwr2_icf_pane_t1

0x8e8e,	// (0x000432bd) fshwr2_func_candi_pane_g1

0xed97,	// (0x000491c6) fshwr2_func_candi_row_pane_ParamLimits

0xed97,	// (0x000491c6) fshwr2_func_candi_row_pane

0x7bec,	// (0x0004201b) cell_fshwr2_syb_pane_ParamLimits

0x7bec,	// (0x0004201b) cell_fshwr2_syb_pane

0xc52d,	// (0x0004695c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) fshwr2_hwr_syb_pane_g1

0x7ea7,	// (0x000422d6) bg_popup_call_pane_cp01

0x7c02,	// (0x00042031) fshwr2_func_candi_cell_pane_ParamLimits

0x7c02,	// (0x00042031) fshwr2_func_candi_cell_pane

0xeda7,	// (0x000491d6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda7,	// (0x000491d6) fshwr2_func_candi_cell_bg_pane

0x7c4d,	// (0x0004207c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c4d,	// (0x0004207c) fshwr2_func_candi_cell_pane_g1

0x7c75,	// (0x000420a4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c75,	// (0x000420a4) fshwr2_func_candi_cell_pane_t1

0x7ea7,	// (0x000422d6) bg_button_pane_cp08

0xedb3,	// (0x000491e2) cell_fshwr2_syb_bg_pane

0x7c88,	// (0x000420b7) cell_fshwr2_syb_bg_pane_g1

0x7c90,	// (0x000420bf) cell_fshwr2_syb_bg_pane_t1

0x8816,	// (0x00042c45) main_tmo_pane

0xae90,	// (0x000452bf) uni_indicator_pane_g1_ParamLimits

0xaea6,	// (0x000452d5) uni_indicator_pane_g2_ParamLimits

0xaebc,	// (0x000452eb) uni_indicator_pane_g3_ParamLimits

0xaecf,	// (0x000452fe) uni_indicator_pane_g4_ParamLimits

0xaecf,	// (0x000452fe) uni_indicator_pane_g4

0xaee3,	// (0x00045312) uni_indicator_pane_g5_ParamLimits

0xaee3,	// (0x00045312) uni_indicator_pane_g5

0xaee3,	// (0x00045312) uni_indicator_pane_g6_ParamLimits

0xaee3,	// (0x00045312) uni_indicator_pane_g6

0xf926,	// (0x00049d55) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00047bb9) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00047bb9) popup_tmo_note_window

0x8816,	// (0x00042c45) fshwr2_bg_pane

0x7c66,	// (0x00042095) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c66,	// (0x00042095) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe14,	// (0x0004a243) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe14,	// (0x0004a243) fshwr2_func_candi_cell_pane_g

0xc2a3,	// (0x000466d2) bg_popup_window_pane_cp01

0x7c9f,	// (0x000420ce) bg_popup_window_pane_g1_cp01

0xedbb,	// (0x000491ea) bg_popup_window_pane_cp22_ParamLimits

0xedbb,	// (0x000491ea) bg_popup_window_pane_cp22

0xedc9,	// (0x000491f8) listscroll_tmo_link_pane_ParamLimits

0xedc9,	// (0x000491f8) listscroll_tmo_link_pane

0xee09,	// (0x00049238) popup_tmo_note_window_g1_ParamLimits

0xee09,	// (0x00049238) popup_tmo_note_window_g1

0xee16,	// (0x00049245) tmo_note_info_pane_ParamLimits

0xee16,	// (0x00049245) tmo_note_info_pane

0xee30,	// (0x0004925f) list_tmo_note_info_pane_g1_ParamLimits

0xee30,	// (0x0004925f) list_tmo_note_info_pane_g1

0xee47,	// (0x00049276) list_tmo_note_info_pane_g2_ParamLimits

0xee47,	// (0x00049276) list_tmo_note_info_pane_g2

0x0001,

0x00f6,	// (0x0003a525) list_tmo_note_info_pane_g_ParamLimits

0x00f6,	// (0x0003a525) list_tmo_note_info_pane_g

0xee63,	// (0x00049292) list_tmo_note_info_text_pane_ParamLimits

0xee63,	// (0x00049292) list_tmo_note_info_text_pane

0xeee4,	// (0x00049313) list_tmo_link_pane

0xeef1,	// (0x00049320) scroll_pane_cp20

0xeefe,	// (0x0004932d) list_single_tmo_link_pane_ParamLimits

0xeefe,	// (0x0004932d) list_single_tmo_link_pane

0xef0e,	// (0x0004933d) list_single_tmo_link_pane_t1

0xef1c,	// (0x0004934b) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1c,	// (0x0004934b) list_tmo_note_info_text_pane_t1

0x88c1,	// (0x00042cf0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88c1,	// (0x00042cf0) aid_size_touch_scroll_bar_cp01

0x4e84,	// (0x0003f2b3) aid_size_touch_slider_marker

0x5b3f,	// (0x0003ff6e) popup_settings_window_ParamLimits

0x5b3f,	// (0x0003ff6e) popup_settings_window

0x501b,	// (0x0003f44a) popup_candi_list_indi_window

0x9852,	// (0x00043c81) aid_touch_navi_pane_ParamLimits

0x7347,	// (0x00041776) rs_clock_indi_pane

0x7350,	// (0x0004177f) sctrl_sk_bottom_pane_ParamLimits

0x7361,	// (0x00041790) sctrl_sk_top_pane_ParamLimits

0x7448,	// (0x00041877) popup_fep_tooltip_window

0xe8b2,	// (0x00048ce1) aid_size_cell_widget_grid_ParamLimits

0xe927,	// (0x00048d56) cell_ai5_widget_pane_g1_ParamLimits

0xe927,	// (0x00048d56) cell_ai5_widget_pane_g1

0xe97b,	// (0x00048daa) cell_ai5_widget_pane_g6_ParamLimits

0xe987,	// (0x00048db6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0074,	// (0x0003a4a3) cell_ai5_widget_pane_g_ParamLimits

0x0074,	// (0x0003a4a3) cell_ai5_widget_pane_g

0xeab9,	// (0x00048ee8) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x00048ee8) cell_ai5_widget_pane_t10

0xead7,	// (0x00048f06) grid_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00048fa7) cell_contacts_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00048fa7) cell_contacts_ai5_widget_pane

0xed5a,	// (0x00049189) popup_discreet_window_t3_ParamLimits

0xed5a,	// (0x00049189) popup_discreet_window_t3

0x7bc0,	// (0x00041fef) popup_fshwr2_char_preview_window_ParamLimits

0x7bc0,	// (0x00041fef) popup_fshwr2_char_preview_window

0xee81,	// (0x000492b0) tmo_note_info_pane_t1

0xee96,	// (0x000492c5) tmo_note_info_pane_t2

0xeeab,	// (0x000492da) tmo_note_info_pane_t3

0xeec0,	// (0x000492ef) tmo_note_info_pane_t4

0xeed2,	// (0x00049301) tmo_note_info_pane_t5

0x0004,

0x00fb,	// (0x0003a52a) tmo_note_info_pane_t

0xeee4,	// (0x00049313) list_tmo_link_pane_ParamLimits

0xeef1,	// (0x00049320) scroll_pane_cp20_ParamLimits

0x7ea7,	// (0x000422d6) bg_popup_fep_char_preview_window_cp01

0xef35,	// (0x00049364) popup_fshwr2_char_preview_window_t1

0xef43,	// (0x00049372) popup_candi_list_indi_window_g1

0xef4c,	// (0x0004937b) bg_cell_contacts_ai5_widget_pane

0xef58,	// (0x00049387) cell_contacts_ai5_widget_pane_g1

0xc98f,	// (0x00046dbe) cell_contacts_ai5_widget_pane_g2

0xef6d,	// (0x0004939c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe19,	// (0x0004a248) cell_contacts_ai5_widget_pane_g

0xef79,	// (0x000493a8) cell_contacts_ai5_widget_pane_t1

0x8816,	// (0x00042c45) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff0,	// (0x0004941f) settings_container_pane

0x94a1,	// (0x000438d0) listscroll_set_pane_copy1

0xb9b4,	// (0x00045de3) scroll_pane_cp121_copy1

0xa132,	// (0x00044561) set_content_pane_copy1

0xeffc,	// (0x0004942b) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x0004942b) aid_height_set_list_copy1

0xb0db,	// (0x0004550a) aid_size_parent_copy1_ParamLimits

0xb0db,	// (0x0004550a) aid_size_parent_copy1

0xf008,	// (0x00049437) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00049437) button_value_adjust_pane_cp6_copy1

0x97f0,	// (0x00043c1f) list_highlight_pane_cp2_copy1_ParamLimits

0x97f0,	// (0x00043c1f) list_highlight_pane_cp2_copy1

0xf01c,	// (0x0004944b) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x0004944b) list_set_pane_copy1

0xef8b,	// (0x000493ba) main_pane_set_t1_copy1_ParamLimits

0xef8b,	// (0x000493ba) main_pane_set_t1_copy1

0xefc5,	// (0x000493f4) main_pane_set_t2_copy1_ParamLimits

0xefc5,	// (0x000493f4) main_pane_set_t2_copy1

0xf0c9,	// (0x000494f8) main_pane_set_t3_copy1

0xf0d7,	// (0x00049506) main_pane_set_t4_copy1

0xefe4,	// (0x00049413) set_content_pane_g1_copy1_ParamLimits

0xefe4,	// (0x00049413) set_content_pane_g1_copy1

0xf0e5,	// (0x00049514) setting_code_pane_copy1

0xf0ed,	// (0x0004951c) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x0004951c) setting_slider_pane_copy1

0xf0ed,	// (0x0004951c) setting_text_pane_copy1

0xf0ed,	// (0x0004951c) setting_volume_pane_copy1

0xf0e5,	// (0x00049514) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00049524) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00049524) settings_code_pane_cp_copy1

0x7ca8,	// (0x000420d7) volume_set_pane_copy1

0xf109,	// (0x00049538) volume_set_pane_g10_copy1

0xf111,	// (0x00049540) volume_set_pane_g1_copy1

0xf119,	// (0x00049548) volume_set_pane_g2_copy1

0xf121,	// (0x00049550) volume_set_pane_g3_copy1

0xf129,	// (0x00049558) volume_set_pane_g4_copy1

0xf131,	// (0x00049560) volume_set_pane_g5_copy1

0xf139,	// (0x00049568) volume_set_pane_g6_copy1

0xf141,	// (0x00049570) volume_set_pane_g7_copy1

0xf149,	// (0x00049578) volume_set_pane_g8_copy1

0xf151,	// (0x00049580) volume_set_pane_g9_copy1

0x7f9b,	// (0x000423ca) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f9b,	// (0x000423ca) bg_set_opt_pane_cp_copy1

0x7cb0,	// (0x000420df) setting_slider_pane_t1_copy1_ParamLimits

0x7cb0,	// (0x000420df) setting_slider_pane_t1_copy1

0x7cce,	// (0x000420fd) setting_slider_pane_t2_copy1_ParamLimits

0x7cce,	// (0x000420fd) setting_slider_pane_t2_copy1

0x7ce8,	// (0x00042117) setting_slider_pane_t3_copy1_ParamLimits

0x7ce8,	// (0x00042117) setting_slider_pane_t3_copy1

0x7d00,	// (0x0004212f) slider_set_pane_copy1_ParamLimits

0x7d00,	// (0x0004212f) slider_set_pane_copy1

0x8862,	// (0x00042c91) set_opt_bg_pane_g1_copy2

0x886a,	// (0x00042c99) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00049588) set_opt_bg_pane_g3_copy2

0x887a,	// (0x00042ca9) set_opt_bg_pane_g4_copy2

0x8882,	// (0x00042cb1) set_opt_bg_pane_g5_copy2

0x888a,	// (0x00042cb9) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00049592) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x0004959a) set_opt_bg_pane_g8_copy2

0xf175,	// (0x000495a4) set_opt_bg_pane_g9_copy2

0x7d16,	// (0x00042145) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d16,	// (0x00042145) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x000495ae) slider_set_pane_g1_copy1

0x7d2a,	// (0x00042159) slider_set_pane_g2_copy1

0x6c82,	// (0x000410b1) slider_set_pane_g3_copy1_ParamLimits

0x6c82,	// (0x000410b1) slider_set_pane_g3_copy1

0x6c96,	// (0x000410c5) slider_set_pane_g4_copy1_ParamLimits

0x6c96,	// (0x000410c5) slider_set_pane_g4_copy1

0x6cae,	// (0x000410dd) slider_set_pane_g5_copy1_ParamLimits

0x6cae,	// (0x000410dd) slider_set_pane_g5_copy1

0x6c82,	// (0x000410b1) slider_set_pane_g6_copy1_ParamLimits

0x6c82,	// (0x000410b1) slider_set_pane_g6_copy1

0x7d32,	// (0x00042161) slider_set_pane_g7_copy1_ParamLimits

0x7d32,	// (0x00042161) slider_set_pane_g7_copy1

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x000495b7) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x000495c0) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x000495d0) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x000495e0) slider_set_pane_cp_copy1

0xf1c1,	// (0x000495f0) input_focus_pane_cp1_copy1

0xf1ca,	// (0x000495f9) list_set_text_pane_copy1

0xf1d2,	// (0x00049601) setting_text_pane_g1_copy1

0x5846,	// (0x0003fc75) set_text_pane_t1_copy1

0xf1c1,	// (0x000495f0) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00049601) setting_code_pane_g1_copy1

0xf1db,	// (0x0004960a) setting_code_pane_t1_copy1

0xf1e9,	// (0x00049618) list_set_graphic_pane_copy1

0x7ebb,	// (0x000422ea) bg_set_opt_pane_cp4_copy1

0x919c,	// (0x000435cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x919c,	// (0x000435cb) list_set_graphic_pane_g1_copy1

0xf1fc,	// (0x0004962b) list_set_graphic_pane_g2_copy1

0x91b4,	// (0x000435e3) list_set_graphic_pane_t1_copy1_ParamLimits

0x91b4,	// (0x000435e3) list_set_graphic_pane_t1_copy1

0xc2a3,	// (0x000466d2) rs_clock_indi_pane_g1

0xf204,	// (0x00049633) rs_clock_indi_pane_t1

0xf212,	// (0x00049641) rs_indi_pane

0xf21a,	// (0x00049649) rs_indi_pane_g1

0xf223,	// (0x00049652) rs_indi_pane_g2

0xf22c,	// (0x0004965b) rs_indi_pane_g3

0x0002,

0x010d,	// (0x0003a53c) rs_indi_pane_g

0x94a1,	// (0x000438d0) bg_popup_preview_window_pane_cp03

0xf235,	// (0x00049664) popup_fep_tooltip_window_t1

0xcf2b,	// (0x0004735a) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x0004735a) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004a08b) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004a08b) popup_note2_window_g

0xd426,	// (0x00047855) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x00047862) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x00047879) cell_ai3_links_pane_t1

0x5846,	// (0x0003fc75) set_text_pane_t1_copy1_ParamLimits

0x93b2,	// (0x000437e1) cell_graphic_popup_pane_cp2_ParamLimits

0x93b2,	// (0x000437e1) cell_graphic_popup_pane_cp2

0xf243,	// (0x00049672) cell_graphic_popup_pane_g1_cp2

0x8555,	// (0x00042984) cell_graphic_popup_pane_g2_cp2

0xf24b,	// (0x0004967a) cell_graphic_popup_pane_g3_cp2

0xf253,	// (0x00049682) cell_graphic_popup_pane_t2_cp2

0x8566,	// (0x00042995) grid_highlight_pane_cp3_cp2

0x8ba7,	// (0x00042fd6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8816,	// (0x00042c45) main_tmo_pane_ParamLimits

0xd77e,	// (0x00047bad) popup_tmo_big_image_note_window

0xe916,	// (0x00048d45) cell_ai5_widget_list_pane

0xe91e,	// (0x00048d4d) cell_ai5_widget_lrg_icon_pane

0xee81,	// (0x000492b0) tmo_note_info_pane_t1_ParamLimits

0xee96,	// (0x000492c5) tmo_note_info_pane_t2_ParamLimits

0xeeab,	// (0x000492da) tmo_note_info_pane_t3_ParamLimits

0xeec0,	// (0x000492ef) tmo_note_info_pane_t4_ParamLimits

0xeed2,	// (0x00049301) tmo_note_info_pane_t5_ParamLimits

0x00fb,	// (0x0003a52a) tmo_note_info_pane_t_ParamLimits

0xeff0,	// (0x0004941f) settings_container_pane_ParamLimits

0xf1b9,	// (0x000495e8) indicator_popup_pane_cp5

0xf1b9,	// (0x000495e8) indicator_popup_pane_cp6

0xf1e9,	// (0x00049618) list_set_graphic_pane_copy1_ParamLimits

0x7ea7,	// (0x000422d6) bg_popup_window_pane_cp23

0xf261,	// (0x00049690) popup_tmo_big_image_note_window_g1

0xf26b,	// (0x0004969a) popup_tmo_big_image_note_window_t1

0xf27b,	// (0x000496aa) popup_tmo_big_image_note_window_t2

0xf28b,	// (0x000496ba) popup_tmo_big_image_note_window_t3

0x0002,

0x0114,	// (0x0003a543) popup_tmo_big_image_note_window_t

0xc2a3,	// (0x000466d2) cell_ai5_widget_lrg_icon_pane_g1

0xf29b,	// (0x000496ca) cell_ai5_widget_lrg_icon_pane_t1

0xf2a9,	// (0x000496d8) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a9,	// (0x000496d8) cell_ai5_widget_list_row_pane

0xf2c0,	// (0x000496ef) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c0,	// (0x000496ef) cell_ai5_widget_list_row_pane_g1

0xf2cd,	// (0x000496fc) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cd,	// (0x000496fc) cell_ai5_widget_list_row_pane_t1

0xf2fe,	// (0x0004972d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fe,	// (0x0004972d) cell_ai5_widget_list_row_pane_t2

0x0002,

0x011b,	// (0x0003a54a) cell_ai5_widget_list_row_pane_t_ParamLimits

0x011b,	// (0x0003a54a) cell_ai5_widget_list_row_pane_t

0x7ea7,	// (0x000422d6) main_fep_vtchi_ss_pane

0xf342,	// (0x00049771) popup_fep_char_pre_window

0xf34a,	// (0x00049779) popup_fep_ituss_window

0xf36b,	// (0x0004979a) popup_fep_vkbss_window

0xf395,	// (0x000497c4) grid_vkbss_keypad_pane_ParamLimits

0xf395,	// (0x000497c4) grid_vkbss_keypad_pane

0xf3a5,	// (0x000497d4) ituss_keypad_pane

0x7d54,	// (0x00042183) aid_vkbss_key_offset_ParamLimits

0x7d54,	// (0x00042183) aid_vkbss_key_offset

0x7d60,	// (0x0004218f) cell_vkbss_key_pane_ParamLimits

0x7d60,	// (0x0004218f) cell_vkbss_key_pane

0xf3b4,	// (0x000497e3) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x000497e3) bg_cell_vkbss_key_g1

0xf3c0,	// (0x000497ef) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x000497ef) cell_vkbss_key_3p_pane

0xf3d4,	// (0x00049803) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x00049803) cell_vkbss_key_g1

0xf3e8,	// (0x00049817) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00049817) cell_vkbss_key_t1

0x7d76,	// (0x000421a5) cell_ituss_key_pane_ParamLimits

0x7d76,	// (0x000421a5) cell_ituss_key_pane

0xf413,	// (0x00049842) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00049842) bg_cell_ituss_key_g1

0xf41f,	// (0x0004984e) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0004984e) cell_ituss_key_pane_g1

0x7d87,	// (0x000421b6) cell_ituss_key_pane_g2_ParamLimits

0x7d87,	// (0x000421b6) cell_ituss_key_pane_g2

0x0002,

0xfe20,	// (0x0004a24f) cell_ituss_key_pane_g_ParamLimits

0xfe20,	// (0x0004a24f) cell_ituss_key_pane_g

0x7db3,	// (0x000421e2) cell_ituss_key_t1_ParamLimits

0x7db3,	// (0x000421e2) cell_ituss_key_t1

0x7ded,	// (0x0004221c) cell_ituss_key_t2_ParamLimits

0x7ded,	// (0x0004221c) cell_ituss_key_t2

0x7e1e,	// (0x0004224d) cell_ituss_key_t3_ParamLimits

0x7e1e,	// (0x0004224d) cell_ituss_key_t3

0x7ded,	// (0x0004221c) cell_ituss_key_t4_ParamLimits

0x7ded,	// (0x0004221c) cell_ituss_key_t4

0x0004,

0xfe27,	// (0x0004a256) cell_ituss_key_t_ParamLimits

0xfe27,	// (0x0004a256) cell_ituss_key_t

0xf44b,	// (0x0004987a) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00049882) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0004988a) cell_vkbss_key_3p_pane_g3

0x0002,

0x0134,	// (0x0003a563) cell_vkbss_key_3p_pane_g

0x7ea7,	// (0x000422d6) bg_popup_fep_char_preview_window_cp02

0x7e61,	// (0x00042290) popup_fep_char_pre_window_t1

0xe8a8,	// (0x00048cd7) main_ai5_sk_pane

0xef4c,	// (0x0004937b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef58,	// (0x00049387) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98f,	// (0x00046dbe) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6d,	// (0x0004939c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe19,	// (0x0004a248) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef79,	// (0x000493a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8816,	// (0x00042c45) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00049892) main_ai5_sk_pane_g1

0xa1ba,	// (0x000445e9) popup_query_code_window_g1

0xf360,	// (0x0004978f) popup_fep_vkb_icf_pane

0xf37f,	// (0x000497ae) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0004989b) bg_icf_pane

0xf478,	// (0x000498a7) list_vkb_icf_pane

0xf487,	// (0x000498b6) bg_icf_pane_cp01

0xf49a,	// (0x000498c9) vtchi_icf_list_pane

0xf4aa,	// (0x000498d9) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x000498d9) list_vkb_icf_pane_t1

0xf4c0,	// (0x000498ef) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x000498ef) vtchi_icf_list_pane_t1

0xf34a,	// (0x00049779) popup_fep_ituss_window_ParamLimits

0xf37f,	// (0x000497ae) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x000497d4) ituss_keypad_pane_ParamLimits

0x7d48,	// (0x00042177) ituss_sks_pane

0xf46c,	// (0x0004989b) bg_icf_pane_ParamLimits

0xf326,	// (0x00049755) icf_edit_indi_pane_ParamLimits

0xf326,	// (0x00049755) icf_edit_indi_pane

0xf478,	// (0x000498a7) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x000498b6) bg_icf_pane_cp01_ParamLimits

0xf335,	// (0x00049764) icf_edit_indi_pane_cp01_ParamLimits

0xf335,	// (0x00049764) icf_edit_indi_pane_cp01

0xf4a2,	// (0x000498d1) vtchi_query_pane

0xc52d,	// (0x0004695c) icf_edit_indi_pane_g1_ParamLimits

0xc52d,	// (0x0004695c) icf_edit_indi_pane_g1

0xf531,	// (0x00049960) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00049960) icf_edit_indi_pane_g2

0x0001,

0xfe37,	// (0x0004a266) icf_edit_indi_pane_g_ParamLimits

0xfe37,	// (0x0004a266) icf_edit_indi_pane_g

0xf540,	// (0x0004996f) icf_edit_indi_pane_t1

0xf4da,	// (0x00049909) bg_input_focus_pane_cp042

0x8739,	// (0x00042b68) vtchi_button_pane

0xf4e3,	// (0x00049912) vtchi_query_pane_t1

0xf4f1,	// (0x00049920) vtchi_query_pane_t2

0xf4ff,	// (0x0004992e) vtchi_query_pane_t3

0x0002,

0x013b,	// (0x0003a56a) vtchi_query_pane_t

0x7ea7,	// (0x000422d6) bg_button_pane_cp13

0xf50d,	// (0x0004993c) vtchi_button_pane_g1

0x7e70,	// (0x0004229f) ituss_sks_pane_g1

0x7e7b,	// (0x000422aa) ituss_sks_pane_g2

0x0001,

0xfe32,	// (0x0004a261) ituss_sks_pane_g

0xf515,	// (0x00049944) ituss_sks_pane_t1

0xf523,	// (0x00049952) ituss_sks_pane_t2

0x0001,

0x0147,	// (0x0003a576) ituss_sks_pane_t

0xbd2e,	// (0x0004615d) indicator_nsta_pane_cp_g1

0xbd36,	// (0x00046165) indicator_nsta_pane_cp_g2

0xbd3e,	// (0x0004616d) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x0004615d) indicator_nsta_pane_cp_g4

0xbd36,	// (0x00046165) indicator_nsta_pane_cp_g5

0xbd3e,	// (0x0004616d) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x00049ed5) indicator_nsta_pane_cp_g

0xe492,	// (0x000488c1) cell_graphic2_pane_t2_ParamLimits

0xe492,	// (0x000488c1) cell_graphic2_pane_t2

0x0001,

0x001a,	// (0x0003a449) cell_graphic2_pane_t_ParamLimits

0x001a,	// (0x0003a449) cell_graphic2_pane_t

0xe4bf,	// (0x000488ee) cell_graphic2_control_pane_t1

0x8f4f,	// (0x0004337e) signal_pane_g3_ParamLimits

0x8f4f,	// (0x0004337e) signal_pane_g3

0x8f61,	// (0x00043390) signal_pane_g4_ParamLimits

0x8f61,	// (0x00043390) signal_pane_g4

0xf310,	// (0x0004973f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf310,	// (0x0004973f) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00049868) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00049868) cell_ituss_key_pane_t1

0x9dff,	// (0x0004422e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dff,	// (0x0004422e) form_field_data_wide_pane_vc_t2

0x9e13,	// (0x00044242) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e13,	// (0x00044242) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00049c3d) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00049c3d) form_field_data_wide_pane_vc_t

0xb9f6,	// (0x00045e25) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9f6,	// (0x00045e25) form_field_slider_wide_pane_vc_t3

0xbad4,	// (0x00045f03) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbad4,	// (0x00045f03) form_field_popup_wide_pane_vc_t2

0xbaeb,	// (0x00045f1a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaeb,	// (0x00045f1a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x00049ec4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x00049ec4) form_field_popup_wide_pane_vc_t

0x7b62,	// (0x00041f91) aid_fshwr2_btn_pane_ParamLimits

0x7b6e,	// (0x00041f9d) aid_fshwr2_syb_pane_ParamLimits

0x7b7a,	// (0x00041fa9) aid_fshwr2_txt_pane_ParamLimits

0x8816,	// (0x00042c45) fshwr2_bg_pane_ParamLimits

0x7b86,	// (0x00041fb5) fshwr2_func_candi_pane_ParamLimits

0x7b9b,	// (0x00041fca) fshwr2_hwr_syb_pane_ParamLimits

0x7bab,	// (0x00041fda) fshwr2_icf_pane_ParamLimits

0x6e62,	// (0x00041291) list_double_graphic_pane_vc_g4_ParamLimits

0x6e62,	// (0x00041291) list_double_graphic_pane_vc_g4

0x7da7,	// (0x000421d6) cell_ituss_key_pane_g3_ParamLimits

0x7da7,	// (0x000421d6) cell_ituss_key_pane_g3

0x7e4f,	// (0x0004227e) cell_ituss_key_t5_ParamLimits

0x7e4f,	// (0x0004227e) cell_ituss_key_t5

0xf36b,	// (0x0004979a) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
