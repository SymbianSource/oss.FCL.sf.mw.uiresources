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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001a98b };

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
0x7e2e,	// (0x000227b9) Screen

0x7e42,	// (0x000227cd) application_window_ParamLimits

0x7e42,	// (0x000227cd) application_window

0x7e5c,	// (0x000227e7) screen_g1

0x5b11,	// (0x0002049c) area_bottom_pane_ParamLimits

0x5b11,	// (0x0002049c) area_bottom_pane

0x5bd1,	// (0x0002055c) area_top_pane_ParamLimits

0x5bd1,	// (0x0002055c) area_top_pane

0x5c65,	// (0x000205f0) main_pane_ParamLimits

0x5c65,	// (0x000205f0) main_pane

0x7e66,	// (0x000227f1) misc_graphics

0x9831,	// (0x000241bc) battery_pane_ParamLimits

0x9831,	// (0x000241bc) battery_pane

0xa505,	// (0x00024e90) bg_status_flat_pane_g8

0xa50d,	// (0x00024e98) bg_status_flat_pane_g9

0x98f3,	// (0x0002427e) context_pane_ParamLimits

0x98f3,	// (0x0002427e) context_pane

0x9a09,	// (0x00024394) navi_pane_ParamLimits

0x9a09,	// (0x00024394) navi_pane

0x9a8d,	// (0x00024418) signal_pane_ParamLimits

0x9a8d,	// (0x00024418) signal_pane

0x0008,

0xf872,	// (0x0002a1fd) bg_status_flat_pane_g

0x9afa,	// (0x00024485) status_pane_g1_ParamLimits

0x9afa,	// (0x00024485) status_pane_g1

0x9b0e,	// (0x00024499) status_pane_g2_ParamLimits

0x9b0e,	// (0x00024499) status_pane_g2

0x9b1a,	// (0x000244a5) status_pane_g3_ParamLimits

0x9b1a,	// (0x000244a5) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a12b) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a12b) status_pane_g

0x9b4e,	// (0x000244d9) title_pane_ParamLimits

0x9b4e,	// (0x000244d9) title_pane

0x9b8b,	// (0x00024516) uni_indicator_pane_ParamLimits

0x9b8b,	// (0x00024516) uni_indicator_pane

0x9750,	// (0x000240db) bg_list_pane_ParamLimits

0x9750,	// (0x000240db) bg_list_pane

0x50fb,	// (0x0001fa86) find_pane

0x9770,	// (0x000240fb) listscroll_app_pane_ParamLimits

0x9770,	// (0x000240fb) listscroll_app_pane

0x9781,	// (0x0002410c) listscroll_form_pane

0x5103,	// (0x0001fa8e) listscroll_gen_pane_ParamLimits

0x5103,	// (0x0001fa8e) listscroll_gen_pane

0x653a,	// (0x00020ec5) listscroll_set_pane

0x8996,	// (0x00023321) main_idle_act_pane

0x944c,	// (0x00023dd7) main_idle_trad_pane

0x944c,	// (0x00023dd7) main_list_empty_pane

0x979b,	// (0x00024126) main_midp_pane

0x97a7,	// (0x00024132) main_pane_g1_ParamLimits

0x97a7,	// (0x00024132) main_pane_g1

0x6542,	// (0x00020ecd) popup_ai_message_window_ParamLimits

0x6542,	// (0x00020ecd) popup_ai_message_window

0x65e8,	// (0x00020f73) popup_fep_china_uni_window_ParamLimits

0x65e8,	// (0x00020f73) popup_fep_china_uni_window

0x6644,	// (0x00020fcf) popup_fep_japan_candidate_window_ParamLimits

0x6644,	// (0x00020fcf) popup_fep_japan_candidate_window

0x6664,	// (0x00020fef) popup_fep_japan_predictive_window_ParamLimits

0x6664,	// (0x00020fef) popup_fep_japan_predictive_window

0x6694,	// (0x0002101f) popup_find_window

0x66a1,	// (0x0002102c) popup_grid_graphic_window_ParamLimits

0x66a1,	// (0x0002102c) popup_grid_graphic_window

0x66cb,	// (0x00021056) popup_large_graphic_colour_window

0x66f1,	// (0x0002107c) popup_menu_window_ParamLimits

0x66f1,	// (0x0002107c) popup_menu_window

0x68a9,	// (0x00021234) popup_note_image_window

0x6895,	// (0x00021220) popup_note_wait_window_ParamLimits

0x6895,	// (0x00021220) popup_note_wait_window

0x6895,	// (0x00021220) popup_note_window_ParamLimits

0x6895,	// (0x00021220) popup_note_window

0x68ff,	// (0x0002128a) popup_query_code_window_ParamLimits

0x68ff,	// (0x0002128a) popup_query_code_window

0x6913,	// (0x0002129e) popup_query_data_code_window_ParamLimits

0x6913,	// (0x0002129e) popup_query_data_code_window

0x6930,	// (0x000212bb) popup_query_data_window_ParamLimits

0x6930,	// (0x000212bb) popup_query_data_window

0x694c,	// (0x000212d7) popup_query_sat_info_window_ParamLimits

0x694c,	// (0x000212d7) popup_query_sat_info_window

0x6985,	// (0x00021310) popup_snote_single_graphic_window_ParamLimits

0x6985,	// (0x00021310) popup_snote_single_graphic_window

0x6985,	// (0x00021310) popup_snote_single_text_window_ParamLimits

0x6985,	// (0x00021310) popup_snote_single_text_window

0x699a,	// (0x00021325) popup_sub_window_general

0x6aca,	// (0x00021455) popup_window_general_ParamLimits

0x6aca,	// (0x00021455) popup_window_general

0x97b5,	// (0x00024140) power_save_pane

0x63cc,	// (0x00020d57) control_pane_g1_ParamLimits

0x63cc,	// (0x00020d57) control_pane_g1

0x63f3,	// (0x00020d7e) control_pane_g2_ParamLimits

0x63f3,	// (0x00020d7e) control_pane_g2

0x9713,	// (0x0002409e) control_pane_g3_ParamLimits

0x9713,	// (0x0002409e) control_pane_g3

0x0007,

0xf788,	// (0x0002a113) control_pane_g_ParamLimits

0xf788,	// (0x0002a113) control_pane_g

0x643d,	// (0x00020dc8) control_pane_t1_ParamLimits

0x643d,	// (0x00020dc8) control_pane_t1

0x6491,	// (0x00020e1c) control_pane_t2_ParamLimits

0x6491,	// (0x00020e1c) control_pane_t2

0x0002,

0xf799,	// (0x0002a124) control_pane_t_ParamLimits

0xf799,	// (0x0002a124) control_pane_t

0x9638,	// (0x00023fc3) navi_navi_volume_pane_cp1

0x9640,	// (0x00023fcb) status_small_icon_pane

0x9648,	// (0x00023fd3) status_small_pane_g1_ParamLimits

0x9648,	// (0x00023fd3) status_small_pane_g1

0x967c,	// (0x00024007) status_small_pane_g2_ParamLimits

0x967c,	// (0x00024007) status_small_pane_g2

0x9688,	// (0x00024013) status_small_pane_g3_ParamLimits

0x9688,	// (0x00024013) status_small_pane_g3

0x9694,	// (0x0002401f) status_small_pane_g4_ParamLimits

0x9694,	// (0x0002401f) status_small_pane_g4

0x96a0,	// (0x0002402b) status_small_pane_g5_ParamLimits

0x96a0,	// (0x0002402b) status_small_pane_g5

0x96ae,	// (0x00024039) status_small_pane_g6_ParamLimits

0x96ae,	// (0x00024039) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a102) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a102) status_small_pane_g

0x96dd,	// (0x00024068) status_small_pane_t1

0x96ff,	// (0x0002408a) status_small_wait_pane_ParamLimits

0x96ff,	// (0x0002408a) status_small_wait_pane

0x8ebe,	// (0x00023849) aid_levels_signal_ParamLimits

0x8ebe,	// (0x00023849) aid_levels_signal

0x8ed0,	// (0x0002385b) signal_pane_g1_ParamLimits

0x8ed0,	// (0x0002385b) signal_pane_g1

0x8ee5,	// (0x00023870) signal_pane_g2_ParamLimits

0x8ee5,	// (0x00023870) signal_pane_g2

0x0003,

0xf708,	// (0x0002a093) signal_pane_g_ParamLimits

0xf708,	// (0x0002a093) signal_pane_g

0x8f20,	// (0x000238ab) context_pane_g1

0x7e70,	// (0x000227fb) title_pane_g1

0x7ea6,	// (0x00022831) title_pane_t1

0x7f0e,	// (0x00022899) title_pane_t2

0x7f34,	// (0x000228bf) title_pane_t3

0x0002,

0xf557,	// (0x00029ee2) title_pane_t

0x9ba3,	// (0x0002452e) aid_levels_battery_ParamLimits

0x9ba3,	// (0x0002452e) aid_levels_battery

0x9bb7,	// (0x00024542) battery_pane_g1_ParamLimits

0x9bb7,	// (0x00024542) battery_pane_g1

0x9bcd,	// (0x00024558) battery_pane_g2_ParamLimits

0x9bcd,	// (0x00024558) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a136) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a136) battery_pane_g

0xae3b,	// (0x000257c6) uni_indicator_pane_g1

0xae51,	// (0x000257dc) uni_indicator_pane_g2

0xae67,	// (0x000257f2) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a2a5) uni_indicator_pane_g

0x92be,	// (0x00023c49) navi_icon_pane_ParamLimits

0x92be,	// (0x00023c49) navi_icon_pane

0x91fc,	// (0x00023b87) navi_midp_pane

0x92da,	// (0x00023c65) navi_navi_pane

0x92e4,	// (0x00023c6f) navi_text_pane_ParamLimits

0x92e4,	// (0x00023c6f) navi_text_pane

0x7e5c,	// (0x000227e7) status_small_wait_pane_g1

0x8363,	// (0x00022cee) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a2a0) status_small_wait_pane_g

0xab60,	// (0x000254eb) navi_navi_icon_text_pane

0xab68,	// (0x000254f3) navi_navi_pane_g1_ParamLimits

0xab68,	// (0x000254f3) navi_navi_pane_g1

0xab7a,	// (0x00025505) navi_navi_pane_g2_ParamLimits

0xab7a,	// (0x00025505) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a26e) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a26e) navi_navi_pane_g

0xab8c,	// (0x00025517) navi_navi_tabs_pane

0xab95,	// (0x00025520) navi_navi_text_pane

0xab60,	// (0x000254eb) navi_navi_volume_pane

0xab3c,	// (0x000254c7) navi_text_pane_t1

0xab30,	// (0x000254bb) navi_icon_pane_g1

0xaa83,	// (0x0002540e) navi_navi_text_pane_t1

0x6d54,	// (0x000216df) navi_navi_volume_pane_g1

0x6d5c,	// (0x000216e7) volume_small_pane

0xa9e9,	// (0x00025374) navi_navi_icon_text_pane_g1

0xa9f1,	// (0x0002537c) navi_navi_icon_text_pane_t1

0x92da,	// (0x00023c65) navi_tabs_2_long_pane

0x92da,	// (0x00023c65) navi_tabs_2_pane

0x92da,	// (0x00023c65) navi_tabs_3_long_pane

0x92da,	// (0x00023c65) navi_tabs_3_pane

0x92da,	// (0x00023c65) navi_tabs_4_pane

0x6d34,	// (0x000216bf) tabs_2_active_pane_ParamLimits

0x6d34,	// (0x000216bf) tabs_2_active_pane

0x6d44,	// (0x000216cf) tabs_2_passive_pane_ParamLimits

0x6d44,	// (0x000216cf) tabs_2_passive_pane

0x6d02,	// (0x0002168d) tabs_3_active_pane_ParamLimits

0x6d02,	// (0x0002168d) tabs_3_active_pane

0x6d12,	// (0x0002169d) tabs_3_passive_pane_ParamLimits

0x6d12,	// (0x0002169d) tabs_3_passive_pane

0x6d23,	// (0x000216ae) tabs_3_passive_pane_cp_ParamLimits

0x6d23,	// (0x000216ae) tabs_3_passive_pane_cp

0x6cbe,	// (0x00021649) tabs_4_active_pane_ParamLimits

0x6cbe,	// (0x00021649) tabs_4_active_pane

0x6ccf,	// (0x0002165a) tabs_4_passive_pane_ParamLimits

0x6ccf,	// (0x0002165a) tabs_4_passive_pane

0x6ce0,	// (0x0002166b) tabs_4_passive_pane_cp_ParamLimits

0x6ce0,	// (0x0002166b) tabs_4_passive_pane_cp

0x6cf1,	// (0x0002167c) tabs_4_passive_pane_cp2_ParamLimits

0x6cf1,	// (0x0002167c) tabs_4_passive_pane_cp2

0x6c9a,	// (0x00021625) tabs_2_long_active_pane_ParamLimits

0x6c9a,	// (0x00021625) tabs_2_long_active_pane

0x6cac,	// (0x00021637) tabs_2_long_passive_pane_ParamLimits

0x6cac,	// (0x00021637) tabs_2_long_passive_pane

0x6c5b,	// (0x000215e6) tabs_3_long_active_pane_ParamLimits

0x6c5b,	// (0x000215e6) tabs_3_long_active_pane

0x6c6e,	// (0x000215f9) tabs_3_long_passive_pane_ParamLimits

0x6c6e,	// (0x000215f9) tabs_3_long_passive_pane

0x6c87,	// (0x00021612) tabs_3_long_passive_pane_cp_ParamLimits

0x6c87,	// (0x00021612) tabs_3_long_passive_pane_cp

0x6c01,	// (0x0002158c) volume_small_pane_g1

0x6c0a,	// (0x00021595) volume_small_pane_g2

0x6c13,	// (0x0002159e) volume_small_pane_g3

0x6c1c,	// (0x000215a7) volume_small_pane_g4

0x6c25,	// (0x000215b0) volume_small_pane_g5

0x6c2e,	// (0x000215b9) volume_small_pane_g6

0x6c37,	// (0x000215c2) volume_small_pane_g7

0x6c40,	// (0x000215cb) volume_small_pane_g8

0x6c49,	// (0x000215d4) volume_small_pane_g9

0x6c52,	// (0x000215dd) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a23a) volume_small_pane_g

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp2_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp2

0x7f54,	// (0x000228df) tabs_3_active_pane_g1

0x7f5c,	// (0x000228e7) tabs_3_active_pane_t1

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp2_ParamLimits

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp2

0x7f54,	// (0x000228df) tabs_3_passive_pane_g1

0x7f5c,	// (0x000228e7) tabs_3_passive_pane_t1

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp3_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp3

0x7f6e,	// (0x000228f9) tabs_4_active_pane_g1

0x7f76,	// (0x00022901) tabs_4_active_pane_t1

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp3_ParamLimits

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp3

0x7f6e,	// (0x000228f9) tabs_4_1_passive_pane_g1

0x7f76,	// (0x00022901) tabs_4_1_passive_pane_t1

0x979b,	// (0x00024126) list_highlight_pane_cp2

0xb0ae,	// (0x00025a39) list_set_pane_ParamLimits

0xb0ae,	// (0x00025a39) list_set_pane

0xb154,	// (0x00025adf) main_pane_set_t1_ParamLimits

0xb154,	// (0x00025adf) main_pane_set_t1

0xb174,	// (0x00025aff) main_pane_set_t2_ParamLimits

0xb174,	// (0x00025aff) main_pane_set_t2

0xb188,	// (0x00025b13) main_pane_set_t3_ParamLimits

0xb188,	// (0x00025b13) main_pane_set_t3

0xb19a,	// (0x00025b25) main_pane_set_t4_ParamLimits

0xb19a,	// (0x00025b25) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a30a) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a30a) main_pane_set_t

0xb1ac,	// (0x00025b37) setting_code_pane

0xb1b8,	// (0x00025b43) setting_slider_graphic_pane

0xb1b8,	// (0x00025b43) setting_slider_pane

0xb1b8,	// (0x00025b43) setting_text_pane

0xb1b8,	// (0x00025b43) setting_volume_pane

0x5eb4,	// (0x0002083f) volume_set_pane

0x7f46,	// (0x000228d1) bg_set_opt_pane_cp

0x5ebc,	// (0x00020847) setting_slider_pane_t1

0x5ed5,	// (0x00020860) setting_slider_pane_t2

0x5eef,	// (0x0002087a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00029ee9) setting_slider_pane_t

0x5f07,	// (0x00020892) slider_set_pane

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp2

0x7f88,	// (0x00022913) setting_slider_graphic_pane_g1

0x5f1d,	// (0x000208a8) setting_slider_graphic_pane_t1

0x5f2d,	// (0x000208b8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00029ef0) setting_slider_graphic_pane_t

0x5f3d,	// (0x000208c8) slider_set_pane_cp

0x7e66,	// (0x000227f1) input_focus_pane_cp1

0xb06d,	// (0x000259f8) list_set_text_pane

0x7e5c,	// (0x000227e7) setting_text_pane_g1

0x7e66,	// (0x000227f1) input_focus_pane_cp2

0x7e5c,	// (0x000227e7) setting_code_pane_g1

0x7f91,	// (0x0002291c) setting_code_pane_t1

0x494e,	// (0x0001f2d9) set_text_pane_t1_ParamLimits

0x494e,	// (0x0001f2d9) set_text_pane_t1

0x880d,	// (0x00023198) set_opt_bg_pane_g1

0x8815,	// (0x000231a0) set_opt_bg_pane_g2

0xb047,	// (0x000259d2) set_opt_bg_pane_g3

0x8825,	// (0x000231b0) set_opt_bg_pane_g4

0x882d,	// (0x000231b8) set_opt_bg_pane_g5

0x8835,	// (0x000231c0) set_opt_bg_pane_g6

0xb051,	// (0x000259dc) set_opt_bg_pane_g7

0xb059,	// (0x000259e4) set_opt_bg_pane_g8

0xb063,	// (0x000259ee) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a2f7) set_opt_bg_pane_g

0xb03a,	// (0x000259c5) slider_set_pane_g1

0x6dc9,	// (0x00021754) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a2e8) slider_set_pane_g

0x6d65,	// (0x000216f0) volume_set_pane_g1

0x6d6d,	// (0x000216f8) volume_set_pane_g2

0x6d75,	// (0x00021700) volume_set_pane_g3

0x6d7d,	// (0x00021708) volume_set_pane_g4

0x6d85,	// (0x00021710) volume_set_pane_g5

0x6d8d,	// (0x00021718) volume_set_pane_g6

0x6d95,	// (0x00021720) volume_set_pane_g7

0x6d9d,	// (0x00021728) volume_set_pane_g8

0x6da5,	// (0x00021730) volume_set_pane_g9

0x6dad,	// (0x00021738) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a2c0) volume_set_pane_g

0x7f9f,	// (0x0002292a) indicator_pane_ParamLimits

0x7f9f,	// (0x0002292a) indicator_pane

0x7fab,	// (0x00022936) main_idle_pane_g2_ParamLimits

0x7fab,	// (0x00022936) main_idle_pane_g2

0x7fd3,	// (0x0002295e) main_pane_idle_g1_ParamLimits

0x7fd3,	// (0x0002295e) main_pane_idle_g1

0x7fe0,	// (0x0002296b) popup_clock_digital_analogue_window_ParamLimits

0x7fe0,	// (0x0002296b) popup_clock_digital_analogue_window

0x7ff7,	// (0x00022982) soft_indicator_pane_ParamLimits

0x7ff7,	// (0x00022982) soft_indicator_pane

0x8003,	// (0x0002298e) wallpaper_pane_ParamLimits

0x8003,	// (0x0002298e) wallpaper_pane

0x7e5c,	// (0x000227e7) wallpaper_pane_g1

0x8017,	// (0x000229a2) indicator_pane_g1_ParamLimits

0x8017,	// (0x000229a2) indicator_pane_g1

0xb471,	// (0x00025dfc) navi_navi_icon_text_pane_srt_g1

0x8032,	// (0x000229bd) soft_indicator_pane_t1

0x804c,	// (0x000229d7) aid_ps_area_pane

0x805d,	// (0x000229e8) aid_ps_clock_pane

0x806b,	// (0x000229f6) aid_ps_indicator_pane

0x8077,	// (0x00022a02) indicator_ps_pane_ParamLimits

0x8077,	// (0x00022a02) indicator_ps_pane

0x8086,	// (0x00022a11) power_save_pane_g1_ParamLimits

0x8086,	// (0x00022a11) power_save_pane_g1

0x8092,	// (0x00022a1d) power_save_pane_g2_ParamLimits

0x8092,	// (0x00022a1d) power_save_pane_g2

0x5ac5,	// (0x00020450) aid_navinavi_width_pane

0x804c,	// (0x000229d7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00029ef5) power_save_pane_g_ParamLimits

0xf56a,	// (0x00029ef5) power_save_pane_g

0x80a0,	// (0x00022a2b) power_save_pane_t1_ParamLimits

0x80a0,	// (0x00022a2b) power_save_pane_t1

0x805d,	// (0x000229e8) aid_ps_clock_pane_ParamLimits

0x806b,	// (0x000229f6) aid_ps_indicator_pane_ParamLimits

0x80b2,	// (0x00022a3d) power_save_pane_t4_ParamLimits

0x80b2,	// (0x00022a3d) power_save_pane_t4

0x0001,

0xf56f,	// (0x00029efa) power_save_pane_t_ParamLimits

0xf56f,	// (0x00029efa) power_save_pane_t

0x80dc,	// (0x00022a67) power_save_t3_ParamLimits

0x80dc,	// (0x00022a67) power_save_t3

0x80c7,	// (0x00022a52) power_save_t2_ParamLimits

0x80c7,	// (0x00022a52) power_save_t2

0x80f1,	// (0x00022a7c) indicator_ps_pane_g1

0x80fa,	// (0x00022a85) ai_gene_pane_ParamLimits

0x80fa,	// (0x00022a85) ai_gene_pane

0x8106,	// (0x00022a91) ai_links_pane_ParamLimits

0x8106,	// (0x00022a91) ai_links_pane

0x8112,	// (0x00022a9d) indicator_pane_cp1_ParamLimits

0x8112,	// (0x00022a9d) indicator_pane_cp1

0x811e,	// (0x00022aa9) main_pane_idle_g1_cp_ParamLimits

0x811e,	// (0x00022aa9) main_pane_idle_g1_cp

0x812a,	// (0x00022ab5) popup_ai_links_title_window

0x8133,	// (0x00022abe) soft_indicator_pane_cp1_ParamLimits

0x8133,	// (0x00022abe) soft_indicator_pane_cp1

0xae29,	// (0x000257b4) ai_links_pane_g1

0xae32,	// (0x000257bd) grid_ai_links_pane

0xae0c,	// (0x00025797) ai_gene_pane_1

0xae17,	// (0x000257a2) ai_gene_pane_2

0xae20,	// (0x000257ab) list_highlight_pane_cp4

0xadf0,	// (0x0002577b) cell_ai_link_pane_ParamLimits

0xadf0,	// (0x0002577b) cell_ai_link_pane

0xade8,	// (0x00025773) cell_ai_link_pane_g1

0x8363,	// (0x00022cee) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a29b) cell_ai_link_pane_g

0x7e66,	// (0x000227f1) grid_highlight_cp2

0x7e66,	// (0x000227f1) bg_popup_sub_pane_cp1

0x814d,	// (0x00022ad8) popup_ai_links_title_window_t1

0xad36,	// (0x000256c1) ai_gene_pane_1_g1_ParamLimits

0xad36,	// (0x000256c1) ai_gene_pane_1_g1

0xad42,	// (0x000256cd) ai_gene_pane_1_g2_ParamLimits

0xad42,	// (0x000256cd) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a291) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a291) ai_gene_pane_1_g

0xad4f,	// (0x000256da) ai_gene_pane_1_t1_ParamLimits

0xad4f,	// (0x000256da) ai_gene_pane_1_t1

0xad83,	// (0x0002570e) grid_ai_soft_ind_pane

0xad21,	// (0x000256ac) ai_gene_pane_2_t1_ParamLimits

0xad21,	// (0x000256ac) ai_gene_pane_2_t1

0x815c,	// (0x00022ae7) main_pane_empty_t1_ParamLimits

0x815c,	// (0x00022ae7) main_pane_empty_t1

0x8174,	// (0x00022aff) main_pane_empty_t2_ParamLimits

0x8174,	// (0x00022aff) main_pane_empty_t2

0x8189,	// (0x00022b14) main_pane_empty_t3_ParamLimits

0x8189,	// (0x00022b14) main_pane_empty_t3

0x819b,	// (0x00022b26) main_pane_empty_t4_ParamLimits

0x819b,	// (0x00022b26) main_pane_empty_t4

0x81ad,	// (0x00022b38) main_pane_empty_t5_ParamLimits

0x81ad,	// (0x00022b38) main_pane_empty_t5

0x0004,

0xf574,	// (0x00029eff) main_pane_empty_t_ParamLimits

0xf574,	// (0x00029eff) main_pane_empty_t

0x885e,	// (0x000231e9) bg_popup_window_pane_ParamLimits

0x885e,	// (0x000231e9) bg_popup_window_pane

0xaa91,	// (0x0002541c) find_popup_pane_cp2_ParamLimits

0xaa91,	// (0x0002541c) find_popup_pane_cp2

0xaa9d,	// (0x00025428) heading_pane_ParamLimits

0xaa9d,	// (0x00025428) heading_pane

0x7e66,	// (0x000227f1) bg_popup_sub_pane

0xaa0b,	// (0x00025396) bg_popup_window_pane_g1_ParamLimits

0xaa0b,	// (0x00025396) bg_popup_window_pane_g1

0xaa17,	// (0x000253a2) bg_popup_window_pane_g2_ParamLimits

0xaa17,	// (0x000253a2) bg_popup_window_pane_g2

0xaa23,	// (0x000253ae) bg_popup_window_pane_g3_ParamLimits

0xaa23,	// (0x000253ae) bg_popup_window_pane_g3

0xaa2f,	// (0x000253ba) bg_popup_window_pane_g4_ParamLimits

0xaa2f,	// (0x000253ba) bg_popup_window_pane_g4

0xaa3b,	// (0x000253c6) bg_popup_window_pane_g5_ParamLimits

0xaa3b,	// (0x000253c6) bg_popup_window_pane_g5

0xaa47,	// (0x000253d2) bg_popup_window_pane_g6_ParamLimits

0xaa47,	// (0x000253d2) bg_popup_window_pane_g6

0xaa53,	// (0x000253de) bg_popup_window_pane_g7_ParamLimits

0xaa53,	// (0x000253de) bg_popup_window_pane_g7

0xaa5f,	// (0x000253ea) bg_popup_window_pane_g8_ParamLimits

0xaa5f,	// (0x000253ea) bg_popup_window_pane_g8

0xaa6b,	// (0x000253f6) bg_popup_window_pane_g9_ParamLimits

0xaa6b,	// (0x000253f6) bg_popup_window_pane_g9

0xaa77,	// (0x00025402) bg_popup_window_pane_g10_ParamLimits

0xaa77,	// (0x00025402) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a259) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a259) bg_popup_window_pane_g

0xa9a0,	// (0x0002532b) bg_popup_heading_pane_ParamLimits

0xa9a0,	// (0x0002532b) bg_popup_heading_pane

0x6e51,	// (0x000217dc) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e51,	// (0x000217dc) tabs_4_passive_pane_cp_srt

0x6e63,	// (0x000217ee) tabs_4_passive_pane_srt_ParamLimits

0xa9b4,	// (0x0002533f) heading_pane_g2

0x6e63,	// (0x000217ee) tabs_4_passive_pane_srt

0x979b,	// (0x00024126) bg_passive_tab_pane_cp3_srt_ParamLimits

0x979b,	// (0x00024126) bg_passive_tab_pane_cp3_srt

0xa9bc,	// (0x00025347) heading_pane_t1_ParamLimits

0xa9bc,	// (0x00025347) heading_pane_t1

0xa9d3,	// (0x0002535e) heading_pane_t2_ParamLimits

0xa9d3,	// (0x0002535e) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a254) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a254) heading_pane_t

0xa4cd,	// (0x00024e58) bg_popup_heading_pane_g1

0xa57c,	// (0x00024f07) bg_popup_heading_pane_g2

0xa586,	// (0x00024f11) bg_popup_heading_pane_g3

0xa590,	// (0x00024f1b) bg_popup_heading_pane_g4

0xa59a,	// (0x00024f25) bg_popup_heading_pane_g5

0xa5a4,	// (0x00024f2f) bg_popup_heading_pane_g6

0xa5ac,	// (0x00024f37) bg_popup_heading_pane_g7

0xa5b4,	// (0x00024f3f) bg_popup_heading_pane_g8

0xa5be,	// (0x00024f49) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a210) bg_popup_heading_pane_g

0x9ca5,	// (0x00024630) bg_popup_sub_pane_g1

0x9cad,	// (0x00024638) bg_popup_sub_pane_g2

0x9cb5,	// (0x00024640) bg_popup_sub_pane_g3

0x9cbd,	// (0x00024648) bg_popup_sub_pane_g4

0x9cc5,	// (0x00024650) bg_popup_sub_pane_g5

0x9ccd,	// (0x00024658) bg_popup_sub_pane_g6

0x9cd5,	// (0x00024660) bg_popup_sub_pane_g7

0x9cdd,	// (0x00024668) bg_popup_sub_pane_g8

0x9ce5,	// (0x00024670) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a1ea) bg_popup_sub_pane_g

0x81c1,	// (0x00022b4c) bg_popup_window_pane_cp5_ParamLimits

0x81c1,	// (0x00022b4c) bg_popup_window_pane_cp5

0x81dd,	// (0x00022b68) popup_note_window_g1_ParamLimits

0x81dd,	// (0x00022b68) popup_note_window_g1

0x81e9,	// (0x00022b74) popup_note_window_t1_ParamLimits

0x81e9,	// (0x00022b74) popup_note_window_t1

0x81ff,	// (0x00022b8a) popup_note_window_t2_ParamLimits

0x81ff,	// (0x00022b8a) popup_note_window_t2

0x8215,	// (0x00022ba0) popup_note_window_t3_ParamLimits

0x8215,	// (0x00022ba0) popup_note_window_t3

0x822b,	// (0x00022bb6) popup_note_window_t4_ParamLimits

0x822b,	// (0x00022bb6) popup_note_window_t4

0x8253,	// (0x00022bde) popup_note_window_t5_ParamLimits

0x8253,	// (0x00022bde) popup_note_window_t5

0x0004,

0xf57f,	// (0x00029f0a) popup_note_window_t_ParamLimits

0xf57f,	// (0x00029f0a) popup_note_window_t

0x8277,	// (0x00022c02) bg_popup_window_pane_cp6_ParamLimits

0x8277,	// (0x00022c02) bg_popup_window_pane_cp6

0xa449,	// (0x00024dd4) popup_note_image_window_g1_ParamLimits

0xa449,	// (0x00024dd4) popup_note_image_window_g1

0xa455,	// (0x00024de0) popup_note_image_window_g2_ParamLimits

0xa455,	// (0x00024de0) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a1de) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a1de) popup_note_image_window_g

0xa46e,	// (0x00024df9) popup_note_image_window_t1_ParamLimits

0xa46e,	// (0x00024df9) popup_note_image_window_t1

0xa487,	// (0x00024e12) popup_note_image_window_t2_ParamLimits

0xa487,	// (0x00024e12) popup_note_image_window_t2

0xa4a0,	// (0x00024e2b) popup_note_image_window_t3_ParamLimits

0xa4a0,	// (0x00024e2b) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a1e3) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a1e3) popup_note_image_window_t

0xa30a,	// (0x00024c95) bg_popup_window_pane_cp7_ParamLimits

0xa30a,	// (0x00024c95) bg_popup_window_pane_cp7

0xa33a,	// (0x00024cc5) popup_note_wait_window_g1_ParamLimits

0xa33a,	// (0x00024cc5) popup_note_wait_window_g1

0xa346,	// (0x00024cd1) popup_note_wait_window_g2_ParamLimits

0xa346,	// (0x00024cd1) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a1cc) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a1cc) popup_note_wait_window_g

0xa35e,	// (0x00024ce9) popup_note_wait_window_t1_ParamLimits

0xa35e,	// (0x00024ce9) popup_note_wait_window_t1

0xa385,	// (0x00024d10) popup_note_wait_window_t2_ParamLimits

0xa385,	// (0x00024d10) popup_note_wait_window_t2

0xa3a2,	// (0x00024d2d) popup_note_wait_window_t3_ParamLimits

0xa3a2,	// (0x00024d2d) popup_note_wait_window_t3

0xa3b5,	// (0x00024d40) popup_note_wait_window_t4_ParamLimits

0xa3b5,	// (0x00024d40) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a1d3) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a1d3) popup_note_wait_window_t

0xa3da,	// (0x00024d65) wait_bar_pane_ParamLimits

0xa3da,	// (0x00024d65) wait_bar_pane

0x7e66,	// (0x000227f1) wait_anim_pane

0x7e66,	// (0x000227f1) wait_border_pane

0x7e5c,	// (0x000227e7) wait_anim_pane_g1

0x7e5c,	// (0x000227e7) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a08e) wait_anim_pane_g

0xa2ae,	// (0x00024c39) wait_border_pane_g1

0xa2b9,	// (0x00024c44) wait_border_pane_g2

0xa2c2,	// (0x00024c4d) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a1c5) wait_border_pane_g

0xa119,	// (0x00024aa4) bg_popup_window_pane_cp16_ParamLimits

0xa119,	// (0x00024aa4) bg_popup_window_pane_cp16

0xa219,	// (0x00024ba4) indicator_popup_pane_cp4_ParamLimits

0xa219,	// (0x00024ba4) indicator_popup_pane_cp4

0xa22d,	// (0x00024bb8) popup_query_data_window_t1_ParamLimits

0xa22d,	// (0x00024bb8) popup_query_data_window_t1

0xa23f,	// (0x00024bca) popup_query_data_window_t2_ParamLimits

0xa23f,	// (0x00024bca) popup_query_data_window_t2

0xa258,	// (0x00024be3) popup_query_data_window_t3_ParamLimits

0xa258,	// (0x00024be3) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a1be) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a1be) popup_query_data_window_t

0xa272,	// (0x00024bfd) query_popup_data_pane_ParamLimits

0xa272,	// (0x00024bfd) query_popup_data_pane

0xa286,	// (0x00024c11) query_popup_data_pane_cp1_ParamLimits

0xa286,	// (0x00024c11) query_popup_data_pane_cp1

0xa119,	// (0x00024aa4) bg_popup_window_pane_cp10_ParamLimits

0xa119,	// (0x00024aa4) bg_popup_window_pane_cp10

0xa14b,	// (0x00024ad6) indicator_popup_pane_ParamLimits

0xa14b,	// (0x00024ad6) indicator_popup_pane

0xa16d,	// (0x00024af8) popup_query_code_window_t1_ParamLimits

0xa16d,	// (0x00024af8) popup_query_code_window_t1

0xa187,	// (0x00024b12) popup_query_code_window_t2_ParamLimits

0xa187,	// (0x00024b12) popup_query_code_window_t2

0xa1d0,	// (0x00024b5b) popup_query_code_window_t3_ParamLimits

0xa1d0,	// (0x00024b5b) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a1b7) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a1b7) popup_query_code_window_t

0xa1ff,	// (0x00024b8a) query_popup_pane_ParamLimits

0xa1ff,	// (0x00024b8a) query_popup_pane

0x8277,	// (0x00022c02) bg_popup_window_pane_cp15_ParamLimits

0x8277,	// (0x00022c02) bg_popup_window_pane_cp15

0x8295,	// (0x00022c20) indicator_popup_pane_cp1_ParamLimits

0x8295,	// (0x00022c20) indicator_popup_pane_cp1

0x82a8,	// (0x00022c33) indicator_popup_pane_cp2_ParamLimits

0x82a8,	// (0x00022c33) indicator_popup_pane_cp2

0x82bb,	// (0x00022c46) popup_query_data_code_window_g1_ParamLimits

0x82bb,	// (0x00022c46) popup_query_data_code_window_g1

0x82ce,	// (0x00022c59) popup_query_data_code_window_t1_ParamLimits

0x82ce,	// (0x00022c59) popup_query_data_code_window_t1

0x82e0,	// (0x00022c6b) popup_query_data_code_window_t2_ParamLimits

0x82e0,	// (0x00022c6b) popup_query_data_code_window_t2

0x82f2,	// (0x00022c7d) popup_query_data_code_window_t3_ParamLimits

0x82f2,	// (0x00022c7d) popup_query_data_code_window_t3

0x8308,	// (0x00022c93) popup_query_data_code_window_t4_ParamLimits

0x8308,	// (0x00022c93) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00029f15) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00029f15) popup_query_data_code_window_t

0x6b34,	// (0x000214bf) list_single_midp_graphic_pane_g3

0x8320,	// (0x00022cab) query_popup_data_pane_cp2_ParamLimits

0x8333,	// (0x00022cbe) query_popup_pane_cp2_ParamLimits

0x8333,	// (0x00022cbe) query_popup_pane_cp2

0x7e66,	// (0x000227f1) bg_popup_window_pane_cp11

0xa111,	// (0x00024a9c) heading_pane_cp5

0x841e,	// (0x00022da9) listscroll_popup_info_pane

0x7e66,	// (0x000227f1) input_focus_pane_cp3

0x8346,	// (0x00022cd1) query_popup_pane_t1

0x8354,	// (0x00022cdf) list_popup_info_pane_ParamLimits

0x8354,	// (0x00022cdf) list_popup_info_pane

0x8363,	// (0x00022cee) listscroll_popup_info_pane_g1

0x836b,	// (0x00022cf6) scroll_pane_cp7

0x8375,	// (0x00022d00) popup_info_list_pane_t1_ParamLimits

0x8375,	// (0x00022d00) popup_info_list_pane_t1

0x838f,	// (0x00022d1a) popup_info_list_pane_t2_ParamLimits

0x838f,	// (0x00022d1a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00029f1e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00029f1e) popup_info_list_pane_t

0x7e66,	// (0x000227f1) bg_popup_window_pane_cp12

0xb48b,	// (0x00025e16) find_popup_pane

0x7f46,	// (0x000228d1) bg_popup_window_pane_cp3

0x83a9,	// (0x00022d34) heading_pane_cp3

0x83b5,	// (0x00022d40) listscroll_popup_graphic_pane

0x7e66,	// (0x000227f1) bg_popup_window_pane_cp4

0x8414,	// (0x00022d9f) heading_pane_cp4

0x841e,	// (0x00022da9) listscroll_popup_colour_pane

0x8426,	// (0x00022db1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8426,	// (0x00022db1) cell_large_graphic_colour_none_popup_pane

0x843a,	// (0x00022dc5) grid_large_graphic_colour_popup_pane_ParamLimits

0x843a,	// (0x00022dc5) grid_large_graphic_colour_popup_pane

0x8466,	// (0x00022df1) listscroll_popup_colour_pane_g1_ParamLimits

0x8466,	// (0x00022df1) listscroll_popup_colour_pane_g1

0x847d,	// (0x00022e08) listscroll_popup_colour_pane_g2_ParamLimits

0x847d,	// (0x00022e08) listscroll_popup_colour_pane_g2

0x8494,	// (0x00022e1f) listscroll_popup_colour_pane_g3_ParamLimits

0x8494,	// (0x00022e1f) listscroll_popup_colour_pane_g3

0x84a4,	// (0x00022e2f) listscroll_popup_colour_pane_g4_ParamLimits

0x84a4,	// (0x00022e2f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00029f23) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00029f23) listscroll_popup_colour_pane_g

0x84b8,	// (0x00022e43) scroll_pane_cp6_ParamLimits

0x84b8,	// (0x00022e43) scroll_pane_cp6

0x84ca,	// (0x00022e55) cell_large_graphic_colour_popup_pane_ParamLimits

0x84ca,	// (0x00022e55) cell_large_graphic_colour_popup_pane

0x84e9,	// (0x00022e74) cell_large_graphic_colour_none_popup_pane_t1

0x7e66,	// (0x000227f1) grid_highlight_pane_cp5

0x84f8,	// (0x00022e83) cell_large_graphic_colour_popup_pane_g1

0x8500,	// (0x00022e8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00029f2c) cell_large_graphic_colour_popup_pane_g

0x8508,	// (0x00022e93) cell_large_graphic_colour_popup_pane_g2_copy1

0x8511,	// (0x00022e9c) grid_highlight_pane_cp4

0x8519,	// (0x00022ea4) bg_popup_window_pane_cp8_ParamLimits

0x8519,	// (0x00022ea4) bg_popup_window_pane_cp8

0x8534,	// (0x00022ebf) popup_snote_single_text_window_g1_ParamLimits

0x8534,	// (0x00022ebf) popup_snote_single_text_window_g1

0x8546,	// (0x00022ed1) popup_snote_single_text_window_t1_ParamLimits

0x8546,	// (0x00022ed1) popup_snote_single_text_window_t1

0x8559,	// (0x00022ee4) popup_snote_single_text_window_t2_ParamLimits

0x8559,	// (0x00022ee4) popup_snote_single_text_window_t2

0x856c,	// (0x00022ef7) popup_snote_single_text_window_t3_ParamLimits

0x856c,	// (0x00022ef7) popup_snote_single_text_window_t3

0x85a5,	// (0x00022f30) popup_snote_single_text_window_t4_ParamLimits

0x85a5,	// (0x00022f30) popup_snote_single_text_window_t4

0x85d9,	// (0x00022f64) popup_snote_single_text_window_t5_ParamLimits

0x85d9,	// (0x00022f64) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00029f31) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00029f31) popup_snote_single_text_window_t

0x8608,	// (0x00022f93) bg_popup_window_pane_cp9_ParamLimits

0x8608,	// (0x00022f93) bg_popup_window_pane_cp9

0x8534,	// (0x00022ebf) popup_snote_single_graphic_window_g1_ParamLimits

0x8534,	// (0x00022ebf) popup_snote_single_graphic_window_g1

0x8616,	// (0x00022fa1) popup_snote_single_graphic_window_g2_ParamLimits

0x8616,	// (0x00022fa1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00029f3c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00029f3c) popup_snote_single_graphic_window_g

0x8622,	// (0x00022fad) popup_snote_single_graphic_window_t1_ParamLimits

0x8622,	// (0x00022fad) popup_snote_single_graphic_window_t1

0x8635,	// (0x00022fc0) popup_snote_single_graphic_window_t2_ParamLimits

0x8635,	// (0x00022fc0) popup_snote_single_graphic_window_t2

0x8648,	// (0x00022fd3) popup_snote_single_graphic_window_t3_ParamLimits

0x8648,	// (0x00022fd3) popup_snote_single_graphic_window_t3

0x8681,	// (0x0002300c) popup_snote_single_graphic_window_t4_ParamLimits

0x8681,	// (0x0002300c) popup_snote_single_graphic_window_t4

0x86b5,	// (0x00023040) popup_snote_single_graphic_window_t5_ParamLimits

0x86b5,	// (0x00023040) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00029f41) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00029f41) popup_snote_single_graphic_window_t

0xb3cd,	// (0x00025d58) grid_graphic_popup_pane_ParamLimits

0xb3cd,	// (0x00025d58) grid_graphic_popup_pane

0xb3f7,	// (0x00025d82) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3f7,	// (0x00025d82) listscroll_popup_graphic_pane_g1

0xb40b,	// (0x00025d96) listscroll_popup_graphic_pane_g2_ParamLimits

0xb40b,	// (0x00025d96) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a334) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a334) listscroll_popup_graphic_pane_g

0xb41f,	// (0x00025daa) scroll_pane_cp5

0xb36c,	// (0x00025cf7) cell_graphic_popup_pane_ParamLimits

0xb36c,	// (0x00025cf7) cell_graphic_popup_pane

0xb34d,	// (0x00025cd8) cell_graphic_popup_pane_g1

0xb355,	// (0x00025ce0) cell_graphic_popup_pane_g2

0x8508,	// (0x00022e93) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a32d) cell_graphic_popup_pane_g

0xb35e,	// (0x00025ce9) cell_graphic_popup_pane_t2

0x8511,	// (0x00022e9c) grid_highlight_pane_cp3

0x86f6,	// (0x00023081) list_gen_pane_ParamLimits

0x86f6,	// (0x00023081) list_gen_pane

0x8728,	// (0x000230b3) scroll_pane

0xb2a5,	// (0x00025c30) bg_list_pane_g1_ParamLimits

0xb2a5,	// (0x00025c30) bg_list_pane_g1

0xb2c2,	// (0x00025c4d) bg_list_pane_g2_ParamLimits

0xb2c2,	// (0x00025c4d) bg_list_pane_g2

0xb2d7,	// (0x00025c62) bg_list_pane_g3_ParamLimits

0xb2d7,	// (0x00025c62) bg_list_pane_g3

0xb2eb,	// (0x00025c76) bg_list_pane_g4_ParamLimits

0xb2eb,	// (0x00025c76) bg_list_pane_g4

0xb2ff,	// (0x00025c8a) bg_list_pane_g5_ParamLimits

0xb2ff,	// (0x00025c8a) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a322) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a322) bg_list_pane_g

0x52ea,	// (0x0001fc75) list_double2_graphic_large_graphic_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double2_graphic_large_graphic_pane

0x52ea,	// (0x0001fc75) list_double2_graphic_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double2_graphic_pane

0x52ea,	// (0x0001fc75) list_double2_large_graphic_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double2_large_graphic_pane

0x52ea,	// (0x0001fc75) list_double2_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double2_pane

0x52ea,	// (0x0001fc75) list_double_graphic_heading_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_graphic_heading_pane

0x52ea,	// (0x0001fc75) list_double_graphic_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_graphic_pane

0x52ea,	// (0x0001fc75) list_double_heading_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_heading_pane

0x52ea,	// (0x0001fc75) list_double_large_graphic_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_large_graphic_pane

0x52ea,	// (0x0001fc75) list_double_number_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_number_pane

0x52ea,	// (0x0001fc75) list_double_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_pane

0x52ea,	// (0x0001fc75) list_double_time_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_double_time_pane

0x52ea,	// (0x0001fc75) list_setting_number_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_setting_number_pane

0x52ea,	// (0x0001fc75) list_setting_pane_ParamLimits

0x52ea,	// (0x0001fc75) list_setting_pane

0x5325,	// (0x0001fcb0) list_single_2graphic_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_2graphic_pane

0x5325,	// (0x0001fcb0) list_single_graphic_heading_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_graphic_heading_pane

0x5325,	// (0x0001fcb0) list_single_graphic_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_graphic_pane

0x5325,	// (0x0001fcb0) list_single_heading_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_heading_pane

0x5365,	// (0x0001fcf0) list_single_large_graphic_pane_ParamLimits

0x5365,	// (0x0001fcf0) list_single_large_graphic_pane

0x5325,	// (0x0001fcb0) list_single_number_heading_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_number_heading_pane

0x5325,	// (0x0001fcb0) list_single_number_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_number_pane

0x5325,	// (0x0001fcb0) list_single_pane_ParamLimits

0x5325,	// (0x0001fcb0) list_single_pane

0x7e66,	// (0x000227f1) list_highlight_pane_cp1

0x4975,	// (0x0001f300) list_single_pane_g1_ParamLimits

0x4975,	// (0x0001f300) list_single_pane_g1

0x4981,	// (0x0001f30c) list_single_pane_g2_ParamLimits

0x4981,	// (0x0001f30c) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00029f53) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00029f53) list_single_pane_g

0x52d4,	// (0x0001fc5f) list_single_pane_t1_ParamLimits

0x52d4,	// (0x0001fc5f) list_single_pane_t1

0x4975,	// (0x0001f300) list_single_number_pane_g1_ParamLimits

0x4975,	// (0x0001f300) list_single_number_pane_g1

0x4981,	// (0x0001f30c) list_single_number_pane_g2_ParamLimits

0x4981,	// (0x0001f30c) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00029f53) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00029f53) list_single_number_pane_g

0x527e,	// (0x0001fc09) list_single_number_pane_t1_ParamLimits

0x527e,	// (0x0001fc09) list_single_number_pane_t1

0x5294,	// (0x0001fc1f) list_single_number_pane_t2_ParamLimits

0x5294,	// (0x0001fc1f) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a2e3) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a2e3) list_single_number_pane_t

0x4969,	// (0x0001f2f4) list_single_graphic_pane_g1_ParamLimits

0x4969,	// (0x0001f2f4) list_single_graphic_pane_g1

0x4975,	// (0x0001f300) list_single_graphic_pane_g2_ParamLimits

0x4975,	// (0x0001f300) list_single_graphic_pane_g2

0x4981,	// (0x0001f30c) list_single_graphic_pane_g3_ParamLimits

0x4981,	// (0x0001f30c) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00029f4c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00029f4c) list_single_graphic_pane_g

0x498d,	// (0x0001f318) list_single_graphic_pane_t1_ParamLimits

0x498d,	// (0x0001f318) list_single_graphic_pane_t1

0x4975,	// (0x0001f300) list_single_heading_pane_g1_ParamLimits

0x4975,	// (0x0001f300) list_single_heading_pane_g1

0x4981,	// (0x0001f30c) list_single_heading_pane_g2_ParamLimits

0x4981,	// (0x0001f30c) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029f53) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029f53) list_single_heading_pane_g

0x49a3,	// (0x0001f32e) list_single_heading_pane_t1_ParamLimits

0x49a3,	// (0x0001f32e) list_single_heading_pane_t1

0x49b9,	// (0x0001f344) list_single_heading_pane_t2_ParamLimits

0x49b9,	// (0x0001f344) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00029f58) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00029f58) list_single_heading_pane_t

0x4975,	// (0x0001f300) list_single_number_heading_pane_g1_ParamLimits

0x4975,	// (0x0001f300) list_single_number_heading_pane_g1

0x4981,	// (0x0001f30c) list_single_number_heading_pane_g2_ParamLimits

0x4981,	// (0x0001f30c) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029f53) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029f53) list_single_number_heading_pane_g

0x49a3,	// (0x0001f32e) list_single_number_heading_pane_t1_ParamLimits

0x49a3,	// (0x0001f32e) list_single_number_heading_pane_t1

0x49cb,	// (0x0001f356) list_single_number_heading_pane_t2_ParamLimits

0x49cb,	// (0x0001f356) list_single_number_heading_pane_t2

0x49dd,	// (0x0001f368) list_single_number_heading_pane_t3_ParamLimits

0x49dd,	// (0x0001f368) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00029f5d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00029f5d) list_single_number_heading_pane_t

0x49ef,	// (0x0001f37a) list_single_graphic_heading_pane_g1_ParamLimits

0x49ef,	// (0x0001f37a) list_single_graphic_heading_pane_g1

0x49fb,	// (0x0001f386) list_single_graphic_heading_pane_g4_ParamLimits

0x49fb,	// (0x0001f386) list_single_graphic_heading_pane_g4

0x4981,	// (0x0001f30c) list_single_graphic_heading_pane_g5_ParamLimits

0x4981,	// (0x0001f30c) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00029f64) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00029f64) list_single_graphic_heading_pane_g

0x49a3,	// (0x0001f32e) list_single_graphic_heading_pane_t1_ParamLimits

0x49a3,	// (0x0001f32e) list_single_graphic_heading_pane_t1

0x4a0c,	// (0x0001f397) list_single_graphic_heading_pane_t2_ParamLimits

0x4a0c,	// (0x0001f397) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00029f6b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00029f6b) list_single_graphic_heading_pane_t

0x4a1e,	// (0x0001f3a9) list_single_large_graphic_pane_g1_ParamLimits

0x4a1e,	// (0x0001f3a9) list_single_large_graphic_pane_g1

0x4a2a,	// (0x0001f3b5) list_single_large_graphic_pane_g2_ParamLimits

0x4a2a,	// (0x0001f3b5) list_single_large_graphic_pane_g2

0x4a36,	// (0x0001f3c1) list_single_large_graphic_pane_g3_ParamLimits

0x4a36,	// (0x0001f3c1) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00029f70) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00029f70) list_single_large_graphic_pane_g

0xa2b9,	// (0x00024c44) wait_border_pane_g2_copy1

0x4a42,	// (0x0001f3cd) list_single_large_graphic_pane_g4_cp2

0x4a4a,	// (0x0001f3d5) list_single_large_graphic_pane_t1_ParamLimits

0x4a4a,	// (0x0001f3d5) list_single_large_graphic_pane_t1

0x4a60,	// (0x0001f3eb) list_double_pane_g1_ParamLimits

0x4a60,	// (0x0001f3eb) list_double_pane_g1

0x4a6c,	// (0x0001f3f7) list_double_pane_g2_ParamLimits

0x4a6c,	// (0x0001f3f7) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00029f77) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00029f77) list_double_pane_g

0x4a78,	// (0x0001f403) list_double_pane_t1_ParamLimits

0x4a78,	// (0x0001f403) list_double_pane_t1

0x4a8e,	// (0x0001f419) list_double_pane_t2_ParamLimits

0x4a8e,	// (0x0001f419) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00029f7c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00029f7c) list_double_pane_t

0x4aa0,	// (0x0001f42b) list_double2_pane_g1_ParamLimits

0x4aa0,	// (0x0001f42b) list_double2_pane_g1

0x4ab1,	// (0x0001f43c) list_double2_pane_g2_ParamLimits

0x4ab1,	// (0x0001f43c) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00029f81) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00029f81) list_double2_pane_g

0x4abd,	// (0x0001f448) list_double2_pane_t1_ParamLimits

0x4abd,	// (0x0001f448) list_double2_pane_t1

0x4ad3,	// (0x0001f45e) list_double2_pane_t2_ParamLimits

0x4ad3,	// (0x0001f45e) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00029f86) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00029f86) list_double2_pane_t

0x4a60,	// (0x0001f3eb) list_double_number_pane_g1_ParamLimits

0x4a60,	// (0x0001f3eb) list_double_number_pane_g1

0x4a6c,	// (0x0001f3f7) list_double_number_pane_g2_ParamLimits

0x4a6c,	// (0x0001f3f7) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00029f77) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00029f77) list_double_number_pane_g

0x4ae5,	// (0x0001f470) list_double_number_pane_t1_ParamLimits

0x4ae5,	// (0x0001f470) list_double_number_pane_t1

0x4af7,	// (0x0001f482) list_double_number_pane_t2_ParamLimits

0x4af7,	// (0x0001f482) list_double_number_pane_t2

0x4b0d,	// (0x0001f498) list_double_number_pane_t3_ParamLimits

0x4b0d,	// (0x0001f498) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00029f8b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00029f8b) list_double_number_pane_t

0x4b1f,	// (0x0001f4aa) list_double_graphic_pane_g1_ParamLimits

0x4b1f,	// (0x0001f4aa) list_double_graphic_pane_g1

0x4b2b,	// (0x0001f4b6) list_double_graphic_pane_g2_ParamLimits

0x4b2b,	// (0x0001f4b6) list_double_graphic_pane_g2

0x4b3a,	// (0x0001f4c5) list_double_graphic_pane_g3_ParamLimits

0x4b3a,	// (0x0001f4c5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00029f92) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00029f92) list_double_graphic_pane_g

0x4b52,	// (0x0001f4dd) list_double_graphic_pane_t1_ParamLimits

0x4b52,	// (0x0001f4dd) list_double_graphic_pane_t1

0x4b68,	// (0x0001f4f3) list_double_graphic_pane_t2_ParamLimits

0x4b68,	// (0x0001f4f3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00029f9b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00029f9b) list_double_graphic_pane_t

0x4b7a,	// (0x0001f505) list_double2_graphic_pane_g1_ParamLimits

0x4b7a,	// (0x0001f505) list_double2_graphic_pane_g1

0x4b86,	// (0x0001f511) list_double2_graphic_pane_g2_ParamLimits

0x4b86,	// (0x0001f511) list_double2_graphic_pane_g2

0x4ab1,	// (0x0001f43c) list_double2_graphic_pane_g3_ParamLimits

0x4ab1,	// (0x0001f43c) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00029fa0) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00029fa0) list_double2_graphic_pane_g

0x4b92,	// (0x0001f51d) list_double2_graphic_pane_t1_ParamLimits

0x4b92,	// (0x0001f51d) list_double2_graphic_pane_t1

0x4ba8,	// (0x0001f533) list_double2_graphic_pane_t2_ParamLimits

0x4ba8,	// (0x0001f533) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00029fa7) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00029fa7) list_double2_graphic_pane_t

0x4bba,	// (0x0001f545) list_double_large_graphic_pane_g1_ParamLimits

0x4bba,	// (0x0001f545) list_double_large_graphic_pane_g1

0x4bcd,	// (0x0001f558) list_double_large_graphic_pane_g2_ParamLimits

0x4bcd,	// (0x0001f558) list_double_large_graphic_pane_g2

0x4a6c,	// (0x0001f3f7) list_double_large_graphic_pane_g3_ParamLimits

0x4a6c,	// (0x0001f3f7) list_double_large_graphic_pane_g3

0x4bde,	// (0x0001f569) list_double_large_graphic_pane_g4_ParamLimits

0x4bde,	// (0x0001f569) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00029fac) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00029fac) list_double_large_graphic_pane_g

0x4c05,	// (0x0001f590) list_double_large_graphic_pane_t1_ParamLimits

0x4c05,	// (0x0001f590) list_double_large_graphic_pane_t1

0x4c1e,	// (0x0001f5a9) list_double_large_graphic_pane_t2_ParamLimits

0x4c1e,	// (0x0001f5a9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029fb7) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029fb7) list_double_large_graphic_pane_t

0x4c30,	// (0x0001f5bb) list_double2_large_graphic_pane_g1_ParamLimits

0x4c30,	// (0x0001f5bb) list_double2_large_graphic_pane_g1

0x4aa0,	// (0x0001f42b) list_double2_large_graphic_pane_g2_ParamLimits

0x4aa0,	// (0x0001f42b) list_double2_large_graphic_pane_g2

0x4ab1,	// (0x0001f43c) list_double2_large_graphic_pane_g3_ParamLimits

0x4ab1,	// (0x0001f43c) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00029fbc) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00029fbc) list_double2_large_graphic_pane_g

0x4c3c,	// (0x0001f5c7) list_double2_large_graphic_pane_t1_ParamLimits

0x4c3c,	// (0x0001f5c7) list_double2_large_graphic_pane_t1

0x4c52,	// (0x0001f5dd) list_double2_large_graphic_pane_t2_ParamLimits

0x4c52,	// (0x0001f5dd) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00029fc3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00029fc3) list_double2_large_graphic_pane_t

0x4c64,	// (0x0001f5ef) list_double_heading_pane_g1_ParamLimits

0x4c64,	// (0x0001f5ef) list_double_heading_pane_g1

0x4c75,	// (0x0001f600) list_double_heading_pane_g2_ParamLimits

0x4c75,	// (0x0001f600) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00029fc8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00029fc8) list_double_heading_pane_g

0x4c81,	// (0x0001f60c) list_double_heading_pane_t1_ParamLimits

0x4c81,	// (0x0001f60c) list_double_heading_pane_t1

0x4ad3,	// (0x0001f45e) list_double_heading_pane_t2_ParamLimits

0x4ad3,	// (0x0001f45e) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00029fcd) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00029fcd) list_double_heading_pane_t

0x4c97,	// (0x0001f622) list_double_graphic_heading_pane_g1_ParamLimits

0x4c97,	// (0x0001f622) list_double_graphic_heading_pane_g1

0x4c64,	// (0x0001f5ef) list_double_graphic_heading_pane_g2_ParamLimits

0x4c64,	// (0x0001f5ef) list_double_graphic_heading_pane_g2

0x4c75,	// (0x0001f600) list_double_graphic_heading_pane_g3_ParamLimits

0x4c75,	// (0x0001f600) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00029fd2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00029fd2) list_double_graphic_heading_pane_g

0x4ca3,	// (0x0001f62e) list_double_graphic_heading_pane_t1_ParamLimits

0x4ca3,	// (0x0001f62e) list_double_graphic_heading_pane_t1

0x4ba8,	// (0x0001f533) list_double_graphic_heading_pane_t2_ParamLimits

0x4ba8,	// (0x0001f533) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00029fd9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00029fd9) list_double_graphic_heading_pane_t

0x4bcd,	// (0x0001f558) list_double_time_pane_g1_ParamLimits

0x4bcd,	// (0x0001f558) list_double_time_pane_g1

0x4a6c,	// (0x0001f3f7) list_double_time_pane_g2_ParamLimits

0x4a6c,	// (0x0001f3f7) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00029fde) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00029fde) list_double_time_pane_g

0x4cb9,	// (0x0001f644) list_double_time_pane_t1_ParamLimits

0x4cb9,	// (0x0001f644) list_double_time_pane_t1

0x4ccf,	// (0x0001f65a) list_double_time_pane_t2_ParamLimits

0x4ccf,	// (0x0001f65a) list_double_time_pane_t2

0x4ce1,	// (0x0001f66c) list_double_time_pane_t3_ParamLimits

0x4ce1,	// (0x0001f66c) list_double_time_pane_t3

0x4cf3,	// (0x0001f67e) list_double_time_pane_t4_ParamLimits

0x4cf3,	// (0x0001f67e) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00029fe3) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00029fe3) list_double_time_pane_t

0x4b86,	// (0x0001f511) list_setting_pane_g1_ParamLimits

0x4b86,	// (0x0001f511) list_setting_pane_g1

0x4ab1,	// (0x0001f43c) list_setting_pane_g2_ParamLimits

0x4ab1,	// (0x0001f43c) list_setting_pane_g2

0x0001,

0xf661,	// (0x00029fec) list_setting_pane_g_ParamLimits

0xf661,	// (0x00029fec) list_setting_pane_g

0x4d05,	// (0x0001f690) list_setting_pane_t1_ParamLimits

0x4d05,	// (0x0001f690) list_setting_pane_t1

0x4d1f,	// (0x0001f6aa) list_setting_pane_t2_ParamLimits

0x4d1f,	// (0x0001f6aa) list_setting_pane_t2

0x0002,

0xf666,	// (0x00029ff1) list_setting_pane_t_ParamLimits

0xf666,	// (0x00029ff1) list_setting_pane_t

0x4d5e,	// (0x0001f6e9) set_value_pane_cp_ParamLimits

0x4d5e,	// (0x0001f6e9) set_value_pane_cp

0x4d6a,	// (0x0001f6f5) list_setting_number_pane_g1_ParamLimits

0x4d6a,	// (0x0001f6f5) list_setting_number_pane_g1

0x4d76,	// (0x0001f701) list_setting_number_pane_g2_ParamLimits

0x4d76,	// (0x0001f701) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00029ff8) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00029ff8) list_setting_number_pane_g

0x4d82,	// (0x0001f70d) list_setting_number_pane_t1_ParamLimits

0x4d82,	// (0x0001f70d) list_setting_number_pane_t1

0x4d9b,	// (0x0001f726) list_setting_number_pane_t2_ParamLimits

0x4d9b,	// (0x0001f726) list_setting_number_pane_t2

0x4db5,	// (0x0001f740) list_setting_number_pane_t3_ParamLimits

0x4db5,	// (0x0001f740) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00029ffd) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00029ffd) list_setting_number_pane_t

0x4d5e,	// (0x0001f6e9) set_value_pane_ParamLimits

0x4d5e,	// (0x0001f6e9) set_value_pane

0x875c,	// (0x000230e7) bg_set_opt_pane_ParamLimits

0x875c,	// (0x000230e7) bg_set_opt_pane

0x4df8,	// (0x0001f783) set_value_pane_t1

0x877d,	// (0x00023108) slider_set_pane_cp3

0x8786,	// (0x00023111) volume_small_pane_cp

0x878f,	// (0x0002311a) list_form_gen_pane

0x8798,	// (0x00023123) scroll_pane_cp8

0x4e0e,	// (0x0001f799) form_field_data_pane_ParamLimits

0x4e0e,	// (0x0001f799) form_field_data_pane

0x4e2e,	// (0x0001f7b9) form_field_data_wide_pane_ParamLimits

0x4e2e,	// (0x0001f7b9) form_field_data_wide_pane

0x4e4f,	// (0x0001f7da) form_field_popup_pane_ParamLimits

0x4e4f,	// (0x0001f7da) form_field_popup_pane

0x4e6f,	// (0x0001f7fa) form_field_popup_wide_pane_ParamLimits

0x4e6f,	// (0x0001f7fa) form_field_popup_wide_pane

0x4e8c,	// (0x0001f817) form_field_slider_pane_ParamLimits

0x4e8c,	// (0x0001f817) form_field_slider_pane

0x4e9f,	// (0x0001f82a) form_field_slider_wide_pane_ParamLimits

0x4e9f,	// (0x0001f82a) form_field_slider_wide_pane

0x87a9,	// (0x00023134) data_form_pane

0x4ebc,	// (0x0001f847) form_field_data_pane_t1

0x87b5,	// (0x00023140) input_focus_pane

0x4ed4,	// (0x0001f85f) data_form_wide_pane

0x4ef1,	// (0x0001f87c) form_field_data_wide_pane_t1

0x8526,	// (0x00022eb1) input_focus_pane_cp6

0x4f13,	// (0x0001f89e) form_field_popup_pane_t1

0x87b5,	// (0x00023140) input_focus_pane_cp7

0x87e3,	// (0x0002316e) list_form_pane

0x4f33,	// (0x0001f8be) form_field_popup_wide_pane_t1

0x87b5,	// (0x00023140) input_focus_pane_cp8

0x87ef,	// (0x0002317a) list_form_wide_pane

0x4f50,	// (0x0001f8db) form_field_slider_pane_t1_ParamLimits

0x4f50,	// (0x0001f8db) form_field_slider_pane_t1

0x4f66,	// (0x0001f8f1) form_field_slider_pane_t2_ParamLimits

0x4f66,	// (0x0001f8f1) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002a00d) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002a00d) form_field_slider_pane_t

0x81c1,	// (0x00022b4c) input_focus_pane_cp9_ParamLimits

0x81c1,	// (0x00022b4c) input_focus_pane_cp9

0x4f7b,	// (0x0001f906) slider_cont_pane_ParamLimits

0x4f7b,	// (0x0001f906) slider_cont_pane

0x87fb,	// (0x00023186) form_field_slider_wide_pane_t1_ParamLimits

0x87fb,	// (0x00023186) form_field_slider_wide_pane_t1

0x4f8f,	// (0x0001f91a) form_field_slider_wide_pane_t2_ParamLimits

0x4f8f,	// (0x0001f91a) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002a012) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002a012) form_field_slider_wide_pane_t

0x81c1,	// (0x00022b4c) input_focus_pane_cp10_ParamLimits

0x81c1,	// (0x00022b4c) input_focus_pane_cp10

0x4fa1,	// (0x0001f92c) slider_cont_pane_cp1_ParamLimits

0x4fa1,	// (0x0001f92c) slider_cont_pane_cp1

0x4fb5,	// (0x0001f940) slider_form_pane_cp

0x880d,	// (0x00023198) input_focus_pane_g1

0x8815,	// (0x000231a0) input_focus_pane_g2

0x881d,	// (0x000231a8) input_focus_pane_g3

0x8825,	// (0x000231b0) input_focus_pane_g4

0x882d,	// (0x000231b8) input_focus_pane_g5

0x8835,	// (0x000231c0) input_focus_pane_g6

0x883d,	// (0x000231c8) input_focus_pane_g7

0x8845,	// (0x000231d0) input_focus_pane_g8

0x884d,	// (0x000231d8) input_focus_pane_g9

0x7e5c,	// (0x000227e7) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002a017) input_focus_pane_g

0xa2c2,	// (0x00024c4d) wait_border_pane_g3_copy1

0x4fbd,	// (0x0001f948) data_form_pane_t1

0x7e5c,	// (0x000227e7) wait_anim_pane_g1_copy1

0x52a6,	// (0x0001fc31) data_form_wide_pane_t1

0x4fd8,	// (0x0001f963) list_form_graphic_pane_cp_ParamLimits

0x4fd8,	// (0x0001f963) list_form_graphic_pane_cp

0xb1e2,	// (0x00025b6d) slider_form_pane_g1

0xb1eb,	// (0x00025b76) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a313) slider_form_pane_g

0x4ff1,	// (0x0001f97c) list_form_graphic_pane_ParamLimits

0x4ff1,	// (0x0001f97c) list_form_graphic_pane

0x500d,	// (0x0001f998) list_form_graphic_pane_g1

0x5015,	// (0x0001f9a0) list_form_graphic_pane_t1_ParamLimits

0x5015,	// (0x0001f9a0) list_form_graphic_pane_t1

0x7f46,	// (0x000228d1) list_highlight_pane_cp5_ParamLimits

0x7f46,	// (0x000228d1) list_highlight_pane_cp5

0x502a,	// (0x0001f9b5) find_pane_g1

0x8855,	// (0x000231e0) input_find_pane

0x5033,	// (0x0001f9be) input_find_pane_g1_ParamLimits

0x5033,	// (0x0001f9be) input_find_pane_g1

0x503f,	// (0x0001f9ca) input_find_pane_t1_ParamLimits

0x503f,	// (0x0001f9ca) input_find_pane_t1

0x5054,	// (0x0001f9df) input_find_pane_t2_ParamLimits

0x5054,	// (0x0001f9df) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002a02c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002a02c) input_find_pane_t

0x885e,	// (0x000231e9) input_focus_pane_cp5_ParamLimits

0x885e,	// (0x000231e9) input_focus_pane_cp5

0x8878,	// (0x00023203) bg_popup_window_pane_cp2_ParamLimits

0x8878,	// (0x00023203) bg_popup_window_pane_cp2

0x8885,	// (0x00023210) listscroll_menu_pane_ParamLimits

0x8885,	// (0x00023210) listscroll_menu_pane

0x8891,	// (0x0002321c) popup_submenu_window_ParamLimits

0x8891,	// (0x0002321c) popup_submenu_window

0x88bd,	// (0x00023248) find_popup_pane_g1

0x88c5,	// (0x00023250) input_popup_find_pane_cp

0x885e,	// (0x000231e9) input_focus_pane_cp4_ParamLimits

0x885e,	// (0x000231e9) input_focus_pane_cp4

0x88db,	// (0x00023266) input_popup_find_pane_t1_ParamLimits

0x88db,	// (0x00023266) input_popup_find_pane_t1

0x7e66,	// (0x000227f1) bg_popup_sub_pane_cp

0x8909,	// (0x00023294) listscroll_popup_sub_pane

0x8911,	// (0x0002329c) list_submenu_pane_ParamLimits

0x8911,	// (0x0002329c) list_submenu_pane

0x8922,	// (0x000232ad) scroll_pane_cp4

0x892a,	// (0x000232b5) list_single_popup_submenu_pane_ParamLimits

0x892a,	// (0x000232b5) list_single_popup_submenu_pane

0x893e,	// (0x000232c9) list_single_popup_submenu_pane_g1

0x8946,	// (0x000232d1) list_single_popup_submenu_pane_t1_ParamLimits

0x8946,	// (0x000232d1) list_single_popup_submenu_pane_t1

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp1_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp1

0x895b,	// (0x000232e6) tabs_2_active_pane_g1

0x8963,	// (0x000232ee) tabs_2_active_pane_t1

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp1_ParamLimits

0x7f46,	// (0x000228d1) bg_passive_tab_pane_cp1

0x895b,	// (0x000232e6) tabs_2_passive_pane_g1

0x8963,	// (0x000232ee) tabs_2_passive_pane_t1

0x8975,	// (0x00023300) bg_active_tab_pane_cp4

0x8983,	// (0x0002330e) tabs_2_long_active_pane_t1

0x8996,	// (0x00023321) bg_passive_tab_pane_cp4

0x6b3c,	// (0x000214c7) list_single_midp_graphic_pane_g4_ParamLimits

0x8975,	// (0x00023300) bg_active_tab_pane_cp5

0x89a2,	// (0x0002332d) tabs_3_long_active_pane_t1

0x8996,	// (0x00023321) bg_passive_tab_pane_cp5

0x6b3c,	// (0x000214c7) list_single_midp_graphic_pane_g4

0x7f46,	// (0x000228d1) bg_popup_window_pane_cp13_ParamLimits

0x7f46,	// (0x000228d1) bg_popup_window_pane_cp13

0x89bd,	// (0x00023348) listscroll_popup_fast_pane_ParamLimits

0x89bd,	// (0x00023348) listscroll_popup_fast_pane

0x89cc,	// (0x00023357) grid_popup_fast_pane_ParamLimits

0x89cc,	// (0x00023357) grid_popup_fast_pane

0x89de,	// (0x00023369) scroll_pane_cp9_ParamLimits

0x89de,	// (0x00023369) scroll_pane_cp9

0xcae0,	// (0x0002746b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x0002746b) list_single_graphic_hl_pane_t1_cp2

0x8a02,	// (0x0002338d) input_focus_pane_cp20_ParamLimits

0x8a02,	// (0x0002338d) input_focus_pane_cp20

0x8a10,	// (0x0002339b) query_popup_data_pane_t1_ParamLimits

0x8a10,	// (0x0002339b) query_popup_data_pane_t1

0x8a23,	// (0x000233ae) query_popup_data_pane_t2_ParamLimits

0x8a23,	// (0x000233ae) query_popup_data_pane_t2

0x8a69,	// (0x000233f4) query_popup_data_pane_t3_ParamLimits

0x8a69,	// (0x000233f4) query_popup_data_pane_t3

0x8aaa,	// (0x00023435) query_popup_data_pane_t4_ParamLimits

0x8aaa,	// (0x00023435) query_popup_data_pane_t4

0x8ae6,	// (0x00023471) query_popup_data_pane_t5_ParamLimits

0x8ae6,	// (0x00023471) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002a031) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002a031) query_popup_data_pane_t

0x880d,	// (0x00023198) bg_set_opt_pane_g1

0x8815,	// (0x000231a0) bg_set_opt_pane_g2

0x881d,	// (0x000231a8) bg_set_opt_pane_g3

0x8825,	// (0x000231b0) bg_set_opt_pane_g4

0x882d,	// (0x000231b8) bg_set_opt_pane_g5

0x8835,	// (0x000231c0) bg_set_opt_pane_g6

0x883d,	// (0x000231c8) bg_set_opt_pane_g7

0x8845,	// (0x000231d0) bg_set_opt_pane_g8

0x884d,	// (0x000231d8) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002a03c) bg_set_opt_pane_g

0x61e2,	// (0x00020b6d) control_top_pane_stacon_ParamLimits

0x61e2,	// (0x00020b6d) control_top_pane_stacon

0x6235,	// (0x00020bc0) signal_pane_stacon_ParamLimits

0x6235,	// (0x00020bc0) signal_pane_stacon

0x90da,	// (0x00023a65) stacon_top_pane_g1_ParamLimits

0x90da,	// (0x00023a65) stacon_top_pane_g1

0x625a,	// (0x00020be5) title_pane_stacon_ParamLimits

0x625a,	// (0x00020be5) title_pane_stacon

0x6284,	// (0x00020c0f) uni_indicator_pane_stacon_ParamLimits

0x6284,	// (0x00020c0f) uni_indicator_pane_stacon

0x6299,	// (0x00020c24) battery_pane_stacon_ParamLimits

0x6299,	// (0x00020c24) battery_pane_stacon

0x62dd,	// (0x00020c68) control_bottom_pane_stacon_ParamLimits

0x62dd,	// (0x00020c68) control_bottom_pane_stacon

0x6300,	// (0x00020c8b) navi_pane_stacon_ParamLimits

0x6300,	// (0x00020c8b) navi_pane_stacon

0x90fc,	// (0x00023a87) stacon_bottom_pane_g1_ParamLimits

0x90fc,	// (0x00023a87) stacon_bottom_pane_g1

0x5f45,	// (0x000208d0) aid_levels_signal_lsc_ParamLimits

0x5f45,	// (0x000208d0) aid_levels_signal_lsc

0x5f5b,	// (0x000208e6) signal_pane_stacon_g1_ParamLimits

0x5f5b,	// (0x000208e6) signal_pane_stacon_g1

0x5f6f,	// (0x000208fa) signal_pane_stacon_g2_ParamLimits

0x5f6f,	// (0x000208fa) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002a04f) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a04f) signal_pane_stacon_g

0x5fa4,	// (0x0002092f) title_pane_stacon_t1_ParamLimits

0x5fa4,	// (0x0002092f) title_pane_stacon_t1

0x8b2a,	// (0x000234b5) uni_indicator_pane_stacon_g1

0x8b34,	// (0x000234bf) uni_indicator_pane_stacon_g2

0x8b3e,	// (0x000234c9) uni_indicator_pane_stacon_g3

0x8b48,	// (0x000234d3) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002a05b) uni_indicator_pane_stacon_g

0x5fc9,	// (0x00020954) control_top_pane_stacon_g1

0x5fd1,	// (0x0002095c) control_top_pane_stacon_t1_ParamLimits

0x5fd1,	// (0x0002095c) control_top_pane_stacon_t1

0x6008,	// (0x00020993) aid_levels_battery_lsc_ParamLimits

0x6008,	// (0x00020993) aid_levels_battery_lsc

0x601f,	// (0x000209aa) battery_pane_stacon_g1_ParamLimits

0x601f,	// (0x000209aa) battery_pane_stacon_g1

0x6032,	// (0x000209bd) battery_pane_stacon_g2_ParamLimits

0x6032,	// (0x000209bd) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002a064) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002a064) battery_pane_stacon_g

0x6070,	// (0x000209fb) navi_icon_pane_stacon

0x6084,	// (0x00020a0f) navi_navi_pane_stacon

0x6070,	// (0x000209fb) navi_text_pane_stacon

0x5fc9,	// (0x00020954) control_bottom_pane_stacon_g1

0x6098,	// (0x00020a23) control_bottom_pane_stacon_t1_ParamLimits

0x6098,	// (0x00020a23) control_bottom_pane_stacon_t1

0x8b6c,	// (0x000234f7) grid_app_pane_ParamLimits

0x8b6c,	// (0x000234f7) grid_app_pane

0x8b90,	// (0x0002351b) scroll_pane_cp15_ParamLimits

0x8b90,	// (0x0002351b) scroll_pane_cp15

0x8ba3,	// (0x0002352e) cell_app_pane_ParamLimits

0x8ba3,	// (0x0002352e) cell_app_pane

0x8bcb,	// (0x00023556) cell_app_pane_g1_ParamLimits

0x8bcb,	// (0x00023556) cell_app_pane_g1

0x8bef,	// (0x0002357a) cell_app_pane_g2_ParamLimits

0x8bef,	// (0x0002357a) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002a069) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002a069) cell_app_pane_g

0x8bfb,	// (0x00023586) cell_app_pane_t1_ParamLimits

0x8bfb,	// (0x00023586) cell_app_pane_t1

0x8c12,	// (0x0002359d) grid_highlight_pane_ParamLimits

0x8c12,	// (0x0002359d) grid_highlight_pane

0x880d,	// (0x00023198) cell_highlight_pane_g1

0x8815,	// (0x000231a0) cell_highlight_pane_g2

0x881d,	// (0x000231a8) cell_highlight_pane_g3

0x8825,	// (0x000231b0) cell_highlight_pane_g4

0x882d,	// (0x000231b8) cell_highlight_pane_g5

0x8835,	// (0x000231c0) cell_highlight_pane_g6

0x883d,	// (0x000231c8) cell_highlight_pane_g7

0x8845,	// (0x000231d0) cell_highlight_pane_g8

0x884d,	// (0x000231d8) cell_highlight_pane_g9

0x7e5c,	// (0x000227e7) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002a017) cell_highlight_pane_g

0x8c23,	// (0x000235ae) bg_scroll_pane

0x60e2,	// (0x00020a6d) scroll_handle_pane

0x8c6a,	// (0x000235f5) scroll_bg_pane_g1

0x8c7f,	// (0x0002360a) scroll_bg_pane_g2

0x8c97,	// (0x00023622) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002a06e) scroll_bg_pane_g

0x8cac,	// (0x00023637) scroll_handle_focus_pane_ParamLimits

0x8cac,	// (0x00023637) scroll_handle_focus_pane

0x8c6a,	// (0x000235f5) scroll_handle_pane_g1

0x8cb9,	// (0x00023644) scroll_handle_pane_g2

0x8c97,	// (0x00023622) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a075) scroll_handle_pane_g

0x885e,	// (0x000231e9) bg_popup_sub_pane_cp21_ParamLimits

0x885e,	// (0x000231e9) bg_popup_sub_pane_cp21

0x8ccd,	// (0x00023658) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ccd,	// (0x00023658) popup_fep_japan_predictive_window_t1

0x8ce7,	// (0x00023672) popup_fep_japan_predictive_window_t2_ParamLimits

0x8ce7,	// (0x00023672) popup_fep_japan_predictive_window_t2

0x8d1a,	// (0x000236a5) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d1a,	// (0x000236a5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a07c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a07c) popup_fep_japan_predictive_window_t

0x7e66,	// (0x000227f1) bg_popup_sub_pane_cp23

0x8d51,	// (0x000236dc) listscroll_japin_cand_pane

0x8d59,	// (0x000236e4) popup_fep_japan_candidate_window_t1

0x8d67,	// (0x000236f2) candidate_pane_ParamLimits

0x8d67,	// (0x000236f2) candidate_pane

0x8d79,	// (0x00023704) scroll_pane_cp30

0x8d81,	// (0x0002370c) list_single_popup_jap_candidate_pane_ParamLimits

0x8d81,	// (0x0002370c) list_single_popup_jap_candidate_pane

0x7e66,	// (0x000227f1) list_highlight_pane_cp30

0x8d96,	// (0x00023721) list_single_popup_jap_candidate_pane_t1

0x8da5,	// (0x00023730) level_1_signal

0x8db7,	// (0x00023742) level_2_signal

0x8dca,	// (0x00023755) level_3_signal

0x8ddd,	// (0x00023768) level_4_signal

0x8df0,	// (0x0002377b) level_5_signal

0x8e03,	// (0x0002378e) level_6_signal

0x8e16,	// (0x000237a1) level_7_signal

0x8da5,	// (0x00023730) level_1_battery

0x8db7,	// (0x00023742) level_2_battery

0x8dca,	// (0x00023755) level_3_battery

0x8ddd,	// (0x00023768) level_4_battery

0x8df0,	// (0x0002377b) level_5_battery

0x8e03,	// (0x0002378e) level_6_battery

0x8e16,	// (0x000237a1) level_7_battery

0x8e41,	// (0x000237cc) list_menu_pane_ParamLimits

0x8e41,	// (0x000237cc) list_menu_pane

0x8e57,	// (0x000237e2) scroll_pane_cp25_ParamLimits

0x8e57,	// (0x000237e2) scroll_pane_cp25

0x8e70,	// (0x000237fb) list_double2_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double2_graphic_pane_cp2

0x8e70,	// (0x000237fb) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double2_large_graphic_pane_cp2

0x8e70,	// (0x000237fb) list_double2_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double2_pane_cp2

0x8e70,	// (0x000237fb) list_double_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double_graphic_pane_cp2

0x8e70,	// (0x000237fb) list_double_large_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double_large_graphic_pane_cp2

0x8e70,	// (0x000237fb) list_double_number_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double_number_pane_cp2

0x8e70,	// (0x000237fb) list_double_pane_cp2_ParamLimits

0x8e70,	// (0x000237fb) list_double_pane_cp2

0x8e94,	// (0x0002381f) list_single_2graphic_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_2graphic_pane_cp2

0x8e94,	// (0x0002381f) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_graphic_heading_pane_cp2

0x8e94,	// (0x0002381f) list_single_graphic_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_graphic_pane_cp2

0x8e94,	// (0x0002381f) list_single_heading_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_heading_pane_cp2

0x8ead,	// (0x00023838) list_single_large_graphic_pane_cp2_ParamLimits

0x8ead,	// (0x00023838) list_single_large_graphic_pane_cp2

0x8e94,	// (0x0002381f) list_single_number_heading_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_number_heading_pane_cp2

0x8e94,	// (0x0002381f) list_single_number_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_number_pane_cp2

0x8e94,	// (0x0002381f) list_single_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_pane_cp2

0x8f29,	// (0x000238b4) bg_popup_sub_pane_cp22

0x6194,	// (0x00020b1f) popup_side_volume_key_window_g1

0x61be,	// (0x00020b49) popup_side_volume_key_window_t1

0x61da,	// (0x00020b65) volume_small_pane_cp1

0x81c1,	// (0x00022b4c) bg_popup_sub_pane_cp24_ParamLimits

0x81c1,	// (0x00022b4c) bg_popup_sub_pane_cp24

0x8f3f,	// (0x000238ca) fep_china_uni_candidate_pane_ParamLimits

0x8f3f,	// (0x000238ca) fep_china_uni_candidate_pane

0x8f53,	// (0x000238de) fep_china_uni_entry_pane

0x8f63,	// (0x000238ee) popup_fep_china_uni_window_g1

0x8f7f,	// (0x0002390a) fep_china_uni_entry_pane_g1

0x8f87,	// (0x00023912) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a0ad) fep_china_uni_entry_pane_g

0x8f8f,	// (0x0002391a) fep_entry_item_pane

0x8f99,	// (0x00023924) fep_candidate_item_pane

0x8fa1,	// (0x0002392c) fep_china_uni_candidate_pane_g1

0x8fa9,	// (0x00023934) fep_china_uni_candidate_pane_g2

0x8fb1,	// (0x0002393c) fep_china_uni_candidate_pane_g3

0x8fb9,	// (0x00023944) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a0b2) fep_china_uni_candidate_pane_g

0x7e5c,	// (0x000227e7) fep_entry_item_pane_g1

0x8fc1,	// (0x0002394c) fep_entry_item_pane_t1_ParamLimits

0x8fc1,	// (0x0002394c) fep_entry_item_pane_t1

0x8fd7,	// (0x00023962) fep_candidate_item_pane_t1_ParamLimits

0x8fd7,	// (0x00023962) fep_candidate_item_pane_t1

0x8fec,	// (0x00023977) fep_candidate_item_pane_t2_ParamLimits

0x8fec,	// (0x00023977) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a0bb) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a0bb) fep_candidate_item_pane_t

0x7f46,	// (0x000228d1) list_highlight_pane_cp31_ParamLimits

0x7f46,	// (0x000228d1) list_highlight_pane_cp31

0x8ffe,	// (0x00023989) level_1_signal_lsc

0x9007,	// (0x00023992) level_2_signal_lsc

0x9010,	// (0x0002399b) level_3_signal_lsc

0x9019,	// (0x000239a4) level_4_signal_lsc

0x9022,	// (0x000239ad) level_5_signal_lsc

0x902b,	// (0x000239b6) level_6_signal_lsc

0x9034,	// (0x000239bf) level_7_signal_lsc

0x9034,	// (0x000239bf) level_1_battery_lsc

0x903d,	// (0x000239c8) level_2_battery_lsc

0x9046,	// (0x000239d1) level_3_battery_lsc

0x904f,	// (0x000239da) level_4_battery_lsc

0x9058,	// (0x000239e3) level_5_battery_lsc

0x9061,	// (0x000239ec) level_6_battery_lsc

0x8ffe,	// (0x00023989) level_7_battery_lsc

0x906a,	// (0x000239f5) scroll_handle_focus_pane_g1

0x9073,	// (0x000239fe) scroll_handle_focus_pane_g2

0x907c,	// (0x00023a07) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a0c0) scroll_handle_focus_pane_g

0x5069,	// (0x0001f9f4) list_single_2graphic_pane_g1_ParamLimits

0x5069,	// (0x0001f9f4) list_single_2graphic_pane_g1

0x49fb,	// (0x0001f386) list_single_2graphic_pane_g2_ParamLimits

0x49fb,	// (0x0001f386) list_single_2graphic_pane_g2

0x4981,	// (0x0001f30c) list_single_2graphic_pane_g3_ParamLimits

0x4981,	// (0x0001f30c) list_single_2graphic_pane_g3

0x5075,	// (0x0001fa00) list_single_2graphic_pane_g4_ParamLimits

0x5075,	// (0x0001fa00) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a0c7) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a0c7) list_single_2graphic_pane_g

0x5081,	// (0x0001fa0c) list_single_2graphic_pane_t1_ParamLimits

0x5081,	// (0x0001fa0c) list_single_2graphic_pane_t1

0x50af,	// (0x0001fa3a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x50af,	// (0x0001fa3a) list_double2_graphic_large_graphic_pane_g1

0x4aa0,	// (0x0001f42b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4aa0,	// (0x0001f42b) list_double2_graphic_large_graphic_pane_g2

0x4ab1,	// (0x0001f43c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ab1,	// (0x0001f43c) list_double2_graphic_large_graphic_pane_g3

0x50bf,	// (0x0001fa4a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x50bf,	// (0x0001fa4a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a0d0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a0d0) list_double2_graphic_large_graphic_pane_g

0x50cb,	// (0x0001fa56) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50cb,	// (0x0001fa56) list_double2_graphic_large_graphic_pane_t1

0x50e1,	// (0x0001fa6c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x50e1,	// (0x0001fa6c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a0d9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a0d9) list_double2_graphic_large_graphic_pane_t

0x91c4,	// (0x00023b4f) popup_fast_swap_window_ParamLimits

0x91c4,	// (0x00023b4f) popup_fast_swap_window

0x91e0,	// (0x00023b6b) popup_side_volume_key_window

0x91fc,	// (0x00023b87) stacon_top_pane

0x9206,	// (0x00023b91) status_pane_ParamLimits

0x9206,	// (0x00023b91) status_pane

0x9214,	// (0x00023b9f) status_small_pane

0x7e66,	// (0x000227f1) control_pane

0x7e66,	// (0x000227f1) stacon_bottom_pane

0x8798,	// (0x00023123) scroll_pane_cp121

0x878f,	// (0x0002311a) set_content_pane

0x9085,	// (0x00023a10) bg_active_tab_pane_g1_cp1

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp1

0x9097,	// (0x00023a22) bg_active_tab_pane_g3_cp1

0x9085,	// (0x00023a10) bg_passive_tab_pane_g1_cp1

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp1

0x9097,	// (0x00023a22) bg_passive_tab_pane_g3_cp1

0x90a0,	// (0x00023a2b) bg_active_tab_pane_g1_cp2

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp2

0x90a9,	// (0x00023a34) bg_active_tab_pane_g3_cp2

0x90a0,	// (0x00023a2b) bg_passive_tab_pane_g1_cp2

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp2

0x90a9,	// (0x00023a34) bg_passive_tab_pane_g3_cp2

0x90b2,	// (0x00023a3d) bg_active_tab_pane_g1_cp3

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp3

0x90bb,	// (0x00023a46) bg_active_tab_pane_g3_cp3

0x90b2,	// (0x00023a3d) bg_passive_tab_pane_g1_cp3

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp3

0x90bb,	// (0x00023a46) bg_passive_tab_pane_g3_cp3

0x90c4,	// (0x00023a4f) bg_active_tab_pane_g1_cp4

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp4

0x90cf,	// (0x00023a5a) bg_active_tab_pane_g3_cp4

0x90c4,	// (0x00023a4f) bg_passive_tab_pane_g1_cp4

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp4

0x90cf,	// (0x00023a5a) bg_passive_tab_pane_g3_cp4

0x9118,	// (0x00023aa3) bg_active_tab_pane_g1_cp5

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp5

0x9121,	// (0x00023aac) bg_active_tab_pane_g3_cp5

0x9118,	// (0x00023aa3) bg_passive_tab_pane_g1_cp5

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp5

0x9121,	// (0x00023aac) bg_passive_tab_pane_g3_cp5

0x912a,	// (0x00023ab5) list_set_graphic_pane_ParamLimits

0x912a,	// (0x00023ab5) list_set_graphic_pane

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp4

0x9147,	// (0x00023ad2) list_set_graphic_pane_g1_ParamLimits

0x9147,	// (0x00023ad2) list_set_graphic_pane_g1

0x9153,	// (0x00023ade) list_set_graphic_pane_g2_ParamLimits

0x9153,	// (0x00023ade) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a0de) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a0de) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a44c) volume_small_pane_cp_g

0x9177,	// (0x00023b02) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9177,	// (0x00023b02) list_double2_large_graphic_pane_g1_cp2

0x9183,	// (0x00023b0e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9183,	// (0x00023b0e) list_double2_large_graphic_pane_g2_cp2

0x9194,	// (0x00023b1f) list_double2_large_graphic_pane_g3_cp2

0x919c,	// (0x00023b27) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x919c,	// (0x00023b27) list_double2_large_graphic_pane_t1_cp2

0x91b2,	// (0x00023b3d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91b2,	// (0x00023b3d) list_double2_large_graphic_pane_t2_cp2

0xad95,	// (0x00025720) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad95,	// (0x00025720) list_double_large_graphic_pane_g1_cp2

0xada6,	// (0x00025731) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xada6,	// (0x00025731) list_double_large_graphic_pane_g2_cp2

0x932d,	// (0x00023cb8) list_double_large_graphic_pane_g3_cp2

0xadb7,	// (0x00025742) list_double_large_graphic_pane_g4_cp

0xadbf,	// (0x0002574a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadbf,	// (0x0002574a) list_double_large_graphic_pane_t1_cp2

0xadd6,	// (0x00025761) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadd6,	// (0x00025761) list_double_large_graphic_pane_t2_cp2

0x921f,	// (0x00023baa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x921f,	// (0x00023baa) list_double2_graphic_pane_g1_cp2

0x922d,	// (0x00023bb8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x922d,	// (0x00023bb8) list_double2_graphic_pane_g2_cp2

0x923e,	// (0x00023bc9) list_double2_graphic_pane_g3_cp2

0x9248,	// (0x00023bd3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9248,	// (0x00023bd3) list_double2_graphic_pane_t1_cp2

0x925e,	// (0x00023be9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x925e,	// (0x00023be9) list_double2_graphic_pane_t2_cp2

0x9270,	// (0x00023bfb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9270,	// (0x00023bfb) list_single_number_heading_pane_g1_cp2

0x927c,	// (0x00023c07) list_single_number_heading_pane_g2_cp2

0x9284,	// (0x00023c0f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9284,	// (0x00023c0f) list_single_number_heading_pane_t1_cp2

0x929a,	// (0x00023c25) list_single_number_heading_pane_t2_cp2_ParamLimits

0x929a,	// (0x00023c25) list_single_number_heading_pane_t2_cp2

0x92ac,	// (0x00023c37) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92ac,	// (0x00023c37) list_single_number_heading_pane_t3_cp2

0x9270,	// (0x00023bfb) list_single_heading_pane_g1_cp2_ParamLimits

0x9270,	// (0x00023bfb) list_single_heading_pane_g1_cp2

0x927c,	// (0x00023c07) list_single_heading_pane_g2_cp2

0x9284,	// (0x00023c0f) list_single_heading_pane_t1_cp2_ParamLimits

0x9284,	// (0x00023c0f) list_single_heading_pane_t1_cp2

0xab9d,	// (0x00025528) list_single_heading_pane_t2_cp2_ParamLimits

0xab9d,	// (0x00025528) list_single_heading_pane_t2_cp2

0xaae5,	// (0x00025470) list_double_graphic_pane_g1_cp2_ParamLimits

0xaae5,	// (0x00025470) list_double_graphic_pane_g1_cp2

0xaaf1,	// (0x0002547c) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaf1,	// (0x0002547c) list_double_graphic_pane_g2_cp2

0xab00,	// (0x0002548b) list_double_graphic_pane_g3_cp2

0xab08,	// (0x00025493) list_double_graphic_pane_t1_cp2_ParamLimits

0xab08,	// (0x00025493) list_double_graphic_pane_t1_cp2

0xab1e,	// (0x000254a9) list_double_graphic_pane_t2_cp2_ParamLimits

0xab1e,	// (0x000254a9) list_double_graphic_pane_t2_cp2

0x9321,	// (0x00023cac) list_double_number_pane_g1_cp2_ParamLimits

0x9321,	// (0x00023cac) list_double_number_pane_g1_cp2

0x932d,	// (0x00023cb8) list_double_number_pane_g2_cp2

0xaaa9,	// (0x00025434) list_double_number_pane_t1_cp2_ParamLimits

0xaaa9,	// (0x00025434) list_double_number_pane_t1_cp2

0xaabd,	// (0x00025448) list_double_number_pane_t2_cp2_ParamLimits

0xaabd,	// (0x00025448) list_double_number_pane_t2_cp2

0xaad3,	// (0x0002545e) list_double_number_pane_t3_cp2_ParamLimits

0xaad3,	// (0x0002545e) list_double_number_pane_t3_cp2

0xa992,	// (0x0002531d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa992,	// (0x0002531d) list_single_graphic_pane_g1_cp2

0x9385,	// (0x00023d10) list_single_graphic_pane_g2_cp2_ParamLimits

0x9385,	// (0x00023d10) list_single_graphic_pane_g2_cp2

0x9391,	// (0x00023d1c) list_single_graphic_pane_g3_cp2

0xa968,	// (0x000252f3) list_single_graphic_pane_t1_cp2_ParamLimits

0xa968,	// (0x000252f3) list_single_graphic_pane_t1_cp2

0x9385,	// (0x00023d10) list_single_number_pane_g1_cp2_ParamLimits

0x9385,	// (0x00023d10) list_single_number_pane_g1_cp2

0x9391,	// (0x00023d1c) list_single_number_pane_g2_cp2

0xa968,	// (0x000252f3) list_single_number_pane_t1_cp2_ParamLimits

0xa968,	// (0x000252f3) list_single_number_pane_t1_cp2

0xa97e,	// (0x00025309) list_single_number_pane_t2_cp2_ParamLimits

0xa97e,	// (0x00025309) list_single_number_pane_t2_cp2

0x9183,	// (0x00023b0e) list_double2_pane_g1_cp2_ParamLimits

0x9183,	// (0x00023b0e) list_double2_pane_g1_cp2

0x9194,	// (0x00023b1f) list_double2_pane_g2_cp2

0x92f9,	// (0x00023c84) list_double2_pane_t1_cp2_ParamLimits

0x92f9,	// (0x00023c84) list_double2_pane_t1_cp2

0x930f,	// (0x00023c9a) list_double2_pane_t2_cp2_ParamLimits

0x930f,	// (0x00023c9a) list_double2_pane_t2_cp2

0x9321,	// (0x00023cac) list_double_pane_g1_cp2_ParamLimits

0x9321,	// (0x00023cac) list_double_pane_g1_cp2

0x932d,	// (0x00023cb8) list_double_pane_g2_cp2

0x9335,	// (0x00023cc0) list_double_pane_t1_cp2_ParamLimits

0x9335,	// (0x00023cc0) list_double_pane_t1_cp2

0x934b,	// (0x00023cd6) list_double_pane_t2_cp2_ParamLimits

0x934b,	// (0x00023cd6) list_double_pane_t2_cp2

0x9375,	// (0x00023d00) list_single_pane_cp2_g3

0x9385,	// (0x00023d10) list_single_pane_g1_cp2_ParamLimits

0x9385,	// (0x00023d10) list_single_pane_g1_cp2

0x9391,	// (0x00023d1c) list_single_pane_g2_cp2

0x9399,	// (0x00023d24) list_single_pane_t1_cp2_ParamLimits

0x9399,	// (0x00023d24) list_single_pane_t1_cp2

0x93b1,	// (0x00023d3c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93b1,	// (0x00023d3c) list_single_large_graphic_pane_g1_cp2

0x93bd,	// (0x00023d48) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93bd,	// (0x00023d48) list_single_large_graphic_pane_g2_cp2

0x93c9,	// (0x00023d54) list_single_large_graphic_pane_g3_cp2

0x93d1,	// (0x00023d5c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93d1,	// (0x00023d5c) list_single_large_graphic_pane_g4_cp1

0x93eb,	// (0x00023d76) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93eb,	// (0x00023d76) list_single_large_graphic_pane_t1_cp2

0xa934,	// (0x000252bf) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa934,	// (0x000252bf) list_single_graphic_heading_pane_g1_cp2

0xa901,	// (0x0002528c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa901,	// (0x0002528c) list_single_graphic_heading_pane_g4_cp2

0x9391,	// (0x00023d1c) list_single_graphic_heading_pane_g5_cp2

0xa940,	// (0x000252cb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa940,	// (0x000252cb) list_single_graphic_heading_pane_t1_cp2

0xa956,	// (0x000252e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa956,	// (0x000252e1) list_single_graphic_heading_pane_t2_cp2

0xa8f5,	// (0x00025280) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8f5,	// (0x00025280) list_single_2graphic_pane_g1_cp2

0xa901,	// (0x0002528c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa901,	// (0x0002528c) list_single_2graphic_pane_g2_cp2

0x9391,	// (0x00023d1c) list_single_2graphic_pane_g3_cp2

0xa912,	// (0x0002529d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa912,	// (0x0002529d) list_single_2graphic_pane_g4_cp2

0xa91e,	// (0x000252a9) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa91e,	// (0x000252a9) list_single_2graphic_pane_t1_cp2

0x7e5c,	// (0x000227e7) list_highlight_pane_g10_cp1

0xa4cd,	// (0x00024e58) list_highlight_pane_g1_cp1

0xa4d5,	// (0x00024e60) list_highlight_pane_g2_cp1

0xa4dd,	// (0x00024e68) list_highlight_pane_g3_cp1

0xa4e5,	// (0x00024e70) list_highlight_pane_g4_cp1

0xa4ed,	// (0x00024e78) list_highlight_pane_g5_cp1

0xa4f5,	// (0x00024e80) list_highlight_pane_g6_cp1

0xa4fd,	// (0x00024e88) list_highlight_pane_g7_cp1

0xa505,	// (0x00024e90) list_highlight_pane_g8_cp1

0xa50d,	// (0x00024e98) list_highlight_pane_g9_cp1

0xa3ed,	// (0x00024d78) form_field_slider_pane_t3

0xa3fb,	// (0x00024d86) form_field_slider_pane_t4

0xa409,	// (0x00024d94) slider_form_pane_ParamLimits

0xa409,	// (0x00024d94) slider_form_pane

0x7e66,	// (0x000227f1) control_abbreviations

0x7e66,	// (0x000227f1) control_conventions

0x7e66,	// (0x000227f1) control_definitions

0x7e66,	// (0x000227f1) format_table_attribute

0xabe7,	// (0x00025572) bg_popup_preview_window_pane_g9

0x7e66,	// (0x000227f1) format_table_data2

0x7e66,	// (0x000227f1) format_table_data3

0x7e66,	// (0x000227f1) format_table_data_example

0x0008,

0x7e66,	// (0x000227f1) intro_purpose

0xf8e8,	// (0x0002a273) bg_popup_preview_window_pane_g

0x7e66,	// (0x000227f1) texts_category

0x7e66,	// (0x000227f1) texts_graphics

0x9401,	// (0x00023d8c) text_digital

0x9410,	// (0x00023d9b) text_primary

0x941f,	// (0x00023daa) text_primary_small

0x942e,	// (0x00023db9) text_secondary

0x943d,	// (0x00023dc8) text_title

0xb321,	// (0x00025cac) bg_passive_tab_pane_g1_cp3_srt

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp3_srt

0xb32a,	// (0x00025cb5) bg_passive_tab_pane_g3_cp3_srt

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp3_srt

0xb333,	// (0x00025cbe) tabs_4_active_pane_srt_g1

0xb33b,	// (0x00025cc6) tabs_4_active_pane_srt_t1_ParamLimits

0xb33b,	// (0x00025cc6) tabs_4_active_pane_srt_t1

0xb321,	// (0x00025cac) bg_active_tab_pane_g1_cp3_copy1

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp3_copy1

0xb32a,	// (0x00025cb5) bg_active_tab_pane_g3_cp3_copy1

0x7f46,	// (0x000228d1) tabs_2_long_active_pane_srt_ParamLimits

0x7f46,	// (0x000228d1) tabs_2_long_active_pane_srt

0x7f46,	// (0x000228d1) tabs_2_long_passive_pane_srt_ParamLimits

0x7f46,	// (0x000228d1) tabs_2_long_passive_pane_srt

0x8996,	// (0x00023321) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8996,	// (0x00023321) bg_passive_tab_pane_cp4_srt

0xb015,	// (0x000259a0) bg_passive_tab_pane_g1_cp4_srt

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp4_srt

0xb01e,	// (0x000259a9) bg_passive_tab_pane_g3_cp4_srt

0x8975,	// (0x00023300) bg_active_tab_pane_cp4_srt_ParamLimits

0x8975,	// (0x00023300) bg_active_tab_pane_cp4_srt

0xb027,	// (0x000259b2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb027,	// (0x000259b2) tabs_2_long_active_pane_srt_t1

0xb015,	// (0x000259a0) bg_active_tab_pane_g1_cp4_srt

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp4_srt

0xb01e,	// (0x000259a9) bg_active_tab_pane_g3_cp4_srt

0x81c1,	// (0x00022b4c) tabs_3_long_active_pane_srt_ParamLimits

0x81c1,	// (0x00022b4c) tabs_3_long_active_pane_srt

0x81c1,	// (0x00022b4c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81c1,	// (0x00022b4c) tabs_3_long_passive_pane_cp_srt

0x81c1,	// (0x00022b4c) tabs_3_long_passive_pane_srt_ParamLimits

0x81c1,	// (0x00022b4c) tabs_3_long_passive_pane_srt

0x8996,	// (0x00023321) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8996,	// (0x00023321) bg_passive_tab_pane_cp5_srt

0x9118,	// (0x00023aa3) bg_passive_tab_pane_g1_cp5_srt

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp5_srt

0x9121,	// (0x00023aac) bg_passive_tab_pane_g3_cp5_srt

0x8975,	// (0x00023300) bg_active_tab_pane_cp5_srt_ParamLimits

0x8975,	// (0x00023300) bg_active_tab_pane_cp5_srt

0xb003,	// (0x0002598e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb003,	// (0x0002598e) tabs_3_long_active_pane_srt_t1

0x9118,	// (0x00023aa3) bg_active_tab_pane_g1_cp5_srt

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp5_srt

0x9121,	// (0x00023aac) bg_active_tab_pane_g3_cp5_srt

0xaff5,	// (0x00025980) navi_text_pane_srt_t1

0xafed,	// (0x00025978) navi_icon_pane_srt_g1

0x9612,	// (0x00023f9d) midp_editing_number_pane_srt

0x944c,	// (0x00023dd7) midp_ticker_pane_srt

0x961a,	// (0x00023fa5) midp_ticker_pane_srt_g1

0x9622,	// (0x00023fad) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a0fd) midp_ticker_pane_srt_g

0x962a,	// (0x00023fb5) midp_ticker_pane_srt_t1

0xafde,	// (0x00025969) midp_editing_number_pane_t1_copy1

0x9454,	// (0x00023ddf) listscroll_midp_pane

0x9454,	// (0x00023ddf) midp_form_pane

0x94c4,	// (0x00023e4f) midp_info_popup_window_ParamLimits

0x94c4,	// (0x00023e4f) midp_info_popup_window

0x885e,	// (0x000231e9) bg_popup_sub_pane_cp50_ParamLimits

0x885e,	// (0x000231e9) bg_popup_sub_pane_cp50

0xa105,	// (0x00024a90) listscroll_midp_info_pane_ParamLimits

0xa105,	// (0x00024a90) listscroll_midp_info_pane

0xa0e5,	// (0x00024a70) listscroll_form_midp_pane_ParamLimits

0xa0e5,	// (0x00024a70) listscroll_form_midp_pane

0xa0f1,	// (0x00024a7c) scroll_bar_cp050

0xa0c5,	// (0x00024a50) list_midp_pane

0xbd70,	// (0x000266fb) signal_pane_g2_cp

0x9fff,	// (0x0002498a) listscroll_midp_info_pane_t1_ParamLimits

0x9fff,	// (0x0002498a) listscroll_midp_info_pane_t1

0xa017,	// (0x000249a2) listscroll_midp_info_pane_t2_ParamLimits

0xa017,	// (0x000249a2) listscroll_midp_info_pane_t2

0xa055,	// (0x000249e0) listscroll_midp_info_pane_t3_ParamLimits

0xa055,	// (0x000249e0) listscroll_midp_info_pane_t3

0xa08f,	// (0x00024a1a) listscroll_midp_info_pane_t4_ParamLimits

0xa08f,	// (0x00024a1a) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a1ae) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a1ae) listscroll_midp_info_pane_t

0x8922,	// (0x000232ad) scroll_pane_cp21

0x9f9d,	// (0x00024928) form_midp_field_choice_group_pane

0x9fa6,	// (0x00024931) form_midp_field_text_pane

0x9fe5,	// (0x00024970) form_midp_field_time_pane

0x9fed,	// (0x00024978) form_midp_gauge_slider_pane

0x9ff6,	// (0x00024981) form_midp_gauge_wait_pane

0x7e66,	// (0x000227f1) form_midp_image_pane

0x524c,	// (0x0001fbd7) list_single_midp_pane_ParamLimits

0x524c,	// (0x0001fbd7) list_single_midp_pane

0x9f55,	// (0x000248e0) form_midp_field_text_pane_t1

0x9d19,	// (0x000246a4) input_focus_pane_cp050

0x9f8c,	// (0x00024917) list_midp_form_text_pane

0x9f24,	// (0x000248af) form_midp_field_choice_group_pane_t1

0x9f32,	// (0x000248bd) input_focus_pane_cp051

0x9f46,	// (0x000248d1) list_midp_choice_pane

0x7e66,	// (0x000227f1) status_idle_pane

0x9f08,	// (0x00024893) form_midp_field_time_pane_t1

0x7e5c,	// (0x000227e7) wait_anim_pane_g2_copy1

0x9f16,	// (0x000248a1) form_midp_field_time_pane_t2

0x0001,

0x9572,	// (0x00023efd) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a1a9) form_midp_field_time_pane_t

0x7e66,	// (0x000227f1) input_focus_pane_cp052

0x7e66,	// (0x000227f1) bg_input_focus_pane_cp040

0x9ec8,	// (0x00024853) form_midp_gauge_slider_pane_t1

0x9ed6,	// (0x00024861) form_midp_gauge_slider_pane_t2

0x9ee4,	// (0x0002486f) form_midp_gauge_slider_pane_t3

0x9ef2,	// (0x0002487d) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a1a0) form_midp_gauge_slider_pane_t

0x9f00,	// (0x0002488b) form_midp_slider_pane

0x7f46,	// (0x000228d1) bg_input_focus_pane_cp041_ParamLimits

0x7f46,	// (0x000228d1) bg_input_focus_pane_cp041

0x9e89,	// (0x00024814) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e89,	// (0x00024814) form_midp_gauge_wait_pane_t1

0x9e9b,	// (0x00024826) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e9b,	// (0x00024826) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a19b) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a19b) form_midp_gauge_wait_pane_t

0x9ead,	// (0x00024838) form_midp_wait_pane_ParamLimits

0x9ead,	// (0x00024838) form_midp_wait_pane

0x9e53,	// (0x000247de) form_midp_image_pane_g1

0x9e5c,	// (0x000247e7) form_midp_image_pane_t1

0x9e6b,	// (0x000247f6) form_midp_image_pane_t2

0x9e7a,	// (0x00024805) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a194) form_midp_image_pane_t

0x9e4a,	// (0x000247d5) list_single_midp_pane_g1

0x523d,	// (0x0001fbc8) list_single_midp_pane_t1

0x9e22,	// (0x000247ad) list_midp_form_item_pane_ParamLimits

0x9e22,	// (0x000247ad) list_midp_form_item_pane

0x951a,	// (0x00023ea5) list_midp_form_item_pane_t1

0x9529,	// (0x00023eb4) midp_ticker_pane_g1

0x9535,	// (0x00023ec0) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a0e3) midp_ticker_pane_g

0x9541,	// (0x00023ecc) midp_ticker_pane_t1

0xb22f,	// (0x00025bba) midp_editing_number_pane_t1

0xb20d,	// (0x00025b98) midp_editing_number_pane

0xb21c,	// (0x00025ba7) midp_ticker_pane

0xafce,	// (0x00025959) ai_message_heading_pane

0x7e66,	// (0x000227f1) bg_popup_window_pane_cp14

0xafd6,	// (0x00025961) listscroll_ai_message_pane

0xaf58,	// (0x000258e3) ai_message_heading_pane_g1_ParamLimits

0xaf58,	// (0x000258e3) ai_message_heading_pane_g1

0xaf64,	// (0x000258ef) ai_message_heading_pane_g2_ParamLimits

0xaf64,	// (0x000258ef) ai_message_heading_pane_g2

0xaf70,	// (0x000258fb) ai_message_heading_pane_g3_ParamLimits

0xaf70,	// (0x000258fb) ai_message_heading_pane_g3

0xaf7c,	// (0x00025907) ai_message_heading_pane_g4_ParamLimits

0xaf7c,	// (0x00025907) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a2d5) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a2d5) ai_message_heading_pane_g

0xaf88,	// (0x00025913) ai_message_heading_pane_t1_ParamLimits

0xaf88,	// (0x00025913) ai_message_heading_pane_t1

0xafa2,	// (0x0002592d) ai_message_heading_pane_t2_ParamLimits

0xafa2,	// (0x0002592d) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a2de) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a2de) ai_message_heading_pane_t

0xafb4,	// (0x0002593f) bg_popup_heading_pane_cp1_ParamLimits

0xafb4,	// (0x0002593f) bg_popup_heading_pane_cp1

0xaf46,	// (0x000258d1) list_ai_message_pane_ParamLimits

0xaf46,	// (0x000258d1) list_ai_message_pane

0x8922,	// (0x000232ad) scroll_pane_cp10

0xaee2,	// (0x0002586d) list_ai_message_pane_g1

0xaeea,	// (0x00025875) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a2b2) list_ai_message_pane_g

0xaef2,	// (0x0002587d) list_ai_message_pane_t1_ParamLimits

0xaef2,	// (0x0002587d) list_ai_message_pane_t1

0xaf07,	// (0x00025892) list_ai_message_pane_t2_ParamLimits

0xaf07,	// (0x00025892) list_ai_message_pane_t2

0xaf1c,	// (0x000258a7) list_ai_message_pane_t3_ParamLimits

0xaf1c,	// (0x000258a7) list_ai_message_pane_t3

0xaf31,	// (0x000258bc) list_ai_message_pane_t4_ParamLimits

0xaf31,	// (0x000258bc) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a2b7) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a2b7) list_ai_message_pane_t

0xaecd,	// (0x00025858) cell_ai_soft_ind_pane_ParamLimits

0xaecd,	// (0x00025858) cell_ai_soft_ind_pane

0x9553,	// (0x00023ede) cell_ai_soft_ind_pane_g1_ParamLimits

0x9553,	// (0x00023ede) cell_ai_soft_ind_pane_g1

0x7e66,	// (0x000227f1) grid_highlight_cp1

0x9560,	// (0x00023eeb) text_secondary_cp56_ParamLimits

0x9560,	// (0x00023eeb) text_secondary_cp56

0xaea2,	// (0x0002582d) example_general_pane_ParamLimits

0xaea2,	// (0x0002582d) example_general_pane

0xaeae,	// (0x00025839) example_parent_pane_g1_ParamLimits

0xaeae,	// (0x00025839) example_parent_pane_g1

0xaeba,	// (0x00025845) example_parent_pane_t1_ParamLimits

0xaeba,	// (0x00025845) example_parent_pane_t1

0x68b7,	// (0x00021242) popup_preview_text_window_ParamLimits

0x68b7,	// (0x00021242) popup_preview_text_window

0x937d,	// (0x00023d08) list_single_pane_cp2_g4

0x8277,	// (0x00022c02) bg_popup_preview_window_pane_ParamLimits

0x8277,	// (0x00022c02) bg_popup_preview_window_pane

0xabef,	// (0x0002557a) popup_preview_text_window_t1_ParamLimits

0xabef,	// (0x0002557a) popup_preview_text_window_t1

0xac0d,	// (0x00025598) popup_preview_text_window_t2_ParamLimits

0xac0d,	// (0x00025598) popup_preview_text_window_t2

0xac56,	// (0x000255e1) popup_preview_text_window_t3_ParamLimits

0xac56,	// (0x000255e1) popup_preview_text_window_t3

0xac9b,	// (0x00025626) popup_preview_text_window_t4_ParamLimits

0xac9b,	// (0x00025626) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a286) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a286) popup_preview_text_window_t

0xad19,	// (0x000256a4) scroll_pane_cp11

0x9ca5,	// (0x00024630) bg_popup_preview_window_pane_g1

0xabaf,	// (0x0002553a) bg_popup_preview_window_pane_g2

0xabb7,	// (0x00025542) bg_popup_preview_window_pane_g3

0xabbf,	// (0x0002554a) bg_popup_preview_window_pane_g4

0xabc7,	// (0x00025552) bg_popup_preview_window_pane_g5

0xabcf,	// (0x0002555a) bg_popup_preview_window_pane_g6

0xabd7,	// (0x00025562) bg_popup_preview_window_pane_g7

0xabdf,	// (0x0002556a) bg_popup_preview_window_pane_g8

0x5ad1,	// (0x0002045c) aid_popup_width_pane

0x6895,	// (0x00021220) popup_midp_note_alarm_window_ParamLimits

0x6895,	// (0x00021220) popup_midp_note_alarm_window

0x87a9,	// (0x00023134) data_form_pane_ParamLimits

0x4eb2,	// (0x0001f83d) form_field_data_pane_g1

0x4ebc,	// (0x0001f847) form_field_data_pane_t1_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_ParamLimits

0x4ed4,	// (0x0001f85f) data_form_wide_pane_ParamLimits

0x4ee5,	// (0x0001f870) form_field_data_wide_pane_g1

0x4ef1,	// (0x0001f87c) form_field_data_wide_pane_t1_ParamLimits

0x8526,	// (0x00022eb1) input_focus_pane_cp6_ParamLimits

0x88cf,	// (0x0002325a) input_popup_find_pane_g1_ParamLimits

0x88cf,	// (0x0002325a) input_popup_find_pane_g1

0x6043,	// (0x000209ce) aid_navi_side_left_pane

0x6058,	// (0x000209e3) aid_navi_side_right_pane

0xa5c8,	// (0x00024f53) bg_popup_window_pane_cp30_ParamLimits

0xa5c8,	// (0x00024f53) bg_popup_window_pane_cp30

0xa642,	// (0x00024fcd) popup_midp_note_alarm_window_g1_ParamLimits

0xa642,	// (0x00024fcd) popup_midp_note_alarm_window_g1

0xa672,	// (0x00024ffd) popup_midp_note_alarm_window_t1_ParamLimits

0xa672,	// (0x00024ffd) popup_midp_note_alarm_window_t1

0xa713,	// (0x0002509e) popup_midp_note_alarm_window_t2_ParamLimits

0xa713,	// (0x0002509e) popup_midp_note_alarm_window_t2

0xa7c1,	// (0x0002514c) popup_midp_note_alarm_window_t3_ParamLimits

0xa7c1,	// (0x0002514c) popup_midp_note_alarm_window_t3

0xa7f3,	// (0x0002517e) popup_midp_note_alarm_window_t4_ParamLimits

0xa7f3,	// (0x0002517e) popup_midp_note_alarm_window_t4

0xa819,	// (0x000251a4) popup_midp_note_alarm_window_t5_ParamLimits

0xa819,	// (0x000251a4) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a223) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a223) popup_midp_note_alarm_window_t

0xa8c5,	// (0x00025250) wait_bar_pane_cp1_ParamLimits

0xa8c5,	// (0x00025250) wait_bar_pane_cp1

0x7e66,	// (0x000227f1) wait_anim_pane_copy1

0x7e66,	// (0x000227f1) wait_border_pane_copy1

0xa2ae,	// (0x00024c39) wait_border_pane_g1_copy1

0x4f0b,	// (0x0001f896) form_field_popup_pane_g1

0x4f13,	// (0x0001f89e) form_field_popup_pane_t1_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_cp7_ParamLimits

0x87e3,	// (0x0002316e) list_form_pane_ParamLimits

0x4f2b,	// (0x0001f8b6) form_field_popup_wide_pane_g1

0x4f33,	// (0x0001f8be) form_field_popup_wide_pane_t1_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_cp8_ParamLimits

0x87ef,	// (0x0002317a) list_form_wide_pane_ParamLimits

0xb3b5,	// (0x00025d40) aid_size_cell_graphic_pane

0x4fbd,	// (0x0001f948) data_form_pane_t1_ParamLimits

0x52a6,	// (0x0001fc31) data_form_wide_pane_t1_ParamLimits

0x9872,	// (0x000241fd) bg_status_flat_pane

0x7ea6,	// (0x00022831) title_pane_t1_ParamLimits

0x7f0e,	// (0x00022899) title_pane_t2_ParamLimits

0x7f34,	// (0x000228bf) title_pane_t3_ParamLimits

0xf557,	// (0x00029ee2) title_pane_t_ParamLimits

0x8da5,	// (0x00023730) level_1_signal_ParamLimits

0x8db7,	// (0x00023742) level_2_signal_ParamLimits

0x8dca,	// (0x00023755) level_3_signal_ParamLimits

0x8ddd,	// (0x00023768) level_4_signal_ParamLimits

0x8df0,	// (0x0002377b) level_5_signal_ParamLimits

0x8e03,	// (0x0002378e) level_6_signal_ParamLimits

0x8e16,	// (0x000237a1) level_7_signal_ParamLimits

0x8da5,	// (0x00023730) level_1_battery_ParamLimits

0x8db7,	// (0x00023742) level_2_battery_ParamLimits

0x8dca,	// (0x00023755) level_3_battery_ParamLimits

0x8ddd,	// (0x00023768) level_4_battery_ParamLimits

0x8df0,	// (0x0002377b) level_5_battery_ParamLimits

0x8e03,	// (0x0002378e) level_6_battery_ParamLimits

0x8e16,	// (0x000237a1) level_7_battery_ParamLimits

0xa4cd,	// (0x00024e58) bg_status_flat_pane_g1

0xa4d5,	// (0x00024e60) bg_status_flat_pane_g2

0xa4dd,	// (0x00024e68) bg_status_flat_pane_g3

0xa4e5,	// (0x00024e70) bg_status_flat_pane_g4

0xa4ed,	// (0x00024e78) bg_status_flat_pane_g5

0xa4f5,	// (0x00024e80) bg_status_flat_pane_g6

0xa4fd,	// (0x00024e88) bg_status_flat_pane_g7

0x7f5c,	// (0x000228e7) tabs_3_active_pane_t1_ParamLimits

0x7f5c,	// (0x000228e7) tabs_3_passive_pane_t1_ParamLimits

0x7f76,	// (0x00022901) tabs_4_active_pane_t1_ParamLimits

0x7f76,	// (0x00022901) tabs_4_1_passive_pane_t1_ParamLimits

0x8963,	// (0x000232ee) tabs_2_active_pane_t1_ParamLimits

0x8963,	// (0x000232ee) tabs_2_passive_pane_t1_ParamLimits

0x8975,	// (0x00023300) bg_active_tab_pane_cp4_ParamLimits

0x8983,	// (0x0002330e) tabs_2_long_active_pane_t1_ParamLimits

0x8996,	// (0x00023321) bg_passive_tab_pane_cp4_ParamLimits

0x179d,	// (0x0001c128) list_single_midp_graphic_pane_t1_ParamLimits

0x8975,	// (0x00023300) bg_active_tab_pane_cp5_ParamLimits

0x89a2,	// (0x0002332d) tabs_3_long_active_pane_t1_ParamLimits

0x8996,	// (0x00023321) bg_passive_tab_pane_cp5_ParamLimits

0x179d,	// (0x0001c128) list_single_midp_graphic_pane_t1

0x9872,	// (0x000241fd) bg_status_flat_pane_ParamLimits

0x9935,	// (0x000242c0) indicator_pane_cp2_ParamLimits

0x9935,	// (0x000242c0) indicator_pane_cp2

0x9a60,	// (0x000243eb) navi_pane_srt_ParamLimits

0x9a60,	// (0x000243eb) navi_pane_srt

0x9a84,	// (0x0002440f) popup_clock_digital_analogue_window_cp1

0x8023,	// (0x000229ae) indicator_pane_t1

0x944c,	// (0x00023dd7) copy_highlight_pane

0x944c,	// (0x00023dd7) cursor_graphics_pane

0x944c,	// (0x00023dd7) graphic_within_text_pane

0x944c,	// (0x00023dd7) link_highlight_pane

0xacdc,	// (0x00025667) popup_preview_text_window_t5_ParamLimits

0xacdc,	// (0x00025667) popup_preview_text_window_t5

0x957a,	// (0x00023f05) cursor_digital_pane

0x957a,	// (0x00023f05) cursor_primary_pane

0x958b,	// (0x00023f16) cursor_primary_small_pane

0x9593,	// (0x00023f1e) cursor_secondary_pane

0x959b,	// (0x00023f26) cursor_title_pane

0x957a,	// (0x00023f05) link_highlight_digital_pane

0x9582,	// (0x00023f0d) link_highlight_primary_pane

0x958b,	// (0x00023f16) link_highlight_primary_small_pane

0x9593,	// (0x00023f1e) link_highlight_secondary_pane

0x959b,	// (0x00023f26) link_highlight_title_pane

0x957a,	// (0x00023f05) copy_highlight_digital_pane

0x957a,	// (0x00023f05) copy_highlight_primary_pane

0x958b,	// (0x00023f16) copy_highlight_primary_small_pane

0x9593,	// (0x00023f1e) copy_highlight_secondary_pane

0x959b,	// (0x00023f26) copy_highlight_title_pane

0x9593,	// (0x00023f1e) graphic_text_digital_pane

0xa56b,	// (0x00024ef6) graphic_text_primary_pane

0xa574,	// (0x00024eff) graphic_text_primary_small_pane

0x958b,	// (0x00023f16) graphic_text_secondary_pane

0x957a,	// (0x00023f05) graphic_text_title_pane

0x95a3,	// (0x00023f2e) cursor_primary_pane_g1

0xa55d,	// (0x00024ee8) cursor_text_primary_t1

0xa545,	// (0x00024ed0) cursor_primary_small_pane_g1

0xa54f,	// (0x00024eda) cursor_text_primary_small_t1

0xa52d,	// (0x00024eb8) cursor_primary_small_pane_g1_copy1

0xa537,	// (0x00024ec2) cursor_text_primary_small_t1_copy1

0xa515,	// (0x00024ea0) cursor_text_title_t1

0xa523,	// (0x00024eae) cursor_title_pane_g1

0x95a3,	// (0x00023f2e) cursor_digital_pane_g1

0x95ad,	// (0x00023f38) cursor_text_digital_t1

0x95d2,	// (0x00023f5d) link_highlight_primary_pane_g1

0xa4be,	// (0x00024e49) link_highlight_primary_pane_t1

0x95bb,	// (0x00023f46) link_highlight_primary_small_pane_g1

0x95c3,	// (0x00023f4e) link_highlight_primary_small_pane_t1

0x95d2,	// (0x00023f5d) link_highlight_secondary_pane_g1

0x95da,	// (0x00023f65) link_highlight_secondary_pane_t1

0xa432,	// (0x00024dbd) link_highlight_title_pane_g1

0xa43a,	// (0x00024dc5) link_highlight_title_pane_t1

0xa41b,	// (0x00024da6) link_highlight_digital_pane_g1

0xa423,	// (0x00024dae) link_highlight_digital_pane_t1

0xa2f3,	// (0x00024c7e) copy_highlight_primary_pane_g1

0xa2fb,	// (0x00024c86) copy_highlight_primary_pane_t1

0xa2cd,	// (0x00024c58) copy_highlight_primary_small_pane_g1

0xa2e4,	// (0x00024c6f) copy_highlight_primary_small_pane_t1

0x95e9,	// (0x00023f74) copy_highlight_secondary_pane_g1

0x95f1,	// (0x00023f7c) copy_highlight_secondary_pane_t1

0xa2cd,	// (0x00024c58) copy_highlight_title_pane_g1

0xa2d5,	// (0x00024c60) copy_highlight_title_pane_t1

0xa2f3,	// (0x00024c7e) copy_highlight_digital_pane_g1

0xb583,	// (0x00025f0e) copy_highlight_digital_pane_t1

0xb4d7,	// (0x00025e62) graphic_text_primary_pane_g1

0xb567,	// (0x00025ef2) graphic_text_primary_pane_t1

0xb575,	// (0x00025f00) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a352) graphic_text_primary_pane_t

0xb543,	// (0x00025ece) graphic_text_primary_small_pane_g1

0xb54b,	// (0x00025ed6) graphic_text_primary_small_pane_t1

0xb559,	// (0x00025ee4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a34d) graphic_text_primary_small_pane_t

0xb51f,	// (0x00025eaa) graphic_text_secondary_pane_g1

0xb527,	// (0x00025eb2) graphic_text_secondary_pane_t1

0xb535,	// (0x00025ec0) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a348) graphic_text_secondary_pane_t

0xb4fb,	// (0x00025e86) graphic_text_title_pane_g1

0xb503,	// (0x00025e8e) graphic_text_title_pane_t1

0xb511,	// (0x00025e9c) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a343) graphic_text_title_pane_t

0xb4d7,	// (0x00025e62) graphic_text_digital_pane_g1

0xb4df,	// (0x00025e6a) graphic_text_digital_pane_t1

0xb4ed,	// (0x00025e78) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a33e) graphic_text_digital_pane_t

0x7f46,	// (0x000228d1) navi_icon_pane_srt_ParamLimits

0x7f46,	// (0x000228d1) navi_icon_pane_srt

0x7e66,	// (0x000227f1) navi_midp_pane_srt

0x7e66,	// (0x000227f1) navi_navi_pane_srt

0x7f46,	// (0x000228d1) navi_text_pane_srt_ParamLimits

0x7f46,	// (0x000228d1) navi_text_pane_srt

0xb4a2,	// (0x00025e2d) navi_navi_icon_text_pane_srt

0xb4aa,	// (0x00025e35) navi_navi_pane_srt_g1_ParamLimits

0xb4aa,	// (0x00025e35) navi_navi_pane_srt_g1

0xb4bc,	// (0x00025e47) navi_navi_pane_srt_g2_ParamLimits

0xb4bc,	// (0x00025e47) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a339) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a339) navi_navi_pane_srt_g

0xb4ce,	// (0x00025e59) navi_navi_tabs_pane_srt

0xb4a2,	// (0x00025e2d) navi_navi_text_pane_srt

0xb4a2,	// (0x00025e2d) navi_navi_volume_pane_srt

0xb493,	// (0x00025e1e) navi_navi_text_pane_srt_t1

0x6ec8,	// (0x00021853) navi_navi_volume_pane_srt_g1

0x6ed0,	// (0x0002185b) volume_small_pane_srt_ParamLimits

0x6ed0,	// (0x0002185b) volume_small_pane_srt

0x6323,	// (0x00020cae) volume_small_pane_srt_g1_ParamLimits

0x6323,	// (0x00020cae) volume_small_pane_srt_g1

0x6333,	// (0x00020cbe) volume_small_pane_srt_g2_ParamLimits

0x6333,	// (0x00020cbe) volume_small_pane_srt_g2

0x6344,	// (0x00020ccf) volume_small_pane_srt_g3_ParamLimits

0x6344,	// (0x00020ccf) volume_small_pane_srt_g3

0x6355,	// (0x00020ce0) volume_small_pane_srt_g4_ParamLimits

0x6355,	// (0x00020ce0) volume_small_pane_srt_g4

0x6366,	// (0x00020cf1) volume_small_pane_srt_g5_ParamLimits

0x6366,	// (0x00020cf1) volume_small_pane_srt_g5

0x6377,	// (0x00020d02) volume_small_pane_srt_g6_ParamLimits

0x6377,	// (0x00020d02) volume_small_pane_srt_g6

0x6388,	// (0x00020d13) volume_small_pane_srt_g7_ParamLimits

0x6388,	// (0x00020d13) volume_small_pane_srt_g7

0x6399,	// (0x00020d24) volume_small_pane_srt_g8_ParamLimits

0x6399,	// (0x00020d24) volume_small_pane_srt_g8

0x63aa,	// (0x00020d35) volume_small_pane_srt_g9_ParamLimits

0x63aa,	// (0x00020d35) volume_small_pane_srt_g9

0x63bb,	// (0x00020d46) volume_small_pane_srt_g10_ParamLimits

0x63bb,	// (0x00020d46) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a0e8) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a0e8) volume_small_pane_srt_g

0x8320,	// (0x00022cab) query_popup_data_pane_cp2

0xb479,	// (0x00025e04) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb479,	// (0x00025e04) navi_navi_icon_text_pane_srt_t1

0xa56b,	// (0x00024ef6) navi_tabs_2_long_pane_srt

0xa56b,	// (0x00024ef6) navi_tabs_2_pane_srt

0xa56b,	// (0x00024ef6) navi_tabs_3_long_pane_srt

0xa56b,	// (0x00024ef6) navi_tabs_3_pane_srt

0xa56b,	// (0x00024ef6) navi_tabs_4_pane_srt

0x6ea8,	// (0x00021833) tabs_2_active_pane_srt_ParamLimits

0x6ea8,	// (0x00021833) tabs_2_active_pane_srt

0x6eb8,	// (0x00021843) tabs_2_passive_pane_srt_ParamLimits

0x6eb8,	// (0x00021843) tabs_2_passive_pane_srt

0x979b,	// (0x00024126) bg_passive_tab_pane_cp1_srt_ParamLimits

0x979b,	// (0x00024126) bg_passive_tab_pane_cp1_srt

0xb445,	// (0x00025dd0) bg_passive_tab_pane_g1_cp1_srt

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp1_srt

0xb44e,	// (0x00025dd9) bg_passive_tab_pane_g3_cp1_srt

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp1_srt

0xb457,	// (0x00025de2) tabs_2_active_pane_srt_g1

0xb45f,	// (0x00025dea) tabs_2_active_pane_srt_t1_ParamLimits

0xb45f,	// (0x00025dea) tabs_2_active_pane_srt_t1

0xb445,	// (0x00025dd0) bg_active_tab_pane_g1_cp1_srt

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp1_srt

0xb44e,	// (0x00025dd9) bg_active_tab_pane_g3_cp1_srt

0x6e75,	// (0x00021800) tabs_3_active_pane_srt_ParamLimits

0x6e75,	// (0x00021800) tabs_3_active_pane_srt

0x6e86,	// (0x00021811) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e86,	// (0x00021811) tabs_3_passive_pane_cp_srt

0x6e97,	// (0x00021822) tabs_3_passive_pane_srt_ParamLimits

0x6e97,	// (0x00021822) tabs_3_passive_pane_srt

0x979b,	// (0x00024126) bg_passive_tab_pane_cp2_srt_ParamLimits

0x979b,	// (0x00024126) bg_passive_tab_pane_cp2_srt

0x9600,	// (0x00023f8b) bg_passive_tab_pane_g1_cp2_srt

0x908e,	// (0x00023a19) bg_passive_tab_pane_g2_cp2_srt

0x9609,	// (0x00023f94) bg_passive_tab_pane_g3_cp2_srt

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f46,	// (0x000228d1) bg_active_tab_pane_cp2_srt

0xb42b,	// (0x00025db6) tabs_3_active_pane_srt_g1

0xb433,	// (0x00025dbe) tabs_3_active_pane_srt_t1_ParamLimits

0xb433,	// (0x00025dbe) tabs_3_active_pane_srt_t1

0x9600,	// (0x00023f8b) bg_active_tab_pane_g1_cp2_srt

0x908e,	// (0x00023a19) bg_active_tab_pane_g2_cp2_srt

0x9609,	// (0x00023f94) bg_active_tab_pane_g3_cp2_srt

0x6e2d,	// (0x000217b8) tabs_4_active_pane_srt_ParamLimits

0x6e2d,	// (0x000217b8) tabs_4_active_pane_srt

0x6e3f,	// (0x000217ca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e3f,	// (0x000217ca) tabs_4_passive_pane_cp2_srt

0x652a,	// (0x00020eb5) aid_size_cell_toolbar

0x8996,	// (0x00023321) main_idle_act_pane_ParamLimits

0x66cb,	// (0x00021056) popup_large_graphic_colour_window_ParamLimits

0x6a32,	// (0x000213bd) popup_toolbar_window_ParamLimits

0x6a32,	// (0x000213bd) popup_toolbar_window

0xb23e,	// (0x00025bc9) list_single_graphic_2heading_pane_ParamLimits

0xb23e,	// (0x00025bc9) list_single_graphic_2heading_pane

0x8b52,	// (0x000234dd) aid_size_cell_apps_grid_lsc_pane

0x8b64,	// (0x000234ef) aid_size_cell_apps_grid_prt_pane

0x979b,	// (0x00024126) bg_wml_button_pane_cp1_ParamLimits

0x979b,	// (0x00024126) bg_wml_button_pane_cp1

0x9f55,	// (0x000248e0) form_midp_field_text_pane_t1_ParamLimits

0x9d19,	// (0x000246a4) input_focus_pane_cp050_ParamLimits

0x9f8c,	// (0x00024917) list_midp_form_text_pane_ParamLimits

0x9f32,	// (0x000248bd) input_focus_pane_cp051_ParamLimits

0x9f46,	// (0x000248d1) list_midp_choice_pane_ParamLimits

0x9dd2,	// (0x0002475d) list_single_2graphic_pane_cp3_ParamLimits

0x9dd2,	// (0x0002475d) list_single_2graphic_pane_cp3

0x9df3,	// (0x0002477e) list_single_midp_graphic_pane_ParamLimits

0x9df3,	// (0x0002477e) list_single_midp_graphic_pane

0x511f,	// (0x0001faaa) list_single_graphic_2heading_pane_g1_ParamLimits

0x511f,	// (0x0001faaa) list_single_graphic_2heading_pane_g1

0x512b,	// (0x0001fab6) list_single_graphic_2heading_pane_g4_ParamLimits

0x512b,	// (0x0001fab6) list_single_graphic_2heading_pane_g4

0x5137,	// (0x0001fac2) list_single_graphic_2heading_pane_g5_ParamLimits

0x5137,	// (0x0001fac2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a13b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a13b) list_single_graphic_2heading_pane_g

0x5143,	// (0x0001face) list_single_graphic_2heading_pane_t1_ParamLimits

0x5143,	// (0x0001face) list_single_graphic_2heading_pane_t1

0x5157,	// (0x0001fae2) list_single_graphic_2heading_pane_t2_ParamLimits

0x5157,	// (0x0001fae2) list_single_graphic_2heading_pane_t2

0x5171,	// (0x0001fafc) list_single_graphic_2heading_pane_t3_ParamLimits

0x5171,	// (0x0001fafc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a142) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a142) list_single_graphic_2heading_pane_t

0x9be3,	// (0x0002456e) bg_popup_sub_pane_cp2

0x9c0d,	// (0x00024598) grid_toobar_pane

0x6adf,	// (0x0002146a) cell_toolbar_pane_ParamLimits

0x6adf,	// (0x0002146a) cell_toolbar_pane

0x9c49,	// (0x000245d4) cell_toolbar_pane_g1_ParamLimits

0x9c49,	// (0x000245d4) cell_toolbar_pane_g1

0x9c5d,	// (0x000245e8) cell_toolbar_pane_g2_ParamLimits

0x9c5d,	// (0x000245e8) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a149) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a149) cell_toolbar_pane_g

0x9c7f,	// (0x0002460a) grid_highlight_pane_cp2_ParamLimits

0x9c7f,	// (0x0002460a) grid_highlight_pane_cp2

0x9c99,	// (0x00024624) toolbar_button_pane

0x9ca5,	// (0x00024630) toolbar_button_pane_g1

0x9cad,	// (0x00024638) toolbar_button_pane_g2

0x9cb5,	// (0x00024640) toolbar_button_pane_g3

0x9cbd,	// (0x00024648) toolbar_button_pane_g4

0x9cc5,	// (0x00024650) toolbar_button_pane_g5

0x9ccd,	// (0x00024658) toolbar_button_pane_g6

0x9cd5,	// (0x00024660) toolbar_button_pane_g7

0x9cdd,	// (0x00024668) toolbar_button_pane_g8

0x9ce5,	// (0x00024670) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a14e) toolbar_button_pane_g

0x6b17,	// (0x000214a2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b17,	// (0x000214a2) list_single_2graphic_pane_g1_cp3

0x6b23,	// (0x000214ae) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b23,	// (0x000214ae) list_single_2graphic_pane_g2_cp3

0x6b34,	// (0x000214bf) list_single_2graphic_pane_g3_cp3

0x6b3c,	// (0x000214c7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b3c,	// (0x000214c7) list_single_2graphic_pane_g4_cp3

0x6b48,	// (0x000214d3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b48,	// (0x000214d3) list_single_2graphic_pane_t1_cp3

0x9ebc,	// (0x00024847) list_single_midp_graphic_pane_g2_ParamLimits

0x9ebc,	// (0x00024847) list_single_midp_graphic_pane_g2

0x6532,	// (0x00020ebd) aid_zoom_text_primary

0x50f3,	// (0x0001fa7e) aid_zoom_text_secondary

0x96ba,	// (0x00024045) status_small_pane_g7_ParamLimits

0x96ba,	// (0x00024045) status_small_pane_g7

0x96dd,	// (0x00024068) status_small_pane_t1_ParamLimits

0x7e7d,	// (0x00022808) title_pane_g2

0x0003,

0xf54e,	// (0x00029ed9) title_pane_g

0x83c4,	// (0x00022d4f) aid_size_cell_colour_1_pane_ParamLimits

0x83c4,	// (0x00022d4f) aid_size_cell_colour_1_pane

0x83d8,	// (0x00022d63) aid_size_cell_colour_2_pane_ParamLimits

0x83d8,	// (0x00022d63) aid_size_cell_colour_2_pane

0x83ec,	// (0x00022d77) aid_size_cell_colour_3_pane_ParamLimits

0x83ec,	// (0x00022d77) aid_size_cell_colour_3_pane

0x8400,	// (0x00022d8b) aid_size_cell_colour_4_pane_ParamLimits

0x8400,	// (0x00022d8b) aid_size_cell_colour_4_pane

0x5f80,	// (0x0002090b) title_pane_stacon_g1_ParamLimits

0x5f80,	// (0x0002090b) title_pane_stacon_g1

0xa352,	// (0x00024cdd) popup_note_wait_window_g3_ParamLimits

0xa352,	// (0x00024cdd) popup_note_wait_window_g3

0xa3c8,	// (0x00024d53) popup_note_wait_window_t5_ParamLimits

0xa3c8,	// (0x00024d53) popup_note_wait_window_t5

0x7e66,	// (0x000227f1) main_feb_china_hwr_fs_writing_pane

0x65ae,	// (0x00020f39) popup_feb_china_hwr_fs_window_ParamLimits

0x65ae,	// (0x00020f39) popup_feb_china_hwr_fs_window

0x6b64,	// (0x000214ef) aid_size_cell_hwr_fs_ParamLimits

0x6b64,	// (0x000214ef) aid_size_cell_hwr_fs

0x9d19,	// (0x000246a4) bg_popup_sub_pane_cp3_ParamLimits

0x9d19,	// (0x000246a4) bg_popup_sub_pane_cp3

0x6b79,	// (0x00021504) grid_hwr_fs_pane_ParamLimits

0x6b79,	// (0x00021504) grid_hwr_fs_pane

0x6b91,	// (0x0002151c) linegrid_hwr_fs_pane_ParamLimits

0x6b91,	// (0x0002151c) linegrid_hwr_fs_pane

0x6ba1,	// (0x0002152c) cell_hwr_fs_pane_ParamLimits

0x6ba1,	// (0x0002152c) cell_hwr_fs_pane

0x9d25,	// (0x000246b0) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d25,	// (0x000246b0) linegrid_hwr_fs_pane_g1

0x9d31,	// (0x000246bc) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d31,	// (0x000246bc) linegrid_hwr_fs_pane_g2

0x9d43,	// (0x000246ce) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d43,	// (0x000246ce) linegrid_hwr_fs_pane_g3

0x6bc3,	// (0x0002154e) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bc3,	// (0x0002154e) linegrid_hwr_fs_pane_g4

0x6bdd,	// (0x00021568) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bdd,	// (0x00021568) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a179) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a179) linegrid_hwr_fs_pane_g

0x9d4f,	// (0x000246da) cell_hwr_fs_pane_g1_ParamLimits

0x9d4f,	// (0x000246da) cell_hwr_fs_pane_g1

0x9b1a,	// (0x000244a5) cell_hwr_fs_pane_g2_ParamLimits

0x9b1a,	// (0x000244a5) cell_hwr_fs_pane_g2

0x9d65,	// (0x000246f0) cell_hwr_fs_pane_g3_ParamLimits

0x9d65,	// (0x000246f0) cell_hwr_fs_pane_g3

0x9d72,	// (0x000246fd) cell_hwr_fs_pane_g4_ParamLimits

0x9d72,	// (0x000246fd) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a184) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a184) cell_hwr_fs_pane_g

0x6bf3,	// (0x0002157e) cell_hwr_fs_pane_t1

0x7e66,	// (0x000227f1) grid_highlight_pane_cp6

0x7e66,	// (0x000227f1) main_idle_act2_pane

0x8909,	// (0x00023294) aid_inside_area_popup_secondary

0xa9ff,	// (0x0002538a) aid_inside_area_window_primary_ParamLimits

0xa9ff,	// (0x0002538a) aid_inside_area_window_primary

0xb592,	// (0x00025f1d) ai2_news_ticker_pane

0xb59a,	// (0x00025f25) aid_size_cell_ai1_link_ParamLimits

0xb59a,	// (0x00025f25) aid_size_cell_ai1_link

0xb5b4,	// (0x00025f3f) popup_ai2_data_window_ParamLimits

0xb5b4,	// (0x00025f3f) popup_ai2_data_window

0xb5ca,	// (0x00025f55) popup_ai2_link_window_ParamLimits

0xb5ca,	// (0x00025f55) popup_ai2_link_window

0x9d19,	// (0x000246a4) bg_popup_sub_pane_cp4_ParamLimits

0x9d19,	// (0x000246a4) bg_popup_sub_pane_cp4

0xb5de,	// (0x00025f69) grid_ai2_link_pane_ParamLimits

0xb5de,	// (0x00025f69) grid_ai2_link_pane

0xb5f5,	// (0x00025f80) popup_ai2_link_window_g1_ParamLimits

0xb5f5,	// (0x00025f80) popup_ai2_link_window_g1

0xb601,	// (0x00025f8c) popup_ai2_link_window_g2_ParamLimits

0xb601,	// (0x00025f8c) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a357) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a357) popup_ai2_link_window_g

0xb610,	// (0x00025f9b) ai2_mp_button_pane

0xb618,	// (0x00025fa3) ai2_mp_volume_pane

0x9f32,	// (0x000248bd) bg_popup_sub_pane_cp5_ParamLimits

0x9f32,	// (0x000248bd) bg_popup_sub_pane_cp5

0xb620,	// (0x00025fab) heading_ai2_gene_pane_ParamLimits

0xb620,	// (0x00025fab) heading_ai2_gene_pane

0xb62c,	// (0x00025fb7) list_ai2_gene_pane_ParamLimits

0xb62c,	// (0x00025fb7) list_ai2_gene_pane

0xb674,	// (0x00025fff) cell_ai2_link_pane_ParamLimits

0xb674,	// (0x00025fff) cell_ai2_link_pane

0xb68a,	// (0x00026015) cell_ai2_link_pane_g1

0x7e66,	// (0x000227f1) grid_highlight_pane_cp7

0x6ee5,	// (0x00021870) ai2_mp_volume_pane_g1

0xb75a,	// (0x000260e5) ai2_mp_volume_pane_g2

0xb6cf,	// (0x0002605a) list_ai2_gene_pane_t1

0xb762,	// (0x000260ed) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a370) ai2_mp_volume_pane_g

0x6eed,	// (0x00021878) volume_small_pane_cp3

0xb76a,	// (0x000260f5) aid_size_cell_ai2_button

0xb772,	// (0x000260fd) grid_ai2_button_pane

0xb77b,	// (0x00026106) cell_ai2_button_pane_ParamLimits

0xb77b,	// (0x00026106) cell_ai2_button_pane

0x7e5c,	// (0x000227e7) cell_ai2_button_pane_g1

0x7e66,	// (0x000227f1) grid_highlight_pane_cp8

0xb71a,	// (0x000260a5) ai2_gene_pane_t1_ParamLimits

0xb71a,	// (0x000260a5) ai2_gene_pane_t1

0x6520,	// (0x00020eab) aid_height_parent_landscape

0xb075,	// (0x00025a00) aid_height_set_list

0xb086,	// (0x00025a11) aid_size_parent

0xb3b5,	// (0x00025d40) aid_size_cell_graphic_pane_ParamLimits

0xb63c,	// (0x00025fc7) popup_ai2_data_window_g1_ParamLimits

0xb63c,	// (0x00025fc7) popup_ai2_data_window_g1

0xb648,	// (0x00025fd3) ai2_news_ticker_pane_g1

0xb650,	// (0x00025fdb) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a35c) ai2_news_ticker_pane_g

0xb658,	// (0x00025fe3) ai2_news_ticker_pane_t1

0xb666,	// (0x00025ff1) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a361) ai2_news_ticker_pane_t

0xb693,	// (0x0002601e) heading_ai2_gene_pane_g1

0xb69b,	// (0x00026026) heading_ai2_gene_pane_t1_ParamLimits

0xb69b,	// (0x00026026) heading_ai2_gene_pane_t1

0xb6b0,	// (0x0002603b) list_highlight_pane_cp6

0xb6b8,	// (0x00026043) ai2_gene_pane_ParamLimits

0xb6b8,	// (0x00026043) ai2_gene_pane

0xb6dd,	// (0x00026068) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a366) list_ai2_gene_pane_t

0xb6eb,	// (0x00026076) list_highlight_pane_cp8_ParamLimits

0xb6eb,	// (0x00026076) list_highlight_pane_cp8

0xb6fc,	// (0x00026087) ai2_gene_pane_g1_ParamLimits

0xb6fc,	// (0x00026087) ai2_gene_pane_g1

0xb70e,	// (0x00026099) ai2_gene_pane_g2_ParamLimits

0xb70e,	// (0x00026099) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a36b) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a36b) ai2_gene_pane_g

0x874b,	// (0x000230d6) scroll_pane_cp12

0x64dd,	// (0x00020e68) control_pane_t3_ParamLimits

0x64dd,	// (0x00020e68) control_pane_t3

0x96ce,	// (0x00024059) status_small_pane_g8_ParamLimits

0x96ce,	// (0x00024059) status_small_pane_g8

0x6694,	// (0x0002101f) popup_find_window_ParamLimits

0x68a9,	// (0x00021234) popup_note_image_window_ParamLimits

0x511f,	// (0x0001faaa) list_double2_graphic_pane_vc_g1_ParamLimits

0x511f,	// (0x0001faaa) list_double2_graphic_pane_vc_g1

0x512b,	// (0x0001fab6) list_double2_graphic_pane_vc_g2_ParamLimits

0x512b,	// (0x0001fab6) list_double2_graphic_pane_vc_g2

0x5137,	// (0x0001fac2) list_double2_graphic_pane_vc_g3_ParamLimits

0x5137,	// (0x0001fac2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a13b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a13b) list_double2_graphic_pane_vc_g

0x5189,	// (0x0001fb14) list_double2_graphic_pane_vc_t1_ParamLimits

0x5189,	// (0x0001fb14) list_double2_graphic_pane_vc_t1

0x512b,	// (0x0001fab6) list_single_heading_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_single_heading_pane_vc_g1

0x5137,	// (0x0001fac2) list_single_heading_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_single_heading_pane_vc_g

0x519f,	// (0x0001fb2a) list_single_heading_pane_vc_t1_ParamLimits

0x519f,	// (0x0001fb2a) list_single_heading_pane_vc_t1

0x51b5,	// (0x0001fb40) list_single_heading_pane_vc_t2_ParamLimits

0x51b5,	// (0x0001fb40) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a168) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a168) list_single_heading_pane_vc_t

0x51c7,	// (0x0001fb52) list_setting_number_pane_vc_g1_ParamLimits

0x51c7,	// (0x0001fb52) list_setting_number_pane_vc_g1

0x51d3,	// (0x0001fb5e) list_setting_number_pane_vc_g2_ParamLimits

0x51d3,	// (0x0001fb5e) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a16d) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a16d) list_setting_number_pane_vc_g

0x51df,	// (0x0001fb6a) list_setting_number_pane_vc_t1_ParamLimits

0x51df,	// (0x0001fb6a) list_setting_number_pane_vc_t1

0x51f3,	// (0x0001fb7e) list_setting_number_pane_vc_t2_ParamLimits

0x51f3,	// (0x0001fb7e) list_setting_number_pane_vc_t2

0x520f,	// (0x0001fb9a) list_setting_number_pane_vc_t3_ParamLimits

0x520f,	// (0x0001fb9a) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a172) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a172) list_setting_number_pane_vc_t

0x522d,	// (0x0001fbb8) set_value_pane_vc_ParamLimits

0x522d,	// (0x0001fbb8) set_value_pane_vc

0xb23e,	// (0x00025bc9) list_double2_graphic_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double2_graphic_pane_vc

0xb23e,	// (0x00025bc9) list_double2_large_graphic_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double2_large_graphic_pane_vc

0xb23e,	// (0x00025bc9) list_double2_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double2_pane_vc

0xb23e,	// (0x00025bc9) list_double_graphic_heading_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_graphic_heading_pane_vc

0xb23e,	// (0x00025bc9) list_double_graphic_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_graphic_pane_vc

0xb23e,	// (0x00025bc9) list_double_heading_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_heading_pane_vc

0xb250,	// (0x00025bdb) list_double_large_graphic_pane_vc_ParamLimits

0xb250,	// (0x00025bdb) list_double_large_graphic_pane_vc

0xb23e,	// (0x00025bc9) list_double_number_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_number_pane_vc

0xb23e,	// (0x00025bc9) list_double_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_pane_vc

0xb23e,	// (0x00025bc9) list_double_time_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_double_time_pane_vc

0xb23e,	// (0x00025bc9) list_setting_number_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_setting_number_pane_vc

0xb23e,	// (0x00025bc9) list_setting_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_setting_pane_vc

0xb23e,	// (0x00025bc9) list_single_graphic_heading_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_single_graphic_heading_pane_vc

0xb23e,	// (0x00025bc9) list_single_heading_pane_vc_ParamLimits

0xb23e,	// (0x00025bc9) list_single_heading_pane_vc

0x5306,	// (0x0001fc91) list_single_number_heading_pane_vc_ParamLimits

0x5306,	// (0x0001fc91) list_single_number_heading_pane_vc

0x511f,	// (0x0001faaa) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x511f,	// (0x0001faaa) list_double_graphic_heading_pane_vc_g1

0x512b,	// (0x0001fab6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x512b,	// (0x0001fab6) list_double_graphic_heading_pane_vc_g2

0x5137,	// (0x0001fac2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5137,	// (0x0001fac2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a13b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a13b) list_double_graphic_heading_pane_vc_g

0x5387,	// (0x0001fd12) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5387,	// (0x0001fd12) list_double_graphic_heading_pane_vc_t1

0x53a3,	// (0x0001fd2e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x53a3,	// (0x0001fd2e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a377) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a377) list_double_graphic_heading_pane_vc_t

0x51c7,	// (0x0001fb52) list_setting_pane_vc_g1_ParamLimits

0x51c7,	// (0x0001fb52) list_setting_pane_vc_g1

0x51d3,	// (0x0001fb5e) list_setting_pane_vc_g2_ParamLimits

0x51d3,	// (0x0001fb5e) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a16d) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a16d) list_setting_pane_vc_g

0x53c1,	// (0x0001fd4c) list_setting_pane_vc_t1_ParamLimits

0x53c1,	// (0x0001fd4c) list_setting_pane_vc_t1

0x53dd,	// (0x0001fd68) list_setting_pane_vc_t2_ParamLimits

0x53dd,	// (0x0001fd68) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a3a5) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a3a5) list_setting_pane_vc_t

0x522d,	// (0x0001fbb8) set_value_pane_cp_vc_ParamLimits

0x522d,	// (0x0001fbb8) set_value_pane_cp_vc

0x512b,	// (0x0001fab6) list_single_number_heading_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_single_number_heading_pane_vc_g1

0x5137,	// (0x0001fac2) list_single_number_heading_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_single_number_heading_pane_vc_g

0x53f9,	// (0x0001fd84) list_single_number_heading_pane_vc_t1_ParamLimits

0x53f9,	// (0x0001fd84) list_single_number_heading_pane_vc_t1

0x540f,	// (0x0001fd9a) list_single_number_heading_pane_vc_t2_ParamLimits

0x540f,	// (0x0001fd9a) list_single_number_heading_pane_vc_t2

0x5421,	// (0x0001fdac) list_single_number_heading_pane_vc_t3_ParamLimits

0x5421,	// (0x0001fdac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a3aa) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a3aa) list_single_number_heading_pane_vc_t

0x511f,	// (0x0001faaa) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x511f,	// (0x0001faaa) list_single_graphic_heading_pane_vc_g1

0x512b,	// (0x0001fab6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x512b,	// (0x0001fab6) list_single_graphic_heading_pane_vc_g4

0x5137,	// (0x0001fac2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5137,	// (0x0001fac2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a13b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a13b) list_single_graphic_heading_pane_vc_g

0x5433,	// (0x0001fdbe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5433,	// (0x0001fdbe) list_single_graphic_heading_pane_vc_t1

0x5449,	// (0x0001fdd4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5449,	// (0x0001fdd4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a3b1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a3b1) list_single_graphic_heading_pane_vc_t

0x512b,	// (0x0001fab6) list_double2_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_double2_pane_vc_g1

0x5137,	// (0x0001fac2) list_double2_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_double2_pane_vc_g

0x545b,	// (0x0001fde6) list_double2_pane_vc_t1_ParamLimits

0x545b,	// (0x0001fde6) list_double2_pane_vc_t1

0x5471,	// (0x0001fdfc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5471,	// (0x0001fdfc) list_double2_large_graphic_pane_vc_g1

0x512b,	// (0x0001fab6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x512b,	// (0x0001fab6) list_double2_large_graphic_pane_vc_g2

0x5137,	// (0x0001fac2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5137,	// (0x0001fac2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a3b6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a3b6) list_double2_large_graphic_pane_vc_g

0x547d,	// (0x0001fe08) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x547d,	// (0x0001fe08) list_double2_large_graphic_pane_vc_t1

0x5493,	// (0x0001fe1e) list_double_time_pane_vc_g1_ParamLimits

0x5493,	// (0x0001fe1e) list_double_time_pane_vc_g1

0x549f,	// (0x0001fe2a) list_double_time_pane_vc_g2_ParamLimits

0x549f,	// (0x0001fe2a) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a3bd) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a3bd) list_double_time_pane_vc_g

0x54ab,	// (0x0001fe36) list_double_time_pane_vc_t1_ParamLimits

0x54ab,	// (0x0001fe36) list_double_time_pane_vc_t1

0x54cf,	// (0x0001fe5a) list_double_time_pane_vc_t2_ParamLimits

0x54cf,	// (0x0001fe5a) list_double_time_pane_vc_t2

0x551e,	// (0x0001fea9) list_double_time_pane_vc_t3_ParamLimits

0x551e,	// (0x0001fea9) list_double_time_pane_vc_t3

0x5530,	// (0x0001febb) list_double_time_pane_vc_t4_ParamLimits

0x5530,	// (0x0001febb) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a3c2) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a3c2) list_double_time_pane_vc_t

0x512b,	// (0x0001fab6) list_double_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_double_pane_vc_g1

0x5137,	// (0x0001fac2) list_double_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_double_pane_vc_g

0x5544,	// (0x0001fecf) list_double_pane_vc_t1_ParamLimits

0x5544,	// (0x0001fecf) list_double_pane_vc_t1

0x5558,	// (0x0001fee3) list_double_pane_vc_t2_ParamLimits

0x5558,	// (0x0001fee3) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a3cb) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a3cb) list_double_pane_vc_t

0x512b,	// (0x0001fab6) list_double_number_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_double_number_pane_vc_g1

0x5137,	// (0x0001fac2) list_double_number_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_double_number_pane_vc_g

0x5570,	// (0x0001fefb) list_double_number_pane_vc_t1_ParamLimits

0x5570,	// (0x0001fefb) list_double_number_pane_vc_t1

0x5582,	// (0x0001ff0d) list_double_number_pane_vc_t2_ParamLimits

0x5582,	// (0x0001ff0d) list_double_number_pane_vc_t2

0x5596,	// (0x0001ff21) list_double_number_pane_vc_t3_ParamLimits

0x5596,	// (0x0001ff21) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a3d0) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a3d0) list_double_number_pane_vc_t

0x55ae,	// (0x0001ff39) list_double_large_graphic_pane_vc_g1_ParamLimits

0x55ae,	// (0x0001ff39) list_double_large_graphic_pane_vc_g1

0x55d0,	// (0x0001ff5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x55d0,	// (0x0001ff5b) list_double_large_graphic_pane_vc_g2

0x55e4,	// (0x0001ff6f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x55e4,	// (0x0001ff6f) list_double_large_graphic_pane_vc_g3

0x55f3,	// (0x0001ff7e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x55f3,	// (0x0001ff7e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a3d7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a3d7) list_double_large_graphic_pane_vc_g

0x55ff,	// (0x0001ff8a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x55ff,	// (0x0001ff8a) list_double_large_graphic_pane_vc_t1

0x561b,	// (0x0001ffa6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x561b,	// (0x0001ffa6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a3e0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a3e0) list_double_large_graphic_pane_vc_t

0x512b,	// (0x0001fab6) list_double_heading_pane_vc_g1_ParamLimits

0x512b,	// (0x0001fab6) list_double_heading_pane_vc_g1

0x5137,	// (0x0001fac2) list_double_heading_pane_vc_g2_ParamLimits

0x5137,	// (0x0001fac2) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a163) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a163) list_double_heading_pane_vc_g

0x563d,	// (0x0001ffc8) list_double_heading_pane_vc_t1_ParamLimits

0x563d,	// (0x0001ffc8) list_double_heading_pane_vc_t1

0x5651,	// (0x0001ffdc) list_double_heading_pane_vc_t2_ParamLimits

0x5651,	// (0x0001ffdc) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a3e5) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a3e5) list_double_heading_pane_vc_t

0x5669,	// (0x0001fff4) list_double_graphic_pane_vc_g1_ParamLimits

0x5669,	// (0x0001fff4) list_double_graphic_pane_vc_g1

0x5675,	// (0x00020000) list_double_graphic_pane_vc_g2_ParamLimits

0x5675,	// (0x00020000) list_double_graphic_pane_vc_g2

0x512b,	// (0x0001fab6) list_double_graphic_pane_vc_g3_ParamLimits

0x512b,	// (0x0001fab6) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a3ea) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a3ea) list_double_graphic_pane_vc_g

0x5692,	// (0x0002001d) list_double_graphic_pane_vc_t1_ParamLimits

0x5692,	// (0x0002001d) list_double_graphic_pane_vc_t1

0x56bc,	// (0x00020047) list_double_graphic_pane_vc_t2_ParamLimits

0x56bc,	// (0x00020047) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a3f3) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a3f3) list_double_graphic_pane_vc_t

0x5add,	// (0x00020468) aid_size_cell_fastswap

0x5ae5,	// (0x00020470) aid_size_cell_touch_ParamLimits

0x5ae5,	// (0x00020470) aid_size_cell_touch

0x5d40,	// (0x000206cb) popup_fast_swap_wide_window_ParamLimits

0x5d40,	// (0x000206cb) popup_fast_swap_wide_window

0x5e54,	// (0x000207df) touch_pane_ParamLimits

0x5e54,	// (0x000207df) touch_pane

0x87a1,	// (0x0002312c) button_value_adjust_pane_cp2

0x4e06,	// (0x0001f791) button_value_adjust_pane_cp4

0x4e26,	// (0x0001f7b1) form_field_data_pane_cp2

0x4e45,	// (0x0001f7d0) form_field_data_wide_pane_cp2

0x8c23,	// (0x000235ae) bg_scroll_pane_ParamLimits

0x60e2,	// (0x00020a6d) scroll_handle_pane_ParamLimits

0x60f6,	// (0x00020a81) scroll_sc2_down_pane_ParamLimits

0x60f6,	// (0x00020a81) scroll_sc2_down_pane

0x8c54,	// (0x000235df) scroll_sc2_up_pane_ParamLimits

0x8c54,	// (0x000235df) scroll_sc2_up_pane

0xbe45,	// (0x000267d0) grid_wheel_folder_pane_g1_ParamLimits

0xbe45,	// (0x000267d0) grid_wheel_folder_pane_g1

0x62bb,	// (0x00020c46) clock_nsta_pane_cp2_ParamLimits

0x62bb,	// (0x00020c46) clock_nsta_pane_cp2

0x9454,	// (0x00023ddf) listscroll_midp_pane_ParamLimits

0x9460,	// (0x00023deb) midp_canvas_pane

0x9748,	// (0x000240d3) nsta_clock_indic_pane

0x9781,	// (0x0002410c) listscroll_form_pane_vc

0x9789,	// (0x00024114) listscroll_set_pane_vc_ParamLimits

0x9789,	// (0x00024114) listscroll_set_pane_vc

0x988e,	// (0x00024219) clock_nsta_pane

0x9903,	// (0x0002428e) indicator_nsta_pane

0x9be3,	// (0x0002456e) bg_popup_sub_pane_cp2_ParamLimits

0x9bf7,	// (0x00024582) find_pane_cp2_ParamLimits

0x9bf7,	// (0x00024582) find_pane_cp2

0x9c0d,	// (0x00024598) grid_toobar_pane_ParamLimits

0x9ced,	// (0x00024678) list_form_gen_pane_vc_ParamLimits

0x9ced,	// (0x00024678) list_form_gen_pane_vc

0x9d03,	// (0x0002468e) scroll_pane_cp8_vc_ParamLimits

0x9d03,	// (0x0002468e) scroll_pane_cp8_vc

0x9d7f,	// (0x0002470a) data_form_wide_pane_vc_ParamLimits

0x9d7f,	// (0x0002470a) data_form_wide_pane_vc

0x9d8b,	// (0x00024716) form_field_data_wide_pane_vc_g1

0x9d93,	// (0x0002471e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d93,	// (0x0002471e) form_field_data_wide_pane_vc_t1

0x87b5,	// (0x00023140) input_focus_pane_cp6_vc_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_cp6_vc

0xa0c5,	// (0x00024a50) list_midp_pane_ParamLimits

0xa0d1,	// (0x00024a5c) scroll_pane_cp16_ParamLimits

0xa0d1,	// (0x00024a5c) scroll_pane_cp16

0xa127,	// (0x00024ab2) button_value_adjust_pane_ParamLimits

0xa127,	// (0x00024ab2) button_value_adjust_pane

0xb098,	// (0x00025a23) button_value_adjust_pane_cp6_ParamLimits

0xb098,	// (0x00025a23) button_value_adjust_pane_cp6

0xb1c2,	// (0x00025b4d) settings_code_pane_cp_ParamLimits

0xb1c2,	// (0x00025b4d) settings_code_pane_cp

0x7e5c,	// (0x000227e7) cell_touch_pane_g1

0x7e5c,	// (0x000227e7) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a08e) cell_touch_pane_g

0xb78d,	// (0x00026118) cell_touch_pane_cp_ParamLimits

0xb78d,	// (0x00026118) cell_touch_pane_cp

0xb79d,	// (0x00026128) cell_touch_pane_ParamLimits

0xb79d,	// (0x00026128) cell_touch_pane

0x7e5c,	// (0x000227e7) scroll_sc2_down_pane_g1

0x7e5c,	// (0x000227e7) scroll_sc2_up_pane_g1

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp4_vc

0xb7af,	// (0x0002613a) list_set_graphic_pane_vc_g1_ParamLimits

0xb7af,	// (0x0002613a) list_set_graphic_pane_vc_g1

0xb7bb,	// (0x00026146) list_set_graphic_pane_vc_g2_ParamLimits

0xb7bb,	// (0x00026146) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a37c) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a37c) list_set_graphic_pane_vc_g

0xb7c7,	// (0x00026152) text_primary_small_cp13_vc_ParamLimits

0xb7c7,	// (0x00026152) text_primary_small_cp13_vc

0xb7df,	// (0x0002616a) list_set_graphic_pane_vc_ParamLimits

0xb7df,	// (0x0002616a) list_set_graphic_pane_vc

0x7e66,	// (0x000227f1) input_focus_pane_cp2_vc

0x7e5c,	// (0x000227e7) setting_code_pane_vc_g1

0x7f91,	// (0x0002291c) setting_code_pane_vc_t1

0xb7f1,	// (0x0002617c) set_text_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0002617c) set_text_pane_vc_t1

0x7e66,	// (0x000227f1) input_focus_pane_cp1_vc

0xb80d,	// (0x00026198) list_set_text_pane_vc

0x7e5c,	// (0x000227e7) setting_text_pane_vc_g1

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp2_vc

0x7f88,	// (0x00022913) setting_slider_graphic_pane_vc_g1

0xb817,	// (0x000261a2) setting_slider_graphic_pane_vc_t1

0xb827,	// (0x000261b2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a381) setting_slider_graphic_pane_vc_t

0xb837,	// (0x000261c2) slider_set_pane_cp_vc

0xb83f,	// (0x000261ca) slider_set_pane_vc_g1

0xb848,	// (0x000261d3) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a386) slider_set_pane_vc_g

0x880d,	// (0x00023198) set_opt_bg_pane_g1_copy1

0x8815,	// (0x000231a0) set_opt_bg_pane_g2_copy1

0xb874,	// (0x000261ff) set_opt_bg_pane_g3_copy1

0x8825,	// (0x000231b0) set_opt_bg_pane_g4_copy1

0x882d,	// (0x000231b8) set_opt_bg_pane_g5_copy1

0x8835,	// (0x000231c0) set_opt_bg_pane_g6_copy1

0xb87e,	// (0x00026209) set_opt_bg_pane_g7_copy1

0xb886,	// (0x00026211) set_opt_bg_pane_g8_copy1

0xb890,	// (0x0002621b) set_opt_bg_pane_g9_copy1

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp_vc

0xb89a,	// (0x00026225) setting_slider_pane_vc_t1

0xb8a9,	// (0x00026234) setting_slider_pane_vc_t2

0xb8b9,	// (0x00026244) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a395) setting_slider_pane_vc_t

0xb8c9,	// (0x00026254) slider_set_pane_vc

0x6c01,	// (0x0002158c) volume_set_pane_vc_g1

0x6c0a,	// (0x00021595) volume_set_pane_vc_g2

0x6c13,	// (0x0002159e) volume_set_pane_vc_g3

0x6c1c,	// (0x000215a7) volume_set_pane_vc_g4

0x6c25,	// (0x000215b0) volume_set_pane_vc_g5

0x6c2e,	// (0x000215b9) volume_set_pane_vc_g6

0x6c37,	// (0x000215c2) volume_set_pane_vc_g7

0x6c40,	// (0x000215cb) volume_set_pane_vc_g8

0x6c49,	// (0x000215d4) volume_set_pane_vc_g9

0x6c52,	// (0x000215dd) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a23a) volume_set_pane_vc_g

0xb8d1,	// (0x0002625c) volume_set_pane_vc

0xb8d9,	// (0x00026264) button_value_adjust_pane_cp1_vc

0xb8e3,	// (0x0002626e) list_highlight_pane_cp2_vc

0xb8ec,	// (0x00026277) list_set_pane_vc_ParamLimits

0xb8ec,	// (0x00026277) list_set_pane_vc

0xb94a,	// (0x000262d5) main_pane_set_vc_t1_ParamLimits

0xb94a,	// (0x000262d5) main_pane_set_vc_t1

0xb95f,	// (0x000262ea) main_pane_set_vc_t2_ParamLimits

0xb95f,	// (0x000262ea) main_pane_set_vc_t2

0xb971,	// (0x000262fc) main_pane_set_vc_t3_ParamLimits

0xb971,	// (0x000262fc) main_pane_set_vc_t3

0xb985,	// (0x00026310) main_pane_set_vc_t4_ParamLimits

0xb985,	// (0x00026310) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a39c) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a39c) main_pane_set_vc_t

0xb999,	// (0x00026324) setting_code_pane_vc_ParamLimits

0xb999,	// (0x00026324) setting_code_pane_vc

0xb9aa,	// (0x00026335) setting_slider_graphic_pane_vc

0xb9aa,	// (0x00026335) setting_slider_pane_vc

0xb9aa,	// (0x00026335) setting_text_pane_vc

0xb9aa,	// (0x00026335) setting_volume_pane_vc

0xb9b4,	// (0x0002633f) scroll_pane_cp121_vc

0x878f,	// (0x0002311a) set_content_pane_vc

0xb9c8,	// (0x00026353) button_value_adjust_pane_g1

0xb9d1,	// (0x0002635c) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a3f8) button_value_adjust_pane_g

0xb9da,	// (0x00026365) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9da,	// (0x00026365) form_field_slider_wide_pane_vc_t1

0xb9ee,	// (0x00026379) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9ee,	// (0x00026379) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a3fd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a3fd) form_field_slider_wide_pane_vc_t

0x81c1,	// (0x00022b4c) input_focus_pane_cp10_vc_ParamLimits

0x81c1,	// (0x00022b4c) input_focus_pane_cp10_vc

0xba1c,	// (0x000263a7) slider_cont_pane_cp1_vc_ParamLimits

0xba1c,	// (0x000263a7) slider_cont_pane_cp1_vc

0xba2e,	// (0x000263b9) slider_form_pane_g1_cp2

0xb848,	// (0x000261d3) slider_form_pane_g2_cp2

0xba5b,	// (0x000263e6) form_field_slider_pane_vc_t3

0xba69,	// (0x000263f4) form_field_slider_pane_vc_t4

0xba77,	// (0x00026402) slider_form_pane_vc_ParamLimits

0xba77,	// (0x00026402) slider_form_pane_vc

0xba84,	// (0x0002640f) form_field_slider_pane_vc_t1_ParamLimits

0xba84,	// (0x0002640f) form_field_slider_pane_vc_t1

0xb9ee,	// (0x00026379) form_field_slider_pane_vc_t2_ParamLimits

0xb9ee,	// (0x00026379) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a40f) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a40f) form_field_slider_pane_vc_t

0x81c1,	// (0x00022b4c) input_focus_pane_cp9_vc_ParamLimits

0x81c1,	// (0x00022b4c) input_focus_pane_cp9_vc

0xbaa0,	// (0x0002642b) slider_cont_pane_vc_ParamLimits

0xbaa0,	// (0x0002642b) slider_cont_pane_vc

0xbab4,	// (0x0002643f) list_form_graphic_pane_cp_vc_ParamLimits

0xbab4,	// (0x0002643f) list_form_graphic_pane_cp_vc

0x9d8b,	// (0x00024716) form_field_popup_wide_pane_vc_g1

0xbac9,	// (0x00026454) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbac9,	// (0x00026454) form_field_popup_wide_pane_vc_t1

0x87b5,	// (0x00023140) input_focus_pane_cp8_vc_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_cp8_vc

0xbb0e,	// (0x00026499) list_form_wide_pane_vc_ParamLimits

0xbb0e,	// (0x00026499) list_form_wide_pane_vc

0xbb1a,	// (0x000264a5) list_form_graphic_pane_vc_g1

0xbb22,	// (0x000264ad) list_form_graphic_pane_vc_t1_ParamLimits

0xbb22,	// (0x000264ad) list_form_graphic_pane_vc_t1

0x7f46,	// (0x000228d1) list_highlight_pane_cp5_vc_ParamLimits

0x7f46,	// (0x000228d1) list_highlight_pane_cp5_vc

0xbb3e,	// (0x000264c9) list_form_graphic_pane_vc_ParamLimits

0xbb3e,	// (0x000264c9) list_form_graphic_pane_vc

0x9d8b,	// (0x00024716) form_field_popup_pane_vc_g1

0xbb54,	// (0x000264df) form_field_popup_pane_vc_t1_ParamLimits

0xbb54,	// (0x000264df) form_field_popup_pane_vc_t1

0x87b5,	// (0x00023140) input_focus_pane_cp7_vc_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_cp7_vc

0xbb6b,	// (0x000264f6) list_form_pane_vc_ParamLimits

0xbb6b,	// (0x000264f6) list_form_pane_vc

0xbb77,	// (0x00026502) data_form_pane_vc_t1_ParamLimits

0xbb77,	// (0x00026502) data_form_pane_vc_t1

0x880d,	// (0x00023198) input_focus_pane_vc_g1

0x8815,	// (0x000231a0) input_focus_pane_vc_g2

0x881d,	// (0x000231a8) input_focus_pane_vc_g3

0x8825,	// (0x000231b0) input_focus_pane_vc_g4

0x882d,	// (0x000231b8) input_focus_pane_vc_g5

0x8835,	// (0x000231c0) input_focus_pane_vc_g6

0x883d,	// (0x000231c8) input_focus_pane_vc_g7

0x8845,	// (0x000231d0) input_focus_pane_vc_g8

0x884d,	// (0x000231d8) input_focus_pane_vc_g9

0x7e5c,	// (0x000227e7) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002a017) input_focus_pane_vc_g

0x9d7f,	// (0x0002470a) data_form_pane_vc_ParamLimits

0x9d7f,	// (0x0002470a) data_form_pane_vc

0x9d8b,	// (0x00024716) form_field_data_pane_vc_g1

0xbb92,	// (0x0002651d) form_field_data_pane_vc_t1_ParamLimits

0xbb92,	// (0x0002651d) form_field_data_pane_vc_t1

0x87b5,	// (0x00023140) input_focus_pane_vc_ParamLimits

0x87b5,	// (0x00023140) input_focus_pane_vc

0xbbac,	// (0x00026537) button_value_adjust_pane_cp3_vc

0xbbb4,	// (0x0002653f) button_value_adjust_pane_cp5_vc

0xbbbc,	// (0x00026547) form_field_data_pane_vc_ParamLimits

0xbbbc,	// (0x00026547) form_field_data_pane_vc

0xbbd3,	// (0x0002655e) form_field_data_pane_vc_cp2

0xbbdb,	// (0x00026566) form_field_data_wide_pane_vc_ParamLimits

0xbbdb,	// (0x00026566) form_field_data_wide_pane_vc

0xbbf1,	// (0x0002657c) form_field_data_wide_pane_vc_cp2

0xbbf9,	// (0x00026584) form_field_popup_pane_vc_ParamLimits

0xbbf9,	// (0x00026584) form_field_popup_pane_vc

0xbc10,	// (0x0002659b) form_field_popup_wide_pane_vc_ParamLimits

0xbc10,	// (0x0002659b) form_field_popup_wide_pane_vc

0xbc26,	// (0x000265b1) form_field_slider_pane_vc_ParamLimits

0xbc26,	// (0x000265b1) form_field_slider_pane_vc

0xbc39,	// (0x000265c4) form_field_slider_wide_pane_vc_ParamLimits

0xbc39,	// (0x000265c4) form_field_slider_wide_pane_vc

0xbc4c,	// (0x000265d7) grid_touch_1_pane_ParamLimits

0xbc4c,	// (0x000265d7) grid_touch_1_pane

0xbc58,	// (0x000265e3) grid_touch_2_pane_ParamLimits

0xbc58,	// (0x000265e3) grid_touch_2_pane

0x9713,	// (0x0002409e) touch_pane_g1_ParamLimits

0x9713,	// (0x0002409e) touch_pane_g1

0xbc70,	// (0x000265fb) cell_app_pane_cp_wide_ParamLimits

0xbc70,	// (0x000265fb) cell_app_pane_cp_wide

0xbc81,	// (0x0002660c) grid_popup_fast_wide_pane_ParamLimits

0xbc81,	// (0x0002660c) grid_popup_fast_wide_pane

0xbc95,	// (0x00026620) scroll_pane_cp19_ParamLimits

0xbc95,	// (0x00026620) scroll_pane_cp19

0x7e66,	// (0x000227f1) bg_popup_window_pane_cp20

0xbca9,	// (0x00026634) listscroll_popup_fast_wide_pane

0x7f46,	// (0x000228d1) grid_indicator_nsta_pane

0xbcb1,	// (0x0002663c) clock_nsta_pane_g1

0xbcba,	// (0x00026645) clock_nsta_pane_t1

0xbcd6,	// (0x00026661) cell_indicator_nsta_pane_ParamLimits

0xbcd6,	// (0x00026661) cell_indicator_nsta_pane

0xbd07,	// (0x00026692) cell_indicator_nsta_pane_g1

0xbd15,	// (0x000266a0) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a420) cell_indicator_nsta_pane_g

0xbd22,	// (0x000266ad) clock_nsta_pane_cp

0xbd2a,	// (0x000266b5) indicator_nsta_pane_cp

0xbd32,	// (0x000266bd) nsta_clock_indic_pane_g1

0x800f,	// (0x0002299a) grid_indicator_pane

0x8d49,	// (0x000236d4) scroll_pane_cp29

0x620a,	// (0x00020b95) indicator_nsta_pane_cp2_ParamLimits

0x620a,	// (0x00020b95) indicator_nsta_pane_cp2

0x7f46,	// (0x000228d1) main_apps_wheel_pane

0x9fa6,	// (0x00024931) form_midp_field_text_pane_ParamLimits

0xa0f1,	// (0x00024a7c) scroll_bar_cp050_ParamLimits

0xbd82,	// (0x0002670d) cell_indicator_pane_ParamLimits

0xbd82,	// (0x0002670d) cell_indicator_pane

0xbd99,	// (0x00026724) cell_indicator_pane_g1

0xbda3,	// (0x0002672e) grid_wheel_folder_pane_ParamLimits

0xbda3,	// (0x0002672e) grid_wheel_folder_pane

0xbdb9,	// (0x00026744) list_wheel_apps_pane_ParamLimits

0xbdb9,	// (0x00026744) list_wheel_apps_pane

0xbdca,	// (0x00026755) main_apps_wheel_pane_g1_ParamLimits

0xbdca,	// (0x00026755) main_apps_wheel_pane_g1

0xbdde,	// (0x00026769) main_apps_wheel_pane_g2_ParamLimits

0xbdde,	// (0x00026769) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a43c) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a43c) main_apps_wheel_pane_g

0xbdf6,	// (0x00026781) main_apps_wheel_pane_t1_ParamLimits

0xbdf6,	// (0x00026781) main_apps_wheel_pane_t1

0xbe19,	// (0x000267a4) list_wheel_apps_pane_g1

0xbe21,	// (0x000267ac) list_wheel_apps_pane_g2

0xbe29,	// (0x000267b4) list_wheel_apps_pane_g3

0xbe31,	// (0x000267bc) list_wheel_apps_pane_g4

0xbe3b,	// (0x000267c6) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a441) list_wheel_apps_pane_g

0x92cc,	// (0x00023c57) navi_icon_text_pane

0x97bd,	// (0x00024148) aid_fill_nsta

0xbe5e,	// (0x000267e9) navi_icon_text_pane_g1

0xbe6a,	// (0x000267f5) navi_icon_text_pane_t1

0x915f,	// (0x00023aea) list_set_graphic_pane_t1_ParamLimits

0x915f,	// (0x00023aea) list_set_graphic_pane_t1

0xa848,	// (0x000251d3) popup_midp_note_alarm_window_t6_ParamLimits

0xa848,	// (0x000251d3) popup_midp_note_alarm_window_t6

0xa85a,	// (0x000251e5) popup_midp_note_alarm_window_t7_ParamLimits

0xa85a,	// (0x000251e5) popup_midp_note_alarm_window_t7

0xa86c,	// (0x000251f7) popup_midp_note_alarm_window_t8_ParamLimits

0xa86c,	// (0x000251f7) popup_midp_note_alarm_window_t8

0xa87e,	// (0x00025209) popup_midp_note_alarm_window_t9_ParamLimits

0xa87e,	// (0x00025209) popup_midp_note_alarm_window_t9

0xa890,	// (0x0002521b) popup_midp_note_alarm_window_t10_ParamLimits

0xa890,	// (0x0002521b) popup_midp_note_alarm_window_t10

0xa8a2,	// (0x0002522d) popup_midp_note_alarm_window_t11_ParamLimits

0xa8a2,	// (0x0002522d) popup_midp_note_alarm_window_t11

0xa8b4,	// (0x0002523f) scroll_pane_cp17_ParamLimits

0xa8b4,	// (0x0002523f) scroll_pane_cp17

0x6c01,	// (0x0002158c) volume_small_pane_cp_g1

0x6ef6,	// (0x00021881) volume_small_pane_cp_g2

0x6eff,	// (0x0002188a) volume_small_pane_cp_g3

0x6f08,	// (0x00021893) volume_small_pane_cp_g4

0x6f11,	// (0x0002189c) volume_small_pane_cp_g5

0x6f1a,	// (0x000218a5) volume_small_pane_cp_g6

0x6f23,	// (0x000218ae) volume_small_pane_cp_g7

0x6f2c,	// (0x000218b7) volume_small_pane_cp_g8

0x6f35,	// (0x000218c0) volume_small_pane_cp_g9

0x6f3e,	// (0x000218c9) volume_small_pane_cp_g10

0x9529,	// (0x00023eb4) midp_ticker_pane_g1_ParamLimits

0x9535,	// (0x00023ec0) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a0e3) midp_ticker_pane_g_ParamLimits

0x9541,	// (0x00023ecc) midp_ticker_pane_t1_ParamLimits

0x97d3,	// (0x0002415e) aid_fill_nsta_2

0xa0dd,	// (0x00024a68) list_form2_midp_pane

0xb20d,	// (0x00025b98) midp_editing_number_pane_ParamLimits

0xb21c,	// (0x00025ba7) midp_ticker_pane_ParamLimits

0xbe7c,	// (0x00026807) form2_midp_field_pane

0xbea0,	// (0x0002682b) scroll_pane_cp51

0xbec0,	// (0x0002684b) form2_midp_button_pane_ParamLimits

0xbec0,	// (0x0002684b) form2_midp_button_pane

0xbed2,	// (0x0002685d) form2_midp_content_pane_ParamLimits

0xbed2,	// (0x0002685d) form2_midp_content_pane

0xbeec,	// (0x00026877) form2_midp_field_choice_group_pane

0xbef4,	// (0x0002687f) form2_midp_field_pane_g1

0xbefc,	// (0x00026887) form2_midp_field_pane_g2

0xbf04,	// (0x0002688f) form2_midp_field_pane_g3

0xbf0c,	// (0x00026897) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a466) form2_midp_field_pane_g

0xbf14,	// (0x0002689f) form2_midp_gauge_slider_pane

0xbf1c,	// (0x000268a7) form2_midp_gauge_wait_pane

0xbf24,	// (0x000268af) form2_midp_image_pane_ParamLimits

0xbf24,	// (0x000268af) form2_midp_image_pane

0xbf3f,	// (0x000268ca) form2_midp_label_pane_ParamLimits

0xbf3f,	// (0x000268ca) form2_midp_label_pane

0xbf58,	// (0x000268e3) form2_midp_label_pane_cp_ParamLimits

0xbf58,	// (0x000268e3) form2_midp_label_pane_cp

0xbf79,	// (0x00026904) form2_midp_string_pane_ParamLimits

0xbf79,	// (0x00026904) form2_midp_string_pane

0x56e6,	// (0x00020071) form2_midp_text_pane_ParamLimits

0x56e6,	// (0x00020071) form2_midp_text_pane

0xbf8b,	// (0x00026916) form2_midp_time_pane

0xbf9b,	// (0x00026926) input_focus_pane_cp51_ParamLimits

0xbf9b,	// (0x00026926) input_focus_pane_cp51

0xbfb3,	// (0x0002693e) form2_midp_label_pane_t1_ParamLimits

0xbfb3,	// (0x0002693e) form2_midp_label_pane_t1

0x5701,	// (0x0002008c) form2_mdip_text_pane_t1_ParamLimits

0x5701,	// (0x0002008c) form2_mdip_text_pane_t1

0x571f,	// (0x000200aa) form2_midp_time_pane_t1

0xbffc,	// (0x00026987) form2_midp_gauge_slider_pane_t1

0xc00e,	// (0x00026999) form2_midp_gauge_slider_pane_t2

0xc020,	// (0x000269ab) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a46f) form2_midp_gauge_slider_pane_t

0xc032,	// (0x000269bd) form2_midp_slider_pane

0xc03e,	// (0x000269c9) form2_midp_gauge_wait_pane_t1

0xc04c,	// (0x000269d7) form2_midp_wait_pane_ParamLimits

0xc04c,	// (0x000269d7) form2_midp_wait_pane

0xc077,	// (0x00026a02) list_single_2graphic_pane_cp4_ParamLimits

0xc077,	// (0x00026a02) list_single_2graphic_pane_cp4

0x9df3,	// (0x0002477e) list_single_midp_graphic_pane_cp_ParamLimits

0x9df3,	// (0x0002477e) list_single_midp_graphic_pane_cp

0x7e66,	// (0x000227f1) list_highlight_pane_cp20

0xc09b,	// (0x00026a26) list_single_2graphic_pane_g1_cp4

0xc0a3,	// (0x00026a2e) list_single_2graphic_pane_g2_cp4

0xc0ab,	// (0x00026a36) list_single_2graphic_pane_t1_cp4

0x7f46,	// (0x000228d1) list_highlight_pane_cp21

0xc0ba,	// (0x00026a45) list_single_midp_graphic_pane_g4_cp

0xc0c9,	// (0x00026a54) list_single_midp_graphic_pane_t1_cp

0xc0de,	// (0x00026a69) form2_mdip_string_pane_t1_ParamLimits

0xc0de,	// (0x00026a69) form2_mdip_string_pane_t1

0x7e66,	// (0x000227f1) bg_wml_button_pane_cp2

0x7e5c,	// (0x000227e7) form2_midp_image_pane_g1

0x4bf0,	// (0x0001f57b) list_double_large_graphic_pane_g5_ParamLimits

0x4bf0,	// (0x0001f57b) list_double_large_graphic_pane_g5

0x9454,	// (0x00023ddf) midp_form_pane_ParamLimits

0x7f46,	// (0x000228d1) main_apps_wheel_pane_ParamLimits

0x68cf,	// (0x0002125a) popup_preview_window_ParamLimits

0x68cf,	// (0x0002125a) popup_preview_window

0x6a8a,	// (0x00021415) popup_touch_info_window_ParamLimits

0x6a8a,	// (0x00021415) popup_touch_info_window

0x6aa8,	// (0x00021433) popup_touch_menu_window_ParamLimits

0x6aa8,	// (0x00021433) popup_touch_menu_window

0x7e52,	// (0x000227dd) bg_popup_sub_pane_cp6

0xc1d7,	// (0x00026b62) list_touch_menu_pane

0xc1df,	// (0x00026b6a) list_single_touch_menu_pane_ParamLimits

0xc1df,	// (0x00026b6a) list_single_touch_menu_pane

0xc1f5,	// (0x00026b80) list_single_touch_menu_pane_t1

0x7f46,	// (0x000228d1) bg_popup_sub_pane_cp7_ParamLimits

0x7f46,	// (0x000228d1) bg_popup_sub_pane_cp7

0xc203,	// (0x00026b8e) heading_sub_pane

0xc20b,	// (0x00026b96) list_touch_info_pane_ParamLimits

0xc20b,	// (0x00026b96) list_touch_info_pane

0xc21a,	// (0x00026ba5) list_single_touch_info_pane_ParamLimits

0xc21a,	// (0x00026ba5) list_single_touch_info_pane

0xc22c,	// (0x00026bb7) list_single_touch_info_pane_t1

0xc23a,	// (0x00026bc5) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a47d) list_single_touch_info_pane_t

0x944c,	// (0x00023dd7) bg_popup_heading_pane_cp

0xc248,	// (0x00026bd3) heading_sub_pane_t1

0x9d19,	// (0x000246a4) bg_popup_preview_window_pane_cp_ParamLimits

0x9d19,	// (0x000246a4) bg_popup_preview_window_pane_cp

0xc203,	// (0x00026b8e) heading_preview_pane

0xc20b,	// (0x00026b96) list_preview_pane_ParamLimits

0xc20b,	// (0x00026b96) list_preview_pane

0xc256,	// (0x00026be1) popup_preview_window_g1

0xc21a,	// (0x00026ba5) list_single_preview_pane_ParamLimits

0xc21a,	// (0x00026ba5) list_single_preview_pane

0xc25e,	// (0x00026be9) list_single_preview_pane_g1

0xc266,	// (0x00026bf1) list_single_preview_pane_t1

0xc22c,	// (0x00026bb7) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a482) list_single_preview_pane_t

0xc274,	// (0x00026bff) bg_popup_heading_pane_cp2_ParamLimits

0xc274,	// (0x00026bff) bg_popup_heading_pane_cp2

0xc28a,	// (0x00026c15) heading_preview_pane_g1

0xc292,	// (0x00026c1d) heading_preview_pane_t1_ParamLimits

0xc292,	// (0x00026c1d) heading_preview_pane_t1

0x8032,	// (0x000229bd) soft_indicator_pane_t1_ParamLimits

0x8728,	// (0x000230b3) scroll_pane_ParamLimits

0x8c42,	// (0x000235cd) scroll_sc2_left_pane

0x8c4b,	// (0x000235d6) scroll_sc2_right_pane

0x8c6a,	// (0x000235f5) scroll_bg_pane_g1_ParamLimits

0x8c7f,	// (0x0002360a) scroll_bg_pane_g2_ParamLimits

0x8c97,	// (0x00023622) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002a06e) scroll_bg_pane_g_ParamLimits

0x8c6a,	// (0x000235f5) scroll_handle_pane_g1_ParamLimits

0x8cb9,	// (0x00023644) scroll_handle_pane_g2_ParamLimits

0x8c97,	// (0x00023622) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a075) scroll_handle_pane_g_ParamLimits

0x6550,	// (0x00020edb) popup_choice_list_window_ParamLimits

0x6550,	// (0x00020edb) popup_choice_list_window

0x9bef,	// (0x0002457a) choice_list_pane

0x9c71,	// (0x000245fc) cell_toolbar_pane_t1

0x9c99,	// (0x00024624) toolbar_button_pane_ParamLimits

0xad6e,	// (0x000256f9) ai_gene_pane_1_t2_ParamLimits

0xad6e,	// (0x000256f9) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a296) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a296) ai_gene_pane_1_t

0xc2af,	// (0x00026c3a) scroll_sc2_left_pane_g1

0xc2af,	// (0x00026c3a) scroll_sc2_right_pane_g1

0x979b,	// (0x00024126) bg_popup_sub_pane_cp10

0xc2b9,	// (0x00026c44) list_choice_list_pane

0xc2d2,	// (0x00026c5d) list_single_choice_list_pane_ParamLimits

0xc2d2,	// (0x00026c5d) list_single_choice_list_pane

0xc2e5,	// (0x00026c70) list_single_choice_list_pane_g1

0x8946,	// (0x000232d1) list_single_choice_list_pane_t1_ParamLimits

0x8946,	// (0x000232d1) list_single_choice_list_pane_t1

0xc2ed,	// (0x00026c78) choice_list_pane_g1

0xc2f5,	// (0x00026c80) choice_list_pane_t1

0x7e52,	// (0x000227dd) input_focus_pane_cp11

0x8b1d,	// (0x000234a8) title_pane_stacon_g2_ParamLimits

0x8b1d,	// (0x000234a8) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002a054) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002a054) title_pane_stacon_g

0x944c,	// (0x00023dd7) cursor_press_pane

0x65fc,	// (0x00020f87) popup_fep_hwr_window_ParamLimits

0x65fc,	// (0x00020f87) popup_fep_hwr_window

0x6676,	// (0x00021001) popup_fep_vkb_window_ParamLimits

0x6676,	// (0x00021001) popup_fep_vkb_window

0xc303,	// (0x00026c8e) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a4ab) fep_vkb_side_pane_g_ParamLimits

0x6f80,	// (0x0002190b) fep_hwr_candidate_pane_ParamLimits

0x6f80,	// (0x0002190b) fep_hwr_candidate_pane

0x6faa,	// (0x00021935) fep_hwr_side_pane_ParamLimits

0x6faa,	// (0x00021935) fep_hwr_side_pane

0x6fca,	// (0x00021955) fep_hwr_top_pane_ParamLimits

0x6fca,	// (0x00021955) fep_hwr_top_pane

0x6fe2,	// (0x0002196d) fep_hwr_write_pane_ParamLimits

0x6fe2,	// (0x0002196d) fep_hwr_write_pane

0xfb20,	// (0x0002a4ab) fep_vkb_side_pane_g

0xc30b,	// (0x00026c96) fep_hwr_top_pane_g1

0xc31d,	// (0x00026ca8) fep_hwr_top_pane_g2

0x700e,	// (0x00021999) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a487) fep_hwr_top_pane_g

0x7023,	// (0x000219ae) fep_hwr_top_text_pane

0x8e39,	// (0x000237c4) fep_hwr_top_text_pane_g1

0xc353,	// (0x00026cde) fep_hwr_top_text_pane_t1

0x7119,	// (0x00021aa4) fep_hwr_candidate_pane_g1

0xc5a6,	// (0x00026f31) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a6,	// (0x00026f31) fep_vkb_keypad_pane_g3

0xc5ce,	// (0x00026f59) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ce,	// (0x00026f59) fep_vkb_keypad_pane_g4

0xc63d,	// (0x00026fc8) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x00026fc8) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a4b2) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a4b2) fep_vkb_bottom_pane_g

0xc2af,	// (0x00026c3a) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a4bc) cell_vkb_side_pane_g

0xc6c8,	// (0x00027053) cell_vkb_side_pane_t1

0xc6d6,	// (0x00027061) cell_vkb_side_pane_t1_copy1

0xc2af,	// (0x00026c3a) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x0002718d) cell_vkb_candidate_pane_ParamLimits

0xc361,	// (0x00026cec) aid_size_cell_vkb_ParamLimits

0xc361,	// (0x00026cec) aid_size_cell_vkb

0xc802,	// (0x0002718d) cell_vkb_candidate_pane

0x7133,	// (0x00021abe) bg_popup_fep_shadow_pane_g1

0xc3ef,	// (0x00026d7a) fep_vkb_bottom_pane_ParamLimits

0xc3ef,	// (0x00026d7a) fep_vkb_bottom_pane

0xc425,	// (0x00026db0) fep_vkb_candidate_pane_ParamLimits

0xc425,	// (0x00026db0) fep_vkb_candidate_pane

0xc441,	// (0x00026dcc) fep_vkb_keypad_pane_ParamLimits

0xc441,	// (0x00026dcc) fep_vkb_keypad_pane

0xc487,	// (0x00026e12) fep_vkb_side_pane_ParamLimits

0xc487,	// (0x00026e12) fep_vkb_side_pane

0xc4c3,	// (0x00026e4e) fep_vkb_top_pane_ParamLimits

0xc4c3,	// (0x00026e4e) fep_vkb_top_pane

0xc4ff,	// (0x00026e8a) fep_vkb_top_pane_g1_ParamLimits

0xc4ff,	// (0x00026e8a) fep_vkb_top_pane_g1

0xc50e,	// (0x00026e99) fep_vkb_top_pane_g2_ParamLimits

0xc50e,	// (0x00026e99) fep_vkb_top_pane_g2

0xc51d,	// (0x00026ea8) fep_vkb_top_pane_g3_ParamLimits

0xc51d,	// (0x00026ea8) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a4a2) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a4a2) fep_vkb_top_pane_g

0xc53b,	// (0x00026ec6) fep_vkb_top_text_pane_ParamLimits

0xc53b,	// (0x00026ec6) fep_vkb_top_text_pane

0xc54c,	// (0x00026ed7) fep_vkb_side_pane_g1_ParamLimits

0xc54c,	// (0x00026ed7) fep_vkb_side_pane_g1

0xc595,	// (0x00026f20) grid_vkb_side_pane_ParamLimits

0xc595,	// (0x00026f20) grid_vkb_side_pane

0x713b,	// (0x00021ac6) bg_popup_fep_shadow_pane_g2

0x7144,	// (0x00021acf) bg_popup_fep_shadow_pane_g3

0x714c,	// (0x00021ad7) bg_popup_fep_shadow_pane_g4

0x7155,	// (0x00021ae0) bg_popup_fep_shadow_pane_g5

0x715f,	// (0x00021aea) bg_popup_fep_shadow_pane_g6

0x7167,	// (0x00021af2) bg_popup_fep_shadow_pane_g7

0x882d,	// (0x000231b8) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x00026f77) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00026f77) grid_vkb_keypad_number_pane

0xc5fc,	// (0x00026f87) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x00026f87) grid_vkb_keypad_pane

0xc622,	// (0x00026fad) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x00026fad) fep_vkb_bottom_pane_g1

0xc64b,	// (0x00026fd6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x00026fd6) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x00026feb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x00026feb) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x00027000) fep_vkb_top_text_pane_g1

0xc690,	// (0x0002701b) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x00027030) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x00027030) cell_vkb_side_pane

0xc2af,	// (0x00026c3a) cell_vkb_side_pane_g1

0xc6e4,	// (0x0002706f) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x0002706f) cell_vkb_keypad_pane

0xc759,	// (0x000270e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a4cf) bg_popup_fep_shadow_pane_g

0xc2af,	// (0x00026c3a) cell_hwr_side_pane_g1

0xc2af,	// (0x00026c3a) cell_hwr_side_pane_g2

0xc763,	// (0x000270ee) cell_vkb_keypad_pane_t1

0xc771,	// (0x000270fc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x000270fc) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x00027119) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x00027119) cell_vkb_keypad_bottom_right_pane

0xc2af,	// (0x00026c3a) cell_vkb_keypad_bottom_left_pane_g1

0xc2af,	// (0x00026c3a) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x00027152) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x00027152) cell_vkb_keypad_number_pane

0xc7e6,	// (0x00027171) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x0002717b) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x00027184) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a4c1) cell_vkb_keypad_number_pane_g

0xc763,	// (0x000270ee) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x000271a8) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a4bc) cell_hwr_side_pane_g

0xc836,	// (0x000271c1) cell_hwr_side_pane_t1

0x7179,	// (0x00021b04) cell_hwr_side_pane_t1_copy1

0xc52d,	// (0x00026eb8) cell_hwr_candidate_pane_g1

0x7187,	// (0x00021b12) cell_hwr_candidate_pane_t1

0xc2af,	// (0x00026c3a) cell_vkb_candidate_pane_g2

0xc8bc,	// (0x00027247) cell_vkb_candidate_pane_t1

0x6f47,	// (0x000218d2) bg_popup_fep_shadow_pane_ParamLimits

0x6f47,	// (0x000218d2) bg_popup_fep_shadow_pane

0x1f8f,	// (0x0001c91a) bg_fep_hwr_top_pane_g4

0xc32f,	// (0x00026cba) bg_hwr_side_pane_g1_ParamLimits

0xc32f,	// (0x00026cba) bg_hwr_side_pane_g1

0x705f,	// (0x000219ea) cell_hwr_side_pane_ParamLimits

0x705f,	// (0x000219ea) cell_hwr_side_pane

0x709a,	// (0x00021a25) fep_hwr_write_pane_g1_ParamLimits

0x709a,	// (0x00021a25) fep_hwr_write_pane_g1

0x70a7,	// (0x00021a32) fep_hwr_write_pane_g2_ParamLimits

0x70a7,	// (0x00021a32) fep_hwr_write_pane_g2

0x70b4,	// (0x00021a3f) fep_hwr_write_pane_g3_ParamLimits

0x70b4,	// (0x00021a3f) fep_hwr_write_pane_g3

0x70c2,	// (0x00021a4d) fep_hwr_write_pane_g4_ParamLimits

0x70c2,	// (0x00021a4d) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a48e) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a48e) fep_hwr_write_pane_g

0x1f8f,	// (0x0001c91a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1f8f,	// (0x0001c91a) bg_fep_hwr_candidate_pane_g2

0x70d7,	// (0x00021a62) cell_hwr_candidate_pane_ParamLimits

0x70d7,	// (0x00021a62) cell_hwr_candidate_pane

0x7119,	// (0x00021aa4) fep_hwr_candidate_pane_g1_ParamLimits

0xc38f,	// (0x00026d1a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc38f,	// (0x00026d1a) bg_popup_fep_shadow_pane_cp2

0xc52d,	// (0x00026eb8) fep_vkb_top_pane_g4_ParamLimits

0xc52d,	// (0x00026eb8) fep_vkb_top_pane_g4

0xc573,	// (0x00026efe) fep_vkb_side_pane_g2_ParamLimits

0xc573,	// (0x00026efe) fep_vkb_side_pane_g2

0x4d33,	// (0x0001f6be) list_setting_pane_t4_ParamLimits

0x4d33,	// (0x0001f6be) list_setting_pane_t4

0x4dcd,	// (0x0001f758) list_setting_number_pane_t5_ParamLimits

0x4dcd,	// (0x0001f758) list_setting_number_pane_t5

0x8e80,	// (0x0002380b) list_double_heading_pane_cp2_ParamLimits

0x8e80,	// (0x0002380b) list_double_heading_pane_cp2

0x87c3,	// (0x0002314e) list_double_heading_pane_g1_cp2_ParamLimits

0x87c3,	// (0x0002314e) list_double_heading_pane_g1_cp2

0x87cf,	// (0x0002315a) list_double_heading_pane_g2_cp2_ParamLimits

0x87cf,	// (0x0002315a) list_double_heading_pane_g2_cp2

0xc8ca,	// (0x00027255) list_double_heading_pane_t1_cp2_ParamLimits

0xc8ca,	// (0x00027255) list_double_heading_pane_t1_cp2

0xc8e0,	// (0x0002726b) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e0,	// (0x0002726b) list_double_heading_pane_t2_cp2

0x7e3a,	// (0x000227c5) aid_value_unit2

0x5d9a,	// (0x00020725) popup_preview_fixed_window

0x81cf,	// (0x00022b5a) bg_popup_preview_window_pane_cp02

0xc8f2,	// (0x0002727d) list_preview_fixed_pane

0xc938,	// (0x000272c3) list_empty_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_empty_pane_fp

0xc938,	// (0x000272c3) list_single_cale_day_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_cale_day_pane_fp

0xc938,	// (0x000272c3) list_single_graphic_heading_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_graphic_heading_pane_fp

0xc938,	// (0x000272c3) list_single_graphic_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_graphic_pane_fp

0xc938,	// (0x000272c3) list_single_heading_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_heading_pane_fp

0xc938,	// (0x000272c3) list_single_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_pane_fp

0xc94d,	// (0x000272d8) list_single_pane_fp_g1_ParamLimits

0xc94d,	// (0x000272d8) list_single_pane_fp_g1

0x5732,	// (0x000200bd) list_single_pane_fp_g2_ParamLimits

0x5732,	// (0x000200bd) list_single_pane_fp_g2

0x573e,	// (0x000200c9) list_single_pane_fp_g3_ParamLimits

0x573e,	// (0x000200c9) list_single_pane_fp_g3

0xc959,	// (0x000272e4) list_single_pane_fp_g4_ParamLimits

0xc959,	// (0x000272e4) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a4f0) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a4f0) list_single_pane_fp_g

0x5752,	// (0x000200dd) list_single_pane_fp_t1_ParamLimits

0x5752,	// (0x000200dd) list_single_pane_fp_t1

0x5769,	// (0x000200f4) list_single_graphic_pane_fp_g1_ParamLimits

0x5769,	// (0x000200f4) list_single_graphic_pane_fp_g1

0xc94d,	// (0x000272d8) list_single_graphic_pane_fp_g2_ParamLimits

0xc94d,	// (0x000272d8) list_single_graphic_pane_fp_g2

0x5732,	// (0x000200bd) list_single_graphic_pane_fp_g3_ParamLimits

0x5732,	// (0x000200bd) list_single_graphic_pane_fp_g3

0x573e,	// (0x000200c9) list_single_graphic_pane_fp_g4_ParamLimits

0x573e,	// (0x000200c9) list_single_graphic_pane_fp_g4

0xc959,	// (0x000272e4) list_single_graphic_pane_fp_g5_ParamLimits

0xc959,	// (0x000272e4) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a4f9) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a4f9) list_single_graphic_pane_fp_g

0x5775,	// (0x00020100) list_single_graphic_pane_fp_t1_ParamLimits

0x5775,	// (0x00020100) list_single_graphic_pane_fp_t1

0x5769,	// (0x000200f4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5769,	// (0x000200f4) list_single_graphic_heading_pane_fp_g1

0xc94d,	// (0x000272d8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x000272d8) list_single_graphic_heading_pane_fp_g2

0x5732,	// (0x000200bd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5732,	// (0x000200bd) list_single_graphic_heading_pane_fp_g3

0x573e,	// (0x000200c9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x573e,	// (0x000200c9) list_single_graphic_heading_pane_fp_g4

0xc959,	// (0x000272e4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc959,	// (0x000272e4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a4f9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a4f9) list_single_graphic_heading_pane_fp_g

0x578b,	// (0x00020116) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x578b,	// (0x00020116) list_single_graphic_heading_pane_fp_t1

0x57a1,	// (0x0002012c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57a1,	// (0x0002012c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a504) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a504) list_single_graphic_heading_pane_fp_t

0x57b3,	// (0x0002013e) list_single_cale_day_pane_fp_g1_ParamLimits

0x57b3,	// (0x0002013e) list_single_cale_day_pane_fp_g1

0xc965,	// (0x000272f0) list_single_cale_day_pane_fp_g2_ParamLimits

0xc965,	// (0x000272f0) list_single_cale_day_pane_fp_g2

0x57eb,	// (0x00020176) list_single_cale_day_pane_fp_g3_ParamLimits

0x57eb,	// (0x00020176) list_single_cale_day_pane_fp_g3

0x5813,	// (0x0002019e) list_single_cale_day_pane_fp_g4_ParamLimits

0x5813,	// (0x0002019e) list_single_cale_day_pane_fp_g4

0x5837,	// (0x000201c2) list_single_cale_day_pane_fp_g5_ParamLimits

0x5837,	// (0x000201c2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a509) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a509) list_single_cale_day_pane_fp_g

0x585b,	// (0x000201e6) list_single_cale_day_pane_fp_t1_ParamLimits

0x585b,	// (0x000201e6) list_single_cale_day_pane_fp_t1

0x5881,	// (0x0002020c) list_single_cale_day_pane_fp_t2_ParamLimits

0x5881,	// (0x0002020c) list_single_cale_day_pane_fp_t2

0x589a,	// (0x00020225) list_single_cale_day_pane_fp_t3_ParamLimits

0x589a,	// (0x00020225) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a514) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a514) list_single_cale_day_pane_fp_t

0xc94d,	// (0x000272d8) list_empty_pane_fp_g1_ParamLimits

0xc94d,	// (0x000272d8) list_empty_pane_fp_g1

0x58b3,	// (0x0002023e) list_empty_pane_fp_t1

0x58c1,	// (0x0002024c) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a51b) list_empty_pane_fp_t

0xc94d,	// (0x000272d8) list_single_heading_pane_fp_g1_ParamLimits

0xc94d,	// (0x000272d8) list_single_heading_pane_fp_g1

0x5732,	// (0x000200bd) list_single_heading_pane_fp_g2_ParamLimits

0x5732,	// (0x000200bd) list_single_heading_pane_fp_g2

0x573e,	// (0x000200c9) list_single_heading_pane_fp_g3_ParamLimits

0x573e,	// (0x000200c9) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a520) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a520) list_single_heading_pane_fp_g

0x58cf,	// (0x0002025a) list_single_heading_pane_fp_t1_ParamLimits

0x58cf,	// (0x0002025a) list_single_heading_pane_fp_t1

0x58e1,	// (0x0002026c) list_single_heading_pane_fp_t2_ParamLimits

0x58e1,	// (0x0002026c) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a527) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a527) list_single_heading_pane_fp_t

0x89b4,	// (0x0002333f) aid_size_cell_fast

0x813f,	// (0x00022aca) soft_indicator_pane_cp1_t1

0x89f1,	// (0x0002337c) cell_app_pane_cp2_ParamLimits

0x89f1,	// (0x0002337c) cell_app_pane_cp2

0x6f69,	// (0x000218f4) fep_hwr_candidate_drop_down_list_pane

0x1f9d,	// (0x0001c928) fep_hwr_candidate_pane_g3_ParamLimits

0x1f9d,	// (0x0001c928) fep_hwr_candidate_pane_g3

0x1faa,	// (0x0001c935) fep_hwr_candidate_pane_g4_ParamLimits

0x1faa,	// (0x0001c935) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a49b) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a49b) fep_hwr_candidate_pane_g

0xc414,	// (0x00026d9f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc414,	// (0x00026d9f) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x000271b0) fep_vkb_candidate_pane_g3

0xc82d,	// (0x000271b8) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a4c8) fep_vkb_candidate_pane_g

0xc52d,	// (0x00026eb8) cell_hwr_candidate_pane_g1_ParamLimits

0xc844,	// (0x000271cf) cell_hwr_candidate_pane_g3_ParamLimits

0xc844,	// (0x000271cf) cell_hwr_candidate_pane_g3

0xc865,	// (0x000271f0) cell_hwr_candidate_pane_g4_ParamLimits

0xc865,	// (0x000271f0) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a4e2) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a4e2) cell_hwr_candidate_pane_g

0xc886,	// (0x00027211) cell_vkb_candidate_pane_g3_ParamLimits

0xc886,	// (0x00027211) cell_vkb_candidate_pane_g3

0xc8a1,	// (0x0002722c) cell_vkb_candidate_pane_g4_ParamLimits

0xc8a1,	// (0x0002722c) cell_vkb_candidate_pane_g4

0xc971,	// (0x000272fc) cell_app_pane_cp2_g1_ParamLimits

0xc971,	// (0x000272fc) cell_app_pane_cp2_g1

0xc98f,	// (0x0002731a) cell_app_pane_cp2_g2_ParamLimits

0xc98f,	// (0x0002731a) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a52c) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a52c) cell_app_pane_cp2_g

0xc99b,	// (0x00027326) cell_app_pane_cp2_t1_ParamLimits

0xc99b,	// (0x00027326) cell_app_pane_cp2_t1

0x87b5,	// (0x00023140) grid_highlight_pane_cp1_ParamLimits

0x87b5,	// (0x00023140) grid_highlight_pane_cp1

0x71a5,	// (0x00021b30) cell_hwr_candidate_pane_cp1_ParamLimits

0x71a5,	// (0x00021b30) cell_hwr_candidate_pane_cp1

0xc52d,	// (0x00026eb8) fep_hwr_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x00027338) fep_hwr_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x00027345) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a531) fep_hwr_candidate_drop_down_list_pane_g

0x71c4,	// (0x00021b4f) fep_hwr_candidate_drop_down_list_scroll_pane

0x71cd,	// (0x00021b58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71cd,	// (0x00021b58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71da,	// (0x00021b65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71da,	// (0x00021b65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71e7,	// (0x00021b72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71e7,	// (0x00021b72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc886,	// (0x00027211) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc886,	// (0x00027211) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8a1,	// (0x0002722c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8a1,	// (0x0002722c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71f4,	// (0x00021b7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71f4,	// (0x00021b7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x720f,	// (0x00021b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x720f,	// (0x00021b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x722a,	// (0x00021bb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x722a,	// (0x00021bb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a538) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a538) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9c7,	// (0x00027352) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9c7,	// (0x00027352) cell_vkb_candidate_pane_cp1

0xc52d,	// (0x00026eb8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) fep_vkb_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x00027338) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ad,	// (0x00027338) fep_vkb_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x00027345) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9ba,	// (0x00027345) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a531) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a531) fep_vkb_candidate_drop_down_list_pane_g

0xc9e7,	// (0x00027372) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e7,	// (0x00027372) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f4,	// (0x0002737f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f4,	// (0x0002737f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca01,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca01,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca0d,	// (0x00027398) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca0d,	// (0x00027398) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc844,	// (0x000271cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc844,	// (0x000271cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc865,	// (0x000271f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc865,	// (0x000271f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x000273a4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x000273a4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x000273c5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x000273c5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x000273e6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x000273e6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a549) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a549) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e70,	// (0x000227fb) title_pane_g1_ParamLimits

0x7e7d,	// (0x00022808) title_pane_g2_ParamLimits

0xf54e,	// (0x00029ed9) title_pane_g_ParamLimits

0x8e29,	// (0x000237b4) aid_call2_pane

0x8e31,	// (0x000237bc) aid_call_pane

0x8e39,	// (0x000237c4) popup_clock_analogue_window_g1

0x8e39,	// (0x000237c4) popup_clock_analogue_window_g2

0x610b,	// (0x00020a96) popup_clock_analogue_window_g3

0x6114,	// (0x00020a9f) popup_clock_analogue_window_g4

0x7e5c,	// (0x000227e7) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a083) popup_clock_analogue_window_g

0x611c,	// (0x00020aa7) popup_clock_analogue_window_t1

0x612a,	// (0x00020ab5) clock_digital_number_pane_ParamLimits

0x612a,	// (0x00020ab5) clock_digital_number_pane

0x6136,	// (0x00020ac1) clock_digital_number_pane_cp02_ParamLimits

0x6136,	// (0x00020ac1) clock_digital_number_pane_cp02

0x6142,	// (0x00020acd) clock_digital_number_pane_cp03_ParamLimits

0x6142,	// (0x00020acd) clock_digital_number_pane_cp03

0x614e,	// (0x00020ad9) clock_digital_number_pane_cp04_ParamLimits

0x614e,	// (0x00020ad9) clock_digital_number_pane_cp04

0x615a,	// (0x00020ae5) clock_digital_separator_pane_ParamLimits

0x615a,	// (0x00020ae5) clock_digital_separator_pane

0x6166,	// (0x00020af1) popup_clock_digital_window_t1_ParamLimits

0x6166,	// (0x00020af1) popup_clock_digital_window_t1

0x7e5c,	// (0x000227e7) clock_digital_number_pane_g1

0x7e5c,	// (0x000227e7) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a08e) clock_digital_number_pane_g

0x7e5c,	// (0x000227e7) clock_digital_separator_pane_g1

0x7e5c,	// (0x000227e7) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a08e) clock_digital_separator_pane_g

0x97bd,	// (0x00024148) aid_fill_nsta_ParamLimits

0x9903,	// (0x0002428e) indicator_nsta_pane_ParamLimits

0x9a7c,	// (0x00024407) popup_clock_analogue_window

0x9a7c,	// (0x00024407) popup_clock_digital_window

0x7f46,	// (0x000228d1) grid_indicator_nsta_pane_ParamLimits

0xbcc8,	// (0x00026653) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a41b) clock_nsta_pane_t

0x60cf,	// (0x00020a5a) aid_size_max_handle

0x60d9,	// (0x00020a64) aid_size_min_handle

0x944c,	// (0x00023dd7) editor_scroll_pane

0xca76,	// (0x00027401) ex_editor_pane

0x8922,	// (0x000232ad) scroll_pane_cp13

0x8754,	// (0x000230df) scroll_pane_cp14

0x8e68,	// (0x000237f3) scroll_pane_cp36

0x8e94,	// (0x0002381f) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e94,	// (0x0002381f) list_single_graphic_hl_pane_cp2

0xb26e,	// (0x00025bf9) list_single_graphic_hl_pane_ParamLimits

0xb26e,	// (0x00025bf9) list_single_graphic_hl_pane

0x58f7,	// (0x00020282) aid_size_min_hl_cp1

0xca7e,	// (0x00027409) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00027409) list_highlight_pane_cp34

0xca8f,	// (0x0002741a) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x0002741a) list_single_graphic_hl_pane_g1

0x5900,	// (0x0002028b) list_single_graphic_hl_pane_g2_ParamLimits

0x5900,	// (0x0002028b) list_single_graphic_hl_pane_g2

0x5900,	// (0x0002028b) list_single_graphic_hl_pane_g3_ParamLimits

0x5900,	// (0x0002028b) list_single_graphic_hl_pane_g3

0x590c,	// (0x00020297) list_single_graphic_hl_pane_g4_ParamLimits

0x590c,	// (0x00020297) list_single_graphic_hl_pane_g4

0x5918,	// (0x000202a3) list_single_graphic_hl_pane_g5_ParamLimits

0x5918,	// (0x000202a3) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a55a) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a55a) list_single_graphic_hl_pane_g

0x592c,	// (0x000202b7) list_single_graphic_hl_pane_t1_ParamLimits

0x592c,	// (0x000202b7) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00027427) aid_size_min_hl_cp2

0xcaa5,	// (0x00027430) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x00027430) list_highlight_pane_cp34_cp2

0xca8f,	// (0x0002741a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x0002741a) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x0002743d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x0002743d) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x00027449) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x00027449) list_single_graphic_hl_pane_g3_cp2

0xb9bc,	// (0x00026347) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb9bc,	// (0x00026347) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00027457) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00027457) list_single_graphic_hl_pane_g5_cp2

0x641a,	// (0x00020da5) control_pane_g4_ParamLimits

0x641a,	// (0x00020da5) control_pane_g4

0x979b,	// (0x00024126) bg_popup_sub_pane_cp10_ParamLimits

0xc2b9,	// (0x00026c44) list_choice_list_pane_ParamLimits

0xc2c8,	// (0x00026c53) scroll_pane_cp23

0x81cf,	// (0x00022b5a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f2,	// (0x0002727d) list_preview_fixed_pane_ParamLimits

0xc908,	// (0x00027293) list_preview_fixed_pane_cp_ParamLimits

0xc908,	// (0x00027293) list_preview_fixed_pane_cp

0xc914,	// (0x0002729f) popup_preview_fixed_window_g1_ParamLimits

0xc914,	// (0x0002729f) popup_preview_fixed_window_g1

0xc920,	// (0x000272ab) popup_preview_fixed_window_g2_ParamLimits

0xc920,	// (0x000272ab) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a4e9) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a4e9) popup_preview_fixed_window_g

0x6043,	// (0x000209ce) aid_navi_side_left_pane_ParamLimits

0x6058,	// (0x000209e3) aid_navi_side_right_pane_ParamLimits

0x6070,	// (0x000209fb) navi_icon_pane_stacon_ParamLimits

0x6084,	// (0x00020a0f) navi_navi_pane_stacon_ParamLimits

0x6070,	// (0x000209fb) navi_text_pane_stacon_ParamLimits

0x7e52,	// (0x000227dd) main_text_info_pane

0xcaf6,	// (0x00027481) listscroll_text_info_pane

0xcafe,	// (0x00027489) list_text_info_pane_ParamLimits

0xcafe,	// (0x00027489) list_text_info_pane

0xcb0d,	// (0x00027498) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00027498) scroll_pane_cp24

0xcb2b,	// (0x000274b6) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x000274b6) list_text_info_pane_t1

0x656e,	// (0x00020ef9) popup_fast_swap2_window_ParamLimits

0x656e,	// (0x00020ef9) popup_fast_swap2_window

0xcb5c,	// (0x000274e7) aid_size_cell_fast2

0x7e52,	// (0x000227dd) bg_popup_window_pane_cp17

0xa111,	// (0x00024a9c) heading_pane_cp2

0x841e,	// (0x00022da9) listscroll_fast2_pane

0xcb66,	// (0x000274f1) grid_fast2_pane

0xcb70,	// (0x000274fb) listscroll_fast2_pane_g1

0xcb78,	// (0x00027503) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a565) listscroll_fast2_pane_g

0x8922,	// (0x000232ad) scroll_pane_cp26

0xcb82,	// (0x0002750d) cell_fast2_pane_ParamLimits

0xcb82,	// (0x0002750d) cell_fast2_pane

0xcb97,	// (0x00027522) cell_fast2_pane_g1

0xcba0,	// (0x0002752b) cell_fast2_pane_g2

0xcba9,	// (0x00027534) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a56a) cell_fast2_pane_g

0x8511,	// (0x00022e9c) grid_highlight_pane_cp9

0x8526,	// (0x00022eb1) main_eswt_pane_ParamLimits

0x8526,	// (0x00022eb1) main_eswt_pane

0xcb22,	// (0x000274ad) list_single_text_info_pane

0xcbb1,	// (0x0002753c) eswt_ctrl_button_pane

0xcbb1,	// (0x0002753c) eswt_ctrl_canvas_pane

0xcbb9,	// (0x00027544) eswt_ctrl_combo_pane

0xcbb1,	// (0x0002753c) eswt_ctrl_default_pane

0xcbb1,	// (0x0002753c) eswt_ctrl_label_pane

0xcbc1,	// (0x0002754c) eswt_ctrl_wait_pane

0xcbc9,	// (0x00027554) eswt_shell_pane

0x7e52,	// (0x000227dd) listscroll_eswt_app_pane

0xcbe9,	// (0x00027574) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x00027574) popup_eswt_tasktip_window

0x9d19,	// (0x000246a4) bg_popup_window_pane_cp18

0xcbfa,	// (0x00027585) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00027585) eswt_control_pane_g1

0xcc07,	// (0x00027592) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00027592) eswt_control_pane_g2

0xcc14,	// (0x0002759f) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x0002759f) eswt_control_pane_g3

0xcc21,	// (0x000275ac) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x000275ac) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a571) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a571) eswt_control_pane_g

0x87b5,	// (0x00023140) bg_button_pane_ParamLimits

0x87b5,	// (0x00023140) bg_button_pane

0x8526,	// (0x00022eb1) common_borders_pane_copy2_ParamLimits

0x8526,	// (0x00022eb1) common_borders_pane_copy2

0xcc2e,	// (0x000275b9) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x000275b9) control_button_pane_g1

0xcc3a,	// (0x000275c5) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x000275c5) control_button_pane_g2

0xcc46,	// (0x000275d1) control_button_pane_g3_ParamLimits

0xcc46,	// (0x000275d1) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a57a) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a57a) control_button_pane_g

0xcc5a,	// (0x000275e5) control_button_pane_t1

0xcc68,	// (0x000275f3) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a581) control_button_pane_t

0x9ca5,	// (0x00024630) bg_button_pane_g1

0x9cad,	// (0x00024638) bg_button_pane_g2

0x9cb5,	// (0x00024640) bg_button_pane_g3

0x9cbd,	// (0x00024648) bg_button_pane_g4

0x9cc5,	// (0x00024650) bg_button_pane_g5

0x9ccd,	// (0x00024658) bg_button_pane_g6

0x9cd5,	// (0x00024660) bg_button_pane_g7

0x9cdd,	// (0x00024668) bg_button_pane_g8

0x9ce5,	// (0x00024670) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a1ea) bg_button_pane_g

0xc274,	// (0x00026bff) common_borders_pane_ParamLimits

0xc274,	// (0x00026bff) common_borders_pane

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy1

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy1

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy1

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy1

0xc2af,	// (0x00026c3a) bg_eswt_ctrl_canvas_pane_g1

0xc274,	// (0x00026bff) common_borders_pane_cp2_ParamLimits

0xc274,	// (0x00026bff) common_borders_pane_cp2

0xc274,	// (0x00026bff) common_borders_pane_cp3_ParamLimits

0xc274,	// (0x00026bff) common_borders_pane_cp3

0xcc76,	// (0x00027601) separator_horizontal_pane

0xcc7e,	// (0x00027609) separator_vertical_pane

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy2

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy2

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy2

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy2

0x7e52,	// (0x000227dd) common_borders_pane_cp4

0xcc87,	// (0x00027612) separator_horizontal_pane_g1

0xcc90,	// (0x0002761b) separator_horizontal_pane_g2

0xcc99,	// (0x00027624) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a586) separator_horizontal_pane_g

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy3

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy3

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy3

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy3

0x7e52,	// (0x000227dd) common_borders_pane_cp5

0xcca2,	// (0x0002762d) separator_vertical_pane_g1

0xccab,	// (0x00027636) separator_vertical_pane_g2

0xccb4,	// (0x0002763f) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a58d) separator_vertical_pane_g

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00027585) eswt_control_pane_g1_copy4

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00027592) eswt_control_pane_g2_copy4

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x0002759f) eswt_control_pane_g3_copy4

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x000275ac) eswt_control_pane_g4_copy4

0xccbd,	// (0x00027648) eswt_ctrl_combo_button_pane

0xccc5,	// (0x00027650) eswt_ctrl_input_pane

0xcccd,	// (0x00027658) popup_choice_list_window_cp70

0xccd5,	// (0x00027660) eswt_ctrl_input_pane_t1

0x7e52,	// (0x000227dd) input_focus_pane_cp70

0xc274,	// (0x00026bff) bg_button_pane_cp70_ParamLimits

0xc274,	// (0x00026bff) bg_button_pane_cp70

0xcce3,	// (0x0002766e) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x00027676) wait_bar_pane_cp70

0x9d19,	// (0x000246a4) bg_popup_window_pane_cp70_ParamLimits

0x9d19,	// (0x000246a4) bg_popup_window_pane_cp70

0xccf3,	// (0x0002767e) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00027694) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00027694) wait_bar_pane_cp71

0xcd15,	// (0x000276a0) grid_eswt_app_pane

0x8c4b,	// (0x000235d6) scroll_pane_cp70

0xcd1e,	// (0x000276a9) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x000276a9) cell_eswt_app_pane

0xcd4e,	// (0x000276d9) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x000276d9) cell_eswt_app_pane_g1

0xcd7d,	// (0x00027708) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00027708) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a594) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a594) cell_eswt_app_pane_g

0xcda6,	// (0x00027731) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00027731) cell_eswt_app_pane_t1

0xcdd8,	// (0x00027763) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00027763) grid_highlight_pane_cp70

0x9321,	// (0x00023cac) set_content_pane_g1

0x96f7,	// (0x00024082) status_small_volume_pane

0x7245,	// (0x00021bd0) status_small_volume_pane_g1

0x724d,	// (0x00021bd8) volume_small2_pane

0x7256,	// (0x00021be1) volume_small2_pane_g1

0x725f,	// (0x00021bea) volume_small2_pane_g2

0x7268,	// (0x00021bf3) volume_small2_pane_g3

0x7271,	// (0x00021bfc) volume_small2_pane_g4

0x727a,	// (0x00021c05) volume_small2_pane_g5

0x7283,	// (0x00021c0e) volume_small2_pane_g6

0x728c,	// (0x00021c17) volume_small2_pane_g7

0x7295,	// (0x00021c20) volume_small2_pane_g8

0x729e,	// (0x00021c29) volume_small2_pane_g9

0x72a7,	// (0x00021c32) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a599) volume_small2_pane_g

0xc675,	// (0x00027000) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x0002701b) fep_vkb_top_text_pane_t1_ParamLimits

0xc92c,	// (0x000272b7) popup_preview_fixed_window_g3_ParamLimits

0xc92c,	// (0x000272b7) popup_preview_fixed_window_g3

0x6a1d,	// (0x000213a8) popup_toolbar_trans_pane

0xb075,	// (0x00025a00) aid_height_set_list_ParamLimits

0xb086,	// (0x00025a11) aid_size_parent_ParamLimits

0x979b,	// (0x00024126) list_highlight_pane_cp2_ParamLimits

0x9321,	// (0x00023cac) set_content_pane_g1_ParamLimits

0xb28a,	// (0x00025c15) list_single_image_pane_ParamLimits

0xb28a,	// (0x00025c15) list_single_image_pane

0xcde4,	// (0x0002776f) aid_size_cell_image_ParamLimits

0xcde4,	// (0x0002776f) aid_size_cell_image

0xcdf1,	// (0x0002777c) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x0002777c) grid_single_image_pane

0x9ebc,	// (0x00024847) list_single_image_pane_g1_ParamLimits

0x9ebc,	// (0x00024847) list_single_image_pane_g1

0xcdfd,	// (0x00027788) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x00027788) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a5ae) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a5ae) list_single_image_pane_g

0xce11,	// (0x0002779c) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x0002779c) list_single_image_pane_t1

0xce27,	// (0x000277b2) cell_image_list_pane_ParamLimits

0xce27,	// (0x000277b2) cell_image_list_pane

0xce3b,	// (0x000277c6) cell_image_list_pane_g1

0xce44,	// (0x000277cf) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a5b3) cell_image_list_pane_g

0xce4d,	// (0x000277d8) aid_size_cell_tb_trans_pane

0x87b5,	// (0x00023140) bg_tb_trans_pane

0xce5f,	// (0x000277ea) grid_tb_trans_pane

0x9ca5,	// (0x00024630) bg_tb_trans_pane_g1

0x9cad,	// (0x00024638) bg_tb_trans_pane_g2

0x9cb5,	// (0x00024640) bg_tb_trans_pane_g3

0x9cbd,	// (0x00024648) bg_tb_trans_pane_g4

0x9cc5,	// (0x00024650) bg_tb_trans_pane_g5

0x9cdd,	// (0x00024668) bg_tb_trans_pane_g6

0x9ce5,	// (0x00024670) bg_tb_trans_pane_g7

0x9ccd,	// (0x00024658) bg_tb_trans_pane_g8

0x9cd5,	// (0x00024660) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a5b8) bg_tb_trans_pane_g

0xce73,	// (0x000277fe) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x000277fe) cell_toolbar_trans_pane

0xc2af,	// (0x00026c3a) cell_toolbar_trans_pane_g1

0xbe84,	// (0x0002680f) list_form2_midp_pane_t1

0xbe92,	// (0x0002681d) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a461) list_form2_midp_pane_t

0xbea0,	// (0x0002682b) scroll_pane_cp51_ParamLimits

0xc05c,	// (0x000269e7) form2_midp_wait_pane_g1

0xc065,	// (0x000269f0) form2_midp_wait_pane_g2

0xc06e,	// (0x000269f9) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a476) form2_midp_wait_pane_g

0x7f46,	// (0x000228d1) list_highlight_pane_cp21_ParamLimits

0xc0ba,	// (0x00026a45) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0c9,	// (0x00026a54) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5306,	// (0x0001fc91) list_single_2graphic_im_pane_ParamLimits

0x5306,	// (0x0001fc91) list_single_2graphic_im_pane

0xce99,	// (0x00027824) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x00027824) list_single_2graphic_im_pane_g1

0xceaa,	// (0x00027835) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x00027835) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00027841) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00027841) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a5cb) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a5cb) list_single_2graphic_im_pane_g

0xced6,	// (0x00027861) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00027861) list_single_2graphic_im_pane_t1

0xc938,	// (0x000272c3) list_single_graphic_2heading_pane_fp_ParamLimits

0xc938,	// (0x000272c3) list_single_graphic_2heading_pane_fp

0x5769,	// (0x000200f4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5769,	// (0x000200f4) list_single_graphic_2heading_pane_fp_g1

0xc94d,	// (0x000272d8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x000272d8) list_single_graphic_2heading_pane_fp_g2

0x5732,	// (0x000200bd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5732,	// (0x000200bd) list_single_graphic_2heading_pane_fp_g3

0x573e,	// (0x000200c9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x573e,	// (0x000200c9) list_single_graphic_2heading_pane_fp_g4

0xc959,	// (0x000272e4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc959,	// (0x000272e4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a4f9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a4f9) list_single_graphic_2heading_pane_fp_g

0x5942,	// (0x000202cd) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5942,	// (0x000202cd) list_single_graphic_2heading_pane_fp_t1

0x57a1,	// (0x0002012c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57a1,	// (0x0002012c) list_single_graphic_2heading_pane_fp_t2

0x5958,	// (0x000202e3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5958,	// (0x000202e3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a5d4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a5d4) list_single_graphic_2heading_pane_fp_t

0xc33b,	// (0x00026cc6) fep_hwr_write_pane_g5_ParamLimits

0xc33b,	// (0x00026cc6) fep_hwr_write_pane_g5

0xc347,	// (0x00026cd2) fep_hwr_write_pane_g6_ParamLimits

0xc347,	// (0x00026cd2) fep_hwr_write_pane_g6

0xcbc9,	// (0x00027554) eswt_shell_pane_ParamLimits

0x9d19,	// (0x000246a4) bg_popup_window_pane_cp18_ParamLimits

0xafce,	// (0x00025959) heading_pane_cp70

0xccf3,	// (0x0002767e) popup_eswt_tasktip_window_t1_ParamLimits

0x9812,	// (0x0002419d) aid_touch_tab_arrow_left

0x9821,	// (0x000241ac) aid_touch_tab_arrow_right

0x7e8e,	// (0x00022819) title_pane_g3_ParamLimits

0x7e8e,	// (0x00022819) title_pane_g3

0x8774,	// (0x000230ff) set_value_pane_g1

0x6a1d,	// (0x000213a8) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x000277d8) aid_size_cell_tb_trans_pane_ParamLimits

0x87b5,	// (0x00023140) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x000277ea) grid_tb_trans_pane_ParamLimits

0x81cf,	// (0x00022b5a) cont_note_pane_ParamLimits

0x81cf,	// (0x00022b5a) cont_note_pane

0x8526,	// (0x00022eb1) cont_snote2_single_text_pane_ParamLimits

0x8526,	// (0x00022eb1) cont_snote2_single_text_pane

0x8526,	// (0x00022eb1) cont_snote2_single_graphic_pane_ParamLimits

0x8526,	// (0x00022eb1) cont_snote2_single_graphic_pane

0xa32c,	// (0x00024cb7) cont_note_wait_pane_ParamLimits

0xa32c,	// (0x00024cb7) cont_note_wait_pane

0xa32c,	// (0x00024cb7) cont_note_image_pane_ParamLimits

0xa32c,	// (0x00024cb7) cont_note_image_pane

0xcf07,	// (0x00027892) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00027892) popup_note2_window_g1

0xcf38,	// (0x000278c3) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x000278c3) popup_note2_window_t1

0xcf7d,	// (0x00027908) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00027908) popup_note2_window_t2

0xcfc2,	// (0x0002794d) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x0002794d) popup_note2_window_t3

0xd007,	// (0x00027992) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00027992) popup_note2_window_t4

0x8253,	// (0x00022bde) popup_note2_window_t5_ParamLimits

0x8253,	// (0x00022bde) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a5e0) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a5e0) popup_note2_window_t

0xd036,	// (0x000279c1) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x000279c1) popup_note2_image_window_g1

0xd042,	// (0x000279cd) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x000279cd) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a5eb) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a5eb) popup_note2_image_window_g

0xd054,	// (0x000279df) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x000279df) popup_note2_image_window_t1

0xd06c,	// (0x000279f7) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x000279f7) popup_note2_image_window_t2

0xd084,	// (0x00027a0f) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00027a0f) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a5f0) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a5f0) popup_note2_image_window_t

0xa33a,	// (0x00024cc5) popup_note2_wait_window_g1_ParamLimits

0xa33a,	// (0x00024cc5) popup_note2_wait_window_g1

0xd0a0,	// (0x00027a2b) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00027a2b) popup_note2_wait_window_g2

0xa352,	// (0x00024cdd) popup_note2_wait_window_g3_ParamLimits

0xa352,	// (0x00024cdd) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a5f7) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a5f7) popup_note2_wait_window_g

0xd0ac,	// (0x00027a37) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x00027a37) popup_note2_wait_window_t1

0xd0ca,	// (0x00027a55) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x00027a55) popup_note2_wait_window_t2

0xd0e8,	// (0x00027a73) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00027a73) popup_note2_wait_window_t3

0xd0fa,	// (0x00027a85) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x00027a85) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a5fe) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a5fe) popup_note2_wait_window_t

0xd10c,	// (0x00027a97) wait_bar2_pane_ParamLimits

0xd10c,	// (0x00027a97) wait_bar2_pane

0xd124,	// (0x00027aaf) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00027aaf) popup_snote2_single_text_window_g1

0xd14c,	// (0x00027ad7) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x00027ad7) popup_snote2_single_text_window_t1

0xd198,	// (0x00027b23) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x00027b23) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00027b6f) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00027b6f) popup_snote2_single_text_window_t3

0xd225,	// (0x00027bb0) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x00027bb0) popup_snote2_single_text_window_t4

0xd25b,	// (0x00027be6) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x00027be6) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a607) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a607) popup_snote2_single_text_window_t

0xd286,	// (0x00027c11) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x00027c11) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00027c39) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00027c39) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a612) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a612) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00027c61) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00027c61) popup_snote2_single_graphic_window_t1

0xd322,	// (0x00027cad) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x00027cad) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00027b6f) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00027b6f) popup_snote2_single_graphic_window_t3

0xd225,	// (0x00027bb0) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x00027bb0) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x00027be6) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x00027be6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a617) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a617) popup_snote2_single_graphic_window_t

0xbd61,	// (0x000266ec) clock_nsta_pane_cp2_t1

0xbd61,	// (0x000266ec) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a437) clock_nsta_pane_cp2_t

0x4ee5,	// (0x0001f870) form_field_data_wide_pane_g1_ParamLimits

0x87c3,	// (0x0002314e) form_field_data_wide_pane_g2_ParamLimits

0x87c3,	// (0x0002314e) form_field_data_wide_pane_g2

0x87cf,	// (0x0002315a) form_field_data_wide_pane_g3_ParamLimits

0x87cf,	// (0x0002315a) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002a006) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002a006) form_field_data_wide_pane_g

0xbc64,	// (0x000265ef) grid_touch_3_pane_ParamLimits

0xbc64,	// (0x000265ef) grid_touch_3_pane

0xd36e,	// (0x00027cf9) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x00027cf9) cell_touch_3_pane

0xc2af,	// (0x00026c3a) cell_touch_3_pane_g1

0xc2af,	// (0x00026c3a) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a4bc) cell_touch_3_pane_g

0x8285,	// (0x00022c10) cont_query_data_pane

0x828d,	// (0x00022c18) cont_query_data_pane_cp1

0xd39c,	// (0x00027d27) button_value_adjust_pane_cp7

0xd3a4,	// (0x00027d2f) query_popup_pane_cp3

0x8f29,	// (0x000238b4) bg_popup_sub_pane_cp22_ParamLimits

0x6185,	// (0x00020b10) navi_navi_volume_pane_cp2

0x61a0,	// (0x00020b2b) popup_side_volume_key_window_g2

0x61af,	// (0x00020b3a) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a09c) popup_side_volume_key_window_g

0x61cc,	// (0x00020b57) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a0a3) popup_side_volume_key_window_t

0x91e0,	// (0x00023b6b) popup_side_volume_key_window_ParamLimits

0x4b46,	// (0x0001f4d1) list_double_graphic_pane_g4_ParamLimits

0x4b46,	// (0x0001f4d1) list_double_graphic_pane_g4

0x5345,	// (0x0001fcd0) list_single_2heading_msg_pane_ParamLimits

0x5345,	// (0x0001fcd0) list_single_2heading_msg_pane

0x5978,	// (0x00020303) list_single_2heading_msg_pane_g1_ParamLimits

0x5978,	// (0x00020303) list_single_2heading_msg_pane_g1

0x4975,	// (0x0001f300) list_single_2heading_msg_pane_g2_ParamLimits

0x4975,	// (0x0001f300) list_single_2heading_msg_pane_g2

0x5984,	// (0x0002030f) list_single_2heading_msg_pane_g3_ParamLimits

0x5984,	// (0x0002030f) list_single_2heading_msg_pane_g3

0x5990,	// (0x0002031b) list_single_2heading_msg_pane_g4_ParamLimits

0x5990,	// (0x0002031b) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a622) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a622) list_single_2heading_msg_pane_g

0x59a8,	// (0x00020333) list_single_2heading_msg_pane_t1_ParamLimits

0x59a8,	// (0x00020333) list_single_2heading_msg_pane_t1

0x59d0,	// (0x0002035b) list_single_2heading_msg_pane_t2_ParamLimits

0x59d0,	// (0x0002035b) list_single_2heading_msg_pane_t2

0x5a04,	// (0x0002038f) list_single_2heading_msg_pane_t3_ParamLimits

0x5a04,	// (0x0002038f) list_single_2heading_msg_pane_t3

0x5a3d,	// (0x000203c8) list_single_2heading_msg_pane_t4_ParamLimits

0x5a3d,	// (0x000203c8) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a62b) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a62b) list_single_2heading_msg_pane_t

0x7e9a,	// (0x00022825) title_pane_g4_ParamLimits

0x7e9a,	// (0x00022825) title_pane_g4

0x5f94,	// (0x0002091f) title_pane_stacon_g3_ParamLimits

0x5f94,	// (0x0002091f) title_pane_stacon_g3

0xceca,	// (0x00027855) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x00027855) list_single_2graphic_im_pane_g4

0xad8b,	// (0x00025716) popup_side_volume_key_window_cp

0xb5a6,	// (0x00025f31) main_idle_act2_pane_t1

0x6b0f,	// (0x0002149a) toolbar_button_pane_g10

0x871e,	// (0x000230a9) popup_toolbar_window_cp1

0xbd52,	// (0x000266dd) clock_nsta_pane_cp_t1

0xbd52,	// (0x000266dd) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a432) clock_nsta_pane_cp_t

0x6185,	// (0x00020b10) navi_navi_volume_pane_cp2_ParamLimits

0x6194,	// (0x00020b1f) popup_side_volume_key_window_g1_ParamLimits

0x61a0,	// (0x00020b2b) popup_side_volume_key_window_g2_ParamLimits

0x61af,	// (0x00020b3a) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a09c) popup_side_volume_key_window_g_ParamLimits

0x6f55,	// (0x000218e0) fep_hwr_aid_pane

0x1f8f,	// (0x0001c91a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30b,	// (0x00026c96) fep_hwr_top_pane_g1_ParamLimits

0xc31d,	// (0x00026ca8) fep_hwr_top_pane_g2_ParamLimits

0x700e,	// (0x00021999) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a487) fep_hwr_top_pane_g_ParamLimits

0x7023,	// (0x000219ae) fep_hwr_top_text_pane_ParamLimits

0xab4e,	// (0x000254d9) aid_touch_tab_arrow_arrow_2

0xab57,	// (0x000254e2) aid_touch_tab_arrow_left_2

0x6f69,	// (0x000218f4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fa0,	// (0x0002192b) fep_hwr_prediction_pane

0xc47d,	// (0x00026e08) fep_vkb_prediction_pane

0xc581,	// (0x00026f0c) fep_vkb_side_pane_g3_ParamLimits

0xc581,	// (0x00026f0c) fep_vkb_side_pane_g3

0xc52d,	// (0x00026eb8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9ad,	// (0x00027338) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ba,	// (0x00027345) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a531) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3c9,	// (0x00027d54) fep_hwr_prediction_pane_g1

0x72b0,	// (0x00021c3b) fep_hwr_prediction_pane_g2

0x72b8,	// (0x00021c43) fep_hwr_prediction_pane_g3

0x72c0,	// (0x00021c4b) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a634) fep_hwr_prediction_pane_g

0xd3c9,	// (0x00027d54) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x00027d5e) fep_vkb_prediction_pane_g2

0xd3db,	// (0x00027d66) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x00027d6e) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a63d) fep_vkb_prediction_pane_g

0x6dd5,	// (0x00021760) slider_set_pane_g3

0x6de9,	// (0x00021774) slider_set_pane_g4

0x6e01,	// (0x0002178c) slider_set_pane_g5

0x6dd5,	// (0x00021760) slider_set_pane_g6

0x6e17,	// (0x000217a2) slider_set_pane_g7

0xb1eb,	// (0x00025b76) slider_form_pane_g3

0xb1f4,	// (0x00025b7f) slider_form_pane_g4

0xb1fc,	// (0x00025b87) slider_form_pane_g5

0xb1eb,	// (0x00025b76) slider_form_pane_g6

0xb204,	// (0x00025b8f) slider_form_pane_g7

0xb850,	// (0x000261db) slider_set_pane_vc_g3

0xb859,	// (0x000261e4) slider_set_pane_vc_g4

0xb862,	// (0x000261ed) slider_set_pane_vc_g5

0xb850,	// (0x000261db) slider_set_pane_vc_g6

0xb86b,	// (0x000261f6) slider_set_pane_vc_g7

0xba37,	// (0x000263c2) slider_form_pane_vc_g1

0xba40,	// (0x000263cb) slider_form_pane_vc_g2

0xba49,	// (0x000263d4) slider_form_pane_vc_g3

0xba37,	// (0x000263c2) slider_form_pane_vc_g4

0xba52,	// (0x000263dd) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a404) slider_form_pane_vc_g

0x7e52,	// (0x000227dd) main_idle_act3_pane

0xd3eb,	// (0x00027d76) ai3_links_pane

0xd3f4,	// (0x00027d7f) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00027d7f) popup_ai3_data_window

0x7e52,	// (0x000227dd) grid_ai3_links_pane

0xd40e,	// (0x00027d99) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x00027d99) cell_ai3_links_pane

0xd426,	// (0x00027db1) bg_popup_sub_pane_cp11

0xd433,	// (0x00027dbe) cell_ai3_links_pane_g1

0x7e52,	// (0x000227dd) bg_popup_sub_pane_cp12

0xd458,	// (0x00027de3) heading_ai3_data_pane

0xd460,	// (0x00027deb) list_ai3_gene_pane

0xd46c,	// (0x00027df7) popup_ai3_data_window_g1

0xd474,	// (0x00027dff) heading_ai3_data_pane_g1

0xd47c,	// (0x00027e07) heading_ai3_data_pane_t1

0xd48a,	// (0x00027e15) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x00027e15) list_double_ai3_gene_pane

0xd497,	// (0x00027e22) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x00027e22) list_single_ai3_gene_pane

0xc274,	// (0x00026bff) list_highlight_pane_cp7_ParamLimits

0xc274,	// (0x00026bff) list_highlight_pane_cp7

0xd4a4,	// (0x00027e2f) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x00027e2f) list_single_a13_gene_pane_t1

0xd4bb,	// (0x00027e46) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x00027e4f) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a646) list_single_ai3_gene_pane_g

0xd4cc,	// (0x00027e57) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x00027e57) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x00027e63) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x00027e63) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00027e7f) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00027e7f) list_double_ai3_gene_pane_t2

0xd50a,	// (0x00027e95) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x00027e95) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a64b) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a64b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x596e,	// (0x000202f9) aid_size_min_col_2

0xd3b5,	// (0x00027d40) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x00027d40) aid_size_min_msg

0xc681,	// (0x0002700c) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x0002700c) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a4b7) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a4b7) fep_vkb_top_text_pane_g

0x7e52,	// (0x000227dd) main_hc_apps_shell_pane

0xd527,	// (0x00027eb2) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x00027eb2) grid_hc_apps_pane

0xd536,	// (0x00027ec1) list_hc_apps_pane

0xd53e,	// (0x00027ec9) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x00027ec9) scroll_pane_cp37

0xd54a,	// (0x00027ed5) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x00027ed5) cell_hc_apps_pane

0xd5f8,	// (0x00027f83) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x00027f83) cell_hc_apps_pane_g1

0xd629,	// (0x00027fb4) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00027fb4) cell_hc_apps_pane_g2

0xd645,	// (0x00027fd0) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x00027fd0) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a652) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a652) cell_hc_apps_pane_g

0xd667,	// (0x00027ff2) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00027ff2) cell_hc_apps_pane_t1

0x81cf,	// (0x00022b5a) grid_highlight_pane_cp10_ParamLimits

0x81cf,	// (0x00022b5a) grid_highlight_pane_cp10

0xd6a7,	// (0x00028032) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00028032) list_single_hc_apps_pane

0xd703,	// (0x0002808e) list_single_hc_apps_pane_g1

0x5a62,	// (0x000203ed) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a659) list_single_hc_apps_pane_g

0x5a7b,	// (0x00020406) list_single_hc_apps_pane_g2_copy1

0x5a97,	// (0x00020422) list_single_hc_apps_pane_t1

0x7f46,	// (0x000228d1) bg_set_opt_pane_cp_ParamLimits

0x5ebc,	// (0x00020847) setting_slider_pane_t1_ParamLimits

0x5ed5,	// (0x00020860) setting_slider_pane_t2_ParamLimits

0x5eef,	// (0x0002087a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00029ee9) setting_slider_pane_t_ParamLimits

0x5f07,	// (0x00020892) slider_set_pane_ParamLimits

0x642e,	// (0x00020db9) control_pane_g5_ParamLimits

0x642e,	// (0x00020db9) control_pane_g5

0xb03a,	// (0x000259c5) slider_set_pane_g1_ParamLimits

0x6dc9,	// (0x00021754) slider_set_pane_g2_ParamLimits

0x6dd5,	// (0x00021760) slider_set_pane_g3_ParamLimits

0x6de9,	// (0x00021774) slider_set_pane_g4_ParamLimits

0x6e01,	// (0x0002178c) slider_set_pane_g5_ParamLimits

0x6dd5,	// (0x00021760) slider_set_pane_g6_ParamLimits

0x6e17,	// (0x000217a2) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a2e8) slider_set_pane_g_ParamLimits

0x92cc,	// (0x00023c57) navi_icon_text_pane_ParamLimits

0x97d3,	// (0x0002415e) aid_fill_nsta_2_ParamLimits

0x9812,	// (0x0002419d) aid_touch_tab_arrow_left_ParamLimits

0x9821,	// (0x000241ac) aid_touch_tab_arrow_right_ParamLimits

0x988e,	// (0x00024219) clock_nsta_pane_ParamLimits

0xab30,	// (0x000254bb) navi_icon_pane_g1_ParamLimits

0xab3c,	// (0x000254c7) navi_text_pane_t1_ParamLimits

0xbe5e,	// (0x000267e9) navi_icon_text_pane_g1_ParamLimits

0xbe6a,	// (0x000267f5) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x0002808e) list_single_hc_apps_pane_g1_ParamLimits

0x5a62,	// (0x000203ed) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a659) list_single_hc_apps_pane_g_ParamLimits

0x5a7b,	// (0x00020406) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a97,	// (0x00020422) list_single_hc_apps_pane_t1_ParamLimits

0x5dc6,	// (0x00020751) popup_toolbar2_fixed_window_ParamLimits

0x5dc6,	// (0x00020751) popup_toolbar2_fixed_window

0x6a13,	// (0x0002139e) popup_toolbar2_float_window

0x7e52,	// (0x000227dd) bg_popup_sub_pane_cp27

0xd71c,	// (0x000280a7) grid_toolbar2_float_pane

0x7e52,	// (0x000227dd) bg_popup_sub_pane_cp26

0xd71c,	// (0x000280a7) grid_toolbar2_fixed_pane

0xd724,	// (0x000280af) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x000280af) cell_toolbar2_fixed_pane

0xd734,	// (0x000280bf) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x000280c8) toolbar2_fixed_button_pane

0x9ca5,	// (0x00024630) toolbar2_fixed_button_pane_g1

0x9cad,	// (0x00024638) toolbar2_fixed_button_pane_g2

0x9cb5,	// (0x00024640) toolbar2_fixed_button_pane_g3

0x9cbd,	// (0x00024648) toolbar2_fixed_button_pane_g4

0x9cc5,	// (0x00024650) toolbar2_fixed_button_pane_g5

0x9ccd,	// (0x00024658) toolbar2_fixed_button_pane_g6

0x9cd5,	// (0x00024660) toolbar2_fixed_button_pane_g7

0x9cdd,	// (0x00024668) toolbar2_fixed_button_pane_g8

0x9ce5,	// (0x00024670) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a1ea) toolbar2_fixed_button_pane_g

0xd745,	// (0x000280d0) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x000280d0) cell_toolbar2_float_pane

0xd756,	// (0x000280e1) cell_toolbar2_float_pane_g1

0xd73d,	// (0x000280c8) toolbar2_fixed_button_pane_cp

0xc3dd,	// (0x00026d68) fep_vkb_accented_list_pane_ParamLimits

0xc3dd,	// (0x00026d68) fep_vkb_accented_list_pane

0x7171,	// (0x00021afc) bg_popup_fep_shadow_pane_g9

0x944c,	// (0x00023dd7) bg_popup_fep_shadow_pane_cp3

0x8909,	// (0x00023294) list_accented_list_pane

0xd75f,	// (0x000280ea) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x000280ea) list_single_accented_list_pane

0x944c,	// (0x00023dd7) list_highlight_pane_cp10

0xd770,	// (0x000280fb) list_single_accented_list_pane_t1

0x6963,	// (0x000212ee) popup_slider_window_ParamLimits

0x6963,	// (0x000212ee) popup_slider_window

0xd3ac,	// (0x00027d37) aid_indentation_list_msg

0xd82a,	// (0x000281b5) bg_popup_window_pane_cp19

0xd894,	// (0x0002821f) popup_slider_window_g1

0xd8b0,	// (0x0002823b) popup_slider_window_g2

0xd8cc,	// (0x00028257) popup_slider_window_g3

0x0005,

0x001e,	// (0x0001a9a9) popup_slider_window_g

0xd928,	// (0x000282b3) popup_slider_window_t1

0xd99c,	// (0x00028327) small_volume_slider_vertical_pane

0xc2af,	// (0x00026c3a) small_volume_slider_vertical_pane_g1

0xc2af,	// (0x00026c3a) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00028343) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0002a65e) small_volume_slider_vertical_pane_g

0x5b88,	// (0x00020513) area_side_right_pane_ParamLimits

0x5b88,	// (0x00020513) area_side_right_pane

0x72c8,	// (0x00021c53) aid_size_side_button_ParamLimits

0x72c8,	// (0x00021c53) aid_size_side_button

0x72dc,	// (0x00021c67) grid_sctrl_middle_pane_ParamLimits

0x72dc,	// (0x00021c67) grid_sctrl_middle_pane

0x72fb,	// (0x00021c86) sctrl_sk_bottom_pane

0x730c,	// (0x00021c97) sctrl_sk_top_pane

0x731e,	// (0x00021ca9) aid_touch_sctrl_top

0x81cf,	// (0x00022b5a) bg_sctrl_sk_pane_ParamLimits

0x81cf,	// (0x00022b5a) bg_sctrl_sk_pane

0x732b,	// (0x00021cb6) sctrl_sk_top_pane_g1

0x7338,	// (0x00021cc3) sctrl_sk_top_pane_t1

0x731e,	// (0x00021ca9) aid_touch_sctrl_bottom

0x81cf,	// (0x00022b5a) bg_sctrl_sk_pane_cp_ParamLimits

0x81cf,	// (0x00022b5a) bg_sctrl_sk_pane_cp

0x7353,	// (0x00021cde) sctrl_sk_bottom_pane_g1

0x7338,	// (0x00021cc3) sctrl_sk_bottom_pane_t1

0x735c,	// (0x00021ce7) cell_sctrl_middle_pane_ParamLimits

0x735c,	// (0x00021ce7) cell_sctrl_middle_pane

0x7377,	// (0x00021d02) aid_touch_sctrl_middle_ParamLimits

0x7377,	// (0x00021d02) aid_touch_sctrl_middle

0x87b5,	// (0x00023140) bg_sctrl_middle_pane_ParamLimits

0x87b5,	// (0x00023140) bg_sctrl_middle_pane

0xc52d,	// (0x00026eb8) cell_sctrl_middle_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) cell_sctrl_middle_pane_g1

0x7389,	// (0x00021d14) cell_sctrl_middle_pane_g2_ParamLimits

0x7389,	// (0x00021d14) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0002a66a) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0002a66a) cell_sctrl_middle_pane_g

0x9ca5,	// (0x00024630) bg_sctrl_middle_pane_g1

0x9cad,	// (0x00024638) bg_sctrl_middle_pane_g2

0x9cb5,	// (0x00024640) bg_sctrl_middle_pane_g3

0x9cbd,	// (0x00024648) bg_sctrl_middle_pane_g4

0x9cc5,	// (0x00024650) bg_sctrl_middle_pane_g5

0x9ccd,	// (0x00024658) bg_sctrl_middle_pane_g6

0x9cd5,	// (0x00024660) bg_sctrl_middle_pane_g7

0x9cdd,	// (0x00024668) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0002a66f) bg_sctrl_middle_pane_g

0x9ce5,	// (0x00024670) bg_sctrl_middle_pane_g8_copy1

0x9ca5,	// (0x00024630) bg_sctrl_sk_pane_g1

0x9cad,	// (0x00024638) bg_sctrl_sk_pane_g2

0x9cb5,	// (0x00024640) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a1ea) bg_sctrl_sk_pane_g

0x86e4,	// (0x0002306f) aid_size_touch_scroll_bar

0x9cbd,	// (0x00024648) bg_sctrl_sk_pane_g4

0x9cc5,	// (0x00024650) bg_sctrl_sk_pane_g5

0x9ccd,	// (0x00024658) bg_sctrl_sk_pane_g6

0x9cd5,	// (0x00024660) bg_sctrl_sk_pane_g7

0x9cdd,	// (0x00024668) bg_sctrl_sk_pane_g8

0x9ce5,	// (0x00024670) bg_sctrl_sk_pane_g9

0x65cc,	// (0x00020f57) popup_fep_china_hwr2_fs_candidate_window

0x65d6,	// (0x00020f61) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x65d6,	// (0x00020f61) popup_fep_china_hwr2_fs_control_window

0xc52d,	// (0x00026eb8) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0002a665) sctrl_sk_top_pane_g

0xd9c1,	// (0x0002834c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x0002834c) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x0002835e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x0002835e) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x00028375) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x00028375) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x00028387) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x00028387) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00028397) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x0002839f) aid_fep_china_hwr2_fs_candi_cell

0x7e52,	// (0x000227dd) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x000283a9) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x000283b3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x000283b3) cell_fep_china_hwr2_fs_funtion_grid

0xc2af,	// (0x00026c3a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x000283cb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x000283cb) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x000283d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x000283d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x0052,	// (0x0001a9dd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x0052,	// (0x0001a9dd) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x000283ef) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x000283ef) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00028404) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00028404) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0057,	// (0x0001a9e2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0057,	// (0x0001a9e2) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x00028420) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00028428) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x00028430) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x005c,	// (0x0001a9e7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00028438) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00028438) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x00028451) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00028459) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2af,	// (0x00026c3a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2af,	// (0x00026c3a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a4bc) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x00028461) cell_fep_china_hwr2_fs_candidate_grid_t1

0x989b,	// (0x00024226) clock_nsta_pane_cp_24_ParamLimits

0x989b,	// (0x00024226) clock_nsta_pane_cp_24

0x9919,	// (0x000242a4) indicator_nsta_pane_cp_24_ParamLimits

0x9919,	// (0x000242a4) indicator_nsta_pane_cp_24

0xa9ac,	// (0x00025337) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a24f) heading_pane_g

0xb3ef,	// (0x00025d7a) grid_sct_catagory_button_pane

0xb41f,	// (0x00025daa) scroll_pane_cp5_ParamLimits

0xbeac,	// (0x00026837) button_value_adjust_pane_cp5_ParamLimits

0xbeac,	// (0x00026837) button_value_adjust_pane_cp5

0xbf8b,	// (0x00026916) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x0002846f) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x0002846f) cell_sct_catagory_button_pane

0xc274,	// (0x00026bff) bg_button_pane_cp01_ParamLimits

0xc274,	// (0x00026bff) bg_button_pane_cp01

0xc2af,	// (0x00026c3a) cell_sct_catagory_button_pane_g1

0x69a2,	// (0x0002132d) popup_tb_extension_window

0xdaf6,	// (0x00028481) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x00028481) aid_size_cell_ext

0x81cf,	// (0x00022b5a) bg_tb_trans_pane_cp1_ParamLimits

0x81cf,	// (0x00022b5a) bg_tb_trans_pane_cp1

0xdb16,	// (0x000284a1) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x000284a1) grid_tb_ext_pane

0xdb44,	// (0x000284cf) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x000284cf) cell_tb_ext_pane

0xdb5b,	// (0x000284e6) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x000284e6) cell_tb_ext_pane_g1

0xdb78,	// (0x00028503) cell_tb_ext_pane_t1

0x81cf,	// (0x00022b5a) list_highlight_pane_cp11_ParamLimits

0x81cf,	// (0x00022b5a) list_highlight_pane_cp11

0x5de5,	// (0x00020770) popup_uni_indicator_window_ParamLimits

0x5de5,	// (0x00020770) popup_uni_indicator_window

0x87b5,	// (0x00023140) bg_popup_sub_pane_cp14

0xdb93,	// (0x0002851e) list_uniindi_pane

0xdb9f,	// (0x0002852a) uniindi_top_pane

0x81cf,	// (0x00022b5a) bg_uniindi_top_pane

0xdbbe,	// (0x00028549) uniindi_top_pane_g1

0xdbd4,	// (0x0002855f) uniindi_top_pane_g2

0x0003,

0x0063,	// (0x0001a9ee) uniindi_top_pane_g

0xdbfe,	// (0x00028589) uniindi_top_pane_t1

0xdc28,	// (0x000285b3) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x000285b3) list_single_uniindi_pane

0xc2af,	// (0x00026c3a) bg_uniindi_top_pane_g1

0xdc3b,	// (0x000285c6) list_single_uniindi_pane_g1

0xdc4e,	// (0x000285d9) list_single_uniindi_pane_t1

0x7e52,	// (0x000227dd) control_bg_pane

0xdc73,	// (0x000285fe) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00028607) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00028610) control_bg_pane_g1

0xdc8e,	// (0x00028619) control_bg_pane_g2

0x0001,

0x006c,	// (0x0001a9f7) control_bg_pane_g

0xbd07,	// (0x00026692) cell_indicator_nsta_pane_g1_ParamLimits

0xbd15,	// (0x000266a0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a420) cell_indicator_nsta_pane_g_ParamLimits

0x571f,	// (0x000200aa) form2_midp_time_pane_t1_ParamLimits

0x8526,	// (0x00022eb1) main_idle_act4_pane_ParamLimits

0x8526,	// (0x00022eb1) main_idle_act4_pane

0x69a2,	// (0x0002132d) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x000284bf) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x000284bf) tb_ext_find_pane

0xdc97,	// (0x00028622) ai_gene_pane_1_cp1

0x9593,	// (0x00023f1e) ai_gene_pane_2_cp1

0xdc9f,	// (0x0002862a) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00028633) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x0002863c) list_single_idle_plugin_player_pane

0xdcba,	// (0x00028645) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00028645) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00028667) main_idle_act4_pane_t1

0xdcee,	// (0x00028679) main_idle_act4_pane_t2

0x0001,

0x0071,	// (0x0001a9fc) main_idle_act4_pane_t

0xdd00,	// (0x0002868b) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x0002868b) middle_sk_idle_act4_pane

0xdd16,	// (0x000286a1) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x000286bb) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x000286bb) shortcut_wheel_idle_act4_pane

0xc2af,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g1

0xc2af,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g2

0xc2af,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g3

0xc2af,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g4

0xc2af,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x000286cf) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x000286d7) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x000286df) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x000286e7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcf5,	// (0x0002a680) shortcut_wheel_idle_act4_pane_g

0xc52d,	// (0x00026eb8) middle_sk_idle_act4_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x0002874b) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x0002874b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd13,	// (0x0002a69e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd13,	// (0x0002a69e) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00028757) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00028757) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00028774) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00028774) grid_ai_shortcut_pane

0xde02,	// (0x0002878d) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x0002878d) list_highlight_pane_cp16

0xde0f,	// (0x0002879a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x0002879a) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x000287a6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x000287a6) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x000287be) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x000287be) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x009e,	// (0x0001aa29) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x009e,	// (0x0001aa29) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x000287d1) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x000287d1) cell_ai_shortcut_pane

0xde6a,	// (0x000287f5) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x000287f5) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00028622) ai_gene_pane_1_cp2

0xde8c,	// (0x00028817) ai_gene_pane_2_cp2

0xde94,	// (0x0002881f) list_highlight_pane_cp15

0xde9d,	// (0x00028828) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x0002881f) list_highlight_pane_cp17

0xdea5,	// (0x00028830) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00028838) list_single_idle_plugin_player_pane_g1

0xb648,	// (0x00025fd3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd18,	// (0x0002a6a3) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00028840) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x0002884e) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x0002885c) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x0002886a) list_single_idle_plugin_player_pane_t4

0x0003,

0x00aa,	// (0x0001aa35) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00028878) wait_bar_pane_cp15

0xdef5,	// (0x00028880) grid_ai_notification_pane

0xb648,	// (0x00025fd3) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00028889) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00028889) cell_ai_notification_pane

0xdf0b,	// (0x00028896) cell_ai_notification_pane_g1

0xdf13,	// (0x0002889e) cell_ai_notification_pane_t1

0xdf21,	// (0x000288ac) tb_ext_find_button_pane

0xdf29,	// (0x000288b4) tb_ext_find_pane_g1

0xdf31,	// (0x000288bc) tb_ext_find_pane_t1

0x8e39,	// (0x000237c4) tb_ext_find_button_pane_g1

0xdf3f,	// (0x000288ca) tb_ext_find_button_pane_g2

0x0001,

0xfd1d,	// (0x0002a6a8) tb_ext_find_button_pane_g

0xdcdc,	// (0x00028667) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00028679) main_idle_act4_pane_t2_ParamLimits

0x0071,	// (0x0001a9fc) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x000286a1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x000286af) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x000286af) sat_plugin_idle_act4_pane

0xdf48,	// (0x000288d3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x000288d3) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x000288e6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x000288e6) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x000288f9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x000288f9) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x0002890c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x0002890c) sat_plugin_idle_act4_pane_t4

0x0003,

0x00b8,	// (0x0001aa43) sat_plugin_idle_act4_pane_t_ParamLimits

0x00b8,	// (0x0001aa43) sat_plugin_idle_act4_pane_t

0x5d20,	// (0x000206ab) popup_battery_window_ParamLimits

0x5d20,	// (0x000206ab) popup_battery_window

0x81cf,	// (0x00022b5a) bg_popup_sub_pane_cp25_ParamLimits

0x81cf,	// (0x00022b5a) bg_popup_sub_pane_cp25

0xdf94,	// (0x0002891f) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x0002891f) popup_battery_window_g1

0xdfa0,	// (0x0002892b) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x0002892b) popup_battery_window_t1

0xdfb2,	// (0x0002893d) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x0002893d) popup_battery_window_t2

0x0001,

0x00c1,	// (0x0001aa4c) popup_battery_window_t_ParamLimits

0x00c1,	// (0x0001aa4c) popup_battery_window_t

0x9460,	// (0x00023deb) midp_canvas_pane_ParamLimits

0x94d7,	// (0x00023e62) midp_keypad_pane_ParamLimits

0x94d7,	// (0x00023e62) midp_keypad_pane

0x979b,	// (0x00024126) main_midp_pane_ParamLimits

0xbd70,	// (0x000266fb) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x0002895a) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x0002895a) aid_size_cell_midp_keypad

0xdfe9,	// (0x00028974) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00028974) midp_keyp_game_grid_pane

0xe009,	// (0x00028994) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00028994) midp_keyp_rocker_pane

0xe042,	// (0x000289cd) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x000289cd) midp_keyp_sk_left_pane

0xe09c,	// (0x00028a27) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00028a27) midp_keyp_sk_right_pane

0x7e52,	// (0x000227dd) bg_button_pane_cp03

0xe0f6,	// (0x00028a81) midp_keyp_sk_left_pane_g1

0x7e52,	// (0x000227dd) bg_button_pane_cp04

0xe0f6,	// (0x00028a81) midp_keyp_sk_right_pane_g1

0xc2af,	// (0x00026c3a) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x00028a8a) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x00028a8a) keyp_game_cell_pane

0x7e52,	// (0x000227dd) bg_button_pane_cp02

0xe112,	// (0x00028a9d) keyp_game_cell_pane_g1

0x5d64,	// (0x000206ef) popup_fep_vkb2_window_ParamLimits

0x5d64,	// (0x000206ef) popup_fep_vkb2_window

0x73a7,	// (0x00021d32) aid_size_cell_vkb2_ParamLimits

0x73a7,	// (0x00021d32) aid_size_cell_vkb2

0x73fb,	// (0x00021d86) popup_fep_vkb2_window_g1_ParamLimits

0x73fb,	// (0x00021d86) popup_fep_vkb2_window_g1

0x7443,	// (0x00021dce) vkb2_area_bottom_pane_ParamLimits

0x7443,	// (0x00021dce) vkb2_area_bottom_pane

0x748f,	// (0x00021e1a) vkb2_area_keypad_pane_ParamLimits

0x748f,	// (0x00021e1a) vkb2_area_keypad_pane

0x74d1,	// (0x00021e5c) vkb2_area_top_pane_ParamLimits

0x74d1,	// (0x00021e5c) vkb2_area_top_pane

0x754b,	// (0x00021ed6) vkb2_top_entry_pane_ParamLimits

0x754b,	// (0x00021ed6) vkb2_top_entry_pane

0x7575,	// (0x00021f00) vkb2_top_grid_left_pane_ParamLimits

0x7575,	// (0x00021f00) vkb2_top_grid_left_pane

0x7593,	// (0x00021f1e) vkb2_top_grid_right_pane_ParamLimits

0x7593,	// (0x00021f1e) vkb2_top_grid_right_pane

0x75b1,	// (0x00021f3c) vkb2_cell_keypad_pane_ParamLimits

0x75b1,	// (0x00021f3c) vkb2_cell_keypad_pane

0x7682,	// (0x0002200d) vkb2_area_bottom_grid_pane_ParamLimits

0x7682,	// (0x0002200d) vkb2_area_bottom_grid_pane

0x76a8,	// (0x00022033) vkb2_area_bottom_pane_g1_ParamLimits

0x76a8,	// (0x00022033) vkb2_area_bottom_pane_g1

0x76cc,	// (0x00022057) vkb2_area_bottom_pane_g2_ParamLimits

0x76cc,	// (0x00022057) vkb2_area_bottom_pane_g2

0x76fa,	// (0x00022085) vkb2_area_bottom_pane_g3_ParamLimits

0x76fa,	// (0x00022085) vkb2_area_bottom_pane_g3

0x0002,

0xfd22,	// (0x0002a6ad) vkb2_area_bottom_pane_g_ParamLimits

0xfd22,	// (0x0002a6ad) vkb2_area_bottom_pane_g

0x775b,	// (0x000220e6) vkb2_top_cell_left_pane_ParamLimits

0x775b,	// (0x000220e6) vkb2_top_cell_left_pane

0xe123,	// (0x00028aae) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x00028aae) vkb2_top_entry_pane_g1

0xe131,	// (0x00028abc) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x00028abc) vkb2_top_entry_pane_t1

0xe163,	// (0x00028aee) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x00028aee) vkb2_top_entry_pane_t2

0xe195,	// (0x00028b20) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x00028b20) vkb2_top_entry_pane_t3

0x0002,

0xfd29,	// (0x0002a6b4) vkb2_top_entry_pane_t_ParamLimits

0xfd29,	// (0x0002a6b4) vkb2_top_entry_pane_t

0x77a8,	// (0x00022133) vkb2_top_grid_right_pane_g1_ParamLimits

0x77a8,	// (0x00022133) vkb2_top_grid_right_pane_g1

0x77be,	// (0x00022149) vkb2_top_grid_right_pane_g2_ParamLimits

0x77be,	// (0x00022149) vkb2_top_grid_right_pane_g2

0x77d6,	// (0x00022161) vkb2_top_grid_right_pane_g3_ParamLimits

0x77d6,	// (0x00022161) vkb2_top_grid_right_pane_g3

0x77ee,	// (0x00022179) vkb2_top_grid_right_pane_g4_ParamLimits

0x77ee,	// (0x00022179) vkb2_top_grid_right_pane_g4

0x0003,

0xfd30,	// (0x0002a6bb) vkb2_top_grid_right_pane_g_ParamLimits

0xfd30,	// (0x0002a6bb) vkb2_top_grid_right_pane_g

0x7804,	// (0x0002218f) vkb2_top_cell_left_pane_g1

0x781b,	// (0x000221a6) vkb2_cell_keypad_pane_g1_ParamLimits

0x781b,	// (0x000221a6) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x00028b44) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x00028b44) vkb2_cell_keypad_pane_t1

0x7829,	// (0x000221b4) vkb2_cell_bottom_grid_pane_ParamLimits

0x7829,	// (0x000221b4) vkb2_cell_bottom_grid_pane

0x7862,	// (0x000221ed) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x000286ef) aid_call2_pane_cp02

0xdd6c,	// (0x000286f7) aid_call_pane_cp02

0xdd74,	// (0x000286ff) clock_digital_number_pane_cp10

0xdd7c,	// (0x00028707) clock_digital_number_pane_cp11

0xdd84,	// (0x0002870f) clock_digital_number_pane_cp12

0xdd8c,	// (0x00028717) clock_digital_number_pane_cp13

0xdd94,	// (0x0002871f) clock_digital_separator_pane_cp10

0x8e39,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g1

0x8e39,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00028727) popup_clock_digital_analogue_window_cp2_g3

0x8e39,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00028727) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd08,	// (0x0002a693) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x0002872f) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x0002873d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0094,	// (0x0001aa1f) popup_clock_digital_analogue_window_cp2_t

0xc2af,	// (0x00026c3a) clock_digital_number_pane_cp10_g1

0xc2af,	// (0x00026c3a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a4bc) clock_digital_number_pane_cp10_g

0xc2af,	// (0x00026c3a) clock_digital_separator_pane_cp10_g1

0xc2af,	// (0x00026c3a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a4bc) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x0002856b) uniindi_top_pane_g3

0xdbf1,	// (0x0002857c) uniindi_top_pane_g4

0x763c,	// (0x00021fc7) vkb2_row_keypad_pane_ParamLimits

0x763c,	// (0x00021fc7) vkb2_row_keypad_pane

0x787e,	// (0x00022209) vkb2_cell_t_keypad_pane_ParamLimits

0x787e,	// (0x00022209) vkb2_cell_t_keypad_pane

0x788e,	// (0x00022219) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x788e,	// (0x00022219) vkb2_cell_t_keypad_pane_cp08

0x78a1,	// (0x0002222c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78a1,	// (0x0002222c) vkb2_cell_t_keypad_pane_cp09

0x78b5,	// (0x00022240) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78b5,	// (0x00022240) vkb2_cell_t_keypad_pane_cp01

0x78c6,	// (0x00022251) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78c6,	// (0x00022251) vkb2_cell_t_keypad_pane_cp02

0x78d7,	// (0x00022262) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78d7,	// (0x00022262) vkb2_cell_t_keypad_pane_cp03

0x78e8,	// (0x00022273) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78e8,	// (0x00022273) vkb2_cell_t_keypad_pane_cp04

0x78f9,	// (0x00022284) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78f9,	// (0x00022284) vkb2_cell_t_keypad_pane_cp05

0x790a,	// (0x00022295) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x790a,	// (0x00022295) vkb2_cell_t_keypad_pane_cp06

0x791b,	// (0x000222a6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x791b,	// (0x000222a6) vkb2_cell_t_keypad_pane_cp07

0x792c,	// (0x000222b7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x792c,	// (0x000222b7) vkb2_cell_t_keypad_pane_cp10

0xc52d,	// (0x00026eb8) vkb2_cell_t_keypad_pane_g1

0xe1d0,	// (0x00028b5b) vkb2_cell_t_keypad_pane_t1

0x7e52,	// (0x000227dd) popup_grid_graphic2_window

0xe1e2,	// (0x00028b6d) aid_size_cell_graphic2_ParamLimits

0xe1e2,	// (0x00028b6d) aid_size_cell_graphic2

0xe21a,	// (0x00028ba5) bg_popup_window_pane_cp21_ParamLimits

0xe21a,	// (0x00028ba5) bg_popup_window_pane_cp21

0xe228,	// (0x00028bb3) graphic2_pages_pane_ParamLimits

0xe228,	// (0x00028bb3) graphic2_pages_pane

0xe26e,	// (0x00028bf9) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x00028bf9) grid_graphic2_control_pane

0xe2ac,	// (0x00028c37) grid_graphic2_pane_ParamLimits

0xe2ac,	// (0x00028c37) grid_graphic2_pane

0xe320,	// (0x00028cab) cell_graphic2_pane

0x7e52,	// (0x000227dd) main_comp_mode_pane

0xd460,	// (0x00027deb) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x000281b5) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x000281c1) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x000281c1) bg_touch_area_indi_pane

0xd84c,	// (0x000281d7) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x000281d7) bg_touch_area_indi_pane_cp01

0xd862,	// (0x000281ed) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x000281ed) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00028205) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00028205) bg_touch_area_indi_pane_cp03

0xd894,	// (0x0002821f) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x0002823b) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00028257) popup_slider_window_g3_ParamLimits

0x001e,	// (0x0001a9a9) popup_slider_window_g_ParamLimits

0xd928,	// (0x000282b3) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00028327) small_volume_slider_vertical_pane_ParamLimits

0xe320,	// (0x00028cab) cell_graphic2_pane_ParamLimits

0xe36f,	// (0x00028cfa) bg_button_pane_cp10_ParamLimits

0xe36f,	// (0x00028cfa) bg_button_pane_cp10

0xe382,	// (0x00028d0d) bg_button_pane_cp11_ParamLimits

0xe382,	// (0x00028d0d) bg_button_pane_cp11

0xe395,	// (0x00028d20) graphic2_pages_pane_g1_ParamLimits

0xe395,	// (0x00028d20) graphic2_pages_pane_g1

0xe3b0,	// (0x00028d3b) graphic2_pages_pane_g2_ParamLimits

0xe3b0,	// (0x00028d3b) graphic2_pages_pane_g2

0x0001,

0xfd3e,	// (0x0002a6c9) graphic2_pages_pane_g_ParamLimits

0xfd3e,	// (0x0002a6c9) graphic2_pages_pane_g

0xe3c8,	// (0x00028d53) graphic2_pages_pane_t1_ParamLimits

0xe3c8,	// (0x00028d53) graphic2_pages_pane_t1

0xe3e0,	// (0x00028d6b) cell_graphic2_control_pane_ParamLimits

0xe3e0,	// (0x00028d6b) cell_graphic2_control_pane

0xe3fe,	// (0x00028d89) cell_graphic2_pane_g1_ParamLimits

0xe3fe,	// (0x00028d89) cell_graphic2_pane_g1

0xe40b,	// (0x00028d96) cell_graphic2_pane_g2_ParamLimits

0xe40b,	// (0x00028d96) cell_graphic2_pane_g2

0xe418,	// (0x00028da3) cell_graphic2_pane_g3_ParamLimits

0xe418,	// (0x00028da3) cell_graphic2_pane_g3

0xe425,	// (0x00028db0) cell_graphic2_pane_g4_ParamLimits

0xe425,	// (0x00028db0) cell_graphic2_pane_g4

0xe432,	// (0x00028dbd) cell_graphic2_pane_g5_ParamLimits

0xe432,	// (0x00028dbd) cell_graphic2_pane_g5

0x0004,

0xfd43,	// (0x0002a6ce) cell_graphic2_pane_g_ParamLimits

0xfd43,	// (0x0002a6ce) cell_graphic2_pane_g

0xe44d,	// (0x00028dd8) cell_graphic2_pane_t1_ParamLimits

0xe44d,	// (0x00028dd8) cell_graphic2_pane_t1

0x9d19,	// (0x000246a4) grid_highlight_pane_cp11_ParamLimits

0x9d19,	// (0x000246a4) grid_highlight_pane_cp11

0x81cf,	// (0x00022b5a) bg_button_pane_cp05

0xe484,	// (0x00028e0f) cell_graphic2_control_pane_g1

0xc2af,	// (0x00026c3a) bg_touch_area_indi_pane_g1

0xe4ac,	// (0x00028e37) aid_cmod_rocker_key_size

0xe4b6,	// (0x00028e41) aid_cmode_itu_key_size

0xe4c0,	// (0x00028e4b) main_cmode_video_pane

0xe4ca,	// (0x00028e55) main_comp_mode_itu_pane

0xe4d6,	// (0x00028e61) main_comp_mode_rocker_pane

0xe503,	// (0x00028e8e) cell_cmode_rocker_pane_ParamLimits

0xe503,	// (0x00028e8e) cell_cmode_rocker_pane

0xe515,	// (0x00028ea0) cell_cmode_itu_pane_ParamLimits

0xe515,	// (0x00028ea0) cell_cmode_itu_pane

0x87b5,	// (0x00023140) bg_button_pane_cp06_ParamLimits

0x87b5,	// (0x00023140) bg_button_pane_cp06

0xc52d,	// (0x00026eb8) cell_cmode_rocker_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) cell_cmode_rocker_pane_g1

0xda40,	// (0x000283cb) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x000283cb) cell_cmode_rocker_pane_g2

0x0001,

0xfd53,	// (0x0002a6de) cell_cmode_rocker_pane_g_ParamLimits

0xfd53,	// (0x0002a6de) cell_cmode_rocker_pane_g

0x7e52,	// (0x000227dd) bg_button_pane_cp07

0xe52a,	// (0x00028eb5) cell_cmode_itu_pane_g1

0xe533,	// (0x00028ebe) cell_cmode_itu_pane_t1

0xe541,	// (0x00028ecc) cell_cmode_itu_pane_t2

0x0001,

0x00fc,	// (0x0001aa87) cell_cmode_itu_pane_t

0xdc63,	// (0x000285ee) aid_touch_ctrl_left

0xdc6b,	// (0x000285f6) aid_touch_ctrl_right

0x7e52,	// (0x000227dd) compa_mode_pane

0xe54f,	// (0x00028eda) aid_cmod_rocker_key_size_cp

0xe559,	// (0x00028ee4) aid_cmode_itu_key_size_cp

0xe563,	// (0x00028eee) compa_mode_pane_g1

0xe56b,	// (0x00028ef6) compa_mode_pane_g2

0xe573,	// (0x00028efe) compa_mode_pane_g3

0x0002,

0x0101,	// (0x0001aa8c) compa_mode_pane_g

0xe57b,	// (0x00028f06) main_comp_mode_itu_pane_cp

0xe583,	// (0x00028f0e) main_comp_mode_rocker_pane_cp

0xe58b,	// (0x00028f16) cell_cmode_itu_pane_cp_ParamLimits

0xe58b,	// (0x00028f16) cell_cmode_itu_pane_cp

0xe5a0,	// (0x00028f2b) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a0,	// (0x00028f2b) cell_cmode_rocker_pane_cp

0x87b5,	// (0x00023140) bg_button_pane_cp06_cp_ParamLimits

0x87b5,	// (0x00023140) bg_button_pane_cp06_cp

0xc52d,	// (0x00026eb8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc52d,	// (0x00026eb8) cell_cmode_rocker_pane_g1_cp

0xc2af,	// (0x00026c3a) cell_cmode_rocker_pane_g2_cp

0x7e52,	// (0x000227dd) bg_button_pane_cp07_cp

0xb1eb,	// (0x00025b76) cell_cmode_itu_pane_g1_cp

0xe5b2,	// (0x00028f3d) cell_cmode_itu_pane_t1_cp

0xe5b2,	// (0x00028f3d) cell_cmode_itu_pane_t2_cp

0xb1d8,	// (0x00025b63) settings_code_pane_cp2

0x7f46,	// (0x000228d1) bg_popup_window_pane_cp3_ParamLimits

0x83a9,	// (0x00022d34) heading_pane_cp3_ParamLimits

0x83b5,	// (0x00022d40) listscroll_popup_graphic_pane_ParamLimits

0x6f55,	// (0x000218e0) fep_hwr_aid_pane_ParamLimits

0x731e,	// (0x00021ca9) aid_touch_sctrl_top_ParamLimits

0x732b,	// (0x00021cb6) sctrl_sk_top_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0002a665) sctrl_sk_top_pane_g_ParamLimits

0x7338,	// (0x00021cc3) sctrl_sk_top_pane_t1_ParamLimits

0x731e,	// (0x00021ca9) aid_touch_sctrl_bottom_ParamLimits

0x7338,	// (0x00021cc3) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00028537) aid_area_touch_clock

0x7513,	// (0x00021e9e) aid_vkb2_area_top_pane_cell_ParamLimits

0x7513,	// (0x00021e9e) aid_vkb2_area_top_pane_cell

0x765e,	// (0x00021fe9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x765e,	// (0x00021fe9) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x00028aa6) popup_char_count_window

0xe5c0,	// (0x00028f4b) popup_char_count_window_g1

0xe5c9,	// (0x00028f54) popup_char_count_window_g2

0xe5d2,	// (0x00028f5d) popup_char_count_window_g3

0x0002,

0x0108,	// (0x0001aa93) popup_char_count_window_g

0xe5db,	// (0x00028f66) popup_char_count_window_t1

0x73d9,	// (0x00021d64) popup_fep_char_preview_window_ParamLimits

0x73d9,	// (0x00021d64) popup_fep_char_preview_window

0x7531,	// (0x00021ebc) vkb2_top_candi_pane_ParamLimits

0x7531,	// (0x00021ebc) vkb2_top_candi_pane

0xe5e9,	// (0x00028f74) cell_vkb2_top_candi_pane_ParamLimits

0xe5e9,	// (0x00028f74) cell_vkb2_top_candi_pane

0xa32c,	// (0x00024cb7) bg_popup_fep_char_preview_window_ParamLimits

0xa32c,	// (0x00024cb7) bg_popup_fep_char_preview_window

0x7941,	// (0x000222cc) popup_fep_char_preview_window_t1_ParamLimits

0x7941,	// (0x000222cc) popup_fep_char_preview_window_t1

0xe636,	// (0x00028fc1) bg_popup_fep_char_preview_window_g1

0xe63e,	// (0x00028fc9) bg_popup_fep_char_preview_window_g2

0xe646,	// (0x00028fd1) bg_popup_fep_char_preview_window_g3

0xe64e,	// (0x00028fd9) bg_popup_fep_char_preview_window_g4

0xe656,	// (0x00028fe1) bg_popup_fep_char_preview_window_g5

0x797b,	// (0x00022306) bg_popup_fep_char_preview_window_g6

0xe65e,	// (0x00028fe9) bg_popup_fep_char_preview_window_g7

0xe666,	// (0x00028ff1) bg_popup_fep_char_preview_window_g8

0xe66e,	// (0x00028ff9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd58,	// (0x0002a6e3) bg_popup_fep_char_preview_window_g

0xc52d,	// (0x00026eb8) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) cell_vkb2_top_candi_pane_g1

0xc844,	// (0x000271cf) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc844,	// (0x000271cf) cell_vkb2_top_candi_pane_g2

0xc865,	// (0x000271f0) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc865,	// (0x000271f0) cell_vkb2_top_candi_pane_g3

0x7983,	// (0x0002230e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7983,	// (0x0002230e) cell_vkb2_top_candi_pane_g4

0xe4e2,	// (0x00028e6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4e2,	// (0x00028e6d) cell_vkb2_top_candi_pane_g5

0xda40,	// (0x000283cb) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda40,	// (0x000283cb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd6b,	// (0x0002a6f6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd6b,	// (0x0002a6f6) cell_vkb2_top_candi_pane_g

0x79a4,	// (0x0002232f) cell_vkb2_top_candi_pane_t1

0x6db5,	// (0x00021740) aid_size_touch_slider_mark_ParamLimits

0x6db5,	// (0x00021740) aid_size_touch_slider_mark

0xe25e,	// (0x00028be9) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x00028be9) grid_graphic2_catg_pane

0xe2fc,	// (0x00028c87) popup_grid_graphic2_window_t1_ParamLimits

0xe2fc,	// (0x00028c87) popup_grid_graphic2_window_t1

0xe30e,	// (0x00028c99) popup_grid_graphic2_window_t2_ParamLimits

0xe30e,	// (0x00028c99) popup_grid_graphic2_window_t2

0x0001,

0xfd39,	// (0x0002a6c4) popup_grid_graphic2_window_t_ParamLimits

0xfd39,	// (0x0002a6c4) popup_grid_graphic2_window_t

0x81cf,	// (0x00022b5a) bg_button_pane_cp05_ParamLimits

0xe484,	// (0x00028e0f) cell_graphic2_control_pane_g1_ParamLimits

0xe676,	// (0x00029001) cell_graphic2_catg_pane_ParamLimits

0xe676,	// (0x00029001) cell_graphic2_catg_pane

0x7e52,	// (0x000227dd) bg_button_pane_cp12

0xe688,	// (0x00029013) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00028503) cell_tb_ext_pane_t1_ParamLimits

0x777b,	// (0x00022106) vkb2_top_cell_right_narrow_pane_ParamLimits

0x777b,	// (0x00022106) vkb2_top_cell_right_narrow_pane

0x7793,	// (0x0002211e) vkb2_top_cell_right_wide_pane_ParamLimits

0x7793,	// (0x0002211e) vkb2_top_cell_right_wide_pane

0x6f47,	// (0x000218d2) bg_vkb2_func_pane_ParamLimits

0x6f47,	// (0x000218d2) bg_vkb2_func_pane

0x7804,	// (0x0002218f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp03

0x7862,	// (0x000221ed) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cad,	// (0x00024638) bg_vkb2_func_pane_g1

0x9cb5,	// (0x00024640) bg_vkb2_func_pane_g2

0x9cc5,	// (0x00024650) bg_vkb2_func_pane_g3

0x9cbd,	// (0x00024648) bg_vkb2_func_pane_g4

0x9ccd,	// (0x00024658) bg_vkb2_func_pane_g5

0x9cd5,	// (0x00024660) bg_vkb2_func_pane_g6

0x9cdd,	// (0x00024668) bg_vkb2_func_pane_g7

0x9ce5,	// (0x00024670) bg_vkb2_func_pane_g8

0x9ca5,	// (0x00024630) bg_vkb2_func_pane_g9

0x0008,

0xfd78,	// (0x0002a703) bg_vkb2_func_pane_g

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp01

0x7804,	// (0x0002218f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7804,	// (0x0002218f) vkb2_top_cell_right_wide_pane_g1

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f47,	// (0x000218d2) bg_vkb2_fuc_pane_cp02

0x7862,	// (0x000221ed) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7862,	// (0x000221ed) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00028139) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00028139) aid_touch_area_decrease

0xd7cc,	// (0x00028157) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00028157) aid_touch_area_increase

0xd7d8,	// (0x00028163) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00028163) aid_touch_area_mute

0xd7fc,	// (0x00028187) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00028187) aid_touch_area_slider

0xd8e8,	// (0x00028273) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00028273) popup_slider_window_g4

0xd8f4,	// (0x0002827f) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x0002827f) popup_slider_window_g5

0xd916,	// (0x000282a1) popup_slider_window_g6_ParamLimits

0xd916,	// (0x000282a1) popup_slider_window_g6

0xd956,	// (0x000282e1) popup_slider_window_t2_ParamLimits

0xd956,	// (0x000282e1) popup_slider_window_t2

0x0001,

0x002b,	// (0x0001a9b6) popup_slider_window_t_ParamLimits

0x002b,	// (0x0001a9b6) popup_slider_window_t

0xd96e,	// (0x000282f9) slider_pane_ParamLimits

0xd96e,	// (0x000282f9) slider_pane

0xe691,	// (0x0002901c) slider_pane_g1_ParamLimits

0xe691,	// (0x0002901c) slider_pane_g1

0xe6a5,	// (0x00029030) slider_pane_g2_ParamLimits

0xe6a5,	// (0x00029030) slider_pane_g2

0xe6bb,	// (0x00029046) slider_pane_g3_ParamLimits

0xe6bb,	// (0x00029046) slider_pane_g3

0x0003,

0x0142,	// (0x0001aacd) slider_pane_g_ParamLimits

0x0142,	// (0x0001aacd) slider_pane_g

0x69fe,	// (0x00021389) popup_tb_float_extension_window_ParamLimits

0x69fe,	// (0x00021389) popup_tb_float_extension_window

0xe6e7,	// (0x00029072) aid_size_cell_tb_float_ext

0x7e52,	// (0x000227dd) bg_popup_sub_window_cp28

0xe6f3,	// (0x0002907e) grid_tb_float_ext_pane

0xe6fd,	// (0x00029088) cell_tb_float_ext_pane_ParamLimits

0xe6fd,	// (0x00029088) cell_tb_float_ext_pane

0xe717,	// (0x000290a2) cell_tb_float_ext_pane_g1

0xe720,	// (0x000290ab) grid_highlight_pane_cp12

0x7088,	// (0x00021a13) cell_last_hwr_side_pane_ParamLimits

0x7088,	// (0x00021a13) cell_last_hwr_side_pane

0xc2af,	// (0x00026c3a) cell_last_hwr_side_pane_g1

0xe729,	// (0x000290b4) cell_last_hwr_side_pane_g2

0x0001,

0xfd8b,	// (0x0002a716) cell_last_hwr_side_pane_g

0x772a,	// (0x000220b5) vkb2_area_bottom_space_btn_pane_ParamLimits

0x772a,	// (0x000220b5) vkb2_area_bottom_space_btn_pane

0xc52d,	// (0x00026eb8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d0,	// (0x00028b5b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79a4,	// (0x0002232f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79c3,	// (0x0002234e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79c3,	// (0x0002234e) vkb2_area_bottom_space_btn_pane_g1

0x79fd,	// (0x00022388) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79fd,	// (0x00022388) vkb2_area_bottom_space_btn_pane_g2

0x7a33,	// (0x000223be) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a33,	// (0x000223be) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd90,	// (0x0002a71b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd90,	// (0x0002a71b) vkb2_area_bottom_space_btn_pane_g

0x6ffc,	// (0x00021987) cel_fep_hwr_func_pane_ParamLimits

0x6ffc,	// (0x00021987) cel_fep_hwr_func_pane

0x7038,	// (0x000219c3) cell_hwr_side_button_pane_ParamLimits

0x7038,	// (0x000219c3) cell_hwr_side_button_pane

0xdbac,	// (0x00028537) aid_area_touch_clock_ParamLimits

0x81cf,	// (0x00022b5a) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00028549) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x0002855f) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x0002856b) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x0002857c) uniindi_top_pane_g4_ParamLimits

0x0063,	// (0x0001a9ee) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x00028589) uniindi_top_pane_t1_ParamLimits

0x81cf,	// (0x00022b5a) bg_vkb2_func_pane_cp01_ParamLimits

0x81cf,	// (0x00022b5a) bg_vkb2_func_pane_cp01

0xe732,	// (0x000290bd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe732,	// (0x000290bd) cel_fep_hwr_func_pane_g1

0x81cf,	// (0x00022b5a) bg_vkb2_func_pane_cp02_ParamLimits

0x81cf,	// (0x00022b5a) bg_vkb2_func_pane_cp02

0xe732,	// (0x000290bd) cell_hwr_side_button_pane_g1_ParamLimits

0xe732,	// (0x000290bd) cell_hwr_side_button_pane_g1

0x9b26,	// (0x000244b1) status_pane_g4_ParamLimits

0x9b26,	// (0x000244b1) status_pane_g4

0x9b40,	// (0x000244cb) status_pane_t1

0xbff4,	// (0x0002697f) form2_midp_gauge_slider_cont_pane

0xbffc,	// (0x00026987) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc00e,	// (0x00026999) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc020,	// (0x000269ab) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a46f) form2_midp_gauge_slider_pane_t_ParamLimits

0xc032,	// (0x000269bd) form2_midp_slider_pane_ParamLimits

0x7399,	// (0x00021d24) aid_size_cell_func_vkb2_ParamLimits

0x7399,	// (0x00021d24) aid_size_cell_func_vkb2

0xe6d3,	// (0x0002905e) slider_pane_g4_ParamLimits

0xe6d3,	// (0x0002905e) slider_pane_g4

0x7a7d,	// (0x00022408) form2_midp_gauge_slider_pane_t2_cp01

0x7a8b,	// (0x00022416) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a8b,	// (0x00022416) form2_midp_gauge_slider_pane_t3_cp01

0x7aa8,	// (0x00022433) form2_midp_slider_pane_cp01

0x7e52,	// (0x000227dd) navi_smil_pane

0xe76b,	// (0x000290f6) navi_smil_pane_g1

0xe773,	// (0x000290fe) navi_smil_pane_t1

0xe740,	// (0x000290cb) form2_midp_slider_pane_g1

0xe749,	// (0x000290d4) form2_midp_slider_pane_g2

0xe751,	// (0x000290dc) form2_midp_slider_pane_g3

0xe740,	// (0x000290cb) form2_midp_slider_pane_g4

0xe759,	// (0x000290e4) form2_midp_slider_pane_g5

0x0004,

0x0159,	// (0x0001aae4) form2_midp_slider_pane_g

0x7a6d,	// (0x000223f8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a6d,	// (0x000223f8) vkb2_area_bottom_space_btn_pane_g4

0x9955,	// (0x000242e0) lc0_navi_pane_ParamLimits

0x9955,	// (0x000242e0) lc0_navi_pane

0x99cb,	// (0x00024356) lc0_stat_indi_pane_ParamLimits

0x99cb,	// (0x00024356) lc0_stat_indi_pane

0x99e2,	// (0x0002436d) ls0_title_pane_ParamLimits

0x99e2,	// (0x0002436d) ls0_title_pane

0x87b5,	// (0x00023140) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x0002851e) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x0002852a) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x000285c6) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x000285d9) list_single_uniindi_pane_t1_ParamLimits

0x7ab1,	// (0x0002243c) lc0_stat_clock_pane_ParamLimits

0x7ab1,	// (0x0002243c) lc0_stat_clock_pane

0xe781,	// (0x0002910c) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x0002910c) lc0_stat_indi_pane_g1

0xe78e,	// (0x00029119) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x00029119) lc0_stat_indi_pane_g2

0x0001,

0x0164,	// (0x0001aaef) lc0_stat_indi_pane_g_ParamLimits

0x0164,	// (0x0001aaef) lc0_stat_indi_pane_g

0x7abe,	// (0x00022449) lc0_uni_indicator_pane_ParamLimits

0x7abe,	// (0x00022449) lc0_uni_indicator_pane

0xe79b,	// (0x00029126) ls0_title_pane_g1_ParamLimits

0xe79b,	// (0x00029126) ls0_title_pane_g1

0xe7af,	// (0x0002913a) ls0_title_pane_t1_ParamLimits

0xe7af,	// (0x0002913a) ls0_title_pane_t1

0x7acb,	// (0x00022456) lc0_uni_indicator_pane_g1_ParamLimits

0x7acb,	// (0x00022456) lc0_uni_indicator_pane_g1

0xe7e5,	// (0x00029170) lc0_stat_clock_pane_t1

0x7e52,	// (0x000227dd) main_ai5_pane

0xe7f3,	// (0x0002917e) ai5_sk_pane_ParamLimits

0xe7f3,	// (0x0002917e) ai5_sk_pane

0xe800,	// (0x0002918b) cell_ai5_widget_pane_ParamLimits

0xe800,	// (0x0002918b) cell_ai5_widget_pane

0xe8b2,	// (0x0002923d) aid_size_cell_widget_grid

0xe8c8,	// (0x00029253) bg_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x00029253) bg_ai5_widget_pane

0xe93c,	// (0x000292c7) cell_ai5_widget_pane_g2

0xe94c,	// (0x000292d7) cell_ai5_widget_pane_g3

0xe963,	// (0x000292ee) cell_ai5_widget_pane_g4

0xe96f,	// (0x000292fa) cell_ai5_widget_pane_g5

0xe97b,	// (0x00029306) cell_ai5_widget_pane_g6

0xe987,	// (0x00029312) cell_ai5_widget_pane_g7

0xe9cf,	// (0x0002935a) cell_ai5_widget_pane_t1_ParamLimits

0xe9cf,	// (0x0002935a) cell_ai5_widget_pane_t1

0xe9ec,	// (0x00029377) cell_ai5_widget_pane_t2_ParamLimits

0xe9ec,	// (0x00029377) cell_ai5_widget_pane_t2

0xea04,	// (0x0002938f) cell_ai5_widget_pane_t3_ParamLimits

0xea04,	// (0x0002938f) cell_ai5_widget_pane_t3

0xea1c,	// (0x000293a7) cell_ai5_widget_pane_t4_ParamLimits

0xea1c,	// (0x000293a7) cell_ai5_widget_pane_t4

0xea39,	// (0x000293c4) cell_ai5_widget_pane_t5_ParamLimits

0xea39,	// (0x000293c4) cell_ai5_widget_pane_t5

0xea58,	// (0x000293e3) cell_ai5_widget_pane_t6_ParamLimits

0xea58,	// (0x000293e3) cell_ai5_widget_pane_t6

0xea6a,	// (0x000293f5) cell_ai5_widget_pane_t7_ParamLimits

0xea6a,	// (0x000293f5) cell_ai5_widget_pane_t7

0xea83,	// (0x0002940e) cell_ai5_widget_pane_t8_ParamLimits

0xea83,	// (0x0002940e) cell_ai5_widget_pane_t8

0x0009,

0x017e,	// (0x0001ab09) cell_ai5_widget_pane_t_ParamLimits

0x017e,	// (0x0001ab09) cell_ai5_widget_pane_t

0xead7,	// (0x00029462) grid_ai5_widget_pane

0x87b5,	// (0x00023140) highlight_cell_ai5_widget_pane_ParamLimits

0x87b5,	// (0x00023140) highlight_cell_ai5_widget_pane

0xeaee,	// (0x00029479) ai5_sk_left_pane

0xeaf8,	// (0x00029483) ai5_sk_middle_pane

0xeb02,	// (0x0002948d) ai5_sk_right_pane

0xeb0c,	// (0x00029497) bg_ai5_widget_pane_g1_ParamLimits

0xeb0c,	// (0x00029497) bg_ai5_widget_pane_g1

0xeb18,	// (0x000294a3) bg_ai5_widget_pane_g2_ParamLimits

0xeb18,	// (0x000294a3) bg_ai5_widget_pane_g2

0xeb24,	// (0x000294af) bg_ai5_widget_pane_g3_ParamLimits

0xeb24,	// (0x000294af) bg_ai5_widget_pane_g3

0xeb30,	// (0x000294bb) bg_ai5_widget_pane_g4_ParamLimits

0xeb30,	// (0x000294bb) bg_ai5_widget_pane_g4

0xeb3c,	// (0x000294c7) bg_ai5_widget_pane_g5_ParamLimits

0xeb3c,	// (0x000294c7) bg_ai5_widget_pane_g5

0xeb48,	// (0x000294d3) bg_ai5_widget_pane_g6_ParamLimits

0xeb48,	// (0x000294d3) bg_ai5_widget_pane_g6

0xeb54,	// (0x000294df) bg_ai5_widget_pane_g7_ParamLimits

0xeb54,	// (0x000294df) bg_ai5_widget_pane_g7

0xeb60,	// (0x000294eb) bg_ai5_widget_pane_g8_ParamLimits

0xeb60,	// (0x000294eb) bg_ai5_widget_pane_g8

0xeb6c,	// (0x000294f7) bg_ai5_widget_pane_g9_ParamLimits

0xeb6c,	// (0x000294f7) bg_ai5_widget_pane_g9

0x0008,

0x0193,	// (0x0001ab1e) bg_ai5_widget_pane_g_ParamLimits

0x0193,	// (0x0001ab1e) bg_ai5_widget_pane_g

0xeb9e,	// (0x00029529) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb9e,	// (0x00029529) cell_shortcut_ai5_widget_pane

0x944c,	// (0x00023dd7) bg_cell_shortcut_ai5_widget_pane

0xebaf,	// (0x0002953a) cell_grid_ai5_widget_pane_g1

0x944c,	// (0x00023dd7) highlight_cell_shortcut_ai5_widget_pane

0x9cb5,	// (0x00024640) ai5_sk_left_pane_g1

0xebb8,	// (0x00029543) ai5_sk_left_pane_g2

0xebc0,	// (0x0002954b) ai5_sk_left_pane_g3

0xebc8,	// (0x00029553) ai5_sk_left_pane_g4

0x0003,

0xfd99,	// (0x0002a724) ai5_sk_left_pane_g

0xebd0,	// (0x0002955b) ai5_sk_left_pane_t1

0x9cad,	// (0x00024638) ai5_sk_right_pane_g1

0xebde,	// (0x00029569) ai5_sk_right_pane_g2

0xebe6,	// (0x00029571) ai5_sk_right_pane_g3

0xebee,	// (0x00029579) ai5_sk_right_pane_g4

0x0003,

0xfda2,	// (0x0002a72d) ai5_sk_right_pane_g

0xebf6,	// (0x00029581) ai5_sk_right_pane_t1

0x9cad,	// (0x00024638) ai5_sk_middle_pane_g1

0x9cb5,	// (0x00024640) ai5_sk_middle_pane_g2

0x9ccd,	// (0x00024658) ai5_sk_middle_pane_g3

0xebe6,	// (0x00029571) ai5_sk_middle_pane_g4

0xebc0,	// (0x0002954b) ai5_sk_middle_pane_g5

0xec04,	// (0x0002958f) ai5_sk_middle_pane_g6

0xec0c,	// (0x00029597) ai5_sk_middle_pane_g7

0x0006,

0xfdab,	// (0x0002a736) ai5_sk_middle_pane_g

0x97e1,	// (0x0002416c) aid_touch_area_size_lc0_ParamLimits

0x97e1,	// (0x0002416c) aid_touch_area_size_lc0

0x7187,	// (0x00021b12) cell_hwr_candidate_pane_t1_ParamLimits

0x97fd,	// (0x00024188) aid_touch_navi_pane

0x9ad0,	// (0x0002445b) status_dt_navi_pane_ParamLimits

0x9ad0,	// (0x0002445b) status_dt_navi_pane

0x9add,	// (0x00024468) status_dt_sta_pane_ParamLimits

0x9add,	// (0x00024468) status_dt_sta_pane

0xec14,	// (0x0002959f) dt_sta_controll_pane

0xec21,	// (0x000295ac) dt_sta_indi_pane

0xec32,	// (0x000295bd) dt_sta_title_pane

0x81cf,	// (0x00022b5a) bg_dt_sta_indi_pane_ParamLimits

0x81cf,	// (0x00022b5a) bg_dt_sta_indi_pane

0xec45,	// (0x000295d0) dt_sta_battery_pane

0xec4d,	// (0x000295d8) dt_sta_indi_pane_g1

0xec56,	// (0x000295e1) dt_sta_indi_pane_g2

0xec5f,	// (0x000295ea) dt_sta_indi_pane_g3

0x0002,

0x01c7,	// (0x0001ab52) dt_sta_indi_pane_g

0xec68,	// (0x000295f3) dt_sta_signal_pane

0x87b5,	// (0x00023140) bg_dt_sta_title_pane_ParamLimits

0x87b5,	// (0x00023140) bg_dt_sta_title_pane

0xec71,	// (0x000295fc) dt_sta_title_pane_g1

0xec79,	// (0x00029604) dt_sta_title_pane_t1_ParamLimits

0xec79,	// (0x00029604) dt_sta_title_pane_t1

0x7e52,	// (0x000227dd) bg_dt_sta_control_pane

0xec8e,	// (0x00029619) dt_sta_controll_pane_g1

0xec97,	// (0x00029622) bg_dt_sta_title_pane_g1

0xeca0,	// (0x0002962b) bg_dt_sta_title_pane_g2

0xeca9,	// (0x00029634) bg_dt_sta_title_pane_g3

0x0002,

0x01ce,	// (0x0001ab59) bg_dt_sta_title_pane_g

0xc2af,	// (0x00026c3a) bg_dt_sta_indi_pane_g1

0xecb2,	// (0x0002963d) dt_sta_signal_pane_g1

0xecba,	// (0x00029645) dt_sta_signal_pane_g2

0x0001,

0x01d5,	// (0x0001ab60) dt_sta_signal_pane_g

0xecc2,	// (0x0002964d) dt_sta_battery_pane_g1

0xeccb,	// (0x00029656) dt_sta_battery_pane_t1

0xc2af,	// (0x00026c3a) bg_dt_sta_control_pane_g1

0x8f4b,	// (0x000238d6) fep_china_uni_eep_pane

0x8f53,	// (0x000238de) fep_china_uni_entry_pane_ParamLimits

0x8f63,	// (0x000238ee) popup_fep_china_uni_window_g1_ParamLimits

0x8f73,	// (0x000238fe) popup_fep_china_uni_window_g2_ParamLimits

0x8f73,	// (0x000238fe) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a0a8) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a0a8) popup_fep_china_uni_window_g

0xecda,	// (0x00029665) fep_china_uni_eep_pane_g1

0xece2,	// (0x0002966d) fep_china_uni_eep_pane_t1

0xe762,	// (0x000290ed) aid_touch_area_size_smil_player

0x994d,	// (0x000242d8) lc0_clock_pane

0x9b34,	// (0x000244bf) status_pane_g5_ParamLimits

0x9b34,	// (0x000244bf) status_pane_g5

0x66c3,	// (0x0002104e) popup_keymap_window

0x9af2,	// (0x0002447d) status_icon_pane

0xe94c,	// (0x000292d7) cell_ai5_widget_pane_g3_ParamLimits

0xe963,	// (0x000292ee) cell_ai5_widget_pane_g4_ParamLimits

0xe96f,	// (0x000292fa) cell_ai5_widget_pane_g5_ParamLimits

0xe993,	// (0x0002931e) cell_ai5_widget_pane_g8_ParamLimits

0xe993,	// (0x0002931e) cell_ai5_widget_pane_g8

0xe9a7,	// (0x00029332) cell_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x00029332) cell_ai5_widget_pane_g9

0xe9bb,	// (0x00029346) cell_ai5_widget_pane_g10_ParamLimits

0xe9bb,	// (0x00029346) cell_ai5_widget_pane_g10

0xecf1,	// (0x0002967c) status_icon_pane_g1

0x7e52,	// (0x000227dd) bg_popup_sub_pane_cp13

0xecf9,	// (0x00029684) popup_keymap_window_t1

0x9721,	// (0x000240ac) control_pane_g6_ParamLimits

0x9721,	// (0x000240ac) control_pane_g6

0x972e,	// (0x000240b9) control_pane_g7_ParamLimits

0x972e,	// (0x000240b9) control_pane_g7

0x973b,	// (0x000240c6) control_pane_g8_ParamLimits

0x973b,	// (0x000240c6) control_pane_g8

0xec14,	// (0x0002959f) dt_sta_controll_pane_ParamLimits

0xec21,	// (0x000295ac) dt_sta_indi_pane_ParamLimits

0xec32,	// (0x000295bd) dt_sta_title_pane_ParamLimits

0x86ed,	// (0x00023078) aid_size_touch_scroll_bar_cale

0x5d34,	// (0x000206bf) popup_discreet_window_ParamLimits

0x5d34,	// (0x000206bf) popup_discreet_window

0x5dbc,	// (0x00020747) popup_sk_window

0xa32c,	// (0x00024cb7) bg_popup_sub_pane_cp28_ParamLimits

0xa32c,	// (0x00024cb7) bg_popup_sub_pane_cp28

0xed07,	// (0x00029692) popup_discreet_window_g1_ParamLimits

0xed07,	// (0x00029692) popup_discreet_window_g1

0xed27,	// (0x000296b2) popup_discreet_window_t1_ParamLimits

0xed27,	// (0x000296b2) popup_discreet_window_t1

0xed45,	// (0x000296d0) popup_discreet_window_t2_ParamLimits

0xed45,	// (0x000296d0) popup_discreet_window_t2

0x0002,

0x01da,	// (0x0001ab65) popup_discreet_window_t_ParamLimits

0x01da,	// (0x0001ab65) popup_discreet_window_t

0x7adf,	// (0x0002246a) popup_sk_window_g1

0x7ae9,	// (0x00022474) popup_sk_window_g2

0x0001,

0xfdba,	// (0x0002a745) popup_sk_window_g

0x7af1,	// (0x0002247c) popup_sk_window_t1

0x7aff,	// (0x0002248a) popup_sk_window_t1_copy1

0xe93c,	// (0x000292c7) cell_ai5_widget_pane_g2_ParamLimits

0xea95,	// (0x00029420) cell_ai5_widget_pane_t9_ParamLimits

0xea95,	// (0x00029420) cell_ai5_widget_pane_t9

0x7e52,	// (0x000227dd) main_fep_fshwr2_pane

0x7b0d,	// (0x00022498) aid_fshwr2_btn_pane

0x7b19,	// (0x000224a4) aid_fshwr2_syb_pane

0x7b25,	// (0x000224b0) aid_fshwr2_txt_pane

0x7b31,	// (0x000224bc) fshwr2_func_candi_pane

0x7b46,	// (0x000224d1) fshwr2_hwr_syb_pane

0x7b56,	// (0x000224e1) fshwr2_icf_pane

0x7e52,	// (0x000227dd) fshwr2_icf_bg_pane

0x7b7f,	// (0x0002250a) fshwr2_icf_pane_t1_ParamLimits

0x7b7f,	// (0x0002250a) fshwr2_icf_pane_t1

0x8e39,	// (0x000237c4) fshwr2_func_candi_pane_g1

0xed97,	// (0x00029722) fshwr2_func_candi_row_pane_ParamLimits

0xed97,	// (0x00029722) fshwr2_func_candi_row_pane

0x7b97,	// (0x00022522) cell_fshwr2_syb_pane_ParamLimits

0x7b97,	// (0x00022522) cell_fshwr2_syb_pane

0xc52d,	// (0x00026eb8) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) fshwr2_hwr_syb_pane_g1

0x7e52,	// (0x000227dd) bg_popup_call_pane_cp01

0x7bad,	// (0x00022538) fshwr2_func_candi_cell_pane_ParamLimits

0x7bad,	// (0x00022538) fshwr2_func_candi_cell_pane

0xeda7,	// (0x00029732) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda7,	// (0x00029732) fshwr2_func_candi_cell_bg_pane

0x7bf8,	// (0x00022583) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7bf8,	// (0x00022583) fshwr2_func_candi_cell_pane_g1

0x7c20,	// (0x000225ab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c20,	// (0x000225ab) fshwr2_func_candi_cell_pane_t1

0x7e52,	// (0x000227dd) bg_button_pane_cp08

0xedb3,	// (0x0002973e) cell_fshwr2_syb_bg_pane

0x7c33,	// (0x000225be) cell_fshwr2_syb_bg_pane_g1

0x7c3b,	// (0x000225c6) cell_fshwr2_syb_bg_pane_t1

0x87b5,	// (0x00023140) main_tmo_pane

0xae3b,	// (0x000257c6) uni_indicator_pane_g1_ParamLimits

0xae51,	// (0x000257dc) uni_indicator_pane_g2_ParamLimits

0xae67,	// (0x000257f2) uni_indicator_pane_g3_ParamLimits

0xae7a,	// (0x00025805) uni_indicator_pane_g4_ParamLimits

0xae7a,	// (0x00025805) uni_indicator_pane_g4

0xae8e,	// (0x00025819) uni_indicator_pane_g5_ParamLimits

0xae8e,	// (0x00025819) uni_indicator_pane_g5

0xae8e,	// (0x00025819) uni_indicator_pane_g6_ParamLimits

0xae8e,	// (0x00025819) uni_indicator_pane_g6

0xf91a,	// (0x0002a2a5) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00028115) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00028115) popup_tmo_note_window

0x87b5,	// (0x00023140) fshwr2_bg_pane

0x7c11,	// (0x0002259c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c11,	// (0x0002259c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdbf,	// (0x0002a74a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdbf,	// (0x0002a74a) fshwr2_func_candi_cell_pane_g

0xc2af,	// (0x00026c3a) bg_popup_window_pane_cp01

0x7c4a,	// (0x000225d5) bg_popup_window_pane_g1_cp01

0xedbb,	// (0x00029746) bg_popup_window_pane_cp22_ParamLimits

0xedbb,	// (0x00029746) bg_popup_window_pane_cp22

0xedc9,	// (0x00029754) listscroll_tmo_link_pane_ParamLimits

0xedc9,	// (0x00029754) listscroll_tmo_link_pane

0xee09,	// (0x00029794) popup_tmo_note_window_g1_ParamLimits

0xee09,	// (0x00029794) popup_tmo_note_window_g1

0xee16,	// (0x000297a1) tmo_note_info_pane_ParamLimits

0xee16,	// (0x000297a1) tmo_note_info_pane

0xee30,	// (0x000297bb) list_tmo_note_info_pane_g1_ParamLimits

0xee30,	// (0x000297bb) list_tmo_note_info_pane_g1

0xee47,	// (0x000297d2) list_tmo_note_info_pane_g2_ParamLimits

0xee47,	// (0x000297d2) list_tmo_note_info_pane_g2

0x0001,

0x01eb,	// (0x0001ab76) list_tmo_note_info_pane_g_ParamLimits

0x01eb,	// (0x0001ab76) list_tmo_note_info_pane_g

0xee63,	// (0x000297ee) list_tmo_note_info_text_pane_ParamLimits

0xee63,	// (0x000297ee) list_tmo_note_info_text_pane

0xeee4,	// (0x0002986f) list_tmo_link_pane

0xeef1,	// (0x0002987c) scroll_pane_cp20

0xeefe,	// (0x00029889) list_single_tmo_link_pane_ParamLimits

0xeefe,	// (0x00029889) list_single_tmo_link_pane

0xef0e,	// (0x00029899) list_single_tmo_link_pane_t1

0xef1c,	// (0x000298a7) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1c,	// (0x000298a7) list_tmo_note_info_text_pane_t1

0x886c,	// (0x000231f7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x886c,	// (0x000231f7) aid_size_touch_scroll_bar_cp01

0x4f48,	// (0x0001f8d3) aid_size_touch_slider_marker

0x5da4,	// (0x0002072f) popup_settings_window_ParamLimits

0x5da4,	// (0x0002072f) popup_settings_window

0x5117,	// (0x0001faa2) popup_candi_list_indi_window

0x97fd,	// (0x00024188) aid_touch_navi_pane_ParamLimits

0x72f2,	// (0x00021c7d) rs_clock_indi_pane

0x72fb,	// (0x00021c86) sctrl_sk_bottom_pane_ParamLimits

0x730c,	// (0x00021c97) sctrl_sk_top_pane_ParamLimits

0x73f3,	// (0x00021d7e) popup_fep_tooltip_window

0xe8b2,	// (0x0002923d) aid_size_cell_widget_grid_ParamLimits

0xe927,	// (0x000292b2) cell_ai5_widget_pane_g1_ParamLimits

0xe927,	// (0x000292b2) cell_ai5_widget_pane_g1

0xe97b,	// (0x00029306) cell_ai5_widget_pane_g6_ParamLimits

0xe987,	// (0x00029312) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0169,	// (0x0001aaf4) cell_ai5_widget_pane_g_ParamLimits

0x0169,	// (0x0001aaf4) cell_ai5_widget_pane_g

0xeab9,	// (0x00029444) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x00029444) cell_ai5_widget_pane_t10

0xead7,	// (0x00029462) grid_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00029503) cell_contacts_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00029503) cell_contacts_ai5_widget_pane

0xed5a,	// (0x000296e5) popup_discreet_window_t3_ParamLimits

0xed5a,	// (0x000296e5) popup_discreet_window_t3

0x7b6b,	// (0x000224f6) popup_fshwr2_char_preview_window_ParamLimits

0x7b6b,	// (0x000224f6) popup_fshwr2_char_preview_window

0xee81,	// (0x0002980c) tmo_note_info_pane_t1

0xee96,	// (0x00029821) tmo_note_info_pane_t2

0xeeab,	// (0x00029836) tmo_note_info_pane_t3

0xeec0,	// (0x0002984b) tmo_note_info_pane_t4

0xeed2,	// (0x0002985d) tmo_note_info_pane_t5

0x0004,

0x01f0,	// (0x0001ab7b) tmo_note_info_pane_t

0xeee4,	// (0x0002986f) list_tmo_link_pane_ParamLimits

0xeef1,	// (0x0002987c) scroll_pane_cp20_ParamLimits

0x7e52,	// (0x000227dd) bg_popup_fep_char_preview_window_cp01

0xef35,	// (0x000298c0) popup_fshwr2_char_preview_window_t1

0xef43,	// (0x000298ce) popup_candi_list_indi_window_g1

0xef4c,	// (0x000298d7) bg_cell_contacts_ai5_widget_pane

0xef58,	// (0x000298e3) cell_contacts_ai5_widget_pane_g1

0xc98f,	// (0x0002731a) cell_contacts_ai5_widget_pane_g2

0xef6d,	// (0x000298f8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfdc4,	// (0x0002a74f) cell_contacts_ai5_widget_pane_g

0xef79,	// (0x00029904) cell_contacts_ai5_widget_pane_t1

0x87b5,	// (0x00023140) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff0,	// (0x0002997b) settings_container_pane

0x944c,	// (0x00023dd7) listscroll_set_pane_copy1

0xb9b4,	// (0x0002633f) scroll_pane_cp121_copy1

0xa0dd,	// (0x00024a68) set_content_pane_copy1

0xeffc,	// (0x00029987) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00029987) aid_height_set_list_copy1

0xb086,	// (0x00025a11) aid_size_parent_copy1_ParamLimits

0xb086,	// (0x00025a11) aid_size_parent_copy1

0xf008,	// (0x00029993) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00029993) button_value_adjust_pane_cp6_copy1

0x979b,	// (0x00024126) list_highlight_pane_cp2_copy1_ParamLimits

0x979b,	// (0x00024126) list_highlight_pane_cp2_copy1

0xf01c,	// (0x000299a7) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x000299a7) list_set_pane_copy1

0xef8b,	// (0x00029916) main_pane_set_t1_copy1_ParamLimits

0xef8b,	// (0x00029916) main_pane_set_t1_copy1

0xefc5,	// (0x00029950) main_pane_set_t2_copy1_ParamLimits

0xefc5,	// (0x00029950) main_pane_set_t2_copy1

0xf0c9,	// (0x00029a54) main_pane_set_t3_copy1

0xf0d7,	// (0x00029a62) main_pane_set_t4_copy1

0xefe4,	// (0x0002996f) set_content_pane_g1_copy1_ParamLimits

0xefe4,	// (0x0002996f) set_content_pane_g1_copy1

0xf0e5,	// (0x00029a70) setting_code_pane_copy1

0xf0ed,	// (0x00029a78) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00029a78) setting_slider_pane_copy1

0xf0ed,	// (0x00029a78) setting_text_pane_copy1

0xf0ed,	// (0x00029a78) setting_volume_pane_copy1

0xf0e5,	// (0x00029a70) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00029a80) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00029a80) settings_code_pane_cp_copy1

0x7c53,	// (0x000225de) volume_set_pane_copy1

0xf109,	// (0x00029a94) volume_set_pane_g10_copy1

0xf111,	// (0x00029a9c) volume_set_pane_g1_copy1

0xf119,	// (0x00029aa4) volume_set_pane_g2_copy1

0xf121,	// (0x00029aac) volume_set_pane_g3_copy1

0xf129,	// (0x00029ab4) volume_set_pane_g4_copy1

0xf131,	// (0x00029abc) volume_set_pane_g5_copy1

0xf139,	// (0x00029ac4) volume_set_pane_g6_copy1

0xf141,	// (0x00029acc) volume_set_pane_g7_copy1

0xf149,	// (0x00029ad4) volume_set_pane_g8_copy1

0xf151,	// (0x00029adc) volume_set_pane_g9_copy1

0x7f46,	// (0x000228d1) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f46,	// (0x000228d1) bg_set_opt_pane_cp_copy1

0x7c5b,	// (0x000225e6) setting_slider_pane_t1_copy1_ParamLimits

0x7c5b,	// (0x000225e6) setting_slider_pane_t1_copy1

0x7c79,	// (0x00022604) setting_slider_pane_t2_copy1_ParamLimits

0x7c79,	// (0x00022604) setting_slider_pane_t2_copy1

0x7c93,	// (0x0002261e) setting_slider_pane_t3_copy1_ParamLimits

0x7c93,	// (0x0002261e) setting_slider_pane_t3_copy1

0x7cab,	// (0x00022636) slider_set_pane_copy1_ParamLimits

0x7cab,	// (0x00022636) slider_set_pane_copy1

0x880d,	// (0x00023198) set_opt_bg_pane_g1_copy2

0x8815,	// (0x000231a0) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00029ae4) set_opt_bg_pane_g3_copy2

0x8825,	// (0x000231b0) set_opt_bg_pane_g4_copy2

0x882d,	// (0x000231b8) set_opt_bg_pane_g5_copy2

0x8835,	// (0x000231c0) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00029aee) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00029af6) set_opt_bg_pane_g8_copy2

0xf175,	// (0x00029b00) set_opt_bg_pane_g9_copy2

0x7cc1,	// (0x0002264c) aid_size_touch_slider_mark_copy1_ParamLimits

0x7cc1,	// (0x0002264c) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00029b0a) slider_set_pane_g1_copy1

0x7cd5,	// (0x00022660) slider_set_pane_g2_copy1

0x6dd5,	// (0x00021760) slider_set_pane_g3_copy1_ParamLimits

0x6dd5,	// (0x00021760) slider_set_pane_g3_copy1

0x6de9,	// (0x00021774) slider_set_pane_g4_copy1_ParamLimits

0x6de9,	// (0x00021774) slider_set_pane_g4_copy1

0x6e01,	// (0x0002178c) slider_set_pane_g5_copy1_ParamLimits

0x6e01,	// (0x0002178c) slider_set_pane_g5_copy1

0x6dd5,	// (0x00021760) slider_set_pane_g6_copy1_ParamLimits

0x6dd5,	// (0x00021760) slider_set_pane_g6_copy1

0x7cdd,	// (0x00022668) slider_set_pane_g7_copy1_ParamLimits

0x7cdd,	// (0x00022668) slider_set_pane_g7_copy1

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x00029b13) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00029b1c) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00029b2c) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00029b3c) slider_set_pane_cp_copy1

0xf1c1,	// (0x00029b4c) input_focus_pane_cp1_copy1

0xf1ca,	// (0x00029b55) list_set_text_pane_copy1

0xf1d2,	// (0x00029b5d) setting_text_pane_g1_copy1

0x494e,	// (0x0001f2d9) set_text_pane_t1_copy1

0xf1c1,	// (0x00029b4c) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00029b5d) setting_code_pane_g1_copy1

0xf1db,	// (0x00029b66) setting_code_pane_t1_copy1

0xf1e9,	// (0x00029b74) list_set_graphic_pane_copy1

0x7e66,	// (0x000227f1) bg_set_opt_pane_cp4_copy1

0x9147,	// (0x00023ad2) list_set_graphic_pane_g1_copy1_ParamLimits

0x9147,	// (0x00023ad2) list_set_graphic_pane_g1_copy1

0xf1fc,	// (0x00029b87) list_set_graphic_pane_g2_copy1

0x915f,	// (0x00023aea) list_set_graphic_pane_t1_copy1_ParamLimits

0x915f,	// (0x00023aea) list_set_graphic_pane_t1_copy1

0xc2af,	// (0x00026c3a) rs_clock_indi_pane_g1

0xf204,	// (0x00029b8f) rs_clock_indi_pane_t1

0xf212,	// (0x00029b9d) rs_indi_pane

0xf21a,	// (0x00029ba5) rs_indi_pane_g1

0xf223,	// (0x00029bae) rs_indi_pane_g2

0xf22c,	// (0x00029bb7) rs_indi_pane_g3

0x0002,

0x0202,	// (0x0001ab8d) rs_indi_pane_g

0x944c,	// (0x00023dd7) bg_popup_preview_window_pane_cp03

0xf235,	// (0x00029bc0) popup_fep_tooltip_window_t1

0xcf2b,	// (0x000278b6) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x000278b6) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a5db) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a5db) popup_note2_window_g

0xd426,	// (0x00027db1) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x00027dbe) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x00027dd5) cell_ai3_links_pane_t1

0x494e,	// (0x0001f2d9) set_text_pane_t1_copy1_ParamLimits

0x935d,	// (0x00023ce8) cell_graphic_popup_pane_cp2_ParamLimits

0x935d,	// (0x00023ce8) cell_graphic_popup_pane_cp2

0xf243,	// (0x00029bce) cell_graphic_popup_pane_g1_cp2

0x8500,	// (0x00022e8b) cell_graphic_popup_pane_g2_cp2

0xf24b,	// (0x00029bd6) cell_graphic_popup_pane_g3_cp2

0xf253,	// (0x00029bde) cell_graphic_popup_pane_t2_cp2

0x8511,	// (0x00022e9c) grid_highlight_pane_cp3_cp2

0x8b52,	// (0x000234dd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87b5,	// (0x00023140) main_tmo_pane_ParamLimits

0xd77e,	// (0x00028109) popup_tmo_big_image_note_window

0xe916,	// (0x000292a1) cell_ai5_widget_list_pane

0xe91e,	// (0x000292a9) cell_ai5_widget_lrg_icon_pane

0xee81,	// (0x0002980c) tmo_note_info_pane_t1_ParamLimits

0xee96,	// (0x00029821) tmo_note_info_pane_t2_ParamLimits

0xeeab,	// (0x00029836) tmo_note_info_pane_t3_ParamLimits

0xeec0,	// (0x0002984b) tmo_note_info_pane_t4_ParamLimits

0xeed2,	// (0x0002985d) tmo_note_info_pane_t5_ParamLimits

0x01f0,	// (0x0001ab7b) tmo_note_info_pane_t_ParamLimits

0xeff0,	// (0x0002997b) settings_container_pane_ParamLimits

0xf1b9,	// (0x00029b44) indicator_popup_pane_cp5

0xf1b9,	// (0x00029b44) indicator_popup_pane_cp6

0xf1e9,	// (0x00029b74) list_set_graphic_pane_copy1_ParamLimits

0x7e52,	// (0x000227dd) bg_popup_window_pane_cp23

0xf261,	// (0x00029bec) popup_tmo_big_image_note_window_g1

0xf26b,	// (0x00029bf6) popup_tmo_big_image_note_window_t1

0xf27b,	// (0x00029c06) popup_tmo_big_image_note_window_t2

0xf28b,	// (0x00029c16) popup_tmo_big_image_note_window_t3

0x0002,

0x0209,	// (0x0001ab94) popup_tmo_big_image_note_window_t

0xc2af,	// (0x00026c3a) cell_ai5_widget_lrg_icon_pane_g1

0xf29b,	// (0x00029c26) cell_ai5_widget_lrg_icon_pane_t1

0xf2a9,	// (0x00029c34) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a9,	// (0x00029c34) cell_ai5_widget_list_row_pane

0xf2c0,	// (0x00029c4b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c0,	// (0x00029c4b) cell_ai5_widget_list_row_pane_g1

0xf2cd,	// (0x00029c58) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cd,	// (0x00029c58) cell_ai5_widget_list_row_pane_t1

0xf2fe,	// (0x00029c89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fe,	// (0x00029c89) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0210,	// (0x0001ab9b) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0210,	// (0x0001ab9b) cell_ai5_widget_list_row_pane_t

0x7e52,	// (0x000227dd) main_fep_vtchi_ss_pane

0xf342,	// (0x00029ccd) popup_fep_char_pre_window

0xf34a,	// (0x00029cd5) popup_fep_ituss_window

0xf36b,	// (0x00029cf6) popup_fep_vkbss_window

0xf395,	// (0x00029d20) grid_vkbss_keypad_pane_ParamLimits

0xf395,	// (0x00029d20) grid_vkbss_keypad_pane

0xf3a5,	// (0x00029d30) ituss_keypad_pane

0x7cff,	// (0x0002268a) aid_vkbss_key_offset_ParamLimits

0x7cff,	// (0x0002268a) aid_vkbss_key_offset

0x7d0b,	// (0x00022696) cell_vkbss_key_pane_ParamLimits

0x7d0b,	// (0x00022696) cell_vkbss_key_pane

0xf3b4,	// (0x00029d3f) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x00029d3f) bg_cell_vkbss_key_g1

0xf3c0,	// (0x00029d4b) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x00029d4b) cell_vkbss_key_3p_pane

0xf3d4,	// (0x00029d5f) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x00029d5f) cell_vkbss_key_g1

0xf3e8,	// (0x00029d73) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00029d73) cell_vkbss_key_t1

0x7d21,	// (0x000226ac) cell_ituss_key_pane_ParamLimits

0x7d21,	// (0x000226ac) cell_ituss_key_pane

0xf413,	// (0x00029d9e) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00029d9e) bg_cell_ituss_key_g1

0xf41f,	// (0x00029daa) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x00029daa) cell_ituss_key_pane_g1

0x7d32,	// (0x000226bd) cell_ituss_key_pane_g2_ParamLimits

0x7d32,	// (0x000226bd) cell_ituss_key_pane_g2

0x0002,

0xfdcb,	// (0x0002a756) cell_ituss_key_pane_g_ParamLimits

0xfdcb,	// (0x0002a756) cell_ituss_key_pane_g

0x7d5e,	// (0x000226e9) cell_ituss_key_t1_ParamLimits

0x7d5e,	// (0x000226e9) cell_ituss_key_t1

0x7d98,	// (0x00022723) cell_ituss_key_t2_ParamLimits

0x7d98,	// (0x00022723) cell_ituss_key_t2

0x7dc9,	// (0x00022754) cell_ituss_key_t3_ParamLimits

0x7dc9,	// (0x00022754) cell_ituss_key_t3

0x7d98,	// (0x00022723) cell_ituss_key_t4_ParamLimits

0x7d98,	// (0x00022723) cell_ituss_key_t4

0x0004,

0xfdd2,	// (0x0002a75d) cell_ituss_key_t_ParamLimits

0xfdd2,	// (0x0002a75d) cell_ituss_key_t

0xf44b,	// (0x00029dd6) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00029dde) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00029de6) cell_vkbss_key_3p_pane_g3

0x0002,

0x0229,	// (0x0001abb4) cell_vkbss_key_3p_pane_g

0x7e52,	// (0x000227dd) bg_popup_fep_char_preview_window_cp02

0x7e0c,	// (0x00022797) popup_fep_char_pre_window_t1

0xe8a8,	// (0x00029233) main_ai5_sk_pane

0xef4c,	// (0x000298d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef58,	// (0x000298e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98f,	// (0x0002731a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6d,	// (0x000298f8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfdc4,	// (0x0002a74f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef79,	// (0x00029904) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87b5,	// (0x00023140) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00029dee) main_ai5_sk_pane_g1

0xa165,	// (0x00024af0) popup_query_code_window_g1

0xf360,	// (0x00029ceb) popup_fep_vkb_icf_pane

0xf37f,	// (0x00029d0a) popup_fep_vtchi_icf_pane

0xf46c,	// (0x00029df7) bg_icf_pane

0xf478,	// (0x00029e03) list_vkb_icf_pane

0xf487,	// (0x00029e12) bg_icf_pane_cp01

0xf49a,	// (0x00029e25) vtchi_icf_list_pane

0xf4aa,	// (0x00029e35) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x00029e35) list_vkb_icf_pane_t1

0xf4c0,	// (0x00029e4b) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x00029e4b) vtchi_icf_list_pane_t1

0xf34a,	// (0x00029cd5) popup_fep_ituss_window_ParamLimits

0xf37f,	// (0x00029d0a) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x00029d30) ituss_keypad_pane_ParamLimits

0x7cf3,	// (0x0002267e) ituss_sks_pane

0xf46c,	// (0x00029df7) bg_icf_pane_ParamLimits

0xf326,	// (0x00029cb1) icf_edit_indi_pane_ParamLimits

0xf326,	// (0x00029cb1) icf_edit_indi_pane

0xf478,	// (0x00029e03) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x00029e12) bg_icf_pane_cp01_ParamLimits

0xf335,	// (0x00029cc0) icf_edit_indi_pane_cp01_ParamLimits

0xf335,	// (0x00029cc0) icf_edit_indi_pane_cp01

0xf4a2,	// (0x00029e2d) vtchi_query_pane

0xc52d,	// (0x00026eb8) icf_edit_indi_pane_g1_ParamLimits

0xc52d,	// (0x00026eb8) icf_edit_indi_pane_g1

0xf531,	// (0x00029ebc) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00029ebc) icf_edit_indi_pane_g2

0x0001,

0xfde2,	// (0x0002a76d) icf_edit_indi_pane_g_ParamLimits

0xfde2,	// (0x0002a76d) icf_edit_indi_pane_g

0xf540,	// (0x00029ecb) icf_edit_indi_pane_t1

0xf4da,	// (0x00029e65) bg_input_focus_pane_cp042

0x86e4,	// (0x0002306f) vtchi_button_pane

0xf4e3,	// (0x00029e6e) vtchi_query_pane_t1

0xf4f1,	// (0x00029e7c) vtchi_query_pane_t2

0xf4ff,	// (0x00029e8a) vtchi_query_pane_t3

0x0002,

0x0230,	// (0x0001abbb) vtchi_query_pane_t

0x7e52,	// (0x000227dd) bg_button_pane_cp13

0xf50d,	// (0x00029e98) vtchi_button_pane_g1

0x7e1b,	// (0x000227a6) ituss_sks_pane_g1

0x7e26,	// (0x000227b1) ituss_sks_pane_g2

0x0001,

0xfddd,	// (0x0002a768) ituss_sks_pane_g

0xf515,	// (0x00029ea0) ituss_sks_pane_t1

0xf523,	// (0x00029eae) ituss_sks_pane_t2

0x0001,

0x023c,	// (0x0001abc7) ituss_sks_pane_t

0xbd3a,	// (0x000266c5) indicator_nsta_pane_cp_g1

0xbd42,	// (0x000266cd) indicator_nsta_pane_cp_g2

0xbd4a,	// (0x000266d5) indicator_nsta_pane_cp_g3

0xbd3a,	// (0x000266c5) indicator_nsta_pane_cp_g4

0xbd42,	// (0x000266cd) indicator_nsta_pane_cp_g5

0xbd4a,	// (0x000266d5) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a425) indicator_nsta_pane_cp_g

0xe471,	// (0x00028dfc) cell_graphic2_pane_t2_ParamLimits

0xe471,	// (0x00028dfc) cell_graphic2_pane_t2

0x0001,

0xfd4e,	// (0x0002a6d9) cell_graphic2_pane_t_ParamLimits

0xfd4e,	// (0x0002a6d9) cell_graphic2_pane_t

0xe49e,	// (0x00028e29) cell_graphic2_control_pane_t1

0x8efa,	// (0x00023885) signal_pane_g3_ParamLimits

0x8efa,	// (0x00023885) signal_pane_g3

0x8f0c,	// (0x00023897) signal_pane_g4_ParamLimits

0x8f0c,	// (0x00023897) signal_pane_g4

0xf310,	// (0x00029c9b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf310,	// (0x00029c9b) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00029dc4) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00029dc4) cell_ituss_key_pane_t1

0x9daa,	// (0x00024735) form_field_data_wide_pane_vc_t2_ParamLimits

0x9daa,	// (0x00024735) form_field_data_wide_pane_vc_t2

0x9dbe,	// (0x00024749) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dbe,	// (0x00024749) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a18d) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a18d) form_field_data_wide_pane_vc_t

0xba02,	// (0x0002638d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba02,	// (0x0002638d) form_field_slider_wide_pane_vc_t3

0xbae0,	// (0x0002646b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbae0,	// (0x0002646b) form_field_popup_wide_pane_vc_t2

0xbaf7,	// (0x00026482) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaf7,	// (0x00026482) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a414) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a414) form_field_popup_wide_pane_vc_t

0x7b0d,	// (0x00022498) aid_fshwr2_btn_pane_ParamLimits

0x7b19,	// (0x000224a4) aid_fshwr2_syb_pane_ParamLimits

0x7b25,	// (0x000224b0) aid_fshwr2_txt_pane_ParamLimits

0x87b5,	// (0x00023140) fshwr2_bg_pane_ParamLimits

0x7b31,	// (0x000224bc) fshwr2_func_candi_pane_ParamLimits

0x7b46,	// (0x000224d1) fshwr2_hwr_syb_pane_ParamLimits

0x7b56,	// (0x000224e1) fshwr2_icf_pane_ParamLimits

0x5686,	// (0x00020011) list_double_graphic_pane_vc_g4_ParamLimits

0x5686,	// (0x00020011) list_double_graphic_pane_vc_g4

0x7d52,	// (0x000226dd) cell_ituss_key_pane_g3_ParamLimits

0x7d52,	// (0x000226dd) cell_ituss_key_pane_g3

0x7dfa,	// (0x00022785) cell_ituss_key_t5_ParamLimits

0x7dfa,	// (0x00022785) cell_ituss_key_t5

0xf36b,	// (0x00029cf6) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
