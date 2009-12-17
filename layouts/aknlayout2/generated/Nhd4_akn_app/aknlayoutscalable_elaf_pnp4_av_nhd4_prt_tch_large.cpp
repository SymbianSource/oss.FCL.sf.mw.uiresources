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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002c868 };

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
0x9688,	// (0x00035ef0) Screen

0x9694,	// (0x00035efc) application_window_ParamLimits

0x9694,	// (0x00035efc) application_window

0x4ed8,	// (0x00031740) screen_g1

0x96f0,	// (0x00035f58) area_bottom_pane_ParamLimits

0x96f0,	// (0x00035f58) area_bottom_pane

0x97b0,	// (0x00036018) area_top_pane_ParamLimits

0x97b0,	// (0x00036018) area_top_pane

0x9844,	// (0x000360ac) main_pane_ParamLimits

0x9844,	// (0x000360ac) main_pane

0x4ee2,	// (0x0003174a) misc_graphics

0xbe48,	// (0x000386b0) battery_pane_ParamLimits

0xbe48,	// (0x000386b0) battery_pane

0x6c50,	// (0x000334b8) bg_status_flat_pane_g8

0x6c58,	// (0x000334c0) bg_status_flat_pane_g9

0x63b6,	// (0x00032c1e) context_pane_ParamLimits

0x63b6,	// (0x00032c1e) context_pane

0xbf7c,	// (0x000387e4) navi_pane_ParamLimits

0xbf7c,	// (0x000387e4) navi_pane

0xbfe8,	// (0x00038850) signal_pane_ParamLimits

0xbfe8,	// (0x00038850) signal_pane

0x0008,

0xf8b7,	// (0x0003c11f) bg_status_flat_pane_g

0xc04d,	// (0x000388b5) status_pane_g1_ParamLimits

0xc04d,	// (0x000388b5) status_pane_g1

0xc061,	// (0x000388c9) status_pane_g2_ParamLimits

0xc061,	// (0x000388c9) status_pane_g2

0x641b,	// (0x00032c83) status_pane_g3_ParamLimits

0x641b,	// (0x00032c83) status_pane_g3

0x0004,

0xf7e5,	// (0x0003c04d) status_pane_g_ParamLimits

0xf7e5,	// (0x0003c04d) status_pane_g

0xc06d,	// (0x000388d5) title_pane_ParamLimits

0xc06d,	// (0x000388d5) title_pane

0xc0aa,	// (0x00038912) uni_indicator_pane_ParamLimits

0xc0aa,	// (0x00038912) uni_indicator_pane

0x61d5,	// (0x00032a3d) bg_list_pane_ParamLimits

0x61d5,	// (0x00032a3d) bg_list_pane

0xa620,	// (0x00036e88) find_pane

0xb960,	// (0x000381c8) listscroll_app_pane_ParamLimits

0xb960,	// (0x000381c8) listscroll_app_pane

0x6201,	// (0x00032a69) listscroll_form_pane

0xa628,	// (0x00036e90) listscroll_gen_pane_ParamLimits

0xa628,	// (0x00036e90) listscroll_gen_pane

0x6201,	// (0x00032a69) listscroll_set_pane

0x9edd,	// (0x00036745) main_idle_act_pane

0x5fbb,	// (0x00032823) main_idle_trad_pane

0x5fbb,	// (0x00032823) main_list_empty_pane

0x61f5,	// (0x00032a5d) main_midp_pane

0x621b,	// (0x00032a83) main_pane_g1_ParamLimits

0x621b,	// (0x00032a83) main_pane_g1

0xb96c,	// (0x000381d4) popup_ai_message_window_ParamLimits

0xb96c,	// (0x000381d4) popup_ai_message_window

0xb9ea,	// (0x00038252) popup_fep_china_uni_window_ParamLimits

0xb9ea,	// (0x00038252) popup_fep_china_uni_window

0x625b,	// (0x00032ac3) popup_fep_japan_candidate_window_ParamLimits

0x625b,	// (0x00032ac3) popup_fep_japan_candidate_window

0x6279,	// (0x00032ae1) popup_fep_japan_predictive_window_ParamLimits

0x6279,	// (0x00032ae1) popup_fep_japan_predictive_window

0xba44,	// (0x000382ac) popup_find_window

0xba51,	// (0x000382b9) popup_grid_graphic_window_ParamLimits

0xba51,	// (0x000382b9) popup_grid_graphic_window

0x62a9,	// (0x00032b11) popup_large_graphic_colour_window

0xba77,	// (0x000382df) popup_menu_window_ParamLimits

0xba77,	// (0x000382df) popup_menu_window

0xbc31,	// (0x00038499) popup_note_image_window

0xbc1d,	// (0x00038485) popup_note_wait_window_ParamLimits

0xbc1d,	// (0x00038485) popup_note_wait_window

0xbc1d,	// (0x00038485) popup_note_window_ParamLimits

0xbc1d,	// (0x00038485) popup_note_window

0xbc87,	// (0x000384ef) popup_query_code_window_ParamLimits

0xbc87,	// (0x000384ef) popup_query_code_window

0x62cf,	// (0x00032b37) popup_query_data_code_window_ParamLimits

0x62cf,	// (0x00032b37) popup_query_data_code_window

0xbc9b,	// (0x00038503) popup_query_data_window_ParamLimits

0xbc9b,	// (0x00038503) popup_query_data_window

0xbcb3,	// (0x0003851b) popup_query_sat_info_window_ParamLimits

0xbcb3,	// (0x0003851b) popup_query_sat_info_window

0xbcec,	// (0x00038554) popup_snote_single_graphic_window_ParamLimits

0xbcec,	// (0x00038554) popup_snote_single_graphic_window

0xbcec,	// (0x00038554) popup_snote_single_text_window_ParamLimits

0xbcec,	// (0x00038554) popup_snote_single_text_window

0x62e6,	// (0x00032b4e) popup_sub_window_general

0x632c,	// (0x00032b94) popup_window_general_ParamLimits

0x632c,	// (0x00032b94) popup_window_general

0x6341,	// (0x00032ba9) power_save_pane

0xa4d6,	// (0x00036d3e) control_pane_g1_ParamLimits

0xa4d6,	// (0x00036d3e) control_pane_g1

0xa4ff,	// (0x00036d67) control_pane_g2_ParamLimits

0xa4ff,	// (0x00036d67) control_pane_g2

0x61af,	// (0x00032a17) control_pane_g3_ParamLimits

0x61af,	// (0x00032a17) control_pane_g3

0x0007,

0xf7cd,	// (0x0003c035) control_pane_g_ParamLimits

0xf7cd,	// (0x0003c035) control_pane_g

0xa53b,	// (0x00036da3) control_pane_t1_ParamLimits

0xa53b,	// (0x00036da3) control_pane_t1

0xa58d,	// (0x00036df5) control_pane_t2_ParamLimits

0xa58d,	// (0x00036df5) control_pane_t2

0x0002,

0xf7de,	// (0x0003c046) control_pane_t_ParamLimits

0xf7de,	// (0x0003c046) control_pane_t

0x60d0,	// (0x00032938) navi_navi_volume_pane_cp1

0x60d9,	// (0x00032941) status_small_icon_pane

0x60e1,	// (0x00032949) status_small_pane_g1_ParamLimits

0x60e1,	// (0x00032949) status_small_pane_g1

0x6115,	// (0x0003297d) status_small_pane_g2_ParamLimits

0x6115,	// (0x0003297d) status_small_pane_g2

0x6121,	// (0x00032989) status_small_pane_g3_ParamLimits

0x6121,	// (0x00032989) status_small_pane_g3

0x612d,	// (0x00032995) status_small_pane_g4_ParamLimits

0x612d,	// (0x00032995) status_small_pane_g4

0x6139,	// (0x000329a1) status_small_pane_g5_ParamLimits

0x6139,	// (0x000329a1) status_small_pane_g5

0x6148,	// (0x000329b0) status_small_pane_g6_ParamLimits

0x6148,	// (0x000329b0) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003c024) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003c024) status_small_pane_g

0x6178,	// (0x000329e0) status_small_pane_t1

0x619b,	// (0x00032a03) status_small_wait_pane_ParamLimits

0x619b,	// (0x00032a03) status_small_wait_pane

0xa1eb,	// (0x00036a53) aid_levels_signal_ParamLimits

0xa1eb,	// (0x00036a53) aid_levels_signal

0xa1fd,	// (0x00036a65) signal_pane_g1_ParamLimits

0xa1fd,	// (0x00036a65) signal_pane_g1

0xa212,	// (0x00036a7a) signal_pane_g2_ParamLimits

0xa212,	// (0x00036a7a) signal_pane_g2

0x0001,

0xf751,	// (0x0003bfb9) signal_pane_g_ParamLimits

0xf751,	// (0x0003bfb9) signal_pane_g

0x5aff,	// (0x00032367) context_pane_g1

0x9a75,	// (0x000362dd) title_pane_g1

0x9a9f,	// (0x00036307) title_pane_t1

0x4ef8,	// (0x00031760) title_pane_t2

0x4f1e,	// (0x00031786) title_pane_t3

0x0002,

0xf59b,	// (0x0003be03) title_pane_t

0xc0c2,	// (0x0003892a) aid_levels_battery_ParamLimits

0xc0c2,	// (0x0003892a) aid_levels_battery

0xc0d6,	// (0x0003893e) battery_pane_g1_ParamLimits

0xc0d6,	// (0x0003893e) battery_pane_g1

0xc0ec,	// (0x00038954) battery_pane_g2_ParamLimits

0xc0ec,	// (0x00038954) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003c058) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003c058) battery_pane_g

0xc37e,	// (0x00038be6) uni_indicator_pane_g1

0xc393,	// (0x00038bfb) uni_indicator_pane_g2

0xc3a9,	// (0x00038c11) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0003c1c7) uni_indicator_pane_g

0x5e2b,	// (0x00032693) navi_icon_pane_ParamLimits

0x5e2b,	// (0x00032693) navi_icon_pane

0x5d72,	// (0x000325da) navi_midp_pane

0x5e47,	// (0x000326af) navi_navi_pane

0x5e51,	// (0x000326b9) navi_text_pane_ParamLimits

0x5e51,	// (0x000326b9) navi_text_pane

0x4ed8,	// (0x00031740) status_small_wait_pane_g1

0x51f9,	// (0x00031a61) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0003c1c2) status_small_wait_pane_g

0xc323,	// (0x00038b8b) navi_navi_icon_text_pane

0xc32b,	// (0x00038b93) navi_navi_pane_g1_ParamLimits

0xc32b,	// (0x00038b93) navi_navi_pane_g1

0xc33d,	// (0x00038ba5) navi_navi_pane_g2_ParamLimits

0xc33d,	// (0x00038ba5) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0003c190) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0003c190) navi_navi_pane_g

0x71d3,	// (0x00033a3b) navi_navi_tabs_pane

0xc34f,	// (0x00038bb7) navi_navi_text_pane

0xc323,	// (0x00038b8b) navi_navi_volume_pane

0xc30e,	// (0x00038b76) navi_text_pane_t1

0xc2ff,	// (0x00038b67) navi_icon_pane_g1

0x7114,	// (0x0003397c) navi_navi_text_pane_t1

0xa8c3,	// (0x0003712b) navi_navi_volume_pane_g1

0xa8cb,	// (0x00037133) volume_small_pane

0xc271,	// (0x00038ad9) navi_navi_icon_text_pane_g1

0xc279,	// (0x00038ae1) navi_navi_icon_text_pane_t1

0x5e47,	// (0x000326af) navi_tabs_2_long_pane

0x5e47,	// (0x000326af) navi_tabs_2_pane

0x5e47,	// (0x000326af) navi_tabs_3_long_pane

0x5e47,	// (0x000326af) navi_tabs_3_pane

0x5e47,	// (0x000326af) navi_tabs_4_pane

0xa8a3,	// (0x0003710b) tabs_2_active_pane_ParamLimits

0xa8a3,	// (0x0003710b) tabs_2_active_pane

0xa8b3,	// (0x0003711b) tabs_2_passive_pane_ParamLimits

0xa8b3,	// (0x0003711b) tabs_2_passive_pane

0xa871,	// (0x000370d9) tabs_3_active_pane_ParamLimits

0xa871,	// (0x000370d9) tabs_3_active_pane

0xa881,	// (0x000370e9) tabs_3_passive_pane_ParamLimits

0xa881,	// (0x000370e9) tabs_3_passive_pane

0xa892,	// (0x000370fa) tabs_3_passive_pane_cp_ParamLimits

0xa892,	// (0x000370fa) tabs_3_passive_pane_cp

0xa82d,	// (0x00037095) tabs_4_active_pane_ParamLimits

0xa82d,	// (0x00037095) tabs_4_active_pane

0xa83e,	// (0x000370a6) tabs_4_passive_pane_ParamLimits

0xa83e,	// (0x000370a6) tabs_4_passive_pane

0xa84f,	// (0x000370b7) tabs_4_passive_pane_cp_ParamLimits

0xa84f,	// (0x000370b7) tabs_4_passive_pane_cp

0xa860,	// (0x000370c8) tabs_4_passive_pane_cp2_ParamLimits

0xa860,	// (0x000370c8) tabs_4_passive_pane_cp2

0xa809,	// (0x00037071) tabs_2_long_active_pane_ParamLimits

0xa809,	// (0x00037071) tabs_2_long_active_pane

0xa81b,	// (0x00037083) tabs_2_long_passive_pane_ParamLimits

0xa81b,	// (0x00037083) tabs_2_long_passive_pane

0xa7c4,	// (0x0003702c) tabs_3_long_active_pane_ParamLimits

0xa7c4,	// (0x0003702c) tabs_3_long_active_pane

0xa7dd,	// (0x00037045) tabs_3_long_passive_pane_ParamLimits

0xa7dd,	// (0x00037045) tabs_3_long_passive_pane

0xa7f0,	// (0x00037058) tabs_3_long_passive_pane_cp_ParamLimits

0xa7f0,	// (0x00037058) tabs_3_long_passive_pane_cp

0xa76a,	// (0x00036fd2) volume_small_pane_g1

0xa773,	// (0x00036fdb) volume_small_pane_g2

0xa77c,	// (0x00036fe4) volume_small_pane_g3

0xa785,	// (0x00036fed) volume_small_pane_g4

0xa78e,	// (0x00036ff6) volume_small_pane_g5

0xa797,	// (0x00036fff) volume_small_pane_g6

0xa7a0,	// (0x00037008) volume_small_pane_g7

0xa7a9,	// (0x00037011) volume_small_pane_g8

0xa7b2,	// (0x0003701a) volume_small_pane_g9

0xa7bb,	// (0x00037023) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0003c15c) volume_small_pane_g

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp2_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp2

0x9b07,	// (0x0003636f) tabs_3_active_pane_g1

0x9b0f,	// (0x00036377) tabs_3_active_pane_t1

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp2_ParamLimits

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp2

0x9b07,	// (0x0003636f) tabs_3_passive_pane_g1

0x9b0f,	// (0x00036377) tabs_3_passive_pane_t1

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp3_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp3

0x9b21,	// (0x00036389) tabs_4_active_pane_g1

0x9b29,	// (0x00036391) tabs_4_active_pane_t1

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp3_ParamLimits

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp3

0x9b21,	// (0x00036389) tabs_4_1_passive_pane_g1

0x9b29,	// (0x00036391) tabs_4_1_passive_pane_t1

0x61f5,	// (0x00032a5d) list_highlight_pane_cp2

0xc421,	// (0x00038c89) list_set_pane_ParamLimits

0xc421,	// (0x00038c89) list_set_pane

0xc4c3,	// (0x00038d2b) main_pane_set_t1_ParamLimits

0xc4c3,	// (0x00038d2b) main_pane_set_t1

0xc4e3,	// (0x00038d4b) main_pane_set_t2_ParamLimits

0xc4e3,	// (0x00038d4b) main_pane_set_t2

0xc4f7,	// (0x00038d5f) main_pane_set_t3_ParamLimits

0xc4f7,	// (0x00038d5f) main_pane_set_t3

0xc509,	// (0x00038d71) main_pane_set_t4_ParamLimits

0xc509,	// (0x00038d71) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0003c22c) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0003c22c) main_pane_set_t

0xc51b,	// (0x00038d83) setting_code_pane

0xc525,	// (0x00038d8d) setting_slider_graphic_pane

0xc525,	// (0x00038d8d) setting_slider_pane

0xc525,	// (0x00038d8d) setting_text_pane

0xc525,	// (0x00038d8d) setting_volume_pane

0x9b3b,	// (0x000363a3) volume_set_pane

0x4f3e,	// (0x000317a6) bg_set_opt_pane_cp

0x9b43,	// (0x000363ab) setting_slider_pane_t1

0x9b5c,	// (0x000363c4) setting_slider_pane_t2

0x9b75,	// (0x000363dd) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003be0a) setting_slider_pane_t

0x9b8c,	// (0x000363f4) slider_set_pane

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp2

0x4f4c,	// (0x000317b4) setting_slider_graphic_pane_g1

0x9ba2,	// (0x0003640a) setting_slider_graphic_pane_t1

0x9bb1,	// (0x00036419) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003be11) setting_slider_graphic_pane_t

0x9bc0,	// (0x00036428) slider_set_pane_cp

0x4ee2,	// (0x0003174a) input_focus_pane_cp1

0x763a,	// (0x00033ea2) list_set_text_pane

0x4ed8,	// (0x00031740) setting_text_pane_g1

0x4ee2,	// (0x0003174a) input_focus_pane_cp2

0x4ed8,	// (0x00031740) setting_code_pane_g1

0x4f55,	// (0x000317bd) setting_code_pane_t1

0x8864,	// (0x000350cc) set_text_pane_t1_ParamLimits

0x8864,	// (0x000350cc) set_text_pane_t1

0x55ec,	// (0x00031e54) set_opt_bg_pane_g1

0x55f4,	// (0x00031e5c) set_opt_bg_pane_g2

0x761a,	// (0x00033e82) set_opt_bg_pane_g3

0x5604,	// (0x00031e6c) set_opt_bg_pane_g4

0x560c,	// (0x00031e74) set_opt_bg_pane_g5

0x5614,	// (0x00031e7c) set_opt_bg_pane_g6

0x7622,	// (0x00033e8a) set_opt_bg_pane_g7

0x762a,	// (0x00033e92) set_opt_bg_pane_g8

0x7632,	// (0x00033e9a) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0003c219) set_opt_bg_pane_g

0x760d,	// (0x00033e75) slider_set_pane_g1

0xa938,	// (0x000371a0) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0003c20a) slider_set_pane_g

0xa8d4,	// (0x0003713c) volume_set_pane_g1

0xa8dc,	// (0x00037144) volume_set_pane_g2

0xa8e4,	// (0x0003714c) volume_set_pane_g3

0xa8ec,	// (0x00037154) volume_set_pane_g4

0xa8f4,	// (0x0003715c) volume_set_pane_g5

0xa8fc,	// (0x00037164) volume_set_pane_g6

0xa904,	// (0x0003716c) volume_set_pane_g7

0xa90c,	// (0x00037174) volume_set_pane_g8

0xa914,	// (0x0003717c) volume_set_pane_g9

0xa91c,	// (0x00037184) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0003c1e2) volume_set_pane_g

0x9bc8,	// (0x00036430) indicator_pane_ParamLimits

0x9bc8,	// (0x00036430) indicator_pane

0x9bd4,	// (0x0003643c) main_idle_pane_g2_ParamLimits

0x9bd4,	// (0x0003643c) main_idle_pane_g2

0x9bfc,	// (0x00036464) main_pane_idle_g1_ParamLimits

0x9bfc,	// (0x00036464) main_pane_idle_g1

0x4f63,	// (0x000317cb) popup_clock_digital_analogue_window_ParamLimits

0x4f63,	// (0x000317cb) popup_clock_digital_analogue_window

0x9c09,	// (0x00036471) soft_indicator_pane_ParamLimits

0x9c09,	// (0x00036471) soft_indicator_pane

0x9c15,	// (0x0003647d) wallpaper_pane_ParamLimits

0x9c15,	// (0x0003647d) wallpaper_pane

0x4ed8,	// (0x00031740) wallpaper_pane_g1

0x9c21,	// (0x00036489) indicator_pane_g1_ParamLimits

0x9c21,	// (0x00036489) indicator_pane_g1

0x7781,	// (0x00033fe9) navi_navi_icon_text_pane_srt_g1

0x4f91,	// (0x000317f9) soft_indicator_pane_t1

0x4fab,	// (0x00031813) aid_ps_area_pane

0x9c2d,	// (0x00036495) aid_ps_clock_pane

0x4fbc,	// (0x00031824) aid_ps_indicator_pane

0x4fc8,	// (0x00031830) indicator_ps_pane_ParamLimits

0x4fc8,	// (0x00031830) indicator_ps_pane

0x4fd7,	// (0x0003183f) power_save_pane_g1_ParamLimits

0x4fd7,	// (0x0003183f) power_save_pane_g1

0x4fe3,	// (0x0003184b) power_save_pane_g2_ParamLimits

0x4fe3,	// (0x0003184b) power_save_pane_g2

0x96a4,	// (0x00035f0c) aid_navinavi_width_pane

0x4fab,	// (0x00031813) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003be16) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003be16) power_save_pane_g

0x4ff1,	// (0x00031859) power_save_pane_t1_ParamLimits

0x4ff1,	// (0x00031859) power_save_pane_t1

0x9c2d,	// (0x00036495) aid_ps_clock_pane_ParamLimits

0x4fbc,	// (0x00031824) aid_ps_indicator_pane_ParamLimits

0x5003,	// (0x0003186b) power_save_pane_t4_ParamLimits

0x5003,	// (0x0003186b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003be1b) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003be1b) power_save_pane_t

0x502d,	// (0x00031895) power_save_t3_ParamLimits

0x502d,	// (0x00031895) power_save_t3

0x5018,	// (0x00031880) power_save_t2_ParamLimits

0x5018,	// (0x00031880) power_save_t2

0x5042,	// (0x000318aa) indicator_ps_pane_g1

0x9c3b,	// (0x000364a3) ai_gene_pane_ParamLimits

0x9c3b,	// (0x000364a3) ai_gene_pane

0x9c47,	// (0x000364af) ai_links_pane_ParamLimits

0x9c47,	// (0x000364af) ai_links_pane

0x9c53,	// (0x000364bb) indicator_pane_cp1_ParamLimits

0x9c53,	// (0x000364bb) indicator_pane_cp1

0x9c5f,	// (0x000364c7) main_pane_idle_g1_cp_ParamLimits

0x9c5f,	// (0x000364c7) main_pane_idle_g1_cp

0x504b,	// (0x000318b3) popup_ai_links_title_window

0x9c6b,	// (0x000364d3) soft_indicator_pane_cp1_ParamLimits

0x9c6b,	// (0x000364d3) soft_indicator_pane_cp1

0x7461,	// (0x00033cc9) ai_links_pane_g1

0x746a,	// (0x00033cd2) grid_ai_links_pane

0xc373,	// (0x00038bdb) ai_gene_pane_1

0x744f,	// (0x00033cb7) ai_gene_pane_2

0x7458,	// (0x00033cc0) list_highlight_pane_cp4

0xc357,	// (0x00038bbf) cell_ai_link_pane_ParamLimits

0xc357,	// (0x00038bbf) cell_ai_link_pane

0x7429,	// (0x00033c91) cell_ai_link_pane_g1

0x51f9,	// (0x00031a61) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0003c1bd) cell_ai_link_pane_g

0x4ee2,	// (0x0003174a) grid_highlight_cp2

0x4ee2,	// (0x0003174a) bg_popup_sub_pane_cp1

0x5062,	// (0x000318ca) popup_ai_links_title_window_t1

0x7377,	// (0x00033bdf) ai_gene_pane_1_g1_ParamLimits

0x7377,	// (0x00033bdf) ai_gene_pane_1_g1

0x7383,	// (0x00033beb) ai_gene_pane_1_g2_ParamLimits

0x7383,	// (0x00033beb) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0003c1b3) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0003c1b3) ai_gene_pane_1_g

0x7390,	// (0x00033bf8) ai_gene_pane_1_t1_ParamLimits

0x7390,	// (0x00033bf8) ai_gene_pane_1_t1

0x73c4,	// (0x00033c2c) grid_ai_soft_ind_pane

0x7362,	// (0x00033bca) ai_gene_pane_2_t1_ParamLimits

0x7362,	// (0x00033bca) ai_gene_pane_2_t1

0x9c77,	// (0x000364df) main_pane_empty_t1_ParamLimits

0x9c77,	// (0x000364df) main_pane_empty_t1

0x9c8f,	// (0x000364f7) main_pane_empty_t2_ParamLimits

0x9c8f,	// (0x000364f7) main_pane_empty_t2

0x9ca4,	// (0x0003650c) main_pane_empty_t3_ParamLimits

0x9ca4,	// (0x0003650c) main_pane_empty_t3

0x9cb6,	// (0x0003651e) main_pane_empty_t4_ParamLimits

0x9cb6,	// (0x0003651e) main_pane_empty_t4

0x9cc8,	// (0x00036530) main_pane_empty_t5_ParamLimits

0x9cc8,	// (0x00036530) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003be20) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003be20) main_pane_empty_t

0x563d,	// (0x00031ea5) bg_popup_window_pane_ParamLimits

0x563d,	// (0x00031ea5) bg_popup_window_pane

0x7122,	// (0x0003398a) find_popup_pane_cp2_ParamLimits

0x7122,	// (0x0003398a) find_popup_pane_cp2

0x712e,	// (0x00033996) heading_pane_ParamLimits

0x712e,	// (0x00033996) heading_pane

0x4ee2,	// (0x0003174a) bg_popup_sub_pane

0xc293,	// (0x00038afb) bg_popup_window_pane_g1_ParamLimits

0xc293,	// (0x00038afb) bg_popup_window_pane_g1

0xc29f,	// (0x00038b07) bg_popup_window_pane_g2_ParamLimits

0xc29f,	// (0x00038b07) bg_popup_window_pane_g2

0xc2ab,	// (0x00038b13) bg_popup_window_pane_g3_ParamLimits

0xc2ab,	// (0x00038b13) bg_popup_window_pane_g3

0xc2b7,	// (0x00038b1f) bg_popup_window_pane_g4_ParamLimits

0xc2b7,	// (0x00038b1f) bg_popup_window_pane_g4

0xc2c3,	// (0x00038b2b) bg_popup_window_pane_g5_ParamLimits

0xc2c3,	// (0x00038b2b) bg_popup_window_pane_g5

0xc2cf,	// (0x00038b37) bg_popup_window_pane_g6_ParamLimits

0xc2cf,	// (0x00038b37) bg_popup_window_pane_g6

0xc2db,	// (0x00038b43) bg_popup_window_pane_g7_ParamLimits

0xc2db,	// (0x00038b43) bg_popup_window_pane_g7

0xc2e7,	// (0x00038b4f) bg_popup_window_pane_g8_ParamLimits

0xc2e7,	// (0x00038b4f) bg_popup_window_pane_g8

0xc2f3,	// (0x00038b5b) bg_popup_window_pane_g9_ParamLimits

0xc2f3,	// (0x00038b5b) bg_popup_window_pane_g9

0x7108,	// (0x00033970) bg_popup_window_pane_g10_ParamLimits

0x7108,	// (0x00033970) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0003c17b) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0003c17b) bg_popup_window_pane_g

0x70bf,	// (0x00033927) bg_popup_heading_pane_ParamLimits

0x70bf,	// (0x00033927) bg_popup_heading_pane

0xaa76,	// (0x000372de) tabs_4_passive_pane_cp_srt_ParamLimits

0xaa76,	// (0x000372de) tabs_4_passive_pane_cp_srt

0xaa88,	// (0x000372f0) tabs_4_passive_pane_srt_ParamLimits

0x70d3,	// (0x0003393b) heading_pane_g2

0xaa88,	// (0x000372f0) tabs_4_passive_pane_srt

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp3_srt

0x70db,	// (0x00033943) heading_pane_t1_ParamLimits

0x70db,	// (0x00033943) heading_pane_t1

0x70f2,	// (0x0003395a) heading_pane_t2_ParamLimits

0x70f2,	// (0x0003395a) heading_pane_t2

0x0001,

0xf90e,	// (0x0003c176) heading_pane_t_ParamLimits

0xf90e,	// (0x0003c176) heading_pane_t

0x6c18,	// (0x00033480) bg_popup_heading_pane_g1

0x6ca9,	// (0x00033511) bg_popup_heading_pane_g2

0x6cb3,	// (0x0003351b) bg_popup_heading_pane_g3

0x6cbd,	// (0x00033525) bg_popup_heading_pane_g4

0x6cc7,	// (0x0003352f) bg_popup_heading_pane_g5

0x6cd1,	// (0x00033539) bg_popup_heading_pane_g6

0x6cd9,	// (0x00033541) bg_popup_heading_pane_g7

0x6ce1,	// (0x00033549) bg_popup_heading_pane_g8

0x6ceb,	// (0x00033553) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0003c132) bg_popup_heading_pane_g

0x650f,	// (0x00032d77) bg_popup_sub_pane_g1

0x651f,	// (0x00032d87) bg_popup_sub_pane_g2

0x6517,	// (0x00032d7f) bg_popup_sub_pane_g3

0x652f,	// (0x00032d97) bg_popup_sub_pane_g4

0x6527,	// (0x00032d8f) bg_popup_sub_pane_g5

0x6537,	// (0x00032d9f) bg_popup_sub_pane_g6

0x653f,	// (0x00032da7) bg_popup_sub_pane_g7

0x654f,	// (0x00032db7) bg_popup_sub_pane_g8

0x6547,	// (0x00032daf) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0003c10c) bg_popup_sub_pane_g

0x4f30,	// (0x00031798) bg_popup_window_pane_cp5_ParamLimits

0x4f30,	// (0x00031798) bg_popup_window_pane_cp5

0x507f,	// (0x000318e7) popup_note_window_g1_ParamLimits

0x507f,	// (0x000318e7) popup_note_window_g1

0x508b,	// (0x000318f3) popup_note_window_t1_ParamLimits

0x508b,	// (0x000318f3) popup_note_window_t1

0x509d,	// (0x00031905) popup_note_window_t2_ParamLimits

0x509d,	// (0x00031905) popup_note_window_t2

0x50af,	// (0x00031917) popup_note_window_t3_ParamLimits

0x50af,	// (0x00031917) popup_note_window_t3

0x50c1,	// (0x00031929) popup_note_window_t4_ParamLimits

0x50c1,	// (0x00031929) popup_note_window_t4

0x50e9,	// (0x00031951) popup_note_window_t5_ParamLimits

0x50e9,	// (0x00031951) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003be2b) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003be2b) popup_note_window_t

0x510d,	// (0x00031975) bg_popup_window_pane_cp6_ParamLimits

0x510d,	// (0x00031975) bg_popup_window_pane_cp6

0x6b8c,	// (0x000333f4) popup_note_image_window_g1_ParamLimits

0x6b8c,	// (0x000333f4) popup_note_image_window_g1

0x6b98,	// (0x00033400) popup_note_image_window_g2_ParamLimits

0x6b98,	// (0x00033400) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0003c100) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0003c100) popup_note_image_window_g

0x6bb1,	// (0x00033419) popup_note_image_window_t1_ParamLimits

0x6bb1,	// (0x00033419) popup_note_image_window_t1

0x6bca,	// (0x00033432) popup_note_image_window_t2_ParamLimits

0x6bca,	// (0x00033432) popup_note_image_window_t2

0x6be3,	// (0x0003344b) popup_note_image_window_t3_ParamLimits

0x6be3,	// (0x0003344b) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0003c105) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0003c105) popup_note_image_window_t

0x6a69,	// (0x000332d1) bg_popup_window_pane_cp7_ParamLimits

0x6a69,	// (0x000332d1) bg_popup_window_pane_cp7

0x6a99,	// (0x00033301) popup_note_wait_window_g1_ParamLimits

0x6a99,	// (0x00033301) popup_note_wait_window_g1

0x6aa5,	// (0x0003330d) popup_note_wait_window_g2_ParamLimits

0x6aa5,	// (0x0003330d) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0003c0ee) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0003c0ee) popup_note_wait_window_g

0x6abd,	// (0x00033325) popup_note_wait_window_t1_ParamLimits

0x6abd,	// (0x00033325) popup_note_wait_window_t1

0x6ae4,	// (0x0003334c) popup_note_wait_window_t2_ParamLimits

0x6ae4,	// (0x0003334c) popup_note_wait_window_t2

0x6b01,	// (0x00033369) popup_note_wait_window_t3_ParamLimits

0x6b01,	// (0x00033369) popup_note_wait_window_t3

0x6b14,	// (0x0003337c) popup_note_wait_window_t4_ParamLimits

0x6b14,	// (0x0003337c) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0003c0f5) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0003c0f5) popup_note_wait_window_t

0x6b39,	// (0x000333a1) wait_bar_pane_ParamLimits

0x6b39,	// (0x000333a1) wait_bar_pane

0x4ee2,	// (0x0003174a) wait_anim_pane

0x4ee2,	// (0x0003174a) wait_border_pane

0x4ed8,	// (0x00031740) wait_anim_pane_g1

0x4ed8,	// (0x00031740) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003bfb4) wait_anim_pane_g

0x6a0d,	// (0x00033275) wait_border_pane_g1

0x6a18,	// (0x00033280) wait_border_pane_g2

0x6a21,	// (0x00033289) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0003c0e7) wait_border_pane_g

0x696f,	// (0x000331d7) bg_popup_window_pane_cp16_ParamLimits

0x696f,	// (0x000331d7) bg_popup_window_pane_cp16

0x697d,	// (0x000331e5) indicator_popup_pane_cp4_ParamLimits

0x697d,	// (0x000331e5) indicator_popup_pane_cp4

0x6991,	// (0x000331f9) popup_query_data_window_t1_ParamLimits

0x6991,	// (0x000331f9) popup_query_data_window_t1

0x69a3,	// (0x0003320b) popup_query_data_window_t2_ParamLimits

0x69a3,	// (0x0003320b) popup_query_data_window_t2

0x69bc,	// (0x00033224) popup_query_data_window_t3_ParamLimits

0x69bc,	// (0x00033224) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0003c0e0) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0003c0e0) popup_query_data_window_t

0x69d6,	// (0x0003323e) query_popup_data_pane_ParamLimits

0x69d6,	// (0x0003323e) query_popup_data_pane

0x69ea,	// (0x00033252) query_popup_data_pane_cp1_ParamLimits

0x69ea,	// (0x00033252) query_popup_data_pane_cp1

0x510d,	// (0x00031975) bg_popup_window_pane_cp10_ParamLimits

0x510d,	// (0x00031975) bg_popup_window_pane_cp10

0x68d2,	// (0x0003313a) indicator_popup_pane_ParamLimits

0x68d2,	// (0x0003313a) indicator_popup_pane

0x5164,	// (0x000319cc) popup_query_code_window_t1_ParamLimits

0x5164,	// (0x000319cc) popup_query_code_window_t1

0x68ea,	// (0x00033152) popup_query_code_window_t2_ParamLimits

0x68ea,	// (0x00033152) popup_query_code_window_t2

0x6928,	// (0x00033190) popup_query_code_window_t3_ParamLimits

0x6928,	// (0x00033190) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0003c0d9) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0003c0d9) popup_query_code_window_t

0x6957,	// (0x000331bf) query_popup_pane_ParamLimits

0x6957,	// (0x000331bf) query_popup_pane

0x510d,	// (0x00031975) bg_popup_window_pane_cp15_ParamLimits

0x510d,	// (0x00031975) bg_popup_window_pane_cp15

0x512b,	// (0x00031993) indicator_popup_pane_cp1_ParamLimits

0x512b,	// (0x00031993) indicator_popup_pane_cp1

0x513e,	// (0x000319a6) indicator_popup_pane_cp2_ParamLimits

0x513e,	// (0x000319a6) indicator_popup_pane_cp2

0x5151,	// (0x000319b9) popup_query_data_code_window_g1_ParamLimits

0x5151,	// (0x000319b9) popup_query_data_code_window_g1

0x5164,	// (0x000319cc) popup_query_data_code_window_t1_ParamLimits

0x5164,	// (0x000319cc) popup_query_data_code_window_t1

0x5176,	// (0x000319de) popup_query_data_code_window_t2_ParamLimits

0x5176,	// (0x000319de) popup_query_data_code_window_t2

0x5188,	// (0x000319f0) popup_query_data_code_window_t3_ParamLimits

0x5188,	// (0x000319f0) popup_query_data_code_window_t3

0x519e,	// (0x00031a06) popup_query_data_code_window_t4_ParamLimits

0x519e,	// (0x00031a06) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003be36) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003be36) popup_query_data_code_window_t

0x5de7,	// (0x0003264f) list_single_midp_graphic_pane_g3

0x51b6,	// (0x00031a1e) query_popup_data_pane_cp2_ParamLimits

0x51c9,	// (0x00031a31) query_popup_pane_cp2_ParamLimits

0x51c9,	// (0x00031a31) query_popup_pane_cp2

0x4ee2,	// (0x0003174a) bg_popup_window_pane_cp11

0x68a6,	// (0x0003310e) heading_pane_cp5

0x5257,	// (0x00031abf) listscroll_popup_info_pane

0x4ee2,	// (0x0003174a) input_focus_pane_cp3

0x51dc,	// (0x00031a44) query_popup_pane_t1

0x51ea,	// (0x00031a52) list_popup_info_pane_ParamLimits

0x51ea,	// (0x00031a52) list_popup_info_pane

0x51f9,	// (0x00031a61) listscroll_popup_info_pane_g1

0x5201,	// (0x00031a69) scroll_pane_cp7

0x520b,	// (0x00031a73) popup_info_list_pane_t1_ParamLimits

0x520b,	// (0x00031a73) popup_info_list_pane_t1

0x5225,	// (0x00031a8d) popup_info_list_pane_t2_ParamLimits

0x5225,	// (0x00031a8d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003be3f) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003be3f) popup_info_list_pane_t

0x4ee2,	// (0x0003174a) bg_popup_window_pane_cp12

0x779b,	// (0x00034003) find_popup_pane

0x4f3e,	// (0x000317a6) bg_popup_window_pane_cp3

0x523f,	// (0x00031aa7) heading_pane_cp3

0x524b,	// (0x00031ab3) listscroll_popup_graphic_pane

0x4ee2,	// (0x0003174a) bg_popup_window_pane_cp4

0x9d2c,	// (0x00036594) heading_pane_cp4

0x5257,	// (0x00031abf) listscroll_popup_colour_pane

0x525f,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x525f,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane

0x9d36,	// (0x0003659e) grid_large_graphic_colour_popup_pane_ParamLimits

0x9d36,	// (0x0003659e) grid_large_graphic_colour_popup_pane

0x5273,	// (0x00031adb) listscroll_popup_colour_pane_g1_ParamLimits

0x5273,	// (0x00031adb) listscroll_popup_colour_pane_g1

0x528a,	// (0x00031af2) listscroll_popup_colour_pane_g2_ParamLimits

0x528a,	// (0x00031af2) listscroll_popup_colour_pane_g2

0x52a1,	// (0x00031b09) listscroll_popup_colour_pane_g3_ParamLimits

0x52a1,	// (0x00031b09) listscroll_popup_colour_pane_g3

0x9d5a,	// (0x000365c2) listscroll_popup_colour_pane_g4_ParamLimits

0x9d5a,	// (0x000365c2) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003be44) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003be44) listscroll_popup_colour_pane_g

0x52b1,	// (0x00031b19) scroll_pane_cp6_ParamLimits

0x52b1,	// (0x00031b19) scroll_pane_cp6

0x9d69,	// (0x000365d1) cell_large_graphic_colour_popup_pane_ParamLimits

0x9d69,	// (0x000365d1) cell_large_graphic_colour_popup_pane

0x52c3,	// (0x00031b2b) cell_large_graphic_colour_none_popup_pane_t1

0x4ee2,	// (0x0003174a) grid_highlight_pane_cp5

0x52d2,	// (0x00031b3a) cell_large_graphic_colour_popup_pane_g1

0x52da,	// (0x00031b42) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003be4d) cell_large_graphic_colour_popup_pane_g

0x52e2,	// (0x00031b4a) cell_large_graphic_colour_popup_pane_g2_copy1

0x52eb,	// (0x00031b53) grid_highlight_pane_cp4

0x52f3,	// (0x00031b5b) bg_popup_window_pane_cp8_ParamLimits

0x52f3,	// (0x00031b5b) bg_popup_window_pane_cp8

0x530e,	// (0x00031b76) popup_snote_single_text_window_g1_ParamLimits

0x530e,	// (0x00031b76) popup_snote_single_text_window_g1

0x5320,	// (0x00031b88) popup_snote_single_text_window_t1_ParamLimits

0x5320,	// (0x00031b88) popup_snote_single_text_window_t1

0x5333,	// (0x00031b9b) popup_snote_single_text_window_t2_ParamLimits

0x5333,	// (0x00031b9b) popup_snote_single_text_window_t2

0x5346,	// (0x00031bae) popup_snote_single_text_window_t3_ParamLimits

0x5346,	// (0x00031bae) popup_snote_single_text_window_t3

0x537f,	// (0x00031be7) popup_snote_single_text_window_t4_ParamLimits

0x537f,	// (0x00031be7) popup_snote_single_text_window_t4

0x53b3,	// (0x00031c1b) popup_snote_single_text_window_t5_ParamLimits

0x53b3,	// (0x00031c1b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003be52) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003be52) popup_snote_single_text_window_t

0x53e2,	// (0x00031c4a) bg_popup_window_pane_cp9_ParamLimits

0x53e2,	// (0x00031c4a) bg_popup_window_pane_cp9

0x530e,	// (0x00031b76) popup_snote_single_graphic_window_g1_ParamLimits

0x530e,	// (0x00031b76) popup_snote_single_graphic_window_g1

0x53f0,	// (0x00031c58) popup_snote_single_graphic_window_g2_ParamLimits

0x53f0,	// (0x00031c58) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003be5d) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003be5d) popup_snote_single_graphic_window_g

0x53fc,	// (0x00031c64) popup_snote_single_graphic_window_t1_ParamLimits

0x53fc,	// (0x00031c64) popup_snote_single_graphic_window_t1

0x540f,	// (0x00031c77) popup_snote_single_graphic_window_t2_ParamLimits

0x540f,	// (0x00031c77) popup_snote_single_graphic_window_t2

0x5422,	// (0x00031c8a) popup_snote_single_graphic_window_t3_ParamLimits

0x5422,	// (0x00031c8a) popup_snote_single_graphic_window_t3

0x545b,	// (0x00031cc3) popup_snote_single_graphic_window_t4_ParamLimits

0x545b,	// (0x00031cc3) popup_snote_single_graphic_window_t4

0x548f,	// (0x00031cf7) popup_snote_single_graphic_window_t5_ParamLimits

0x548f,	// (0x00031cf7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003be62) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003be62) popup_snote_single_graphic_window_t

0x771f,	// (0x00033f87) grid_graphic_popup_pane_ParamLimits

0x771f,	// (0x00033f87) grid_graphic_popup_pane

0x774b,	// (0x00033fb3) listscroll_popup_graphic_pane_g1_ParamLimits

0x774b,	// (0x00033fb3) listscroll_popup_graphic_pane_g1

0xc5f1,	// (0x00038e59) listscroll_popup_graphic_pane_g2_ParamLimits

0xc5f1,	// (0x00038e59) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0003c256) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0003c256) listscroll_popup_graphic_pane_g

0x7443,	// (0x00033cab) scroll_pane_cp5

0xc5b2,	// (0x00038e1a) cell_graphic_popup_pane_ParamLimits

0xc5b2,	// (0x00038e1a) cell_graphic_popup_pane

0x76ea,	// (0x00033f52) cell_graphic_popup_pane_g1

0x76f2,	// (0x00033f5a) cell_graphic_popup_pane_g2

0x52e2,	// (0x00031b4a) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0003c24f) cell_graphic_popup_pane_g

0x76fb,	// (0x00033f63) cell_graphic_popup_pane_t2

0x52eb,	// (0x00031b53) grid_highlight_pane_cp3

0x54d0,	// (0x00031d38) list_gen_pane_ParamLimits

0x54d0,	// (0x00031d38) list_gen_pane

0x54f8,	// (0x00031d60) scroll_pane

0xc565,	// (0x00038dcd) bg_list_pane_g1_ParamLimits

0xc565,	// (0x00038dcd) bg_list_pane_g1

0x7699,	// (0x00033f01) bg_list_pane_g2_ParamLimits

0x7699,	// (0x00033f01) bg_list_pane_g2

0x76ac,	// (0x00033f14) bg_list_pane_g3_ParamLimits

0x76ac,	// (0x00033f14) bg_list_pane_g3

0x76be,	// (0x00033f26) bg_list_pane_g4_ParamLimits

0x76be,	// (0x00033f26) bg_list_pane_g4

0xc580,	// (0x00038de8) bg_list_pane_g5_ParamLimits

0xc580,	// (0x00038de8) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0003c244) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0003c244) bg_list_pane_g

0xa99c,	// (0x00037204) list_double2_graphic_large_graphic_pane_ParamLimits

0xa99c,	// (0x00037204) list_double2_graphic_large_graphic_pane

0xa99c,	// (0x00037204) list_double2_graphic_pane_ParamLimits

0xa99c,	// (0x00037204) list_double2_graphic_pane

0xa99c,	// (0x00037204) list_double2_large_graphic_pane_ParamLimits

0xa99c,	// (0x00037204) list_double2_large_graphic_pane

0xa99c,	// (0x00037204) list_double2_pane_ParamLimits

0xa99c,	// (0x00037204) list_double2_pane

0xa99c,	// (0x00037204) list_double_graphic_heading_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_graphic_heading_pane

0xa99c,	// (0x00037204) list_double_graphic_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_graphic_pane

0xa99c,	// (0x00037204) list_double_heading_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_heading_pane

0xa99c,	// (0x00037204) list_double_large_graphic_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_large_graphic_pane

0xa99c,	// (0x00037204) list_double_number_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_number_pane

0xa99c,	// (0x00037204) list_double_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_pane

0xa99c,	// (0x00037204) list_double_time_pane_ParamLimits

0xa99c,	// (0x00037204) list_double_time_pane

0xa99c,	// (0x00037204) list_setting_number_pane_ParamLimits

0xa99c,	// (0x00037204) list_setting_number_pane

0xa99c,	// (0x00037204) list_setting_pane_ParamLimits

0xa99c,	// (0x00037204) list_setting_pane

0xa9e0,	// (0x00037248) list_single_2graphic_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_2graphic_pane

0xa9e0,	// (0x00037248) list_single_graphic_heading_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_graphic_heading_pane

0xa9e0,	// (0x00037248) list_single_graphic_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_graphic_pane

0xa9e0,	// (0x00037248) list_single_heading_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_heading_pane

0xaa2c,	// (0x00037294) list_single_large_graphic_pane_ParamLimits

0xaa2c,	// (0x00037294) list_single_large_graphic_pane

0xa9e0,	// (0x00037248) list_single_number_heading_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_number_heading_pane

0xa9e0,	// (0x00037248) list_single_number_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_number_pane

0xa9e0,	// (0x00037248) list_single_pane_ParamLimits

0xa9e0,	// (0x00037248) list_single_pane

0x4ee2,	// (0x0003174a) list_highlight_pane_cp1

0x5f2c,	// (0x00032794) list_single_pane_g1_ParamLimits

0x5f2c,	// (0x00032794) list_single_pane_g1

0x8889,	// (0x000350f1) list_single_pane_g2_ParamLimits

0x8889,	// (0x000350f1) list_single_pane_g2

0x0001,

0xf616,	// (0x0003be7e) list_single_pane_g_ParamLimits

0xf616,	// (0x0003be7e) list_single_pane_g

0x9122,	// (0x0003598a) list_single_pane_t1_ParamLimits

0x9122,	// (0x0003598a) list_single_pane_t1

0x5f2c,	// (0x00032794) list_single_number_pane_g1_ParamLimits

0x5f2c,	// (0x00032794) list_single_number_pane_g1

0x8889,	// (0x000350f1) list_single_number_pane_g2_ParamLimits

0x8889,	// (0x000350f1) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003be7e) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003be7e) list_single_number_pane_g

0x90ca,	// (0x00035932) list_single_number_pane_t1_ParamLimits

0x90ca,	// (0x00035932) list_single_number_pane_t1

0x90e0,	// (0x00035948) list_single_number_pane_t2_ParamLimits

0x90e0,	// (0x00035948) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0003c205) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0003c205) list_single_number_pane_t

0x887d,	// (0x000350e5) list_single_graphic_pane_g1_ParamLimits

0x887d,	// (0x000350e5) list_single_graphic_pane_g1

0x5f2c,	// (0x00032794) list_single_graphic_pane_g2_ParamLimits

0x5f2c,	// (0x00032794) list_single_graphic_pane_g2

0x8889,	// (0x000350f1) list_single_graphic_pane_g3_ParamLimits

0x8889,	// (0x000350f1) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003be6d) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003be6d) list_single_graphic_pane_g

0x8895,	// (0x000350fd) list_single_graphic_pane_t1_ParamLimits

0x8895,	// (0x000350fd) list_single_graphic_pane_t1

0x88ab,	// (0x00035113) list_single_heading_pane_g1_ParamLimits

0x88ab,	// (0x00035113) list_single_heading_pane_g1

0x8889,	// (0x000350f1) list_single_heading_pane_g2_ParamLimits

0x8889,	// (0x000350f1) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003be74) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003be74) list_single_heading_pane_g

0x88be,	// (0x00035126) list_single_heading_pane_t1_ParamLimits

0x88be,	// (0x00035126) list_single_heading_pane_t1

0x9d92,	// (0x000365fa) list_single_heading_pane_t2_ParamLimits

0x9d92,	// (0x000365fa) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003be79) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003be79) list_single_heading_pane_t

0x5f2c,	// (0x00032794) list_single_number_heading_pane_g1_ParamLimits

0x5f2c,	// (0x00032794) list_single_number_heading_pane_g1

0x8889,	// (0x000350f1) list_single_number_heading_pane_g2_ParamLimits

0x8889,	// (0x000350f1) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003be7e) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003be7e) list_single_number_heading_pane_g

0x88d4,	// (0x0003513c) list_single_number_heading_pane_t1_ParamLimits

0x88d4,	// (0x0003513c) list_single_number_heading_pane_t1

0x88ea,	// (0x00035152) list_single_number_heading_pane_t2_ParamLimits

0x88ea,	// (0x00035152) list_single_number_heading_pane_t2

0x88fc,	// (0x00035164) list_single_number_heading_pane_t3_ParamLimits

0x88fc,	// (0x00035164) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003be83) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003be83) list_single_number_heading_pane_t

0x890e,	// (0x00035176) list_single_graphic_heading_pane_g1_ParamLimits

0x890e,	// (0x00035176) list_single_graphic_heading_pane_g1

0x8924,	// (0x0003518c) list_single_graphic_heading_pane_g4_ParamLimits

0x8924,	// (0x0003518c) list_single_graphic_heading_pane_g4

0x8889,	// (0x000350f1) list_single_graphic_heading_pane_g5_ParamLimits

0x8889,	// (0x000350f1) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003be8a) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003be8a) list_single_graphic_heading_pane_g

0x88d4,	// (0x0003513c) list_single_graphic_heading_pane_t1_ParamLimits

0x88d4,	// (0x0003513c) list_single_graphic_heading_pane_t1

0x8935,	// (0x0003519d) list_single_graphic_heading_pane_t2_ParamLimits

0x8935,	// (0x0003519d) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003be91) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003be91) list_single_graphic_heading_pane_t

0x9da4,	// (0x0003660c) list_single_large_graphic_pane_g1_ParamLimits

0x9da4,	// (0x0003660c) list_single_large_graphic_pane_g1

0x9db0,	// (0x00036618) list_single_large_graphic_pane_g2_ParamLimits

0x9db0,	// (0x00036618) list_single_large_graphic_pane_g2

0x9dbc,	// (0x00036624) list_single_large_graphic_pane_g3_ParamLimits

0x9dbc,	// (0x00036624) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003be96) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003be96) list_single_large_graphic_pane_g

0x6a18,	// (0x00033280) wait_border_pane_g2_copy1

0x9dc8,	// (0x00036630) list_single_large_graphic_pane_g4_cp2

0x894d,	// (0x000351b5) list_single_large_graphic_pane_t1_ParamLimits

0x894d,	// (0x000351b5) list_single_large_graphic_pane_t1

0x9dd0,	// (0x00036638) list_double_pane_g1_ParamLimits

0x9dd0,	// (0x00036638) list_double_pane_g1

0x9ddc,	// (0x00036644) list_double_pane_g2_ParamLimits

0x9ddc,	// (0x00036644) list_double_pane_g2

0x0001,

0xf635,	// (0x0003be9d) list_double_pane_g_ParamLimits

0xf635,	// (0x0003be9d) list_double_pane_g

0x8963,	// (0x000351cb) list_double_pane_t1_ParamLimits

0x8963,	// (0x000351cb) list_double_pane_t1

0x8979,	// (0x000351e1) list_double_pane_t2_ParamLimits

0x8979,	// (0x000351e1) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003bea2) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003bea2) list_double_pane_t

0x898b,	// (0x000351f3) list_double2_pane_g1_ParamLimits

0x898b,	// (0x000351f3) list_double2_pane_g1

0x899c,	// (0x00035204) list_double2_pane_g2_ParamLimits

0x899c,	// (0x00035204) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003bea7) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003bea7) list_double2_pane_g

0x89a8,	// (0x00035210) list_double2_pane_t1_ParamLimits

0x89a8,	// (0x00035210) list_double2_pane_t1

0x89be,	// (0x00035226) list_double2_pane_t2_ParamLimits

0x89be,	// (0x00035226) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003beac) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003beac) list_double2_pane_t

0x9dd0,	// (0x00036638) list_double_number_pane_g1_ParamLimits

0x9dd0,	// (0x00036638) list_double_number_pane_g1

0x9ddc,	// (0x00036644) list_double_number_pane_g2_ParamLimits

0x9ddc,	// (0x00036644) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003be9d) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003be9d) list_double_number_pane_g

0x89d0,	// (0x00035238) list_double_number_pane_t1_ParamLimits

0x89d0,	// (0x00035238) list_double_number_pane_t1

0x89e2,	// (0x0003524a) list_double_number_pane_t2_ParamLimits

0x89e2,	// (0x0003524a) list_double_number_pane_t2

0x89f8,	// (0x00035260) list_double_number_pane_t3_ParamLimits

0x89f8,	// (0x00035260) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003beb1) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003beb1) list_double_number_pane_t

0x8a0a,	// (0x00035272) list_double_graphic_pane_g1_ParamLimits

0x8a0a,	// (0x00035272) list_double_graphic_pane_g1

0x9de8,	// (0x00036650) list_double_graphic_pane_g2_ParamLimits

0x9de8,	// (0x00036650) list_double_graphic_pane_g2

0x9df7,	// (0x0003665f) list_double_graphic_pane_g3_ParamLimits

0x9df7,	// (0x0003665f) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003beb8) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003beb8) list_double_graphic_pane_g

0x8a22,	// (0x0003528a) list_double_graphic_pane_t1_ParamLimits

0x8a22,	// (0x0003528a) list_double_graphic_pane_t1

0x8a38,	// (0x000352a0) list_double_graphic_pane_t2_ParamLimits

0x8a38,	// (0x000352a0) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003bec1) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003bec1) list_double_graphic_pane_t

0x8a4a,	// (0x000352b2) list_double2_graphic_pane_g1_ParamLimits

0x8a4a,	// (0x000352b2) list_double2_graphic_pane_g1

0x9e03,	// (0x0003666b) list_double2_graphic_pane_g2_ParamLimits

0x9e03,	// (0x0003666b) list_double2_graphic_pane_g2

0x9e0f,	// (0x00036677) list_double2_graphic_pane_g3_ParamLimits

0x9e0f,	// (0x00036677) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003bec6) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003bec6) list_double2_graphic_pane_g

0x8a56,	// (0x000352be) list_double2_graphic_pane_t1_ParamLimits

0x8a56,	// (0x000352be) list_double2_graphic_pane_t1

0x8a6c,	// (0x000352d4) list_double2_graphic_pane_t2_ParamLimits

0x8a6c,	// (0x000352d4) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003becd) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003becd) list_double2_graphic_pane_t

0x8a7e,	// (0x000352e6) list_double_large_graphic_pane_g1_ParamLimits

0x8a7e,	// (0x000352e6) list_double_large_graphic_pane_g1

0x8aa9,	// (0x00035311) list_double_large_graphic_pane_g2_ParamLimits

0x8aa9,	// (0x00035311) list_double_large_graphic_pane_g2

0x9ddc,	// (0x00036644) list_double_large_graphic_pane_g3_ParamLimits

0x9ddc,	// (0x00036644) list_double_large_graphic_pane_g3

0x8abf,	// (0x00035327) list_double_large_graphic_pane_g4_ParamLimits

0x8abf,	// (0x00035327) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003bed2) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003bed2) list_double_large_graphic_pane_g

0x8ad2,	// (0x0003533a) list_double_large_graphic_pane_t1_ParamLimits

0x8ad2,	// (0x0003533a) list_double_large_graphic_pane_t1

0x8aeb,	// (0x00035353) list_double_large_graphic_pane_t2_ParamLimits

0x8aeb,	// (0x00035353) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003bedd) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003bedd) list_double_large_graphic_pane_t

0x9e30,	// (0x00036698) list_double2_large_graphic_pane_g1_ParamLimits

0x9e30,	// (0x00036698) list_double2_large_graphic_pane_g1

0x9e3c,	// (0x000366a4) list_double2_large_graphic_pane_g2_ParamLimits

0x9e3c,	// (0x000366a4) list_double2_large_graphic_pane_g2

0x9e0f,	// (0x00036677) list_double2_large_graphic_pane_g3_ParamLimits

0x9e0f,	// (0x00036677) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003bee2) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003bee2) list_double2_large_graphic_pane_g

0x8afd,	// (0x00035365) list_double2_large_graphic_pane_t1_ParamLimits

0x8afd,	// (0x00035365) list_double2_large_graphic_pane_t1

0x8b13,	// (0x0003537b) list_double2_large_graphic_pane_t2_ParamLimits

0x8b13,	// (0x0003537b) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003bee9) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003bee9) list_double2_large_graphic_pane_t

0x8b25,	// (0x0003538d) list_double_heading_pane_g1_ParamLimits

0x8b25,	// (0x0003538d) list_double_heading_pane_g1

0x9e4d,	// (0x000366b5) list_double_heading_pane_g2_ParamLimits

0x9e4d,	// (0x000366b5) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003beee) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003beee) list_double_heading_pane_g

0x8b36,	// (0x0003539e) list_double_heading_pane_t1_ParamLimits

0x8b36,	// (0x0003539e) list_double_heading_pane_t1

0x89be,	// (0x00035226) list_double_heading_pane_t2_ParamLimits

0x89be,	// (0x00035226) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003bef3) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003bef3) list_double_heading_pane_t

0x8b4c,	// (0x000353b4) list_double_graphic_heading_pane_g1_ParamLimits

0x8b4c,	// (0x000353b4) list_double_graphic_heading_pane_g1

0x8b25,	// (0x0003538d) list_double_graphic_heading_pane_g2_ParamLimits

0x8b25,	// (0x0003538d) list_double_graphic_heading_pane_g2

0x9e4d,	// (0x000366b5) list_double_graphic_heading_pane_g3_ParamLimits

0x9e4d,	// (0x000366b5) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003bef8) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003bef8) list_double_graphic_heading_pane_g

0x8b58,	// (0x000353c0) list_double_graphic_heading_pane_t1_ParamLimits

0x8b58,	// (0x000353c0) list_double_graphic_heading_pane_t1

0x8a6c,	// (0x000352d4) list_double_graphic_heading_pane_t2_ParamLimits

0x8a6c,	// (0x000352d4) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003beff) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003beff) list_double_graphic_heading_pane_t

0x8b6e,	// (0x000353d6) list_double_time_pane_g1_ParamLimits

0x8b6e,	// (0x000353d6) list_double_time_pane_g1

0x8b7f,	// (0x000353e7) list_double_time_pane_g2_ParamLimits

0x8b7f,	// (0x000353e7) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003bf04) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003bf04) list_double_time_pane_g

0x8b8b,	// (0x000353f3) list_double_time_pane_t1_ParamLimits

0x8b8b,	// (0x000353f3) list_double_time_pane_t1

0x8ba1,	// (0x00035409) list_double_time_pane_t2_ParamLimits

0x8ba1,	// (0x00035409) list_double_time_pane_t2

0x8bb3,	// (0x0003541b) list_double_time_pane_t3_ParamLimits

0x8bb3,	// (0x0003541b) list_double_time_pane_t3

0x8bc5,	// (0x0003542d) list_double_time_pane_t4_ParamLimits

0x8bc5,	// (0x0003542d) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003bf09) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003bf09) list_double_time_pane_t

0x8bd7,	// (0x0003543f) list_setting_pane_g1_ParamLimits

0x8bd7,	// (0x0003543f) list_setting_pane_g1

0x8be3,	// (0x0003544b) list_setting_pane_g2_ParamLimits

0x8be3,	// (0x0003544b) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003bf12) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003bf12) list_setting_pane_g

0x8bef,	// (0x00035457) list_setting_pane_t1_ParamLimits

0x8bef,	// (0x00035457) list_setting_pane_t1

0x8c09,	// (0x00035471) list_setting_pane_t2_ParamLimits

0x8c09,	// (0x00035471) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003bf17) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003bf17) list_setting_pane_t

0x8c46,	// (0x000354ae) set_value_pane_cp_ParamLimits

0x8c46,	// (0x000354ae) set_value_pane_cp

0x8c52,	// (0x000354ba) list_setting_number_pane_g1_ParamLimits

0x8c52,	// (0x000354ba) list_setting_number_pane_g1

0x8c5e,	// (0x000354c6) list_setting_number_pane_g2_ParamLimits

0x8c5e,	// (0x000354c6) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003bf1e) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003bf1e) list_setting_number_pane_g

0x8c6a,	// (0x000354d2) list_setting_number_pane_t1_ParamLimits

0x8c6a,	// (0x000354d2) list_setting_number_pane_t1

0x8c83,	// (0x000354eb) list_setting_number_pane_t2_ParamLimits

0x8c83,	// (0x000354eb) list_setting_number_pane_t2

0x8c9d,	// (0x00035505) list_setting_number_pane_t3_ParamLimits

0x8c9d,	// (0x00035505) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003bf23) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003bf23) list_setting_number_pane_t

0x8c46,	// (0x000354ae) set_value_pane_ParamLimits

0x8c46,	// (0x000354ae) set_value_pane

0x552c,	// (0x00031d94) bg_set_opt_pane_ParamLimits

0x552c,	// (0x00031d94) bg_set_opt_pane

0x8ce0,	// (0x00035548) set_value_pane_t1

0x554d,	// (0x00031db5) slider_set_pane_cp3

0x5556,	// (0x00031dbe) volume_small_pane_cp

0x555f,	// (0x00031dc7) list_form_gen_pane

0x5568,	// (0x00031dd0) scroll_pane_cp8

0x8cf6,	// (0x0003555e) form_field_data_pane_ParamLimits

0x8cf6,	// (0x0003555e) form_field_data_pane

0x8d16,	// (0x0003557e) form_field_data_wide_pane_ParamLimits

0x8d16,	// (0x0003557e) form_field_data_wide_pane

0x8d37,	// (0x0003559f) form_field_popup_pane_ParamLimits

0x8d37,	// (0x0003559f) form_field_popup_pane

0x8d55,	// (0x000355bd) form_field_popup_wide_pane_ParamLimits

0x8d55,	// (0x000355bd) form_field_popup_wide_pane

0x8d72,	// (0x000355da) form_field_slider_pane_ParamLimits

0x8d72,	// (0x000355da) form_field_slider_pane

0x8d85,	// (0x000355ed) form_field_slider_wide_pane_ParamLimits

0x8d85,	// (0x000355ed) form_field_slider_wide_pane

0x5579,	// (0x00031de1) data_form_pane

0x8da2,	// (0x0003560a) form_field_data_pane_t1

0x5585,	// (0x00031ded) input_focus_pane

0x5593,	// (0x00031dfb) data_form_wide_pane

0x8dc8,	// (0x00035630) form_field_data_wide_pane_t1

0x5300,	// (0x00031b68) input_focus_pane_cp6

0x8dea,	// (0x00035652) form_field_popup_pane_t1

0x5585,	// (0x00031ded) input_focus_pane_cp7

0x55bf,	// (0x00031e27) list_form_pane

0x8e0c,	// (0x00035674) form_field_popup_wide_pane_t1

0x5585,	// (0x00031ded) input_focus_pane_cp8

0x55cb,	// (0x00031e33) list_form_wide_pane

0x8e29,	// (0x00035691) form_field_slider_pane_t1_ParamLimits

0x8e29,	// (0x00035691) form_field_slider_pane_t1

0x8e41,	// (0x000356a9) form_field_slider_pane_t2_ParamLimits

0x8e41,	// (0x000356a9) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003bf33) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003bf33) form_field_slider_pane_t

0x4f30,	// (0x00031798) input_focus_pane_cp9_ParamLimits

0x4f30,	// (0x00031798) input_focus_pane_cp9

0x8e56,	// (0x000356be) slider_cont_pane_ParamLimits

0x8e56,	// (0x000356be) slider_cont_pane

0x55da,	// (0x00031e42) form_field_slider_wide_pane_t1_ParamLimits

0x55da,	// (0x00031e42) form_field_slider_wide_pane_t1

0x8e6a,	// (0x000356d2) form_field_slider_wide_pane_t2_ParamLimits

0x8e6a,	// (0x000356d2) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003bf38) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003bf38) form_field_slider_wide_pane_t

0x4f30,	// (0x00031798) input_focus_pane_cp10_ParamLimits

0x4f30,	// (0x00031798) input_focus_pane_cp10

0x8e7c,	// (0x000356e4) slider_cont_pane_cp1_ParamLimits

0x8e7c,	// (0x000356e4) slider_cont_pane_cp1

0x8e90,	// (0x000356f8) slider_form_pane_cp

0x55ec,	// (0x00031e54) input_focus_pane_g1

0x55f4,	// (0x00031e5c) input_focus_pane_g2

0x55fc,	// (0x00031e64) input_focus_pane_g3

0x5604,	// (0x00031e6c) input_focus_pane_g4

0x560c,	// (0x00031e74) input_focus_pane_g5

0x5614,	// (0x00031e7c) input_focus_pane_g6

0x561c,	// (0x00031e84) input_focus_pane_g7

0x5624,	// (0x00031e8c) input_focus_pane_g8

0x562c,	// (0x00031e94) input_focus_pane_g9

0x4ed8,	// (0x00031740) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003bf3d) input_focus_pane_g

0x6a21,	// (0x00033289) wait_border_pane_g3_copy1

0x8e98,	// (0x00035700) data_form_pane_t1

0x4ed8,	// (0x00031740) wait_anim_pane_g1_copy1

0x90f2,	// (0x0003595a) data_form_wide_pane_t1

0x8eb3,	// (0x0003571b) list_form_graphic_pane_cp_ParamLimits

0x8eb3,	// (0x0003571b) list_form_graphic_pane_cp

0x7642,	// (0x00033eaa) slider_form_pane_g1

0x764b,	// (0x00033eb3) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0003c235) slider_form_pane_g

0x8eca,	// (0x00035732) list_form_graphic_pane_ParamLimits

0x8eca,	// (0x00035732) list_form_graphic_pane

0x8ee4,	// (0x0003574c) list_form_graphic_pane_g1

0x8eec,	// (0x00035754) list_form_graphic_pane_t1_ParamLimits

0x8eec,	// (0x00035754) list_form_graphic_pane_t1

0x4f3e,	// (0x000317a6) list_highlight_pane_cp5_ParamLimits

0x4f3e,	// (0x000317a6) list_highlight_pane_cp5

0x8f01,	// (0x00035769) find_pane_g1

0x5634,	// (0x00031e9c) input_find_pane

0x8f0a,	// (0x00035772) input_find_pane_g1_ParamLimits

0x8f0a,	// (0x00035772) input_find_pane_g1

0x8f16,	// (0x0003577e) input_find_pane_t1_ParamLimits

0x8f16,	// (0x0003577e) input_find_pane_t1

0x8f2b,	// (0x00035793) input_find_pane_t2_ParamLimits

0x8f2b,	// (0x00035793) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003bf52) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003bf52) input_find_pane_t

0x563d,	// (0x00031ea5) input_focus_pane_cp5_ParamLimits

0x563d,	// (0x00031ea5) input_focus_pane_cp5

0x9e65,	// (0x000366cd) bg_popup_window_pane_cp2_ParamLimits

0x9e65,	// (0x000366cd) bg_popup_window_pane_cp2

0x9e72,	// (0x000366da) listscroll_menu_pane_ParamLimits

0x9e72,	// (0x000366da) listscroll_menu_pane

0x9e7e,	// (0x000366e6) popup_submenu_window_ParamLimits

0x9e7e,	// (0x000366e6) popup_submenu_window

0x564b,	// (0x00031eb3) find_popup_pane_g1

0x5653,	// (0x00031ebb) input_popup_find_pane_cp

0x563d,	// (0x00031ea5) input_focus_pane_cp4_ParamLimits

0x563d,	// (0x00031ea5) input_focus_pane_cp4

0x565d,	// (0x00031ec5) input_popup_find_pane_t1_ParamLimits

0x565d,	// (0x00031ec5) input_popup_find_pane_t1

0x4ee2,	// (0x0003174a) bg_popup_sub_pane_cp

0x568b,	// (0x00031ef3) listscroll_popup_sub_pane

0x5693,	// (0x00031efb) list_submenu_pane_ParamLimits

0x5693,	// (0x00031efb) list_submenu_pane

0x56a4,	// (0x00031f0c) scroll_pane_cp4

0x56ac,	// (0x00031f14) list_single_popup_submenu_pane_ParamLimits

0x56ac,	// (0x00031f14) list_single_popup_submenu_pane

0x56bf,	// (0x00031f27) list_single_popup_submenu_pane_g1

0x56c7,	// (0x00031f2f) list_single_popup_submenu_pane_t1_ParamLimits

0x56c7,	// (0x00031f2f) list_single_popup_submenu_pane_t1

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp1_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp1

0x9eb0,	// (0x00036718) tabs_2_active_pane_g1

0x9eb8,	// (0x00036720) tabs_2_active_pane_t1

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp1_ParamLimits

0x4f3e,	// (0x000317a6) bg_passive_tab_pane_cp1

0x9eb0,	// (0x00036718) tabs_2_passive_pane_g1

0x9eb8,	// (0x00036720) tabs_2_passive_pane_t1

0x6243,	// (0x00032aab) bg_active_tab_pane_cp4

0x9eca,	// (0x00036732) tabs_2_long_active_pane_t1

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp4

0xa691,	// (0x00036ef9) list_single_midp_graphic_pane_g4_ParamLimits

0x6243,	// (0x00032aab) bg_active_tab_pane_cp5

0x9ee9,	// (0x00036751) tabs_3_long_active_pane_t1

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp5

0xa691,	// (0x00036ef9) list_single_midp_graphic_pane_g4

0x4f3e,	// (0x000317a6) bg_popup_window_pane_cp13_ParamLimits

0x4f3e,	// (0x000317a6) bg_popup_window_pane_cp13

0x56e5,	// (0x00031f4d) listscroll_popup_fast_pane_ParamLimits

0x56e5,	// (0x00031f4d) listscroll_popup_fast_pane

0x56f4,	// (0x00031f5c) grid_popup_fast_pane_ParamLimits

0x56f4,	// (0x00031f5c) grid_popup_fast_pane

0x5706,	// (0x00031f6e) scroll_pane_cp9_ParamLimits

0x5706,	// (0x00031f6e) scroll_pane_cp9

0xd2a1,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd2a1,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2

0x572a,	// (0x00031f92) input_focus_pane_cp20_ParamLimits

0x572a,	// (0x00031f92) input_focus_pane_cp20

0x5738,	// (0x00031fa0) query_popup_data_pane_t1_ParamLimits

0x5738,	// (0x00031fa0) query_popup_data_pane_t1

0x574b,	// (0x00031fb3) query_popup_data_pane_t2_ParamLimits

0x574b,	// (0x00031fb3) query_popup_data_pane_t2

0x5791,	// (0x00031ff9) query_popup_data_pane_t3_ParamLimits

0x5791,	// (0x00031ff9) query_popup_data_pane_t3

0x57d2,	// (0x0003203a) query_popup_data_pane_t4_ParamLimits

0x57d2,	// (0x0003203a) query_popup_data_pane_t4

0x580e,	// (0x00032076) query_popup_data_pane_t5_ParamLimits

0x580e,	// (0x00032076) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003bf57) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003bf57) query_popup_data_pane_t

0x55ec,	// (0x00031e54) bg_set_opt_pane_g1

0x55f4,	// (0x00031e5c) bg_set_opt_pane_g2

0x55fc,	// (0x00031e64) bg_set_opt_pane_g3

0x5604,	// (0x00031e6c) bg_set_opt_pane_g4

0x560c,	// (0x00031e74) bg_set_opt_pane_g5

0x5614,	// (0x00031e7c) bg_set_opt_pane_g6

0x561c,	// (0x00031e84) bg_set_opt_pane_g7

0x5624,	// (0x00031e8c) bg_set_opt_pane_g8

0x562c,	// (0x00031e94) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003bf62) bg_set_opt_pane_g

0xa2ec,	// (0x00036b54) control_top_pane_stacon_ParamLimits

0xa2ec,	// (0x00036b54) control_top_pane_stacon

0xa33f,	// (0x00036ba7) signal_pane_stacon_ParamLimits

0xa33f,	// (0x00036ba7) signal_pane_stacon

0x5c6d,	// (0x000324d5) stacon_top_pane_g1_ParamLimits

0x5c6d,	// (0x000324d5) stacon_top_pane_g1

0xa364,	// (0x00036bcc) title_pane_stacon_ParamLimits

0xa364,	// (0x00036bcc) title_pane_stacon

0xa38e,	// (0x00036bf6) uni_indicator_pane_stacon_ParamLimits

0xa38e,	// (0x00036bf6) uni_indicator_pane_stacon

0xa3a3,	// (0x00036c0b) battery_pane_stacon_ParamLimits

0xa3a3,	// (0x00036c0b) battery_pane_stacon

0xa3e7,	// (0x00036c4f) control_bottom_pane_stacon_ParamLimits

0xa3e7,	// (0x00036c4f) control_bottom_pane_stacon

0xa40a,	// (0x00036c72) navi_pane_stacon_ParamLimits

0xa40a,	// (0x00036c72) navi_pane_stacon

0x5c8f,	// (0x000324f7) stacon_bottom_pane_g1_ParamLimits

0x5c8f,	// (0x000324f7) stacon_bottom_pane_g1

0x9efb,	// (0x00036763) aid_levels_signal_lsc_ParamLimits

0x9efb,	// (0x00036763) aid_levels_signal_lsc

0x9f12,	// (0x0003677a) signal_pane_stacon_g1_ParamLimits

0x9f12,	// (0x0003677a) signal_pane_stacon_g1

0x9f26,	// (0x0003678e) signal_pane_stacon_g2_ParamLimits

0x9f26,	// (0x0003678e) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003bf75) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003bf75) signal_pane_stacon_g

0x9f5b,	// (0x000367c3) title_pane_stacon_t1_ParamLimits

0x9f5b,	// (0x000367c3) title_pane_stacon_t1

0x5866,	// (0x000320ce) uni_indicator_pane_stacon_g1

0x5870,	// (0x000320d8) uni_indicator_pane_stacon_g2

0x5852,	// (0x000320ba) uni_indicator_pane_stacon_g3

0x585c,	// (0x000320c4) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003bf81) uni_indicator_pane_stacon_g

0x9f80,	// (0x000367e8) control_top_pane_stacon_g1

0x9f88,	// (0x000367f0) control_top_pane_stacon_t1_ParamLimits

0x9f88,	// (0x000367f0) control_top_pane_stacon_t1

0x9fbf,	// (0x00036827) aid_levels_battery_lsc_ParamLimits

0x9fbf,	// (0x00036827) aid_levels_battery_lsc

0x9fd7,	// (0x0003683f) battery_pane_stacon_g1_ParamLimits

0x9fd7,	// (0x0003683f) battery_pane_stacon_g1

0x9fea,	// (0x00036852) battery_pane_stacon_g2_ParamLimits

0x9fea,	// (0x00036852) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003bf8a) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003bf8a) battery_pane_stacon_g

0xa028,	// (0x00036890) navi_icon_pane_stacon

0xa03c,	// (0x000368a4) navi_navi_pane_stacon

0xa028,	// (0x00036890) navi_text_pane_stacon

0x9f80,	// (0x000367e8) control_bottom_pane_stacon_g1

0xa050,	// (0x000368b8) control_bottom_pane_stacon_t1_ParamLimits

0xa050,	// (0x000368b8) control_bottom_pane_stacon_t1

0xa087,	// (0x000368ef) grid_app_pane_ParamLimits

0xa087,	// (0x000368ef) grid_app_pane

0xa0a9,	// (0x00036911) scroll_pane_cp15_ParamLimits

0xa0a9,	// (0x00036911) scroll_pane_cp15

0xa0be,	// (0x00036926) cell_app_pane_ParamLimits

0xa0be,	// (0x00036926) cell_app_pane

0xa0e8,	// (0x00036950) cell_app_pane_g1_ParamLimits

0xa0e8,	// (0x00036950) cell_app_pane_g1

0x5894,	// (0x000320fc) cell_app_pane_g2_ParamLimits

0x5894,	// (0x000320fc) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003bf8f) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003bf8f) cell_app_pane_g

0x58a0,	// (0x00032108) cell_app_pane_t1_ParamLimits

0x58a0,	// (0x00032108) cell_app_pane_t1

0x58b2,	// (0x0003211a) grid_highlight_pane_ParamLimits

0x58b2,	// (0x0003211a) grid_highlight_pane

0x55ec,	// (0x00031e54) cell_highlight_pane_g1

0x55f4,	// (0x00031e5c) cell_highlight_pane_g2

0x55fc,	// (0x00031e64) cell_highlight_pane_g3

0x5604,	// (0x00031e6c) cell_highlight_pane_g4

0x560c,	// (0x00031e74) cell_highlight_pane_g5

0x5614,	// (0x00031e7c) cell_highlight_pane_g6

0x561c,	// (0x00031e84) cell_highlight_pane_g7

0x5624,	// (0x00031e8c) cell_highlight_pane_g8

0x562c,	// (0x00031e94) cell_highlight_pane_g9

0x4ed8,	// (0x00031740) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003bf3d) cell_highlight_pane_g

0x58c3,	// (0x0003212b) bg_scroll_pane

0xa11f,	// (0x00036987) scroll_handle_pane

0x590a,	// (0x00032172) scroll_bg_pane_g1

0x591f,	// (0x00032187) scroll_bg_pane_g2

0x5937,	// (0x0003219f) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003bf94) scroll_bg_pane_g

0x594c,	// (0x000321b4) scroll_handle_focus_pane_ParamLimits

0x594c,	// (0x000321b4) scroll_handle_focus_pane

0x590a,	// (0x00032172) scroll_handle_pane_g1

0x5959,	// (0x000321c1) scroll_handle_pane_g2

0x5937,	// (0x0003219f) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003bf9b) scroll_handle_pane_g

0x563d,	// (0x00031ea5) bg_popup_sub_pane_cp21_ParamLimits

0x563d,	// (0x00031ea5) bg_popup_sub_pane_cp21

0x596d,	// (0x000321d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x596d,	// (0x000321d5) popup_fep_japan_predictive_window_t1

0x5984,	// (0x000321ec) popup_fep_japan_predictive_window_t2_ParamLimits

0x5984,	// (0x000321ec) popup_fep_japan_predictive_window_t2

0x59b7,	// (0x0003221f) popup_fep_japan_predictive_window_t3_ParamLimits

0x59b7,	// (0x0003221f) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003bfa2) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003bfa2) popup_fep_japan_predictive_window_t

0x4ee2,	// (0x0003174a) bg_popup_sub_pane_cp23

0x59ee,	// (0x00032256) listscroll_japin_cand_pane

0x59f6,	// (0x0003225e) popup_fep_japan_candidate_window_t1

0x5a04,	// (0x0003226c) candidate_pane_ParamLimits

0x5a04,	// (0x0003226c) candidate_pane

0x5a16,	// (0x0003227e) scroll_pane_cp30

0x5a1e,	// (0x00032286) list_single_popup_jap_candidate_pane_ParamLimits

0x5a1e,	// (0x00032286) list_single_popup_jap_candidate_pane

0x4ee2,	// (0x0003174a) list_highlight_pane_cp30

0x5a32,	// (0x0003229a) list_single_popup_jap_candidate_pane_t1

0x5a41,	// (0x000322a9) level_1_signal

0x5a4e,	// (0x000322b6) level_2_signal

0x5a5b,	// (0x000322c3) level_3_signal

0x5a68,	// (0x000322d0) level_4_signal

0x5a75,	// (0x000322dd) level_5_signal

0x5a82,	// (0x000322ea) level_6_signal

0x5a8f,	// (0x000322f7) level_7_signal

0x5a41,	// (0x000322a9) level_1_battery

0x5a4e,	// (0x000322b6) level_2_battery

0x5a5b,	// (0x000322c3) level_3_battery

0x5a68,	// (0x000322d0) level_4_battery

0x5a75,	// (0x000322dd) level_5_battery

0x5a82,	// (0x000322ea) level_6_battery

0x5a8f,	// (0x000322f7) level_7_battery

0x5ab4,	// (0x0003231c) list_menu_pane_ParamLimits

0x5ab4,	// (0x0003231c) list_menu_pane

0x5ac5,	// (0x0003232d) scroll_pane_cp25_ParamLimits

0x5ac5,	// (0x0003232d) scroll_pane_cp25

0x5ade,	// (0x00032346) list_double2_graphic_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double2_graphic_pane_cp2

0x5ade,	// (0x00032346) list_double2_large_graphic_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double2_large_graphic_pane_cp2

0x5ade,	// (0x00032346) list_double2_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double2_pane_cp2

0x5ade,	// (0x00032346) list_double_graphic_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double_graphic_pane_cp2

0x5ade,	// (0x00032346) list_double_large_graphic_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double_large_graphic_pane_cp2

0x5ade,	// (0x00032346) list_double_number_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double_number_pane_cp2

0x5ade,	// (0x00032346) list_double_pane_cp2_ParamLimits

0x5ade,	// (0x00032346) list_double_pane_cp2

0xa179,	// (0x000369e1) list_single_2graphic_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_2graphic_pane_cp2

0xa179,	// (0x000369e1) list_single_graphic_heading_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_graphic_heading_pane_cp2

0xa179,	// (0x000369e1) list_single_graphic_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_graphic_pane_cp2

0xa179,	// (0x000369e1) list_single_heading_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_heading_pane_cp2

0x5aee,	// (0x00032356) list_single_large_graphic_pane_cp2_ParamLimits

0x5aee,	// (0x00032356) list_single_large_graphic_pane_cp2

0xa179,	// (0x000369e1) list_single_number_heading_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_number_heading_pane_cp2

0xa179,	// (0x000369e1) list_single_number_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_number_pane_cp2

0xa179,	// (0x000369e1) list_single_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_pane_cp2

0x5b08,	// (0x00032370) bg_popup_sub_pane_cp22

0xa236,	// (0x00036a9e) popup_side_volume_key_window_g1

0xa260,	// (0x00036ac8) popup_side_volume_key_window_t1

0xa27c,	// (0x00036ae4) volume_small_pane_cp1

0x4f30,	// (0x00031798) bg_popup_sub_pane_cp24_ParamLimits

0x4f30,	// (0x00031798) bg_popup_sub_pane_cp24

0x5b1e,	// (0x00032386) fep_china_uni_candidate_pane_ParamLimits

0x5b1e,	// (0x00032386) fep_china_uni_candidate_pane

0x5b32,	// (0x0003239a) fep_china_uni_entry_pane

0x5b42,	// (0x000323aa) popup_fep_china_uni_window_g1

0x5b5e,	// (0x000323c6) fep_china_uni_entry_pane_g1

0x5b66,	// (0x000323ce) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003bfcf) fep_china_uni_entry_pane_g

0x5b6e,	// (0x000323d6) fep_entry_item_pane

0x5b78,	// (0x000323e0) fep_candidate_item_pane

0x5b80,	// (0x000323e8) fep_china_uni_candidate_pane_g1

0x5b88,	// (0x000323f0) fep_china_uni_candidate_pane_g2

0x5b90,	// (0x000323f8) fep_china_uni_candidate_pane_g3

0x5b98,	// (0x00032400) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003bfd4) fep_china_uni_candidate_pane_g

0x4ed8,	// (0x00031740) fep_entry_item_pane_g1

0x5ba0,	// (0x00032408) fep_entry_item_pane_t1_ParamLimits

0x5ba0,	// (0x00032408) fep_entry_item_pane_t1

0x5bb6,	// (0x0003241e) fep_candidate_item_pane_t1_ParamLimits

0x5bb6,	// (0x0003241e) fep_candidate_item_pane_t1

0x5bcb,	// (0x00032433) fep_candidate_item_pane_t2_ParamLimits

0x5bcb,	// (0x00032433) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003bfdd) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003bfdd) fep_candidate_item_pane_t

0x4f3e,	// (0x000317a6) list_highlight_pane_cp31_ParamLimits

0x4f3e,	// (0x000317a6) list_highlight_pane_cp31

0x5bdd,	// (0x00032445) level_1_signal_lsc

0x5be6,	// (0x0003244e) level_2_signal_lsc

0x5bef,	// (0x00032457) level_3_signal_lsc

0x5bf8,	// (0x00032460) level_4_signal_lsc

0x5c01,	// (0x00032469) level_5_signal_lsc

0x5c0a,	// (0x00032472) level_6_signal_lsc

0x5c13,	// (0x0003247b) level_7_signal_lsc

0x5c13,	// (0x0003247b) level_1_battery_lsc

0x5c1c,	// (0x00032484) level_2_battery_lsc

0x5c25,	// (0x0003248d) level_3_battery_lsc

0x5c2e,	// (0x00032496) level_4_battery_lsc

0x5c37,	// (0x0003249f) level_5_battery_lsc

0x5c40,	// (0x000324a8) level_6_battery_lsc

0x5bdd,	// (0x00032445) level_7_battery_lsc

0x5c49,	// (0x000324b1) scroll_handle_focus_pane_g1

0x5c52,	// (0x000324ba) scroll_handle_focus_pane_g2

0x5c5b,	// (0x000324c3) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003bfe2) scroll_handle_focus_pane_g

0x8f40,	// (0x000357a8) list_single_2graphic_pane_g1_ParamLimits

0x8f40,	// (0x000357a8) list_single_2graphic_pane_g1

0x8924,	// (0x0003518c) list_single_2graphic_pane_g2_ParamLimits

0x8924,	// (0x0003518c) list_single_2graphic_pane_g2

0x8889,	// (0x000350f1) list_single_2graphic_pane_g3_ParamLimits

0x8889,	// (0x000350f1) list_single_2graphic_pane_g3

0x8f4c,	// (0x000357b4) list_single_2graphic_pane_g4_ParamLimits

0x8f4c,	// (0x000357b4) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003bfe9) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003bfe9) list_single_2graphic_pane_g

0x8f5d,	// (0x000357c5) list_single_2graphic_pane_t1_ParamLimits

0x8f5d,	// (0x000357c5) list_single_2graphic_pane_t1

0xa284,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa284,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g1

0x9e3c,	// (0x000366a4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9e3c,	// (0x000366a4) list_double2_graphic_large_graphic_pane_g2

0x9e0f,	// (0x00036677) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9e0f,	// (0x00036677) list_double2_graphic_large_graphic_pane_g3

0xa294,	// (0x00036afc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa294,	// (0x00036afc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003bff2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003bff2) list_double2_graphic_large_graphic_pane_g

0x8f8b,	// (0x000357f3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8f8b,	// (0x000357f3) list_double2_graphic_large_graphic_pane_t1

0x8fa1,	// (0x00035809) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8fa1,	// (0x00035809) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003bffb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003bffb) list_double2_graphic_large_graphic_pane_t

0x5d3c,	// (0x000325a4) popup_fast_swap_window_ParamLimits

0x5d3c,	// (0x000325a4) popup_fast_swap_window

0x5d58,	// (0x000325c0) popup_side_volume_key_window

0x5d72,	// (0x000325da) stacon_top_pane

0x5d7c,	// (0x000325e4) status_pane_ParamLimits

0x5d7c,	// (0x000325e4) status_pane

0x5d72,	// (0x000325da) status_small_pane

0x4ee2,	// (0x0003174a) control_pane

0x4ee2,	// (0x0003174a) stacon_bottom_pane

0x5568,	// (0x00031dd0) scroll_pane_cp121

0x555f,	// (0x00031dc7) set_content_pane

0xa2a0,	// (0x00036b08) bg_active_tab_pane_g1_cp1

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp1

0xa2a9,	// (0x00036b11) bg_active_tab_pane_g3_cp1

0xa2a0,	// (0x00036b08) bg_passive_tab_pane_g1_cp1

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp1

0xa2a9,	// (0x00036b11) bg_passive_tab_pane_g3_cp1

0xa2b2,	// (0x00036b1a) bg_active_tab_pane_g1_cp2

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp2

0xa2bb,	// (0x00036b23) bg_active_tab_pane_g3_cp2

0xa2b2,	// (0x00036b1a) bg_passive_tab_pane_g1_cp2

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp2

0xa2bb,	// (0x00036b23) bg_passive_tab_pane_g3_cp2

0xa2c4,	// (0x00036b2c) bg_active_tab_pane_g1_cp3

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp3

0xa2cd,	// (0x00036b35) bg_active_tab_pane_g3_cp3

0xa2c4,	// (0x00036b2c) bg_passive_tab_pane_g1_cp3

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp3

0xa2cd,	// (0x00036b35) bg_passive_tab_pane_g3_cp3

0xa2d6,	// (0x00036b3e) bg_active_tab_pane_g1_cp4

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp4

0xa2e1,	// (0x00036b49) bg_active_tab_pane_g3_cp4

0xa2d6,	// (0x00036b3e) bg_passive_tab_pane_g1_cp4

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp4

0xa2e1,	// (0x00036b49) bg_passive_tab_pane_g3_cp4

0x5cb4,	// (0x0003251c) bg_active_tab_pane_g1_cp5

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp5

0x5cab,	// (0x00032513) bg_active_tab_pane_g3_cp5

0x5cb4,	// (0x0003251c) bg_passive_tab_pane_g1_cp5

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp5

0x5cab,	// (0x00032513) bg_passive_tab_pane_g3_cp5

0xb840,	// (0x000380a8) list_set_graphic_pane_ParamLimits

0xb840,	// (0x000380a8) list_set_graphic_pane

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp4

0x5cbd,	// (0x00032525) list_set_graphic_pane_g1_ParamLimits

0x5cbd,	// (0x00032525) list_set_graphic_pane_g1

0x5cc9,	// (0x00032531) list_set_graphic_pane_g2_ParamLimits

0x5cc9,	// (0x00032531) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003c000) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003c000) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0003c36b) volume_small_pane_cp_g

0x5ced,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5ced,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2

0x5cfb,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5cfb,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2

0x5d0c,	// (0x00032574) list_double2_large_graphic_pane_g3_cp2

0x5d14,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5d14,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2

0x5d2a,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5d2a,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2

0x73d4,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x73d4,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2

0x73e7,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x73e7,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2

0x5e9a,	// (0x00032702) list_double_large_graphic_pane_g3_cp2

0x73f8,	// (0x00033c60) list_double_large_graphic_pane_g4_cp

0x7400,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7400,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2

0x7417,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7417,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2

0x5d8a,	// (0x000325f2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5d8a,	// (0x000325f2) list_double2_graphic_pane_g1_cp2

0x5d98,	// (0x00032600) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5d98,	// (0x00032600) list_double2_graphic_pane_g2_cp2

0x5da9,	// (0x00032611) list_double2_graphic_pane_g3_cp2

0x5db3,	// (0x0003261b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5db3,	// (0x0003261b) list_double2_graphic_pane_t1_cp2

0x5dc9,	// (0x00032631) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5dc9,	// (0x00032631) list_double2_graphic_pane_t2_cp2

0x5ddb,	// (0x00032643) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5ddb,	// (0x00032643) list_single_number_heading_pane_g1_cp2

0x5de7,	// (0x0003264f) list_single_number_heading_pane_g2_cp2

0x5def,	// (0x00032657) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5def,	// (0x00032657) list_single_number_heading_pane_t1_cp2

0x5e05,	// (0x0003266d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5e05,	// (0x0003266d) list_single_number_heading_pane_t2_cp2

0x5e19,	// (0x00032681) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5e19,	// (0x00032681) list_single_number_heading_pane_t3_cp2

0x5ddb,	// (0x00032643) list_single_heading_pane_g1_cp2_ParamLimits

0x5ddb,	// (0x00032643) list_single_heading_pane_g1_cp2

0x5de7,	// (0x0003264f) list_single_heading_pane_g2_cp2

0x5def,	// (0x00032657) list_single_heading_pane_t1_cp2_ParamLimits

0x5def,	// (0x00032657) list_single_heading_pane_t1_cp2

0x71dc,	// (0x00033a44) list_single_heading_pane_t2_cp2_ParamLimits

0x71dc,	// (0x00033a44) list_single_heading_pane_t2_cp2

0x7176,	// (0x000339de) list_double_graphic_pane_g1_cp2_ParamLimits

0x7176,	// (0x000339de) list_double_graphic_pane_g1_cp2

0x7182,	// (0x000339ea) list_double_graphic_pane_g2_cp2_ParamLimits

0x7182,	// (0x000339ea) list_double_graphic_pane_g2_cp2

0x7191,	// (0x000339f9) list_double_graphic_pane_g3_cp2

0x7199,	// (0x00033a01) list_double_graphic_pane_t1_cp2_ParamLimits

0x7199,	// (0x00033a01) list_double_graphic_pane_t1_cp2

0x71af,	// (0x00033a17) list_double_graphic_pane_t2_cp2_ParamLimits

0x71af,	// (0x00033a17) list_double_graphic_pane_t2_cp2

0x5e8e,	// (0x000326f6) list_double_number_pane_g1_cp2_ParamLimits

0x5e8e,	// (0x000326f6) list_double_number_pane_g1_cp2

0x5e9a,	// (0x00032702) list_double_number_pane_g2_cp2

0x713a,	// (0x000339a2) list_double_number_pane_t1_cp2_ParamLimits

0x713a,	// (0x000339a2) list_double_number_pane_t1_cp2

0x714e,	// (0x000339b6) list_double_number_pane_t2_cp2_ParamLimits

0x714e,	// (0x000339b6) list_double_number_pane_t2_cp2

0x7164,	// (0x000339cc) list_double_number_pane_t3_cp2_ParamLimits

0x7164,	// (0x000339cc) list_double_number_pane_t3_cp2

0x70b1,	// (0x00033919) list_single_graphic_pane_g1_cp2_ParamLimits

0x70b1,	// (0x00033919) list_single_graphic_pane_g1_cp2

0x5ef2,	// (0x0003275a) list_single_graphic_pane_g2_cp2_ParamLimits

0x5ef2,	// (0x0003275a) list_single_graphic_pane_g2_cp2

0x5efe,	// (0x00032766) list_single_graphic_pane_g3_cp2

0x7087,	// (0x000338ef) list_single_graphic_pane_t1_cp2_ParamLimits

0x7087,	// (0x000338ef) list_single_graphic_pane_t1_cp2

0x5ef2,	// (0x0003275a) list_single_number_pane_g1_cp2_ParamLimits

0x5ef2,	// (0x0003275a) list_single_number_pane_g1_cp2

0x5efe,	// (0x00032766) list_single_number_pane_g2_cp2

0x7087,	// (0x000338ef) list_single_number_pane_t1_cp2_ParamLimits

0x7087,	// (0x000338ef) list_single_number_pane_t1_cp2

0x709d,	// (0x00033905) list_single_number_pane_t2_cp2_ParamLimits

0x709d,	// (0x00033905) list_single_number_pane_t2_cp2

0x5cfb,	// (0x00032563) list_double2_pane_g1_cp2_ParamLimits

0x5cfb,	// (0x00032563) list_double2_pane_g1_cp2

0x5d0c,	// (0x00032574) list_double2_pane_g2_cp2

0x5e66,	// (0x000326ce) list_double2_pane_t1_cp2_ParamLimits

0x5e66,	// (0x000326ce) list_double2_pane_t1_cp2

0x5e7c,	// (0x000326e4) list_double2_pane_t2_cp2_ParamLimits

0x5e7c,	// (0x000326e4) list_double2_pane_t2_cp2

0x5e8e,	// (0x000326f6) list_double_pane_g1_cp2_ParamLimits

0x5e8e,	// (0x000326f6) list_double_pane_g1_cp2

0x5e9a,	// (0x00032702) list_double_pane_g2_cp2

0x5ea2,	// (0x0003270a) list_double_pane_t1_cp2_ParamLimits

0x5ea2,	// (0x0003270a) list_double_pane_t1_cp2

0x5eb8,	// (0x00032720) list_double_pane_t2_cp2_ParamLimits

0x5eb8,	// (0x00032720) list_double_pane_t2_cp2

0x5ee2,	// (0x0003274a) list_single_pane_cp2_g3

0x5ef2,	// (0x0003275a) list_single_pane_g1_cp2_ParamLimits

0x5ef2,	// (0x0003275a) list_single_pane_g1_cp2

0x5efe,	// (0x00032766) list_single_pane_g2_cp2

0x5f06,	// (0x0003276e) list_single_pane_t1_cp2_ParamLimits

0x5f06,	// (0x0003276e) list_single_pane_t1_cp2

0x5f1e,	// (0x00032786) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5f1e,	// (0x00032786) list_single_large_graphic_pane_g1_cp2

0x5f2c,	// (0x00032794) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5f2c,	// (0x00032794) list_single_large_graphic_pane_g2_cp2

0x5f38,	// (0x000327a0) list_single_large_graphic_pane_g3_cp2

0x5f40,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5f40,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1

0x5f5a,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5f5a,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2

0x7051,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x7051,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2

0x701e,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x701e,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2

0x5efe,	// (0x00032766) list_single_graphic_heading_pane_g5_cp2

0x705d,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x705d,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2

0x7073,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x7073,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2

0x7012,	// (0x0003387a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x7012,	// (0x0003387a) list_single_2graphic_pane_g1_cp2

0x701e,	// (0x00033886) list_single_2graphic_pane_g2_cp2_ParamLimits

0x701e,	// (0x00033886) list_single_2graphic_pane_g2_cp2

0x5efe,	// (0x00032766) list_single_2graphic_pane_g3_cp2

0x702f,	// (0x00033897) list_single_2graphic_pane_g4_cp2_ParamLimits

0x702f,	// (0x00033897) list_single_2graphic_pane_g4_cp2

0x703b,	// (0x000338a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x703b,	// (0x000338a3) list_single_2graphic_pane_t1_cp2

0x4ed8,	// (0x00031740) list_highlight_pane_g10_cp1

0x6c18,	// (0x00033480) list_highlight_pane_g1_cp1

0x6c20,	// (0x00033488) list_highlight_pane_g2_cp1

0x6c28,	// (0x00033490) list_highlight_pane_g3_cp1

0x6c30,	// (0x00033498) list_highlight_pane_g4_cp1

0x6c38,	// (0x000334a0) list_highlight_pane_g5_cp1

0x6c40,	// (0x000334a8) list_highlight_pane_g6_cp1

0x6c48,	// (0x000334b0) list_highlight_pane_g7_cp1

0x6c50,	// (0x000334b8) list_highlight_pane_g8_cp1

0x6c58,	// (0x000334c0) list_highlight_pane_g9_cp1

0xc237,	// (0x00038a9f) form_field_slider_pane_t3

0xc245,	// (0x00038aad) form_field_slider_pane_t4

0x6b4c,	// (0x000333b4) slider_form_pane_ParamLimits

0x6b4c,	// (0x000333b4) slider_form_pane

0x4ee2,	// (0x0003174a) control_abbreviations

0x4ee2,	// (0x0003174a) control_conventions

0x4ee2,	// (0x0003174a) control_definitions

0x4ee2,	// (0x0003174a) format_table_attribute

0x7228,	// (0x00033a90) bg_popup_preview_window_pane_g9

0x4ee2,	// (0x0003174a) format_table_data2

0x4ee2,	// (0x0003174a) format_table_data3

0x4ee2,	// (0x0003174a) format_table_data_example

0x0008,

0x4ee2,	// (0x0003174a) intro_purpose

0xf92d,	// (0x0003c195) bg_popup_preview_window_pane_g

0x4ee2,	// (0x0003174a) texts_category

0x4ee2,	// (0x0003174a) texts_graphics

0x5f70,	// (0x000327d8) text_digital

0x5f7f,	// (0x000327e7) text_primary

0x5f8e,	// (0x000327f6) text_primary_small

0x5f9d,	// (0x00032805) text_secondary

0x5fac,	// (0x00032814) text_title

0x76d9,	// (0x00033f41) bg_passive_tab_pane_g1_cp3_srt

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp3_srt

0x76d0,	// (0x00033f38) bg_passive_tab_pane_g3_cp3_srt

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp3_srt_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp3_srt

0x76e2,	// (0x00033f4a) tabs_4_active_pane_srt_g1

0xc5a0,	// (0x00038e08) tabs_4_active_pane_srt_t1_ParamLimits

0xc5a0,	// (0x00038e08) tabs_4_active_pane_srt_t1

0x76d9,	// (0x00033f41) bg_active_tab_pane_g1_cp3_copy1

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp3_copy1

0x76d0,	// (0x00033f38) bg_active_tab_pane_g3_cp3_copy1

0x4f3e,	// (0x000317a6) tabs_2_long_active_pane_srt_ParamLimits

0x4f3e,	// (0x000317a6) tabs_2_long_active_pane_srt

0x4f3e,	// (0x000317a6) tabs_2_long_passive_pane_srt_ParamLimits

0x4f3e,	// (0x000317a6) tabs_2_long_passive_pane_srt

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp4_srt

0x7604,	// (0x00033e6c) bg_passive_tab_pane_g1_cp4_srt

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp4_srt

0x75fb,	// (0x00033e63) bg_passive_tab_pane_g3_cp4_srt

0x6243,	// (0x00032aab) bg_active_tab_pane_cp4_srt_ParamLimits

0x6243,	// (0x00032aab) bg_active_tab_pane_cp4_srt

0xc3e7,	// (0x00038c4f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc3e7,	// (0x00038c4f) tabs_2_long_active_pane_srt_t1

0x7604,	// (0x00033e6c) bg_active_tab_pane_g1_cp4_srt

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp4_srt

0x75fb,	// (0x00033e63) bg_active_tab_pane_g3_cp4_srt

0x4f30,	// (0x00031798) tabs_3_long_active_pane_srt_ParamLimits

0x4f30,	// (0x00031798) tabs_3_long_active_pane_srt

0x4f30,	// (0x00031798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4f30,	// (0x00031798) tabs_3_long_passive_pane_cp_srt

0x4f30,	// (0x00031798) tabs_3_long_passive_pane_srt_ParamLimits

0x4f30,	// (0x00031798) tabs_3_long_passive_pane_srt

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp5_srt

0x5cb4,	// (0x0003251c) bg_passive_tab_pane_g1_cp5_srt

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp5_srt

0x5cab,	// (0x00032513) bg_passive_tab_pane_g3_cp5_srt

0x6243,	// (0x00032aab) bg_active_tab_pane_cp5_srt_ParamLimits

0x6243,	// (0x00032aab) bg_active_tab_pane_cp5_srt

0xc3d5,	// (0x00038c3d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc3d5,	// (0x00038c3d) tabs_3_long_active_pane_srt_t1

0x5cb4,	// (0x0003251c) bg_active_tab_pane_g1_cp5_srt

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp5_srt

0x5cab,	// (0x00032513) bg_active_tab_pane_g3_cp5_srt

0x75ed,	// (0x00033e55) navi_text_pane_srt_t1

0x75e5,	// (0x00033e4d) navi_icon_pane_srt_g1

0x60aa,	// (0x00032912) midp_editing_number_pane_srt

0x5fbb,	// (0x00032823) midp_ticker_pane_srt

0x60b2,	// (0x0003291a) midp_ticker_pane_srt_g1

0x60ba,	// (0x00032922) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003c01f) midp_ticker_pane_srt_g

0x60c2,	// (0x0003292a) midp_ticker_pane_srt_t1

0x75d6,	// (0x00033e3e) midp_editing_number_pane_t1_copy1

0xb85e,	// (0x000380c6) listscroll_midp_pane

0xb85e,	// (0x000380c6) midp_form_pane

0x5fc3,	// (0x0003282b) midp_info_popup_window_ParamLimits

0x5fc3,	// (0x0003282b) midp_info_popup_window

0x563d,	// (0x00031ea5) bg_popup_sub_pane_cp50_ParamLimits

0x563d,	// (0x00031ea5) bg_popup_sub_pane_cp50

0x689a,	// (0x00033102) listscroll_midp_info_pane_ParamLimits

0x689a,	// (0x00033102) listscroll_midp_info_pane

0x6882,	// (0x000330ea) listscroll_form_midp_pane_ParamLimits

0x6882,	// (0x000330ea) listscroll_form_midp_pane

0x688e,	// (0x000330f6) scroll_bar_cp050

0xc21f,	// (0x00038a87) list_midp_pane

0x7f72,	// (0x000347da) signal_pane_g2_cp

0x67b4,	// (0x0003301c) listscroll_midp_info_pane_t1_ParamLimits

0x67b4,	// (0x0003301c) listscroll_midp_info_pane_t1

0x67cc,	// (0x00033034) listscroll_midp_info_pane_t2_ParamLimits

0x67cc,	// (0x00033034) listscroll_midp_info_pane_t2

0x680a,	// (0x00033072) listscroll_midp_info_pane_t3_ParamLimits

0x680a,	// (0x00033072) listscroll_midp_info_pane_t3

0x6844,	// (0x000330ac) listscroll_midp_info_pane_t4_ParamLimits

0x6844,	// (0x000330ac) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0003c0d0) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0003c0d0) listscroll_midp_info_pane_t

0x56a4,	// (0x00031f0c) scroll_pane_cp21

0x6758,	// (0x00032fc0) form_midp_field_choice_group_pane

0x6761,	// (0x00032fc9) form_midp_field_text_pane

0x679a,	// (0x00033002) form_midp_field_time_pane

0x67a2,	// (0x0003300a) form_midp_gauge_slider_pane

0x67ab,	// (0x00033013) form_midp_gauge_wait_pane

0x4ee2,	// (0x0003174a) form_midp_image_pane

0x9092,	// (0x000358fa) list_single_midp_pane_ParamLimits

0x9092,	// (0x000358fa) list_single_midp_pane

0xc1e0,	// (0x00038a48) form_midp_field_text_pane_t1

0x65ff,	// (0x00032e67) input_focus_pane_cp050

0x6747,	// (0x00032faf) list_midp_form_text_pane

0x6716,	// (0x00032f7e) form_midp_field_choice_group_pane_t1

0x6724,	// (0x00032f8c) input_focus_pane_cp051

0x6738,	// (0x00032fa0) list_midp_choice_pane

0x4ee2,	// (0x0003174a) status_idle_pane

0x66fa,	// (0x00032f62) form_midp_field_time_pane_t1

0x4ed8,	// (0x00031740) wait_anim_pane_g2_copy1

0x6708,	// (0x00032f70) form_midp_field_time_pane_t2

0x0001,

0x601c,	// (0x00032884) aid_navinavi_width_2_pane

0xf863,	// (0x0003c0cb) form_midp_field_time_pane_t

0x4ee2,	// (0x0003174a) input_focus_pane_cp052

0x4ee2,	// (0x0003174a) bg_input_focus_pane_cp040

0x66d6,	// (0x00032f3e) form_midp_gauge_slider_pane_t1

0x66e4,	// (0x00032f4c) form_midp_gauge_slider_pane_t2

0xc1c4,	// (0x00038a2c) form_midp_gauge_slider_pane_t3

0xc1d2,	// (0x00038a3a) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0003c0c2) form_midp_gauge_slider_pane_t

0x66f2,	// (0x00032f5a) form_midp_slider_pane

0x4f3e,	// (0x000317a6) bg_input_focus_pane_cp041_ParamLimits

0x4f3e,	// (0x000317a6) bg_input_focus_pane_cp041

0x66a3,	// (0x00032f0b) form_midp_gauge_wait_pane_t1_ParamLimits

0x66a3,	// (0x00032f0b) form_midp_gauge_wait_pane_t1

0x66b5,	// (0x00032f1d) form_midp_gauge_wait_pane_t2_ParamLimits

0x66b5,	// (0x00032f1d) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0003c0bd) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0003c0bd) form_midp_gauge_wait_pane_t

0x66c7,	// (0x00032f2f) form_midp_wait_pane_ParamLimits

0x66c7,	// (0x00032f2f) form_midp_wait_pane

0x666d,	// (0x00032ed5) form_midp_image_pane_g1

0x6676,	// (0x00032ede) form_midp_image_pane_t1

0x6685,	// (0x00032eed) form_midp_image_pane_t2

0x6694,	// (0x00032efc) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0003c0b6) form_midp_image_pane_t

0x6664,	// (0x00032ecc) list_single_midp_pane_g1

0x9083,	// (0x000358eb) list_single_midp_pane_t1

0xc194,	// (0x000389fc) list_midp_form_item_pane_ParamLimits

0xc194,	// (0x000389fc) list_midp_form_item_pane

0x5fd6,	// (0x0003283e) list_midp_form_item_pane_t1

0x5fe5,	// (0x0003284d) midp_ticker_pane_g1

0x5ff1,	// (0x00032859) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003c005) midp_ticker_pane_g

0xb913,	// (0x0003817b) midp_ticker_pane_t1

0xc556,	// (0x00038dbe) midp_editing_number_pane_t1

0x7664,	// (0x00033ecc) midp_editing_number_pane

0x7673,	// (0x00033edb) midp_ticker_pane

0x75c6,	// (0x00033e2e) ai_message_heading_pane

0x4ee2,	// (0x0003174a) bg_popup_window_pane_cp14

0x75ce,	// (0x00033e36) listscroll_ai_message_pane

0x7550,	// (0x00033db8) ai_message_heading_pane_g1_ParamLimits

0x7550,	// (0x00033db8) ai_message_heading_pane_g1

0x755c,	// (0x00033dc4) ai_message_heading_pane_g2_ParamLimits

0x755c,	// (0x00033dc4) ai_message_heading_pane_g2

0x7568,	// (0x00033dd0) ai_message_heading_pane_g3_ParamLimits

0x7568,	// (0x00033dd0) ai_message_heading_pane_g3

0x7574,	// (0x00033ddc) ai_message_heading_pane_g4_ParamLimits

0x7574,	// (0x00033ddc) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0003c1f7) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0003c1f7) ai_message_heading_pane_g

0x7580,	// (0x00033de8) ai_message_heading_pane_t1_ParamLimits

0x7580,	// (0x00033de8) ai_message_heading_pane_t1

0x759a,	// (0x00033e02) ai_message_heading_pane_t2_ParamLimits

0x759a,	// (0x00033e02) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0003c200) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0003c200) ai_message_heading_pane_t

0x75ac,	// (0x00033e14) bg_popup_heading_pane_cp1_ParamLimits

0x75ac,	// (0x00033e14) bg_popup_heading_pane_cp1

0x753e,	// (0x00033da6) list_ai_message_pane_ParamLimits

0x753e,	// (0x00033da6) list_ai_message_pane

0x56a4,	// (0x00031f0c) scroll_pane_cp10

0x74da,	// (0x00033d42) list_ai_message_pane_g1

0x74e2,	// (0x00033d4a) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0003c1d4) list_ai_message_pane_g

0x74ea,	// (0x00033d52) list_ai_message_pane_t1_ParamLimits

0x74ea,	// (0x00033d52) list_ai_message_pane_t1

0x74ff,	// (0x00033d67) list_ai_message_pane_t2_ParamLimits

0x74ff,	// (0x00033d67) list_ai_message_pane_t2

0x7514,	// (0x00033d7c) list_ai_message_pane_t3_ParamLimits

0x7514,	// (0x00033d7c) list_ai_message_pane_t3

0x7529,	// (0x00033d91) list_ai_message_pane_t4_ParamLimits

0x7529,	// (0x00033d91) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0003c1d9) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0003c1d9) list_ai_message_pane_t

0xc3bf,	// (0x00038c27) cell_ai_soft_ind_pane_ParamLimits

0xc3bf,	// (0x00038c27) cell_ai_soft_ind_pane

0x5ffd,	// (0x00032865) cell_ai_soft_ind_pane_g1_ParamLimits

0x5ffd,	// (0x00032865) cell_ai_soft_ind_pane_g1

0x4ee2,	// (0x0003174a) grid_highlight_cp1

0x600a,	// (0x00032872) text_secondary_cp56_ParamLimits

0x600a,	// (0x00032872) text_secondary_cp56

0x74af,	// (0x00033d17) example_general_pane_ParamLimits

0x74af,	// (0x00033d17) example_general_pane

0x74bb,	// (0x00033d23) example_parent_pane_g1_ParamLimits

0x74bb,	// (0x00033d23) example_parent_pane_g1

0x74c7,	// (0x00033d2f) example_parent_pane_t1_ParamLimits

0x74c7,	// (0x00033d2f) example_parent_pane_t1

0xbc3f,	// (0x000384a7) popup_preview_text_window_ParamLimits

0xbc3f,	// (0x000384a7) popup_preview_text_window

0x5eea,	// (0x00032752) list_single_pane_cp2_g4

0x510d,	// (0x00031975) bg_popup_preview_window_pane_ParamLimits

0x510d,	// (0x00031975) bg_popup_preview_window_pane

0x7230,	// (0x00033a98) popup_preview_text_window_t1_ParamLimits

0x7230,	// (0x00033a98) popup_preview_text_window_t1

0x724e,	// (0x00033ab6) popup_preview_text_window_t2_ParamLimits

0x724e,	// (0x00033ab6) popup_preview_text_window_t2

0x7297,	// (0x00033aff) popup_preview_text_window_t3_ParamLimits

0x7297,	// (0x00033aff) popup_preview_text_window_t3

0x72dc,	// (0x00033b44) popup_preview_text_window_t4_ParamLimits

0x72dc,	// (0x00033b44) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0003c1a8) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0003c1a8) popup_preview_text_window_t

0x735a,	// (0x00033bc2) scroll_pane_cp11

0x650f,	// (0x00032d77) bg_popup_preview_window_pane_g1

0x71f0,	// (0x00033a58) bg_popup_preview_window_pane_g2

0x71f8,	// (0x00033a60) bg_popup_preview_window_pane_g3

0x7200,	// (0x00033a68) bg_popup_preview_window_pane_g4

0x7208,	// (0x00033a70) bg_popup_preview_window_pane_g5

0x7210,	// (0x00033a78) bg_popup_preview_window_pane_g6

0x7218,	// (0x00033a80) bg_popup_preview_window_pane_g7

0x7220,	// (0x00033a88) bg_popup_preview_window_pane_g8

0x96b0,	// (0x00035f18) aid_popup_width_pane

0xbc1d,	// (0x00038485) popup_midp_note_alarm_window_ParamLimits

0xbc1d,	// (0x00038485) popup_midp_note_alarm_window

0x5579,	// (0x00031de1) data_form_pane_ParamLimits

0x8d98,	// (0x00035600) form_field_data_pane_g1

0x8da2,	// (0x0003560a) form_field_data_pane_t1_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_ParamLimits

0x5593,	// (0x00031dfb) data_form_wide_pane_ParamLimits

0x8dbc,	// (0x00035624) form_field_data_wide_pane_g1

0x8dc8,	// (0x00035630) form_field_data_wide_pane_t1_ParamLimits

0x5300,	// (0x00031b68) input_focus_pane_cp6_ParamLimits

0x9ea2,	// (0x0003670a) input_popup_find_pane_g1_ParamLimits

0x9ea2,	// (0x0003670a) input_popup_find_pane_g1

0x9ffb,	// (0x00036863) aid_navi_side_left_pane

0xa010,	// (0x00036878) aid_navi_side_right_pane

0x6cf5,	// (0x0003355d) bg_popup_window_pane_cp30_ParamLimits

0x6cf5,	// (0x0003355d) bg_popup_window_pane_cp30

0x6d6f,	// (0x000335d7) popup_midp_note_alarm_window_g1_ParamLimits

0x6d6f,	// (0x000335d7) popup_midp_note_alarm_window_g1

0x6d9f,	// (0x00033607) popup_midp_note_alarm_window_t1_ParamLimits

0x6d9f,	// (0x00033607) popup_midp_note_alarm_window_t1

0x6e40,	// (0x000336a8) popup_midp_note_alarm_window_t2_ParamLimits

0x6e40,	// (0x000336a8) popup_midp_note_alarm_window_t2

0x6eee,	// (0x00033756) popup_midp_note_alarm_window_t3_ParamLimits

0x6eee,	// (0x00033756) popup_midp_note_alarm_window_t3

0x6f16,	// (0x0003377e) popup_midp_note_alarm_window_t4_ParamLimits

0x6f16,	// (0x0003377e) popup_midp_note_alarm_window_t4

0x6f36,	// (0x0003379e) popup_midp_note_alarm_window_t5_ParamLimits

0x6f36,	// (0x0003379e) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0003c145) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0003c145) popup_midp_note_alarm_window_t

0x6fe2,	// (0x0003384a) wait_bar_pane_cp1_ParamLimits

0x6fe2,	// (0x0003384a) wait_bar_pane_cp1

0x4ee2,	// (0x0003174a) wait_anim_pane_copy1

0x4ee2,	// (0x0003174a) wait_border_pane_copy1

0x6a0d,	// (0x00033275) wait_border_pane_g1_copy1

0x8de2,	// (0x0003564a) form_field_popup_pane_g1

0x8dea,	// (0x00035652) form_field_popup_pane_t1_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_cp7_ParamLimits

0x55bf,	// (0x00031e27) list_form_pane_ParamLimits

0x8e04,	// (0x0003566c) form_field_popup_wide_pane_g1

0x8e0c,	// (0x00035674) form_field_popup_wide_pane_t1_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_cp8_ParamLimits

0x55cb,	// (0x00031e33) list_form_wide_pane_ParamLimits

0x7709,	// (0x00033f71) aid_size_cell_graphic_pane

0x8e98,	// (0x00035700) data_form_pane_t1_ParamLimits

0x90f2,	// (0x0003595a) data_form_wide_pane_t1_ParamLimits

0xbe89,	// (0x000386f1) bg_status_flat_pane

0x9a9f,	// (0x00036307) title_pane_t1_ParamLimits

0x4ef8,	// (0x00031760) title_pane_t2_ParamLimits

0x4f1e,	// (0x00031786) title_pane_t3_ParamLimits

0xf59b,	// (0x0003be03) title_pane_t_ParamLimits

0x5a41,	// (0x000322a9) level_1_signal_ParamLimits

0x5a4e,	// (0x000322b6) level_2_signal_ParamLimits

0x5a5b,	// (0x000322c3) level_3_signal_ParamLimits

0x5a68,	// (0x000322d0) level_4_signal_ParamLimits

0x5a75,	// (0x000322dd) level_5_signal_ParamLimits

0x5a82,	// (0x000322ea) level_6_signal_ParamLimits

0x5a8f,	// (0x000322f7) level_7_signal_ParamLimits

0x5a41,	// (0x000322a9) level_1_battery_ParamLimits

0x5a4e,	// (0x000322b6) level_2_battery_ParamLimits

0x5a5b,	// (0x000322c3) level_3_battery_ParamLimits

0x5a68,	// (0x000322d0) level_4_battery_ParamLimits

0x5a75,	// (0x000322dd) level_5_battery_ParamLimits

0x5a82,	// (0x000322ea) level_6_battery_ParamLimits

0x5a8f,	// (0x000322f7) level_7_battery_ParamLimits

0x6c18,	// (0x00033480) bg_status_flat_pane_g1

0x6c20,	// (0x00033488) bg_status_flat_pane_g2

0x6c28,	// (0x00033490) bg_status_flat_pane_g3

0x6c30,	// (0x00033498) bg_status_flat_pane_g4

0x6c38,	// (0x000334a0) bg_status_flat_pane_g5

0x6c40,	// (0x000334a8) bg_status_flat_pane_g6

0x6c48,	// (0x000334b0) bg_status_flat_pane_g7

0x9b0f,	// (0x00036377) tabs_3_active_pane_t1_ParamLimits

0x9b0f,	// (0x00036377) tabs_3_passive_pane_t1_ParamLimits

0x9b29,	// (0x00036391) tabs_4_active_pane_t1_ParamLimits

0x9b29,	// (0x00036391) tabs_4_1_passive_pane_t1_ParamLimits

0x9eb8,	// (0x00036720) tabs_2_active_pane_t1_ParamLimits

0x9eb8,	// (0x00036720) tabs_2_passive_pane_t1_ParamLimits

0x6243,	// (0x00032aab) bg_active_tab_pane_cp4_ParamLimits

0x9eca,	// (0x00036732) tabs_2_long_active_pane_t1_ParamLimits

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp4_ParamLimits

0xa6b7,	// (0x00036f1f) list_single_midp_graphic_pane_t1_ParamLimits

0x6243,	// (0x00032aab) bg_active_tab_pane_cp5_ParamLimits

0x9ee9,	// (0x00036751) tabs_3_long_active_pane_t1_ParamLimits

0x9edd,	// (0x00036745) bg_passive_tab_pane_cp5_ParamLimits

0xa6b7,	// (0x00036f1f) list_single_midp_graphic_pane_t1

0xbe89,	// (0x000386f1) bg_status_flat_pane_ParamLimits

0x63e2,	// (0x00032c4a) indicator_pane_cp2_ParamLimits

0x63e2,	// (0x00032c4a) indicator_pane_cp2

0xbfcc,	// (0x00038834) navi_pane_srt_ParamLimits

0xbfcc,	// (0x00038834) navi_pane_srt

0x640a,	// (0x00032c72) popup_clock_digital_analogue_window_cp1

0x4f82,	// (0x000317ea) indicator_pane_t1

0x5fbb,	// (0x00032823) copy_highlight_pane

0x5fbb,	// (0x00032823) cursor_graphics_pane

0x5fbb,	// (0x00032823) graphic_within_text_pane

0x5fbb,	// (0x00032823) link_highlight_pane

0x731d,	// (0x00033b85) popup_preview_text_window_t5_ParamLimits

0x731d,	// (0x00033b85) popup_preview_text_window_t5

0x6024,	// (0x0003288c) cursor_digital_pane

0x6024,	// (0x0003288c) cursor_primary_pane

0x6035,	// (0x0003289d) cursor_primary_small_pane

0x603d,	// (0x000328a5) cursor_secondary_pane

0x6045,	// (0x000328ad) cursor_title_pane

0x6024,	// (0x0003288c) link_highlight_digital_pane

0x602c,	// (0x00032894) link_highlight_primary_pane

0x6035,	// (0x0003289d) link_highlight_primary_small_pane

0x603d,	// (0x000328a5) link_highlight_secondary_pane

0x6045,	// (0x000328ad) link_highlight_title_pane

0x6024,	// (0x0003288c) copy_highlight_digital_pane

0x6024,	// (0x0003288c) copy_highlight_primary_pane

0x6035,	// (0x0003289d) copy_highlight_primary_small_pane

0x603d,	// (0x000328a5) copy_highlight_secondary_pane

0x6045,	// (0x000328ad) copy_highlight_title_pane

0x603d,	// (0x000328a5) graphic_text_digital_pane

0x6c98,	// (0x00033500) graphic_text_primary_pane

0x6ca1,	// (0x00033509) graphic_text_primary_small_pane

0x6035,	// (0x0003289d) graphic_text_secondary_pane

0x6024,	// (0x0003288c) graphic_text_title_pane

0xb925,	// (0x0003818d) cursor_primary_pane_g1

0x6c8a,	// (0x000334f2) cursor_text_primary_t1

0xc267,	// (0x00038acf) cursor_primary_small_pane_g1

0x6c7c,	// (0x000334e4) cursor_text_primary_small_t1

0xc25d,	// (0x00038ac5) cursor_primary_small_pane_g1_copy1

0x6c6e,	// (0x000334d6) cursor_text_primary_small_t1_copy1

0x6c60,	// (0x000334c8) cursor_text_title_t1

0xc253,	// (0x00038abb) cursor_title_pane_g1

0xb925,	// (0x0003818d) cursor_digital_pane_g1

0x604d,	// (0x000328b5) cursor_text_digital_t1

0x6c01,	// (0x00033469) link_highlight_primary_pane_g1

0x6c09,	// (0x00033471) link_highlight_primary_pane_t1

0x605b,	// (0x000328c3) link_highlight_primary_small_pane_g1

0x6063,	// (0x000328cb) link_highlight_primary_small_pane_t1

0x605b,	// (0x000328c3) link_highlight_secondary_pane_g1

0x6072,	// (0x000328da) link_highlight_secondary_pane_t1

0x6b75,	// (0x000333dd) link_highlight_title_pane_g1

0x6b7d,	// (0x000333e5) link_highlight_title_pane_t1

0x6b5e,	// (0x000333c6) link_highlight_digital_pane_g1

0x6b66,	// (0x000333ce) link_highlight_digital_pane_t1

0x6a52,	// (0x000332ba) copy_highlight_primary_pane_g1

0x6a5a,	// (0x000332c2) copy_highlight_primary_pane_t1

0x6a2c,	// (0x00033294) copy_highlight_primary_small_pane_g1

0x6a43,	// (0x000332ab) copy_highlight_primary_small_pane_t1

0x6081,	// (0x000328e9) copy_highlight_secondary_pane_g1

0x6089,	// (0x000328f1) copy_highlight_secondary_pane_t1

0x6a2c,	// (0x00033294) copy_highlight_title_pane_g1

0x6a34,	// (0x0003329c) copy_highlight_title_pane_t1

0x6a52,	// (0x000332ba) copy_highlight_digital_pane_g1

0x7893,	// (0x000340fb) copy_highlight_digital_pane_t1

0x77e7,	// (0x0003404f) graphic_text_primary_pane_g1

0x7877,	// (0x000340df) graphic_text_primary_pane_t1

0x7885,	// (0x000340ed) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0003c274) graphic_text_primary_pane_t

0x7853,	// (0x000340bb) graphic_text_primary_small_pane_g1

0x785b,	// (0x000340c3) graphic_text_primary_small_pane_t1

0x7869,	// (0x000340d1) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0003c26f) graphic_text_primary_small_pane_t

0x782f,	// (0x00034097) graphic_text_secondary_pane_g1

0x7837,	// (0x0003409f) graphic_text_secondary_pane_t1

0x7845,	// (0x000340ad) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0003c26a) graphic_text_secondary_pane_t

0x780b,	// (0x00034073) graphic_text_title_pane_g1

0x7813,	// (0x0003407b) graphic_text_title_pane_t1

0x7821,	// (0x00034089) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0003c265) graphic_text_title_pane_t

0x77e7,	// (0x0003404f) graphic_text_digital_pane_g1

0x77ef,	// (0x00034057) graphic_text_digital_pane_t1

0x77fd,	// (0x00034065) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0003c260) graphic_text_digital_pane_t

0x4f3e,	// (0x000317a6) navi_icon_pane_srt_ParamLimits

0x4f3e,	// (0x000317a6) navi_icon_pane_srt

0x4ee2,	// (0x0003174a) navi_midp_pane_srt

0x4ee2,	// (0x0003174a) navi_navi_pane_srt

0x4f3e,	// (0x000317a6) navi_text_pane_srt_ParamLimits

0x4f3e,	// (0x000317a6) navi_text_pane_srt

0x77b2,	// (0x0003401a) navi_navi_icon_text_pane_srt

0x77cc,	// (0x00034034) navi_navi_pane_srt_g1_ParamLimits

0x77cc,	// (0x00034034) navi_navi_pane_srt_g1

0x77ba,	// (0x00034022) navi_navi_pane_srt_g2_ParamLimits

0x77ba,	// (0x00034022) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0003c25b) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0003c25b) navi_navi_pane_srt_g

0x77de,	// (0x00034046) navi_navi_tabs_pane_srt

0x77b2,	// (0x0003401a) navi_navi_text_pane_srt

0x77b2,	// (0x0003401a) navi_navi_volume_pane_srt

0x77a3,	// (0x0003400b) navi_navi_text_pane_srt_t1

0xaaed,	// (0x00037355) navi_navi_volume_pane_srt_g1

0xaaf5,	// (0x0003735d) volume_small_pane_srt_ParamLimits

0xaaf5,	// (0x0003735d) volume_small_pane_srt

0xa42d,	// (0x00036c95) volume_small_pane_srt_g1_ParamLimits

0xa42d,	// (0x00036c95) volume_small_pane_srt_g1

0xa43d,	// (0x00036ca5) volume_small_pane_srt_g2_ParamLimits

0xa43d,	// (0x00036ca5) volume_small_pane_srt_g2

0xa44e,	// (0x00036cb6) volume_small_pane_srt_g3_ParamLimits

0xa44e,	// (0x00036cb6) volume_small_pane_srt_g3

0xa45f,	// (0x00036cc7) volume_small_pane_srt_g4_ParamLimits

0xa45f,	// (0x00036cc7) volume_small_pane_srt_g4

0xa470,	// (0x00036cd8) volume_small_pane_srt_g5_ParamLimits

0xa470,	// (0x00036cd8) volume_small_pane_srt_g5

0xa481,	// (0x00036ce9) volume_small_pane_srt_g6_ParamLimits

0xa481,	// (0x00036ce9) volume_small_pane_srt_g6

0xa492,	// (0x00036cfa) volume_small_pane_srt_g7_ParamLimits

0xa492,	// (0x00036cfa) volume_small_pane_srt_g7

0xa4a3,	// (0x00036d0b) volume_small_pane_srt_g8_ParamLimits

0xa4a3,	// (0x00036d0b) volume_small_pane_srt_g8

0xa4b4,	// (0x00036d1c) volume_small_pane_srt_g9_ParamLimits

0xa4b4,	// (0x00036d1c) volume_small_pane_srt_g9

0xa4c5,	// (0x00036d2d) volume_small_pane_srt_g10_ParamLimits

0xa4c5,	// (0x00036d2d) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003c00a) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003c00a) volume_small_pane_srt_g

0x51b6,	// (0x00031a1e) query_popup_data_pane_cp2

0x7789,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7789,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1

0x6c98,	// (0x00033500) navi_tabs_2_long_pane_srt

0x6c98,	// (0x00033500) navi_tabs_2_pane_srt

0x6c98,	// (0x00033500) navi_tabs_3_long_pane_srt

0x6c98,	// (0x00033500) navi_tabs_3_pane_srt

0x6c98,	// (0x00033500) navi_tabs_4_pane_srt

0xaacd,	// (0x00037335) tabs_2_active_pane_srt_ParamLimits

0xaacd,	// (0x00037335) tabs_2_active_pane_srt

0xaadd,	// (0x00037345) tabs_2_passive_pane_srt_ParamLimits

0xaadd,	// (0x00037345) tabs_2_passive_pane_srt

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp1_srt

0x7770,	// (0x00033fd8) bg_passive_tab_pane_g1_cp1_srt

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp1_srt

0x7767,	// (0x00033fcf) bg_passive_tab_pane_g3_cp1_srt

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp1_srt_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp1_srt

0x7779,	// (0x00033fe1) tabs_2_active_pane_srt_g1

0xc617,	// (0x00038e7f) tabs_2_active_pane_srt_t1_ParamLimits

0xc617,	// (0x00038e7f) tabs_2_active_pane_srt_t1

0x7770,	// (0x00033fd8) bg_active_tab_pane_g1_cp1_srt

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp1_srt

0x7767,	// (0x00033fcf) bg_active_tab_pane_g3_cp1_srt

0xaa9a,	// (0x00037302) tabs_3_active_pane_srt_ParamLimits

0xaa9a,	// (0x00037302) tabs_3_active_pane_srt

0xaaab,	// (0x00037313) tabs_3_passive_pane_cp_srt_ParamLimits

0xaaab,	// (0x00037313) tabs_3_passive_pane_cp_srt

0xaabc,	// (0x00037324) tabs_3_passive_pane_srt_ParamLimits

0xaabc,	// (0x00037324) tabs_3_passive_pane_srt

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x61f5,	// (0x00032a5d) bg_passive_tab_pane_cp2_srt

0x60a1,	// (0x00032909) bg_passive_tab_pane_g1_cp2_srt

0x5c64,	// (0x000324cc) bg_passive_tab_pane_g2_cp2_srt

0x6098,	// (0x00032900) bg_passive_tab_pane_g3_cp2_srt

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp2_srt_ParamLimits

0x4f3e,	// (0x000317a6) bg_active_tab_pane_cp2_srt

0x775f,	// (0x00033fc7) tabs_3_active_pane_srt_g1

0xc605,	// (0x00038e6d) tabs_3_active_pane_srt_t1_ParamLimits

0xc605,	// (0x00038e6d) tabs_3_active_pane_srt_t1

0x60a1,	// (0x00032909) bg_active_tab_pane_g1_cp2_srt

0x5c64,	// (0x000324cc) bg_active_tab_pane_g2_cp2_srt

0x6098,	// (0x00032900) bg_active_tab_pane_g3_cp2_srt

0xaa52,	// (0x000372ba) tabs_4_active_pane_srt_ParamLimits

0xaa52,	// (0x000372ba) tabs_4_active_pane_srt

0xaa64,	// (0x000372cc) tabs_4_passive_pane_cp2_srt_ParamLimits

0xaa64,	// (0x000372cc) tabs_4_passive_pane_cp2_srt

0x61c5,	// (0x00032a2d) aid_size_cell_toolbar

0x9edd,	// (0x00036745) main_idle_act_pane_ParamLimits

0x62a9,	// (0x00032b11) popup_large_graphic_colour_window_ParamLimits

0xbd91,	// (0x000385f9) popup_toolbar_window_ParamLimits

0xbd91,	// (0x000385f9) popup_toolbar_window

0x7686,	// (0x00033eee) list_single_graphic_2heading_pane_ParamLimits

0x7686,	// (0x00033eee) list_single_graphic_2heading_pane

0x587a,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane

0x588c,	// (0x000320f4) aid_size_cell_apps_grid_prt_pane

0x61f5,	// (0x00032a5d) bg_wml_button_pane_cp1_ParamLimits

0x61f5,	// (0x00032a5d) bg_wml_button_pane_cp1

0xc1e0,	// (0x00038a48) form_midp_field_text_pane_t1_ParamLimits

0x65ff,	// (0x00032e67) input_focus_pane_cp050_ParamLimits

0x6747,	// (0x00032faf) list_midp_form_text_pane_ParamLimits

0x6724,	// (0x00032f8c) input_focus_pane_cp051_ParamLimits

0x6738,	// (0x00032fa0) list_midp_choice_pane_ParamLimits

0xc12e,	// (0x00038996) list_single_2graphic_pane_cp3_ParamLimits

0xc12e,	// (0x00038996) list_single_2graphic_pane_cp3

0xc15a,	// (0x000389c2) list_single_midp_graphic_pane_ParamLimits

0xc15a,	// (0x000389c2) list_single_midp_graphic_pane

0x8fcb,	// (0x00035833) list_single_graphic_2heading_pane_g1_ParamLimits

0x8fcb,	// (0x00035833) list_single_graphic_2heading_pane_g1

0x8fd7,	// (0x0003583f) list_single_graphic_2heading_pane_g4_ParamLimits

0x8fd7,	// (0x0003583f) list_single_graphic_2heading_pane_g4

0x8fe3,	// (0x0003584b) list_single_graphic_2heading_pane_g5_ParamLimits

0x8fe3,	// (0x0003584b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003c05d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003c05d) list_single_graphic_2heading_pane_g

0x8fef,	// (0x00035857) list_single_graphic_2heading_pane_t1_ParamLimits

0x8fef,	// (0x00035857) list_single_graphic_2heading_pane_t1

0x9003,	// (0x0003586b) list_single_graphic_2heading_pane_t2_ParamLimits

0x9003,	// (0x0003586b) list_single_graphic_2heading_pane_t2

0x901f,	// (0x00035887) list_single_graphic_2heading_pane_t3_ParamLimits

0x901f,	// (0x00035887) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003c064) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003c064) list_single_graphic_2heading_pane_t

0x644d,	// (0x00032cb5) bg_popup_sub_pane_cp2

0x6477,	// (0x00032cdf) grid_toobar_pane

0xa63c,	// (0x00036ea4) cell_toolbar_pane_ParamLimits

0xa63c,	// (0x00036ea4) cell_toolbar_pane

0x64b3,	// (0x00032d1b) cell_toolbar_pane_g1_ParamLimits

0x64b3,	// (0x00032d1b) cell_toolbar_pane_g1

0x64c7,	// (0x00032d2f) cell_toolbar_pane_g2_ParamLimits

0x64c7,	// (0x00032d2f) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003c072) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003c072) cell_toolbar_pane_g

0x64e9,	// (0x00032d51) grid_highlight_pane_cp2_ParamLimits

0x64e9,	// (0x00032d51) grid_highlight_pane_cp2

0x6503,	// (0x00032d6b) toolbar_button_pane

0x650f,	// (0x00032d77) toolbar_button_pane_g1

0x651f,	// (0x00032d87) toolbar_button_pane_g2

0x6517,	// (0x00032d7f) toolbar_button_pane_g3

0x652f,	// (0x00032d97) toolbar_button_pane_g4

0x6527,	// (0x00032d8f) toolbar_button_pane_g5

0x6537,	// (0x00032d9f) toolbar_button_pane_g6

0x653f,	// (0x00032da7) toolbar_button_pane_g7

0x654f,	// (0x00032db7) toolbar_button_pane_g8

0x6547,	// (0x00032daf) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003c077) toolbar_button_pane_g

0xa674,	// (0x00036edc) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa674,	// (0x00036edc) list_single_2graphic_pane_g1_cp3

0xa680,	// (0x00036ee8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa680,	// (0x00036ee8) list_single_2graphic_pane_g2_cp3

0x5de7,	// (0x0003264f) list_single_2graphic_pane_g3_cp3

0xa691,	// (0x00036ef9) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa691,	// (0x00036ef9) list_single_2graphic_pane_g4_cp3

0xa69d,	// (0x00036f05) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa69d,	// (0x00036f05) list_single_2graphic_pane_t1_cp3

0x5ddb,	// (0x00032643) list_single_midp_graphic_pane_g2_ParamLimits

0x5ddb,	// (0x00032643) list_single_midp_graphic_pane_g2

0x8fb3,	// (0x0003581b) aid_zoom_text_primary

0x8fbb,	// (0x00035823) aid_zoom_text_secondary

0x6155,	// (0x000329bd) status_small_pane_g7_ParamLimits

0x6155,	// (0x000329bd) status_small_pane_g7

0x6178,	// (0x000329e0) status_small_pane_t1_ParamLimits

0x9a82,	// (0x000362ea) title_pane_g2

0x0003,

0xf592,	// (0x0003bdfa) title_pane_g

0x9cdc,	// (0x00036544) aid_size_cell_colour_1_pane_ParamLimits

0x9cdc,	// (0x00036544) aid_size_cell_colour_1_pane

0x9cf0,	// (0x00036558) aid_size_cell_colour_2_pane_ParamLimits

0x9cf0,	// (0x00036558) aid_size_cell_colour_2_pane

0x9d04,	// (0x0003656c) aid_size_cell_colour_3_pane_ParamLimits

0x9d04,	// (0x0003656c) aid_size_cell_colour_3_pane

0x9d18,	// (0x00036580) aid_size_cell_colour_4_pane_ParamLimits

0x9d18,	// (0x00036580) aid_size_cell_colour_4_pane

0x9f37,	// (0x0003679f) title_pane_stacon_g1_ParamLimits

0x9f37,	// (0x0003679f) title_pane_stacon_g1

0x6ab1,	// (0x00033319) popup_note_wait_window_g3_ParamLimits

0x6ab1,	// (0x00033319) popup_note_wait_window_g3

0x6b27,	// (0x0003338f) popup_note_wait_window_t5_ParamLimits

0x6b27,	// (0x0003338f) popup_note_wait_window_t5

0x4ee2,	// (0x0003174a) main_feb_china_hwr_fs_writing_pane

0xb9ba,	// (0x00038222) popup_feb_china_hwr_fs_window_ParamLimits

0xb9ba,	// (0x00038222) popup_feb_china_hwr_fs_window

0xa6cd,	// (0x00036f35) aid_size_cell_hwr_fs_ParamLimits

0xa6cd,	// (0x00036f35) aid_size_cell_hwr_fs

0x65ff,	// (0x00032e67) bg_popup_sub_pane_cp3_ParamLimits

0x65ff,	// (0x00032e67) bg_popup_sub_pane_cp3

0xa6e2,	// (0x00036f4a) grid_hwr_fs_pane_ParamLimits

0xa6e2,	// (0x00036f4a) grid_hwr_fs_pane

0xa6fa,	// (0x00036f62) linegrid_hwr_fs_pane_ParamLimits

0xa6fa,	// (0x00036f62) linegrid_hwr_fs_pane

0xa70a,	// (0x00036f72) cell_hwr_fs_pane_ParamLimits

0xa70a,	// (0x00036f72) cell_hwr_fs_pane

0x660b,	// (0x00032e73) linegrid_hwr_fs_pane_g1_ParamLimits

0x660b,	// (0x00032e73) linegrid_hwr_fs_pane_g1

0xc102,	// (0x0003896a) linegrid_hwr_fs_pane_g2_ParamLimits

0xc102,	// (0x0003896a) linegrid_hwr_fs_pane_g2

0x6617,	// (0x00032e7f) linegrid_hwr_fs_pane_g3_ParamLimits

0x6617,	// (0x00032e7f) linegrid_hwr_fs_pane_g3

0xa72c,	// (0x00036f94) linegrid_hwr_fs_pane_g4_ParamLimits

0xa72c,	// (0x00036f94) linegrid_hwr_fs_pane_g4

0xa746,	// (0x00036fae) linegrid_hwr_fs_pane_g5_ParamLimits

0xa746,	// (0x00036fae) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0003c0a2) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0003c0a2) linegrid_hwr_fs_pane_g

0x6623,	// (0x00032e8b) cell_hwr_fs_pane_g1_ParamLimits

0x6623,	// (0x00032e8b) cell_hwr_fs_pane_g1

0x641b,	// (0x00032c83) cell_hwr_fs_pane_g2_ParamLimits

0x641b,	// (0x00032c83) cell_hwr_fs_pane_g2

0xc114,	// (0x0003897c) cell_hwr_fs_pane_g3_ParamLimits

0xc114,	// (0x0003897c) cell_hwr_fs_pane_g3

0xc121,	// (0x00038989) cell_hwr_fs_pane_g4_ParamLimits

0xc121,	// (0x00038989) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0003c0ad) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0003c0ad) cell_hwr_fs_pane_g

0xa75c,	// (0x00036fc4) cell_hwr_fs_pane_t1

0x4ee2,	// (0x0003174a) grid_highlight_pane_cp6

0x4ee2,	// (0x0003174a) main_idle_act2_pane

0x568b,	// (0x00031ef3) aid_inside_area_popup_secondary

0xc287,	// (0x00038aef) aid_inside_area_window_primary_ParamLimits

0xc287,	// (0x00038aef) aid_inside_area_window_primary

0x78a2,	// (0x0003410a) ai2_news_ticker_pane

0x78aa,	// (0x00034112) aid_size_cell_ai1_link_ParamLimits

0x78aa,	// (0x00034112) aid_size_cell_ai1_link

0x78c4,	// (0x0003412c) popup_ai2_data_window_ParamLimits

0x78c4,	// (0x0003412c) popup_ai2_data_window

0x78d8,	// (0x00034140) popup_ai2_link_window_ParamLimits

0x78d8,	// (0x00034140) popup_ai2_link_window

0x65ff,	// (0x00032e67) bg_popup_sub_pane_cp4_ParamLimits

0x65ff,	// (0x00032e67) bg_popup_sub_pane_cp4

0x78ec,	// (0x00034154) grid_ai2_link_pane_ParamLimits

0x78ec,	// (0x00034154) grid_ai2_link_pane

0x7903,	// (0x0003416b) popup_ai2_link_window_g1_ParamLimits

0x7903,	// (0x0003416b) popup_ai2_link_window_g1

0x790f,	// (0x00034177) popup_ai2_link_window_g2_ParamLimits

0x790f,	// (0x00034177) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0003c279) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0003c279) popup_ai2_link_window_g

0x791e,	// (0x00034186) ai2_mp_button_pane

0x7926,	// (0x0003418e) ai2_mp_volume_pane

0x6724,	// (0x00032f8c) bg_popup_sub_pane_cp5_ParamLimits

0x6724,	// (0x00032f8c) bg_popup_sub_pane_cp5

0x792e,	// (0x00034196) heading_ai2_gene_pane_ParamLimits

0x792e,	// (0x00034196) heading_ai2_gene_pane

0x793a,	// (0x000341a2) list_ai2_gene_pane_ParamLimits

0x793a,	// (0x000341a2) list_ai2_gene_pane

0x7982,	// (0x000341ea) cell_ai2_link_pane_ParamLimits

0x7982,	// (0x000341ea) cell_ai2_link_pane

0x7998,	// (0x00034200) cell_ai2_link_pane_g1

0x4ee2,	// (0x0003174a) grid_highlight_pane_cp7

0xab0a,	// (0x00037372) ai2_mp_volume_pane_g1

0x7a71,	// (0x000342d9) ai2_mp_volume_pane_g2

0x79de,	// (0x00034246) list_ai2_gene_pane_t1

0x7a69,	// (0x000342d1) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0003c292) ai2_mp_volume_pane_g

0xab12,	// (0x0003737a) volume_small_pane_cp3

0x7a79,	// (0x000342e1) aid_size_cell_ai2_button

0x7a81,	// (0x000342e9) grid_ai2_button_pane

0x7a8a,	// (0x000342f2) cell_ai2_button_pane_ParamLimits

0x7a8a,	// (0x000342f2) cell_ai2_button_pane

0x4ed8,	// (0x00031740) cell_ai2_button_pane_g1

0x4ee2,	// (0x0003174a) grid_highlight_pane_cp8

0x7a29,	// (0x00034291) ai2_gene_pane_t1_ParamLimits

0x7a29,	// (0x00034291) ai2_gene_pane_t1

0xb956,	// (0x000381be) aid_height_parent_landscape

0xc3fa,	// (0x00038c62) aid_height_set_list

0x7431,	// (0x00033c99) aid_size_parent

0x7709,	// (0x00033f71) aid_size_cell_graphic_pane_ParamLimits

0x794a,	// (0x000341b2) popup_ai2_data_window_g1_ParamLimits

0x794a,	// (0x000341b2) popup_ai2_data_window_g1

0x7956,	// (0x000341be) ai2_news_ticker_pane_g1

0x795e,	// (0x000341c6) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0003c27e) ai2_news_ticker_pane_g

0x7966,	// (0x000341ce) ai2_news_ticker_pane_t1

0x7974,	// (0x000341dc) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0003c283) ai2_news_ticker_pane_t

0x79a1,	// (0x00034209) heading_ai2_gene_pane_g1

0x79a9,	// (0x00034211) heading_ai2_gene_pane_t1_ParamLimits

0x79a9,	// (0x00034211) heading_ai2_gene_pane_t1

0x79be,	// (0x00034226) list_highlight_pane_cp6

0x79c6,	// (0x0003422e) ai2_gene_pane_ParamLimits

0x79c6,	// (0x0003422e) ai2_gene_pane

0x79ec,	// (0x00034254) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0003c288) list_ai2_gene_pane_t

0x79fa,	// (0x00034262) list_highlight_pane_cp8_ParamLimits

0x79fa,	// (0x00034262) list_highlight_pane_cp8

0x7a0b,	// (0x00034273) ai2_gene_pane_g1_ParamLimits

0x7a0b,	// (0x00034273) ai2_gene_pane_g1

0x7a1d,	// (0x00034285) ai2_gene_pane_g2_ParamLimits

0x7a1d,	// (0x00034285) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0003c28d) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0003c28d) ai2_gene_pane_g

0x551b,	// (0x00031d83) scroll_pane_cp12

0xa5df,	// (0x00036e47) control_pane_t3_ParamLimits

0xa5df,	// (0x00036e47) control_pane_t3

0x6169,	// (0x000329d1) status_small_pane_g8_ParamLimits

0x6169,	// (0x000329d1) status_small_pane_g8

0xba44,	// (0x000382ac) popup_find_window_ParamLimits

0xbc31,	// (0x00038499) popup_note_image_window_ParamLimits

0x9037,	// (0x0003589f) list_double2_graphic_pane_vc_g1_ParamLimits

0x9037,	// (0x0003589f) list_double2_graphic_pane_vc_g1

0x9db0,	// (0x00036618) list_double2_graphic_pane_vc_g2_ParamLimits

0x9db0,	// (0x00036618) list_double2_graphic_pane_vc_g2

0x9dbc,	// (0x00036624) list_double2_graphic_pane_vc_g3_ParamLimits

0x9dbc,	// (0x00036624) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003c06b) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003c06b) list_double2_graphic_pane_vc_g

0x9043,	// (0x000358ab) list_double2_graphic_pane_vc_t1_ParamLimits

0x9043,	// (0x000358ab) list_double2_graphic_pane_vc_t1

0x9db0,	// (0x00036618) list_single_heading_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_single_heading_pane_vc_g1

0x9dbc,	// (0x00036624) list_single_heading_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_single_heading_pane_vc_g

0x9059,	// (0x000358c1) list_single_heading_pane_vc_t1_ParamLimits

0x9059,	// (0x000358c1) list_single_heading_pane_vc_t1

0x906f,	// (0x000358d7) list_single_heading_pane_vc_t2_ParamLimits

0x906f,	// (0x000358d7) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0003c091) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0003c091) list_single_heading_pane_vc_t

0x6557,	// (0x00032dbf) list_setting_number_pane_vc_g1_ParamLimits

0x6557,	// (0x00032dbf) list_setting_number_pane_vc_g1

0x6563,	// (0x00032dcb) list_setting_number_pane_vc_g2_ParamLimits

0x6563,	// (0x00032dcb) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0003c096) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0003c096) list_setting_number_pane_vc_g

0x656f,	// (0x00032dd7) list_setting_number_pane_vc_t1_ParamLimits

0x656f,	// (0x00032dd7) list_setting_number_pane_vc_t1

0x6583,	// (0x00032deb) list_setting_number_pane_vc_t2_ParamLimits

0x6583,	// (0x00032deb) list_setting_number_pane_vc_t2

0x659f,	// (0x00032e07) list_setting_number_pane_vc_t3_ParamLimits

0x659f,	// (0x00032e07) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0003c09b) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0003c09b) list_setting_number_pane_vc_t

0x65c7,	// (0x00032e2f) set_value_pane_vc_ParamLimits

0x65c7,	// (0x00032e2f) set_value_pane_vc

0x7686,	// (0x00033eee) list_double2_graphic_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double2_graphic_pane_vc

0x7686,	// (0x00033eee) list_double2_large_graphic_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double2_large_graphic_pane_vc

0x7686,	// (0x00033eee) list_double2_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double2_pane_vc

0x7686,	// (0x00033eee) list_double_graphic_heading_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_graphic_heading_pane_vc

0x7686,	// (0x00033eee) list_double_graphic_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_graphic_pane_vc

0x7686,	// (0x00033eee) list_double_heading_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_heading_pane_vc

0x7686,	// (0x00033eee) list_double_large_graphic_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_large_graphic_pane_vc

0x7686,	// (0x00033eee) list_double_number_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_number_pane_vc

0x7686,	// (0x00033eee) list_double_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_pane_vc

0x7686,	// (0x00033eee) list_double_time_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_double_time_pane_vc

0x7686,	// (0x00033eee) list_setting_number_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_setting_number_pane_vc

0x7686,	// (0x00033eee) list_setting_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_setting_pane_vc

0x7686,	// (0x00033eee) list_single_graphic_heading_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_single_graphic_heading_pane_vc

0x7686,	// (0x00033eee) list_single_heading_pane_vc_ParamLimits

0x7686,	// (0x00033eee) list_single_heading_pane_vc

0xa9bb,	// (0x00037223) list_single_number_heading_pane_vc_ParamLimits

0xa9bb,	// (0x00037223) list_single_number_heading_pane_vc

0x9037,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9037,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1

0x9db0,	// (0x00036618) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9db0,	// (0x00036618) list_double_graphic_heading_pane_vc_g2

0x9dbc,	// (0x00036624) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9dbc,	// (0x00036624) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003c06b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c06b) list_double_graphic_heading_pane_vc_g

0x9176,	// (0x000359de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9176,	// (0x000359de) list_double_graphic_heading_pane_vc_t1

0x9059,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9059,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0003c299) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0003c299) list_double_graphic_heading_pane_vc_t

0x6557,	// (0x00032dbf) list_setting_pane_vc_g1_ParamLimits

0x6557,	// (0x00032dbf) list_setting_pane_vc_g1

0x6563,	// (0x00032dcb) list_setting_pane_vc_g2_ParamLimits

0x6563,	// (0x00032dcb) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0003c096) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0003c096) list_setting_pane_vc_g

0x7c80,	// (0x000344e8) list_setting_pane_vc_t1_ParamLimits

0x7c80,	// (0x000344e8) list_setting_pane_vc_t1

0x7c94,	// (0x000344fc) list_setting_pane_vc_t2_ParamLimits

0x7c94,	// (0x000344fc) list_setting_pane_vc_t2

0x0001,

0xfa74,	// (0x0003c2dc) list_setting_pane_vc_t_ParamLimits

0xfa74,	// (0x0003c2dc) list_setting_pane_vc_t

0x65c7,	// (0x00032e2f) set_value_pane_cp_vc_ParamLimits

0x65c7,	// (0x00032e2f) set_value_pane_cp_vc

0x9db0,	// (0x00036618) list_single_number_heading_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_single_number_heading_pane_vc_g1

0x9dbc,	// (0x00036624) list_single_number_heading_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_single_number_heading_pane_vc_g

0x9059,	// (0x000358c1) list_single_number_heading_pane_vc_t1_ParamLimits

0x9059,	// (0x000358c1) list_single_number_heading_pane_vc_t1

0x918a,	// (0x000359f2) list_single_number_heading_pane_vc_t2_ParamLimits

0x918a,	// (0x000359f2) list_single_number_heading_pane_vc_t2

0x919e,	// (0x00035a06) list_single_number_heading_pane_vc_t3_ParamLimits

0x919e,	// (0x00035a06) list_single_number_heading_pane_vc_t3

0x0002,

0xfa79,	// (0x0003c2e1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003c2e1) list_single_number_heading_pane_vc_t

0x9037,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9037,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1

0x9db0,	// (0x00036618) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9db0,	// (0x00036618) list_single_graphic_heading_pane_vc_g4

0x9dbc,	// (0x00036624) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9dbc,	// (0x00036624) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003c06b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c06b) list_single_graphic_heading_pane_vc_g

0x9059,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9059,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1

0x91b0,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x91b0,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x0003c2e8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x0003c2e8) list_single_graphic_heading_pane_vc_t

0x9db0,	// (0x00036618) list_double2_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_double2_pane_vc_g1

0x9dbc,	// (0x00036624) list_double2_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_double2_pane_vc_g

0x91c4,	// (0x00035a2c) list_double2_pane_vc_t1_ParamLimits

0x91c4,	// (0x00035a2c) list_double2_pane_vc_t1

0xab6c,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xab6c,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1

0x9db0,	// (0x00036618) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9db0,	// (0x00036618) list_double2_large_graphic_pane_vc_g2

0x9dbc,	// (0x00036624) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9dbc,	// (0x00036624) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x0003c2ed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x0003c2ed) list_double2_large_graphic_pane_vc_g

0x91da,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x91da,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1

0xab78,	// (0x000373e0) list_double_time_pane_vc_g1_ParamLimits

0xab78,	// (0x000373e0) list_double_time_pane_vc_g1

0xab84,	// (0x000373ec) list_double_time_pane_vc_g2_ParamLimits

0xab84,	// (0x000373ec) list_double_time_pane_vc_g2

0x0001,

0xfa8c,	// (0x0003c2f4) list_double_time_pane_vc_g_ParamLimits

0xfa8c,	// (0x0003c2f4) list_double_time_pane_vc_g

0x91f0,	// (0x00035a58) list_double_time_pane_vc_t1_ParamLimits

0x91f0,	// (0x00035a58) list_double_time_pane_vc_t1

0x9209,	// (0x00035a71) list_double_time_pane_vc_t2_ParamLimits

0x9209,	// (0x00035a71) list_double_time_pane_vc_t2

0x9249,	// (0x00035ab1) list_double_time_pane_vc_t3_ParamLimits

0x9249,	// (0x00035ab1) list_double_time_pane_vc_t3

0x9261,	// (0x00035ac9) list_double_time_pane_vc_t4_ParamLimits

0x9261,	// (0x00035ac9) list_double_time_pane_vc_t4

0x0003,

0xfa91,	// (0x0003c2f9) list_double_time_pane_vc_t_ParamLimits

0xfa91,	// (0x0003c2f9) list_double_time_pane_vc_t

0x9db0,	// (0x00036618) list_double_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_double_pane_vc_g1

0x9dbc,	// (0x00036624) list_double_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_double_pane_vc_g

0x9275,	// (0x00035add) list_double_pane_vc_t1_ParamLimits

0x9275,	// (0x00035add) list_double_pane_vc_t1

0x9287,	// (0x00035aef) list_double_pane_vc_t2_ParamLimits

0x9287,	// (0x00035aef) list_double_pane_vc_t2

0x0001,

0xfa9a,	// (0x0003c302) list_double_pane_vc_t_ParamLimits

0xfa9a,	// (0x0003c302) list_double_pane_vc_t

0x9db0,	// (0x00036618) list_double_number_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_double_number_pane_vc_g1

0x9dbc,	// (0x00036624) list_double_number_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_double_number_pane_vc_g

0x929f,	// (0x00035b07) list_double_number_pane_vc_t1_ParamLimits

0x929f,	// (0x00035b07) list_double_number_pane_vc_t1

0x92b3,	// (0x00035b1b) list_double_number_pane_vc_t2_ParamLimits

0x92b3,	// (0x00035b1b) list_double_number_pane_vc_t2

0x9287,	// (0x00035aef) list_double_number_pane_vc_t3_ParamLimits

0x9287,	// (0x00035aef) list_double_number_pane_vc_t3

0x0002,

0xfa9f,	// (0x0003c307) list_double_number_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003c307) list_double_number_pane_vc_t

0xab90,	// (0x000373f8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xab90,	// (0x000373f8) list_double_large_graphic_pane_vc_g1

0xab9c,	// (0x00037404) list_double_large_graphic_pane_vc_g2_ParamLimits

0xab9c,	// (0x00037404) list_double_large_graphic_pane_vc_g2

0x9dbc,	// (0x00036624) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9dbc,	// (0x00036624) list_double_large_graphic_pane_vc_g3

0x92c5,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x92c5,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa6,	// (0x0003c30e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003c30e) list_double_large_graphic_pane_vc_g

0x92d1,	// (0x00035b39) list_double_large_graphic_pane_vc_t1_ParamLimits

0x92d1,	// (0x00035b39) list_double_large_graphic_pane_vc_t1

0x92e3,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x92e3,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003c317) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003c317) list_double_large_graphic_pane_vc_t

0x9db0,	// (0x00036618) list_double_heading_pane_vc_g1_ParamLimits

0x9db0,	// (0x00036618) list_double_heading_pane_vc_g1

0x9dbc,	// (0x00036624) list_double_heading_pane_vc_g2_ParamLimits

0x9dbc,	// (0x00036624) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c08c) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c08c) list_double_heading_pane_vc_g

0x92fc,	// (0x00035b64) list_double_heading_pane_vc_t1_ParamLimits

0x92fc,	// (0x00035b64) list_double_heading_pane_vc_t1

0x9059,	// (0x000358c1) list_double_heading_pane_vc_t2_ParamLimits

0x9059,	// (0x000358c1) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0003c31c) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0003c31c) list_double_heading_pane_vc_t

0x9037,	// (0x0003589f) list_double_graphic_pane_vc_g1_ParamLimits

0x9037,	// (0x0003589f) list_double_graphic_pane_vc_g1

0xabab,	// (0x00037413) list_double_graphic_pane_vc_g2_ParamLimits

0xabab,	// (0x00037413) list_double_graphic_pane_vc_g2

0xabba,	// (0x00037422) list_double_graphic_pane_vc_g3_ParamLimits

0xabba,	// (0x00037422) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0003c321) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0003c321) list_double_graphic_pane_vc_g

0x9310,	// (0x00035b78) list_double_graphic_pane_vc_t1_ParamLimits

0x9310,	// (0x00035b78) list_double_graphic_pane_vc_t1

0x9287,	// (0x00035aef) list_double_graphic_pane_vc_t2_ParamLimits

0x9287,	// (0x00035aef) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0003c328) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0003c328) list_double_graphic_pane_vc_t

0x96bc,	// (0x00035f24) aid_size_cell_fastswap

0x96c4,	// (0x00035f2c) aid_size_cell_touch_ParamLimits

0x96c4,	// (0x00035f2c) aid_size_cell_touch

0x991f,	// (0x00036187) popup_fast_swap_wide_window_ParamLimits

0x991f,	// (0x00036187) popup_fast_swap_wide_window

0x9a15,	// (0x0003627d) touch_pane_ParamLimits

0x9a15,	// (0x0003627d) touch_pane

0x5571,	// (0x00031dd9) button_value_adjust_pane_cp2

0x8cee,	// (0x00035556) button_value_adjust_pane_cp4

0x8d0e,	// (0x00035576) form_field_data_pane_cp2

0x8d2d,	// (0x00035595) form_field_data_wide_pane_cp2

0x58c3,	// (0x0003212b) bg_scroll_pane_ParamLimits

0xa11f,	// (0x00036987) scroll_handle_pane_ParamLimits

0xa133,	// (0x0003699b) scroll_sc2_down_pane_ParamLimits

0xa133,	// (0x0003699b) scroll_sc2_down_pane

0x58f4,	// (0x0003215c) scroll_sc2_up_pane_ParamLimits

0x58f4,	// (0x0003215c) scroll_sc2_up_pane

0xc75f,	// (0x00038fc7) grid_wheel_folder_pane_g1_ParamLimits

0xc75f,	// (0x00038fc7) grid_wheel_folder_pane_g1

0xa3c5,	// (0x00036c2d) clock_nsta_pane_cp2_ParamLimits

0xa3c5,	// (0x00036c2d) clock_nsta_pane_cp2

0xb85e,	// (0x000380c6) listscroll_midp_pane_ParamLimits

0xb86a,	// (0x000380d2) midp_canvas_pane

0x61bd,	// (0x00032a25) nsta_clock_indic_pane

0x6201,	// (0x00032a69) listscroll_form_pane_vc

0x6209,	// (0x00032a71) listscroll_set_pane_vc_ParamLimits

0x6209,	// (0x00032a71) listscroll_set_pane_vc

0xbea5,	// (0x0003870d) clock_nsta_pane

0xbeb2,	// (0x0003871a) indicator_nsta_pane

0x644d,	// (0x00032cb5) bg_popup_sub_pane_cp2_ParamLimits

0x6461,	// (0x00032cc9) find_pane_cp2_ParamLimits

0x6461,	// (0x00032cc9) find_pane_cp2

0x6477,	// (0x00032cdf) grid_toobar_pane_ParamLimits

0x65d3,	// (0x00032e3b) list_form_gen_pane_vc_ParamLimits

0x65d3,	// (0x00032e3b) list_form_gen_pane_vc

0x65e9,	// (0x00032e51) scroll_pane_cp8_vc_ParamLimits

0x65e9,	// (0x00032e51) scroll_pane_cp8_vc

0x6639,	// (0x00032ea1) data_form_wide_pane_vc_ParamLimits

0x6639,	// (0x00032ea1) data_form_wide_pane_vc

0x6645,	// (0x00032ead) form_field_data_wide_pane_vc_g1

0x664d,	// (0x00032eb5) form_field_data_wide_pane_vc_t1_ParamLimits

0x664d,	// (0x00032eb5) form_field_data_wide_pane_vc_t1

0x5585,	// (0x00031ded) input_focus_pane_cp6_vc_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_cp6_vc

0xc21f,	// (0x00038a87) list_midp_pane_ParamLimits

0xc22b,	// (0x00038a93) scroll_pane_cp16_ParamLimits

0xc22b,	// (0x00038a93) scroll_pane_cp16

0x68ae,	// (0x00033116) button_value_adjust_pane_ParamLimits

0x68ae,	// (0x00033116) button_value_adjust_pane

0xc40b,	// (0x00038c73) button_value_adjust_pane_cp6_ParamLimits

0xc40b,	// (0x00038c73) button_value_adjust_pane_cp6

0xc52d,	// (0x00038d95) settings_code_pane_cp_ParamLimits

0xc52d,	// (0x00038d95) settings_code_pane_cp

0x4ed8,	// (0x00031740) cell_touch_pane_g1

0x4ed8,	// (0x00031740) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003bfb4) cell_touch_pane_g

0xc629,	// (0x00038e91) cell_touch_pane_cp_ParamLimits

0xc629,	// (0x00038e91) cell_touch_pane_cp

0xc639,	// (0x00038ea1) cell_touch_pane_ParamLimits

0xc639,	// (0x00038ea1) cell_touch_pane

0x4ed8,	// (0x00031740) scroll_sc2_down_pane_g1

0x4ed8,	// (0x00031740) scroll_sc2_up_pane_g1

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp4_vc

0x7a9c,	// (0x00034304) list_set_graphic_pane_vc_g1_ParamLimits

0x7a9c,	// (0x00034304) list_set_graphic_pane_vc_g1

0x7aa8,	// (0x00034310) list_set_graphic_pane_vc_g2_ParamLimits

0x7aa8,	// (0x00034310) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0003c29e) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0003c29e) list_set_graphic_pane_vc_g

0x7ab4,	// (0x0003431c) text_primary_small_cp13_vc_ParamLimits

0x7ab4,	// (0x0003431c) text_primary_small_cp13_vc

0x7acc,	// (0x00034334) list_set_graphic_pane_vc_ParamLimits

0x7acc,	// (0x00034334) list_set_graphic_pane_vc

0x4ee2,	// (0x0003174a) input_focus_pane_cp2_vc

0x4ed8,	// (0x00031740) setting_code_pane_vc_g1

0x7ae0,	// (0x00034348) setting_code_pane_vc_t1

0x7aee,	// (0x00034356) set_text_pane_vc_t1_ParamLimits

0x7aee,	// (0x00034356) set_text_pane_vc_t1

0x4ee2,	// (0x0003174a) input_focus_pane_cp1_vc

0x7b0d,	// (0x00034375) list_set_text_pane_vc

0x4ed8,	// (0x00031740) setting_text_pane_vc_g1

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp2_vc

0x7b17,	// (0x0003437f) setting_slider_graphic_pane_vc_g1

0x7b1f,	// (0x00034387) setting_slider_graphic_pane_vc_t1

0x7b2d,	// (0x00034395) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003c2a3) setting_slider_graphic_pane_vc_t

0x7b3b,	// (0x000343a3) slider_set_pane_cp_vc

0x7b43,	// (0x000343ab) slider_set_pane_vc_g1

0x7b4c,	// (0x000343b4) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0003c2a8) slider_set_pane_vc_g

0x55ec,	// (0x00031e54) set_opt_bg_pane_g1_copy1

0x55f4,	// (0x00031e5c) set_opt_bg_pane_g2_copy1

0x7b78,	// (0x000343e0) set_opt_bg_pane_g3_copy1

0x5604,	// (0x00031e6c) set_opt_bg_pane_g4_copy1

0x560c,	// (0x00031e74) set_opt_bg_pane_g5_copy1

0x5614,	// (0x00031e7c) set_opt_bg_pane_g6_copy1

0x7b80,	// (0x000343e8) set_opt_bg_pane_g7_copy1

0x7b8a,	// (0x000343f2) set_opt_bg_pane_g8_copy1

0x7b92,	// (0x000343fa) set_opt_bg_pane_g9_copy1

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp_vc

0x7b9a,	// (0x00034402) setting_slider_pane_vc_t1

0x7b1f,	// (0x00034387) setting_slider_pane_vc_t2

0x7b2d,	// (0x00034395) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0003c2b7) setting_slider_pane_vc_t

0x7b3b,	// (0x000343a3) slider_set_pane_vc

0xa76a,	// (0x00036fd2) volume_set_pane_vc_g1

0xab1b,	// (0x00037383) volume_set_pane_vc_g2

0xab24,	// (0x0003738c) volume_set_pane_vc_g3

0xab2d,	// (0x00037395) volume_set_pane_vc_g4

0xab36,	// (0x0003739e) volume_set_pane_vc_g5

0xab3f,	// (0x000373a7) volume_set_pane_vc_g6

0xab48,	// (0x000373b0) volume_set_pane_vc_g7

0xab51,	// (0x000373b9) volume_set_pane_vc_g8

0xab5a,	// (0x000373c2) volume_set_pane_vc_g9

0xab63,	// (0x000373cb) volume_set_pane_vc_g10

0x0009,

0xfa56,	// (0x0003c2be) volume_set_pane_vc_g

0x7ba9,	// (0x00034411) volume_set_pane_vc

0x7bb1,	// (0x00034419) button_value_adjust_pane_cp1_vc

0x7bbb,	// (0x00034423) list_highlight_pane_cp2_vc

0x7bc4,	// (0x0003442c) list_set_pane_vc_ParamLimits

0x7bc4,	// (0x0003442c) list_set_pane_vc

0x7c16,	// (0x0003447e) main_pane_set_vc_t1_ParamLimits

0x7c16,	// (0x0003447e) main_pane_set_vc_t1

0x7c2b,	// (0x00034493) main_pane_set_vc_t2_ParamLimits

0x7c2b,	// (0x00034493) main_pane_set_vc_t2

0x7c3d,	// (0x000344a5) main_pane_set_vc_t3_ParamLimits

0x7c3d,	// (0x000344a5) main_pane_set_vc_t3

0x7c4f,	// (0x000344b7) main_pane_set_vc_t4_ParamLimits

0x7c4f,	// (0x000344b7) main_pane_set_vc_t4

0x0003,

0xfa6b,	// (0x0003c2d3) main_pane_set_vc_t_ParamLimits

0xfa6b,	// (0x0003c2d3) main_pane_set_vc_t

0x7c61,	// (0x000344c9) setting_code_pane_vc_ParamLimits

0x7c61,	// (0x000344c9) setting_code_pane_vc

0x7c70,	// (0x000344d8) setting_slider_graphic_pane_vc

0x7c70,	// (0x000344d8) setting_slider_pane_vc

0x7c70,	// (0x000344d8) setting_text_pane_vc

0x7c70,	// (0x000344d8) setting_volume_pane_vc

0x7c78,	// (0x000344e0) scroll_pane_cp121_vc

0x555f,	// (0x00031dc7) set_content_pane_vc

0x7cb6,	// (0x0003451e) button_value_adjust_pane_g1

0x7cbf,	// (0x00034527) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0003c32d) button_value_adjust_pane_g

0x7cc8,	// (0x00034530) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7cc8,	// (0x00034530) form_field_slider_wide_pane_vc_t1

0x7cdc,	// (0x00034544) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7cdc,	// (0x00034544) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0003c332) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0003c332) form_field_slider_wide_pane_vc_t

0x4f30,	// (0x00031798) input_focus_pane_cp10_vc_ParamLimits

0x4f30,	// (0x00031798) input_focus_pane_cp10_vc

0x7cee,	// (0x00034556) slider_cont_pane_cp1_vc_ParamLimits

0x7cee,	// (0x00034556) slider_cont_pane_cp1_vc

0x7b43,	// (0x000343ab) slider_form_pane_g1_cp2

0x7b4c,	// (0x000343b4) slider_form_pane_g2_cp2

0x7d07,	// (0x0003456f) form_field_slider_pane_vc_t3

0x7d15,	// (0x0003457d) form_field_slider_pane_vc_t4

0x7d23,	// (0x0003458b) slider_form_pane_vc_ParamLimits

0x7d23,	// (0x0003458b) slider_form_pane_vc

0x7d30,	// (0x00034598) form_field_slider_pane_vc_t1_ParamLimits

0x7d30,	// (0x00034598) form_field_slider_pane_vc_t1

0x7cdc,	// (0x00034544) form_field_slider_pane_vc_t2_ParamLimits

0x7cdc,	// (0x00034544) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0003c342) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0003c342) form_field_slider_pane_vc_t

0x4f30,	// (0x00031798) input_focus_pane_cp9_vc_ParamLimits

0x4f30,	// (0x00031798) input_focus_pane_cp9_vc

0x7d4c,	// (0x000345b4) slider_cont_pane_vc_ParamLimits

0x7d4c,	// (0x000345b4) slider_cont_pane_vc

0x7d5e,	// (0x000345c6) list_form_graphic_pane_cp_vc_ParamLimits

0x7d5e,	// (0x000345c6) list_form_graphic_pane_cp_vc

0x6645,	// (0x00032ead) form_field_popup_wide_pane_vc_g1

0x7d73,	// (0x000345db) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7d73,	// (0x000345db) form_field_popup_wide_pane_vc_t1

0x5585,	// (0x00031ded) input_focus_pane_cp8_vc_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_cp8_vc

0x7d8a,	// (0x000345f2) list_form_wide_pane_vc_ParamLimits

0x7d8a,	// (0x000345f2) list_form_wide_pane_vc

0x7d96,	// (0x000345fe) list_form_graphic_pane_vc_g1

0x7d9e,	// (0x00034606) list_form_graphic_pane_vc_t1_ParamLimits

0x7d9e,	// (0x00034606) list_form_graphic_pane_vc_t1

0x4f3e,	// (0x000317a6) list_highlight_pane_cp5_vc_ParamLimits

0x4f3e,	// (0x000317a6) list_highlight_pane_cp5_vc

0x7dba,	// (0x00034622) list_form_graphic_pane_vc_ParamLimits

0x7dba,	// (0x00034622) list_form_graphic_pane_vc

0x6645,	// (0x00032ead) form_field_popup_pane_vc_g1

0x7dd0,	// (0x00034638) form_field_popup_pane_vc_t1_ParamLimits

0x7dd0,	// (0x00034638) form_field_popup_pane_vc_t1

0x5585,	// (0x00031ded) input_focus_pane_cp7_vc_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_cp7_vc

0x7de7,	// (0x0003464f) list_form_pane_vc_ParamLimits

0x7de7,	// (0x0003464f) list_form_pane_vc

0x7df3,	// (0x0003465b) data_form_pane_vc_t1_ParamLimits

0x7df3,	// (0x0003465b) data_form_pane_vc_t1

0x55ec,	// (0x00031e54) input_focus_pane_vc_g1

0x55f4,	// (0x00031e5c) input_focus_pane_vc_g2

0x55fc,	// (0x00031e64) input_focus_pane_vc_g3

0x5604,	// (0x00031e6c) input_focus_pane_vc_g4

0x560c,	// (0x00031e74) input_focus_pane_vc_g5

0x5614,	// (0x00031e7c) input_focus_pane_vc_g6

0x561c,	// (0x00031e84) input_focus_pane_vc_g7

0x5624,	// (0x00031e8c) input_focus_pane_vc_g8

0x562c,	// (0x00031e94) input_focus_pane_vc_g9

0x4ed8,	// (0x00031740) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003bf3d) input_focus_pane_vc_g

0x6639,	// (0x00032ea1) data_form_pane_vc_ParamLimits

0x6639,	// (0x00032ea1) data_form_pane_vc

0x6645,	// (0x00032ead) form_field_data_pane_vc_g1

0x7e0e,	// (0x00034676) form_field_data_pane_vc_t1_ParamLimits

0x7e0e,	// (0x00034676) form_field_data_pane_vc_t1

0x5585,	// (0x00031ded) input_focus_pane_vc_ParamLimits

0x5585,	// (0x00031ded) input_focus_pane_vc

0x7e28,	// (0x00034690) button_value_adjust_pane_cp3_vc

0x7e30,	// (0x00034698) button_value_adjust_pane_cp5_vc

0x7e38,	// (0x000346a0) form_field_data_pane_vc_ParamLimits

0x7e38,	// (0x000346a0) form_field_data_pane_vc

0x7e4f,	// (0x000346b7) form_field_data_pane_vc_cp2

0x7e57,	// (0x000346bf) form_field_data_wide_pane_vc_ParamLimits

0x7e57,	// (0x000346bf) form_field_data_wide_pane_vc

0x7e6d,	// (0x000346d5) form_field_data_wide_pane_vc_cp2

0x7e75,	// (0x000346dd) form_field_popup_pane_vc_ParamLimits

0x7e75,	// (0x000346dd) form_field_popup_pane_vc

0x7e8c,	// (0x000346f4) form_field_popup_wide_pane_vc_ParamLimits

0x7e8c,	// (0x000346f4) form_field_popup_wide_pane_vc

0x7ea2,	// (0x0003470a) form_field_slider_pane_vc_ParamLimits

0x7ea2,	// (0x0003470a) form_field_slider_pane_vc

0x7eb5,	// (0x0003471d) form_field_slider_wide_pane_vc_ParamLimits

0x7eb5,	// (0x0003471d) form_field_slider_wide_pane_vc

0xc64b,	// (0x00038eb3) grid_touch_1_pane_ParamLimits

0xc64b,	// (0x00038eb3) grid_touch_1_pane

0xc657,	// (0x00038ebf) grid_touch_2_pane_ParamLimits

0xc657,	// (0x00038ebf) grid_touch_2_pane

0x61af,	// (0x00032a17) touch_pane_g1_ParamLimits

0x61af,	// (0x00032a17) touch_pane_g1

0x7ec8,	// (0x00034730) cell_app_pane_cp_wide_ParamLimits

0x7ec8,	// (0x00034730) cell_app_pane_cp_wide

0x7ed9,	// (0x00034741) grid_popup_fast_wide_pane_ParamLimits

0x7ed9,	// (0x00034741) grid_popup_fast_wide_pane

0x7eed,	// (0x00034755) scroll_pane_cp19_ParamLimits

0x7eed,	// (0x00034755) scroll_pane_cp19

0x4ee2,	// (0x0003174a) bg_popup_window_pane_cp20

0x7f01,	// (0x00034769) listscroll_popup_fast_wide_pane

0x4f3e,	// (0x000317a6) grid_indicator_nsta_pane

0x7f09,	// (0x00034771) clock_nsta_pane_g1

0x7f20,	// (0x00034788) clock_nsta_pane_t1

0xc66f,	// (0x00038ed7) cell_indicator_nsta_pane_ParamLimits

0xc66f,	// (0x00038ed7) cell_indicator_nsta_pane

0x7f12,	// (0x0003477a) cell_indicator_nsta_pane_g1

0xc6a7,	// (0x00038f0f) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0003c34c) cell_indicator_nsta_pane_g

0x7f3c,	// (0x000347a4) clock_nsta_pane_cp

0x7f44,	// (0x000347ac) indicator_nsta_pane_cp

0x7f4c,	// (0x000347b4) nsta_clock_indic_pane_g1

0x4f7a,	// (0x000317e2) grid_indicator_pane

0x59e6,	// (0x0003224e) scroll_pane_cp29

0xa314,	// (0x00036b7c) indicator_nsta_pane_cp2_ParamLimits

0xa314,	// (0x00036b7c) indicator_nsta_pane_cp2

0x4f3e,	// (0x000317a6) main_apps_wheel_pane

0x6761,	// (0x00032fc9) form_midp_field_text_pane_ParamLimits

0x688e,	// (0x000330f6) scroll_bar_cp050_ParamLimits

0x7f84,	// (0x000347ec) cell_indicator_pane_ParamLimits

0x7f84,	// (0x000347ec) cell_indicator_pane

0x7fa1,	// (0x00034809) cell_indicator_pane_g1

0xc6bd,	// (0x00038f25) grid_wheel_folder_pane_ParamLimits

0xc6bd,	// (0x00038f25) grid_wheel_folder_pane

0xc6d3,	// (0x00038f3b) list_wheel_apps_pane_ParamLimits

0xc6d3,	// (0x00038f3b) list_wheel_apps_pane

0xc6e4,	// (0x00038f4c) main_apps_wheel_pane_g1_ParamLimits

0xc6e4,	// (0x00038f4c) main_apps_wheel_pane_g1

0xc6f8,	// (0x00038f60) main_apps_wheel_pane_g2_ParamLimits

0xc6f8,	// (0x00038f60) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0003c35b) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0003c35b) main_apps_wheel_pane_g

0xc710,	// (0x00038f78) main_apps_wheel_pane_t1_ParamLimits

0xc710,	// (0x00038f78) main_apps_wheel_pane_t1

0xc733,	// (0x00038f9b) list_wheel_apps_pane_g1

0xc73b,	// (0x00038fa3) list_wheel_apps_pane_g2

0xc743,	// (0x00038fab) list_wheel_apps_pane_g3

0xc74b,	// (0x00038fb3) list_wheel_apps_pane_g4

0xc755,	// (0x00038fbd) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0003c360) list_wheel_apps_pane_g

0x5e39,	// (0x000326a1) navi_icon_text_pane

0xbde9,	// (0x00038651) aid_fill_nsta

0xc778,	// (0x00038fe0) navi_icon_text_pane_g1

0xc787,	// (0x00038fef) navi_icon_text_pane_t1

0x5cd5,	// (0x0003253d) list_set_graphic_pane_t1_ParamLimits

0x5cd5,	// (0x0003253d) list_set_graphic_pane_t1

0x6f65,	// (0x000337cd) popup_midp_note_alarm_window_t6_ParamLimits

0x6f65,	// (0x000337cd) popup_midp_note_alarm_window_t6

0x6f77,	// (0x000337df) popup_midp_note_alarm_window_t7_ParamLimits

0x6f77,	// (0x000337df) popup_midp_note_alarm_window_t7

0x6f89,	// (0x000337f1) popup_midp_note_alarm_window_t8_ParamLimits

0x6f89,	// (0x000337f1) popup_midp_note_alarm_window_t8

0x6f9b,	// (0x00033803) popup_midp_note_alarm_window_t9_ParamLimits

0x6f9b,	// (0x00033803) popup_midp_note_alarm_window_t9

0x6fad,	// (0x00033815) popup_midp_note_alarm_window_t10_ParamLimits

0x6fad,	// (0x00033815) popup_midp_note_alarm_window_t10

0x6fbf,	// (0x00033827) popup_midp_note_alarm_window_t11_ParamLimits

0x6fbf,	// (0x00033827) popup_midp_note_alarm_window_t11

0x6fd1,	// (0x00033839) scroll_pane_cp17_ParamLimits

0x6fd1,	// (0x00033839) scroll_pane_cp17

0xa76a,	// (0x00036fd2) volume_small_pane_cp_g1

0xabc6,	// (0x0003742e) volume_small_pane_cp_g2

0xabcf,	// (0x00037437) volume_small_pane_cp_g3

0xabd8,	// (0x00037440) volume_small_pane_cp_g4

0xabe1,	// (0x00037449) volume_small_pane_cp_g5

0xabea,	// (0x00037452) volume_small_pane_cp_g6

0xabf3,	// (0x0003745b) volume_small_pane_cp_g7

0xabfc,	// (0x00037464) volume_small_pane_cp_g8

0xac05,	// (0x0003746d) volume_small_pane_cp_g9

0xac0e,	// (0x00037476) volume_small_pane_cp_g10

0x5fe5,	// (0x0003284d) midp_ticker_pane_g1_ParamLimits

0x5ff1,	// (0x00032859) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003c005) midp_ticker_pane_g_ParamLimits

0xb913,	// (0x0003817b) midp_ticker_pane_t1_ParamLimits

0xbdff,	// (0x00038667) aid_fill_nsta_2

0x687a,	// (0x000330e2) list_form2_midp_pane

0x7664,	// (0x00033ecc) midp_editing_number_pane_ParamLimits

0x7673,	// (0x00033edb) midp_ticker_pane_ParamLimits

0x7fab,	// (0x00034813) form2_midp_field_pane

0x7fb3,	// (0x0003481b) scroll_pane_cp51

0x7fd3,	// (0x0003483b) form2_midp_button_pane_ParamLimits

0x7fd3,	// (0x0003483b) form2_midp_button_pane

0x7fe5,	// (0x0003484d) form2_midp_content_pane_ParamLimits

0x7fe5,	// (0x0003484d) form2_midp_content_pane

0x7fff,	// (0x00034867) form2_midp_field_choice_group_pane

0x8007,	// (0x0003486f) form2_midp_field_pane_g1

0x800f,	// (0x00034877) form2_midp_field_pane_g2

0x8017,	// (0x0003487f) form2_midp_field_pane_g3

0x801f,	// (0x00034887) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0003c385) form2_midp_field_pane_g

0x8027,	// (0x0003488f) form2_midp_gauge_slider_pane

0x802f,	// (0x00034897) form2_midp_gauge_wait_pane

0x8037,	// (0x0003489f) form2_midp_image_pane_ParamLimits

0x8037,	// (0x0003489f) form2_midp_image_pane

0x8052,	// (0x000348ba) form2_midp_label_pane_ParamLimits

0x8052,	// (0x000348ba) form2_midp_label_pane

0xc7b8,	// (0x00039020) form2_midp_label_pane_cp_ParamLimits

0xc7b8,	// (0x00039020) form2_midp_label_pane_cp

0x806b,	// (0x000348d3) form2_midp_string_pane_ParamLimits

0x806b,	// (0x000348d3) form2_midp_string_pane

0x9322,	// (0x00035b8a) form2_midp_text_pane_ParamLimits

0x9322,	// (0x00035b8a) form2_midp_text_pane

0x807d,	// (0x000348e5) form2_midp_time_pane

0x808d,	// (0x000348f5) input_focus_pane_cp51_ParamLimits

0x808d,	// (0x000348f5) input_focus_pane_cp51

0x80a5,	// (0x0003490d) form2_midp_label_pane_t1_ParamLimits

0x80a5,	// (0x0003490d) form2_midp_label_pane_t1

0x933d,	// (0x00035ba5) form2_mdip_text_pane_t1_ParamLimits

0x933d,	// (0x00035ba5) form2_mdip_text_pane_t1

0x9359,	// (0x00035bc1) form2_midp_time_pane_t1

0x80ed,	// (0x00034955) form2_midp_gauge_slider_pane_t1

0xc7d9,	// (0x00039041) form2_midp_gauge_slider_pane_t2

0xc7eb,	// (0x00039053) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0003c38e) form2_midp_gauge_slider_pane_t

0x80ff,	// (0x00034967) form2_midp_slider_pane

0x810b,	// (0x00034973) form2_midp_gauge_wait_pane_t1

0x8119,	// (0x00034981) form2_midp_wait_pane_ParamLimits

0x8119,	// (0x00034981) form2_midp_wait_pane

0xc7fd,	// (0x00039065) list_single_2graphic_pane_cp4_ParamLimits

0xc7fd,	// (0x00039065) list_single_2graphic_pane_cp4

0xc15a,	// (0x000389c2) list_single_midp_graphic_pane_cp_ParamLimits

0xc15a,	// (0x000389c2) list_single_midp_graphic_pane_cp

0x4ee2,	// (0x0003174a) list_highlight_pane_cp20

0x8144,	// (0x000349ac) list_single_2graphic_pane_g1_cp4

0x79a1,	// (0x00034209) list_single_2graphic_pane_g2_cp4

0x814c,	// (0x000349b4) list_single_2graphic_pane_t1_cp4

0x4f3e,	// (0x000317a6) list_highlight_pane_cp21

0x815b,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp

0x816a,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp

0xc82c,	// (0x00039094) form2_mdip_string_pane_t1_ParamLimits

0xc82c,	// (0x00039094) form2_mdip_string_pane_t1

0x4ee2,	// (0x0003174a) bg_wml_button_pane_cp2

0x4ed8,	// (0x00031740) form2_midp_image_pane_g1

0x9e1b,	// (0x00036683) list_double_large_graphic_pane_g5_ParamLimits

0x9e1b,	// (0x00036683) list_double_large_graphic_pane_g5

0xb85e,	// (0x000380c6) midp_form_pane_ParamLimits

0x4f3e,	// (0x000317a6) main_apps_wheel_pane_ParamLimits

0xbc57,	// (0x000384bf) popup_preview_window_ParamLimits

0xbc57,	// (0x000384bf) popup_preview_window

0x62ee,	// (0x00032b56) popup_touch_info_window_ParamLimits

0x62ee,	// (0x00032b56) popup_touch_info_window

0x630c,	// (0x00032b74) popup_touch_menu_window_ParamLimits

0x630c,	// (0x00032b74) popup_touch_menu_window

0x4ece,	// (0x00031736) bg_popup_sub_pane_cp6

0xc966,	// (0x000391ce) list_touch_menu_pane

0xc96e,	// (0x000391d6) list_single_touch_menu_pane_ParamLimits

0xc96e,	// (0x000391d6) list_single_touch_menu_pane

0xc983,	// (0x000391eb) list_single_touch_menu_pane_t1

0x4f3e,	// (0x000317a6) bg_popup_sub_pane_cp7_ParamLimits

0x4f3e,	// (0x000317a6) bg_popup_sub_pane_cp7

0xc991,	// (0x000391f9) heading_sub_pane

0xc999,	// (0x00039201) list_touch_info_pane_ParamLimits

0xc999,	// (0x00039201) list_touch_info_pane

0xc9a8,	// (0x00039210) list_single_touch_info_pane_ParamLimits

0xc9a8,	// (0x00039210) list_single_touch_info_pane

0xc9ba,	// (0x00039222) list_single_touch_info_pane_t1

0xc9c8,	// (0x00039230) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0003c39c) list_single_touch_info_pane_t

0x5fbb,	// (0x00032823) bg_popup_heading_pane_cp

0xc9d6,	// (0x0003923e) heading_sub_pane_t1

0x65ff,	// (0x00032e67) bg_popup_preview_window_pane_cp_ParamLimits

0x65ff,	// (0x00032e67) bg_popup_preview_window_pane_cp

0xc991,	// (0x000391f9) heading_preview_pane

0xc999,	// (0x00039201) list_preview_pane_ParamLimits

0xc999,	// (0x00039201) list_preview_pane

0xc9e4,	// (0x0003924c) popup_preview_window_g1

0xc9a8,	// (0x00039210) list_single_preview_pane_ParamLimits

0xc9a8,	// (0x00039210) list_single_preview_pane

0xc9ec,	// (0x00039254) list_single_preview_pane_g1

0xc9f4,	// (0x0003925c) list_single_preview_pane_t1

0xc9ba,	// (0x00039222) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0003c3a1) list_single_preview_pane_t

0xca02,	// (0x0003926a) bg_popup_heading_pane_cp2_ParamLimits

0xca02,	// (0x0003926a) bg_popup_heading_pane_cp2

0xca18,	// (0x00039280) heading_preview_pane_g1

0xca20,	// (0x00039288) heading_preview_pane_t1_ParamLimits

0xca20,	// (0x00039288) heading_preview_pane_t1

0x4f91,	// (0x000317f9) soft_indicator_pane_t1_ParamLimits

0x54f8,	// (0x00031d60) scroll_pane_ParamLimits

0x58eb,	// (0x00032153) scroll_sc2_left_pane

0x58e2,	// (0x0003214a) scroll_sc2_right_pane

0x590a,	// (0x00032172) scroll_bg_pane_g1_ParamLimits

0x591f,	// (0x00032187) scroll_bg_pane_g2_ParamLimits

0x5937,	// (0x0003219f) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003bf94) scroll_bg_pane_g_ParamLimits

0x590a,	// (0x00032172) scroll_handle_pane_g1_ParamLimits

0x5959,	// (0x000321c1) scroll_handle_pane_g2_ParamLimits

0x5937,	// (0x0003219f) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003bf9b) scroll_handle_pane_g_ParamLimits

0x6229,	// (0x00032a91) popup_choice_list_window_ParamLimits

0x6229,	// (0x00032a91) popup_choice_list_window

0x6459,	// (0x00032cc1) choice_list_pane

0x64db,	// (0x00032d43) cell_toolbar_pane_t1

0x6503,	// (0x00032d6b) toolbar_button_pane_ParamLimits

0x73af,	// (0x00033c17) ai_gene_pane_1_t2_ParamLimits

0x73af,	// (0x00033c17) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0003c1b8) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0003c1b8) ai_gene_pane_1_t

0xca3d,	// (0x000392a5) scroll_sc2_left_pane_g1

0xca3d,	// (0x000392a5) scroll_sc2_right_pane_g1

0x61f5,	// (0x00032a5d) bg_popup_sub_pane_cp10

0xca47,	// (0x000392af) list_choice_list_pane

0xca5e,	// (0x000392c6) list_single_choice_list_pane_ParamLimits

0xca5e,	// (0x000392c6) list_single_choice_list_pane

0xca72,	// (0x000392da) list_single_choice_list_pane_g1

0xca7a,	// (0x000392e2) list_single_choice_list_pane_t1_ParamLimits

0xca7a,	// (0x000392e2) list_single_choice_list_pane_t1

0xca8f,	// (0x000392f7) choice_list_pane_g1

0xca97,	// (0x000392ff) choice_list_pane_t1

0x4ece,	// (0x00031736) input_focus_pane_cp11

0x5845,	// (0x000320ad) title_pane_stacon_g2_ParamLimits

0x5845,	// (0x000320ad) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003bf7a) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003bf7a) title_pane_stacon_g

0x5fbb,	// (0x00032823) cursor_press_pane

0xb9fc,	// (0x00038264) popup_fep_hwr_window_ParamLimits

0xb9fc,	// (0x00038264) popup_fep_hwr_window

0x628b,	// (0x00032af3) popup_fep_vkb_window_ParamLimits

0x628b,	// (0x00032af3) popup_fep_vkb_window

0xcaa5,	// (0x0003930d) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0003c3ca) fep_vkb_side_pane_g_ParamLimits

0xac42,	// (0x000374aa) fep_hwr_candidate_pane_ParamLimits

0xac42,	// (0x000374aa) fep_hwr_candidate_pane

0xac6c,	// (0x000374d4) fep_hwr_side_pane_ParamLimits

0xac6c,	// (0x000374d4) fep_hwr_side_pane

0xac8c,	// (0x000374f4) fep_hwr_top_pane_ParamLimits

0xac8c,	// (0x000374f4) fep_hwr_top_pane

0xaca4,	// (0x0003750c) fep_hwr_write_pane_ParamLimits

0xaca4,	// (0x0003750c) fep_hwr_write_pane

0xfb62,	// (0x0003c3ca) fep_vkb_side_pane_g

0xcaad,	// (0x00039315) fep_hwr_top_pane_g1

0xcabf,	// (0x00039327) fep_hwr_top_pane_g2

0xacd0,	// (0x00037538) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0003c3a6) fep_hwr_top_pane_g

0xace5,	// (0x0003754d) fep_hwr_top_text_pane

0x5aac,	// (0x00032314) fep_hwr_top_text_pane_g1

0xcaf5,	// (0x0003935d) fep_hwr_top_text_pane_t1

0xaddb,	// (0x00037643) fep_hwr_candidate_pane_g1

0xcd4f,	// (0x000395b7) fep_vkb_keypad_pane_g3_ParamLimits

0xcd4f,	// (0x000395b7) fep_vkb_keypad_pane_g3

0xcd77,	// (0x000395df) fep_vkb_keypad_pane_g4_ParamLimits

0xcd77,	// (0x000395df) fep_vkb_keypad_pane_g4

0xcde6,	// (0x0003964e) fep_vkb_bottom_pane_g2_ParamLimits

0xcde6,	// (0x0003964e) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0003c3d1) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0003c3d1) fep_vkb_bottom_pane_g

0xca3d,	// (0x000392a5) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0003c3db) cell_vkb_side_pane_g

0xce71,	// (0x000396d9) cell_vkb_side_pane_t1

0xce7f,	// (0x000396e7) cell_vkb_side_pane_t1_copy1

0xca3d,	// (0x000392a5) bg_fep_vkb_candidate_pane_g2

0xcfb1,	// (0x00039819) cell_vkb_candidate_pane_ParamLimits

0xcb03,	// (0x0003936b) aid_size_cell_vkb_ParamLimits

0xcb03,	// (0x0003936b) aid_size_cell_vkb

0xcfb1,	// (0x00039819) cell_vkb_candidate_pane

0xadf5,	// (0x0003765d) bg_popup_fep_shadow_pane_g1

0xcb91,	// (0x000393f9) fep_vkb_bottom_pane_ParamLimits

0xcb91,	// (0x000393f9) fep_vkb_bottom_pane

0xcbce,	// (0x00039436) fep_vkb_candidate_pane_ParamLimits

0xcbce,	// (0x00039436) fep_vkb_candidate_pane

0xcbea,	// (0x00039452) fep_vkb_keypad_pane_ParamLimits

0xcbea,	// (0x00039452) fep_vkb_keypad_pane

0xcc30,	// (0x00039498) fep_vkb_side_pane_ParamLimits

0xcc30,	// (0x00039498) fep_vkb_side_pane

0xcc6c,	// (0x000394d4) fep_vkb_top_pane_ParamLimits

0xcc6c,	// (0x000394d4) fep_vkb_top_pane

0xcca8,	// (0x00039510) fep_vkb_top_pane_g1_ParamLimits

0xcca8,	// (0x00039510) fep_vkb_top_pane_g1

0xccb7,	// (0x0003951f) fep_vkb_top_pane_g2_ParamLimits

0xccb7,	// (0x0003951f) fep_vkb_top_pane_g2

0xccc6,	// (0x0003952e) fep_vkb_top_pane_g3_ParamLimits

0xccc6,	// (0x0003952e) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0003c3c1) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0003c3c1) fep_vkb_top_pane_g

0xcce4,	// (0x0003954c) fep_vkb_top_text_pane_ParamLimits

0xcce4,	// (0x0003954c) fep_vkb_top_text_pane

0xccf5,	// (0x0003955d) fep_vkb_side_pane_g1_ParamLimits

0xccf5,	// (0x0003955d) fep_vkb_side_pane_g1

0xcd3e,	// (0x000395a6) grid_vkb_side_pane_ParamLimits

0xcd3e,	// (0x000395a6) grid_vkb_side_pane

0xadfd,	// (0x00037665) bg_popup_fep_shadow_pane_g2

0xae06,	// (0x0003766e) bg_popup_fep_shadow_pane_g3

0xae0e,	// (0x00037676) bg_popup_fep_shadow_pane_g4

0xae17,	// (0x0003767f) bg_popup_fep_shadow_pane_g5

0xae21,	// (0x00037689) bg_popup_fep_shadow_pane_g6

0xae29,	// (0x00037691) bg_popup_fep_shadow_pane_g7

0x560c,	// (0x00031e74) bg_popup_fep_shadow_pane_g8

0xcd95,	// (0x000395fd) grid_vkb_keypad_number_pane_ParamLimits

0xcd95,	// (0x000395fd) grid_vkb_keypad_number_pane

0xcda5,	// (0x0003960d) grid_vkb_keypad_pane_ParamLimits

0xcda5,	// (0x0003960d) grid_vkb_keypad_pane

0xcdcb,	// (0x00039633) fep_vkb_bottom_pane_g1_ParamLimits

0xcdcb,	// (0x00039633) fep_vkb_bottom_pane_g1

0xcdf4,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcdf4,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane

0xce09,	// (0x00039671) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xce09,	// (0x00039671) grid_vkb_keypad_bottom_right_pane

0xce1e,	// (0x00039686) fep_vkb_top_text_pane_g1

0xce39,	// (0x000396a1) fep_vkb_top_text_pane_t1

0xce4e,	// (0x000396b6) cell_vkb_side_pane_ParamLimits

0xce4e,	// (0x000396b6) cell_vkb_side_pane

0xca3d,	// (0x000392a5) cell_vkb_side_pane_g1

0xce8d,	// (0x000396f5) cell_vkb_keypad_pane_ParamLimits

0xce8d,	// (0x000396f5) cell_vkb_keypad_pane

0xcf08,	// (0x00039770) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0003c3ee) bg_popup_fep_shadow_pane_g

0xca3d,	// (0x000392a5) cell_hwr_side_pane_g1

0xca3d,	// (0x000392a5) cell_hwr_side_pane_g2

0xcf12,	// (0x0003977a) cell_vkb_keypad_pane_t1

0xcf20,	// (0x00039788) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf20,	// (0x00039788) cell_vkb_keypad_bottom_left_pane

0xcf3d,	// (0x000397a5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf3d,	// (0x000397a5) cell_vkb_keypad_bottom_right_pane

0xca3d,	// (0x000392a5) cell_vkb_keypad_bottom_left_pane_g1

0xca3d,	// (0x000392a5) cell_vkb_keypad_bottom_right_pane_g1

0xcf76,	// (0x000397de) cell_vkb_keypad_number_pane_ParamLimits

0xcf76,	// (0x000397de) cell_vkb_keypad_number_pane

0xcf95,	// (0x000397fd) cell_vkb_keypad_number_pane_g1

0xcf9f,	// (0x00039807) cell_vkb_keypad_number_pane_g2

0xcfa8,	// (0x00039810) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0003c3e0) cell_vkb_keypad_number_pane_g

0xcf12,	// (0x0003977a) cell_vkb_keypad_number_pane_t1

0xcfdc,	// (0x00039844) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x0003c3db) cell_hwr_side_pane_g

0xcff5,	// (0x0003985d) cell_hwr_side_pane_t1

0xae3b,	// (0x000376a3) cell_hwr_side_pane_t1_copy1

0xccd6,	// (0x0003953e) cell_hwr_candidate_pane_g1

0xae49,	// (0x000376b1) cell_hwr_candidate_pane_t1

0xca3d,	// (0x000392a5) cell_vkb_candidate_pane_g2

0xd07b,	// (0x000398e3) cell_vkb_candidate_pane_t1

0xcfce,	// (0x00039836) bg_popup_fep_shadow_pane_ParamLimits

0xcfce,	// (0x00039836) bg_popup_fep_shadow_pane

0x1913,	// (0x0002e17b) bg_fep_hwr_top_pane_g4

0xcad1,	// (0x00039339) bg_hwr_side_pane_g1_ParamLimits

0xcad1,	// (0x00039339) bg_hwr_side_pane_g1

0xad21,	// (0x00037589) cell_hwr_side_pane_ParamLimits

0xad21,	// (0x00037589) cell_hwr_side_pane

0xad5c,	// (0x000375c4) fep_hwr_write_pane_g1_ParamLimits

0xad5c,	// (0x000375c4) fep_hwr_write_pane_g1

0xad69,	// (0x000375d1) fep_hwr_write_pane_g2_ParamLimits

0xad69,	// (0x000375d1) fep_hwr_write_pane_g2

0xad76,	// (0x000375de) fep_hwr_write_pane_g3_ParamLimits

0xad76,	// (0x000375de) fep_hwr_write_pane_g3

0xad84,	// (0x000375ec) fep_hwr_write_pane_g4_ParamLimits

0xad84,	// (0x000375ec) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0003c3ad) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0003c3ad) fep_hwr_write_pane_g

0x1913,	// (0x0002e17b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1913,	// (0x0002e17b) bg_fep_hwr_candidate_pane_g2

0xad99,	// (0x00037601) cell_hwr_candidate_pane_ParamLimits

0xad99,	// (0x00037601) cell_hwr_candidate_pane

0xaddb,	// (0x00037643) fep_hwr_candidate_pane_g1_ParamLimits

0xcb31,	// (0x00039399) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcb31,	// (0x00039399) bg_popup_fep_shadow_pane_cp2

0xccd6,	// (0x0003953e) fep_vkb_top_pane_g4_ParamLimits

0xccd6,	// (0x0003953e) fep_vkb_top_pane_g4

0xcd1c,	// (0x00039584) fep_vkb_side_pane_g2_ParamLimits

0xcd1c,	// (0x00039584) fep_vkb_side_pane_g2

0x8c1b,	// (0x00035483) list_setting_pane_t4_ParamLimits

0x8c1b,	// (0x00035483) list_setting_pane_t4

0x8cb5,	// (0x0003551d) list_setting_number_pane_t5_ParamLimits

0x8cb5,	// (0x0003551d) list_setting_number_pane_t5

0xa167,	// (0x000369cf) list_double_heading_pane_cp2_ParamLimits

0xa167,	// (0x000369cf) list_double_heading_pane_cp2

0x559f,	// (0x00031e07) list_double_heading_pane_g1_cp2_ParamLimits

0x559f,	// (0x00031e07) list_double_heading_pane_g1_cp2

0x55ab,	// (0x00031e13) list_double_heading_pane_g2_cp2_ParamLimits

0x55ab,	// (0x00031e13) list_double_heading_pane_g2_cp2

0xd089,	// (0x000398f1) list_double_heading_pane_t1_cp2_ParamLimits

0xd089,	// (0x000398f1) list_double_heading_pane_t1_cp2

0xd09f,	// (0x00039907) list_double_heading_pane_t2_cp2_ParamLimits

0xd09f,	// (0x00039907) list_double_heading_pane_t2_cp2

0x4ec6,	// (0x0003172e) aid_value_unit2

0x996b,	// (0x000361d3) popup_preview_fixed_window

0x5071,	// (0x000318d9) bg_popup_preview_window_pane_cp02

0xd0b1,	// (0x00039919) list_preview_fixed_pane

0xd0f7,	// (0x0003995f) list_empty_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_empty_pane_fp

0xd0f7,	// (0x0003995f) list_single_cale_day_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_cale_day_pane_fp

0xd0f7,	// (0x0003995f) list_single_graphic_heading_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_graphic_heading_pane_fp

0xd0f7,	// (0x0003995f) list_single_graphic_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_graphic_pane_fp

0xd0f7,	// (0x0003995f) list_single_heading_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_heading_pane_fp

0xd0f7,	// (0x0003995f) list_single_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_pane_fp

0xd10e,	// (0x00039976) list_single_pane_fp_g1_ParamLimits

0xd10e,	// (0x00039976) list_single_pane_fp_g1

0x9e03,	// (0x0003666b) list_single_pane_fp_g2_ParamLimits

0x9e03,	// (0x0003666b) list_single_pane_fp_g2

0x936c,	// (0x00035bd4) list_single_pane_fp_g3_ParamLimits

0x936c,	// (0x00035bd4) list_single_pane_fp_g3

0xd11a,	// (0x00039982) list_single_pane_fp_g4_ParamLimits

0xd11a,	// (0x00039982) list_single_pane_fp_g4

0x0003,

0xfba7,	// (0x0003c40f) list_single_pane_fp_g_ParamLimits

0xfba7,	// (0x0003c40f) list_single_pane_fp_g

0x9380,	// (0x00035be8) list_single_pane_fp_t1_ParamLimits

0x9380,	// (0x00035be8) list_single_pane_fp_t1

0x9397,	// (0x00035bff) list_single_graphic_pane_fp_g1_ParamLimits

0x9397,	// (0x00035bff) list_single_graphic_pane_fp_g1

0xd10e,	// (0x00039976) list_single_graphic_pane_fp_g2_ParamLimits

0xd10e,	// (0x00039976) list_single_graphic_pane_fp_g2

0x9e03,	// (0x0003666b) list_single_graphic_pane_fp_g3_ParamLimits

0x9e03,	// (0x0003666b) list_single_graphic_pane_fp_g3

0x936c,	// (0x00035bd4) list_single_graphic_pane_fp_g4_ParamLimits

0x936c,	// (0x00035bd4) list_single_graphic_pane_fp_g4

0xd11a,	// (0x00039982) list_single_graphic_pane_fp_g5_ParamLimits

0xd11a,	// (0x00039982) list_single_graphic_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c418) list_single_graphic_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c418) list_single_graphic_pane_fp_g

0x93a3,	// (0x00035c0b) list_single_graphic_pane_fp_t1_ParamLimits

0x93a3,	// (0x00035c0b) list_single_graphic_pane_fp_t1

0x9397,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9397,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1

0xd10e,	// (0x00039976) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd10e,	// (0x00039976) list_single_graphic_heading_pane_fp_g2

0x9e03,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9e03,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3

0x936c,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x936c,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4

0xd11a,	// (0x00039982) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd11a,	// (0x00039982) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c418) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c418) list_single_graphic_heading_pane_fp_g

0x93b9,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x93b9,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1

0x93cf,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x93cf,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbb,	// (0x0003c423) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbb,	// (0x0003c423) list_single_graphic_heading_pane_fp_t

0x93e1,	// (0x00035c49) list_single_cale_day_pane_fp_g1_ParamLimits

0x93e1,	// (0x00035c49) list_single_cale_day_pane_fp_g1

0xd126,	// (0x0003998e) list_single_cale_day_pane_fp_g2_ParamLimits

0xd126,	// (0x0003998e) list_single_cale_day_pane_fp_g2

0x9419,	// (0x00035c81) list_single_cale_day_pane_fp_g3_ParamLimits

0x9419,	// (0x00035c81) list_single_cale_day_pane_fp_g3

0x9441,	// (0x00035ca9) list_single_cale_day_pane_fp_g4_ParamLimits

0x9441,	// (0x00035ca9) list_single_cale_day_pane_fp_g4

0x9465,	// (0x00035ccd) list_single_cale_day_pane_fp_g5_ParamLimits

0x9465,	// (0x00035ccd) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc0,	// (0x0003c428) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc0,	// (0x0003c428) list_single_cale_day_pane_fp_g

0x9489,	// (0x00035cf1) list_single_cale_day_pane_fp_t1_ParamLimits

0x9489,	// (0x00035cf1) list_single_cale_day_pane_fp_t1

0x94af,	// (0x00035d17) list_single_cale_day_pane_fp_t2_ParamLimits

0x94af,	// (0x00035d17) list_single_cale_day_pane_fp_t2

0x94c8,	// (0x00035d30) list_single_cale_day_pane_fp_t3_ParamLimits

0x94c8,	// (0x00035d30) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcb,	// (0x0003c433) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcb,	// (0x0003c433) list_single_cale_day_pane_fp_t

0xd10e,	// (0x00039976) list_empty_pane_fp_g1_ParamLimits

0xd10e,	// (0x00039976) list_empty_pane_fp_g1

0x94e1,	// (0x00035d49) list_empty_pane_fp_t1

0x94ef,	// (0x00035d57) list_empty_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003c43a) list_empty_pane_fp_t

0xd10e,	// (0x00039976) list_single_heading_pane_fp_g1_ParamLimits

0xd10e,	// (0x00039976) list_single_heading_pane_fp_g1

0x9e03,	// (0x0003666b) list_single_heading_pane_fp_g2_ParamLimits

0x9e03,	// (0x0003666b) list_single_heading_pane_fp_g2

0x936c,	// (0x00035bd4) list_single_heading_pane_fp_g3_ParamLimits

0x936c,	// (0x00035bd4) list_single_heading_pane_fp_g3

0x0002,

0xfbd7,	// (0x0003c43f) list_single_heading_pane_fp_g_ParamLimits

0xfbd7,	// (0x0003c43f) list_single_heading_pane_fp_g

0x94fd,	// (0x00035d65) list_single_heading_pane_fp_t1_ParamLimits

0x94fd,	// (0x00035d65) list_single_heading_pane_fp_t1

0x950f,	// (0x00035d77) list_single_heading_pane_fp_t2_ParamLimits

0x950f,	// (0x00035d77) list_single_heading_pane_fp_t2

0x0001,

0xfbde,	// (0x0003c446) list_single_heading_pane_fp_t_ParamLimits

0xfbde,	// (0x0003c446) list_single_heading_pane_fp_t

0x56dc,	// (0x00031f44) aid_size_cell_fast

0x5054,	// (0x000318bc) soft_indicator_pane_cp1_t1

0x5719,	// (0x00031f81) cell_app_pane_cp2_ParamLimits

0x5719,	// (0x00031f81) cell_app_pane_cp2

0xac2b,	// (0x00037493) fep_hwr_candidate_drop_down_list_pane

0x1c6a,	// (0x0002e4d2) fep_hwr_candidate_pane_g3_ParamLimits

0x1c6a,	// (0x0002e4d2) fep_hwr_candidate_pane_g3

0x1c77,	// (0x0002e4df) fep_hwr_candidate_pane_g4_ParamLimits

0x1c77,	// (0x0002e4df) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0003c3ba) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0003c3ba) fep_hwr_candidate_pane_g

0xcbbd,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcbbd,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane

0xcfe4,	// (0x0003984c) fep_vkb_candidate_pane_g3

0xcfec,	// (0x00039854) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0003c3e7) fep_vkb_candidate_pane_g

0xccd6,	// (0x0003953e) cell_hwr_candidate_pane_g1_ParamLimits

0xd003,	// (0x0003986b) cell_hwr_candidate_pane_g3_ParamLimits

0xd003,	// (0x0003986b) cell_hwr_candidate_pane_g3

0xd024,	// (0x0003988c) cell_hwr_candidate_pane_g4_ParamLimits

0xd024,	// (0x0003988c) cell_hwr_candidate_pane_g4

0x0002,

0xfb99,	// (0x0003c401) cell_hwr_candidate_pane_g_ParamLimits

0xfb99,	// (0x0003c401) cell_hwr_candidate_pane_g

0xd045,	// (0x000398ad) cell_vkb_candidate_pane_g3_ParamLimits

0xd045,	// (0x000398ad) cell_vkb_candidate_pane_g3

0xd060,	// (0x000398c8) cell_vkb_candidate_pane_g4_ParamLimits

0xd060,	// (0x000398c8) cell_vkb_candidate_pane_g4

0xd132,	// (0x0003999a) cell_app_pane_cp2_g1_ParamLimits

0xd132,	// (0x0003999a) cell_app_pane_cp2_g1

0xd150,	// (0x000399b8) cell_app_pane_cp2_g2_ParamLimits

0xd150,	// (0x000399b8) cell_app_pane_cp2_g2

0x0001,

0xfbe3,	// (0x0003c44b) cell_app_pane_cp2_g_ParamLimits

0xfbe3,	// (0x0003c44b) cell_app_pane_cp2_g

0xd15c,	// (0x000399c4) cell_app_pane_cp2_t1_ParamLimits

0xd15c,	// (0x000399c4) cell_app_pane_cp2_t1

0x5585,	// (0x00031ded) grid_highlight_pane_cp1_ParamLimits

0x5585,	// (0x00031ded) grid_highlight_pane_cp1

0xae67,	// (0x000376cf) cell_hwr_candidate_pane_cp1_ParamLimits

0xae67,	// (0x000376cf) cell_hwr_candidate_pane_cp1

0xccd6,	// (0x0003953e) fep_hwr_candidate_drop_down_list_pane_g1

0xd16e,	// (0x000399d6) fep_hwr_candidate_drop_down_list_pane_g2

0xd17b,	// (0x000399e3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0003c450) fep_hwr_candidate_drop_down_list_pane_g

0xae86,	// (0x000376ee) fep_hwr_candidate_drop_down_list_scroll_pane

0xae8f,	// (0x000376f7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xae8f,	// (0x000376f7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xae9c,	// (0x00037704) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xae9c,	// (0x00037704) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xaea9,	// (0x00037711) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xaea9,	// (0x00037711) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xd045,	// (0x000398ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd045,	// (0x000398ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xd060,	// (0x000398c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd060,	// (0x000398c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xaeb6,	// (0x0003771e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaeb6,	// (0x0003771e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaed1,	// (0x00037739) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaed1,	// (0x00037739) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd188,	// (0x000399f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd188,	// (0x000399f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0003c457) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0003c457) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd1a3,	// (0x00039a0b) cell_vkb_candidate_pane_cp1_ParamLimits

0xd1a3,	// (0x00039a0b) cell_vkb_candidate_pane_cp1

0xccd6,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1

0xd16e,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd16e,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2

0xd17b,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd17b,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0003c450) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x0003c450) fep_vkb_candidate_drop_down_list_pane_g

0xd1c3,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd1c3,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane

0xd1d0,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd1d0,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd1dd,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd1dd,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd1e9,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd1e9,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd003,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd003,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd024,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd024,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd1f5,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd1f5,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd216,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd216,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd188,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd188,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0003c468) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0003c468) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9a75,	// (0x000362dd) title_pane_g1_ParamLimits

0x9a82,	// (0x000362ea) title_pane_g2_ParamLimits

0xf592,	// (0x0003bdfa) title_pane_g_ParamLimits

0x5aa4,	// (0x0003230c) aid_call2_pane

0x5a9c,	// (0x00032304) aid_call_pane

0x5aac,	// (0x00032314) popup_clock_analogue_window_g1

0x5aac,	// (0x00032314) popup_clock_analogue_window_g2

0xa148,	// (0x000369b0) popup_clock_analogue_window_g3

0xa151,	// (0x000369b9) popup_clock_analogue_window_g4

0x4ed8,	// (0x00031740) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003bfa9) popup_clock_analogue_window_g

0xa159,	// (0x000369c1) popup_clock_analogue_window_t1

0xa190,	// (0x000369f8) clock_digital_number_pane_ParamLimits

0xa190,	// (0x000369f8) clock_digital_number_pane

0xa19c,	// (0x00036a04) clock_digital_number_pane_cp02_ParamLimits

0xa19c,	// (0x00036a04) clock_digital_number_pane_cp02

0xa1a8,	// (0x00036a10) clock_digital_number_pane_cp03_ParamLimits

0xa1a8,	// (0x00036a10) clock_digital_number_pane_cp03

0xa1b4,	// (0x00036a1c) clock_digital_number_pane_cp04_ParamLimits

0xa1b4,	// (0x00036a1c) clock_digital_number_pane_cp04

0xa1c0,	// (0x00036a28) clock_digital_separator_pane_ParamLimits

0xa1c0,	// (0x00036a28) clock_digital_separator_pane

0xa1cc,	// (0x00036a34) popup_clock_digital_window_t1_ParamLimits

0xa1cc,	// (0x00036a34) popup_clock_digital_window_t1

0x4ed8,	// (0x00031740) clock_digital_number_pane_g1

0x4ed8,	// (0x00031740) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003bfb4) clock_digital_number_pane_g

0x4ed8,	// (0x00031740) clock_digital_separator_pane_g1

0x4ed8,	// (0x00031740) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003bfb4) clock_digital_separator_pane_g

0xbde9,	// (0x00038651) aid_fill_nsta_ParamLimits

0xbeb2,	// (0x0003871a) indicator_nsta_pane_ParamLimits

0x6402,	// (0x00032c6a) popup_clock_analogue_window

0x6402,	// (0x00032c6a) popup_clock_digital_window

0x4f3e,	// (0x000317a6) grid_indicator_nsta_pane_ParamLimits

0x7f2e,	// (0x00034796) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0003c347) clock_nsta_pane_t

0xa10c,	// (0x00036974) aid_size_max_handle

0xa116,	// (0x0003697e) aid_size_min_handle

0x5fbb,	// (0x00032823) editor_scroll_pane

0xd237,	// (0x00039a9f) ex_editor_pane

0x56a4,	// (0x00031f0c) scroll_pane_cp13

0x5524,	// (0x00031d8c) scroll_pane_cp14

0x5ad6,	// (0x0003233e) scroll_pane_cp36

0xa179,	// (0x000369e1) list_single_graphic_hl_pane_cp2_ParamLimits

0xa179,	// (0x000369e1) list_single_graphic_hl_pane_cp2

0x9138,	// (0x000359a0) list_single_graphic_hl_pane_ParamLimits

0x9138,	// (0x000359a0) list_single_graphic_hl_pane

0x9525,	// (0x00035d8d) aid_size_min_hl_cp1

0xd23f,	// (0x00039aa7) list_highlight_pane_cp34_ParamLimits

0xd23f,	// (0x00039aa7) list_highlight_pane_cp34

0xd250,	// (0x00039ab8) list_single_graphic_hl_pane_g1_ParamLimits

0xd250,	// (0x00039ab8) list_single_graphic_hl_pane_g1

0x952e,	// (0x00035d96) list_single_graphic_hl_pane_g2_ParamLimits

0x952e,	// (0x00035d96) list_single_graphic_hl_pane_g2

0x952e,	// (0x00035d96) list_single_graphic_hl_pane_g3_ParamLimits

0x952e,	// (0x00035d96) list_single_graphic_hl_pane_g3

0x5f2c,	// (0x00032794) list_single_graphic_hl_pane_g4_ParamLimits

0x5f2c,	// (0x00032794) list_single_graphic_hl_pane_g4

0x953a,	// (0x00035da2) list_single_graphic_hl_pane_g5_ParamLimits

0x953a,	// (0x00035da2) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0003c479) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0003c479) list_single_graphic_hl_pane_g

0x8895,	// (0x000350fd) list_single_graphic_hl_pane_t1_ParamLimits

0x8895,	// (0x000350fd) list_single_graphic_hl_pane_t1

0xd25d,	// (0x00039ac5) aid_size_min_hl_cp2

0xd266,	// (0x00039ace) list_highlight_pane_cp34_cp2_ParamLimits

0xd266,	// (0x00039ace) list_highlight_pane_cp34_cp2

0xd250,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd250,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2

0xd273,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd273,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2

0xd27f,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd27f,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2

0x5ef2,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5ef2,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2

0xd28d,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd28d,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2

0xa522,	// (0x00036d8a) control_pane_g4_ParamLimits

0xa522,	// (0x00036d8a) control_pane_g4

0x61f5,	// (0x00032a5d) bg_popup_sub_pane_cp10_ParamLimits

0xca47,	// (0x000392af) list_choice_list_pane_ParamLimits

0xca56,	// (0x000392be) scroll_pane_cp23

0x5071,	// (0x000318d9) bg_popup_preview_window_pane_cp02_ParamLimits

0xd0b1,	// (0x00039919) list_preview_fixed_pane_ParamLimits

0xd0c7,	// (0x0003992f) list_preview_fixed_pane_cp_ParamLimits

0xd0c7,	// (0x0003992f) list_preview_fixed_pane_cp

0xd0d3,	// (0x0003993b) popup_preview_fixed_window_g1_ParamLimits

0xd0d3,	// (0x0003993b) popup_preview_fixed_window_g1

0xd0df,	// (0x00039947) popup_preview_fixed_window_g2_ParamLimits

0xd0df,	// (0x00039947) popup_preview_fixed_window_g2

0x0002,

0xfba0,	// (0x0003c408) popup_preview_fixed_window_g_ParamLimits

0xfba0,	// (0x0003c408) popup_preview_fixed_window_g

0x9ffb,	// (0x00036863) aid_navi_side_left_pane_ParamLimits

0xa010,	// (0x00036878) aid_navi_side_right_pane_ParamLimits

0xa028,	// (0x00036890) navi_icon_pane_stacon_ParamLimits

0xa03c,	// (0x000368a4) navi_navi_pane_stacon_ParamLimits

0xa028,	// (0x00036890) navi_text_pane_stacon_ParamLimits

0x4ece,	// (0x00031736) main_text_info_pane

0xd2b7,	// (0x00039b1f) listscroll_text_info_pane

0xd2bf,	// (0x00039b27) list_text_info_pane_ParamLimits

0xd2bf,	// (0x00039b27) list_text_info_pane

0xd2ce,	// (0x00039b36) scroll_pane_cp24_ParamLimits

0xd2ce,	// (0x00039b36) scroll_pane_cp24

0xd2ec,	// (0x00039b54) list_text_info_pane_t1_ParamLimits

0xd2ec,	// (0x00039b54) list_text_info_pane_t1

0xb97a,	// (0x000381e2) popup_fast_swap2_window_ParamLimits

0xb97a,	// (0x000381e2) popup_fast_swap2_window

0xd325,	// (0x00039b8d) aid_size_cell_fast2

0x4ece,	// (0x00031736) bg_popup_window_pane_cp17

0x68a6,	// (0x0003310e) heading_pane_cp2

0x5257,	// (0x00031abf) listscroll_fast2_pane

0xd32f,	// (0x00039b97) grid_fast2_pane

0xd339,	// (0x00039ba1) listscroll_fast2_pane_g1

0xd341,	// (0x00039ba9) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0003c484) listscroll_fast2_pane_g

0x56a4,	// (0x00031f0c) scroll_pane_cp26

0xd34b,	// (0x00039bb3) cell_fast2_pane_ParamLimits

0xd34b,	// (0x00039bb3) cell_fast2_pane

0xd360,	// (0x00039bc8) cell_fast2_pane_g1

0xd369,	// (0x00039bd1) cell_fast2_pane_g2

0xd372,	// (0x00039bda) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0003c489) cell_fast2_pane_g

0x52eb,	// (0x00031b53) grid_highlight_pane_cp9

0x5300,	// (0x00031b68) main_eswt_pane_ParamLimits

0x5300,	// (0x00031b68) main_eswt_pane

0xd2e3,	// (0x00039b4b) list_single_text_info_pane

0xd37a,	// (0x00039be2) eswt_ctrl_button_pane

0xd37a,	// (0x00039be2) eswt_ctrl_canvas_pane

0xd382,	// (0x00039bea) eswt_ctrl_combo_pane

0xd37a,	// (0x00039be2) eswt_ctrl_default_pane

0xd37a,	// (0x00039be2) eswt_ctrl_label_pane

0xd38a,	// (0x00039bf2) eswt_ctrl_wait_pane

0xd392,	// (0x00039bfa) eswt_shell_pane

0x4ece,	// (0x00031736) listscroll_eswt_app_pane

0xd3b2,	// (0x00039c1a) popup_eswt_tasktip_window_ParamLimits

0xd3b2,	// (0x00039c1a) popup_eswt_tasktip_window

0x65ff,	// (0x00032e67) bg_popup_window_pane_cp18

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_ParamLimits

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_ParamLimits

0xd3d0,	// (0x00039c38) eswt_control_pane_g2

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_ParamLimits

0xd3dd,	// (0x00039c45) eswt_control_pane_g3

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_ParamLimits

0xd3ea,	// (0x00039c52) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0003c490) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0003c490) eswt_control_pane_g

0x5585,	// (0x00031ded) bg_button_pane_ParamLimits

0x5585,	// (0x00031ded) bg_button_pane

0x5300,	// (0x00031b68) common_borders_pane_copy2_ParamLimits

0x5300,	// (0x00031b68) common_borders_pane_copy2

0xd3f7,	// (0x00039c5f) control_button_pane_g1_ParamLimits

0xd3f7,	// (0x00039c5f) control_button_pane_g1

0xd403,	// (0x00039c6b) control_button_pane_g2_ParamLimits

0xd403,	// (0x00039c6b) control_button_pane_g2

0xd40f,	// (0x00039c77) control_button_pane_g3_ParamLimits

0xd40f,	// (0x00039c77) control_button_pane_g3

0x0002,

0xfc31,	// (0x0003c499) control_button_pane_g_ParamLimits

0xfc31,	// (0x0003c499) control_button_pane_g

0xd423,	// (0x00039c8b) control_button_pane_t1

0xd431,	// (0x00039c99) control_button_pane_t2

0x0001,

0xfc38,	// (0x0003c4a0) control_button_pane_t

0x650f,	// (0x00032d77) bg_button_pane_g1

0x651f,	// (0x00032d87) bg_button_pane_g2

0x6517,	// (0x00032d7f) bg_button_pane_g3

0x652f,	// (0x00032d97) bg_button_pane_g4

0x6527,	// (0x00032d8f) bg_button_pane_g5

0x6537,	// (0x00032d9f) bg_button_pane_g6

0x653f,	// (0x00032da7) bg_button_pane_g7

0x654f,	// (0x00032db7) bg_button_pane_g8

0x6547,	// (0x00032daf) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0003c10c) bg_button_pane_g

0xca02,	// (0x0003926a) common_borders_pane_ParamLimits

0xca02,	// (0x0003926a) common_borders_pane

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy1_ParamLimits

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy1

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy1_ParamLimits

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy1

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy1_ParamLimits

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy1

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy1_ParamLimits

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy1

0xca3d,	// (0x000392a5) bg_eswt_ctrl_canvas_pane_g1

0xca02,	// (0x0003926a) common_borders_pane_cp2_ParamLimits

0xca02,	// (0x0003926a) common_borders_pane_cp2

0xca02,	// (0x0003926a) common_borders_pane_cp3_ParamLimits

0xca02,	// (0x0003926a) common_borders_pane_cp3

0xd43f,	// (0x00039ca7) separator_horizontal_pane

0xd447,	// (0x00039caf) separator_vertical_pane

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy2_ParamLimits

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy2

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy2_ParamLimits

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy2

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy2_ParamLimits

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy2

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy2_ParamLimits

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy2

0x4ece,	// (0x00031736) common_borders_pane_cp4

0xd450,	// (0x00039cb8) separator_horizontal_pane_g1

0xd459,	// (0x00039cc1) separator_horizontal_pane_g2

0xd462,	// (0x00039cca) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0003c4a5) separator_horizontal_pane_g

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy3_ParamLimits

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy3

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy3_ParamLimits

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy3

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy3_ParamLimits

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy3

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy3_ParamLimits

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy3

0x4ece,	// (0x00031736) common_borders_pane_cp5

0xd46b,	// (0x00039cd3) separator_vertical_pane_g1

0xd474,	// (0x00039cdc) separator_vertical_pane_g2

0xd47d,	// (0x00039ce5) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0003c4ac) separator_vertical_pane_g

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy4_ParamLimits

0xd3c3,	// (0x00039c2b) eswt_control_pane_g1_copy4

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy4_ParamLimits

0xd3d0,	// (0x00039c38) eswt_control_pane_g2_copy4

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy4_ParamLimits

0xd3dd,	// (0x00039c45) eswt_control_pane_g3_copy4

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy4_ParamLimits

0xd3ea,	// (0x00039c52) eswt_control_pane_g4_copy4

0xd486,	// (0x00039cee) eswt_ctrl_combo_button_pane

0xd48e,	// (0x00039cf6) eswt_ctrl_input_pane

0xd496,	// (0x00039cfe) popup_choice_list_window_cp70

0xd49e,	// (0x00039d06) eswt_ctrl_input_pane_t1

0x4ece,	// (0x00031736) input_focus_pane_cp70

0xca02,	// (0x0003926a) bg_button_pane_cp70_ParamLimits

0xca02,	// (0x0003926a) bg_button_pane_cp70

0xd4ac,	// (0x00039d14) eswt_ctrl_combo_button_pane_g1

0xd4b4,	// (0x00039d1c) wait_bar_pane_cp70

0x65ff,	// (0x00032e67) bg_popup_window_pane_cp70_ParamLimits

0x65ff,	// (0x00032e67) bg_popup_window_pane_cp70

0xd4bc,	// (0x00039d24) popup_eswt_tasktip_window_t1

0xd4d2,	// (0x00039d3a) wait_bar_pane_cp71_ParamLimits

0xd4d2,	// (0x00039d3a) wait_bar_pane_cp71

0xd4de,	// (0x00039d46) grid_eswt_app_pane

0x58e2,	// (0x0003214a) scroll_pane_cp70

0xd4e7,	// (0x00039d4f) cell_eswt_app_pane_ParamLimits

0xd4e7,	// (0x00039d4f) cell_eswt_app_pane

0xd51b,	// (0x00039d83) cell_eswt_app_pane_g1_ParamLimits

0xd51b,	// (0x00039d83) cell_eswt_app_pane_g1

0xd54a,	// (0x00039db2) cell_eswt_app_pane_g2_ParamLimits

0xd54a,	// (0x00039db2) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0003c4b3) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0003c4b3) cell_eswt_app_pane_g

0xd573,	// (0x00039ddb) cell_eswt_app_pane_t1_ParamLimits

0xd573,	// (0x00039ddb) cell_eswt_app_pane_t1

0xd5a5,	// (0x00039e0d) grid_highlight_pane_cp70_ParamLimits

0xd5a5,	// (0x00039e0d) grid_highlight_pane_cp70

0x5e8e,	// (0x000326f6) set_content_pane_g1

0x6192,	// (0x000329fa) status_small_volume_pane

0xaeec,	// (0x00037754) status_small_volume_pane_g1

0xaef4,	// (0x0003775c) volume_small2_pane

0xaefd,	// (0x00037765) volume_small2_pane_g1

0xaf06,	// (0x0003776e) volume_small2_pane_g2

0xaf0f,	// (0x00037777) volume_small2_pane_g3

0xaf18,	// (0x00037780) volume_small2_pane_g4

0xaf21,	// (0x00037789) volume_small2_pane_g5

0xaf2a,	// (0x00037792) volume_small2_pane_g6

0xaf33,	// (0x0003779b) volume_small2_pane_g7

0xaf3c,	// (0x000377a4) volume_small2_pane_g8

0xaf45,	// (0x000377ad) volume_small2_pane_g9

0xaf4e,	// (0x000377b6) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0003c4b8) volume_small2_pane_g

0xce1e,	// (0x00039686) fep_vkb_top_text_pane_g1_ParamLimits

0xce39,	// (0x000396a1) fep_vkb_top_text_pane_t1_ParamLimits

0xd0eb,	// (0x00039953) popup_preview_fixed_window_g3_ParamLimits

0xd0eb,	// (0x00039953) popup_preview_fixed_window_g3

0xbd7c,	// (0x000385e4) popup_toolbar_trans_pane

0xc3fa,	// (0x00038c62) aid_height_set_list_ParamLimits

0x7431,	// (0x00033c99) aid_size_parent_ParamLimits

0x61f5,	// (0x00032a5d) list_highlight_pane_cp2_ParamLimits

0x5e8e,	// (0x000326f6) set_content_pane_g1_ParamLimits

0x915a,	// (0x000359c2) list_single_image_pane_ParamLimits

0x915a,	// (0x000359c2) list_single_image_pane

0xd5b1,	// (0x00039e19) aid_size_cell_image_ParamLimits

0xd5b1,	// (0x00039e19) aid_size_cell_image

0xd5be,	// (0x00039e26) grid_single_image_pane_ParamLimits

0xd5be,	// (0x00039e26) grid_single_image_pane

0x559f,	// (0x00031e07) list_single_image_pane_g1_ParamLimits

0x559f,	// (0x00031e07) list_single_image_pane_g1

0x55ab,	// (0x00031e13) list_single_image_pane_g2_ParamLimits

0x55ab,	// (0x00031e13) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0003c4cd) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0003c4cd) list_single_image_pane_g

0xd5ca,	// (0x00039e32) list_single_image_pane_t1_ParamLimits

0xd5ca,	// (0x00039e32) list_single_image_pane_t1

0xd5e0,	// (0x00039e48) cell_image_list_pane_ParamLimits

0xd5e0,	// (0x00039e48) cell_image_list_pane

0xd5f4,	// (0x00039e5c) cell_image_list_pane_g1

0xd5fd,	// (0x00039e65) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0003c4d2) cell_image_list_pane_g

0xd606,	// (0x00039e6e) aid_size_cell_tb_trans_pane

0x5585,	// (0x00031ded) bg_tb_trans_pane

0xd618,	// (0x00039e80) grid_tb_trans_pane

0x650f,	// (0x00032d77) bg_tb_trans_pane_g1

0x651f,	// (0x00032d87) bg_tb_trans_pane_g2

0x6517,	// (0x00032d7f) bg_tb_trans_pane_g3

0x652f,	// (0x00032d97) bg_tb_trans_pane_g4

0x6527,	// (0x00032d8f) bg_tb_trans_pane_g5

0x654f,	// (0x00032db7) bg_tb_trans_pane_g6

0x6547,	// (0x00032daf) bg_tb_trans_pane_g7

0x6537,	// (0x00032d9f) bg_tb_trans_pane_g8

0x653f,	// (0x00032da7) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0003c4d7) bg_tb_trans_pane_g

0xd62c,	// (0x00039e94) cell_toolbar_trans_pane_ParamLimits

0xd62c,	// (0x00039e94) cell_toolbar_trans_pane

0xca3d,	// (0x000392a5) cell_toolbar_trans_pane_g1

0xc79c,	// (0x00039004) list_form2_midp_pane_t1

0xc7aa,	// (0x00039012) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0003c380) list_form2_midp_pane_t

0x7fb3,	// (0x0003481b) scroll_pane_cp51_ParamLimits

0x8129,	// (0x00034991) form2_midp_wait_pane_g1

0x8132,	// (0x0003499a) form2_midp_wait_pane_g2

0x813b,	// (0x000349a3) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0003c395) form2_midp_wait_pane_g

0x4f3e,	// (0x000317a6) list_highlight_pane_cp21_ParamLimits

0x815b,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x816a,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa9bb,	// (0x00037223) list_single_2graphic_im_pane_ParamLimits

0xa9bb,	// (0x00037223) list_single_2graphic_im_pane

0xd652,	// (0x00039eba) list_single_2graphic_im_pane_g1_ParamLimits

0xd652,	// (0x00039eba) list_single_2graphic_im_pane_g1

0xd663,	// (0x00039ecb) list_single_2graphic_im_pane_g2_ParamLimits

0xd663,	// (0x00039ecb) list_single_2graphic_im_pane_g2

0xd66f,	// (0x00039ed7) list_single_2graphic_im_pane_g3_ParamLimits

0xd66f,	// (0x00039ed7) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0003c4ea) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0003c4ea) list_single_2graphic_im_pane_g

0xd68f,	// (0x00039ef7) list_single_2graphic_im_pane_t1_ParamLimits

0xd68f,	// (0x00039ef7) list_single_2graphic_im_pane_t1

0xd0f7,	// (0x0003995f) list_single_graphic_2heading_pane_fp_ParamLimits

0xd0f7,	// (0x0003995f) list_single_graphic_2heading_pane_fp

0x9397,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9397,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1

0xd10e,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd10e,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2

0x9e03,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9e03,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3

0x936c,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x936c,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4

0xd11a,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd11a,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c418) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c418) list_single_graphic_2heading_pane_fp_g

0x954e,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x954e,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1

0x93cf,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x93cf,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2

0x9564,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9564,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0003c4f3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0003c4f3) list_single_graphic_2heading_pane_fp_t

0xcadd,	// (0x00039345) fep_hwr_write_pane_g5_ParamLimits

0xcadd,	// (0x00039345) fep_hwr_write_pane_g5

0xcae9,	// (0x00039351) fep_hwr_write_pane_g6_ParamLimits

0xcae9,	// (0x00039351) fep_hwr_write_pane_g6

0xd392,	// (0x00039bfa) eswt_shell_pane_ParamLimits

0x65ff,	// (0x00032e67) bg_popup_window_pane_cp18_ParamLimits

0x75c6,	// (0x00033e2e) heading_pane_cp70

0xd4bc,	// (0x00039d24) popup_eswt_tasktip_window_t1_ParamLimits

0xbe29,	// (0x00038691) aid_touch_tab_arrow_left

0xbe38,	// (0x000386a0) aid_touch_tab_arrow_right

0x9a93,	// (0x000362fb) title_pane_g3_ParamLimits

0x9a93,	// (0x000362fb) title_pane_g3

0x5544,	// (0x00031dac) set_value_pane_g1

0xbd7c,	// (0x000385e4) popup_toolbar_trans_pane_ParamLimits

0xd606,	// (0x00039e6e) aid_size_cell_tb_trans_pane_ParamLimits

0x5585,	// (0x00031ded) bg_tb_trans_pane_ParamLimits

0xd618,	// (0x00039e80) grid_tb_trans_pane_ParamLimits

0x5071,	// (0x000318d9) cont_note_pane_ParamLimits

0x5071,	// (0x000318d9) cont_note_pane

0x5300,	// (0x00031b68) cont_snote2_single_text_pane_ParamLimits

0x5300,	// (0x00031b68) cont_snote2_single_text_pane

0x5300,	// (0x00031b68) cont_snote2_single_graphic_pane_ParamLimits

0x5300,	// (0x00031b68) cont_snote2_single_graphic_pane

0x6a8b,	// (0x000332f3) cont_note_wait_pane_ParamLimits

0x6a8b,	// (0x000332f3) cont_note_wait_pane

0x6a8b,	// (0x000332f3) cont_note_image_pane_ParamLimits

0x6a8b,	// (0x000332f3) cont_note_image_pane

0xd6c0,	// (0x00039f28) popup_note2_window_g1_ParamLimits

0xd6c0,	// (0x00039f28) popup_note2_window_g1

0xd6f1,	// (0x00039f59) popup_note2_window_t1_ParamLimits

0xd6f1,	// (0x00039f59) popup_note2_window_t1

0xd736,	// (0x00039f9e) popup_note2_window_t2_ParamLimits

0xd736,	// (0x00039f9e) popup_note2_window_t2

0xd77b,	// (0x00039fe3) popup_note2_window_t3_ParamLimits

0xd77b,	// (0x00039fe3) popup_note2_window_t3

0xd7c0,	// (0x0003a028) popup_note2_window_t4_ParamLimits

0xd7c0,	// (0x0003a028) popup_note2_window_t4

0x50e9,	// (0x00031951) popup_note2_window_t5_ParamLimits

0x50e9,	// (0x00031951) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0003c4ff) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0003c4ff) popup_note2_window_t

0xd7ef,	// (0x0003a057) popup_note2_image_window_g1_ParamLimits

0xd7ef,	// (0x0003a057) popup_note2_image_window_g1

0xd7fb,	// (0x0003a063) popup_note2_image_window_g2_ParamLimits

0xd7fb,	// (0x0003a063) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0003c50a) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0003c50a) popup_note2_image_window_g

0xd80d,	// (0x0003a075) popup_note2_image_window_t1_ParamLimits

0xd80d,	// (0x0003a075) popup_note2_image_window_t1

0xd825,	// (0x0003a08d) popup_note2_image_window_t2_ParamLimits

0xd825,	// (0x0003a08d) popup_note2_image_window_t2

0xd83d,	// (0x0003a0a5) popup_note2_image_window_t3_ParamLimits

0xd83d,	// (0x0003a0a5) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0003c50f) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0003c50f) popup_note2_image_window_t

0x6a99,	// (0x00033301) popup_note2_wait_window_g1_ParamLimits

0x6a99,	// (0x00033301) popup_note2_wait_window_g1

0x6aa5,	// (0x0003330d) popup_note2_wait_window_g2_ParamLimits

0x6aa5,	// (0x0003330d) popup_note2_wait_window_g2

0x6ab1,	// (0x00033319) popup_note2_wait_window_g3_ParamLimits

0x6ab1,	// (0x00033319) popup_note2_wait_window_g3

0x0002,

0xf886,	// (0x0003c0ee) popup_note2_wait_window_g_ParamLimits

0xf886,	// (0x0003c0ee) popup_note2_wait_window_g

0xd859,	// (0x0003a0c1) popup_note2_wait_window_t1_ParamLimits

0xd859,	// (0x0003a0c1) popup_note2_wait_window_t1

0xd877,	// (0x0003a0df) popup_note2_wait_window_t2_ParamLimits

0xd877,	// (0x0003a0df) popup_note2_wait_window_t2

0xd895,	// (0x0003a0fd) popup_note2_wait_window_t3_ParamLimits

0xd895,	// (0x0003a0fd) popup_note2_wait_window_t3

0xd8a7,	// (0x0003a10f) popup_note2_wait_window_t4_ParamLimits

0xd8a7,	// (0x0003a10f) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0003c516) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0003c516) popup_note2_wait_window_t

0xd8b9,	// (0x0003a121) wait_bar2_pane_ParamLimits

0xd8b9,	// (0x0003a121) wait_bar2_pane

0xd8d1,	// (0x0003a139) popup_snote2_single_text_window_g1_ParamLimits

0xd8d1,	// (0x0003a139) popup_snote2_single_text_window_g1

0xd8f9,	// (0x0003a161) popup_snote2_single_text_window_t1_ParamLimits

0xd8f9,	// (0x0003a161) popup_snote2_single_text_window_t1

0xd945,	// (0x0003a1ad) popup_snote2_single_text_window_t2_ParamLimits

0xd945,	// (0x0003a1ad) popup_snote2_single_text_window_t2

0xd991,	// (0x0003a1f9) popup_snote2_single_text_window_t3_ParamLimits

0xd991,	// (0x0003a1f9) popup_snote2_single_text_window_t3

0xd9d2,	// (0x0003a23a) popup_snote2_single_text_window_t4_ParamLimits

0xd9d2,	// (0x0003a23a) popup_snote2_single_text_window_t4

0xda08,	// (0x0003a270) popup_snote2_single_text_window_t5_ParamLimits

0xda08,	// (0x0003a270) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0003c51f) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0003c51f) popup_snote2_single_text_window_t

0xda33,	// (0x0003a29b) popup_snote2_single_graphic_window_g1_ParamLimits

0xda33,	// (0x0003a29b) popup_snote2_single_graphic_window_g1

0xda5b,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2_ParamLimits

0xda5b,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0003c52a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0003c52a) popup_snote2_single_graphic_window_g

0xda83,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1_ParamLimits

0xda83,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1

0xdacf,	// (0x0003a337) popup_snote2_single_graphic_window_t2_ParamLimits

0xdacf,	// (0x0003a337) popup_snote2_single_graphic_window_t2

0xd991,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3_ParamLimits

0xd991,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3

0xd9d2,	// (0x0003a23a) popup_snote2_single_graphic_window_t4_ParamLimits

0xd9d2,	// (0x0003a23a) popup_snote2_single_graphic_window_t4

0xda08,	// (0x0003a270) popup_snote2_single_graphic_window_t5_ParamLimits

0xda08,	// (0x0003a270) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0003c52f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0003c52f) popup_snote2_single_graphic_window_t

0x7f63,	// (0x000347cb) clock_nsta_pane_cp2_t1

0x7f63,	// (0x000347cb) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0003c356) clock_nsta_pane_cp2_t

0x8dbc,	// (0x00035624) form_field_data_wide_pane_g1_ParamLimits

0x559f,	// (0x00031e07) form_field_data_wide_pane_g2_ParamLimits

0x559f,	// (0x00031e07) form_field_data_wide_pane_g2

0x55ab,	// (0x00031e13) form_field_data_wide_pane_g3_ParamLimits

0x55ab,	// (0x00031e13) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003bf2c) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003bf2c) form_field_data_wide_pane_g

0xc663,	// (0x00038ecb) grid_touch_3_pane_ParamLimits

0xc663,	// (0x00038ecb) grid_touch_3_pane

0xdb1b,	// (0x0003a383) cell_touch_3_pane_ParamLimits

0xdb1b,	// (0x0003a383) cell_touch_3_pane

0xca3d,	// (0x000392a5) cell_touch_3_pane_g1

0xca3d,	// (0x000392a5) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0003c3db) cell_touch_3_pane_g

0x511b,	// (0x00031983) cont_query_data_pane

0x5123,	// (0x0003198b) cont_query_data_pane_cp1

0xdb4a,	// (0x0003a3b2) button_value_adjust_pane_cp7

0xdb52,	// (0x0003a3ba) query_popup_pane_cp3

0x5b08,	// (0x00032370) bg_popup_sub_pane_cp22_ParamLimits

0xa227,	// (0x00036a8f) navi_navi_volume_pane_cp2

0xa242,	// (0x00036aaa) popup_side_volume_key_window_g2

0xa251,	// (0x00036ab9) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003bfbe) popup_side_volume_key_window_g

0xa26e,	// (0x00036ad6) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003bfc5) popup_side_volume_key_window_t

0x5d58,	// (0x000325c0) popup_side_volume_key_window_ParamLimits

0x8a16,	// (0x0003527e) list_double_graphic_pane_g4_ParamLimits

0x8a16,	// (0x0003527e) list_double_graphic_pane_g4

0xaa06,	// (0x0003726e) list_single_2heading_msg_pane_ParamLimits

0xaa06,	// (0x0003726e) list_single_2heading_msg_pane

0xaf57,	// (0x000377bf) list_single_2heading_msg_pane_g1_ParamLimits

0xaf57,	// (0x000377bf) list_single_2heading_msg_pane_g1

0xaf63,	// (0x000377cb) list_single_2heading_msg_pane_g2_ParamLimits

0xaf63,	// (0x000377cb) list_single_2heading_msg_pane_g2

0xaf6f,	// (0x000377d7) list_single_2heading_msg_pane_g3_ParamLimits

0xaf6f,	// (0x000377d7) list_single_2heading_msg_pane_g3

0xaf7b,	// (0x000377e3) list_single_2heading_msg_pane_g4_ParamLimits

0xaf7b,	// (0x000377e3) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0003c53a) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0003c53a) list_single_2heading_msg_pane_g

0x9584,	// (0x00035dec) list_single_2heading_msg_pane_t1_ParamLimits

0x9584,	// (0x00035dec) list_single_2heading_msg_pane_t1

0x95ac,	// (0x00035e14) list_single_2heading_msg_pane_t2_ParamLimits

0x95ac,	// (0x00035e14) list_single_2heading_msg_pane_t2

0x95e0,	// (0x00035e48) list_single_2heading_msg_pane_t3_ParamLimits

0x95e0,	// (0x00035e48) list_single_2heading_msg_pane_t3

0x9619,	// (0x00035e81) list_single_2heading_msg_pane_t4_ParamLimits

0x9619,	// (0x00035e81) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0003c543) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0003c543) list_single_2heading_msg_pane_t

0x4eec,	// (0x00031754) title_pane_g4_ParamLimits

0x4eec,	// (0x00031754) title_pane_g4

0x9f4b,	// (0x000367b3) title_pane_stacon_g3_ParamLimits

0x9f4b,	// (0x000367b3) title_pane_stacon_g3

0xd683,	// (0x00039eeb) list_single_2graphic_im_pane_g4_ParamLimits

0xd683,	// (0x00039eeb) list_single_2graphic_im_pane_g4

0x73cc,	// (0x00033c34) popup_side_volume_key_window_cp

0x78b6,	// (0x0003411e) main_idle_act2_pane_t1

0xa66c,	// (0x00036ed4) toolbar_button_pane_g10

0x9d88,	// (0x000365f0) popup_toolbar_window_cp1

0x7f54,	// (0x000347bc) clock_nsta_pane_cp_t1

0x7f54,	// (0x000347bc) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0003c351) clock_nsta_pane_cp_t

0xa227,	// (0x00036a8f) navi_navi_volume_pane_cp2_ParamLimits

0xa236,	// (0x00036a9e) popup_side_volume_key_window_g1_ParamLimits

0xa242,	// (0x00036aaa) popup_side_volume_key_window_g2_ParamLimits

0xa251,	// (0x00036ab9) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003bfbe) popup_side_volume_key_window_g_ParamLimits

0xac17,	// (0x0003747f) fep_hwr_aid_pane

0x1913,	// (0x0002e17b) bg_fep_hwr_top_pane_g4_ParamLimits

0xcaad,	// (0x00039315) fep_hwr_top_pane_g1_ParamLimits

0xcabf,	// (0x00039327) fep_hwr_top_pane_g2_ParamLimits

0xacd0,	// (0x00037538) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0003c3a6) fep_hwr_top_pane_g_ParamLimits

0xace5,	// (0x0003754d) fep_hwr_top_text_pane_ParamLimits

0x71ca,	// (0x00033a32) aid_touch_tab_arrow_arrow_2

0x71c1,	// (0x00033a29) aid_touch_tab_arrow_left_2

0xac2b,	// (0x00037493) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xac62,	// (0x000374ca) fep_hwr_prediction_pane

0xcc26,	// (0x0003948e) fep_vkb_prediction_pane

0xcd2a,	// (0x00039592) fep_vkb_side_pane_g3_ParamLimits

0xcd2a,	// (0x00039592) fep_vkb_side_pane_g3

0xccd6,	// (0x0003953e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xd16e,	// (0x000399d6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xd17b,	// (0x000399e3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe8,	// (0x0003c450) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xdb77,	// (0x0003a3df) fep_hwr_prediction_pane_g1

0xaf93,	// (0x000377fb) fep_hwr_prediction_pane_g2

0xaf9b,	// (0x00037803) fep_hwr_prediction_pane_g3

0xafa3,	// (0x0003780b) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0003c54c) fep_hwr_prediction_pane_g

0xdb77,	// (0x0003a3df) fep_vkb_prediction_pane_g1

0xdb81,	// (0x0003a3e9) fep_vkb_prediction_pane_g2

0xdb89,	// (0x0003a3f1) fep_vkb_prediction_pane_g3

0xdb91,	// (0x0003a3f9) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0003c555) fep_vkb_prediction_pane_g

0xa944,	// (0x000371ac) slider_set_pane_g3

0xa958,	// (0x000371c0) slider_set_pane_g4

0xa970,	// (0x000371d8) slider_set_pane_g5

0xa944,	// (0x000371ac) slider_set_pane_g6

0xa986,	// (0x000371ee) slider_set_pane_g7

0x764b,	// (0x00033eb3) slider_form_pane_g3

0x7654,	// (0x00033ebc) slider_form_pane_g4

0x765c,	// (0x00033ec4) slider_form_pane_g5

0x764b,	// (0x00033eb3) slider_form_pane_g6

0xc54d,	// (0x00038db5) slider_form_pane_g7

0x7b54,	// (0x000343bc) slider_set_pane_vc_g3

0x7b5d,	// (0x000343c5) slider_set_pane_vc_g4

0x7b66,	// (0x000343ce) slider_set_pane_vc_g5

0x7b54,	// (0x000343bc) slider_set_pane_vc_g6

0x7b6f,	// (0x000343d7) slider_set_pane_vc_g7

0x7b54,	// (0x000343bc) slider_form_pane_vc_g1

0x7b5d,	// (0x000343c5) slider_form_pane_vc_g2

0x7b66,	// (0x000343ce) slider_form_pane_vc_g3

0x7b54,	// (0x000343bc) slider_form_pane_vc_g4

0x7cfe,	// (0x00034566) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0003c337) slider_form_pane_vc_g

0x4ece,	// (0x00031736) main_idle_act3_pane

0xdb99,	// (0x0003a401) ai3_links_pane

0xdba2,	// (0x0003a40a) popup_ai3_data_window_ParamLimits

0xdba2,	// (0x0003a40a) popup_ai3_data_window

0x4ece,	// (0x00031736) grid_ai3_links_pane

0xdbba,	// (0x0003a422) cell_ai3_links_pane_ParamLimits

0xdbba,	// (0x0003a422) cell_ai3_links_pane

0xdbd2,	// (0x0003a43a) bg_popup_sub_pane_cp11

0xdbdf,	// (0x0003a447) cell_ai3_links_pane_g1

0x4ece,	// (0x00031736) bg_popup_sub_pane_cp12

0xdc04,	// (0x0003a46c) heading_ai3_data_pane

0xdc0c,	// (0x0003a474) list_ai3_gene_pane

0xdc18,	// (0x0003a480) popup_ai3_data_window_g1

0xdc20,	// (0x0003a488) heading_ai3_data_pane_g1

0xdc28,	// (0x0003a490) heading_ai3_data_pane_t1

0xdc36,	// (0x0003a49e) list_double_ai3_gene_pane_ParamLimits

0xdc36,	// (0x0003a49e) list_double_ai3_gene_pane

0xdc43,	// (0x0003a4ab) list_single_ai3_gene_pane_ParamLimits

0xdc43,	// (0x0003a4ab) list_single_ai3_gene_pane

0xca02,	// (0x0003926a) list_highlight_pane_cp7_ParamLimits

0xca02,	// (0x0003926a) list_highlight_pane_cp7

0xdc50,	// (0x0003a4b8) list_single_a13_gene_pane_t1_ParamLimits

0xdc50,	// (0x0003a4b8) list_single_a13_gene_pane_t1

0xdc67,	// (0x0003a4cf) list_single_ai3_gene_pane_g1

0xdc91,	// (0x0003a4f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0003c55e) list_single_ai3_gene_pane_g

0xdc99,	// (0x0003a501) list_double_ai3_gene_pane_g1_ParamLimits

0xdc99,	// (0x0003a501) list_double_ai3_gene_pane_g1

0xdca5,	// (0x0003a50d) list_double_ai3_gene_pane_t1_ParamLimits

0xdca5,	// (0x0003a50d) list_double_ai3_gene_pane_t1

0xdcc1,	// (0x0003a529) list_double_ai3_gene_pane_t2_ParamLimits

0xdcc1,	// (0x0003a529) list_double_ai3_gene_pane_t2

0xdcd6,	// (0x0003a53e) list_double_ai3_gene_pane_t3_ParamLimits

0xdcd6,	// (0x0003a53e) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0003c563) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0003c563) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x957a,	// (0x00035de2) aid_size_min_col_2

0xdb63,	// (0x0003a3cb) aid_size_min_msg_ParamLimits

0xdb63,	// (0x0003a3cb) aid_size_min_msg

0xce2a,	// (0x00039692) fep_vkb_top_text_pane_g2_ParamLimits

0xce2a,	// (0x00039692) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0003c3d6) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0003c3d6) fep_vkb_top_text_pane_g

0x4ece,	// (0x00031736) main_hc_apps_shell_pane

0xdcf3,	// (0x0003a55b) grid_hc_apps_pane_ParamLimits

0xdcf3,	// (0x0003a55b) grid_hc_apps_pane

0xdd02,	// (0x0003a56a) list_hc_apps_pane

0xdd0a,	// (0x0003a572) scroll_pane_cp37_ParamLimits

0xdd0a,	// (0x0003a572) scroll_pane_cp37

0xdd16,	// (0x0003a57e) cell_hc_apps_pane_ParamLimits

0xdd16,	// (0x0003a57e) cell_hc_apps_pane

0xddc6,	// (0x0003a62e) cell_hc_apps_pane_g1_ParamLimits

0xddc6,	// (0x0003a62e) cell_hc_apps_pane_g1

0xddf7,	// (0x0003a65f) cell_hc_apps_pane_g2_ParamLimits

0xddf7,	// (0x0003a65f) cell_hc_apps_pane_g2

0xde13,	// (0x0003a67b) cell_hc_apps_pane_g3_ParamLimits

0xde13,	// (0x0003a67b) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0003c56a) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0003c56a) cell_hc_apps_pane_g

0xde35,	// (0x0003a69d) cell_hc_apps_pane_t1_ParamLimits

0xde35,	// (0x0003a69d) cell_hc_apps_pane_t1

0x5071,	// (0x000318d9) grid_highlight_pane_cp10_ParamLimits

0x5071,	// (0x000318d9) grid_highlight_pane_cp10

0xde75,	// (0x0003a6dd) list_single_hc_apps_pane_ParamLimits

0xde75,	// (0x0003a6dd) list_single_hc_apps_pane

0xdee8,	// (0x0003a750) list_single_hc_apps_pane_g1

0xafab,	// (0x00037813) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0003c571) list_single_hc_apps_pane_g

0xafc4,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1

0x963e,	// (0x00035ea6) list_single_hc_apps_pane_t1

0x4f3e,	// (0x000317a6) bg_set_opt_pane_cp_ParamLimits

0x9b43,	// (0x000363ab) setting_slider_pane_t1_ParamLimits

0x9b5c,	// (0x000363c4) setting_slider_pane_t2_ParamLimits

0x9b75,	// (0x000363dd) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003be0a) setting_slider_pane_t_ParamLimits

0x9b8c,	// (0x000363f4) slider_set_pane_ParamLimits

0xa52e,	// (0x00036d96) control_pane_g5_ParamLimits

0xa52e,	// (0x00036d96) control_pane_g5

0x760d,	// (0x00033e75) slider_set_pane_g1_ParamLimits

0xa938,	// (0x000371a0) slider_set_pane_g2_ParamLimits

0xa944,	// (0x000371ac) slider_set_pane_g3_ParamLimits

0xa958,	// (0x000371c0) slider_set_pane_g4_ParamLimits

0xa970,	// (0x000371d8) slider_set_pane_g5_ParamLimits

0xa944,	// (0x000371ac) slider_set_pane_g6_ParamLimits

0xa986,	// (0x000371ee) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0003c20a) slider_set_pane_g_ParamLimits

0x5e39,	// (0x000326a1) navi_icon_text_pane_ParamLimits

0xbdff,	// (0x00038667) aid_fill_nsta_2_ParamLimits

0xbe29,	// (0x00038691) aid_touch_tab_arrow_left_ParamLimits

0xbe38,	// (0x000386a0) aid_touch_tab_arrow_right_ParamLimits

0xbea5,	// (0x0003870d) clock_nsta_pane_ParamLimits

0xc2ff,	// (0x00038b67) navi_icon_pane_g1_ParamLimits

0xc30e,	// (0x00038b76) navi_text_pane_t1_ParamLimits

0xc778,	// (0x00038fe0) navi_icon_text_pane_g1_ParamLimits

0xc787,	// (0x00038fef) navi_icon_text_pane_t1_ParamLimits

0xdee8,	// (0x0003a750) list_single_hc_apps_pane_g1_ParamLimits

0xafab,	// (0x00037813) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0003c571) list_single_hc_apps_pane_g_ParamLimits

0xafc4,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x963e,	// (0x00035ea6) list_single_hc_apps_pane_t1_ParamLimits

0x9997,	// (0x000361ff) popup_toolbar2_fixed_window_ParamLimits

0x9997,	// (0x000361ff) popup_toolbar2_fixed_window

0xbd72,	// (0x000385da) popup_toolbar2_float_window

0x4ece,	// (0x00031736) bg_popup_sub_pane_cp27

0xdf01,	// (0x0003a769) grid_toolbar2_float_pane

0x4ece,	// (0x00031736) bg_popup_sub_pane_cp26

0xdf01,	// (0x0003a769) grid_toolbar2_fixed_pane

0xdf09,	// (0x0003a771) cell_toolbar2_fixed_pane_ParamLimits

0xdf09,	// (0x0003a771) cell_toolbar2_fixed_pane

0xdf1a,	// (0x0003a782) cell_toolbar2_fixed_pane_g1

0xdf23,	// (0x0003a78b) toolbar2_fixed_button_pane

0x650f,	// (0x00032d77) toolbar2_fixed_button_pane_g1

0x651f,	// (0x00032d87) toolbar2_fixed_button_pane_g2

0x6517,	// (0x00032d7f) toolbar2_fixed_button_pane_g3

0x652f,	// (0x00032d97) toolbar2_fixed_button_pane_g4

0x6527,	// (0x00032d8f) toolbar2_fixed_button_pane_g5

0x6537,	// (0x00032d9f) toolbar2_fixed_button_pane_g6

0x653f,	// (0x00032da7) toolbar2_fixed_button_pane_g7

0x654f,	// (0x00032db7) toolbar2_fixed_button_pane_g8

0x6547,	// (0x00032daf) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0003c10c) toolbar2_fixed_button_pane_g

0xdf2b,	// (0x0003a793) cell_toolbar2_float_pane_ParamLimits

0xdf2b,	// (0x0003a793) cell_toolbar2_float_pane

0xdf3c,	// (0x0003a7a4) cell_toolbar2_float_pane_g1

0xdf23,	// (0x0003a78b) toolbar2_fixed_button_pane_cp

0xcb7f,	// (0x000393e7) fep_vkb_accented_list_pane_ParamLimits

0xcb7f,	// (0x000393e7) fep_vkb_accented_list_pane

0xae33,	// (0x0003769b) bg_popup_fep_shadow_pane_g9

0x5fbb,	// (0x00032823) bg_popup_fep_shadow_pane_cp3

0x568b,	// (0x00031ef3) list_accented_list_pane

0xdf45,	// (0x0003a7ad) list_single_accented_list_pane_ParamLimits

0xdf45,	// (0x0003a7ad) list_single_accented_list_pane

0x5fbb,	// (0x00032823) list_highlight_pane_cp10

0xdf56,	// (0x0003a7be) list_single_accented_list_pane_t1

0xbcca,	// (0x00038532) popup_slider_window_ParamLimits

0xbcca,	// (0x00038532) popup_slider_window

0xdb5a,	// (0x0003a3c2) aid_indentation_list_msg

0xe010,	// (0x0003a878) bg_popup_window_pane_cp19

0xe07a,	// (0x0003a8e2) popup_slider_window_g1

0xe096,	// (0x0003a8fe) popup_slider_window_g2

0xe0b2,	// (0x0003a91a) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0003c576) popup_slider_window_g

0xe10e,	// (0x0003a976) popup_slider_window_t1

0xe182,	// (0x0003a9ea) small_volume_slider_vertical_pane

0xca3d,	// (0x000392a5) small_volume_slider_vertical_pane_g1

0xca3d,	// (0x000392a5) small_volume_slider_vertical_pane_g2

0xe19e,	// (0x0003aa06) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0003c588) small_volume_slider_vertical_pane_g

0x9767,	// (0x00035fcf) area_side_right_pane_ParamLimits

0x9767,	// (0x00035fcf) area_side_right_pane

0xafe0,	// (0x00037848) aid_size_side_button_ParamLimits

0xafe0,	// (0x00037848) aid_size_side_button

0xaff4,	// (0x0003785c) grid_sctrl_middle_pane_ParamLimits

0xaff4,	// (0x0003785c) grid_sctrl_middle_pane

0xb014,	// (0x0003787c) sctrl_sk_bottom_pane

0xb025,	// (0x0003788d) sctrl_sk_top_pane

0xb037,	// (0x0003789f) aid_touch_sctrl_top

0x5071,	// (0x000318d9) bg_sctrl_sk_pane_ParamLimits

0x5071,	// (0x000318d9) bg_sctrl_sk_pane

0xb044,	// (0x000378ac) sctrl_sk_top_pane_g1

0xb051,	// (0x000378b9) sctrl_sk_top_pane_t1

0xb037,	// (0x0003789f) aid_touch_sctrl_bottom

0x5071,	// (0x000318d9) bg_sctrl_sk_pane_cp_ParamLimits

0x5071,	// (0x000318d9) bg_sctrl_sk_pane_cp

0xb06c,	// (0x000378d4) sctrl_sk_bottom_pane_g1

0xb051,	// (0x000378b9) sctrl_sk_bottom_pane_t1

0xb075,	// (0x000378dd) cell_sctrl_middle_pane_ParamLimits

0xb075,	// (0x000378dd) cell_sctrl_middle_pane

0xb090,	// (0x000378f8) aid_touch_sctrl_middle_ParamLimits

0xb090,	// (0x000378f8) aid_touch_sctrl_middle

0x5585,	// (0x00031ded) bg_sctrl_middle_pane_ParamLimits

0x5585,	// (0x00031ded) bg_sctrl_middle_pane

0xccd6,	// (0x0003953e) cell_sctrl_middle_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) cell_sctrl_middle_pane_g1

0xb0a2,	// (0x0003790a) cell_sctrl_middle_pane_g2_ParamLimits

0xb0a2,	// (0x0003790a) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0003c594) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0003c594) cell_sctrl_middle_pane_g

0x650f,	// (0x00032d77) bg_sctrl_middle_pane_g1

0x651f,	// (0x00032d87) bg_sctrl_middle_pane_g2

0x6517,	// (0x00032d7f) bg_sctrl_middle_pane_g3

0x652f,	// (0x00032d97) bg_sctrl_middle_pane_g4

0x6527,	// (0x00032d8f) bg_sctrl_middle_pane_g5

0x6537,	// (0x00032d9f) bg_sctrl_middle_pane_g6

0x653f,	// (0x00032da7) bg_sctrl_middle_pane_g7

0x654f,	// (0x00032db7) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0003c599) bg_sctrl_middle_pane_g

0x6547,	// (0x00032daf) bg_sctrl_middle_pane_g8_copy1

0x650f,	// (0x00032d77) bg_sctrl_sk_pane_g1

0x651f,	// (0x00032d87) bg_sctrl_sk_pane_g2

0x6517,	// (0x00032d7f) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0003c10c) bg_sctrl_sk_pane_g

0x54be,	// (0x00031d26) aid_size_touch_scroll_bar

0x652f,	// (0x00032d97) bg_sctrl_sk_pane_g4

0x6527,	// (0x00032d8f) bg_sctrl_sk_pane_g5

0x6537,	// (0x00032d9f) bg_sctrl_sk_pane_g6

0x653f,	// (0x00032da7) bg_sctrl_sk_pane_g7

0x654f,	// (0x00032db7) bg_sctrl_sk_pane_g8

0x6547,	// (0x00032daf) bg_sctrl_sk_pane_g9

0x6251,	// (0x00032ab9) popup_fep_china_hwr2_fs_candidate_window

0xb9d8,	// (0x00038240) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb9d8,	// (0x00038240) popup_fep_china_hwr2_fs_control_window

0xccd6,	// (0x0003953e) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0003c58f) sctrl_sk_top_pane_g

0xe1a7,	// (0x0003aa0f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1a7,	// (0x0003aa0f) aid_fep_china_hwr2_fs_cell

0xe1b9,	// (0x0003aa21) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe1b9,	// (0x0003aa21) bg_popup_fep_shadow_pane_cp4

0xe1d0,	// (0x0003aa38) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1d0,	// (0x0003aa38) bg_popup_fep_shadow_pane_cp5

0xe1e2,	// (0x0003aa4a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1e2,	// (0x0003aa4a) popup_fep_china_hwr2_fs_control_bar_grid

0xe1f2,	// (0x0003aa5a) popup_fep_china_hwr2_fs_control_funtion_grid

0xe1fa,	// (0x0003aa62) aid_fep_china_hwr2_fs_candi_cell

0x4ece,	// (0x00031736) bg_popup_fep_shadow_pane_cp6

0xe204,	// (0x0003aa6c) popup_fep_china_hwr2_fs_candidate_grid

0xe20e,	// (0x0003aa76) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe20e,	// (0x0003aa76) cell_fep_china_hwr2_fs_funtion_grid

0xca3d,	// (0x000392a5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe226,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe226,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe234,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe234,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0003c5aa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0003c5aa) cell_fep_china_hwr2_fs_funtion_grid_g

0xe24a,	// (0x0003aab2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe24a,	// (0x0003aab2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe25f,	// (0x0003aac7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe25f,	// (0x0003aac7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0003c5af) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0003c5af) cell_fep_china_hwr2_fs_funtion_grid_t

0xe27b,	// (0x0003aae3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe283,	// (0x0003aaeb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe28b,	// (0x0003aaf3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0003c5b4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe293,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe293,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid

0xe2ac,	// (0x0003ab14) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe2b4,	// (0x0003ab1c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xca3d,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g1

0xca3d,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0003c3db) cell_fep_china_hwr2_fs_candidate_grid_g

0xe2bc,	// (0x0003ab24) cell_fep_china_hwr2_fs_candidate_grid_t1

0x635e,	// (0x00032bc6) clock_nsta_pane_cp_24_ParamLimits

0x635e,	// (0x00032bc6) clock_nsta_pane_cp_24

0x63c6,	// (0x00032c2e) indicator_nsta_pane_cp_24_ParamLimits

0x63c6,	// (0x00032c2e) indicator_nsta_pane_cp_24

0x70cb,	// (0x00033933) heading_pane_g1

0x0001,

0xf909,	// (0x0003c171) heading_pane_g

0x7741,	// (0x00033fa9) grid_sct_catagory_button_pane

0x7443,	// (0x00033cab) scroll_pane_cp5_ParamLimits

0x7fbf,	// (0x00034827) button_value_adjust_pane_cp5_ParamLimits

0x7fbf,	// (0x00034827) button_value_adjust_pane_cp5

0x807d,	// (0x000348e5) form2_midp_time_pane_ParamLimits

0xe2ca,	// (0x0003ab32) cell_sct_catagory_button_pane_ParamLimits

0xe2ca,	// (0x0003ab32) cell_sct_catagory_button_pane

0xca02,	// (0x0003926a) bg_button_pane_cp01_ParamLimits

0xca02,	// (0x0003926a) bg_button_pane_cp01

0xca3d,	// (0x000392a5) cell_sct_catagory_button_pane_g1

0xbd01,	// (0x00038569) popup_tb_extension_window

0xe2dc,	// (0x0003ab44) aid_size_cell_ext_ParamLimits

0xe2dc,	// (0x0003ab44) aid_size_cell_ext

0x5071,	// (0x000318d9) bg_tb_trans_pane_cp1_ParamLimits

0x5071,	// (0x000318d9) bg_tb_trans_pane_cp1

0xe2fc,	// (0x0003ab64) grid_tb_ext_pane_ParamLimits

0xe2fc,	// (0x0003ab64) grid_tb_ext_pane

0xe32e,	// (0x0003ab96) cell_tb_ext_pane_ParamLimits

0xe32e,	// (0x0003ab96) cell_tb_ext_pane

0xe345,	// (0x0003abad) cell_tb_ext_pane_g1_ParamLimits

0xe345,	// (0x0003abad) cell_tb_ext_pane_g1

0xe362,	// (0x0003abca) cell_tb_ext_pane_t1

0x5071,	// (0x000318d9) list_highlight_pane_cp11_ParamLimits

0x5071,	// (0x000318d9) list_highlight_pane_cp11

0x99b6,	// (0x0003621e) popup_uni_indicator_window_ParamLimits

0x99b6,	// (0x0003621e) popup_uni_indicator_window

0x5585,	// (0x00031ded) bg_popup_sub_pane_cp14

0xe37d,	// (0x0003abe5) list_uniindi_pane

0xe389,	// (0x0003abf1) uniindi_top_pane

0x5071,	// (0x000318d9) bg_uniindi_top_pane

0xe3a8,	// (0x0003ac10) uniindi_top_pane_g1

0xe3be,	// (0x0003ac26) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0003c5bb) uniindi_top_pane_g

0xe3e8,	// (0x0003ac50) uniindi_top_pane_t1

0xe412,	// (0x0003ac7a) list_single_uniindi_pane_ParamLimits

0xe412,	// (0x0003ac7a) list_single_uniindi_pane

0xca3d,	// (0x000392a5) bg_uniindi_top_pane_g1

0xe424,	// (0x0003ac8c) list_single_uniindi_pane_g1

0xe437,	// (0x0003ac9f) list_single_uniindi_pane_t1

0x4ece,	// (0x00031736) control_bg_pane

0xe45c,	// (0x0003acc4) bg_sctrl_sk_pane_cp1

0xe465,	// (0x0003accd) bg_sctrl_sk_pane_cp2

0xe46e,	// (0x0003acd6) control_bg_pane_g1

0xe477,	// (0x0003acdf) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0003c5c4) control_bg_pane_g

0x7f12,	// (0x0003477a) cell_indicator_nsta_pane_g1_ParamLimits

0xc6a7,	// (0x00038f0f) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0003c34c) cell_indicator_nsta_pane_g_ParamLimits

0x9359,	// (0x00035bc1) form2_midp_time_pane_t1_ParamLimits

0x5300,	// (0x00031b68) main_idle_act4_pane_ParamLimits

0x5300,	// (0x00031b68) main_idle_act4_pane

0xbd01,	// (0x00038569) popup_tb_extension_window_ParamLimits

0xe31e,	// (0x0003ab86) tb_ext_find_pane_ParamLimits

0xe31e,	// (0x0003ab86) tb_ext_find_pane

0xe480,	// (0x0003ace8) ai_gene_pane_1_cp1

0x603d,	// (0x000328a5) ai_gene_pane_2_cp1

0xe488,	// (0x0003acf0) list_single_idle_plugin_calendar_pane

0xe491,	// (0x0003acf9) list_single_idle_plugin_notification_pane

0xe49a,	// (0x0003ad02) list_single_idle_plugin_player_pane

0xe4a3,	// (0x0003ad0b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe4a3,	// (0x0003ad0b) list_single_idle_plugin_shortcut_pane

0xe4c5,	// (0x0003ad2d) main_idle_act4_pane_t1

0xe4d7,	// (0x0003ad3f) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0003c5c9) main_idle_act4_pane_t

0xe4e9,	// (0x0003ad51) middle_sk_idle_act4_pane_ParamLimits

0xe4e9,	// (0x0003ad51) middle_sk_idle_act4_pane

0xe4ff,	// (0x0003ad67) popup_clock_digital_analogue_window_cp2

0xe519,	// (0x0003ad81) shortcut_wheel_idle_act4_pane_ParamLimits

0xe519,	// (0x0003ad81) shortcut_wheel_idle_act4_pane

0xca3d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g1

0xca3d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g2

0xca3d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g3

0xca3d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g4

0xca3d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g5

0xe52d,	// (0x0003ad95) shortcut_wheel_idle_act4_pane_g6

0xe535,	// (0x0003ad9d) shortcut_wheel_idle_act4_pane_g7

0xe53d,	// (0x0003ada5) shortcut_wheel_idle_act4_pane_g8

0xe545,	// (0x0003adad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0003c5ce) shortcut_wheel_idle_act4_pane_g

0xccd6,	// (0x0003953e) middle_sk_idle_act4_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) middle_sk_idle_act4_pane_g1

0xe5a9,	// (0x0003ae11) middle_sk_idle_act4_pane_g2_ParamLimits

0xe5a9,	// (0x0003ae11) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0003c5f1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0003c5f1) middle_sk_idle_act4_pane_g

0xe5b5,	// (0x0003ae1d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe5b5,	// (0x0003ae1d) middle_sk_idle_act4_pane_t1

0xe5d2,	// (0x0003ae3a) grid_ai_shortcut_pane_ParamLimits

0xe5d2,	// (0x0003ae3a) grid_ai_shortcut_pane

0xe5eb,	// (0x0003ae53) list_highlight_pane_cp16_ParamLimits

0xe5eb,	// (0x0003ae53) list_highlight_pane_cp16

0xe5f8,	// (0x0003ae60) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe5f8,	// (0x0003ae60) list_single_idle_plugin_shortcut_pane_g1

0xe604,	// (0x0003ae6c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe604,	// (0x0003ae6c) list_single_idle_plugin_shortcut_pane_g2

0xe61c,	// (0x0003ae84) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe61c,	// (0x0003ae84) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0003c5f6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0003c5f6) list_single_idle_plugin_shortcut_pane_g

0xe62f,	// (0x0003ae97) cell_ai_shortcut_pane_ParamLimits

0xe62f,	// (0x0003ae97) cell_ai_shortcut_pane

0xe650,	// (0x0003aeb8) cell_ai_shortcut_pane_g1_ParamLimits

0xe650,	// (0x0003aeb8) cell_ai_shortcut_pane_g1

0xe480,	// (0x0003ace8) ai_gene_pane_1_cp2

0xe672,	// (0x0003aeda) ai_gene_pane_2_cp2

0xe67a,	// (0x0003aee2) list_highlight_pane_cp15

0xe683,	// (0x0003aeeb) list_single_idle_plugin_calendar_pane_g1

0xe67a,	// (0x0003aee2) list_highlight_pane_cp17

0xe68b,	// (0x0003aef3) list_single_idle_plugin_calendar_pane_g1_copy1

0xe693,	// (0x0003aefb) list_single_idle_plugin_player_pane_g1

0x7956,	// (0x000341be) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0003c5fd) list_single_idle_plugin_player_pane_g

0xe69b,	// (0x0003af03) list_single_idle_plugin_player_pane_t1

0xe6a9,	// (0x0003af11) list_single_idle_plugin_player_pane_t2

0xe6b7,	// (0x0003af1f) list_single_idle_plugin_player_pane_t3

0xe6c5,	// (0x0003af2d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0003c602) list_single_idle_plugin_player_pane_t

0xe6d3,	// (0x0003af3b) wait_bar_pane_cp15

0xe6db,	// (0x0003af43) grid_ai_notification_pane

0x7956,	// (0x000341be) list_single_idle_plugin_notification_pane_g1

0xe6e4,	// (0x0003af4c) cell_ai_notification_pane_ParamLimits

0xe6e4,	// (0x0003af4c) cell_ai_notification_pane

0xe6f1,	// (0x0003af59) cell_ai_notification_pane_g1

0xe6f9,	// (0x0003af61) cell_ai_notification_pane_t1

0xe707,	// (0x0003af6f) tb_ext_find_button_pane

0xe70f,	// (0x0003af77) tb_ext_find_pane_g1

0xe717,	// (0x0003af7f) tb_ext_find_pane_t1

0x5aac,	// (0x00032314) tb_ext_find_button_pane_g1

0xe725,	// (0x0003af8d) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0003c60b) tb_ext_find_button_pane_g

0xe4c5,	// (0x0003ad2d) main_idle_act4_pane_t1_ParamLimits

0xe4d7,	// (0x0003ad3f) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0003c5c9) main_idle_act4_pane_t_ParamLimits

0xe4ff,	// (0x0003ad67) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe50d,	// (0x0003ad75) sat_plugin_idle_act4_pane_ParamLimits

0xe50d,	// (0x0003ad75) sat_plugin_idle_act4_pane

0xe72e,	// (0x0003af96) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe72e,	// (0x0003af96) sat_plugin_idle_act4_pane_t1

0xe741,	// (0x0003afa9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe741,	// (0x0003afa9) sat_plugin_idle_act4_pane_t2

0xe754,	// (0x0003afbc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe754,	// (0x0003afbc) sat_plugin_idle_act4_pane_t3

0xe767,	// (0x0003afcf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe767,	// (0x0003afcf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0003c610) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0003c610) sat_plugin_idle_act4_pane_t

0x98ff,	// (0x00036167) popup_battery_window_ParamLimits

0x98ff,	// (0x00036167) popup_battery_window

0x5071,	// (0x000318d9) bg_popup_sub_pane_cp25_ParamLimits

0x5071,	// (0x000318d9) bg_popup_sub_pane_cp25

0xe77a,	// (0x0003afe2) popup_battery_window_g1_ParamLimits

0xe77a,	// (0x0003afe2) popup_battery_window_g1

0xe786,	// (0x0003afee) popup_battery_window_t1_ParamLimits

0xe786,	// (0x0003afee) popup_battery_window_t1

0xe798,	// (0x0003b000) popup_battery_window_t2_ParamLimits

0xe798,	// (0x0003b000) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0003c619) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0003c619) popup_battery_window_t

0xb86a,	// (0x000380d2) midp_canvas_pane_ParamLimits

0xb8ce,	// (0x00038136) midp_keypad_pane_ParamLimits

0xb8ce,	// (0x00038136) midp_keypad_pane

0x61f5,	// (0x00032a5d) main_midp_pane_ParamLimits

0x7f72,	// (0x000347da) signal_pane_g2_cp_ParamLimits

0xe7b5,	// (0x0003b01d) aid_size_cell_midp_keypad_ParamLimits

0xe7b5,	// (0x0003b01d) aid_size_cell_midp_keypad

0xe7cf,	// (0x0003b037) midp_keyp_game_grid_pane_ParamLimits

0xe7cf,	// (0x0003b037) midp_keyp_game_grid_pane

0xe7ef,	// (0x0003b057) midp_keyp_rocker_pane_ParamLimits

0xe7ef,	// (0x0003b057) midp_keyp_rocker_pane

0xe828,	// (0x0003b090) midp_keyp_sk_left_pane_ParamLimits

0xe828,	// (0x0003b090) midp_keyp_sk_left_pane

0xe882,	// (0x0003b0ea) midp_keyp_sk_right_pane_ParamLimits

0xe882,	// (0x0003b0ea) midp_keyp_sk_right_pane

0x4ece,	// (0x00031736) bg_button_pane_cp03

0xe8dc,	// (0x0003b144) midp_keyp_sk_left_pane_g1

0x4ece,	// (0x00031736) bg_button_pane_cp04

0xe8dc,	// (0x0003b144) midp_keyp_sk_right_pane_g1

0xca3d,	// (0x000392a5) midp_keyp_rocker_pane_g1

0xe8e5,	// (0x0003b14d) keyp_game_cell_pane_ParamLimits

0xe8e5,	// (0x0003b14d) keyp_game_cell_pane

0x4ece,	// (0x00031736) bg_button_pane_cp02

0xe8f8,	// (0x0003b160) keyp_game_cell_pane_g1

0x9935,	// (0x0003619d) popup_fep_vkb2_window_ParamLimits

0x9935,	// (0x0003619d) popup_fep_vkb2_window

0xb0c4,	// (0x0003792c) aid_size_cell_vkb2_ParamLimits

0xb0c4,	// (0x0003792c) aid_size_cell_vkb2

0xb118,	// (0x00037980) popup_fep_vkb2_window_g1_ParamLimits

0xb118,	// (0x00037980) popup_fep_vkb2_window_g1

0xb158,	// (0x000379c0) vkb2_area_bottom_pane_ParamLimits

0xb158,	// (0x000379c0) vkb2_area_bottom_pane

0xb1a4,	// (0x00037a0c) vkb2_area_keypad_pane_ParamLimits

0xb1a4,	// (0x00037a0c) vkb2_area_keypad_pane

0xb1e6,	// (0x00037a4e) vkb2_area_top_pane_ParamLimits

0xb1e6,	// (0x00037a4e) vkb2_area_top_pane

0xb260,	// (0x00037ac8) vkb2_top_entry_pane_ParamLimits

0xb260,	// (0x00037ac8) vkb2_top_entry_pane

0xb28a,	// (0x00037af2) vkb2_top_grid_left_pane_ParamLimits

0xb28a,	// (0x00037af2) vkb2_top_grid_left_pane

0xb2a8,	// (0x00037b10) vkb2_top_grid_right_pane_ParamLimits

0xb2a8,	// (0x00037b10) vkb2_top_grid_right_pane

0xb2c6,	// (0x00037b2e) vkb2_cell_keypad_pane_ParamLimits

0xb2c6,	// (0x00037b2e) vkb2_cell_keypad_pane

0xb397,	// (0x00037bff) vkb2_area_bottom_grid_pane_ParamLimits

0xb397,	// (0x00037bff) vkb2_area_bottom_grid_pane

0xb3bd,	// (0x00037c25) vkb2_area_bottom_pane_g1_ParamLimits

0xb3bd,	// (0x00037c25) vkb2_area_bottom_pane_g1

0xb3e1,	// (0x00037c49) vkb2_area_bottom_pane_g2_ParamLimits

0xb3e1,	// (0x00037c49) vkb2_area_bottom_pane_g2

0xb40f,	// (0x00037c77) vkb2_area_bottom_pane_g3_ParamLimits

0xb40f,	// (0x00037c77) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0003c61e) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0003c61e) vkb2_area_bottom_pane_g

0xb470,	// (0x00037cd8) vkb2_top_cell_left_pane_ParamLimits

0xb470,	// (0x00037cd8) vkb2_top_cell_left_pane

0x026d,	// (0x0002cad5) vkb2_top_entry_pane_g1_ParamLimits

0x026d,	// (0x0002cad5) vkb2_top_entry_pane_g1

0x027b,	// (0x0002cae3) vkb2_top_entry_pane_t1_ParamLimits

0x027b,	// (0x0002cae3) vkb2_top_entry_pane_t1

0xe909,	// (0x0003b171) vkb2_top_entry_pane_t2_ParamLimits

0xe909,	// (0x0003b171) vkb2_top_entry_pane_t2

0xe93b,	// (0x0003b1a3) vkb2_top_entry_pane_t3_ParamLimits

0xe93b,	// (0x0003b1a3) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0003c625) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0003c625) vkb2_top_entry_pane_t

0xb4bd,	// (0x00037d25) vkb2_top_grid_right_pane_g1_ParamLimits

0xb4bd,	// (0x00037d25) vkb2_top_grid_right_pane_g1

0xb4d3,	// (0x00037d3b) vkb2_top_grid_right_pane_g2_ParamLimits

0xb4d3,	// (0x00037d3b) vkb2_top_grid_right_pane_g2

0xb4eb,	// (0x00037d53) vkb2_top_grid_right_pane_g3_ParamLimits

0xb4eb,	// (0x00037d53) vkb2_top_grid_right_pane_g3

0xb503,	// (0x00037d6b) vkb2_top_grid_right_pane_g4_ParamLimits

0xb503,	// (0x00037d6b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0003c62c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0003c62c) vkb2_top_grid_right_pane_g

0xb519,	// (0x00037d81) vkb2_top_cell_left_pane_g1

0xb530,	// (0x00037d98) vkb2_cell_keypad_pane_g1_ParamLimits

0xb530,	// (0x00037d98) vkb2_cell_keypad_pane_g1

0xe951,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1_ParamLimits

0xe951,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1

0xb53e,	// (0x00037da6) vkb2_cell_bottom_grid_pane_ParamLimits

0xb53e,	// (0x00037da6) vkb2_cell_bottom_grid_pane

0xb577,	// (0x00037ddf) vkb2_cell_bottom_grid_pane_g1

0xe54d,	// (0x0003adb5) aid_call2_pane_cp02

0xe555,	// (0x0003adbd) aid_call_pane_cp02

0xe55d,	// (0x0003adc5) clock_digital_number_pane_cp10

0xe565,	// (0x0003adcd) clock_digital_number_pane_cp11

0xe56d,	// (0x0003add5) clock_digital_number_pane_cp12

0xe575,	// (0x0003addd) clock_digital_number_pane_cp13

0xe57d,	// (0x0003ade5) clock_digital_separator_pane_cp10

0x5aac,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g1

0x5aac,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g2

0xe585,	// (0x0003aded) popup_clock_digital_analogue_window_cp2_g3

0x5aac,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g4

0xe585,	// (0x0003aded) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0003c5e1) popup_clock_digital_analogue_window_cp2_g

0xe58d,	// (0x0003adf5) popup_clock_digital_analogue_window_cp2_t1

0xe59b,	// (0x0003ae03) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0003c5ec) popup_clock_digital_analogue_window_cp2_t

0xca3d,	// (0x000392a5) clock_digital_number_pane_cp10_g1

0xca3d,	// (0x000392a5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0003c3db) clock_digital_number_pane_cp10_g

0xca3d,	// (0x000392a5) clock_digital_separator_pane_cp10_g1

0xca3d,	// (0x000392a5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0003c3db) clock_digital_separator_pane_cp10_g

0xe3ca,	// (0x0003ac32) uniindi_top_pane_g3

0xe3db,	// (0x0003ac43) uniindi_top_pane_g4

0xb351,	// (0x00037bb9) vkb2_row_keypad_pane_ParamLimits

0xb351,	// (0x00037bb9) vkb2_row_keypad_pane

0xb597,	// (0x00037dff) vkb2_cell_t_keypad_pane_ParamLimits

0xb597,	// (0x00037dff) vkb2_cell_t_keypad_pane

0xb5a7,	// (0x00037e0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb5a7,	// (0x00037e0f) vkb2_cell_t_keypad_pane_cp08

0xb5ba,	// (0x00037e22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb5ba,	// (0x00037e22) vkb2_cell_t_keypad_pane_cp09

0xb5ce,	// (0x00037e36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb5ce,	// (0x00037e36) vkb2_cell_t_keypad_pane_cp01

0xb5df,	// (0x00037e47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb5df,	// (0x00037e47) vkb2_cell_t_keypad_pane_cp02

0xb5f0,	// (0x00037e58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb5f0,	// (0x00037e58) vkb2_cell_t_keypad_pane_cp03

0xb601,	// (0x00037e69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb601,	// (0x00037e69) vkb2_cell_t_keypad_pane_cp04

0xb612,	// (0x00037e7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb612,	// (0x00037e7a) vkb2_cell_t_keypad_pane_cp05

0xb623,	// (0x00037e8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb623,	// (0x00037e8b) vkb2_cell_t_keypad_pane_cp06

0xb634,	// (0x00037e9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb634,	// (0x00037e9c) vkb2_cell_t_keypad_pane_cp07

0xb645,	// (0x00037ead) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb645,	// (0x00037ead) vkb2_cell_t_keypad_pane_cp10

0xccd6,	// (0x0003953e) vkb2_cell_t_keypad_pane_g1

0xe968,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1

0x4ece,	// (0x00031736) popup_grid_graphic2_window

0x02ad,	// (0x0002cb15) aid_size_cell_graphic2_ParamLimits

0x02ad,	// (0x0002cb15) aid_size_cell_graphic2

0xcfce,	// (0x00039836) bg_popup_window_pane_cp21_ParamLimits

0xcfce,	// (0x00039836) bg_popup_window_pane_cp21

0x02d9,	// (0x0002cb41) graphic2_pages_pane_ParamLimits

0x02d9,	// (0x0002cb41) graphic2_pages_pane

0x031f,	// (0x0002cb87) grid_graphic2_control_pane_ParamLimits

0x031f,	// (0x0002cb87) grid_graphic2_control_pane

0x034d,	// (0x0002cbb5) grid_graphic2_pane_ParamLimits

0x034d,	// (0x0002cbb5) grid_graphic2_pane

0x03ad,	// (0x0002cc15) cell_graphic2_pane

0x4ece,	// (0x00031736) main_comp_mode_pane

0xdc0c,	// (0x0003a474) list_ai3_gene_pane_ParamLimits

0xe010,	// (0x0003a878) bg_popup_window_pane_cp19_ParamLimits

0xe01c,	// (0x0003a884) bg_touch_area_indi_pane_ParamLimits

0xe01c,	// (0x0003a884) bg_touch_area_indi_pane

0xe032,	// (0x0003a89a) bg_touch_area_indi_pane_cp01_ParamLimits

0xe032,	// (0x0003a89a) bg_touch_area_indi_pane_cp01

0xe048,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02_ParamLimits

0xe048,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02

0xe060,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03_ParamLimits

0xe060,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03

0xe07a,	// (0x0003a8e2) popup_slider_window_g1_ParamLimits

0xe096,	// (0x0003a8fe) popup_slider_window_g2_ParamLimits

0xe0b2,	// (0x0003a91a) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0003c576) popup_slider_window_g_ParamLimits

0xe10e,	// (0x0003a976) popup_slider_window_t1_ParamLimits

0xe182,	// (0x0003a9ea) small_volume_slider_vertical_pane_ParamLimits

0x03ad,	// (0x0002cc15) cell_graphic2_pane_ParamLimits

0x03fc,	// (0x0002cc64) bg_button_pane_cp10_ParamLimits

0x03fc,	// (0x0002cc64) bg_button_pane_cp10

0x040f,	// (0x0002cc77) bg_button_pane_cp11_ParamLimits

0x040f,	// (0x0002cc77) bg_button_pane_cp11

0x0422,	// (0x0002cc8a) graphic2_pages_pane_g1_ParamLimits

0x0422,	// (0x0002cc8a) graphic2_pages_pane_g1

0x043d,	// (0x0002cca5) graphic2_pages_pane_g2_ParamLimits

0x043d,	// (0x0002cca5) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0003c63a) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0003c63a) graphic2_pages_pane_g

0x0455,	// (0x0002ccbd) graphic2_pages_pane_t1_ParamLimits

0x0455,	// (0x0002ccbd) graphic2_pages_pane_t1

0x046b,	// (0x0002ccd3) cell_graphic2_control_pane_ParamLimits

0x046b,	// (0x0002ccd3) cell_graphic2_control_pane

0x0485,	// (0x0002cced) cell_graphic2_pane_g1_ParamLimits

0x0485,	// (0x0002cced) cell_graphic2_pane_g1

0x0492,	// (0x0002ccfa) cell_graphic2_pane_g2_ParamLimits

0x0492,	// (0x0002ccfa) cell_graphic2_pane_g2

0x049f,	// (0x0002cd07) cell_graphic2_pane_g3_ParamLimits

0x049f,	// (0x0002cd07) cell_graphic2_pane_g3

0x04ac,	// (0x0002cd14) cell_graphic2_pane_g4_ParamLimits

0x04ac,	// (0x0002cd14) cell_graphic2_pane_g4

0x04b9,	// (0x0002cd21) cell_graphic2_pane_g5_ParamLimits

0x04b9,	// (0x0002cd21) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0003c63f) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0003c63f) cell_graphic2_pane_g

0x04d4,	// (0x0002cd3c) cell_graphic2_pane_t1_ParamLimits

0x04d4,	// (0x0002cd3c) cell_graphic2_pane_t1

0x65ff,	// (0x00032e67) grid_highlight_pane_cp11_ParamLimits

0x65ff,	// (0x00032e67) grid_highlight_pane_cp11

0x5585,	// (0x00031ded) bg_button_pane_cp05

0x04ea,	// (0x0002cd52) cell_graphic2_control_pane_g1

0xca3d,	// (0x000392a5) bg_touch_area_indi_pane_g1

0xe97a,	// (0x0003b1e2) aid_cmod_rocker_key_size

0xe984,	// (0x0003b1ec) aid_cmode_itu_key_size

0xe98e,	// (0x0003b1f6) main_cmode_video_pane

0xe998,	// (0x0003b200) main_comp_mode_itu_pane

0xe9a4,	// (0x0003b20c) main_comp_mode_rocker_pane

0xe9b0,	// (0x0003b218) cell_cmode_rocker_pane_ParamLimits

0xe9b0,	// (0x0003b218) cell_cmode_rocker_pane

0xe9c2,	// (0x0003b22a) cell_cmode_itu_pane_ParamLimits

0xe9c2,	// (0x0003b22a) cell_cmode_itu_pane

0x5585,	// (0x00031ded) bg_button_pane_cp06_ParamLimits

0x5585,	// (0x00031ded) bg_button_pane_cp06

0xccd6,	// (0x0003953e) cell_cmode_rocker_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) cell_cmode_rocker_pane_g1

0xe226,	// (0x0003aa8e) cell_cmode_rocker_pane_g2_ParamLimits

0xe226,	// (0x0003aa8e) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0003c64a) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0003c64a) cell_cmode_rocker_pane_g

0x4ece,	// (0x00031736) bg_button_pane_cp07

0xe9d7,	// (0x0003b23f) cell_cmode_itu_pane_g1

0xe9e0,	// (0x0003b248) cell_cmode_itu_pane_t1

0xe9ee,	// (0x0003b256) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0003c64f) cell_cmode_itu_pane_t

0xe44c,	// (0x0003acb4) aid_touch_ctrl_left

0xe454,	// (0x0003acbc) aid_touch_ctrl_right

0x4ece,	// (0x00031736) compa_mode_pane

0x04f7,	// (0x0002cd5f) aid_cmod_rocker_key_size_cp

0x0501,	// (0x0002cd69) aid_cmode_itu_key_size_cp

0xe9fc,	// (0x0003b264) compa_mode_pane_g1

0xea04,	// (0x0003b26c) compa_mode_pane_g2

0xea0c,	// (0x0003b274) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0003c654) compa_mode_pane_g

0x050b,	// (0x0002cd73) main_comp_mode_itu_pane_cp

0x0513,	// (0x0002cd7b) main_comp_mode_rocker_pane_cp

0x051b,	// (0x0002cd83) cell_cmode_itu_pane_cp_ParamLimits

0x051b,	// (0x0002cd83) cell_cmode_itu_pane_cp

0x0530,	// (0x0002cd98) cell_cmode_rocker_pane_cp_ParamLimits

0x0530,	// (0x0002cd98) cell_cmode_rocker_pane_cp

0x5585,	// (0x00031ded) bg_button_pane_cp06_cp_ParamLimits

0x5585,	// (0x00031ded) bg_button_pane_cp06_cp

0xccd6,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xccd6,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp

0xca3d,	// (0x000392a5) cell_cmode_rocker_pane_g2_cp

0x4ece,	// (0x00031736) bg_button_pane_cp07_cp

0x0542,	// (0x0002cdaa) cell_cmode_itu_pane_g1_cp

0x054b,	// (0x0002cdb3) cell_cmode_itu_pane_t1_cp

0x054b,	// (0x0002cdb3) cell_cmode_itu_pane_t2_cp

0xc543,	// (0x00038dab) settings_code_pane_cp2

0x4f3e,	// (0x000317a6) bg_popup_window_pane_cp3_ParamLimits

0x523f,	// (0x00031aa7) heading_pane_cp3_ParamLimits

0x524b,	// (0x00031ab3) listscroll_popup_graphic_pane_ParamLimits

0xac17,	// (0x0003747f) fep_hwr_aid_pane_ParamLimits

0xb037,	// (0x0003789f) aid_touch_sctrl_top_ParamLimits

0xb044,	// (0x000378ac) sctrl_sk_top_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0003c58f) sctrl_sk_top_pane_g_ParamLimits

0xb051,	// (0x000378b9) sctrl_sk_top_pane_t1_ParamLimits

0xb037,	// (0x0003789f) aid_touch_sctrl_bottom_ParamLimits

0xb051,	// (0x000378b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xe396,	// (0x0003abfe) aid_area_touch_clock

0xb228,	// (0x00037a90) aid_vkb2_area_top_pane_cell_ParamLimits

0xb228,	// (0x00037a90) aid_vkb2_area_top_pane_cell

0xb373,	// (0x00037bdb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb373,	// (0x00037bdb) aid_vkb2_area_bottom_pane_cell

0xe901,	// (0x0003b169) popup_char_count_window

0xea14,	// (0x0003b27c) popup_char_count_window_g1

0xea1d,	// (0x0003b285) popup_char_count_window_g2

0xea26,	// (0x0003b28e) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0003c65b) popup_char_count_window_g

0xea2f,	// (0x0003b297) popup_char_count_window_t1

0xb0f6,	// (0x0003795e) popup_fep_char_preview_window_ParamLimits

0xb0f6,	// (0x0003795e) popup_fep_char_preview_window

0xb246,	// (0x00037aae) vkb2_top_candi_pane_ParamLimits

0xb246,	// (0x00037aae) vkb2_top_candi_pane

0x0559,	// (0x0002cdc1) cell_vkb2_top_candi_pane_ParamLimits

0x0559,	// (0x0002cdc1) cell_vkb2_top_candi_pane

0x6a8b,	// (0x000332f3) bg_popup_fep_char_preview_window_ParamLimits

0x6a8b,	// (0x000332f3) bg_popup_fep_char_preview_window

0xb65a,	// (0x00037ec2) popup_fep_char_preview_window_t1_ParamLimits

0xb65a,	// (0x00037ec2) popup_fep_char_preview_window_t1

0xea3d,	// (0x0003b2a5) bg_popup_fep_char_preview_window_g1

0xea45,	// (0x0003b2ad) bg_popup_fep_char_preview_window_g2

0xea4d,	// (0x0003b2b5) bg_popup_fep_char_preview_window_g3

0xea55,	// (0x0003b2bd) bg_popup_fep_char_preview_window_g4

0xea5d,	// (0x0003b2c5) bg_popup_fep_char_preview_window_g5

0xb694,	// (0x00037efc) bg_popup_fep_char_preview_window_g6

0xea65,	// (0x0003b2cd) bg_popup_fep_char_preview_window_g7

0xea6d,	// (0x0003b2d5) bg_popup_fep_char_preview_window_g8

0xea75,	// (0x0003b2dd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0003c662) bg_popup_fep_char_preview_window_g

0xccd6,	// (0x0003953e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) cell_vkb2_top_candi_pane_g1

0xd003,	// (0x0003986b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xd003,	// (0x0003986b) cell_vkb2_top_candi_pane_g2

0xd024,	// (0x0003988c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd024,	// (0x0003988c) cell_vkb2_top_candi_pane_g3

0xb69c,	// (0x00037f04) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb69c,	// (0x00037f04) cell_vkb2_top_candi_pane_g4

0xdc70,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdc70,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g5

0xe226,	// (0x0003aa8e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe226,	// (0x0003aa8e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0003c675) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0003c675) cell_vkb2_top_candi_pane_g

0xb6bd,	// (0x00037f25) cell_vkb2_top_candi_pane_t1

0xa924,	// (0x0003718c) aid_size_touch_slider_mark_ParamLimits

0xa924,	// (0x0003718c) aid_size_touch_slider_mark

0x030f,	// (0x0002cb77) grid_graphic2_catg_pane_ParamLimits

0x030f,	// (0x0002cb77) grid_graphic2_catg_pane

0x0389,	// (0x0002cbf1) popup_grid_graphic2_window_t1_ParamLimits

0x0389,	// (0x0002cbf1) popup_grid_graphic2_window_t1

0x039b,	// (0x0002cc03) popup_grid_graphic2_window_t2_ParamLimits

0x039b,	// (0x0002cc03) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0003c635) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0003c635) popup_grid_graphic2_window_t

0x5585,	// (0x00031ded) bg_button_pane_cp05_ParamLimits

0x04ea,	// (0x0002cd52) cell_graphic2_control_pane_g1_ParamLimits

0x05a6,	// (0x0002ce0e) cell_graphic2_catg_pane_ParamLimits

0x05a6,	// (0x0002ce0e) cell_graphic2_catg_pane

0x4ece,	// (0x00031736) bg_button_pane_cp12

0x05b8,	// (0x0002ce20) cell_graphic2_catg_pane_g1

0xe362,	// (0x0003abca) cell_tb_ext_pane_t1_ParamLimits

0xb490,	// (0x00037cf8) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb490,	// (0x00037cf8) vkb2_top_cell_right_narrow_pane

0xb4a8,	// (0x00037d10) vkb2_top_cell_right_wide_pane_ParamLimits

0xb4a8,	// (0x00037d10) vkb2_top_cell_right_wide_pane

0xcfce,	// (0x00039836) bg_vkb2_func_pane_ParamLimits

0xcfce,	// (0x00039836) bg_vkb2_func_pane

0xb519,	// (0x00037d81) vkb2_top_cell_left_pane_g1_ParamLimits

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp03

0xb577,	// (0x00037ddf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x651f,	// (0x00032d87) bg_vkb2_func_pane_g1

0x6517,	// (0x00032d7f) bg_vkb2_func_pane_g2

0x6527,	// (0x00032d8f) bg_vkb2_func_pane_g3

0x652f,	// (0x00032d97) bg_vkb2_func_pane_g4

0x6537,	// (0x00032d9f) bg_vkb2_func_pane_g5

0x653f,	// (0x00032da7) bg_vkb2_func_pane_g6

0x654f,	// (0x00032db7) bg_vkb2_func_pane_g7

0x6547,	// (0x00032daf) bg_vkb2_func_pane_g8

0x650f,	// (0x00032d77) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0003c682) bg_vkb2_func_pane_g

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp01

0xb519,	// (0x00037d81) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb519,	// (0x00037d81) vkb2_top_cell_right_wide_pane_g1

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcfce,	// (0x00039836) bg_vkb2_fuc_pane_cp02

0xb577,	// (0x00037ddf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb577,	// (0x00037ddf) vkb2_top_cell_right_narrow_pane_g1

0xdf8e,	// (0x0003a7f6) aid_touch_area_decrease_ParamLimits

0xdf8e,	// (0x0003a7f6) aid_touch_area_decrease

0xdfb2,	// (0x0003a81a) aid_touch_area_increase_ParamLimits

0xdfb2,	// (0x0003a81a) aid_touch_area_increase

0xdfbe,	// (0x0003a826) aid_touch_area_mute_ParamLimits

0xdfbe,	// (0x0003a826) aid_touch_area_mute

0xdfe2,	// (0x0003a84a) aid_touch_area_slider_ParamLimits

0xdfe2,	// (0x0003a84a) aid_touch_area_slider

0xe0ce,	// (0x0003a936) popup_slider_window_g4_ParamLimits

0xe0ce,	// (0x0003a936) popup_slider_window_g4

0xe0da,	// (0x0003a942) popup_slider_window_g5_ParamLimits

0xe0da,	// (0x0003a942) popup_slider_window_g5

0xe0fc,	// (0x0003a964) popup_slider_window_g6_ParamLimits

0xe0fc,	// (0x0003a964) popup_slider_window_g6

0xe13c,	// (0x0003a9a4) popup_slider_window_t2_ParamLimits

0xe13c,	// (0x0003a9a4) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0003c583) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0003c583) popup_slider_window_t

0xe154,	// (0x0003a9bc) slider_pane_ParamLimits

0xe154,	// (0x0003a9bc) slider_pane

0xea7d,	// (0x0003b2e5) slider_pane_g1_ParamLimits

0xea7d,	// (0x0003b2e5) slider_pane_g1

0xea91,	// (0x0003b2f9) slider_pane_g2_ParamLimits

0xea91,	// (0x0003b2f9) slider_pane_g2

0xeaa7,	// (0x0003b30f) slider_pane_g3_ParamLimits

0xeaa7,	// (0x0003b30f) slider_pane_g3

0x0003,

0xfe2d,	// (0x0003c695) slider_pane_g_ParamLimits

0xfe2d,	// (0x0003c695) slider_pane_g

0xbd5d,	// (0x000385c5) popup_tb_float_extension_window_ParamLimits

0xbd5d,	// (0x000385c5) popup_tb_float_extension_window

0xead3,	// (0x0003b33b) aid_size_cell_tb_float_ext

0x4ece,	// (0x00031736) bg_popup_sub_window_cp28

0xeadf,	// (0x0003b347) grid_tb_float_ext_pane

0xeae9,	// (0x0003b351) cell_tb_float_ext_pane_ParamLimits

0xeae9,	// (0x0003b351) cell_tb_float_ext_pane

0xeb03,	// (0x0003b36b) cell_tb_float_ext_pane_g1

0xeb0c,	// (0x0003b374) grid_highlight_pane_cp12

0xad4a,	// (0x000375b2) cell_last_hwr_side_pane_ParamLimits

0xad4a,	// (0x000375b2) cell_last_hwr_side_pane

0xca3d,	// (0x000392a5) cell_last_hwr_side_pane_g1

0xeb15,	// (0x0003b37d) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0003c69e) cell_last_hwr_side_pane_g

0xb43f,	// (0x00037ca7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb43f,	// (0x00037ca7) vkb2_area_bottom_space_btn_pane

0xccd6,	// (0x0003953e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe968,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb6bd,	// (0x00037f25) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb6dc,	// (0x00037f44) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb6dc,	// (0x00037f44) vkb2_area_bottom_space_btn_pane_g1

0xb716,	// (0x00037f7e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb716,	// (0x00037f7e) vkb2_area_bottom_space_btn_pane_g2

0xb74c,	// (0x00037fb4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb74c,	// (0x00037fb4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0003c6a3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0003c6a3) vkb2_area_bottom_space_btn_pane_g

0xacbe,	// (0x00037526) cel_fep_hwr_func_pane_ParamLimits

0xacbe,	// (0x00037526) cel_fep_hwr_func_pane

0xacfa,	// (0x00037562) cell_hwr_side_button_pane_ParamLimits

0xacfa,	// (0x00037562) cell_hwr_side_button_pane

0xe396,	// (0x0003abfe) aid_area_touch_clock_ParamLimits

0x5071,	// (0x000318d9) bg_uniindi_top_pane_ParamLimits

0xe3a8,	// (0x0003ac10) uniindi_top_pane_g1_ParamLimits

0xe3be,	// (0x0003ac26) uniindi_top_pane_g2_ParamLimits

0xe3ca,	// (0x0003ac32) uniindi_top_pane_g3_ParamLimits

0xe3db,	// (0x0003ac43) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0003c5bb) uniindi_top_pane_g_ParamLimits

0xe3e8,	// (0x0003ac50) uniindi_top_pane_t1_ParamLimits

0x5071,	// (0x000318d9) bg_vkb2_func_pane_cp01_ParamLimits

0x5071,	// (0x000318d9) bg_vkb2_func_pane_cp01

0xeb1e,	// (0x0003b386) cel_fep_hwr_func_pane_g1_ParamLimits

0xeb1e,	// (0x0003b386) cel_fep_hwr_func_pane_g1

0x5071,	// (0x000318d9) bg_vkb2_func_pane_cp02_ParamLimits

0x5071,	// (0x000318d9) bg_vkb2_func_pane_cp02

0xeb1e,	// (0x0003b386) cell_hwr_side_button_pane_g1_ParamLimits

0xeb1e,	// (0x0003b386) cell_hwr_side_button_pane_g1

0x6427,	// (0x00032c8f) status_pane_g4_ParamLimits

0x6427,	// (0x00032c8f) status_pane_g4

0x643f,	// (0x00032ca7) status_pane_t1

0x80e5,	// (0x0003494d) form2_midp_gauge_slider_cont_pane

0x80ed,	// (0x00034955) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc7d9,	// (0x00039041) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc7eb,	// (0x00039053) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0003c38e) form2_midp_gauge_slider_pane_t_ParamLimits

0x80ff,	// (0x00034967) form2_midp_slider_pane_ParamLimits

0xb0b6,	// (0x0003791e) aid_size_cell_func_vkb2_ParamLimits

0xb0b6,	// (0x0003791e) aid_size_cell_func_vkb2

0xeabf,	// (0x0003b327) slider_pane_g4_ParamLimits

0xeabf,	// (0x0003b327) slider_pane_g4

0xb796,	// (0x00037ffe) form2_midp_gauge_slider_pane_t2_cp01

0xb7a4,	// (0x0003800c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb7a4,	// (0x0003800c) form2_midp_gauge_slider_pane_t3_cp01

0xb7c1,	// (0x00038029) form2_midp_slider_pane_cp01

0x4ece,	// (0x00031736) navi_smil_pane

0xeb4e,	// (0x0003b3b6) navi_smil_pane_g1

0xeb56,	// (0x0003b3be) navi_smil_pane_t1

0xeb2c,	// (0x0003b394) form2_midp_slider_pane_g1

0xeb35,	// (0x0003b39d) form2_midp_slider_pane_g2

0xeb3d,	// (0x0003b3a5) form2_midp_slider_pane_g3

0xeb2c,	// (0x0003b394) form2_midp_slider_pane_g4

0x05c1,	// (0x0002ce29) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0003c6ac) form2_midp_slider_pane_g

0xb786,	// (0x00037fee) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb786,	// (0x00037fee) vkb2_area_bottom_space_btn_pane_g4

0xbec8,	// (0x00038730) lc0_navi_pane_ParamLimits

0xbec8,	// (0x00038730) lc0_navi_pane

0xbf3e,	// (0x000387a6) lc0_stat_indi_pane_ParamLimits

0xbf3e,	// (0x000387a6) lc0_stat_indi_pane

0xbf55,	// (0x000387bd) ls0_title_pane_ParamLimits

0xbf55,	// (0x000387bd) ls0_title_pane

0x5585,	// (0x00031ded) bg_popup_sub_pane_cp14_ParamLimits

0xe37d,	// (0x0003abe5) list_uniindi_pane_ParamLimits

0xe389,	// (0x0003abf1) uniindi_top_pane_ParamLimits

0xe424,	// (0x0003ac8c) list_single_uniindi_pane_g1_ParamLimits

0xe437,	// (0x0003ac9f) list_single_uniindi_pane_t1_ParamLimits

0xb7ca,	// (0x00038032) lc0_stat_clock_pane_ParamLimits

0xb7ca,	// (0x00038032) lc0_stat_clock_pane

0x05d7,	// (0x0002ce3f) lc0_stat_indi_pane_g1_ParamLimits

0x05d7,	// (0x0002ce3f) lc0_stat_indi_pane_g1

0x05ca,	// (0x0002ce32) lc0_stat_indi_pane_g2_ParamLimits

0x05ca,	// (0x0002ce32) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0003c6b7) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0003c6b7) lc0_stat_indi_pane_g

0xb7d7,	// (0x0003803f) lc0_uni_indicator_pane_ParamLimits

0xb7d7,	// (0x0003803f) lc0_uni_indicator_pane

0x05e4,	// (0x0002ce4c) ls0_title_pane_g1_ParamLimits

0x05e4,	// (0x0002ce4c) ls0_title_pane_g1

0x05f8,	// (0x0002ce60) ls0_title_pane_t1_ParamLimits

0x05f8,	// (0x0002ce60) ls0_title_pane_t1

0xb7e4,	// (0x0003804c) lc0_uni_indicator_pane_g1_ParamLimits

0xb7e4,	// (0x0003804c) lc0_uni_indicator_pane_g1

0xeb64,	// (0x0003b3cc) lc0_stat_clock_pane_t1

0x4ece,	// (0x00031736) main_ai5_pane

0xeb72,	// (0x0003b3da) ai5_sk_pane_ParamLimits

0xeb72,	// (0x0003b3da) ai5_sk_pane

0x062e,	// (0x0002ce96) cell_ai5_widget_pane_ParamLimits

0x062e,	// (0x0002ce96) cell_ai5_widget_pane

0xeb7f,	// (0x0003b3e7) aid_size_cell_widget_grid

0xeb91,	// (0x0003b3f9) bg_ai5_widget_pane_ParamLimits

0xeb91,	// (0x0003b3f9) bg_ai5_widget_pane

0x06d8,	// (0x0002cf40) cell_ai5_widget_pane_g2

0x06e8,	// (0x0002cf50) cell_ai5_widget_pane_g3

0x06fc,	// (0x0002cf64) cell_ai5_widget_pane_g4

0x0708,	// (0x0002cf70) cell_ai5_widget_pane_g5

0x0714,	// (0x0002cf7c) cell_ai5_widget_pane_g6

0x0720,	// (0x0002cf88) cell_ai5_widget_pane_g7

0x0768,	// (0x0002cfd0) cell_ai5_widget_pane_t1_ParamLimits

0x0768,	// (0x0002cfd0) cell_ai5_widget_pane_t1

0x0785,	// (0x0002cfed) cell_ai5_widget_pane_t2_ParamLimits

0x0785,	// (0x0002cfed) cell_ai5_widget_pane_t2

0x079d,	// (0x0002d005) cell_ai5_widget_pane_t3_ParamLimits

0x079d,	// (0x0002d005) cell_ai5_widget_pane_t3

0x07b5,	// (0x0002d01d) cell_ai5_widget_pane_t4_ParamLimits

0x07b5,	// (0x0002d01d) cell_ai5_widget_pane_t4

0x07cf,	// (0x0002d037) cell_ai5_widget_pane_t5_ParamLimits

0x07cf,	// (0x0002d037) cell_ai5_widget_pane_t5

0xeb9d,	// (0x0003b405) cell_ai5_widget_pane_t6_ParamLimits

0xeb9d,	// (0x0003b405) cell_ai5_widget_pane_t6

0xebaf,	// (0x0003b417) cell_ai5_widget_pane_t7_ParamLimits

0xebaf,	// (0x0003b417) cell_ai5_widget_pane_t7

0x07ee,	// (0x0002d056) cell_ai5_widget_pane_t8_ParamLimits

0x07ee,	// (0x0002d056) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0003c6d1) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0003c6d1) cell_ai5_widget_pane_t

0x0836,	// (0x0002d09e) grid_ai5_widget_pane

0x5585,	// (0x00031ded) highlight_cell_ai5_widget_pane_ParamLimits

0x5585,	// (0x00031ded) highlight_cell_ai5_widget_pane

0x084c,	// (0x0002d0b4) ai5_sk_left_pane

0x0856,	// (0x0002d0be) ai5_sk_middle_pane

0x0860,	// (0x0002d0c8) ai5_sk_right_pane

0xebc8,	// (0x0003b430) bg_ai5_widget_pane_g1_ParamLimits

0xebc8,	// (0x0003b430) bg_ai5_widget_pane_g1

0xebd4,	// (0x0003b43c) bg_ai5_widget_pane_g2_ParamLimits

0xebd4,	// (0x0003b43c) bg_ai5_widget_pane_g2

0xebe0,	// (0x0003b448) bg_ai5_widget_pane_g3_ParamLimits

0xebe0,	// (0x0003b448) bg_ai5_widget_pane_g3

0xebec,	// (0x0003b454) bg_ai5_widget_pane_g4_ParamLimits

0xebec,	// (0x0003b454) bg_ai5_widget_pane_g4

0xebf8,	// (0x0003b460) bg_ai5_widget_pane_g5_ParamLimits

0xebf8,	// (0x0003b460) bg_ai5_widget_pane_g5

0xec04,	// (0x0003b46c) bg_ai5_widget_pane_g6_ParamLimits

0xec04,	// (0x0003b46c) bg_ai5_widget_pane_g6

0xec10,	// (0x0003b478) bg_ai5_widget_pane_g7_ParamLimits

0xec10,	// (0x0003b478) bg_ai5_widget_pane_g7

0xec1c,	// (0x0003b484) bg_ai5_widget_pane_g8_ParamLimits

0xec1c,	// (0x0003b484) bg_ai5_widget_pane_g8

0xec28,	// (0x0003b490) bg_ai5_widget_pane_g9_ParamLimits

0xec28,	// (0x0003b490) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0003c6e6) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0003c6e6) bg_ai5_widget_pane_g

0xec50,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane_ParamLimits

0xec50,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane

0x4f7a,	// (0x000317e2) bg_cell_shortcut_ai5_widget_pane

0xec62,	// (0x0003b4ca) cell_grid_ai5_widget_pane_g1

0xec6b,	// (0x0003b4d3) highlight_cell_shortcut_ai5_widget_pane

0x6517,	// (0x00032d7f) ai5_sk_left_pane_g1

0xec73,	// (0x0003b4db) ai5_sk_left_pane_g2

0xec7b,	// (0x0003b4e3) ai5_sk_left_pane_g3

0xec83,	// (0x0003b4eb) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0003c6f9) ai5_sk_left_pane_g

0xec8b,	// (0x0003b4f3) ai5_sk_left_pane_t1

0x651f,	// (0x00032d87) ai5_sk_right_pane_g1

0xec99,	// (0x0003b501) ai5_sk_right_pane_g2

0xeca1,	// (0x0003b509) ai5_sk_right_pane_g3

0xeca9,	// (0x0003b511) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0003c702) ai5_sk_right_pane_g

0xecb1,	// (0x0003b519) ai5_sk_right_pane_t1

0x651f,	// (0x00032d87) ai5_sk_middle_pane_g1

0x6517,	// (0x00032d7f) ai5_sk_middle_pane_g2

0x6537,	// (0x00032d9f) ai5_sk_middle_pane_g3

0xeca1,	// (0x0003b509) ai5_sk_middle_pane_g4

0xec7b,	// (0x0003b4e3) ai5_sk_middle_pane_g5

0xecbf,	// (0x0003b527) ai5_sk_middle_pane_g6

0x086a,	// (0x0002d0d2) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0003c70b) ai5_sk_middle_pane_g

0xbe0d,	// (0x00038675) aid_touch_area_size_lc0_ParamLimits

0xbe0d,	// (0x00038675) aid_touch_area_size_lc0

0xae49,	// (0x000376b1) cell_hwr_candidate_pane_t1_ParamLimits

0x6349,	// (0x00032bb1) aid_touch_navi_pane

0xc02b,	// (0x00038893) status_dt_navi_pane_ParamLimits

0xc02b,	// (0x00038893) status_dt_navi_pane

0xc038,	// (0x000388a0) status_dt_sta_pane_ParamLimits

0xc038,	// (0x000388a0) status_dt_sta_pane

0x0872,	// (0x0002d0da) dt_sta_controll_pane

0x087f,	// (0x0002d0e7) dt_sta_indi_pane

0x0890,	// (0x0002d0f8) dt_sta_title_pane

0x5071,	// (0x000318d9) bg_dt_sta_indi_pane_ParamLimits

0x5071,	// (0x000318d9) bg_dt_sta_indi_pane

0x08a3,	// (0x0002d10b) dt_sta_battery_pane

0x08ab,	// (0x0002d113) dt_sta_indi_pane_g1

0xecc7,	// (0x0003b52f) dt_sta_indi_pane_g2

0xecd0,	// (0x0003b538) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0003c71a) dt_sta_indi_pane_g

0xecd9,	// (0x0003b541) dt_sta_signal_pane

0x5585,	// (0x00031ded) bg_dt_sta_title_pane_ParamLimits

0x5585,	// (0x00031ded) bg_dt_sta_title_pane

0x7191,	// (0x000339f9) dt_sta_title_pane_g1

0x08b4,	// (0x0002d11c) dt_sta_title_pane_t1_ParamLimits

0x08b4,	// (0x0002d11c) dt_sta_title_pane_t1

0x4ece,	// (0x00031736) bg_dt_sta_control_pane

0x08c9,	// (0x0002d131) dt_sta_controll_pane_g1

0xece2,	// (0x0003b54a) bg_dt_sta_title_pane_g1

0xeceb,	// (0x0003b553) bg_dt_sta_title_pane_g2

0xecf4,	// (0x0003b55c) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0003c721) bg_dt_sta_title_pane_g

0xca3d,	// (0x000392a5) bg_dt_sta_indi_pane_g1

0xecfd,	// (0x0003b565) dt_sta_signal_pane_g1

0xed05,	// (0x0003b56d) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0003c728) dt_sta_signal_pane_g

0xed0d,	// (0x0003b575) dt_sta_battery_pane_g1

0xed16,	// (0x0003b57e) dt_sta_battery_pane_t1

0xca3d,	// (0x000392a5) bg_dt_sta_control_pane_g1

0x5b2a,	// (0x00032392) fep_china_uni_eep_pane

0x5b32,	// (0x0003239a) fep_china_uni_entry_pane_ParamLimits

0x5b42,	// (0x000323aa) popup_fep_china_uni_window_g1_ParamLimits

0x5b52,	// (0x000323ba) popup_fep_china_uni_window_g2_ParamLimits

0x5b52,	// (0x000323ba) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003bfca) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003bfca) popup_fep_china_uni_window_g

0xed25,	// (0x0003b58d) fep_china_uni_eep_pane_g1

0xed2d,	// (0x0003b595) fep_china_uni_eep_pane_t1

0xeb45,	// (0x0003b3ad) aid_touch_area_size_smil_player

0x63fa,	// (0x00032c62) lc0_clock_pane

0x6433,	// (0x00032c9b) status_pane_g5_ParamLimits

0x6433,	// (0x00032c9b) status_pane_g5

0xba6f,	// (0x000382d7) popup_keymap_window

0x6413,	// (0x00032c7b) status_icon_pane

0x06e8,	// (0x0002cf50) cell_ai5_widget_pane_g3_ParamLimits

0x06fc,	// (0x0002cf64) cell_ai5_widget_pane_g4_ParamLimits

0x0708,	// (0x0002cf70) cell_ai5_widget_pane_g5_ParamLimits

0x072c,	// (0x0002cf94) cell_ai5_widget_pane_g8_ParamLimits

0x072c,	// (0x0002cf94) cell_ai5_widget_pane_g8

0x0740,	// (0x0002cfa8) cell_ai5_widget_pane_g9_ParamLimits

0x0740,	// (0x0002cfa8) cell_ai5_widget_pane_g9

0x0754,	// (0x0002cfbc) cell_ai5_widget_pane_g10_ParamLimits

0x0754,	// (0x0002cfbc) cell_ai5_widget_pane_g10

0xed3c,	// (0x0003b5a4) status_icon_pane_g1

0x4ece,	// (0x00031736) bg_popup_sub_pane_cp13

0xed44,	// (0x0003b5ac) popup_keymap_window_t1

0xb92f,	// (0x00038197) control_pane_g6_ParamLimits

0xb92f,	// (0x00038197) control_pane_g6

0xb93c,	// (0x000381a4) control_pane_g7_ParamLimits

0xb93c,	// (0x000381a4) control_pane_g7

0xb949,	// (0x000381b1) control_pane_g8_ParamLimits

0xb949,	// (0x000381b1) control_pane_g8

0x0872,	// (0x0002d0da) dt_sta_controll_pane_ParamLimits

0x087f,	// (0x0002d0e7) dt_sta_indi_pane_ParamLimits

0x0890,	// (0x0002d0f8) dt_sta_title_pane_ParamLimits

0x54c7,	// (0x00031d2f) aid_size_touch_scroll_bar_cale

0x9913,	// (0x0003617b) popup_discreet_window_ParamLimits

0x9913,	// (0x0003617b) popup_discreet_window

0x998d,	// (0x000361f5) popup_sk_window

0x6a8b,	// (0x000332f3) bg_popup_sub_pane_cp28_ParamLimits

0x6a8b,	// (0x000332f3) bg_popup_sub_pane_cp28

0xed52,	// (0x0003b5ba) popup_discreet_window_g1_ParamLimits

0xed52,	// (0x0003b5ba) popup_discreet_window_g1

0xed72,	// (0x0003b5da) popup_discreet_window_t1_ParamLimits

0xed72,	// (0x0003b5da) popup_discreet_window_t1

0xed90,	// (0x0003b5f8) popup_discreet_window_t2_ParamLimits

0xed90,	// (0x0003b5f8) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0003c72d) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0003c72d) popup_discreet_window_t

0xb7fa,	// (0x00038062) popup_sk_window_g1

0xb804,	// (0x0003806c) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0003c734) popup_sk_window_g

0xede2,	// (0x0003b64a) popup_sk_window_t1

0xedf0,	// (0x0003b658) popup_sk_window_t1_copy1

0x06d8,	// (0x0002cf40) cell_ai5_widget_pane_g2_ParamLimits

0x0800,	// (0x0002d068) cell_ai5_widget_pane_t9_ParamLimits

0x0800,	// (0x0002d068) cell_ai5_widget_pane_t9

0x4ece,	// (0x00031736) main_fep_fshwr2_pane

0x08d2,	// (0x0002d13a) aid_fshwr2_btn_pane

0x08da,	// (0x0002d142) aid_fshwr2_syb_pane

0x08e2,	// (0x0002d14a) aid_fshwr2_txt_pane

0x08ea,	// (0x0002d152) fshwr2_func_candi_pane

0x08f6,	// (0x0002d15e) fshwr2_hwr_syb_pane

0x0902,	// (0x0002d16a) fshwr2_icf_pane

0x4ece,	// (0x00031736) fshwr2_icf_bg_pane

0x090c,	// (0x0002d174) fshwr2_icf_pane_t1_ParamLimits

0x090c,	// (0x0002d174) fshwr2_icf_pane_t1

0xca3d,	// (0x000392a5) fshwr2_func_candi_pane_g1

0xee12,	// (0x0003b67a) fshwr2_func_candi_row_pane_ParamLimits

0xee12,	// (0x0003b67a) fshwr2_func_candi_row_pane

0x0923,	// (0x0002d18b) cell_fshwr2_syb_pane_ParamLimits

0x0923,	// (0x0002d18b) cell_fshwr2_syb_pane

0xccd6,	// (0x0003953e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xccd6,	// (0x0003953e) fshwr2_hwr_syb_pane_g1

0x4ece,	// (0x00031736) bg_popup_call_pane_cp01

0xee23,	// (0x0003b68b) fshwr2_func_candi_cell_pane_ParamLimits

0xee23,	// (0x0003b68b) fshwr2_func_candi_cell_pane

0xee54,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee54,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane

0xee6e,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee6e,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1

0xee8e,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee8e,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1

0x4ece,	// (0x00031736) bg_button_pane_cp08

0x5fbb,	// (0x00032823) cell_fshwr2_syb_bg_pane

0x093f,	// (0x0002d1a7) cell_fshwr2_syb_bg_pane_g1

0xeea1,	// (0x0003b709) cell_fshwr2_syb_bg_pane_t1

0x5585,	// (0x00031ded) main_tmo_pane

0xc37e,	// (0x00038be6) uni_indicator_pane_g1_ParamLimits

0xc393,	// (0x00038bfb) uni_indicator_pane_g2_ParamLimits

0xc3a9,	// (0x00038c11) uni_indicator_pane_g3_ParamLimits

0x7473,	// (0x00033cdb) uni_indicator_pane_g4_ParamLimits

0x7473,	// (0x00033cdb) uni_indicator_pane_g4

0x7487,	// (0x00033cef) uni_indicator_pane_g5_ParamLimits

0x7487,	// (0x00033cef) uni_indicator_pane_g5

0x749b,	// (0x00033d03) uni_indicator_pane_g6_ParamLimits

0x749b,	// (0x00033d03) uni_indicator_pane_g6

0xf95f,	// (0x0003c1c7) uni_indicator_pane_g_ParamLimits

0xdf70,	// (0x0003a7d8) popup_tmo_note_window_ParamLimits

0xdf70,	// (0x0003a7d8) popup_tmo_note_window

0x4ece,	// (0x00031736) fshwr2_bg_pane

0xee7f,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee7f,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0003c739) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0003c739) fshwr2_func_candi_cell_pane_g

0xca3d,	// (0x000392a5) bg_popup_window_pane_cp01

0xeeb0,	// (0x0003b718) bg_popup_window_pane_g1_cp01

0xeeb9,	// (0x0003b721) bg_popup_window_pane_cp22_ParamLimits

0xeeb9,	// (0x0003b721) bg_popup_window_pane_cp22

0xeec7,	// (0x0003b72f) listscroll_tmo_link_pane_ParamLimits

0xeec7,	// (0x0003b72f) listscroll_tmo_link_pane

0xef07,	// (0x0003b76f) popup_tmo_note_window_g1_ParamLimits

0xef07,	// (0x0003b76f) popup_tmo_note_window_g1

0xef14,	// (0x0003b77c) tmo_note_info_pane_ParamLimits

0xef14,	// (0x0003b77c) tmo_note_info_pane

0x0947,	// (0x0002d1af) list_tmo_note_info_pane_g1_ParamLimits

0x0947,	// (0x0002d1af) list_tmo_note_info_pane_g1

0xef2e,	// (0x0003b796) list_tmo_note_info_pane_g2_ParamLimits

0xef2e,	// (0x0003b796) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0003c73e) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0003c73e) list_tmo_note_info_pane_g

0xef4a,	// (0x0003b7b2) list_tmo_note_info_text_pane_ParamLimits

0xef4a,	// (0x0003b7b2) list_tmo_note_info_text_pane

0xef8c,	// (0x0003b7f4) list_tmo_link_pane

0xef99,	// (0x0003b801) scroll_pane_cp20

0xefa6,	// (0x0003b80e) list_single_tmo_link_pane_ParamLimits

0xefa6,	// (0x0003b80e) list_single_tmo_link_pane

0xefb6,	// (0x0003b81e) list_single_tmo_link_pane_t1

0xefc4,	// (0x0003b82c) list_tmo_note_info_text_pane_t1_ParamLimits

0xefc4,	// (0x0003b82c) list_tmo_note_info_text_pane_t1

0x9e59,	// (0x000366c1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9e59,	// (0x000366c1) aid_size_touch_scroll_bar_cp01

0x8e21,	// (0x00035689) aid_size_touch_slider_marker

0x9975,	// (0x000361dd) popup_settings_window_ParamLimits

0x9975,	// (0x000361dd) popup_settings_window

0x8fc3,	// (0x0003582b) popup_candi_list_indi_window

0x6349,	// (0x00032bb1) aid_touch_navi_pane_ParamLimits

0xb00b,	// (0x00037873) rs_clock_indi_pane

0xb014,	// (0x0003787c) sctrl_sk_bottom_pane_ParamLimits

0xb025,	// (0x0003788d) sctrl_sk_top_pane_ParamLimits

0xb110,	// (0x00037978) popup_fep_tooltip_window

0xeb7f,	// (0x0003b3e7) aid_size_cell_widget_grid_ParamLimits

0x06cc,	// (0x0002cf34) cell_ai5_widget_pane_g1_ParamLimits

0x06cc,	// (0x0002cf34) cell_ai5_widget_pane_g1

0x0714,	// (0x0002cf7c) cell_ai5_widget_pane_g6_ParamLimits

0x0720,	// (0x0002cf88) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0003c6bc) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0003c6bc) cell_ai5_widget_pane_g

0x0824,	// (0x0002d08c) cell_ai5_widget_pane_t10_ParamLimits

0x0824,	// (0x0002d08c) cell_ai5_widget_pane_t10

0x0836,	// (0x0002d09e) grid_ai5_widget_pane_ParamLimits

0xec34,	// (0x0003b49c) cell_contacts_ai5_widget_pane_ParamLimits

0xec34,	// (0x0003b49c) cell_contacts_ai5_widget_pane

0xeda5,	// (0x0003b60d) popup_discreet_window_t3_ParamLimits

0xeda5,	// (0x0003b60d) popup_discreet_window_t3

0xedfe,	// (0x0003b666) popup_fshwr2_char_preview_window_ParamLimits

0xedfe,	// (0x0003b666) popup_fshwr2_char_preview_window

0x095e,	// (0x0002d1c6) tmo_note_info_pane_t1

0x0973,	// (0x0002d1db) tmo_note_info_pane_t2

0x098c,	// (0x0002d1f4) tmo_note_info_pane_t3

0xef68,	// (0x0003b7d0) tmo_note_info_pane_t4

0xef7a,	// (0x0003b7e2) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0003c743) tmo_note_info_pane_t

0xef8c,	// (0x0003b7f4) list_tmo_link_pane_ParamLimits

0xef99,	// (0x0003b801) scroll_pane_cp20_ParamLimits

0x4ece,	// (0x00031736) bg_popup_fep_char_preview_window_cp01

0xefdd,	// (0x0003b845) popup_fshwr2_char_preview_window_t1

0xefeb,	// (0x0003b853) popup_candi_list_indi_window_g1

0xeff4,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane

0xf000,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1

0xf014,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2

0xf023,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0003c74e) cell_contacts_ai5_widget_pane_g

0xf036,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1

0x5585,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0b0,	// (0x0003b918) settings_container_pane

0x5fbb,	// (0x00032823) listscroll_set_pane_copy1

0x7c78,	// (0x000344e0) scroll_pane_cp121_copy1

0xf0bc,	// (0x0003b924) set_content_pane_copy1

0xf0c4,	// (0x0003b92c) aid_height_set_list_copy1_ParamLimits

0xf0c4,	// (0x0003b92c) aid_height_set_list_copy1

0x7431,	// (0x00033c99) aid_size_parent_copy1_ParamLimits

0x7431,	// (0x00033c99) aid_size_parent_copy1

0xf0d0,	// (0x0003b938) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0d0,	// (0x0003b938) button_value_adjust_pane_cp6_copy1

0x61f5,	// (0x00032a5d) list_highlight_pane_cp2_copy1_ParamLimits

0x61f5,	// (0x00032a5d) list_highlight_pane_cp2_copy1

0xf0e4,	// (0x0003b94c) list_set_pane_copy1_ParamLimits

0xf0e4,	// (0x0003b94c) list_set_pane_copy1

0xf04b,	// (0x0003b8b3) main_pane_set_t1_copy1_ParamLimits

0xf04b,	// (0x0003b8b3) main_pane_set_t1_copy1

0xf085,	// (0x0003b8ed) main_pane_set_t2_copy1_ParamLimits

0xf085,	// (0x0003b8ed) main_pane_set_t2_copy1

0xf191,	// (0x0003b9f9) main_pane_set_t3_copy1

0xf19f,	// (0x0003ba07) main_pane_set_t4_copy1

0xf0a4,	// (0x0003b90c) set_content_pane_g1_copy1_ParamLimits

0xf0a4,	// (0x0003b90c) set_content_pane_g1_copy1

0xf1ad,	// (0x0003ba15) setting_code_pane_copy1

0xf1b7,	// (0x0003ba1f) setting_slider_graphic_pane_copy1

0xf1b7,	// (0x0003ba1f) setting_slider_pane_copy1

0xf1c1,	// (0x0003ba29) setting_text_pane_copy1

0xf1cb,	// (0x0003ba33) setting_volume_pane_copy1

0xf1d4,	// (0x0003ba3c) settings_code_pane_cp2_copy1

0xf1dc,	// (0x0003ba44) settings_code_pane_cp_copy1_ParamLimits

0xf1dc,	// (0x0003ba44) settings_code_pane_cp_copy1

0xf1f0,	// (0x0003ba58) volume_set_pane_copy1

0xf1f8,	// (0x0003ba60) volume_set_pane_g10_copy1

0xf200,	// (0x0003ba68) volume_set_pane_g1_copy1

0xf208,	// (0x0003ba70) volume_set_pane_g2_copy1

0xf210,	// (0x0003ba78) volume_set_pane_g3_copy1

0xf218,	// (0x0003ba80) volume_set_pane_g4_copy1

0xf220,	// (0x0003ba88) volume_set_pane_g5_copy1

0xf228,	// (0x0003ba90) volume_set_pane_g6_copy1

0xf230,	// (0x0003ba98) volume_set_pane_g7_copy1

0xf238,	// (0x0003baa0) volume_set_pane_g8_copy1

0xf240,	// (0x0003baa8) volume_set_pane_g9_copy1

0x4f3e,	// (0x000317a6) bg_set_opt_pane_cp_copy1_ParamLimits

0x4f3e,	// (0x000317a6) bg_set_opt_pane_cp_copy1

0xf248,	// (0x0003bab0) setting_slider_pane_t1_copy1_ParamLimits

0xf248,	// (0x0003bab0) setting_slider_pane_t1_copy1

0xf266,	// (0x0003bace) setting_slider_pane_t2_copy1_ParamLimits

0xf266,	// (0x0003bace) setting_slider_pane_t2_copy1

0xf280,	// (0x0003bae8) setting_slider_pane_t3_copy1_ParamLimits

0xf280,	// (0x0003bae8) setting_slider_pane_t3_copy1

0xf298,	// (0x0003bb00) slider_set_pane_copy1_ParamLimits

0xf298,	// (0x0003bb00) slider_set_pane_copy1

0x55ec,	// (0x00031e54) set_opt_bg_pane_g1_copy2

0x55f4,	// (0x00031e5c) set_opt_bg_pane_g2_copy2

0xf2ae,	// (0x0003bb16) set_opt_bg_pane_g3_copy2

0x5604,	// (0x00031e6c) set_opt_bg_pane_g4_copy2

0x560c,	// (0x00031e74) set_opt_bg_pane_g5_copy2

0x5614,	// (0x00031e7c) set_opt_bg_pane_g6_copy2

0xf2b8,	// (0x0003bb20) set_opt_bg_pane_g7_copy2

0xf2c0,	// (0x0003bb28) set_opt_bg_pane_g8_copy2

0xf2ca,	// (0x0003bb32) set_opt_bg_pane_g9_copy2

0xb80e,	// (0x00038076) aid_size_touch_slider_mark_copy1_ParamLimits

0xb80e,	// (0x00038076) aid_size_touch_slider_mark_copy1

0xf2d4,	// (0x0003bb3c) slider_set_pane_g1_copy1

0xb822,	// (0x0003808a) slider_set_pane_g2_copy1

0xa944,	// (0x000371ac) slider_set_pane_g3_copy1_ParamLimits

0xa944,	// (0x000371ac) slider_set_pane_g3_copy1

0xa958,	// (0x000371c0) slider_set_pane_g4_copy1_ParamLimits

0xa958,	// (0x000371c0) slider_set_pane_g4_copy1

0xa970,	// (0x000371d8) slider_set_pane_g5_copy1_ParamLimits

0xa970,	// (0x000371d8) slider_set_pane_g5_copy1

0xa944,	// (0x000371ac) slider_set_pane_g6_copy1_ParamLimits

0xa944,	// (0x000371ac) slider_set_pane_g6_copy1

0xb82a,	// (0x00038092) slider_set_pane_g7_copy1_ParamLimits

0xb82a,	// (0x00038092) slider_set_pane_g7_copy1

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp2_copy1

0xf2dd,	// (0x0003bb45) setting_slider_graphic_pane_g1_copy1

0xf2e6,	// (0x0003bb4e) setting_slider_graphic_pane_t1_copy1

0xf2f6,	// (0x0003bb5e) setting_slider_graphic_pane_t2_copy1

0xf306,	// (0x0003bb6e) slider_set_pane_cp_copy1

0xf316,	// (0x0003bb7e) input_focus_pane_cp1_copy1

0xf31f,	// (0x0003bb87) list_set_text_pane_copy1

0xf327,	// (0x0003bb8f) setting_text_pane_g1_copy1

0x966c,	// (0x00035ed4) set_text_pane_t1_copy1

0xf316,	// (0x0003bb7e) input_focus_pane_cp2_copy1

0xf327,	// (0x0003bb8f) setting_code_pane_g1_copy1

0xf330,	// (0x0003bb98) setting_code_pane_t1_copy1

0xf33e,	// (0x0003bba6) list_set_graphic_pane_copy1

0x4ee2,	// (0x0003174a) bg_set_opt_pane_cp4_copy1

0x5cbd,	// (0x00032525) list_set_graphic_pane_g1_copy1_ParamLimits

0x5cbd,	// (0x00032525) list_set_graphic_pane_g1_copy1

0xf352,	// (0x0003bbba) list_set_graphic_pane_g2_copy1

0x5cd5,	// (0x0003253d) list_set_graphic_pane_t1_copy1_ParamLimits

0x5cd5,	// (0x0003253d) list_set_graphic_pane_t1_copy1

0xca3d,	// (0x000392a5) rs_clock_indi_pane_g1

0xf35a,	// (0x0003bbc2) rs_clock_indi_pane_t1

0xf368,	// (0x0003bbd0) rs_indi_pane

0xf370,	// (0x0003bbd8) rs_indi_pane_g1

0xf379,	// (0x0003bbe1) rs_indi_pane_g2

0xf382,	// (0x0003bbea) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0003c755) rs_indi_pane_g

0x5fbb,	// (0x00032823) bg_popup_preview_window_pane_cp03

0xf38b,	// (0x0003bbf3) popup_fep_tooltip_window_t1

0xd6e4,	// (0x00039f4c) popup_note2_window_g2_ParamLimits

0xd6e4,	// (0x00039f4c) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0003c4fa) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0003c4fa) popup_note2_window_g

0xdbd2,	// (0x0003a43a) bg_popup_sub_pane_cp11_ParamLimits

0xdbdf,	// (0x0003a447) cell_ai3_links_pane_g1_ParamLimits

0xdbf6,	// (0x0003a45e) cell_ai3_links_pane_t1

0x966c,	// (0x00035ed4) set_text_pane_t1_copy1_ParamLimits

0x5eca,	// (0x00032732) cell_graphic_popup_pane_cp2_ParamLimits

0x5eca,	// (0x00032732) cell_graphic_popup_pane_cp2

0xf399,	// (0x0003bc01) cell_graphic_popup_pane_g1_cp2

0x52da,	// (0x00031b42) cell_graphic_popup_pane_g2_cp2

0xf3a1,	// (0x0003bc09) cell_graphic_popup_pane_g3_cp2

0xf3a9,	// (0x0003bc11) cell_graphic_popup_pane_t2_cp2

0x52eb,	// (0x00031b53) grid_highlight_pane_cp3_cp2

0x587a,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5585,	// (0x00031ded) main_tmo_pane_ParamLimits

0xdf64,	// (0x0003a7cc) popup_tmo_big_image_note_window

0x06bc,	// (0x0002cf24) cell_ai5_widget_list_pane

0x06c4,	// (0x0002cf2c) cell_ai5_widget_lrg_icon_pane

0x095e,	// (0x0002d1c6) tmo_note_info_pane_t1_ParamLimits

0x0973,	// (0x0002d1db) tmo_note_info_pane_t2_ParamLimits

0x098c,	// (0x0002d1f4) tmo_note_info_pane_t3_ParamLimits

0xef68,	// (0x0003b7d0) tmo_note_info_pane_t4_ParamLimits

0xef7a,	// (0x0003b7e2) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0003c743) tmo_note_info_pane_t_ParamLimits

0xf0b0,	// (0x0003b918) settings_container_pane_ParamLimits

0xf30e,	// (0x0003bb76) indicator_popup_pane_cp5

0xf30e,	// (0x0003bb76) indicator_popup_pane_cp6

0xf33e,	// (0x0003bba6) list_set_graphic_pane_copy1_ParamLimits

0x4ece,	// (0x00031736) bg_popup_window_pane_cp23

0xf3b7,	// (0x0003bc1f) popup_tmo_big_image_note_window_g1

0xf3c2,	// (0x0003bc2a) popup_tmo_big_image_note_window_t1

0xf3d2,	// (0x0003bc3a) popup_tmo_big_image_note_window_t2

0xf3e2,	// (0x0003bc4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0003c75c) popup_tmo_big_image_note_window_t

0x09a1,	// (0x0002d209) cell_ai5_widget_lrg_icon_pane_g1

0x09a9,	// (0x0002d211) cell_ai5_widget_lrg_icon_pane_t1

0x09b7,	// (0x0002d21f) cell_ai5_widget_list_row_pane_ParamLimits

0x09b7,	// (0x0002d21f) cell_ai5_widget_list_row_pane

0x09d0,	// (0x0002d238) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x09d0,	// (0x0002d238) cell_ai5_widget_list_row_pane_g1

0x09dd,	// (0x0002d245) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x09dd,	// (0x0002d245) cell_ai5_widget_list_row_pane_t1

0x09f5,	// (0x0002d25d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x09f5,	// (0x0002d25d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0003c763) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0003c763) cell_ai5_widget_list_row_pane_t

0x4ece,	// (0x00031736) main_fep_vtchi_ss_pane

0xf3f2,	// (0x0003bc5a) popup_fep_char_pre_window

0xf3fa,	// (0x0003bc62) popup_fep_ituss_window

0xf405,	// (0x0003bc6d) popup_fep_vkbss_window

0xf40e,	// (0x0003bc76) grid_vkbss_keypad_pane_ParamLimits

0xf40e,	// (0x0003bc76) grid_vkbss_keypad_pane

0xf41e,	// (0x0003bc86) ituss_keypad_pane

0xf426,	// (0x0003bc8e) aid_vkbss_key_offset_ParamLimits

0xf426,	// (0x0003bc8e) aid_vkbss_key_offset

0xf435,	// (0x0003bc9d) cell_vkbss_key_pane_ParamLimits

0xf435,	// (0x0003bc9d) cell_vkbss_key_pane

0xf44b,	// (0x0003bcb3) bg_cell_vkbss_key_g1_ParamLimits

0xf44b,	// (0x0003bcb3) bg_cell_vkbss_key_g1

0xf457,	// (0x0003bcbf) cell_vkbss_key_3p_pane_ParamLimits

0xf457,	// (0x0003bcbf) cell_vkbss_key_3p_pane

0xf471,	// (0x0003bcd9) cell_vkbss_key_g1_ParamLimits

0xf471,	// (0x0003bcd9) cell_vkbss_key_g1

0xf48b,	// (0x0003bcf3) cell_vkbss_key_t1_ParamLimits

0xf48b,	// (0x0003bcf3) cell_vkbss_key_t1

0xf4b6,	// (0x0003bd1e) cell_ituss_key_pane_ParamLimits

0xf4b6,	// (0x0003bd1e) cell_ituss_key_pane

0xf4c5,	// (0x0003bd2d) bg_cell_ituss_key_g1_ParamLimits

0xf4c5,	// (0x0003bd2d) bg_cell_ituss_key_g1

0xf4d1,	// (0x0003bd39) cell_ituss_key_pane_g1_ParamLimits

0xf4d1,	// (0x0003bd39) cell_ituss_key_pane_g1

0xf4dd,	// (0x0003bd45) cell_ituss_key_pane_g2_ParamLimits

0xf4dd,	// (0x0003bd45) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0003c768) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0003c768) cell_ituss_key_pane_g

0xf4f0,	// (0x0003bd58) cell_ituss_key_t1_ParamLimits

0xf4f0,	// (0x0003bd58) cell_ituss_key_t1

0xf50e,	// (0x0003bd76) cell_ituss_key_t2_ParamLimits

0xf50e,	// (0x0003bd76) cell_ituss_key_t2

0xf52d,	// (0x0003bd95) cell_ituss_key_t3_ParamLimits

0xf52d,	// (0x0003bd95) cell_ituss_key_t3

0xf54c,	// (0x0003bdb4) cell_ituss_key_t4_ParamLimits

0xf54c,	// (0x0003bdb4) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0003c76d) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0003c76d) cell_ituss_key_t

0xf56b,	// (0x0003bdd3) cell_vkbss_key_3p_pane_g1

0xf573,	// (0x0003bddb) cell_vkbss_key_3p_pane_g2

0xf57b,	// (0x0003bde3) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0003c776) cell_vkbss_key_3p_pane_g

0x4ece,	// (0x00031736) bg_popup_fep_char_preview_window_cp02

0xf583,	// (0x0003bdeb) popup_fep_char_pre_window_t1

0x06b2,	// (0x0002cf1a) main_ai5_sk_pane

0xeff4,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf000,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf014,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf023,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0003c74e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf036,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5585,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0a07,	// (0x0002d26f) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
