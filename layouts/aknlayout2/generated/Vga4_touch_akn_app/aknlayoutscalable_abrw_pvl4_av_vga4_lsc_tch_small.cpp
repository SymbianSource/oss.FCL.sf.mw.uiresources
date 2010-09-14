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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000360f3 };

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
0x9533,	// (0x0003f626) Screen

0x953f,	// (0x0003f632) application_window_ParamLimits

0x953f,	// (0x0003f632) application_window

0xb8c6,	// (0x000419b9) screen_g1

0x9577,	// (0x0003f66a) area_bottom_pane_ParamLimits

0x9577,	// (0x0003f66a) area_bottom_pane

0xebe6,	// (0x00044cd9) area_top_pane_ParamLimits

0xebe6,	// (0x00044cd9) area_top_pane

0xec84,	// (0x00044d77) main_pane_ParamLimits

0xec84,	// (0x00044d77) main_pane

0xb8d0,	// (0x000419c3) misc_graphics

0xc16b,	// (0x0004225e) battery_pane_ParamLimits

0xc16b,	// (0x0004225e) battery_pane

0x3810,	// (0x00039903) bg_status_flat_pane_g8

0x3818,	// (0x0003990b) bg_status_flat_pane_g9

0x2c10,	// (0x00038d03) context_pane_ParamLimits

0x2c10,	// (0x00038d03) context_pane

0xc2e2,	// (0x000423d5) navi_pane_ParamLimits

0xc2e2,	// (0x000423d5) navi_pane

0xc36c,	// (0x0004245f) signal_pane_ParamLimits

0xc36c,	// (0x0004245f) signal_pane

0x0008,

0xf84f,	// (0x00045942) bg_status_flat_pane_g

0xc3fc,	// (0x000424ef) status_pane_g1_ParamLimits

0xc3fc,	// (0x000424ef) status_pane_g1

0xc412,	// (0x00042505) status_pane_g2_ParamLimits

0xc412,	// (0x00042505) status_pane_g2

0x2e49,	// (0x00038f3c) status_pane_g3_ParamLimits

0x2e49,	// (0x00038f3c) status_pane_g3

0x0004,

0xf77b,	// (0x0004586e) status_pane_g_ParamLimits

0xf77b,	// (0x0004586e) status_pane_g

0xc41e,	// (0x00042511) title_pane_ParamLimits

0xc41e,	// (0x00042511) title_pane

0xc485,	// (0x00042578) uni_indicator_pane_ParamLimits

0xc485,	// (0x00042578) uni_indicator_pane

0x2a7a,	// (0x00038b6d) bg_list_pane_ParamLimits

0x2a7a,	// (0x00038b6d) bg_list_pane

0xa6ef,	// (0x000407e2) find_pane

0x3044,	// (0x00039137) listscroll_app_pane_ParamLimits

0x3044,	// (0x00039137) listscroll_app_pane

0x2aa6,	// (0x00038b99) listscroll_form_pane

0xa6f7,	// (0x000407ea) listscroll_gen_pane_ParamLimits

0xa6f7,	// (0x000407ea) listscroll_gen_pane

0x03ee,	// (0x000364e1) listscroll_set_pane

0x43ad,	// (0x0003a4a0) main_idle_act_pane

0x2773,	// (0x00038866) main_idle_trad_pane

0x2773,	// (0x00038866) main_list_empty_pane

0x2a9a,	// (0x00038b8d) main_midp_pane

0x2ac0,	// (0x00038bb3) main_pane_g1_ParamLimits

0x2ac0,	// (0x00038bb3) main_pane_g1

0xa70b,	// (0x000407fe) popup_ai_message_window_ParamLimits

0xa70b,	// (0x000407fe) popup_ai_message_window

0xa7ab,	// (0x0004089e) popup_fep_china_uni_window_ParamLimits

0xa7ab,	// (0x0004089e) popup_fep_china_uni_window

0x0518,	// (0x0003660b) popup_fep_japan_candidate_window_ParamLimits

0x0518,	// (0x0003660b) popup_fep_japan_candidate_window

0x0542,	// (0x00036635) popup_fep_japan_predictive_window_ParamLimits

0x0542,	// (0x00036635) popup_fep_japan_predictive_window

0xa80b,	// (0x000408fe) popup_find_window

0xa828,	// (0x0004091b) popup_grid_graphic_window_ParamLimits

0xa828,	// (0x0004091b) popup_grid_graphic_window

0x05b5,	// (0x000366a8) popup_large_graphic_colour_window

0xa8d2,	// (0x000409c5) popup_menu_window_ParamLimits

0xa8d2,	// (0x000409c5) popup_menu_window

0xaac2,	// (0x00040bb5) popup_note_image_window

0xaa82,	// (0x00040b75) popup_note_wait_window_ParamLimits

0xaa82,	// (0x00040b75) popup_note_wait_window

0xaada,	// (0x00040bcd) popup_note_window_ParamLimits

0xaada,	// (0x00040bcd) popup_note_window

0xab88,	// (0x00040c7b) popup_query_code_window_ParamLimits

0xab88,	// (0x00040c7b) popup_query_code_window

0x0821,	// (0x00036914) popup_query_data_code_window_ParamLimits

0x0821,	// (0x00036914) popup_query_data_code_window

0xabc8,	// (0x00040cbb) popup_query_data_window_ParamLimits

0xabc8,	// (0x00040cbb) popup_query_data_window

0xac5c,	// (0x00040d4f) popup_query_sat_info_window_ParamLimits

0xac5c,	// (0x00040d4f) popup_query_sat_info_window

0xad05,	// (0x00040df8) popup_snote_single_graphic_window_ParamLimits

0xad05,	// (0x00040df8) popup_snote_single_graphic_window

0xad05,	// (0x00040df8) popup_snote_single_text_window_ParamLimits

0xad05,	// (0x00040df8) popup_snote_single_text_window

0x08bc,	// (0x000369af) popup_sub_window_general

0x0a02,	// (0x00036af5) popup_window_general_ParamLimits

0x0a02,	// (0x00036af5) popup_window_general

0x2ace,	// (0x00038bc1) power_save_pane

0xa54b,	// (0x0004063e) control_pane_g1_ParamLimits

0xa54b,	// (0x0004063e) control_pane_g1

0xa574,	// (0x00040667) control_pane_g2_ParamLimits

0xa574,	// (0x00040667) control_pane_g2

0x2a3d,	// (0x00038b30) control_pane_g3_ParamLimits

0x2a3d,	// (0x00038b30) control_pane_g3

0x0007,

0xf763,	// (0x00045856) control_pane_g_ParamLimits

0xf763,	// (0x00045856) control_pane_g

0xa5da,	// (0x000406cd) control_pane_t1_ParamLimits

0xa5da,	// (0x000406cd) control_pane_t1

0xa642,	// (0x00040735) control_pane_t2_ParamLimits

0xa642,	// (0x00040735) control_pane_t2

0x0002,

0xf774,	// (0x00045867) control_pane_t_ParamLimits

0xf774,	// (0x00045867) control_pane_t

0xa4a4,	// (0x00040597) navi_navi_volume_pane_cp1

0xa4ac,	// (0x0004059f) status_small_icon_pane

0x2972,	// (0x00038a65) status_small_pane_g1_ParamLimits

0x2972,	// (0x00038a65) status_small_pane_g1

0xa4b4,	// (0x000405a7) status_small_pane_g2_ParamLimits

0xa4b4,	// (0x000405a7) status_small_pane_g2

0xa4c0,	// (0x000405b3) status_small_pane_g3_ParamLimits

0xa4c0,	// (0x000405b3) status_small_pane_g3

0xa4cc,	// (0x000405bf) status_small_pane_g4_ParamLimits

0xa4cc,	// (0x000405bf) status_small_pane_g4

0xa4d8,	// (0x000405cb) status_small_pane_g5_ParamLimits

0xa4d8,	// (0x000405cb) status_small_pane_g5

0xa4e6,	// (0x000405d9) status_small_pane_g6_ParamLimits

0xa4e6,	// (0x000405d9) status_small_pane_g6

0x0007,

0xf752,	// (0x00045845) status_small_pane_g_ParamLimits

0xf752,	// (0x00045845) status_small_pane_g

0xa515,	// (0x00040608) status_small_pane_t1

0xa537,	// (0x0004062a) status_small_wait_pane_ParamLimits

0xa537,	// (0x0004062a) status_small_wait_pane

0xa28a,	// (0x0004037d) aid_levels_signal_ParamLimits

0xa28a,	// (0x0004037d) aid_levels_signal

0xa2a2,	// (0x00040395) signal_pane_g1_ParamLimits

0xa2a2,	// (0x00040395) signal_pane_g1

0xa2bd,	// (0x000403b0) signal_pane_g2_ParamLimits

0xa2bd,	// (0x000403b0) signal_pane_g2

0x0003,

0xf6e3,	// (0x000457d6) signal_pane_g_ParamLimits

0xf6e3,	// (0x000457d6) signal_pane_g

0xf4ab,	// (0x0004559e) context_pane_g1

0x9763,	// (0x0003f856) title_pane_g1

0x97a6,	// (0x0003f899) title_pane_t1

0xb8e6,	// (0x000419d9) title_pane_t2

0xb90c,	// (0x000419ff) title_pane_t3

0x0002,

0xf532,	// (0x00045625) title_pane_t

0xc4ad,	// (0x000425a0) aid_levels_battery_ParamLimits

0xc4ad,	// (0x000425a0) aid_levels_battery

0xc4c9,	// (0x000425bc) battery_pane_g1_ParamLimits

0xc4c9,	// (0x000425bc) battery_pane_g1

0xc4e6,	// (0x000425d9) battery_pane_g2_ParamLimits

0xc4e6,	// (0x000425d9) battery_pane_g2

0x0001,

0xf786,	// (0x00045879) battery_pane_g_ParamLimits

0xf786,	// (0x00045879) battery_pane_g

0xc6e7,	// (0x000427da) uni_indicator_pane_g1

0xc6fd,	// (0x000427f0) uni_indicator_pane_g2

0xc713,	// (0x00042806) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000459ea) uni_indicator_pane_g

0x25d6,	// (0x000386c9) navi_icon_pane_ParamLimits

0x25d6,	// (0x000386c9) navi_icon_pane

0x2512,	// (0x00038605) navi_midp_pane

0x25f2,	// (0x000386e5) navi_navi_pane

0x25fc,	// (0x000386ef) navi_text_pane_ParamLimits

0x25fc,	// (0x000386ef) navi_text_pane

0xb8c6,	// (0x000419b9) status_small_wait_pane_g1

0xbc2d,	// (0x00041d20) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000459e5) status_small_wait_pane_g

0xc686,	// (0x00042779) navi_navi_icon_text_pane

0xc68e,	// (0x00042781) navi_navi_pane_g1_ParamLimits

0xc68e,	// (0x00042781) navi_navi_pane_g1

0xc6a0,	// (0x00042793) navi_navi_pane_g2_ParamLimits

0xc6a0,	// (0x00042793) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000459b3) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000459b3) navi_navi_pane_g

0x3e99,	// (0x00039f8c) navi_navi_tabs_pane

0xc6b2,	// (0x000427a5) navi_navi_text_pane

0xc686,	// (0x00042779) navi_navi_volume_pane

0xc674,	// (0x00042767) navi_text_pane_t1

0xc668,	// (0x0004275b) navi_icon_pane_g1

0x3d90,	// (0x00039e83) navi_navi_text_pane_t1

0xb013,	// (0x00041106) navi_navi_volume_pane_g1

0xb01b,	// (0x0004110e) volume_small_pane

0xc5c4,	// (0x000426b7) navi_navi_icon_text_pane_g1

0xc5cc,	// (0x000426bf) navi_navi_icon_text_pane_t1

0x25f2,	// (0x000386e5) navi_tabs_2_long_pane

0x25f2,	// (0x000386e5) navi_tabs_2_pane

0x25f2,	// (0x000386e5) navi_tabs_3_long_pane

0x25f2,	// (0x000386e5) navi_tabs_3_pane

0x25f2,	// (0x000386e5) navi_tabs_4_pane

0xaff3,	// (0x000410e6) tabs_2_active_pane_ParamLimits

0xaff3,	// (0x000410e6) tabs_2_active_pane

0xb003,	// (0x000410f6) tabs_2_passive_pane_ParamLimits

0xb003,	// (0x000410f6) tabs_2_passive_pane

0xafc1,	// (0x000410b4) tabs_3_active_pane_ParamLimits

0xafc1,	// (0x000410b4) tabs_3_active_pane

0xafd1,	// (0x000410c4) tabs_3_passive_pane_ParamLimits

0xafd1,	// (0x000410c4) tabs_3_passive_pane

0xafe2,	// (0x000410d5) tabs_3_passive_pane_cp_ParamLimits

0xafe2,	// (0x000410d5) tabs_3_passive_pane_cp

0xaf7d,	// (0x00041070) tabs_4_active_pane_ParamLimits

0xaf7d,	// (0x00041070) tabs_4_active_pane

0xaf8e,	// (0x00041081) tabs_4_passive_pane_ParamLimits

0xaf8e,	// (0x00041081) tabs_4_passive_pane

0xaf9f,	// (0x00041092) tabs_4_passive_pane_cp_ParamLimits

0xaf9f,	// (0x00041092) tabs_4_passive_pane_cp

0xafb0,	// (0x000410a3) tabs_4_passive_pane_cp2_ParamLimits

0xafb0,	// (0x000410a3) tabs_4_passive_pane_cp2

0xaf59,	// (0x0004104c) tabs_2_long_active_pane_ParamLimits

0xaf59,	// (0x0004104c) tabs_2_long_active_pane

0xaf6b,	// (0x0004105e) tabs_2_long_passive_pane_ParamLimits

0xaf6b,	// (0x0004105e) tabs_2_long_passive_pane

0xaf0e,	// (0x00041001) tabs_3_long_active_pane_ParamLimits

0xaf0e,	// (0x00041001) tabs_3_long_active_pane

0xaf27,	// (0x0004101a) tabs_3_long_passive_pane_ParamLimits

0xaf27,	// (0x0004101a) tabs_3_long_passive_pane

0xaf40,	// (0x00041033) tabs_3_long_passive_pane_cp_ParamLimits

0xaf40,	// (0x00041033) tabs_3_long_passive_pane_cp

0x0b84,	// (0x00036c77) volume_small_pane_g1

0xaebd,	// (0x00040fb0) volume_small_pane_g2

0xaec6,	// (0x00040fb9) volume_small_pane_g3

0xaecf,	// (0x00040fc2) volume_small_pane_g4

0xaed8,	// (0x00040fcb) volume_small_pane_g5

0xaee1,	// (0x00040fd4) volume_small_pane_g6

0xaeea,	// (0x00040fdd) volume_small_pane_g7

0xaef3,	// (0x00040fe6) volume_small_pane_g8

0xaefc,	// (0x00040fef) volume_small_pane_g9

0xaf05,	// (0x00040ff8) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0004597f) volume_small_pane_g

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp2_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp2

0x9832,	// (0x0003f925) tabs_3_active_pane_g1

0x983a,	// (0x0003f92d) tabs_3_active_pane_t1

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp2_ParamLimits

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp2

0x9832,	// (0x0003f925) tabs_3_passive_pane_g1

0x983a,	// (0x0003f92d) tabs_3_passive_pane_t1

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp3_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp3

0x984c,	// (0x0003f93f) tabs_4_active_pane_g1

0x9854,	// (0x0003f947) tabs_4_active_pane_t1

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp3_ParamLimits

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp3

0x984c,	// (0x0003f93f) tabs_4_1_passive_pane_g1

0x9854,	// (0x0003f947) tabs_4_1_passive_pane_t1

0x2a9a,	// (0x00038b8d) list_highlight_pane_cp2

0xc7a6,	// (0x00042899) list_set_pane_ParamLimits

0xc7a6,	// (0x00042899) list_set_pane

0xc868,	// (0x0004295b) main_pane_set_t1_ParamLimits

0xc868,	// (0x0004295b) main_pane_set_t1

0xc888,	// (0x0004297b) main_pane_set_t2_ParamLimits

0xc888,	// (0x0004297b) main_pane_set_t2

0xc89c,	// (0x0004298f) main_pane_set_t3_ParamLimits

0xc89c,	// (0x0004298f) main_pane_set_t3

0xc8b0,	// (0x000429a3) main_pane_set_t4_ParamLimits

0xc8b0,	// (0x000429a3) main_pane_set_t4

0x0003,

0xf95c,	// (0x00045a4f) main_pane_set_t_ParamLimits

0xf95c,	// (0x00045a4f) main_pane_set_t

0xc8c4,	// (0x000429b7) setting_code_pane

0x44fb,	// (0x0003a5ee) setting_slider_graphic_pane

0x44fb,	// (0x0003a5ee) setting_slider_pane

0x44fb,	// (0x0003a5ee) setting_text_pane

0x44fb,	// (0x0003a5ee) setting_volume_pane

0xed93,	// (0x00044e86) volume_set_pane

0xb92c,	// (0x00041a1f) bg_set_opt_pane_cp

0xed9d,	// (0x00044e90) setting_slider_pane_t1

0xedb6,	// (0x00044ea9) setting_slider_pane_t2

0xedd0,	// (0x00044ec3) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004562c) setting_slider_pane_t

0xede8,	// (0x00044edb) slider_set_pane

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp2

0xb93a,	// (0x00041a2d) setting_slider_graphic_pane_g1

0xedfe,	// (0x00044ef1) setting_slider_graphic_pane_t1

0xee0e,	// (0x00044f01) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00045633) setting_slider_graphic_pane_t

0xee1e,	// (0x00044f11) slider_set_pane_cp

0xb8d0,	// (0x000419c3) input_focus_pane_cp1

0x4394,	// (0x0003a487) list_set_text_pane

0xb8c6,	// (0x000419b9) setting_text_pane_g1

0xb8d0,	// (0x000419c3) input_focus_pane_cp2

0xb8c6,	// (0x000419b9) setting_code_pane_g1

0xb943,	// (0x00041a36) setting_code_pane_t1

0xd2f2,	// (0x000433e5) set_text_pane_t1_ParamLimits

0xd2f2,	// (0x000433e5) set_text_pane_t1

0xbfc6,	// (0x000420b9) set_opt_bg_pane_g1

0xbfce,	// (0x000420c1) set_opt_bg_pane_g2

0x436c,	// (0x0003a45f) set_opt_bg_pane_g3

0xbfde,	// (0x000420d1) set_opt_bg_pane_g4

0xbfe6,	// (0x000420d9) set_opt_bg_pane_g5

0xbfee,	// (0x000420e1) set_opt_bg_pane_g6

0x4376,	// (0x0003a469) set_opt_bg_pane_g7

0x4380,	// (0x0003a473) set_opt_bg_pane_g8

0x438a,	// (0x0003a47d) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00045a3c) set_opt_bg_pane_g

0x435f,	// (0x0003a452) slider_set_pane_g1

0x0d90,	// (0x00036e83) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00045a2d) slider_set_pane_g

0x0cf0,	// (0x00036de3) volume_set_pane_g1

0x0cfa,	// (0x00036ded) volume_set_pane_g2

0x0d04,	// (0x00036df7) volume_set_pane_g3

0x0d0e,	// (0x00036e01) volume_set_pane_g4

0x0d18,	// (0x00036e0b) volume_set_pane_g5

0x0d22,	// (0x00036e15) volume_set_pane_g6

0x0d2c,	// (0x00036e1f) volume_set_pane_g7

0x0d36,	// (0x00036e29) volume_set_pane_g8

0x0d40,	// (0x00036e33) volume_set_pane_g9

0x0d4a,	// (0x00036e3d) volume_set_pane_g10

0x0009,

0xf912,	// (0x00045a05) volume_set_pane_g

0x9866,	// (0x0003f959) indicator_pane_ParamLimits

0x9866,	// (0x0003f959) indicator_pane

0x9892,	// (0x0003f985) main_idle_pane_g2_ParamLimits

0x9892,	// (0x0003f985) main_idle_pane_g2

0x98ca,	// (0x0003f9bd) main_pane_idle_g1_ParamLimits

0x98ca,	// (0x0003f9bd) main_pane_idle_g1

0xb951,	// (0x00041a44) popup_clock_digital_analogue_window_ParamLimits

0xb951,	// (0x00041a44) popup_clock_digital_analogue_window

0x98f4,	// (0x0003f9e7) soft_indicator_pane_ParamLimits

0x98f4,	// (0x0003f9e7) soft_indicator_pane

0x9910,	// (0x0003fa03) wallpaper_pane_ParamLimits

0x9910,	// (0x0003fa03) wallpaper_pane

0xb8c6,	// (0x000419b9) wallpaper_pane_g1

0x9922,	// (0x0003fa15) indicator_pane_g1_ParamLimits

0x9922,	// (0x0003fa15) indicator_pane_g1

0x479f,	// (0x0003a892) navi_navi_icon_text_pane_srt_g1

0xb97f,	// (0x00041a72) soft_indicator_pane_t1

0xb999,	// (0x00041a8c) aid_ps_area_pane

0x993b,	// (0x0003fa2e) aid_ps_clock_pane

0xb9aa,	// (0x00041a9d) aid_ps_indicator_pane

0xb9b6,	// (0x00041aa9) indicator_ps_pane_ParamLimits

0xb9b6,	// (0x00041aa9) indicator_ps_pane

0xb9c5,	// (0x00041ab8) power_save_pane_g1_ParamLimits

0xb9c5,	// (0x00041ab8) power_save_pane_g1

0xb9d1,	// (0x00041ac4) power_save_pane_g2_ParamLimits

0xb9d1,	// (0x00041ac4) power_save_pane_g2

0xebc6,	// (0x00044cb9) aid_navinavi_width_pane

0xb999,	// (0x00041a8c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00045638) power_save_pane_g_ParamLimits

0xf545,	// (0x00045638) power_save_pane_g

0xb9df,	// (0x00041ad2) power_save_pane_t1_ParamLimits

0xb9df,	// (0x00041ad2) power_save_pane_t1

0x993b,	// (0x0003fa2e) aid_ps_clock_pane_ParamLimits

0xb9aa,	// (0x00041a9d) aid_ps_indicator_pane_ParamLimits

0xb9f1,	// (0x00041ae4) power_save_pane_t4_ParamLimits

0xb9f1,	// (0x00041ae4) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004563d) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004563d) power_save_pane_t

0xba1b,	// (0x00041b0e) power_save_t3_ParamLimits

0xba1b,	// (0x00041b0e) power_save_t3

0xba06,	// (0x00041af9) power_save_t2_ParamLimits

0xba06,	// (0x00041af9) power_save_t2

0xba30,	// (0x00041b23) indicator_ps_pane_g1

0x9949,	// (0x0003fa3c) ai_gene_pane_ParamLimits

0x9949,	// (0x0003fa3c) ai_gene_pane

0x9960,	// (0x0003fa53) ai_links_pane_ParamLimits

0x9960,	// (0x0003fa53) ai_links_pane

0x9978,	// (0x0003fa6b) indicator_pane_cp1_ParamLimits

0x9978,	// (0x0003fa6b) indicator_pane_cp1

0x9987,	// (0x0003fa7a) main_pane_idle_g1_cp_ParamLimits

0x9987,	// (0x0003fa7a) main_pane_idle_g1_cp

0xba39,	// (0x00041b2c) popup_ai_links_title_window

0x999f,	// (0x0003fa92) soft_indicator_pane_cp1_ParamLimits

0x999f,	// (0x0003fa92) soft_indicator_pane_cp1

0x4148,	// (0x0003a23b) ai_links_pane_g1

0x4151,	// (0x0003a244) grid_ai_links_pane

0xc6de,	// (0x000427d1) ai_gene_pane_1

0x4136,	// (0x0003a229) ai_gene_pane_2

0x413f,	// (0x0003a232) list_highlight_pane_cp4

0xc6ba,	// (0x000427ad) cell_ai_link_pane_ParamLimits

0xc6ba,	// (0x000427ad) cell_ai_link_pane

0x4105,	// (0x0003a1f8) cell_ai_link_pane_g1

0xbc2d,	// (0x00041d20) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000459e0) cell_ai_link_pane_g

0xb8d0,	// (0x000419c3) grid_highlight_cp2

0xb8d0,	// (0x000419c3) bg_popup_sub_pane_cp1

0xba50,	// (0x00041b43) popup_ai_links_title_window_t1

0x4051,	// (0x0003a144) ai_gene_pane_1_g1_ParamLimits

0x4051,	// (0x0003a144) ai_gene_pane_1_g1

0x405d,	// (0x0003a150) ai_gene_pane_1_g2_ParamLimits

0x405d,	// (0x0003a150) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000459d6) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000459d6) ai_gene_pane_1_g

0x406a,	// (0x0003a15d) ai_gene_pane_1_t1_ParamLimits

0x406a,	// (0x0003a15d) ai_gene_pane_1_t1

0x409e,	// (0x0003a191) grid_ai_soft_ind_pane

0x403c,	// (0x0003a12f) ai_gene_pane_2_t1_ParamLimits

0x403c,	// (0x0003a12f) ai_gene_pane_2_t1

0x99b3,	// (0x0003faa6) main_pane_empty_t1_ParamLimits

0x99b3,	// (0x0003faa6) main_pane_empty_t1

0x99cb,	// (0x0003fabe) main_pane_empty_t2_ParamLimits

0x99cb,	// (0x0003fabe) main_pane_empty_t2

0x99e0,	// (0x0003fad3) main_pane_empty_t3_ParamLimits

0x99e0,	// (0x0003fad3) main_pane_empty_t3

0x99f2,	// (0x0003fae5) main_pane_empty_t4_ParamLimits

0x99f2,	// (0x0003fae5) main_pane_empty_t4

0x9a04,	// (0x0003faf7) main_pane_empty_t5_ParamLimits

0x9a04,	// (0x0003faf7) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00045642) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00045642) main_pane_empty_t

0xc055,	// (0x00042148) bg_popup_window_pane_ParamLimits

0xc055,	// (0x00042148) bg_popup_window_pane

0x3d9e,	// (0x00039e91) find_popup_pane_cp2_ParamLimits

0x3d9e,	// (0x00039e91) find_popup_pane_cp2

0x3daa,	// (0x00039e9d) heading_pane_ParamLimits

0x3daa,	// (0x00039e9d) heading_pane

0xb8d0,	// (0x000419c3) bg_popup_sub_pane

0xc5e9,	// (0x000426dc) bg_popup_window_pane_g1_ParamLimits

0xc5e9,	// (0x000426dc) bg_popup_window_pane_g1

0xc5f8,	// (0x000426eb) bg_popup_window_pane_g2_ParamLimits

0xc5f8,	// (0x000426eb) bg_popup_window_pane_g2

0xc604,	// (0x000426f7) bg_popup_window_pane_g3_ParamLimits

0xc604,	// (0x000426f7) bg_popup_window_pane_g3

0xc610,	// (0x00042703) bg_popup_window_pane_g4_ParamLimits

0xc610,	// (0x00042703) bg_popup_window_pane_g4

0xc61f,	// (0x00042712) bg_popup_window_pane_g5_ParamLimits

0xc61f,	// (0x00042712) bg_popup_window_pane_g5

0xc62f,	// (0x00042722) bg_popup_window_pane_g6_ParamLimits

0xc62f,	// (0x00042722) bg_popup_window_pane_g6

0xc63b,	// (0x0004272e) bg_popup_window_pane_g7_ParamLimits

0xc63b,	// (0x0004272e) bg_popup_window_pane_g7

0xc64a,	// (0x0004273d) bg_popup_window_pane_g8_ParamLimits

0xc64a,	// (0x0004273d) bg_popup_window_pane_g8

0xc659,	// (0x0004274c) bg_popup_window_pane_g9_ParamLimits

0xc659,	// (0x0004274c) bg_popup_window_pane_g9

0x3d84,	// (0x00039e77) bg_popup_window_pane_g10_ParamLimits

0x3d84,	// (0x00039e77) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0004599e) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0004599e) bg_popup_window_pane_g

0x3cad,	// (0x00039da0) bg_popup_heading_pane_ParamLimits

0x3cad,	// (0x00039da0) bg_popup_heading_pane

0x0ebb,	// (0x00036fae) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ebb,	// (0x00036fae) tabs_4_passive_pane_cp_srt

0x0ecd,	// (0x00036fc0) tabs_4_passive_pane_srt_ParamLimits

0x3cc1,	// (0x00039db4) heading_pane_g2

0x0ecd,	// (0x00036fc0) tabs_4_passive_pane_srt

0x3044,	// (0x00039137) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3044,	// (0x00039137) bg_passive_tab_pane_cp3_srt

0x3cc9,	// (0x00039dbc) heading_pane_t1_ParamLimits

0x3cc9,	// (0x00039dbc) heading_pane_t1

0x3ce0,	// (0x00039dd3) heading_pane_t2_ParamLimits

0x3ce0,	// (0x00039dd3) heading_pane_t2

0x0001,

0xf8a6,	// (0x00045999) heading_pane_t_ParamLimits

0xf8a6,	// (0x00045999) heading_pane_t

0x37d8,	// (0x000398cb) bg_popup_heading_pane_g1

0x3887,	// (0x0003997a) bg_popup_heading_pane_g2

0x3891,	// (0x00039984) bg_popup_heading_pane_g3

0x389b,	// (0x0003998e) bg_popup_heading_pane_g4

0x38a5,	// (0x00039998) bg_popup_heading_pane_g5

0x38af,	// (0x000399a2) bg_popup_heading_pane_g6

0x38b7,	// (0x000399aa) bg_popup_heading_pane_g7

0x38bf,	// (0x000399b2) bg_popup_heading_pane_g8

0x38c9,	// (0x000399bc) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00045955) bg_popup_heading_pane_g

0x2fd0,	// (0x000390c3) bg_popup_sub_pane_g1

0x2fe0,	// (0x000390d3) bg_popup_sub_pane_g2

0x2fd8,	// (0x000390cb) bg_popup_sub_pane_g3

0x2ff0,	// (0x000390e3) bg_popup_sub_pane_g4

0x2fe8,	// (0x000390db) bg_popup_sub_pane_g5

0x2ff8,	// (0x000390eb) bg_popup_sub_pane_g6

0x3000,	// (0x000390f3) bg_popup_sub_pane_g7

0x3010,	// (0x00039103) bg_popup_sub_pane_g8

0x3008,	// (0x000390fb) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0004592f) bg_popup_sub_pane_g

0xb91e,	// (0x00041a11) bg_popup_window_pane_cp5_ParamLimits

0xb91e,	// (0x00041a11) bg_popup_window_pane_cp5

0xba6d,	// (0x00041b60) popup_note_window_g1_ParamLimits

0xba6d,	// (0x00041b60) popup_note_window_g1

0xba79,	// (0x00041b6c) popup_note_window_t1_ParamLimits

0xba79,	// (0x00041b6c) popup_note_window_t1

0xba8f,	// (0x00041b82) popup_note_window_t2_ParamLimits

0xba8f,	// (0x00041b82) popup_note_window_t2

0xbaa5,	// (0x00041b98) popup_note_window_t3_ParamLimits

0xbaa5,	// (0x00041b98) popup_note_window_t3

0xbabb,	// (0x00041bae) popup_note_window_t4_ParamLimits

0xbabb,	// (0x00041bae) popup_note_window_t4

0xbae3,	// (0x00041bd6) popup_note_window_t5_ParamLimits

0xbae3,	// (0x00041bd6) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004564d) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004564d) popup_note_window_t

0xbb2d,	// (0x00041c20) bg_popup_window_pane_cp6_ParamLimits

0xbb2d,	// (0x00041c20) bg_popup_window_pane_cp6

0x3754,	// (0x00039847) popup_note_image_window_g1_ParamLimits

0x3754,	// (0x00039847) popup_note_image_window_g1

0x3760,	// (0x00039853) popup_note_image_window_g2_ParamLimits

0x3760,	// (0x00039853) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00045923) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00045923) popup_note_image_window_g

0x3779,	// (0x0003986c) popup_note_image_window_t1_ParamLimits

0x3779,	// (0x0003986c) popup_note_image_window_t1

0x3792,	// (0x00039885) popup_note_image_window_t2_ParamLimits

0x3792,	// (0x00039885) popup_note_image_window_t2

0x37ab,	// (0x0003989e) popup_note_image_window_t3_ParamLimits

0x37ab,	// (0x0003989e) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00045928) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00045928) popup_note_image_window_t

0x3614,	// (0x00039707) bg_popup_window_pane_cp7_ParamLimits

0x3614,	// (0x00039707) bg_popup_window_pane_cp7

0x3644,	// (0x00039737) popup_note_wait_window_g1_ParamLimits

0x3644,	// (0x00039737) popup_note_wait_window_g1

0x3650,	// (0x00039743) popup_note_wait_window_g2_ParamLimits

0x3650,	// (0x00039743) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00045911) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00045911) popup_note_wait_window_g

0x3668,	// (0x0003975b) popup_note_wait_window_t1_ParamLimits

0x3668,	// (0x0003975b) popup_note_wait_window_t1

0x368f,	// (0x00039782) popup_note_wait_window_t2_ParamLimits

0x368f,	// (0x00039782) popup_note_wait_window_t2

0x36ad,	// (0x000397a0) popup_note_wait_window_t3_ParamLimits

0x36ad,	// (0x000397a0) popup_note_wait_window_t3

0x36c0,	// (0x000397b3) popup_note_wait_window_t4_ParamLimits

0x36c0,	// (0x000397b3) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00045918) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00045918) popup_note_wait_window_t

0x36e5,	// (0x000397d8) wait_bar_pane_ParamLimits

0x36e5,	// (0x000397d8) wait_bar_pane

0xb8d0,	// (0x000419c3) wait_anim_pane

0xb8d0,	// (0x000419c3) wait_border_pane

0xb8c6,	// (0x000419b9) wait_anim_pane_g1

0xb8c6,	// (0x000419b9) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000457d1) wait_anim_pane_g

0x35b8,	// (0x000396ab) wait_border_pane_g1

0x35c3,	// (0x000396b6) wait_border_pane_g2

0x35cc,	// (0x000396bf) wait_border_pane_g3

0x0002,

0xf817,	// (0x0004590a) wait_border_pane_g

0x3422,	// (0x00039515) bg_popup_window_pane_cp16_ParamLimits

0x3422,	// (0x00039515) bg_popup_window_pane_cp16

0x3522,	// (0x00039615) indicator_popup_pane_cp4_ParamLimits

0x3522,	// (0x00039615) indicator_popup_pane_cp4

0x3536,	// (0x00039629) popup_query_data_window_t1_ParamLimits

0x3536,	// (0x00039629) popup_query_data_window_t1

0x3548,	// (0x0003963b) popup_query_data_window_t2_ParamLimits

0x3548,	// (0x0003963b) popup_query_data_window_t2

0x3561,	// (0x00039654) popup_query_data_window_t3_ParamLimits

0x3561,	// (0x00039654) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00045903) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00045903) popup_query_data_window_t

0x357b,	// (0x0003966e) query_popup_data_pane_ParamLimits

0x357b,	// (0x0003966e) query_popup_data_pane

0x358f,	// (0x00039682) query_popup_data_pane_cp1_ParamLimits

0x358f,	// (0x00039682) query_popup_data_pane_cp1

0x3422,	// (0x00039515) bg_popup_window_pane_cp10_ParamLimits

0x3422,	// (0x00039515) bg_popup_window_pane_cp10

0x3454,	// (0x00039547) indicator_popup_pane_ParamLimits

0x3454,	// (0x00039547) indicator_popup_pane

0x3476,	// (0x00039569) popup_query_code_window_t1_ParamLimits

0x3476,	// (0x00039569) popup_query_code_window_t1

0x3490,	// (0x00039583) popup_query_code_window_t2_ParamLimits

0x3490,	// (0x00039583) popup_query_code_window_t2

0x34d9,	// (0x000395cc) popup_query_code_window_t3_ParamLimits

0x34d9,	// (0x000395cc) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000458fc) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000458fc) popup_query_code_window_t

0x3508,	// (0x000395fb) query_popup_pane_ParamLimits

0x3508,	// (0x000395fb) query_popup_pane

0xbb2d,	// (0x00041c20) bg_popup_window_pane_cp15_ParamLimits

0xbb2d,	// (0x00041c20) bg_popup_window_pane_cp15

0xbb4d,	// (0x00041c40) indicator_popup_pane_cp1_ParamLimits

0xbb4d,	// (0x00041c40) indicator_popup_pane_cp1

0xbb60,	// (0x00041c53) indicator_popup_pane_cp2_ParamLimits

0xbb60,	// (0x00041c53) indicator_popup_pane_cp2

0xbb7b,	// (0x00041c6e) popup_query_data_code_window_g1_ParamLimits

0xbb7b,	// (0x00041c6e) popup_query_data_code_window_g1

0xbb8e,	// (0x00041c81) popup_query_data_code_window_t1_ParamLimits

0xbb8e,	// (0x00041c81) popup_query_data_code_window_t1

0xbba0,	// (0x00041c93) popup_query_data_code_window_t2_ParamLimits

0xbba0,	// (0x00041c93) popup_query_data_code_window_t2

0xbbb2,	// (0x00041ca5) popup_query_data_code_window_t3_ParamLimits

0xbbb2,	// (0x00041ca5) popup_query_data_code_window_t3

0xbbc8,	// (0x00041cbb) popup_query_data_code_window_t4_ParamLimits

0xbbc8,	// (0x00041cbb) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00045658) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00045658) popup_query_data_code_window_t

0x0a70,	// (0x00036b63) list_single_midp_graphic_pane_g3

0xbbe2,	// (0x00041cd5) query_popup_data_pane_cp2_ParamLimits

0xbbf5,	// (0x00041ce8) query_popup_pane_cp2_ParamLimits

0xbbf5,	// (0x00041ce8) query_popup_pane_cp2

0xb8d0,	// (0x000419c3) bg_popup_window_pane_cp11

0x3406,	// (0x000394f9) heading_pane_cp5

0x340e,	// (0x00039501) listscroll_popup_info_pane

0xb8d0,	// (0x000419c3) input_focus_pane_cp3

0xbc10,	// (0x00041d03) query_popup_pane_t1

0xbc1e,	// (0x00041d11) list_popup_info_pane_ParamLimits

0xbc1e,	// (0x00041d11) list_popup_info_pane

0xbc2d,	// (0x00041d20) listscroll_popup_info_pane_g1

0xbc35,	// (0x00041d28) scroll_pane_cp7

0xbc3f,	// (0x00041d32) popup_info_list_pane_t1_ParamLimits

0xbc3f,	// (0x00041d32) popup_info_list_pane_t1

0xbc59,	// (0x00041d4c) popup_info_list_pane_t2_ParamLimits

0xbc59,	// (0x00041d4c) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00045661) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00045661) popup_info_list_pane_t

0xb8d0,	// (0x000419c3) bg_popup_window_pane_cp12

0x47b9,	// (0x0003a8ac) find_popup_pane

0xb92c,	// (0x00041a1f) bg_popup_window_pane_cp3

0xbc73,	// (0x00041d66) heading_pane_cp3

0xbc82,	// (0x00041d75) listscroll_popup_graphic_pane

0xb8d0,	// (0x000419c3) bg_popup_window_pane_cp4

0x9a66,	// (0x0003fb59) heading_pane_cp4

0xbc92,	// (0x00041d85) listscroll_popup_colour_pane

0x9a70,	// (0x0003fb63) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a70,	// (0x0003fb63) cell_large_graphic_colour_none_popup_pane

0x9a84,	// (0x0003fb77) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a84,	// (0x0003fb77) grid_large_graphic_colour_popup_pane

0x9aa8,	// (0x0003fb9b) listscroll_popup_colour_pane_g1_ParamLimits

0x9aa8,	// (0x0003fb9b) listscroll_popup_colour_pane_g1

0x9abf,	// (0x0003fbb2) listscroll_popup_colour_pane_g2_ParamLimits

0x9abf,	// (0x0003fbb2) listscroll_popup_colour_pane_g2

0x9ad6,	// (0x0003fbc9) listscroll_popup_colour_pane_g3_ParamLimits

0x9ad6,	// (0x0003fbc9) listscroll_popup_colour_pane_g3

0x9ae6,	// (0x0003fbd9) listscroll_popup_colour_pane_g4_ParamLimits

0x9ae6,	// (0x0003fbd9) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00045666) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00045666) listscroll_popup_colour_pane_g

0xbc9a,	// (0x00041d8d) scroll_pane_cp6_ParamLimits

0xbc9a,	// (0x00041d8d) scroll_pane_cp6

0x9af6,	// (0x0003fbe9) cell_large_graphic_colour_popup_pane_ParamLimits

0x9af6,	// (0x0003fbe9) cell_large_graphic_colour_popup_pane

0xbcac,	// (0x00041d9f) cell_large_graphic_colour_none_popup_pane_t1

0xb8d0,	// (0x000419c3) grid_highlight_pane_cp5

0xbcbb,	// (0x00041dae) cell_large_graphic_colour_popup_pane_g1

0xbcc3,	// (0x00041db6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004566f) cell_large_graphic_colour_popup_pane_g

0xbccb,	// (0x00041dbe) cell_large_graphic_colour_popup_pane_g2_copy1

0xbcd4,	// (0x00041dc7) grid_highlight_pane_cp4

0xbcdc,	// (0x00041dcf) bg_popup_window_pane_cp8_ParamLimits

0xbcdc,	// (0x00041dcf) bg_popup_window_pane_cp8

0xbcf7,	// (0x00041dea) popup_snote_single_text_window_g1_ParamLimits

0xbcf7,	// (0x00041dea) popup_snote_single_text_window_g1

0xbd09,	// (0x00041dfc) popup_snote_single_text_window_t1_ParamLimits

0xbd09,	// (0x00041dfc) popup_snote_single_text_window_t1

0xbd1c,	// (0x00041e0f) popup_snote_single_text_window_t2_ParamLimits

0xbd1c,	// (0x00041e0f) popup_snote_single_text_window_t2

0xbd2f,	// (0x00041e22) popup_snote_single_text_window_t3_ParamLimits

0xbd2f,	// (0x00041e22) popup_snote_single_text_window_t3

0xbd68,	// (0x00041e5b) popup_snote_single_text_window_t4_ParamLimits

0xbd68,	// (0x00041e5b) popup_snote_single_text_window_t4

0xbd9c,	// (0x00041e8f) popup_snote_single_text_window_t5_ParamLimits

0xbd9c,	// (0x00041e8f) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00045674) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00045674) popup_snote_single_text_window_t

0xbdcb,	// (0x00041ebe) bg_popup_window_pane_cp9_ParamLimits

0xbdcb,	// (0x00041ebe) bg_popup_window_pane_cp9

0xbcf7,	// (0x00041dea) popup_snote_single_graphic_window_g1_ParamLimits

0xbcf7,	// (0x00041dea) popup_snote_single_graphic_window_g1

0xbdd9,	// (0x00041ecc) popup_snote_single_graphic_window_g2_ParamLimits

0xbdd9,	// (0x00041ecc) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004567f) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004567f) popup_snote_single_graphic_window_g

0xbde5,	// (0x00041ed8) popup_snote_single_graphic_window_t1_ParamLimits

0xbde5,	// (0x00041ed8) popup_snote_single_graphic_window_t1

0xbdf8,	// (0x00041eeb) popup_snote_single_graphic_window_t2_ParamLimits

0xbdf8,	// (0x00041eeb) popup_snote_single_graphic_window_t2

0xbe0b,	// (0x00041efe) popup_snote_single_graphic_window_t3_ParamLimits

0xbe0b,	// (0x00041efe) popup_snote_single_graphic_window_t3

0xbe44,	// (0x00041f37) popup_snote_single_graphic_window_t4_ParamLimits

0xbe44,	// (0x00041f37) popup_snote_single_graphic_window_t4

0xbe78,	// (0x00041f6b) popup_snote_single_graphic_window_t5_ParamLimits

0xbe78,	// (0x00041f6b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00045684) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00045684) popup_snote_single_graphic_window_t

0x46f7,	// (0x0003a7ea) grid_graphic_popup_pane_ParamLimits

0x46f7,	// (0x0003a7ea) grid_graphic_popup_pane

0x4725,	// (0x0003a818) listscroll_popup_graphic_pane_g1_ParamLimits

0x4725,	// (0x0003a818) listscroll_popup_graphic_pane_g1

0xca00,	// (0x00042af3) listscroll_popup_graphic_pane_g2_ParamLimits

0xca00,	// (0x00042af3) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00045a79) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00045a79) listscroll_popup_graphic_pane_g

0x474d,	// (0x0003a840) scroll_pane_cp5

0xc9b8,	// (0x00042aab) cell_graphic_popup_pane_ParamLimits

0xc9b8,	// (0x00042aab) cell_graphic_popup_pane

0x4670,	// (0x0003a763) cell_graphic_popup_pane_g1

0x4678,	// (0x0003a76b) cell_graphic_popup_pane_g2

0xbccb,	// (0x00041dbe) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00045a72) cell_graphic_popup_pane_g

0x4681,	// (0x0003a774) cell_graphic_popup_pane_t2

0xbcd4,	// (0x00041dc7) grid_highlight_pane_cp3

0xbeb9,	// (0x00041fac) list_gen_pane_ParamLimits

0xbeb9,	// (0x00041fac) list_gen_pane

0xbee1,	// (0x00041fd4) scroll_pane

0xc96f,	// (0x00042a62) bg_list_pane_g1_ParamLimits

0xc96f,	// (0x00042a62) bg_list_pane_g1

0x45e5,	// (0x0003a6d8) bg_list_pane_g2_ParamLimits

0x45e5,	// (0x0003a6d8) bg_list_pane_g2

0x45fa,	// (0x0003a6ed) bg_list_pane_g3_ParamLimits

0x45fa,	// (0x0003a6ed) bg_list_pane_g3

0x460e,	// (0x0003a701) bg_list_pane_g4_ParamLimits

0x460e,	// (0x0003a701) bg_list_pane_g4

0xc98c,	// (0x00042a7f) bg_list_pane_g5_ParamLimits

0xc98c,	// (0x00042a7f) bg_list_pane_g5

0x0004,

0xf974,	// (0x00045a67) bg_list_pane_g_ParamLimits

0xf974,	// (0x00045a67) bg_list_pane_g

0xc902,	// (0x000429f5) list_double2_graphic_large_graphic_pane_ParamLimits

0xc902,	// (0x000429f5) list_double2_graphic_large_graphic_pane

0xc902,	// (0x000429f5) list_double2_graphic_pane_ParamLimits

0xc902,	// (0x000429f5) list_double2_graphic_pane

0xc902,	// (0x000429f5) list_double2_large_graphic_pane_ParamLimits

0xc902,	// (0x000429f5) list_double2_large_graphic_pane

0xc902,	// (0x000429f5) list_double2_pane_ParamLimits

0xc902,	// (0x000429f5) list_double2_pane

0xc902,	// (0x000429f5) list_double_graphic_heading_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_graphic_heading_pane

0xc902,	// (0x000429f5) list_double_graphic_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_graphic_pane

0xc902,	// (0x000429f5) list_double_heading_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_heading_pane

0xc902,	// (0x000429f5) list_double_large_graphic_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_large_graphic_pane

0xc902,	// (0x000429f5) list_double_number_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_number_pane

0xc902,	// (0x000429f5) list_double_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_pane

0xc902,	// (0x000429f5) list_double_time_pane_ParamLimits

0xc902,	// (0x000429f5) list_double_time_pane

0xc902,	// (0x000429f5) list_setting_number_pane_ParamLimits

0xc902,	// (0x000429f5) list_setting_number_pane

0xc902,	// (0x000429f5) list_setting_pane_ParamLimits

0xc902,	// (0x000429f5) list_setting_pane

0xc917,	// (0x00042a0a) list_single_2graphic_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_2graphic_pane

0xc917,	// (0x00042a0a) list_single_graphic_heading_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_graphic_heading_pane

0xc917,	// (0x00042a0a) list_single_graphic_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_graphic_pane

0xc917,	// (0x00042a0a) list_single_heading_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_heading_pane

0xc917,	// (0x00042a0a) list_single_large_graphic_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_large_graphic_pane

0xc917,	// (0x00042a0a) list_single_number_heading_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_number_heading_pane

0xc917,	// (0x00042a0a) list_single_number_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_number_pane

0xc917,	// (0x00042a0a) list_single_pane_ParamLimits

0xc917,	// (0x00042a0a) list_single_pane

0xb8d0,	// (0x000419c3) list_highlight_pane_cp1

0xd30d,	// (0x00043400) list_single_pane_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_pane_g1

0xd319,	// (0x0004340c) list_single_pane_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_pane_g

0xd59c,	// (0x0004368f) list_single_pane_t1_ParamLimits

0xd59c,	// (0x0004368f) list_single_pane_t1

0xd30d,	// (0x00043400) list_single_number_pane_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_number_pane_g1

0xd319,	// (0x0004340c) list_single_number_pane_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_number_pane_g

0xd4c7,	// (0x000435ba) list_single_number_pane_t1_ParamLimits

0xd4c7,	// (0x000435ba) list_single_number_pane_t1

0xb024,	// (0x00041117) list_single_number_pane_t2_ParamLimits

0xb024,	// (0x00041117) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00045a28) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00045a28) list_single_number_pane_t

0x9b21,	// (0x0003fc14) list_single_graphic_pane_g1_ParamLimits

0x9b21,	// (0x0003fc14) list_single_graphic_pane_g1

0xd30d,	// (0x00043400) list_single_graphic_pane_g2_ParamLimits

0xd30d,	// (0x00043400) list_single_graphic_pane_g2

0xd319,	// (0x0004340c) list_single_graphic_pane_g3_ParamLimits

0xd319,	// (0x0004340c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004568f) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004568f) list_single_graphic_pane_g

0x9b2d,	// (0x0003fc20) list_single_graphic_pane_t1_ParamLimits

0x9b2d,	// (0x0003fc20) list_single_graphic_pane_t1

0xd30d,	// (0x00043400) list_single_heading_pane_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_heading_pane_g1

0xd319,	// (0x0004340c) list_single_heading_pane_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_heading_pane_g

0x9b43,	// (0x0003fc36) list_single_heading_pane_t1_ParamLimits

0x9b43,	// (0x0003fc36) list_single_heading_pane_t1

0x9b59,	// (0x0003fc4c) list_single_heading_pane_t2_ParamLimits

0x9b59,	// (0x0003fc4c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004569b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004569b) list_single_heading_pane_t

0xd30d,	// (0x00043400) list_single_number_heading_pane_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_number_heading_pane_g1

0xd319,	// (0x0004340c) list_single_number_heading_pane_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_number_heading_pane_g

0x9b43,	// (0x0003fc36) list_single_number_heading_pane_t1_ParamLimits

0x9b43,	// (0x0003fc36) list_single_number_heading_pane_t1

0xd325,	// (0x00043418) list_single_number_heading_pane_t2_ParamLimits

0xd325,	// (0x00043418) list_single_number_heading_pane_t2

0xd337,	// (0x0004342a) list_single_number_heading_pane_t3_ParamLimits

0xd337,	// (0x0004342a) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000456a0) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000456a0) list_single_number_heading_pane_t

0xd349,	// (0x0004343c) list_single_graphic_heading_pane_g1_ParamLimits

0xd349,	// (0x0004343c) list_single_graphic_heading_pane_g1

0x9b6b,	// (0x0003fc5e) list_single_graphic_heading_pane_g4_ParamLimits

0x9b6b,	// (0x0003fc5e) list_single_graphic_heading_pane_g4

0xd319,	// (0x0004340c) list_single_graphic_heading_pane_g5_ParamLimits

0xd319,	// (0x0004340c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000456a7) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000456a7) list_single_graphic_heading_pane_g

0x9b43,	// (0x0003fc36) list_single_graphic_heading_pane_t1_ParamLimits

0x9b43,	// (0x0003fc36) list_single_graphic_heading_pane_t1

0x9b7c,	// (0x0003fc6f) list_single_graphic_heading_pane_t2_ParamLimits

0x9b7c,	// (0x0003fc6f) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000456ae) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000456ae) list_single_graphic_heading_pane_t

0xd355,	// (0x00043448) list_single_large_graphic_pane_g1_ParamLimits

0xd355,	// (0x00043448) list_single_large_graphic_pane_g1

0xd30d,	// (0x00043400) list_single_large_graphic_pane_g2_ParamLimits

0xd30d,	// (0x00043400) list_single_large_graphic_pane_g2

0xd319,	// (0x0004340c) list_single_large_graphic_pane_g3_ParamLimits

0xd319,	// (0x0004340c) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000456b3) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000456b3) list_single_large_graphic_pane_g

0x35c3,	// (0x000396b6) wait_border_pane_g2_copy1

0x9b8e,	// (0x0003fc81) list_single_large_graphic_pane_g4_cp2

0xd361,	// (0x00043454) list_single_large_graphic_pane_t1_ParamLimits

0xd361,	// (0x00043454) list_single_large_graphic_pane_t1

0xd377,	// (0x0004346a) list_double_pane_g1_ParamLimits

0xd377,	// (0x0004346a) list_double_pane_g1

0xd383,	// (0x00043476) list_double_pane_g2_ParamLimits

0xd383,	// (0x00043476) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000456ba) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000456ba) list_double_pane_g

0x9b96,	// (0x0003fc89) list_double_pane_t1_ParamLimits

0x9b96,	// (0x0003fc89) list_double_pane_t1

0x9bac,	// (0x0003fc9f) list_double_pane_t2_ParamLimits

0x9bac,	// (0x0003fc9f) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000456bf) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000456bf) list_double_pane_t

0x9bbe,	// (0x0003fcb1) list_double2_pane_g1_ParamLimits

0x9bbe,	// (0x0003fcb1) list_double2_pane_g1

0x9bcf,	// (0x0003fcc2) list_double2_pane_g2_ParamLimits

0x9bcf,	// (0x0003fcc2) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000456c4) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000456c4) list_double2_pane_g

0x9bdb,	// (0x0003fcce) list_double2_pane_t1_ParamLimits

0x9bdb,	// (0x0003fcce) list_double2_pane_t1

0x9bf1,	// (0x0003fce4) list_double2_pane_t2_ParamLimits

0x9bf1,	// (0x0003fce4) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000456c9) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000456c9) list_double2_pane_t

0xd377,	// (0x0004346a) list_double_number_pane_g1_ParamLimits

0xd377,	// (0x0004346a) list_double_number_pane_g1

0xd383,	// (0x00043476) list_double_number_pane_g2_ParamLimits

0xd383,	// (0x00043476) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000456ba) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000456ba) list_double_number_pane_g

0x9c03,	// (0x0003fcf6) list_double_number_pane_t1_ParamLimits

0x9c03,	// (0x0003fcf6) list_double_number_pane_t1

0x9c15,	// (0x0003fd08) list_double_number_pane_t2_ParamLimits

0x9c15,	// (0x0003fd08) list_double_number_pane_t2

0x9c2b,	// (0x0003fd1e) list_double_number_pane_t3_ParamLimits

0x9c2b,	// (0x0003fd1e) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000456ce) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000456ce) list_double_number_pane_t

0x9c3d,	// (0x0003fd30) list_double_graphic_pane_g1_ParamLimits

0x9c3d,	// (0x0003fd30) list_double_graphic_pane_g1

0x9c49,	// (0x0003fd3c) list_double_graphic_pane_g2_ParamLimits

0x9c49,	// (0x0003fd3c) list_double_graphic_pane_g2

0x9c58,	// (0x0003fd4b) list_double_graphic_pane_g3_ParamLimits

0x9c58,	// (0x0003fd4b) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000456d5) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000456d5) list_double_graphic_pane_g

0x9c70,	// (0x0003fd63) list_double_graphic_pane_t1_ParamLimits

0x9c70,	// (0x0003fd63) list_double_graphic_pane_t1

0x9c86,	// (0x0003fd79) list_double_graphic_pane_t2_ParamLimits

0x9c86,	// (0x0003fd79) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000456de) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000456de) list_double_graphic_pane_t

0x9c98,	// (0x0003fd8b) list_double2_graphic_pane_g1_ParamLimits

0x9c98,	// (0x0003fd8b) list_double2_graphic_pane_g1

0x9ca4,	// (0x0003fd97) list_double2_graphic_pane_g2_ParamLimits

0x9ca4,	// (0x0003fd97) list_double2_graphic_pane_g2

0x9cb0,	// (0x0003fda3) list_double2_graphic_pane_g3_ParamLimits

0x9cb0,	// (0x0003fda3) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000456e3) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000456e3) list_double2_graphic_pane_g

0x9cbc,	// (0x0003fdaf) list_double2_graphic_pane_t1_ParamLimits

0x9cbc,	// (0x0003fdaf) list_double2_graphic_pane_t1

0x9cd2,	// (0x0003fdc5) list_double2_graphic_pane_t2_ParamLimits

0x9cd2,	// (0x0003fdc5) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000456ea) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000456ea) list_double2_graphic_pane_t

0x9ce4,	// (0x0003fdd7) list_double_large_graphic_pane_g1_ParamLimits

0x9ce4,	// (0x0003fdd7) list_double_large_graphic_pane_g1

0x9d03,	// (0x0003fdf6) list_double_large_graphic_pane_g2_ParamLimits

0x9d03,	// (0x0003fdf6) list_double_large_graphic_pane_g2

0xd383,	// (0x00043476) list_double_large_graphic_pane_g3_ParamLimits

0xd383,	// (0x00043476) list_double_large_graphic_pane_g3

0x9d14,	// (0x0003fe07) list_double_large_graphic_pane_g4_ParamLimits

0x9d14,	// (0x0003fe07) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000456ef) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000456ef) list_double_large_graphic_pane_g

0x9d27,	// (0x0003fe1a) list_double_large_graphic_pane_t1_ParamLimits

0x9d27,	// (0x0003fe1a) list_double_large_graphic_pane_t1

0x9d40,	// (0x0003fe33) list_double_large_graphic_pane_t2_ParamLimits

0x9d40,	// (0x0003fe33) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000456fa) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000456fa) list_double_large_graphic_pane_t

0x9d52,	// (0x0003fe45) list_double2_large_graphic_pane_g1_ParamLimits

0x9d52,	// (0x0003fe45) list_double2_large_graphic_pane_g1

0x9bbe,	// (0x0003fcb1) list_double2_large_graphic_pane_g2_ParamLimits

0x9bbe,	// (0x0003fcb1) list_double2_large_graphic_pane_g2

0x9bcf,	// (0x0003fcc2) list_double2_large_graphic_pane_g3_ParamLimits

0x9bcf,	// (0x0003fcc2) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000456ff) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000456ff) list_double2_large_graphic_pane_g

0x9d5e,	// (0x0003fe51) list_double2_large_graphic_pane_t1_ParamLimits

0x9d5e,	// (0x0003fe51) list_double2_large_graphic_pane_t1

0x9d74,	// (0x0003fe67) list_double2_large_graphic_pane_t2_ParamLimits

0x9d74,	// (0x0003fe67) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00045706) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00045706) list_double2_large_graphic_pane_t

0x9d86,	// (0x0003fe79) list_double_heading_pane_g1_ParamLimits

0x9d86,	// (0x0003fe79) list_double_heading_pane_g1

0x9d97,	// (0x0003fe8a) list_double_heading_pane_g2_ParamLimits

0x9d97,	// (0x0003fe8a) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0004570b) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0004570b) list_double_heading_pane_g

0x9da3,	// (0x0003fe96) list_double_heading_pane_t1_ParamLimits

0x9da3,	// (0x0003fe96) list_double_heading_pane_t1

0x9bf1,	// (0x0003fce4) list_double_heading_pane_t2_ParamLimits

0x9bf1,	// (0x0003fce4) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00045710) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00045710) list_double_heading_pane_t

0x9db9,	// (0x0003feac) list_double_graphic_heading_pane_g1_ParamLimits

0x9db9,	// (0x0003feac) list_double_graphic_heading_pane_g1

0x9d86,	// (0x0003fe79) list_double_graphic_heading_pane_g2_ParamLimits

0x9d86,	// (0x0003fe79) list_double_graphic_heading_pane_g2

0x9d97,	// (0x0003fe8a) list_double_graphic_heading_pane_g3_ParamLimits

0x9d97,	// (0x0003fe8a) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00045715) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00045715) list_double_graphic_heading_pane_g

0x9dc5,	// (0x0003feb8) list_double_graphic_heading_pane_t1_ParamLimits

0x9dc5,	// (0x0003feb8) list_double_graphic_heading_pane_t1

0x9cd2,	// (0x0003fdc5) list_double_graphic_heading_pane_t2_ParamLimits

0x9cd2,	// (0x0003fdc5) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004571c) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004571c) list_double_graphic_heading_pane_t

0x9d03,	// (0x0003fdf6) list_double_time_pane_g1_ParamLimits

0x9d03,	// (0x0003fdf6) list_double_time_pane_g1

0xd383,	// (0x00043476) list_double_time_pane_g2_ParamLimits

0xd383,	// (0x00043476) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00045721) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00045721) list_double_time_pane_g

0x9ddb,	// (0x0003fece) list_double_time_pane_t1_ParamLimits

0x9ddb,	// (0x0003fece) list_double_time_pane_t1

0x9df1,	// (0x0003fee4) list_double_time_pane_t2_ParamLimits

0x9df1,	// (0x0003fee4) list_double_time_pane_t2

0x9e03,	// (0x0003fef6) list_double_time_pane_t3_ParamLimits

0x9e03,	// (0x0003fef6) list_double_time_pane_t3

0x9e15,	// (0x0003ff08) list_double_time_pane_t4_ParamLimits

0x9e15,	// (0x0003ff08) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00045726) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00045726) list_double_time_pane_t

0x9e27,	// (0x0003ff1a) list_setting_pane_g1_ParamLimits

0x9e27,	// (0x0003ff1a) list_setting_pane_g1

0x9d97,	// (0x0003fe8a) list_setting_pane_g2_ParamLimits

0x9d97,	// (0x0003fe8a) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0004572f) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0004572f) list_setting_pane_g

0x9e33,	// (0x0003ff26) list_setting_pane_t1_ParamLimits

0x9e33,	// (0x0003ff26) list_setting_pane_t1

0x9e4a,	// (0x0003ff3d) list_setting_pane_t2_ParamLimits

0x9e4a,	// (0x0003ff3d) list_setting_pane_t2

0x0002,

0xf641,	// (0x00045734) list_setting_pane_t_ParamLimits

0xf641,	// (0x00045734) list_setting_pane_t

0x9e89,	// (0x0003ff7c) set_value_pane_cp_ParamLimits

0x9e89,	// (0x0003ff7c) set_value_pane_cp

0x9e97,	// (0x0003ff8a) list_setting_number_pane_g1_ParamLimits

0x9e97,	// (0x0003ff8a) list_setting_number_pane_g1

0x9ea3,	// (0x0003ff96) list_setting_number_pane_g2_ParamLimits

0x9ea3,	// (0x0003ff96) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0004573b) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0004573b) list_setting_number_pane_g

0x9eaf,	// (0x0003ffa2) list_setting_number_pane_t1_ParamLimits

0x9eaf,	// (0x0003ffa2) list_setting_number_pane_t1

0x9ec3,	// (0x0003ffb6) list_setting_number_pane_t2_ParamLimits

0x9ec3,	// (0x0003ffb6) list_setting_number_pane_t2

0x9eda,	// (0x0003ffcd) list_setting_number_pane_t3_ParamLimits

0x9eda,	// (0x0003ffcd) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00045740) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00045740) list_setting_number_pane_t

0x9e89,	// (0x0003ff7c) set_value_pane_ParamLimits

0x9e89,	// (0x0003ff7c) set_value_pane

0xbf15,	// (0x00042008) bg_set_opt_pane_ParamLimits

0xbf15,	// (0x00042008) bg_set_opt_pane

0xd3a4,	// (0x00043497) set_value_pane_t1

0xbf36,	// (0x00042029) slider_set_pane_cp3

0xbf3f,	// (0x00042032) volume_small_pane_cp

0xbf48,	// (0x0004203b) list_form_gen_pane

0xbf51,	// (0x00042044) scroll_pane_cp8

0x9f1d,	// (0x00040010) form_field_data_pane_ParamLimits

0x9f1d,	// (0x00040010) form_field_data_pane

0x9f38,	// (0x0004002b) form_field_data_wide_pane_ParamLimits

0x9f38,	// (0x0004002b) form_field_data_wide_pane

0xd3c2,	// (0x000434b5) form_field_popup_pane_ParamLimits

0xd3c2,	// (0x000434b5) form_field_popup_pane

0x9f5a,	// (0x0004004d) form_field_popup_wide_pane_ParamLimits

0x9f5a,	// (0x0004004d) form_field_popup_wide_pane

0xd3e4,	// (0x000434d7) form_field_slider_pane_ParamLimits

0xd3e4,	// (0x000434d7) form_field_slider_pane

0xd3f7,	// (0x000434ea) form_field_slider_wide_pane_ParamLimits

0xd3f7,	// (0x000434ea) form_field_slider_wide_pane

0xbf62,	// (0x00042055) data_form_pane

0x9f85,	// (0x00040078) form_field_data_pane_t1

0xbf6e,	// (0x00042061) input_focus_pane

0xd40a,	// (0x000434fd) data_form_wide_pane

0xd427,	// (0x0004351a) form_field_data_wide_pane_t1

0xbce9,	// (0x00041ddc) input_focus_pane_cp6

0x9f9f,	// (0x00040092) form_field_popup_pane_t1

0xbf6e,	// (0x00042061) input_focus_pane_cp7

0xbf9c,	// (0x0004208f) list_form_pane

0xd451,	// (0x00043544) form_field_popup_wide_pane_t1

0xbf6e,	// (0x00042061) input_focus_pane_cp8

0xbfa8,	// (0x0004209b) list_form_wide_pane

0x9fc1,	// (0x000400b4) form_field_slider_pane_t1_ParamLimits

0x9fc1,	// (0x000400b4) form_field_slider_pane_t1

0x9fd9,	// (0x000400cc) form_field_slider_pane_t2_ParamLimits

0x9fd9,	// (0x000400cc) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00045750) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00045750) form_field_slider_pane_t

0xb91e,	// (0x00041a11) input_focus_pane_cp9_ParamLimits

0xb91e,	// (0x00041a11) input_focus_pane_cp9

0x9fee,	// (0x000400e1) slider_cont_pane_ParamLimits

0x9fee,	// (0x000400e1) slider_cont_pane

0xbfb4,	// (0x000420a7) form_field_slider_wide_pane_t1_ParamLimits

0xbfb4,	// (0x000420a7) form_field_slider_wide_pane_t1

0xd466,	// (0x00043559) form_field_slider_wide_pane_t2_ParamLimits

0xd466,	// (0x00043559) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00045755) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00045755) form_field_slider_wide_pane_t

0xb91e,	// (0x00041a11) input_focus_pane_cp10_ParamLimits

0xb91e,	// (0x00041a11) input_focus_pane_cp10

0xa002,	// (0x000400f5) slider_cont_pane_cp1_ParamLimits

0xa002,	// (0x000400f5) slider_cont_pane_cp1

0xa016,	// (0x00040109) slider_form_pane_cp

0xbfc6,	// (0x000420b9) input_focus_pane_g1

0xbfce,	// (0x000420c1) input_focus_pane_g2

0xbfd6,	// (0x000420c9) input_focus_pane_g3

0xbfde,	// (0x000420d1) input_focus_pane_g4

0xbfe6,	// (0x000420d9) input_focus_pane_g5

0xbfee,	// (0x000420e1) input_focus_pane_g6

0xbff6,	// (0x000420e9) input_focus_pane_g7

0xbffe,	// (0x000420f1) input_focus_pane_g8

0xc006,	// (0x000420f9) input_focus_pane_g9

0xb8c6,	// (0x000419b9) input_focus_pane_g10

0x0009,

0xf667,	// (0x0004575a) input_focus_pane_g

0x35cc,	// (0x000396bf) wait_border_pane_g3_copy1

0xa01e,	// (0x00040111) data_form_pane_t1

0xb8c6,	// (0x000419b9) wait_anim_pane_g1_copy1

0xb036,	// (0x00041129) data_form_wide_pane_t1

0xd478,	// (0x0004356b) list_form_graphic_pane_cp_ParamLimits

0xd478,	// (0x0004356b) list_form_graphic_pane_cp

0x4523,	// (0x0003a616) slider_form_pane_g1

0x452c,	// (0x0003a61f) slider_form_pane_g2

0x0006,

0xf965,	// (0x00045a58) slider_form_pane_g

0xd478,	// (0x0004356b) list_form_graphic_pane_ParamLimits

0xd478,	// (0x0004356b) list_form_graphic_pane

0xd48a,	// (0x0004357d) list_form_graphic_pane_g1

0xd492,	// (0x00043585) list_form_graphic_pane_t1_ParamLimits

0xd492,	// (0x00043585) list_form_graphic_pane_t1

0xb92c,	// (0x00041a1f) list_highlight_pane_cp5_ParamLimits

0xb92c,	// (0x00041a1f) list_highlight_pane_cp5

0xa038,	// (0x0004012b) find_pane_g1

0xc00e,	// (0x00042101) input_find_pane

0xa041,	// (0x00040134) input_find_pane_g1_ParamLimits

0xa041,	// (0x00040134) input_find_pane_g1

0xa04d,	// (0x00040140) input_find_pane_t1_ParamLimits

0xa04d,	// (0x00040140) input_find_pane_t1

0xa062,	// (0x00040155) input_find_pane_t2_ParamLimits

0xa062,	// (0x00040155) input_find_pane_t2

0x0001,

0xf67c,	// (0x0004576f) input_find_pane_t_ParamLimits

0xf67c,	// (0x0004576f) input_find_pane_t

0xc017,	// (0x0004210a) input_focus_pane_cp5_ParamLimits

0xc017,	// (0x0004210a) input_focus_pane_cp5

0xc02a,	// (0x0004211d) bg_popup_window_pane_cp2_ParamLimits

0xc02a,	// (0x0004211d) bg_popup_window_pane_cp2

0xc037,	// (0x0004212a) listscroll_menu_pane_ParamLimits

0xc037,	// (0x0004212a) listscroll_menu_pane

0xa083,	// (0x00040176) popup_submenu_window_ParamLimits

0xa083,	// (0x00040176) popup_submenu_window

0xc043,	// (0x00042136) find_popup_pane_g1

0xc04b,	// (0x0004213e) input_popup_find_pane_cp

0xc055,	// (0x00042148) input_focus_pane_cp4_ParamLimits

0xc055,	// (0x00042148) input_focus_pane_cp4

0xc063,	// (0x00042156) input_popup_find_pane_t1_ParamLimits

0xc063,	// (0x00042156) input_popup_find_pane_t1

0xb8d0,	// (0x000419c3) bg_popup_sub_pane_cp

0xc091,	// (0x00042184) listscroll_popup_sub_pane

0xc099,	// (0x0004218c) list_submenu_pane_ParamLimits

0xc099,	// (0x0004218c) list_submenu_pane

0xc0aa,	// (0x0004219d) scroll_pane_cp4

0xc0b2,	// (0x000421a5) list_single_popup_submenu_pane_ParamLimits

0xc0b2,	// (0x000421a5) list_single_popup_submenu_pane

0xc0c7,	// (0x000421ba) list_single_popup_submenu_pane_g1

0xc0cf,	// (0x000421c2) list_single_popup_submenu_pane_t1_ParamLimits

0xc0cf,	// (0x000421c2) list_single_popup_submenu_pane_t1

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp1_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp1

0xa0c1,	// (0x000401b4) tabs_2_active_pane_g1

0xa0c9,	// (0x000401bc) tabs_2_active_pane_t1

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp1_ParamLimits

0xb91e,	// (0x00041a11) bg_passive_tab_pane_cp1

0xa0c1,	// (0x000401b4) tabs_2_passive_pane_g1

0xa0c9,	// (0x000401bc) tabs_2_passive_pane_t1

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp4

0xa0db,	// (0x000401ce) tabs_2_long_active_pane_t1

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp4

0x0a78,	// (0x00036b6b) list_single_midp_graphic_pane_g4_ParamLimits

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp5

0xa0ee,	// (0x000401e1) tabs_3_long_active_pane_t1

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp5

0x0a78,	// (0x00036b6b) list_single_midp_graphic_pane_g4

0xb92c,	// (0x00041a1f) bg_popup_window_pane_cp13_ParamLimits

0xb92c,	// (0x00041a1f) bg_popup_window_pane_cp13

0xeebd,	// (0x00044fb0) listscroll_popup_fast_pane_ParamLimits

0xeebd,	// (0x00044fb0) listscroll_popup_fast_pane

0xeecc,	// (0x00044fbf) grid_popup_fast_pane_ParamLimits

0xeecc,	// (0x00044fbf) grid_popup_fast_pane

0xeede,	// (0x00044fd1) scroll_pane_cp9_ParamLimits

0xeede,	// (0x00044fd1) scroll_pane_cp9

0x5e73,	// (0x0003bf66) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5e73,	// (0x0003bf66) list_single_graphic_hl_pane_t1_cp2

0xef02,	// (0x00044ff5) input_focus_pane_cp20_ParamLimits

0xef02,	// (0x00044ff5) input_focus_pane_cp20

0xef10,	// (0x00045003) query_popup_data_pane_t1_ParamLimits

0xef10,	// (0x00045003) query_popup_data_pane_t1

0xef23,	// (0x00045016) query_popup_data_pane_t2_ParamLimits

0xef23,	// (0x00045016) query_popup_data_pane_t2

0xef69,	// (0x0004505c) query_popup_data_pane_t3_ParamLimits

0xef69,	// (0x0004505c) query_popup_data_pane_t3

0xefaa,	// (0x0004509d) query_popup_data_pane_t4_ParamLimits

0xefaa,	// (0x0004509d) query_popup_data_pane_t4

0xefe6,	// (0x000450d9) query_popup_data_pane_t5_ParamLimits

0xefe6,	// (0x000450d9) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00045774) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00045774) query_popup_data_pane_t

0xbfc6,	// (0x000420b9) bg_set_opt_pane_g1

0xbfce,	// (0x000420c1) bg_set_opt_pane_g2

0xbfd6,	// (0x000420c9) bg_set_opt_pane_g3

0xbfde,	// (0x000420d1) bg_set_opt_pane_g4

0xbfe6,	// (0x000420d9) bg_set_opt_pane_g5

0xbfee,	// (0x000420e1) bg_set_opt_pane_g6

0xbff6,	// (0x000420e9) bg_set_opt_pane_g7

0xbffe,	// (0x000420f1) bg_set_opt_pane_g8

0xc006,	// (0x000420f9) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0004577f) bg_set_opt_pane_g

0x007a,	// (0x0003616d) control_top_pane_stacon_ParamLimits

0x007a,	// (0x0003616d) control_top_pane_stacon

0x00cd,	// (0x000361c0) signal_pane_stacon_ParamLimits

0x00cd,	// (0x000361c0) signal_pane_stacon

0x23f1,	// (0x000384e4) stacon_top_pane_g1_ParamLimits

0x23f1,	// (0x000384e4) stacon_top_pane_g1

0x00f2,	// (0x000361e5) title_pane_stacon_ParamLimits

0x00f2,	// (0x000361e5) title_pane_stacon

0x011c,	// (0x0003620f) uni_indicator_pane_stacon_ParamLimits

0x011c,	// (0x0003620f) uni_indicator_pane_stacon

0x0131,	// (0x00036224) battery_pane_stacon_ParamLimits

0x0131,	// (0x00036224) battery_pane_stacon

0x0175,	// (0x00036268) control_bottom_pane_stacon_ParamLimits

0x0175,	// (0x00036268) control_bottom_pane_stacon

0x0198,	// (0x0003628b) navi_pane_stacon_ParamLimits

0x0198,	// (0x0003628b) navi_pane_stacon

0x2413,	// (0x00038506) stacon_bottom_pane_g1_ParamLimits

0x2413,	// (0x00038506) stacon_bottom_pane_g1

0xf01d,	// (0x00045110) aid_levels_signal_lsc_ParamLimits

0xf01d,	// (0x00045110) aid_levels_signal_lsc

0xf034,	// (0x00045127) signal_pane_stacon_g1_ParamLimits

0xf034,	// (0x00045127) signal_pane_stacon_g1

0xf048,	// (0x0004513b) signal_pane_stacon_g2_ParamLimits

0xf048,	// (0x0004513b) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00045792) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00045792) signal_pane_stacon_g

0xf08a,	// (0x0004517d) title_pane_stacon_t1_ParamLimits

0xf08a,	// (0x0004517d) title_pane_stacon_t1

0xf0af,	// (0x000451a2) uni_indicator_pane_stacon_g1

0xf0b9,	// (0x000451ac) uni_indicator_pane_stacon_g2

0xf0c3,	// (0x000451b6) uni_indicator_pane_stacon_g3

0xf0cd,	// (0x000451c0) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0004579e) uni_indicator_pane_stacon_g

0xf0d7,	// (0x000451ca) control_top_pane_stacon_g1

0xf0df,	// (0x000451d2) control_top_pane_stacon_t1_ParamLimits

0xf0df,	// (0x000451d2) control_top_pane_stacon_t1

0xf116,	// (0x00045209) aid_levels_battery_lsc_ParamLimits

0xf116,	// (0x00045209) aid_levels_battery_lsc

0xf12e,	// (0x00045221) battery_pane_stacon_g1_ParamLimits

0xf12e,	// (0x00045221) battery_pane_stacon_g1

0xf141,	// (0x00045234) battery_pane_stacon_g2_ParamLimits

0xf141,	// (0x00045234) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x000457a7) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x000457a7) battery_pane_stacon_g

0xf17f,	// (0x00045272) navi_icon_pane_stacon

0xf193,	// (0x00045286) navi_navi_pane_stacon

0xf17f,	// (0x00045272) navi_text_pane_stacon

0xf0d7,	// (0x000451ca) control_bottom_pane_stacon_g1

0xf1a9,	// (0x0004529c) control_bottom_pane_stacon_t1_ParamLimits

0xf1a9,	// (0x0004529c) control_bottom_pane_stacon_t1

0xa100,	// (0x000401f3) grid_app_pane_ParamLimits

0xa100,	// (0x000401f3) grid_app_pane

0xa138,	// (0x0004022b) scroll_pane_cp15_ParamLimits

0xa138,	// (0x0004022b) scroll_pane_cp15

0xa14d,	// (0x00040240) cell_app_pane_ParamLimits

0xa14d,	// (0x00040240) cell_app_pane

0xa19a,	// (0x0004028d) cell_app_pane_g1_ParamLimits

0xa19a,	// (0x0004028d) cell_app_pane_g1

0xf1fa,	// (0x000452ed) cell_app_pane_g2_ParamLimits

0xf1fa,	// (0x000452ed) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000457ac) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000457ac) cell_app_pane_g

0xa1be,	// (0x000402b1) cell_app_pane_t1_ParamLimits

0xa1be,	// (0x000402b1) cell_app_pane_t1

0xf206,	// (0x000452f9) grid_highlight_pane_ParamLimits

0xf206,	// (0x000452f9) grid_highlight_pane

0xbfc6,	// (0x000420b9) cell_highlight_pane_g1

0xbfce,	// (0x000420c1) cell_highlight_pane_g2

0xbfd6,	// (0x000420c9) cell_highlight_pane_g3

0xbfde,	// (0x000420d1) cell_highlight_pane_g4

0xbfe6,	// (0x000420d9) cell_highlight_pane_g5

0xbfee,	// (0x000420e1) cell_highlight_pane_g6

0xbff6,	// (0x000420e9) cell_highlight_pane_g7

0xbffe,	// (0x000420f1) cell_highlight_pane_g8

0xc006,	// (0x000420f9) cell_highlight_pane_g9

0xb8c6,	// (0x000419b9) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0004575a) cell_highlight_pane_g

0xf221,	// (0x00045314) bg_scroll_pane

0xf240,	// (0x00045333) scroll_handle_pane

0xf291,	// (0x00045384) scroll_bg_pane_g1

0xf2a6,	// (0x00045399) scroll_bg_pane_g2

0xf2be,	// (0x000453b1) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x000457b1) scroll_bg_pane_g

0xf2d3,	// (0x000453c6) scroll_handle_focus_pane_ParamLimits

0xf2d3,	// (0x000453c6) scroll_handle_focus_pane

0xf291,	// (0x00045384) scroll_handle_pane_g1

0xf2e0,	// (0x000453d3) scroll_handle_pane_g2

0xf2be,	// (0x000453b1) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x000457b8) scroll_handle_pane_g

0xc055,	// (0x00042148) bg_popup_sub_pane_cp21_ParamLimits

0xc055,	// (0x00042148) bg_popup_sub_pane_cp21

0xf2f4,	// (0x000453e7) popup_fep_japan_predictive_window_t1_ParamLimits

0xf2f4,	// (0x000453e7) popup_fep_japan_predictive_window_t1

0xf30b,	// (0x000453fe) popup_fep_japan_predictive_window_t2_ParamLimits

0xf30b,	// (0x000453fe) popup_fep_japan_predictive_window_t2

0xf33e,	// (0x00045431) popup_fep_japan_predictive_window_t3_ParamLimits

0xf33e,	// (0x00045431) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x000457bf) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x000457bf) popup_fep_japan_predictive_window_t

0xb8d0,	// (0x000419c3) bg_popup_sub_pane_cp23

0xf375,	// (0x00045468) listscroll_japin_cand_pane

0xf37d,	// (0x00045470) popup_fep_japan_candidate_window_t1

0xf38b,	// (0x0004547e) candidate_pane_ParamLimits

0xf38b,	// (0x0004547e) candidate_pane

0xf39d,	// (0x00045490) scroll_pane_cp30

0xf3a7,	// (0x0004549a) list_single_popup_jap_candidate_pane_ParamLimits

0xf3a7,	// (0x0004549a) list_single_popup_jap_candidate_pane

0xb8d0,	// (0x000419c3) list_highlight_pane_cp30

0xf3bb,	// (0x000454ae) list_single_popup_jap_candidate_pane_t1

0xa1de,	// (0x000402d1) level_1_signal

0xa1f0,	// (0x000402e3) level_2_signal

0xa203,	// (0x000402f6) level_3_signal

0xa216,	// (0x00040309) level_4_signal

0xa229,	// (0x0004031c) level_5_signal

0xa23c,	// (0x0004032f) level_6_signal

0xa24f,	// (0x00040342) level_7_signal

0xa1de,	// (0x000402d1) level_1_battery

0xa1f0,	// (0x000402e3) level_2_battery

0xa203,	// (0x000402f6) level_3_battery

0xa216,	// (0x00040309) level_4_battery

0xa229,	// (0x0004031c) level_5_battery

0xa23c,	// (0x0004032f) level_6_battery

0xa24f,	// (0x00040342) level_7_battery

0xf401,	// (0x000454f4) list_menu_pane_ParamLimits

0xf401,	// (0x000454f4) list_menu_pane

0xf417,	// (0x0004550a) scroll_pane_cp25_ParamLimits

0xf417,	// (0x0004550a) scroll_pane_cp25

0xf430,	// (0x00045523) list_double2_graphic_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double2_graphic_pane_cp2

0xf430,	// (0x00045523) list_double2_large_graphic_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double2_large_graphic_pane_cp2

0xf430,	// (0x00045523) list_double2_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double2_pane_cp2

0xf430,	// (0x00045523) list_double_graphic_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double_graphic_pane_cp2

0xf430,	// (0x00045523) list_double_large_graphic_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double_large_graphic_pane_cp2

0xf430,	// (0x00045523) list_double_number_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double_number_pane_cp2

0xf430,	// (0x00045523) list_double_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double_pane_cp2

0xa262,	// (0x00040355) list_single_2graphic_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_2graphic_pane_cp2

0xa262,	// (0x00040355) list_single_graphic_heading_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_graphic_heading_pane_cp2

0xa262,	// (0x00040355) list_single_graphic_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_graphic_pane_cp2

0xa262,	// (0x00040355) list_single_heading_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_heading_pane_cp2

0xf440,	// (0x00045533) list_single_large_graphic_pane_cp2_ParamLimits

0xf440,	// (0x00045533) list_single_large_graphic_pane_cp2

0xa262,	// (0x00040355) list_single_number_heading_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_number_heading_pane_cp2

0xa262,	// (0x00040355) list_single_number_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_number_pane_cp2

0xa276,	// (0x00040369) list_single_pane_cp2_ParamLimits

0xa276,	// (0x00040369) list_single_pane_cp2

0xf4b4,	// (0x000455a7) bg_popup_sub_pane_cp22

0xf4d9,	// (0x000455cc) popup_side_volume_key_window_g1

0xf503,	// (0x000455f6) popup_side_volume_key_window_t1

0xf521,	// (0x00045614) volume_small_pane_cp1

0xb91e,	// (0x00041a11) bg_popup_sub_pane_cp24_ParamLimits

0xb91e,	// (0x00041a11) bg_popup_sub_pane_cp24

0x224e,	// (0x00038341) fep_china_uni_candidate_pane_ParamLimits

0x224e,	// (0x00038341) fep_china_uni_candidate_pane

0x2262,	// (0x00038355) fep_china_uni_entry_pane

0x2272,	// (0x00038365) popup_fep_china_uni_window_g1

0x228e,	// (0x00038381) fep_china_uni_entry_pane_g1

0x2298,	// (0x0003838b) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000457f0) fep_china_uni_entry_pane_g

0x22a2,	// (0x00038395) fep_entry_item_pane

0x22ac,	// (0x0003839f) fep_candidate_item_pane

0x22b4,	// (0x000383a7) fep_china_uni_candidate_pane_g1

0x22be,	// (0x000383b1) fep_china_uni_candidate_pane_g2

0x22c6,	// (0x000383b9) fep_china_uni_candidate_pane_g3

0x22ce,	// (0x000383c1) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000457f5) fep_china_uni_candidate_pane_g

0xb8c6,	// (0x000419b9) fep_entry_item_pane_g1

0x22d8,	// (0x000383cb) fep_entry_item_pane_t1_ParamLimits

0x22d8,	// (0x000383cb) fep_entry_item_pane_t1

0x22ee,	// (0x000383e1) fep_candidate_item_pane_t1_ParamLimits

0x22ee,	// (0x000383e1) fep_candidate_item_pane_t1

0x2303,	// (0x000383f6) fep_candidate_item_pane_t2_ParamLimits

0x2303,	// (0x000383f6) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x000457fe) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x000457fe) fep_candidate_item_pane_t

0xb92c,	// (0x00041a1f) list_highlight_pane_cp31_ParamLimits

0xb92c,	// (0x00041a1f) list_highlight_pane_cp31

0x2315,	// (0x00038408) level_1_signal_lsc

0x231e,	// (0x00038411) level_2_signal_lsc

0x2327,	// (0x0003841a) level_3_signal_lsc

0x2330,	// (0x00038423) level_4_signal_lsc

0x2339,	// (0x0003842c) level_5_signal_lsc

0x2342,	// (0x00038435) level_6_signal_lsc

0x234b,	// (0x0003843e) level_7_signal_lsc

0x234b,	// (0x0003843e) level_1_battery_lsc

0x2354,	// (0x00038447) level_2_battery_lsc

0x235d,	// (0x00038450) level_3_battery_lsc

0x2366,	// (0x00038459) level_4_battery_lsc

0x236f,	// (0x00038462) level_5_battery_lsc

0x2378,	// (0x0003846b) level_6_battery_lsc

0x2315,	// (0x00038408) level_7_battery_lsc

0x2381,	// (0x00038474) scroll_handle_focus_pane_g1

0x238a,	// (0x0003847d) scroll_handle_focus_pane_g2

0x2393,	// (0x00038486) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00045803) scroll_handle_focus_pane_g

0xa305,	// (0x000403f8) list_single_2graphic_pane_g1_ParamLimits

0xa305,	// (0x000403f8) list_single_2graphic_pane_g1

0x9b6b,	// (0x0003fc5e) list_single_2graphic_pane_g2_ParamLimits

0x9b6b,	// (0x0003fc5e) list_single_2graphic_pane_g2

0xd319,	// (0x0004340c) list_single_2graphic_pane_g3_ParamLimits

0xd319,	// (0x0004340c) list_single_2graphic_pane_g3

0xa311,	// (0x00040404) list_single_2graphic_pane_g4_ParamLimits

0xa311,	// (0x00040404) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0004580a) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0004580a) list_single_2graphic_pane_g

0xa31d,	// (0x00040410) list_single_2graphic_pane_t1_ParamLimits

0xa31d,	// (0x00040410) list_single_2graphic_pane_t1

0xa34b,	// (0x0004043e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa34b,	// (0x0004043e) list_double2_graphic_large_graphic_pane_g1

0x9bbe,	// (0x0003fcb1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9bbe,	// (0x0003fcb1) list_double2_graphic_large_graphic_pane_g2

0x9bcf,	// (0x0003fcc2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9bcf,	// (0x0003fcc2) list_double2_graphic_large_graphic_pane_g3

0xa35d,	// (0x00040450) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa35d,	// (0x00040450) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00045813) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00045813) list_double2_graphic_large_graphic_pane_g

0xa369,	// (0x0004045c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa369,	// (0x0004045c) list_double2_graphic_large_graphic_pane_t1

0xa37f,	// (0x00040472) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa37f,	// (0x00040472) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0004581c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0004581c) list_double2_graphic_large_graphic_pane_t

0x24d6,	// (0x000385c9) popup_fast_swap_window_ParamLimits

0x24d6,	// (0x000385c9) popup_fast_swap_window

0x24f4,	// (0x000385e7) popup_side_volume_key_window

0x2512,	// (0x00038605) stacon_top_pane

0x251c,	// (0x0003860f) status_pane_ParamLimits

0x251c,	// (0x0003860f) status_pane

0xa3d9,	// (0x000404cc) status_small_pane

0xb8d0,	// (0x000419c3) control_pane

0xb8d0,	// (0x000419c3) stacon_bottom_pane

0xbf51,	// (0x00042044) scroll_pane_cp121

0xbf48,	// (0x0004203b) set_content_pane

0xa391,	// (0x00040484) bg_active_tab_pane_g1_cp1

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp1

0xa39a,	// (0x0004048d) bg_active_tab_pane_g3_cp1

0xa391,	// (0x00040484) bg_passive_tab_pane_g1_cp1

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp1

0xa39a,	// (0x0004048d) bg_passive_tab_pane_g3_cp1

0xa3a3,	// (0x00040496) bg_active_tab_pane_g1_cp2

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp2

0xa3ac,	// (0x0004049f) bg_active_tab_pane_g3_cp2

0xa3a3,	// (0x00040496) bg_passive_tab_pane_g1_cp2

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp2

0xa3ac,	// (0x0004049f) bg_passive_tab_pane_g3_cp2

0xa3b5,	// (0x000404a8) bg_active_tab_pane_g1_cp3

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp3

0xa3be,	// (0x000404b1) bg_active_tab_pane_g3_cp3

0xa3b5,	// (0x000404a8) bg_passive_tab_pane_g1_cp3

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp3

0xa3be,	// (0x000404b1) bg_passive_tab_pane_g3_cp3

0xa3c7,	// (0x000404ba) bg_active_tab_pane_g1_cp4

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp4

0xa3d0,	// (0x000404c3) bg_active_tab_pane_g3_cp4

0xa3c7,	// (0x000404ba) bg_passive_tab_pane_g1_cp4

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp4

0xa3d0,	// (0x000404c3) bg_passive_tab_pane_g3_cp4

0x242f,	// (0x00038522) bg_active_tab_pane_g1_cp5

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp5

0x2438,	// (0x0003852b) bg_active_tab_pane_g3_cp5

0x242f,	// (0x00038522) bg_passive_tab_pane_g1_cp5

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp5

0x2438,	// (0x0003852b) bg_passive_tab_pane_g3_cp5

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane_ParamLimits

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp4

0x2457,	// (0x0003854a) list_set_graphic_pane_g1_ParamLimits

0x2457,	// (0x0003854a) list_set_graphic_pane_g1

0x2463,	// (0x00038556) list_set_graphic_pane_g2_ParamLimits

0x2463,	// (0x00038556) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00045821) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00045821) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00045ba6) volume_small_pane_cp_g

0x2487,	// (0x0003857a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2487,	// (0x0003857a) list_double2_large_graphic_pane_g1_cp2

0x2495,	// (0x00038588) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2495,	// (0x00038588) list_double2_large_graphic_pane_g2_cp2

0x24a6,	// (0x00038599) list_double2_large_graphic_pane_g3_cp2

0x24ae,	// (0x000385a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x24ae,	// (0x000385a1) list_double2_large_graphic_pane_t1_cp2

0x24c4,	// (0x000385b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x24c4,	// (0x000385b7) list_double2_large_graphic_pane_t2_cp2

0x40b0,	// (0x0003a1a3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x40b0,	// (0x0003a1a3) list_double_large_graphic_pane_g1_cp2

0x40c3,	// (0x0003a1b6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x40c3,	// (0x0003a1b6) list_double_large_graphic_pane_g2_cp2

0x2645,	// (0x00038738) list_double_large_graphic_pane_g3_cp2

0x40d4,	// (0x0003a1c7) list_double_large_graphic_pane_g4_cp

0x40dc,	// (0x0003a1cf) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x40dc,	// (0x0003a1cf) list_double_large_graphic_pane_t1_cp2

0x40f3,	// (0x0003a1e6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x40f3,	// (0x0003a1e6) list_double_large_graphic_pane_t2_cp2

0x2535,	// (0x00038628) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2535,	// (0x00038628) list_double2_graphic_pane_g1_cp2

0x2543,	// (0x00038636) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2543,	// (0x00038636) list_double2_graphic_pane_g2_cp2

0x2554,	// (0x00038647) list_double2_graphic_pane_g3_cp2

0x255e,	// (0x00038651) list_double2_graphic_pane_t1_cp2_ParamLimits

0x255e,	// (0x00038651) list_double2_graphic_pane_t1_cp2

0x2574,	// (0x00038667) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2574,	// (0x00038667) list_double2_graphic_pane_t2_cp2

0x2586,	// (0x00038679) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2586,	// (0x00038679) list_single_number_heading_pane_g1_cp2

0x2592,	// (0x00038685) list_single_number_heading_pane_g2_cp2

0x259a,	// (0x0003868d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x259a,	// (0x0003868d) list_single_number_heading_pane_t1_cp2

0x25b0,	// (0x000386a3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x25b0,	// (0x000386a3) list_single_number_heading_pane_t2_cp2

0x25c4,	// (0x000386b7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x25c4,	// (0x000386b7) list_single_number_heading_pane_t3_cp2

0x2586,	// (0x00038679) list_single_heading_pane_g1_cp2_ParamLimits

0x2586,	// (0x00038679) list_single_heading_pane_g1_cp2

0x2592,	// (0x00038685) list_single_heading_pane_g2_cp2

0x259a,	// (0x0003868d) list_single_heading_pane_t1_cp2_ParamLimits

0x259a,	// (0x0003868d) list_single_heading_pane_t1_cp2

0x3eaa,	// (0x00039f9d) list_single_heading_pane_t2_cp2_ParamLimits

0x3eaa,	// (0x00039f9d) list_single_heading_pane_t2_cp2

0x3df2,	// (0x00039ee5) list_double_graphic_pane_g1_cp2_ParamLimits

0x3df2,	// (0x00039ee5) list_double_graphic_pane_g1_cp2

0x3dfe,	// (0x00039ef1) list_double_graphic_pane_g2_cp2_ParamLimits

0x3dfe,	// (0x00039ef1) list_double_graphic_pane_g2_cp2

0x3e0d,	// (0x00039f00) list_double_graphic_pane_g3_cp2

0x3e15,	// (0x00039f08) list_double_graphic_pane_t1_cp2_ParamLimits

0x3e15,	// (0x00039f08) list_double_graphic_pane_t1_cp2

0x3e2b,	// (0x00039f1e) list_double_graphic_pane_t2_cp2_ParamLimits

0x3e2b,	// (0x00039f1e) list_double_graphic_pane_t2_cp2

0x2639,	// (0x0003872c) list_double_number_pane_g1_cp2_ParamLimits

0x2639,	// (0x0003872c) list_double_number_pane_g1_cp2

0x2645,	// (0x00038738) list_double_number_pane_g2_cp2

0x3db6,	// (0x00039ea9) list_double_number_pane_t1_cp2_ParamLimits

0x3db6,	// (0x00039ea9) list_double_number_pane_t1_cp2

0x3dca,	// (0x00039ebd) list_double_number_pane_t2_cp2_ParamLimits

0x3dca,	// (0x00039ebd) list_double_number_pane_t2_cp2

0x3de0,	// (0x00039ed3) list_double_number_pane_t3_cp2_ParamLimits

0x3de0,	// (0x00039ed3) list_double_number_pane_t3_cp2

0x3c9f,	// (0x00039d92) list_single_graphic_pane_g1_cp2_ParamLimits

0x3c9f,	// (0x00039d92) list_single_graphic_pane_g1_cp2

0x26aa,	// (0x0003879d) list_single_graphic_pane_g2_cp2_ParamLimits

0x26aa,	// (0x0003879d) list_single_graphic_pane_g2_cp2

0x26b6,	// (0x000387a9) list_single_graphic_pane_g3_cp2

0x3c75,	// (0x00039d68) list_single_graphic_pane_t1_cp2_ParamLimits

0x3c75,	// (0x00039d68) list_single_graphic_pane_t1_cp2

0x26aa,	// (0x0003879d) list_single_number_pane_g1_cp2_ParamLimits

0x26aa,	// (0x0003879d) list_single_number_pane_g1_cp2

0x26b6,	// (0x000387a9) list_single_number_pane_g2_cp2

0x3c75,	// (0x00039d68) list_single_number_pane_t1_cp2_ParamLimits

0x3c75,	// (0x00039d68) list_single_number_pane_t1_cp2

0x3c8b,	// (0x00039d7e) list_single_number_pane_t2_cp2_ParamLimits

0x3c8b,	// (0x00039d7e) list_single_number_pane_t2_cp2

0x2495,	// (0x00038588) list_double2_pane_g1_cp2_ParamLimits

0x2495,	// (0x00038588) list_double2_pane_g1_cp2

0x24a6,	// (0x00038599) list_double2_pane_g2_cp2

0x2611,	// (0x00038704) list_double2_pane_t1_cp2_ParamLimits

0x2611,	// (0x00038704) list_double2_pane_t1_cp2

0x2627,	// (0x0003871a) list_double2_pane_t2_cp2_ParamLimits

0x2627,	// (0x0003871a) list_double2_pane_t2_cp2

0x2639,	// (0x0003872c) list_double_pane_g1_cp2_ParamLimits

0x2639,	// (0x0003872c) list_double_pane_g1_cp2

0x2645,	// (0x00038738) list_double_pane_g2_cp2

0x264d,	// (0x00038740) list_double_pane_t1_cp2_ParamLimits

0x264d,	// (0x00038740) list_double_pane_t1_cp2

0x2663,	// (0x00038756) list_double_pane_t2_cp2_ParamLimits

0x2663,	// (0x00038756) list_double_pane_t2_cp2

0x269a,	// (0x0003878d) list_single_pane_cp2_g3

0x26aa,	// (0x0003879d) list_single_pane_g1_cp2_ParamLimits

0x26aa,	// (0x0003879d) list_single_pane_g1_cp2

0x26b6,	// (0x000387a9) list_single_pane_g2_cp2

0x26be,	// (0x000387b1) list_single_pane_t1_cp2_ParamLimits

0x26be,	// (0x000387b1) list_single_pane_t1_cp2

0x26d6,	// (0x000387c9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x26d6,	// (0x000387c9) list_single_large_graphic_pane_g1_cp2

0x26e4,	// (0x000387d7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x26e4,	// (0x000387d7) list_single_large_graphic_pane_g2_cp2

0x26f0,	// (0x000387e3) list_single_large_graphic_pane_g3_cp2

0x26f8,	// (0x000387eb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x26f8,	// (0x000387eb) list_single_large_graphic_pane_g4_cp1

0x2712,	// (0x00038805) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2712,	// (0x00038805) list_single_large_graphic_pane_t1_cp2

0x3c3f,	// (0x00039d32) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3c3f,	// (0x00039d32) list_single_graphic_heading_pane_g1_cp2

0x3c0c,	// (0x00039cff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3c0c,	// (0x00039cff) list_single_graphic_heading_pane_g4_cp2

0x26b6,	// (0x000387a9) list_single_graphic_heading_pane_g5_cp2

0x3c4b,	// (0x00039d3e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3c4b,	// (0x00039d3e) list_single_graphic_heading_pane_t1_cp2

0x3c61,	// (0x00039d54) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3c61,	// (0x00039d54) list_single_graphic_heading_pane_t2_cp2

0x3c00,	// (0x00039cf3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3c00,	// (0x00039cf3) list_single_2graphic_pane_g1_cp2

0x3c0c,	// (0x00039cff) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3c0c,	// (0x00039cff) list_single_2graphic_pane_g2_cp2

0x26b6,	// (0x000387a9) list_single_2graphic_pane_g3_cp2

0x3c1d,	// (0x00039d10) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3c1d,	// (0x00039d10) list_single_2graphic_pane_g4_cp2

0x3c29,	// (0x00039d1c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3c29,	// (0x00039d1c) list_single_2graphic_pane_t1_cp2

0xb8c6,	// (0x000419b9) list_highlight_pane_g10_cp1

0x37d8,	// (0x000398cb) list_highlight_pane_g1_cp1

0x37e0,	// (0x000398d3) list_highlight_pane_g2_cp1

0x37e8,	// (0x000398db) list_highlight_pane_g3_cp1

0x37f0,	// (0x000398e3) list_highlight_pane_g4_cp1

0x37f8,	// (0x000398eb) list_highlight_pane_g5_cp1

0x3800,	// (0x000398f3) list_highlight_pane_g6_cp1

0x3808,	// (0x000398fb) list_highlight_pane_g7_cp1

0x3810,	// (0x00039903) list_highlight_pane_g8_cp1

0x3818,	// (0x0003990b) list_highlight_pane_g9_cp1

0xc58a,	// (0x0004267d) form_field_slider_pane_t3

0xc598,	// (0x0004268b) form_field_slider_pane_t4

0x3714,	// (0x00039807) slider_form_pane_ParamLimits

0x3714,	// (0x00039807) slider_form_pane

0xb8d0,	// (0x000419c3) control_abbreviations

0xb8d0,	// (0x000419c3) control_conventions

0xb8d0,	// (0x000419c3) control_definitions

0xb8d0,	// (0x000419c3) format_table_attribute

0x3f00,	// (0x00039ff3) bg_popup_preview_window_pane_g9

0xb8d0,	// (0x000419c3) format_table_data2

0xb8d0,	// (0x000419c3) format_table_data3

0xb8d0,	// (0x000419c3) format_table_data_example

0x0008,

0xb8d0,	// (0x000419c3) intro_purpose

0xf8c5,	// (0x000459b8) bg_popup_preview_window_pane_g

0xb8d0,	// (0x000419c3) texts_category

0xb8d0,	// (0x000419c3) texts_graphics

0x2728,	// (0x0003881b) text_digital

0x2737,	// (0x0003882a) text_primary

0x2746,	// (0x00038839) text_primary_small

0x2755,	// (0x00038848) text_secondary

0x2764,	// (0x00038857) text_title

0x4644,	// (0x0003a737) bg_passive_tab_pane_g1_cp3_srt

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp3_srt

0x464d,	// (0x0003a740) bg_passive_tab_pane_g3_cp3_srt

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp3_srt_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp3_srt

0x4656,	// (0x0003a749) tabs_4_active_pane_srt_g1

0xc9a2,	// (0x00042a95) tabs_4_active_pane_srt_t1_ParamLimits

0xc9a2,	// (0x00042a95) tabs_4_active_pane_srt_t1

0x4644,	// (0x0003a737) bg_active_tab_pane_g1_cp3_copy1

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp3_copy1

0x464d,	// (0x0003a740) bg_active_tab_pane_g3_cp3_copy1

0xb92c,	// (0x00041a1f) tabs_2_long_active_pane_srt_ParamLimits

0xb92c,	// (0x00041a1f) tabs_2_long_active_pane_srt

0xb92c,	// (0x00041a1f) tabs_2_long_passive_pane_srt_ParamLimits

0xb92c,	// (0x00041a1f) tabs_2_long_passive_pane_srt

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp4_srt

0x433a,	// (0x0003a42d) bg_passive_tab_pane_g1_cp4_srt

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp4_srt

0x4343,	// (0x0003a436) bg_passive_tab_pane_g3_cp4_srt

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp4_srt_ParamLimits

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp4_srt

0xc76a,	// (0x0004285d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc76a,	// (0x0004285d) tabs_2_long_active_pane_srt_t1

0x433a,	// (0x0003a42d) bg_active_tab_pane_g1_cp4_srt

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp4_srt

0x4343,	// (0x0003a436) bg_active_tab_pane_g3_cp4_srt

0xb91e,	// (0x00041a11) tabs_3_long_active_pane_srt_ParamLimits

0xb91e,	// (0x00041a11) tabs_3_long_active_pane_srt

0xb91e,	// (0x00041a11) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb91e,	// (0x00041a11) tabs_3_long_passive_pane_cp_srt

0xb91e,	// (0x00041a11) tabs_3_long_passive_pane_srt_ParamLimits

0xb91e,	// (0x00041a11) tabs_3_long_passive_pane_srt

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp5_srt

0x242f,	// (0x00038522) bg_passive_tab_pane_g1_cp5_srt

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp5_srt

0x2438,	// (0x0003852b) bg_passive_tab_pane_g3_cp5_srt

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp5_srt_ParamLimits

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp5_srt

0xc754,	// (0x00042847) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc754,	// (0x00042847) tabs_3_long_active_pane_srt_t1

0x242f,	// (0x00038522) bg_active_tab_pane_g1_cp5_srt

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp5_srt

0x2438,	// (0x0003852b) bg_active_tab_pane_g3_cp5_srt

0x431a,	// (0x0003a40d) navi_text_pane_srt_t1

0x4312,	// (0x0003a405) navi_icon_pane_srt_g1

0x293c,	// (0x00038a2f) midp_editing_number_pane_srt

0x2773,	// (0x00038866) midp_ticker_pane_srt

0x2944,	// (0x00038a37) midp_ticker_pane_srt_g1

0x294c,	// (0x00038a3f) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00045840) midp_ticker_pane_srt_g

0x2954,	// (0x00038a47) midp_ticker_pane_srt_t1

0x4303,	// (0x0003a3f6) midp_editing_number_pane_t1_copy1

0xa3e4,	// (0x000404d7) listscroll_midp_pane

0xa3e4,	// (0x000404d7) midp_form_pane

0x27ea,	// (0x000388dd) midp_info_popup_window_ParamLimits

0x27ea,	// (0x000388dd) midp_info_popup_window

0xc055,	// (0x00042148) bg_popup_sub_pane_cp50_ParamLimits

0xc055,	// (0x00042148) bg_popup_sub_pane_cp50

0x33fa,	// (0x000394ed) listscroll_midp_info_pane_ParamLimits

0x33fa,	// (0x000394ed) listscroll_midp_info_pane

0x33da,	// (0x000394cd) listscroll_form_midp_pane_ParamLimits

0x33da,	// (0x000394cd) listscroll_form_midp_pane

0x33e6,	// (0x000394d9) scroll_bar_cp050

0x33da,	// (0x000394cd) list_midp_pane

0x50f8,	// (0x0003b1eb) signal_pane_g2_cp

0x32f4,	// (0x000393e7) listscroll_midp_info_pane_t1_ParamLimits

0x32f4,	// (0x000393e7) listscroll_midp_info_pane_t1

0x330c,	// (0x000393ff) listscroll_midp_info_pane_t2_ParamLimits

0x330c,	// (0x000393ff) listscroll_midp_info_pane_t2

0x334a,	// (0x0003943d) listscroll_midp_info_pane_t3_ParamLimits

0x334a,	// (0x0003943d) listscroll_midp_info_pane_t3

0x3384,	// (0x00039477) listscroll_midp_info_pane_t4_ParamLimits

0x3384,	// (0x00039477) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000458f3) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000458f3) listscroll_midp_info_pane_t

0xc0aa,	// (0x0004219d) scroll_pane_cp21

0x328e,	// (0x00039381) form_midp_field_choice_group_pane

0x3297,	// (0x0003938a) form_midp_field_text_pane

0x32da,	// (0x000393cd) form_midp_field_time_pane

0x32e2,	// (0x000393d5) form_midp_gauge_slider_pane

0x32eb,	// (0x000393de) form_midp_gauge_wait_pane

0xb8d0,	// (0x000419c3) form_midp_image_pane

0xaea0,	// (0x00040f93) list_single_midp_pane_ParamLimits

0xaea0,	// (0x00040f93) list_single_midp_pane

0xc562,	// (0x00042655) form_midp_field_text_pane_t1

0x3044,	// (0x00039137) input_focus_pane_cp050

0x327d,	// (0x00039370) list_midp_form_text_pane

0x3221,	// (0x00039314) form_midp_field_choice_group_pane_t1

0x322f,	// (0x00039322) input_focus_pane_cp051

0x3243,	// (0x00039336) list_midp_choice_pane

0xb8d0,	// (0x000419c3) status_idle_pane

0x3205,	// (0x000392f8) form_midp_field_time_pane_t1

0xb8c6,	// (0x000419b9) wait_anim_pane_g2_copy1

0x3213,	// (0x00039306) form_midp_field_time_pane_t2

0x0001,

0x289a,	// (0x0003898d) aid_navinavi_width_2_pane

0xf7fb,	// (0x000458ee) form_midp_field_time_pane_t

0xb8d0,	// (0x000419c3) input_focus_pane_cp052

0xb8d0,	// (0x000419c3) bg_input_focus_pane_cp040

0x31c5,	// (0x000392b8) form_midp_gauge_slider_pane_t1

0x31d3,	// (0x000392c6) form_midp_gauge_slider_pane_t2

0xc546,	// (0x00042639) form_midp_gauge_slider_pane_t3

0xc554,	// (0x00042647) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000458e5) form_midp_gauge_slider_pane_t

0x31fd,	// (0x000392f0) form_midp_slider_pane

0xb92c,	// (0x00041a1f) bg_input_focus_pane_cp041_ParamLimits

0xb92c,	// (0x00041a1f) bg_input_focus_pane_cp041

0x3192,	// (0x00039285) form_midp_gauge_wait_pane_t1_ParamLimits

0x3192,	// (0x00039285) form_midp_gauge_wait_pane_t1

0x31a4,	// (0x00039297) form_midp_gauge_wait_pane_t2_ParamLimits

0x31a4,	// (0x00039297) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000458e0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000458e0) form_midp_gauge_wait_pane_t

0x31b6,	// (0x000392a9) form_midp_wait_pane_ParamLimits

0x31b6,	// (0x000392a9) form_midp_wait_pane

0x315a,	// (0x0003924d) form_midp_image_pane_g1

0x3163,	// (0x00039256) form_midp_image_pane_t1

0x3172,	// (0x00039265) form_midp_image_pane_t2

0x3181,	// (0x00039274) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000458d9) form_midp_image_pane_t

0x3151,	// (0x00039244) list_single_midp_pane_g1

0xd58d,	// (0x00043680) list_single_midp_pane_t1

0xc52f,	// (0x00042622) list_midp_form_item_pane_ParamLimits

0xc52f,	// (0x00042622) list_midp_form_item_pane

0x2842,	// (0x00038935) list_midp_form_item_pane_t1

0x2851,	// (0x00038944) midp_ticker_pane_g1

0x285d,	// (0x00038950) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00045826) midp_ticker_pane_g

0xa488,	// (0x0004057b) midp_ticker_pane_t1

0xc8f3,	// (0x000429e6) midp_editing_number_pane_t1

0x454e,	// (0x0003a641) midp_editing_number_pane

0x455d,	// (0x0003a650) midp_ticker_pane

0x42f3,	// (0x0003a3e6) ai_message_heading_pane

0xb8d0,	// (0x000419c3) bg_popup_window_pane_cp14

0x42fb,	// (0x0003a3ee) listscroll_ai_message_pane

0x4279,	// (0x0003a36c) ai_message_heading_pane_g1_ParamLimits

0x4279,	// (0x0003a36c) ai_message_heading_pane_g1

0x4285,	// (0x0003a378) ai_message_heading_pane_g2_ParamLimits

0x4285,	// (0x0003a378) ai_message_heading_pane_g2

0x4293,	// (0x0003a386) ai_message_heading_pane_g3_ParamLimits

0x4293,	// (0x0003a386) ai_message_heading_pane_g3

0x429f,	// (0x0003a392) ai_message_heading_pane_g4_ParamLimits

0x429f,	// (0x0003a392) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00045a1a) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00045a1a) ai_message_heading_pane_g

0x42ab,	// (0x0003a39e) ai_message_heading_pane_t1_ParamLimits

0x42ab,	// (0x0003a39e) ai_message_heading_pane_t1

0x42c5,	// (0x0003a3b8) ai_message_heading_pane_t2_ParamLimits

0x42c5,	// (0x0003a3b8) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00045a23) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00045a23) ai_message_heading_pane_t

0x42d9,	// (0x0003a3cc) bg_popup_heading_pane_cp1_ParamLimits

0x42d9,	// (0x0003a3cc) bg_popup_heading_pane_cp1

0x4267,	// (0x0003a35a) list_ai_message_pane_ParamLimits

0x4267,	// (0x0003a35a) list_ai_message_pane

0xc0aa,	// (0x0004219d) scroll_pane_cp10

0x4203,	// (0x0003a2f6) list_ai_message_pane_g1

0x420b,	// (0x0003a2fe) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000459f7) list_ai_message_pane_g

0x4213,	// (0x0003a306) list_ai_message_pane_t1_ParamLimits

0x4213,	// (0x0003a306) list_ai_message_pane_t1

0x4228,	// (0x0003a31b) list_ai_message_pane_t2_ParamLimits

0x4228,	// (0x0003a31b) list_ai_message_pane_t2

0x423d,	// (0x0003a330) list_ai_message_pane_t3_ParamLimits

0x423d,	// (0x0003a330) list_ai_message_pane_t3

0x4252,	// (0x0003a345) list_ai_message_pane_t4_ParamLimits

0x4252,	// (0x0003a345) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000459fc) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000459fc) list_ai_message_pane_t

0xc73a,	// (0x0004282d) cell_ai_soft_ind_pane_ParamLimits

0xc73a,	// (0x0004282d) cell_ai_soft_ind_pane

0x287b,	// (0x0003896e) cell_ai_soft_ind_pane_g1_ParamLimits

0x287b,	// (0x0003896e) cell_ai_soft_ind_pane_g1

0xb8d0,	// (0x000419c3) grid_highlight_cp1

0x2888,	// (0x0003897b) text_secondary_cp56_ParamLimits

0x2888,	// (0x0003897b) text_secondary_cp56

0x41c1,	// (0x0003a2b4) example_general_pane_ParamLimits

0x41c1,	// (0x0003a2b4) example_general_pane

0x41cd,	// (0x0003a2c0) example_parent_pane_g1_ParamLimits

0x41cd,	// (0x0003a2c0) example_parent_pane_g1

0x41d9,	// (0x0003a2cc) example_parent_pane_t1_ParamLimits

0x41d9,	// (0x0003a2cc) example_parent_pane_t1

0xab12,	// (0x00040c05) popup_preview_text_window_ParamLimits

0xab12,	// (0x00040c05) popup_preview_text_window

0x26a2,	// (0x00038795) list_single_pane_cp2_g4

0xbb2d,	// (0x00041c20) bg_popup_preview_window_pane_ParamLimits

0xbb2d,	// (0x00041c20) bg_popup_preview_window_pane

0x3f0a,	// (0x00039ffd) popup_preview_text_window_t1_ParamLimits

0x3f0a,	// (0x00039ffd) popup_preview_text_window_t1

0x3f28,	// (0x0003a01b) popup_preview_text_window_t2_ParamLimits

0x3f28,	// (0x0003a01b) popup_preview_text_window_t2

0x3f71,	// (0x0003a064) popup_preview_text_window_t3_ParamLimits

0x3f71,	// (0x0003a064) popup_preview_text_window_t3

0x3fb6,	// (0x0003a0a9) popup_preview_text_window_t4_ParamLimits

0x3fb6,	// (0x0003a0a9) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000459cb) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000459cb) popup_preview_text_window_t

0x4034,	// (0x0003a127) scroll_pane_cp11

0x2fd0,	// (0x000390c3) bg_popup_preview_window_pane_g1

0x3ebe,	// (0x00039fb1) bg_popup_preview_window_pane_g2

0x3ec8,	// (0x00039fbb) bg_popup_preview_window_pane_g3

0x3ed2,	// (0x00039fc5) bg_popup_preview_window_pane_g4

0x3edc,	// (0x00039fcf) bg_popup_preview_window_pane_g5

0x3ee6,	// (0x00039fd9) bg_popup_preview_window_pane_g6

0x3eee,	// (0x00039fe1) bg_popup_preview_window_pane_g7

0x3ef6,	// (0x00039fe9) bg_popup_preview_window_pane_g8

0xebd2,	// (0x00044cc5) aid_popup_width_pane

0xaa82,	// (0x00040b75) popup_midp_note_alarm_window_ParamLimits

0xaa82,	// (0x00040b75) popup_midp_note_alarm_window

0xbf62,	// (0x00042055) data_form_pane_ParamLimits

0x9f7b,	// (0x0004006e) form_field_data_pane_g1

0x9f85,	// (0x00040078) form_field_data_pane_t1_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_ParamLimits

0xd40a,	// (0x000434fd) data_form_wide_pane_ParamLimits

0xd41b,	// (0x0004350e) form_field_data_wide_pane_g1

0xd427,	// (0x0004351a) form_field_data_wide_pane_t1_ParamLimits

0xbce9,	// (0x00041ddc) input_focus_pane_cp6_ParamLimits

0xa0b3,	// (0x000401a6) input_popup_find_pane_g1_ParamLimits

0xa0b3,	// (0x000401a6) input_popup_find_pane_g1

0xf152,	// (0x00045245) aid_navi_side_left_pane

0xf167,	// (0x0004525a) aid_navi_side_right_pane

0x38d3,	// (0x000399c6) bg_popup_window_pane_cp30_ParamLimits

0x38d3,	// (0x000399c6) bg_popup_window_pane_cp30

0x394d,	// (0x00039a40) popup_midp_note_alarm_window_g1_ParamLimits

0x394d,	// (0x00039a40) popup_midp_note_alarm_window_g1

0x397d,	// (0x00039a70) popup_midp_note_alarm_window_t1_ParamLimits

0x397d,	// (0x00039a70) popup_midp_note_alarm_window_t1

0x3a1e,	// (0x00039b11) popup_midp_note_alarm_window_t2_ParamLimits

0x3a1e,	// (0x00039b11) popup_midp_note_alarm_window_t2

0x3acc,	// (0x00039bbf) popup_midp_note_alarm_window_t3_ParamLimits

0x3acc,	// (0x00039bbf) popup_midp_note_alarm_window_t3

0x3afe,	// (0x00039bf1) popup_midp_note_alarm_window_t4_ParamLimits

0x3afe,	// (0x00039bf1) popup_midp_note_alarm_window_t4

0x3b24,	// (0x00039c17) popup_midp_note_alarm_window_t5_ParamLimits

0x3b24,	// (0x00039c17) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00045968) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00045968) popup_midp_note_alarm_window_t

0x3bd0,	// (0x00039cc3) wait_bar_pane_cp1_ParamLimits

0x3bd0,	// (0x00039cc3) wait_bar_pane_cp1

0xb8d0,	// (0x000419c3) wait_anim_pane_copy1

0xb8d0,	// (0x000419c3) wait_border_pane_copy1

0x35b8,	// (0x000396ab) wait_border_pane_g1_copy1

0xd441,	// (0x00043534) form_field_popup_pane_g1

0x9f9f,	// (0x00040092) form_field_popup_pane_t1_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_cp7_ParamLimits

0xbf9c,	// (0x0004208f) list_form_pane_ParamLimits

0xd449,	// (0x0004353c) form_field_popup_wide_pane_g1

0xd451,	// (0x00043544) form_field_popup_wide_pane_t1_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_cp8_ParamLimits

0xbfa8,	// (0x0004209b) list_form_wide_pane_ParamLimits

0x46df,	// (0x0003a7d2) aid_size_cell_graphic_pane

0xa01e,	// (0x00040111) data_form_pane_t1_ParamLimits

0xb036,	// (0x00041129) data_form_wide_pane_t1_ParamLimits

0xc1ca,	// (0x000422bd) bg_status_flat_pane

0x97a6,	// (0x0003f899) title_pane_t1_ParamLimits

0xb8e6,	// (0x000419d9) title_pane_t2_ParamLimits

0xb90c,	// (0x000419ff) title_pane_t3_ParamLimits

0xf532,	// (0x00045625) title_pane_t_ParamLimits

0xa1de,	// (0x000402d1) level_1_signal_ParamLimits

0xa1f0,	// (0x000402e3) level_2_signal_ParamLimits

0xa203,	// (0x000402f6) level_3_signal_ParamLimits

0xa216,	// (0x00040309) level_4_signal_ParamLimits

0xa229,	// (0x0004031c) level_5_signal_ParamLimits

0xa23c,	// (0x0004032f) level_6_signal_ParamLimits

0xa24f,	// (0x00040342) level_7_signal_ParamLimits

0xa1de,	// (0x000402d1) level_1_battery_ParamLimits

0xa1f0,	// (0x000402e3) level_2_battery_ParamLimits

0xa203,	// (0x000402f6) level_3_battery_ParamLimits

0xa216,	// (0x00040309) level_4_battery_ParamLimits

0xa229,	// (0x0004031c) level_5_battery_ParamLimits

0xa23c,	// (0x0004032f) level_6_battery_ParamLimits

0xa24f,	// (0x00040342) level_7_battery_ParamLimits

0x37d8,	// (0x000398cb) bg_status_flat_pane_g1

0x37e0,	// (0x000398d3) bg_status_flat_pane_g2

0x37e8,	// (0x000398db) bg_status_flat_pane_g3

0x37f0,	// (0x000398e3) bg_status_flat_pane_g4

0x37f8,	// (0x000398eb) bg_status_flat_pane_g5

0x3800,	// (0x000398f3) bg_status_flat_pane_g6

0x3808,	// (0x000398fb) bg_status_flat_pane_g7

0x983a,	// (0x0003f92d) tabs_3_active_pane_t1_ParamLimits

0x983a,	// (0x0003f92d) tabs_3_passive_pane_t1_ParamLimits

0x9854,	// (0x0003f947) tabs_4_active_pane_t1_ParamLimits

0x9854,	// (0x0003f947) tabs_4_1_passive_pane_t1_ParamLimits

0xa0c9,	// (0x000401bc) tabs_2_active_pane_t1_ParamLimits

0xa0c9,	// (0x000401bc) tabs_2_passive_pane_t1_ParamLimits

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp4_ParamLimits

0xa0db,	// (0x000401ce) tabs_2_long_active_pane_t1_ParamLimits

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp4_ParamLimits

0x0aab,	// (0x00036b9e) list_single_midp_graphic_pane_t1_ParamLimits

0xb92c,	// (0x00041a1f) bg_active_tab_pane_cp5_ParamLimits

0xa0ee,	// (0x000401e1) tabs_3_long_active_pane_t1_ParamLimits

0x2a9a,	// (0x00038b8d) bg_passive_tab_pane_cp5_ParamLimits

0x0aab,	// (0x00036b9e) list_single_midp_graphic_pane_t1

0xc1ca,	// (0x000422bd) bg_status_flat_pane_ParamLimits

0x2c54,	// (0x00038d47) indicator_pane_cp2_ParamLimits

0x2c54,	// (0x00038d47) indicator_pane_cp2

0xc360,	// (0x00042453) navi_pane_srt_ParamLimits

0xc360,	// (0x00042453) navi_pane_srt

0x2dbb,	// (0x00038eae) popup_clock_digital_analogue_window_cp1

0xb970,	// (0x00041a63) indicator_pane_t1

0x2773,	// (0x00038866) copy_highlight_pane

0x2773,	// (0x00038866) cursor_graphics_pane

0x2773,	// (0x00038866) graphic_within_text_pane

0x2773,	// (0x00038866) link_highlight_pane

0x3ff7,	// (0x0003a0ea) popup_preview_text_window_t5_ParamLimits

0x3ff7,	// (0x0003a0ea) popup_preview_text_window_t5

0x28a4,	// (0x00038997) cursor_digital_pane

0x28a4,	// (0x00038997) cursor_primary_pane

0x28b5,	// (0x000389a8) cursor_primary_small_pane

0x28bd,	// (0x000389b0) cursor_secondary_pane

0x28c5,	// (0x000389b8) cursor_title_pane

0x28a4,	// (0x00038997) link_highlight_digital_pane

0x28ac,	// (0x0003899f) link_highlight_primary_pane

0x28b5,	// (0x000389a8) link_highlight_primary_small_pane

0x28bd,	// (0x000389b0) link_highlight_secondary_pane

0x28c5,	// (0x000389b8) link_highlight_title_pane

0x28a4,	// (0x00038997) copy_highlight_digital_pane

0x28a4,	// (0x00038997) copy_highlight_primary_pane

0x28b5,	// (0x000389a8) copy_highlight_primary_small_pane

0x28bd,	// (0x000389b0) copy_highlight_secondary_pane

0x28c5,	// (0x000389b8) copy_highlight_title_pane

0x28bd,	// (0x000389b0) graphic_text_digital_pane

0x3876,	// (0x00039969) graphic_text_primary_pane

0x387f,	// (0x00039972) graphic_text_primary_small_pane

0x28b5,	// (0x000389a8) graphic_text_secondary_pane

0x28a4,	// (0x00038997) graphic_text_title_pane

0xa49a,	// (0x0004058d) cursor_primary_pane_g1

0x3868,	// (0x0003995b) cursor_text_primary_t1

0xc5ba,	// (0x000426ad) cursor_primary_small_pane_g1

0x385a,	// (0x0003994d) cursor_text_primary_small_t1

0xc5b0,	// (0x000426a3) cursor_primary_small_pane_g1_copy1

0x3842,	// (0x00039935) cursor_text_primary_small_t1_copy1

0x3820,	// (0x00039913) cursor_text_title_t1

0xc5a6,	// (0x00042699) cursor_title_pane_g1

0xa49a,	// (0x0004058d) cursor_digital_pane_g1

0x28d7,	// (0x000389ca) cursor_text_digital_t1

0x28e5,	// (0x000389d8) link_highlight_primary_pane_g1

0x37c9,	// (0x000398bc) link_highlight_primary_pane_t1

0x28e5,	// (0x000389d8) link_highlight_primary_small_pane_g1

0x28ed,	// (0x000389e0) link_highlight_primary_small_pane_t1

0x28fc,	// (0x000389ef) link_highlight_secondary_pane_g1

0x2904,	// (0x000389f7) link_highlight_secondary_pane_t1

0x373d,	// (0x00039830) link_highlight_title_pane_g1

0x3745,	// (0x00039838) link_highlight_title_pane_t1

0x3726,	// (0x00039819) link_highlight_digital_pane_g1

0x372e,	// (0x00039821) link_highlight_digital_pane_t1

0x35ee,	// (0x000396e1) copy_highlight_primary_pane_g1

0x3605,	// (0x000396f8) copy_highlight_primary_pane_t1

0x35ee,	// (0x000396e1) copy_highlight_primary_small_pane_g1

0x35f6,	// (0x000396e9) copy_highlight_primary_small_pane_t1

0x2913,	// (0x00038a06) copy_highlight_secondary_pane_g1

0x291b,	// (0x00038a0e) copy_highlight_secondary_pane_t1

0x35d7,	// (0x000396ca) copy_highlight_title_pane_g1

0x35df,	// (0x000396d2) copy_highlight_title_pane_t1

0x35ee,	// (0x000396e1) copy_highlight_digital_pane_g1

0x48b1,	// (0x0003a9a4) copy_highlight_digital_pane_t1

0x4805,	// (0x0003a8f8) graphic_text_primary_pane_g1

0x4895,	// (0x0003a988) graphic_text_primary_pane_t1

0x48a3,	// (0x0003a996) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00045a97) graphic_text_primary_pane_t

0x4871,	// (0x0003a964) graphic_text_primary_small_pane_g1

0x4879,	// (0x0003a96c) graphic_text_primary_small_pane_t1

0x4887,	// (0x0003a97a) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00045a92) graphic_text_primary_small_pane_t

0x484d,	// (0x0003a940) graphic_text_secondary_pane_g1

0x4855,	// (0x0003a948) graphic_text_secondary_pane_t1

0x4863,	// (0x0003a956) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00045a8d) graphic_text_secondary_pane_t

0x4829,	// (0x0003a91c) graphic_text_title_pane_g1

0x4831,	// (0x0003a924) graphic_text_title_pane_t1

0x483f,	// (0x0003a932) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00045a88) graphic_text_title_pane_t

0x4805,	// (0x0003a8f8) graphic_text_digital_pane_g1

0x480d,	// (0x0003a900) graphic_text_digital_pane_t1

0x481b,	// (0x0003a90e) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00045a83) graphic_text_digital_pane_t

0xb92c,	// (0x00041a1f) navi_icon_pane_srt_ParamLimits

0xb92c,	// (0x00041a1f) navi_icon_pane_srt

0xb8d0,	// (0x000419c3) navi_midp_pane_srt

0xb8d0,	// (0x000419c3) navi_navi_pane_srt

0xb92c,	// (0x00041a1f) navi_text_pane_srt_ParamLimits

0xb92c,	// (0x00041a1f) navi_text_pane_srt

0x47d0,	// (0x0003a8c3) navi_navi_icon_text_pane_srt

0x47d8,	// (0x0003a8cb) navi_navi_pane_srt_g1_ParamLimits

0x47d8,	// (0x0003a8cb) navi_navi_pane_srt_g1

0x47ea,	// (0x0003a8dd) navi_navi_pane_srt_g2_ParamLimits

0x47ea,	// (0x0003a8dd) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00045a7e) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00045a7e) navi_navi_pane_srt_g

0x47fc,	// (0x0003a8ef) navi_navi_tabs_pane_srt

0x47d0,	// (0x0003a8c3) navi_navi_text_pane_srt

0x47d0,	// (0x0003a8c3) navi_navi_volume_pane_srt

0x47c1,	// (0x0003a8b4) navi_navi_text_pane_srt_t1

0x0f32,	// (0x00037025) navi_navi_volume_pane_srt_g1

0x0f3a,	// (0x0003702d) volume_small_pane_srt_ParamLimits

0x0f3a,	// (0x0003702d) volume_small_pane_srt

0x01bb,	// (0x000362ae) volume_small_pane_srt_g1_ParamLimits

0x01bb,	// (0x000362ae) volume_small_pane_srt_g1

0x01cb,	// (0x000362be) volume_small_pane_srt_g2_ParamLimits

0x01cb,	// (0x000362be) volume_small_pane_srt_g2

0x01dc,	// (0x000362cf) volume_small_pane_srt_g3_ParamLimits

0x01dc,	// (0x000362cf) volume_small_pane_srt_g3

0x01ed,	// (0x000362e0) volume_small_pane_srt_g4_ParamLimits

0x01ed,	// (0x000362e0) volume_small_pane_srt_g4

0x01fe,	// (0x000362f1) volume_small_pane_srt_g5_ParamLimits

0x01fe,	// (0x000362f1) volume_small_pane_srt_g5

0x020f,	// (0x00036302) volume_small_pane_srt_g6_ParamLimits

0x020f,	// (0x00036302) volume_small_pane_srt_g6

0x0220,	// (0x00036313) volume_small_pane_srt_g7_ParamLimits

0x0220,	// (0x00036313) volume_small_pane_srt_g7

0x0231,	// (0x00036324) volume_small_pane_srt_g8_ParamLimits

0x0231,	// (0x00036324) volume_small_pane_srt_g8

0x0242,	// (0x00036335) volume_small_pane_srt_g9_ParamLimits

0x0242,	// (0x00036335) volume_small_pane_srt_g9

0x0253,	// (0x00036346) volume_small_pane_srt_g10_ParamLimits

0x0253,	// (0x00036346) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0004582b) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0004582b) volume_small_pane_srt_g

0xbbe2,	// (0x00041cd5) query_popup_data_pane_cp2

0x47a7,	// (0x0003a89a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x47a7,	// (0x0003a89a) navi_navi_icon_text_pane_srt_t1

0x3876,	// (0x00039969) navi_tabs_2_long_pane_srt

0x3876,	// (0x00039969) navi_tabs_2_pane_srt

0x3876,	// (0x00039969) navi_tabs_3_long_pane_srt

0x3876,	// (0x00039969) navi_tabs_3_pane_srt

0x3876,	// (0x00039969) navi_tabs_4_pane_srt

0x0f12,	// (0x00037005) tabs_2_active_pane_srt_ParamLimits

0x0f12,	// (0x00037005) tabs_2_active_pane_srt

0x0f22,	// (0x00037015) tabs_2_passive_pane_srt_ParamLimits

0x0f22,	// (0x00037015) tabs_2_passive_pane_srt

0x3044,	// (0x00039137) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3044,	// (0x00039137) bg_passive_tab_pane_cp1_srt

0x4773,	// (0x0003a866) bg_passive_tab_pane_g1_cp1_srt

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp1_srt

0x477c,	// (0x0003a86f) bg_passive_tab_pane_g3_cp1_srt

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp1_srt_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp1_srt

0x4785,	// (0x0003a878) tabs_2_active_pane_srt_g1

0xca2a,	// (0x00042b1d) tabs_2_active_pane_srt_t1_ParamLimits

0xca2a,	// (0x00042b1d) tabs_2_active_pane_srt_t1

0x4773,	// (0x0003a866) bg_active_tab_pane_g1_cp1_srt

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp1_srt

0x477c,	// (0x0003a86f) bg_active_tab_pane_g3_cp1_srt

0x0edf,	// (0x00036fd2) tabs_3_active_pane_srt_ParamLimits

0x0edf,	// (0x00036fd2) tabs_3_active_pane_srt

0x0ef0,	// (0x00036fe3) tabs_3_passive_pane_cp_srt_ParamLimits

0x0ef0,	// (0x00036fe3) tabs_3_passive_pane_cp_srt

0x0f01,	// (0x00036ff4) tabs_3_passive_pane_srt_ParamLimits

0x0f01,	// (0x00036ff4) tabs_3_passive_pane_srt

0x3044,	// (0x00039137) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3044,	// (0x00039137) bg_passive_tab_pane_cp2_srt

0x292a,	// (0x00038a1d) bg_passive_tab_pane_g1_cp2_srt

0x23a5,	// (0x00038498) bg_passive_tab_pane_g2_cp2_srt

0x2933,	// (0x00038a26) bg_passive_tab_pane_g3_cp2_srt

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp2_srt_ParamLimits

0xb91e,	// (0x00041a11) bg_active_tab_pane_cp2_srt

0x4759,	// (0x0003a84c) tabs_3_active_pane_srt_g1

0xca14,	// (0x00042b07) tabs_3_active_pane_srt_t1_ParamLimits

0xca14,	// (0x00042b07) tabs_3_active_pane_srt_t1

0x292a,	// (0x00038a1d) bg_active_tab_pane_g1_cp2_srt

0x23a5,	// (0x00038498) bg_active_tab_pane_g2_cp2_srt

0x2933,	// (0x00038a26) bg_active_tab_pane_g3_cp2_srt

0x0e97,	// (0x00036f8a) tabs_4_active_pane_srt_ParamLimits

0x0e97,	// (0x00036f8a) tabs_4_active_pane_srt

0x0ea9,	// (0x00036f9c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0ea9,	// (0x00036f9c) tabs_4_passive_pane_cp2_srt

0x03d6,	// (0x000364c9) aid_size_cell_toolbar

0x43ad,	// (0x0003a4a0) main_idle_act_pane_ParamLimits

0x05b5,	// (0x000366a8) popup_large_graphic_colour_window_ParamLimits

0xadd6,	// (0x00040ec9) popup_toolbar_window_ParamLimits

0xadd6,	// (0x00040ec9) popup_toolbar_window

0x4596,	// (0x0003a689) list_single_graphic_2heading_pane_ParamLimits

0x4596,	// (0x0003a689) list_single_graphic_2heading_pane

0xf1e0,	// (0x000452d3) aid_size_cell_apps_grid_lsc_pane

0xf1f2,	// (0x000452e5) aid_size_cell_apps_grid_prt_pane

0x2a9a,	// (0x00038b8d) bg_wml_button_pane_cp1_ParamLimits

0x2a9a,	// (0x00038b8d) bg_wml_button_pane_cp1

0xc562,	// (0x00042655) form_midp_field_text_pane_t1_ParamLimits

0x3044,	// (0x00039137) input_focus_pane_cp050_ParamLimits

0x327d,	// (0x00039370) list_midp_form_text_pane_ParamLimits

0x322f,	// (0x00039322) input_focus_pane_cp051_ParamLimits

0x3243,	// (0x00039336) list_midp_choice_pane_ParamLimits

0x30fd,	// (0x000391f0) list_single_2graphic_pane_cp3_ParamLimits

0x30fd,	// (0x000391f0) list_single_2graphic_pane_cp3

0x3113,	// (0x00039206) list_single_midp_graphic_pane_ParamLimits

0x3113,	// (0x00039206) list_single_midp_graphic_pane

0xee2e,	// (0x00044f21) list_single_graphic_2heading_pane_g1_ParamLimits

0xee2e,	// (0x00044f21) list_single_graphic_2heading_pane_g1

0xee3a,	// (0x00044f2d) list_single_graphic_2heading_pane_g4_ParamLimits

0xee3a,	// (0x00044f2d) list_single_graphic_2heading_pane_g4

0xee46,	// (0x00044f39) list_single_graphic_2heading_pane_g5_ParamLimits

0xee46,	// (0x00044f39) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0004587e) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0004587e) list_single_graphic_2heading_pane_g

0xee52,	// (0x00044f45) list_single_graphic_2heading_pane_t1_ParamLimits

0xee52,	// (0x00044f45) list_single_graphic_2heading_pane_t1

0xee66,	// (0x00044f59) list_single_graphic_2heading_pane_t2_ParamLimits

0xee66,	// (0x00044f59) list_single_graphic_2heading_pane_t2

0xee82,	// (0x00044f75) list_single_graphic_2heading_pane_t3_ParamLimits

0xee82,	// (0x00044f75) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00045885) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00045885) list_single_graphic_2heading_pane_t

0x2f0e,	// (0x00039001) bg_popup_sub_pane_cp2

0x2f38,	// (0x0003902b) grid_toobar_pane

0x0a1b,	// (0x00036b0e) cell_toolbar_pane_ParamLimits

0x0a1b,	// (0x00036b0e) cell_toolbar_pane

0x2f74,	// (0x00039067) cell_toolbar_pane_g1_ParamLimits

0x2f74,	// (0x00039067) cell_toolbar_pane_g1

0x2f88,	// (0x0003907b) cell_toolbar_pane_g2_ParamLimits

0x2f88,	// (0x0003907b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00045893) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00045893) cell_toolbar_pane_g

0x2faa,	// (0x0003909d) grid_highlight_pane_cp2_ParamLimits

0x2faa,	// (0x0003909d) grid_highlight_pane_cp2

0x2fc4,	// (0x000390b7) toolbar_button_pane

0x2fd0,	// (0x000390c3) toolbar_button_pane_g1

0x2fd8,	// (0x000390cb) toolbar_button_pane_g2

0x2fe0,	// (0x000390d3) toolbar_button_pane_g3

0x2fe8,	// (0x000390db) toolbar_button_pane_g4

0x2ff0,	// (0x000390e3) toolbar_button_pane_g5

0x2ff8,	// (0x000390eb) toolbar_button_pane_g6

0x3000,	// (0x000390f3) toolbar_button_pane_g7

0x3008,	// (0x000390fb) toolbar_button_pane_g8

0x3010,	// (0x00039103) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00045898) toolbar_button_pane_g

0x0a53,	// (0x00036b46) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a53,	// (0x00036b46) list_single_2graphic_pane_g1_cp3

0xae2e,	// (0x00040f21) list_single_2graphic_pane_g2_cp3_ParamLimits

0xae2e,	// (0x00040f21) list_single_2graphic_pane_g2_cp3

0x0a70,	// (0x00036b63) list_single_2graphic_pane_g3_cp3

0x0a78,	// (0x00036b6b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a78,	// (0x00036b6b) list_single_2graphic_pane_g4_cp3

0x0a84,	// (0x00036b77) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a84,	// (0x00036b77) list_single_2graphic_pane_t1_cp3

0x0a9f,	// (0x00036b92) list_single_midp_graphic_pane_g2_ParamLimits

0x0a9f,	// (0x00036b92) list_single_midp_graphic_pane_g2

0x03de,	// (0x000364d1) aid_zoom_text_primary

0xee26,	// (0x00044f19) aid_zoom_text_secondary

0xa4f2,	// (0x000405e5) status_small_pane_g7_ParamLimits

0xa4f2,	// (0x000405e5) status_small_pane_g7

0xa515,	// (0x00040608) status_small_pane_t1_ParamLimits

0x9776,	// (0x0003f869) title_pane_g2

0x0003,

0xf529,	// (0x0004561c) title_pane_g

0x9a16,	// (0x0003fb09) aid_size_cell_colour_1_pane_ParamLimits

0x9a16,	// (0x0003fb09) aid_size_cell_colour_1_pane

0x9a2a,	// (0x0003fb1d) aid_size_cell_colour_2_pane_ParamLimits

0x9a2a,	// (0x0003fb1d) aid_size_cell_colour_2_pane

0x9a3e,	// (0x0003fb31) aid_size_cell_colour_3_pane_ParamLimits

0x9a3e,	// (0x0003fb31) aid_size_cell_colour_3_pane

0x9a52,	// (0x0003fb45) aid_size_cell_colour_4_pane_ParamLimits

0x9a52,	// (0x0003fb45) aid_size_cell_colour_4_pane

0xf059,	// (0x0004514c) title_pane_stacon_g1_ParamLimits

0xf059,	// (0x0004514c) title_pane_stacon_g1

0x365c,	// (0x0003974f) popup_note_wait_window_g3_ParamLimits

0x365c,	// (0x0003974f) popup_note_wait_window_g3

0x36d3,	// (0x000397c6) popup_note_wait_window_t5_ParamLimits

0x36d3,	// (0x000397c6) popup_note_wait_window_t5

0xb8d0,	// (0x000419c3) main_feb_china_hwr_fs_writing_pane

0xa769,	// (0x0004085c) popup_feb_china_hwr_fs_window_ParamLimits

0xa769,	// (0x0004085c) popup_feb_china_hwr_fs_window

0xae3f,	// (0x00040f32) aid_size_cell_hwr_fs_ParamLimits

0xae3f,	// (0x00040f32) aid_size_cell_hwr_fs

0x3044,	// (0x00039137) bg_popup_sub_pane_cp3_ParamLimits

0x3044,	// (0x00039137) bg_popup_sub_pane_cp3

0xae54,	// (0x00040f47) grid_hwr_fs_pane_ParamLimits

0xae54,	// (0x00040f47) grid_hwr_fs_pane

0x0aee,	// (0x00036be1) linegrid_hwr_fs_pane_ParamLimits

0x0aee,	// (0x00036be1) linegrid_hwr_fs_pane

0xae6c,	// (0x00040f5f) cell_hwr_fs_pane_ParamLimits

0xae6c,	// (0x00040f5f) cell_hwr_fs_pane

0x3050,	// (0x00039143) linegrid_hwr_fs_pane_g1_ParamLimits

0x3050,	// (0x00039143) linegrid_hwr_fs_pane_g1

0xc503,	// (0x000425f6) linegrid_hwr_fs_pane_g2_ParamLimits

0xc503,	// (0x000425f6) linegrid_hwr_fs_pane_g2

0x306e,	// (0x00039161) linegrid_hwr_fs_pane_g3_ParamLimits

0x306e,	// (0x00039161) linegrid_hwr_fs_pane_g3

0x0b22,	// (0x00036c15) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b22,	// (0x00036c15) linegrid_hwr_fs_pane_g4

0x0b40,	// (0x00036c33) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b40,	// (0x00036c33) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000458be) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000458be) linegrid_hwr_fs_pane_g

0x307a,	// (0x0003916d) cell_hwr_fs_pane_g1_ParamLimits

0x307a,	// (0x0003916d) cell_hwr_fs_pane_g1

0x2e49,	// (0x00038f3c) cell_hwr_fs_pane_g2_ParamLimits

0x2e49,	// (0x00038f3c) cell_hwr_fs_pane_g2

0xc515,	// (0x00042608) cell_hwr_fs_pane_g3_ParamLimits

0xc515,	// (0x00042608) cell_hwr_fs_pane_g3

0xc522,	// (0x00042615) cell_hwr_fs_pane_g4_ParamLimits

0xc522,	// (0x00042615) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000458c9) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000458c9) cell_hwr_fs_pane_g

0xae92,	// (0x00040f85) cell_hwr_fs_pane_t1

0xb8d0,	// (0x000419c3) grid_highlight_pane_cp6

0xb8d0,	// (0x000419c3) main_idle_act2_pane

0xc091,	// (0x00042184) aid_inside_area_popup_secondary

0xc5da,	// (0x000426cd) aid_inside_area_window_primary_ParamLimits

0xc5da,	// (0x000426cd) aid_inside_area_window_primary

0x48c0,	// (0x0003a9b3) ai2_news_ticker_pane

0x48c8,	// (0x0003a9bb) aid_size_cell_ai1_link_ParamLimits

0x48c8,	// (0x0003a9bb) aid_size_cell_ai1_link

0x48e2,	// (0x0003a9d5) popup_ai2_data_window_ParamLimits

0x48e2,	// (0x0003a9d5) popup_ai2_data_window

0x4900,	// (0x0003a9f3) popup_ai2_link_window_ParamLimits

0x4900,	// (0x0003a9f3) popup_ai2_link_window

0x3044,	// (0x00039137) bg_popup_sub_pane_cp4_ParamLimits

0x3044,	// (0x00039137) bg_popup_sub_pane_cp4

0x4916,	// (0x0003aa09) grid_ai2_link_pane_ParamLimits

0x4916,	// (0x0003aa09) grid_ai2_link_pane

0x492d,	// (0x0003aa20) popup_ai2_link_window_g1_ParamLimits

0x492d,	// (0x0003aa20) popup_ai2_link_window_g1

0x4939,	// (0x0003aa2c) popup_ai2_link_window_g2_ParamLimits

0x4939,	// (0x0003aa2c) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00045a9c) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00045a9c) popup_ai2_link_window_g

0x494a,	// (0x0003aa3d) ai2_mp_button_pane

0x4952,	// (0x0003aa45) ai2_mp_volume_pane

0x322f,	// (0x00039322) bg_popup_sub_pane_cp5_ParamLimits

0x322f,	// (0x00039322) bg_popup_sub_pane_cp5

0x495a,	// (0x0003aa4d) heading_ai2_gene_pane_ParamLimits

0x495a,	// (0x0003aa4d) heading_ai2_gene_pane

0x4966,	// (0x0003aa59) list_ai2_gene_pane_ParamLimits

0x4966,	// (0x0003aa59) list_ai2_gene_pane

0x49ae,	// (0x0003aaa1) cell_ai2_link_pane_ParamLimits

0x49ae,	// (0x0003aaa1) cell_ai2_link_pane

0x49c4,	// (0x0003aab7) cell_ai2_link_pane_g1

0xb8d0,	// (0x000419c3) grid_highlight_pane_cp7

0x0f4f,	// (0x00037042) ai2_mp_volume_pane_g1

0x4a97,	// (0x0003ab8a) ai2_mp_volume_pane_g2

0x4a0c,	// (0x0003aaff) list_ai2_gene_pane_t1

0x4a9f,	// (0x0003ab92) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00045ab5) ai2_mp_volume_pane_g

0x0f57,	// (0x0003704a) volume_small_pane_cp3

0x4aa7,	// (0x0003ab9a) aid_size_cell_ai2_button

0x4aaf,	// (0x0003aba2) grid_ai2_button_pane

0x4ab8,	// (0x0003abab) cell_ai2_button_pane_ParamLimits

0x4ab8,	// (0x0003abab) cell_ai2_button_pane

0xb8c6,	// (0x000419b9) cell_ai2_button_pane_g1

0xb8d0,	// (0x000419c3) grid_highlight_pane_cp8

0x4a57,	// (0x0003ab4a) ai2_gene_pane_t1_ParamLimits

0x4a57,	// (0x0003ab4a) ai2_gene_pane_t1

0xa6e5,	// (0x000407d8) aid_height_parent_landscape

0xc781,	// (0x00042874) aid_height_set_list

0x43ad,	// (0x0003a4a0) aid_size_parent

0x46df,	// (0x0003a7d2) aid_size_cell_graphic_pane_ParamLimits

0x4976,	// (0x0003aa69) popup_ai2_data_window_g1_ParamLimits

0x4976,	// (0x0003aa69) popup_ai2_data_window_g1

0x4982,	// (0x0003aa75) ai2_news_ticker_pane_g1

0x498a,	// (0x0003aa7d) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00045aa1) ai2_news_ticker_pane_g

0x4992,	// (0x0003aa85) ai2_news_ticker_pane_t1

0x49a0,	// (0x0003aa93) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00045aa6) ai2_news_ticker_pane_t

0x49cd,	// (0x0003aac0) heading_ai2_gene_pane_g1

0x49d5,	// (0x0003aac8) heading_ai2_gene_pane_t1_ParamLimits

0x49d5,	// (0x0003aac8) heading_ai2_gene_pane_t1

0x49ea,	// (0x0003aadd) list_highlight_pane_cp6

0x49f2,	// (0x0003aae5) ai2_gene_pane_ParamLimits

0x49f2,	// (0x0003aae5) ai2_gene_pane

0x4a1a,	// (0x0003ab0d) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00045aab) list_ai2_gene_pane_t

0x4a28,	// (0x0003ab1b) list_highlight_pane_cp8_ParamLimits

0x4a28,	// (0x0003ab1b) list_highlight_pane_cp8

0x4a39,	// (0x0003ab2c) ai2_gene_pane_g1_ParamLimits

0x4a39,	// (0x0003ab2c) ai2_gene_pane_g1

0x4a4b,	// (0x0003ab3e) ai2_gene_pane_g2_ParamLimits

0x4a4b,	// (0x0003ab3e) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00045ab0) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00045ab0) ai2_gene_pane_g

0xbf04,	// (0x00041ff7) scroll_pane_cp12

0xa6a2,	// (0x00040795) control_pane_t3_ParamLimits

0xa6a2,	// (0x00040795) control_pane_t3

0xa506,	// (0x000405f9) status_small_pane_g8_ParamLimits

0xa506,	// (0x000405f9) status_small_pane_g8

0xa80b,	// (0x000408fe) popup_find_window_ParamLimits

0xaac2,	// (0x00040bb5) popup_note_image_window_ParamLimits

0xd349,	// (0x0004343c) list_double2_graphic_pane_vc_g1_ParamLimits

0xd349,	// (0x0004343c) list_double2_graphic_pane_vc_g1

0xd4af,	// (0x000435a2) list_double2_graphic_pane_vc_g2_ParamLimits

0xd4af,	// (0x000435a2) list_double2_graphic_pane_vc_g2

0xd4bb,	// (0x000435ae) list_double2_graphic_pane_vc_g3_ParamLimits

0xd4bb,	// (0x000435ae) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0004588c) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0004588c) list_double2_graphic_pane_vc_g

0xd4c7,	// (0x000435ba) list_double2_graphic_pane_vc_t1_ParamLimits

0xd4c7,	// (0x000435ba) list_double2_graphic_pane_vc_t1

0xd30d,	// (0x00043400) list_single_heading_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_heading_pane_vc_g1

0xd319,	// (0x0004340c) list_single_heading_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_heading_pane_vc_g

0xd4dd,	// (0x000435d0) list_single_heading_pane_vc_t1_ParamLimits

0xd4dd,	// (0x000435d0) list_single_heading_pane_vc_t1

0xd4f3,	// (0x000435e6) list_single_heading_pane_vc_t2_ParamLimits

0xd4f3,	// (0x000435e6) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000458ad) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000458ad) list_single_heading_pane_vc_t

0xd505,	// (0x000435f8) list_setting_number_pane_vc_g1_ParamLimits

0xd505,	// (0x000435f8) list_setting_number_pane_vc_g1

0xd511,	// (0x00043604) list_setting_number_pane_vc_g2_ParamLimits

0xd511,	// (0x00043604) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000458b2) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000458b2) list_setting_number_pane_vc_g

0xd51d,	// (0x00043610) list_setting_number_pane_vc_t1_ParamLimits

0xd51d,	// (0x00043610) list_setting_number_pane_vc_t1

0xd531,	// (0x00043624) list_setting_number_pane_vc_t2_ParamLimits

0xd531,	// (0x00043624) list_setting_number_pane_vc_t2

0xd54d,	// (0x00043640) list_setting_number_pane_vc_t3_ParamLimits

0xd54d,	// (0x00043640) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000458b7) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000458b7) list_setting_number_pane_vc_t

0xd57b,	// (0x0004366e) set_value_pane_vc_ParamLimits

0xd57b,	// (0x0004366e) set_value_pane_vc

0x4596,	// (0x0003a689) list_double2_graphic_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double2_graphic_pane_vc

0x4596,	// (0x0003a689) list_double2_large_graphic_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double2_large_graphic_pane_vc

0x4596,	// (0x0003a689) list_double2_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double2_pane_vc

0x4596,	// (0x0003a689) list_double_graphic_heading_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_graphic_heading_pane_vc

0x4596,	// (0x0003a689) list_double_graphic_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_graphic_pane_vc

0x4596,	// (0x0003a689) list_double_heading_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_heading_pane_vc

0xd5b2,	// (0x000436a5) list_double_large_graphic_pane_vc_ParamLimits

0xd5b2,	// (0x000436a5) list_double_large_graphic_pane_vc

0x4596,	// (0x0003a689) list_double_number_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_number_pane_vc

0x4596,	// (0x0003a689) list_double_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_pane_vc

0x4596,	// (0x0003a689) list_double_time_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_double_time_pane_vc

0x4596,	// (0x0003a689) list_setting_number_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_setting_number_pane_vc

0x4596,	// (0x0003a689) list_setting_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_setting_pane_vc

0x4596,	// (0x0003a689) list_single_graphic_heading_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_single_graphic_heading_pane_vc

0x4596,	// (0x0003a689) list_single_heading_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_single_heading_pane_vc

0x4596,	// (0x0003a689) list_single_number_heading_pane_vc_ParamLimits

0x4596,	// (0x0003a689) list_single_number_heading_pane_vc

0xd349,	// (0x0004343c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd349,	// (0x0004343c) list_double_graphic_heading_pane_vc_g1

0xd30d,	// (0x00043400) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd30d,	// (0x00043400) list_double_graphic_heading_pane_vc_g2

0xd319,	// (0x0004340c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd319,	// (0x0004340c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00045abc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045abc) list_double_graphic_heading_pane_vc_g

0xd5d7,	// (0x000436ca) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd5d7,	// (0x000436ca) list_double_graphic_heading_pane_vc_t1

0xd5ed,	// (0x000436e0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd5ed,	// (0x000436e0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00045ac3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00045ac3) list_double_graphic_heading_pane_vc_t

0xd505,	// (0x000435f8) list_setting_pane_vc_g1_ParamLimits

0xd505,	// (0x000435f8) list_setting_pane_vc_g1

0xd511,	// (0x00043604) list_setting_pane_vc_g2_ParamLimits

0xd511,	// (0x00043604) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000458b2) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000458b2) list_setting_pane_vc_g

0xd60b,	// (0x000436fe) list_setting_pane_vc_t1_ParamLimits

0xd60b,	// (0x000436fe) list_setting_pane_vc_t1

0xd627,	// (0x0004371a) list_setting_pane_vc_t2_ParamLimits

0xd627,	// (0x0004371a) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00045b06) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00045b06) list_setting_pane_vc_t

0xd57b,	// (0x0004366e) set_value_pane_cp_vc_ParamLimits

0xd57b,	// (0x0004366e) set_value_pane_cp_vc

0xd30d,	// (0x00043400) list_single_number_heading_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_single_number_heading_pane_vc_g1

0xd319,	// (0x0004340c) list_single_number_heading_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_single_number_heading_pane_vc_g

0xd643,	// (0x00043736) list_single_number_heading_pane_vc_t1_ParamLimits

0xd643,	// (0x00043736) list_single_number_heading_pane_vc_t1

0xd325,	// (0x00043418) list_single_number_heading_pane_vc_t2_ParamLimits

0xd325,	// (0x00043418) list_single_number_heading_pane_vc_t2

0xd337,	// (0x0004342a) list_single_number_heading_pane_vc_t3_ParamLimits

0xd337,	// (0x0004342a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00045b0b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00045b0b) list_single_number_heading_pane_vc_t

0xd349,	// (0x0004343c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd349,	// (0x0004343c) list_single_graphic_heading_pane_vc_g1

0xd30d,	// (0x00043400) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd30d,	// (0x00043400) list_single_graphic_heading_pane_vc_g4

0xd319,	// (0x0004340c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd319,	// (0x0004340c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x00045abc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045abc) list_single_graphic_heading_pane_vc_g

0xd643,	// (0x00043736) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd643,	// (0x00043736) list_single_graphic_heading_pane_vc_t1

0xd659,	// (0x0004374c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd659,	// (0x0004374c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00045b12) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00045b12) list_single_graphic_heading_pane_vc_t

0xd30d,	// (0x00043400) list_double2_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_double2_pane_vc_g1

0xd319,	// (0x0004340c) list_double2_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_double2_pane_vc_g

0xd59c,	// (0x0004368f) list_double2_pane_vc_t1_ParamLimits

0xd59c,	// (0x0004368f) list_double2_pane_vc_t1

0xd355,	// (0x00043448) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd355,	// (0x00043448) list_double2_large_graphic_pane_vc_g1

0xd30d,	// (0x00043400) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd30d,	// (0x00043400) list_double2_large_graphic_pane_vc_g2

0xd319,	// (0x0004340c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd319,	// (0x0004340c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000456b3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000456b3) list_double2_large_graphic_pane_vc_g

0xd361,	// (0x00043454) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd361,	// (0x00043454) list_double2_large_graphic_pane_vc_t1

0xd66b,	// (0x0004375e) list_double_time_pane_vc_g1_ParamLimits

0xd66b,	// (0x0004375e) list_double_time_pane_vc_g1

0xd677,	// (0x0004376a) list_double_time_pane_vc_g2_ParamLimits

0xd677,	// (0x0004376a) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x00045b17) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x00045b17) list_double_time_pane_vc_g

0xd683,	// (0x00043776) list_double_time_pane_vc_t1_ParamLimits

0xd683,	// (0x00043776) list_double_time_pane_vc_t1

0xd6ad,	// (0x000437a0) list_double_time_pane_vc_t2_ParamLimits

0xd6ad,	// (0x000437a0) list_double_time_pane_vc_t2

0xd6f6,	// (0x000437e9) list_double_time_pane_vc_t3_ParamLimits

0xd6f6,	// (0x000437e9) list_double_time_pane_vc_t3

0xd708,	// (0x000437fb) list_double_time_pane_vc_t4_ParamLimits

0xd708,	// (0x000437fb) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x00045b1c) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x00045b1c) list_double_time_pane_vc_t

0xd30d,	// (0x00043400) list_double_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_double_pane_vc_g1

0xd319,	// (0x0004340c) list_double_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_double_pane_vc_g

0xd71c,	// (0x0004380f) list_double_pane_vc_t1_ParamLimits

0xd71c,	// (0x0004380f) list_double_pane_vc_t1

0xd730,	// (0x00043823) list_double_pane_vc_t2_ParamLimits

0xd730,	// (0x00043823) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00045b25) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00045b25) list_double_pane_vc_t

0xd30d,	// (0x00043400) list_double_number_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_double_number_pane_vc_g1

0xd319,	// (0x0004340c) list_double_number_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_double_number_pane_vc_g

0xd746,	// (0x00043839) list_double_number_pane_vc_t1_ParamLimits

0xd746,	// (0x00043839) list_double_number_pane_vc_t1

0xd758,	// (0x0004384b) list_double_number_pane_vc_t2_ParamLimits

0xd758,	// (0x0004384b) list_double_number_pane_vc_t2

0xd730,	// (0x00043823) list_double_number_pane_vc_t3_ParamLimits

0xd730,	// (0x00043823) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x00045b2a) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x00045b2a) list_double_number_pane_vc_t

0xd76c,	// (0x0004385f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd76c,	// (0x0004385f) list_double_large_graphic_pane_vc_g1

0xd788,	// (0x0004387b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd788,	// (0x0004387b) list_double_large_graphic_pane_vc_g2

0xd79c,	// (0x0004388f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd79c,	// (0x0004388f) list_double_large_graphic_pane_vc_g3

0xd7ab,	// (0x0004389e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd7ab,	// (0x0004389e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00045b31) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00045b31) list_double_large_graphic_pane_vc_g

0xd7ba,	// (0x000438ad) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd7ba,	// (0x000438ad) list_double_large_graphic_pane_vc_t1

0xd7d6,	// (0x000438c9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd7d6,	// (0x000438c9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x00045b3a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x00045b3a) list_double_large_graphic_pane_vc_t

0xd30d,	// (0x00043400) list_double_heading_pane_vc_g1_ParamLimits

0xd30d,	// (0x00043400) list_double_heading_pane_vc_g1

0xd319,	// (0x0004340c) list_double_heading_pane_vc_g2_ParamLimits

0xd319,	// (0x0004340c) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045696) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045696) list_double_heading_pane_vc_g

0xd7f6,	// (0x000438e9) list_double_heading_pane_vc_t1_ParamLimits

0xd7f6,	// (0x000438e9) list_double_heading_pane_vc_t1

0xd808,	// (0x000438fb) list_double_heading_pane_vc_t2_ParamLimits

0xd808,	// (0x000438fb) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00045b3f) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00045b3f) list_double_heading_pane_vc_t

0xd820,	// (0x00043913) list_double_graphic_pane_vc_g1_ParamLimits

0xd820,	// (0x00043913) list_double_graphic_pane_vc_g1

0xd833,	// (0x00043926) list_double_graphic_pane_vc_g2_ParamLimits

0xd833,	// (0x00043926) list_double_graphic_pane_vc_g2

0xd30d,	// (0x00043400) list_double_graphic_pane_vc_g3_ParamLimits

0xd30d,	// (0x00043400) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00045b44) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00045b44) list_double_graphic_pane_vc_g

0xd850,	// (0x00043943) list_double_graphic_pane_vc_t1_ParamLimits

0xd850,	// (0x00043943) list_double_graphic_pane_vc_t1

0xd87a,	// (0x0004396d) list_double_graphic_pane_vc_t2_ParamLimits

0xd87a,	// (0x0004396d) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00045b4d) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00045b4d) list_double_graphic_pane_vc_t

0xebde,	// (0x00044cd1) aid_size_cell_fastswap

0x954f,	// (0x0003f642) aid_size_cell_touch_ParamLimits

0x954f,	// (0x0003f642) aid_size_cell_touch

0xed65,	// (0x00044e58) popup_fast_swap_wide_window_ParamLimits

0xed65,	// (0x00044e58) popup_fast_swap_wide_window

0x970d,	// (0x0003f800) touch_pane_ParamLimits

0x970d,	// (0x0003f800) touch_pane

0xbf5a,	// (0x0004204d) button_value_adjust_pane_cp2

0xd3b2,	// (0x000434a5) button_value_adjust_pane_cp4

0xd3ba,	// (0x000434ad) form_field_data_pane_cp2

0x9f50,	// (0x00040043) form_field_data_wide_pane_cp2

0xf221,	// (0x00045314) bg_scroll_pane_ParamLimits

0xf240,	// (0x00045333) scroll_handle_pane_ParamLimits

0xf254,	// (0x00045347) scroll_sc2_down_pane_ParamLimits

0xf254,	// (0x00045347) scroll_sc2_down_pane

0xf27b,	// (0x0004536e) scroll_sc2_up_pane_ParamLimits

0xf27b,	// (0x0004536e) scroll_sc2_up_pane

0xcb6c,	// (0x00042c5f) grid_wheel_folder_pane_g1_ParamLimits

0xcb6c,	// (0x00042c5f) grid_wheel_folder_pane_g1

0x0153,	// (0x00036246) clock_nsta_pane_cp2_ParamLimits

0x0153,	// (0x00036246) clock_nsta_pane_cp2

0xa3e4,	// (0x000404d7) listscroll_midp_pane_ParamLimits

0xa3f0,	// (0x000404e3) midp_canvas_pane

0x2a72,	// (0x00038b65) nsta_clock_indic_pane

0x2aa6,	// (0x00038b99) listscroll_form_pane_vc

0x2aae,	// (0x00038ba1) listscroll_set_pane_vc_ParamLimits

0x2aae,	// (0x00038ba1) listscroll_set_pane_vc

0xc1f2,	// (0x000422e5) clock_nsta_pane

0xc21c,	// (0x0004230f) indicator_nsta_pane

0x2f0e,	// (0x00039001) bg_popup_sub_pane_cp2_ParamLimits

0x2f22,	// (0x00039015) find_pane_cp2_ParamLimits

0x2f22,	// (0x00039015) find_pane_cp2

0x2f38,	// (0x0003902b) grid_toobar_pane_ParamLimits

0x3018,	// (0x0003910b) list_form_gen_pane_vc_ParamLimits

0x3018,	// (0x0003910b) list_form_gen_pane_vc

0x302e,	// (0x00039121) scroll_pane_cp8_vc_ParamLimits

0x302e,	// (0x00039121) scroll_pane_cp8_vc

0x30aa,	// (0x0003919d) data_form_wide_pane_vc_ParamLimits

0x30aa,	// (0x0003919d) data_form_wide_pane_vc

0x30b6,	// (0x000391a9) form_field_data_wide_pane_vc_g1

0x30be,	// (0x000391b1) form_field_data_wide_pane_vc_t1_ParamLimits

0x30be,	// (0x000391b1) form_field_data_wide_pane_vc_t1

0xbf6e,	// (0x00042061) input_focus_pane_cp6_vc_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_cp6_vc

0x33da,	// (0x000394cd) list_midp_pane_ParamLimits

0x474d,	// (0x0003a840) scroll_pane_cp16_ParamLimits

0x474d,	// (0x0003a840) scroll_pane_cp16

0x3430,	// (0x00039523) button_value_adjust_pane_ParamLimits

0x3430,	// (0x00039523) button_value_adjust_pane

0xc792,	// (0x00042885) button_value_adjust_pane_cp6_ParamLimits

0xc792,	// (0x00042885) button_value_adjust_pane_cp6

0xc8ce,	// (0x000429c1) settings_code_pane_cp_ParamLimits

0xc8ce,	// (0x000429c1) settings_code_pane_cp

0xb8c6,	// (0x000419b9) cell_touch_pane_g1

0xb8c6,	// (0x000419b9) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000457d1) cell_touch_pane_g

0xca40,	// (0x00042b33) cell_touch_pane_cp_ParamLimits

0xca40,	// (0x00042b33) cell_touch_pane_cp

0xca5c,	// (0x00042b4f) cell_touch_pane_ParamLimits

0xca5c,	// (0x00042b4f) cell_touch_pane

0xb8c6,	// (0x000419b9) scroll_sc2_down_pane_g1

0xb8c6,	// (0x000419b9) scroll_sc2_up_pane_g1

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp4_vc

0x4aeb,	// (0x0003abde) list_set_graphic_pane_vc_g1_ParamLimits

0x4aeb,	// (0x0003abde) list_set_graphic_pane_vc_g1

0x4af7,	// (0x0003abea) list_set_graphic_pane_vc_g2_ParamLimits

0x4af7,	// (0x0003abea) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00045ac8) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00045ac8) list_set_graphic_pane_vc_g

0x4b03,	// (0x0003abf6) text_primary_small_cp13_vc_ParamLimits

0x4b03,	// (0x0003abf6) text_primary_small_cp13_vc

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane_vc_ParamLimits

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane_vc

0xb8d0,	// (0x000419c3) input_focus_pane_cp2_vc

0xb8c6,	// (0x000419b9) setting_code_pane_vc_g1

0xb943,	// (0x00041a36) setting_code_pane_vc_t1

0x4b2e,	// (0x0003ac21) set_text_pane_vc_t1_ParamLimits

0x4b2e,	// (0x0003ac21) set_text_pane_vc_t1

0xb8d0,	// (0x000419c3) input_focus_pane_cp1_vc

0x4b4f,	// (0x0003ac42) list_set_text_pane_vc

0xb8c6,	// (0x000419b9) setting_text_pane_vc_g1

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp2_vc

0xb93a,	// (0x00041a2d) setting_slider_graphic_pane_vc_g1

0x4b59,	// (0x0003ac4c) setting_slider_graphic_pane_vc_t1

0x4b6b,	// (0x0003ac5e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00045acd) setting_slider_graphic_pane_vc_t

0x4b7d,	// (0x0003ac70) slider_set_pane_cp_vc

0x4b87,	// (0x0003ac7a) slider_set_pane_vc_g1

0x4b90,	// (0x0003ac83) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00045ad2) slider_set_pane_vc_g

0xbfc6,	// (0x000420b9) set_opt_bg_pane_g1_copy1

0xbfce,	// (0x000420c1) set_opt_bg_pane_g2_copy1

0x4bbc,	// (0x0003acaf) set_opt_bg_pane_g3_copy1

0xbfde,	// (0x000420d1) set_opt_bg_pane_g4_copy1

0xbfe6,	// (0x000420d9) set_opt_bg_pane_g5_copy1

0xbfee,	// (0x000420e1) set_opt_bg_pane_g6_copy1

0x4bc6,	// (0x0003acb9) set_opt_bg_pane_g7_copy1

0x4bd0,	// (0x0003acc3) set_opt_bg_pane_g8_copy1

0x4bda,	// (0x0003accd) set_opt_bg_pane_g9_copy1

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp_vc

0x4be4,	// (0x0003acd7) setting_slider_pane_vc_t1

0x4bf3,	// (0x0003ace6) setting_slider_pane_vc_t2

0x4c05,	// (0x0003acf8) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00045ae1) setting_slider_pane_vc_t

0x4c17,	// (0x0003ad0a) slider_set_pane_vc

0x0b84,	// (0x00036c77) volume_set_pane_vc_g1

0x0b8d,	// (0x00036c80) volume_set_pane_vc_g2

0x0b96,	// (0x00036c89) volume_set_pane_vc_g3

0x0b9f,	// (0x00036c92) volume_set_pane_vc_g4

0x0ba8,	// (0x00036c9b) volume_set_pane_vc_g5

0x0bb1,	// (0x00036ca4) volume_set_pane_vc_g6

0x0bba,	// (0x00036cad) volume_set_pane_vc_g7

0x0bc3,	// (0x00036cb6) volume_set_pane_vc_g8

0x0bcc,	// (0x00036cbf) volume_set_pane_vc_g9

0x0bd5,	// (0x00036cc8) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00045ae8) volume_set_pane_vc_g

0x4c21,	// (0x0003ad14) volume_set_pane_vc

0x4c2b,	// (0x0003ad1e) button_value_adjust_pane_cp1_vc

0x4c35,	// (0x0003ad28) list_highlight_pane_cp2_vc

0x4c3e,	// (0x0003ad31) list_set_pane_vc_ParamLimits

0x4c3e,	// (0x0003ad31) list_set_pane_vc

0x4cac,	// (0x0003ad9f) main_pane_set_vc_t1_ParamLimits

0x4cac,	// (0x0003ad9f) main_pane_set_vc_t1

0x4cc1,	// (0x0003adb4) main_pane_set_vc_t2_ParamLimits

0x4cc1,	// (0x0003adb4) main_pane_set_vc_t2

0x4cd3,	// (0x0003adc6) main_pane_set_vc_t3_ParamLimits

0x4cd3,	// (0x0003adc6) main_pane_set_vc_t3

0x4ce7,	// (0x0003adda) main_pane_set_vc_t4_ParamLimits

0x4ce7,	// (0x0003adda) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00045afd) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00045afd) main_pane_set_vc_t

0x4cfb,	// (0x0003adee) setting_code_pane_vc_ParamLimits

0x4cfb,	// (0x0003adee) setting_code_pane_vc

0x4d0c,	// (0x0003adff) setting_slider_graphic_pane_vc

0x4d0c,	// (0x0003adff) setting_slider_pane_vc

0x4d0c,	// (0x0003adff) setting_text_pane_vc

0x4d0c,	// (0x0003adff) setting_volume_pane_vc

0x4d16,	// (0x0003ae09) scroll_pane_cp121_vc

0xbf48,	// (0x0004203b) set_content_pane_vc

0x4d1e,	// (0x0003ae11) button_value_adjust_pane_g1

0x4d27,	// (0x0003ae1a) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00045b52) button_value_adjust_pane_g

0x4d30,	// (0x0003ae23) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4d30,	// (0x0003ae23) form_field_slider_wide_pane_vc_t1

0x4d42,	// (0x0003ae35) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4d42,	// (0x0003ae35) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00045b57) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00045b57) form_field_slider_wide_pane_vc_t

0xb91e,	// (0x00041a11) input_focus_pane_cp10_vc_ParamLimits

0xb91e,	// (0x00041a11) input_focus_pane_cp10_vc

0x4d6e,	// (0x0003ae61) slider_cont_pane_cp1_vc_ParamLimits

0x4d6e,	// (0x0003ae61) slider_cont_pane_cp1_vc

0x4d80,	// (0x0003ae73) slider_form_pane_g1_cp2

0x4b90,	// (0x0003ac83) slider_form_pane_g2_cp2

0x4dad,	// (0x0003aea0) form_field_slider_pane_vc_t3

0x4dbb,	// (0x0003aeae) form_field_slider_pane_vc_t4

0x4dc9,	// (0x0003aebc) slider_form_pane_vc_ParamLimits

0x4dc9,	// (0x0003aebc) slider_form_pane_vc

0x4dd6,	// (0x0003aec9) form_field_slider_pane_vc_t1_ParamLimits

0x4dd6,	// (0x0003aec9) form_field_slider_pane_vc_t1

0x4d42,	// (0x0003ae35) form_field_slider_pane_vc_t2_ParamLimits

0x4d42,	// (0x0003ae35) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00045b69) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00045b69) form_field_slider_pane_vc_t

0xb91e,	// (0x00041a11) input_focus_pane_cp9_vc_ParamLimits

0xb91e,	// (0x00041a11) input_focus_pane_cp9_vc

0x4dec,	// (0x0003aedf) slider_cont_pane_vc_ParamLimits

0x4dec,	// (0x0003aedf) slider_cont_pane_vc

0x4e00,	// (0x0003aef3) list_form_graphic_pane_cp_vc_ParamLimits

0x4e00,	// (0x0003aef3) list_form_graphic_pane_cp_vc

0x30b6,	// (0x000391a9) form_field_popup_wide_pane_vc_g1

0x4e15,	// (0x0003af08) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4e15,	// (0x0003af08) form_field_popup_wide_pane_vc_t1

0xbf6e,	// (0x00042061) input_focus_pane_cp8_vc_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_cp8_vc

0x4e5a,	// (0x0003af4d) list_form_wide_pane_vc_ParamLimits

0x4e5a,	// (0x0003af4d) list_form_wide_pane_vc

0x4e66,	// (0x0003af59) list_form_graphic_pane_vc_g1

0x4e6e,	// (0x0003af61) list_form_graphic_pane_vc_t1_ParamLimits

0x4e6e,	// (0x0003af61) list_form_graphic_pane_vc_t1

0xb92c,	// (0x00041a1f) list_highlight_pane_cp5_vc_ParamLimits

0xb92c,	// (0x00041a1f) list_highlight_pane_cp5_vc

0x4e8a,	// (0x0003af7d) list_form_graphic_pane_vc_ParamLimits

0x4e8a,	// (0x0003af7d) list_form_graphic_pane_vc

0x30b6,	// (0x000391a9) form_field_popup_pane_vc_g1

0x4ea0,	// (0x0003af93) form_field_popup_pane_vc_t1_ParamLimits

0x4ea0,	// (0x0003af93) form_field_popup_pane_vc_t1

0xbf6e,	// (0x00042061) input_focus_pane_cp7_vc_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_cp7_vc

0x4eb7,	// (0x0003afaa) list_form_pane_vc_ParamLimits

0x4eb7,	// (0x0003afaa) list_form_pane_vc

0x4ec3,	// (0x0003afb6) data_form_pane_vc_t1_ParamLimits

0x4ec3,	// (0x0003afb6) data_form_pane_vc_t1

0xbfc6,	// (0x000420b9) input_focus_pane_vc_g1

0xbfce,	// (0x000420c1) input_focus_pane_vc_g2

0xbfd6,	// (0x000420c9) input_focus_pane_vc_g3

0xbfde,	// (0x000420d1) input_focus_pane_vc_g4

0xbfe6,	// (0x000420d9) input_focus_pane_vc_g5

0xbfee,	// (0x000420e1) input_focus_pane_vc_g6

0xbff6,	// (0x000420e9) input_focus_pane_vc_g7

0xbffe,	// (0x000420f1) input_focus_pane_vc_g8

0xc006,	// (0x000420f9) input_focus_pane_vc_g9

0xb8c6,	// (0x000419b9) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0004575a) input_focus_pane_vc_g

0x30aa,	// (0x0003919d) data_form_pane_vc_ParamLimits

0x30aa,	// (0x0003919d) data_form_pane_vc

0x30b6,	// (0x000391a9) form_field_data_pane_vc_g1

0x4ee0,	// (0x0003afd3) form_field_data_pane_vc_t1_ParamLimits

0x4ee0,	// (0x0003afd3) form_field_data_pane_vc_t1

0xbf6e,	// (0x00042061) input_focus_pane_vc_ParamLimits

0xbf6e,	// (0x00042061) input_focus_pane_vc

0x4efa,	// (0x0003afed) button_value_adjust_pane_cp3_vc

0x4f02,	// (0x0003aff5) button_value_adjust_pane_cp5_vc

0x4f0a,	// (0x0003affd) form_field_data_pane_vc_ParamLimits

0x4f0a,	// (0x0003affd) form_field_data_pane_vc

0x4f25,	// (0x0003b018) form_field_data_pane_vc_cp2

0x4f2d,	// (0x0003b020) form_field_data_wide_pane_vc_ParamLimits

0x4f2d,	// (0x0003b020) form_field_data_wide_pane_vc

0x4f47,	// (0x0003b03a) form_field_data_wide_pane_vc_cp2

0x4f4f,	// (0x0003b042) form_field_popup_pane_vc_ParamLimits

0x4f4f,	// (0x0003b042) form_field_popup_pane_vc

0x4f6a,	// (0x0003b05d) form_field_popup_wide_pane_vc_ParamLimits

0x4f6a,	// (0x0003b05d) form_field_popup_wide_pane_vc

0x4f84,	// (0x0003b077) form_field_slider_pane_vc_ParamLimits

0x4f84,	// (0x0003b077) form_field_slider_pane_vc

0x4f97,	// (0x0003b08a) form_field_slider_wide_pane_vc_ParamLimits

0x4f97,	// (0x0003b08a) form_field_slider_wide_pane_vc

0xca7a,	// (0x00042b6d) grid_touch_1_pane_ParamLimits

0xca7a,	// (0x00042b6d) grid_touch_1_pane

0xca8e,	// (0x00042b81) grid_touch_2_pane_ParamLimits

0xca8e,	// (0x00042b81) grid_touch_2_pane

0x507d,	// (0x0003b170) touch_pane_g1_ParamLimits

0x507d,	// (0x0003b170) touch_pane_g1

0x4fd0,	// (0x0003b0c3) cell_app_pane_cp_wide_ParamLimits

0x4fd0,	// (0x0003b0c3) cell_app_pane_cp_wide

0x4fe1,	// (0x0003b0d4) grid_popup_fast_wide_pane_ParamLimits

0x4fe1,	// (0x0003b0d4) grid_popup_fast_wide_pane

0x4ff5,	// (0x0003b0e8) scroll_pane_cp19_ParamLimits

0x4ff5,	// (0x0003b0e8) scroll_pane_cp19

0xb8d0,	// (0x000419c3) bg_popup_window_pane_cp20

0x5009,	// (0x0003b0fc) listscroll_popup_fast_wide_pane

0xcaba,	// (0x00042bad) grid_indicator_nsta_pane

0x5023,	// (0x0003b116) clock_nsta_pane_g1

0x502c,	// (0x0003b11f) clock_nsta_pane_t1

0xcac6,	// (0x00042bb9) cell_indicator_nsta_pane_ParamLimits

0xcac6,	// (0x00042bb9) cell_indicator_nsta_pane

0x507d,	// (0x0003b170) cell_indicator_nsta_pane_g1

0xcae1,	// (0x00042bd4) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00045b7a) cell_indicator_nsta_pane_g

0x509e,	// (0x0003b191) clock_nsta_pane_cp

0x50a7,	// (0x0003b19a) indicator_nsta_pane_cp

0x50b1,	// (0x0003b1a4) nsta_clock_indic_pane_g1

0xb968,	// (0x00041a5b) grid_indicator_pane

0xf36d,	// (0x00045460) scroll_pane_cp29

0x00a2,	// (0x00036195) indicator_nsta_pane_cp2_ParamLimits

0x00a2,	// (0x00036195) indicator_nsta_pane_cp2

0xb92c,	// (0x00041a1f) main_apps_wheel_pane

0x3297,	// (0x0003938a) form_midp_field_text_pane_ParamLimits

0x33e6,	// (0x000394d9) scroll_bar_cp050_ParamLimits

0x510a,	// (0x0003b1fd) cell_indicator_pane_ParamLimits

0x510a,	// (0x0003b1fd) cell_indicator_pane

0x5122,	// (0x0003b215) cell_indicator_pane_g1

0xcaee,	// (0x00042be1) grid_wheel_folder_pane_ParamLimits

0xcaee,	// (0x00042be1) grid_wheel_folder_pane

0xcafc,	// (0x00042bef) list_wheel_apps_pane_ParamLimits

0xcafc,	// (0x00042bef) list_wheel_apps_pane

0xcb0a,	// (0x00042bfd) main_apps_wheel_pane_g1_ParamLimits

0xcb0a,	// (0x00042bfd) main_apps_wheel_pane_g1

0xcb1a,	// (0x00042c0d) main_apps_wheel_pane_g2_ParamLimits

0xcb1a,	// (0x00042c0d) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00045b96) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00045b96) main_apps_wheel_pane_g

0xcb2a,	// (0x00042c1d) main_apps_wheel_pane_t1_ParamLimits

0xcb2a,	// (0x00042c1d) main_apps_wheel_pane_t1

0xcb42,	// (0x00042c35) list_wheel_apps_pane_g1

0xcb4a,	// (0x00042c3d) list_wheel_apps_pane_g2

0xcb52,	// (0x00042c45) list_wheel_apps_pane_g3

0xcb5a,	// (0x00042c4d) list_wheel_apps_pane_g4

0xcb62,	// (0x00042c55) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00045b9b) list_wheel_apps_pane_g

0x25e4,	// (0x000386d7) navi_icon_text_pane

0xc0e4,	// (0x000421d7) aid_fill_nsta

0xcb7f,	// (0x00042c72) navi_icon_text_pane_g1

0xcb8b,	// (0x00042c7e) navi_icon_text_pane_t1

0x246f,	// (0x00038562) list_set_graphic_pane_t1_ParamLimits

0x246f,	// (0x00038562) list_set_graphic_pane_t1

0x3b53,	// (0x00039c46) popup_midp_note_alarm_window_t6_ParamLimits

0x3b53,	// (0x00039c46) popup_midp_note_alarm_window_t6

0x3b65,	// (0x00039c58) popup_midp_note_alarm_window_t7_ParamLimits

0x3b65,	// (0x00039c58) popup_midp_note_alarm_window_t7

0x3b77,	// (0x00039c6a) popup_midp_note_alarm_window_t8_ParamLimits

0x3b77,	// (0x00039c6a) popup_midp_note_alarm_window_t8

0x3b89,	// (0x00039c7c) popup_midp_note_alarm_window_t9_ParamLimits

0x3b89,	// (0x00039c7c) popup_midp_note_alarm_window_t9

0x3b9b,	// (0x00039c8e) popup_midp_note_alarm_window_t10_ParamLimits

0x3b9b,	// (0x00039c8e) popup_midp_note_alarm_window_t10

0x3bad,	// (0x00039ca0) popup_midp_note_alarm_window_t11_ParamLimits

0x3bad,	// (0x00039ca0) popup_midp_note_alarm_window_t11

0x3bbf,	// (0x00039cb2) scroll_pane_cp17_ParamLimits

0x3bbf,	// (0x00039cb2) scroll_pane_cp17

0x0b84,	// (0x00036c77) volume_small_pane_cp_g1

0x0f60,	// (0x00037053) volume_small_pane_cp_g2

0x0f69,	// (0x0003705c) volume_small_pane_cp_g3

0x0f72,	// (0x00037065) volume_small_pane_cp_g4

0x0f7b,	// (0x0003706e) volume_small_pane_cp_g5

0x0f84,	// (0x00037077) volume_small_pane_cp_g6

0x0f8d,	// (0x00037080) volume_small_pane_cp_g7

0x0f96,	// (0x00037089) volume_small_pane_cp_g8

0x0f9f,	// (0x00037092) volume_small_pane_cp_g9

0x0fa8,	// (0x0003709b) volume_small_pane_cp_g10

0x2851,	// (0x00038944) midp_ticker_pane_g1_ParamLimits

0x285d,	// (0x00038950) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00045826) midp_ticker_pane_g_ParamLimits

0xa488,	// (0x0004057b) midp_ticker_pane_t1_ParamLimits

0xc108,	// (0x000421fb) aid_fill_nsta_2

0x33d2,	// (0x000394c5) list_form2_midp_pane

0x454e,	// (0x0003a641) midp_editing_number_pane_ParamLimits

0x455d,	// (0x0003a650) midp_ticker_pane_ParamLimits

0x5215,	// (0x0003b308) form2_midp_field_pane

0x5239,	// (0x0003b32c) scroll_pane_cp51

0x5259,	// (0x0003b34c) form2_midp_button_pane_ParamLimits

0x5259,	// (0x0003b34c) form2_midp_button_pane

0x526b,	// (0x0003b35e) form2_midp_content_pane_ParamLimits

0x526b,	// (0x0003b35e) form2_midp_content_pane

0x5285,	// (0x0003b378) form2_midp_field_choice_group_pane

0x528d,	// (0x0003b380) form2_midp_field_pane_g1

0x5295,	// (0x0003b388) form2_midp_field_pane_g2

0x529d,	// (0x0003b390) form2_midp_field_pane_g3

0x52a5,	// (0x0003b398) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x00045bc0) form2_midp_field_pane_g

0x52ad,	// (0x0003b3a0) form2_midp_gauge_slider_pane

0x52b5,	// (0x0003b3a8) form2_midp_gauge_wait_pane

0x52bd,	// (0x0003b3b0) form2_midp_image_pane_ParamLimits

0x52bd,	// (0x0003b3b0) form2_midp_image_pane

0x52d8,	// (0x0003b3cb) form2_midp_label_pane_ParamLimits

0x52d8,	// (0x0003b3cb) form2_midp_label_pane

0xcbb9,	// (0x00042cac) form2_midp_label_pane_cp_ParamLimits

0xcbb9,	// (0x00042cac) form2_midp_label_pane_cp

0x5318,	// (0x0003b40b) form2_midp_string_pane_ParamLimits

0x5318,	// (0x0003b40b) form2_midp_string_pane

0xd898,	// (0x0004398b) form2_midp_text_pane_ParamLimits

0xd898,	// (0x0004398b) form2_midp_text_pane

0x532a,	// (0x0003b41d) form2_midp_time_pane

0x533a,	// (0x0003b42d) input_focus_pane_cp51_ParamLimits

0x533a,	// (0x0003b42d) input_focus_pane_cp51

0x5352,	// (0x0003b445) form2_midp_label_pane_t1_ParamLimits

0x5352,	// (0x0003b445) form2_midp_label_pane_t1

0xd8b9,	// (0x000439ac) form2_mdip_text_pane_t1_ParamLimits

0xd8b9,	// (0x000439ac) form2_mdip_text_pane_t1

0xd8dd,	// (0x000439d0) form2_midp_time_pane_t1

0x53a0,	// (0x0003b493) form2_midp_gauge_slider_pane_t1

0xcbda,	// (0x00042ccd) form2_midp_gauge_slider_pane_t2

0xcbec,	// (0x00042cdf) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00045bc9) form2_midp_gauge_slider_pane_t

0x53d6,	// (0x0003b4c9) form2_midp_slider_pane

0x53e2,	// (0x0003b4d5) form2_midp_gauge_wait_pane_t1

0x53f0,	// (0x0003b4e3) form2_midp_wait_pane_ParamLimits

0x53f0,	// (0x0003b4e3) form2_midp_wait_pane

0x30fd,	// (0x000391f0) list_single_2graphic_pane_cp4_ParamLimits

0x30fd,	// (0x000391f0) list_single_2graphic_pane_cp4

0xcbfe,	// (0x00042cf1) list_single_midp_graphic_pane_cp_ParamLimits

0xcbfe,	// (0x00042cf1) list_single_midp_graphic_pane_cp

0xb8d0,	// (0x000419c3) list_highlight_pane_cp20

0x5434,	// (0x0003b527) list_single_2graphic_pane_g1_cp4

0x49cd,	// (0x0003aac0) list_single_2graphic_pane_g2_cp4

0x543c,	// (0x0003b52f) list_single_2graphic_pane_t1_cp4

0xb92c,	// (0x00041a1f) list_highlight_pane_cp21

0x544b,	// (0x0003b53e) list_single_midp_graphic_pane_g4_cp

0x545a,	// (0x0003b54d) list_single_midp_graphic_pane_t1_cp

0xcc1f,	// (0x00042d12) form2_mdip_string_pane_t1_ParamLimits

0xcc1f,	// (0x00042d12) form2_mdip_string_pane_t1

0xb8d0,	// (0x000419c3) bg_wml_button_pane_cp2

0xb8c6,	// (0x000419b9) form2_midp_image_pane_g1

0xd38f,	// (0x00043482) list_double_large_graphic_pane_g5_ParamLimits

0xd38f,	// (0x00043482) list_double_large_graphic_pane_g5

0xa3e4,	// (0x000404d7) midp_form_pane_ParamLimits

0xb92c,	// (0x00041a1f) main_apps_wheel_pane_ParamLimits

0xab48,	// (0x00040c3b) popup_preview_window_ParamLimits

0xab48,	// (0x00040c3b) popup_preview_window

0x09b4,	// (0x00036aa7) popup_touch_info_window_ParamLimits

0x09b4,	// (0x00036aa7) popup_touch_info_window

0x09d6,	// (0x00036ac9) popup_touch_menu_window_ParamLimits

0x09d6,	// (0x00036ac9) popup_touch_menu_window

0xb8bc,	// (0x000419af) bg_popup_sub_pane_cp6

0x550b,	// (0x0003b5fe) list_touch_menu_pane

0x5513,	// (0x0003b606) list_single_touch_menu_pane_ParamLimits

0x5513,	// (0x0003b606) list_single_touch_menu_pane

0x552b,	// (0x0003b61e) list_single_touch_menu_pane_t1

0xb92c,	// (0x00041a1f) bg_popup_sub_pane_cp7_ParamLimits

0xb92c,	// (0x00041a1f) bg_popup_sub_pane_cp7

0x5539,	// (0x0003b62c) heading_sub_pane

0x5541,	// (0x0003b634) list_touch_info_pane_ParamLimits

0x5541,	// (0x0003b634) list_touch_info_pane

0x5550,	// (0x0003b643) list_single_touch_info_pane_ParamLimits

0x5550,	// (0x0003b643) list_single_touch_info_pane

0x5562,	// (0x0003b655) list_single_touch_info_pane_t1

0x5570,	// (0x0003b663) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00045bd7) list_single_touch_info_pane_t

0x2773,	// (0x00038866) bg_popup_heading_pane_cp

0x557e,	// (0x0003b671) heading_sub_pane_t1

0x3044,	// (0x00039137) bg_popup_preview_window_pane_cp_ParamLimits

0x3044,	// (0x00039137) bg_popup_preview_window_pane_cp

0x5539,	// (0x0003b62c) heading_preview_pane

0x5541,	// (0x0003b634) list_preview_pane_ParamLimits

0x5541,	// (0x0003b634) list_preview_pane

0x558c,	// (0x0003b67f) popup_preview_window_g1

0x5550,	// (0x0003b643) list_single_preview_pane_ParamLimits

0x5550,	// (0x0003b643) list_single_preview_pane

0x5594,	// (0x0003b687) list_single_preview_pane_g1

0x559c,	// (0x0003b68f) list_single_preview_pane_t1

0x5562,	// (0x0003b655) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00045bdc) list_single_preview_pane_t

0x55aa,	// (0x0003b69d) bg_popup_heading_pane_cp2_ParamLimits

0x55aa,	// (0x0003b69d) bg_popup_heading_pane_cp2

0x55c0,	// (0x0003b6b3) heading_preview_pane_g1

0x55c8,	// (0x0003b6bb) heading_preview_pane_t1_ParamLimits

0x55c8,	// (0x0003b6bb) heading_preview_pane_t1

0xb97f,	// (0x00041a72) soft_indicator_pane_t1_ParamLimits

0xbee1,	// (0x00041fd4) scroll_pane_ParamLimits

0xf269,	// (0x0004535c) scroll_sc2_left_pane

0xf272,	// (0x00045365) scroll_sc2_right_pane

0xf291,	// (0x00045384) scroll_bg_pane_g1_ParamLimits

0xf2a6,	// (0x00045399) scroll_bg_pane_g2_ParamLimits

0xf2be,	// (0x000453b1) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x000457b1) scroll_bg_pane_g_ParamLimits

0xf291,	// (0x00045384) scroll_handle_pane_g1_ParamLimits

0xf2e0,	// (0x000453d3) scroll_handle_pane_g2_ParamLimits

0xf2be,	// (0x000453b1) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x000457b8) scroll_handle_pane_g_ParamLimits

0x0412,	// (0x00036505) popup_choice_list_window_ParamLimits

0x0412,	// (0x00036505) popup_choice_list_window

0x2f1a,	// (0x0003900d) choice_list_pane

0x2f9c,	// (0x0003908f) cell_toolbar_pane_t1

0x2fc4,	// (0x000390b7) toolbar_button_pane_ParamLimits

0x4089,	// (0x0003a17c) ai_gene_pane_1_t2_ParamLimits

0x4089,	// (0x0003a17c) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000459db) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000459db) ai_gene_pane_1_t

0x55e5,	// (0x0003b6d8) scroll_sc2_left_pane_g1

0x55e5,	// (0x0003b6d8) scroll_sc2_right_pane_g1

0x2a9a,	// (0x00038b8d) bg_popup_sub_pane_cp10

0x55ef,	// (0x0003b6e2) list_choice_list_pane

0x5608,	// (0x0003b6fb) list_single_choice_list_pane_ParamLimits

0x5608,	// (0x0003b6fb) list_single_choice_list_pane

0x5620,	// (0x0003b713) list_single_choice_list_pane_g1

0xc0cf,	// (0x000421c2) list_single_choice_list_pane_t1_ParamLimits

0xc0cf,	// (0x000421c2) list_single_choice_list_pane_t1

0x5628,	// (0x0003b71b) choice_list_pane_g1

0x5630,	// (0x0003b723) choice_list_pane_t1

0xb8bc,	// (0x000419af) input_focus_pane_cp11

0xf06d,	// (0x00045160) title_pane_stacon_g2_ParamLimits

0xf06d,	// (0x00045160) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00045797) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00045797) title_pane_stacon_g

0x2773,	// (0x00038866) cursor_press_pane

0xa7bf,	// (0x000408b2) popup_fep_hwr_window_ParamLimits

0xa7bf,	// (0x000408b2) popup_fep_hwr_window

0x0556,	// (0x00036649) popup_fep_vkb_window_ParamLimits

0x0556,	// (0x00036649) popup_fep_vkb_window

0x563e,	// (0x0003b731) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00045c05) fep_vkb_side_pane_g_ParamLimits

0x0fea,	// (0x000370dd) fep_hwr_candidate_pane_ParamLimits

0x0fea,	// (0x000370dd) fep_hwr_candidate_pane

0x1014,	// (0x00037107) fep_hwr_side_pane_ParamLimits

0x1014,	// (0x00037107) fep_hwr_side_pane

0x1036,	// (0x00037129) fep_hwr_top_pane_ParamLimits

0x1036,	// (0x00037129) fep_hwr_top_pane

0x104e,	// (0x00037141) fep_hwr_write_pane_ParamLimits

0x104e,	// (0x00037141) fep_hwr_write_pane

0xfb12,	// (0x00045c05) fep_vkb_side_pane_g

0x5646,	// (0x0003b739) fep_hwr_top_pane_g1

0x5658,	// (0x0003b74b) fep_hwr_top_pane_g2

0x1088,	// (0x0003717b) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x00045be1) fep_hwr_top_pane_g

0x109d,	// (0x00037190) fep_hwr_top_text_pane

0xf3da,	// (0x000454cd) fep_hwr_top_text_pane_g1

0x569a,	// (0x0003b78d) fep_hwr_top_text_pane_t1

0x11a7,	// (0x0003729a) fep_hwr_candidate_pane_g1

0x58e5,	// (0x0003b9d8) fep_vkb_keypad_pane_g3_ParamLimits

0x58e5,	// (0x0003b9d8) fep_vkb_keypad_pane_g3

0x5911,	// (0x0003ba04) fep_vkb_keypad_pane_g4_ParamLimits

0x5911,	// (0x0003ba04) fep_vkb_keypad_pane_g4

0x5988,	// (0x0003ba7b) fep_vkb_bottom_pane_g2_ParamLimits

0x5988,	// (0x0003ba7b) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00045c0c) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00045c0c) fep_vkb_bottom_pane_g

0x55e5,	// (0x0003b6d8) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00045c16) cell_vkb_side_pane_g

0x5a13,	// (0x0003bb06) cell_vkb_side_pane_t1

0x5a21,	// (0x0003bb14) cell_vkb_side_pane_t1_copy1

0x55e5,	// (0x0003b6d8) bg_fep_vkb_candidate_pane_g2

0x5b65,	// (0x0003bc58) cell_vkb_candidate_pane_ParamLimits

0x56a8,	// (0x0003b79b) aid_size_cell_vkb_ParamLimits

0x56a8,	// (0x0003b79b) aid_size_cell_vkb

0x5b65,	// (0x0003bc58) cell_vkb_candidate_pane

0x11ce,	// (0x000372c1) bg_popup_fep_shadow_pane_g1

0xccbb,	// (0x00042dae) fep_vkb_bottom_pane_ParamLimits

0xccbb,	// (0x00042dae) fep_vkb_bottom_pane

0x5777,	// (0x0003b86a) fep_vkb_candidate_pane_ParamLimits

0x5777,	// (0x0003b86a) fep_vkb_candidate_pane

0xcce7,	// (0x00042dda) fep_vkb_keypad_pane_ParamLimits

0xcce7,	// (0x00042dda) fep_vkb_keypad_pane

0xcd0e,	// (0x00042e01) fep_vkb_side_pane_ParamLimits

0xcd0e,	// (0x00042e01) fep_vkb_side_pane

0xcd4a,	// (0x00042e3d) fep_vkb_top_pane_ParamLimits

0xcd4a,	// (0x00042e3d) fep_vkb_top_pane

0x583e,	// (0x0003b931) fep_vkb_top_pane_g1_ParamLimits

0x583e,	// (0x0003b931) fep_vkb_top_pane_g1

0x584d,	// (0x0003b940) fep_vkb_top_pane_g2_ParamLimits

0x584d,	// (0x0003b940) fep_vkb_top_pane_g2

0x585c,	// (0x0003b94f) fep_vkb_top_pane_g3_ParamLimits

0x585c,	// (0x0003b94f) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00045bfc) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00045bfc) fep_vkb_top_pane_g

0x587a,	// (0x0003b96d) fep_vkb_top_text_pane_ParamLimits

0x587a,	// (0x0003b96d) fep_vkb_top_text_pane

0xcd86,	// (0x00042e79) fep_vkb_side_pane_g1_ParamLimits

0xcd86,	// (0x00042e79) fep_vkb_side_pane_g1

0x58d4,	// (0x0003b9c7) grid_vkb_side_pane_ParamLimits

0x58d4,	// (0x0003b9c7) grid_vkb_side_pane

0x11d6,	// (0x000372c9) bg_popup_fep_shadow_pane_g2

0x11df,	// (0x000372d2) bg_popup_fep_shadow_pane_g3

0x11e7,	// (0x000372da) bg_popup_fep_shadow_pane_g4

0x11f0,	// (0x000372e3) bg_popup_fep_shadow_pane_g5

0x11fa,	// (0x000372ed) bg_popup_fep_shadow_pane_g6

0x1202,	// (0x000372f5) bg_popup_fep_shadow_pane_g7

0xbfde,	// (0x000420d1) bg_popup_fep_shadow_pane_g8

0x5933,	// (0x0003ba26) grid_vkb_keypad_number_pane_ParamLimits

0x5933,	// (0x0003ba26) grid_vkb_keypad_number_pane

0x5947,	// (0x0003ba3a) grid_vkb_keypad_pane_ParamLimits

0x5947,	// (0x0003ba3a) grid_vkb_keypad_pane

0x596d,	// (0x0003ba60) fep_vkb_bottom_pane_g1_ParamLimits

0x596d,	// (0x0003ba60) fep_vkb_bottom_pane_g1

0x5996,	// (0x0003ba89) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5996,	// (0x0003ba89) grid_vkb_keypad_bottom_left_pane

0x59ab,	// (0x0003ba9e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x59ab,	// (0x0003ba9e) grid_vkb_keypad_bottom_right_pane

0x59c0,	// (0x0003bab3) fep_vkb_top_text_pane_g1

0xcdcd,	// (0x00042ec0) fep_vkb_top_text_pane_t1

0xcddf,	// (0x00042ed2) cell_vkb_side_pane_ParamLimits

0xcddf,	// (0x00042ed2) cell_vkb_side_pane

0x55e5,	// (0x0003b6d8) cell_vkb_side_pane_g1

0x5a2f,	// (0x0003bb22) cell_vkb_keypad_pane_ParamLimits

0x5a2f,	// (0x0003bb22) cell_vkb_keypad_pane

0x5abc,	// (0x0003bbaf) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00045c29) bg_popup_fep_shadow_pane_g

0x1214,	// (0x00037307) cell_hwr_side_pane_g1

0x1214,	// (0x00037307) cell_hwr_side_pane_g2

0x5ac6,	// (0x0003bbb9) cell_vkb_keypad_pane_t1

0xcdf5,	// (0x00042ee8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcdf5,	// (0x00042ee8) cell_vkb_keypad_bottom_left_pane

0xce0a,	// (0x00042efd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce0a,	// (0x00042efd) cell_vkb_keypad_bottom_right_pane

0x55e5,	// (0x0003b6d8) cell_vkb_keypad_bottom_left_pane_g1

0x55e5,	// (0x0003b6d8) cell_vkb_keypad_bottom_right_pane_g1

0x5b2a,	// (0x0003bc1d) cell_vkb_keypad_number_pane_ParamLimits

0x5b2a,	// (0x0003bc1d) cell_vkb_keypad_number_pane

0x5b49,	// (0x0003bc3c) cell_vkb_keypad_number_pane_g1

0x5b53,	// (0x0003bc46) cell_vkb_keypad_number_pane_g2

0x5b5c,	// (0x0003bc4f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00045c1b) cell_vkb_keypad_number_pane_g

0x5ac6,	// (0x0003bbb9) cell_vkb_keypad_number_pane_t1

0x5b86,	// (0x0003bc79) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00045c3c) cell_hwr_side_pane_g

0x5b9f,	// (0x0003bc92) cell_hwr_side_pane_t1

0x121e,	// (0x00037311) cell_hwr_side_pane_t1_copy1

0x122c,	// (0x0003731f) cell_hwr_candidate_pane_g1

0x125b,	// (0x0003734e) cell_hwr_candidate_pane_t1

0x55e5,	// (0x0003b6d8) cell_vkb_candidate_pane_g2

0x5be3,	// (0x0003bcd6) cell_vkb_candidate_pane_t1

0x0fb1,	// (0x000370a4) bg_popup_fep_shadow_pane_ParamLimits

0x0fb1,	// (0x000370a4) bg_popup_fep_shadow_pane

0x1068,	// (0x0003715b) bg_fep_hwr_top_pane_g4

0x566a,	// (0x0003b75d) bg_hwr_side_pane_g1_ParamLimits

0x566a,	// (0x0003b75d) bg_hwr_side_pane_g1

0xb07a,	// (0x0004116d) cell_hwr_side_pane_ParamLimits

0xb07a,	// (0x0004116d) cell_hwr_side_pane

0x1118,	// (0x0003720b) fep_hwr_write_pane_g1_ParamLimits

0x1118,	// (0x0003720b) fep_hwr_write_pane_g1

0x1125,	// (0x00037218) fep_hwr_write_pane_g2_ParamLimits

0x1125,	// (0x00037218) fep_hwr_write_pane_g2

0x1132,	// (0x00037225) fep_hwr_write_pane_g3_ParamLimits

0x1132,	// (0x00037225) fep_hwr_write_pane_g3

0xb09a,	// (0x0004118d) fep_hwr_write_pane_g4_ParamLimits

0xb09a,	// (0x0004118d) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00045be8) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00045be8) fep_hwr_write_pane_g

0x1068,	// (0x0003715b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1068,	// (0x0003715b) bg_fep_hwr_candidate_pane_g2

0x1155,	// (0x00037248) cell_hwr_candidate_pane_ParamLimits

0x1155,	// (0x00037248) cell_hwr_candidate_pane

0x11a7,	// (0x0003729a) fep_hwr_candidate_pane_g1_ParamLimits

0x56d6,	// (0x0003b7c9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x56d6,	// (0x0003b7c9) bg_popup_fep_shadow_pane_cp2

0x586c,	// (0x0003b95f) fep_vkb_top_pane_g4_ParamLimits

0x586c,	// (0x0003b95f) fep_vkb_top_pane_g4

0x58b2,	// (0x0003b9a5) fep_vkb_side_pane_g2_ParamLimits

0x58b2,	// (0x0003b9a5) fep_vkb_side_pane_g2

0x9e5e,	// (0x0003ff51) list_setting_pane_t4_ParamLimits

0x9e5e,	// (0x0003ff51) list_setting_pane_t4

0x9ef2,	// (0x0003ffe5) list_setting_number_pane_t5_ParamLimits

0x9ef2,	// (0x0003ffe5) list_setting_number_pane_t5

0xf430,	// (0x00045523) list_double_heading_pane_cp2_ParamLimits

0xf430,	// (0x00045523) list_double_heading_pane_cp2

0x5bf1,	// (0x0003bce4) list_double_heading_pane_g1_cp2_ParamLimits

0x5bf1,	// (0x0003bce4) list_double_heading_pane_g1_cp2

0x5bfd,	// (0x0003bcf0) list_double_heading_pane_g2_cp2_ParamLimits

0x5bfd,	// (0x0003bcf0) list_double_heading_pane_g2_cp2

0x5c11,	// (0x0003bd04) list_double_heading_pane_t1_cp2_ParamLimits

0x5c11,	// (0x0003bd04) list_double_heading_pane_t1_cp2

0x5c27,	// (0x0003bd1a) list_double_heading_pane_t2_cp2_ParamLimits

0x5c27,	// (0x0003bd1a) list_double_heading_pane_t2_cp2

0xb8b4,	// (0x000419a7) aid_value_unit2

0xed89,	// (0x00044e7c) popup_preview_fixed_window

0xba5f,	// (0x00041b52) bg_popup_preview_window_pane_cp02

0x5c39,	// (0x0003bd2c) list_preview_fixed_pane

0x5c7f,	// (0x0003bd72) list_empty_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_empty_pane_fp

0x5c7f,	// (0x0003bd72) list_single_cale_day_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_cale_day_pane_fp

0x5c7f,	// (0x0003bd72) list_single_graphic_heading_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_graphic_heading_pane_fp

0x5c7f,	// (0x0003bd72) list_single_graphic_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_graphic_pane_fp

0x5c7f,	// (0x0003bd72) list_single_heading_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_heading_pane_fp

0x5c7f,	// (0x0003bd72) list_single_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_pane_fp

0x5c98,	// (0x0003bd8b) list_single_pane_fp_g1_ParamLimits

0x5c98,	// (0x0003bd8b) list_single_pane_fp_g1

0xd8fd,	// (0x000439f0) list_single_pane_fp_g2_ParamLimits

0xd8fd,	// (0x000439f0) list_single_pane_fp_g2

0xd909,	// (0x000439fc) list_single_pane_fp_g3_ParamLimits

0xd909,	// (0x000439fc) list_single_pane_fp_g3

0x5ca4,	// (0x0003bd97) list_single_pane_fp_g4_ParamLimits

0x5ca4,	// (0x0003bd97) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00045c4f) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00045c4f) list_single_pane_fp_g

0xd91d,	// (0x00043a10) list_single_pane_fp_t1_ParamLimits

0xd91d,	// (0x00043a10) list_single_pane_fp_t1

0xd934,	// (0x00043a27) list_single_graphic_pane_fp_g1_ParamLimits

0xd934,	// (0x00043a27) list_single_graphic_pane_fp_g1

0x5c98,	// (0x0003bd8b) list_single_graphic_pane_fp_g2_ParamLimits

0x5c98,	// (0x0003bd8b) list_single_graphic_pane_fp_g2

0xd8fd,	// (0x000439f0) list_single_graphic_pane_fp_g3_ParamLimits

0xd8fd,	// (0x000439f0) list_single_graphic_pane_fp_g3

0xd909,	// (0x000439fc) list_single_graphic_pane_fp_g4_ParamLimits

0xd909,	// (0x000439fc) list_single_graphic_pane_fp_g4

0x5ca4,	// (0x0003bd97) list_single_graphic_pane_fp_g5_ParamLimits

0x5ca4,	// (0x0003bd97) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00045c58) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00045c58) list_single_graphic_pane_fp_g

0xd940,	// (0x00043a33) list_single_graphic_pane_fp_t1_ParamLimits

0xd940,	// (0x00043a33) list_single_graphic_pane_fp_t1

0xd934,	// (0x00043a27) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd934,	// (0x00043a27) list_single_graphic_heading_pane_fp_g1

0x5c98,	// (0x0003bd8b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5c98,	// (0x0003bd8b) list_single_graphic_heading_pane_fp_g2

0xd8fd,	// (0x000439f0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd8fd,	// (0x000439f0) list_single_graphic_heading_pane_fp_g3

0xd909,	// (0x000439fc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd909,	// (0x000439fc) list_single_graphic_heading_pane_fp_g4

0x5ca4,	// (0x0003bd97) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5ca4,	// (0x0003bd97) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00045c58) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00045c58) list_single_graphic_heading_pane_fp_g

0xd956,	// (0x00043a49) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd956,	// (0x00043a49) list_single_graphic_heading_pane_fp_t1

0xd96c,	// (0x00043a5f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd96c,	// (0x00043a5f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00045c63) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00045c63) list_single_graphic_heading_pane_fp_t

0xd97e,	// (0x00043a71) list_single_cale_day_pane_fp_g1_ParamLimits

0xd97e,	// (0x00043a71) list_single_cale_day_pane_fp_g1

0x5cb0,	// (0x0003bda3) list_single_cale_day_pane_fp_g2_ParamLimits

0x5cb0,	// (0x0003bda3) list_single_cale_day_pane_fp_g2

0xd9b6,	// (0x00043aa9) list_single_cale_day_pane_fp_g3_ParamLimits

0xd9b6,	// (0x00043aa9) list_single_cale_day_pane_fp_g3

0xd9de,	// (0x00043ad1) list_single_cale_day_pane_fp_g4_ParamLimits

0xd9de,	// (0x00043ad1) list_single_cale_day_pane_fp_g4

0xda02,	// (0x00043af5) list_single_cale_day_pane_fp_g5_ParamLimits

0xda02,	// (0x00043af5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x00045c68) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x00045c68) list_single_cale_day_pane_fp_g

0xda26,	// (0x00043b19) list_single_cale_day_pane_fp_t1_ParamLimits

0xda26,	// (0x00043b19) list_single_cale_day_pane_fp_t1

0xda4c,	// (0x00043b3f) list_single_cale_day_pane_fp_t2_ParamLimits

0xda4c,	// (0x00043b3f) list_single_cale_day_pane_fp_t2

0xda65,	// (0x00043b58) list_single_cale_day_pane_fp_t3_ParamLimits

0xda65,	// (0x00043b58) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x00045c73) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x00045c73) list_single_cale_day_pane_fp_t

0x5c98,	// (0x0003bd8b) list_empty_pane_fp_g1_ParamLimits

0x5c98,	// (0x0003bd8b) list_empty_pane_fp_g1

0xda7e,	// (0x00043b71) list_empty_pane_fp_t1

0xda8c,	// (0x00043b7f) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x00045c7a) list_empty_pane_fp_t

0x5c98,	// (0x0003bd8b) list_single_heading_pane_fp_g1_ParamLimits

0x5c98,	// (0x0003bd8b) list_single_heading_pane_fp_g1

0xd8fd,	// (0x000439f0) list_single_heading_pane_fp_g2_ParamLimits

0xd8fd,	// (0x000439f0) list_single_heading_pane_fp_g2

0xd909,	// (0x000439fc) list_single_heading_pane_fp_g3_ParamLimits

0xd909,	// (0x000439fc) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x00045c7f) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x00045c7f) list_single_heading_pane_fp_g

0xda9a,	// (0x00043b8d) list_single_heading_pane_fp_t1_ParamLimits

0xda9a,	// (0x00043b8d) list_single_heading_pane_fp_t1

0xdaac,	// (0x00043b9f) list_single_heading_pane_fp_t2_ParamLimits

0xdaac,	// (0x00043b9f) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x00045c86) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x00045c86) list_single_heading_pane_fp_t

0xeeb4,	// (0x00044fa7) aid_size_cell_fast

0xba42,	// (0x00041b35) soft_indicator_pane_cp1_t1

0xeef1,	// (0x00044fe4) cell_app_pane_cp2_ParamLimits

0xeef1,	// (0x00044fe4) cell_app_pane_cp2

0x0fd3,	// (0x000370c6) fep_hwr_candidate_drop_down_list_pane

0x11c1,	// (0x000372b4) fep_hwr_candidate_pane_g3_ParamLimits

0x11c1,	// (0x000372b4) fep_hwr_candidate_pane_g3

0xd8f0,	// (0x000439e3) fep_hwr_candidate_pane_g4_ParamLimits

0xd8f0,	// (0x000439e3) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00045bf5) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00045bf5) fep_hwr_candidate_pane_g

0x5766,	// (0x0003b859) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5766,	// (0x0003b859) fep_vkb_candidate_drop_down_list_pane

0x5b8e,	// (0x0003bc81) fep_vkb_candidate_pane_g3

0x5b96,	// (0x0003bc89) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00045c22) fep_vkb_candidate_pane_g

0x122c,	// (0x0003731f) cell_hwr_candidate_pane_g1_ParamLimits

0x123a,	// (0x0003732d) cell_hwr_candidate_pane_g3_ParamLimits

0x123a,	// (0x0003732d) cell_hwr_candidate_pane_g3

0x70c7,	// (0x0003d1ba) cell_hwr_candidate_pane_g4_ParamLimits

0x70c7,	// (0x0003d1ba) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00045c41) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00045c41) cell_hwr_candidate_pane_g

0x5bad,	// (0x0003bca0) cell_vkb_candidate_pane_g3_ParamLimits

0x5bad,	// (0x0003bca0) cell_vkb_candidate_pane_g3

0x5bc8,	// (0x0003bcbb) cell_vkb_candidate_pane_g4_ParamLimits

0x5bc8,	// (0x0003bcbb) cell_vkb_candidate_pane_g4

0x5cbc,	// (0x0003bdaf) cell_app_pane_cp2_g1_ParamLimits

0x5cbc,	// (0x0003bdaf) cell_app_pane_cp2_g1

0x5cda,	// (0x0003bdcd) cell_app_pane_cp2_g2_ParamLimits

0x5cda,	// (0x0003bdcd) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x00045c8b) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x00045c8b) cell_app_pane_cp2_g

0x5ce6,	// (0x0003bdd9) cell_app_pane_cp2_t1_ParamLimits

0x5ce6,	// (0x0003bdd9) cell_app_pane_cp2_t1

0xbf6e,	// (0x00042061) grid_highlight_pane_cp1_ParamLimits

0xbf6e,	// (0x00042061) grid_highlight_pane_cp1

0x1279,	// (0x0003736c) cell_hwr_candidate_pane_cp1_ParamLimits

0x1279,	// (0x0003736c) cell_hwr_candidate_pane_cp1

0x122c,	// (0x0003731f) fep_hwr_candidate_drop_down_list_pane_g1

0x129d,	// (0x00037390) fep_hwr_candidate_drop_down_list_pane_g2

0x12aa,	// (0x0003739d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x00045c90) fep_hwr_candidate_drop_down_list_pane_g

0x12b7,	// (0x000373aa) fep_hwr_candidate_drop_down_list_scroll_pane

0x12c0,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x12c0,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x12cd,	// (0x000373c0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x12cd,	// (0x000373c0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x12da,	// (0x000373cd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x12da,	// (0x000373cd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12e7,	// (0x000373da) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12e7,	// (0x000373da) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1302,	// (0x000373f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1302,	// (0x000373f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x131d,	// (0x00037410) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x131d,	// (0x00037410) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1338,	// (0x0003742b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1338,	// (0x0003742b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1353,	// (0x00037446) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1353,	// (0x00037446) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x00045c97) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x00045c97) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5cf8,	// (0x0003bdeb) cell_vkb_candidate_pane_cp1_ParamLimits

0x5cf8,	// (0x0003bdeb) cell_vkb_candidate_pane_cp1

0x586c,	// (0x0003b95f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x586c,	// (0x0003b95f) fep_vkb_candidate_drop_down_list_pane_g1

0x5d1e,	// (0x0003be11) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5d1e,	// (0x0003be11) fep_vkb_candidate_drop_down_list_pane_g2

0x5d2b,	// (0x0003be1e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5d2b,	// (0x0003be1e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00045ca8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x00045ca8) fep_vkb_candidate_drop_down_list_pane_g

0x5d38,	// (0x0003be2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5d38,	// (0x0003be2b) fep_vkb_candidate_drop_down_list_scroll_pane

0x5d45,	// (0x0003be38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d45,	// (0x0003be38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5d52,	// (0x0003be45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d52,	// (0x0003be45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5d5e,	// (0x0003be51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d5e,	// (0x0003be51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5d6a,	// (0x0003be5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5d6a,	// (0x0003be5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5d8b,	// (0x0003be7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d8b,	// (0x0003be7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5dac,	// (0x0003be9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5dac,	// (0x0003be9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5dcd,	// (0x0003bec0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5dcd,	// (0x0003bec0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5dee,	// (0x0003bee1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5dee,	// (0x0003bee1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00045caf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00045caf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9763,	// (0x0003f856) title_pane_g1_ParamLimits

0x9776,	// (0x0003f869) title_pane_g2_ParamLimits

0xf529,	// (0x0004561c) title_pane_g_ParamLimits

0xf3ca,	// (0x000454bd) aid_call2_pane

0xf3d2,	// (0x000454c5) aid_call_pane

0xf3da,	// (0x000454cd) popup_clock_analogue_window_g1

0xf3da,	// (0x000454cd) popup_clock_analogue_window_g2

0xf3e2,	// (0x000454d5) popup_clock_analogue_window_g3

0xf3eb,	// (0x000454de) popup_clock_analogue_window_g4

0xb8c6,	// (0x000419b9) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000457c6) popup_clock_analogue_window_g

0xf3f3,	// (0x000454e6) popup_clock_analogue_window_t1

0xf450,	// (0x00045543) clock_digital_number_pane_ParamLimits

0xf450,	// (0x00045543) clock_digital_number_pane

0xf45c,	// (0x0004554f) clock_digital_number_pane_cp02_ParamLimits

0xf45c,	// (0x0004554f) clock_digital_number_pane_cp02

0xf468,	// (0x0004555b) clock_digital_number_pane_cp03_ParamLimits

0xf468,	// (0x0004555b) clock_digital_number_pane_cp03

0xf474,	// (0x00045567) clock_digital_number_pane_cp04_ParamLimits

0xf474,	// (0x00045567) clock_digital_number_pane_cp04

0xf480,	// (0x00045573) clock_digital_separator_pane_ParamLimits

0xf480,	// (0x00045573) clock_digital_separator_pane

0xf48c,	// (0x0004557f) popup_clock_digital_window_t1_ParamLimits

0xf48c,	// (0x0004557f) popup_clock_digital_window_t1

0xb8c6,	// (0x000419b9) clock_digital_number_pane_g1

0xb8c6,	// (0x000419b9) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000457d1) clock_digital_number_pane_g

0xb8c6,	// (0x000419b9) clock_digital_separator_pane_g1

0xb8c6,	// (0x000419b9) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000457d1) clock_digital_separator_pane_g

0xc0e4,	// (0x000421d7) aid_fill_nsta_ParamLimits

0xc21c,	// (0x0004230f) indicator_nsta_pane_ParamLimits

0x2db3,	// (0x00038ea6) popup_clock_analogue_window

0x2db3,	// (0x00038ea6) popup_clock_digital_window

0xcaba,	// (0x00042bad) grid_indicator_nsta_pane_ParamLimits

0x503a,	// (0x0003b12d) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00045b75) clock_nsta_pane_t

0xf217,	// (0x0004530a) aid_size_max_handle

0xa1d5,	// (0x000402c8) aid_size_min_handle

0x2773,	// (0x00038866) editor_scroll_pane

0x5e09,	// (0x0003befc) ex_editor_pane

0xc0aa,	// (0x0004219d) scroll_pane_cp13

0xbf0d,	// (0x00042000) scroll_pane_cp14

0xf428,	// (0x0004551b) scroll_pane_cp36

0xa262,	// (0x00040355) list_single_graphic_hl_pane_cp2_ParamLimits

0xa262,	// (0x00040355) list_single_graphic_hl_pane_cp2

0xc947,	// (0x00042a3a) list_single_graphic_hl_pane_ParamLimits

0xc947,	// (0x00042a3a) list_single_graphic_hl_pane

0xdac2,	// (0x00043bb5) aid_size_min_hl_cp1

0x5e11,	// (0x0003bf04) list_highlight_pane_cp34_ParamLimits

0x5e11,	// (0x0003bf04) list_highlight_pane_cp34

0x5e22,	// (0x0003bf15) list_single_graphic_hl_pane_g1_ParamLimits

0x5e22,	// (0x0003bf15) list_single_graphic_hl_pane_g1

0xb0af,	// (0x000411a2) list_single_graphic_hl_pane_g2_ParamLimits

0xb0af,	// (0x000411a2) list_single_graphic_hl_pane_g2

0xb0af,	// (0x000411a2) list_single_graphic_hl_pane_g3_ParamLimits

0xb0af,	// (0x000411a2) list_single_graphic_hl_pane_g3

0xdacb,	// (0x00043bbe) list_single_graphic_hl_pane_g4_ParamLimits

0xdacb,	// (0x00043bbe) list_single_graphic_hl_pane_g4

0xb0bb,	// (0x000411ae) list_single_graphic_hl_pane_g5_ParamLimits

0xb0bb,	// (0x000411ae) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x00045cc0) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x00045cc0) list_single_graphic_hl_pane_g

0xb0cf,	// (0x000411c2) list_single_graphic_hl_pane_t1_ParamLimits

0xb0cf,	// (0x000411c2) list_single_graphic_hl_pane_t1

0x5e2f,	// (0x0003bf22) aid_size_min_hl_cp2

0x5e38,	// (0x0003bf2b) list_highlight_pane_cp34_cp2_ParamLimits

0x5e38,	// (0x0003bf2b) list_highlight_pane_cp34_cp2

0x5e22,	// (0x0003bf15) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5e22,	// (0x0003bf15) list_single_graphic_hl_pane_g1_cp2

0x5e45,	// (0x0003bf38) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5e45,	// (0x0003bf38) list_single_graphic_hl_pane_g2_cp2

0x5e51,	// (0x0003bf44) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5e51,	// (0x0003bf44) list_single_graphic_hl_pane_g3_cp2

0x568e,	// (0x0003b781) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x568e,	// (0x0003b781) list_single_graphic_hl_pane_g4_cp2

0x5e5f,	// (0x0003bf52) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5e5f,	// (0x0003bf52) list_single_graphic_hl_pane_g5_cp2

0xa59d,	// (0x00040690) control_pane_g4_ParamLimits

0xa59d,	// (0x00040690) control_pane_g4

0x2a9a,	// (0x00038b8d) bg_popup_sub_pane_cp10_ParamLimits

0x55ef,	// (0x0003b6e2) list_choice_list_pane_ParamLimits

0x55fe,	// (0x0003b6f1) scroll_pane_cp23

0xba5f,	// (0x00041b52) bg_popup_preview_window_pane_cp02_ParamLimits

0x5c39,	// (0x0003bd2c) list_preview_fixed_pane_ParamLimits

0x5c4f,	// (0x0003bd42) list_preview_fixed_pane_cp_ParamLimits

0x5c4f,	// (0x0003bd42) list_preview_fixed_pane_cp

0x5c5b,	// (0x0003bd4e) popup_preview_fixed_window_g1_ParamLimits

0x5c5b,	// (0x0003bd4e) popup_preview_fixed_window_g1

0x5c67,	// (0x0003bd5a) popup_preview_fixed_window_g2_ParamLimits

0x5c67,	// (0x0003bd5a) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00045c48) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00045c48) popup_preview_fixed_window_g

0xf152,	// (0x00045245) aid_navi_side_left_pane_ParamLimits

0xf167,	// (0x0004525a) aid_navi_side_right_pane_ParamLimits

0xf17f,	// (0x00045272) navi_icon_pane_stacon_ParamLimits

0xf193,	// (0x00045286) navi_navi_pane_stacon_ParamLimits

0xf17f,	// (0x00045272) navi_text_pane_stacon_ParamLimits

0xec7a,	// (0x00044d6d) main_text_info_pane

0x5e89,	// (0x0003bf7c) listscroll_text_info_pane

0x5e91,	// (0x0003bf84) list_text_info_pane_ParamLimits

0x5e91,	// (0x0003bf84) list_text_info_pane

0x5ea0,	// (0x0003bf93) scroll_pane_cp24_ParamLimits

0x5ea0,	// (0x0003bf93) scroll_pane_cp24

0xce25,	// (0x00042f18) list_text_info_pane_t1_ParamLimits

0xce25,	// (0x00042f18) list_text_info_pane_t1

0xa723,	// (0x00040816) popup_fast_swap2_window_ParamLimits

0xa723,	// (0x00040816) popup_fast_swap2_window

0x5ee3,	// (0x0003bfd6) aid_size_cell_fast2

0xb8bc,	// (0x000419af) bg_popup_window_pane_cp17

0x3406,	// (0x000394f9) heading_pane_cp2

0x340e,	// (0x00039501) listscroll_fast2_pane

0x5eed,	// (0x0003bfe0) grid_fast2_pane

0x5ef7,	// (0x0003bfea) listscroll_fast2_pane_g1

0x5f01,	// (0x0003bff4) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00045ccb) listscroll_fast2_pane_g

0xc0aa,	// (0x0004219d) scroll_pane_cp26

0x5f0b,	// (0x0003bffe) cell_fast2_pane_ParamLimits

0x5f0b,	// (0x0003bffe) cell_fast2_pane

0x5f22,	// (0x0003c015) cell_fast2_pane_g1

0x5f2b,	// (0x0003c01e) cell_fast2_pane_g2

0x5f34,	// (0x0003c027) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x00045cd0) cell_fast2_pane_g

0xbcd4,	// (0x00041dc7) grid_highlight_pane_cp9

0x03f6,	// (0x000364e9) main_eswt_pane_ParamLimits

0x03f6,	// (0x000364e9) main_eswt_pane

0x5eb5,	// (0x0003bfa8) list_single_text_info_pane

0x5f3c,	// (0x0003c02f) eswt_ctrl_button_pane

0x5f3c,	// (0x0003c02f) eswt_ctrl_canvas_pane

0x5f44,	// (0x0003c037) eswt_ctrl_combo_pane

0x5f3c,	// (0x0003c02f) eswt_ctrl_default_pane

0x5f3c,	// (0x0003c02f) eswt_ctrl_label_pane

0x5f4c,	// (0x0003c03f) eswt_ctrl_wait_pane

0x5f54,	// (0x0003c047) eswt_shell_pane

0xb8bc,	// (0x000419af) listscroll_eswt_app_pane

0x5f74,	// (0x0003c067) popup_eswt_tasktip_window_ParamLimits

0x5f74,	// (0x0003c067) popup_eswt_tasktip_window

0x3044,	// (0x00039137) bg_popup_window_pane_cp18

0x5f85,	// (0x0003c078) eswt_control_pane_g1_ParamLimits

0x5f85,	// (0x0003c078) eswt_control_pane_g1

0x5f92,	// (0x0003c085) eswt_control_pane_g2_ParamLimits

0x5f92,	// (0x0003c085) eswt_control_pane_g2

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_ParamLimits

0x5f9f,	// (0x0003c092) eswt_control_pane_g3

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_ParamLimits

0x5fac,	// (0x0003c09f) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00045cd7) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00045cd7) eswt_control_pane_g

0xbf6e,	// (0x00042061) bg_button_pane_ParamLimits

0xbf6e,	// (0x00042061) bg_button_pane

0xbce9,	// (0x00041ddc) common_borders_pane_copy2_ParamLimits

0xbce9,	// (0x00041ddc) common_borders_pane_copy2

0x5fb9,	// (0x0003c0ac) control_button_pane_g1_ParamLimits

0x5fb9,	// (0x0003c0ac) control_button_pane_g1

0x5fc5,	// (0x0003c0b8) control_button_pane_g2_ParamLimits

0x5fc5,	// (0x0003c0b8) control_button_pane_g2

0x5fd1,	// (0x0003c0c4) control_button_pane_g3_ParamLimits

0x5fd1,	// (0x0003c0c4) control_button_pane_g3

0x0002,

0xfbed,	// (0x00045ce0) control_button_pane_g_ParamLimits

0xfbed,	// (0x00045ce0) control_button_pane_g

0x5fe5,	// (0x0003c0d8) control_button_pane_t1

0x5ff3,	// (0x0003c0e6) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00045ce7) control_button_pane_t

0x2fd0,	// (0x000390c3) bg_button_pane_g1

0x2fe0,	// (0x000390d3) bg_button_pane_g2

0x2fd8,	// (0x000390cb) bg_button_pane_g3

0x2ff0,	// (0x000390e3) bg_button_pane_g4

0x2fe8,	// (0x000390db) bg_button_pane_g5

0x2ff8,	// (0x000390eb) bg_button_pane_g6

0x3000,	// (0x000390f3) bg_button_pane_g7

0x3010,	// (0x00039103) bg_button_pane_g8

0x3008,	// (0x000390fb) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0004592f) bg_button_pane_g

0x55aa,	// (0x0003b69d) common_borders_pane_ParamLimits

0x55aa,	// (0x0003b69d) common_borders_pane

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy1_ParamLimits

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy1

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy1_ParamLimits

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy1

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy1_ParamLimits

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy1

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy1_ParamLimits

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy1

0x55e5,	// (0x0003b6d8) bg_eswt_ctrl_canvas_pane_g1

0x55aa,	// (0x0003b69d) common_borders_pane_cp2_ParamLimits

0x55aa,	// (0x0003b69d) common_borders_pane_cp2

0x55aa,	// (0x0003b69d) common_borders_pane_cp3_ParamLimits

0x55aa,	// (0x0003b69d) common_borders_pane_cp3

0x6001,	// (0x0003c0f4) separator_horizontal_pane

0x6009,	// (0x0003c0fc) separator_vertical_pane

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy2_ParamLimits

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy2

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy2_ParamLimits

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy2

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy2_ParamLimits

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy2

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy2_ParamLimits

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy2

0xb8bc,	// (0x000419af) common_borders_pane_cp4

0x6012,	// (0x0003c105) separator_horizontal_pane_g1

0x601b,	// (0x0003c10e) separator_horizontal_pane_g2

0x6024,	// (0x0003c117) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00045cec) separator_horizontal_pane_g

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy3_ParamLimits

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy3

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy3_ParamLimits

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy3

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy3_ParamLimits

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy3

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy3_ParamLimits

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy3

0xb8bc,	// (0x000419af) common_borders_pane_cp5

0x602d,	// (0x0003c120) separator_vertical_pane_g1

0x6036,	// (0x0003c129) separator_vertical_pane_g2

0x603f,	// (0x0003c132) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00045cf3) separator_vertical_pane_g

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy4_ParamLimits

0x5f85,	// (0x0003c078) eswt_control_pane_g1_copy4

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy4_ParamLimits

0x5f92,	// (0x0003c085) eswt_control_pane_g2_copy4

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy4_ParamLimits

0x5f9f,	// (0x0003c092) eswt_control_pane_g3_copy4

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy4_ParamLimits

0x5fac,	// (0x0003c09f) eswt_control_pane_g4_copy4

0xce47,	// (0x00042f3a) eswt_ctrl_combo_button_pane

0xce4f,	// (0x00042f42) eswt_ctrl_input_pane

0xce57,	// (0x00042f4a) popup_choice_list_window_cp70

0xce5f,	// (0x00042f52) eswt_ctrl_input_pane_t1

0xb8bc,	// (0x000419af) input_focus_pane_cp70

0x55aa,	// (0x0003b69d) bg_button_pane_cp70_ParamLimits

0x55aa,	// (0x0003b69d) bg_button_pane_cp70

0xce6d,	// (0x00042f60) eswt_ctrl_combo_button_pane_g1

0x6076,	// (0x0003c169) wait_bar_pane_cp70

0x3044,	// (0x00039137) bg_popup_window_pane_cp70_ParamLimits

0x3044,	// (0x00039137) bg_popup_window_pane_cp70

0x607e,	// (0x0003c171) popup_eswt_tasktip_window_t1

0x6094,	// (0x0003c187) wait_bar_pane_cp71_ParamLimits

0x6094,	// (0x0003c187) wait_bar_pane_cp71

0x60a0,	// (0x0003c193) grid_eswt_app_pane

0xf269,	// (0x0004535c) scroll_pane_cp70

0xce75,	// (0x00042f68) cell_eswt_app_pane_ParamLimits

0xce75,	// (0x00042f68) cell_eswt_app_pane

0xcea7,	// (0x00042f9a) cell_eswt_app_pane_g1_ParamLimits

0xcea7,	// (0x00042f9a) cell_eswt_app_pane_g1

0xced6,	// (0x00042fc9) cell_eswt_app_pane_g2_ParamLimits

0xced6,	// (0x00042fc9) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00045cfa) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00045cfa) cell_eswt_app_pane_g

0xceff,	// (0x00042ff2) cell_eswt_app_pane_t1_ParamLimits

0xceff,	// (0x00042ff2) cell_eswt_app_pane_t1

0x6165,	// (0x0003c258) grid_highlight_pane_cp70_ParamLimits

0x6165,	// (0x0003c258) grid_highlight_pane_cp70

0x2639,	// (0x0003872c) set_content_pane_g1

0xa52f,	// (0x00040622) status_small_volume_pane

0x13a4,	// (0x00037497) status_small_volume_pane_g1

0x13ac,	// (0x0003749f) volume_small2_pane

0x13b5,	// (0x000374a8) volume_small2_pane_g1

0x13be,	// (0x000374b1) volume_small2_pane_g2

0x13c7,	// (0x000374ba) volume_small2_pane_g3

0x13d0,	// (0x000374c3) volume_small2_pane_g4

0x13d9,	// (0x000374cc) volume_small2_pane_g5

0x13e2,	// (0x000374d5) volume_small2_pane_g6

0x13eb,	// (0x000374de) volume_small2_pane_g7

0x13f4,	// (0x000374e7) volume_small2_pane_g8

0x13fd,	// (0x000374f0) volume_small2_pane_g9

0x1406,	// (0x000374f9) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x00045cff) volume_small2_pane_g

0x59c0,	// (0x0003bab3) fep_vkb_top_text_pane_g1_ParamLimits

0xcdcd,	// (0x00042ec0) fep_vkb_top_text_pane_t1_ParamLimits

0x5c73,	// (0x0003bd66) popup_preview_fixed_window_g3_ParamLimits

0x5c73,	// (0x0003bd66) popup_preview_fixed_window_g3

0xadc1,	// (0x00040eb4) popup_toolbar_trans_pane

0xc781,	// (0x00042874) aid_height_set_list_ParamLimits

0x43ad,	// (0x0003a4a0) aid_size_parent_ParamLimits

0x2a9a,	// (0x00038b8d) list_highlight_pane_cp2_ParamLimits

0x2639,	// (0x0003872c) set_content_pane_g1_ParamLimits

0xc95b,	// (0x00042a4e) list_single_image_pane_ParamLimits

0xc95b,	// (0x00042a4e) list_single_image_pane

0xcf31,	// (0x00043024) aid_size_cell_image_ParamLimits

0xcf31,	// (0x00043024) aid_size_cell_image

0xcf3e,	// (0x00043031) grid_single_image_pane_ParamLimits

0xcf3e,	// (0x00043031) grid_single_image_pane

0xbf7c,	// (0x0004206f) list_single_image_pane_g1_ParamLimits

0xbf7c,	// (0x0004206f) list_single_image_pane_g1

0xbf88,	// (0x0004207b) list_single_image_pane_g2_ParamLimits

0xbf88,	// (0x0004207b) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x00045d14) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x00045d14) list_single_image_pane_g

0x618c,	// (0x0003c27f) list_single_image_pane_t1_ParamLimits

0x618c,	// (0x0003c27f) list_single_image_pane_t1

0xcf4c,	// (0x0004303f) cell_image_list_pane_ParamLimits

0xcf4c,	// (0x0004303f) cell_image_list_pane

0xcf62,	// (0x00043055) cell_image_list_pane_g1

0xcf6b,	// (0x0004305e) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00045d19) cell_image_list_pane_g

0x61cc,	// (0x0003c2bf) aid_size_cell_tb_trans_pane

0xbf6e,	// (0x00042061) bg_tb_trans_pane

0x61de,	// (0x0003c2d1) grid_tb_trans_pane

0x2fd0,	// (0x000390c3) bg_tb_trans_pane_g1

0x2fe0,	// (0x000390d3) bg_tb_trans_pane_g2

0x2fd8,	// (0x000390cb) bg_tb_trans_pane_g3

0x2ff0,	// (0x000390e3) bg_tb_trans_pane_g4

0x2fe8,	// (0x000390db) bg_tb_trans_pane_g5

0x3010,	// (0x00039103) bg_tb_trans_pane_g6

0x3008,	// (0x000390fb) bg_tb_trans_pane_g7

0x2ff8,	// (0x000390eb) bg_tb_trans_pane_g8

0x3000,	// (0x000390f3) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00045d1e) bg_tb_trans_pane_g

0x61f2,	// (0x0003c2e5) cell_toolbar_trans_pane_ParamLimits

0x61f2,	// (0x0003c2e5) cell_toolbar_trans_pane

0x55e5,	// (0x0003b6d8) cell_toolbar_trans_pane_g1

0xcb9d,	// (0x00042c90) list_form2_midp_pane_t1

0xcbab,	// (0x00042c9e) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x00045bbb) list_form2_midp_pane_t

0x5239,	// (0x0003b32c) scroll_pane_cp51_ParamLimits

0x5400,	// (0x0003b4f3) form2_midp_wait_pane_g1

0x5409,	// (0x0003b4fc) form2_midp_wait_pane_g2

0x5412,	// (0x0003b505) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x00045bd0) form2_midp_wait_pane_g

0xb92c,	// (0x00041a1f) list_highlight_pane_cp21_ParamLimits

0x544b,	// (0x0003b53e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x545a,	// (0x0003b54d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4596,	// (0x0003a689) list_single_2graphic_im_pane_ParamLimits

0x4596,	// (0x0003a689) list_single_2graphic_im_pane

0xcf74,	// (0x00043067) list_single_2graphic_im_pane_g1_ParamLimits

0xcf74,	// (0x00043067) list_single_2graphic_im_pane_g1

0xcf85,	// (0x00043078) list_single_2graphic_im_pane_g2_ParamLimits

0xcf85,	// (0x00043078) list_single_2graphic_im_pane_g2

0xcf91,	// (0x00043084) list_single_2graphic_im_pane_g3_ParamLimits

0xcf91,	// (0x00043084) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x00045d31) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x00045d31) list_single_2graphic_im_pane_g

0xcfa5,	// (0x00043098) list_single_2graphic_im_pane_t1_ParamLimits

0xcfa5,	// (0x00043098) list_single_2graphic_im_pane_t1

0x5c7f,	// (0x0003bd72) list_single_graphic_2heading_pane_fp_ParamLimits

0x5c7f,	// (0x0003bd72) list_single_graphic_2heading_pane_fp

0xd934,	// (0x00043a27) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd934,	// (0x00043a27) list_single_graphic_2heading_pane_fp_g1

0x5c98,	// (0x0003bd8b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5c98,	// (0x0003bd8b) list_single_graphic_2heading_pane_fp_g2

0xd8fd,	// (0x000439f0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd8fd,	// (0x000439f0) list_single_graphic_2heading_pane_fp_g3

0xd909,	// (0x000439fc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd909,	// (0x000439fc) list_single_graphic_2heading_pane_fp_g4

0x5ca4,	// (0x0003bd97) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5ca4,	// (0x0003bd97) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00045c58) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00045c58) list_single_graphic_2heading_pane_fp_g

0xdad7,	// (0x00043bca) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdad7,	// (0x00043bca) list_single_graphic_2heading_pane_fp_t1

0xd96c,	// (0x00043a5f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd96c,	// (0x00043a5f) list_single_graphic_2heading_pane_fp_t2

0xdaed,	// (0x00043be0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdaed,	// (0x00043be0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00045d3a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00045d3a) list_single_graphic_2heading_pane_fp_t

0x5676,	// (0x0003b769) fep_hwr_write_pane_g5_ParamLimits

0x5676,	// (0x0003b769) fep_hwr_write_pane_g5

0x5682,	// (0x0003b775) fep_hwr_write_pane_g6_ParamLimits

0x5682,	// (0x0003b775) fep_hwr_write_pane_g6

0x5f54,	// (0x0003c047) eswt_shell_pane_ParamLimits

0x3044,	// (0x00039137) bg_popup_window_pane_cp18_ParamLimits

0x42f3,	// (0x0003a3e6) heading_pane_cp70

0x607e,	// (0x0003c171) popup_eswt_tasktip_window_t1_ParamLimits

0xc141,	// (0x00042234) aid_touch_tab_arrow_left

0xc157,	// (0x0004224a) aid_touch_tab_arrow_right

0x979a,	// (0x0003f88d) title_pane_g3_ParamLimits

0x979a,	// (0x0003f88d) title_pane_g3

0xbf2d,	// (0x00042020) set_value_pane_g1

0xadc1,	// (0x00040eb4) popup_toolbar_trans_pane_ParamLimits

0x61cc,	// (0x0003c2bf) aid_size_cell_tb_trans_pane_ParamLimits

0xbf6e,	// (0x00042061) bg_tb_trans_pane_ParamLimits

0x61de,	// (0x0003c2d1) grid_tb_trans_pane_ParamLimits

0xba5f,	// (0x00041b52) cont_note_pane_ParamLimits

0xba5f,	// (0x00041b52) cont_note_pane

0xbce9,	// (0x00041ddc) cont_snote2_single_text_pane_ParamLimits

0xbce9,	// (0x00041ddc) cont_snote2_single_text_pane

0xbce9,	// (0x00041ddc) cont_snote2_single_graphic_pane_ParamLimits

0xbce9,	// (0x00041ddc) cont_snote2_single_graphic_pane

0x3636,	// (0x00039729) cont_note_wait_pane_ParamLimits

0x3636,	// (0x00039729) cont_note_wait_pane

0x3636,	// (0x00039729) cont_note_image_pane_ParamLimits

0x3636,	// (0x00039729) cont_note_image_pane

0x6286,	// (0x0003c379) popup_note2_window_g1_ParamLimits

0x6286,	// (0x0003c379) popup_note2_window_g1

0x62b7,	// (0x0003c3aa) popup_note2_window_t1_ParamLimits

0x62b7,	// (0x0003c3aa) popup_note2_window_t1

0x62fc,	// (0x0003c3ef) popup_note2_window_t2_ParamLimits

0x62fc,	// (0x0003c3ef) popup_note2_window_t2

0x6341,	// (0x0003c434) popup_note2_window_t3_ParamLimits

0x6341,	// (0x0003c434) popup_note2_window_t3

0x6386,	// (0x0003c479) popup_note2_window_t4_ParamLimits

0x6386,	// (0x0003c479) popup_note2_window_t4

0xbae3,	// (0x00041bd6) popup_note2_window_t5_ParamLimits

0xbae3,	// (0x00041bd6) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00045d46) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00045d46) popup_note2_window_t

0x63b5,	// (0x0003c4a8) popup_note2_image_window_g1_ParamLimits

0x63b5,	// (0x0003c4a8) popup_note2_image_window_g1

0x63c1,	// (0x0003c4b4) popup_note2_image_window_g2_ParamLimits

0x63c1,	// (0x0003c4b4) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x00045d51) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x00045d51) popup_note2_image_window_g

0x63d3,	// (0x0003c4c6) popup_note2_image_window_t1_ParamLimits

0x63d3,	// (0x0003c4c6) popup_note2_image_window_t1

0x63eb,	// (0x0003c4de) popup_note2_image_window_t2_ParamLimits

0x63eb,	// (0x0003c4de) popup_note2_image_window_t2

0x6403,	// (0x0003c4f6) popup_note2_image_window_t3_ParamLimits

0x6403,	// (0x0003c4f6) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x00045d56) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x00045d56) popup_note2_image_window_t

0x3644,	// (0x00039737) popup_note2_wait_window_g1_ParamLimits

0x3644,	// (0x00039737) popup_note2_wait_window_g1

0x641f,	// (0x0003c512) popup_note2_wait_window_g2_ParamLimits

0x641f,	// (0x0003c512) popup_note2_wait_window_g2

0x365c,	// (0x0003974f) popup_note2_wait_window_g3_ParamLimits

0x365c,	// (0x0003974f) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x00045d5d) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x00045d5d) popup_note2_wait_window_g

0x642b,	// (0x0003c51e) popup_note2_wait_window_t1_ParamLimits

0x642b,	// (0x0003c51e) popup_note2_wait_window_t1

0x6449,	// (0x0003c53c) popup_note2_wait_window_t2_ParamLimits

0x6449,	// (0x0003c53c) popup_note2_wait_window_t2

0x6467,	// (0x0003c55a) popup_note2_wait_window_t3_ParamLimits

0x6467,	// (0x0003c55a) popup_note2_wait_window_t3

0x6479,	// (0x0003c56c) popup_note2_wait_window_t4_ParamLimits

0x6479,	// (0x0003c56c) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x00045d64) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x00045d64) popup_note2_wait_window_t

0x648b,	// (0x0003c57e) wait_bar2_pane_ParamLimits

0x648b,	// (0x0003c57e) wait_bar2_pane

0x64a3,	// (0x0003c596) popup_snote2_single_text_window_g1_ParamLimits

0x64a3,	// (0x0003c596) popup_snote2_single_text_window_g1

0x64cb,	// (0x0003c5be) popup_snote2_single_text_window_t1_ParamLimits

0x64cb,	// (0x0003c5be) popup_snote2_single_text_window_t1

0x6517,	// (0x0003c60a) popup_snote2_single_text_window_t2_ParamLimits

0x6517,	// (0x0003c60a) popup_snote2_single_text_window_t2

0x6563,	// (0x0003c656) popup_snote2_single_text_window_t3_ParamLimits

0x6563,	// (0x0003c656) popup_snote2_single_text_window_t3

0x65a4,	// (0x0003c697) popup_snote2_single_text_window_t4_ParamLimits

0x65a4,	// (0x0003c697) popup_snote2_single_text_window_t4

0x65da,	// (0x0003c6cd) popup_snote2_single_text_window_t5_ParamLimits

0x65da,	// (0x0003c6cd) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x00045d6d) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x00045d6d) popup_snote2_single_text_window_t

0x6605,	// (0x0003c6f8) popup_snote2_single_graphic_window_g1_ParamLimits

0x6605,	// (0x0003c6f8) popup_snote2_single_graphic_window_g1

0x662d,	// (0x0003c720) popup_snote2_single_graphic_window_g2_ParamLimits

0x662d,	// (0x0003c720) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x00045d78) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x00045d78) popup_snote2_single_graphic_window_g

0x6655,	// (0x0003c748) popup_snote2_single_graphic_window_t1_ParamLimits

0x6655,	// (0x0003c748) popup_snote2_single_graphic_window_t1

0x66a1,	// (0x0003c794) popup_snote2_single_graphic_window_t2_ParamLimits

0x66a1,	// (0x0003c794) popup_snote2_single_graphic_window_t2

0x6563,	// (0x0003c656) popup_snote2_single_graphic_window_t3_ParamLimits

0x6563,	// (0x0003c656) popup_snote2_single_graphic_window_t3

0x65a4,	// (0x0003c697) popup_snote2_single_graphic_window_t4_ParamLimits

0x65a4,	// (0x0003c697) popup_snote2_single_graphic_window_t4

0x65da,	// (0x0003c6cd) popup_snote2_single_graphic_window_t5_ParamLimits

0x65da,	// (0x0003c6cd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x00045d7d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x00045d7d) popup_snote2_single_graphic_window_t

0x50e9,	// (0x0003b1dc) clock_nsta_pane_cp2_t1

0x50e9,	// (0x0003b1dc) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00045b91) clock_nsta_pane_cp2_t

0xd41b,	// (0x0004350e) form_field_data_wide_pane_g1_ParamLimits

0xbf7c,	// (0x0004206f) form_field_data_wide_pane_g2_ParamLimits

0xbf7c,	// (0x0004206f) form_field_data_wide_pane_g2

0xbf88,	// (0x0004207b) form_field_data_wide_pane_g3_ParamLimits

0xbf88,	// (0x0004207b) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00045749) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00045749) form_field_data_wide_pane_g

0xcaa4,	// (0x00042b97) grid_touch_3_pane_ParamLimits

0xcaa4,	// (0x00042b97) grid_touch_3_pane

0xcfd6,	// (0x000430c9) cell_touch_3_pane_ParamLimits

0xcfd6,	// (0x000430c9) cell_touch_3_pane

0x55e5,	// (0x0003b6d8) cell_touch_3_pane_g1

0x55e5,	// (0x0003b6d8) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00045c16) cell_touch_3_pane_g

0xbb3b,	// (0x00041c2e) cont_query_data_pane

0xbb43,	// (0x00041c36) cont_query_data_pane_cp1

0x6720,	// (0x0003c813) button_value_adjust_pane_cp7

0x6728,	// (0x0003c81b) query_popup_pane_cp3

0xf4b4,	// (0x000455a7) bg_popup_sub_pane_cp22_ParamLimits

0xf4ca,	// (0x000455bd) navi_navi_volume_pane_cp2

0xf4e5,	// (0x000455d8) popup_side_volume_key_window_g2

0xf4f4,	// (0x000455e7) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000457df) popup_side_volume_key_window_g

0xf511,	// (0x00045604) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000457e6) popup_side_volume_key_window_t

0x24f4,	// (0x000385e7) popup_side_volume_key_window_ParamLimits

0x9c64,	// (0x0003fd57) list_double_graphic_pane_g4_ParamLimits

0x9c64,	// (0x0003fd57) list_double_graphic_pane_g4

0xc92f,	// (0x00042a22) list_single_2heading_msg_pane_ParamLimits

0xc92f,	// (0x00042a22) list_single_2heading_msg_pane

0xb0e5,	// (0x000411d8) list_single_2heading_msg_pane_g1_ParamLimits

0xb0e5,	// (0x000411d8) list_single_2heading_msg_pane_g1

0xb0f1,	// (0x000411e4) list_single_2heading_msg_pane_g2_ParamLimits

0xb0f1,	// (0x000411e4) list_single_2heading_msg_pane_g2

0xb104,	// (0x000411f7) list_single_2heading_msg_pane_g3_ParamLimits

0xb104,	// (0x000411f7) list_single_2heading_msg_pane_g3

0xb110,	// (0x00041203) list_single_2heading_msg_pane_g4_ParamLimits

0xb110,	// (0x00041203) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x00045d88) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x00045d88) list_single_2heading_msg_pane_g

0xb128,	// (0x0004121b) list_single_2heading_msg_pane_t1_ParamLimits

0xb128,	// (0x0004121b) list_single_2heading_msg_pane_t1

0xb150,	// (0x00041243) list_single_2heading_msg_pane_t2_ParamLimits

0xb150,	// (0x00041243) list_single_2heading_msg_pane_t2

0xb1bb,	// (0x000412ae) list_single_2heading_msg_pane_t3_ParamLimits

0xb1bb,	// (0x000412ae) list_single_2heading_msg_pane_t3

0xdb0d,	// (0x00043c00) list_single_2heading_msg_pane_t4_ParamLimits

0xdb0d,	// (0x00043c00) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x00045d91) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x00045d91) list_single_2heading_msg_pane_t

0xb8da,	// (0x000419cd) title_pane_g4_ParamLimits

0xb8da,	// (0x000419cd) title_pane_g4

0xf07a,	// (0x0004516d) title_pane_stacon_g3_ParamLimits

0xf07a,	// (0x0004516d) title_pane_stacon_g3

0x6249,	// (0x0003c33c) list_single_2graphic_im_pane_g4_ParamLimits

0x6249,	// (0x0003c33c) list_single_2graphic_im_pane_g4

0x40a6,	// (0x0003a199) popup_side_volume_key_window_cp

0x48d4,	// (0x0003a9c7) main_idle_act2_pane_t1

0x0a4b,	// (0x00036b3e) toolbar_button_pane_g10

0x9b17,	// (0x0003fc0a) popup_toolbar_window_cp1

0x50da,	// (0x0003b1cd) clock_nsta_pane_cp_t1

0x50da,	// (0x0003b1cd) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00045b8c) clock_nsta_pane_cp_t

0xf4ca,	// (0x000455bd) navi_navi_volume_pane_cp2_ParamLimits

0xf4d9,	// (0x000455cc) popup_side_volume_key_window_g1_ParamLimits

0xf4e5,	// (0x000455d8) popup_side_volume_key_window_g2_ParamLimits

0xf4f4,	// (0x000455e7) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000457df) popup_side_volume_key_window_g_ParamLimits

0x0fbf,	// (0x000370b2) fep_hwr_aid_pane

0x1068,	// (0x0003715b) bg_fep_hwr_top_pane_g4_ParamLimits

0x5646,	// (0x0003b739) fep_hwr_top_pane_g1_ParamLimits

0x5658,	// (0x0003b74b) fep_hwr_top_pane_g2_ParamLimits

0x1088,	// (0x0003717b) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x00045be1) fep_hwr_top_pane_g_ParamLimits

0x109d,	// (0x00037190) fep_hwr_top_text_pane_ParamLimits

0x3e5b,	// (0x00039f4e) aid_touch_tab_arrow_arrow_2

0x3e64,	// (0x00039f57) aid_touch_tab_arrow_left_2

0x0fd3,	// (0x000370c6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x100a,	// (0x000370fd) fep_hwr_prediction_pane

0x57ba,	// (0x0003b8ad) fep_vkb_prediction_pane

0xcdad,	// (0x00042ea0) fep_vkb_side_pane_g3_ParamLimits

0xcdad,	// (0x00042ea0) fep_vkb_side_pane_g3

0x122c,	// (0x0003731f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x129d,	// (0x00037390) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x12aa,	// (0x0003739d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x00045c90) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x14d4,	// (0x000375c7) fep_hwr_prediction_pane_g1

0x14de,	// (0x000375d1) fep_hwr_prediction_pane_g2

0x14e6,	// (0x000375d9) fep_hwr_prediction_pane_g3

0x14ee,	// (0x000375e1) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x00045d9a) fep_hwr_prediction_pane_g

0x674f,	// (0x0003c842) fep_vkb_prediction_pane_g1

0x6759,	// (0x0003c84c) fep_vkb_prediction_pane_g2

0x6761,	// (0x0003c854) fep_vkb_prediction_pane_g3

0x6769,	// (0x0003c85c) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x00045da3) fep_vkb_prediction_pane_g

0x0d9c,	// (0x00036e8f) slider_set_pane_g3

0x0db0,	// (0x00036ea3) slider_set_pane_g4

0x0dc8,	// (0x00036ebb) slider_set_pane_g5

0x0d9c,	// (0x00036e8f) slider_set_pane_g6

0x0dde,	// (0x00036ed1) slider_set_pane_g7

0x452c,	// (0x0003a61f) slider_form_pane_g3

0x4535,	// (0x0003a628) slider_form_pane_g4

0x453d,	// (0x0003a630) slider_form_pane_g5

0x452c,	// (0x0003a61f) slider_form_pane_g6

0xc8ea,	// (0x000429dd) slider_form_pane_g7

0x4b98,	// (0x0003ac8b) slider_set_pane_vc_g3

0x4ba1,	// (0x0003ac94) slider_set_pane_vc_g4

0x4baa,	// (0x0003ac9d) slider_set_pane_vc_g5

0x4b98,	// (0x0003ac8b) slider_set_pane_vc_g6

0x4bb3,	// (0x0003aca6) slider_set_pane_vc_g7

0x4d89,	// (0x0003ae7c) slider_form_pane_vc_g1

0x4d92,	// (0x0003ae85) slider_form_pane_vc_g2

0x4d9b,	// (0x0003ae8e) slider_form_pane_vc_g3

0x4d89,	// (0x0003ae7c) slider_form_pane_vc_g4

0x4da4,	// (0x0003ae97) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00045b5e) slider_form_pane_vc_g

0xec7a,	// (0x00044d6d) main_idle_act3_pane

0x6771,	// (0x0003c864) ai3_links_pane

0xd022,	// (0x00043115) popup_ai3_data_window_ParamLimits

0xd022,	// (0x00043115) popup_ai3_data_window

0xb8bc,	// (0x000419af) grid_ai3_links_pane

0xd040,	// (0x00043133) cell_ai3_links_pane_ParamLimits

0xd040,	// (0x00043133) cell_ai3_links_pane

0x67b2,	// (0x0003c8a5) bg_popup_sub_pane_cp11

0x67bf,	// (0x0003c8b2) cell_ai3_links_pane_g1

0xb8bc,	// (0x000419af) bg_popup_sub_pane_cp12

0x67e4,	// (0x0003c8d7) heading_ai3_data_pane

0x67ec,	// (0x0003c8df) list_ai3_gene_pane

0x67f8,	// (0x0003c8eb) popup_ai3_data_window_g1

0x6800,	// (0x0003c8f3) heading_ai3_data_pane_g1

0x6808,	// (0x0003c8fb) heading_ai3_data_pane_t1

0x6816,	// (0x0003c909) list_double_ai3_gene_pane_ParamLimits

0x6816,	// (0x0003c909) list_double_ai3_gene_pane

0x6823,	// (0x0003c916) list_single_ai3_gene_pane_ParamLimits

0x6823,	// (0x0003c916) list_single_ai3_gene_pane

0x55aa,	// (0x0003b69d) list_highlight_pane_cp7_ParamLimits

0x55aa,	// (0x0003b69d) list_highlight_pane_cp7

0x6830,	// (0x0003c923) list_single_a13_gene_pane_t1_ParamLimits

0x6830,	// (0x0003c923) list_single_a13_gene_pane_t1

0x6847,	// (0x0003c93a) list_single_ai3_gene_pane_g1

0x6850,	// (0x0003c943) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x00045dac) list_single_ai3_gene_pane_g

0x6858,	// (0x0003c94b) list_double_ai3_gene_pane_g1_ParamLimits

0x6858,	// (0x0003c94b) list_double_ai3_gene_pane_g1

0x6864,	// (0x0003c957) list_double_ai3_gene_pane_t1_ParamLimits

0x6864,	// (0x0003c957) list_double_ai3_gene_pane_t1

0x6880,	// (0x0003c973) list_double_ai3_gene_pane_t2_ParamLimits

0x6880,	// (0x0003c973) list_double_ai3_gene_pane_t2

0x6895,	// (0x0003c988) list_double_ai3_gene_pane_t3_ParamLimits

0x6895,	// (0x0003c988) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x00045db1) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x00045db1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdb03,	// (0x00043bf6) aid_size_min_col_2

0xd00c,	// (0x000430ff) aid_size_min_msg_ParamLimits

0xd00c,	// (0x000430ff) aid_size_min_msg

0xcdc1,	// (0x00042eb4) fep_vkb_top_text_pane_g2_ParamLimits

0xcdc1,	// (0x00042eb4) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00045c11) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00045c11) fep_vkb_top_text_pane_g

0xec7a,	// (0x00044d6d) main_hc_apps_shell_pane

0x68b2,	// (0x0003c9a5) grid_hc_apps_pane_ParamLimits

0x68b2,	// (0x0003c9a5) grid_hc_apps_pane

0x68c4,	// (0x0003c9b7) list_hc_apps_pane

0x68cc,	// (0x0003c9bf) scroll_pane_cp37_ParamLimits

0x68cc,	// (0x0003c9bf) scroll_pane_cp37

0xd05a,	// (0x0004314d) cell_hc_apps_pane_ParamLimits

0xd05a,	// (0x0004314d) cell_hc_apps_pane

0xd122,	// (0x00043215) cell_hc_apps_pane_g1_ParamLimits

0xd122,	// (0x00043215) cell_hc_apps_pane_g1

0x69ba,	// (0x0003caad) cell_hc_apps_pane_g2_ParamLimits

0x69ba,	// (0x0003caad) cell_hc_apps_pane_g2

0x69d6,	// (0x0003cac9) cell_hc_apps_pane_g3_ParamLimits

0x69d6,	// (0x0003cac9) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x00045db8) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x00045db8) cell_hc_apps_pane_g

0xd14e,	// (0x00043241) cell_hc_apps_pane_t1_ParamLimits

0xd14e,	// (0x00043241) cell_hc_apps_pane_t1

0xba5f,	// (0x00041b52) grid_highlight_pane_cp10_ParamLimits

0xba5f,	// (0x00041b52) grid_highlight_pane_cp10

0xd18e,	// (0x00043281) list_single_hc_apps_pane_ParamLimits

0xd18e,	// (0x00043281) list_single_hc_apps_pane

0xd1c8,	// (0x000432bb) list_single_hc_apps_pane_g1

0xb229,	// (0x0004131c) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x00045dbf) list_single_hc_apps_pane_g

0xb242,	// (0x00041335) list_single_hc_apps_pane_g2_copy1

0xb25e,	// (0x00041351) list_single_hc_apps_pane_t1

0xb92c,	// (0x00041a1f) bg_set_opt_pane_cp_ParamLimits

0xed9d,	// (0x00044e90) setting_slider_pane_t1_ParamLimits

0xedb6,	// (0x00044ea9) setting_slider_pane_t2_ParamLimits

0xedd0,	// (0x00044ec3) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004562c) setting_slider_pane_t_ParamLimits

0xede8,	// (0x00044edb) slider_set_pane_ParamLimits

0x02ca,	// (0x000363bd) control_pane_g5_ParamLimits

0x02ca,	// (0x000363bd) control_pane_g5

0x435f,	// (0x0003a452) slider_set_pane_g1_ParamLimits

0x0d90,	// (0x00036e83) slider_set_pane_g2_ParamLimits

0x0d9c,	// (0x00036e8f) slider_set_pane_g3_ParamLimits

0x0db0,	// (0x00036ea3) slider_set_pane_g4_ParamLimits

0x0dc8,	// (0x00036ebb) slider_set_pane_g5_ParamLimits

0x0d9c,	// (0x00036e8f) slider_set_pane_g6_ParamLimits

0x0dde,	// (0x00036ed1) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00045a2d) slider_set_pane_g_ParamLimits

0x25e4,	// (0x000386d7) navi_icon_text_pane_ParamLimits

0xc108,	// (0x000421fb) aid_fill_nsta_2_ParamLimits

0xc141,	// (0x00042234) aid_touch_tab_arrow_left_ParamLimits

0xc157,	// (0x0004224a) aid_touch_tab_arrow_right_ParamLimits

0xc1f2,	// (0x000422e5) clock_nsta_pane_ParamLimits

0xc668,	// (0x0004275b) navi_icon_pane_g1_ParamLimits

0xc674,	// (0x00042767) navi_text_pane_t1_ParamLimits

0xcb7f,	// (0x00042c72) navi_icon_text_pane_g1_ParamLimits

0xcb8b,	// (0x00042c7e) navi_icon_text_pane_t1_ParamLimits

0xd1c8,	// (0x000432bb) list_single_hc_apps_pane_g1_ParamLimits

0xb229,	// (0x0004131c) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x00045dbf) list_single_hc_apps_pane_g_ParamLimits

0xb242,	// (0x00041335) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb25e,	// (0x00041351) list_single_hc_apps_pane_t1_ParamLimits

0x9689,	// (0x0003f77c) popup_toolbar2_fixed_window_ParamLimits

0x9689,	// (0x0003f77c) popup_toolbar2_fixed_window

0xadb7,	// (0x00040eaa) popup_toolbar2_float_window

0xb8bc,	// (0x000419af) bg_popup_sub_pane_cp27

0x6a90,	// (0x0003cb83) grid_toolbar2_float_pane

0xb8bc,	// (0x000419af) bg_popup_sub_pane_cp26

0x6a90,	// (0x0003cb83) grid_toolbar2_fixed_pane

0xd1e1,	// (0x000432d4) cell_toolbar2_fixed_pane_ParamLimits

0xd1e1,	// (0x000432d4) cell_toolbar2_fixed_pane

0xd1fb,	// (0x000432ee) cell_toolbar2_fixed_pane_g1

0x6ab1,	// (0x0003cba4) toolbar2_fixed_button_pane

0x2fd0,	// (0x000390c3) toolbar2_fixed_button_pane_g1

0x2fe0,	// (0x000390d3) toolbar2_fixed_button_pane_g2

0x2fd8,	// (0x000390cb) toolbar2_fixed_button_pane_g3

0x2ff0,	// (0x000390e3) toolbar2_fixed_button_pane_g4

0x2fe8,	// (0x000390db) toolbar2_fixed_button_pane_g5

0x2ff8,	// (0x000390eb) toolbar2_fixed_button_pane_g6

0x3000,	// (0x000390f3) toolbar2_fixed_button_pane_g7

0x3010,	// (0x00039103) toolbar2_fixed_button_pane_g8

0x3008,	// (0x000390fb) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0004592f) toolbar2_fixed_button_pane_g

0x6ab9,	// (0x0003cbac) cell_toolbar2_float_pane_ParamLimits

0x6ab9,	// (0x0003cbac) cell_toolbar2_float_pane

0x6aca,	// (0x0003cbbd) cell_toolbar2_float_pane_g1

0x6ab1,	// (0x0003cba4) toolbar2_fixed_button_pane_cp

0xcca9,	// (0x00042d9c) fep_vkb_accented_list_pane_ParamLimits

0xcca9,	// (0x00042d9c) fep_vkb_accented_list_pane

0x120c,	// (0x000372ff) bg_popup_fep_shadow_pane_g9

0x2773,	// (0x00038866) bg_popup_fep_shadow_pane_cp3

0xc091,	// (0x00042184) list_accented_list_pane

0x6ad3,	// (0x0003cbc6) list_single_accented_list_pane_ParamLimits

0x6ad3,	// (0x0003cbc6) list_single_accented_list_pane

0x2773,	// (0x00038866) list_highlight_pane_cp10

0x6ae4,	// (0x0003cbd7) list_single_accented_list_pane_t1

0xacd5,	// (0x00040dc8) popup_slider_window_ParamLimits

0xacd5,	// (0x00040dc8) popup_slider_window

0x6730,	// (0x0003c823) aid_indentation_list_msg

0xdb66,	// (0x00043c59) bg_popup_window_pane_cp19

0x6c20,	// (0x0003cd13) popup_slider_window_g1

0x6c3c,	// (0x0003cd2f) popup_slider_window_g2

0x6c58,	// (0x0003cd4b) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x00045dc4) popup_slider_window_g

0x6cbe,	// (0x0003cdb1) popup_slider_window_t1

0x6d32,	// (0x0003ce25) small_volume_slider_vertical_pane

0x55e5,	// (0x0003b6d8) small_volume_slider_vertical_pane_g1

0x55e5,	// (0x0003b6d8) small_volume_slider_vertical_pane_g2

0x6d4e,	// (0x0003ce41) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00045dd6) small_volume_slider_vertical_pane_g

0x95f3,	// (0x0003f6e6) area_side_right_pane_ParamLimits

0x95f3,	// (0x0003f6e6) area_side_right_pane

0xb28c,	// (0x0004137f) aid_size_side_button_ParamLimits

0xb28c,	// (0x0004137f) aid_size_side_button

0xb2a5,	// (0x00041398) grid_sctrl_middle_pane_ParamLimits

0xb2a5,	// (0x00041398) grid_sctrl_middle_pane

0x158c,	// (0x0003767f) sctrl_sk_bottom_pane

0x159d,	// (0x00037690) sctrl_sk_top_pane

0x15af,	// (0x000376a2) aid_touch_sctrl_top

0x15bc,	// (0x000376af) bg_sctrl_sk_pane_ParamLimits

0x15bc,	// (0x000376af) bg_sctrl_sk_pane

0x15ca,	// (0x000376bd) sctrl_sk_top_pane_g1

0x15d7,	// (0x000376ca) sctrl_sk_top_pane_t1

0x15af,	// (0x000376a2) aid_touch_sctrl_bottom

0x15bc,	// (0x000376af) bg_sctrl_sk_pane_cp_ParamLimits

0x15bc,	// (0x000376af) bg_sctrl_sk_pane_cp

0x15f2,	// (0x000376e5) sctrl_sk_bottom_pane_g1

0x15d7,	// (0x000376ca) sctrl_sk_bottom_pane_t1

0xb2bf,	// (0x000413b2) cell_sctrl_middle_pane_ParamLimits

0xb2bf,	// (0x000413b2) cell_sctrl_middle_pane

0xb2d2,	// (0x000413c5) aid_touch_sctrl_middle_ParamLimits

0xb2d2,	// (0x000413c5) aid_touch_sctrl_middle

0xb2df,	// (0x000413d2) bg_sctrl_middle_pane_ParamLimits

0xb2df,	// (0x000413d2) bg_sctrl_middle_pane

0x1c75,	// (0x00037d68) cell_sctrl_middle_pane_g1_ParamLimits

0x1c75,	// (0x00037d68) cell_sctrl_middle_pane_g1

0xb2ed,	// (0x000413e0) cell_sctrl_middle_pane_g2_ParamLimits

0xb2ed,	// (0x000413e0) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x00045de2) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x00045de2) cell_sctrl_middle_pane_g

0x2fd0,	// (0x000390c3) bg_sctrl_middle_pane_g1

0x2fd8,	// (0x000390cb) bg_sctrl_middle_pane_g2

0x2fe0,	// (0x000390d3) bg_sctrl_middle_pane_g3

0x2fe8,	// (0x000390db) bg_sctrl_middle_pane_g4

0x2ff0,	// (0x000390e3) bg_sctrl_middle_pane_g5

0x2ff8,	// (0x000390eb) bg_sctrl_middle_pane_g6

0x3000,	// (0x000390f3) bg_sctrl_middle_pane_g7

0x3008,	// (0x000390fb) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00045de7) bg_sctrl_middle_pane_g

0x3010,	// (0x00039103) bg_sctrl_middle_pane_g8_copy1

0x2fd0,	// (0x000390c3) bg_sctrl_sk_pane_g1

0x2fe0,	// (0x000390d3) bg_sctrl_sk_pane_g2

0x2fd8,	// (0x000390cb) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0004592f) bg_sctrl_sk_pane_g

0xbea7,	// (0x00041f9a) aid_size_touch_scroll_bar

0x2ff0,	// (0x000390e3) bg_sctrl_sk_pane_g4

0x2fe8,	// (0x000390db) bg_sctrl_sk_pane_g5

0x2ff8,	// (0x000390eb) bg_sctrl_sk_pane_g6

0x3000,	// (0x000390f3) bg_sctrl_sk_pane_g7

0x3010,	// (0x00039103) bg_sctrl_sk_pane_g8

0x3008,	// (0x000390fb) bg_sctrl_sk_pane_g9

0x0498,	// (0x0003658b) popup_fep_china_hwr2_fs_candidate_window

0xa787,	// (0x0004087a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa787,	// (0x0004087a) popup_fep_china_hwr2_fs_control_window

0x122c,	// (0x0003731f) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00045ddd) sctrl_sk_top_pane_g

0xdc1e,	// (0x00043d11) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdc1e,	// (0x00043d11) aid_fep_china_hwr2_fs_cell

0xdc34,	// (0x00043d27) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdc34,	// (0x00043d27) bg_popup_fep_shadow_pane_cp4

0xdc4b,	// (0x00043d3e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdc4b,	// (0x00043d3e) bg_popup_fep_shadow_pane_cp5

0xdc5d,	// (0x00043d50) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdc5d,	// (0x00043d50) popup_fep_china_hwr2_fs_control_bar_grid

0xdc71,	// (0x00043d64) popup_fep_china_hwr2_fs_control_funtion_grid

0x6dad,	// (0x0003cea0) aid_fep_china_hwr2_fs_candi_cell

0xb8bc,	// (0x000419af) bg_popup_fep_shadow_pane_cp6

0x6db7,	// (0x0003ceaa) popup_fep_china_hwr2_fs_candidate_grid

0xdc79,	// (0x00043d6c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdc79,	// (0x00043d6c) cell_fep_china_hwr2_fs_funtion_grid

0x55e5,	// (0x0003b6d8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6dd9,	// (0x0003cecc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6dd9,	// (0x0003cecc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6de7,	// (0x0003ceda) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6de7,	// (0x0003ceda) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00045df8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00045df8) cell_fep_china_hwr2_fs_funtion_grid_g

0xdc91,	// (0x00043d84) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdc91,	// (0x00043d84) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdca6,	// (0x00043d99) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdca6,	// (0x00043d99) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00045dfd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00045dfd) cell_fep_china_hwr2_fs_funtion_grid_t

0x6e2e,	// (0x0003cf21) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6e36,	// (0x0003cf29) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6e3e,	// (0x0003cf31) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x00045e02) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6e46,	// (0x0003cf39) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6e46,	// (0x0003cf39) cell_fep_china_hwr2_fs_candidate_grid

0x6e65,	// (0x0003cf58) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6e6d,	// (0x0003cf60) popup_fep_china_hwr2_fs_candidate_grid_g21

0x55e5,	// (0x0003b6d8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x55e5,	// (0x0003b6d8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00045c16) cell_fep_china_hwr2_fs_candidate_grid_g

0x6e75,	// (0x0003cf68) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2bb8,	// (0x00038cab) clock_nsta_pane_cp_24_ParamLimits

0x2bb8,	// (0x00038cab) clock_nsta_pane_cp_24

0x2c38,	// (0x00038d2b) indicator_nsta_pane_cp_24_ParamLimits

0x2c38,	// (0x00038d2b) indicator_nsta_pane_cp_24

0x3cb9,	// (0x00039dac) heading_pane_g1

0x0001,

0xf8a1,	// (0x00045994) heading_pane_g

0x471b,	// (0x0003a80e) grid_sct_catagory_button_pane

0x474d,	// (0x0003a840) scroll_pane_cp5_ParamLimits

0x5245,	// (0x0003b338) button_value_adjust_pane_cp5_ParamLimits

0x5245,	// (0x0003b338) button_value_adjust_pane_cp5

0x532a,	// (0x0003b41d) form2_midp_time_pane_ParamLimits

0x6e83,	// (0x0003cf76) cell_sct_catagory_button_pane_ParamLimits

0x6e83,	// (0x0003cf76) cell_sct_catagory_button_pane

0x55aa,	// (0x0003b69d) bg_button_pane_cp01_ParamLimits

0x55aa,	// (0x0003b69d) bg_button_pane_cp01

0x55e5,	// (0x0003b6d8) cell_sct_catagory_button_pane_g1

0xad54,	// (0x00040e47) popup_tb_extension_window

0xdcc2,	// (0x00043db5) aid_size_cell_ext_ParamLimits

0xdcc2,	// (0x00043db5) aid_size_cell_ext

0xbce9,	// (0x00041ddc) bg_tb_trans_pane_cp1_ParamLimits

0xbce9,	// (0x00041ddc) bg_tb_trans_pane_cp1

0xdce8,	// (0x00043ddb) grid_tb_ext_pane_ParamLimits

0xdce8,	// (0x00043ddb) grid_tb_ext_pane

0xdd25,	// (0x00043e18) cell_tb_ext_pane_ParamLimits

0xdd25,	// (0x00043e18) cell_tb_ext_pane

0xdd4d,	// (0x00043e40) cell_tb_ext_pane_g1_ParamLimits

0xdd4d,	// (0x00043e40) cell_tb_ext_pane_g1

0x6f17,	// (0x0003d00a) cell_tb_ext_pane_t1

0xba5f,	// (0x00041b52) list_highlight_pane_cp11_ParamLimits

0xba5f,	// (0x00041b52) list_highlight_pane_cp11

0x969e,	// (0x0003f791) popup_uni_indicator_window_ParamLimits

0x969e,	// (0x0003f791) popup_uni_indicator_window

0xbf6e,	// (0x00042061) bg_popup_sub_pane_cp14

0x6f32,	// (0x0003d025) list_uniindi_pane

0x6f3e,	// (0x0003d031) uniindi_top_pane

0xba5f,	// (0x00041b52) bg_uniindi_top_pane

0x6f5f,	// (0x0003d052) uniindi_top_pane_g1

0x6f75,	// (0x0003d068) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00045e09) uniindi_top_pane_g

0x6f9f,	// (0x0003d092) uniindi_top_pane_t1

0x6fcb,	// (0x0003d0be) list_single_uniindi_pane_ParamLimits

0x6fcb,	// (0x0003d0be) list_single_uniindi_pane

0x55e5,	// (0x0003b6d8) bg_uniindi_top_pane_g1

0x6fde,	// (0x0003d0d1) list_single_uniindi_pane_g1

0x6ff1,	// (0x0003d0e4) list_single_uniindi_pane_t1

0xec7a,	// (0x00044d6d) control_bg_pane

0x7016,	// (0x0003d109) bg_sctrl_sk_pane_cp1

0x701f,	// (0x0003d112) bg_sctrl_sk_pane_cp2

0x7028,	// (0x0003d11b) control_bg_pane_g1

0x7031,	// (0x0003d124) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x00045e12) control_bg_pane_g

0x507d,	// (0x0003b170) cell_indicator_nsta_pane_g1_ParamLimits

0xcae1,	// (0x00042bd4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00045b7a) cell_indicator_nsta_pane_g_ParamLimits

0xd8dd,	// (0x000439d0) form2_midp_time_pane_t1_ParamLimits

0x0fb1,	// (0x000370a4) main_idle_act4_pane_ParamLimits

0x0fb1,	// (0x000370a4) main_idle_act4_pane

0xad54,	// (0x00040e47) popup_tb_extension_window_ParamLimits

0xdd0d,	// (0x00043e00) tb_ext_find_pane_ParamLimits

0xdd0d,	// (0x00043e00) tb_ext_find_pane

0x703a,	// (0x0003d12d) ai_gene_pane_1_cp1

0x28bd,	// (0x000389b0) ai_gene_pane_2_cp1

0x7042,	// (0x0003d135) list_single_idle_plugin_calendar_pane

0x704b,	// (0x0003d13e) list_single_idle_plugin_notification_pane

0x7054,	// (0x0003d147) list_single_idle_plugin_player_pane

0xdd6a,	// (0x00043e5d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd6a,	// (0x00043e5d) list_single_idle_plugin_shortcut_pane

0xdd92,	// (0x00043e85) main_idle_act4_pane_t1

0xddaa,	// (0x00043e9d) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00045e17) main_idle_act4_pane_t

0xddc2,	// (0x00043eb5) middle_sk_idle_act4_pane_ParamLimits

0xddc2,	// (0x00043eb5) middle_sk_idle_act4_pane

0xddde,	// (0x00043ed1) popup_clock_digital_analogue_window_cp2

0xde05,	// (0x00043ef8) shortcut_wheel_idle_act4_pane_ParamLimits

0xde05,	// (0x00043ef8) shortcut_wheel_idle_act4_pane

0x55e5,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g1

0x55e5,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g2

0x55e5,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g3

0x55e5,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g4

0x55e5,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g5

0x7108,	// (0x0003d1fb) shortcut_wheel_idle_act4_pane_g6

0x7110,	// (0x0003d203) shortcut_wheel_idle_act4_pane_g7

0x7118,	// (0x0003d20b) shortcut_wheel_idle_act4_pane_g8

0x7120,	// (0x0003d213) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00045e1c) shortcut_wheel_idle_act4_pane_g

0xd2ca,	// (0x000433bd) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2ca,	// (0x000433bd) middle_sk_idle_act4_pane_g1

0xde82,	// (0x00043f75) middle_sk_idle_act4_pane_g2_ParamLimits

0xde82,	// (0x00043f75) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x00045e3f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x00045e3f) middle_sk_idle_act4_pane_g

0xde9a,	// (0x00043f8d) middle_sk_idle_act4_pane_t1_ParamLimits

0xde9a,	// (0x00043f8d) middle_sk_idle_act4_pane_t1

0xdec9,	// (0x00043fbc) grid_ai_shortcut_pane_ParamLimits

0xdec9,	// (0x00043fbc) grid_ai_shortcut_pane

0xdee6,	// (0x00043fd9) list_highlight_pane_cp16_ParamLimits

0xdee6,	// (0x00043fd9) list_highlight_pane_cp16

0xdef3,	// (0x00043fe6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdef3,	// (0x00043fe6) list_single_idle_plugin_shortcut_pane_g1

0xdeff,	// (0x00043ff2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdeff,	// (0x00043ff2) list_single_idle_plugin_shortcut_pane_g2

0xdf1d,	// (0x00044010) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdf1d,	// (0x00044010) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x00045e44) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x00045e44) list_single_idle_plugin_shortcut_pane_g

0xdf32,	// (0x00044025) cell_ai_shortcut_pane_ParamLimits

0xdf32,	// (0x00044025) cell_ai_shortcut_pane

0xdf48,	// (0x0004403b) cell_ai_shortcut_pane_g1_ParamLimits

0xdf48,	// (0x0004403b) cell_ai_shortcut_pane_g1

0x703a,	// (0x0003d12d) ai_gene_pane_1_cp2

0x7251,	// (0x0003d344) ai_gene_pane_2_cp2

0x7259,	// (0x0003d34c) list_highlight_pane_cp15

0x7262,	// (0x0003d355) list_single_idle_plugin_calendar_pane_g1

0x7259,	// (0x0003d34c) list_highlight_pane_cp17

0x726a,	// (0x0003d35d) list_single_idle_plugin_calendar_pane_g1_copy1

0x7272,	// (0x0003d365) list_single_idle_plugin_player_pane_g1

0x4982,	// (0x0003aa75) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00045e4b) list_single_idle_plugin_player_pane_g

0x727a,	// (0x0003d36d) list_single_idle_plugin_player_pane_t1

0x7288,	// (0x0003d37b) list_single_idle_plugin_player_pane_t2

0x7296,	// (0x0003d389) list_single_idle_plugin_player_pane_t3

0x72a4,	// (0x0003d397) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x00045e50) list_single_idle_plugin_player_pane_t

0x72b2,	// (0x0003d3a5) wait_bar_pane_cp15

0x72ba,	// (0x0003d3ad) grid_ai_notification_pane

0x4982,	// (0x0003aa75) list_single_idle_plugin_notification_pane_g1

0xdf6a,	// (0x0004405d) cell_ai_notification_pane_ParamLimits

0xdf6a,	// (0x0004405d) cell_ai_notification_pane

0x72d0,	// (0x0003d3c3) cell_ai_notification_pane_g1

0x72d8,	// (0x0003d3cb) cell_ai_notification_pane_t1

0xdf77,	// (0x0004406a) tb_ext_find_button_pane

0xdf7f,	// (0x00044072) tb_ext_find_pane_g1

0xdf87,	// (0x0004407a) tb_ext_find_pane_t1

0xf3da,	// (0x000454cd) tb_ext_find_button_pane_g1

0x7304,	// (0x0003d3f7) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x00045e59) tb_ext_find_button_pane_g

0xdd92,	// (0x00043e85) main_idle_act4_pane_t1_ParamLimits

0xddaa,	// (0x00043e9d) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00045e17) main_idle_act4_pane_t_ParamLimits

0xddde,	// (0x00043ed1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddf5,	// (0x00043ee8) sat_plugin_idle_act4_pane_ParamLimits

0xddf5,	// (0x00043ee8) sat_plugin_idle_act4_pane

0xdf95,	// (0x00044088) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf95,	// (0x00044088) sat_plugin_idle_act4_pane_t1

0xdfad,	// (0x000440a0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfad,	// (0x000440a0) sat_plugin_idle_act4_pane_t2

0xdfc5,	// (0x000440b8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfc5,	// (0x000440b8) sat_plugin_idle_act4_pane_t3

0xdfdd,	// (0x000440d0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfdd,	// (0x000440d0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x00045e5e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x00045e5e) sat_plugin_idle_act4_pane_t

0xed3f,	// (0x00044e32) popup_battery_window_ParamLimits

0xed3f,	// (0x00044e32) popup_battery_window

0xba5f,	// (0x00041b52) bg_popup_sub_pane_cp25_ParamLimits

0xba5f,	// (0x00041b52) bg_popup_sub_pane_cp25

0x7359,	// (0x0003d44c) popup_battery_window_g1_ParamLimits

0x7359,	// (0x0003d44c) popup_battery_window_g1

0x7365,	// (0x0003d458) popup_battery_window_t1_ParamLimits

0x7365,	// (0x0003d458) popup_battery_window_t1

0x7377,	// (0x0003d46a) popup_battery_window_t2_ParamLimits

0x7377,	// (0x0003d46a) popup_battery_window_t2

0x0001,

0xfd74,	// (0x00045e67) popup_battery_window_t_ParamLimits

0xfd74,	// (0x00045e67) popup_battery_window_t

0xa3f0,	// (0x000404e3) midp_canvas_pane_ParamLimits

0xa44c,	// (0x0004053f) midp_keypad_pane_ParamLimits

0xa44c,	// (0x0004053f) midp_keypad_pane

0x2a9a,	// (0x00038b8d) main_midp_pane_ParamLimits

0x50f8,	// (0x0003b1eb) signal_pane_g2_cp_ParamLimits

0xdff5,	// (0x000440e8) aid_size_cell_midp_keypad_ParamLimits

0xdff5,	// (0x000440e8) aid_size_cell_midp_keypad

0xe013,	// (0x00044106) midp_keyp_game_grid_pane_ParamLimits

0xe013,	// (0x00044106) midp_keyp_game_grid_pane

0xe03a,	// (0x0004412d) midp_keyp_rocker_pane_ParamLimits

0xe03a,	// (0x0004412d) midp_keyp_rocker_pane

0xe089,	// (0x0004417c) midp_keyp_sk_left_pane_ParamLimits

0xe089,	// (0x0004417c) midp_keyp_sk_left_pane

0xe0df,	// (0x000441d2) midp_keyp_sk_right_pane_ParamLimits

0xe0df,	// (0x000441d2) midp_keyp_sk_right_pane

0xb8bc,	// (0x000419af) bg_button_pane_cp03

0xe135,	// (0x00044228) midp_keyp_sk_left_pane_g1

0xb8bc,	// (0x000419af) bg_button_pane_cp04

0xe135,	// (0x00044228) midp_keyp_sk_right_pane_g1

0x55e5,	// (0x0003b6d8) midp_keyp_rocker_pane_g1

0xe13d,	// (0x00044230) keyp_game_cell_pane_ParamLimits

0xe13d,	// (0x00044230) keyp_game_cell_pane

0xb8bc,	// (0x000419af) bg_button_pane_cp02

0xe163,	// (0x00044256) keyp_game_cell_pane_g1

0x9635,	// (0x0003f728) popup_fep_vkb2_window_ParamLimits

0x9635,	// (0x0003f728) popup_fep_vkb2_window

0xb2f9,	// (0x000413ec) aid_size_cell_vkb2_ParamLimits

0xb2f9,	// (0x000413ec) aid_size_cell_vkb2

0xb325,	// (0x00041418) popup_fep_vkb2_window_g1_ParamLimits

0xb325,	// (0x00041418) popup_fep_vkb2_window_g1

0xb375,	// (0x00041468) vkb2_area_bottom_pane_ParamLimits

0xb375,	// (0x00041468) vkb2_area_bottom_pane

0xb3d1,	// (0x000414c4) vkb2_area_keypad_pane_ParamLimits

0xb3d1,	// (0x000414c4) vkb2_area_keypad_pane

0xb41f,	// (0x00041512) vkb2_area_top_pane_ParamLimits

0xb41f,	// (0x00041512) vkb2_area_top_pane

0xb4ac,	// (0x0004159f) vkb2_top_entry_pane_ParamLimits

0xb4ac,	// (0x0004159f) vkb2_top_entry_pane

0xb4d9,	// (0x000415cc) vkb2_top_grid_left_pane_ParamLimits

0xb4d9,	// (0x000415cc) vkb2_top_grid_left_pane

0xb4fa,	// (0x000415ed) vkb2_top_grid_right_pane_ParamLimits

0xb4fa,	// (0x000415ed) vkb2_top_grid_right_pane

0x186c,	// (0x0003795f) vkb2_cell_keypad_pane_ParamLimits

0x186c,	// (0x0003795f) vkb2_cell_keypad_pane

0xb542,	// (0x00041635) vkb2_area_bottom_grid_pane_ParamLimits

0xb542,	// (0x00041635) vkb2_area_bottom_grid_pane

0xb56c,	// (0x0004165f) vkb2_area_bottom_pane_g1_ParamLimits

0xb56c,	// (0x0004165f) vkb2_area_bottom_pane_g1

0xb592,	// (0x00041685) vkb2_area_bottom_pane_g2_ParamLimits

0xb592,	// (0x00041685) vkb2_area_bottom_pane_g2

0xb5c3,	// (0x000416b6) vkb2_area_bottom_pane_g3_ParamLimits

0xb5c3,	// (0x000416b6) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x00045e6c) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x00045e6c) vkb2_area_bottom_pane_g

0x1a16,	// (0x00037b09) vkb2_top_cell_left_pane_ParamLimits

0x1a16,	// (0x00037b09) vkb2_top_cell_left_pane

0xe16c,	// (0x0004425f) vkb2_top_entry_pane_g1_ParamLimits

0xe16c,	// (0x0004425f) vkb2_top_entry_pane_g1

0xe17a,	// (0x0004426d) vkb2_top_entry_pane_t1_ParamLimits

0xe17a,	// (0x0004426d) vkb2_top_entry_pane_t1

0x7521,	// (0x0003d614) vkb2_top_entry_pane_t2_ParamLimits

0x7521,	// (0x0003d614) vkb2_top_entry_pane_t2

0x7553,	// (0x0003d646) vkb2_top_entry_pane_t3_ParamLimits

0x7553,	// (0x0003d646) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x00045e73) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x00045e73) vkb2_top_entry_pane_t

0xb62d,	// (0x00041720) vkb2_top_grid_right_pane_g1_ParamLimits

0xb62d,	// (0x00041720) vkb2_top_grid_right_pane_g1

0x1a79,	// (0x00037b6c) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a79,	// (0x00037b6c) vkb2_top_grid_right_pane_g2

0x1a91,	// (0x00037b84) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a91,	// (0x00037b84) vkb2_top_grid_right_pane_g3

0xb643,	// (0x00041736) vkb2_top_grid_right_pane_g4_ParamLimits

0xb643,	// (0x00041736) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x00045e7a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x00045e7a) vkb2_top_grid_right_pane_g

0x1abf,	// (0x00037bb2) vkb2_top_cell_left_pane_g1

0x1ad6,	// (0x00037bc9) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ad6,	// (0x00037bc9) vkb2_cell_keypad_pane_g1

0x7577,	// (0x0003d66a) vkb2_cell_keypad_pane_t1_ParamLimits

0x7577,	// (0x0003d66a) vkb2_cell_keypad_pane_t1

0x1ae4,	// (0x00037bd7) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ae4,	// (0x00037bd7) vkb2_cell_bottom_grid_pane

0x1b1d,	// (0x00037c10) vkb2_cell_bottom_grid_pane_g1

0xde26,	// (0x00043f19) aid_call2_pane_cp02

0xde2e,	// (0x00043f21) aid_call_pane_cp02

0xde36,	// (0x00043f29) clock_digital_number_pane_cp10

0xde3e,	// (0x00043f31) clock_digital_number_pane_cp11

0xde46,	// (0x00043f39) clock_digital_number_pane_cp12

0xde4e,	// (0x00043f41) clock_digital_number_pane_cp13

0xde56,	// (0x00043f49) clock_digital_separator_pane_cp10

0xf3da,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g1

0xf3da,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g2

0xde5e,	// (0x00043f51) popup_clock_digital_analogue_window_cp2_g3

0xf3da,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g4

0xde5e,	// (0x00043f51) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x00045e2f) popup_clock_digital_analogue_window_cp2_g

0xde66,	// (0x00043f59) popup_clock_digital_analogue_window_cp2_t1

0xde74,	// (0x00043f67) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00045e3a) popup_clock_digital_analogue_window_cp2_t

0x55e5,	// (0x0003b6d8) clock_digital_number_pane_cp10_g1

0x55e5,	// (0x0003b6d8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00045c16) clock_digital_number_pane_cp10_g

0x55e5,	// (0x0003b6d8) clock_digital_separator_pane_cp10_g1

0x55e5,	// (0x0003b6d8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00045c16) clock_digital_separator_pane_cp10_g

0x6f81,	// (0x0003d074) uniindi_top_pane_g3

0x6f92,	// (0x0003d085) uniindi_top_pane_g4

0x18f7,	// (0x000379ea) vkb2_row_keypad_pane_ParamLimits

0x18f7,	// (0x000379ea) vkb2_row_keypad_pane

0x1b39,	// (0x00037c2c) vkb2_cell_t_keypad_pane_ParamLimits

0x1b39,	// (0x00037c2c) vkb2_cell_t_keypad_pane

0x1b49,	// (0x00037c3c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b49,	// (0x00037c3c) vkb2_cell_t_keypad_pane_cp08

0x1b5e,	// (0x00037c51) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b5e,	// (0x00037c51) vkb2_cell_t_keypad_pane_cp09

0x1b72,	// (0x00037c65) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b72,	// (0x00037c65) vkb2_cell_t_keypad_pane_cp01

0x1b83,	// (0x00037c76) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b83,	// (0x00037c76) vkb2_cell_t_keypad_pane_cp02

0x1b94,	// (0x00037c87) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b94,	// (0x00037c87) vkb2_cell_t_keypad_pane_cp03

0x1ba5,	// (0x00037c98) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1ba5,	// (0x00037c98) vkb2_cell_t_keypad_pane_cp04

0x1bb6,	// (0x00037ca9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1bb6,	// (0x00037ca9) vkb2_cell_t_keypad_pane_cp05

0x1bc7,	// (0x00037cba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1bc7,	// (0x00037cba) vkb2_cell_t_keypad_pane_cp06

0x1bda,	// (0x00037ccd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1bda,	// (0x00037ccd) vkb2_cell_t_keypad_pane_cp07

0x1bef,	// (0x00037ce2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1bef,	// (0x00037ce2) vkb2_cell_t_keypad_pane_cp10

0x122c,	// (0x0003731f) vkb2_cell_t_keypad_pane_g1

0x758e,	// (0x0003d681) vkb2_cell_t_keypad_pane_t1

0xec7a,	// (0x00044d6d) popup_grid_graphic2_window

0xe1b3,	// (0x000442a6) aid_size_cell_graphic2_ParamLimits

0xe1b3,	// (0x000442a6) aid_size_cell_graphic2

0xe1f1,	// (0x000442e4) bg_popup_window_pane_cp21_ParamLimits

0xe1f1,	// (0x000442e4) bg_popup_window_pane_cp21

0xe1ff,	// (0x000442f2) graphic2_pages_pane_ParamLimits

0xe1ff,	// (0x000442f2) graphic2_pages_pane

0xe257,	// (0x0004434a) grid_graphic2_control_pane_ParamLimits

0xe257,	// (0x0004434a) grid_graphic2_control_pane

0xe29f,	// (0x00044392) grid_graphic2_pane_ParamLimits

0xe29f,	// (0x00044392) grid_graphic2_pane

0xe32a,	// (0x0004441d) cell_graphic2_pane

0xec7a,	// (0x00044d6d) main_comp_mode_pane

0x67ec,	// (0x0003c8df) list_ai3_gene_pane_ParamLimits

0xdb66,	// (0x00043c59) bg_popup_window_pane_cp19_ParamLimits

0x6bc0,	// (0x0003ccb3) bg_touch_area_indi_pane_ParamLimits

0x6bc0,	// (0x0003ccb3) bg_touch_area_indi_pane

0x6bd6,	// (0x0003ccc9) bg_touch_area_indi_pane_cp01_ParamLimits

0x6bd6,	// (0x0003ccc9) bg_touch_area_indi_pane_cp01

0x6bec,	// (0x0003ccdf) bg_touch_area_indi_pane_cp02_ParamLimits

0x6bec,	// (0x0003ccdf) bg_touch_area_indi_pane_cp02

0x6c06,	// (0x0003ccf9) bg_touch_area_indi_pane_cp03_ParamLimits

0x6c06,	// (0x0003ccf9) bg_touch_area_indi_pane_cp03

0x6c20,	// (0x0003cd13) popup_slider_window_g1_ParamLimits

0x6c3c,	// (0x0003cd2f) popup_slider_window_g2_ParamLimits

0x6c58,	// (0x0003cd4b) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x00045dc4) popup_slider_window_g_ParamLimits

0x6cbe,	// (0x0003cdb1) popup_slider_window_t1_ParamLimits

0x6d32,	// (0x0003ce25) small_volume_slider_vertical_pane_ParamLimits

0xe32a,	// (0x0004441d) cell_graphic2_pane_ParamLimits

0xe38c,	// (0x0004447f) bg_button_pane_cp10_ParamLimits

0xe38c,	// (0x0004447f) bg_button_pane_cp10

0xe39f,	// (0x00044492) bg_button_pane_cp11_ParamLimits

0xe39f,	// (0x00044492) bg_button_pane_cp11

0xe3b2,	// (0x000444a5) graphic2_pages_pane_g1_ParamLimits

0xe3b2,	// (0x000444a5) graphic2_pages_pane_g1

0xe3cd,	// (0x000444c0) graphic2_pages_pane_g2_ParamLimits

0xe3cd,	// (0x000444c0) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x00045e88) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x00045e88) graphic2_pages_pane_g

0xe3e5,	// (0x000444d8) graphic2_pages_pane_t1_ParamLimits

0xe3e5,	// (0x000444d8) graphic2_pages_pane_t1

0xe3fd,	// (0x000444f0) cell_graphic2_control_pane_ParamLimits

0xe3fd,	// (0x000444f0) cell_graphic2_control_pane

0xe42b,	// (0x0004451e) cell_graphic2_pane_g1_ParamLimits

0xe42b,	// (0x0004451e) cell_graphic2_pane_g1

0xd2d8,	// (0x000433cb) cell_graphic2_pane_g2_ParamLimits

0xd2d8,	// (0x000433cb) cell_graphic2_pane_g2

0xd8f0,	// (0x000439e3) cell_graphic2_pane_g3_ParamLimits

0xd8f0,	// (0x000439e3) cell_graphic2_pane_g3

0xd2e5,	// (0x000433d8) cell_graphic2_pane_g4_ParamLimits

0xd2e5,	// (0x000433d8) cell_graphic2_pane_g4

0xe438,	// (0x0004452b) cell_graphic2_pane_g5_ParamLimits

0xe438,	// (0x0004452b) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x00045e8d) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x00045e8d) cell_graphic2_pane_g

0xe454,	// (0x00044547) cell_graphic2_pane_t1_ParamLimits

0xe454,	// (0x00044547) cell_graphic2_pane_t1

0x3cad,	// (0x00039da0) grid_highlight_pane_cp11_ParamLimits

0x3cad,	// (0x00039da0) grid_highlight_pane_cp11

0xba5f,	// (0x00041b52) bg_button_pane_cp05

0xe49d,	// (0x00044590) cell_graphic2_control_pane_g1

0x55e5,	// (0x0003b6d8) bg_touch_area_indi_pane_g1

0x7871,	// (0x0003d964) aid_cmod_rocker_key_size

0x787b,	// (0x0003d96e) aid_cmode_itu_key_size

0x7885,	// (0x0003d978) main_cmode_video_pane

0x788f,	// (0x0003d982) main_comp_mode_itu_pane

0x789b,	// (0x0003d98e) main_comp_mode_rocker_pane

0x78a7,	// (0x0003d99a) cell_cmode_rocker_pane_ParamLimits

0x78a7,	// (0x0003d99a) cell_cmode_rocker_pane

0x78bb,	// (0x0003d9ae) cell_cmode_itu_pane_ParamLimits

0x78bb,	// (0x0003d9ae) cell_cmode_itu_pane

0xbf6e,	// (0x00042061) bg_button_pane_cp06_ParamLimits

0xbf6e,	// (0x00042061) bg_button_pane_cp06

0x586c,	// (0x0003b95f) cell_cmode_rocker_pane_g1_ParamLimits

0x586c,	// (0x0003b95f) cell_cmode_rocker_pane_g1

0x6dd9,	// (0x0003cecc) cell_cmode_rocker_pane_g2_ParamLimits

0x6dd9,	// (0x0003cecc) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x00045e9d) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x00045e9d) cell_cmode_rocker_pane_g

0xb8bc,	// (0x000419af) bg_button_pane_cp07

0x78d2,	// (0x0003d9c5) cell_cmode_itu_pane_g1

0x78db,	// (0x0003d9ce) cell_cmode_itu_pane_t1

0x78e9,	// (0x0003d9dc) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x00045ea2) cell_cmode_itu_pane_t

0x7006,	// (0x0003d0f9) aid_touch_ctrl_left

0x700e,	// (0x0003d101) aid_touch_ctrl_right

0xb8bc,	// (0x000419af) compa_mode_pane

0xe4c5,	// (0x000445b8) aid_cmod_rocker_key_size_cp

0xe4cf,	// (0x000445c2) aid_cmode_itu_key_size_cp

0x790b,	// (0x0003d9fe) compa_mode_pane_g1

0x7913,	// (0x0003da06) compa_mode_pane_g2

0x791b,	// (0x0003da0e) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x00045ea7) compa_mode_pane_g

0xe4d9,	// (0x000445cc) main_comp_mode_itu_pane_cp

0xe4e1,	// (0x000445d4) main_comp_mode_rocker_pane_cp

0xe4e9,	// (0x000445dc) cell_cmode_itu_pane_cp_ParamLimits

0xe4e9,	// (0x000445dc) cell_cmode_itu_pane_cp

0xe4fe,	// (0x000445f1) cell_cmode_rocker_pane_cp_ParamLimits

0xe4fe,	// (0x000445f1) cell_cmode_rocker_pane_cp

0xbf6e,	// (0x00042061) bg_button_pane_cp06_cp_ParamLimits

0xbf6e,	// (0x00042061) bg_button_pane_cp06_cp

0x586c,	// (0x0003b95f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x586c,	// (0x0003b95f) cell_cmode_rocker_pane_g1_cp

0x55e5,	// (0x0003b6d8) cell_cmode_rocker_pane_g2_cp

0xb8bc,	// (0x000419af) bg_button_pane_cp07_cp

0xe510,	// (0x00044603) cell_cmode_itu_pane_g1_cp

0xe519,	// (0x0004460c) cell_cmode_itu_pane_t1_cp

0xe519,	// (0x0004460c) cell_cmode_itu_pane_t2_cp

0xc8e2,	// (0x000429d5) settings_code_pane_cp2

0xb92c,	// (0x00041a1f) bg_popup_window_pane_cp3_ParamLimits

0xbc73,	// (0x00041d66) heading_pane_cp3_ParamLimits

0xbc82,	// (0x00041d75) listscroll_popup_graphic_pane_ParamLimits

0x0fbf,	// (0x000370b2) fep_hwr_aid_pane_ParamLimits

0x15af,	// (0x000376a2) aid_touch_sctrl_top_ParamLimits

0x15ca,	// (0x000376bd) sctrl_sk_top_pane_g1_ParamLimits

0x122c,	// (0x0003731f) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00045ddd) sctrl_sk_top_pane_g_ParamLimits

0x15d7,	// (0x000376ca) sctrl_sk_top_pane_t1_ParamLimits

0x15af,	// (0x000376a2) aid_touch_sctrl_bottom_ParamLimits

0x15d7,	// (0x000376ca) sctrl_sk_bottom_pane_t1_ParamLimits

0x6f4b,	// (0x0003d03e) aid_area_touch_clock

0xb46b,	// (0x0004155e) aid_vkb2_area_top_pane_cell_ParamLimits

0xb46b,	// (0x0004155e) aid_vkb2_area_top_pane_cell

0xb51b,	// (0x0004160e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb51b,	// (0x0004160e) aid_vkb2_area_bottom_pane_cell

0x74d9,	// (0x0003d5cc) popup_char_count_window

0x7971,	// (0x0003da64) popup_char_count_window_g1

0x797a,	// (0x0003da6d) popup_char_count_window_g2

0x7983,	// (0x0003da76) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x00045eae) popup_char_count_window_g

0x798c,	// (0x0003da7f) popup_char_count_window_t1

0x1680,	// (0x00037773) popup_fep_char_preview_window_ParamLimits

0x1680,	// (0x00037773) popup_fep_char_preview_window

0xb48b,	// (0x0004157e) vkb2_top_candi_pane_ParamLimits

0xb48b,	// (0x0004157e) vkb2_top_candi_pane

0xe527,	// (0x0004461a) cell_vkb2_top_candi_pane_ParamLimits

0xe527,	// (0x0004461a) cell_vkb2_top_candi_pane

0x1c04,	// (0x00037cf7) bg_popup_fep_char_preview_window_ParamLimits

0x1c04,	// (0x00037cf7) bg_popup_fep_char_preview_window

0x1c12,	// (0x00037d05) popup_fep_char_preview_window_t1_ParamLimits

0x1c12,	// (0x00037d05) popup_fep_char_preview_window_t1

0x79e8,	// (0x0003dadb) bg_popup_fep_char_preview_window_g1

0x79f0,	// (0x0003dae3) bg_popup_fep_char_preview_window_g2

0x79f8,	// (0x0003daeb) bg_popup_fep_char_preview_window_g3

0x7a00,	// (0x0003daf3) bg_popup_fep_char_preview_window_g4

0x7a08,	// (0x0003dafb) bg_popup_fep_char_preview_window_g5

0x7a10,	// (0x0003db03) bg_popup_fep_char_preview_window_g6

0x7a18,	// (0x0003db0b) bg_popup_fep_char_preview_window_g7

0x7a20,	// (0x0003db13) bg_popup_fep_char_preview_window_g8

0x7a28,	// (0x0003db1b) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x00045eb5) bg_popup_fep_char_preview_window_g

0x122c,	// (0x0003731f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x122c,	// (0x0003731f) cell_vkb2_top_candi_pane_g1

0x123a,	// (0x0003732d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x123a,	// (0x0003732d) cell_vkb2_top_candi_pane_g2

0x70c7,	// (0x0003d1ba) cell_vkb2_top_candi_pane_g3_ParamLimits

0x70c7,	// (0x0003d1ba) cell_vkb2_top_candi_pane_g3

0x1c54,	// (0x00037d47) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c54,	// (0x00037d47) cell_vkb2_top_candi_pane_g4

0x5d8b,	// (0x0003be7e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5d8b,	// (0x0003be7e) cell_vkb2_top_candi_pane_g5

0x1c75,	// (0x00037d68) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c75,	// (0x00037d68) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00045eca) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00045eca) cell_vkb2_top_candi_pane_g

0x1c83,	// (0x00037d76) cell_vkb2_top_candi_pane_t1

0x0d7c,	// (0x00036e6f) aid_size_touch_slider_mark_ParamLimits

0x0d7c,	// (0x00036e6f) aid_size_touch_slider_mark

0xe23b,	// (0x0004432e) grid_graphic2_catg_pane_ParamLimits

0xe23b,	// (0x0004432e) grid_graphic2_catg_pane

0xe2f9,	// (0x000443ec) popup_grid_graphic2_window_t1_ParamLimits

0xe2f9,	// (0x000443ec) popup_grid_graphic2_window_t1

0xe30f,	// (0x00044402) popup_grid_graphic2_window_t2_ParamLimits

0xe30f,	// (0x00044402) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x00045e83) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x00045e83) popup_grid_graphic2_window_t

0xba5f,	// (0x00041b52) bg_button_pane_cp05_ParamLimits

0xe49d,	// (0x00044590) cell_graphic2_control_pane_g1_ParamLimits

0xe58b,	// (0x0004467e) cell_graphic2_catg_pane_ParamLimits

0xe58b,	// (0x0004467e) cell_graphic2_catg_pane

0xb8bc,	// (0x000419af) bg_button_pane_cp12

0xe59d,	// (0x00044690) cell_graphic2_catg_pane_g1

0x6f17,	// (0x0003d00a) cell_tb_ext_pane_t1_ParamLimits

0x1a36,	// (0x00037b29) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1a36,	// (0x00037b29) vkb2_top_cell_right_narrow_pane

0x1a4e,	// (0x00037b41) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a4e,	// (0x00037b41) vkb2_top_cell_right_wide_pane

0x0fb1,	// (0x000370a4) bg_vkb2_func_pane_ParamLimits

0x0fb1,	// (0x000370a4) bg_vkb2_func_pane

0x1abf,	// (0x00037bb2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp03

0x1b1d,	// (0x00037c10) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2fd8,	// (0x000390cb) bg_vkb2_func_pane_g1

0x2fe0,	// (0x000390d3) bg_vkb2_func_pane_g2

0x2ff0,	// (0x000390e3) bg_vkb2_func_pane_g3

0x2fe8,	// (0x000390db) bg_vkb2_func_pane_g4

0x2ff8,	// (0x000390eb) bg_vkb2_func_pane_g5

0x3000,	// (0x000390f3) bg_vkb2_func_pane_g6

0x3008,	// (0x000390fb) bg_vkb2_func_pane_g7

0x3010,	// (0x00039103) bg_vkb2_func_pane_g8

0x2fd0,	// (0x000390c3) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00045ed7) bg_vkb2_func_pane_g

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp01

0x1abf,	// (0x00037bb2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1abf,	// (0x00037bb2) vkb2_top_cell_right_wide_pane_g1

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0fb1,	// (0x000370a4) bg_vkb2_fuc_pane_cp02

0x1ca1,	// (0x00037d94) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ca1,	// (0x00037d94) vkb2_top_cell_right_narrow_pane_g1

0xd240,	// (0x00043333) aid_touch_area_decrease_ParamLimits

0xd240,	// (0x00043333) aid_touch_area_decrease

0xd27a,	// (0x0004336d) aid_touch_area_increase_ParamLimits

0xd27a,	// (0x0004336d) aid_touch_area_increase

0xd2a2,	// (0x00043395) aid_touch_area_mute_ParamLimits

0xd2a2,	// (0x00043395) aid_touch_area_mute

0xdb32,	// (0x00043c25) aid_touch_area_slider_ParamLimits

0xdb32,	// (0x00043c25) aid_touch_area_slider

0xdb72,	// (0x00043c65) popup_slider_window_g4_ParamLimits

0xdb72,	// (0x00043c65) popup_slider_window_g4

0xdb9a,	// (0x00043c8d) popup_slider_window_g5_ParamLimits

0xdb9a,	// (0x00043c8d) popup_slider_window_g5

0xdbce,	// (0x00043cc1) popup_slider_window_g6_ParamLimits

0xdbce,	// (0x00043cc1) popup_slider_window_g6

0x6cec,	// (0x0003cddf) popup_slider_window_t2_ParamLimits

0x6cec,	// (0x0003cddf) popup_slider_window_t2

0x0001,

0xfcde,	// (0x00045dd1) popup_slider_window_t_ParamLimits

0xfcde,	// (0x00045dd1) popup_slider_window_t

0xdbea,	// (0x00043cdd) slider_pane_ParamLimits

0xdbea,	// (0x00043cdd) slider_pane

0x7a4b,	// (0x0003db3e) slider_pane_g1_ParamLimits

0x7a4b,	// (0x0003db3e) slider_pane_g1

0x7a5f,	// (0x0003db52) slider_pane_g2_ParamLimits

0x7a5f,	// (0x0003db52) slider_pane_g2

0x7a75,	// (0x0003db68) slider_pane_g3_ParamLimits

0x7a75,	// (0x0003db68) slider_pane_g3

0x0003,

0xfdf7,	// (0x00045eea) slider_pane_g_ParamLimits

0xfdf7,	// (0x00045eea) slider_pane_g

0xada0,	// (0x00040e93) popup_tb_float_extension_window_ParamLimits

0xada0,	// (0x00040e93) popup_tb_float_extension_window

0x7aa1,	// (0x0003db94) aid_size_cell_tb_float_ext

0xb8bc,	// (0x000419af) bg_popup_sub_window_cp28

0x7aad,	// (0x0003dba0) grid_tb_float_ext_pane

0x7ab9,	// (0x0003dbac) cell_tb_float_ext_pane_ParamLimits

0x7ab9,	// (0x0003dbac) cell_tb_float_ext_pane

0x7ad5,	// (0x0003dbc8) cell_tb_float_ext_pane_g1

0x7ade,	// (0x0003dbd1) grid_highlight_pane_cp12

0xb08d,	// (0x00041180) cell_last_hwr_side_pane_ParamLimits

0xb08d,	// (0x00041180) cell_last_hwr_side_pane

0x55e5,	// (0x0003b6d8) cell_last_hwr_side_pane_g1

0x7ae7,	// (0x0003dbda) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x00045ef3) cell_last_hwr_side_pane_g

0xb5f8,	// (0x000416eb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb5f8,	// (0x000416eb) vkb2_area_bottom_space_btn_pane

0x122c,	// (0x0003731f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x758e,	// (0x0003d681) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c83,	// (0x00037d76) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1cbd,	// (0x00037db0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1cbd,	// (0x00037db0) vkb2_area_bottom_space_btn_pane_g1

0x1cf7,	// (0x00037dea) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1cf7,	// (0x00037dea) vkb2_area_bottom_space_btn_pane_g2

0x1d2d,	// (0x00037e20) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1d2d,	// (0x00037e20) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00045ef8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00045ef8) vkb2_area_bottom_space_btn_pane_g

0x1076,	// (0x00037169) cel_fep_hwr_func_pane_ParamLimits

0x1076,	// (0x00037169) cel_fep_hwr_func_pane

0xb062,	// (0x00041155) cell_hwr_side_button_pane_ParamLimits

0xb062,	// (0x00041155) cell_hwr_side_button_pane

0x6f4b,	// (0x0003d03e) aid_area_touch_clock_ParamLimits

0xba5f,	// (0x00041b52) bg_uniindi_top_pane_ParamLimits

0x6f5f,	// (0x0003d052) uniindi_top_pane_g1_ParamLimits

0x6f75,	// (0x0003d068) uniindi_top_pane_g2_ParamLimits

0x6f81,	// (0x0003d074) uniindi_top_pane_g3_ParamLimits

0x6f92,	// (0x0003d085) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00045e09) uniindi_top_pane_g_ParamLimits

0x6f9f,	// (0x0003d092) uniindi_top_pane_t1_ParamLimits

0xba5f,	// (0x00041b52) bg_vkb2_func_pane_cp01_ParamLimits

0xba5f,	// (0x00041b52) bg_vkb2_func_pane_cp01

0x7af0,	// (0x0003dbe3) cel_fep_hwr_func_pane_g1_ParamLimits

0x7af0,	// (0x0003dbe3) cel_fep_hwr_func_pane_g1

0xba5f,	// (0x00041b52) bg_vkb2_func_pane_cp02_ParamLimits

0xba5f,	// (0x00041b52) bg_vkb2_func_pane_cp02

0x7af0,	// (0x0003dbe3) cell_hwr_side_button_pane_g1_ParamLimits

0x7af0,	// (0x0003dbe3) cell_hwr_side_button_pane_g1

0x2e55,	// (0x00038f48) status_pane_g4_ParamLimits

0x2e55,	// (0x00038f48) status_pane_g4

0x2e6f,	// (0x00038f62) status_pane_t1

0x5398,	// (0x0003b48b) form2_midp_gauge_slider_cont_pane

0x53a0,	// (0x0003b493) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcbda,	// (0x00042ccd) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcbec,	// (0x00042cdf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00045bc9) form2_midp_gauge_slider_pane_t_ParamLimits

0x53d6,	// (0x0003b4c9) form2_midp_slider_pane_ParamLimits

0x1648,	// (0x0003773b) aid_size_cell_func_vkb2_ParamLimits

0x1648,	// (0x0003773b) aid_size_cell_func_vkb2

0x7a8d,	// (0x0003db80) slider_pane_g4_ParamLimits

0x7a8d,	// (0x0003db80) slider_pane_g4

0xb661,	// (0x00041754) form2_midp_gauge_slider_pane_t2_cp01

0xb66f,	// (0x00041762) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb66f,	// (0x00041762) form2_midp_gauge_slider_pane_t3_cp01

0x1da2,	// (0x00037e95) form2_midp_slider_pane_cp01

0xb8bc,	// (0x000419af) navi_smil_pane

0x7b29,	// (0x0003dc1c) navi_smil_pane_g1

0x7b31,	// (0x0003dc24) navi_smil_pane_t1

0x7afe,	// (0x0003dbf1) form2_midp_slider_pane_g1

0x7b07,	// (0x0003dbfa) form2_midp_slider_pane_g2

0x7b0f,	// (0x0003dc02) form2_midp_slider_pane_g3

0x7afe,	// (0x0003dbf1) form2_midp_slider_pane_g4

0xe5a6,	// (0x00044699) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x00045f01) form2_midp_slider_pane_g

0x1d67,	// (0x00037e5a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d67,	// (0x00037e5a) vkb2_area_bottom_space_btn_pane_g4

0xc23d,	// (0x00042330) lc0_navi_pane_ParamLimits

0xc23d,	// (0x00042330) lc0_navi_pane

0xc2ad,	// (0x000423a0) lc0_stat_indi_pane_ParamLimits

0xc2ad,	// (0x000423a0) lc0_stat_indi_pane

0xc2c2,	// (0x000423b5) ls0_title_pane_ParamLimits

0xc2c2,	// (0x000423b5) ls0_title_pane

0xbf6e,	// (0x00042061) bg_popup_sub_pane_cp14_ParamLimits

0x6f32,	// (0x0003d025) list_uniindi_pane_ParamLimits

0x6f3e,	// (0x0003d031) uniindi_top_pane_ParamLimits

0x6fde,	// (0x0003d0d1) list_single_uniindi_pane_g1_ParamLimits

0x6ff1,	// (0x0003d0e4) list_single_uniindi_pane_t1_ParamLimits

0xb68c,	// (0x0004177f) lc0_stat_clock_pane_ParamLimits

0xb68c,	// (0x0004177f) lc0_stat_clock_pane

0xe5af,	// (0x000446a2) lc0_stat_indi_pane_g1_ParamLimits

0xe5af,	// (0x000446a2) lc0_stat_indi_pane_g1

0xe5bc,	// (0x000446af) lc0_stat_indi_pane_g2_ParamLimits

0xe5bc,	// (0x000446af) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00045f0c) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00045f0c) lc0_stat_indi_pane_g

0xb699,	// (0x0004178c) lc0_uni_indicator_pane_ParamLimits

0xb699,	// (0x0004178c) lc0_uni_indicator_pane

0xe5c9,	// (0x000446bc) ls0_title_pane_g1_ParamLimits

0xe5c9,	// (0x000446bc) ls0_title_pane_g1

0xe5dd,	// (0x000446d0) ls0_title_pane_t1_ParamLimits

0xe5dd,	// (0x000446d0) ls0_title_pane_t1

0xb6a6,	// (0x00041799) lc0_uni_indicator_pane_g1_ParamLimits

0xb6a6,	// (0x00041799) lc0_uni_indicator_pane_g1

0x7ba3,	// (0x0003dc96) lc0_stat_clock_pane_t1

0xec7a,	// (0x00044d6d) main_ai5_pane

0x7bb1,	// (0x0003dca4) ai5_sk_pane_ParamLimits

0x7bb1,	// (0x0003dca4) ai5_sk_pane

0xe60b,	// (0x000446fe) cell_ai5_widget_pane_ParamLimits

0xe60b,	// (0x000446fe) cell_ai5_widget_pane

0xe67a,	// (0x0004476d) aid_size_cell_widget_grid

0x7c6f,	// (0x0003dd62) bg_ai5_widget_pane_ParamLimits

0x7c6f,	// (0x0003dd62) bg_ai5_widget_pane

0xe6ae,	// (0x000447a1) cell_ai5_widget_pane_g2

0xe6c2,	// (0x000447b5) cell_ai5_widget_pane_g3

0xe6dc,	// (0x000447cf) cell_ai5_widget_pane_g4

0xe6ec,	// (0x000447df) cell_ai5_widget_pane_g5

0xe6fc,	// (0x000447ef) cell_ai5_widget_pane_g6

0xe708,	// (0x000447fb) cell_ai5_widget_pane_g7

0xe72c,	// (0x0004481f) cell_ai5_widget_pane_t1_ParamLimits

0xe72c,	// (0x0004481f) cell_ai5_widget_pane_t1

0x7dce,	// (0x0003dec1) cell_ai5_widget_pane_t2_ParamLimits

0x7dce,	// (0x0003dec1) cell_ai5_widget_pane_t2

0x7de6,	// (0x0003ded9) cell_ai5_widget_pane_t3_ParamLimits

0x7de6,	// (0x0003ded9) cell_ai5_widget_pane_t3

0xe749,	// (0x0004483c) cell_ai5_widget_pane_t4_ParamLimits

0xe749,	// (0x0004483c) cell_ai5_widget_pane_t4

0xe76f,	// (0x00044862) cell_ai5_widget_pane_t5_ParamLimits

0xe76f,	// (0x00044862) cell_ai5_widget_pane_t5

0x7e44,	// (0x0003df37) cell_ai5_widget_pane_t6_ParamLimits

0x7e44,	// (0x0003df37) cell_ai5_widget_pane_t6

0x7e56,	// (0x0003df49) cell_ai5_widget_pane_t7_ParamLimits

0x7e56,	// (0x0003df49) cell_ai5_widget_pane_t7

0x7e75,	// (0x0003df68) cell_ai5_widget_pane_t8_ParamLimits

0x7e75,	// (0x0003df68) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00045f2c) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00045f2c) cell_ai5_widget_pane_t

0xe801,	// (0x000448f4) grid_ai5_widget_pane

0xbf6e,	// (0x00042061) highlight_cell_ai5_widget_pane_ParamLimits

0xbf6e,	// (0x00042061) highlight_cell_ai5_widget_pane

0xe80f,	// (0x00044902) ai5_sk_left_pane

0xe819,	// (0x0004490c) ai5_sk_middle_pane

0xe823,	// (0x00044916) ai5_sk_right_pane

0x7f25,	// (0x0003e018) bg_ai5_widget_pane_g1_ParamLimits

0x7f25,	// (0x0003e018) bg_ai5_widget_pane_g1

0x7f31,	// (0x0003e024) bg_ai5_widget_pane_g2_ParamLimits

0x7f31,	// (0x0003e024) bg_ai5_widget_pane_g2

0x7f3d,	// (0x0003e030) bg_ai5_widget_pane_g3_ParamLimits

0x7f3d,	// (0x0003e030) bg_ai5_widget_pane_g3

0x7f49,	// (0x0003e03c) bg_ai5_widget_pane_g4_ParamLimits

0x7f49,	// (0x0003e03c) bg_ai5_widget_pane_g4

0x7f55,	// (0x0003e048) bg_ai5_widget_pane_g5_ParamLimits

0x7f55,	// (0x0003e048) bg_ai5_widget_pane_g5

0x7f61,	// (0x0003e054) bg_ai5_widget_pane_g6_ParamLimits

0x7f61,	// (0x0003e054) bg_ai5_widget_pane_g6

0x7f6d,	// (0x0003e060) bg_ai5_widget_pane_g7_ParamLimits

0x7f6d,	// (0x0003e060) bg_ai5_widget_pane_g7

0x7f79,	// (0x0003e06c) bg_ai5_widget_pane_g8_ParamLimits

0x7f79,	// (0x0003e06c) bg_ai5_widget_pane_g8

0x7f85,	// (0x0003e078) bg_ai5_widget_pane_g9_ParamLimits

0x7f85,	// (0x0003e078) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00045f45) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00045f45) bg_ai5_widget_pane_g

0xe859,	// (0x0004494c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe859,	// (0x0004494c) cell_shortcut_ai5_widget_pane

0x2773,	// (0x00038866) bg_cell_shortcut_ai5_widget_pane

0x7fd0,	// (0x0003e0c3) cell_grid_ai5_widget_pane_g1

0x2773,	// (0x00038866) highlight_cell_shortcut_ai5_widget_pane

0x2fd8,	// (0x000390cb) ai5_sk_left_pane_g1

0x7fd9,	// (0x0003e0cc) ai5_sk_left_pane_g2

0x7fe1,	// (0x0003e0d4) ai5_sk_left_pane_g3

0x7fe9,	// (0x0003e0dc) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00045f58) ai5_sk_left_pane_g

0x7ff1,	// (0x0003e0e4) ai5_sk_left_pane_t1

0x2fe0,	// (0x000390d3) ai5_sk_right_pane_g1

0x7fff,	// (0x0003e0f2) ai5_sk_right_pane_g2

0x8007,	// (0x0003e0fa) ai5_sk_right_pane_g3

0x800f,	// (0x0003e102) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00045f61) ai5_sk_right_pane_g

0x8017,	// (0x0003e10a) ai5_sk_right_pane_t1

0x2fe0,	// (0x000390d3) ai5_sk_middle_pane_g1

0x2fd8,	// (0x000390cb) ai5_sk_middle_pane_g2

0x2ff8,	// (0x000390eb) ai5_sk_middle_pane_g3

0x8007,	// (0x0003e0fa) ai5_sk_middle_pane_g4

0x7fe1,	// (0x0003e0d4) ai5_sk_middle_pane_g5

0x8025,	// (0x0003e118) ai5_sk_middle_pane_g6

0xe86c,	// (0x0004495f) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00045f6a) ai5_sk_middle_pane_g

0xc127,	// (0x0004221a) aid_touch_area_size_lc0_ParamLimits

0xc127,	// (0x0004221a) aid_touch_area_size_lc0

0x125b,	// (0x0003734e) cell_hwr_candidate_pane_t1_ParamLimits

0x2b18,	// (0x00038c0b) aid_touch_navi_pane

0xc3cd,	// (0x000424c0) status_dt_navi_pane_ParamLimits

0xc3cd,	// (0x000424c0) status_dt_navi_pane

0xc3e5,	// (0x000424d8) status_dt_sta_pane_ParamLimits

0xc3e5,	// (0x000424d8) status_dt_sta_pane

0xe874,	// (0x00044967) dt_sta_controll_pane

0xe881,	// (0x00044974) dt_sta_indi_pane

0xe88e,	// (0x00044981) dt_sta_title_pane

0xba5f,	// (0x00041b52) bg_dt_sta_indi_pane_ParamLimits

0xba5f,	// (0x00041b52) bg_dt_sta_indi_pane

0xe8a0,	// (0x00044993) dt_sta_battery_pane

0xe8a8,	// (0x0004499b) dt_sta_indi_pane_g1

0xe8b1,	// (0x000449a4) dt_sta_indi_pane_g2

0xe8ba,	// (0x000449ad) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x00045f79) dt_sta_indi_pane_g

0xe8c3,	// (0x000449b6) dt_sta_signal_pane

0xbf6e,	// (0x00042061) bg_dt_sta_title_pane_ParamLimits

0xbf6e,	// (0x00042061) bg_dt_sta_title_pane

0xe8cc,	// (0x000449bf) dt_sta_title_pane_g1

0xe8d4,	// (0x000449c7) dt_sta_title_pane_t1_ParamLimits

0xe8d4,	// (0x000449c7) dt_sta_title_pane_t1

0xb8bc,	// (0x000419af) bg_dt_sta_control_pane

0xe8e9,	// (0x000449dc) dt_sta_controll_pane_g1

0xe8f2,	// (0x000449e5) bg_dt_sta_title_pane_g1

0xe8fb,	// (0x000449ee) bg_dt_sta_title_pane_g2

0xe904,	// (0x000449f7) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x00045f80) bg_dt_sta_title_pane_g

0x55e5,	// (0x0003b6d8) bg_dt_sta_indi_pane_g1

0x80d3,	// (0x0003e1c6) dt_sta_signal_pane_g1

0x80db,	// (0x0003e1ce) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x00045f87) dt_sta_signal_pane_g

0x80e3,	// (0x0003e1d6) dt_sta_battery_pane_g1

0x80ec,	// (0x0003e1df) dt_sta_battery_pane_t1

0x55e5,	// (0x0003b6d8) bg_dt_sta_control_pane_g1

0x225a,	// (0x0003834d) fep_china_uni_eep_pane

0x2262,	// (0x00038355) fep_china_uni_entry_pane_ParamLimits

0x2272,	// (0x00038365) popup_fep_china_uni_window_g1_ParamLimits

0x2282,	// (0x00038375) popup_fep_china_uni_window_g2_ParamLimits

0x2282,	// (0x00038375) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000457eb) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000457eb) popup_fep_china_uni_window_g

0x80fb,	// (0x0003e1ee) fep_china_uni_eep_pane_g1

0x8103,	// (0x0003e1f6) fep_china_uni_eep_pane_t1

0x7b20,	// (0x0003dc13) aid_touch_area_size_smil_player

0x2c6c,	// (0x00038d5f) lc0_clock_pane

0x2e63,	// (0x00038f56) status_pane_g5_ParamLimits

0x2e63,	// (0x00038f56) status_pane_g5

0xa8c8,	// (0x000409bb) popup_keymap_window

0x2e29,	// (0x00038f1c) status_icon_pane

0xe6c2,	// (0x000447b5) cell_ai5_widget_pane_g3_ParamLimits

0xe6dc,	// (0x000447cf) cell_ai5_widget_pane_g4_ParamLimits

0xe6ec,	// (0x000447df) cell_ai5_widget_pane_g5_ParamLimits

0x7d51,	// (0x0003de44) cell_ai5_widget_pane_g8_ParamLimits

0x7d51,	// (0x0003de44) cell_ai5_widget_pane_g8

0x7d65,	// (0x0003de58) cell_ai5_widget_pane_g9_ParamLimits

0x7d65,	// (0x0003de58) cell_ai5_widget_pane_g9

0x7d79,	// (0x0003de6c) cell_ai5_widget_pane_g10_ParamLimits

0x7d79,	// (0x0003de6c) cell_ai5_widget_pane_g10

0x8112,	// (0x0003e205) status_icon_pane_g1

0xb8bc,	// (0x000419af) bg_popup_sub_pane_cp13

0x811a,	// (0x0003e20d) popup_keymap_window_t1

0xa5b3,	// (0x000406a6) control_pane_g6_ParamLimits

0xa5b3,	// (0x000406a6) control_pane_g6

0xa5c0,	// (0x000406b3) control_pane_g7_ParamLimits

0xa5c0,	// (0x000406b3) control_pane_g7

0xa5cd,	// (0x000406c0) control_pane_g8_ParamLimits

0xa5cd,	// (0x000406c0) control_pane_g8

0xe874,	// (0x00044967) dt_sta_controll_pane_ParamLimits

0xe881,	// (0x00044974) dt_sta_indi_pane_ParamLimits

0xe88e,	// (0x00044981) dt_sta_title_pane_ParamLimits

0xbeb0,	// (0x00041fa3) aid_size_touch_scroll_bar_cale

0xed57,	// (0x00044e4a) popup_discreet_window_ParamLimits

0xed57,	// (0x00044e4a) popup_discreet_window

0x967f,	// (0x0003f772) popup_sk_window

0x3636,	// (0x00039729) bg_popup_sub_pane_cp28_ParamLimits

0x3636,	// (0x00039729) bg_popup_sub_pane_cp28

0x8128,	// (0x0003e21b) popup_discreet_window_g1_ParamLimits

0x8128,	// (0x0003e21b) popup_discreet_window_g1

0x8148,	// (0x0003e23b) popup_discreet_window_t1_ParamLimits

0x8148,	// (0x0003e23b) popup_discreet_window_t1

0x8166,	// (0x0003e259) popup_discreet_window_t2_ParamLimits

0x8166,	// (0x0003e259) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x00045f8c) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x00045f8c) popup_discreet_window_t

0x1dd8,	// (0x00037ecb) popup_sk_window_g1

0x1de2,	// (0x00037ed5) popup_sk_window_g2

0x0001,

0xfea0,	// (0x00045f93) popup_sk_window_g

0x1dea,	// (0x00037edd) popup_sk_window_t1

0x1df8,	// (0x00037eeb) popup_sk_window_t1_copy1

0xe6ae,	// (0x000447a1) cell_ai5_widget_pane_g2_ParamLimits

0xe78f,	// (0x00044882) cell_ai5_widget_pane_t9_ParamLimits

0xe78f,	// (0x00044882) cell_ai5_widget_pane_t9

0xb8bc,	// (0x000419af) main_fep_fshwr2_pane

0xb6c5,	// (0x000417b8) aid_fshwr2_btn_pane

0xb6d9,	// (0x000417cc) aid_fshwr2_syb_pane

0xb6ed,	// (0x000417e0) aid_fshwr2_txt_pane

0xb6fd,	// (0x000417f0) fshwr2_func_candi_pane

0xb71f,	// (0x00041812) fshwr2_hwr_syb_pane

0xb743,	// (0x00041836) fshwr2_icf_pane

0xec7a,	// (0x00044d6d) fshwr2_icf_bg_pane

0x1ea4,	// (0x00037f97) fshwr2_icf_pane_t1_ParamLimits

0x1ea4,	// (0x00037f97) fshwr2_icf_pane_t1

0xf3da,	// (0x000454cd) fshwr2_func_candi_pane_g1

0xe90d,	// (0x00044a00) fshwr2_func_candi_row_pane_ParamLimits

0xe90d,	// (0x00044a00) fshwr2_func_candi_row_pane

0xb773,	// (0x00041866) cell_fshwr2_syb_pane_ParamLimits

0xb773,	// (0x00041866) cell_fshwr2_syb_pane

0x1edd,	// (0x00037fd0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1edd,	// (0x00037fd0) fshwr2_hwr_syb_pane_g1

0xec7a,	// (0x00044d6d) bg_popup_call_pane_cp01

0xb79b,	// (0x0004188e) fshwr2_func_candi_cell_pane_ParamLimits

0xb79b,	// (0x0004188e) fshwr2_func_candi_cell_pane

0x3416,	// (0x00039509) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3416,	// (0x00039509) fshwr2_func_candi_cell_bg_pane

0xb7e6,	// (0x000418d9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb7e6,	// (0x000418d9) fshwr2_func_candi_cell_pane_g1

0xb81d,	// (0x00041910) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb81d,	// (0x00041910) fshwr2_func_candi_cell_pane_t1

0xec7a,	// (0x00044d6d) bg_button_pane_cp08

0x2a9a,	// (0x00038b8d) cell_fshwr2_syb_bg_pane

0xb838,	// (0x0004192b) cell_fshwr2_syb_bg_pane_g1

0xb84c,	// (0x0004193f) cell_fshwr2_syb_bg_pane_t1

0xbf6e,	// (0x00042061) main_tmo_pane

0xc6e7,	// (0x000427da) uni_indicator_pane_g1_ParamLimits

0xc6fd,	// (0x000427f0) uni_indicator_pane_g2_ParamLimits

0xc713,	// (0x00042806) uni_indicator_pane_g3_ParamLimits

0xc726,	// (0x00042819) uni_indicator_pane_g4_ParamLimits

0xc726,	// (0x00042819) uni_indicator_pane_g4

0x41ad,	// (0x0003a2a0) uni_indicator_pane_g5_ParamLimits

0x41ad,	// (0x0003a2a0) uni_indicator_pane_g5

0x41ad,	// (0x0003a2a0) uni_indicator_pane_g6_ParamLimits

0x41ad,	// (0x0003a2a0) uni_indicator_pane_g6

0xf8f7,	// (0x000459ea) uni_indicator_pane_g_ParamLimits

0xd210,	// (0x00043303) popup_tmo_note_window_ParamLimits

0xd210,	// (0x00043303) popup_tmo_note_window

0x162a,	// (0x0003771d) fshwr2_bg_pane

0xb80e,	// (0x00041901) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb80e,	// (0x00041901) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x00045f98) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x00045f98) fshwr2_func_candi_cell_pane_g

0x1214,	// (0x00037307) bg_popup_window_pane_cp01

0x1fa4,	// (0x00038097) bg_popup_window_pane_g1_cp01

0x81db,	// (0x0003e2ce) bg_popup_window_pane_cp22_ParamLimits

0x81db,	// (0x0003e2ce) bg_popup_window_pane_cp22

0x81e9,	// (0x0003e2dc) listscroll_tmo_link_pane_ParamLimits

0x81e9,	// (0x0003e2dc) listscroll_tmo_link_pane

0x8229,	// (0x0003e31c) popup_tmo_note_window_g1_ParamLimits

0x8229,	// (0x0003e31c) popup_tmo_note_window_g1

0x8236,	// (0x0003e329) tmo_note_info_pane_ParamLimits

0x8236,	// (0x0003e329) tmo_note_info_pane

0xe934,	// (0x00044a27) list_tmo_note_info_pane_g1_ParamLimits

0xe934,	// (0x00044a27) list_tmo_note_info_pane_g1

0x8267,	// (0x0003e35a) list_tmo_note_info_pane_g2_ParamLimits

0x8267,	// (0x0003e35a) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x00045f9d) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x00045f9d) list_tmo_note_info_pane_g

0x8283,	// (0x0003e376) list_tmo_note_info_text_pane_ParamLimits

0x8283,	// (0x0003e376) list_tmo_note_info_text_pane

0x8308,	// (0x0003e3fb) list_tmo_link_pane

0x8315,	// (0x0003e408) scroll_pane_cp20

0x8322,	// (0x0003e415) list_single_tmo_link_pane_ParamLimits

0x8322,	// (0x0003e415) list_single_tmo_link_pane

0x8332,	// (0x0003e425) list_single_tmo_link_pane_t1

0x8340,	// (0x0003e433) list_tmo_note_info_text_pane_t1_ParamLimits

0x8340,	// (0x0003e433) list_tmo_note_info_text_pane_t1

0xa077,	// (0x0004016a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa077,	// (0x0004016a) aid_size_touch_scroll_bar_cp01

0x9fb9,	// (0x000400ac) aid_size_touch_slider_marker

0x966f,	// (0x0003f762) popup_settings_window_ParamLimits

0x966f,	// (0x0003f762) popup_settings_window

0xd4a7,	// (0x0004359a) popup_candi_list_indi_window

0x2b18,	// (0x00038c0b) aid_touch_navi_pane_ParamLimits

0x1583,	// (0x00037676) rs_clock_indi_pane

0x158c,	// (0x0003767f) sctrl_sk_bottom_pane_ParamLimits

0x159d,	// (0x00037690) sctrl_sk_top_pane_ParamLimits

0x169a,	// (0x0003778d) popup_fep_tooltip_window

0xe67a,	// (0x0004476d) aid_size_cell_widget_grid_ParamLimits

0xe699,	// (0x0004478c) cell_ai5_widget_pane_g1_ParamLimits

0xe699,	// (0x0004478c) cell_ai5_widget_pane_g1

0xe6fc,	// (0x000447ef) cell_ai5_widget_pane_g6_ParamLimits

0xe708,	// (0x000447fb) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x00045f11) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x00045f11) cell_ai5_widget_pane_g

0xe7be,	// (0x000448b1) cell_ai5_widget_pane_t10_ParamLimits

0xe7be,	// (0x000448b1) cell_ai5_widget_pane_t10

0xe801,	// (0x000448f4) grid_ai5_widget_pane_ParamLimits

0xe82d,	// (0x00044920) cell_contacts_ai5_widget_pane_ParamLimits

0xe82d,	// (0x00044920) cell_contacts_ai5_widget_pane

0x817b,	// (0x0003e26e) popup_discreet_window_t3_ParamLimits

0x817b,	// (0x0003e26e) popup_discreet_window_t3

0xb75f,	// (0x00041852) popup_fshwr2_char_preview_window_ParamLimits

0xb75f,	// (0x00041852) popup_fshwr2_char_preview_window

0xe94b,	// (0x00044a3e) tmo_note_info_pane_t1

0xe960,	// (0x00044a53) tmo_note_info_pane_t2

0xe979,	// (0x00044a6c) tmo_note_info_pane_t3

0x82e4,	// (0x0003e3d7) tmo_note_info_pane_t4

0x82f6,	// (0x0003e3e9) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x00045fa2) tmo_note_info_pane_t

0x8308,	// (0x0003e3fb) list_tmo_link_pane_ParamLimits

0x8315,	// (0x0003e408) scroll_pane_cp20_ParamLimits

0xec7a,	// (0x00044d6d) bg_popup_fep_char_preview_window_cp01

0x8359,	// (0x0003e44c) popup_fshwr2_char_preview_window_t1

0x8367,	// (0x0003e45a) popup_candi_list_indi_window_g1

0x8370,	// (0x0003e463) bg_cell_contacts_ai5_widget_pane

0x837c,	// (0x0003e46f) cell_contacts_ai5_widget_pane_g1

0x8391,	// (0x0003e484) cell_contacts_ai5_widget_pane_g2

0x839d,	// (0x0003e490) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x00045fad) cell_contacts_ai5_widget_pane_g

0x83a9,	// (0x0003e49c) cell_contacts_ai5_widget_pane_t1

0xbf6e,	// (0x00042061) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8420,	// (0x0003e513) settings_container_pane

0x2773,	// (0x00038866) listscroll_set_pane_copy1

0x4d16,	// (0x0003ae09) scroll_pane_cp121_copy1

0x842c,	// (0x0003e51f) set_content_pane_copy1

0x8434,	// (0x0003e527) aid_height_set_list_copy1_ParamLimits

0x8434,	// (0x0003e527) aid_height_set_list_copy1

0x43ad,	// (0x0003a4a0) aid_size_parent_copy1_ParamLimits

0x43ad,	// (0x0003a4a0) aid_size_parent_copy1

0x8440,	// (0x0003e533) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8440,	// (0x0003e533) button_value_adjust_pane_cp6_copy1

0x2a9a,	// (0x00038b8d) list_highlight_pane_cp2_copy1_ParamLimits

0x2a9a,	// (0x00038b8d) list_highlight_pane_cp2_copy1

0x8454,	// (0x0003e547) list_set_pane_copy1_ParamLimits

0x8454,	// (0x0003e547) list_set_pane_copy1

0x83bb,	// (0x0003e4ae) main_pane_set_t1_copy1_ParamLimits

0x83bb,	// (0x0003e4ae) main_pane_set_t1_copy1

0x83f5,	// (0x0003e4e8) main_pane_set_t2_copy1_ParamLimits

0x83f5,	// (0x0003e4e8) main_pane_set_t2_copy1

0x8515,	// (0x0003e608) main_pane_set_t3_copy1

0x8523,	// (0x0003e616) main_pane_set_t4_copy1

0x8414,	// (0x0003e507) set_content_pane_g1_copy1_ParamLimits

0x8414,	// (0x0003e507) set_content_pane_g1_copy1

0x8531,	// (0x0003e624) setting_code_pane_copy1

0x8539,	// (0x0003e62c) setting_slider_graphic_pane_copy1

0x8539,	// (0x0003e62c) setting_slider_pane_copy1

0x8541,	// (0x0003e634) setting_text_pane_copy1

0x8541,	// (0x0003e634) setting_volume_pane_copy1

0x8531,	// (0x0003e624) settings_code_pane_cp2_copy1

0x8549,	// (0x0003e63c) settings_code_pane_cp_copy1_ParamLimits

0x8549,	// (0x0003e63c) settings_code_pane_cp_copy1

0x1fad,	// (0x000380a0) volume_set_pane_copy1

0x855d,	// (0x0003e650) volume_set_pane_g10_copy1

0x8569,	// (0x0003e65c) volume_set_pane_g1_copy1

0x8573,	// (0x0003e666) volume_set_pane_g2_copy1

0x857d,	// (0x0003e670) volume_set_pane_g3_copy1

0x8587,	// (0x0003e67a) volume_set_pane_g4_copy1

0x8591,	// (0x0003e684) volume_set_pane_g5_copy1

0x859b,	// (0x0003e68e) volume_set_pane_g6_copy1

0x85a5,	// (0x0003e698) volume_set_pane_g7_copy1

0x85af,	// (0x0003e6a2) volume_set_pane_g8_copy1

0x85b9,	// (0x0003e6ac) volume_set_pane_g9_copy1

0xb92c,	// (0x00041a1f) bg_set_opt_pane_cp_copy1_ParamLimits

0xb92c,	// (0x00041a1f) bg_set_opt_pane_cp_copy1

0x1fb9,	// (0x000380ac) setting_slider_pane_t1_copy1_ParamLimits

0x1fb9,	// (0x000380ac) setting_slider_pane_t1_copy1

0x1fd8,	// (0x000380cb) setting_slider_pane_t2_copy1_ParamLimits

0x1fd8,	// (0x000380cb) setting_slider_pane_t2_copy1

0x1ff2,	// (0x000380e5) setting_slider_pane_t3_copy1_ParamLimits

0x1ff2,	// (0x000380e5) setting_slider_pane_t3_copy1

0x200a,	// (0x000380fd) slider_set_pane_copy1_ParamLimits

0x200a,	// (0x000380fd) slider_set_pane_copy1

0xbfc6,	// (0x000420b9) set_opt_bg_pane_g1_copy2

0xbfce,	// (0x000420c1) set_opt_bg_pane_g2_copy2

0x85c5,	// (0x0003e6b8) set_opt_bg_pane_g3_copy2

0xbfde,	// (0x000420d1) set_opt_bg_pane_g4_copy2

0xbfe6,	// (0x000420d9) set_opt_bg_pane_g5_copy2

0xbfee,	// (0x000420e1) set_opt_bg_pane_g6_copy2

0x85cf,	// (0x0003e6c2) set_opt_bg_pane_g7_copy2

0x85d9,	// (0x0003e6cc) set_opt_bg_pane_g8_copy2

0x85e3,	// (0x0003e6d6) set_opt_bg_pane_g9_copy2

0x2020,	// (0x00038113) aid_size_touch_slider_mark_copy1_ParamLimits

0x2020,	// (0x00038113) aid_size_touch_slider_mark_copy1

0x85ed,	// (0x0003e6e0) slider_set_pane_g1_copy1

0x2034,	// (0x00038127) slider_set_pane_g2_copy1

0x0d9c,	// (0x00036e8f) slider_set_pane_g3_copy1_ParamLimits

0x0d9c,	// (0x00036e8f) slider_set_pane_g3_copy1

0x0db0,	// (0x00036ea3) slider_set_pane_g4_copy1_ParamLimits

0x0db0,	// (0x00036ea3) slider_set_pane_g4_copy1

0x0dc8,	// (0x00036ebb) slider_set_pane_g5_copy1_ParamLimits

0x0dc8,	// (0x00036ebb) slider_set_pane_g5_copy1

0x0d9c,	// (0x00036e8f) slider_set_pane_g6_copy1_ParamLimits

0x0d9c,	// (0x00036e8f) slider_set_pane_g6_copy1

0x203c,	// (0x0003812f) slider_set_pane_g7_copy1_ParamLimits

0x203c,	// (0x0003812f) slider_set_pane_g7_copy1

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp2_copy1

0x85f6,	// (0x0003e6e9) setting_slider_graphic_pane_g1_copy1

0x85ff,	// (0x0003e6f2) setting_slider_graphic_pane_t1_copy1

0x860f,	// (0x0003e702) setting_slider_graphic_pane_t2_copy1

0x861f,	// (0x0003e712) slider_set_pane_cp_copy1

0x862f,	// (0x0003e722) input_focus_pane_cp1_copy1

0x8638,	// (0x0003e72b) list_set_text_pane_copy1

0x8640,	// (0x0003e733) setting_text_pane_g1_copy1

0xee9a,	// (0x00044f8d) set_text_pane_t1_copy1

0x862f,	// (0x0003e722) input_focus_pane_cp2_copy1

0x8640,	// (0x0003e733) setting_code_pane_g1_copy1

0x8649,	// (0x0003e73c) setting_code_pane_t1_copy1

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane_copy1

0xb8d0,	// (0x000419c3) bg_set_opt_pane_cp4_copy1

0x2457,	// (0x0003854a) list_set_graphic_pane_g1_copy1_ParamLimits

0x2457,	// (0x0003854a) list_set_graphic_pane_g1_copy1

0x8657,	// (0x0003e74a) list_set_graphic_pane_g2_copy1

0x246f,	// (0x00038562) list_set_graphic_pane_t1_copy1_ParamLimits

0x246f,	// (0x00038562) list_set_graphic_pane_t1_copy1

0x55e5,	// (0x0003b6d8) rs_clock_indi_pane_g1

0x865f,	// (0x0003e752) rs_clock_indi_pane_t1

0x866d,	// (0x0003e760) rs_indi_pane

0x8675,	// (0x0003e768) rs_indi_pane_g1

0x867e,	// (0x0003e771) rs_indi_pane_g2

0x8687,	// (0x0003e77a) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x00045fb4) rs_indi_pane_g

0x2773,	// (0x00038866) bg_popup_preview_window_pane_cp03

0x8690,	// (0x0003e783) popup_fep_tooltip_window_t1

0x62aa,	// (0x0003c39d) popup_note2_window_g2_ParamLimits

0x62aa,	// (0x0003c39d) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x00045d41) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x00045d41) popup_note2_window_g

0x67b2,	// (0x0003c8a5) bg_popup_sub_pane_cp11_ParamLimits

0x67bf,	// (0x0003c8b2) cell_ai3_links_pane_g1_ParamLimits

0x67d6,	// (0x0003c8c9) cell_ai3_links_pane_t1

0xee9a,	// (0x00044f8d) set_text_pane_t1_copy1_ParamLimits

0x2675,	// (0x00038768) cell_graphic_popup_pane_cp2_ParamLimits

0x2675,	// (0x00038768) cell_graphic_popup_pane_cp2

0x869e,	// (0x0003e791) cell_graphic_popup_pane_g1_cp2

0xbcc3,	// (0x00041db6) cell_graphic_popup_pane_g2_cp2

0x86a6,	// (0x0003e799) cell_graphic_popup_pane_g3_cp2

0x86ae,	// (0x0003e7a1) cell_graphic_popup_pane_t2_cp2

0xbcd4,	// (0x00041dc7) grid_highlight_pane_cp3_cp2

0xf1e0,	// (0x000452d3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbf6e,	// (0x00042061) main_tmo_pane_ParamLimits

0xd204,	// (0x000432f7) popup_tmo_big_image_note_window

0xe688,	// (0x0004477b) cell_ai5_widget_list_pane

0xe690,	// (0x00044783) cell_ai5_widget_lrg_icon_pane

0xe94b,	// (0x00044a3e) tmo_note_info_pane_t1_ParamLimits

0xe960,	// (0x00044a53) tmo_note_info_pane_t2_ParamLimits

0xe979,	// (0x00044a6c) tmo_note_info_pane_t3_ParamLimits

0x82e4,	// (0x0003e3d7) tmo_note_info_pane_t4_ParamLimits

0x82f6,	// (0x0003e3e9) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x00045fa2) tmo_note_info_pane_t_ParamLimits

0x8420,	// (0x0003e513) settings_container_pane_ParamLimits

0x8627,	// (0x0003e71a) indicator_popup_pane_cp5

0x8627,	// (0x0003e71a) indicator_popup_pane_cp6

0x4b1b,	// (0x0003ac0e) list_set_graphic_pane_copy1_ParamLimits

0xb8bc,	// (0x000419af) bg_popup_window_pane_cp23

0x86bc,	// (0x0003e7af) popup_tmo_big_image_note_window_g1

0x86c8,	// (0x0003e7bb) popup_tmo_big_image_note_window_t1

0x86d8,	// (0x0003e7cb) popup_tmo_big_image_note_window_t2

0x86e8,	// (0x0003e7db) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x00045fbb) popup_tmo_big_image_note_window_t

0x55e5,	// (0x0003b6d8) cell_ai5_widget_lrg_icon_pane_g1

0xe98e,	// (0x00044a81) cell_ai5_widget_lrg_icon_pane_t1

0xe99c,	// (0x00044a8f) cell_ai5_widget_list_row_pane_ParamLimits

0xe99c,	// (0x00044a8f) cell_ai5_widget_list_row_pane

0xe9b4,	// (0x00044aa7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe9b4,	// (0x00044aa7) cell_ai5_widget_list_row_pane_g1

0xe9c1,	// (0x00044ab4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe9c1,	// (0x00044ab4) cell_ai5_widget_list_row_pane_t1

0xe9ec,	// (0x00044adf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe9ec,	// (0x00044adf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x00045fc2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x00045fc2) cell_ai5_widget_list_row_pane_t

0xec7a,	// (0x00044d6d) main_fep_vtchi_ss_pane

0x87a6,	// (0x0003e899) popup_fep_char_pre_window

0x87ae,	// (0x0003e8a1) popup_fep_ituss_window

0xea3e,	// (0x00044b31) popup_fep_vkbss_window

0x2a9a,	// (0x00038b8d) grid_vkbss_keypad_pane_ParamLimits

0x2a9a,	// (0x00038b8d) grid_vkbss_keypad_pane

0x881c,	// (0x0003e90f) ituss_keypad_pane

0x205c,	// (0x0003814f) aid_vkbss_key_offset_ParamLimits

0x205c,	// (0x0003814f) aid_vkbss_key_offset

0xb862,	// (0x00041955) cell_vkbss_key_pane_ParamLimits

0xb862,	// (0x00041955) cell_vkbss_key_pane

0x8828,	// (0x0003e91b) bg_cell_vkbss_key_g1_ParamLimits

0x8828,	// (0x0003e91b) bg_cell_vkbss_key_g1

0xea4d,	// (0x00044b40) cell_vkbss_key_3p_pane_ParamLimits

0xea4d,	// (0x00044b40) cell_vkbss_key_3p_pane

0xea83,	// (0x00044b76) cell_vkbss_key_g1_ParamLimits

0xea83,	// (0x00044b76) cell_vkbss_key_g1

0xeab9,	// (0x00044bac) cell_vkbss_key_t1_ParamLimits

0xeab9,	// (0x00044bac) cell_vkbss_key_t1

0x20c6,	// (0x000381b9) cell_ituss_key_pane_ParamLimits

0x20c6,	// (0x000381b9) cell_ituss_key_pane

0x88fc,	// (0x0003e9ef) bg_cell_ituss_key_g1_ParamLimits

0x88fc,	// (0x0003e9ef) bg_cell_ituss_key_g1

0x8908,	// (0x0003e9fb) cell_ituss_key_pane_g1_ParamLimits

0x8908,	// (0x0003e9fb) cell_ituss_key_pane_g1

0x20d7,	// (0x000381ca) cell_ituss_key_pane_g2_ParamLimits

0x20d7,	// (0x000381ca) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x00045fc9) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x00045fc9) cell_ituss_key_pane_g

0x215b,	// (0x0003824e) cell_ituss_key_t1_ParamLimits

0x215b,	// (0x0003824e) cell_ituss_key_t1

0x2195,	// (0x00038288) cell_ituss_key_t2_ParamLimits

0x2195,	// (0x00038288) cell_ituss_key_t2

0x21c7,	// (0x000382ba) cell_ituss_key_t3_ParamLimits

0x21c7,	// (0x000382ba) cell_ituss_key_t3

0x21f8,	// (0x000382eb) cell_ituss_key_t4_ParamLimits

0x21f8,	// (0x000382eb) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00045fd6) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00045fd6) cell_ituss_key_t

0xeb15,	// (0x00044c08) cell_vkbss_key_3p_pane_g1

0xeb1d,	// (0x00044c10) cell_vkbss_key_3p_pane_g2

0xeb25,	// (0x00044c18) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00045fe1) cell_vkbss_key_3p_pane_g

0x2773,	// (0x00038866) bg_popup_fep_char_preview_window_cp02

0x8946,	// (0x0003ea39) popup_fep_char_pre_window_t1

0xe667,	// (0x0004475a) main_ai5_sk_pane

0x8370,	// (0x0003e463) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x837c,	// (0x0003e46f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8391,	// (0x0003e484) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x839d,	// (0x0003e490) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x00045fad) cell_contacts_ai5_widget_pane_g_ParamLimits

0x83a9,	// (0x0003e49c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbf6e,	// (0x00042061) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb2d,	// (0x00044c20) main_ai5_sk_pane_g1

0x346e,	// (0x00039561) popup_query_code_window_g1

0xea2f,	// (0x00044b22) popup_fep_vkb_icf_pane

0x87f3,	// (0x0003e8e6) popup_fep_vtchi_icf_pane

0x895d,	// (0x0003ea50) bg_icf_pane

0x895d,	// (0x0003ea50) list_vkb_icf_pane

0x8969,	// (0x0003ea5c) bg_icf_pane_cp01

0x897c,	// (0x0003ea6f) vtchi_icf_list_pane

0xeb82,	// (0x00044c75) list_vkb_icf_pane_t1_ParamLimits

0xeb82,	// (0x00044c75) list_vkb_icf_pane_t1

0x89f8,	// (0x0003eaeb) vtchi_icf_list_pane_t1_ParamLimits

0x89f8,	// (0x0003eaeb) vtchi_icf_list_pane_t1

0x87ae,	// (0x0003e8a1) popup_fep_ituss_window_ParamLimits

0x87f3,	// (0x0003e8e6) popup_fep_vtchi_icf_pane_ParamLimits

0x881c,	// (0x0003e90f) ituss_keypad_pane_ParamLimits

0x2052,	// (0x00038145) ituss_sks_pane

0x895d,	// (0x0003ea50) bg_icf_pane_ParamLimits

0xea14,	// (0x00044b07) icf_edit_indi_pane_ParamLimits

0xea14,	// (0x00044b07) icf_edit_indi_pane

0x895d,	// (0x0003ea50) list_vkb_icf_pane_ParamLimits

0x8969,	// (0x0003ea5c) bg_icf_pane_cp01_ParamLimits

0x8799,	// (0x0003e88c) icf_edit_indi_pane_cp01_ParamLimits

0x8799,	// (0x0003e88c) icf_edit_indi_pane_cp01

0x897c,	// (0x0003ea6f) vtchi_query_pane

0x7af0,	// (0x0003dbe3) icf_edit_indi_pane_g1_ParamLimits

0x7af0,	// (0x0003dbe3) icf_edit_indi_pane_g1

0xeb99,	// (0x00044c8c) icf_edit_indi_pane_g2_ParamLimits

0xeb99,	// (0x00044c8c) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0004600c) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0004600c) icf_edit_indi_pane_g

0xebad,	// (0x00044ca0) icf_edit_indi_pane_t1

0x8a11,	// (0x0003eb04) bg_input_focus_pane_cp042

0xbea7,	// (0x00041f9a) vtchi_button_pane

0x8a1a,	// (0x0003eb0d) vtchi_query_pane_t1

0x8a28,	// (0x0003eb1b) vtchi_query_pane_t2

0x8a36,	// (0x0003eb29) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00045ffb) vtchi_query_pane_t

0xec7a,	// (0x00044d6d) bg_button_pane_cp13

0x8a44,	// (0x0003eb37) vtchi_button_pane_g1

0x223b,	// (0x0003832e) ituss_sks_pane_g1

0x2246,	// (0x00038339) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00046002) ituss_sks_pane_g

0x8a4c,	// (0x0003eb3f) ituss_sks_pane_t1

0x8a5a,	// (0x0003eb4d) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00046007) ituss_sks_pane_t

0x50b9,	// (0x0003b1ac) indicator_nsta_pane_cp_g1

0x50c2,	// (0x0003b1b5) indicator_nsta_pane_cp_g2

0x50ca,	// (0x0003b1bd) indicator_nsta_pane_cp_g3

0x50d2,	// (0x0003b1c5) indicator_nsta_pane_cp_g4

0x50c2,	// (0x0003b1b5) indicator_nsta_pane_cp_g5

0x50ca,	// (0x0003b1bd) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00045b7f) indicator_nsta_pane_cp_g

0xe47f,	// (0x00044572) cell_graphic2_pane_t2_ParamLimits

0xe47f,	// (0x00044572) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x00045e98) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x00045e98) cell_graphic2_pane_t

0xe4b7,	// (0x000445aa) cell_graphic2_control_pane_t1

0xa2d9,	// (0x000403cc) signal_pane_g3_ParamLimits

0xa2d9,	// (0x000403cc) signal_pane_g3

0xa2ed,	// (0x000403e0) signal_pane_g4_ParamLimits

0xa2ed,	// (0x000403e0) signal_pane_g4

0xe9fe,	// (0x00044af1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe9fe,	// (0x00044af1) cell_ai5_widget_list_row_pane_t3

0x891c,	// (0x0003ea0f) cell_ituss_key_pane_t1_ParamLimits

0x891c,	// (0x0003ea0f) cell_ituss_key_pane_t1

0x30d5,	// (0x000391c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x30d5,	// (0x000391c8) form_field_data_wide_pane_vc_t2

0x30e9,	// (0x000391dc) form_field_data_wide_pane_vc_t3_ParamLimits

0x30e9,	// (0x000391dc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000458d2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000458d2) form_field_data_wide_pane_vc_t

0x4d56,	// (0x0003ae49) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4d56,	// (0x0003ae49) form_field_slider_wide_pane_vc_t3

0x4e2c,	// (0x0003af1f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4e2c,	// (0x0003af1f) form_field_popup_wide_pane_vc_t2

0x4e43,	// (0x0003af36) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4e43,	// (0x0003af36) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00045b6e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00045b6e) form_field_popup_wide_pane_vc_t

0xb6c5,	// (0x000417b8) aid_fshwr2_btn_pane_ParamLimits

0xb6d9,	// (0x000417cc) aid_fshwr2_syb_pane_ParamLimits

0xb6ed,	// (0x000417e0) aid_fshwr2_txt_pane_ParamLimits

0x162a,	// (0x0003771d) fshwr2_bg_pane_ParamLimits

0xb6fd,	// (0x000417f0) fshwr2_func_candi_pane_ParamLimits

0xb71f,	// (0x00041812) fshwr2_hwr_syb_pane_ParamLimits

0xb743,	// (0x00041836) fshwr2_icf_pane_ParamLimits

0xd844,	// (0x00043937) list_double_graphic_pane_vc_g4_ParamLimits

0xd844,	// (0x00043937) list_double_graphic_pane_vc_g4

0x20f7,	// (0x000381ea) cell_ituss_key_pane_g3_ParamLimits

0x20f7,	// (0x000381ea) cell_ituss_key_pane_g3

0x2229,	// (0x0003831c) cell_ituss_key_t5_ParamLimits

0x2229,	// (0x0003831c) cell_ituss_key_t5

0xea3e,	// (0x00044b31) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x00044764) aid_cell_ai5_quarter

0xebad,	// (0x00044ca0) icf_edit_indi_pane_t1_ParamLimits

0xbb07,	// (0x00041bfa) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xbb07,	// (0x00041bfa) aid_tch_indicator_popup_pane_cp2

0xbb1a,	// (0x00041c0d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xbb1a,	// (0x00041c0d) aid_tch_query_popup_data_pane_cp2

0x3416,	// (0x00039509) aid_tch_query_popup_pane_ParamLimits

0x3416,	// (0x00039509) aid_tch_query_popup_pane

0x3416,	// (0x00039509) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3416,	// (0x00039509) aid_tch_query_popup_data_pane_cp1

0x2a9a,	// (0x00038b8d) cell_fshwr2_syb_bg_pane_ParamLimits

0xb838,	// (0x0004192b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb84c,	// (0x0004193f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xea2f,	// (0x00044b22) popup_fep_vkb_icf_pane_ParamLimits

0xb659,	// (0x0004174c) bg_popup_fep_char_preview_window_g10

0xe714,	// (0x00044807) cell_ai5_widget_pane_g11_ParamLimits

0xe714,	// (0x00044807) cell_ai5_widget_pane_g11

0x7d99,	// (0x0003de8c) cell_ai5_widget_pane_g12_ParamLimits

0x7d99,	// (0x0003de8c) cell_ai5_widget_pane_g12

0xe720,	// (0x00044813) cell_ai5_widget_pane_g13_ParamLimits

0xe720,	// (0x00044813) cell_ai5_widget_pane_g13

0xe7dd,	// (0x000448d0) cell_ai5_widget_pane_t11_ParamLimits

0xe7dd,	// (0x000448d0) cell_ai5_widget_pane_t11

0xe7ef,	// (0x000448e2) cell_ai5_widget_pane_t12_ParamLimits

0xe7ef,	// (0x000448e2) cell_ai5_widget_pane_t12

0x2103,	// (0x000381f6) cell_ituss_key_pane_g4_ParamLimits

0x2103,	// (0x000381f6) cell_ituss_key_pane_g4

0x211f,	// (0x00038212) cell_ituss_key_pane_g5_ParamLimits

0x211f,	// (0x00038212) cell_ituss_key_pane_g5

0x213b,	// (0x0003822e) cell_ituss_key_pane_g6_ParamLimits

0x213b,	// (0x0003822e) cell_ituss_key_pane_g6

0x2fd0,	// (0x000390c3) bg_icf_pane_g1

0xeb36,	// (0x00044c29) bg_icf_pane_g2

0xeb40,	// (0x00044c33) bg_icf_pane_g3

0xeb48,	// (0x00044c3b) bg_icf_pane_g4

0xeb52,	// (0x00044c45) bg_icf_pane_g5

0xeb5c,	// (0x00044c4f) bg_icf_pane_g6

0xeb66,	// (0x00044c59) bg_icf_pane_g7

0xeb6e,	// (0x00044c61) bg_icf_pane_g8

0xeb78,	// (0x00044c6b) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00045fe8) bg_icf_pane_g

0x8809,	// (0x0003e8fc) popup_hyb_candi_window_ParamLimits

0x8809,	// (0x0003e8fc) popup_hyb_candi_window

0x3044,	// (0x00039137) bg_popup_sub_pane_cp01_ParamLimits

0x3044,	// (0x00039137) bg_popup_sub_pane_cp01

0x8a95,	// (0x0003eb88) entry_hyb_candi_pane_ParamLimits

0x8a95,	// (0x0003eb88) entry_hyb_candi_pane

0x8aa4,	// (0x0003eb97) grid_hyb_candi_pane_ParamLimits

0x8aa4,	// (0x0003eb97) grid_hyb_candi_pane

0x8ab9,	// (0x0003ebac) grid_hyb_phrase_pane_ParamLimits

0x8ab9,	// (0x0003ebac) grid_hyb_phrase_pane

0x8ac8,	// (0x0003ebbb) cell_hyb_candi_pane_ParamLimits

0x8ac8,	// (0x0003ebbb) cell_hyb_candi_pane

0xbeb0,	// (0x00041fa3) cell_hyb_candi_scroll_pane

0xf3da,	// (0x000454cd) cell_hyb_candi_pane_g1

0x8ae4,	// (0x0003ebd7) cell_hyb_candi_pane_t1

0x8af2,	// (0x0003ebe5) cell_hyb_phrase_pane

0xf3da,	// (0x000454cd) cell_hyb_phrase_pane_g1

0x8afb,	// (0x0003ebee) cell_hyb_phrase_pane_t1

0x8b09,	// (0x0003ebfc) entry_hyb_candi_pane_t1

0x2773,	// (0x00038866) input_focus_pane_cp06

0x8b17,	// (0x0003ec0a) cell_hyb_candi_scroll_pane_g1

0x8b1f,	// (0x0003ec12) cell_hyb_candi_scroll_pane_g1_aid

0x8b27,	// (0x0003ec1a) cell_hyb_candi_scroll_pane_g2

0x8b2f,	// (0x0003ec22) cell_hyb_candi_scroll_pane_g2_aid

0x8b37,	// (0x0003ec2a) cell_hyb_candi_scroll_pane_g3

0x8b3f,	// (0x0003ec32) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
