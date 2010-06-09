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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001eff3 };

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
0xd0ba,	// (0x0002c0ad) Screen

0xd0c6,	// (0x0002c0b9) application_window_ParamLimits

0xd0c6,	// (0x0002c0b9) application_window

0x37f4,	// (0x000227e7) screen_g1

0xc02c,	// (0x0002b01f) area_bottom_pane_ParamLimits

0xc02c,	// (0x0002b01f) area_bottom_pane

0x1569,	// (0x0002055c) area_top_pane_ParamLimits

0x1569,	// (0x0002055c) area_top_pane

0x15fd,	// (0x000205f0) main_pane_ParamLimits

0x15fd,	// (0x000205f0) main_pane

0x37fe,	// (0x000227f1) misc_graphics

0xd802,	// (0x0002c7f5) battery_pane_ParamLimits

0xd802,	// (0x0002c7f5) battery_pane

0x5e9d,	// (0x00024e90) bg_status_flat_pane_g8

0x5ea5,	// (0x00024e98) bg_status_flat_pane_g9

0x528b,	// (0x0002427e) context_pane_ParamLimits

0x528b,	// (0x0002427e) context_pane

0xd96d,	// (0x0002c960) navi_pane_ParamLimits

0xd96d,	// (0x0002c960) navi_pane

0xda29,	// (0x0002ca1c) signal_pane_ParamLimits

0xda29,	// (0x0002ca1c) signal_pane

0x0008,

0xf86d,	// (0x0002e860) bg_status_flat_pane_g

0xdab9,	// (0x0002caac) status_pane_g1_ParamLimits

0xdab9,	// (0x0002caac) status_pane_g1

0xdacf,	// (0x0002cac2) status_pane_g2_ParamLimits

0xdacf,	// (0x0002cac2) status_pane_g2

0x54b2,	// (0x000244a5) status_pane_g3_ParamLimits

0x54b2,	// (0x000244a5) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e793) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e793) status_pane_g

0xdadb,	// (0x0002cace) title_pane_ParamLimits

0xdadb,	// (0x0002cace) title_pane

0xdb3e,	// (0x0002cb31) uni_indicator_pane_ParamLimits

0xdb3e,	// (0x0002cb31) uni_indicator_pane

0x50e8,	// (0x000240db) bg_list_pane_ParamLimits

0x50e8,	// (0x000240db) bg_list_pane

0xd775,	// (0x0002c768) find_pane

0xc38e,	// (0x0002b381) listscroll_app_pane_ParamLimits

0xc38e,	// (0x0002b381) listscroll_app_pane

0x5119,	// (0x0002410c) listscroll_form_pane

0xc3a2,	// (0x0002b395) listscroll_gen_pane_ParamLimits

0xc3a2,	// (0x0002b395) listscroll_gen_pane

0x1ed2,	// (0x00020ec5) listscroll_set_pane

0x6a1e,	// (0x00025a11) main_idle_act_pane

0x4de4,	// (0x00023dd7) main_idle_trad_pane

0x4de4,	// (0x00023dd7) main_list_empty_pane

0x5133,	// (0x00024126) main_midp_pane

0x513f,	// (0x00024132) main_pane_g1_ParamLimits

0x513f,	// (0x00024132) main_pane_g1

0xc3b6,	// (0x0002b3a9) popup_ai_message_window_ParamLimits

0xc3b6,	// (0x0002b3a9) popup_ai_message_window

0xc447,	// (0x0002b43a) popup_fep_china_uni_window_ParamLimits

0xc447,	// (0x0002b43a) popup_fep_china_uni_window

0x1fdc,	// (0x00020fcf) popup_fep_japan_candidate_window_ParamLimits

0x1fdc,	// (0x00020fcf) popup_fep_japan_candidate_window

0x1ffc,	// (0x00020fef) popup_fep_japan_predictive_window_ParamLimits

0x1ffc,	// (0x00020fef) popup_fep_japan_predictive_window

0xc4a3,	// (0x0002b496) popup_find_window

0xc4c0,	// (0x0002b4b3) popup_grid_graphic_window_ParamLimits

0xc4c0,	// (0x0002b4b3) popup_grid_graphic_window

0x2063,	// (0x00021056) popup_large_graphic_colour_window

0xc55e,	// (0x0002b551) popup_menu_window_ParamLimits

0xc55e,	// (0x0002b551) popup_menu_window

0xc730,	// (0x0002b723) popup_note_image_window

0xc6f6,	// (0x0002b6e9) popup_note_wait_window_ParamLimits

0xc6f6,	// (0x0002b6e9) popup_note_wait_window

0xc748,	// (0x0002b73b) popup_note_window_ParamLimits

0xc748,	// (0x0002b73b) popup_note_window

0xc7ee,	// (0x0002b7e1) popup_query_code_window_ParamLimits

0xc7ee,	// (0x0002b7e1) popup_query_code_window

0x22ab,	// (0x0002129e) popup_query_data_code_window_ParamLimits

0x22ab,	// (0x0002129e) popup_query_data_code_window

0xc828,	// (0x0002b81b) popup_query_data_window_ParamLimits

0xc828,	// (0x0002b81b) popup_query_data_window

0xc8aa,	// (0x0002b89d) popup_query_sat_info_window_ParamLimits

0xc8aa,	// (0x0002b89d) popup_query_sat_info_window

0xc941,	// (0x0002b934) popup_snote_single_graphic_window_ParamLimits

0xc941,	// (0x0002b934) popup_snote_single_graphic_window

0xc941,	// (0x0002b934) popup_snote_single_text_window_ParamLimits

0xc941,	// (0x0002b934) popup_snote_single_text_window

0x2332,	// (0x00021325) popup_sub_window_general

0x2462,	// (0x00021455) popup_window_general_ParamLimits

0x2462,	// (0x00021455) popup_window_general

0x514d,	// (0x00024140) power_save_pane

0xc213,	// (0x0002b206) control_pane_g1_ParamLimits

0xc213,	// (0x0002b206) control_pane_g1

0xc23c,	// (0x0002b22f) control_pane_g2_ParamLimits

0xc23c,	// (0x0002b22f) control_pane_g2

0x50ab,	// (0x0002409e) control_pane_g3_ParamLimits

0x50ab,	// (0x0002409e) control_pane_g3

0x0007,

0xf788,	// (0x0002e77b) control_pane_g_ParamLimits

0xf788,	// (0x0002e77b) control_pane_g

0xc27d,	// (0x0002b270) control_pane_t1_ParamLimits

0xc27d,	// (0x0002b270) control_pane_t1

0xc2e3,	// (0x0002b2d6) control_pane_t2_ParamLimits

0xc2e3,	// (0x0002b2d6) control_pane_t2

0x0002,

0xf799,	// (0x0002e78c) control_pane_t_ParamLimits

0xf799,	// (0x0002e78c) control_pane_t

0xd6a7,	// (0x0002c69a) navi_navi_volume_pane_cp1

0xd6af,	// (0x0002c6a2) status_small_icon_pane

0x4fe0,	// (0x00023fd3) status_small_pane_g1_ParamLimits

0x4fe0,	// (0x00023fd3) status_small_pane_g1

0xd6b7,	// (0x0002c6aa) status_small_pane_g2_ParamLimits

0xd6b7,	// (0x0002c6aa) status_small_pane_g2

0xd6c3,	// (0x0002c6b6) status_small_pane_g3_ParamLimits

0xd6c3,	// (0x0002c6b6) status_small_pane_g3

0xd6cf,	// (0x0002c6c2) status_small_pane_g4_ParamLimits

0xd6cf,	// (0x0002c6c2) status_small_pane_g4

0xd6db,	// (0x0002c6ce) status_small_pane_g5_ParamLimits

0xd6db,	// (0x0002c6ce) status_small_pane_g5

0xd6e9,	// (0x0002c6dc) status_small_pane_g6_ParamLimits

0xd6e9,	// (0x0002c6dc) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e76a) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e76a) status_small_pane_g

0xd718,	// (0x0002c70b) status_small_pane_t1

0xd73a,	// (0x0002c72d) status_small_wait_pane_ParamLimits

0xd73a,	// (0x0002c72d) status_small_wait_pane

0xd572,	// (0x0002c565) aid_levels_signal_ParamLimits

0xd572,	// (0x0002c565) aid_levels_signal

0xd58a,	// (0x0002c57d) signal_pane_g1_ParamLimits

0xd58a,	// (0x0002c57d) signal_pane_g1

0xd5a5,	// (0x0002c598) signal_pane_g2_ParamLimits

0xd5a5,	// (0x0002c598) signal_pane_g2

0x0003,

0xf708,	// (0x0002e6fb) signal_pane_g_ParamLimits

0xf708,	// (0x0002e6fb) signal_pane_g

0x48b8,	// (0x000238ab) context_pane_g1

0xd0d6,	// (0x0002c0c9) title_pane_g1

0xd10d,	// (0x0002c100) title_pane_t1

0x38a6,	// (0x00022899) title_pane_t2

0x38cc,	// (0x000228bf) title_pane_t3

0x0002,

0xf557,	// (0x0002e54a) title_pane_t

0xdb66,	// (0x0002cb59) aid_levels_battery_ParamLimits

0xdb66,	// (0x0002cb59) aid_levels_battery

0xdb82,	// (0x0002cb75) battery_pane_g1_ParamLimits

0xdb82,	// (0x0002cb75) battery_pane_g1

0xdb9f,	// (0x0002cb92) battery_pane_g2_ParamLimits

0xdb9f,	// (0x0002cb92) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e79e) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e79e) battery_pane_g

0xdd60,	// (0x0002cd53) uni_indicator_pane_g1

0xdd76,	// (0x0002cd69) uni_indicator_pane_g2

0xdd8c,	// (0x0002cd7f) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002e908) uni_indicator_pane_g

0x4c56,	// (0x00023c49) navi_icon_pane_ParamLimits

0x4c56,	// (0x00023c49) navi_icon_pane

0x4b94,	// (0x00023b87) navi_midp_pane

0x4c72,	// (0x00023c65) navi_navi_pane

0x4c7c,	// (0x00023c6f) navi_text_pane_ParamLimits

0x4c7c,	// (0x00023c6f) navi_text_pane

0x37f4,	// (0x000227e7) status_small_wait_pane_g1

0x3cfb,	// (0x00022cee) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002e903) status_small_wait_pane_g

0x64f8,	// (0x000254eb) navi_navi_icon_text_pane

0x6500,	// (0x000254f3) navi_navi_pane_g1_ParamLimits

0x6500,	// (0x000254f3) navi_navi_pane_g1

0x6512,	// (0x00025505) navi_navi_pane_g2_ParamLimits

0x6512,	// (0x00025505) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002e8d1) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002e8d1) navi_navi_pane_g

0x6524,	// (0x00025517) navi_navi_tabs_pane

0x652d,	// (0x00025520) navi_navi_text_pane

0x64f8,	// (0x000254eb) navi_navi_volume_pane

0x64d4,	// (0x000254c7) navi_text_pane_t1

0x64c8,	// (0x000254bb) navi_icon_pane_g1

0x641b,	// (0x0002540e) navi_navi_text_pane_t1

0x26ec,	// (0x000216df) navi_navi_volume_pane_g1

0x26f4,	// (0x000216e7) volume_small_pane

0x6381,	// (0x00025374) navi_navi_icon_text_pane_g1

0x6389,	// (0x0002537c) navi_navi_icon_text_pane_t1

0x4c72,	// (0x00023c65) navi_tabs_2_long_pane

0x4c72,	// (0x00023c65) navi_tabs_2_pane

0x4c72,	// (0x00023c65) navi_tabs_3_long_pane

0x4c72,	// (0x00023c65) navi_tabs_3_pane

0x4c72,	// (0x00023c65) navi_tabs_4_pane

0x26cc,	// (0x000216bf) tabs_2_active_pane_ParamLimits

0x26cc,	// (0x000216bf) tabs_2_active_pane

0x26dc,	// (0x000216cf) tabs_2_passive_pane_ParamLimits

0x26dc,	// (0x000216cf) tabs_2_passive_pane

0x269a,	// (0x0002168d) tabs_3_active_pane_ParamLimits

0x269a,	// (0x0002168d) tabs_3_active_pane

0x26aa,	// (0x0002169d) tabs_3_passive_pane_ParamLimits

0x26aa,	// (0x0002169d) tabs_3_passive_pane

0x26bb,	// (0x000216ae) tabs_3_passive_pane_cp_ParamLimits

0x26bb,	// (0x000216ae) tabs_3_passive_pane_cp

0x2656,	// (0x00021649) tabs_4_active_pane_ParamLimits

0x2656,	// (0x00021649) tabs_4_active_pane

0x2667,	// (0x0002165a) tabs_4_passive_pane_ParamLimits

0x2667,	// (0x0002165a) tabs_4_passive_pane

0x2678,	// (0x0002166b) tabs_4_passive_pane_cp_ParamLimits

0x2678,	// (0x0002166b) tabs_4_passive_pane_cp

0x2689,	// (0x0002167c) tabs_4_passive_pane_cp2_ParamLimits

0x2689,	// (0x0002167c) tabs_4_passive_pane_cp2

0x2632,	// (0x00021625) tabs_2_long_active_pane_ParamLimits

0x2632,	// (0x00021625) tabs_2_long_active_pane

0x2644,	// (0x00021637) tabs_2_long_passive_pane_ParamLimits

0x2644,	// (0x00021637) tabs_2_long_passive_pane

0x25f3,	// (0x000215e6) tabs_3_long_active_pane_ParamLimits

0x25f3,	// (0x000215e6) tabs_3_long_active_pane

0x2606,	// (0x000215f9) tabs_3_long_passive_pane_ParamLimits

0x2606,	// (0x000215f9) tabs_3_long_passive_pane

0x261f,	// (0x00021612) tabs_3_long_passive_pane_cp_ParamLimits

0x261f,	// (0x00021612) tabs_3_long_passive_pane_cp

0x2599,	// (0x0002158c) volume_small_pane_g1

0x25a2,	// (0x00021595) volume_small_pane_g2

0x25ab,	// (0x0002159e) volume_small_pane_g3

0x25b4,	// (0x000215a7) volume_small_pane_g4

0x25bd,	// (0x000215b0) volume_small_pane_g5

0x25c6,	// (0x000215b9) volume_small_pane_g6

0x25cf,	// (0x000215c2) volume_small_pane_g7

0x25d8,	// (0x000215cb) volume_small_pane_g8

0x25e1,	// (0x000215d4) volume_small_pane_g9

0x25ea,	// (0x000215dd) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002e89d) volume_small_pane_g

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp2_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp2

0x38ec,	// (0x000228df) tabs_3_active_pane_g1

0xd199,	// (0x0002c18c) tabs_3_active_pane_t1

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp2_ParamLimits

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp2

0x38ec,	// (0x000228df) tabs_3_passive_pane_g1

0xd199,	// (0x0002c18c) tabs_3_passive_pane_t1

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp3_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp3

0x3906,	// (0x000228f9) tabs_4_active_pane_g1

0xd1ab,	// (0x0002c19e) tabs_4_active_pane_t1

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp3_ParamLimits

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp3

0x3906,	// (0x000228f9) tabs_4_1_passive_pane_g1

0xd1ab,	// (0x0002c19e) tabs_4_1_passive_pane_t1

0x5133,	// (0x00024126) list_highlight_pane_cp2

0xde12,	// (0x0002ce05) list_set_pane_ParamLimits

0xde12,	// (0x0002ce05) list_set_pane

0xdeac,	// (0x0002ce9f) main_pane_set_t1_ParamLimits

0xdeac,	// (0x0002ce9f) main_pane_set_t1

0xdecc,	// (0x0002cebf) main_pane_set_t2_ParamLimits

0xdecc,	// (0x0002cebf) main_pane_set_t2

0xdee0,	// (0x0002ced3) main_pane_set_t3_ParamLimits

0xdee0,	// (0x0002ced3) main_pane_set_t3

0xdef2,	// (0x0002cee5) main_pane_set_t4_ParamLimits

0xdef2,	// (0x0002cee5) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002e96d) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002e96d) main_pane_set_t

0xdf04,	// (0x0002cef7) setting_code_pane

0xdf0e,	// (0x0002cf01) setting_slider_graphic_pane

0xdf0e,	// (0x0002cf01) setting_slider_pane

0xdf0e,	// (0x0002cf01) setting_text_pane

0xdf0e,	// (0x0002cf01) setting_volume_pane

0x184c,	// (0x0002083f) volume_set_pane

0x38de,	// (0x000228d1) bg_set_opt_pane_cp

0x1854,	// (0x00020847) setting_slider_pane_t1

0x186d,	// (0x00020860) setting_slider_pane_t2

0x1887,	// (0x0002087a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e551) setting_slider_pane_t

0x189f,	// (0x00020892) slider_set_pane

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp2

0x3920,	// (0x00022913) setting_slider_graphic_pane_g1

0x18b5,	// (0x000208a8) setting_slider_graphic_pane_t1

0x18c5,	// (0x000208b8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e558) setting_slider_graphic_pane_t

0x18d5,	// (0x000208c8) slider_set_pane_cp

0x37fe,	// (0x000227f1) input_focus_pane_cp1

0x6a05,	// (0x000259f8) list_set_text_pane

0x37f4,	// (0x000227e7) setting_text_pane_g1

0x37fe,	// (0x000227f1) input_focus_pane_cp2

0x37f4,	// (0x000227e7) setting_code_pane_g1

0x3929,	// (0x0002291c) setting_code_pane_t1

0x02e6,	// (0x0001f2d9) set_text_pane_t1_ParamLimits

0x02e6,	// (0x0001f2d9) set_text_pane_t1

0x41a5,	// (0x00023198) set_opt_bg_pane_g1

0x41ad,	// (0x000231a0) set_opt_bg_pane_g2

0x69df,	// (0x000259d2) set_opt_bg_pane_g3

0x41bd,	// (0x000231b0) set_opt_bg_pane_g4

0x41c5,	// (0x000231b8) set_opt_bg_pane_g5

0x41cd,	// (0x000231c0) set_opt_bg_pane_g6

0x69e9,	// (0x000259dc) set_opt_bg_pane_g7

0x69f1,	// (0x000259e4) set_opt_bg_pane_g8

0x69fb,	// (0x000259ee) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002e95a) set_opt_bg_pane_g

0x69d2,	// (0x000259c5) slider_set_pane_g1

0x2761,	// (0x00021754) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002e94b) slider_set_pane_g

0x26fd,	// (0x000216f0) volume_set_pane_g1

0x2705,	// (0x000216f8) volume_set_pane_g2

0x270d,	// (0x00021700) volume_set_pane_g3

0x2715,	// (0x00021708) volume_set_pane_g4

0x271d,	// (0x00021710) volume_set_pane_g5

0x2725,	// (0x00021718) volume_set_pane_g6

0x272d,	// (0x00021720) volume_set_pane_g7

0x2735,	// (0x00021728) volume_set_pane_g8

0x273d,	// (0x00021730) volume_set_pane_g9

0x2745,	// (0x00021738) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002e923) volume_set_pane_g

0xd1bd,	// (0x0002c1b0) indicator_pane_ParamLimits

0xd1bd,	// (0x0002c1b0) indicator_pane

0xd1e5,	// (0x0002c1d8) main_idle_pane_g2_ParamLimits

0xd1e5,	// (0x0002c1d8) main_idle_pane_g2

0xd21d,	// (0x0002c210) main_pane_idle_g1_ParamLimits

0xd21d,	// (0x0002c210) main_pane_idle_g1

0x3978,	// (0x0002296b) popup_clock_digital_analogue_window_ParamLimits

0x3978,	// (0x0002296b) popup_clock_digital_analogue_window

0xd244,	// (0x0002c237) soft_indicator_pane_ParamLimits

0xd244,	// (0x0002c237) soft_indicator_pane

0xd25e,	// (0x0002c251) wallpaper_pane_ParamLimits

0xd25e,	// (0x0002c251) wallpaper_pane

0x37f4,	// (0x000227e7) wallpaper_pane_g1

0xd270,	// (0x0002c263) indicator_pane_g1_ParamLimits

0xd270,	// (0x0002c263) indicator_pane_g1

0x6e09,	// (0x00025dfc) navi_navi_icon_text_pane_srt_g1

0x39ca,	// (0x000229bd) soft_indicator_pane_t1

0x39e4,	// (0x000229d7) aid_ps_area_pane

0xd286,	// (0x0002c279) aid_ps_clock_pane

0x3a03,	// (0x000229f6) aid_ps_indicator_pane

0x3a0f,	// (0x00022a02) indicator_ps_pane_ParamLimits

0x3a0f,	// (0x00022a02) indicator_ps_pane

0x3a1e,	// (0x00022a11) power_save_pane_g1_ParamLimits

0x3a1e,	// (0x00022a11) power_save_pane_g1

0x3a2a,	// (0x00022a1d) power_save_pane_g2_ParamLimits

0x3a2a,	// (0x00022a1d) power_save_pane_g2

0x145d,	// (0x00020450) aid_navinavi_width_pane

0x39e4,	// (0x000229d7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e55d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e55d) power_save_pane_g

0x3a38,	// (0x00022a2b) power_save_pane_t1_ParamLimits

0x3a38,	// (0x00022a2b) power_save_pane_t1

0xd286,	// (0x0002c279) aid_ps_clock_pane_ParamLimits

0x3a03,	// (0x000229f6) aid_ps_indicator_pane_ParamLimits

0x3a4a,	// (0x00022a3d) power_save_pane_t4_ParamLimits

0x3a4a,	// (0x00022a3d) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e562) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e562) power_save_pane_t

0x3a74,	// (0x00022a67) power_save_t3_ParamLimits

0x3a74,	// (0x00022a67) power_save_t3

0x3a5f,	// (0x00022a52) power_save_t2_ParamLimits

0x3a5f,	// (0x00022a52) power_save_t2

0x3a89,	// (0x00022a7c) indicator_ps_pane_g1

0xd294,	// (0x0002c287) ai_gene_pane_ParamLimits

0xd294,	// (0x0002c287) ai_gene_pane

0xd2ab,	// (0x0002c29e) ai_links_pane_ParamLimits

0xd2ab,	// (0x0002c29e) ai_links_pane

0xd2c3,	// (0x0002c2b6) indicator_pane_cp1_ParamLimits

0xd2c3,	// (0x0002c2b6) indicator_pane_cp1

0xd2d2,	// (0x0002c2c5) main_pane_idle_g1_cp_ParamLimits

0xd2d2,	// (0x0002c2c5) main_pane_idle_g1_cp

0x3ac2,	// (0x00022ab5) popup_ai_links_title_window

0xd2ea,	// (0x0002c2dd) soft_indicator_pane_cp1_ParamLimits

0xd2ea,	// (0x0002c2dd) soft_indicator_pane_cp1

0x67c1,	// (0x000257b4) ai_links_pane_g1

0x67ca,	// (0x000257bd) grid_ai_links_pane

0xdd57,	// (0x0002cd4a) ai_gene_pane_1

0x67af,	// (0x000257a2) ai_gene_pane_2

0x67b8,	// (0x000257ab) list_highlight_pane_cp4

0xdd33,	// (0x0002cd26) cell_ai_link_pane_ParamLimits

0xdd33,	// (0x0002cd26) cell_ai_link_pane

0x6780,	// (0x00025773) cell_ai_link_pane_g1

0x3cfb,	// (0x00022cee) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002e8fe) cell_ai_link_pane_g

0x37fe,	// (0x000227f1) grid_highlight_cp2

0x37fe,	// (0x000227f1) bg_popup_sub_pane_cp1

0x3ae5,	// (0x00022ad8) popup_ai_links_title_window_t1

0x66ce,	// (0x000256c1) ai_gene_pane_1_g1_ParamLimits

0x66ce,	// (0x000256c1) ai_gene_pane_1_g1

0x66da,	// (0x000256cd) ai_gene_pane_1_g2_ParamLimits

0x66da,	// (0x000256cd) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002e8f4) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002e8f4) ai_gene_pane_1_g

0x66e7,	// (0x000256da) ai_gene_pane_1_t1_ParamLimits

0x66e7,	// (0x000256da) ai_gene_pane_1_t1

0x671b,	// (0x0002570e) grid_ai_soft_ind_pane

0x66b9,	// (0x000256ac) ai_gene_pane_2_t1_ParamLimits

0x66b9,	// (0x000256ac) ai_gene_pane_2_t1

0xd2fe,	// (0x0002c2f1) main_pane_empty_t1_ParamLimits

0xd2fe,	// (0x0002c2f1) main_pane_empty_t1

0xd316,	// (0x0002c309) main_pane_empty_t2_ParamLimits

0xd316,	// (0x0002c309) main_pane_empty_t2

0xd32b,	// (0x0002c31e) main_pane_empty_t3_ParamLimits

0xd32b,	// (0x0002c31e) main_pane_empty_t3

0xd33d,	// (0x0002c330) main_pane_empty_t4_ParamLimits

0xd33d,	// (0x0002c330) main_pane_empty_t4

0xd34f,	// (0x0002c342) main_pane_empty_t5_ParamLimits

0xd34f,	// (0x0002c342) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e567) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e567) main_pane_empty_t

0x41f6,	// (0x000231e9) bg_popup_window_pane_ParamLimits

0x41f6,	// (0x000231e9) bg_popup_window_pane

0x6429,	// (0x0002541c) find_popup_pane_cp2_ParamLimits

0x6429,	// (0x0002541c) find_popup_pane_cp2

0x6435,	// (0x00025428) heading_pane_ParamLimits

0x6435,	// (0x00025428) heading_pane

0x37fe,	// (0x000227f1) bg_popup_sub_pane

0xdcb4,	// (0x0002cca7) bg_popup_window_pane_g1_ParamLimits

0xdcb4,	// (0x0002cca7) bg_popup_window_pane_g1

0xdcc3,	// (0x0002ccb6) bg_popup_window_pane_g2_ParamLimits

0xdcc3,	// (0x0002ccb6) bg_popup_window_pane_g2

0xdccf,	// (0x0002ccc2) bg_popup_window_pane_g3_ParamLimits

0xdccf,	// (0x0002ccc2) bg_popup_window_pane_g3

0xdcdb,	// (0x0002ccce) bg_popup_window_pane_g4_ParamLimits

0xdcdb,	// (0x0002ccce) bg_popup_window_pane_g4

0xdcea,	// (0x0002ccdd) bg_popup_window_pane_g5_ParamLimits

0xdcea,	// (0x0002ccdd) bg_popup_window_pane_g5

0xdcfa,	// (0x0002cced) bg_popup_window_pane_g6_ParamLimits

0xdcfa,	// (0x0002cced) bg_popup_window_pane_g6

0xdd06,	// (0x0002ccf9) bg_popup_window_pane_g7_ParamLimits

0xdd06,	// (0x0002ccf9) bg_popup_window_pane_g7

0xdd15,	// (0x0002cd08) bg_popup_window_pane_g8_ParamLimits

0xdd15,	// (0x0002cd08) bg_popup_window_pane_g8

0xdd24,	// (0x0002cd17) bg_popup_window_pane_g9_ParamLimits

0xdd24,	// (0x0002cd17) bg_popup_window_pane_g9

0x640f,	// (0x00025402) bg_popup_window_pane_g10_ParamLimits

0x640f,	// (0x00025402) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002e8bc) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002e8bc) bg_popup_window_pane_g

0x6338,	// (0x0002532b) bg_popup_heading_pane_ParamLimits

0x6338,	// (0x0002532b) bg_popup_heading_pane

0x27e9,	// (0x000217dc) tabs_4_passive_pane_cp_srt_ParamLimits

0x27e9,	// (0x000217dc) tabs_4_passive_pane_cp_srt

0x27fb,	// (0x000217ee) tabs_4_passive_pane_srt_ParamLimits

0x634c,	// (0x0002533f) heading_pane_g2

0x27fb,	// (0x000217ee) tabs_4_passive_pane_srt

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp3_srt

0x6354,	// (0x00025347) heading_pane_t1_ParamLimits

0x6354,	// (0x00025347) heading_pane_t1

0x636b,	// (0x0002535e) heading_pane_t2_ParamLimits

0x636b,	// (0x0002535e) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002e8b7) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002e8b7) heading_pane_t

0x5e65,	// (0x00024e58) bg_popup_heading_pane_g1

0x5f14,	// (0x00024f07) bg_popup_heading_pane_g2

0x5f1e,	// (0x00024f11) bg_popup_heading_pane_g3

0x5f28,	// (0x00024f1b) bg_popup_heading_pane_g4

0x5f32,	// (0x00024f25) bg_popup_heading_pane_g5

0x5f3c,	// (0x00024f2f) bg_popup_heading_pane_g6

0x5f44,	// (0x00024f37) bg_popup_heading_pane_g7

0x5f4c,	// (0x00024f3f) bg_popup_heading_pane_g8

0x5f56,	// (0x00024f49) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002e873) bg_popup_heading_pane_g

0x563d,	// (0x00024630) bg_popup_sub_pane_g1

0x5645,	// (0x00024638) bg_popup_sub_pane_g2

0x564d,	// (0x00024640) bg_popup_sub_pane_g3

0x5655,	// (0x00024648) bg_popup_sub_pane_g4

0x565d,	// (0x00024650) bg_popup_sub_pane_g5

0x5665,	// (0x00024658) bg_popup_sub_pane_g6

0x566d,	// (0x00024660) bg_popup_sub_pane_g7

0x5675,	// (0x00024668) bg_popup_sub_pane_g8

0x567d,	// (0x00024670) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002e84d) bg_popup_sub_pane_g

0x3b59,	// (0x00022b4c) bg_popup_window_pane_cp5_ParamLimits

0x3b59,	// (0x00022b4c) bg_popup_window_pane_cp5

0x3b75,	// (0x00022b68) popup_note_window_g1_ParamLimits

0x3b75,	// (0x00022b68) popup_note_window_g1

0x3b81,	// (0x00022b74) popup_note_window_t1_ParamLimits

0x3b81,	// (0x00022b74) popup_note_window_t1

0x3b97,	// (0x00022b8a) popup_note_window_t2_ParamLimits

0x3b97,	// (0x00022b8a) popup_note_window_t2

0x3bad,	// (0x00022ba0) popup_note_window_t3_ParamLimits

0x3bad,	// (0x00022ba0) popup_note_window_t3

0x3bc3,	// (0x00022bb6) popup_note_window_t4_ParamLimits

0x3bc3,	// (0x00022bb6) popup_note_window_t4

0x3beb,	// (0x00022bde) popup_note_window_t5_ParamLimits

0x3beb,	// (0x00022bde) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e572) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e572) popup_note_window_t

0x3c0f,	// (0x00022c02) bg_popup_window_pane_cp6_ParamLimits

0x3c0f,	// (0x00022c02) bg_popup_window_pane_cp6

0x5de1,	// (0x00024dd4) popup_note_image_window_g1_ParamLimits

0x5de1,	// (0x00024dd4) popup_note_image_window_g1

0x5ded,	// (0x00024de0) popup_note_image_window_g2_ParamLimits

0x5ded,	// (0x00024de0) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002e841) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002e841) popup_note_image_window_g

0x5e06,	// (0x00024df9) popup_note_image_window_t1_ParamLimits

0x5e06,	// (0x00024df9) popup_note_image_window_t1

0x5e1f,	// (0x00024e12) popup_note_image_window_t2_ParamLimits

0x5e1f,	// (0x00024e12) popup_note_image_window_t2

0x5e38,	// (0x00024e2b) popup_note_image_window_t3_ParamLimits

0x5e38,	// (0x00024e2b) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002e846) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002e846) popup_note_image_window_t

0x5ca2,	// (0x00024c95) bg_popup_window_pane_cp7_ParamLimits

0x5ca2,	// (0x00024c95) bg_popup_window_pane_cp7

0x5cd2,	// (0x00024cc5) popup_note_wait_window_g1_ParamLimits

0x5cd2,	// (0x00024cc5) popup_note_wait_window_g1

0x5cde,	// (0x00024cd1) popup_note_wait_window_g2_ParamLimits

0x5cde,	// (0x00024cd1) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002e82f) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002e82f) popup_note_wait_window_g

0x5cf6,	// (0x00024ce9) popup_note_wait_window_t1_ParamLimits

0x5cf6,	// (0x00024ce9) popup_note_wait_window_t1

0x5d1d,	// (0x00024d10) popup_note_wait_window_t2_ParamLimits

0x5d1d,	// (0x00024d10) popup_note_wait_window_t2

0x5d3a,	// (0x00024d2d) popup_note_wait_window_t3_ParamLimits

0x5d3a,	// (0x00024d2d) popup_note_wait_window_t3

0x5d4d,	// (0x00024d40) popup_note_wait_window_t4_ParamLimits

0x5d4d,	// (0x00024d40) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002e836) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002e836) popup_note_wait_window_t

0x5d72,	// (0x00024d65) wait_bar_pane_ParamLimits

0x5d72,	// (0x00024d65) wait_bar_pane

0x37fe,	// (0x000227f1) wait_anim_pane

0x37fe,	// (0x000227f1) wait_border_pane

0x37f4,	// (0x000227e7) wait_anim_pane_g1

0x37f4,	// (0x000227e7) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e6f6) wait_anim_pane_g

0x5c46,	// (0x00024c39) wait_border_pane_g1

0x5c51,	// (0x00024c44) wait_border_pane_g2

0x5c5a,	// (0x00024c4d) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002e828) wait_border_pane_g

0x5ab1,	// (0x00024aa4) bg_popup_window_pane_cp16_ParamLimits

0x5ab1,	// (0x00024aa4) bg_popup_window_pane_cp16

0x5bb1,	// (0x00024ba4) indicator_popup_pane_cp4_ParamLimits

0x5bb1,	// (0x00024ba4) indicator_popup_pane_cp4

0x5bc5,	// (0x00024bb8) popup_query_data_window_t1_ParamLimits

0x5bc5,	// (0x00024bb8) popup_query_data_window_t1

0x5bd7,	// (0x00024bca) popup_query_data_window_t2_ParamLimits

0x5bd7,	// (0x00024bca) popup_query_data_window_t2

0x5bf0,	// (0x00024be3) popup_query_data_window_t3_ParamLimits

0x5bf0,	// (0x00024be3) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002e821) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002e821) popup_query_data_window_t

0x5c0a,	// (0x00024bfd) query_popup_data_pane_ParamLimits

0x5c0a,	// (0x00024bfd) query_popup_data_pane

0x5c1e,	// (0x00024c11) query_popup_data_pane_cp1_ParamLimits

0x5c1e,	// (0x00024c11) query_popup_data_pane_cp1

0x5ab1,	// (0x00024aa4) bg_popup_window_pane_cp10_ParamLimits

0x5ab1,	// (0x00024aa4) bg_popup_window_pane_cp10

0x5ae3,	// (0x00024ad6) indicator_popup_pane_ParamLimits

0x5ae3,	// (0x00024ad6) indicator_popup_pane

0x5b05,	// (0x00024af8) popup_query_code_window_t1_ParamLimits

0x5b05,	// (0x00024af8) popup_query_code_window_t1

0x5b1f,	// (0x00024b12) popup_query_code_window_t2_ParamLimits

0x5b1f,	// (0x00024b12) popup_query_code_window_t2

0x5b68,	// (0x00024b5b) popup_query_code_window_t3_ParamLimits

0x5b68,	// (0x00024b5b) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002e81a) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002e81a) popup_query_code_window_t

0x5b97,	// (0x00024b8a) query_popup_pane_ParamLimits

0x5b97,	// (0x00024b8a) query_popup_pane

0x3c0f,	// (0x00022c02) bg_popup_window_pane_cp15_ParamLimits

0x3c0f,	// (0x00022c02) bg_popup_window_pane_cp15

0x3c2d,	// (0x00022c20) indicator_popup_pane_cp1_ParamLimits

0x3c2d,	// (0x00022c20) indicator_popup_pane_cp1

0x3c40,	// (0x00022c33) indicator_popup_pane_cp2_ParamLimits

0x3c40,	// (0x00022c33) indicator_popup_pane_cp2

0x3c53,	// (0x00022c46) popup_query_data_code_window_g1_ParamLimits

0x3c53,	// (0x00022c46) popup_query_data_code_window_g1

0x3c66,	// (0x00022c59) popup_query_data_code_window_t1_ParamLimits

0x3c66,	// (0x00022c59) popup_query_data_code_window_t1

0x3c78,	// (0x00022c6b) popup_query_data_code_window_t2_ParamLimits

0x3c78,	// (0x00022c6b) popup_query_data_code_window_t2

0x3c8a,	// (0x00022c7d) popup_query_data_code_window_t3_ParamLimits

0x3c8a,	// (0x00022c7d) popup_query_data_code_window_t3

0x3ca0,	// (0x00022c93) popup_query_data_code_window_t4_ParamLimits

0x3ca0,	// (0x00022c93) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e57d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e57d) popup_query_data_code_window_t

0x24cc,	// (0x000214bf) list_single_midp_graphic_pane_g3

0x3cb8,	// (0x00022cab) query_popup_data_pane_cp2_ParamLimits

0x3ccb,	// (0x00022cbe) query_popup_pane_cp2_ParamLimits

0x3ccb,	// (0x00022cbe) query_popup_pane_cp2

0x37fe,	// (0x000227f1) bg_popup_window_pane_cp11

0x5aa9,	// (0x00024a9c) heading_pane_cp5

0x3db6,	// (0x00022da9) listscroll_popup_info_pane

0x37fe,	// (0x000227f1) input_focus_pane_cp3

0x3cde,	// (0x00022cd1) query_popup_pane_t1

0x3cec,	// (0x00022cdf) list_popup_info_pane_ParamLimits

0x3cec,	// (0x00022cdf) list_popup_info_pane

0x3cfb,	// (0x00022cee) listscroll_popup_info_pane_g1

0x3d03,	// (0x00022cf6) scroll_pane_cp7

0x3d0d,	// (0x00022d00) popup_info_list_pane_t1_ParamLimits

0x3d0d,	// (0x00022d00) popup_info_list_pane_t1

0x3d27,	// (0x00022d1a) popup_info_list_pane_t2_ParamLimits

0x3d27,	// (0x00022d1a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e586) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e586) popup_info_list_pane_t

0x37fe,	// (0x000227f1) bg_popup_window_pane_cp12

0x6e23,	// (0x00025e16) find_popup_pane

0x38de,	// (0x000228d1) bg_popup_window_pane_cp3

0x3d41,	// (0x00022d34) heading_pane_cp3

0x3d4d,	// (0x00022d40) listscroll_popup_graphic_pane

0x37fe,	// (0x000227f1) bg_popup_window_pane_cp4

0xd3b1,	// (0x0002c3a4) heading_pane_cp4

0x3db6,	// (0x00022da9) listscroll_popup_colour_pane

0x3dbe,	// (0x00022db1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3dbe,	// (0x00022db1) cell_large_graphic_colour_none_popup_pane

0xd3b9,	// (0x0002c3ac) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3b9,	// (0x0002c3ac) grid_large_graphic_colour_popup_pane

0x3dfe,	// (0x00022df1) listscroll_popup_colour_pane_g1_ParamLimits

0x3dfe,	// (0x00022df1) listscroll_popup_colour_pane_g1

0x3e15,	// (0x00022e08) listscroll_popup_colour_pane_g2_ParamLimits

0x3e15,	// (0x00022e08) listscroll_popup_colour_pane_g2

0x3e2c,	// (0x00022e1f) listscroll_popup_colour_pane_g3_ParamLimits

0x3e2c,	// (0x00022e1f) listscroll_popup_colour_pane_g3

0xd3dd,	// (0x0002c3d0) listscroll_popup_colour_pane_g4_ParamLimits

0xd3dd,	// (0x0002c3d0) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e58b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e58b) listscroll_popup_colour_pane_g

0x3e50,	// (0x00022e43) scroll_pane_cp6_ParamLimits

0x3e50,	// (0x00022e43) scroll_pane_cp6

0xd3ed,	// (0x0002c3e0) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3ed,	// (0x0002c3e0) cell_large_graphic_colour_popup_pane

0x3e81,	// (0x00022e74) cell_large_graphic_colour_none_popup_pane_t1

0x37fe,	// (0x000227f1) grid_highlight_pane_cp5

0x3e90,	// (0x00022e83) cell_large_graphic_colour_popup_pane_g1

0x3e98,	// (0x00022e8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e594) cell_large_graphic_colour_popup_pane_g

0x3ea0,	// (0x00022e93) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ea9,	// (0x00022e9c) grid_highlight_pane_cp4

0x3eb1,	// (0x00022ea4) bg_popup_window_pane_cp8_ParamLimits

0x3eb1,	// (0x00022ea4) bg_popup_window_pane_cp8

0x3ecc,	// (0x00022ebf) popup_snote_single_text_window_g1_ParamLimits

0x3ecc,	// (0x00022ebf) popup_snote_single_text_window_g1

0x3ede,	// (0x00022ed1) popup_snote_single_text_window_t1_ParamLimits

0x3ede,	// (0x00022ed1) popup_snote_single_text_window_t1

0x3ef1,	// (0x00022ee4) popup_snote_single_text_window_t2_ParamLimits

0x3ef1,	// (0x00022ee4) popup_snote_single_text_window_t2

0x3f04,	// (0x00022ef7) popup_snote_single_text_window_t3_ParamLimits

0x3f04,	// (0x00022ef7) popup_snote_single_text_window_t3

0x3f3d,	// (0x00022f30) popup_snote_single_text_window_t4_ParamLimits

0x3f3d,	// (0x00022f30) popup_snote_single_text_window_t4

0x3f71,	// (0x00022f64) popup_snote_single_text_window_t5_ParamLimits

0x3f71,	// (0x00022f64) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e599) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e599) popup_snote_single_text_window_t

0x3fa0,	// (0x00022f93) bg_popup_window_pane_cp9_ParamLimits

0x3fa0,	// (0x00022f93) bg_popup_window_pane_cp9

0x3ecc,	// (0x00022ebf) popup_snote_single_graphic_window_g1_ParamLimits

0x3ecc,	// (0x00022ebf) popup_snote_single_graphic_window_g1

0x3fae,	// (0x00022fa1) popup_snote_single_graphic_window_g2_ParamLimits

0x3fae,	// (0x00022fa1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e5a4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e5a4) popup_snote_single_graphic_window_g

0x3fba,	// (0x00022fad) popup_snote_single_graphic_window_t1_ParamLimits

0x3fba,	// (0x00022fad) popup_snote_single_graphic_window_t1

0x3fcd,	// (0x00022fc0) popup_snote_single_graphic_window_t2_ParamLimits

0x3fcd,	// (0x00022fc0) popup_snote_single_graphic_window_t2

0x3fe0,	// (0x00022fd3) popup_snote_single_graphic_window_t3_ParamLimits

0x3fe0,	// (0x00022fd3) popup_snote_single_graphic_window_t3

0x4019,	// (0x0002300c) popup_snote_single_graphic_window_t4_ParamLimits

0x4019,	// (0x0002300c) popup_snote_single_graphic_window_t4

0x404d,	// (0x00023040) popup_snote_single_graphic_window_t5_ParamLimits

0x404d,	// (0x00023040) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e5a9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e5a9) popup_snote_single_graphic_window_t

0x6d65,	// (0x00025d58) grid_graphic_popup_pane_ParamLimits

0x6d65,	// (0x00025d58) grid_graphic_popup_pane

0x6d8f,	// (0x00025d82) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d8f,	// (0x00025d82) listscroll_popup_graphic_pane_g1

0xe01d,	// (0x0002d010) listscroll_popup_graphic_pane_g2_ParamLimits

0xe01d,	// (0x0002d010) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002e997) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002e997) listscroll_popup_graphic_pane_g

0x6db7,	// (0x00025daa) scroll_pane_cp5

0xdfc2,	// (0x0002cfb5) cell_graphic_popup_pane_ParamLimits

0xdfc2,	// (0x0002cfb5) cell_graphic_popup_pane

0x6ce5,	// (0x00025cd8) cell_graphic_popup_pane_g1

0x6ced,	// (0x00025ce0) cell_graphic_popup_pane_g2

0x3ea0,	// (0x00022e93) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002e990) cell_graphic_popup_pane_g

0x6cf6,	// (0x00025ce9) cell_graphic_popup_pane_t2

0x3ea9,	// (0x00022e9c) grid_highlight_pane_cp3

0x408e,	// (0x00023081) list_gen_pane_ParamLimits

0x408e,	// (0x00023081) list_gen_pane

0x40c0,	// (0x000230b3) scroll_pane

0xdf79,	// (0x0002cf6c) bg_list_pane_g1_ParamLimits

0xdf79,	// (0x0002cf6c) bg_list_pane_g1

0x6c5a,	// (0x00025c4d) bg_list_pane_g2_ParamLimits

0x6c5a,	// (0x00025c4d) bg_list_pane_g2

0x6c6f,	// (0x00025c62) bg_list_pane_g3_ParamLimits

0x6c6f,	// (0x00025c62) bg_list_pane_g3

0x6c83,	// (0x00025c76) bg_list_pane_g4_ParamLimits

0x6c83,	// (0x00025c76) bg_list_pane_g4

0xdf96,	// (0x0002cf89) bg_list_pane_g5_ParamLimits

0xdf96,	// (0x0002cf89) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002e985) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002e985) bg_list_pane_g

0xdf41,	// (0x0002cf34) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double2_graphic_large_graphic_pane

0xdf41,	// (0x0002cf34) list_double2_graphic_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double2_graphic_pane

0xdf41,	// (0x0002cf34) list_double2_large_graphic_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double2_large_graphic_pane

0xdf41,	// (0x0002cf34) list_double2_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double2_pane

0xdf41,	// (0x0002cf34) list_double_graphic_heading_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_graphic_heading_pane

0xdf41,	// (0x0002cf34) list_double_graphic_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_graphic_pane

0xdf41,	// (0x0002cf34) list_double_heading_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_heading_pane

0xdf41,	// (0x0002cf34) list_double_large_graphic_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_large_graphic_pane

0xdf41,	// (0x0002cf34) list_double_number_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_number_pane

0xdf41,	// (0x0002cf34) list_double_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_pane

0xdf41,	// (0x0002cf34) list_double_time_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_double_time_pane

0xdf41,	// (0x0002cf34) list_setting_number_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_setting_number_pane

0xdf41,	// (0x0002cf34) list_setting_pane_ParamLimits

0xdf41,	// (0x0002cf34) list_setting_pane

0xdf53,	// (0x0002cf46) list_single_2graphic_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_2graphic_pane

0xdf53,	// (0x0002cf46) list_single_graphic_heading_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_graphic_heading_pane

0xdf53,	// (0x0002cf46) list_single_graphic_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_graphic_pane

0xdf53,	// (0x0002cf46) list_single_heading_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_heading_pane

0xdf53,	// (0x0002cf46) list_single_large_graphic_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_large_graphic_pane

0xdf53,	// (0x0002cf46) list_single_number_heading_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_number_heading_pane

0xdf53,	// (0x0002cf46) list_single_number_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_number_pane

0xdf53,	// (0x0002cf46) list_single_pane_ParamLimits

0xdf53,	// (0x0002cf46) list_single_pane

0x37fe,	// (0x000227f1) list_highlight_pane_cp1

0x0ac3,	// (0x0001fab6) list_single_pane_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_pane_g1

0x0acf,	// (0x0001fac2) list_single_pane_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_pane_g

0x0df3,	// (0x0001fde6) list_single_pane_t1_ParamLimits

0x0df3,	// (0x0001fde6) list_single_pane_t1

0x0ac3,	// (0x0001fab6) list_single_number_pane_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_number_pane_g1

0x0acf,	// (0x0001fac2) list_single_number_pane_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_number_pane_g

0x0b21,	// (0x0001fb14) list_single_number_pane_t1_ParamLimits

0x0b21,	// (0x0001fb14) list_single_number_pane_t1

0xbd83,	// (0x0002ad76) list_single_number_pane_t2_ParamLimits

0xbd83,	// (0x0002ad76) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002e946) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002e946) list_single_number_pane_t

0xb77f,	// (0x0002a772) list_single_graphic_pane_g1_ParamLimits

0xb77f,	// (0x0002a772) list_single_graphic_pane_g1

0x0ac3,	// (0x0001fab6) list_single_graphic_pane_g2_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_graphic_pane_g2

0x0acf,	// (0x0001fac2) list_single_graphic_pane_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e5b4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e5b4) list_single_graphic_pane_g

0xb78b,	// (0x0002a77e) list_single_graphic_pane_t1_ParamLimits

0xb78b,	// (0x0002a77e) list_single_graphic_pane_t1

0x0ac3,	// (0x0001fab6) list_single_heading_pane_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_heading_pane_g1

0x0acf,	// (0x0001fac2) list_single_heading_pane_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_heading_pane_g

0xb7a1,	// (0x0002a794) list_single_heading_pane_t1_ParamLimits

0xb7a1,	// (0x0002a794) list_single_heading_pane_t1

0xb7b7,	// (0x0002a7aa) list_single_heading_pane_t2_ParamLimits

0xb7b7,	// (0x0002a7aa) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e5c0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e5c0) list_single_heading_pane_t

0x0ac3,	// (0x0001fab6) list_single_number_heading_pane_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_number_heading_pane_g1

0x0acf,	// (0x0001fac2) list_single_number_heading_pane_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_number_heading_pane_g

0xb7a1,	// (0x0002a794) list_single_number_heading_pane_t1_ParamLimits

0xb7a1,	// (0x0002a794) list_single_number_heading_pane_t1

0x0da7,	// (0x0001fd9a) list_single_number_heading_pane_t2_ParamLimits

0x0da7,	// (0x0001fd9a) list_single_number_heading_pane_t2

0x0db9,	// (0x0001fdac) list_single_number_heading_pane_t3_ParamLimits

0x0db9,	// (0x0001fdac) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e5c5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e5c5) list_single_number_heading_pane_t

0x0ab7,	// (0x0001faaa) list_single_graphic_heading_pane_g1_ParamLimits

0x0ab7,	// (0x0001faaa) list_single_graphic_heading_pane_g1

0xb7c9,	// (0x0002a7bc) list_single_graphic_heading_pane_g4_ParamLimits

0xb7c9,	// (0x0002a7bc) list_single_graphic_heading_pane_g4

0x0acf,	// (0x0001fac2) list_single_graphic_heading_pane_g5_ParamLimits

0x0acf,	// (0x0001fac2) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e5cc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e5cc) list_single_graphic_heading_pane_g

0xb7a1,	// (0x0002a794) list_single_graphic_heading_pane_t1_ParamLimits

0xb7a1,	// (0x0002a794) list_single_graphic_heading_pane_t1

0xb7da,	// (0x0002a7cd) list_single_graphic_heading_pane_t2_ParamLimits

0xb7da,	// (0x0002a7cd) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e5d3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e5d3) list_single_graphic_heading_pane_t

0x0e09,	// (0x0001fdfc) list_single_large_graphic_pane_g1_ParamLimits

0x0e09,	// (0x0001fdfc) list_single_large_graphic_pane_g1

0x0ac3,	// (0x0001fab6) list_single_large_graphic_pane_g2_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_large_graphic_pane_g2

0x0acf,	// (0x0001fac2) list_single_large_graphic_pane_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e5d8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e5d8) list_single_large_graphic_pane_g

0x5c51,	// (0x00024c44) wait_border_pane_g2_copy1

0xb7ec,	// (0x0002a7df) list_single_large_graphic_pane_g4_cp2

0x0e15,	// (0x0001fe08) list_single_large_graphic_pane_t1_ParamLimits

0x0e15,	// (0x0001fe08) list_single_large_graphic_pane_t1

0xb7f4,	// (0x0002a7e7) list_double_pane_g1_ParamLimits

0xb7f4,	// (0x0002a7e7) list_double_pane_g1

0xb800,	// (0x0002a7f3) list_double_pane_g2_ParamLimits

0xb800,	// (0x0002a7f3) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e5df) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e5df) list_double_pane_g

0xb80c,	// (0x0002a7ff) list_double_pane_t1_ParamLimits

0xb80c,	// (0x0002a7ff) list_double_pane_t1

0xb822,	// (0x0002a815) list_double_pane_t2_ParamLimits

0xb822,	// (0x0002a815) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e5e4) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e5e4) list_double_pane_t

0xb834,	// (0x0002a827) list_double2_pane_g1_ParamLimits

0xb834,	// (0x0002a827) list_double2_pane_g1

0xb845,	// (0x0002a838) list_double2_pane_g2_ParamLimits

0xb845,	// (0x0002a838) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e5e9) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e5e9) list_double2_pane_g

0xb851,	// (0x0002a844) list_double2_pane_t1_ParamLimits

0xb851,	// (0x0002a844) list_double2_pane_t1

0xb867,	// (0x0002a85a) list_double2_pane_t2_ParamLimits

0xb867,	// (0x0002a85a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e5ee) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e5ee) list_double2_pane_t

0xb7f4,	// (0x0002a7e7) list_double_number_pane_g1_ParamLimits

0xb7f4,	// (0x0002a7e7) list_double_number_pane_g1

0xb800,	// (0x0002a7f3) list_double_number_pane_g2_ParamLimits

0xb800,	// (0x0002a7f3) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e5df) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e5df) list_double_number_pane_g

0xb879,	// (0x0002a86c) list_double_number_pane_t1_ParamLimits

0xb879,	// (0x0002a86c) list_double_number_pane_t1

0xb88b,	// (0x0002a87e) list_double_number_pane_t2_ParamLimits

0xb88b,	// (0x0002a87e) list_double_number_pane_t2

0xb8a1,	// (0x0002a894) list_double_number_pane_t3_ParamLimits

0xb8a1,	// (0x0002a894) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e5f3) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e5f3) list_double_number_pane_t

0xb8b3,	// (0x0002a8a6) list_double_graphic_pane_g1_ParamLimits

0xb8b3,	// (0x0002a8a6) list_double_graphic_pane_g1

0xb8bf,	// (0x0002a8b2) list_double_graphic_pane_g2_ParamLimits

0xb8bf,	// (0x0002a8b2) list_double_graphic_pane_g2

0xb8ce,	// (0x0002a8c1) list_double_graphic_pane_g3_ParamLimits

0xb8ce,	// (0x0002a8c1) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e5fa) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e5fa) list_double_graphic_pane_g

0xb8e6,	// (0x0002a8d9) list_double_graphic_pane_t1_ParamLimits

0xb8e6,	// (0x0002a8d9) list_double_graphic_pane_t1

0xb8fc,	// (0x0002a8ef) list_double_graphic_pane_t2_ParamLimits

0xb8fc,	// (0x0002a8ef) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e603) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e603) list_double_graphic_pane_t

0x062f,	// (0x0001f622) list_double2_graphic_pane_g1_ParamLimits

0x062f,	// (0x0001f622) list_double2_graphic_pane_g1

0x10ca,	// (0x000200bd) list_double2_graphic_pane_g2_ParamLimits

0x10ca,	// (0x000200bd) list_double2_graphic_pane_g2

0xb845,	// (0x0002a838) list_double2_graphic_pane_g3_ParamLimits

0xb845,	// (0x0002a838) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e608) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e608) list_double2_graphic_pane_g

0xb90e,	// (0x0002a901) list_double2_graphic_pane_t1_ParamLimits

0xb90e,	// (0x0002a901) list_double2_graphic_pane_t1

0xb924,	// (0x0002a917) list_double2_graphic_pane_t2_ParamLimits

0xb924,	// (0x0002a917) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e60f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e60f) list_double2_graphic_pane_t

0xb936,	// (0x0002a929) list_double_large_graphic_pane_g1_ParamLimits

0xb936,	// (0x0002a929) list_double_large_graphic_pane_g1

0xb955,	// (0x0002a948) list_double_large_graphic_pane_g2_ParamLimits

0xb955,	// (0x0002a948) list_double_large_graphic_pane_g2

0xb800,	// (0x0002a7f3) list_double_large_graphic_pane_g3_ParamLimits

0xb800,	// (0x0002a7f3) list_double_large_graphic_pane_g3

0xb966,	// (0x0002a959) list_double_large_graphic_pane_g4_ParamLimits

0xb966,	// (0x0002a959) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e614) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e614) list_double_large_graphic_pane_g

0xb979,	// (0x0002a96c) list_double_large_graphic_pane_t1_ParamLimits

0xb979,	// (0x0002a96c) list_double_large_graphic_pane_t1

0xb992,	// (0x0002a985) list_double_large_graphic_pane_t2_ParamLimits

0xb992,	// (0x0002a985) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e61f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e61f) list_double_large_graphic_pane_t

0xb9a4,	// (0x0002a997) list_double2_large_graphic_pane_g1_ParamLimits

0xb9a4,	// (0x0002a997) list_double2_large_graphic_pane_g1

0xb834,	// (0x0002a827) list_double2_large_graphic_pane_g2_ParamLimits

0xb834,	// (0x0002a827) list_double2_large_graphic_pane_g2

0xb845,	// (0x0002a838) list_double2_large_graphic_pane_g3_ParamLimits

0xb845,	// (0x0002a838) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e624) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e624) list_double2_large_graphic_pane_g

0xb9b0,	// (0x0002a9a3) list_double2_large_graphic_pane_t1_ParamLimits

0xb9b0,	// (0x0002a9a3) list_double2_large_graphic_pane_t1

0xb9c6,	// (0x0002a9b9) list_double2_large_graphic_pane_t2_ParamLimits

0xb9c6,	// (0x0002a9b9) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e62b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e62b) list_double2_large_graphic_pane_t

0xb9d8,	// (0x0002a9cb) list_double_heading_pane_g1_ParamLimits

0xb9d8,	// (0x0002a9cb) list_double_heading_pane_g1

0x0404,	// (0x0001f3f7) list_double_heading_pane_g2_ParamLimits

0x0404,	// (0x0001f3f7) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e630) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e630) list_double_heading_pane_g

0xb9e9,	// (0x0002a9dc) list_double_heading_pane_t1_ParamLimits

0xb9e9,	// (0x0002a9dc) list_double_heading_pane_t1

0xb867,	// (0x0002a85a) list_double_heading_pane_t2_ParamLimits

0xb867,	// (0x0002a85a) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e635) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e635) list_double_heading_pane_t

0x062f,	// (0x0001f622) list_double_graphic_heading_pane_g1_ParamLimits

0x062f,	// (0x0001f622) list_double_graphic_heading_pane_g1

0xb9d8,	// (0x0002a9cb) list_double_graphic_heading_pane_g2_ParamLimits

0xb9d8,	// (0x0002a9cb) list_double_graphic_heading_pane_g2

0x0404,	// (0x0001f3f7) list_double_graphic_heading_pane_g3_ParamLimits

0x0404,	// (0x0001f3f7) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e63a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e63a) list_double_graphic_heading_pane_g

0xb9ff,	// (0x0002a9f2) list_double_graphic_heading_pane_t1_ParamLimits

0xb9ff,	// (0x0002a9f2) list_double_graphic_heading_pane_t1

0xb924,	// (0x0002a917) list_double_graphic_heading_pane_t2_ParamLimits

0xb924,	// (0x0002a917) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e641) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e641) list_double_graphic_heading_pane_t

0xb955,	// (0x0002a948) list_double_time_pane_g1_ParamLimits

0xb955,	// (0x0002a948) list_double_time_pane_g1

0xb800,	// (0x0002a7f3) list_double_time_pane_g2_ParamLimits

0xb800,	// (0x0002a7f3) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e646) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e646) list_double_time_pane_g

0xba15,	// (0x0002aa08) list_double_time_pane_t1_ParamLimits

0xba15,	// (0x0002aa08) list_double_time_pane_t1

0xba2b,	// (0x0002aa1e) list_double_time_pane_t2_ParamLimits

0xba2b,	// (0x0002aa1e) list_double_time_pane_t2

0xba3d,	// (0x0002aa30) list_double_time_pane_t3_ParamLimits

0xba3d,	// (0x0002aa30) list_double_time_pane_t3

0xba4f,	// (0x0002aa42) list_double_time_pane_t4_ParamLimits

0xba4f,	// (0x0002aa42) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e64b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e64b) list_double_time_pane_t

0xba61,	// (0x0002aa54) list_setting_pane_g1_ParamLimits

0xba61,	// (0x0002aa54) list_setting_pane_g1

0xba6d,	// (0x0002aa60) list_setting_pane_g2_ParamLimits

0xba6d,	// (0x0002aa60) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e654) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e654) list_setting_pane_g

0xba79,	// (0x0002aa6c) list_setting_pane_t1_ParamLimits

0xba79,	// (0x0002aa6c) list_setting_pane_t1

0xba93,	// (0x0002aa86) list_setting_pane_t2_ParamLimits

0xba93,	// (0x0002aa86) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e659) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e659) list_setting_pane_t

0xbad2,	// (0x0002aac5) set_value_pane_cp_ParamLimits

0xbad2,	// (0x0002aac5) set_value_pane_cp

0xbade,	// (0x0002aad1) list_setting_number_pane_g1_ParamLimits

0xbade,	// (0x0002aad1) list_setting_number_pane_g1

0xbaea,	// (0x0002aadd) list_setting_number_pane_g2_ParamLimits

0xbaea,	// (0x0002aadd) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e660) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e660) list_setting_number_pane_g

0xbaf6,	// (0x0002aae9) list_setting_number_pane_t1_ParamLimits

0xbaf6,	// (0x0002aae9) list_setting_number_pane_t1

0xbb0f,	// (0x0002ab02) list_setting_number_pane_t2_ParamLimits

0xbb0f,	// (0x0002ab02) list_setting_number_pane_t2

0xbb29,	// (0x0002ab1c) list_setting_number_pane_t3_ParamLimits

0xbb29,	// (0x0002ab1c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e665) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e665) list_setting_number_pane_t

0xbad2,	// (0x0002aac5) set_value_pane_ParamLimits

0xbad2,	// (0x0002aac5) set_value_pane

0x40f4,	// (0x000230e7) bg_set_opt_pane_ParamLimits

0x40f4,	// (0x000230e7) bg_set_opt_pane

0x0790,	// (0x0001f783) set_value_pane_t1

0x4115,	// (0x00023108) slider_set_pane_cp3

0x411e,	// (0x00023111) volume_small_pane_cp

0x4127,	// (0x0002311a) list_form_gen_pane

0x4130,	// (0x00023123) scroll_pane_cp8

0xbb6c,	// (0x0002ab5f) form_field_data_pane_ParamLimits

0xbb6c,	// (0x0002ab5f) form_field_data_pane

0xbb83,	// (0x0002ab76) form_field_data_wide_pane_ParamLimits

0xbb83,	// (0x0002ab76) form_field_data_wide_pane

0xbba3,	// (0x0002ab96) form_field_popup_pane_ParamLimits

0xbba3,	// (0x0002ab96) form_field_popup_pane

0xbbbb,	// (0x0002abae) form_field_popup_wide_pane_ParamLimits

0xbbbb,	// (0x0002abae) form_field_popup_wide_pane

0x0824,	// (0x0001f817) form_field_slider_pane_ParamLimits

0x0824,	// (0x0001f817) form_field_slider_pane

0x0837,	// (0x0001f82a) form_field_slider_wide_pane_ParamLimits

0x0837,	// (0x0001f82a) form_field_slider_wide_pane

0x4141,	// (0x00023134) data_form_pane

0xbbdc,	// (0x0002abcf) form_field_data_pane_t1

0x414d,	// (0x00023140) input_focus_pane

0x086c,	// (0x0001f85f) data_form_wide_pane

0x0889,	// (0x0001f87c) form_field_data_wide_pane_t1

0x3ebe,	// (0x00022eb1) input_focus_pane_cp6

0xbbf6,	// (0x0002abe9) form_field_popup_pane_t1

0x414d,	// (0x00023140) input_focus_pane_cp7

0x417b,	// (0x0002316e) list_form_pane

0x08cb,	// (0x0001f8be) form_field_popup_wide_pane_t1

0x414d,	// (0x00023140) input_focus_pane_cp8

0x4187,	// (0x0002317a) list_form_wide_pane

0xbc18,	// (0x0002ac0b) form_field_slider_pane_t1_ParamLimits

0xbc18,	// (0x0002ac0b) form_field_slider_pane_t1

0xbc30,	// (0x0002ac23) form_field_slider_pane_t2_ParamLimits

0xbc30,	// (0x0002ac23) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e675) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e675) form_field_slider_pane_t

0x3b59,	// (0x00022b4c) input_focus_pane_cp9_ParamLimits

0x3b59,	// (0x00022b4c) input_focus_pane_cp9

0xbc45,	// (0x0002ac38) slider_cont_pane_ParamLimits

0xbc45,	// (0x0002ac38) slider_cont_pane

0x4193,	// (0x00023186) form_field_slider_wide_pane_t1_ParamLimits

0x4193,	// (0x00023186) form_field_slider_wide_pane_t1

0x0927,	// (0x0001f91a) form_field_slider_wide_pane_t2_ParamLimits

0x0927,	// (0x0001f91a) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e67a) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e67a) form_field_slider_wide_pane_t

0x3b59,	// (0x00022b4c) input_focus_pane_cp10_ParamLimits

0x3b59,	// (0x00022b4c) input_focus_pane_cp10

0xbc59,	// (0x0002ac4c) slider_cont_pane_cp1_ParamLimits

0xbc59,	// (0x0002ac4c) slider_cont_pane_cp1

0xbc6d,	// (0x0002ac60) slider_form_pane_cp

0x41a5,	// (0x00023198) input_focus_pane_g1

0x41ad,	// (0x000231a0) input_focus_pane_g2

0x41b5,	// (0x000231a8) input_focus_pane_g3

0x41bd,	// (0x000231b0) input_focus_pane_g4

0x41c5,	// (0x000231b8) input_focus_pane_g5

0x41cd,	// (0x000231c0) input_focus_pane_g6

0x41d5,	// (0x000231c8) input_focus_pane_g7

0x41dd,	// (0x000231d0) input_focus_pane_g8

0x41e5,	// (0x000231d8) input_focus_pane_g9

0x37f4,	// (0x000227e7) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e67f) input_focus_pane_g

0x5c5a,	// (0x00024c4d) wait_border_pane_g3_copy1

0xbc75,	// (0x0002ac68) data_form_pane_t1

0x37f4,	// (0x000227e7) wait_anim_pane_g1_copy1

0xbd95,	// (0x0002ad88) data_form_wide_pane_t1

0xbc8f,	// (0x0002ac82) list_form_graphic_pane_cp_ParamLimits

0xbc8f,	// (0x0002ac82) list_form_graphic_pane_cp

0x6b7a,	// (0x00025b6d) slider_form_pane_g1

0x6b83,	// (0x00025b76) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002e976) slider_form_pane_g

0xbc8f,	// (0x0002ac82) list_form_graphic_pane_ParamLimits

0xbc8f,	// (0x0002ac82) list_form_graphic_pane

0x09a5,	// (0x0001f998) list_form_graphic_pane_g1

0x09ad,	// (0x0001f9a0) list_form_graphic_pane_t1_ParamLimits

0x09ad,	// (0x0001f9a0) list_form_graphic_pane_t1

0x38de,	// (0x000228d1) list_highlight_pane_cp5_ParamLimits

0x38de,	// (0x000228d1) list_highlight_pane_cp5

0xbca1,	// (0x0002ac94) find_pane_g1

0x41ed,	// (0x000231e0) input_find_pane

0xbcaa,	// (0x0002ac9d) input_find_pane_g1_ParamLimits

0xbcaa,	// (0x0002ac9d) input_find_pane_g1

0xbcb6,	// (0x0002aca9) input_find_pane_t1_ParamLimits

0xbcb6,	// (0x0002aca9) input_find_pane_t1

0xbccb,	// (0x0002acbe) input_find_pane_t2_ParamLimits

0xbccb,	// (0x0002acbe) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e694) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e694) input_find_pane_t

0x41f6,	// (0x000231e9) input_focus_pane_cp5_ParamLimits

0x41f6,	// (0x000231e9) input_focus_pane_cp5

0x4210,	// (0x00023203) bg_popup_window_pane_cp2_ParamLimits

0x4210,	// (0x00023203) bg_popup_window_pane_cp2

0x421d,	// (0x00023210) listscroll_menu_pane_ParamLimits

0x421d,	// (0x00023210) listscroll_menu_pane

0xd422,	// (0x0002c415) popup_submenu_window_ParamLimits

0xd422,	// (0x0002c415) popup_submenu_window

0x4255,	// (0x00023248) find_popup_pane_g1

0x425d,	// (0x00023250) input_popup_find_pane_cp

0x41f6,	// (0x000231e9) input_focus_pane_cp4_ParamLimits

0x41f6,	// (0x000231e9) input_focus_pane_cp4

0x4273,	// (0x00023266) input_popup_find_pane_t1_ParamLimits

0x4273,	// (0x00023266) input_popup_find_pane_t1

0x37fe,	// (0x000227f1) bg_popup_sub_pane_cp

0x42a1,	// (0x00023294) listscroll_popup_sub_pane

0x42a9,	// (0x0002329c) list_submenu_pane_ParamLimits

0x42a9,	// (0x0002329c) list_submenu_pane

0x42ba,	// (0x000232ad) scroll_pane_cp4

0x42c2,	// (0x000232b5) list_single_popup_submenu_pane_ParamLimits

0x42c2,	// (0x000232b5) list_single_popup_submenu_pane

0x42d6,	// (0x000232c9) list_single_popup_submenu_pane_g1

0x42de,	// (0x000232d1) list_single_popup_submenu_pane_t1_ParamLimits

0x42de,	// (0x000232d1) list_single_popup_submenu_pane_t1

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp1_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp1

0x42f3,	// (0x000232e6) tabs_2_active_pane_g1

0xd45c,	// (0x0002c44f) tabs_2_active_pane_t1

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp1_ParamLimits

0x3b59,	// (0x00022b4c) bg_passive_tab_pane_cp1

0x42f3,	// (0x000232e6) tabs_2_passive_pane_g1

0xd45c,	// (0x0002c44f) tabs_2_passive_pane_t1

0x38de,	// (0x000228d1) bg_active_tab_pane_cp4

0xd46e,	// (0x0002c461) tabs_2_long_active_pane_t1

0x5133,	// (0x00024126) bg_passive_tab_pane_cp4

0x24d4,	// (0x000214c7) list_single_midp_graphic_pane_g4_ParamLimits

0x38de,	// (0x000228d1) bg_active_tab_pane_cp5

0xd481,	// (0x0002c474) tabs_3_long_active_pane_t1

0x5133,	// (0x00024126) bg_passive_tab_pane_cp5

0x24d4,	// (0x000214c7) list_single_midp_graphic_pane_g4

0x38de,	// (0x000228d1) bg_popup_window_pane_cp13_ParamLimits

0x38de,	// (0x000228d1) bg_popup_window_pane_cp13

0x4355,	// (0x00023348) listscroll_popup_fast_pane_ParamLimits

0x4355,	// (0x00023348) listscroll_popup_fast_pane

0x4364,	// (0x00023357) grid_popup_fast_pane_ParamLimits

0x4364,	// (0x00023357) grid_popup_fast_pane

0x4376,	// (0x00023369) scroll_pane_cp9_ParamLimits

0x4376,	// (0x00023369) scroll_pane_cp9

0x8478,	// (0x0002746b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8478,	// (0x0002746b) list_single_graphic_hl_pane_t1_cp2

0x439a,	// (0x0002338d) input_focus_pane_cp20_ParamLimits

0x439a,	// (0x0002338d) input_focus_pane_cp20

0x43a8,	// (0x0002339b) query_popup_data_pane_t1_ParamLimits

0x43a8,	// (0x0002339b) query_popup_data_pane_t1

0x43bb,	// (0x000233ae) query_popup_data_pane_t2_ParamLimits

0x43bb,	// (0x000233ae) query_popup_data_pane_t2

0x4401,	// (0x000233f4) query_popup_data_pane_t3_ParamLimits

0x4401,	// (0x000233f4) query_popup_data_pane_t3

0x4442,	// (0x00023435) query_popup_data_pane_t4_ParamLimits

0x4442,	// (0x00023435) query_popup_data_pane_t4

0x447e,	// (0x00023471) query_popup_data_pane_t5_ParamLimits

0x447e,	// (0x00023471) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e699) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e699) query_popup_data_pane_t

0x41a5,	// (0x00023198) bg_set_opt_pane_g1

0x41ad,	// (0x000231a0) bg_set_opt_pane_g2

0x41b5,	// (0x000231a8) bg_set_opt_pane_g3

0x41bd,	// (0x000231b0) bg_set_opt_pane_g4

0x41c5,	// (0x000231b8) bg_set_opt_pane_g5

0x41cd,	// (0x000231c0) bg_set_opt_pane_g6

0x41d5,	// (0x000231c8) bg_set_opt_pane_g7

0x41dd,	// (0x000231d0) bg_set_opt_pane_g8

0x41e5,	// (0x000231d8) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e6a4) bg_set_opt_pane_g

0x1b7a,	// (0x00020b6d) control_top_pane_stacon_ParamLimits

0x1b7a,	// (0x00020b6d) control_top_pane_stacon

0x1bcd,	// (0x00020bc0) signal_pane_stacon_ParamLimits

0x1bcd,	// (0x00020bc0) signal_pane_stacon

0x4a72,	// (0x00023a65) stacon_top_pane_g1_ParamLimits

0x4a72,	// (0x00023a65) stacon_top_pane_g1

0x1bf2,	// (0x00020be5) title_pane_stacon_ParamLimits

0x1bf2,	// (0x00020be5) title_pane_stacon

0x1c1c,	// (0x00020c0f) uni_indicator_pane_stacon_ParamLimits

0x1c1c,	// (0x00020c0f) uni_indicator_pane_stacon

0x1c31,	// (0x00020c24) battery_pane_stacon_ParamLimits

0x1c31,	// (0x00020c24) battery_pane_stacon

0x1c75,	// (0x00020c68) control_bottom_pane_stacon_ParamLimits

0x1c75,	// (0x00020c68) control_bottom_pane_stacon

0x1c98,	// (0x00020c8b) navi_pane_stacon_ParamLimits

0x1c98,	// (0x00020c8b) navi_pane_stacon

0x4a94,	// (0x00023a87) stacon_bottom_pane_g1_ParamLimits

0x4a94,	// (0x00023a87) stacon_bottom_pane_g1

0x18dd,	// (0x000208d0) aid_levels_signal_lsc_ParamLimits

0x18dd,	// (0x000208d0) aid_levels_signal_lsc

0x18f3,	// (0x000208e6) signal_pane_stacon_g1_ParamLimits

0x18f3,	// (0x000208e6) signal_pane_stacon_g1

0x1907,	// (0x000208fa) signal_pane_stacon_g2_ParamLimits

0x1907,	// (0x000208fa) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e6b7) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e6b7) signal_pane_stacon_g

0x193c,	// (0x0002092f) title_pane_stacon_t1_ParamLimits

0x193c,	// (0x0002092f) title_pane_stacon_t1

0x44c2,	// (0x000234b5) uni_indicator_pane_stacon_g1

0x44cc,	// (0x000234bf) uni_indicator_pane_stacon_g2

0x44d6,	// (0x000234c9) uni_indicator_pane_stacon_g3

0x44e0,	// (0x000234d3) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e6c3) uni_indicator_pane_stacon_g

0x1961,	// (0x00020954) control_top_pane_stacon_g1

0x1969,	// (0x0002095c) control_top_pane_stacon_t1_ParamLimits

0x1969,	// (0x0002095c) control_top_pane_stacon_t1

0x19a0,	// (0x00020993) aid_levels_battery_lsc_ParamLimits

0x19a0,	// (0x00020993) aid_levels_battery_lsc

0x19b7,	// (0x000209aa) battery_pane_stacon_g1_ParamLimits

0x19b7,	// (0x000209aa) battery_pane_stacon_g1

0x19ca,	// (0x000209bd) battery_pane_stacon_g2_ParamLimits

0x19ca,	// (0x000209bd) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e6cc) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e6cc) battery_pane_stacon_g

0x1a08,	// (0x000209fb) navi_icon_pane_stacon

0x1a1c,	// (0x00020a0f) navi_navi_pane_stacon

0x1a08,	// (0x000209fb) navi_text_pane_stacon

0x1961,	// (0x00020954) control_bottom_pane_stacon_g1

0x1a30,	// (0x00020a23) control_bottom_pane_stacon_t1_ParamLimits

0x1a30,	// (0x00020a23) control_bottom_pane_stacon_t1

0xd493,	// (0x0002c486) grid_app_pane_ParamLimits

0xd493,	// (0x0002c486) grid_app_pane

0xd4cb,	// (0x0002c4be) scroll_pane_cp15_ParamLimits

0xd4cb,	// (0x0002c4be) scroll_pane_cp15

0xd4e0,	// (0x0002c4d3) cell_app_pane_ParamLimits

0xd4e0,	// (0x0002c4d3) cell_app_pane

0xd525,	// (0x0002c518) cell_app_pane_g1_ParamLimits

0xd525,	// (0x0002c518) cell_app_pane_g1

0x4587,	// (0x0002357a) cell_app_pane_g2_ParamLimits

0x4587,	// (0x0002357a) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e6d1) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e6d1) cell_app_pane_g

0xd549,	// (0x0002c53c) cell_app_pane_t1_ParamLimits

0xd549,	// (0x0002c53c) cell_app_pane_t1

0x45aa,	// (0x0002359d) grid_highlight_pane_ParamLimits

0x45aa,	// (0x0002359d) grid_highlight_pane

0x41a5,	// (0x00023198) cell_highlight_pane_g1

0x41ad,	// (0x000231a0) cell_highlight_pane_g2

0x41b5,	// (0x000231a8) cell_highlight_pane_g3

0x41bd,	// (0x000231b0) cell_highlight_pane_g4

0x41c5,	// (0x000231b8) cell_highlight_pane_g5

0x41cd,	// (0x000231c0) cell_highlight_pane_g6

0x41d5,	// (0x000231c8) cell_highlight_pane_g7

0x41dd,	// (0x000231d0) cell_highlight_pane_g8

0x41e5,	// (0x000231d8) cell_highlight_pane_g9

0x37f4,	// (0x000227e7) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e67f) cell_highlight_pane_g

0x45bb,	// (0x000235ae) bg_scroll_pane

0x1a7a,	// (0x00020a6d) scroll_handle_pane

0x4602,	// (0x000235f5) scroll_bg_pane_g1

0x4617,	// (0x0002360a) scroll_bg_pane_g2

0x462f,	// (0x00023622) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e6d6) scroll_bg_pane_g

0x4644,	// (0x00023637) scroll_handle_focus_pane_ParamLimits

0x4644,	// (0x00023637) scroll_handle_focus_pane

0x4602,	// (0x000235f5) scroll_handle_pane_g1

0x4651,	// (0x00023644) scroll_handle_pane_g2

0x462f,	// (0x00023622) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e6dd) scroll_handle_pane_g

0x41f6,	// (0x000231e9) bg_popup_sub_pane_cp21_ParamLimits

0x41f6,	// (0x000231e9) bg_popup_sub_pane_cp21

0x4665,	// (0x00023658) popup_fep_japan_predictive_window_t1_ParamLimits

0x4665,	// (0x00023658) popup_fep_japan_predictive_window_t1

0x467f,	// (0x00023672) popup_fep_japan_predictive_window_t2_ParamLimits

0x467f,	// (0x00023672) popup_fep_japan_predictive_window_t2

0x46b2,	// (0x000236a5) popup_fep_japan_predictive_window_t3_ParamLimits

0x46b2,	// (0x000236a5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e6e4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e6e4) popup_fep_japan_predictive_window_t

0x37fe,	// (0x000227f1) bg_popup_sub_pane_cp23

0x46e9,	// (0x000236dc) listscroll_japin_cand_pane

0x46f1,	// (0x000236e4) popup_fep_japan_candidate_window_t1

0x46ff,	// (0x000236f2) candidate_pane_ParamLimits

0x46ff,	// (0x000236f2) candidate_pane

0x4711,	// (0x00023704) scroll_pane_cp30

0x4719,	// (0x0002370c) list_single_popup_jap_candidate_pane_ParamLimits

0x4719,	// (0x0002370c) list_single_popup_jap_candidate_pane

0x37fe,	// (0x000227f1) list_highlight_pane_cp30

0x472e,	// (0x00023721) list_single_popup_jap_candidate_pane_t1

0x473d,	// (0x00023730) level_1_signal

0x474f,	// (0x00023742) level_2_signal

0x4762,	// (0x00023755) level_3_signal

0x4775,	// (0x00023768) level_4_signal

0x4788,	// (0x0002377b) level_5_signal

0x479b,	// (0x0002378e) level_6_signal

0x47ae,	// (0x000237a1) level_7_signal

0x473d,	// (0x00023730) level_1_battery

0x474f,	// (0x00023742) level_2_battery

0x4762,	// (0x00023755) level_3_battery

0x4775,	// (0x00023768) level_4_battery

0x4788,	// (0x0002377b) level_5_battery

0x479b,	// (0x0002378e) level_6_battery

0x47ae,	// (0x000237a1) level_7_battery

0x47d9,	// (0x000237cc) list_menu_pane_ParamLimits

0x47d9,	// (0x000237cc) list_menu_pane

0x47ef,	// (0x000237e2) scroll_pane_cp25_ParamLimits

0x47ef,	// (0x000237e2) scroll_pane_cp25

0x4808,	// (0x000237fb) list_double2_graphic_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double2_graphic_pane_cp2

0x4808,	// (0x000237fb) list_double2_large_graphic_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double2_large_graphic_pane_cp2

0x4808,	// (0x000237fb) list_double2_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double2_pane_cp2

0x4808,	// (0x000237fb) list_double_graphic_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double_graphic_pane_cp2

0x4808,	// (0x000237fb) list_double_large_graphic_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double_large_graphic_pane_cp2

0x4808,	// (0x000237fb) list_double_number_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double_number_pane_cp2

0x4808,	// (0x000237fb) list_double_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double_pane_cp2

0xd560,	// (0x0002c553) list_single_2graphic_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_2graphic_pane_cp2

0xd560,	// (0x0002c553) list_single_graphic_heading_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_graphic_heading_pane_cp2

0xd560,	// (0x0002c553) list_single_graphic_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_graphic_pane_cp2

0xd560,	// (0x0002c553) list_single_heading_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_heading_pane_cp2

0x4845,	// (0x00023838) list_single_large_graphic_pane_cp2_ParamLimits

0x4845,	// (0x00023838) list_single_large_graphic_pane_cp2

0xd560,	// (0x0002c553) list_single_number_heading_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_number_heading_pane_cp2

0xd560,	// (0x0002c553) list_single_number_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_number_pane_cp2

0xd560,	// (0x0002c553) list_single_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_pane_cp2

0x48c1,	// (0x000238b4) bg_popup_sub_pane_cp22

0x1b2c,	// (0x00020b1f) popup_side_volume_key_window_g1

0x1b56,	// (0x00020b49) popup_side_volume_key_window_t1

0x1b72,	// (0x00020b65) volume_small_pane_cp1

0x3b59,	// (0x00022b4c) bg_popup_sub_pane_cp24_ParamLimits

0x3b59,	// (0x00022b4c) bg_popup_sub_pane_cp24

0x48d7,	// (0x000238ca) fep_china_uni_candidate_pane_ParamLimits

0x48d7,	// (0x000238ca) fep_china_uni_candidate_pane

0x48eb,	// (0x000238de) fep_china_uni_entry_pane

0x48fb,	// (0x000238ee) popup_fep_china_uni_window_g1

0x4917,	// (0x0002390a) fep_china_uni_entry_pane_g1

0x491f,	// (0x00023912) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e715) fep_china_uni_entry_pane_g

0x4927,	// (0x0002391a) fep_entry_item_pane

0x4931,	// (0x00023924) fep_candidate_item_pane

0x4939,	// (0x0002392c) fep_china_uni_candidate_pane_g1

0x4941,	// (0x00023934) fep_china_uni_candidate_pane_g2

0x4949,	// (0x0002393c) fep_china_uni_candidate_pane_g3

0x4951,	// (0x00023944) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e71a) fep_china_uni_candidate_pane_g

0x37f4,	// (0x000227e7) fep_entry_item_pane_g1

0x4959,	// (0x0002394c) fep_entry_item_pane_t1_ParamLimits

0x4959,	// (0x0002394c) fep_entry_item_pane_t1

0x496f,	// (0x00023962) fep_candidate_item_pane_t1_ParamLimits

0x496f,	// (0x00023962) fep_candidate_item_pane_t1

0x4984,	// (0x00023977) fep_candidate_item_pane_t2_ParamLimits

0x4984,	// (0x00023977) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e723) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e723) fep_candidate_item_pane_t

0x38de,	// (0x000228d1) list_highlight_pane_cp31_ParamLimits

0x38de,	// (0x000228d1) list_highlight_pane_cp31

0x4996,	// (0x00023989) level_1_signal_lsc

0x499f,	// (0x00023992) level_2_signal_lsc

0x49a8,	// (0x0002399b) level_3_signal_lsc

0x49b1,	// (0x000239a4) level_4_signal_lsc

0x49ba,	// (0x000239ad) level_5_signal_lsc

0x49c3,	// (0x000239b6) level_6_signal_lsc

0x49cc,	// (0x000239bf) level_7_signal_lsc

0x49cc,	// (0x000239bf) level_1_battery_lsc

0x49d5,	// (0x000239c8) level_2_battery_lsc

0x49de,	// (0x000239d1) level_3_battery_lsc

0x49e7,	// (0x000239da) level_4_battery_lsc

0x49f0,	// (0x000239e3) level_5_battery_lsc

0x49f9,	// (0x000239ec) level_6_battery_lsc

0x4996,	// (0x00023989) level_7_battery_lsc

0x4a02,	// (0x000239f5) scroll_handle_focus_pane_g1

0x4a0b,	// (0x000239fe) scroll_handle_focus_pane_g2

0x4a14,	// (0x00023a07) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e728) scroll_handle_focus_pane_g

0xbce0,	// (0x0002acd3) list_single_2graphic_pane_g1_ParamLimits

0xbce0,	// (0x0002acd3) list_single_2graphic_pane_g1

0xb7c9,	// (0x0002a7bc) list_single_2graphic_pane_g2_ParamLimits

0xb7c9,	// (0x0002a7bc) list_single_2graphic_pane_g2

0x0acf,	// (0x0001fac2) list_single_2graphic_pane_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_single_2graphic_pane_g3

0xbcec,	// (0x0002acdf) list_single_2graphic_pane_g4_ParamLimits

0xbcec,	// (0x0002acdf) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e72f) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e72f) list_single_2graphic_pane_g

0xbcf8,	// (0x0002aceb) list_single_2graphic_pane_t1_ParamLimits

0xbcf8,	// (0x0002aceb) list_single_2graphic_pane_t1

0xbd26,	// (0x0002ad19) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd26,	// (0x0002ad19) list_double2_graphic_large_graphic_pane_g1

0xb834,	// (0x0002a827) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb834,	// (0x0002a827) list_double2_graphic_large_graphic_pane_g2

0xb845,	// (0x0002a838) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb845,	// (0x0002a838) list_double2_graphic_large_graphic_pane_g3

0xbd38,	// (0x0002ad2b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd38,	// (0x0002ad2b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e738) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e738) list_double2_graphic_large_graphic_pane_g

0xbd44,	// (0x0002ad37) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd44,	// (0x0002ad37) list_double2_graphic_large_graphic_pane_t1

0xbd5a,	// (0x0002ad4d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd5a,	// (0x0002ad4d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e741) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e741) list_double2_graphic_large_graphic_pane_t

0x4b5c,	// (0x00023b4f) popup_fast_swap_window_ParamLimits

0x4b5c,	// (0x00023b4f) popup_fast_swap_window

0x4b78,	// (0x00023b6b) popup_side_volume_key_window

0x4b94,	// (0x00023b87) stacon_top_pane

0x4b9e,	// (0x00023b91) status_pane_ParamLimits

0x4b9e,	// (0x00023b91) status_pane

0xd5ed,	// (0x0002c5e0) status_small_pane

0x37fe,	// (0x000227f1) control_pane

0x37fe,	// (0x000227f1) stacon_bottom_pane

0x4130,	// (0x00023123) scroll_pane_cp121

0x4127,	// (0x0002311a) set_content_pane

0x4a1d,	// (0x00023a10) bg_active_tab_pane_g1_cp1

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp1

0x4a2f,	// (0x00023a22) bg_active_tab_pane_g3_cp1

0x4a1d,	// (0x00023a10) bg_passive_tab_pane_g1_cp1

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp1

0x4a2f,	// (0x00023a22) bg_passive_tab_pane_g3_cp1

0x4a38,	// (0x00023a2b) bg_active_tab_pane_g1_cp2

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp2

0x4a41,	// (0x00023a34) bg_active_tab_pane_g3_cp2

0x4a38,	// (0x00023a2b) bg_passive_tab_pane_g1_cp2

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp2

0x4a41,	// (0x00023a34) bg_passive_tab_pane_g3_cp2

0x4a4a,	// (0x00023a3d) bg_active_tab_pane_g1_cp3

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp3

0x4a53,	// (0x00023a46) bg_active_tab_pane_g3_cp3

0x4a4a,	// (0x00023a3d) bg_passive_tab_pane_g1_cp3

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp3

0x4a53,	// (0x00023a46) bg_passive_tab_pane_g3_cp3

0x4a5c,	// (0x00023a4f) bg_active_tab_pane_g1_cp4

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp4

0x4a67,	// (0x00023a5a) bg_active_tab_pane_g3_cp4

0x4a5c,	// (0x00023a4f) bg_passive_tab_pane_g1_cp4

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp4

0x4a67,	// (0x00023a5a) bg_passive_tab_pane_g3_cp4

0x4ab0,	// (0x00023aa3) bg_active_tab_pane_g1_cp5

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp5

0x4ab9,	// (0x00023aac) bg_active_tab_pane_g3_cp5

0x4ab0,	// (0x00023aa3) bg_passive_tab_pane_g1_cp5

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp5

0x4ab9,	// (0x00023aac) bg_passive_tab_pane_g3_cp5

0x7177,	// (0x0002616a) list_set_graphic_pane_ParamLimits

0x7177,	// (0x0002616a) list_set_graphic_pane

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp4

0x4adf,	// (0x00023ad2) list_set_graphic_pane_g1_ParamLimits

0x4adf,	// (0x00023ad2) list_set_graphic_pane_g1

0x4aeb,	// (0x00023ade) list_set_graphic_pane_g2_ParamLimits

0x4aeb,	// (0x00023ade) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e746) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e746) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002eaa8) volume_small_pane_cp_g

0x4b0f,	// (0x00023b02) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4b0f,	// (0x00023b02) list_double2_large_graphic_pane_g1_cp2

0x4b1b,	// (0x00023b0e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4b1b,	// (0x00023b0e) list_double2_large_graphic_pane_g2_cp2

0x4b2c,	// (0x00023b1f) list_double2_large_graphic_pane_g3_cp2

0x4b34,	// (0x00023b27) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4b34,	// (0x00023b27) list_double2_large_graphic_pane_t1_cp2

0x4b4a,	// (0x00023b3d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4b4a,	// (0x00023b3d) list_double2_large_graphic_pane_t2_cp2

0x672d,	// (0x00025720) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x672d,	// (0x00025720) list_double_large_graphic_pane_g1_cp2

0x673e,	// (0x00025731) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x673e,	// (0x00025731) list_double_large_graphic_pane_g2_cp2

0x4cc5,	// (0x00023cb8) list_double_large_graphic_pane_g3_cp2

0x674f,	// (0x00025742) list_double_large_graphic_pane_g4_cp

0x6757,	// (0x0002574a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6757,	// (0x0002574a) list_double_large_graphic_pane_t1_cp2

0x676e,	// (0x00025761) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x676e,	// (0x00025761) list_double_large_graphic_pane_t2_cp2

0x4bb7,	// (0x00023baa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4bb7,	// (0x00023baa) list_double2_graphic_pane_g1_cp2

0x4bc5,	// (0x00023bb8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4bc5,	// (0x00023bb8) list_double2_graphic_pane_g2_cp2

0x4bd6,	// (0x00023bc9) list_double2_graphic_pane_g3_cp2

0x4be0,	// (0x00023bd3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4be0,	// (0x00023bd3) list_double2_graphic_pane_t1_cp2

0x4bf6,	// (0x00023be9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4bf6,	// (0x00023be9) list_double2_graphic_pane_t2_cp2

0x4c08,	// (0x00023bfb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4c08,	// (0x00023bfb) list_single_number_heading_pane_g1_cp2

0x4c14,	// (0x00023c07) list_single_number_heading_pane_g2_cp2

0x4c1c,	// (0x00023c0f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4c1c,	// (0x00023c0f) list_single_number_heading_pane_t1_cp2

0x4c32,	// (0x00023c25) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4c32,	// (0x00023c25) list_single_number_heading_pane_t2_cp2

0x4c44,	// (0x00023c37) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4c44,	// (0x00023c37) list_single_number_heading_pane_t3_cp2

0x4c08,	// (0x00023bfb) list_single_heading_pane_g1_cp2_ParamLimits

0x4c08,	// (0x00023bfb) list_single_heading_pane_g1_cp2

0x4c14,	// (0x00023c07) list_single_heading_pane_g2_cp2

0x4c1c,	// (0x00023c0f) list_single_heading_pane_t1_cp2_ParamLimits

0x4c1c,	// (0x00023c0f) list_single_heading_pane_t1_cp2

0x6535,	// (0x00025528) list_single_heading_pane_t2_cp2_ParamLimits

0x6535,	// (0x00025528) list_single_heading_pane_t2_cp2

0x647d,	// (0x00025470) list_double_graphic_pane_g1_cp2_ParamLimits

0x647d,	// (0x00025470) list_double_graphic_pane_g1_cp2

0x6489,	// (0x0002547c) list_double_graphic_pane_g2_cp2_ParamLimits

0x6489,	// (0x0002547c) list_double_graphic_pane_g2_cp2

0x6498,	// (0x0002548b) list_double_graphic_pane_g3_cp2

0x64a0,	// (0x00025493) list_double_graphic_pane_t1_cp2_ParamLimits

0x64a0,	// (0x00025493) list_double_graphic_pane_t1_cp2

0x64b6,	// (0x000254a9) list_double_graphic_pane_t2_cp2_ParamLimits

0x64b6,	// (0x000254a9) list_double_graphic_pane_t2_cp2

0x4cb9,	// (0x00023cac) list_double_number_pane_g1_cp2_ParamLimits

0x4cb9,	// (0x00023cac) list_double_number_pane_g1_cp2

0x4cc5,	// (0x00023cb8) list_double_number_pane_g2_cp2

0x6441,	// (0x00025434) list_double_number_pane_t1_cp2_ParamLimits

0x6441,	// (0x00025434) list_double_number_pane_t1_cp2

0x6455,	// (0x00025448) list_double_number_pane_t2_cp2_ParamLimits

0x6455,	// (0x00025448) list_double_number_pane_t2_cp2

0x646b,	// (0x0002545e) list_double_number_pane_t3_cp2_ParamLimits

0x646b,	// (0x0002545e) list_double_number_pane_t3_cp2

0x632a,	// (0x0002531d) list_single_graphic_pane_g1_cp2_ParamLimits

0x632a,	// (0x0002531d) list_single_graphic_pane_g1_cp2

0x4d1d,	// (0x00023d10) list_single_graphic_pane_g2_cp2_ParamLimits

0x4d1d,	// (0x00023d10) list_single_graphic_pane_g2_cp2

0x4d29,	// (0x00023d1c) list_single_graphic_pane_g3_cp2

0x6300,	// (0x000252f3) list_single_graphic_pane_t1_cp2_ParamLimits

0x6300,	// (0x000252f3) list_single_graphic_pane_t1_cp2

0x4d1d,	// (0x00023d10) list_single_number_pane_g1_cp2_ParamLimits

0x4d1d,	// (0x00023d10) list_single_number_pane_g1_cp2

0x4d29,	// (0x00023d1c) list_single_number_pane_g2_cp2

0x6300,	// (0x000252f3) list_single_number_pane_t1_cp2_ParamLimits

0x6300,	// (0x000252f3) list_single_number_pane_t1_cp2

0x6316,	// (0x00025309) list_single_number_pane_t2_cp2_ParamLimits

0x6316,	// (0x00025309) list_single_number_pane_t2_cp2

0x4b1b,	// (0x00023b0e) list_double2_pane_g1_cp2_ParamLimits

0x4b1b,	// (0x00023b0e) list_double2_pane_g1_cp2

0x4b2c,	// (0x00023b1f) list_double2_pane_g2_cp2

0x4c91,	// (0x00023c84) list_double2_pane_t1_cp2_ParamLimits

0x4c91,	// (0x00023c84) list_double2_pane_t1_cp2

0x4ca7,	// (0x00023c9a) list_double2_pane_t2_cp2_ParamLimits

0x4ca7,	// (0x00023c9a) list_double2_pane_t2_cp2

0x4cb9,	// (0x00023cac) list_double_pane_g1_cp2_ParamLimits

0x4cb9,	// (0x00023cac) list_double_pane_g1_cp2

0x4cc5,	// (0x00023cb8) list_double_pane_g2_cp2

0x4ccd,	// (0x00023cc0) list_double_pane_t1_cp2_ParamLimits

0x4ccd,	// (0x00023cc0) list_double_pane_t1_cp2

0x4ce3,	// (0x00023cd6) list_double_pane_t2_cp2_ParamLimits

0x4ce3,	// (0x00023cd6) list_double_pane_t2_cp2

0x4d0d,	// (0x00023d00) list_single_pane_cp2_g3

0x4d1d,	// (0x00023d10) list_single_pane_g1_cp2_ParamLimits

0x4d1d,	// (0x00023d10) list_single_pane_g1_cp2

0x4d29,	// (0x00023d1c) list_single_pane_g2_cp2

0x4d31,	// (0x00023d24) list_single_pane_t1_cp2_ParamLimits

0x4d31,	// (0x00023d24) list_single_pane_t1_cp2

0x4d49,	// (0x00023d3c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4d49,	// (0x00023d3c) list_single_large_graphic_pane_g1_cp2

0x4d55,	// (0x00023d48) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4d55,	// (0x00023d48) list_single_large_graphic_pane_g2_cp2

0x4d61,	// (0x00023d54) list_single_large_graphic_pane_g3_cp2

0x4d69,	// (0x00023d5c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4d69,	// (0x00023d5c) list_single_large_graphic_pane_g4_cp1

0x4d83,	// (0x00023d76) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4d83,	// (0x00023d76) list_single_large_graphic_pane_t1_cp2

0x62cc,	// (0x000252bf) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x62cc,	// (0x000252bf) list_single_graphic_heading_pane_g1_cp2

0x6299,	// (0x0002528c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6299,	// (0x0002528c) list_single_graphic_heading_pane_g4_cp2

0x4d29,	// (0x00023d1c) list_single_graphic_heading_pane_g5_cp2

0x62d8,	// (0x000252cb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62d8,	// (0x000252cb) list_single_graphic_heading_pane_t1_cp2

0x62ee,	// (0x000252e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x62ee,	// (0x000252e1) list_single_graphic_heading_pane_t2_cp2

0x628d,	// (0x00025280) list_single_2graphic_pane_g1_cp2_ParamLimits

0x628d,	// (0x00025280) list_single_2graphic_pane_g1_cp2

0x6299,	// (0x0002528c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6299,	// (0x0002528c) list_single_2graphic_pane_g2_cp2

0x4d29,	// (0x00023d1c) list_single_2graphic_pane_g3_cp2

0x62aa,	// (0x0002529d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x62aa,	// (0x0002529d) list_single_2graphic_pane_g4_cp2

0x62b6,	// (0x000252a9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62b6,	// (0x000252a9) list_single_2graphic_pane_t1_cp2

0x37f4,	// (0x000227e7) list_highlight_pane_g10_cp1

0x5e65,	// (0x00024e58) list_highlight_pane_g1_cp1

0x5e6d,	// (0x00024e60) list_highlight_pane_g2_cp1

0x5e75,	// (0x00024e68) list_highlight_pane_g3_cp1

0x5e7d,	// (0x00024e70) list_highlight_pane_g4_cp1

0x5e85,	// (0x00024e78) list_highlight_pane_g5_cp1

0x5e8d,	// (0x00024e80) list_highlight_pane_g6_cp1

0x5e95,	// (0x00024e88) list_highlight_pane_g7_cp1

0x5e9d,	// (0x00024e90) list_highlight_pane_g8_cp1

0x5ea5,	// (0x00024e98) list_highlight_pane_g9_cp1

0xdc6b,	// (0x0002cc5e) form_field_slider_pane_t3

0xdc79,	// (0x0002cc6c) form_field_slider_pane_t4

0x5da1,	// (0x00024d94) slider_form_pane_ParamLimits

0x5da1,	// (0x00024d94) slider_form_pane

0x37fe,	// (0x000227f1) control_abbreviations

0x37fe,	// (0x000227f1) control_conventions

0x37fe,	// (0x000227f1) control_definitions

0x37fe,	// (0x000227f1) format_table_attribute

0x657f,	// (0x00025572) bg_popup_preview_window_pane_g9

0x37fe,	// (0x000227f1) format_table_data2

0x37fe,	// (0x000227f1) format_table_data3

0x37fe,	// (0x000227f1) format_table_data_example

0x0008,

0x37fe,	// (0x000227f1) intro_purpose

0xf8e3,	// (0x0002e8d6) bg_popup_preview_window_pane_g

0x37fe,	// (0x000227f1) texts_category

0x37fe,	// (0x000227f1) texts_graphics

0x4d99,	// (0x00023d8c) text_digital

0x4da8,	// (0x00023d9b) text_primary

0x4db7,	// (0x00023daa) text_primary_small

0x4dc6,	// (0x00023db9) text_secondary

0x4dd5,	// (0x00023dc8) text_title

0x6cb9,	// (0x00025cac) bg_passive_tab_pane_g1_cp3_srt

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp3_srt

0x6cc2,	// (0x00025cb5) bg_passive_tab_pane_g3_cp3_srt

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp3_srt_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp3_srt

0x6ccb,	// (0x00025cbe) tabs_4_active_pane_srt_g1

0xdfac,	// (0x0002cf9f) tabs_4_active_pane_srt_t1_ParamLimits

0xdfac,	// (0x0002cf9f) tabs_4_active_pane_srt_t1

0x6cb9,	// (0x00025cac) bg_active_tab_pane_g1_cp3_copy1

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp3_copy1

0x6cc2,	// (0x00025cb5) bg_active_tab_pane_g3_cp3_copy1

0x38de,	// (0x000228d1) tabs_2_long_active_pane_srt_ParamLimits

0x38de,	// (0x000228d1) tabs_2_long_active_pane_srt

0x38de,	// (0x000228d1) tabs_2_long_passive_pane_srt_ParamLimits

0x38de,	// (0x000228d1) tabs_2_long_passive_pane_srt

0x5133,	// (0x00024126) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5133,	// (0x00024126) bg_passive_tab_pane_cp4_srt

0x69ad,	// (0x000259a0) bg_passive_tab_pane_g1_cp4_srt

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp4_srt

0x69b6,	// (0x000259a9) bg_passive_tab_pane_g3_cp4_srt

0x38de,	// (0x000228d1) bg_active_tab_pane_cp4_srt_ParamLimits

0x38de,	// (0x000228d1) bg_active_tab_pane_cp4_srt

0xddd6,	// (0x0002cdc9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddd6,	// (0x0002cdc9) tabs_2_long_active_pane_srt_t1

0x69ad,	// (0x000259a0) bg_active_tab_pane_g1_cp4_srt

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp4_srt

0x69b6,	// (0x000259a9) bg_active_tab_pane_g3_cp4_srt

0x3b59,	// (0x00022b4c) tabs_3_long_active_pane_srt_ParamLimits

0x3b59,	// (0x00022b4c) tabs_3_long_active_pane_srt

0x3b59,	// (0x00022b4c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3b59,	// (0x00022b4c) tabs_3_long_passive_pane_cp_srt

0x3b59,	// (0x00022b4c) tabs_3_long_passive_pane_srt_ParamLimits

0x3b59,	// (0x00022b4c) tabs_3_long_passive_pane_srt

0x5133,	// (0x00024126) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5133,	// (0x00024126) bg_passive_tab_pane_cp5_srt

0x4ab0,	// (0x00023aa3) bg_passive_tab_pane_g1_cp5_srt

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp5_srt

0x4ab9,	// (0x00023aac) bg_passive_tab_pane_g3_cp5_srt

0x38de,	// (0x000228d1) bg_active_tab_pane_cp5_srt_ParamLimits

0x38de,	// (0x000228d1) bg_active_tab_pane_cp5_srt

0xddc0,	// (0x0002cdb3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xddc0,	// (0x0002cdb3) tabs_3_long_active_pane_srt_t1

0x4ab0,	// (0x00023aa3) bg_active_tab_pane_g1_cp5_srt

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp5_srt

0x4ab9,	// (0x00023aac) bg_active_tab_pane_g3_cp5_srt

0x698d,	// (0x00025980) navi_text_pane_srt_t1

0x6985,	// (0x00025978) navi_icon_pane_srt_g1

0x4faa,	// (0x00023f9d) midp_editing_number_pane_srt

0x4de4,	// (0x00023dd7) midp_ticker_pane_srt

0x4fb2,	// (0x00023fa5) midp_ticker_pane_srt_g1

0x4fba,	// (0x00023fad) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e765) midp_ticker_pane_srt_g

0x4fc2,	// (0x00023fb5) midp_ticker_pane_srt_t1

0x6976,	// (0x00025969) midp_editing_number_pane_t1_copy1

0xd5f8,	// (0x0002c5eb) listscroll_midp_pane

0xd5f8,	// (0x0002c5eb) midp_form_pane

0x4e5c,	// (0x00023e4f) midp_info_popup_window_ParamLimits

0x4e5c,	// (0x00023e4f) midp_info_popup_window

0x41f6,	// (0x000231e9) bg_popup_sub_pane_cp50_ParamLimits

0x41f6,	// (0x000231e9) bg_popup_sub_pane_cp50

0x5a9d,	// (0x00024a90) listscroll_midp_info_pane_ParamLimits

0x5a9d,	// (0x00024a90) listscroll_midp_info_pane

0x5a7d,	// (0x00024a70) listscroll_form_midp_pane_ParamLimits

0x5a7d,	// (0x00024a70) listscroll_form_midp_pane

0x5a89,	// (0x00024a7c) scroll_bar_cp050

0x5a7d,	// (0x00024a70) list_midp_pane

0x7708,	// (0x000266fb) signal_pane_g2_cp

0x5997,	// (0x0002498a) listscroll_midp_info_pane_t1_ParamLimits

0x5997,	// (0x0002498a) listscroll_midp_info_pane_t1

0x59af,	// (0x000249a2) listscroll_midp_info_pane_t2_ParamLimits

0x59af,	// (0x000249a2) listscroll_midp_info_pane_t2

0x59ed,	// (0x000249e0) listscroll_midp_info_pane_t3_ParamLimits

0x59ed,	// (0x000249e0) listscroll_midp_info_pane_t3

0x5a27,	// (0x00024a1a) listscroll_midp_info_pane_t4_ParamLimits

0x5a27,	// (0x00024a1a) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002e811) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002e811) listscroll_midp_info_pane_t

0x42ba,	// (0x000232ad) scroll_pane_cp21

0x5935,	// (0x00024928) form_midp_field_choice_group_pane

0x593e,	// (0x00024931) form_midp_field_text_pane

0x597d,	// (0x00024970) form_midp_field_time_pane

0x5985,	// (0x00024978) form_midp_gauge_slider_pane

0x598e,	// (0x00024981) form_midp_gauge_wait_pane

0x37fe,	// (0x000227f1) form_midp_image_pane

0xbd6c,	// (0x0002ad5f) list_single_midp_pane_ParamLimits

0xbd6c,	// (0x0002ad5f) list_single_midp_pane

0xdc4a,	// (0x0002cc3d) form_midp_field_text_pane_t1

0x56b1,	// (0x000246a4) input_focus_pane_cp050

0x5924,	// (0x00024917) list_midp_form_text_pane

0x58bc,	// (0x000248af) form_midp_field_choice_group_pane_t1

0x58ca,	// (0x000248bd) input_focus_pane_cp051

0x58de,	// (0x000248d1) list_midp_choice_pane

0x37fe,	// (0x000227f1) status_idle_pane

0x58a0,	// (0x00024893) form_midp_field_time_pane_t1

0x37f4,	// (0x000227e7) wait_anim_pane_g2_copy1

0x58ae,	// (0x000248a1) form_midp_field_time_pane_t2

0x0001,

0x4f0a,	// (0x00023efd) aid_navinavi_width_2_pane

0xf819,	// (0x0002e80c) form_midp_field_time_pane_t

0x37fe,	// (0x000227f1) input_focus_pane_cp052

0x37fe,	// (0x000227f1) bg_input_focus_pane_cp040

0x5860,	// (0x00024853) form_midp_gauge_slider_pane_t1

0x586e,	// (0x00024861) form_midp_gauge_slider_pane_t2

0xdc2e,	// (0x0002cc21) form_midp_gauge_slider_pane_t3

0xdc3c,	// (0x0002cc2f) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002e803) form_midp_gauge_slider_pane_t

0x5898,	// (0x0002488b) form_midp_slider_pane

0x38de,	// (0x000228d1) bg_input_focus_pane_cp041_ParamLimits

0x38de,	// (0x000228d1) bg_input_focus_pane_cp041

0x5821,	// (0x00024814) form_midp_gauge_wait_pane_t1_ParamLimits

0x5821,	// (0x00024814) form_midp_gauge_wait_pane_t1

0x5833,	// (0x00024826) form_midp_gauge_wait_pane_t2_ParamLimits

0x5833,	// (0x00024826) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002e7fe) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002e7fe) form_midp_gauge_wait_pane_t

0x5845,	// (0x00024838) form_midp_wait_pane_ParamLimits

0x5845,	// (0x00024838) form_midp_wait_pane

0x57eb,	// (0x000247de) form_midp_image_pane_g1

0x57f4,	// (0x000247e7) form_midp_image_pane_t1

0x5803,	// (0x000247f6) form_midp_image_pane_t2

0x5812,	// (0x00024805) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002e7f7) form_midp_image_pane_t

0x57e2,	// (0x000247d5) list_single_midp_pane_g1

0x0bd5,	// (0x0001fbc8) list_single_midp_pane_t1

0xdc1a,	// (0x0002cc0d) list_midp_form_item_pane_ParamLimits

0xdc1a,	// (0x0002cc0d) list_midp_form_item_pane

0x4eb2,	// (0x00023ea5) list_midp_form_item_pane_t1

0x4ec1,	// (0x00023eb4) midp_ticker_pane_g1

0x4ecd,	// (0x00023ec0) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e74b) midp_ticker_pane_g

0x4ed9,	// (0x00023ecc) midp_ticker_pane_t1

0x6bc7,	// (0x00025bba) midp_editing_number_pane_t1

0x6ba5,	// (0x00025b98) midp_editing_number_pane

0x6bb4,	// (0x00025ba7) midp_ticker_pane

0x6966,	// (0x00025959) ai_message_heading_pane

0x37fe,	// (0x000227f1) bg_popup_window_pane_cp14

0x696e,	// (0x00025961) listscroll_ai_message_pane

0x68f0,	// (0x000258e3) ai_message_heading_pane_g1_ParamLimits

0x68f0,	// (0x000258e3) ai_message_heading_pane_g1

0x68fc,	// (0x000258ef) ai_message_heading_pane_g2_ParamLimits

0x68fc,	// (0x000258ef) ai_message_heading_pane_g2

0x6908,	// (0x000258fb) ai_message_heading_pane_g3_ParamLimits

0x6908,	// (0x000258fb) ai_message_heading_pane_g3

0x6914,	// (0x00025907) ai_message_heading_pane_g4_ParamLimits

0x6914,	// (0x00025907) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002e938) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002e938) ai_message_heading_pane_g

0x6920,	// (0x00025913) ai_message_heading_pane_t1_ParamLimits

0x6920,	// (0x00025913) ai_message_heading_pane_t1

0x693a,	// (0x0002592d) ai_message_heading_pane_t2_ParamLimits

0x693a,	// (0x0002592d) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002e941) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002e941) ai_message_heading_pane_t

0x694c,	// (0x0002593f) bg_popup_heading_pane_cp1_ParamLimits

0x694c,	// (0x0002593f) bg_popup_heading_pane_cp1

0x68de,	// (0x000258d1) list_ai_message_pane_ParamLimits

0x68de,	// (0x000258d1) list_ai_message_pane

0x42ba,	// (0x000232ad) scroll_pane_cp10

0x687a,	// (0x0002586d) list_ai_message_pane_g1

0x6882,	// (0x00025875) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002e915) list_ai_message_pane_g

0x688a,	// (0x0002587d) list_ai_message_pane_t1_ParamLimits

0x688a,	// (0x0002587d) list_ai_message_pane_t1

0x689f,	// (0x00025892) list_ai_message_pane_t2_ParamLimits

0x689f,	// (0x00025892) list_ai_message_pane_t2

0x68b4,	// (0x000258a7) list_ai_message_pane_t3_ParamLimits

0x68b4,	// (0x000258a7) list_ai_message_pane_t3

0x68c9,	// (0x000258bc) list_ai_message_pane_t4_ParamLimits

0x68c9,	// (0x000258bc) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002e91a) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002e91a) list_ai_message_pane_t

0xdd9f,	// (0x0002cd92) cell_ai_soft_ind_pane_ParamLimits

0xdd9f,	// (0x0002cd92) cell_ai_soft_ind_pane

0x4eeb,	// (0x00023ede) cell_ai_soft_ind_pane_g1_ParamLimits

0x4eeb,	// (0x00023ede) cell_ai_soft_ind_pane_g1

0x37fe,	// (0x000227f1) grid_highlight_cp1

0x4ef8,	// (0x00023eeb) text_secondary_cp56_ParamLimits

0x4ef8,	// (0x00023eeb) text_secondary_cp56

0x683a,	// (0x0002582d) example_general_pane_ParamLimits

0x683a,	// (0x0002582d) example_general_pane

0x6846,	// (0x00025839) example_parent_pane_g1_ParamLimits

0x6846,	// (0x00025839) example_parent_pane_g1

0x6852,	// (0x00025845) example_parent_pane_t1_ParamLimits

0x6852,	// (0x00025845) example_parent_pane_t1

0xc77a,	// (0x0002b76d) popup_preview_text_window_ParamLimits

0xc77a,	// (0x0002b76d) popup_preview_text_window

0x4d15,	// (0x00023d08) list_single_pane_cp2_g4

0x3c0f,	// (0x00022c02) bg_popup_preview_window_pane_ParamLimits

0x3c0f,	// (0x00022c02) bg_popup_preview_window_pane

0x6587,	// (0x0002557a) popup_preview_text_window_t1_ParamLimits

0x6587,	// (0x0002557a) popup_preview_text_window_t1

0x65a5,	// (0x00025598) popup_preview_text_window_t2_ParamLimits

0x65a5,	// (0x00025598) popup_preview_text_window_t2

0x65ee,	// (0x000255e1) popup_preview_text_window_t3_ParamLimits

0x65ee,	// (0x000255e1) popup_preview_text_window_t3

0x6633,	// (0x00025626) popup_preview_text_window_t4_ParamLimits

0x6633,	// (0x00025626) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002e8e9) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002e8e9) popup_preview_text_window_t

0x66b1,	// (0x000256a4) scroll_pane_cp11

0x563d,	// (0x00024630) bg_popup_preview_window_pane_g1

0x6547,	// (0x0002553a) bg_popup_preview_window_pane_g2

0x654f,	// (0x00025542) bg_popup_preview_window_pane_g3

0x6557,	// (0x0002554a) bg_popup_preview_window_pane_g4

0x655f,	// (0x00025552) bg_popup_preview_window_pane_g5

0x6567,	// (0x0002555a) bg_popup_preview_window_pane_g6

0x656f,	// (0x00025562) bg_popup_preview_window_pane_g7

0x6577,	// (0x0002556a) bg_popup_preview_window_pane_g8

0x1469,	// (0x0002045c) aid_popup_width_pane

0xc6f6,	// (0x0002b6e9) popup_midp_note_alarm_window_ParamLimits

0xc6f6,	// (0x0002b6e9) popup_midp_note_alarm_window

0x4141,	// (0x00023134) data_form_pane_ParamLimits

0xbbd2,	// (0x0002abc5) form_field_data_pane_g1

0xbbdc,	// (0x0002abcf) form_field_data_pane_t1_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_ParamLimits

0x086c,	// (0x0001f85f) data_form_wide_pane_ParamLimits

0x087d,	// (0x0001f870) form_field_data_wide_pane_g1

0x0889,	// (0x0001f87c) form_field_data_wide_pane_t1_ParamLimits

0x3ebe,	// (0x00022eb1) input_focus_pane_cp6_ParamLimits

0xd44e,	// (0x0002c441) input_popup_find_pane_g1_ParamLimits

0xd44e,	// (0x0002c441) input_popup_find_pane_g1

0x19db,	// (0x000209ce) aid_navi_side_left_pane

0x19f0,	// (0x000209e3) aid_navi_side_right_pane

0x5f60,	// (0x00024f53) bg_popup_window_pane_cp30_ParamLimits

0x5f60,	// (0x00024f53) bg_popup_window_pane_cp30

0x5fda,	// (0x00024fcd) popup_midp_note_alarm_window_g1_ParamLimits

0x5fda,	// (0x00024fcd) popup_midp_note_alarm_window_g1

0x600a,	// (0x00024ffd) popup_midp_note_alarm_window_t1_ParamLimits

0x600a,	// (0x00024ffd) popup_midp_note_alarm_window_t1

0x60ab,	// (0x0002509e) popup_midp_note_alarm_window_t2_ParamLimits

0x60ab,	// (0x0002509e) popup_midp_note_alarm_window_t2

0x6159,	// (0x0002514c) popup_midp_note_alarm_window_t3_ParamLimits

0x6159,	// (0x0002514c) popup_midp_note_alarm_window_t3

0x618b,	// (0x0002517e) popup_midp_note_alarm_window_t4_ParamLimits

0x618b,	// (0x0002517e) popup_midp_note_alarm_window_t4

0x61b1,	// (0x000251a4) popup_midp_note_alarm_window_t5_ParamLimits

0x61b1,	// (0x000251a4) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002e886) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002e886) popup_midp_note_alarm_window_t

0x625d,	// (0x00025250) wait_bar_pane_cp1_ParamLimits

0x625d,	// (0x00025250) wait_bar_pane_cp1

0x37fe,	// (0x000227f1) wait_anim_pane_copy1

0x37fe,	// (0x000227f1) wait_border_pane_copy1

0x5c46,	// (0x00024c39) wait_border_pane_g1_copy1

0x08a3,	// (0x0001f896) form_field_popup_pane_g1

0xbbf6,	// (0x0002abe9) form_field_popup_pane_t1_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_cp7_ParamLimits

0x417b,	// (0x0002316e) list_form_pane_ParamLimits

0x08c3,	// (0x0001f8b6) form_field_popup_wide_pane_g1

0x08cb,	// (0x0001f8be) form_field_popup_wide_pane_t1_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_cp8_ParamLimits

0x4187,	// (0x0002317a) list_form_wide_pane_ParamLimits

0xe005,	// (0x0002cff8) aid_size_cell_graphic_pane

0xbc75,	// (0x0002ac68) data_form_pane_t1_ParamLimits

0xbd95,	// (0x0002ad88) data_form_wide_pane_t1_ParamLimits

0xd861,	// (0x0002c854) bg_status_flat_pane

0xd10d,	// (0x0002c100) title_pane_t1_ParamLimits

0x38a6,	// (0x00022899) title_pane_t2_ParamLimits

0x38cc,	// (0x000228bf) title_pane_t3_ParamLimits

0xf557,	// (0x0002e54a) title_pane_t_ParamLimits

0x473d,	// (0x00023730) level_1_signal_ParamLimits

0x474f,	// (0x00023742) level_2_signal_ParamLimits

0x4762,	// (0x00023755) level_3_signal_ParamLimits

0x4775,	// (0x00023768) level_4_signal_ParamLimits

0x4788,	// (0x0002377b) level_5_signal_ParamLimits

0x479b,	// (0x0002378e) level_6_signal_ParamLimits

0x47ae,	// (0x000237a1) level_7_signal_ParamLimits

0x473d,	// (0x00023730) level_1_battery_ParamLimits

0x474f,	// (0x00023742) level_2_battery_ParamLimits

0x4762,	// (0x00023755) level_3_battery_ParamLimits

0x4775,	// (0x00023768) level_4_battery_ParamLimits

0x4788,	// (0x0002377b) level_5_battery_ParamLimits

0x479b,	// (0x0002378e) level_6_battery_ParamLimits

0x47ae,	// (0x000237a1) level_7_battery_ParamLimits

0x5e65,	// (0x00024e58) bg_status_flat_pane_g1

0x5e6d,	// (0x00024e60) bg_status_flat_pane_g2

0x5e75,	// (0x00024e68) bg_status_flat_pane_g3

0x5e7d,	// (0x00024e70) bg_status_flat_pane_g4

0x5e85,	// (0x00024e78) bg_status_flat_pane_g5

0x5e8d,	// (0x00024e80) bg_status_flat_pane_g6

0x5e95,	// (0x00024e88) bg_status_flat_pane_g7

0xd199,	// (0x0002c18c) tabs_3_active_pane_t1_ParamLimits

0xd199,	// (0x0002c18c) tabs_3_passive_pane_t1_ParamLimits

0xd1ab,	// (0x0002c19e) tabs_4_active_pane_t1_ParamLimits

0xd1ab,	// (0x0002c19e) tabs_4_1_passive_pane_t1_ParamLimits

0xd45c,	// (0x0002c44f) tabs_2_active_pane_t1_ParamLimits

0xd45c,	// (0x0002c44f) tabs_2_passive_pane_t1_ParamLimits

0x38de,	// (0x000228d1) bg_active_tab_pane_cp4_ParamLimits

0xd46e,	// (0x0002c461) tabs_2_long_active_pane_t1_ParamLimits

0x5133,	// (0x00024126) bg_passive_tab_pane_cp4_ParamLimits

0xd9df,	// (0x0002c9d2) list_single_midp_graphic_pane_t1_ParamLimits

0x38de,	// (0x000228d1) bg_active_tab_pane_cp5_ParamLimits

0xd481,	// (0x0002c474) tabs_3_long_active_pane_t1_ParamLimits

0x5133,	// (0x00024126) bg_passive_tab_pane_cp5_ParamLimits

0xd9df,	// (0x0002c9d2) list_single_midp_graphic_pane_t1

0xd861,	// (0x0002c854) bg_status_flat_pane_ParamLimits

0x52cd,	// (0x000242c0) indicator_pane_cp2_ParamLimits

0x52cd,	// (0x000242c0) indicator_pane_cp2

0xda1d,	// (0x0002ca10) navi_pane_srt_ParamLimits

0xda1d,	// (0x0002ca10) navi_pane_srt

0x541c,	// (0x0002440f) popup_clock_digital_analogue_window_cp1

0x39bb,	// (0x000229ae) indicator_pane_t1

0x4de4,	// (0x00023dd7) copy_highlight_pane

0x4de4,	// (0x00023dd7) cursor_graphics_pane

0x4de4,	// (0x00023dd7) graphic_within_text_pane

0x4de4,	// (0x00023dd7) link_highlight_pane

0x6674,	// (0x00025667) popup_preview_text_window_t5_ParamLimits

0x6674,	// (0x00025667) popup_preview_text_window_t5

0x4f12,	// (0x00023f05) cursor_digital_pane

0x4f12,	// (0x00023f05) cursor_primary_pane

0x4f23,	// (0x00023f16) cursor_primary_small_pane

0x4f2b,	// (0x00023f1e) cursor_secondary_pane

0x4f33,	// (0x00023f26) cursor_title_pane

0x4f12,	// (0x00023f05) link_highlight_digital_pane

0x4f1a,	// (0x00023f0d) link_highlight_primary_pane

0x4f23,	// (0x00023f16) link_highlight_primary_small_pane

0x4f2b,	// (0x00023f1e) link_highlight_secondary_pane

0x4f33,	// (0x00023f26) link_highlight_title_pane

0x4f12,	// (0x00023f05) copy_highlight_digital_pane

0x4f12,	// (0x00023f05) copy_highlight_primary_pane

0x4f23,	// (0x00023f16) copy_highlight_primary_small_pane

0x4f2b,	// (0x00023f1e) copy_highlight_secondary_pane

0x4f33,	// (0x00023f26) copy_highlight_title_pane

0x4f2b,	// (0x00023f1e) graphic_text_digital_pane

0x5f03,	// (0x00024ef6) graphic_text_primary_pane

0x5f0c,	// (0x00024eff) graphic_text_primary_small_pane

0x4f23,	// (0x00023f16) graphic_text_secondary_pane

0x4f12,	// (0x00023f05) graphic_text_title_pane

0xd69d,	// (0x0002c690) cursor_primary_pane_g1

0x5ef5,	// (0x00024ee8) cursor_text_primary_t1

0xdc9b,	// (0x0002cc8e) cursor_primary_small_pane_g1

0x5ee7,	// (0x00024eda) cursor_text_primary_small_t1

0xdc91,	// (0x0002cc84) cursor_primary_small_pane_g1_copy1

0x5ecf,	// (0x00024ec2) cursor_text_primary_small_t1_copy1

0x5ead,	// (0x00024ea0) cursor_text_title_t1

0xdc87,	// (0x0002cc7a) cursor_title_pane_g1

0xd69d,	// (0x0002c690) cursor_digital_pane_g1

0x4f45,	// (0x00023f38) cursor_text_digital_t1

0x4f6a,	// (0x00023f5d) link_highlight_primary_pane_g1

0x5e56,	// (0x00024e49) link_highlight_primary_pane_t1

0x4f53,	// (0x00023f46) link_highlight_primary_small_pane_g1

0x4f5b,	// (0x00023f4e) link_highlight_primary_small_pane_t1

0x4f6a,	// (0x00023f5d) link_highlight_secondary_pane_g1

0x4f72,	// (0x00023f65) link_highlight_secondary_pane_t1

0x5dca,	// (0x00024dbd) link_highlight_title_pane_g1

0x5dd2,	// (0x00024dc5) link_highlight_title_pane_t1

0x5db3,	// (0x00024da6) link_highlight_digital_pane_g1

0x5dbb,	// (0x00024dae) link_highlight_digital_pane_t1

0x5c8b,	// (0x00024c7e) copy_highlight_primary_pane_g1

0x5c93,	// (0x00024c86) copy_highlight_primary_pane_t1

0x5c65,	// (0x00024c58) copy_highlight_primary_small_pane_g1

0x5c7c,	// (0x00024c6f) copy_highlight_primary_small_pane_t1

0x4f81,	// (0x00023f74) copy_highlight_secondary_pane_g1

0x4f89,	// (0x00023f7c) copy_highlight_secondary_pane_t1

0x5c65,	// (0x00024c58) copy_highlight_title_pane_g1

0x5c6d,	// (0x00024c60) copy_highlight_title_pane_t1

0x5c8b,	// (0x00024c7e) copy_highlight_digital_pane_g1

0x6f1b,	// (0x00025f0e) copy_highlight_digital_pane_t1

0x6e6f,	// (0x00025e62) graphic_text_primary_pane_g1

0x6eff,	// (0x00025ef2) graphic_text_primary_pane_t1

0x6f0d,	// (0x00025f00) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002e9b5) graphic_text_primary_pane_t

0x6edb,	// (0x00025ece) graphic_text_primary_small_pane_g1

0x6ee3,	// (0x00025ed6) graphic_text_primary_small_pane_t1

0x6ef1,	// (0x00025ee4) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002e9b0) graphic_text_primary_small_pane_t

0x6eb7,	// (0x00025eaa) graphic_text_secondary_pane_g1

0x6ebf,	// (0x00025eb2) graphic_text_secondary_pane_t1

0x6ecd,	// (0x00025ec0) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002e9ab) graphic_text_secondary_pane_t

0x6e93,	// (0x00025e86) graphic_text_title_pane_g1

0x6e9b,	// (0x00025e8e) graphic_text_title_pane_t1

0x6ea9,	// (0x00025e9c) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002e9a6) graphic_text_title_pane_t

0x6e6f,	// (0x00025e62) graphic_text_digital_pane_g1

0x6e77,	// (0x00025e6a) graphic_text_digital_pane_t1

0x6e85,	// (0x00025e78) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002e9a1) graphic_text_digital_pane_t

0x38de,	// (0x000228d1) navi_icon_pane_srt_ParamLimits

0x38de,	// (0x000228d1) navi_icon_pane_srt

0x37fe,	// (0x000227f1) navi_midp_pane_srt

0x37fe,	// (0x000227f1) navi_navi_pane_srt

0x38de,	// (0x000228d1) navi_text_pane_srt_ParamLimits

0x38de,	// (0x000228d1) navi_text_pane_srt

0x6e3a,	// (0x00025e2d) navi_navi_icon_text_pane_srt

0x6e42,	// (0x00025e35) navi_navi_pane_srt_g1_ParamLimits

0x6e42,	// (0x00025e35) navi_navi_pane_srt_g1

0x6e54,	// (0x00025e47) navi_navi_pane_srt_g2_ParamLimits

0x6e54,	// (0x00025e47) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002e99c) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002e99c) navi_navi_pane_srt_g

0x6e66,	// (0x00025e59) navi_navi_tabs_pane_srt

0x6e3a,	// (0x00025e2d) navi_navi_text_pane_srt

0x6e3a,	// (0x00025e2d) navi_navi_volume_pane_srt

0x6e2b,	// (0x00025e1e) navi_navi_text_pane_srt_t1

0x2860,	// (0x00021853) navi_navi_volume_pane_srt_g1

0x2868,	// (0x0002185b) volume_small_pane_srt_ParamLimits

0x2868,	// (0x0002185b) volume_small_pane_srt

0x1cbb,	// (0x00020cae) volume_small_pane_srt_g1_ParamLimits

0x1cbb,	// (0x00020cae) volume_small_pane_srt_g1

0x1ccb,	// (0x00020cbe) volume_small_pane_srt_g2_ParamLimits

0x1ccb,	// (0x00020cbe) volume_small_pane_srt_g2

0x1cdc,	// (0x00020ccf) volume_small_pane_srt_g3_ParamLimits

0x1cdc,	// (0x00020ccf) volume_small_pane_srt_g3

0x1ced,	// (0x00020ce0) volume_small_pane_srt_g4_ParamLimits

0x1ced,	// (0x00020ce0) volume_small_pane_srt_g4

0x1cfe,	// (0x00020cf1) volume_small_pane_srt_g5_ParamLimits

0x1cfe,	// (0x00020cf1) volume_small_pane_srt_g5

0x1d0f,	// (0x00020d02) volume_small_pane_srt_g6_ParamLimits

0x1d0f,	// (0x00020d02) volume_small_pane_srt_g6

0x1d20,	// (0x00020d13) volume_small_pane_srt_g7_ParamLimits

0x1d20,	// (0x00020d13) volume_small_pane_srt_g7

0x1d31,	// (0x00020d24) volume_small_pane_srt_g8_ParamLimits

0x1d31,	// (0x00020d24) volume_small_pane_srt_g8

0x1d42,	// (0x00020d35) volume_small_pane_srt_g9_ParamLimits

0x1d42,	// (0x00020d35) volume_small_pane_srt_g9

0x1d53,	// (0x00020d46) volume_small_pane_srt_g10_ParamLimits

0x1d53,	// (0x00020d46) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e750) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e750) volume_small_pane_srt_g

0x3cb8,	// (0x00022cab) query_popup_data_pane_cp2

0x6e11,	// (0x00025e04) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6e11,	// (0x00025e04) navi_navi_icon_text_pane_srt_t1

0x5f03,	// (0x00024ef6) navi_tabs_2_long_pane_srt

0x5f03,	// (0x00024ef6) navi_tabs_2_pane_srt

0x5f03,	// (0x00024ef6) navi_tabs_3_long_pane_srt

0x5f03,	// (0x00024ef6) navi_tabs_3_pane_srt

0x5f03,	// (0x00024ef6) navi_tabs_4_pane_srt

0x2840,	// (0x00021833) tabs_2_active_pane_srt_ParamLimits

0x2840,	// (0x00021833) tabs_2_active_pane_srt

0x2850,	// (0x00021843) tabs_2_passive_pane_srt_ParamLimits

0x2850,	// (0x00021843) tabs_2_passive_pane_srt

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp1_srt

0x6ddd,	// (0x00025dd0) bg_passive_tab_pane_g1_cp1_srt

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp1_srt

0x6de6,	// (0x00025dd9) bg_passive_tab_pane_g3_cp1_srt

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp1_srt_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp1_srt

0x6def,	// (0x00025de2) tabs_2_active_pane_srt_g1

0xe047,	// (0x0002d03a) tabs_2_active_pane_srt_t1_ParamLimits

0xe047,	// (0x0002d03a) tabs_2_active_pane_srt_t1

0x6ddd,	// (0x00025dd0) bg_active_tab_pane_g1_cp1_srt

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp1_srt

0x6de6,	// (0x00025dd9) bg_active_tab_pane_g3_cp1_srt

0x280d,	// (0x00021800) tabs_3_active_pane_srt_ParamLimits

0x280d,	// (0x00021800) tabs_3_active_pane_srt

0x281e,	// (0x00021811) tabs_3_passive_pane_cp_srt_ParamLimits

0x281e,	// (0x00021811) tabs_3_passive_pane_cp_srt

0x282f,	// (0x00021822) tabs_3_passive_pane_srt_ParamLimits

0x282f,	// (0x00021822) tabs_3_passive_pane_srt

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x56b1,	// (0x000246a4) bg_passive_tab_pane_cp2_srt

0x4f98,	// (0x00023f8b) bg_passive_tab_pane_g1_cp2_srt

0x4a26,	// (0x00023a19) bg_passive_tab_pane_g2_cp2_srt

0x4fa1,	// (0x00023f94) bg_passive_tab_pane_g3_cp2_srt

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp2_srt_ParamLimits

0x3b59,	// (0x00022b4c) bg_active_tab_pane_cp2_srt

0x6dc3,	// (0x00025db6) tabs_3_active_pane_srt_g1

0xe031,	// (0x0002d024) tabs_3_active_pane_srt_t1_ParamLimits

0xe031,	// (0x0002d024) tabs_3_active_pane_srt_t1

0x4f98,	// (0x00023f8b) bg_active_tab_pane_g1_cp2_srt

0x4a26,	// (0x00023a19) bg_active_tab_pane_g2_cp2_srt

0x4fa1,	// (0x00023f94) bg_active_tab_pane_g3_cp2_srt

0x27c5,	// (0x000217b8) tabs_4_active_pane_srt_ParamLimits

0x27c5,	// (0x000217b8) tabs_4_active_pane_srt

0x27d7,	// (0x000217ca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x27d7,	// (0x000217ca) tabs_4_passive_pane_cp2_srt

0x1ec2,	// (0x00020eb5) aid_size_cell_toolbar

0x6a1e,	// (0x00025a11) main_idle_act_pane_ParamLimits

0x2063,	// (0x00021056) popup_large_graphic_colour_window_ParamLimits

0xca06,	// (0x0002b9f9) popup_toolbar_window_ParamLimits

0xca06,	// (0x0002b9f9) popup_toolbar_window

0x6bd6,	// (0x00025bc9) list_single_graphic_2heading_pane_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_graphic_2heading_pane

0x44ea,	// (0x000234dd) aid_size_cell_apps_grid_lsc_pane

0x44fc,	// (0x000234ef) aid_size_cell_apps_grid_prt_pane

0x5133,	// (0x00024126) bg_wml_button_pane_cp1_ParamLimits

0x5133,	// (0x00024126) bg_wml_button_pane_cp1

0xdc4a,	// (0x0002cc3d) form_midp_field_text_pane_t1_ParamLimits

0x56b1,	// (0x000246a4) input_focus_pane_cp050_ParamLimits

0x5924,	// (0x00024917) list_midp_form_text_pane_ParamLimits

0x58ca,	// (0x000248bd) input_focus_pane_cp051_ParamLimits

0x58de,	// (0x000248d1) list_midp_choice_pane_ParamLimits

0xdbe8,	// (0x0002cbdb) list_single_2graphic_pane_cp3_ParamLimits

0xdbe8,	// (0x0002cbdb) list_single_2graphic_pane_cp3

0xdbfb,	// (0x0002cbee) list_single_midp_graphic_pane_ParamLimits

0xdbfb,	// (0x0002cbee) list_single_midp_graphic_pane

0x0ab7,	// (0x0001faaa) list_single_graphic_2heading_pane_g1_ParamLimits

0x0ab7,	// (0x0001faaa) list_single_graphic_2heading_pane_g1

0x0ac3,	// (0x0001fab6) list_single_graphic_2heading_pane_g4_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_graphic_2heading_pane_g4

0x0acf,	// (0x0001fac2) list_single_graphic_2heading_pane_g5_ParamLimits

0x0acf,	// (0x0001fac2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e7a3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e7a3) list_single_graphic_2heading_pane_g

0x0adb,	// (0x0001face) list_single_graphic_2heading_pane_t1_ParamLimits

0x0adb,	// (0x0001face) list_single_graphic_2heading_pane_t1

0x0aef,	// (0x0001fae2) list_single_graphic_2heading_pane_t2_ParamLimits

0x0aef,	// (0x0001fae2) list_single_graphic_2heading_pane_t2

0x0b09,	// (0x0001fafc) list_single_graphic_2heading_pane_t3_ParamLimits

0x0b09,	// (0x0001fafc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e7aa) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e7aa) list_single_graphic_2heading_pane_t

0x557b,	// (0x0002456e) bg_popup_sub_pane_cp2

0x55a5,	// (0x00024598) grid_toobar_pane

0x2477,	// (0x0002146a) cell_toolbar_pane_ParamLimits

0x2477,	// (0x0002146a) cell_toolbar_pane

0x55e1,	// (0x000245d4) cell_toolbar_pane_g1_ParamLimits

0x55e1,	// (0x000245d4) cell_toolbar_pane_g1

0x55f5,	// (0x000245e8) cell_toolbar_pane_g2_ParamLimits

0x55f5,	// (0x000245e8) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002e7b1) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002e7b1) cell_toolbar_pane_g

0x5617,	// (0x0002460a) grid_highlight_pane_cp2_ParamLimits

0x5617,	// (0x0002460a) grid_highlight_pane_cp2

0x5631,	// (0x00024624) toolbar_button_pane

0x563d,	// (0x00024630) toolbar_button_pane_g1

0x5645,	// (0x00024638) toolbar_button_pane_g2

0x564d,	// (0x00024640) toolbar_button_pane_g3

0x5655,	// (0x00024648) toolbar_button_pane_g4

0x565d,	// (0x00024650) toolbar_button_pane_g5

0x5665,	// (0x00024658) toolbar_button_pane_g6

0x566d,	// (0x00024660) toolbar_button_pane_g7

0x5675,	// (0x00024668) toolbar_button_pane_g8

0x567d,	// (0x00024670) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002e7b6) toolbar_button_pane_g

0x24af,	// (0x000214a2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x24af,	// (0x000214a2) list_single_2graphic_pane_g1_cp3

0xca5e,	// (0x0002ba51) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca5e,	// (0x0002ba51) list_single_2graphic_pane_g2_cp3

0x24cc,	// (0x000214bf) list_single_2graphic_pane_g3_cp3

0x24d4,	// (0x000214c7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x24d4,	// (0x000214c7) list_single_2graphic_pane_g4_cp3

0x24e0,	// (0x000214d3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x24e0,	// (0x000214d3) list_single_2graphic_pane_t1_cp3

0x5854,	// (0x00024847) list_single_midp_graphic_pane_g2_ParamLimits

0x5854,	// (0x00024847) list_single_midp_graphic_pane_g2

0x1eca,	// (0x00020ebd) aid_zoom_text_primary

0x0a8b,	// (0x0001fa7e) aid_zoom_text_secondary

0xd6f5,	// (0x0002c6e8) status_small_pane_g7_ParamLimits

0xd6f5,	// (0x0002c6e8) status_small_pane_g7

0xd718,	// (0x0002c70b) status_small_pane_t1_ParamLimits

0xd0e9,	// (0x0002c0dc) title_pane_g2

0x0003,

0xf54e,	// (0x0002e541) title_pane_g

0xd361,	// (0x0002c354) aid_size_cell_colour_1_pane_ParamLimits

0xd361,	// (0x0002c354) aid_size_cell_colour_1_pane

0xd375,	// (0x0002c368) aid_size_cell_colour_2_pane_ParamLimits

0xd375,	// (0x0002c368) aid_size_cell_colour_2_pane

0xd389,	// (0x0002c37c) aid_size_cell_colour_3_pane_ParamLimits

0xd389,	// (0x0002c37c) aid_size_cell_colour_3_pane

0xd39d,	// (0x0002c390) aid_size_cell_colour_4_pane_ParamLimits

0xd39d,	// (0x0002c390) aid_size_cell_colour_4_pane

0x1918,	// (0x0002090b) title_pane_stacon_g1_ParamLimits

0x1918,	// (0x0002090b) title_pane_stacon_g1

0x5cea,	// (0x00024cdd) popup_note_wait_window_g3_ParamLimits

0x5cea,	// (0x00024cdd) popup_note_wait_window_g3

0x5d60,	// (0x00024d53) popup_note_wait_window_t5_ParamLimits

0x5d60,	// (0x00024d53) popup_note_wait_window_t5

0x37fe,	// (0x000227f1) main_feb_china_hwr_fs_writing_pane

0xc40e,	// (0x0002b401) popup_feb_china_hwr_fs_window_ParamLimits

0xc40e,	// (0x0002b401) popup_feb_china_hwr_fs_window

0xca6f,	// (0x0002ba62) aid_size_cell_hwr_fs_ParamLimits

0xca6f,	// (0x0002ba62) aid_size_cell_hwr_fs

0x56b1,	// (0x000246a4) bg_popup_sub_pane_cp3_ParamLimits

0x56b1,	// (0x000246a4) bg_popup_sub_pane_cp3

0xca84,	// (0x0002ba77) grid_hwr_fs_pane_ParamLimits

0xca84,	// (0x0002ba77) grid_hwr_fs_pane

0x2529,	// (0x0002151c) linegrid_hwr_fs_pane_ParamLimits

0x2529,	// (0x0002151c) linegrid_hwr_fs_pane

0xca9c,	// (0x0002ba8f) cell_hwr_fs_pane_ParamLimits

0xca9c,	// (0x0002ba8f) cell_hwr_fs_pane

0x56bd,	// (0x000246b0) linegrid_hwr_fs_pane_g1_ParamLimits

0x56bd,	// (0x000246b0) linegrid_hwr_fs_pane_g1

0xdbbc,	// (0x0002cbaf) linegrid_hwr_fs_pane_g2_ParamLimits

0xdbbc,	// (0x0002cbaf) linegrid_hwr_fs_pane_g2

0x56db,	// (0x000246ce) linegrid_hwr_fs_pane_g3_ParamLimits

0x56db,	// (0x000246ce) linegrid_hwr_fs_pane_g3

0x255b,	// (0x0002154e) linegrid_hwr_fs_pane_g4_ParamLimits

0x255b,	// (0x0002154e) linegrid_hwr_fs_pane_g4

0x2575,	// (0x00021568) linegrid_hwr_fs_pane_g5_ParamLimits

0x2575,	// (0x00021568) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002e7dc) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002e7dc) linegrid_hwr_fs_pane_g

0x56e7,	// (0x000246da) cell_hwr_fs_pane_g1_ParamLimits

0x56e7,	// (0x000246da) cell_hwr_fs_pane_g1

0x54b2,	// (0x000244a5) cell_hwr_fs_pane_g2_ParamLimits

0x54b2,	// (0x000244a5) cell_hwr_fs_pane_g2

0xdbce,	// (0x0002cbc1) cell_hwr_fs_pane_g3_ParamLimits

0xdbce,	// (0x0002cbc1) cell_hwr_fs_pane_g3

0xdbdb,	// (0x0002cbce) cell_hwr_fs_pane_g4_ParamLimits

0xdbdb,	// (0x0002cbce) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002e7e7) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002e7e7) cell_hwr_fs_pane_g

0xcac2,	// (0x0002bab5) cell_hwr_fs_pane_t1

0x37fe,	// (0x000227f1) grid_highlight_pane_cp6

0x37fe,	// (0x000227f1) main_idle_act2_pane

0x42a1,	// (0x00023294) aid_inside_area_popup_secondary

0xdca5,	// (0x0002cc98) aid_inside_area_window_primary_ParamLimits

0xdca5,	// (0x0002cc98) aid_inside_area_window_primary

0x6f2a,	// (0x00025f1d) ai2_news_ticker_pane

0x6f32,	// (0x00025f25) aid_size_cell_ai1_link_ParamLimits

0x6f32,	// (0x00025f25) aid_size_cell_ai1_link

0xe05d,	// (0x0002d050) popup_ai2_data_window_ParamLimits

0xe05d,	// (0x0002d050) popup_ai2_data_window

0x6f62,	// (0x00025f55) popup_ai2_link_window_ParamLimits

0x6f62,	// (0x00025f55) popup_ai2_link_window

0x56b1,	// (0x000246a4) bg_popup_sub_pane_cp4_ParamLimits

0x56b1,	// (0x000246a4) bg_popup_sub_pane_cp4

0x6f76,	// (0x00025f69) grid_ai2_link_pane_ParamLimits

0x6f76,	// (0x00025f69) grid_ai2_link_pane

0x6f8d,	// (0x00025f80) popup_ai2_link_window_g1_ParamLimits

0x6f8d,	// (0x00025f80) popup_ai2_link_window_g1

0x6f99,	// (0x00025f8c) popup_ai2_link_window_g2_ParamLimits

0x6f99,	// (0x00025f8c) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002e9ba) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002e9ba) popup_ai2_link_window_g

0x6fa8,	// (0x00025f9b) ai2_mp_button_pane

0x6fb0,	// (0x00025fa3) ai2_mp_volume_pane

0x58ca,	// (0x000248bd) bg_popup_sub_pane_cp5_ParamLimits

0x58ca,	// (0x000248bd) bg_popup_sub_pane_cp5

0x6fb8,	// (0x00025fab) heading_ai2_gene_pane_ParamLimits

0x6fb8,	// (0x00025fab) heading_ai2_gene_pane

0x6fc4,	// (0x00025fb7) list_ai2_gene_pane_ParamLimits

0x6fc4,	// (0x00025fb7) list_ai2_gene_pane

0x700c,	// (0x00025fff) cell_ai2_link_pane_ParamLimits

0x700c,	// (0x00025fff) cell_ai2_link_pane

0x7022,	// (0x00026015) cell_ai2_link_pane_g1

0x37fe,	// (0x000227f1) grid_highlight_pane_cp7

0x287d,	// (0x00021870) ai2_mp_volume_pane_g1

0x70f2,	// (0x000260e5) ai2_mp_volume_pane_g2

0xe087,	// (0x0002d07a) list_ai2_gene_pane_t1

0x70fa,	// (0x000260ed) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002e9d3) ai2_mp_volume_pane_g

0x2885,	// (0x00021878) volume_small_pane_cp3

0x7102,	// (0x000260f5) aid_size_cell_ai2_button

0x710a,	// (0x000260fd) grid_ai2_button_pane

0x7113,	// (0x00026106) cell_ai2_button_pane_ParamLimits

0x7113,	// (0x00026106) cell_ai2_button_pane

0x37f4,	// (0x000227e7) cell_ai2_button_pane_g1

0x37fe,	// (0x000227f1) grid_highlight_pane_cp8

0x70b2,	// (0x000260a5) ai2_gene_pane_t1_ParamLimits

0x70b2,	// (0x000260a5) ai2_gene_pane_t1

0xc384,	// (0x0002b377) aid_height_parent_landscape

0xdded,	// (0x0002cde0) aid_height_set_list

0x6a1e,	// (0x00025a11) aid_size_parent

0xe005,	// (0x0002cff8) aid_size_cell_graphic_pane_ParamLimits

0x6fd4,	// (0x00025fc7) popup_ai2_data_window_g1_ParamLimits

0x6fd4,	// (0x00025fc7) popup_ai2_data_window_g1

0x6fe0,	// (0x00025fd3) ai2_news_ticker_pane_g1

0x6fe8,	// (0x00025fdb) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002e9bf) ai2_news_ticker_pane_g

0x6ff0,	// (0x00025fe3) ai2_news_ticker_pane_t1

0x6ffe,	// (0x00025ff1) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002e9c4) ai2_news_ticker_pane_t

0x702b,	// (0x0002601e) heading_ai2_gene_pane_g1

0x7033,	// (0x00026026) heading_ai2_gene_pane_t1_ParamLimits

0x7033,	// (0x00026026) heading_ai2_gene_pane_t1

0x7048,	// (0x0002603b) list_highlight_pane_cp6

0xe071,	// (0x0002d064) ai2_gene_pane_ParamLimits

0xe071,	// (0x0002d064) ai2_gene_pane

0xe095,	// (0x0002d088) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002e9c9) list_ai2_gene_pane_t

0x7083,	// (0x00026076) list_highlight_pane_cp8_ParamLimits

0x7083,	// (0x00026076) list_highlight_pane_cp8

0x7094,	// (0x00026087) ai2_gene_pane_g1_ParamLimits

0x7094,	// (0x00026087) ai2_gene_pane_g1

0x70a6,	// (0x00026099) ai2_gene_pane_g2_ParamLimits

0x70a6,	// (0x00026099) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002e9ce) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002e9ce) ai2_gene_pane_g

0x40e3,	// (0x000230d6) scroll_pane_cp12

0xc341,	// (0x0002b334) control_pane_t3_ParamLimits

0xc341,	// (0x0002b334) control_pane_t3

0xd709,	// (0x0002c6fc) status_small_pane_g8_ParamLimits

0xd709,	// (0x0002c6fc) status_small_pane_g8

0xc4a3,	// (0x0002b496) popup_find_window_ParamLimits

0xc730,	// (0x0002b723) popup_note_image_window_ParamLimits

0x0ab7,	// (0x0001faaa) list_double2_graphic_pane_vc_g1_ParamLimits

0x0ab7,	// (0x0001faaa) list_double2_graphic_pane_vc_g1

0x0ac3,	// (0x0001fab6) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ac3,	// (0x0001fab6) list_double2_graphic_pane_vc_g2

0x0acf,	// (0x0001fac2) list_double2_graphic_pane_vc_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e7a3) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e7a3) list_double2_graphic_pane_vc_g

0x0b21,	// (0x0001fb14) list_double2_graphic_pane_vc_t1_ParamLimits

0x0b21,	// (0x0001fb14) list_double2_graphic_pane_vc_t1

0x0ac3,	// (0x0001fab6) list_single_heading_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_heading_pane_vc_g1

0x0acf,	// (0x0001fac2) list_single_heading_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_heading_pane_vc_g

0x0b37,	// (0x0001fb2a) list_single_heading_pane_vc_t1_ParamLimits

0x0b37,	// (0x0001fb2a) list_single_heading_pane_vc_t1

0x0b4d,	// (0x0001fb40) list_single_heading_pane_vc_t2_ParamLimits

0x0b4d,	// (0x0001fb40) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002e7cb) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002e7cb) list_single_heading_pane_vc_t

0x0b5f,	// (0x0001fb52) list_setting_number_pane_vc_g1_ParamLimits

0x0b5f,	// (0x0001fb52) list_setting_number_pane_vc_g1

0x0b6b,	// (0x0001fb5e) list_setting_number_pane_vc_g2_ParamLimits

0x0b6b,	// (0x0001fb5e) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e7d0) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e7d0) list_setting_number_pane_vc_g

0x0b77,	// (0x0001fb6a) list_setting_number_pane_vc_t1_ParamLimits

0x0b77,	// (0x0001fb6a) list_setting_number_pane_vc_t1

0x0b8b,	// (0x0001fb7e) list_setting_number_pane_vc_t2_ParamLimits

0x0b8b,	// (0x0001fb7e) list_setting_number_pane_vc_t2

0x0ba7,	// (0x0001fb9a) list_setting_number_pane_vc_t3_ParamLimits

0x0ba7,	// (0x0001fb9a) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002e7d5) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002e7d5) list_setting_number_pane_vc_t

0x0bc5,	// (0x0001fbb8) set_value_pane_vc_ParamLimits

0x0bc5,	// (0x0001fbb8) set_value_pane_vc

0x6bd6,	// (0x00025bc9) list_double2_graphic_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double2_graphic_pane_vc

0x6bd6,	// (0x00025bc9) list_double2_large_graphic_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double2_large_graphic_pane_vc

0x6bd6,	// (0x00025bc9) list_double2_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double2_pane_vc

0x6bd6,	// (0x00025bc9) list_double_graphic_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_graphic_heading_pane_vc

0x6bd6,	// (0x00025bc9) list_double_graphic_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_graphic_pane_vc

0x6bd6,	// (0x00025bc9) list_double_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_heading_pane_vc

0x6be8,	// (0x00025bdb) list_double_large_graphic_pane_vc_ParamLimits

0x6be8,	// (0x00025bdb) list_double_large_graphic_pane_vc

0x6bd6,	// (0x00025bc9) list_double_number_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_number_pane_vc

0x6bd6,	// (0x00025bc9) list_double_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_pane_vc

0x6bd6,	// (0x00025bc9) list_double_time_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_double_time_pane_vc

0x6bd6,	// (0x00025bc9) list_setting_number_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_setting_number_pane_vc

0x6bd6,	// (0x00025bc9) list_setting_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_setting_pane_vc

0x6bd6,	// (0x00025bc9) list_single_graphic_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_graphic_heading_pane_vc

0x6bd6,	// (0x00025bc9) list_single_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_heading_pane_vc

0x6bd6,	// (0x00025bc9) list_single_number_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_number_heading_pane_vc

0x0ab7,	// (0x0001faaa) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ab7,	// (0x0001faaa) list_double_graphic_heading_pane_vc_g1

0x0ac3,	// (0x0001fab6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0ac3,	// (0x0001fab6) list_double_graphic_heading_pane_vc_g2

0x0acf,	// (0x0001fac2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e7a3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e7a3) list_double_graphic_heading_pane_vc_g

0x0d1f,	// (0x0001fd12) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d1f,	// (0x0001fd12) list_double_graphic_heading_pane_vc_t1

0x0d3b,	// (0x0001fd2e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d3b,	// (0x0001fd2e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002e9da) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002e9da) list_double_graphic_heading_pane_vc_t

0x0b5f,	// (0x0001fb52) list_setting_pane_vc_g1_ParamLimits

0x0b5f,	// (0x0001fb52) list_setting_pane_vc_g1

0x0b6b,	// (0x0001fb5e) list_setting_pane_vc_g2_ParamLimits

0x0b6b,	// (0x0001fb5e) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e7d0) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e7d0) list_setting_pane_vc_g

0x0d59,	// (0x0001fd4c) list_setting_pane_vc_t1_ParamLimits

0x0d59,	// (0x0001fd4c) list_setting_pane_vc_t1

0x0d75,	// (0x0001fd68) list_setting_pane_vc_t2_ParamLimits

0x0d75,	// (0x0001fd68) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002ea08) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002ea08) list_setting_pane_vc_t

0x0bc5,	// (0x0001fbb8) set_value_pane_cp_vc_ParamLimits

0x0bc5,	// (0x0001fbb8) set_value_pane_cp_vc

0x0ac3,	// (0x0001fab6) list_single_number_heading_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_number_heading_pane_vc_g1

0x0acf,	// (0x0001fac2) list_single_number_heading_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_single_number_heading_pane_vc_g

0x0d91,	// (0x0001fd84) list_single_number_heading_pane_vc_t1_ParamLimits

0x0d91,	// (0x0001fd84) list_single_number_heading_pane_vc_t1

0x0da7,	// (0x0001fd9a) list_single_number_heading_pane_vc_t2_ParamLimits

0x0da7,	// (0x0001fd9a) list_single_number_heading_pane_vc_t2

0x0db9,	// (0x0001fdac) list_single_number_heading_pane_vc_t3_ParamLimits

0x0db9,	// (0x0001fdac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002ea0d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002ea0d) list_single_number_heading_pane_vc_t

0x0ab7,	// (0x0001faaa) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0ab7,	// (0x0001faaa) list_single_graphic_heading_pane_vc_g1

0x0ac3,	// (0x0001fab6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0ac3,	// (0x0001fab6) list_single_graphic_heading_pane_vc_g4

0x0acf,	// (0x0001fac2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0acf,	// (0x0001fac2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002e7a3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e7a3) list_single_graphic_heading_pane_vc_g

0x0dcb,	// (0x0001fdbe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0dcb,	// (0x0001fdbe) list_single_graphic_heading_pane_vc_t1

0x0de1,	// (0x0001fdd4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0de1,	// (0x0001fdd4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002ea14) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002ea14) list_single_graphic_heading_pane_vc_t

0x0ac3,	// (0x0001fab6) list_double2_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_double2_pane_vc_g1

0x0acf,	// (0x0001fac2) list_double2_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_double2_pane_vc_g

0x0df3,	// (0x0001fde6) list_double2_pane_vc_t1_ParamLimits

0x0df3,	// (0x0001fde6) list_double2_pane_vc_t1

0x0e09,	// (0x0001fdfc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e09,	// (0x0001fdfc) list_double2_large_graphic_pane_vc_g1

0x0ac3,	// (0x0001fab6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0ac3,	// (0x0001fab6) list_double2_large_graphic_pane_vc_g2

0x0acf,	// (0x0001fac2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0acf,	// (0x0001fac2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002e5d8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002e5d8) list_double2_large_graphic_pane_vc_g

0x0e15,	// (0x0001fe08) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0e15,	// (0x0001fe08) list_double2_large_graphic_pane_vc_t1

0x0e2b,	// (0x0001fe1e) list_double_time_pane_vc_g1_ParamLimits

0x0e2b,	// (0x0001fe1e) list_double_time_pane_vc_g1

0x0e37,	// (0x0001fe2a) list_double_time_pane_vc_g2_ParamLimits

0x0e37,	// (0x0001fe2a) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002ea19) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002ea19) list_double_time_pane_vc_g

0x0e43,	// (0x0001fe36) list_double_time_pane_vc_t1_ParamLimits

0x0e43,	// (0x0001fe36) list_double_time_pane_vc_t1

0x0e67,	// (0x0001fe5a) list_double_time_pane_vc_t2_ParamLimits

0x0e67,	// (0x0001fe5a) list_double_time_pane_vc_t2

0x0eb6,	// (0x0001fea9) list_double_time_pane_vc_t3_ParamLimits

0x0eb6,	// (0x0001fea9) list_double_time_pane_vc_t3

0x0ec8,	// (0x0001febb) list_double_time_pane_vc_t4_ParamLimits

0x0ec8,	// (0x0001febb) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002ea1e) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002ea1e) list_double_time_pane_vc_t

0x0ac3,	// (0x0001fab6) list_double_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_double_pane_vc_g1

0x0acf,	// (0x0001fac2) list_double_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_double_pane_vc_g

0x0edc,	// (0x0001fecf) list_double_pane_vc_t1_ParamLimits

0x0edc,	// (0x0001fecf) list_double_pane_vc_t1

0x0ef0,	// (0x0001fee3) list_double_pane_vc_t2_ParamLimits

0x0ef0,	// (0x0001fee3) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002ea27) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002ea27) list_double_pane_vc_t

0x0ac3,	// (0x0001fab6) list_double_number_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_double_number_pane_vc_g1

0x0acf,	// (0x0001fac2) list_double_number_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_double_number_pane_vc_g

0x0f08,	// (0x0001fefb) list_double_number_pane_vc_t1_ParamLimits

0x0f08,	// (0x0001fefb) list_double_number_pane_vc_t1

0x0f1a,	// (0x0001ff0d) list_double_number_pane_vc_t2_ParamLimits

0x0f1a,	// (0x0001ff0d) list_double_number_pane_vc_t2

0x0f2e,	// (0x0001ff21) list_double_number_pane_vc_t3_ParamLimits

0x0f2e,	// (0x0001ff21) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002ea2c) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002ea2c) list_double_number_pane_vc_t

0x0f46,	// (0x0001ff39) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0f46,	// (0x0001ff39) list_double_large_graphic_pane_vc_g1

0x0f68,	// (0x0001ff5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0f68,	// (0x0001ff5b) list_double_large_graphic_pane_vc_g2

0x0f7c,	// (0x0001ff6f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0f7c,	// (0x0001ff6f) list_double_large_graphic_pane_vc_g3

0x0f8b,	// (0x0001ff7e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0f8b,	// (0x0001ff7e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002ea33) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002ea33) list_double_large_graphic_pane_vc_g

0x0f97,	// (0x0001ff8a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0f97,	// (0x0001ff8a) list_double_large_graphic_pane_vc_t1

0x0fb3,	// (0x0001ffa6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0fb3,	// (0x0001ffa6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ea3c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ea3c) list_double_large_graphic_pane_vc_t

0x0ac3,	// (0x0001fab6) list_double_heading_pane_vc_g1_ParamLimits

0x0ac3,	// (0x0001fab6) list_double_heading_pane_vc_g1

0x0acf,	// (0x0001fac2) list_double_heading_pane_vc_g2_ParamLimits

0x0acf,	// (0x0001fac2) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5bb) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5bb) list_double_heading_pane_vc_g

0x0fd5,	// (0x0001ffc8) list_double_heading_pane_vc_t1_ParamLimits

0x0fd5,	// (0x0001ffc8) list_double_heading_pane_vc_t1

0x0fe9,	// (0x0001ffdc) list_double_heading_pane_vc_t2_ParamLimits

0x0fe9,	// (0x0001ffdc) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002ea41) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ea41) list_double_heading_pane_vc_t

0x1001,	// (0x0001fff4) list_double_graphic_pane_vc_g1_ParamLimits

0x1001,	// (0x0001fff4) list_double_graphic_pane_vc_g1

0x100d,	// (0x00020000) list_double_graphic_pane_vc_g2_ParamLimits

0x100d,	// (0x00020000) list_double_graphic_pane_vc_g2

0x0ac3,	// (0x0001fab6) list_double_graphic_pane_vc_g3_ParamLimits

0x0ac3,	// (0x0001fab6) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002ea46) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002ea46) list_double_graphic_pane_vc_g

0x102a,	// (0x0002001d) list_double_graphic_pane_vc_t1_ParamLimits

0x102a,	// (0x0002001d) list_double_graphic_pane_vc_t1

0x1054,	// (0x00020047) list_double_graphic_pane_vc_t2_ParamLimits

0x1054,	// (0x00020047) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002ea4f) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002ea4f) list_double_graphic_pane_vc_t

0x1475,	// (0x00020468) aid_size_cell_fastswap

0xc004,	// (0x0002aff7) aid_size_cell_touch_ParamLimits

0xc004,	// (0x0002aff7) aid_size_cell_touch

0x16d8,	// (0x000206cb) popup_fast_swap_wide_window_ParamLimits

0x16d8,	// (0x000206cb) popup_fast_swap_wide_window

0xc1b4,	// (0x0002b1a7) touch_pane_ParamLimits

0xc1b4,	// (0x0002b1a7) touch_pane

0x4139,	// (0x0002312c) button_value_adjust_pane_cp2

0x079e,	// (0x0001f791) button_value_adjust_pane_cp4

0x07be,	// (0x0001f7b1) form_field_data_pane_cp2

0xbb99,	// (0x0002ab8c) form_field_data_wide_pane_cp2

0x45bb,	// (0x000235ae) bg_scroll_pane_ParamLimits

0x1a7a,	// (0x00020a6d) scroll_handle_pane_ParamLimits

0x1a8e,	// (0x00020a81) scroll_sc2_down_pane_ParamLimits

0x1a8e,	// (0x00020a81) scroll_sc2_down_pane

0x45ec,	// (0x000235df) scroll_sc2_up_pane_ParamLimits

0x45ec,	// (0x000235df) scroll_sc2_up_pane

0xe1b5,	// (0x0002d1a8) grid_wheel_folder_pane_g1_ParamLimits

0xe1b5,	// (0x0002d1a8) grid_wheel_folder_pane_g1

0x1c53,	// (0x00020c46) clock_nsta_pane_cp2_ParamLimits

0x1c53,	// (0x00020c46) clock_nsta_pane_cp2

0xd5f8,	// (0x0002c5eb) listscroll_midp_pane_ParamLimits

0xd604,	// (0x0002c5f7) midp_canvas_pane

0x50e0,	// (0x000240d3) nsta_clock_indic_pane

0x5119,	// (0x0002410c) listscroll_form_pane_vc

0x5121,	// (0x00024114) listscroll_set_pane_vc_ParamLimits

0x5121,	// (0x00024114) listscroll_set_pane_vc

0xd889,	// (0x0002c87c) clock_nsta_pane

0xd8b3,	// (0x0002c8a6) indicator_nsta_pane

0x557b,	// (0x0002456e) bg_popup_sub_pane_cp2_ParamLimits

0x558f,	// (0x00024582) find_pane_cp2_ParamLimits

0x558f,	// (0x00024582) find_pane_cp2

0x55a5,	// (0x00024598) grid_toobar_pane_ParamLimits

0x5685,	// (0x00024678) list_form_gen_pane_vc_ParamLimits

0x5685,	// (0x00024678) list_form_gen_pane_vc

0x569b,	// (0x0002468e) scroll_pane_cp8_vc_ParamLimits

0x569b,	// (0x0002468e) scroll_pane_cp8_vc

0x5717,	// (0x0002470a) data_form_wide_pane_vc_ParamLimits

0x5717,	// (0x0002470a) data_form_wide_pane_vc

0x5723,	// (0x00024716) form_field_data_wide_pane_vc_g1

0x572b,	// (0x0002471e) form_field_data_wide_pane_vc_t1_ParamLimits

0x572b,	// (0x0002471e) form_field_data_wide_pane_vc_t1

0x414d,	// (0x00023140) input_focus_pane_cp6_vc_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_cp6_vc

0x5a7d,	// (0x00024a70) list_midp_pane_ParamLimits

0x6db7,	// (0x00025daa) scroll_pane_cp16_ParamLimits

0x6db7,	// (0x00025daa) scroll_pane_cp16

0x5abf,	// (0x00024ab2) button_value_adjust_pane_ParamLimits

0x5abf,	// (0x00024ab2) button_value_adjust_pane

0xddfe,	// (0x0002cdf1) button_value_adjust_pane_cp6_ParamLimits

0xddfe,	// (0x0002cdf1) button_value_adjust_pane_cp6

0xdf18,	// (0x0002cf0b) settings_code_pane_cp_ParamLimits

0xdf18,	// (0x0002cf0b) settings_code_pane_cp

0x37f4,	// (0x000227e7) cell_touch_pane_g1

0x37f4,	// (0x000227e7) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e6f6) cell_touch_pane_g

0xe0a3,	// (0x0002d096) cell_touch_pane_cp_ParamLimits

0xe0a3,	// (0x0002d096) cell_touch_pane_cp

0xe0bf,	// (0x0002d0b2) cell_touch_pane_ParamLimits

0xe0bf,	// (0x0002d0b2) cell_touch_pane

0x37f4,	// (0x000227e7) scroll_sc2_down_pane_g1

0x37f4,	// (0x000227e7) scroll_sc2_up_pane_g1

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp4_vc

0x7147,	// (0x0002613a) list_set_graphic_pane_vc_g1_ParamLimits

0x7147,	// (0x0002613a) list_set_graphic_pane_vc_g1

0x7153,	// (0x00026146) list_set_graphic_pane_vc_g2_ParamLimits

0x7153,	// (0x00026146) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002e9df) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002e9df) list_set_graphic_pane_vc_g

0x715f,	// (0x00026152) text_primary_small_cp13_vc_ParamLimits

0x715f,	// (0x00026152) text_primary_small_cp13_vc

0x7177,	// (0x0002616a) list_set_graphic_pane_vc_ParamLimits

0x7177,	// (0x0002616a) list_set_graphic_pane_vc

0x37fe,	// (0x000227f1) input_focus_pane_cp2_vc

0x37f4,	// (0x000227e7) setting_code_pane_vc_g1

0x3929,	// (0x0002291c) setting_code_pane_vc_t1

0x7189,	// (0x0002617c) set_text_pane_vc_t1_ParamLimits

0x7189,	// (0x0002617c) set_text_pane_vc_t1

0x37fe,	// (0x000227f1) input_focus_pane_cp1_vc

0x71a5,	// (0x00026198) list_set_text_pane_vc

0x37f4,	// (0x000227e7) setting_text_pane_vc_g1

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp2_vc

0x3920,	// (0x00022913) setting_slider_graphic_pane_vc_g1

0x71af,	// (0x000261a2) setting_slider_graphic_pane_vc_t1

0x71bf,	// (0x000261b2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002e9e4) setting_slider_graphic_pane_vc_t

0x71cf,	// (0x000261c2) slider_set_pane_cp_vc

0x71d7,	// (0x000261ca) slider_set_pane_vc_g1

0x71e0,	// (0x000261d3) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002e9e9) slider_set_pane_vc_g

0x41a5,	// (0x00023198) set_opt_bg_pane_g1_copy1

0x41ad,	// (0x000231a0) set_opt_bg_pane_g2_copy1

0x720c,	// (0x000261ff) set_opt_bg_pane_g3_copy1

0x41bd,	// (0x000231b0) set_opt_bg_pane_g4_copy1

0x41c5,	// (0x000231b8) set_opt_bg_pane_g5_copy1

0x41cd,	// (0x000231c0) set_opt_bg_pane_g6_copy1

0x7216,	// (0x00026209) set_opt_bg_pane_g7_copy1

0x721e,	// (0x00026211) set_opt_bg_pane_g8_copy1

0x7228,	// (0x0002621b) set_opt_bg_pane_g9_copy1

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp_vc

0x7232,	// (0x00026225) setting_slider_pane_vc_t1

0x7241,	// (0x00026234) setting_slider_pane_vc_t2

0x7251,	// (0x00026244) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002e9f8) setting_slider_pane_vc_t

0x7261,	// (0x00026254) slider_set_pane_vc

0x2599,	// (0x0002158c) volume_set_pane_vc_g1

0x25a2,	// (0x00021595) volume_set_pane_vc_g2

0x25ab,	// (0x0002159e) volume_set_pane_vc_g3

0x25b4,	// (0x000215a7) volume_set_pane_vc_g4

0x25bd,	// (0x000215b0) volume_set_pane_vc_g5

0x25c6,	// (0x000215b9) volume_set_pane_vc_g6

0x25cf,	// (0x000215c2) volume_set_pane_vc_g7

0x25d8,	// (0x000215cb) volume_set_pane_vc_g8

0x25e1,	// (0x000215d4) volume_set_pane_vc_g9

0x25ea,	// (0x000215dd) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002e89d) volume_set_pane_vc_g

0x7269,	// (0x0002625c) volume_set_pane_vc

0x7271,	// (0x00026264) button_value_adjust_pane_cp1_vc

0x727b,	// (0x0002626e) list_highlight_pane_cp2_vc

0x7284,	// (0x00026277) list_set_pane_vc_ParamLimits

0x7284,	// (0x00026277) list_set_pane_vc

0x72e2,	// (0x000262d5) main_pane_set_vc_t1_ParamLimits

0x72e2,	// (0x000262d5) main_pane_set_vc_t1

0x72f7,	// (0x000262ea) main_pane_set_vc_t2_ParamLimits

0x72f7,	// (0x000262ea) main_pane_set_vc_t2

0x7309,	// (0x000262fc) main_pane_set_vc_t3_ParamLimits

0x7309,	// (0x000262fc) main_pane_set_vc_t3

0x731d,	// (0x00026310) main_pane_set_vc_t4_ParamLimits

0x731d,	// (0x00026310) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002e9ff) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002e9ff) main_pane_set_vc_t

0x7331,	// (0x00026324) setting_code_pane_vc_ParamLimits

0x7331,	// (0x00026324) setting_code_pane_vc

0x7342,	// (0x00026335) setting_slider_graphic_pane_vc

0x7342,	// (0x00026335) setting_slider_pane_vc

0x7342,	// (0x00026335) setting_text_pane_vc

0x7342,	// (0x00026335) setting_volume_pane_vc

0x734c,	// (0x0002633f) scroll_pane_cp121_vc

0x4127,	// (0x0002311a) set_content_pane_vc

0x7360,	// (0x00026353) button_value_adjust_pane_g1

0x7369,	// (0x0002635c) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002ea54) button_value_adjust_pane_g

0x7372,	// (0x00026365) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7372,	// (0x00026365) form_field_slider_wide_pane_vc_t1

0x7386,	// (0x00026379) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7386,	// (0x00026379) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002ea59) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002ea59) form_field_slider_wide_pane_vc_t

0x3b59,	// (0x00022b4c) input_focus_pane_cp10_vc_ParamLimits

0x3b59,	// (0x00022b4c) input_focus_pane_cp10_vc

0x73b4,	// (0x000263a7) slider_cont_pane_cp1_vc_ParamLimits

0x73b4,	// (0x000263a7) slider_cont_pane_cp1_vc

0x73c6,	// (0x000263b9) slider_form_pane_g1_cp2

0x71e0,	// (0x000261d3) slider_form_pane_g2_cp2

0x73f3,	// (0x000263e6) form_field_slider_pane_vc_t3

0x7401,	// (0x000263f4) form_field_slider_pane_vc_t4

0x740f,	// (0x00026402) slider_form_pane_vc_ParamLimits

0x740f,	// (0x00026402) slider_form_pane_vc

0x741c,	// (0x0002640f) form_field_slider_pane_vc_t1_ParamLimits

0x741c,	// (0x0002640f) form_field_slider_pane_vc_t1

0x7386,	// (0x00026379) form_field_slider_pane_vc_t2_ParamLimits

0x7386,	// (0x00026379) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002ea6b) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002ea6b) form_field_slider_pane_vc_t

0x3b59,	// (0x00022b4c) input_focus_pane_cp9_vc_ParamLimits

0x3b59,	// (0x00022b4c) input_focus_pane_cp9_vc

0x7438,	// (0x0002642b) slider_cont_pane_vc_ParamLimits

0x7438,	// (0x0002642b) slider_cont_pane_vc

0x744c,	// (0x0002643f) list_form_graphic_pane_cp_vc_ParamLimits

0x744c,	// (0x0002643f) list_form_graphic_pane_cp_vc

0x5723,	// (0x00024716) form_field_popup_wide_pane_vc_g1

0x7461,	// (0x00026454) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7461,	// (0x00026454) form_field_popup_wide_pane_vc_t1

0x414d,	// (0x00023140) input_focus_pane_cp8_vc_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_cp8_vc

0x74a6,	// (0x00026499) list_form_wide_pane_vc_ParamLimits

0x74a6,	// (0x00026499) list_form_wide_pane_vc

0x74b2,	// (0x000264a5) list_form_graphic_pane_vc_g1

0x74ba,	// (0x000264ad) list_form_graphic_pane_vc_t1_ParamLimits

0x74ba,	// (0x000264ad) list_form_graphic_pane_vc_t1

0x38de,	// (0x000228d1) list_highlight_pane_cp5_vc_ParamLimits

0x38de,	// (0x000228d1) list_highlight_pane_cp5_vc

0x74d6,	// (0x000264c9) list_form_graphic_pane_vc_ParamLimits

0x74d6,	// (0x000264c9) list_form_graphic_pane_vc

0x5723,	// (0x00024716) form_field_popup_pane_vc_g1

0x74ec,	// (0x000264df) form_field_popup_pane_vc_t1_ParamLimits

0x74ec,	// (0x000264df) form_field_popup_pane_vc_t1

0x414d,	// (0x00023140) input_focus_pane_cp7_vc_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_cp7_vc

0x7503,	// (0x000264f6) list_form_pane_vc_ParamLimits

0x7503,	// (0x000264f6) list_form_pane_vc

0x750f,	// (0x00026502) data_form_pane_vc_t1_ParamLimits

0x750f,	// (0x00026502) data_form_pane_vc_t1

0x41a5,	// (0x00023198) input_focus_pane_vc_g1

0x41ad,	// (0x000231a0) input_focus_pane_vc_g2

0x41b5,	// (0x000231a8) input_focus_pane_vc_g3

0x41bd,	// (0x000231b0) input_focus_pane_vc_g4

0x41c5,	// (0x000231b8) input_focus_pane_vc_g5

0x41cd,	// (0x000231c0) input_focus_pane_vc_g6

0x41d5,	// (0x000231c8) input_focus_pane_vc_g7

0x41dd,	// (0x000231d0) input_focus_pane_vc_g8

0x41e5,	// (0x000231d8) input_focus_pane_vc_g9

0x37f4,	// (0x000227e7) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e67f) input_focus_pane_vc_g

0x5717,	// (0x0002470a) data_form_pane_vc_ParamLimits

0x5717,	// (0x0002470a) data_form_pane_vc

0x5723,	// (0x00024716) form_field_data_pane_vc_g1

0x752a,	// (0x0002651d) form_field_data_pane_vc_t1_ParamLimits

0x752a,	// (0x0002651d) form_field_data_pane_vc_t1

0x414d,	// (0x00023140) input_focus_pane_vc_ParamLimits

0x414d,	// (0x00023140) input_focus_pane_vc

0x7544,	// (0x00026537) button_value_adjust_pane_cp3_vc

0x754c,	// (0x0002653f) button_value_adjust_pane_cp5_vc

0x7554,	// (0x00026547) form_field_data_pane_vc_ParamLimits

0x7554,	// (0x00026547) form_field_data_pane_vc

0x756b,	// (0x0002655e) form_field_data_pane_vc_cp2

0x7573,	// (0x00026566) form_field_data_wide_pane_vc_ParamLimits

0x7573,	// (0x00026566) form_field_data_wide_pane_vc

0x7589,	// (0x0002657c) form_field_data_wide_pane_vc_cp2

0x7591,	// (0x00026584) form_field_popup_pane_vc_ParamLimits

0x7591,	// (0x00026584) form_field_popup_pane_vc

0x75a8,	// (0x0002659b) form_field_popup_wide_pane_vc_ParamLimits

0x75a8,	// (0x0002659b) form_field_popup_wide_pane_vc

0x75be,	// (0x000265b1) form_field_slider_pane_vc_ParamLimits

0x75be,	// (0x000265b1) form_field_slider_pane_vc

0x75d1,	// (0x000265c4) form_field_slider_wide_pane_vc_ParamLimits

0x75d1,	// (0x000265c4) form_field_slider_wide_pane_vc

0xe0dd,	// (0x0002d0d0) grid_touch_1_pane_ParamLimits

0xe0dd,	// (0x0002d0d0) grid_touch_1_pane

0xe0f1,	// (0x0002d0e4) grid_touch_2_pane_ParamLimits

0xe0f1,	// (0x0002d0e4) grid_touch_2_pane

0x769f,	// (0x00026692) touch_pane_g1_ParamLimits

0x769f,	// (0x00026692) touch_pane_g1

0x7608,	// (0x000265fb) cell_app_pane_cp_wide_ParamLimits

0x7608,	// (0x000265fb) cell_app_pane_cp_wide

0x7619,	// (0x0002660c) grid_popup_fast_wide_pane_ParamLimits

0x7619,	// (0x0002660c) grid_popup_fast_wide_pane

0x762d,	// (0x00026620) scroll_pane_cp19_ParamLimits

0x762d,	// (0x00026620) scroll_pane_cp19

0x37fe,	// (0x000227f1) bg_popup_window_pane_cp20

0x7641,	// (0x00026634) listscroll_popup_fast_wide_pane

0x430d,	// (0x00023300) grid_indicator_nsta_pane

0x7649,	// (0x0002663c) clock_nsta_pane_g1

0x7652,	// (0x00026645) clock_nsta_pane_t1

0xe11b,	// (0x0002d10e) cell_indicator_nsta_pane_ParamLimits

0xe11b,	// (0x0002d10e) cell_indicator_nsta_pane

0x769f,	// (0x00026692) cell_indicator_nsta_pane_g1

0xe132,	// (0x0002d125) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002ea7c) cell_indicator_nsta_pane_g

0x76ba,	// (0x000266ad) clock_nsta_pane_cp

0x76c2,	// (0x000266b5) indicator_nsta_pane_cp

0x76ca,	// (0x000266bd) nsta_clock_indic_pane_g1

0x39a7,	// (0x0002299a) grid_indicator_pane

0x46e1,	// (0x000236d4) scroll_pane_cp29

0x1ba2,	// (0x00020b95) indicator_nsta_pane_cp2_ParamLimits

0x1ba2,	// (0x00020b95) indicator_nsta_pane_cp2

0x38de,	// (0x000228d1) main_apps_wheel_pane

0x593e,	// (0x00024931) form_midp_field_text_pane_ParamLimits

0x5a89,	// (0x00024a7c) scroll_bar_cp050_ParamLimits

0x771a,	// (0x0002670d) cell_indicator_pane_ParamLimits

0x771a,	// (0x0002670d) cell_indicator_pane

0x7731,	// (0x00026724) cell_indicator_pane_g1

0xe13f,	// (0x0002d132) grid_wheel_folder_pane_ParamLimits

0xe13f,	// (0x0002d132) grid_wheel_folder_pane

0xe14d,	// (0x0002d140) list_wheel_apps_pane_ParamLimits

0xe14d,	// (0x0002d140) list_wheel_apps_pane

0xe15b,	// (0x0002d14e) main_apps_wheel_pane_g1_ParamLimits

0xe15b,	// (0x0002d14e) main_apps_wheel_pane_g1

0xe167,	// (0x0002d15a) main_apps_wheel_pane_g2_ParamLimits

0xe167,	// (0x0002d15a) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002ea98) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002ea98) main_apps_wheel_pane_g

0xe175,	// (0x0002d168) main_apps_wheel_pane_t1_ParamLimits

0xe175,	// (0x0002d168) main_apps_wheel_pane_t1

0xe189,	// (0x0002d17c) list_wheel_apps_pane_g1

0xe191,	// (0x0002d184) list_wheel_apps_pane_g2

0xe199,	// (0x0002d18c) list_wheel_apps_pane_g3

0xe1a1,	// (0x0002d194) list_wheel_apps_pane_g4

0xe1ab,	// (0x0002d19e) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002ea9d) list_wheel_apps_pane_g

0x4c64,	// (0x00023c57) navi_icon_text_pane

0xd77d,	// (0x0002c770) aid_fill_nsta

0x77f6,	// (0x000267e9) navi_icon_text_pane_g1

0x7802,	// (0x000267f5) navi_icon_text_pane_t1

0x4af7,	// (0x00023aea) list_set_graphic_pane_t1_ParamLimits

0x4af7,	// (0x00023aea) list_set_graphic_pane_t1

0x61e0,	// (0x000251d3) popup_midp_note_alarm_window_t6_ParamLimits

0x61e0,	// (0x000251d3) popup_midp_note_alarm_window_t6

0x61f2,	// (0x000251e5) popup_midp_note_alarm_window_t7_ParamLimits

0x61f2,	// (0x000251e5) popup_midp_note_alarm_window_t7

0x6204,	// (0x000251f7) popup_midp_note_alarm_window_t8_ParamLimits

0x6204,	// (0x000251f7) popup_midp_note_alarm_window_t8

0x6216,	// (0x00025209) popup_midp_note_alarm_window_t9_ParamLimits

0x6216,	// (0x00025209) popup_midp_note_alarm_window_t9

0x6228,	// (0x0002521b) popup_midp_note_alarm_window_t10_ParamLimits

0x6228,	// (0x0002521b) popup_midp_note_alarm_window_t10

0x623a,	// (0x0002522d) popup_midp_note_alarm_window_t11_ParamLimits

0x623a,	// (0x0002522d) popup_midp_note_alarm_window_t11

0x624c,	// (0x0002523f) scroll_pane_cp17_ParamLimits

0x624c,	// (0x0002523f) scroll_pane_cp17

0x2599,	// (0x0002158c) volume_small_pane_cp_g1

0x288e,	// (0x00021881) volume_small_pane_cp_g2

0x2897,	// (0x0002188a) volume_small_pane_cp_g3

0x28a0,	// (0x00021893) volume_small_pane_cp_g4

0x28a9,	// (0x0002189c) volume_small_pane_cp_g5

0x28b2,	// (0x000218a5) volume_small_pane_cp_g6

0x28bb,	// (0x000218ae) volume_small_pane_cp_g7

0x28c4,	// (0x000218b7) volume_small_pane_cp_g8

0x28cd,	// (0x000218c0) volume_small_pane_cp_g9

0x28d6,	// (0x000218c9) volume_small_pane_cp_g10

0x4ec1,	// (0x00023eb4) midp_ticker_pane_g1_ParamLimits

0x4ecd,	// (0x00023ec0) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e74b) midp_ticker_pane_g_ParamLimits

0x4ed9,	// (0x00023ecc) midp_ticker_pane_t1_ParamLimits

0xd7a1,	// (0x0002c794) aid_fill_nsta_2

0x5a75,	// (0x00024a68) list_form2_midp_pane

0x6ba5,	// (0x00025b98) midp_editing_number_pane_ParamLimits

0x6bb4,	// (0x00025ba7) midp_ticker_pane_ParamLimits

0x7814,	// (0x00026807) form2_midp_field_pane

0x7838,	// (0x0002682b) scroll_pane_cp51

0x7858,	// (0x0002684b) form2_midp_button_pane_ParamLimits

0x7858,	// (0x0002684b) form2_midp_button_pane

0x786a,	// (0x0002685d) form2_midp_content_pane_ParamLimits

0x786a,	// (0x0002685d) form2_midp_content_pane

0x7884,	// (0x00026877) form2_midp_field_choice_group_pane

0x788c,	// (0x0002687f) form2_midp_field_pane_g1

0x7894,	// (0x00026887) form2_midp_field_pane_g2

0x789c,	// (0x0002688f) form2_midp_field_pane_g3

0x78a4,	// (0x00026897) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002eac2) form2_midp_field_pane_g

0x78ac,	// (0x0002689f) form2_midp_gauge_slider_pane

0x78b4,	// (0x000268a7) form2_midp_gauge_wait_pane

0x78bc,	// (0x000268af) form2_midp_image_pane_ParamLimits

0x78bc,	// (0x000268af) form2_midp_image_pane

0x78d7,	// (0x000268ca) form2_midp_label_pane_ParamLimits

0x78d7,	// (0x000268ca) form2_midp_label_pane

0xe1de,	// (0x0002d1d1) form2_midp_label_pane_cp_ParamLimits

0xe1de,	// (0x0002d1d1) form2_midp_label_pane_cp

0x7911,	// (0x00026904) form2_midp_string_pane_ParamLimits

0x7911,	// (0x00026904) form2_midp_string_pane

0xbde5,	// (0x0002add8) form2_midp_text_pane_ParamLimits

0xbde5,	// (0x0002add8) form2_midp_text_pane

0x7923,	// (0x00026916) form2_midp_time_pane

0x7933,	// (0x00026926) input_focus_pane_cp51_ParamLimits

0x7933,	// (0x00026926) input_focus_pane_cp51

0x794b,	// (0x0002693e) form2_midp_label_pane_t1_ParamLimits

0x794b,	// (0x0002693e) form2_midp_label_pane_t1

0xbdfe,	// (0x0002adf1) form2_mdip_text_pane_t1_ParamLimits

0xbdfe,	// (0x0002adf1) form2_mdip_text_pane_t1

0x10b7,	// (0x000200aa) form2_midp_time_pane_t1

0x7994,	// (0x00026987) form2_midp_gauge_slider_pane_t1

0xe1fd,	// (0x0002d1f0) form2_midp_gauge_slider_pane_t2

0xe20f,	// (0x0002d202) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002eacb) form2_midp_gauge_slider_pane_t

0x79ca,	// (0x000269bd) form2_midp_slider_pane

0x79d6,	// (0x000269c9) form2_midp_gauge_wait_pane_t1

0x79e4,	// (0x000269d7) form2_midp_wait_pane_ParamLimits

0x79e4,	// (0x000269d7) form2_midp_wait_pane

0xe221,	// (0x0002d214) list_single_2graphic_pane_cp4_ParamLimits

0xe221,	// (0x0002d214) list_single_2graphic_pane_cp4

0xdbfb,	// (0x0002cbee) list_single_midp_graphic_pane_cp_ParamLimits

0xdbfb,	// (0x0002cbee) list_single_midp_graphic_pane_cp

0x37fe,	// (0x000227f1) list_highlight_pane_cp20

0x7a33,	// (0x00026a26) list_single_2graphic_pane_g1_cp4

0x7a3b,	// (0x00026a2e) list_single_2graphic_pane_g2_cp4

0x7a43,	// (0x00026a36) list_single_2graphic_pane_t1_cp4

0x38de,	// (0x000228d1) list_highlight_pane_cp21

0x7a52,	// (0x00026a45) list_single_midp_graphic_pane_g4_cp

0x7a61,	// (0x00026a54) list_single_midp_graphic_pane_t1_cp

0xe235,	// (0x0002d228) form2_mdip_string_pane_t1_ParamLimits

0xe235,	// (0x0002d228) form2_mdip_string_pane_t1

0x37fe,	// (0x000227f1) bg_wml_button_pane_cp2

0x37f4,	// (0x000227e7) form2_midp_image_pane_g1

0x0588,	// (0x0001f57b) list_double_large_graphic_pane_g5_ParamLimits

0x0588,	// (0x0001f57b) list_double_large_graphic_pane_g5

0xd5f8,	// (0x0002c5eb) midp_form_pane_ParamLimits

0x38de,	// (0x000228d1) main_apps_wheel_pane_ParamLimits

0xc7ae,	// (0x0002b7a1) popup_preview_window_ParamLimits

0xc7ae,	// (0x0002b7a1) popup_preview_window

0x2422,	// (0x00021415) popup_touch_info_window_ParamLimits

0x2422,	// (0x00021415) popup_touch_info_window

0x2440,	// (0x00021433) popup_touch_menu_window_ParamLimits

0x2440,	// (0x00021433) popup_touch_menu_window

0x37ea,	// (0x000227dd) bg_popup_sub_pane_cp6

0x7b6f,	// (0x00026b62) list_touch_menu_pane

0x7b77,	// (0x00026b6a) list_single_touch_menu_pane_ParamLimits

0x7b77,	// (0x00026b6a) list_single_touch_menu_pane

0x7b8d,	// (0x00026b80) list_single_touch_menu_pane_t1

0x38de,	// (0x000228d1) bg_popup_sub_pane_cp7_ParamLimits

0x38de,	// (0x000228d1) bg_popup_sub_pane_cp7

0x7b9b,	// (0x00026b8e) heading_sub_pane

0x7ba3,	// (0x00026b96) list_touch_info_pane_ParamLimits

0x7ba3,	// (0x00026b96) list_touch_info_pane

0x7bb2,	// (0x00026ba5) list_single_touch_info_pane_ParamLimits

0x7bb2,	// (0x00026ba5) list_single_touch_info_pane

0x7bc4,	// (0x00026bb7) list_single_touch_info_pane_t1

0x7bd2,	// (0x00026bc5) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002ead9) list_single_touch_info_pane_t

0x4de4,	// (0x00023dd7) bg_popup_heading_pane_cp

0x7be0,	// (0x00026bd3) heading_sub_pane_t1

0x56b1,	// (0x000246a4) bg_popup_preview_window_pane_cp_ParamLimits

0x56b1,	// (0x000246a4) bg_popup_preview_window_pane_cp

0x7b9b,	// (0x00026b8e) heading_preview_pane

0x7ba3,	// (0x00026b96) list_preview_pane_ParamLimits

0x7ba3,	// (0x00026b96) list_preview_pane

0x7bee,	// (0x00026be1) popup_preview_window_g1

0x7bb2,	// (0x00026ba5) list_single_preview_pane_ParamLimits

0x7bb2,	// (0x00026ba5) list_single_preview_pane

0x7bf6,	// (0x00026be9) list_single_preview_pane_g1

0x7bfe,	// (0x00026bf1) list_single_preview_pane_t1

0x7bc4,	// (0x00026bb7) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002eade) list_single_preview_pane_t

0x7c0c,	// (0x00026bff) bg_popup_heading_pane_cp2_ParamLimits

0x7c0c,	// (0x00026bff) bg_popup_heading_pane_cp2

0x7c22,	// (0x00026c15) heading_preview_pane_g1

0x7c2a,	// (0x00026c1d) heading_preview_pane_t1_ParamLimits

0x7c2a,	// (0x00026c1d) heading_preview_pane_t1

0x39ca,	// (0x000229bd) soft_indicator_pane_t1_ParamLimits

0x40c0,	// (0x000230b3) scroll_pane_ParamLimits

0x45da,	// (0x000235cd) scroll_sc2_left_pane

0x45e3,	// (0x000235d6) scroll_sc2_right_pane

0x4602,	// (0x000235f5) scroll_bg_pane_g1_ParamLimits

0x4617,	// (0x0002360a) scroll_bg_pane_g2_ParamLimits

0x462f,	// (0x00023622) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e6d6) scroll_bg_pane_g_ParamLimits

0x4602,	// (0x000235f5) scroll_handle_pane_g1_ParamLimits

0x4651,	// (0x00023644) scroll_handle_pane_g2_ParamLimits

0x462f,	// (0x00023622) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e6dd) scroll_handle_pane_g_ParamLimits

0x1ee8,	// (0x00020edb) popup_choice_list_window_ParamLimits

0x1ee8,	// (0x00020edb) popup_choice_list_window

0x5587,	// (0x0002457a) choice_list_pane

0x5609,	// (0x000245fc) cell_toolbar_pane_t1

0x5631,	// (0x00024624) toolbar_button_pane_ParamLimits

0x6706,	// (0x000256f9) ai_gene_pane_1_t2_ParamLimits

0x6706,	// (0x000256f9) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002e8f9) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002e8f9) ai_gene_pane_1_t

0x7c47,	// (0x00026c3a) scroll_sc2_left_pane_g1

0x7c47,	// (0x00026c3a) scroll_sc2_right_pane_g1

0x5133,	// (0x00024126) bg_popup_sub_pane_cp10

0x7c51,	// (0x00026c44) list_choice_list_pane

0x7c6a,	// (0x00026c5d) list_single_choice_list_pane_ParamLimits

0x7c6a,	// (0x00026c5d) list_single_choice_list_pane

0x7c7d,	// (0x00026c70) list_single_choice_list_pane_g1

0x42de,	// (0x000232d1) list_single_choice_list_pane_t1_ParamLimits

0x42de,	// (0x000232d1) list_single_choice_list_pane_t1

0x7c85,	// (0x00026c78) choice_list_pane_g1

0x7c8d,	// (0x00026c80) choice_list_pane_t1

0x37ea,	// (0x000227dd) input_focus_pane_cp11

0x44b5,	// (0x000234a8) title_pane_stacon_g2_ParamLimits

0x44b5,	// (0x000234a8) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e6bc) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e6bc) title_pane_stacon_g

0x4de4,	// (0x00023dd7) cursor_press_pane

0xc45b,	// (0x0002b44e) popup_fep_hwr_window_ParamLimits

0xc45b,	// (0x0002b44e) popup_fep_hwr_window

0x200e,	// (0x00021001) popup_fep_vkb_window_ParamLimits

0x200e,	// (0x00021001) popup_fep_vkb_window

0x7c9b,	// (0x00026c8e) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002eb07) fep_vkb_side_pane_g_ParamLimits

0x2918,	// (0x0002190b) fep_hwr_candidate_pane_ParamLimits

0x2918,	// (0x0002190b) fep_hwr_candidate_pane

0x2942,	// (0x00021935) fep_hwr_side_pane_ParamLimits

0x2942,	// (0x00021935) fep_hwr_side_pane

0x2962,	// (0x00021955) fep_hwr_top_pane_ParamLimits

0x2962,	// (0x00021955) fep_hwr_top_pane

0x297a,	// (0x0002196d) fep_hwr_write_pane_ParamLimits

0x297a,	// (0x0002196d) fep_hwr_write_pane

0xfb14,	// (0x0002eb07) fep_vkb_side_pane_g

0x7ca3,	// (0x00026c96) fep_hwr_top_pane_g1

0x7cb5,	// (0x00026ca8) fep_hwr_top_pane_g2

0x29a6,	// (0x00021999) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002eae3) fep_hwr_top_pane_g

0x29bb,	// (0x000219ae) fep_hwr_top_text_pane

0x47d1,	// (0x000237c4) fep_hwr_top_text_pane_g1

0x7ceb,	// (0x00026cde) fep_hwr_top_text_pane_t1

0x2ab1,	// (0x00021aa4) fep_hwr_candidate_pane_g1

0x7f3e,	// (0x00026f31) fep_vkb_keypad_pane_g3_ParamLimits

0x7f3e,	// (0x00026f31) fep_vkb_keypad_pane_g3

0x7f66,	// (0x00026f59) fep_vkb_keypad_pane_g4_ParamLimits

0x7f66,	// (0x00026f59) fep_vkb_keypad_pane_g4

0x7fd5,	// (0x00026fc8) fep_vkb_bottom_pane_g2_ParamLimits

0x7fd5,	// (0x00026fc8) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002eb0e) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002eb0e) fep_vkb_bottom_pane_g

0x7c47,	// (0x00026c3a) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002eb18) cell_vkb_side_pane_g

0x8060,	// (0x00027053) cell_vkb_side_pane_t1

0x806e,	// (0x00027061) cell_vkb_side_pane_t1_copy1

0x7c47,	// (0x00026c3a) bg_fep_vkb_candidate_pane_g2

0x819a,	// (0x0002718d) cell_vkb_candidate_pane_ParamLimits

0x7cf9,	// (0x00026cec) aid_size_cell_vkb_ParamLimits

0x7cf9,	// (0x00026cec) aid_size_cell_vkb

0x819a,	// (0x0002718d) cell_vkb_candidate_pane

0x2acb,	// (0x00021abe) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0002d2aa) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0002d2aa) fep_vkb_bottom_pane

0x7dbd,	// (0x00026db0) fep_vkb_candidate_pane_ParamLimits

0x7dbd,	// (0x00026db0) fep_vkb_candidate_pane

0xe2dc,	// (0x0002d2cf) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0002d2cf) fep_vkb_keypad_pane

0xe318,	// (0x0002d30b) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0002d30b) fep_vkb_side_pane

0xe354,	// (0x0002d347) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0002d347) fep_vkb_top_pane

0x7e97,	// (0x00026e8a) fep_vkb_top_pane_g1_ParamLimits

0x7e97,	// (0x00026e8a) fep_vkb_top_pane_g1

0x7ea6,	// (0x00026e99) fep_vkb_top_pane_g2_ParamLimits

0x7ea6,	// (0x00026e99) fep_vkb_top_pane_g2

0x7eb5,	// (0x00026ea8) fep_vkb_top_pane_g3_ParamLimits

0x7eb5,	// (0x00026ea8) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002eafe) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002eafe) fep_vkb_top_pane_g

0x7ed3,	// (0x00026ec6) fep_vkb_top_text_pane_ParamLimits

0x7ed3,	// (0x00026ec6) fep_vkb_top_text_pane

0xe390,	// (0x0002d383) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0002d383) fep_vkb_side_pane_g1

0x7f2d,	// (0x00026f20) grid_vkb_side_pane_ParamLimits

0x7f2d,	// (0x00026f20) grid_vkb_side_pane

0x2ad3,	// (0x00021ac6) bg_popup_fep_shadow_pane_g2

0x2adc,	// (0x00021acf) bg_popup_fep_shadow_pane_g3

0x2ae4,	// (0x00021ad7) bg_popup_fep_shadow_pane_g4

0x2aed,	// (0x00021ae0) bg_popup_fep_shadow_pane_g5

0x2af7,	// (0x00021aea) bg_popup_fep_shadow_pane_g6

0x2aff,	// (0x00021af2) bg_popup_fep_shadow_pane_g7

0x41c5,	// (0x000231b8) bg_popup_fep_shadow_pane_g8

0x7f84,	// (0x00026f77) grid_vkb_keypad_number_pane_ParamLimits

0x7f84,	// (0x00026f77) grid_vkb_keypad_number_pane

0x7f94,	// (0x00026f87) grid_vkb_keypad_pane_ParamLimits

0x7f94,	// (0x00026f87) grid_vkb_keypad_pane

0x7fba,	// (0x00026fad) fep_vkb_bottom_pane_g1_ParamLimits

0x7fba,	// (0x00026fad) fep_vkb_bottom_pane_g1

0x7fe3,	// (0x00026fd6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7fe3,	// (0x00026fd6) grid_vkb_keypad_bottom_left_pane

0x7ff8,	// (0x00026feb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ff8,	// (0x00026feb) grid_vkb_keypad_bottom_right_pane

0x800d,	// (0x00027000) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0002d3ca) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0002d3dc) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0002d3dc) cell_vkb_side_pane

0x7c47,	// (0x00026c3a) cell_vkb_side_pane_g1

0x807c,	// (0x0002706f) cell_vkb_keypad_pane_ParamLimits

0x807c,	// (0x0002706f) cell_vkb_keypad_pane

0x80f1,	// (0x000270e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002eb2b) bg_popup_fep_shadow_pane_g

0x7c47,	// (0x00026c3a) cell_hwr_side_pane_g1

0x7c47,	// (0x00026c3a) cell_hwr_side_pane_g2

0x80fb,	// (0x000270ee) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0002d3f2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0002d3f2) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0002d407) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0002d407) cell_vkb_keypad_bottom_right_pane

0x7c47,	// (0x00026c3a) cell_vkb_keypad_bottom_left_pane_g1

0x7c47,	// (0x00026c3a) cell_vkb_keypad_bottom_right_pane_g1

0x815f,	// (0x00027152) cell_vkb_keypad_number_pane_ParamLimits

0x815f,	// (0x00027152) cell_vkb_keypad_number_pane

0x817e,	// (0x00027171) cell_vkb_keypad_number_pane_g1

0x8188,	// (0x0002717b) cell_vkb_keypad_number_pane_g2

0x8191,	// (0x00027184) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002eb1d) cell_vkb_keypad_number_pane_g

0x80fb,	// (0x000270ee) cell_vkb_keypad_number_pane_t1

0x81b5,	// (0x000271a8) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002eb18) cell_hwr_side_pane_g

0x81ce,	// (0x000271c1) cell_hwr_side_pane_t1

0x2b11,	// (0x00021b04) cell_hwr_side_pane_t1_copy1

0x7ec5,	// (0x00026eb8) cell_hwr_candidate_pane_g1

0x2b1f,	// (0x00021b12) cell_hwr_candidate_pane_t1

0x7c47,	// (0x00026c3a) cell_vkb_candidate_pane_g2

0x8254,	// (0x00027247) cell_vkb_candidate_pane_t1

0x28df,	// (0x000218d2) bg_popup_fep_shadow_pane_ParamLimits

0x28df,	// (0x000218d2) bg_popup_fep_shadow_pane

0xd9f5,	// (0x0002c9e8) bg_fep_hwr_top_pane_g4

0x7cc7,	// (0x00026cba) bg_hwr_side_pane_g1_ParamLimits

0x7cc7,	// (0x00026cba) bg_hwr_side_pane_g1

0xcae8,	// (0x0002badb) cell_hwr_side_pane_ParamLimits

0xcae8,	// (0x0002badb) cell_hwr_side_pane

0x2a32,	// (0x00021a25) fep_hwr_write_pane_g1_ParamLimits

0x2a32,	// (0x00021a25) fep_hwr_write_pane_g1

0x2a3f,	// (0x00021a32) fep_hwr_write_pane_g2_ParamLimits

0x2a3f,	// (0x00021a32) fep_hwr_write_pane_g2

0x2a4c,	// (0x00021a3f) fep_hwr_write_pane_g3_ParamLimits

0x2a4c,	// (0x00021a3f) fep_hwr_write_pane_g3

0xcb08,	// (0x0002bafb) fep_hwr_write_pane_g4_ParamLimits

0xcb08,	// (0x0002bafb) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002eaea) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002eaea) fep_hwr_write_pane_g

0xd9f5,	// (0x0002c9e8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd9f5,	// (0x0002c9e8) bg_fep_hwr_candidate_pane_g2

0x2a6f,	// (0x00021a62) cell_hwr_candidate_pane_ParamLimits

0x2a6f,	// (0x00021a62) cell_hwr_candidate_pane

0x2ab1,	// (0x00021aa4) fep_hwr_candidate_pane_g1_ParamLimits

0x7d27,	// (0x00026d1a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7d27,	// (0x00026d1a) bg_popup_fep_shadow_pane_cp2

0x7ec5,	// (0x00026eb8) fep_vkb_top_pane_g4_ParamLimits

0x7ec5,	// (0x00026eb8) fep_vkb_top_pane_g4

0x7f0b,	// (0x00026efe) fep_vkb_side_pane_g2_ParamLimits

0x7f0b,	// (0x00026efe) fep_vkb_side_pane_g2

0xbaa7,	// (0x0002aa9a) list_setting_pane_t4_ParamLimits

0xbaa7,	// (0x0002aa9a) list_setting_pane_t4

0xbb41,	// (0x0002ab34) list_setting_number_pane_t5_ParamLimits

0xbb41,	// (0x0002ab34) list_setting_number_pane_t5

0x4808,	// (0x000237fb) list_double_heading_pane_cp2_ParamLimits

0x4808,	// (0x000237fb) list_double_heading_pane_cp2

0x415b,	// (0x0002314e) list_double_heading_pane_g1_cp2_ParamLimits

0x415b,	// (0x0002314e) list_double_heading_pane_g1_cp2

0x4167,	// (0x0002315a) list_double_heading_pane_g2_cp2_ParamLimits

0x4167,	// (0x0002315a) list_double_heading_pane_g2_cp2

0x8262,	// (0x00027255) list_double_heading_pane_t1_cp2_ParamLimits

0x8262,	// (0x00027255) list_double_heading_pane_t1_cp2

0x8278,	// (0x0002726b) list_double_heading_pane_t2_cp2_ParamLimits

0x8278,	// (0x0002726b) list_double_heading_pane_t2_cp2

0x37d2,	// (0x000227c5) aid_value_unit2

0x1732,	// (0x00020725) popup_preview_fixed_window

0x3b67,	// (0x00022b5a) bg_popup_preview_window_pane_cp02

0x828a,	// (0x0002727d) list_preview_fixed_pane

0x82d0,	// (0x000272c3) list_empty_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_empty_pane_fp

0x82d0,	// (0x000272c3) list_single_cale_day_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_cale_day_pane_fp

0x82d0,	// (0x000272c3) list_single_graphic_heading_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_graphic_heading_pane_fp

0x82d0,	// (0x000272c3) list_single_graphic_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_graphic_pane_fp

0x82d0,	// (0x000272c3) list_single_heading_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_heading_pane_fp

0x82d0,	// (0x000272c3) list_single_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_pane_fp

0x82e5,	// (0x000272d8) list_single_pane_fp_g1_ParamLimits

0x82e5,	// (0x000272d8) list_single_pane_fp_g1

0x10ca,	// (0x000200bd) list_single_pane_fp_g2_ParamLimits

0x10ca,	// (0x000200bd) list_single_pane_fp_g2

0x10d6,	// (0x000200c9) list_single_pane_fp_g3_ParamLimits

0x10d6,	// (0x000200c9) list_single_pane_fp_g3

0x82f1,	// (0x000272e4) list_single_pane_fp_g4_ParamLimits

0x82f1,	// (0x000272e4) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002eb4c) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002eb4c) list_single_pane_fp_g

0x10ea,	// (0x000200dd) list_single_pane_fp_t1_ParamLimits

0x10ea,	// (0x000200dd) list_single_pane_fp_t1

0x1101,	// (0x000200f4) list_single_graphic_pane_fp_g1_ParamLimits

0x1101,	// (0x000200f4) list_single_graphic_pane_fp_g1

0x82e5,	// (0x000272d8) list_single_graphic_pane_fp_g2_ParamLimits

0x82e5,	// (0x000272d8) list_single_graphic_pane_fp_g2

0x10ca,	// (0x000200bd) list_single_graphic_pane_fp_g3_ParamLimits

0x10ca,	// (0x000200bd) list_single_graphic_pane_fp_g3

0x10d6,	// (0x000200c9) list_single_graphic_pane_fp_g4_ParamLimits

0x10d6,	// (0x000200c9) list_single_graphic_pane_fp_g4

0x82f1,	// (0x000272e4) list_single_graphic_pane_fp_g5_ParamLimits

0x82f1,	// (0x000272e4) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eb55) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eb55) list_single_graphic_pane_fp_g

0x110d,	// (0x00020100) list_single_graphic_pane_fp_t1_ParamLimits

0x110d,	// (0x00020100) list_single_graphic_pane_fp_t1

0x1101,	// (0x000200f4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1101,	// (0x000200f4) list_single_graphic_heading_pane_fp_g1

0x82e5,	// (0x000272d8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x82e5,	// (0x000272d8) list_single_graphic_heading_pane_fp_g2

0x10ca,	// (0x000200bd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x10ca,	// (0x000200bd) list_single_graphic_heading_pane_fp_g3

0x10d6,	// (0x000200c9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x10d6,	// (0x000200c9) list_single_graphic_heading_pane_fp_g4

0x82f1,	// (0x000272e4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x82f1,	// (0x000272e4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eb55) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eb55) list_single_graphic_heading_pane_fp_g

0x1123,	// (0x00020116) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1123,	// (0x00020116) list_single_graphic_heading_pane_fp_t1

0x1139,	// (0x0002012c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1139,	// (0x0002012c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002eb60) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002eb60) list_single_graphic_heading_pane_fp_t

0x114b,	// (0x0002013e) list_single_cale_day_pane_fp_g1_ParamLimits

0x114b,	// (0x0002013e) list_single_cale_day_pane_fp_g1

0x82fd,	// (0x000272f0) list_single_cale_day_pane_fp_g2_ParamLimits

0x82fd,	// (0x000272f0) list_single_cale_day_pane_fp_g2

0x1183,	// (0x00020176) list_single_cale_day_pane_fp_g3_ParamLimits

0x1183,	// (0x00020176) list_single_cale_day_pane_fp_g3

0x11ab,	// (0x0002019e) list_single_cale_day_pane_fp_g4_ParamLimits

0x11ab,	// (0x0002019e) list_single_cale_day_pane_fp_g4

0x11cf,	// (0x000201c2) list_single_cale_day_pane_fp_g5_ParamLimits

0x11cf,	// (0x000201c2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002eb65) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002eb65) list_single_cale_day_pane_fp_g

0x11f3,	// (0x000201e6) list_single_cale_day_pane_fp_t1_ParamLimits

0x11f3,	// (0x000201e6) list_single_cale_day_pane_fp_t1

0x1219,	// (0x0002020c) list_single_cale_day_pane_fp_t2_ParamLimits

0x1219,	// (0x0002020c) list_single_cale_day_pane_fp_t2

0x1232,	// (0x00020225) list_single_cale_day_pane_fp_t3_ParamLimits

0x1232,	// (0x00020225) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002eb70) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002eb70) list_single_cale_day_pane_fp_t

0x82e5,	// (0x000272d8) list_empty_pane_fp_g1_ParamLimits

0x82e5,	// (0x000272d8) list_empty_pane_fp_g1

0x124b,	// (0x0002023e) list_empty_pane_fp_t1

0x1259,	// (0x0002024c) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002eb77) list_empty_pane_fp_t

0x82e5,	// (0x000272d8) list_single_heading_pane_fp_g1_ParamLimits

0x82e5,	// (0x000272d8) list_single_heading_pane_fp_g1

0x10ca,	// (0x000200bd) list_single_heading_pane_fp_g2_ParamLimits

0x10ca,	// (0x000200bd) list_single_heading_pane_fp_g2

0x10d6,	// (0x000200c9) list_single_heading_pane_fp_g3_ParamLimits

0x10d6,	// (0x000200c9) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002eb7c) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eb7c) list_single_heading_pane_fp_g

0x1267,	// (0x0002025a) list_single_heading_pane_fp_t1_ParamLimits

0x1267,	// (0x0002025a) list_single_heading_pane_fp_t1

0x1279,	// (0x0002026c) list_single_heading_pane_fp_t2_ParamLimits

0x1279,	// (0x0002026c) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002eb83) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002eb83) list_single_heading_pane_fp_t

0x434c,	// (0x0002333f) aid_size_cell_fast

0x3ad7,	// (0x00022aca) soft_indicator_pane_cp1_t1

0x4389,	// (0x0002337c) cell_app_pane_cp2_ParamLimits

0x4389,	// (0x0002337c) cell_app_pane_cp2

0x2901,	// (0x000218f4) fep_hwr_candidate_drop_down_list_pane

0xda03,	// (0x0002c9f6) fep_hwr_candidate_pane_g3_ParamLimits

0xda03,	// (0x0002c9f6) fep_hwr_candidate_pane_g3

0xda10,	// (0x0002ca03) fep_hwr_candidate_pane_g4_ParamLimits

0xda10,	// (0x0002ca03) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002eaf7) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002eaf7) fep_hwr_candidate_pane_g

0x7dac,	// (0x00026d9f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7dac,	// (0x00026d9f) fep_vkb_candidate_drop_down_list_pane

0x81bd,	// (0x000271b0) fep_vkb_candidate_pane_g3

0x81c5,	// (0x000271b8) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002eb24) fep_vkb_candidate_pane_g

0x7ec5,	// (0x00026eb8) cell_hwr_candidate_pane_g1_ParamLimits

0x81dc,	// (0x000271cf) cell_hwr_candidate_pane_g3_ParamLimits

0x81dc,	// (0x000271cf) cell_hwr_candidate_pane_g3

0x81fd,	// (0x000271f0) cell_hwr_candidate_pane_g4_ParamLimits

0x81fd,	// (0x000271f0) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002eb3e) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002eb3e) cell_hwr_candidate_pane_g

0x821e,	// (0x00027211) cell_vkb_candidate_pane_g3_ParamLimits

0x821e,	// (0x00027211) cell_vkb_candidate_pane_g3

0x8239,	// (0x0002722c) cell_vkb_candidate_pane_g4_ParamLimits

0x8239,	// (0x0002722c) cell_vkb_candidate_pane_g4

0x8309,	// (0x000272fc) cell_app_pane_cp2_g1_ParamLimits

0x8309,	// (0x000272fc) cell_app_pane_cp2_g1

0x8327,	// (0x0002731a) cell_app_pane_cp2_g2_ParamLimits

0x8327,	// (0x0002731a) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002eb88) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002eb88) cell_app_pane_cp2_g

0x8333,	// (0x00027326) cell_app_pane_cp2_t1_ParamLimits

0x8333,	// (0x00027326) cell_app_pane_cp2_t1

0x414d,	// (0x00023140) grid_highlight_pane_cp1_ParamLimits

0x414d,	// (0x00023140) grid_highlight_pane_cp1

0x2b3d,	// (0x00021b30) cell_hwr_candidate_pane_cp1_ParamLimits

0x2b3d,	// (0x00021b30) cell_hwr_candidate_pane_cp1

0x7ec5,	// (0x00026eb8) fep_hwr_candidate_drop_down_list_pane_g1

0x8345,	// (0x00027338) fep_hwr_candidate_drop_down_list_pane_g2

0x8352,	// (0x00027345) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002eb8d) fep_hwr_candidate_drop_down_list_pane_g

0x2b5c,	// (0x00021b4f) fep_hwr_candidate_drop_down_list_scroll_pane

0x2b65,	// (0x00021b58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2b65,	// (0x00021b58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2b72,	// (0x00021b65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2b72,	// (0x00021b65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2b7f,	// (0x00021b72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2b7f,	// (0x00021b72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x821e,	// (0x00027211) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x821e,	// (0x00027211) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8239,	// (0x0002722c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8239,	// (0x0002722c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2b8c,	// (0x00021b7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2b8c,	// (0x00021b7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2ba7,	// (0x00021b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2ba7,	// (0x00021b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2bc2,	// (0x00021bb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2bc2,	// (0x00021bb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002eb94) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002eb94) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x835f,	// (0x00027352) cell_vkb_candidate_pane_cp1_ParamLimits

0x835f,	// (0x00027352) cell_vkb_candidate_pane_cp1

0x7ec5,	// (0x00026eb8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) fep_vkb_candidate_drop_down_list_pane_g1

0x8345,	// (0x00027338) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8345,	// (0x00027338) fep_vkb_candidate_drop_down_list_pane_g2

0x8352,	// (0x00027345) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8352,	// (0x00027345) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002eb8d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002eb8d) fep_vkb_candidate_drop_down_list_pane_g

0x837f,	// (0x00027372) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x837f,	// (0x00027372) fep_vkb_candidate_drop_down_list_scroll_pane

0x838c,	// (0x0002737f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x838c,	// (0x0002737f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8399,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8399,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x83a5,	// (0x00027398) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x83a5,	// (0x00027398) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x81dc,	// (0x000271cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x81dc,	// (0x000271cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x81fd,	// (0x000271f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x81fd,	// (0x000271f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x83b1,	// (0x000273a4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x83b1,	// (0x000273a4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x83d2,	// (0x000273c5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x83d2,	// (0x000273c5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x83f3,	// (0x000273e6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x83f3,	// (0x000273e6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002eba5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002eba5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0d6,	// (0x0002c0c9) title_pane_g1_ParamLimits

0xd0e9,	// (0x0002c0dc) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e541) title_pane_g_ParamLimits

0x47c1,	// (0x000237b4) aid_call2_pane

0x47c9,	// (0x000237bc) aid_call_pane

0x47d1,	// (0x000237c4) popup_clock_analogue_window_g1

0x47d1,	// (0x000237c4) popup_clock_analogue_window_g2

0x1aa3,	// (0x00020a96) popup_clock_analogue_window_g3

0x1aac,	// (0x00020a9f) popup_clock_analogue_window_g4

0x37f4,	// (0x000227e7) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e6eb) popup_clock_analogue_window_g

0x1ab4,	// (0x00020aa7) popup_clock_analogue_window_t1

0x1ac2,	// (0x00020ab5) clock_digital_number_pane_ParamLimits

0x1ac2,	// (0x00020ab5) clock_digital_number_pane

0x1ace,	// (0x00020ac1) clock_digital_number_pane_cp02_ParamLimits

0x1ace,	// (0x00020ac1) clock_digital_number_pane_cp02

0x1ada,	// (0x00020acd) clock_digital_number_pane_cp03_ParamLimits

0x1ada,	// (0x00020acd) clock_digital_number_pane_cp03

0x1ae6,	// (0x00020ad9) clock_digital_number_pane_cp04_ParamLimits

0x1ae6,	// (0x00020ad9) clock_digital_number_pane_cp04

0x1af2,	// (0x00020ae5) clock_digital_separator_pane_ParamLimits

0x1af2,	// (0x00020ae5) clock_digital_separator_pane

0x1afe,	// (0x00020af1) popup_clock_digital_window_t1_ParamLimits

0x1afe,	// (0x00020af1) popup_clock_digital_window_t1

0x37f4,	// (0x000227e7) clock_digital_number_pane_g1

0x37f4,	// (0x000227e7) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e6f6) clock_digital_number_pane_g

0x37f4,	// (0x000227e7) clock_digital_separator_pane_g1

0x37f4,	// (0x000227e7) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e6f6) clock_digital_separator_pane_g

0xd77d,	// (0x0002c770) aid_fill_nsta_ParamLimits

0xd8b3,	// (0x0002c8a6) indicator_nsta_pane_ParamLimits

0x5414,	// (0x00024407) popup_clock_analogue_window

0x5414,	// (0x00024407) popup_clock_digital_window

0x430d,	// (0x00023300) grid_indicator_nsta_pane_ParamLimits

0x7660,	// (0x00026653) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002ea77) clock_nsta_pane_t

0x1a67,	// (0x00020a5a) aid_size_max_handle

0xc20a,	// (0x0002b1fd) aid_size_min_handle

0x4de4,	// (0x00023dd7) editor_scroll_pane

0x840e,	// (0x00027401) ex_editor_pane

0x42ba,	// (0x000232ad) scroll_pane_cp13

0x40ec,	// (0x000230df) scroll_pane_cp14

0x4800,	// (0x000237f3) scroll_pane_cp36

0xd560,	// (0x0002c553) list_single_graphic_hl_pane_cp2_ParamLimits

0xd560,	// (0x0002c553) list_single_graphic_hl_pane_cp2

0xbdc1,	// (0x0002adb4) list_single_graphic_hl_pane_ParamLimits

0xbdc1,	// (0x0002adb4) list_single_graphic_hl_pane

0x128f,	// (0x00020282) aid_size_min_hl_cp1

0x8416,	// (0x00027409) list_highlight_pane_cp34_ParamLimits

0x8416,	// (0x00027409) list_highlight_pane_cp34

0x8427,	// (0x0002741a) list_single_graphic_hl_pane_g1_ParamLimits

0x8427,	// (0x0002741a) list_single_graphic_hl_pane_g1

0xbe1b,	// (0x0002ae0e) list_single_graphic_hl_pane_g2_ParamLimits

0xbe1b,	// (0x0002ae0e) list_single_graphic_hl_pane_g2

0xbe1b,	// (0x0002ae0e) list_single_graphic_hl_pane_g3_ParamLimits

0xbe1b,	// (0x0002ae0e) list_single_graphic_hl_pane_g3

0xbe27,	// (0x0002ae1a) list_single_graphic_hl_pane_g4_ParamLimits

0xbe27,	// (0x0002ae1a) list_single_graphic_hl_pane_g4

0xbe33,	// (0x0002ae26) list_single_graphic_hl_pane_g5_ParamLimits

0xbe33,	// (0x0002ae26) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002ebb6) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002ebb6) list_single_graphic_hl_pane_g

0xbe47,	// (0x0002ae3a) list_single_graphic_hl_pane_t1_ParamLimits

0xbe47,	// (0x0002ae3a) list_single_graphic_hl_pane_t1

0x8434,	// (0x00027427) aid_size_min_hl_cp2

0x843d,	// (0x00027430) list_highlight_pane_cp34_cp2_ParamLimits

0x843d,	// (0x00027430) list_highlight_pane_cp34_cp2

0x8427,	// (0x0002741a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8427,	// (0x0002741a) list_single_graphic_hl_pane_g1_cp2

0x844a,	// (0x0002743d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x844a,	// (0x0002743d) list_single_graphic_hl_pane_g2_cp2

0x8456,	// (0x00027449) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8456,	// (0x00027449) list_single_graphic_hl_pane_g3_cp2

0x7354,	// (0x00026347) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7354,	// (0x00026347) list_single_graphic_hl_pane_g4_cp2

0x8464,	// (0x00027457) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8464,	// (0x00027457) list_single_graphic_hl_pane_g5_cp2

0xc265,	// (0x0002b258) control_pane_g4_ParamLimits

0xc265,	// (0x0002b258) control_pane_g4

0x5133,	// (0x00024126) bg_popup_sub_pane_cp10_ParamLimits

0x7c51,	// (0x00026c44) list_choice_list_pane_ParamLimits

0x7c60,	// (0x00026c53) scroll_pane_cp23

0x3b67,	// (0x00022b5a) bg_popup_preview_window_pane_cp02_ParamLimits

0x828a,	// (0x0002727d) list_preview_fixed_pane_ParamLimits

0x82a0,	// (0x00027293) list_preview_fixed_pane_cp_ParamLimits

0x82a0,	// (0x00027293) list_preview_fixed_pane_cp

0x82ac,	// (0x0002729f) popup_preview_fixed_window_g1_ParamLimits

0x82ac,	// (0x0002729f) popup_preview_fixed_window_g1

0x82b8,	// (0x000272ab) popup_preview_fixed_window_g2_ParamLimits

0x82b8,	// (0x000272ab) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002eb45) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002eb45) popup_preview_fixed_window_g

0x19db,	// (0x000209ce) aid_navi_side_left_pane_ParamLimits

0x19f0,	// (0x000209e3) aid_navi_side_right_pane_ParamLimits

0x1a08,	// (0x000209fb) navi_icon_pane_stacon_ParamLimits

0x1a1c,	// (0x00020a0f) navi_navi_pane_stacon_ParamLimits

0x1a08,	// (0x000209fb) navi_text_pane_stacon_ParamLimits

0x37ea,	// (0x000227dd) main_text_info_pane

0x848e,	// (0x00027481) listscroll_text_info_pane

0x8496,	// (0x00027489) list_text_info_pane_ParamLimits

0x8496,	// (0x00027489) list_text_info_pane

0x84a5,	// (0x00027498) scroll_pane_cp24_ParamLimits

0x84a5,	// (0x00027498) scroll_pane_cp24

0xe42f,	// (0x0002d422) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0002d422) list_text_info_pane_t1

0xc3ce,	// (0x0002b3c1) popup_fast_swap2_window_ParamLimits

0xc3ce,	// (0x0002b3c1) popup_fast_swap2_window

0x84f4,	// (0x000274e7) aid_size_cell_fast2

0x37ea,	// (0x000227dd) bg_popup_window_pane_cp17

0x5aa9,	// (0x00024a9c) heading_pane_cp2

0x3db6,	// (0x00022da9) listscroll_fast2_pane

0x84fe,	// (0x000274f1) grid_fast2_pane

0x8508,	// (0x000274fb) listscroll_fast2_pane_g1

0x8510,	// (0x00027503) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002ebc1) listscroll_fast2_pane_g

0x42ba,	// (0x000232ad) scroll_pane_cp26

0x851a,	// (0x0002750d) cell_fast2_pane_ParamLimits

0x851a,	// (0x0002750d) cell_fast2_pane

0x852f,	// (0x00027522) cell_fast2_pane_g1

0x8538,	// (0x0002752b) cell_fast2_pane_g2

0x8541,	// (0x00027534) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002ebc6) cell_fast2_pane_g

0x3ea9,	// (0x00022e9c) grid_highlight_pane_cp9

0x3ebe,	// (0x00022eb1) main_eswt_pane_ParamLimits

0x3ebe,	// (0x00022eb1) main_eswt_pane

0x84ba,	// (0x000274ad) list_single_text_info_pane

0x8549,	// (0x0002753c) eswt_ctrl_button_pane

0x8549,	// (0x0002753c) eswt_ctrl_canvas_pane

0x8551,	// (0x00027544) eswt_ctrl_combo_pane

0x8549,	// (0x0002753c) eswt_ctrl_default_pane

0x8549,	// (0x0002753c) eswt_ctrl_label_pane

0x8559,	// (0x0002754c) eswt_ctrl_wait_pane

0x8561,	// (0x00027554) eswt_shell_pane

0x37ea,	// (0x000227dd) listscroll_eswt_app_pane

0x8581,	// (0x00027574) popup_eswt_tasktip_window_ParamLimits

0x8581,	// (0x00027574) popup_eswt_tasktip_window

0x56b1,	// (0x000246a4) bg_popup_window_pane_cp18

0x8592,	// (0x00027585) eswt_control_pane_g1_ParamLimits

0x8592,	// (0x00027585) eswt_control_pane_g1

0x859f,	// (0x00027592) eswt_control_pane_g2_ParamLimits

0x859f,	// (0x00027592) eswt_control_pane_g2

0x85ac,	// (0x0002759f) eswt_control_pane_g3_ParamLimits

0x85ac,	// (0x0002759f) eswt_control_pane_g3

0x85b9,	// (0x000275ac) eswt_control_pane_g4_ParamLimits

0x85b9,	// (0x000275ac) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002ebcd) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002ebcd) eswt_control_pane_g

0x414d,	// (0x00023140) bg_button_pane_ParamLimits

0x414d,	// (0x00023140) bg_button_pane

0x3ebe,	// (0x00022eb1) common_borders_pane_copy2_ParamLimits

0x3ebe,	// (0x00022eb1) common_borders_pane_copy2

0x85c6,	// (0x000275b9) control_button_pane_g1_ParamLimits

0x85c6,	// (0x000275b9) control_button_pane_g1

0x85d2,	// (0x000275c5) control_button_pane_g2_ParamLimits

0x85d2,	// (0x000275c5) control_button_pane_g2

0x85de,	// (0x000275d1) control_button_pane_g3_ParamLimits

0x85de,	// (0x000275d1) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002ebd6) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002ebd6) control_button_pane_g

0x85f2,	// (0x000275e5) control_button_pane_t1

0x8600,	// (0x000275f3) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002ebdd) control_button_pane_t

0x563d,	// (0x00024630) bg_button_pane_g1

0x5645,	// (0x00024638) bg_button_pane_g2

0x564d,	// (0x00024640) bg_button_pane_g3

0x5655,	// (0x00024648) bg_button_pane_g4

0x565d,	// (0x00024650) bg_button_pane_g5

0x5665,	// (0x00024658) bg_button_pane_g6

0x566d,	// (0x00024660) bg_button_pane_g7

0x5675,	// (0x00024668) bg_button_pane_g8

0x567d,	// (0x00024670) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002e84d) bg_button_pane_g

0x7c0c,	// (0x00026bff) common_borders_pane_ParamLimits

0x7c0c,	// (0x00026bff) common_borders_pane

0x8592,	// (0x00027585) eswt_control_pane_g1_copy1_ParamLimits

0x8592,	// (0x00027585) eswt_control_pane_g1_copy1

0x859f,	// (0x00027592) eswt_control_pane_g2_copy1_ParamLimits

0x859f,	// (0x00027592) eswt_control_pane_g2_copy1

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy1_ParamLimits

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy1

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy1_ParamLimits

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy1

0x7c47,	// (0x00026c3a) bg_eswt_ctrl_canvas_pane_g1

0x7c0c,	// (0x00026bff) common_borders_pane_cp2_ParamLimits

0x7c0c,	// (0x00026bff) common_borders_pane_cp2

0x7c0c,	// (0x00026bff) common_borders_pane_cp3_ParamLimits

0x7c0c,	// (0x00026bff) common_borders_pane_cp3

0x860e,	// (0x00027601) separator_horizontal_pane

0x8616,	// (0x00027609) separator_vertical_pane

0x8592,	// (0x00027585) eswt_control_pane_g1_copy2_ParamLimits

0x8592,	// (0x00027585) eswt_control_pane_g1_copy2

0x859f,	// (0x00027592) eswt_control_pane_g2_copy2_ParamLimits

0x859f,	// (0x00027592) eswt_control_pane_g2_copy2

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy2_ParamLimits

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy2

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy2_ParamLimits

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy2

0x37ea,	// (0x000227dd) common_borders_pane_cp4

0x861f,	// (0x00027612) separator_horizontal_pane_g1

0x8628,	// (0x0002761b) separator_horizontal_pane_g2

0x8631,	// (0x00027624) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002ebe2) separator_horizontal_pane_g

0x8592,	// (0x00027585) eswt_control_pane_g1_copy3_ParamLimits

0x8592,	// (0x00027585) eswt_control_pane_g1_copy3

0x859f,	// (0x00027592) eswt_control_pane_g2_copy3_ParamLimits

0x859f,	// (0x00027592) eswt_control_pane_g2_copy3

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy3_ParamLimits

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy3

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy3_ParamLimits

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy3

0x37ea,	// (0x000227dd) common_borders_pane_cp5

0x863a,	// (0x0002762d) separator_vertical_pane_g1

0x8643,	// (0x00027636) separator_vertical_pane_g2

0x864c,	// (0x0002763f) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002ebe9) separator_vertical_pane_g

0x8592,	// (0x00027585) eswt_control_pane_g1_copy4_ParamLimits

0x8592,	// (0x00027585) eswt_control_pane_g1_copy4

0x859f,	// (0x00027592) eswt_control_pane_g2_copy4_ParamLimits

0x859f,	// (0x00027592) eswt_control_pane_g2_copy4

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy4_ParamLimits

0x85ac,	// (0x0002759f) eswt_control_pane_g3_copy4

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy4_ParamLimits

0x85b9,	// (0x000275ac) eswt_control_pane_g4_copy4

0xe44a,	// (0x0002d43d) eswt_ctrl_combo_button_pane

0xe452,	// (0x0002d445) eswt_ctrl_input_pane

0xe45a,	// (0x0002d44d) popup_choice_list_window_cp70

0xe462,	// (0x0002d455) eswt_ctrl_input_pane_t1

0x37ea,	// (0x000227dd) input_focus_pane_cp70

0x7c0c,	// (0x00026bff) bg_button_pane_cp70_ParamLimits

0x7c0c,	// (0x00026bff) bg_button_pane_cp70

0xe470,	// (0x0002d463) eswt_ctrl_combo_button_pane_g1

0x8683,	// (0x00027676) wait_bar_pane_cp70

0x56b1,	// (0x000246a4) bg_popup_window_pane_cp70_ParamLimits

0x56b1,	// (0x000246a4) bg_popup_window_pane_cp70

0x868b,	// (0x0002767e) popup_eswt_tasktip_window_t1

0x86a1,	// (0x00027694) wait_bar_pane_cp71_ParamLimits

0x86a1,	// (0x00027694) wait_bar_pane_cp71

0x86ad,	// (0x000276a0) grid_eswt_app_pane

0x45e3,	// (0x000235d6) scroll_pane_cp70

0xe478,	// (0x0002d46b) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0002d46b) cell_eswt_app_pane

0xe4a2,	// (0x0002d495) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0002d495) cell_eswt_app_pane_g1

0xe4d1,	// (0x0002d4c4) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0002d4c4) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002ebf0) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002ebf0) cell_eswt_app_pane_g

0xe4fa,	// (0x0002d4ed) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0002d4ed) cell_eswt_app_pane_t1

0x8770,	// (0x00027763) grid_highlight_pane_cp70_ParamLimits

0x8770,	// (0x00027763) grid_highlight_pane_cp70

0x4cb9,	// (0x00023cac) set_content_pane_g1

0xd732,	// (0x0002c725) status_small_volume_pane

0x2bdd,	// (0x00021bd0) status_small_volume_pane_g1

0x2be5,	// (0x00021bd8) volume_small2_pane

0x2bee,	// (0x00021be1) volume_small2_pane_g1

0x2bf7,	// (0x00021bea) volume_small2_pane_g2

0x2c00,	// (0x00021bf3) volume_small2_pane_g3

0x2c09,	// (0x00021bfc) volume_small2_pane_g4

0x2c12,	// (0x00021c05) volume_small2_pane_g5

0x2c1b,	// (0x00021c0e) volume_small2_pane_g6

0x2c24,	// (0x00021c17) volume_small2_pane_g7

0x2c2d,	// (0x00021c20) volume_small2_pane_g8

0x2c36,	// (0x00021c29) volume_small2_pane_g9

0x2c3f,	// (0x00021c32) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002ebf5) volume_small2_pane_g

0x800d,	// (0x00027000) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0002d3ca) fep_vkb_top_text_pane_t1_ParamLimits

0x82c4,	// (0x000272b7) popup_preview_fixed_window_g3_ParamLimits

0x82c4,	// (0x000272b7) popup_preview_fixed_window_g3

0xc9f1,	// (0x0002b9e4) popup_toolbar_trans_pane

0xdded,	// (0x0002cde0) aid_height_set_list_ParamLimits

0x6a1e,	// (0x00025a11) aid_size_parent_ParamLimits

0x5133,	// (0x00024126) list_highlight_pane_cp2_ParamLimits

0x4cb9,	// (0x00023cac) set_content_pane_g1_ParamLimits

0xbdd3,	// (0x0002adc6) list_single_image_pane_ParamLimits

0xbdd3,	// (0x0002adc6) list_single_image_pane

0xe52c,	// (0x0002d51f) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0002d51f) aid_size_cell_image

0xe539,	// (0x0002d52c) grid_single_image_pane_ParamLimits

0xe539,	// (0x0002d52c) grid_single_image_pane

0x5854,	// (0x00024847) list_single_image_pane_g1_ParamLimits

0x5854,	// (0x00024847) list_single_image_pane_g1

0x8795,	// (0x00027788) list_single_image_pane_g2_ParamLimits

0x8795,	// (0x00027788) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002ec0a) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002ec0a) list_single_image_pane_g

0x87a9,	// (0x0002779c) list_single_image_pane_t1_ParamLimits

0x87a9,	// (0x0002779c) list_single_image_pane_t1

0xe547,	// (0x0002d53a) cell_image_list_pane_ParamLimits

0xe547,	// (0x0002d53a) cell_image_list_pane

0xe55d,	// (0x0002d550) cell_image_list_pane_g1

0xe566,	// (0x0002d559) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002ec0f) cell_image_list_pane_g

0x87e5,	// (0x000277d8) aid_size_cell_tb_trans_pane

0x414d,	// (0x00023140) bg_tb_trans_pane

0x87f7,	// (0x000277ea) grid_tb_trans_pane

0x563d,	// (0x00024630) bg_tb_trans_pane_g1

0x5645,	// (0x00024638) bg_tb_trans_pane_g2

0x564d,	// (0x00024640) bg_tb_trans_pane_g3

0x5655,	// (0x00024648) bg_tb_trans_pane_g4

0x565d,	// (0x00024650) bg_tb_trans_pane_g5

0x5675,	// (0x00024668) bg_tb_trans_pane_g6

0x567d,	// (0x00024670) bg_tb_trans_pane_g7

0x5665,	// (0x00024658) bg_tb_trans_pane_g8

0x566d,	// (0x00024660) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002ec14) bg_tb_trans_pane_g

0x880b,	// (0x000277fe) cell_toolbar_trans_pane_ParamLimits

0x880b,	// (0x000277fe) cell_toolbar_trans_pane

0x7c47,	// (0x00026c3a) cell_toolbar_trans_pane_g1

0xe1c2,	// (0x0002d1b5) list_form2_midp_pane_t1

0xe1d0,	// (0x0002d1c3) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002eabd) list_form2_midp_pane_t

0x7838,	// (0x0002682b) scroll_pane_cp51_ParamLimits

0x79f4,	// (0x000269e7) form2_midp_wait_pane_g1

0x79fd,	// (0x000269f0) form2_midp_wait_pane_g2

0x7a06,	// (0x000269f9) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002ead2) form2_midp_wait_pane_g

0x38de,	// (0x000228d1) list_highlight_pane_cp21_ParamLimits

0x7a52,	// (0x00026a45) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7a61,	// (0x00026a54) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_2graphic_im_pane_ParamLimits

0x6bd6,	// (0x00025bc9) list_single_2graphic_im_pane

0xe56f,	// (0x0002d562) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0002d562) list_single_2graphic_im_pane_g1

0xe580,	// (0x0002d573) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0002d573) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0002d57f) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0002d57f) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002ec27) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002ec27) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0002d593) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0002d593) list_single_2graphic_im_pane_t1

0x82d0,	// (0x000272c3) list_single_graphic_2heading_pane_fp_ParamLimits

0x82d0,	// (0x000272c3) list_single_graphic_2heading_pane_fp

0x1101,	// (0x000200f4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1101,	// (0x000200f4) list_single_graphic_2heading_pane_fp_g1

0x82e5,	// (0x000272d8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x82e5,	// (0x000272d8) list_single_graphic_2heading_pane_fp_g2

0x10ca,	// (0x000200bd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x10ca,	// (0x000200bd) list_single_graphic_2heading_pane_fp_g3

0x10d6,	// (0x000200c9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x10d6,	// (0x000200c9) list_single_graphic_2heading_pane_fp_g4

0x82f1,	// (0x000272e4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x82f1,	// (0x000272e4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eb55) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eb55) list_single_graphic_2heading_pane_fp_g

0x12da,	// (0x000202cd) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x12da,	// (0x000202cd) list_single_graphic_2heading_pane_fp_t1

0x1139,	// (0x0002012c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1139,	// (0x0002012c) list_single_graphic_2heading_pane_fp_t2

0x12f0,	// (0x000202e3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x12f0,	// (0x000202e3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002ec30) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002ec30) list_single_graphic_2heading_pane_fp_t

0x7cd3,	// (0x00026cc6) fep_hwr_write_pane_g5_ParamLimits

0x7cd3,	// (0x00026cc6) fep_hwr_write_pane_g5

0x7cdf,	// (0x00026cd2) fep_hwr_write_pane_g6_ParamLimits

0x7cdf,	// (0x00026cd2) fep_hwr_write_pane_g6

0x8561,	// (0x00027554) eswt_shell_pane_ParamLimits

0x56b1,	// (0x000246a4) bg_popup_window_pane_cp18_ParamLimits

0x6966,	// (0x00025959) heading_pane_cp70

0x868b,	// (0x0002767e) popup_eswt_tasktip_window_t1_ParamLimits

0xd7d8,	// (0x0002c7cb) aid_touch_tab_arrow_left

0xd7ee,	// (0x0002c7e1) aid_touch_tab_arrow_right

0xd101,	// (0x0002c0f4) title_pane_g3_ParamLimits

0xd101,	// (0x0002c0f4) title_pane_g3

0x410c,	// (0x000230ff) set_value_pane_g1

0xc9f1,	// (0x0002b9e4) popup_toolbar_trans_pane_ParamLimits

0x87e5,	// (0x000277d8) aid_size_cell_tb_trans_pane_ParamLimits

0x414d,	// (0x00023140) bg_tb_trans_pane_ParamLimits

0x87f7,	// (0x000277ea) grid_tb_trans_pane_ParamLimits

0x3b67,	// (0x00022b5a) cont_note_pane_ParamLimits

0x3b67,	// (0x00022b5a) cont_note_pane

0x3ebe,	// (0x00022eb1) cont_snote2_single_text_pane_ParamLimits

0x3ebe,	// (0x00022eb1) cont_snote2_single_text_pane

0x3ebe,	// (0x00022eb1) cont_snote2_single_graphic_pane_ParamLimits

0x3ebe,	// (0x00022eb1) cont_snote2_single_graphic_pane

0x5cc4,	// (0x00024cb7) cont_note_wait_pane_ParamLimits

0x5cc4,	// (0x00024cb7) cont_note_wait_pane

0x5cc4,	// (0x00024cb7) cont_note_image_pane_ParamLimits

0x5cc4,	// (0x00024cb7) cont_note_image_pane

0x889f,	// (0x00027892) popup_note2_window_g1_ParamLimits

0x889f,	// (0x00027892) popup_note2_window_g1

0x88d0,	// (0x000278c3) popup_note2_window_t1_ParamLimits

0x88d0,	// (0x000278c3) popup_note2_window_t1

0x8915,	// (0x00027908) popup_note2_window_t2_ParamLimits

0x8915,	// (0x00027908) popup_note2_window_t2

0x895a,	// (0x0002794d) popup_note2_window_t3_ParamLimits

0x895a,	// (0x0002794d) popup_note2_window_t3

0x899f,	// (0x00027992) popup_note2_window_t4_ParamLimits

0x899f,	// (0x00027992) popup_note2_window_t4

0x3beb,	// (0x00022bde) popup_note2_window_t5_ParamLimits

0x3beb,	// (0x00022bde) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002ec3c) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002ec3c) popup_note2_window_t

0x89ce,	// (0x000279c1) popup_note2_image_window_g1_ParamLimits

0x89ce,	// (0x000279c1) popup_note2_image_window_g1

0x89da,	// (0x000279cd) popup_note2_image_window_g2_ParamLimits

0x89da,	// (0x000279cd) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002ec47) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002ec47) popup_note2_image_window_g

0x89ec,	// (0x000279df) popup_note2_image_window_t1_ParamLimits

0x89ec,	// (0x000279df) popup_note2_image_window_t1

0x8a04,	// (0x000279f7) popup_note2_image_window_t2_ParamLimits

0x8a04,	// (0x000279f7) popup_note2_image_window_t2

0x8a1c,	// (0x00027a0f) popup_note2_image_window_t3_ParamLimits

0x8a1c,	// (0x00027a0f) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002ec4c) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002ec4c) popup_note2_image_window_t

0x5cd2,	// (0x00024cc5) popup_note2_wait_window_g1_ParamLimits

0x5cd2,	// (0x00024cc5) popup_note2_wait_window_g1

0x8a38,	// (0x00027a2b) popup_note2_wait_window_g2_ParamLimits

0x8a38,	// (0x00027a2b) popup_note2_wait_window_g2

0x5cea,	// (0x00024cdd) popup_note2_wait_window_g3_ParamLimits

0x5cea,	// (0x00024cdd) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002ec53) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002ec53) popup_note2_wait_window_g

0x8a44,	// (0x00027a37) popup_note2_wait_window_t1_ParamLimits

0x8a44,	// (0x00027a37) popup_note2_wait_window_t1

0x8a62,	// (0x00027a55) popup_note2_wait_window_t2_ParamLimits

0x8a62,	// (0x00027a55) popup_note2_wait_window_t2

0x8a80,	// (0x00027a73) popup_note2_wait_window_t3_ParamLimits

0x8a80,	// (0x00027a73) popup_note2_wait_window_t3

0x8a92,	// (0x00027a85) popup_note2_wait_window_t4_ParamLimits

0x8a92,	// (0x00027a85) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002ec5a) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002ec5a) popup_note2_wait_window_t

0x8aa4,	// (0x00027a97) wait_bar2_pane_ParamLimits

0x8aa4,	// (0x00027a97) wait_bar2_pane

0x8abc,	// (0x00027aaf) popup_snote2_single_text_window_g1_ParamLimits

0x8abc,	// (0x00027aaf) popup_snote2_single_text_window_g1

0x8ae4,	// (0x00027ad7) popup_snote2_single_text_window_t1_ParamLimits

0x8ae4,	// (0x00027ad7) popup_snote2_single_text_window_t1

0x8b30,	// (0x00027b23) popup_snote2_single_text_window_t2_ParamLimits

0x8b30,	// (0x00027b23) popup_snote2_single_text_window_t2

0x8b7c,	// (0x00027b6f) popup_snote2_single_text_window_t3_ParamLimits

0x8b7c,	// (0x00027b6f) popup_snote2_single_text_window_t3

0x8bbd,	// (0x00027bb0) popup_snote2_single_text_window_t4_ParamLimits

0x8bbd,	// (0x00027bb0) popup_snote2_single_text_window_t4

0x8bf3,	// (0x00027be6) popup_snote2_single_text_window_t5_ParamLimits

0x8bf3,	// (0x00027be6) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002ec63) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002ec63) popup_snote2_single_text_window_t

0x8c1e,	// (0x00027c11) popup_snote2_single_graphic_window_g1_ParamLimits

0x8c1e,	// (0x00027c11) popup_snote2_single_graphic_window_g1

0x8c46,	// (0x00027c39) popup_snote2_single_graphic_window_g2_ParamLimits

0x8c46,	// (0x00027c39) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002ec6e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002ec6e) popup_snote2_single_graphic_window_g

0x8c6e,	// (0x00027c61) popup_snote2_single_graphic_window_t1_ParamLimits

0x8c6e,	// (0x00027c61) popup_snote2_single_graphic_window_t1

0x8cba,	// (0x00027cad) popup_snote2_single_graphic_window_t2_ParamLimits

0x8cba,	// (0x00027cad) popup_snote2_single_graphic_window_t2

0x8b7c,	// (0x00027b6f) popup_snote2_single_graphic_window_t3_ParamLimits

0x8b7c,	// (0x00027b6f) popup_snote2_single_graphic_window_t3

0x8bbd,	// (0x00027bb0) popup_snote2_single_graphic_window_t4_ParamLimits

0x8bbd,	// (0x00027bb0) popup_snote2_single_graphic_window_t4

0x8bf3,	// (0x00027be6) popup_snote2_single_graphic_window_t5_ParamLimits

0x8bf3,	// (0x00027be6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002ec73) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002ec73) popup_snote2_single_graphic_window_t

0x76f9,	// (0x000266ec) clock_nsta_pane_cp2_t1

0x76f9,	// (0x000266ec) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002ea93) clock_nsta_pane_cp2_t

0x087d,	// (0x0001f870) form_field_data_wide_pane_g1_ParamLimits

0x415b,	// (0x0002314e) form_field_data_wide_pane_g2_ParamLimits

0x415b,	// (0x0002314e) form_field_data_wide_pane_g2

0x4167,	// (0x0002315a) form_field_data_wide_pane_g3_ParamLimits

0x4167,	// (0x0002315a) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e66e) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e66e) form_field_data_wide_pane_g

0xe105,	// (0x0002d0f8) grid_touch_3_pane_ParamLimits

0xe105,	// (0x0002d0f8) grid_touch_3_pane

0xe5d1,	// (0x0002d5c4) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0002d5c4) cell_touch_3_pane

0x7c47,	// (0x00026c3a) cell_touch_3_pane_g1

0x7c47,	// (0x00026c3a) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002eb18) cell_touch_3_pane_g

0x3c1d,	// (0x00022c10) cont_query_data_pane

0x3c25,	// (0x00022c18) cont_query_data_pane_cp1

0x8d34,	// (0x00027d27) button_value_adjust_pane_cp7

0x8d3c,	// (0x00027d2f) query_popup_pane_cp3

0x48c1,	// (0x000238b4) bg_popup_sub_pane_cp22_ParamLimits

0x1b1d,	// (0x00020b10) navi_navi_volume_pane_cp2

0x1b38,	// (0x00020b2b) popup_side_volume_key_window_g2

0x1b47,	// (0x00020b3a) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e704) popup_side_volume_key_window_g

0x1b64,	// (0x00020b57) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e70b) popup_side_volume_key_window_t

0x4b78,	// (0x00023b6b) popup_side_volume_key_window_ParamLimits

0xb8da,	// (0x0002a8cd) list_double_graphic_pane_g4_ParamLimits

0xb8da,	// (0x0002a8cd) list_double_graphic_pane_g4

0xdf66,	// (0x0002cf59) list_single_2heading_msg_pane_ParamLimits

0xdf66,	// (0x0002cf59) list_single_2heading_msg_pane

0xbe5d,	// (0x0002ae50) list_single_2heading_msg_pane_g1_ParamLimits

0xbe5d,	// (0x0002ae50) list_single_2heading_msg_pane_g1

0xbe69,	// (0x0002ae5c) list_single_2heading_msg_pane_g2_ParamLimits

0xbe69,	// (0x0002ae5c) list_single_2heading_msg_pane_g2

0xbe7c,	// (0x0002ae6f) list_single_2heading_msg_pane_g3_ParamLimits

0xbe7c,	// (0x0002ae6f) list_single_2heading_msg_pane_g3

0xbe88,	// (0x0002ae7b) list_single_2heading_msg_pane_g4_ParamLimits

0xbe88,	// (0x0002ae7b) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002ec7e) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002ec7e) list_single_2heading_msg_pane_g

0xbea0,	// (0x0002ae93) list_single_2heading_msg_pane_t1_ParamLimits

0xbea0,	// (0x0002ae93) list_single_2heading_msg_pane_t1

0xbec8,	// (0x0002aebb) list_single_2heading_msg_pane_t2_ParamLimits

0xbec8,	// (0x0002aebb) list_single_2heading_msg_pane_t2

0xbf33,	// (0x0002af26) list_single_2heading_msg_pane_t3_ParamLimits

0xbf33,	// (0x0002af26) list_single_2heading_msg_pane_t3

0x13d5,	// (0x000203c8) list_single_2heading_msg_pane_t4_ParamLimits

0x13d5,	// (0x000203c8) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002ec87) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002ec87) list_single_2heading_msg_pane_t

0x3832,	// (0x00022825) title_pane_g4_ParamLimits

0x3832,	// (0x00022825) title_pane_g4

0x192c,	// (0x0002091f) title_pane_stacon_g3_ParamLimits

0x192c,	// (0x0002091f) title_pane_stacon_g3

0x8862,	// (0x00027855) list_single_2graphic_im_pane_g4_ParamLimits

0x8862,	// (0x00027855) list_single_2graphic_im_pane_g4

0x6723,	// (0x00025716) popup_side_volume_key_window_cp

0x6f3e,	// (0x00025f31) main_idle_act2_pane_t1

0x24a7,	// (0x0002149a) toolbar_button_pane_g10

0xd40c,	// (0x0002c3ff) popup_toolbar_window_cp1

0x76ea,	// (0x000266dd) clock_nsta_pane_cp_t1

0x76ea,	// (0x000266dd) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002ea8e) clock_nsta_pane_cp_t

0x1b1d,	// (0x00020b10) navi_navi_volume_pane_cp2_ParamLimits

0x1b2c,	// (0x00020b1f) popup_side_volume_key_window_g1_ParamLimits

0x1b38,	// (0x00020b2b) popup_side_volume_key_window_g2_ParamLimits

0x1b47,	// (0x00020b3a) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e704) popup_side_volume_key_window_g_ParamLimits

0x28ed,	// (0x000218e0) fep_hwr_aid_pane

0xd9f5,	// (0x0002c9e8) bg_fep_hwr_top_pane_g4_ParamLimits

0x7ca3,	// (0x00026c96) fep_hwr_top_pane_g1_ParamLimits

0x7cb5,	// (0x00026ca8) fep_hwr_top_pane_g2_ParamLimits

0x29a6,	// (0x00021999) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002eae3) fep_hwr_top_pane_g_ParamLimits

0x29bb,	// (0x000219ae) fep_hwr_top_text_pane_ParamLimits

0x64e6,	// (0x000254d9) aid_touch_tab_arrow_arrow_2

0x64ef,	// (0x000254e2) aid_touch_tab_arrow_left_2

0x2901,	// (0x000218f4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2938,	// (0x0002192b) fep_hwr_prediction_pane

0x7e15,	// (0x00026e08) fep_vkb_prediction_pane

0xe3b7,	// (0x0002d3aa) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0002d3aa) fep_vkb_side_pane_g3

0x7ec5,	// (0x00026eb8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8345,	// (0x00027338) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8352,	// (0x00027345) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002eb8d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8d61,	// (0x00027d54) fep_hwr_prediction_pane_g1

0x2c48,	// (0x00021c3b) fep_hwr_prediction_pane_g2

0x2c50,	// (0x00021c43) fep_hwr_prediction_pane_g3

0x2c58,	// (0x00021c4b) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002ec90) fep_hwr_prediction_pane_g

0x8d61,	// (0x00027d54) fep_vkb_prediction_pane_g1

0x8d6b,	// (0x00027d5e) fep_vkb_prediction_pane_g2

0x8d73,	// (0x00027d66) fep_vkb_prediction_pane_g3

0x8d7b,	// (0x00027d6e) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002ec99) fep_vkb_prediction_pane_g

0x276d,	// (0x00021760) slider_set_pane_g3

0x2781,	// (0x00021774) slider_set_pane_g4

0x2799,	// (0x0002178c) slider_set_pane_g5

0x276d,	// (0x00021760) slider_set_pane_g6

0x27af,	// (0x000217a2) slider_set_pane_g7

0x6b83,	// (0x00025b76) slider_form_pane_g3

0x6b8c,	// (0x00025b7f) slider_form_pane_g4

0x6b94,	// (0x00025b87) slider_form_pane_g5

0x6b83,	// (0x00025b76) slider_form_pane_g6

0xdf38,	// (0x0002cf2b) slider_form_pane_g7

0x71e8,	// (0x000261db) slider_set_pane_vc_g3

0x71f1,	// (0x000261e4) slider_set_pane_vc_g4

0x71fa,	// (0x000261ed) slider_set_pane_vc_g5

0x71e8,	// (0x000261db) slider_set_pane_vc_g6

0x7203,	// (0x000261f6) slider_set_pane_vc_g7

0x73cf,	// (0x000263c2) slider_form_pane_vc_g1

0x73d8,	// (0x000263cb) slider_form_pane_vc_g2

0x73e1,	// (0x000263d4) slider_form_pane_vc_g3

0x73cf,	// (0x000263c2) slider_form_pane_vc_g4

0x73ea,	// (0x000263dd) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002ea60) slider_form_pane_vc_g

0x37ea,	// (0x000227dd) main_idle_act3_pane

0x8d83,	// (0x00027d76) ai3_links_pane

0xe619,	// (0x0002d60c) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0002d60c) popup_ai3_data_window

0x37ea,	// (0x000227dd) grid_ai3_links_pane

0xe633,	// (0x0002d626) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0002d626) cell_ai3_links_pane

0x8dbe,	// (0x00027db1) bg_popup_sub_pane_cp11

0x8dcb,	// (0x00027dbe) cell_ai3_links_pane_g1

0x37ea,	// (0x000227dd) bg_popup_sub_pane_cp12

0x8df0,	// (0x00027de3) heading_ai3_data_pane

0x8df8,	// (0x00027deb) list_ai3_gene_pane

0x8e04,	// (0x00027df7) popup_ai3_data_window_g1

0x8e0c,	// (0x00027dff) heading_ai3_data_pane_g1

0x8e14,	// (0x00027e07) heading_ai3_data_pane_t1

0x8e22,	// (0x00027e15) list_double_ai3_gene_pane_ParamLimits

0x8e22,	// (0x00027e15) list_double_ai3_gene_pane

0x8e2f,	// (0x00027e22) list_single_ai3_gene_pane_ParamLimits

0x8e2f,	// (0x00027e22) list_single_ai3_gene_pane

0x7c0c,	// (0x00026bff) list_highlight_pane_cp7_ParamLimits

0x7c0c,	// (0x00026bff) list_highlight_pane_cp7

0x8e3c,	// (0x00027e2f) list_single_a13_gene_pane_t1_ParamLimits

0x8e3c,	// (0x00027e2f) list_single_a13_gene_pane_t1

0x8e53,	// (0x00027e46) list_single_ai3_gene_pane_g1

0x8e5c,	// (0x00027e4f) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002eca2) list_single_ai3_gene_pane_g

0x8e64,	// (0x00027e57) list_double_ai3_gene_pane_g1_ParamLimits

0x8e64,	// (0x00027e57) list_double_ai3_gene_pane_g1

0x8e70,	// (0x00027e63) list_double_ai3_gene_pane_t1_ParamLimits

0x8e70,	// (0x00027e63) list_double_ai3_gene_pane_t1

0x8e8c,	// (0x00027e7f) list_double_ai3_gene_pane_t2_ParamLimits

0x8e8c,	// (0x00027e7f) list_double_ai3_gene_pane_t2

0x8ea2,	// (0x00027e95) list_double_ai3_gene_pane_t3_ParamLimits

0x8ea2,	// (0x00027e95) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002eca7) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002eca7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1306,	// (0x000202f9) aid_size_min_col_2

0xe603,	// (0x0002d5f6) aid_size_min_msg_ParamLimits

0xe603,	// (0x0002d5f6) aid_size_min_msg

0xe3cb,	// (0x0002d3be) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0002d3be) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002eb13) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002eb13) fep_vkb_top_text_pane_g

0x37ea,	// (0x000227dd) main_hc_apps_shell_pane

0x8ebf,	// (0x00027eb2) grid_hc_apps_pane_ParamLimits

0x8ebf,	// (0x00027eb2) grid_hc_apps_pane

0x8ece,	// (0x00027ec1) list_hc_apps_pane

0x8ed6,	// (0x00027ec9) scroll_pane_cp37_ParamLimits

0x8ed6,	// (0x00027ec9) scroll_pane_cp37

0xe64d,	// (0x0002d640) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0002d640) cell_hc_apps_pane

0xe70b,	// (0x0002d6fe) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0002d6fe) cell_hc_apps_pane_g1

0x8fc1,	// (0x00027fb4) cell_hc_apps_pane_g2_ParamLimits

0x8fc1,	// (0x00027fb4) cell_hc_apps_pane_g2

0x8fdd,	// (0x00027fd0) cell_hc_apps_pane_g3_ParamLimits

0x8fdd,	// (0x00027fd0) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002ecae) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002ecae) cell_hc_apps_pane_g

0xe738,	// (0x0002d72b) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0002d72b) cell_hc_apps_pane_t1

0x3b67,	// (0x00022b5a) grid_highlight_pane_cp10_ParamLimits

0x3b67,	// (0x00022b5a) grid_highlight_pane_cp10

0xe776,	// (0x0002d769) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0002d769) list_single_hc_apps_pane

0xe7a3,	// (0x0002d796) list_single_hc_apps_pane_g1

0xbfa1,	// (0x0002af94) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002ecb5) list_single_hc_apps_pane_g

0xbfba,	// (0x0002afad) list_single_hc_apps_pane_g2_copy1

0xbfd6,	// (0x0002afc9) list_single_hc_apps_pane_t1

0x38de,	// (0x000228d1) bg_set_opt_pane_cp_ParamLimits

0x1854,	// (0x00020847) setting_slider_pane_t1_ParamLimits

0x186d,	// (0x00020860) setting_slider_pane_t2_ParamLimits

0x1887,	// (0x0002087a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e551) setting_slider_pane_t_ParamLimits

0x189f,	// (0x00020892) slider_set_pane_ParamLimits

0x1dc6,	// (0x00020db9) control_pane_g5_ParamLimits

0x1dc6,	// (0x00020db9) control_pane_g5

0x69d2,	// (0x000259c5) slider_set_pane_g1_ParamLimits

0x2761,	// (0x00021754) slider_set_pane_g2_ParamLimits

0x276d,	// (0x00021760) slider_set_pane_g3_ParamLimits

0x2781,	// (0x00021774) slider_set_pane_g4_ParamLimits

0x2799,	// (0x0002178c) slider_set_pane_g5_ParamLimits

0x276d,	// (0x00021760) slider_set_pane_g6_ParamLimits

0x27af,	// (0x000217a2) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002e94b) slider_set_pane_g_ParamLimits

0x4c64,	// (0x00023c57) navi_icon_text_pane_ParamLimits

0xd7a1,	// (0x0002c794) aid_fill_nsta_2_ParamLimits

0xd7d8,	// (0x0002c7cb) aid_touch_tab_arrow_left_ParamLimits

0xd7ee,	// (0x0002c7e1) aid_touch_tab_arrow_right_ParamLimits

0xd889,	// (0x0002c87c) clock_nsta_pane_ParamLimits

0x64c8,	// (0x000254bb) navi_icon_pane_g1_ParamLimits

0x64d4,	// (0x000254c7) navi_text_pane_t1_ParamLimits

0x77f6,	// (0x000267e9) navi_icon_text_pane_g1_ParamLimits

0x7802,	// (0x000267f5) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0002d796) list_single_hc_apps_pane_g1_ParamLimits

0xbfa1,	// (0x0002af94) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002ecb5) list_single_hc_apps_pane_g_ParamLimits

0xbfba,	// (0x0002afad) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbfd6,	// (0x0002afc9) list_single_hc_apps_pane_t1_ParamLimits

0xc13a,	// (0x0002b12d) popup_toolbar2_fixed_window_ParamLimits

0xc13a,	// (0x0002b12d) popup_toolbar2_fixed_window

0xc9e7,	// (0x0002b9da) popup_toolbar2_float_window

0x37ea,	// (0x000227dd) bg_popup_sub_pane_cp27

0x90b4,	// (0x000280a7) grid_toolbar2_float_pane

0x37ea,	// (0x000227dd) bg_popup_sub_pane_cp26

0x90b4,	// (0x000280a7) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0002d7af) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0002d7af) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0002d7c9) cell_toolbar2_fixed_pane_g1

0x90d5,	// (0x000280c8) toolbar2_fixed_button_pane

0x563d,	// (0x00024630) toolbar2_fixed_button_pane_g1

0x5645,	// (0x00024638) toolbar2_fixed_button_pane_g2

0x564d,	// (0x00024640) toolbar2_fixed_button_pane_g3

0x5655,	// (0x00024648) toolbar2_fixed_button_pane_g4

0x565d,	// (0x00024650) toolbar2_fixed_button_pane_g5

0x5665,	// (0x00024658) toolbar2_fixed_button_pane_g6

0x566d,	// (0x00024660) toolbar2_fixed_button_pane_g7

0x5675,	// (0x00024668) toolbar2_fixed_button_pane_g8

0x567d,	// (0x00024670) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002e84d) toolbar2_fixed_button_pane_g

0x90dd,	// (0x000280d0) cell_toolbar2_float_pane_ParamLimits

0x90dd,	// (0x000280d0) cell_toolbar2_float_pane

0x90ee,	// (0x000280e1) cell_toolbar2_float_pane_g1

0x90d5,	// (0x000280c8) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0002d298) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0002d298) fep_vkb_accented_list_pane

0x2b09,	// (0x00021afc) bg_popup_fep_shadow_pane_g9

0x4de4,	// (0x00023dd7) bg_popup_fep_shadow_pane_cp3

0x42a1,	// (0x00023294) list_accented_list_pane

0x90f7,	// (0x000280ea) list_single_accented_list_pane_ParamLimits

0x90f7,	// (0x000280ea) list_single_accented_list_pane

0x4de4,	// (0x00023dd7) list_highlight_pane_cp10

0x9108,	// (0x000280fb) list_single_accented_list_pane_t1

0xc911,	// (0x0002b904) popup_slider_window_ParamLimits

0xc911,	// (0x0002b904) popup_slider_window

0x8d44,	// (0x00027d37) aid_indentation_list_msg

0xe8cf,	// (0x0002d8c2) bg_popup_window_pane_cp19

0x922c,	// (0x0002821f) popup_slider_window_g1

0x9248,	// (0x0002823b) popup_slider_window_g2

0x9264,	// (0x00028257) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002ecba) popup_slider_window_g

0x92c0,	// (0x000282b3) popup_slider_window_t1

0x9334,	// (0x00028327) small_volume_slider_vertical_pane

0x7c47,	// (0x00026c3a) small_volume_slider_vertical_pane_g1

0x7c47,	// (0x00026c3a) small_volume_slider_vertical_pane_g2

0x9350,	// (0x00028343) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002eccc) small_volume_slider_vertical_pane_g

0xc0a8,	// (0x0002b09b) area_side_right_pane_ParamLimits

0xc0a8,	// (0x0002b09b) area_side_right_pane

0xcb1d,	// (0x0002bb10) aid_size_side_button_ParamLimits

0xcb1d,	// (0x0002bb10) aid_size_side_button

0xcb36,	// (0x0002bb29) grid_sctrl_middle_pane_ParamLimits

0xcb36,	// (0x0002bb29) grid_sctrl_middle_pane

0x2c93,	// (0x00021c86) sctrl_sk_bottom_pane

0x2ca4,	// (0x00021c97) sctrl_sk_top_pane

0x2cb6,	// (0x00021ca9) aid_touch_sctrl_top

0x3b67,	// (0x00022b5a) bg_sctrl_sk_pane_ParamLimits

0x3b67,	// (0x00022b5a) bg_sctrl_sk_pane

0x2cc3,	// (0x00021cb6) sctrl_sk_top_pane_g1

0x2cd0,	// (0x00021cc3) sctrl_sk_top_pane_t1

0x2cb6,	// (0x00021ca9) aid_touch_sctrl_bottom

0x3b67,	// (0x00022b5a) bg_sctrl_sk_pane_cp_ParamLimits

0x3b67,	// (0x00022b5a) bg_sctrl_sk_pane_cp

0x2ceb,	// (0x00021cde) sctrl_sk_bottom_pane_g1

0x2cd0,	// (0x00021cc3) sctrl_sk_bottom_pane_t1

0xcb50,	// (0x0002bb43) cell_sctrl_middle_pane_ParamLimits

0xcb50,	// (0x0002bb43) cell_sctrl_middle_pane

0xcb61,	// (0x0002bb54) aid_touch_sctrl_middle_ParamLimits

0xcb61,	// (0x0002bb54) aid_touch_sctrl_middle

0xcb6e,	// (0x0002bb61) bg_sctrl_middle_pane_ParamLimits

0xcb6e,	// (0x0002bb61) bg_sctrl_middle_pane

0x93d8,	// (0x000283cb) cell_sctrl_middle_pane_g1_ParamLimits

0x93d8,	// (0x000283cb) cell_sctrl_middle_pane_g1

0xcb7c,	// (0x0002bb6f) cell_sctrl_middle_pane_g2_ParamLimits

0xcb7c,	// (0x0002bb6f) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002ecd8) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002ecd8) cell_sctrl_middle_pane_g

0x563d,	// (0x00024630) bg_sctrl_middle_pane_g1

0x5645,	// (0x00024638) bg_sctrl_middle_pane_g2

0x564d,	// (0x00024640) bg_sctrl_middle_pane_g3

0x5655,	// (0x00024648) bg_sctrl_middle_pane_g4

0x565d,	// (0x00024650) bg_sctrl_middle_pane_g5

0x5665,	// (0x00024658) bg_sctrl_middle_pane_g6

0x566d,	// (0x00024660) bg_sctrl_middle_pane_g7

0x5675,	// (0x00024668) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002ecdd) bg_sctrl_middle_pane_g

0x567d,	// (0x00024670) bg_sctrl_middle_pane_g8_copy1

0x563d,	// (0x00024630) bg_sctrl_sk_pane_g1

0x5645,	// (0x00024638) bg_sctrl_sk_pane_g2

0x564d,	// (0x00024640) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002e84d) bg_sctrl_sk_pane_g

0x407c,	// (0x0002306f) aid_size_touch_scroll_bar

0x5655,	// (0x00024648) bg_sctrl_sk_pane_g4

0x565d,	// (0x00024650) bg_sctrl_sk_pane_g5

0x5665,	// (0x00024658) bg_sctrl_sk_pane_g6

0x566d,	// (0x00024660) bg_sctrl_sk_pane_g7

0x5675,	// (0x00024668) bg_sctrl_sk_pane_g8

0x567d,	// (0x00024670) bg_sctrl_sk_pane_g9

0x1f64,	// (0x00020f57) popup_fep_china_hwr2_fs_candidate_window

0xc42b,	// (0x0002b41e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc42b,	// (0x0002b41e) popup_fep_china_hwr2_fs_control_window

0x7ec5,	// (0x00026eb8) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002ecd3) sctrl_sk_top_pane_g

0xe987,	// (0x0002d97a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0002d97a) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0002d98e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0002d98e) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0002d9a5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0002d9a5) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0002d9b7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0002d9b7) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0002d9cb) popup_fep_china_hwr2_fs_control_funtion_grid

0x93ac,	// (0x0002839f) aid_fep_china_hwr2_fs_candi_cell

0x37ea,	// (0x000227dd) bg_popup_fep_shadow_pane_cp6

0x93b6,	// (0x000283a9) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0002d9d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0002d9d3) cell_fep_china_hwr2_fs_funtion_grid

0x7c47,	// (0x00026c3a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x93d8,	// (0x000283cb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x93d8,	// (0x000283cb) cell_fep_china_hwr2_fs_funtion_grid_g1

0x93e6,	// (0x000283d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x93e6,	// (0x000283d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002ecee) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002ecee) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0002d9eb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0002d9eb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0002da00) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0002da00) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x00f7,	// (0x0001f0ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x00f7,	// (0x0001f0ea) cell_fep_china_hwr2_fs_funtion_grid_t

0x942d,	// (0x00028420) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9435,	// (0x00028428) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x943d,	// (0x00028430) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002ecf3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9445,	// (0x00028438) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9445,	// (0x00028438) cell_fep_china_hwr2_fs_candidate_grid

0x945e,	// (0x00028451) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9466,	// (0x00028459) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7c47,	// (0x00026c3a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7c47,	// (0x00026c3a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002eb18) cell_fep_china_hwr2_fs_candidate_grid_g

0x946e,	// (0x00028461) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5233,	// (0x00024226) clock_nsta_pane_cp_24_ParamLimits

0x5233,	// (0x00024226) clock_nsta_pane_cp_24

0x52b1,	// (0x000242a4) indicator_nsta_pane_cp_24_ParamLimits

0x52b1,	// (0x000242a4) indicator_nsta_pane_cp_24

0x6344,	// (0x00025337) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002e8b2) heading_pane_g

0x6d87,	// (0x00025d7a) grid_sct_catagory_button_pane

0x6db7,	// (0x00025daa) scroll_pane_cp5_ParamLimits

0x7844,	// (0x00026837) button_value_adjust_pane_cp5_ParamLimits

0x7844,	// (0x00026837) button_value_adjust_pane_cp5

0x7923,	// (0x00026916) form2_midp_time_pane_ParamLimits

0x947c,	// (0x0002846f) cell_sct_catagory_button_pane_ParamLimits

0x947c,	// (0x0002846f) cell_sct_catagory_button_pane

0x7c0c,	// (0x00026bff) bg_button_pane_cp01_ParamLimits

0x7c0c,	// (0x00026bff) bg_button_pane_cp01

0x7c47,	// (0x00026c3a) cell_sct_catagory_button_pane_g1

0xc98a,	// (0x0002b97d) popup_tb_extension_window

0xea29,	// (0x0002da1c) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0002da1c) aid_size_cell_ext

0x3ebe,	// (0x00022eb1) bg_tb_trans_pane_cp1_ParamLimits

0x3ebe,	// (0x00022eb1) bg_tb_trans_pane_cp1

0xea4f,	// (0x0002da42) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0002da42) grid_tb_ext_pane

0xea8a,	// (0x0002da7d) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0002da7d) cell_tb_ext_pane

0xeab2,	// (0x0002daa5) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0002daa5) cell_tb_ext_pane_g1

0x9510,	// (0x00028503) cell_tb_ext_pane_t1

0x3b67,	// (0x00022b5a) list_highlight_pane_cp11_ParamLimits

0x3b67,	// (0x00022b5a) list_highlight_pane_cp11

0xc14f,	// (0x0002b142) popup_uni_indicator_window_ParamLimits

0xc14f,	// (0x0002b142) popup_uni_indicator_window

0x414d,	// (0x00023140) bg_popup_sub_pane_cp14

0x952b,	// (0x0002851e) list_uniindi_pane

0x9537,	// (0x0002852a) uniindi_top_pane

0x3b67,	// (0x00022b5a) bg_uniindi_top_pane

0x9556,	// (0x00028549) uniindi_top_pane_g1

0x956c,	// (0x0002855f) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002ecfa) uniindi_top_pane_g

0x9596,	// (0x00028589) uniindi_top_pane_t1

0x95c0,	// (0x000285b3) list_single_uniindi_pane_ParamLimits

0x95c0,	// (0x000285b3) list_single_uniindi_pane

0x7c47,	// (0x00026c3a) bg_uniindi_top_pane_g1

0x95d3,	// (0x000285c6) list_single_uniindi_pane_g1

0x95e6,	// (0x000285d9) list_single_uniindi_pane_t1

0x37ea,	// (0x000227dd) control_bg_pane

0x960b,	// (0x000285fe) bg_sctrl_sk_pane_cp1

0x9614,	// (0x00028607) bg_sctrl_sk_pane_cp2

0x961d,	// (0x00028610) control_bg_pane_g1

0x9626,	// (0x00028619) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002ed03) control_bg_pane_g

0x769f,	// (0x00026692) cell_indicator_nsta_pane_g1_ParamLimits

0xe132,	// (0x0002d125) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002ea7c) cell_indicator_nsta_pane_g_ParamLimits

0x10b7,	// (0x000200aa) form2_midp_time_pane_t1_ParamLimits

0x28df,	// (0x000218d2) main_idle_act4_pane_ParamLimits

0x28df,	// (0x000218d2) main_idle_act4_pane

0xc98a,	// (0x0002b97d) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0002da64) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0002da64) tb_ext_find_pane

0x962f,	// (0x00028622) ai_gene_pane_1_cp1

0x4f2b,	// (0x00023f1e) ai_gene_pane_2_cp1

0x9637,	// (0x0002862a) list_single_idle_plugin_calendar_pane

0x9640,	// (0x00028633) list_single_idle_plugin_notification_pane

0x9649,	// (0x0002863c) list_single_idle_plugin_player_pane

0xeacf,	// (0x0002dac2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0002dac2) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0002daea) main_idle_act4_pane_t1

0xeb0d,	// (0x0002db00) main_idle_act4_pane_t2

0x0001,

0x0111,	// (0x0001f104) main_idle_act4_pane_t

0xeb23,	// (0x0002db16) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0002db16) middle_sk_idle_act4_pane

0xeb3f,	// (0x0002db32) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0002db5a) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0002db5a) shortcut_wheel_idle_act4_pane

0x7c47,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g1

0x7c47,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g2

0x7c47,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g3

0x7c47,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g4

0x7c47,	// (0x00026c3a) shortcut_wheel_idle_act4_pane_g5

0x96dc,	// (0x000286cf) shortcut_wheel_idle_act4_pane_g6

0x96e4,	// (0x000286d7) shortcut_wheel_idle_act4_pane_g7

0x96ec,	// (0x000286df) shortcut_wheel_idle_act4_pane_g8

0x96f4,	// (0x000286e7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd15,	// (0x0002ed08) shortcut_wheel_idle_act4_pane_g

0xd9f5,	// (0x0002c9e8) middle_sk_idle_act4_pane_g1_ParamLimits

0xd9f5,	// (0x0002c9e8) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0002dbd7) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0002dbd7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd33,	// (0x0002ed26) middle_sk_idle_act4_pane_g_ParamLimits

0xfd33,	// (0x0002ed26) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0002dbef) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0002dbef) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0002dc1e) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0002dc1e) grid_ai_shortcut_pane

0xec48,	// (0x0002dc3b) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0002dc3b) list_highlight_pane_cp16

0xec55,	// (0x0002dc48) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0002dc48) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0002dc54) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0002dc54) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0002dc70) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0002dc70) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x013e,	// (0x0001f131) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x013e,	// (0x0001f131) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0002dc85) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0002dc85) cell_ai_shortcut_pane

0xeca8,	// (0x0002dc9b) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0002dc9b) cell_ai_shortcut_pane_g1

0x962f,	// (0x00028622) ai_gene_pane_1_cp2

0x9824,	// (0x00028817) ai_gene_pane_2_cp2

0x982c,	// (0x0002881f) list_highlight_pane_cp15

0x9835,	// (0x00028828) list_single_idle_plugin_calendar_pane_g1

0x982c,	// (0x0002881f) list_highlight_pane_cp17

0x983d,	// (0x00028830) list_single_idle_plugin_calendar_pane_g1_copy1

0x9845,	// (0x00028838) list_single_idle_plugin_player_pane_g1

0x6fe0,	// (0x00025fd3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd38,	// (0x0002ed2b) list_single_idle_plugin_player_pane_g

0x984d,	// (0x00028840) list_single_idle_plugin_player_pane_t1

0x985b,	// (0x0002884e) list_single_idle_plugin_player_pane_t2

0x9869,	// (0x0002885c) list_single_idle_plugin_player_pane_t3

0x9877,	// (0x0002886a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3d,	// (0x0002ed30) list_single_idle_plugin_player_pane_t

0x9885,	// (0x00028878) wait_bar_pane_cp15

0x988d,	// (0x00028880) grid_ai_notification_pane

0x6fe0,	// (0x00025fd3) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0002dcbd) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0002dcbd) cell_ai_notification_pane

0x98a3,	// (0x00028896) cell_ai_notification_pane_g1

0x98ab,	// (0x0002889e) cell_ai_notification_pane_t1

0xecd7,	// (0x0002dcca) tb_ext_find_button_pane

0xecdf,	// (0x0002dcd2) tb_ext_find_pane_g1

0xece7,	// (0x0002dcda) tb_ext_find_pane_t1

0x47d1,	// (0x000237c4) tb_ext_find_button_pane_g1

0x98d7,	// (0x000288ca) tb_ext_find_button_pane_g2

0x0001,

0xfd46,	// (0x0002ed39) tb_ext_find_button_pane_g

0xeaf7,	// (0x0002daea) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0002db00) main_idle_act4_pane_t2_ParamLimits

0x0111,	// (0x0001f104) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0002db32) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0002db4a) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0002db4a) sat_plugin_idle_act4_pane

0xecf5,	// (0x0002dce8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0002dce8) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0002dd00) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0002dd00) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0002dd18) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0002dd18) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0002dd30) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0002dd30) sat_plugin_idle_act4_pane_t4

0x0003,

0x0158,	// (0x0001f14b) sat_plugin_idle_act4_pane_t_ParamLimits

0x0158,	// (0x0001f14b) sat_plugin_idle_act4_pane_t

0x16b8,	// (0x000206ab) popup_battery_window_ParamLimits

0x16b8,	// (0x000206ab) popup_battery_window

0x3b67,	// (0x00022b5a) bg_popup_sub_pane_cp25_ParamLimits

0x3b67,	// (0x00022b5a) bg_popup_sub_pane_cp25

0x992c,	// (0x0002891f) popup_battery_window_g1_ParamLimits

0x992c,	// (0x0002891f) popup_battery_window_g1

0x9938,	// (0x0002892b) popup_battery_window_t1_ParamLimits

0x9938,	// (0x0002892b) popup_battery_window_t1

0x994a,	// (0x0002893d) popup_battery_window_t2_ParamLimits

0x994a,	// (0x0002893d) popup_battery_window_t2

0x0001,

0xfd4b,	// (0x0002ed3e) popup_battery_window_t_ParamLimits

0xfd4b,	// (0x0002ed3e) popup_battery_window_t

0xd604,	// (0x0002c5f7) midp_canvas_pane_ParamLimits

0xd661,	// (0x0002c654) midp_keypad_pane_ParamLimits

0xd661,	// (0x0002c654) midp_keypad_pane

0x5133,	// (0x00024126) main_midp_pane_ParamLimits

0x7708,	// (0x000266fb) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0002dd48) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0002dd48) aid_size_cell_midp_keypad

0xed73,	// (0x0002dd66) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0002dd66) midp_keyp_game_grid_pane

0xed9a,	// (0x0002dd8d) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0002dd8d) midp_keyp_rocker_pane

0xedeb,	// (0x0002ddde) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0002ddde) midp_keyp_sk_left_pane

0xee3f,	// (0x0002de32) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0002de32) midp_keyp_sk_right_pane

0x37ea,	// (0x000227dd) bg_button_pane_cp03

0xee93,	// (0x0002de86) midp_keyp_sk_left_pane_g1

0x37ea,	// (0x000227dd) bg_button_pane_cp04

0xee93,	// (0x0002de86) midp_keyp_sk_right_pane_g1

0x7c47,	// (0x00026c3a) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0002de8f) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0002de8f) keyp_game_cell_pane

0x37ea,	// (0x000227dd) bg_button_pane_cp02

0xeec0,	// (0x0002deb3) keyp_game_cell_pane_g1

0xc0ea,	// (0x0002b0dd) popup_fep_vkb2_window_ParamLimits

0xc0ea,	// (0x0002b0dd) popup_fep_vkb2_window

0xcb88,	// (0x0002bb7b) aid_size_cell_vkb2_ParamLimits

0xcb88,	// (0x0002bb7b) aid_size_cell_vkb2

0xcbbe,	// (0x0002bbb1) popup_fep_vkb2_window_g1_ParamLimits

0xcbbe,	// (0x0002bbb1) popup_fep_vkb2_window_g1

0xcc0e,	// (0x0002bc01) vkb2_area_bottom_pane_ParamLimits

0xcc0e,	// (0x0002bc01) vkb2_area_bottom_pane

0xcc62,	// (0x0002bc55) vkb2_area_keypad_pane_ParamLimits

0xcc62,	// (0x0002bc55) vkb2_area_keypad_pane

0xccaa,	// (0x0002bc9d) vkb2_area_top_pane_ParamLimits

0xccaa,	// (0x0002bc9d) vkb2_area_top_pane

0xcd30,	// (0x0002bd23) vkb2_top_entry_pane_ParamLimits

0xcd30,	// (0x0002bd23) vkb2_top_entry_pane

0xcd5d,	// (0x0002bd50) vkb2_top_grid_left_pane_ParamLimits

0xcd5d,	// (0x0002bd50) vkb2_top_grid_left_pane

0xcd7d,	// (0x0002bd70) vkb2_top_grid_right_pane_ParamLimits

0xcd7d,	// (0x0002bd70) vkb2_top_grid_right_pane

0x2f49,	// (0x00021f3c) vkb2_cell_keypad_pane_ParamLimits

0x2f49,	// (0x00021f3c) vkb2_cell_keypad_pane

0xcdc3,	// (0x0002bdb6) vkb2_area_bottom_grid_pane_ParamLimits

0xcdc3,	// (0x0002bdb6) vkb2_area_bottom_grid_pane

0xcded,	// (0x0002bde0) vkb2_area_bottom_pane_g1_ParamLimits

0xcded,	// (0x0002bde0) vkb2_area_bottom_pane_g1

0xce13,	// (0x0002be06) vkb2_area_bottom_pane_g2_ParamLimits

0xce13,	// (0x0002be06) vkb2_area_bottom_pane_g2

0xce44,	// (0x0002be37) vkb2_area_bottom_pane_g3_ParamLimits

0xce44,	// (0x0002be37) vkb2_area_bottom_pane_g3

0x0002,

0xfd50,	// (0x0002ed43) vkb2_area_bottom_pane_g_ParamLimits

0xfd50,	// (0x0002ed43) vkb2_area_bottom_pane_g

0x30f3,	// (0x000220e6) vkb2_top_cell_left_pane_ParamLimits

0x30f3,	// (0x000220e6) vkb2_top_cell_left_pane

0xeec9,	// (0x0002debc) vkb2_top_entry_pane_g1_ParamLimits

0xeec9,	// (0x0002debc) vkb2_top_entry_pane_g1

0xeed7,	// (0x0002deca) vkb2_top_entry_pane_t1_ParamLimits

0xeed7,	// (0x0002deca) vkb2_top_entry_pane_t1

0x9afb,	// (0x00028aee) vkb2_top_entry_pane_t2_ParamLimits

0x9afb,	// (0x00028aee) vkb2_top_entry_pane_t2

0x9b2d,	// (0x00028b20) vkb2_top_entry_pane_t3_ParamLimits

0x9b2d,	// (0x00028b20) vkb2_top_entry_pane_t3

0x0002,

0xfd57,	// (0x0002ed4a) vkb2_top_entry_pane_t_ParamLimits

0xfd57,	// (0x0002ed4a) vkb2_top_entry_pane_t

0xceae,	// (0x0002bea1) vkb2_top_grid_right_pane_g1_ParamLimits

0xceae,	// (0x0002bea1) vkb2_top_grid_right_pane_g1

0x3156,	// (0x00022149) vkb2_top_grid_right_pane_g2_ParamLimits

0x3156,	// (0x00022149) vkb2_top_grid_right_pane_g2

0x316e,	// (0x00022161) vkb2_top_grid_right_pane_g3_ParamLimits

0x316e,	// (0x00022161) vkb2_top_grid_right_pane_g3

0xcec4,	// (0x0002beb7) vkb2_top_grid_right_pane_g4_ParamLimits

0xcec4,	// (0x0002beb7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5e,	// (0x0002ed51) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5e,	// (0x0002ed51) vkb2_top_grid_right_pane_g

0x319c,	// (0x0002218f) vkb2_top_cell_left_pane_g1

0x31b3,	// (0x000221a6) vkb2_cell_keypad_pane_g1_ParamLimits

0x31b3,	// (0x000221a6) vkb2_cell_keypad_pane_g1

0x9b51,	// (0x00028b44) vkb2_cell_keypad_pane_t1_ParamLimits

0x9b51,	// (0x00028b44) vkb2_cell_keypad_pane_t1

0x31c1,	// (0x000221b4) vkb2_cell_bottom_grid_pane_ParamLimits

0x31c1,	// (0x000221b4) vkb2_cell_bottom_grid_pane

0x31fa,	// (0x000221ed) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0002db7b) aid_call2_pane_cp02

0xeb90,	// (0x0002db83) aid_call_pane_cp02

0xeb98,	// (0x0002db8b) clock_digital_number_pane_cp10

0xeba0,	// (0x0002db93) clock_digital_number_pane_cp11

0xeba8,	// (0x0002db9b) clock_digital_number_pane_cp12

0xebb0,	// (0x0002dba3) clock_digital_number_pane_cp13

0xebb8,	// (0x0002dbab) clock_digital_separator_pane_cp10

0x47d1,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g1

0x47d1,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0002dbb3) popup_clock_digital_analogue_window_cp2_g3

0x47d1,	// (0x000237c4) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0002dbb3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd28,	// (0x0002ed1b) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0002dbbb) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0002dbc9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0134,	// (0x0001f127) popup_clock_digital_analogue_window_cp2_t

0x7c47,	// (0x00026c3a) clock_digital_number_pane_cp10_g1

0x7c47,	// (0x00026c3a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002eb18) clock_digital_number_pane_cp10_g

0x7c47,	// (0x00026c3a) clock_digital_separator_pane_cp10_g1

0x7c47,	// (0x00026c3a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002eb18) clock_digital_separator_pane_cp10_g

0x9578,	// (0x0002856b) uniindi_top_pane_g3

0x9589,	// (0x0002857c) uniindi_top_pane_g4

0x2fd4,	// (0x00021fc7) vkb2_row_keypad_pane_ParamLimits

0x2fd4,	// (0x00021fc7) vkb2_row_keypad_pane

0x3216,	// (0x00022209) vkb2_cell_t_keypad_pane_ParamLimits

0x3216,	// (0x00022209) vkb2_cell_t_keypad_pane

0x3226,	// (0x00022219) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3226,	// (0x00022219) vkb2_cell_t_keypad_pane_cp08

0x3239,	// (0x0002222c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3239,	// (0x0002222c) vkb2_cell_t_keypad_pane_cp09

0x324d,	// (0x00022240) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x324d,	// (0x00022240) vkb2_cell_t_keypad_pane_cp01

0x325e,	// (0x00022251) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x325e,	// (0x00022251) vkb2_cell_t_keypad_pane_cp02

0x326f,	// (0x00022262) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x326f,	// (0x00022262) vkb2_cell_t_keypad_pane_cp03

0x3280,	// (0x00022273) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3280,	// (0x00022273) vkb2_cell_t_keypad_pane_cp04

0x3291,	// (0x00022284) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3291,	// (0x00022284) vkb2_cell_t_keypad_pane_cp05

0x32a2,	// (0x00022295) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x32a2,	// (0x00022295) vkb2_cell_t_keypad_pane_cp06

0x32b3,	// (0x000222a6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x32b3,	// (0x000222a6) vkb2_cell_t_keypad_pane_cp07

0x32c4,	// (0x000222b7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x32c4,	// (0x000222b7) vkb2_cell_t_keypad_pane_cp10

0x7ec5,	// (0x00026eb8) vkb2_cell_t_keypad_pane_g1

0x9b68,	// (0x00028b5b) vkb2_cell_t_keypad_pane_t1

0x37ea,	// (0x000227dd) popup_grid_graphic2_window

0xef10,	// (0x0002df03) aid_size_cell_graphic2_ParamLimits

0xef10,	// (0x0002df03) aid_size_cell_graphic2

0xef4e,	// (0x0002df41) bg_popup_window_pane_cp21_ParamLimits

0xef4e,	// (0x0002df41) bg_popup_window_pane_cp21

0xef5c,	// (0x0002df4f) graphic2_pages_pane_ParamLimits

0xef5c,	// (0x0002df4f) graphic2_pages_pane

0xefb2,	// (0x0002dfa5) grid_graphic2_control_pane_ParamLimits

0xefb2,	// (0x0002dfa5) grid_graphic2_control_pane

0xeffa,	// (0x0002dfed) grid_graphic2_pane_ParamLimits

0xeffa,	// (0x0002dfed) grid_graphic2_pane

0xf08e,	// (0x0002e081) cell_graphic2_pane

0x37ea,	// (0x000227dd) main_comp_mode_pane

0x8df8,	// (0x00027deb) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0002d8c2) bg_popup_window_pane_cp19_ParamLimits

0x91ce,	// (0x000281c1) bg_touch_area_indi_pane_ParamLimits

0x91ce,	// (0x000281c1) bg_touch_area_indi_pane

0x91e4,	// (0x000281d7) bg_touch_area_indi_pane_cp01_ParamLimits

0x91e4,	// (0x000281d7) bg_touch_area_indi_pane_cp01

0x91fa,	// (0x000281ed) bg_touch_area_indi_pane_cp02_ParamLimits

0x91fa,	// (0x000281ed) bg_touch_area_indi_pane_cp02

0x9212,	// (0x00028205) bg_touch_area_indi_pane_cp03_ParamLimits

0x9212,	// (0x00028205) bg_touch_area_indi_pane_cp03

0x922c,	// (0x0002821f) popup_slider_window_g1_ParamLimits

0x9248,	// (0x0002823b) popup_slider_window_g2_ParamLimits

0x9264,	// (0x00028257) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002ecba) popup_slider_window_g_ParamLimits

0x92c0,	// (0x000282b3) popup_slider_window_t1_ParamLimits

0x9334,	// (0x00028327) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0002e081) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0002e0dc) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0002e0dc) bg_button_pane_cp10

0xf0fc,	// (0x0002e0ef) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0002e0ef) bg_button_pane_cp11

0xf10f,	// (0x0002e102) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0002e102) graphic2_pages_pane_g1

0xf12a,	// (0x0002e11d) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0002e11d) graphic2_pages_pane_g2

0x0001,

0x0182,	// (0x0001f175) graphic2_pages_pane_g_ParamLimits

0x0182,	// (0x0001f175) graphic2_pages_pane_g

0xf142,	// (0x0002e135) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0002e135) graphic2_pages_pane_t1

0xf15a,	// (0x0002e14d) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0002e14d) cell_graphic2_control_pane

0xf18c,	// (0x0002e17f) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0002e17f) cell_graphic2_pane_g1

0xda03,	// (0x0002c9f6) cell_graphic2_pane_g2_ParamLimits

0xda03,	// (0x0002c9f6) cell_graphic2_pane_g2

0xf054,	// (0x0002e047) cell_graphic2_pane_g3_ParamLimits

0xf054,	// (0x0002e047) cell_graphic2_pane_g3

0xda10,	// (0x0002ca03) cell_graphic2_pane_g4_ParamLimits

0xda10,	// (0x0002ca03) cell_graphic2_pane_g4

0xf199,	// (0x0002e18c) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0002e18c) cell_graphic2_pane_g5

0x0004,

0xfd67,	// (0x0002ed5a) cell_graphic2_pane_g_ParamLimits

0xfd67,	// (0x0002ed5a) cell_graphic2_pane_g

0xf1b9,	// (0x0002e1ac) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0002e1ac) cell_graphic2_pane_t1

0x6338,	// (0x0002532b) grid_highlight_pane_cp11_ParamLimits

0x6338,	// (0x0002532b) grid_highlight_pane_cp11

0x3b67,	// (0x00022b5a) bg_button_pane_cp05

0xf202,	// (0x0002e1f5) cell_graphic2_control_pane_g1

0x7c47,	// (0x00026c3a) bg_touch_area_indi_pane_g1

0x9e44,	// (0x00028e37) aid_cmod_rocker_key_size

0x9e4e,	// (0x00028e41) aid_cmode_itu_key_size

0x9e58,	// (0x00028e4b) main_cmode_video_pane

0x9e62,	// (0x00028e55) main_comp_mode_itu_pane

0x9e6e,	// (0x00028e61) main_comp_mode_rocker_pane

0x9e9b,	// (0x00028e8e) cell_cmode_rocker_pane_ParamLimits

0x9e9b,	// (0x00028e8e) cell_cmode_rocker_pane

0x9ead,	// (0x00028ea0) cell_cmode_itu_pane_ParamLimits

0x9ead,	// (0x00028ea0) cell_cmode_itu_pane

0x414d,	// (0x00023140) bg_button_pane_cp06_ParamLimits

0x414d,	// (0x00023140) bg_button_pane_cp06

0x7ec5,	// (0x00026eb8) cell_cmode_rocker_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) cell_cmode_rocker_pane_g1

0x93d8,	// (0x000283cb) cell_cmode_rocker_pane_g2_ParamLimits

0x93d8,	// (0x000283cb) cell_cmode_rocker_pane_g2

0x0001,

0xfd72,	// (0x0002ed65) cell_cmode_rocker_pane_g_ParamLimits

0xfd72,	// (0x0002ed65) cell_cmode_rocker_pane_g

0x37ea,	// (0x000227dd) bg_button_pane_cp07

0x9ec2,	// (0x00028eb5) cell_cmode_itu_pane_g1

0x9ecb,	// (0x00028ebe) cell_cmode_itu_pane_t1

0x9ed9,	// (0x00028ecc) cell_cmode_itu_pane_t2

0x0001,

0xfd77,	// (0x0002ed6a) cell_cmode_itu_pane_t

0x95fb,	// (0x000285ee) aid_touch_ctrl_left

0x9603,	// (0x000285f6) aid_touch_ctrl_right

0x37ea,	// (0x000227dd) compa_mode_pane

0xf226,	// (0x0002e219) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0002e223) aid_cmode_itu_key_size_cp

0x9efb,	// (0x00028eee) compa_mode_pane_g1

0x9f03,	// (0x00028ef6) compa_mode_pane_g2

0x9f0b,	// (0x00028efe) compa_mode_pane_g3

0x0002,

0xfd7c,	// (0x0002ed6f) compa_mode_pane_g

0xf23a,	// (0x0002e22d) main_comp_mode_itu_pane_cp

0xf242,	// (0x0002e235) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0002e23d) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0002e23d) cell_cmode_itu_pane_cp

0xf25f,	// (0x0002e252) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0002e252) cell_cmode_rocker_pane_cp

0x414d,	// (0x00023140) bg_button_pane_cp06_cp_ParamLimits

0x414d,	// (0x00023140) bg_button_pane_cp06_cp

0x7ec5,	// (0x00026eb8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ec5,	// (0x00026eb8) cell_cmode_rocker_pane_g1_cp

0x7c47,	// (0x00026c3a) cell_cmode_rocker_pane_g2_cp

0x37ea,	// (0x000227dd) bg_button_pane_cp07_cp

0xf271,	// (0x0002e264) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0002e26d) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0002e26d) cell_cmode_itu_pane_t2_cp

0xdf2e,	// (0x0002cf21) settings_code_pane_cp2

0x38de,	// (0x000228d1) bg_popup_window_pane_cp3_ParamLimits

0x3d41,	// (0x00022d34) heading_pane_cp3_ParamLimits

0x3d4d,	// (0x00022d40) listscroll_popup_graphic_pane_ParamLimits

0x28ed,	// (0x000218e0) fep_hwr_aid_pane_ParamLimits

0x2cb6,	// (0x00021ca9) aid_touch_sctrl_top_ParamLimits

0x2cc3,	// (0x00021cb6) sctrl_sk_top_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002ecd3) sctrl_sk_top_pane_g_ParamLimits

0x2cd0,	// (0x00021cc3) sctrl_sk_top_pane_t1_ParamLimits

0x2cb6,	// (0x00021ca9) aid_touch_sctrl_bottom_ParamLimits

0x2cd0,	// (0x00021cc3) sctrl_sk_bottom_pane_t1_ParamLimits

0x9544,	// (0x00028537) aid_area_touch_clock

0xccf2,	// (0x0002bce5) aid_vkb2_area_top_pane_cell_ParamLimits

0xccf2,	// (0x0002bce5) aid_vkb2_area_top_pane_cell

0xcd9d,	// (0x0002bd90) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd9d,	// (0x0002bd90) aid_vkb2_area_bottom_pane_cell

0x9ab3,	// (0x00028aa6) popup_char_count_window

0x9f58,	// (0x00028f4b) popup_char_count_window_g1

0x9f61,	// (0x00028f54) popup_char_count_window_g2

0x9f6a,	// (0x00028f5d) popup_char_count_window_g3

0x0002,

0xfd83,	// (0x0002ed76) popup_char_count_window_g

0x9f73,	// (0x00028f66) popup_char_count_window_t1

0x2d71,	// (0x00021d64) popup_fep_char_preview_window_ParamLimits

0x2d71,	// (0x00021d64) popup_fep_char_preview_window

0xcd12,	// (0x0002bd05) vkb2_top_candi_pane_ParamLimits

0xcd12,	// (0x0002bd05) vkb2_top_candi_pane

0xf288,	// (0x0002e27b) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0002e27b) cell_vkb2_top_candi_pane

0x5cc4,	// (0x00024cb7) bg_popup_fep_char_preview_window_ParamLimits

0x5cc4,	// (0x00024cb7) bg_popup_fep_char_preview_window

0x32d9,	// (0x000222cc) popup_fep_char_preview_window_t1_ParamLimits

0x32d9,	// (0x000222cc) popup_fep_char_preview_window_t1

0x9fce,	// (0x00028fc1) bg_popup_fep_char_preview_window_g1

0x9fd6,	// (0x00028fc9) bg_popup_fep_char_preview_window_g2

0x9fde,	// (0x00028fd1) bg_popup_fep_char_preview_window_g3

0x9fe6,	// (0x00028fd9) bg_popup_fep_char_preview_window_g4

0x9fee,	// (0x00028fe1) bg_popup_fep_char_preview_window_g5

0x3313,	// (0x00022306) bg_popup_fep_char_preview_window_g6

0x9ff6,	// (0x00028fe9) bg_popup_fep_char_preview_window_g7

0x9ffe,	// (0x00028ff1) bg_popup_fep_char_preview_window_g8

0xa006,	// (0x00028ff9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd8a,	// (0x0002ed7d) bg_popup_fep_char_preview_window_g

0x7ec5,	// (0x00026eb8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) cell_vkb2_top_candi_pane_g1

0x81dc,	// (0x000271cf) cell_vkb2_top_candi_pane_g2_ParamLimits

0x81dc,	// (0x000271cf) cell_vkb2_top_candi_pane_g2

0x81fd,	// (0x000271f0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x81fd,	// (0x000271f0) cell_vkb2_top_candi_pane_g3

0x331b,	// (0x0002230e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x331b,	// (0x0002230e) cell_vkb2_top_candi_pane_g4

0x9e7a,	// (0x00028e6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9e7a,	// (0x00028e6d) cell_vkb2_top_candi_pane_g5

0x93d8,	// (0x000283cb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x93d8,	// (0x000283cb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd9d,	// (0x0002ed90) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd9d,	// (0x0002ed90) cell_vkb2_top_candi_pane_g

0x333c,	// (0x0002232f) cell_vkb2_top_candi_pane_t1

0x274d,	// (0x00021740) aid_size_touch_slider_mark_ParamLimits

0x274d,	// (0x00021740) aid_size_touch_slider_mark

0xef98,	// (0x0002df8b) grid_graphic2_catg_pane_ParamLimits

0xef98,	// (0x0002df8b) grid_graphic2_catg_pane

0xf061,	// (0x0002e054) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0002e054) popup_grid_graphic2_window_t1

0xf077,	// (0x0002e06a) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0002e06a) popup_grid_graphic2_window_t2

0x0001,

0x017d,	// (0x0001f170) popup_grid_graphic2_window_t_ParamLimits

0x017d,	// (0x0001f170) popup_grid_graphic2_window_t

0x3b67,	// (0x00022b5a) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0002e1f5) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0002e2e1) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0002e2e1) cell_graphic2_catg_pane

0x37ea,	// (0x000227dd) bg_button_pane_cp12

0xf300,	// (0x0002e2f3) cell_graphic2_catg_pane_g1

0x9510,	// (0x00028503) cell_tb_ext_pane_t1_ParamLimits

0x3113,	// (0x00022106) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3113,	// (0x00022106) vkb2_top_cell_right_narrow_pane

0x312b,	// (0x0002211e) vkb2_top_cell_right_wide_pane_ParamLimits

0x312b,	// (0x0002211e) vkb2_top_cell_right_wide_pane

0x28df,	// (0x000218d2) bg_vkb2_func_pane_ParamLimits

0x28df,	// (0x000218d2) bg_vkb2_func_pane

0x319c,	// (0x0002218f) vkb2_top_cell_left_pane_g1_ParamLimits

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp03

0x31fa,	// (0x000221ed) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5645,	// (0x00024638) bg_vkb2_func_pane_g1

0x564d,	// (0x00024640) bg_vkb2_func_pane_g2

0x565d,	// (0x00024650) bg_vkb2_func_pane_g3

0x5655,	// (0x00024648) bg_vkb2_func_pane_g4

0x5665,	// (0x00024658) bg_vkb2_func_pane_g5

0x566d,	// (0x00024660) bg_vkb2_func_pane_g6

0x5675,	// (0x00024668) bg_vkb2_func_pane_g7

0x567d,	// (0x00024670) bg_vkb2_func_pane_g8

0x563d,	// (0x00024630) bg_vkb2_func_pane_g9

0x0008,

0xfdaa,	// (0x0002ed9d) bg_vkb2_func_pane_g

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp01

0x319c,	// (0x0002218f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x319c,	// (0x0002218f) vkb2_top_cell_right_wide_pane_g1

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x28df,	// (0x000218d2) bg_vkb2_fuc_pane_cp02

0x31fa,	// (0x000221ed) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x31fa,	// (0x000221ed) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0002d802) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0002d802) aid_touch_area_decrease

0xe843,	// (0x0002d836) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0002d836) aid_touch_area_increase

0xe86b,	// (0x0002d85e) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0002d85e) aid_touch_area_mute

0xe89b,	// (0x0002d88e) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0002d88e) aid_touch_area_slider

0xe8db,	// (0x0002d8ce) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0002d8ce) popup_slider_window_g4

0xe903,	// (0x0002d8f6) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0002d8f6) popup_slider_window_g5

0xe937,	// (0x0002d92a) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0002d92a) popup_slider_window_g6

0x92ee,	// (0x000282e1) popup_slider_window_t2_ParamLimits

0x92ee,	// (0x000282e1) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002ecc7) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002ecc7) popup_slider_window_t

0xe953,	// (0x0002d946) slider_pane_ParamLimits

0xe953,	// (0x0002d946) slider_pane

0xa029,	// (0x0002901c) slider_pane_g1_ParamLimits

0xa029,	// (0x0002901c) slider_pane_g1

0xa03d,	// (0x00029030) slider_pane_g2_ParamLimits

0xa03d,	// (0x00029030) slider_pane_g2

0xa053,	// (0x00029046) slider_pane_g3_ParamLimits

0xa053,	// (0x00029046) slider_pane_g3

0x0003,

0xfdbd,	// (0x0002edb0) slider_pane_g_ParamLimits

0xfdbd,	// (0x0002edb0) slider_pane_g

0xc9d2,	// (0x0002b9c5) popup_tb_float_extension_window_ParamLimits

0xc9d2,	// (0x0002b9c5) popup_tb_float_extension_window

0xa07f,	// (0x00029072) aid_size_cell_tb_float_ext

0x37ea,	// (0x000227dd) bg_popup_sub_window_cp28

0xa08b,	// (0x0002907e) grid_tb_float_ext_pane

0xa095,	// (0x00029088) cell_tb_float_ext_pane_ParamLimits

0xa095,	// (0x00029088) cell_tb_float_ext_pane

0xa0af,	// (0x000290a2) cell_tb_float_ext_pane_g1

0xa0b8,	// (0x000290ab) grid_highlight_pane_cp12

0xcafb,	// (0x0002baee) cell_last_hwr_side_pane_ParamLimits

0xcafb,	// (0x0002baee) cell_last_hwr_side_pane

0x7c47,	// (0x00026c3a) cell_last_hwr_side_pane_g1

0xa0c1,	// (0x000290b4) cell_last_hwr_side_pane_g2

0x0001,

0xfdc6,	// (0x0002edb9) cell_last_hwr_side_pane_g

0xce79,	// (0x0002be6c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce79,	// (0x0002be6c) vkb2_area_bottom_space_btn_pane

0x7ec5,	// (0x00026eb8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9b68,	// (0x00028b5b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x333c,	// (0x0002232f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x335b,	// (0x0002234e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x335b,	// (0x0002234e) vkb2_area_bottom_space_btn_pane_g1

0x3395,	// (0x00022388) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3395,	// (0x00022388) vkb2_area_bottom_space_btn_pane_g2

0x33cb,	// (0x000223be) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x33cb,	// (0x000223be) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdcb,	// (0x0002edbe) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdcb,	// (0x0002edbe) vkb2_area_bottom_space_btn_pane_g

0x2994,	// (0x00021987) cel_fep_hwr_func_pane_ParamLimits

0x2994,	// (0x00021987) cel_fep_hwr_func_pane

0xcad0,	// (0x0002bac3) cell_hwr_side_button_pane_ParamLimits

0xcad0,	// (0x0002bac3) cell_hwr_side_button_pane

0x9544,	// (0x00028537) aid_area_touch_clock_ParamLimits

0x3b67,	// (0x00022b5a) bg_uniindi_top_pane_ParamLimits

0x9556,	// (0x00028549) uniindi_top_pane_g1_ParamLimits

0x956c,	// (0x0002855f) uniindi_top_pane_g2_ParamLimits

0x9578,	// (0x0002856b) uniindi_top_pane_g3_ParamLimits

0x9589,	// (0x0002857c) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002ecfa) uniindi_top_pane_g_ParamLimits

0x9596,	// (0x00028589) uniindi_top_pane_t1_ParamLimits

0x3b67,	// (0x00022b5a) bg_vkb2_func_pane_cp01_ParamLimits

0x3b67,	// (0x00022b5a) bg_vkb2_func_pane_cp01

0xa0ca,	// (0x000290bd) cel_fep_hwr_func_pane_g1_ParamLimits

0xa0ca,	// (0x000290bd) cel_fep_hwr_func_pane_g1

0x3b67,	// (0x00022b5a) bg_vkb2_func_pane_cp02_ParamLimits

0x3b67,	// (0x00022b5a) bg_vkb2_func_pane_cp02

0xa0ca,	// (0x000290bd) cell_hwr_side_button_pane_g1_ParamLimits

0xa0ca,	// (0x000290bd) cell_hwr_side_button_pane_g1

0x54be,	// (0x000244b1) status_pane_g4_ParamLimits

0x54be,	// (0x000244b1) status_pane_g4

0x54d8,	// (0x000244cb) status_pane_t1

0x798c,	// (0x0002697f) form2_midp_gauge_slider_cont_pane

0x7994,	// (0x00026987) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1fd,	// (0x0002d1f0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe20f,	// (0x0002d202) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002eacb) form2_midp_gauge_slider_pane_t_ParamLimits

0x79ca,	// (0x000269bd) form2_midp_slider_pane_ParamLimits

0x2d31,	// (0x00021d24) aid_size_cell_func_vkb2_ParamLimits

0x2d31,	// (0x00021d24) aid_size_cell_func_vkb2

0xa06b,	// (0x0002905e) slider_pane_g4_ParamLimits

0xa06b,	// (0x0002905e) slider_pane_g4

0xceda,	// (0x0002becd) form2_midp_gauge_slider_pane_t2_cp01

0xcee8,	// (0x0002bedb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcee8,	// (0x0002bedb) form2_midp_gauge_slider_pane_t3_cp01

0x3440,	// (0x00022433) form2_midp_slider_pane_cp01

0x37ea,	// (0x000227dd) navi_smil_pane

0xa103,	// (0x000290f6) navi_smil_pane_g1

0xa10b,	// (0x000290fe) navi_smil_pane_t1

0xa0d8,	// (0x000290cb) form2_midp_slider_pane_g1

0xa0e1,	// (0x000290d4) form2_midp_slider_pane_g2

0xa0e9,	// (0x000290dc) form2_midp_slider_pane_g3

0xa0d8,	// (0x000290cb) form2_midp_slider_pane_g4

0xf309,	// (0x0002e2fc) form2_midp_slider_pane_g5

0x0004,

0xfdd4,	// (0x0002edc7) form2_midp_slider_pane_g

0x3405,	// (0x000223f8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3405,	// (0x000223f8) vkb2_area_bottom_space_btn_pane_g4

0xd8d4,	// (0x0002c8c7) lc0_navi_pane_ParamLimits

0xd8d4,	// (0x0002c8c7) lc0_navi_pane

0xd93e,	// (0x0002c931) lc0_stat_indi_pane_ParamLimits

0xd93e,	// (0x0002c931) lc0_stat_indi_pane

0xd953,	// (0x0002c946) ls0_title_pane_ParamLimits

0xd953,	// (0x0002c946) ls0_title_pane

0x414d,	// (0x00023140) bg_popup_sub_pane_cp14_ParamLimits

0x952b,	// (0x0002851e) list_uniindi_pane_ParamLimits

0x9537,	// (0x0002852a) uniindi_top_pane_ParamLimits

0x95d3,	// (0x000285c6) list_single_uniindi_pane_g1_ParamLimits

0x95e6,	// (0x000285d9) list_single_uniindi_pane_t1_ParamLimits

0xcf05,	// (0x0002bef8) lc0_stat_clock_pane_ParamLimits

0xcf05,	// (0x0002bef8) lc0_stat_clock_pane

0xf314,	// (0x0002e307) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0002e307) lc0_stat_indi_pane_g1

0xf321,	// (0x0002e314) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0002e314) lc0_stat_indi_pane_g2

0x0001,

0x0204,	// (0x0001f1f7) lc0_stat_indi_pane_g_ParamLimits

0x0204,	// (0x0001f1f7) lc0_stat_indi_pane_g

0xcf12,	// (0x0002bf05) lc0_uni_indicator_pane_ParamLimits

0xcf12,	// (0x0002bf05) lc0_uni_indicator_pane

0xf32e,	// (0x0002e321) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0002e321) ls0_title_pane_g1

0xf342,	// (0x0002e335) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0002e335) ls0_title_pane_t1

0xcf1f,	// (0x0002bf12) lc0_uni_indicator_pane_g1_ParamLimits

0xcf1f,	// (0x0002bf12) lc0_uni_indicator_pane_g1

0xa17d,	// (0x00029170) lc0_stat_clock_pane_t1

0x37ea,	// (0x000227dd) main_ai5_pane

0xa18b,	// (0x0002917e) ai5_sk_pane_ParamLimits

0xa18b,	// (0x0002917e) ai5_sk_pane

0xf370,	// (0x0002e363) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0002e363) cell_ai5_widget_pane

0xa24a,	// (0x0002923d) aid_size_cell_widget_grid

0xa260,	// (0x00029253) bg_ai5_widget_pane_ParamLimits

0xa260,	// (0x00029253) bg_ai5_widget_pane

0xa2d4,	// (0x000292c7) cell_ai5_widget_pane_g2

0xa2e4,	// (0x000292d7) cell_ai5_widget_pane_g3

0xa2fb,	// (0x000292ee) cell_ai5_widget_pane_g4

0xa307,	// (0x000292fa) cell_ai5_widget_pane_g5

0xa313,	// (0x00029306) cell_ai5_widget_pane_g6

0xa31f,	// (0x00029312) cell_ai5_widget_pane_g7

0xa367,	// (0x0002935a) cell_ai5_widget_pane_t1_ParamLimits

0xa367,	// (0x0002935a) cell_ai5_widget_pane_t1

0xa384,	// (0x00029377) cell_ai5_widget_pane_t2_ParamLimits

0xa384,	// (0x00029377) cell_ai5_widget_pane_t2

0xa39c,	// (0x0002938f) cell_ai5_widget_pane_t3_ParamLimits

0xa39c,	// (0x0002938f) cell_ai5_widget_pane_t3

0xa3b4,	// (0x000293a7) cell_ai5_widget_pane_t4_ParamLimits

0xa3b4,	// (0x000293a7) cell_ai5_widget_pane_t4

0xa3d1,	// (0x000293c4) cell_ai5_widget_pane_t5_ParamLimits

0xa3d1,	// (0x000293c4) cell_ai5_widget_pane_t5

0xa3f0,	// (0x000293e3) cell_ai5_widget_pane_t6_ParamLimits

0xa3f0,	// (0x000293e3) cell_ai5_widget_pane_t6

0xa402,	// (0x000293f5) cell_ai5_widget_pane_t7_ParamLimits

0xa402,	// (0x000293f5) cell_ai5_widget_pane_t7

0xa41b,	// (0x0002940e) cell_ai5_widget_pane_t8_ParamLimits

0xa41b,	// (0x0002940e) cell_ai5_widget_pane_t8

0x0009,

0xfdf4,	// (0x0002ede7) cell_ai5_widget_pane_t_ParamLimits

0xfdf4,	// (0x0002ede7) cell_ai5_widget_pane_t

0xa46f,	// (0x00029462) grid_ai5_widget_pane

0x414d,	// (0x00023140) highlight_cell_ai5_widget_pane_ParamLimits

0x414d,	// (0x00023140) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0002e3c9) ai5_sk_left_pane

0xf3e0,	// (0x0002e3d3) ai5_sk_middle_pane

0xf3ea,	// (0x0002e3dd) ai5_sk_right_pane

0xa4a4,	// (0x00029497) bg_ai5_widget_pane_g1_ParamLimits

0xa4a4,	// (0x00029497) bg_ai5_widget_pane_g1

0xa4b0,	// (0x000294a3) bg_ai5_widget_pane_g2_ParamLimits

0xa4b0,	// (0x000294a3) bg_ai5_widget_pane_g2

0xa4bc,	// (0x000294af) bg_ai5_widget_pane_g3_ParamLimits

0xa4bc,	// (0x000294af) bg_ai5_widget_pane_g3

0xa4c8,	// (0x000294bb) bg_ai5_widget_pane_g4_ParamLimits

0xa4c8,	// (0x000294bb) bg_ai5_widget_pane_g4

0xa4d4,	// (0x000294c7) bg_ai5_widget_pane_g5_ParamLimits

0xa4d4,	// (0x000294c7) bg_ai5_widget_pane_g5

0xa4e0,	// (0x000294d3) bg_ai5_widget_pane_g6_ParamLimits

0xa4e0,	// (0x000294d3) bg_ai5_widget_pane_g6

0xa4ec,	// (0x000294df) bg_ai5_widget_pane_g7_ParamLimits

0xa4ec,	// (0x000294df) bg_ai5_widget_pane_g7

0xa4f8,	// (0x000294eb) bg_ai5_widget_pane_g8_ParamLimits

0xa4f8,	// (0x000294eb) bg_ai5_widget_pane_g8

0xa504,	// (0x000294f7) bg_ai5_widget_pane_g9_ParamLimits

0xa504,	// (0x000294f7) bg_ai5_widget_pane_g9

0x0008,

0xfe09,	// (0x0002edfc) bg_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002edfc) bg_ai5_widget_pane_g

0xa536,	// (0x00029529) cell_shortcut_ai5_widget_pane_ParamLimits

0xa536,	// (0x00029529) cell_shortcut_ai5_widget_pane

0x4de4,	// (0x00023dd7) bg_cell_shortcut_ai5_widget_pane

0xa547,	// (0x0002953a) cell_grid_ai5_widget_pane_g1

0x4de4,	// (0x00023dd7) highlight_cell_shortcut_ai5_widget_pane

0x564d,	// (0x00024640) ai5_sk_left_pane_g1

0xa550,	// (0x00029543) ai5_sk_left_pane_g2

0xa558,	// (0x0002954b) ai5_sk_left_pane_g3

0xa560,	// (0x00029553) ai5_sk_left_pane_g4

0x0003,

0xfe1c,	// (0x0002ee0f) ai5_sk_left_pane_g

0xa568,	// (0x0002955b) ai5_sk_left_pane_t1

0x5645,	// (0x00024638) ai5_sk_right_pane_g1

0xa576,	// (0x00029569) ai5_sk_right_pane_g2

0xa57e,	// (0x00029571) ai5_sk_right_pane_g3

0xa586,	// (0x00029579) ai5_sk_right_pane_g4

0x0003,

0xfe25,	// (0x0002ee18) ai5_sk_right_pane_g

0xa58e,	// (0x00029581) ai5_sk_right_pane_t1

0x5645,	// (0x00024638) ai5_sk_middle_pane_g1

0x564d,	// (0x00024640) ai5_sk_middle_pane_g2

0x5665,	// (0x00024658) ai5_sk_middle_pane_g3

0xa57e,	// (0x00029571) ai5_sk_middle_pane_g4

0xa558,	// (0x0002954b) ai5_sk_middle_pane_g5

0xa59c,	// (0x0002958f) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0002e3e7) ai5_sk_middle_pane_g7

0x0006,

0xfe2e,	// (0x0002ee21) ai5_sk_middle_pane_g

0xd7c0,	// (0x0002c7b3) aid_touch_area_size_lc0_ParamLimits

0xd7c0,	// (0x0002c7b3) aid_touch_area_size_lc0

0x2b1f,	// (0x00021b12) cell_hwr_candidate_pane_t1_ParamLimits

0x5195,	// (0x00024188) aid_touch_navi_pane

0xda8a,	// (0x0002ca7d) status_dt_navi_pane_ParamLimits

0xda8a,	// (0x0002ca7d) status_dt_navi_pane

0xdaa2,	// (0x0002ca95) status_dt_sta_pane_ParamLimits

0xdaa2,	// (0x0002ca95) status_dt_sta_pane

0xf3fc,	// (0x0002e3ef) dt_sta_controll_pane

0xf409,	// (0x0002e3fc) dt_sta_indi_pane

0xf416,	// (0x0002e409) dt_sta_title_pane

0x3b67,	// (0x00022b5a) bg_dt_sta_indi_pane_ParamLimits

0x3b67,	// (0x00022b5a) bg_dt_sta_indi_pane

0xf428,	// (0x0002e41b) dt_sta_battery_pane

0xf430,	// (0x0002e423) dt_sta_indi_pane_g1

0xa5ee,	// (0x000295e1) dt_sta_indi_pane_g2

0xa5f7,	// (0x000295ea) dt_sta_indi_pane_g3

0x0002,

0xfe3d,	// (0x0002ee30) dt_sta_indi_pane_g

0xa600,	// (0x000295f3) dt_sta_signal_pane

0x414d,	// (0x00023140) bg_dt_sta_title_pane_ParamLimits

0x414d,	// (0x00023140) bg_dt_sta_title_pane

0xa609,	// (0x000295fc) dt_sta_title_pane_g1

0xa611,	// (0x00029604) dt_sta_title_pane_t1_ParamLimits

0xa611,	// (0x00029604) dt_sta_title_pane_t1

0x37ea,	// (0x000227dd) bg_dt_sta_control_pane

0xf439,	// (0x0002e42c) dt_sta_controll_pane_g1

0xa62f,	// (0x00029622) bg_dt_sta_title_pane_g1

0xa638,	// (0x0002962b) bg_dt_sta_title_pane_g2

0xa641,	// (0x00029634) bg_dt_sta_title_pane_g3

0x0002,

0xfe44,	// (0x0002ee37) bg_dt_sta_title_pane_g

0x7c47,	// (0x00026c3a) bg_dt_sta_indi_pane_g1

0xa64a,	// (0x0002963d) dt_sta_signal_pane_g1

0xa652,	// (0x00029645) dt_sta_signal_pane_g2

0x0001,

0xfe4b,	// (0x0002ee3e) dt_sta_signal_pane_g

0xa65a,	// (0x0002964d) dt_sta_battery_pane_g1

0xa663,	// (0x00029656) dt_sta_battery_pane_t1

0x7c47,	// (0x00026c3a) bg_dt_sta_control_pane_g1

0x48e3,	// (0x000238d6) fep_china_uni_eep_pane

0x48eb,	// (0x000238de) fep_china_uni_entry_pane_ParamLimits

0x48fb,	// (0x000238ee) popup_fep_china_uni_window_g1_ParamLimits

0x490b,	// (0x000238fe) popup_fep_china_uni_window_g2_ParamLimits

0x490b,	// (0x000238fe) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e710) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e710) popup_fep_china_uni_window_g

0xa672,	// (0x00029665) fep_china_uni_eep_pane_g1

0xa67a,	// (0x0002966d) fep_china_uni_eep_pane_t1

0xa0fa,	// (0x000290ed) aid_touch_area_size_smil_player

0x52e5,	// (0x000242d8) lc0_clock_pane

0x54cc,	// (0x000244bf) status_pane_g5_ParamLimits

0x54cc,	// (0x000244bf) status_pane_g5

0xc554,	// (0x0002b547) popup_keymap_window

0x548a,	// (0x0002447d) status_icon_pane

0xa2e4,	// (0x000292d7) cell_ai5_widget_pane_g3_ParamLimits

0xa2fb,	// (0x000292ee) cell_ai5_widget_pane_g4_ParamLimits

0xa307,	// (0x000292fa) cell_ai5_widget_pane_g5_ParamLimits

0xa32b,	// (0x0002931e) cell_ai5_widget_pane_g8_ParamLimits

0xa32b,	// (0x0002931e) cell_ai5_widget_pane_g8

0xa33f,	// (0x00029332) cell_ai5_widget_pane_g9_ParamLimits

0xa33f,	// (0x00029332) cell_ai5_widget_pane_g9

0xa353,	// (0x00029346) cell_ai5_widget_pane_g10_ParamLimits

0xa353,	// (0x00029346) cell_ai5_widget_pane_g10

0xa689,	// (0x0002967c) status_icon_pane_g1

0x37ea,	// (0x000227dd) bg_popup_sub_pane_cp13

0xa691,	// (0x00029684) popup_keymap_window_t1

0xd74e,	// (0x0002c741) control_pane_g6_ParamLimits

0xd74e,	// (0x0002c741) control_pane_g6

0xd75b,	// (0x0002c74e) control_pane_g7_ParamLimits

0xd75b,	// (0x0002c74e) control_pane_g7

0xd768,	// (0x0002c75b) control_pane_g8_ParamLimits

0xd768,	// (0x0002c75b) control_pane_g8

0xf3fc,	// (0x0002e3ef) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0002e3fc) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0002e409) dt_sta_title_pane_ParamLimits

0x4085,	// (0x00023078) aid_size_touch_scroll_bar_cale

0x16cc,	// (0x000206bf) popup_discreet_window_ParamLimits

0x16cc,	// (0x000206bf) popup_discreet_window

0xc130,	// (0x0002b123) popup_sk_window

0x5cc4,	// (0x00024cb7) bg_popup_sub_pane_cp28_ParamLimits

0x5cc4,	// (0x00024cb7) bg_popup_sub_pane_cp28

0xa69f,	// (0x00029692) popup_discreet_window_g1_ParamLimits

0xa69f,	// (0x00029692) popup_discreet_window_g1

0xa6bf,	// (0x000296b2) popup_discreet_window_t1_ParamLimits

0xa6bf,	// (0x000296b2) popup_discreet_window_t1

0xa6dd,	// (0x000296d0) popup_discreet_window_t2_ParamLimits

0xa6dd,	// (0x000296d0) popup_discreet_window_t2

0x0002,

0xfe50,	// (0x0002ee43) popup_discreet_window_t_ParamLimits

0xfe50,	// (0x0002ee43) popup_discreet_window_t

0x3477,	// (0x0002246a) popup_sk_window_g1

0x3481,	// (0x00022474) popup_sk_window_g2

0x0001,

0xfe57,	// (0x0002ee4a) popup_sk_window_g

0x3489,	// (0x0002247c) popup_sk_window_t1

0x3497,	// (0x0002248a) popup_sk_window_t1_copy1

0xa2d4,	// (0x000292c7) cell_ai5_widget_pane_g2_ParamLimits

0xa42d,	// (0x00029420) cell_ai5_widget_pane_t9_ParamLimits

0xa42d,	// (0x00029420) cell_ai5_widget_pane_t9

0x37ea,	// (0x000227dd) main_fep_fshwr2_pane

0xcf46,	// (0x0002bf39) aid_fshwr2_btn_pane

0xcf57,	// (0x0002bf4a) aid_fshwr2_syb_pane

0xcf68,	// (0x0002bf5b) aid_fshwr2_txt_pane

0xcf74,	// (0x0002bf67) fshwr2_func_candi_pane

0xcf93,	// (0x0002bf86) fshwr2_hwr_syb_pane

0xcfae,	// (0x0002bfa1) fshwr2_icf_pane

0x37ea,	// (0x000227dd) fshwr2_icf_bg_pane

0x3517,	// (0x0002250a) fshwr2_icf_pane_t1_ParamLimits

0x3517,	// (0x0002250a) fshwr2_icf_pane_t1

0x47d1,	// (0x000237c4) fshwr2_func_candi_pane_g1

0xf442,	// (0x0002e435) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0002e435) fshwr2_func_candi_row_pane

0xcfda,	// (0x0002bfcd) cell_fshwr2_syb_pane_ParamLimits

0xcfda,	// (0x0002bfcd) cell_fshwr2_syb_pane

0x7ec5,	// (0x00026eb8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) fshwr2_hwr_syb_pane_g1

0x37ea,	// (0x000227dd) bg_popup_call_pane_cp01

0xcff0,	// (0x0002bfe3) fshwr2_func_candi_cell_pane_ParamLimits

0xcff0,	// (0x0002bfe3) fshwr2_func_candi_cell_pane

0xf465,	// (0x0002e458) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0002e458) fshwr2_func_candi_cell_bg_pane

0xd03b,	// (0x0002c02e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd03b,	// (0x0002c02e) fshwr2_func_candi_cell_pane_g1

0xd072,	// (0x0002c065) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd072,	// (0x0002c065) fshwr2_func_candi_cell_pane_t1

0x37ea,	// (0x000227dd) bg_button_pane_cp08

0xa74b,	// (0x0002973e) cell_fshwr2_syb_bg_pane

0xd08d,	// (0x0002c080) cell_fshwr2_syb_bg_pane_g1

0xd095,	// (0x0002c088) cell_fshwr2_syb_bg_pane_t1

0x414d,	// (0x00023140) main_tmo_pane

0xdd60,	// (0x0002cd53) uni_indicator_pane_g1_ParamLimits

0xdd76,	// (0x0002cd69) uni_indicator_pane_g2_ParamLimits

0xdd8c,	// (0x0002cd7f) uni_indicator_pane_g3_ParamLimits

0x6812,	// (0x00025805) uni_indicator_pane_g4_ParamLimits

0x6812,	// (0x00025805) uni_indicator_pane_g4

0x6826,	// (0x00025819) uni_indicator_pane_g5_ParamLimits

0x6826,	// (0x00025819) uni_indicator_pane_g5

0x6826,	// (0x00025819) uni_indicator_pane_g6_ParamLimits

0x6826,	// (0x00025819) uni_indicator_pane_g6

0xf915,	// (0x0002e908) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0002d7de) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0002d7de) popup_tmo_note_window

0x414d,	// (0x00023140) fshwr2_bg_pane

0xd063,	// (0x0002c056) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd063,	// (0x0002c056) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe5c,	// (0x0002ee4f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe5c,	// (0x0002ee4f) fshwr2_func_candi_cell_pane_g

0x7c47,	// (0x00026c3a) bg_popup_window_pane_cp01

0x35e2,	// (0x000225d5) bg_popup_window_pane_g1_cp01

0xa753,	// (0x00029746) bg_popup_window_pane_cp22_ParamLimits

0xa753,	// (0x00029746) bg_popup_window_pane_cp22

0xa761,	// (0x00029754) listscroll_tmo_link_pane_ParamLimits

0xa761,	// (0x00029754) listscroll_tmo_link_pane

0xa7a1,	// (0x00029794) popup_tmo_note_window_g1_ParamLimits

0xa7a1,	// (0x00029794) popup_tmo_note_window_g1

0xa7ae,	// (0x000297a1) tmo_note_info_pane_ParamLimits

0xa7ae,	// (0x000297a1) tmo_note_info_pane

0xf471,	// (0x0002e464) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0002e464) list_tmo_note_info_pane_g1

0xa7df,	// (0x000297d2) list_tmo_note_info_pane_g2_ParamLimits

0xa7df,	// (0x000297d2) list_tmo_note_info_pane_g2

0x0001,

0xfe61,	// (0x0002ee54) list_tmo_note_info_pane_g_ParamLimits

0xfe61,	// (0x0002ee54) list_tmo_note_info_pane_g

0xa7fb,	// (0x000297ee) list_tmo_note_info_text_pane_ParamLimits

0xa7fb,	// (0x000297ee) list_tmo_note_info_text_pane

0xa87c,	// (0x0002986f) list_tmo_link_pane

0xa889,	// (0x0002987c) scroll_pane_cp20

0xa896,	// (0x00029889) list_single_tmo_link_pane_ParamLimits

0xa896,	// (0x00029889) list_single_tmo_link_pane

0xa8a6,	// (0x00029899) list_single_tmo_link_pane_t1

0xa8b4,	// (0x000298a7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa8b4,	// (0x000298a7) list_tmo_note_info_text_pane_t1

0xd416,	// (0x0002c409) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd416,	// (0x0002c409) aid_size_touch_scroll_bar_cp01

0xbc10,	// (0x0002ac03) aid_size_touch_slider_marker

0xc120,	// (0x0002b113) popup_settings_window_ParamLimits

0xc120,	// (0x0002b113) popup_settings_window

0x0aaf,	// (0x0001faa2) popup_candi_list_indi_window

0x5195,	// (0x00024188) aid_touch_navi_pane_ParamLimits

0x2c8a,	// (0x00021c7d) rs_clock_indi_pane

0x2c93,	// (0x00021c86) sctrl_sk_bottom_pane_ParamLimits

0x2ca4,	// (0x00021c97) sctrl_sk_top_pane_ParamLimits

0x2d8b,	// (0x00021d7e) popup_fep_tooltip_window

0xa24a,	// (0x0002923d) aid_size_cell_widget_grid_ParamLimits

0xa2bf,	// (0x000292b2) cell_ai5_widget_pane_g1_ParamLimits

0xa2bf,	// (0x000292b2) cell_ai5_widget_pane_g1

0xa313,	// (0x00029306) cell_ai5_widget_pane_g6_ParamLimits

0xa31f,	// (0x00029312) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfddf,	// (0x0002edd2) cell_ai5_widget_pane_g_ParamLimits

0xfddf,	// (0x0002edd2) cell_ai5_widget_pane_g

0xa451,	// (0x00029444) cell_ai5_widget_pane_t10_ParamLimits

0xa451,	// (0x00029444) cell_ai5_widget_pane_t10

0xa46f,	// (0x00029462) grid_ai5_widget_pane_ParamLimits

0xa510,	// (0x00029503) cell_contacts_ai5_widget_pane_ParamLimits

0xa510,	// (0x00029503) cell_contacts_ai5_widget_pane

0xa6f2,	// (0x000296e5) popup_discreet_window_t3_ParamLimits

0xa6f2,	// (0x000296e5) popup_discreet_window_t3

0xcfc6,	// (0x0002bfb9) popup_fshwr2_char_preview_window_ParamLimits

0xcfc6,	// (0x0002bfb9) popup_fshwr2_char_preview_window

0xf488,	// (0x0002e47b) tmo_note_info_pane_t1

0xf49d,	// (0x0002e490) tmo_note_info_pane_t2

0xf4b4,	// (0x0002e4a7) tmo_note_info_pane_t3

0xa858,	// (0x0002984b) tmo_note_info_pane_t4

0xa86a,	// (0x0002985d) tmo_note_info_pane_t5

0x0004,

0xfe66,	// (0x0002ee59) tmo_note_info_pane_t

0xa87c,	// (0x0002986f) list_tmo_link_pane_ParamLimits

0xa889,	// (0x0002987c) scroll_pane_cp20_ParamLimits

0x37ea,	// (0x000227dd) bg_popup_fep_char_preview_window_cp01

0xa8cd,	// (0x000298c0) popup_fshwr2_char_preview_window_t1

0xa8db,	// (0x000298ce) popup_candi_list_indi_window_g1

0xa8e4,	// (0x000298d7) bg_cell_contacts_ai5_widget_pane

0xa8f0,	// (0x000298e3) cell_contacts_ai5_widget_pane_g1

0x8327,	// (0x0002731a) cell_contacts_ai5_widget_pane_g2

0xa905,	// (0x000298f8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe71,	// (0x0002ee64) cell_contacts_ai5_widget_pane_g

0xa911,	// (0x00029904) cell_contacts_ai5_widget_pane_t1

0x414d,	// (0x00023140) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa988,	// (0x0002997b) settings_container_pane

0x4de4,	// (0x00023dd7) listscroll_set_pane_copy1

0x734c,	// (0x0002633f) scroll_pane_cp121_copy1

0x5a75,	// (0x00024a68) set_content_pane_copy1

0xa994,	// (0x00029987) aid_height_set_list_copy1_ParamLimits

0xa994,	// (0x00029987) aid_height_set_list_copy1

0x6a1e,	// (0x00025a11) aid_size_parent_copy1_ParamLimits

0x6a1e,	// (0x00025a11) aid_size_parent_copy1

0xa9a0,	// (0x00029993) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa9a0,	// (0x00029993) button_value_adjust_pane_cp6_copy1

0x5133,	// (0x00024126) list_highlight_pane_cp2_copy1_ParamLimits

0x5133,	// (0x00024126) list_highlight_pane_cp2_copy1

0xa9b4,	// (0x000299a7) list_set_pane_copy1_ParamLimits

0xa9b4,	// (0x000299a7) list_set_pane_copy1

0xa923,	// (0x00029916) main_pane_set_t1_copy1_ParamLimits

0xa923,	// (0x00029916) main_pane_set_t1_copy1

0xa95d,	// (0x00029950) main_pane_set_t2_copy1_ParamLimits

0xa95d,	// (0x00029950) main_pane_set_t2_copy1

0xaa61,	// (0x00029a54) main_pane_set_t3_copy1

0xaa6f,	// (0x00029a62) main_pane_set_t4_copy1

0xa97c,	// (0x0002996f) set_content_pane_g1_copy1_ParamLimits

0xa97c,	// (0x0002996f) set_content_pane_g1_copy1

0xaa7d,	// (0x00029a70) setting_code_pane_copy1

0xaa85,	// (0x00029a78) setting_slider_graphic_pane_copy1

0xaa85,	// (0x00029a78) setting_slider_pane_copy1

0xaa85,	// (0x00029a78) setting_text_pane_copy1

0xaa85,	// (0x00029a78) setting_volume_pane_copy1

0xaa7d,	// (0x00029a70) settings_code_pane_cp2_copy1

0xaa8d,	// (0x00029a80) settings_code_pane_cp_copy1_ParamLimits

0xaa8d,	// (0x00029a80) settings_code_pane_cp_copy1

0x35eb,	// (0x000225de) volume_set_pane_copy1

0xaaa1,	// (0x00029a94) volume_set_pane_g10_copy1

0xaaa9,	// (0x00029a9c) volume_set_pane_g1_copy1

0xaab1,	// (0x00029aa4) volume_set_pane_g2_copy1

0xaab9,	// (0x00029aac) volume_set_pane_g3_copy1

0xaac1,	// (0x00029ab4) volume_set_pane_g4_copy1

0xaac9,	// (0x00029abc) volume_set_pane_g5_copy1

0xaad1,	// (0x00029ac4) volume_set_pane_g6_copy1

0xaad9,	// (0x00029acc) volume_set_pane_g7_copy1

0xaae1,	// (0x00029ad4) volume_set_pane_g8_copy1

0xaae9,	// (0x00029adc) volume_set_pane_g9_copy1

0x38de,	// (0x000228d1) bg_set_opt_pane_cp_copy1_ParamLimits

0x38de,	// (0x000228d1) bg_set_opt_pane_cp_copy1

0x35f3,	// (0x000225e6) setting_slider_pane_t1_copy1_ParamLimits

0x35f3,	// (0x000225e6) setting_slider_pane_t1_copy1

0x3611,	// (0x00022604) setting_slider_pane_t2_copy1_ParamLimits

0x3611,	// (0x00022604) setting_slider_pane_t2_copy1

0x362b,	// (0x0002261e) setting_slider_pane_t3_copy1_ParamLimits

0x362b,	// (0x0002261e) setting_slider_pane_t3_copy1

0x3643,	// (0x00022636) slider_set_pane_copy1_ParamLimits

0x3643,	// (0x00022636) slider_set_pane_copy1

0x41a5,	// (0x00023198) set_opt_bg_pane_g1_copy2

0x41ad,	// (0x000231a0) set_opt_bg_pane_g2_copy2

0xaaf1,	// (0x00029ae4) set_opt_bg_pane_g3_copy2

0x41bd,	// (0x000231b0) set_opt_bg_pane_g4_copy2

0x41c5,	// (0x000231b8) set_opt_bg_pane_g5_copy2

0x41cd,	// (0x000231c0) set_opt_bg_pane_g6_copy2

0xaafb,	// (0x00029aee) set_opt_bg_pane_g7_copy2

0xab03,	// (0x00029af6) set_opt_bg_pane_g8_copy2

0xab0d,	// (0x00029b00) set_opt_bg_pane_g9_copy2

0x3659,	// (0x0002264c) aid_size_touch_slider_mark_copy1_ParamLimits

0x3659,	// (0x0002264c) aid_size_touch_slider_mark_copy1

0xab17,	// (0x00029b0a) slider_set_pane_g1_copy1

0x366d,	// (0x00022660) slider_set_pane_g2_copy1

0x276d,	// (0x00021760) slider_set_pane_g3_copy1_ParamLimits

0x276d,	// (0x00021760) slider_set_pane_g3_copy1

0x2781,	// (0x00021774) slider_set_pane_g4_copy1_ParamLimits

0x2781,	// (0x00021774) slider_set_pane_g4_copy1

0x2799,	// (0x0002178c) slider_set_pane_g5_copy1_ParamLimits

0x2799,	// (0x0002178c) slider_set_pane_g5_copy1

0x276d,	// (0x00021760) slider_set_pane_g6_copy1_ParamLimits

0x276d,	// (0x00021760) slider_set_pane_g6_copy1

0x3675,	// (0x00022668) slider_set_pane_g7_copy1_ParamLimits

0x3675,	// (0x00022668) slider_set_pane_g7_copy1

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp2_copy1

0xab20,	// (0x00029b13) setting_slider_graphic_pane_g1_copy1

0xab29,	// (0x00029b1c) setting_slider_graphic_pane_t1_copy1

0xab39,	// (0x00029b2c) setting_slider_graphic_pane_t2_copy1

0xab49,	// (0x00029b3c) slider_set_pane_cp_copy1

0xab59,	// (0x00029b4c) input_focus_pane_cp1_copy1

0xab62,	// (0x00029b55) list_set_text_pane_copy1

0xab6a,	// (0x00029b5d) setting_text_pane_g1_copy1

0x02e6,	// (0x0001f2d9) set_text_pane_t1_copy1

0xab59,	// (0x00029b4c) input_focus_pane_cp2_copy1

0xab6a,	// (0x00029b5d) setting_code_pane_g1_copy1

0xab73,	// (0x00029b66) setting_code_pane_t1_copy1

0xab81,	// (0x00029b74) list_set_graphic_pane_copy1

0x37fe,	// (0x000227f1) bg_set_opt_pane_cp4_copy1

0x4adf,	// (0x00023ad2) list_set_graphic_pane_g1_copy1_ParamLimits

0x4adf,	// (0x00023ad2) list_set_graphic_pane_g1_copy1

0xab94,	// (0x00029b87) list_set_graphic_pane_g2_copy1

0x4af7,	// (0x00023aea) list_set_graphic_pane_t1_copy1_ParamLimits

0x4af7,	// (0x00023aea) list_set_graphic_pane_t1_copy1

0x7c47,	// (0x00026c3a) rs_clock_indi_pane_g1

0xab9c,	// (0x00029b8f) rs_clock_indi_pane_t1

0xabaa,	// (0x00029b9d) rs_indi_pane

0xabb2,	// (0x00029ba5) rs_indi_pane_g1

0xabbb,	// (0x00029bae) rs_indi_pane_g2

0xabc4,	// (0x00029bb7) rs_indi_pane_g3

0x0002,

0xfe78,	// (0x0002ee6b) rs_indi_pane_g

0x4de4,	// (0x00023dd7) bg_popup_preview_window_pane_cp03

0xabcd,	// (0x00029bc0) popup_fep_tooltip_window_t1

0x88c3,	// (0x000278b6) popup_note2_window_g2_ParamLimits

0x88c3,	// (0x000278b6) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002ec37) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002ec37) popup_note2_window_g

0x8dbe,	// (0x00027db1) bg_popup_sub_pane_cp11_ParamLimits

0x8dcb,	// (0x00027dbe) cell_ai3_links_pane_g1_ParamLimits

0x8de2,	// (0x00027dd5) cell_ai3_links_pane_t1

0x02e6,	// (0x0001f2d9) set_text_pane_t1_copy1_ParamLimits

0x4cf5,	// (0x00023ce8) cell_graphic_popup_pane_cp2_ParamLimits

0x4cf5,	// (0x00023ce8) cell_graphic_popup_pane_cp2

0xabdb,	// (0x00029bce) cell_graphic_popup_pane_g1_cp2

0x3e98,	// (0x00022e8b) cell_graphic_popup_pane_g2_cp2

0xabe3,	// (0x00029bd6) cell_graphic_popup_pane_g3_cp2

0xabeb,	// (0x00029bde) cell_graphic_popup_pane_t2_cp2

0x3ea9,	// (0x00022e9c) grid_highlight_pane_cp3_cp2

0x44ea,	// (0x000234dd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x414d,	// (0x00023140) main_tmo_pane_ParamLimits

0xe7df,	// (0x0002d7d2) popup_tmo_big_image_note_window

0xa2ae,	// (0x000292a1) cell_ai5_widget_list_pane

0xa2b6,	// (0x000292a9) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0002e47b) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0002e490) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0002e4a7) tmo_note_info_pane_t3_ParamLimits

0xa858,	// (0x0002984b) tmo_note_info_pane_t4_ParamLimits

0xa86a,	// (0x0002985d) tmo_note_info_pane_t5_ParamLimits

0xfe66,	// (0x0002ee59) tmo_note_info_pane_t_ParamLimits

0xa988,	// (0x0002997b) settings_container_pane_ParamLimits

0xab51,	// (0x00029b44) indicator_popup_pane_cp5

0xab51,	// (0x00029b44) indicator_popup_pane_cp6

0xab81,	// (0x00029b74) list_set_graphic_pane_copy1_ParamLimits

0x37ea,	// (0x000227dd) bg_popup_window_pane_cp23

0xabf9,	// (0x00029bec) popup_tmo_big_image_note_window_g1

0xac03,	// (0x00029bf6) popup_tmo_big_image_note_window_t1

0xac13,	// (0x00029c06) popup_tmo_big_image_note_window_t2

0xac23,	// (0x00029c16) popup_tmo_big_image_note_window_t3

0x0002,

0xfe7f,	// (0x0002ee72) popup_tmo_big_image_note_window_t

0x7c47,	// (0x00026c3a) cell_ai5_widget_lrg_icon_pane_g1

0xac33,	// (0x00029c26) cell_ai5_widget_lrg_icon_pane_t1

0xac41,	// (0x00029c34) cell_ai5_widget_list_row_pane_ParamLimits

0xac41,	// (0x00029c34) cell_ai5_widget_list_row_pane

0xac58,	// (0x00029c4b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xac58,	// (0x00029c4b) cell_ai5_widget_list_row_pane_g1

0xac65,	// (0x00029c58) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xac65,	// (0x00029c58) cell_ai5_widget_list_row_pane_t1

0xac96,	// (0x00029c89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xac96,	// (0x00029c89) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe86,	// (0x0002ee79) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe86,	// (0x0002ee79) cell_ai5_widget_list_row_pane_t

0x37ea,	// (0x000227dd) main_fep_vtchi_ss_pane

0xacda,	// (0x00029ccd) popup_fep_char_pre_window

0xace2,	// (0x00029cd5) popup_fep_ituss_window

0xf4c9,	// (0x0002e4bc) popup_fep_vkbss_window

0xf4d6,	// (0x0002e4c9) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0002e4c9) grid_vkbss_keypad_pane

0xad3d,	// (0x00029d30) ituss_keypad_pane

0x3697,	// (0x0002268a) aid_vkbss_key_offset_ParamLimits

0x3697,	// (0x0002268a) aid_vkbss_key_offset

0xd0a4,	// (0x0002c097) cell_vkbss_key_pane_ParamLimits

0xd0a4,	// (0x0002c097) cell_vkbss_key_pane

0xad4c,	// (0x00029d3f) bg_cell_vkbss_key_g1_ParamLimits

0xad4c,	// (0x00029d3f) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0002e4d9) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0002e4d9) cell_vkbss_key_3p_pane

0xf500,	// (0x0002e4f3) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0002e4f3) cell_vkbss_key_g1

0xf51a,	// (0x0002e50d) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0002e50d) cell_vkbss_key_t1

0x36b9,	// (0x000226ac) cell_ituss_key_pane_ParamLimits

0x36b9,	// (0x000226ac) cell_ituss_key_pane

0xadab,	// (0x00029d9e) bg_cell_ituss_key_g1_ParamLimits

0xadab,	// (0x00029d9e) bg_cell_ituss_key_g1

0xadb7,	// (0x00029daa) cell_ituss_key_pane_g1_ParamLimits

0xadb7,	// (0x00029daa) cell_ituss_key_pane_g1

0x36ca,	// (0x000226bd) cell_ituss_key_pane_g2_ParamLimits

0x36ca,	// (0x000226bd) cell_ituss_key_pane_g2

0x0002,

0xfe8d,	// (0x0002ee80) cell_ituss_key_pane_g_ParamLimits

0xfe8d,	// (0x0002ee80) cell_ituss_key_pane_g

0x36f6,	// (0x000226e9) cell_ituss_key_t1_ParamLimits

0x36f6,	// (0x000226e9) cell_ituss_key_t1

0x3730,	// (0x00022723) cell_ituss_key_t2_ParamLimits

0x3730,	// (0x00022723) cell_ituss_key_t2

0x3761,	// (0x00022754) cell_ituss_key_t3_ParamLimits

0x3761,	// (0x00022754) cell_ituss_key_t3

0x3730,	// (0x00022723) cell_ituss_key_t4_ParamLimits

0x3730,	// (0x00022723) cell_ituss_key_t4

0x0004,

0xfe94,	// (0x0002ee87) cell_ituss_key_t_ParamLimits

0xfe94,	// (0x0002ee87) cell_ituss_key_t

0xade3,	// (0x00029dd6) cell_vkbss_key_3p_pane_g1

0xadeb,	// (0x00029dde) cell_vkbss_key_3p_pane_g2

0xadf3,	// (0x00029de6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe9f,	// (0x0002ee92) cell_vkbss_key_3p_pane_g

0x37ea,	// (0x000227dd) bg_popup_fep_char_preview_window_cp02

0x37a4,	// (0x00022797) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0002e3bf) main_ai5_sk_pane

0xa8e4,	// (0x000298d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa8f0,	// (0x000298e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8327,	// (0x0002731a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa905,	// (0x000298f8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe71,	// (0x0002ee64) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa911,	// (0x00029904) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x414d,	// (0x00023140) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002e538) main_ai5_sk_pane_g1

0x5afd,	// (0x00024af0) popup_query_code_window_g1

0xacf8,	// (0x00029ceb) popup_fep_vkb_icf_pane

0xad17,	// (0x00029d0a) popup_fep_vtchi_icf_pane

0xae04,	// (0x00029df7) bg_icf_pane

0xae10,	// (0x00029e03) list_vkb_icf_pane

0xae1f,	// (0x00029e12) bg_icf_pane_cp01

0xae32,	// (0x00029e25) vtchi_icf_list_pane

0xae42,	// (0x00029e35) list_vkb_icf_pane_t1_ParamLimits

0xae42,	// (0x00029e35) list_vkb_icf_pane_t1

0xae58,	// (0x00029e4b) vtchi_icf_list_pane_t1_ParamLimits

0xae58,	// (0x00029e4b) vtchi_icf_list_pane_t1

0xace2,	// (0x00029cd5) popup_fep_ituss_window_ParamLimits

0xad17,	// (0x00029d0a) popup_fep_vtchi_icf_pane_ParamLimits

0xad3d,	// (0x00029d30) ituss_keypad_pane_ParamLimits

0x368b,	// (0x0002267e) ituss_sks_pane

0xae04,	// (0x00029df7) bg_icf_pane_ParamLimits

0xacbe,	// (0x00029cb1) icf_edit_indi_pane_ParamLimits

0xacbe,	// (0x00029cb1) icf_edit_indi_pane

0xae10,	// (0x00029e03) list_vkb_icf_pane_ParamLimits

0xae1f,	// (0x00029e12) bg_icf_pane_cp01_ParamLimits

0xaccd,	// (0x00029cc0) icf_edit_indi_pane_cp01_ParamLimits

0xaccd,	// (0x00029cc0) icf_edit_indi_pane_cp01

0xae3a,	// (0x00029e2d) vtchi_query_pane

0x7ec5,	// (0x00026eb8) icf_edit_indi_pane_g1_ParamLimits

0x7ec5,	// (0x00026eb8) icf_edit_indi_pane_g1

0xaec9,	// (0x00029ebc) icf_edit_indi_pane_g2_ParamLimits

0xaec9,	// (0x00029ebc) icf_edit_indi_pane_g2

0x0001,

0xfeb7,	// (0x0002eeaa) icf_edit_indi_pane_g_ParamLimits

0xfeb7,	// (0x0002eeaa) icf_edit_indi_pane_g

0xaed8,	// (0x00029ecb) icf_edit_indi_pane_t1

0xae72,	// (0x00029e65) bg_input_focus_pane_cp042

0x407c,	// (0x0002306f) vtchi_button_pane

0xae7b,	// (0x00029e6e) vtchi_query_pane_t1

0xae89,	// (0x00029e7c) vtchi_query_pane_t2

0xae97,	// (0x00029e8a) vtchi_query_pane_t3

0x0002,

0xfea6,	// (0x0002ee99) vtchi_query_pane_t

0x37ea,	// (0x000227dd) bg_button_pane_cp13

0xaea5,	// (0x00029e98) vtchi_button_pane_g1

0x37b3,	// (0x000227a6) ituss_sks_pane_g1

0x37be,	// (0x000227b1) ituss_sks_pane_g2

0x0001,

0xfead,	// (0x0002eea0) ituss_sks_pane_g

0xaead,	// (0x00029ea0) ituss_sks_pane_t1

0xaebb,	// (0x00029eae) ituss_sks_pane_t2

0x0001,

0xfeb2,	// (0x0002eea5) ituss_sks_pane_t

0x76d2,	// (0x000266c5) indicator_nsta_pane_cp_g1

0x76da,	// (0x000266cd) indicator_nsta_pane_cp_g2

0x76e2,	// (0x000266d5) indicator_nsta_pane_cp_g3

0x76d2,	// (0x000266c5) indicator_nsta_pane_cp_g4

0x76da,	// (0x000266cd) indicator_nsta_pane_cp_g5

0x76e2,	// (0x000266d5) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002ea81) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0002e1d7) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0002e1d7) cell_graphic2_pane_t2

0x0001,

0x0192,	// (0x0001f185) cell_graphic2_pane_t_ParamLimits

0x0192,	// (0x0001f185) cell_graphic2_pane_t

0xf218,	// (0x0002e20b) cell_graphic2_control_pane_t1

0xd5c1,	// (0x0002c5b4) signal_pane_g3_ParamLimits

0xd5c1,	// (0x0002c5b4) signal_pane_g3

0xd5d5,	// (0x0002c5c8) signal_pane_g4_ParamLimits

0xd5d5,	// (0x0002c5c8) signal_pane_g4

0xaca8,	// (0x00029c9b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaca8,	// (0x00029c9b) cell_ai5_widget_list_row_pane_t3

0xadd1,	// (0x00029dc4) cell_ituss_key_pane_t1_ParamLimits

0xadd1,	// (0x00029dc4) cell_ituss_key_pane_t1

0x5742,	// (0x00024735) form_field_data_wide_pane_vc_t2_ParamLimits

0x5742,	// (0x00024735) form_field_data_wide_pane_vc_t2

0x5756,	// (0x00024749) form_field_data_wide_pane_vc_t3_ParamLimits

0x5756,	// (0x00024749) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002e7f0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002e7f0) form_field_data_wide_pane_vc_t

0x739a,	// (0x0002638d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x739a,	// (0x0002638d) form_field_slider_wide_pane_vc_t3

0x7478,	// (0x0002646b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7478,	// (0x0002646b) form_field_popup_wide_pane_vc_t2

0x748f,	// (0x00026482) form_field_popup_wide_pane_vc_t3_ParamLimits

0x748f,	// (0x00026482) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002ea70) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002ea70) form_field_popup_wide_pane_vc_t

0xcf46,	// (0x0002bf39) aid_fshwr2_btn_pane_ParamLimits

0xcf57,	// (0x0002bf4a) aid_fshwr2_syb_pane_ParamLimits

0xcf68,	// (0x0002bf5b) aid_fshwr2_txt_pane_ParamLimits

0x414d,	// (0x00023140) fshwr2_bg_pane_ParamLimits

0xcf74,	// (0x0002bf67) fshwr2_func_candi_pane_ParamLimits

0xcf93,	// (0x0002bf86) fshwr2_hwr_syb_pane_ParamLimits

0xcfae,	// (0x0002bfa1) fshwr2_icf_pane_ParamLimits

0x101e,	// (0x00020011) list_double_graphic_pane_vc_g4_ParamLimits

0x101e,	// (0x00020011) list_double_graphic_pane_vc_g4

0x36ea,	// (0x000226dd) cell_ituss_key_pane_g3_ParamLimits

0x36ea,	// (0x000226dd) cell_ituss_key_pane_g3

0x3792,	// (0x00022785) cell_ituss_key_t5_ParamLimits

0x3792,	// (0x00022785) cell_ituss_key_t5

0xf4c9,	// (0x0002e4bc) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
